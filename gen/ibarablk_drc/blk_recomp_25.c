#include "recomp.h"
#include "blk_recomp_funcs.h"

void blk_f_0C0B9F30(sh3_t *c)
{
	LOCALS;
L_0C0B9F30: BLKS(0x0C0B9F30u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0B9F32u, 1);  /* 0C0B9F30 mov.l Rm,@-Rn */
	r3 = 0x54u;  /* 0C0B9F32 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0B9F36u, 2);  /* 0C0B9F34 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C0B9F36 exts.w Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0B9F3Au, 2);  /* 0C0B9F38 mov.l Rm,@-Rn */
	IF(0x0C0B9F3Au); MACL = r8 * r3;  /* 0C0B9F3A mul.l Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0B9F3Eu, 3);  /* 0C0B9F3C mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0B9F40u, 1);  /* 0C0B9F3E mov.l Rm,@-Rn */
	IF(0x0C0B9F40u); r2 = MACL;  /* 0C0B9F40 sts macl,Rn */
	r0 = 0xC297B40u; UPD(0x0C0B9F44u, 2);  /* 0C0B9F42 mov.l @(disp,pc),Rn */
	IF(0x0C0B9F44u); r15 -= 4; W32(r15, PR); UPD(0x0C0B9F46u, 1);  /* 0C0B9F44 sts.l pr,@-Rn */
	r0 += r2;  /* 0C0B9F46 add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C0B9F4Au, 2);  /* 0C0B9F48 mov.l @(disp,Rm),Rn */
	r0 = 0x13u;  /* 0C0B9F4A mov #imm,Rn */
	T = r2 > r0;  /* 0C0B9F4C cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0B9FD4u, 5); goto L_0C0B9FD4; } goto L_0C0B9F52; }  /* 0C0B9F4E bt/s */
L_0C0B9F52: BLKS(0x0C0B9F52u);
	r0 = 0xC0B9F60u;  /* 0C0B9F52 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C0B9F54 add Rm,Rn */
	IF(0x0C0B9F56u); r4 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C0B9F58u, 4);  /* 0C0B9F56 mov.w @(r0,Rm),Rn */
	IF(0x0C0B9F58u); { u32 tv_ = (r4 + 0x0C0B9F5Cu); u32 t_ = PHYS(tv_); IF(0x0C0B9F5Au); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0B9F90u: goto L_0C0B9F90; case 0x0C0BA010u: goto L_0C0BA010; case 0x0C0BA080u: goto L_0C0BA080; default: JUMPD(tv_); } }  /* 0C0B9F58 braf Rn */
L_0C0B9F90: BLKS(0x0C0B9F90u);
	r9 = 0x54u;  /* 0C0B9F90 mov #imm,Rn */
	IF(0x0C0B9F92u); MACL = r8 * r9;  /* 0C0B9F92 mul.l Rm,Rn */
	r8 = 0xC297B40u; UPD(0x0C0B9F96u, 4);  /* 0C0B9F94 mov.l @(disp,pc),Rn */
	IF(0x0C0B9F96u); r3 = MACL;  /* 0C0B9F96 sts macl,Rn */
	r3 += r8;  /* 0C0B9F98 add Rm,Rn */
	r5 = R32(r3 + 0x28u); UPD(0x0C0B9F9Cu, 3);  /* 0C0B9F9A mov.l @(disp,Rm),Rn */
	r6 = R32(r3 + 0x30u); UPD(0x0C0B9F9Eu, 1);  /* 0C0B9F9C mov.l @(disp,Rm),Rn */
	r5 += r6;  /* 0C0B9F9E add Rm,Rn */
	r6 = R32(r3 + 0x2Cu); UPD(0x0C0B9FA2u, 2);  /* 0C0B9FA0 mov.l @(disp,Rm),Rn */
	r7 = R32(r3 + 0x34u); UPD(0x0C0B9FA4u, 1);  /* 0C0B9FA2 mov.l @(disp,Rm),Rn */
	r6 += r7;  /* 0C0B9FA4 add Rm,Rn */
	r7 = 0xFF600000u; UPD(0x0C0B9FA8u, 2);  /* 0C0B9FA6 mov.l @(disp,pc),Rn */
	W32(r3 + 0x28u, r5); UPD(0x0C0B9FAAu, 1);  /* 0C0B9FA8 mov.l Rm,@(disp,Rn) */
	r7 += r5;  /* 0C0B9FAA add Rm,Rn */
	IF(0x0C0B9FACu); T = (s32)r7 >= 0;  /* 0C0B9FAC cmp/pz Rn */
	{ u32 c_ = !T; W32(r3 + 0x2Cu, r6); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0BA000u, 5); goto L_0C0BA000; } UPD(0x0C0B9FB2u, 1); goto L_0C0B9FB2; }  /* 0C0B9FAE bf/s */
L_0C0B9FB2: BLKS(0x0C0B9FB2u);
	r10 = 0xC00000u; UPD(0x0C0B9FB4u, 1);  /* 0C0B9FB2 mov.l @(disp,pc),Rn */
	T = (s32)r7 > (s32)r10;  /* 0C0B9FB4 cmp/gt Rm,Rn */
	{ u32 c_ = T; r5 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0B9FD2u, 4); goto L_0C0B9FD2; } goto L_0C0B9FBA; }  /* 0C0B9FB6 bt/s */
L_0C0B9FBA: BLKS(0x0C0B9FBAu);
	r2 = 0xC3C4048u; UPD(0x0C0B9FBCu, 2);  /* 0C0B9FBA mov.l @(disp,pc),Rn */
	r0 = R32(r2); UPD(0x0C0B9FBEu, 1);  /* 0C0B9FBC mov.l @Rm,Rn */
	r11 = 0xFF880000u; UPD(0x0C0B9FC0u, 1);  /* 0C0B9FBE mov.l @(disp,pc),Rn */
	r2 = r6;  /* 0C0B9FC0 mov Rm,Rn */
	r2 -= r0;  /* 0C0B9FC2 sub Rm,Rn */
	r2 += r11;  /* 0C0B9FC4 add Rm,Rn */
	IF(0x0C0B9FC6u); T = (s32)r2 >= 0;  /* 0C0B9FC6 cmp/pz Rn */
	if (!T) { UPD(0x0C0B9FF0u, 7); goto L_0C0B9FF0; }  /* 0C0B9FC8 bf */
L_0C0B9FCA: BLKS(0x0C0B9FCAu);
	r4 = 0x980000u; UPD(0x0C0B9FCCu, 1);  /* 0C0B9FCA mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r4;  /* 0C0B9FCC cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0B9FD4u, 4); goto L_0C0B9FD4; }  /* 0C0B9FCE bf */
L_0C0B9FD0: BLKS(0x0C0B9FD0u);
	r5 = 0x0u;  /* 0C0B9FD0 mov #imm,Rn */
	UPD(0x0C0B9FD2u, 1);
L_0C0B9FD2: BLKS(0x0C0B9FD2u);
	W32(r3, r5); UPD(0x0C0B9FD4u, 1);  /* 0C0B9FD2 mov.l Rm,@Rn */
L_0C0B9FD4: BLKS(0x0C0B9FD4u);
	r15 = r14;  /* 0C0B9FD4 mov Rm,Rn */
	IF(0x0C0B9FD6u); PR = R32(r15); r15 += 4; UPD(0x0C0B9FD8u, 2);  /* 0C0B9FD6 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0B9FDAu, 1);  /* 0C0B9FD8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0B9FDCu, 1);  /* 0C0B9FDA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0B9FDEu, 1);  /* 0C0B9FDC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0B9FE0u, 1);  /* 0C0B9FDE mov.l @Rm+,Rn */
	IF(0x0C0B9FE0u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0B9FE0 rts */
L_0C0B9FF0: BLKS(0x0C0B9FF0u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0B9FCAu, 3); goto L_0C0B9FCA; }  /* 0C0B9FF0 bra */
L_0C0BA000: BLKS(0x0C0BA000u);
	{ r7 = 0u - r7; /* slot neg Rm,Rn */ UPD(0x0C0B9FB2u, 3); goto L_0C0B9FB2; }  /* 0C0BA000 bra */
L_0C0BA010: BLKS(0x0C0BA010u);
	r9 = 0xC0BB920u; UPD(0x0C0BA012u, 1);  /* 0C0BA010 mov.l @(disp,pc),Rn */
	IF(0x0C0BA012u); { u32 t_ = r9; PR = 0x0C0BA016u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BB920, 0x0C0BB920u, 0x0C0BA016u); }  /* 0C0BA012 jsr @Rn */
L_0C0BA016: BLKS(0x0C0BA016u);
	IF(0x0C0BA016u); T = (s32)r0 >= 0;  /* 0C0BA016 cmp/pz Rn */
	{ u32 c_ = !T; r2 = 0x54u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BA060u, 4); goto L_0C0BA060; } goto L_0C0BA01C; }  /* 0C0BA018 bf/s */
L_0C0BA01C: BLKS(0x0C0BA01Cu);
	IF(0x0C0BA01Cu); MACL = r8 * r2;  /* 0C0BA01C mul.l Rm,Rn */
	r11 = 0xC297B40u; UPD(0x0C0BA020u, 4);  /* 0C0BA01E mov.l @(disp,pc),Rn */
	IF(0x0C0BA020u); r9 = MACL;  /* 0C0BA020 sts macl,Rn */
	IF(0x0C0BA022u); MACL = r0 * r2;  /* 0C0BA022 mul.l Rm,Rn */
	r9 += r11;  /* 0C0BA024 add Rm,Rn */
	r9 += 0x44u;  /* 0C0BA026 add #imm,Rn */
	IF(0x0C0BA028u); r8 = MACL;  /* 0C0BA028 sts macl,Rn */
	r8 += r11;  /* 0C0BA02A add Rm,Rn */
	r8 += 0x44u;  /* 0C0BA02C add #imm,Rn */
	r10 = (u32)(s32)(s16)R16(r8); UPD(0x0C0BA030u, 9);  /* 0C0BA02E mov.w @Rm,Rn */
	W16(r9, r10); UPD(0x0C0BA032u, 1);  /* 0C0BA030 mov.w Rm,@Rn */
	r4 = r10;  /* 0C0BA032 mov Rm,Rn */
	r9 += 0xFFFFFFBCu;  /* 0C0BA034 add #imm,Rn */
	r0 = 0xC069B20u; UPD(0x0C0BA038u, 3);  /* 0C0BA036 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFBCu;  /* 0C0BA038 add #imm,Rn */
	r11 = R32(r9 + 0x38u); UPD(0x0C0BA03Cu, 2);  /* 0C0BA03A mov.l @(disp,Rm),Rn */
	IF(0x0C0BA03Cu); { u32 t_ = r0; PR = 0x0C0BA040u; r5 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0BA040u); }  /* 0C0BA03C jsr @Rn */
L_0C0BA040: BLKS(0x0C0BA040u);
	r4 = r10;  /* 0C0BA040 mov Rm,Rn */
	r6 = R32(r8 + 0x28u); UPD(0x0C0BA044u, 2);  /* 0C0BA042 mov.l @(disp,Rm),Rn */
	r5 = r11;  /* 0C0BA044 mov Rm,Rn */
	r10 = 0xC069AF0u; UPD(0x0C0BA048u, 2);  /* 0C0BA046 mov.l @(disp,pc),Rn */
	r6 += r0;  /* 0C0BA048 add Rm,Rn */
	IF(0x0C0BA04Au); { u32 t_ = r10; PR = 0x0C0BA04Eu; W32(r9 + 0x28u, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0BA04Eu); }  /* 0C0BA04A jsr @Rn */
L_0C0BA04E: BLKS(0x0C0BA04Eu);
	r7 = R32(r8 + 0x2Cu); UPD(0x0C0BA050u, 1);  /* 0C0BA04E mov.l @(disp,Rm),Rn */
	r7 += r0;  /* 0C0BA050 add Rm,Rn */
	{ W32(r9 + 0x2Cu, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0B9FD4u, 4); goto L_0C0B9FD4; }  /* 0C0BA052 bra */
L_0C0BA060: BLKS(0x0C0BA060u);
	r3 = 0xC0BB980u; UPD(0x0C0BA062u, 1);  /* 0C0BA060 mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C0BA062 mov Rm,Rn */
	r15 = r14;  /* 0C0BA064 mov Rm,Rn */
	IF(0x0C0BA066u); PR = R32(r15); r15 += 4; UPD(0x0C0BA068u, 3);  /* 0C0BA066 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0BA06Au, 1);  /* 0C0BA068 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0BA06Cu, 1);  /* 0C0BA06A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0BA06Eu, 1);  /* 0C0BA06C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0BA070u, 1);  /* 0C0BA06E mov.l @Rm+,Rn */
	IF(0x0C0BA070u); { u32 tv_ = r3; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0BB980u: goto L_0C0BB980; default: JUMPD(tv_); } }  /* 0C0BA070 jmp @Rn */
L_0C0BA080: BLKS(0x0C0BA080u);
	r9 = 0x54u;  /* 0C0BA080 mov #imm,Rn */
	IF(0x0C0BA082u); MACL = r8 * r9;  /* 0C0BA082 mul.l Rm,Rn */
	r5 = 0xC297B40u; UPD(0x0C0BA086u, 4);  /* 0C0BA084 mov.l @(disp,pc),Rn */
	IF(0x0C0BA086u); r9 = MACL;  /* 0C0BA086 sts macl,Rn */
	r9 += r5;  /* 0C0BA088 add Rm,Rn */
	r0 = r9;  /* 0C0BA08A mov Rm,Rn */
	r0 += 0x50u;  /* 0C0BA08C add #imm,Rn */
	r4 = (u32)(s32)(s8)R8(r0); UPD(0x0C0BA090u, 5);  /* 0C0BA08E mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C0BA090 add #imm,Rn */
	W8(r0, r4); UPD(0x0C0BA094u, 2);  /* 0C0BA092 mov.b Rm,@Rn */
	r0 = r4 & 0xFF;  /* 0C0BA094 extu.b Rm,Rn */
	T = r0 == 0x3u;  /* 0C0BA096 cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C0B9FD4u, 5); goto L_0C0B9FD4; }  /* 0C0BA098 bf */
L_0C0BA09A: BLKS(0x0C0BA09Au);
	r4 = r8;  /* 0C0BA09A mov Rm,Rn */
	r3 = 0xC0B9E20u; UPD(0x0C0BA09Eu, 2);  /* 0C0BA09C mov.l @(disp,pc),Rn */
	r7 = R32(r9 + 0xCu); UPD(0x0C0BA0A0u, 1);  /* 0C0BA09E mov.l @(disp,Rm),Rn */
	r8 = 0x0u;  /* 0C0BA0A0 mov #imm,Rn */
	IF(0x0C0BA0A2u); { u32 t_ = r3; PR = 0x0C0BA0A6u; W32(r9 + 0x8u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C0B9E20, 0x0C0B9E20u, 0x0C0BA0A6u); }  /* 0C0BA0A2 jsr @Rn */
L_0C0BA0A6: BLKS(0x0C0BA0A6u);
	{ W32(r9 + 0x3Cu, r8); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0B9FD4u, 3); goto L_0C0B9FD4; }  /* 0C0BA0A6 bra */
L_0C0BB980: BLKS(0x0C0BB980u);
	r2 = (u32)(s32)(s16)r4;  /* 0C0BB980 exts.w Rm,Rn */
	r0 = 0x54u;  /* 0C0BB982 mov #imm,Rn */
	IF(0x0C0BB984u); MACL = r2 * r0;  /* 0C0BB984 mul.l Rm,Rn */
	r6 = 0xC297B40u; UPD(0x0C0BB988u, 5);  /* 0C0BB986 mov.l @(disp,pc),Rn */
	r4 = 0x1u;  /* 0C0BB988 mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0BB98Cu, 2);  /* 0C0BB98A mov.l Rm,@-Rn */
	IF(0x0C0BB98Cu); r0 = MACL;  /* 0C0BB98C sts macl,Rn */
	r0 += r6;  /* 0C0BB98E add Rm,Rn */
	W32(r0 + 0x8u, r4); UPD(0x0C0BB992u, 3);  /* 0C0BB990 mov.l Rm,@(disp,Rn) */
	r1 = 0x5u;  /* 0C0BB992 mov #imm,Rn */
	r5 = 0x40000000u; UPD(0x0C0BB996u, 2);  /* 0C0BB994 mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C0BB996 mov #imm,Rn */
	W32(r0, r5); UPD(0x0C0BB99Au, 2);  /* 0C0BB998 mov.l Rm,@Rn */
	r14 = r15;  /* 0C0BB99A mov Rm,Rn */
	W32(r0 + 0x4u, r1); UPD(0x0C0BB99Eu, 2);  /* 0C0BB99C mov.l Rm,@(disp,Rn) */
	W32(r0 + 0x10u, r4); UPD(0x0C0BB9A0u, 1);  /* 0C0BB99E mov.l Rm,@(disp,Rn) */
	r7 = 0xC1F7E08u; UPD(0x0C0BB9A2u, 1);  /* 0C0BB9A0 mov.l @(disp,pc),Rn */
	r3 = R32(r7 + 0x2Cu); UPD(0x0C0BB9A4u, 1);  /* 0C0BB9A2 mov.l @(disp,Rm),Rn */
	W32(r0 + 0x24u, r3); UPD(0x0C0BB9A6u, 1);  /* 0C0BB9A4 mov.l Rm,@(disp,Rn) */
	r6 = R32(r7 + 0x28u); UPD(0x0C0BB9A8u, 1);  /* 0C0BB9A6 mov.l @(disp,Rm),Rn */
	W32(r0 + 0x14u, r6); UPD(0x0C0BB9AAu, 1);  /* 0C0BB9A8 mov.l Rm,@(disp,Rn) */
	r1 = R32(r6 + 0x10u); UPD(0x0C0BB9ACu, 1);  /* 0C0BB9AA mov.l @(disp,Rm),Rn */
	W32(r0 + 0x18u, r1); UPD(0x0C0BB9AEu, 1);  /* 0C0BB9AC mov.l Rm,@(disp,Rn) */
	r5 = R32(r1); UPD(0x0C0BB9B0u, 1);  /* 0C0BB9AE mov.l @Rm,Rn */
	W32(r0 + 0x1Cu, r5); UPD(0x0C0BB9B2u, 1);  /* 0C0BB9B0 mov.l Rm,@(disp,Rn) */
	r7 = R32(r1 + 0x4u); UPD(0x0C0BB9B4u, 1);  /* 0C0BB9B2 mov.l @(disp,Rm),Rn */
	r6 = 0xC2380C4u; UPD(0x0C0BB9B6u, 1);  /* 0C0BB9B4 mov.l @(disp,pc),Rn */
	W32(r0 + 0x20u, r7); UPD(0x0C0BB9B8u, 1);  /* 0C0BB9B6 mov.l Rm,@(disp,Rn) */
	r5 = (u32)(s32)(s16)R16(r6); UPD(0x0C0BB9BAu, 1);  /* 0C0BB9B8 mov.w @Rm,Rn */
	r0 += 0x4Eu;  /* 0C0BB9BA add #imm,Rn */
	W16(r0, r5); UPD(0x0C0BB9BEu, 2);  /* 0C0BB9BC mov.w Rm,@Rn */
	r0 += 0xFFFFFFF6u;  /* 0C0BB9BE add #imm,Rn */
	W16(r0, r4); UPD(0x0C0BB9C2u, 2);  /* 0C0BB9C0 mov.w Rm,@Rn */
	r3 = 0x207C0C0u; UPD(0x0C0BB9C4u, 1);  /* 0C0BB9C2 mov.l @(disp,pc),Rn */
	r0 += 0xFFFFFFBCu;  /* 0C0BB9C4 add #imm,Rn */
	W32(r0 + 0x3Cu, r3); UPD(0x0C0BB9C8u, 2);  /* 0C0BB9C6 mov.l Rm,@(disp,Rn) */
	r1 = 0x808080u; UPD(0x0C0BB9CAu, 1);  /* 0C0BB9C8 mov.l @(disp,pc),Rn */
	r0 += 0x40u;  /* 0C0BB9CA add #imm,Rn */
	W32(r0, r1); UPD(0x0C0BB9CEu, 2);  /* 0C0BB9CC mov.l Rm,@Rn */
	r15 = r14;  /* 0C0BB9CE mov Rm,Rn */
	IF(0x0C0BB9D0u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0BB9D0 rts */
}

void blk_f_0C0BA0E0(sh3_t *c)
{
	LOCALS;
L_0C0BA0E0: BLKS(0x0C0BA0E0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0BA0E2u, 1);  /* 0C0BA0E0 mov.l Rm,@-Rn */
	r3 = 0x54u;  /* 0C0BA0E2 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0BA0E6u, 2);  /* 0C0BA0E4 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C0BA0E6 exts.w Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0BA0EAu, 2);  /* 0C0BA0E8 mov.l Rm,@-Rn */
	IF(0x0C0BA0EAu); MACL = r8 * r3;  /* 0C0BA0EA mul.l Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0BA0EEu, 3);  /* 0C0BA0EC mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0BA0F0u, 1);  /* 0C0BA0EE mov.l Rm,@-Rn */
	IF(0x0C0BA0F0u); r2 = MACL;  /* 0C0BA0F0 sts macl,Rn */
	r0 = 0xC297B40u; UPD(0x0C0BA0F4u, 2);  /* 0C0BA0F2 mov.l @(disp,pc),Rn */
	IF(0x0C0BA0F4u); r15 -= 4; W32(r15, PR); UPD(0x0C0BA0F6u, 1);  /* 0C0BA0F4 sts.l pr,@-Rn */
	r0 += r2;  /* 0C0BA0F6 add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C0BA0FAu, 2);  /* 0C0BA0F8 mov.l @(disp,Rm),Rn */
	r0 = 0x1Bu;  /* 0C0BA0FA mov #imm,Rn */
	T = r2 > r0;  /* 0C0BA0FC cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0BA194u, 5); goto L_0C0BA194; } goto L_0C0BA102; }  /* 0C0BA0FE bt/s */
L_0C0BA102: BLKS(0x0C0BA102u);
	r0 = 0xC0BA110u;  /* 0C0BA102 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C0BA104 add Rm,Rn */
	IF(0x0C0BA106u); r4 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C0BA108u, 4);  /* 0C0BA106 mov.w @(r0,Rm),Rn */
	IF(0x0C0BA108u); { u32 tv_ = (r4 + 0x0C0BA10Cu); u32 t_ = PHYS(tv_); IF(0x0C0BA10Au); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0BA150u: goto L_0C0BA150; case 0x0C0BA1D0u: goto L_0C0BA1D0; case 0x0C0BA240u: goto L_0C0BA240; default: JUMPD(tv_); } }  /* 0C0BA108 braf Rn */
L_0C0BA150: BLKS(0x0C0BA150u);
	r9 = 0x54u;  /* 0C0BA150 mov #imm,Rn */
	IF(0x0C0BA152u); MACL = r8 * r9;  /* 0C0BA152 mul.l Rm,Rn */
	r8 = 0xC297B40u; UPD(0x0C0BA156u, 4);  /* 0C0BA154 mov.l @(disp,pc),Rn */
	IF(0x0C0BA156u); r3 = MACL;  /* 0C0BA156 sts macl,Rn */
	r3 += r8;  /* 0C0BA158 add Rm,Rn */
	r5 = R32(r3 + 0x28u); UPD(0x0C0BA15Cu, 3);  /* 0C0BA15A mov.l @(disp,Rm),Rn */
	r6 = R32(r3 + 0x30u); UPD(0x0C0BA15Eu, 1);  /* 0C0BA15C mov.l @(disp,Rm),Rn */
	r5 += r6;  /* 0C0BA15E add Rm,Rn */
	r6 = R32(r3 + 0x2Cu); UPD(0x0C0BA162u, 2);  /* 0C0BA160 mov.l @(disp,Rm),Rn */
	r7 = R32(r3 + 0x34u); UPD(0x0C0BA164u, 1);  /* 0C0BA162 mov.l @(disp,Rm),Rn */
	r6 += r7;  /* 0C0BA164 add Rm,Rn */
	r7 = 0xFF600000u; UPD(0x0C0BA168u, 2);  /* 0C0BA166 mov.l @(disp,pc),Rn */
	W32(r3 + 0x28u, r5); UPD(0x0C0BA16Au, 1);  /* 0C0BA168 mov.l Rm,@(disp,Rn) */
	r7 += r5;  /* 0C0BA16A add Rm,Rn */
	IF(0x0C0BA16Cu); T = (s32)r7 >= 0;  /* 0C0BA16C cmp/pz Rn */
	{ u32 c_ = !T; W32(r3 + 0x2Cu, r6); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0BA1C0u, 5); goto L_0C0BA1C0; } UPD(0x0C0BA172u, 1); goto L_0C0BA172; }  /* 0C0BA16E bf/s */
L_0C0BA172: BLKS(0x0C0BA172u);
	r10 = 0xD00000u; UPD(0x0C0BA174u, 1);  /* 0C0BA172 mov.l @(disp,pc),Rn */
	T = (s32)r7 > (s32)r10;  /* 0C0BA174 cmp/gt Rm,Rn */
	{ u32 c_ = T; r5 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BA192u, 4); goto L_0C0BA192; } goto L_0C0BA17A; }  /* 0C0BA176 bt/s */
L_0C0BA17A: BLKS(0x0C0BA17Au);
	r2 = 0xC3C4048u; UPD(0x0C0BA17Cu, 2);  /* 0C0BA17A mov.l @(disp,pc),Rn */
	r0 = R32(r2); UPD(0x0C0BA17Eu, 1);  /* 0C0BA17C mov.l @Rm,Rn */
	r11 = 0xFF880000u; UPD(0x0C0BA180u, 1);  /* 0C0BA17E mov.l @(disp,pc),Rn */
	r2 = r6;  /* 0C0BA180 mov Rm,Rn */
	r2 -= r0;  /* 0C0BA182 sub Rm,Rn */
	r2 += r11;  /* 0C0BA184 add Rm,Rn */
	IF(0x0C0BA186u); T = (s32)r2 >= 0;  /* 0C0BA186 cmp/pz Rn */
	if (!T) { UPD(0x0C0BA1B0u, 7); goto L_0C0BA1B0; }  /* 0C0BA188 bf */
L_0C0BA18A: BLKS(0x0C0BA18Au);
	r4 = 0xA80000u; UPD(0x0C0BA18Cu, 1);  /* 0C0BA18A mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r4;  /* 0C0BA18C cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0BA194u, 4); goto L_0C0BA194; }  /* 0C0BA18E bf */
L_0C0BA190: BLKS(0x0C0BA190u);
	r5 = 0x0u;  /* 0C0BA190 mov #imm,Rn */
	UPD(0x0C0BA192u, 1);
L_0C0BA192: BLKS(0x0C0BA192u);
	W32(r3, r5); UPD(0x0C0BA194u, 1);  /* 0C0BA192 mov.l Rm,@Rn */
L_0C0BA194: BLKS(0x0C0BA194u);
	r15 = r14;  /* 0C0BA194 mov Rm,Rn */
	IF(0x0C0BA196u); PR = R32(r15); r15 += 4; UPD(0x0C0BA198u, 2);  /* 0C0BA196 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0BA19Au, 1);  /* 0C0BA198 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0BA19Cu, 1);  /* 0C0BA19A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0BA19Eu, 1);  /* 0C0BA19C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0BA1A0u, 1);  /* 0C0BA19E mov.l @Rm+,Rn */
	IF(0x0C0BA1A0u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0BA1A0 rts */
L_0C0BA1B0: BLKS(0x0C0BA1B0u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0BA18Au, 3); goto L_0C0BA18A; }  /* 0C0BA1B0 bra */
L_0C0BA1C0: BLKS(0x0C0BA1C0u);
	{ r7 = 0u - r7; /* slot neg Rm,Rn */ UPD(0x0C0BA172u, 3); goto L_0C0BA172; }  /* 0C0BA1C0 bra */
L_0C0BA1D0: BLKS(0x0C0BA1D0u);
	r9 = 0xC0BB920u; UPD(0x0C0BA1D2u, 1);  /* 0C0BA1D0 mov.l @(disp,pc),Rn */
	IF(0x0C0BA1D2u); { u32 t_ = r9; PR = 0x0C0BA1D6u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BB920, 0x0C0BB920u, 0x0C0BA1D6u); }  /* 0C0BA1D2 jsr @Rn */
L_0C0BA1D6: BLKS(0x0C0BA1D6u);
	IF(0x0C0BA1D6u); T = (s32)r0 >= 0;  /* 0C0BA1D6 cmp/pz Rn */
	{ u32 c_ = !T; r2 = 0x54u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BA220u, 4); goto L_0C0BA220; } goto L_0C0BA1DC; }  /* 0C0BA1D8 bf/s */
L_0C0BA1DC: BLKS(0x0C0BA1DCu);
	IF(0x0C0BA1DCu); MACL = r8 * r2;  /* 0C0BA1DC mul.l Rm,Rn */
	r11 = 0xC297B40u; UPD(0x0C0BA1E0u, 4);  /* 0C0BA1DE mov.l @(disp,pc),Rn */
	IF(0x0C0BA1E0u); r9 = MACL;  /* 0C0BA1E0 sts macl,Rn */
	IF(0x0C0BA1E2u); MACL = r0 * r2;  /* 0C0BA1E2 mul.l Rm,Rn */
	r9 += r11;  /* 0C0BA1E4 add Rm,Rn */
	r9 += 0x44u;  /* 0C0BA1E6 add #imm,Rn */
	IF(0x0C0BA1E8u); r8 = MACL;  /* 0C0BA1E8 sts macl,Rn */
	r8 += r11;  /* 0C0BA1EA add Rm,Rn */
	r8 += 0x44u;  /* 0C0BA1EC add #imm,Rn */
	r10 = (u32)(s32)(s16)R16(r8); UPD(0x0C0BA1F0u, 9);  /* 0C0BA1EE mov.w @Rm,Rn */
	W16(r9, r10); UPD(0x0C0BA1F2u, 1);  /* 0C0BA1F0 mov.w Rm,@Rn */
	r4 = r10;  /* 0C0BA1F2 mov Rm,Rn */
	r9 += 0xFFFFFFBCu;  /* 0C0BA1F4 add #imm,Rn */
	r0 = 0xC069B20u; UPD(0x0C0BA1F8u, 3);  /* 0C0BA1F6 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFBCu;  /* 0C0BA1F8 add #imm,Rn */
	r11 = R32(r9 + 0x38u); UPD(0x0C0BA1FCu, 2);  /* 0C0BA1FA mov.l @(disp,Rm),Rn */
	IF(0x0C0BA1FCu); { u32 t_ = r0; PR = 0x0C0BA200u; r5 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0BA200u); }  /* 0C0BA1FC jsr @Rn */
L_0C0BA200: BLKS(0x0C0BA200u);
	r4 = r10;  /* 0C0BA200 mov Rm,Rn */
	r6 = R32(r8 + 0x28u); UPD(0x0C0BA204u, 2);  /* 0C0BA202 mov.l @(disp,Rm),Rn */
	r5 = r11;  /* 0C0BA204 mov Rm,Rn */
	r10 = 0xC069AF0u; UPD(0x0C0BA208u, 2);  /* 0C0BA206 mov.l @(disp,pc),Rn */
	r6 += r0;  /* 0C0BA208 add Rm,Rn */
	IF(0x0C0BA20Au); { u32 t_ = r10; PR = 0x0C0BA20Eu; W32(r9 + 0x28u, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0BA20Eu); }  /* 0C0BA20A jsr @Rn */
L_0C0BA20E: BLKS(0x0C0BA20Eu);
	r7 = R32(r8 + 0x2Cu); UPD(0x0C0BA210u, 1);  /* 0C0BA20E mov.l @(disp,Rm),Rn */
	r7 += r0;  /* 0C0BA210 add Rm,Rn */
	{ W32(r9 + 0x2Cu, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0BA194u, 4); goto L_0C0BA194; }  /* 0C0BA212 bra */
L_0C0BA220: BLKS(0x0C0BA220u);
	r3 = 0xC0BB9F0u; UPD(0x0C0BA222u, 1);  /* 0C0BA220 mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C0BA222 mov Rm,Rn */
	r15 = r14;  /* 0C0BA224 mov Rm,Rn */
	IF(0x0C0BA226u); PR = R32(r15); r15 += 4; UPD(0x0C0BA228u, 3);  /* 0C0BA226 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0BA22Au, 1);  /* 0C0BA228 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0BA22Cu, 1);  /* 0C0BA22A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0BA22Eu, 1);  /* 0C0BA22C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0BA230u, 1);  /* 0C0BA22E mov.l @Rm+,Rn */
	IF(0x0C0BA230u); { u32 tv_ = r3; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0BB9F0u: TAIL(blk_f_0C0BB9F0); default: JUMPD(tv_); } }  /* 0C0BA230 jmp @Rn */
L_0C0BA240: BLKS(0x0C0BA240u);
	r9 = 0x54u;  /* 0C0BA240 mov #imm,Rn */
	IF(0x0C0BA242u); MACL = r8 * r9;  /* 0C0BA242 mul.l Rm,Rn */
	r5 = 0xC297B40u; UPD(0x0C0BA246u, 4);  /* 0C0BA244 mov.l @(disp,pc),Rn */
	IF(0x0C0BA246u); r9 = MACL;  /* 0C0BA246 sts macl,Rn */
	r9 += r5;  /* 0C0BA248 add Rm,Rn */
	r0 = r9;  /* 0C0BA24A mov Rm,Rn */
	r0 += 0x50u;  /* 0C0BA24C add #imm,Rn */
	r4 = (u32)(s32)(s8)R8(r0); UPD(0x0C0BA250u, 5);  /* 0C0BA24E mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C0BA250 add #imm,Rn */
	W8(r0, r4); UPD(0x0C0BA254u, 2);  /* 0C0BA252 mov.b Rm,@Rn */
	r0 = r4 & 0xFF;  /* 0C0BA254 extu.b Rm,Rn */
	T = r0 == 0x3u;  /* 0C0BA256 cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C0BA194u, 5); goto L_0C0BA194; }  /* 0C0BA258 bf */
L_0C0BA25A: BLKS(0x0C0BA25Au);
	r4 = r8;  /* 0C0BA25A mov Rm,Rn */
	r3 = 0xC0B9E20u; UPD(0x0C0BA25Eu, 2);  /* 0C0BA25C mov.l @(disp,pc),Rn */
	r7 = R32(r9 + 0xCu); UPD(0x0C0BA260u, 1);  /* 0C0BA25E mov.l @(disp,Rm),Rn */
	r8 = 0x0u;  /* 0C0BA260 mov #imm,Rn */
	IF(0x0C0BA262u); { u32 t_ = r3; PR = 0x0C0BA266u; W32(r9 + 0x8u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C0B9E20, 0x0C0B9E20u, 0x0C0BA266u); }  /* 0C0BA262 jsr @Rn */
L_0C0BA266: BLKS(0x0C0BA266u);
	{ W32(r9 + 0x3Cu, r8); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0BA194u, 3); goto L_0C0BA194; }  /* 0C0BA266 bra */
}

void blk_f_0C0BA2A0(sh3_t *c)
{
	LOCALS;
L_0C0BA2A0: BLKS(0x0C0BA2A0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0BA2A2u, 1);  /* 0C0BA2A0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0BA2A4u, 1);  /* 0C0BA2A2 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C0BA2A4 exts.w Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0BA2A8u, 2);  /* 0C0BA2A6 mov.l Rm,@-Rn */
	r9 = 0x54u;  /* 0C0BA2A8 mov #imm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0BA2ACu, 2);  /* 0C0BA2AA mov.l Rm,@-Rn */
	IF(0x0C0BA2ACu); MACL = r8 * r9;  /* 0C0BA2AC mul.l Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0BA2B0u, 3);  /* 0C0BA2AE mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0BA2B2u, 1);  /* 0C0BA2B0 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0BA2B4u, 1);  /* 0C0BA2B2 mov.l Rm,@-Rn */
	IF(0x0C0BA2B4u); r13 = MACL;  /* 0C0BA2B4 sts macl,Rn */
	r10 = 0xC297B40u; UPD(0x0C0BA2B8u, 2);  /* 0C0BA2B6 mov.l @(disp,pc),Rn */
	IF(0x0C0BA2B8u); r15 -= 4; W32(r15, PR); UPD(0x0C0BA2BAu, 1);  /* 0C0BA2B8 sts.l pr,@-Rn */
	r13 += r10;  /* 0C0BA2BA add Rm,Rn */
	r0 = R32(r13 + 0x8u); UPD(0x0C0BA2BEu, 2);  /* 0C0BA2BC mov.l @(disp,Rm),Rn */
	IF(0x0C0BA2BEu); T = (s32)r0 >= 0;  /* 0C0BA2BE cmp/pz Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0BA2D2u, 4); goto L_0C0BA2D2; } goto L_0C0BA2C4; }  /* 0C0BA2C0 bf/s */
L_0C0BA2C4: BLKS(0x0C0BA2C4u);
	r2 = 0x2u;  /* 0C0BA2C4 mov #imm,Rn */
	T = (s32)r0 > (s32)r2;  /* 0C0BA2C6 cmp/gt Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x3u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C0BA2D0u, 6); goto L_0C0BA2D0; } goto L_0C0BA2CC; }  /* 0C0BA2C8 bt/s */
L_0C0BA2CC: BLKS(0x0C0BA2CCu);
	{ IF(0x0C0BA2CEu); ; /* slot nop */ UPD(0x0C0BA3E0u, 4); goto L_0C0BA3E0; }  /* 0C0BA2CC bra */
L_0C0BA2D0: BLKS(0x0C0BA2D0u);
	if (T) { UPD(0x0C0BA2F0u, 3); goto L_0C0BA2F0; }  /* 0C0BA2D0 bt */
L_0C0BA2D2: BLKS(0x0C0BA2D2u);
	r15 = r14;  /* 0C0BA2D2 mov Rm,Rn */
	IF(0x0C0BA2D4u); PR = R32(r15); r15 += 4; UPD(0x0C0BA2D6u, 2);  /* 0C0BA2D4 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0BA2D8u, 1);  /* 0C0BA2D6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0BA2DAu, 1);  /* 0C0BA2D8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0BA2DCu, 1);  /* 0C0BA2DA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0BA2DEu, 1);  /* 0C0BA2DC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0BA2E0u, 1);  /* 0C0BA2DE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0BA2E2u, 1);  /* 0C0BA2E0 mov.l @Rm+,Rn */
	IF(0x0C0BA2E2u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0BA2E2 rts */
L_0C0BA2F0: BLKS(0x0C0BA2F0u);
	r0 = R32(r13 + 0x28u); UPD(0x0C0BA2F2u, 1);  /* 0C0BA2F0 mov.l @(disp,Rm),Rn */
	r3 = R32(r13 + 0x30u); UPD(0x0C0BA2F4u, 1);  /* 0C0BA2F2 mov.l @(disp,Rm),Rn */
	r0 += r3;  /* 0C0BA2F4 add Rm,Rn */
	r3 = R32(r13 + 0x2Cu); UPD(0x0C0BA2F8u, 2);  /* 0C0BA2F6 mov.l @(disp,Rm),Rn */
	r1 = R32(r13 + 0x34u); UPD(0x0C0BA2FAu, 1);  /* 0C0BA2F8 mov.l @(disp,Rm),Rn */
	r2 = 0xFF600000u; UPD(0x0C0BA2FCu, 1);  /* 0C0BA2FA mov.l @(disp,pc),Rn */
	r3 += r1;  /* 0C0BA2FC add Rm,Rn */
	r2 += r0;  /* 0C0BA2FE add Rm,Rn */
	W32(r13 + 0x28u, r0); UPD(0x0C0BA302u, 3);  /* 0C0BA300 mov.l Rm,@(disp,Rn) */
	IF(0x0C0BA302u); T = (s32)r2 >= 0;  /* 0C0BA302 cmp/pz Rn */
	{ u32 c_ = !T; W32(r13 + 0x2Cu, r3); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0BA3D0u, 4); goto L_0C0BA3D0; } UPD(0x0C0BA308u, 1); goto L_0C0BA308; }  /* 0C0BA304 bf/s */
L_0C0BA308: BLKS(0x0C0BA308u);
	r4 = 0xE00000u; UPD(0x0C0BA30Au, 1);  /* 0C0BA308 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r4;  /* 0C0BA30A cmp/gt Rm,Rn */
	{ u32 c_ = T; r8 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BA328u, 4); goto L_0C0BA328; } goto L_0C0BA310; }  /* 0C0BA30C bt/s */
L_0C0BA310: BLKS(0x0C0BA310u);
	r2 = 0xC3C4048u; UPD(0x0C0BA312u, 2);  /* 0C0BA310 mov.l @(disp,pc),Rn */
	r6 = R32(r2); UPD(0x0C0BA314u, 1);  /* 0C0BA312 mov.l @Rm,Rn */
	r5 = 0xFF880000u; UPD(0x0C0BA316u, 1);  /* 0C0BA314 mov.l @(disp,pc),Rn */
	r2 = r3;  /* 0C0BA316 mov Rm,Rn */
	r2 -= r6;  /* 0C0BA318 sub Rm,Rn */
	r2 += r5;  /* 0C0BA31A add Rm,Rn */
	IF(0x0C0BA31Cu); T = (s32)r2 >= 0;  /* 0C0BA31C cmp/pz Rn */
	if (!T) { UPD(0x0C0BA3C0u, 7); goto L_0C0BA3C0; }  /* 0C0BA31E bf */
L_0C0BA320: BLKS(0x0C0BA320u);
	r7 = 0xB80000u; UPD(0x0C0BA322u, 1);  /* 0C0BA320 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r7;  /* 0C0BA322 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r8 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BA330u, 4); goto L_0C0BA330; } UPD(0x0C0BA328u, 1); goto L_0C0BA328; }  /* 0C0BA324 bf/s */
L_0C0BA328: BLKS(0x0C0BA328u);
	{ W32(r13, r8); /* slot mov.l Rm,@Rn */ UPD(0x0C0BA2D2u, 3); goto L_0C0BA2D2; }  /* 0C0BA328 bra */
L_0C0BA330: BLKS(0x0C0BA330u);
	r3 = r13;  /* 0C0BA330 mov Rm,Rn */
	r3 += 0x51u;  /* 0C0BA332 add #imm,Rn */
	r4 = (u32)(s32)(s8)R8(r3); UPD(0x0C0BA336u, 3);  /* 0C0BA334 mov.b @Rm,Rn */
	r11 = r13;  /* 0C0BA336 mov Rm,Rn */
	r11 += 0x48u;  /* 0C0BA338 add #imm,Rn */
	r4 += 0x1u;  /* 0C0BA33A add #imm,Rn */
	r0 = R32(r11); UPD(0x0C0BA33Eu, 4);  /* 0C0BA33C mov.l @Rm,Rn */
	r10 = r4 & 0xFF;  /* 0C0BA33E extu.b Rm,Rn */
	W8(r3, r4); UPD(0x0C0BA342u, 2);  /* 0C0BA340 mov.b Rm,@Rn */
	IF(0x0C0BA342u); r0 >>= 16;  /* 0C0BA342 shlr16 Rn */
	r12 = 0xC1F7EC4u; UPD(0x0C0BA346u, 2);  /* 0C0BA344 mov.l @(disp,pc),Rn */
	IF(0x0C0BA346u); r9 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C0BA348u, 1);  /* 0C0BA346 mov.b @(r0,Rm),Rn */
	T = (s32)r10 >= (s32)r9;  /* 0C0BA348 cmp/ge Rm,Rn */
	if (!T) { UPD(0x0C0BA2D2u, 4); goto L_0C0BA2D2; }  /* 0C0BA34A bf */
L_0C0BA34C: BLKS(0x0C0BA34Cu);
	r13 += 0x44u;  /* 0C0BA34C add #imm,Rn */
	r4 = (u32)(s32)(s16)R16(r13); UPD(0x0C0BA350u, 2);  /* 0C0BA34E mov.w @Rm,Rn */
	r12 = 0x0u;  /* 0C0BA350 mov #imm,Rn */
	r1 = 0x100u; UPD(0x0C0BA354u, 2);  /* 0C0BA352 mov.w @(disp,pc),Rn */
	r13 += 0xFFFFFFBCu;  /* 0C0BA354 add #imm,Rn */
	W8(r3, r12); UPD(0x0C0BA358u, 2);  /* 0C0BA356 mov.b Rm,@Rn */
	r4 += r1;  /* 0C0BA358 add Rm,Rn */
	r9 = R32(r13 + 0x38u); UPD(0x0C0BA35Cu, 2);  /* 0C0BA35A mov.l @(disp,Rm),Rn */
	r12 = (u32)(s32)(s16)r4;  /* 0C0BA35C exts.w Rm,Rn */
	r10 = 0xC069B20u; UPD(0x0C0BA360u, 2);  /* 0C0BA35E mov.l @(disp,pc),Rn */
	IF(0x0C0BA360u); T = r9 & 1; r9 = (u32)((s32)r9 >> 1);  /* 0C0BA360 shar Rn */
	r4 = r12;  /* 0C0BA362 mov Rm,Rn */
	IF(0x0C0BA364u); { u32 t_ = r10; PR = 0x0C0BA368u; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0BA368u); }  /* 0C0BA364 jsr @Rn */
L_0C0BA368: BLKS(0x0C0BA368u);
	r7 = 0xC069AF0u; UPD(0x0C0BA36Au, 1);  /* 0C0BA368 mov.l @(disp,pc),Rn */
	r5 = r9;  /* 0C0BA36A mov Rm,Rn */
	r10 = R32(r13 + 0x28u); UPD(0x0C0BA36Eu, 2);  /* 0C0BA36C mov.l @(disp,Rm),Rn */
	r4 = r12;  /* 0C0BA36E mov Rm,Rn */
	r8 = 0xC062780u; UPD(0x0C0BA372u, 2);  /* 0C0BA370 mov.l @(disp,pc),Rn */
	IF(0x0C0BA372u); { u32 t_ = r7; PR = 0x0C0BA376u; r10 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0BA376u); }  /* 0C0BA372 jsr @Rn */
L_0C0BA376: BLKS(0x0C0BA376u);
	r9 = R32(r13 + 0x2Cu); UPD(0x0C0BA378u, 1);  /* 0C0BA376 mov.l @(disp,Rm),Rn */
	r4 = 0x3Fu;  /* 0C0BA378 mov #imm,Rn */
	IF(0x0C0BA37Au); { u32 t_ = r8; PR = 0x0C0BA37Eu; r9 += r0; /* slot add Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0BA37Eu); }  /* 0C0BA37A jsr @Rn */
L_0C0BA37E: BLKS(0x0C0BA37Eu);
	r8 = R32(r11); UPD(0x0C0BA380u, 1);  /* 0C0BA37E mov.l @Rm,Rn */
	r15 += 0xFFFFFFECu;  /* 0C0BA380 add #imm,Rn */
	r6 = 0xC069B20u; UPD(0x0C0BA384u, 2);  /* 0C0BA382 mov.l @(disp,pc),Rn */
	r0 += r12;  /* 0C0BA384 add Rm,Rn */
	r5 = 0x14u;  /* 0C0BA386 mov #imm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C0BA38Au, 3);  /* 0C0BA388 mov.l Rm,@(disp,Rn) */
	r0 += 0xFFFFFFE0u;  /* 0C0BA38A add #imm,Rn */
	r2 = 0x0u;  /* 0C0BA38C mov #imm,Rn */
	r12 = (u32)(s32)(s16)r0;  /* 0C0BA38E exts.w Rm,Rn */
	IF(0x0C0BA390u); r8 >>= 2;  /* 0C0BA390 shlr2 Rn */
	W32(r15, r2); UPD(0x0C0BA394u, 5);  /* 0C0BA392 mov.l Rm,@Rn */
	r4 = r12;  /* 0C0BA394 mov Rm,Rn */
	IF(0x0C0BA396u); { u32 t_ = r6; PR = 0x0C0BA39Au; r5 = r8; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0BA39Au); }  /* 0C0BA396 jsr @Rn */
L_0C0BA39A: BLKS(0x0C0BA39Au);
	r3 = 0xC069AF0u; UPD(0x0C0BA39Cu, 1);  /* 0C0BA39A mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C0BA39C mov Rm,Rn */
	W32(r15 + 0x8u, r0); UPD(0x0C0BA3A0u, 2);  /* 0C0BA39E mov.l Rm,@(disp,Rn) */
	IF(0x0C0BA3A0u); { u32 t_ = r3; PR = 0x0C0BA3A4u; r5 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0BA3A4u); }  /* 0C0BA3A0 jsr @Rn */
L_0C0BA3A4: BLKS(0x0C0BA3A4u);
	W32(r15 + 0xCu, r0); UPD(0x0C0BA3A6u, 1);  /* 0C0BA3A4 mov.l Rm,@(disp,Rn) */
	r5 = 0x0u;  /* 0C0BA3A6 mov #imm,Rn */
	r0 = 0x8000u; UPD(0x0C0BA3AAu, 2);  /* 0C0BA3A8 mov.l @(disp,pc),Rn */
	r6 = r10;  /* 0C0BA3AA mov Rm,Rn */
	r11 = 0xC0BEEF0u; UPD(0x0C0BA3AEu, 2);  /* 0C0BA3AC mov.l @(disp,pc),Rn */
	r7 = r9;  /* 0C0BA3AE mov Rm,Rn */
	W32(r15 + 0x10u, r0); UPD(0x0C0BA3B2u, 2);  /* 0C0BA3B0 mov.l Rm,@(disp,Rn) */
	IF(0x0C0BA3B2u); { u32 t_ = r11; PR = 0x0C0BA3B6u; r4 = R32(r13); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BEEF0, 0x0C0BEEF0u, 0x0C0BA3B6u); }  /* 0C0BA3B2 jsr @Rn */
L_0C0BA3B6: BLKS(0x0C0BA3B6u);
	{ r15 += 0x14u; /* slot add #imm,Rn */ UPD(0x0C0BA2D2u, 3); goto L_0C0BA2D2; }  /* 0C0BA3B6 bra */
L_0C0BA3C0: BLKS(0x0C0BA3C0u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0BA320u, 3); goto L_0C0BA320; }  /* 0C0BA3C0 bra */
L_0C0BA3D0: BLKS(0x0C0BA3D0u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0BA308u, 3); goto L_0C0BA308; }  /* 0C0BA3D0 bra */
L_0C0BA3E0: BLKS(0x0C0BA3E0u);
	r11 = 0xC0BB920u; UPD(0x0C0BA3E2u, 1);  /* 0C0BA3E0 mov.l @(disp,pc),Rn */
	IF(0x0C0BA3E2u); { u32 t_ = r11; PR = 0x0C0BA3E6u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BB920, 0x0C0BB920u, 0x0C0BA3E6u); }  /* 0C0BA3E2 jsr @Rn */
L_0C0BA3E6: BLKS(0x0C0BA3E6u);
	IF(0x0C0BA3E6u); T = (s32)r0 >= 0;  /* 0C0BA3E6 cmp/pz Rn */
	{ u32 c_ = !T; IF(0x0C0BA3EAu); MACL = r0 * r9; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C0BA420u, 5); goto L_0C0BA420; } goto L_0C0BA3EC; }  /* 0C0BA3E8 bf/s */
L_0C0BA3EC: BLKS(0x0C0BA3ECu);
	r13 += 0x44u;  /* 0C0BA3EC add #imm,Rn */
	r8 = 0xC069AF0u; UPD(0x0C0BA3F0u, 4);  /* 0C0BA3EE mov.l @(disp,pc),Rn */
	IF(0x0C0BA3F0u); r12 = MACL;  /* 0C0BA3F0 sts macl,Rn */
	r12 += r10;  /* 0C0BA3F2 add Rm,Rn */
	r12 += 0x44u;  /* 0C0BA3F4 add #imm,Rn */
	r10 = (u32)(s32)(s16)R16(r12); UPD(0x0C0BA3F8u, 4);  /* 0C0BA3F6 mov.w @Rm,Rn */
	W16(r13, r10); UPD(0x0C0BA3FAu, 1);  /* 0C0BA3F8 mov.w Rm,@Rn */
	r12 += 0xFFFFFFBCu;  /* 0C0BA3FA add #imm,Rn */
	r13 += 0xFFFFFFBCu;  /* 0C0BA3FC add #imm,Rn */
	r9 = 0xC069B20u; UPD(0x0C0BA400u, 3);  /* 0C0BA3FE mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C0BA400 mov Rm,Rn */
	r11 = R32(r13 + 0x38u); UPD(0x0C0BA404u, 2);  /* 0C0BA402 mov.l @(disp,Rm),Rn */
	IF(0x0C0BA404u); { u32 t_ = r9; PR = 0x0C0BA408u; r5 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0BA408u); }  /* 0C0BA404 jsr @Rn */
L_0C0BA408: BLKS(0x0C0BA408u);
	r6 = R32(r12 + 0x28u); UPD(0x0C0BA40Au, 1);  /* 0C0BA408 mov.l @(disp,Rm),Rn */
	r4 = r10;  /* 0C0BA40A mov Rm,Rn */
	r6 += r0;  /* 0C0BA40C add Rm,Rn */
	W32(r13 + 0x28u, r6); UPD(0x0C0BA410u, 3);  /* 0C0BA40E mov.l Rm,@(disp,Rn) */
	IF(0x0C0BA410u); { u32 t_ = r8; PR = 0x0C0BA414u; r5 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0BA414u); }  /* 0C0BA410 jsr @Rn */
L_0C0BA414: BLKS(0x0C0BA414u);
	r3 = R32(r12 + 0x2Cu); UPD(0x0C0BA416u, 1);  /* 0C0BA414 mov.l @(disp,Rm),Rn */
	r3 += r0;  /* 0C0BA416 add Rm,Rn */
	{ W32(r13 + 0x2Cu, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0BA2D2u, 4); goto L_0C0BA2D2; }  /* 0C0BA418 bra */
L_0C0BA420: BLKS(0x0C0BA420u);
	r0 = 0xC0BB9F0u; UPD(0x0C0BA422u, 1);  /* 0C0BA420 mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C0BA422 mov Rm,Rn */
	r15 = r14;  /* 0C0BA424 mov Rm,Rn */
	IF(0x0C0BA426u); PR = R32(r15); r15 += 4; UPD(0x0C0BA428u, 3);  /* 0C0BA426 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0BA42Au, 1);  /* 0C0BA428 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0BA42Cu, 1);  /* 0C0BA42A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0BA42Eu, 1);  /* 0C0BA42C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0BA430u, 1);  /* 0C0BA42E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0BA432u, 1);  /* 0C0BA430 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0BA434u, 1);  /* 0C0BA432 mov.l @Rm+,Rn */
	IF(0x0C0BA434u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0BB9F0u: TAIL(blk_f_0C0BB9F0); default: JUMPD(tv_); } }  /* 0C0BA434 jmp @Rn */
}

/* FUN_0c0ba480 */
void blk_f_0C0BA480(sh3_t *c)
{
	LOCALS;
L_0C0BA480: BLKS(0x0C0BA480u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0BA482u, 1);  /* 0C0BA480 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0BA484u, 1);  /* 0C0BA482 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0BA486u, 1);  /* 0C0BA484 mov.l Rm,@-Rn */
	r9 = r4;  /* 0C0BA486 mov Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0BA48Au, 2);  /* 0C0BA488 mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s16)r7;  /* 0C0BA48A exts.w Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0BA48Eu, 2);  /* 0C0BA48C mov.l Rm,@-Rn */
	r11 = r5;  /* 0C0BA48E mov Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0BA492u, 2);  /* 0C0BA490 mov.l Rm,@-Rn */
	r12 = r6;  /* 0C0BA492 mov Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0BA496u, 2);  /* 0C0BA494 mov.l Rm,@-Rn */
	r2 = 0xC2B07FCu; UPD(0x0C0BA498u, 1);  /* 0C0BA496 mov.l @(disp,pc),Rn */
	IF(0x0C0BA498u); r15 -= 4; W32(r15, PR); UPD(0x0C0BA49Au, 1);  /* 0C0BA498 sts.l pr,@-Rn */
	r0 = R32(r2); UPD(0x0C0BA49Cu, 1);  /* 0C0BA49A mov.l @Rm,Rn */
	r14 = r15;  /* 0C0BA49C mov Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0BA49E tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BA4D0u, 5); goto L_0C0BA4D0; } goto L_0C0BA4A4; }  /* 0C0BA4A0 bf/s */
L_0C0BA4A4: BLKS(0x0C0BA4A4u);
	r2 = 0xFF580000u; UPD(0x0C0BA4A6u, 2);  /* 0C0BA4A4 mov.l @(disp,pc),Rn */
	r2 += r5;  /* 0C0BA4A6 add Rm,Rn */
	IF(0x0C0BA4A8u); T = (s32)r2 >= 0;  /* 0C0BA4A8 cmp/pz Rn */
	if (T) { UPD(0x0C0BA4AEu, 5); goto L_0C0BA4AE; }  /* 0C0BA4AA bt */
L_0C0BA4AC: BLKS(0x0C0BA4ACu);
	r2 = 0u - r2;  /* 0C0BA4AC neg Rm,Rn */
	UPD(0x0C0BA4AEu, 1);
L_0C0BA4AE: BLKS(0x0C0BA4AEu);
	r0 = 0x980000u; UPD(0x0C0BA4B0u, 1);  /* 0C0BA4AE mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r0;  /* 0C0BA4B0 cmp/gt Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BA4D0u, 4); goto L_0C0BA4D0; } goto L_0C0BA4B6; }  /* 0C0BA4B2 bt/s */
L_0C0BA4B6: BLKS(0x0C0BA4B6u);
	r5 = 0xC3C4048u; UPD(0x0C0BA4B8u, 2);  /* 0C0BA4B6 mov.l @(disp,pc),Rn */
	r2 = r12;  /* 0C0BA4B8 mov Rm,Rn */
	r4 = R32(r5); UPD(0x0C0BA4BCu, 2);  /* 0C0BA4BA mov.l @Rm,Rn */
	r3 = 0xFF880000u; UPD(0x0C0BA4BEu, 1);  /* 0C0BA4BC mov.l @(disp,pc),Rn */
	r2 -= r4;  /* 0C0BA4BE sub Rm,Rn */
	r2 += r3;  /* 0C0BA4C0 add Rm,Rn */
	IF(0x0C0BA4C2u); T = (s32)r2 >= 0;  /* 0C0BA4C2 cmp/pz Rn */
	if (T) { UPD(0x0C0BA4C8u, 6); goto L_0C0BA4C8; }  /* 0C0BA4C4 bt */
L_0C0BA4C6: BLKS(0x0C0BA4C6u);
	r2 = 0u - r2;  /* 0C0BA4C6 neg Rm,Rn */
	UPD(0x0C0BA4C8u, 1);
L_0C0BA4C8: BLKS(0x0C0BA4C8u);
	r6 = 0x700000u; UPD(0x0C0BA4CAu, 1);  /* 0C0BA4C8 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r6;  /* 0C0BA4CA cmp/gt Rm,Rn */
	IF(0x0C0BA4CCu); r0 = T;  /* 0C0BA4CC movt Rn */
	r0 ^= 0x1u;  /* 0C0BA4CE xor #imm,r0 */
	UPD(0x0C0BA4D0u, 3);
L_0C0BA4D0: BLKS(0x0C0BA4D0u);
	r7 = (u32)(s32)(s8)r0;  /* 0C0BA4D0 exts.b Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C0BA4D2 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BA4F0u, 5); goto L_0C0BA4F0; } UPD(0x0C0BA4D8u, 1); goto L_0C0BA4D8; }  /* 0C0BA4D4 bf/s */
L_0C0BA4D8: BLKS(0x0C0BA4D8u);
	r15 = r14;  /* 0C0BA4D8 mov Rm,Rn */
	IF(0x0C0BA4DAu); PR = R32(r15); r15 += 4; UPD(0x0C0BA4DCu, 2);  /* 0C0BA4DA lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0BA4DEu, 1);  /* 0C0BA4DC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0BA4E0u, 1);  /* 0C0BA4DE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0BA4E2u, 1);  /* 0C0BA4E0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0BA4E4u, 1);  /* 0C0BA4E2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0BA4E6u, 1);  /* 0C0BA4E4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0BA4E8u, 1);  /* 0C0BA4E6 mov.l @Rm+,Rn */
	IF(0x0C0BA4E8u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0BA4E8 rts */
L_0C0BA4F0: BLKS(0x0C0BA4F0u);
	r8 = 0xC0717A0u; UPD(0x0C0BA4F2u, 1);  /* 0C0BA4F0 mov.l @(disp,pc),Rn */
	IF(0x0C0BA4F2u); { u32 t_ = r8; PR = 0x0C0BA4F6u; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0717A0, 0x0C0717A0u, 0x0C0BA4F6u); }  /* 0C0BA4F2 jsr @Rn */
L_0C0BA4F6: BLKS(0x0C0BA4F6u);
	T = (r0 & r0) == 0;  /* 0C0BA4F6 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BA4D8u, 4); goto L_0C0BA4D8; } goto L_0C0BA4FC; }  /* 0C0BA4F8 bt/s */
L_0C0BA4FC: BLKS(0x0C0BA4FCu);
	r13 = 0x4u;  /* 0C0BA4FC mov #imm,Rn */
	T = (s32)r9 > (s32)r13;  /* 0C0BA4FE cmp/gt Rm,Rn */
	if (T) { UPD(0x0C0BA5B0u, 6); goto L_0C0BA5B0; }  /* 0C0BA500 bt */
L_0C0BA502: BLKS(0x0C0BA502u);
	r2 = 0xC234BECu; UPD(0x0C0BA504u, 1);  /* 0C0BA502 mov.l @(disp,pc),Rn */
	r13 = R32(r2); UPD(0x0C0BA506u, 1);  /* 0C0BA504 mov.l @Rm,Rn */
	T = (r13 & r13) == 0;  /* 0C0BA506 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BA4D8u, 4); goto L_0C0BA4D8; } goto L_0C0BA50C; }  /* 0C0BA508 bf/s */
L_0C0BA50C: BLKS(0x0C0BA50Cu);
	r2 = 0xC28EDFCu; UPD(0x0C0BA50Eu, 2);  /* 0C0BA50C mov.l @(disp,pc),Rn */
	r8 = 0x54u;  /* 0C0BA50E mov #imm,Rn */
	r6 = (u32)(s32)(s16)R16(r2); UPD(0x0C0BA512u, 2);  /* 0C0BA510 mov.w @Rm,Rn */
	IF(0x0C0BA512u); MACL = r6 * r8;  /* 0C0BA512 mul.l Rm,Rn */
	r4 = 0xC297B40u; UPD(0x0C0BA516u, 3);  /* 0C0BA514 mov.l @(disp,pc),Rn */
	IF(0x0C0BA516u); r8 = MACL;  /* 0C0BA516 sts macl,Rn */
	r3 = 0xD1000000u; UPD(0x0C0BA51Au, 2);  /* 0C0BA518 mov.l @(disp,pc),Rn */
	r8 += r4;  /* 0C0BA51A add Rm,Rn */
	W32(r8, r3); UPD(0x0C0BA51Eu, 2);  /* 0C0BA51C mov.l Rm,@Rn */
	r5 = 0xC1EADA4u; UPD(0x0C0BA520u, 1);  /* 0C0BA51E mov.l @(disp,pc),Rn */
	r0 = R32(r5); UPD(0x0C0BA522u, 1);  /* 0C0BA520 mov.l @Rm,Rn */
	W32(r8 + 0x4u, r0); UPD(0x0C0BA524u, 1);  /* 0C0BA522 mov.l Rm,@(disp,Rn) */
	r0 = 0xC062780u; UPD(0x0C0BA526u, 1);  /* 0C0BA524 mov.l @(disp,pc),Rn */
	IF(0x0C0BA526u); { u32 t_ = r0; PR = 0x0C0BA52Au; r4 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0BA52Au); }  /* 0C0BA526 jsr @Rn */
L_0C0BA52A: BLKS(0x0C0BA52Au);
	r0 += 0x5u;  /* 0C0BA52A add #imm,Rn */
	W32(r8 + 0x8u, r0); UPD(0x0C0BA52Eu, 2);  /* 0C0BA52C mov.l Rm,@(disp,Rn) */
	r7 = 0x3u;  /* 0C0BA52E mov #imm,Rn */
	W32(r8 + 0xCu, r9); UPD(0x0C0BA532u, 2);  /* 0C0BA530 mov.l Rm,@(disp,Rn) */
	r1 = 0x4u;  /* 0C0BA532 mov #imm,Rn */
	r8 += 0x44u;  /* 0C0BA534 add #imm,Rn */
	W16(r8, r10); UPD(0x0C0BA538u, 3);  /* 0C0BA536 mov.w Rm,@Rn */
	r9 = 0x3Fu;  /* 0C0BA538 mov #imm,Rn */
	r10 += 0x4u;  /* 0C0BA53A add #imm,Rn */
	r5 = r10;  /* 0C0BA53C mov Rm,Rn */
	r8 += 0xFFFFFFBCu;  /* 0C0BA53E add #imm,Rn */
	IF(0x0C0BA540u); T = r5 & 1; r5 = (u32)((s32)r5 >> 1);  /* 0C0BA540 shar Rn */
	r4 = R32(r8 + 0x4u); UPD(0x0C0BA544u, 6);  /* 0C0BA542 mov.l @(disp,Rm),Rn */
	IF(0x0C0BA544u); T = r5 & 1; r5 = (u32)((s32)r5 >> 1);  /* 0C0BA544 shar Rn */
	IF(0x0C0BA546u); T = r5 & 1; r5 = (u32)((s32)r5 >> 1);  /* 0C0BA546 shar Rn */
	r5 &= r9;  /* 0C0BA548 and Rm,Rn */
	IF(0x0C0BA54Au); ARG0(0x447Du); { s32 s_ = (s32)r7; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = 0; else r4 >>= ((~s_ & 31) + 1); }  /* 0C0BA54A shld Rm,Rn */
	r6 = 0xC1F7E08u; UPD(0x0C0BA54Eu, 5);  /* 0C0BA54C mov.l @(disp,pc),Rn */
	IF(0x0C0BA54Eu); ARG0(0x401Du); { s32 s_ = (s32)r1; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C0BA54E shld Rm,Rn */
	W32(r8 + 0x10u, r5); UPD(0x0C0BA552u, 2);  /* 0C0BA550 mov.l Rm,@(disp,Rn) */
	r4 += r6;  /* 0C0BA552 add Rm,Rn */
	r2 = R32(r4 + 0x4u); UPD(0x0C0BA556u, 2);  /* 0C0BA554 mov.l @(disp,Rm),Rn */
	r9 = 0x3u;  /* 0C0BA556 mov #imm,Rn */
	W32(r8 + 0x24u, r2); UPD(0x0C0BA55Au, 2);  /* 0C0BA558 mov.l Rm,@(disp,Rn) */
	IF(0x0C0BA55Au); ARG0(0x459Du); { s32 s_ = (s32)r9; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = 0; else r5 >>= ((~s_ & 31) + 1); }  /* 0C0BA55A shld Rm,Rn */
	r3 = R32(r4); UPD(0x0C0BA55Eu, 2);  /* 0C0BA55C mov.l @Rm,Rn */
	r10 += 0xFFFFFFFCu;  /* 0C0BA55E add #imm,Rn */
	W32(r8 + 0x14u, r3); UPD(0x0C0BA562u, 2);  /* 0C0BA560 mov.l Rm,@(disp,Rn) */
	IF(0x0C0BA562u); r7 = R32(r0 + r3); UPD(0x0C0BA564u, 1);  /* 0C0BA562 mov.l @(r0,Rm),Rn */
	W32(r8 + 0x18u, r7); UPD(0x0C0BA566u, 1);  /* 0C0BA564 mov.l Rm,@(disp,Rn) */
	r5 += r7;  /* 0C0BA566 add Rm,Rn */
	r6 = R32(r5); UPD(0x0C0BA56Au, 2);  /* 0C0BA568 mov.l @Rm,Rn */
	W32(r8 + 0x1Cu, r6); UPD(0x0C0BA56Cu, 1);  /* 0C0BA56A mov.l Rm,@(disp,Rn) */
	r4 = R32(r5 + 0x4u); UPD(0x0C0BA56Eu, 1);  /* 0C0BA56C mov.l @(disp,Rm),Rn */
	r3 = 0xC2380C4u; UPD(0x0C0BA570u, 1);  /* 0C0BA56E mov.l @(disp,pc),Rn */
	W32(r8 + 0x20u, r4); UPD(0x0C0BA572u, 1);  /* 0C0BA570 mov.l Rm,@(disp,Rn) */
	r0 = (u32)(s32)(s16)R16(r3); UPD(0x0C0BA574u, 1);  /* 0C0BA572 mov.w @Rm,Rn */
	r8 += 0x4Eu;  /* 0C0BA574 add #imm,Rn */
	W16(r8, r0); UPD(0x0C0BA578u, 2);  /* 0C0BA576 mov.w Rm,@Rn */
	r4 = r10;  /* 0C0BA578 mov Rm,Rn */
	r8 += 0xFFFFFFB2u;  /* 0C0BA57A add #imm,Rn */
	W32(r8 + 0x28u, r11); UPD(0x0C0BA57Eu, 3);  /* 0C0BA57C mov.l Rm,@(disp,Rn) */
	r11 = 0xC069B20u; UPD(0x0C0BA580u, 1);  /* 0C0BA57E mov.l @(disp,pc),Rn */
	r9 = 0xC069AF0u; UPD(0x0C0BA582u, 1);  /* 0C0BA580 mov.l @(disp,pc),Rn */
	r5 = R32(r14 + 0x20u); UPD(0x0C0BA584u, 1);  /* 0C0BA582 mov.l @(disp,Rm),Rn */
	IF(0x0C0BA584u); { u32 t_ = r11; PR = 0x0C0BA588u; W32(r8 + 0x2Cu, r12); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0BA588u); }  /* 0C0BA584 jsr @Rn */
L_0C0BA588: BLKS(0x0C0BA588u);
	r4 = r10;  /* 0C0BA588 mov Rm,Rn */
	W32(r8 + 0x30u, r0); UPD(0x0C0BA58Cu, 2);  /* 0C0BA58A mov.l Rm,@(disp,Rn) */
	IF(0x0C0BA58Cu); { u32 t_ = r9; PR = 0x0C0BA590u; r5 = R32(r14 + 0x20u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0BA590u); }  /* 0C0BA58C jsr @Rn */
L_0C0BA590: BLKS(0x0C0BA590u);
	W32(r8 + 0x34u, r0); UPD(0x0C0BA592u, 1);  /* 0C0BA590 mov.l Rm,@(disp,Rn) */
	r4 = 0x69u;  /* 0C0BA592 mov #imm,Rn */
	r8 += 0x50u;  /* 0C0BA594 add #imm,Rn */
	W8(r8, r13); UPD(0x0C0BA598u, 3);  /* 0C0BA596 mov.b Rm,@Rn */
	r12 = 0x207C0C0u; UPD(0x0C0BA59Au, 1);  /* 0C0BA598 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFB0u;  /* 0C0BA59A add #imm,Rn */
	W32(r8 + 0x3Cu, r12); UPD(0x0C0BA59Eu, 2);  /* 0C0BA59C mov.l Rm,@(disp,Rn) */
	r10 = 0xC0C2110u; UPD(0x0C0BA5A0u, 1);  /* 0C0BA59E mov.l @(disp,pc),Rn */
	r8 += 0x40u;  /* 0C0BA5A0 add #imm,Rn */
	r11 = 0x808080u; UPD(0x0C0BA5A4u, 2);  /* 0C0BA5A2 mov.l @(disp,pc),Rn */
	IF(0x0C0BA5A4u); { u32 t_ = r10; PR = 0x0C0BA5A8u; W32(r8, r11); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2110, 0x0C0C2110u, 0x0C0BA5A8u); }  /* 0C0BA5A4 jsr @Rn */
L_0C0BA5A8: BLKS(0x0C0BA5A8u);
	{ r0 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C0BA4D8u, 3); goto L_0C0BA4D8; }  /* 0C0BA5A8 bra */
L_0C0BA5B0: BLKS(0x0C0BA5B0u);
	r9 = 0xC062780u; UPD(0x0C0BA5B2u, 1);  /* 0C0BA5B0 mov.l @(disp,pc),Rn */
	IF(0x0C0BA5B2u); { u32 t_ = r9; PR = 0x0C0BA5B6u; r4 = 0x5u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0BA5B6u); }  /* 0C0BA5B2 jsr @Rn */
L_0C0BA5B6: BLKS(0x0C0BA5B6u);
	{ r9 = r0; /* slot mov Rm,Rn */ UPD(0x0C0BA502u, 3); goto L_0C0BA502; }  /* 0C0BA5B6 bra */
}

/* FUN_0c0ba610 */
void blk_f_0C0BA610(sh3_t *c)
{
	LOCALS;
L_0C0BA610: BLKS(0x0C0BA610u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0BA612u, 1);  /* 0C0BA610 mov.l Rm,@-Rn */
	r0 = (u32)(s32)(s16)r7;  /* 0C0BA612 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0BA616u, 2);  /* 0C0BA614 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0BA618u, 1);  /* 0C0BA616 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0BA61Au, 1);  /* 0C0BA618 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0BA61Cu, 1);  /* 0C0BA61A mov.l Rm,@-Rn */
	r11 = r4;  /* 0C0BA61C mov Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0BA620u, 2);  /* 0C0BA61E mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0BA622u, 1);  /* 0C0BA620 mov.l Rm,@-Rn */
	IF(0x0C0BA622u); r15 -= 4; W32(r15, PR); UPD(0x0C0BA624u, 1);  /* 0C0BA622 sts.l pr,@-Rn */
	r15 += 0xFFFFFFF0u;  /* 0C0BA624 add #imm,Rn */
	r14 = r15;  /* 0C0BA626 mov Rm,Rn */
	W32(r14 + 0x8u, r0); UPD(0x0C0BA62Au, 3);  /* 0C0BA628 mov.l Rm,@(disp,Rn) */
	r2 = 0xC2B07FCu; UPD(0x0C0BA62Cu, 1);  /* 0C0BA62A mov.l @(disp,pc),Rn */
	r0 = R32(r2); UPD(0x0C0BA62Eu, 1);  /* 0C0BA62C mov.l @Rm,Rn */
	W32(r14, r5); UPD(0x0C0BA630u, 1);  /* 0C0BA62E mov.l Rm,@Rn */
	T = (r0 & r0) == 0;  /* 0C0BA630 tst Rm,Rn */
	W32(r14 + 0x4u, r6); UPD(0x0C0BA634u, 2);  /* 0C0BA632 mov.l Rm,@(disp,Rn) */
	r0 = 0x0u;  /* 0C0BA634 mov #imm,Rn */
	{ u32 c_ = !T; r10 = R32(r14 + 0x34u); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C0BA668u, 4); goto L_0C0BA668; } UPD(0x0C0BA63Au, 1); goto L_0C0BA63A; }  /* 0C0BA636 bf/s */
L_0C0BA63A: BLKS(0x0C0BA63Au);
	r2 = 0xFF580000u; UPD(0x0C0BA63Cu, 1);  /* 0C0BA63A mov.l @(disp,pc),Rn */
	r3 = R32(r14); UPD(0x0C0BA63Eu, 1);  /* 0C0BA63C mov.l @Rm,Rn */
	r2 += r3;  /* 0C0BA63E add Rm,Rn */
	IF(0x0C0BA640u); T = (s32)r2 >= 0;  /* 0C0BA640 cmp/pz Rn */
	if (T) { UPD(0x0C0BA646u, 5); goto L_0C0BA646; }  /* 0C0BA642 bt */
L_0C0BA644: BLKS(0x0C0BA644u);
	r2 = 0u - r2;  /* 0C0BA644 neg Rm,Rn */
	UPD(0x0C0BA646u, 1);
L_0C0BA646: BLKS(0x0C0BA646u);
	r4 = 0x980000u; UPD(0x0C0BA648u, 1);  /* 0C0BA646 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r4;  /* 0C0BA648 cmp/gt Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BA668u, 4); goto L_0C0BA668; } goto L_0C0BA64E; }  /* 0C0BA64A bt/s */
L_0C0BA64E: BLKS(0x0C0BA64Eu);
	r7 = 0xC3C4048u; UPD(0x0C0BA650u, 2);  /* 0C0BA64E mov.l @(disp,pc),Rn */
	r2 = R32(r14 + 0x4u); UPD(0x0C0BA652u, 1);  /* 0C0BA650 mov.l @(disp,Rm),Rn */
	r6 = R32(r7); UPD(0x0C0BA654u, 1);  /* 0C0BA652 mov.l @Rm,Rn */
	r5 = 0xFF880000u; UPD(0x0C0BA656u, 1);  /* 0C0BA654 mov.l @(disp,pc),Rn */
	r2 -= r6;  /* 0C0BA656 sub Rm,Rn */
	r2 += r5;  /* 0C0BA658 add Rm,Rn */
	IF(0x0C0BA65Au); T = (s32)r2 >= 0;  /* 0C0BA65A cmp/pz Rn */
	if (T) { UPD(0x0C0BA660u, 6); goto L_0C0BA660; }  /* 0C0BA65C bt */
L_0C0BA65E: BLKS(0x0C0BA65Eu);
	r2 = 0u - r2;  /* 0C0BA65E neg Rm,Rn */
	UPD(0x0C0BA660u, 1);
L_0C0BA660: BLKS(0x0C0BA660u);
	r8 = 0x700000u; UPD(0x0C0BA662u, 1);  /* 0C0BA660 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r8;  /* 0C0BA662 cmp/gt Rm,Rn */
	IF(0x0C0BA664u); r0 = T;  /* 0C0BA664 movt Rn */
	r0 ^= 0x1u;  /* 0C0BA666 xor #imm,r0 */
	UPD(0x0C0BA668u, 3);
L_0C0BA668: BLKS(0x0C0BA668u);
	r9 = (u32)(s32)(s8)r0;  /* 0C0BA668 exts.b Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C0BA66A tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BA690u, 5); goto L_0C0BA690; } UPD(0x0C0BA670u, 1); goto L_0C0BA670; }  /* 0C0BA66C bf/s */
L_0C0BA670: BLKS(0x0C0BA670u);
	r14 += 0x10u;  /* 0C0BA670 add #imm,Rn */
	r15 = r14;  /* 0C0BA672 mov Rm,Rn */
	IF(0x0C0BA674u); PR = R32(r15); r15 += 4; UPD(0x0C0BA676u, 3);  /* 0C0BA674 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0BA678u, 1);  /* 0C0BA676 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0BA67Au, 1);  /* 0C0BA678 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0BA67Cu, 1);  /* 0C0BA67A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0BA67Eu, 1);  /* 0C0BA67C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0BA680u, 1);  /* 0C0BA67E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0BA682u, 1);  /* 0C0BA680 mov.l @Rm+,Rn */
	IF(0x0C0BA682u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0BA682 rts */
L_0C0BA690: BLKS(0x0C0BA690u);
	r13 = 0xC0717A0u; UPD(0x0C0BA692u, 1);  /* 0C0BA690 mov.l @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r10); r10 += 2; r12 = v_; } UPD(0x0C0BA694u, 1);  /* 0C0BA692 mov.w @Rm+,Rn */
	IF(0x0C0BA694u); { u32 t_ = r13; PR = 0x0C0BA698u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0717A0, 0x0C0717A0u, 0x0C0BA698u); }  /* 0C0BA694 jsr @Rn */
L_0C0BA698: BLKS(0x0C0BA698u);
	T = (r0 & r0) == 0;  /* 0C0BA698 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BA670u, 4); goto L_0C0BA670; } goto L_0C0BA69E; }  /* 0C0BA69A bt/s */
L_0C0BA69E: BLKS(0x0C0BA69Eu);
	r2 = 0x4u;  /* 0C0BA69E mov #imm,Rn */
	T = (s32)r11 > (s32)r2;  /* 0C0BA6A0 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C0BA780u, 6); goto L_0C0BA780; }  /* 0C0BA6A2 bt */
L_0C0BA6A4: BLKS(0x0C0BA6A4u);
	r3 = 0xC234BECu; UPD(0x0C0BA6A6u, 1);  /* 0C0BA6A4 mov.l @(disp,pc),Rn */
	r1 = 0xC28EDFCu; UPD(0x0C0BA6A8u, 1);  /* 0C0BA6A6 mov.l @(disp,pc),Rn */
	r0 = R32(r3); UPD(0x0C0BA6AAu, 1);  /* 0C0BA6A8 mov.l @Rm,Rn */
	W32(r14 + 0xCu, r1); UPD(0x0C0BA6ACu, 1);  /* 0C0BA6AA mov.l Rm,@(disp,Rn) */
	T = (r0 & r0) == 0;  /* 0C0BA6AC tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BA670u, 4); goto L_0C0BA670; } goto L_0C0BA6B2; }  /* 0C0BA6AE bf/s */
L_0C0BA6B2: BLKS(0x0C0BA6B2u);
	r13 = 0x0u;  /* 0C0BA6B2 mov #imm,Rn */
	T = (s32)r13 >= (s32)r12;  /* 0C0BA6B4 cmp/ge Rm,Rn */
	if (T) { UPD(0x0C0BA770u, 6); goto L_0C0BA770; }  /* 0C0BA6B6 bt */
L_0C0BA6B8: BLKS(0x0C0BA6B8u);
	r1 = R32(r14 + 0xCu); UPD(0x0C0BA6BAu, 1);  /* 0C0BA6B8 mov.l @(disp,Rm),Rn */
	r8 = 0x54u;  /* 0C0BA6BA mov #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r1); r1 += 2; r6 = v_; } UPD(0x0C0BA6BEu, 2);  /* 0C0BA6BC mov.w @Rm+,Rn */
	IF(0x0C0BA6BEu); MACL = r6 * r8;  /* 0C0BA6BE mul.l Rm,Rn */
	r4 = 0xC297B40u; UPD(0x0C0BA6C2u, 3);  /* 0C0BA6C0 mov.l @(disp,pc),Rn */
	IF(0x0C0BA6C2u); r8 = MACL;  /* 0C0BA6C2 sts macl,Rn */
	r3 = 0xD1000000u; UPD(0x0C0BA6C6u, 2);  /* 0C0BA6C4 mov.l @(disp,pc),Rn */
	r8 += r4;  /* 0C0BA6C6 add Rm,Rn */
	W32(r8, r3); UPD(0x0C0BA6CAu, 2);  /* 0C0BA6C8 mov.l Rm,@Rn */
	r4 = 0x4u;  /* 0C0BA6CA mov #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r10); r10 += 2; r5 = v_; } UPD(0x0C0BA6CEu, 2);  /* 0C0BA6CC mov.w @Rm+,Rn */
	r7 = 0xC297490u; UPD(0x0C0BA6D0u, 1);  /* 0C0BA6CE mov.l @(disp,pc),Rn */
	r9 = R32(r14 + 0x8u); UPD(0x0C0BA6D2u, 1);  /* 0C0BA6D0 mov.l @(disp,Rm),Rn */
	r0 = 0x1FFu; UPD(0x0C0BA6D4u, 1);  /* 0C0BA6D2 mov.w @(disp,pc),Rn */
	r9 += r5;  /* 0C0BA6D4 add Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r7); UPD(0x0C0BA6D8u, 2);  /* 0C0BA6D6 mov.b @Rm,Rn */
	r9 &= r0;  /* 0C0BA6D8 and Rm,Rn */
	r0 = r2 & 0xFF;  /* 0C0BA6DA extu.b Rm,Rn */
	r5 = 0xC1EADA4u; UPD(0x0C0BA6DEu, 3);  /* 0C0BA6DC mov.l @(disp,pc),Rn */
	IF(0x0C0BA6DEu); r0 <<= 2;  /* 0C0BA6DE shll2 Rn */
	r0 += r5;  /* 0C0BA6E0 add Rm,Rn */
	r6 = R32(r0 + 0x4u); UPD(0x0C0BA6E4u, 3);  /* 0C0BA6E2 mov.l @(disp,Rm),Rn */
	r0 = 0xC062780u; UPD(0x0C0BA6E6u, 1);  /* 0C0BA6E4 mov.l @(disp,pc),Rn */
	W32(r8 + 0x4u, r6); UPD(0x0C0BA6E8u, 1);  /* 0C0BA6E6 mov.l Rm,@(disp,Rn) */
	IF(0x0C0BA6E8u); { u32 t_ = r0; PR = 0x0C0BA6ECu; W32(r14 + 0xCu, r1); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0BA6ECu); }  /* 0C0BA6E8 jsr @Rn */
L_0C0BA6EC: BLKS(0x0C0BA6ECu);
	r0 += 0x5u;  /* 0C0BA6EC add #imm,Rn */
	W32(r8 + 0x8u, r0); UPD(0x0C0BA6F0u, 2);  /* 0C0BA6EE mov.l Rm,@(disp,Rn) */
	r6 = r9;  /* 0C0BA6F0 mov Rm,Rn */
	W32(r8 + 0xCu, r11); UPD(0x0C0BA6F4u, 2);  /* 0C0BA6F2 mov.l Rm,@(disp,Rn) */
	r6 += 0x4u;  /* 0C0BA6F4 add #imm,Rn */
	r8 += 0x44u;  /* 0C0BA6F6 add #imm,Rn */
	W16(r8, r9); UPD(0x0C0BA6FAu, 3);  /* 0C0BA6F8 mov.w Rm,@Rn */
	IF(0x0C0BA6FAu); r6 >>= 2;  /* 0C0BA6FA shlr2 Rn */
	r8 += 0xFFFFFFBCu;  /* 0C0BA6FC add #imm,Rn */
	r5 = R32(r8 + 0x4u); UPD(0x0C0BA700u, 3);  /* 0C0BA6FE mov.l @(disp,Rm),Rn */
	IF(0x0C0BA700u); T = r6 & 1; r6 >>= 1;  /* 0C0BA700 shlr Rn */
	r4 = 0x3Fu;  /* 0C0BA702 mov #imm,Rn */
	r3 = 0x3u;  /* 0C0BA704 mov #imm,Rn */
	r6 &= r4;  /* 0C0BA706 and Rm,Rn */
	IF(0x0C0BA708u); ARG0(0x453Du); { s32 s_ = (s32)r3; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = 0; else r5 >>= ((~s_ & 31) + 1); }  /* 0C0BA708 shld Rm,Rn */
	r7 = 0xC1F7E08u; UPD(0x0C0BA70Cu, 6);  /* 0C0BA70A mov.l @(disp,pc),Rn */
	r1 = 0x4u;  /* 0C0BA70C mov #imm,Rn */
	W32(r8 + 0x10u, r6); UPD(0x0C0BA710u, 2);  /* 0C0BA70E mov.l Rm,@(disp,Rn) */
	r5 += r7;  /* 0C0BA710 add Rm,Rn */
	r2 = R32(r5 + 0x4u); UPD(0x0C0BA714u, 2);  /* 0C0BA712 mov.l @(disp,Rm),Rn */
	IF(0x0C0BA714u); ARG0(0x401Du); { s32 s_ = (s32)r1; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C0BA714 shld Rm,Rn */
	W32(r8 + 0x24u, r2); UPD(0x0C0BA718u, 2);  /* 0C0BA716 mov.l Rm,@(disp,Rn) */
	r4 = R32(r5); UPD(0x0C0BA71Au, 1);  /* 0C0BA718 mov.l @Rm,Rn */
	W32(r8 + 0x14u, r4); UPD(0x0C0BA71Cu, 1);  /* 0C0BA71A mov.l Rm,@(disp,Rn) */
	IF(0x0C0BA71Cu); r3 = R32(r0 + r4); UPD(0x0C0BA71Eu, 1);  /* 0C0BA71C mov.l @(r0,Rm),Rn */
	r0 = 0x3u;  /* 0C0BA71E mov #imm,Rn */
	IF(0x0C0BA720u); ARG0(0x460Du); { s32 s_ = (s32)r0; if (s_ >= 0) r6 <<= (s_ & 31); else if ((s_ & 31) == 0) r6 = 0; else r6 >>= ((~s_ & 31) + 1); }  /* 0C0BA720 shld Rm,Rn */
	W32(r8 + 0x18u, r3); UPD(0x0C0BA724u, 3);  /* 0C0BA722 mov.l Rm,@(disp,Rn) */
	r6 += r3;  /* 0C0BA724 add Rm,Rn */
	r7 = R32(r6); UPD(0x0C0BA728u, 2);  /* 0C0BA726 mov.l @Rm,Rn */
	W32(r8 + 0x1Cu, r7); UPD(0x0C0BA72Au, 1);  /* 0C0BA728 mov.l Rm,@(disp,Rn) */
	r5 = R32(r6 + 0x4u); UPD(0x0C0BA72Cu, 1);  /* 0C0BA72A mov.l @(disp,Rm),Rn */
	r4 = 0xC2380C4u; UPD(0x0C0BA72Eu, 1);  /* 0C0BA72C mov.l @(disp,pc),Rn */
	W32(r8 + 0x20u, r5); UPD(0x0C0BA730u, 1);  /* 0C0BA72E mov.l Rm,@(disp,Rn) */
	r3 = (u32)(s32)(s16)R16(r4); UPD(0x0C0BA732u, 1);  /* 0C0BA730 mov.w @Rm,Rn */
	r8 += 0x4Eu;  /* 0C0BA732 add #imm,Rn */
	W16(r8, r3); UPD(0x0C0BA736u, 2);  /* 0C0BA734 mov.w Rm,@Rn */
	r4 = r9;  /* 0C0BA736 mov Rm,Rn */
	r0 = R32(r14 + 0x4u); UPD(0x0C0BA73Au, 2);  /* 0C0BA738 mov.l @(disp,Rm),Rn */
	r8 += 0xFFFFFFB2u;  /* 0C0BA73A add #imm,Rn */
	W32(r8 + 0x2Cu, r0); UPD(0x0C0BA73Eu, 2);  /* 0C0BA73C mov.l Rm,@(disp,Rn) */
	r0 = 0xC069B20u; UPD(0x0C0BA740u, 1);  /* 0C0BA73E mov.l @(disp,pc),Rn */
	r2 = R32(r14); UPD(0x0C0BA742u, 1);  /* 0C0BA740 mov.l @Rm,Rn */
	r5 = R32(r14 + 0x30u); UPD(0x0C0BA744u, 1);  /* 0C0BA742 mov.l @(disp,Rm),Rn */
	IF(0x0C0BA744u); { u32 t_ = r0; PR = 0x0C0BA748u; W32(r8 + 0x28u, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0BA748u); }  /* 0C0BA744 jsr @Rn */
L_0C0BA748: BLKS(0x0C0BA748u);
	r4 = r9;  /* 0C0BA748 mov Rm,Rn */
	r9 = 0xC069AF0u; UPD(0x0C0BA74Cu, 2);  /* 0C0BA74A mov.l @(disp,pc),Rn */
	W32(r8 + 0x30u, r0); UPD(0x0C0BA74Eu, 1);  /* 0C0BA74C mov.l Rm,@(disp,Rn) */
	IF(0x0C0BA74Eu); { u32 t_ = r9; PR = 0x0C0BA752u; r5 = R32(r14 + 0x30u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0BA752u); }  /* 0C0BA74E jsr @Rn */
L_0C0BA752: BLKS(0x0C0BA752u);
	W32(r8 + 0x34u, r0); UPD(0x0C0BA754u, 1);  /* 0C0BA752 mov.l Rm,@(disp,Rn) */
	r7 = 0x0u;  /* 0C0BA754 mov #imm,Rn */
	r8 += 0x50u;  /* 0C0BA756 add #imm,Rn */
	W8(r8, r7); UPD(0x0C0BA75Au, 3);  /* 0C0BA758 mov.b Rm,@Rn */
	r4 = r13;  /* 0C0BA75A mov Rm,Rn */
	r6 = 0x207C0C0u; UPD(0x0C0BA75Eu, 2);  /* 0C0BA75C mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFB0u;  /* 0C0BA75E add #imm,Rn */
	W32(r8 + 0x3Cu, r6); UPD(0x0C0BA762u, 2);  /* 0C0BA760 mov.l Rm,@(disp,Rn) */
	r4 += 0x1u;  /* 0C0BA762 add #imm,Rn */
	r5 = 0x808080u; UPD(0x0C0BA766u, 2);  /* 0C0BA764 mov.l @(disp,pc),Rn */
	r8 += 0x40u;  /* 0C0BA766 add #imm,Rn */
	r13 = (u32)(s32)(s16)r4;  /* 0C0BA768 exts.w Rm,Rn */
	T = (s32)r13 >= (s32)r12;  /* 0C0BA76A cmp/ge Rm,Rn */
	{ u32 c_ = !T; W32(r8, r5); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C0BA6B8u, 6); goto L_0C0BA6B8; } UPD(0x0C0BA770u, 1); goto L_0C0BA770; }  /* 0C0BA76C bf/s */
L_0C0BA770: BLKS(0x0C0BA770u);
	r10 = 0xC0C2110u; UPD(0x0C0BA772u, 1);  /* 0C0BA770 mov.l @(disp,pc),Rn */
	IF(0x0C0BA772u); { u32 t_ = r10; PR = 0x0C0BA776u; r4 = 0x69u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2110, 0x0C0C2110u, 0x0C0BA776u); }  /* 0C0BA772 jsr @Rn */
L_0C0BA776: BLKS(0x0C0BA776u);
	{ r0 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C0BA670u, 3); goto L_0C0BA670; }  /* 0C0BA776 bra */
L_0C0BA780: BLKS(0x0C0BA780u);
	r11 = 0xC062780u; UPD(0x0C0BA782u, 1);  /* 0C0BA780 mov.l @(disp,pc),Rn */
	IF(0x0C0BA782u); { u32 t_ = r11; PR = 0x0C0BA786u; r4 = 0x5u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0BA786u); }  /* 0C0BA782 jsr @Rn */
L_0C0BA786: BLKS(0x0C0BA786u);
	{ r11 = r0; /* slot mov Rm,Rn */ UPD(0x0C0BA6A4u, 3); goto L_0C0BA6A4; }  /* 0C0BA786 bra */
}

/* FUN_0c0ba7f0 */
void blk_f_0C0BA7F0(sh3_t *c)
{
	LOCALS;
L_0C0BA7F0: BLKS(0x0C0BA7F0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0BA7F2u, 1);  /* 0C0BA7F0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0BA7F4u, 1);  /* 0C0BA7F2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0BA7F6u, 1);  /* 0C0BA7F4 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s16)r7;  /* 0C0BA7F6 exts.w Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0BA7FAu, 2);  /* 0C0BA7F8 mov.l Rm,@-Rn */
	r10 = r4;  /* 0C0BA7FA mov Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0BA7FEu, 2);  /* 0C0BA7FC mov.l Rm,@-Rn */
	r11 = r5;  /* 0C0BA7FE mov Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0BA802u, 2);  /* 0C0BA800 mov.l Rm,@-Rn */
	r12 = r6;  /* 0C0BA802 mov Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0BA806u, 2);  /* 0C0BA804 mov.l Rm,@-Rn */
	r2 = 0xC2B07FCu; UPD(0x0C0BA808u, 1);  /* 0C0BA806 mov.l @(disp,pc),Rn */
	IF(0x0C0BA808u); r15 -= 4; W32(r15, PR); UPD(0x0C0BA80Au, 1);  /* 0C0BA808 sts.l pr,@-Rn */
	r0 = R32(r2); UPD(0x0C0BA80Cu, 1);  /* 0C0BA80A mov.l @Rm,Rn */
	r14 = r15;  /* 0C0BA80C mov Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0BA80E tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BA840u, 5); goto L_0C0BA840; } goto L_0C0BA814; }  /* 0C0BA810 bf/s */
L_0C0BA814: BLKS(0x0C0BA814u);
	r2 = 0xFF580000u; UPD(0x0C0BA816u, 2);  /* 0C0BA814 mov.l @(disp,pc),Rn */
	r2 += r5;  /* 0C0BA816 add Rm,Rn */
	IF(0x0C0BA818u); T = (s32)r2 >= 0;  /* 0C0BA818 cmp/pz Rn */
	if (T) { UPD(0x0C0BA81Eu, 5); goto L_0C0BA81E; }  /* 0C0BA81A bt */
L_0C0BA81C: BLKS(0x0C0BA81Cu);
	r2 = 0u - r2;  /* 0C0BA81C neg Rm,Rn */
	UPD(0x0C0BA81Eu, 1);
L_0C0BA81E: BLKS(0x0C0BA81Eu);
	r0 = 0x980000u; UPD(0x0C0BA820u, 1);  /* 0C0BA81E mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r0;  /* 0C0BA820 cmp/gt Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BA840u, 4); goto L_0C0BA840; } goto L_0C0BA826; }  /* 0C0BA822 bt/s */
L_0C0BA826: BLKS(0x0C0BA826u);
	r5 = 0xC3C4048u; UPD(0x0C0BA828u, 2);  /* 0C0BA826 mov.l @(disp,pc),Rn */
	r2 = r12;  /* 0C0BA828 mov Rm,Rn */
	r4 = R32(r5); UPD(0x0C0BA82Cu, 2);  /* 0C0BA82A mov.l @Rm,Rn */
	r3 = 0xFF880000u; UPD(0x0C0BA82Eu, 1);  /* 0C0BA82C mov.l @(disp,pc),Rn */
	r2 -= r4;  /* 0C0BA82E sub Rm,Rn */
	r2 += r3;  /* 0C0BA830 add Rm,Rn */
	IF(0x0C0BA832u); T = (s32)r2 >= 0;  /* 0C0BA832 cmp/pz Rn */
	if (T) { UPD(0x0C0BA838u, 6); goto L_0C0BA838; }  /* 0C0BA834 bt */
L_0C0BA836: BLKS(0x0C0BA836u);
	r2 = 0u - r2;  /* 0C0BA836 neg Rm,Rn */
	UPD(0x0C0BA838u, 1);
L_0C0BA838: BLKS(0x0C0BA838u);
	r6 = 0x700000u; UPD(0x0C0BA83Au, 1);  /* 0C0BA838 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r6;  /* 0C0BA83A cmp/gt Rm,Rn */
	IF(0x0C0BA83Cu); r0 = T;  /* 0C0BA83C movt Rn */
	r0 ^= 0x1u;  /* 0C0BA83E xor #imm,r0 */
	UPD(0x0C0BA840u, 3);
L_0C0BA840: BLKS(0x0C0BA840u);
	r7 = (u32)(s32)(s8)r0;  /* 0C0BA840 exts.b Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C0BA842 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BA860u, 5); goto L_0C0BA860; } UPD(0x0C0BA848u, 1); goto L_0C0BA848; }  /* 0C0BA844 bf/s */
L_0C0BA848: BLKS(0x0C0BA848u);
	r15 = r14;  /* 0C0BA848 mov Rm,Rn */
	IF(0x0C0BA84Au); PR = R32(r15); r15 += 4; UPD(0x0C0BA84Cu, 2);  /* 0C0BA84A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0BA84Eu, 1);  /* 0C0BA84C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0BA850u, 1);  /* 0C0BA84E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0BA852u, 1);  /* 0C0BA850 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0BA854u, 1);  /* 0C0BA852 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0BA856u, 1);  /* 0C0BA854 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0BA858u, 1);  /* 0C0BA856 mov.l @Rm+,Rn */
	IF(0x0C0BA858u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0BA858 rts */
L_0C0BA860: BLKS(0x0C0BA860u);
	r8 = 0xC0717A0u; UPD(0x0C0BA862u, 1);  /* 0C0BA860 mov.l @(disp,pc),Rn */
	IF(0x0C0BA862u); { u32 t_ = r8; PR = 0x0C0BA866u; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0717A0, 0x0C0717A0u, 0x0C0BA866u); }  /* 0C0BA862 jsr @Rn */
L_0C0BA866: BLKS(0x0C0BA866u);
	T = (r0 & r0) == 0;  /* 0C0BA866 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BA848u, 4); goto L_0C0BA848; } goto L_0C0BA86C; }  /* 0C0BA868 bt/s */
L_0C0BA86C: BLKS(0x0C0BA86Cu);
	r13 = 0x6u;  /* 0C0BA86C mov #imm,Rn */
	T = (s32)r10 > (s32)r13;  /* 0C0BA86E cmp/gt Rm,Rn */
	if (T) { UPD(0x0C0BA910u, 6); goto L_0C0BA910; }  /* 0C0BA870 bt */
L_0C0BA872: BLKS(0x0C0BA872u);
	r0 = 0xC234BECu; UPD(0x0C0BA874u, 1);  /* 0C0BA872 mov.l @(disp,pc),Rn */
	r3 = 0xC28EDFCu; UPD(0x0C0BA876u, 1);  /* 0C0BA874 mov.l @(disp,pc),Rn */
	r13 = R32(r0); UPD(0x0C0BA878u, 1);  /* 0C0BA876 mov.l @Rm,Rn */
	r2 = (u32)(s32)(s16)R16(r3); UPD(0x0C0BA87Au, 1);  /* 0C0BA878 mov.w @Rm,Rn */
	T = (r13 & r13) == 0;  /* 0C0BA87A tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BA848u, 4); goto L_0C0BA848; } goto L_0C0BA880; }  /* 0C0BA87C bf/s */
L_0C0BA880: BLKS(0x0C0BA880u);
	r8 = 0x54u;  /* 0C0BA880 mov #imm,Rn */
	IF(0x0C0BA882u); MACL = r2 * r8;  /* 0C0BA882 mul.l Rm,Rn */
	r4 = 0xC297B40u; UPD(0x0C0BA886u, 5);  /* 0C0BA884 mov.l @(disp,pc),Rn */
	IF(0x0C0BA886u); r8 = MACL;  /* 0C0BA886 sts macl,Rn */
	r3 = 0xD1000000u; UPD(0x0C0BA88Au, 2);  /* 0C0BA888 mov.l @(disp,pc),Rn */
	r8 += r4;  /* 0C0BA88A add Rm,Rn */
	W32(r8, r3); UPD(0x0C0BA88Eu, 2);  /* 0C0BA88C mov.l Rm,@Rn */
	r4 = 0x4u;  /* 0C0BA88E mov #imm,Rn */
	r0 = 0xC1EADE0u; UPD(0x0C0BA892u, 2);  /* 0C0BA890 mov.l @(disp,pc),Rn */
	r7 = R32(r0); UPD(0x0C0BA894u, 1);  /* 0C0BA892 mov.l @Rm,Rn */
	r0 = 0xC062780u; UPD(0x0C0BA896u, 1);  /* 0C0BA894 mov.l @(disp,pc),Rn */
	IF(0x0C0BA896u); { u32 t_ = r0; PR = 0x0C0BA89Au; W32(r8 + 0x4u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0BA89Au); }  /* 0C0BA896 jsr @Rn */
L_0C0BA89A: BLKS(0x0C0BA89Au);
	r0 += 0x7u;  /* 0C0BA89A add #imm,Rn */
	W32(r8 + 0x8u, r0); UPD(0x0C0BA89Eu, 2);  /* 0C0BA89C mov.l Rm,@(disp,Rn) */
	r6 = 0x3u;  /* 0C0BA89E mov #imm,Rn */
	W32(r8 + 0xCu, r10); UPD(0x0C0BA8A2u, 2);  /* 0C0BA8A0 mov.l Rm,@(disp,Rn) */
	r1 = 0x4u;  /* 0C0BA8A2 mov #imm,Rn */
	r8 += 0x44u;  /* 0C0BA8A4 add #imm,Rn */
	W16(r8, r9); UPD(0x0C0BA8A8u, 3);  /* 0C0BA8A6 mov.w Rm,@Rn */
	IF(0x0C0BA8A8u); ARG0(0x401Du); { s32 s_ = (s32)r1; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C0BA8A8 shld Rm,Rn */
	r8 += 0xFFFFFFBCu;  /* 0C0BA8AA add #imm,Rn */
	r4 = R32(r8 + 0x4u); UPD(0x0C0BA8AEu, 3);  /* 0C0BA8AC mov.l @(disp,Rm),Rn */
	r5 = 0xC1F7E08u; UPD(0x0C0BA8B0u, 1);  /* 0C0BA8AE mov.l @(disp,pc),Rn */
	IF(0x0C0BA8B0u); ARG0(0x446Du); { s32 s_ = (s32)r6; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = 0; else r4 >>= ((~s_ & 31) + 1); }  /* 0C0BA8B0 shld Rm,Rn */
	W32(r8 + 0x10u, r13); UPD(0x0C0BA8B4u, 2);  /* 0C0BA8B2 mov.l Rm,@(disp,Rn) */
	r4 += r5;  /* 0C0BA8B4 add Rm,Rn */
	r2 = R32(r4 + 0x4u); UPD(0x0C0BA8B8u, 2);  /* 0C0BA8B6 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x24u, r2); UPD(0x0C0BA8BAu, 1);  /* 0C0BA8B8 mov.l Rm,@(disp,Rn) */
	r3 = R32(r4); UPD(0x0C0BA8BCu, 1);  /* 0C0BA8BA mov.l @Rm,Rn */
	W32(r8 + 0x14u, r3); UPD(0x0C0BA8BEu, 1);  /* 0C0BA8BC mov.l Rm,@(disp,Rn) */
	IF(0x0C0BA8BEu); r7 = R32(r0 + r3); UPD(0x0C0BA8C0u, 1);  /* 0C0BA8BE mov.l @(r0,Rm),Rn */
	W32(r8 + 0x18u, r7); UPD(0x0C0BA8C2u, 1);  /* 0C0BA8C0 mov.l Rm,@(disp,Rn) */
	r0 = R32(r7); UPD(0x0C0BA8C4u, 1);  /* 0C0BA8C2 mov.l @Rm,Rn */
	W32(r8 + 0x1Cu, r0); UPD(0x0C0BA8C6u, 1);  /* 0C0BA8C4 mov.l Rm,@(disp,Rn) */
	r6 = R32(r7 + 0x4u); UPD(0x0C0BA8C8u, 1);  /* 0C0BA8C6 mov.l @(disp,Rm),Rn */
	r5 = 0xC2380C4u; UPD(0x0C0BA8CAu, 1);  /* 0C0BA8C8 mov.l @(disp,pc),Rn */
	W32(r8 + 0x20u, r6); UPD(0x0C0BA8CCu, 1);  /* 0C0BA8CA mov.l Rm,@(disp,Rn) */
	r4 = (u32)(s32)(s16)R16(r5); UPD(0x0C0BA8CEu, 1);  /* 0C0BA8CC mov.w @Rm,Rn */
	r8 += 0x4Eu;  /* 0C0BA8CE add #imm,Rn */
	W16(r8, r4); UPD(0x0C0BA8D2u, 2);  /* 0C0BA8D0 mov.w Rm,@Rn */
	r8 += 0xFFFFFFB2u;  /* 0C0BA8D2 add #imm,Rn */
	W32(r8 + 0x28u, r11); UPD(0x0C0BA8D6u, 2);  /* 0C0BA8D4 mov.l Rm,@(disp,Rn) */
	r4 = r9;  /* 0C0BA8D6 mov Rm,Rn */
	r11 = 0xC069B20u; UPD(0x0C0BA8DAu, 2);  /* 0C0BA8D8 mov.l @(disp,pc),Rn */
	W32(r8 + 0x2Cu, r12); UPD(0x0C0BA8DCu, 1);  /* 0C0BA8DA mov.l Rm,@(disp,Rn) */
	IF(0x0C0BA8DCu); { u32 t_ = r11; PR = 0x0C0BA8E0u; r5 = R32(r14 + 0x20u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0BA8E0u); }  /* 0C0BA8DC jsr @Rn */
L_0C0BA8E0: BLKS(0x0C0BA8E0u);
	r4 = r9;  /* 0C0BA8E0 mov Rm,Rn */
	r9 = 0xC069AF0u; UPD(0x0C0BA8E4u, 2);  /* 0C0BA8E2 mov.l @(disp,pc),Rn */
	W32(r8 + 0x30u, r0); UPD(0x0C0BA8E6u, 1);  /* 0C0BA8E4 mov.l Rm,@(disp,Rn) */
	IF(0x0C0BA8E6u); { u32 t_ = r9; PR = 0x0C0BA8EAu; r5 = R32(r14 + 0x20u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0BA8EAu); }  /* 0C0BA8E6 jsr @Rn */
L_0C0BA8EA: BLKS(0x0C0BA8EAu);
	W32(r8 + 0x34u, r0); UPD(0x0C0BA8ECu, 1);  /* 0C0BA8EA mov.l Rm,@(disp,Rn) */
	r1 = R32(r14 + 0x20u); UPD(0x0C0BA8EEu, 1);  /* 0C0BA8EC mov.l @(disp,Rm),Rn */
	r8 += 0x48u;  /* 0C0BA8EE add #imm,Rn */
	W32(r8, r1); UPD(0x0C0BA8F2u, 2);  /* 0C0BA8F0 mov.l Rm,@Rn */
	r8 += 0x8u;  /* 0C0BA8F2 add #imm,Rn */
	W8(r8, r13); UPD(0x0C0BA8F6u, 2);  /* 0C0BA8F4 mov.b Rm,@Rn */
	r2 = 0x207C0C0u; UPD(0x0C0BA8F8u, 1);  /* 0C0BA8F6 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFB0u;  /* 0C0BA8F8 add #imm,Rn */
	W32(r8 + 0x3Cu, r2); UPD(0x0C0BA8FCu, 2);  /* 0C0BA8FA mov.l Rm,@(disp,Rn) */
	r12 = 0x808080u; UPD(0x0C0BA8FEu, 1);  /* 0C0BA8FC mov.l @(disp,pc),Rn */
	r8 += 0x40u;  /* 0C0BA8FE add #imm,Rn */
	r11 = 0xC1F7ED8u; UPD(0x0C0BA902u, 2);  /* 0C0BA900 mov.l @(disp,pc),Rn */
	r9 = 0xC0C2110u; UPD(0x0C0BA904u, 1);  /* 0C0BA902 mov.l @(disp,pc),Rn */
	r0 = r11;  /* 0C0BA904 mov Rm,Rn */
	W32(r8, r12); UPD(0x0C0BA908u, 2);  /* 0C0BA906 mov.l Rm,@Rn */
	IF(0x0C0BA908u); { u32 t_ = r9; PR = 0x0C0BA90Cu; IF(0x0C0BA90Au); r4 = (u32)(s32)(s8)R8(r0 + r10); /* slot mov.b @(r0,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2110, 0x0C0C2110u, 0x0C0BA90Cu); }  /* 0C0BA908 jsr @Rn */
L_0C0BA90C: BLKS(0x0C0BA90Cu);
	{ r0 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C0BA848u, 3); goto L_0C0BA848; }  /* 0C0BA90C bra */
L_0C0BA910: BLKS(0x0C0BA910u);
	r10 = 0xC062780u; UPD(0x0C0BA912u, 1);  /* 0C0BA910 mov.l @(disp,pc),Rn */
	IF(0x0C0BA912u); { u32 t_ = r10; PR = 0x0C0BA916u; r4 = 0x7u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0BA916u); }  /* 0C0BA912 jsr @Rn */
L_0C0BA916: BLKS(0x0C0BA916u);
	{ r10 = r0; /* slot mov Rm,Rn */ UPD(0x0C0BA872u, 3); goto L_0C0BA872; }  /* 0C0BA916 bra */
}

/* FUN_0c0ba970 */
void blk_f_0C0BA970(sh3_t *c)
{
	LOCALS;
L_0C0BA970: BLKS(0x0C0BA970u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0BA972u, 1);  /* 0C0BA970 mov.l Rm,@-Rn */
	r0 = (u32)(s32)(s16)r7;  /* 0C0BA972 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0BA976u, 2);  /* 0C0BA974 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0BA978u, 1);  /* 0C0BA976 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0BA97Au, 1);  /* 0C0BA978 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0BA97Cu, 1);  /* 0C0BA97A mov.l Rm,@-Rn */
	r11 = r4;  /* 0C0BA97C mov Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0BA980u, 2);  /* 0C0BA97E mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0BA982u, 1);  /* 0C0BA980 mov.l Rm,@-Rn */
	IF(0x0C0BA982u); r15 -= 4; W32(r15, PR); UPD(0x0C0BA984u, 1);  /* 0C0BA982 sts.l pr,@-Rn */
	r15 += 0xFFFFFFF0u;  /* 0C0BA984 add #imm,Rn */
	r14 = r15;  /* 0C0BA986 mov Rm,Rn */
	W32(r14 + 0x8u, r0); UPD(0x0C0BA98Au, 3);  /* 0C0BA988 mov.l Rm,@(disp,Rn) */
	r2 = 0xC2B07FCu; UPD(0x0C0BA98Cu, 1);  /* 0C0BA98A mov.l @(disp,pc),Rn */
	r0 = R32(r2); UPD(0x0C0BA98Eu, 1);  /* 0C0BA98C mov.l @Rm,Rn */
	W32(r14, r5); UPD(0x0C0BA990u, 1);  /* 0C0BA98E mov.l Rm,@Rn */
	T = (r0 & r0) == 0;  /* 0C0BA990 tst Rm,Rn */
	W32(r14 + 0x4u, r6); UPD(0x0C0BA994u, 2);  /* 0C0BA992 mov.l Rm,@(disp,Rn) */
	r0 = 0x0u;  /* 0C0BA994 mov #imm,Rn */
	{ u32 c_ = !T; r10 = R32(r14 + 0x34u); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C0BA9C8u, 4); goto L_0C0BA9C8; } UPD(0x0C0BA99Au, 1); goto L_0C0BA99A; }  /* 0C0BA996 bf/s */
L_0C0BA99A: BLKS(0x0C0BA99Au);
	r2 = 0xFF580000u; UPD(0x0C0BA99Cu, 1);  /* 0C0BA99A mov.l @(disp,pc),Rn */
	r1 = R32(r14); UPD(0x0C0BA99Eu, 1);  /* 0C0BA99C mov.l @Rm,Rn */
	r2 += r1;  /* 0C0BA99E add Rm,Rn */
	IF(0x0C0BA9A0u); T = (s32)r2 >= 0;  /* 0C0BA9A0 cmp/pz Rn */
	if (T) { UPD(0x0C0BA9A6u, 5); goto L_0C0BA9A6; }  /* 0C0BA9A2 bt */
L_0C0BA9A4: BLKS(0x0C0BA9A4u);
	r2 = 0u - r2;  /* 0C0BA9A4 neg Rm,Rn */
	UPD(0x0C0BA9A6u, 1);
L_0C0BA9A6: BLKS(0x0C0BA9A6u);
	r3 = 0x980000u; UPD(0x0C0BA9A8u, 1);  /* 0C0BA9A6 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r3;  /* 0C0BA9A8 cmp/gt Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BA9C8u, 4); goto L_0C0BA9C8; } goto L_0C0BA9AE; }  /* 0C0BA9AA bt/s */
L_0C0BA9AE: BLKS(0x0C0BA9AEu);
	r6 = 0xC3C4048u; UPD(0x0C0BA9B0u, 2);  /* 0C0BA9AE mov.l @(disp,pc),Rn */
	r2 = R32(r14 + 0x4u); UPD(0x0C0BA9B2u, 1);  /* 0C0BA9B0 mov.l @(disp,Rm),Rn */
	r5 = R32(r6); UPD(0x0C0BA9B4u, 1);  /* 0C0BA9B2 mov.l @Rm,Rn */
	r4 = 0xFF880000u; UPD(0x0C0BA9B6u, 1);  /* 0C0BA9B4 mov.l @(disp,pc),Rn */
	r2 -= r5;  /* 0C0BA9B6 sub Rm,Rn */
	r2 += r4;  /* 0C0BA9B8 add Rm,Rn */
	IF(0x0C0BA9BAu); T = (s32)r2 >= 0;  /* 0C0BA9BA cmp/pz Rn */
	if (T) { UPD(0x0C0BA9C0u, 6); goto L_0C0BA9C0; }  /* 0C0BA9BC bt */
L_0C0BA9BE: BLKS(0x0C0BA9BEu);
	r2 = 0u - r2;  /* 0C0BA9BE neg Rm,Rn */
	UPD(0x0C0BA9C0u, 1);
L_0C0BA9C0: BLKS(0x0C0BA9C0u);
	r7 = 0x700000u; UPD(0x0C0BA9C2u, 1);  /* 0C0BA9C0 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r7;  /* 0C0BA9C2 cmp/gt Rm,Rn */
	IF(0x0C0BA9C4u); r0 = T;  /* 0C0BA9C4 movt Rn */
	r0 ^= 0x1u;  /* 0C0BA9C6 xor #imm,r0 */
	UPD(0x0C0BA9C8u, 3);
L_0C0BA9C8: BLKS(0x0C0BA9C8u);
	r8 = (u32)(s32)(s8)r0;  /* 0C0BA9C8 exts.b Rm,Rn */
	T = (r8 & r8) == 0;  /* 0C0BA9CA tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BA9F0u, 5); goto L_0C0BA9F0; } UPD(0x0C0BA9D0u, 1); goto L_0C0BA9D0; }  /* 0C0BA9CC bf/s */
L_0C0BA9D0: BLKS(0x0C0BA9D0u);
	r14 += 0x10u;  /* 0C0BA9D0 add #imm,Rn */
	r15 = r14;  /* 0C0BA9D2 mov Rm,Rn */
	IF(0x0C0BA9D4u); PR = R32(r15); r15 += 4; UPD(0x0C0BA9D6u, 3);  /* 0C0BA9D4 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0BA9D8u, 1);  /* 0C0BA9D6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0BA9DAu, 1);  /* 0C0BA9D8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0BA9DCu, 1);  /* 0C0BA9DA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0BA9DEu, 1);  /* 0C0BA9DC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0BA9E0u, 1);  /* 0C0BA9DE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0BA9E2u, 1);  /* 0C0BA9E0 mov.l @Rm+,Rn */
	IF(0x0C0BA9E2u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0BA9E2 rts */
L_0C0BA9F0: BLKS(0x0C0BA9F0u);
	r9 = 0xC0717A0u; UPD(0x0C0BA9F2u, 1);  /* 0C0BA9F0 mov.l @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r10); r10 += 2; r12 = v_; } UPD(0x0C0BA9F4u, 1);  /* 0C0BA9F2 mov.w @Rm+,Rn */
	IF(0x0C0BA9F4u); { u32 t_ = r9; PR = 0x0C0BA9F8u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0717A0, 0x0C0717A0u, 0x0C0BA9F8u); }  /* 0C0BA9F4 jsr @Rn */
L_0C0BA9F8: BLKS(0x0C0BA9F8u);
	T = (r0 & r0) == 0;  /* 0C0BA9F8 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BA9D0u, 4); goto L_0C0BA9D0; } goto L_0C0BA9FE; }  /* 0C0BA9FA bt/s */
L_0C0BA9FE: BLKS(0x0C0BA9FEu);
	r13 = 0x6u;  /* 0C0BA9FE mov #imm,Rn */
	T = (s32)r11 > (s32)r13;  /* 0C0BAA00 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C0BAAE0u, 6); goto L_0C0BAAE0; }  /* 0C0BAA02 bt */
L_0C0BAA04: BLKS(0x0C0BAA04u);
	r0 = 0xC234BECu; UPD(0x0C0BAA06u, 1);  /* 0C0BAA04 mov.l @(disp,pc),Rn */
	r3 = 0xC28EDFCu; UPD(0x0C0BAA08u, 1);  /* 0C0BAA06 mov.l @(disp,pc),Rn */
	r2 = R32(r0); UPD(0x0C0BAA0Au, 1);  /* 0C0BAA08 mov.l @Rm,Rn */
	W32(r14 + 0xCu, r3); UPD(0x0C0BAA0Cu, 1);  /* 0C0BAA0A mov.l Rm,@(disp,Rn) */
	T = (r2 & r2) == 0;  /* 0C0BAA0C tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BA9D0u, 4); goto L_0C0BA9D0; } goto L_0C0BAA12; }  /* 0C0BAA0E bf/s */
L_0C0BAA12: BLKS(0x0C0BAA12u);
	r13 = 0x0u;  /* 0C0BAA12 mov #imm,Rn */
	T = (s32)r13 >= (s32)r12;  /* 0C0BAA14 cmp/ge Rm,Rn */
	if (T) { UPD(0x0C0BAAC4u, 6); goto L_0C0BAAC4; }  /* 0C0BAA16 bt */
L_0C0BAA18: BLKS(0x0C0BAA18u);
	r1 = R32(r14 + 0xCu); UPD(0x0C0BAA1Au, 1);  /* 0C0BAA18 mov.l @(disp,Rm),Rn */
	r8 = 0x54u;  /* 0C0BAA1A mov #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r1); r1 += 2; r0 = v_; } UPD(0x0C0BAA1Eu, 2);  /* 0C0BAA1C mov.w @Rm+,Rn */
	IF(0x0C0BAA1Eu); MACL = r0 * r8;  /* 0C0BAA1E mul.l Rm,Rn */
	r7 = 0xC297B40u; UPD(0x0C0BAA22u, 3);  /* 0C0BAA20 mov.l @(disp,pc),Rn */
	IF(0x0C0BAA22u); r8 = MACL;  /* 0C0BAA22 sts macl,Rn */
	r6 = 0xD1000000u; UPD(0x0C0BAA26u, 2);  /* 0C0BAA24 mov.l @(disp,pc),Rn */
	r8 += r7;  /* 0C0BAA26 add Rm,Rn */
	W32(r8, r6); UPD(0x0C0BAA2Au, 2);  /* 0C0BAA28 mov.l Rm,@Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r10); r10 += 2; r9 = v_; } UPD(0x0C0BAA2Cu, 1);  /* 0C0BAA2A mov.w @Rm+,Rn */
	r5 = 0xC297490u; UPD(0x0C0BAA2Eu, 1);  /* 0C0BAA2C mov.l @(disp,pc),Rn */
	r3 = R32(r14 + 0x8u); UPD(0x0C0BAA30u, 1);  /* 0C0BAA2E mov.l @(disp,Rm),Rn */
	r2 = (u32)(s32)(s8)R8(r5); UPD(0x0C0BAA32u, 1);  /* 0C0BAA30 mov.b @Rm,Rn */
	r3 += r9;  /* 0C0BAA32 add Rm,Rn */
	r9 = (u32)(s32)(s16)r3;  /* 0C0BAA34 exts.w Rm,Rn */
	r3 = r2 & 0xFF;  /* 0C0BAA36 extu.b Rm,Rn */
	r4 = 0xC1EADE0u; UPD(0x0C0BAA3Au, 4);  /* 0C0BAA38 mov.l @(disp,pc),Rn */
	IF(0x0C0BAA3Au); r3 <<= 2;  /* 0C0BAA3A shll2 Rn */
	r3 += r4;  /* 0C0BAA3C add Rm,Rn */
	r0 = R32(r3 + 0x4u); UPD(0x0C0BAA40u, 3);  /* 0C0BAA3E mov.l @(disp,Rm),Rn */
	r4 = 0x4u;  /* 0C0BAA40 mov #imm,Rn */
	W32(r8 + 0x4u, r0); UPD(0x0C0BAA44u, 2);  /* 0C0BAA42 mov.l Rm,@(disp,Rn) */
	r0 = 0xC062780u; UPD(0x0C0BAA46u, 1);  /* 0C0BAA44 mov.l @(disp,pc),Rn */
	IF(0x0C0BAA46u); { u32 t_ = r0; PR = 0x0C0BAA4Au; W32(r14 + 0xCu, r1); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0BAA4Au); }  /* 0C0BAA46 jsr @Rn */
L_0C0BAA4A: BLKS(0x0C0BAA4Au);
	r0 += 0x7u;  /* 0C0BAA4A add #imm,Rn */
	W32(r8 + 0x8u, r0); UPD(0x0C0BAA4Eu, 2);  /* 0C0BAA4C mov.l Rm,@(disp,Rn) */
	r6 = 0x3u;  /* 0C0BAA4E mov #imm,Rn */
	W32(r8 + 0xCu, r11); UPD(0x0C0BAA52u, 2);  /* 0C0BAA50 mov.l Rm,@(disp,Rn) */
	r7 = 0x0u;  /* 0C0BAA52 mov #imm,Rn */
	r8 += 0x44u;  /* 0C0BAA54 add #imm,Rn */
	W16(r8, r9); UPD(0x0C0BAA58u, 3);  /* 0C0BAA56 mov.w Rm,@Rn */
	r1 = 0x4u;  /* 0C0BAA58 mov #imm,Rn */
	r8 += 0xFFFFFFBCu;  /* 0C0BAA5A add #imm,Rn */
	r4 = R32(r8 + 0x4u); UPD(0x0C0BAA5Eu, 3);  /* 0C0BAA5C mov.l @(disp,Rm),Rn */
	IF(0x0C0BAA5Eu); ARG0(0x401Du); { s32 s_ = (s32)r1; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C0BAA5E shld Rm,Rn */
	IF(0x0C0BAA60u); ARG0(0x446Du); { s32 s_ = (s32)r6; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = 0; else r4 >>= ((~s_ & 31) + 1); }  /* 0C0BAA60 shld Rm,Rn */
	r5 = 0xC1F7E08u; UPD(0x0C0BAA64u, 3);  /* 0C0BAA62 mov.l @(disp,pc),Rn */
	W32(r8 + 0x10u, r7); UPD(0x0C0BAA66u, 1);  /* 0C0BAA64 mov.l Rm,@(disp,Rn) */
	r4 += r5;  /* 0C0BAA66 add Rm,Rn */
	r2 = R32(r4 + 0x4u); UPD(0x0C0BAA6Au, 2);  /* 0C0BAA68 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x24u, r2); UPD(0x0C0BAA6Cu, 1);  /* 0C0BAA6A mov.l Rm,@(disp,Rn) */
	r3 = R32(r4); UPD(0x0C0BAA6Eu, 1);  /* 0C0BAA6C mov.l @Rm,Rn */
	W32(r8 + 0x14u, r3); UPD(0x0C0BAA70u, 1);  /* 0C0BAA6E mov.l Rm,@(disp,Rn) */
	IF(0x0C0BAA70u); r6 = R32(r0 + r3); UPD(0x0C0BAA72u, 1);  /* 0C0BAA70 mov.l @(r0,Rm),Rn */
	W32(r8 + 0x18u, r6); UPD(0x0C0BAA74u, 1);  /* 0C0BAA72 mov.l Rm,@(disp,Rn) */
	r7 = R32(r6); UPD(0x0C0BAA76u, 1);  /* 0C0BAA74 mov.l @Rm,Rn */
	W32(r8 + 0x1Cu, r7); UPD(0x0C0BAA78u, 1);  /* 0C0BAA76 mov.l Rm,@(disp,Rn) */
	r5 = R32(r6 + 0x4u); UPD(0x0C0BAA7Au, 1);  /* 0C0BAA78 mov.l @(disp,Rm),Rn */
	r4 = 0xC2380C4u; UPD(0x0C0BAA7Cu, 1);  /* 0C0BAA7A mov.l @(disp,pc),Rn */
	W32(r8 + 0x20u, r5); UPD(0x0C0BAA7Eu, 1);  /* 0C0BAA7C mov.l Rm,@(disp,Rn) */
	r0 = (u32)(s32)(s16)R16(r4); UPD(0x0C0BAA80u, 1);  /* 0C0BAA7E mov.w @Rm,Rn */
	r8 += 0x4Eu;  /* 0C0BAA80 add #imm,Rn */
	W16(r8, r0); UPD(0x0C0BAA84u, 2);  /* 0C0BAA82 mov.w Rm,@Rn */
	r4 = r9;  /* 0C0BAA84 mov Rm,Rn */
	r0 = 0xC069B20u; UPD(0x0C0BAA88u, 2);  /* 0C0BAA86 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFB2u;  /* 0C0BAA88 add #imm,Rn */
	r3 = R32(r14); UPD(0x0C0BAA8Cu, 2);  /* 0C0BAA8A mov.l @Rm,Rn */
	r2 = R32(r14 + 0x4u); UPD(0x0C0BAA8Eu, 1);  /* 0C0BAA8C mov.l @(disp,Rm),Rn */
	W32(r8 + 0x28u, r3); UPD(0x0C0BAA90u, 1);  /* 0C0BAA8E mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x2Cu, r2); UPD(0x0C0BAA92u, 1);  /* 0C0BAA90 mov.l Rm,@(disp,Rn) */
	IF(0x0C0BAA92u); { u32 t_ = r0; PR = 0x0C0BAA96u; r5 = R32(r14 + 0x30u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0BAA96u); }  /* 0C0BAA92 jsr @Rn */
L_0C0BAA96: BLKS(0x0C0BAA96u);
	r4 = r9;  /* 0C0BAA96 mov Rm,Rn */
	r9 = 0xC069AF0u; UPD(0x0C0BAA9Au, 2);  /* 0C0BAA98 mov.l @(disp,pc),Rn */
	W32(r8 + 0x30u, r0); UPD(0x0C0BAA9Cu, 1);  /* 0C0BAA9A mov.l Rm,@(disp,Rn) */
	IF(0x0C0BAA9Cu); { u32 t_ = r9; PR = 0x0C0BAAA0u; r5 = R32(r14 + 0x30u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0BAAA0u); }  /* 0C0BAA9C jsr @Rn */
L_0C0BAAA0: BLKS(0x0C0BAAA0u);
	W32(r8 + 0x34u, r0); UPD(0x0C0BAAA2u, 1);  /* 0C0BAAA0 mov.l Rm,@(disp,Rn) */
	r1 = 0x0u;  /* 0C0BAAA2 mov #imm,Rn */
	r7 = R32(r14 + 0x30u); UPD(0x0C0BAAA6u, 2);  /* 0C0BAAA4 mov.l @(disp,Rm),Rn */
	r8 += 0x48u;  /* 0C0BAAA6 add #imm,Rn */
	W32(r8, r7); UPD(0x0C0BAAAAu, 2);  /* 0C0BAAA8 mov.l Rm,@Rn */
	r4 = r13;  /* 0C0BAAAA mov Rm,Rn */
	r8 += 0x8u;  /* 0C0BAAAC add #imm,Rn */
	W8(r8, r1); UPD(0x0C0BAAB0u, 3);  /* 0C0BAAAE mov.b Rm,@Rn */
	r4 += 0x1u;  /* 0C0BAAB0 add #imm,Rn */
	r6 = 0x207C0C0u; UPD(0x0C0BAAB4u, 2);  /* 0C0BAAB2 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFB0u;  /* 0C0BAAB4 add #imm,Rn */
	W32(r8 + 0x3Cu, r6); UPD(0x0C0BAAB8u, 2);  /* 0C0BAAB6 mov.l Rm,@(disp,Rn) */
	r13 = (u32)(s32)(s16)r4;  /* 0C0BAAB8 exts.w Rm,Rn */
	r5 = 0x808080u; UPD(0x0C0BAABCu, 2);  /* 0C0BAABA mov.l @(disp,pc),Rn */
	r8 += 0x40u;  /* 0C0BAABC add #imm,Rn */
	T = (s32)r13 >= (s32)r12;  /* 0C0BAABE cmp/ge Rm,Rn */
	{ u32 c_ = !T; W32(r8, r5); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C0BAA18u, 5); goto L_0C0BAA18; } UPD(0x0C0BAAC4u, 1); goto L_0C0BAAC4; }  /* 0C0BAAC0 bf/s */
L_0C0BAAC4: BLKS(0x0C0BAAC4u);
	r12 = 0xC1F7ED8u; UPD(0x0C0BAAC6u, 1);  /* 0C0BAAC4 mov.l @(disp,pc),Rn */
	r10 = 0xC0C2110u; UPD(0x0C0BAAC8u, 1);  /* 0C0BAAC6 mov.l @(disp,pc),Rn */
	r0 = r12;  /* 0C0BAAC8 mov Rm,Rn */
	IF(0x0C0BAACAu); { u32 t_ = r10; PR = 0x0C0BAACEu; IF(0x0C0BAACCu); r4 = (u32)(s32)(s8)R8(r0 + r11); /* slot mov.b @(r0,Rm),Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0C2110, 0x0C0C2110u, 0x0C0BAACEu); }  /* 0C0BAACA jsr @Rn */
L_0C0BAACE: BLKS(0x0C0BAACEu);
	{ r0 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C0BA9D0u, 3); goto L_0C0BA9D0; }  /* 0C0BAACE bra */
L_0C0BAAE0: BLKS(0x0C0BAAE0u);
	r11 = 0xC062780u; UPD(0x0C0BAAE2u, 1);  /* 0C0BAAE0 mov.l @(disp,pc),Rn */
	IF(0x0C0BAAE2u); { u32 t_ = r11; PR = 0x0C0BAAE6u; r4 = 0x7u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0BAAE6u); }  /* 0C0BAAE2 jsr @Rn */
L_0C0BAAE6: BLKS(0x0C0BAAE6u);
	{ r11 = r0; /* slot mov Rm,Rn */ UPD(0x0C0BAA04u, 3); goto L_0C0BAA04; }  /* 0C0BAAE6 bra */
}

/* FUN_0c0bab50 */
void blk_f_0C0BAB50(sh3_t *c)
{
	LOCALS;
L_0C0BAB50: BLKS(0x0C0BAB50u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0BAB52u, 1);  /* 0C0BAB50 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0BAB54u, 1);  /* 0C0BAB52 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0BAB56u, 1);  /* 0C0BAB54 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0BAB58u, 1);  /* 0C0BAB56 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0BAB5Au, 1);  /* 0C0BAB58 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0BAB5Cu, 1);  /* 0C0BAB5A mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0BAB5Eu, 1);  /* 0C0BAB5C mov.l Rm,@-Rn */
	r13 = (u32)(s32)(s16)r7;  /* 0C0BAB5E exts.w Rm,Rn */
	IF(0x0C0BAB60u); r15 -= 4; W32(r15, PR); UPD(0x0C0BAB62u, 2);  /* 0C0BAB60 sts.l pr,@-Rn */
	r2 = 0xC2B07FCu; UPD(0x0C0BAB64u, 1);  /* 0C0BAB62 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFE8u;  /* 0C0BAB64 add #imm,Rn */
	r0 = R32(r2); UPD(0x0C0BAB68u, 2);  /* 0C0BAB66 mov.l @Rm,Rn */
	r14 = r15;  /* 0C0BAB68 mov Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0BAB6A tst Rm,Rn */
	W32(r14, r4); UPD(0x0C0BAB6Eu, 3);  /* 0C0BAB6C mov.l Rm,@Rn */
	r0 = 0x0u;  /* 0C0BAB6E mov #imm,Rn */
	W32(r14 + 0x4u, r5); UPD(0x0C0BAB72u, 2);  /* 0C0BAB70 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = !T; W32(r14 + 0x8u, r6); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0BABA4u, 3); goto L_0C0BABA4; } UPD(0x0C0BAB76u, 1); goto L_0C0BAB76; }  /* 0C0BAB72 bf/s */
L_0C0BAB76: BLKS(0x0C0BAB76u);
	r2 = 0xFF580000u; UPD(0x0C0BAB78u, 1);  /* 0C0BAB76 mov.l @(disp,pc),Rn */
	r1 = R32(r14 + 0x4u); UPD(0x0C0BAB7Au, 1);  /* 0C0BAB78 mov.l @(disp,Rm),Rn */
	r2 += r1;  /* 0C0BAB7A add Rm,Rn */
	IF(0x0C0BAB7Cu); T = (s32)r2 >= 0;  /* 0C0BAB7C cmp/pz Rn */
	if (T) { UPD(0x0C0BAB82u, 5); goto L_0C0BAB82; }  /* 0C0BAB7E bt */
L_0C0BAB80: BLKS(0x0C0BAB80u);
	r2 = 0u - r2;  /* 0C0BAB80 neg Rm,Rn */
	UPD(0x0C0BAB82u, 1);
L_0C0BAB82: BLKS(0x0C0BAB82u);
	r0 = 0x980000u; UPD(0x0C0BAB84u, 1);  /* 0C0BAB82 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r0;  /* 0C0BAB84 cmp/gt Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BABA4u, 4); goto L_0C0BABA4; } goto L_0C0BAB8A; }  /* 0C0BAB86 bt/s */
L_0C0BAB8A: BLKS(0x0C0BAB8Au);
	r5 = 0xC3C4048u; UPD(0x0C0BAB8Cu, 2);  /* 0C0BAB8A mov.l @(disp,pc),Rn */
	r2 = R32(r14 + 0x8u); UPD(0x0C0BAB8Eu, 1);  /* 0C0BAB8C mov.l @(disp,Rm),Rn */
	r4 = R32(r5); UPD(0x0C0BAB90u, 1);  /* 0C0BAB8E mov.l @Rm,Rn */
	r3 = 0xFF880000u; UPD(0x0C0BAB92u, 1);  /* 0C0BAB90 mov.l @(disp,pc),Rn */
	r2 -= r4;  /* 0C0BAB92 sub Rm,Rn */
	r2 += r3;  /* 0C0BAB94 add Rm,Rn */
	IF(0x0C0BAB96u); T = (s32)r2 >= 0;  /* 0C0BAB96 cmp/pz Rn */
	if (T) { UPD(0x0C0BAB9Cu, 6); goto L_0C0BAB9C; }  /* 0C0BAB98 bt */
L_0C0BAB9A: BLKS(0x0C0BAB9Au);
	r2 = 0u - r2;  /* 0C0BAB9A neg Rm,Rn */
	UPD(0x0C0BAB9Cu, 1);
L_0C0BAB9C: BLKS(0x0C0BAB9Cu);
	r6 = 0x700000u; UPD(0x0C0BAB9Eu, 1);  /* 0C0BAB9C mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r6;  /* 0C0BAB9E cmp/gt Rm,Rn */
	IF(0x0C0BABA0u); r0 = T;  /* 0C0BABA0 movt Rn */
	r0 ^= 0x1u;  /* 0C0BABA2 xor #imm,r0 */
	UPD(0x0C0BABA4u, 3);
L_0C0BABA4: BLKS(0x0C0BABA4u);
	r7 = (u32)(s32)(s8)r0;  /* 0C0BABA4 exts.b Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C0BABA6 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BABD0u, 5); goto L_0C0BABD0; } UPD(0x0C0BABACu, 1); goto L_0C0BABAC; }  /* 0C0BABA8 bf/s */
L_0C0BABAC: BLKS(0x0C0BABACu);
	r14 += 0x18u;  /* 0C0BABAC add #imm,Rn */
	r15 = r14;  /* 0C0BABAE mov Rm,Rn */
	IF(0x0C0BABB0u); PR = R32(r15); r15 += 4; UPD(0x0C0BABB2u, 3);  /* 0C0BABB0 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0BABB4u, 1);  /* 0C0BABB2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0BABB6u, 1);  /* 0C0BABB4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0BABB8u, 1);  /* 0C0BABB6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0BABBAu, 1);  /* 0C0BABB8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0BABBCu, 1);  /* 0C0BABBA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0BABBEu, 1);  /* 0C0BABBC mov.l @Rm+,Rn */
	IF(0x0C0BABBEu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0BABBE rts */
L_0C0BABD0: BLKS(0x0C0BABD0u);
	r10 = R32(r14 + 0x3Cu); UPD(0x0C0BABD2u, 1);  /* 0C0BABD0 mov.l @(disp,Rm),Rn */
	r8 = 0xC0717A0u; UPD(0x0C0BABD4u, 1);  /* 0C0BABD2 mov.l @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r10); r10 += 2; r9 = v_; } UPD(0x0C0BABD6u, 1);  /* 0C0BABD4 mov.w @Rm+,Rn */
	W32(r14 + 0x3Cu, r10); UPD(0x0C0BABD8u, 1);  /* 0C0BABD6 mov.l Rm,@(disp,Rn) */
	r4 = r9;  /* 0C0BABD8 mov Rm,Rn */
	IF(0x0C0BABDAu); { u32 t_ = r8; PR = 0x0C0BABDEu; W32(r14 + 0xCu, r9); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C0717A0, 0x0C0717A0u, 0x0C0BABDEu); }  /* 0C0BABDA jsr @Rn */
L_0C0BABDE: BLKS(0x0C0BABDEu);
	T = (r0 & r0) == 0;  /* 0C0BABDE tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BABACu, 4); goto L_0C0BABAC; } goto L_0C0BABE4; }  /* 0C0BABE0 bt/s */
L_0C0BABE4: BLKS(0x0C0BABE4u);
	r12 = R32(r14); UPD(0x0C0BABE6u, 2);  /* 0C0BABE4 mov.l @Rm,Rn */
	r11 = 0x6u;  /* 0C0BABE6 mov #imm,Rn */
	T = (s32)r12 > (s32)r11;  /* 0C0BABE8 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0BABF0u, 5); goto L_0C0BABF0; }  /* 0C0BABEA bf */
L_0C0BABEC: BLKS(0x0C0BABECu);
	{ IF(0x0C0BABEEu); ; /* slot nop */ UPD(0x0C0BAD00u, 3); goto L_0C0BAD00; }  /* 0C0BABEC bra */
L_0C0BABF0: BLKS(0x0C0BABF0u);
	r0 = 0xC234BECu; UPD(0x0C0BABF2u, 1);  /* 0C0BABF0 mov.l @(disp,pc),Rn */
	r3 = 0xC28EDFCu; UPD(0x0C0BABF4u, 1);  /* 0C0BABF2 mov.l @(disp,pc),Rn */
	r2 = R32(r0); UPD(0x0C0BABF6u, 1);  /* 0C0BABF4 mov.l @Rm,Rn */
	W32(r14 + 0x14u, r3); UPD(0x0C0BABF8u, 1);  /* 0C0BABF6 mov.l Rm,@(disp,Rn) */
	T = (r2 & r2) == 0;  /* 0C0BABF8 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BABACu, 4); goto L_0C0BABAC; } goto L_0C0BABFE; }  /* 0C0BABFA bf/s */
L_0C0BABFE: BLKS(0x0C0BABFEu);
	r4 = 0x0u;  /* 0C0BABFE mov #imm,Rn */
	r1 = R32(r14 + 0xCu); UPD(0x0C0BAC02u, 3);  /* 0C0BAC00 mov.l @(disp,Rm),Rn */
	T = (s32)r4 >= (s32)r1;  /* 0C0BAC02 cmp/ge Rm,Rn */
	{ u32 c_ = T; W32(r14 + 0x10u, r4); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0BACECu, 4); goto L_0C0BACEC; } UPD(0x0C0BAC08u, 1); goto L_0C0BAC08; }  /* 0C0BAC04 bt/s */
L_0C0BAC08: BLKS(0x0C0BAC08u);
	r1 = R32(r14 + 0x14u); UPD(0x0C0BAC0Au, 1);  /* 0C0BAC08 mov.l @(disp,Rm),Rn */
	r8 = 0x54u;  /* 0C0BAC0A mov #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r1); r1 += 2; r4 = v_; } UPD(0x0C0BAC0Eu, 2);  /* 0C0BAC0C mov.w @Rm+,Rn */
	r12 = 0x3u;  /* 0C0BAC0E mov #imm,Rn */
	IF(0x0C0BAC10u); MACL = r4 * r8;  /* 0C0BAC10 mul.l Rm,Rn */
	r7 = 0xC297B40u; UPD(0x0C0BAC14u, 4);  /* 0C0BAC12 mov.l @(disp,pc),Rn */
	r11 = 0x0u;  /* 0C0BAC14 mov #imm,Rn */
	IF(0x0C0BAC16u); r8 = MACL;  /* 0C0BAC16 sts macl,Rn */
	r6 = 0xD1000000u; UPD(0x0C0BAC1Au, 3);  /* 0C0BAC18 mov.l @(disp,pc),Rn */
	r8 += r7;  /* 0C0BAC1A add Rm,Rn */
	W32(r8, r6); UPD(0x0C0BAC1Eu, 2);  /* 0C0BAC1C mov.l Rm,@Rn */
	r4 = 0x4u;  /* 0C0BAC1E mov #imm,Rn */
	r2 = 0xC1EADE0u; UPD(0x0C0BAC22u, 2);  /* 0C0BAC20 mov.l @(disp,pc),Rn */
	r9 = 0xC062780u; UPD(0x0C0BAC24u, 1);  /* 0C0BAC22 mov.l @(disp,pc),Rn */
	r0 = R32(r2); UPD(0x0C0BAC26u, 1);  /* 0C0BAC24 mov.l @Rm,Rn */
	W32(r14 + 0x14u, r1); UPD(0x0C0BAC28u, 1);  /* 0C0BAC26 mov.l Rm,@(disp,Rn) */
	IF(0x0C0BAC28u); { u32 t_ = r9; PR = 0x0C0BAC2Cu; W32(r8 + 0x4u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0BAC2Cu); }  /* 0C0BAC28 jsr @Rn */
L_0C0BAC2C: BLKS(0x0C0BAC2Cu);
	r3 = R32(r14); UPD(0x0C0BAC2Eu, 1);  /* 0C0BAC2C mov.l @Rm,Rn */
	r0 += 0x7u;  /* 0C0BAC2E add #imm,Rn */
	W32(r8 + 0x8u, r0); UPD(0x0C0BAC32u, 2);  /* 0C0BAC30 mov.l Rm,@(disp,Rn) */
	r1 = 0x4u;  /* 0C0BAC32 mov #imm,Rn */
	W32(r8 + 0xCu, r3); UPD(0x0C0BAC36u, 2);  /* 0C0BAC34 mov.l Rm,@(disp,Rn) */
	IF(0x0C0BAC36u); ARG0(0x401Du); { s32 s_ = (s32)r1; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C0BAC36 shld Rm,Rn */
	r8 += 0x44u;  /* 0C0BAC38 add #imm,Rn */
	W16(r8, r13); UPD(0x0C0BAC3Cu, 3);  /* 0C0BAC3A mov.w Rm,@Rn */
	r8 += 0xFFFFFFBCu;  /* 0C0BAC3C add #imm,Rn */
	r4 = R32(r8 + 0x4u); UPD(0x0C0BAC40u, 2);  /* 0C0BAC3E mov.l @(disp,Rm),Rn */
	r10 = 0xC1F7E08u; UPD(0x0C0BAC42u, 1);  /* 0C0BAC40 mov.l @(disp,pc),Rn */
	IF(0x0C0BAC42u); ARG0(0x44CDu); { s32 s_ = (s32)r12; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = 0; else r4 >>= ((~s_ & 31) + 1); }  /* 0C0BAC42 shld Rm,Rn */
	W32(r8 + 0x10u, r11); UPD(0x0C0BAC46u, 2);  /* 0C0BAC44 mov.l Rm,@(disp,Rn) */
	r4 += r10;  /* 0C0BAC46 add Rm,Rn */
	r5 = R32(r4 + 0x4u); UPD(0x0C0BAC4Au, 2);  /* 0C0BAC48 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x24u, r5); UPD(0x0C0BAC4Cu, 1);  /* 0C0BAC4A mov.l Rm,@(disp,Rn) */
	r9 = R32(r4); UPD(0x0C0BAC4Eu, 1);  /* 0C0BAC4C mov.l @Rm,Rn */
	W32(r8 + 0x14u, r9); UPD(0x0C0BAC50u, 1);  /* 0C0BAC4E mov.l Rm,@(disp,Rn) */
	IF(0x0C0BAC50u); r6 = R32(r0 + r9); UPD(0x0C0BAC52u, 1);  /* 0C0BAC50 mov.l @(r0,Rm),Rn */
	W32(r8 + 0x18u, r6); UPD(0x0C0BAC54u, 1);  /* 0C0BAC52 mov.l Rm,@(disp,Rn) */
	r7 = R32(r6); UPD(0x0C0BAC56u, 1);  /* 0C0BAC54 mov.l @Rm,Rn */
	W32(r8 + 0x1Cu, r7); UPD(0x0C0BAC58u, 1);  /* 0C0BAC56 mov.l Rm,@(disp,Rn) */
	r2 = R32(r6 + 0x4u); UPD(0x0C0BAC5Au, 1);  /* 0C0BAC58 mov.l @(disp,Rm),Rn */
	r3 = 0xC2380C4u; UPD(0x0C0BAC5Cu, 1);  /* 0C0BAC5A mov.l @(disp,pc),Rn */
	W32(r8 + 0x20u, r2); UPD(0x0C0BAC5Eu, 1);  /* 0C0BAC5C mov.l Rm,@(disp,Rn) */
	r11 = (u32)(s32)(s16)R16(r3); UPD(0x0C0BAC60u, 1);  /* 0C0BAC5E mov.w @Rm,Rn */
	r8 += 0x4Eu;  /* 0C0BAC60 add #imm,Rn */
	W16(r8, r11); UPD(0x0C0BAC64u, 2);  /* 0C0BAC62 mov.w Rm,@Rn */
	r4 = R32(r14 + 0x3Cu); UPD(0x0C0BAC66u, 1);  /* 0C0BAC64 mov.l @(disp,Rm),Rn */
	r8 += 0xFFFFFFB2u;  /* 0C0BAC66 add #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r4); r4 += 2; r5 = v_; } UPD(0x0C0BAC6Au, 2);  /* 0C0BAC68 mov.w @Rm+,Rn */
	r12 = R32(r14 + 0x4u); UPD(0x0C0BAC6Cu, 1);  /* 0C0BAC6A mov.l @(disp,Rm),Rn */
	IF(0x0C0BAC6Cu); r5 <<= 8;  /* 0C0BAC6C shll8 Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r4); r4 += 2; r0 = v_; } UPD(0x0C0BAC70u, 2);  /* 0C0BAC6E mov.w @Rm+,Rn */
	r11 = (u32)(s32)(s16)r5;  /* 0C0BAC70 exts.w Rm,Rn */
	r9 = 0xC069B20u; UPD(0x0C0BAC74u, 2);  /* 0C0BAC72 mov.l @(disp,pc),Rn */
	IF(0x0C0BAC74u); r0 <<= 8;  /* 0C0BAC74 shll8 Rn */
	W32(r8 + 0x28u, r12); UPD(0x0C0BAC78u, 2);  /* 0C0BAC76 mov.l Rm,@(disp,Rn) */
	r10 = R32(r14 + 0x8u); UPD(0x0C0BAC7Au, 1);  /* 0C0BAC78 mov.l @(disp,Rm),Rn */
	r12 = (u32)(s32)(s16)r0;  /* 0C0BAC7A exts.w Rm,Rn */
	W32(r14 + 0x3Cu, r4); UPD(0x0C0BAC7Eu, 2);  /* 0C0BAC7C mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x2Cu, r10); UPD(0x0C0BAC80u, 1);  /* 0C0BAC7E mov.l Rm,@(disp,Rn) */
	r4 = r13;  /* 0C0BAC80 mov Rm,Rn */
	IF(0x0C0BAC82u); { u32 t_ = r9; PR = 0x0C0BAC86u; r5 = R32(r14 + 0x38u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0BAC86u); }  /* 0C0BAC82 jsr @Rn */
L_0C0BAC86: BLKS(0x0C0BAC86u);
	r7 = 0xC069B20u; UPD(0x0C0BAC88u, 1);  /* 0C0BAC86 mov.l @(disp,pc),Rn */
	r5 = r11;  /* 0C0BAC88 mov Rm,Rn */
	r10 = r0;  /* 0C0BAC8A mov Rm,Rn */
	IF(0x0C0BAC8Cu); { u32 t_ = r7; PR = 0x0C0BAC90u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0BAC90u); }  /* 0C0BAC8C jsr @Rn */
L_0C0BAC90: BLKS(0x0C0BAC90u);
	r6 = 0xC069AF0u; UPD(0x0C0BAC92u, 1);  /* 0C0BAC90 mov.l @(disp,pc),Rn */
	r5 = r12;  /* 0C0BAC92 mov Rm,Rn */
	r9 = r0;  /* 0C0BAC94 mov Rm,Rn */
	IF(0x0C0BAC96u); { u32 t_ = r6; PR = 0x0C0BAC9Au; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0BAC9Au); }  /* 0C0BAC96 jsr @Rn */
L_0C0BAC9A: BLKS(0x0C0BAC9Au);
	r1 = 0xC069AF0u; UPD(0x0C0BAC9Cu, 1);  /* 0C0BAC9A mov.l @(disp,pc),Rn */
	r9 -= r0;  /* 0C0BAC9C sub Rm,Rn */
	IF(0x0C0BAC9Eu); r9 <<= 2;  /* 0C0BAC9E shll2 Rn */
	r10 += r9;  /* 0C0BACA0 add Rm,Rn */
	W32(r8 + 0x30u, r10); UPD(0x0C0BACA4u, 4);  /* 0C0BACA2 mov.l Rm,@(disp,Rn) */
	r4 = r13;  /* 0C0BACA4 mov Rm,Rn */
	IF(0x0C0BACA6u); { u32 t_ = r1; PR = 0x0C0BACAAu; r5 = R32(r14 + 0x38u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0BACAAu); }  /* 0C0BACA6 jsr @Rn */
L_0C0BACAA: BLKS(0x0C0BACAAu);
	r2 = 0xC069AF0u; UPD(0x0C0BACACu, 1);  /* 0C0BACAA mov.l @(disp,pc),Rn */
	r5 = r11;  /* 0C0BACAC mov Rm,Rn */
	r10 = r0;  /* 0C0BACAE mov Rm,Rn */
	IF(0x0C0BACB0u); { u32 t_ = r2; PR = 0x0C0BACB4u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0BACB4u); }  /* 0C0BACB0 jsr @Rn */
L_0C0BACB4: BLKS(0x0C0BACB4u);
	r3 = 0xC069B20u; UPD(0x0C0BACB6u, 1);  /* 0C0BACB4 mov.l @(disp,pc),Rn */
	r5 = r12;  /* 0C0BACB6 mov Rm,Rn */
	r11 = r0;  /* 0C0BACB8 mov Rm,Rn */
	IF(0x0C0BACBAu); { u32 t_ = r3; PR = 0x0C0BACBEu; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0BACBEu); }  /* 0C0BACBA jsr @Rn */
L_0C0BACBE: BLKS(0x0C0BACBEu);
	r11 += r0;  /* 0C0BACBE add Rm,Rn */
	IF(0x0C0BACC0u); r11 <<= 2;  /* 0C0BACC0 shll2 Rn */
	r10 += r11;  /* 0C0BACC2 add Rm,Rn */
	W32(r8 + 0x34u, r10); UPD(0x0C0BACC6u, 4);  /* 0C0BACC4 mov.l Rm,@(disp,Rn) */
	r11 = 0x0u;  /* 0C0BACC6 mov #imm,Rn */
	r12 = R32(r14 + 0x38u); UPD(0x0C0BACCAu, 2);  /* 0C0BACC8 mov.l @(disp,Rm),Rn */
	r8 += 0x48u;  /* 0C0BACCA add #imm,Rn */
	W32(r8, r12); UPD(0x0C0BACCEu, 2);  /* 0C0BACCC mov.l Rm,@Rn */
	r8 += 0x8u;  /* 0C0BACCE add #imm,Rn */
	W8(r8, r11); UPD(0x0C0BACD2u, 2);  /* 0C0BACD0 mov.b Rm,@Rn */
	r10 = 0x207C0C0u; UPD(0x0C0BACD4u, 1);  /* 0C0BACD2 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFB0u;  /* 0C0BACD4 add #imm,Rn */
	r7 = R32(r14 + 0x10u); UPD(0x0C0BACD8u, 2);  /* 0C0BACD6 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x3Cu, r10); UPD(0x0C0BACDAu, 1);  /* 0C0BACD8 mov.l Rm,@(disp,Rn) */
	r7 += 0x1u;  /* 0C0BACDA add #imm,Rn */
	r9 = 0x808080u; UPD(0x0C0BACDEu, 2);  /* 0C0BACDC mov.l @(disp,pc),Rn */
	r6 = (u32)(s32)(s16)r7;  /* 0C0BACDE exts.w Rm,Rn */
	r8 += 0x40u;  /* 0C0BACE0 add #imm,Rn */
	r5 = R32(r14 + 0xCu); UPD(0x0C0BACE4u, 3);  /* 0C0BACE2 mov.l @(disp,Rm),Rn */
	W32(r8, r9); UPD(0x0C0BACE6u, 1);  /* 0C0BACE4 mov.l Rm,@Rn */
	T = (s32)r6 >= (s32)r5;  /* 0C0BACE6 cmp/ge Rm,Rn */
	{ u32 c_ = !T; W32(r14 + 0x10u, r6); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0BAC08u, 4); goto L_0C0BAC08; } UPD(0x0C0BACECu, 1); goto L_0C0BACEC; }  /* 0C0BACE8 bf/s */
L_0C0BACEC: BLKS(0x0C0BACECu);
	r13 = 0xC0C2110u; UPD(0x0C0BACEEu, 1);  /* 0C0BACEC mov.l @(disp,pc),Rn */
	r5 = 0xC1F7ED8u; UPD(0x0C0BACF0u, 1);  /* 0C0BACEE mov.l @(disp,pc),Rn */
	r0 = R32(r14); UPD(0x0C0BACF2u, 1);  /* 0C0BACF0 mov.l @Rm,Rn */
	IF(0x0C0BACF2u); { u32 t_ = r13; PR = 0x0C0BACF6u; IF(0x0C0BACF4u); r4 = (u32)(s32)(s8)R8(r0 + r5); /* slot mov.b @(r0,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2110, 0x0C0C2110u, 0x0C0BACF6u); }  /* 0C0BACF2 jsr @Rn */
L_0C0BACF6: BLKS(0x0C0BACF6u);
	{ r0 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C0BABACu, 3); goto L_0C0BABAC; }  /* 0C0BACF6 bra */
L_0C0BAD00: BLKS(0x0C0BAD00u);
	r8 = 0xC062780u; UPD(0x0C0BAD02u, 1);  /* 0C0BAD00 mov.l @(disp,pc),Rn */
	IF(0x0C0BAD02u); { u32 t_ = r8; PR = 0x0C0BAD06u; r4 = 0x7u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0BAD06u); }  /* 0C0BAD02 jsr @Rn */
L_0C0BAD06: BLKS(0x0C0BAD06u);
	{ W32(r14, r0); /* slot mov.l Rm,@Rn */ UPD(0x0C0BABF0u, 3); goto L_0C0BABF0; }  /* 0C0BAD06 bra */
}

/* FUN_0c0bad60 */
void blk_f_0C0BAD60(sh3_t *c)
{
	LOCALS;
L_0C0BAD60: BLKS(0x0C0BAD60u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0BAD62u, 1);  /* 0C0BAD60 mov.l Rm,@-Rn */
	r0 = 0x0u;  /* 0C0BAD62 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0BAD66u, 2);  /* 0C0BAD64 mov.l Rm,@-Rn */
	r8 = r4;  /* 0C0BAD66 mov Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0BAD6Au, 2);  /* 0C0BAD68 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0BAD6Cu, 1);  /* 0C0BAD6A mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s16)r7;  /* 0C0BAD6C exts.w Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0BAD70u, 2);  /* 0C0BAD6E mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0BAD72u, 1);  /* 0C0BAD70 mov.l Rm,@-Rn */
	r12 = r5;  /* 0C0BAD72 mov Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0BAD76u, 2);  /* 0C0BAD74 mov.l Rm,@-Rn */
	IF(0x0C0BAD76u); r15 -= 4; W32(r15, PR); UPD(0x0C0BAD78u, 1);  /* 0C0BAD76 sts.l pr,@-Rn */
	r3 = 0xC2B07FCu; UPD(0x0C0BAD7Au, 1);  /* 0C0BAD78 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFE0u;  /* 0C0BAD7A add #imm,Rn */
	r14 = r15;  /* 0C0BAD7C mov Rm,Rn */
	r2 = R32(r3); UPD(0x0C0BAD80u, 3);  /* 0C0BAD7E mov.l @Rm,Rn */
	W32(r14 + 0x8u, r0); UPD(0x0C0BAD82u, 1);  /* 0C0BAD80 mov.l Rm,@(disp,Rn) */
	T = (r2 & r2) == 0;  /* 0C0BAD82 tst Rm,Rn */
	{ u32 c_ = !T; W32(r14, r6); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C0BADB4u, 4); goto L_0C0BADB4; } UPD(0x0C0BAD88u, 1); goto L_0C0BAD88; }  /* 0C0BAD84 bf/s */
L_0C0BAD88: BLKS(0x0C0BAD88u);
	r2 = 0xFF580000u; UPD(0x0C0BAD8Au, 1);  /* 0C0BAD88 mov.l @(disp,pc),Rn */
	r2 += r5;  /* 0C0BAD8A add Rm,Rn */
	IF(0x0C0BAD8Cu); T = (s32)r2 >= 0;  /* 0C0BAD8C cmp/pz Rn */
	if (T) { UPD(0x0C0BAD92u, 5); goto L_0C0BAD92; }  /* 0C0BAD8E bt */
L_0C0BAD90: BLKS(0x0C0BAD90u);
	r2 = 0u - r2;  /* 0C0BAD90 neg Rm,Rn */
	UPD(0x0C0BAD92u, 1);
L_0C0BAD92: BLKS(0x0C0BAD92u);
	r0 = 0x980000u; UPD(0x0C0BAD94u, 1);  /* 0C0BAD92 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r0;  /* 0C0BAD94 cmp/gt Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BADB4u, 4); goto L_0C0BADB4; } goto L_0C0BAD9A; }  /* 0C0BAD96 bt/s */
L_0C0BAD9A: BLKS(0x0C0BAD9Au);
	r2 = 0xC3C4048u; UPD(0x0C0BAD9Cu, 2);  /* 0C0BAD9A mov.l @(disp,pc),Rn */
	r5 = R32(r2); UPD(0x0C0BAD9Eu, 1);  /* 0C0BAD9C mov.l @Rm,Rn */
	r2 = R32(r14); UPD(0x0C0BADA0u, 1);  /* 0C0BAD9E mov.l @Rm,Rn */
	r4 = 0xFF880000u; UPD(0x0C0BADA2u, 1);  /* 0C0BADA0 mov.l @(disp,pc),Rn */
	r2 -= r5;  /* 0C0BADA2 sub Rm,Rn */
	r2 += r4;  /* 0C0BADA4 add Rm,Rn */
	IF(0x0C0BADA6u); T = (s32)r2 >= 0;  /* 0C0BADA6 cmp/pz Rn */
	if (T) { UPD(0x0C0BADACu, 6); goto L_0C0BADAC; }  /* 0C0BADA8 bt */
L_0C0BADAA: BLKS(0x0C0BADAAu);
	r2 = 0u - r2;  /* 0C0BADAA neg Rm,Rn */
	UPD(0x0C0BADACu, 1);
L_0C0BADAC: BLKS(0x0C0BADACu);
	r6 = 0x700000u; UPD(0x0C0BADAEu, 1);  /* 0C0BADAC mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r6;  /* 0C0BADAE cmp/gt Rm,Rn */
	IF(0x0C0BADB0u); r0 = T;  /* 0C0BADB0 movt Rn */
	r0 ^= 0x1u;  /* 0C0BADB2 xor #imm,r0 */
	UPD(0x0C0BADB4u, 3);
L_0C0BADB4: BLKS(0x0C0BADB4u);
	r7 = (u32)(s32)(s8)r0;  /* 0C0BADB4 exts.b Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C0BADB6 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BADE0u, 5); goto L_0C0BADE0; } UPD(0x0C0BADBCu, 1); goto L_0C0BADBC; }  /* 0C0BADB8 bf/s */
L_0C0BADBC: BLKS(0x0C0BADBCu);
	r14 += 0x20u;  /* 0C0BADBC add #imm,Rn */
	r15 = r14;  /* 0C0BADBE mov Rm,Rn */
	IF(0x0C0BADC0u); PR = R32(r15); r15 += 4; UPD(0x0C0BADC2u, 3);  /* 0C0BADC0 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0BADC4u, 1);  /* 0C0BADC2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0BADC6u, 1);  /* 0C0BADC4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0BADC8u, 1);  /* 0C0BADC6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0BADCAu, 1);  /* 0C0BADC8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0BADCCu, 1);  /* 0C0BADCA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0BADCEu, 1);  /* 0C0BADCC mov.l @Rm+,Rn */
	IF(0x0C0BADCEu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0BADCE rts */
L_0C0BADE0: BLKS(0x0C0BADE0u);
	r9 = 0xC0717A0u; UPD(0x0C0BADE2u, 1);  /* 0C0BADE0 mov.l @(disp,pc),Rn */
	IF(0x0C0BADE2u); { u32 t_ = r9; PR = 0x0C0BADE6u; r4 = 0x2u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0717A0, 0x0C0717A0u, 0x0C0BADE6u); }  /* 0C0BADE2 jsr @Rn */
L_0C0BADE6: BLKS(0x0C0BADE6u);
	T = (r0 & r0) == 0;  /* 0C0BADE6 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BADBCu, 4); goto L_0C0BADBC; } goto L_0C0BADEC; }  /* 0C0BADE8 bt/s */
L_0C0BADEC: BLKS(0x0C0BADECu);
	r11 = 0x7u;  /* 0C0BADEC mov #imm,Rn */
	T = (s32)r8 > (s32)r11;  /* 0C0BADEE cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0BADF6u, 6); goto L_0C0BADF6; }  /* 0C0BADF0 bf */
L_0C0BADF2: BLKS(0x0C0BADF2u);
	{ IF(0x0C0BADF4u); ; /* slot nop */ UPD(0x0C0BAF00u, 3); goto L_0C0BAF00; }  /* 0C0BADF2 bra */
L_0C0BADF6: BLKS(0x0C0BADF6u);
	r9 = 0xC062780u; UPD(0x0C0BADF8u, 1);  /* 0C0BADF6 mov.l @(disp,pc),Rn */
L_0C0BADF8: BLKS(0x0C0BADF8u);
	r13 = 0xC28EDFCu; UPD(0x0C0BADFAu, 1);  /* 0C0BADF8 mov.l @(disp,pc),Rn */
	r4 = 0x4u;  /* 0C0BADFA mov #imm,Rn */
	IF(0x0C0BADFCu); { u32 t_ = r9; PR = 0x0C0BAE00u; W32(r14 + 0xCu, r13); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0BAE00u); }  /* 0C0BADFC jsr @Rn */
L_0C0BAE00: BLKS(0x0C0BAE00u);
	r13 = r0;  /* 0C0BAE00 mov Rm,Rn */
	r0 = 0xC234BECu; UPD(0x0C0BAE04u, 2);  /* 0C0BAE02 mov.l @(disp,pc),Rn */
	r13 += 0x10u;  /* 0C0BAE04 add #imm,Rn */
	r3 = R32(r0); UPD(0x0C0BAE08u, 2);  /* 0C0BAE06 mov.l @Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C0BAE08 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BADBCu, 4); goto L_0C0BADBC; } goto L_0C0BAE0E; }  /* 0C0BAE0A bf/s */
L_0C0BAE0E: BLKS(0x0C0BAE0Eu);
	r10 += 0x4u;  /* 0C0BAE0E add #imm,Rn */
	r11 = r10;  /* 0C0BAE10 mov Rm,Rn */
	r6 = r8;  /* 0C0BAE12 mov Rm,Rn */
	IF(0x0C0BAE14u); T = r11 & 1; r11 = (u32)((s32)r11 >> 1);  /* 0C0BAE14 shar Rn */
	IF(0x0C0BAE16u); r8 <<= 2;  /* 0C0BAE16 shll2 Rn */
	IF(0x0C0BAE18u); T = r11 & 1; r11 = (u32)((s32)r11 >> 1);  /* 0C0BAE18 shar Rn */
	W32(r14 + 0x1Cu, r8); UPD(0x0C0BAE1Cu, 8);  /* 0C0BAE1A mov.l Rm,@(disp,Rn) */
	IF(0x0C0BAE1Cu); T = r11 & 1; r11 = (u32)((s32)r11 >> 1);  /* 0C0BAE1C shar Rn */
	r4 = 0x3Fu;  /* 0C0BAE1E mov #imm,Rn */
	r11 &= r4;  /* 0C0BAE20 and Rm,Rn */
	r5 = r13;  /* 0C0BAE22 mov Rm,Rn */
	r2 = 0x4u;  /* 0C0BAE24 mov #imm,Rn */
	r1 = r11;  /* 0C0BAE26 mov Rm,Rn */
	r8 = 0x3u;  /* 0C0BAE28 mov #imm,Rn */
	IF(0x0C0BAE2Au); ARG0(0x452Du); { s32 s_ = (s32)r2; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = 0; else r5 >>= ((~s_ & 31) + 1); }  /* 0C0BAE2A shld Rm,Rn */
	IF(0x0C0BAE2Cu); ARG0(0x418Du); { s32 s_ = (s32)r8; if (s_ >= 0) r1 <<= (s_ & 31); else if ((s_ & 31) == 0) r1 = 0; else r1 >>= ((~s_ & 31) + 1); }  /* 0C0BAE2C shld Rm,Rn */
	r7 = 0x1u;  /* 0C0BAE2E mov #imm,Rn */
	r6 += r6;  /* 0C0BAE30 add Rm,Rn */
	W32(r14 + 0x4u, r7); UPD(0x0C0BAE34u, 12);  /* 0C0BAE32 mov.l Rm,@(disp,Rn) */
	r10 += 0xFFFFFFFCu;  /* 0C0BAE34 add #imm,Rn */
	W32(r14 + 0x18u, r6); UPD(0x0C0BAE38u, 2);  /* 0C0BAE36 mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x14u, r5); UPD(0x0C0BAE3Au, 1);  /* 0C0BAE38 mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x10u, r1); UPD(0x0C0BAE3Cu, 1);  /* 0C0BAE3A mov.l Rm,@(disp,Rn) */
L_0C0BAE3C: BLKS(0x0C0BAE3Cu);
	r5 = R32(r14 + 0xCu); UPD(0x0C0BAE3Eu, 1);  /* 0C0BAE3C mov.l @(disp,Rm),Rn */
	r8 = 0x54u;  /* 0C0BAE3E mov #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r9 = v_; } UPD(0x0C0BAE42u, 2);  /* 0C0BAE40 mov.w @Rm+,Rn */
	IF(0x0C0BAE42u); MACL = r9 * r8;  /* 0C0BAE42 mul.l Rm,Rn */
	r0 = 0xC297B40u; UPD(0x0C0BAE46u, 3);  /* 0C0BAE44 mov.l @(disp,pc),Rn */
	IF(0x0C0BAE46u); r8 = MACL;  /* 0C0BAE46 sts macl,Rn */
	r8 += r0;  /* 0C0BAE48 add Rm,Rn */
	r0 = R32(r14 + 0x4u); UPD(0x0C0BAE4Cu, 3);  /* 0C0BAE4A mov.l @(disp,Rm),Rn */
	r4 = 0xC1F7F00u; UPD(0x0C0BAE4Eu, 1);  /* 0C0BAE4C mov.l @(disp,pc),Rn */
	IF(0x0C0BAE4Eu); r0 <<= 2;  /* 0C0BAE4E shll2 Rn */
	IF(0x0C0BAE50u); r7 = R32(r0 + r4); UPD(0x0C0BAE52u, 2);  /* 0C0BAE50 mov.l @(r0,Rm),Rn */
	r3 = 0xC1EADB8u; UPD(0x0C0BAE54u, 1);  /* 0C0BAE52 mov.l @(disp,pc),Rn */
	r0 = 0x40u;  /* 0C0BAE54 mov #imm,Rn */
	W32(r8, r7); UPD(0x0C0BAE58u, 2);  /* 0C0BAE56 mov.l Rm,@Rn */
	r2 = R32(r14 + 0x4u); UPD(0x0C0BAE5Au, 1);  /* 0C0BAE58 mov.l @(disp,Rm),Rn */
	r6 = R32(r14 + 0x18u); UPD(0x0C0BAE5Cu, 1);  /* 0C0BAE5A mov.l @(disp,Rm),Rn */
	r7 = R32(r3); UPD(0x0C0BAE5Eu, 1);  /* 0C0BAE5C mov.l @Rm,Rn */
	r6 += r2;  /* 0C0BAE5E add Rm,Rn */
	W32(r8 + 0x4u, r7); UPD(0x0C0BAE62u, 2);  /* 0C0BAE60 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x8u, r13); UPD(0x0C0BAE64u, 1);  /* 0C0BAE62 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0xCu, r6); UPD(0x0C0BAE66u, 1);  /* 0C0BAE64 mov.l Rm,@(disp,Rn) */
	r8 += 0x44u;  /* 0C0BAE66 add #imm,Rn */
	W16(r8, r10); UPD(0x0C0BAE6Au, 2);  /* 0C0BAE68 mov.w Rm,@Rn */
	IF(0x0C0BAE6Au); r1 = R32(r0 + r14); UPD(0x0C0BAE6Cu, 1);  /* 0C0BAE6A mov.l @(r0,Rm),Rn */
	r8 += 0x4u;  /* 0C0BAE6C add #imm,Rn */
	W32(r14 + 0xCu, r5); UPD(0x0C0BAE70u, 2);  /* 0C0BAE6E mov.l Rm,@(disp,Rn) */
	W32(r8, r1); UPD(0x0C0BAE72u, 1);  /* 0C0BAE70 mov.l Rm,@Rn */
	r0 = R32(r14 + 0x1Cu); UPD(0x0C0BAE74u, 1);  /* 0C0BAE72 mov.l @(disp,Rm),Rn */
	r8 += 0xFFFFFFB8u;  /* 0C0BAE74 add #imm,Rn */
	r5 = 0xC1F7EE0u; UPD(0x0C0BAE78u, 2);  /* 0C0BAE76 mov.l @(disp,pc),Rn */
	IF(0x0C0BAE78u); r4 = R32(r0 + r5); UPD(0x0C0BAE7Au, 1);  /* 0C0BAE78 mov.l @(r0,Rm),Rn */
	r0 = 0x3u;  /* 0C0BAE7A mov #imm,Rn */
	IF(0x0C0BAE7Cu); ARG0(0x470Du); { s32 s_ = (s32)r0; if (s_ >= 0) r7 <<= (s_ & 31); else if ((s_ & 31) == 0) r7 = 0; else r7 >>= ((~s_ & 31) + 1); }  /* 0C0BAE7C shld Rm,Rn */
	r3 = 0xC1F7E08u; UPD(0x0C0BAE80u, 3);  /* 0C0BAE7E mov.l @(disp,pc),Rn */
	W32(r8 + 0x38u, r4); UPD(0x0C0BAE82u, 1);  /* 0C0BAE80 mov.l Rm,@(disp,Rn) */
	r7 += r3;  /* 0C0BAE82 add Rm,Rn */
	W32(r8 + 0x10u, r11); UPD(0x0C0BAE86u, 2);  /* 0C0BAE84 mov.l Rm,@(disp,Rn) */
	r2 = R32(r7 + 0x4u); UPD(0x0C0BAE88u, 1);  /* 0C0BAE86 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x24u, r2); UPD(0x0C0BAE8Au, 1);  /* 0C0BAE88 mov.l Rm,@(disp,Rn) */
	r6 = R32(r7); UPD(0x0C0BAE8Cu, 1);  /* 0C0BAE8A mov.l @Rm,Rn */
	r0 = R32(r14 + 0x14u); UPD(0x0C0BAE8Eu, 1);  /* 0C0BAE8C mov.l @(disp,Rm),Rn */
	W32(r8 + 0x14u, r6); UPD(0x0C0BAE90u, 1);  /* 0C0BAE8E mov.l Rm,@(disp,Rn) */
	IF(0x0C0BAE90u); r5 = R32(r0 + r6); UPD(0x0C0BAE92u, 1);  /* 0C0BAE90 mov.l @(r0,Rm),Rn */
	r0 = R32(r14 + 0x10u); UPD(0x0C0BAE94u, 1);  /* 0C0BAE92 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x18u, r5); UPD(0x0C0BAE96u, 1);  /* 0C0BAE94 mov.l Rm,@(disp,Rn) */
	r0 += r5;  /* 0C0BAE96 add Rm,Rn */
	r4 = R32(r0); UPD(0x0C0BAE9Au, 2);  /* 0C0BAE98 mov.l @Rm,Rn */
	W32(r8 + 0x1Cu, r4); UPD(0x0C0BAE9Cu, 1);  /* 0C0BAE9A mov.l Rm,@(disp,Rn) */
	r3 = R32(r0 + 0x4u); UPD(0x0C0BAE9Eu, 1);  /* 0C0BAE9C mov.l @(disp,Rm),Rn */
	r7 = 0xC2380C4u; UPD(0x0C0BAEA0u, 1);  /* 0C0BAE9E mov.l @(disp,pc),Rn */
	r0 = 0x40u;  /* 0C0BAEA0 mov #imm,Rn */
	W32(r8 + 0x20u, r3); UPD(0x0C0BAEA4u, 2);  /* 0C0BAEA2 mov.l Rm,@(disp,Rn) */
	r6 = (u32)(s32)(s16)R16(r7); UPD(0x0C0BAEA6u, 1);  /* 0C0BAEA4 mov.w @Rm,Rn */
	r8 += 0x4Eu;  /* 0C0BAEA6 add #imm,Rn */
	W16(r8, r6); UPD(0x0C0BAEAAu, 2);  /* 0C0BAEA8 mov.w Rm,@Rn */
	r8 += 0xFFFFFFB2u;  /* 0C0BAEAA add #imm,Rn */
	W32(r8 + 0x28u, r12); UPD(0x0C0BAEAEu, 2);  /* 0C0BAEAC mov.l Rm,@(disp,Rn) */
	r2 = R32(r14); UPD(0x0C0BAEB0u, 1);  /* 0C0BAEAE mov.l @Rm,Rn */
	W32(r8 + 0x2Cu, r2); UPD(0x0C0BAEB2u, 1);  /* 0C0BAEB0 mov.l Rm,@(disp,Rn) */
	IF(0x0C0BAEB2u); r5 = R32(r0 + r14); UPD(0x0C0BAEB4u, 1);  /* 0C0BAEB2 mov.l @(r0,Rm),Rn */
	r0 = 0xC069B20u; UPD(0x0C0BAEB6u, 1);  /* 0C0BAEB4 mov.l @(disp,pc),Rn */
	IF(0x0C0BAEB6u); { u32 t_ = r0; PR = 0x0C0BAEBAu; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0BAEBAu); }  /* 0C0BAEB6 jsr @Rn */
L_0C0BAEBA: BLKS(0x0C0BAEBAu);
	W32(r8 + 0x30u, r0); UPD(0x0C0BAEBCu, 1);  /* 0C0BAEBA mov.l Rm,@(disp,Rn) */
	r0 = 0x40u;  /* 0C0BAEBC mov #imm,Rn */
	IF(0x0C0BAEBEu); r5 = R32(r0 + r14); UPD(0x0C0BAEC0u, 2);  /* 0C0BAEBE mov.l @(r0,Rm),Rn */
	r0 = 0xC069AF0u; UPD(0x0C0BAEC2u, 1);  /* 0C0BAEC0 mov.l @(disp,pc),Rn */
	IF(0x0C0BAEC2u); { u32 t_ = r0; PR = 0x0C0BAEC6u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0BAEC6u); }  /* 0C0BAEC2 jsr @Rn */
L_0C0BAEC6: BLKS(0x0C0BAEC6u);
	W32(r8 + 0x34u, r0); UPD(0x0C0BAEC8u, 1);  /* 0C0BAEC6 mov.l Rm,@(disp,Rn) */
	r5 = 0x0u;  /* 0C0BAEC8 mov #imm,Rn */
	r8 += 0x50u;  /* 0C0BAECA add #imm,Rn */
	W8(r8, r5); UPD(0x0C0BAECEu, 3);  /* 0C0BAECC mov.b Rm,@Rn */
	r4 = 0x207C0C0u; UPD(0x0C0BAED0u, 1);  /* 0C0BAECE mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFB0u;  /* 0C0BAED0 add #imm,Rn */
	W32(r8 + 0x3Cu, r4); UPD(0x0C0BAED4u, 2);  /* 0C0BAED2 mov.l Rm,@(disp,Rn) */
	r0 = 0x808080u; UPD(0x0C0BAED6u, 1);  /* 0C0BAED4 mov.l @(disp,pc),Rn */
	r8 += 0x40u;  /* 0C0BAED6 add #imm,Rn */
	W32(r8, r0); UPD(0x0C0BAEDAu, 2);  /* 0C0BAED8 mov.l Rm,@Rn */
	r0 = 0xAu;  /* 0C0BAEDA mov #imm,Rn */
	IF(0x0C0BAEDCu); r1 = (u32)(s32)(s16)R16(r0 + r14); UPD(0x0C0BAEDEu, 2);  /* 0C0BAEDC mov.w @(r0,Rm),Rn */
	r8 += 0xCu;  /* 0C0BAEDE add #imm,Rn */
	r3 = R32(r14 + 0x4u); UPD(0x0C0BAEE2u, 2);  /* 0C0BAEE0 mov.l @(disp,Rm),Rn */
	W32(r14 + 0x8u, r9); UPD(0x0C0BAEE4u, 1);  /* 0C0BAEE2 mov.l Rm,@(disp,Rn) */
	r3 += 0xFFFFFFFFu;  /* 0C0BAEE4 add #imm,Rn */
	r9 = (u32)(s32)(s16)r3;  /* 0C0BAEE6 exts.w Rm,Rn */
	W16(r8, r1); UPD(0x0C0BAEEAu, 3);  /* 0C0BAEE8 mov.w Rm,@Rn */
	IF(0x0C0BAEEAu); T = (s32)r9 >= 0;  /* 0C0BAEEA cmp/pz Rn */
	{ u32 c_ = T; W32(r14 + 0x4u, r9); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0BAE3Cu, 4); goto L_0C0BAE3C; } UPD(0x0C0BAEF0u, 1); goto L_0C0BAEF0; }  /* 0C0BAEEC bt/s */
L_0C0BAEF0: BLKS(0x0C0BAEF0u);
	r10 = 0xC0C2110u; UPD(0x0C0BAEF2u, 1);  /* 0C0BAEF0 mov.l @(disp,pc),Rn */
	IF(0x0C0BAEF2u); { u32 t_ = r10; PR = 0x0C0BAEF6u; r4 = 0x79u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2110, 0x0C0C2110u, 0x0C0BAEF6u); }  /* 0C0BAEF2 jsr @Rn */
L_0C0BAEF6: BLKS(0x0C0BAEF6u);
	{ r0 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C0BADBCu, 3); goto L_0C0BADBC; }  /* 0C0BAEF6 bra */
L_0C0BAF00: BLKS(0x0C0BAF00u);
	r9 = 0xC062780u; UPD(0x0C0BAF02u, 1);  /* 0C0BAF00 mov.l @(disp,pc),Rn */
	IF(0x0C0BAF02u); { u32 t_ = r9; PR = 0x0C0BAF06u; r4 = 0x8u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0BAF06u); }  /* 0C0BAF02 jsr @Rn */
L_0C0BAF06: BLKS(0x0C0BAF06u);
	{ r8 = r0; /* slot mov Rm,Rn */ UPD(0x0C0BADF8u, 3); goto L_0C0BADF8; }  /* 0C0BAF06 bra */
}

/* FUN_0c0baf60 */
void blk_f_0C0BAF60(sh3_t *c)
{
	LOCALS;
L_0C0BAF60: BLKS(0x0C0BAF60u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0BAF62u, 1);  /* 0C0BAF60 mov.l Rm,@-Rn */
	r2 = 0x40u;  /* 0C0BAF62 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0BAF66u, 2);  /* 0C0BAF64 mov.l Rm,@-Rn */
	r0 = 0x0u;  /* 0C0BAF66 mov #imm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0BAF6Au, 2);  /* 0C0BAF68 mov.l Rm,@-Rn */
	r1 = (u32)(s32)(s16)r7;  /* 0C0BAF6A exts.w Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0BAF6Eu, 2);  /* 0C0BAF6C mov.l Rm,@-Rn */
	r8 = r4;  /* 0C0BAF6E mov Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0BAF72u, 2);  /* 0C0BAF70 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0BAF74u, 1);  /* 0C0BAF72 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0BAF76u, 1);  /* 0C0BAF74 mov.l Rm,@-Rn */
	IF(0x0C0BAF76u); r15 -= 4; W32(r15, PR); UPD(0x0C0BAF78u, 1);  /* 0C0BAF76 sts.l pr,@-Rn */
	r15 += 0xFFFFFFD0u;  /* 0C0BAF78 add #imm,Rn */
	r14 = r15;  /* 0C0BAF7A mov Rm,Rn */
	r2 += r14;  /* 0C0BAF7C add Rm,Rn */
	r13 = R32(r2 + 0x14u); UPD(0x0C0BAF80u, 4);  /* 0C0BAF7E mov.l @(disp,Rm),Rn */
	r3 = 0xC2B07FCu; UPD(0x0C0BAF82u, 1);  /* 0C0BAF80 mov.l @(disp,pc),Rn */
	r2 = R32(r3); UPD(0x0C0BAF84u, 1);  /* 0C0BAF82 mov.l @Rm,Rn */
	W32(r14 + 0x14u, r0); UPD(0x0C0BAF86u, 1);  /* 0C0BAF84 mov.l Rm,@(disp,Rn) */
	T = (r2 & r2) == 0;  /* 0C0BAF86 tst Rm,Rn */
	W32(r14, r5); UPD(0x0C0BAF8Au, 2);  /* 0C0BAF88 mov.l Rm,@Rn */
	W32(r14 + 0x4u, r6); UPD(0x0C0BAF8Cu, 1);  /* 0C0BAF8A mov.l Rm,@(disp,Rn) */
	{ u32 c_ = !T; W32(r14 + 0x8u, r1); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0BAFBEu, 3); goto L_0C0BAFBE; } UPD(0x0C0BAF90u, 1); goto L_0C0BAF90; }  /* 0C0BAF8C bf/s */
L_0C0BAF90: BLKS(0x0C0BAF90u);
	r2 = 0xFF580000u; UPD(0x0C0BAF92u, 1);  /* 0C0BAF90 mov.l @(disp,pc),Rn */
	r4 = R32(r14); UPD(0x0C0BAF94u, 1);  /* 0C0BAF92 mov.l @Rm,Rn */
	r2 += r4;  /* 0C0BAF94 add Rm,Rn */
	IF(0x0C0BAF96u); T = (s32)r2 >= 0;  /* 0C0BAF96 cmp/pz Rn */
	if (T) { UPD(0x0C0BAF9Cu, 5); goto L_0C0BAF9C; }  /* 0C0BAF98 bt */
L_0C0BAF9A: BLKS(0x0C0BAF9Au);
	r2 = 0u - r2;  /* 0C0BAF9A neg Rm,Rn */
	UPD(0x0C0BAF9Cu, 1);
L_0C0BAF9C: BLKS(0x0C0BAF9Cu);
	r0 = 0x980000u; UPD(0x0C0BAF9Eu, 1);  /* 0C0BAF9C mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r0;  /* 0C0BAF9E cmp/gt Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BAFBEu, 4); goto L_0C0BAFBE; } goto L_0C0BAFA4; }  /* 0C0BAFA0 bt/s */
L_0C0BAFA4: BLKS(0x0C0BAFA4u);
	r7 = 0xC3C4048u; UPD(0x0C0BAFA6u, 2);  /* 0C0BAFA4 mov.l @(disp,pc),Rn */
	r2 = R32(r14 + 0x4u); UPD(0x0C0BAFA8u, 1);  /* 0C0BAFA6 mov.l @(disp,Rm),Rn */
	r6 = R32(r7); UPD(0x0C0BAFAAu, 1);  /* 0C0BAFA8 mov.l @Rm,Rn */
	r5 = 0xFF880000u; UPD(0x0C0BAFACu, 1);  /* 0C0BAFAA mov.l @(disp,pc),Rn */
	r2 -= r6;  /* 0C0BAFAC sub Rm,Rn */
	r2 += r5;  /* 0C0BAFAE add Rm,Rn */
	IF(0x0C0BAFB0u); T = (s32)r2 >= 0;  /* 0C0BAFB0 cmp/pz Rn */
	if (T) { UPD(0x0C0BAFB6u, 6); goto L_0C0BAFB6; }  /* 0C0BAFB2 bt */
L_0C0BAFB4: BLKS(0x0C0BAFB4u);
	r2 = 0u - r2;  /* 0C0BAFB4 neg Rm,Rn */
	UPD(0x0C0BAFB6u, 1);
L_0C0BAFB6: BLKS(0x0C0BAFB6u);
	r9 = 0x700000u; UPD(0x0C0BAFB8u, 1);  /* 0C0BAFB6 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r9;  /* 0C0BAFB8 cmp/gt Rm,Rn */
	IF(0x0C0BAFBAu); r0 = T;  /* 0C0BAFBA movt Rn */
	r0 ^= 0x1u;  /* 0C0BAFBC xor #imm,r0 */
	UPD(0x0C0BAFBEu, 3);
L_0C0BAFBE: BLKS(0x0C0BAFBEu);
	r10 = (u32)(s32)(s8)r0;  /* 0C0BAFBE exts.b Rm,Rn */
	T = (r10 & r10) == 0;  /* 0C0BAFC0 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BAFE0u, 5); goto L_0C0BAFE0; } UPD(0x0C0BAFC6u, 1); goto L_0C0BAFC6; }  /* 0C0BAFC2 bf/s */
L_0C0BAFC6: BLKS(0x0C0BAFC6u);
	r14 += 0x30u;  /* 0C0BAFC6 add #imm,Rn */
	r15 = r14;  /* 0C0BAFC8 mov Rm,Rn */
	IF(0x0C0BAFCAu); PR = R32(r15); r15 += 4; UPD(0x0C0BAFCCu, 3);  /* 0C0BAFCA lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0BAFCEu, 1);  /* 0C0BAFCC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0BAFD0u, 1);  /* 0C0BAFCE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0BAFD2u, 1);  /* 0C0BAFD0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0BAFD4u, 1);  /* 0C0BAFD2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0BAFD6u, 1);  /* 0C0BAFD4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0BAFD8u, 1);  /* 0C0BAFD6 mov.l @Rm+,Rn */
	IF(0x0C0BAFD8u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0BAFD8 rts */
L_0C0BAFE0: BLKS(0x0C0BAFE0u);
	{ u32 v_ = (u32)(s32)(s16)R16(r13); r13 += 2; r12 = v_; } UPD(0x0C0BAFE2u, 1);  /* 0C0BAFE0 mov.w @Rm+,Rn */
	r11 = 0xC0717A0u; UPD(0x0C0BAFE4u, 1);  /* 0C0BAFE2 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C0BAFE4 mov Rm,Rn */
	W32(r14 + 0xCu, r12); UPD(0x0C0BAFE8u, 2);  /* 0C0BAFE6 mov.l Rm,@(disp,Rn) */
	IF(0x0C0BAFE8u); { u32 t_ = r11; PR = 0x0C0BAFECu; r4 += r4; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0717A0, 0x0C0717A0u, 0x0C0BAFECu); }  /* 0C0BAFE8 jsr @Rn */
L_0C0BAFEC: BLKS(0x0C0BAFECu);
	T = (r0 & r0) == 0;  /* 0C0BAFEC tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BAFC6u, 4); goto L_0C0BAFC6; } goto L_0C0BAFF2; }  /* 0C0BAFEE bt/s */
L_0C0BAFF2: BLKS(0x0C0BAFF2u);
	r3 = 0x7u;  /* 0C0BAFF2 mov #imm,Rn */
	T = (s32)r8 > (s32)r3;  /* 0C0BAFF4 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0BAFFCu, 6); goto L_0C0BAFFC; }  /* 0C0BAFF6 bf */
L_0C0BAFF8: BLKS(0x0C0BAFF8u);
	{ IF(0x0C0BAFFAu); ; /* slot nop */ UPD(0x0C0BB130u, 3); goto L_0C0BB130; }  /* 0C0BAFF8 bra */
L_0C0BAFFC: BLKS(0x0C0BAFFCu);
	r9 = 0xC062780u; UPD(0x0C0BAFFEu, 1);  /* 0C0BAFFC mov.l @(disp,pc),Rn */
L_0C0BAFFE: BLKS(0x0C0BAFFEu);
	r1 = 0xC28EDFCu; UPD(0x0C0BB000u, 1);  /* 0C0BAFFE mov.l @(disp,pc),Rn */
	r4 = 0x4u;  /* 0C0BB000 mov #imm,Rn */
	IF(0x0C0BB002u); { u32 t_ = r9; PR = 0x0C0BB006u; W32(r14 + 0x18u, r1); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0BB006u); }  /* 0C0BB002 jsr @Rn */
L_0C0BB006: BLKS(0x0C0BB006u);
	r4 = 0xC234BECu; UPD(0x0C0BB008u, 1);  /* 0C0BB006 mov.l @(disp,pc),Rn */
	r0 += 0x10u;  /* 0C0BB008 add #imm,Rn */
	W32(r14 + 0x1Cu, r0); UPD(0x0C0BB00Cu, 2);  /* 0C0BB00A mov.l Rm,@(disp,Rn) */
	r2 = R32(r4); UPD(0x0C0BB00Eu, 1);  /* 0C0BB00C mov.l @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C0BB00E tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BAFC6u, 4); goto L_0C0BAFC6; } goto L_0C0BB014; }  /* 0C0BB010 bf/s */
L_0C0BB014: BLKS(0x0C0BB014u);
	r5 = 0x0u;  /* 0C0BB014 mov #imm,Rn */
	r0 = R32(r14 + 0xCu); UPD(0x0C0BB018u, 3);  /* 0C0BB016 mov.l @(disp,Rm),Rn */
	T = (s32)r5 >= (s32)r0;  /* 0C0BB018 cmp/ge Rm,Rn */
	{ u32 c_ = !T; W32(r14 + 0x10u, r5); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0BB022u, 4); goto L_0C0BB022; } UPD(0x0C0BB01Eu, 1); goto L_0C0BB01E; }  /* 0C0BB01A bf/s */
L_0C0BB01E: BLKS(0x0C0BB01Eu);
	{ IF(0x0C0BB020u); ; /* slot nop */ UPD(0x0C0BB120u, 3); goto L_0C0BB120; }  /* 0C0BB01E bra */
L_0C0BB022: BLKS(0x0C0BB022u);
	r7 = r8;  /* 0C0BB022 mov Rm,Rn */
	IF(0x0C0BB024u); r8 <<= 2;  /* 0C0BB024 shll2 Rn */
	W32(r14 + 0x2Cu, r8); UPD(0x0C0BB028u, 3);  /* 0C0BB026 mov.l Rm,@(disp,Rn) */
	r6 = 0x4u;  /* 0C0BB028 mov #imm,Rn */
	r8 = R32(r14 + 0x1Cu); UPD(0x0C0BB02Cu, 2);  /* 0C0BB02A mov.l @(disp,Rm),Rn */
	r7 += r7;  /* 0C0BB02C add Rm,Rn */
	IF(0x0C0BB02Eu); ARG0(0x486Du); { s32 s_ = (s32)r6; if (s_ >= 0) r8 <<= (s_ & 31); else if ((s_ & 31) == 0) r8 = 0; else r8 >>= ((~s_ & 31) + 1); }  /* 0C0BB02E shld Rm,Rn */
	W32(r14 + 0x28u, r7); UPD(0x0C0BB032u, 3);  /* 0C0BB030 mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x24u, r8); UPD(0x0C0BB034u, 1);  /* 0C0BB032 mov.l Rm,@(disp,Rn) */
L_0C0BB034: BLKS(0x0C0BB034u);
	{ u32 v_ = (u32)(s32)(s16)R16(r13); r13 += 2; r12 = v_; } UPD(0x0C0BB036u, 1);  /* 0C0BB034 mov.w @Rm+,Rn */
	r2 = 0x3Fu;  /* 0C0BB036 mov #imm,Rn */
	r10 = R32(r14 + 0x8u); UPD(0x0C0BB03Au, 2);  /* 0C0BB038 mov.l @(disp,Rm),Rn */
	r3 = 0x3u;  /* 0C0BB03A mov #imm,Rn */
	r11 = 0x1FFu; UPD(0x0C0BB03Eu, 2);  /* 0C0BB03C mov.w @(disp,pc),Rn */
	r10 += r12;  /* 0C0BB03E add Rm,Rn */
	r10 &= r11;  /* 0C0BB040 and Rm,Rn */
	r12 = r10;  /* 0C0BB042 mov Rm,Rn */
	r12 += 0x4u;  /* 0C0BB044 add #imm,Rn */
	IF(0x0C0BB046u); r12 >>= 2;  /* 0C0BB046 shlr2 Rn */
	IF(0x0C0BB048u); T = r12 & 1; r12 >>= 1;  /* 0C0BB048 shlr Rn */
	r12 &= r2;  /* 0C0BB04A and Rm,Rn */
	r9 = r12;  /* 0C0BB04C mov Rm,Rn */
	IF(0x0C0BB04Eu); ARG0(0x493Du); { s32 s_ = (s32)r3; if (s_ >= 0) r9 <<= (s_ & 31); else if ((s_ & 31) == 0) r9 = 0; else r9 >>= ((~s_ & 31) + 1); }  /* 0C0BB04E shld Rm,Rn */
	W32(r14 + 0x20u, r9); UPD(0x0C0BB052u, 10);  /* 0C0BB050 mov.l Rm,@(disp,Rn) */
	r11 = 0x1u;  /* 0C0BB052 mov #imm,Rn */
	UPD(0x0C0BB054u, 1);
L_0C0BB054: BLKS(0x0C0BB054u);
	r1 = R32(r14 + 0x18u); UPD(0x0C0BB056u, 1);  /* 0C0BB054 mov.l @(disp,Rm),Rn */
	r8 = 0x54u;  /* 0C0BB056 mov #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r1); r1 += 2; r9 = v_; } UPD(0x0C0BB05Au, 2);  /* 0C0BB058 mov.w @Rm+,Rn */
	r0 = r11;  /* 0C0BB05A mov Rm,Rn */
	IF(0x0C0BB05Cu); MACL = r9 * r8;  /* 0C0BB05C mul.l Rm,Rn */
	r3 = 0xC1F7F00u; UPD(0x0C0BB060u, 4);  /* 0C0BB05E mov.l @(disp,pc),Rn */
	IF(0x0C0BB060u); r0 <<= 2;  /* 0C0BB060 shll2 Rn */
	r2 = 0xC297B40u; UPD(0x0C0BB064u, 2);  /* 0C0BB062 mov.l @(disp,pc),Rn */
	IF(0x0C0BB064u); r8 = MACL;  /* 0C0BB064 sts macl,Rn */
	IF(0x0C0BB066u); r7 = R32(r0 + r3); UPD(0x0C0BB068u, 2);  /* 0C0BB066 mov.l @(r0,Rm),Rn */
	r8 += r2;  /* 0C0BB068 add Rm,Rn */
	W32(r8, r7); UPD(0x0C0BB06Cu, 2);  /* 0C0BB06A mov.l Rm,@Rn */
	r6 = 0xC297490u; UPD(0x0C0BB06Eu, 1);  /* 0C0BB06C mov.l @(disp,pc),Rn */
	r5 = (u32)(s32)(s8)R8(r6); UPD(0x0C0BB070u, 1);  /* 0C0BB06E mov.b @Rm,Rn */
	r4 = 0xC1EADB8u; UPD(0x0C0BB072u, 1);  /* 0C0BB070 mov.l @(disp,pc),Rn */
	r0 = r5 & 0xFF;  /* 0C0BB072 extu.b Rm,Rn */
	W32(r14 + 0x18u, r1); UPD(0x0C0BB076u, 2);  /* 0C0BB074 mov.l Rm,@(disp,Rn) */
	IF(0x0C0BB076u); r0 <<= 2;  /* 0C0BB076 shll2 Rn */
	r0 += r4;  /* 0C0BB078 add Rm,Rn */
	r2 = R32(r14 + 0x28u); UPD(0x0C0BB07Cu, 3);  /* 0C0BB07A mov.l @(disp,Rm),Rn */
	r5 = 0x3u;  /* 0C0BB07C mov #imm,Rn */
	r4 = R32(r0 + 0x4u); UPD(0x0C0BB080u, 2);  /* 0C0BB07E mov.l @(disp,Rm),Rn */
	r2 += r11;  /* 0C0BB080 add Rm,Rn */
	r1 = R32(r14 + 0x1Cu); UPD(0x0C0BB084u, 2);  /* 0C0BB082 mov.l @(disp,Rm),Rn */
	r0 = 0x50u;  /* 0C0BB084 mov #imm,Rn */
	W32(r8 + 0x8u, r1); UPD(0x0C0BB088u, 2);  /* 0C0BB086 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x4u, r4); UPD(0x0C0BB08Au, 1);  /* 0C0BB088 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0xCu, r2); UPD(0x0C0BB08Cu, 1);  /* 0C0BB08A mov.l Rm,@(disp,Rn) */
	IF(0x0C0BB08Cu); ARG0(0x445Du); { s32 s_ = (s32)r5; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = 0; else r4 >>= ((~s_ & 31) + 1); }  /* 0C0BB08C shld Rm,Rn */
	r8 += 0x44u;  /* 0C0BB08E add #imm,Rn */
	W16(r8, r10); UPD(0x0C0BB092u, 3);  /* 0C0BB090 mov.w Rm,@Rn */
	IF(0x0C0BB092u); r3 = R32(r0 + r14); UPD(0x0C0BB094u, 1);  /* 0C0BB092 mov.l @(r0,Rm),Rn */
	r8 += 0x4u;  /* 0C0BB094 add #imm,Rn */
	W32(r8, r3); UPD(0x0C0BB098u, 2);  /* 0C0BB096 mov.l Rm,@Rn */
	r0 = R32(r14 + 0x2Cu); UPD(0x0C0BB09Au, 1);  /* 0C0BB098 mov.l @(disp,Rm),Rn */
	r8 += 0xFFFFFFB8u;  /* 0C0BB09A add #imm,Rn */
	r7 = 0xC1F7EE0u; UPD(0x0C0BB09Eu, 2);  /* 0C0BB09C mov.l @(disp,pc),Rn */
	IF(0x0C0BB09Eu); r6 = R32(r0 + r7); UPD(0x0C0BB0A0u, 1);  /* 0C0BB09E mov.l @(r0,Rm),Rn */
	r0 = 0xC1F7E08u; UPD(0x0C0BB0A2u, 1);  /* 0C0BB0A0 mov.l @(disp,pc),Rn */
	W32(r8 + 0x38u, r6); UPD(0x0C0BB0A4u, 1);  /* 0C0BB0A2 mov.l Rm,@(disp,Rn) */
	r4 += r0;  /* 0C0BB0A4 add Rm,Rn */
	W32(r8 + 0x10u, r12); UPD(0x0C0BB0A8u, 2);  /* 0C0BB0A6 mov.l Rm,@(disp,Rn) */
	r2 = R32(r4 + 0x4u); UPD(0x0C0BB0AAu, 1);  /* 0C0BB0A8 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x24u, r2); UPD(0x0C0BB0ACu, 1);  /* 0C0BB0AA mov.l Rm,@(disp,Rn) */
	r3 = R32(r4); UPD(0x0C0BB0AEu, 1);  /* 0C0BB0AC mov.l @Rm,Rn */
	r0 = R32(r14 + 0x24u); UPD(0x0C0BB0B0u, 1);  /* 0C0BB0AE mov.l @(disp,Rm),Rn */
	W32(r8 + 0x14u, r3); UPD(0x0C0BB0B2u, 1);  /* 0C0BB0B0 mov.l Rm,@(disp,Rn) */
	IF(0x0C0BB0B2u); r7 = R32(r0 + r3); UPD(0x0C0BB0B4u, 1);  /* 0C0BB0B2 mov.l @(r0,Rm),Rn */
	r5 = R32(r14 + 0x20u); UPD(0x0C0BB0B6u, 1);  /* 0C0BB0B4 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x18u, r7); UPD(0x0C0BB0B8u, 1);  /* 0C0BB0B6 mov.l Rm,@(disp,Rn) */
	r5 += r7;  /* 0C0BB0B8 add Rm,Rn */
	r6 = R32(r5); UPD(0x0C0BB0BCu, 2);  /* 0C0BB0BA mov.l @Rm,Rn */
	W32(r8 + 0x1Cu, r6); UPD(0x0C0BB0BEu, 1);  /* 0C0BB0BC mov.l Rm,@(disp,Rn) */
	r0 = R32(r5 + 0x4u); UPD(0x0C0BB0C0u, 1);  /* 0C0BB0BE mov.l @(disp,Rm),Rn */
	r4 = 0xC2380C4u; UPD(0x0C0BB0C2u, 1);  /* 0C0BB0C0 mov.l @(disp,pc),Rn */
	W32(r8 + 0x20u, r0); UPD(0x0C0BB0C4u, 1);  /* 0C0BB0C2 mov.l Rm,@(disp,Rn) */
	r2 = (u32)(s32)(s16)R16(r4); UPD(0x0C0BB0C6u, 1);  /* 0C0BB0C4 mov.w @Rm,Rn */
	r8 += 0x4Eu;  /* 0C0BB0C6 add #imm,Rn */
	W16(r8, r2); UPD(0x0C0BB0CAu, 2);  /* 0C0BB0C8 mov.w Rm,@Rn */
	r0 = 0x50u;  /* 0C0BB0CA mov #imm,Rn */
	r3 = R32(r14); UPD(0x0C0BB0CEu, 2);  /* 0C0BB0CC mov.l @Rm,Rn */
	r8 += 0xFFFFFFB2u;  /* 0C0BB0CE add #imm,Rn */
	W32(r8 + 0x28u, r3); UPD(0x0C0BB0D2u, 2);  /* 0C0BB0D0 mov.l Rm,@(disp,Rn) */
	r7 = R32(r14 + 0x4u); UPD(0x0C0BB0D4u, 1);  /* 0C0BB0D2 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x2Cu, r7); UPD(0x0C0BB0D6u, 1);  /* 0C0BB0D4 mov.l Rm,@(disp,Rn) */
	IF(0x0C0BB0D6u); r5 = R32(r0 + r14); UPD(0x0C0BB0D8u, 1);  /* 0C0BB0D6 mov.l @(r0,Rm),Rn */
	r0 = 0xC069B20u; UPD(0x0C0BB0DAu, 1);  /* 0C0BB0D8 mov.l @(disp,pc),Rn */
	IF(0x0C0BB0DAu); { u32 t_ = r0; PR = 0x0C0BB0DEu; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0BB0DEu); }  /* 0C0BB0DA jsr @Rn */
L_0C0BB0DE: BLKS(0x0C0BB0DEu);
	W32(r8 + 0x30u, r0); UPD(0x0C0BB0E0u, 1);  /* 0C0BB0DE mov.l Rm,@(disp,Rn) */
	r0 = 0x50u;  /* 0C0BB0E0 mov #imm,Rn */
	IF(0x0C0BB0E2u); r5 = R32(r0 + r14); UPD(0x0C0BB0E4u, 2);  /* 0C0BB0E2 mov.l @(r0,Rm),Rn */
	r0 = 0xC069AF0u; UPD(0x0C0BB0E6u, 1);  /* 0C0BB0E4 mov.l @(disp,pc),Rn */
	IF(0x0C0BB0E6u); { u32 t_ = r0; PR = 0x0C0BB0EAu; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0BB0EAu); }  /* 0C0BB0E6 jsr @Rn */
L_0C0BB0EA: BLKS(0x0C0BB0EAu);
	W32(r8 + 0x34u, r0); UPD(0x0C0BB0ECu, 1);  /* 0C0BB0EA mov.l Rm,@(disp,Rn) */
	r6 = 0x0u;  /* 0C0BB0EC mov #imm,Rn */
	r8 += 0x50u;  /* 0C0BB0EE add #imm,Rn */
	W8(r8, r6); UPD(0x0C0BB0F2u, 3);  /* 0C0BB0F0 mov.b Rm,@Rn */
	r4 = r11;  /* 0C0BB0F2 mov Rm,Rn */
	r5 = 0x207C0C0u; UPD(0x0C0BB0F6u, 2);  /* 0C0BB0F4 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFB0u;  /* 0C0BB0F6 add #imm,Rn */
	W32(r8 + 0x3Cu, r5); UPD(0x0C0BB0FAu, 2);  /* 0C0BB0F8 mov.l Rm,@(disp,Rn) */
	r4 += 0xFFFFFFFFu;  /* 0C0BB0FA add #imm,Rn */
	r0 = 0x808080u; UPD(0x0C0BB0FEu, 2);  /* 0C0BB0FC mov.l @(disp,pc),Rn */
	r8 += 0x40u;  /* 0C0BB0FE add #imm,Rn */
	W32(r8, r0); UPD(0x0C0BB102u, 2);  /* 0C0BB100 mov.l Rm,@Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C0BB102 exts.w Rm,Rn */
	r0 = 0x16u;  /* 0C0BB104 mov #imm,Rn */
	IF(0x0C0BB106u); r1 = (u32)(s32)(s16)R16(r0 + r14); UPD(0x0C0BB108u, 3);  /* 0C0BB106 mov.w @(r0,Rm),Rn */
	r8 += 0xCu;  /* 0C0BB108 add #imm,Rn */
	W16(r8, r1); UPD(0x0C0BB10Cu, 2);  /* 0C0BB10A mov.w Rm,@Rn */
	IF(0x0C0BB10Cu); T = (s32)r11 >= 0;  /* 0C0BB10C cmp/pz Rn */
	{ u32 c_ = T; W32(r14 + 0x14u, r9); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0BB054u, 4); goto L_0C0BB054; } UPD(0x0C0BB112u, 1); goto L_0C0BB112; }  /* 0C0BB10E bt/s */
L_0C0BB112: BLKS(0x0C0BB112u);
	r11 = R32(r14 + 0x10u); UPD(0x0C0BB114u, 1);  /* 0C0BB112 mov.l @(disp,Rm),Rn */
	r11 += 0x1u;  /* 0C0BB114 add #imm,Rn */
	r9 = (u32)(s32)(s16)r11;  /* 0C0BB116 exts.w Rm,Rn */
	r10 = R32(r14 + 0xCu); UPD(0x0C0BB11Au, 3);  /* 0C0BB118 mov.l @(disp,Rm),Rn */
	T = (s32)r9 >= (s32)r10;  /* 0C0BB11A cmp/ge Rm,Rn */
	{ u32 c_ = !T; W32(r14 + 0x10u, r9); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0BB034u, 4); goto L_0C0BB034; } UPD(0x0C0BB120u, 1); goto L_0C0BB120; }  /* 0C0BB11C bf/s */
L_0C0BB120: BLKS(0x0C0BB120u);
	r13 = 0xC0C2110u; UPD(0x0C0BB122u, 1);  /* 0C0BB120 mov.l @(disp,pc),Rn */
	IF(0x0C0BB122u); { u32 t_ = r13; PR = 0x0C0BB126u; r4 = 0x79u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2110, 0x0C0C2110u, 0x0C0BB126u); }  /* 0C0BB122 jsr @Rn */
L_0C0BB126: BLKS(0x0C0BB126u);
	{ r0 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C0BAFC6u, 3); goto L_0C0BAFC6; }  /* 0C0BB126 bra */
L_0C0BB130: BLKS(0x0C0BB130u);
	r9 = 0xC062780u; UPD(0x0C0BB132u, 1);  /* 0C0BB130 mov.l @(disp,pc),Rn */
	IF(0x0C0BB132u); { u32 t_ = r9; PR = 0x0C0BB136u; r4 = 0x8u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0BB136u); }  /* 0C0BB132 jsr @Rn */
L_0C0BB136: BLKS(0x0C0BB136u);
	{ r8 = r0; /* slot mov Rm,Rn */ UPD(0x0C0BAFFEu, 3); goto L_0C0BAFFE; }  /* 0C0BB136 bra */
}

/* FUN_0c0bb1a0 */
void blk_f_0C0BB1A0(sh3_t *c)
{
	LOCALS;
L_0C0BB1A0: BLKS(0x0C0BB1A0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0BB1A2u, 1);  /* 0C0BB1A0 mov.l Rm,@-Rn */
	r0 = 0x0u;  /* 0C0BB1A2 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0BB1A6u, 2);  /* 0C0BB1A4 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0BB1A8u, 1);  /* 0C0BB1A6 mov.l Rm,@-Rn */
	r9 = r5;  /* 0C0BB1A8 mov Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0BB1ACu, 2);  /* 0C0BB1AA mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s16)r7;  /* 0C0BB1AC exts.w Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0BB1B0u, 2);  /* 0C0BB1AE mov.l Rm,@-Rn */
	r11 = r4;  /* 0C0BB1B0 mov Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0BB1B4u, 2);  /* 0C0BB1B2 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0BB1B6u, 1);  /* 0C0BB1B4 mov.l Rm,@-Rn */
	IF(0x0C0BB1B6u); r15 -= 4; W32(r15, PR); UPD(0x0C0BB1B8u, 1);  /* 0C0BB1B6 sts.l pr,@-Rn */
	r3 = 0xC2B07FCu; UPD(0x0C0BB1BAu, 1);  /* 0C0BB1B8 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFDCu;  /* 0C0BB1BA add #imm,Rn */
	r14 = r15;  /* 0C0BB1BC mov Rm,Rn */
	r2 = R32(r3); UPD(0x0C0BB1C0u, 3);  /* 0C0BB1BE mov.l @Rm,Rn */
	W32(r14 + 0x8u, r0); UPD(0x0C0BB1C2u, 1);  /* 0C0BB1C0 mov.l Rm,@(disp,Rn) */
	T = (r2 & r2) == 0;  /* 0C0BB1C2 tst Rm,Rn */
	{ u32 c_ = !T; W32(r14, r6); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C0BB1F4u, 4); goto L_0C0BB1F4; } UPD(0x0C0BB1C8u, 1); goto L_0C0BB1C8; }  /* 0C0BB1C4 bf/s */
L_0C0BB1C8: BLKS(0x0C0BB1C8u);
	r2 = 0xFF580000u; UPD(0x0C0BB1CAu, 1);  /* 0C0BB1C8 mov.l @(disp,pc),Rn */
	r2 += r5;  /* 0C0BB1CA add Rm,Rn */
	IF(0x0C0BB1CCu); T = (s32)r2 >= 0;  /* 0C0BB1CC cmp/pz Rn */
	if (T) { UPD(0x0C0BB1D2u, 5); goto L_0C0BB1D2; }  /* 0C0BB1CE bt */
L_0C0BB1D0: BLKS(0x0C0BB1D0u);
	r2 = 0u - r2;  /* 0C0BB1D0 neg Rm,Rn */
	UPD(0x0C0BB1D2u, 1);
L_0C0BB1D2: BLKS(0x0C0BB1D2u);
	r0 = 0x980000u; UPD(0x0C0BB1D4u, 1);  /* 0C0BB1D2 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r0;  /* 0C0BB1D4 cmp/gt Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BB1F4u, 4); goto L_0C0BB1F4; } goto L_0C0BB1DA; }  /* 0C0BB1D6 bt/s */
L_0C0BB1DA: BLKS(0x0C0BB1DAu);
	r2 = 0xC3C4048u; UPD(0x0C0BB1DCu, 2);  /* 0C0BB1DA mov.l @(disp,pc),Rn */
	r5 = R32(r2); UPD(0x0C0BB1DEu, 1);  /* 0C0BB1DC mov.l @Rm,Rn */
	r2 = R32(r14); UPD(0x0C0BB1E0u, 1);  /* 0C0BB1DE mov.l @Rm,Rn */
	r4 = 0xFF880000u; UPD(0x0C0BB1E2u, 1);  /* 0C0BB1E0 mov.l @(disp,pc),Rn */
	r2 -= r5;  /* 0C0BB1E2 sub Rm,Rn */
	r2 += r4;  /* 0C0BB1E4 add Rm,Rn */
	IF(0x0C0BB1E6u); T = (s32)r2 >= 0;  /* 0C0BB1E6 cmp/pz Rn */
	if (T) { UPD(0x0C0BB1ECu, 6); goto L_0C0BB1EC; }  /* 0C0BB1E8 bt */
L_0C0BB1EA: BLKS(0x0C0BB1EAu);
	r2 = 0u - r2;  /* 0C0BB1EA neg Rm,Rn */
	UPD(0x0C0BB1ECu, 1);
L_0C0BB1EC: BLKS(0x0C0BB1ECu);
	r6 = 0x700000u; UPD(0x0C0BB1EEu, 1);  /* 0C0BB1EC mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r6;  /* 0C0BB1EE cmp/gt Rm,Rn */
	IF(0x0C0BB1F0u); r0 = T;  /* 0C0BB1F0 movt Rn */
	r0 ^= 0x1u;  /* 0C0BB1F2 xor #imm,r0 */
	UPD(0x0C0BB1F4u, 3);
L_0C0BB1F4: BLKS(0x0C0BB1F4u);
	r7 = (u32)(s32)(s8)r0;  /* 0C0BB1F4 exts.b Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C0BB1F6 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BB220u, 5); goto L_0C0BB220; } UPD(0x0C0BB1FCu, 1); goto L_0C0BB1FC; }  /* 0C0BB1F8 bf/s */
L_0C0BB1FC: BLKS(0x0C0BB1FCu);
	r14 += 0x24u;  /* 0C0BB1FC add #imm,Rn */
	r15 = r14;  /* 0C0BB1FE mov Rm,Rn */
	IF(0x0C0BB200u); PR = R32(r15); r15 += 4; UPD(0x0C0BB202u, 3);  /* 0C0BB200 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0BB204u, 1);  /* 0C0BB202 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0BB206u, 1);  /* 0C0BB204 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0BB208u, 1);  /* 0C0BB206 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0BB20Au, 1);  /* 0C0BB208 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0BB20Cu, 1);  /* 0C0BB20A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0BB20Eu, 1);  /* 0C0BB20C mov.l @Rm+,Rn */
	IF(0x0C0BB20Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0BB20E rts */
L_0C0BB220: BLKS(0x0C0BB220u);
	r8 = 0xC0717A0u; UPD(0x0C0BB222u, 1);  /* 0C0BB220 mov.l @(disp,pc),Rn */
	IF(0x0C0BB222u); { u32 t_ = r8; PR = 0x0C0BB226u; r4 = 0x3u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0717A0, 0x0C0717A0u, 0x0C0BB226u); }  /* 0C0BB222 jsr @Rn */
L_0C0BB226: BLKS(0x0C0BB226u);
	T = (r0 & r0) == 0;  /* 0C0BB226 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BB1FCu, 4); goto L_0C0BB1FC; } goto L_0C0BB22C; }  /* 0C0BB228 bt/s */
L_0C0BB22C: BLKS(0x0C0BB22Cu);
	r12 = 0x7u;  /* 0C0BB22C mov #imm,Rn */
	T = (s32)r11 > (s32)r12;  /* 0C0BB22E cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0BB236u, 6); goto L_0C0BB236; }  /* 0C0BB230 bf */
L_0C0BB232: BLKS(0x0C0BB232u);
	{ IF(0x0C0BB234u); ; /* slot nop */ UPD(0x0C0BB340u, 3); goto L_0C0BB340; }  /* 0C0BB232 bra */
L_0C0BB236: BLKS(0x0C0BB236u);
	r8 = 0xC062780u; UPD(0x0C0BB238u, 1);  /* 0C0BB236 mov.l @(disp,pc),Rn */
L_0C0BB238: BLKS(0x0C0BB238u);
	r0 = 0xC28EDFCu; UPD(0x0C0BB23Au, 1);  /* 0C0BB238 mov.l @(disp,pc),Rn */
	r4 = 0x4u;  /* 0C0BB23A mov #imm,Rn */
	IF(0x0C0BB23Cu); { u32 t_ = r8; PR = 0x0C0BB240u; W32(r14 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0BB240u); }  /* 0C0BB23C jsr @Rn */
L_0C0BB240: BLKS(0x0C0BB240u);
	r3 = 0xC234BECu; UPD(0x0C0BB242u, 1);  /* 0C0BB240 mov.l @(disp,pc),Rn */
	r1 = r0;  /* 0C0BB242 mov Rm,Rn */
	r1 += 0x18u;  /* 0C0BB244 add #imm,Rn */
	r13 = R32(r3); UPD(0x0C0BB248u, 3);  /* 0C0BB246 mov.l @Rm,Rn */
	r0 = 0x1u;  /* 0C0BB248 mov #imm,Rn */
	T = (r13 & r13) == 0;  /* 0C0BB24A tst Rm,Rn */
	{ u32 c_ = !T; W32(r14 + 0x10u, r1); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0BB1FCu, 5); goto L_0C0BB1FC; } UPD(0x0C0BB250u, 1); goto L_0C0BB250; }  /* 0C0BB24C bf/s */
L_0C0BB250: BLKS(0x0C0BB250u);
	r12 = r11;  /* 0C0BB250 mov Rm,Rn */
	r12 += r12;  /* 0C0BB252 add Rm,Rn */
	W32(r14 + 0x1Cu, r12); UPD(0x0C0BB256u, 3);  /* 0C0BB254 mov.l Rm,@(disp,Rn) */
	r10 += 0x4u;  /* 0C0BB256 add #imm,Rn */
	r12 = r10;  /* 0C0BB258 mov Rm,Rn */
	IF(0x0C0BB25Au); T = r12 & 1; r12 = (u32)((s32)r12 >> 1);  /* 0C0BB25A shar Rn */
	IF(0x0C0BB25Cu); T = r12 & 1; r12 = (u32)((s32)r12 >> 1);  /* 0C0BB25C shar Rn */
	IF(0x0C0BB25Eu); T = r12 & 1; r12 = (u32)((s32)r12 >> 1);  /* 0C0BB25E shar Rn */
	r2 = 0x3Fu;  /* 0C0BB260 mov #imm,Rn */
	r6 = R32(r14 + 0x10u); UPD(0x0C0BB264u, 7);  /* 0C0BB262 mov.l @(disp,Rm),Rn */
	r12 &= r2;  /* 0C0BB264 and Rm,Rn */
	r7 = 0x4u;  /* 0C0BB266 mov #imm,Rn */
	r4 = r12;  /* 0C0BB268 mov Rm,Rn */
	r5 = 0x3u;  /* 0C0BB26A mov #imm,Rn */
	r8 = r11;  /* 0C0BB26C mov Rm,Rn */
	IF(0x0C0BB26Eu); ARG0(0x467Du); { s32 s_ = (s32)r7; if (s_ >= 0) r6 <<= (s_ & 31); else if ((s_ & 31) == 0) r6 = 0; else r6 >>= ((~s_ & 31) + 1); }  /* 0C0BB26E shld Rm,Rn */
	IF(0x0C0BB270u); ARG0(0x445Du); { s32 s_ = (s32)r5; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = 0; else r4 >>= ((~s_ & 31) + 1); }  /* 0C0BB270 shld Rm,Rn */
	IF(0x0C0BB272u); r8 <<= 2;  /* 0C0BB272 shll2 Rn */
	W32(r14 + 0x20u, r8); UPD(0x0C0BB276u, 9);  /* 0C0BB274 mov.l Rm,@(disp,Rn) */
	r13 = 0x2u;  /* 0C0BB276 mov #imm,Rn */
	W32(r14 + 0x18u, r6); UPD(0x0C0BB27Au, 2);  /* 0C0BB278 mov.l Rm,@(disp,Rn) */
	r10 += 0xFFFFFFFCu;  /* 0C0BB27A add #imm,Rn */
	W32(r14 + 0x14u, r4); UPD(0x0C0BB27Eu, 2);  /* 0C0BB27C mov.l Rm,@(disp,Rn) */
L_0C0BB27E: BLKS(0x0C0BB27Eu);
	r2 = R32(r14 + 0xCu); UPD(0x0C0BB280u, 1);  /* 0C0BB27E mov.l @(disp,Rm),Rn */
	r8 = 0x54u;  /* 0C0BB280 mov #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r2); r2 += 2; r6 = v_; } UPD(0x0C0BB284u, 2);  /* 0C0BB282 mov.w @Rm+,Rn */
	IF(0x0C0BB284u); MACL = r6 * r8;  /* 0C0BB284 mul.l Rm,Rn */
	r0 = 0xC297B40u; UPD(0x0C0BB288u, 3);  /* 0C0BB286 mov.l @(disp,pc),Rn */
	IF(0x0C0BB288u); r8 = MACL;  /* 0C0BB288 sts macl,Rn */
	r8 += r0;  /* 0C0BB28A add Rm,Rn */
	r0 = r13;  /* 0C0BB28C mov Rm,Rn */
	r5 = 0xC1F7F08u; UPD(0x0C0BB290u, 4);  /* 0C0BB28E mov.l @(disp,pc),Rn */
	IF(0x0C0BB290u); r0 <<= 2;  /* 0C0BB290 shll2 Rn */
	IF(0x0C0BB292u); r7 = R32(r0 + r5); UPD(0x0C0BB294u, 2);  /* 0C0BB292 mov.l @(r0,Rm),Rn */
	W32(r14 + 0x4u, r6); UPD(0x0C0BB296u, 1);  /* 0C0BB294 mov.l Rm,@(disp,Rn) */
	r0 = 0x44u;  /* 0C0BB296 mov #imm,Rn */
	W32(r8, r7); UPD(0x0C0BB29Au, 2);  /* 0C0BB298 mov.l Rm,@Rn */
	r4 = 0xC1EADCCu; UPD(0x0C0BB29Cu, 1);  /* 0C0BB29A mov.l @(disp,pc),Rn */
	r6 = R32(r14 + 0x1Cu); UPD(0x0C0BB29Eu, 1);  /* 0C0BB29C mov.l @(disp,Rm),Rn */
	r7 = R32(r4); UPD(0x0C0BB2A0u, 1);  /* 0C0BB29E mov.l @Rm,Rn */
	r6 += r11;  /* 0C0BB2A0 add Rm,Rn */
	r3 = R32(r14 + 0x10u); UPD(0x0C0BB2A4u, 2);  /* 0C0BB2A2 mov.l @(disp,Rm),Rn */
	r6 += r13;  /* 0C0BB2A4 add Rm,Rn */
	W32(r8 + 0x4u, r7); UPD(0x0C0BB2A8u, 2);  /* 0C0BB2A6 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x8u, r3); UPD(0x0C0BB2AAu, 1);  /* 0C0BB2A8 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0xCu, r6); UPD(0x0C0BB2ACu, 1);  /* 0C0BB2AA mov.l Rm,@(disp,Rn) */
	r8 += 0x44u;  /* 0C0BB2AC add #imm,Rn */
	W16(r8, r10); UPD(0x0C0BB2B0u, 2);  /* 0C0BB2AE mov.w Rm,@Rn */
	IF(0x0C0BB2B0u); r1 = R32(r0 + r14); UPD(0x0C0BB2B2u, 1);  /* 0C0BB2B0 mov.l @(r0,Rm),Rn */
	r8 += 0x4u;  /* 0C0BB2B2 add #imm,Rn */
	W32(r14 + 0xCu, r2); UPD(0x0C0BB2B6u, 2);  /* 0C0BB2B4 mov.l Rm,@(disp,Rn) */
	W32(r8, r1); UPD(0x0C0BB2B8u, 1);  /* 0C0BB2B6 mov.l Rm,@Rn */
	r0 = R32(r14 + 0x20u); UPD(0x0C0BB2BAu, 1);  /* 0C0BB2B8 mov.l @(disp,Rm),Rn */
	r8 += 0xFFFFFFB8u;  /* 0C0BB2BA add #imm,Rn */
	r2 = 0xC1F7F14u; UPD(0x0C0BB2BEu, 2);  /* 0C0BB2BC mov.l @(disp,pc),Rn */
	IF(0x0C0BB2BEu); r5 = R32(r0 + r2); UPD(0x0C0BB2C0u, 1);  /* 0C0BB2BE mov.l @(r0,Rm),Rn */
	r0 = 0x3u;  /* 0C0BB2C0 mov #imm,Rn */
	IF(0x0C0BB2C2u); ARG0(0x470Du); { s32 s_ = (s32)r0; if (s_ >= 0) r7 <<= (s_ & 31); else if ((s_ & 31) == 0) r7 = 0; else r7 >>= ((~s_ & 31) + 1); }  /* 0C0BB2C2 shld Rm,Rn */
	r4 = 0xC1F7E08u; UPD(0x0C0BB2C6u, 3);  /* 0C0BB2C4 mov.l @(disp,pc),Rn */
	W32(r8 + 0x38u, r5); UPD(0x0C0BB2C8u, 1);  /* 0C0BB2C6 mov.l Rm,@(disp,Rn) */
	r7 += r4;  /* 0C0BB2C8 add Rm,Rn */
	W32(r8 + 0x10u, r12); UPD(0x0C0BB2CCu, 2);  /* 0C0BB2CA mov.l Rm,@(disp,Rn) */
	r3 = R32(r7 + 0x4u); UPD(0x0C0BB2CEu, 1);  /* 0C0BB2CC mov.l @(disp,Rm),Rn */
	W32(r8 + 0x24u, r3); UPD(0x0C0BB2D0u, 1);  /* 0C0BB2CE mov.l Rm,@(disp,Rn) */
	r6 = R32(r7); UPD(0x0C0BB2D2u, 1);  /* 0C0BB2D0 mov.l @Rm,Rn */
	r0 = R32(r14 + 0x18u); UPD(0x0C0BB2D4u, 1);  /* 0C0BB2D2 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x14u, r6); UPD(0x0C0BB2D6u, 1);  /* 0C0BB2D4 mov.l Rm,@(disp,Rn) */
	IF(0x0C0BB2D6u); r2 = R32(r0 + r6); UPD(0x0C0BB2D8u, 1);  /* 0C0BB2D6 mov.l @(r0,Rm),Rn */
	r0 = R32(r14 + 0x14u); UPD(0x0C0BB2DAu, 1);  /* 0C0BB2D8 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x18u, r2); UPD(0x0C0BB2DCu, 1);  /* 0C0BB2DA mov.l Rm,@(disp,Rn) */
	r0 += r2;  /* 0C0BB2DC add Rm,Rn */
	r5 = R32(r0); UPD(0x0C0BB2E0u, 2);  /* 0C0BB2DE mov.l @Rm,Rn */
	W32(r8 + 0x1Cu, r5); UPD(0x0C0BB2E2u, 1);  /* 0C0BB2E0 mov.l Rm,@(disp,Rn) */
	r4 = R32(r0 + 0x4u); UPD(0x0C0BB2E4u, 1);  /* 0C0BB2E2 mov.l @(disp,Rm),Rn */
	r3 = 0xC2380C4u; UPD(0x0C0BB2E6u, 1);  /* 0C0BB2E4 mov.l @(disp,pc),Rn */
	r0 = 0x44u;  /* 0C0BB2E6 mov #imm,Rn */
	W32(r8 + 0x20u, r4); UPD(0x0C0BB2EAu, 2);  /* 0C0BB2E8 mov.l Rm,@(disp,Rn) */
	r7 = (u32)(s32)(s16)R16(r3); UPD(0x0C0BB2ECu, 1);  /* 0C0BB2EA mov.w @Rm,Rn */
	r8 += 0x4Eu;  /* 0C0BB2EC add #imm,Rn */
	W16(r8, r7); UPD(0x0C0BB2F0u, 2);  /* 0C0BB2EE mov.w Rm,@Rn */
	r8 += 0xFFFFFFB2u;  /* 0C0BB2F0 add #imm,Rn */
	W32(r8 + 0x28u, r9); UPD(0x0C0BB2F4u, 2);  /* 0C0BB2F2 mov.l Rm,@(disp,Rn) */
	r6 = R32(r14); UPD(0x0C0BB2F6u, 1);  /* 0C0BB2F4 mov.l @Rm,Rn */
	W32(r8 + 0x2Cu, r6); UPD(0x0C0BB2F8u, 1);  /* 0C0BB2F6 mov.l Rm,@(disp,Rn) */
	IF(0x0C0BB2F8u); r5 = R32(r0 + r14); UPD(0x0C0BB2FAu, 1);  /* 0C0BB2F8 mov.l @(r0,Rm),Rn */
	r0 = 0xC069B20u; UPD(0x0C0BB2FCu, 1);  /* 0C0BB2FA mov.l @(disp,pc),Rn */
	IF(0x0C0BB2FCu); { u32 t_ = r0; PR = 0x0C0BB300u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0BB300u); }  /* 0C0BB2FC jsr @Rn */
L_0C0BB300: BLKS(0x0C0BB300u);
	W32(r8 + 0x30u, r0); UPD(0x0C0BB302u, 1);  /* 0C0BB300 mov.l Rm,@(disp,Rn) */
	r0 = 0x44u;  /* 0C0BB302 mov #imm,Rn */
	IF(0x0C0BB304u); r5 = R32(r0 + r14); UPD(0x0C0BB306u, 2);  /* 0C0BB304 mov.l @(r0,Rm),Rn */
	r0 = 0xC069AF0u; UPD(0x0C0BB308u, 1);  /* 0C0BB306 mov.l @(disp,pc),Rn */
	IF(0x0C0BB308u); { u32 t_ = r0; PR = 0x0C0BB30Cu; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0BB30Cu); }  /* 0C0BB308 jsr @Rn */
L_0C0BB30C: BLKS(0x0C0BB30Cu);
	W32(r8 + 0x34u, r0); UPD(0x0C0BB30Eu, 1);  /* 0C0BB30C mov.l Rm,@(disp,Rn) */
	r2 = 0x0u;  /* 0C0BB30E mov #imm,Rn */
	r8 += 0x50u;  /* 0C0BB310 add #imm,Rn */
	W8(r8, r2); UPD(0x0C0BB314u, 3);  /* 0C0BB312 mov.b Rm,@Rn */
	r3 = r13;  /* 0C0BB314 mov Rm,Rn */
	r5 = 0x207C0C0u; UPD(0x0C0BB318u, 2);  /* 0C0BB316 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFB0u;  /* 0C0BB318 add #imm,Rn */
	W32(r8 + 0x3Cu, r5); UPD(0x0C0BB31Cu, 2);  /* 0C0BB31A mov.l Rm,@(disp,Rn) */
	r3 += 0xFFFFFFFFu;  /* 0C0BB31C add #imm,Rn */
	r0 = 0x808080u; UPD(0x0C0BB320u, 2);  /* 0C0BB31E mov.l @(disp,pc),Rn */
	r8 += 0x40u;  /* 0C0BB320 add #imm,Rn */
	W32(r8, r0); UPD(0x0C0BB324u, 2);  /* 0C0BB322 mov.l Rm,@Rn */
	r13 = (u32)(s32)(s16)r3;  /* 0C0BB324 exts.w Rm,Rn */
	r0 = 0xAu;  /* 0C0BB326 mov #imm,Rn */
	IF(0x0C0BB328u); r4 = (u32)(s32)(s16)R16(r0 + r14); UPD(0x0C0BB32Au, 3);  /* 0C0BB328 mov.w @(r0,Rm),Rn */
	r8 += 0xCu;  /* 0C0BB32A add #imm,Rn */
	r1 = R32(r14 + 0x4u); UPD(0x0C0BB32Eu, 2);  /* 0C0BB32C mov.l @(disp,Rm),Rn */
	IF(0x0C0BB32Eu); T = (s32)r13 >= 0;  /* 0C0BB32E cmp/pz Rn */
	W16(r8, r4); UPD(0x0C0BB332u, 2);  /* 0C0BB330 mov.w Rm,@Rn */
	{ u32 c_ = T; W32(r14 + 0x8u, r1); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0BB27Eu, 3); goto L_0C0BB27E; } UPD(0x0C0BB336u, 1); goto L_0C0BB336; }  /* 0C0BB332 bt/s */
L_0C0BB336: BLKS(0x0C0BB336u);
	r9 = 0xC0C2110u; UPD(0x0C0BB338u, 1);  /* 0C0BB336 mov.l @(disp,pc),Rn */
	IF(0x0C0BB338u); { u32 t_ = r9; PR = 0x0C0BB33Cu; r4 = 0x79u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2110, 0x0C0C2110u, 0x0C0BB33Cu); }  /* 0C0BB338 jsr @Rn */
L_0C0BB33C: BLKS(0x0C0BB33Cu);
	{ r0 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C0BB1FCu, 3); goto L_0C0BB1FC; }  /* 0C0BB33C bra */
L_0C0BB340: BLKS(0x0C0BB340u);
	r8 = 0xC062780u; UPD(0x0C0BB342u, 1);  /* 0C0BB340 mov.l @(disp,pc),Rn */
	IF(0x0C0BB342u); { u32 t_ = r8; PR = 0x0C0BB346u; r4 = 0x8u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0BB346u); }  /* 0C0BB342 jsr @Rn */
L_0C0BB346: BLKS(0x0C0BB346u);
	{ r11 = r0; /* slot mov Rm,Rn */ UPD(0x0C0BB238u, 3); goto L_0C0BB238; }  /* 0C0BB346 bra */
}

/* FUN_0c0bb3a0 */
void blk_f_0C0BB3A0(sh3_t *c)
{
	LOCALS;
L_0C0BB3A0: BLKS(0x0C0BB3A0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0BB3A2u, 1);  /* 0C0BB3A0 mov.l Rm,@-Rn */
	r2 = 0x40u;  /* 0C0BB3A2 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0BB3A6u, 2);  /* 0C0BB3A4 mov.l Rm,@-Rn */
	r0 = 0x0u;  /* 0C0BB3A6 mov #imm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0BB3AAu, 2);  /* 0C0BB3A8 mov.l Rm,@-Rn */
	r1 = (u32)(s32)(s16)r7;  /* 0C0BB3AA exts.w Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0BB3AEu, 2);  /* 0C0BB3AC mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0BB3B0u, 1);  /* 0C0BB3AE mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0BB3B2u, 1);  /* 0C0BB3B0 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0BB3B4u, 1);  /* 0C0BB3B2 mov.l Rm,@-Rn */
	IF(0x0C0BB3B4u); r15 -= 4; W32(r15, PR); UPD(0x0C0BB3B6u, 1);  /* 0C0BB3B4 sts.l pr,@-Rn */
	r15 += 0xFFFFFFCCu;  /* 0C0BB3B6 add #imm,Rn */
	r14 = r15;  /* 0C0BB3B8 mov Rm,Rn */
	r2 += r14;  /* 0C0BB3BA add Rm,Rn */
	r13 = R32(r2 + 0x18u); UPD(0x0C0BB3BEu, 4);  /* 0C0BB3BC mov.l @(disp,Rm),Rn */
	r3 = 0xC2B07FCu; UPD(0x0C0BB3C0u, 1);  /* 0C0BB3BE mov.l @(disp,pc),Rn */
	r2 = R32(r3); UPD(0x0C0BB3C2u, 1);  /* 0C0BB3C0 mov.l @Rm,Rn */
	W32(r14 + 0x18u, r0); UPD(0x0C0BB3C4u, 1);  /* 0C0BB3C2 mov.l Rm,@(disp,Rn) */
	T = (r2 & r2) == 0;  /* 0C0BB3C4 tst Rm,Rn */
	W32(r14, r4); UPD(0x0C0BB3C8u, 2);  /* 0C0BB3C6 mov.l Rm,@Rn */
	W32(r14 + 0x4u, r5); UPD(0x0C0BB3CAu, 1);  /* 0C0BB3C8 mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x8u, r6); UPD(0x0C0BB3CCu, 1);  /* 0C0BB3CA mov.l Rm,@(disp,Rn) */
	{ u32 c_ = !T; W32(r14 + 0xCu, r1); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0BB3FEu, 3); goto L_0C0BB3FE; } UPD(0x0C0BB3D0u, 1); goto L_0C0BB3D0; }  /* 0C0BB3CC bf/s */
L_0C0BB3D0: BLKS(0x0C0BB3D0u);
	r2 = 0xFF580000u; UPD(0x0C0BB3D2u, 1);  /* 0C0BB3D0 mov.l @(disp,pc),Rn */
	r0 = R32(r14 + 0x4u); UPD(0x0C0BB3D4u, 1);  /* 0C0BB3D2 mov.l @(disp,Rm),Rn */
	r2 += r0;  /* 0C0BB3D4 add Rm,Rn */
	IF(0x0C0BB3D6u); T = (s32)r2 >= 0;  /* 0C0BB3D6 cmp/pz Rn */
	if (T) { UPD(0x0C0BB3DCu, 5); goto L_0C0BB3DC; }  /* 0C0BB3D8 bt */
L_0C0BB3DA: BLKS(0x0C0BB3DAu);
	r2 = 0u - r2;  /* 0C0BB3DA neg Rm,Rn */
	UPD(0x0C0BB3DCu, 1);
L_0C0BB3DC: BLKS(0x0C0BB3DCu);
	r4 = 0x980000u; UPD(0x0C0BB3DEu, 1);  /* 0C0BB3DC mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r4;  /* 0C0BB3DE cmp/gt Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BB3FEu, 4); goto L_0C0BB3FE; } goto L_0C0BB3E4; }  /* 0C0BB3E0 bt/s */
L_0C0BB3E4: BLKS(0x0C0BB3E4u);
	r7 = 0xC3C4048u; UPD(0x0C0BB3E6u, 2);  /* 0C0BB3E4 mov.l @(disp,pc),Rn */
	r2 = R32(r14 + 0x8u); UPD(0x0C0BB3E8u, 1);  /* 0C0BB3E6 mov.l @(disp,Rm),Rn */
	r6 = R32(r7); UPD(0x0C0BB3EAu, 1);  /* 0C0BB3E8 mov.l @Rm,Rn */
	r5 = 0xFF880000u; UPD(0x0C0BB3ECu, 1);  /* 0C0BB3EA mov.l @(disp,pc),Rn */
	r2 -= r6;  /* 0C0BB3EC sub Rm,Rn */
	r2 += r5;  /* 0C0BB3EE add Rm,Rn */
	IF(0x0C0BB3F0u); T = (s32)r2 >= 0;  /* 0C0BB3F0 cmp/pz Rn */
	if (T) { UPD(0x0C0BB3F6u, 6); goto L_0C0BB3F6; }  /* 0C0BB3F2 bt */
L_0C0BB3F4: BLKS(0x0C0BB3F4u);
	r2 = 0u - r2;  /* 0C0BB3F4 neg Rm,Rn */
	UPD(0x0C0BB3F6u, 1);
L_0C0BB3F6: BLKS(0x0C0BB3F6u);
	r8 = 0x700000u; UPD(0x0C0BB3F8u, 1);  /* 0C0BB3F6 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r8;  /* 0C0BB3F8 cmp/gt Rm,Rn */
	IF(0x0C0BB3FAu); r0 = T;  /* 0C0BB3FA movt Rn */
	r0 ^= 0x1u;  /* 0C0BB3FC xor #imm,r0 */
	UPD(0x0C0BB3FEu, 3);
L_0C0BB3FE: BLKS(0x0C0BB3FEu);
	r9 = (u32)(s32)(s8)r0;  /* 0C0BB3FE exts.b Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C0BB400 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BB420u, 5); goto L_0C0BB420; } UPD(0x0C0BB406u, 1); goto L_0C0BB406; }  /* 0C0BB402 bf/s */
L_0C0BB406: BLKS(0x0C0BB406u);
	r14 += 0x34u;  /* 0C0BB406 add #imm,Rn */
	r15 = r14;  /* 0C0BB408 mov Rm,Rn */
	IF(0x0C0BB40Au); PR = R32(r15); r15 += 4; UPD(0x0C0BB40Cu, 3);  /* 0C0BB40A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0BB40Eu, 1);  /* 0C0BB40C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0BB410u, 1);  /* 0C0BB40E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0BB412u, 1);  /* 0C0BB410 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0BB414u, 1);  /* 0C0BB412 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0BB416u, 1);  /* 0C0BB414 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0BB418u, 1);  /* 0C0BB416 mov.l @Rm+,Rn */
	IF(0x0C0BB418u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0BB418 rts */
L_0C0BB420: BLKS(0x0C0BB420u);
	{ u32 v_ = (u32)(s32)(s16)R16(r13); r13 += 2; r12 = v_; } UPD(0x0C0BB422u, 1);  /* 0C0BB420 mov.w @Rm+,Rn */
	r11 = 0x3u;  /* 0C0BB422 mov #imm,Rn */
	r10 = 0xC0717A0u; UPD(0x0C0BB426u, 2);  /* 0C0BB424 mov.l @(disp,pc),Rn */
	MACL = (u32)((s32)(s16)r12 * (s32)(s16)r11);  /* 0C0BB426 muls.w Rm,Rn */
	W32(r14 + 0x10u, r12); UPD(0x0C0BB42Au, 3);  /* 0C0BB428 mov.l Rm,@(disp,Rn) */
	IF(0x0C0BB42Au); { u32 t_ = r10; PR = 0x0C0BB42Eu; IF(0x0C0BB42Cu); r4 = MACL; /* slot sts macl,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0717A0, 0x0C0717A0u, 0x0C0BB42Eu); }  /* 0C0BB42A jsr @Rn */
L_0C0BB42E: BLKS(0x0C0BB42Eu);
	T = (r0 & r0) == 0;  /* 0C0BB42E tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BB406u, 4); goto L_0C0BB406; } goto L_0C0BB434; }  /* 0C0BB430 bt/s */
L_0C0BB434: BLKS(0x0C0BB434u);
	r1 = R32(r14); UPD(0x0C0BB436u, 2);  /* 0C0BB434 mov.l @Rm,Rn */
	r2 = 0x7u;  /* 0C0BB436 mov #imm,Rn */
	T = (s32)r1 > (s32)r2;  /* 0C0BB438 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0BB440u, 5); goto L_0C0BB440; }  /* 0C0BB43A bf */
L_0C0BB43C: BLKS(0x0C0BB43Cu);
	{ IF(0x0C0BB43Eu); ; /* slot nop */ UPD(0x0C0BB580u, 3); goto L_0C0BB580; }  /* 0C0BB43C bra */
L_0C0BB440: BLKS(0x0C0BB440u);
	r8 = 0xC062780u; UPD(0x0C0BB442u, 1);  /* 0C0BB440 mov.l @(disp,pc),Rn */
L_0C0BB442: BLKS(0x0C0BB442u);
	r5 = 0xC28EDFCu; UPD(0x0C0BB444u, 1);  /* 0C0BB442 mov.l @(disp,pc),Rn */
	r4 = 0x4u;  /* 0C0BB444 mov #imm,Rn */
	IF(0x0C0BB446u); { u32 t_ = r8; PR = 0x0C0BB44Au; W32(r14 + 0x1Cu, r5); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0BB44Au); }  /* 0C0BB446 jsr @Rn */
L_0C0BB44A: BLKS(0x0C0BB44Au);
	r4 = r0;  /* 0C0BB44A mov Rm,Rn */
	r0 = 0xC234BECu; UPD(0x0C0BB44Eu, 2);  /* 0C0BB44C mov.l @(disp,pc),Rn */
	r4 += 0x18u;  /* 0C0BB44E add #imm,Rn */
	r3 = R32(r0); UPD(0x0C0BB452u, 2);  /* 0C0BB450 mov.l @Rm,Rn */
	W32(r14 + 0x20u, r4); UPD(0x0C0BB454u, 1);  /* 0C0BB452 mov.l Rm,@(disp,Rn) */
	T = (r3 & r3) == 0;  /* 0C0BB454 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BB406u, 4); goto L_0C0BB406; } goto L_0C0BB45A; }  /* 0C0BB456 bf/s */
L_0C0BB45A: BLKS(0x0C0BB45Au);
	r7 = 0x0u;  /* 0C0BB45A mov #imm,Rn */
	r6 = R32(r14 + 0x10u); UPD(0x0C0BB45Eu, 3);  /* 0C0BB45C mov.l @(disp,Rm),Rn */
	T = (s32)r7 >= (s32)r6;  /* 0C0BB45E cmp/ge Rm,Rn */
	{ u32 c_ = !T; W32(r14 + 0x14u, r7); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0BB468u, 4); goto L_0C0BB468; } UPD(0x0C0BB464u, 1); goto L_0C0BB464; }  /* 0C0BB460 bf/s */
L_0C0BB464: BLKS(0x0C0BB464u);
	{ IF(0x0C0BB466u); ; /* slot nop */ UPD(0x0C0BB56Eu, 3); goto L_0C0BB56E; }  /* 0C0BB464 bra */
L_0C0BB468: BLKS(0x0C0BB468u);
	r8 = R32(r14 + 0x20u); UPD(0x0C0BB46Au, 1);  /* 0C0BB468 mov.l @(disp,Rm),Rn */
	r9 = 0x4u;  /* 0C0BB46A mov #imm,Rn */
	r11 = R32(r14); UPD(0x0C0BB46Eu, 2);  /* 0C0BB46C mov.l @Rm,Rn */
	IF(0x0C0BB46Eu); ARG0(0x489Du); { s32 s_ = (s32)r9; if (s_ >= 0) r8 <<= (s_ & 31); else if ((s_ & 31) == 0) r8 = 0; else r8 >>= ((~s_ & 31) + 1); }  /* 0C0BB46E shld Rm,Rn */
	r10 = R32(r14); UPD(0x0C0BB472u, 2);  /* 0C0BB470 mov.l @Rm,Rn */
	r11 += r11;  /* 0C0BB472 add Rm,Rn */
	IF(0x0C0BB474u); r10 <<= 2;  /* 0C0BB474 shll2 Rn */
	W32(r14 + 0x2Cu, r11); UPD(0x0C0BB478u, 3);  /* 0C0BB476 mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x30u, r10); UPD(0x0C0BB47Au, 1);  /* 0C0BB478 mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x28u, r8); UPD(0x0C0BB47Cu, 1);  /* 0C0BB47A mov.l Rm,@(disp,Rn) */
L_0C0BB47C: BLKS(0x0C0BB47Cu);
	{ u32 v_ = (u32)(s32)(s16)R16(r13); r13 += 2; r12 = v_; } UPD(0x0C0BB47Eu, 1);  /* 0C0BB47C mov.w @Rm+,Rn */
	r3 = 0x3Fu;  /* 0C0BB47E mov #imm,Rn */
	r4 = R32(r14 + 0xCu); UPD(0x0C0BB482u, 2);  /* 0C0BB480 mov.l @(disp,Rm),Rn */
	r2 = 0x3u;  /* 0C0BB482 mov #imm,Rn */
	r12 += r4;  /* 0C0BB484 add Rm,Rn */
	r10 = (u32)(s32)(s16)r12;  /* 0C0BB486 exts.w Rm,Rn */
	r10 += 0x4u;  /* 0C0BB488 add #imm,Rn */
	r11 = r10;  /* 0C0BB48A mov Rm,Rn */
	IF(0x0C0BB48Cu); T = r11 & 1; r11 = (u32)((s32)r11 >> 1);  /* 0C0BB48C shar Rn */
	IF(0x0C0BB48Eu); T = r11 & 1; r11 = (u32)((s32)r11 >> 1);  /* 0C0BB48E shar Rn */
	IF(0x0C0BB490u); T = r11 & 1; r11 = (u32)((s32)r11 >> 1);  /* 0C0BB490 shar Rn */
	r11 &= r3;  /* 0C0BB492 and Rm,Rn */
	r1 = r11;  /* 0C0BB494 mov Rm,Rn */
	IF(0x0C0BB496u); ARG0(0x412Du); { s32 s_ = (s32)r2; if (s_ >= 0) r1 <<= (s_ & 31); else if ((s_ & 31) == 0) r1 = 0; else r1 >>= ((~s_ & 31) + 1); }  /* 0C0BB496 shld Rm,Rn */
	W32(r14 + 0x24u, r1); UPD(0x0C0BB49Au, 12);  /* 0C0BB498 mov.l Rm,@(disp,Rn) */
	r12 = 0x2u;  /* 0C0BB49A mov #imm,Rn */
	r10 += 0xFFFFFFFCu;  /* 0C0BB49C add #imm,Rn */
	UPD(0x0C0BB49Eu, 2);
L_0C0BB49E: BLKS(0x0C0BB49Eu);
	r1 = R32(r14 + 0x1Cu); UPD(0x0C0BB4A0u, 1);  /* 0C0BB49E mov.l @(disp,Rm),Rn */
	r8 = 0x54u;  /* 0C0BB4A0 mov #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r1); r1 += 2; r9 = v_; } UPD(0x0C0BB4A4u, 2);  /* 0C0BB4A2 mov.w @Rm+,Rn */
	IF(0x0C0BB4A4u); MACL = r9 * r8;  /* 0C0BB4A4 mul.l Rm,Rn */
	r0 = 0xC297B40u; UPD(0x0C0BB4A8u, 3);  /* 0C0BB4A6 mov.l @(disp,pc),Rn */
	IF(0x0C0BB4A8u); r8 = MACL;  /* 0C0BB4A8 sts macl,Rn */
	r8 += r0;  /* 0C0BB4AA add Rm,Rn */
	r0 = r12;  /* 0C0BB4AC mov Rm,Rn */
	r5 = 0xC1F7F08u; UPD(0x0C0BB4B0u, 4);  /* 0C0BB4AE mov.l @(disp,pc),Rn */
	IF(0x0C0BB4B0u); r0 <<= 2;  /* 0C0BB4B0 shll2 Rn */
	IF(0x0C0BB4B2u); r3 = R32(r0 + r5); UPD(0x0C0BB4B4u, 2);  /* 0C0BB4B2 mov.l @(r0,Rm),Rn */
	r2 = 0xC297490u; UPD(0x0C0BB4B6u, 1);  /* 0C0BB4B4 mov.l @(disp,pc),Rn */
	W32(r8, r3); UPD(0x0C0BB4B8u, 1);  /* 0C0BB4B6 mov.l Rm,@Rn */
	r7 = (u32)(s32)(s8)R8(r2); UPD(0x0C0BB4BAu, 1);  /* 0C0BB4B8 mov.b @Rm,Rn */
	W32(r14 + 0x1Cu, r1); UPD(0x0C0BB4BCu, 1);  /* 0C0BB4BA mov.l Rm,@(disp,Rn) */
	r6 = r7 & 0xFF;  /* 0C0BB4BC extu.b Rm,Rn */
	r4 = 0xC1EADCCu; UPD(0x0C0BB4C0u, 2);  /* 0C0BB4BE mov.l @(disp,pc),Rn */
	IF(0x0C0BB4C0u); r6 <<= 2;  /* 0C0BB4C0 shll2 Rn */
	r1 = R32(r14); UPD(0x0C0BB4C4u, 2);  /* 0C0BB4C2 mov.l @Rm,Rn */
	r6 += r4;  /* 0C0BB4C4 add Rm,Rn */
	r5 = R32(r14 + 0x2Cu); UPD(0x0C0BB4C8u, 2);  /* 0C0BB4C6 mov.l @(disp,Rm),Rn */
	r4 = R32(r6 + 0x4u); UPD(0x0C0BB4CAu, 1);  /* 0C0BB4C8 mov.l @(disp,Rm),Rn */
	r5 += r1;  /* 0C0BB4CA add Rm,Rn */
	r0 = R32(r14 + 0x20u); UPD(0x0C0BB4CEu, 2);  /* 0C0BB4CC mov.l @(disp,Rm),Rn */
	r5 += r12;  /* 0C0BB4CE add Rm,Rn */
	W32(r8 + 0x4u, r4); UPD(0x0C0BB4D2u, 2);  /* 0C0BB4D0 mov.l Rm,@(disp,Rn) */
	r6 = 0x3u;  /* 0C0BB4D2 mov #imm,Rn */
	W32(r8 + 0x8u, r0); UPD(0x0C0BB4D6u, 2);  /* 0C0BB4D4 mov.l Rm,@(disp,Rn) */
	IF(0x0C0BB4D6u); ARG0(0x446Du); { s32 s_ = (s32)r6; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = 0; else r4 >>= ((~s_ & 31) + 1); }  /* 0C0BB4D6 shld Rm,Rn */
	W32(r8 + 0xCu, r5); UPD(0x0C0BB4DAu, 2);  /* 0C0BB4D8 mov.l Rm,@(disp,Rn) */
	r0 = 0x54u;  /* 0C0BB4DA mov #imm,Rn */
	r8 += 0x44u;  /* 0C0BB4DC add #imm,Rn */
	W16(r8, r10); UPD(0x0C0BB4E0u, 3);  /* 0C0BB4DE mov.w Rm,@Rn */
	IF(0x0C0BB4E0u); r3 = R32(r0 + r14); UPD(0x0C0BB4E2u, 1);  /* 0C0BB4E0 mov.l @(r0,Rm),Rn */
	r8 += 0x4u;  /* 0C0BB4E2 add #imm,Rn */
	W32(r8, r3); UPD(0x0C0BB4E6u, 2);  /* 0C0BB4E4 mov.l Rm,@Rn */
	r0 = R32(r14 + 0x30u); UPD(0x0C0BB4E8u, 1);  /* 0C0BB4E6 mov.l @(disp,Rm),Rn */
	r8 += 0xFFFFFFB8u;  /* 0C0BB4E8 add #imm,Rn */
	r2 = 0xC1F7F14u; UPD(0x0C0BB4ECu, 2);  /* 0C0BB4EA mov.l @(disp,pc),Rn */
	IF(0x0C0BB4ECu); r7 = R32(r0 + r2); UPD(0x0C0BB4EEu, 1);  /* 0C0BB4EC mov.l @(r0,Rm),Rn */
	r5 = 0xC1F7E08u; UPD(0x0C0BB4F0u, 1);  /* 0C0BB4EE mov.l @(disp,pc),Rn */
	W32(r8 + 0x38u, r7); UPD(0x0C0BB4F2u, 1);  /* 0C0BB4F0 mov.l Rm,@(disp,Rn) */
	r4 += r5;  /* 0C0BB4F2 add Rm,Rn */
	W32(r8 + 0x10u, r11); UPD(0x0C0BB4F6u, 2);  /* 0C0BB4F4 mov.l Rm,@(disp,Rn) */
	r0 = R32(r4 + 0x4u); UPD(0x0C0BB4F8u, 1);  /* 0C0BB4F6 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x24u, r0); UPD(0x0C0BB4FAu, 1);  /* 0C0BB4F8 mov.l Rm,@(disp,Rn) */
	r3 = R32(r4); UPD(0x0C0BB4FCu, 1);  /* 0C0BB4FA mov.l @Rm,Rn */
	r0 = R32(r14 + 0x28u); UPD(0x0C0BB4FEu, 1);  /* 0C0BB4FC mov.l @(disp,Rm),Rn */
	W32(r8 + 0x14u, r3); UPD(0x0C0BB500u, 1);  /* 0C0BB4FE mov.l Rm,@(disp,Rn) */
	IF(0x0C0BB500u); r2 = R32(r0 + r3); UPD(0x0C0BB502u, 1);  /* 0C0BB500 mov.l @(r0,Rm),Rn */
	r6 = R32(r14 + 0x24u); UPD(0x0C0BB504u, 1);  /* 0C0BB502 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x18u, r2); UPD(0x0C0BB506u, 1);  /* 0C0BB504 mov.l Rm,@(disp,Rn) */
	r6 += r2;  /* 0C0BB506 add Rm,Rn */
	r7 = R32(r6); UPD(0x0C0BB50Au, 2);  /* 0C0BB508 mov.l @Rm,Rn */
	W32(r8 + 0x1Cu, r7); UPD(0x0C0BB50Cu, 1);  /* 0C0BB50A mov.l Rm,@(disp,Rn) */
	r5 = R32(r6 + 0x4u); UPD(0x0C0BB50Eu, 1);  /* 0C0BB50C mov.l @(disp,Rm),Rn */
	r0 = 0xC2380C4u; UPD(0x0C0BB510u, 1);  /* 0C0BB50E mov.l @(disp,pc),Rn */
	W32(r8 + 0x20u, r5); UPD(0x0C0BB512u, 1);  /* 0C0BB510 mov.l Rm,@(disp,Rn) */
	r4 = (u32)(s32)(s16)R16(r0); UPD(0x0C0BB514u, 1);  /* 0C0BB512 mov.w @Rm,Rn */
	r8 += 0x4Eu;  /* 0C0BB514 add #imm,Rn */
	W16(r8, r4); UPD(0x0C0BB518u, 2);  /* 0C0BB516 mov.w Rm,@Rn */
	r0 = 0x54u;  /* 0C0BB518 mov #imm,Rn */
	r3 = R32(r14 + 0x4u); UPD(0x0C0BB51Cu, 2);  /* 0C0BB51A mov.l @(disp,Rm),Rn */
	r8 += 0xFFFFFFB2u; UPD(0x0C0BB51Eu, 1);  /* 0C0BB51C add #imm,Rn */
	r1 = R32(r14 + 0x8u); UPD(0x0C0BB520u, 1);  /* 0C0BB51E mov.l @(disp,Rm),Rn */
	W32(r8 + 0x28u, r3); UPD(0x0C0BB522u, 1);  /* 0C0BB520 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x2Cu, r1); UPD(0x0C0BB524u, 1);  /* 0C0BB522 mov.l Rm,@(disp,Rn) */
	IF(0x0C0BB524u); r5 = R32(r0 + r14); UPD(0x0C0BB526u, 1);  /* 0C0BB524 mov.l @(r0,Rm),Rn */
	r0 = 0xC069B20u; UPD(0x0C0BB528u, 1);  /* 0C0BB526 mov.l @(disp,pc),Rn */
	IF(0x0C0BB528u); { u32 t_ = r0; PR = 0x0C0BB52Cu; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0BB52Cu); }  /* 0C0BB528 jsr @Rn */
L_0C0BB52C: BLKS(0x0C0BB52Cu);
	W32(r8 + 0x30u, r0); UPD(0x0C0BB52Eu, 1);  /* 0C0BB52C mov.l Rm,@(disp,Rn) */
	r0 = 0x54u;  /* 0C0BB52E mov #imm,Rn */
	IF(0x0C0BB530u); r5 = R32(r0 + r14); UPD(0x0C0BB532u, 2);  /* 0C0BB530 mov.l @(r0,Rm),Rn */
	r0 = 0xC069AF0u; UPD(0x0C0BB534u, 1);  /* 0C0BB532 mov.l @(disp,pc),Rn */
	IF(0x0C0BB534u); { u32 t_ = r0; PR = 0x0C0BB538u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0BB538u); }  /* 0C0BB534 jsr @Rn */
L_0C0BB538: BLKS(0x0C0BB538u);
	W32(r8 + 0x34u, r0); UPD(0x0C0BB53Au, 1);  /* 0C0BB538 mov.l Rm,@(disp,Rn) */
	r2 = 0x0u;  /* 0C0BB53A mov #imm,Rn */
	r8 += 0x50u;  /* 0C0BB53C add #imm,Rn */
	W8(r8, r2); UPD(0x0C0BB540u, 3);  /* 0C0BB53E mov.b Rm,@Rn */
	r0 = 0x1Au;  /* 0C0BB540 mov #imm,Rn */
	r7 = 0x207C0C0u; UPD(0x0C0BB544u, 2);  /* 0C0BB542 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFB0u;  /* 0C0BB544 add #imm,Rn */
	W32(r8 + 0x3Cu, r7); UPD(0x0C0BB548u, 2);  /* 0C0BB546 mov.l Rm,@(disp,Rn) */
	r6 = 0x808080u; UPD(0x0C0BB54Au, 1);  /* 0C0BB548 mov.l @(disp,pc),Rn */
	r8 += 0x40u;  /* 0C0BB54A add #imm,Rn */
	IF(0x0C0BB54Cu); r5 = (u32)(s32)(s16)R16(r0 + r14); UPD(0x0C0BB54Eu, 2);  /* 0C0BB54C mov.w @(r0,Rm),Rn */
	W32(r8, r6); UPD(0x0C0BB550u, 1);  /* 0C0BB54E mov.l Rm,@Rn */
	r0 = r12;  /* 0C0BB550 mov Rm,Rn */
	r8 += 0xCu;  /* 0C0BB552 add #imm,Rn */
	r0 += 0xFFFFFFFFu;  /* 0C0BB554 add #imm,Rn */
	r12 = (u32)(s32)(s16)r0;  /* 0C0BB556 exts.w Rm,Rn */
	W16(r8, r5); UPD(0x0C0BB55Au, 5);  /* 0C0BB558 mov.w Rm,@Rn */
	IF(0x0C0BB55Au); T = (s32)r12 >= 0;  /* 0C0BB55A cmp/pz Rn */
	{ u32 c_ = T; W32(r14 + 0x18u, r9); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0BB49Eu, 4); goto L_0C0BB49E; } UPD(0x0C0BB560u, 1); goto L_0C0BB560; }  /* 0C0BB55C bt/s */
L_0C0BB560: BLKS(0x0C0BB560u);
	r11 = R32(r14 + 0x14u); UPD(0x0C0BB562u, 1);  /* 0C0BB560 mov.l @(disp,Rm),Rn */
	r11 += 0x1u;  /* 0C0BB562 add #imm,Rn */
	r10 = (u32)(s32)(s16)r11;  /* 0C0BB564 exts.w Rm,Rn */
	r9 = R32(r14 + 0x10u); UPD(0x0C0BB568u, 3);  /* 0C0BB566 mov.l @(disp,Rm),Rn */
	T = (s32)r10 >= (s32)r9;  /* 0C0BB568 cmp/ge Rm,Rn */
	{ u32 c_ = !T; W32(r14 + 0x14u, r10); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0BB47Cu, 4); goto L_0C0BB47C; } UPD(0x0C0BB56Eu, 1); goto L_0C0BB56E; }  /* 0C0BB56A bf/s */
L_0C0BB56E: BLKS(0x0C0BB56Eu);
	r13 = 0xC0C2110u; UPD(0x0C0BB570u, 1);  /* 0C0BB56E mov.l @(disp,pc),Rn */
	IF(0x0C0BB570u); { u32 t_ = r13; PR = 0x0C0BB574u; r4 = 0x79u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2110, 0x0C0C2110u, 0x0C0BB574u); }  /* 0C0BB570 jsr @Rn */
L_0C0BB574: BLKS(0x0C0BB574u);
	{ r0 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C0BB406u, 3); goto L_0C0BB406; }  /* 0C0BB574 bra */
L_0C0BB580: BLKS(0x0C0BB580u);
	r8 = 0xC062780u; UPD(0x0C0BB582u, 1);  /* 0C0BB580 mov.l @(disp,pc),Rn */
	IF(0x0C0BB582u); { u32 t_ = r8; PR = 0x0C0BB586u; r4 = 0x8u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0BB586u); }  /* 0C0BB582 jsr @Rn */
L_0C0BB586: BLKS(0x0C0BB586u);
	{ W32(r14, r0); /* slot mov.l Rm,@Rn */ UPD(0x0C0BB442u, 3); goto L_0C0BB442; }  /* 0C0BB586 bra */
}

/* FUN_0c0bb5f0 */
void blk_f_0C0BB5F0(sh3_t *c)
{
	LOCALS;
L_0C0BB5F0: BLKS(0x0C0BB5F0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0BB5F2u, 1);  /* 0C0BB5F0 mov.l Rm,@-Rn */
	r0 = 0x0u;  /* 0C0BB5F2 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0BB5F6u, 2);  /* 0C0BB5F4 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0BB5F8u, 1);  /* 0C0BB5F6 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0BB5FAu, 1);  /* 0C0BB5F8 mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s16)r7;  /* 0C0BB5FA exts.w Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0BB5FEu, 2);  /* 0C0BB5FC mov.l Rm,@-Rn */
	r11 = r4;  /* 0C0BB5FE mov Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0BB602u, 2);  /* 0C0BB600 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0BB604u, 1);  /* 0C0BB602 mov.l Rm,@-Rn */
	IF(0x0C0BB604u); r15 -= 4; W32(r15, PR); UPD(0x0C0BB606u, 1);  /* 0C0BB604 sts.l pr,@-Rn */
	r3 = 0xC2B07FCu; UPD(0x0C0BB608u, 1);  /* 0C0BB606 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFE4u;  /* 0C0BB608 add #imm,Rn */
	r14 = r15;  /* 0C0BB60A mov Rm,Rn */
	r2 = R32(r3); UPD(0x0C0BB60Eu, 3);  /* 0C0BB60C mov.l @Rm,Rn */
	W32(r14 + 0x8u, r0); UPD(0x0C0BB610u, 1);  /* 0C0BB60E mov.l Rm,@(disp,Rn) */
	T = (r2 & r2) == 0;  /* 0C0BB610 tst Rm,Rn */
	W32(r14, r5); UPD(0x0C0BB614u, 2);  /* 0C0BB612 mov.l Rm,@Rn */
	{ u32 c_ = !T; W32(r14 + 0x4u, r6); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0BB646u, 3); goto L_0C0BB646; } UPD(0x0C0BB618u, 1); goto L_0C0BB618; }  /* 0C0BB614 bf/s */
L_0C0BB618: BLKS(0x0C0BB618u);
	r2 = 0xFF580000u; UPD(0x0C0BB61Au, 1);  /* 0C0BB618 mov.l @(disp,pc),Rn */
	r0 = R32(r14); UPD(0x0C0BB61Cu, 1);  /* 0C0BB61A mov.l @Rm,Rn */
	r2 += r0;  /* 0C0BB61C add Rm,Rn */
	IF(0x0C0BB61Eu); T = (s32)r2 >= 0;  /* 0C0BB61E cmp/pz Rn */
	if (T) { UPD(0x0C0BB624u, 5); goto L_0C0BB624; }  /* 0C0BB620 bt */
L_0C0BB622: BLKS(0x0C0BB622u);
	r2 = 0u - r2;  /* 0C0BB622 neg Rm,Rn */
	UPD(0x0C0BB624u, 1);
L_0C0BB624: BLKS(0x0C0BB624u);
	r4 = 0x980000u; UPD(0x0C0BB626u, 1);  /* 0C0BB624 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r4;  /* 0C0BB626 cmp/gt Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BB646u, 4); goto L_0C0BB646; } goto L_0C0BB62C; }  /* 0C0BB628 bt/s */
L_0C0BB62C: BLKS(0x0C0BB62Cu);
	r2 = 0xC3C4048u; UPD(0x0C0BB62Eu, 2);  /* 0C0BB62C mov.l @(disp,pc),Rn */
	r6 = R32(r2); UPD(0x0C0BB630u, 1);  /* 0C0BB62E mov.l @Rm,Rn */
	r2 = R32(r14 + 0x4u); UPD(0x0C0BB632u, 1);  /* 0C0BB630 mov.l @(disp,Rm),Rn */
	r5 = 0xFF880000u; UPD(0x0C0BB634u, 1);  /* 0C0BB632 mov.l @(disp,pc),Rn */
	r2 -= r6;  /* 0C0BB634 sub Rm,Rn */
	r2 += r5;  /* 0C0BB636 add Rm,Rn */
	IF(0x0C0BB638u); T = (s32)r2 >= 0;  /* 0C0BB638 cmp/pz Rn */
	if (T) { UPD(0x0C0BB63Eu, 6); goto L_0C0BB63E; }  /* 0C0BB63A bt */
L_0C0BB63C: BLKS(0x0C0BB63Cu);
	r2 = 0u - r2;  /* 0C0BB63C neg Rm,Rn */
	UPD(0x0C0BB63Eu, 1);
L_0C0BB63E: BLKS(0x0C0BB63Eu);
	r7 = 0x700000u; UPD(0x0C0BB640u, 1);  /* 0C0BB63E mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r7;  /* 0C0BB640 cmp/gt Rm,Rn */
	IF(0x0C0BB642u); r0 = T;  /* 0C0BB642 movt Rn */
	r0 ^= 0x1u;  /* 0C0BB644 xor #imm,r0 */
	UPD(0x0C0BB646u, 3);
L_0C0BB646: BLKS(0x0C0BB646u);
	r8 = (u32)(s32)(s8)r0;  /* 0C0BB646 exts.b Rm,Rn */
	T = (r8 & r8) == 0;  /* 0C0BB648 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BB670u, 5); goto L_0C0BB670; } UPD(0x0C0BB64Eu, 1); goto L_0C0BB64E; }  /* 0C0BB64A bf/s */
L_0C0BB64E: BLKS(0x0C0BB64Eu);
	r14 += 0x1Cu;  /* 0C0BB64E add #imm,Rn */
	r15 = r14;  /* 0C0BB650 mov Rm,Rn */
	IF(0x0C0BB652u); PR = R32(r15); r15 += 4; UPD(0x0C0BB654u, 3);  /* 0C0BB652 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0BB656u, 1);  /* 0C0BB654 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0BB658u, 1);  /* 0C0BB656 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0BB65Au, 1);  /* 0C0BB658 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0BB65Cu, 1);  /* 0C0BB65A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0BB65Eu, 1);  /* 0C0BB65C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0BB660u, 1);  /* 0C0BB65E mov.l @Rm+,Rn */
	IF(0x0C0BB660u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0BB660 rts */
L_0C0BB670: BLKS(0x0C0BB670u);
	r9 = 0xC0717A0u; UPD(0x0C0BB672u, 1);  /* 0C0BB670 mov.l @(disp,pc),Rn */
	IF(0x0C0BB672u); { u32 t_ = r9; PR = 0x0C0BB676u; r4 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0717A0, 0x0C0717A0u, 0x0C0BB676u); }  /* 0C0BB672 jsr @Rn */
L_0C0BB676: BLKS(0x0C0BB676u);
	T = (r0 & r0) == 0;  /* 0C0BB676 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BB64Eu, 4); goto L_0C0BB64E; } goto L_0C0BB67C; }  /* 0C0BB678 bt/s */
L_0C0BB67C: BLKS(0x0C0BB67Cu);
	r12 = 0x1u;  /* 0C0BB67C mov #imm,Rn */
	T = (s32)r11 > (s32)r12;  /* 0C0BB67E cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0BB684u, 6); goto L_0C0BB684; }  /* 0C0BB680 bf */
L_0C0BB682: BLKS(0x0C0BB682u);
	r11 = 0x0u;  /* 0C0BB682 mov #imm,Rn */
	UPD(0x0C0BB684u, 1);
L_0C0BB684: BLKS(0x0C0BB684u);
	r3 = 0xC234BECu; UPD(0x0C0BB686u, 1);  /* 0C0BB684 mov.l @(disp,pc),Rn */
	r0 = 0x1u;  /* 0C0BB686 mov #imm,Rn */
	r1 = 0xC28EDFCu; UPD(0x0C0BB68Au, 2);  /* 0C0BB688 mov.l @(disp,pc),Rn */
	r13 = R32(r3); UPD(0x0C0BB68Cu, 1);  /* 0C0BB68A mov.l @Rm,Rn */
	T = (r13 & r13) == 0;  /* 0C0BB68C tst Rm,Rn */
	{ u32 c_ = !T; W32(r14 + 0xCu, r1); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0BB64Eu, 4); goto L_0C0BB64E; } UPD(0x0C0BB692u, 1); goto L_0C0BB692; }  /* 0C0BB68E bf/s */
L_0C0BB692: BLKS(0x0C0BB692u);
	r10 += 0x4u;  /* 0C0BB692 add #imm,Rn */
	r12 = r10;  /* 0C0BB694 mov Rm,Rn */
	IF(0x0C0BB696u); T = r12 & 1; r12 = (u32)((s32)r12 >> 1);  /* 0C0BB696 shar Rn */
	IF(0x0C0BB698u); T = r12 & 1; r12 = (u32)((s32)r12 >> 1);  /* 0C0BB698 shar Rn */
	IF(0x0C0BB69Au); T = r12 & 1; r12 = (u32)((s32)r12 >> 1);  /* 0C0BB69A shar Rn */
	r4 = 0x3Fu;  /* 0C0BB69C mov #imm,Rn */
	r12 &= r4;  /* 0C0BB69E and Rm,Rn */
	r13 = 0x3u;  /* 0C0BB6A0 mov #imm,Rn */
	r0 = r12;  /* 0C0BB6A2 mov Rm,Rn */
	r6 = r11;  /* 0C0BB6A4 mov Rm,Rn */
	r5 = r11;  /* 0C0BB6A6 mov Rm,Rn */
	IF(0x0C0BB6A8u); ARG0(0x40DDu); { s32 s_ = (s32)r13; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C0BB6A8 shld Rm,Rn */
	r6 += r6;  /* 0C0BB6AA add Rm,Rn */
	IF(0x0C0BB6ACu); r5 <<= 2;  /* 0C0BB6AC shll2 Rn */
	W32(r14 + 0x14u, r6); UPD(0x0C0BB6B0u, 15);  /* 0C0BB6AE mov.l Rm,@(disp,Rn) */
	r10 += 0xFFFFFFFCu;  /* 0C0BB6B0 add #imm,Rn */
	W32(r14 + 0x18u, r5); UPD(0x0C0BB6B4u, 2);  /* 0C0BB6B2 mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x10u, r0); UPD(0x0C0BB6B6u, 1);  /* 0C0BB6B4 mov.l Rm,@(disp,Rn) */
L_0C0BB6B6: BLKS(0x0C0BB6B6u);
	r1 = R32(r14 + 0xCu); UPD(0x0C0BB6B8u, 1);  /* 0C0BB6B6 mov.l @(disp,Rm),Rn */
	r8 = 0x54u;  /* 0C0BB6B8 mov #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r1); r1 += 2; r9 = v_; } UPD(0x0C0BB6BCu, 2);  /* 0C0BB6BA mov.w @Rm+,Rn */
	r5 = 0x3u;  /* 0C0BB6BC mov #imm,Rn */
	IF(0x0C0BB6BEu); MACL = r9 * r8;  /* 0C0BB6BE mul.l Rm,Rn */
	r0 = 0xC297B40u; UPD(0x0C0BB6C2u, 4);  /* 0C0BB6C0 mov.l @(disp,pc),Rn */
	IF(0x0C0BB6C2u); r8 = MACL;  /* 0C0BB6C2 sts macl,Rn */
	r8 += r0;  /* 0C0BB6C4 add Rm,Rn */
	r0 = r13;  /* 0C0BB6C6 mov Rm,Rn */
	r7 = 0xC1F7F34u; UPD(0x0C0BB6CAu, 4);  /* 0C0BB6C8 mov.l @(disp,pc),Rn */
	IF(0x0C0BB6CAu); r0 <<= 2;  /* 0C0BB6CA shll2 Rn */
	IF(0x0C0BB6CCu); r6 = R32(r0 + r7); UPD(0x0C0BB6CEu, 2);  /* 0C0BB6CC mov.l @(r0,Rm),Rn */
	W32(r8 + 0x4u, r5); UPD(0x0C0BB6D0u, 1);  /* 0C0BB6CE mov.l Rm,@(disp,Rn) */
	r5 = R32(r14 + 0x14u); UPD(0x0C0BB6D2u, 1);  /* 0C0BB6D0 mov.l @(disp,Rm),Rn */
	r5 += r11;  /* 0C0BB6D2 add Rm,Rn */
	r5 += r13;  /* 0C0BB6D4 add Rm,Rn */
	W32(r8, r6); UPD(0x0C0BB6D8u, 3);  /* 0C0BB6D6 mov.l Rm,@Rn */
	W32(r8 + 0x8u, r5); UPD(0x0C0BB6DAu, 1);  /* 0C0BB6D8 mov.l Rm,@(disp,Rn) */
	r6 = 0x4u;  /* 0C0BB6DA mov #imm,Rn */
	r8 += 0x44u;  /* 0C0BB6DC add #imm,Rn */
	W16(r8, r10); UPD(0x0C0BB6E0u, 3);  /* 0C0BB6DE mov.w Rm,@Rn */
	IF(0x0C0BB6E0u); ARG0(0x456Du); { s32 s_ = (s32)r6; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = 0; else r5 >>= ((~s_ & 31) + 1); }  /* 0C0BB6E0 shld Rm,Rn */
	r4 = R32(r14 + 0x3Cu); UPD(0x0C0BB6E4u, 2);  /* 0C0BB6E2 mov.l @(disp,Rm),Rn */
	r8 += 0x4u;  /* 0C0BB6E4 add #imm,Rn */
	W32(r8, r4); UPD(0x0C0BB6E8u, 2);  /* 0C0BB6E6 mov.l Rm,@Rn */
	r0 = R32(r14 + 0x18u); UPD(0x0C0BB6EAu, 1);  /* 0C0BB6E8 mov.l @(disp,Rm),Rn */
	r8 += 0xFFFFFFB8u;  /* 0C0BB6EA add #imm,Rn */
	r2 = 0xC1F7F44u; UPD(0x0C0BB6EEu, 2);  /* 0C0BB6EC mov.l @(disp,pc),Rn */
	IF(0x0C0BB6EEu); r3 = R32(r0 + r2); UPD(0x0C0BB6F0u, 1);  /* 0C0BB6EE mov.l @(r0,Rm),Rn */
	r7 = 0xC1F7E08u; UPD(0x0C0BB6F2u, 1);  /* 0C0BB6F0 mov.l @(disp,pc),Rn */
	W32(r8 + 0x38u, r3); UPD(0x0C0BB6F4u, 1);  /* 0C0BB6F2 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x10u, r12); UPD(0x0C0BB6F6u, 1);  /* 0C0BB6F4 mov.l Rm,@(disp,Rn) */
	r0 = R32(r7 + 0x1Cu); UPD(0x0C0BB6F8u, 1);  /* 0C0BB6F6 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x24u, r0); UPD(0x0C0BB6FAu, 1);  /* 0C0BB6F8 mov.l Rm,@(disp,Rn) */
	r0 = R32(r7 + 0x18u); UPD(0x0C0BB6FCu, 1);  /* 0C0BB6FA mov.l @(disp,Rm),Rn */
	W32(r8 + 0x14u, r0); UPD(0x0C0BB6FEu, 1);  /* 0C0BB6FC mov.l Rm,@(disp,Rn) */
	IF(0x0C0BB6FEu); r4 = R32(r0 + r5); UPD(0x0C0BB700u, 1);  /* 0C0BB6FE mov.l @(r0,Rm),Rn */
	r3 = R32(r14 + 0x10u); UPD(0x0C0BB702u, 1);  /* 0C0BB700 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x18u, r4); UPD(0x0C0BB704u, 1);  /* 0C0BB702 mov.l Rm,@(disp,Rn) */
	r3 += r4;  /* 0C0BB704 add Rm,Rn */
	r2 = R32(r3); UPD(0x0C0BB708u, 2);  /* 0C0BB706 mov.l @Rm,Rn */
	W32(r8 + 0x1Cu, r2); UPD(0x0C0BB70Au, 1);  /* 0C0BB708 mov.l Rm,@(disp,Rn) */
	r7 = R32(r3 + 0x4u); UPD(0x0C0BB70Cu, 1);  /* 0C0BB70A mov.l @(disp,Rm),Rn */
	r6 = 0xC2380C4u; UPD(0x0C0BB70Eu, 1);  /* 0C0BB70C mov.l @(disp,pc),Rn */
	W32(r8 + 0x20u, r7); UPD(0x0C0BB710u, 1);  /* 0C0BB70E mov.l Rm,@(disp,Rn) */
	r5 = (u32)(s32)(s16)R16(r6); UPD(0x0C0BB712u, 1);  /* 0C0BB710 mov.w @Rm,Rn */
	r8 += 0x4Eu;  /* 0C0BB712 add #imm,Rn */
	W16(r8, r5); UPD(0x0C0BB716u, 2);  /* 0C0BB714 mov.w Rm,@Rn */
	r4 = R32(r14); UPD(0x0C0BB718u, 1);  /* 0C0BB716 mov.l @Rm,Rn */
	r8 += 0xFFFFFFB2u;  /* 0C0BB718 add #imm,Rn */
	W32(r14 + 0xCu, r1); UPD(0x0C0BB71Cu, 2);  /* 0C0BB71A mov.l Rm,@(disp,Rn) */
	r0 = 0xC069B20u; UPD(0x0C0BB71Eu, 1);  /* 0C0BB71C mov.l @(disp,pc),Rn */
	W32(r8 + 0x28u, r4); UPD(0x0C0BB720u, 1);  /* 0C0BB71E mov.l Rm,@(disp,Rn) */
	r1 = R32(r14 + 0x4u); UPD(0x0C0BB722u, 1);  /* 0C0BB720 mov.l @(disp,Rm),Rn */
	r4 = r10;  /* 0C0BB722 mov Rm,Rn */
	W32(r8 + 0x2Cu, r1); UPD(0x0C0BB726u, 2);  /* 0C0BB724 mov.l Rm,@(disp,Rn) */
	IF(0x0C0BB726u); { u32 t_ = r0; PR = 0x0C0BB72Au; r5 = R32(r14 + 0x3Cu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0BB72Au); }  /* 0C0BB726 jsr @Rn */
L_0C0BB72A: BLKS(0x0C0BB72Au);
	W32(r8 + 0x30u, r0); UPD(0x0C0BB72Cu, 1);  /* 0C0BB72A mov.l Rm,@(disp,Rn) */
	r4 = r10;  /* 0C0BB72C mov Rm,Rn */
	r0 = 0xC069AF0u; UPD(0x0C0BB730u, 2);  /* 0C0BB72E mov.l @(disp,pc),Rn */
	IF(0x0C0BB730u); { u32 t_ = r0; PR = 0x0C0BB734u; r5 = R32(r14 + 0x3Cu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0BB734u); }  /* 0C0BB730 jsr @Rn */
L_0C0BB734: BLKS(0x0C0BB734u);
	W32(r8 + 0x34u, r0); UPD(0x0C0BB736u, 1);  /* 0C0BB734 mov.l Rm,@(disp,Rn) */
	r2 = r13;  /* 0C0BB736 mov Rm,Rn */
	r0 = 0x0u;  /* 0C0BB738 mov #imm,Rn */
	W32(r8 + 0x3Cu, r0); UPD(0x0C0BB73Cu, 3);  /* 0C0BB73A mov.l Rm,@(disp,Rn) */
	r2 += 0xFFFFFFFFu;  /* 0C0BB73C add #imm,Rn */
	r3 = 0x808080u; UPD(0x0C0BB740u, 2);  /* 0C0BB73E mov.l @(disp,pc),Rn */
	r8 += 0x40u;  /* 0C0BB740 add #imm,Rn */
	W32(r8, r3); UPD(0x0C0BB744u, 2);  /* 0C0BB742 mov.l Rm,@Rn */
	r0 = 0xAu;  /* 0C0BB744 mov #imm,Rn */
	IF(0x0C0BB746u); r7 = (u32)(s32)(s16)R16(r0 + r14); UPD(0x0C0BB748u, 2);  /* 0C0BB746 mov.w @(r0,Rm),Rn */
	r8 += 0xCu;  /* 0C0BB748 add #imm,Rn */
	r13 = (u32)(s32)(s16)r2;  /* 0C0BB74A exts.w Rm,Rn */
	W16(r8, r7); UPD(0x0C0BB74Eu, 3);  /* 0C0BB74C mov.w Rm,@Rn */
	IF(0x0C0BB74Eu); T = (s32)r13 >= 0;  /* 0C0BB74E cmp/pz Rn */
	{ u32 c_ = T; W32(r14 + 0x8u, r9); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0BB6B6u, 4); goto L_0C0BB6B6; } UPD(0x0C0BB754u, 1); goto L_0C0BB754; }  /* 0C0BB750 bt/s */
L_0C0BB754: BLKS(0x0C0BB754u);
	r10 = 0xC0C2110u; UPD(0x0C0BB756u, 1);  /* 0C0BB754 mov.l @(disp,pc),Rn */
	IF(0x0C0BB756u); { u32 t_ = r10; PR = 0x0C0BB75Au; r4 = 0x6Au; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2110, 0x0C0C2110u, 0x0C0BB75Au); }  /* 0C0BB756 jsr @Rn */
L_0C0BB75A: BLKS(0x0C0BB75Au);
	{ r0 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C0BB64Eu, 3); goto L_0C0BB64E; }  /* 0C0BB75A bra */
}

/* FUN_0c0bb7b0 */
void blk_f_0C0BB7B0(sh3_t *c)
{
	LOCALS;
L_0C0BB7B0: BLKS(0x0C0BB7B0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0BB7B2u, 1);  /* 0C0BB7B0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0BB7B4u, 1);  /* 0C0BB7B2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0BB7B6u, 1);  /* 0C0BB7B4 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s16)r7;  /* 0C0BB7B6 exts.w Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0BB7BAu, 2);  /* 0C0BB7B8 mov.l Rm,@-Rn */
	r10 = r5;  /* 0C0BB7BA mov Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0BB7BEu, 2);  /* 0C0BB7BC mov.l Rm,@-Rn */
	r11 = r4;  /* 0C0BB7BE mov Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0BB7C2u, 2);  /* 0C0BB7C0 mov.l Rm,@-Rn */
	r12 = r6;  /* 0C0BB7C2 mov Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0BB7C6u, 2);  /* 0C0BB7C4 mov.l Rm,@-Rn */
	r2 = 0xC2B07FCu; UPD(0x0C0BB7C8u, 1);  /* 0C0BB7C6 mov.l @(disp,pc),Rn */
	IF(0x0C0BB7C8u); r15 -= 4; W32(r15, PR); UPD(0x0C0BB7CAu, 1);  /* 0C0BB7C8 sts.l pr,@-Rn */
	r0 = R32(r2); UPD(0x0C0BB7CCu, 1);  /* 0C0BB7CA mov.l @Rm,Rn */
	r14 = r15;  /* 0C0BB7CC mov Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0BB7CE tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BB7FEu, 5); goto L_0C0BB7FE; } goto L_0C0BB7D4; }  /* 0C0BB7D0 bf/s */
L_0C0BB7D4: BLKS(0x0C0BB7D4u);
	r2 = 0xFF580000u; UPD(0x0C0BB7D6u, 2);  /* 0C0BB7D4 mov.l @(disp,pc),Rn */
	r2 += r5;  /* 0C0BB7D6 add Rm,Rn */
	IF(0x0C0BB7D8u); T = (s32)r2 >= 0;  /* 0C0BB7D8 cmp/pz Rn */
	if (T) { UPD(0x0C0BB7DEu, 5); goto L_0C0BB7DE; }  /* 0C0BB7DA bt */
L_0C0BB7DC: BLKS(0x0C0BB7DCu);
	r2 = 0u - r2;  /* 0C0BB7DC neg Rm,Rn */
	UPD(0x0C0BB7DEu, 1);
L_0C0BB7DE: BLKS(0x0C0BB7DEu);
	r0 = 0x980000u; UPD(0x0C0BB7E0u, 1);  /* 0C0BB7DE mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r0;  /* 0C0BB7E0 cmp/gt Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BB7FEu, 4); goto L_0C0BB7FE; } goto L_0C0BB7E6; }  /* 0C0BB7E2 bt/s */
L_0C0BB7E6: BLKS(0x0C0BB7E6u);
	r5 = 0xC3C4048u; UPD(0x0C0BB7E8u, 2);  /* 0C0BB7E6 mov.l @(disp,pc),Rn */
	r2 = r12;  /* 0C0BB7E8 mov Rm,Rn */
	r4 = R32(r5); UPD(0x0C0BB7ECu, 2);  /* 0C0BB7EA mov.l @Rm,Rn */
	r3 = 0xFF880000u; UPD(0x0C0BB7EEu, 1);  /* 0C0BB7EC mov.l @(disp,pc),Rn */
	r2 -= r4;  /* 0C0BB7EE sub Rm,Rn */
	r2 += r3;  /* 0C0BB7F0 add Rm,Rn */
	IF(0x0C0BB7F2u); T = (s32)r2 >= 0;  /* 0C0BB7F2 cmp/pz Rn */
	if (!T) { UPD(0x0C0BB8D0u, 6); goto L_0C0BB8D0; }  /* 0C0BB7F4 bf */
L_0C0BB7F6: BLKS(0x0C0BB7F6u);
	r6 = 0x700000u; UPD(0x0C0BB7F8u, 1);  /* 0C0BB7F6 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r6;  /* 0C0BB7F8 cmp/gt Rm,Rn */
	IF(0x0C0BB7FAu); r0 = T;  /* 0C0BB7FA movt Rn */
	r0 ^= 0x1u;  /* 0C0BB7FC xor #imm,r0 */
	UPD(0x0C0BB7FEu, 3);
L_0C0BB7FE: BLKS(0x0C0BB7FEu);
	r7 = (u32)(s32)(s8)r0;  /* 0C0BB7FE exts.b Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C0BB800 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BB820u, 5); goto L_0C0BB820; } UPD(0x0C0BB806u, 1); goto L_0C0BB806; }  /* 0C0BB802 bf/s */
L_0C0BB806: BLKS(0x0C0BB806u);
	r15 = r14;  /* 0C0BB806 mov Rm,Rn */
	IF(0x0C0BB808u); PR = R32(r15); r15 += 4; UPD(0x0C0BB80Au, 2);  /* 0C0BB808 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0BB80Cu, 1);  /* 0C0BB80A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0BB80Eu, 1);  /* 0C0BB80C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0BB810u, 1);  /* 0C0BB80E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0BB812u, 1);  /* 0C0BB810 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0BB814u, 1);  /* 0C0BB812 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0BB816u, 1);  /* 0C0BB814 mov.l @Rm+,Rn */
	IF(0x0C0BB816u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0BB816 rts */
L_0C0BB820: BLKS(0x0C0BB820u);
	r8 = 0xC0717A0u; UPD(0x0C0BB822u, 1);  /* 0C0BB820 mov.l @(disp,pc),Rn */
	IF(0x0C0BB822u); { u32 t_ = r8; PR = 0x0C0BB826u; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0717A0, 0x0C0717A0u, 0x0C0BB826u); }  /* 0C0BB822 jsr @Rn */
L_0C0BB826: BLKS(0x0C0BB826u);
	T = (r0 & r0) == 0;  /* 0C0BB826 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BB806u, 4); goto L_0C0BB806; } goto L_0C0BB82C; }  /* 0C0BB828 bt/s */
L_0C0BB82C: BLKS(0x0C0BB82Cu);
	r13 = 0xC28EDFCu; UPD(0x0C0BB82Eu, 2);  /* 0C0BB82C mov.l @(disp,pc),Rn */
	r0 = 0xC234BECu; UPD(0x0C0BB830u, 1);  /* 0C0BB82E mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s16)R16(r13); UPD(0x0C0BB832u, 1);  /* 0C0BB830 mov.w @Rm,Rn */
	r13 = R32(r0); UPD(0x0C0BB834u, 1);  /* 0C0BB832 mov.l @Rm,Rn */
	T = (r13 & r13) == 0;  /* 0C0BB834 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BB806u, 4); goto L_0C0BB806; } goto L_0C0BB83A; }  /* 0C0BB836 bf/s */
L_0C0BB83A: BLKS(0x0C0BB83Au);
	r8 = 0x54u;  /* 0C0BB83A mov #imm,Rn */
	IF(0x0C0BB83Cu); MACL = r2 * r8;  /* 0C0BB83C mul.l Rm,Rn */
	r4 = 0xC297B40u; UPD(0x0C0BB840u, 5);  /* 0C0BB83E mov.l @(disp,pc),Rn */
	r0 = r9;  /* 0C0BB840 mov Rm,Rn */
	IF(0x0C0BB842u); r8 = MACL;  /* 0C0BB842 sts macl,Rn */
	r3 = 0xD1000000u; UPD(0x0C0BB846u, 3);  /* 0C0BB844 mov.l @(disp,pc),Rn */
	r8 += r4;  /* 0C0BB846 add Rm,Rn */
	r2 = 0x6u;  /* 0C0BB848 mov #imm,Rn */
	W32(r8, r3); UPD(0x0C0BB84Cu, 3);  /* 0C0BB84A mov.l Rm,@Rn */
	r0 += 0x8u;  /* 0C0BB84C add #imm,Rn */
	W32(r8 + 0x4u, r2); UPD(0x0C0BB850u, 2);  /* 0C0BB84E mov.l Rm,@(disp,Rn) */
	IF(0x0C0BB850u); r0 >>= 2;  /* 0C0BB850 shlr2 Rn */
	r8 += 0x44u;  /* 0C0BB852 add #imm,Rn */
	W16(r8, r9); UPD(0x0C0BB856u, 3);  /* 0C0BB854 mov.w Rm,@Rn */
	r6 = 0x20u;  /* 0C0BB856 mov #imm,Rn */
	IF(0x0C0BB858u); r0 >>= 2;  /* 0C0BB858 shlr2 Rn */
	r6 &= r11;  /* 0C0BB85A and Rm,Rn */
	r0 &= 0x1Fu;  /* 0C0BB85C and #imm,r0 */
	r8 += 0xFFFFFFBCu;  /* 0C0BB85E add #imm,Rn */
	r6 |= r0;  /* 0C0BB860 or Rm,Rn */
	W32(r8 + 0x8u, r6); UPD(0x0C0BB864u, 7);  /* 0C0BB862 mov.l Rm,@(disp,Rn) */
	r7 = 0x4u;  /* 0C0BB864 mov #imm,Rn */
	W32(r8 + 0x10u, r13); UPD(0x0C0BB868u, 2);  /* 0C0BB866 mov.l Rm,@(disp,Rn) */
	IF(0x0C0BB868u); ARG0(0x467Du); { s32 s_ = (s32)r7; if (s_ >= 0) r6 <<= (s_ & 31); else if ((s_ & 31) == 0) r6 = 0; else r6 >>= ((~s_ & 31) + 1); }  /* 0C0BB868 shld Rm,Rn */
	r11 = 0xC1F7E08u; UPD(0x0C0BB86Cu, 2);  /* 0C0BB86A mov.l @(disp,pc),Rn */
	r0 = R32(r11 + 0x34u); UPD(0x0C0BB86Eu, 1);  /* 0C0BB86C mov.l @(disp,Rm),Rn */
	W32(r8 + 0x24u, r0); UPD(0x0C0BB870u, 1);  /* 0C0BB86E mov.l Rm,@(disp,Rn) */
	r0 = R32(r11 + 0x30u); UPD(0x0C0BB872u, 1);  /* 0C0BB870 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x14u, r0); UPD(0x0C0BB874u, 1);  /* 0C0BB872 mov.l Rm,@(disp,Rn) */
	IF(0x0C0BB874u); r5 = R32(r0 + r6); UPD(0x0C0BB876u, 1);  /* 0C0BB874 mov.l @(r0,Rm),Rn */
	W32(r8 + 0x18u, r5); UPD(0x0C0BB878u, 1);  /* 0C0BB876 mov.l Rm,@(disp,Rn) */
	r1 = R32(r5); UPD(0x0C0BB87Au, 1);  /* 0C0BB878 mov.l @Rm,Rn */
	W32(r8 + 0x1Cu, r1); UPD(0x0C0BB87Cu, 1);  /* 0C0BB87A mov.l Rm,@(disp,Rn) */
	r4 = R32(r5 + 0x4u); UPD(0x0C0BB87Eu, 1);  /* 0C0BB87C mov.l @(disp,Rm),Rn */
	r3 = 0xC2380C4u; UPD(0x0C0BB880u, 1);  /* 0C0BB87E mov.l @(disp,pc),Rn */
	W32(r8 + 0x20u, r4); UPD(0x0C0BB882u, 1);  /* 0C0BB880 mov.l Rm,@(disp,Rn) */
	r2 = (u32)(s32)(s16)R16(r3); UPD(0x0C0BB884u, 1);  /* 0C0BB882 mov.w @Rm,Rn */
	r8 += 0x4Eu;  /* 0C0BB884 add #imm,Rn */
	W16(r8, r2); UPD(0x0C0BB888u, 2);  /* 0C0BB886 mov.w Rm,@Rn */
	r4 = 0x7u;  /* 0C0BB888 mov #imm,Rn */
	r11 = 0xC062780u; UPD(0x0C0BB88Cu, 2);  /* 0C0BB88A mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFB2u;  /* 0C0BB88C add #imm,Rn */
	W32(r8 + 0x28u, r10); UPD(0x0C0BB890u, 2);  /* 0C0BB88E mov.l Rm,@(disp,Rn) */
	IF(0x0C0BB890u); { u32 t_ = r11; PR = 0x0C0BB894u; W32(r8 + 0x2Cu, r12); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0BB894u); }  /* 0C0BB890 jsr @Rn */
L_0C0BB894: BLKS(0x0C0BB894u);
	r0 += r9;  /* 0C0BB894 add Rm,Rn */
	r9 = 0xC069B20u; UPD(0x0C0BB898u, 2);  /* 0C0BB896 mov.l @(disp,pc),Rn */
	r0 += 0xFFFFFFFCu;  /* 0C0BB898 add #imm,Rn */
	r12 = 0xC069AF0u; UPD(0x0C0BB89Cu, 2);  /* 0C0BB89A mov.l @(disp,pc),Rn */
	r10 = (u32)(s32)(s16)r0;  /* 0C0BB89C exts.w Rm,Rn */
	r5 = R32(r14 + 0x20u); UPD(0x0C0BB8A0u, 2);  /* 0C0BB89E mov.l @(disp,Rm),Rn */
	r11 = 0x217FF00u; UPD(0x0C0BB8A2u, 1);  /* 0C0BB8A0 mov.l @(disp,pc),Rn */
	IF(0x0C0BB8A2u); { u32 t_ = r9; PR = 0x0C0BB8A6u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0BB8A6u); }  /* 0C0BB8A2 jsr @Rn */
L_0C0BB8A6: BLKS(0x0C0BB8A6u);
	r4 = r10;  /* 0C0BB8A6 mov Rm,Rn */
	W32(r8 + 0x30u, r0); UPD(0x0C0BB8AAu, 2);  /* 0C0BB8A8 mov.l Rm,@(disp,Rn) */
	IF(0x0C0BB8AAu); { u32 t_ = r12; PR = 0x0C0BB8AEu; r5 = R32(r14 + 0x20u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0BB8AEu); }  /* 0C0BB8AA jsr @Rn */
L_0C0BB8AE: BLKS(0x0C0BB8AEu);
	W32(r8 + 0x34u, r0); UPD(0x0C0BB8B0u, 1);  /* 0C0BB8AE mov.l Rm,@(disp,Rn) */
	r4 = 0x67u;  /* 0C0BB8B0 mov #imm,Rn */
	W32(r8 + 0x3Cu, r11); UPD(0x0C0BB8B4u, 2);  /* 0C0BB8B2 mov.l Rm,@(disp,Rn) */
	r10 = 0x808080u; UPD(0x0C0BB8B6u, 1);  /* 0C0BB8B4 mov.l @(disp,pc),Rn */
	r8 += 0x40u;  /* 0C0BB8B6 add #imm,Rn */
	W32(r8, r10); UPD(0x0C0BB8BAu, 2);  /* 0C0BB8B8 mov.l Rm,@Rn */
	r9 = 0xC0C2110u; UPD(0x0C0BB8BCu, 1);  /* 0C0BB8BA mov.l @(disp,pc),Rn */
	r8 += 0x11u;  /* 0C0BB8BC add #imm,Rn */
	IF(0x0C0BB8BEu); { u32 t_ = r9; PR = 0x0C0BB8C2u; W8(r8, r13); /* slot mov.b Rm,@Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0C2110, 0x0C0C2110u, 0x0C0BB8C2u); }  /* 0C0BB8BE jsr @Rn */
L_0C0BB8C2: BLKS(0x0C0BB8C2u);
	{ r0 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C0BB806u, 3); goto L_0C0BB806; }  /* 0C0BB8C2 bra */
L_0C0BB8D0: BLKS(0x0C0BB8D0u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0BB7F6u, 3); goto L_0C0BB7F6; }  /* 0C0BB8D0 bra */
}

/* FUN_0c0bb920 */
void blk_f_0C0BB920(sh3_t *c)
{
	LOCALS;
L_0C0BB920: BLKS(0x0C0BB920u);
	r2 = 0x54u;  /* 0C0BB920 mov #imm,Rn */
	r0 = (u32)(s32)(s16)r4;  /* 0C0BB922 exts.w Rm,Rn */
	IF(0x0C0BB924u); MACL = r0 * r2;  /* 0C0BB924 mul.l Rm,Rn */
	r5 = 0xC297B40u; UPD(0x0C0BB928u, 5);  /* 0C0BB926 mov.l @(disp,pc),Rn */
	r1 = 0xFFFFFFFFu;  /* 0C0BB928 mov #imm,Rn */
	IF(0x0C0BB92Au); r3 = MACL;  /* 0C0BB92A sts macl,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0BB92Eu, 3);  /* 0C0BB92C mov.l Rm,@-Rn */
	r3 += r5;  /* 0C0BB92E add Rm,Rn */
	r3 += 0x4Cu;  /* 0C0BB930 add #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r3); UPD(0x0C0BB934u, 3);  /* 0C0BB932 mov.w @Rm,Rn */
	r14 = r15;  /* 0C0BB934 mov Rm,Rn */
	IF(0x0C0BB936u); MACL = r0 * r2;  /* 0C0BB936 mul.l Rm,Rn */
	IF(0x0C0BB938u); r7 = MACL;  /* 0C0BB938 sts macl,Rn */
	r7 += r5;  /* 0C0BB93A add Rm,Rn */
	r2 = R32(r7); UPD(0x0C0BB93Eu, 6);  /* 0C0BB93C mov.l @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C0BB93E tst Rm,Rn */
	{ u32 c_ = T; r3 += 0xFFFFFFB4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0BB94Eu, 4); goto L_0C0BB94E; } goto L_0C0BB944; }  /* 0C0BB940 bt/s */
L_0C0BB944: BLKS(0x0C0BB944u);
	r1 = R32(r7 + 0x4u); UPD(0x0C0BB946u, 2);  /* 0C0BB944 mov.l @(disp,Rm),Rn */
	r4 = R32(r3 + 0x4u); UPD(0x0C0BB948u, 1);  /* 0C0BB946 mov.l @(disp,Rm),Rn */
	T = r1 == r4;  /* 0C0BB948 cmp/eq Rm,Rn */
	{ u32 c_ = T; r1 = 0xFFFFFFFFu; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BB960u, 4); goto L_0C0BB960; } UPD(0x0C0BB94Eu, 1); goto L_0C0BB94E; }  /* 0C0BB94A bt/s */
L_0C0BB94E: BLKS(0x0C0BB94Eu);
	r0 = r1;  /* 0C0BB94E mov Rm,Rn */
	r15 = r14;  /* 0C0BB950 mov Rm,Rn */
	IF(0x0C0BB952u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C0BB952 rts */
L_0C0BB960: BLKS(0x0C0BB960u);
	r7 += 0x4Eu;  /* 0C0BB960 add #imm,Rn */
	r6 = (u32)(s32)(s16)R16(r7); UPD(0x0C0BB964u, 2);  /* 0C0BB962 mov.w @Rm,Rn */
	r3 += 0x4Eu;  /* 0C0BB964 add #imm,Rn */
	r7 = (u32)(s32)(s16)R16(r3); UPD(0x0C0BB968u, 2);  /* 0C0BB966 mov.w @Rm,Rn */
	T = r7 == r6;  /* 0C0BB968 cmp/eq Rm,Rn */
	{ u32 c_ = !T; r1 = 0xFFFFFFFFu; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BB94Eu, 4); goto L_0C0BB94E; } goto L_0C0BB96E; }  /* 0C0BB96A bf/s */
L_0C0BB96E: BLKS(0x0C0BB96Eu);
	{ r1 = r0; /* slot mov Rm,Rn */ UPD(0x0C0BB94Eu, 4); goto L_0C0BB94E; }  /* 0C0BB96E bra */
}

void blk_f_0C0BB980(sh3_t *c)
{
	LOCALS;
L_0C0BB980: BLKS(0x0C0BB980u);
	r2 = (u32)(s32)(s16)r4;  /* 0C0BB980 exts.w Rm,Rn */
	r0 = 0x54u;  /* 0C0BB982 mov #imm,Rn */
	IF(0x0C0BB984u); MACL = r2 * r0;  /* 0C0BB984 mul.l Rm,Rn */
	r6 = 0xC297B40u; UPD(0x0C0BB988u, 5);  /* 0C0BB986 mov.l @(disp,pc),Rn */
	r4 = 0x1u;  /* 0C0BB988 mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0BB98Cu, 2);  /* 0C0BB98A mov.l Rm,@-Rn */
	IF(0x0C0BB98Cu); r0 = MACL;  /* 0C0BB98C sts macl,Rn */
	r0 += r6;  /* 0C0BB98E add Rm,Rn */
	W32(r0 + 0x8u, r4); UPD(0x0C0BB992u, 3);  /* 0C0BB990 mov.l Rm,@(disp,Rn) */
	r1 = 0x5u;  /* 0C0BB992 mov #imm,Rn */
	r5 = 0x40000000u; UPD(0x0C0BB996u, 2);  /* 0C0BB994 mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C0BB996 mov #imm,Rn */
	W32(r0, r5); UPD(0x0C0BB99Au, 2);  /* 0C0BB998 mov.l Rm,@Rn */
	r14 = r15;  /* 0C0BB99A mov Rm,Rn */
	W32(r0 + 0x4u, r1); UPD(0x0C0BB99Eu, 2);  /* 0C0BB99C mov.l Rm,@(disp,Rn) */
	W32(r0 + 0x10u, r4); UPD(0x0C0BB9A0u, 1);  /* 0C0BB99E mov.l Rm,@(disp,Rn) */
	r7 = 0xC1F7E08u; UPD(0x0C0BB9A2u, 1);  /* 0C0BB9A0 mov.l @(disp,pc),Rn */
	r3 = R32(r7 + 0x2Cu); UPD(0x0C0BB9A4u, 1);  /* 0C0BB9A2 mov.l @(disp,Rm),Rn */
	W32(r0 + 0x24u, r3); UPD(0x0C0BB9A6u, 1);  /* 0C0BB9A4 mov.l Rm,@(disp,Rn) */
	r6 = R32(r7 + 0x28u); UPD(0x0C0BB9A8u, 1);  /* 0C0BB9A6 mov.l @(disp,Rm),Rn */
	W32(r0 + 0x14u, r6); UPD(0x0C0BB9AAu, 1);  /* 0C0BB9A8 mov.l Rm,@(disp,Rn) */
	r1 = R32(r6 + 0x10u); UPD(0x0C0BB9ACu, 1);  /* 0C0BB9AA mov.l @(disp,Rm),Rn */
	W32(r0 + 0x18u, r1); UPD(0x0C0BB9AEu, 1);  /* 0C0BB9AC mov.l Rm,@(disp,Rn) */
	r5 = R32(r1); UPD(0x0C0BB9B0u, 1);  /* 0C0BB9AE mov.l @Rm,Rn */
	W32(r0 + 0x1Cu, r5); UPD(0x0C0BB9B2u, 1);  /* 0C0BB9B0 mov.l Rm,@(disp,Rn) */
	r7 = R32(r1 + 0x4u); UPD(0x0C0BB9B4u, 1);  /* 0C0BB9B2 mov.l @(disp,Rm),Rn */
	r6 = 0xC2380C4u; UPD(0x0C0BB9B6u, 1);  /* 0C0BB9B4 mov.l @(disp,pc),Rn */
	W32(r0 + 0x20u, r7); UPD(0x0C0BB9B8u, 1);  /* 0C0BB9B6 mov.l Rm,@(disp,Rn) */
	r5 = (u32)(s32)(s16)R16(r6); UPD(0x0C0BB9BAu, 1);  /* 0C0BB9B8 mov.w @Rm,Rn */
	r0 += 0x4Eu;  /* 0C0BB9BA add #imm,Rn */
	W16(r0, r5); UPD(0x0C0BB9BEu, 2);  /* 0C0BB9BC mov.w Rm,@Rn */
	r0 += 0xFFFFFFF6u;  /* 0C0BB9BE add #imm,Rn */
	W16(r0, r4); UPD(0x0C0BB9C2u, 2);  /* 0C0BB9C0 mov.w Rm,@Rn */
	r3 = 0x207C0C0u; UPD(0x0C0BB9C4u, 1);  /* 0C0BB9C2 mov.l @(disp,pc),Rn */
	r0 += 0xFFFFFFBCu;  /* 0C0BB9C4 add #imm,Rn */
	W32(r0 + 0x3Cu, r3); UPD(0x0C0BB9C8u, 2);  /* 0C0BB9C6 mov.l Rm,@(disp,Rn) */
	r1 = 0x808080u; UPD(0x0C0BB9CAu, 1);  /* 0C0BB9C8 mov.l @(disp,pc),Rn */
	r0 += 0x40u;  /* 0C0BB9CA add #imm,Rn */
	W32(r0, r1); UPD(0x0C0BB9CEu, 2);  /* 0C0BB9CC mov.l Rm,@Rn */
	r15 = r14;  /* 0C0BB9CE mov Rm,Rn */
	IF(0x0C0BB9D0u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0BB9D0 rts */
}

/* FUN_0c0bb9f0 */
void blk_f_0C0BB9F0(sh3_t *c)
{
	LOCALS;
L_0C0BB9F0: BLKS(0x0C0BB9F0u);
	r2 = (u32)(s32)(s16)r4;  /* 0C0BB9F0 exts.w Rm,Rn */
	r0 = 0x54u;  /* 0C0BB9F2 mov #imm,Rn */
	IF(0x0C0BB9F4u); MACL = r2 * r0;  /* 0C0BB9F4 mul.l Rm,Rn */
	r6 = 0xC297B40u; UPD(0x0C0BB9F8u, 5);  /* 0C0BB9F6 mov.l @(disp,pc),Rn */
	r4 = 0x2u;  /* 0C0BB9F8 mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0BB9FCu, 2);  /* 0C0BB9FA mov.l Rm,@-Rn */
	IF(0x0C0BB9FCu); r0 = MACL;  /* 0C0BB9FC sts macl,Rn */
	r0 += r6;  /* 0C0BB9FE add Rm,Rn */
	W32(r0 + 0x8u, r4); UPD(0x0C0BBA02u, 3);  /* 0C0BBA00 mov.l Rm,@(disp,Rn) */
	r1 = 0x5u;  /* 0C0BBA02 mov #imm,Rn */
	r5 = 0x40000000u; UPD(0x0C0BBA06u, 2);  /* 0C0BBA04 mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C0BBA06 mov #imm,Rn */
	W32(r0, r5); UPD(0x0C0BBA0Au, 2);  /* 0C0BBA08 mov.l Rm,@Rn */
	r14 = r15;  /* 0C0BBA0A mov Rm,Rn */
	W32(r0 + 0x4u, r1); UPD(0x0C0BBA0Eu, 2);  /* 0C0BBA0C mov.l Rm,@(disp,Rn) */
	W32(r0 + 0x10u, r4); UPD(0x0C0BBA10u, 1);  /* 0C0BBA0E mov.l Rm,@(disp,Rn) */
	r7 = 0xC1F7E08u; UPD(0x0C0BBA12u, 1);  /* 0C0BBA10 mov.l @(disp,pc),Rn */
	r3 = R32(r7 + 0x2Cu); UPD(0x0C0BBA14u, 1);  /* 0C0BBA12 mov.l @(disp,Rm),Rn */
	W32(r0 + 0x24u, r3); UPD(0x0C0BBA16u, 1);  /* 0C0BBA14 mov.l Rm,@(disp,Rn) */
	r6 = R32(r7 + 0x28u); UPD(0x0C0BBA18u, 1);  /* 0C0BBA16 mov.l @(disp,Rm),Rn */
	W32(r0 + 0x14u, r6); UPD(0x0C0BBA1Au, 1);  /* 0C0BBA18 mov.l Rm,@(disp,Rn) */
	r1 = R32(r6 + 0x20u); UPD(0x0C0BBA1Cu, 1);  /* 0C0BBA1A mov.l @(disp,Rm),Rn */
	W32(r0 + 0x18u, r1); UPD(0x0C0BBA1Eu, 1);  /* 0C0BBA1C mov.l Rm,@(disp,Rn) */
	r5 = R32(r1); UPD(0x0C0BBA20u, 1);  /* 0C0BBA1E mov.l @Rm,Rn */
	W32(r0 + 0x1Cu, r5); UPD(0x0C0BBA22u, 1);  /* 0C0BBA20 mov.l Rm,@(disp,Rn) */
	r7 = R32(r1 + 0x4u); UPD(0x0C0BBA24u, 1);  /* 0C0BBA22 mov.l @(disp,Rm),Rn */
	r6 = 0xC2380C4u; UPD(0x0C0BBA26u, 1);  /* 0C0BBA24 mov.l @(disp,pc),Rn */
	W32(r0 + 0x20u, r7); UPD(0x0C0BBA28u, 1);  /* 0C0BBA26 mov.l Rm,@(disp,Rn) */
	r5 = (u32)(s32)(s16)R16(r6); UPD(0x0C0BBA2Au, 1);  /* 0C0BBA28 mov.w @Rm,Rn */
	r0 += 0x4Eu;  /* 0C0BBA2A add #imm,Rn */
	W16(r0, r5); UPD(0x0C0BBA2Eu, 2);  /* 0C0BBA2C mov.w Rm,@Rn */
	r0 += 0xFFFFFFF6u;  /* 0C0BBA2E add #imm,Rn */
	W16(r0, r4); UPD(0x0C0BBA32u, 2);  /* 0C0BBA30 mov.w Rm,@Rn */
	r3 = 0x207C0C0u; UPD(0x0C0BBA34u, 1);  /* 0C0BBA32 mov.l @(disp,pc),Rn */
	r0 += 0xFFFFFFBCu;  /* 0C0BBA34 add #imm,Rn */
	W32(r0 + 0x3Cu, r3); UPD(0x0C0BBA38u, 2);  /* 0C0BBA36 mov.l Rm,@(disp,Rn) */
	r1 = 0x808080u; UPD(0x0C0BBA3Au, 1);  /* 0C0BBA38 mov.l @(disp,pc),Rn */
	r0 += 0x40u;  /* 0C0BBA3A add #imm,Rn */
	W32(r0, r1); UPD(0x0C0BBA3Eu, 2);  /* 0C0BBA3C mov.l Rm,@Rn */
	r15 = r14;  /* 0C0BBA3E mov Rm,Rn */
	IF(0x0C0BBA40u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0BBA40 rts */
}

void blk_f_0C0BBA60(sh3_t *c)
{
	LOCALS;
L_0C0BBA60: BLKS(0x0C0BBA60u);
	r3 = 0x54u;  /* 0C0BBA60 mov #imm,Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C0BBA62 exts.w Rm,Rn */
	IF(0x0C0BBA64u); MACL = r4 * r3;  /* 0C0BBA64 mul.l Rm,Rn */
	r0 = 0xC297B40u; UPD(0x0C0BBA68u, 5);  /* 0C0BBA66 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0BBA6Au, 1);  /* 0C0BBA68 mov.l Rm,@-Rn */
	IF(0x0C0BBA6Au); r3 = MACL;  /* 0C0BBA6A sts macl,Rn */
	r3 += r0;  /* 0C0BBA6C add Rm,Rn */
	r0 = R32(r3 + 0x28u); UPD(0x0C0BBA70u, 3);  /* 0C0BBA6E mov.l @(disp,Rm),Rn */
	r14 = r15;  /* 0C0BBA70 mov Rm,Rn */
	r6 = R32(r3 + 0x2Cu); UPD(0x0C0BBA74u, 2);  /* 0C0BBA72 mov.l @(disp,Rm),Rn */
	r5 = R32(r3 + 0x30u); UPD(0x0C0BBA76u, 1);  /* 0C0BBA74 mov.l @(disp,Rm),Rn */
	r2 = R32(r3 + 0x34u); UPD(0x0C0BBA78u, 1);  /* 0C0BBA76 mov.l @(disp,Rm),Rn */
	r0 += r5;  /* 0C0BBA78 add Rm,Rn */
	r7 = 0xFF600000u; UPD(0x0C0BBA7Cu, 2);  /* 0C0BBA7A mov.l @(disp,pc),Rn */
	r6 += r2;  /* 0C0BBA7C add Rm,Rn */
	r7 += r0;  /* 0C0BBA7E add Rm,Rn */
	W32(r3 + 0x28u, r0); UPD(0x0C0BBA82u, 3);  /* 0C0BBA80 mov.l Rm,@(disp,Rn) */
	IF(0x0C0BBA82u); T = (s32)r7 >= 0;  /* 0C0BBA82 cmp/pz Rn */
	{ u32 c_ = T; W32(r3 + 0x2Cu, r6); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0BBA8Cu, 4); goto L_0C0BBA8C; } UPD(0x0C0BBA88u, 1); goto L_0C0BBA88; }  /* 0C0BBA84 bt/s */
L_0C0BBA88: BLKS(0x0C0BBA88u);
	{ r7 = 0u - r7; /* slot neg Rm,Rn */ UPD(0x0C0BBBA0u, 3); goto L_0C0BBBA0; }  /* 0C0BBA88 bra */
L_0C0BBA8C: BLKS(0x0C0BBA8Cu);
	r2 = 0xB80000u; UPD(0x0C0BBA8Eu, 1);  /* 0C0BBA8C mov.l @(disp,pc),Rn */
	T = (s32)r7 > (s32)r2;  /* 0C0BBA8E cmp/gt Rm,Rn */
	if (T) { UPD(0x0C0BBAA8u, 4); goto L_0C0BBAA8; }  /* 0C0BBA90 bt */
L_0C0BBA92: BLKS(0x0C0BBA92u);
	r2 = r6;  /* 0C0BBA92 mov Rm,Rn */
	r5 = 0xC3C4048u; UPD(0x0C0BBA96u, 2);  /* 0C0BBA94 mov.l @(disp,pc),Rn */
	r7 = R32(r5); UPD(0x0C0BBA98u, 1);  /* 0C0BBA96 mov.l @Rm,Rn */
	r6 = 0xFF880000u; UPD(0x0C0BBA9Au, 1);  /* 0C0BBA98 mov.l @(disp,pc),Rn */
	r2 -= r7;  /* 0C0BBA9A sub Rm,Rn */
	r2 += r6;  /* 0C0BBA9C add Rm,Rn */
	IF(0x0C0BBA9Eu); T = (s32)r2 >= 0;  /* 0C0BBA9E cmp/pz Rn */
	if (!T) { UPD(0x0C0BBB90u, 6); goto L_0C0BBB90; }  /* 0C0BBAA0 bf */
L_0C0BBAA2: BLKS(0x0C0BBAA2u);
	r0 = 0x900000u; UPD(0x0C0BBAA4u, 1);  /* 0C0BBAA2 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r0;  /* 0C0BBAA4 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0BBAC0u, 4); goto L_0C0BBAC0; }  /* 0C0BBAA6 bf */
L_0C0BBAA8: BLKS(0x0C0BBAA8u);
	r4 = 0x0u;  /* 0C0BBAA8 mov #imm,Rn */
	W32(r3, r4); UPD(0x0C0BBAACu, 2);  /* 0C0BBAAA mov.l Rm,@Rn */
L_0C0BBAAC: BLKS(0x0C0BBAACu);
	r15 = r14;  /* 0C0BBAAC mov Rm,Rn */
	IF(0x0C0BBAAEu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0BBAAE rts */
L_0C0BBAC0: BLKS(0x0C0BBAC0u);
	r2 = R32(r3 + 0x10u); UPD(0x0C0BBAC2u, 1);  /* 0C0BBAC0 mov.l @(disp,Rm),Rn */
	r3 = 0xFu;  /* 0C0BBAC2 mov #imm,Rn */
	T = r2 > r3;  /* 0C0BBAC4 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C0BBAACu, 5); goto L_0C0BBAAC; }  /* 0C0BBAC6 bt */
L_0C0BBAC8: BLKS(0x0C0BBAC8u);
	r0 = 0xC0BBAECu;  /* 0C0BBAC8 mova @(disp,pc),r0 */
	IF(0x0C0BBACAu); r6 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C0BBACCu, 2);  /* 0C0BBACA mov.b @(r0,Rm),Rn */
	r6 = r6 & 0xFF;  /* 0C0BBACC extu.b Rm,Rn */
	IF(0x0C0BBACEu); { u32 tv_ = (r6 + 0x0C0BBAD2u); u32 t_ = PHYS(tv_); IF(0x0C0BBAD0u); ; /* slot nop */ JRGN(tv_); UPD(t_, 4); switch (t_) { case 0x0C0BBB00u: goto L_0C0BBB00; case 0x0C0BBB30u: goto L_0C0BBB30; case 0x0C0BBB50u: goto L_0C0BBB50; default: JUMPD(tv_); } }  /* 0C0BBACE braf Rn */
L_0C0BBB00: BLKS(0x0C0BBB00u);
	r7 = 0x54u;  /* 0C0BBB00 mov #imm,Rn */
	IF(0x0C0BBB02u); MACL = r4 * r7;  /* 0C0BBB02 mul.l Rm,Rn */
	r2 = 0xC297B40u; UPD(0x0C0BBB06u, 4);  /* 0C0BBB04 mov.l @(disp,pc),Rn */
	IF(0x0C0BBB06u); r3 = MACL;  /* 0C0BBB06 sts macl,Rn */
	r3 += r2;  /* 0C0BBB08 add Rm,Rn */
	r2 = r3;  /* 0C0BBB0A mov Rm,Rn */
	r2 += 0x51u;  /* 0C0BBB0C add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C0BBB10u, 5);  /* 0C0BBB0E mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C0BBB10 add #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C0BBB12 extu.b Rm,Rn */
	W8(r2, r1); UPD(0x0C0BBB16u, 3);  /* 0C0BBB14 mov.b Rm,@Rn */
	T = r0 == 0x4u;  /* 0C0BBB16 cmp/eq #imm,r0 */
	UPD(0x0C0BBB18u, 1);
L_0C0BBB18: BLKS(0x0C0BBB18u);
	if (!T) { UPD(0x0C0BBAACu, 3); goto L_0C0BBAAC; }  /* 0C0BBB18 bf */
L_0C0BBB1A: BLKS(0x0C0BBB1Au);
	r7 = 0x0u;  /* 0C0BBB1A mov #imm,Rn */
	W8(r2, r7); UPD(0x0C0BBB1Eu, 2);  /* 0C0BBB1C mov.b Rm,@Rn */
	r2 = R32(r3 + 0x10u); UPD(0x0C0BBB20u, 1);  /* 0C0BBB1E mov.l @(disp,Rm),Rn */
	r2 += 0x1u;  /* 0C0BBB20 add #imm,Rn */
	W32(r3 + 0x10u, r2); UPD(0x0C0BBB24u, 2);  /* 0C0BBB22 mov.l Rm,@(disp,Rn) */
	r6 = 0xC0B9DF0u; UPD(0x0C0BBB26u, 1);  /* 0C0BBB24 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C0BBB26 mov Rm,Rn */
	IF(0x0C0BBB28u); { u32 tv_ = r6; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0B9DF0u: TAIL(blk_f_0C0B9DF0); default: JUMPD(tv_); } }  /* 0C0BBB28 jmp @Rn */
L_0C0BBB30: BLKS(0x0C0BBB30u);
	r3 = 0x54u;  /* 0C0BBB30 mov #imm,Rn */
	IF(0x0C0BBB32u); MACL = r4 * r3;  /* 0C0BBB32 mul.l Rm,Rn */
	r0 = 0xC297B40u; UPD(0x0C0BBB36u, 4);  /* 0C0BBB34 mov.l @(disp,pc),Rn */
	IF(0x0C0BBB36u); r3 = MACL;  /* 0C0BBB36 sts macl,Rn */
	r3 += r0;  /* 0C0BBB38 add Rm,Rn */
	r2 = r3;  /* 0C0BBB3A mov Rm,Rn */
	r2 += 0x51u;  /* 0C0BBB3C add #imm,Rn */
	r5 = (u32)(s32)(s8)R8(r2); UPD(0x0C0BBB40u, 5);  /* 0C0BBB3E mov.b @Rm,Rn */
	r5 += 0x1u;  /* 0C0BBB40 add #imm,Rn */
	r0 = r5 & 0xFF;  /* 0C0BBB42 extu.b Rm,Rn */
	W8(r2, r5); UPD(0x0C0BBB46u, 3);  /* 0C0BBB44 mov.b Rm,@Rn */
	{ T = r0 == 0x8u; /* slot cmp/eq #imm,r0 */ UPD(0x0C0BBB18u, 3); goto L_0C0BBB18; }  /* 0C0BBB46 bra */
L_0C0BBB50: BLKS(0x0C0BBB50u);
	r6 = 0x54u;  /* 0C0BBB50 mov #imm,Rn */
	IF(0x0C0BBB52u); MACL = r4 * r6;  /* 0C0BBB52 mul.l Rm,Rn */
	r7 = 0xC297B40u; UPD(0x0C0BBB56u, 4);  /* 0C0BBB54 mov.l @(disp,pc),Rn */
	IF(0x0C0BBB56u); r6 = MACL;  /* 0C0BBB56 sts macl,Rn */
	r6 += r7;  /* 0C0BBB58 add Rm,Rn */
	r4 = r6;  /* 0C0BBB5A mov Rm,Rn */
	r4 += 0x40u;  /* 0C0BBB5C add #imm,Rn */
	r0 = R32(r4); UPD(0x0C0BBB60u, 5);  /* 0C0BBB5E mov.l @Rm,Rn */
	r2 = r0;  /* 0C0BBB60 mov Rm,Rn */
	IF(0x0C0BBB62u); r2 >>= 8;  /* 0C0BBB62 shlr8 Rn */
	r5 = r2 & 0xFF;  /* 0C0BBB64 extu.b Rm,Rn */
	IF(0x0C0BBB66u); r5 <<= 16;  /* 0C0BBB66 shll16 Rn */
	IF(0x0C0BBB68u); T = r5 & 1; r5 >>= 1;  /* 0C0BBB68 shlr Rn */
	r3 = 0xFFFFFF00u; UPD(0x0C0BBB6Cu, 6);  /* 0C0BBB6A mov.w @(disp,pc),Rn */
	IF(0x0C0BBB6Cu); r5 >>= 8;  /* 0C0BBB6C shlr8 Rn */
	r5 &= r3;  /* 0C0BBB6E and Rm,Rn */
	r3 = r0 & 0xFF;  /* 0C0BBB70 extu.b Rm,Rn */
	IF(0x0C0BBB72u); r3 <<= 8;  /* 0C0BBB72 shll8 Rn */
	IF(0x0C0BBB74u); T = r3 & 1; r3 >>= 1;  /* 0C0BBB74 shlr Rn */
	IF(0x0C0BBB76u); r3 >>= 8;  /* 0C0BBB76 shlr8 Rn */
	r3 |= r5;  /* 0C0BBB78 or Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C0BBB7A tst Rm,Rn */
	{ u32 c_ = !T; W32(r4, r3); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C0BBAACu, 11); goto L_0C0BBAAC; } UPD(0x0C0BBB80u, 1); goto L_0C0BBB80; }  /* 0C0BBB7C bf/s */
L_0C0BBB80: BLKS(0x0C0BBB80u);
	{ W32(r6, r3); /* slot mov.l Rm,@Rn */ UPD(0x0C0BBAACu, 3); goto L_0C0BBAAC; }  /* 0C0BBB80 bra */
L_0C0BBB90: BLKS(0x0C0BBB90u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0BBAA2u, 3); goto L_0C0BBAA2; }  /* 0C0BBB90 bra */
L_0C0BBBA0: BLKS(0x0C0BBBA0u);
	{ IF(0x0C0BBBA2u); ; /* slot nop */ UPD(0x0C0BBA8Cu, 3); goto L_0C0BBA8C; }  /* 0C0BBBA0 bra */
}

void blk_f_0C0BBBB0(sh3_t *c)
{
	LOCALS;
L_0C0BBBB0: BLKS(0x0C0BBBB0u);
	r7 = (u32)(s32)(s16)r4;  /* 0C0BBBB0 exts.w Rm,Rn */
	r2 = 0x54u;  /* 0C0BBBB2 mov #imm,Rn */
	IF(0x0C0BBBB4u); MACL = r7 * r2;  /* 0C0BBBB4 mul.l Rm,Rn */
	r3 = 0xC297B40u; UPD(0x0C0BBBB8u, 5);  /* 0C0BBBB6 mov.l @(disp,pc),Rn */
	r1 = 0x5u;  /* 0C0BBBB8 mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0BBBBCu, 2);  /* 0C0BBBBA mov.l Rm,@-Rn */
	IF(0x0C0BBBBCu); r4 = MACL;  /* 0C0BBBBC sts macl,Rn */
	r4 += r3;  /* 0C0BBBBE add Rm,Rn */
	r6 = 0x40000000u; UPD(0x0C0BBBC2u, 3);  /* 0C0BBBC0 mov.l @(disp,pc),Rn */
	r3 = 0x4u;  /* 0C0BBBC2 mov #imm,Rn */
	r0 = R32(r4 + 0xCu); UPD(0x0C0BBBC6u, 2);  /* 0C0BBBC4 mov.l @(disp,Rm),Rn */
	r14 = r15;  /* 0C0BBBC6 mov Rm,Rn */
	W32(r4, r6); UPD(0x0C0BBBCAu, 2);  /* 0C0BBBC8 mov.l Rm,@Rn */
	IF(0x0C0BBBCAu); r0 <<= 2;  /* 0C0BBBCA shll2 Rn */
	W32(r4 + 0x4u, r1); UPD(0x0C0BBBCEu, 2);  /* 0C0BBBCC mov.l Rm,@(disp,Rn) */
	r5 = 0xC1F7FA4u; UPD(0x0C0BBBD0u, 1);  /* 0C0BBBCE mov.l @(disp,pc),Rn */
	IF(0x0C0BBBD0u); r6 = R32(r0 + r5); UPD(0x0C0BBBD2u, 1);  /* 0C0BBBD0 mov.l @(r0,Rm),Rn */
	r5 = 0x0u;  /* 0C0BBBD2 mov #imm,Rn */
	W32(r4 + 0x8u, r6); UPD(0x0C0BBBD6u, 2);  /* 0C0BBBD4 mov.l Rm,@(disp,Rn) */
	W32(r4 + 0x10u, r5); UPD(0x0C0BBBD8u, 1);  /* 0C0BBBD6 mov.l Rm,@(disp,Rn) */
	IF(0x0C0BBBD8u); ARG0(0x463Du); { s32 s_ = (s32)r3; if (s_ >= 0) r6 <<= (s_ & 31); else if ((s_ & 31) == 0) r6 = 0; else r6 >>= ((~s_ & 31) + 1); }  /* 0C0BBBD8 shld Rm,Rn */
	r7 = 0xC1F7E08u; UPD(0x0C0BBBDCu, 2);  /* 0C0BBBDA mov.l @(disp,pc),Rn */
	r0 = R32(r7 + 0x2Cu); UPD(0x0C0BBBDEu, 1);  /* 0C0BBBDC mov.l @(disp,Rm),Rn */
	W32(r4 + 0x24u, r0); UPD(0x0C0BBBE0u, 1);  /* 0C0BBBDE mov.l Rm,@(disp,Rn) */
	r0 = R32(r7 + 0x28u); UPD(0x0C0BBBE2u, 1);  /* 0C0BBBE0 mov.l @(disp,Rm),Rn */
	W32(r4 + 0x14u, r0); UPD(0x0C0BBBE4u, 1);  /* 0C0BBBE2 mov.l Rm,@(disp,Rn) */
	IF(0x0C0BBBE4u); r1 = R32(r0 + r6); UPD(0x0C0BBBE6u, 1);  /* 0C0BBBE4 mov.l @(r0,Rm),Rn */
	W32(r4 + 0x18u, r1); UPD(0x0C0BBBE8u, 1);  /* 0C0BBBE6 mov.l Rm,@(disp,Rn) */
	r2 = R32(r1); UPD(0x0C0BBBEAu, 1);  /* 0C0BBBE8 mov.l @Rm,Rn */
	W32(r4 + 0x1Cu, r2); UPD(0x0C0BBBECu, 1);  /* 0C0BBBEA mov.l Rm,@(disp,Rn) */
	r7 = R32(r1 + 0x4u); UPD(0x0C0BBBEEu, 1);  /* 0C0BBBEC mov.l @(disp,Rm),Rn */
	r6 = 0xC2380C4u; UPD(0x0C0BBBF0u, 1);  /* 0C0BBBEE mov.l @(disp,pc),Rn */
	W32(r4 + 0x20u, r7); UPD(0x0C0BBBF2u, 1);  /* 0C0BBBF0 mov.l Rm,@(disp,Rn) */
	r3 = (u32)(s32)(s16)R16(r6); UPD(0x0C0BBBF4u, 1);  /* 0C0BBBF2 mov.w @Rm,Rn */
	r4 += 0x4Eu;  /* 0C0BBBF4 add #imm,Rn */
	W16(r4, r3); UPD(0x0C0BBBF8u, 2);  /* 0C0BBBF6 mov.w Rm,@Rn */
	r4 += 0xFFFFFFF6u;  /* 0C0BBBF8 add #imm,Rn */
	W16(r4, r5); UPD(0x0C0BBBFCu, 2);  /* 0C0BBBFA mov.w Rm,@Rn */
	r1 = 0x207C0C0u; UPD(0x0C0BBBFEu, 1);  /* 0C0BBBFC mov.l @(disp,pc),Rn */
	r4 += 0xFFFFFFBCu;  /* 0C0BBBFE add #imm,Rn */
	W32(r4 + 0x3Cu, r1); UPD(0x0C0BBC02u, 2);  /* 0C0BBC00 mov.l Rm,@(disp,Rn) */
	r0 = 0x808080u; UPD(0x0C0BBC04u, 1);  /* 0C0BBC02 mov.l @(disp,pc),Rn */
	r4 += 0x40u;  /* 0C0BBC04 add #imm,Rn */
	W32(r4, r0); UPD(0x0C0BBC08u, 2);  /* 0C0BBC06 mov.l Rm,@Rn */
	r15 = r14;  /* 0C0BBC08 mov Rm,Rn */
	IF(0x0C0BBC0Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0BBC0A rts */
}

/* FUN_0c0bbc30 */
void blk_f_0C0BBC30(sh3_t *c)
{
	LOCALS;
L_0C0BBC30: BLKS(0x0C0BBC30u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0BBC32u, 1);  /* 0C0BBC30 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0BBC34u, 1);  /* 0C0BBC32 mov.l Rm,@-Rn */
	r8 = 0x0u;  /* 0C0BBC34 mov #imm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0BBC38u, 2);  /* 0C0BBC36 mov.l Rm,@-Rn */
	r9 = 0x0u;  /* 0C0BBC38 mov #imm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0BBC3Cu, 2);  /* 0C0BBC3A mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0BBC3Eu, 1);  /* 0C0BBC3C mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0BBC40u, 1);  /* 0C0BBC3E mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0BBC42u, 1);  /* 0C0BBC40 mov.l Rm,@-Rn */
	r10 = 0xC297B40u; UPD(0x0C0BBC44u, 1);  /* 0C0BBC42 mov.l @(disp,pc),Rn */
	IF(0x0C0BBC44u); r15 -= 4; W32(r15, PR); UPD(0x0C0BBC46u, 1);  /* 0C0BBC44 sts.l pr,@-Rn */
	r13 = 0xC2289E8u; UPD(0x0C0BBC48u, 1);  /* 0C0BBC46 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0BBC48 mov Rm,Rn */
	r12 = 0xC073B10u; UPD(0x0C0BBC4Cu, 2);  /* 0C0BBC4A mov.l @(disp,pc),Rn */
	r11 = 0xC3C86B0u; UPD(0x0C0BBC4Eu, 1);  /* 0C0BBC4C mov.l @(disp,pc),Rn */
	IF(0x0C0BBC4Eu); ;  /* 0C0BBC4E nop */
	UPD(0x0C0BBC50u, 1);
L_0C0BBC50: BLKS(0x0C0BBC50u);
	r7 = r8;  /* 0C0BBC50 mov Rm,Rn */
	r7 += r10;  /* 0C0BBC52 add Rm,Rn */
	r1 = R32(r7); UPD(0x0C0BBC56u, 3);  /* 0C0BBC54 mov.l @Rm,Rn */
	r0 = 0x40000000u; UPD(0x0C0BBC58u, 1);  /* 0C0BBC56 mov.l @(disp,pc),Rn */
	T = (r1 & r0) == 0;  /* 0C0BBC58 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BBC80u, 4); goto L_0C0BBC80; } UPD(0x0C0BBC5Eu, 1); goto L_0C0BBC5E; }  /* 0C0BBC5A bf/s */
L_0C0BBC5E: BLKS(0x0C0BBC5Eu);
	r5 = r9;  /* 0C0BBC5E mov Rm,Rn */
	r5 += 0x1u;  /* 0C0BBC60 add #imm,Rn */
	r4 = 0xFFu; UPD(0x0C0BBC64u, 3);  /* 0C0BBC62 mov.w @(disp,pc),Rn */
	r9 = (u32)(s32)(s16)r5;  /* 0C0BBC64 exts.w Rm,Rn */
	T = (s32)r9 > (s32)r4;  /* 0C0BBC66 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r8 += 0x54u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0BBC50u, 5); goto L_0C0BBC50; } goto L_0C0BBC6C; }  /* 0C0BBC68 bf/s */
L_0C0BBC6C: BLKS(0x0C0BBC6Cu);
	r15 = r14;  /* 0C0BBC6C mov Rm,Rn */
	IF(0x0C0BBC6Eu); PR = R32(r15); r15 += 4; UPD(0x0C0BBC70u, 3);  /* 0C0BBC6E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0BBC72u, 1);  /* 0C0BBC70 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0BBC74u, 1);  /* 0C0BBC72 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0BBC76u, 1);  /* 0C0BBC74 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0BBC78u, 1);  /* 0C0BBC76 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0BBC7Au, 1);  /* 0C0BBC78 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0BBC7Cu, 1);  /* 0C0BBC7A mov.l @Rm+,Rn */
	IF(0x0C0BBC7Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0BBC7C rts */
L_0C0BBC80: BLKS(0x0C0BBC80u);
	r3 = R32(r7 + 0x1Cu); UPD(0x0C0BBC82u, 1);  /* 0C0BBC80 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0BBC82 add #imm,Rn */
	W32(r13, r3); UPD(0x0C0BBC86u, 2);  /* 0C0BBC84 mov.l Rm,@Rn */
	r2 = R32(r7 + 0x24u); UPD(0x0C0BBC88u, 1);  /* 0C0BBC86 mov.l @(disp,Rm),Rn */
	W32(r15, r0); UPD(0x0C0BBC8Au, 1);  /* 0C0BBC88 mov.l Rm,@Rn */
	W32(r11, r2); UPD(0x0C0BBC8Cu, 1);  /* 0C0BBC8A mov.l Rm,@Rn */
	r4 = R32(r7 + 0x3Cu); UPD(0x0C0BBC8Eu, 1);  /* 0C0BBC8C mov.l @(disp,Rm),Rn */
	r5 = R32(r7 + 0x28u); UPD(0x0C0BBC90u, 1);  /* 0C0BBC8E mov.l @(disp,Rm),Rn */
	r6 = R32(r7 + 0x2Cu); UPD(0x0C0BBC92u, 1);  /* 0C0BBC90 mov.l @(disp,Rm),Rn */
	r7 += 0x40u;  /* 0C0BBC92 add #imm,Rn */
	IF(0x0C0BBC94u); { u32 t_ = r12; PR = 0x0C0BBC98u; r7 = R32(r7); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C073B10, 0x0C073B10u, 0x0C0BBC98u); }  /* 0C0BBC94 jsr @Rn */
L_0C0BBC98: BLKS(0x0C0BBC98u);
	{ r15 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C0BBC5Eu, 3); goto L_0C0BBC5E; }  /* 0C0BBC98 bra */
}

/* FUN_0c0bbd90 */
void blk_f_0C0BBD90(sh3_t *c)
{
	LOCALS;
L_0C0BBD90: BLKS(0x0C0BBD90u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0BBD92u, 1);  /* 0C0BBD90 mov.l Rm,@-Rn */
	r2 = 0x0u;  /* 0C0BBD92 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0BBD96u, 2);  /* 0C0BBD94 mov.l Rm,@-Rn */
	r8 = 0x0u;  /* 0C0BBD96 mov #imm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0BBD9Au, 2);  /* 0C0BBD98 mov.l Rm,@-Rn */
	r9 = 0x0u;  /* 0C0BBD9A mov #imm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0BBD9Eu, 2);  /* 0C0BBD9C mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0BBDA0u, 1);  /* 0C0BBD9E mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0BBDA2u, 1);  /* 0C0BBDA0 mov.l Rm,@-Rn */
	r0 = 0xC2B1A4Au; UPD(0x0C0BBDA4u, 1);  /* 0C0BBDA2 mov.l @(disp,pc),Rn */
	IF(0x0C0BBDA4u); r15 -= 4; W32(r15, PR); UPD(0x0C0BBDA6u, 1);  /* 0C0BBDA4 sts.l pr,@-Rn */
	r11 = r0;  /* 0C0BBDA6 mov Rm,Rn */
	r1 = (u32)(s32)(s16)R16(r0); UPD(0x0C0BBDAAu, 2);  /* 0C0BBDA8 mov.w @Rm,Rn */
	r14 = r15;  /* 0C0BBDAA mov Rm,Rn */
	r4 = 0xC2974C6u; UPD(0x0C0BBDAEu, 2);  /* 0C0BBDAC mov.l @(disp,pc),Rn */
	r10 = 0xC297B40u; UPD(0x0C0BBDB0u, 1);  /* 0C0BBDAE mov.l @(disp,pc),Rn */
	r12 = 0xC1F7E84u; UPD(0x0C0BBDB2u, 1);  /* 0C0BBDB0 mov.l @(disp,pc),Rn */
	W16(r4, r1); UPD(0x0C0BBDB4u, 1);  /* 0C0BBDB2 mov.w Rm,@Rn */
	W16(r0, r2); UPD(0x0C0BBDB6u, 1);  /* 0C0BBDB4 mov.w Rm,@Rn */
	IF(0x0C0BBDB6u); ;  /* 0C0BBDB6 nop */
	UPD(0x0C0BBDB8u, 1);
L_0C0BBDB8: BLKS(0x0C0BBDB8u);
	r2 = r8;  /* 0C0BBDB8 mov Rm,Rn */
	r2 += r10;  /* 0C0BBDBA add Rm,Rn */
	r0 = R32(r2); UPD(0x0C0BBDBEu, 3);  /* 0C0BBDBC mov.l @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0BBDBE tst Rm,Rn */
	if (!T) { UPD(0x0C0BBDF0u, 4); goto L_0C0BBDF0; }  /* 0C0BBDC0 bf */
L_0C0BBDC2: BLKS(0x0C0BBDC2u);
	r7 = r9;  /* 0C0BBDC2 mov Rm,Rn */
	UPD(0x0C0BBDC4u, 1);
L_0C0BBDC4: BLKS(0x0C0BBDC4u);
	r7 += 0x1u;  /* 0C0BBDC4 add #imm,Rn */
	r6 = 0xFFu; UPD(0x0C0BBDC8u, 2);  /* 0C0BBDC6 mov.w @(disp,pc),Rn */
	r9 = (u32)(s32)(s16)r7;  /* 0C0BBDC8 exts.w Rm,Rn */
	T = (s32)r9 > (s32)r6;  /* 0C0BBDCA cmp/gt Rm,Rn */
	{ u32 c_ = !T; r8 += 0x54u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0BBDB8u, 5); goto L_0C0BBDB8; } goto L_0C0BBDD0; }  /* 0C0BBDCC bf/s */
L_0C0BBDD0: BLKS(0x0C0BBDD0u);
	r15 = r14;  /* 0C0BBDD0 mov Rm,Rn */
	IF(0x0C0BBDD2u); PR = R32(r15); r15 += 4; UPD(0x0C0BBDD4u, 3);  /* 0C0BBDD2 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0BBDD6u, 1);  /* 0C0BBDD4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0BBDD8u, 1);  /* 0C0BBDD6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0BBDDAu, 1);  /* 0C0BBDD8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0BBDDCu, 1);  /* 0C0BBDDA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0BBDDEu, 1);  /* 0C0BBDDC mov.l @Rm+,Rn */
	IF(0x0C0BBDDEu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0BBDDE rts */
L_0C0BBDF0: BLKS(0x0C0BBDF0u);
	r0 = R32(r2 + 0x4u); UPD(0x0C0BBDF2u, 1);  /* 0C0BBDF0 mov.l @(disp,Rm),Rn */
	r4 = r9;  /* 0C0BBDF2 mov Rm,Rn */
	IF(0x0C0BBDF4u); r0 <<= 2;  /* 0C0BBDF4 shll2 Rn */
	r5 = (u32)(s32)(s16)R16(r11); UPD(0x0C0BBDF8u, 3);  /* 0C0BBDF6 mov.w @Rm,Rn */
	IF(0x0C0BBDF8u); r3 = R32(r0 + r12); UPD(0x0C0BBDFAu, 1);  /* 0C0BBDF8 mov.l @(r0,Rm),Rn */
	r5 += 0x1u;  /* 0C0BBDFA add #imm,Rn */
	IF(0x0C0BBDFCu); { u32 t_ = r3; PR = 0x0C0BBE00u; W16(r11, r5); /* slot mov.w Rm,@Rn */ UPD(t_, 3); CALLD(t_, 0x0C0BBE00u); }  /* 0C0BBDFC jsr @Rn */
L_0C0BBE00: BLKS(0x0C0BBE00u);
	{ r7 = r9; /* slot mov Rm,Rn */ UPD(0x0C0BBDC4u, 3); goto L_0C0BBDC4; }  /* 0C0BBE00 bra */
}

/* FUN_0c0bbf10 */
void blk_f_0C0BBF10(sh3_t *c)
{
	LOCALS;
L_0C0BBF10: BLKS(0x0C0BBF10u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0BBF12u, 1);  /* 0C0BBF10 mov.l Rm,@-Rn */
	r0 = 0xFu;  /* 0C0BBF12 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0BBF16u, 2);  /* 0C0BBF14 mov.l Rm,@-Rn */
	r8 = r4;  /* 0C0BBF16 mov Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0BBF1Au, 2);  /* 0C0BBF18 mov.l Rm,@-Rn */
	r4 = (u32)(s32)(s8)r6;  /* 0C0BBF1A exts.b Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0BBF1Eu, 2);  /* 0C0BBF1C mov.l Rm,@-Rn */
	r10 = 0xFFFFFFEBu;  /* 0C0BBF1E mov #imm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0BBF22u, 2);  /* 0C0BBF20 mov.l Rm,@-Rn */
	r7 = 0x0u;  /* 0C0BBF22 mov #imm,Rn */
	r12 = r5;  /* 0C0BBF24 mov Rm,Rn */
	r5 = 0xFEA00000u; UPD(0x0C0BBF28u, 3);  /* 0C0BBF26 mov.l @(disp,pc),Rn */
	r6 = 0x0u;  /* 0C0BBF28 mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0BBF2Cu, 2);  /* 0C0BBF2A mov.l Rm,@-Rn */
	r5 += r12;  /* 0C0BBF2C add Rm,Rn */
	IF(0x0C0BBF2Eu); r15 -= 4; W32(r15, PR); UPD(0x0C0BBF30u, 2);  /* 0C0BBF2E sts.l pr,@-Rn */
	IF(0x0C0BBF30u); ARG0(0x45ACu); { s32 s_ = (s32)r10; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = (u32)((s32)r5 >> 31); else r5 = (u32)((s32)r5 >> ((~s_ & 31) + 1)); }  /* 0C0BBF30 shad Rm,Rn */
	r9 = 0xC286318u; UPD(0x0C0BBF34u, 2);  /* 0C0BBF32 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0BBF34 mov Rm,Rn */
	r11 = 0xC2398A0u; UPD(0x0C0BBF38u, 2);  /* 0C0BBF36 mov.l @(disp,pc),Rn */
	r5 &= r0;  /* 0C0BBF38 and Rm,Rn */
	r3 = 0x0u;  /* 0C0BBF3A mov #imm,Rn */
	UPD(0x0C0BBF3Cu, 2);
L_0C0BBF3C: BLKS(0x0C0BBF3Cu);
	r2 = r3;  /* 0C0BBF3C mov Rm,Rn */
	r2 += r9;  /* 0C0BBF3E add Rm,Rn */
	r0 = R32(r2); UPD(0x0C0BBF42u, 3);  /* 0C0BBF40 mov.l @Rm,Rn */
	r1 = 0xFFFFFFE3u;  /* 0C0BBF42 mov #imm,Rn */
	IF(0x0C0BBF44u); ARG0(0x401Cu); { s32 s_ = (s32)r1; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = (u32)((s32)r0 >> 31); else r0 = (u32)((s32)r0 >> ((~s_ & 31) + 1)); }  /* 0C0BBF44 shad Rm,Rn */
	r2 += 0x42u;  /* 0C0BBF46 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C0BBF4Au, 4);  /* 0C0BBF48 mov.b @Rm,Rn */
	r0 &= 0x1u;  /* 0C0BBF4A and #imm,r0 */
	r1 = r1 & 0xFF;  /* 0C0BBF4C extu.b Rm,Rn */
	T = (s32)r1 > (s32)r4;  /* 0C0BBF4E cmp/gt Rm,Rn */
	IF(0x0C0BBF50u); r1 = T;  /* 0C0BBF50 movt Rn */
	r0 &= r1;  /* 0C0BBF52 and Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0BBF54 tst Rm,Rn */
	{ u32 c_ = T; r2 += 0xFFFFFFBEu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0BBF74u, 9); goto L_0C0BBF74; } goto L_0C0BBF5A; }  /* 0C0BBF56 bt/s */
L_0C0BBF5A: BLKS(0x0C0BBF5Au);
	r0 = R32(r2 + 0x8u); UPD(0x0C0BBF5Cu, 2);  /* 0C0BBF5A mov.l @(disp,Rm),Rn */
	r0 += r8;  /* 0C0BBF5C add Rm,Rn */
	IF(0x0C0BBF5Eu); ARG0(0x40ACu); { s32 s_ = (s32)r10; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = (u32)((s32)r0 >> 31); else r0 = (u32)((s32)r0 >> ((~s_ & 31) + 1)); }  /* 0C0BBF5E shad Rm,Rn */
	r0 &= 0xFu;  /* 0C0BBF60 and #imm,r0 */
	r2 = 0x4u;  /* 0C0BBF62 mov #imm,Rn */
	r0 += r6;  /* 0C0BBF64 add Rm,Rn */
	IF(0x0C0BBF66u); ARG0(0x402Du); { s32 s_ = (s32)r2; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C0BBF66 shld Rm,Rn */
	r0 += r5;  /* 0C0BBF68 add Rm,Rn */
	IF(0x0C0BBF6Au); r0 <<= 2;  /* 0C0BBF6A shll2 Rn */
	IF(0x0C0BBF6Cu); r2 = R32(r0 + r11); UPD(0x0C0BBF6Eu, 9);  /* 0C0BBF6C mov.l @(r0,Rm),Rn */
	T = (r2 & r2) == 0;  /* 0C0BBF6E tst Rm,Rn */
	{ u32 c_ = !T; r1 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BBF86u, 4); goto L_0C0BBF86; } UPD(0x0C0BBF74u, 1); goto L_0C0BBF74; }  /* 0C0BBF70 bf/s */
L_0C0BBF74: BLKS(0x0C0BBF74u);
	r2 = r7;  /* 0C0BBF74 mov Rm,Rn */
	r2 += 0x1u;  /* 0C0BBF76 add #imm,Rn */
	r7 = (u32)(s32)(s16)r2;  /* 0C0BBF78 exts.w Rm,Rn */
	r0 = 0x7u;  /* 0C0BBF7A mov #imm,Rn */
	r6 += 0x10u;  /* 0C0BBF7C add #imm,Rn */
	T = (s32)r7 > (s32)r0;  /* 0C0BBF7E cmp/gt Rm,Rn */
	{ u32 c_ = !T; r3 += 0x4Cu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0BBF3Cu, 9); goto L_0C0BBF3C; } goto L_0C0BBF84; }  /* 0C0BBF80 bf/s */
L_0C0BBF84: BLKS(0x0C0BBF84u);
	r1 = 0x1u;  /* 0C0BBF84 mov #imm,Rn */
	UPD(0x0C0BBF86u, 2);
L_0C0BBF86: BLKS(0x0C0BBF86u);
	r3 = (u32)(s32)(s8)r1;  /* 0C0BBF86 exts.b Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C0BBF88 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BBFDEu, 5); goto L_0C0BBFDE; } goto L_0C0BBF8E; }  /* 0C0BBF8A bt/s */
L_0C0BBF8E: BLKS(0x0C0BBF8Eu);
	r4 = 0x5FFFFFu; UPD(0x0C0BBF90u, 2);  /* 0C0BBF8E mov.l @(disp,pc),Rn */
	T = (s32)r8 > (s32)r4;  /* 0C0BBF90 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BBFDCu, 4); goto L_0C0BBFDC; } goto L_0C0BBF96; }  /* 0C0BBF92 bf/s */
L_0C0BBF96: BLKS(0x0C0BBF96u);
	r4 = 0xC29D1D8u; UPD(0x0C0BBF98u, 2);  /* 0C0BBF96 mov.l @(disp,pc),Rn */
	r6 = 0x0u;  /* 0C0BBF98 mov #imm,Rn */
	r7 = 0x0u;  /* 0C0BBF9A mov #imm,Rn */
	UPD(0x0C0BBF9Cu, 2);
L_0C0BBF9C: BLKS(0x0C0BBF9Cu);
	r3 = r7;  /* 0C0BBF9C mov Rm,Rn */
	r3 += r4;  /* 0C0BBF9E add Rm,Rn */
	r5 = R32(r3); UPD(0x0C0BBFA2u, 3);  /* 0C0BBFA0 mov.l @Rm,Rn */
	T = (r5 & r5) == 0;  /* 0C0BBFA2 tst Rm,Rn */
	if (T) { UPD(0x0C0BBFCAu, 4); goto L_0C0BBFCA; }  /* 0C0BBFA4 bt */
L_0C0BBFA6: BLKS(0x0C0BBFA6u);
	r2 = R32(r3 + 0x10u); UPD(0x0C0BBFA8u, 1);  /* 0C0BBFA6 mov.l @(disp,Rm),Rn */
	r0 = r8;  /* 0C0BBFA8 mov Rm,Rn */
	r0 -= r2;  /* 0C0BBFAA sub Rm,Rn */
	r1 = (r0 >> 16) | (r0 << 16);  /* 0C0BBFAC swap.w Rm,Rn */
	r11 = R32(r3 + 0x14u); UPD(0x0C0BBFB0u, 4);  /* 0C0BBFAE mov.l @(disp,Rm),Rn */
	r5 = (u32)(s32)(s16)r1;  /* 0C0BBFB0 exts.w Rm,Rn */
	IF(0x0C0BBFB2u); MACL = r5 * r5;  /* 0C0BBFB2 mul.l Rm,Rn */
	r10 = r12;  /* 0C0BBFB4 mov Rm,Rn */
	r10 -= r11;  /* 0C0BBFB6 sub Rm,Rn */
	r3 = (r10 >> 16) | (r10 << 16);  /* 0C0BBFB8 swap.w Rm,Rn */
	IF(0x0C0BBFBAu); r9 = MACL;  /* 0C0BBFBA sts macl,Rn */
	r0 = (u32)(s32)(s16)r3;  /* 0C0BBFBC exts.w Rm,Rn */
	IF(0x0C0BBFBEu); MACL = r0 * r0;  /* 0C0BBFBE mul.l Rm,Rn */
	r10 = 0x2400u; UPD(0x0C0BBFC2u, 11);  /* 0C0BBFC0 mov.w @(disp,pc),Rn */
	IF(0x0C0BBFC2u); r11 = MACL;  /* 0C0BBFC2 sts macl,Rn */
	r9 += r11;  /* 0C0BBFC4 add Rm,Rn */
	T = (s32)r10 > (s32)r9;  /* 0C0BBFC6 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C0BBFF0u, 6); goto L_0C0BBFF0; }  /* 0C0BBFC8 bt */
L_0C0BBFCA: BLKS(0x0C0BBFCAu);
	r3 = r6;  /* 0C0BBFCA mov Rm,Rn */
	r6 = 0x2A0u; UPD(0x0C0BBFCEu, 2);  /* 0C0BBFCC mov.w @(disp,pc),Rn */
	r3 += 0x1u;  /* 0C0BBFCE add #imm,Rn */
	r7 += r6;  /* 0C0BBFD0 add Rm,Rn */
	r6 = (u32)(s32)(s16)r3;  /* 0C0BBFD2 exts.w Rm,Rn */
	r5 = 0x1u;  /* 0C0BBFD4 mov #imm,Rn */
	T = (s32)r6 > (s32)r5;  /* 0C0BBFD6 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0BBF9Cu, 8); goto L_0C0BBF9C; }  /* 0C0BBFD8 bf */
L_0C0BBFDA: BLKS(0x0C0BBFDAu);
	r0 = 0x0u;  /* 0C0BBFDA mov #imm,Rn */
	UPD(0x0C0BBFDCu, 1);
L_0C0BBFDC: BLKS(0x0C0BBFDCu);
	r0 ^= 0x1u;  /* 0C0BBFDC xor #imm,r0 */
	UPD(0x0C0BBFDEu, 1);
L_0C0BBFDE: BLKS(0x0C0BBFDEu);
	r15 = r14;  /* 0C0BBFDE mov Rm,Rn */
	IF(0x0C0BBFE0u); PR = R32(r15); r15 += 4; UPD(0x0C0BBFE2u, 2);  /* 0C0BBFE0 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0BBFE4u, 1);  /* 0C0BBFE2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0BBFE6u, 1);  /* 0C0BBFE4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0BBFE8u, 1);  /* 0C0BBFE6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0BBFEAu, 1);  /* 0C0BBFE8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0BBFECu, 1);  /* 0C0BBFEA mov.l @Rm+,Rn */
	IF(0x0C0BBFECu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0BBFEC rts */
L_0C0BBFF0: BLKS(0x0C0BBFF0u);
	r8 = 0xC071C90u; UPD(0x0C0BBFF2u, 1);  /* 0C0BBFF0 mov.l @(disp,pc),Rn */
	r4 = 0x1000u; UPD(0x0C0BBFF4u, 1);  /* 0C0BBFF2 mov.w @(disp,pc),Rn */
	IF(0x0C0BBFF4u); { u32 t_ = r8; PR = 0x0C0BBFF8u; IF(0x0C0BBFF6u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C071C90, 0x0C071C90u, 0x0C0BBFF8u); }  /* 0C0BBFF4 jsr @Rn */
L_0C0BBFF8: BLKS(0x0C0BBFF8u);
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C0BBFDCu, 3); goto L_0C0BBFDC; }  /* 0C0BBFF8 bra */
}

/* FUN_0c0bc020 */
void blk_f_0C0BC020(sh3_t *c)
{
	LOCALS;
L_0C0BC020: BLKS(0x0C0BC020u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0BC022u, 1);  /* 0C0BC020 mov.l Rm,@-Rn */
	r6 = (u32)(s32)(s16)r6;  /* 0C0BC022 exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0BC026u, 2);  /* 0C0BC024 mov.l Rm,@-Rn */
	r0 = 0x5FFFFFu; UPD(0x0C0BC028u, 1);  /* 0C0BC026 mov.l @(disp,pc),Rn */
	IF(0x0C0BC028u); r15 -= 4; W32(r15, PR); UPD(0x0C0BC02Au, 1);  /* 0C0BC028 sts.l pr,@-Rn */
	T = (s32)r4 > (s32)r0;  /* 0C0BC02A cmp/gt Rm,Rn */
	r14 = r15;  /* 0C0BC02C mov Rm,Rn */
	{ u32 c_ = !T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BC07Au, 5); goto L_0C0BC07A; } goto L_0C0BC032; }  /* 0C0BC02E bf/s */
L_0C0BC032: BLKS(0x0C0BC032u);
	r8 = 0xC29D1D8u; UPD(0x0C0BC034u, 2);  /* 0C0BC032 mov.l @(disp,pc),Rn */
	r0 = 0x0u;  /* 0C0BC034 mov #imm,Rn */
	r7 = 0x0u;  /* 0C0BC036 mov #imm,Rn */
	UPD(0x0C0BC038u, 2);
L_0C0BC038: BLKS(0x0C0BC038u);
	r3 = r7;  /* 0C0BC038 mov Rm,Rn */
	r3 += r8;  /* 0C0BC03A add Rm,Rn */
	r2 = R32(r3); UPD(0x0C0BC03Eu, 3);  /* 0C0BC03C mov.l @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C0BC03E tst Rm,Rn */
	if (T) { UPD(0x0C0BC068u, 4); goto L_0C0BC068; }  /* 0C0BC040 bt */
L_0C0BC042: BLKS(0x0C0BC042u);
	r1 = R32(r3 + 0x10u); UPD(0x0C0BC044u, 1);  /* 0C0BC042 mov.l @(disp,Rm),Rn */
	r2 = r4;  /* 0C0BC044 mov Rm,Rn */
	r2 -= r1;  /* 0C0BC046 sub Rm,Rn */
	r1 = (r2 >> 16) | (r2 << 16);  /* 0C0BC048 swap.w Rm,Rn */
	r2 = (u32)(s32)(s16)r1;  /* 0C0BC04A exts.w Rm,Rn */
	r1 = R32(r3 + 0x14u); UPD(0x0C0BC04Eu, 5);  /* 0C0BC04C mov.l @(disp,Rm),Rn */
	MACL = (u32)((s32)(s16)r6 * (s32)(s16)r6);  /* 0C0BC04E muls.w Rm,Rn */
	r3 = r5;  /* 0C0BC050 mov Rm,Rn */
	r3 -= r1;  /* 0C0BC052 sub Rm,Rn */
	r3 = (r3 >> 16) | (r3 << 16);  /* 0C0BC054 swap.w Rm,Rn */
	r1 = (u32)(s32)(s16)r3;  /* 0C0BC056 exts.w Rm,Rn */
	IF(0x0C0BC058u); r3 = MACL;  /* 0C0BC058 sts macl,Rn */
	IF(0x0C0BC05Au); MACL = r2 * r2;  /* 0C0BC05A mul.l Rm,Rn */
	IF(0x0C0BC05Cu); r2 = MACL;  /* 0C0BC05C sts macl,Rn */
	IF(0x0C0BC05Eu); MACL = r1 * r1;  /* 0C0BC05E mul.l Rm,Rn */
	IF(0x0C0BC060u); r1 = MACL;  /* 0C0BC060 sts macl,Rn */
	r2 += r1;  /* 0C0BC062 add Rm,Rn */
	T = (s32)r3 > (s32)r2;  /* 0C0BC064 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C0BC090u, 18); goto L_0C0BC090; }  /* 0C0BC066 bt */
L_0C0BC068: BLKS(0x0C0BC068u);
	r3 = r0;  /* 0C0BC068 mov Rm,Rn */
	r0 = 0x2A0u; UPD(0x0C0BC06Cu, 2);  /* 0C0BC06A mov.w @(disp,pc),Rn */
	r3 += 0x1u;  /* 0C0BC06C add #imm,Rn */
	r7 += r0;  /* 0C0BC06E add Rm,Rn */
	r0 = (u32)(s32)(s16)r3;  /* 0C0BC070 exts.w Rm,Rn */
	r2 = 0x1u;  /* 0C0BC072 mov #imm,Rn */
	T = (s32)r0 > (s32)r2;  /* 0C0BC074 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0BC038u, 8); goto L_0C0BC038; }  /* 0C0BC076 bf */
L_0C0BC078: BLKS(0x0C0BC078u);
	r0 = 0x0u;  /* 0C0BC078 mov #imm,Rn */
	UPD(0x0C0BC07Au, 1);
L_0C0BC07A: BLKS(0x0C0BC07Au);
	r15 = r14;  /* 0C0BC07A mov Rm,Rn */
	IF(0x0C0BC07Cu); PR = R32(r15); r15 += 4; UPD(0x0C0BC07Eu, 2);  /* 0C0BC07C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0BC080u, 1);  /* 0C0BC07E mov.l @Rm+,Rn */
	IF(0x0C0BC080u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0BC080 rts */
L_0C0BC090: BLKS(0x0C0BC090u);
	r8 = 0xC071C90u; UPD(0x0C0BC092u, 1);  /* 0C0BC090 mov.l @(disp,pc),Rn */
	r4 = 0x1000u; UPD(0x0C0BC094u, 1);  /* 0C0BC092 mov.w @(disp,pc),Rn */
	IF(0x0C0BC094u); { u32 t_ = r8; PR = 0x0C0BC098u; IF(0x0C0BC096u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C071C90, 0x0C071C90u, 0x0C0BC098u); }  /* 0C0BC094 jsr @Rn */
L_0C0BC098: BLKS(0x0C0BC098u);
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C0BC07Au, 3); goto L_0C0BC07A; }  /* 0C0BC098 bra */
}

/* FUN_0c0bc0b0 */
void blk_f_0C0BC0B0(sh3_t *c)
{
	LOCALS;
L_0C0BC0B0: BLKS(0x0C0BC0B0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0BC0B2u, 1);  /* 0C0BC0B0 mov.l Rm,@-Rn */
	r6 = (u32)(s32)(s8)r6;  /* 0C0BC0B2 exts.b Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0BC0B6u, 2);  /* 0C0BC0B4 mov.l Rm,@-Rn */
	r8 = r4;  /* 0C0BC0B6 mov Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0BC0BAu, 2);  /* 0C0BC0B8 mov.l Rm,@-Rn */
	r4 = r5;  /* 0C0BC0BA mov Rm,Rn */
	r0 = 0xFEA00000u; UPD(0x0C0BC0BEu, 2);  /* 0C0BC0BC mov.l @(disp,pc),Rn */
	r10 = 0xFFFFFFEBu;  /* 0C0BC0BE mov #imm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0BC0C2u, 2);  /* 0C0BC0C0 mov.l Rm,@-Rn */
	r4 += r0;  /* 0C0BC0C2 add Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0BC0C6u, 2);  /* 0C0BC0C4 mov.l Rm,@-Rn */
	IF(0x0C0BC0C6u); ARG0(0x44ACu); { s32 s_ = (s32)r10; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = (u32)((s32)r4 >> 31); else r4 = (u32)((s32)r4 >> ((~s_ & 31) + 1)); }  /* 0C0BC0C6 shad Rm,Rn */
	r9 = 0xC286318u; UPD(0x0C0BC0CAu, 2);  /* 0C0BC0C8 mov.l @(disp,pc),Rn */
	r0 = 0xFu;  /* 0C0BC0CA mov #imm,Rn */
	r11 = 0xC2398A0u; UPD(0x0C0BC0CEu, 2);  /* 0C0BC0CC mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0BC0CE mov Rm,Rn */
	r7 = 0x0u;  /* 0C0BC0D0 mov #imm,Rn */
	r4 &= r0;  /* 0C0BC0D2 and Rm,Rn */
	r5 = 0x0u;  /* 0C0BC0D4 mov #imm,Rn */
	r3 = 0x0u;  /* 0C0BC0D6 mov #imm,Rn */
	UPD(0x0C0BC0D8u, 5);
L_0C0BC0D8: BLKS(0x0C0BC0D8u);
	r2 = r3;  /* 0C0BC0D8 mov Rm,Rn */
	r2 += r9;  /* 0C0BC0DA add Rm,Rn */
	r0 = R32(r2); UPD(0x0C0BC0DEu, 3);  /* 0C0BC0DC mov.l @Rm,Rn */
	r1 = 0xFFFFFFE3u;  /* 0C0BC0DE mov #imm,Rn */
	IF(0x0C0BC0E0u); ARG0(0x401Cu); { s32 s_ = (s32)r1; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = (u32)((s32)r0 >> 31); else r0 = (u32)((s32)r0 >> ((~s_ & 31) + 1)); }  /* 0C0BC0E0 shad Rm,Rn */
	r2 += 0x42u;  /* 0C0BC0E2 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C0BC0E6u, 4);  /* 0C0BC0E4 mov.b @Rm,Rn */
	r0 &= 0x1u;  /* 0C0BC0E6 and #imm,r0 */
	r1 = r1 & 0xFF;  /* 0C0BC0E8 extu.b Rm,Rn */
	T = (s32)r1 > (s32)r6;  /* 0C0BC0EA cmp/gt Rm,Rn */
	IF(0x0C0BC0ECu); r1 = T;  /* 0C0BC0EC movt Rn */
	r0 &= r1;  /* 0C0BC0EE and Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0BC0F0 tst Rm,Rn */
	{ u32 c_ = T; r2 += 0xFFFFFFBEu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0BC110u, 9); goto L_0C0BC110; } goto L_0C0BC0F6; }  /* 0C0BC0F2 bt/s */
L_0C0BC0F6: BLKS(0x0C0BC0F6u);
	r0 = R32(r2 + 0x8u); UPD(0x0C0BC0F8u, 2);  /* 0C0BC0F6 mov.l @(disp,Rm),Rn */
	r0 += r8;  /* 0C0BC0F8 add Rm,Rn */
	IF(0x0C0BC0FAu); ARG0(0x40ACu); { s32 s_ = (s32)r10; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = (u32)((s32)r0 >> 31); else r0 = (u32)((s32)r0 >> ((~s_ & 31) + 1)); }  /* 0C0BC0FA shad Rm,Rn */
	r0 &= 0xFu;  /* 0C0BC0FC and #imm,r0 */
	r2 = 0x4u;  /* 0C0BC0FE mov #imm,Rn */
	r0 += r5;  /* 0C0BC100 add Rm,Rn */
	IF(0x0C0BC102u); ARG0(0x402Du); { s32 s_ = (s32)r2; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C0BC102 shld Rm,Rn */
	r0 += r4;  /* 0C0BC104 add Rm,Rn */
	IF(0x0C0BC106u); r0 <<= 2;  /* 0C0BC106 shll2 Rn */
	IF(0x0C0BC108u); r2 = R32(r0 + r11); UPD(0x0C0BC10Au, 9);  /* 0C0BC108 mov.l @(r0,Rm),Rn */
	T = (r2 & r2) == 0;  /* 0C0BC10A tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BC122u, 4); goto L_0C0BC122; } UPD(0x0C0BC110u, 1); goto L_0C0BC110; }  /* 0C0BC10C bf/s */
L_0C0BC110: BLKS(0x0C0BC110u);
	r2 = r7;  /* 0C0BC110 mov Rm,Rn */
	r2 += 0x1u;  /* 0C0BC112 add #imm,Rn */
	r7 = (u32)(s32)(s16)r2;  /* 0C0BC114 exts.w Rm,Rn */
	r0 = 0x7u;  /* 0C0BC116 mov #imm,Rn */
	r5 += 0x10u;  /* 0C0BC118 add #imm,Rn */
	T = (s32)r7 > (s32)r0;  /* 0C0BC11A cmp/gt Rm,Rn */
	{ u32 c_ = !T; r3 += 0x4Cu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0BC0D8u, 9); goto L_0C0BC0D8; } goto L_0C0BC120; }  /* 0C0BC11C bf/s */
L_0C0BC120: BLKS(0x0C0BC120u);
	r0 = 0x1u;  /* 0C0BC120 mov #imm,Rn */
	UPD(0x0C0BC122u, 2);
L_0C0BC122: BLKS(0x0C0BC122u);
	r15 = r14;  /* 0C0BC122 mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0BC126u, 2);  /* 0C0BC124 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0BC128u, 1);  /* 0C0BC126 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0BC12Au, 1);  /* 0C0BC128 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0BC12Cu, 1);  /* 0C0BC12A mov.l @Rm+,Rn */
	IF(0x0C0BC12Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0BC12C rts */
}

/* FUN_0c0bc140 */
void blk_f_0C0BC140(sh3_t *c)
{
	LOCALS;
L_0C0BC140: BLKS(0x0C0BC140u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0BC142u, 1);  /* 0C0BC140 mov.l Rm,@-Rn */
	r2 = 0xC2B07FCu; UPD(0x0C0BC144u, 1);  /* 0C0BC142 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0BC144 mov Rm,Rn */
	r0 = R32(r2); UPD(0x0C0BC148u, 2);  /* 0C0BC146 mov.l @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0BC148 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BC174u, 4); goto L_0C0BC174; } goto L_0C0BC14E; }  /* 0C0BC14A bf/s */
L_0C0BC14E: BLKS(0x0C0BC14Eu);
	r2 = 0xFF580000u; UPD(0x0C0BC150u, 2);  /* 0C0BC14E mov.l @(disp,pc),Rn */
	r2 += r4;  /* 0C0BC150 add Rm,Rn */
	IF(0x0C0BC152u); T = (s32)r2 >= 0;  /* 0C0BC152 cmp/pz Rn */
	if (!T) { UPD(0x0C0BC190u, 5); goto L_0C0BC190; }  /* 0C0BC154 bf */
L_0C0BC156: BLKS(0x0C0BC156u);
	r0 = 0x980000u; UPD(0x0C0BC158u, 1);  /* 0C0BC156 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r0;  /* 0C0BC158 cmp/gt Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BC174u, 4); goto L_0C0BC174; } goto L_0C0BC15E; }  /* 0C0BC15A bt/s */
L_0C0BC15E: BLKS(0x0C0BC15Eu);
	r6 = 0xC3C4048u; UPD(0x0C0BC160u, 2);  /* 0C0BC15E mov.l @(disp,pc),Rn */
	r4 = R32(r6); UPD(0x0C0BC162u, 1);  /* 0C0BC160 mov.l @Rm,Rn */
	r3 = 0xFF880000u; UPD(0x0C0BC164u, 1);  /* 0C0BC162 mov.l @(disp,pc),Rn */
	r5 -= r4;  /* 0C0BC164 sub Rm,Rn */
	r5 += r3;  /* 0C0BC166 add Rm,Rn */
	IF(0x0C0BC168u); T = (s32)r5 >= 0;  /* 0C0BC168 cmp/pz Rn */
	if (!T) { UPD(0x0C0BC180u, 6); goto L_0C0BC180; }  /* 0C0BC16A bf */
L_0C0BC16C: BLKS(0x0C0BC16Cu);
	r7 = 0x700000u; UPD(0x0C0BC16Eu, 1);  /* 0C0BC16C mov.l @(disp,pc),Rn */
	T = (s32)r5 > (s32)r7;  /* 0C0BC16E cmp/gt Rm,Rn */
	IF(0x0C0BC170u); r0 = T;  /* 0C0BC170 movt Rn */
	r0 ^= 0x1u;  /* 0C0BC172 xor #imm,r0 */
	UPD(0x0C0BC174u, 3);
L_0C0BC174: BLKS(0x0C0BC174u);
	r15 = r14;  /* 0C0BC174 mov Rm,Rn */
	IF(0x0C0BC176u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0BC176 rts */
L_0C0BC180: BLKS(0x0C0BC180u);
	{ r5 = 0u - r5; /* slot neg Rm,Rn */ UPD(0x0C0BC16Cu, 3); goto L_0C0BC16C; }  /* 0C0BC180 bra */
L_0C0BC190: BLKS(0x0C0BC190u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0BC156u, 3); goto L_0C0BC156; }  /* 0C0BC190 bra */
}

/* FUN_0c0bc1b0 */
void blk_f_0C0BC1B0(sh3_t *c)
{
	LOCALS;
L_0C0BC1B0: BLKS(0x0C0BC1B0u);
	r0 = 0xB4u; UPD(0x0C0BC1B2u, 1);  /* 0C0BC1B0 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C0BC1B2 exts.w Rm,Rn */
	IF(0x0C0BC1B4u); MACL = r4 * r0;  /* 0C0BC1B4 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0BC1B8u, 4);  /* 0C0BC1B6 mov.l Rm,@-Rn */
	r5 = r5 & 0xFFFF;  /* 0C0BC1B8 extu.w Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C0BC1BCu, 2);  /* 0C0BC1BA mov.l @(disp,pc),Rn */
	IF(0x0C0BC1BCu); r0 = MACL;  /* 0C0BC1BC sts macl,Rn */
	IF(0x0C0BC1BEu); r3 = R32(r0 + r2); UPD(0x0C0BC1C0u, 2);  /* 0C0BC1BE mov.l @(r0,Rm),Rn */
	r14 = r15;  /* 0C0BC1C0 mov Rm,Rn */
	r0 = 0x100u; UPD(0x0C0BC1C4u, 2);  /* 0C0BC1C2 mov.w @(disp,pc),Rn */
	r6 = r6 & 0xFFFF;  /* 0C0BC1C4 extu.w Rm,Rn */
	T = (r3 & r0) == 0;  /* 0C0BC1C6 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BC21Cu, 5); goto L_0C0BC21C; } goto L_0C0BC1CC; }  /* 0C0BC1C8 bt/s */
L_0C0BC1CC: BLKS(0x0C0BC1CCu);
	r0 = 0xC297A3Cu; UPD(0x0C0BC1CEu, 2);  /* 0C0BC1CC mov.l @(disp,pc),Rn */
	r3 = 0xC3C4170u; UPD(0x0C0BC1D0u, 1);  /* 0C0BC1CE mov.l @(disp,pc),Rn */
	r7 = R32(r0); UPD(0x0C0BC1D2u, 1);  /* 0C0BC1D0 mov.l @Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r3); UPD(0x0C0BC1D4u, 1);  /* 0C0BC1D2 mov.b @Rm,Rn */
	r0 = 0xC234C04u; UPD(0x0C0BC1D6u, 1);  /* 0C0BC1D4 mov.l @(disp,pc),Rn */
	r3 = r2 & 0xFF;  /* 0C0BC1D6 extu.b Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r0); UPD(0x0C0BC1DAu, 2);  /* 0C0BC1D8 mov.b @Rm,Rn */
	r0 = r2 & 0xFF;  /* 0C0BC1DA extu.b Rm,Rn */
	IF(0x0C0BC1DCu); r0 <<= 16;  /* 0C0BC1DC shll16 Rn */
	r2 = 0x40000u; UPD(0x0C0BC1E0u, 3);  /* 0C0BC1DE mov.l @(disp,pc),Rn */
	IF(0x0C0BC1E0u); r0 <<= 2;  /* 0C0BC1E0 shll2 Rn */
	r0 += r2;  /* 0C0BC1E2 add Rm,Rn */
	IF(0x0C0BC1E4u); MACL = r3 * r0;  /* 0C0BC1E4 mul.l Rm,Rn */
	IF(0x0C0BC1E6u); r3 = MACL;  /* 0C0BC1E6 sts macl,Rn */
	T = r7 >= r3;  /* 0C0BC1E8 cmp/hs Rm,Rn */
	{ u32 c_ = T; r7 -= r3; /* slot sub Rm,Rn */ if (c_) { UPD(0x0C0BC1F0u, 9); goto L_0C0BC1F0; } goto L_0C0BC1EE; }  /* 0C0BC1EA bt/s */
L_0C0BC1EE: BLKS(0x0C0BC1EEu);
	r7 = 0x0u;  /* 0C0BC1EE mov #imm,Rn */
	UPD(0x0C0BC1F0u, 2);
L_0C0BC1F0: BLKS(0x0C0BC1F0u);
	r3 = 0xB4u; UPD(0x0C0BC1F2u, 1);  /* 0C0BC1F0 mov.w @(disp,pc),Rn */
	IF(0x0C0BC1F2u); r7 >>= 16;  /* 0C0BC1F2 shlr16 Rn */
	IF(0x0C0BC1F4u); MACL = r4 * r3;  /* 0C0BC1F4 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C0BC1F8u, 4);  /* 0C0BC1F6 mov.l @(disp,pc),Rn */
	IF(0x0C0BC1F8u); r3 = MACL;  /* 0C0BC1F8 sts macl,Rn */
	r2 = 0x9Bu; UPD(0x0C0BC1FCu, 2);  /* 0C0BC1FA mov.w @(disp,pc),Rn */
	r3 += r0;  /* 0C0BC1FC add Rm,Rn */
	IF(0x0C0BC1FEu); MACL = r5 * r7;  /* 0C0BC1FE mul.l Rm,Rn */
	r3 += r2;  /* 0C0BC200 add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r3); UPD(0x0C0BC204u, 5);  /* 0C0BC202 mov.b @Rm,Rn */
	IF(0x0C0BC204u); r5 = MACL;  /* 0C0BC204 sts macl,Rn */
	r1 += 0x1u;  /* 0C0BC206 add #imm,Rn */
	IF(0x0C0BC208u); r5 >>= 8;  /* 0C0BC208 shlr8 Rn */
	r4 = r1 & 0xFF;  /* 0C0BC20A extu.b Rm,Rn */
	r6 += r5;  /* 0C0BC20C add Rm,Rn */
	W8(r3, r1); UPD(0x0C0BC210u, 6);  /* 0C0BC20E mov.b Rm,@Rn */
	T = r4 >= r6;  /* 0C0BC210 cmp/hs Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BC21Cu, 4); goto L_0C0BC21C; } goto L_0C0BC216; }  /* 0C0BC212 bf/s */
L_0C0BC216: BLKS(0x0C0BC216u);
	r6 = 0x0u;  /* 0C0BC216 mov #imm,Rn */
	W8(r3, r6); UPD(0x0C0BC21Au, 3);  /* 0C0BC218 mov.b Rm,@Rn */
	r0 = 0x1u;  /* 0C0BC21A mov #imm,Rn */
	UPD(0x0C0BC21Cu, 1);
L_0C0BC21C: BLKS(0x0C0BC21Cu);
	r15 = r14;  /* 0C0BC21C mov Rm,Rn */
	IF(0x0C0BC21Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0BC21E rts */
}

/* FUN_0c0bc240 */
void blk_f_0C0BC240(sh3_t *c)
{
	LOCALS;
L_0C0BC240: BLKS(0x0C0BC240u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0BC242u, 1);  /* 0C0BC240 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0BC244u, 1);  /* 0C0BC242 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0BC246u, 1);  /* 0C0BC244 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0BC248u, 1);  /* 0C0BC246 mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s16)r5;  /* 0C0BC248 exts.w Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0BC24Cu, 2);  /* 0C0BC24A mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0BC24Eu, 1);  /* 0C0BC24C mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0BC250u, 1);  /* 0C0BC24E mov.l Rm,@-Rn */
	r13 = 0x54u;  /* 0C0BC250 mov #imm,Rn */
	IF(0x0C0BC252u); r15 -= 4; W32(r15, PR); UPD(0x0C0BC254u, 2);  /* 0C0BC252 sts.l pr,@-Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0BC254 add #imm,Rn */
	r14 = r15;  /* 0C0BC256 mov Rm,Rn */
	W32(r14, r6); UPD(0x0C0BC25Au, 3);  /* 0C0BC258 mov.l Rm,@Rn */
	r12 = 0xC0BB920u; UPD(0x0C0BC25Cu, 1);  /* 0C0BC25A mov.l @(disp,pc),Rn */
L_0C0BC25C: BLKS(0x0C0BC25Cu);
	IF(0x0C0BC25Cu); MACL = r10 * r13;  /* 0C0BC25C mul.l Rm,Rn */
	r8 = 0xC297B40u; UPD(0x0C0BC260u, 3);  /* 0C0BC25E mov.l @(disp,pc),Rn */
	IF(0x0C0BC260u); r11 = MACL;  /* 0C0BC260 sts macl,Rn */
	r8 += r11;  /* 0C0BC262 add Rm,Rn */
	r9 = R32(r8); UPD(0x0C0BC266u, 3);  /* 0C0BC264 mov.l @Rm,Rn */
	r0 = 0x4000u; UPD(0x0C0BC268u, 1);  /* 0C0BC266 mov.w @(disp,pc),Rn */
	r9 &= r0;  /* 0C0BC268 and Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C0BC26A tst Rm,Rn */
	{ u32 c_ = T; r0 = R32(r14); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C0BC2A0u, 5); goto L_0C0BC2A0; } UPD(0x0C0BC270u, 1); goto L_0C0BC270; }  /* 0C0BC26C bt/s */
L_0C0BC270: BLKS(0x0C0BC270u);
	IF(0x0C0BC270u); { u32 t_ = r12; PR = 0x0C0BC274u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BB920, 0x0C0BB920u, 0x0C0BC274u); }  /* 0C0BC270 jsr @Rn */
L_0C0BC274: BLKS(0x0C0BC274u);
	IF(0x0C0BC274u); T = (s32)r0 >= 0;  /* 0C0BC274 cmp/pz Rn */
	if (!T) { UPD(0x0C0BC280u, 4); goto L_0C0BC280; }  /* 0C0BC276 bf */
L_0C0BC278: BLKS(0x0C0BC278u);
	r8 += 0x4Cu;  /* 0C0BC278 add #imm,Rn */
	{ r10 = (u32)(s32)(s16)R16(r8); /* slot mov.w @Rm,Rn */ UPD(0x0C0BC25Cu, 4); goto L_0C0BC25C; }  /* 0C0BC27A bra */
L_0C0BC280: BLKS(0x0C0BC280u);
	r0 = 0x0u;  /* 0C0BC280 mov #imm,Rn */
	W32(r8, r0); UPD(0x0C0BC284u, 2);  /* 0C0BC282 mov.l Rm,@Rn */
	r0 = 0x0u;  /* 0C0BC284 mov #imm,Rn */
	UPD(0x0C0BC286u, 1);
L_0C0BC286: BLKS(0x0C0BC286u);
	r14 += 0x4u;  /* 0C0BC286 add #imm,Rn */
	r15 = r14;  /* 0C0BC288 mov Rm,Rn */
	IF(0x0C0BC28Au); PR = R32(r15); r15 += 4; UPD(0x0C0BC28Cu, 3);  /* 0C0BC28A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0BC28Eu, 1);  /* 0C0BC28C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0BC290u, 1);  /* 0C0BC28E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0BC292u, 1);  /* 0C0BC290 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0BC294u, 1);  /* 0C0BC292 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0BC296u, 1);  /* 0C0BC294 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0BC298u, 1);  /* 0C0BC296 mov.l @Rm+,Rn */
	IF(0x0C0BC298u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0BC298 rts */
L_0C0BC2A0: BLKS(0x0C0BC2A0u);
	T = r0 == 0x1u;  /* 0C0BC2A0 cmp/eq #imm,r0 */
	{ u32 c_ = T; r4 = 0x7u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BC2E0u, 4); goto L_0C0BC2E0; } UPD(0x0C0BC2A6u, 1); goto L_0C0BC2A6; }  /* 0C0BC2A2 bt/s */
L_0C0BC2A6: BLKS(0x0C0BC2A6u);
	r0 = R32(r14); UPD(0x0C0BC2A8u, 1);  /* 0C0BC2A6 mov.l @Rm,Rn */
	T = r0 == 0x2u;  /* 0C0BC2A8 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C0BC2C0u, 4); goto L_0C0BC2C0; }  /* 0C0BC2AA bt */
L_0C0BC2AC: BLKS(0x0C0BC2ACu);
	r6 = 0xC297B40u; UPD(0x0C0BC2AEu, 1);  /* 0C0BC2AC mov.l @(disp,pc),Rn */
	r6 += r11;  /* 0C0BC2AE add Rm,Rn */
	r0 = R32(r6 + 0x4u); UPD(0x0C0BC2B2u, 2);  /* 0C0BC2B0 mov.l @(disp,Rm),Rn */
	r5 = 0xC1F7F64u; UPD(0x0C0BC2B4u, 1);  /* 0C0BC2B2 mov.l @(disp,pc),Rn */
	IF(0x0C0BC2B4u); r0 <<= 2;  /* 0C0BC2B4 shll2 Rn */
	IF(0x0C0BC2B6u); r2 = R32(r0 + r5); UPD(0x0C0BC2B8u, 2);  /* 0C0BC2B6 mov.l @(r0,Rm),Rn */
	IF(0x0C0BC2B8u); { u32 t_ = r2; PR = 0x0C0BC2BCu; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C0BC2BCu); }  /* 0C0BC2B8 jsr @Rn */
L_0C0BC2BC: BLKS(0x0C0BC2BCu);
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C0BC286u, 3); goto L_0C0BC286; }  /* 0C0BC2BC bra */
L_0C0BC2C0: BLKS(0x0C0BC2C0u);
	r15 += 0xFFFFFFF8u;  /* 0C0BC2C0 add #imm,Rn */
	r4 = 0x10000u; UPD(0x0C0BC2C4u, 2);  /* 0C0BC2C2 mov.l @(disp,pc),Rn */
	W32(r15 + 0x4u, r9); UPD(0x0C0BC2C6u, 1);  /* 0C0BC2C4 mov.l Rm,@(disp,Rn) */
	r7 = 0xC297B40u; UPD(0x0C0BC2C8u, 1);  /* 0C0BC2C6 mov.l @(disp,pc),Rn */
	W32(r15, r4); UPD(0x0C0BC2CAu, 1);  /* 0C0BC2C8 mov.l Rm,@Rn */
	r7 += r11;  /* 0C0BC2CA add Rm,Rn */
	r9 = 0xC07CD80u; UPD(0x0C0BC2CEu, 2);  /* 0C0BC2CC mov.l @(disp,pc),Rn */
	r4 = 0x3u;  /* 0C0BC2CE mov #imm,Rn */
	r5 = R32(r7 + 0x28u); UPD(0x0C0BC2D2u, 2);  /* 0C0BC2D0 mov.l @(disp,Rm),Rn */
	r6 = R32(r7 + 0x2Cu); UPD(0x0C0BC2D4u, 1);  /* 0C0BC2D2 mov.l @(disp,Rm),Rn */
	IF(0x0C0BC2D4u); { u32 t_ = r9; PR = 0x0C0BC2D8u; r7 = 0x14u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07CD80, 0x0C07CD80u, 0x0C0BC2D8u); }  /* 0C0BC2D4 jsr @Rn */
L_0C0BC2D8: BLKS(0x0C0BC2D8u);
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C0BC2ACu, 3); goto L_0C0BC2AC; }  /* 0C0BC2D8 bra */
L_0C0BC2E0: BLKS(0x0C0BC2E0u);
	r1 = 0x10000u; UPD(0x0C0BC2E2u, 1);  /* 0C0BC2E0 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0BC2E2 add #imm,Rn */
	W32(r15, r1); UPD(0x0C0BC2E6u, 2);  /* 0C0BC2E4 mov.l Rm,@Rn */
	W32(r15 + 0x4u, r9); UPD(0x0C0BC2E8u, 1);  /* 0C0BC2E6 mov.l Rm,@(disp,Rn) */
	r5 = R32(r8 + 0x28u); UPD(0x0C0BC2EAu, 1);  /* 0C0BC2E8 mov.l @(disp,Rm),Rn */
	r6 = R32(r8 + 0x2Cu); UPD(0x0C0BC2ECu, 1);  /* 0C0BC2EA mov.l @(disp,Rm),Rn */
	r8 = 0xC07CD80u; UPD(0x0C0BC2EEu, 1);  /* 0C0BC2EC mov.l @(disp,pc),Rn */
	IF(0x0C0BC2EEu); { u32 t_ = r8; PR = 0x0C0BC2F2u; r7 = 0x14u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07CD80, 0x0C07CD80u, 0x0C0BC2F2u); }  /* 0C0BC2EE jsr @Rn */
L_0C0BC2F2: BLKS(0x0C0BC2F2u);
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C0BC2A6u, 3); goto L_0C0BC2A6; }  /* 0C0BC2F2 bra */
}

/* FUN_0c0bc310 */
void blk_f_0C0BC310(sh3_t *c)
{
	LOCALS;
L_0C0BC310: BLKS(0x0C0BC310u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0BC312u, 1);  /* 0C0BC310 mov.l Rm,@-Rn */
	r1 = 0x0u;  /* 0C0BC312 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0BC316u, 2);  /* 0C0BC314 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0BC318u, 1);  /* 0C0BC316 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0BC31Au, 1);  /* 0C0BC318 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0BC31Cu, 1);  /* 0C0BC31A mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0BC31Eu, 1);  /* 0C0BC31C mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0BC320u, 1);  /* 0C0BC31E mov.l Rm,@-Rn */
	IF(0x0C0BC320u); r15 -= 4; W32(r15, PR); UPD(0x0C0BC322u, 1);  /* 0C0BC320 sts.l pr,@-Rn */
	r2 = 0xC29CEECu; UPD(0x0C0BC324u, 1);  /* 0C0BC322 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0BC324 add #imm,Rn */
	r0 = 0xC239484u; UPD(0x0C0BC328u, 2);  /* 0C0BC326 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0BC328 mov Rm,Rn */
	r13 = 0xFFu; UPD(0x0C0BC32Cu, 2);  /* 0C0BC32A mov.w @(disp,pc),Rn */
	W32(r14, r2); UPD(0x0C0BC32Eu, 1);  /* 0C0BC32C mov.l Rm,@Rn */
	W32(r0, r1); UPD(0x0C0BC330u, 1);  /* 0C0BC32E mov.l Rm,@Rn */
L_0C0BC330: BLKS(0x0C0BC330u);
	r4 = R32(r14); UPD(0x0C0BC332u, 1);  /* 0C0BC330 mov.l @Rm,Rn */
	r0 = 0x10000000u; UPD(0x0C0BC334u, 1);  /* 0C0BC332 mov.l @(disp,pc),Rn */
	r3 = R32(r4); UPD(0x0C0BC336u, 1);  /* 0C0BC334 mov.l @Rm,Rn */
	T = (r3 & r0) == 0;  /* 0C0BC336 tst Rm,Rn */
	{ u32 c_ = T; r9 = R32(r14); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C0BC376u, 4); goto L_0C0BC376; } UPD(0x0C0BC33Cu, 1); goto L_0C0BC33C; }  /* 0C0BC338 bt/s */
L_0C0BC33C: BLKS(0x0C0BC33Cu);
	r5 = 0xC239484u; UPD(0x0C0BC33Eu, 1);  /* 0C0BC33C mov.l @(disp,pc),Rn */
	r9 = (u32)(s32)(s16)r13;  /* 0C0BC33E exts.w Rm,Rn */
	r6 = R32(r5); UPD(0x0C0BC342u, 2);  /* 0C0BC340 mov.l @Rm,Rn */
	r11 = 0x54u;  /* 0C0BC342 mov #imm,Rn */
	r6 += 0x1u;  /* 0C0BC344 add #imm,Rn */
	W32(r5, r6); UPD(0x0C0BC348u, 3);  /* 0C0BC346 mov.l Rm,@Rn */
	r12 = 0xC297B40u; UPD(0x0C0BC34Au, 1);  /* 0C0BC348 mov.l @(disp,pc),Rn */
	r10 = 0xC0BB920u; UPD(0x0C0BC34Cu, 1);  /* 0C0BC34A mov.l @(disp,pc),Rn */
L_0C0BC34C: BLKS(0x0C0BC34Cu);
	IF(0x0C0BC34Cu); MACL = r9 * r11;  /* 0C0BC34C mul.l Rm,Rn */
	r0 = 0x4000u; UPD(0x0C0BC350u, 3);  /* 0C0BC34E mov.w @(disp,pc),Rn */
	IF(0x0C0BC350u); r8 = MACL;  /* 0C0BC350 sts macl,Rn */
	r8 += r12;  /* 0C0BC352 add Rm,Rn */
	r2 = R32(r8); UPD(0x0C0BC356u, 3);  /* 0C0BC354 mov.l @Rm,Rn */
	r2 &= r0;  /* 0C0BC356 and Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C0BC358 tst Rm,Rn */
	{ u32 c_ = T; r4 = 0x7u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BC3A0u, 5); goto L_0C0BC3A0; } goto L_0C0BC35E; }  /* 0C0BC35A bt/s */
L_0C0BC35E: BLKS(0x0C0BC35Eu);
	IF(0x0C0BC35Eu); { u32 t_ = r10; PR = 0x0C0BC362u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BB920, 0x0C0BB920u, 0x0C0BC362u); }  /* 0C0BC35E jsr @Rn */
L_0C0BC362: BLKS(0x0C0BC362u);
	IF(0x0C0BC362u); T = (s32)r0 >= 0;  /* 0C0BC362 cmp/pz Rn */
	if (!T) { UPD(0x0C0BC370u, 4); goto L_0C0BC370; }  /* 0C0BC364 bf */
L_0C0BC366: BLKS(0x0C0BC366u);
	r8 += 0x4Cu;  /* 0C0BC366 add #imm,Rn */
	{ r9 = (u32)(s32)(s16)R16(r8); /* slot mov.w @Rm,Rn */ UPD(0x0C0BC34Cu, 4); goto L_0C0BC34C; }  /* 0C0BC368 bra */
L_0C0BC370: BLKS(0x0C0BC370u);
	r7 = 0x0u;  /* 0C0BC370 mov #imm,Rn */
	W32(r8, r7); UPD(0x0C0BC374u, 2);  /* 0C0BC372 mov.l Rm,@Rn */
	r9 = R32(r14); UPD(0x0C0BC376u, 1);  /* 0C0BC374 mov.l @Rm,Rn */
L_0C0BC376: BLKS(0x0C0BC376u);
	r13 += 0xFFFFFFFFu;  /* 0C0BC376 add #imm,Rn */
	r9 += 0xFFFFFFACu;  /* 0C0BC378 add #imm,Rn */
	IF(0x0C0BC37Au); T = (s32)r13 >= 0;  /* 0C0BC37A cmp/pz Rn */
	{ u32 c_ = T; W32(r14, r9); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C0BC330u, 6); goto L_0C0BC330; } UPD(0x0C0BC380u, 1); goto L_0C0BC380; }  /* 0C0BC37C bt/s */
L_0C0BC380: BLKS(0x0C0BC380u);
	r14 += 0x4u;  /* 0C0BC380 add #imm,Rn */
	r15 = r14;  /* 0C0BC382 mov Rm,Rn */
	IF(0x0C0BC384u); PR = R32(r15); r15 += 4; UPD(0x0C0BC386u, 3);  /* 0C0BC384 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0BC388u, 1);  /* 0C0BC386 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0BC38Au, 1);  /* 0C0BC388 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0BC38Cu, 1);  /* 0C0BC38A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0BC38Eu, 1);  /* 0C0BC38C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0BC390u, 1);  /* 0C0BC38E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0BC392u, 1);  /* 0C0BC390 mov.l @Rm+,Rn */
	IF(0x0C0BC392u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0BC392 rts */
L_0C0BC3A0: BLKS(0x0C0BC3A0u);
	r3 = 0x10000u; UPD(0x0C0BC3A2u, 1);  /* 0C0BC3A0 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0BC3A2 add #imm,Rn */
	r1 = 0xC297B40u; UPD(0x0C0BC3A6u, 2);  /* 0C0BC3A4 mov.l @(disp,pc),Rn */
	IF(0x0C0BC3A6u); r11 = MACL;  /* 0C0BC3A6 sts macl,Rn */
	r12 = 0xC07CD80u; UPD(0x0C0BC3AAu, 2);  /* 0C0BC3A8 mov.l @(disp,pc),Rn */
	r11 += r1;  /* 0C0BC3AA add Rm,Rn */
	W32(r15, r3); UPD(0x0C0BC3AEu, 2);  /* 0C0BC3AC mov.l Rm,@Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C0BC3B0u, 1);  /* 0C0BC3AE mov.l Rm,@(disp,Rn) */
	r7 = 0x14u;  /* 0C0BC3B0 mov #imm,Rn */
	r5 = R32(r11 + 0x28u); UPD(0x0C0BC3B4u, 2);  /* 0C0BC3B2 mov.l @(disp,Rm),Rn */
	IF(0x0C0BC3B4u); { u32 t_ = r12; PR = 0x0C0BC3B8u; r6 = R32(r11 + 0x2Cu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07CD80, 0x0C07CD80u, 0x0C0BC3B8u); }  /* 0C0BC3B4 jsr @Rn */
L_0C0BC3B8: BLKS(0x0C0BC3B8u);
	r10 = R32(r11 + 0x4u); UPD(0x0C0BC3BAu, 1);  /* 0C0BC3B8 mov.l @(disp,Rm),Rn */
	r15 += 0x8u;  /* 0C0BC3BA add #imm,Rn */
	r0 = 0xC1F7F64u; UPD(0x0C0BC3BEu, 2);  /* 0C0BC3BC mov.l @(disp,pc),Rn */
	IF(0x0C0BC3BEu); r10 <<= 2;  /* 0C0BC3BE shll2 Rn */
	IF(0x0C0BC3C0u); r8 = R32(r0 + r10); UPD(0x0C0BC3C2u, 2);  /* 0C0BC3C0 mov.l @(r0,Rm),Rn */
	IF(0x0C0BC3C2u); { u32 t_ = r8; PR = 0x0C0BC3C6u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C0BC3C6u); }  /* 0C0BC3C2 jsr @Rn */
L_0C0BC3C6: BLKS(0x0C0BC3C6u);
	{ r9 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(0x0C0BC376u, 3); goto L_0C0BC376; }  /* 0C0BC3C6 bra */
}

void blk_f_0C0BC3F0(sh3_t *c)
{
	LOCALS;
L_0C0BC3F0: BLKS(0x0C0BC3F0u);
	r2 = (u32)(s32)(s16)r4;  /* 0C0BC3F0 exts.w Rm,Rn */
	r0 = 0x54u;  /* 0C0BC3F2 mov #imm,Rn */
	IF(0x0C0BC3F4u); MACL = r2 * r0;  /* 0C0BC3F4 mul.l Rm,Rn */
	r5 = 0xC297B40u; UPD(0x0C0BC3F8u, 5);  /* 0C0BC3F6 mov.l @(disp,pc),Rn */
	r4 = 0x5u;  /* 0C0BC3F8 mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0BC3FCu, 2);  /* 0C0BC3FA mov.l Rm,@-Rn */
	IF(0x0C0BC3FCu); r0 = MACL;  /* 0C0BC3FC sts macl,Rn */
	r0 += r5;  /* 0C0BC3FE add Rm,Rn */
	W32(r0 + 0x4u, r4); UPD(0x0C0BC402u, 3);  /* 0C0BC400 mov.l Rm,@(disp,Rn) */
	r14 = r15;  /* 0C0BC402 mov Rm,Rn */
	r1 = 0xC0000000u; UPD(0x0C0BC406u, 2);  /* 0C0BC404 mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C0BC406 mov #imm,Rn */
	W32(r0, r1); UPD(0x0C0BC40Au, 2);  /* 0C0BC408 mov.l Rm,@Rn */
	W32(r0 + 0x10u, r4); UPD(0x0C0BC40Cu, 1);  /* 0C0BC40A mov.l Rm,@(disp,Rn) */
	W32(r0 + 0x8u, r4); UPD(0x0C0BC40Eu, 1);  /* 0C0BC40C mov.l Rm,@(disp,Rn) */
	r7 = 0xC1F7E08u; UPD(0x0C0BC410u, 1);  /* 0C0BC40E mov.l @(disp,pc),Rn */
	r3 = R32(r7 + 0x2Cu); UPD(0x0C0BC412u, 1);  /* 0C0BC410 mov.l @(disp,Rm),Rn */
	W32(r0 + 0x24u, r3); UPD(0x0C0BC414u, 1);  /* 0C0BC412 mov.l Rm,@(disp,Rn) */
	r6 = R32(r7 + 0x28u); UPD(0x0C0BC416u, 1);  /* 0C0BC414 mov.l @(disp,Rm),Rn */
	W32(r0 + 0x14u, r6); UPD(0x0C0BC418u, 1);  /* 0C0BC416 mov.l Rm,@(disp,Rn) */
	r1 = R32(r6); UPD(0x0C0BC41Au, 1);  /* 0C0BC418 mov.l @Rm,Rn */
	W32(r0 + 0x18u, r1); UPD(0x0C0BC41Cu, 1);  /* 0C0BC41A mov.l Rm,@(disp,Rn) */
	r5 = R32(r1); UPD(0x0C0BC41Eu, 1);  /* 0C0BC41C mov.l @Rm,Rn */
	W32(r0 + 0x1Cu, r5); UPD(0x0C0BC420u, 1);  /* 0C0BC41E mov.l Rm,@(disp,Rn) */
	r7 = R32(r1 + 0x4u); UPD(0x0C0BC422u, 1);  /* 0C0BC420 mov.l @(disp,Rm),Rn */
	r6 = 0xC2380C4u; UPD(0x0C0BC424u, 1);  /* 0C0BC422 mov.l @(disp,pc),Rn */
	W32(r0 + 0x20u, r7); UPD(0x0C0BC426u, 1);  /* 0C0BC424 mov.l Rm,@(disp,Rn) */
	r5 = (u32)(s32)(s16)R16(r6); UPD(0x0C0BC428u, 1);  /* 0C0BC426 mov.w @Rm,Rn */
	r0 += 0x4Eu;  /* 0C0BC428 add #imm,Rn */
	W16(r0, r5); UPD(0x0C0BC42Cu, 2);  /* 0C0BC42A mov.w Rm,@Rn */
	r0 += 0xFFFFFFF6u;  /* 0C0BC42C add #imm,Rn */
	W16(r0, r4); UPD(0x0C0BC430u, 2);  /* 0C0BC42E mov.w Rm,@Rn */
	r3 = 0x207C0C0u; UPD(0x0C0BC432u, 1);  /* 0C0BC430 mov.l @(disp,pc),Rn */
	r0 += 0xFFFFFFBCu;  /* 0C0BC432 add #imm,Rn */
	W32(r0 + 0x3Cu, r3); UPD(0x0C0BC436u, 2);  /* 0C0BC434 mov.l Rm,@(disp,Rn) */
	r1 = 0x808080u; UPD(0x0C0BC438u, 1);  /* 0C0BC436 mov.l @(disp,pc),Rn */
	r0 += 0x40u;  /* 0C0BC438 add #imm,Rn */
	W32(r0, r1); UPD(0x0C0BC43Cu, 2);  /* 0C0BC43A mov.l Rm,@Rn */
	r15 = r14;  /* 0C0BC43C mov Rm,Rn */
	IF(0x0C0BC43Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0BC43E rts */
}

void blk_f_0C0BC460(sh3_t *c)
{
	LOCALS;
L_0C0BC460: BLKS(0x0C0BC460u);
	r2 = (u32)(s32)(s16)r4;  /* 0C0BC460 exts.w Rm,Rn */
	r0 = 0x54u;  /* 0C0BC462 mov #imm,Rn */
	IF(0x0C0BC464u); MACL = r2 * r0;  /* 0C0BC464 mul.l Rm,Rn */
	r6 = 0xC297B40u; UPD(0x0C0BC468u, 5);  /* 0C0BC466 mov.l @(disp,pc),Rn */
	r4 = 0x2u;  /* 0C0BC468 mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0BC46Cu, 2);  /* 0C0BC46A mov.l Rm,@-Rn */
	IF(0x0C0BC46Cu); r0 = MACL;  /* 0C0BC46C sts macl,Rn */
	r0 += r6;  /* 0C0BC46E add Rm,Rn */
	W32(r0 + 0x8u, r4); UPD(0x0C0BC472u, 3);  /* 0C0BC470 mov.l Rm,@(disp,Rn) */
	r1 = 0x5u;  /* 0C0BC472 mov #imm,Rn */
	r5 = 0x40000000u; UPD(0x0C0BC476u, 2);  /* 0C0BC474 mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C0BC476 mov #imm,Rn */
	W32(r0, r5); UPD(0x0C0BC47Au, 2);  /* 0C0BC478 mov.l Rm,@Rn */
	r14 = r15;  /* 0C0BC47A mov Rm,Rn */
	W32(r0 + 0x4u, r1); UPD(0x0C0BC47Eu, 2);  /* 0C0BC47C mov.l Rm,@(disp,Rn) */
	W32(r0 + 0x10u, r4); UPD(0x0C0BC480u, 1);  /* 0C0BC47E mov.l Rm,@(disp,Rn) */
	r7 = 0xC1F7E08u; UPD(0x0C0BC482u, 1);  /* 0C0BC480 mov.l @(disp,pc),Rn */
	r3 = R32(r7 + 0x2Cu); UPD(0x0C0BC484u, 1);  /* 0C0BC482 mov.l @(disp,Rm),Rn */
	W32(r0 + 0x24u, r3); UPD(0x0C0BC486u, 1);  /* 0C0BC484 mov.l Rm,@(disp,Rn) */
	r6 = R32(r7 + 0x28u); UPD(0x0C0BC488u, 1);  /* 0C0BC486 mov.l @(disp,Rm),Rn */
	W32(r0 + 0x14u, r6); UPD(0x0C0BC48Au, 1);  /* 0C0BC488 mov.l Rm,@(disp,Rn) */
	r1 = R32(r6 + 0x20u); UPD(0x0C0BC48Cu, 1);  /* 0C0BC48A mov.l @(disp,Rm),Rn */
	W32(r0 + 0x18u, r1); UPD(0x0C0BC48Eu, 1);  /* 0C0BC48C mov.l Rm,@(disp,Rn) */
	r5 = R32(r1); UPD(0x0C0BC490u, 1);  /* 0C0BC48E mov.l @Rm,Rn */
	W32(r0 + 0x1Cu, r5); UPD(0x0C0BC492u, 1);  /* 0C0BC490 mov.l Rm,@(disp,Rn) */
	r7 = R32(r1 + 0x4u); UPD(0x0C0BC494u, 1);  /* 0C0BC492 mov.l @(disp,Rm),Rn */
	r6 = 0xC2380C4u; UPD(0x0C0BC496u, 1);  /* 0C0BC494 mov.l @(disp,pc),Rn */
	W32(r0 + 0x20u, r7); UPD(0x0C0BC498u, 1);  /* 0C0BC496 mov.l Rm,@(disp,Rn) */
	r5 = (u32)(s32)(s16)R16(r6); UPD(0x0C0BC49Au, 1);  /* 0C0BC498 mov.w @Rm,Rn */
	r0 += 0x4Eu;  /* 0C0BC49A add #imm,Rn */
	W16(r0, r5); UPD(0x0C0BC49Eu, 2);  /* 0C0BC49C mov.w Rm,@Rn */
	r0 += 0xFFFFFFF6u;  /* 0C0BC49E add #imm,Rn */
	W16(r0, r4); UPD(0x0C0BC4A2u, 2);  /* 0C0BC4A0 mov.w Rm,@Rn */
	r3 = 0x207C0C0u; UPD(0x0C0BC4A4u, 1);  /* 0C0BC4A2 mov.l @(disp,pc),Rn */
	r0 += 0xFFFFFFBCu;  /* 0C0BC4A4 add #imm,Rn */
	W32(r0 + 0x3Cu, r3); UPD(0x0C0BC4A8u, 2);  /* 0C0BC4A6 mov.l Rm,@(disp,Rn) */
	r1 = 0x808080u; UPD(0x0C0BC4AAu, 1);  /* 0C0BC4A8 mov.l @(disp,pc),Rn */
	r0 += 0x40u;  /* 0C0BC4AA add #imm,Rn */
	W32(r0, r1); UPD(0x0C0BC4AEu, 2);  /* 0C0BC4AC mov.l Rm,@Rn */
	r15 = r14;  /* 0C0BC4AE mov Rm,Rn */
	IF(0x0C0BC4B0u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0BC4B0 rts */
}

void blk_f_0C0BC4D0(sh3_t *c)
{
	LOCALS;
L_0C0BC4D0: BLKS(0x0C0BC4D0u);
	r4 = (u32)(s32)(s16)r4;  /* 0C0BC4D0 exts.w Rm,Rn */
	r2 = 0x54u;  /* 0C0BC4D2 mov #imm,Rn */
	IF(0x0C0BC4D4u); MACL = r4 * r2;  /* 0C0BC4D4 mul.l Rm,Rn */
	r0 = 0xC297B40u; UPD(0x0C0BC4D8u, 5);  /* 0C0BC4D6 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0BC4DAu, 1);  /* 0C0BC4D8 mov.l Rm,@-Rn */
	IF(0x0C0BC4DAu); r7 = MACL;  /* 0C0BC4DA sts macl,Rn */
	r7 += r0;  /* 0C0BC4DC add Rm,Rn */
	r6 = R32(r7 + 0x10u); UPD(0x0C0BC4E0u, 3);  /* 0C0BC4DE mov.l @(disp,Rm),Rn */
	r0 = 0x9u;  /* 0C0BC4E0 mov #imm,Rn */
	T = (s32)r6 > (s32)r0;  /* 0C0BC4E2 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0BC4F4u, 5); goto L_0C0BC4F4; } goto L_0C0BC4E8; }  /* 0C0BC4E4 bf/s */
L_0C0BC4E8: BLKS(0x0C0BC4E8u);
	r5 = r7;  /* 0C0BC4E8 mov Rm,Rn */
	r5 += 0x40u;  /* 0C0BC4EA add #imm,Rn */
	r1 = R32(r5); UPD(0x0C0BC4EEu, 4);  /* 0C0BC4EC mov.l @Rm,Rn */
	r0 = 0xFFF8F8F9u; UPD(0x0C0BC4F0u, 1);  /* 0C0BC4EE mov.l @(disp,pc),Rn */
	r1 += r0;  /* 0C0BC4F0 add Rm,Rn */
	W32(r5, r1); UPD(0x0C0BC4F4u, 2);  /* 0C0BC4F2 mov.l Rm,@Rn */
L_0C0BC4F4: BLKS(0x0C0BC4F4u);
	r2 = r7;  /* 0C0BC4F4 mov Rm,Rn */
	r2 += 0x44u;  /* 0C0BC4F6 add #imm,Rn */
	r3 = (u32)(s32)(s16)R16(r2); UPD(0x0C0BC4FAu, 3);  /* 0C0BC4F8 mov.w @Rm,Rn */
	r3 += 0x1u;  /* 0C0BC4FA add #imm,Rn */
	r0 = r3 & 0xFFFF;  /* 0C0BC4FC extu.w Rm,Rn */
	T = r0 == 0x2u;  /* 0C0BC4FE cmp/eq #imm,r0 */
	{ u32 c_ = T; W16(r2, r3); /* slot mov.w Rm,@Rn */ if (c_) { UPD(0x0C0BC510u, 6); goto L_0C0BC510; } UPD(0x0C0BC504u, 1); goto L_0C0BC504; }  /* 0C0BC500 bt/s */
L_0C0BC504: BLKS(0x0C0BC504u);
	r15 = r14;  /* 0C0BC504 mov Rm,Rn */
	IF(0x0C0BC506u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0BC506 rts */
L_0C0BC510: BLKS(0x0C0BC510u);
	r0 = r6;  /* 0C0BC510 mov Rm,Rn */
	r0 += 0x1u;  /* 0C0BC512 add #imm,Rn */
	r5 = 0x0u;  /* 0C0BC514 mov #imm,Rn */
	W16(r2, r5); UPD(0x0C0BC518u, 4);  /* 0C0BC516 mov.w Rm,@Rn */
	T = r0 == 0x10u;  /* 0C0BC518 cmp/eq #imm,r0 */
	{ u32 c_ = T; W32(r7 + 0x10u, r0); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0BC530u, 4); goto L_0C0BC530; } UPD(0x0C0BC51Eu, 1); goto L_0C0BC51E; }  /* 0C0BC51A bt/s */
L_0C0BC51E: BLKS(0x0C0BC51Eu);
	r7 = 0xC0B9DF0u; UPD(0x0C0BC520u, 1);  /* 0C0BC51E mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C0BC520 mov Rm,Rn */
	IF(0x0C0BC522u); { u32 tv_ = r7; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0B9DF0u: TAIL(blk_f_0C0B9DF0); default: JUMPD(tv_); } }  /* 0C0BC522 jmp @Rn */
L_0C0BC530: BLKS(0x0C0BC530u);
	r6 = 0x0u;  /* 0C0BC530 mov #imm,Rn */
	{ W32(r7, r6); /* slot mov.l Rm,@Rn */ UPD(0x0C0BC51Eu, 4); goto L_0C0BC51E; }  /* 0C0BC532 bra */
}

void blk_f_0C0BC550(sh3_t *c)
{
	LOCALS;
L_0C0BC550: BLKS(0x0C0BC550u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0BC552u, 1);  /* 0C0BC550 mov.l Rm,@-Rn */
	r4 = 0x1u;  /* 0C0BC552 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0BC556u, 2);  /* 0C0BC554 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0BC558u, 1);  /* 0C0BC556 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0BC55Au, 1);  /* 0C0BC558 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0BC55Cu, 1);  /* 0C0BC55A mov.l Rm,@-Rn */
	r8 = 0xC0BCA00u; UPD(0x0C0BC55Eu, 1);  /* 0C0BC55C mov.l @(disp,pc),Rn */
	IF(0x0C0BC55Eu); r15 -= 4; W32(r15, PR); UPD(0x0C0BC560u, 1);  /* 0C0BC55E sts.l pr,@-Rn */
	IF(0x0C0BC560u); { u32 t_ = r8; PR = 0x0C0BC564u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BCA00, 0x0C0BCA00u, 0x0C0BC564u); }  /* 0C0BC560 jsr @Rn */
L_0C0BC564: BLKS(0x0C0BC564u);
	T = (r0 & r0) == 0;  /* 0C0BC564 tst Rm,Rn */
	if (!T) { UPD(0x0C0BC580u, 4); goto L_0C0BC580; }  /* 0C0BC566 bf */
L_0C0BC568: BLKS(0x0C0BC568u);
	r0 = 0x1u;  /* 0C0BC568 mov #imm,Rn */
	r15 = r14;  /* 0C0BC56A mov Rm,Rn */
	IF(0x0C0BC56Cu); PR = R32(r15); r15 += 4; UPD(0x0C0BC56Eu, 3);  /* 0C0BC56C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0BC570u, 1);  /* 0C0BC56E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0BC572u, 1);  /* 0C0BC570 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0BC574u, 1);  /* 0C0BC572 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0BC576u, 1);  /* 0C0BC574 mov.l @Rm+,Rn */
	IF(0x0C0BC576u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0BC576 rts */
L_0C0BC580: BLKS(0x0C0BC580u);
	r9 = 0xC28EDFCu; UPD(0x0C0BC582u, 1);  /* 0C0BC580 mov.l @(disp,pc),Rn */
	r8 = 0x38u;  /* 0C0BC582 mov #imm,Rn */
	r4 = (u32)(s32)(s16)R16(r9); UPD(0x0C0BC586u, 2);  /* 0C0BC584 mov.w @Rm,Rn */
	r10 = 0x1Du;  /* 0C0BC586 mov #imm,Rn */
	IF(0x0C0BC588u); MACL = r4 * r8;  /* 0C0BC588 mul.l Rm,Rn */
	r0 = 0xC28F65Cu; UPD(0x0C0BC58Cu, 4);  /* 0C0BC58A mov.l @(disp,pc),Rn */
	IF(0x0C0BC58Cu); r8 = MACL;  /* 0C0BC58C sts macl,Rn */
	r11 = 0xC0000000u; UPD(0x0C0BC590u, 2);  /* 0C0BC58E mov.l @(disp,pc),Rn */
	r8 += r0;  /* 0C0BC590 add Rm,Rn */
	W32(r8, r11); UPD(0x0C0BC594u, 2);  /* 0C0BC592 mov.l Rm,@Rn */
	r11 = 0xC062780u; UPD(0x0C0BC596u, 1);  /* 0C0BC594 mov.l @(disp,pc),Rn */
	IF(0x0C0BC596u); { u32 t_ = r11; PR = 0x0C0BC59Au; r4 = 0x40u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0BC59Au); }  /* 0C0BC596 jsr @Rn */
L_0C0BC59A: BLKS(0x0C0BC59Au);
	W32(r8 + 0x4u, r10); UPD(0x0C0BC59Cu, 1);  /* 0C0BC59A mov.l Rm,@(disp,Rn) */
	r0 += 0xFFFFFFE0u;  /* 0C0BC59C add #imm,Rn */
	W32(r8 + 0x20u, r0); UPD(0x0C0BC5A0u, 2);  /* 0C0BC59E mov.l Rm,@(disp,Rn) */
	IF(0x0C0BC5A0u); { u32 t_ = r11; PR = 0x0C0BC5A4u; r4 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0BC5A4u); }  /* 0C0BC5A0 jsr @Rn */
L_0C0BC5A4: BLKS(0x0C0BC5A4u);
	r10 = (u32)(s32)(s16)r0;  /* 0C0BC5A4 exts.w Rm,Rn */
	r9 = r10;  /* 0C0BC5A6 mov Rm,Rn */
	r3 = 0xC1FE044u; UPD(0x0C0BC5AAu, 3);  /* 0C0BC5A8 mov.l @(disp,pc),Rn */
	IF(0x0C0BC5AAu); r9 <<= 2;  /* 0C0BC5AA shll2 Rn */
	r0 = r9;  /* 0C0BC5AC mov Rm,Rn */
	IF(0x0C0BC5AEu); r2 = R32(r0 + r3); UPD(0x0C0BC5B0u, 3);  /* 0C0BC5AE mov.l @(r0,Rm),Rn */
	r0 = R32(r8 + 0x20u); UPD(0x0C0BC5B2u, 1);  /* 0C0BC5B0 mov.l @(disp,Rm),Rn */
	r0 += 0x8u;  /* 0C0BC5B2 add #imm,Rn */
	IF(0x0C0BC5B4u); r0 >>= 2;  /* 0C0BC5B4 shlr2 Rn */
	r7 = 0xFFF80000u; UPD(0x0C0BC5B8u, 3);  /* 0C0BC5B6 mov.l @(disp,pc),Rn */
	IF(0x0C0BC5B8u); r0 >>= 2;  /* 0C0BC5B8 shlr2 Rn */
	r0 &= 0x1Fu;  /* 0C0BC5BA and #imm,r0 */
	W32(r8 + 0x8u, r2); UPD(0x0C0BC5BEu, 3);  /* 0C0BC5BC mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x10u, r7); UPD(0x0C0BC5C0u, 1);  /* 0C0BC5BE mov.l Rm,@(disp,Rn) */
	r4 = 0x140u; UPD(0x0C0BC5C2u, 1);  /* 0C0BC5C0 mov.w @(disp,pc),Rn */
	IF(0x0C0BC5C2u); { u32 t_ = r11; PR = 0x0C0BC5C6u; W32(r8 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0BC5C6u); }  /* 0C0BC5C2 jsr @Rn */
L_0C0BC5C6: BLKS(0x0C0BC5C6u);
	r6 = 0x160u; UPD(0x0C0BC5C8u, 1);  /* 0C0BC5C6 mov.w @(disp,pc),Rn */
	r0 += r6;  /* 0C0BC5C8 add Rm,Rn */
	IF(0x0C0BC5CAu); r0 <<= 16;  /* 0C0BC5CA shll16 Rn */
	W32(r8 + 0x14u, r0); UPD(0x0C0BC5CEu, 3);  /* 0C0BC5CC mov.l Rm,@(disp,Rn) */
	r5 = 0xC1FE054u; UPD(0x0C0BC5D0u, 1);  /* 0C0BC5CE mov.l @(disp,pc),Rn */
	r0 = r9;  /* 0C0BC5D0 mov Rm,Rn */
	IF(0x0C0BC5D2u); r9 = R32(r0 + r5); UPD(0x0C0BC5D4u, 2);  /* 0C0BC5D2 mov.l @(r0,Rm),Rn */
	IF(0x0C0BC5D4u); { u32 t_ = r11; PR = 0x0C0BC5D8u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0BC5D8u); }  /* 0C0BC5D4 jsr @Rn */
L_0C0BC5D8: BLKS(0x0C0BC5D8u);
	r9 += r0;  /* 0C0BC5D8 add Rm,Rn */
	r0 = 0xC069B20u; UPD(0x0C0BC5DCu, 2);  /* 0C0BC5DA mov.l @(disp,pc),Rn */
	r5 = r9;  /* 0C0BC5DC mov Rm,Rn */
	W32(r8 + 0x24u, r9); UPD(0x0C0BC5E0u, 2);  /* 0C0BC5DE mov.l Rm,@(disp,Rn) */
	IF(0x0C0BC5E0u); { u32 t_ = r0; PR = 0x0C0BC5E4u; r4 = R32(r8 + 0x20u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0BC5E4u); }  /* 0C0BC5E0 jsr @Rn */
L_0C0BC5E4: BLKS(0x0C0BC5E4u);
	r5 = r9;  /* 0C0BC5E4 mov Rm,Rn */
	r9 = 0xC069AF0u; UPD(0x0C0BC5E8u, 2);  /* 0C0BC5E6 mov.l @(disp,pc),Rn */
	r4 = R32(r8 + 0x20u); UPD(0x0C0BC5EAu, 1);  /* 0C0BC5E8 mov.l @(disp,Rm),Rn */
	IF(0x0C0BC5EAu); { u32 t_ = r9; PR = 0x0C0BC5EEu; W32(r8 + 0x18u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0BC5EEu); }  /* 0C0BC5EA jsr @Rn */
L_0C0BC5EE: BLKS(0x0C0BC5EEu);
	W32(r8 + 0x1Cu, r0); UPD(0x0C0BC5F0u, 1);  /* 0C0BC5EE mov.l Rm,@(disp,Rn) */
	r4 = 0xC1FE040u; UPD(0x0C0BC5F2u, 1);  /* 0C0BC5F0 mov.l @(disp,pc),Rn */
	r8 += 0x33u;  /* 0C0BC5F2 add #imm,Rn */
	r0 = r4;  /* 0C0BC5F4 mov Rm,Rn */
	IF(0x0C0BC5F6u); r3 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C0BC5F8u, 3);  /* 0C0BC5F6 mov.b @(r0,Rm),Rn */
	r4 = 0x4u;  /* 0C0BC5F8 mov #imm,Rn */
	W8(r8, r3); UPD(0x0C0BC5FCu, 2);  /* 0C0BC5FA mov.b Rm,@Rn */
	r0 = 0x0u;  /* 0C0BC5FC mov #imm,Rn */
	r2 = 0x808080u; UPD(0x0C0BC600u, 2);  /* 0C0BC5FE mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFCDu;  /* 0C0BC600 add #imm,Rn */
	W32(r8 + 0x28u, r0); UPD(0x0C0BC604u, 2);  /* 0C0BC602 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x2Cu, r2); UPD(0x0C0BC606u, 1);  /* 0C0BC604 mov.l Rm,@(disp,Rn) */
	r8 += 0x30u;  /* 0C0BC606 add #imm,Rn */
	IF(0x0C0BC608u); { u32 t_ = r11; PR = 0x0C0BC60Cu; W8(r8, r0); /* slot mov.b Rm,@Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0BC60Cu); }  /* 0C0BC608 jsr @Rn */
L_0C0BC60C: BLKS(0x0C0BC60Cu);
	r8 += 0x1u;  /* 0C0BC60C add #imm,Rn */
	{ W8(r8, r0); /* slot mov.b Rm,@Rn */ UPD(0x0C0BC568u, 4); goto L_0C0BC568; }  /* 0C0BC60E bra */
}

void blk_f_0C0BC650(sh3_t *c)
{
	LOCALS;
L_0C0BC650: BLKS(0x0C0BC650u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0BC652u, 1);  /* 0C0BC650 mov.l Rm,@-Rn */
	r3 = 0x38u;  /* 0C0BC652 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0BC656u, 2);  /* 0C0BC654 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0BC658u, 1);  /* 0C0BC656 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0BC65Au, 1);  /* 0C0BC658 mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C0BC65A exts.w Rm,Rn */
	IF(0x0C0BC65Cu); MACL = r11 * r3;  /* 0C0BC65C mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0BC660u, 4);  /* 0C0BC65E mov.l Rm,@-Rn */
	r0 = 0xC28F65Cu; UPD(0x0C0BC662u, 1);  /* 0C0BC660 mov.l @(disp,pc),Rn */
	IF(0x0C0BC662u); r10 = MACL;  /* 0C0BC662 sts macl,Rn */
	IF(0x0C0BC664u); r15 -= 4; W32(r15, PR); UPD(0x0C0BC666u, 2);  /* 0C0BC664 sts.l pr,@-Rn */
	r10 += r0;  /* 0C0BC666 add Rm,Rn */
	r10 += 0x22u;  /* 0C0BC668 add #imm,Rn */
	r9 = (u32)(s32)(s16)R16(r10); UPD(0x0C0BC66Cu, 3);  /* 0C0BC66A mov.w @Rm,Rn */
	r14 = r15;  /* 0C0BC66C mov Rm,Rn */
	r10 += 0xFFFFFFDEu;  /* 0C0BC66E add #imm,Rn */
	r0 = 0xC069B20u; UPD(0x0C0BC672u, 3);  /* 0C0BC670 mov.l @(disp,pc),Rn */
	r4 = r9;  /* 0C0BC672 mov Rm,Rn */
	r8 = R32(r10 + 0x24u); UPD(0x0C0BC676u, 2);  /* 0C0BC674 mov.l @(disp,Rm),Rn */
	IF(0x0C0BC676u); { u32 t_ = r0; PR = 0x0C0BC67Au; r5 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0BC67Au); }  /* 0C0BC676 jsr @Rn */
L_0C0BC67A: BLKS(0x0C0BC67Au);
	r5 = r8;  /* 0C0BC67A mov Rm,Rn */
	r8 = 0xC069AF0u; UPD(0x0C0BC67Eu, 2);  /* 0C0BC67C mov.l @(disp,pc),Rn */
	r4 = r9;  /* 0C0BC67E mov Rm,Rn */
	IF(0x0C0BC680u); { u32 t_ = r8; PR = 0x0C0BC684u; W32(r10 + 0x18u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0BC684u); }  /* 0C0BC680 jsr @Rn */
L_0C0BC684: BLKS(0x0C0BC684u);
	r4 = R32(r10 + 0x10u); UPD(0x0C0BC686u, 1);  /* 0C0BC684 mov.l @(disp,Rm),Rn */
	r7 = R32(r10 + 0x14u); UPD(0x0C0BC688u, 1);  /* 0C0BC686 mov.l @(disp,Rm),Rn */
	r2 = R32(r10 + 0x18u); UPD(0x0C0BC68Au, 1);  /* 0C0BC688 mov.l @(disp,Rm),Rn */
	r7 += r0;  /* 0C0BC68A add Rm,Rn */
	r3 = 0xFF600000u; UPD(0x0C0BC68Eu, 2);  /* 0C0BC68C mov.l @(disp,pc),Rn */
	r4 += r2;  /* 0C0BC68E add Rm,Rn */
	r3 += r4;  /* 0C0BC690 add Rm,Rn */
	W32(r10 + 0x1Cu, r0); UPD(0x0C0BC694u, 3);  /* 0C0BC692 mov.l Rm,@(disp,Rn) */
	IF(0x0C0BC694u); T = (s32)r3 >= 0;  /* 0C0BC694 cmp/pz Rn */
	W32(r10 + 0x10u, r4); UPD(0x0C0BC698u, 2);  /* 0C0BC696 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = !T; W32(r10 + 0x14u, r7); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0BC740u, 3); goto L_0C0BC740; } UPD(0x0C0BC69Cu, 1); goto L_0C0BC69C; }  /* 0C0BC698 bf/s */
L_0C0BC69C: BLKS(0x0C0BC69Cu);
	r4 = 0xAC0000u; UPD(0x0C0BC69Eu, 1);  /* 0C0BC69C mov.l @(disp,pc),Rn */
	T = (s32)r3 > (s32)r4;  /* 0C0BC69E cmp/gt Rm,Rn */
	if (T) { UPD(0x0C0BC6B8u, 4); goto L_0C0BC6B8; }  /* 0C0BC6A0 bt */
L_0C0BC6A2: BLKS(0x0C0BC6A2u);
	r2 = r7;  /* 0C0BC6A2 mov Rm,Rn */
	r9 = 0xC3C4048u; UPD(0x0C0BC6A6u, 2);  /* 0C0BC6A4 mov.l @(disp,pc),Rn */
	r6 = R32(r9); UPD(0x0C0BC6A8u, 1);  /* 0C0BC6A6 mov.l @Rm,Rn */
	r5 = 0xFF880000u; UPD(0x0C0BC6AAu, 1);  /* 0C0BC6A8 mov.l @(disp,pc),Rn */
	r2 -= r6;  /* 0C0BC6AA sub Rm,Rn */
	r2 += r5;  /* 0C0BC6AC add Rm,Rn */
	IF(0x0C0BC6AEu); T = (s32)r2 >= 0;  /* 0C0BC6AE cmp/pz Rn */
	if (!T) { UPD(0x0C0BC730u, 6); goto L_0C0BC730; }  /* 0C0BC6B0 bf */
L_0C0BC6B2: BLKS(0x0C0BC6B2u);
	r7 = 0x840000u; UPD(0x0C0BC6B4u, 1);  /* 0C0BC6B2 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r7;  /* 0C0BC6B4 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0BC6D0u, 4); goto L_0C0BC6D0; }  /* 0C0BC6B6 bf */
L_0C0BC6B8: BLKS(0x0C0BC6B8u);
	r11 = 0x0u;  /* 0C0BC6B8 mov #imm,Rn */
	W32(r10, r11); UPD(0x0C0BC6BCu, 2);  /* 0C0BC6BA mov.l Rm,@Rn */
L_0C0BC6BC: BLKS(0x0C0BC6BCu);
	r15 = r14;  /* 0C0BC6BC mov Rm,Rn */
	IF(0x0C0BC6BEu); PR = R32(r15); r15 += 4; UPD(0x0C0BC6C0u, 2);  /* 0C0BC6BE lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0BC6C2u, 1);  /* 0C0BC6C0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0BC6C4u, 1);  /* 0C0BC6C2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0BC6C6u, 1);  /* 0C0BC6C4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0BC6C8u, 1);  /* 0C0BC6C6 mov.l @Rm+,Rn */
	IF(0x0C0BC6C8u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0BC6C8 rts */
L_0C0BC6D0: BLKS(0x0C0BC6D0u);
	r7 = r10;  /* 0C0BC6D0 mov Rm,Rn */
	r10 += 0x31u;  /* 0C0BC6D2 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r10); UPD(0x0C0BC6D6u, 3);  /* 0C0BC6D4 mov.b @Rm,Rn */
	r7 += 0x30u;  /* 0C0BC6D6 add #imm,Rn */
	r3 = r0 & 0xFF;  /* 0C0BC6D8 extu.b Rm,Rn */
	r0 = r3;  /* 0C0BC6DA mov Rm,Rn */
	r4 = 0xC1FE06Cu; UPD(0x0C0BC6DEu, 4);  /* 0C0BC6DC mov.l @(disp,pc),Rn */
	r10 += 0xFFFFFFCFu;  /* 0C0BC6DE add #imm,Rn */
	IF(0x0C0BC6E0u); r0 <<= 2;  /* 0C0BC6E0 shll2 Rn */
	r8 = R32(r10 + 0x24u); UPD(0x0C0BC6E4u, 3);  /* 0C0BC6E2 mov.l @(disp,Rm),Rn */
	T = (r3 & r3) == 0;  /* 0C0BC6E4 tst Rm,Rn */
	IF(0x0C0BC6E6u); r2 = R32(r0 + r4); UPD(0x0C0BC6E8u, 2);  /* 0C0BC6E6 mov.l @(r0,Rm),Rn */
	r8 += r2;  /* 0C0BC6E8 add Rm,Rn */
	{ u32 c_ = T; W32(r10 + 0x24u, r8); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0BC70Cu, 4); goto L_0C0BC70C; } UPD(0x0C0BC6EEu, 1); goto L_0C0BC6EE; }  /* 0C0BC6EA bt/s */
L_0C0BC6EE: BLKS(0x0C0BC6EEu);
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C0BC6F0u, 1);  /* 0C0BC6EE mov.b @Rm,Rn */
	r6 += 0x1u;  /* 0C0BC6F0 add #imm,Rn */
	r5 = r6 & 0xFF;  /* 0C0BC6F2 extu.b Rm,Rn */
	T = r5 > r3;  /* 0C0BC6F4 cmp/hi Rm,Rn */
	{ u32 c_ = !T; W8(r7, r6); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0BC70Cu, 6); goto L_0C0BC70C; } UPD(0x0C0BC6FAu, 1); goto L_0C0BC6FA; }  /* 0C0BC6F6 bf/s */
L_0C0BC6FA: BLKS(0x0C0BC6FAu);
	r0 = R32(r10 + 0x8u); UPD(0x0C0BC6FCu, 1);  /* 0C0BC6FA mov.l @(disp,Rm),Rn */
	r3 = 0xFFFFFFFCu;  /* 0C0BC6FC mov #imm,Rn */
	r3 &= r0;  /* 0C0BC6FE and Rm,Rn */
	r0 += 0x1u;  /* 0C0BC700 add #imm,Rn */
	r0 &= 0x3u;  /* 0C0BC702 and #imm,r0 */
	r9 = 0x0u;  /* 0C0BC704 mov #imm,Rn */
	r3 |= r0;  /* 0C0BC706 or Rm,Rn */
	W8(r7, r9); UPD(0x0C0BC70Au, 7);  /* 0C0BC708 mov.b Rm,@Rn */
	W32(r10 + 0x8u, r3); UPD(0x0C0BC70Cu, 1);  /* 0C0BC70A mov.l Rm,@(disp,Rn) */
L_0C0BC70C: BLKS(0x0C0BC70Cu);
	r9 = 0xC062780u; UPD(0x0C0BC70Eu, 1);  /* 0C0BC70C mov.l @(disp,pc),Rn */
	r4 = 0x3E8u; UPD(0x0C0BC710u, 1);  /* 0C0BC70E mov.w @(disp,pc),Rn */
	IF(0x0C0BC710u); { u32 t_ = r9; PR = 0x0C0BC714u; r10 = 0x9u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0BC714u); }  /* 0C0BC710 jsr @Rn */
L_0C0BC714: BLKS(0x0C0BC714u);
	T = (s32)r0 > (s32)r10;  /* 0C0BC714 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C0BC6BCu, 4); goto L_0C0BC6BC; }  /* 0C0BC716 bt */
L_0C0BC718: BLKS(0x0C0BC718u);
	r8 = 0x38u;  /* 0C0BC718 mov #imm,Rn */
	IF(0x0C0BC71Au); MACL = r11 * r8;  /* 0C0BC71A mul.l Rm,Rn */
	r7 = 0xC28F68Du; UPD(0x0C0BC71Eu, 4);  /* 0C0BC71C mov.l @(disp,pc),Rn */
	r4 = 0x4u;  /* 0C0BC71E mov #imm,Rn */
	IF(0x0C0BC720u); r11 = MACL;  /* 0C0BC720 sts macl,Rn */
	IF(0x0C0BC722u); { u32 t_ = r9; PR = 0x0C0BC726u; r11 += r7; /* slot add Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0BC726u); }  /* 0C0BC722 jsr @Rn */
L_0C0BC726: BLKS(0x0C0BC726u);
	{ W8(r11, r0); /* slot mov.b Rm,@Rn */ UPD(0x0C0BC6BCu, 3); goto L_0C0BC6BC; }  /* 0C0BC726 bra */
L_0C0BC730: BLKS(0x0C0BC730u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0BC6B2u, 3); goto L_0C0BC6B2; }  /* 0C0BC730 bra */
L_0C0BC740: BLKS(0x0C0BC740u);
	{ r3 = 0u - r3; /* slot neg Rm,Rn */ UPD(0x0C0BC69Cu, 3); goto L_0C0BC69C; }  /* 0C0BC740 bra */
}

void blk_f_0C0BC780(sh3_t *c)
{
	LOCALS;
L_0C0BC780: BLKS(0x0C0BC780u);
	r0 = 0x38u;  /* 0C0BC780 mov #imm,Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C0BC782 exts.w Rm,Rn */
	IF(0x0C0BC784u); MACL = r4 * r0;  /* 0C0BC784 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0BC788u, 5);  /* 0C0BC786 mov.l Rm,@-Rn */
	r0 = 0xC28F65Cu; UPD(0x0C0BC78Au, 1);  /* 0C0BC788 mov.l @(disp,pc),Rn */
	IF(0x0C0BC78Au); r3 = MACL;  /* 0C0BC78A sts macl,Rn */
	r3 += r0;  /* 0C0BC78C add Rm,Rn */
	r1 = R32(r3 + 0x18u); UPD(0x0C0BC790u, 3);  /* 0C0BC78E mov.l @(disp,Rm),Rn */
	IF(0x0C0BC790u); T = (s32)r1 >= 0;  /* 0C0BC790 cmp/pz Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0BC79Au, 4); goto L_0C0BC79A; } goto L_0C0BC796; }  /* 0C0BC792 bt/s */
L_0C0BC796: BLKS(0x0C0BC796u);
	{ r1 += 0xFu; /* slot add #imm,Rn */ UPD(0x0C0BC900u, 4); goto L_0C0BC900; }  /* 0C0BC796 bra */
L_0C0BC79A: BLKS(0x0C0BC79Au);
	r6 = 0xFFFFFFFCu;  /* 0C0BC79A mov #imm,Rn */
	UPD(0x0C0BC79Cu, 1);
L_0C0BC79C: BLKS(0x0C0BC79Cu);
	IF(0x0C0BC79Cu); ARG0(0x416Cu); { s32 s_ = (s32)r6; if (s_ >= 0) r1 <<= (s_ & 31); else if ((s_ & 31) == 0) r1 = (u32)((s32)r1 >> 31); else r1 = (u32)((s32)r1 >> ((~s_ & 31) + 1)); }  /* 0C0BC79C shad Rm,Rn */
	r7 = 0xFu;  /* 0C0BC79E mov #imm,Rn */
	IF(0x0C0BC7A0u); MACL = r1 * r7;  /* 0C0BC7A0 mul.l Rm,Rn */
	r1 = R32(r3 + 0x1Cu); UPD(0x0C0BC7A4u, 5);  /* 0C0BC7A2 mov.l @(disp,Rm),Rn */
	IF(0x0C0BC7A4u); r0 = MACL;  /* 0C0BC7A4 sts macl,Rn */
	IF(0x0C0BC7A6u); T = (s32)r1 >= 0;  /* 0C0BC7A6 cmp/pz Rn */
	{ u32 c_ = T; W32(r3 + 0x18u, r0); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0BC7B0u, 5); goto L_0C0BC7B0; } UPD(0x0C0BC7ACu, 1); goto L_0C0BC7AC; }  /* 0C0BC7A8 bt/s */
L_0C0BC7AC: BLKS(0x0C0BC7ACu);
	{ r1 += 0xFu; /* slot add #imm,Rn */ UPD(0x0C0BC8F0u, 3); goto L_0C0BC8F0; }  /* 0C0BC7AC bra */
L_0C0BC7B0: BLKS(0x0C0BC7B0u);
	IF(0x0C0BC7B0u); ARG0(0x416Cu); { s32 s_ = (s32)r6; if (s_ >= 0) r1 <<= (s_ & 31); else if ((s_ & 31) == 0) r1 = (u32)((s32)r1 >> 31); else r1 = (u32)((s32)r1 >> ((~s_ & 31) + 1)); }  /* 0C0BC7B0 shad Rm,Rn */
	UPD(0x0C0BC7B2u, 1);
L_0C0BC7B2: BLKS(0x0C0BC7B2u);
	IF(0x0C0BC7B2u); MACL = r1 * r7;  /* 0C0BC7B2 mul.l Rm,Rn */
	r2 = 0xC23945Cu; UPD(0x0C0BC7B6u, 3);  /* 0C0BC7B4 mov.l @(disp,pc),Rn */
	IF(0x0C0BC7B6u); r5 = MACL;  /* 0C0BC7B6 sts macl,Rn */
	W32(r3 + 0x1Cu, r5); UPD(0x0C0BC7BAu, 2);  /* 0C0BC7B8 mov.l Rm,@(disp,Rn) */
	r1 = R32(r2); UPD(0x0C0BC7BCu, 1);  /* 0C0BC7BA mov.l @Rm,Rn */
	r2 = R32(r3 + 0x24u); UPD(0x0C0BC7BEu, 1);  /* 0C0BC7BC mov.l @(disp,Rm),Rn */
	r1 -= r2;  /* 0C0BC7BE sub Rm,Rn */
	IF(0x0C0BC7C0u); T = (s32)r1 >= 0;  /* 0C0BC7C0 cmp/pz Rn */
	if (T) { UPD(0x0C0BC7CAu, 5); goto L_0C0BC7CA; }  /* 0C0BC7C2 bt */
L_0C0BC7C4: BLKS(0x0C0BC7C4u);
	r1 += 0xFu;  /* 0C0BC7C4 add #imm,Rn */
	{ IF(0x0C0BC7C8u); ARG0(0x416Cu); { s32 s_ = (s32)r6; if (s_ >= 0) r1 <<= (s_ & 31); else if ((s_ & 31) == 0) r1 = (u32)((s32)r1 >> 31); else r1 = (u32)((s32)r1 >> ((~s_ & 31) + 1)); } /* slot shad Rm,Rn */ UPD(0x0C0BC7CCu, 4); goto L_0C0BC7CC; }  /* 0C0BC7C6 bra */
L_0C0BC7CA: BLKS(0x0C0BC7CAu);
	IF(0x0C0BC7CAu); ARG0(0x416Cu); { s32 s_ = (s32)r6; if (s_ >= 0) r1 <<= (s_ & 31); else if ((s_ & 31) == 0) r1 = (u32)((s32)r1 >> 31); else r1 = (u32)((s32)r1 >> ((~s_ & 31) + 1)); }  /* 0C0BC7CA shad Rm,Rn */
	UPD(0x0C0BC7CCu, 1);
L_0C0BC7CC: BLKS(0x0C0BC7CCu);
	IF(0x0C0BC7CCu); MACL = r1 * r7;  /* 0C0BC7CC mul.l Rm,Rn */
	IF(0x0C0BC7CEu); r6 = MACL;  /* 0C0BC7CE sts macl,Rn */
	r6 += r2;  /* 0C0BC7D0 add Rm,Rn */
	r2 = R32(r3 + 0x10u); UPD(0x0C0BC7D4u, 5);  /* 0C0BC7D2 mov.l @(disp,Rm),Rn */
	W32(r3 + 0x24u, r6); UPD(0x0C0BC7D6u, 1);  /* 0C0BC7D4 mov.l Rm,@(disp,Rn) */
	r2 += r0;  /* 0C0BC7D6 add Rm,Rn */
	r2 -= r6;  /* 0C0BC7D8 sub Rm,Rn */
	r6 = R32(r3 + 0x14u); UPD(0x0C0BC7DCu, 3);  /* 0C0BC7DA mov.l @(disp,Rm),Rn */
	r7 = 0xFF600000u; UPD(0x0C0BC7DEu, 1);  /* 0C0BC7DC mov.l @(disp,pc),Rn */
	r6 += r5;  /* 0C0BC7DE add Rm,Rn */
	r7 += r2;  /* 0C0BC7E0 add Rm,Rn */
	W32(r3 + 0x10u, r2); UPD(0x0C0BC7E4u, 3);  /* 0C0BC7E2 mov.l Rm,@(disp,Rn) */
	IF(0x0C0BC7E4u); T = (s32)r7 >= 0;  /* 0C0BC7E4 cmp/pz Rn */
	{ u32 c_ = !T; W32(r3 + 0x14u, r6); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0BC8E0u, 4); goto L_0C0BC8E0; } UPD(0x0C0BC7EAu, 1); goto L_0C0BC7EA; }  /* 0C0BC7E6 bf/s */
L_0C0BC7EA: BLKS(0x0C0BC7EAu);
	r5 = 0xA80000u; UPD(0x0C0BC7ECu, 1);  /* 0C0BC7EA mov.l @(disp,pc),Rn */
	T = (s32)r7 > (s32)r5;  /* 0C0BC7EC cmp/gt Rm,Rn */
	{ u32 c_ = T; r1 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BC80Au, 4); goto L_0C0BC80A; } goto L_0C0BC7F2; }  /* 0C0BC7EE bt/s */
L_0C0BC7F2: BLKS(0x0C0BC7F2u);
	r2 = 0xC3C4048u; UPD(0x0C0BC7F4u, 2);  /* 0C0BC7F2 mov.l @(disp,pc),Rn */
	r0 = R32(r2); UPD(0x0C0BC7F6u, 1);  /* 0C0BC7F4 mov.l @Rm,Rn */
	r7 = 0xFF880000u; UPD(0x0C0BC7F8u, 1);  /* 0C0BC7F6 mov.l @(disp,pc),Rn */
	r2 = r6;  /* 0C0BC7F8 mov Rm,Rn */
	r2 -= r0;  /* 0C0BC7FA sub Rm,Rn */
	r2 += r7;  /* 0C0BC7FC add Rm,Rn */
	IF(0x0C0BC7FEu); T = (s32)r2 >= 0;  /* 0C0BC7FE cmp/pz Rn */
	if (!T) { UPD(0x0C0BC8D0u, 7); goto L_0C0BC8D0; }  /* 0C0BC800 bf */
L_0C0BC802: BLKS(0x0C0BC802u);
	r6 = 0x800000u; UPD(0x0C0BC804u, 1);  /* 0C0BC802 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r6;  /* 0C0BC804 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r1 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BC820u, 4); goto L_0C0BC820; } UPD(0x0C0BC80Au, 1); goto L_0C0BC80A; }  /* 0C0BC806 bf/s */
L_0C0BC80A: BLKS(0x0C0BC80Au);
	W32(r3, r1); UPD(0x0C0BC80Cu, 1);  /* 0C0BC80A mov.l Rm,@Rn */
L_0C0BC80C: BLKS(0x0C0BC80Cu);
	r15 = r14;  /* 0C0BC80C mov Rm,Rn */
	IF(0x0C0BC80Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0BC80E rts */
L_0C0BC820: BLKS(0x0C0BC820u);
	r7 = r3;  /* 0C0BC820 mov Rm,Rn */
	r7 += 0x31u;  /* 0C0BC822 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r7); UPD(0x0C0BC826u, 3);  /* 0C0BC824 mov.b @Rm,Rn */
	r3 += 0x32u;  /* 0C0BC826 add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r3); UPD(0x0C0BC82Au, 2);  /* 0C0BC828 mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C0BC82A add #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C0BC82C extu.b Rm,Rn */
	r5 = r6 & 0xFF;  /* 0C0BC82E extu.b Rm,Rn */
	W8(r7, r1); UPD(0x0C0BC832u, 4);  /* 0C0BC830 mov.b Rm,@Rn */
	T = r0 == r5;  /* 0C0BC832 cmp/eq Rm,Rn */
	{ u32 c_ = T; r3 += 0xFFFFFFCEu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0BC8B0u, 4); goto L_0C0BC8B0; } UPD(0x0C0BC838u, 1); goto L_0C0BC838; }  /* 0C0BC834 bt/s */
L_0C0BC838: BLKS(0x0C0BC838u);
	r3 = 0x38u;  /* 0C0BC838 mov #imm,Rn */
	IF(0x0C0BC83Au); MACL = r4 * r3;  /* 0C0BC83A mul.l Rm,Rn */
	r5 = 0x2000000u; UPD(0x0C0BC83Eu, 4);  /* 0C0BC83C mov.l @(disp,pc),Rn */
	r4 = 0xC28F65Cu; UPD(0x0C0BC840u, 1);  /* 0C0BC83E mov.l @(disp,pc),Rn */
	IF(0x0C0BC840u); r3 = MACL;  /* 0C0BC840 sts macl,Rn */
	r3 += r4;  /* 0C0BC842 add Rm,Rn */
	r7 = R32(r3 + 0x28u); UPD(0x0C0BC846u, 3);  /* 0C0BC844 mov.l @(disp,Rm),Rn */
	T = (r7 & r5) == 0;  /* 0C0BC846 tst Rm,Rn */
	{ u32 c_ = !T; r1 = r3; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0BC8A0u, 4); goto L_0C0BC8A0; } goto L_0C0BC84C; }  /* 0C0BC848 bf/s */
L_0C0BC84C: BLKS(0x0C0BC84Cu);
	r1 += 0x30u;  /* 0C0BC84C add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r1); UPD(0x0C0BC850u, 3);  /* 0C0BC84E mov.b @Rm,Rn */
	r6 += 0x1u;  /* 0C0BC850 add #imm,Rn */
	r0 = r6 & 0xFF;  /* 0C0BC852 extu.b Rm,Rn */
	W8(r1, r6); UPD(0x0C0BC856u, 3);  /* 0C0BC854 mov.b Rm,@Rn */
	T = (r0 & r0) == 0;  /* 0C0BC856 tst Rm,Rn */
	r2 = R32(r3 + 0x18u); UPD(0x0C0BC85Au, 2);  /* 0C0BC858 mov.l @(disp,Rm),Rn */
	IF(0x0C0BC85Au); r6 = T;  /* 0C0BC85A movt Rn */
	IF(0x0C0BC85Cu); T = (s32)r2 >= 0;  /* 0C0BC85C cmp/pz Rn */
	if (!T) { UPD(0x0C0BC890u, 5); goto L_0C0BC890; }  /* 0C0BC85E bf */
L_0C0BC860: BLKS(0x0C0BC860u);
	r1 = R32(r3 + 0x1Cu); UPD(0x0C0BC862u, 1);  /* 0C0BC860 mov.l @(disp,Rm),Rn */
	IF(0x0C0BC862u); T = (s32)r1 >= 0;  /* 0C0BC862 cmp/pz Rn */
	if (!T) { UPD(0x0C0BC880u, 4); goto L_0C0BC880; }  /* 0C0BC864 bf */
L_0C0BC866: BLKS(0x0C0BC866u);
	r4 = 0xFFFFu; UPD(0x0C0BC868u, 1);  /* 0C0BC866 mov.l @(disp,pc),Rn */
	r2 += r1;  /* 0C0BC868 add Rm,Rn */
	T = (s32)r4 >= (s32)r2;  /* 0C0BC86A cmp/ge Rm,Rn */
	IF(0x0C0BC86Cu); r2 = T;  /* 0C0BC86C movt Rn */
	r6 |= r2;  /* 0C0BC86E or Rm,Rn */
	T = (r6 & r6) == 0;  /* 0C0BC870 tst Rm,Rn */
	if (T) { UPD(0x0C0BC80Cu, 8); goto L_0C0BC80C; }  /* 0C0BC872 bt */
L_0C0BC874: BLKS(0x0C0BC874u);
	r7 |= r5;  /* 0C0BC874 or Rm,Rn */
	{ W32(r3 + 0x28u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0BC80Cu, 4); goto L_0C0BC80C; }  /* 0C0BC876 bra */
L_0C0BC880: BLKS(0x0C0BC880u);
	{ r1 = 0u - r1; /* slot neg Rm,Rn */ UPD(0x0C0BC866u, 3); goto L_0C0BC866; }  /* 0C0BC880 bra */
L_0C0BC890: BLKS(0x0C0BC890u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0BC860u, 3); goto L_0C0BC860; }  /* 0C0BC890 bra */
L_0C0BC8A0: BLKS(0x0C0BC8A0u);
	r5 = 0xFFFFFAFBu; UPD(0x0C0BC8A2u, 1);  /* 0C0BC8A0 mov.w @(disp,pc),Rn */
	r5 += r7;  /* 0C0BC8A2 add Rm,Rn */
	r1 = r5 & 0xFFFF;  /* 0C0BC8A4 extu.w Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C0BC8A6 tst Rm,Rn */
	{ u32 c_ = T; W32(r3 + 0x28u, r5); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0BC80Au, 6); goto L_0C0BC80A; } UPD(0x0C0BC8ACu, 1); goto L_0C0BC8AC; }  /* 0C0BC8A8 bt/s */
L_0C0BC8AC: BLKS(0x0C0BC8ACu);
	{ IF(0x0C0BC8AEu); ; /* slot nop */ UPD(0x0C0BC80Cu, 3); goto L_0C0BC80C; }  /* 0C0BC8AC bra */
L_0C0BC8B0: BLKS(0x0C0BC8B0u);
	r0 = R32(r3 + 0xCu); UPD(0x0C0BC8B2u, 1);  /* 0C0BC8B0 mov.l @(disp,Rm),Rn */
	r2 = 0x0u;  /* 0C0BC8B2 mov #imm,Rn */
	r0 += 0x1u;  /* 0C0BC8B4 add #imm,Rn */
	W8(r7, r2); UPD(0x0C0BC8B8u, 3);  /* 0C0BC8B6 mov.b Rm,@Rn */
	T = r0 == 0xFu;  /* 0C0BC8B8 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W32(r3 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0BC838u, 4); goto L_0C0BC838; } UPD(0x0C0BC8BEu, 1); goto L_0C0BC8BE; }  /* 0C0BC8BA bf/s */
L_0C0BC8BE: BLKS(0x0C0BC8BEu);
	r7 = 0x0u;  /* 0C0BC8BE mov #imm,Rn */
	{ W32(r3 + 0xCu, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0BC838u, 4); goto L_0C0BC838; }  /* 0C0BC8C0 bra */
L_0C0BC8D0: BLKS(0x0C0BC8D0u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0BC802u, 3); goto L_0C0BC802; }  /* 0C0BC8D0 bra */
L_0C0BC8E0: BLKS(0x0C0BC8E0u);
	{ r7 = 0u - r7; /* slot neg Rm,Rn */ UPD(0x0C0BC7EAu, 3); goto L_0C0BC7EA; }  /* 0C0BC8E0 bra */
L_0C0BC8F0: BLKS(0x0C0BC8F0u);
	{ IF(0x0C0BC8F2u); ARG0(0x416Cu); { s32 s_ = (s32)r6; if (s_ >= 0) r1 <<= (s_ & 31); else if ((s_ & 31) == 0) r1 = (u32)((s32)r1 >> 31); else r1 = (u32)((s32)r1 >> ((~s_ & 31) + 1)); } /* slot shad Rm,Rn */ UPD(0x0C0BC7B2u, 3); goto L_0C0BC7B2; }  /* 0C0BC8F0 bra */
L_0C0BC900: BLKS(0x0C0BC900u);
	{ r6 = 0xFFFFFFFCu; /* slot mov #imm,Rn */ UPD(0x0C0BC79Cu, 3); goto L_0C0BC79C; }  /* 0C0BC900 bra */
}

void blk_f_0C0BC930(sh3_t *c)
{
	LOCALS;
L_0C0BC930: BLKS(0x0C0BC930u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0BC932u, 1);  /* 0C0BC930 mov.l Rm,@-Rn */
	r5 = 0x7u;  /* 0C0BC932 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0BC936u, 2);  /* 0C0BC934 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0BC938u, 1);  /* 0C0BC936 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0BC93Au, 1);  /* 0C0BC938 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0BC93Cu, 1);  /* 0C0BC93A mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0BC93Eu, 1);  /* 0C0BC93C mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0BC940u, 1);  /* 0C0BC93E mov.l Rm,@-Rn */
	r3 = 0xC2ABAA4u; UPD(0x0C0BC942u, 1);  /* 0C0BC940 mov.l @(disp,pc),Rn */
	IF(0x0C0BC942u); r15 -= 4; W32(r15, PR); UPD(0x0C0BC944u, 1);  /* 0C0BC942 sts.l pr,@-Rn */
	r4 = R32(r3); UPD(0x0C0BC946u, 1);  /* 0C0BC944 mov.l @Rm,Rn */
	r14 = r15;  /* 0C0BC946 mov Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r4); r4 += 2; r10 = v_; } UPD(0x0C0BC94Au, 2);  /* 0C0BC948 mov.w @Rm+,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r4); r4 += 2; r11 = v_; } UPD(0x0C0BC94Cu, 1);  /* 0C0BC94A mov.w @Rm+,Rn */
	IF(0x0C0BC94Cu); r10 <<= 16;  /* 0C0BC94C shll16 Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r4); r4 += 2; r9 = v_; } UPD(0x0C0BC950u, 2);  /* 0C0BC94E mov.w @Rm+,Rn */
	IF(0x0C0BC950u); r11 <<= 16;  /* 0C0BC950 shll16 Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r4); r4 += 2; r2 = v_; } UPD(0x0C0BC954u, 2);  /* 0C0BC952 mov.w @Rm+,Rn */
	IF(0x0C0BC954u); r9 <<= 16;  /* 0C0BC954 shll16 Rn */
	r5 &= r2;  /* 0C0BC956 and Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r4); r4 += 2; r8 = v_; } UPD(0x0C0BC95Au, 3);  /* 0C0BC958 mov.w @Rm+,Rn */
	IF(0x0C0BC95Au); r5 <<= 2;  /* 0C0BC95A shll2 Rn */
	r1 = 0xC1FFD04u; UPD(0x0C0BC95Eu, 2);  /* 0C0BC95C mov.l @(disp,pc),Rn */
	r0 = r5;  /* 0C0BC95E mov Rm,Rn */
	IF(0x0C0BC960u); r12 = R32(r0 + r1); UPD(0x0C0BC962u, 2);  /* 0C0BC960 mov.l @(r0,Rm),Rn */
	T = (r8 & r8) == 0;  /* 0C0BC962 tst Rm,Rn */
	{ u32 c_ = T; W32(r3, r4); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C0BC9C8u, 4); goto L_0C0BC9C8; } UPD(0x0C0BC968u, 1); goto L_0C0BC968; }  /* 0C0BC964 bt/s */
L_0C0BC968: BLKS(0x0C0BC968u);
	r13 = r3;  /* 0C0BC968 mov Rm,Rn */
	IF(0x0C0BC96Au); ;  /* 0C0BC96A nop */
	UPD(0x0C0BC96Cu, 2);
L_0C0BC96C: BLKS(0x0C0BC96Cu);
	r0 = 0xC0BCA00u; UPD(0x0C0BC96Eu, 1);  /* 0C0BC96C mov.l @(disp,pc),Rn */
	IF(0x0C0BC96Eu); { u32 t_ = r0; PR = 0x0C0BC972u; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BCA00, 0x0C0BCA00u, 0x0C0BC972u); }  /* 0C0BC96E jsr @Rn */
L_0C0BC972: BLKS(0x0C0BC972u);
	T = (r0 & r0) == 0;  /* 0C0BC972 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BC9CAu, 4); goto L_0C0BC9CA; } goto L_0C0BC978; }  /* 0C0BC974 bt/s */
L_0C0BC978: BLKS(0x0C0BC978u);
	r5 = 0xC28EDFCu; UPD(0x0C0BC97Au, 2);  /* 0C0BC978 mov.l @(disp,pc),Rn */
	r6 = 0x38u;  /* 0C0BC97A mov #imm,Rn */
	r7 = (u32)(s32)(s16)R16(r5); UPD(0x0C0BC97Eu, 2);  /* 0C0BC97C mov.w @Rm,Rn */
	r0 = 0x22u;  /* 0C0BC97E mov #imm,Rn */
	IF(0x0C0BC980u); MACL = r7 * r6;  /* 0C0BC980 mul.l Rm,Rn */
	r4 = 0xC28F65Cu; UPD(0x0C0BC984u, 4);  /* 0C0BC982 mov.l @(disp,pc),Rn */
	IF(0x0C0BC984u); T = (s32)r8 >= 0;  /* 0C0BC984 cmp/pz Rn */
	IF(0x0C0BC986u); r2 = MACL;  /* 0C0BC986 sts macl,Rn */
	r2 += r4;  /* 0C0BC988 add Rm,Rn */
	r3 = 0xC0000000u; UPD(0x0C0BC98Cu, 4);  /* 0C0BC98A mov.l @(disp,pc),Rn */
	W32(r2 + 0x4u, r0); UPD(0x0C0BC98Eu, 1);  /* 0C0BC98C mov.l Rm,@(disp,Rn) */
	W32(r2, r3); UPD(0x0C0BC990u, 1);  /* 0C0BC98E mov.l Rm,@Rn */
	{ u32 c_ = !T; r0 = r8; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0BC9E0u, 3); goto L_0C0BC9E0; } UPD(0x0C0BC994u, 1); goto L_0C0BC994; }  /* 0C0BC990 bf/s */
L_0C0BC994: BLKS(0x0C0BC994u);
	IF(0x0C0BC994u); r0 >>= 2;  /* 0C0BC994 shlr2 Rn */
	IF(0x0C0BC996u); r0 >>= 2;  /* 0C0BC996 shlr2 Rn */
	r4 = 0xFu;  /* 0C0BC998 mov #imm,Rn */
	r0 &= 0xFu;  /* 0C0BC99A and #imm,r0 */
	r8 &= r4;  /* 0C0BC99C and Rm,Rn */
	W32(r2 + 0x8u, r0); UPD(0x0C0BC9A0u, 6);  /* 0C0BC99E mov.l Rm,@(disp,Rn) */
	W32(r2 + 0xCu, r8); UPD(0x0C0BC9A2u, 1);  /* 0C0BC9A0 mov.l Rm,@(disp,Rn) */
	r0 = 0x17u;  /* 0C0BC9A2 mov #imm,Rn */
	W32(r2 + 0x1Cu, r9); UPD(0x0C0BC9A6u, 2);  /* 0C0BC9A4 mov.l Rm,@(disp,Rn) */
	r8 = 0x0u;  /* 0C0BC9A6 mov #imm,Rn */
	W32(r2 + 0x14u, r9); UPD(0x0C0BC9AAu, 2);  /* 0C0BC9A8 mov.l Rm,@(disp,Rn) */
	W32(r2 + 0x18u, r10); UPD(0x0C0BC9ACu, 1);  /* 0C0BC9AA mov.l Rm,@(disp,Rn) */
	W32(r2 + 0x10u, r10); UPD(0x0C0BC9AEu, 1);  /* 0C0BC9AC mov.l Rm,@(disp,Rn) */
	r2 += 0x33u;  /* 0C0BC9AE add #imm,Rn */
	W8(r2, r0); UPD(0x0C0BC9B2u, 2);  /* 0C0BC9B0 mov.b Rm,@Rn */
	r2 += 0xFFFFFFCDu;  /* 0C0BC9B2 add #imm,Rn */
	W32(r2 + 0x28u, r8); UPD(0x0C0BC9B6u, 2);  /* 0C0BC9B4 mov.l Rm,@(disp,Rn) */
	W32(r2 + 0x2Cu, r12); UPD(0x0C0BC9B8u, 1);  /* 0C0BC9B6 mov.l Rm,@(disp,Rn) */
	W32(r2 + 0x20u, r11); UPD(0x0C0BC9BAu, 1);  /* 0C0BC9B8 mov.l Rm,@(disp,Rn) */
	r2 = R32(r13); UPD(0x0C0BC9BCu, 1);  /* 0C0BC9BA mov.l @Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r2); r2 += 2; r8 = v_; } UPD(0x0C0BC9BEu, 1);  /* 0C0BC9BC mov.w @Rm+,Rn */
	r3 = 0x80000u; UPD(0x0C0BC9C0u, 1);  /* 0C0BC9BE mov.l @(disp,pc),Rn */
	T = (r8 & r8) == 0;  /* 0C0BC9C0 tst Rm,Rn */
	W32(r13, r2); UPD(0x0C0BC9C4u, 2);  /* 0C0BC9C2 mov.l Rm,@Rn */
	{ u32 c_ = !T; r9 += r3; /* slot add Rm,Rn */ if (c_) { UPD(0x0C0BC96Cu, 3); goto L_0C0BC96C; } UPD(0x0C0BC9C8u, 1); goto L_0C0BC9C8; }  /* 0C0BC9C4 bf/s */
L_0C0BC9C8: BLKS(0x0C0BC9C8u);
	r0 = 0x1u;  /* 0C0BC9C8 mov #imm,Rn */
	UPD(0x0C0BC9CAu, 1);
L_0C0BC9CA: BLKS(0x0C0BC9CAu);
	r15 = r14;  /* 0C0BC9CA mov Rm,Rn */
	IF(0x0C0BC9CCu); PR = R32(r15); r15 += 4; UPD(0x0C0BC9CEu, 2);  /* 0C0BC9CC lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0BC9D0u, 1);  /* 0C0BC9CE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0BC9D2u, 1);  /* 0C0BC9D0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0BC9D4u, 1);  /* 0C0BC9D2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0BC9D6u, 1);  /* 0C0BC9D4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0BC9D8u, 1);  /* 0C0BC9D6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0BC9DAu, 1);  /* 0C0BC9D8 mov.l @Rm+,Rn */
	IF(0x0C0BC9DAu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0BC9DA rts */
L_0C0BC9E0: BLKS(0x0C0BC9E0u);
	{ r0 += 0xFu; /* slot add #imm,Rn */ UPD(0x0C0BC994u, 3); goto L_0C0BC994; }  /* 0C0BC9E0 bra */
}

/* FUN_0c0bca00 */
void blk_f_0C0BCA00(sh3_t *c)
{
	LOCALS;
L_0C0BCA00: BLKS(0x0C0BCA00u);
	r3 = 0x200u; UPD(0x0C0BCA02u, 1);  /* 0C0BCA00 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C0BCA02 exts.w Rm,Rn */
	T = (s32)r4 > (s32)r3;  /* 0C0BCA04 cmp/gt Rm,Rn */
	IF(0x0C0BCA06u); r0 = T;  /* 0C0BCA06 movt Rn */
	T = (r4 & r4) == 0;  /* 0C0BCA08 tst Rm,Rn */
	IF(0x0C0BCA0Au); r2 = T;  /* 0C0BCA0A movt Rn */
	r0 |= r2;  /* 0C0BCA0C or Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0BCA10u, 7);  /* 0C0BCA0E mov.l Rm,@-Rn */
	T = (r0 & r0) == 0;  /* 0C0BCA10 tst Rm,Rn */
	r7 = 0xC28EDFCu; UPD(0x0C0BCA14u, 2);  /* 0C0BCA12 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0BCA14 mov Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BCA9Cu, 4); goto L_0C0BCA9C; } goto L_0C0BCA1A; }  /* 0C0BCA16 bf/s */
L_0C0BCA1A: BLKS(0x0C0BCA1Au);
	r6 = 0xC28F604u; UPD(0x0C0BCA1Cu, 2);  /* 0C0BCA1A mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s16)R16(r6); UPD(0x0C0BCA1Eu, 1);  /* 0C0BCA1C mov.w @Rm,Rn */
	r5 = r2 & 0xFFFF;  /* 0C0BCA1E extu.w Rm,Rn */
	T = r5 == r3;  /* 0C0BCA20 cmp/eq Rm,Rn */
	{ u32 c_ = T; r3 = (u32)(s32)(s16)r2; /* slot exts.w Rm,Rn */ if (c_) { UPD(0x0C0BCA58u, 5); goto L_0C0BCA58; } goto L_0C0BCA26; }  /* 0C0BCA22 bt/s */
L_0C0BCA26: BLKS(0x0C0BCA26u);
	r1 = 0x1FFu; UPD(0x0C0BCA28u, 2);  /* 0C0BCA26 mov.w @(disp,pc),Rn */
	T = (s32)r3 > (s32)r1;  /* 0C0BCA28 cmp/gt Rm,Rn */
	{ u32 c_ = T; r2 = 0x38u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BCA58u, 4); goto L_0C0BCA58; } goto L_0C0BCA2E; }  /* 0C0BCA2A bt/s */
L_0C0BCA2E: BLKS(0x0C0BCA2Eu);
	IF(0x0C0BCA2Eu); MACL = r3 * r2;  /* 0C0BCA2E mul.l Rm,Rn */
	r0 = 0xC28F65Cu; UPD(0x0C0BCA32u, 4);  /* 0C0BCA30 mov.l @(disp,pc),Rn */
	r6 = r1;  /* 0C0BCA32 mov Rm,Rn */
	IF(0x0C0BCA34u); r2 = MACL;  /* 0C0BCA34 sts macl,Rn */
	r2 += r0;  /* 0C0BCA36 add Rm,Rn */
	UPD(0x0C0BCA38u, 3);
L_0C0BCA38: BLKS(0x0C0BCA38u);
	r5 = R32(r2); UPD(0x0C0BCA3Au, 1);  /* 0C0BCA38 mov.l @Rm,Rn */
	T = (r5 & r5) == 0;  /* 0C0BCA3A tst Rm,Rn */
	{ u32 c_ = !T; r2 += 0x38u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0BCA4Eu, 4); goto L_0C0BCA4E; } goto L_0C0BCA40; }  /* 0C0BCA3C bf/s */
L_0C0BCA40: BLKS(0x0C0BCA40u);
	r0 = r4;  /* 0C0BCA40 mov Rm,Rn */
	W16(r7, r3); UPD(0x0C0BCA44u, 3);  /* 0C0BCA42 mov.w Rm,@Rn */
	r0 += 0xFFFFFFFFu;  /* 0C0BCA44 add #imm,Rn */
	r4 = (u32)(s32)(s16)r0;  /* 0C0BCA46 exts.w Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C0BCA48 tst Rm,Rn */
	{ u32 c_ = T; r7 += 0x2u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0BCAC0u, 6); goto L_0C0BCAC0; } UPD(0x0C0BCA4Eu, 1); goto L_0C0BCA4E; }  /* 0C0BCA4A bt/s */
L_0C0BCA4E: BLKS(0x0C0BCA4Eu);
	r5 = r3;  /* 0C0BCA4E mov Rm,Rn */
	r5 += 0x1u;  /* 0C0BCA50 add #imm,Rn */
	r3 = (u32)(s32)(s16)r5;  /* 0C0BCA52 exts.w Rm,Rn */
	T = (s32)r3 > (s32)r6;  /* 0C0BCA54 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0BCA38u, 7); goto L_0C0BCA38; }  /* 0C0BCA56 bf */
L_0C0BCA58: BLKS(0x0C0BCA58u);
	r3 = 0xC3C86EEu; UPD(0x0C0BCA5Au, 1);  /* 0C0BCA58 mov.l @(disp,pc),Rn */
	r1 = 0x200u; UPD(0x0C0BCA5Cu, 1);  /* 0C0BCA5A mov.w @(disp,pc),Rn */
	r2 = (u32)(s32)(s16)R16(r3); UPD(0x0C0BCA5Eu, 1);  /* 0C0BCA5C mov.w @Rm,Rn */
	T = r2 == r1;  /* 0C0BCA5E cmp/eq Rm,Rn */
	if (T) { UPD(0x0C0BCA9Au, 4); goto L_0C0BCA9A; }  /* 0C0BCA60 bt */
L_0C0BCA62: BLKS(0x0C0BCA62u);
	r3 = (u32)(s32)(s16)r2;  /* 0C0BCA62 exts.w Rm,Rn */
	r1 += 0xFFFFFFFFu;  /* 0C0BCA64 add #imm,Rn */
	T = (s32)r3 > (s32)r1;  /* 0C0BCA66 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C0BCA9Au, 6); goto L_0C0BCA9A; }  /* 0C0BCA68 bt */
L_0C0BCA6A: BLKS(0x0C0BCA6Au);
	r2 = 0x38u;  /* 0C0BCA6A mov #imm,Rn */
	IF(0x0C0BCA6Cu); MACL = r3 * r2;  /* 0C0BCA6C mul.l Rm,Rn */
	r0 = 0xC28F65Cu; UPD(0x0C0BCA70u, 4);  /* 0C0BCA6E mov.l @(disp,pc),Rn */
	r6 = r1;  /* 0C0BCA70 mov Rm,Rn */
	IF(0x0C0BCA72u); r2 = MACL;  /* 0C0BCA72 sts macl,Rn */
	r2 += r0;  /* 0C0BCA74 add Rm,Rn */
	IF(0x0C0BCA76u); ;  /* 0C0BCA76 nop */
	UPD(0x0C0BCA78u, 4);
L_0C0BCA78: BLKS(0x0C0BCA78u);
	r0 = R32(r2); UPD(0x0C0BCA7Au, 1);  /* 0C0BCA78 mov.l @Rm,Rn */
	r0 &= 0x3u;  /* 0C0BCA7A and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0BCA7C tst Rm,Rn */
	{ u32 c_ = T; r2 += 0x38u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0BCA90u, 5); goto L_0C0BCA90; } goto L_0C0BCA82; }  /* 0C0BCA7E bt/s */
L_0C0BCA82: BLKS(0x0C0BCA82u);
	r5 = r4;  /* 0C0BCA82 mov Rm,Rn */
	W16(r7, r3); UPD(0x0C0BCA86u, 3);  /* 0C0BCA84 mov.w Rm,@Rn */
	r5 += 0xFFFFFFFFu;  /* 0C0BCA86 add #imm,Rn */
	r4 = (u32)(s32)(s16)r5;  /* 0C0BCA88 exts.w Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C0BCA8A tst Rm,Rn */
	{ u32 c_ = T; r7 += 0x2u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0BCAB0u, 6); goto L_0C0BCAB0; } UPD(0x0C0BCA90u, 1); goto L_0C0BCA90; }  /* 0C0BCA8C bt/s */
L_0C0BCA90: BLKS(0x0C0BCA90u);
	r0 = r3;  /* 0C0BCA90 mov Rm,Rn */
	r0 += 0x1u;  /* 0C0BCA92 add #imm,Rn */
	r3 = (u32)(s32)(s16)r0;  /* 0C0BCA94 exts.w Rm,Rn */
	T = (s32)r3 > (s32)r6;  /* 0C0BCA96 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0BCA78u, 7); goto L_0C0BCA78; }  /* 0C0BCA98 bf */
L_0C0BCA9A: BLKS(0x0C0BCA9Au);
	r0 = 0x0u;  /* 0C0BCA9A mov #imm,Rn */
	UPD(0x0C0BCA9Cu, 1);
L_0C0BCA9C: BLKS(0x0C0BCA9Cu);
	r15 = r14;  /* 0C0BCA9C mov Rm,Rn */
	IF(0x0C0BCA9Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0BCA9E rts */
L_0C0BCAB0: BLKS(0x0C0BCAB0u);
	r4 = 0x200u; UPD(0x0C0BCAB2u, 1);  /* 0C0BCAB0 mov.w @(disp,pc),Rn */
	r3 += 0x1u;  /* 0C0BCAB2 add #imm,Rn */
	r0 = 0xC28F604u; UPD(0x0C0BCAB6u, 2);  /* 0C0BCAB4 mov.l @(disp,pc),Rn */
	r1 = 0xC3C86EEu; UPD(0x0C0BCAB8u, 1);  /* 0C0BCAB6 mov.l @(disp,pc),Rn */
	W16(r0, r4); UPD(0x0C0BCABAu, 1);  /* 0C0BCAB8 mov.w Rm,@Rn */
L_0C0BCABA: BLKS(0x0C0BCABAu);
	W16(r1, r3); UPD(0x0C0BCABCu, 1);  /* 0C0BCABA mov.w Rm,@Rn */
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C0BCA9Cu, 3); goto L_0C0BCA9C; }  /* 0C0BCABC bra */
L_0C0BCAC0: BLKS(0x0C0BCAC0u);
	r1 = 0xC28F604u; UPD(0x0C0BCAC2u, 1);  /* 0C0BCAC0 mov.l @(disp,pc),Rn */
	{ r3 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C0BCABAu, 3); goto L_0C0BCABA; }  /* 0C0BCAC2 bra */
}

/* FUN_0c0bcae0 */
void blk_f_0C0BCAE0(sh3_t *c)
{
	LOCALS;
L_0C0BCAE0: BLKS(0x0C0BCAE0u);
	r3 = 0x200u; UPD(0x0C0BCAE2u, 1);  /* 0C0BCAE0 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C0BCAE2 exts.w Rm,Rn */
	T = (s32)r4 > (s32)r3;  /* 0C0BCAE4 cmp/gt Rm,Rn */
	IF(0x0C0BCAE6u); r0 = T;  /* 0C0BCAE6 movt Rn */
	T = (r4 & r4) == 0;  /* 0C0BCAE8 tst Rm,Rn */
	IF(0x0C0BCAEAu); r2 = T;  /* 0C0BCAEA movt Rn */
	r0 |= r2;  /* 0C0BCAEC or Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0BCAF0u, 7);  /* 0C0BCAEE mov.l Rm,@-Rn */
	T = (r0 & r0) == 0;  /* 0C0BCAF0 tst Rm,Rn */
	r7 = 0xC28EDFCu; UPD(0x0C0BCAF4u, 2);  /* 0C0BCAF2 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0BCAF4 mov Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BCB7Cu, 4); goto L_0C0BCB7C; } goto L_0C0BCAFA; }  /* 0C0BCAF6 bf/s */
L_0C0BCAFA: BLKS(0x0C0BCAFAu);
	r6 = 0xC28F604u; UPD(0x0C0BCAFCu, 2);  /* 0C0BCAFA mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s16)R16(r6); UPD(0x0C0BCAFEu, 1);  /* 0C0BCAFC mov.w @Rm,Rn */
	r5 = r2 & 0xFFFF;  /* 0C0BCAFE extu.w Rm,Rn */
	T = r5 == r3;  /* 0C0BCB00 cmp/eq Rm,Rn */
	{ u32 c_ = T; r3 = (u32)(s32)(s16)r2; /* slot exts.w Rm,Rn */ if (c_) { UPD(0x0C0BCB38u, 5); goto L_0C0BCB38; } goto L_0C0BCB06; }  /* 0C0BCB02 bt/s */
L_0C0BCB06: BLKS(0x0C0BCB06u);
	r1 = 0x1FFu; UPD(0x0C0BCB08u, 2);  /* 0C0BCB06 mov.w @(disp,pc),Rn */
	T = (s32)r3 > (s32)r1;  /* 0C0BCB08 cmp/gt Rm,Rn */
	{ u32 c_ = T; r2 = 0x38u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BCB38u, 4); goto L_0C0BCB38; } goto L_0C0BCB0E; }  /* 0C0BCB0A bt/s */
L_0C0BCB0E: BLKS(0x0C0BCB0Eu);
	IF(0x0C0BCB0Eu); MACL = r3 * r2;  /* 0C0BCB0E mul.l Rm,Rn */
	r0 = 0xC28F65Cu; UPD(0x0C0BCB12u, 4);  /* 0C0BCB10 mov.l @(disp,pc),Rn */
	r6 = r1;  /* 0C0BCB12 mov Rm,Rn */
	IF(0x0C0BCB14u); r2 = MACL;  /* 0C0BCB14 sts macl,Rn */
	r2 += r0;  /* 0C0BCB16 add Rm,Rn */
	UPD(0x0C0BCB18u, 3);
L_0C0BCB18: BLKS(0x0C0BCB18u);
	r5 = R32(r2); UPD(0x0C0BCB1Au, 1);  /* 0C0BCB18 mov.l @Rm,Rn */
	T = (r5 & r5) == 0;  /* 0C0BCB1A tst Rm,Rn */
	{ u32 c_ = !T; r2 += 0x38u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0BCB2Eu, 4); goto L_0C0BCB2E; } goto L_0C0BCB20; }  /* 0C0BCB1C bf/s */
L_0C0BCB20: BLKS(0x0C0BCB20u);
	r0 = r4;  /* 0C0BCB20 mov Rm,Rn */
	W16(r7, r3); UPD(0x0C0BCB24u, 3);  /* 0C0BCB22 mov.w Rm,@Rn */
	r0 += 0xFFFFFFFFu;  /* 0C0BCB24 add #imm,Rn */
	r4 = (u32)(s32)(s16)r0;  /* 0C0BCB26 exts.w Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C0BCB28 tst Rm,Rn */
	{ u32 c_ = T; r7 += 0x2u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0BCBA0u, 6); goto L_0C0BCBA0; } UPD(0x0C0BCB2Eu, 1); goto L_0C0BCB2E; }  /* 0C0BCB2A bt/s */
L_0C0BCB2E: BLKS(0x0C0BCB2Eu);
	r5 = r3;  /* 0C0BCB2E mov Rm,Rn */
	r5 += 0x1u;  /* 0C0BCB30 add #imm,Rn */
	r3 = (u32)(s32)(s16)r5;  /* 0C0BCB32 exts.w Rm,Rn */
	T = (s32)r3 > (s32)r6;  /* 0C0BCB34 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0BCB18u, 7); goto L_0C0BCB18; }  /* 0C0BCB36 bf */
L_0C0BCB38: BLKS(0x0C0BCB38u);
	r3 = 0xC28EC80u; UPD(0x0C0BCB3Au, 1);  /* 0C0BCB38 mov.l @(disp,pc),Rn */
	r1 = 0x200u; UPD(0x0C0BCB3Cu, 1);  /* 0C0BCB3A mov.w @(disp,pc),Rn */
	r2 = (u32)(s32)(s16)R16(r3); UPD(0x0C0BCB3Eu, 1);  /* 0C0BCB3C mov.w @Rm,Rn */
	T = r2 == r1;  /* 0C0BCB3E cmp/eq Rm,Rn */
	if (T) { UPD(0x0C0BCB7Au, 4); goto L_0C0BCB7A; }  /* 0C0BCB40 bt */
L_0C0BCB42: BLKS(0x0C0BCB42u);
	r3 = (u32)(s32)(s16)r2;  /* 0C0BCB42 exts.w Rm,Rn */
	r1 += 0xFFFFFFFFu;  /* 0C0BCB44 add #imm,Rn */
	T = (s32)r3 > (s32)r1;  /* 0C0BCB46 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C0BCB7Au, 6); goto L_0C0BCB7A; }  /* 0C0BCB48 bt */
L_0C0BCB4A: BLKS(0x0C0BCB4Au);
	r2 = 0x38u;  /* 0C0BCB4A mov #imm,Rn */
	IF(0x0C0BCB4Cu); MACL = r3 * r2;  /* 0C0BCB4C mul.l Rm,Rn */
	r0 = 0xC28F65Cu; UPD(0x0C0BCB50u, 4);  /* 0C0BCB4E mov.l @(disp,pc),Rn */
	r6 = r1;  /* 0C0BCB50 mov Rm,Rn */
	IF(0x0C0BCB52u); r2 = MACL;  /* 0C0BCB52 sts macl,Rn */
	r2 += r0;  /* 0C0BCB54 add Rm,Rn */
	IF(0x0C0BCB56u); ;  /* 0C0BCB56 nop */
	UPD(0x0C0BCB58u, 4);
L_0C0BCB58: BLKS(0x0C0BCB58u);
	r0 = R32(r2); UPD(0x0C0BCB5Au, 1);  /* 0C0BCB58 mov.l @Rm,Rn */
	r0 &= 0x1u;  /* 0C0BCB5A and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0BCB5C tst Rm,Rn */
	{ u32 c_ = T; r2 += 0x38u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0BCB70u, 5); goto L_0C0BCB70; } goto L_0C0BCB62; }  /* 0C0BCB5E bt/s */
L_0C0BCB62: BLKS(0x0C0BCB62u);
	r5 = r4;  /* 0C0BCB62 mov Rm,Rn */
	W16(r7, r3); UPD(0x0C0BCB66u, 3);  /* 0C0BCB64 mov.w Rm,@Rn */
	r5 += 0xFFFFFFFFu;  /* 0C0BCB66 add #imm,Rn */
	r4 = (u32)(s32)(s16)r5;  /* 0C0BCB68 exts.w Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C0BCB6A tst Rm,Rn */
	{ u32 c_ = T; r7 += 0x2u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0BCB90u, 6); goto L_0C0BCB90; } UPD(0x0C0BCB70u, 1); goto L_0C0BCB70; }  /* 0C0BCB6C bt/s */
L_0C0BCB70: BLKS(0x0C0BCB70u);
	r0 = r3;  /* 0C0BCB70 mov Rm,Rn */
	r0 += 0x1u;  /* 0C0BCB72 add #imm,Rn */
	r3 = (u32)(s32)(s16)r0;  /* 0C0BCB74 exts.w Rm,Rn */
	T = (s32)r3 > (s32)r6;  /* 0C0BCB76 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0BCB58u, 7); goto L_0C0BCB58; }  /* 0C0BCB78 bf */
L_0C0BCB7A: BLKS(0x0C0BCB7Au);
	r0 = 0x0u;  /* 0C0BCB7A mov #imm,Rn */
	UPD(0x0C0BCB7Cu, 1);
L_0C0BCB7C: BLKS(0x0C0BCB7Cu);
	r15 = r14;  /* 0C0BCB7C mov Rm,Rn */
	IF(0x0C0BCB7Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0BCB7E rts */
L_0C0BCB90: BLKS(0x0C0BCB90u);
	r4 = 0x200u; UPD(0x0C0BCB92u, 1);  /* 0C0BCB90 mov.w @(disp,pc),Rn */
	r3 += 0x1u;  /* 0C0BCB92 add #imm,Rn */
	r0 = 0xC28F604u; UPD(0x0C0BCB96u, 2);  /* 0C0BCB94 mov.l @(disp,pc),Rn */
	r1 = 0xC28EC80u; UPD(0x0C0BCB98u, 1);  /* 0C0BCB96 mov.l @(disp,pc),Rn */
	W16(r0, r4); UPD(0x0C0BCB9Au, 1);  /* 0C0BCB98 mov.w Rm,@Rn */
L_0C0BCB9A: BLKS(0x0C0BCB9Au);
	W16(r1, r3); UPD(0x0C0BCB9Cu, 1);  /* 0C0BCB9A mov.w Rm,@Rn */
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C0BCB7Cu, 3); goto L_0C0BCB7C; }  /* 0C0BCB9C bra */
L_0C0BCBA0: BLKS(0x0C0BCBA0u);
	r1 = 0xC28F604u; UPD(0x0C0BCBA2u, 1);  /* 0C0BCBA0 mov.l @(disp,pc),Rn */
	{ r3 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C0BCB9Au, 3); goto L_0C0BCB9A; }  /* 0C0BCBA2 bra */
}

/* FUN_0c0bcbc0 */
void blk_f_0C0BCBC0(sh3_t *c)
{
	LOCALS;
L_0C0BCBC0: BLKS(0x0C0BCBC0u);
	r3 = 0x200u; UPD(0x0C0BCBC2u, 1);  /* 0C0BCBC0 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C0BCBC2 exts.w Rm,Rn */
	T = (s32)r4 > (s32)r3;  /* 0C0BCBC4 cmp/gt Rm,Rn */
	IF(0x0C0BCBC6u); r0 = T;  /* 0C0BCBC6 movt Rn */
	T = (r4 & r4) == 0;  /* 0C0BCBC8 tst Rm,Rn */
	IF(0x0C0BCBCAu); r2 = T;  /* 0C0BCBCA movt Rn */
	r0 |= r2;  /* 0C0BCBCC or Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0BCBD0u, 7);  /* 0C0BCBCE mov.l Rm,@-Rn */
	T = (r0 & r0) == 0;  /* 0C0BCBD0 tst Rm,Rn */
	r7 = 0xC28EDFCu; UPD(0x0C0BCBD4u, 2);  /* 0C0BCBD2 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0BCBD4 mov Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BCC1Au, 4); goto L_0C0BCC1A; } goto L_0C0BCBDA; }  /* 0C0BCBD6 bf/s */
L_0C0BCBDA: BLKS(0x0C0BCBDAu);
	r6 = 0xC28F604u; UPD(0x0C0BCBDCu, 2);  /* 0C0BCBDA mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s16)R16(r6); UPD(0x0C0BCBDEu, 1);  /* 0C0BCBDC mov.w @Rm,Rn */
	r5 = r2 & 0xFFFF;  /* 0C0BCBDE extu.w Rm,Rn */
	T = r5 == r3;  /* 0C0BCBE0 cmp/eq Rm,Rn */
	if (T) { UPD(0x0C0BCC18u, 5); goto L_0C0BCC18; }  /* 0C0BCBE2 bt */
L_0C0BCBE4: BLKS(0x0C0BCBE4u);
	r2 = (u32)(s32)(s16)r2;  /* 0C0BCBE4 exts.w Rm,Rn */
	r1 = 0x1FFu; UPD(0x0C0BCBE8u, 2);  /* 0C0BCBE6 mov.w @(disp,pc),Rn */
	T = (s32)r2 > (s32)r1;  /* 0C0BCBE8 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C0BCC18u, 4); goto L_0C0BCC18; }  /* 0C0BCBEA bt */
L_0C0BCBEC: BLKS(0x0C0BCBECu);
	r3 = 0x38u;  /* 0C0BCBEC mov #imm,Rn */
	IF(0x0C0BCBEEu); MACL = r2 * r3;  /* 0C0BCBEE mul.l Rm,Rn */
	r0 = 0xC28F65Cu; UPD(0x0C0BCBF2u, 4);  /* 0C0BCBF0 mov.l @(disp,pc),Rn */
	r6 = r1;  /* 0C0BCBF2 mov Rm,Rn */
	IF(0x0C0BCBF4u); r3 = MACL;  /* 0C0BCBF4 sts macl,Rn */
	r3 += r0;  /* 0C0BCBF6 add Rm,Rn */
	UPD(0x0C0BCBF8u, 3);
L_0C0BCBF8: BLKS(0x0C0BCBF8u);
	r5 = R32(r3); UPD(0x0C0BCBFAu, 1);  /* 0C0BCBF8 mov.l @Rm,Rn */
	T = (r5 & r5) == 0;  /* 0C0BCBFA tst Rm,Rn */
	{ u32 c_ = !T; r3 += 0x38u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0BCC0Eu, 4); goto L_0C0BCC0E; } goto L_0C0BCC00; }  /* 0C0BCBFC bf/s */
L_0C0BCC00: BLKS(0x0C0BCC00u);
	r0 = r4;  /* 0C0BCC00 mov Rm,Rn */
	W16(r7, r2); UPD(0x0C0BCC04u, 3);  /* 0C0BCC02 mov.w Rm,@Rn */
	r0 += 0xFFFFFFFFu;  /* 0C0BCC04 add #imm,Rn */
	r4 = (u32)(s32)(s16)r0;  /* 0C0BCC06 exts.w Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C0BCC08 tst Rm,Rn */
	{ u32 c_ = T; r7 += 0x2u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0BCC20u, 6); goto L_0C0BCC20; } UPD(0x0C0BCC0Eu, 1); goto L_0C0BCC0E; }  /* 0C0BCC0A bt/s */
L_0C0BCC0E: BLKS(0x0C0BCC0Eu);
	r5 = r2;  /* 0C0BCC0E mov Rm,Rn */
	r5 += 0x1u;  /* 0C0BCC10 add #imm,Rn */
	r2 = (u32)(s32)(s16)r5;  /* 0C0BCC12 exts.w Rm,Rn */
	T = (s32)r2 > (s32)r6;  /* 0C0BCC14 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0BCBF8u, 7); goto L_0C0BCBF8; }  /* 0C0BCC16 bf */
L_0C0BCC18: BLKS(0x0C0BCC18u);
	r0 = 0x0u;  /* 0C0BCC18 mov #imm,Rn */
	UPD(0x0C0BCC1Au, 1);
L_0C0BCC1A: BLKS(0x0C0BCC1Au);
	r15 = r14;  /* 0C0BCC1A mov Rm,Rn */
	IF(0x0C0BCC1Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0BCC1C rts */
L_0C0BCC20: BLKS(0x0C0BCC20u);
	r0 = 0xC28F604u; UPD(0x0C0BCC22u, 1);  /* 0C0BCC20 mov.l @(disp,pc),Rn */
	r2 += 0x1u;  /* 0C0BCC22 add #imm,Rn */
	W16(r0, r2); UPD(0x0C0BCC26u, 2);  /* 0C0BCC24 mov.w Rm,@Rn */
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C0BCC1Au, 3); goto L_0C0BCC1A; }  /* 0C0BCC26 bra */
}

/* FUN_0c0bcc40 */
void blk_f_0C0BCC40(sh3_t *c)
{
	LOCALS;
L_0C0BCC40: BLKS(0x0C0BCC40u);
	r4 = (u32)(s32)(s16)r4;  /* 0C0BCC40 exts.w Rm,Rn */
	r0 = 0x40u;  /* 0C0BCC42 mov #imm,Rn */
	T = (s32)r4 > (s32)r0;  /* 0C0BCC44 cmp/gt Rm,Rn */
	IF(0x0C0BCC46u); r0 = T;  /* 0C0BCC46 movt Rn */
	T = (r4 & r4) == 0;  /* 0C0BCC48 tst Rm,Rn */
	IF(0x0C0BCC4Au); r2 = T;  /* 0C0BCC4A movt Rn */
	r0 |= r2;  /* 0C0BCC4C or Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0BCC50u, 8);  /* 0C0BCC4E mov.l Rm,@-Rn */
	T = (r0 & r0) == 0;  /* 0C0BCC50 tst Rm,Rn */
	r7 = 0xC28EDFCu; UPD(0x0C0BCC54u, 2);  /* 0C0BCC52 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0BCC54 mov Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BCCDCu, 4); goto L_0C0BCCDC; } goto L_0C0BCC5A; }  /* 0C0BCC56 bf/s */
L_0C0BCC5A: BLKS(0x0C0BCC5Au);
	r3 = 0xC2860FEu; UPD(0x0C0BCC5Cu, 2);  /* 0C0BCC5A mov.l @(disp,pc),Rn */
	r1 = 0x240u; UPD(0x0C0BCC5Eu, 1);  /* 0C0BCC5C mov.w @(disp,pc),Rn */
	r2 = (u32)(s32)(s16)R16(r3); UPD(0x0C0BCC60u, 1);  /* 0C0BCC5E mov.w @Rm,Rn */
	T = r2 == r1;  /* 0C0BCC60 cmp/eq Rm,Rn */
	if (T) { UPD(0x0C0BCC98u, 4); goto L_0C0BCC98; }  /* 0C0BCC62 bt */
L_0C0BCC64: BLKS(0x0C0BCC64u);
	r3 = (u32)(s32)(s16)r2;  /* 0C0BCC64 exts.w Rm,Rn */
	r1 += 0xFFFFFFFFu;  /* 0C0BCC66 add #imm,Rn */
	T = (s32)r3 > (s32)r1;  /* 0C0BCC68 cmp/gt Rm,Rn */
	{ u32 c_ = T; r2 = 0x38u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BCC98u, 6); goto L_0C0BCC98; } goto L_0C0BCC6E; }  /* 0C0BCC6A bt/s */
L_0C0BCC6E: BLKS(0x0C0BCC6Eu);
	IF(0x0C0BCC6Eu); MACL = r3 * r2;  /* 0C0BCC6E mul.l Rm,Rn */
	r0 = 0xC28F65Cu; UPD(0x0C0BCC72u, 4);  /* 0C0BCC70 mov.l @(disp,pc),Rn */
	r6 = r1;  /* 0C0BCC72 mov Rm,Rn */
	IF(0x0C0BCC74u); r2 = MACL;  /* 0C0BCC74 sts macl,Rn */
	r2 += r0;  /* 0C0BCC76 add Rm,Rn */
	UPD(0x0C0BCC78u, 3);
L_0C0BCC78: BLKS(0x0C0BCC78u);
	r5 = R32(r2); UPD(0x0C0BCC7Au, 1);  /* 0C0BCC78 mov.l @Rm,Rn */
	T = (r5 & r5) == 0;  /* 0C0BCC7A tst Rm,Rn */
	{ u32 c_ = !T; r2 += 0x38u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0BCC8Eu, 4); goto L_0C0BCC8E; } goto L_0C0BCC80; }  /* 0C0BCC7C bf/s */
L_0C0BCC80: BLKS(0x0C0BCC80u);
	r0 = r4;  /* 0C0BCC80 mov Rm,Rn */
	W16(r7, r3); UPD(0x0C0BCC84u, 3);  /* 0C0BCC82 mov.w Rm,@Rn */
	r0 += 0xFFFFFFFFu;  /* 0C0BCC84 add #imm,Rn */
	r4 = (u32)(s32)(s16)r0;  /* 0C0BCC86 exts.w Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C0BCC88 tst Rm,Rn */
	{ u32 c_ = T; r7 += 0x2u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0BCD00u, 6); goto L_0C0BCD00; } UPD(0x0C0BCC8Eu, 1); goto L_0C0BCC8E; }  /* 0C0BCC8A bt/s */
L_0C0BCC8E: BLKS(0x0C0BCC8Eu);
	r5 = r3;  /* 0C0BCC8E mov Rm,Rn */
	r5 += 0x1u;  /* 0C0BCC90 add #imm,Rn */
	r3 = (u32)(s32)(s16)r5;  /* 0C0BCC92 exts.w Rm,Rn */
	T = (s32)r3 > (s32)r6;  /* 0C0BCC94 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0BCC78u, 7); goto L_0C0BCC78; }  /* 0C0BCC96 bf */
L_0C0BCC98: BLKS(0x0C0BCC98u);
	r6 = 0xC2B038Eu; UPD(0x0C0BCC9Au, 1);  /* 0C0BCC98 mov.l @(disp,pc),Rn */
	r1 = 0x240u; UPD(0x0C0BCC9Cu, 1);  /* 0C0BCC9A mov.w @(disp,pc),Rn */
	r2 = (u32)(s32)(s16)R16(r6); UPD(0x0C0BCC9Eu, 1);  /* 0C0BCC9C mov.w @Rm,Rn */
	T = r2 == r1;  /* 0C0BCC9E cmp/eq Rm,Rn */
	if (T) { UPD(0x0C0BCCDAu, 4); goto L_0C0BCCDA; }  /* 0C0BCCA0 bt */
L_0C0BCCA2: BLKS(0x0C0BCCA2u);
	r3 = (u32)(s32)(s16)r2;  /* 0C0BCCA2 exts.w Rm,Rn */
	r1 += 0xFFFFFFFFu;  /* 0C0BCCA4 add #imm,Rn */
	T = (s32)r3 > (s32)r1;  /* 0C0BCCA6 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C0BCCDAu, 6); goto L_0C0BCCDA; }  /* 0C0BCCA8 bt */
L_0C0BCCAA: BLKS(0x0C0BCCAAu);
	r2 = 0x38u;  /* 0C0BCCAA mov #imm,Rn */
	IF(0x0C0BCCACu); MACL = r3 * r2;  /* 0C0BCCAC mul.l Rm,Rn */
	r0 = 0xC28F65Cu; UPD(0x0C0BCCB0u, 4);  /* 0C0BCCAE mov.l @(disp,pc),Rn */
	r6 = r1;  /* 0C0BCCB0 mov Rm,Rn */
	IF(0x0C0BCCB2u); r2 = MACL;  /* 0C0BCCB2 sts macl,Rn */
	r2 += r0;  /* 0C0BCCB4 add Rm,Rn */
	IF(0x0C0BCCB6u); ;  /* 0C0BCCB6 nop */
	UPD(0x0C0BCCB8u, 4);
L_0C0BCCB8: BLKS(0x0C0BCCB8u);
	r0 = R32(r2); UPD(0x0C0BCCBAu, 1);  /* 0C0BCCB8 mov.l @Rm,Rn */
	r0 &= 0x3u;  /* 0C0BCCBA and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0BCCBC tst Rm,Rn */
	{ u32 c_ = T; r2 += 0x38u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0BCCD0u, 5); goto L_0C0BCCD0; } goto L_0C0BCCC2; }  /* 0C0BCCBE bt/s */
L_0C0BCCC2: BLKS(0x0C0BCCC2u);
	r5 = r4;  /* 0C0BCCC2 mov Rm,Rn */
	W16(r7, r3); UPD(0x0C0BCCC6u, 3);  /* 0C0BCCC4 mov.w Rm,@Rn */
	r5 += 0xFFFFFFFFu;  /* 0C0BCCC6 add #imm,Rn */
	r4 = (u32)(s32)(s16)r5;  /* 0C0BCCC8 exts.w Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C0BCCCA tst Rm,Rn */
	{ u32 c_ = T; r7 += 0x2u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0BCCF0u, 6); goto L_0C0BCCF0; } UPD(0x0C0BCCD0u, 1); goto L_0C0BCCD0; }  /* 0C0BCCCC bt/s */
L_0C0BCCD0: BLKS(0x0C0BCCD0u);
	r0 = r3;  /* 0C0BCCD0 mov Rm,Rn */
	r0 += 0x1u;  /* 0C0BCCD2 add #imm,Rn */
	r3 = (u32)(s32)(s16)r0;  /* 0C0BCCD4 exts.w Rm,Rn */
	T = (s32)r3 > (s32)r6;  /* 0C0BCCD6 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0BCCB8u, 7); goto L_0C0BCCB8; }  /* 0C0BCCD8 bf */
L_0C0BCCDA: BLKS(0x0C0BCCDAu);
	r0 = 0x0u;  /* 0C0BCCDA mov #imm,Rn */
	UPD(0x0C0BCCDCu, 1);
L_0C0BCCDC: BLKS(0x0C0BCCDCu);
	r15 = r14;  /* 0C0BCCDC mov Rm,Rn */
	IF(0x0C0BCCDEu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0BCCDE rts */
L_0C0BCCF0: BLKS(0x0C0BCCF0u);
	r5 = 0x240u; UPD(0x0C0BCCF2u, 1);  /* 0C0BCCF0 mov.w @(disp,pc),Rn */
	r3 += 0x1u;  /* 0C0BCCF2 add #imm,Rn */
	r4 = 0xC2860FEu; UPD(0x0C0BCCF6u, 2);  /* 0C0BCCF4 mov.l @(disp,pc),Rn */
	r1 = 0xC2B038Eu; UPD(0x0C0BCCF8u, 1);  /* 0C0BCCF6 mov.l @(disp,pc),Rn */
	W16(r4, r5); UPD(0x0C0BCCFAu, 1);  /* 0C0BCCF8 mov.w Rm,@Rn */
L_0C0BCCFA: BLKS(0x0C0BCCFAu);
	W16(r1, r3); UPD(0x0C0BCCFCu, 1);  /* 0C0BCCFA mov.w Rm,@Rn */
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C0BCCDCu, 3); goto L_0C0BCCDC; }  /* 0C0BCCFC bra */
L_0C0BCD00: BLKS(0x0C0BCD00u);
	r1 = 0xC2860FEu; UPD(0x0C0BCD02u, 1);  /* 0C0BCD00 mov.l @(disp,pc),Rn */
	{ r3 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C0BCCFAu, 3); goto L_0C0BCCFA; }  /* 0C0BCD02 bra */
}

/* FUN_0c0bcd20 */
void blk_f_0C0BCD20(sh3_t *c)
{
	LOCALS;
L_0C0BCD20: BLKS(0x0C0BCD20u);
	r4 = (u32)(s32)(s16)r4;  /* 0C0BCD20 exts.w Rm,Rn */
	r0 = 0x40u;  /* 0C0BCD22 mov #imm,Rn */
	T = (s32)r4 > (s32)r0;  /* 0C0BCD24 cmp/gt Rm,Rn */
	IF(0x0C0BCD26u); r0 = T;  /* 0C0BCD26 movt Rn */
	T = (r4 & r4) == 0;  /* 0C0BCD28 tst Rm,Rn */
	IF(0x0C0BCD2Au); r2 = T;  /* 0C0BCD2A movt Rn */
	r0 |= r2;  /* 0C0BCD2C or Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0BCD30u, 8);  /* 0C0BCD2E mov.l Rm,@-Rn */
	T = (r0 & r0) == 0;  /* 0C0BCD30 tst Rm,Rn */
	r7 = 0xC28EDFCu; UPD(0x0C0BCD34u, 2);  /* 0C0BCD32 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0BCD34 mov Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BCDBCu, 4); goto L_0C0BCDBC; } goto L_0C0BCD3A; }  /* 0C0BCD36 bf/s */
L_0C0BCD3A: BLKS(0x0C0BCD3Au);
	r3 = 0xC2860FEu; UPD(0x0C0BCD3Cu, 2);  /* 0C0BCD3A mov.l @(disp,pc),Rn */
	r1 = 0x240u; UPD(0x0C0BCD3Eu, 1);  /* 0C0BCD3C mov.w @(disp,pc),Rn */
	r2 = (u32)(s32)(s16)R16(r3); UPD(0x0C0BCD40u, 1);  /* 0C0BCD3E mov.w @Rm,Rn */
	T = r2 == r1;  /* 0C0BCD40 cmp/eq Rm,Rn */
	if (T) { UPD(0x0C0BCD78u, 4); goto L_0C0BCD78; }  /* 0C0BCD42 bt */
L_0C0BCD44: BLKS(0x0C0BCD44u);
	r3 = (u32)(s32)(s16)r2;  /* 0C0BCD44 exts.w Rm,Rn */
	r1 += 0xFFFFFFFFu;  /* 0C0BCD46 add #imm,Rn */
	T = (s32)r3 > (s32)r1;  /* 0C0BCD48 cmp/gt Rm,Rn */
	{ u32 c_ = T; r2 = 0x38u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0BCD78u, 6); goto L_0C0BCD78; } goto L_0C0BCD4E; }  /* 0C0BCD4A bt/s */
L_0C0BCD4E: BLKS(0x0C0BCD4Eu);
	IF(0x0C0BCD4Eu); MACL = r3 * r2;  /* 0C0BCD4E mul.l Rm,Rn */
	r0 = 0xC28F65Cu; UPD(0x0C0BCD52u, 4);  /* 0C0BCD50 mov.l @(disp,pc),Rn */
	r6 = r1;  /* 0C0BCD52 mov Rm,Rn */
	IF(0x0C0BCD54u); r2 = MACL;  /* 0C0BCD54 sts macl,Rn */
	r2 += r0;  /* 0C0BCD56 add Rm,Rn */
	UPD(0x0C0BCD58u, 3);
L_0C0BCD58: BLKS(0x0C0BCD58u);
	r5 = R32(r2); UPD(0x0C0BCD5Au, 1);  /* 0C0BCD58 mov.l @Rm,Rn */
	T = (r5 & r5) == 0;  /* 0C0BCD5A tst Rm,Rn */
	{ u32 c_ = !T; r2 += 0x38u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0BCD6Eu, 4); goto L_0C0BCD6E; } goto L_0C0BCD60; }  /* 0C0BCD5C bf/s */
L_0C0BCD60: BLKS(0x0C0BCD60u);
	r0 = r4;  /* 0C0BCD60 mov Rm,Rn */
	W16(r7, r3); UPD(0x0C0BCD64u, 3);  /* 0C0BCD62 mov.w Rm,@Rn */
	r0 += 0xFFFFFFFFu;  /* 0C0BCD64 add #imm,Rn */
	r4 = (u32)(s32)(s16)r0;  /* 0C0BCD66 exts.w Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C0BCD68 tst Rm,Rn */
	{ u32 c_ = T; r7 += 0x2u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0BCDE0u, 6); goto L_0C0BCDE0; } UPD(0x0C0BCD6Eu, 1); goto L_0C0BCD6E; }  /* 0C0BCD6A bt/s */
L_0C0BCD6E: BLKS(0x0C0BCD6Eu);
	r5 = r3;  /* 0C0BCD6E mov Rm,Rn */
	r5 += 0x1u;  /* 0C0BCD70 add #imm,Rn */
	r3 = (u32)(s32)(s16)r5;  /* 0C0BCD72 exts.w Rm,Rn */
	T = (s32)r3 > (s32)r6;  /* 0C0BCD74 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0BCD58u, 7); goto L_0C0BCD58; }  /* 0C0BCD76 bf */
L_0C0BCD78: BLKS(0x0C0BCD78u);
	r6 = 0xC22E25Cu; UPD(0x0C0BCD7Au, 1);  /* 0C0BCD78 mov.l @(disp,pc),Rn */
	r1 = 0x240u; UPD(0x0C0BCD7Cu, 1);  /* 0C0BCD7A mov.w @(disp,pc),Rn */
	r2 = (u32)(s32)(s16)R16(r6); UPD(0x0C0BCD7Eu, 1);  /* 0C0BCD7C mov.w @Rm,Rn */
	T = r2 == r1;  /* 0C0BCD7E cmp/eq Rm,Rn */
	if (T) { UPD(0x0C0BCDBAu, 4); goto L_0C0BCDBA; }  /* 0C0BCD80 bt */
L_0C0BCD82: BLKS(0x0C0BCD82u);
	r3 = (u32)(s32)(s16)r2;  /* 0C0BCD82 exts.w Rm,Rn */
	r1 += 0xFFFFFFFFu;  /* 0C0BCD84 add #imm,Rn */
	T = (s32)r3 > (s32)r1;  /* 0C0BCD86 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C0BCDBAu, 6); goto L_0C0BCDBA; }  /* 0C0BCD88 bt */
L_0C0BCD8A: BLKS(0x0C0BCD8Au);
	r2 = 0x38u;  /* 0C0BCD8A mov #imm,Rn */
	IF(0x0C0BCD8Cu); MACL = r3 * r2;  /* 0C0BCD8C mul.l Rm,Rn */
	r0 = 0xC28F65Cu; UPD(0x0C0BCD90u, 4);  /* 0C0BCD8E mov.l @(disp,pc),Rn */
	r6 = r1;  /* 0C0BCD90 mov Rm,Rn */
	IF(0x0C0BCD92u); r2 = MACL;  /* 0C0BCD92 sts macl,Rn */
	r2 += r0;  /* 0C0BCD94 add Rm,Rn */
	IF(0x0C0BCD96u); ;  /* 0C0BCD96 nop */
	UPD(0x0C0BCD98u, 4);
L_0C0BCD98: BLKS(0x0C0BCD98u);
	r0 = R32(r2); UPD(0x0C0BCD9Au, 1);  /* 0C0BCD98 mov.l @Rm,Rn */
	r0 &= 0x1u;  /* 0C0BCD9A and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0BCD9C tst Rm,Rn */
	{ u32 c_ = T; r2 += 0x38u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0BCDB0u, 5); goto L_0C0BCDB0; } goto L_0C0BCDA2; }  /* 0C0BCD9E bt/s */
L_0C0BCDA2: BLKS(0x0C0BCDA2u);
	r5 = r4;  /* 0C0BCDA2 mov Rm,Rn */
	W16(r7, r3); UPD(0x0C0BCDA6u, 3);  /* 0C0BCDA4 mov.w Rm,@Rn */
	r5 += 0xFFFFFFFFu;  /* 0C0BCDA6 add #imm,Rn */
	r4 = (u32)(s32)(s16)r5;  /* 0C0BCDA8 exts.w Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C0BCDAA tst Rm,Rn */
	{ u32 c_ = T; r7 += 0x2u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0BCDD0u, 6); goto L_0C0BCDD0; } UPD(0x0C0BCDB0u, 1); goto L_0C0BCDB0; }  /* 0C0BCDAC bt/s */
L_0C0BCDB0: BLKS(0x0C0BCDB0u);
	r0 = r3;  /* 0C0BCDB0 mov Rm,Rn */
	r0 += 0x1u;  /* 0C0BCDB2 add #imm,Rn */
	r3 = (u32)(s32)(s16)r0;  /* 0C0BCDB4 exts.w Rm,Rn */
	T = (s32)r3 > (s32)r6;  /* 0C0BCDB6 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0BCD98u, 7); goto L_0C0BCD98; }  /* 0C0BCDB8 bf */
L_0C0BCDBA: BLKS(0x0C0BCDBAu);
	r0 = 0x0u;  /* 0C0BCDBA mov #imm,Rn */
	UPD(0x0C0BCDBCu, 1);
L_0C0BCDBC: BLKS(0x0C0BCDBCu);
	r15 = r14;  /* 0C0BCDBC mov Rm,Rn */
	IF(0x0C0BCDBEu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0BCDBE rts */
L_0C0BCDD0: BLKS(0x0C0BCDD0u);
	r5 = 0x240u; UPD(0x0C0BCDD2u, 1);  /* 0C0BCDD0 mov.w @(disp,pc),Rn */
	r3 += 0x1u;  /* 0C0BCDD2 add #imm,Rn */
	r4 = 0xC2860FEu; UPD(0x0C0BCDD6u, 2);  /* 0C0BCDD4 mov.l @(disp,pc),Rn */
	r1 = 0xC22E25Cu; UPD(0x0C0BCDD8u, 1);  /* 0C0BCDD6 mov.l @(disp,pc),Rn */
	W16(r4, r5); UPD(0x0C0BCDDAu, 1);  /* 0C0BCDD8 mov.w Rm,@Rn */
L_0C0BCDDA: BLKS(0x0C0BCDDAu);
	W16(r1, r3); UPD(0x0C0BCDDCu, 1);  /* 0C0BCDDA mov.w Rm,@Rn */
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C0BCDBCu, 3); goto L_0C0BCDBC; }  /* 0C0BCDDC bra */
L_0C0BCDE0: BLKS(0x0C0BCDE0u);
	r1 = 0xC2860FEu; UPD(0x0C0BCDE2u, 1);  /* 0C0BCDE0 mov.l @(disp,pc),Rn */
	{ r3 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C0BCDDAu, 3); goto L_0C0BCDDA; }  /* 0C0BCDE2 bra */
}


#include "recomp.h"
#include "blk_recomp_funcs.h"

void blk_f_0C07CEC0(sh3_t *c)
{
	LOCALS;
L_0C07CEC0: BLKS(0x0C07CEC0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07CEC2u, 1);  /* 0C07CEC0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07CEC4u, 1);  /* 0C07CEC2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07CEC6u, 1);  /* 0C07CEC4 mov.l Rm,@-Rn */
	r2 = 0x2A0u; UPD(0x0C07CEC8u, 1);  /* 0C07CEC6 mov.w @(disp,pc),Rn */
	r10 = (u32)(s32)(s16)r4;  /* 0C07CEC8 exts.w Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07CECCu, 2);  /* 0C07CECA mov.l Rm,@-Rn */
	IF(0x0C07CECCu); MACL = r10 * r2;  /* 0C07CECC mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07CED0u, 3);  /* 0C07CECE mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s16)r5;  /* 0C07CED0 exts.w Rm,Rn */
	r0 = 0xC29D1D8u; UPD(0x0C07CED4u, 2);  /* 0C07CED2 mov.l @(disp,pc),Rn */
	IF(0x0C07CED4u); r9 = MACL;  /* 0C07CED4 sts macl,Rn */
	r3 = 0x25Bu; UPD(0x0C07CED8u, 2);  /* 0C07CED6 mov.w @(disp,pc),Rn */
	r9 += r0;  /* 0C07CED8 add Rm,Rn */
	IF(0x0C07CEDAu); r15 -= 4; W32(r15, PR); UPD(0x0C07CEDCu, 2);  /* 0C07CEDA sts.l pr,@-Rn */
	r3 += r9;  /* 0C07CEDC add Rm,Rn */
	r7 = (u32)(s32)(s8)R8(r3); UPD(0x0C07CEE0u, 2);  /* 0C07CEDE mov.b @Rm,Rn */
	r2 = 0x5u;  /* 0C07CEE0 mov #imm,Rn */
	r0 = r7 & 0xFF;  /* 0C07CEE2 extu.b Rm,Rn */
	T = (s32)r0 > (s32)r2;  /* 0C07CEE4 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07CF20u, 6); goto L_0C07CF20; } goto L_0C07CEEA; }  /* 0C07CEE6 bf/s */
L_0C07CEEA: BLKS(0x0C07CEEAu);
	T = r0 == 0x6u;  /* 0C07CEEA cmp/eq #imm,r0 */
	if (T) { UPD(0x0C07CF00u, 5); goto L_0C07CF00; }  /* 0C07CEEC bt */
L_0C07CEEE: BLKS(0x0C07CEEEu);
	r15 = r14;  /* 0C07CEEE mov Rm,Rn */
	IF(0x0C07CEF0u); PR = R32(r15); r15 += 4; UPD(0x0C07CEF2u, 2);  /* 0C07CEF0 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07CEF4u, 1);  /* 0C07CEF2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07CEF6u, 1);  /* 0C07CEF4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07CEF8u, 1);  /* 0C07CEF6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07CEFAu, 1);  /* 0C07CEF8 mov.l @Rm+,Rn */
	IF(0x0C07CEFAu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07CEFA rts */
L_0C07CF00: BLKS(0x0C07CF00u);
	r5 = r11;  /* 0C07CF00 mov Rm,Rn */
	r11 = 0xC07D2E0u; UPD(0x0C07CF04u, 2);  /* 0C07CF02 mov.l @(disp,pc),Rn */
	IF(0x0C07CF04u); { u32 t_ = r11; PR = 0x0C07CF08u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07D2E0, 0x0C07D2E0u, 0x0C07CF08u); }  /* 0C07CF04 jsr @Rn */
L_0C07CF08: BLKS(0x0C07CF08u);
	r4 = 0x8000u; UPD(0x0C07CF0Au, 1);  /* 0C07CF08 mov.l @(disp,pc),Rn */
	r6 = 0xC071C90u; UPD(0x0C07CF0Cu, 1);  /* 0C07CF0A mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C07CF0C mov Rm,Rn */
	IF(0x0C07CF0Eu); PR = R32(r15); r15 += 4; UPD(0x0C07CF10u, 2);  /* 0C07CF0E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07CF12u, 1);  /* 0C07CF10 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07CF14u, 1);  /* 0C07CF12 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07CF16u, 1);  /* 0C07CF14 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07CF18u, 1);  /* 0C07CF16 mov.l @Rm+,Rn */
	IF(0x0C07CF18u); { u32 tv_ = r6; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C071C90u: TAIL(blk_f_0C071C90); default: JUMPD(tv_); } }  /* 0C07CF18 jmp @Rn */
L_0C07CF20: BLKS(0x0C07CF20u);
	r6 = 0x25Cu; UPD(0x0C07CF22u, 1);  /* 0C07CF20 mov.w @(disp,pc),Rn */
	r6 += r9;  /* 0C07CF22 add Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r6); UPD(0x0C07CF26u, 2);  /* 0C07CF24 mov.b @Rm,Rn */
	r2 += 0x1u;  /* 0C07CF26 add #imm,Rn */
	W8(r6, r2); UPD(0x0C07CF2Au, 2);  /* 0C07CF28 mov.b Rm,@Rn */
	r5 = r2 & 0xFF;  /* 0C07CF2A extu.b Rm,Rn */
	r8 = 0xC189BECu; UPD(0x0C07CF2Eu, 2);  /* 0C07CF2C mov.l @(disp,pc),Rn */
	IF(0x0C07CF2Eu); r4 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07CF30u, 1);  /* 0C07CF2E mov.b @(r0,Rm),Rn */
	T = r5 == r4;  /* 0C07CF30 cmp/eq Rm,Rn */
	{ u32 c_ = T; r4 = r10; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07CF50u, 4); goto L_0C07CF50; } goto L_0C07CF36; }  /* 0C07CF32 bt/s */
L_0C07CF36: BLKS(0x0C07CF36u);
	r8 = 0xC0C20A0u; UPD(0x0C07CF38u, 2);  /* 0C07CF36 mov.l @(disp,pc),Rn */
	IF(0x0C07CF38u); { u32 t_ = r8; PR = 0x0C07CF3Cu; r5 = 0x5Du; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C20A0, 0x0C0C20A0u, 0x0C07CF3Cu); }  /* 0C07CF38 jsr @Rn */
L_0C07CF3C: BLKS(0x0C07CF3Cu);
	r3 = 0x60u;  /* 0C07CF3C mov #imm,Rn */
	IF(0x0C07CF3Eu); MACL = r11 * r3;  /* 0C07CF3E mul.l Rm,Rn */
	r10 = 0xC3BC7CCu; UPD(0x0C07CF42u, 4);  /* 0C07CF40 mov.l @(disp,pc),Rn */
	r9 = 0x0u;  /* 0C07CF42 mov #imm,Rn */
	IF(0x0C07CF44u); r0 = MACL;  /* 0C07CF44 sts macl,Rn */
	{ IF(0x0C07CF48u); W32(r0 + r10, r9); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C07CEEEu, 5); goto L_0C07CEEE; }  /* 0C07CF46 bra */
L_0C07CF50: BLKS(0x0C07CF50u);
	r8 = 0x60u;  /* 0C07CF50 mov #imm,Rn */
	IF(0x0C07CF52u); MACL = r11 * r8;  /* 0C07CF52 mul.l Rm,Rn */
	r2 = r7;  /* 0C07CF54 mov Rm,Rn */
	r2 += 0x1u;  /* 0C07CF56 add #imm,Rn */
	r5 = 0x0u;  /* 0C07CF58 mov #imm,Rn */
	r4 = 0xC3BC7CCu; UPD(0x0C07CF5Cu, 7);  /* 0C07CF5A mov.l @(disp,pc),Rn */
	IF(0x0C07CF5Cu); r8 = MACL;  /* 0C07CF5C sts macl,Rn */
	W8(r3, r2); UPD(0x0C07CF60u, 2);  /* 0C07CF5E mov.b Rm,@Rn */
	r8 += r4;  /* 0C07CF60 add Rm,Rn */
	W8(r6, r5); UPD(0x0C07CF64u, 2);  /* 0C07CF62 mov.b Rm,@Rn */
	r4 = r11;  /* 0C07CF64 mov Rm,Rn */
	r0 = R32(r8); UPD(0x0C07CF68u, 2);  /* 0C07CF66 mov.l @Rm,Rn */
	r6 = 0x0u;  /* 0C07CF68 mov #imm,Rn */
	r1 = 0xEFFFFFFBu; UPD(0x0C07CF6Cu, 2);  /* 0C07CF6A mov.l @(disp,pc),Rn */
	r7 = 0x8u;  /* 0C07CF6C mov #imm,Rn */
	r11 = 0xC07BF80u; UPD(0x0C07CF70u, 2);  /* 0C07CF6E mov.l @(disp,pc),Rn */
	r0 &= r1;  /* 0C07CF70 and Rm,Rn */
	W32(r8, r0); UPD(0x0C07CF74u, 2);  /* 0C07CF72 mov.l Rm,@Rn */
	W32(r8 + 0x4u, r7); UPD(0x0C07CF76u, 1);  /* 0C07CF74 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x8u, r6); UPD(0x0C07CF78u, 1);  /* 0C07CF76 mov.l Rm,@(disp,Rn) */
	IF(0x0C07CF78u); { u32 t_ = r11; PR = 0x0C07CF7Cu; W32(r8 + 0xCu, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C07BF80, 0x0C07BF80u, 0x0C07CF7Cu); }  /* 0C07CF78 jsr @Rn */
L_0C07CF7C: BLKS(0x0C07CF7Cu);
	r3 = 0x3Cu;  /* 0C07CF7C mov #imm,Rn */
	r8 += 0x4Fu;  /* 0C07CF7E add #imm,Rn */
	W8(r8, r3); UPD(0x0C07CF82u, 3);  /* 0C07CF80 mov.b Rm,@Rn */
	r2 = 0x14u;  /* 0C07CF82 mov #imm,Rn */
	r8 += 0xFFFFFFF5u;  /* 0C07CF84 add #imm,Rn */
	W8(r8, r2); UPD(0x0C07CF88u, 3);  /* 0C07CF86 mov.b Rm,@Rn */
	r5 = 0x4FFFFu; UPD(0x0C07CF8Au, 1);  /* 0C07CF88 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFBCu;  /* 0C07CF8A add #imm,Rn */
	r4 = 0x808080u; UPD(0x0C07CF8Eu, 2);  /* 0C07CF8C mov.l @(disp,pc),Rn */
	W32(r8 + 0x38u, r5); UPD(0x0C07CF90u, 1);  /* 0C07CF8E mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x3Cu, r4); UPD(0x0C07CF92u, 1);  /* 0C07CF90 mov.l Rm,@(disp,Rn) */
	r0 = 0x180000u; UPD(0x0C07CF94u, 1);  /* 0C07CF92 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C07CF94 mov Rm,Rn */
	r7 = R32(r9 + 0x10u); UPD(0x0C07CF98u, 2);  /* 0C07CF96 mov.l @(disp,Rm),Rn */
	r7 += r0;  /* 0C07CF98 add Rm,Rn */
	W32(r8 + 0x28u, r7); UPD(0x0C07CF9Cu, 2);  /* 0C07CF9A mov.l Rm,@(disp,Rn) */
	r6 = R32(r9 + 0x14u); UPD(0x0C07CF9Eu, 1);  /* 0C07CF9C mov.l @(disp,Rm),Rn */
	r1 = 0x100000u; UPD(0x0C07CFA0u, 1);  /* 0C07CF9E mov.l @(disp,pc),Rn */
	r11 = 0xC07B620u; UPD(0x0C07CFA2u, 1);  /* 0C07CFA0 mov.l @(disp,pc),Rn */
	r6 += r1;  /* 0C07CFA2 add Rm,Rn */
	r9 = 0xC0C20A0u; UPD(0x0C07CFA6u, 2);  /* 0C07CFA4 mov.l @(disp,pc),Rn */
	IF(0x0C07CFA6u); { u32 t_ = r11; PR = 0x0C07CFAAu; W32(r8 + 0x2Cu, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C07B620, 0x0C07B620u, 0x0C07CFAAu); }  /* 0C07CFA6 jsr @Rn */
L_0C07CFAA: BLKS(0x0C07CFAAu);
	r4 = r10;  /* 0C07CFAA mov Rm,Rn */
	IF(0x0C07CFACu); { u32 t_ = r9; PR = 0x0C07CFB0u; r5 = 0x5Eu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0C20A0, 0x0C0C20A0u, 0x0C07CFB0u); }  /* 0C07CFAC jsr @Rn */
L_0C07CFB0: BLKS(0x0C07CFB0u);
	r5 = 0x9Cu; UPD(0x0C07CFB2u, 1);  /* 0C07CFB0 mov.w @(disp,pc),Rn */
	r4 = r10;  /* 0C07CFB2 mov Rm,Rn */
	r3 = 0xC0C2020u; UPD(0x0C07CFB6u, 2);  /* 0C07CFB4 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C07CFB6 mov Rm,Rn */
	IF(0x0C07CFB8u); PR = R32(r15); r15 += 4; UPD(0x0C07CFBAu, 2);  /* 0C07CFB8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07CFBCu, 1);  /* 0C07CFBA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07CFBEu, 1);  /* 0C07CFBC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07CFC0u, 1);  /* 0C07CFBE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07CFC2u, 1);  /* 0C07CFC0 mov.l @Rm+,Rn */
	IF(0x0C07CFC2u); { u32 tv_ = r3; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0C2020u: TAIL(blk_f_0C0C2020); default: JUMPD(tv_); } }  /* 0C07CFC2 jmp @Rn */
}

void blk_f_0C07D010(sh3_t *c)
{
	LOCALS;
L_0C07D010: BLKS(0x0C07D010u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07D012u, 1);  /* 0C07D010 mov.l Rm,@-Rn */
	r3 = 0x60u;  /* 0C07D012 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07D016u, 2);  /* 0C07D014 mov.l Rm,@-Rn */
	r2 = 0x11u;  /* 0C07D016 mov #imm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07D01Au, 2);  /* 0C07D018 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s16)r5;  /* 0C07D01A exts.w Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07D01Eu, 2);  /* 0C07D01C mov.l Rm,@-Rn */
	IF(0x0C07D01Eu); MACL = r9 * r3;  /* 0C07D01E mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07D022u, 3);  /* 0C07D020 mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C07D022 exts.w Rm,Rn */
	r10 = 0xC3BC7CCu; UPD(0x0C07D026u, 2);  /* 0C07D024 mov.l @(disp,pc),Rn */
	IF(0x0C07D026u); r8 = MACL;  /* 0C07D026 sts macl,Rn */
	IF(0x0C07D028u); r15 -= 4; W32(r15, PR); UPD(0x0C07D02Au, 2);  /* 0C07D028 sts.l pr,@-Rn */
	r8 += r10;  /* 0C07D02A add Rm,Rn */
	r8 += 0xAu;  /* 0C07D02C add #imm,Rn */
	r0 = 0xC071C90u; UPD(0x0C07D030u, 3);  /* 0C07D02E mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C07D030 mov Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r8); UPD(0x0C07D034u, 2);  /* 0C07D032 mov.w @Rm,Rn */
	IF(0x0C07D034u); { u32 t_ = r0; PR = 0x0C07D038u; IF(0x0C07D036u); ARG0(0x442Du); { s32 s_ = (s32)r2; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = 0; else r4 >>= ((~s_ & 31) + 1); } /* slot shld Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C071C90, 0x0C071C90u, 0x0C07D038u); }  /* 0C07D034 jsr @Rn */
L_0C07D038: BLKS(0x0C07D038u);
	r0 = 0xC07D2E0u; UPD(0x0C07D03Au, 1);  /* 0C07D038 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFF6u;  /* 0C07D03A add #imm,Rn */
	r4 = r11;  /* 0C07D03C mov Rm,Rn */
	IF(0x0C07D03Eu); { u32 t_ = r0; PR = 0x0C07D042u; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C07D2E0, 0x0C07D2E0u, 0x0C07D042u); }  /* 0C07D03E jsr @Rn */
L_0C07D042: BLKS(0x0C07D042u);
	r1 = R32(r8 + 0x8u); UPD(0x0C07D044u, 1);  /* 0C07D042 mov.l @(disp,Rm),Rn */
	r0 = 0x11u;  /* 0C07D044 mov #imm,Rn */
	T = (s32)r1 > (s32)r0;  /* 0C07D046 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C07D0AEu, 5); goto L_0C07D0AE; }  /* 0C07D048 bt */
L_0C07D04A: BLKS(0x0C07D04Au);
	r6 = 0x0u;  /* 0C07D04A mov #imm,Rn */
	r5 = 0x13Fu; UPD(0x0C07D04Eu, 2);  /* 0C07D04C mov.w @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C07D04E mov #imm,Rn */
	r7 = 0xFFFFFFFFu;  /* 0C07D050 mov #imm,Rn */
	r3 = r10;  /* 0C07D052 mov Rm,Rn */
	UPD(0x0C07D054u, 3);
L_0C07D054: BLKS(0x0C07D054u);
	T = r9 == r4;  /* 0C07D054 cmp/eq Rm,Rn */
	r2 = R32(r3); UPD(0x0C07D058u, 2);  /* 0C07D056 mov.l @Rm,Rn */
	{ u32 t_ = 0u - r7, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r10 = r_; }  /* 0C07D058 negc Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C07D05A tst Rm,Rn */
	{ u32 t_ = 0u - r7, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r0 = r_; }  /* 0C07D05C negc Rm,Rn */
	r10 &= r0;  /* 0C07D05E and Rm,Rn */
	r0 = R32(r3 + 0x4u); UPD(0x0C07D062u, 5);  /* 0C07D060 mov.l @(disp,Rm),Rn */
	T = r0 == 0x3u;  /* 0C07D062 cmp/eq #imm,r0 */
	IF(0x0C07D064u); r8 = T;  /* 0C07D064 movt Rn */
	T = (r10 & r8) == 0;  /* 0C07D066 tst Rm,Rn */
	{ u32 c_ = T; r10 = r4; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07D074u, 6); goto L_0C07D074; } goto L_0C07D06C; }  /* 0C07D068 bt/s */
L_0C07D06C: BLKS(0x0C07D06Cu);
	r8 = r6;  /* 0C07D06C mov Rm,Rn */
	r8 += 0x1u;  /* 0C07D06E add #imm,Rn */
	r6 = (u32)(s32)(s16)r8;  /* 0C07D070 exts.w Rm,Rn */
	r10 = r4;  /* 0C07D072 mov Rm,Rn */
	UPD(0x0C07D074u, 5);
L_0C07D074: BLKS(0x0C07D074u);
	r10 += 0x1u;  /* 0C07D074 add #imm,Rn */
	r4 = (u32)(s32)(s16)r10;  /* 0C07D076 exts.w Rm,Rn */
	T = (s32)r4 > (s32)r5;  /* 0C07D078 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r3 += 0x60u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C07D054u, 6); goto L_0C07D054; } goto L_0C07D07E; }  /* 0C07D07A bf/s */
L_0C07D07E: BLKS(0x0C07D07Eu);
	r0 = 0x60u;  /* 0C07D07E mov #imm,Rn */
	IF(0x0C07D080u); MACL = r9 * r0;  /* 0C07D080 mul.l Rm,Rn */
	r8 = 0xC3BC7CCu; UPD(0x0C07D084u, 5);  /* 0C07D082 mov.l @(disp,pc),Rn */
	r3 = 0xC3C53E0u; UPD(0x0C07D086u, 1);  /* 0C07D084 mov.l @(disp,pc),Rn */
	IF(0x0C07D086u); r0 = MACL;  /* 0C07D086 sts macl,Rn */
	r0 += r8;  /* 0C07D088 add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r3); UPD(0x0C07D08Cu, 3);  /* 0C07D08A mov.b @Rm,Rn */
	r9 = R32(r0 + 0x8u); UPD(0x0C07D08Eu, 1);  /* 0C07D08C mov.l @(disp,Rm),Rn */
	r7 = r1 & 0xFF;  /* 0C07D08E extu.b Rm,Rn */
	r9 += 0x1u;  /* 0C07D090 add #imm,Rn */
	T = (s32)r9 > (s32)r7;  /* 0C07D092 cmp/gt Rm,Rn */
	IF(0x0C07D094u); r4 = T;  /* 0C07D094 movt Rn */
	T = (r6 & r6) == 0;  /* 0C07D096 tst Rm,Rn */
	IF(0x0C07D098u); r5 = T;  /* 0C07D098 movt Rn */
	r4 &= r5;  /* 0C07D09A and Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C07D09C tst Rm,Rn */
	if (T) { UPD(0x0C07D0AEu, 11); goto L_0C07D0AE; }  /* 0C07D09E bt */
L_0C07D0A0: BLKS(0x0C07D0A0u);
	r0 += 0xBu;  /* 0C07D0A0 add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r0); UPD(0x0C07D0A4u, 2);  /* 0C07D0A2 mov.b @Rm,Rn */
	r6 += 0x1u;  /* 0C07D0A4 add #imm,Rn */
	r0 = r6 & 0xFF;  /* 0C07D0A6 extu.b Rm,Rn */
	T = r0 == 0x12u;  /* 0C07D0A8 cmp/eq #imm,r0 */
	{ u32 c_ = T; W8(r3, r6); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C07D0C0u, 6); goto L_0C07D0C0; } UPD(0x0C07D0AEu, 1); goto L_0C07D0AE; }  /* 0C07D0AA bt/s */
L_0C07D0AE: BLKS(0x0C07D0AEu);
	r15 = r14;  /* 0C07D0AE mov Rm,Rn */
	IF(0x0C07D0B0u); PR = R32(r15); r15 += 4; UPD(0x0C07D0B2u, 2);  /* 0C07D0B0 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07D0B4u, 1);  /* 0C07D0B2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07D0B6u, 1);  /* 0C07D0B4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07D0B8u, 1);  /* 0C07D0B6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07D0BAu, 1);  /* 0C07D0B8 mov.l @Rm+,Rn */
	IF(0x0C07D0BAu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07D0BA rts */
L_0C07D0C0: BLKS(0x0C07D0C0u);
	r10 = 0xC189BF4u; UPD(0x0C07D0C2u, 1);  /* 0C07D0C0 mov.l @(disp,pc),Rn */
	r0 = r10;  /* 0C07D0C2 mov Rm,Rn */
	IF(0x0C07D0C4u); r2 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C07D0C6u, 2);  /* 0C07D0C4 mov.b @(r0,Rm),Rn */
	r3 = 0xC0C2110u; UPD(0x0C07D0C8u, 1);  /* 0C07D0C6 mov.l @(disp,pc),Rn */
	r4 = r2 & 0xFF;  /* 0C07D0C8 extu.b Rm,Rn */
	r15 = r14;  /* 0C07D0CA mov Rm,Rn */
	IF(0x0C07D0CCu); PR = R32(r15); r15 += 4; UPD(0x0C07D0CEu, 3);  /* 0C07D0CC lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07D0D0u, 1);  /* 0C07D0CE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07D0D2u, 1);  /* 0C07D0D0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07D0D4u, 1);  /* 0C07D0D2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07D0D6u, 1);  /* 0C07D0D4 mov.l @Rm+,Rn */
	IF(0x0C07D0D6u); { u32 tv_ = r3; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0C2110u: TAIL(blk_f_0C0C2110); default: JUMPD(tv_); } }  /* 0C07D0D6 jmp @Rn */
}

void blk_f_0C07D100(sh3_t *c)
{
	LOCALS;
L_0C07D100: BLKS(0x0C07D100u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07D102u, 1);  /* 0C07D100 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07D104u, 1);  /* 0C07D102 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07D106u, 1);  /* 0C07D104 mov.l Rm,@-Rn */
	r9 = 0x60u;  /* 0C07D106 mov #imm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07D10Au, 2);  /* 0C07D108 mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s16)r4;  /* 0C07D10A exts.w Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07D10Eu, 2);  /* 0C07D10C mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s16)r5;  /* 0C07D10E exts.w Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C07D112u, 2);  /* 0C07D110 mov.l Rm,@-Rn */
	IF(0x0C07D112u); MACL = r11 * r9;  /* 0C07D112 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07D116u, 3);  /* 0C07D114 mov.l Rm,@-Rn */
	r7 = 0xC3BC7CCu; UPD(0x0C07D118u, 1);  /* 0C07D116 mov.l @(disp,pc),Rn */
	IF(0x0C07D118u); r8 = MACL;  /* 0C07D118 sts macl,Rn */
	IF(0x0C07D11Au); r15 -= 4; W32(r15, PR); UPD(0x0C07D11Cu, 2);  /* 0C07D11A sts.l pr,@-Rn */
	r7 += r8;  /* 0C07D11C add Rm,Rn */
	r4 = 0x2A0u; UPD(0x0C07D120u, 2);  /* 0C07D11E mov.w @(disp,pc),Rn */
	r14 = r15;  /* 0C07D120 mov Rm,Rn */
	MACL = (u32)((s32)(s16)r10 * (s32)(s16)r4);  /* 0C07D122 muls.w Rm,Rn */
	r6 = R32(r7 + 0x8u); UPD(0x0C07D126u, 4);  /* 0C07D124 mov.l @(disp,Rm),Rn */
	IF(0x0C07D126u); r9 = MACL;  /* 0C07D126 sts macl,Rn */
	r2 = 0x90u; UPD(0x0C07D12Au, 2);  /* 0C07D128 mov.w @(disp,pc),Rn */
	r6 += r6;  /* 0C07D12A add Rm,Rn */
	r8 = r6;  /* 0C07D12C mov Rm,Rn */
	r1 = 0xC189C5Cu; UPD(0x0C07D130u, 3);  /* 0C07D12E mov.l @(disp,pc),Rn */
	MACL = (u32)((s32)(s16)r10 * (s32)(s16)r2);  /* 0C07D130 muls.w Rm,Rn */
	r0 = 0xC2974C8u; UPD(0x0C07D134u, 3);  /* 0C07D132 mov.l @(disp,pc),Rn */
	r6 += r6;  /* 0C07D134 add Rm,Rn */
	r6 += r1;  /* 0C07D136 add Rm,Rn */
	IF(0x0C07D138u); r2 = MACL;  /* 0C07D138 sts macl,Rn */
	r3 = 0xC29D1D8u; UPD(0x0C07D13Cu, 4);  /* 0C07D13A mov.l @(disp,pc),Rn */
	r2 += r0;  /* 0C07D13C add Rm,Rn */
	r12 = (u32)(s32)(s16)R16(r6); UPD(0x0C07D140u, 2);  /* 0C07D13E mov.w @Rm,Rn */
	r9 += r3;  /* 0C07D140 add Rm,Rn */
	r0 = 0x289u; UPD(0x0C07D144u, 2);  /* 0C07D142 mov.w @(disp,pc),Rn */
	r6 += 0x3u;  /* 0C07D144 add #imm,Rn */
	r5 = (u32)(s32)(s8)R8(r6); UPD(0x0C07D148u, 2);  /* 0C07D146 mov.b @Rm,Rn */
	r8 += r10;  /* 0C07D148 add Rm,Rn */
	IF(0x0C07D14Au); r3 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C07D14Cu, 2);  /* 0C07D14A mov.b @(r0,Rm),Rn */
	T = (r3 & r3) == 0;  /* 0C07D14C tst Rm,Rn */
	{ u32 c_ = !T; r13 = r5 & 0xFF; /* slot extu.b Rm,Rn */ if (c_) { UPD(0x0C07D1B8u, 4); goto L_0C07D1B8; } goto L_0C07D152; }  /* 0C07D14E bf/s */
L_0C07D152: BLKS(0x0C07D152u);
	r4 = R32(r9 + 0x10u); UPD(0x0C07D154u, 2);  /* 0C07D152 mov.l @(disp,Rm),Rn */
	r7 = 0x0u;  /* 0C07D154 mov #imm,Rn */
	r5 = R32(r9 + 0x14u); UPD(0x0C07D158u, 2);  /* 0C07D156 mov.l @(disp,Rm),Rn */
	r3 = 0x0u;  /* 0C07D158 mov #imm,Rn */
	r6 = 0x0u;  /* 0C07D15A mov #imm,Rn */
	UPD(0x0C07D15Cu, 2);
L_0C07D15C: BLKS(0x0C07D15Cu);
	r0 = 0xC0000000u; UPD(0x0C07D15Eu, 1);  /* 0C07D15C mov.l @(disp,pc),Rn */
	r1 = r7;  /* 0C07D15E mov Rm,Rn */
	W32(r2, r0); UPD(0x0C07D162u, 2);  /* 0C07D160 mov.l Rm,@Rn */
	r1 += r9;  /* 0C07D162 add Rm,Rn */
	W32(r2 + 0x10u, r8); UPD(0x0C07D166u, 2);  /* 0C07D164 mov.l Rm,@(disp,Rn) */
	r0 = r2;  /* 0C07D166 mov Rm,Rn */
	W32(r2 + 0x4u, r8); UPD(0x0C07D16Au, 2);  /* 0C07D168 mov.l Rm,@(disp,Rn) */
	r0 += 0x2Au;  /* 0C07D16A add #imm,Rn */
	W32(r2 + 0xCu, r3); UPD(0x0C07D16Eu, 2);  /* 0C07D16C mov.l Rm,@(disp,Rn) */
	W32(r2 + 0x8u, r3); UPD(0x0C07D170u, 1);  /* 0C07D16E mov.l Rm,@(disp,Rn) */
	W32(r2 + 0x14u, r4); UPD(0x0C07D172u, 1);  /* 0C07D170 mov.l Rm,@(disp,Rn) */
	W32(r2 + 0x18u, r5); UPD(0x0C07D174u, 1);  /* 0C07D172 mov.l Rm,@(disp,Rn) */
	W32(r2 + 0x20u, r3); UPD(0x0C07D176u, 1);  /* 0C07D174 mov.l Rm,@(disp,Rn) */
	W32(r2 + 0x1Cu, r3); UPD(0x0C07D178u, 1);  /* 0C07D176 mov.l Rm,@(disp,Rn) */
	r2 += 0x2Bu;  /* 0C07D178 add #imm,Rn */
	W8(r2, r3); UPD(0x0C07D17Cu, 2);  /* 0C07D17A mov.b Rm,@Rn */
	r2 += 0xFFFFFFD5u;  /* 0C07D17C add #imm,Rn */
	W8(r0, r3); UPD(0x0C07D180u, 2);  /* 0C07D17E mov.b Rm,@Rn */
	r2 += 0x26u;  /* 0C07D180 add #imm,Rn */
	W16(r2, r3); UPD(0x0C07D184u, 2);  /* 0C07D182 mov.w Rm,@Rn */
	r0 += 0xFFFFFFFAu;  /* 0C07D184 add #imm,Rn */
	r2 += 0x9u;  /* 0C07D186 add #imm,Rn */
	W16(r0, r3); UPD(0x0C07D18Au, 3);  /* 0C07D188 mov.w Rm,@Rn */
	W8(r2, r6); UPD(0x0C07D18Cu, 1);  /* 0C07D18A mov.b Rm,@Rn */
	r0 = 0x40u;  /* 0C07D18C mov #imm,Rn */
	{ u32 v_ = r0; r2 -= 1; W8(r2, v_); } UPD(0x0C07D190u, 2);  /* 0C07D18E mov.b Rm,@-Rn */
	r0 = 0x26Cu; UPD(0x0C07D192u, 1);  /* 0C07D190 mov.w @(disp,pc),Rn */
	{ u32 v_ = r6; r2 -= 1; W8(r2, v_); } UPD(0x0C07D194u, 1);  /* 0C07D192 mov.b Rm,@-Rn */
	IF(0x0C07D194u); W8(r0 + r1, r8); UPD(0x0C07D196u, 1);  /* 0C07D194 mov.b Rm,@(r0,Rn) */
	r1 = r7;  /* 0C07D196 mov Rm,Rn */
	r1 += 0x1u;  /* 0C07D198 add #imm,Rn */
	r7 = r1 & 0xFFFF;  /* 0C07D19A extu.w Rm,Rn */
	r1 = 0x2u;  /* 0C07D19C mov #imm,Rn */
	T = r7 > r1;  /* 0C07D19E cmp/hi Rm,Rn */
	{ u32 c_ = !T; r2 += 0x3u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C07D15Cu, 8); goto L_0C07D15C; } goto L_0C07D1A4; }  /* 0C07D1A0 bf/s */
L_0C07D1A4: BLKS(0x0C07D1A4u);
	r0 += 0x1Du;  /* 0C07D1A4 add #imm,Rn */
	r3 = 0x3u;  /* 0C07D1A6 mov #imm,Rn */
	IF(0x0C07D1A8u); W8(r0 + r9, r3); UPD(0x0C07D1AAu, 4);  /* 0C07D1A8 mov.b Rm,@(r0,Rn) */
	r2 = r8;  /* 0C07D1AA mov Rm,Rn */
	r0 += 0xFFFFFFE6u;  /* 0C07D1AC add #imm,Rn */
	IF(0x0C07D1AEu); T = r2 & 1; r2 = (u32)((s32)r2 >> 1);  /* 0C07D1AE shar Rn */
	IF(0x0C07D1B0u); W8(r0 + r9, r2); UPD(0x0C07D1B2u, 4);  /* 0C07D1B0 mov.b Rm,@(r0,Rn) */
	r0 = 0xC077140u; UPD(0x0C07D1B4u, 1);  /* 0C07D1B2 mov.l @(disp,pc),Rn */
	IF(0x0C07D1B4u); { u32 t_ = r0; PR = 0x0C07D1B8u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C077140, 0x0C077140u, 0x0C07D1B8u); }  /* 0C07D1B4 jsr @Rn */
L_0C07D1B8: BLKS(0x0C07D1B8u);
	r2 = r8;  /* 0C07D1B8 mov Rm,Rn */
	IF(0x0C07D1BAu); T = r2 & 1; r2 = (u32)((s32)r2 >> 1);  /* 0C07D1BA shar Rn */
	r5 = 0xC22E028u; UPD(0x0C07D1BEu, 3);  /* 0C07D1BC mov.l @(disp,pc),Rn */
	IF(0x0C07D1BEu); r2 <<= 2;  /* 0C07D1BE shll2 Rn */
	r2 += r5;  /* 0C07D1C0 add Rm,Rn */
	r4 = R32(r2); UPD(0x0C07D1C4u, 3);  /* 0C07D1C2 mov.l @Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C07D1C4 tst Rm,Rn */
	if (T) { UPD(0x0C07D270u, 4); goto L_0C07D270; }  /* 0C07D1C6 bt */
L_0C07D1C8: BLKS(0x0C07D1C8u);
	r0 = 0x26Fu; UPD(0x0C07D1CAu, 1);  /* 0C07D1C8 mov.w @(disp,pc),Rn */
	IF(0x0C07D1CAu); r0 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C07D1CCu, 1);  /* 0C07D1CA mov.b @(r0,Rm),Rn */
	T = r0 == 0xFFFFFFFFu;  /* 0C07D1CC cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C07D250u, 4); goto L_0C07D250; }  /* 0C07D1CE bf */
L_0C07D1D0: BLKS(0x0C07D1D0u);
	r9 = 0x60u;  /* 0C07D1D0 mov #imm,Rn */
	IF(0x0C07D1D2u); MACL = r11 * r9;  /* 0C07D1D2 mul.l Rm,Rn */
	r2 = 0xC3BC7CCu; UPD(0x0C07D1D6u, 4);  /* 0C07D1D4 mov.l @(disp,pc),Rn */
	r3 = 0x8u;  /* 0C07D1D6 mov #imm,Rn */
	IF(0x0C07D1D8u); r9 = MACL;  /* 0C07D1D8 sts macl,Rn */
	r9 += r2;  /* 0C07D1DA add Rm,Rn */
	r6 = R32(r9); UPD(0x0C07D1DEu, 4);  /* 0C07D1DC mov.l @Rm,Rn */
	r4 = 0x0u;  /* 0C07D1DE mov #imm,Rn */
	r1 = 0xEFFFFFFBu; UPD(0x0C07D1E2u, 2);  /* 0C07D1E0 mov.l @(disp,pc),Rn */
	r5 = 0xC07BF80u; UPD(0x0C07D1E4u, 1);  /* 0C07D1E2 mov.l @(disp,pc),Rn */
	r6 &= r1;  /* 0C07D1E4 and Rm,Rn */
	W32(r9, r6); UPD(0x0C07D1E8u, 2);  /* 0C07D1E6 mov.l Rm,@Rn */
	W32(r9 + 0x4u, r3); UPD(0x0C07D1EAu, 1);  /* 0C07D1E8 mov.l Rm,@(disp,Rn) */
	W32(r9 + 0x8u, r12); UPD(0x0C07D1ECu, 1);  /* 0C07D1EA mov.l Rm,@(disp,Rn) */
	W32(r9 + 0xCu, r4); UPD(0x0C07D1EEu, 1);  /* 0C07D1EC mov.l Rm,@(disp,Rn) */
	r12 = 0x3Cu;  /* 0C07D1EE mov #imm,Rn */
	r4 = r11;  /* 0C07D1F0 mov Rm,Rn */
	IF(0x0C07D1F2u); { u32 t_ = r5; PR = 0x0C07D1F6u; r9 += 0x4Fu; /* slot add #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C07BF80, 0x0C07BF80u, 0x0C07D1F6u); }  /* 0C07D1F2 jsr @Rn */
L_0C07D1F6: BLKS(0x0C07D1F6u);
	W8(r9, r12); UPD(0x0C07D1F8u, 1);  /* 0C07D1F6 mov.b Rm,@Rn */
	r11 = 0x14u;  /* 0C07D1F8 mov #imm,Rn */
	r7 = 0x2A0u; UPD(0x0C07D1FCu, 2);  /* 0C07D1FA mov.w @(disp,pc),Rn */
	r9 += 0xFFFFFFF5u;  /* 0C07D1FC add #imm,Rn */
	W8(r9, r11); UPD(0x0C07D200u, 2);  /* 0C07D1FE mov.b Rm,@Rn */
	IF(0x0C07D200u); MACL = r10 * r7;  /* 0C07D200 mul.l Rm,Rn */
	r0 = 0x4FFFFu; UPD(0x0C07D204u, 3);  /* 0C07D202 mov.l @(disp,pc),Rn */
	r9 += 0xFFFFFFBCu;  /* 0C07D204 add #imm,Rn */
	r8 = 0x808080u; UPD(0x0C07D208u, 2);  /* 0C07D206 mov.l @(disp,pc),Rn */
	IF(0x0C07D208u); r5 = MACL;  /* 0C07D208 sts macl,Rn */
	r2 = 0xC29D1D8u; UPD(0x0C07D20Cu, 2);  /* 0C07D20A mov.l @(disp,pc),Rn */
	W32(r9 + 0x38u, r0); UPD(0x0C07D20Eu, 1);  /* 0C07D20C mov.l Rm,@(disp,Rn) */
	r5 += r2;  /* 0C07D20E add Rm,Rn */
	W32(r9 + 0x3Cu, r8); UPD(0x0C07D212u, 2);  /* 0C07D210 mov.l Rm,@(disp,Rn) */
	r6 = 0x180000u; UPD(0x0C07D214u, 1);  /* 0C07D212 mov.l @(disp,pc),Rn */
	r3 = R32(r5 + 0x10u); UPD(0x0C07D216u, 1);  /* 0C07D214 mov.l @(disp,Rm),Rn */
	r3 += r6;  /* 0C07D216 add Rm,Rn */
	W32(r9 + 0x28u, r3); UPD(0x0C07D21Au, 2);  /* 0C07D218 mov.l Rm,@(disp,Rn) */
	r1 = 0x100000u; UPD(0x0C07D21Cu, 1);  /* 0C07D21A mov.l @(disp,pc),Rn */
	r4 = R32(r5 + 0x14u); UPD(0x0C07D21Eu, 1);  /* 0C07D21C mov.l @(disp,Rm),Rn */
	r12 = 0xC07B620u; UPD(0x0C07D220u, 1);  /* 0C07D21E mov.l @(disp,pc),Rn */
	r4 += r1;  /* 0C07D220 add Rm,Rn */
	W32(r9 + 0x2Cu, r4); UPD(0x0C07D224u, 2);  /* 0C07D222 mov.l Rm,@(disp,Rn) */
	r11 = 0xC0C20A0u; UPD(0x0C07D226u, 1);  /* 0C07D224 mov.l @(disp,pc),Rn */
	IF(0x0C07D226u); { u32 t_ = r12; PR = 0x0C07D22Au; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07B620, 0x0C07B620u, 0x0C07D22Au); }  /* 0C07D226 jsr @Rn */
L_0C07D22A: BLKS(0x0C07D22Au);
	r4 = r10;  /* 0C07D22A mov Rm,Rn */
	IF(0x0C07D22Cu); { u32 t_ = r11; PR = 0x0C07D230u; r5 = 0x5Fu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0C20A0, 0x0C0C20A0u, 0x0C07D230u); }  /* 0C07D22C jsr @Rn */
L_0C07D230: BLKS(0x0C07D230u);
	r0 = 0xC0C2020u; UPD(0x0C07D232u, 1);  /* 0C07D230 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C07D232 mov Rm,Rn */
	r5 = r13;  /* 0C07D234 mov Rm,Rn */
	r15 = r14;  /* 0C07D236 mov Rm,Rn */
	IF(0x0C07D238u); PR = R32(r15); r15 += 4; UPD(0x0C07D23Au, 4);  /* 0C07D238 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07D23Cu, 1);  /* 0C07D23A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07D23Eu, 1);  /* 0C07D23C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07D240u, 1);  /* 0C07D23E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07D242u, 1);  /* 0C07D240 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07D244u, 1);  /* 0C07D242 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07D246u, 1);  /* 0C07D244 mov.l @Rm+,Rn */
	IF(0x0C07D246u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0C2020u: TAIL(blk_f_0C0C2020); default: JUMPD(tv_); } }  /* 0C07D246 jmp @Rn */
L_0C07D250: BLKS(0x0C07D250u);
	r4 = r10;  /* 0C07D250 mov Rm,Rn */
	r10 = 0xC07D2E0u; UPD(0x0C07D254u, 2);  /* 0C07D252 mov.l @(disp,pc),Rn */
	IF(0x0C07D254u); { u32 t_ = r10; PR = 0x0C07D258u; r5 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07D2E0, 0x0C07D2E0u, 0x0C07D258u); }  /* 0C07D254 jsr @Rn */
L_0C07D258: BLKS(0x0C07D258u);
	r4 = 0x80000u; UPD(0x0C07D25Au, 1);  /* 0C07D258 mov.l @(disp,pc),Rn */
	r7 = 0xC071C90u; UPD(0x0C07D25Cu, 1);  /* 0C07D25A mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C07D25C mov Rm,Rn */
	IF(0x0C07D25Eu); PR = R32(r15); r15 += 4; UPD(0x0C07D260u, 2);  /* 0C07D25E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07D262u, 1);  /* 0C07D260 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07D264u, 1);  /* 0C07D262 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07D266u, 1);  /* 0C07D264 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07D268u, 1);  /* 0C07D266 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07D26Au, 1);  /* 0C07D268 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07D26Cu, 1);  /* 0C07D26A mov.l @Rm+,Rn */
	IF(0x0C07D26Cu); { u32 tv_ = r7; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C071C90u: TAIL(blk_f_0C071C90); default: JUMPD(tv_); } }  /* 0C07D26C jmp @Rn */
L_0C07D270: BLKS(0x0C07D270u);
	r6 = 0xC297498u; UPD(0x0C07D272u, 1);  /* 0C07D270 mov.l @(disp,pc),Rn */
	r8 = 0x1u;  /* 0C07D272 mov #imm,Rn */
	r7 = R32(r6); UPD(0x0C07D276u, 2);  /* 0C07D274 mov.l @Rm,Rn */
	r7 += 0x1u;  /* 0C07D276 add #imm,Rn */
	W32(r2, r8); UPD(0x0C07D27Au, 2);  /* 0C07D278 mov.l Rm,@Rn */
	{ W32(r6, r7); /* slot mov.l Rm,@Rn */ UPD(0x0C07D1D0u, 3); goto L_0C07D1D0; }  /* 0C07D27A bra */
}

/* FUN_0c07d2e0 */
void blk_f_0C07D2E0(sh3_t *c)
{
	LOCALS;
	SPIN_VARS(0C07D340);
L_0C07D2E0: BLKS(0x0C07D2E0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07D2E2u, 1);  /* 0C07D2E0 mov.l Rm,@-Rn */
	r7 = 0x60u;  /* 0C07D2E2 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07D2E6u, 2);  /* 0C07D2E4 mov.l Rm,@-Rn */
	r6 = 0x3u;  /* 0C07D2E6 mov #imm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07D2EAu, 2);  /* 0C07D2E8 mov.l Rm,@-Rn */
	r2 = 0x4u;  /* 0C07D2EA mov #imm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07D2EEu, 2);  /* 0C07D2EC mov.l Rm,@-Rn */
	r10 = 0x0u;  /* 0C07D2EE mov #imm,Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C07D2F0 exts.w Rm,Rn */
	r4 = (u32)(s32)(s16)r5;  /* 0C07D2F2 exts.w Rm,Rn */
	IF(0x0C07D2F4u); MACL = r4 * r7;  /* 0C07D2F4 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07D2F8u, 6);  /* 0C07D2F6 mov.l Rm,@-Rn */
	r8 = 0xC3BC7CCu; UPD(0x0C07D2FAu, 1);  /* 0C07D2F8 mov.l @(disp,pc),Rn */
	IF(0x0C07D2FAu); r7 = MACL;  /* 0C07D2FA sts macl,Rn */
	IF(0x0C07D2FCu); r15 -= 4; W32(r15, PR); UPD(0x0C07D2FEu, 2);  /* 0C07D2FC sts.l pr,@-Rn */
	r7 += r8;  /* 0C07D2FE add Rm,Rn */
	r0 = R32(r7 + 0x4u); UPD(0x0C07D302u, 2);  /* 0C07D300 mov.l @(disp,Rm),Rn */
	r14 = r15;  /* 0C07D302 mov Rm,Rn */
	IF(0x0C07D304u); ARG0(0x406Du); { s32 s_ = (s32)r6; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C07D304 shld Rm,Rn */
	r5 = 0xC189B20u; UPD(0x0C07D308u, 3);  /* 0C07D306 mov.l @(disp,pc),Rn */
	r3 = R32(r7 + 0x8u); UPD(0x0C07D30Au, 1);  /* 0C07D308 mov.l @(disp,Rm),Rn */
	IF(0x0C07D30Au); r1 = R32(r0 + r5); UPD(0x0C07D30Cu, 1);  /* 0C07D30A mov.l @(r0,Rm),Rn */
	IF(0x0C07D30Cu); ARG0(0x432Du); { s32 s_ = (s32)r2; if (s_ >= 0) r3 <<= (s_ & 31); else if ((s_ & 31) == 0) r3 = 0; else r3 >>= ((~s_ & 31) + 1); }  /* 0C07D30C shld Rm,Rn */
	r0 = 0x2A0u; UPD(0x0C07D310u, 2);  /* 0C07D30E mov.w @(disp,pc),Rn */
	r3 += r1;  /* 0C07D310 add Rm,Rn */
	IF(0x0C07D312u); MACL = r11 * r0;  /* 0C07D312 mul.l Rm,Rn */
	r6 = R32(r3 + 0x4u); UPD(0x0C07D316u, 4);  /* 0C07D314 mov.l @(disp,Rm),Rn */
	r5 += 0x40u;  /* 0C07D316 add #imm,Rn */
	r9 = 0xC29D1D8u; UPD(0x0C07D31Au, 2);  /* 0C07D318 mov.l @(disp,pc),Rn */
	IF(0x0C07D31Au); r3 = MACL;  /* 0C07D31A sts macl,Rn */
	r8 = 0x290u; UPD(0x0C07D31Eu, 2);  /* 0C07D31C mov.w @(disp,pc),Rn */
	r3 += r9;  /* 0C07D31E add Rm,Rn */
	r3 += r8;  /* 0C07D320 add Rm,Rn */
	r2 = R32(r3); UPD(0x0C07D324u, 3);  /* 0C07D322 mov.l @Rm,Rn */
	r11 += 0xBu;  /* 0C07D324 add #imm,Rn */
	r2 += r6;  /* 0C07D326 add Rm,Rn */
	W32(r3, r2); UPD(0x0C07D32Au, 3);  /* 0C07D328 mov.l Rm,@Rn */
	r1 = 0xEFFFFFFBu; UPD(0x0C07D32Cu, 1);  /* 0C07D32A mov.l @(disp,pc),Rn */
	r0 = R32(r7); UPD(0x0C07D32Eu, 1);  /* 0C07D32C mov.l @Rm,Rn */
	r0 &= r1;  /* 0C07D32E and Rm,Rn */
	W32(r7 + 0x4u, r11); UPD(0x0C07D332u, 2);  /* 0C07D330 mov.l Rm,@(disp,Rn) */
	W32(r7, r0); UPD(0x0C07D334u, 1);  /* 0C07D332 mov.l Rm,@Rn */
	r2 = R32(r5 + 0x18u); UPD(0x0C07D336u, 1);  /* 0C07D334 mov.l @(disp,Rm),Rn */
	r0 = R32(r2 + 0x4u); UPD(0x0C07D338u, 1);  /* 0C07D336 mov.l @(disp,Rm),Rn */
	T = r6 == r0;  /* 0C07D338 cmp/eq Rm,Rn */
	{ u32 c_ = T; r11 += 0xFFFFFFF5u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C07D34Au, 4); goto L_0C07D34A; } goto L_0C07D33E; }  /* 0C07D33A bt/s */
L_0C07D33E: BLKS(0x0C07D33Eu);
	r2 += 0x4u;  /* 0C07D33E add #imm,Rn */
	UPD(0x0C07D340u, 2);
L_0C07D340: BLKS(0x0C07D340u);
	SPIN_SAVE(0C07D340);
	r2 += 0x10u;  /* 0C07D340 add #imm,Rn */
	r5 = RS32(0C07D340, r2); UPD(0x0C07D344u, 2);  /* 0C07D342 mov.l @Rm,Rn */
	T = r6 == r5;  /* 0C07D344 cmp/eq Rm,Rn */
	{ u32 c_ = !T; r10 += 0x1u; /* slot add #imm,Rn */ if (c_) { SPIN_FFD(0C07D340, 6); UPD(0x0C07D340u, 4); goto L_0C07D340; } UPD(0x0C07D34Au, 1); goto L_0C07D34A; }  /* 0C07D346 bf/s */
L_0C07D34A: BLKS(0x0C07D34Au);
	r8 = 0x60u;  /* 0C07D34A mov #imm,Rn */
	IF(0x0C07D34Cu); MACL = r4 * r8;  /* 0C07D34C mul.l Rm,Rn */
	r6 = 0xC3BC7CCu; UPD(0x0C07D350u, 4);  /* 0C07D34E mov.l @(disp,pc),Rn */
	r9 = 0x0u;  /* 0C07D350 mov #imm,Rn */
	IF(0x0C07D352u); r8 = MACL;  /* 0C07D352 sts macl,Rn */
	r2 = 0xC07BF80u; UPD(0x0C07D356u, 3);  /* 0C07D354 mov.l @(disp,pc),Rn */
	r8 += r6;  /* 0C07D356 add Rm,Rn */
	W32(r8 + 0x8u, r10); UPD(0x0C07D35Au, 2);  /* 0C07D358 mov.l Rm,@(disp,Rn) */
	IF(0x0C07D35Au); { u32 t_ = r2; PR = 0x0C07D35Eu; W32(r8 + 0xCu, r9); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C07BF80, 0x0C07BF80u, 0x0C07D35Eu); }  /* 0C07D35A jsr @Rn */
L_0C07D35E: BLKS(0x0C07D35Eu);
	r8 += 0x4Fu;  /* 0C07D35E add #imm,Rn */
	r3 = 0x3Cu;  /* 0C07D360 mov #imm,Rn */
	W8(r8, r3); UPD(0x0C07D364u, 3);  /* 0C07D362 mov.b Rm,@Rn */
	r8 += 0xFFFFFFB1u;  /* 0C07D364 add #imm,Rn */
	W32(r8 + 0x38u, r9); UPD(0x0C07D368u, 2);  /* 0C07D366 mov.l Rm,@(disp,Rn) */
	r9 = 0x808080u; UPD(0x0C07D36Au, 1);  /* 0C07D368 mov.l @(disp,pc),Rn */
	r4 = 0xC189C78u; UPD(0x0C07D36Cu, 1);  /* 0C07D36A mov.l @(disp,pc),Rn */
	W32(r8 + 0x3Cu, r9); UPD(0x0C07D36Eu, 1);  /* 0C07D36C mov.l Rm,@(disp,Rn) */
	r0 = r4;  /* 0C07D36E mov Rm,Rn */
	IF(0x0C07D370u); r5 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C07D372u, 2);  /* 0C07D370 mov.b @(r0,Rm),Rn */
	r4 = r11;  /* 0C07D372 mov Rm,Rn */
	r0 = 0xC0C20A0u; UPD(0x0C07D376u, 2);  /* 0C07D374 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C07D376 mov Rm,Rn */
	IF(0x0C07D378u); PR = R32(r15); r15 += 4; UPD(0x0C07D37Au, 2);  /* 0C07D378 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07D37Cu, 1);  /* 0C07D37A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07D37Eu, 1);  /* 0C07D37C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07D380u, 1);  /* 0C07D37E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07D382u, 1);  /* 0C07D380 mov.l @Rm+,Rn */
	IF(0x0C07D382u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0C20A0u: TAIL(blk_f_0C0C20A0); default: JUMPD(tv_); } }  /* 0C07D382 jmp @Rn */
}

/* FUN_0c07d3b0 */
void blk_f_0C07D3B0(sh3_t *c)
{
	LOCALS;
L_0C07D3B0: BLKS(0x0C07D3B0u);
	r1 = (u32)(s32)(s16)r4;  /* 0C07D3B0 exts.w Rm,Rn */
	r3 = 0x60u;  /* 0C07D3B2 mov #imm,Rn */
	IF(0x0C07D3B4u); MACL = r1 * r3;  /* 0C07D3B4 mul.l Rm,Rn */
	r4 = 0xC3BC7CCu; UPD(0x0C07D3B8u, 5);  /* 0C07D3B6 mov.l @(disp,pc),Rn */
	IF(0x0C07D3B8u); r3 = MACL;  /* 0C07D3B8 sts macl,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07D3BCu, 2);  /* 0C07D3BA mov.l Rm,@-Rn */
	r3 += r4;  /* 0C07D3BC add Rm,Rn */
	r3 += 0x4Au;  /* 0C07D3BE add #imm,Rn */
	r7 = (u32)(s32)(s16)R16(r3); UPD(0x0C07D3C2u, 3);  /* 0C07D3C0 mov.w @Rm,Rn */
	r14 = r15;  /* 0C07D3C2 mov Rm,Rn */
	r2 = 0xB4u; UPD(0x0C07D3C6u, 2);  /* 0C07D3C4 mov.w @(disp,pc),Rn */
	r3 += 0xFFFFFFB6u;  /* 0C07D3C6 add #imm,Rn */
	IF(0x0C07D3C8u); MACL = r7 * r2;  /* 0C07D3C8 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C07D3CCu, 4);  /* 0C07D3CA mov.l @(disp,pc),Rn */
	IF(0x0C07D3CCu); r2 = MACL;  /* 0C07D3CC sts macl,Rn */
	r2 += r0;  /* 0C07D3CE add Rm,Rn */
	r0 = R32(r2); UPD(0x0C07D3D2u, 3);  /* 0C07D3D0 mov.l @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C07D3D2 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0xFFFFFFFFu; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07D3E6u, 4); goto L_0C07D3E6; } goto L_0C07D3D8; }  /* 0C07D3D4 bt/s */
L_0C07D3D8: BLKS(0x0C07D3D8u);
	r0 = 0x82u; UPD(0x0C07D3DAu, 2);  /* 0C07D3D8 mov.w @(disp,pc),Rn */
	r3 += 0x4Cu;  /* 0C07D3DA add #imm,Rn */
	IF(0x0C07D3DCu); r5 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C07D3DEu, 2);  /* 0C07D3DC mov.w @(r0,Rm),Rn */
	r6 = (u32)(s32)(s16)R16(r3); UPD(0x0C07D3E0u, 1);  /* 0C07D3DE mov.w @Rm,Rn */
	T = r6 == r5;  /* 0C07D3E0 cmp/eq Rm,Rn */
	{ u32 c_ = T; r0 = 0xFFFFFFFFu; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07D3F0u, 4); goto L_0C07D3F0; } UPD(0x0C07D3E6u, 1); goto L_0C07D3E6; }  /* 0C07D3E2 bt/s */
L_0C07D3E6: BLKS(0x0C07D3E6u);
	r15 = r14;  /* 0C07D3E6 mov Rm,Rn */
	IF(0x0C07D3E8u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C07D3E8 rts */
L_0C07D3F0: BLKS(0x0C07D3F0u);
	{ r0 = r7; /* slot mov Rm,Rn */ UPD(0x0C07D3E6u, 3); goto L_0C07D3E6; }  /* 0C07D3F0 bra */
}

/* FUN_0c07d400 */
void blk_f_0C07D400(sh3_t *c)
{
	LOCALS;
L_0C07D400: BLKS(0x0C07D400u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07D402u, 1);  /* 0C07D400 mov.l Rm,@-Rn */
	r2 = 0x60u;  /* 0C07D402 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07D406u, 2);  /* 0C07D404 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C07D406 exts.w Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07D40Au, 2);  /* 0C07D408 mov.l Rm,@-Rn */
	IF(0x0C07D40Au); MACL = r8 * r2;  /* 0C07D40A mul.l Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07D40Eu, 3);  /* 0C07D40C mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07D410u, 1);  /* 0C07D40E mov.l Rm,@-Rn */
	IF(0x0C07D410u); r2 = MACL;  /* 0C07D410 sts macl,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C07D414u, 2);  /* 0C07D412 mov.l Rm,@-Rn */
	r0 = 0xC3BC7CCu; UPD(0x0C07D416u, 1);  /* 0C07D414 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07D418u, 1);  /* 0C07D416 mov.l Rm,@-Rn */
	r2 += r0;  /* 0C07D418 add Rm,Rn */
	r5 = R32(r2 + 0x1Cu); UPD(0x0C07D41Cu, 2);  /* 0C07D41A mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFE4u;  /* 0C07D41C add #imm,Rn */
	{ u32 v_ = R32(r5); r5 += 4; r11 = v_; } UPD(0x0C07D420u, 2);  /* 0C07D41E mov.l @Rm+,Rn */
	r0 = 0xFFFFFFFu; UPD(0x0C07D422u, 1);  /* 0C07D420 mov.l @(disp,pc),Rn */
	r11 &= r0;  /* 0C07D422 and Rm,Rn */
	T = (r11 & r11) == 0;  /* 0C07D424 tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07D480u, 5); goto L_0C07D480; } goto L_0C07D42A; }  /* 0C07D426 bt/s */
L_0C07D42A: BLKS(0x0C07D42Au);
	r3 = R32(r2 + 0x2Cu); UPD(0x0C07D42Cu, 2);  /* 0C07D42A mov.l @(disp,Rm),Rn */
	W32(r14 + 0x4u, r2); UPD(0x0C07D42Eu, 1);  /* 0C07D42C mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x8u, r3); UPD(0x0C07D430u, 1);  /* 0C07D42E mov.l Rm,@(disp,Rn) */
L_0C07D430: BLKS(0x0C07D430u);
	{ u32 v_ = R32(r5); r5 += 4; r7 = v_; } UPD(0x0C07D432u, 1);  /* 0C07D430 mov.l @Rm+,Rn */
	r1 = R32(r14 + 0x4u); UPD(0x0C07D434u, 1);  /* 0C07D432 mov.l @(disp,Rm),Rn */
	{ u32 v_ = R32(r5); r5 += 4; r6 = v_; } UPD(0x0C07D436u, 1);  /* 0C07D434 mov.l @Rm+,Rn */
	r4 = R32(r14 + 0x8u); UPD(0x0C07D438u, 1);  /* 0C07D436 mov.l @(disp,Rm),Rn */
	r12 = R32(r1 + 0x28u); UPD(0x0C07D43Au, 1);  /* 0C07D438 mov.l @(disp,Rm),Rn */
	{ u32 v_ = R32(r5); r5 += 4; r13 = v_; } UPD(0x0C07D43Cu, 1);  /* 0C07D43A mov.l @Rm+,Rn */
	r12 += r6;  /* 0C07D43C add Rm,Rn */
	r13 += r4;  /* 0C07D43E add Rm,Rn */
	W32(r14, r7); UPD(0x0C07D442u, 3);  /* 0C07D440 mov.l Rm,@Rn */
	r6 = 0x0u;  /* 0C07D442 mov #imm,Rn */
	r4 = 0x0u;  /* 0C07D444 mov #imm,Rn */
	IF(0x0C07D446u); ;  /* 0C07D446 nop */
	UPD(0x0C07D448u, 3);
L_0C07D448: BLKS(0x0C07D448u);
	T = r8 == r6;  /* 0C07D448 cmp/eq Rm,Rn */
	{ u32 c_ = T; r3 = r4; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07D468u, 4); goto L_0C07D468; } goto L_0C07D44E; }  /* 0C07D44A bt/s */
L_0C07D44E: BLKS(0x0C07D44Eu);
	r2 = 0xC3BC7CCu; UPD(0x0C07D450u, 2);  /* 0C07D44E mov.l @(disp,pc),Rn */
	r3 += r2;  /* 0C07D450 add Rm,Rn */
	r9 = R32(r3); UPD(0x0C07D454u, 2);  /* 0C07D452 mov.l @Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C07D454 tst Rm,Rn */
	if (T) { UPD(0x0C07D468u, 4); goto L_0C07D468; }  /* 0C07D456 bt */
L_0C07D458: BLKS(0x0C07D458u);
	r7 = 0x60u;  /* 0C07D458 mov #imm,Rn */
	IF(0x0C07D45Au); MACL = r8 * r7;  /* 0C07D45A mul.l Rm,Rn */
	r0 = R32(r3 + 0x4u); UPD(0x0C07D45Eu, 4);  /* 0C07D45C mov.l @(disp,Rm),Rn */
	IF(0x0C07D45Eu); r7 = MACL;  /* 0C07D45E sts macl,Rn */
	r7 += r2;  /* 0C07D460 add Rm,Rn */
	r10 = R32(r7 + 0x4u); UPD(0x0C07D464u, 3);  /* 0C07D462 mov.l @(disp,Rm),Rn */
	T = r0 == r10;  /* 0C07D464 cmp/eq Rm,Rn */
	if (T) { UPD(0x0C07D4A0u, 4); goto L_0C07D4A0; }  /* 0C07D466 bt */
L_0C07D468: BLKS(0x0C07D468u);
	r3 = r6;  /* 0C07D468 mov Rm,Rn */
	r3 += 0x1u;  /* 0C07D46A add #imm,Rn */
	UPD(0x0C07D46Cu, 2);
L_0C07D46C: BLKS(0x0C07D46Cu);
	r10 = 0xFFu; UPD(0x0C07D46Eu, 1);  /* 0C07D46C mov.w @(disp,pc),Rn */
	r6 = (u32)(s32)(s16)r3;  /* 0C07D46E exts.w Rm,Rn */
	T = (s32)r6 > (s32)r10;  /* 0C07D470 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r4 += 0x60u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C07D448u, 5); goto L_0C07D448; } goto L_0C07D476; }  /* 0C07D472 bf/s */
L_0C07D476: BLKS(0x0C07D476u);
	{ u32 v_ = R32(r5); r5 += 4; r11 = v_; } UPD(0x0C07D478u, 2);  /* 0C07D476 mov.l @Rm+,Rn */
	r6 = 0xFFFFFFFu; UPD(0x0C07D47Au, 1);  /* 0C07D478 mov.l @(disp,pc),Rn */
	r11 &= r6;  /* 0C07D47A and Rm,Rn */
	T = (r11 & r11) == 0;  /* 0C07D47C tst Rm,Rn */
	if (!T) { UPD(0x0C07D430u, 5); goto L_0C07D430; }  /* 0C07D47E bf */
L_0C07D480: BLKS(0x0C07D480u);
	r14 += 0x1Cu;  /* 0C07D480 add #imm,Rn */
	r15 = r14;  /* 0C07D482 mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07D486u, 3);  /* 0C07D484 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07D488u, 1);  /* 0C07D486 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07D48Au, 1);  /* 0C07D488 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07D48Cu, 1);  /* 0C07D48A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07D48Eu, 1);  /* 0C07D48C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07D490u, 1);  /* 0C07D48E mov.l @Rm+,Rn */
	IF(0x0C07D490u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07D490 rts */
L_0C07D4A0: BLKS(0x0C07D4A0u);
	r1 = R32(r3 + 0x8u); UPD(0x0C07D4A2u, 1);  /* 0C07D4A0 mov.l @(disp,Rm),Rn */
	r9 = R32(r7 + 0x8u); UPD(0x0C07D4A4u, 1);  /* 0C07D4A2 mov.l @(disp,Rm),Rn */
	T = r1 == r9;  /* 0C07D4A4 cmp/eq Rm,Rn */
	if (!T) { UPD(0x0C07D468u, 4); goto L_0C07D468; }  /* 0C07D4A6 bf */
L_0C07D4A8: BLKS(0x0C07D4A8u);
	r3 = R32(r3 + 0x1Cu); UPD(0x0C07D4AAu, 1);  /* 0C07D4A8 mov.l @(disp,Rm),Rn */
	{ u32 v_ = R32(r3); r3 += 4; r0 = v_; } UPD(0x0C07D4ACu, 1);  /* 0C07D4AA mov.l @Rm+,Rn */
	T = (r0 & r0) == 0;  /* 0C07D4AC tst Rm,Rn */
	{ u32 c_ = T; r9 = r7; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07D468u, 4); goto L_0C07D468; } goto L_0C07D4B2; }  /* 0C07D4AE bt/s */
L_0C07D4B2: BLKS(0x0C07D4B2u);
	r10 = 0xC3BC7CCu; UPD(0x0C07D4B4u, 2);  /* 0C07D4B2 mov.l @(disp,pc),Rn */
	r9 += 0x58u;  /* 0C07D4B4 add #imm,Rn */
	r10 += r4;  /* 0C07D4B6 add Rm,Rn */
	W32(r14 + 0x14u, r9); UPD(0x0C07D4BAu, 3);  /* 0C07D4B8 mov.l Rm,@(disp,Rn) */
	r2 = r10;  /* 0C07D4BA mov Rm,Rn */
	r2 += 0x58u;  /* 0C07D4BC add #imm,Rn */
	r9 += 0xFFFFFFFCu;  /* 0C07D4BE add #imm,Rn */
	W32(r14 + 0xCu, r7); UPD(0x0C07D4C2u, 4);  /* 0C07D4C0 mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x18u, r2); UPD(0x0C07D4C4u, 1);  /* 0C07D4C2 mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x10u, r9); UPD(0x0C07D4C6u, 1);  /* 0C07D4C4 mov.l Rm,@(disp,Rn) */
	IF(0x0C07D4C6u); ;  /* 0C07D4C6 nop */
	UPD(0x0C07D4C8u, 1);
L_0C07D4C8: BLKS(0x0C07D4C8u);
	{ u32 v_ = R32(r3); r3 += 4; r9 = v_; } UPD(0x0C07D4CAu, 1);  /* 0C07D4C8 mov.l @Rm+,Rn */
	r1 = R32(r10 + 0x28u); UPD(0x0C07D4CCu, 1);  /* 0C07D4CA mov.l @(disp,Rm),Rn */
	{ u32 v_ = R32(r3); r3 += 4; r7 = v_; } UPD(0x0C07D4CEu, 1);  /* 0C07D4CC mov.l @Rm+,Rn */
	r1 += r7;  /* 0C07D4CE add Rm,Rn */
	{ u32 v_ = R32(r3); r3 += 4; r2 = v_; } UPD(0x0C07D4D2u, 2);  /* 0C07D4D0 mov.l @Rm+,Rn */
	r7 = R32(r10 + 0x2Cu); UPD(0x0C07D4D4u, 1);  /* 0C07D4D2 mov.l @(disp,Rm),Rn */
	r7 += r2;  /* 0C07D4D4 add Rm,Rn */
	r2 = r12;  /* 0C07D4D6 mov Rm,Rn */
	r2 -= r1;  /* 0C07D4D8 sub Rm,Rn */
	IF(0x0C07D4DAu); T = (s32)r2 >= 0;  /* 0C07D4DA cmp/pz Rn */
	{ u32 c_ = !T; r1 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07D570u, 7); goto L_0C07D570; } UPD(0x0C07D4E0u, 1); goto L_0C07D4E0; }  /* 0C07D4DC bf/s */
L_0C07D4E0: BLKS(0x0C07D4E0u);
	r0 += r11;  /* 0C07D4E0 add Rm,Rn */
	T = (s32)r1 >= (s32)r0;  /* 0C07D4E2 cmp/ge Rm,Rn */
	{ u32 c_ = T; r1 = r13; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07D4F8u, 5); goto L_0C07D4F8; } goto L_0C07D4E8; }  /* 0C07D4E4 bt/s */
L_0C07D4E8: BLKS(0x0C07D4E8u);
	r1 -= r7;  /* 0C07D4E8 sub Rm,Rn */
	IF(0x0C07D4EAu); T = (s32)r1 >= 0;  /* 0C07D4EA cmp/pz Rn */
	if (!T) { UPD(0x0C07D560u, 6); goto L_0C07D560; }  /* 0C07D4EC bf */
L_0C07D4EE: BLKS(0x0C07D4EEu);
	r0 = R32(r14); UPD(0x0C07D4F0u, 1);  /* 0C07D4EE mov.l @Rm,Rn */
	r9 += r0;  /* 0C07D4F0 add Rm,Rn */
	T = (s32)r1 >= (s32)r9;  /* 0C07D4F2 cmp/ge Rm,Rn */
	{ u32 c_ = !T; r9 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07D510u, 5); goto L_0C07D510; } UPD(0x0C07D4F8u, 1); goto L_0C07D4F8; }  /* 0C07D4F4 bf/s */
L_0C07D4F8: BLKS(0x0C07D4F8u);
	{ u32 v_ = R32(r3); r3 += 4; r0 = v_; } UPD(0x0C07D4FAu, 1);  /* 0C07D4F8 mov.l @Rm+,Rn */
	T = (r0 & r0) == 0;  /* 0C07D4FA tst Rm,Rn */
	if (!T) { UPD(0x0C07D4C8u, 4); goto L_0C07D4C8; }  /* 0C07D4FC bf */
L_0C07D4FE: BLKS(0x0C07D4FEu);
	r3 = r6;  /* 0C07D4FE mov Rm,Rn */
	{ r3 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C07D46Cu, 4); goto L_0C07D46C; }  /* 0C07D500 bra */
L_0C07D510: BLKS(0x0C07D510u);
	r12 = R32(r14 + 0xCu); UPD(0x0C07D512u, 1);  /* 0C07D510 mov.l @(disp,Rm),Rn */
	r4 = 0x4u;  /* 0C07D512 mov #imm,Rn */
	r0 = R32(r12 + 0x8u); UPD(0x0C07D516u, 2);  /* 0C07D514 mov.l @(disp,Rm),Rn */
	r11 = 0x3u;  /* 0C07D516 mov #imm,Rn */
	r0 += 0x1u;  /* 0C07D518 add #imm,Rn */
	W32(r12 + 0x8u, r0); UPD(0x0C07D51Cu, 3);  /* 0C07D51A mov.l Rm,@(disp,Rn) */
	r13 = R32(r12 + 0x10u); UPD(0x0C07D51Eu, 1);  /* 0C07D51C mov.l @(disp,Rm),Rn */
	IF(0x0C07D51Eu); ARG0(0x404Du); { s32 s_ = (s32)r4; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C07D51E shld Rm,Rn */
	IF(0x0C07D520u); r8 = R32(r0 + r13); UPD(0x0C07D522u, 2);  /* 0C07D520 mov.l @(r0,Rm),Rn */
	r0 = R32(r12 + 0xCu); UPD(0x0C07D524u, 1);  /* 0C07D522 mov.l @(disp,Rm),Rn */
	IF(0x0C07D524u); ARG0(0x40BDu); { s32 s_ = (s32)r11; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C07D524 shld Rm,Rn */
	W32(r12 + 0x14u, r8); UPD(0x0C07D528u, 2);  /* 0C07D526 mov.l Rm,@(disp,Rn) */
	r0 += r8;  /* 0C07D528 add Rm,Rn */
	r5 = R32(r0); UPD(0x0C07D52Cu, 2);  /* 0C07D52A mov.l @Rm,Rn */
	r7 = R32(r14 + 0xCu); UPD(0x0C07D52Eu, 1);  /* 0C07D52C mov.l @(disp,Rm),Rn */
	W32(r7 + 0x18u, r5); UPD(0x0C07D530u, 1);  /* 0C07D52E mov.l Rm,@(disp,Rn) */
	r2 = R32(r0 + 0x4u); UPD(0x0C07D532u, 1);  /* 0C07D530 mov.l @(disp,Rm),Rn */
	W32(r10, r9); UPD(0x0C07D534u, 1);  /* 0C07D532 mov.l Rm,@Rn */
	r1 = R32(r14 + 0x10u); UPD(0x0C07D536u, 1);  /* 0C07D534 mov.l @(disp,Rm),Rn */
	r10 += 0x54u;  /* 0C07D536 add #imm,Rn */
	r13 = R32(r14 + 0x14u); UPD(0x0C07D53Au, 2);  /* 0C07D538 mov.l @(disp,Rm),Rn */
	r12 = R32(r14 + 0x18u); UPD(0x0C07D53Cu, 1);  /* 0C07D53A mov.l @(disp,Rm),Rn */
	r3 = R32(r1); UPD(0x0C07D53Eu, 1);  /* 0C07D53C mov.l @Rm,Rn */
	r6 = R32(r10); UPD(0x0C07D540u, 1);  /* 0C07D53E mov.l @Rm,Rn */
	r8 = R32(r13); UPD(0x0C07D542u, 1);  /* 0C07D540 mov.l @Rm,Rn */
	r3 += r6;  /* 0C07D542 add Rm,Rn */
	r11 = R32(r12); UPD(0x0C07D546u, 2);  /* 0C07D544 mov.l @Rm,Rn */
	r4 = R32(r14 + 0x10u); UPD(0x0C07D548u, 1);  /* 0C07D546 mov.l @(disp,Rm),Rn */
	r8 += r11;  /* 0C07D548 add Rm,Rn */
	r5 = R32(r14 + 0x14u); UPD(0x0C07D54Cu, 2);  /* 0C07D54A mov.l @(disp,Rm),Rn */
	W32(r7 + 0x1Cu, r2); UPD(0x0C07D54Eu, 1);  /* 0C07D54C mov.l Rm,@(disp,Rn) */
	W32(r4, r3); UPD(0x0C07D550u, 1);  /* 0C07D54E mov.l Rm,@Rn */
	{ W32(r5, r8); /* slot mov.l Rm,@Rn */ UPD(0x0C07D480u, 3); goto L_0C07D480; }  /* 0C07D550 bra */
L_0C07D560: BLKS(0x0C07D560u);
	{ r1 = 0u - r1; /* slot neg Rm,Rn */ UPD(0x0C07D4EEu, 3); goto L_0C07D4EE; }  /* 0C07D560 bra */
L_0C07D570: BLKS(0x0C07D570u);
	{ r1 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C07D4E0u, 3); goto L_0C07D4E0; }  /* 0C07D570 bra */
}

/* FUN_0c07d620 */
void blk_f_0C07D620(sh3_t *c)
{
	LOCALS;
L_0C07D620: BLKS(0x0C07D620u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07D622u, 1);  /* 0C07D620 mov.l Rm,@-Rn */
	r1 = 0x0u;  /* 0C07D622 mov #imm,Rn */
	r3 = 0x13Fu; UPD(0x0C07D626u, 2);  /* 0C07D624 mov.w @(disp,pc),Rn */
	r14 = r15;  /* 0C07D626 mov Rm,Rn */
	r2 = 0xC3BC7CCu; UPD(0x0C07D62Au, 2);  /* 0C07D628 mov.l @(disp,pc),Rn */
	r7 = 0x0u;  /* 0C07D62A mov #imm,Rn */
	UPD(0x0C07D62Cu, 1);
L_0C07D62C: BLKS(0x0C07D62Cu);
	W32(r2, r7); UPD(0x0C07D62Eu, 1);  /* 0C07D62C mov.l Rm,@Rn */
	r1 += 0x1u;  /* 0C07D62E add #imm,Rn */
	r1 = (u32)(s32)(s16)r1;  /* 0C07D630 exts.w Rm,Rn */
	T = (s32)r1 > (s32)r3;  /* 0C07D632 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r2 += 0x60u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C07D62Cu, 6); goto L_0C07D62C; } goto L_0C07D638; }  /* 0C07D634 bf/s */
L_0C07D638: BLKS(0x0C07D638u);
	r3 = 0xC22E2B4u; UPD(0x0C07D63Au, 2);  /* 0C07D638 mov.l @(disp,pc),Rn */
	r1 = 0x0u;  /* 0C07D63A mov #imm,Rn */
	r2 = 0xC3C8484u; UPD(0x0C07D63Eu, 2);  /* 0C07D63C mov.l @(disp,pc),Rn */
	r7 = 0x0u;  /* 0C07D63E mov #imm,Rn */
	r6 = 0x7u;  /* 0C07D640 mov #imm,Rn */
	UPD(0x0C07D642u, 2);
L_0C07D642: BLKS(0x0C07D642u);
	W8(r2, r7); UPD(0x0C07D644u, 1);  /* 0C07D642 mov.b Rm,@Rn */
	r1 += 0x1u;  /* 0C07D644 add #imm,Rn */
	W8(r3, r7); UPD(0x0C07D648u, 2);  /* 0C07D646 mov.b Rm,@Rn */
	r1 = (u32)(s32)(s16)r1;  /* 0C07D648 exts.w Rm,Rn */
	r2 += 0x1u;  /* 0C07D64A add #imm,Rn */
	T = (s32)r1 > (s32)r6;  /* 0C07D64C cmp/gt Rm,Rn */
	{ u32 c_ = !T; r3 += 0x1u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C07D642u, 6); goto L_0C07D642; } goto L_0C07D652; }  /* 0C07D64E bf/s */
L_0C07D652: BLKS(0x0C07D652u);
	r0 = 0xC297A39u; UPD(0x0C07D654u, 2);  /* 0C07D652 mov.l @(disp,pc),Rn */
	r2 = 0x0u;  /* 0C07D654 mov #imm,Rn */
	W8(r0, r2); UPD(0x0C07D658u, 2);  /* 0C07D656 mov.b Rm,@Rn */
	r3 = 0xC3C53E0u; UPD(0x0C07D65Au, 1);  /* 0C07D658 mov.l @(disp,pc),Rn */
	r0 = 0xC28F609u; UPD(0x0C07D65Cu, 1);  /* 0C07D65A mov.l @(disp,pc),Rn */
	W8(r3, r2); UPD(0x0C07D65Eu, 1);  /* 0C07D65C mov.b Rm,@Rn */
	W8(r0, r2); UPD(0x0C07D660u, 1);  /* 0C07D65E mov.b Rm,@Rn */
	r3 = 0x7u;  /* 0C07D660 mov #imm,Rn */
	r6 = 0xC22E2ACu; UPD(0x0C07D664u, 2);  /* 0C07D662 mov.l @(disp,pc),Rn */
	r0 = 0x0u;  /* 0C07D664 mov #imm,Rn */
	r7 = 0xC3C847Cu; UPD(0x0C07D668u, 2);  /* 0C07D666 mov.l @(disp,pc),Rn */
L_0C07D668: BLKS(0x0C07D668u);
	r5 = r0;  /* 0C07D668 mov Rm,Rn */
	r4 = r0;  /* 0C07D66A mov Rm,Rn */
	IF(0x0C07D66Cu); W8(r0 + r6, r2); UPD(0x0C07D66Eu, 3);  /* 0C07D66C mov.b Rm,@(r0,Rn) */
	r5 += r7;  /* 0C07D66E add Rm,Rn */
	r4 += 0x1u;  /* 0C07D670 add #imm,Rn */
	r0 = (u32)(s32)(s16)r4;  /* 0C07D672 exts.w Rm,Rn */
	T = (s32)r0 > (s32)r3;  /* 0C07D674 cmp/gt Rm,Rn */
	{ u32 c_ = !T; W8(r5, r2); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C07D668u, 7); goto L_0C07D668; } UPD(0x0C07D67Au, 1); goto L_0C07D67A; }  /* 0C07D676 bf/s */
L_0C07D67A: BLKS(0x0C07D67Au);
	r1 = 0xC297A38u; UPD(0x0C07D67Cu, 1);  /* 0C07D67A mov.l @(disp,pc),Rn */
	r7 = 0x0u;  /* 0C07D67C mov #imm,Rn */
	r6 = 0xC28F608u; UPD(0x0C07D680u, 2);  /* 0C07D67E mov.l @(disp,pc),Rn */
	W8(r1, r7); UPD(0x0C07D682u, 1);  /* 0C07D680 mov.b Rm,@Rn */
	W8(r6, r7); UPD(0x0C07D684u, 1);  /* 0C07D682 mov.b Rm,@Rn */
	r15 = r14;  /* 0C07D684 mov Rm,Rn */
	IF(0x0C07D686u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C07D686 rts */
}

/* FUN_0c07d6c0 */
void blk_f_0C07D6C0(sh3_t *c)
{
	LOCALS;
L_0C07D6C0: BLKS(0x0C07D6C0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07D6C2u, 1);  /* 0C07D6C0 mov.l Rm,@-Rn */
	r0 = 0x0u;  /* 0C07D6C2 mov #imm,Rn */
	r6 = 0xC22E2ACu; UPD(0x0C07D6C6u, 2);  /* 0C07D6C4 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C07D6C6 mov Rm,Rn */
	r7 = 0xC3C847Cu; UPD(0x0C07D6CAu, 2);  /* 0C07D6C8 mov.l @(disp,pc),Rn */
	r2 = 0x0u;  /* 0C07D6CA mov #imm,Rn */
	r3 = 0x7u;  /* 0C07D6CC mov #imm,Rn */
	IF(0x0C07D6CEu); ;  /* 0C07D6CE nop */
	UPD(0x0C07D6D0u, 3);
L_0C07D6D0: BLKS(0x0C07D6D0u);
	r4 = r0;  /* 0C07D6D0 mov Rm,Rn */
	r4 += r7;  /* 0C07D6D2 add Rm,Rn */
	W8(r4, r2); UPD(0x0C07D6D6u, 3);  /* 0C07D6D4 mov.b Rm,@Rn */
	IF(0x0C07D6D6u); W8(r0 + r6, r2); UPD(0x0C07D6D8u, 1);  /* 0C07D6D6 mov.b Rm,@(r0,Rn) */
	r4 = r0;  /* 0C07D6D8 mov Rm,Rn */
	r4 += 0x1u;  /* 0C07D6DA add #imm,Rn */
	r0 = (u32)(s32)(s16)r4;  /* 0C07D6DC exts.w Rm,Rn */
	T = (s32)r0 > (s32)r3;  /* 0C07D6DE cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C07D6D0u, 7); goto L_0C07D6D0; }  /* 0C07D6E0 bf */
L_0C07D6E2: BLKS(0x0C07D6E2u);
	r3 = 0x0u;  /* 0C07D6E2 mov #imm,Rn */
	r1 = 0xC297A38u; UPD(0x0C07D6E6u, 2);  /* 0C07D6E4 mov.l @(disp,pc),Rn */
	r0 = 0xC28F608u; UPD(0x0C07D6E8u, 1);  /* 0C07D6E6 mov.l @(disp,pc),Rn */
	W8(r1, r3); UPD(0x0C07D6EAu, 1);  /* 0C07D6E8 mov.b Rm,@Rn */
	W8(r0, r3); UPD(0x0C07D6ECu, 1);  /* 0C07D6EA mov.b Rm,@Rn */
	r15 = r14;  /* 0C07D6EC mov Rm,Rn */
	IF(0x0C07D6EEu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C07D6EE rts */
}

void blk_f_0C07D760(sh3_t *c)
{
	LOCALS;
	goto L_0C07D760;
L_0C07C160: BLKS(0x0C07C160u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07C162u, 1);  /* 0C07C160 mov.l Rm,@-Rn */
	r0 = 0x60u;  /* 0C07C162 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07C166u, 2);  /* 0C07C164 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07C168u, 1);  /* 0C07C166 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07C16Au, 1);  /* 0C07C168 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07C16Cu, 1);  /* 0C07C16A mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C07C16Eu, 1);  /* 0C07C16C mov.l Rm,@-Rn */
	r13 = (u32)(s32)(s16)r4;  /* 0C07C16E exts.w Rm,Rn */
	IF(0x0C07C170u); MACL = r13 * r0;  /* 0C07C170 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07C174u, 4);  /* 0C07C172 mov.l Rm,@-Rn */
	r0 = 0xC3BC81Au; UPD(0x0C07C176u, 1);  /* 0C07C174 mov.l @(disp,pc),Rn */
	IF(0x0C07C176u); r3 = MACL;  /* 0C07C176 sts macl,Rn */
	IF(0x0C07C178u); r15 -= 4; W32(r15, PR); UPD(0x0C07C17Au, 2);  /* 0C07C178 sts.l pr,@-Rn */
	IF(0x0C07C17Au); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C07C17Cu, 1);  /* 0C07C17A mov.b @(r0,Rm),Rn */
	r8 = 0xC29D1D8u; UPD(0x0C07C17Eu, 1);  /* 0C07C17C mov.l @(disp,pc),Rn */
	T = (r2 & r2) == 0;  /* 0C07C17E tst Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07C1B2u, 4); goto L_0C07C1B2; } goto L_0C07C184; }  /* 0C07C180 bf/s */
L_0C07C184: BLKS(0x0C07C184u);
	r10 = r8;  /* 0C07C184 mov Rm,Rn */
	r9 = 0x0u;  /* 0C07C186 mov #imm,Rn */
	r10 += 0x18u;  /* 0C07C188 add #imm,Rn */
	IF(0x0C07C18Au); ;  /* 0C07C18A nop */
	UPD(0x0C07C18Cu, 5);
L_0C07C18C: BLKS(0x0C07C18Cu);
	r1 = R32(r8); UPD(0x0C07C18Eu, 1);  /* 0C07C18C mov.l @Rm,Rn */
	r4 = 0x10000000u; UPD(0x0C07C190u, 1);  /* 0C07C18E mov.l @(disp,pc),Rn */
	T = (r1 & r4) == 0;  /* 0C07C190 tst Rm,Rn */
	if (T) { UPD(0x0C07C1A4u, 4); goto L_0C07C1A4; }  /* 0C07C192 bt */
L_0C07C194: BLKS(0x0C07C194u);
	r0 = 0x270u; UPD(0x0C07C196u, 1);  /* 0C07C194 mov.w @(disp,pc),Rn */
	IF(0x0C07C196u); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07C198u, 1);  /* 0C07C196 mov.b @(r0,Rm),Rn */
	r11 = r2 & 0xFF;  /* 0C07C198 extu.b Rm,Rn */
	T = (r11 & r11) == 0;  /* 0C07C19A tst Rm,Rn */
	{ u32 c_ = !T; r12 = 0x60u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07C1A4u, 5); goto L_0C07C1A4; } goto L_0C07C1A0; }  /* 0C07C19C bf/s */
L_0C07C1A0: BLKS(0x0C07C1A0u);
	{ IF(0x0C07C1A2u); MACL = r13 * r12; /* slot mul.l Rm,Rn */ UPD(0x0C07C410u, 5); goto L_0C07C410; }  /* 0C07C1A0 bra */
L_0C07C1A4: BLKS(0x0C07C1A4u);
	r5 = 0x2A0u; UPD(0x0C07C1A6u, 1);  /* 0C07C1A4 mov.w @(disp,pc),Rn */
	r9 += 0x1u;  /* 0C07C1A6 add #imm,Rn */
	r11 = 0x1u;  /* 0C07C1A8 mov #imm,Rn */
	r10 += r5;  /* 0C07C1AA add Rm,Rn */
	T = (s32)r9 > (s32)r11;  /* 0C07C1AC cmp/gt Rm,Rn */
	{ u32 c_ = !T; r8 += r5; /* slot add Rm,Rn */ if (c_) { UPD(0x0C07C18Cu, 7); goto L_0C07C18C; } UPD(0x0C07C1B2u, 1); goto L_0C07C1B2; }  /* 0C07C1AE bf/s */
L_0C07C1B2: BLKS(0x0C07C1B2u);
	r3 = 0x60u;  /* 0C07C1B2 mov #imm,Rn */
	UPD(0x0C07C1B4u, 1);
L_0C07C1B4: BLKS(0x0C07C1B4u);
	IF(0x0C07C1B4u); MACL = r13 * r3;  /* 0C07C1B4 mul.l Rm,Rn */
	r7 = 0xC3BC7CCu; UPD(0x0C07C1B8u, 3);  /* 0C07C1B6 mov.l @(disp,pc),Rn */
	IF(0x0C07C1B8u); r11 = MACL;  /* 0C07C1B8 sts macl,Rn */
	r11 += r7;  /* 0C07C1BA add Rm,Rn */
	r3 = r11;  /* 0C07C1BC mov Rm,Rn */
	r3 += 0x4Eu;  /* 0C07C1BE add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r3); UPD(0x0C07C1C2u, 5);  /* 0C07C1C0 mov.b @Rm,Rn */
	r2 = r6 & 0xFF;  /* 0C07C1C2 extu.b Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C07C1C4 tst Rm,Rn */
	if (T) { UPD(0x0C07C1EAu, 5); goto L_0C07C1EA; }  /* 0C07C1C6 bt */
L_0C07C1C8: BLKS(0x0C07C1C8u);
	r4 = 0x2A0u; UPD(0x0C07C1CAu, 1);  /* 0C07C1C8 mov.w @(disp,pc),Rn */
	IF(0x0C07C1CAu); MACL = r2 * r4;  /* 0C07C1CA mul.l Rm,Rn */
	r12 = 0xC29D1D8u; UPD(0x0C07C1CEu, 3);  /* 0C07C1CC mov.l @(disp,pc),Rn */
	IF(0x0C07C1CEu); r8 = MACL;  /* 0C07C1CE sts macl,Rn */
	r12 -= r4;  /* 0C07C1D0 sub Rm,Rn */
	r8 += r12;  /* 0C07C1D2 add Rm,Rn */
	r2 = R32(r8); UPD(0x0C07C1D6u, 4);  /* 0C07C1D4 mov.l @Rm,Rn */
	r0 = 0x10000000u; UPD(0x0C07C1D8u, 1);  /* 0C07C1D6 mov.l @(disp,pc),Rn */
	r2 &= r0;  /* 0C07C1D8 and Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C07C1DA tst Rm,Rn */
	if (T) { UPD(0x0C07C1E4u, 5); goto L_0C07C1E4; }  /* 0C07C1DC bt */
L_0C07C1DE: BLKS(0x0C07C1DEu);
	r6 = R32(r8 + 0x10u); UPD(0x0C07C1E0u, 1);  /* 0C07C1DE mov.l @(disp,Rm),Rn */
	{ r7 = R32(r8 + 0x14u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C07C390u, 3); goto L_0C07C390; }  /* 0C07C1E0 bra */
L_0C07C1E4: BLKS(0x0C07C1E4u);
	W32(r11 + 0x34u, r2); UPD(0x0C07C1E6u, 1);  /* 0C07C1E4 mov.l Rm,@(disp,Rn) */
	W32(r11 + 0x30u, r2); UPD(0x0C07C1E8u, 1);  /* 0C07C1E6 mov.l Rm,@(disp,Rn) */
	W8(r3, r2); UPD(0x0C07C1EAu, 1);  /* 0C07C1E8 mov.b Rm,@Rn */
L_0C07C1EA: BLKS(0x0C07C1EAu);
	r3 = 0x60u;  /* 0C07C1EA mov #imm,Rn */
	IF(0x0C07C1ECu); MACL = r13 * r3;  /* 0C07C1EC mul.l Rm,Rn */
	r7 = 0xC3BC7CCu; UPD(0x0C07C1F0u, 4);  /* 0C07C1EE mov.l @(disp,pc),Rn */
	IF(0x0C07C1F0u); r8 = MACL;  /* 0C07C1F0 sts macl,Rn */
	r8 += r7;  /* 0C07C1F2 add Rm,Rn */
	r8 += 0x4Eu;  /* 0C07C1F4 add #imm,Rn */
	r11 = (u32)(s32)(s8)R8(r8); UPD(0x0C07C1F8u, 4);  /* 0C07C1F6 mov.b @Rm,Rn */
	T = (r11 & r11) == 0;  /* 0C07C1F8 tst Rm,Rn */
	{ u32 c_ = !T; r8 += 0xFFFFFFB2u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C07C214u, 4); goto L_0C07C214; } goto L_0C07C1FE; }  /* 0C07C1FA bf/s */
L_0C07C1FE: BLKS(0x0C07C1FEu);
	r0 = R32(r8); UPD(0x0C07C200u, 2);  /* 0C07C1FE mov.l @Rm,Rn */
	r4 = 0x4010u; UPD(0x0C07C202u, 1);  /* 0C07C200 mov.w @(disp,pc),Rn */
	r0 &= r4;  /* 0C07C202 and Rm,Rn */
	T = r0 == 0x10u;  /* 0C07C204 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C07C214u, 5); goto L_0C07C214; }  /* 0C07C206 bt */
L_0C07C208: BLKS(0x0C07C208u);
	r12 = 0x10u;  /* 0C07C208 mov #imm,Rn */
	T = r0 > r12;  /* 0C07C20A cmp/hi Rm,Rn */
	{ u32 c_ = T; T = (r0 & r0) == 0; /* slot tst Rm,Rn */ if (c_) { UPD(0x0C07C2C0u, 5); goto L_0C07C2C0; } goto L_0C07C210; }  /* 0C07C20C bt/s */
L_0C07C210: BLKS(0x0C07C210u);
	if (T) { UPD(0x0C07C230u, 4); goto L_0C07C230; }  /* 0C07C210 bt */
L_0C07C212: BLKS(0x0C07C212u);
	IF(0x0C07C212u); ;  /* 0C07C212 nop */
	UPD(0x0C07C214u, 1);
L_0C07C214: BLKS(0x0C07C214u);
	r15 = r14;  /* 0C07C214 mov Rm,Rn */
	IF(0x0C07C216u); PR = R32(r15); r15 += 4; UPD(0x0C07C218u, 2);  /* 0C07C216 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07C21Au, 1);  /* 0C07C218 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07C21Cu, 1);  /* 0C07C21A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07C21Eu, 1);  /* 0C07C21C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07C220u, 1);  /* 0C07C21E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07C222u, 1);  /* 0C07C220 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07C224u, 1);  /* 0C07C222 mov.l @Rm+,Rn */
	IF(0x0C07C224u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07C224 rts */
L_0C07C230: BLKS(0x0C07C230u);
	r2 = R32(r8 + 0x30u); UPD(0x0C07C232u, 1);  /* 0C07C230 mov.l @(disp,Rm),Rn */
	r8 += 0x40u;  /* 0C07C232 add #imm,Rn */
	r0 = R32(r8); UPD(0x0C07C236u, 2);  /* 0C07C234 mov.l @Rm,Rn */
	T = (s32)r2 > (s32)r0;  /* 0C07C236 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r8 += 0xFFFFFFC0u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C07C244u, 4); goto L_0C07C244; } goto L_0C07C23C; }  /* 0C07C238 bf/s */
L_0C07C23C: BLKS(0x0C07C23Cu);
	r10 = 0xFFFFF000u; UPD(0x0C07C23Eu, 2);  /* 0C07C23C mov.w @(disp,pc),Rn */
	r10 += r2;  /* 0C07C23E add Rm,Rn */
	W32(r8 + 0x30u, r10); UPD(0x0C07C242u, 2);  /* 0C07C240 mov.l Rm,@(disp,Rn) */
	r2 = r10;  /* 0C07C242 mov Rm,Rn */
	UPD(0x0C07C244u, 1);
L_0C07C244: BLKS(0x0C07C244u);
	r6 = R32(r8 + 0x28u); UPD(0x0C07C246u, 1);  /* 0C07C244 mov.l @(disp,Rm),Rn */
	r3 = R32(r8 + 0x2Cu); UPD(0x0C07C248u, 1);  /* 0C07C246 mov.l @(disp,Rm),Rn */
	r6 += r2;  /* 0C07C248 add Rm,Rn */
	r7 = R32(r8 + 0x34u); UPD(0x0C07C24Cu, 2);  /* 0C07C24A mov.l @(disp,Rm),Rn */
	W32(r8 + 0x28u, r6); UPD(0x0C07C24Eu, 1);  /* 0C07C24C mov.l Rm,@(disp,Rn) */
	r3 += r7;  /* 0C07C24E add Rm,Rn */
	r1 = 0xC0000u; UPD(0x0C07C252u, 2);  /* 0C07C250 mov.l @(disp,pc),Rn */
	r5 = 0x30C0000u; UPD(0x0C07C254u, 1);  /* 0C07C252 mov.l @(disp,pc),Rn */
	r6 += r1;  /* 0C07C254 add Rm,Rn */
	T = r6 > r5;  /* 0C07C256 cmp/hi Rm,Rn */
	{ u32 c_ = T; W32(r8 + 0x2Cu, r3); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C07C2A0u, 5); goto L_0C07C2A0; } UPD(0x0C07C25Cu, 1); goto L_0C07C25C; }  /* 0C07C258 bt/s */
L_0C07C25C: BLKS(0x0C07C25Cu);
	r2 = 0xFE8C0000u; UPD(0x0C07C25Eu, 1);  /* 0C07C25C mov.l @(disp,pc),Rn */
	r13 = 0x1180000u; UPD(0x0C07C260u, 1);  /* 0C07C25E mov.l @(disp,pc),Rn */
	r2 += r3;  /* 0C07C260 add Rm,Rn */
	T = r2 > r13;  /* 0C07C262 cmp/hi Rm,Rn */
	{ u32 c_ = !T; r6 = r8; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07C272u, 5); goto L_0C07C272; } goto L_0C07C268; }  /* 0C07C264 bf/s */
L_0C07C268: BLKS(0x0C07C268u);
	r11 = 0u - r7;  /* 0C07C268 neg Rm,Rn */
	r3 += r11;  /* 0C07C26A add Rm,Rn */
	W32(r8 + 0x34u, r11); UPD(0x0C07C26Eu, 4);  /* 0C07C26C mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x2Cu, r3); UPD(0x0C07C270u, 1);  /* 0C07C26E mov.l Rm,@(disp,Rn) */
	r6 = r8;  /* 0C07C270 mov Rm,Rn */
	UPD(0x0C07C272u, 1);
L_0C07C272: BLKS(0x0C07C272u);
	r6 += 0x44u;  /* 0C07C272 add #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r6); UPD(0x0C07C276u, 2);  /* 0C07C274 mov.b @Rm,Rn */
	r9 = 0x13u;  /* 0C07C276 mov #imm,Rn */
	r4 = 0xC2B039Cu; UPD(0x0C07C27Au, 2);  /* 0C07C278 mov.l @(disp,pc),Rn */
	r12 = r3 & 0xFF;  /* 0C07C27A extu.b Rm,Rn */
	r0 = R32(r4); UPD(0x0C07C27Eu, 2);  /* 0C07C27C mov.l @Rm,Rn */
	T = r9 >= r12;  /* 0C07C27E cmp/hs Rm,Rn */
	IF(0x0C07C280u); r8 = T;  /* 0C07C280 movt Rn */
	r0 &= 0x3u;  /* 0C07C282 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C07C284 tst Rm,Rn */
	IF(0x0C07C286u); r7 = T;  /* 0C07C286 movt Rn */
	r8 &= r7;  /* 0C07C288 and Rm,Rn */
	T = (r8 & r8) == 0;  /* 0C07C28A tst Rm,Rn */
	if (T) { UPD(0x0C07C214u, 10); goto L_0C07C214; }  /* 0C07C28C bt */
L_0C07C28E: BLKS(0x0C07C28Eu);
	r0 = r3;  /* 0C07C28E mov Rm,Rn */
	r0 += 0x1u;  /* 0C07C290 add #imm,Rn */
	{ W8(r6, r0); /* slot mov.b Rm,@Rn */ UPD(0x0C07C214u, 5); goto L_0C07C214; }  /* 0C07C292 bra */
L_0C07C2A0: BLKS(0x0C07C2A0u);
	r0 = 0xC07C910u; UPD(0x0C07C2A2u, 1);  /* 0C07C2A0 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C07C2A2 mov Rm,Rn */
	r15 = r14;  /* 0C07C2A4 mov Rm,Rn */
	IF(0x0C07C2A6u); PR = R32(r15); r15 += 4; UPD(0x0C07C2A8u, 3);  /* 0C07C2A6 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07C2AAu, 1);  /* 0C07C2A8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07C2ACu, 1);  /* 0C07C2AA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07C2AEu, 1);  /* 0C07C2AC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07C2B0u, 1);  /* 0C07C2AE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07C2B2u, 1);  /* 0C07C2B0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07C2B4u, 1);  /* 0C07C2B2 mov.l @Rm+,Rn */
	IF(0x0C07C2B4u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C07C910u: TAIL(blk_f_0C07C910); default: JUMPD(tv_); } }  /* 0C07C2B4 jmp @Rn */
L_0C07C2C0: BLKS(0x0C07C2C0u);
	r9 = 0x4000u; UPD(0x0C07C2C2u, 1);  /* 0C07C2C0 mov.w @(disp,pc),Rn */
	T = r0 == r9;  /* 0C07C2C2 cmp/eq Rm,Rn */
	if (!T) { UPD(0x0C07C214u, 4); goto L_0C07C214; }  /* 0C07C2C4 bf */
L_0C07C2C6: BLKS(0x0C07C2C6u);
	r10 = 0xC07D3B0u; UPD(0x0C07C2C8u, 1);  /* 0C07C2C6 mov.l @(disp,pc),Rn */
	IF(0x0C07C2C8u); { u32 t_ = r10; PR = 0x0C07C2CCu; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07D3B0, 0x0C07D3B0u, 0x0C07C2CCu); }  /* 0C07C2C8 jsr @Rn */
L_0C07C2CC: BLKS(0x0C07C2CCu);
	IF(0x0C07C2CCu); T = (s32)r0 >= 0;  /* 0C07C2CC cmp/pz Rn */
	if (!T) { UPD(0x0C07C300u, 4); goto L_0C07C300; }  /* 0C07C2CE bf */
L_0C07C2D0: BLKS(0x0C07C2D0u);
	r8 += 0x4Au;  /* 0C07C2D0 add #imm,Rn */
	r7 = (u32)(s32)(s16)R16(r8); UPD(0x0C07C2D4u, 2);  /* 0C07C2D2 mov.w @Rm,Rn */
	r11 = 0xB4u; UPD(0x0C07C2D6u, 1);  /* 0C07C2D4 mov.w @(disp,pc),Rn */
	r8 += 0xFFFFFFB6u;  /* 0C07C2D6 add #imm,Rn */
	IF(0x0C07C2D8u); MACL = r7 * r11;  /* 0C07C2D8 mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C07C2DCu, 4);  /* 0C07C2DA mov.l @(disp,pc),Rn */
	IF(0x0C07C2DCu); r10 = MACL;  /* 0C07C2DC sts macl,Rn */
	r10 += r2;  /* 0C07C2DE add Rm,Rn */
	r5 = R32(r10 + 0x24u); UPD(0x0C07C2E2u, 3);  /* 0C07C2E0 mov.l @(disp,Rm),Rn */
	r6 = R32(r8 + 0x30u); UPD(0x0C07C2E4u, 1);  /* 0C07C2E2 mov.l @(disp,Rm),Rn */
	r5 += r6;  /* 0C07C2E4 add Rm,Rn */
	W32(r8 + 0x28u, r5); UPD(0x0C07C2E8u, 2);  /* 0C07C2E6 mov.l Rm,@(disp,Rn) */
	r1 = R32(r8 + 0x34u); UPD(0x0C07C2EAu, 1);  /* 0C07C2E8 mov.l @(disp,Rm),Rn */
	r9 = R32(r10 + 0x28u); UPD(0x0C07C2ECu, 1);  /* 0C07C2EA mov.l @(disp,Rm),Rn */
	r9 += r1;  /* 0C07C2EC add Rm,Rn */
	{ W32(r8 + 0x2Cu, r9); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C07C214u, 4); goto L_0C07C214; }  /* 0C07C2EE bra */
L_0C07C300: BLKS(0x0C07C300u);
	r8 += 0x44u;  /* 0C07C300 add #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r8); UPD(0x0C07C304u, 2);  /* 0C07C302 mov.b @Rm,Rn */
	r12 = 0xC0BC0B0u; UPD(0x0C07C306u, 1);  /* 0C07C304 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFBCu;  /* 0C07C306 add #imm,Rn */
	r6 = r3 & 0xFF;  /* 0C07C308 extu.b Rm,Rn */
	r5 = R32(r8 + 0x2Cu); UPD(0x0C07C30Cu, 3);  /* 0C07C30A mov.l @(disp,Rm),Rn */
	IF(0x0C07C30Cu); { u32 t_ = r12; PR = 0x0C07C310u; r4 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BC0B0, 0x0C0BC0B0u, 0x0C07C310u); }  /* 0C07C30C jsr @Rn */
L_0C07C310: BLKS(0x0C07C310u);
	T = (r0 & r0) == 0;  /* 0C07C310 tst Rm,Rn */
	r6 = R32(r8 + 0x28u); UPD(0x0C07C314u, 2);  /* 0C07C312 mov.l @(disp,Rm),Rn */
	IF(0x0C07C314u); r3 = T;  /* 0C07C314 movt Rn */
	r7 = 0x1500000u; UPD(0x0C07C318u, 2);  /* 0C07C316 mov.l @(disp,pc),Rn */
	r2 = 0xFFF00000u; UPD(0x0C07C31Au, 1);  /* 0C07C318 mov.l @(disp,pc),Rn */
	T = (s32)r6 > (s32)r7;  /* 0C07C31A cmp/gt Rm,Rn */
	IF(0x0C07C31Cu); r11 = T;  /* 0C07C31C movt Rn */
	T = (s32)r2 > (s32)r6;  /* 0C07C31E cmp/gt Rm,Rn */
	IF(0x0C07C320u); r5 = T;  /* 0C07C320 movt Rn */
	r3 |= r11;  /* 0C07C322 or Rm,Rn */
	r3 |= r5;  /* 0C07C324 or Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C07C326 tst Rm,Rn */
	if (!T) { UPD(0x0C07C2A0u, 10); goto L_0C07C2A0; }  /* 0C07C328 bf */
L_0C07C32A: BLKS(0x0C07C32Au);
	r0 = R32(r8); UPD(0x0C07C32Cu, 1);  /* 0C07C32A mov.l @Rm,Rn */
	r4 = 0xFFFFBFFFu; UPD(0x0C07C32Eu, 1);  /* 0C07C32C mov.w @(disp,pc),Rn */
	r13 = 0x20000u; UPD(0x0C07C330u, 1);  /* 0C07C32E mov.l @(disp,pc),Rn */
	r0 &= r4;  /* 0C07C330 and Rm,Rn */
	r0 |= 0x4u;  /* 0C07C332 or #imm,r0 */
	W32(r8, r0); UPD(0x0C07C336u, 3);  /* 0C07C334 mov.l Rm,@Rn */
	W32(r8 + 0x30u, r13); UPD(0x0C07C338u, 1);  /* 0C07C336 mov.l Rm,@(disp,Rn) */
	{ W32(r8 + 0x34u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C07C214u, 3); goto L_0C07C214; }  /* 0C07C338 bra */
L_0C07C390: BLKS(0x0C07C390u);
	r8 = 0xC068E60u; UPD(0x0C07C392u, 1);  /* 0C07C390 mov.l @(disp,pc),Rn */
	r4 = R32(r11 + 0x28u); UPD(0x0C07C394u, 1);  /* 0C07C392 mov.l @(disp,Rm),Rn */
	IF(0x0C07C394u); { u32 t_ = r8; PR = 0x0C07C398u; r5 = R32(r11 + 0x2Cu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C068E60, 0x0C068E60u, 0x0C07C398u); }  /* 0C07C394 jsr @Rn */
L_0C07C398: BLKS(0x0C07C398u);
	r10 = 0xC069B20u; UPD(0x0C07C39Au, 1);  /* 0C07C398 mov.l @(disp,pc),Rn */
	r9 = r0;  /* 0C07C39A mov Rm,Rn */
	r12 = 0x50000u; UPD(0x0C07C39Eu, 2);  /* 0C07C39C mov.l @(disp,pc),Rn */
	r4 = r0;  /* 0C07C39E mov Rm,Rn */
	r8 = 0xC069AF0u; UPD(0x0C07C3A2u, 2);  /* 0C07C3A0 mov.l @(disp,pc),Rn */
	IF(0x0C07C3A2u); { u32 t_ = r10; PR = 0x0C07C3A6u; r5 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C07C3A6u); }  /* 0C07C3A2 jsr @Rn */
L_0C07C3A6: BLKS(0x0C07C3A6u);
	r10 = r0;  /* 0C07C3A6 mov Rm,Rn */
	r4 = r9;  /* 0C07C3A8 mov Rm,Rn */
	IF(0x0C07C3AAu); { u32 t_ = r8; PR = 0x0C07C3AEu; r5 = r12; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C07C3AEu); }  /* 0C07C3AA jsr @Rn */
L_0C07C3AE: BLKS(0x0C07C3AEu);
	r1 = R32(r11 + 0x30u); UPD(0x0C07C3B0u, 1);  /* 0C07C3AE mov.l @(disp,Rm),Rn */
	r10 -= r1;  /* 0C07C3B0 sub Rm,Rn */
	IF(0x0C07C3B2u); T = (s32)r10 >= 0;  /* 0C07C3B2 cmp/pz Rn */
	if (!T) { UPD(0x0C07C400u, 5); goto L_0C07C400; }  /* 0C07C3B4 bf */
L_0C07C3B6: BLKS(0x0C07C3B6u);
	r2 = r10;  /* 0C07C3B6 mov Rm,Rn */
	IF(0x0C07C3B8u); T = r2 & 1; r2 = (u32)((s32)r2 >> 1);  /* 0C07C3B8 shar Rn */
	IF(0x0C07C3BAu); T = r2 & 1; r2 = (u32)((s32)r2 >> 1);  /* 0C07C3BA shar Rn */
	r5 = 0x1u;  /* 0C07C3BC mov #imm,Rn */
	r2 |= r5;  /* 0C07C3BE or Rm,Rn */
	r2 += r1;  /* 0C07C3C0 add Rm,Rn */
	r1 = R32(r11 + 0x34u); UPD(0x0C07C3C4u, 7);  /* 0C07C3C2 mov.l @(disp,Rm),Rn */
	r0 -= r1;  /* 0C07C3C4 sub Rm,Rn */
	IF(0x0C07C3C6u); T = (s32)r0 >= 0;  /* 0C07C3C6 cmp/pz Rn */
	{ u32 c_ = !T; W32(r11 + 0x30u, r2); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C07C3F0u, 5); goto L_0C07C3F0; } UPD(0x0C07C3CCu, 1); goto L_0C07C3CC; }  /* 0C07C3C8 bf/s */
L_0C07C3CC: BLKS(0x0C07C3CCu);
	r6 = R32(r11 + 0x28u); UPD(0x0C07C3CEu, 1);  /* 0C07C3CC mov.l @(disp,Rm),Rn */
	IF(0x0C07C3CEu); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C07C3CE shar Rn */
	r6 += r2;  /* 0C07C3D0 add Rm,Rn */
	IF(0x0C07C3D2u); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C07C3D2 shar Rn */
	r2 = R32(r11 + 0x2Cu); UPD(0x0C07C3D6u, 4);  /* 0C07C3D4 mov.l @(disp,Rm),Rn */
	r0 |= 0x1u;  /* 0C07C3D6 or #imm,r0 */
	r0 += r1;  /* 0C07C3D8 add Rm,Rn */
	r2 += r0;  /* 0C07C3DA add Rm,Rn */
	W32(r11 + 0x34u, r0); UPD(0x0C07C3DEu, 4);  /* 0C07C3DC mov.l Rm,@(disp,Rn) */
	W32(r11 + 0x28u, r6); UPD(0x0C07C3E0u, 1);  /* 0C07C3DE mov.l Rm,@(disp,Rn) */
	{ W32(r11 + 0x2Cu, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C07C1EAu, 3); goto L_0C07C1EA; }  /* 0C07C3E0 bra */
L_0C07C3F0: BLKS(0x0C07C3F0u);
	{ r0 += 0x3u; /* slot add #imm,Rn */ UPD(0x0C07C3CCu, 3); goto L_0C07C3CC; }  /* 0C07C3F0 bra */
L_0C07C400: BLKS(0x0C07C400u);
	{ r10 += 0x3u; /* slot add #imm,Rn */ UPD(0x0C07C3B6u, 3); goto L_0C07C3B6; }  /* 0C07C400 bra */
L_0C07C410: BLKS(0x0C07C410u);
	r0 = 0xC3BC7CCu; UPD(0x0C07C412u, 1);  /* 0C07C410 mov.l @(disp,pc),Rn */
	r2 = 0xC06A380u; UPD(0x0C07C414u, 1);  /* 0C07C412 mov.l @(disp,pc),Rn */
	IF(0x0C07C414u); r12 = MACL;  /* 0C07C414 sts macl,Rn */
	r12 += r0;  /* 0C07C416 add Rm,Rn */
	r7 = R32(r8 + 0x14u); UPD(0x0C07C41Au, 3);  /* 0C07C418 mov.l @(disp,Rm),Rn */
	r6 = R32(r8 + 0x10u); UPD(0x0C07C41Cu, 1);  /* 0C07C41A mov.l @(disp,Rm),Rn */
	r5 = R32(r12 + 0x2Cu); UPD(0x0C07C41Eu, 1);  /* 0C07C41C mov.l @(disp,Rm),Rn */
	IF(0x0C07C41Eu); { u32 t_ = r2; PR = 0x0C07C422u; r4 = R32(r12 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C06A380, 0x0C06A380u, 0x0C07C422u); }  /* 0C07C41E jsr @Rn */
L_0C07C422: BLKS(0x0C07C422u);
	r7 = R32(r10); UPD(0x0C07C424u, 1);  /* 0C07C422 mov.l @Rm,Rn */
	r3 = 0xFFFFFFF4u;  /* 0C07C424 mov #imm,Rn */
	IF(0x0C07C426u); ARG0(0x473Cu); { s32 s_ = (s32)r3; if (s_ >= 0) r7 <<= (s_ & 31); else if ((s_ & 31) == 0) r7 = (u32)((s32)r7 >> 31); else r7 = (u32)((s32)r7 >> ((~s_ & 31) + 1)); }  /* 0C07C426 shad Rm,Rn */
	r5 = 0u - r7;  /* 0C07C428 neg Rm,Rn */
	r5 += 0x60u;  /* 0C07C42A add #imm,Rn */
	r6 = 0x11u;  /* 0C07C42C mov #imm,Rn */
	IF(0x0C07C42Eu); ARG0(0x456Du); { s32 s_ = (s32)r6; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = 0; else r5 >>= ((~s_ & 31) + 1); }  /* 0C07C42E shld Rm,Rn */
	T = (s32)r0 >= (s32)r5;  /* 0C07C430 cmp/ge Rm,Rn */
	if (T) { UPD(0x0C07C43Au, 10); goto L_0C07C43A; }  /* 0C07C432 bt */
L_0C07C434: BLKS(0x0C07C434u);
	r4 = 0xFFFFFFFu; UPD(0x0C07C436u, 1);  /* 0C07C434 mov.l @(disp,pc),Rn */
	T = (s32)r0 >= (s32)r4;  /* 0C07C436 cmp/ge Rm,Rn */
	if (!T) { UPD(0x0C07C43Eu, 4); goto L_0C07C43E; }  /* 0C07C438 bf */
L_0C07C43A: BLKS(0x0C07C43Au);
	{ IF(0x0C07C43Cu); ; /* slot nop */ UPD(0x0C07C1A4u, 3); goto L_0C07C1A4; }  /* 0C07C43A bra */
L_0C07C43E: BLKS(0x0C07C43Eu);
	r10 = 0x1u;  /* 0C07C43E mov #imm,Rn */
	IF(0x0C07C440u); ARG0(0x4A9Du); { s32 s_ = (s32)r9; if (s_ >= 0) r10 <<= (s_ & 31); else if ((s_ & 31) == 0) r10 = 0; else r10 >>= ((~s_ & 31) + 1); }  /* 0C07C440 shld Rm,Rn */
	r12 += 0x4Eu;  /* 0C07C442 add #imm,Rn */
	W8(r12, r10); UPD(0x0C07C446u, 4);  /* 0C07C444 mov.b Rm,@Rn */
	r12 += 0xFFFFFFB2u;  /* 0C07C446 add #imm,Rn */
	r2 = R32(r12); UPD(0x0C07C44Au, 2);  /* 0C07C448 mov.l @Rm,Rn */
	r8 = 0x4000u; UPD(0x0C07C44Cu, 1);  /* 0C07C44A mov.w @(disp,pc),Rn */
	T = (r2 & r8) == 0;  /* 0C07C44C tst Rm,Rn */
	if (T) { UPD(0x0C07C45Au, 4); goto L_0C07C45A; }  /* 0C07C44E bt */
L_0C07C450: BLKS(0x0C07C450u);
	r9 = 0xFFFFBFFFu; UPD(0x0C07C452u, 1);  /* 0C07C450 mov.w @(disp,pc),Rn */
	r2 &= r9;  /* 0C07C452 and Rm,Rn */
	W32(r12, r2); UPD(0x0C07C456u, 2);  /* 0C07C454 mov.l Rm,@Rn */
	W32(r12 + 0x34u, r11); UPD(0x0C07C458u, 1);  /* 0C07C456 mov.l Rm,@(disp,Rn) */
	W32(r12 + 0x30u, r11); UPD(0x0C07C45Au, 1);  /* 0C07C458 mov.l Rm,@(disp,Rn) */
L_0C07C45A: BLKS(0x0C07C45Au);
	{ r3 = 0x60u; /* slot mov #imm,Rn */ UPD(0x0C07C1B4u, 3); goto L_0C07C1B4; }  /* 0C07C45A bra */
L_0C07D760: BLKS(0x0C07D760u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07D762u, 1);  /* 0C07D760 mov.l Rm,@-Rn */
	r2 = 0x60u;  /* 0C07D762 mov #imm,Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C07D764 exts.w Rm,Rn */
	IF(0x0C07D766u); MACL = r8 * r2;  /* 0C07D766 mul.l Rm,Rn */
	r0 = 0xC3BC7CCu; UPD(0x0C07D76Au, 5);  /* 0C07D768 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07D76Cu, 1);  /* 0C07D76A mov.l Rm,@-Rn */
	IF(0x0C07D76Cu); r2 = MACL;  /* 0C07D76C sts macl,Rn */
	r2 += r0;  /* 0C07D76E add Rm,Rn */
	IF(0x0C07D770u); r15 -= 4; W32(r15, PR); UPD(0x0C07D772u, 3);  /* 0C07D770 sts.l pr,@-Rn */
	r3 = r2;  /* 0C07D772 mov Rm,Rn */
	r3 += 0x4Fu;  /* 0C07D774 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r3); UPD(0x0C07D778u, 3);  /* 0C07D776 mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C07D778 add #imm,Rn */
	W8(r3, r0); UPD(0x0C07D77Cu, 2);  /* 0C07D77A mov.b Rm,@Rn */
	r0 &= 0x1u;  /* 0C07D77C and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C07D77E tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07D7A0u, 5); goto L_0C07D7A0; } UPD(0x0C07D784u, 1); goto L_0C07D784; }  /* 0C07D780 bt/s */
L_0C07D784: BLKS(0x0C07D784u);
	r5 = 0xC07C160u; UPD(0x0C07D786u, 1);  /* 0C07D784 mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C07D786 mov Rm,Rn */
	r15 = r14;  /* 0C07D788 mov Rm,Rn */
	IF(0x0C07D78Au); PR = R32(r15); r15 += 4; UPD(0x0C07D78Cu, 3);  /* 0C07D78A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07D78Eu, 1);  /* 0C07D78C mov.l @Rm+,Rn */
	IF(0x0C07D78Eu); { u32 tv_ = r5; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C07C160u: goto L_0C07C160; default: JUMPD(tv_); } }  /* 0C07D78E jmp @Rn */
L_0C07D7A0: BLKS(0x0C07D7A0u);
	r0 = R32(r2 + 0xCu); UPD(0x0C07D7A2u, 1);  /* 0C07D7A0 mov.l @(disp,Rm),Rn */
	r4 = r8;  /* 0C07D7A2 mov Rm,Rn */
	r3 = 0xC07BFE0u; UPD(0x0C07D7A6u, 2);  /* 0C07D7A4 mov.l @(disp,pc),Rn */
	r0 += 0x1u;  /* 0C07D7A6 add #imm,Rn */
	r0 &= 0x7u;  /* 0C07D7A8 and #imm,r0 */
	IF(0x0C07D7AAu); { u32 t_ = r3; PR = 0x0C07D7AEu; W32(r2 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 4); CALLP(t_, blk_f_0C07BFE0, 0x0C07BFE0u, 0x0C07D7AEu); }  /* 0C07D7AA jsr @Rn */
L_0C07D7AE: BLKS(0x0C07D7AEu);
	{ IF(0x0C07D7B0u); ; /* slot nop */ UPD(0x0C07D784u, 3); goto L_0C07D784; }  /* 0C07D7AE bra */
}

void blk_f_0C07D7C0(sh3_t *c)
{
	LOCALS;
	goto L_0C07D7C0;
L_0C07C160: BLKS(0x0C07C160u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07C162u, 1);  /* 0C07C160 mov.l Rm,@-Rn */
	r0 = 0x60u;  /* 0C07C162 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07C166u, 2);  /* 0C07C164 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07C168u, 1);  /* 0C07C166 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07C16Au, 1);  /* 0C07C168 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07C16Cu, 1);  /* 0C07C16A mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C07C16Eu, 1);  /* 0C07C16C mov.l Rm,@-Rn */
	r13 = (u32)(s32)(s16)r4;  /* 0C07C16E exts.w Rm,Rn */
	IF(0x0C07C170u); MACL = r13 * r0;  /* 0C07C170 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07C174u, 4);  /* 0C07C172 mov.l Rm,@-Rn */
	r0 = 0xC3BC81Au; UPD(0x0C07C176u, 1);  /* 0C07C174 mov.l @(disp,pc),Rn */
	IF(0x0C07C176u); r3 = MACL;  /* 0C07C176 sts macl,Rn */
	IF(0x0C07C178u); r15 -= 4; W32(r15, PR); UPD(0x0C07C17Au, 2);  /* 0C07C178 sts.l pr,@-Rn */
	IF(0x0C07C17Au); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C07C17Cu, 1);  /* 0C07C17A mov.b @(r0,Rm),Rn */
	r8 = 0xC29D1D8u; UPD(0x0C07C17Eu, 1);  /* 0C07C17C mov.l @(disp,pc),Rn */
	T = (r2 & r2) == 0;  /* 0C07C17E tst Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07C1B2u, 4); goto L_0C07C1B2; } goto L_0C07C184; }  /* 0C07C180 bf/s */
L_0C07C184: BLKS(0x0C07C184u);
	r10 = r8;  /* 0C07C184 mov Rm,Rn */
	r9 = 0x0u;  /* 0C07C186 mov #imm,Rn */
	r10 += 0x18u;  /* 0C07C188 add #imm,Rn */
	IF(0x0C07C18Au); ;  /* 0C07C18A nop */
	UPD(0x0C07C18Cu, 5);
L_0C07C18C: BLKS(0x0C07C18Cu);
	r1 = R32(r8); UPD(0x0C07C18Eu, 1);  /* 0C07C18C mov.l @Rm,Rn */
	r4 = 0x10000000u; UPD(0x0C07C190u, 1);  /* 0C07C18E mov.l @(disp,pc),Rn */
	T = (r1 & r4) == 0;  /* 0C07C190 tst Rm,Rn */
	if (T) { UPD(0x0C07C1A4u, 4); goto L_0C07C1A4; }  /* 0C07C192 bt */
L_0C07C194: BLKS(0x0C07C194u);
	r0 = 0x270u; UPD(0x0C07C196u, 1);  /* 0C07C194 mov.w @(disp,pc),Rn */
	IF(0x0C07C196u); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07C198u, 1);  /* 0C07C196 mov.b @(r0,Rm),Rn */
	r11 = r2 & 0xFF;  /* 0C07C198 extu.b Rm,Rn */
	T = (r11 & r11) == 0;  /* 0C07C19A tst Rm,Rn */
	{ u32 c_ = !T; r12 = 0x60u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07C1A4u, 5); goto L_0C07C1A4; } goto L_0C07C1A0; }  /* 0C07C19C bf/s */
L_0C07C1A0: BLKS(0x0C07C1A0u);
	{ IF(0x0C07C1A2u); MACL = r13 * r12; /* slot mul.l Rm,Rn */ UPD(0x0C07C410u, 5); goto L_0C07C410; }  /* 0C07C1A0 bra */
L_0C07C1A4: BLKS(0x0C07C1A4u);
	r5 = 0x2A0u; UPD(0x0C07C1A6u, 1);  /* 0C07C1A4 mov.w @(disp,pc),Rn */
	r9 += 0x1u;  /* 0C07C1A6 add #imm,Rn */
	r11 = 0x1u;  /* 0C07C1A8 mov #imm,Rn */
	r10 += r5;  /* 0C07C1AA add Rm,Rn */
	T = (s32)r9 > (s32)r11;  /* 0C07C1AC cmp/gt Rm,Rn */
	{ u32 c_ = !T; r8 += r5; /* slot add Rm,Rn */ if (c_) { UPD(0x0C07C18Cu, 7); goto L_0C07C18C; } UPD(0x0C07C1B2u, 1); goto L_0C07C1B2; }  /* 0C07C1AE bf/s */
L_0C07C1B2: BLKS(0x0C07C1B2u);
	r3 = 0x60u;  /* 0C07C1B2 mov #imm,Rn */
	UPD(0x0C07C1B4u, 1);
L_0C07C1B4: BLKS(0x0C07C1B4u);
	IF(0x0C07C1B4u); MACL = r13 * r3;  /* 0C07C1B4 mul.l Rm,Rn */
	r7 = 0xC3BC7CCu; UPD(0x0C07C1B8u, 3);  /* 0C07C1B6 mov.l @(disp,pc),Rn */
	IF(0x0C07C1B8u); r11 = MACL;  /* 0C07C1B8 sts macl,Rn */
	r11 += r7;  /* 0C07C1BA add Rm,Rn */
	r3 = r11;  /* 0C07C1BC mov Rm,Rn */
	r3 += 0x4Eu;  /* 0C07C1BE add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r3); UPD(0x0C07C1C2u, 5);  /* 0C07C1C0 mov.b @Rm,Rn */
	r2 = r6 & 0xFF;  /* 0C07C1C2 extu.b Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C07C1C4 tst Rm,Rn */
	if (T) { UPD(0x0C07C1EAu, 5); goto L_0C07C1EA; }  /* 0C07C1C6 bt */
L_0C07C1C8: BLKS(0x0C07C1C8u);
	r4 = 0x2A0u; UPD(0x0C07C1CAu, 1);  /* 0C07C1C8 mov.w @(disp,pc),Rn */
	IF(0x0C07C1CAu); MACL = r2 * r4;  /* 0C07C1CA mul.l Rm,Rn */
	r12 = 0xC29D1D8u; UPD(0x0C07C1CEu, 3);  /* 0C07C1CC mov.l @(disp,pc),Rn */
	IF(0x0C07C1CEu); r8 = MACL;  /* 0C07C1CE sts macl,Rn */
	r12 -= r4;  /* 0C07C1D0 sub Rm,Rn */
	r8 += r12;  /* 0C07C1D2 add Rm,Rn */
	r2 = R32(r8); UPD(0x0C07C1D6u, 4);  /* 0C07C1D4 mov.l @Rm,Rn */
	r0 = 0x10000000u; UPD(0x0C07C1D8u, 1);  /* 0C07C1D6 mov.l @(disp,pc),Rn */
	r2 &= r0;  /* 0C07C1D8 and Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C07C1DA tst Rm,Rn */
	if (T) { UPD(0x0C07C1E4u, 5); goto L_0C07C1E4; }  /* 0C07C1DC bt */
L_0C07C1DE: BLKS(0x0C07C1DEu);
	r6 = R32(r8 + 0x10u); UPD(0x0C07C1E0u, 1);  /* 0C07C1DE mov.l @(disp,Rm),Rn */
	{ r7 = R32(r8 + 0x14u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C07C390u, 3); goto L_0C07C390; }  /* 0C07C1E0 bra */
L_0C07C1E4: BLKS(0x0C07C1E4u);
	W32(r11 + 0x34u, r2); UPD(0x0C07C1E6u, 1);  /* 0C07C1E4 mov.l Rm,@(disp,Rn) */
	W32(r11 + 0x30u, r2); UPD(0x0C07C1E8u, 1);  /* 0C07C1E6 mov.l Rm,@(disp,Rn) */
	W8(r3, r2); UPD(0x0C07C1EAu, 1);  /* 0C07C1E8 mov.b Rm,@Rn */
L_0C07C1EA: BLKS(0x0C07C1EAu);
	r3 = 0x60u;  /* 0C07C1EA mov #imm,Rn */
	IF(0x0C07C1ECu); MACL = r13 * r3;  /* 0C07C1EC mul.l Rm,Rn */
	r7 = 0xC3BC7CCu; UPD(0x0C07C1F0u, 4);  /* 0C07C1EE mov.l @(disp,pc),Rn */
	IF(0x0C07C1F0u); r8 = MACL;  /* 0C07C1F0 sts macl,Rn */
	r8 += r7;  /* 0C07C1F2 add Rm,Rn */
	r8 += 0x4Eu;  /* 0C07C1F4 add #imm,Rn */
	r11 = (u32)(s32)(s8)R8(r8); UPD(0x0C07C1F8u, 4);  /* 0C07C1F6 mov.b @Rm,Rn */
	T = (r11 & r11) == 0;  /* 0C07C1F8 tst Rm,Rn */
	{ u32 c_ = !T; r8 += 0xFFFFFFB2u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C07C214u, 4); goto L_0C07C214; } goto L_0C07C1FE; }  /* 0C07C1FA bf/s */
L_0C07C1FE: BLKS(0x0C07C1FEu);
	r0 = R32(r8); UPD(0x0C07C200u, 2);  /* 0C07C1FE mov.l @Rm,Rn */
	r4 = 0x4010u; UPD(0x0C07C202u, 1);  /* 0C07C200 mov.w @(disp,pc),Rn */
	r0 &= r4;  /* 0C07C202 and Rm,Rn */
	T = r0 == 0x10u;  /* 0C07C204 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C07C214u, 5); goto L_0C07C214; }  /* 0C07C206 bt */
L_0C07C208: BLKS(0x0C07C208u);
	r12 = 0x10u;  /* 0C07C208 mov #imm,Rn */
	T = r0 > r12;  /* 0C07C20A cmp/hi Rm,Rn */
	{ u32 c_ = T; T = (r0 & r0) == 0; /* slot tst Rm,Rn */ if (c_) { UPD(0x0C07C2C0u, 5); goto L_0C07C2C0; } goto L_0C07C210; }  /* 0C07C20C bt/s */
L_0C07C210: BLKS(0x0C07C210u);
	if (T) { UPD(0x0C07C230u, 4); goto L_0C07C230; }  /* 0C07C210 bt */
L_0C07C212: BLKS(0x0C07C212u);
	IF(0x0C07C212u); ;  /* 0C07C212 nop */
	UPD(0x0C07C214u, 1);
L_0C07C214: BLKS(0x0C07C214u);
	r15 = r14;  /* 0C07C214 mov Rm,Rn */
	IF(0x0C07C216u); PR = R32(r15); r15 += 4; UPD(0x0C07C218u, 2);  /* 0C07C216 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07C21Au, 1);  /* 0C07C218 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07C21Cu, 1);  /* 0C07C21A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07C21Eu, 1);  /* 0C07C21C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07C220u, 1);  /* 0C07C21E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07C222u, 1);  /* 0C07C220 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07C224u, 1);  /* 0C07C222 mov.l @Rm+,Rn */
	IF(0x0C07C224u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07C224 rts */
L_0C07C230: BLKS(0x0C07C230u);
	r2 = R32(r8 + 0x30u); UPD(0x0C07C232u, 1);  /* 0C07C230 mov.l @(disp,Rm),Rn */
	r8 += 0x40u;  /* 0C07C232 add #imm,Rn */
	r0 = R32(r8); UPD(0x0C07C236u, 2);  /* 0C07C234 mov.l @Rm,Rn */
	T = (s32)r2 > (s32)r0;  /* 0C07C236 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r8 += 0xFFFFFFC0u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C07C244u, 4); goto L_0C07C244; } goto L_0C07C23C; }  /* 0C07C238 bf/s */
L_0C07C23C: BLKS(0x0C07C23Cu);
	r10 = 0xFFFFF000u; UPD(0x0C07C23Eu, 2);  /* 0C07C23C mov.w @(disp,pc),Rn */
	r10 += r2;  /* 0C07C23E add Rm,Rn */
	W32(r8 + 0x30u, r10); UPD(0x0C07C242u, 2);  /* 0C07C240 mov.l Rm,@(disp,Rn) */
	r2 = r10;  /* 0C07C242 mov Rm,Rn */
	UPD(0x0C07C244u, 1);
L_0C07C244: BLKS(0x0C07C244u);
	r6 = R32(r8 + 0x28u); UPD(0x0C07C246u, 1);  /* 0C07C244 mov.l @(disp,Rm),Rn */
	r3 = R32(r8 + 0x2Cu); UPD(0x0C07C248u, 1);  /* 0C07C246 mov.l @(disp,Rm),Rn */
	r6 += r2;  /* 0C07C248 add Rm,Rn */
	r7 = R32(r8 + 0x34u); UPD(0x0C07C24Cu, 2);  /* 0C07C24A mov.l @(disp,Rm),Rn */
	W32(r8 + 0x28u, r6); UPD(0x0C07C24Eu, 1);  /* 0C07C24C mov.l Rm,@(disp,Rn) */
	r3 += r7;  /* 0C07C24E add Rm,Rn */
	r1 = 0xC0000u; UPD(0x0C07C252u, 2);  /* 0C07C250 mov.l @(disp,pc),Rn */
	r5 = 0x30C0000u; UPD(0x0C07C254u, 1);  /* 0C07C252 mov.l @(disp,pc),Rn */
	r6 += r1;  /* 0C07C254 add Rm,Rn */
	T = r6 > r5;  /* 0C07C256 cmp/hi Rm,Rn */
	{ u32 c_ = T; W32(r8 + 0x2Cu, r3); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C07C2A0u, 5); goto L_0C07C2A0; } UPD(0x0C07C25Cu, 1); goto L_0C07C25C; }  /* 0C07C258 bt/s */
L_0C07C25C: BLKS(0x0C07C25Cu);
	r2 = 0xFE8C0000u; UPD(0x0C07C25Eu, 1);  /* 0C07C25C mov.l @(disp,pc),Rn */
	r13 = 0x1180000u; UPD(0x0C07C260u, 1);  /* 0C07C25E mov.l @(disp,pc),Rn */
	r2 += r3;  /* 0C07C260 add Rm,Rn */
	T = r2 > r13;  /* 0C07C262 cmp/hi Rm,Rn */
	{ u32 c_ = !T; r6 = r8; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07C272u, 5); goto L_0C07C272; } goto L_0C07C268; }  /* 0C07C264 bf/s */
L_0C07C268: BLKS(0x0C07C268u);
	r11 = 0u - r7;  /* 0C07C268 neg Rm,Rn */
	r3 += r11;  /* 0C07C26A add Rm,Rn */
	W32(r8 + 0x34u, r11); UPD(0x0C07C26Eu, 4);  /* 0C07C26C mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x2Cu, r3); UPD(0x0C07C270u, 1);  /* 0C07C26E mov.l Rm,@(disp,Rn) */
	r6 = r8;  /* 0C07C270 mov Rm,Rn */
	UPD(0x0C07C272u, 1);
L_0C07C272: BLKS(0x0C07C272u);
	r6 += 0x44u;  /* 0C07C272 add #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r6); UPD(0x0C07C276u, 2);  /* 0C07C274 mov.b @Rm,Rn */
	r9 = 0x13u;  /* 0C07C276 mov #imm,Rn */
	r4 = 0xC2B039Cu; UPD(0x0C07C27Au, 2);  /* 0C07C278 mov.l @(disp,pc),Rn */
	r12 = r3 & 0xFF;  /* 0C07C27A extu.b Rm,Rn */
	r0 = R32(r4); UPD(0x0C07C27Eu, 2);  /* 0C07C27C mov.l @Rm,Rn */
	T = r9 >= r12;  /* 0C07C27E cmp/hs Rm,Rn */
	IF(0x0C07C280u); r8 = T;  /* 0C07C280 movt Rn */
	r0 &= 0x3u;  /* 0C07C282 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C07C284 tst Rm,Rn */
	IF(0x0C07C286u); r7 = T;  /* 0C07C286 movt Rn */
	r8 &= r7;  /* 0C07C288 and Rm,Rn */
	T = (r8 & r8) == 0;  /* 0C07C28A tst Rm,Rn */
	if (T) { UPD(0x0C07C214u, 10); goto L_0C07C214; }  /* 0C07C28C bt */
L_0C07C28E: BLKS(0x0C07C28Eu);
	r0 = r3;  /* 0C07C28E mov Rm,Rn */
	r0 += 0x1u;  /* 0C07C290 add #imm,Rn */
	{ W8(r6, r0); /* slot mov.b Rm,@Rn */ UPD(0x0C07C214u, 5); goto L_0C07C214; }  /* 0C07C292 bra */
L_0C07C2A0: BLKS(0x0C07C2A0u);
	r0 = 0xC07C910u; UPD(0x0C07C2A2u, 1);  /* 0C07C2A0 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C07C2A2 mov Rm,Rn */
	r15 = r14;  /* 0C07C2A4 mov Rm,Rn */
	IF(0x0C07C2A6u); PR = R32(r15); r15 += 4; UPD(0x0C07C2A8u, 3);  /* 0C07C2A6 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07C2AAu, 1);  /* 0C07C2A8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07C2ACu, 1);  /* 0C07C2AA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07C2AEu, 1);  /* 0C07C2AC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07C2B0u, 1);  /* 0C07C2AE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07C2B2u, 1);  /* 0C07C2B0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07C2B4u, 1);  /* 0C07C2B2 mov.l @Rm+,Rn */
	IF(0x0C07C2B4u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C07C910u: TAIL(blk_f_0C07C910); default: JUMPD(tv_); } }  /* 0C07C2B4 jmp @Rn */
L_0C07C2C0: BLKS(0x0C07C2C0u);
	r9 = 0x4000u; UPD(0x0C07C2C2u, 1);  /* 0C07C2C0 mov.w @(disp,pc),Rn */
	T = r0 == r9;  /* 0C07C2C2 cmp/eq Rm,Rn */
	if (!T) { UPD(0x0C07C214u, 4); goto L_0C07C214; }  /* 0C07C2C4 bf */
L_0C07C2C6: BLKS(0x0C07C2C6u);
	r10 = 0xC07D3B0u; UPD(0x0C07C2C8u, 1);  /* 0C07C2C6 mov.l @(disp,pc),Rn */
	IF(0x0C07C2C8u); { u32 t_ = r10; PR = 0x0C07C2CCu; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07D3B0, 0x0C07D3B0u, 0x0C07C2CCu); }  /* 0C07C2C8 jsr @Rn */
L_0C07C2CC: BLKS(0x0C07C2CCu);
	IF(0x0C07C2CCu); T = (s32)r0 >= 0;  /* 0C07C2CC cmp/pz Rn */
	if (!T) { UPD(0x0C07C300u, 4); goto L_0C07C300; }  /* 0C07C2CE bf */
L_0C07C2D0: BLKS(0x0C07C2D0u);
	r8 += 0x4Au;  /* 0C07C2D0 add #imm,Rn */
	r7 = (u32)(s32)(s16)R16(r8); UPD(0x0C07C2D4u, 2);  /* 0C07C2D2 mov.w @Rm,Rn */
	r11 = 0xB4u; UPD(0x0C07C2D6u, 1);  /* 0C07C2D4 mov.w @(disp,pc),Rn */
	r8 += 0xFFFFFFB6u;  /* 0C07C2D6 add #imm,Rn */
	IF(0x0C07C2D8u); MACL = r7 * r11;  /* 0C07C2D8 mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C07C2DCu, 4);  /* 0C07C2DA mov.l @(disp,pc),Rn */
	IF(0x0C07C2DCu); r10 = MACL;  /* 0C07C2DC sts macl,Rn */
	r10 += r2;  /* 0C07C2DE add Rm,Rn */
	r5 = R32(r10 + 0x24u); UPD(0x0C07C2E2u, 3);  /* 0C07C2E0 mov.l @(disp,Rm),Rn */
	r6 = R32(r8 + 0x30u); UPD(0x0C07C2E4u, 1);  /* 0C07C2E2 mov.l @(disp,Rm),Rn */
	r5 += r6;  /* 0C07C2E4 add Rm,Rn */
	W32(r8 + 0x28u, r5); UPD(0x0C07C2E8u, 2);  /* 0C07C2E6 mov.l Rm,@(disp,Rn) */
	r1 = R32(r8 + 0x34u); UPD(0x0C07C2EAu, 1);  /* 0C07C2E8 mov.l @(disp,Rm),Rn */
	r9 = R32(r10 + 0x28u); UPD(0x0C07C2ECu, 1);  /* 0C07C2EA mov.l @(disp,Rm),Rn */
	r9 += r1;  /* 0C07C2EC add Rm,Rn */
	{ W32(r8 + 0x2Cu, r9); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C07C214u, 4); goto L_0C07C214; }  /* 0C07C2EE bra */
L_0C07C300: BLKS(0x0C07C300u);
	r8 += 0x44u;  /* 0C07C300 add #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r8); UPD(0x0C07C304u, 2);  /* 0C07C302 mov.b @Rm,Rn */
	r12 = 0xC0BC0B0u; UPD(0x0C07C306u, 1);  /* 0C07C304 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFBCu;  /* 0C07C306 add #imm,Rn */
	r6 = r3 & 0xFF;  /* 0C07C308 extu.b Rm,Rn */
	r5 = R32(r8 + 0x2Cu); UPD(0x0C07C30Cu, 3);  /* 0C07C30A mov.l @(disp,Rm),Rn */
	IF(0x0C07C30Cu); { u32 t_ = r12; PR = 0x0C07C310u; r4 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BC0B0, 0x0C0BC0B0u, 0x0C07C310u); }  /* 0C07C30C jsr @Rn */
L_0C07C310: BLKS(0x0C07C310u);
	T = (r0 & r0) == 0;  /* 0C07C310 tst Rm,Rn */
	r6 = R32(r8 + 0x28u); UPD(0x0C07C314u, 2);  /* 0C07C312 mov.l @(disp,Rm),Rn */
	IF(0x0C07C314u); r3 = T;  /* 0C07C314 movt Rn */
	r7 = 0x1500000u; UPD(0x0C07C318u, 2);  /* 0C07C316 mov.l @(disp,pc),Rn */
	r2 = 0xFFF00000u; UPD(0x0C07C31Au, 1);  /* 0C07C318 mov.l @(disp,pc),Rn */
	T = (s32)r6 > (s32)r7;  /* 0C07C31A cmp/gt Rm,Rn */
	IF(0x0C07C31Cu); r11 = T;  /* 0C07C31C movt Rn */
	T = (s32)r2 > (s32)r6;  /* 0C07C31E cmp/gt Rm,Rn */
	IF(0x0C07C320u); r5 = T;  /* 0C07C320 movt Rn */
	r3 |= r11;  /* 0C07C322 or Rm,Rn */
	r3 |= r5;  /* 0C07C324 or Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C07C326 tst Rm,Rn */
	if (!T) { UPD(0x0C07C2A0u, 10); goto L_0C07C2A0; }  /* 0C07C328 bf */
L_0C07C32A: BLKS(0x0C07C32Au);
	r0 = R32(r8); UPD(0x0C07C32Cu, 1);  /* 0C07C32A mov.l @Rm,Rn */
	r4 = 0xFFFFBFFFu; UPD(0x0C07C32Eu, 1);  /* 0C07C32C mov.w @(disp,pc),Rn */
	r13 = 0x20000u; UPD(0x0C07C330u, 1);  /* 0C07C32E mov.l @(disp,pc),Rn */
	r0 &= r4;  /* 0C07C330 and Rm,Rn */
	r0 |= 0x4u;  /* 0C07C332 or #imm,r0 */
	W32(r8, r0); UPD(0x0C07C336u, 3);  /* 0C07C334 mov.l Rm,@Rn */
	W32(r8 + 0x30u, r13); UPD(0x0C07C338u, 1);  /* 0C07C336 mov.l Rm,@(disp,Rn) */
	{ W32(r8 + 0x34u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C07C214u, 3); goto L_0C07C214; }  /* 0C07C338 bra */
L_0C07C390: BLKS(0x0C07C390u);
	r8 = 0xC068E60u; UPD(0x0C07C392u, 1);  /* 0C07C390 mov.l @(disp,pc),Rn */
	r4 = R32(r11 + 0x28u); UPD(0x0C07C394u, 1);  /* 0C07C392 mov.l @(disp,Rm),Rn */
	IF(0x0C07C394u); { u32 t_ = r8; PR = 0x0C07C398u; r5 = R32(r11 + 0x2Cu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C068E60, 0x0C068E60u, 0x0C07C398u); }  /* 0C07C394 jsr @Rn */
L_0C07C398: BLKS(0x0C07C398u);
	r10 = 0xC069B20u; UPD(0x0C07C39Au, 1);  /* 0C07C398 mov.l @(disp,pc),Rn */
	r9 = r0;  /* 0C07C39A mov Rm,Rn */
	r12 = 0x50000u; UPD(0x0C07C39Eu, 2);  /* 0C07C39C mov.l @(disp,pc),Rn */
	r4 = r0;  /* 0C07C39E mov Rm,Rn */
	r8 = 0xC069AF0u; UPD(0x0C07C3A2u, 2);  /* 0C07C3A0 mov.l @(disp,pc),Rn */
	IF(0x0C07C3A2u); { u32 t_ = r10; PR = 0x0C07C3A6u; r5 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C07C3A6u); }  /* 0C07C3A2 jsr @Rn */
L_0C07C3A6: BLKS(0x0C07C3A6u);
	r10 = r0;  /* 0C07C3A6 mov Rm,Rn */
	r4 = r9;  /* 0C07C3A8 mov Rm,Rn */
	IF(0x0C07C3AAu); { u32 t_ = r8; PR = 0x0C07C3AEu; r5 = r12; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C07C3AEu); }  /* 0C07C3AA jsr @Rn */
L_0C07C3AE: BLKS(0x0C07C3AEu);
	r1 = R32(r11 + 0x30u); UPD(0x0C07C3B0u, 1);  /* 0C07C3AE mov.l @(disp,Rm),Rn */
	r10 -= r1;  /* 0C07C3B0 sub Rm,Rn */
	IF(0x0C07C3B2u); T = (s32)r10 >= 0;  /* 0C07C3B2 cmp/pz Rn */
	if (!T) { UPD(0x0C07C400u, 5); goto L_0C07C400; }  /* 0C07C3B4 bf */
L_0C07C3B6: BLKS(0x0C07C3B6u);
	r2 = r10;  /* 0C07C3B6 mov Rm,Rn */
	IF(0x0C07C3B8u); T = r2 & 1; r2 = (u32)((s32)r2 >> 1);  /* 0C07C3B8 shar Rn */
	IF(0x0C07C3BAu); T = r2 & 1; r2 = (u32)((s32)r2 >> 1);  /* 0C07C3BA shar Rn */
	r5 = 0x1u;  /* 0C07C3BC mov #imm,Rn */
	r2 |= r5;  /* 0C07C3BE or Rm,Rn */
	r2 += r1;  /* 0C07C3C0 add Rm,Rn */
	r1 = R32(r11 + 0x34u); UPD(0x0C07C3C4u, 7);  /* 0C07C3C2 mov.l @(disp,Rm),Rn */
	r0 -= r1;  /* 0C07C3C4 sub Rm,Rn */
	IF(0x0C07C3C6u); T = (s32)r0 >= 0;  /* 0C07C3C6 cmp/pz Rn */
	{ u32 c_ = !T; W32(r11 + 0x30u, r2); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C07C3F0u, 5); goto L_0C07C3F0; } UPD(0x0C07C3CCu, 1); goto L_0C07C3CC; }  /* 0C07C3C8 bf/s */
L_0C07C3CC: BLKS(0x0C07C3CCu);
	r6 = R32(r11 + 0x28u); UPD(0x0C07C3CEu, 1);  /* 0C07C3CC mov.l @(disp,Rm),Rn */
	IF(0x0C07C3CEu); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C07C3CE shar Rn */
	r6 += r2;  /* 0C07C3D0 add Rm,Rn */
	IF(0x0C07C3D2u); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C07C3D2 shar Rn */
	r2 = R32(r11 + 0x2Cu); UPD(0x0C07C3D6u, 4);  /* 0C07C3D4 mov.l @(disp,Rm),Rn */
	r0 |= 0x1u;  /* 0C07C3D6 or #imm,r0 */
	r0 += r1;  /* 0C07C3D8 add Rm,Rn */
	r2 += r0;  /* 0C07C3DA add Rm,Rn */
	W32(r11 + 0x34u, r0); UPD(0x0C07C3DEu, 4);  /* 0C07C3DC mov.l Rm,@(disp,Rn) */
	W32(r11 + 0x28u, r6); UPD(0x0C07C3E0u, 1);  /* 0C07C3DE mov.l Rm,@(disp,Rn) */
	{ W32(r11 + 0x2Cu, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C07C1EAu, 3); goto L_0C07C1EA; }  /* 0C07C3E0 bra */
L_0C07C3F0: BLKS(0x0C07C3F0u);
	{ r0 += 0x3u; /* slot add #imm,Rn */ UPD(0x0C07C3CCu, 3); goto L_0C07C3CC; }  /* 0C07C3F0 bra */
L_0C07C400: BLKS(0x0C07C400u);
	{ r10 += 0x3u; /* slot add #imm,Rn */ UPD(0x0C07C3B6u, 3); goto L_0C07C3B6; }  /* 0C07C400 bra */
L_0C07C410: BLKS(0x0C07C410u);
	r0 = 0xC3BC7CCu; UPD(0x0C07C412u, 1);  /* 0C07C410 mov.l @(disp,pc),Rn */
	r2 = 0xC06A380u; UPD(0x0C07C414u, 1);  /* 0C07C412 mov.l @(disp,pc),Rn */
	IF(0x0C07C414u); r12 = MACL;  /* 0C07C414 sts macl,Rn */
	r12 += r0;  /* 0C07C416 add Rm,Rn */
	r7 = R32(r8 + 0x14u); UPD(0x0C07C41Au, 3);  /* 0C07C418 mov.l @(disp,Rm),Rn */
	r6 = R32(r8 + 0x10u); UPD(0x0C07C41Cu, 1);  /* 0C07C41A mov.l @(disp,Rm),Rn */
	r5 = R32(r12 + 0x2Cu); UPD(0x0C07C41Eu, 1);  /* 0C07C41C mov.l @(disp,Rm),Rn */
	IF(0x0C07C41Eu); { u32 t_ = r2; PR = 0x0C07C422u; r4 = R32(r12 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C06A380, 0x0C06A380u, 0x0C07C422u); }  /* 0C07C41E jsr @Rn */
L_0C07C422: BLKS(0x0C07C422u);
	r7 = R32(r10); UPD(0x0C07C424u, 1);  /* 0C07C422 mov.l @Rm,Rn */
	r3 = 0xFFFFFFF4u;  /* 0C07C424 mov #imm,Rn */
	IF(0x0C07C426u); ARG0(0x473Cu); { s32 s_ = (s32)r3; if (s_ >= 0) r7 <<= (s_ & 31); else if ((s_ & 31) == 0) r7 = (u32)((s32)r7 >> 31); else r7 = (u32)((s32)r7 >> ((~s_ & 31) + 1)); }  /* 0C07C426 shad Rm,Rn */
	r5 = 0u - r7;  /* 0C07C428 neg Rm,Rn */
	r5 += 0x60u;  /* 0C07C42A add #imm,Rn */
	r6 = 0x11u;  /* 0C07C42C mov #imm,Rn */
	IF(0x0C07C42Eu); ARG0(0x456Du); { s32 s_ = (s32)r6; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = 0; else r5 >>= ((~s_ & 31) + 1); }  /* 0C07C42E shld Rm,Rn */
	T = (s32)r0 >= (s32)r5;  /* 0C07C430 cmp/ge Rm,Rn */
	if (T) { UPD(0x0C07C43Au, 10); goto L_0C07C43A; }  /* 0C07C432 bt */
L_0C07C434: BLKS(0x0C07C434u);
	r4 = 0xFFFFFFFu; UPD(0x0C07C436u, 1);  /* 0C07C434 mov.l @(disp,pc),Rn */
	T = (s32)r0 >= (s32)r4;  /* 0C07C436 cmp/ge Rm,Rn */
	if (!T) { UPD(0x0C07C43Eu, 4); goto L_0C07C43E; }  /* 0C07C438 bf */
L_0C07C43A: BLKS(0x0C07C43Au);
	{ IF(0x0C07C43Cu); ; /* slot nop */ UPD(0x0C07C1A4u, 3); goto L_0C07C1A4; }  /* 0C07C43A bra */
L_0C07C43E: BLKS(0x0C07C43Eu);
	r10 = 0x1u;  /* 0C07C43E mov #imm,Rn */
	IF(0x0C07C440u); ARG0(0x4A9Du); { s32 s_ = (s32)r9; if (s_ >= 0) r10 <<= (s_ & 31); else if ((s_ & 31) == 0) r10 = 0; else r10 >>= ((~s_ & 31) + 1); }  /* 0C07C440 shld Rm,Rn */
	r12 += 0x4Eu;  /* 0C07C442 add #imm,Rn */
	W8(r12, r10); UPD(0x0C07C446u, 4);  /* 0C07C444 mov.b Rm,@Rn */
	r12 += 0xFFFFFFB2u;  /* 0C07C446 add #imm,Rn */
	r2 = R32(r12); UPD(0x0C07C44Au, 2);  /* 0C07C448 mov.l @Rm,Rn */
	r8 = 0x4000u; UPD(0x0C07C44Cu, 1);  /* 0C07C44A mov.w @(disp,pc),Rn */
	T = (r2 & r8) == 0;  /* 0C07C44C tst Rm,Rn */
	if (T) { UPD(0x0C07C45Au, 4); goto L_0C07C45A; }  /* 0C07C44E bt */
L_0C07C450: BLKS(0x0C07C450u);
	r9 = 0xFFFFBFFFu; UPD(0x0C07C452u, 1);  /* 0C07C450 mov.w @(disp,pc),Rn */
	r2 &= r9;  /* 0C07C452 and Rm,Rn */
	W32(r12, r2); UPD(0x0C07C456u, 2);  /* 0C07C454 mov.l Rm,@Rn */
	W32(r12 + 0x34u, r11); UPD(0x0C07C458u, 1);  /* 0C07C456 mov.l Rm,@(disp,Rn) */
	W32(r12 + 0x30u, r11); UPD(0x0C07C45Au, 1);  /* 0C07C458 mov.l Rm,@(disp,Rn) */
L_0C07C45A: BLKS(0x0C07C45Au);
	{ r3 = 0x60u; /* slot mov #imm,Rn */ UPD(0x0C07C1B4u, 3); goto L_0C07C1B4; }  /* 0C07C45A bra */
L_0C07D7C0: BLKS(0x0C07D7C0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07D7C2u, 1);  /* 0C07D7C0 mov.l Rm,@-Rn */
	r5 = 0x0u;  /* 0C07D7C2 mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07D7C6u, 2);  /* 0C07D7C4 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C07D7C6 exts.w Rm,Rn */
	IF(0x0C07D7C8u); r15 -= 4; W32(r15, PR); UPD(0x0C07D7CAu, 2);  /* 0C07D7C8 sts.l pr,@-Rn */
	r7 = 0x0u;  /* 0C07D7CA mov #imm,Rn */
	r4 = 0x13Fu; UPD(0x0C07D7CEu, 2);  /* 0C07D7CC mov.w @(disp,pc),Rn */
	r14 = r15;  /* 0C07D7CE mov Rm,Rn */
	r3 = 0xC3BC7CCu; UPD(0x0C07D7D2u, 2);  /* 0C07D7D0 mov.l @(disp,pc),Rn */
	r6 = 0xFFFFFFFFu;  /* 0C07D7D2 mov #imm,Rn */
	UPD(0x0C07D7D4u, 1);
L_0C07D7D4: BLKS(0x0C07D7D4u);
	r0 = R32(r3); UPD(0x0C07D7D6u, 1);  /* 0C07D7D4 mov.l @Rm,Rn */
	T = r8 == r7;  /* 0C07D7D6 cmp/eq Rm,Rn */
	{ u32 t_ = 0u - r6, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r2 = r_; }  /* 0C07D7D8 negc Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C07D7DA tst Rm,Rn */
	{ u32 t_ = 0u - r6, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r0 = r_; }  /* 0C07D7DC negc Rm,Rn */
	r2 &= r0;  /* 0C07D7DE and Rm,Rn */
	r0 = R32(r3 + 0x4u); UPD(0x0C07D7E2u, 6);  /* 0C07D7E0 mov.l @(disp,Rm),Rn */
	T = r0 == 0x3u;  /* 0C07D7E2 cmp/eq #imm,r0 */
	IF(0x0C07D7E4u); r0 = T;  /* 0C07D7E4 movt Rn */
	T = (r2 & r0) == 0;  /* 0C07D7E6 tst Rm,Rn */
	{ u32 c_ = T; r0 = r7; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07D7F4u, 6); goto L_0C07D7F4; } goto L_0C07D7EC; }  /* 0C07D7E8 bt/s */
L_0C07D7EC: BLKS(0x0C07D7ECu);
	r2 = r5;  /* 0C07D7EC mov Rm,Rn */
	r2 += 0x1u;  /* 0C07D7EE add #imm,Rn */
	r5 = (u32)(s32)(s16)r2;  /* 0C07D7F0 exts.w Rm,Rn */
	r0 = r7;  /* 0C07D7F2 mov Rm,Rn */
	UPD(0x0C07D7F4u, 5);
L_0C07D7F4: BLKS(0x0C07D7F4u);
	r0 += 0x1u;  /* 0C07D7F4 add #imm,Rn */
	r7 = (u32)(s32)(s16)r0;  /* 0C07D7F6 exts.w Rm,Rn */
	T = (s32)r7 > (s32)r4;  /* 0C07D7F8 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r3 += 0x60u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C07D7D4u, 6); goto L_0C07D7D4; } goto L_0C07D7FE; }  /* 0C07D7FA bf/s */
L_0C07D7FE: BLKS(0x0C07D7FEu);
	r3 = 0x60u;  /* 0C07D7FE mov #imm,Rn */
	IF(0x0C07D800u); MACL = r8 * r3;  /* 0C07D800 mul.l Rm,Rn */
	r7 = 0xC3BC7CCu; UPD(0x0C07D804u, 5);  /* 0C07D802 mov.l @(disp,pc),Rn */
	IF(0x0C07D804u); r3 = MACL;  /* 0C07D804 sts macl,Rn */
	r3 += r7;  /* 0C07D806 add Rm,Rn */
	r6 = r3;  /* 0C07D808 mov Rm,Rn */
	r6 += 0x4Fu;  /* 0C07D80A add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r6); UPD(0x0C07D80Eu, 5);  /* 0C07D80C mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C07D80E add #imm,Rn */
	W8(r6, r0); UPD(0x0C07D812u, 2);  /* 0C07D810 mov.b Rm,@Rn */
	r0 &= 0x3u;  /* 0C07D812 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C07D814 tst Rm,Rn */
	IF(0x0C07D816u); r4 = T;  /* 0C07D816 movt Rn */
	T = (r5 & r5) == 0;  /* 0C07D818 tst Rm,Rn */
	IF(0x0C07D81Au); r5 = T;  /* 0C07D81A movt Rn */
	r4 |= r5;  /* 0C07D81C or Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C07D81E tst Rm,Rn */
	{ u32 c_ = !T; r4 = r8; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07D840u, 10); goto L_0C07D840; } UPD(0x0C07D824u, 1); goto L_0C07D824; }  /* 0C07D820 bf/s */
L_0C07D824: BLKS(0x0C07D824u);
	r0 = 0xC07C160u; UPD(0x0C07D826u, 1);  /* 0C07D824 mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C07D826 mov Rm,Rn */
	r15 = r14;  /* 0C07D828 mov Rm,Rn */
	IF(0x0C07D82Au); PR = R32(r15); r15 += 4; UPD(0x0C07D82Cu, 3);  /* 0C07D82A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07D82Eu, 1);  /* 0C07D82C mov.l @Rm+,Rn */
	IF(0x0C07D82Eu); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C07C160u: goto L_0C07C160; default: JUMPD(tv_); } }  /* 0C07D82E jmp @Rn */
L_0C07D840: BLKS(0x0C07D840u);
	r0 = R32(r3 + 0xCu); UPD(0x0C07D842u, 1);  /* 0C07D840 mov.l @(disp,Rm),Rn */
	r2 = 0xC07BFE0u; UPD(0x0C07D844u, 1);  /* 0C07D842 mov.l @(disp,pc),Rn */
	r0 += 0x1u;  /* 0C07D844 add #imm,Rn */
	r0 &= 0x7u;  /* 0C07D846 and #imm,r0 */
	IF(0x0C07D848u); { u32 t_ = r2; PR = 0x0C07D84Cu; W32(r3 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 4); CALLP(t_, blk_f_0C07BFE0, 0x0C07BFE0u, 0x0C07D84Cu); }  /* 0C07D848 jsr @Rn */
L_0C07D84C: BLKS(0x0C07D84Cu);
	{ IF(0x0C07D84Eu); ; /* slot nop */ UPD(0x0C07D824u, 3); goto L_0C07D824; }  /* 0C07D84C bra */
}

/* FUN_0c07d8e0 */
void blk_f_0C07D8E0(sh3_t *c)
{
	LOCALS;
L_0C07D8E0: BLKS(0x0C07D8E0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07D8E2u, 1);  /* 0C07D8E0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07D8E4u, 1);  /* 0C07D8E2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07D8E6u, 1);  /* 0C07D8E4 mov.l Rm,@-Rn */
	r9 = 0x0u;  /* 0C07D8E6 mov #imm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07D8EAu, 2);  /* 0C07D8E8 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07D8ECu, 1);  /* 0C07D8EA mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s8)r4;  /* 0C07D8EC exts.b Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C07D8F0u, 2);  /* 0C07D8EE mov.l Rm,@-Rn */
	r10 = r11;  /* 0C07D8F0 mov Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07D8F4u, 2);  /* 0C07D8F2 mov.l Rm,@-Rn */
	r10 += r10;  /* 0C07D8F4 add Rm,Rn */
	IF(0x0C07D8F6u); r15 -= 4; W32(r15, PR); UPD(0x0C07D8F8u, 2);  /* 0C07D8F6 sts.l pr,@-Rn */
	r0 = r10;  /* 0C07D8F8 mov Rm,Rn */
	r3 = 0xC3C53EAu; UPD(0x0C07D8FCu, 2);  /* 0C07D8FA mov.l @(disp,pc),Rn */
	r12 = 0x0u;  /* 0C07D8FC mov #imm,Rn */
	IF(0x0C07D8FEu); r2 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C07D900u, 2);  /* 0C07D8FE mov.w @(r0,Rm),Rn */
	r0 = r2 & 0xFFFF;  /* 0C07D900 extu.w Rm,Rn */
	T = (s32)r12 >= (s32)r0;  /* 0C07D902 cmp/ge Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07D944u, 5); goto L_0C07D944; } goto L_0C07D908; }  /* 0C07D904 bt/s */
L_0C07D908: BLKS(0x0C07D908u);
	r8 = r11;  /* 0C07D908 mov Rm,Rn */
	r0 = 0x9u;  /* 0C07D90A mov #imm,Rn */
	r13 = 0xC073B10u; UPD(0x0C07D90Eu, 4);  /* 0C07D90C mov.l @(disp,pc),Rn */
	IF(0x0C07D90Eu); ARG0(0x480Du); { s32 s_ = (s32)r0; if (s_ >= 0) r8 <<= (s_ & 31); else if ((s_ & 31) == 0) r8 = 0; else r8 >>= ((~s_ & 31) + 1); }  /* 0C07D90E shld Rm,Rn */
	UPD(0x0C07D910u, 1);
L_0C07D910: BLKS(0x0C07D910u);
	r2 = 0xC22E2BEu; UPD(0x0C07D912u, 1);  /* 0C07D910 mov.l @(disp,pc),Rn */
	r0 = r8;  /* 0C07D912 mov Rm,Rn */
	IF(0x0C07D914u); r7 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C07D916u, 2);  /* 0C07D914 mov.w @(r0,Rm),Rn */
	r6 = 0x60u;  /* 0C07D916 mov #imm,Rn */
	MACL = (u32)(u16)r7 * (u32)(u16)r6;  /* 0C07D918 mulu.w Rm,Rn */
	r5 = 0xC3BC7CCu; UPD(0x0C07D91Cu, 4);  /* 0C07D91A mov.l @(disp,pc),Rn */
	IF(0x0C07D91Cu); r3 = MACL;  /* 0C07D91C sts macl,Rn */
	r3 += r5;  /* 0C07D91E add Rm,Rn */
	r1 = R32(r3); UPD(0x0C07D922u, 3);  /* 0C07D920 mov.l @Rm,Rn */
	r4 = 0x40000000u; UPD(0x0C07D924u, 1);  /* 0C07D922 mov.l @(disp,pc),Rn */
	T = (r1 & r4) == 0;  /* 0C07D924 tst Rm,Rn */
	{ u32 c_ = T; r3 += 0x44u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C07D934u, 4); goto L_0C07D934; } goto L_0C07D92A; }  /* 0C07D926 bt/s */
L_0C07D92A: BLKS(0x0C07D92Au);
	r4 = (u32)(s32)(s8)R8(r3); UPD(0x0C07D92Cu, 2);  /* 0C07D92A mov.b @Rm,Rn */
	r0 = r4 & 0xFF;  /* 0C07D92C extu.b Rm,Rn */
	T = r0 == r11;  /* 0C07D92E cmp/eq Rm,Rn */
	{ u32 c_ = T; r3 += 0xFFFFFFBCu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C07D970u, 5); goto L_0C07D970; } UPD(0x0C07D934u, 1); goto L_0C07D934; }  /* 0C07D930 bt/s */
L_0C07D934: BLKS(0x0C07D934u);
	r2 = 0xC3C53EAu; UPD(0x0C07D936u, 1);  /* 0C07D934 mov.l @(disp,pc),Rn */
	r0 = r10;  /* 0C07D936 mov Rm,Rn */
	IF(0x0C07D938u); r4 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C07D93Au, 2);  /* 0C07D938 mov.w @(r0,Rm),Rn */
	r9 += 0x1u;  /* 0C07D93A add #imm,Rn */
	r3 = r4 & 0xFFFF;  /* 0C07D93C extu.w Rm,Rn */
	T = (s32)r9 >= (s32)r3;  /* 0C07D93E cmp/ge Rm,Rn */
	{ u32 c_ = !T; r8 += 0x2u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C07D910u, 6); goto L_0C07D910; } UPD(0x0C07D944u, 1); goto L_0C07D944; }  /* 0C07D940 bf/s */
L_0C07D944: BLKS(0x0C07D944u);
	r8 = 0xC3C53EAu; UPD(0x0C07D946u, 1);  /* 0C07D944 mov.l @(disp,pc),Rn */
	r8 += r10;  /* 0C07D946 add Rm,Rn */
	r9 = (u32)(s32)(s16)R16(r8); UPD(0x0C07D94Au, 2);  /* 0C07D948 mov.w @Rm,Rn */
	r9 -= r12;  /* 0C07D94A sub Rm,Rn */
	W16(r8, r9); UPD(0x0C07D94Eu, 2);  /* 0C07D94C mov.w Rm,@Rn */
	r15 = r14;  /* 0C07D94E mov Rm,Rn */
	IF(0x0C07D950u); PR = R32(r15); r15 += 4; UPD(0x0C07D952u, 2);  /* 0C07D950 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07D954u, 1);  /* 0C07D952 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07D956u, 1);  /* 0C07D954 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07D958u, 1);  /* 0C07D956 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07D95Au, 1);  /* 0C07D958 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07D95Cu, 1);  /* 0C07D95A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07D95Eu, 1);  /* 0C07D95C mov.l @Rm+,Rn */
	IF(0x0C07D95Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07D95E rts */
L_0C07D970: BLKS(0x0C07D970u);
	r0 = R32(r3 + 0x4u); UPD(0x0C07D972u, 1);  /* 0C07D970 mov.l @(disp,Rm),Rn */
	T = r0 == 0x7u;  /* 0C07D972 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C07D934u, 4); goto L_0C07D934; }  /* 0C07D974 bt */
L_0C07D976: BLKS(0x0C07D976u);
	r7 = R32(r3 + 0x18u); UPD(0x0C07D978u, 1);  /* 0C07D976 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C07D978 add #imm,Rn */
	r6 = 0xC2289E8u; UPD(0x0C07D97Cu, 2);  /* 0C07D97A mov.l @(disp,pc),Rn */
	r12 += 0x1u;  /* 0C07D97C add #imm,Rn */
	W32(r6, r7); UPD(0x0C07D980u, 2);  /* 0C07D97E mov.l Rm,@Rn */
	r5 = 0xC3C86B0u; UPD(0x0C07D982u, 1);  /* 0C07D980 mov.l @(disp,pc),Rn */
	r1 = R32(r3 + 0x20u); UPD(0x0C07D984u, 1);  /* 0C07D982 mov.l @(disp,Rm),Rn */
	W32(r5, r1); UPD(0x0C07D986u, 1);  /* 0C07D984 mov.l Rm,@Rn */
	r4 = R32(r3 + 0x38u); UPD(0x0C07D988u, 1);  /* 0C07D986 mov.l @(disp,Rm),Rn */
	r5 = R32(r3 + 0x28u); UPD(0x0C07D98Au, 1);  /* 0C07D988 mov.l @(disp,Rm),Rn */
	r6 = R32(r3 + 0x2Cu); UPD(0x0C07D98Cu, 1);  /* 0C07D98A mov.l @(disp,Rm),Rn */
	r7 = R32(r3 + 0x3Cu); UPD(0x0C07D98Eu, 1);  /* 0C07D98C mov.l @(disp,Rm),Rn */
	r2 = R32(r3 + 0x24u); UPD(0x0C07D990u, 1);  /* 0C07D98E mov.l @(disp,Rm),Rn */
	IF(0x0C07D990u); { u32 t_ = r13; PR = 0x0C07D994u; W32(r15, r2); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C073B10, 0x0C073B10u, 0x0C07D994u); }  /* 0C07D990 jsr @Rn */
L_0C07D994: BLKS(0x0C07D994u);
	{ r15 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C07D934u, 3); goto L_0C07D934; }  /* 0C07D994 bra */
}

/* FUN_0c07d9c0 */
void blk_f_0C07D9C0(sh3_t *c)
{
	LOCALS;
L_0C07D9C0: BLKS(0x0C07D9C0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07D9C2u, 1);  /* 0C07D9C0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07D9C4u, 1);  /* 0C07D9C2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07D9C6u, 1);  /* 0C07D9C4 mov.l Rm,@-Rn */
	r9 = 0x0u;  /* 0C07D9C6 mov #imm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07D9CAu, 2);  /* 0C07D9C8 mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s8)r4;  /* 0C07D9CA exts.b Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07D9CEu, 2);  /* 0C07D9CC mov.l Rm,@-Rn */
	r11 = r10;  /* 0C07D9CE mov Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07D9D2u, 2);  /* 0C07D9D0 mov.l Rm,@-Rn */
	r11 += r11;  /* 0C07D9D2 add Rm,Rn */
	IF(0x0C07D9D4u); r15 -= 4; W32(r15, PR); UPD(0x0C07D9D6u, 2);  /* 0C07D9D4 sts.l pr,@-Rn */
	r0 = r11;  /* 0C07D9D6 mov Rm,Rn */
	r3 = 0xC3C53EAu; UPD(0x0C07D9DAu, 2);  /* 0C07D9D8 mov.l @(disp,pc),Rn */
	IF(0x0C07D9DAu); r2 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C07D9DCu, 1);  /* 0C07D9DA mov.w @(r0,Rm),Rn */
	r0 = r2 & 0xFFFF;  /* 0C07D9DC extu.w Rm,Rn */
	T = (s32)r9 >= (s32)r0;  /* 0C07D9DE cmp/ge Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07DA20u, 5); goto L_0C07DA20; } goto L_0C07D9E4; }  /* 0C07D9E0 bt/s */
L_0C07D9E4: BLKS(0x0C07D9E4u);
	r8 = r10;  /* 0C07D9E4 mov Rm,Rn */
	r0 = 0x9u;  /* 0C07D9E6 mov #imm,Rn */
	r12 = 0xC073B10u; UPD(0x0C07D9EAu, 4);  /* 0C07D9E8 mov.l @(disp,pc),Rn */
	IF(0x0C07D9EAu); ARG0(0x480Du); { s32 s_ = (s32)r0; if (s_ >= 0) r8 <<= (s_ & 31); else if ((s_ & 31) == 0) r8 = 0; else r8 >>= ((~s_ & 31) + 1); }  /* 0C07D9EA shld Rm,Rn */
	UPD(0x0C07D9ECu, 1);
L_0C07D9EC: BLKS(0x0C07D9ECu);
	r2 = 0xC22E2BEu; UPD(0x0C07D9EEu, 1);  /* 0C07D9EC mov.l @(disp,pc),Rn */
	r0 = r8;  /* 0C07D9EE mov Rm,Rn */
	IF(0x0C07D9F0u); r7 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C07D9F2u, 2);  /* 0C07D9F0 mov.w @(r0,Rm),Rn */
	r6 = 0x60u;  /* 0C07D9F2 mov #imm,Rn */
	MACL = (u32)(u16)r7 * (u32)(u16)r6;  /* 0C07D9F4 mulu.w Rm,Rn */
	r5 = 0xC3BC7CCu; UPD(0x0C07D9F8u, 4);  /* 0C07D9F6 mov.l @(disp,pc),Rn */
	IF(0x0C07D9F8u); r3 = MACL;  /* 0C07D9F8 sts macl,Rn */
	r3 += r5;  /* 0C07D9FA add Rm,Rn */
	r1 = R32(r3); UPD(0x0C07D9FEu, 3);  /* 0C07D9FC mov.l @Rm,Rn */
	r4 = 0x40000000u; UPD(0x0C07DA00u, 1);  /* 0C07D9FE mov.l @(disp,pc),Rn */
	T = (r1 & r4) == 0;  /* 0C07DA00 tst Rm,Rn */
	{ u32 c_ = T; r3 += 0x44u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C07DA10u, 4); goto L_0C07DA10; } goto L_0C07DA06; }  /* 0C07DA02 bt/s */
L_0C07DA06: BLKS(0x0C07DA06u);
	r4 = (u32)(s32)(s8)R8(r3); UPD(0x0C07DA08u, 2);  /* 0C07DA06 mov.b @Rm,Rn */
	r0 = r4 & 0xFF;  /* 0C07DA08 extu.b Rm,Rn */
	T = r0 == r10;  /* 0C07DA0A cmp/eq Rm,Rn */
	{ u32 c_ = T; r3 += 0xFFFFFFBCu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C07DA40u, 5); goto L_0C07DA40; } UPD(0x0C07DA10u, 1); goto L_0C07DA10; }  /* 0C07DA0C bt/s */
L_0C07DA10: BLKS(0x0C07DA10u);
	r5 = 0xC3C53EAu; UPD(0x0C07DA12u, 1);  /* 0C07DA10 mov.l @(disp,pc),Rn */
	r0 = r11;  /* 0C07DA12 mov Rm,Rn */
	IF(0x0C07DA14u); r4 = (u32)(s32)(s16)R16(r0 + r5); UPD(0x0C07DA16u, 2);  /* 0C07DA14 mov.w @(r0,Rm),Rn */
	r9 += 0x1u;  /* 0C07DA16 add #imm,Rn */
	r3 = r4 & 0xFFFF;  /* 0C07DA18 extu.w Rm,Rn */
	T = (s32)r9 >= (s32)r3;  /* 0C07DA1A cmp/ge Rm,Rn */
	{ u32 c_ = !T; r8 += 0x2u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C07D9ECu, 6); goto L_0C07D9EC; } UPD(0x0C07DA20u, 1); goto L_0C07DA20; }  /* 0C07DA1C bf/s */
L_0C07DA20: BLKS(0x0C07DA20u);
	r15 = r14;  /* 0C07DA20 mov Rm,Rn */
	IF(0x0C07DA22u); PR = R32(r15); r15 += 4; UPD(0x0C07DA24u, 2);  /* 0C07DA22 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07DA26u, 1);  /* 0C07DA24 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07DA28u, 1);  /* 0C07DA26 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07DA2Au, 1);  /* 0C07DA28 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07DA2Cu, 1);  /* 0C07DA2A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07DA2Eu, 1);  /* 0C07DA2C mov.l @Rm+,Rn */
	IF(0x0C07DA2Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07DA2E rts */
L_0C07DA40: BLKS(0x0C07DA40u);
	r0 = R32(r3 + 0x4u); UPD(0x0C07DA42u, 1);  /* 0C07DA40 mov.l @(disp,Rm),Rn */
	T = r0 == 0x7u;  /* 0C07DA42 cmp/eq #imm,r0 */
	{ u32 c_ = !T; r3 += 0x40u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C07DA10u, 4); goto L_0C07DA10; } goto L_0C07DA48; }  /* 0C07DA44 bf/s */
L_0C07DA48: BLKS(0x0C07DA48u);
	r5 = R32(r3 + 0x1Cu); UPD(0x0C07DA4Au, 2);  /* 0C07DA48 mov.l @(disp,Rm),Rn */
	T = (r5 & r5) == 0;  /* 0C07DA4A tst Rm,Rn */
	{ u32 c_ = !T; r3 += 0xFFFFFFC0u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C07DA10u, 4); goto L_0C07DA10; } goto L_0C07DA50; }  /* 0C07DA4C bf/s */
L_0C07DA50: BLKS(0x0C07DA50u);
	r0 = R32(r3 + 0x18u); UPD(0x0C07DA52u, 2);  /* 0C07DA50 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C07DA52 add #imm,Rn */
	r7 = 0xC2289E8u; UPD(0x0C07DA56u, 2);  /* 0C07DA54 mov.l @(disp,pc),Rn */
	W32(r7, r0); UPD(0x0C07DA58u, 1);  /* 0C07DA56 mov.l Rm,@Rn */
	r6 = 0xC3C86B0u; UPD(0x0C07DA5Au, 1);  /* 0C07DA58 mov.l @(disp,pc),Rn */
	r1 = R32(r3 + 0x20u); UPD(0x0C07DA5Cu, 1);  /* 0C07DA5A mov.l @(disp,Rm),Rn */
	W32(r6, r1); UPD(0x0C07DA5Eu, 1);  /* 0C07DA5C mov.l Rm,@Rn */
	r4 = R32(r3 + 0x38u); UPD(0x0C07DA60u, 1);  /* 0C07DA5E mov.l @(disp,Rm),Rn */
	r5 = R32(r3 + 0x28u); UPD(0x0C07DA62u, 1);  /* 0C07DA60 mov.l @(disp,Rm),Rn */
	r6 = R32(r3 + 0x2Cu); UPD(0x0C07DA64u, 1);  /* 0C07DA62 mov.l @(disp,Rm),Rn */
	r7 = R32(r3 + 0x3Cu); UPD(0x0C07DA66u, 1);  /* 0C07DA64 mov.l @(disp,Rm),Rn */
	r2 = R32(r3 + 0x24u); UPD(0x0C07DA68u, 1);  /* 0C07DA66 mov.l @(disp,Rm),Rn */
	IF(0x0C07DA68u); { u32 t_ = r12; PR = 0x0C07DA6Cu; W32(r15, r2); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C073B10, 0x0C073B10u, 0x0C07DA6Cu); }  /* 0C07DA68 jsr @Rn */
L_0C07DA6C: BLKS(0x0C07DA6Cu);
	{ r15 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C07DA10u, 3); goto L_0C07DA10; }  /* 0C07DA6C bra */
}

/* FUN_0c07da90 */
void blk_f_0C07DA90(sh3_t *c)
{
	LOCALS;
L_0C07DA90: BLKS(0x0C07DA90u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07DA92u, 1);  /* 0C07DA90 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07DA94u, 1);  /* 0C07DA92 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07DA96u, 1);  /* 0C07DA94 mov.l Rm,@-Rn */
	r9 = 0x0u;  /* 0C07DA96 mov #imm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07DA9Au, 2);  /* 0C07DA98 mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s8)r4;  /* 0C07DA9A exts.b Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07DA9Eu, 2);  /* 0C07DA9C mov.l Rm,@-Rn */
	r11 = r10;  /* 0C07DA9E mov Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07DAA2u, 2);  /* 0C07DAA0 mov.l Rm,@-Rn */
	r11 += r11;  /* 0C07DAA2 add Rm,Rn */
	IF(0x0C07DAA4u); r15 -= 4; W32(r15, PR); UPD(0x0C07DAA6u, 2);  /* 0C07DAA4 sts.l pr,@-Rn */
	r0 = r11;  /* 0C07DAA6 mov Rm,Rn */
	r3 = 0xC2860B2u; UPD(0x0C07DAAAu, 2);  /* 0C07DAA8 mov.l @(disp,pc),Rn */
	IF(0x0C07DAAAu); r2 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C07DAACu, 1);  /* 0C07DAAA mov.w @(r0,Rm),Rn */
	r0 = r2 & 0xFFFF;  /* 0C07DAAC extu.w Rm,Rn */
	T = (s32)r9 >= (s32)r0;  /* 0C07DAAE cmp/ge Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07DAE6u, 5); goto L_0C07DAE6; } goto L_0C07DAB4; }  /* 0C07DAB0 bt/s */
L_0C07DAB4: BLKS(0x0C07DAB4u);
	r8 = r10;  /* 0C07DAB4 mov Rm,Rn */
	r4 = 0x7u;  /* 0C07DAB6 mov #imm,Rn */
	IF(0x0C07DAB8u); ARG0(0x484Du); { s32 s_ = (s32)r4; if (s_ >= 0) r8 <<= (s_ & 31); else if ((s_ & 31) == 0) r8 = 0; else r8 >>= ((~s_ & 31) + 1); }  /* 0C07DAB8 shld Rm,Rn */
	r0 = 0xC2B0810u; UPD(0x0C07DABCu, 5);  /* 0C07DABA mov.l @(disp,pc),Rn */
	r12 = 0xC073B10u; UPD(0x0C07DABEu, 1);  /* 0C07DABC mov.l @(disp,pc),Rn */
	r8 += r0;  /* 0C07DABE add Rm,Rn */
	UPD(0x0C07DAC0u, 1);
L_0C07DAC0: BLKS(0x0C07DAC0u);
	{ u32 v_ = (u32)(s32)(s16)R16(r8); r8 += 2; r1 = v_; } UPD(0x0C07DAC2u, 1);  /* 0C07DAC0 mov.w @Rm+,Rn */
	r3 = 0x60u;  /* 0C07DAC2 mov #imm,Rn */
	MACL = (u32)(u16)r1 * (u32)(u16)r3;  /* 0C07DAC4 mulu.w Rm,Rn */
	r7 = 0xC3C27CCu; UPD(0x0C07DAC8u, 4);  /* 0C07DAC6 mov.l @(disp,pc),Rn */
	IF(0x0C07DAC8u); r3 = MACL;  /* 0C07DAC8 sts macl,Rn */
	r3 += r7;  /* 0C07DACA add Rm,Rn */
	r3 += 0x44u;  /* 0C07DACC add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r3); UPD(0x0C07DAD0u, 4);  /* 0C07DACE mov.b @Rm,Rn */
	r5 = r6 & 0xFF;  /* 0C07DAD0 extu.b Rm,Rn */
	T = r5 == r10;  /* 0C07DAD2 cmp/eq Rm,Rn */
	{ u32 c_ = T; r3 += 0xFFFFFFBCu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C07DB00u, 5); goto L_0C07DB00; } UPD(0x0C07DAD8u, 1); goto L_0C07DAD8; }  /* 0C07DAD4 bt/s */
L_0C07DAD8: BLKS(0x0C07DAD8u);
	r2 = 0xC2860B2u; UPD(0x0C07DADAu, 1);  /* 0C07DAD8 mov.l @(disp,pc),Rn */
	r0 = r11;  /* 0C07DADA mov Rm,Rn */
	IF(0x0C07DADCu); r3 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C07DADEu, 2);  /* 0C07DADC mov.w @(r0,Rm),Rn */
	r9 += 0x1u;  /* 0C07DADE add #imm,Rn */
	r7 = r3 & 0xFFFF;  /* 0C07DAE0 extu.w Rm,Rn */
	T = (s32)r9 >= (s32)r7;  /* 0C07DAE2 cmp/ge Rm,Rn */
	if (!T) { UPD(0x0C07DAC0u, 6); goto L_0C07DAC0; }  /* 0C07DAE4 bf */
L_0C07DAE6: BLKS(0x0C07DAE6u);
	r15 = r14;  /* 0C07DAE6 mov Rm,Rn */
	IF(0x0C07DAE8u); PR = R32(r15); r15 += 4; UPD(0x0C07DAEAu, 2);  /* 0C07DAE8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07DAECu, 1);  /* 0C07DAEA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07DAEEu, 1);  /* 0C07DAEC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07DAF0u, 1);  /* 0C07DAEE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07DAF2u, 1);  /* 0C07DAF0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07DAF4u, 1);  /* 0C07DAF2 mov.l @Rm+,Rn */
	IF(0x0C07DAF4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07DAF4 rts */
L_0C07DB00: BLKS(0x0C07DB00u);
	r6 = R32(r3 + 0x18u); UPD(0x0C07DB02u, 1);  /* 0C07DB00 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C07DB02 add #imm,Rn */
	r5 = 0xC2289E8u; UPD(0x0C07DB06u, 2);  /* 0C07DB04 mov.l @(disp,pc),Rn */
	W32(r5, r6); UPD(0x0C07DB08u, 1);  /* 0C07DB06 mov.l Rm,@Rn */
	r0 = 0xC3C86B0u; UPD(0x0C07DB0Au, 1);  /* 0C07DB08 mov.l @(disp,pc),Rn */
	r4 = R32(r3 + 0x20u); UPD(0x0C07DB0Cu, 1);  /* 0C07DB0A mov.l @(disp,Rm),Rn */
	W32(r0, r4); UPD(0x0C07DB0Eu, 1);  /* 0C07DB0C mov.l Rm,@Rn */
	r4 = R32(r3 + 0x38u); UPD(0x0C07DB10u, 1);  /* 0C07DB0E mov.l @(disp,Rm),Rn */
	r5 = R32(r3 + 0x28u); UPD(0x0C07DB12u, 1);  /* 0C07DB10 mov.l @(disp,Rm),Rn */
	r6 = R32(r3 + 0x2Cu); UPD(0x0C07DB14u, 1);  /* 0C07DB12 mov.l @(disp,Rm),Rn */
	r7 = R32(r3 + 0x3Cu); UPD(0x0C07DB16u, 1);  /* 0C07DB14 mov.l @(disp,Rm),Rn */
	r2 = R32(r3 + 0x24u); UPD(0x0C07DB18u, 1);  /* 0C07DB16 mov.l @(disp,Rm),Rn */
	IF(0x0C07DB18u); { u32 t_ = r12; PR = 0x0C07DB1Cu; W32(r15, r2); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C073B10, 0x0C073B10u, 0x0C07DB1Cu); }  /* 0C07DB18 jsr @Rn */
L_0C07DB1C: BLKS(0x0C07DB1Cu);
	{ r15 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C07DAD8u, 3); goto L_0C07DAD8; }  /* 0C07DB1C bra */
}

/* FUN_0c07db40 */
void blk_f_0C07DB40(sh3_t *c)
{
	LOCALS;
L_0C07DB40: BLKS(0x0C07DB40u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07DB42u, 1);  /* 0C07DB40 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07DB44u, 1);  /* 0C07DB42 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07DB46u, 1);  /* 0C07DB44 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07DB48u, 1);  /* 0C07DB46 mov.l Rm,@-Rn */
	r10 = 0x0u;  /* 0C07DB48 mov #imm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07DB4Cu, 2);  /* 0C07DB4A mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C07DB4Eu, 1);  /* 0C07DB4C mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07DB50u, 1);  /* 0C07DB4E mov.l Rm,@-Rn */
	r8 = 0xC3BC7CCu; UPD(0x0C07DB52u, 1);  /* 0C07DB50 mov.l @(disp,pc),Rn */
	IF(0x0C07DB52u); r15 -= 4; W32(r15, PR); UPD(0x0C07DB54u, 1);  /* 0C07DB52 sts.l pr,@-Rn */
	r11 = 0xC22E2BEu; UPD(0x0C07DB56u, 1);  /* 0C07DB54 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C07DB56 mov Rm,Rn */
	r12 = 0xC2A7A9Cu; UPD(0x0C07DB5Au, 2);  /* 0C07DB58 mov.l @(disp,pc),Rn */
	r13 = 0xC076AF0u; UPD(0x0C07DB5Cu, 1);  /* 0C07DB5A mov.l @(disp,pc),Rn */
L_0C07DB5C: BLKS(0x0C07DB5Cu);
	r7 = R32(r8); UPD(0x0C07DB5Eu, 1);  /* 0C07DB5C mov.l @Rm,Rn */
	r0 = 0x40000000u; UPD(0x0C07DB60u, 1);  /* 0C07DB5E mov.l @(disp,pc),Rn */
	T = (r7 & r0) == 0;  /* 0C07DB60 tst Rm,Rn */
	if (T) { UPD(0x0C07DBB8u, 4); goto L_0C07DBB8; }  /* 0C07DB62 bt */
L_0C07DB64: BLKS(0x0C07DB64u);
	r8 += 0x44u;  /* 0C07DB64 add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r8); UPD(0x0C07DB68u, 2);  /* 0C07DB66 mov.b @Rm,Rn */
	r2 = 0x7u;  /* 0C07DB68 mov #imm,Rn */
	r0 = r6;  /* 0C07DB6A mov Rm,Rn */
	r0 &= 0x1Fu;  /* 0C07DB6C and #imm,r0 */
	r4 = 0xC3C53EAu; UPD(0x0C07DB70u, 4);  /* 0C07DB6E mov.l @(disp,pc),Rn */
	r0 += r0;  /* 0C07DB70 add Rm,Rn */
	r4 += r0;  /* 0C07DB72 add Rm,Rn */
	r3 = (u32)(s32)(s16)R16(r4); UPD(0x0C07DB76u, 3);  /* 0C07DB74 mov.w @Rm,Rn */
	IF(0x0C07DB76u); ARG0(0x402Du); { s32 s_ = (s32)r2; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C07DB76 shld Rm,Rn */
	r1 = r3 & 0xFFFF;  /* 0C07DB78 extu.w Rm,Rn */
	r0 += r1;  /* 0C07DB7A add Rm,Rn */
	r0 += r0;  /* 0C07DB7C add Rm,Rn */
	IF(0x0C07DB7Eu); W16(r0 + r11, r10); UPD(0x0C07DB80u, 5);  /* 0C07DB7E mov.w Rm,@(r0,Rn) */
	r3 += 0x1u;  /* 0C07DB80 add #imm,Rn */
	r0 = r7;  /* 0C07DB82 mov Rm,Rn */
	r0 &= 0x4u;  /* 0C07DB84 and #imm,r0 */
	W16(r4, r3); UPD(0x0C07DB88u, 4);  /* 0C07DB86 mov.w Rm,@Rn */
	T = (r0 & r0) == 0;  /* 0C07DB88 tst Rm,Rn */
	{ u32 c_ = T; r8 += 0xFFFFFFBCu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C07DBB8u, 4); goto L_0C07DBB8; } goto L_0C07DB8E; }  /* 0C07DB8A bt/s */
L_0C07DB8E: BLKS(0x0C07DB8Eu);
	r0 = 0x10u;  /* 0C07DB8E mov #imm,Rn */
	r7 &= r0;  /* 0C07DB90 and Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C07DB92 tst Rm,Rn */
	if (T) { UPD(0x0C07DBE0u, 7); goto L_0C07DBE0; }  /* 0C07DB94 bt */
L_0C07DB96: BLKS(0x0C07DB96u);
	r9 = r8;  /* 0C07DB96 mov Rm,Rn */
	r9 += 0x45u;  /* 0C07DB98 add #imm,Rn */
	W8(r9, r6); UPD(0x0C07DB9Cu, 3);  /* 0C07DB9A mov.b Rm,@Rn */
L_0C07DB9C: BLKS(0x0C07DB9Cu);
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C07DB9Eu, 1);  /* 0C07DB9C mov.b @Rm,Rn */
	r4 = 0x7u;  /* 0C07DB9E mov #imm,Rn */
	r0 &= 0x1Fu;  /* 0C07DBA0 and #imm,r0 */
	r6 = 0xC29CF40u; UPD(0x0C07DBA4u, 3);  /* 0C07DBA2 mov.l @(disp,pc),Rn */
	r0 += r0;  /* 0C07DBA4 add Rm,Rn */
	r6 += r0;  /* 0C07DBA6 add Rm,Rn */
	r7 = (u32)(s32)(s16)R16(r6); UPD(0x0C07DBAAu, 3);  /* 0C07DBA8 mov.w @Rm,Rn */
	IF(0x0C07DBAAu); ARG0(0x404Du); { s32 s_ = (s32)r4; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C07DBAA shld Rm,Rn */
	r9 = r7 & 0xFFFF;  /* 0C07DBAC extu.w Rm,Rn */
	r0 += r9;  /* 0C07DBAE add Rm,Rn */
	r0 += r0;  /* 0C07DBB0 add Rm,Rn */
	r7 += 0x1u;  /* 0C07DBB2 add #imm,Rn */
	IF(0x0C07DBB4u); W16(r0 + r12, r10); UPD(0x0C07DBB6u, 6);  /* 0C07DBB4 mov.w Rm,@(r0,Rn) */
	W16(r6, r7); UPD(0x0C07DBB8u, 1);  /* 0C07DBB6 mov.w Rm,@Rn */
L_0C07DBB8: BLKS(0x0C07DBB8u);
	r5 = 0xFFu; UPD(0x0C07DBBAu, 1);  /* 0C07DBB8 mov.w @(disp,pc),Rn */
	r10 += 0x1u;  /* 0C07DBBA add #imm,Rn */
	T = (s32)r10 > (s32)r5;  /* 0C07DBBC cmp/gt Rm,Rn */
	{ u32 c_ = !T; r8 += 0x60u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C07DB5Cu, 5); goto L_0C07DB5C; } goto L_0C07DBC2; }  /* 0C07DBBE bf/s */
L_0C07DBC2: BLKS(0x0C07DBC2u);
	r15 = r14;  /* 0C07DBC2 mov Rm,Rn */
	IF(0x0C07DBC4u); PR = R32(r15); r15 += 4; UPD(0x0C07DBC6u, 3);  /* 0C07DBC4 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07DBC8u, 1);  /* 0C07DBC6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07DBCAu, 1);  /* 0C07DBC8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07DBCCu, 1);  /* 0C07DBCA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07DBCEu, 1);  /* 0C07DBCC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07DBD0u, 1);  /* 0C07DBCE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07DBD2u, 1);  /* 0C07DBD0 mov.l @Rm+,Rn */
	IF(0x0C07DBD2u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07DBD2 rts */
L_0C07DBE0: BLKS(0x0C07DBE0u);
	r9 = r8;  /* 0C07DBE0 mov Rm,Rn */
	r9 += 0x45u;  /* 0C07DBE2 add #imm,Rn */
	r4 = R32(r8 + 0x28u); UPD(0x0C07DBE6u, 3);  /* 0C07DBE4 mov.l @(disp,Rm),Rn */
	r6 = r6 & 0xFF;  /* 0C07DBE6 extu.b Rm,Rn */
	IF(0x0C07DBE8u); { u32 t_ = r13; PR = 0x0C07DBECu; r5 = R32(r8 + 0x2Cu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C076AF0, 0x0C076AF0u, 0x0C07DBECu); }  /* 0C07DBE8 jsr @Rn */
L_0C07DBEC: BLKS(0x0C07DBECu);
	{ W8(r9, r0); /* slot mov.b Rm,@Rn */ UPD(0x0C07DB9Cu, 3); goto L_0C07DB9C; }  /* 0C07DBEC bra */
}

/* FUN_0c07dc10 */
void blk_f_0C07DC10(sh3_t *c)
{
	LOCALS;
L_0C07DC10: BLKS(0x0C07DC10u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07DC12u, 1);  /* 0C07DC10 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07DC14u, 1);  /* 0C07DC12 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07DC16u, 1);  /* 0C07DC14 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07DC18u, 1);  /* 0C07DC16 mov.l Rm,@-Rn */
	r10 = 0x0u;  /* 0C07DC18 mov #imm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07DC1Cu, 2);  /* 0C07DC1A mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C07DC1Eu, 1);  /* 0C07DC1C mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07DC20u, 1);  /* 0C07DC1E mov.l Rm,@-Rn */
	r8 = 0xC3C27CCu; UPD(0x0C07DC22u, 1);  /* 0C07DC20 mov.l @(disp,pc),Rn */
	IF(0x0C07DC22u); r15 -= 4; W32(r15, PR); UPD(0x0C07DC24u, 1);  /* 0C07DC22 sts.l pr,@-Rn */
	r11 = 0xC2B0810u; UPD(0x0C07DC26u, 1);  /* 0C07DC24 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C07DC26 mov Rm,Rn */
	r12 = 0xC23B8A0u; UPD(0x0C07DC2Au, 2);  /* 0C07DC28 mov.l @(disp,pc),Rn */
	r13 = 0xC076AF0u; UPD(0x0C07DC2Cu, 1);  /* 0C07DC2A mov.l @(disp,pc),Rn */
L_0C07DC2C: BLKS(0x0C07DC2Cu);
	r7 = R32(r8); UPD(0x0C07DC2Eu, 1);  /* 0C07DC2C mov.l @Rm,Rn */
	r0 = 0x40000000u; UPD(0x0C07DC30u, 1);  /* 0C07DC2E mov.l @(disp,pc),Rn */
	T = (r7 & r0) == 0;  /* 0C07DC30 tst Rm,Rn */
	if (T) { UPD(0x0C07DC88u, 4); goto L_0C07DC88; }  /* 0C07DC32 bt */
L_0C07DC34: BLKS(0x0C07DC34u);
	r8 += 0x44u;  /* 0C07DC34 add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r8); UPD(0x0C07DC38u, 2);  /* 0C07DC36 mov.b @Rm,Rn */
	r2 = 0x5u;  /* 0C07DC38 mov #imm,Rn */
	r0 = r6;  /* 0C07DC3A mov Rm,Rn */
	r0 &= 0x1Fu;  /* 0C07DC3C and #imm,r0 */
	r4 = 0xC2860B2u; UPD(0x0C07DC40u, 4);  /* 0C07DC3E mov.l @(disp,pc),Rn */
	r0 += r0;  /* 0C07DC40 add Rm,Rn */
	r4 += r0;  /* 0C07DC42 add Rm,Rn */
	r3 = (u32)(s32)(s16)R16(r4); UPD(0x0C07DC46u, 3);  /* 0C07DC44 mov.w @Rm,Rn */
	IF(0x0C07DC46u); ARG0(0x402Du); { s32 s_ = (s32)r2; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C07DC46 shld Rm,Rn */
	r1 = r3 & 0xFFFF;  /* 0C07DC48 extu.w Rm,Rn */
	r0 += r1;  /* 0C07DC4A add Rm,Rn */
	r0 += r0;  /* 0C07DC4C add Rm,Rn */
	IF(0x0C07DC4Eu); W16(r0 + r11, r10); UPD(0x0C07DC50u, 5);  /* 0C07DC4E mov.w Rm,@(r0,Rn) */
	r3 += 0x1u;  /* 0C07DC50 add #imm,Rn */
	r0 = r7;  /* 0C07DC52 mov Rm,Rn */
	r0 &= 0x4u;  /* 0C07DC54 and #imm,r0 */
	W16(r4, r3); UPD(0x0C07DC58u, 4);  /* 0C07DC56 mov.w Rm,@Rn */
	T = (r0 & r0) == 0;  /* 0C07DC58 tst Rm,Rn */
	{ u32 c_ = T; r8 += 0xFFFFFFBCu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C07DC88u, 4); goto L_0C07DC88; } goto L_0C07DC5E; }  /* 0C07DC5A bt/s */
L_0C07DC5E: BLKS(0x0C07DC5Eu);
	r0 = 0x10u;  /* 0C07DC5E mov #imm,Rn */
	r7 &= r0;  /* 0C07DC60 and Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C07DC62 tst Rm,Rn */
	if (T) { UPD(0x0C07DCB0u, 7); goto L_0C07DCB0; }  /* 0C07DC64 bt */
L_0C07DC66: BLKS(0x0C07DC66u);
	r9 = r8;  /* 0C07DC66 mov Rm,Rn */
	r9 += 0x45u;  /* 0C07DC68 add #imm,Rn */
	W8(r9, r6); UPD(0x0C07DC6Cu, 3);  /* 0C07DC6A mov.b Rm,@Rn */
L_0C07DC6C: BLKS(0x0C07DC6Cu);
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C07DC6Eu, 1);  /* 0C07DC6C mov.b @Rm,Rn */
	r4 = 0x5u;  /* 0C07DC6E mov #imm,Rn */
	r0 &= 0x1Fu;  /* 0C07DC70 and #imm,r0 */
	r6 = 0xC22E260u; UPD(0x0C07DC74u, 3);  /* 0C07DC72 mov.l @(disp,pc),Rn */
	r0 += r0;  /* 0C07DC74 add Rm,Rn */
	r6 += r0;  /* 0C07DC76 add Rm,Rn */
	r7 = (u32)(s32)(s16)R16(r6); UPD(0x0C07DC7Au, 3);  /* 0C07DC78 mov.w @Rm,Rn */
	IF(0x0C07DC7Au); ARG0(0x404Du); { s32 s_ = (s32)r4; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C07DC7A shld Rm,Rn */
	r9 = r7 & 0xFFFF;  /* 0C07DC7C extu.w Rm,Rn */
	r0 += r9;  /* 0C07DC7E add Rm,Rn */
	r0 += r0;  /* 0C07DC80 add Rm,Rn */
	r7 += 0x1u;  /* 0C07DC82 add #imm,Rn */
	IF(0x0C07DC84u); W16(r0 + r12, r10); UPD(0x0C07DC86u, 6);  /* 0C07DC84 mov.w Rm,@(r0,Rn) */
	W16(r6, r7); UPD(0x0C07DC88u, 1);  /* 0C07DC86 mov.w Rm,@Rn */
L_0C07DC88: BLKS(0x0C07DC88u);
	r10 += 0x1u;  /* 0C07DC88 add #imm,Rn */
	r5 = 0x3Fu;  /* 0C07DC8A mov #imm,Rn */
	T = (s32)r10 > (s32)r5;  /* 0C07DC8C cmp/gt Rm,Rn */
	{ u32 c_ = !T; r8 += 0x60u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C07DC2Cu, 6); goto L_0C07DC2C; } goto L_0C07DC92; }  /* 0C07DC8E bf/s */
L_0C07DC92: BLKS(0x0C07DC92u);
	r15 = r14;  /* 0C07DC92 mov Rm,Rn */
	IF(0x0C07DC94u); PR = R32(r15); r15 += 4; UPD(0x0C07DC96u, 3);  /* 0C07DC94 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07DC98u, 1);  /* 0C07DC96 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07DC9Au, 1);  /* 0C07DC98 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07DC9Cu, 1);  /* 0C07DC9A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07DC9Eu, 1);  /* 0C07DC9C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07DCA0u, 1);  /* 0C07DC9E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07DCA2u, 1);  /* 0C07DCA0 mov.l @Rm+,Rn */
	IF(0x0C07DCA2u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07DCA2 rts */
L_0C07DCB0: BLKS(0x0C07DCB0u);
	r9 = r8;  /* 0C07DCB0 mov Rm,Rn */
	r9 += 0x45u;  /* 0C07DCB2 add #imm,Rn */
	r4 = R32(r8 + 0x28u); UPD(0x0C07DCB6u, 3);  /* 0C07DCB4 mov.l @(disp,Rm),Rn */
	r6 = r6 & 0xFF;  /* 0C07DCB6 extu.b Rm,Rn */
	IF(0x0C07DCB8u); { u32 t_ = r13; PR = 0x0C07DCBCu; r5 = R32(r8 + 0x2Cu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C076AF0, 0x0C076AF0u, 0x0C07DCBCu); }  /* 0C07DCB8 jsr @Rn */
L_0C07DCBC: BLKS(0x0C07DCBCu);
	{ W8(r9, r0); /* slot mov.b Rm,@Rn */ UPD(0x0C07DC6Cu, 3); goto L_0C07DC6C; }  /* 0C07DCBC bra */
}

/* FUN_0c07dce0 */
void blk_f_0C07DCE0(sh3_t *c)
{
	LOCALS;
L_0C07DCE0: BLKS(0x0C07DCE0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07DCE2u, 1);  /* 0C07DCE0 mov.l Rm,@-Rn */
	r7 = (u32)(s32)(s8)r7;  /* 0C07DCE2 exts.b Rm,Rn */
	r2 = 0xFE000000u; UPD(0x0C07DCE6u, 2);  /* 0C07DCE4 mov.l @(disp,pc),Rn */
	IF(0x0C07DCE6u); r15 -= 4; W32(r15, PR); UPD(0x0C07DCE8u, 1);  /* 0C07DCE6 sts.l pr,@-Rn */
	r2 += r6;  /* 0C07DCE8 add Rm,Rn */
	IF(0x0C07DCEAu); T = (s32)r2 >= 0;  /* 0C07DCEA cmp/pz Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07DD60u, 5); goto L_0C07DD60; } UPD(0x0C07DCF0u, 1); goto L_0C07DCF0; }  /* 0C07DCEC bf/s */
L_0C07DCF0: BLKS(0x0C07DCF0u);
	r0 = 0x680000u; UPD(0x0C07DCF2u, 1);  /* 0C07DCF0 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r0;  /* 0C07DCF2 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C07DD3Cu, 4); goto L_0C07DD3C; }  /* 0C07DCF4 bt */
L_0C07DCF6: BLKS(0x0C07DCF6u);
	r0 = 0x3FFFFFu; UPD(0x0C07DCF8u, 1);  /* 0C07DCF6 mov.l @(disp,pc),Rn */
	T = (s32)r5 > (s32)r0;  /* 0C07DCF8 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C07DD3Cu, 4); goto L_0C07DD3C; }  /* 0C07DCFA bf */
L_0C07DCFC: BLKS(0x0C07DCFCu);
	r2 = 0x4000000u; UPD(0x0C07DCFEu, 1);  /* 0C07DCFC mov.l @(disp,pc),Rn */
	T = (r4 & r2) == 0;  /* 0C07DCFE tst Rm,Rn */
	if (!T) { UPD(0x0C07DD50u, 4); goto L_0C07DD50; }  /* 0C07DD00 bf */
L_0C07DD02: BLKS(0x0C07DD02u);
	r3 = 0x6u;  /* 0C07DD02 mov #imm,Rn */
	r0 = 0xC297498u; UPD(0x0C07DD06u, 2);  /* 0C07DD04 mov.l @(disp,pc),Rn */
	r4 = R32(r0); UPD(0x0C07DD08u, 1);  /* 0C07DD06 mov.l @Rm,Rn */
	T = (s32)r4 > (s32)r3;  /* 0C07DD08 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C07DD50u, 4); goto L_0C07DD50; }  /* 0C07DD0A bt */
L_0C07DD0C: BLKS(0x0C07DD0Cu);
	r0 = 0xC22E015u; UPD(0x0C07DD0Eu, 1);  /* 0C07DD0C mov.l @(disp,pc),Rn */
	r4 = (u32)(s32)(s8)R8(r0); UPD(0x0C07DD10u, 1);  /* 0C07DD0E mov.b @Rm,Rn */
	r3 = 0xC297A38u; UPD(0x0C07DD12u, 1);  /* 0C07DD10 mov.l @(disp,pc),Rn */
	r2 = r4 & 0xFF;  /* 0C07DD12 extu.b Rm,Rn */
	r2 += r3;  /* 0C07DD14 add Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r2); UPD(0x0C07DD18u, 3);  /* 0C07DD16 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C07DD18 add #imm,Rn */
	W8(r2, r4); UPD(0x0C07DD1Cu, 2);  /* 0C07DD1A mov.b Rm,@Rn */
	r1 = r4 & 0xFF;  /* 0C07DD1C extu.b Rm,Rn */
	r4 = 0x4u;  /* 0C07DD1E mov #imm,Rn */
	T = r1 > r4;  /* 0C07DD20 cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C07DD3Cu, 6); goto L_0C07DD3C; }  /* 0C07DD22 bf */
L_0C07DD24: BLKS(0x0C07DD24u);
	r1 = (u32)(s32)(s8)R8(r0); UPD(0x0C07DD26u, 1);  /* 0C07DD24 mov.b @Rm,Rn */
L_0C07DD26: BLKS(0x0C07DD26u);
	r4 = 0x0u;  /* 0C07DD26 mov #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C07DD28 extu.b Rm,Rn */
	IF(0x0C07DD2Au); W8(r0 + r3, r4); UPD(0x0C07DD2Cu, 3);  /* 0C07DD2A mov.b Rm,@(r0,Rn) */
	r15 += 0xFFFFFFF8u;  /* 0C07DD2C add #imm,Rn */
	r3 = 0xC07CD80u; UPD(0x0C07DD30u, 2);  /* 0C07DD2E mov.l @(disp,pc),Rn */
	r0 = 0x0u;  /* 0C07DD30 mov #imm,Rn */
	r2 = 0x20000u; UPD(0x0C07DD34u, 2);  /* 0C07DD32 mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C07DD34 mov #imm,Rn */
	W32(r15, r2); UPD(0x0C07DD38u, 2);  /* 0C07DD36 mov.l Rm,@Rn */
	IF(0x0C07DD38u); { u32 t_ = r3; PR = 0x0C07DD3Cu; W32(r15 + 0x4u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C07CD80, 0x0C07CD80u, 0x0C07DD3Cu); }  /* 0C07DD38 jsr @Rn */
L_0C07DD3C: BLKS(0x0C07DD3Cu);
	r15 = r14;  /* 0C07DD3C mov Rm,Rn */
	IF(0x0C07DD3Eu); PR = R32(r15); r15 += 4; UPD(0x0C07DD40u, 2);  /* 0C07DD3E lds.l @Rn+,pr */
	IF(0x0C07DD40u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07DD40 rts */
L_0C07DD50: BLKS(0x0C07DD50u);
	r3 = 0xC297A38u; UPD(0x0C07DD52u, 1);  /* 0C07DD50 mov.l @(disp,pc),Rn */
	r0 = 0xC22E015u; UPD(0x0C07DD54u, 1);  /* 0C07DD52 mov.l @(disp,pc),Rn */
	{ r1 = (u32)(s32)(s8)R8(r0); /* slot mov.b @Rm,Rn */ UPD(0x0C07DD26u, 3); goto L_0C07DD26; }  /* 0C07DD54 bra */
L_0C07DD60: BLKS(0x0C07DD60u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C07DCF0u, 3); goto L_0C07DCF0; }  /* 0C07DD60 bra */
}

/* FUN_0c07dd90 */
void blk_f_0C07DD90(sh3_t *c)
{
	LOCALS;
L_0C07DD90: BLKS(0x0C07DD90u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07DD92u, 1);  /* 0C07DD90 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07DD94u, 1);  /* 0C07DD92 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07DD96u, 1);  /* 0C07DD94 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07DD98u, 1);  /* 0C07DD96 mov.l Rm,@-Rn */
	r10 = r7;  /* 0C07DD98 mov Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07DD9Cu, 2);  /* 0C07DD9A mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s8)r6;  /* 0C07DD9C exts.b Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C07DDA0u, 2);  /* 0C07DD9E mov.l Rm,@-Rn */
	r12 = r4;  /* 0C07DDA0 mov Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07DDA4u, 2);  /* 0C07DDA2 mov.l Rm,@-Rn */
	r13 = r5;  /* 0C07DDA4 mov Rm,Rn */
	r8 = 0xC07C010u; UPD(0x0C07DDA8u, 2);  /* 0C07DDA6 mov.l @(disp,pc),Rn */
	r4 = 0x1u;  /* 0C07DDA8 mov #imm,Rn */
	IF(0x0C07DDAAu); r15 -= 4; W32(r15, PR); UPD(0x0C07DDACu, 2);  /* 0C07DDAA sts.l pr,@-Rn */
	IF(0x0C07DDACu); { u32 t_ = r8; PR = 0x0C07DDB0u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07C010, 0x0C07C010u, 0x0C07DDB0u); }  /* 0C07DDAC jsr @Rn */
L_0C07DDB0: BLKS(0x0C07DDB0u);
	T = (r0 & r0) == 0;  /* 0C07DDB0 tst Rm,Rn */
	if (!T) { UPD(0x0C07DDD0u, 4); goto L_0C07DDD0; }  /* 0C07DDB2 bf */
L_0C07DDB4: BLKS(0x0C07DDB4u);
	r15 = r14;  /* 0C07DDB4 mov Rm,Rn */
	IF(0x0C07DDB6u); PR = R32(r15); r15 += 4; UPD(0x0C07DDB8u, 2);  /* 0C07DDB6 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07DDBAu, 1);  /* 0C07DDB8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07DDBCu, 1);  /* 0C07DDBA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07DDBEu, 1);  /* 0C07DDBC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07DDC0u, 1);  /* 0C07DDBE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07DDC2u, 1);  /* 0C07DDC0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07DDC4u, 1);  /* 0C07DDC2 mov.l @Rm+,Rn */
	IF(0x0C07DDC4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07DDC4 rts */
L_0C07DDD0: BLKS(0x0C07DDD0u);
	r4 = 0xC28EDFCu; UPD(0x0C07DDD2u, 1);  /* 0C07DDD0 mov.l @(disp,pc),Rn */
	r8 = 0x60u;  /* 0C07DDD2 mov #imm,Rn */
	r9 = (u32)(s32)(s16)R16(r4); UPD(0x0C07DDD6u, 2);  /* 0C07DDD4 mov.w @Rm,Rn */
	r0 = 0x7u;  /* 0C07DDD6 mov #imm,Rn */
	IF(0x0C07DDD8u); MACL = r9 * r8;  /* 0C07DDD8 mul.l Rm,Rn */
	r3 = 0xC3BC7CCu; UPD(0x0C07DDDCu, 4);  /* 0C07DDDA mov.l @(disp,pc),Rn */
	r4 = 0x4u;  /* 0C07DDDC mov #imm,Rn */
	IF(0x0C07DDDEu); r8 = MACL;  /* 0C07DDDE sts macl,Rn */
	r8 += r3;  /* 0C07DDE0 add Rm,Rn */
	W32(r8 + 0x4u, r0); UPD(0x0C07DDE4u, 4);  /* 0C07DDE2 mov.l Rm,@(disp,Rn) */
	r0 = 0xC062780u; UPD(0x0C07DDE6u, 1);  /* 0C07DDE4 mov.l @(disp,pc),Rn */
	r2 = 0xC0000000u; UPD(0x0C07DDE8u, 1);  /* 0C07DDE6 mov.l @(disp,pc),Rn */
	IF(0x0C07DDE8u); { u32 t_ = r0; PR = 0x0C07DDECu; W32(r8, r2); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C07DDECu); }  /* 0C07DDE8 jsr @Rn */
L_0C07DDEC: BLKS(0x0C07DDECu);
	r6 = 0xC07BF80u; UPD(0x0C07DDEEu, 1);  /* 0C07DDEC mov.l @(disp,pc),Rn */
	r7 = 0x0u;  /* 0C07DDEE mov #imm,Rn */
	r0 += 0x4u;  /* 0C07DDF0 add #imm,Rn */
	W32(r8 + 0xCu, r7); UPD(0x0C07DDF4u, 3);  /* 0C07DDF2 mov.l Rm,@(disp,Rn) */
	r4 = r9;  /* 0C07DDF4 mov Rm,Rn */
	IF(0x0C07DDF6u); { u32 t_ = r6; PR = 0x0C07DDFAu; W32(r8 + 0x8u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C07BF80, 0x0C07BF80u, 0x0C07DDFAu); }  /* 0C07DDF6 jsr @Rn */
L_0C07DDFA: BLKS(0x0C07DDFAu);
	W32(r8 + 0x28u, r12); UPD(0x0C07DDFCu, 1);  /* 0C07DDFA mov.l Rm,@(disp,Rn) */
	r3 = 0x0u;  /* 0C07DDFC mov #imm,Rn */
	W32(r8 + 0x2Cu, r13); UPD(0x0C07DE00u, 2);  /* 0C07DDFE mov.l Rm,@(disp,Rn) */
	r8 += 0x44u;  /* 0C07DE00 add #imm,Rn */
	W8(r8, r11); UPD(0x0C07DE04u, 2);  /* 0C07DE02 mov.b Rm,@Rn */
	r5 = R32(r14 + 0x20u); UPD(0x0C07DE06u, 1);  /* 0C07DE04 mov.l @(disp,Rm),Rn */
	r8 += 0xFFFFFFBCu;  /* 0C07DE06 add #imm,Rn */
	W32(r8 + 0x30u, r10); UPD(0x0C07DE0Au, 2);  /* 0C07DE08 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x34u, r5); UPD(0x0C07DE0Cu, 1);  /* 0C07DE0A mov.l Rm,@(disp,Rn) */
	r4 = 0xFFFF4000u; UPD(0x0C07DE0Eu, 1);  /* 0C07DE0C mov.l @(disp,pc),Rn */
	r8 += 0x40u;  /* 0C07DE0E add #imm,Rn */
	W32(r8, r4); UPD(0x0C07DE12u, 2);  /* 0C07DE10 mov.l Rm,@Rn */
	r2 = 0x505050u; UPD(0x0C07DE14u, 1);  /* 0C07DE12 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFC0u;  /* 0C07DE14 add #imm,Rn */
	r10 = 0xC0C2360u; UPD(0x0C07DE18u, 2);  /* 0C07DE16 mov.l @(disp,pc),Rn */
	W32(r8 + 0x38u, r3); UPD(0x0C07DE1Au, 1);  /* 0C07DE18 mov.l Rm,@(disp,Rn) */
	IF(0x0C07DE1Au); { u32 t_ = r10; PR = 0x0C07DE1Eu; W32(r8 + 0x3Cu, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C07DE1Eu); }  /* 0C07DE1A jsr @Rn */
L_0C07DE1E: BLKS(0x0C07DE1Eu);
	r8 += 0x4Fu;  /* 0C07DE1E add #imm,Rn */
	IF(0x0C07DE20u); { u32 t_ = r10; PR = 0x0C07DE24u; W8(r8, r0); /* slot mov.b Rm,@Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C07DE24u); }  /* 0C07DE20 jsr @Rn */
L_0C07DE24: BLKS(0x0C07DE24u);
	r8 += 0x1u;  /* 0C07DE24 add #imm,Rn */
	W8(r8, r0); UPD(0x0C07DE28u, 2);  /* 0C07DE26 mov.b Rm,@Rn */
	r8 += 0xCu;  /* 0C07DE28 add #imm,Rn */
	r0 = 0x0u;  /* 0C07DE2A mov #imm,Rn */
	{ W32(r8, r0); /* slot mov.l Rm,@Rn */ UPD(0x0C07DDB4u, 5); goto L_0C07DDB4; }  /* 0C07DE2C bra */
}

/* FUN_0c07de60 */
void blk_f_0C07DE60(sh3_t *c)
{
	LOCALS;
L_0C07DE60: BLKS(0x0C07DE60u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07DE62u, 1);  /* 0C07DE60 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07DE64u, 1);  /* 0C07DE62 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07DE66u, 1);  /* 0C07DE64 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s16)r5;  /* 0C07DE66 exts.w Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07DE6Au, 2);  /* 0C07DE68 mov.l Rm,@-Rn */
	r10 = r4;  /* 0C07DE6A mov Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07DE6Eu, 2);  /* 0C07DE6C mov.l Rm,@-Rn */
	r11 = r6;  /* 0C07DE6E mov Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07DE72u, 2);  /* 0C07DE70 mov.l Rm,@-Rn */
	r12 = r7;  /* 0C07DE72 mov Rm,Rn */
	r8 = 0xC07C010u; UPD(0x0C07DE76u, 2);  /* 0C07DE74 mov.l @(disp,pc),Rn */
	r4 = 0x1u;  /* 0C07DE76 mov #imm,Rn */
	IF(0x0C07DE78u); r15 -= 4; W32(r15, PR); UPD(0x0C07DE7Au, 2);  /* 0C07DE78 sts.l pr,@-Rn */
	IF(0x0C07DE7Au); { u32 t_ = r8; PR = 0x0C07DE7Eu; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07C010, 0x0C07C010u, 0x0C07DE7Eu); }  /* 0C07DE7A jsr @Rn */
L_0C07DE7E: BLKS(0x0C07DE7Eu);
	T = (r0 & r0) == 0;  /* 0C07DE7E tst Rm,Rn */
	if (!T) { UPD(0x0C07DEA0u, 4); goto L_0C07DEA0; }  /* 0C07DE80 bf */
L_0C07DE82: BLKS(0x0C07DE82u);
	r15 = r14;  /* 0C07DE82 mov Rm,Rn */
	IF(0x0C07DE84u); PR = R32(r15); r15 += 4; UPD(0x0C07DE86u, 2);  /* 0C07DE84 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07DE88u, 1);  /* 0C07DE86 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07DE8Au, 1);  /* 0C07DE88 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07DE8Cu, 1);  /* 0C07DE8A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07DE8Eu, 1);  /* 0C07DE8C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07DE90u, 1);  /* 0C07DE8E mov.l @Rm+,Rn */
	IF(0x0C07DE90u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07DE90 rts */
L_0C07DEA0: BLKS(0x0C07DEA0u);
	r7 = 0xC28EDFCu; UPD(0x0C07DEA2u, 1);  /* 0C07DEA0 mov.l @(disp,pc),Rn */
	r8 = 0x60u;  /* 0C07DEA2 mov #imm,Rn */
	r4 = (u32)(s32)(s16)R16(r7); UPD(0x0C07DEA6u, 2);  /* 0C07DEA4 mov.w @Rm,Rn */
	IF(0x0C07DEA6u); MACL = r4 * r8;  /* 0C07DEA6 mul.l Rm,Rn */
	r6 = 0xC3BC7CCu; UPD(0x0C07DEAAu, 3);  /* 0C07DEA8 mov.l @(disp,pc),Rn */
	IF(0x0C07DEAAu); r8 = MACL;  /* 0C07DEAA sts macl,Rn */
	r5 = 0xD0004000u; UPD(0x0C07DEAEu, 2);  /* 0C07DEAC mov.l @(disp,pc),Rn */
	r8 += r6;  /* 0C07DEAE add Rm,Rn */
	r3 = 0xC07CC00u; UPD(0x0C07DEB2u, 2);  /* 0C07DEB0 mov.l @(disp,pc),Rn */
	W32(r8, r5); UPD(0x0C07DEB4u, 1);  /* 0C07DEB2 mov.l Rm,@Rn */
	IF(0x0C07DEB4u); { u32 t_ = r3; PR = 0x0C07DEB8u; r5 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07CC00, 0x0C07CC00u, 0x0C07DEB8u); }  /* 0C07DEB4 jsr @Rn */
L_0C07DEB8: BLKS(0x0C07DEB8u);
	r0 = 0xB4u; UPD(0x0C07DEBAu, 1);  /* 0C07DEB8 mov.w @(disp,pc),Rn */
	r8 += 0x4Au;  /* 0C07DEBA add #imm,Rn */
	IF(0x0C07DEBCu); MACL = r9 * r0;  /* 0C07DEBC mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C07DEC0u, 4);  /* 0C07DEBE mov.l @(disp,pc),Rn */
	IF(0x0C07DEC0u); r0 = MACL;  /* 0C07DEC0 sts macl,Rn */
	r0 += r2;  /* 0C07DEC2 add Rm,Rn */
	r10 = R32(r0 + 0x24u); UPD(0x0C07DEC6u, 3);  /* 0C07DEC4 mov.l @(disp,Rm),Rn */
	W16(r8, r9); UPD(0x0C07DEC8u, 1);  /* 0C07DEC6 mov.w Rm,@Rn */
	r10 += r11;  /* 0C07DEC8 add Rm,Rn */
	r8 += 0xFFFFFFB6u;  /* 0C07DECA add #imm,Rn */
	W32(r8 + 0x28u, r10); UPD(0x0C07DECEu, 3);  /* 0C07DECC mov.l Rm,@(disp,Rn) */
	r9 = R32(r0 + 0x28u); UPD(0x0C07DED0u, 1);  /* 0C07DECE mov.l @(disp,Rm),Rn */
	r7 = 0x82u; UPD(0x0C07DED2u, 1);  /* 0C07DED0 mov.w @(disp,pc),Rn */
	r9 += r12;  /* 0C07DED2 add Rm,Rn */
	W32(r8 + 0x2Cu, r9); UPD(0x0C07DED6u, 2);  /* 0C07DED4 mov.l Rm,@(disp,Rn) */
	IF(0x0C07DED6u); r6 = (u32)(s32)(s16)R16(r0 + r7); UPD(0x0C07DED8u, 1);  /* 0C07DED6 mov.w @(r0,Rm),Rn */
	r8 += 0x4Cu;  /* 0C07DED8 add #imm,Rn */
	W16(r8, r6); UPD(0x0C07DEDCu, 2);  /* 0C07DEDA mov.w Rm,@Rn */
	r5 = 0xA9u; UPD(0x0C07DEDEu, 1);  /* 0C07DEDC mov.w @(disp,pc),Rn */
	r8 += 0xFFFFFFF8u;  /* 0C07DEDE add #imm,Rn */
	IF(0x0C07DEE0u); r4 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C07DEE2u, 2);  /* 0C07DEE0 mov.b @(r0,Rm),Rn */
	W8(r8, r4); UPD(0x0C07DEE4u, 1);  /* 0C07DEE2 mov.b Rm,@Rn */
	r0 = 0x0u;  /* 0C07DEE4 mov #imm,Rn */
	r8 += 0xFFFFFFBCu;  /* 0C07DEE6 add #imm,Rn */
	W32(r8 + 0x30u, r11); UPD(0x0C07DEEAu, 3);  /* 0C07DEE8 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x34u, r12); UPD(0x0C07DEECu, 1);  /* 0C07DEEA mov.l Rm,@(disp,Rn) */
	r3 = 0xFFFD0000u; UPD(0x0C07DEEEu, 1);  /* 0C07DEEC mov.l @(disp,pc),Rn */
	r8 += 0x40u;  /* 0C07DEEE add #imm,Rn */
	W32(r8, r3); UPD(0x0C07DEF2u, 2);  /* 0C07DEF0 mov.l Rm,@Rn */
	r2 = 0x808080u; UPD(0x0C07DEF4u, 1);  /* 0C07DEF2 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFC0u;  /* 0C07DEF4 add #imm,Rn */
	W32(r8 + 0x38u, r0); UPD(0x0C07DEF8u, 2);  /* 0C07DEF6 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x3Cu, r2); UPD(0x0C07DEFAu, 1);  /* 0C07DEF8 mov.l Rm,@(disp,Rn) */
	r8 += 0x4Fu;  /* 0C07DEFA add #imm,Rn */
	{ W8(r8, r0); /* slot mov.b Rm,@Rn */ UPD(0x0C07DE82u, 4); goto L_0C07DE82; }  /* 0C07DEFC bra */
}

/* FUN_0c07df30 */
void blk_f_0C07DF30(sh3_t *c)
{
	LOCALS;
L_0C07DF30: BLKS(0x0C07DF30u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07DF32u, 1);  /* 0C07DF30 mov.l Rm,@-Rn */
	r0 = 0x4Cu;  /* 0C07DF32 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07DF36u, 2);  /* 0C07DF34 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07DF38u, 1);  /* 0C07DF36 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s8)r7;  /* 0C07DF38 exts.b Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07DF3Cu, 2);  /* 0C07DF3A mov.l Rm,@-Rn */
	IF(0x0C07DF3Cu); MACL = r9 * r0;  /* 0C07DF3C mul.l Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07DF40u, 3);  /* 0C07DF3E mov.l Rm,@-Rn */
	r10 = r4;  /* 0C07DF40 mov Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07DF44u, 2);  /* 0C07DF42 mov.l Rm,@-Rn */
	IF(0x0C07DF44u); r0 = MACL;  /* 0C07DF44 sts macl,Rn */
	IF(0x0C07DF46u); r15 -= 4; W32(r15, PR); UPD(0x0C07DF48u, 2);  /* 0C07DF46 sts.l pr,@-Rn */
	r11 = r5;  /* 0C07DF48 mov Rm,Rn */
	r2 = 0xC286318u; UPD(0x0C07DF4Cu, 2);  /* 0C07DF4A mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C07DF4C mov Rm,Rn */
	IF(0x0C07DF4Eu); r0 = R32(r0 + r2); UPD(0x0C07DF50u, 2);  /* 0C07DF4E mov.l @(r0,Rm),Rn */
	r0 &= 0x10u;  /* 0C07DF50 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C07DF52 tst Rm,Rn */
	{ u32 c_ = T; r12 = r6; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07DF88u, 5); goto L_0C07DF88; } goto L_0C07DF58; }  /* 0C07DF54 bt/s */
L_0C07DF58: BLKS(0x0C07DF58u);
	r4 = 0xC28EDFCu; UPD(0x0C07DF5Au, 2);  /* 0C07DF58 mov.l @(disp,pc),Rn */
	r6 = 0x1u;  /* 0C07DF5A mov #imm,Rn */
	r2 = 0x100u; UPD(0x0C07DF5Eu, 2);  /* 0C07DF5C mov.w @(disp,pc),Rn */
	r7 = r4;  /* 0C07DF5E mov Rm,Rn */
	r5 = 0x13Fu; UPD(0x0C07DF62u, 2);  /* 0C07DF60 mov.w @(disp,pc),Rn */
	r3 = 0xC3C27CCu; UPD(0x0C07DF64u, 1);  /* 0C07DF62 mov.l @(disp,pc),Rn */
L_0C07DF64: BLKS(0x0C07DF64u);
	r8 = R32(r3); UPD(0x0C07DF66u, 1);  /* 0C07DF64 mov.l @Rm,Rn */
	T = (r8 & r8) == 0;  /* 0C07DF66 tst Rm,Rn */
	{ u32 c_ = !T; r3 += 0x60u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C07DF7Cu, 4); goto L_0C07DF7C; } goto L_0C07DF6C; }  /* 0C07DF68 bf/s */
L_0C07DF6C: BLKS(0x0C07DF6Cu);
	r0 = r6;  /* 0C07DF6C mov Rm,Rn */
	W16(r7, r2); UPD(0x0C07DF70u, 3);  /* 0C07DF6E mov.w Rm,@Rn */
	r0 += 0xFFFFFFFFu;  /* 0C07DF70 add #imm,Rn */
	r6 = (u32)(s32)(s16)r0;  /* 0C07DF72 exts.w Rm,Rn */
	r7 += 0x2u;  /* 0C07DF74 add #imm,Rn */
	T = (r6 & r6) == 0;  /* 0C07DF76 tst Rm,Rn */
	{ u32 c_ = T; r1 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07DF84u, 7); goto L_0C07DF84; } UPD(0x0C07DF7Cu, 1); goto L_0C07DF7C; }  /* 0C07DF78 bt/s */
L_0C07DF7C: BLKS(0x0C07DF7Cu);
	r2 += 0x1u;  /* 0C07DF7C add #imm,Rn */
	T = (s32)r2 > (s32)r5;  /* 0C07DF7E cmp/gt Rm,Rn */
	{ u32 c_ = !T; r1 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07DF64u, 5); goto L_0C07DF64; } UPD(0x0C07DF84u, 1); goto L_0C07DF84; }  /* 0C07DF80 bf/s */
L_0C07DF84: BLKS(0x0C07DF84u);
	T = (r1 & r1) == 0;  /* 0C07DF84 tst Rm,Rn */
	if (!T) { UPD(0x0C07DFA0u, 4); goto L_0C07DFA0; }  /* 0C07DF86 bf */
L_0C07DF88: BLKS(0x0C07DF88u);
	r15 = r14;  /* 0C07DF88 mov Rm,Rn */
	IF(0x0C07DF8Au); PR = R32(r15); r15 += 4; UPD(0x0C07DF8Cu, 2);  /* 0C07DF8A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07DF8Eu, 1);  /* 0C07DF8C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07DF90u, 1);  /* 0C07DF8E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07DF92u, 1);  /* 0C07DF90 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07DF94u, 1);  /* 0C07DF92 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07DF96u, 1);  /* 0C07DF94 mov.l @Rm+,Rn */
	IF(0x0C07DF96u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07DF96 rts */
L_0C07DFA0: BLKS(0x0C07DFA0u);
	r4 = (u32)(s32)(s16)R16(r4); UPD(0x0C07DFA2u, 1);  /* 0C07DFA0 mov.w @Rm,Rn */
	r8 = 0x60u;  /* 0C07DFA2 mov #imm,Rn */
	IF(0x0C07DFA4u); MACL = r4 * r8;  /* 0C07DFA4 mul.l Rm,Rn */
	r5 = r10;  /* 0C07DFA6 mov Rm,Rn */
	r3 = 0xC3BC7CCu; UPD(0x0C07DFAAu, 5);  /* 0C07DFA8 mov.l @(disp,pc),Rn */
	IF(0x0C07DFAAu); r8 = MACL;  /* 0C07DFAA sts macl,Rn */
	r10 = 0xC07CC00u; UPD(0x0C07DFAEu, 2);  /* 0C07DFAC mov.l @(disp,pc),Rn */
	r8 += r3;  /* 0C07DFAE add Rm,Rn */
	r0 = 0xD0000010u; UPD(0x0C07DFB2u, 2);  /* 0C07DFB0 mov.l @(disp,pc),Rn */
	IF(0x0C07DFB2u); { u32 t_ = r10; PR = 0x0C07DFB6u; W32(r8, r0); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07CC00, 0x0C07CC00u, 0x0C07DFB6u); }  /* 0C07DFB2 jsr @Rn */
L_0C07DFB6: BLKS(0x0C07DFB6u);
	W32(r8 + 0x28u, r11); UPD(0x0C07DFB8u, 1);  /* 0C07DFB6 mov.l Rm,@(disp,Rn) */
	r7 = 0x4Cu;  /* 0C07DFB8 mov #imm,Rn */
	W32(r8 + 0x2Cu, r12); UPD(0x0C07DFBCu, 2);  /* 0C07DFBA mov.l Rm,@(disp,Rn) */
	IF(0x0C07DFBCu); MACL = r9 * r7;  /* 0C07DFBC mul.l Rm,Rn */
	r8 += 0x48u;  /* 0C07DFBE add #imm,Rn */
	W8(r8, r9); UPD(0x0C07DFC2u, 4);  /* 0C07DFC0 mov.b Rm,@Rn */
	IF(0x0C07DFC2u); r6 = MACL;  /* 0C07DFC2 sts macl,Rn */
	r0 = 0xC28635Au; UPD(0x0C07DFC6u, 2);  /* 0C07DFC4 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFFCu;  /* 0C07DFC6 add #imm,Rn */
	IF(0x0C07DFC8u); r5 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C07DFCAu, 2);  /* 0C07DFC8 mov.b @(r0,Rm),Rn */
	r3 = 0x0u;  /* 0C07DFCA mov #imm,Rn */
	W8(r8, r5); UPD(0x0C07DFCEu, 2);  /* 0C07DFCC mov.b Rm,@Rn */
	r8 += 0xFFFFFFBCu;  /* 0C07DFCE add #imm,Rn */
	W32(r8 + 0x34u, r3); UPD(0x0C07DFD2u, 2);  /* 0C07DFD0 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x30u, r3); UPD(0x0C07DFD4u, 1);  /* 0C07DFD2 mov.l Rm,@(disp,Rn) */
	r4 = 0xFFFD0000u; UPD(0x0C07DFD6u, 1);  /* 0C07DFD4 mov.l @(disp,pc),Rn */
	r8 += 0x40u;  /* 0C07DFD6 add #imm,Rn */
	W32(r8, r4); UPD(0x0C07DFDAu, 2);  /* 0C07DFD8 mov.l Rm,@Rn */
	r2 = 0x808080u; UPD(0x0C07DFDCu, 1);  /* 0C07DFDA mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFC0u;  /* 0C07DFDC add #imm,Rn */
	W32(r8 + 0x38u, r3); UPD(0x0C07DFE0u, 2);  /* 0C07DFDE mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x3Cu, r2); UPD(0x0C07DFE2u, 1);  /* 0C07DFE0 mov.l Rm,@(disp,Rn) */
	r8 += 0x4Fu;  /* 0C07DFE2 add #imm,Rn */
	{ W8(r8, r3); /* slot mov.b Rm,@Rn */ UPD(0x0C07DF88u, 4); goto L_0C07DF88; }  /* 0C07DFE4 bra */
}

void blk_f_0C07E0A0(sh3_t *c)
{
	LOCALS;
L_0C07E0A0: BLKS(0x0C07E0A0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07E0A2u, 1);  /* 0C07E0A0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07E0A4u, 1);  /* 0C07E0A2 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07E0A6u, 1);  /* 0C07E0A4 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C07E0A6 exts.w Rm,Rn */
	r8 = 0xC07C010u; UPD(0x0C07E0AAu, 2);  /* 0C07E0A8 mov.l @(disp,pc),Rn */
	r4 = 0x1u;  /* 0C07E0AA mov #imm,Rn */
	IF(0x0C07E0ACu); r15 -= 4; W32(r15, PR); UPD(0x0C07E0AEu, 2);  /* 0C07E0AC sts.l pr,@-Rn */
	IF(0x0C07E0AEu); { u32 t_ = r8; PR = 0x0C07E0B2u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07C010, 0x0C07C010u, 0x0C07E0B2u); }  /* 0C07E0AE jsr @Rn */
L_0C07E0B2: BLKS(0x0C07E0B2u);
	T = (r0 & r0) == 0;  /* 0C07E0B2 tst Rm,Rn */
	if (!T) { UPD(0x0C07E0D0u, 4); goto L_0C07E0D0; }  /* 0C07E0B4 bf */
L_0C07E0B6: BLKS(0x0C07E0B6u);
	r15 = r14;  /* 0C07E0B6 mov Rm,Rn */
	IF(0x0C07E0B8u); PR = R32(r15); r15 += 4; UPD(0x0C07E0BAu, 2);  /* 0C07E0B8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07E0BCu, 1);  /* 0C07E0BA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07E0BEu, 1);  /* 0C07E0BC mov.l @Rm+,Rn */
	IF(0x0C07E0BEu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07E0BE rts */
L_0C07E0D0: BLKS(0x0C07E0D0u);
	r5 = 0xC28EDFCu; UPD(0x0C07E0D2u, 1);  /* 0C07E0D0 mov.l @(disp,pc),Rn */
	r8 = 0x60u;  /* 0C07E0D2 mov #imm,Rn */
	r4 = (u32)(s32)(s16)R16(r5); UPD(0x0C07E0D6u, 2);  /* 0C07E0D4 mov.w @Rm,Rn */
	r9 += 0x9u;  /* 0C07E0D6 add #imm,Rn */
	IF(0x0C07E0D8u); MACL = r4 * r8;  /* 0C07E0D8 mul.l Rm,Rn */
	r0 = 0xC3BC7CCu; UPD(0x0C07E0DCu, 4);  /* 0C07E0DA mov.l @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C07E0DC mov #imm,Rn */
	IF(0x0C07E0DEu); r8 = MACL;  /* 0C07E0DE sts macl,Rn */
	r7 = 0xC0000000u; UPD(0x0C07E0E2u, 3);  /* 0C07E0E0 mov.l @(disp,pc),Rn */
	r8 += r0;  /* 0C07E0E2 add Rm,Rn */
	W32(r8, r7); UPD(0x0C07E0E6u, 2);  /* 0C07E0E4 mov.l Rm,@Rn */
	W32(r8 + 0x4u, r9); UPD(0x0C07E0E8u, 1);  /* 0C07E0E6 mov.l Rm,@(disp,Rn) */
	r9 += 0xFFFFFFF7u;  /* 0C07E0E8 add #imm,Rn */
	r8 += 0x4Cu;  /* 0C07E0EA add #imm,Rn */
	W16(r8, r9); UPD(0x0C07E0EEu, 3);  /* 0C07E0EC mov.w Rm,@Rn */
	r6 = 0xC07BF80u; UPD(0x0C07E0F0u, 1);  /* 0C07E0EE mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFB4u;  /* 0C07E0F0 add #imm,Rn */
	W32(r8 + 0xCu, r3); UPD(0x0C07E0F4u, 2);  /* 0C07E0F2 mov.l Rm,@(disp,Rn) */
	IF(0x0C07E0F4u); { u32 t_ = r6; PR = 0x0C07E0F8u; W32(r8 + 0x8u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C07BF80, 0x0C07BF80u, 0x0C07E0F8u); }  /* 0C07E0F4 jsr @Rn */
L_0C07E0F8: BLKS(0x0C07E0F8u);
	r8 += 0x4Fu;  /* 0C07E0F8 add #imm,Rn */
	r2 = 0x3Cu;  /* 0C07E0FA mov #imm,Rn */
	W8(r8, r2); UPD(0x0C07E0FEu, 3);  /* 0C07E0FC mov.b Rm,@Rn */
	r5 = 0x16u;  /* 0C07E0FE mov #imm,Rn */
	r8 += 0xFFFFFFF5u;  /* 0C07E100 add #imm,Rn */
	W8(r8, r5); UPD(0x0C07E104u, 3);  /* 0C07E102 mov.b Rm,@Rn */
	r4 = 0x4FFFFu; UPD(0x0C07E106u, 1);  /* 0C07E104 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFBCu;  /* 0C07E106 add #imm,Rn */
	r7 = 0x2A0u; UPD(0x0C07E10Au, 2);  /* 0C07E108 mov.w @(disp,pc),Rn */
	W32(r8 + 0x38u, r4); UPD(0x0C07E10Cu, 1);  /* 0C07E10A mov.l Rm,@(disp,Rn) */
	IF(0x0C07E10Cu); MACL = r9 * r7;  /* 0C07E10C mul.l Rm,Rn */
	r0 = 0x808080u; UPD(0x0C07E110u, 3);  /* 0C07E10E mov.l @(disp,pc),Rn */
	r6 = 0x280000u; UPD(0x0C07E112u, 1);  /* 0C07E110 mov.l @(disp,pc),Rn */
	IF(0x0C07E112u); r5 = MACL;  /* 0C07E112 sts macl,Rn */
	r4 = 0x8000u; UPD(0x0C07E116u, 2);  /* 0C07E114 mov.l @(disp,pc),Rn */
	r3 = 0xC29D1D8u; UPD(0x0C07E118u, 1);  /* 0C07E116 mov.l @(disp,pc),Rn */
	W32(r8 + 0x3Cu, r0); UPD(0x0C07E11Au, 1);  /* 0C07E118 mov.l Rm,@(disp,Rn) */
	r5 += r3;  /* 0C07E11A add Rm,Rn */
	W32(r8 + 0x30u, r6); UPD(0x0C07E11Eu, 2);  /* 0C07E11C mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x34u, r4); UPD(0x0C07E120u, 1);  /* 0C07E11E mov.l Rm,@(disp,Rn) */
	r2 = R32(r5 + 0x10u); UPD(0x0C07E122u, 1);  /* 0C07E120 mov.l @(disp,Rm),Rn */
	r2 += r6;  /* 0C07E122 add Rm,Rn */
	W32(r8 + 0x28u, r2); UPD(0x0C07E126u, 2);  /* 0C07E124 mov.l Rm,@(disp,Rn) */
	r0 = R32(r5 + 0x14u); UPD(0x0C07E128u, 1);  /* 0C07E126 mov.l @(disp,Rm),Rn */
	r0 += r4;  /* 0C07E128 add Rm,Rn */
	{ W32(r8 + 0x2Cu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C07E0B6u, 4); goto L_0C07E0B6; }  /* 0C07E12A bra */
}

/* FUN_0c07e160 */
void blk_f_0C07E160(sh3_t *c)
{
	LOCALS;
L_0C07E160: BLKS(0x0C07E160u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07E162u, 1);  /* 0C07E160 mov.l Rm,@-Rn */
	r5 = (u32)(s32)(s16)r5;  /* 0C07E162 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07E166u, 2);  /* 0C07E164 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07E168u, 1);  /* 0C07E166 mov.l Rm,@-Rn */
	IF(0x0C07E168u); r15 -= 4; W32(r15, PR); UPD(0x0C07E16Au, 1);  /* 0C07E168 sts.l pr,@-Rn */
	r3 = 0xC07E5C0u; UPD(0x0C07E16Cu, 1);  /* 0C07E16A mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFDCu;  /* 0C07E16C add #imm,Rn */
	r14 = r15;  /* 0C07E16E mov Rm,Rn */
	W32(r14 + 0x8u, r3); UPD(0x0C07E172u, 3);  /* 0C07E170 mov.l Rm,@(disp,Rn) */
	r7 = 0xC07E250u; UPD(0x0C07E174u, 1);  /* 0C07E172 mov.l @(disp,pc),Rn */
	r3 = 0x60u;  /* 0C07E174 mov #imm,Rn */
	r0 = 0xC07D100u; UPD(0x0C07E178u, 2);  /* 0C07E176 mov.l @(disp,pc),Rn */
	IF(0x0C07E178u); MACL = r5 * r3;  /* 0C07E178 mul.l Rm,Rn */
	r8 = 0xC07D010u; UPD(0x0C07E17Cu, 3);  /* 0C07E17A mov.l @(disp,pc),Rn */
	W32(r14 + 0x10u, r7); UPD(0x0C07E17Eu, 1);  /* 0C07E17C mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x4u, r0); UPD(0x0C07E180u, 1);  /* 0C07E17E mov.l Rm,@(disp,Rn) */
	W32(r14 + 0xCu, r8); UPD(0x0C07E182u, 1);  /* 0C07E180 mov.l Rm,@(disp,Rn) */
	r2 = 0xC07CEC0u; UPD(0x0C07E184u, 1);  /* 0C07E182 mov.l @(disp,pc),Rn */
	IF(0x0C07E184u); r8 = MACL;  /* 0C07E184 sts macl,Rn */
	r7 = 0xC3BC7CCu; UPD(0x0C07E188u, 2);  /* 0C07E186 mov.l @(disp,pc),Rn */
	W32(r14, r2); UPD(0x0C07E18Au, 1);  /* 0C07E188 mov.l Rm,@Rn */
	r7 += r8;  /* 0C07E18A add Rm,Rn */
	r0 = 0xC07E440u; UPD(0x0C07E18Eu, 2);  /* 0C07E18C mov.l @(disp,pc),Rn */
	r8 = R32(r7 + 0x4u); UPD(0x0C07E190u, 1);  /* 0C07E18E mov.l @(disp,Rm),Rn */
	r2 = 0xC07E350u; UPD(0x0C07E192u, 1);  /* 0C07E190 mov.l @(disp,pc),Rn */
	W32(r14 + 0x1Cu, r0); UPD(0x0C07E194u, 1);  /* 0C07E192 mov.l Rm,@(disp,Rn) */
	r6 = 0xC07E4C0u; UPD(0x0C07E196u, 1);  /* 0C07E194 mov.l @(disp,pc),Rn */
	r0 = r8;  /* 0C07E196 mov Rm,Rn */
	W32(r14 + 0x18u, r2); UPD(0x0C07E19Au, 2);  /* 0C07E198 mov.l Rm,@(disp,Rn) */
	IF(0x0C07E19Au); r0 <<= 2;  /* 0C07E19A shll2 Rn */
	W32(r14 + 0x14u, r6); UPD(0x0C07E19Eu, 2);  /* 0C07E19C mov.l Rm,@(disp,Rn) */
	IF(0x0C07E19Eu); r6 = R32(r0 + r14); UPD(0x0C07E1A0u, 1);  /* 0C07E19E mov.l @(r0,Rm),Rn */
	IF(0x0C07E1A0u); { u32 t_ = r6; PR = 0x0C07E1A4u; r4 = (u32)(s32)(s16)r4; /* slot exts.w Rm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C07E1A4u); }  /* 0C07E1A0 jsr @Rn */
L_0C07E1A4: BLKS(0x0C07E1A4u);
	r2 = 0xC22E015u; UPD(0x0C07E1A6u, 1);  /* 0C07E1A4 mov.l @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C07E1A6 mov #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C07E1AAu, 2);  /* 0C07E1A8 mov.b @Rm,Rn */
	r1 = r8;  /* 0C07E1AA mov Rm,Rn */
	r7 = r0 & 0xFF;  /* 0C07E1AC extu.b Rm,Rn */
	r4 = 0xC3C847Cu; UPD(0x0C07E1B0u, 3);  /* 0C07E1AE mov.l @(disp,pc),Rn */
	IF(0x0C07E1B0u); r7 <<= 2;  /* 0C07E1B0 shll2 Rn */
	r7 += r7;  /* 0C07E1B2 add Rm,Rn */
	r4 += r7;  /* 0C07E1B4 add Rm,Rn */
	r0 = r4;  /* 0C07E1B6 mov Rm,Rn */
	IF(0x0C07E1B8u); W8(r0 + r8, r3); UPD(0x0C07E1BAu, 5);  /* 0C07E1B8 mov.b Rm,@(r0,Rn) */
	r1 += 0xFFFFFFFAu;  /* 0C07E1BA add #imm,Rn */
	r0 = 0x1u;  /* 0C07E1BC mov #imm,Rn */
	T = r1 > r0;  /* 0C07E1BE cmp/hi Rm,Rn */
	{ u32 c_ = !T; r9 += 0x1u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C07E210u, 6); goto L_0C07E210; } goto L_0C07E1C4; }  /* 0C07E1C0 bf/s */
L_0C07E1C4: BLKS(0x0C07E1C4u);
	r9 = 0xC22E2ACu; UPD(0x0C07E1C6u, 2);  /* 0C07E1C4 mov.l @(disp,pc),Rn */
	r2 = 0x0u;  /* 0C07E1C6 mov #imm,Rn */
	r9 += r7;  /* 0C07E1C8 add Rm,Rn */
	r0 = r9;  /* 0C07E1CA mov Rm,Rn */
	IF(0x0C07E1CCu); r5 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07E1CEu, 4);  /* 0C07E1CC mov.b @(r0,Rm),Rn */
	r7 = 0x0u;  /* 0C07E1CE mov #imm,Rn */
	r9 = r5 & 0xFF;  /* 0C07E1D0 extu.b Rm,Rn */
	r3 = 0x7u;  /* 0C07E1D2 mov #imm,Rn */
	UPD(0x0C07E1D4u, 3);
L_0C07E1D4: BLKS(0x0C07E1D4u);
	r4 = r2;  /* 0C07E1D4 mov Rm,Rn */
	r6 = r0;  /* 0C07E1D6 mov Rm,Rn */
	r6 += r2;  /* 0C07E1D8 add Rm,Rn */
	r4 += 0x1u;  /* 0C07E1DA add #imm,Rn */
	r2 = (u32)(s32)(s16)r4;  /* 0C07E1DC exts.w Rm,Rn */
	T = (s32)r2 > (s32)r3;  /* 0C07E1DE cmp/gt Rm,Rn */
	{ u32 c_ = !T; W8(r6, r7); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C07E1D4u, 9); goto L_0C07E1D4; } UPD(0x0C07E1E4u, 1); goto L_0C07E1E4; }  /* 0C07E1E0 bf/s */
L_0C07E1E4: BLKS(0x0C07E1E4u);
	r2 = 0xC22E015u; UPD(0x0C07E1E6u, 1);  /* 0C07E1E4 mov.l @(disp,pc),Rn */
	r9 += 0x1u;  /* 0C07E1E6 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C07E1EAu, 2);  /* 0C07E1E8 mov.b @Rm,Rn */
	r7 = r0 & 0xFF;  /* 0C07E1EA extu.b Rm,Rn */
	IF(0x0C07E1ECu); r7 <<= 2;  /* 0C07E1EC shll2 Rn */
	r3 = 0xC22E2ACu; UPD(0x0C07E1F0u, 3);  /* 0C07E1EE mov.l @(disp,pc),Rn */
	r7 += r7;  /* 0C07E1F0 add Rm,Rn */
	r7 += r3;  /* 0C07E1F2 add Rm,Rn */
	r0 = r7;  /* 0C07E1F4 mov Rm,Rn */
	UPD(0x0C07E1F6u, 3);
L_0C07E1F6: BLKS(0x0C07E1F6u);
	IF(0x0C07E1F6u); W8(r0 + r8, r9); UPD(0x0C07E1F8u, 1);  /* 0C07E1F6 mov.b Rm,@(r0,Rn) */
	r14 += 0x24u;  /* 0C07E1F8 add #imm,Rn */
	r15 = r14;  /* 0C07E1FA mov Rm,Rn */
	IF(0x0C07E1FCu); PR = R32(r15); r15 += 4; UPD(0x0C07E1FEu, 3);  /* 0C07E1FC lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07E200u, 1);  /* 0C07E1FE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07E202u, 1);  /* 0C07E200 mov.l @Rm+,Rn */
	IF(0x0C07E202u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07E202 rts */
L_0C07E210: BLKS(0x0C07E210u);
	r5 = 0xC22E2ACu; UPD(0x0C07E212u, 1);  /* 0C07E210 mov.l @(disp,pc),Rn */
	r7 += r5;  /* 0C07E212 add Rm,Rn */
	{ r0 = r7; /* slot mov Rm,Rn */ UPD(0x0C07E1F6u, 4); goto L_0C07E1F6; }  /* 0C07E214 bra */
}

void blk_f_0C07E250(sh3_t *c)
{
	LOCALS;
L_0C07E250: BLKS(0x0C07E250u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07E252u, 1);  /* 0C07E250 mov.l Rm,@-Rn */
	r3 = 0x5u;  /* 0C07E252 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07E256u, 2);  /* 0C07E254 mov.l Rm,@-Rn */
	r5 = (u32)(s32)(s16)r5;  /* 0C07E256 exts.w Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07E25Au, 2);  /* 0C07E258 mov.l Rm,@-Rn */
	r2 = 0x2A0u; UPD(0x0C07E25Cu, 1);  /* 0C07E25A mov.w @(disp,pc),Rn */
	r10 = (u32)(s32)(s16)r4;  /* 0C07E25C exts.w Rm,Rn */
	IF(0x0C07E25Eu); MACL = r10 * r2;  /* 0C07E25E mul.l Rm,Rn */
	r0 = 0xC29D1D8u; UPD(0x0C07E262u, 4);  /* 0C07E260 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07E264u, 1);  /* 0C07E262 mov.l Rm,@-Rn */
	IF(0x0C07E264u); r9 = MACL;  /* 0C07E264 sts macl,Rn */
	r9 += r0;  /* 0C07E266 add Rm,Rn */
	IF(0x0C07E268u); r15 -= 4; W32(r15, PR); UPD(0x0C07E26Au, 3);  /* 0C07E268 sts.l pr,@-Rn */
	r0 = 0x25Bu; UPD(0x0C07E26Cu, 1);  /* 0C07E26A mov.w @(disp,pc),Rn */
	IF(0x0C07E26Cu); r2 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C07E26Eu, 1);  /* 0C07E26C mov.b @(r0,Rm),Rn */
	T = r2 > r3;  /* 0C07E26E cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07E2F0u, 4); goto L_0C07E2F0; } goto L_0C07E274; }  /* 0C07E270 bt/s */
L_0C07E274: BLKS(0x0C07E274u);
	r3 = r2;  /* 0C07E274 mov Rm,Rn */
	r3 += 0x1u;  /* 0C07E276 add #imm,Rn */
	r8 = 0x60u;  /* 0C07E278 mov #imm,Rn */
	IF(0x0C07E27Au); W8(r0 + r9, r3); UPD(0x0C07E27Cu, 5);  /* 0C07E27A mov.b Rm,@(r0,Rn) */
	IF(0x0C07E27Cu); MACL = r5 * r8;  /* 0C07E27C mul.l Rm,Rn */
	r0 = 0xC3BC7CCu; UPD(0x0C07E280u, 3);  /* 0C07E27E mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C07E280 mov #imm,Rn */
	IF(0x0C07E282u); r8 = MACL;  /* 0C07E282 sts macl,Rn */
	r8 += r0;  /* 0C07E284 add Rm,Rn */
	W32(r8 + 0x8u, r4); UPD(0x0C07E288u, 4);  /* 0C07E286 mov.l Rm,@(disp,Rn) */
	r6 = 0x8u;  /* 0C07E288 mov #imm,Rn */
	W32(r8 + 0xCu, r4); UPD(0x0C07E28Cu, 2);  /* 0C07E28A mov.l Rm,@(disp,Rn) */
	r7 = R32(r8); UPD(0x0C07E28Eu, 1);  /* 0C07E28C mov.l @Rm,Rn */
	r4 = r5;  /* 0C07E28E mov Rm,Rn */
	r1 = 0xEFFFFFFBu; UPD(0x0C07E292u, 2);  /* 0C07E290 mov.l @(disp,pc),Rn */
	r5 = 0xC07BF80u; UPD(0x0C07E294u, 1);  /* 0C07E292 mov.l @(disp,pc),Rn */
	r7 &= r1;  /* 0C07E294 and Rm,Rn */
	W32(r8, r7); UPD(0x0C07E298u, 2);  /* 0C07E296 mov.l Rm,@Rn */
	IF(0x0C07E298u); { u32 t_ = r5; PR = 0x0C07E29Cu; W32(r8 + 0x4u, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C07BF80, 0x0C07BF80u, 0x0C07E29Cu); }  /* 0C07E298 jsr @Rn */
L_0C07E29C: BLKS(0x0C07E29Cu);
	r3 = 0x3Cu;  /* 0C07E29C mov #imm,Rn */
	r8 += 0x4Fu;  /* 0C07E29E add #imm,Rn */
	W8(r8, r3); UPD(0x0C07E2A2u, 3);  /* 0C07E2A0 mov.b Rm,@Rn */
	r2 = 0x14u;  /* 0C07E2A2 mov #imm,Rn */
	r8 += 0xFFFFFFF5u;  /* 0C07E2A4 add #imm,Rn */
	W8(r8, r2); UPD(0x0C07E2A8u, 3);  /* 0C07E2A6 mov.b Rm,@Rn */
	r7 = 0x808080u; UPD(0x0C07E2AAu, 1);  /* 0C07E2A8 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFBCu;  /* 0C07E2AA add #imm,Rn */
	r0 = 0x4FFFFu; UPD(0x0C07E2AEu, 2);  /* 0C07E2AC mov.l @(disp,pc),Rn */
	W32(r8 + 0x3Cu, r7); UPD(0x0C07E2B0u, 1);  /* 0C07E2AE mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x38u, r0); UPD(0x0C07E2B2u, 1);  /* 0C07E2B0 mov.l Rm,@(disp,Rn) */
	r6 = 0x180000u; UPD(0x0C07E2B4u, 1);  /* 0C07E2B2 mov.l @(disp,pc),Rn */
	r5 = R32(r9 + 0x10u); UPD(0x0C07E2B6u, 1);  /* 0C07E2B4 mov.l @(disp,Rm),Rn */
	r5 += r6;  /* 0C07E2B6 add Rm,Rn */
	W32(r8 + 0x28u, r5); UPD(0x0C07E2BAu, 2);  /* 0C07E2B8 mov.l Rm,@(disp,Rn) */
	r1 = 0x100000u; UPD(0x0C07E2BCu, 1);  /* 0C07E2BA mov.l @(disp,pc),Rn */
	r4 = R32(r9 + 0x14u); UPD(0x0C07E2BEu, 1);  /* 0C07E2BC mov.l @(disp,Rm),Rn */
	r4 += r1;  /* 0C07E2BE add Rm,Rn */
	W32(r8 + 0x2Cu, r4); UPD(0x0C07E2C2u, 2);  /* 0C07E2C0 mov.l Rm,@(disp,Rn) */
	r9 = 0xC07B620u; UPD(0x0C07E2C4u, 1);  /* 0C07E2C2 mov.l @(disp,pc),Rn */
	r8 = 0xC0C20A0u; UPD(0x0C07E2C6u, 1);  /* 0C07E2C4 mov.l @(disp,pc),Rn */
	IF(0x0C07E2C6u); { u32 t_ = r9; PR = 0x0C07E2CAu; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07B620, 0x0C07B620u, 0x0C07E2CAu); }  /* 0C07E2C6 jsr @Rn */
L_0C07E2CA: BLKS(0x0C07E2CAu);
	r4 = r10;  /* 0C07E2CA mov Rm,Rn */
	IF(0x0C07E2CCu); { u32 t_ = r8; PR = 0x0C07E2D0u; r5 = 0x5Eu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0C20A0, 0x0C0C20A0u, 0x0C07E2D0u); }  /* 0C07E2CC jsr @Rn */
L_0C07E2D0: BLKS(0x0C07E2D0u);
	r5 = 0x9Cu; UPD(0x0C07E2D2u, 1);  /* 0C07E2D0 mov.w @(disp,pc),Rn */
	r4 = r10;  /* 0C07E2D2 mov Rm,Rn */
	r3 = 0xC0C2020u; UPD(0x0C07E2D6u, 2);  /* 0C07E2D4 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C07E2D6 mov Rm,Rn */
	IF(0x0C07E2D8u); PR = R32(r15); r15 += 4; UPD(0x0C07E2DAu, 2);  /* 0C07E2D8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07E2DCu, 1);  /* 0C07E2DA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07E2DEu, 1);  /* 0C07E2DC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07E2E0u, 1);  /* 0C07E2DE mov.l @Rm+,Rn */
	IF(0x0C07E2E0u); { u32 tv_ = r3; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0C2020u: TAIL(blk_f_0C0C2020); default: JUMPD(tv_); } }  /* 0C07E2E0 jmp @Rn */
L_0C07E2F0: BLKS(0x0C07E2F0u);
	r4 = r10;  /* 0C07E2F0 mov Rm,Rn */
	r10 = 0xC07D2E0u; UPD(0x0C07E2F4u, 2);  /* 0C07E2F2 mov.l @(disp,pc),Rn */
	IF(0x0C07E2F4u); { u32 t_ = r10; PR = 0x0C07E2F8u; IF(0x0C07E2F6u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C07D2E0, 0x0C07D2E0u, 0x0C07E2F8u); }  /* 0C07E2F4 jsr @Rn */
L_0C07E2F8: BLKS(0x0C07E2F8u);
	r4 = 0x80000u; UPD(0x0C07E2FAu, 1);  /* 0C07E2F8 mov.l @(disp,pc),Rn */
	r2 = 0xC071C90u; UPD(0x0C07E2FCu, 1);  /* 0C07E2FA mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C07E2FC mov Rm,Rn */
	IF(0x0C07E2FEu); PR = R32(r15); r15 += 4; UPD(0x0C07E300u, 2);  /* 0C07E2FE lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07E302u, 1);  /* 0C07E300 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07E304u, 1);  /* 0C07E302 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07E306u, 1);  /* 0C07E304 mov.l @Rm+,Rn */
	IF(0x0C07E306u); { u32 tv_ = r2; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C071C90u: TAIL(blk_f_0C071C90); default: JUMPD(tv_); } }  /* 0C07E306 jmp @Rn */
}

void blk_f_0C07E350(sh3_t *c)
{
	LOCALS;
L_0C07E350: BLKS(0x0C07E350u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07E352u, 1);  /* 0C07E350 mov.l Rm,@-Rn */
	r3 = 0x4u;  /* 0C07E352 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07E356u, 2);  /* 0C07E354 mov.l Rm,@-Rn */
	r5 = (u32)(s32)(s16)r5;  /* 0C07E356 exts.w Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07E35Au, 2);  /* 0C07E358 mov.l Rm,@-Rn */
	r2 = 0x2A0u; UPD(0x0C07E35Cu, 1);  /* 0C07E35A mov.w @(disp,pc),Rn */
	r10 = (u32)(s32)(s16)r4;  /* 0C07E35C exts.w Rm,Rn */
	IF(0x0C07E35Eu); MACL = r10 * r2;  /* 0C07E35E mul.l Rm,Rn */
	r0 = 0xC29D1D8u; UPD(0x0C07E362u, 4);  /* 0C07E360 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07E364u, 1);  /* 0C07E362 mov.l Rm,@-Rn */
	IF(0x0C07E364u); r9 = MACL;  /* 0C07E364 sts macl,Rn */
	r9 += r0;  /* 0C07E366 add Rm,Rn */
	IF(0x0C07E368u); r15 -= 4; W32(r15, PR); UPD(0x0C07E36Au, 3);  /* 0C07E368 sts.l pr,@-Rn */
	r0 = 0x25Au; UPD(0x0C07E36Cu, 1);  /* 0C07E36A mov.w @(disp,pc),Rn */
	IF(0x0C07E36Cu); r2 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C07E36Eu, 1);  /* 0C07E36C mov.b @(r0,Rm),Rn */
	T = r2 > r3;  /* 0C07E36E cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07E3E0u, 4); goto L_0C07E3E0; } goto L_0C07E374; }  /* 0C07E370 bt/s */
L_0C07E374: BLKS(0x0C07E374u);
	r8 = 0x60u;  /* 0C07E374 mov #imm,Rn */
	IF(0x0C07E376u); MACL = r5 * r8;  /* 0C07E376 mul.l Rm,Rn */
	r3 = r2;  /* 0C07E378 mov Rm,Rn */
	r3 += 0x1u;  /* 0C07E37A add #imm,Rn */
	r2 = 0xC3BC7CCu; UPD(0x0C07E37Eu, 7);  /* 0C07E37C mov.l @(disp,pc),Rn */
	IF(0x0C07E37Eu); r8 = MACL;  /* 0C07E37E sts macl,Rn */
	IF(0x0C07E380u); W8(r0 + r9, r3); UPD(0x0C07E382u, 2);  /* 0C07E380 mov.b Rm,@(r0,Rn) */
	r8 += r2;  /* 0C07E382 add Rm,Rn */
	r4 = 0x0u;  /* 0C07E384 mov #imm,Rn */
	W32(r8 + 0xCu, r4); UPD(0x0C07E388u, 3);  /* 0C07E386 mov.l Rm,@(disp,Rn) */
	r7 = 0x8u;  /* 0C07E388 mov #imm,Rn */
	r0 = R32(r8); UPD(0x0C07E38Cu, 2);  /* 0C07E38A mov.l @Rm,Rn */
	r4 = r5;  /* 0C07E38C mov Rm,Rn */
	r1 = 0xEFFFFFFBu; UPD(0x0C07E390u, 2);  /* 0C07E38E mov.l @(disp,pc),Rn */
	r6 = 0x2u;  /* 0C07E390 mov #imm,Rn */
	r5 = 0xC07BF80u; UPD(0x0C07E394u, 2);  /* 0C07E392 mov.l @(disp,pc),Rn */
	r0 &= r1;  /* 0C07E394 and Rm,Rn */
	W32(r8, r0); UPD(0x0C07E398u, 2);  /* 0C07E396 mov.l Rm,@Rn */
	W32(r8 + 0x4u, r7); UPD(0x0C07E39Au, 1);  /* 0C07E398 mov.l Rm,@(disp,Rn) */
	IF(0x0C07E39Au); { u32 t_ = r5; PR = 0x0C07E39Eu; W32(r8 + 0x8u, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C07BF80, 0x0C07BF80u, 0x0C07E39Eu); }  /* 0C07E39A jsr @Rn */
L_0C07E39E: BLKS(0x0C07E39Eu);
	r3 = 0x3Cu;  /* 0C07E39E mov #imm,Rn */
	r8 += 0x4Fu;  /* 0C07E3A0 add #imm,Rn */
	W8(r8, r3); UPD(0x0C07E3A4u, 3);  /* 0C07E3A2 mov.b Rm,@Rn */
	r2 = 0x14u;  /* 0C07E3A4 mov #imm,Rn */
	r8 += 0xFFFFFFF5u;  /* 0C07E3A6 add #imm,Rn */
	W8(r8, r2); UPD(0x0C07E3AAu, 3);  /* 0C07E3A8 mov.b Rm,@Rn */
	r7 = 0x808080u; UPD(0x0C07E3ACu, 1);  /* 0C07E3AA mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFBCu;  /* 0C07E3AC add #imm,Rn */
	r0 = 0x4FFFFu; UPD(0x0C07E3B0u, 2);  /* 0C07E3AE mov.l @(disp,pc),Rn */
	W32(r8 + 0x3Cu, r7); UPD(0x0C07E3B2u, 1);  /* 0C07E3B0 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x38u, r0); UPD(0x0C07E3B4u, 1);  /* 0C07E3B2 mov.l Rm,@(disp,Rn) */
	r6 = 0x180000u; UPD(0x0C07E3B6u, 1);  /* 0C07E3B4 mov.l @(disp,pc),Rn */
	r5 = R32(r9 + 0x10u); UPD(0x0C07E3B8u, 1);  /* 0C07E3B6 mov.l @(disp,Rm),Rn */
	r5 += r6;  /* 0C07E3B8 add Rm,Rn */
	W32(r8 + 0x28u, r5); UPD(0x0C07E3BCu, 2);  /* 0C07E3BA mov.l Rm,@(disp,Rn) */
	r1 = 0x100000u; UPD(0x0C07E3BEu, 1);  /* 0C07E3BC mov.l @(disp,pc),Rn */
	r5 = 0x62u;  /* 0C07E3BE mov #imm,Rn */
	r4 = R32(r9 + 0x14u); UPD(0x0C07E3C2u, 2);  /* 0C07E3C0 mov.l @(disp,Rm),Rn */
	r4 += r1;  /* 0C07E3C2 add Rm,Rn */
	W32(r8 + 0x2Cu, r4); UPD(0x0C07E3C6u, 2);  /* 0C07E3C4 mov.l Rm,@(disp,Rn) */
	r8 = 0xC0C20A0u; UPD(0x0C07E3C8u, 1);  /* 0C07E3C6 mov.l @(disp,pc),Rn */
	IF(0x0C07E3C8u); { u32 t_ = r8; PR = 0x0C07E3CCu; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C20A0, 0x0C0C20A0u, 0x0C07E3CCu); }  /* 0C07E3C8 jsr @Rn */
L_0C07E3CC: BLKS(0x0C07E3CCu);
	r5 = 0x9Bu; UPD(0x0C07E3CEu, 1);  /* 0C07E3CC mov.w @(disp,pc),Rn */
	r4 = r10;  /* 0C07E3CE mov Rm,Rn */
	r3 = 0xC0C2020u; UPD(0x0C07E3D2u, 2);  /* 0C07E3D0 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C07E3D2 mov Rm,Rn */
	IF(0x0C07E3D4u); PR = R32(r15); r15 += 4; UPD(0x0C07E3D6u, 2);  /* 0C07E3D4 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07E3D8u, 1);  /* 0C07E3D6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07E3DAu, 1);  /* 0C07E3D8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07E3DCu, 1);  /* 0C07E3DA mov.l @Rm+,Rn */
	IF(0x0C07E3DCu); { u32 tv_ = r3; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0C2020u: TAIL(blk_f_0C0C2020); default: JUMPD(tv_); } }  /* 0C07E3DC jmp @Rn */
L_0C07E3E0: BLKS(0x0C07E3E0u);
	r9 = 0xC07D2E0u; UPD(0x0C07E3E2u, 1);  /* 0C07E3E0 mov.l @(disp,pc),Rn */
	IF(0x0C07E3E2u); { u32 t_ = r9; PR = 0x0C07E3E6u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07D2E0, 0x0C07D2E0u, 0x0C07E3E6u); }  /* 0C07E3E2 jsr @Rn */
L_0C07E3E6: BLKS(0x0C07E3E6u);
	r4 = 0x400000u; UPD(0x0C07E3E8u, 1);  /* 0C07E3E6 mov.l @(disp,pc),Rn */
	r5 = 0xC071C90u; UPD(0x0C07E3EAu, 1);  /* 0C07E3E8 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C07E3EA mov Rm,Rn */
	IF(0x0C07E3ECu); PR = R32(r15); r15 += 4; UPD(0x0C07E3EEu, 2);  /* 0C07E3EC lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07E3F0u, 1);  /* 0C07E3EE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07E3F2u, 1);  /* 0C07E3F0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07E3F4u, 1);  /* 0C07E3F2 mov.l @Rm+,Rn */
	IF(0x0C07E3F4u); { u32 tv_ = r5; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C071C90u: TAIL(blk_f_0C071C90); default: JUMPD(tv_); } }  /* 0C07E3F4 jmp @Rn */
}

void blk_f_0C07E440(sh3_t *c)
{
	LOCALS;
L_0C07E440: BLKS(0x0C07E440u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07E442u, 1);  /* 0C07E440 mov.l Rm,@-Rn */
	r1 = (u32)(s32)(s16)r5;  /* 0C07E442 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07E446u, 2);  /* 0C07E444 mov.l Rm,@-Rn */
	r8 = 0x60u;  /* 0C07E446 mov #imm,Rn */
	IF(0x0C07E448u); MACL = r1 * r8;  /* 0C07E448 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07E44Cu, 4);  /* 0C07E44A mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C07E44C exts.w Rm,Rn */
	r2 = 0xC3BC7CCu; UPD(0x0C07E450u, 2);  /* 0C07E44E mov.l @(disp,pc),Rn */
	IF(0x0C07E450u); r8 = MACL;  /* 0C07E450 sts macl,Rn */
	IF(0x0C07E452u); r15 -= 4; W32(r15, PR); UPD(0x0C07E454u, 2);  /* 0C07E452 sts.l pr,@-Rn */
	r8 += r2;  /* 0C07E454 add Rm,Rn */
	r0 = R32(r8 + 0x8u); UPD(0x0C07E458u, 2);  /* 0C07E456 mov.l @(disp,Rm),Rn */
	r5 = 0xBu;  /* 0C07E458 mov #imm,Rn */
	r6 = 0xC189C8Cu; UPD(0x0C07E45Cu, 2);  /* 0C07E45A mov.l @(disp,pc),Rn */
	IF(0x0C07E45Cu); r0 <<= 2;  /* 0C07E45C shll2 Rn */
	IF(0x0C07E45Eu); r4 = R32(r0 + r6); UPD(0x0C07E460u, 2);  /* 0C07E45E mov.l @(r0,Rm),Rn */
	r14 = r15;  /* 0C07E460 mov Rm,Rn */
	r0 = 0xC071CC0u; UPD(0x0C07E464u, 2);  /* 0C07E462 mov.l @(disp,pc),Rn */
	IF(0x0C07E464u); { u32 t_ = r0; PR = 0x0C07E468u; IF(0x0C07E466u); ARG0(0x445Du); { s32 s_ = (s32)r5; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = 0; else r4 >>= ((~s_ & 31) + 1); } /* slot shld Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C071CC0, 0x0C071CC0u, 0x0C07E468u); }  /* 0C07E464 jsr @Rn */
L_0C07E468: BLKS(0x0C07E468u);
	r4 = 0x2A0u; UPD(0x0C07E46Au, 1);  /* 0C07E468 mov.w @(disp,pc),Rn */
	r7 = r8;  /* 0C07E46A mov Rm,Rn */
	IF(0x0C07E46Cu); MACL = r9 * r4;  /* 0C07E46C mul.l Rm,Rn */
	r7 += 0x54u;  /* 0C07E46E add #imm,Rn */
	r8 += 0x58u;  /* 0C07E470 add #imm,Rn */
	r2 = R32(r8); UPD(0x0C07E474u, 6);  /* 0C07E472 mov.l @Rm,Rn */
	IF(0x0C07E474u); r4 = MACL;  /* 0C07E474 sts macl,Rn */
	r6 = R32(r7); UPD(0x0C07E478u, 2);  /* 0C07E476 mov.l @Rm,Rn */
	r5 = 0xAu;  /* 0C07E478 mov #imm,Rn */
	r3 = 0xC29D1D8u; UPD(0x0C07E47Cu, 2);  /* 0C07E47A mov.l @(disp,pc),Rn */
	r6 += r2;  /* 0C07E47C add Rm,Rn */
	r0 = 0x290u; UPD(0x0C07E480u, 2);  /* 0C07E47E mov.w @(disp,pc),Rn */
	IF(0x0C07E480u); MACL = r6 * r5;  /* 0C07E480 mul.l Rm,Rn */
	r4 += r3;  /* 0C07E482 add Rm,Rn */
	r4 += r0;  /* 0C07E484 add Rm,Rn */
	r3 = R32(r4); UPD(0x0C07E488u, 5);  /* 0C07E486 mov.l @Rm,Rn */
	IF(0x0C07E488u); r1 = MACL;  /* 0C07E488 sts macl,Rn */
	r3 += r1;  /* 0C07E48A add Rm,Rn */
	W32(r4, r3); UPD(0x0C07E48Eu, 3);  /* 0C07E48C mov.l Rm,@Rn */
	r8 += 0xFFFFFFA8u;  /* 0C07E48E add #imm,Rn */
	r0 = 0x0u;  /* 0C07E490 mov #imm,Rn */
	W32(r8, r0); UPD(0x0C07E494u, 3);  /* 0C07E492 mov.l Rm,@Rn */
	r4 = r9;  /* 0C07E494 mov Rm,Rn */
	r0 = 0xC0C20A0u; UPD(0x0C07E498u, 2);  /* 0C07E496 mov.l @(disp,pc),Rn */
	r5 = 0x63u;  /* 0C07E498 mov #imm,Rn */
	r15 = r14;  /* 0C07E49A mov Rm,Rn */
	IF(0x0C07E49Cu); PR = R32(r15); r15 += 4; UPD(0x0C07E49Eu, 3);  /* 0C07E49C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07E4A0u, 1);  /* 0C07E49E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07E4A2u, 1);  /* 0C07E4A0 mov.l @Rm+,Rn */
	IF(0x0C07E4A2u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0C20A0u: TAIL(blk_f_0C0C20A0); default: JUMPD(tv_); } }  /* 0C07E4A2 jmp @Rn */
}

void blk_f_0C07E4C0(sh3_t *c)
{
	LOCALS;
L_0C07E4C0: BLKS(0x0C07E4C0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07E4C2u, 1);  /* 0C07E4C0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07E4C4u, 1);  /* 0C07E4C2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07E4C6u, 1);  /* 0C07E4C4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07E4C8u, 1);  /* 0C07E4C6 mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s16)r5;  /* 0C07E4C8 exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07E4CCu, 2);  /* 0C07E4CA mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C07E4CC exts.w Rm,Rn */
	r8 = 0xC071C90u; UPD(0x0C07E4D0u, 2);  /* 0C07E4CE mov.l @(disp,pc),Rn */
	IF(0x0C07E4D0u); r15 -= 4; W32(r15, PR); UPD(0x0C07E4D2u, 1);  /* 0C07E4D0 sts.l pr,@-Rn */
	r4 = 0x400000u; UPD(0x0C07E4D4u, 1);  /* 0C07E4D2 mov.l @(disp,pc),Rn */
	IF(0x0C07E4D4u); { u32 t_ = r8; PR = 0x0C07E4D8u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C071C90, 0x0C071C90u, 0x0C07E4D8u); }  /* 0C07E4D4 jsr @Rn */
L_0C07E4D8: BLKS(0x0C07E4D8u);
	r0 = 0x2A0u; UPD(0x0C07E4DAu, 1);  /* 0C07E4D8 mov.w @(disp,pc),Rn */
	IF(0x0C07E4DAu); MACL = r11 * r0;  /* 0C07E4DA mul.l Rm,Rn */
	r3 = 0x25Cu; UPD(0x0C07E4DEu, 3);  /* 0C07E4DC mov.w @(disp,pc),Rn */
	r0 = 0xC29D1D8u; UPD(0x0C07E4E0u, 1);  /* 0C07E4DE mov.l @(disp,pc),Rn */
	IF(0x0C07E4E0u); r9 = MACL;  /* 0C07E4E0 sts macl,Rn */
	r9 += r0;  /* 0C07E4E2 add Rm,Rn */
	r3 += r9;  /* 0C07E4E4 add Rm,Rn */
	r2 = r3;  /* 0C07E4E6 mov Rm,Rn */
	r2 += 0x1u;  /* 0C07E4E8 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C07E4ECu, 6);  /* 0C07E4EA mov.b @Rm,Rn */
	T = r0 == 0x4u;  /* 0C07E4EC cmp/eq #imm,r0 */
	{ u32 c_ = T; r7 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07E570u, 4); goto L_0C07E570; } goto L_0C07E4F2; }  /* 0C07E4EE bt/s */
L_0C07E4F2: BLKS(0x0C07E4F2u);
	r7 += 0x1u;  /* 0C07E4F2 add #imm,Rn */
	r8 = 0x60u;  /* 0C07E4F4 mov #imm,Rn */
	W8(r2, r7); UPD(0x0C07E4F8u, 4);  /* 0C07E4F6 mov.b Rm,@Rn */
	IF(0x0C07E4F8u); MACL = r10 * r8;  /* 0C07E4F8 mul.l Rm,Rn */
	r2 = 0xC3BC7CCu; UPD(0x0C07E4FCu, 3);  /* 0C07E4FA mov.l @(disp,pc),Rn */
	r4 = 0x1u;  /* 0C07E4FC mov #imm,Rn */
	IF(0x0C07E4FEu); r8 = MACL;  /* 0C07E4FE sts macl,Rn */
	r8 += r2;  /* 0C07E500 add Rm,Rn */
	W32(r8 + 0x8u, r4); UPD(0x0C07E504u, 4);  /* 0C07E502 mov.l Rm,@(disp,Rn) */
	r5 = 0x8u;  /* 0C07E504 mov #imm,Rn */
	r6 = R32(r8); UPD(0x0C07E508u, 2);  /* 0C07E506 mov.l @Rm,Rn */
	r4 = r10;  /* 0C07E508 mov Rm,Rn */
	r1 = 0xEFFFFFFBu; UPD(0x0C07E50Cu, 2);  /* 0C07E50A mov.l @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C07E50C mov #imm,Rn */
	r10 = 0xC07BF80u; UPD(0x0C07E510u, 2);  /* 0C07E50E mov.l @(disp,pc),Rn */
	r6 &= r1;  /* 0C07E510 and Rm,Rn */
	W32(r8, r6); UPD(0x0C07E514u, 2);  /* 0C07E512 mov.l Rm,@Rn */
	W32(r8 + 0x4u, r5); UPD(0x0C07E516u, 1);  /* 0C07E514 mov.l Rm,@(disp,Rn) */
	IF(0x0C07E516u); { u32 t_ = r10; PR = 0x0C07E51Au; W32(r8 + 0xCu, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C07BF80, 0x0C07BF80u, 0x0C07E51Au); }  /* 0C07E516 jsr @Rn */
L_0C07E51A: BLKS(0x0C07E51Au);
	r8 += 0x4Fu;  /* 0C07E51A add #imm,Rn */
	r0 = 0x3Cu;  /* 0C07E51C mov #imm,Rn */
	W8(r8, r0); UPD(0x0C07E520u, 3);  /* 0C07E51E mov.b Rm,@Rn */
	r7 = 0x14u;  /* 0C07E520 mov #imm,Rn */
	r8 += 0xFFFFFFF5u;  /* 0C07E522 add #imm,Rn */
	W8(r8, r7); UPD(0x0C07E526u, 3);  /* 0C07E524 mov.b Rm,@Rn */
	r6 = 0x4FFFFu; UPD(0x0C07E528u, 1);  /* 0C07E526 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFBCu;  /* 0C07E528 add #imm,Rn */
	r2 = 0x808080u; UPD(0x0C07E52Cu, 2);  /* 0C07E52A mov.l @(disp,pc),Rn */
	W32(r8 + 0x38u, r6); UPD(0x0C07E52Eu, 1);  /* 0C07E52C mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x3Cu, r2); UPD(0x0C07E530u, 1);  /* 0C07E52E mov.l Rm,@(disp,Rn) */
	r5 = 0x180000u; UPD(0x0C07E532u, 1);  /* 0C07E530 mov.l @(disp,pc),Rn */
	r4 = R32(r9 + 0x10u); UPD(0x0C07E534u, 1);  /* 0C07E532 mov.l @(disp,Rm),Rn */
	r4 += r5;  /* 0C07E534 add Rm,Rn */
	W32(r8 + 0x28u, r4); UPD(0x0C07E538u, 2);  /* 0C07E536 mov.l Rm,@(disp,Rn) */
	r3 = R32(r9 + 0x14u); UPD(0x0C07E53Au, 1);  /* 0C07E538 mov.l @(disp,Rm),Rn */
	r4 = r11;  /* 0C07E53A mov Rm,Rn */
	r1 = 0x100000u; UPD(0x0C07E53Eu, 2);  /* 0C07E53C mov.l @(disp,pc),Rn */
	r10 = 0xC07B620u; UPD(0x0C07E540u, 1);  /* 0C07E53E mov.l @(disp,pc),Rn */
	r3 += r1;  /* 0C07E540 add Rm,Rn */
	r9 = 0xC0C20A0u; UPD(0x0C07E544u, 2);  /* 0C07E542 mov.l @(disp,pc),Rn */
	IF(0x0C07E544u); { u32 t_ = r10; PR = 0x0C07E548u; W32(r8 + 0x2Cu, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C07B620, 0x0C07B620u, 0x0C07E548u); }  /* 0C07E544 jsr @Rn */
L_0C07E548: BLKS(0x0C07E548u);
	r4 = r11;  /* 0C07E548 mov Rm,Rn */
	IF(0x0C07E54Au); { u32 t_ = r9; PR = 0x0C07E54Eu; r5 = 0x61u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0C20A0, 0x0C0C20A0u, 0x0C07E54Eu); }  /* 0C07E54A jsr @Rn */
L_0C07E54E: BLKS(0x0C07E54Eu);
	r5 = 0x9Au; UPD(0x0C07E550u, 1);  /* 0C07E54E mov.w @(disp,pc),Rn */
	r4 = r11;  /* 0C07E550 mov Rm,Rn */
	r1 = 0xC0C2020u; UPD(0x0C07E554u, 2);  /* 0C07E552 mov.l @(disp,pc),Rn */
L_0C07E554: BLKS(0x0C07E554u);
	r15 = r14;  /* 0C07E554 mov Rm,Rn */
	IF(0x0C07E556u); PR = R32(r15); r15 += 4; UPD(0x0C07E558u, 2);  /* 0C07E556 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07E55Au, 1);  /* 0C07E558 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07E55Cu, 1);  /* 0C07E55A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07E55Eu, 1);  /* 0C07E55C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07E560u, 1);  /* 0C07E55E mov.l @Rm+,Rn */
	IF(0x0C07E560u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C07D2E0u: TAIL(blk_f_0C07D2E0); case 0x0C0C2020u: TAIL(blk_f_0C0C2020); default: JUMPD(tv_); } }  /* 0C07E560 jmp @Rn */
L_0C07E570: BLKS(0x0C07E570u);
	r3 += 0x2u;  /* 0C07E570 add #imm,Rn */
	r9 = 0x28u;  /* 0C07E572 mov #imm,Rn */
	r1 = 0xC07D2E0u; UPD(0x0C07E576u, 3);  /* 0C07E574 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C07E576 mov Rm,Rn */
	W8(r3, r9); UPD(0x0C07E57Au, 2);  /* 0C07E578 mov.b Rm,@Rn */
	{ r5 = r10; /* slot mov Rm,Rn */ UPD(0x0C07E554u, 3); goto L_0C07E554; }  /* 0C07E57A bra */
}

void blk_f_0C07E5C0(sh3_t *c)
{
	LOCALS;
L_0C07E5C0: BLKS(0x0C07E5C0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07E5C2u, 1);  /* 0C07E5C0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07E5C4u, 1);  /* 0C07E5C2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07E5C6u, 1);  /* 0C07E5C4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07E5C8u, 1);  /* 0C07E5C6 mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s16)r4;  /* 0C07E5C8 exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07E5CCu, 2);  /* 0C07E5CA mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s16)r5;  /* 0C07E5CC exts.w Rm,Rn */
	r8 = 0xC071C90u; UPD(0x0C07E5D0u, 2);  /* 0C07E5CE mov.l @(disp,pc),Rn */
	IF(0x0C07E5D0u); r15 -= 4; W32(r15, PR); UPD(0x0C07E5D2u, 1);  /* 0C07E5D0 sts.l pr,@-Rn */
	r4 = 0x40000u; UPD(0x0C07E5D4u, 1);  /* 0C07E5D2 mov.l @(disp,pc),Rn */
	IF(0x0C07E5D4u); { u32 t_ = r8; PR = 0x0C07E5D8u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C071C90, 0x0C071C90u, 0x0C07E5D8u); }  /* 0C07E5D4 jsr @Rn */
L_0C07E5D8: BLKS(0x0C07E5D8u);
	r2 = 0x2A0u; UPD(0x0C07E5DAu, 1);  /* 0C07E5D8 mov.w @(disp,pc),Rn */
	IF(0x0C07E5DAu); MACL = r10 * r2;  /* 0C07E5DA mul.l Rm,Rn */
	r0 = 0xC29D1D8u; UPD(0x0C07E5DEu, 3);  /* 0C07E5DC mov.l @(disp,pc),Rn */
	IF(0x0C07E5DEu); r9 = MACL;  /* 0C07E5DE sts macl,Rn */
	r3 = 0x25Cu; UPD(0x0C07E5E2u, 2);  /* 0C07E5E0 mov.w @(disp,pc),Rn */
	r9 += r0;  /* 0C07E5E2 add Rm,Rn */
	r3 += r9;  /* 0C07E5E4 add Rm,Rn */
	r7 = r3;  /* 0C07E5E6 mov Rm,Rn */
	r7 += 0x2u;  /* 0C07E5E8 add #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r7); UPD(0x0C07E5ECu, 5);  /* 0C07E5EA mov.b @Rm,Rn */
	r0 = 0x26u;  /* 0C07E5EC mov #imm,Rn */
	T = r2 > r0;  /* 0C07E5EE cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C07E690u, 5); goto L_0C07E690; }  /* 0C07E5F0 bf */
L_0C07E5F2: BLKS(0x0C07E5F2u);
	r2 = r3;  /* 0C07E5F2 mov Rm,Rn */
	r2 += 0x1u;  /* 0C07E5F4 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C07E5F8u, 3);  /* 0C07E5F6 mov.b @Rm,Rn */
	T = r0 == 0x4u;  /* 0C07E5F8 cmp/eq #imm,r0 */
	{ u32 c_ = T; r6 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07E680u, 4); goto L_0C07E680; } goto L_0C07E5FE; }  /* 0C07E5FA bt/s */
L_0C07E5FE: BLKS(0x0C07E5FEu);
	r6 += 0x1u;  /* 0C07E5FE add #imm,Rn */
	r8 = 0x60u;  /* 0C07E600 mov #imm,Rn */
	W8(r2, r6); UPD(0x0C07E604u, 4);  /* 0C07E602 mov.b Rm,@Rn */
	IF(0x0C07E604u); MACL = r11 * r8;  /* 0C07E604 mul.l Rm,Rn */
	r5 = 0x0u;  /* 0C07E606 mov #imm,Rn */
	r2 = 0xC3BC7CCu; UPD(0x0C07E60Au, 4);  /* 0C07E608 mov.l @(disp,pc),Rn */
	IF(0x0C07E60Au); r8 = MACL;  /* 0C07E60A sts macl,Rn */
	W8(r7, r5); UPD(0x0C07E60Eu, 2);  /* 0C07E60C mov.b Rm,@Rn */
	r8 += r2;  /* 0C07E60E add Rm,Rn */
	r4 = R32(r8); UPD(0x0C07E612u, 2);  /* 0C07E610 mov.l @Rm,Rn */
	r3 = 0x8u;  /* 0C07E612 mov #imm,Rn */
	r1 = 0xEFFFFFFBu; UPD(0x0C07E616u, 2);  /* 0C07E614 mov.l @(disp,pc),Rn */
	r0 = 0x1u;  /* 0C07E616 mov #imm,Rn */
	r4 &= r1;  /* 0C07E618 and Rm,Rn */
	W32(r8, r4); UPD(0x0C07E61Cu, 3);  /* 0C07E61A mov.l Rm,@Rn */
	r7 = 0x0u;  /* 0C07E61C mov #imm,Rn */
	r4 = r11;  /* 0C07E61E mov Rm,Rn */
	r11 = 0xC07BF80u; UPD(0x0C07E622u, 3);  /* 0C07E620 mov.l @(disp,pc),Rn */
	W32(r8 + 0x4u, r3); UPD(0x0C07E624u, 1);  /* 0C07E622 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x8u, r0); UPD(0x0C07E626u, 1);  /* 0C07E624 mov.l Rm,@(disp,Rn) */
	IF(0x0C07E626u); { u32 t_ = r11; PR = 0x0C07E62Au; W32(r8 + 0xCu, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C07BF80, 0x0C07BF80u, 0x0C07E62Au); }  /* 0C07E626 jsr @Rn */
L_0C07E62A: BLKS(0x0C07E62Au);
	r6 = 0x3Cu;  /* 0C07E62A mov #imm,Rn */
	r8 += 0x4Fu;  /* 0C07E62C add #imm,Rn */
	W8(r8, r6); UPD(0x0C07E630u, 3);  /* 0C07E62E mov.b Rm,@Rn */
	r5 = 0x14u;  /* 0C07E630 mov #imm,Rn */
	r8 += 0xFFFFFFF5u;  /* 0C07E632 add #imm,Rn */
	W8(r8, r5); UPD(0x0C07E636u, 3);  /* 0C07E634 mov.b Rm,@Rn */
	r2 = 0x808080u; UPD(0x0C07E638u, 1);  /* 0C07E636 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFBCu;  /* 0C07E638 add #imm,Rn */
	r4 = 0x4FFFFu; UPD(0x0C07E63Cu, 2);  /* 0C07E63A mov.l @(disp,pc),Rn */
	W32(r8 + 0x3Cu, r2); UPD(0x0C07E63Eu, 1);  /* 0C07E63C mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x38u, r4); UPD(0x0C07E640u, 1);  /* 0C07E63E mov.l Rm,@(disp,Rn) */
	r3 = 0x180000u; UPD(0x0C07E642u, 1);  /* 0C07E640 mov.l @(disp,pc),Rn */
	r0 = R32(r9 + 0x10u); UPD(0x0C07E644u, 1);  /* 0C07E642 mov.l @(disp,Rm),Rn */
	r0 += r3;  /* 0C07E644 add Rm,Rn */
	W32(r8 + 0x28u, r0); UPD(0x0C07E648u, 2);  /* 0C07E646 mov.l Rm,@(disp,Rn) */
	r1 = 0x100000u; UPD(0x0C07E64Au, 1);  /* 0C07E648 mov.l @(disp,pc),Rn */
	r7 = R32(r9 + 0x14u); UPD(0x0C07E64Cu, 1);  /* 0C07E64A mov.l @(disp,Rm),Rn */
	r7 += r1;  /* 0C07E64C add Rm,Rn */
	W32(r8 + 0x2Cu, r7); UPD(0x0C07E650u, 2);  /* 0C07E64E mov.l Rm,@(disp,Rn) */
	r8 = 0xC07B620u; UPD(0x0C07E652u, 1);  /* 0C07E650 mov.l @(disp,pc),Rn */
	r11 = 0xC0C20A0u; UPD(0x0C07E654u, 1);  /* 0C07E652 mov.l @(disp,pc),Rn */
	IF(0x0C07E654u); { u32 t_ = r8; PR = 0x0C07E658u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07B620, 0x0C07B620u, 0x0C07E658u); }  /* 0C07E654 jsr @Rn */
L_0C07E658: BLKS(0x0C07E658u);
	r4 = r10;  /* 0C07E658 mov Rm,Rn */
	IF(0x0C07E65Au); { u32 t_ = r11; PR = 0x0C07E65Eu; r5 = 0x61u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0C20A0, 0x0C0C20A0u, 0x0C07E65Eu); }  /* 0C07E65A jsr @Rn */
L_0C07E65E: BLKS(0x0C07E65Eu);
	r5 = 0x9Au; UPD(0x0C07E660u, 1);  /* 0C07E65E mov.w @(disp,pc),Rn */
	r4 = r10;  /* 0C07E660 mov Rm,Rn */
	r1 = 0xC0C2020u; UPD(0x0C07E664u, 2);  /* 0C07E662 mov.l @(disp,pc),Rn */
L_0C07E664: BLKS(0x0C07E664u);
	r15 = r14;  /* 0C07E664 mov Rm,Rn */
	IF(0x0C07E666u); PR = R32(r15); r15 += 4; UPD(0x0C07E668u, 2);  /* 0C07E666 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07E66Au, 1);  /* 0C07E668 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07E66Cu, 1);  /* 0C07E66A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07E66Eu, 1);  /* 0C07E66C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07E670u, 1);  /* 0C07E66E mov.l @Rm+,Rn */
	IF(0x0C07E670u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C07D2E0u: TAIL(blk_f_0C07D2E0); case 0x0C0C2020u: TAIL(blk_f_0C0C2020); default: JUMPD(tv_); } }  /* 0C07E670 jmp @Rn */
L_0C07E680: BLKS(0x0C07E680u);
	r9 = 0x28u;  /* 0C07E680 mov #imm,Rn */
	r1 = 0xC07D2E0u; UPD(0x0C07E684u, 2);  /* 0C07E682 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C07E684 mov Rm,Rn */
	W8(r7, r9); UPD(0x0C07E688u, 2);  /* 0C07E686 mov.b Rm,@Rn */
	{ r5 = r11; /* slot mov Rm,Rn */ UPD(0x0C07E664u, 3); goto L_0C07E664; }  /* 0C07E688 bra */
L_0C07E690: BLKS(0x0C07E690u);
	r9 = 0xC0C20A0u; UPD(0x0C07E692u, 1);  /* 0C07E690 mov.l @(disp,pc),Rn */
	r6 = r2;  /* 0C07E692 mov Rm,Rn */
	r6 += 0x1u;  /* 0C07E694 add #imm,Rn */
	r4 = r10;  /* 0C07E696 mov Rm,Rn */
	W8(r7, r6); UPD(0x0C07E69Au, 4);  /* 0C07E698 mov.b Rm,@Rn */
	IF(0x0C07E69Au); { u32 t_ = r9; PR = 0x0C07E69Eu; r5 = 0x60u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C20A0, 0x0C0C20A0u, 0x0C07E69Eu); }  /* 0C07E69A jsr @Rn */
L_0C07E69E: BLKS(0x0C07E69Eu);
	r5 = 0x60u;  /* 0C07E69E mov #imm,Rn */
	IF(0x0C07E6A0u); MACL = r11 * r5;  /* 0C07E6A0 mul.l Rm,Rn */
	r3 = 0xC3BC7CCu; UPD(0x0C07E6A4u, 4);  /* 0C07E6A2 mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C07E6A4 mov #imm,Rn */
	IF(0x0C07E6A6u); r0 = MACL;  /* 0C07E6A6 sts macl,Rn */
	IF(0x0C07E6A8u); W32(r0 + r3, r4); UPD(0x0C07E6AAu, 3);  /* 0C07E6A8 mov.l Rm,@(r0,Rn) */
	r15 = r14;  /* 0C07E6AA mov Rm,Rn */
	IF(0x0C07E6ACu); PR = R32(r15); r15 += 4; UPD(0x0C07E6AEu, 2);  /* 0C07E6AC lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07E6B0u, 1);  /* 0C07E6AE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07E6B2u, 1);  /* 0C07E6B0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07E6B4u, 1);  /* 0C07E6B2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07E6B6u, 1);  /* 0C07E6B4 mov.l @Rm+,Rn */
	IF(0x0C07E6B6u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07E6B6 rts */
}

void blk_f_0C07E700(sh3_t *c)
{
	LOCALS;
L_0C07E700: BLKS(0x0C07E700u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07E702u, 1);  /* 0C07E700 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07E704u, 1);  /* 0C07E702 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07E706u, 1);  /* 0C07E704 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07E708u, 1);  /* 0C07E706 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07E70Au, 1);  /* 0C07E708 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C07E70Cu, 1);  /* 0C07E70A mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07E70Eu, 1);  /* 0C07E70C mov.l Rm,@-Rn */
	r4 = 0xC2ABAA4u; UPD(0x0C07E710u, 1);  /* 0C07E70E mov.l @(disp,pc),Rn */
	IF(0x0C07E710u); r15 -= 4; W32(r15, PR); UPD(0x0C07E712u, 1);  /* 0C07E710 sts.l pr,@-Rn */
	r3 = R32(r4); UPD(0x0C07E714u, 1);  /* 0C07E712 mov.l @Rm,Rn */
	r15 += 0xFFFFFFF4u;  /* 0C07E714 add #imm,Rn */
	r8 = 0xC29D724u; UPD(0x0C07E718u, 2);  /* 0C07E716 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C07E718 mov Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r0 = v_; } UPD(0x0C07E71Cu, 2);  /* 0C07E71A mov.w @Rm+,Rn */
	r7 = R32(r8); UPD(0x0C07E71Eu, 1);  /* 0C07E71C mov.l @Rm,Rn */
	IF(0x0C07E71Eu); r0 <<= 2;  /* 0C07E71E shll2 Rn */
	IF(0x0C07E720u); r6 = R32(r0 + r7); UPD(0x0C07E722u, 2);  /* 0C07E720 mov.l @(r0,Rm),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r2 = v_; } UPD(0x0C07E724u, 1);  /* 0C07E722 mov.w @Rm+,Rn */
	r5 = 0xC297460u; UPD(0x0C07E726u, 1);  /* 0C07E724 mov.l @(disp,pc),Rn */
	r9 = 0xC2460ACu; UPD(0x0C07E728u, 1);  /* 0C07E726 mov.l @(disp,pc),Rn */
	r8 = 0xC069510u; UPD(0x0C07E72Au, 1);  /* 0C07E728 mov.l @(disp,pc),Rn */
	W32(r5, r6); UPD(0x0C07E72Cu, 1);  /* 0C07E72A mov.l Rm,@Rn */
	W32(r4, r3); UPD(0x0C07E72Eu, 1);  /* 0C07E72C mov.l Rm,@Rn */
	r0 = (u32)(s32)(s16)R16(r9); UPD(0x0C07E730u, 1);  /* 0C07E72E mov.w @Rm,Rn */
	r11 = 0xC2B03A2u; UPD(0x0C07E732u, 1);  /* 0C07E730 mov.l @(disp,pc),Rn */
	r4 = r0 & 0xFFFF;  /* 0C07E732 extu.w Rm,Rn */
	r5 = 0x8000u; UPD(0x0C07E736u, 2);  /* 0C07E734 mov.l @(disp,pc),Rn */
	IF(0x0C07E736u); { u32 t_ = r8; PR = 0x0C07E73Au; W16(r11, r2); /* slot mov.w Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069510, 0x0C069510u, 0x0C07E73Au); }  /* 0C07E736 jsr @Rn */
L_0C07E73A: BLKS(0x0C07E73Au);
	T = (r0 & r0) == 0;  /* 0C07E73A tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07E760u, 4); goto L_0C07E760; } UPD(0x0C07E740u, 1); goto L_0C07E740; }  /* 0C07E73C bf/s */
L_0C07E740: BLKS(0x0C07E740u);
	r14 += 0xCu;  /* 0C07E740 add #imm,Rn */
	UPD(0x0C07E742u, 1);
L_0C07E742: BLKS(0x0C07E742u);
	r15 = r14;  /* 0C07E742 mov Rm,Rn */
	IF(0x0C07E744u); PR = R32(r15); r15 += 4; UPD(0x0C07E746u, 2);  /* 0C07E744 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07E748u, 1);  /* 0C07E746 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07E74Au, 1);  /* 0C07E748 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07E74Cu, 1);  /* 0C07E74A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07E74Eu, 1);  /* 0C07E74C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07E750u, 1);  /* 0C07E74E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07E752u, 1);  /* 0C07E750 mov.l @Rm+,Rn */
	IF(0x0C07E752u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07E752 rts */
L_0C07E760: BLKS(0x0C07E760u);
	r10 = 0xC071740u; UPD(0x0C07E762u, 1);  /* 0C07E760 mov.l @(disp,pc),Rn */
	IF(0x0C07E762u); { u32 t_ = r10; PR = 0x0C07E766u; r4 = 0x14u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C071740, 0x0C071740u, 0x0C07E766u); }  /* 0C07E762 jsr @Rn */
L_0C07E766: BLKS(0x0C07E766u);
	T = (r0 & r0) == 0;  /* 0C07E766 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07E740u, 4); goto L_0C07E740; } goto L_0C07E76C; }  /* 0C07E768 bt/s */
L_0C07E76C: BLKS(0x0C07E76Cu);
	r12 = 0xC28EDFCu; UPD(0x0C07E76Eu, 2);  /* 0C07E76C mov.l @(disp,pc),Rn */
	r8 = 0xB4u; UPD(0x0C07E770u, 1);  /* 0C07E76E mov.w @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r12); r12 += 2; r10 = v_; } UPD(0x0C07E772u, 1);  /* 0C07E770 mov.w @Rm+,Rn */
	IF(0x0C07E772u); MACL = r10 * r8;  /* 0C07E772 mul.l Rm,Rn */
	r3 = (u32)(s32)(s16)R16(r9); UPD(0x0C07E776u, 3);  /* 0C07E774 mov.w @Rm,Rn */
	r4 = 0xC286578u; UPD(0x0C07E778u, 1);  /* 0C07E776 mov.l @(disp,pc),Rn */
	IF(0x0C07E778u); r8 = MACL;  /* 0C07E778 sts macl,Rn */
	r8 += r4;  /* 0C07E77A add Rm,Rn */
	r0 = r3 & 0xFFFF;  /* 0C07E77C extu.w Rm,Rn */
	W32(r8 + 0x4u, r0); UPD(0x0C07E780u, 4);  /* 0C07E77E mov.l Rm,@(disp,Rn) */
	r4 = r10;  /* 0C07E780 mov Rm,Rn */
	r13 = (u32)(s32)(s16)R16(r11); UPD(0x0C07E784u, 2);  /* 0C07E782 mov.w @Rm,Rn */
	r0 = 0x8Au; UPD(0x0C07E786u, 1);  /* 0C07E784 mov.w @(disp,pc),Rn */
	r11 = 0x0u;  /* 0C07E786 mov #imm,Rn */
	r7 = 0xC0A8A30u; UPD(0x0C07E78Au, 2);  /* 0C07E788 mov.l @(disp,pc),Rn */
	IF(0x0C07E78Au); W16(r0 + r8, r13); UPD(0x0C07E78Cu, 1);  /* 0C07E78A mov.w Rm,@(r0,Rn) */
	r6 = 0xD3000104u; UPD(0x0C07E78Eu, 1);  /* 0C07E78C mov.l @(disp,pc),Rn */
	r0 += 0xFFFFFFFCu;  /* 0C07E78E add #imm,Rn */
	W32(r8, r6); UPD(0x0C07E792u, 2);  /* 0C07E790 mov.l Rm,@Rn */
	IF(0x0C07E792u); W16(r0 + r8, r13); UPD(0x0C07E794u, 1);  /* 0C07E792 mov.w Rm,@(r0,Rn) */
	W32(r8 + 0xCu, r11); UPD(0x0C07E796u, 1);  /* 0C07E794 mov.l Rm,@(disp,Rn) */
	IF(0x0C07E796u); { u32 t_ = r7; PR = 0x0C07E79Au; W32(r8 + 0x8u, r11); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C07E79Au); }  /* 0C07E796 jsr @Rn */
L_0C07E79A: BLKS(0x0C07E79Au);
	r9 = 0xC0722E0u; UPD(0x0C07E79Cu, 1);  /* 0C07E79A mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C07E79C mov Rm,Rn */
	r5 = 0x1600000u; UPD(0x0C07E7A0u, 2);  /* 0C07E79E mov.l @(disp,pc),Rn */
	IF(0x0C07E7A0u); { u32 t_ = r9; PR = 0x0C07E7A4u; W32(r8 + 0x24u, r5); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0722E0, 0x0C0722E0u, 0x0C07E7A4u); }  /* 0C07E7A0 jsr @Rn */
L_0C07E7A4: BLKS(0x0C07E7A4u);
	r2 = 0xC0A9AE0u; UPD(0x0C07E7A6u, 1);  /* 0C07E7A4 mov.l @(disp,pc),Rn */
	r9 = 0x8Cu; UPD(0x0C07E7A8u, 1);  /* 0C07E7A6 mov.w @(disp,pc),Rn */
	IF(0x0C07E7A8u); { u32 t_ = r2; PR = 0x0C07E7ACu; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C07E7ACu); }  /* 0C07E7A8 jsr @Rn */
L_0C07E7AC: BLKS(0x0C07E7ACu);
	r0 = 0xADu; UPD(0x0C07E7AEu, 1);  /* 0C07E7AC mov.w @(disp,pc),Rn */
	r4 = 0x13u;  /* 0C07E7AE mov #imm,Rn */
	r3 = 0xA8u; UPD(0x0C07E7B2u, 2);  /* 0C07E7B0 mov.w @(disp,pc),Rn */
	r9 += r8;  /* 0C07E7B2 add Rm,Rn */
	IF(0x0C07E7B4u); W8(r0 + r8, r4); UPD(0x0C07E7B6u, 2);  /* 0C07E7B4 mov.b Rm,@(r0,Rn) */
	r3 += r8;  /* 0C07E7B6 add Rm,Rn */
	r3 += 0x1u;  /* 0C07E7B8 add #imm,Rn */
	r0 = 0xC0A9D30u; UPD(0x0C07E7BCu, 3);  /* 0C07E7BA mov.l @(disp,pc),Rn */
	W8(r3, r4); UPD(0x0C07E7BEu, 1);  /* 0C07E7BC mov.b Rm,@Rn */
	r6 = 0xC297460u; UPD(0x0C07E7C0u, 1);  /* 0C07E7BE mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C07E7C0 mov Rm,Rn */
	r5 = R32(r6); UPD(0x0C07E7C4u, 2);  /* 0C07E7C2 mov.l @Rm,Rn */
	IF(0x0C07E7C4u); { u32 t_ = r0; PR = 0x0C07E7C8u; W32(r14 + 0x8u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9D30, 0x0C0A9D30u, 0x0C07E7C8u); }  /* 0C07E7C4 jsr @Rn */
L_0C07E7C8: BLKS(0x0C07E7C8u);
	r13 = 0x94u; UPD(0x0C07E7CAu, 1);  /* 0C07E7C8 mov.w @(disp,pc),Rn */
	r0 = 0x90u; UPD(0x0C07E7CCu, 1);  /* 0C07E7CA mov.w @(disp,pc),Rn */
	r13 += r8;  /* 0C07E7CC add Rm,Rn */
	r1 = R32(r14 + 0x8u); UPD(0x0C07E7D0u, 2);  /* 0C07E7CE mov.l @(disp,Rm),Rn */
	W32(r13, r11); UPD(0x0C07E7D2u, 1);  /* 0C07E7D0 mov.l Rm,@Rn */
	IF(0x0C07E7D2u); W32(r0 + r8, r11); UPD(0x0C07E7D4u, 1);  /* 0C07E7D2 mov.l Rm,@(r0,Rn) */
	r13 = r8;  /* 0C07E7D4 mov Rm,Rn */
	W32(r9, r11); UPD(0x0C07E7D8u, 2);  /* 0C07E7D6 mov.l Rm,@Rn */
	W32(r8 + 0x30u, r11); UPD(0x0C07E7DAu, 1);  /* 0C07E7D8 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x2Cu, r11); UPD(0x0C07E7DCu, 1);  /* 0C07E7DA mov.l Rm,@(disp,Rn) */
	W32(r14, r11); UPD(0x0C07E7DEu, 1);  /* 0C07E7DC mov.l Rm,@Rn */
	W32(r14 + 0x4u, r1); UPD(0x0C07E7E0u, 1);  /* 0C07E7DE mov.l Rm,@(disp,Rn) */
	r11 = 0x0u;  /* 0C07E7E0 mov #imm,Rn */
	IF(0x0C07E7E2u); ;  /* 0C07E7E2 nop */
	UPD(0x0C07E7E4u, 2);
L_0C07E7E4: BLKS(0x0C07E7E4u);
	r9 = 0xC18B83Cu; UPD(0x0C07E7E6u, 1);  /* 0C07E7E4 mov.l @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r12); r12 += 2; r10 = v_; } UPD(0x0C07E7E8u, 1);  /* 0C07E7E6 mov.w @Rm+,Rn */
	r9 += r11;  /* 0C07E7E8 add Rm,Rn */
	r8 = 0xB4u; UPD(0x0C07E7ECu, 2);  /* 0C07E7EA mov.w @(disp,pc),Rn */
	r9 += 0x4u;  /* 0C07E7EC add #imm,Rn */
	IF(0x0C07E7EEu); MACL = r10 * r8;  /* 0C07E7EE mul.l Rm,Rn */
	r6 = (u32)(s32)(s16)R16(r9); UPD(0x0C07E7F2u, 4);  /* 0C07E7F0 mov.w @Rm,Rn */
	r11 += 0x14u;  /* 0C07E7F2 add #imm,Rn */
	r1 = 0xC286578u; UPD(0x0C07E7F6u, 2);  /* 0C07E7F4 mov.l @(disp,pc),Rn */
	IF(0x0C07E7F6u); r8 = MACL;  /* 0C07E7F6 sts macl,Rn */
	r0 = 0xC28EDFCu; UPD(0x0C07E7FAu, 2);  /* 0C07E7F8 mov.l @(disp,pc),Rn */
	r6 += r6;  /* 0C07E7FA add Rm,Rn */
	IF(0x0C07E7FCu); r7 = (u32)(s32)(s16)R16(r0 + r6); UPD(0x0C07E7FEu, 2);  /* 0C07E7FC mov.w @(r0,Rm),Rn */
	r8 += r1;  /* 0C07E7FE add Rm,Rn */
	r8 += 0x7Cu;  /* 0C07E800 add #imm,Rn */
	W16(r8, r7); UPD(0x0C07E804u, 3);  /* 0C07E802 mov.w Rm,@Rn */
	r9 += 0xFFFFFFFCu;  /* 0C07E804 add #imm,Rn */
	r5 = (u32)(s32)(s16)R16(r0); UPD(0x0C07E808u, 2);  /* 0C07E806 mov.w @Rm,Rn */
	r8 += 0x2u;  /* 0C07E808 add #imm,Rn */
	W16(r8, r5); UPD(0x0C07E80Cu, 2);  /* 0C07E80A mov.w Rm,@Rn */
	r7 = 0x0u;  /* 0C07E80C mov #imm,Rn */
	r3 = 0xC2460ACu; UPD(0x0C07E810u, 2);  /* 0C07E80E mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFF82u;  /* 0C07E810 add #imm,Rn */
	r4 = (u32)(s32)(s16)R16(r3); UPD(0x0C07E814u, 2);  /* 0C07E812 mov.w @Rm,Rn */
	r2 = R32(r9); UPD(0x0C07E816u, 1);  /* 0C07E814 mov.l @Rm,Rn */
	r6 = r4 & 0xFFFF;  /* 0C07E816 extu.w Rm,Rn */
	W32(r8, r2); UPD(0x0C07E81Au, 2);  /* 0C07E818 mov.l Rm,@Rn */
	r4 = r10;  /* 0C07E81A mov Rm,Rn */
	W32(r8 + 0x4u, r6); UPD(0x0C07E81Eu, 2);  /* 0C07E81C mov.l Rm,@(disp,Rn) */
	r5 = 0xC0A8A30u; UPD(0x0C07E820u, 1);  /* 0C07E81E mov.l @(disp,pc),Rn */
	r0 = R32(r9 + 0x8u); UPD(0x0C07E822u, 1);  /* 0C07E820 mov.l @(disp,Rm),Rn */
	W32(r8 + 0xCu, r7); UPD(0x0C07E824u, 1);  /* 0C07E822 mov.l Rm,@(disp,Rn) */
	IF(0x0C07E824u); { u32 t_ = r5; PR = 0x0C07E828u; W32(r8 + 0x8u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C07E828u); }  /* 0C07E824 jsr @Rn */
L_0C07E828: BLKS(0x0C07E828u);
	r2 = 0xC2B03A2u; UPD(0x0C07E82Au, 1);  /* 0C07E828 mov.l @(disp,pc),Rn */
	r0 = r8;  /* 0C07E82A mov Rm,Rn */
	r3 = (u32)(s32)(s16)R16(r2); UPD(0x0C07E82Eu, 2);  /* 0C07E82C mov.w @Rm,Rn */
	IF(0x0C07E82Eu); r3 >>= 2;  /* 0C07E82E shlr2 Rn */
	r4 = 0x86u; UPD(0x0C07E832u, 2);  /* 0C07E830 mov.w @(disp,pc),Rn */
	IF(0x0C07E832u); r3 >>= 2;  /* 0C07E832 shlr2 Rn */
	IF(0x0C07E834u); r3 >>= 2;  /* 0C07E834 shlr2 Rn */
	IF(0x0C07E836u); W16(r0 + r4, r3); UPD(0x0C07E838u, 3);  /* 0C07E836 mov.w Rm,@(r0,Rn) */
	r6 = R32(r13 + 0x24u); UPD(0x0C07E83Au, 1);  /* 0C07E838 mov.l @(disp,Rm),Rn */
	r4 = r10;  /* 0C07E83A mov Rm,Rn */
	r0 = R32(r13 + 0x28u); UPD(0x0C07E83Eu, 2);  /* 0C07E83C mov.l @(disp,Rm),Rn */
	W32(r8 + 0x24u, r6); UPD(0x0C07E840u, 1);  /* 0C07E83E mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x28u, r0); UPD(0x0C07E842u, 1);  /* 0C07E840 mov.l Rm,@(disp,Rn) */
	r7 = R32(r9 + 0xCu); UPD(0x0C07E844u, 1);  /* 0C07E842 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x2Cu, r7); UPD(0x0C07E846u, 1);  /* 0C07E844 mov.l Rm,@(disp,Rn) */
	r5 = R32(r9 + 0x10u); UPD(0x0C07E848u, 1);  /* 0C07E846 mov.l @(disp,Rm),Rn */
	r10 = 0xC0A9AE0u; UPD(0x0C07E84Au, 1);  /* 0C07E848 mov.l @(disp,pc),Rn */
	W32(r8 + 0x30u, r5); UPD(0x0C07E84Cu, 1);  /* 0C07E84A mov.l Rm,@(disp,Rn) */
	r2 = 0xFFFA0000u; UPD(0x0C07E84Eu, 1);  /* 0C07E84C mov.l @(disp,pc),Rn */
	r8 += 0x50u;  /* 0C07E84E add #imm,Rn */
	IF(0x0C07E850u); { u32 t_ = r10; PR = 0x0C07E854u; W32(r8, r2); /* slot mov.l Rm,@Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C07E854u); }  /* 0C07E850 jsr @Rn */
L_0C07E854: BLKS(0x0C07E854u);
	r0 = 0xB0u; UPD(0x0C07E856u, 1);  /* 0C07E854 mov.w @(disp,pc),Rn */
	r8 += 0xFFFFFFB0u;  /* 0C07E856 add #imm,Rn */
	IF(0x0C07E858u); r3 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C07E85Au, 2);  /* 0C07E858 mov.b @(r0,Rm),Rn */
	r10 = 0x12u;  /* 0C07E85A mov #imm,Rn */
	IF(0x0C07E85Cu); W8(r0 + r8, r3); UPD(0x0C07E85Eu, 2);  /* 0C07E85C mov.b Rm,@(r0,Rn) */
	r0 = 0xA8u; UPD(0x0C07E860u, 1);  /* 0C07E85E mov.w @(disp,pc),Rn */
	r7 = 0xACu; UPD(0x0C07E862u, 1);  /* 0C07E860 mov.w @(disp,pc),Rn */
	r0 += r8;  /* 0C07E862 add Rm,Rn */
	r8 += r7;  /* 0C07E864 add Rm,Rn */
	r4 = R32(r14 + 0x4u); UPD(0x0C07E868u, 3);  /* 0C07E866 mov.l @(disp,Rm),Rn */
	r7 += r13;  /* 0C07E868 add Rm,Rn */
	r7 += 0x1u;  /* 0C07E86A add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r4); UPD(0x0C07E86Eu, 3);  /* 0C07E86C mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C07E86E add #imm,Rn */
	r5 = (u32)(s32)(s8)R8(r7); UPD(0x0C07E872u, 2);  /* 0C07E870 mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C07E872 add #imm,Rn */
	W8(r0, r6); UPD(0x0C07E876u, 2);  /* 0C07E874 mov.b Rm,@Rn */
	W8(r8, r5); UPD(0x0C07E878u, 1);  /* 0C07E876 mov.b Rm,@Rn */
	r9 = R32(r14); UPD(0x0C07E87Au, 1);  /* 0C07E878 mov.l @Rm,Rn */
	r9 += 0x1u;  /* 0C07E87A add #imm,Rn */
	r2 = (u32)(s32)(s16)r9;  /* 0C07E87C exts.w Rm,Rn */
	W32(r14, r2); UPD(0x0C07E880u, 3);  /* 0C07E87E mov.l Rm,@Rn */
	r1 = R32(r14); UPD(0x0C07E882u, 1);  /* 0C07E880 mov.l @Rm,Rn */
	T = (s32)r1 > (s32)r10;  /* 0C07E882 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07E7E4u, 4); goto L_0C07E7E4; } goto L_0C07E888; }  /* 0C07E884 bf/s */
L_0C07E888: BLKS(0x0C07E888u);
	{ r14 += 0xCu; /* slot add #imm,Rn */ UPD(0x0C07E742u, 4); goto L_0C07E742; }  /* 0C07E888 bra */
}

void blk_f_0C07E8F0(sh3_t *c)
{
	LOCALS;
L_0C07E8F0: BLKS(0x0C07E8F0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07E8F2u, 1);  /* 0C07E8F0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07E8F4u, 1);  /* 0C07E8F2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07E8F6u, 1);  /* 0C07E8F4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07E8F8u, 1);  /* 0C07E8F6 mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s16)r4;  /* 0C07E8F8 exts.w Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07E8FCu, 2);  /* 0C07E8FA mov.l Rm,@-Rn */
	r3 = 0xB4u; UPD(0x0C07E8FEu, 1);  /* 0C07E8FC mov.w @(disp,pc),Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C07E900u, 1);  /* 0C07E8FE mov.l Rm,@-Rn */
	IF(0x0C07E900u); MACL = r10 * r3;  /* 0C07E900 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07E904u, 3);  /* 0C07E902 mov.l Rm,@-Rn */
	r0 = 0xC286578u; UPD(0x0C07E906u, 1);  /* 0C07E904 mov.l @(disp,pc),Rn */
	IF(0x0C07E906u); r2 = MACL;  /* 0C07E906 sts macl,Rn */
	IF(0x0C07E908u); r15 -= 4; W32(r15, PR); UPD(0x0C07E90Au, 2);  /* 0C07E908 sts.l pr,@-Rn */
	r0 += r2;  /* 0C07E90A add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C07E90Eu, 2);  /* 0C07E90C mov.l @(disp,Rm),Rn */
	r0 = 0xBu;  /* 0C07E90E mov #imm,Rn */
	T = r2 > r0;  /* 0C07E910 cmp/hi Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07E91Au, 5); goto L_0C07E91A; } goto L_0C07E916; }  /* 0C07E912 bf/s */
L_0C07E916: BLKS(0x0C07E916u);
	{ IF(0x0C07E918u); ; /* slot nop */ UPD(0x0C07EA04u, 4); goto L_0C07EA04; }  /* 0C07E916 bra */
L_0C07E91A: BLKS(0x0C07E91Au);
	r0 = 0xC07E92Cu;  /* 0C07E91A mova @(disp,pc),r0 */
	r2 += r2;  /* 0C07E91C add Rm,Rn */
	IF(0x0C07E91Eu); r4 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C07E920u, 3);  /* 0C07E91E mov.w @(r0,Rm),Rn */
	IF(0x0C07E920u); { u32 tv_ = (r4 + 0x0C07E924u); u32 t_ = PHYS(tv_); IF(0x0C07E922u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C07E920 braf Rn */
L_0C07EA04: BLKS(0x0C07EA04u);
	r15 = r14;  /* 0C07EA04 mov Rm,Rn */
	IF(0x0C07EA06u); PR = R32(r15); r15 += 4; UPD(0x0C07EA08u, 2);  /* 0C07EA06 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07EA0Au, 1);  /* 0C07EA08 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07EA0Cu, 1);  /* 0C07EA0A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07EA0Eu, 1);  /* 0C07EA0C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07EA10u, 1);  /* 0C07EA0E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07EA12u, 1);  /* 0C07EA10 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07EA14u, 1);  /* 0C07EA12 mov.l @Rm+,Rn */
	IF(0x0C07EA14u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07EA14 rts */
}

void blk_f_0C07E92C(sh3_t *c)
{
	LOCALS;
L_0C07E92C: BLKS(0x0C07E92Cu);
	IF(0x0C07E92Cu); r0 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C07E92Eu, 1);  /* 0C07E92C mov.b @(r0,Rm),Rn */
	IF(0x0C07E92Eu); r0 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C07E930u, 1);  /* 0C07E92E mov.b @(r0,Rm),Rn */
	IF(0x0C07E930u); r0 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C07E932u, 1);  /* 0C07E930 mov.b @(r0,Rm),Rn */
	IF(0x0C07E932u); r1 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C07E934u, 1);  /* 0C07E932 mov.b @(r0,Rm),Rn */
	IF(0x0C07E934u); r1 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C07E936u, 1);  /* 0C07E934 mov.b @(r0,Rm),Rn */
	IF(0x0C07E936u); r1 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07E938u, 1);  /* 0C07E936 mov.b @(r0,Rm),Rn */
	IF(0x0C07E938u); r1 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07E93Au, 1);  /* 0C07E938 mov.b @(r0,Rm),Rn */
	IF(0x0C07E93Au); r1 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07E93Cu, 1);  /* 0C07E93A mov.b @(r0,Rm),Rn */
	IF(0x0C07E93Cu); r1 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C07E93Eu, 1);  /* 0C07E93C mov.b @(r0,Rm),Rn */
	IF(0x0C07E93Eu); r2 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C07E940u, 1);  /* 0C07E93E mov.b @(r0,Rm),Rn */
	IF(0x0C07E940u); r2 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C07E942u, 1);  /* 0C07E940 mov.b @(r0,Rm),Rn */
	IF(0x0C07E942u); r2 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C07E944u, 1);  /* 0C07E942 mov.b @(r0,Rm),Rn */
	IF(0x0C07E944u); ;  /* 0C07E944 nop */
	IF(0x0C07E946u); ;  /* 0C07E946 nop */
	IF(0x0C07E948u); ;  /* 0C07E948 nop */
	IF(0x0C07E94Au); ;  /* 0C07E94A nop */
	IF(0x0C07E94Cu); ;  /* 0C07E94C nop */
	IF(0x0C07E94Eu); ;  /* 0C07E94E nop */
	r8 = 0xB4u; UPD(0x0C07E952u, 7);  /* 0C07E950 mov.w @(disp,pc),Rn */
	IF(0x0C07E952u); MACL = r10 * r8;  /* 0C07E952 mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C07E956u, 3);  /* 0C07E954 mov.l @(disp,pc),Rn */
	IF(0x0C07E956u); r2 = MACL;  /* 0C07E956 sts macl,Rn */
	r2 += r7;  /* 0C07E958 add Rm,Rn */
	r6 = 0xA5u; UPD(0x0C07E95Cu, 3);  /* 0C07E95A mov.w @(disp,pc),Rn */
	r0 = r2;  /* 0C07E95C mov Rm,Rn */
	IF(0x0C07E95Eu); r5 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C07E960u, 2);  /* 0C07E95E mov.b @(r0,Rm),Rn */
	r0 = r5;  /* 0C07E960 mov Rm,Rn */
	T = r0 == 0x2u;  /* 0C07E962 cmp/eq #imm,r0 */
	{ u32 c_ = T; r11 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07E980u, 5); goto L_0C07E980; } UPD(0x0C07E968u, 1); goto L_0C07E968; }  /* 0C07E964 bt/s */
L_0C07E968: BLKS(0x0C07E968u);
	r0 = 0xC0A9A70u; UPD(0x0C07E96Au, 1);  /* 0C07E968 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C07E96A mov Rm,Rn */
	r15 = r14;  /* 0C07E96C mov Rm,Rn */
	IF(0x0C07E96Eu); PR = R32(r15); r15 += 4; UPD(0x0C07E970u, 3);  /* 0C07E96E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07E972u, 1);  /* 0C07E970 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07E974u, 1);  /* 0C07E972 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07E976u, 1);  /* 0C07E974 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07E978u, 1);  /* 0C07E976 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07E97Au, 1);  /* 0C07E978 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07E97Cu, 1);  /* 0C07E97A mov.l @Rm+,Rn */
	IF(0x0C07E97Cu); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A9A70u: TAIL(blk_f_0C0A9A70); default: JUMPD(tv_); } }  /* 0C07E97C jmp @Rn */
L_0C07E980: BLKS(0x0C07E980u);
	r5 = R32(r2 + 0x24u); UPD(0x0C07E982u, 1);  /* 0C07E980 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C07E982 add #imm,Rn */
	r12 = 0x20000u; UPD(0x0C07E986u, 2);  /* 0C07E984 mov.l @(disp,pc),Rn */
	r9 = 0xC07CD80u; UPD(0x0C07E988u, 1);  /* 0C07E986 mov.l @(disp,pc),Rn */
	r4 = 0x4u;  /* 0C07E988 mov #imm,Rn */
	W32(r15, r12); UPD(0x0C07E98Cu, 2);  /* 0C07E98A mov.l Rm,@Rn */
	r7 = 0x14u;  /* 0C07E98C mov #imm,Rn */
	W32(r15 + 0x4u, r11); UPD(0x0C07E990u, 2);  /* 0C07E98E mov.l Rm,@(disp,Rn) */
	r13 = 0x200000u; UPD(0x0C07E992u, 1);  /* 0C07E990 mov.l @(disp,pc),Rn */
	r6 = R32(r2 + 0x28u); UPD(0x0C07E994u, 1);  /* 0C07E992 mov.l @(disp,Rm),Rn */
	IF(0x0C07E994u); { u32 t_ = r9; PR = 0x0C07E998u; r5 += r13; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07CD80, 0x0C07CD80u, 0x0C07E998u); }  /* 0C07E994 jsr @Rn */
L_0C07E998: BLKS(0x0C07E998u);
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C07E968u, 3); goto L_0C07E968; }  /* 0C07E998 bra */
}

void blk_f_0C07E950(sh3_t *c)
{
	LOCALS;
L_0C07E950: BLKS(0x0C07E950u);
	r8 = 0xB4u; UPD(0x0C07E952u, 1);  /* 0C07E950 mov.w @(disp,pc),Rn */
	IF(0x0C07E952u); MACL = r10 * r8;  /* 0C07E952 mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C07E956u, 3);  /* 0C07E954 mov.l @(disp,pc),Rn */
	IF(0x0C07E956u); r2 = MACL;  /* 0C07E956 sts macl,Rn */
	r2 += r7;  /* 0C07E958 add Rm,Rn */
	r6 = 0xA5u; UPD(0x0C07E95Cu, 3);  /* 0C07E95A mov.w @(disp,pc),Rn */
	r0 = r2;  /* 0C07E95C mov Rm,Rn */
	IF(0x0C07E95Eu); r5 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C07E960u, 2);  /* 0C07E95E mov.b @(r0,Rm),Rn */
	r0 = r5;  /* 0C07E960 mov Rm,Rn */
	T = r0 == 0x2u;  /* 0C07E962 cmp/eq #imm,r0 */
	{ u32 c_ = T; r11 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07E980u, 5); goto L_0C07E980; } UPD(0x0C07E968u, 1); goto L_0C07E968; }  /* 0C07E964 bt/s */
L_0C07E968: BLKS(0x0C07E968u);
	r0 = 0xC0A9A70u; UPD(0x0C07E96Au, 1);  /* 0C07E968 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C07E96A mov Rm,Rn */
	r15 = r14;  /* 0C07E96C mov Rm,Rn */
	IF(0x0C07E96Eu); PR = R32(r15); r15 += 4; UPD(0x0C07E970u, 3);  /* 0C07E96E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07E972u, 1);  /* 0C07E970 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07E974u, 1);  /* 0C07E972 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07E976u, 1);  /* 0C07E974 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07E978u, 1);  /* 0C07E976 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07E97Au, 1);  /* 0C07E978 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07E97Cu, 1);  /* 0C07E97A mov.l @Rm+,Rn */
	IF(0x0C07E97Cu); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A9A70u: TAIL(blk_f_0C0A9A70); default: JUMPD(tv_); } }  /* 0C07E97C jmp @Rn */
L_0C07E980: BLKS(0x0C07E980u);
	r5 = R32(r2 + 0x24u); UPD(0x0C07E982u, 1);  /* 0C07E980 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C07E982 add #imm,Rn */
	r12 = 0x20000u; UPD(0x0C07E986u, 2);  /* 0C07E984 mov.l @(disp,pc),Rn */
	r9 = 0xC07CD80u; UPD(0x0C07E988u, 1);  /* 0C07E986 mov.l @(disp,pc),Rn */
	r4 = 0x4u;  /* 0C07E988 mov #imm,Rn */
	W32(r15, r12); UPD(0x0C07E98Cu, 2);  /* 0C07E98A mov.l Rm,@Rn */
	r7 = 0x14u;  /* 0C07E98C mov #imm,Rn */
	W32(r15 + 0x4u, r11); UPD(0x0C07E990u, 2);  /* 0C07E98E mov.l Rm,@(disp,Rn) */
	r13 = 0x200000u; UPD(0x0C07E992u, 1);  /* 0C07E990 mov.l @(disp,pc),Rn */
	r6 = R32(r2 + 0x28u); UPD(0x0C07E994u, 1);  /* 0C07E992 mov.l @(disp,Rm),Rn */
	IF(0x0C07E994u); { u32 t_ = r9; PR = 0x0C07E998u; r5 += r13; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07CD80, 0x0C07CD80u, 0x0C07E998u); }  /* 0C07E994 jsr @Rn */
L_0C07E998: BLKS(0x0C07E998u);
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C07E968u, 3); goto L_0C07E968; }  /* 0C07E998 bra */
}

void blk_f_0C07E9A0(sh3_t *c)
{
	LOCALS;
L_0C07E9A0: BLKS(0x0C07E9A0u);
	r11 = 0xB4u; UPD(0x0C07E9A2u, 1);  /* 0C07E9A0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C07E9A2 add #imm,Rn */
	IF(0x0C07E9A4u); MACL = r10 * r11;  /* 0C07E9A4 mul.l Rm,Rn */
	r13 = 0xC286578u; UPD(0x0C07E9A8u, 4);  /* 0C07E9A6 mov.l @(disp,pc),Rn */
	IF(0x0C07E9A8u); r8 = MACL;  /* 0C07E9A8 sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C07E9ACu, 2);  /* 0C07E9AA mov.w @(disp,pc),Rn */
	r8 += r13;  /* 0C07E9AC add Rm,Rn */
	IF(0x0C07E9AEu); r5 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07E9B0u, 2);  /* 0C07E9AE mov.b @(r0,Rm),Rn */
	r4 = r5 & 0xFF;  /* 0C07E9B0 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C07E9B4u, 2);  /* 0C07E9B2 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C07E9B4 add #imm,Rn */
	IF(0x0C07E9B6u); r3 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07E9B8u, 2);  /* 0C07E9B6 mov.b @(r0,Rm),Rn */
	r5 = 0x5u;  /* 0C07E9B8 mov #imm,Rn */
	r2 = r3 & 0xFF;  /* 0C07E9BA extu.b Rm,Rn */
	r9 = 0xC0BD6F0u; UPD(0x0C07E9BEu, 3);  /* 0C07E9BC mov.l @(disp,pc),Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C07E9C0u, 1);  /* 0C07E9BE mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C07E9C2u, 1);  /* 0C07E9C0 mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C07E9C4u, 1);  /* 0C07E9C2 mov.l @(disp,Rm),Rn */
	IF(0x0C07E9C4u); { u32 t_ = r9; PR = 0x0C07E9C8u; r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C07E9C8u); }  /* 0C07E9C4 jsr @Rn */
L_0C07E9C8: BLKS(0x0C07E9C8u);
	r9 = 0xC0A8CA0u; UPD(0x0C07E9CAu, 1);  /* 0C07E9C8 mov.l @(disp,pc),Rn */
	r15 += 0x8u;  /* 0C07E9CA add #imm,Rn */
	IF(0x0C07E9CCu); { u32 t_ = r9; PR = 0x0C07E9D0u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C07E9D0u); }  /* 0C07E9CC jsr @Rn */
L_0C07E9D0: BLKS(0x0C07E9D0u);
	IF(0x0C07E9D0u); T = (s32)r0 >= 0;  /* 0C07E9D0 cmp/pz Rn */
	if (!T) { UPD(0x0C07EA40u, 4); goto L_0C07EA40; }  /* 0C07E9D2 bf */
L_0C07E9D4: BLKS(0x0C07E9D4u);
	r7 = r8;  /* 0C07E9D4 mov Rm,Rn */
	r9 = 0xA4u; UPD(0x0C07E9D8u, 2);  /* 0C07E9D6 mov.w @(disp,pc),Rn */
	r7 += r9;  /* 0C07E9D8 add Rm,Rn */
	r7 += 0x1u;  /* 0C07E9DA add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C07E9DEu, 3);  /* 0C07E9DC mov.b @Rm,Rn */
	T = (r6 & r6) == 0;  /* 0C07E9DE tst Rm,Rn */
	if (!T) { UPD(0x0C07EA20u, 4); goto L_0C07EA20; }  /* 0C07E9E0 bf */
L_0C07E9E2: BLKS(0x0C07E9E2u);
	IF(0x0C07E9E2u); MACL = r12 * r11;  /* 0C07E9E2 mul.l Rm,Rn */
	r4 = r10;  /* 0C07E9E4 mov Rm,Rn */
	r10 = 0x4000u; UPD(0x0C07E9E8u, 4);  /* 0C07E9E6 mov.w @(disp,pc),Rn */
	IF(0x0C07E9E8u); r3 = MACL;  /* 0C07E9E8 sts macl,Rn */
	r3 += r13;  /* 0C07E9EA add Rm,Rn */
	r3 += r9;  /* 0C07E9EC add Rm,Rn */
	r3 += 0x1u;  /* 0C07E9EE add #imm,Rn */
	r13 = (u32)(s32)(s8)R8(r3); UPD(0x0C07E9F2u, 5);  /* 0C07E9F0 mov.b @Rm,Rn */
	r12 = 0x1u;  /* 0C07E9F2 mov #imm,Rn */
	r11 = 0xC0A8AE0u; UPD(0x0C07E9F6u, 2);  /* 0C07E9F4 mov.l @(disp,pc),Rn */
	r13 += 0x1u;  /* 0C07E9F6 add #imm,Rn */
	W8(r3, r13); UPD(0x0C07E9FAu, 2);  /* 0C07E9F8 mov.b Rm,@Rn */
	IF(0x0C07E9FAu); { u32 t_ = r11; PR = 0x0C07E9FEu; W32(r8 + 0xCu, r12); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C07E9FEu); }  /* 0C07E9FA jsr @Rn */
L_0C07E9FE: BLKS(0x0C07E9FEu);
	r1 = R32(r8); UPD(0x0C07EA00u, 1);  /* 0C07E9FE mov.l @Rm,Rn */
	r1 |= r10;  /* 0C07EA00 or Rm,Rn */
	UPD(0x0C07EA02u, 1);
L_0C07EA02: BLKS(0x0C07EA02u);
	W32(r8, r1); UPD(0x0C07EA04u, 1);  /* 0C07EA02 mov.l Rm,@Rn */
	r15 = r14;  /* 0C07EA04 mov Rm,Rn */
	IF(0x0C07EA06u); PR = R32(r15); r15 += 4; UPD(0x0C07EA08u, 2);  /* 0C07EA06 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07EA0Au, 1);  /* 0C07EA08 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07EA0Cu, 1);  /* 0C07EA0A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07EA0Eu, 1);  /* 0C07EA0C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07EA10u, 1);  /* 0C07EA0E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07EA12u, 1);  /* 0C07EA10 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07EA14u, 1);  /* 0C07EA12 mov.l @Rm+,Rn */
	IF(0x0C07EA14u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07EA14 rts */
L_0C07EA20: BLKS(0x0C07EA20u);
	r15 += 0xFFFFFFF8u;  /* 0C07EA20 add #imm,Rn */
	r0 = 0x0u;  /* 0C07EA22 mov #imm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C07EA26u, 3);  /* 0C07EA24 mov.l Rm,@(disp,Rn) */
	r4 = 0x3u;  /* 0C07EA26 mov #imm,Rn */
	r2 = 0x20000u; UPD(0x0C07EA2Au, 2);  /* 0C07EA28 mov.l @(disp,pc),Rn */
	r7 = 0x14u;  /* 0C07EA2A mov #imm,Rn */
	r0 = 0xC07CD80u; UPD(0x0C07EA2Eu, 2);  /* 0C07EA2C mov.l @(disp,pc),Rn */
	W32(r15, r2); UPD(0x0C07EA30u, 1);  /* 0C07EA2E mov.l Rm,@Rn */
	r5 = R32(r8 + 0x24u); UPD(0x0C07EA32u, 1);  /* 0C07EA30 mov.l @(disp,Rm),Rn */
	IF(0x0C07EA32u); { u32 t_ = r0; PR = 0x0C07EA36u; r6 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07CD80, 0x0C07CD80u, 0x0C07EA36u); }  /* 0C07EA32 jsr @Rn */
L_0C07EA36: BLKS(0x0C07EA36u);
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C07E9E2u, 3); goto L_0C07E9E2; }  /* 0C07EA36 bra */
L_0C07EA40: BLKS(0x0C07EA40u);
	{ r1 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C07EA02u, 3); goto L_0C07EA02; }  /* 0C07EA40 bra */
}

void blk_f_0C07EA50(sh3_t *c)
{
	LOCALS;
	goto L_0C07EA50;
L_0C07EA04: BLKS(0x0C07EA04u);
	r15 = r14;  /* 0C07EA04 mov Rm,Rn */
	IF(0x0C07EA06u); PR = R32(r15); r15 += 4; UPD(0x0C07EA08u, 2);  /* 0C07EA06 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07EA0Au, 1);  /* 0C07EA08 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07EA0Cu, 1);  /* 0C07EA0A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07EA0Eu, 1);  /* 0C07EA0C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07EA10u, 1);  /* 0C07EA0E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07EA12u, 1);  /* 0C07EA10 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07EA14u, 1);  /* 0C07EA12 mov.l @Rm+,Rn */
	IF(0x0C07EA14u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07EA14 rts */
L_0C07EA50: BLKS(0x0C07EA50u);
	r8 = 0xB4u; UPD(0x0C07EA52u, 1);  /* 0C07EA50 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C07EA52 add #imm,Rn */
	IF(0x0C07EA54u); MACL = r10 * r8;  /* 0C07EA54 mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C07EA58u, 4);  /* 0C07EA56 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C07EA5Au, 1);  /* 0C07EA58 mov.w @(disp,pc),Rn */
	IF(0x0C07EA5Au); r8 = MACL;  /* 0C07EA5A sts macl,Rn */
	r8 += r7;  /* 0C07EA5C add Rm,Rn */
	IF(0x0C07EA5Eu); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07EA60u, 3);  /* 0C07EA5E mov.b @(r0,Rm),Rn */
	r5 = r6 & 0xFF;  /* 0C07EA60 extu.b Rm,Rn */
	W32(r15, r5); UPD(0x0C07EA64u, 2);  /* 0C07EA62 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C07EA64 add #imm,Rn */
	IF(0x0C07EA66u); r4 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07EA68u, 2);  /* 0C07EA66 mov.b @(r0,Rm),Rn */
	r5 = 0x1u;  /* 0C07EA68 mov #imm,Rn */
	r9 = r4 & 0xFF;  /* 0C07EA6A extu.b Rm,Rn */
	W32(r15 + 0x4u, r9); UPD(0x0C07EA6Eu, 3);  /* 0C07EA6C mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C07EA70u, 1);  /* 0C07EA6E mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C07EA72u, 1);  /* 0C07EA70 mov.l @(disp,Rm),Rn */
	r7 = R32(r8 + 0x28u); UPD(0x0C07EA74u, 1);  /* 0C07EA72 mov.l @(disp,Rm),Rn */
	r0 = 0xC0BECB0u; UPD(0x0C07EA76u, 1);  /* 0C07EA74 mov.l @(disp,pc),Rn */
	IF(0x0C07EA76u); { u32 t_ = r0; PR = 0x0C07EA7Au; r13 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BECB0, 0x0C0BECB0u, 0x0C07EA7Au); }  /* 0C07EA76 jsr @Rn */
L_0C07EA7A: BLKS(0x0C07EA7Au);
	W32(r8, r13); UPD(0x0C07EA7Cu, 1);  /* 0C07EA7A mov.l Rm,@Rn */
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C07EA04u, 3); goto L_0C07EA04; }  /* 0C07EA7C bra */
}

void blk_f_0C07EA80(sh3_t *c)
{
	LOCALS;
	goto L_0C07EA80;
L_0C07EA04: BLKS(0x0C07EA04u);
	r15 = r14;  /* 0C07EA04 mov Rm,Rn */
	IF(0x0C07EA06u); PR = R32(r15); r15 += 4; UPD(0x0C07EA08u, 2);  /* 0C07EA06 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07EA0Au, 1);  /* 0C07EA08 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07EA0Cu, 1);  /* 0C07EA0A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07EA0Eu, 1);  /* 0C07EA0C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07EA10u, 1);  /* 0C07EA0E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07EA12u, 1);  /* 0C07EA10 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07EA14u, 1);  /* 0C07EA12 mov.l @Rm+,Rn */
	IF(0x0C07EA14u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07EA14 rts */
L_0C07EA70: BLKS(0x0C07EA70u);
	r6 = R32(r8 + 0x24u); UPD(0x0C07EA72u, 1);  /* 0C07EA70 mov.l @(disp,Rm),Rn */
	r7 = R32(r8 + 0x28u); UPD(0x0C07EA74u, 1);  /* 0C07EA72 mov.l @(disp,Rm),Rn */
	r0 = 0xC0BECB0u; UPD(0x0C07EA76u, 1);  /* 0C07EA74 mov.l @(disp,pc),Rn */
	IF(0x0C07EA76u); { u32 t_ = r0; PR = 0x0C07EA7Au; r13 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BECB0, 0x0C0BECB0u, 0x0C07EA7Au); }  /* 0C07EA76 jsr @Rn */
L_0C07EA7A: BLKS(0x0C07EA7Au);
	W32(r8, r13); UPD(0x0C07EA7Cu, 1);  /* 0C07EA7A mov.l Rm,@Rn */
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C07EA04u, 3); goto L_0C07EA04; }  /* 0C07EA7C bra */
L_0C07EA80: BLKS(0x0C07EA80u);
	r3 = 0xB4u; UPD(0x0C07EA82u, 1);  /* 0C07EA80 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C07EA82 add #imm,Rn */
	IF(0x0C07EA84u); MACL = r10 * r3;  /* 0C07EA84 mul.l Rm,Rn */
	r12 = 0xC286578u; UPD(0x0C07EA88u, 4);  /* 0C07EA86 mov.l @(disp,pc),Rn */
	r5 = 0x3u;  /* 0C07EA88 mov #imm,Rn */
	r0 = 0xB0u; UPD(0x0C07EA8Cu, 2);  /* 0C07EA8A mov.w @(disp,pc),Rn */
	IF(0x0C07EA8Cu); r8 = MACL;  /* 0C07EA8C sts macl,Rn */
	r8 += r12;  /* 0C07EA8E add Rm,Rn */
	IF(0x0C07EA90u); r11 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07EA92u, 3);  /* 0C07EA90 mov.b @(r0,Rm),Rn */
	r10 = r11 & 0xFF;  /* 0C07EA92 extu.b Rm,Rn */
	W32(r15, r10); UPD(0x0C07EA96u, 2);  /* 0C07EA94 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C07EA96 add #imm,Rn */
	IF(0x0C07EA98u); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07EA9Au, 2);  /* 0C07EA98 mov.b @(r0,Rm),Rn */
	r0 = r2 & 0xFF;  /* 0C07EA9A extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C07EA9Eu, 2);  /* 0C07EA9C mov.l Rm,@(disp,Rn) */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C07EA70u, 3); goto L_0C07EA70; }  /* 0C07EA9E bra */
}

void blk_f_0C07EAB0(sh3_t *c)
{
	LOCALS;
	goto L_0C07EAB0;
L_0C07EA04: BLKS(0x0C07EA04u);
	r15 = r14;  /* 0C07EA04 mov Rm,Rn */
	IF(0x0C07EA06u); PR = R32(r15); r15 += 4; UPD(0x0C07EA08u, 2);  /* 0C07EA06 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07EA0Au, 1);  /* 0C07EA08 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07EA0Cu, 1);  /* 0C07EA0A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07EA0Eu, 1);  /* 0C07EA0C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07EA10u, 1);  /* 0C07EA0E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07EA12u, 1);  /* 0C07EA10 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07EA14u, 1);  /* 0C07EA12 mov.l @Rm+,Rn */
	IF(0x0C07EA14u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07EA14 rts */
L_0C07EA76: BLKS(0x0C07EA76u);
	IF(0x0C07EA76u); { u32 t_ = r0; PR = 0x0C07EA7Au; r13 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C07EA7Au); }  /* 0C07EA76 jsr @Rn */
L_0C07EA7A: BLKS(0x0C07EA7Au);
	W32(r8, r13); UPD(0x0C07EA7Cu, 1);  /* 0C07EA7A mov.l Rm,@Rn */
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C07EA04u, 3); goto L_0C07EA04; }  /* 0C07EA7C bra */
L_0C07EAB0: BLKS(0x0C07EAB0u);
	r7 = 0xB4u; UPD(0x0C07EAB2u, 1);  /* 0C07EAB0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C07EAB2 add #imm,Rn */
	IF(0x0C07EAB4u); MACL = r10 * r7;  /* 0C07EAB4 mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C07EAB8u, 4);  /* 0C07EAB6 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C07EABAu, 1);  /* 0C07EAB8 mov.w @(disp,pc),Rn */
	IF(0x0C07EABAu); r8 = MACL;  /* 0C07EABA sts macl,Rn */
	r8 += r6;  /* 0C07EABC add Rm,Rn */
	IF(0x0C07EABEu); r5 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07EAC0u, 3);  /* 0C07EABE mov.b @(r0,Rm),Rn */
	r4 = r5 & 0xFF;  /* 0C07EAC0 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C07EAC4u, 2);  /* 0C07EAC2 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C07EAC4 add #imm,Rn */
	IF(0x0C07EAC6u); r9 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07EAC8u, 2);  /* 0C07EAC6 mov.b @(r0,Rm),Rn */
	r5 = 0x2u;  /* 0C07EAC8 mov #imm,Rn */
	r13 = r9 & 0xFF;  /* 0C07EACA extu.b Rm,Rn */
	W32(r15 + 0x4u, r13); UPD(0x0C07EACEu, 3);  /* 0C07EACC mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BD6F0u; UPD(0x0C07EAD0u, 1);  /* 0C07EACE mov.l @(disp,pc),Rn */
	r4 = R32(r8); UPD(0x0C07EAD2u, 1);  /* 0C07EAD0 mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C07EAD4u, 1);  /* 0C07EAD2 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C07EA76u, 3); goto L_0C07EA76; }  /* 0C07EAD4 bra */
}

void blk_f_0C07EB10(sh3_t *c)
{
	LOCALS;
	goto L_0C07EB10;
L_0C07EA04: BLKS(0x0C07EA04u);
	r15 = r14;  /* 0C07EA04 mov Rm,Rn */
	IF(0x0C07EA06u); PR = R32(r15); r15 += 4; UPD(0x0C07EA08u, 2);  /* 0C07EA06 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07EA0Au, 1);  /* 0C07EA08 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07EA0Cu, 1);  /* 0C07EA0A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07EA0Eu, 1);  /* 0C07EA0C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07EA10u, 1);  /* 0C07EA0E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07EA12u, 1);  /* 0C07EA10 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07EA14u, 1);  /* 0C07EA12 mov.l @Rm+,Rn */
	IF(0x0C07EA14u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07EA14 rts */
L_0C07EB10: BLKS(0x0C07EB10u);
	r8 = 0xB4u; UPD(0x0C07EB12u, 1);  /* 0C07EB10 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C07EB12 add #imm,Rn */
	IF(0x0C07EB14u); MACL = r10 * r8;  /* 0C07EB14 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C07EB18u, 4);  /* 0C07EB16 mov.l @(disp,pc),Rn */
	IF(0x0C07EB18u); r11 = MACL;  /* 0C07EB18 sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C07EB1Cu, 2);  /* 0C07EB1A mov.w @(disp,pc),Rn */
	r11 += r9;  /* 0C07EB1C add Rm,Rn */
	IF(0x0C07EB1Eu); r5 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C07EB20u, 2);  /* 0C07EB1E mov.b @(r0,Rm),Rn */
	r13 = r5 & 0xFF;  /* 0C07EB20 extu.b Rm,Rn */
	W32(r15, r13); UPD(0x0C07EB24u, 2);  /* 0C07EB22 mov.l Rm,@Rn */
	r5 = 0x4u;  /* 0C07EB24 mov #imm,Rn */
	r13 = 0xA9u; UPD(0x0C07EB28u, 2);  /* 0C07EB26 mov.w @(disp,pc),Rn */
	r13 += r11;  /* 0C07EB28 add Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r13); UPD(0x0C07EB2Cu, 2);  /* 0C07EB2A mov.b @Rm,Rn */
	r3 = r4 & 0xFF;  /* 0C07EB2C extu.b Rm,Rn */
	W32(r15 + 0x4u, r3); UPD(0x0C07EB30u, 2);  /* 0C07EB2E mov.l Rm,@(disp,Rn) */
	r12 = 0xC0BD6F0u; UPD(0x0C07EB32u, 1);  /* 0C07EB30 mov.l @(disp,pc),Rn */
	r4 = R32(r11); UPD(0x0C07EB34u, 1);  /* 0C07EB32 mov.l @Rm,Rn */
	r6 = R32(r11 + 0x24u); UPD(0x0C07EB36u, 1);  /* 0C07EB34 mov.l @(disp,Rm),Rn */
	IF(0x0C07EB36u); { u32 t_ = r12; PR = 0x0C07EB3Au; r7 = R32(r11 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C07EB3Au); }  /* 0C07EB36 jsr @Rn */
L_0C07EB3A: BLKS(0x0C07EB3Au);
	r4 = r10;  /* 0C07EB3A mov Rm,Rn */
	r10 = 0xC0A8CA0u; UPD(0x0C07EB3Eu, 2);  /* 0C07EB3C mov.l @(disp,pc),Rn */
	IF(0x0C07EB3Eu); { u32 t_ = r10; PR = 0x0C07EB42u; r15 += 0x8u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C07EB42u); }  /* 0C07EB3E jsr @Rn */
L_0C07EB42: BLKS(0x0C07EB42u);
	r1 = r0;  /* 0C07EB42 mov Rm,Rn */
	IF(0x0C07EB44u); MACL = r1 * r8;  /* 0C07EB44 mul.l Rm,Rn */
	r12 = ~r0;  /* 0C07EB46 not Rm,Rn */
	IF(0x0C07EB48u); T = r12 >> 31; r12 = (r12 << 1) | T;  /* 0C07EB48 rotl Rn */
	IF(0x0C07EB4Au); r10 = MACL;  /* 0C07EB4A sts macl,Rn */
	r10 += r9;  /* 0C07EB4C add Rm,Rn */
	r2 = R32(r10 + 0xCu); UPD(0x0C07EB50u, 8);  /* 0C07EB4E mov.l @(disp,Rm),Rn */
	IF(0x0C07EB50u); r0 = T;  /* 0C07EB50 movt Rn */
	T = (r2 & r2) == 0;  /* 0C07EB52 tst Rm,Rn */
	IF(0x0C07EB54u); r8 = T;  /* 0C07EB54 movt Rn */
	r0 &= r8;  /* 0C07EB56 and Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C07EB58 tst Rm,Rn */
	if (!T) { UPD(0x0C07EB70u, 8); goto L_0C07EB70; }  /* 0C07EB5A bf */
L_0C07EB5C: BLKS(0x0C07EB5Cu);
	r7 = 0x0u;  /* 0C07EB5C mov #imm,Rn */
	{ W32(r11, r7); /* slot mov.l Rm,@Rn */ UPD(0x0C07EA04u, 4); goto L_0C07EA04; }  /* 0C07EB5E bra */
L_0C07EB70: BLKS(0x0C07EB70u);
	r8 = (u32)(s32)(s8)R8(r13); UPD(0x0C07EB72u, 1);  /* 0C07EB70 mov.b @Rm,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C07EB72 add #imm,Rn */
	r0 = 0x20000u; UPD(0x0C07EB76u, 2);  /* 0C07EB74 mov.l @(disp,pc),Rn */
	r6 = 0x0u;  /* 0C07EB76 mov #imm,Rn */
	r9 = 0xC07CD80u; UPD(0x0C07EB7Au, 2);  /* 0C07EB78 mov.l @(disp,pc),Rn */
	r7 = r8 & 0xFF;  /* 0C07EB7A extu.b Rm,Rn */
	W32(r15, r0); UPD(0x0C07EB7Eu, 2);  /* 0C07EB7C mov.l Rm,@Rn */
	r4 = 0xDu;  /* 0C07EB7E mov #imm,Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C07EB82u, 2);  /* 0C07EB80 mov.l Rm,@(disp,Rn) */
	r5 = R32(r11 + 0x24u); UPD(0x0C07EB84u, 1);  /* 0C07EB82 mov.l @(disp,Rm),Rn */
	IF(0x0C07EB84u); { u32 t_ = r9; PR = 0x0C07EB88u; r6 = R32(r11 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07CD80, 0x0C07CD80u, 0x0C07EB88u); }  /* 0C07EB84 jsr @Rn */
L_0C07EB88: BLKS(0x0C07EB88u);
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C07EB5Cu, 3); goto L_0C07EB5C; }  /* 0C07EB88 bra */
}

void blk_f_0C07EB90(sh3_t *c)
{
	LOCALS;
	goto L_0C07EB90;
L_0C07EA04: BLKS(0x0C07EA04u);
	r15 = r14;  /* 0C07EA04 mov Rm,Rn */
	IF(0x0C07EA06u); PR = R32(r15); r15 += 4; UPD(0x0C07EA08u, 2);  /* 0C07EA06 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07EA0Au, 1);  /* 0C07EA08 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07EA0Cu, 1);  /* 0C07EA0A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07EA0Eu, 1);  /* 0C07EA0C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07EA10u, 1);  /* 0C07EA0E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07EA12u, 1);  /* 0C07EA10 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07EA14u, 1);  /* 0C07EA12 mov.l @Rm+,Rn */
	IF(0x0C07EA14u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07EA14 rts */
L_0C07EA70: BLKS(0x0C07EA70u);
	r6 = R32(r8 + 0x24u); UPD(0x0C07EA72u, 1);  /* 0C07EA70 mov.l @(disp,Rm),Rn */
	r7 = R32(r8 + 0x28u); UPD(0x0C07EA74u, 1);  /* 0C07EA72 mov.l @(disp,Rm),Rn */
	r0 = 0xC0BECB0u; UPD(0x0C07EA76u, 1);  /* 0C07EA74 mov.l @(disp,pc),Rn */
	IF(0x0C07EA76u); { u32 t_ = r0; PR = 0x0C07EA7Au; r13 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BECB0, 0x0C0BECB0u, 0x0C07EA7Au); }  /* 0C07EA76 jsr @Rn */
L_0C07EA7A: BLKS(0x0C07EA7Au);
	W32(r8, r13); UPD(0x0C07EA7Cu, 1);  /* 0C07EA7A mov.l Rm,@Rn */
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C07EA04u, 3); goto L_0C07EA04; }  /* 0C07EA7C bra */
L_0C07EB90: BLKS(0x0C07EB90u);
	r4 = 0xB4u; UPD(0x0C07EB92u, 1);  /* 0C07EB90 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C07EB92 add #imm,Rn */
	IF(0x0C07EB94u); MACL = r10 * r4;  /* 0C07EB94 mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C07EB98u, 4);  /* 0C07EB96 mov.l @(disp,pc),Rn */
	r5 = 0x0u;  /* 0C07EB98 mov #imm,Rn */
	r0 = 0xB0u; UPD(0x0C07EB9Cu, 2);  /* 0C07EB9A mov.w @(disp,pc),Rn */
	IF(0x0C07EB9Cu); r8 = MACL;  /* 0C07EB9C sts macl,Rn */
	r8 += r3;  /* 0C07EB9E add Rm,Rn */
	IF(0x0C07EBA0u); r12 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07EBA2u, 3);  /* 0C07EBA0 mov.b @(r0,Rm),Rn */
	r10 = r12 & 0xFF;  /* 0C07EBA2 extu.b Rm,Rn */
	W32(r15, r10); UPD(0x0C07EBA6u, 2);  /* 0C07EBA4 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C07EBA6 add #imm,Rn */
	IF(0x0C07EBA8u); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07EBAAu, 2);  /* 0C07EBA8 mov.b @(r0,Rm),Rn */
	r11 = r2 & 0xFF;  /* 0C07EBAA extu.b Rm,Rn */
	W32(r15 + 0x4u, r11); UPD(0x0C07EBAEu, 2);  /* 0C07EBAC mov.l Rm,@(disp,Rn) */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C07EA70u, 3); goto L_0C07EA70; }  /* 0C07EBAE bra */
}

void blk_f_0C07EBC0(sh3_t *c)
{
	LOCALS;
	goto L_0C07EBC0;
L_0C07EA02: BLKS(0x0C07EA02u);
	W32(r8, r1); UPD(0x0C07EA04u, 1);  /* 0C07EA02 mov.l Rm,@Rn */
	r15 = r14;  /* 0C07EA04 mov Rm,Rn */
	IF(0x0C07EA06u); PR = R32(r15); r15 += 4; UPD(0x0C07EA08u, 2);  /* 0C07EA06 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07EA0Au, 1);  /* 0C07EA08 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07EA0Cu, 1);  /* 0C07EA0A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07EA0Eu, 1);  /* 0C07EA0C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07EA10u, 1);  /* 0C07EA0E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07EA12u, 1);  /* 0C07EA10 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07EA14u, 1);  /* 0C07EA12 mov.l @Rm+,Rn */
	IF(0x0C07EA14u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07EA14 rts */
L_0C07EA40: BLKS(0x0C07EA40u);
	{ r1 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C07EA02u, 3); goto L_0C07EA02; }  /* 0C07EA40 bra */
L_0C07EBC0: BLKS(0x0C07EBC0u);
	r9 = 0xB4u; UPD(0x0C07EBC2u, 1);  /* 0C07EBC0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C07EBC2 add #imm,Rn */
	IF(0x0C07EBC4u); MACL = r10 * r9;  /* 0C07EBC4 mul.l Rm,Rn */
	r11 = 0xC286578u; UPD(0x0C07EBC8u, 4);  /* 0C07EBC6 mov.l @(disp,pc),Rn */
	IF(0x0C07EBC8u); r8 = MACL;  /* 0C07EBC8 sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C07EBCCu, 2);  /* 0C07EBCA mov.w @(disp,pc),Rn */
	r8 += r11;  /* 0C07EBCC add Rm,Rn */
	IF(0x0C07EBCEu); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07EBD0u, 2);  /* 0C07EBCE mov.b @(r0,Rm),Rn */
	r7 = r2 & 0xFF;  /* 0C07EBD0 extu.b Rm,Rn */
	W32(r15, r7); UPD(0x0C07EBD4u, 2);  /* 0C07EBD2 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C07EBD4 add #imm,Rn */
	IF(0x0C07EBD6u); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07EBD8u, 2);  /* 0C07EBD6 mov.b @(r0,Rm),Rn */
	r5 = r6 & 0xFF;  /* 0C07EBD8 extu.b Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C07EBDCu, 2);  /* 0C07EBDA mov.l Rm,@(disp,Rn) */
	r12 = 0xC0BECB0u; UPD(0x0C07EBDEu, 1);  /* 0C07EBDC mov.l @(disp,pc),Rn */
	r5 = 0x2u;  /* 0C07EBDE mov #imm,Rn */
	r4 = R32(r8); UPD(0x0C07EBE2u, 2);  /* 0C07EBE0 mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C07EBE4u, 1);  /* 0C07EBE2 mov.l @(disp,Rm),Rn */
	IF(0x0C07EBE4u); { u32 t_ = r12; PR = 0x0C07EBE8u; r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BECB0, 0x0C0BECB0u, 0x0C07EBE8u); }  /* 0C07EBE4 jsr @Rn */
L_0C07EBE8: BLKS(0x0C07EBE8u);
	r4 = r10;  /* 0C07EBE8 mov Rm,Rn */
	r10 = 0xC0A8CA0u; UPD(0x0C07EBECu, 2);  /* 0C07EBEA mov.l @(disp,pc),Rn */
	IF(0x0C07EBECu); { u32 t_ = r10; PR = 0x0C07EBF0u; r15 += 0x8u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C07EBF0u); }  /* 0C07EBEC jsr @Rn */
L_0C07EBF0: BLKS(0x0C07EBF0u);
	IF(0x0C07EBF0u); T = (s32)r0 >= 0;  /* 0C07EBF0 cmp/pz Rn */
	if (!T) { UPD(0x0C07EC04u, 4); goto L_0C07EC04; }  /* 0C07EBF2 bf */
L_0C07EBF4: BLKS(0x0C07EBF4u);
	IF(0x0C07EBF4u); MACL = r0 * r9;  /* 0C07EBF4 mul.l Rm,Rn */
	IF(0x0C07EBF6u); r9 = MACL;  /* 0C07EBF6 sts macl,Rn */
	r9 += r11;  /* 0C07EBF8 add Rm,Rn */
	r11 = 0xA5u; UPD(0x0C07EBFCu, 5);  /* 0C07EBFA mov.w @(disp,pc),Rn */
	r9 += r11;  /* 0C07EBFC add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C07EC00u, 2);  /* 0C07EBFE mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C07EC00 add #imm,Rn */
	W8(r9, r0); UPD(0x0C07EC04u, 2);  /* 0C07EC02 mov.b Rm,@Rn */
L_0C07EC04: BLKS(0x0C07EC04u);
	{ IF(0x0C07EC06u); ; /* slot nop */ UPD(0x0C07EA40u, 3); goto L_0C07EA40; }  /* 0C07EC04 bra */
}

void blk_f_0C07EC30(sh3_t *c)
{
	LOCALS;
	goto L_0C07EC30;
L_0C07E8F0: BLKS(0x0C07E8F0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07E8F2u, 1);  /* 0C07E8F0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07E8F4u, 1);  /* 0C07E8F2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07E8F6u, 1);  /* 0C07E8F4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07E8F8u, 1);  /* 0C07E8F6 mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s16)r4;  /* 0C07E8F8 exts.w Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07E8FCu, 2);  /* 0C07E8FA mov.l Rm,@-Rn */
	r3 = 0xB4u; UPD(0x0C07E8FEu, 1);  /* 0C07E8FC mov.w @(disp,pc),Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C07E900u, 1);  /* 0C07E8FE mov.l Rm,@-Rn */
	IF(0x0C07E900u); MACL = r10 * r3;  /* 0C07E900 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07E904u, 3);  /* 0C07E902 mov.l Rm,@-Rn */
	r0 = 0xC286578u; UPD(0x0C07E906u, 1);  /* 0C07E904 mov.l @(disp,pc),Rn */
	IF(0x0C07E906u); r2 = MACL;  /* 0C07E906 sts macl,Rn */
	IF(0x0C07E908u); r15 -= 4; W32(r15, PR); UPD(0x0C07E90Au, 2);  /* 0C07E908 sts.l pr,@-Rn */
	r0 += r2;  /* 0C07E90A add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C07E90Eu, 2);  /* 0C07E90C mov.l @(disp,Rm),Rn */
	r0 = 0xBu;  /* 0C07E90E mov #imm,Rn */
	T = r2 > r0;  /* 0C07E910 cmp/hi Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07E91Au, 5); goto L_0C07E91A; } goto L_0C07E916; }  /* 0C07E912 bf/s */
L_0C07E916: BLKS(0x0C07E916u);
	{ IF(0x0C07E918u); ; /* slot nop */ UPD(0x0C07EA04u, 4); goto L_0C07EA04; }  /* 0C07E916 bra */
L_0C07E91A: BLKS(0x0C07E91Au);
	r0 = 0xC07E92Cu;  /* 0C07E91A mova @(disp,pc),r0 */
	r2 += r2;  /* 0C07E91C add Rm,Rn */
	IF(0x0C07E91Eu); r4 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C07E920u, 3);  /* 0C07E91E mov.w @(r0,Rm),Rn */
	IF(0x0C07E920u); { u32 tv_ = (r4 + 0x0C07E924u); u32 t_ = PHYS(tv_); IF(0x0C07E922u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C07E920 braf Rn */
L_0C07EA04: BLKS(0x0C07EA04u);
	r15 = r14;  /* 0C07EA04 mov Rm,Rn */
	IF(0x0C07EA06u); PR = R32(r15); r15 += 4; UPD(0x0C07EA08u, 2);  /* 0C07EA06 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07EA0Au, 1);  /* 0C07EA08 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07EA0Cu, 1);  /* 0C07EA0A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07EA0Eu, 1);  /* 0C07EA0C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07EA10u, 1);  /* 0C07EA0E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07EA12u, 1);  /* 0C07EA10 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07EA14u, 1);  /* 0C07EA12 mov.l @Rm+,Rn */
	IF(0x0C07EA14u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07EA14 rts */
L_0C07EC30: BLKS(0x0C07EC30u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07EC32u, 1);  /* 0C07EC30 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07EC34u, 1);  /* 0C07EC32 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07EC36u, 1);  /* 0C07EC34 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07EC38u, 1);  /* 0C07EC36 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07EC3Au, 1);  /* 0C07EC38 mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C07EC3A exts.w Rm,Rn */
	r3 = 0xB4u; UPD(0x0C07EC3Eu, 2);  /* 0C07EC3C mov.w @(disp,pc),Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C07EC40u, 1);  /* 0C07EC3E mov.l Rm,@-Rn */
	IF(0x0C07EC40u); MACL = r11 * r3;  /* 0C07EC40 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07EC44u, 3);  /* 0C07EC42 mov.l Rm,@-Rn */
	r0 = 0xC286578u; UPD(0x0C07EC46u, 1);  /* 0C07EC44 mov.l @(disp,pc),Rn */
	IF(0x0C07EC46u); r2 = MACL;  /* 0C07EC46 sts macl,Rn */
	IF(0x0C07EC48u); r15 -= 4; W32(r15, PR); UPD(0x0C07EC4Au, 2);  /* 0C07EC48 sts.l pr,@-Rn */
	r0 += r2;  /* 0C07EC4A add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C07EC4Eu, 2);  /* 0C07EC4C mov.l @(disp,Rm),Rn */
	r0 = 0xBu;  /* 0C07EC4E mov #imm,Rn */
	T = r2 > r0;  /* 0C07EC50 cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07ECA8u, 5); goto L_0C07ECA8; } goto L_0C07EC56; }  /* 0C07EC52 bt/s */
L_0C07EC56: BLKS(0x0C07EC56u);
	r0 = 0xC07EC68u;  /* 0C07EC56 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C07EC58 add Rm,Rn */
	IF(0x0C07EC5Au); r4 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C07EC5Cu, 4);  /* 0C07EC5A mov.w @(r0,Rm),Rn */
	IF(0x0C07EC5Cu); { u32 tv_ = (r4 + 0x0C07EC60u); u32 t_ = PHYS(tv_); IF(0x0C07EC5Eu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C07EC80u: goto L_0C07EC80; case 0x0C07ED20u: goto L_0C07ED20; case 0x0C07ED70u: goto L_0C07ED70; case 0x0C07EDF0u: goto L_0C07EDF0; case 0x0C07EEB0u: goto L_0C07EEB0; case 0x0C07EF30u: goto L_0C07EF30; case 0x0C07F020u: goto L_0C07F020; case 0x0C07F0D0u: goto L_0C07F0D0; default: JUMPD(tv_); } }  /* 0C07EC5C braf Rn */
L_0C07EC80: BLKS(0x0C07EC80u);
	r8 = 0xC0A9CB0u; UPD(0x0C07EC82u, 1);  /* 0C07EC80 mov.l @(disp,pc),Rn */
	IF(0x0C07EC82u); { u32 t_ = r8; PR = 0x0C07EC86u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9CB0, 0x0C0A9CB0u, 0x0C07EC86u); }  /* 0C07EC82 jsr @Rn */
L_0C07EC86: BLKS(0x0C07EC86u);
	r7 = 0xC0A9B40u; UPD(0x0C07EC88u, 1);  /* 0C07EC86 mov.l @(disp,pc),Rn */
	IF(0x0C07EC88u); { u32 t_ = r7; PR = 0x0C07EC8Cu; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9B40, 0x0C0A9B40u, 0x0C07EC8Cu); }  /* 0C07EC88 jsr @Rn */
L_0C07EC8C: BLKS(0x0C07EC8Cu);
	r6 = 0xB4u; UPD(0x0C07EC8Eu, 1);  /* 0C07EC8C mov.w @(disp,pc),Rn */
	IF(0x0C07EC8Eu); MACL = r11 * r6;  /* 0C07EC8E mul.l Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C07EC92u, 3);  /* 0C07EC90 mov.l @(disp,pc),Rn */
	IF(0x0C07EC92u); r2 = MACL;  /* 0C07EC92 sts macl,Rn */
	r3 = 0x99u; UPD(0x0C07EC96u, 2);  /* 0C07EC94 mov.w @(disp,pc),Rn */
	r2 += r5;  /* 0C07EC96 add Rm,Rn */
	r3 += r2;  /* 0C07EC98 add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r3); UPD(0x0C07EC9Cu, 3);  /* 0C07EC9A mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C07EC9C add #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C07EC9E extu.b Rm,Rn */
	T = r0 == 0xCu;  /* 0C07ECA0 cmp/eq #imm,r0 */
	{ u32 c_ = T; W8(r3, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C07ECC0u, 6); goto L_0C07ECC0; } UPD(0x0C07ECA6u, 1); goto L_0C07ECA6; }  /* 0C07ECA2 bt/s */
L_0C07ECA6: BLKS(0x0C07ECA6u);
	IF(0x0C07ECA6u); ;  /* 0C07ECA6 nop */
	UPD(0x0C07ECA8u, 1);
L_0C07ECA8: BLKS(0x0C07ECA8u);
	r15 = r14;  /* 0C07ECA8 mov Rm,Rn */
	IF(0x0C07ECAAu); PR = R32(r15); r15 += 4; UPD(0x0C07ECACu, 2);  /* 0C07ECAA lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07ECAEu, 1);  /* 0C07ECAC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07ECB0u, 1);  /* 0C07ECAE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07ECB2u, 1);  /* 0C07ECB0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07ECB4u, 1);  /* 0C07ECB2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07ECB6u, 1);  /* 0C07ECB4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07ECB8u, 1);  /* 0C07ECB6 mov.l @Rm+,Rn */
	IF(0x0C07ECB8u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07ECB8 rts */
L_0C07ECC0: BLKS(0x0C07ECC0u);
	r9 = 0x0u;  /* 0C07ECC0 mov #imm,Rn */
	W8(r3, r9); UPD(0x0C07ECC4u, 2);  /* 0C07ECC2 mov.b Rm,@Rn */
	r8 = r2;  /* 0C07ECC4 mov Rm,Rn */
	r11 = 0xC18B9D0u; UPD(0x0C07ECC8u, 2);  /* 0C07ECC6 mov.l @(disp,pc),Rn */
	r9 = 0x0u;  /* 0C07ECC8 mov #imm,Rn */
	r10 = 0xC0BEEF0u; UPD(0x0C07ECCCu, 2);  /* 0C07ECCA mov.l @(disp,pc),Rn */
L_0C07ECCC: BLKS(0x0C07ECCCu);
	r0 = r9;  /* 0C07ECCC mov Rm,Rn */
	r5 = 0xC18B9B8u; UPD(0x0C07ECD0u, 2);  /* 0C07ECCE mov.l @(disp,pc),Rn */
	IF(0x0C07ECD0u); r0 <<= 2;  /* 0C07ECD0 shll2 Rn */
	IF(0x0C07ECD2u); r7 = R32(r0 + r5); UPD(0x0C07ECD4u, 2);  /* 0C07ECD2 mov.l @(r0,Rm),Rn */
	r15 += 0xFFFFFFECu;  /* 0C07ECD4 add #imm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C07ECD8u, 2);  /* 0C07ECD6 mov.l @(disp,Rm),Rn */
	r0 = r9;  /* 0C07ECD8 mov Rm,Rn */
	r0 &= 0x1u;  /* 0C07ECDA and #imm,r0 */
	IF(0x0C07ECDCu); r0 <<= 2;  /* 0C07ECDC shll2 Rn */
	r6 += r7;  /* 0C07ECDE add Rm,Rn */
	IF(0x0C07ECE0u); r3 = R32(r0 + r11); UPD(0x0C07ECE2u, 5);  /* 0C07ECE0 mov.l @(r0,Rm),Rn */
	r7 = R32(r8 + 0x28u); UPD(0x0C07ECE4u, 1);  /* 0C07ECE2 mov.l @(disp,Rm),Rn */
	r4 = 0xC18B9D8u; UPD(0x0C07ECE6u, 1);  /* 0C07ECE4 mov.l @(disp,pc),Rn */
	r7 += r3;  /* 0C07ECE6 add Rm,Rn */
	IF(0x0C07ECE8u); r3 = R32(r0 + r4); UPD(0x0C07ECEAu, 2);  /* 0C07ECE8 mov.l @(r0,Rm),Rn */
	r0 = 0xB0u; UPD(0x0C07ECECu, 1);  /* 0C07ECEA mov.w @(disp,pc),Rn */
	IF(0x0C07ECECu); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07ECEEu, 1);  /* 0C07ECEC mov.b @(r0,Rm),Rn */
	r13 = r2 & 0xFF;  /* 0C07ECEE extu.b Rm,Rn */
	W32(r15, r13); UPD(0x0C07ECF2u, 2);  /* 0C07ECF0 mov.l Rm,@Rn */
	r0 = r8;  /* 0C07ECF2 mov Rm,Rn */
	r12 = 0xA9u; UPD(0x0C07ECF6u, 2);  /* 0C07ECF4 mov.w @(disp,pc),Rn */
	r2 = 0x0u;  /* 0C07ECF6 mov #imm,Rn */
	IF(0x0C07ECF8u); r5 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C07ECFAu, 2);  /* 0C07ECF8 mov.b @(r0,Rm),Rn */
	r13 = r9;  /* 0C07ECFA mov Rm,Rn */
	r0 = 0x808080u; UPD(0x0C07ECFEu, 2);  /* 0C07ECFC mov.l @(disp,pc),Rn */
	r4 = r5 & 0xFF;  /* 0C07ECFE extu.b Rm,Rn */
	W32(r15 + 0x4u, r4); UPD(0x0C07ED02u, 2);  /* 0C07ED00 mov.l Rm,@(disp,Rn) */
	r13 += 0x1u;  /* 0C07ED02 add #imm,Rn */
	W32(r15 + 0x8u, r2); UPD(0x0C07ED06u, 2);  /* 0C07ED04 mov.l Rm,@(disp,Rn) */
	r5 = 0x5u;  /* 0C07ED06 mov #imm,Rn */
	W32(r15 + 0xCu, r3); UPD(0x0C07ED0Au, 2);  /* 0C07ED08 mov.l Rm,@(disp,Rn) */
	r9 = (u32)(s32)(s16)r13;  /* 0C07ED0A exts.w Rm,Rn */
	W32(r15 + 0x10u, r0); UPD(0x0C07ED0Eu, 2);  /* 0C07ED0C mov.l Rm,@(disp,Rn) */
	r12 = 0x5u;  /* 0C07ED0E mov #imm,Rn */
	IF(0x0C07ED10u); { u32 t_ = r10; PR = 0x0C07ED14u; r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BEEF0, 0x0C0BEEF0u, 0x0C07ED14u); }  /* 0C07ED10 jsr @Rn */
L_0C07ED14: BLKS(0x0C07ED14u);
	T = (s32)r9 > (s32)r12;  /* 0C07ED14 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x14u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C07ECCCu, 4); goto L_0C07ECCC; } goto L_0C07ED1A; }  /* 0C07ED16 bf/s */
L_0C07ED1A: BLKS(0x0C07ED1Au);
	{ IF(0x0C07ED1Cu); ; /* slot nop */ UPD(0x0C07ECA8u, 4); goto L_0C07ECA8; }  /* 0C07ED1A bra */
L_0C07ED20: BLKS(0x0C07ED20u);
	r10 = 0xC0A8CA0u; UPD(0x0C07ED22u, 1);  /* 0C07ED20 mov.l @(disp,pc),Rn */
	IF(0x0C07ED22u); { u32 t_ = r10; PR = 0x0C07ED26u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C07ED26u); }  /* 0C07ED22 jsr @Rn */
L_0C07ED26: BLKS(0x0C07ED26u);
	IF(0x0C07ED26u); T = (s32)r0 >= 0;  /* 0C07ED26 cmp/pz Rn */
	if (!T) { UPD(0x0C07ED50u, 4); goto L_0C07ED50; }  /* 0C07ED28 bf */
L_0C07ED2A: BLKS(0x0C07ED2Au);
	r13 = 0xB4u; UPD(0x0C07ED2Cu, 1);  /* 0C07ED2A mov.w @(disp,pc),Rn */
	IF(0x0C07ED2Cu); MACL = r11 * r13;  /* 0C07ED2C mul.l Rm,Rn */
	r12 = 0xC286578u; UPD(0x0C07ED30u, 3);  /* 0C07ED2E mov.l @(disp,pc),Rn */
	IF(0x0C07ED30u); r11 = MACL;  /* 0C07ED30 sts macl,Rn */
	IF(0x0C07ED32u); MACL = r0 * r13;  /* 0C07ED32 mul.l Rm,Rn */
	r11 += r12;  /* 0C07ED34 add Rm,Rn */
	r1 = R32(r11 + 0x30u); UPD(0x0C07ED38u, 5);  /* 0C07ED36 mov.l @(disp,Rm),Rn */
	IF(0x0C07ED38u); r8 = MACL;  /* 0C07ED38 sts macl,Rn */
	r8 += r12;  /* 0C07ED3A add Rm,Rn */
	r9 = R32(r8 + 0x24u); UPD(0x0C07ED3Eu, 3);  /* 0C07ED3C mov.l @(disp,Rm),Rn */
	r6 = R32(r8 + 0x28u); UPD(0x0C07ED40u, 1);  /* 0C07ED3E mov.l @(disp,Rm),Rn */
	r0 = R32(r11 + 0x2Cu); UPD(0x0C07ED42u, 1);  /* 0C07ED40 mov.l @(disp,Rm),Rn */
	r6 += r1;  /* 0C07ED42 add Rm,Rn */
	r9 += r0;  /* 0C07ED44 add Rm,Rn */
	W32(r11 + 0x24u, r9); UPD(0x0C07ED48u, 3);  /* 0C07ED46 mov.l Rm,@(disp,Rn) */
	{ W32(r11 + 0x28u, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C07ECA8u, 3); goto L_0C07ECA8; }  /* 0C07ED48 bra */
L_0C07ED50: BLKS(0x0C07ED50u);
	r1 = 0xC07E8F0u; UPD(0x0C07ED52u, 1);  /* 0C07ED50 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C07ED52 mov Rm,Rn */
	UPD(0x0C07ED54u, 1);
L_0C07ED54: BLKS(0x0C07ED54u);
	r15 = r14;  /* 0C07ED54 mov Rm,Rn */
	IF(0x0C07ED56u); PR = R32(r15); r15 += 4; UPD(0x0C07ED58u, 2);  /* 0C07ED56 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07ED5Au, 1);  /* 0C07ED58 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07ED5Cu, 1);  /* 0C07ED5A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07ED5Eu, 1);  /* 0C07ED5C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07ED60u, 1);  /* 0C07ED5E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07ED62u, 1);  /* 0C07ED60 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07ED64u, 1);  /* 0C07ED62 mov.l @Rm+,Rn */
	IF(0x0C07ED64u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C069B90u: TAIL(blk_f_0C069B90); case 0x0C07E8F0u: goto L_0C07E8F0; default: JUMPD(tv_); } }  /* 0C07ED64 jmp @Rn */
L_0C07ED70: BLKS(0x0C07ED70u);
	r10 = 0xC0A8CA0u; UPD(0x0C07ED72u, 1);  /* 0C07ED70 mov.l @(disp,pc),Rn */
	IF(0x0C07ED72u); { u32 t_ = r10; PR = 0x0C07ED76u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C07ED76u); }  /* 0C07ED72 jsr @Rn */
L_0C07ED76: BLKS(0x0C07ED76u);
	IF(0x0C07ED76u); T = (s32)r0 >= 0;  /* 0C07ED76 cmp/pz Rn */
	if (!T) { UPD(0x0C07ED50u, 4); goto L_0C07ED50; }  /* 0C07ED78 bf */
L_0C07ED7A: BLKS(0x0C07ED7Au);
	r2 = 0xB4u; UPD(0x0C07ED7Cu, 1);  /* 0C07ED7A mov.w @(disp,pc),Rn */
	IF(0x0C07ED7Cu); MACL = r0 * r2;  /* 0C07ED7C mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C07ED80u, 3);  /* 0C07ED7E mov.l @(disp,pc),Rn */
	IF(0x0C07ED80u); r7 = MACL;  /* 0C07ED80 sts macl,Rn */
	r7 += r6;  /* 0C07ED82 add Rm,Rn */
	r4 = R32(r7 + 0xCu); UPD(0x0C07ED86u, 3);  /* 0C07ED84 mov.l @(disp,Rm),Rn */
	T = (r4 & r4) == 0;  /* 0C07ED86 tst Rm,Rn */
	{ u32 c_ = !T; IF(0x0C07ED8Au); MACL = r11 * r2; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C07ED50u, 5); goto L_0C07ED50; } goto L_0C07ED8C; }  /* 0C07ED88 bf/s */
L_0C07ED8C: BLKS(0x0C07ED8Cu);
	r3 = R32(r7 + 0x28u); UPD(0x0C07ED8Eu, 3);  /* 0C07ED8C mov.l @(disp,Rm),Rn */
	r4 = r11;  /* 0C07ED8E mov Rm,Rn */
	IF(0x0C07ED90u); r5 = MACL;  /* 0C07ED90 sts macl,Rn */
	r5 += r6;  /* 0C07ED92 add Rm,Rn */
	r6 = R32(r7 + 0x24u); UPD(0x0C07ED96u, 4);  /* 0C07ED94 mov.l @(disp,Rm),Rn */
	r0 = R32(r5 + 0xCu); UPD(0x0C07ED98u, 1);  /* 0C07ED96 mov.l @(disp,Rm),Rn */
	r1 = R32(r5 + 0x2Cu); UPD(0x0C07ED9Au, 1);  /* 0C07ED98 mov.l @(disp,Rm),Rn */
	r0 += 0x1u;  /* 0C07ED9A add #imm,Rn */
	r7 = R32(r5 + 0x30u); UPD(0x0C07ED9Eu, 2);  /* 0C07ED9C mov.l @(disp,Rm),Rn */
	r6 += r1;  /* 0C07ED9E add Rm,Rn */
	r3 += r7;  /* 0C07EDA0 add Rm,Rn */
	r0 &= 0x7u;  /* 0C07EDA2 and #imm,r0 */
	W32(r5 + 0x24u, r6); UPD(0x0C07EDA6u, 4);  /* 0C07EDA4 mov.l Rm,@(disp,Rn) */
	W32(r5 + 0x28u, r3); UPD(0x0C07EDA8u, 1);  /* 0C07EDA6 mov.l Rm,@(disp,Rn) */
	r1 = 0xC0A8AE0u; UPD(0x0C07EDAAu, 1);  /* 0C07EDA8 mov.l @(disp,pc),Rn */
	{ W32(r5 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C07ED54u, 3); goto L_0C07ED54; }  /* 0C07EDAA bra */
L_0C07EDF0: BLKS(0x0C07EDF0u);
	r8 = 0xC0A8CA0u; UPD(0x0C07EDF2u, 1);  /* 0C07EDF0 mov.l @(disp,pc),Rn */
	IF(0x0C07EDF2u); { u32 t_ = r8; PR = 0x0C07EDF6u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C07EDF6u); }  /* 0C07EDF2 jsr @Rn */
L_0C07EDF6: BLKS(0x0C07EDF6u);
	IF(0x0C07EDF6u); T = (s32)r0 >= 0;  /* 0C07EDF6 cmp/pz Rn */
	if (!T) { UPD(0x0C07ED50u, 4); goto L_0C07ED50; }  /* 0C07EDF8 bf */
L_0C07EDFA: BLKS(0x0C07EDFAu);
	r9 = 0xB4u; UPD(0x0C07EDFCu, 1);  /* 0C07EDFA mov.w @(disp,pc),Rn */
	IF(0x0C07EDFCu); MACL = r11 * r9;  /* 0C07EDFC mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C07EE00u, 3);  /* 0C07EDFE mov.l @(disp,pc),Rn */
	IF(0x0C07EE00u); r10 = MACL;  /* 0C07EE00 sts macl,Rn */
	r10 += r2;  /* 0C07EE02 add Rm,Rn */
	IF(0x0C07EE04u); MACL = r0 * r9;  /* 0C07EE04 mul.l Rm,Rn */
	r13 = R32(r10); UPD(0x0C07EE08u, 5);  /* 0C07EE06 mov.l @Rm,Rn */
	r8 = 0xFFFFFEFFu; UPD(0x0C07EE0Au, 1);  /* 0C07EE08 mov.w @(disp,pc),Rn */
	r9 += 0x4Cu;  /* 0C07EE0A add #imm,Rn */
	r13 &= r8;  /* 0C07EE0C and Rm,Rn */
	IF(0x0C07EE0Eu); r8 = MACL;  /* 0C07EE0E sts macl,Rn */
	r8 += r2;  /* 0C07EE10 add Rm,Rn */
	r6 = R32(r8); UPD(0x0C07EE14u, 5);  /* 0C07EE12 mov.l @Rm,Rn */
	r6 &= r9;  /* 0C07EE14 and Rm,Rn */
	r13 |= r6;  /* 0C07EE16 or Rm,Rn */
	W32(r10, r13); UPD(0x0C07EE1Au, 3);  /* 0C07EE18 mov.l Rm,@Rn */
	r5 = 0x84u; UPD(0x0C07EE1Cu, 1);  /* 0C07EE1A mov.w @(disp,pc),Rn */
	r13 = r10;  /* 0C07EE1C mov Rm,Rn */
	r13 += r5;  /* 0C07EE1E add Rm,Rn */
	r5 += r8;  /* 0C07EE20 add Rm,Rn */
	r7 = 0xC069B20u; UPD(0x0C07EE24u, 4);  /* 0C07EE22 mov.l @(disp,pc),Rn */
	r5 += 0x2u;  /* 0C07EE24 add #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r5); UPD(0x0C07EE28u, 2);  /* 0C07EE26 mov.w @Rm,Rn */
	r13 += 0x2u;  /* 0C07EE28 add #imm,Rn */
	r9 = 0xE0000u; UPD(0x0C07EE2Cu, 2);  /* 0C07EE2A mov.l @(disp,pc),Rn */
	r12 = r0;  /* 0C07EE2C mov Rm,Rn */
	r5 = r9;  /* 0C07EE2E mov Rm,Rn */
	r4 = r0;  /* 0C07EE30 mov Rm,Rn */
	IF(0x0C07EE32u); { u32 t_ = r7; PR = 0x0C07EE36u; W16(r13, r0); /* slot mov.w Rm,@Rn */ UPD(t_, 5); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C07EE36u); }  /* 0C07EE32 jsr @Rn */
L_0C07EE36: BLKS(0x0C07EE36u);
	r4 = R32(r8 + 0x24u); UPD(0x0C07EE38u, 1);  /* 0C07EE36 mov.l @(disp,Rm),Rn */
	r5 = r9;  /* 0C07EE38 mov Rm,Rn */
	r4 += r0;  /* 0C07EE3A add Rm,Rn */
	r3 = 0xC069AF0u; UPD(0x0C07EE3Eu, 3);  /* 0C07EE3C mov.l @(disp,pc),Rn */
	W32(r10 + 0x24u, r4); UPD(0x0C07EE40u, 1);  /* 0C07EE3E mov.l Rm,@(disp,Rn) */
	IF(0x0C07EE40u); { u32 t_ = r3; PR = 0x0C07EE44u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C07EE44u); }  /* 0C07EE40 jsr @Rn */
L_0C07EE44: BLKS(0x0C07EE44u);
	r4 = r11;  /* 0C07EE44 mov Rm,Rn */
	r12 = R32(r8 + 0x28u); UPD(0x0C07EE48u, 2);  /* 0C07EE46 mov.l @(disp,Rm),Rn */
	r11 = 0xC0A8AE0u; UPD(0x0C07EE4Au, 1);  /* 0C07EE48 mov.l @(disp,pc),Rn */
	r12 += r0;  /* 0C07EE4A add Rm,Rn */
	r9 = R32(r8 + 0xCu); UPD(0x0C07EE4Eu, 2);  /* 0C07EE4C mov.l @(disp,Rm),Rn */
	W32(r10 + 0x28u, r12); UPD(0x0C07EE50u, 1);  /* 0C07EE4E mov.l Rm,@(disp,Rn) */
	IF(0x0C07EE50u); { u32 t_ = r11; PR = 0x0C07EE54u; W32(r10 + 0xCu, r9); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C07EE54u); }  /* 0C07EE50 jsr @Rn */
L_0C07EE54: BLKS(0x0C07EE54u);
	r0 = 0x9Au; UPD(0x0C07EE56u, 1);  /* 0C07EE54 mov.w @(disp,pc),Rn */
	IF(0x0C07EE56u); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07EE58u, 1);  /* 0C07EE56 mov.b @(r0,Rm),Rn */
	T = (r2 & r2) == 0;  /* 0C07EE58 tst Rm,Rn */
	if (T) { UPD(0x0C07EEA0u, 4); goto L_0C07EEA0; }  /* 0C07EE5A bt */
L_0C07EE5C: BLKS(0x0C07EE5Cu);
	r12 = 0x0u;  /* 0C07EE5C mov #imm,Rn */
	IF(0x0C07EE5Eu); W8(r0 + r8, r12); UPD(0x0C07EE60u, 2);  /* 0C07EE5E mov.b Rm,@(r0,Rn) */
	r11 = 0xC0BBF10u; UPD(0x0C07EE62u, 1);  /* 0C07EE60 mov.l @(disp,pc),Rn */
	r0 += 0xFu;  /* 0C07EE62 add #imm,Rn */
	IF(0x0C07EE64u); r1 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C07EE66u, 2);  /* 0C07EE64 mov.b @(r0,Rm),Rn */
	r4 = R32(r10 + 0x24u); UPD(0x0C07EE68u, 1);  /* 0C07EE66 mov.l @(disp,Rm),Rn */
	r6 = r1 & 0xFF;  /* 0C07EE68 extu.b Rm,Rn */
	IF(0x0C07EE6Au); { u32 t_ = r11; PR = 0x0C07EE6Eu; r5 = R32(r10 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BBF10, 0x0C0BBF10u, 0x0C07EE6Eu); }  /* 0C07EE6A jsr @Rn */
L_0C07EE6E: BLKS(0x0C07EE6Eu);
	T = (r0 & r0) == 0;  /* 0C07EE6E tst Rm,Rn */
	if (T) { UPD(0x0C07EEA0u, 4); goto L_0C07EEA0; }  /* 0C07EE70 bt */
L_0C07EE72: BLKS(0x0C07EE72u);
	r11 = (u32)(s32)(s16)R16(r13); UPD(0x0C07EE74u, 1);  /* 0C07EE72 mov.w @Rm,Rn */
	r6 = 0xC069B20u; UPD(0x0C07EE76u, 1);  /* 0C07EE74 mov.l @(disp,pc),Rn */
	r9 = 0xA0000u; UPD(0x0C07EE78u, 1);  /* 0C07EE76 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C07EE78 mov Rm,Rn */
	IF(0x0C07EE7Au); { u32 t_ = r6; PR = 0x0C07EE7Eu; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C07EE7Eu); }  /* 0C07EE7A jsr @Rn */
L_0C07EE7E: BLKS(0x0C07EE7Eu);
	r7 = 0xC069AF0u; UPD(0x0C07EE80u, 1);  /* 0C07EE7E mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C07EE80 mov Rm,Rn */
	r13 = R32(r10 + 0x24u); UPD(0x0C07EE84u, 2);  /* 0C07EE82 mov.l @(disp,Rm),Rn */
	r5 = r9;  /* 0C07EE84 mov Rm,Rn */
	IF(0x0C07EE86u); { u32 t_ = r7; PR = 0x0C07EE8Au; r13 += r0; /* slot add Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C07EE8Au); }  /* 0C07EE86 jsr @Rn */
L_0C07EE8A: BLKS(0x0C07EE8Au);
	r6 = R32(r10 + 0x28u); UPD(0x0C07EE8Cu, 1);  /* 0C07EE8A mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C07EE8C add #imm,Rn */
	r3 = 0x20000u; UPD(0x0C07EE90u, 2);  /* 0C07EE8E mov.l @(disp,pc),Rn */
	r6 += r0;  /* 0C07EE90 add Rm,Rn */
	r10 = 0xC0BA480u; UPD(0x0C07EE94u, 2);  /* 0C07EE92 mov.l @(disp,pc),Rn */
	r4 = 0x1u;  /* 0C07EE94 mov #imm,Rn */
	W32(r15, r3); UPD(0x0C07EE98u, 2);  /* 0C07EE96 mov.l Rm,@Rn */
	r5 = r13;  /* 0C07EE98 mov Rm,Rn */
	IF(0x0C07EE9Au); { u32 t_ = r10; PR = 0x0C07EE9Eu; r7 = r11; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BA480, 0x0C0BA480u, 0x0C07EE9Eu); }  /* 0C07EE9A jsr @Rn */
L_0C07EE9E: BLKS(0x0C07EE9Eu);
	r15 += 0x4u;  /* 0C07EE9E add #imm,Rn */
	UPD(0x0C07EEA0u, 1);
L_0C07EEA0: BLKS(0x0C07EEA0u);
	{ IF(0x0C07EEA2u); ; /* slot nop */ UPD(0x0C07ECA8u, 3); goto L_0C07ECA8; }  /* 0C07EEA0 bra */
L_0C07EEB0: BLKS(0x0C07EEB0u);
	r8 = 0xC0A8CA0u; UPD(0x0C07EEB2u, 1);  /* 0C07EEB0 mov.l @(disp,pc),Rn */
	IF(0x0C07EEB2u); { u32 t_ = r8; PR = 0x0C07EEB6u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C07EEB6u); }  /* 0C07EEB2 jsr @Rn */
L_0C07EEB6: BLKS(0x0C07EEB6u);
	IF(0x0C07EEB6u); T = (s32)r0 >= 0;  /* 0C07EEB6 cmp/pz Rn */
	if (!T) { UPD(0x0C07EF4Cu, 4); goto L_0C07EF4C; }  /* 0C07EEB8 bf */
L_0C07EEBA: BLKS(0x0C07EEBAu);
	r9 = 0xB4u; UPD(0x0C07EEBCu, 1);  /* 0C07EEBA mov.w @(disp,pc),Rn */
	IF(0x0C07EEBCu); MACL = r11 * r9;  /* 0C07EEBC mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C07EEC0u, 3);  /* 0C07EEBE mov.l @(disp,pc),Rn */
	IF(0x0C07EEC0u); r13 = MACL;  /* 0C07EEC0 sts macl,Rn */
	r13 += r2;  /* 0C07EEC2 add Rm,Rn */
	IF(0x0C07EEC4u); MACL = r0 * r9;  /* 0C07EEC4 mul.l Rm,Rn */
	r5 = R32(r13); UPD(0x0C07EEC8u, 5);  /* 0C07EEC6 mov.l @Rm,Rn */
	r6 = r13;  /* 0C07EEC8 mov Rm,Rn */
	r8 = 0xFFFFFEFFu; UPD(0x0C07EECCu, 2);  /* 0C07EECA mov.w @(disp,pc),Rn */
	r9 += 0x4Cu;  /* 0C07EECC add #imm,Rn */
	r5 &= r8;  /* 0C07EECE and Rm,Rn */
	IF(0x0C07EED0u); r8 = MACL;  /* 0C07EED0 sts macl,Rn */
	r8 += r2;  /* 0C07EED2 add Rm,Rn */
	r4 = 0x84u; UPD(0x0C07EED6u, 5);  /* 0C07EED4 mov.w @(disp,pc),Rn */
	r0 = R32(r8); UPD(0x0C07EED8u, 1);  /* 0C07EED6 mov.l @Rm,Rn */
	r6 += r4;  /* 0C07EED8 add Rm,Rn */
	r0 &= r9;  /* 0C07EEDA and Rm,Rn */
	r4 += r8;  /* 0C07EEDC add Rm,Rn */
	r5 |= r0;  /* 0C07EEDE or Rm,Rn */
	r4 += 0x2u;  /* 0C07EEE0 add #imm,Rn */
	r12 = 0xC069B20u; UPD(0x0C07EEE4u, 6);  /* 0C07EEE2 mov.l @(disp,pc),Rn */
	r6 += 0x2u;  /* 0C07EEE4 add #imm,Rn */
	r7 = (u32)(s32)(s16)R16(r4); UPD(0x0C07EEE8u, 2);  /* 0C07EEE6 mov.w @Rm,Rn */
	W32(r13, r5); UPD(0x0C07EEEAu, 1);  /* 0C07EEE8 mov.l Rm,@Rn */
	r10 = r7;  /* 0C07EEEA mov Rm,Rn */
	r9 = 0xE0000u; UPD(0x0C07EEEEu, 2);  /* 0C07EEEC mov.l @(disp,pc),Rn */
	r4 = r7;  /* 0C07EEEE mov Rm,Rn */
	W16(r6, r7); UPD(0x0C07EEF2u, 2);  /* 0C07EEF0 mov.w Rm,@Rn */
	IF(0x0C07EEF2u); { u32 t_ = r12; PR = 0x0C07EEF6u; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C07EEF6u); }  /* 0C07EEF2 jsr @Rn */
L_0C07EEF6: BLKS(0x0C07EEF6u);
	r5 = r9;  /* 0C07EEF6 mov Rm,Rn */
	r3 = R32(r8 + 0x24u); UPD(0x0C07EEFAu, 2);  /* 0C07EEF8 mov.l @(disp,Rm),Rn */
	r4 = r10;  /* 0C07EEFA mov Rm,Rn */
	r9 = 0xC069AF0u; UPD(0x0C07EEFEu, 2);  /* 0C07EEFC mov.l @(disp,pc),Rn */
	r3 += r0;  /* 0C07EEFE add Rm,Rn */
	IF(0x0C07EF00u); { u32 t_ = r9; PR = 0x0C07EF04u; W32(r13 + 0x24u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C07EF04u); }  /* 0C07EF00 jsr @Rn */
L_0C07EF04: BLKS(0x0C07EF04u);
	r10 = R32(r8 + 0x28u); UPD(0x0C07EF06u, 1);  /* 0C07EF04 mov.l @(disp,Rm),Rn */
	r4 = r11;  /* 0C07EF06 mov Rm,Rn */
	r2 = 0xC0A8AE0u; UPD(0x0C07EF0Au, 2);  /* 0C07EF08 mov.l @(disp,pc),Rn */
	r10 += r0;  /* 0C07EF0A add Rm,Rn */
	r12 = R32(r8 + 0xCu); UPD(0x0C07EF0Eu, 2);  /* 0C07EF0C mov.l @(disp,Rm),Rn */
	W32(r13 + 0x28u, r10); UPD(0x0C07EF10u, 1);  /* 0C07EF0E mov.l Rm,@(disp,Rn) */
	IF(0x0C07EF10u); { u32 t_ = r2; PR = 0x0C07EF14u; W32(r13 + 0xCu, r12); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C07EF14u); }  /* 0C07EF10 jsr @Rn */
L_0C07EF14: BLKS(0x0C07EF14u);
	r4 = 0x98u; UPD(0x0C07EF16u, 1);  /* 0C07EF14 mov.w @(disp,pc),Rn */
	r0 = 0x0u;  /* 0C07EF16 mov #imm,Rn */
	r13 += r4;  /* 0C07EF18 add Rm,Rn */
	r4 += r8;  /* 0C07EF1A add Rm,Rn */
	r4 += 0x2u;  /* 0C07EF1C add #imm,Rn */
	r5 = (u32)(s32)(s8)R8(r4); UPD(0x0C07EF20u, 5);  /* 0C07EF1E mov.b @Rm,Rn */
	r13 += 0x2u;  /* 0C07EF20 add #imm,Rn */
	W8(r13, r5); UPD(0x0C07EF24u, 2);  /* 0C07EF22 mov.b Rm,@Rn */
	W8(r4, r0); UPD(0x0C07EF26u, 1);  /* 0C07EF24 mov.b Rm,@Rn */
L_0C07EF26: BLKS(0x0C07EF26u);
	{ IF(0x0C07EF28u); ; /* slot nop */ UPD(0x0C07ECA8u, 3); goto L_0C07ECA8; }  /* 0C07EF26 bra */
L_0C07EF30: BLKS(0x0C07EF30u);
	r13 = 0xC0A8CA0u; UPD(0x0C07EF32u, 1);  /* 0C07EF30 mov.l @(disp,pc),Rn */
	IF(0x0C07EF32u); { u32 t_ = r13; PR = 0x0C07EF36u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C07EF36u); }  /* 0C07EF32 jsr @Rn */
L_0C07EF36: BLKS(0x0C07EF36u);
	IF(0x0C07EF36u); T = (s32)r0 >= 0;  /* 0C07EF36 cmp/pz Rn */
	if (!T) { UPD(0x0C07EF4Cu, 4); goto L_0C07EF4C; }  /* 0C07EF38 bf */
L_0C07EF3A: BLKS(0x0C07EF3Au);
	r1 = 0xB4u; UPD(0x0C07EF3Cu, 1);  /* 0C07EF3A mov.w @(disp,pc),Rn */
	IF(0x0C07EF3Cu); MACL = r0 * r1;  /* 0C07EF3C mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C07EF40u, 3);  /* 0C07EF3E mov.l @(disp,pc),Rn */
	IF(0x0C07EF40u); r3 = MACL;  /* 0C07EF40 sts macl,Rn */
	r3 += r2;  /* 0C07EF42 add Rm,Rn */
	r7 = R32(r3 + 0xCu); UPD(0x0C07EF46u, 3);  /* 0C07EF44 mov.l @(disp,Rm),Rn */
	T = (r7 & r7) == 0;  /* 0C07EF46 tst Rm,Rn */
	{ u32 c_ = T; IF(0x0C07EF4Au); MACL = r11 * r1; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C07EF50u, 5); goto L_0C07EF50; } UPD(0x0C07EF4Cu, 2); goto L_0C07EF4C; }  /* 0C07EF48 bt/s */
L_0C07EF4C: BLKS(0x0C07EF4Cu);
	{ IF(0x0C07EF4Eu); ; /* slot nop */ UPD(0x0C07ED50u, 3); goto L_0C07ED50; }  /* 0C07EF4C bra */
L_0C07EF50: BLKS(0x0C07EF50u);
	r9 = 0x9Cu; UPD(0x0C07EF52u, 1);  /* 0C07EF50 mov.w @(disp,pc),Rn */
	IF(0x0C07EF52u); r8 = MACL;  /* 0C07EF52 sts macl,Rn */
	r8 += r2;  /* 0C07EF54 add Rm,Rn */
	r12 = R32(r3 + 0x24u); UPD(0x0C07EF58u, 3);  /* 0C07EF56 mov.l @(disp,Rm),Rn */
	r9 += r8;  /* 0C07EF58 add Rm,Rn */
	r10 = R32(r3 + 0x28u); UPD(0x0C07EF5Cu, 2);  /* 0C07EF5A mov.l @(disp,Rm),Rn */
	r6 = R32(r8 + 0x2Cu); UPD(0x0C07EF5Eu, 1);  /* 0C07EF5C mov.l @(disp,Rm),Rn */
	r1 = R32(r8 + 0x30u); UPD(0x0C07EF60u, 1);  /* 0C07EF5E mov.l @(disp,Rm),Rn */
	r12 += r6;  /* 0C07EF60 add Rm,Rn */
	r10 += r1;  /* 0C07EF62 add Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r9); UPD(0x0C07EF66u, 3);  /* 0C07EF64 mov.b @Rm,Rn */
	W32(r8 + 0x24u, r12); UPD(0x0C07EF68u, 1);  /* 0C07EF66 mov.l Rm,@(disp,Rn) */
	T = (r3 & r3) == 0;  /* 0C07EF68 tst Rm,Rn */
	{ u32 c_ = T; W32(r8 + 0x28u, r10); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C07EFE0u, 4); goto L_0C07EFE0; } UPD(0x0C07EF6Eu, 1); goto L_0C07EF6E; }  /* 0C07EF6A bt/s */
L_0C07EF6E: BLKS(0x0C07EF6Eu);
	r2 = 0x98u; UPD(0x0C07EF70u, 1);  /* 0C07EF6E mov.w @(disp,pc),Rn */
	r2 += r8;  /* 0C07EF70 add Rm,Rn */
	r1 = r2;  /* 0C07EF72 mov Rm,Rn */
	r1 += 0x1u;  /* 0C07EF74 add #imm,Rn */
	r8 = (u32)(s32)(s8)R8(r1); UPD(0x0C07EF78u, 4);  /* 0C07EF76 mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C07EF78 add #imm,Rn */
	r0 = r8 & 0xFF;  /* 0C07EF7A extu.b Rm,Rn */
	T = r0 == 0x8u;  /* 0C07EF7C cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r1, r8); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C07EF26u, 6); goto L_0C07EF26; } UPD(0x0C07EF82u, 1); goto L_0C07EF82; }  /* 0C07EF7E bf/s */
L_0C07EF82: BLKS(0x0C07EF82u);
	r2 += 0x2u;  /* 0C07EF82 add #imm,Rn */
	r12 = 0x1u;  /* 0C07EF84 mov #imm,Rn */
	W8(r2, r12); UPD(0x0C07EF88u, 3);  /* 0C07EF86 mov.b Rm,@Rn */
	r2 = r3;  /* 0C07EF88 mov Rm,Rn */
	r2 += 0xFFFFFFFFu;  /* 0C07EF8A add #imm,Rn */
	W8(r9, r2); UPD(0x0C07EF8Eu, 3);  /* 0C07EF8C mov.b Rm,@Rn */
	r9 = r2 & 0xFF;  /* 0C07EF8E extu.b Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C07EF90 tst Rm,Rn */
	{ u32 c_ = !T; W8(r1, r7); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C07EF26u, 5); goto L_0C07EF26; } UPD(0x0C07EF96u, 1); goto L_0C07EF96; }  /* 0C07EF92 bf/s */
L_0C07EF96: BLKS(0x0C07EF96u);
	r1 = 0xC069B90u; UPD(0x0C07EF98u, 1);  /* 0C07EF96 mov.l @(disp,pc),Rn */
	{ r4 = r11; /* slot mov Rm,Rn */ UPD(0x0C07ED54u, 3); goto L_0C07ED54; }  /* 0C07EF98 bra */
L_0C07EFE0: BLKS(0x0C07EFE0u);
	r10 = 0xC069BF0u; UPD(0x0C07EFE2u, 1);  /* 0C07EFE0 mov.l @(disp,pc),Rn */
	r13 = 0xC068F00u; UPD(0x0C07EFE4u, 1);  /* 0C07EFE2 mov.l @(disp,pc),Rn */
	IF(0x0C07EFE4u); { u32 t_ = r10; PR = 0x0C07EFE8u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069BF0, 0x0C069BF0u, 0x0C07EFE8u); }  /* 0C07EFE4 jsr @Rn */
L_0C07EFE8: BLKS(0x0C07EFE8u);
	r4 = r11;  /* 0C07EFE8 mov Rm,Rn */
	IF(0x0C07EFEAu); { u32 t_ = r13; PR = 0x0C07EFEEu; r5 = 0x2u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C068F00, 0x0C068F00u, 0x0C07EFEEu); }  /* 0C07EFEA jsr @Rn */
L_0C07EFEE: BLKS(0x0C07EFEEu);
	r5 = 0x86u; UPD(0x0C07EFF0u, 1);  /* 0C07EFEE mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C07EFF0 mov Rm,Rn */
	IF(0x0C07EFF2u); r7 = (u32)(s32)(s16)R16(r0 + r5); UPD(0x0C07EFF4u, 2);  /* 0C07EFF2 mov.w @(r0,Rm),Rn */
	r4 = 0x1Fu;  /* 0C07EFF4 mov #imm,Rn */
	r7 += 0x8u;  /* 0C07EFF6 add #imm,Rn */
	r3 = 0xC0A8AE0u; UPD(0x0C07EFFAu, 3);  /* 0C07EFF8 mov.l @(disp,pc),Rn */
	IF(0x0C07EFFAu); r7 >>= 2;  /* 0C07EFFA shlr2 Rn */
	IF(0x0C07EFFCu); r7 >>= 2;  /* 0C07EFFC shlr2 Rn */
	r7 &= r4;  /* 0C07EFFE and Rm,Rn */
	r4 = r11;  /* 0C07F000 mov Rm,Rn */
	IF(0x0C07F002u); { u32 t_ = r3; PR = 0x0C07F006u; W32(r8 + 0xCu, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 6); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C07F006u); }  /* 0C07F002 jsr @Rn */
L_0C07F006: BLKS(0x0C07F006u);
	r4 = r11;  /* 0C07F006 mov Rm,Rn */
	r11 = 0xC0BC1B0u; UPD(0x0C07F00Au, 2);  /* 0C07F008 mov.l @(disp,pc),Rn */
	r5 = 0x5Au;  /* 0C07F00A mov #imm,Rn */
	IF(0x0C07F00Cu); { u32 t_ = r11; PR = 0x0C07F010u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C07F010u); }  /* 0C07F00C jsr @Rn */
L_0C07F010: BLKS(0x0C07F010u);
	T = (r0 & r0) == 0;  /* 0C07F010 tst Rm,Rn */
	if (T) { UPD(0x0C07F018u, 4); goto L_0C07F018; }  /* 0C07F012 bt */
L_0C07F014: BLKS(0x0C07F014u);
	r0 = 0x8u;  /* 0C07F014 mov #imm,Rn */
	W8(r9, r0); UPD(0x0C07F018u, 2);  /* 0C07F016 mov.b Rm,@Rn */
L_0C07F018: BLKS(0x0C07F018u);
	{ IF(0x0C07F01Au); ; /* slot nop */ UPD(0x0C07ECA8u, 3); goto L_0C07ECA8; }  /* 0C07F018 bra */
L_0C07F020: BLKS(0x0C07F020u);
	r13 = 0xC0A8CA0u; UPD(0x0C07F022u, 1);  /* 0C07F020 mov.l @(disp,pc),Rn */
	IF(0x0C07F022u); { u32 t_ = r13; PR = 0x0C07F026u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C07F026u); }  /* 0C07F022 jsr @Rn */
L_0C07F026: BLKS(0x0C07F026u);
	IF(0x0C07F026u); T = (s32)r0 >= 0;  /* 0C07F026 cmp/pz Rn */
	if (!T) { UPD(0x0C07F0ECu, 4); goto L_0C07F0EC; }  /* 0C07F028 bf */
L_0C07F02A: BLKS(0x0C07F02Au);
	r2 = 0xB4u; UPD(0x0C07F02Cu, 1);  /* 0C07F02A mov.w @(disp,pc),Rn */
	IF(0x0C07F02Cu); MACL = r0 * r2;  /* 0C07F02C mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C07F030u, 3);  /* 0C07F02E mov.l @(disp,pc),Rn */
	IF(0x0C07F030u); r3 = MACL;  /* 0C07F030 sts macl,Rn */
	r3 += r7;  /* 0C07F032 add Rm,Rn */
	r6 = R32(r3 + 0xCu); UPD(0x0C07F036u, 3);  /* 0C07F034 mov.l @(disp,Rm),Rn */
	T = (r6 & r6) == 0;  /* 0C07F036 tst Rm,Rn */
	{ u32 c_ = !T; IF(0x0C07F03Au); MACL = r11 * r2; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C07F0ECu, 5); goto L_0C07F0EC; } goto L_0C07F03C; }  /* 0C07F038 bf/s */
L_0C07F03C: BLKS(0x0C07F03Cu);
	r4 = R32(r3 + 0x24u); UPD(0x0C07F03Eu, 3);  /* 0C07F03C mov.l @(disp,Rm),Rn */
	IF(0x0C07F03Eu); r10 = MACL;  /* 0C07F03E sts macl,Rn */
	r10 += r7;  /* 0C07F040 add Rm,Rn */
	r5 = R32(r10 + 0x2Cu); UPD(0x0C07F044u, 3);  /* 0C07F042 mov.l @(disp,Rm),Rn */
	r7 = R32(r3 + 0x28u); UPD(0x0C07F046u, 1);  /* 0C07F044 mov.l @(disp,Rm),Rn */
	r4 += r5;  /* 0C07F046 add Rm,Rn */
	r1 = R32(r10 + 0x30u); UPD(0x0C07F04Au, 2);  /* 0C07F048 mov.l @(disp,Rm),Rn */
	r12 = 0xC069BF0u; UPD(0x0C07F04Cu, 1);  /* 0C07F04A mov.l @(disp,pc),Rn */
	r7 += r1;  /* 0C07F04C add Rm,Rn */
	W32(r10 + 0x24u, r4); UPD(0x0C07F050u, 2);  /* 0C07F04E mov.l Rm,@(disp,Rn) */
	r8 = 0xC068F00u; UPD(0x0C07F052u, 1);  /* 0C07F050 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C07F052 mov Rm,Rn */
	IF(0x0C07F054u); { u32 t_ = r12; PR = 0x0C07F058u; W32(r10 + 0x28u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C069BF0, 0x0C069BF0u, 0x0C07F058u); }  /* 0C07F054 jsr @Rn */
L_0C07F058: BLKS(0x0C07F058u);
	r5 = 0x2u;  /* 0C07F058 mov #imm,Rn */
	IF(0x0C07F05Au); { u32 t_ = r8; PR = 0x0C07F05Eu; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C068F00, 0x0C068F00u, 0x0C07F05Eu); }  /* 0C07F05A jsr @Rn */
L_0C07F05E: BLKS(0x0C07F05Eu);
	r8 = 0x86u; UPD(0x0C07F060u, 1);  /* 0C07F05E mov.w @(disp,pc),Rn */
	r4 = r11;  /* 0C07F060 mov Rm,Rn */
	r8 += r10;  /* 0C07F062 add Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r8); UPD(0x0C07F066u, 3);  /* 0C07F064 mov.w @Rm,Rn */
	r0 += 0x8u;  /* 0C07F066 add #imm,Rn */
	r3 = 0xC0A8AE0u; UPD(0x0C07F06Au, 2);  /* 0C07F068 mov.l @(disp,pc),Rn */
	IF(0x0C07F06Au); r0 >>= 2;  /* 0C07F06A shlr2 Rn */
	IF(0x0C07F06Cu); r0 >>= 2;  /* 0C07F06C shlr2 Rn */
	r9 = 0xC0BC1B0u; UPD(0x0C07F070u, 3);  /* 0C07F06E mov.l @(disp,pc),Rn */
	r0 &= 0x1Fu;  /* 0C07F070 and #imm,r0 */
	IF(0x0C07F072u); { u32 t_ = r3; PR = 0x0C07F076u; W32(r10 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C07F076u); }  /* 0C07F072 jsr @Rn */
L_0C07F076: BLKS(0x0C07F076u);
	r4 = r11;  /* 0C07F076 mov Rm,Rn */
	r5 = 0x5Au;  /* 0C07F078 mov #imm,Rn */
	IF(0x0C07F07Au); { u32 t_ = r9; PR = 0x0C07F07Eu; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C07F07Eu); }  /* 0C07F07A jsr @Rn */
L_0C07F07E: BLKS(0x0C07F07Eu);
	T = (r0 & r0) == 0;  /* 0C07F07E tst Rm,Rn */
	if (T) { UPD(0x0C07F018u, 4); goto L_0C07F018; }  /* 0C07F080 bt */
L_0C07F082: BLKS(0x0C07F082u);
	r0 = r10;  /* 0C07F082 mov Rm,Rn */
	r6 = 0xA9u; UPD(0x0C07F086u, 2);  /* 0C07F084 mov.w @(disp,pc),Rn */
	r13 = 0xC0BBF10u; UPD(0x0C07F088u, 1);  /* 0C07F086 mov.l @(disp,pc),Rn */
	IF(0x0C07F088u); r2 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C07F08Au, 1);  /* 0C07F088 mov.b @(r0,Rm),Rn */
	r4 = R32(r10 + 0x24u); UPD(0x0C07F08Cu, 1);  /* 0C07F08A mov.l @(disp,Rm),Rn */
	r6 = r2 & 0xFF;  /* 0C07F08C extu.b Rm,Rn */
	IF(0x0C07F08Eu); { u32 t_ = r13; PR = 0x0C07F092u; r5 = R32(r10 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BBF10, 0x0C0BBF10u, 0x0C07F092u); }  /* 0C07F08E jsr @Rn */
L_0C07F092: BLKS(0x0C07F092u);
	T = (r0 & r0) == 0;  /* 0C07F092 tst Rm,Rn */
	if (T) { UPD(0x0C07F018u, 4); goto L_0C07F018; }  /* 0C07F094 bt */
L_0C07F096: BLKS(0x0C07F096u);
	r13 = (u32)(s32)(s16)R16(r8); UPD(0x0C07F098u, 1);  /* 0C07F096 mov.w @Rm,Rn */
	r8 = 0xC069B20u; UPD(0x0C07F09Au, 1);  /* 0C07F098 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C07F09A mov Rm,Rn */
	r9 = 0x80000u; UPD(0x0C07F09Eu, 2);  /* 0C07F09C mov.l @(disp,pc),Rn */
	IF(0x0C07F09Eu); { u32 t_ = r8; PR = 0x0C07F0A2u; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C07F0A2u); }  /* 0C07F09E jsr @Rn */
L_0C07F0A2: BLKS(0x0C07F0A2u);
	r5 = r9;  /* 0C07F0A2 mov Rm,Rn */
	r9 = 0xC069AF0u; UPD(0x0C07F0A6u, 2);  /* 0C07F0A4 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C07F0A6 mov Rm,Rn */
	r12 = R32(r10 + 0x24u); UPD(0x0C07F0AAu, 2);  /* 0C07F0A8 mov.l @(disp,Rm),Rn */
	IF(0x0C07F0AAu); { u32 t_ = r9; PR = 0x0C07F0AEu; r12 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C07F0AEu); }  /* 0C07F0AA jsr @Rn */
L_0C07F0AE: BLKS(0x0C07F0AEu);
	r6 = R32(r10 + 0x28u); UPD(0x0C07F0B0u, 1);  /* 0C07F0AE mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C07F0B0 add #imm,Rn */
	r6 += r0;  /* 0C07F0B2 add Rm,Rn */
	r0 = 0x20000u; UPD(0x0C07F0B6u, 3);  /* 0C07F0B4 mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C07F0B6 mov #imm,Rn */
	r10 = 0xC0BA480u; UPD(0x0C07F0BAu, 2);  /* 0C07F0B8 mov.l @(disp,pc),Rn */
	r5 = r12;  /* 0C07F0BA mov Rm,Rn */
	W32(r15, r0); UPD(0x0C07F0BEu, 2);  /* 0C07F0BC mov.l Rm,@Rn */
	IF(0x0C07F0BEu); { u32 t_ = r10; PR = 0x0C07F0C2u; r7 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BA480, 0x0C0BA480u, 0x0C07F0C2u); }  /* 0C07F0BE jsr @Rn */
L_0C07F0C2: BLKS(0x0C07F0C2u);
	{ r15 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C07EF96u, 3); goto L_0C07EF96; }  /* 0C07F0C2 bra */
L_0C07F0D0: BLKS(0x0C07F0D0u);
	r10 = 0xC0A8CA0u; UPD(0x0C07F0D2u, 1);  /* 0C07F0D0 mov.l @(disp,pc),Rn */
	IF(0x0C07F0D2u); { u32 t_ = r10; PR = 0x0C07F0D6u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C07F0D6u); }  /* 0C07F0D2 jsr @Rn */
L_0C07F0D6: BLKS(0x0C07F0D6u);
	IF(0x0C07F0D6u); T = (s32)r0 >= 0;  /* 0C07F0D6 cmp/pz Rn */
	if (!T) { UPD(0x0C07F0ECu, 4); goto L_0C07F0EC; }  /* 0C07F0D8 bf */
L_0C07F0DA: BLKS(0x0C07F0DAu);
	r2 = 0xB4u; UPD(0x0C07F0DCu, 1);  /* 0C07F0DA mov.w @(disp,pc),Rn */
	IF(0x0C07F0DCu); MACL = r0 * r2;  /* 0C07F0DC mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C07F0E0u, 3);  /* 0C07F0DE mov.l @(disp,pc),Rn */
	IF(0x0C07F0E0u); r7 = MACL;  /* 0C07F0E0 sts macl,Rn */
	r7 += r6;  /* 0C07F0E2 add Rm,Rn */
	r3 = R32(r7 + 0xCu); UPD(0x0C07F0E6u, 3);  /* 0C07F0E4 mov.l @(disp,Rm),Rn */
	T = (r3 & r3) == 0;  /* 0C07F0E6 tst Rm,Rn */
	{ u32 c_ = T; IF(0x0C07F0EAu); MACL = r11 * r2; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C07F0F0u, 5); goto L_0C07F0F0; } UPD(0x0C07F0ECu, 2); goto L_0C07F0EC; }  /* 0C07F0E8 bt/s */
L_0C07F0EC: BLKS(0x0C07F0ECu);
	{ IF(0x0C07F0EEu); ; /* slot nop */ UPD(0x0C07ED50u, 3); goto L_0C07ED50; }  /* 0C07F0EC bra */
L_0C07F0F0: BLKS(0x0C07F0F0u);
	r5 = R32(r7 + 0x24u); UPD(0x0C07F0F2u, 1);  /* 0C07F0F0 mov.l @(disp,Rm),Rn */
	r4 = R32(r7 + 0x28u); UPD(0x0C07F0F4u, 1);  /* 0C07F0F2 mov.l @(disp,Rm),Rn */
	IF(0x0C07F0F4u); r11 = MACL;  /* 0C07F0F4 sts macl,Rn */
	r11 += r6;  /* 0C07F0F6 add Rm,Rn */
	r1 = R32(r11 + 0x2Cu); UPD(0x0C07F0FAu, 3);  /* 0C07F0F8 mov.l @(disp,Rm),Rn */
	r7 = R32(r11 + 0x30u); UPD(0x0C07F0FCu, 1);  /* 0C07F0FA mov.l @(disp,Rm),Rn */
	r5 += r1;  /* 0C07F0FC add Rm,Rn */
	r4 += r7;  /* 0C07F0FE add Rm,Rn */
	W32(r11 + 0x24u, r5); UPD(0x0C07F102u, 3);  /* 0C07F100 mov.l Rm,@(disp,Rn) */
	{ W32(r11 + 0x28u, r4); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C07ECA8u, 3); goto L_0C07ECA8; }  /* 0C07F102 bra */
}

void blk_f_0C07F140(sh3_t *c)
{
	LOCALS;
L_0C07F140: BLKS(0x0C07F140u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07F142u, 1);  /* 0C07F140 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07F144u, 1);  /* 0C07F142 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07F146u, 1);  /* 0C07F144 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07F148u, 1);  /* 0C07F146 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07F14Au, 1);  /* 0C07F148 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C07F14Cu, 1);  /* 0C07F14A mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07F14Eu, 1);  /* 0C07F14C mov.l Rm,@-Rn */
	r4 = 0xC2ABAA4u; UPD(0x0C07F150u, 1);  /* 0C07F14E mov.l @(disp,pc),Rn */
	IF(0x0C07F150u); r15 -= 4; W32(r15, PR); UPD(0x0C07F152u, 1);  /* 0C07F150 sts.l pr,@-Rn */
	r3 = R32(r4); UPD(0x0C07F154u, 1);  /* 0C07F152 mov.l @Rm,Rn */
	r15 += 0xFFFFFFF4u;  /* 0C07F154 add #imm,Rn */
	r8 = 0xC29D724u; UPD(0x0C07F158u, 2);  /* 0C07F156 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C07F158 mov Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r0 = v_; } UPD(0x0C07F15Cu, 2);  /* 0C07F15A mov.w @Rm+,Rn */
	r7 = R32(r8); UPD(0x0C07F15Eu, 1);  /* 0C07F15C mov.l @Rm,Rn */
	IF(0x0C07F15Eu); r0 <<= 2;  /* 0C07F15E shll2 Rn */
	IF(0x0C07F160u); r6 = R32(r0 + r7); UPD(0x0C07F162u, 2);  /* 0C07F160 mov.l @(r0,Rm),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r2 = v_; } UPD(0x0C07F164u, 1);  /* 0C07F162 mov.w @Rm+,Rn */
	r5 = 0xC297460u; UPD(0x0C07F166u, 1);  /* 0C07F164 mov.l @(disp,pc),Rn */
	r9 = 0xC2460ACu; UPD(0x0C07F168u, 1);  /* 0C07F166 mov.l @(disp,pc),Rn */
	r8 = 0xC069510u; UPD(0x0C07F16Au, 1);  /* 0C07F168 mov.l @(disp,pc),Rn */
	W32(r5, r6); UPD(0x0C07F16Cu, 1);  /* 0C07F16A mov.l Rm,@Rn */
	W32(r4, r3); UPD(0x0C07F16Eu, 1);  /* 0C07F16C mov.l Rm,@Rn */
	r0 = (u32)(s32)(s16)R16(r9); UPD(0x0C07F170u, 1);  /* 0C07F16E mov.w @Rm,Rn */
	r11 = 0xC2B03A2u; UPD(0x0C07F172u, 1);  /* 0C07F170 mov.l @(disp,pc),Rn */
	r4 = r0 & 0xFFFF;  /* 0C07F172 extu.w Rm,Rn */
	r5 = 0x8000u; UPD(0x0C07F176u, 2);  /* 0C07F174 mov.l @(disp,pc),Rn */
	IF(0x0C07F176u); { u32 t_ = r8; PR = 0x0C07F17Au; W16(r11, r2); /* slot mov.w Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069510, 0x0C069510u, 0x0C07F17Au); }  /* 0C07F176 jsr @Rn */
L_0C07F17A: BLKS(0x0C07F17Au);
	T = (r0 & r0) == 0;  /* 0C07F17A tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07F1A0u, 4); goto L_0C07F1A0; } UPD(0x0C07F180u, 1); goto L_0C07F180; }  /* 0C07F17C bf/s */
L_0C07F180: BLKS(0x0C07F180u);
	r14 += 0xCu;  /* 0C07F180 add #imm,Rn */
	UPD(0x0C07F182u, 1);
L_0C07F182: BLKS(0x0C07F182u);
	r15 = r14;  /* 0C07F182 mov Rm,Rn */
	IF(0x0C07F184u); PR = R32(r15); r15 += 4; UPD(0x0C07F186u, 2);  /* 0C07F184 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07F188u, 1);  /* 0C07F186 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07F18Au, 1);  /* 0C07F188 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07F18Cu, 1);  /* 0C07F18A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07F18Eu, 1);  /* 0C07F18C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07F190u, 1);  /* 0C07F18E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07F192u, 1);  /* 0C07F190 mov.l @Rm+,Rn */
	IF(0x0C07F192u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07F192 rts */
L_0C07F1A0: BLKS(0x0C07F1A0u);
	r10 = 0xC071740u; UPD(0x0C07F1A2u, 1);  /* 0C07F1A0 mov.l @(disp,pc),Rn */
	IF(0x0C07F1A2u); { u32 t_ = r10; PR = 0x0C07F1A6u; r4 = 0xDu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C071740, 0x0C071740u, 0x0C07F1A6u); }  /* 0C07F1A2 jsr @Rn */
L_0C07F1A6: BLKS(0x0C07F1A6u);
	T = (r0 & r0) == 0;  /* 0C07F1A6 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07F180u, 4); goto L_0C07F180; } goto L_0C07F1AC; }  /* 0C07F1A8 bt/s */
L_0C07F1AC: BLKS(0x0C07F1ACu);
	r12 = 0xC28EDFCu; UPD(0x0C07F1AEu, 2);  /* 0C07F1AC mov.l @(disp,pc),Rn */
	r8 = 0xB4u; UPD(0x0C07F1B0u, 1);  /* 0C07F1AE mov.w @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r12); r12 += 2; r10 = v_; } UPD(0x0C07F1B2u, 1);  /* 0C07F1B0 mov.w @Rm+,Rn */
	IF(0x0C07F1B2u); MACL = r10 * r8;  /* 0C07F1B2 mul.l Rm,Rn */
	r3 = (u32)(s32)(s16)R16(r9); UPD(0x0C07F1B6u, 3);  /* 0C07F1B4 mov.w @Rm,Rn */
	r4 = 0xC286578u; UPD(0x0C07F1B8u, 1);  /* 0C07F1B6 mov.l @(disp,pc),Rn */
	IF(0x0C07F1B8u); r8 = MACL;  /* 0C07F1B8 sts macl,Rn */
	r8 += r4;  /* 0C07F1BA add Rm,Rn */
	r0 = r3 & 0xFFFF;  /* 0C07F1BC extu.w Rm,Rn */
	W32(r8 + 0x4u, r0); UPD(0x0C07F1C0u, 4);  /* 0C07F1BE mov.l Rm,@(disp,Rn) */
	r4 = r10;  /* 0C07F1C0 mov Rm,Rn */
	r13 = (u32)(s32)(s16)R16(r11); UPD(0x0C07F1C4u, 2);  /* 0C07F1C2 mov.w @Rm,Rn */
	r0 = 0x8Au; UPD(0x0C07F1C6u, 1);  /* 0C07F1C4 mov.w @(disp,pc),Rn */
	r11 = 0x0u;  /* 0C07F1C6 mov #imm,Rn */
	r7 = 0xC0A8A30u; UPD(0x0C07F1CAu, 2);  /* 0C07F1C8 mov.l @(disp,pc),Rn */
	IF(0x0C07F1CAu); W16(r0 + r8, r13); UPD(0x0C07F1CCu, 1);  /* 0C07F1CA mov.w Rm,@(r0,Rn) */
	r6 = 0xD3000104u; UPD(0x0C07F1CEu, 1);  /* 0C07F1CC mov.l @(disp,pc),Rn */
	r0 += 0xFFFFFFFCu;  /* 0C07F1CE add #imm,Rn */
	W32(r8, r6); UPD(0x0C07F1D2u, 2);  /* 0C07F1D0 mov.l Rm,@Rn */
	IF(0x0C07F1D2u); W16(r0 + r8, r13); UPD(0x0C07F1D4u, 1);  /* 0C07F1D2 mov.w Rm,@(r0,Rn) */
	W32(r8 + 0xCu, r11); UPD(0x0C07F1D6u, 1);  /* 0C07F1D4 mov.l Rm,@(disp,Rn) */
	IF(0x0C07F1D6u); { u32 t_ = r7; PR = 0x0C07F1DAu; W32(r8 + 0x8u, r11); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C07F1DAu); }  /* 0C07F1D6 jsr @Rn */
L_0C07F1DA: BLKS(0x0C07F1DAu);
	r9 = 0xC0722E0u; UPD(0x0C07F1DCu, 1);  /* 0C07F1DA mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C07F1DC mov Rm,Rn */
	r5 = 0x1600000u; UPD(0x0C07F1E0u, 2);  /* 0C07F1DE mov.l @(disp,pc),Rn */
	IF(0x0C07F1E0u); { u32 t_ = r9; PR = 0x0C07F1E4u; W32(r8 + 0x24u, r5); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0722E0, 0x0C0722E0u, 0x0C07F1E4u); }  /* 0C07F1E0 jsr @Rn */
L_0C07F1E4: BLKS(0x0C07F1E4u);
	r2 = 0xC0A9AE0u; UPD(0x0C07F1E6u, 1);  /* 0C07F1E4 mov.l @(disp,pc),Rn */
	r9 = 0x8Cu; UPD(0x0C07F1E8u, 1);  /* 0C07F1E6 mov.w @(disp,pc),Rn */
	IF(0x0C07F1E8u); { u32 t_ = r2; PR = 0x0C07F1ECu; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C07F1ECu); }  /* 0C07F1E8 jsr @Rn */
L_0C07F1EC: BLKS(0x0C07F1ECu);
	r0 = 0xADu; UPD(0x0C07F1EEu, 1);  /* 0C07F1EC mov.w @(disp,pc),Rn */
	r4 = 0x13u;  /* 0C07F1EE mov #imm,Rn */
	r3 = 0xA8u; UPD(0x0C07F1F2u, 2);  /* 0C07F1F0 mov.w @(disp,pc),Rn */
	r9 += r8;  /* 0C07F1F2 add Rm,Rn */
	IF(0x0C07F1F4u); W8(r0 + r8, r4); UPD(0x0C07F1F6u, 2);  /* 0C07F1F4 mov.b Rm,@(r0,Rn) */
	r3 += r8;  /* 0C07F1F6 add Rm,Rn */
	r3 += 0x1u;  /* 0C07F1F8 add #imm,Rn */
	r0 = 0xC0A9D30u; UPD(0x0C07F1FCu, 3);  /* 0C07F1FA mov.l @(disp,pc),Rn */
	W8(r3, r4); UPD(0x0C07F1FEu, 1);  /* 0C07F1FC mov.b Rm,@Rn */
	r6 = 0xC297460u; UPD(0x0C07F200u, 1);  /* 0C07F1FE mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C07F200 mov Rm,Rn */
	r5 = R32(r6); UPD(0x0C07F204u, 2);  /* 0C07F202 mov.l @Rm,Rn */
	IF(0x0C07F204u); { u32 t_ = r0; PR = 0x0C07F208u; W32(r14 + 0x8u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9D30, 0x0C0A9D30u, 0x0C07F208u); }  /* 0C07F204 jsr @Rn */
L_0C07F208: BLKS(0x0C07F208u);
	r13 = 0x94u; UPD(0x0C07F20Au, 1);  /* 0C07F208 mov.w @(disp,pc),Rn */
	r0 = 0x90u; UPD(0x0C07F20Cu, 1);  /* 0C07F20A mov.w @(disp,pc),Rn */
	r13 += r8;  /* 0C07F20C add Rm,Rn */
	r1 = R32(r14 + 0x8u); UPD(0x0C07F210u, 2);  /* 0C07F20E mov.l @(disp,Rm),Rn */
	W32(r13, r11); UPD(0x0C07F212u, 1);  /* 0C07F210 mov.l Rm,@Rn */
	IF(0x0C07F212u); W32(r0 + r8, r11); UPD(0x0C07F214u, 1);  /* 0C07F212 mov.l Rm,@(r0,Rn) */
	r13 = r8;  /* 0C07F214 mov Rm,Rn */
	W32(r9, r11); UPD(0x0C07F218u, 2);  /* 0C07F216 mov.l Rm,@Rn */
	W32(r8 + 0x30u, r11); UPD(0x0C07F21Au, 1);  /* 0C07F218 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x2Cu, r11); UPD(0x0C07F21Cu, 1);  /* 0C07F21A mov.l Rm,@(disp,Rn) */
	W32(r14, r11); UPD(0x0C07F21Eu, 1);  /* 0C07F21C mov.l Rm,@Rn */
	W32(r14 + 0x4u, r1); UPD(0x0C07F220u, 1);  /* 0C07F21E mov.l Rm,@(disp,Rn) */
	r11 = 0x0u;  /* 0C07F220 mov #imm,Rn */
	IF(0x0C07F222u); ;  /* 0C07F222 nop */
	UPD(0x0C07F224u, 2);
L_0C07F224: BLKS(0x0C07F224u);
	r9 = 0xC18C350u; UPD(0x0C07F226u, 1);  /* 0C07F224 mov.l @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r12); r12 += 2; r10 = v_; } UPD(0x0C07F228u, 1);  /* 0C07F226 mov.w @Rm+,Rn */
	r9 += r11;  /* 0C07F228 add Rm,Rn */
	r8 = 0xB4u; UPD(0x0C07F22Cu, 2);  /* 0C07F22A mov.w @(disp,pc),Rn */
	r9 += 0x4u;  /* 0C07F22C add #imm,Rn */
	IF(0x0C07F22Eu); MACL = r10 * r8;  /* 0C07F22E mul.l Rm,Rn */
	r6 = (u32)(s32)(s16)R16(r9); UPD(0x0C07F232u, 4);  /* 0C07F230 mov.w @Rm,Rn */
	r11 += 0x14u;  /* 0C07F232 add #imm,Rn */
	r1 = 0xC286578u; UPD(0x0C07F236u, 2);  /* 0C07F234 mov.l @(disp,pc),Rn */
	IF(0x0C07F236u); r8 = MACL;  /* 0C07F236 sts macl,Rn */
	r0 = 0xC28EDFCu; UPD(0x0C07F23Au, 2);  /* 0C07F238 mov.l @(disp,pc),Rn */
	r6 += r6;  /* 0C07F23A add Rm,Rn */
	IF(0x0C07F23Cu); r7 = (u32)(s32)(s16)R16(r0 + r6); UPD(0x0C07F23Eu, 2);  /* 0C07F23C mov.w @(r0,Rm),Rn */
	r8 += r1;  /* 0C07F23E add Rm,Rn */
	r8 += 0x7Cu;  /* 0C07F240 add #imm,Rn */
	W16(r8, r7); UPD(0x0C07F244u, 3);  /* 0C07F242 mov.w Rm,@Rn */
	r9 += 0xFFFFFFFCu;  /* 0C07F244 add #imm,Rn */
	r5 = (u32)(s32)(s16)R16(r0); UPD(0x0C07F248u, 2);  /* 0C07F246 mov.w @Rm,Rn */
	r8 += 0x2u;  /* 0C07F248 add #imm,Rn */
	W16(r8, r5); UPD(0x0C07F24Cu, 2);  /* 0C07F24A mov.w Rm,@Rn */
	r7 = 0x0u;  /* 0C07F24C mov #imm,Rn */
	r3 = 0xC2460ACu; UPD(0x0C07F250u, 2);  /* 0C07F24E mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFF82u;  /* 0C07F250 add #imm,Rn */
	r4 = (u32)(s32)(s16)R16(r3); UPD(0x0C07F254u, 2);  /* 0C07F252 mov.w @Rm,Rn */
	r2 = R32(r9); UPD(0x0C07F256u, 1);  /* 0C07F254 mov.l @Rm,Rn */
	r6 = r4 & 0xFFFF;  /* 0C07F256 extu.w Rm,Rn */
	W32(r8, r2); UPD(0x0C07F25Au, 2);  /* 0C07F258 mov.l Rm,@Rn */
	r4 = r10;  /* 0C07F25A mov Rm,Rn */
	W32(r8 + 0x4u, r6); UPD(0x0C07F25Eu, 2);  /* 0C07F25C mov.l Rm,@(disp,Rn) */
	r5 = 0xC0A8A30u; UPD(0x0C07F260u, 1);  /* 0C07F25E mov.l @(disp,pc),Rn */
	r0 = R32(r9 + 0x8u); UPD(0x0C07F262u, 1);  /* 0C07F260 mov.l @(disp,Rm),Rn */
	W32(r8 + 0xCu, r7); UPD(0x0C07F264u, 1);  /* 0C07F262 mov.l Rm,@(disp,Rn) */
	IF(0x0C07F264u); { u32 t_ = r5; PR = 0x0C07F268u; W32(r8 + 0x8u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C07F268u); }  /* 0C07F264 jsr @Rn */
L_0C07F268: BLKS(0x0C07F268u);
	r2 = 0xC2B03A2u; UPD(0x0C07F26Au, 1);  /* 0C07F268 mov.l @(disp,pc),Rn */
	r0 = r8;  /* 0C07F26A mov Rm,Rn */
	r3 = (u32)(s32)(s16)R16(r2); UPD(0x0C07F26Eu, 2);  /* 0C07F26C mov.w @Rm,Rn */
	IF(0x0C07F26Eu); r3 >>= 2;  /* 0C07F26E shlr2 Rn */
	r4 = 0x86u; UPD(0x0C07F272u, 2);  /* 0C07F270 mov.w @(disp,pc),Rn */
	IF(0x0C07F272u); r3 >>= 2;  /* 0C07F272 shlr2 Rn */
	IF(0x0C07F274u); r3 >>= 2;  /* 0C07F274 shlr2 Rn */
	IF(0x0C07F276u); W16(r0 + r4, r3); UPD(0x0C07F278u, 3);  /* 0C07F276 mov.w Rm,@(r0,Rn) */
	r6 = R32(r13 + 0x24u); UPD(0x0C07F27Au, 1);  /* 0C07F278 mov.l @(disp,Rm),Rn */
	r4 = r10;  /* 0C07F27A mov Rm,Rn */
	r0 = R32(r13 + 0x28u); UPD(0x0C07F27Eu, 2);  /* 0C07F27C mov.l @(disp,Rm),Rn */
	W32(r8 + 0x24u, r6); UPD(0x0C07F280u, 1);  /* 0C07F27E mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x28u, r0); UPD(0x0C07F282u, 1);  /* 0C07F280 mov.l Rm,@(disp,Rn) */
	r7 = R32(r9 + 0xCu); UPD(0x0C07F284u, 1);  /* 0C07F282 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x2Cu, r7); UPD(0x0C07F286u, 1);  /* 0C07F284 mov.l Rm,@(disp,Rn) */
	r5 = R32(r9 + 0x10u); UPD(0x0C07F288u, 1);  /* 0C07F286 mov.l @(disp,Rm),Rn */
	r10 = 0xC0A9AE0u; UPD(0x0C07F28Au, 1);  /* 0C07F288 mov.l @(disp,pc),Rn */
	W32(r8 + 0x30u, r5); UPD(0x0C07F28Cu, 1);  /* 0C07F28A mov.l Rm,@(disp,Rn) */
	r2 = 0xFFFA0000u; UPD(0x0C07F28Eu, 1);  /* 0C07F28C mov.l @(disp,pc),Rn */
	r8 += 0x50u;  /* 0C07F28E add #imm,Rn */
	IF(0x0C07F290u); { u32 t_ = r10; PR = 0x0C07F294u; W32(r8, r2); /* slot mov.l Rm,@Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C07F294u); }  /* 0C07F290 jsr @Rn */
L_0C07F294: BLKS(0x0C07F294u);
	r0 = 0xB0u; UPD(0x0C07F296u, 1);  /* 0C07F294 mov.w @(disp,pc),Rn */
	r8 += 0xFFFFFFB0u;  /* 0C07F296 add #imm,Rn */
	IF(0x0C07F298u); r3 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C07F29Au, 2);  /* 0C07F298 mov.b @(r0,Rm),Rn */
	r10 = 0xBu;  /* 0C07F29A mov #imm,Rn */
	IF(0x0C07F29Cu); W8(r0 + r8, r3); UPD(0x0C07F29Eu, 2);  /* 0C07F29C mov.b Rm,@(r0,Rn) */
	r0 = 0xA8u; UPD(0x0C07F2A0u, 1);  /* 0C07F29E mov.w @(disp,pc),Rn */
	r7 = 0xACu; UPD(0x0C07F2A2u, 1);  /* 0C07F2A0 mov.w @(disp,pc),Rn */
	r0 += r8;  /* 0C07F2A2 add Rm,Rn */
	r8 += r7;  /* 0C07F2A4 add Rm,Rn */
	r4 = R32(r14 + 0x4u); UPD(0x0C07F2A8u, 3);  /* 0C07F2A6 mov.l @(disp,Rm),Rn */
	r7 += r13;  /* 0C07F2A8 add Rm,Rn */
	r7 += 0x1u;  /* 0C07F2AA add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r4); UPD(0x0C07F2AEu, 3);  /* 0C07F2AC mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C07F2AE add #imm,Rn */
	r5 = (u32)(s32)(s8)R8(r7); UPD(0x0C07F2B2u, 2);  /* 0C07F2B0 mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C07F2B2 add #imm,Rn */
	W8(r0, r6); UPD(0x0C07F2B6u, 2);  /* 0C07F2B4 mov.b Rm,@Rn */
	W8(r8, r5); UPD(0x0C07F2B8u, 1);  /* 0C07F2B6 mov.b Rm,@Rn */
	r9 = R32(r14); UPD(0x0C07F2BAu, 1);  /* 0C07F2B8 mov.l @Rm,Rn */
	r9 += 0x1u;  /* 0C07F2BA add #imm,Rn */
	r2 = (u32)(s32)(s16)r9;  /* 0C07F2BC exts.w Rm,Rn */
	W32(r14, r2); UPD(0x0C07F2C0u, 3);  /* 0C07F2BE mov.l Rm,@Rn */
	r1 = R32(r14); UPD(0x0C07F2C2u, 1);  /* 0C07F2C0 mov.l @Rm,Rn */
	T = (s32)r1 > (s32)r10;  /* 0C07F2C2 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07F224u, 4); goto L_0C07F224; } goto L_0C07F2C8; }  /* 0C07F2C4 bf/s */
L_0C07F2C8: BLKS(0x0C07F2C8u);
	{ r14 += 0xCu; /* slot add #imm,Rn */ UPD(0x0C07F182u, 4); goto L_0C07F182; }  /* 0C07F2C8 bra */
}

void blk_f_0C07F330(sh3_t *c)
{
	LOCALS;
L_0C07F330: BLKS(0x0C07F330u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07F332u, 1);  /* 0C07F330 mov.l Rm,@-Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C07F332 exts.w Rm,Rn */
	r3 = 0xB4u; UPD(0x0C07F336u, 2);  /* 0C07F334 mov.w @(disp,pc),Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07F338u, 1);  /* 0C07F336 mov.l Rm,@-Rn */
	IF(0x0C07F338u); MACL = r4 * r3;  /* 0C07F338 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07F33Cu, 3);  /* 0C07F33A mov.l Rm,@-Rn */
	r0 = 0xC286578u; UPD(0x0C07F33Eu, 1);  /* 0C07F33C mov.l @(disp,pc),Rn */
	IF(0x0C07F33Eu); r2 = MACL;  /* 0C07F33E sts macl,Rn */
	IF(0x0C07F340u); r15 -= 4; W32(r15, PR); UPD(0x0C07F342u, 2);  /* 0C07F340 sts.l pr,@-Rn */
	r0 += r2;  /* 0C07F342 add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C07F346u, 2);  /* 0C07F344 mov.l @(disp,Rm),Rn */
	r0 = 0x7u;  /* 0C07F346 mov #imm,Rn */
	T = r2 > r0;  /* 0C07F348 cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07F3C0u, 5); goto L_0C07F3C0; } goto L_0C07F34E; }  /* 0C07F34A bt/s */
L_0C07F34E: BLKS(0x0C07F34Eu);
	r0 = 0xC07F360u;  /* 0C07F34E mova @(disp,pc),r0 */
	r2 += r2;  /* 0C07F350 add Rm,Rn */
	IF(0x0C07F352u); r5 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C07F354u, 4);  /* 0C07F352 mov.w @(r0,Rm),Rn */
	IF(0x0C07F354u); { u32 tv_ = (r5 + 0x0C07F358u); u32 t_ = PHYS(tv_); IF(0x0C07F356u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C07F370u: goto L_0C07F370; case 0x0C07F380u: goto L_0C07F380; case 0x0C07F3D0u: goto L_0C07F3D0; case 0x0C07F400u: goto L_0C07F400; case 0x0C07F430u: goto L_0C07F430; case 0x0C07F460u: goto L_0C07F460; case 0x0C07F490u: goto L_0C07F490; default: JUMPD(tv_); } }  /* 0C07F354 braf Rn */
L_0C07F370: BLKS(0x0C07F370u);
	r6 = 0xC0A9A70u; UPD(0x0C07F372u, 1);  /* 0C07F370 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C07F372 mov Rm,Rn */
	IF(0x0C07F374u); PR = R32(r15); r15 += 4; UPD(0x0C07F376u, 2);  /* 0C07F374 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07F378u, 1);  /* 0C07F376 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07F37Au, 1);  /* 0C07F378 mov.l @Rm+,Rn */
	IF(0x0C07F37Au); { u32 tv_ = r6; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A9A70u: TAIL(blk_f_0C0A9A70); default: JUMPD(tv_); } }  /* 0C07F37A jmp @Rn */
L_0C07F380: BLKS(0x0C07F380u);
	r8 = 0xB4u; UPD(0x0C07F382u, 1);  /* 0C07F380 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C07F382 add #imm,Rn */
	IF(0x0C07F384u); MACL = r4 * r8;  /* 0C07F384 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C07F388u, 4);  /* 0C07F386 mov.l @(disp,pc),Rn */
	IF(0x0C07F388u); r8 = MACL;  /* 0C07F388 sts macl,Rn */
	r8 += r0;  /* 0C07F38A add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C07F38Eu, 3);  /* 0C07F38C mov.w @(disp,pc),Rn */
	IF(0x0C07F38Eu); r5 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07F390u, 1);  /* 0C07F38E mov.b @(r0,Rm),Rn */
	r3 = r5 & 0xFF;  /* 0C07F390 extu.b Rm,Rn */
	W32(r15, r3); UPD(0x0C07F394u, 2);  /* 0C07F392 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C07F394 add #imm,Rn */
	IF(0x0C07F396u); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07F398u, 2);  /* 0C07F396 mov.b @(r0,Rm),Rn */
	r5 = 0x5u;  /* 0C07F398 mov #imm,Rn */
	r7 = r2 & 0xFF;  /* 0C07F39A extu.b Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C07F39Eu, 3);  /* 0C07F39C mov.l Rm,@(disp,Rn) */
	r9 = 0xC0BD6F0u; UPD(0x0C07F3A0u, 1);  /* 0C07F39E mov.l @(disp,pc),Rn */
	r4 = R32(r8); UPD(0x0C07F3A2u, 1);  /* 0C07F3A0 mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C07F3A4u, 1);  /* 0C07F3A2 mov.l @(disp,Rm),Rn */
	IF(0x0C07F3A4u); { u32 t_ = r9; PR = 0x0C07F3A8u; r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C07F3A8u); }  /* 0C07F3A4 jsr @Rn */
L_0C07F3A8: BLKS(0x0C07F3A8u);
	r4 = 0x20000u; UPD(0x0C07F3AAu, 1);  /* 0C07F3A8 mov.l @(disp,pc),Rn */
	r9 = 0x0u;  /* 0C07F3AA mov #imm,Rn */
	r0 = 0xC07CD80u; UPD(0x0C07F3AEu, 2);  /* 0C07F3AC mov.l @(disp,pc),Rn */
	r7 = 0x14u;  /* 0C07F3AE mov #imm,Rn */
	W32(r15, r4); UPD(0x0C07F3B2u, 2);  /* 0C07F3B0 mov.l Rm,@Rn */
	W32(r15 + 0x4u, r9); UPD(0x0C07F3B4u, 1);  /* 0C07F3B2 mov.l Rm,@(disp,Rn) */
	r4 = 0x3u;  /* 0C07F3B4 mov #imm,Rn */
	r5 = R32(r8 + 0x24u); UPD(0x0C07F3B8u, 2);  /* 0C07F3B6 mov.l @(disp,Rm),Rn */
	IF(0x0C07F3B8u); { u32 t_ = r0; PR = 0x0C07F3BCu; r6 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07CD80, 0x0C07CD80u, 0x0C07F3BCu); }  /* 0C07F3B8 jsr @Rn */
L_0C07F3BC: BLKS(0x0C07F3BCu);
	W32(r8, r9); UPD(0x0C07F3BEu, 1);  /* 0C07F3BC mov.l Rm,@Rn */
L_0C07F3BE: BLKS(0x0C07F3BEu);
	r15 += 0x8u;  /* 0C07F3BE add #imm,Rn */
	UPD(0x0C07F3C0u, 1);
L_0C07F3C0: BLKS(0x0C07F3C0u);
	r15 = r14;  /* 0C07F3C0 mov Rm,Rn */
	IF(0x0C07F3C2u); PR = R32(r15); r15 += 4; UPD(0x0C07F3C4u, 2);  /* 0C07F3C2 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07F3C6u, 1);  /* 0C07F3C4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07F3C8u, 1);  /* 0C07F3C6 mov.l @Rm+,Rn */
	IF(0x0C07F3C8u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07F3C8 rts */
L_0C07F3D0: BLKS(0x0C07F3D0u);
	r3 = 0xB4u; UPD(0x0C07F3D2u, 1);  /* 0C07F3D0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C07F3D2 add #imm,Rn */
	IF(0x0C07F3D4u); MACL = r4 * r3;  /* 0C07F3D4 mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C07F3D8u, 4);  /* 0C07F3D6 mov.l @(disp,pc),Rn */
	r5 = 0x1u;  /* 0C07F3D8 mov #imm,Rn */
	r0 = 0xB0u; UPD(0x0C07F3DCu, 2);  /* 0C07F3DA mov.w @(disp,pc),Rn */
	IF(0x0C07F3DCu); r8 = MACL;  /* 0C07F3DC sts macl,Rn */
	r8 += r2;  /* 0C07F3DE add Rm,Rn */
	IF(0x0C07F3E0u); r7 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07F3E2u, 3);  /* 0C07F3E0 mov.b @(r0,Rm),Rn */
	r9 = r7 & 0xFF;  /* 0C07F3E2 extu.b Rm,Rn */
	W32(r15, r9); UPD(0x0C07F3E6u, 2);  /* 0C07F3E4 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C07F3E6 add #imm,Rn */
	IF(0x0C07F3E8u); r4 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07F3EAu, 2);  /* 0C07F3E8 mov.b @(r0,Rm),Rn */
	r6 = r4 & 0xFF;  /* 0C07F3EA extu.b Rm,Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C07F3EEu, 2);  /* 0C07F3EC mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C07F3F0u, 1);  /* 0C07F3EE mov.l @Rm,Rn */
L_0C07F3F0: BLKS(0x0C07F3F0u);
	r6 = R32(r8 + 0x24u); UPD(0x0C07F3F2u, 1);  /* 0C07F3F0 mov.l @(disp,Rm),Rn */
	r7 = R32(r8 + 0x28u); UPD(0x0C07F3F4u, 1);  /* 0C07F3F2 mov.l @(disp,Rm),Rn */
	r0 = 0xC0BECB0u; UPD(0x0C07F3F6u, 1);  /* 0C07F3F4 mov.l @(disp,pc),Rn */
L_0C07F3F6: BLKS(0x0C07F3F6u);
	IF(0x0C07F3F6u); { u32 t_ = r0; PR = 0x0C07F3FAu; IF(0x0C07F3F8u); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C07F3FAu); }  /* 0C07F3F6 jsr @Rn */
L_0C07F3FA: BLKS(0x0C07F3FAu);
	r3 = 0x0u;  /* 0C07F3FA mov #imm,Rn */
	{ W32(r8, r3); /* slot mov.l Rm,@Rn */ UPD(0x0C07F3BEu, 4); goto L_0C07F3BE; }  /* 0C07F3FC bra */
L_0C07F400: BLKS(0x0C07F400u);
	r8 = 0xB4u; UPD(0x0C07F402u, 1);  /* 0C07F400 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C07F402 add #imm,Rn */
	IF(0x0C07F404u); MACL = r4 * r8;  /* 0C07F404 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C07F408u, 4);  /* 0C07F406 mov.l @(disp,pc),Rn */
	IF(0x0C07F408u); r8 = MACL;  /* 0C07F408 sts macl,Rn */
	r8 += r0;  /* 0C07F40A add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C07F40Eu, 3);  /* 0C07F40C mov.w @(disp,pc),Rn */
	IF(0x0C07F40Eu); r9 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07F410u, 1);  /* 0C07F40E mov.b @(r0,Rm),Rn */
	r4 = r9 & 0xFF;  /* 0C07F410 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C07F414u, 2);  /* 0C07F412 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C07F414 add #imm,Rn */
	IF(0x0C07F416u); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07F418u, 2);  /* 0C07F416 mov.b @(r0,Rm),Rn */
	r5 = r6 & 0xFF;  /* 0C07F418 extu.b Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C07F41Cu, 2);  /* 0C07F41A mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C07F41Eu, 1);  /* 0C07F41C mov.l @Rm,Rn */
	{ r5 = 0x3u; /* slot mov #imm,Rn */ UPD(0x0C07F3F0u, 3); goto L_0C07F3F0; }  /* 0C07F41E bra */
L_0C07F430: BLKS(0x0C07F430u);
	r9 = 0xB4u; UPD(0x0C07F432u, 1);  /* 0C07F430 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C07F432 add #imm,Rn */
	IF(0x0C07F434u); MACL = r4 * r9;  /* 0C07F434 mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C07F438u, 4);  /* 0C07F436 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C07F43Au, 1);  /* 0C07F438 mov.w @(disp,pc),Rn */
	IF(0x0C07F43Au); r8 = MACL;  /* 0C07F43A sts macl,Rn */
	r8 += r6;  /* 0C07F43C add Rm,Rn */
	IF(0x0C07F43Eu); r5 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07F440u, 3);  /* 0C07F43E mov.b @(r0,Rm),Rn */
	r3 = r5 & 0xFF;  /* 0C07F440 extu.b Rm,Rn */
	W32(r15, r3); UPD(0x0C07F444u, 2);  /* 0C07F442 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C07F444 add #imm,Rn */
	IF(0x0C07F446u); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07F448u, 2);  /* 0C07F446 mov.b @(r0,Rm),Rn */
	r5 = 0x4u;  /* 0C07F448 mov #imm,Rn */
	r7 = r2 & 0xFF;  /* 0C07F44A extu.b Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C07F44Eu, 3);  /* 0C07F44C mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C07F450u, 1);  /* 0C07F44E mov.l @Rm,Rn */
L_0C07F450: BLKS(0x0C07F450u);
	r6 = R32(r8 + 0x24u); UPD(0x0C07F452u, 1);  /* 0C07F450 mov.l @(disp,Rm),Rn */
	r0 = 0xC0BD6F0u; UPD(0x0C07F454u, 1);  /* 0C07F452 mov.l @(disp,pc),Rn */
	{ r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C07F3F6u, 3); goto L_0C07F3F6; }  /* 0C07F454 bra */
L_0C07F460: BLKS(0x0C07F460u);
	r8 = 0xB4u; UPD(0x0C07F462u, 1);  /* 0C07F460 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C07F462 add #imm,Rn */
	IF(0x0C07F464u); MACL = r4 * r8;  /* 0C07F464 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C07F468u, 4);  /* 0C07F466 mov.l @(disp,pc),Rn */
	r5 = 0x2u;  /* 0C07F468 mov #imm,Rn */
	IF(0x0C07F46Au); r8 = MACL;  /* 0C07F46A sts macl,Rn */
	r8 += r0;  /* 0C07F46C add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C07F470u, 4);  /* 0C07F46E mov.w @(disp,pc),Rn */
	IF(0x0C07F470u); r3 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07F472u, 1);  /* 0C07F470 mov.b @(r0,Rm),Rn */
	r2 = r3 & 0xFF;  /* 0C07F472 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C07F476u, 2);  /* 0C07F474 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C07F476 add #imm,Rn */
	IF(0x0C07F478u); r7 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07F47Au, 2);  /* 0C07F478 mov.b @(r0,Rm),Rn */
	r4 = r7 & 0xFF;  /* 0C07F47A extu.b Rm,Rn */
	W32(r15 + 0x4u, r4); UPD(0x0C07F47Eu, 2);  /* 0C07F47C mov.l Rm,@(disp,Rn) */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C07F450u, 3); goto L_0C07F450; }  /* 0C07F47E bra */
L_0C07F490: BLKS(0x0C07F490u);
	r2 = 0xB4u; UPD(0x0C07F492u, 1);  /* 0C07F490 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C07F492 add #imm,Rn */
	IF(0x0C07F494u); MACL = r4 * r2;  /* 0C07F494 mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C07F498u, 4);  /* 0C07F496 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C07F49Au, 1);  /* 0C07F498 mov.w @(disp,pc),Rn */
	IF(0x0C07F49Au); r8 = MACL;  /* 0C07F49A sts macl,Rn */
	r8 += r7;  /* 0C07F49C add Rm,Rn */
	IF(0x0C07F49Eu); r4 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07F4A0u, 3);  /* 0C07F49E mov.b @(r0,Rm),Rn */
	r9 = r4 & 0xFF;  /* 0C07F4A0 extu.b Rm,Rn */
	W32(r15, r9); UPD(0x0C07F4A4u, 2);  /* 0C07F4A2 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C07F4A4 add #imm,Rn */
	IF(0x0C07F4A6u); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07F4A8u, 2);  /* 0C07F4A6 mov.b @(r0,Rm),Rn */
	r5 = r6 & 0xFF;  /* 0C07F4A8 extu.b Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C07F4ACu, 2);  /* 0C07F4AA mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C07F4AEu, 1);  /* 0C07F4AC mov.l @Rm,Rn */
	{ r5 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C07F3F0u, 3); goto L_0C07F3F0; }  /* 0C07F4AE bra */
}


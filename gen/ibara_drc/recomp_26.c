#include "recomp.h"
#include "recomp_funcs.h"

/* FUN_0c0adfd0 */
void f_0C0ADFD0(sh3_t *c)
{
	LOCALS;
L_0C0ADFD0: BLKS(0x0C0ADFD0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0ADFD2u, 1);  /* 0C0ADFD0 mov.l Rm,@-Rn */
	r0 = 0x40u;  /* 0C0ADFD2 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0ADFD6u, 2);  /* 0C0ADFD4 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0ADFD8u, 1);  /* 0C0ADFD6 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0ADFDAu, 1);  /* 0C0ADFD8 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0ADFDCu, 1);  /* 0C0ADFDA mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0ADFDEu, 1);  /* 0C0ADFDC mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0ADFE0u, 1);  /* 0C0ADFDE mov.l Rm,@-Rn */
	IF(0x0C0ADFE0u); r15 -= 4; W32(r15, PR); UPD(0x0C0ADFE2u, 1);  /* 0C0ADFE0 sts.l pr,@-Rn */
	r15 += 0xFFFFFFE4u;  /* 0C0ADFE2 add #imm,Rn */
	r14 = r15;  /* 0C0ADFE4 mov Rm,Rn */
	W32(r14, r4); UPD(0x0C0ADFE8u, 3);  /* 0C0ADFE6 mov.l Rm,@Rn */
	r4 = R32(r14 + 0x3Cu); UPD(0x0C0ADFEAu, 1);  /* 0C0ADFE8 mov.l @(disp,Rm),Rn */
	r3 = (u32)(s32)(s8)r4;  /* 0C0ADFEA exts.b Rm,Rn */
	W32(r14 + 0x10u, r3); UPD(0x0C0ADFEEu, 2);  /* 0C0ADFEC mov.l Rm,@(disp,Rn) */
	IF(0x0C0ADFEEu); r2 = R32(r0 + r14); UPD(0x0C0ADFF0u, 1);  /* 0C0ADFEE mov.l @(r0,Rm),Rn */
	W32(r14 + 0xCu, r7); UPD(0x0C0ADFF2u, 1);  /* 0C0ADFF0 mov.l Rm,@(disp,Rn) */
	r0 = (u32)(s32)(s8)r2;  /* 0C0ADFF2 exts.b Rm,Rn */
	W32(r14 + 0x14u, r0); UPD(0x0C0ADFF6u, 2);  /* 0C0ADFF4 mov.l Rm,@(disp,Rn) */
	r7 = r5;  /* 0C0ADFF6 mov Rm,Rn */
	r2 = 0xC1EEBA4u; UPD(0x0C0ADFFAu, 2);  /* 0C0ADFF8 mov.l @(disp,pc),Rn */
	IF(0x0C0ADFFAu); r7 <<= 2;  /* 0C0ADFFA shll2 Rn */
	r0 = r7;  /* 0C0ADFFC mov Rm,Rn */
	IF(0x0C0ADFFEu); r3 = R32(r0 + r2); UPD(0x0C0AE000u, 3);  /* 0C0ADFFE mov.l @(r0,Rm),Rn */
	r2 = 0xFF600000u; UPD(0x0C0AE002u, 1);  /* 0C0AE000 mov.l @(disp,pc),Rn */
	W32(r14 + 0x4u, r5); UPD(0x0C0AE004u, 1);  /* 0C0AE002 mov.l Rm,@(disp,Rn) */
	r2 += r6;  /* 0C0AE004 add Rm,Rn */
	IF(0x0C0AE006u); T = (s32)r2 >= 0;  /* 0C0AE006 cmp/pz Rn */
	{ u32 c_ = T; W32(r14 + 0x8u, r6); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0AE010u, 5); goto L_0C0AE010; } UPD(0x0C0AE00Cu, 1); goto L_0C0AE00C; }  /* 0C0AE008 bt/s */
L_0C0AE00C: BLKS(0x0C0AE00Cu);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0AE120u, 3); goto L_0C0AE120; }  /* 0C0AE00C bra */
L_0C0AE010: BLKS(0x0C0AE010u);
	r5 = 0xA00000u; UPD(0x0C0AE012u, 1);  /* 0C0AE010 mov.l @(disp,pc),Rn */
	r5 += r3;  /* 0C0AE012 add Rm,Rn */
	T = (s32)r2 >= (s32)r5;  /* 0C0AE014 cmp/ge Rm,Rn */
	{ u32 c_ = T; r1 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AE034u, 5); goto L_0C0AE034; } goto L_0C0AE01A; }  /* 0C0AE016 bt/s */
L_0C0AE01A: BLKS(0x0C0AE01Au);
	r9 = 0xC3929E0u; UPD(0x0C0AE01Cu, 2);  /* 0C0AE01A mov.l @(disp,pc),Rn */
	r2 = R32(r14 + 0xCu); UPD(0x0C0AE01Eu, 1);  /* 0C0AE01C mov.l @(disp,Rm),Rn */
	r8 = R32(r9); UPD(0x0C0AE020u, 1);  /* 0C0AE01E mov.l @Rm,Rn */
	r6 = 0xFF880000u; UPD(0x0C0AE022u, 1);  /* 0C0AE020 mov.l @(disp,pc),Rn */
	r2 -= r8;  /* 0C0AE022 sub Rm,Rn */
	r2 += r6;  /* 0C0AE024 add Rm,Rn */
	IF(0x0C0AE026u); T = (s32)r2 >= 0;  /* 0C0AE026 cmp/pz Rn */
	if (T) { UPD(0x0C0AE02Cu, 6); goto L_0C0AE02C; }  /* 0C0AE028 bt */
L_0C0AE02A: BLKS(0x0C0AE02Au);
	r2 = 0u - r2;  /* 0C0AE02A neg Rm,Rn */
	UPD(0x0C0AE02Cu, 1);
L_0C0AE02C: BLKS(0x0C0AE02Cu);
	r10 = 0x780000u; UPD(0x0C0AE02Eu, 1);  /* 0C0AE02C mov.l @(disp,pc),Rn */
	r3 += r10;  /* 0C0AE02E add Rm,Rn */
	T = (s32)r2 >= (s32)r3;  /* 0C0AE030 cmp/ge Rm,Rn */
	IF(0x0C0AE032u); r1 = T;  /* 0C0AE032 movt Rn */
	UPD(0x0C0AE034u, 3);
L_0C0AE034: BLKS(0x0C0AE034u);
	r11 = (u32)(s32)(s16)r1;  /* 0C0AE034 exts.w Rm,Rn */
	T = (r11 & r11) == 0;  /* 0C0AE036 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AE060u, 5); goto L_0C0AE060; } UPD(0x0C0AE03Cu, 1); goto L_0C0AE03C; }  /* 0C0AE038 bt/s */
L_0C0AE03C: BLKS(0x0C0AE03Cu);
	r14 += 0x1Cu;  /* 0C0AE03C add #imm,Rn */
	r15 = r14;  /* 0C0AE03E mov Rm,Rn */
	IF(0x0C0AE040u); PR = R32(r15); r15 += 4; UPD(0x0C0AE042u, 3);  /* 0C0AE040 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AE044u, 1);  /* 0C0AE042 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0AE046u, 1);  /* 0C0AE044 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0AE048u, 1);  /* 0C0AE046 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0AE04Au, 1);  /* 0C0AE048 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AE04Cu, 1);  /* 0C0AE04A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AE04Eu, 1);  /* 0C0AE04C mov.l @Rm+,Rn */
	IF(0x0C0AE04Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AE04E rts */
L_0C0AE060: BLKS(0x0C0AE060u);
	r2 = 0xC1EEE64u; UPD(0x0C0AE062u, 1);  /* 0C0AE060 mov.l @(disp,pc),Rn */
	r0 = r7;  /* 0C0AE062 mov Rm,Rn */
	r8 = 0xC0AFE40u; UPD(0x0C0AE066u, 2);  /* 0C0AE064 mov.l @(disp,pc),Rn */
	r13 = 0xC050D70u; UPD(0x0C0AE068u, 1);  /* 0C0AE066 mov.l @(disp,pc),Rn */
	IF(0x0C0AE068u); { u32 t_ = r8; PR = 0x0C0AE06Cu; IF(0x0C0AE06Au); r12 = R32(r0 + r2); /* slot mov.l @(r0,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C0AE06Cu); }  /* 0C0AE068 jsr @Rn */
L_0C0AE06C: BLKS(0x0C0AE06Cu);
	r4 = r12;  /* 0C0AE06C mov Rm,Rn */
	IF(0x0C0AE06Eu); { u32 t_ = r13; PR = 0x0C0AE072u; r11 = (u32)(s32)(s16)r0; /* slot exts.w Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0AE072u); }  /* 0C0AE06E jsr @Rn */
L_0C0AE072: BLKS(0x0C0AE072u);
	IF(0x0C0AE072u); T = r12 & 1; r12 = (u32)((s32)r12 >> 1);  /* 0C0AE072 shar Rn */
	r13 = r0;  /* 0C0AE074 mov Rm,Rn */
	r7 = 0x0u;  /* 0C0AE076 mov #imm,Rn */
	r13 += r12;  /* 0C0AE078 add Rm,Rn */
	W32(r14 + 0x18u, r7); UPD(0x0C0AE07Cu, 5);  /* 0C0AE07A mov.l Rm,@(disp,Rn) */
	r12 = 0x0u;  /* 0C0AE07C mov #imm,Rn */
	IF(0x0C0AE07Eu); ;  /* 0C0AE07E nop */
	UPD(0x0C0AE080u, 2);
L_0C0AE080: BLKS(0x0C0AE080u);
	r3 = 0xC058060u; UPD(0x0C0AE082u, 1);  /* 0C0AE080 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C0AE082 mov Rm,Rn */
	r10 = 0xC058030u; UPD(0x0C0AE086u, 2);  /* 0C0AE084 mov.l @(disp,pc),Rn */
	IF(0x0C0AE086u); { u32 t_ = r3; PR = 0x0C0AE08Au; r5 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0AE08Au); }  /* 0C0AE086 jsr @Rn */
L_0C0AE08A: BLKS(0x0C0AE08Au);
	r9 = r0;  /* 0C0AE08A mov Rm,Rn */
	r4 = r12;  /* 0C0AE08C mov Rm,Rn */
	IF(0x0C0AE08Eu); { u32 t_ = r10; PR = 0x0C0AE092u; r5 = r13; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0AE092u); }  /* 0C0AE08E jsr @Rn */
L_0C0AE092: BLKS(0x0C0AE092u);
	r5 = R32(r14 + 0x14u); UPD(0x0C0AE094u, 1);  /* 0C0AE092 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFF0u;  /* 0C0AE094 add #imm,Rn */
	r10 = r0;  /* 0C0AE096 mov Rm,Rn */
	r8 = 0xC058060u; UPD(0x0C0AE09Au, 3);  /* 0C0AE098 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C0AE09A mov Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C0AE09Eu, 2);  /* 0C0AE09C mov.l Rm,@(disp,Rn) */
	r12 += 0x10u;  /* 0C0AE09E add #imm,Rn */
	r0 = R32(r14 + 0x10u); UPD(0x0C0AE0A2u, 2);  /* 0C0AE0A0 mov.l @(disp,Rm),Rn */
	r5 = r9;  /* 0C0AE0A2 mov Rm,Rn */
	IF(0x0C0AE0A4u); { u32 t_ = r8; PR = 0x0C0AE0A8u; W32(r15, r0); /* slot mov.l Rm,@Rn */ UPD(t_, 3); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0AE0A8u); }  /* 0C0AE0A4 jsr @Rn */
L_0C0AE0A8: BLKS(0x0C0AE0A8u);
	r1 = 0xC058030u; UPD(0x0C0AE0AAu, 1);  /* 0C0AE0A8 mov.l @(disp,pc),Rn */
	r8 = r0;  /* 0C0AE0AA mov Rm,Rn */
	r4 = r11;  /* 0C0AE0AC mov Rm,Rn */
	IF(0x0C0AE0AEu); { u32 t_ = r1; PR = 0x0C0AE0B2u; r5 = r10; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0AE0B2u); }  /* 0C0AE0AE jsr @Rn */
L_0C0AE0B2: BLKS(0x0C0AE0B2u);
	r7 = 0xC058030u; UPD(0x0C0AE0B4u, 1);  /* 0C0AE0B2 mov.l @(disp,pc),Rn */
	r8 -= r0;  /* 0C0AE0B4 sub Rm,Rn */
	r5 = r9;  /* 0C0AE0B6 mov Rm,Rn */
	W32(r15 + 0x8u, r8); UPD(0x0C0AE0BAu, 3);  /* 0C0AE0B8 mov.l Rm,@(disp,Rn) */
	IF(0x0C0AE0BAu); { u32 t_ = r7; PR = 0x0C0AE0BEu; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0AE0BEu); }  /* 0C0AE0BA jsr @Rn */
L_0C0AE0BE: BLKS(0x0C0AE0BEu);
	r6 = 0xC058060u; UPD(0x0C0AE0C0u, 1);  /* 0C0AE0BE mov.l @(disp,pc),Rn */
	r9 = r0;  /* 0C0AE0C0 mov Rm,Rn */
	r4 = r11;  /* 0C0AE0C2 mov Rm,Rn */
	IF(0x0C0AE0C4u); { u32 t_ = r6; PR = 0x0C0AE0C8u; r5 = r10; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0AE0C8u); }  /* 0C0AE0C4 jsr @Rn */
L_0C0AE0C8: BLKS(0x0C0AE0C8u);
	r9 += r0;  /* 0C0AE0C8 add Rm,Rn */
	W32(r15 + 0xCu, r9); UPD(0x0C0AE0CCu, 2);  /* 0C0AE0CA mov.l Rm,@(disp,Rn) */
	r9 = 0xC0AC6A0u; UPD(0x0C0AE0CEu, 1);  /* 0C0AE0CC mov.l @(disp,pc),Rn */
	r4 = R32(r14); UPD(0x0C0AE0D0u, 1);  /* 0C0AE0CE mov.l @Rm,Rn */
	r5 = R32(r14 + 0x4u); UPD(0x0C0AE0D2u, 1);  /* 0C0AE0D0 mov.l @(disp,Rm),Rn */
	r6 = R32(r14 + 0x8u); UPD(0x0C0AE0D4u, 1);  /* 0C0AE0D2 mov.l @(disp,Rm),Rn */
	IF(0x0C0AE0D4u); { u32 t_ = r9; PR = 0x0C0AE0D8u; r7 = R32(r14 + 0xCu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AC6A0, 0x0C0AC6A0u, 0x0C0AE0D8u); }  /* 0C0AE0D4 jsr @Rn */
L_0C0AE0D8: BLKS(0x0C0AE0D8u);
	r4 = R32(r14 + 0x18u); UPD(0x0C0AE0DAu, 1);  /* 0C0AE0D8 mov.l @(disp,Rm),Rn */
	r0 = 0x1Fu;  /* 0C0AE0DA mov #imm,Rn */
	r4 += 0x1u;  /* 0C0AE0DC add #imm,Rn */
	r3 = (u32)(s32)(s16)r4;  /* 0C0AE0DE exts.w Rm,Rn */
	W32(r14 + 0x18u, r3); UPD(0x0C0AE0E2u, 4);  /* 0C0AE0E0 mov.l Rm,@(disp,Rn) */
	r1 = R32(r14 + 0x18u); UPD(0x0C0AE0E4u, 1);  /* 0C0AE0E2 mov.l @(disp,Rm),Rn */
	T = (s32)r1 > (s32)r0;  /* 0C0AE0E4 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x10u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AE080u, 4); goto L_0C0AE080; } goto L_0C0AE0EA; }  /* 0C0AE0E6 bf/s */
L_0C0AE0EA: BLKS(0x0C0AE0EAu);
	r9 = 0xC0AFE40u; UPD(0x0C0AE0ECu, 2);  /* 0C0AE0EA mov.l @(disp,pc),Rn */
	r13 = 0xC1EEBF4u; UPD(0x0C0AE0EEu, 1);  /* 0C0AE0EC mov.l @(disp,pc),Rn */
	IF(0x0C0AE0EEu); { u32 t_ = r9; PR = 0x0C0AE0F2u; r11 = 0x3Fu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C0AE0F2u); }  /* 0C0AE0EE jsr @Rn */
L_0C0AE0F2: BLKS(0x0C0AE0F2u);
	r2 = R32(r14 + 0x4u); UPD(0x0C0AE0F4u, 1);  /* 0C0AE0F2 mov.l @(disp,Rm),Rn */
	r0 &= 0x1u;  /* 0C0AE0F4 and #imm,r0 */
	r2 += r2;  /* 0C0AE0F6 add Rm,Rn */
	r13 += r2;  /* 0C0AE0F8 add Rm,Rn */
	IF(0x0C0AE0FAu); r12 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C0AE0FCu, 4);  /* 0C0AE0FA mov.b @(r0,Rm),Rn */
	r4 = r12 & 0xFF;  /* 0C0AE0FC extu.b Rm,Rn */
	T = r4 > r11;  /* 0C0AE0FE cmp/hi Rm,Rn */
	if (T) { UPD(0x0C0AE110u, 5); goto L_0C0AE110; }  /* 0C0AE100 bt */
L_0C0AE102: BLKS(0x0C0AE102u);
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C0AE03Cu, 3); goto L_0C0AE03C; }  /* 0C0AE102 bra */
L_0C0AE110: BLKS(0x0C0AE110u);
	r8 = 0xC0AFC10u; UPD(0x0C0AE112u, 1);  /* 0C0AE110 mov.l @(disp,pc),Rn */
	IF(0x0C0AE112u); { u32 t_ = r8; PR = 0x0C0AE116u; IF(0x0C0AE114u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0AFC10, 0x0C0AFC10u, 0x0C0AE116u); }  /* 0C0AE112 jsr @Rn */
L_0C0AE116: BLKS(0x0C0AE116u);
	{ IF(0x0C0AE118u); ; /* slot nop */ UPD(0x0C0AE102u, 3); goto L_0C0AE102; }  /* 0C0AE116 bra */
L_0C0AE120: BLKS(0x0C0AE120u);
	{ IF(0x0C0AE122u); ; /* slot nop */ UPD(0x0C0AE010u, 3); goto L_0C0AE010; }  /* 0C0AE120 bra */
}

void f_0C0AE160(sh3_t *c)
{
	LOCALS;
L_0C0AE160: BLKS(0x0C0AE160u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AE162u, 1);  /* 0C0AE160 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AE164u, 1);  /* 0C0AE162 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AE166u, 1);  /* 0C0AE164 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C0AE166 exts.w Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0AE16Au, 2);  /* 0C0AE168 mov.l Rm,@-Rn */
	r4 = r9;  /* 0C0AE16A mov Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AE16Eu, 2);  /* 0C0AE16C mov.l Rm,@-Rn */
	r3 = 0xC0AE8F0u; UPD(0x0C0AE170u, 1);  /* 0C0AE16E mov.l @(disp,pc),Rn */
	IF(0x0C0AE170u); r15 -= 4; W32(r15, PR); UPD(0x0C0AE172u, 1);  /* 0C0AE170 sts.l pr,@-Rn */
	IF(0x0C0AE172u); { u32 t_ = r3; PR = 0x0C0AE176u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AE8F0, 0x0C0AE8F0u, 0x0C0AE176u); }  /* 0C0AE172 jsr @Rn */
L_0C0AE176: BLKS(0x0C0AE176u);
	r2 = 0x4Cu;  /* 0C0AE176 mov #imm,Rn */
	IF(0x0C0AE178u); MACL = r9 * r2;  /* 0C0AE178 mul.l Rm,Rn */
	r0 = 0xC26CAE0u; UPD(0x0C0AE17Cu, 4);  /* 0C0AE17A mov.l @(disp,pc),Rn */
	IF(0x0C0AE17Cu); r3 = MACL;  /* 0C0AE17C sts macl,Rn */
	r3 += r0;  /* 0C0AE17E add Rm,Rn */
	r0 = 0x8000000u; UPD(0x0C0AE182u, 3);  /* 0C0AE180 mov.l @(disp,pc),Rn */
	r1 = R32(r3); UPD(0x0C0AE184u, 1);  /* 0C0AE182 mov.l @Rm,Rn */
	T = (r1 & r0) == 0;  /* 0C0AE184 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x50u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AE192u, 4); goto L_0C0AE192; } goto L_0C0AE18A; }  /* 0C0AE186 bf/s */
L_0C0AE18A: BLKS(0x0C0AE18Au);
	r0 = R32(r3 + 0x8u); UPD(0x0C0AE18Cu, 2);  /* 0C0AE18A mov.l @(disp,Rm),Rn */
	r4 = 0xFFFFFFEBu;  /* 0C0AE18C mov #imm,Rn */
	IF(0x0C0AE18Eu); ARG0(0x404Cu); { s32 s_ = (s32)r4; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = (u32)((s32)r0 >> 31); else r0 = (u32)((s32)r0 >> ((~s_ & 31) + 1)); }  /* 0C0AE18E shad Rm,Rn */
	r0 &= 0x7Fu;  /* 0C0AE190 and #imm,r0 */
	UPD(0x0C0AE192u, 3);
L_0C0AE192: BLKS(0x0C0AE192u);
	r6 = 0xC1F46C4u; UPD(0x0C0AE194u, 1);  /* 0C0AE192 mov.l @(disp,pc),Rn */
	r0 += r0;  /* 0C0AE194 add Rm,Rn */
	r7 = 0xC3929E0u; UPD(0x0C0AE198u, 2);  /* 0C0AE196 mov.l @(disp,pc),Rn */
	IF(0x0C0AE198u); r5 = (u32)(s32)(s16)R16(r0 + r6); UPD(0x0C0AE19Au, 1);  /* 0C0AE198 mov.w @(r0,Rm),Rn */
	r2 = (u32)(s32)(s16)R16(r7); UPD(0x0C0AE19Cu, 1);  /* 0C0AE19A mov.w @Rm,Rn */
	r3 = 0x160u; UPD(0x0C0AE19Eu, 1);  /* 0C0AE19C mov.w @(disp,pc),Rn */
	r5 -= r2;  /* 0C0AE19E sub Rm,Rn */
	r5 += r3;  /* 0C0AE1A0 add Rm,Rn */
	r6 = (u32)(s32)(s16)r5;  /* 0C0AE1A2 exts.w Rm,Rn */
	IF(0x0C0AE1A4u); T = (s32)r6 >= 0;  /* 0C0AE1A4 cmp/pz Rn */
	if (T) { UPD(0x0C0AE1AAu, 7); goto L_0C0AE1AA; }  /* 0C0AE1A6 bt */
L_0C0AE1A8: BLKS(0x0C0AE1A8u);
	r6 = 0x0u;  /* 0C0AE1A8 mov #imm,Rn */
	UPD(0x0C0AE1AAu, 1);
L_0C0AE1AA: BLKS(0x0C0AE1AAu);
	r8 = 0xC1F47C4u; UPD(0x0C0AE1ACu, 1);  /* 0C0AE1AA mov.l @(disp,pc),Rn */
	IF(0x0C0AE1ACu); r10 = (u32)(s32)(s16)R16(r0 + r8); UPD(0x0C0AE1AEu, 1);  /* 0C0AE1AC mov.w @(r0,Rm),Rn */
	r10 -= r2;  /* 0C0AE1AE sub Rm,Rn */
	r10 += r3;  /* 0C0AE1B0 add Rm,Rn */
	r8 = (u32)(s32)(s16)r10;  /* 0C0AE1B2 exts.w Rm,Rn */
	IF(0x0C0AE1B4u); T = (s32)r8 >= 0;  /* 0C0AE1B4 cmp/pz Rn */
	if (!T) { UPD(0x0C0AE2B0u, 7); goto L_0C0AE2B0; }  /* 0C0AE1B6 bf */
L_0C0AE1B8: BLKS(0x0C0AE1B8u);
	T = (s32)r8 > (s32)r6;  /* 0C0AE1B8 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0AE298u, 4); goto L_0C0AE298; }  /* 0C0AE1BA bf */
L_0C0AE1BC: BLKS(0x0C0AE1BCu);
	r10 = 0x4Cu;  /* 0C0AE1BC mov #imm,Rn */
	IF(0x0C0AE1BEu); MACL = r9 * r10;  /* 0C0AE1BE mul.l Rm,Rn */
	r4 = 0xC26CAE0u; UPD(0x0C0AE1C2u, 4);  /* 0C0AE1C0 mov.l @(disp,pc),Rn */
	T = (s32)r6 >= (s32)r8;  /* 0C0AE1C2 cmp/ge Rm,Rn */
	IF(0x0C0AE1C4u); r10 = MACL;  /* 0C0AE1C4 sts macl,Rn */
	r10 += r4;  /* 0C0AE1C6 add Rm,Rn */
	r4 = R32(r10); UPD(0x0C0AE1CAu, 4);  /* 0C0AE1C8 mov.l @Rm,Rn */
	r10 += 0x3Cu;  /* 0C0AE1CA add #imm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r10); r10 += 1; r5 = v_; } UPD(0x0C0AE1CEu, 2);  /* 0C0AE1CC mov.b @Rm+,Rn */
	r3 = 0xC392AF4u; UPD(0x0C0AE1D0u, 1);  /* 0C0AE1CE mov.l @(disp,pc),Rn */
	r2 = r5 & 0xFF;  /* 0C0AE1D0 extu.b Rm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r10); r10 += 1; r11 = v_; } UPD(0x0C0AE1D4u, 2);  /* 0C0AE1D2 mov.b @Rm+,Rn */
	IF(0x0C0AE1D4u); r2 <<= 16;  /* 0C0AE1D4 shll16 Rn */
	r0 = 0x2000000u; UPD(0x0C0AE1D8u, 2);  /* 0C0AE1D6 mov.l @(disp,pc),Rn */
	r7 = R32(r3); UPD(0x0C0AE1DAu, 1);  /* 0C0AE1D8 mov.l @Rm,Rn */
	r4 &= r0;  /* 0C0AE1DA and Rm,Rn */
	r3 = r11 & 0xFF;  /* 0C0AE1DC extu.b Rm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r10); r10 += 1; r0 = v_; } UPD(0x0C0AE1E0u, 3);  /* 0C0AE1DE mov.b @Rm+,Rn */
	r4 |= r2;  /* 0C0AE1E0 or Rm,Rn */
	IF(0x0C0AE1E2u); r3 <<= 8;  /* 0C0AE1E2 shll8 Rn */
	r11 = 0xC392D5Cu; UPD(0x0C0AE1E6u, 3);  /* 0C0AE1E4 mov.l @(disp,pc),Rn */
	r4 |= r3;  /* 0C0AE1E6 or Rm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r10); r10 += 1; r1 = v_; } UPD(0x0C0AE1EAu, 2);  /* 0C0AE1E8 mov.b @Rm+,Rn */
	r5 = r0 & 0xFF;  /* 0C0AE1EA extu.b Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r11); UPD(0x0C0AE1EEu, 2);  /* 0C0AE1EC mov.b @Rm,Rn */
	r4 |= r5;  /* 0C0AE1EE or Rm,Rn */
	r0 = r1 & 0xFF;  /* 0C0AE1F0 extu.b Rm,Rn */
	r5 = r3 & 0xFF;  /* 0C0AE1F2 extu.b Rm,Rn */
	r11 = 0xC283CB2u; UPD(0x0C0AE1F6u, 4);  /* 0C0AE1F4 mov.l @(disp,pc),Rn */
	IF(0x0C0AE1F6u); MACL = r0 * r5;  /* 0C0AE1F6 mul.l Rm,Rn */
	r2 = 0x11000000u; UPD(0x0C0AE1FAu, 3);  /* 0C0AE1F8 mov.l @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r10); r10 += 1; r1 = v_; } UPD(0x0C0AE1FCu, 1);  /* 0C0AE1FA mov.b @Rm+,Rn */
	r4 |= r2;  /* 0C0AE1FC or Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r11); UPD(0x0C0AE200u, 2);  /* 0C0AE1FE mov.b @Rm,Rn */
	r0 = r1 & 0xFF;  /* 0C0AE200 extu.b Rm,Rn */
	r11 = r3 & 0xFF;  /* 0C0AE202 extu.b Rm,Rn */
	IF(0x0C0AE204u); r2 = MACL;  /* 0C0AE204 sts macl,Rn */
	IF(0x0C0AE206u); MACL = r0 * r11;  /* 0C0AE206 mul.l Rm,Rn */
	r2 += r2;  /* 0C0AE208 add Rm,Rn */
	IF(0x0C0AE20Au); r2 >>= 8;  /* 0C0AE20A shlr8 Rn */
	IF(0x0C0AE20Cu); r3 = MACL;  /* 0C0AE20C sts macl,Rn */
	r0 = 0xC392B09u; UPD(0x0C0AE210u, 9);  /* 0C0AE20E mov.l @(disp,pc),Rn */
	r3 += r3;  /* 0C0AE210 add Rm,Rn */
	r11 = (u32)(s32)(s8)R8(r0); UPD(0x0C0AE214u, 2);  /* 0C0AE212 mov.b @Rm,Rn */
	r5 = r2 & 0xFF;  /* 0C0AE214 extu.b Rm,Rn */
	IF(0x0C0AE216u); r3 >>= 8;  /* 0C0AE216 shlr8 Rn */
	r1 = (u32)(s32)(s8)R8(r10); UPD(0x0C0AE21Au, 3);  /* 0C0AE218 mov.b @Rm,Rn */
	r2 = r3 & 0xFF;  /* 0C0AE21A extu.b Rm,Rn */
	r10 = r1 & 0xFF;  /* 0C0AE21C extu.b Rm,Rn */
	r3 = r11 & 0xFF;  /* 0C0AE21E extu.b Rm,Rn */
	IF(0x0C0AE220u); MACL = r10 * r3;  /* 0C0AE220 mul.l Rm,Rn */
	r1 = 0xFFFFFFF9u;  /* 0C0AE222 mov #imm,Rn */
	IF(0x0C0AE224u); r5 <<= 16;  /* 0C0AE224 shll16 Rn */
	IF(0x0C0AE226u); r0 = MACL;  /* 0C0AE226 sts macl,Rn */
	IF(0x0C0AE228u); ARG0(0x401Cu); { s32 s_ = (s32)r1; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = (u32)((s32)r0 >> 31); else r0 = (u32)((s32)r0 >> ((~s_ & 31) + 1)); }  /* 0C0AE228 shad Rm,Rn */
	IF(0x0C0AE22Au); r2 <<= 8;  /* 0C0AE22A shll8 Rn */
	r5 += r2;  /* 0C0AE22C add Rm,Rn */
	r11 = r0 & 0xFF;  /* 0C0AE22E extu.b Rm,Rn */
	{ u32 c_ = T; r5 += r11; /* slot add Rm,Rn */ if (c_) { UPD(0x0C0AE294u, 15); goto L_0C0AE294; } goto L_0C0AE234; }  /* 0C0AE230 bt/s */
L_0C0AE234: BLKS(0x0C0AE234u);
	r2 = 0x140u; UPD(0x0C0AE236u, 2);  /* 0C0AE234 mov.w @(disp,pc),Rn */
	IF(0x0C0AE236u); MACL = r9 * r2; UPD(0x0C0AE238u, 2);  /* 0C0AE236 mul.l Rm,Rn */
	r11 = 0xC21CCF8u; UPD(0x0C0AE23Au, 1);  /* 0C0AE238 mov.l @(disp,pc),Rn */
	r10 = 0xC21CCF4u; UPD(0x0C0AE23Cu, 1);  /* 0C0AE23A mov.l @(disp,pc),Rn */
	IF(0x0C0AE23Cu); r9 = MACL;  /* 0C0AE23C sts macl,Rn */
	IF(0x0C0AE23Eu); ;  /* 0C0AE23E nop */
	UPD(0x0C0AE240u, 2);
L_0C0AE240: BLKS(0x0C0AE240u);
	r0 = r6;  /* 0C0AE240 mov Rm,Rn */
	r0 &= 0x3Fu;  /* 0C0AE242 and #imm,r0 */
	r0 += r9;  /* 0C0AE244 add Rm,Rn */
	r0 += r0;  /* 0C0AE246 add Rm,Rn */
	IF(0x0C0AE248u); r3 = (u32)(s32)(s16)R16(r0 + r11); UPD(0x0C0AE24Au, 5);  /* 0C0AE248 mov.w @(r0,Rm),Rn */
	r0 = 0xFFE0u; UPD(0x0C0AE24Cu, 1);  /* 0C0AE24A mov.l @(disp,pc),Rn */
	r2 = 0x3E0u; UPD(0x0C0AE24Eu, 1);  /* 0C0AE24C mov.w @(disp,pc),Rn */
	r0 &= r3;  /* 0C0AE24E and Rm,Rn */
	r0 += r2;  /* 0C0AE250 add Rm,Rn */
	r2 = 0x88u; UPD(0x0C0AE254u, 3);  /* 0C0AE252 mov.w @(disp,pc),Rn */
	IF(0x0C0AE254u); r0 <<= 16;  /* 0C0AE254 shll16 Rn */
	W32(r7, r4); UPD(0x0C0AE258u, 2);  /* 0C0AE256 mov.l Rm,@Rn */
	r2 += r6;  /* 0C0AE258 add Rm,Rn */
	r0 |= r2;  /* 0C0AE25A or Rm,Rn */
	r7 += 0x4u;  /* 0C0AE25C add #imm,Rn */
	W32(r7, r0); UPD(0x0C0AE260u, 4);  /* 0C0AE25E mov.l Rm,@Rn */
	r0 = r3;  /* 0C0AE260 mov Rm,Rn */
	r2 = R32(r10); UPD(0x0C0AE264u, 2);  /* 0C0AE262 mov.l @Rm,Rn */
	r0 &= 0x1Fu;  /* 0C0AE264 and #imm,r0 */
	r1 = 0xC283CA8u; UPD(0x0C0AE268u, 2);  /* 0C0AE266 mov.l @(disp,pc),Rn */
	r2 -= r0;  /* 0C0AE268 sub Rm,Rn */
	r0 = R32(r1); UPD(0x0C0AE26Cu, 2);  /* 0C0AE26A mov.l @Rm,Rn */
	IF(0x0C0AE26Cu); r2 <<= 16;  /* 0C0AE26C shll16 Rn */
	r0 += r6;  /* 0C0AE26E add Rm,Rn */
	r2 |= r0;  /* 0C0AE270 or Rm,Rn */
	r7 += 0x4u;  /* 0C0AE272 add #imm,Rn */
	W32(r7, r2); UPD(0x0C0AE276u, 5);  /* 0C0AE274 mov.l Rm,@Rn */
	r0 = 0x1Cu;  /* 0C0AE276 mov #imm,Rn */
	r2 = 0x143u; UPD(0x0C0AE27Au, 2);  /* 0C0AE278 mov.w @(disp,pc),Rn */
	r3 &= r0;  /* 0C0AE27A and Rm,Rn */
	r3 += r2;  /* 0C0AE27C add Rm,Rn */
	r7 += 0x4u;  /* 0C0AE27E add #imm,Rn */
	IF(0x0C0AE280u); r3 <<= 16;  /* 0C0AE280 shll16 Rn */
	W32(r7, r3); UPD(0x0C0AE284u, 5);  /* 0C0AE282 mov.l Rm,@Rn */
	r0 = r6;  /* 0C0AE284 mov Rm,Rn */
	r7 += 0x4u;  /* 0C0AE286 add #imm,Rn */
	W32(r7, r5); UPD(0x0C0AE28Au, 3);  /* 0C0AE288 mov.l Rm,@Rn */
	r0 += 0x1u;  /* 0C0AE28A add #imm,Rn */
	r6 = (u32)(s32)(s16)r0;  /* 0C0AE28C exts.w Rm,Rn */
	T = (s32)r6 >= (s32)r8;  /* 0C0AE28E cmp/ge Rm,Rn */
	{ u32 c_ = !T; r7 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AE240u, 6); goto L_0C0AE240; } UPD(0x0C0AE294u, 1); goto L_0C0AE294; }  /* 0C0AE290 bf/s */
L_0C0AE294: BLKS(0x0C0AE294u);
	r9 = 0xC392AF4u; UPD(0x0C0AE296u, 1);  /* 0C0AE294 mov.l @(disp,pc),Rn */
	W32(r9, r7); UPD(0x0C0AE298u, 1);  /* 0C0AE296 mov.l Rm,@Rn */
L_0C0AE298: BLKS(0x0C0AE298u);
	r15 = r14;  /* 0C0AE298 mov Rm,Rn */
	IF(0x0C0AE29Au); PR = R32(r15); r15 += 4; UPD(0x0C0AE29Cu, 2);  /* 0C0AE29A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AE29Eu, 1);  /* 0C0AE29C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0AE2A0u, 1);  /* 0C0AE29E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AE2A2u, 1);  /* 0C0AE2A0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AE2A4u, 1);  /* 0C0AE2A2 mov.l @Rm+,Rn */
	IF(0x0C0AE2A4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AE2A4 rts */
L_0C0AE2B0: BLKS(0x0C0AE2B0u);
	{ r8 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C0AE1B8u, 3); goto L_0C0AE1B8; }  /* 0C0AE2B0 bra */
}

/* FUN_0c0ae310 */
void f_0C0AE310(sh3_t *c)
{
	LOCALS;
L_0C0AE310: BLKS(0x0C0AE310u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AE312u, 1);  /* 0C0AE310 mov.l Rm,@-Rn */
	r6 = 0xFFFFFFFBu;  /* 0C0AE312 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AE316u, 2);  /* 0C0AE314 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C0AE316 exts.w Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AE31Au, 2);  /* 0C0AE318 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0AE31Cu, 1);  /* 0C0AE31A mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0AE31Eu, 1);  /* 0C0AE31C mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0AE320u, 1);  /* 0C0AE31E mov.l Rm,@-Rn */
	r12 = 0x4Cu;  /* 0C0AE320 mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AE324u, 2);  /* 0C0AE322 mov.l Rm,@-Rn */
	IF(0x0C0AE324u); MACL = r8 * r12;  /* 0C0AE324 mul.l Rm,Rn */
	r5 = 0xC392AF4u; UPD(0x0C0AE328u, 3);  /* 0C0AE326 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0AE328 add #imm,Rn */
	r7 = R32(r5); UPD(0x0C0AE32Cu, 2);  /* 0C0AE32A mov.l @Rm,Rn */
	IF(0x0C0AE32Cu); r11 = MACL;  /* 0C0AE32C sts macl,Rn */
	r5 = 0xC26CAE0u; UPD(0x0C0AE330u, 2);  /* 0C0AE32E mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0AE330 mov Rm,Rn */
	r11 += r5;  /* 0C0AE332 add Rm,Rn */
	r10 = R32(r11 + 0x8u); UPD(0x0C0AE336u, 3);  /* 0C0AE334 mov.l @(disp,Rm),Rn */
	r13 = r8;  /* 0C0AE336 mov Rm,Rn */
	r9 = (r10 >> 16) | (r10 << 16);  /* 0C0AE338 swap.w Rm,Rn */
	r0 = (u32)(s32)(s16)r9;  /* 0C0AE33A exts.w Rm,Rn */
	r4 = r0;  /* 0C0AE33C mov Rm,Rn */
	IF(0x0C0AE33Eu); ARG0(0x446Cu); { s32 s_ = (s32)r6; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = (u32)((s32)r4 >> 31); else r4 = (u32)((s32)r4 >> ((~s_ & 31) + 1)); }  /* 0C0AE33E shad Rm,Rn */
	W32(r14, r4); UPD(0x0C0AE342u, 6);  /* 0C0AE340 mov.l Rm,@Rn */
	r0 &= 0x1Fu;  /* 0C0AE342 and #imm,r0 */
	r1 = 0xC0000001u; UPD(0x0C0AE346u, 2);  /* 0C0AE344 mov.l @(disp,pc),Rn */
	r12 = 0x0u;  /* 0C0AE346 mov #imm,Rn */
	r3 = 0xC286290u; UPD(0x0C0AE34Au, 2);  /* 0C0AE348 mov.l @(disp,pc),Rn */
	r10 = r5;  /* 0C0AE34A mov Rm,Rn */
	r4 = 0x3DBu; UPD(0x0C0AE34Eu, 2);  /* 0C0AE34C mov.w @(disp,pc),Rn */
	W32(r3, r1); UPD(0x0C0AE350u, 1);  /* 0C0AE34E mov.l Rm,@Rn */
	r4 -= r0;  /* 0C0AE350 sub Rm,Rn */
	r2 = 0xC0000000u; UPD(0x0C0AE354u, 2);  /* 0C0AE352 mov.l @(disp,pc),Rn */
	r0 = 0x4u;  /* 0C0AE354 mov #imm,Rn */
	W32(r7, r2); UPD(0x0C0AE358u, 2);  /* 0C0AE356 mov.l Rm,@Rn */
	IF(0x0C0AE358u); ARG0(0x4D0Du); { s32 s_ = (s32)r0; if (s_ >= 0) r13 <<= (s_ & 31); else if ((s_ & 31) == 0) r13 = 0; else r13 >>= ((~s_ & 31) + 1); }  /* 0C0AE358 shld Rm,Rn */
	r11 = 0xC221068u; UPD(0x0C0AE35Cu, 2);  /* 0C0AE35A mov.l @(disp,pc),Rn */
	r7 += 0x4u;  /* 0C0AE35C add #imm,Rn */
	r9 = 0x10000000u; UPD(0x0C0AE360u, 2);  /* 0C0AE35E mov.l @(disp,pc),Rn */
	IF(0x0C0AE360u); r4 <<= 16;  /* 0C0AE360 shll16 Rn */
	IF(0x0C0AE362u); ;  /* 0C0AE362 nop */
	UPD(0x0C0AE364u, 2);
L_0C0AE364: BLKS(0x0C0AE364u);
	r6 = R32(r14); UPD(0x0C0AE366u, 1);  /* 0C0AE364 mov.l @Rm,Rn */
	r3 = 0xFu;  /* 0C0AE366 mov #imm,Rn */
	r6 += r12;  /* 0C0AE368 add Rm,Rn */
	r6 &= r3;  /* 0C0AE36A and Rm,Rn */
	r6 += r13;  /* 0C0AE36C add Rm,Rn */
	r0 = 0x4u;  /* 0C0AE36E mov #imm,Rn */
	IF(0x0C0AE370u); ARG0(0x460Du); { s32 s_ = (s32)r0; if (s_ >= 0) r6 <<= (s_ & 31); else if ((s_ & 31) == 0) r6 = 0; else r6 >>= ((~s_ & 31) + 1); }  /* 0C0AE370 shld Rm,Rn */
	r5 = 0x0u;  /* 0C0AE372 mov #imm,Rn */
	r3 = 0x60u;  /* 0C0AE374 mov #imm,Rn */
	IF(0x0C0AE376u); ;  /* 0C0AE376 nop */
	UPD(0x0C0AE378u, 9);
L_0C0AE378: BLKS(0x0C0AE378u);
	r0 = r5;  /* 0C0AE378 mov Rm,Rn */
	r2 = 0x4Cu;  /* 0C0AE37A mov #imm,Rn */
	IF(0x0C0AE37Cu); MACL = r8 * r2;  /* 0C0AE37C mul.l Rm,Rn */
	r0 &= 0xFu;  /* 0C0AE37E and #imm,r0 */
	W32(r7, r9); UPD(0x0C0AE382u, 6);  /* 0C0AE380 mov.l Rm,@Rn */
	r0 += r6;  /* 0C0AE382 add Rm,Rn */
	IF(0x0C0AE384u); r0 <<= 2;  /* 0C0AE384 shll2 Rn */
	IF(0x0C0AE386u); r2 = R32(r0 + r11); UPD(0x0C0AE388u, 3);  /* 0C0AE386 mov.l @(r0,Rm),Rn */
	IF(0x0C0AE388u); r1 = MACL;  /* 0C0AE388 sts macl,Rn */
	r1 += r10;  /* 0C0AE38A add Rm,Rn */
	r0 = R32(r1 + 0x24u); UPD(0x0C0AE38Eu, 3);  /* 0C0AE38C mov.l @(disp,Rm),Rn */
	r7 += 0x4u;  /* 0C0AE38E add #imm,Rn */
	r2 += r0;  /* 0C0AE390 add Rm,Rn */
	W32(r7, r2); UPD(0x0C0AE394u, 3);  /* 0C0AE392 mov.l Rm,@Rn */
	r0 = r4;  /* 0C0AE394 mov Rm,Rn */
	r0 |= r3;  /* 0C0AE396 or Rm,Rn */
	r7 += 0x4u;  /* 0C0AE398 add #imm,Rn */
	W32(r7, r0); UPD(0x0C0AE39Cu, 4);  /* 0C0AE39A mov.l Rm,@Rn */
	r5 += 0x1u;  /* 0C0AE39C add #imm,Rn */
	r2 = 0x1F001Fu; UPD(0x0C0AE3A0u, 2);  /* 0C0AE39E mov.l @(disp,pc),Rn */
	r7 += 0x4u;  /* 0C0AE3A0 add #imm,Rn */
	W32(r7, r2); UPD(0x0C0AE3A4u, 2);  /* 0C0AE3A2 mov.l Rm,@Rn */
	r3 += 0x20u;  /* 0C0AE3A4 add #imm,Rn */
	r0 = 0x808080u; UPD(0x0C0AE3A8u, 2);  /* 0C0AE3A6 mov.l @(disp,pc),Rn */
	r7 += 0x4u;  /* 0C0AE3A8 add #imm,Rn */
	W32(r7, r0); UPD(0x0C0AE3ACu, 2);  /* 0C0AE3AA mov.l Rm,@Rn */
	r2 = 0xAu;  /* 0C0AE3AC mov #imm,Rn */
	T = (s32)r5 > (s32)r2;  /* 0C0AE3AE cmp/gt Rm,Rn */
	{ u32 c_ = !T; r7 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AE378u, 5); goto L_0C0AE378; } goto L_0C0AE3B4; }  /* 0C0AE3B0 bf/s */
L_0C0AE3B4: BLKS(0x0C0AE3B4u);
	r5 = 0x200000u; UPD(0x0C0AE3B6u, 2);  /* 0C0AE3B4 mov.l @(disp,pc),Rn */
	r12 += 0x1u;  /* 0C0AE3B6 add #imm,Rn */
	r6 = 0xBu;  /* 0C0AE3B8 mov #imm,Rn */
	T = (s32)r12 > (s32)r6;  /* 0C0AE3BA cmp/gt Rm,Rn */
	{ u32 c_ = !T; r4 += r5; /* slot add Rm,Rn */ if (c_) { UPD(0x0C0AE364u, 6); goto L_0C0AE364; } goto L_0C0AE3C0; }  /* 0C0AE3BC bf/s */
L_0C0AE3C0: BLKS(0x0C0AE3C0u);
	r13 = 0xC0000001u; UPD(0x0C0AE3C2u, 2);  /* 0C0AE3C0 mov.l @(disp,pc),Rn */
	r14 += 0x4u;  /* 0C0AE3C2 add #imm,Rn */
	W32(r7, r13); UPD(0x0C0AE3C6u, 2);  /* 0C0AE3C4 mov.l Rm,@Rn */
	r8 = 0xC392AF4u; UPD(0x0C0AE3C8u, 1);  /* 0C0AE3C6 mov.l @(disp,pc),Rn */
	r7 += 0x4u;  /* 0C0AE3C8 add #imm,Rn */
	W32(r8, r7); UPD(0x0C0AE3CCu, 2);  /* 0C0AE3CA mov.l Rm,@Rn */
	r15 = r14;  /* 0C0AE3CC mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AE3D0u, 2);  /* 0C0AE3CE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0AE3D2u, 1);  /* 0C0AE3D0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0AE3D4u, 1);  /* 0C0AE3D2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0AE3D6u, 1);  /* 0C0AE3D4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AE3D8u, 1);  /* 0C0AE3D6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AE3DAu, 1);  /* 0C0AE3D8 mov.l @Rm+,Rn */
	IF(0x0C0AE3DAu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AE3DA rts */
}

/* FUN_0c0ae410 */
void f_0C0AE410(sh3_t *c)
{
	LOCALS;
L_0C0AE410: BLKS(0x0C0AE410u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AE412u, 1);  /* 0C0AE410 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AE414u, 1);  /* 0C0AE412 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AE416u, 1);  /* 0C0AE414 mov.l Rm,@-Rn */
	r9 = 0x0u;  /* 0C0AE416 mov #imm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0AE41Au, 2);  /* 0C0AE418 mov.l Rm,@-Rn */
	r10 = 0x0u;  /* 0C0AE41A mov #imm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0AE41Eu, 2);  /* 0C0AE41C mov.l Rm,@-Rn */
	r11 = 0x0u;  /* 0C0AE41E mov #imm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0AE422u, 2);  /* 0C0AE420 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AE424u, 1);  /* 0C0AE422 mov.l Rm,@-Rn */
	r12 = 0xC26CAE0u; UPD(0x0C0AE426u, 1);  /* 0C0AE424 mov.l @(disp,pc),Rn */
	IF(0x0C0AE426u); r15 -= 4; W32(r15, PR); UPD(0x0C0AE428u, 1);  /* 0C0AE426 sts.l pr,@-Rn */
	r13 = 0xC057F60u; UPD(0x0C0AE42Au, 1);  /* 0C0AE428 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0AE42A mov Rm,Rn */
	UPD(0x0C0AE42Cu, 1);
L_0C0AE42C: BLKS(0x0C0AE42Cu);
	r8 = r10;  /* 0C0AE42C mov Rm,Rn */
	r8 += r12;  /* 0C0AE42E add Rm,Rn */
	r0 = R32(r8); UPD(0x0C0AE432u, 3);  /* 0C0AE430 mov.l @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0AE432 tst Rm,Rn */
	if (!T) { UPD(0x0C0AE500u, 4); goto L_0C0AE500; }  /* 0C0AE434 bf */
L_0C0AE436: BLKS(0x0C0AE436u);
	r3 = r11;  /* 0C0AE436 mov Rm,Rn */
	UPD(0x0C0AE438u, 1);
L_0C0AE438: BLKS(0x0C0AE438u);
	r3 += 0x1u;  /* 0C0AE438 add #imm,Rn */
	r11 = (u32)(s32)(s8)r3;  /* 0C0AE43A exts.b Rm,Rn */
	r2 = 0x7u;  /* 0C0AE43C mov #imm,Rn */
	W32(r8, r9); UPD(0x0C0AE440u, 4);  /* 0C0AE43E mov.l Rm,@Rn */
	r10 += 0x4Cu;  /* 0C0AE440 add #imm,Rn */
	W32(r8 + 0xCu, r9); UPD(0x0C0AE444u, 2);  /* 0C0AE442 mov.l Rm,@(disp,Rn) */
	T = (s32)r11 > (s32)r2;  /* 0C0AE444 cmp/gt Rm,Rn */
	{ u32 c_ = !T; W32(r8 + 0x8u, r9); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0AE42Cu, 4); goto L_0C0AE42C; } UPD(0x0C0AE44Au, 1); goto L_0C0AE44A; }  /* 0C0AE446 bf/s */
L_0C0AE44A: BLKS(0x0C0AE44Au);
	r12 = 0xC22486Eu; UPD(0x0C0AE44Cu, 1);  /* 0C0AE44A mov.l @(disp,pc),Rn */
	r11 = 0x0u;  /* 0C0AE44C mov #imm,Rn */
	r7 = (u32)(s32)(s8)R8(r12); UPD(0x0C0AE450u, 2);  /* 0C0AE44E mov.b @Rm,Rn */
	r10 = 0xC1F519Cu; UPD(0x0C0AE452u, 1);  /* 0C0AE450 mov.l @(disp,pc),Rn */
	r0 = r7 & 0xFF;  /* 0C0AE452 extu.b Rm,Rn */
	IF(0x0C0AE454u); r0 <<= 2;  /* 0C0AE454 shll2 Rn */
	IF(0x0C0AE456u); r7 = R32(r0 + r10); UPD(0x0C0AE458u, 3);  /* 0C0AE456 mov.l @(r0,Rm),Rn */
	{ u32 v_ = R32(r7); r7 += 4; r9 = v_; } UPD(0x0C0AE45Au, 1);  /* 0C0AE458 mov.l @Rm+,Rn */
	r6 = 0xC283CA0u; UPD(0x0C0AE45Cu, 1);  /* 0C0AE45A mov.l @(disp,pc),Rn */
	{ u32 v_ = R32(r7); r7 += 4; r1 = v_; } UPD(0x0C0AE45Eu, 1);  /* 0C0AE45C mov.l @Rm+,Rn */
	W32(r6, r1); UPD(0x0C0AE460u, 1);  /* 0C0AE45E mov.l Rm,@Rn */
	r8 = 0xC2859A0u; UPD(0x0C0AE462u, 1);  /* 0C0AE460 mov.l @(disp,pc),Rn */
	r5 = 0xC21F5DCu; UPD(0x0C0AE464u, 1);  /* 0C0AE462 mov.l @(disp,pc),Rn */
	r4 = 0xC26C8BAu; UPD(0x0C0AE466u, 1);  /* 0C0AE464 mov.l @(disp,pc),Rn */
	r6 = 0xC26CB20u; UPD(0x0C0AE468u, 1);  /* 0C0AE466 mov.l @(disp,pc),Rn */
	W32(r8, r9); UPD(0x0C0AE46Au, 1);  /* 0C0AE468 mov.l Rm,@Rn */
	r3 = r6;  /* 0C0AE46A mov Rm,Rn */
	W32(r5, r11); UPD(0x0C0AE46Eu, 2);  /* 0C0AE46C mov.l Rm,@Rn */
	r3 += 0xFFFFFFC0u;  /* 0C0AE46E add #imm,Rn */
	W8(r4, r11); UPD(0x0C0AE472u, 2);  /* 0C0AE470 mov.b Rm,@Rn */
	IF(0x0C0AE472u); ;  /* 0C0AE472 nop */
	UPD(0x0C0AE474u, 1);
L_0C0AE474: BLKS(0x0C0AE474u);
	r2 = R32(r7); UPD(0x0C0AE476u, 1);  /* 0C0AE474 mov.l @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C0AE476 tst Rm,Rn */
	{ u32 c_ = T; r5 = r11; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0AE4DCu, 4); goto L_0C0AE4DC; } goto L_0C0AE47C; }  /* 0C0AE478 bt/s */
L_0C0AE47C: BLKS(0x0C0AE47Cu);
	r4 = R32(r2); UPD(0x0C0AE47Eu, 2);  /* 0C0AE47C mov.l @Rm,Rn */
	r7 += 0x4u;  /* 0C0AE47E add #imm,Rn */
	W32(r3, r4); UPD(0x0C0AE482u, 2);  /* 0C0AE480 mov.l Rm,@Rn */
	r0 = R32(r2 + 0x4u); UPD(0x0C0AE484u, 1);  /* 0C0AE482 mov.l @(disp,Rm),Rn */
	W32(r3 + 0x4u, r0); UPD(0x0C0AE486u, 1);  /* 0C0AE484 mov.l Rm,@(disp,Rn) */
	r13 = R32(r2 + 0x14u); UPD(0x0C0AE488u, 1);  /* 0C0AE486 mov.l @(disp,Rm),Rn */
	W32(r3 + 0x28u, r13); UPD(0x0C0AE48Au, 1);  /* 0C0AE488 mov.l Rm,@(disp,Rn) */
	r12 = R32(r2 + 0x18u); UPD(0x0C0AE48Cu, 1);  /* 0C0AE48A mov.l @(disp,Rm),Rn */
	W32(r3 + 0x2Cu, r12); UPD(0x0C0AE48Eu, 1);  /* 0C0AE48C mov.l Rm,@(disp,Rn) */
	r10 = R32(r2 + 0x1Cu); UPD(0x0C0AE490u, 1);  /* 0C0AE48E mov.l @(disp,Rm),Rn */
	W32(r3 + 0x30u, r10); UPD(0x0C0AE492u, 1);  /* 0C0AE490 mov.l Rm,@(disp,Rn) */
	r9 = R32(r2 + 0x20u); UPD(0x0C0AE494u, 1);  /* 0C0AE492 mov.l @(disp,Rm),Rn */
	r8 = R32(r2 + 0x24u); UPD(0x0C0AE496u, 1);  /* 0C0AE494 mov.l @(disp,Rm),Rn */
	W32(r3 + 0x38u, r8); UPD(0x0C0AE498u, 1);  /* 0C0AE496 mov.l Rm,@(disp,Rn) */
	r5 = R32(r2 + 0xCu); UPD(0x0C0AE49Au, 1);  /* 0C0AE498 mov.l @(disp,Rm),Rn */
	W32(r3 + 0x10u, r5); UPD(0x0C0AE49Cu, 1);  /* 0C0AE49A mov.l Rm,@(disp,Rn) */
	r4 = R32(r2 + 0x10u); UPD(0x0C0AE49Eu, 1);  /* 0C0AE49C mov.l @(disp,Rm),Rn */
	r2 += 0x8u;  /* 0C0AE49E add #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r2); UPD(0x0C0AE4A2u, 2);  /* 0C0AE4A0 mov.w @Rm,Rn */
	IF(0x0C0AE4A2u); r0 <<= 16;  /* 0C0AE4A2 shll16 Rn */
	W32(r3 + 0x34u, r9); UPD(0x0C0AE4A6u, 2);  /* 0C0AE4A4 mov.l Rm,@(disp,Rn) */
	r2 += 0x20u;  /* 0C0AE4A6 add #imm,Rn */
	W32(r3 + 0x14u, r4); UPD(0x0C0AE4AAu, 2);  /* 0C0AE4A8 mov.l Rm,@(disp,Rn) */
	W32(r3 + 0x20u, r0); UPD(0x0C0AE4ACu, 1);  /* 0C0AE4AA mov.l Rm,@(disp,Rn) */
	{ u32 v_ = (u32)(s32)(s8)R8(r2); r2 += 1; r13 = v_; } UPD(0x0C0AE4AEu, 1);  /* 0C0AE4AC mov.b @Rm+,Rn */
	r3 += 0x42u;  /* 0C0AE4AE add #imm,Rn */
	W8(r3, r13); UPD(0x0C0AE4B2u, 2);  /* 0C0AE4B0 mov.b Rm,@Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r2); r2 += 1; r12 = v_; } UPD(0x0C0AE4B4u, 1);  /* 0C0AE4B2 mov.b @Rm+,Rn */
	r3 += 0xFFFFFFFAu;  /* 0C0AE4B4 add #imm,Rn */
	W8(r3, r12); UPD(0x0C0AE4B8u, 2);  /* 0C0AE4B6 mov.b Rm,@Rn */
	r13 = 0x0u;  /* 0C0AE4B8 mov #imm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r2); r2 += 1; r10 = v_; } UPD(0x0C0AE4BCu, 2);  /* 0C0AE4BA mov.b @Rm+,Rn */
	r3 += 0x1u;  /* 0C0AE4BC add #imm,Rn */
	W8(r3, r10); UPD(0x0C0AE4C0u, 2);  /* 0C0AE4BE mov.b Rm,@Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r2); r2 += 1; r9 = v_; } UPD(0x0C0AE4C2u, 1);  /* 0C0AE4C0 mov.b @Rm+,Rn */
	r3 += 0x1u;  /* 0C0AE4C2 add #imm,Rn */
	W8(r3, r9); UPD(0x0C0AE4C6u, 2);  /* 0C0AE4C4 mov.b Rm,@Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r2); r2 += 1; r8 = v_; } UPD(0x0C0AE4C8u, 1);  /* 0C0AE4C6 mov.b @Rm+,Rn */
	r3 += 0x1u;  /* 0C0AE4C8 add #imm,Rn */
	W8(r3, r8); UPD(0x0C0AE4CCu, 2);  /* 0C0AE4CA mov.b Rm,@Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r2); r2 += 1; r5 = v_; } UPD(0x0C0AE4CEu, 1);  /* 0C0AE4CC mov.b @Rm+,Rn */
	r3 += 0x2u;  /* 0C0AE4CE add #imm,Rn */
	W8(r6, r5); UPD(0x0C0AE4D2u, 2);  /* 0C0AE4D0 mov.b Rm,@Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C0AE4D4u, 1);  /* 0C0AE4D2 mov.b @Rm,Rn */
	W8(r3, r0); UPD(0x0C0AE4D6u, 1);  /* 0C0AE4D4 mov.b Rm,@Rn */
	W32(r6 + 0x8u, r13); UPD(0x0C0AE4D8u, 1);  /* 0C0AE4D6 mov.l Rm,@(disp,Rn) */
	r3 += 0xFFFFFFBFu;  /* 0C0AE4D8 add #imm,Rn */
	r5 = r11;  /* 0C0AE4DA mov Rm,Rn */
	UPD(0x0C0AE4DCu, 2);
L_0C0AE4DC: BLKS(0x0C0AE4DCu);
	r5 += 0x1u;  /* 0C0AE4DC add #imm,Rn */
	r11 = (u32)(s32)(s8)r5;  /* 0C0AE4DE exts.b Rm,Rn */
	r2 = 0x7u;  /* 0C0AE4E0 mov #imm,Rn */
	r6 += 0x4Cu;  /* 0C0AE4E2 add #imm,Rn */
	T = (s32)r11 > (s32)r2;  /* 0C0AE4E4 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r3 += 0x4Cu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AE474u, 8); goto L_0C0AE474; } goto L_0C0AE4EA; }  /* 0C0AE4E6 bf/s */
L_0C0AE4EA: BLKS(0x0C0AE4EAu);
	r3 = 0xC057DC0u; UPD(0x0C0AE4ECu, 2);  /* 0C0AE4EA mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C0AE4EC mov Rm,Rn */
	IF(0x0C0AE4EEu); PR = R32(r15); r15 += 4; UPD(0x0C0AE4F0u, 2);  /* 0C0AE4EE lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AE4F2u, 1);  /* 0C0AE4F0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0AE4F4u, 1);  /* 0C0AE4F2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0AE4F6u, 1);  /* 0C0AE4F4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0AE4F8u, 1);  /* 0C0AE4F6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AE4FAu, 1);  /* 0C0AE4F8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AE4FCu, 1);  /* 0C0AE4FA mov.l @Rm+,Rn */
	IF(0x0C0AE4FCu); { u32 tv_ = r3; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C057DC0u: TAIL(f_0C057DC0); default: JUMPD(tv_); } }  /* 0C0AE4FC jmp @Rn */
L_0C0AE500: BLKS(0x0C0AE500u);
	r4 = r11;  /* 0C0AE500 mov Rm,Rn */
	r4 += 0x8u;  /* 0C0AE502 add #imm,Rn */
	IF(0x0C0AE504u); { u32 t_ = r13; PR = 0x0C0AE508u; r5 = R32(r8 + 0x30u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 4); CALLP(t_, f_0C057F60, 0x0C057F60u, 0x0C0AE508u); }  /* 0C0AE504 jsr @Rn */
L_0C0AE508: BLKS(0x0C0AE508u);
	r0 = 0xC0AEEC0u; UPD(0x0C0AE50Au, 1);  /* 0C0AE508 mov.l @(disp,pc),Rn */
	IF(0x0C0AE50Au); { u32 t_ = r0; PR = 0x0C0AE50Eu; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AEEC0, 0x0C0AEEC0u, 0x0C0AE50Eu); }  /* 0C0AE50A jsr @Rn */
L_0C0AE50E: BLKS(0x0C0AE50Eu);
	{ r3 = r11; /* slot mov Rm,Rn */ UPD(0x0C0AE438u, 3); goto L_0C0AE438; }  /* 0C0AE50E bra */
}

/* FUN_0c0ae540 */
void f_0C0AE540(sh3_t *c)
{
	LOCALS;
L_0C0AE540: BLKS(0x0C0AE540u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AE542u, 1);  /* 0C0AE540 mov.l Rm,@-Rn */
	r1 = 0x0u;  /* 0C0AE542 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AE546u, 2);  /* 0C0AE544 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AE548u, 1);  /* 0C0AE546 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0AE54Au, 1);  /* 0C0AE548 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0AE54Cu, 1);  /* 0C0AE54A mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0AE54Eu, 1);  /* 0C0AE54C mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AE550u, 1);  /* 0C0AE54E mov.l Rm,@-Rn */
	r0 = 0xC392D80u; UPD(0x0C0AE552u, 1);  /* 0C0AE550 mov.l @(disp,pc),Rn */
	IF(0x0C0AE552u); r15 -= 4; W32(r15, PR); UPD(0x0C0AE554u, 1);  /* 0C0AE552 sts.l pr,@-Rn */
	r3 = 0xC283CA4u; UPD(0x0C0AE556u, 1);  /* 0C0AE554 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0AE556 mov Rm,Rn */
	W8(r0, r1); UPD(0x0C0AE55Au, 2);  /* 0C0AE558 mov.b Rm,@Rn */
	r4 = 0xC220C2Cu; UPD(0x0C0AE55Cu, 1);  /* 0C0AE55A mov.l @(disp,pc),Rn */
	r2 = R32(r3); UPD(0x0C0AE55Eu, 1);  /* 0C0AE55C mov.l @Rm,Rn */
	r0 = R32(r4); UPD(0x0C0AE560u, 1);  /* 0C0AE55E mov.l @Rm,Rn */
	r1 = 0x40000000u; UPD(0x0C0AE562u, 1);  /* 0C0AE560 mov.l @(disp,pc),Rn */
	r2 += r0;  /* 0C0AE562 add Rm,Rn */
	T = (s32)r2 > (s32)r1;  /* 0C0AE564 cmp/gt Rm,Rn */
	{ u32 c_ = !T; W32(r3, r2); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C0AE56Eu, 5); goto L_0C0AE56E; } UPD(0x0C0AE56Au, 1); goto L_0C0AE56A; }  /* 0C0AE566 bf/s */
L_0C0AE56A: BLKS(0x0C0AE56Au);
	r2 -= r1;  /* 0C0AE56A sub Rm,Rn */
	W32(r3, r2); UPD(0x0C0AE56Eu, 2);  /* 0C0AE56C mov.l Rm,@Rn */
L_0C0AE56E: BLKS(0x0C0AE56Eu);
	r3 = 0xC286288u; UPD(0x0C0AE570u, 1);  /* 0C0AE56E mov.l @(disp,pc),Rn */
	r6 = 0x0u;  /* 0C0AE570 mov #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r3); UPD(0x0C0AE574u, 2);  /* 0C0AE572 mov.b @Rm,Rn */
	r4 = 0xC392D5Cu; UPD(0x0C0AE576u, 1);  /* 0C0AE574 mov.l @(disp,pc),Rn */
	r5 = r2 & 0xFF;  /* 0C0AE576 extu.b Rm,Rn */
	r8 = 0xC275DCAu; UPD(0x0C0AE57Au, 2);  /* 0C0AE578 mov.l @(disp,pc),Rn */
	r0 = 0xC220C52u; UPD(0x0C0AE57Cu, 1);  /* 0C0AE57A mov.l @(disp,pc),Rn */
L_0C0AE57C: BLKS(0x0C0AE57Cu);
	r1 = (u32)(s32)(s8)R8(r4); UPD(0x0C0AE57Eu, 1);  /* 0C0AE57C mov.b @Rm,Rn */
	r2 = r1 & 0xFF;  /* 0C0AE57E extu.b Rm,Rn */
	T = r2 == r5;  /* 0C0AE580 cmp/eq Rm,Rn */
	{ u32 c_ = T; T = r2 > r5; /* slot cmp/hi Rm,Rn */ if (c_) { UPD(0x0C0AE592u, 5); goto L_0C0AE592; } goto L_0C0AE586; }  /* 0C0AE582 bt/s */
L_0C0AE586: BLKS(0x0C0AE586u);
	if (T) { UPD(0x0C0AE58Eu, 4); goto L_0C0AE58E; }  /* 0C0AE586 bt */
L_0C0AE588: BLKS(0x0C0AE588u);
	r1 += 0x1u;  /* 0C0AE588 add #imm,Rn */
	{ W8(r4, r1); /* slot mov.b Rm,@Rn */ UPD(0x0C0AE592u, 4); goto L_0C0AE592; }  /* 0C0AE58A bra */
L_0C0AE58E: BLKS(0x0C0AE58Eu);
	r1 += 0xFFFFFFFFu;  /* 0C0AE58E add #imm,Rn */
	W8(r4, r1); UPD(0x0C0AE592u, 2);  /* 0C0AE590 mov.b Rm,@Rn */
L_0C0AE592: BLKS(0x0C0AE592u);
	r7 = 0xC283CB2u; UPD(0x0C0AE594u, 1);  /* 0C0AE592 mov.l @(disp,pc),Rn */
	r9 = (u32)(s32)(s8)R8(r8); UPD(0x0C0AE596u, 1);  /* 0C0AE594 mov.b @Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r7); UPD(0x0C0AE598u, 1);  /* 0C0AE596 mov.b @Rm,Rn */
	r1 = r9 & 0xFF;  /* 0C0AE598 extu.b Rm,Rn */
	r3 = r2 & 0xFF;  /* 0C0AE59A extu.b Rm,Rn */
	T = r3 == r1;  /* 0C0AE59C cmp/eq Rm,Rn */
	{ u32 c_ = T; T = r3 > r1; /* slot cmp/hi Rm,Rn */ if (c_) { UPD(0x0C0AE5B0u, 6); goto L_0C0AE5B0; } goto L_0C0AE5A2; }  /* 0C0AE59E bt/s */
L_0C0AE5A2: BLKS(0x0C0AE5A2u);
	{ u32 c_ = T; r1 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0AE5AAu, 4); goto L_0C0AE5AA; } goto L_0C0AE5A6; }  /* 0C0AE5A2 bt/s */
L_0C0AE5A6: BLKS(0x0C0AE5A6u);
	{ r1 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C0AE5AEu, 4); goto L_0C0AE5AE; }  /* 0C0AE5A6 bra */
L_0C0AE5AA: BLKS(0x0C0AE5AAu);
	r1 = r2;  /* 0C0AE5AA mov Rm,Rn */
	r1 += 0xFFFFFFFFu;  /* 0C0AE5AC add #imm,Rn */
	UPD(0x0C0AE5AEu, 2);
L_0C0AE5AE: BLKS(0x0C0AE5AEu);
	W8(r7, r1); UPD(0x0C0AE5B0u, 1);  /* 0C0AE5AE mov.b Rm,@Rn */
L_0C0AE5B0: BLKS(0x0C0AE5B0u);
	r7 = 0xC392B09u; UPD(0x0C0AE5B2u, 1);  /* 0C0AE5B0 mov.l @(disp,pc),Rn */
	r10 = (u32)(s32)(s8)R8(r0); UPD(0x0C0AE5B4u, 1);  /* 0C0AE5B2 mov.b @Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r7); UPD(0x0C0AE5B6u, 1);  /* 0C0AE5B4 mov.b @Rm,Rn */
	r1 = r10 & 0xFF;  /* 0C0AE5B6 extu.b Rm,Rn */
	r3 = r2 & 0xFF;  /* 0C0AE5B8 extu.b Rm,Rn */
	T = r3 == r1;  /* 0C0AE5BA cmp/eq Rm,Rn */
	{ u32 c_ = T; T = r3 > r1; /* slot cmp/hi Rm,Rn */ if (c_) { UPD(0x0C0AE5CEu, 6); goto L_0C0AE5CE; } goto L_0C0AE5C0; }  /* 0C0AE5BC bt/s */
L_0C0AE5C0: BLKS(0x0C0AE5C0u);
	{ u32 c_ = T; r1 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0AE5C8u, 4); goto L_0C0AE5C8; } goto L_0C0AE5C4; }  /* 0C0AE5C0 bt/s */
L_0C0AE5C4: BLKS(0x0C0AE5C4u);
	{ r1 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C0AE5CCu, 4); goto L_0C0AE5CC; }  /* 0C0AE5C4 bra */
L_0C0AE5C8: BLKS(0x0C0AE5C8u);
	r1 = r2;  /* 0C0AE5C8 mov Rm,Rn */
	r1 += 0xFFFFFFFFu;  /* 0C0AE5CA add #imm,Rn */
	UPD(0x0C0AE5CCu, 2);
L_0C0AE5CC: BLKS(0x0C0AE5CCu);
	W8(r7, r1); UPD(0x0C0AE5CEu, 1);  /* 0C0AE5CC mov.b Rm,@Rn */
L_0C0AE5CE: BLKS(0x0C0AE5CEu);
	r11 = r6;  /* 0C0AE5CE mov Rm,Rn */
	r11 += 0x1u;  /* 0C0AE5D0 add #imm,Rn */
	r6 = (u32)(s32)(s16)r11;  /* 0C0AE5D2 exts.w Rm,Rn */
	r7 = 0x1u;  /* 0C0AE5D4 mov #imm,Rn */
	T = (s32)r6 > (s32)r7;  /* 0C0AE5D6 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0AE57Cu, 8); goto L_0C0AE57C; }  /* 0C0AE5D8 bf */
L_0C0AE5DA: BLKS(0x0C0AE5DAu);
	r6 = 0xC220C2Cu; UPD(0x0C0AE5DCu, 1);  /* 0C0AE5DA mov.l @(disp,pc),Rn */
	r5 = 0xC21CC84u; UPD(0x0C0AE5DEu, 1);  /* 0C0AE5DC mov.l @(disp,pc),Rn */
	r3 = R32(r6); UPD(0x0C0AE5E0u, 1);  /* 0C0AE5DE mov.l @Rm,Rn */
	r7 = R32(r5); UPD(0x0C0AE5E2u, 1);  /* 0C0AE5E0 mov.l @Rm,Rn */
	T = r3 == r7;  /* 0C0AE5E2 cmp/eq Rm,Rn */
	{ u32 c_ = T; r2 = r3; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0AE5FCu, 4); goto L_0C0AE5FC; } goto L_0C0AE5E8; }  /* 0C0AE5E4 bt/s */
L_0C0AE5E8: BLKS(0x0C0AE5E8u);
	r2 -= r7;  /* 0C0AE5E8 sub Rm,Rn */
	IF(0x0C0AE5EAu); T = (s32)r2 >= 0;  /* 0C0AE5EA cmp/pz Rn */
	if (T) { UPD(0x0C0AE5F0u, 6); goto L_0C0AE5F0; }  /* 0C0AE5EC bt */
L_0C0AE5EE: BLKS(0x0C0AE5EEu);
	r2 = 0u - r2;  /* 0C0AE5EE neg Rm,Rn */
	UPD(0x0C0AE5F0u, 1);
L_0C0AE5F0: BLKS(0x0C0AE5F0u);
	r8 = 0xC220C24u; UPD(0x0C0AE5F2u, 1);  /* 0C0AE5F0 mov.l @(disp,pc),Rn */
	r1 = R32(r8); UPD(0x0C0AE5F4u, 1);  /* 0C0AE5F2 mov.l @Rm,Rn */
	T = (s32)r2 >= (s32)r1;  /* 0C0AE5F4 cmp/ge Rm,Rn */
	{ u32 c_ = T; T = (s32)r3 >= (s32)r7; /* slot cmp/ge Rm,Rn */ if (c_) { UPD(0x0C0AE6D0u, 4); goto L_0C0AE6D0; } goto L_0C0AE5FA; }  /* 0C0AE5F6 bt/s */
L_0C0AE5FA: BLKS(0x0C0AE5FAu);
	W32(r6, r7); UPD(0x0C0AE5FCu, 2);  /* 0C0AE5FA mov.l Rm,@Rn */
L_0C0AE5FC: BLKS(0x0C0AE5FCu);
	r11 = 0xC26CAE0u; UPD(0x0C0AE5FEu, 1);  /* 0C0AE5FC mov.l @(disp,pc),Rn */
	r8 = 0x0u;  /* 0C0AE5FE mov #imm,Rn */
	r12 = 0xC392D80u; UPD(0x0C0AE602u, 2);  /* 0C0AE600 mov.l @(disp,pc),Rn */
	r10 = 0x0u;  /* 0C0AE602 mov #imm,Rn */
	r13 = 0xC2864B8u; UPD(0x0C0AE606u, 2);  /* 0C0AE604 mov.l @(disp,pc),Rn */
	IF(0x0C0AE606u); ;  /* 0C0AE606 nop */
	UPD(0x0C0AE608u, 1);
L_0C0AE608: BLKS(0x0C0AE608u);
	r9 = r10;  /* 0C0AE608 mov Rm,Rn */
	r9 += r11;  /* 0C0AE60A add Rm,Rn */
	r6 = R32(r9); UPD(0x0C0AE60Eu, 3);  /* 0C0AE60C mov.l @Rm,Rn */
	T = (r6 & r6) == 0;  /* 0C0AE60E tst Rm,Rn */
	if (!T) { UPD(0x0C0AE690u, 4); goto L_0C0AE690; }  /* 0C0AE610 bf */
L_0C0AE612: BLKS(0x0C0AE612u);
	r3 = r8;  /* 0C0AE612 mov Rm,Rn */
	r3 += 0x1u;  /* 0C0AE614 add #imm,Rn */
	r8 = (u32)(s32)(s16)r3;  /* 0C0AE616 exts.w Rm,Rn */
	r0 = 0x7u;  /* 0C0AE618 mov #imm,Rn */
	T = (s32)r8 > (s32)r0;  /* 0C0AE61A cmp/gt Rm,Rn */
	{ u32 c_ = !T; r10 += 0x4Cu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AE608u, 8); goto L_0C0AE608; } goto L_0C0AE620; }  /* 0C0AE61C bf/s */
L_0C0AE620: BLKS(0x0C0AE620u);
	r13 = 0xC392D80u; UPD(0x0C0AE622u, 2);  /* 0C0AE620 mov.l @(disp,pc),Rn */
	r12 = (u32)(s32)(s8)R8(r13); UPD(0x0C0AE624u, 1);  /* 0C0AE622 mov.b @Rm,Rn */
	r1 = r12 & 0xFF;  /* 0C0AE624 extu.b Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C0AE626 tst Rm,Rn */
	if (T) { UPD(0x0C0AE67Cu, 5); goto L_0C0AE67C; }  /* 0C0AE628 bt */
L_0C0AE62A: BLKS(0x0C0AE62Au);
	r12 = r1;  /* 0C0AE62A mov Rm,Rn */
	r12 += 0xFFFFFFFFu;  /* 0C0AE62C add #imm,Rn */
	IF(0x0C0AE62Eu); ;  /* 0C0AE62E nop */
	UPD(0x0C0AE630u, 3);
L_0C0AE630: BLKS(0x0C0AE630u);
	r10 = 0x0u;  /* 0C0AE630 mov #imm,Rn */
	T = (s32)r10 >= (s32)r12;  /* 0C0AE632 cmp/ge Rm,Rn */
	{ u32 c_ = T; r8 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AE678u, 5); goto L_0C0AE678; } goto L_0C0AE638; }  /* 0C0AE634 bt/s */
L_0C0AE638: BLKS(0x0C0AE638u);
	r2 = 0xC392D80u; UPD(0x0C0AE63Au, 2);  /* 0C0AE638 mov.l @(disp,pc),Rn */
	r5 = (u32)(s32)(s8)R8(r2); UPD(0x0C0AE63Cu, 1);  /* 0C0AE63A mov.b @Rm,Rn */
	r11 = 0xC286058u; UPD(0x0C0AE63Eu, 1);  /* 0C0AE63C mov.l @(disp,pc),Rn */
	r9 = r5 & 0xFF;  /* 0C0AE63E extu.b Rm,Rn */
	r0 = 0xC39302Cu; UPD(0x0C0AE642u, 2);  /* 0C0AE640 mov.l @(disp,pc),Rn */
	r9 += 0xFFFFFFFFu;  /* 0C0AE642 add #imm,Rn */
	UPD(0x0C0AE644u, 1);
L_0C0AE644: BLKS(0x0C0AE644u);
	r7 = r8;  /* 0C0AE644 mov Rm,Rn */
	r7 += r11;  /* 0C0AE646 add Rm,Rn */
	r4 = r7;  /* 0C0AE648 mov Rm,Rn */
	r4 += 0x1u;  /* 0C0AE64A add #imm,Rn */
	r13 = (u32)(s32)(s8)R8(r7); UPD(0x0C0AE64Eu, 5);  /* 0C0AE64C mov.b @Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r4); UPD(0x0C0AE650u, 1);  /* 0C0AE64E mov.b @Rm,Rn */
	r5 = r13 & 0xFF;  /* 0C0AE650 extu.b Rm,Rn */
	r3 = r6 & 0xFF;  /* 0C0AE652 extu.b Rm,Rn */
	T = r5 >= r3;  /* 0C0AE654 cmp/hs Rm,Rn */
	{ u32 c_ = T; r13 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0AE66Cu, 6); goto L_0C0AE66C; } goto L_0C0AE65A; }  /* 0C0AE656 bt/s */
L_0C0AE65A: BLKS(0x0C0AE65Au);
	{ u32 v_ = (u32)(s32)(s8)R8(r13); r13 += 1; r1 = v_; } UPD(0x0C0AE65Cu, 2);  /* 0C0AE65A mov.b @Rm+,Rn */
	r3 = (u32)(s32)(s8)R8(r13); UPD(0x0C0AE65Eu, 1);  /* 0C0AE65C mov.b @Rm,Rn */
	W8(r7, r6); UPD(0x0C0AE660u, 1);  /* 0C0AE65E mov.b Rm,@Rn */
	W8(r0, r3); UPD(0x0C0AE662u, 1);  /* 0C0AE660 mov.b Rm,@Rn */
	r6 = r10;  /* 0C0AE662 mov Rm,Rn */
	r6 += 0x1u;  /* 0C0AE664 add #imm,Rn */
	W8(r13, r1); UPD(0x0C0AE668u, 3);  /* 0C0AE666 mov.b Rm,@Rn */
	r10 = r6 & 0xFF;  /* 0C0AE668 extu.b Rm,Rn */
	W8(r4, r5); UPD(0x0C0AE66Cu, 2);  /* 0C0AE66A mov.b Rm,@Rn */
L_0C0AE66C: BLKS(0x0C0AE66Cu);
	r7 = r8;  /* 0C0AE66C mov Rm,Rn */
	r7 += 0x1u;  /* 0C0AE66E add #imm,Rn */
	r8 = (u32)(s32)(s16)r7;  /* 0C0AE670 exts.w Rm,Rn */
	T = (s32)r8 >= (s32)r9;  /* 0C0AE672 cmp/ge Rm,Rn */
	{ u32 c_ = !T; r0 += 0x1u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AE644u, 7); goto L_0C0AE644; } UPD(0x0C0AE678u, 1); goto L_0C0AE678; }  /* 0C0AE674 bf/s */
L_0C0AE678: BLKS(0x0C0AE678u);
	T = (r10 & r10) == 0;  /* 0C0AE678 tst Rm,Rn */
	if (!T) { UPD(0x0C0AE630u, 4); goto L_0C0AE630; }  /* 0C0AE67A bf */
L_0C0AE67C: BLKS(0x0C0AE67Cu);
	r15 = r14;  /* 0C0AE67C mov Rm,Rn */
	IF(0x0C0AE67Eu); PR = R32(r15); r15 += 4; UPD(0x0C0AE680u, 2);  /* 0C0AE67E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AE682u, 1);  /* 0C0AE680 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0AE684u, 1);  /* 0C0AE682 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0AE686u, 1);  /* 0C0AE684 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0AE688u, 1);  /* 0C0AE686 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AE68Au, 1);  /* 0C0AE688 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AE68Cu, 1);  /* 0C0AE68A mov.l @Rm+,Rn */
	IF(0x0C0AE68Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AE68C rts */
L_0C0AE690: BLKS(0x0C0AE690u);
	r4 = R32(r9 + 0x4u); UPD(0x0C0AE692u, 1);  /* 0C0AE690 mov.l @(disp,Rm),Rn */
	r0 = 0xC1F51E8u; UPD(0x0C0AE694u, 1);  /* 0C0AE692 mov.l @(disp,pc),Rn */
	IF(0x0C0AE694u); r4 <<= 2;  /* 0C0AE694 shll2 Rn */
	IF(0x0C0AE696u); r7 = R32(r0 + r4); UPD(0x0C0AE698u, 2);  /* 0C0AE696 mov.l @(r0,Rm),Rn */
	r9 += 0x42u;  /* 0C0AE698 add #imm,Rn */
	IF(0x0C0AE69Au); { u32 t_ = r7; PR = 0x0C0AE69Eu; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 3); CALLD(t_, 0x0C0AE69Eu); }  /* 0C0AE69A jsr @Rn */
L_0C0AE69E: BLKS(0x0C0AE69Eu);
	r2 = (u32)(s32)(s8)R8(r12); UPD(0x0C0AE6A0u, 1);  /* 0C0AE69E mov.b @Rm,Rn */
	r3 = 0x1Fu;  /* 0C0AE6A0 mov #imm,Rn */
	r0 = 0xC39302Cu; UPD(0x0C0AE6A4u, 2);  /* 0C0AE6A2 mov.l @(disp,pc),Rn */
	r6 = r2 & 0xFF;  /* 0C0AE6A4 extu.b Rm,Rn */
	IF(0x0C0AE6A6u); W8(r0 + r6, r8); UPD(0x0C0AE6A8u, 2);  /* 0C0AE6A6 mov.b Rm,@(r0,Rn) */
	r2 += 0x1u;  /* 0C0AE6A8 add #imm,Rn */
	r5 = (u32)(s32)(s8)R8(r9); UPD(0x0C0AE6ACu, 2);  /* 0C0AE6AA mov.b @Rm,Rn */
	r9 = 0xC286058u; UPD(0x0C0AE6AEu, 1);  /* 0C0AE6AC mov.l @(disp,pc),Rn */
	r3 &= r5;  /* 0C0AE6AE and Rm,Rn */
	r0 = r9;  /* 0C0AE6B0 mov Rm,Rn */
	r3 += r3;  /* 0C0AE6B2 add Rm,Rn */
	IF(0x0C0AE6B4u); W8(r0 + r6, r5); UPD(0x0C0AE6B6u, 4);  /* 0C0AE6B4 mov.b Rm,@(r0,Rn) */
	r4 = r3;  /* 0C0AE6B6 mov Rm,Rn */
	r4 += r13;  /* 0C0AE6B8 add Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r4); UPD(0x0C0AE6BCu, 3);  /* 0C0AE6BA mov.w @Rm,Rn */
	r0 += 0x1u;  /* 0C0AE6BC add #imm,Rn */
	W8(r12, r2); UPD(0x0C0AE6C0u, 2);  /* 0C0AE6BE mov.b Rm,@Rn */
	{ W16(r4, r0); /* slot mov.w Rm,@Rn */ UPD(0x0C0AE612u, 3); goto L_0C0AE612; }  /* 0C0AE6C0 bra */
L_0C0AE6D0: BLKS(0x0C0AE6D0u);
	if (T) { UPD(0x0C0AE6E0u, 3); goto L_0C0AE6E0; }  /* 0C0AE6D0 bt */
L_0C0AE6D2: BLKS(0x0C0AE6D2u);
	r3 += r1;  /* 0C0AE6D2 add Rm,Rn */
	UPD(0x0C0AE6D4u, 1);
L_0C0AE6D4: BLKS(0x0C0AE6D4u);
	{ W32(r6, r3); /* slot mov.l Rm,@Rn */ UPD(0x0C0AE5FCu, 3); goto L_0C0AE5FC; }  /* 0C0AE6D4 bra */
L_0C0AE6E0: BLKS(0x0C0AE6E0u);
	{ r3 -= r1; /* slot sub Rm,Rn */ UPD(0x0C0AE6D4u, 3); goto L_0C0AE6D4; }  /* 0C0AE6E0 bra */
}

void f_0C0AE730(sh3_t *c)
{
	LOCALS;
L_0C0AE730: BLKS(0x0C0AE730u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AE732u, 1);  /* 0C0AE730 mov.l Rm,@-Rn */
	r6 = 0x4Cu;  /* 0C0AE732 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AE736u, 2);  /* 0C0AE734 mov.l Rm,@-Rn */
	r8 = 0xFFFFFFFBu;  /* 0C0AE736 mov #imm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AE73Au, 2);  /* 0C0AE738 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0AE73Cu, 1);  /* 0C0AE73A mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0AE73Eu, 1);  /* 0C0AE73C mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0AE740u, 1);  /* 0C0AE73E mov.l Rm,@-Rn */
	r13 = (u32)(s32)(s16)r4;  /* 0C0AE740 exts.w Rm,Rn */
	IF(0x0C0AE742u); MACL = r13 * r6;  /* 0C0AE742 mul.l Rm,Rn */
	r2 = 0xC26CAE0u; UPD(0x0C0AE746u, 4);  /* 0C0AE744 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AE748u, 1);  /* 0C0AE746 mov.l Rm,@-Rn */
	IF(0x0C0AE748u); r6 = MACL;  /* 0C0AE748 sts macl,Rn */
	r9 = 0xC3929E0u; UPD(0x0C0AE74Cu, 2);  /* 0C0AE74A mov.l @(disp,pc),Rn */
	r6 += r2;  /* 0C0AE74C add Rm,Rn */
	r0 = R32(r6 + 0xCu); UPD(0x0C0AE750u, 2);  /* 0C0AE74E mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFF0u;  /* 0C0AE750 add #imm,Rn */
	r4 = R32(r9); UPD(0x0C0AE754u, 2);  /* 0C0AE752 mov.l @Rm,Rn */
	r14 = r15;  /* 0C0AE754 mov Rm,Rn */
	r4 -= r0;  /* 0C0AE756 sub Rm,Rn */
	r10 = R32(r6 + 0x8u); UPD(0x0C0AE75Au, 3);  /* 0C0AE758 mov.l @(disp,Rm),Rn */
	r1 = (r4 >> 16) | (r4 << 16);  /* 0C0AE75A swap.w Rm,Rn */
	r9 = 0xC283CAAu; UPD(0x0C0AE75Eu, 2);  /* 0C0AE75C mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s16)r1;  /* 0C0AE75E exts.w Rm,Rn */
	r3 = (r10 >> 16) | (r10 << 16);  /* 0C0AE760 swap.w Rm,Rn */
	r5 = r0;  /* 0C0AE762 mov Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r9); UPD(0x0C0AE766u, 4);  /* 0C0AE764 mov.w @Rm,Rn */
	r10 = (u32)(s32)(s16)r3;  /* 0C0AE766 exts.w Rm,Rn */
	r0 &= 0x1Fu;  /* 0C0AE768 and #imm,r0 */
	r4 -= r0;  /* 0C0AE76A sub Rm,Rn */
	r11 = r10;  /* 0C0AE76C mov Rm,Rn */
	IF(0x0C0AE76Eu); ARG0(0x4B8Cu); { s32 s_ = (s32)r8; if (s_ >= 0) r11 <<= (s_ & 31); else if ((s_ & 31) == 0) r11 = (u32)((s32)r11 >> 31); else r11 = (u32)((s32)r11 >> ((~s_ & 31) + 1)); }  /* 0C0AE76E shad Rm,Rn */
	IF(0x0C0AE770u); ARG0(0x458Cu); { s32 s_ = (s32)r8; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = (u32)((s32)r5 >> 31); else r5 = (u32)((s32)r5 >> ((~s_ & 31) + 1)); }  /* 0C0AE770 shad Rm,Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C0AE772 exts.w Rm,Rn */
	r4 = R32(r6); UPD(0x0C0AE776u, 8);  /* 0C0AE774 mov.l @Rm,Rn */
	W32(r14, r11); UPD(0x0C0AE778u, 1);  /* 0C0AE776 mov.l Rm,@Rn */
	r6 += 0x3Cu;  /* 0C0AE778 add #imm,Rn */
	W32(r14 + 0x4u, r5); UPD(0x0C0AE77Cu, 2);  /* 0C0AE77A mov.l Rm,@(disp,Rn) */
	r12 = 0xC392AF4u; UPD(0x0C0AE77Eu, 1);  /* 0C0AE77C mov.l @(disp,pc),Rn */
	r8 = 0x2000000u; UPD(0x0C0AE780u, 1);  /* 0C0AE77E mov.l @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r6); r6 += 1; r5 = v_; } UPD(0x0C0AE782u, 1);  /* 0C0AE780 mov.b @Rm+,Rn */
	r4 &= r8;  /* 0C0AE782 and Rm,Rn */
	r3 = 0xC21CCF6u; UPD(0x0C0AE786u, 2);  /* 0C0AE784 mov.l @(disp,pc),Rn */
	r8 = r5 & 0xFF;  /* 0C0AE786 extu.b Rm,Rn */
	r7 = R32(r12); UPD(0x0C0AE78Au, 2);  /* 0C0AE788 mov.l @Rm,Rn */
	r2 = r8;  /* 0C0AE78A mov Rm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r6); r6 += 1; r0 = v_; } UPD(0x0C0AE78Eu, 2);  /* 0C0AE78C mov.b @Rm+,Rn */
	r12 = 0x1Fu;  /* 0C0AE78E mov #imm,Rn */
	r11 = (u32)(s32)(s16)R16(r3); UPD(0x0C0AE792u, 2);  /* 0C0AE790 mov.w @Rm,Rn */
	r10 &= r12;  /* 0C0AE792 and Rm,Rn */
	IF(0x0C0AE794u); r2 <<= 16;  /* 0C0AE794 shll16 Rn */
	r3 = (u32)(s32)(s8)R8(r6); UPD(0x0C0AE798u, 3);  /* 0C0AE796 mov.b @Rm,Rn */
	r11 -= r10;  /* 0C0AE798 sub Rm,Rn */
	r4 |= r2;  /* 0C0AE79A or Rm,Rn */
	r12 = r0 & 0xFF;  /* 0C0AE79C extu.b Rm,Rn */
	IF(0x0C0AE79Eu); r12 <<= 8;  /* 0C0AE79E shll8 Rn */
	r2 = 0xC392D5Cu; UPD(0x0C0AE7A2u, 5);  /* 0C0AE7A0 mov.l @(disp,pc),Rn */
	r10 = (u32)(s32)(s16)r11;  /* 0C0AE7A2 exts.w Rm,Rn */
	r11 = r3 & 0xFF;  /* 0C0AE7A4 extu.b Rm,Rn */
	r4 |= r12;  /* 0C0AE7A6 or Rm,Rn */
	r5 = 0x10000000u; UPD(0x0C0AE7AAu, 4);  /* 0C0AE7A8 mov.l @(disp,pc),Rn */
	r4 |= r11;  /* 0C0AE7AA or Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C0AE7AEu, 2);  /* 0C0AE7AC mov.b @Rm,Rn */
	r4 |= r5; UPD(0x0C0AE7B0u, 1);  /* 0C0AE7AE or Rm,Rn */
	r12 = 0xC283CB2u; UPD(0x0C0AE7B2u, 1);  /* 0C0AE7B0 mov.l @(disp,pc),Rn */
	r5 = r0 & 0xFF;  /* 0C0AE7B2 extu.b Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r12); UPD(0x0C0AE7B6u, 2);  /* 0C0AE7B4 mov.b @Rm,Rn */
	r11 = 0xFFFFFFFFu;  /* 0C0AE7B6 mov #imm,Rn */
	T = (r5 & r5) == 0;  /* 0C0AE7B8 tst Rm,Rn */
	{ u32 t_ = 0u - r11, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r0 = r_; }  /* 0C0AE7BA negc Rm,Rn */
	r12 = r3 & 0xFF;  /* 0C0AE7BC extu.b Rm,Rn */
	T = (r12 & r12) == 0;  /* 0C0AE7BE tst Rm,Rn */
	{ u32 t_ = 0u - r11, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r1 = r_; }  /* 0C0AE7C0 negc Rm,Rn */
	r3 = 0xC392B09u; UPD(0x0C0AE7C4u, 7);  /* 0C0AE7C2 mov.l @(disp,pc),Rn */
	r0 |= r1;  /* 0C0AE7C4 or Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r3); UPD(0x0C0AE7C8u, 2);  /* 0C0AE7C6 mov.b @Rm,Rn */
	r2 = r1 & 0xFF;  /* 0C0AE7C8 extu.b Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C0AE7CA tst Rm,Rn */
	{ u32 t_ = 0u - r11, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r3 = r_; }  /* 0C0AE7CC negc Rm,Rn */
	r0 |= r3;  /* 0C0AE7CE or Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0AE7D0 tst Rm,Rn */
	{ u32 c_ = T; r6 += 0xFFFFFFC2u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AE7DAu, 8); goto L_0C0AE7DA; } goto L_0C0AE7D6; }  /* 0C0AE7D2 bt/s */
L_0C0AE7D6: BLKS(0x0C0AE7D6u);
	r0 = 0x1000000u; UPD(0x0C0AE7D8u, 2);  /* 0C0AE7D6 mov.l @(disp,pc),Rn */
	r4 |= r0;  /* 0C0AE7D8 or Rm,Rn */
	UPD(0x0C0AE7DAu, 1);
L_0C0AE7DA: BLKS(0x0C0AE7DAu);
	IF(0x0C0AE7DAu); r10 <<= 16;  /* 0C0AE7DA shll16 Rn */
	r1 = r10;  /* 0C0AE7DC mov Rm,Rn */
	r1 |= r9;  /* 0C0AE7DE or Rm,Rn */
	r0 = r8;  /* 0C0AE7E0 mov Rm,Rn */
	W32(r14 + 0x8u, r1); UPD(0x0C0AE7E4u, 5);  /* 0C0AE7E2 mov.l Rm,@(disp,Rn) */
	T = r0 == 0x1u;  /* 0C0AE7E4 cmp/eq #imm,r0 */
	{ u32 c_ = T; r11 = R32(r6 + 0x24u); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C0AE8A0u, 4); goto L_0C0AE8A0; } UPD(0x0C0AE7EAu, 1); goto L_0C0AE7EA; }  /* 0C0AE7E6 bt/s */
L_0C0AE7EA: BLKS(0x0C0AE7EAu);
	r6 += 0x3Fu;  /* 0C0AE7EA add #imm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r6); r6 += 1; r0 = v_; } UPD(0x0C0AE7EEu, 2);  /* 0C0AE7EC mov.b @Rm+,Rn */
	r10 = r0 & 0xFF;  /* 0C0AE7EE extu.b Rm,Rn */
	IF(0x0C0AE7F0u); MACL = r10 * r5;  /* 0C0AE7F0 mul.l Rm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r6); r6 += 1; r3 = v_; } UPD(0x0C0AE7F4u, 4);  /* 0C0AE7F2 mov.b @Rm+,Rn */
	IF(0x0C0AE7F4u); r1 = MACL;  /* 0C0AE7F4 sts macl,Rn */
	r9 = r3 & 0xFF;  /* 0C0AE7F6 extu.b Rm,Rn */
	IF(0x0C0AE7F8u); MACL = r9 * r12;  /* 0C0AE7F8 mul.l Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r6); UPD(0x0C0AE7FCu, 5);  /* 0C0AE7FA mov.b @Rm,Rn */
	r1 += r1;  /* 0C0AE7FC add Rm,Rn */
	IF(0x0C0AE7FEu); r8 = MACL;  /* 0C0AE7FE sts macl,Rn */
	r10 = r6 & 0xFF;  /* 0C0AE800 extu.b Rm,Rn */
	IF(0x0C0AE802u); MACL = r10 * r2;  /* 0C0AE802 mul.l Rm,Rn */
	r8 += r8;  /* 0C0AE804 add Rm,Rn */
	IF(0x0C0AE806u); r8 >>= 8;  /* 0C0AE806 shlr8 Rn */
	IF(0x0C0AE808u); r1 >>= 8;  /* 0C0AE808 shlr8 Rn */
	IF(0x0C0AE80Au); r9 = MACL;  /* 0C0AE80A sts macl,Rn */
	r3 = 0xFFFFFFF9u;  /* 0C0AE80C mov #imm,Rn */
	r0 = r8 & 0xFF;  /* 0C0AE80E extu.b Rm,Rn */
	r5 = r1 & 0xFF;  /* 0C0AE810 extu.b Rm,Rn */
	IF(0x0C0AE812u); ARG0(0x493Cu); { s32 s_ = (s32)r3; if (s_ >= 0) r9 <<= (s_ & 31); else if ((s_ & 31) == 0) r9 = (u32)((s32)r9 >> 31); else r9 = (u32)((s32)r9 >> ((~s_ & 31) + 1)); }  /* 0C0AE812 shad Rm,Rn */
	IF(0x0C0AE814u); r5 <<= 16;  /* 0C0AE814 shll16 Rn */
	IF(0x0C0AE816u); r0 <<= 8;  /* 0C0AE816 shll8 Rn */
	r5 += r0;  /* 0C0AE818 add Rm,Rn */
	r8 = r9 & 0xFF;  /* 0C0AE81A extu.b Rm,Rn */
	r5 += r8;  /* 0C0AE81C add Rm,Rn */
	UPD(0x0C0AE81Eu, 18);
L_0C0AE81E: BLKS(0x0C0AE81Eu);
	r10 = 0x4u;  /* 0C0AE81E mov #imm,Rn */
	IF(0x0C0AE820u); ARG0(0x4DADu); { s32 s_ = (s32)r10; if (s_ >= 0) r13 <<= (s_ & 31); else if ((s_ & 31) == 0) r13 = 0; else r13 >>= ((~s_ & 31) + 1); }  /* 0C0AE820 shld Rm,Rn */
	r9 = 0x1F001Fu; UPD(0x0C0AE824u, 3);  /* 0C0AE822 mov.l @(disp,pc),Rn */
	r12 = 0x0u;  /* 0C0AE824 mov #imm,Rn */
	W32(r14 + 0xCu, r13); UPD(0x0C0AE828u, 2);  /* 0C0AE826 mov.l Rm,@(disp,Rn) */
	r8 = 0x8u;  /* 0C0AE828 mov #imm,Rn */
	r10 = 0xC221068u; UPD(0x0C0AE82Cu, 2);  /* 0C0AE82A mov.l @(disp,pc),Rn */
	r13 = 0x0u;  /* 0C0AE82C mov #imm,Rn */
	IF(0x0C0AE82Eu); ;  /* 0C0AE82E nop */
	UPD(0x0C0AE830u, 2);
L_0C0AE830: BLKS(0x0C0AE830u);
	r6 = R32(r14); UPD(0x0C0AE832u, 1);  /* 0C0AE830 mov.l @Rm,Rn */
	r2 = 0xFu;  /* 0C0AE832 mov #imm,Rn */
	r6 += r12;  /* 0C0AE834 add Rm,Rn */
	r0 = R32(r14 + 0xCu); UPD(0x0C0AE838u, 3);  /* 0C0AE836 mov.l @(disp,Rm),Rn */
	r6 &= r2;  /* 0C0AE838 and Rm,Rn */
	r6 += r0;  /* 0C0AE83A add Rm,Rn */
	r1 = 0x4u;  /* 0C0AE83C mov #imm,Rn */
	r2 = R32(r14 + 0x8u); UPD(0x0C0AE840u, 4);  /* 0C0AE83E mov.l @(disp,Rm),Rn */
	IF(0x0C0AE840u); ARG0(0x461Du); { s32 s_ = (s32)r1; if (s_ >= 0) r6 <<= (s_ & 31); else if ((s_ & 31) == 0) r6 = 0; else r6 >>= ((~s_ & 31) + 1); }  /* 0C0AE840 shld Rm,Rn */
	r3 = 0x0u;  /* 0C0AE842 mov #imm,Rn */
	r2 += r13;  /* 0C0AE844 add Rm,Rn */
	IF(0x0C0AE846u); ;  /* 0C0AE846 nop */
	UPD(0x0C0AE848u, 4);
L_0C0AE848: BLKS(0x0C0AE848u);
	r0 = R32(r14 + 0x4u); UPD(0x0C0AE84Au, 1);  /* 0C0AE848 mov.l @(disp,Rm),Rn */
	r0 += r3;  /* 0C0AE84A add Rm,Rn */
	r0 &= 0xFu;  /* 0C0AE84C and #imm,r0 */
	r0 += r6;  /* 0C0AE84E add Rm,Rn */
	IF(0x0C0AE850u); r0 <<= 2;  /* 0C0AE850 shll2 Rn */
	IF(0x0C0AE852u); r1 = R32(r0 + r10); UPD(0x0C0AE854u, 5);  /* 0C0AE852 mov.l @(r0,Rm),Rn */
	W32(r7, r4); UPD(0x0C0AE856u, 1);  /* 0C0AE854 mov.l Rm,@Rn */
	r1 += r11;  /* 0C0AE856 add Rm,Rn */
	r7 += 0x4u;  /* 0C0AE858 add #imm,Rn */
	W32(r7, r1); UPD(0x0C0AE85Cu, 3);  /* 0C0AE85A mov.l Rm,@Rn */
	r0 = r3;  /* 0C0AE85C mov Rm,Rn */
	r7 += 0x4u;  /* 0C0AE85E add #imm,Rn */
	W32(r7, r2); UPD(0x0C0AE862u, 3);  /* 0C0AE860 mov.l Rm,@Rn */
	r0 += 0x1u;  /* 0C0AE862 add #imm,Rn */
	r7 += 0x4u;  /* 0C0AE864 add #imm,Rn */
	W32(r7, r9); UPD(0x0C0AE868u, 3);  /* 0C0AE866 mov.l Rm,@Rn */
	r3 = (u32)(s32)(s16)r0;  /* 0C0AE868 exts.w Rm,Rn */
	r7 += 0x4u;  /* 0C0AE86A add #imm,Rn */
	W32(r7, r5); UPD(0x0C0AE86Eu, 3);  /* 0C0AE86C mov.l Rm,@Rn */
	r2 += 0x20u;  /* 0C0AE86E add #imm,Rn */
	T = (s32)r3 > (s32)r8;  /* 0C0AE870 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r7 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AE848u, 5); goto L_0C0AE848; } goto L_0C0AE876; }  /* 0C0AE872 bf/s */
L_0C0AE876: BLKS(0x0C0AE876u);
	r3 = r12;  /* 0C0AE876 mov Rm,Rn */
	r12 = 0x200000u; UPD(0x0C0AE87Au, 3);  /* 0C0AE878 mov.l @(disp,pc),Rn */
	r3 += 0x1u;  /* 0C0AE87A add #imm,Rn */
	r13 += r12;  /* 0C0AE87C add Rm,Rn */
	r12 = (u32)(s32)(s16)r3;  /* 0C0AE87E exts.w Rm,Rn */
	r6 = 0xAu;  /* 0C0AE880 mov #imm,Rn */
	T = (s32)r12 > (s32)r6;  /* 0C0AE882 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0AE830u, 8); goto L_0C0AE830; }  /* 0C0AE884 bf */
L_0C0AE886: BLKS(0x0C0AE886u);
	r14 += 0x10u;  /* 0C0AE886 add #imm,Rn */
	r13 = 0xC392AF4u; UPD(0x0C0AE88Au, 2);  /* 0C0AE888 mov.l @(disp,pc),Rn */
	W32(r13, r7); UPD(0x0C0AE88Cu, 1);  /* 0C0AE88A mov.l Rm,@Rn */
	r15 = r14;  /* 0C0AE88C mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AE890u, 2);  /* 0C0AE88E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0AE892u, 1);  /* 0C0AE890 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0AE894u, 1);  /* 0C0AE892 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0AE896u, 1);  /* 0C0AE894 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AE898u, 1);  /* 0C0AE896 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AE89Au, 1);  /* 0C0AE898 mov.l @Rm+,Rn */
	IF(0x0C0AE89Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AE89A rts */
L_0C0AE8A0: BLKS(0x0C0AE8A0u);
	r6 += 0x3Fu;  /* 0C0AE8A0 add #imm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r6); r6 += 1; r3 = v_; } UPD(0x0C0AE8A4u, 2);  /* 0C0AE8A2 mov.b @Rm+,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r6); r6 += 1; r9 = v_; } UPD(0x0C0AE8A6u, 1);  /* 0C0AE8A4 mov.b @Rm+,Rn */
	r5 = r3 & 0xFF;  /* 0C0AE8A6 extu.b Rm,Rn */
	r8 = r9 & 0xFF;  /* 0C0AE8A8 extu.b Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r6); UPD(0x0C0AE8ACu, 3);  /* 0C0AE8AA mov.b @Rm,Rn */
	IF(0x0C0AE8ACu); r5 <<= 16;  /* 0C0AE8AC shll16 Rn */
	IF(0x0C0AE8AEu); r8 <<= 8;  /* 0C0AE8AE shll8 Rn */
	r5 |= r8;  /* 0C0AE8B0 or Rm,Rn */
	r2 = r6 & 0xFF;  /* 0C0AE8B2 extu.b Rm,Rn */
	{ r5 |= r2; /* slot or Rm,Rn */ UPD(0x0C0AE81Eu, 7); goto L_0C0AE81E; }  /* 0C0AE8B4 bra */
}

/* FUN_0c0ae8f0 */
void f_0C0AE8F0(sh3_t *c)
{
	LOCALS;
L_0C0AE8F0: BLKS(0x0C0AE8F0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AE8F2u, 1);  /* 0C0AE8F0 mov.l Rm,@-Rn */
	r2 = 0x4Cu;  /* 0C0AE8F2 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AE8F6u, 2);  /* 0C0AE8F4 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AE8F8u, 1);  /* 0C0AE8F6 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C0AE8F8 exts.w Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0AE8FCu, 2);  /* 0C0AE8FA mov.l Rm,@-Rn */
	IF(0x0C0AE8FCu); MACL = r9 * r2;  /* 0C0AE8FC mul.l Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0AE900u, 3);  /* 0C0AE8FE mov.l Rm,@-Rn */
	r4 = 0xFFFFFFFBu;  /* 0C0AE900 mov #imm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0AE904u, 2);  /* 0C0AE902 mov.l Rm,@-Rn */
	r6 = 0xC392AF4u; UPD(0x0C0AE906u, 1);  /* 0C0AE904 mov.l @(disp,pc),Rn */
	IF(0x0C0AE906u); r13 = MACL;  /* 0C0AE906 sts macl,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AE90Au, 2);  /* 0C0AE908 mov.l Rm,@-Rn */
	r5 = R32(r6); UPD(0x0C0AE90Cu, 1);  /* 0C0AE90A mov.l @Rm,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0AE90C add #imm,Rn */
	r6 = 0xC26CAE0u; UPD(0x0C0AE910u, 2);  /* 0C0AE90E mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0AE910 mov Rm,Rn */
	r13 += r6;  /* 0C0AE912 add Rm,Rn */
	r7 = R32(r13 + 0x8u); UPD(0x0C0AE916u, 3);  /* 0C0AE914 mov.l @(disp,Rm),Rn */
	r0 = 0xC3929E0u; UPD(0x0C0AE918u, 1);  /* 0C0AE916 mov.l @(disp,pc),Rn */
	r1 = (r7 >> 16) | (r7 << 16);  /* 0C0AE918 swap.w Rm,Rn */
	r12 = R32(r13 + 0xCu); UPD(0x0C0AE91Cu, 2);  /* 0C0AE91A mov.l @(disp,Rm),Rn */
	r10 = (u32)(s32)(s16)r1;  /* 0C0AE91C exts.w Rm,Rn */
	r11 = R32(r0); UPD(0x0C0AE920u, 2);  /* 0C0AE91E mov.l @Rm,Rn */
	r3 = r10;  /* 0C0AE920 mov Rm,Rn */
	IF(0x0C0AE922u); ARG0(0x434Cu); { s32 s_ = (s32)r4; if (s_ >= 0) r3 <<= (s_ & 31); else if ((s_ & 31) == 0) r3 = (u32)((s32)r3 >> 31); else r3 = (u32)((s32)r3 >> ((~s_ & 31) + 1)); }  /* 0C0AE922 shad Rm,Rn */
	r11 -= r12;  /* 0C0AE924 sub Rm,Rn */
	r8 = (r11 >> 16) | (r11 << 16);  /* 0C0AE926 swap.w Rm,Rn */
	r0 = (u32)(s32)(s16)r8;  /* 0C0AE928 exts.w Rm,Rn */
	r7 = 0x1Fu;  /* 0C0AE92A mov #imm,Rn */
	W32(r14, r3); UPD(0x0C0AE92Eu, 7);  /* 0C0AE92C mov.l Rm,@Rn */
	r10 &= r7;  /* 0C0AE92E and Rm,Rn */
	r8 = r0;  /* 0C0AE930 mov Rm,Rn */
	r0 &= 0x1Fu;  /* 0C0AE932 and #imm,r0 */
	r7 += 0x69u;  /* 0C0AE934 add #imm,Rn */
	r1 = 0xC0000001u; UPD(0x0C0AE938u, 5);  /* 0C0AE936 mov.l @(disp,pc),Rn */
	r7 -= r0;  /* 0C0AE938 sub Rm,Rn */
	r3 = 0xC286290u; UPD(0x0C0AE93Cu, 2);  /* 0C0AE93A mov.l @(disp,pc),Rn */
	IF(0x0C0AE93Cu); ARG0(0x484Cu); { s32 s_ = (s32)r4; if (s_ >= 0) r8 <<= (s_ & 31); else if ((s_ & 31) == 0) r8 = (u32)((s32)r8 >> 31); else r8 = (u32)((s32)r8 >> ((~s_ & 31) + 1)); }  /* 0C0AE93C shad Rm,Rn */
	r0 = 0xC0000000u; UPD(0x0C0AE940u, 2);  /* 0C0AE93E mov.l @(disp,pc),Rn */
	r13 = r9;  /* 0C0AE940 mov Rm,Rn */
	W32(r3, r1); UPD(0x0C0AE944u, 2);  /* 0C0AE942 mov.l Rm,@Rn */
	r11 = 0x0u;  /* 0C0AE944 mov #imm,Rn */
	r4 = 0x3DBu; UPD(0x0C0AE948u, 2);  /* 0C0AE946 mov.w @(disp,pc),Rn */
	r12 = r6;  /* 0C0AE948 mov Rm,Rn */
	W32(r5, r0); UPD(0x0C0AE94Cu, 2);  /* 0C0AE94A mov.l Rm,@Rn */
	r4 -= r10;  /* 0C0AE94C sub Rm,Rn */
	r0 = 0x4u;  /* 0C0AE94E mov #imm,Rn */
	r10 = 0xC221068u; UPD(0x0C0AE952u, 3);  /* 0C0AE950 mov.l @(disp,pc),Rn */
	IF(0x0C0AE952u); ARG0(0x4D0Du); { s32 s_ = (s32)r0; if (s_ >= 0) r13 <<= (s_ & 31); else if ((s_ & 31) == 0) r13 = 0; else r13 >>= ((~s_ & 31) + 1); }  /* 0C0AE952 shld Rm,Rn */
	W32(r14 + 0x4u, r7); UPD(0x0C0AE956u, 2);  /* 0C0AE954 mov.l Rm,@(disp,Rn) */
	r5 += 0x4u;  /* 0C0AE956 add #imm,Rn */
	IF(0x0C0AE958u); r4 <<= 16;  /* 0C0AE958 shll16 Rn */
	IF(0x0C0AE95Au); ;  /* 0C0AE95A nop */
	UPD(0x0C0AE95Cu, 3);
L_0C0AE95C: BLKS(0x0C0AE95Cu);
	r7 = R32(r14); UPD(0x0C0AE95Eu, 1);  /* 0C0AE95C mov.l @Rm,Rn */
	r3 = 0xFu;  /* 0C0AE95E mov #imm,Rn */
	r7 += r11;  /* 0C0AE960 add Rm,Rn */
	r7 &= r3;  /* 0C0AE962 and Rm,Rn */
	r7 += r13;  /* 0C0AE964 add Rm,Rn */
	r0 = 0x4u;  /* 0C0AE966 mov #imm,Rn */
	r3 = R32(r14 + 0x4u); UPD(0x0C0AE96Au, 6);  /* 0C0AE968 mov.l @(disp,Rm),Rn */
	IF(0x0C0AE96Au); ARG0(0x470Du); { s32 s_ = (s32)r0; if (s_ >= 0) r7 <<= (s_ & 31); else if ((s_ & 31) == 0) r7 = 0; else r7 >>= ((~s_ & 31) + 1); }  /* 0C0AE96A shld Rm,Rn */
	r6 = 0x0u;  /* 0C0AE96C mov #imm,Rn */
	IF(0x0C0AE96Eu); ;  /* 0C0AE96E nop */
	UPD(0x0C0AE970u, 3);
L_0C0AE970: BLKS(0x0C0AE970u);
	r0 = r8;  /* 0C0AE970 mov Rm,Rn */
	r0 += r6;  /* 0C0AE972 add Rm,Rn */
	r0 &= 0xFu;  /* 0C0AE974 and #imm,r0 */
	r0 += r7;  /* 0C0AE976 add Rm,Rn */
	IF(0x0C0AE978u); r0 <<= 2;  /* 0C0AE978 shll2 Rn */
	IF(0x0C0AE97Au); r2 = R32(r0 + r10); UPD(0x0C0AE97Cu, 6);  /* 0C0AE97A mov.l @(r0,Rm),Rn */
	T = (r2 & r2) == 0;  /* 0C0AE97C tst Rm,Rn */
	if (T) { UPD(0x0C0AE9AAu, 4); goto L_0C0AE9AA; }  /* 0C0AE97E bt */
L_0C0AE980: BLKS(0x0C0AE980u);
	r0 = 0x11000000u; UPD(0x0C0AE982u, 1);  /* 0C0AE980 mov.l @(disp,pc),Rn */
	W32(r5, r0); UPD(0x0C0AE984u, 1);  /* 0C0AE982 mov.l Rm,@Rn */
	r0 = 0x4Cu;  /* 0C0AE984 mov #imm,Rn */
	IF(0x0C0AE986u); MACL = r9 * r0;  /* 0C0AE986 mul.l Rm,Rn */
	r5 += 0x4u;  /* 0C0AE988 add #imm,Rn */
	IF(0x0C0AE98Au); r1 = MACL;  /* 0C0AE98A sts macl,Rn */
	r1 += r12;  /* 0C0AE98C add Rm,Rn */
	r0 = R32(r1 + 0x24u); UPD(0x0C0AE990u, 7);  /* 0C0AE98E mov.l @(disp,Rm),Rn */
	r2 += r0;  /* 0C0AE990 add Rm,Rn */
	W32(r5, r2); UPD(0x0C0AE994u, 2);  /* 0C0AE992 mov.l Rm,@Rn */
	r2 = r4;  /* 0C0AE994 mov Rm,Rn */
	r5 += 0x4u;  /* 0C0AE996 add #imm,Rn */
	r2 |= r3;  /* 0C0AE998 or Rm,Rn */
	W32(r5, r2); UPD(0x0C0AE99Cu, 4);  /* 0C0AE99A mov.l Rm,@Rn */
	r0 = 0x1F001Fu; UPD(0x0C0AE99Eu, 1);  /* 0C0AE99C mov.l @(disp,pc),Rn */
	r5 += 0x4u;  /* 0C0AE99E add #imm,Rn */
	W32(r5, r0); UPD(0x0C0AE9A2u, 2);  /* 0C0AE9A0 mov.l Rm,@Rn */
	r2 = 0x808080u; UPD(0x0C0AE9A4u, 1);  /* 0C0AE9A2 mov.l @(disp,pc),Rn */
	r5 += 0x4u;  /* 0C0AE9A4 add #imm,Rn */
	W32(r5, r2); UPD(0x0C0AE9A8u, 2);  /* 0C0AE9A6 mov.l Rm,@Rn */
	r5 += 0x4u;  /* 0C0AE9A8 add #imm,Rn */
	UPD(0x0C0AE9AAu, 1);
L_0C0AE9AA: BLKS(0x0C0AE9AAu);
	r6 += 0x1u;  /* 0C0AE9AA add #imm,Rn */
	r2 = 0x8u;  /* 0C0AE9AC mov #imm,Rn */
	T = (s32)r6 > (s32)r2;  /* 0C0AE9AE cmp/gt Rm,Rn */
	{ u32 c_ = !T; r3 += 0x20u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AE970u, 6); goto L_0C0AE970; } goto L_0C0AE9B4; }  /* 0C0AE9B0 bf/s */
L_0C0AE9B4: BLKS(0x0C0AE9B4u);
	r6 = 0x200000u; UPD(0x0C0AE9B6u, 2);  /* 0C0AE9B4 mov.l @(disp,pc),Rn */
	r11 += 0x1u;  /* 0C0AE9B6 add #imm,Rn */
	r7 = 0xCu;  /* 0C0AE9B8 mov #imm,Rn */
	T = (s32)r11 > (s32)r7;  /* 0C0AE9BA cmp/gt Rm,Rn */
	{ u32 c_ = !T; r4 += r6; /* slot add Rm,Rn */ if (c_) { UPD(0x0C0AE95Cu, 6); goto L_0C0AE95C; } goto L_0C0AE9C0; }  /* 0C0AE9BC bf/s */
L_0C0AE9C0: BLKS(0x0C0AE9C0u);
	r10 = 0xC0000001u; UPD(0x0C0AE9C2u, 2);  /* 0C0AE9C0 mov.l @(disp,pc),Rn */
	r14 += 0x8u;  /* 0C0AE9C2 add #imm,Rn */
	W32(r5, r10); UPD(0x0C0AE9C6u, 2);  /* 0C0AE9C4 mov.l Rm,@Rn */
	r9 = 0xC392AF4u; UPD(0x0C0AE9C8u, 1);  /* 0C0AE9C6 mov.l @(disp,pc),Rn */
	r5 += 0x4u;  /* 0C0AE9C8 add #imm,Rn */
	W32(r9, r5); UPD(0x0C0AE9CCu, 2);  /* 0C0AE9CA mov.l Rm,@Rn */
	r15 = r14;  /* 0C0AE9CC mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AE9D0u, 2);  /* 0C0AE9CE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0AE9D2u, 1);  /* 0C0AE9D0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0AE9D4u, 1);  /* 0C0AE9D2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0AE9D6u, 1);  /* 0C0AE9D4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AE9D8u, 1);  /* 0C0AE9D6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AE9DAu, 1);  /* 0C0AE9D8 mov.l @Rm+,Rn */
	IF(0x0C0AE9DAu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AE9DA rts */
}

/* FUN_0c0aea10 */
void f_0C0AEA10(sh3_t *c)
{
	LOCALS;
L_0C0AEA10: BLKS(0x0C0AEA10u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AEA12u, 1);  /* 0C0AEA10 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AEA14u, 1);  /* 0C0AEA12 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C0AEA14 exts.w Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AEA18u, 2);  /* 0C0AEA16 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0AEA1Au, 1);  /* 0C0AEA18 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0AEA1Cu, 1);  /* 0C0AEA1A mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0AEA1Eu, 1);  /* 0C0AEA1C mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AEA20u, 1);  /* 0C0AEA1E mov.l Rm,@-Rn */
	r0 = 0xC220C2Cu; UPD(0x0C0AEA22u, 1);  /* 0C0AEA20 mov.l @(disp,pc),Rn */
	IF(0x0C0AEA22u); r15 -= 4; W32(r15, PR); UPD(0x0C0AEA24u, 1);  /* 0C0AEA22 sts.l pr,@-Rn */
	r2 = R32(r0); UPD(0x0C0AEA26u, 1);  /* 0C0AEA24 mov.l @Rm,Rn */
	IF(0x0C0AEA26u); T = (s32)r2 >= 0;  /* 0C0AEA26 cmp/pz Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0AEA30u, 4); goto L_0C0AEA30; } goto L_0C0AEA2C; }  /* 0C0AEA28 bt/s */
L_0C0AEA2C: BLKS(0x0C0AEA2Cu);
	{ IF(0x0C0AEA2Eu); ; /* slot nop */ UPD(0x0C0AEBE0u, 4); goto L_0C0AEBE0; }  /* 0C0AEA2C bra */
L_0C0AEA30: BLKS(0x0C0AEA30u);
	r4 = 0x4Cu;  /* 0C0AEA30 mov #imm,Rn */
	IF(0x0C0AEA32u); MACL = r8 * r4;  /* 0C0AEA32 mul.l Rm,Rn */
	r3 = r2;  /* 0C0AEA34 mov Rm,Rn */
	r2 = 0xC26CAE0u; UPD(0x0C0AEA38u, 5);  /* 0C0AEA36 mov.l @(disp,pc),Rn */
	IF(0x0C0AEA38u); r7 = MACL;  /* 0C0AEA38 sts macl,Rn */
	r7 += r2;  /* 0C0AEA3A add Rm,Rn */
	r6 = 0xFFFFFFF8u;  /* 0C0AEA3C mov #imm,Rn */
	r2 = R32(r7 + 0x10u); UPD(0x0C0AEA40u, 4);  /* 0C0AEA3E mov.l @(disp,Rm),Rn */
	IF(0x0C0AEA40u); T = (s32)r2 >= 0;  /* 0C0AEA40 cmp/pz Rn */
	{ u32 c_ = T; IF(0x0C0AEA44u); ARG0(0x436Cu); { s32 s_ = (s32)r6; if (s_ >= 0) r3 <<= (s_ & 31); else if ((s_ & 31) == 0) r3 = (u32)((s32)r3 >> 31); else r3 = (u32)((s32)r3 >> ((~s_ & 31) + 1)); } /* slot shad Rm,Rn */ if (c_) { UPD(0x0C0AEA4Au, 4); goto L_0C0AEA4A; } goto L_0C0AEA46; }  /* 0C0AEA42 bt/s */
L_0C0AEA46: BLKS(0x0C0AEA46u);
	{ IF(0x0C0AEA48u); ; /* slot nop */ UPD(0x0C0AEBD0u, 4); goto L_0C0AEBD0; }  /* 0C0AEA46 bra */
L_0C0AEA4A: BLKS(0x0C0AEA4Au);
	IF(0x0C0AEA4Au); ARG0(0x426Cu); { s32 s_ = (s32)r6; if (s_ >= 0) r2 <<= (s_ & 31); else if ((s_ & 31) == 0) r2 = (u32)((s32)r2 >> 31); else r2 = (u32)((s32)r2 >> ((~s_ & 31) + 1)); }  /* 0C0AEA4A shad Rm,Rn */
	IF(0x0C0AEA4Cu); MACL = r3 * r2;  /* 0C0AEA4C mul.l Rm,Rn */
	r6 = R32(r7 + 0x8u); UPD(0x0C0AEA50u, 4);  /* 0C0AEA4E mov.l @(disp,Rm),Rn */
	IF(0x0C0AEA50u); r10 = MACL;  /* 0C0AEA50 sts macl,Rn */
	r6 += r10;  /* 0C0AEA52 add Rm,Rn */
	W32(r7 + 0x8u, r6); UPD(0x0C0AEA56u, 3);  /* 0C0AEA54 mov.l Rm,@(disp,Rn) */
	r2 = 0xC3929E0u; UPD(0x0C0AEA58u, 1);  /* 0C0AEA56 mov.l @(disp,pc),Rn */
	r0 = 0xFFFFFE78u; UPD(0x0C0AEA5Au, 1);  /* 0C0AEA58 mov.w @(disp,pc),Rn */
	r12 = (u32)(s32)(s16)R16(r2); UPD(0x0C0AEA5Cu, 1);  /* 0C0AEA5A mov.w @Rm,Rn */
	r13 = R32(r7 + 0x14u); UPD(0x0C0AEA5Eu, 1);  /* 0C0AEA5C mov.l @(disp,Rm),Rn */
	r12 += r0;  /* 0C0AEA5E add Rm,Rn */
	r11 = 0x10000u; UPD(0x0C0AEA62u, 2);  /* 0C0AEA60 mov.l @(disp,pc),Rn */
	r11 -= r13;  /* 0C0AEA62 sub Rm,Rn */
	IF(0x0C0AEA64u); MACL = r12 * r11;  /* 0C0AEA64 mul.l Rm,Rn */
	r9 = 0x1600000u; UPD(0x0C0AEA68u, 4);  /* 0C0AEA66 mov.l @(disp,pc),Rn */
	IF(0x0C0AEA68u); r1 = MACL;  /* 0C0AEA68 sts macl,Rn */
	r9 += r1;  /* 0C0AEA6A add Rm,Rn */
	r3 = R32(r7 + 0x20u); UPD(0x0C0AEA6Eu, 3);  /* 0C0AEA6C mov.l @(disp,Rm),Rn */
	T = (s32)r6 > (s32)r3;  /* 0C0AEA6E cmp/gt Rm,Rn */
	{ u32 c_ = !T; W32(r7 + 0xCu, r9); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0AEA8Cu, 4); goto L_0C0AEA8C; } UPD(0x0C0AEA74u, 1); goto L_0C0AEA74; }  /* 0C0AEA70 bf/s */
L_0C0AEA74: BLKS(0x0C0AEA74u);
	r2 = R32(r7); UPD(0x0C0AEA76u, 1);  /* 0C0AEA74 mov.l @Rm,Rn */
	r4 = 0x10000000u; UPD(0x0C0AEA78u, 1);  /* 0C0AEA76 mov.l @(disp,pc),Rn */
	T = (r2 & r4) == 0;  /* 0C0AEA78 tst Rm,Rn */
	if (!T) { UPD(0x0C0AEA80u, 4); goto L_0C0AEA80; }  /* 0C0AEA7A bf */
L_0C0AEA7C: BLKS(0x0C0AEA7Cu);
	{ IF(0x0C0AEA7Eu); ; /* slot nop */ UPD(0x0C0AEBC0u, 3); goto L_0C0AEBC0; }  /* 0C0AEA7C bra */
L_0C0AEA80: BLKS(0x0C0AEA80u);
	r5 = 0xF6000000u; UPD(0x0C0AEA82u, 1);  /* 0C0AEA80 mov.l @(disp,pc),Rn */
	r6 += r5;  /* 0C0AEA82 add Rm,Rn */
	W32(r7 + 0x8u, r6); UPD(0x0C0AEA86u, 2);  /* 0C0AEA84 mov.l Rm,@(disp,Rn) */
	r6 = 0x8000000u; UPD(0x0C0AEA88u, 1);  /* 0C0AEA86 mov.l @(disp,pc),Rn */
	r2 |= r6;  /* 0C0AEA88 or Rm,Rn */
	W32(r7, r2); UPD(0x0C0AEA8Cu, 2);  /* 0C0AEA8A mov.l Rm,@Rn */
L_0C0AEA8C: BLKS(0x0C0AEA8Cu);
	r0 = 0xC0AEC40u; UPD(0x0C0AEA8Eu, 1);  /* 0C0AEA8C mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C0AEA8E mov Rm,Rn */
	IF(0x0C0AEA90u); { u32 t_ = r0; PR = 0x0C0AEA94u; r13 = 0x4Cu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0AEC40, 0x0C0AEC40u, 0x0C0AEA94u); }  /* 0C0AEA90 jsr @Rn */
L_0C0AEA94: BLKS(0x0C0AEA94u);
	IF(0x0C0AEA94u); MACL = r8 * r13;  /* 0C0AEA94 mul.l Rm,Rn */
	r9 = 0xC26CAE0u; UPD(0x0C0AEA98u, 3);  /* 0C0AEA96 mov.l @(disp,pc),Rn */
	r6 = 0x0u;  /* 0C0AEA98 mov #imm,Rn */
	IF(0x0C0AEA9Au); r11 = MACL;  /* 0C0AEA9A sts macl,Rn */
	r11 += r9;  /* 0C0AEA9C add Rm,Rn */
	r12 = R32(r11 + 0xCu); UPD(0x0C0AEAA0u, 4);  /* 0C0AEA9E mov.l @(disp,Rm),Rn */
	r5 = 0x0u;  /* 0C0AEAA0 mov #imm,Rn */
	r3 = R32(r11 + 0x1Cu); UPD(0x0C0AEAA4u, 2);  /* 0C0AEAA2 mov.l @(disp,Rm),Rn */
	r9 = r12;  /* 0C0AEAA4 mov Rm,Rn */
	W32(r11 + 0x1Cu, r12); UPD(0x0C0AEAA8u, 2);  /* 0C0AEAA6 mov.l Rm,@(disp,Rn) */
	r9 -= r3;  /* 0C0AEAA8 sub Rm,Rn */
	r11 = 0xC26CD40u; UPD(0x0C0AEAACu, 2);  /* 0C0AEAAA mov.l @(disp,pc),Rn */
	r4 = 0xBFu; UPD(0x0C0AEAAEu, 1);  /* 0C0AEAAC mov.w @(disp,pc),Rn */
	IF(0x0C0AEAAEu); ;  /* 0C0AEAAE nop */
	UPD(0x0C0AEAB0u, 1);
L_0C0AEAB0: BLKS(0x0C0AEAB0u);
	r3 = r5;  /* 0C0AEAB0 mov Rm,Rn */
	r3 += r11;  /* 0C0AEAB2 add Rm,Rn */
	r7 = R32(r3); UPD(0x0C0AEAB6u, 3);  /* 0C0AEAB4 mov.l @Rm,Rn */
	r0 = 0x1u;  /* 0C0AEAB6 mov #imm,Rn */
	r12 = r7;  /* 0C0AEAB8 mov Rm,Rn */
	IF(0x0C0AEABAu); r12 >>= 2;  /* 0C0AEABA shlr2 Rn */
	IF(0x0C0AEABCu); r12 >>= 2;  /* 0C0AEABC shlr2 Rn */
	r12 &= r0;  /* 0C0AEABE and Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0AEAC2u, 6);  /* 0C0AEAC0 mov.w @(disp,pc),Rn */
	IF(0x0C0AEAC2u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0AEAC4u, 1);  /* 0C0AEAC2 mov.b @(r0,Rm),Rn */
	r13 = r2 & 0xFF;  /* 0C0AEAC4 extu.b Rm,Rn */
	T = r13 == r8;  /* 0C0AEAC6 cmp/eq Rm,Rn */
	IF(0x0C0AEAC8u); r2 = T;  /* 0C0AEAC8 movt Rn */
	r12 &= r2;  /* 0C0AEACA and Rm,Rn */
	T = (r12 & r12) == 0;  /* 0C0AEACC tst Rm,Rn */
	if (T) { UPD(0x0C0AEAF6u, 8); goto L_0C0AEAF6; }  /* 0C0AEACE bt */
L_0C0AEAD0: BLKS(0x0C0AEAD0u);
	r0 = R32(r3 + 0x28u); UPD(0x0C0AEAD2u, 1);  /* 0C0AEAD0 mov.l @(disp,Rm),Rn */
	r2 = 0xFFFFFFF1u;  /* 0C0AEAD2 mov #imm,Rn */
	r0 += r9;  /* 0C0AEAD4 add Rm,Rn */
	r12 = R32(r3 + 0x24u); UPD(0x0C0AEAD8u, 3);  /* 0C0AEAD6 mov.l @(disp,Rm),Rn */
	IF(0x0C0AEAD8u); ARG0(0x472Cu); { s32 s_ = (s32)r2; if (s_ >= 0) r7 <<= (s_ & 31); else if ((s_ & 31) == 0) r7 = (u32)((s32)r7 >> 31); else r7 = (u32)((s32)r7 >> ((~s_ & 31) + 1)); }  /* 0C0AEAD8 shad Rm,Rn */
	W32(r3 + 0x28u, r0); UPD(0x0C0AEADCu, 2);  /* 0C0AEADA mov.l Rm,@(disp,Rn) */
	r12 -= r10;  /* 0C0AEADC sub Rm,Rn */
	r13 = 0xFFA00000u; UPD(0x0C0AEAE0u, 2);  /* 0C0AEADE mov.l @(disp,pc),Rn */
	r0 = r7;  /* 0C0AEAE0 mov Rm,Rn */
	T = (s32)r13 > (s32)r12;  /* 0C0AEAE2 cmp/gt Rm,Rn */
	r0 ^= 0x1u;  /* 0C0AEAE4 xor #imm,r0 */
	IF(0x0C0AEAE6u); r7 = T;  /* 0C0AEAE6 movt Rn */
	r0 &= 0x1u;  /* 0C0AEAE8 and #imm,r0 */
	r0 &= r7;  /* 0C0AEAEA and Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0AEAEC tst Rm,Rn */
	{ u32 c_ = T; W32(r3 + 0x24u, r12); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0AEAF6u, 10); goto L_0C0AEAF6; } UPD(0x0C0AEAF2u, 1); goto L_0C0AEAF2; }  /* 0C0AEAEE bt/s */
L_0C0AEAF2: BLKS(0x0C0AEAF2u);
	r7 = 0x0u;  /* 0C0AEAF2 mov #imm,Rn */
	W32(r3, r7); UPD(0x0C0AEAF6u, 2);  /* 0C0AEAF4 mov.l Rm,@Rn */
L_0C0AEAF6: BLKS(0x0C0AEAF6u);
	r3 = r6;  /* 0C0AEAF6 mov Rm,Rn */
	r6 = 0xB4u; UPD(0x0C0AEAFAu, 2);  /* 0C0AEAF8 mov.w @(disp,pc),Rn */
	r3 += 0x1u;  /* 0C0AEAFA add #imm,Rn */
	r5 += r6;  /* 0C0AEAFC add Rm,Rn */
	r6 = (u32)(s32)(s16)r3;  /* 0C0AEAFE exts.w Rm,Rn */
	T = (s32)r6 > (s32)r4;  /* 0C0AEB00 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0AEAB0u, 7); goto L_0C0AEAB0; }  /* 0C0AEB02 bf */
L_0C0AEB04: BLKS(0x0C0AEB04u);
	r6 = 0x0u;  /* 0C0AEB04 mov #imm,Rn */
	r4 = 0xC275E1Cu; UPD(0x0C0AEB08u, 2);  /* 0C0AEB06 mov.l @(disp,pc),Rn */
	r5 = 0x23Fu; UPD(0x0C0AEB0Au, 1);  /* 0C0AEB08 mov.w @(disp,pc),Rn */
	r7 = 0x0u;  /* 0C0AEB0A mov #imm,Rn */
	UPD(0x0C0AEB0Cu, 1);
L_0C0AEB0C: BLKS(0x0C0AEB0Cu);
	r3 = r7;  /* 0C0AEB0C mov Rm,Rn */
	r3 += r4;  /* 0C0AEB0E add Rm,Rn */
	r0 = R32(r3); UPD(0x0C0AEB12u, 3);  /* 0C0AEB10 mov.l @Rm,Rn */
	r3 += 0x34u;  /* 0C0AEB12 add #imm,Rn */
	r13 = (u32)(s32)(s8)R8(r3); UPD(0x0C0AEB16u, 2);  /* 0C0AEB14 mov.b @Rm,Rn */
	IF(0x0C0AEB16u); r0 >>= 2;  /* 0C0AEB16 shlr2 Rn */
	r12 = r13 & 0xFF;  /* 0C0AEB18 extu.b Rm,Rn */
	T = r12 == r8;  /* 0C0AEB1A cmp/eq Rm,Rn */
	IF(0x0C0AEB1Cu); r0 >>= 2;  /* 0C0AEB1C shlr2 Rn */
	IF(0x0C0AEB1Eu); r11 = T;  /* 0C0AEB1E movt Rn */
	r0 &= 0x1u;  /* 0C0AEB20 and #imm,r0 */
	r0 &= r11;  /* 0C0AEB22 and Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0AEB24 tst Rm,Rn */
	{ u32 c_ = T; r3 += 0xFFFFFFCCu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AEB40u, 11); goto L_0C0AEB40; } goto L_0C0AEB2A; }  /* 0C0AEB26 bt/s */
L_0C0AEB2A: BLKS(0x0C0AEB2Au);
	r11 = R32(r3 + 0x10u); UPD(0x0C0AEB2Cu, 2);  /* 0C0AEB2A mov.l @(disp,Rm),Rn */
	r1 = R32(r3 + 0x14u); UPD(0x0C0AEB2Eu, 1);  /* 0C0AEB2C mov.l @(disp,Rm),Rn */
	r11 -= r10;  /* 0C0AEB2E sub Rm,Rn */
	r1 += r9;  /* 0C0AEB30 add Rm,Rn */
	r0 = 0xFFC00000u; UPD(0x0C0AEB34u, 3);  /* 0C0AEB32 mov.l @(disp,pc),Rn */
	W32(r3 + 0x10u, r11); UPD(0x0C0AEB36u, 1);  /* 0C0AEB34 mov.l Rm,@(disp,Rn) */
	T = (s32)r11 >= (s32)r0;  /* 0C0AEB36 cmp/ge Rm,Rn */
	{ u32 c_ = T; W32(r3 + 0x14u, r1); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0AEB40u, 4); goto L_0C0AEB40; } UPD(0x0C0AEB3Cu, 1); goto L_0C0AEB3C; }  /* 0C0AEB38 bt/s */
L_0C0AEB3C: BLKS(0x0C0AEB3Cu);
	r2 = 0x0u;  /* 0C0AEB3C mov #imm,Rn */
	W32(r3, r2); UPD(0x0C0AEB40u, 2);  /* 0C0AEB3E mov.l Rm,@Rn */
L_0C0AEB40: BLKS(0x0C0AEB40u);
	r3 = r6;  /* 0C0AEB40 mov Rm,Rn */
	r3 += 0x1u;  /* 0C0AEB42 add #imm,Rn */
	r6 = (u32)(s32)(s16)r3;  /* 0C0AEB44 exts.w Rm,Rn */
	T = (s32)r6 > (s32)r5;  /* 0C0AEB46 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r7 += 0x38u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AEB0Cu, 7); goto L_0C0AEB0C; } goto L_0C0AEB4C; }  /* 0C0AEB48 bf/s */
L_0C0AEB4C: BLKS(0x0C0AEB4Cu);
	r11 = 0x100u; UPD(0x0C0AEB4Eu, 2);  /* 0C0AEB4C mov.w @(disp,pc),Rn */
	r13 = 0xC38C064u; UPD(0x0C0AEB50u, 1);  /* 0C0AEB4E mov.l @(disp,pc),Rn */
	r12 = 0x5400u; UPD(0x0C0AEB52u, 1);  /* 0C0AEB50 mov.w @(disp,pc),Rn */
L_0C0AEB52: BLKS(0x0C0AEB52u);
	r3 = r12;  /* 0C0AEB52 mov Rm,Rn */
	r3 += r13;  /* 0C0AEB54 add Rm,Rn */
	r0 = R32(r3); UPD(0x0C0AEB58u, 3);  /* 0C0AEB56 mov.l @Rm,Rn */
	r3 += 0x48u;  /* 0C0AEB58 add #imm,Rn */
	r7 = (u32)(s32)(s8)R8(r3); UPD(0x0C0AEB5Cu, 2);  /* 0C0AEB5A mov.b @Rm,Rn */
	IF(0x0C0AEB5Cu); r0 >>= 2;  /* 0C0AEB5C shlr2 Rn */
	r5 = r7 & 0xFF;  /* 0C0AEB5E extu.b Rm,Rn */
	T = r5 == r8;  /* 0C0AEB60 cmp/eq Rm,Rn */
	IF(0x0C0AEB62u); r0 >>= 2;  /* 0C0AEB62 shlr2 Rn */
	IF(0x0C0AEB64u); r4 = T;  /* 0C0AEB64 movt Rn */
	r0 &= 0x1u;  /* 0C0AEB66 and #imm,r0 */
	r0 &= r4;  /* 0C0AEB68 and Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0AEB6A tst Rm,Rn */
	{ u32 c_ = T; r3 += 0xFFFFFFB8u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AEB82u, 11); goto L_0C0AEB82; } goto L_0C0AEB70; }  /* 0C0AEB6C bt/s */
L_0C0AEB70: BLKS(0x0C0AEB70u);
	r0 = R32(r3 + 0x28u); UPD(0x0C0AEB72u, 2);  /* 0C0AEB70 mov.l @(disp,Rm),Rn */
	r1 = R32(r3 + 0x2Cu); UPD(0x0C0AEB74u, 1);  /* 0C0AEB72 mov.l @(disp,Rm),Rn */
	r0 -= r10;  /* 0C0AEB74 sub Rm,Rn */
	r1 += r9;  /* 0C0AEB76 add Rm,Rn */
	r6 = 0xFFF00000u; UPD(0x0C0AEB7Au, 3);  /* 0C0AEB78 mov.l @(disp,pc),Rn */
	W32(r3 + 0x28u, r0); UPD(0x0C0AEB7Cu, 1);  /* 0C0AEB7A mov.l Rm,@(disp,Rn) */
	T = (s32)r0 >= (s32)r6;  /* 0C0AEB7C cmp/ge Rm,Rn */
	{ u32 c_ = !T; W32(r3 + 0x2Cu, r1); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0AEBB0u, 4); goto L_0C0AEBB0; } UPD(0x0C0AEB82u, 1); goto L_0C0AEB82; }  /* 0C0AEB7E bf/s */
L_0C0AEB82: BLKS(0x0C0AEB82u);
	r3 = r11;  /* 0C0AEB82 mov Rm,Rn */
	UPD(0x0C0AEB84u, 1);
L_0C0AEB84: BLKS(0x0C0AEB84u);
	r3 += 0x1u;  /* 0C0AEB84 add #imm,Rn */
	r2 = 0x13Fu; UPD(0x0C0AEB88u, 2);  /* 0C0AEB86 mov.w @(disp,pc),Rn */
	r11 = (u32)(s32)(s16)r3;  /* 0C0AEB88 exts.w Rm,Rn */
	T = (s32)r11 > (s32)r2;  /* 0C0AEB8A cmp/gt Rm,Rn */
	{ u32 c_ = !T; r12 += 0x54u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AEB52u, 5); goto L_0C0AEB52; } goto L_0C0AEB90; }  /* 0C0AEB8C bf/s */
L_0C0AEB90: BLKS(0x0C0AEB90u);
	r15 = r14;  /* 0C0AEB90 mov Rm,Rn */
	IF(0x0C0AEB92u); PR = R32(r15); r15 += 4; UPD(0x0C0AEB94u, 3);  /* 0C0AEB92 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AEB96u, 1);  /* 0C0AEB94 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0AEB98u, 1);  /* 0C0AEB96 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0AEB9Au, 1);  /* 0C0AEB98 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0AEB9Cu, 1);  /* 0C0AEB9A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AEB9Eu, 1);  /* 0C0AEB9C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AEBA0u, 1);  /* 0C0AEB9E mov.l @Rm+,Rn */
	IF(0x0C0AEBA0u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AEBA0 rts */
L_0C0AEBB0: BLKS(0x0C0AEBB0u);
	r0 = 0xC06B480u; UPD(0x0C0AEBB2u, 1);  /* 0C0AEBB0 mov.l @(disp,pc),Rn */
	IF(0x0C0AEBB2u); { u32 t_ = r0; PR = 0x0C0AEBB6u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C06B480, 0x0C06B480u, 0x0C0AEBB6u); }  /* 0C0AEBB2 jsr @Rn */
L_0C0AEBB6: BLKS(0x0C0AEBB6u);
	{ r3 = r11; /* slot mov Rm,Rn */ UPD(0x0C0AEB84u, 3); goto L_0C0AEB84; }  /* 0C0AEBB6 bra */
L_0C0AEBC0: BLKS(0x0C0AEBC0u);
	r7 = 0xC0AEEC0u; UPD(0x0C0AEBC2u, 1);  /* 0C0AEBC0 mov.l @(disp,pc),Rn */
	IF(0x0C0AEBC2u); { u32 t_ = r7; PR = 0x0C0AEBC6u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AEEC0, 0x0C0AEEC0u, 0x0C0AEBC6u); }  /* 0C0AEBC2 jsr @Rn */
L_0C0AEBC6: BLKS(0x0C0AEBC6u);
	{ IF(0x0C0AEBC8u); ; /* slot nop */ UPD(0x0C0AEA8Cu, 3); goto L_0C0AEA8C; }  /* 0C0AEBC6 bra */
L_0C0AEBD0: BLKS(0x0C0AEBD0u);
	r5 = 0xFFu; UPD(0x0C0AEBD2u, 1);  /* 0C0AEBD0 mov.w @(disp,pc),Rn */
	{ r2 += r5; /* slot add Rm,Rn */ UPD(0x0C0AEA4Au, 3); goto L_0C0AEA4A; }  /* 0C0AEBD2 bra */
L_0C0AEBE0: BLKS(0x0C0AEBE0u);
	r0 = 0xFFu; UPD(0x0C0AEBE2u, 1);  /* 0C0AEBE0 mov.w @(disp,pc),Rn */
	{ r2 += r0; /* slot add Rm,Rn */ UPD(0x0C0AEA30u, 3); goto L_0C0AEA30; }  /* 0C0AEBE2 bra */
}

/* FUN_0c0aec40 */
void f_0C0AEC40(sh3_t *c)
{
	LOCALS;
L_0C0AEC40: BLKS(0x0C0AEC40u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AEC42u, 1);  /* 0C0AEC40 mov.l Rm,@-Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C0AEC42 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AEC46u, 2);  /* 0C0AEC44 mov.l Rm,@-Rn */
	r2 = 0x4Cu;  /* 0C0AEC46 mov #imm,Rn */
	IF(0x0C0AEC48u); MACL = r4 * r2;  /* 0C0AEC48 mul.l Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AEC4Cu, 4);  /* 0C0AEC4A mov.l Rm,@-Rn */
	r0 = 0xC26CAE0u; UPD(0x0C0AEC4Eu, 1);  /* 0C0AEC4C mov.l @(disp,pc),Rn */
	IF(0x0C0AEC4Eu); r3 = MACL;  /* 0C0AEC4E sts macl,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AEC52u, 2);  /* 0C0AEC50 mov.l Rm,@-Rn */
	r3 += r0;  /* 0C0AEC52 add Rm,Rn */
	r0 = 0xFFE00000u; UPD(0x0C0AEC56u, 2);  /* 0C0AEC54 mov.l @(disp,pc),Rn */
	r1 = R32(r3 + 0x18u); UPD(0x0C0AEC58u, 1);  /* 0C0AEC56 mov.l @(disp,Rm),Rn */
	r7 = R32(r3 + 0x8u); UPD(0x0C0AEC5Au, 1);  /* 0C0AEC58 mov.l @(disp,Rm),Rn */
	r1 &= r0;  /* 0C0AEC5A and Rm,Rn */
	r0 &= r7;  /* 0C0AEC5C and Rm,Rn */
	T = r1 == r0;  /* 0C0AEC5E cmp/eq Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0AECD6u, 6); goto L_0C0AECD6; } goto L_0C0AEC64; }  /* 0C0AEC60 bt/s */
L_0C0AEC64: BLKS(0x0C0AEC64u);
	W32(r3 + 0x18u, r7); UPD(0x0C0AEC66u, 2);  /* 0C0AEC64 mov.l Rm,@(disp,Rn) */
	r9 = R32(r3 + 0x28u); UPD(0x0C0AEC68u, 1);  /* 0C0AEC66 mov.l @(disp,Rm),Rn */
	r8 = R32(r3 + 0x2Cu); UPD(0x0C0AEC6Au, 1);  /* 0C0AEC68 mov.l @(disp,Rm),Rn */
	r5 = 0xC220C2Cu; UPD(0x0C0AEC6Cu, 1);  /* 0C0AEC6A mov.l @(disp,pc),Rn */
	r3 = R32(r5); UPD(0x0C0AEC6Eu, 1);  /* 0C0AEC6C mov.l @Rm,Rn */
	IF(0x0C0AEC6Eu); T = (s32)r3 > 0;  /* 0C0AEC6E cmp/pl Rn */
	{ u32 c_ = !T; r10 = (r7 >> 16) | (r7 << 16); /* slot swap.w Rm,Rn */ if (c_) { UPD(0x0C0AED40u, 4); goto L_0C0AED40; } goto L_0C0AEC74; }  /* 0C0AEC70 bf/s */
L_0C0AEC74: BLKS(0x0C0AEC74u);
	r6 = 0x1A0u; UPD(0x0C0AEC76u, 2);  /* 0C0AEC74 mov.w @(disp,pc),Rn */
	r0 = (u32)(s32)(s16)r10;  /* 0C0AEC76 exts.w Rm,Rn */
	r0 += r6;  /* 0C0AEC78 add Rm,Rn */
	UPD(0x0C0AEC7Au, 2);
L_0C0AEC7A: BLKS(0x0C0AEC7Au);
	IF(0x0C0AEC7Au); T = (s32)r0 >= 0;  /* 0C0AEC7A cmp/pz Rn */
	if (!T) { UPD(0x0C0AED30u, 4); goto L_0C0AED30; }  /* 0C0AEC7C bf */
L_0C0AEC7E: BLKS(0x0C0AEC7Eu);
	r2 = 0x4Cu;  /* 0C0AEC7E mov #imm,Rn */
	IF(0x0C0AEC80u); MACL = r4 * r2;  /* 0C0AEC80 mul.l Rm,Rn */
	r7 = r0;  /* 0C0AEC82 mov Rm,Rn */
	r6 = 0xC26CAE0u; UPD(0x0C0AEC86u, 5);  /* 0C0AEC84 mov.l @(disp,pc),Rn */
	IF(0x0C0AEC86u); r0 = MACL;  /* 0C0AEC86 sts macl,Rn */
	r10 = 0xFFFFFFFBu;  /* 0C0AEC88 mov #imm,Rn */
	IF(0x0C0AEC8Au); r5 = R32(r0 + r6); UPD(0x0C0AEC8Cu, 3);  /* 0C0AEC8A mov.l @(r0,Rm),Rn */
	r3 = 0x4000000u; UPD(0x0C0AEC8Eu, 1);  /* 0C0AEC8C mov.l @(disp,pc),Rn */
	T = (r5 & r3) == 0;  /* 0C0AEC8E tst Rm,Rn */
	{ u32 c_ = !T; IF(0x0C0AEC92u); ARG0(0x47ACu); { s32 s_ = (s32)r10; if (s_ >= 0) r7 <<= (s_ & 31); else if ((s_ & 31) == 0) r7 = (u32)((s32)r7 >> 31); else r7 = (u32)((s32)r7 >> ((~s_ & 31) + 1)); } /* slot shad Rm,Rn */ if (c_) { UPD(0x0C0AECF0u, 4); goto L_0C0AECF0; } goto L_0C0AEC94; }  /* 0C0AEC90 bf/s */
L_0C0AEC94: BLKS(0x0C0AEC94u);
	r6 = 0xAu;  /* 0C0AEC94 mov #imm,Rn */
	IF(0x0C0AEC96u); MACL = r7 * r6;  /* 0C0AEC96 mul.l Rm,Rn */
	r10 = r4;  /* 0C0AEC98 mov Rm,Rn */
	r4 = 0x4u;  /* 0C0AEC9A mov #imm,Rn */
	IF(0x0C0AEC9Cu); ARG0(0x4A4Du); { s32 s_ = (s32)r4; if (s_ >= 0) r10 <<= (s_ & 31); else if ((s_ & 31) == 0) r10 = 0; else r10 >>= ((~s_ & 31) + 1); }  /* 0C0AEC9C shld Rm,Rn */
	r5 = 0x3u;  /* 0C0AEC9E mov #imm,Rn */
	r0 = 0xFu;  /* 0C0AECA0 mov #imm,Rn */
	IF(0x0C0AECA2u); r2 = MACL;  /* 0C0AECA2 sts macl,Rn */
	r0 &= r7;  /* 0C0AECA4 and Rm,Rn */
	IF(0x0C0AECA6u); ARG0(0x425Du); { s32 s_ = (s32)r5; if (s_ >= 0) r2 <<= (s_ & 31); else if ((s_ & 31) == 0) r2 = 0; else r2 >>= ((~s_ & 31) + 1); }  /* 0C0AECA6 shld Rm,Rn */
	r10 += r0;  /* 0C0AECA8 add Rm,Rn */
	r0 = 0x6u;  /* 0C0AECAA mov #imm,Rn */
	r4 = 0xC221068u; UPD(0x0C0AECAEu, 15);  /* 0C0AECAC mov.l @(disp,pc),Rn */
	IF(0x0C0AECAEu); ARG0(0x4A0Du); { s32 s_ = (s32)r0; if (s_ >= 0) r10 <<= (s_ & 31); else if ((s_ & 31) == 0) r10 = 0; else r10 >>= ((~s_ & 31) + 1); }  /* 0C0AECAE shld Rm,Rn */
	r7 = 0x3FFFFFFFu; UPD(0x0C0AECB2u, 2);  /* 0C0AECB0 mov.l @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C0AECB2 mov #imm,Rn */
	r5 = 0xC393084u; UPD(0x0C0AECB6u, 2);  /* 0C0AECB4 mov.l @(disp,pc),Rn */
	r6 = 0x9u;  /* 0C0AECB6 mov #imm,Rn */
	UPD(0x0C0AECB8u, 1);
L_0C0AECB8: BLKS(0x0C0AECB8u);
	r0 = r2;  /* 0C0AECB8 mov Rm,Rn */
	IF(0x0C0AECBAu); r1 = R32(r0 + r9); UPD(0x0C0AECBCu, 2);  /* 0C0AECBA mov.l @(r0,Rm),Rn */
	r3 += 0x1u;  /* 0C0AECBC add #imm,Rn */
	r0 = r10;  /* 0C0AECBE mov Rm,Rn */
	r1 &= r7;  /* 0C0AECC0 and Rm,Rn */
	IF(0x0C0AECC2u); W32(r0 + r4, r1); UPD(0x0C0AECC4u, 4);  /* 0C0AECC2 mov.l Rm,@(r0,Rn) */
	T = (s32)r3 > (s32)r6;  /* 0C0AECC4 cmp/gt Rm,Rn */
	r0 = r2;  /* 0C0AECC6 mov Rm,Rn */
	IF(0x0C0AECC8u); r1 = R32(r0 + r8); UPD(0x0C0AECCAu, 3);  /* 0C0AECC8 mov.l @(r0,Rm),Rn */
	r2 += 0x8u;  /* 0C0AECCA add #imm,Rn */
	r0 = r10;  /* 0C0AECCC mov Rm,Rn */
	r1 &= r7;  /* 0C0AECCE and Rm,Rn */
	IF(0x0C0AECD0u); W32(r0 + r5, r1); UPD(0x0C0AECD2u, 4);  /* 0C0AECD0 mov.l Rm,@(r0,Rn) */
	{ u32 c_ = !T; r10 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AECB8u, 3); goto L_0C0AECB8; } UPD(0x0C0AECD6u, 1); goto L_0C0AECD6; }  /* 0C0AECD2 bf/s */
L_0C0AECD6: BLKS(0x0C0AECD6u);
	r15 = r14;  /* 0C0AECD6 mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AECDAu, 2);  /* 0C0AECD8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AECDCu, 1);  /* 0C0AECDA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AECDEu, 1);  /* 0C0AECDC mov.l @Rm+,Rn */
	IF(0x0C0AECDEu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AECDE rts */
L_0C0AECF0: BLKS(0x0C0AECF0u);
	r10 = 0x4u;  /* 0C0AECF0 mov #imm,Rn */
	r0 = r7;  /* 0C0AECF2 mov Rm,Rn */
	IF(0x0C0AECF4u); ARG0(0x44ADu); { s32 s_ = (s32)r10; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = 0; else r4 >>= ((~s_ & 31) + 1); }  /* 0C0AECF4 shld Rm,Rn */
	r2 = 0xFu;  /* 0C0AECF6 mov #imm,Rn */
	r7 &= r2;  /* 0C0AECF8 and Rm,Rn */
	r3 = 0x6u;  /* 0C0AECFA mov #imm,Rn */
	r4 += r7;  /* 0C0AECFC add Rm,Rn */
	IF(0x0C0AECFEu); ARG0(0x403Du); { s32 s_ = (s32)r3; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C0AECFE shld Rm,Rn */
	IF(0x0C0AED00u); ARG0(0x443Du); { s32 s_ = (s32)r3; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = 0; else r4 >>= ((~s_ & 31) + 1); }  /* 0C0AED00 shld Rm,Rn */
	r5 = 0xC221068u; UPD(0x0C0AED04u, 10);  /* 0C0AED02 mov.l @(disp,pc),Rn */
	r3 = 0x8u;  /* 0C0AED04 mov #imm,Rn */
	r6 = 0x3FFFFFFFu; UPD(0x0C0AED08u, 2);  /* 0C0AED06 mov.l @(disp,pc),Rn */
	r7 = 0xC393084u; UPD(0x0C0AED0Au, 1);  /* 0C0AED08 mov.l @(disp,pc),Rn */
	IF(0x0C0AED0Au); ;  /* 0C0AED0A nop */
	UPD(0x0C0AED0Cu, 1);
L_0C0AED0C: BLKS(0x0C0AED0Cu);
	IF(0x0C0AED0Cu); r2 = R32(r0 + r9); UPD(0x0C0AED0Eu, 1);  /* 0C0AED0C mov.l @(r0,Rm),Rn */
	r10 = r4;  /* 0C0AED0E mov Rm,Rn */
	r10 += r5;  /* 0C0AED10 add Rm,Rn */
	r2 &= r6;  /* 0C0AED12 and Rm,Rn */
	W32(r10 + 0x4u, r2); UPD(0x0C0AED16u, 4);  /* 0C0AED14 mov.l Rm,@(disp,Rn) */
	IF(0x0C0AED16u); r3 -= 1; T = r3 == 0;  /* 0C0AED16 dt Rn */
	IF(0x0C0AED18u); r2 = R32(r0 + r8); UPD(0x0C0AED1Au, 2);  /* 0C0AED18 mov.l @(r0,Rm),Rn */
	r10 = r4;  /* 0C0AED1A mov Rm,Rn */
	r10 += r7;  /* 0C0AED1C add Rm,Rn */
	r2 &= r6;  /* 0C0AED1E and Rm,Rn */
	W32(r10 + 0x4u, r2); UPD(0x0C0AED22u, 4);  /* 0C0AED20 mov.l Rm,@(disp,Rn) */
	r0 += 0x8u;  /* 0C0AED22 add #imm,Rn */
	{ u32 c_ = !T; r4 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AED0Cu, 4); goto L_0C0AED0C; } goto L_0C0AED28; }  /* 0C0AED24 bf/s */
L_0C0AED28: BLKS(0x0C0AED28u);
	{ IF(0x0C0AED2Au); ; /* slot nop */ UPD(0x0C0AECD6u, 4); goto L_0C0AECD6; }  /* 0C0AED28 bra */
L_0C0AED30: BLKS(0x0C0AED30u);
	{ r0 += 0x1Fu; /* slot add #imm,Rn */ UPD(0x0C0AEC7Eu, 3); goto L_0C0AEC7E; }  /* 0C0AED30 bra */
L_0C0AED40: BLKS(0x0C0AED40u);
	r0 = (r7 >> 16) | (r7 << 16);  /* 0C0AED40 swap.w Rm,Rn */
	r7 = (u32)(s32)(s16)r0;  /* 0C0AED42 exts.w Rm,Rn */
	r0 = r7;  /* 0C0AED44 mov Rm,Rn */
	{ r0 += 0xFFFFFFD0u; /* slot add #imm,Rn */ UPD(0x0C0AEC7Au, 6); goto L_0C0AEC7A; }  /* 0C0AED46 bra */
}

/* FUN_0c0aed70 */
void f_0C0AED70(sh3_t *c)
{
	LOCALS;
L_0C0AED70: BLKS(0x0C0AED70u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AED72u, 1);  /* 0C0AED70 mov.l Rm,@-Rn */
	r0 = 0x0u;  /* 0C0AED72 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AED76u, 2);  /* 0C0AED74 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AED78u, 1);  /* 0C0AED76 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0AED7Au, 1);  /* 0C0AED78 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0AED7Cu, 1);  /* 0C0AED7A mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0AED7Eu, 1);  /* 0C0AED7C mov.l Rm,@-Rn */
	r2 = 0xC392AFEu; UPD(0x0C0AED80u, 1);  /* 0C0AED7E mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AED82u, 1);  /* 0C0AED80 mov.l Rm,@-Rn */
	r6 = 0xC283CA4u; UPD(0x0C0AED84u, 1);  /* 0C0AED82 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0AED84 add #imm,Rn */
	r5 = 0xC21CC84u; UPD(0x0C0AED88u, 2);  /* 0C0AED86 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0AED88 mov Rm,Rn */
	r4 = 0xC220C24u; UPD(0x0C0AED8Cu, 2);  /* 0C0AED8A mov.l @(disp,pc),Rn */
	r3 = 0xC220C2Cu; UPD(0x0C0AED8Eu, 1);  /* 0C0AED8C mov.l @(disp,pc),Rn */
	W8(r2, r0); UPD(0x0C0AED90u, 1);  /* 0C0AED8E mov.b Rm,@Rn */
	W32(r6, r0); UPD(0x0C0AED92u, 1);  /* 0C0AED90 mov.l Rm,@Rn */
	W32(r5, r0); UPD(0x0C0AED94u, 1);  /* 0C0AED92 mov.l Rm,@Rn */
	W32(r4, r0); UPD(0x0C0AED96u, 1);  /* 0C0AED94 mov.l Rm,@Rn */
	W32(r3, r0); UPD(0x0C0AED98u, 1);  /* 0C0AED96 mov.l Rm,@Rn */
	W32(r14, r0); UPD(0x0C0AED9Au, 1);  /* 0C0AED98 mov.l Rm,@Rn */
	W32(r14 + 0x4u, r0); UPD(0x0C0AED9Cu, 1);  /* 0C0AED9A mov.l Rm,@(disp,Rn) */
L_0C0AED9C: BLKS(0x0C0AED9Cu);
	r1 = R32(r14 + 0x4u); UPD(0x0C0AED9Eu, 1);  /* 0C0AED9C mov.l @(disp,Rm),Rn */
	r7 = 0xC26CAE0u; UPD(0x0C0AEDA0u, 1);  /* 0C0AED9E mov.l @(disp,pc),Rn */
	r1 += r7;  /* 0C0AEDA0 add Rm,Rn */
	r2 = R32(r1); UPD(0x0C0AEDA4u, 2);  /* 0C0AEDA2 mov.l @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C0AEDA4 tst Rm,Rn */
	{ u32 c_ = T; r6 = R32(r14); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C0AEE0Eu, 4); goto L_0C0AEE0E; } UPD(0x0C0AEDAAu, 1); goto L_0C0AEDAA; }  /* 0C0AEDA6 bt/s */
L_0C0AEDAA: BLKS(0x0C0AEDAAu);
	r0 = 0x4000000u; UPD(0x0C0AEDACu, 1);  /* 0C0AEDAA mov.l @(disp,pc),Rn */
	r4 = R32(r1 + 0x28u); UPD(0x0C0AEDAEu, 1);  /* 0C0AEDAC mov.l @(disp,Rm),Rn */
	T = (r2 & r0) == 0;  /* 0C0AEDAE tst Rm,Rn */
	{ u32 c_ = !T; r5 = R32(r1 + 0x2Cu); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C0AEE40u, 4); goto L_0C0AEE40; } UPD(0x0C0AEDB4u, 1); goto L_0C0AEDB4; }  /* 0C0AEDB0 bf/s */
L_0C0AEDB4: BLKS(0x0C0AEDB4u);
	r13 = R32(r14); UPD(0x0C0AEDB6u, 1);  /* 0C0AEDB4 mov.l @Rm,Rn */
	r8 = 0x4u;  /* 0C0AEDB6 mov #imm,Rn */
	IF(0x0C0AEDB8u); ARG0(0x4D8Du); { s32 s_ = (s32)r8; if (s_ >= 0) r13 <<= (s_ & 31); else if ((s_ & 31) == 0) r13 = 0; else r13 >>= ((~s_ & 31) + 1); }  /* 0C0AEDB8 shld Rm,Rn */
	r7 = 0x3FFFFFFFu; UPD(0x0C0AEDBCu, 3);  /* 0C0AEDBA mov.l @(disp,pc),Rn */
	r9 = 0x0u;  /* 0C0AEDBC mov #imm,Rn */
	r8 = 0xC221068u; UPD(0x0C0AEDC0u, 2);  /* 0C0AEDBE mov.l @(disp,pc),Rn */
	r10 = 0x0u;  /* 0C0AEDC0 mov #imm,Rn */
	r6 = 0xC393084u; UPD(0x0C0AEDC4u, 2);  /* 0C0AEDC2 mov.l @(disp,pc),Rn */
	r11 = 0x9u;  /* 0C0AEDC4 mov #imm,Rn */
	UPD(0x0C0AEDC6u, 1);
L_0C0AEDC6: BLKS(0x0C0AEDC6u);
	r12 = 0xFu;  /* 0C0AEDC6 mov #imm,Rn */
	r12 &= r9;  /* 0C0AEDC8 and Rm,Rn */
	r3 = 0x6u;  /* 0C0AEDCA mov #imm,Rn */
	r12 += r13;  /* 0C0AEDCC add Rm,Rn */
	IF(0x0C0AEDCEu); ARG0(0x4C3Du); { s32 s_ = (s32)r3; if (s_ >= 0) r12 <<= (s_ & 31); else if ((s_ & 31) == 0) r12 = 0; else r12 >>= ((~s_ & 31) + 1); }  /* 0C0AEDCE shld Rm,Rn */
	r2 = r10;  /* 0C0AEDD0 mov Rm,Rn */
	r1 = 0x3u;  /* 0C0AEDD2 mov #imm,Rn */
	r3 = r11;  /* 0C0AEDD4 mov Rm,Rn */
	IF(0x0C0AEDD6u); ARG0(0x421Du); { s32 s_ = (s32)r1; if (s_ >= 0) r2 <<= (s_ & 31); else if ((s_ & 31) == 0) r2 = 0; else r2 >>= ((~s_ & 31) + 1); }  /* 0C0AEDD6 shld Rm,Rn */
	r3 += 0x1u;  /* 0C0AEDD8 add #imm,Rn */
	IF(0x0C0AEDDAu); ;  /* 0C0AEDDA nop */
	UPD(0x0C0AEDDCu, 11);
L_0C0AEDDC: BLKS(0x0C0AEDDCu);
	r0 = r2;  /* 0C0AEDDC mov Rm,Rn */
	IF(0x0C0AEDDEu); r1 = R32(r0 + r4); UPD(0x0C0AEDE0u, 2);  /* 0C0AEDDE mov.l @(r0,Rm),Rn */
	IF(0x0C0AEDE0u); r3 -= 1; T = r3 == 0;  /* 0C0AEDE0 dt Rn */
	r0 = r12;  /* 0C0AEDE2 mov Rm,Rn */
	r1 &= r7;  /* 0C0AEDE4 and Rm,Rn */
	IF(0x0C0AEDE6u); W32(r0 + r8, r1); UPD(0x0C0AEDE8u, 4);  /* 0C0AEDE6 mov.l Rm,@(r0,Rn) */
	r0 = r2;  /* 0C0AEDE8 mov Rm,Rn */
	IF(0x0C0AEDEAu); r1 = R32(r0 + r5); UPD(0x0C0AEDECu, 2);  /* 0C0AEDEA mov.l @(r0,Rm),Rn */
	r2 += 0x8u;  /* 0C0AEDEC add #imm,Rn */
	r0 = r12;  /* 0C0AEDEE mov Rm,Rn */
	r1 &= r7;  /* 0C0AEDF0 and Rm,Rn */
	IF(0x0C0AEDF2u); W32(r0 + r6, r1); UPD(0x0C0AEDF4u, 4);  /* 0C0AEDF2 mov.l Rm,@(r0,Rn) */
	{ u32 c_ = !T; r12 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AEDDCu, 3); goto L_0C0AEDDC; } goto L_0C0AEDF8; }  /* 0C0AEDF4 bf/s */
L_0C0AEDF8: BLKS(0x0C0AEDF8u);
	r9 += 0x1u;  /* 0C0AEDF8 add #imm,Rn */
	r12 = 0xFu;  /* 0C0AEDFA mov #imm,Rn */
	T = (s32)r9 > (s32)r12;  /* 0C0AEDFC cmp/gt Rm,Rn */
	{ u32 c_ = !T; r10 += 0xAu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AEDC6u, 7); goto L_0C0AEDC6; } UPD(0x0C0AEE02u, 1); goto L_0C0AEE02; }  /* 0C0AEDFE bf/s */
L_0C0AEE02: BLKS(0x0C0AEE02u);
	r9 = 0xC26CAE0u; UPD(0x0C0AEE04u, 1);  /* 0C0AEE02 mov.l @(disp,pc),Rn */
	r13 = R32(r14 + 0x4u); UPD(0x0C0AEE06u, 1);  /* 0C0AEE04 mov.l @(disp,Rm),Rn */
	r9 += r13;  /* 0C0AEE06 add Rm,Rn */
	r11 = R32(r9 + 0x8u); UPD(0x0C0AEE0Au, 2);  /* 0C0AEE08 mov.l @(disp,Rm),Rn */
	W32(r9 + 0x18u, r11); UPD(0x0C0AEE0Cu, 1);  /* 0C0AEE0A mov.l Rm,@(disp,Rn) */
	r6 = R32(r14); UPD(0x0C0AEE0Eu, 1);  /* 0C0AEE0C mov.l @Rm,Rn */
L_0C0AEE0E: BLKS(0x0C0AEE0Eu);
	r4 = 0x7u;  /* 0C0AEE0E mov #imm,Rn */
	r6 += 0x1u;  /* 0C0AEE10 add #imm,Rn */
	r8 = R32(r14 + 0x4u); UPD(0x0C0AEE14u, 3);  /* 0C0AEE12 mov.l @(disp,Rm),Rn */
	W32(r14, r6); UPD(0x0C0AEE16u, 1);  /* 0C0AEE14 mov.l Rm,@Rn */
	r8 += 0x4Cu;  /* 0C0AEE16 add #imm,Rn */
	r5 = R32(r14); UPD(0x0C0AEE1Au, 2);  /* 0C0AEE18 mov.l @Rm,Rn */
	T = (s32)r5 > (s32)r4;  /* 0C0AEE1A cmp/gt Rm,Rn */
	{ u32 c_ = !T; W32(r14 + 0x4u, r8); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0AED9Cu, 4); goto L_0C0AED9C; } UPD(0x0C0AEE20u, 1); goto L_0C0AEE20; }  /* 0C0AEE1C bf/s */
L_0C0AEE20: BLKS(0x0C0AEE20u);
	r14 += 0x8u;  /* 0C0AEE20 add #imm,Rn */
	r15 = r14;  /* 0C0AEE22 mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AEE26u, 3);  /* 0C0AEE24 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0AEE28u, 1);  /* 0C0AEE26 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0AEE2Au, 1);  /* 0C0AEE28 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0AEE2Cu, 1);  /* 0C0AEE2A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AEE2Eu, 1);  /* 0C0AEE2C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AEE30u, 1);  /* 0C0AEE2E mov.l @Rm+,Rn */
	IF(0x0C0AEE30u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AEE30 rts */
L_0C0AEE40: BLKS(0x0C0AEE40u);
	r13 = R32(r14); UPD(0x0C0AEE42u, 1);  /* 0C0AEE40 mov.l @Rm,Rn */
	r10 = 0x4u;  /* 0C0AEE42 mov #imm,Rn */
	IF(0x0C0AEE44u); ARG0(0x4DADu); { s32 s_ = (s32)r10; if (s_ >= 0) r13 <<= (s_ & 31); else if ((s_ & 31) == 0) r13 = 0; else r13 >>= ((~s_ & 31) + 1); }  /* 0C0AEE44 shld Rm,Rn */
	r11 = 0xC221068u; UPD(0x0C0AEE48u, 3);  /* 0C0AEE46 mov.l @(disp,pc),Rn */
	r9 = 0x0u;  /* 0C0AEE48 mov #imm,Rn */
	r8 = 0x3FFFFFFFu; UPD(0x0C0AEE4Cu, 2);  /* 0C0AEE4A mov.l @(disp,pc),Rn */
	r12 = 0x0u;  /* 0C0AEE4C mov #imm,Rn */
	r10 = 0xC393084u; UPD(0x0C0AEE50u, 2);  /* 0C0AEE4E mov.l @(disp,pc),Rn */
L_0C0AEE50: BLKS(0x0C0AEE50u);
	r0 = r9;  /* 0C0AEE50 mov Rm,Rn */
	r0 &= 0xFu;  /* 0C0AEE52 and #imm,r0 */
	r7 = 0x40u;  /* 0C0AEE54 mov #imm,Rn */
	r0 += r13;  /* 0C0AEE56 add Rm,Rn */
	IF(0x0C0AEE58u); MACL = r0 * r7;  /* 0C0AEE58 mul.l Rm,Rn */
	r3 = 0x7u;  /* 0C0AEE5A mov #imm,Rn */
	r6 = r12;  /* 0C0AEE5C mov Rm,Rn */
	IF(0x0C0AEE5Eu); r7 = MACL;  /* 0C0AEE5E sts macl,Rn */
	r3 += 0x1u;  /* 0C0AEE60 add #imm,Rn */
	IF(0x0C0AEE62u); ;  /* 0C0AEE62 nop */
	UPD(0x0C0AEE64u, 11);
L_0C0AEE64: BLKS(0x0C0AEE64u);
	r0 = r6;  /* 0C0AEE64 mov Rm,Rn */
	IF(0x0C0AEE66u); r1 = R32(r0 + r4); UPD(0x0C0AEE68u, 2);  /* 0C0AEE66 mov.l @(r0,Rm),Rn */
	r2 = r7;  /* 0C0AEE68 mov Rm,Rn */
	r2 += r11;  /* 0C0AEE6A add Rm,Rn */
	r1 &= r8;  /* 0C0AEE6C and Rm,Rn */
	W32(r2 + 0x4u, r1); UPD(0x0C0AEE70u, 4);  /* 0C0AEE6E mov.l Rm,@(disp,Rn) */
	r6 += 0x8u;  /* 0C0AEE70 add #imm,Rn */
	IF(0x0C0AEE72u); r1 = R32(r0 + r5); UPD(0x0C0AEE74u, 2);  /* 0C0AEE72 mov.l @(r0,Rm),Rn */
	r2 = r7;  /* 0C0AEE74 mov Rm,Rn */
	r2 += r10;  /* 0C0AEE76 add Rm,Rn */
	r1 &= r8;  /* 0C0AEE78 and Rm,Rn */
	W32(r2 + 0x4u, r1); UPD(0x0C0AEE7Cu, 4);  /* 0C0AEE7A mov.l Rm,@(disp,Rn) */
	IF(0x0C0AEE7Cu); r3 -= 1; T = r3 == 0;  /* 0C0AEE7C dt Rn */
	{ u32 c_ = !T; r7 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AEE64u, 4); goto L_0C0AEE64; } goto L_0C0AEE82; }  /* 0C0AEE7E bf/s */
L_0C0AEE82: BLKS(0x0C0AEE82u);
	r9 += 0x1u;  /* 0C0AEE82 add #imm,Rn */
	r2 = 0xFu;  /* 0C0AEE84 mov #imm,Rn */
	T = (s32)r9 > (s32)r2;  /* 0C0AEE86 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r12 += 0x40u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AEE50u, 7); goto L_0C0AEE50; } goto L_0C0AEE8C; }  /* 0C0AEE88 bf/s */
L_0C0AEE8C: BLKS(0x0C0AEE8Cu);
	{ IF(0x0C0AEE8Eu); ; /* slot nop */ UPD(0x0C0AEE02u, 4); goto L_0C0AEE02; }  /* 0C0AEE8C bra */
}

/* FUN_0c0aeec0 */
void f_0C0AEEC0(sh3_t *c)
{
	LOCALS;
L_0C0AEEC0: BLKS(0x0C0AEEC0u);
	r1 = (u32)(s32)(s16)r4;  /* 0C0AEEC0 exts.w Rm,Rn */
	r0 = 0x4Cu;  /* 0C0AEEC2 mov #imm,Rn */
	IF(0x0C0AEEC4u); MACL = r1 * r0;  /* 0C0AEEC4 mul.l Rm,Rn */
	r3 = 0xC26CAE0u; UPD(0x0C0AEEC8u, 5);  /* 0C0AEEC6 mov.l @(disp,pc),Rn */
	r2 = 0x0u;  /* 0C0AEEC8 mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AEECCu, 2);  /* 0C0AEECA mov.l Rm,@-Rn */
	IF(0x0C0AEECCu); r0 = MACL;  /* 0C0AEECC sts macl,Rn */
	IF(0x0C0AEECEu); W32(r0 + r3, r2); UPD(0x0C0AEED0u, 2);  /* 0C0AEECE mov.l Rm,@(r0,Rn) */
	r14 = r15;  /* 0C0AEED0 mov Rm,Rn */
	r15 = r14;  /* 0C0AEED2 mov Rm,Rn */
	IF(0x0C0AEED4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C0AEED4 rts */
}

void f_0C0AEEE0(sh3_t *c)
{
	LOCALS;
L_0C0AEEE0: BLKS(0x0C0AEEE0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AEEE2u, 1);  /* 0C0AEEE0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AEEE4u, 1);  /* 0C0AEEE2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AEEE6u, 1);  /* 0C0AEEE4 mov.l Rm,@-Rn */
	r9 = 0x0u;  /* 0C0AEEE6 mov #imm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0AEEEAu, 2);  /* 0C0AEEE8 mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s16)r4;  /* 0C0AEEEA exts.w Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0AEEEEu, 2);  /* 0C0AEEEC mov.l Rm,@-Rn */
	r4 = r10;  /* 0C0AEEEE mov Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0AEEF2u, 2);  /* 0C0AEEF0 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AEEF4u, 1);  /* 0C0AEEF2 mov.l Rm,@-Rn */
	r0 = 0xC0AEA10u; UPD(0x0C0AEEF6u, 1);  /* 0C0AEEF4 mov.l @(disp,pc),Rn */
	IF(0x0C0AEEF6u); r15 -= 4; W32(r15, PR); UPD(0x0C0AEEF8u, 1);  /* 0C0AEEF6 sts.l pr,@-Rn */
	IF(0x0C0AEEF8u); { u32 t_ = r0; PR = 0x0C0AEEFCu; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AEA10, 0x0C0AEA10u, 0x0C0AEEFCu); }  /* 0C0AEEF8 jsr @Rn */
L_0C0AEEFC: BLKS(0x0C0AEEFCu);
	r4 = 0x4Cu;  /* 0C0AEEFC mov #imm,Rn */
	IF(0x0C0AEEFEu); MACL = r10 * r4;  /* 0C0AEEFE mul.l Rm,Rn */
	r0 = 0xC26CAE0u; UPD(0x0C0AEF02u, 4);  /* 0C0AEF00 mov.l @(disp,pc),Rn */
	IF(0x0C0AEF02u); r3 = MACL;  /* 0C0AEF02 sts macl,Rn */
	r3 += r0;  /* 0C0AEF04 add Rm,Rn */
	r3 += 0x44u;  /* 0C0AEF06 add #imm,Rn */
	r2 = (u32)(s32)(s16)R16(r3); UPD(0x0C0AEF0Au, 4);  /* 0C0AEF08 mov.w @Rm,Rn */
	r12 = r0;  /* 0C0AEF0A mov Rm,Rn */
	r2 += 0x1u;  /* 0C0AEF0C add #imm,Rn */
	r13 = 0xC21CCF8u; UPD(0x0C0AEF10u, 3);  /* 0C0AEF0E mov.l @(disp,pc),Rn */
	r11 = 0xC058030u; UPD(0x0C0AEF12u, 1);  /* 0C0AEF10 mov.l @(disp,pc),Rn */
	W16(r3, r2); UPD(0x0C0AEF14u, 1);  /* 0C0AEF12 mov.w Rm,@Rn */
L_0C0AEF14: BLKS(0x0C0AEF14u);
	r8 = 0x140u; UPD(0x0C0AEF16u, 1);  /* 0C0AEF14 mov.w @(disp,pc),Rn */
	r6 = 0x4Cu;  /* 0C0AEF16 mov #imm,Rn */
	IF(0x0C0AEF18u); MACL = r10 * r8;  /* 0C0AEF18 mul.l Rm,Rn */
	r7 = 0xC3929E0u; UPD(0x0C0AEF1Cu, 4);  /* 0C0AEF1A mov.l @(disp,pc),Rn */
	r3 = 0x3u;  /* 0C0AEF1C mov #imm,Rn */
	IF(0x0C0AEF1Eu); r8 = MACL;  /* 0C0AEF1E sts macl,Rn */
	IF(0x0C0AEF20u); MACL = r10 * r6;  /* 0C0AEF20 mul.l Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r7); UPD(0x0C0AEF24u, 5);  /* 0C0AEF22 mov.w @Rm,Rn */
	r8 += r9;  /* 0C0AEF24 add Rm,Rn */
	IF(0x0C0AEF26u); r5 = MACL;  /* 0C0AEF26 sts macl,Rn */
	r5 += r12;  /* 0C0AEF28 add Rm,Rn */
	r5 += 0x44u;  /* 0C0AEF2A add #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r5); UPD(0x0C0AEF2Eu, 5);  /* 0C0AEF2C mov.w @Rm,Rn */
	r4 += r9;  /* 0C0AEF2E add Rm,Rn */
	r2 = r0 & 0xFFFF;  /* 0C0AEF30 extu.w Rm,Rn */
	IF(0x0C0AEF32u); r2 >>= 2;  /* 0C0AEF32 shlr2 Rn */
	r4 += r2;  /* 0C0AEF34 add Rm,Rn */
	r5 = 0x30000u; UPD(0x0C0AEF38u, 5);  /* 0C0AEF36 mov.l @(disp,pc),Rn */
	IF(0x0C0AEF38u); { u32 t_ = r11; PR = 0x0C0AEF3Cu; IF(0x0C0AEF3Au); ARG0(0x443Du); { s32 s_ = (s32)r3; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = 0; else r4 >>= ((~s_ & 31) + 1); } /* slot shld Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0AEF3Cu); }  /* 0C0AEF38 jsr @Rn */
L_0C0AEF3C: BLKS(0x0C0AEF3Cu);
	r6 = r9;  /* 0C0AEF3C mov Rm,Rn */
	r8 += r8;  /* 0C0AEF3E add Rm,Rn */
	r7 = (r0 >> 16) | (r0 << 16);  /* 0C0AEF40 swap.w Rm,Rn */
	r8 += r13;  /* 0C0AEF42 add Rm,Rn */
	r1 = (u32)(s32)(s16)r7;  /* 0C0AEF44 exts.w Rm,Rn */
	r6 += 0x1u;  /* 0C0AEF46 add #imm,Rn */
	r9 = (u32)(s32)(s16)r6;  /* 0C0AEF48 exts.w Rm,Rn */
	r5 = 0x3Fu;  /* 0C0AEF4A mov #imm,Rn */
	T = (s32)r9 > (s32)r5;  /* 0C0AEF4C cmp/gt Rm,Rn */
	{ u32 c_ = !T; W16(r8, r1); /* slot mov.w Rm,@Rn */ if (c_) { UPD(0x0C0AEF14u, 12); goto L_0C0AEF14; } UPD(0x0C0AEF52u, 1); goto L_0C0AEF52; }  /* 0C0AEF4E bf/s */
L_0C0AEF52: BLKS(0x0C0AEF52u);
	r15 = r14;  /* 0C0AEF52 mov Rm,Rn */
	IF(0x0C0AEF54u); PR = R32(r15); r15 += 4; UPD(0x0C0AEF56u, 2);  /* 0C0AEF54 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AEF58u, 1);  /* 0C0AEF56 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0AEF5Au, 1);  /* 0C0AEF58 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0AEF5Cu, 1);  /* 0C0AEF5A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0AEF5Eu, 1);  /* 0C0AEF5C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AEF60u, 1);  /* 0C0AEF5E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AEF62u, 1);  /* 0C0AEF60 mov.l @Rm+,Rn */
	IF(0x0C0AEF62u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AEF62 rts */
}

void f_0C0AF0C0(sh3_t *c)
{
	LOCALS;
L_0C0AF0C0: BLKS(0x0C0AF0C0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF0C2u, 1);  /* 0C0AF0C0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF0C4u, 1);  /* 0C0AF0C2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF0C6u, 1);  /* 0C0AF0C4 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C0AF0C6 exts.w Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF0CAu, 2);  /* 0C0AF0C8 mov.l Rm,@-Rn */
	r4 = r9;  /* 0C0AF0CA mov Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF0CEu, 2);  /* 0C0AF0CC mov.l Rm,@-Rn */
	r11 = 0x0u;  /* 0C0AF0CE mov #imm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF0D2u, 2);  /* 0C0AF0D0 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF0D4u, 1);  /* 0C0AF0D2 mov.l Rm,@-Rn */
	r7 = 0xC0AEA10u; UPD(0x0C0AF0D6u, 1);  /* 0C0AF0D4 mov.l @(disp,pc),Rn */
	IF(0x0C0AF0D6u); r15 -= 4; W32(r15, PR); UPD(0x0C0AF0D8u, 1);  /* 0C0AF0D6 sts.l pr,@-Rn */
	IF(0x0C0AF0D8u); { u32 t_ = r7; PR = 0x0C0AF0DCu; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AEA10, 0x0C0AEA10u, 0x0C0AF0DCu); }  /* 0C0AF0D8 jsr @Rn */
L_0C0AF0DC: BLKS(0x0C0AF0DCu);
	r6 = 0xC1F5218u; UPD(0x0C0AF0DEu, 1);  /* 0C0AF0DC mov.l @(disp,pc),Rn */
	r5 = 0x4Cu;  /* 0C0AF0DE mov #imm,Rn */
	IF(0x0C0AF0E0u); MACL = r9 * r5;  /* 0C0AF0E0 mul.l Rm,Rn */
	r0 = r6;  /* 0C0AF0E2 mov Rm,Rn */
	IF(0x0C0AF0E4u); r12 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0AF0E6u, 5);  /* 0C0AF0E4 mov.b @(r0,Rm),Rn */
	r4 = 0xC26CAE0u; UPD(0x0C0AF0E8u, 1);  /* 0C0AF0E6 mov.l @(disp,pc),Rn */
	IF(0x0C0AF0E8u); r0 = MACL;  /* 0C0AF0E8 sts macl,Rn */
	r0 += r4;  /* 0C0AF0EA add Rm,Rn */
	r3 = r0;  /* 0C0AF0EC mov Rm,Rn */
	r10 = r0;  /* 0C0AF0EE mov Rm,Rn */
	r0 = 0x140u; UPD(0x0C0AF0F2u, 5);  /* 0C0AF0F0 mov.w @(disp,pc),Rn */
	r3 += 0x44u;  /* 0C0AF0F2 add #imm,Rn */
	r2 = (u32)(s32)(s16)R16(r3); UPD(0x0C0AF0F6u, 2);  /* 0C0AF0F4 mov.w @Rm,Rn */
	IF(0x0C0AF0F6u); MACL = r9 * r0;  /* 0C0AF0F6 mul.l Rm,Rn */
	r2 += 0x1u;  /* 0C0AF0F8 add #imm,Rn */
	r13 = 0xC223268u; UPD(0x0C0AF0FCu, 4);  /* 0C0AF0FA mov.l @(disp,pc),Rn */
	IF(0x0C0AF0FCu); r9 = MACL;  /* 0C0AF0FC sts macl,Rn */
	W16(r3, r2); UPD(0x0C0AF100u, 2);  /* 0C0AF0FE mov.w Rm,@Rn */
	r9 += r9;  /* 0C0AF100 add Rm,Rn */
	IF(0x0C0AF102u); ;  /* 0C0AF102 nop */
	UPD(0x0C0AF104u, 2);
L_0C0AF104: BLKS(0x0C0AF104u);
	r4 = r11;  /* 0C0AF104 mov Rm,Rn */
	r0 = 0xC21CCF8u; UPD(0x0C0AF108u, 2);  /* 0C0AF106 mov.l @(disp,pc),Rn */
	IF(0x0C0AF108u); r4 <<= 2;  /* 0C0AF108 shll2 Rn */
	IF(0x0C0AF10Au); W16(r0 + r9, r4); UPD(0x0C0AF10Cu, 2);  /* 0C0AF10A mov.w Rm,@(r0,Rn) */
	r10 += 0x44u;  /* 0C0AF10C add #imm,Rn */
	r2 = (u32)(s32)(s16)R16(r10); UPD(0x0C0AF110u, 2);  /* 0C0AF10E mov.w @Rm,Rn */
	r8 = r9;  /* 0C0AF110 mov Rm,Rn */
	r3 = r2 & 0xFFFF;  /* 0C0AF112 extu.w Rm,Rn */
	r3 += r11;  /* 0C0AF114 add Rm,Rn */
	IF(0x0C0AF116u); MACL = r3 * r12;  /* 0C0AF116 mul.l Rm,Rn */
	r0 = 0xC058030u; UPD(0x0C0AF11Au, 6);  /* 0C0AF118 mov.l @(disp,pc),Rn */
	r10 += 0xFFFFFFBCu;  /* 0C0AF11A add #imm,Rn */
	IF(0x0C0AF11Cu); r4 = MACL;  /* 0C0AF11C sts macl,Rn */
	IF(0x0C0AF11Eu); { u32 t_ = r0; PR = 0x0C0AF122u; r5 = R32(r10 + 0x14u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 4); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0AF122u); }  /* 0C0AF11E jsr @Rn */
L_0C0AF122: BLKS(0x0C0AF122u);
	r8 += r13;  /* 0C0AF122 add Rm,Rn */
	r0 += 0x28u;  /* 0C0AF124 add #imm,Rn */
	W16(r8, r0); UPD(0x0C0AF128u, 3);  /* 0C0AF126 mov.w Rm,@Rn */
	r0 = r11;  /* 0C0AF128 mov Rm,Rn */
	r0 += 0x1u;  /* 0C0AF12A add #imm,Rn */
	r11 = (u32)(s32)(s16)r0;  /* 0C0AF12C exts.w Rm,Rn */
	r8 = 0x51u;  /* 0C0AF12E mov #imm,Rn */
	T = (s32)r11 > (s32)r8;  /* 0C0AF130 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r9 += 0x2u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AF104u, 8); goto L_0C0AF104; } goto L_0C0AF136; }  /* 0C0AF132 bf/s */
L_0C0AF136: BLKS(0x0C0AF136u);
	r15 = r14;  /* 0C0AF136 mov Rm,Rn */
	IF(0x0C0AF138u); PR = R32(r15); r15 += 4; UPD(0x0C0AF13Au, 3);  /* 0C0AF138 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AF13Cu, 1);  /* 0C0AF13A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0AF13Eu, 1);  /* 0C0AF13C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0AF140u, 1);  /* 0C0AF13E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0AF142u, 1);  /* 0C0AF140 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AF144u, 1);  /* 0C0AF142 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AF146u, 1);  /* 0C0AF144 mov.l @Rm+,Rn */
	IF(0x0C0AF146u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AF146 rts */
}

void f_0C0AF170(sh3_t *c)
{
	LOCALS;
L_0C0AF170: BLKS(0x0C0AF170u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF172u, 1);  /* 0C0AF170 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF174u, 1);  /* 0C0AF172 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF176u, 1);  /* 0C0AF174 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF178u, 1);  /* 0C0AF176 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF17Au, 1);  /* 0C0AF178 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF17Cu, 1);  /* 0C0AF17A mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF17Eu, 1);  /* 0C0AF17C mov.l Rm,@-Rn */
	r13 = (u32)(s32)(s16)r4;  /* 0C0AF17E exts.w Rm,Rn */
	r7 = 0xC0AE310u; UPD(0x0C0AF182u, 2);  /* 0C0AF180 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C0AF182 mov Rm,Rn */
	IF(0x0C0AF184u); r15 -= 4; W32(r15, PR); UPD(0x0C0AF186u, 2);  /* 0C0AF184 sts.l pr,@-Rn */
	IF(0x0C0AF186u); { u32 t_ = r7; PR = 0x0C0AF18Au; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AE310, 0x0C0AE310u, 0x0C0AF18Au); }  /* 0C0AF186 jsr @Rn */
L_0C0AF18A: BLKS(0x0C0AF18Au);
	r0 = 0x4Cu;  /* 0C0AF18A mov #imm,Rn */
	IF(0x0C0AF18Cu); MACL = r13 * r0;  /* 0C0AF18C mul.l Rm,Rn */
	r9 = 0xC26CAE0u; UPD(0x0C0AF190u, 4);  /* 0C0AF18E mov.l @(disp,pc),Rn */
	IF(0x0C0AF190u); r0 = MACL;  /* 0C0AF190 sts macl,Rn */
	r0 += r9;  /* 0C0AF192 add Rm,Rn */
	r9 = R32(r0); UPD(0x0C0AF196u, 3);  /* 0C0AF194 mov.l @Rm,Rn */
	r0 += 0x3Cu;  /* 0C0AF196 add #imm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r0); r0 += 1; r6 = v_; } UPD(0x0C0AF19Au, 2);  /* 0C0AF198 mov.b @Rm+,Rn */
	r10 = 0x2000000u; UPD(0x0C0AF19Cu, 1);  /* 0C0AF19A mov.l @(disp,pc),Rn */
	r5 = r6 & 0xFF;  /* 0C0AF19C extu.b Rm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r0); r0 += 1; r3 = v_; } UPD(0x0C0AF1A0u, 2);  /* 0C0AF19E mov.b @Rm+,Rn */
	r9 &= r10;  /* 0C0AF1A0 and Rm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r0); r0 += 1; r12 = v_; } UPD(0x0C0AF1A4u, 2);  /* 0C0AF1A2 mov.b @Rm+,Rn */
	IF(0x0C0AF1A4u); r5 <<= 16;  /* 0C0AF1A4 shll16 Rn */
	r6 = 0xC392D5Cu; UPD(0x0C0AF1A8u, 2);  /* 0C0AF1A6 mov.l @(disp,pc),Rn */
	r9 |= r5;  /* 0C0AF1A8 or Rm,Rn */
	r4 = r3 & 0xFF;  /* 0C0AF1AA extu.b Rm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r0); r0 += 1; r10 = v_; } UPD(0x0C0AF1AEu, 3);  /* 0C0AF1AC mov.b @Rm+,Rn */
	IF(0x0C0AF1AEu); r4 <<= 8;  /* 0C0AF1AE shll8 Rn */
	r5 = (u32)(s32)(s8)R8(r6); UPD(0x0C0AF1B2u, 2);  /* 0C0AF1B0 mov.b @Rm,Rn */
	r9 |= r4;  /* 0C0AF1B2 or Rm,Rn */
	r11 = r12 & 0xFF;  /* 0C0AF1B4 extu.b Rm,Rn */
	r3 = r10 & 0xFF;  /* 0C0AF1B6 extu.b Rm,Rn */
	r4 = r5 & 0xFF;  /* 0C0AF1B8 extu.b Rm,Rn */
	IF(0x0C0AF1BAu); MACL = r3 * r4;  /* 0C0AF1BA mul.l Rm,Rn */
	r9 |= r11;  /* 0C0AF1BC or Rm,Rn */
	r11 = 0xC283CB2u; UPD(0x0C0AF1C0u, 8);  /* 0C0AF1BE mov.l @(disp,pc),Rn */
	IF(0x0C0AF1C0u); r12 = MACL;  /* 0C0AF1C0 sts macl,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r0); r0 += 1; r1 = v_; } UPD(0x0C0AF1C4u, 2);  /* 0C0AF1C2 mov.b @Rm+,Rn */
	r12 += r12;  /* 0C0AF1C4 add Rm,Rn */
	r10 = (u32)(s32)(s8)R8(r11); UPD(0x0C0AF1C8u, 2);  /* 0C0AF1C6 mov.b @Rm,Rn */
	r6 = r1 & 0xFF;  /* 0C0AF1C8 extu.b Rm,Rn */
	r5 = r10 & 0xFF;  /* 0C0AF1CA extu.b Rm,Rn */
	r2 = 0xC392AF4u; UPD(0x0C0AF1CEu, 3);  /* 0C0AF1CC mov.l @(disp,pc),Rn */
	IF(0x0C0AF1CEu); r12 >>= 8;  /* 0C0AF1CE shlr8 Rn */
	r11 = 0xC392B09u; UPD(0x0C0AF1D2u, 2);  /* 0C0AF1D0 mov.l @(disp,pc),Rn */
	IF(0x0C0AF1D2u); MACL = r6 * r5;  /* 0C0AF1D2 mul.l Rm,Rn */
	r4 = r12 & 0xFF;  /* 0C0AF1D4 extu.b Rm,Rn */
	r12 = (u32)(s32)(s8)R8(r0); UPD(0x0C0AF1D8u, 4);  /* 0C0AF1D6 mov.b @Rm,Rn */
	IF(0x0C0AF1D8u); r3 = MACL;  /* 0C0AF1D8 sts macl,Rn */
	r10 = (u32)(s32)(s8)R8(r11); UPD(0x0C0AF1DCu, 2);  /* 0C0AF1DA mov.b @Rm,Rn */
	r6 = r12 & 0xFF;  /* 0C0AF1DC extu.b Rm,Rn */
	r7 = R32(r2); UPD(0x0C0AF1E0u, 2);  /* 0C0AF1DE mov.l @Rm,Rn */
	r5 = r10 & 0xFF;  /* 0C0AF1E0 extu.b Rm,Rn */
	r2 = 0x11000000u; UPD(0x0C0AF1E4u, 2);  /* 0C0AF1E2 mov.l @(disp,pc),Rn */
	IF(0x0C0AF1E4u); MACL = r6 * r5;  /* 0C0AF1E4 mul.l Rm,Rn */
	r3 += r3;  /* 0C0AF1E6 add Rm,Rn */
	IF(0x0C0AF1E8u); r3 >>= 8;  /* 0C0AF1E8 shlr8 Rn */
	r9 |= r2;  /* 0C0AF1EA or Rm,Rn */
	r2 = r3 & 0xFF;  /* 0C0AF1EC extu.b Rm,Rn */
	IF(0x0C0AF1EEu); r3 = MACL;  /* 0C0AF1EE sts macl,Rn */
	r1 = 0xFFFFFFF9u;  /* 0C0AF1F0 mov #imm,Rn */
	IF(0x0C0AF1F2u); ARG0(0x431Cu); { s32 s_ = (s32)r1; if (s_ >= 0) r3 <<= (s_ & 31); else if ((s_ & 31) == 0) r3 = (u32)((s32)r3 >> 31); else r3 = (u32)((s32)r3 >> ((~s_ & 31) + 1)); }  /* 0C0AF1F2 shad Rm,Rn */
	IF(0x0C0AF1F4u); r4 <<= 16;  /* 0C0AF1F4 shll16 Rn */
	IF(0x0C0AF1F6u); r2 <<= 8;  /* 0C0AF1F6 shll8 Rn */
	r0 = r3 & 0xFF;  /* 0C0AF1F8 extu.b Rm,Rn */
	r4 += r2;  /* 0C0AF1FA add Rm,Rn */
	r4 += r0;  /* 0C0AF1FC add Rm,Rn */
	r0 = 0x140u; UPD(0x0C0AF200u, 15);  /* 0C0AF1FE mov.w @(disp,pc),Rn */
	r5 = 0x0u;  /* 0C0AF200 mov #imm,Rn */
	IF(0x0C0AF202u); MACL = r13 * r0;  /* 0C0AF202 mul.l Rm,Rn */
	r12 = 0xC21CCF8u; UPD(0x0C0AF206u, 4);  /* 0C0AF204 mov.l @(disp,pc),Rn */
	r11 = 0xC223268u; UPD(0x0C0AF208u, 1);  /* 0C0AF206 mov.l @(disp,pc),Rn */
	IF(0x0C0AF208u); r6 = MACL; UPD(0x0C0AF20Au, 1);  /* 0C0AF208 sts macl,Rn */
	r10 = 0xC283CA8u; UPD(0x0C0AF20Cu, 1);  /* 0C0AF20A mov.l @(disp,pc),Rn */
	r6 += r6;  /* 0C0AF20C add Rm,Rn */
	r8 = 0xC21CCF4u; UPD(0x0C0AF210u, 2);  /* 0C0AF20E mov.l @(disp,pc),Rn */
L_0C0AF210: BLKS(0x0C0AF210u);
	r0 = r6;  /* 0C0AF210 mov Rm,Rn */
	IF(0x0C0AF212u); r13 = (u32)(s32)(s16)R16(r0 + r11); UPD(0x0C0AF214u, 2);  /* 0C0AF212 mov.w @(r0,Rm),Rn */
	r6 += 0x2u;  /* 0C0AF214 add #imm,Rn */
	IF(0x0C0AF216u); r3 = (u32)(s32)(s16)R16(r0 + r12); UPD(0x0C0AF218u, 2);  /* 0C0AF216 mov.w @(r0,Rm),Rn */
	r2 = 0x3E0u; UPD(0x0C0AF21Au, 1);  /* 0C0AF218 mov.w @(disp,pc),Rn */
	r0 = r13;  /* 0C0AF21A mov Rm,Rn */
	r1 = 0xFFE0u; UPD(0x0C0AF21Eu, 2);  /* 0C0AF21C mov.l @(disp,pc),Rn */
	r3 += r2;  /* 0C0AF21E add Rm,Rn */
	W32(r7, r9); UPD(0x0C0AF222u, 2);  /* 0C0AF220 mov.l Rm,@Rn */
	r0 += 0x60u;  /* 0C0AF222 add #imm,Rn */
	r0 &= r1;  /* 0C0AF224 and Rm,Rn */
	IF(0x0C0AF226u); r3 <<= 16;  /* 0C0AF226 shll16 Rn */
	r3 |= r0;  /* 0C0AF228 or Rm,Rn */
	r7 += 0x4u;  /* 0C0AF22A add #imm,Rn */
	W32(r7, r3); UPD(0x0C0AF22Eu, 6);  /* 0C0AF22C mov.l Rm,@Rn */
	r0 = r5;  /* 0C0AF22E mov Rm,Rn */
	r3 = R32(r8); UPD(0x0C0AF232u, 2);  /* 0C0AF230 mov.l @Rm,Rn */
	IF(0x0C0AF232u); r0 <<= 2;  /* 0C0AF232 shll2 Rn */
	r3 += r0;  /* 0C0AF234 add Rm,Rn */
	r0 = r13;  /* 0C0AF236 mov Rm,Rn */
	r13 = R32(r10); UPD(0x0C0AF23Au, 4);  /* 0C0AF238 mov.l @Rm,Rn */
	r0 &= 0x1Fu;  /* 0C0AF23A and #imm,r0 */
	r13 -= r0;  /* 0C0AF23C sub Rm,Rn */
	r2 = r13 & 0xFFFF;  /* 0C0AF23E extu.w Rm,Rn */
	IF(0x0C0AF240u); r3 <<= 16;  /* 0C0AF240 shll16 Rn */
	r7 += 0x4u;  /* 0C0AF242 add #imm,Rn */
	r3 |= r2;  /* 0C0AF244 or Rm,Rn */
	W32(r7, r3); UPD(0x0C0AF248u, 7);  /* 0C0AF246 mov.l Rm,@Rn */
	r13 = 0x51u;  /* 0C0AF248 mov #imm,Rn */
	r0 = 0x3010Fu; UPD(0x0C0AF24Cu, 2);  /* 0C0AF24A mov.l @(disp,pc),Rn */
	r7 += 0x4u;  /* 0C0AF24C add #imm,Rn */
	W32(r7, r0); UPD(0x0C0AF250u, 2);  /* 0C0AF24E mov.l Rm,@Rn */
	r3 = r5;  /* 0C0AF250 mov Rm,Rn */
	r7 += 0x4u;  /* 0C0AF252 add #imm,Rn */
	W32(r7, r4); UPD(0x0C0AF256u, 3);  /* 0C0AF254 mov.l Rm,@Rn */
	r3 += 0x1u;  /* 0C0AF256 add #imm,Rn */
	r5 = (u32)(s32)(s16)r3;  /* 0C0AF258 exts.w Rm,Rn */
	T = (s32)r5 > (s32)r13;  /* 0C0AF25A cmp/gt Rm,Rn */
	{ u32 c_ = !T; r7 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AF210u, 6); goto L_0C0AF210; } goto L_0C0AF260; }  /* 0C0AF25C bf/s */
L_0C0AF260: BLKS(0x0C0AF260u);
	r8 = 0xC392AF4u; UPD(0x0C0AF262u, 2);  /* 0C0AF260 mov.l @(disp,pc),Rn */
	W32(r8, r7); UPD(0x0C0AF264u, 1);  /* 0C0AF262 mov.l Rm,@Rn */
	r15 = r14;  /* 0C0AF264 mov Rm,Rn */
	IF(0x0C0AF266u); PR = R32(r15); r15 += 4; UPD(0x0C0AF268u, 2);  /* 0C0AF266 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AF26Au, 1);  /* 0C0AF268 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0AF26Cu, 1);  /* 0C0AF26A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0AF26Eu, 1);  /* 0C0AF26C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0AF270u, 1);  /* 0C0AF26E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AF272u, 1);  /* 0C0AF270 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AF274u, 1);  /* 0C0AF272 mov.l @Rm+,Rn */
	IF(0x0C0AF274u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AF274 rts */
}

void f_0C0AF2C0(sh3_t *c)
{
	LOCALS;
L_0C0AF2C0: BLKS(0x0C0AF2C0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF2C2u, 1);  /* 0C0AF2C0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF2C4u, 1);  /* 0C0AF2C2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF2C6u, 1);  /* 0C0AF2C4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF2C8u, 1);  /* 0C0AF2C6 mov.l Rm,@-Rn */
	r10 = 0x0u;  /* 0C0AF2C8 mov #imm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF2CCu, 2);  /* 0C0AF2CA mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C0AF2CC exts.w Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF2D0u, 2);  /* 0C0AF2CE mov.l Rm,@-Rn */
	r4 = r11;  /* 0C0AF2D0 mov Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF2D4u, 2);  /* 0C0AF2D2 mov.l Rm,@-Rn */
	r0 = 0xC0AEA10u; UPD(0x0C0AF2D6u, 1);  /* 0C0AF2D4 mov.l @(disp,pc),Rn */
	IF(0x0C0AF2D6u); r15 -= 4; W32(r15, PR); UPD(0x0C0AF2D8u, 1);  /* 0C0AF2D6 sts.l pr,@-Rn */
	IF(0x0C0AF2D8u); { u32 t_ = r0; PR = 0x0C0AF2DCu; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AEA10, 0x0C0AEA10u, 0x0C0AF2DCu); }  /* 0C0AF2D8 jsr @Rn */
L_0C0AF2DC: BLKS(0x0C0AF2DCu);
	r0 = 0xC286298u; UPD(0x0C0AF2DEu, 1);  /* 0C0AF2DC mov.l @(disp,pc),Rn */
	r13 = 0xC223268u; UPD(0x0C0AF2E0u, 1);  /* 0C0AF2DE mov.l @(disp,pc),Rn */
	r9 = R32(r0); UPD(0x0C0AF2E2u, 1);  /* 0C0AF2E0 mov.l @Rm,Rn */
	IF(0x0C0AF2E2u); ;  /* 0C0AF2E2 nop */
	UPD(0x0C0AF2E4u, 1);
L_0C0AF2E4: BLKS(0x0C0AF2E4u);
	r1 = 0x140u; UPD(0x0C0AF2E6u, 1);  /* 0C0AF2E4 mov.w @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C0AF2E6 mov #imm,Rn */
	IF(0x0C0AF2E8u); MACL = r11 * r1;  /* 0C0AF2E8 mul.l Rm,Rn */
	r0 = 0xC21CCF8u; UPD(0x0C0AF2ECu, 4);  /* 0C0AF2EA mov.l @(disp,pc),Rn */
	r12 = 0x4Cu;  /* 0C0AF2EC mov #imm,Rn */
	IF(0x0C0AF2EEu); r8 = MACL;  /* 0C0AF2EE sts macl,Rn */
	r8 += r10;  /* 0C0AF2F0 add Rm,Rn */
	r8 += r8;  /* 0C0AF2F2 add Rm,Rn */
	IF(0x0C0AF2F4u); W16(r0 + r8, r3); UPD(0x0C0AF2F6u, 5);  /* 0C0AF2F4 mov.w Rm,@(r0,Rn) */
	IF(0x0C0AF2F6u); MACL = r11 * r12;  /* 0C0AF2F6 mul.l Rm,Rn */
	r2 = 0xC286298u; UPD(0x0C0AF2FAu, 3);  /* 0C0AF2F8 mov.l @(disp,pc),Rn */
	r0 = 0xC26CAE0u; UPD(0x0C0AF2FCu, 1);  /* 0C0AF2FA mov.l @(disp,pc),Rn */
	IF(0x0C0AF2FCu); r12 = MACL;  /* 0C0AF2FC sts macl,Rn */
	r7 = 0xC058060u; UPD(0x0C0AF300u, 2);  /* 0C0AF2FE mov.l @(disp,pc),Rn */
	r0 += r12;  /* 0C0AF300 add Rm,Rn */
	r4 = R32(r2); UPD(0x0C0AF304u, 2);  /* 0C0AF302 mov.l @Rm,Rn */
	r0 += 0x48u;  /* 0C0AF304 add #imm,Rn */
	r4 += r10;  /* 0C0AF306 add Rm,Rn */
	IF(0x0C0AF308u); { u32 t_ = r7; PR = 0x0C0AF30Cu; r5 = R32(r0); /* slot mov.l @Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0AF30Cu); }  /* 0C0AF308 jsr @Rn */
L_0C0AF30C: BLKS(0x0C0AF30Cu);
	r6 = 0x10000u; UPD(0x0C0AF30Eu, 1);  /* 0C0AF30C mov.l @(disp,pc),Rn */
	r9 += r0;  /* 0C0AF30E add Rm,Rn */
	r9 += r6;  /* 0C0AF310 add Rm,Rn */
	r5 = r9;  /* 0C0AF312 mov Rm,Rn */
	r3 = r10;  /* 0C0AF314 mov Rm,Rn */
	IF(0x0C0AF316u); r5 >>= 16;  /* 0C0AF316 shlr16 Rn */
	r4 = r5 & 0xFF;  /* 0C0AF318 extu.b Rm,Rn */
	r0 = r8;  /* 0C0AF31A mov Rm,Rn */
	r3 += 0x1u;  /* 0C0AF31C add #imm,Rn */
	r2 = 0xEFu; UPD(0x0C0AF320u, 9);  /* 0C0AF31E mov.w @(disp,pc),Rn */
	r10 = (u32)(s32)(s16)r3;  /* 0C0AF320 exts.w Rm,Rn */
	T = (s32)r10 > (s32)r2;  /* 0C0AF322 cmp/gt Rm,Rn */
	{ u32 c_ = !T; IF(0x0C0AF326u); W16(r0 + r13, r4); /* slot mov.w Rm,@(r0,Rn) */ if (c_) { UPD(0x0C0AF2E4u, 5); goto L_0C0AF2E4; } UPD(0x0C0AF328u, 1); goto L_0C0AF328; }  /* 0C0AF324 bf/s */
L_0C0AF328: BLKS(0x0C0AF328u);
	r3 = 0xC26CB28u; UPD(0x0C0AF32Au, 1);  /* 0C0AF328 mov.l @(disp,pc),Rn */
	r3 += r12;  /* 0C0AF32A add Rm,Rn */
	r2 = R32(r3); UPD(0x0C0AF32Eu, 2);  /* 0C0AF32C mov.l @Rm,Rn */
	r8 = 0x8000u; UPD(0x0C0AF330u, 1);  /* 0C0AF32E mov.l @(disp,pc),Rn */
	T = r2 == r8;  /* 0C0AF330 cmp/eq Rm,Rn */
	if (T) { UPD(0x0C0AF33Au, 4); goto L_0C0AF33A; }  /* 0C0AF332 bt */
L_0C0AF334: BLKS(0x0C0AF334u);
	r9 = 0x80u; UPD(0x0C0AF336u, 1);  /* 0C0AF334 mov.w @(disp,pc),Rn */
	r2 += r9;  /* 0C0AF336 add Rm,Rn */
	W32(r3, r2); UPD(0x0C0AF33Au, 2);  /* 0C0AF338 mov.l Rm,@Rn */
L_0C0AF33A: BLKS(0x0C0AF33Au);
	r15 = r14;  /* 0C0AF33A mov Rm,Rn */
	IF(0x0C0AF33Cu); PR = R32(r15); r15 += 4; UPD(0x0C0AF33Eu, 2);  /* 0C0AF33C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AF340u, 1);  /* 0C0AF33E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0AF342u, 1);  /* 0C0AF340 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0AF344u, 1);  /* 0C0AF342 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0AF346u, 1);  /* 0C0AF344 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AF348u, 1);  /* 0C0AF346 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AF34Au, 1);  /* 0C0AF348 mov.l @Rm+,Rn */
	IF(0x0C0AF34Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AF34A rts */
}

void f_0C0AF380(sh3_t *c)
{
	LOCALS;
L_0C0AF380: BLKS(0x0C0AF380u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF382u, 1);  /* 0C0AF380 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF384u, 1);  /* 0C0AF382 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF386u, 1);  /* 0C0AF384 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF388u, 1);  /* 0C0AF386 mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s16)r4;  /* 0C0AF388 exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF38Cu, 2);  /* 0C0AF38A mov.l Rm,@-Rn */
	r4 = r10;  /* 0C0AF38C mov Rm,Rn */
	r6 = 0xC0AE310u; UPD(0x0C0AF390u, 2);  /* 0C0AF38E mov.l @(disp,pc),Rn */
	IF(0x0C0AF390u); r15 -= 4; W32(r15, PR); UPD(0x0C0AF392u, 1);  /* 0C0AF390 sts.l pr,@-Rn */
	IF(0x0C0AF392u); { u32 t_ = r6; PR = 0x0C0AF396u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AE310, 0x0C0AE310u, 0x0C0AF396u); }  /* 0C0AF392 jsr @Rn */
L_0C0AF396: BLKS(0x0C0AF396u);
	r5 = 0x4Cu;  /* 0C0AF396 mov #imm,Rn */
	IF(0x0C0AF398u); MACL = r10 * r5;  /* 0C0AF398 mul.l Rm,Rn */
	r9 = 0xC26CAE0u; UPD(0x0C0AF39Cu, 4);  /* 0C0AF39A mov.l @(disp,pc),Rn */
	IF(0x0C0AF39Cu); r5 = MACL;  /* 0C0AF39C sts macl,Rn */
	r5 += r9;  /* 0C0AF39E add Rm,Rn */
	r9 = R32(r5); UPD(0x0C0AF3A2u, 3);  /* 0C0AF3A0 mov.l @Rm,Rn */
	r5 += 0x3Cu;  /* 0C0AF3A2 add #imm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r5); r5 += 1; r2 = v_; } UPD(0x0C0AF3A6u, 2);  /* 0C0AF3A4 mov.b @Rm+,Rn */
	r7 = 0xC392AF4u; UPD(0x0C0AF3A8u, 1);  /* 0C0AF3A6 mov.l @(disp,pc),Rn */
	r3 = r2 & 0xFF;  /* 0C0AF3A8 extu.b Rm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r5); r5 += 1; r0 = v_; } UPD(0x0C0AF3ACu, 2);  /* 0C0AF3AA mov.b @Rm+,Rn */
	IF(0x0C0AF3ACu); r3 <<= 16;  /* 0C0AF3AC shll16 Rn */
	r4 = 0x2000000u; UPD(0x0C0AF3B0u, 2);  /* 0C0AF3AE mov.l @(disp,pc),Rn */
	r11 = r0 & 0xFF;  /* 0C0AF3B0 extu.b Rm,Rn */
	r6 = R32(r7); UPD(0x0C0AF3B4u, 2);  /* 0C0AF3B2 mov.l @Rm,Rn */
	r9 &= r4;  /* 0C0AF3B4 and Rm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r5); r5 += 1; r7 = v_; } UPD(0x0C0AF3B8u, 2);  /* 0C0AF3B6 mov.b @Rm+,Rn */
	r9 |= r3;  /* 0C0AF3B8 or Rm,Rn */
	IF(0x0C0AF3BAu); r11 <<= 8;  /* 0C0AF3BA shll8 Rn */
	r0 = 0xC392D5Cu; UPD(0x0C0AF3BEu, 3);  /* 0C0AF3BC mov.l @(disp,pc),Rn */
	r9 |= r11;  /* 0C0AF3BE or Rm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r5); r5 += 1; r3 = v_; } UPD(0x0C0AF3C2u, 2);  /* 0C0AF3C0 mov.b @Rm+,Rn */
	r4 = r7 & 0xFF;  /* 0C0AF3C2 extu.b Rm,Rn */
	r11 = (u32)(s32)(s8)R8(r0); UPD(0x0C0AF3C6u, 2);  /* 0C0AF3C4 mov.b @Rm,Rn */
	r7 = r3 & 0xFF;  /* 0C0AF3C6 extu.b Rm,Rn */
	r9 |= r4;  /* 0C0AF3C8 or Rm,Rn */
	r4 = r11 & 0xFF;  /* 0C0AF3CA extu.b Rm,Rn */
	r3 = 0xC283CB2u; UPD(0x0C0AF3CEu, 4);  /* 0C0AF3CC mov.l @(disp,pc),Rn */
	IF(0x0C0AF3CEu); MACL = r7 * r4;  /* 0C0AF3CE mul.l Rm,Rn */
	r2 = 0x11000000u; UPD(0x0C0AF3D2u, 3);  /* 0C0AF3D0 mov.l @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r5); r5 += 1; r1 = v_; } UPD(0x0C0AF3D4u, 1);  /* 0C0AF3D2 mov.b @Rm+,Rn */
	r9 |= r2;  /* 0C0AF3D4 or Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r3); UPD(0x0C0AF3D8u, 2);  /* 0C0AF3D6 mov.b @Rm,Rn */
	r11 = r1 & 0xFF;  /* 0C0AF3D8 extu.b Rm,Rn */
	r7 = r0 & 0xFF;  /* 0C0AF3DA extu.b Rm,Rn */
	IF(0x0C0AF3DCu); r2 = MACL;  /* 0C0AF3DC sts macl,Rn */
	IF(0x0C0AF3DEu); MACL = r11 * r7;  /* 0C0AF3DE mul.l Rm,Rn */
	r0 = 0xC392B09u; UPD(0x0C0AF3E2u, 6);  /* 0C0AF3E0 mov.l @(disp,pc),Rn */
	r2 += r2;  /* 0C0AF3E2 add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r5); UPD(0x0C0AF3E6u, 2);  /* 0C0AF3E4 mov.b @Rm,Rn */
	IF(0x0C0AF3E6u); r3 = MACL;  /* 0C0AF3E6 sts macl,Rn */
	r11 = (u32)(s32)(s8)R8(r0); UPD(0x0C0AF3EAu, 2);  /* 0C0AF3E8 mov.b @Rm,Rn */
	r7 = r1 & 0xFF;  /* 0C0AF3EA extu.b Rm,Rn */
	r5 = r11 & 0xFF;  /* 0C0AF3EC extu.b Rm,Rn */
	IF(0x0C0AF3EEu); MACL = r7 * r5;  /* 0C0AF3EE mul.l Rm,Rn */
	IF(0x0C0AF3F0u); r2 >>= 8;  /* 0C0AF3F0 shlr8 Rn */
	r3 += r3;  /* 0C0AF3F2 add Rm,Rn */
	r4 = r2 & 0xFF;  /* 0C0AF3F4 extu.b Rm,Rn */
	IF(0x0C0AF3F6u); r3 >>= 8;  /* 0C0AF3F6 shlr8 Rn */
	r2 = r3 & 0xFF;  /* 0C0AF3F8 extu.b Rm,Rn */
	IF(0x0C0AF3FAu); r3 = MACL;  /* 0C0AF3FA sts macl,Rn */
	r1 = 0xFFFFFFF9u;  /* 0C0AF3FC mov #imm,Rn */
	IF(0x0C0AF3FEu); ARG0(0x431Cu); { s32 s_ = (s32)r1; if (s_ >= 0) r3 <<= (s_ & 31); else if ((s_ & 31) == 0) r3 = (u32)((s32)r3 >> 31); else r3 = (u32)((s32)r3 >> ((~s_ & 31) + 1)); }  /* 0C0AF3FE shad Rm,Rn */
	IF(0x0C0AF400u); r4 <<= 16;  /* 0C0AF400 shll16 Rn */
	IF(0x0C0AF402u); r2 <<= 8;  /* 0C0AF402 shll8 Rn */
	r0 = r3 & 0xFF;  /* 0C0AF404 extu.b Rm,Rn */
	r4 += r2;  /* 0C0AF406 add Rm,Rn */
	r4 += r0;  /* 0C0AF408 add Rm,Rn */
	r0 = 0x140u; UPD(0x0C0AF40Cu, 18);  /* 0C0AF40A mov.w @(disp,pc),Rn */
	r5 = 0x0u;  /* 0C0AF40C mov #imm,Rn */
	IF(0x0C0AF40Eu); MACL = r10 * r0;  /* 0C0AF40E mul.l Rm,Rn */
	r11 = 0xC21CCF8u; UPD(0x0C0AF412u, 4);  /* 0C0AF410 mov.l @(disp,pc),Rn */
	r10 = 0xC223268u; UPD(0x0C0AF414u, 1);  /* 0C0AF412 mov.l @(disp,pc),Rn */
	IF(0x0C0AF414u); r0 = MACL; UPD(0x0C0AF416u, 1);  /* 0C0AF414 sts macl,Rn */
	r8 = 0xC21CCF4u; UPD(0x0C0AF418u, 1);  /* 0C0AF416 mov.l @(disp,pc),Rn */
	r0 += r0;  /* 0C0AF418 add Rm,Rn */
	IF(0x0C0AF41Au); ;  /* 0C0AF41A nop */
	UPD(0x0C0AF41Cu, 2);
L_0C0AF41C: BLKS(0x0C0AF41Cu);
	IF(0x0C0AF41Cu); r7 = (u32)(s32)(s16)R16(r0 + r11); UPD(0x0C0AF41Eu, 1);  /* 0C0AF41C mov.w @(r0,Rm),Rn */
	r1 = 0xFFE0u; UPD(0x0C0AF420u, 1);  /* 0C0AF41E mov.l @(disp,pc),Rn */
	r3 = 0x3E0u; UPD(0x0C0AF422u, 1);  /* 0C0AF420 mov.w @(disp,pc),Rn */
	r1 &= r7;  /* 0C0AF422 and Rm,Rn */
	r1 += r3;  /* 0C0AF424 add Rm,Rn */
	IF(0x0C0AF426u); r2 = (u32)(s32)(s16)R16(r0 + r10); UPD(0x0C0AF428u, 3);  /* 0C0AF426 mov.w @(r0,Rm),Rn */
	IF(0x0C0AF428u); r1 <<= 16;  /* 0C0AF428 shll16 Rn */
	r3 = 0x88u; UPD(0x0C0AF42Cu, 2);  /* 0C0AF42A mov.w @(disp,pc),Rn */
	r0 += 0x2u;  /* 0C0AF42C add #imm,Rn */
	W32(r6, r9); UPD(0x0C0AF430u, 2);  /* 0C0AF42E mov.l Rm,@Rn */
	r2 += r3;  /* 0C0AF430 add Rm,Rn */
	r6 += 0x4u;  /* 0C0AF432 add #imm,Rn */
	r1 |= r2;  /* 0C0AF434 or Rm,Rn */
	W32(r6, r1); UPD(0x0C0AF438u, 4);  /* 0C0AF436 mov.l Rm,@Rn */
	r3 = R32(r8); UPD(0x0C0AF43Au, 1);  /* 0C0AF438 mov.l @Rm,Rn */
	r6 += 0x4u;  /* 0C0AF43A add #imm,Rn */
	r3 -= r7;  /* 0C0AF43C sub Rm,Rn */
	r7 = 0xC283CA8u; UPD(0x0C0AF440u, 3);  /* 0C0AF43E mov.l @(disp,pc),Rn */
	IF(0x0C0AF440u); r3 <<= 16;  /* 0C0AF440 shll16 Rn */
	r2 = R32(r7); UPD(0x0C0AF444u, 2);  /* 0C0AF442 mov.l @Rm,Rn */
	r2 += r5;  /* 0C0AF444 add Rm,Rn */
	r3 |= r2;  /* 0C0AF446 or Rm,Rn */
	W32(r6, r3); UPD(0x0C0AF44Au, 3);  /* 0C0AF448 mov.l Rm,@Rn */
	r2 = r5;  /* 0C0AF44A mov Rm,Rn */
	r7 = 0x1600000u; UPD(0x0C0AF44Eu, 2);  /* 0C0AF44C mov.l @(disp,pc),Rn */
	r6 += 0x4u;  /* 0C0AF44E add #imm,Rn */
	W32(r6, r7); UPD(0x0C0AF452u, 2);  /* 0C0AF450 mov.l Rm,@Rn */
	r2 += 0x1u;  /* 0C0AF452 add #imm,Rn */
	r6 += 0x4u;  /* 0C0AF454 add #imm,Rn */
	W32(r6, r4); UPD(0x0C0AF458u, 3);  /* 0C0AF456 mov.l Rm,@Rn */
	r5 = (u32)(s32)(s16)r2;  /* 0C0AF458 exts.w Rm,Rn */
	r3 = 0xEFu; UPD(0x0C0AF45Cu, 2);  /* 0C0AF45A mov.w @(disp,pc),Rn */
	T = (s32)r5 > (s32)r3;  /* 0C0AF45C cmp/gt Rm,Rn */
	{ u32 c_ = !T; r6 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AF41Cu, 4); goto L_0C0AF41C; } goto L_0C0AF462; }  /* 0C0AF45E bf/s */
L_0C0AF462: BLKS(0x0C0AF462u);
	r10 = 0xC0000001u; UPD(0x0C0AF464u, 2);  /* 0C0AF462 mov.l @(disp,pc),Rn */
	W32(r6, r10); UPD(0x0C0AF466u, 1);  /* 0C0AF464 mov.l Rm,@Rn */
	r8 = 0xC392AF4u; UPD(0x0C0AF468u, 1);  /* 0C0AF466 mov.l @(disp,pc),Rn */
	r6 += 0x4u;  /* 0C0AF468 add #imm,Rn */
	W32(r8, r6); UPD(0x0C0AF46Cu, 2);  /* 0C0AF46A mov.l Rm,@Rn */
	r15 = r14;  /* 0C0AF46C mov Rm,Rn */
	IF(0x0C0AF46Eu); PR = R32(r15); r15 += 4; UPD(0x0C0AF470u, 2);  /* 0C0AF46E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AF472u, 1);  /* 0C0AF470 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0AF474u, 1);  /* 0C0AF472 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AF476u, 1);  /* 0C0AF474 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AF478u, 1);  /* 0C0AF476 mov.l @Rm+,Rn */
	IF(0x0C0AF478u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AF478 rts */
}

void f_0C0AF4C0(sh3_t *c)
{
	LOCALS;
L_0C0AF4C0: BLKS(0x0C0AF4C0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF4C2u, 1);  /* 0C0AF4C0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF4C4u, 1);  /* 0C0AF4C2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF4C6u, 1);  /* 0C0AF4C4 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C0AF4C6 exts.w Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF4CAu, 2);  /* 0C0AF4C8 mov.l Rm,@-Rn */
	r4 = r9;  /* 0C0AF4CA mov Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF4CEu, 2);  /* 0C0AF4CC mov.l Rm,@-Rn */
	r7 = 0xC0AE8F0u; UPD(0x0C0AF4D0u, 1);  /* 0C0AF4CE mov.l @(disp,pc),Rn */
	IF(0x0C0AF4D0u); r15 -= 4; W32(r15, PR); UPD(0x0C0AF4D2u, 1);  /* 0C0AF4D0 sts.l pr,@-Rn */
	IF(0x0C0AF4D2u); { u32 t_ = r7; PR = 0x0C0AF4D6u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AE8F0, 0x0C0AE8F0u, 0x0C0AF4D6u); }  /* 0C0AF4D2 jsr @Rn */
L_0C0AF4D6: BLKS(0x0C0AF4D6u);
	r6 = 0x4Cu;  /* 0C0AF4D6 mov #imm,Rn */
	IF(0x0C0AF4D8u); MACL = r9 * r6;  /* 0C0AF4D8 mul.l Rm,Rn */
	r4 = 0xC26CAE0u; UPD(0x0C0AF4DCu, 4);  /* 0C0AF4DA mov.l @(disp,pc),Rn */
	IF(0x0C0AF4DCu); r6 = MACL;  /* 0C0AF4DC sts macl,Rn */
	r6 += r4;  /* 0C0AF4DE add Rm,Rn */
	r4 = R32(r6); UPD(0x0C0AF4E2u, 3);  /* 0C0AF4E0 mov.l @Rm,Rn */
	r6 += 0x3Cu;  /* 0C0AF4E2 add #imm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r6); r6 += 1; r5 = v_; } UPD(0x0C0AF4E6u, 2);  /* 0C0AF4E4 mov.b @Rm+,Rn */
	r10 = 0xC392AF4u; UPD(0x0C0AF4E8u, 1);  /* 0C0AF4E6 mov.l @(disp,pc),Rn */
	r2 = r5 & 0xFF;  /* 0C0AF4E8 extu.b Rm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r6); r6 += 1; r0 = v_; } UPD(0x0C0AF4ECu, 2);  /* 0C0AF4EA mov.b @Rm+,Rn */
	IF(0x0C0AF4ECu); r2 <<= 16;  /* 0C0AF4EC shll16 Rn */
	r3 = 0x2000000u; UPD(0x0C0AF4F0u, 2);  /* 0C0AF4EE mov.l @(disp,pc),Rn */
	r7 = R32(r10); UPD(0x0C0AF4F2u, 1);  /* 0C0AF4F0 mov.l @Rm,Rn */
	r4 &= r3;  /* 0C0AF4F2 and Rm,Rn */
	r10 = r0 & 0xFF;  /* 0C0AF4F4 extu.b Rm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r6); r6 += 1; r3 = v_; } UPD(0x0C0AF4F8u, 3);  /* 0C0AF4F6 mov.b @Rm+,Rn */
	r4 |= r2;  /* 0C0AF4F8 or Rm,Rn */
	IF(0x0C0AF4FAu); r10 <<= 8;  /* 0C0AF4FA shll8 Rn */
	r0 = 0xC392D5Cu; UPD(0x0C0AF4FEu, 3);  /* 0C0AF4FC mov.l @(disp,pc),Rn */
	r4 |= r10;  /* 0C0AF4FE or Rm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r6); r6 += 1; r1 = v_; } UPD(0x0C0AF502u, 2);  /* 0C0AF500 mov.b @Rm+,Rn */
	r5 = r3 & 0xFF;  /* 0C0AF502 extu.b Rm,Rn */
	r10 = (u32)(s32)(s8)R8(r0); UPD(0x0C0AF506u, 2);  /* 0C0AF504 mov.b @Rm,Rn */
	r4 |= r5;  /* 0C0AF506 or Rm,Rn */
	r3 = r1 & 0xFF;  /* 0C0AF508 extu.b Rm,Rn */
	r5 = r10 & 0xFF;  /* 0C0AF50A extu.b Rm,Rn */
	r0 = 0xC283CB2u; UPD(0x0C0AF50Eu, 4);  /* 0C0AF50C mov.l @(disp,pc),Rn */
	IF(0x0C0AF50Eu); MACL = r3 * r5;  /* 0C0AF50E mul.l Rm,Rn */
	r2 = 0x11000000u; UPD(0x0C0AF512u, 3);  /* 0C0AF510 mov.l @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r6); r6 += 1; r1 = v_; } UPD(0x0C0AF514u, 1);  /* 0C0AF512 mov.b @Rm+,Rn */
	r4 |= r2;  /* 0C0AF514 or Rm,Rn */
	r10 = (u32)(s32)(s8)R8(r0); UPD(0x0C0AF518u, 2);  /* 0C0AF516 mov.b @Rm,Rn */
	r3 = r1 & 0xFF;  /* 0C0AF518 extu.b Rm,Rn */
	r0 = r10 & 0xFF;  /* 0C0AF51A extu.b Rm,Rn */
	IF(0x0C0AF51Cu); r2 = MACL;  /* 0C0AF51C sts macl,Rn */
	IF(0x0C0AF51Eu); MACL = r3 * r0;  /* 0C0AF51E mul.l Rm,Rn */
	r2 += r2;  /* 0C0AF520 add Rm,Rn */
	IF(0x0C0AF522u); r2 >>= 8;  /* 0C0AF522 shlr8 Rn */
	IF(0x0C0AF524u); r10 = MACL;  /* 0C0AF524 sts macl,Rn */
	r3 = 0xC392B09u; UPD(0x0C0AF528u, 9);  /* 0C0AF526 mov.l @(disp,pc),Rn */
	r10 += r10;  /* 0C0AF528 add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r6); UPD(0x0C0AF52Cu, 2);  /* 0C0AF52A mov.b @Rm,Rn */
	r5 = r2 & 0xFF;  /* 0C0AF52C extu.b Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r3); UPD(0x0C0AF530u, 2);  /* 0C0AF52E mov.b @Rm,Rn */
	IF(0x0C0AF530u); r10 >>= 8;  /* 0C0AF530 shlr8 Rn */
	r2 = r10 & 0xFF;  /* 0C0AF532 extu.b Rm,Rn */
	r10 = r1 & 0xFF;  /* 0C0AF534 extu.b Rm,Rn */
	r6 = r0 & 0xFF;  /* 0C0AF536 extu.b Rm,Rn */
	IF(0x0C0AF538u); MACL = r10 * r6;  /* 0C0AF538 mul.l Rm,Rn */
	r11 = 0x140u; UPD(0x0C0AF53Cu, 7);  /* 0C0AF53A mov.w @(disp,pc),Rn */
	r1 = 0xFFFFFFF9u;  /* 0C0AF53C mov #imm,Rn */
	IF(0x0C0AF53Eu); r3 = MACL;  /* 0C0AF53E sts macl,Rn */
	IF(0x0C0AF540u); MACL = r9 * r11;  /* 0C0AF540 mul.l Rm,Rn */
	IF(0x0C0AF542u); ARG0(0x431Cu); { s32 s_ = (s32)r1; if (s_ >= 0) r3 <<= (s_ & 31); else if ((s_ & 31) == 0) r3 = (u32)((s32)r3 >> 31); else r3 = (u32)((s32)r3 >> ((~s_ & 31) + 1)); }  /* 0C0AF542 shad Rm,Rn */
	IF(0x0C0AF544u); r5 <<= 16;  /* 0C0AF544 shll16 Rn */
	IF(0x0C0AF546u); r2 <<= 8;  /* 0C0AF546 shll8 Rn */
	r10 = 0xC21CCF8u; UPD(0x0C0AF54Au, 8);  /* 0C0AF548 mov.l @(disp,pc),Rn */
	r5 += r2;  /* 0C0AF54A add Rm,Rn */
	r9 = 0xC21CCF4u; UPD(0x0C0AF54Eu, 2);  /* 0C0AF54C mov.l @(disp,pc),Rn */
	r0 = r3 & 0xFF;  /* 0C0AF54E extu.b Rm,Rn */
	r5 += r0;  /* 0C0AF550 add Rm,Rn */
	r6 = 0x0u;  /* 0C0AF552 mov #imm,Rn */
	IF(0x0C0AF554u); r8 = MACL; UPD(0x0C0AF556u, 4);  /* 0C0AF554 sts macl,Rn */
	IF(0x0C0AF556u); ;  /* 0C0AF556 nop */
	UPD(0x0C0AF558u, 1);
L_0C0AF558: BLKS(0x0C0AF558u);
	r0 = r6;  /* 0C0AF558 mov Rm,Rn */
	r0 &= 0x3Fu;  /* 0C0AF55A and #imm,r0 */
	r0 += r8;  /* 0C0AF55C add Rm,Rn */
	r0 += r0;  /* 0C0AF55E add Rm,Rn */
	IF(0x0C0AF560u); r3 = (u32)(s32)(s16)R16(r0 + r10); UPD(0x0C0AF562u, 5);  /* 0C0AF560 mov.w @(r0,Rm),Rn */
	r0 = 0xFFE0u; UPD(0x0C0AF564u, 1);  /* 0C0AF562 mov.l @(disp,pc),Rn */
	r2 = 0x3E0u; UPD(0x0C0AF566u, 1);  /* 0C0AF564 mov.w @(disp,pc),Rn */
	r0 &= r3;  /* 0C0AF566 and Rm,Rn */
	r0 += r2;  /* 0C0AF568 add Rm,Rn */
	r2 = 0x88u; UPD(0x0C0AF56Cu, 3);  /* 0C0AF56A mov.w @(disp,pc),Rn */
	IF(0x0C0AF56Cu); r0 <<= 16;  /* 0C0AF56C shll16 Rn */
	W32(r7, r4); UPD(0x0C0AF570u, 2);  /* 0C0AF56E mov.l Rm,@Rn */
	r2 += r6;  /* 0C0AF570 add Rm,Rn */
	r0 |= r2;  /* 0C0AF572 or Rm,Rn */
	r7 += 0x4u;  /* 0C0AF574 add #imm,Rn */
	W32(r7, r0); UPD(0x0C0AF578u, 4);  /* 0C0AF576 mov.l Rm,@Rn */
	r0 = r3;  /* 0C0AF578 mov Rm,Rn */
	r2 = R32(r9); UPD(0x0C0AF57Cu, 2);  /* 0C0AF57A mov.l @Rm,Rn */
	r0 &= 0x1Fu;  /* 0C0AF57C and #imm,r0 */
	r1 = 0xC283CA8u; UPD(0x0C0AF580u, 2);  /* 0C0AF57E mov.l @(disp,pc),Rn */
	r2 -= r0;  /* 0C0AF580 sub Rm,Rn */
	r0 = R32(r1); UPD(0x0C0AF584u, 2);  /* 0C0AF582 mov.l @Rm,Rn */
	IF(0x0C0AF584u); r2 <<= 16;  /* 0C0AF584 shll16 Rn */
	r0 += r6;  /* 0C0AF586 add Rm,Rn */
	r2 |= r0;  /* 0C0AF588 or Rm,Rn */
	r7 += 0x4u;  /* 0C0AF58A add #imm,Rn */
	W32(r7, r2); UPD(0x0C0AF58Eu, 5);  /* 0C0AF58C mov.l Rm,@Rn */
	r0 = 0x1Cu;  /* 0C0AF58E mov #imm,Rn */
	r2 = 0x143u; UPD(0x0C0AF592u, 2);  /* 0C0AF590 mov.w @(disp,pc),Rn */
	r3 &= r0;  /* 0C0AF592 and Rm,Rn */
	r3 += r2;  /* 0C0AF594 add Rm,Rn */
	r7 += 0x4u;  /* 0C0AF596 add #imm,Rn */
	IF(0x0C0AF598u); r3 <<= 16;  /* 0C0AF598 shll16 Rn */
	W32(r7, r3); UPD(0x0C0AF59Cu, 5);  /* 0C0AF59A mov.l Rm,@Rn */
	r0 = r6;  /* 0C0AF59C mov Rm,Rn */
	r7 += 0x4u;  /* 0C0AF59E add #imm,Rn */
	W32(r7, r5); UPD(0x0C0AF5A2u, 3);  /* 0C0AF5A0 mov.l Rm,@Rn */
	r0 += 0x1u;  /* 0C0AF5A2 add #imm,Rn */
	r6 = (u32)(s32)(s16)r0;  /* 0C0AF5A4 exts.w Rm,Rn */
	T = (s32)r6 >= (s32)r11;  /* 0C0AF5A6 cmp/ge Rm,Rn */
	{ u32 c_ = !T; r7 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AF558u, 6); goto L_0C0AF558; } goto L_0C0AF5AC; }  /* 0C0AF5A8 bf/s */
L_0C0AF5AC: BLKS(0x0C0AF5ACu);
	r8 = 0xC392AF4u; UPD(0x0C0AF5AEu, 2);  /* 0C0AF5AC mov.l @(disp,pc),Rn */
	W32(r8, r7); UPD(0x0C0AF5B0u, 1);  /* 0C0AF5AE mov.l Rm,@Rn */
	r15 = r14;  /* 0C0AF5B0 mov Rm,Rn */
	IF(0x0C0AF5B2u); PR = R32(r15); r15 += 4; UPD(0x0C0AF5B4u, 2);  /* 0C0AF5B2 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AF5B6u, 1);  /* 0C0AF5B4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0AF5B8u, 1);  /* 0C0AF5B6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AF5BAu, 1);  /* 0C0AF5B8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AF5BCu, 1);  /* 0C0AF5BA mov.l @Rm+,Rn */
	IF(0x0C0AF5BCu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AF5BC rts */
}

/* FUN_0c0af600 */
void f_0C0AF600(sh3_t *c)
{
	LOCALS;
L_0C0AF600: BLKS(0x0C0AF600u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF602u, 1);  /* 0C0AF600 mov.l Rm,@-Rn */
	r7 = 0x0u;  /* 0C0AF602 mov #imm,Rn */
	r5 = 0xC26CAE0u; UPD(0x0C0AF606u, 2);  /* 0C0AF604 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0AF606 mov Rm,Rn */
	r4 = 0xC2864B8u; UPD(0x0C0AF60Au, 2);  /* 0C0AF608 mov.l @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C0AF60A mov #imm,Rn */
	r6 = 0x7u;  /* 0C0AF60C mov #imm,Rn */
	IF(0x0C0AF60Eu); ;  /* 0C0AF60E nop */
	UPD(0x0C0AF610u, 3);
L_0C0AF610: BLKS(0x0C0AF610u);
	r2 = r3;  /* 0C0AF610 mov Rm,Rn */
	r2 += r5;  /* 0C0AF612 add Rm,Rn */
	r0 = R32(r2); UPD(0x0C0AF616u, 3);  /* 0C0AF614 mov.l @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0AF616 tst Rm,Rn */
	{ u32 c_ = T; r2 += 0x42u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AF62Eu, 4); goto L_0C0AF62E; } goto L_0C0AF61C; }  /* 0C0AF618 bt/s */
L_0C0AF61C: BLKS(0x0C0AF61Cu);
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C0AF61Eu, 2);  /* 0C0AF61C mov.b @Rm,Rn */
	r1 = 0x1Fu;  /* 0C0AF61E mov #imm,Rn */
	r1 &= r0;  /* 0C0AF620 and Rm,Rn */
	r1 += r1;  /* 0C0AF622 add Rm,Rn */
	r0 = r1;  /* 0C0AF624 mov Rm,Rn */
	r0 += r4;  /* 0C0AF626 add Rm,Rn */
	r2 = (u32)(s32)(s16)R16(r0); UPD(0x0C0AF62Au, 6);  /* 0C0AF628 mov.w @Rm,Rn */
	r2 += 0x1u;  /* 0C0AF62A add #imm,Rn */
	W16(r0, r2); UPD(0x0C0AF62Eu, 2);  /* 0C0AF62C mov.w Rm,@Rn */
L_0C0AF62E: BLKS(0x0C0AF62Eu);
	r2 = r7;  /* 0C0AF62E mov Rm,Rn */
	r2 += 0x1u;  /* 0C0AF630 add #imm,Rn */
	r7 = (u32)(s32)(s16)r2;  /* 0C0AF632 exts.w Rm,Rn */
	T = (s32)r7 > (s32)r6;  /* 0C0AF634 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r3 += 0x4Cu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AF610u, 7); goto L_0C0AF610; } goto L_0C0AF63A; }  /* 0C0AF636 bf/s */
L_0C0AF63A: BLKS(0x0C0AF63Au);
	r15 = r14;  /* 0C0AF63A mov Rm,Rn */
	IF(0x0C0AF63Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C0AF63C rts */
}

/* FUN_0c0af650 */
void f_0C0AF650(sh3_t *c)
{
	LOCALS;
L_0C0AF650: BLKS(0x0C0AF650u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF652u, 1);  /* 0C0AF650 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF654u, 1);  /* 0C0AF652 mov.l Rm,@-Rn */
	r8 = 0x0u;  /* 0C0AF654 mov #imm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF658u, 2);  /* 0C0AF656 mov.l Rm,@-Rn */
	r9 = 0x0u;  /* 0C0AF658 mov #imm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF65Cu, 2);  /* 0C0AF65A mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s8)r4;  /* 0C0AF65C exts.b Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF660u, 2);  /* 0C0AF65E mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF662u, 1);  /* 0C0AF660 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF664u, 1);  /* 0C0AF662 mov.l Rm,@-Rn */
	r11 = 0xC26CAE0u; UPD(0x0C0AF666u, 1);  /* 0C0AF664 mov.l @(disp,pc),Rn */
	IF(0x0C0AF666u); r15 -= 4; W32(r15, PR); UPD(0x0C0AF668u, 1);  /* 0C0AF666 sts.l pr,@-Rn */
	r13 = 0xC21CA10u; UPD(0x0C0AF66Au, 1);  /* 0C0AF668 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0AF66A mov Rm,Rn */
	r12 = 0xC1F5200u; UPD(0x0C0AF66Eu, 2);  /* 0C0AF66C mov.l @(disp,pc),Rn */
	IF(0x0C0AF66Eu); ;  /* 0C0AF66E nop */
	UPD(0x0C0AF670u, 1);
L_0C0AF670: BLKS(0x0C0AF670u);
	r3 = r9;  /* 0C0AF670 mov Rm,Rn */
	r3 += r11;  /* 0C0AF672 add Rm,Rn */
	r0 = R32(r3); UPD(0x0C0AF676u, 3);  /* 0C0AF674 mov.l @Rm,Rn */
	r3 += 0x42u;  /* 0C0AF676 add #imm,Rn */
	r4 = (u32)(s32)(s8)R8(r3); UPD(0x0C0AF67Au, 2);  /* 0C0AF678 mov.b @Rm,Rn */
	IF(0x0C0AF67Au); r0 >>= 16;  /* 0C0AF67A shlr16 Rn */
	r2 = r4 & 0xFF;  /* 0C0AF67C extu.b Rm,Rn */
	IF(0x0C0AF67Eu); r0 <<= 2;  /* 0C0AF67E shll2 Rn */
	T = r2 == r10;  /* 0C0AF680 cmp/eq Rm,Rn */
	IF(0x0C0AF682u); r0 >>= 16;  /* 0C0AF682 shlr16 Rn */
	IF(0x0C0AF684u); r2 = T;  /* 0C0AF684 movt Rn */
	r0 &= 0x1u;  /* 0C0AF686 and #imm,r0 */
	r0 &= r2;  /* 0C0AF688 and Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0AF68A tst Rm,Rn */
	{ u32 c_ = T; r3 += 0xFFFFFFBEu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AF6B2u, 12); goto L_0C0AF6B2; } goto L_0C0AF690; }  /* 0C0AF68C bt/s */
L_0C0AF690: BLKS(0x0C0AF690u);
	r2 = 0xC392AF4u; UPD(0x0C0AF692u, 2);  /* 0C0AF690 mov.l @(disp,pc),Rn */
	r4 = 0xC392DD8u; UPD(0x0C0AF694u, 1);  /* 0C0AF692 mov.l @(disp,pc),Rn */
	r6 = R32(r2); UPD(0x0C0AF696u, 1);  /* 0C0AF694 mov.l @Rm,Rn */
	r7 = R32(r4); UPD(0x0C0AF698u, 1);  /* 0C0AF696 mov.l @Rm,Rn */
	r6 -= r7;  /* 0C0AF698 sub Rm,Rn */
	IF(0x0C0AF69Au); T = r6 & 1; r6 = (u32)((s32)r6 >> 1);  /* 0C0AF69A shar Rn */
	r5 = R32(r13); UPD(0x0C0AF69Eu, 3);  /* 0C0AF69C mov.l @Rm,Rn */
	IF(0x0C0AF69Eu); T = r6 & 1; r6 = (u32)((s32)r6 >> 1);  /* 0C0AF69E shar Rn */
	r0 = 0x2803u; UPD(0x0C0AF6A2u, 2);  /* 0C0AF6A0 mov.w @(disp,pc),Rn */
	r5 -= r6;  /* 0C0AF6A2 sub Rm,Rn */
	T = (s32)r5 > (s32)r0;  /* 0C0AF6A4 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0AF6C0u, 5); goto L_0C0AF6C0; }  /* 0C0AF6A6 bf */
L_0C0AF6A8: BLKS(0x0C0AF6A8u);
	r0 = R32(r3 + 0x4u); UPD(0x0C0AF6AAu, 1);  /* 0C0AF6A8 mov.l @(disp,Rm),Rn */
	IF(0x0C0AF6AAu); r0 <<= 2;  /* 0C0AF6AA shll2 Rn */
	IF(0x0C0AF6ACu); r3 = R32(r0 + r12); UPD(0x0C0AF6AEu, 2);  /* 0C0AF6AC mov.l @(r0,Rm),Rn */
	IF(0x0C0AF6AEu); { u32 t_ = r3; PR = 0x0C0AF6B2u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C0AF6B2u); }  /* 0C0AF6AE jsr @Rn */
L_0C0AF6B2: BLKS(0x0C0AF6B2u);
	r5 = r8;  /* 0C0AF6B2 mov Rm,Rn */
	r5 += 0x1u;  /* 0C0AF6B4 add #imm,Rn */
	r8 = (u32)(s32)(s16)r5;  /* 0C0AF6B6 exts.w Rm,Rn */
	r0 = 0x7u;  /* 0C0AF6B8 mov #imm,Rn */
	T = (s32)r8 > (s32)r0;  /* 0C0AF6BA cmp/gt Rm,Rn */
	{ u32 c_ = !T; r9 += 0x4Cu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AF670u, 8); goto L_0C0AF670; } UPD(0x0C0AF6C0u, 1); goto L_0C0AF6C0; }  /* 0C0AF6BC bf/s */
L_0C0AF6C0: BLKS(0x0C0AF6C0u);
	r15 = r14;  /* 0C0AF6C0 mov Rm,Rn */
	IF(0x0C0AF6C2u); PR = R32(r15); r15 += 4; UPD(0x0C0AF6C4u, 2);  /* 0C0AF6C2 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AF6C6u, 1);  /* 0C0AF6C4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0AF6C8u, 1);  /* 0C0AF6C6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0AF6CAu, 1);  /* 0C0AF6C8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0AF6CCu, 1);  /* 0C0AF6CA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AF6CEu, 1);  /* 0C0AF6CC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AF6D0u, 1);  /* 0C0AF6CE mov.l @Rm+,Rn */
	IF(0x0C0AF6D0u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AF6D0 rts */
}

/* FUN_0c0af770 */
void f_0C0AF770(sh3_t *c)
{
	LOCALS;
L_0C0AF770: BLKS(0x0C0AF770u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF772u, 1);  /* 0C0AF770 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF774u, 1);  /* 0C0AF772 mov.l Rm,@-Rn */
	r8 = 0x0u;  /* 0C0AF774 mov #imm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF778u, 2);  /* 0C0AF776 mov.l Rm,@-Rn */
	r9 = 0x0u;  /* 0C0AF778 mov #imm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF77Cu, 2);  /* 0C0AF77A mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF77Eu, 1);  /* 0C0AF77C mov.l Rm,@-Rn */
	r10 = 0xC26CAE0u; UPD(0x0C0AF780u, 1);  /* 0C0AF77E mov.l @(disp,pc),Rn */
	IF(0x0C0AF780u); r15 -= 4; W32(r15, PR); UPD(0x0C0AF782u, 1);  /* 0C0AF780 sts.l pr,@-Rn */
	r11 = 0xC057F60u; UPD(0x0C0AF784u, 1);  /* 0C0AF782 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0AF784 mov Rm,Rn */
	IF(0x0C0AF786u); ;  /* 0C0AF786 nop */
	UPD(0x0C0AF788u, 2);
L_0C0AF788: BLKS(0x0C0AF788u);
	r2 = r9;  /* 0C0AF788 mov Rm,Rn */
	r2 += r10;  /* 0C0AF78A add Rm,Rn */
	r0 = R32(r2); UPD(0x0C0AF78Eu, 3);  /* 0C0AF78C mov.l @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0AF78E tst Rm,Rn */
	if (!T) { UPD(0x0C0AF7B0u, 4); goto L_0C0AF7B0; }  /* 0C0AF790 bf */
L_0C0AF792: BLKS(0x0C0AF792u);
	r2 = r8;  /* 0C0AF792 mov Rm,Rn */
	UPD(0x0C0AF794u, 1);
L_0C0AF794: BLKS(0x0C0AF794u);
	r2 += 0x1u;  /* 0C0AF794 add #imm,Rn */
	r8 = (u32)(s32)(s16)r2;  /* 0C0AF796 exts.w Rm,Rn */
	r0 = 0x7u;  /* 0C0AF798 mov #imm,Rn */
	T = (s32)r8 > (s32)r0;  /* 0C0AF79A cmp/gt Rm,Rn */
	{ u32 c_ = !T; r9 += 0x4Cu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AF788u, 7); goto L_0C0AF788; } goto L_0C0AF7A0; }  /* 0C0AF79C bf/s */
L_0C0AF7A0: BLKS(0x0C0AF7A0u);
	r15 = r14;  /* 0C0AF7A0 mov Rm,Rn */
	IF(0x0C0AF7A2u); PR = R32(r15); r15 += 4; UPD(0x0C0AF7A4u, 3);  /* 0C0AF7A2 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AF7A6u, 1);  /* 0C0AF7A4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0AF7A8u, 1);  /* 0C0AF7A6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AF7AAu, 1);  /* 0C0AF7A8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AF7ACu, 1);  /* 0C0AF7AA mov.l @Rm+,Rn */
	IF(0x0C0AF7ACu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AF7AC rts */
L_0C0AF7B0: BLKS(0x0C0AF7B0u);
	r4 = r8;  /* 0C0AF7B0 mov Rm,Rn */
	r4 += 0x8u;  /* 0C0AF7B2 add #imm,Rn */
	IF(0x0C0AF7B4u); { u32 t_ = r11; PR = 0x0C0AF7B8u; r5 = R32(r2 + 0x30u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 4); CALLP(t_, f_0C057F60, 0x0C057F60u, 0x0C0AF7B8u); }  /* 0C0AF7B4 jsr @Rn */
L_0C0AF7B8: BLKS(0x0C0AF7B8u);
	{ r2 = r8; /* slot mov Rm,Rn */ UPD(0x0C0AF794u, 3); goto L_0C0AF794; }  /* 0C0AF7B8 bra */
}

/* FUN_0c0af7d0 */
void f_0C0AF7D0(sh3_t *c)
{
	LOCALS;
L_0C0AF7D0: BLKS(0x0C0AF7D0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF7D2u, 1);  /* 0C0AF7D0 mov.l Rm,@-Rn */
	r7 = r4 & 0xFF;  /* 0C0AF7D2 extu.b Rm,Rn */
	r6 = 0xFFu; UPD(0x0C0AF7D6u, 2);  /* 0C0AF7D4 mov.w @(disp,pc),Rn */
	r14 = r15;  /* 0C0AF7D6 mov Rm,Rn */
	r3 = 0xC3929B0u; UPD(0x0C0AF7DAu, 2);  /* 0C0AF7D8 mov.l @(disp,pc),Rn */
	r5 = 0x0u;  /* 0C0AF7DA mov #imm,Rn */
	r0 = 0x3u;  /* 0C0AF7DC mov #imm,Rn */
	r2 = 0x7u;  /* 0C0AF7DE mov #imm,Rn */
	UPD(0x0C0AF7E0u, 3);
L_0C0AF7E0: BLKS(0x0C0AF7E0u);
	IF(0x0C0AF7E0u); r1 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0AF7E2u, 1);  /* 0C0AF7E0 mov.b @(r0,Rm),Rn */
	r4 = r1 & 0xFF;  /* 0C0AF7E2 extu.b Rm,Rn */
	T = r4 == r7;  /* 0C0AF7E4 cmp/eq Rm,Rn */
	{ u32 c_ = T; r4 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0AF830u, 5); goto L_0C0AF830; } goto L_0C0AF7EA; }  /* 0C0AF7E6 bt/s */
L_0C0AF7EA: BLKS(0x0C0AF7EAu);
	r4 += 0x1u;  /* 0C0AF7EA add #imm,Rn */
	r0 = r4 & 0xFF;  /* 0C0AF7EC extu.b Rm,Rn */
	T = r0 > r2;  /* 0C0AF7EE cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C0AF7E0u, 7); goto L_0C0AF7E0; }  /* 0C0AF7F0 bf */
L_0C0AF7F2: BLKS(0x0C0AF7F2u);
	r0 = 0x3u;  /* 0C0AF7F2 mov #imm,Rn */
	r3 = 0xC3929C8u; UPD(0x0C0AF7F6u, 2);  /* 0C0AF7F4 mov.l @(disp,pc),Rn */
	r2 = 0x7u;  /* 0C0AF7F6 mov #imm,Rn */
	UPD(0x0C0AF7F8u, 1);
L_0C0AF7F8: BLKS(0x0C0AF7F8u);
	IF(0x0C0AF7F8u); r4 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0AF7FAu, 1);  /* 0C0AF7F8 mov.b @(r0,Rm),Rn */
	r1 = r4 & 0xFF;  /* 0C0AF7FA extu.b Rm,Rn */
	T = r1 >= r6;  /* 0C0AF7FC cmp/hs Rm,Rn */
	{ u32 c_ = T; r4 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0AF808u, 5); goto L_0C0AF808; } goto L_0C0AF802; }  /* 0C0AF7FE bt/s */
L_0C0AF802: BLKS(0x0C0AF802u);
	r6 = r1;  /* 0C0AF802 mov Rm,Rn */
	r5 = r0;  /* 0C0AF804 mov Rm,Rn */
	r4 = r0;  /* 0C0AF806 mov Rm,Rn */
	UPD(0x0C0AF808u, 4);
L_0C0AF808: BLKS(0x0C0AF808u);
	r4 += 0x1u;  /* 0C0AF808 add #imm,Rn */
	r0 = r4 & 0xFF;  /* 0C0AF80A extu.b Rm,Rn */
	T = r0 > r2;  /* 0C0AF80C cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C0AF7F8u, 6); goto L_0C0AF7F8; }  /* 0C0AF80E bf */
L_0C0AF810: BLKS(0x0C0AF810u);
	r3 = 0xC3929C8u; UPD(0x0C0AF812u, 1);  /* 0C0AF810 mov.l @(disp,pc),Rn */
	r0 = r3;  /* 0C0AF812 mov Rm,Rn */
	IF(0x0C0AF814u); r4 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C0AF816u, 2);  /* 0C0AF814 mov.b @(r0,Rm),Rn */
	r2 = 0xC283648u; UPD(0x0C0AF818u, 1);  /* 0C0AF816 mov.l @(disp,pc),Rn */
	r3 = r4 & 0xFF;  /* 0C0AF818 extu.b Rm,Rn */
	r0 = r2;  /* 0C0AF81A mov Rm,Rn */
	IF(0x0C0AF81Cu); r6 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C0AF81Eu, 3);  /* 0C0AF81C mov.b @(r0,Rm),Rn */
	r0 = r6 & 0xFF;  /* 0C0AF81E extu.b Rm,Rn */
	T = r3 > r0;  /* 0C0AF820 cmp/hi Rm,Rn */
	{ u32 c_ = !T; r0 = (u32)(s32)(s8)r5; /* slot exts.b Rm,Rn */ if (c_) { UPD(0x0C0AF828u, 5); goto L_0C0AF828; } goto L_0C0AF826; }  /* 0C0AF822 bf/s */
L_0C0AF826: BLKS(0x0C0AF826u);
	r0 = 0x0u;  /* 0C0AF826 mov #imm,Rn */
	UPD(0x0C0AF828u, 2);
L_0C0AF828: BLKS(0x0C0AF828u);
	r15 = r14;  /* 0C0AF828 mov Rm,Rn */
	IF(0x0C0AF82Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0AF82A rts */
L_0C0AF830: BLKS(0x0C0AF830u);
	{ r0 = (u32)(s32)(s8)r0; /* slot exts.b Rm,Rn */ UPD(0x0C0AF828u, 3); goto L_0C0AF828; }  /* 0C0AF830 bra */
}

/* FUN_0c0af850 */
void f_0C0AF850(sh3_t *c)
{
	LOCALS;
L_0C0AF850: BLKS(0x0C0AF850u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF852u, 1);  /* 0C0AF850 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF854u, 1);  /* 0C0AF852 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF856u, 1);  /* 0C0AF854 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF858u, 1);  /* 0C0AF856 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF85Au, 1);  /* 0C0AF858 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF85Cu, 1);  /* 0C0AF85A mov.l Rm,@-Rn */
	r0 = 0xC21F5CCu; UPD(0x0C0AF85Eu, 1);  /* 0C0AF85C mov.l @(disp,pc),Rn */
	IF(0x0C0AF85Eu); r15 -= 4; W32(r15, PR); UPD(0x0C0AF860u, 1);  /* 0C0AF85E sts.l pr,@-Rn */
	r3 = R32(r0); UPD(0x0C0AF862u, 1);  /* 0C0AF860 mov.l @Rm,Rn */
	r0 = 0x98765432u; UPD(0x0C0AF864u, 1);  /* 0C0AF862 mov.l @(disp,pc),Rn */
	T = r3 == r0;  /* 0C0AF864 cmp/eq Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0AF880u, 4); goto L_0C0AF880; } UPD(0x0C0AF86Au, 1); goto L_0C0AF86A; }  /* 0C0AF866 bt/s */
L_0C0AF86A: BLKS(0x0C0AF86Au);
	r15 = r14;  /* 0C0AF86A mov Rm,Rn */
	IF(0x0C0AF86Cu); PR = R32(r15); r15 += 4; UPD(0x0C0AF86Eu, 2);  /* 0C0AF86C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AF870u, 1);  /* 0C0AF86E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0AF872u, 1);  /* 0C0AF870 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0AF874u, 1);  /* 0C0AF872 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AF876u, 1);  /* 0C0AF874 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AF878u, 1);  /* 0C0AF876 mov.l @Rm+,Rn */
	IF(0x0C0AF878u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AF878 rts */
L_0C0AF880: BLKS(0x0C0AF880u);
	r11 = 0xC04E470u; UPD(0x0C0AF882u, 1);  /* 0C0AF880 mov.l @(disp,pc),Rn */
	r8 = 0x0u;  /* 0C0AF882 mov #imm,Rn */
	r10 = 0xC3929B0u; UPD(0x0C0AF886u, 2);  /* 0C0AF884 mov.l @(disp,pc),Rn */
	r9 = 0xC27DC24u; UPD(0x0C0AF888u, 1);  /* 0C0AF886 mov.l @(disp,pc),Rn */
L_0C0AF888: BLKS(0x0C0AF888u);
	IF(0x0C0AF888u); { u32 t_ = r11; PR = 0x0C0AF88Cu; r4 = r8 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C04E470, 0x0C04E470u, 0x0C0AF88Cu); }  /* 0C0AF888 jsr @Rn */
L_0C0AF88C: BLKS(0x0C0AF88Cu);
	r2 = R32(r0); UPD(0x0C0AF88Eu, 1);  /* 0C0AF88C mov.l @Rm,Rn */
	W32(r9, r2); UPD(0x0C0AF890u, 1);  /* 0C0AF88E mov.l Rm,@Rn */
	r0 += 0x7u;  /* 0C0AF890 add #imm,Rn */
	r4 = (u32)(s32)(s8)R8(r0); UPD(0x0C0AF894u, 2);  /* 0C0AF892 mov.b @Rm,Rn */
	r9 += 0x4u;  /* 0C0AF894 add #imm,Rn */
	r0 = r10;  /* 0C0AF896 mov Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C0AF898 tst Rm,Rn */
	{ u32 c_ = !T; IF(0x0C0AF89Cu); W8(r0 + r8, r4); /* slot mov.b Rm,@(r0,Rn) */ if (c_) { UPD(0x0C0AF8A4u, 6); goto L_0C0AF8A4; } UPD(0x0C0AF89Eu, 1); goto L_0C0AF89E; }  /* 0C0AF89A bf/s */
L_0C0AF89E: BLKS(0x0C0AF89Eu);
	r5 = 0xC3929C8u; UPD(0x0C0AF8A0u, 1);  /* 0C0AF89E mov.l @(disp,pc),Rn */
	r0 = r5;  /* 0C0AF8A0 mov Rm,Rn */
	IF(0x0C0AF8A2u); W8(r0 + r8, r2); UPD(0x0C0AF8A4u, 2);  /* 0C0AF8A2 mov.b Rm,@(r0,Rn) */
L_0C0AF8A4: BLKS(0x0C0AF8A4u);
	r6 = r8;  /* 0C0AF8A4 mov Rm,Rn */
	r6 += 0x1u;  /* 0C0AF8A6 add #imm,Rn */
	r8 = (u32)(s32)(s16)r6;  /* 0C0AF8A8 exts.w Rm,Rn */
	r2 = 0x7u;  /* 0C0AF8AA mov #imm,Rn */
	T = (s32)r8 > (s32)r2;  /* 0C0AF8AC cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0AF888u, 8); goto L_0C0AF888; }  /* 0C0AF8AE bf */
L_0C0AF8B0: BLKS(0x0C0AF8B0u);
	r8 = 0x0u;  /* 0C0AF8B0 mov #imm,Rn */
	IF(0x0C0AF8B2u); ;  /* 0C0AF8B2 nop */
	UPD(0x0C0AF8B4u, 2);
L_0C0AF8B4: BLKS(0x0C0AF8B4u);
	r2 = 0xC283544u; UPD(0x0C0AF8B6u, 1);  /* 0C0AF8B4 mov.l @(disp,pc),Rn */
	r0 = r2;  /* 0C0AF8B6 mov Rm,Rn */
	IF(0x0C0AF8B8u); r1 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0AF8BAu, 2);  /* 0C0AF8B8 mov.b @(r0,Rm),Rn */
	T = (r1 & r1) == 0;  /* 0C0AF8BA tst Rm,Rn */
	{ u32 c_ = T; r2 += r8; /* slot add Rm,Rn */ if (c_) { UPD(0x0C0AF8C4u, 4); goto L_0C0AF8C4; } goto L_0C0AF8C0; }  /* 0C0AF8BC bt/s */
L_0C0AF8C0: BLKS(0x0C0AF8C0u);
	r1 += 0xFFFFFFFFu;  /* 0C0AF8C0 add #imm,Rn */
	W8(r2, r1); UPD(0x0C0AF8C4u, 3);  /* 0C0AF8C2 mov.b Rm,@Rn */
L_0C0AF8C4: BLKS(0x0C0AF8C4u);
	r9 = 0xC275444u; UPD(0x0C0AF8C6u, 1);  /* 0C0AF8C4 mov.l @(disp,pc),Rn */
	r7 = 0x7u;  /* 0C0AF8C6 mov #imm,Rn */
	r0 = r9;  /* 0C0AF8C8 mov Rm,Rn */
	IF(0x0C0AF8CAu); r9 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0AF8CCu, 3);  /* 0C0AF8CA mov.b @(r0,Rm),Rn */
	T = r9 > r7;  /* 0C0AF8CC cmp/hi Rm,Rn */
	{ u32 c_ = !T; r1 = r9; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0AF8D6u, 4); goto L_0C0AF8D6; } goto L_0C0AF8D2; }  /* 0C0AF8CE bf/s */
L_0C0AF8D2: BLKS(0x0C0AF8D2u);
	{ IF(0x0C0AF8D4u); ; /* slot nop */ UPD(0x0C0AF9D0u, 4); goto L_0C0AF9D0; }  /* 0C0AF8D2 bra */
L_0C0AF8D6: BLKS(0x0C0AF8D6u);
	r0 = 0xC0AF900u;  /* 0C0AF8D6 mova @(disp,pc),r0 */
	IF(0x0C0AF8D8u); r10 = (u32)(s32)(s8)R8(r0 + r1); UPD(0x0C0AF8DAu, 2);  /* 0C0AF8D8 mov.b @(r0,Rm),Rn */
	r10 = r10 & 0xFF;  /* 0C0AF8DA extu.b Rm,Rn */
	IF(0x0C0AF8DCu); { u32 tv_ = (r10 + 0x0C0AF8E0u); u32 t_ = PHYS(tv_); IF(0x0C0AF8DEu); ; /* slot nop */ JRGN(tv_); UPD(t_, 4); switch (t_) { case 0x0C0AF910u: goto L_0C0AF910; case 0x0C0AF93Au: goto L_0C0AF93A; case 0x0C0AF980u: goto L_0C0AF980; default: JUMPD(tv_); } }  /* 0C0AF8DC braf Rn */
L_0C0AF910: BLKS(0x0C0AF910u);
	r12 = 0xC283544u; UPD(0x0C0AF912u, 1);  /* 0C0AF910 mov.l @(disp,pc),Rn */
	r0 = r12;  /* 0C0AF912 mov Rm,Rn */
	IF(0x0C0AF914u); r11 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0AF916u, 2);  /* 0C0AF914 mov.b @(r0,Rm),Rn */
	T = (r11 & r11) == 0;  /* 0C0AF916 tst Rm,Rn */
	r11 = 0xC3929C8u; UPD(0x0C0AF91Au, 2);  /* 0C0AF918 mov.l @(disp,pc),Rn */
	IF(0x0C0AF91Au); r4 = T;  /* 0C0AF91A movt Rn */
	r0 = r11;  /* 0C0AF91C mov Rm,Rn */
	IF(0x0C0AF91Eu); r5 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0AF920u, 3);  /* 0C0AF91E mov.b @(r0,Rm),Rn */
	r10 = 0xC283648u; UPD(0x0C0AF922u, 1);  /* 0C0AF920 mov.l @(disp,pc),Rn */
	r0 = r10;  /* 0C0AF922 mov Rm,Rn */
	IF(0x0C0AF924u); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0AF926u, 2);  /* 0C0AF924 mov.b @(r0,Rm),Rn */
	T = r2 >= r5;  /* 0C0AF926 cmp/hs Rm,Rn */
	IF(0x0C0AF928u); r3 = T;  /* 0C0AF928 movt Rn */
	r4 &= r3;  /* 0C0AF92A and Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C0AF92C tst Rm,Rn */
	{ u32 c_ = !T; r7 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AF950u, 7); goto L_0C0AF950; } UPD(0x0C0AF932u, 1); goto L_0C0AF932; }  /* 0C0AF92E bf/s */
L_0C0AF932: BLKS(0x0C0AF932u);
	r10 = 0xC275444u; UPD(0x0C0AF934u, 1);  /* 0C0AF932 mov.l @(disp,pc),Rn */
	r9 = 0x0u;  /* 0C0AF934 mov #imm,Rn */
	r0 = r10;  /* 0C0AF936 mov Rm,Rn */
	IF(0x0C0AF938u); W8(r0 + r8, r9); UPD(0x0C0AF93Au, 3);  /* 0C0AF938 mov.b Rm,@(r0,Rn) */
L_0C0AF93A: BLKS(0x0C0AF93Au);
	r9 = r8;  /* 0C0AF93A mov Rm,Rn */
	r9 += 0x1u;  /* 0C0AF93C add #imm,Rn */
	r12 = 0xFFu; UPD(0x0C0AF940u, 3);  /* 0C0AF93E mov.w @(disp,pc),Rn */
	r8 = (u32)(s32)(s16)r9;  /* 0C0AF940 exts.w Rm,Rn */
	T = (s32)r8 > (s32)r12;  /* 0C0AF942 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0AF8B4u, 5); goto L_0C0AF8B4; }  /* 0C0AF944 bf */
L_0C0AF946: BLKS(0x0C0AF946u);
	{ IF(0x0C0AF948u); ; /* slot nop */ UPD(0x0C0AF86Au, 3); goto L_0C0AF86A; }  /* 0C0AF946 bra */
L_0C0AF950: BLKS(0x0C0AF950u);
	r4 = 0xC275444u; UPD(0x0C0AF952u, 1);  /* 0C0AF950 mov.l @(disp,pc),Rn */
	r0 = r4;  /* 0C0AF952 mov Rm,Rn */
	IF(0x0C0AF954u); r5 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0AF956u, 2);  /* 0C0AF954 mov.b @(r0,Rm),Rn */
	r3 = 0xC3929E4u; UPD(0x0C0AF958u, 1);  /* 0C0AF956 mov.l @(disp,pc),Rn */
	r4 = r5 & 0xFF;  /* 0C0AF958 extu.b Rm,Rn */
	r0 = r3;  /* 0C0AF95A mov Rm,Rn */
	IF(0x0C0AF95Cu); r1 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0AF95Eu, 3);  /* 0C0AF95C mov.b @(r0,Rm),Rn */
	r5 = r8 & 0xFF;  /* 0C0AF95E extu.b Rm,Rn */
	r0 = 0xC04E49Cu; UPD(0x0C0AF962u, 2);  /* 0C0AF960 mov.l @(disp,pc),Rn */
	IF(0x0C0AF962u); { u32 t_ = r0; PR = 0x0C0AF966u; r6 = r1 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C04E49C, 0x0C04E49Cu, 0x0C0AF966u); }  /* 0C0AF962 jsr @Rn */
L_0C0AF966: BLKS(0x0C0AF966u);
	r7 = 0xC285F58u; UPD(0x0C0AF968u, 1);  /* 0C0AF966 mov.l @(disp,pc),Rn */
	r0 = r7;  /* 0C0AF968 mov Rm,Rn */
	IF(0x0C0AF96Au); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0AF96Cu, 2);  /* 0C0AF96A mov.b @(r0,Rm),Rn */
	r0 = r12;  /* 0C0AF96C mov Rm,Rn */
	IF(0x0C0AF96Eu); W8(r0 + r8, r6); UPD(0x0C0AF970u, 2);  /* 0C0AF96E mov.b Rm,@(r0,Rn) */
	r0 = r10;  /* 0C0AF970 mov Rm,Rn */
	IF(0x0C0AF972u); r12 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0AF974u, 2);  /* 0C0AF972 mov.b @(r0,Rm),Rn */
	r0 = r11;  /* 0C0AF974 mov Rm,Rn */
	{ IF(0x0C0AF978u); W8(r0 + r9, r12); /* slot mov.b Rm,@(r0,Rn) */ UPD(0x0C0AF932u, 4); goto L_0C0AF932; }  /* 0C0AF976 bra */
L_0C0AF980: BLKS(0x0C0AF980u);
	r12 = 0xC275444u; UPD(0x0C0AF982u, 1);  /* 0C0AF980 mov.l @(disp,pc),Rn */
	r11 = 0x0u;  /* 0C0AF982 mov #imm,Rn */
	r0 = r12;  /* 0C0AF984 mov Rm,Rn */
	IF(0x0C0AF986u); W8(r0 + r8, r11); UPD(0x0C0AF988u, 3);  /* 0C0AF986 mov.b Rm,@(r0,Rn) */
	r11 = 0xC283544u; UPD(0x0C0AF98Au, 1);  /* 0C0AF988 mov.l @(disp,pc),Rn */
	r0 = r11;  /* 0C0AF98A mov Rm,Rn */
	IF(0x0C0AF98Cu); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0AF98Eu, 2);  /* 0C0AF98C mov.b @(r0,Rm),Rn */
	T = (r2 & r2) == 0;  /* 0C0AF98E tst Rm,Rn */
	{ u32 c_ = !T; r10 = r8 & 0xFF; /* slot extu.b Rm,Rn */ if (c_) { UPD(0x0C0AF93Au, 4); goto L_0C0AF93A; } goto L_0C0AF994; }  /* 0C0AF990 bf/s */
L_0C0AF994: BLKS(0x0C0AF994u);
	r9 = 0xC0AF7D0u; UPD(0x0C0AF996u, 2);  /* 0C0AF994 mov.l @(disp,pc),Rn */
	IF(0x0C0AF996u); { u32 t_ = r9; PR = 0x0C0AF99Au; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AF7D0, 0x0C0AF7D0u, 0x0C0AF99Au); }  /* 0C0AF996 jsr @Rn */
L_0C0AF99A: BLKS(0x0C0AF99Au);
	T = (r0 & r0) == 0;  /* 0C0AF99A tst Rm,Rn */
	{ u32 c_ = T; r9 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0AF93Au, 4); goto L_0C0AF93A; } goto L_0C0AF9A0; }  /* 0C0AF99C bt/s */
L_0C0AF9A0: BLKS(0x0C0AF9A0u);
	r2 = 0xC3929E4u; UPD(0x0C0AF9A2u, 2);  /* 0C0AF9A0 mov.l @(disp,pc),Rn */
	r4 = r0 & 0xFF;  /* 0C0AF9A2 extu.b Rm,Rn */
	r0 = r2;  /* 0C0AF9A4 mov Rm,Rn */
	IF(0x0C0AF9A6u); r1 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0AF9A8u, 3);  /* 0C0AF9A6 mov.b @(r0,Rm),Rn */
	r5 = r10;  /* 0C0AF9A8 mov Rm,Rn */
	r0 = 0xC04E49Cu; UPD(0x0C0AF9ACu, 2);  /* 0C0AF9AA mov.l @(disp,pc),Rn */
	r6 = r1 & 0xFF;  /* 0C0AF9AC extu.b Rm,Rn */
	IF(0x0C0AF9AEu); { u32 t_ = r0; PR = 0x0C0AF9B2u; r7 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C04E49C, 0x0C04E49Cu, 0x0C0AF9B2u); }  /* 0C0AF9AE jsr @Rn */
L_0C0AF9B2: BLKS(0x0C0AF9B2u);
	r4 = 0xC285F58u; UPD(0x0C0AF9B4u, 1);  /* 0C0AF9B2 mov.l @(disp,pc),Rn */
	r0 = r4;  /* 0C0AF9B4 mov Rm,Rn */
	IF(0x0C0AF9B6u); r5 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0AF9B8u, 2);  /* 0C0AF9B6 mov.b @(r0,Rm),Rn */
	r0 = r11;  /* 0C0AF9B8 mov Rm,Rn */
	IF(0x0C0AF9BAu); W8(r0 + r8, r5); UPD(0x0C0AF9BCu, 2);  /* 0C0AF9BA mov.b Rm,@(r0,Rn) */
	r3 = 0xC283648u; UPD(0x0C0AF9BEu, 1);  /* 0C0AF9BC mov.l @(disp,pc),Rn */
	r0 = r3;  /* 0C0AF9BE mov Rm,Rn */
	IF(0x0C0AF9C0u); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0AF9C2u, 2);  /* 0C0AF9C0 mov.b @(r0,Rm),Rn */
	r7 = 0xC3929C8u; UPD(0x0C0AF9C4u, 1);  /* 0C0AF9C2 mov.l @(disp,pc),Rn */
	r0 = r7;  /* 0C0AF9C4 mov Rm,Rn */
	{ IF(0x0C0AF9C8u); W8(r0 + r9, r6); /* slot mov.b Rm,@(r0,Rn) */ UPD(0x0C0AF93Au, 4); goto L_0C0AF93A; }  /* 0C0AF9C6 bra */
L_0C0AF9D0: BLKS(0x0C0AF9D0u);
	r11 = 0xC21F7F8u; UPD(0x0C0AF9D2u, 1);  /* 0C0AF9D0 mov.l @(disp,pc),Rn */
	r10 = 0xC21CCEDu; UPD(0x0C0AF9D4u, 1);  /* 0C0AF9D2 mov.l @(disp,pc),Rn */
	W8(r11, r9); UPD(0x0C0AF9D6u, 1);  /* 0C0AF9D4 mov.b Rm,@Rn */
	{ W8(r10, r8); /* slot mov.b Rm,@Rn */ UPD(0x0C0AF93Au, 3); goto L_0C0AF93A; }  /* 0C0AF9D6 bra */
}

/* FUN_0c0afa10 */
void f_0C0AFA10(sh3_t *c)
{
	LOCALS;
L_0C0AFA10: BLKS(0x0C0AFA10u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AFA12u, 1);  /* 0C0AFA10 mov.l Rm,@-Rn */
	r0 = 0x0u;  /* 0C0AFA12 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AFA16u, 2);  /* 0C0AFA14 mov.l Rm,@-Rn */
	r3 = 0x0u;  /* 0C0AFA16 mov #imm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AFA1Au, 2);  /* 0C0AFA18 mov.l Rm,@-Rn */
	r2 = 0x7u;  /* 0C0AFA1A mov #imm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0AFA1Eu, 2);  /* 0C0AFA1C mov.l Rm,@-Rn */
	r7 = 0xC3929C8u; UPD(0x0C0AFA20u, 1);  /* 0C0AFA1E mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AFA22u, 1);  /* 0C0AFA20 mov.l Rm,@-Rn */
	r14 = r15;  /* 0C0AFA22 mov Rm,Rn */
	r4 = r0;  /* 0C0AFA24 mov Rm,Rn */
	UPD(0x0C0AFA26u, 2);
L_0C0AFA26: BLKS(0x0C0AFA26u);
	IF(0x0C0AFA26u); W8(r0 + r7, r3); UPD(0x0C0AFA28u, 1);  /* 0C0AFA26 mov.b Rm,@(r0,Rn) */
	r4 += 0x1u;  /* 0C0AFA28 add #imm,Rn */
	r0 = (u32)(s32)(s16)r4;  /* 0C0AFA2A exts.w Rm,Rn */
	T = (s32)r0 > (s32)r2;  /* 0C0AFA2C cmp/gt Rm,Rn */
	{ u32 c_ = !T; r4 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0AFA26u, 6); goto L_0C0AFA26; } goto L_0C0AFA32; }  /* 0C0AFA2E bf/s */
L_0C0AFA32: BLKS(0x0C0AFA32u);
	r8 = 0xC21F5CCu; UPD(0x0C0AFA34u, 2);  /* 0C0AFA32 mov.l @(disp,pc),Rn */
	r2 = 0xFFFFFFFFu;  /* 0C0AFA34 mov #imm,Rn */
	r7 = R32(r8); UPD(0x0C0AFA38u, 2);  /* 0C0AFA36 mov.l @Rm,Rn */
	r6 = 0x98765432u; UPD(0x0C0AFA3Au, 1);  /* 0C0AFA38 mov.l @(disp,pc),Rn */
	r5 = 0xC21F7F9u; UPD(0x0C0AFA3Cu, 1);  /* 0C0AFA3A mov.l @(disp,pc),Rn */
	T = r7 == r6;  /* 0C0AFA3C cmp/eq Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r5); UPD(0x0C0AFA40u, 2);  /* 0C0AFA3E mov.b @Rm,Rn */
	IF(0x0C0AFA40u); r3 = T;  /* 0C0AFA40 movt Rn */
	T = (r4 & r4) == 0;  /* 0C0AFA42 tst Rm,Rn */
	{ u32 t_ = 0u - r2, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r0 = r_; }  /* 0C0AFA44 negc Rm,Rn */
	r0 &= r3;  /* 0C0AFA46 and Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0AFA48 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AFA8Eu, 8); goto L_0C0AFA8E; } goto L_0C0AFA4E; }  /* 0C0AFA4A bf/s */
L_0C0AFA4E: BLKS(0x0C0AFA4Eu);
	r11 = 0xC285F58u; UPD(0x0C0AFA50u, 2);  /* 0C0AFA4E mov.l @(disp,pc),Rn */
	r10 = 0xC1F5220u; UPD(0x0C0AFA52u, 1);  /* 0C0AFA50 mov.l @(disp,pc),Rn */
	r2 = 0x0u;  /* 0C0AFA52 mov #imm,Rn */
	r9 = 0xC283648u; UPD(0x0C0AFA56u, 2);  /* 0C0AFA54 mov.l @(disp,pc),Rn */
	r8 = 0xC1F5320u; UPD(0x0C0AFA58u, 1);  /* 0C0AFA56 mov.l @(disp,pc),Rn */
	r4 = 0xC3929E4u; UPD(0x0C0AFA5Au, 1);  /* 0C0AFA58 mov.l @(disp,pc),Rn */
	r5 = 0xC283544u; UPD(0x0C0AFA5Cu, 1);  /* 0C0AFA5A mov.l @(disp,pc),Rn */
	r6 = 0xC1F5420u; UPD(0x0C0AFA5Eu, 1);  /* 0C0AFA5C mov.l @(disp,pc),Rn */
	r7 = 0xC275444u; UPD(0x0C0AFA60u, 1);  /* 0C0AFA5E mov.l @(disp,pc),Rn */
	r3 = 0xFFu; UPD(0x0C0AFA62u, 1);  /* 0C0AFA60 mov.w @(disp,pc),Rn */
	IF(0x0C0AFA62u); ;  /* 0C0AFA62 nop */
	UPD(0x0C0AFA64u, 1);
L_0C0AFA64: BLKS(0x0C0AFA64u);
	IF(0x0C0AFA64u); r1 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C0AFA66u, 1);  /* 0C0AFA64 mov.b @(r0,Rm),Rn */
	IF(0x0C0AFA66u); W8(r0 + r11, r1); UPD(0x0C0AFA68u, 1);  /* 0C0AFA66 mov.b Rm,@(r0,Rn) */
	IF(0x0C0AFA68u); r1 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0AFA6Au, 1);  /* 0C0AFA68 mov.b @(r0,Rm),Rn */
	IF(0x0C0AFA6Au); W8(r0 + r9, r1); UPD(0x0C0AFA6Cu, 1);  /* 0C0AFA6A mov.b Rm,@(r0,Rn) */
	IF(0x0C0AFA6Cu); r1 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C0AFA6Eu, 1);  /* 0C0AFA6C mov.b @(r0,Rm),Rn */
	IF(0x0C0AFA6Eu); W8(r0 + r4, r1); UPD(0x0C0AFA70u, 1);  /* 0C0AFA6E mov.b Rm,@(r0,Rn) */
	IF(0x0C0AFA70u); W8(r0 + r5, r2); UPD(0x0C0AFA72u, 1);  /* 0C0AFA70 mov.b Rm,@(r0,Rn) */
	r1 = r0;  /* 0C0AFA72 mov Rm,Rn */
	IF(0x0C0AFA74u); W8(r0 + r7, r2); UPD(0x0C0AFA76u, 2);  /* 0C0AFA74 mov.b Rm,@(r0,Rn) */
	r1 += 0x1u;  /* 0C0AFA76 add #imm,Rn */
	r0 = (u32)(s32)(s16)r1;  /* 0C0AFA78 exts.w Rm,Rn */
	T = (s32)r0 > (s32)r3;  /* 0C0AFA7A cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0AFA64u, 6); goto L_0C0AFA64; }  /* 0C0AFA7C bf */
L_0C0AFA7E: BLKS(0x0C0AFA7Eu);
	r11 = 0x0u;  /* 0C0AFA7E mov #imm,Rn */
	r0 = 0xC21CCEDu; UPD(0x0C0AFA82u, 2);  /* 0C0AFA80 mov.l @(disp,pc),Rn */
	r10 = 0xC21F7F8u; UPD(0x0C0AFA84u, 1);  /* 0C0AFA82 mov.l @(disp,pc),Rn */
	r1 = 0x98765432u; UPD(0x0C0AFA86u, 1);  /* 0C0AFA84 mov.l @(disp,pc),Rn */
	r9 = 0xC21F5CCu; UPD(0x0C0AFA88u, 1);  /* 0C0AFA86 mov.l @(disp,pc),Rn */
	W8(r0, r11); UPD(0x0C0AFA8Au, 1);  /* 0C0AFA88 mov.b Rm,@Rn */
	W8(r10, r11); UPD(0x0C0AFA8Cu, 1);  /* 0C0AFA8A mov.b Rm,@Rn */
	W32(r9, r1); UPD(0x0C0AFA8Eu, 1);  /* 0C0AFA8C mov.l Rm,@Rn */
L_0C0AFA8E: BLKS(0x0C0AFA8Eu);
	r15 = r14;  /* 0C0AFA8E mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AFA92u, 2);  /* 0C0AFA90 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0AFA94u, 1);  /* 0C0AFA92 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AFA96u, 1);  /* 0C0AFA94 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AFA98u, 1);  /* 0C0AFA96 mov.l @Rm+,Rn */
	IF(0x0C0AFA98u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AFA98 rts */
}

/* FUN_0c0afae0 */
void f_0C0AFAE0(sh3_t *c)
{
	LOCALS;
L_0C0AFAE0: BLKS(0x0C0AFAE0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AFAE2u, 1);  /* 0C0AFAE0 mov.l Rm,@-Rn */
	r0 = r4 & 0xFF;  /* 0C0AFAE2 extu.b Rm,Rn */
	r3 = 0xC392E24u; UPD(0x0C0AFAE6u, 2);  /* 0C0AFAE4 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0AFAE6 mov Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r3); UPD(0x0C0AFAEAu, 2);  /* 0C0AFAE8 mov.b @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C0AFAEA tst Rm,Rn */
	{ u32 c_ = T; r4 = (u32)(s32)(s8)r5; /* slot exts.b Rm,Rn */ if (c_) { UPD(0x0C0AFAF8u, 4); goto L_0C0AFAF8; } goto L_0C0AFAF0; }  /* 0C0AFAEC bt/s */
L_0C0AFAF0: BLKS(0x0C0AFAF0u);
	T = (r0 & r0) == 0;  /* 0C0AFAF0 tst Rm,Rn */
	if (T) { UPD(0x0C0AFB00u, 5); goto L_0C0AFB00; }  /* 0C0AFAF2 bt */
L_0C0AFAF4: BLKS(0x0C0AFAF4u);
	r2 = 0xC275444u; UPD(0x0C0AFAF6u, 1);  /* 0C0AFAF4 mov.l @(disp,pc),Rn */
	IF(0x0C0AFAF6u); W8(r0 + r2, r4); UPD(0x0C0AFAF8u, 1);  /* 0C0AFAF6 mov.b Rm,@(r0,Rn) */
L_0C0AFAF8: BLKS(0x0C0AFAF8u);
	r15 = r14;  /* 0C0AFAF8 mov Rm,Rn */
	IF(0x0C0AFAFAu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0AFAFA rts */
L_0C0AFB00: BLKS(0x0C0AFB00u);
	r0 = 0xC04E648u; UPD(0x0C0AFB02u, 1);  /* 0C0AFB00 mov.l @(disp,pc),Rn */
	r4 = r4 & 0xFF;  /* 0C0AFB02 extu.b Rm,Rn */
	r15 = r14;  /* 0C0AFB04 mov Rm,Rn */
	IF(0x0C0AFB06u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 4); switch (t_) { case 0x0C04E648u: TAIL(f_0C04E648); default: JUMPD(tv_); } }  /* 0C0AFB06 jmp @Rn */
}

/* FUN_0c0afb20 */
void f_0C0AFB20(sh3_t *c)
{
	LOCALS;
L_0C0AFB20: BLKS(0x0C0AFB20u);
	r0 = (u32)(s32)(s16)r4;  /* 0C0AFB20 exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AFB24u, 2);  /* 0C0AFB22 mov.l Rm,@-Rn */
	r3 = r5 & 0xFF;  /* 0C0AFB24 extu.b Rm,Rn */
	r4 = 0xC392E24u; UPD(0x0C0AFB28u, 2);  /* 0C0AFB26 mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s8)R8(r4); UPD(0x0C0AFB2Au, 1);  /* 0C0AFB28 mov.b @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C0AFB2A tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0AFB5Cu, 4); goto L_0C0AFB5C; } goto L_0C0AFB30; }  /* 0C0AFB2C bt/s */
L_0C0AFB30: BLKS(0x0C0AFB30u);
	r5 = 0xC21CA15u; UPD(0x0C0AFB32u, 2);  /* 0C0AFB30 mov.l @(disp,pc),Rn */
	r1 = 0xFFFFFFFFu;  /* 0C0AFB32 mov #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r5); UPD(0x0C0AFB36u, 2);  /* 0C0AFB34 mov.b @Rm,Rn */
	r4 = 0xC26C8C4u; UPD(0x0C0AFB38u, 1);  /* 0C0AFB36 mov.l @(disp,pc),Rn */
	T = (r2 & r2) == 0;  /* 0C0AFB38 tst Rm,Rn */
	r7 = (u32)(s32)(s8)R8(r4); UPD(0x0C0AFB3Cu, 2);  /* 0C0AFB3A mov.b @Rm,Rn */
	{ u32 t_ = 0u - r1, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r6 = r_; }  /* 0C0AFB3C negc Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C0AFB3E tst Rm,Rn */
	IF(0x0C0AFB40u); r5 = T;  /* 0C0AFB40 movt Rn */
	T = (r6 & r5) == 0;  /* 0C0AFB42 tst Rm,Rn */
	if (!T) { UPD(0x0C0AFB5Cu, 7); goto L_0C0AFB5C; }  /* 0C0AFB44 bf */
L_0C0AFB46: BLKS(0x0C0AFB46u);
	T = (r3 & r3) == 0;  /* 0C0AFB46 tst Rm,Rn */
	{ u32 c_ = T; r7 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AFB70u, 4); goto L_0C0AFB70; } goto L_0C0AFB4C; }  /* 0C0AFB48 bt/s */
L_0C0AFB4C: BLKS(0x0C0AFB4Cu);
	T = r0 > r7;  /* 0C0AFB4C cmp/hi Rm,Rn */
	if (T) { UPD(0x0C0AFB5Cu, 5); goto L_0C0AFB5C; }  /* 0C0AFB4E bt */
L_0C0AFB50: BLKS(0x0C0AFB50u);
	r5 = 0xC1F60D0u; UPD(0x0C0AFB52u, 1);  /* 0C0AFB50 mov.l @(disp,pc),Rn */
	r2 = 0xC275444u; UPD(0x0C0AFB54u, 1);  /* 0C0AFB52 mov.l @(disp,pc),Rn */
	IF(0x0C0AFB54u); r4 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C0AFB56u, 1);  /* 0C0AFB54 mov.b @(r0,Rm),Rn */
	r0 = r2;  /* 0C0AFB56 mov Rm,Rn */
	IF(0x0C0AFB58u); W8(r0 + r3, r4); UPD(0x0C0AFB5Au, 2);  /* 0C0AFB58 mov.b Rm,@(r0,Rn) */
	IF(0x0C0AFB5Au); ;  /* 0C0AFB5A nop */
	UPD(0x0C0AFB5Cu, 1);
L_0C0AFB5C: BLKS(0x0C0AFB5Cu);
	r15 = r14;  /* 0C0AFB5C mov Rm,Rn */
	IF(0x0C0AFB5Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0AFB5E rts */
L_0C0AFB70: BLKS(0x0C0AFB70u);
	r6 = 0xC1F60D0u; UPD(0x0C0AFB72u, 1);  /* 0C0AFB70 mov.l @(disp,pc),Rn */
	IF(0x0C0AFB72u); r3 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C0AFB74u, 1);  /* 0C0AFB72 mov.b @(r0,Rm),Rn */
	r0 = 0xC04E648u; UPD(0x0C0AFB76u, 1);  /* 0C0AFB74 mov.l @(disp,pc),Rn */
	r4 = r3 & 0xFF;  /* 0C0AFB76 extu.b Rm,Rn */
	r15 = r14;  /* 0C0AFB78 mov Rm,Rn */
	IF(0x0C0AFB7Au); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 4); switch (t_) { case 0x0C04E648u: TAIL(f_0C04E648); default: JUMPD(tv_); } }  /* 0C0AFB7A jmp @Rn */
}

/* FUN_0c0afba0 */
void f_0C0AFBA0(sh3_t *c)
{
	LOCALS;
L_0C0AFBA0: BLKS(0x0C0AFBA0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AFBA2u, 1);  /* 0C0AFBA0 mov.l Rm,@-Rn */
	r3 = (u32)(s32)(s16)r4;  /* 0C0AFBA2 exts.w Rm,Rn */
	r2 = 0xC392E24u; UPD(0x0C0AFBA6u, 2);  /* 0C0AFBA4 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0AFBA6 mov Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C0AFBAAu, 2);  /* 0C0AFBA8 mov.b @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0AFBAA tst Rm,Rn */
	{ u32 c_ = T; r7 = r5 & 0xFF; /* slot extu.b Rm,Rn */ if (c_) { UPD(0x0C0AFBE8u, 4); goto L_0C0AFBE8; } goto L_0C0AFBB0; }  /* 0C0AFBAC bt/s */
L_0C0AFBB0: BLKS(0x0C0AFBB0u);
	r0 = 0xC21CA15u; UPD(0x0C0AFBB2u, 2);  /* 0C0AFBB0 mov.l @(disp,pc),Rn */
	r1 = 0xFFFFFFFFu;  /* 0C0AFBB2 mov #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r0); UPD(0x0C0AFBB6u, 2);  /* 0C0AFBB4 mov.b @Rm,Rn */
	r6 = 0xC26C8C4u; UPD(0x0C0AFBB8u, 1);  /* 0C0AFBB6 mov.l @(disp,pc),Rn */
	T = (r2 & r2) == 0;  /* 0C0AFBB8 tst Rm,Rn */
	r5 = (u32)(s32)(s8)R8(r6); UPD(0x0C0AFBBCu, 2);  /* 0C0AFBBA mov.b @Rm,Rn */
	{ u32 t_ = 0u - r1, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r4 = r_; }  /* 0C0AFBBC negc Rm,Rn */
	T = (r5 & r5) == 0;  /* 0C0AFBBE tst Rm,Rn */
	IF(0x0C0AFBC0u); r0 = T;  /* 0C0AFBC0 movt Rn */
	T = (r4 & r0) == 0;  /* 0C0AFBC2 tst Rm,Rn */
	if (!T) { UPD(0x0C0AFBE8u, 7); goto L_0C0AFBE8; }  /* 0C0AFBC4 bf */
L_0C0AFBC6: BLKS(0x0C0AFBC6u);
	r2 = 0xC1F60D8u; UPD(0x0C0AFBC8u, 1);  /* 0C0AFBC6 mov.l @(disp,pc),Rn */
	r0 = r2;  /* 0C0AFBC8 mov Rm,Rn */
	IF(0x0C0AFBCAu); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0AFBCCu, 2);  /* 0C0AFBCA mov.b @(r0,Rm),Rn */
	r6 = 0x280u; UPD(0x0C0AFBCEu, 1);  /* 0C0AFBCC mov.w @(disp,pc),Rn */
	IF(0x0C0AFBCEu); MACL = r2 * r6;  /* 0C0AFBCE mul.l Rm,Rn */
	r5 = 0xC283794u; UPD(0x0C0AFBD2u, 3);  /* 0C0AFBD0 mov.l @(disp,pc),Rn */
	IF(0x0C0AFBD2u); r0 = MACL;  /* 0C0AFBD2 sts macl,Rn */
	IF(0x0C0AFBD4u); r4 = R32(r0 + r5); UPD(0x0C0AFBD6u, 2);  /* 0C0AFBD4 mov.l @(r0,Rm),Rn */
	T = (r4 & r4) == 0;  /* 0C0AFBD6 tst Rm,Rn */
	if (!T) { UPD(0x0C0AFBDCu, 4); goto L_0C0AFBDC; }  /* 0C0AFBD8 bf */
L_0C0AFBDA: BLKS(0x0C0AFBDAu);
	r3 = r2;  /* 0C0AFBDA mov Rm,Rn */
	UPD(0x0C0AFBDCu, 1);
L_0C0AFBDC: BLKS(0x0C0AFBDCu);
	r5 = 0xC1F60D4u; UPD(0x0C0AFBDEu, 1);  /* 0C0AFBDC mov.l @(disp,pc),Rn */
	r0 = r5;  /* 0C0AFBDE mov Rm,Rn */
	IF(0x0C0AFBE0u); r4 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0AFBE2u, 2);  /* 0C0AFBE0 mov.b @(r0,Rm),Rn */
	r3 = 0xC275444u; UPD(0x0C0AFBE4u, 1);  /* 0C0AFBE2 mov.l @(disp,pc),Rn */
	r0 = r3;  /* 0C0AFBE4 mov Rm,Rn */
	IF(0x0C0AFBE6u); W8(r0 + r7, r4); UPD(0x0C0AFBE8u, 2);  /* 0C0AFBE6 mov.b Rm,@(r0,Rn) */
L_0C0AFBE8: BLKS(0x0C0AFBE8u);
	r15 = r14;  /* 0C0AFBE8 mov Rm,Rn */
	IF(0x0C0AFBEAu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0AFBEA rts */
}

/* FUN_0c0afc10 */
void f_0C0AFC10(sh3_t *c)
{
	LOCALS;
L_0C0AFC10: BLKS(0x0C0AFC10u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AFC12u, 1);  /* 0C0AFC10 mov.l Rm,@-Rn */
	r0 = r4 & 0xFF;  /* 0C0AFC12 extu.b Rm,Rn */
	r3 = 0xC392E24u; UPD(0x0C0AFC16u, 2);  /* 0C0AFC14 mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s8)R8(r3); UPD(0x0C0AFC18u, 1);  /* 0C0AFC16 mov.b @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C0AFC18 tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0AFC40u, 4); goto L_0C0AFC40; } goto L_0C0AFC1E; }  /* 0C0AFC1A bt/s */
L_0C0AFC1E: BLKS(0x0C0AFC1Eu);
	r3 = 0xC21CA15u; UPD(0x0C0AFC20u, 2);  /* 0C0AFC1E mov.l @(disp,pc),Rn */
	r1 = 0xFFFFFFFFu;  /* 0C0AFC20 mov #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r3); UPD(0x0C0AFC24u, 2);  /* 0C0AFC22 mov.b @Rm,Rn */
	r7 = 0xC26C8C4u; UPD(0x0C0AFC26u, 1);  /* 0C0AFC24 mov.l @(disp,pc),Rn */
	T = (r2 & r2) == 0;  /* 0C0AFC26 tst Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C0AFC2Au, 2);  /* 0C0AFC28 mov.b @Rm,Rn */
	{ u32 t_ = 0u - r1, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r5 = r_; }  /* 0C0AFC2A negc Rm,Rn */
	T = (r6 & r6) == 0;  /* 0C0AFC2C tst Rm,Rn */
	IF(0x0C0AFC2Eu); r4 = T;  /* 0C0AFC2E movt Rn */
	T = (r5 & r4) == 0;  /* 0C0AFC30 tst Rm,Rn */
	{ u32 c_ = !T; T = (r0 & r0) == 0; /* slot tst Rm,Rn */ if (c_) { UPD(0x0C0AFC40u, 7); goto L_0C0AFC40; } goto L_0C0AFC36; }  /* 0C0AFC32 bf/s */
L_0C0AFC36: BLKS(0x0C0AFC36u);
	{ u32 c_ = T; r5 = 0x3u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AFC40u, 4); goto L_0C0AFC40; } goto L_0C0AFC3A; }  /* 0C0AFC36 bt/s */
L_0C0AFC3A: BLKS(0x0C0AFC3Au);
	r4 = 0xC275444u; UPD(0x0C0AFC3Cu, 2);  /* 0C0AFC3A mov.l @(disp,pc),Rn */
	IF(0x0C0AFC3Cu); W8(r0 + r4, r5); UPD(0x0C0AFC3Eu, 1);  /* 0C0AFC3C mov.b Rm,@(r0,Rn) */
	IF(0x0C0AFC3Eu); ;  /* 0C0AFC3E nop */
	UPD(0x0C0AFC40u, 1);
L_0C0AFC40: BLKS(0x0C0AFC40u);
	r15 = r14;  /* 0C0AFC40 mov Rm,Rn */
	IF(0x0C0AFC42u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0AFC42 rts */
}

/* FUN_0c0afc60 */
void f_0C0AFC60(sh3_t *c)
{
	LOCALS;
L_0C0AFC60: BLKS(0x0C0AFC60u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AFC62u, 1);  /* 0C0AFC60 mov.l Rm,@-Rn */
	r0 = r4 & 0xFF;  /* 0C0AFC62 extu.b Rm,Rn */
	r3 = 0xC392E24u; UPD(0x0C0AFC66u, 2);  /* 0C0AFC64 mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s8)R8(r3); UPD(0x0C0AFC68u, 1);  /* 0C0AFC66 mov.b @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C0AFC68 tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0AFC78u, 4); goto L_0C0AFC78; } goto L_0C0AFC6E; }  /* 0C0AFC6A bt/s */
L_0C0AFC6E: BLKS(0x0C0AFC6Eu);
	T = (r0 & r0) == 0;  /* 0C0AFC6E tst Rm,Rn */
	{ u32 c_ = T; r1 = 0x7u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AFC80u, 5); goto L_0C0AFC80; } goto L_0C0AFC74; }  /* 0C0AFC70 bt/s */
L_0C0AFC74: BLKS(0x0C0AFC74u);
	r4 = 0xC275444u; UPD(0x0C0AFC76u, 2);  /* 0C0AFC74 mov.l @(disp,pc),Rn */
	IF(0x0C0AFC76u); W8(r0 + r4, r1); UPD(0x0C0AFC78u, 1);  /* 0C0AFC76 mov.b Rm,@(r0,Rn) */
L_0C0AFC78: BLKS(0x0C0AFC78u);
	r15 = r14;  /* 0C0AFC78 mov Rm,Rn */
	IF(0x0C0AFC7Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0AFC7A rts */
L_0C0AFC80: BLKS(0x0C0AFC80u);
	r0 = 0xC04E648u; UPD(0x0C0AFC82u, 1);  /* 0C0AFC80 mov.l @(disp,pc),Rn */
	r4 = 0x7u;  /* 0C0AFC82 mov #imm,Rn */
	r15 = r14;  /* 0C0AFC84 mov Rm,Rn */
	IF(0x0C0AFC86u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 4); switch (t_) { case 0x0C04E648u: TAIL(f_0C04E648); default: JUMPD(tv_); } }  /* 0C0AFC86 jmp @Rn */
}

/* FUN_0c0afca0 */
void f_0C0AFCA0(sh3_t *c)
{
	LOCALS;
L_0C0AFCA0: BLKS(0x0C0AFCA0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AFCA2u, 1);  /* 0C0AFCA0 mov.l Rm,@-Rn */
	r2 = (u32)(s32)(s8)r4;  /* 0C0AFCA2 exts.b Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C0AFCA4 tst Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0AFCC0u, 5); goto L_0C0AFCC0; } goto L_0C0AFCAA; }  /* 0C0AFCA6 bf/s */
L_0C0AFCAA: BLKS(0x0C0AFCAAu);
	r0 = 0xC04E648u; UPD(0x0C0AFCACu, 2);  /* 0C0AFCAA mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C0AFCAC mov #imm,Rn */
	r15 = r14;  /* 0C0AFCAE mov Rm,Rn */
	IF(0x0C0AFCB0u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 4); switch (t_) { case 0x0C04E648u: TAIL(f_0C04E648); default: JUMPD(tv_); } }  /* 0C0AFCB0 jmp @Rn */
L_0C0AFCC0: BLKS(0x0C0AFCC0u);
	r5 = 0x3u;  /* 0C0AFCC0 mov #imm,Rn */
	IF(0x0C0AFCC2u); ARG0(0x425Du); { s32 s_ = (s32)r5; if (s_ >= 0) r2 <<= (s_ & 31); else if ((s_ & 31) == 0) r2 = 0; else r2 >>= ((~s_ & 31) + 1); }  /* 0C0AFCC2 shld Rm,Rn */
	r4 = 0xC1F5520u; UPD(0x0C0AFCC6u, 3);  /* 0C0AFCC4 mov.l @(disp,pc),Rn */
	r2 += r4;  /* 0C0AFCC6 add Rm,Rn */
	r3 = r2;  /* 0C0AFCC8 mov Rm,Rn */
	r3 += 0xFFFFFFFCu;  /* 0C0AFCCA add #imm,Rn */
	r2 += 0xFFFFFFF8u;  /* 0C0AFCCC add #imm,Rn */
	r5 = R32(r2); UPD(0x0C0AFCD0u, 5);  /* 0C0AFCCE mov.l @Rm,Rn */
	r4 = 0x0u;  /* 0C0AFCD0 mov #imm,Rn */
	r6 = R32(r3); UPD(0x0C0AFCD4u, 2);  /* 0C0AFCD2 mov.l @Rm,Rn */
	r0 = 0xC04E5BCu; UPD(0x0C0AFCD6u, 1);  /* 0C0AFCD4 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C0AFCD6 mov Rm,Rn */
	IF(0x0C0AFCD8u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C04E5BCu: TAIL(f_0C04E5BC); default: JUMPD(tv_); } }  /* 0C0AFCD8 jmp @Rn */
}

/* FUN_0c0afcf0 */
void f_0C0AFCF0(sh3_t *c)
{
	LOCALS;
L_0C0AFCF0: BLKS(0x0C0AFCF0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AFCF2u, 1);  /* 0C0AFCF0 mov.l Rm,@-Rn */
	r4 = 0x6u;  /* 0C0AFCF2 mov #imm,Rn */
	r0 = 0xC050D70u; UPD(0x0C0AFCF6u, 2);  /* 0C0AFCF4 mov.l @(disp,pc),Rn */
	IF(0x0C0AFCF6u); r15 -= 4; W32(r15, PR); UPD(0x0C0AFCF8u, 1);  /* 0C0AFCF6 sts.l pr,@-Rn */
	IF(0x0C0AFCF8u); { u32 t_ = r0; PR = 0x0C0AFCFCu; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C0AFCFCu); }  /* 0C0AFCF8 jsr @Rn */
L_0C0AFCFC: BLKS(0x0C0AFCFCu);
	r4 = 0xC1F60DCu; UPD(0x0C0AFCFEu, 1);  /* 0C0AFCFC mov.l @(disp,pc),Rn */
	IF(0x0C0AFCFEu); r2 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C0AFD00u, 1);  /* 0C0AFCFE mov.b @(r0,Rm),Rn */
	r3 = 0xC392E24u; UPD(0x0C0AFD02u, 1);  /* 0C0AFD00 mov.l @(disp,pc),Rn */
	r0 = r2 & 0xFF;  /* 0C0AFD02 extu.b Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r3); UPD(0x0C0AFD06u, 2);  /* 0C0AFD04 mov.b @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C0AFD06 tst Rm,Rn */
	{ u32 c_ = T; r1 = 0xFFFFFFFFu; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AFD2Cu, 4); goto L_0C0AFD2C; } goto L_0C0AFD0C; }  /* 0C0AFD08 bt/s */
L_0C0AFD0C: BLKS(0x0C0AFD0Cu);
	r4 = 0xC21CA15u; UPD(0x0C0AFD0Eu, 2);  /* 0C0AFD0C mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s8)R8(r4); UPD(0x0C0AFD10u, 1);  /* 0C0AFD0E mov.b @Rm,Rn */
	r3 = 0xC26C8C4u; UPD(0x0C0AFD12u, 1);  /* 0C0AFD10 mov.l @(disp,pc),Rn */
	T = (r2 & r2) == 0;  /* 0C0AFD12 tst Rm,Rn */
	r7 = (u32)(s32)(s8)R8(r3); UPD(0x0C0AFD16u, 2);  /* 0C0AFD14 mov.b @Rm,Rn */
	{ u32 t_ = 0u - r1, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r6 = r_; }  /* 0C0AFD16 negc Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C0AFD18 tst Rm,Rn */
	IF(0x0C0AFD1Au); r5 = T;  /* 0C0AFD1A movt Rn */
	T = (r6 & r5) == 0;  /* 0C0AFD1C tst Rm,Rn */
	{ u32 c_ = !T; T = (r0 & r0) == 0; /* slot tst Rm,Rn */ if (c_) { UPD(0x0C0AFD2Cu, 7); goto L_0C0AFD2C; } goto L_0C0AFD22; }  /* 0C0AFD1E bf/s */
L_0C0AFD22: BLKS(0x0C0AFD22u);
	{ u32 c_ = T; r6 = 0x3u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AFD2Cu, 4); goto L_0C0AFD2C; } goto L_0C0AFD26; }  /* 0C0AFD22 bt/s */
L_0C0AFD26: BLKS(0x0C0AFD26u);
	r5 = 0xC275444u; UPD(0x0C0AFD28u, 2);  /* 0C0AFD26 mov.l @(disp,pc),Rn */
	IF(0x0C0AFD28u); W8(r0 + r5, r6); UPD(0x0C0AFD2Au, 1);  /* 0C0AFD28 mov.b Rm,@(r0,Rn) */
	IF(0x0C0AFD2Au); ;  /* 0C0AFD2A nop */
	UPD(0x0C0AFD2Cu, 1);
L_0C0AFD2C: BLKS(0x0C0AFD2Cu);
	r15 = r14;  /* 0C0AFD2C mov Rm,Rn */
	IF(0x0C0AFD2Eu); PR = R32(r15); r15 += 4; UPD(0x0C0AFD30u, 2);  /* 0C0AFD2E lds.l @Rn+,pr */
	IF(0x0C0AFD30u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AFD30 rts */
}

/* FUN_0c0afd50 */
void f_0C0AFD50(sh3_t *c)
{
	LOCALS;
L_0C0AFD50: BLKS(0x0C0AFD50u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AFD52u, 1);  /* 0C0AFD50 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AFD54u, 1);  /* 0C0AFD52 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s8)r5;  /* 0C0AFD54 exts.b Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AFD58u, 2);  /* 0C0AFD56 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s8)r6;  /* 0C0AFD58 exts.b Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0AFD5Cu, 2);  /* 0C0AFD5A mov.l Rm,@-Rn */
	r5 = r8;  /* 0C0AFD5C mov Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0AFD60u, 2);  /* 0C0AFD5E mov.l Rm,@-Rn */
	r6 = r9;  /* 0C0AFD60 mov Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AFD64u, 2);  /* 0C0AFD62 mov.l Rm,@-Rn */
	r12 = r4 & 0xFF;  /* 0C0AFD64 extu.b Rm,Rn */
	r11 = 0xC050CD0u; UPD(0x0C0AFD68u, 2);  /* 0C0AFD66 mov.l @(disp,pc),Rn */
	IF(0x0C0AFD68u); r12 <<= 2;  /* 0C0AFD68 shll2 Rn */
	IF(0x0C0AFD6Au); r15 -= 4; W32(r15, PR); UPD(0x0C0AFD6Cu, 2);  /* 0C0AFD6A sts.l pr,@-Rn */
	r10 = 0x80808000u; UPD(0x0C0AFD6Eu, 1);  /* 0C0AFD6C mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0AFD6E mov Rm,Rn */
	r4 = 0xC1F5598u; UPD(0x0C0AFD72u, 2);  /* 0C0AFD70 mov.l @(disp,pc),Rn */
	IF(0x0C0AFD72u); { u32 t_ = r11; PR = 0x0C0AFD76u; r7 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C0AFD76u); }  /* 0C0AFD72 jsr @Rn */
L_0C0AFD76: BLKS(0x0C0AFD76u);
	r2 = 0xC1F5CD0u; UPD(0x0C0AFD78u, 1);  /* 0C0AFD76 mov.l @(disp,pc),Rn */
	r0 = r12;  /* 0C0AFD78 mov Rm,Rn */
	IF(0x0C0AFD7Au); r4 = R32(r0 + r2); UPD(0x0C0AFD7Cu, 2);  /* 0C0AFD7A mov.l @(r0,Rm),Rn */
	r5 = r8;  /* 0C0AFD7C mov Rm,Rn */
	r6 = r9;  /* 0C0AFD7E mov Rm,Rn */
	r7 = r10;  /* 0C0AFD80 mov Rm,Rn */
	r0 = r11;  /* 0C0AFD82 mov Rm,Rn */
	r15 = r14;  /* 0C0AFD84 mov Rm,Rn */
	IF(0x0C0AFD86u); PR = R32(r15); r15 += 4; UPD(0x0C0AFD88u, 6);  /* 0C0AFD86 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AFD8Au, 1);  /* 0C0AFD88 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0AFD8Cu, 1);  /* 0C0AFD8A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0AFD8Eu, 1);  /* 0C0AFD8C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AFD90u, 1);  /* 0C0AFD8E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AFD92u, 1);  /* 0C0AFD90 mov.l @Rm+,Rn */
	IF(0x0C0AFD92u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C050CD0u: TAIL(f_0C050CD0); default: JUMPD(tv_); } }  /* 0C0AFD92 jmp @Rn */
}

/* FUN_0c0afdb0 */
void f_0C0AFDB0(sh3_t *c)
{
	LOCALS;
L_0C0AFDB0: BLKS(0x0C0AFDB0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AFDB2u, 1);  /* 0C0AFDB0 mov.l Rm,@-Rn */
	r0 = (u32)(s32)(s8)r4;  /* 0C0AFDB2 exts.b Rm,Rn */
	r2 = 0xC1F5CD0u; UPD(0x0C0AFDB6u, 2);  /* 0C0AFDB4 mov.l @(disp,pc),Rn */
	IF(0x0C0AFDB6u); r0 <<= 2;  /* 0C0AFDB6 shll2 Rn */
	IF(0x0C0AFDB8u); r4 = R32(r0 + r2); UPD(0x0C0AFDBAu, 2);  /* 0C0AFDB8 mov.l @(r0,Rm),Rn */
	r14 = r15;  /* 0C0AFDBA mov Rm,Rn */
	r7 = 0xC040C000u; UPD(0x0C0AFDBEu, 2);  /* 0C0AFDBC mov.l @(disp,pc),Rn */
	r5 = (u32)(s32)(s8)r5;  /* 0C0AFDBE exts.b Rm,Rn */
	r0 = 0xC050CD0u; UPD(0x0C0AFDC2u, 2);  /* 0C0AFDC0 mov.l @(disp,pc),Rn */
	r6 = (u32)(s32)(s8)r6;  /* 0C0AFDC2 exts.b Rm,Rn */
	r15 = r14;  /* 0C0AFDC4 mov Rm,Rn */
	IF(0x0C0AFDC6u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 4); switch (t_) { case 0x0C050CD0u: TAIL(f_0C050CD0); default: JUMPD(tv_); } }  /* 0C0AFDC6 jmp @Rn */
}

/* divmod10 */
void f_0C0AFDF0(sh3_t *c)
{
	LOCALS;
L_0C0AFDF0: BLKS(0x0C0AFDF0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AFDF2u, 1);  /* 0C0AFDF0 mov.l Rm,@-Rn */
	IF(0x0C0AFDF2u); r15 -= 4; W32(r15, PR); UPD(0x0C0AFDF4u, 1);  /* 0C0AFDF2 sts.l pr,@-Rn */
	r15 += 0xFFFFFFF0u;  /* 0C0AFDF4 add #imm,Rn */
	r14 = r15;  /* 0C0AFDF6 mov Rm,Rn */
	W32(r14, r4); UPD(0x0C0AFDFAu, 3);  /* 0C0AFDF8 mov.l Rm,@Rn */
	W32(r14 + 0x4u, r5); UPD(0x0C0AFDFCu, 1);  /* 0C0AFDFA mov.l Rm,@(disp,Rn) */
	r7 = 0xC0AFF74u; UPD(0x0C0AFDFEu, 1);  /* 0C0AFDFC mov.l @(disp,pc),Rn */
	r4 = R32(r14); UPD(0x0C0AFE00u, 1);  /* 0C0AFDFE mov.l @Rm,Rn */
	r5 = R32(r14 + 0x4u); UPD(0x0C0AFE02u, 1);  /* 0C0AFE00 mov.l @(disp,Rm),Rn */
	IF(0x0C0AFE02u); { u32 t_ = r7; PR = 0x0C0AFE06u; IF(0x0C0AFE04u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0AFF74, 0x0C0AFF74u, 0x0C0AFE06u); }  /* 0C0AFE02 jsr @Rn */
L_0C0AFE06: BLKS(0x0C0AFE06u);
	W32(r14 + 0x8u, r0); UPD(0x0C0AFE08u, 1);  /* 0C0AFE06 mov.l Rm,@(disp,Rn) */
	r6 = R32(r14); UPD(0x0C0AFE0Au, 1);  /* 0C0AFE08 mov.l @Rm,Rn */
	r7 = 0xC0AFF74u; UPD(0x0C0AFE0Cu, 1);  /* 0C0AFE0A mov.l @(disp,pc),Rn */
	r4 = r6;  /* 0C0AFE0C mov Rm,Rn */
	r5 = R32(r14 + 0x4u); UPD(0x0C0AFE10u, 2);  /* 0C0AFE0E mov.l @(disp,Rm),Rn */
	IF(0x0C0AFE10u); { u32 t_ = r7; PR = 0x0C0AFE14u; IF(0x0C0AFE12u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0AFF74, 0x0C0AFF74u, 0x0C0AFE14u); }  /* 0C0AFE10 jsr @Rn */
L_0C0AFE14: BLKS(0x0C0AFE14u);
	r1 = R32(r14 + 0x4u); UPD(0x0C0AFE16u, 1);  /* 0C0AFE14 mov.l @(disp,Rm),Rn */
	IF(0x0C0AFE16u); MACL = r0 * r1;  /* 0C0AFE16 mul.l Rm,Rn */
	IF(0x0C0AFE18u); r1 = MACL;  /* 0C0AFE18 sts macl,Rn */
	r6 -= r1;  /* 0C0AFE1A sub Rm,Rn */
	r1 = r6;  /* 0C0AFE1C mov Rm,Rn */
	W32(r14 + 0xCu, r1); UPD(0x0C0AFE20u, 6);  /* 0C0AFE1E mov.l Rm,@(disp,Rn) */
	r1 = R32(r14 + 0x8u); UPD(0x0C0AFE22u, 1);  /* 0C0AFE20 mov.l @(disp,Rm),Rn */
	r2 = R32(r14 + 0xCu); UPD(0x0C0AFE24u, 1);  /* 0C0AFE22 mov.l @(disp,Rm),Rn */
	r0 = r1;  /* 0C0AFE24 mov Rm,Rn */
	r1 = r2;  /* 0C0AFE26 mov Rm,Rn */
	r14 += 0x10u;  /* 0C0AFE28 add #imm,Rn */
	r15 = r14;  /* 0C0AFE2A mov Rm,Rn */
	IF(0x0C0AFE2Cu); PR = R32(r15); r15 += 4; UPD(0x0C0AFE2Eu, 5);  /* 0C0AFE2C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AFE30u, 1);  /* 0C0AFE2E mov.l @Rm+,Rn */
	IF(0x0C0AFE30u); { u32 t_ = PR; IF(0x0C0AFE32u); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C0AFE30 rts */
}

/* FUN_0c0afe40 */
void f_0C0AFE40(sh3_t *c)
{
	LOCALS;
L_0C0AFE40: BLKS(0x0C0AFE40u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AFE42u, 1);  /* 0C0AFE40 mov.l Rm,@-Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0AFE42 add #imm,Rn */
	r14 = r15;  /* 0C0AFE44 mov Rm,Rn */
	r3 = 0xC1F6178u; UPD(0x0C0AFE48u, 3);  /* 0C0AFE46 mov.l @(disp,pc),Rn */
	r1 = 0xC1F6178u; UPD(0x0C0AFE4Au, 1);  /* 0C0AFE48 mov.l @(disp,pc),Rn */
	r2 = R32(r1); UPD(0x0C0AFE4Cu, 1);  /* 0C0AFE4A mov.l @Rm,Rn */
	r1 = 0x41C64E6Du; UPD(0x0C0AFE4Eu, 1);  /* 0C0AFE4C mov.l @(disp,pc),Rn */
	IF(0x0C0AFE4Eu); MACL = r2 * r1;  /* 0C0AFE4E mul.l Rm,Rn */
	IF(0x0C0AFE50u); r2 = MACL;  /* 0C0AFE50 sts macl,Rn */
	r1 = 0x3039u; UPD(0x0C0AFE54u, 4);  /* 0C0AFE52 mov.w @(disp,pc),Rn */
	r1 += r2;  /* 0C0AFE54 add Rm,Rn */
	W32(r3, r1); UPD(0x0C0AFE58u, 2);  /* 0C0AFE56 mov.l Rm,@Rn */
	r1 = 0xC1F6178u; UPD(0x0C0AFE5Au, 1);  /* 0C0AFE58 mov.l @(disp,pc),Rn */
	r1 = R32(r1); UPD(0x0C0AFE5Cu, 1);  /* 0C0AFE5A mov.l @Rm,Rn */
	r1 += 0x1u;  /* 0C0AFE5C add #imm,Rn */
	W32(r14, r1); UPD(0x0C0AFE60u, 2);  /* 0C0AFE5E mov.l Rm,@Rn */
	r2 = R32(r14); UPD(0x0C0AFE62u, 1);  /* 0C0AFE60 mov.l @Rm,Rn */
	r1 = (r2 >> 16) | (r2 << 16);  /* 0C0AFE62 swap.w Rm,Rn */
	r1 = (u32)(s32)(s16)r1;  /* 0C0AFE64 exts.w Rm,Rn */
	W32(r14, r1); UPD(0x0C0AFE68u, 3);  /* 0C0AFE66 mov.l Rm,@Rn */
	r1 = 0x7FFFu; UPD(0x0C0AFE6Au, 1);  /* 0C0AFE68 mov.w @(disp,pc),Rn */
	r2 = R32(r14); UPD(0x0C0AFE6Cu, 1);  /* 0C0AFE6A mov.l @Rm,Rn */
	r2 &= r1;  /* 0C0AFE6C and Rm,Rn */
	W32(r14, r2); UPD(0x0C0AFE70u, 2);  /* 0C0AFE6E mov.l Rm,@Rn */
	r0 = R32(r14); UPD(0x0C0AFE72u, 1);  /* 0C0AFE70 mov.l @Rm,Rn */
	r14 += 0x4u;  /* 0C0AFE72 add #imm,Rn */
	r15 = r14;  /* 0C0AFE74 mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AFE78u, 3);  /* 0C0AFE76 mov.l @Rm+,Rn */
	IF(0x0C0AFE78u); { u32 t_ = PR; IF(0x0C0AFE7Au); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C0AFE78 rts */
}

/* FUN_0c0afe90 */
void f_0C0AFE90(sh3_t *c)
{
	LOCALS;
L_0C0AFE90: BLKS(0x0C0AFE90u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AFE92u, 1);  /* 0C0AFE90 mov.l Rm,@-Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0AFE92 add #imm,Rn */
	r14 = r15;  /* 0C0AFE94 mov Rm,Rn */
	W32(r14, r4); UPD(0x0C0AFE98u, 3);  /* 0C0AFE96 mov.l Rm,@Rn */
	r2 = 0xC1F6178u; UPD(0x0C0AFE9Au, 1);  /* 0C0AFE98 mov.l @(disp,pc),Rn */
	r1 = R32(r14); UPD(0x0C0AFE9Cu, 1);  /* 0C0AFE9A mov.l @Rm,Rn */
	W32(r2, r1); UPD(0x0C0AFE9Eu, 1);  /* 0C0AFE9C mov.l Rm,@Rn */
	r14 += 0x4u;  /* 0C0AFE9E add #imm,Rn */
	r15 = r14;  /* 0C0AFEA0 mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AFEA4u, 3);  /* 0C0AFEA2 mov.l @Rm+,Rn */
	IF(0x0C0AFEA4u); { u32 t_ = PR; IF(0x0C0AFEA6u); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C0AFEA4 rts */
}

/* memcpy */
void f_0C0AFEB0(sh3_t *c)
{
	LOCALS;
L_0C0AFEB0: BLKS(0x0C0AFEB0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AFEB2u, 1);  /* 0C0AFEB0 mov.l Rm,@-Rn */
	IF(0x0C0AFEB2u); r15 -= 4; W32(r15, PR); UPD(0x0C0AFEB4u, 1);  /* 0C0AFEB2 sts.l pr,@-Rn */
	r15 += 0xFFFFFFF4u;  /* 0C0AFEB4 add #imm,Rn */
	r14 = r15;  /* 0C0AFEB6 mov Rm,Rn */
	W32(r14, r4); UPD(0x0C0AFEBAu, 3);  /* 0C0AFEB8 mov.l Rm,@Rn */
	W32(r14 + 0x4u, r5); UPD(0x0C0AFEBCu, 1);  /* 0C0AFEBA mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x8u, r6); UPD(0x0C0AFEBEu, 1);  /* 0C0AFEBC mov.l Rm,@(disp,Rn) */
	r1 = R32(r14 + 0x4u); UPD(0x0C0AFEC0u, 1);  /* 0C0AFEBE mov.l @(disp,Rm),Rn */
	r2 = R32(r14 + 0x8u); UPD(0x0C0AFEC2u, 1);  /* 0C0AFEC0 mov.l @(disp,Rm),Rn */
	r4 = r1;  /* 0C0AFEC2 mov Rm,Rn */
	r5 = R32(r14); UPD(0x0C0AFEC6u, 2);  /* 0C0AFEC4 mov.l @Rm,Rn */
	r6 = r2;  /* 0C0AFEC6 mov Rm,Rn */
	r1 = 0xC0B00C0u; UPD(0x0C0AFECAu, 2);  /* 0C0AFEC8 mov.l @(disp,pc),Rn */
	IF(0x0C0AFECAu); { u32 t_ = r1; PR = 0x0C0AFECEu; IF(0x0C0AFECCu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0B00C0, 0x0C0B00C0u, 0x0C0AFECEu); }  /* 0C0AFECA jsr @Rn */
L_0C0AFECE: BLKS(0x0C0AFECEu);
	r14 += 0xCu;  /* 0C0AFECE add #imm,Rn */
	r15 = r14;  /* 0C0AFED0 mov Rm,Rn */
	IF(0x0C0AFED2u); PR = R32(r15); r15 += 4; UPD(0x0C0AFED4u, 3);  /* 0C0AFED2 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AFED6u, 1);  /* 0C0AFED4 mov.l @Rm+,Rn */
	IF(0x0C0AFED6u); { u32 t_ = PR; IF(0x0C0AFED8u); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C0AFED6 rts */
}

/* sdiv32 */
void f_0C0AFF74(sh3_t *c)
{
	LOCALS;
	goto L_0C0AFF74;
L_0C0AFF6E: BLKS(0x0C0AFF6Eu);
	IF(0x0C0AFF6Eu); rt_illegal(c, 0x0C0AFF6Eu);  /* 0C0AFF6E illegal 0FF0 */
L_0C0AFF74: BLKS(0x0C0AFF74u);
	T = (r5 & r5) == 0;  /* 0C0AFF74 tst Rm,Rn */
	if (T) { UPD(0x0C0AFF6Eu, 4); goto L_0C0AFF6E; }  /* 0C0AFF76 bt */
L_0C0AFF78: BLKS(0x0C0AFF78u);
	r1 = r4;  /* 0C0AFF78 mov Rm,Rn */
	r0 = r5;  /* 0C0AFF7A mov Rm,Rn */
	r2 ^= r2;  /* 0C0AFF7C xor Rm,Rn */
	{ u32 q_ = r1 >> 31, m_ = r2 >> 31; c->sr = (c->sr & ~(SR_Q | SR_M)) | (q_ ? SR_Q : 0) | (m_ ? SR_M : 0); T = q_ ^ m_; }  /* 0C0AFF7E div0s Rm,Rn */
	{ u32 a_ = r3, t_ = a_ - r3, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r3 = r_; }  /* 0C0AFF80 subc Rm,Rn */
	{ u32 a_ = r1, t_ = a_ - r2, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r1 = r_; }  /* 0C0AFF82 subc Rm,Rn */
	{ u32 q_ = r3 >> 31, m_ = r0 >> 31; c->sr = (c->sr & ~(SR_Q | SR_M)) | (q_ ? SR_Q : 0) | (m_ ? SR_M : 0); T = q_ ^ m_; }  /* 0C0AFF84 div0s Rm,Rn */
	IF(0x0C0AFF86u); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0AFF86 rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0AFF88 div1 Rm,Rn */
	IF(0x0C0AFF8Au); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0AFF8A rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0AFF8C div1 Rm,Rn */
	IF(0x0C0AFF8Eu); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0AFF8E rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0AFF90 div1 Rm,Rn */
	IF(0x0C0AFF92u); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0AFF92 rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0AFF94 div1 Rm,Rn */
	IF(0x0C0AFF96u); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0AFF96 rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0AFF98 div1 Rm,Rn */
	IF(0x0C0AFF9Au); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0AFF9A rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0AFF9C div1 Rm,Rn */
	IF(0x0C0AFF9Eu); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0AFF9E rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0AFFA0 div1 Rm,Rn */
	IF(0x0C0AFFA2u); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0AFFA2 rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0AFFA4 div1 Rm,Rn */
	IF(0x0C0AFFA6u); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0AFFA6 rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0AFFA8 div1 Rm,Rn */
	IF(0x0C0AFFAAu); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0AFFAA rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0AFFAC div1 Rm,Rn */
	IF(0x0C0AFFAEu); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0AFFAE rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0AFFB0 div1 Rm,Rn */
	IF(0x0C0AFFB2u); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0AFFB2 rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0AFFB4 div1 Rm,Rn */
	IF(0x0C0AFFB6u); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0AFFB6 rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0AFFB8 div1 Rm,Rn */
	IF(0x0C0AFFBAu); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0AFFBA rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0AFFBC div1 Rm,Rn */
	IF(0x0C0AFFBEu); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0AFFBE rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0AFFC0 div1 Rm,Rn */
	IF(0x0C0AFFC2u); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0AFFC2 rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0AFFC4 div1 Rm,Rn */
	IF(0x0C0AFFC6u); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0AFFC6 rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0AFFC8 div1 Rm,Rn */
	IF(0x0C0AFFCAu); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0AFFCA rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0AFFCC div1 Rm,Rn */
	IF(0x0C0AFFCEu); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0AFFCE rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0AFFD0 div1 Rm,Rn */
	IF(0x0C0AFFD2u); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0AFFD2 rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0AFFD4 div1 Rm,Rn */
	IF(0x0C0AFFD6u); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0AFFD6 rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0AFFD8 div1 Rm,Rn */
	IF(0x0C0AFFDAu); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0AFFDA rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0AFFDC div1 Rm,Rn */
	IF(0x0C0AFFDEu); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0AFFDE rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0AFFE0 div1 Rm,Rn */
	IF(0x0C0AFFE2u); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0AFFE2 rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0AFFE4 div1 Rm,Rn */
	IF(0x0C0AFFE6u); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0AFFE6 rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0AFFE8 div1 Rm,Rn */
	IF(0x0C0AFFEAu); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0AFFEA rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0AFFEC div1 Rm,Rn */
	IF(0x0C0AFFEEu); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0AFFEE rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0AFFF0 div1 Rm,Rn */
	IF(0x0C0AFFF2u); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; } UPD(0x0C0AFFF4u, 62);  /* 0C0AFFF2 rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0AFFF4 div1 Rm,Rn */
	IF(0x0C0AFFF6u); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0AFFF6 rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0AFFF8 div1 Rm,Rn */
	IF(0x0C0AFFFAu); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0AFFFA rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0AFFFC div1 Rm,Rn */
	IF(0x0C0AFFFEu); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0AFFFE rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0B0000 div1 Rm,Rn */
	IF(0x0C0B0002u); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0B0002 rotcl Rn */
	ARG0(0x3304u); { u64 r_ = sh3_div1(c, r3, r0, T); r3 = (u32)r_; T = (u32)(r_ >> 32); }  /* 0C0B0004 div1 Rm,Rn */
	IF(0x0C0B0006u); { u32 t_ = r1 >> 31; r1 = (r1 << 1) | T; T = t_; }  /* 0C0B0006 rotcl Rn */
	{ u32 a_ = r1, t_ = a_ + r2, r_ = t_ + T; T = (a_ > t_) | (t_ > r_); r1 = r_; }  /* 0C0B0008 addc Rm,Rn */
	IF(0x0C0B000Au); { u32 t_ = PR; r0 = r1; /* slot mov Rm,Rn */ UPD(t_, 14); RET(t_); }  /* 0C0B000A rts */
}

/* copy_long16 */
void f_0C0B000E(sh3_t *c)
{
	LOCALS;
L_0C0B000E: BLKS(0x0C0B000Eu);
	r0 = R32(r5 + 0x3Cu); UPD(0x0C0B0010u, 1);  /* 0C0B000E mov.l @(disp,Rm),Rn */
	W32(r4 + 0x3Cu, r0); UPD(0x0C0B0012u, 1);  /* 0C0B0010 mov.l Rm,@(disp,Rn) */
	r0 = R32(r5 + 0x38u); UPD(0x0C0B0014u, 1);  /* 0C0B0012 mov.l @(disp,Rm),Rn */
	W32(r4 + 0x38u, r0); UPD(0x0C0B0016u, 1);  /* 0C0B0014 mov.l Rm,@(disp,Rn) */
	r0 = R32(r5 + 0x34u); UPD(0x0C0B0018u, 1);  /* 0C0B0016 mov.l @(disp,Rm),Rn */
	W32(r4 + 0x34u, r0); UPD(0x0C0B001Au, 1);  /* 0C0B0018 mov.l Rm,@(disp,Rn) */
	r0 = R32(r5 + 0x30u); UPD(0x0C0B001Cu, 1);  /* 0C0B001A mov.l @(disp,Rm),Rn */
	W32(r4 + 0x30u, r0); UPD(0x0C0B001Eu, 1);  /* 0C0B001C mov.l Rm,@(disp,Rn) */
	r0 = R32(r5 + 0x2Cu); UPD(0x0C0B0020u, 1);  /* 0C0B001E mov.l @(disp,Rm),Rn */
	W32(r4 + 0x2Cu, r0); UPD(0x0C0B0022u, 1);  /* 0C0B0020 mov.l Rm,@(disp,Rn) */
	r0 = R32(r5 + 0x28u); UPD(0x0C0B0024u, 1);  /* 0C0B0022 mov.l @(disp,Rm),Rn */
	W32(r4 + 0x28u, r0); UPD(0x0C0B0026u, 1);  /* 0C0B0024 mov.l Rm,@(disp,Rn) */
	r0 = R32(r5 + 0x24u); UPD(0x0C0B0028u, 1);  /* 0C0B0026 mov.l @(disp,Rm),Rn */
	W32(r4 + 0x24u, r0); UPD(0x0C0B002Au, 1);  /* 0C0B0028 mov.l Rm,@(disp,Rn) */
	r0 = R32(r5 + 0x20u); UPD(0x0C0B002Cu, 1);  /* 0C0B002A mov.l @(disp,Rm),Rn */
	W32(r4 + 0x20u, r0); UPD(0x0C0B002Eu, 1);  /* 0C0B002C mov.l Rm,@(disp,Rn) */
	r0 = R32(r5 + 0x1Cu); UPD(0x0C0B0030u, 1);  /* 0C0B002E mov.l @(disp,Rm),Rn */
	W32(r4 + 0x1Cu, r0); UPD(0x0C0B0032u, 1);  /* 0C0B0030 mov.l Rm,@(disp,Rn) */
	r0 = R32(r5 + 0x18u); UPD(0x0C0B0034u, 1);  /* 0C0B0032 mov.l @(disp,Rm),Rn */
	W32(r4 + 0x18u, r0); UPD(0x0C0B0036u, 1);  /* 0C0B0034 mov.l Rm,@(disp,Rn) */
	r0 = R32(r5 + 0x14u); UPD(0x0C0B0038u, 1);  /* 0C0B0036 mov.l @(disp,Rm),Rn */
	W32(r4 + 0x14u, r0); UPD(0x0C0B003Au, 1);  /* 0C0B0038 mov.l Rm,@(disp,Rn) */
	r0 = R32(r5 + 0x10u); UPD(0x0C0B003Cu, 1);  /* 0C0B003A mov.l @(disp,Rm),Rn */
	W32(r4 + 0x10u, r0); UPD(0x0C0B003Eu, 1);  /* 0C0B003C mov.l Rm,@(disp,Rn) */
	r0 = R32(r5 + 0xCu); UPD(0x0C0B0040u, 1);  /* 0C0B003E mov.l @(disp,Rm),Rn */
	W32(r4 + 0xCu, r0); UPD(0x0C0B0042u, 1);  /* 0C0B0040 mov.l Rm,@(disp,Rn) */
	r0 = R32(r5 + 0x8u); UPD(0x0C0B0044u, 1);  /* 0C0B0042 mov.l @(disp,Rm),Rn */
	W32(r4 + 0x8u, r0); UPD(0x0C0B0046u, 1);  /* 0C0B0044 mov.l Rm,@(disp,Rn) */
	r0 = R32(r5 + 0x4u); UPD(0x0C0B0048u, 1);  /* 0C0B0046 mov.l @(disp,Rm),Rn */
	W32(r4 + 0x4u, r0); UPD(0x0C0B004Au, 1);  /* 0C0B0048 mov.l Rm,@(disp,Rn) */
	r0 = R32(r5 + 0x0u); UPD(0x0C0B004Cu, 1);  /* 0C0B004A mov.l @(disp,Rm),Rn */
	W32(r4 + 0x0u, r0); UPD(0x0C0B004Eu, 1);  /* 0C0B004C mov.l Rm,@(disp,Rn) */
	r6 += 0xFFFFFFF0u;  /* 0C0B004E add #imm,Rn */
	IF(0x0C0B0050u); T = (s32)r6 > 0;  /* 0C0B0050 cmp/pl Rn */
	if (T) { UPD(0x0C0B0060u, 5); goto L_0C0B0060; }  /* 0C0B0052 bt */
L_0C0B0054: BLKS(0x0C0B0054u);
	r5 += 0x40u;  /* 0C0B0054 add #imm,Rn */
	r0 = 0xC0B00B0u;  /* 0C0B0056 mova @(disp,pc),r0 */
	IF(0x0C0B0058u); r6 <<= 2;  /* 0C0B0058 shll2 Rn */
	r0 += r6;  /* 0C0B005A add Rm,Rn */
	IF(0x0C0B005Cu); { u32 tv_ = r0; u32 t_ = PHYS(tv_); r4 += 0x40u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 6); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0B005C jmp @Rn */
L_0C0B0060: BLKS(0x0C0B0060u);
	r5 += 0x40u;  /* 0C0B0060 add #imm,Rn */
	{ r4 += 0x40u; /* slot add #imm,Rn */ UPD(0x0C0B000Eu, 4); goto L_0C0B000E; }  /* 0C0B0062 bra */
}

void f_0C0B0080(sh3_t *c)
{
	LOCALS;
L_0C0B0080: BLKS(0x0C0B0080u);
	r0 = R32(r5 + 0x2Cu); UPD(0x0C0B0082u, 1);  /* 0C0B0080 mov.l @(disp,Rm),Rn */
	W32(r4 + 0x2Cu, r0); UPD(0x0C0B0084u, 1);  /* 0C0B0082 mov.l Rm,@(disp,Rn) */
	r0 = R32(r5 + 0x28u); UPD(0x0C0B0086u, 1);  /* 0C0B0084 mov.l @(disp,Rm),Rn */
	W32(r4 + 0x28u, r0); UPD(0x0C0B0088u, 1);  /* 0C0B0086 mov.l Rm,@(disp,Rn) */
	r0 = R32(r5 + 0x24u); UPD(0x0C0B008Au, 1);  /* 0C0B0088 mov.l @(disp,Rm),Rn */
	W32(r4 + 0x24u, r0); UPD(0x0C0B008Cu, 1);  /* 0C0B008A mov.l Rm,@(disp,Rn) */
	r0 = R32(r5 + 0x20u); UPD(0x0C0B008Eu, 1);  /* 0C0B008C mov.l @(disp,Rm),Rn */
	W32(r4 + 0x20u, r0); UPD(0x0C0B0090u, 1);  /* 0C0B008E mov.l Rm,@(disp,Rn) */
	r0 = R32(r5 + 0x1Cu); UPD(0x0C0B0092u, 1);  /* 0C0B0090 mov.l @(disp,Rm),Rn */
	W32(r4 + 0x1Cu, r0); UPD(0x0C0B0094u, 1);  /* 0C0B0092 mov.l Rm,@(disp,Rn) */
	r0 = R32(r5 + 0x18u); UPD(0x0C0B0096u, 1);  /* 0C0B0094 mov.l @(disp,Rm),Rn */
	W32(r4 + 0x18u, r0); UPD(0x0C0B0098u, 1);  /* 0C0B0096 mov.l Rm,@(disp,Rn) */
	r0 = R32(r5 + 0x14u); UPD(0x0C0B009Au, 1);  /* 0C0B0098 mov.l @(disp,Rm),Rn */
	W32(r4 + 0x14u, r0); UPD(0x0C0B009Cu, 1);  /* 0C0B009A mov.l Rm,@(disp,Rn) */
	r0 = R32(r5 + 0x10u); UPD(0x0C0B009Eu, 1);  /* 0C0B009C mov.l @(disp,Rm),Rn */
	W32(r4 + 0x10u, r0); UPD(0x0C0B00A0u, 1);  /* 0C0B009E mov.l Rm,@(disp,Rn) */
	r0 = R32(r5 + 0xCu); UPD(0x0C0B00A2u, 1);  /* 0C0B00A0 mov.l @(disp,Rm),Rn */
	W32(r4 + 0xCu, r0); UPD(0x0C0B00A4u, 1);  /* 0C0B00A2 mov.l Rm,@(disp,Rn) */
	r0 = R32(r5 + 0x8u); UPD(0x0C0B00A6u, 1);  /* 0C0B00A4 mov.l @(disp,Rm),Rn */
	W32(r4 + 0x8u, r0); UPD(0x0C0B00A8u, 1);  /* 0C0B00A6 mov.l Rm,@(disp,Rn) */
	r0 = R32(r5 + 0x4u); UPD(0x0C0B00AAu, 1);  /* 0C0B00A8 mov.l @(disp,Rm),Rn */
	W32(r4 + 0x4u, r0); UPD(0x0C0B00ACu, 1);  /* 0C0B00AA mov.l Rm,@(disp,Rn) */
	r0 = R32(r5 + 0x0u); UPD(0x0C0B00AEu, 1);  /* 0C0B00AC mov.l @(disp,Rm),Rn */
	W32(r4 + 0x0u, r0); UPD(0x0C0B00B0u, 1);  /* 0C0B00AE mov.l Rm,@(disp,Rn) */
	IF(0x0C0B00B0u); { u32 t_ = PR; r0 |= r0; /* slot or Rm,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0B00B0 rts */
}

void f_0C0B00B0(sh3_t *c)
{
	LOCALS;
L_0C0B00B0: BLKS(0x0C0B00B0u);
	IF(0x0C0B00B0u); { u32 t_ = PR; r0 |= r0; /* slot or Rm,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0B00B0 rts */
}


#include "recomp.h"
#include "recomp_funcs.h"

/* arr_top_row */
void f_0C7C0BEC(sh3_t *c)
{
	LOCALS;
L_0C7C0BEC: BLKS(0x0C7C0BECu);
	r1 = 0xC21CA15u; UPD(0x0C7C0BEEu, 1);  /* 0C7C0BEC mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C0BF0u, 1);  /* 0C7C0BEE mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C0BF0 tst Rm,Rn */
	{ u32 c_ = T; r3 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C7C0BFAu, 4); goto L_0C7C0BFA; } goto L_0C7C0BF6; }  /* 0C7C0BF2 bt/s */
L_0C7C0BF6: BLKS(0x0C7C0BF6u);
	{ IF(0x0C7C0BF8u); ; /* slot nop */ UPD(0x0C7C0EFAu, 4); goto L_0C7C0EFA; }  /* 0C7C0BF6 bra */
L_0C7C0BFA: BLKS(0x0C7C0BFAu);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C7C0BFCu, 1);  /* 0C7C0BFA mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C7C0BFEu, 1);  /* 0C7C0BFC mov.l Rm,@-Rn */
	r1 = 0x20u;  /* 0C7C0BFE mov #imm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C7C0C02u, 2);  /* 0C7C0C00 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C7C0C04u, 1);  /* 0C7C0C02 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C7C0C06u, 1);  /* 0C7C0C04 mov.l Rm,@-Rn */
	r2 = 0xC21F488u; UPD(0x0C7C0C08u, 1);  /* 0C7C0C06 mov.l @(disp,pc),Rn */
	IF(0x0C7C0C08u); r15 -= 4; W32(r15, PR); UPD(0x0C7C0C0Au, 1);  /* 0C7C0C08 sts.l pr,@-Rn */
	IF(0x0C7C0C0Au); ;  /* 0C7C0C0A nop */
	UPD(0x0C7C0C0Cu, 1);
L_0C7C0C0C: BLKS(0x0C7C0C0Cu);
	W32(r2, r3); UPD(0x0C7C0C0Eu, 1);  /* 0C7C0C0C mov.l Rm,@Rn */
	IF(0x0C7C0C0Eu); r1 -= 1; T = r1 == 0;  /* 0C7C0C0E dt Rn */
	{ u32 c_ = !T; r2 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C7C0C0Cu, 4); goto L_0C7C0C0C; } goto L_0C7C0C14; }  /* 0C7C0C10 bf/s */
L_0C7C0C14: BLKS(0x0C7C0C14u);
	r1 = 0xC161ADCu; UPD(0x0C7C0C16u, 2);  /* 0C7C0C14 mov.l @(disp,pc),Rn */
	r7 = 0xC275544u; UPD(0x0C7C0C18u, 1);  /* 0C7C0C16 mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C0C1Au, 1);  /* 0C7C0C18 mov.b @Rm,Rn */
	r3 = 0xC275545u; UPD(0x0C7C0C1Cu, 1);  /* 0C7C0C1A mov.l @(disp,pc),Rn */
	W8(r7, r1); UPD(0x0C7C0C1Eu, 1);  /* 0C7C0C1C mov.b Rm,@Rn */
	r1 = 0xC161ADDu; UPD(0x0C7C0C20u, 1);  /* 0C7C0C1E mov.l @(disp,pc),Rn */
	r2 = 0xC275546u; UPD(0x0C7C0C22u, 1);  /* 0C7C0C20 mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C0C24u, 1);  /* 0C7C0C22 mov.b @Rm,Rn */
	r5 = 0xC2859ACu; UPD(0x0C7C0C26u, 1);  /* 0C7C0C24 mov.l @(disp,pc),Rn */
	W8(r3, r1); UPD(0x0C7C0C28u, 1);  /* 0C7C0C26 mov.b Rm,@Rn */
	r1 = 0xC161ADEu; UPD(0x0C7C0C2Au, 1);  /* 0C7C0C28 mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C0C2Cu, 1);  /* 0C7C0C2A mov.b @Rm,Rn */
	W8(r2, r1); UPD(0x0C7C0C2Eu, 1);  /* 0C7C0C2C mov.b Rm,@Rn */
	r1 = 0xC161ADFu; UPD(0x0C7C0C30u, 1);  /* 0C7C0C2E mov.l @(disp,pc),Rn */
	r6 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C0C32u, 1);  /* 0C7C0C30 mov.b @Rm,Rn */
	r1 = 0xC275547u; UPD(0x0C7C0C34u, 1);  /* 0C7C0C32 mov.l @(disp,pc),Rn */
	W8(r1, r6); UPD(0x0C7C0C36u, 1);  /* 0C7C0C34 mov.b Rm,@Rn */
	r1 = 0xC7C4234u; UPD(0x0C7C0C38u, 1);  /* 0C7C0C36 mov.l @(disp,pc),Rn */
	r6 = 0x16Cu; UPD(0x0C7C0C3Au, 1);  /* 0C7C0C38 mov.w @(disp,pc),Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C0C3Cu, 1);  /* 0C7C0C3A mov.b @Rm,Rn */
	r1 = r1 & 0xFF;  /* 0C7C0C3C extu.b Rm,Rn */
	MACL = (u32)(u16)r1 * (u32)(u16)r6;  /* 0C7C0C3E mulu.w Rm,Rn */
	r6 = 0xC2859A8u; UPD(0x0C7C0C42u, 4);  /* 0C7C0C40 mov.l @(disp,pc),Rn */
	IF(0x0C7C0C42u); r1 = MACL;  /* 0C7C0C42 sts macl,Rn */
	r5 += r1;  /* 0C7C0C44 add Rm,Rn */
	r4 = R32(r5); UPD(0x0C7C0C48u, 3);  /* 0C7C0C46 mov.l @Rm,Rn */
	r5 = 0x7u;  /* 0C7C0C48 mov #imm,Rn */
	T = r4 > r5;  /* 0C7C0C4A cmp/hi Rm,Rn */
	{ u32 c_ = T; r6 += r1; /* slot add Rm,Rn */ if (c_) { UPD(0x0C7C0C68u, 5); goto L_0C7C0C68; } goto L_0C7C0C50; }  /* 0C7C0C4C bt/s */
L_0C7C0C50: BLKS(0x0C7C0C50u);
	r5 = 0xC2859B3u; UPD(0x0C7C0C52u, 2);  /* 0C7C0C50 mov.l @(disp,pc),Rn */
	r5 += r1;  /* 0C7C0C52 add Rm,Rn */
	r5 = (u32)(s32)(s8)R8(r5); UPD(0x0C7C0C56u, 2);  /* 0C7C0C54 mov.b @Rm,Rn */
	W8(r7, r5); UPD(0x0C7C0C58u, 1);  /* 0C7C0C56 mov.b Rm,@Rn */
	r7 = 0xC2859B7u; UPD(0x0C7C0C5Au, 1);  /* 0C7C0C58 mov.l @(disp,pc),Rn */
	r7 += r1;  /* 0C7C0C5A add Rm,Rn */
	r7 = (u32)(s32)(s8)R8(r7); UPD(0x0C7C0C5Eu, 2);  /* 0C7C0C5C mov.b @Rm,Rn */
	W8(r3, r7); UPD(0x0C7C0C60u, 1);  /* 0C7C0C5E mov.b Rm,@Rn */
	r3 = 0xC2859BBu; UPD(0x0C7C0C62u, 1);  /* 0C7C0C60 mov.l @(disp,pc),Rn */
	r3 += r1;  /* 0C7C0C62 add Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r3); UPD(0x0C7C0C66u, 2);  /* 0C7C0C64 mov.b @Rm,Rn */
	W8(r2, r3); UPD(0x0C7C0C68u, 1);  /* 0C7C0C66 mov.b Rm,@Rn */
L_0C7C0C68: BLKS(0x0C7C0C68u);
	r2 = R32(r6); UPD(0x0C7C0C6Au, 1);  /* 0C7C0C68 mov.l @Rm,Rn */
	r9 = 0xC22C870u; UPD(0x0C7C0C6Cu, 1);  /* 0C7C0C6A mov.l @(disp,pc),Rn */
	r4 = 0xC161AD4u; UPD(0x0C7C0C6Eu, 1);  /* 0C7C0C6C mov.l @(disp,pc),Rn */
	W32(r9, r2); UPD(0x0C7C0C70u, 1);  /* 0C7C0C6E mov.l Rm,@Rn */
	r2 = 0xC2859C0u; UPD(0x0C7C0C72u, 1);  /* 0C7C0C70 mov.l @(disp,pc),Rn */
	r8 = 0xC2864B4u; UPD(0x0C7C0C74u, 1);  /* 0C7C0C72 mov.l @(disp,pc),Rn */
	r1 += r2;  /* 0C7C0C74 add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C0C78u, 2);  /* 0C7C0C76 mov.b @Rm,Rn */
	r1 = r1 & 0xFF;  /* 0C7C0C78 extu.b Rm,Rn */
	IF(0x0C7C0C7Au); r1 <<= 2;  /* 0C7C0C7A shll2 Rn */
	r1 += r4;  /* 0C7C0C7C add Rm,Rn */
	r1 = R32(r1); UPD(0x0C7C0C80u, 4);  /* 0C7C0C7E mov.l @Rm,Rn */
	W32(r8, r1); UPD(0x0C7C0C82u, 1);  /* 0C7C0C80 mov.l Rm,@Rn */
	r1 = 0xC283794u; UPD(0x0C7C0C84u, 1);  /* 0C7C0C82 mov.l @(disp,pc),Rn */
	r1 = R32(r1); UPD(0x0C7C0C86u, 1);  /* 0C7C0C84 mov.l @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C0C86 tst Rm,Rn */
	if (T) { UPD(0x0C7C0C8Eu, 4); goto L_0C7C0C8E; }  /* 0C7C0C88 bt */
L_0C7C0C8A: BLKS(0x0C7C0C8Au);
	{ r6 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C7C0D90u, 3); goto L_0C7C0D90; }  /* 0C7C0C8A bra */
L_0C7C0C8E: BLKS(0x0C7C0C8Eu);
	r10 = 0xC050CD0u; UPD(0x0C7C0C90u, 1);  /* 0C7C0C8E mov.l @(disp,pc),Rn */
	r6 = 0x0u;  /* 0C7C0C90 mov #imm,Rn */
	r7 = 0xC040C000u; UPD(0x0C7C0C94u, 2);  /* 0C7C0C92 mov.l @(disp,pc),Rn */
	r4 = 0xC275544u; UPD(0x0C7C0C96u, 1);  /* 0C7C0C94 mov.l @(disp,pc),Rn */
	IF(0x0C7C0C96u); { u32 t_ = r10; PR = 0x0C7C0C9Au; r5 = 0x27u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C7C0C9Au); }  /* 0C7C0C96 jsr @Rn */
L_0C7C0C9A: BLKS(0x0C7C0C9Au);
	r7 = 0x4040C000u; UPD(0x0C7C0C9Cu, 1);  /* 0C7C0C9A mov.l @(disp,pc),Rn */
	r6 = 0x10u;  /* 0C7C0C9C mov #imm,Rn */
	r4 = 0xC161AD0u; UPD(0x0C7C0CA0u, 2);  /* 0C7C0C9E mov.l @(disp,pc),Rn */
	IF(0x0C7C0CA0u); { u32 t_ = r10; PR = 0x0C7C0CA4u; r5 = 0x27u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C7C0CA4u); }  /* 0C7C0CA0 jsr @Rn */
L_0C7C0CA4: BLKS(0x0C7C0CA4u);
	r11 = 0xC16224Cu; UPD(0x0C7C0CA6u, 1);  /* 0C7C0CA4 mov.l @(disp,pc),Rn */
	r7 = 0x0u;  /* 0C7C0CA6 mov #imm,Rn */
	r2 = R32(r9); UPD(0x0C7C0CAAu, 2);  /* 0C7C0CA8 mov.l @Rm,Rn */
	r3 = 0xAu;  /* 0C7C0CAA mov #imm,Rn */
	r8 = R32(r8); UPD(0x0C7C0CAEu, 2);  /* 0C7C0CAC mov.l @Rm,Rn */
	r6 = 0xC21F4B8u; UPD(0x0C7C0CB0u, 1);  /* 0C7C0CAE mov.l @(disp,pc),Rn */
	r5 = 0xCCCCCCCDu; UPD(0x0C7C0CB2u, 1);  /* 0C7C0CB0 mov.l @(disp,pc),Rn */
	r10 = 0xC162258u; UPD(0x0C7C0CB4u, 1);  /* 0C7C0CB2 mov.l @(disp,pc),Rn */
	{ r9 = 0x9u; /* slot mov #imm,Rn */ UPD(0x0C7C0CDCu, 3); goto L_0C7C0CDC; }  /* 0C7C0CB4 bra */
L_0C7C0CB8: BLKS(0x0C7C0CB8u);
	{ u32 c_ = !T; { u64 r_ = (u64)r0 * (u64)r5; MACH = (u32)(r_ >> 32); MACL = (u32)r_; } /* slot dmulu.l Rm,Rn */ if (c_) { UPD(0x0C7C0CECu, 4); goto L_0C7C0CEC; } goto L_0C7C0CBC; }  /* 0C7C0CB8 bf/s */
L_0C7C0CBC: BLKS(0x0C7C0CBCu);
	r4 = r10;  /* 0C7C0CBC mov Rm,Rn */
	r7 += 0x1u;  /* 0C7C0CBE add #imm,Rn */
	r6 += 0xFFFFFFFCu;  /* 0C7C0CC0 add #imm,Rn */
	IF(0x0C7C0CC2u); r12 = MACH;  /* 0C7C0CC2 sts mach,Rn */
	IF(0x0C7C0CC4u); r12 >>= 2;  /* 0C7C0CC4 shlr2 Rn */
	IF(0x0C7C0CC6u); T = r12 & 1; r12 >>= 1;  /* 0C7C0CC6 shlr Rn */
	r1 = r12;  /* 0C7C0CC8 mov Rm,Rn */
	IF(0x0C7C0CCAu); r1 <<= 2;  /* 0C7C0CCA shll2 Rn */
	r1 += r12;  /* 0C7C0CCC add Rm,Rn */
	r1 += r1;  /* 0C7C0CCE add Rm,Rn */
	r0 -= r1;  /* 0C7C0CD0 sub Rm,Rn */
	IF(0x0C7C0CD2u); r1 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C7C0CD4u, 14);  /* 0C7C0CD2 mov.b @(r0,Rm),Rn */
	IF(0x0C7C0CD4u); r3 -= 1; T = r3 == 0;  /* 0C7C0CD4 dt Rn */
	r1 |= r8;  /* 0C7C0CD6 or Rm,Rn */
	W32(r6 + 0x4u, r1); UPD(0x0C7C0CDAu, 3);  /* 0C7C0CD8 mov.l Rm,@(disp,Rn) */
	if (T) { UPD(0x0C7C0D10u, 3); goto L_0C7C0D10; }  /* 0C7C0CDA bt */
L_0C7C0CDC: BLKS(0x0C7C0CDCu);
	{ u64 r_ = (u64)r2 * (u64)r5; MACH = (u32)(r_ >> 32); MACL = (u32)r_; }  /* 0C7C0CDC dmulu.l Rm,Rn */
	UPD(0x0C7C0CDEu, 2);
L_0C7C0CDE: BLKS(0x0C7C0CDEu);
	r0 = r2;  /* 0C7C0CDE mov Rm,Rn */
	IF(0x0C7C0CE0u); r2 = MACH;  /* 0C7C0CE0 sts mach,Rn */
	IF(0x0C7C0CE2u); r2 >>= 2;  /* 0C7C0CE2 shlr2 Rn */
	IF(0x0C7C0CE4u); T = r2 & 1; r2 >>= 1;  /* 0C7C0CE4 shlr Rn */
	T = (r7 & r7) == 0;  /* 0C7C0CE6 tst Rm,Rn */
	{ u32 c_ = !T; T = r9 >= r0; /* slot cmp/hs Rm,Rn */ if (c_) { UPD(0x0C7C0CB8u, 8); goto L_0C7C0CB8; } UPD(0x0C7C0CECu, 1); goto L_0C7C0CEC; }  /* 0C7C0CE8 bf/s */
L_0C7C0CEC: BLKS(0x0C7C0CECu);
	{ u64 r_ = (u64)r0 * (u64)r5; MACH = (u32)(r_ >> 32); MACL = (u32)r_; }  /* 0C7C0CEC dmulu.l Rm,Rn */
	r4 = r11;  /* 0C7C0CEE mov Rm,Rn */
	r7 += 0x1u;  /* 0C7C0CF0 add #imm,Rn */
	r6 += 0xFFFFFFFCu;  /* 0C7C0CF2 add #imm,Rn */
	IF(0x0C7C0CF4u); r12 = MACH;  /* 0C7C0CF4 sts mach,Rn */
	IF(0x0C7C0CF6u); r12 >>= 2;  /* 0C7C0CF6 shlr2 Rn */
	IF(0x0C7C0CF8u); T = r12 & 1; r12 >>= 1;  /* 0C7C0CF8 shlr Rn */
	r1 = r12;  /* 0C7C0CFA mov Rm,Rn */
	IF(0x0C7C0CFCu); r1 <<= 2;  /* 0C7C0CFC shll2 Rn */
	r1 += r12;  /* 0C7C0CFE add Rm,Rn */
	r1 += r1;  /* 0C7C0D00 add Rm,Rn */
	r0 -= r1;  /* 0C7C0D02 sub Rm,Rn */
	IF(0x0C7C0D04u); r1 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C7C0D06u, 14);  /* 0C7C0D04 mov.b @(r0,Rm),Rn */
	IF(0x0C7C0D06u); r3 -= 1; T = r3 == 0;  /* 0C7C0D06 dt Rn */
	r1 |= r8;  /* 0C7C0D08 or Rm,Rn */
	W32(r6 + 0x4u, r1); UPD(0x0C7C0D0Cu, 3);  /* 0C7C0D0A mov.l Rm,@(disp,Rn) */
	{ u32 c_ = !T; { u64 r_ = (u64)r2 * (u64)r5; MACH = (u32)(r_ >> 32); MACL = (u32)r_; } /* slot dmulu.l Rm,Rn */ if (c_) { UPD(0x0C7C0CDEu, 4); goto L_0C7C0CDE; } UPD(0x0C7C0D10u, 2); goto L_0C7C0D10; }  /* 0C7C0D0C bf/s */
L_0C7C0D10: BLKS(0x0C7C0D10u);
	r1 = 0xC283C84u; UPD(0x0C7C0D12u, 1);  /* 0C7C0D10 mov.l @(disp,pc),Rn */
	r6 = 0x0u;  /* 0C7C0D12 mov #imm,Rn */
	r7 = 0xC21F4F8u; UPD(0x0C7C0D16u, 2);  /* 0C7C0D14 mov.l @(disp,pc),Rn */
	r9 = 0x9u;  /* 0C7C0D16 mov #imm,Rn */
	r2 = R32(r1); UPD(0x0C7C0D1Au, 2);  /* 0C7C0D18 mov.l @Rm,Rn */
	r5 = 0xCCCCCCCDu; UPD(0x0C7C0D1Cu, 1);  /* 0C7C0D1A mov.l @(disp,pc),Rn */
	r11 = 0xC16224Cu; UPD(0x0C7C0D1Eu, 1);  /* 0C7C0D1C mov.l @(disp,pc),Rn */
	r10 = 0xC162258u; UPD(0x0C7C0D20u, 1);  /* 0C7C0D1E mov.l @(disp,pc),Rn */
	r8 = 0x80808000u; UPD(0x0C7C0D22u, 1);  /* 0C7C0D20 mov.l @(disp,pc),Rn */
	{ r3 = 0xAu; /* slot mov #imm,Rn */ UPD(0x0C7C0D4Cu, 3); goto L_0C7C0D4C; }  /* 0C7C0D22 bra */
L_0C7C0D26: BLKS(0x0C7C0D26u);
	{ u32 c_ = T; { u64 r_ = (u64)r0 * (u64)r5; MACH = (u32)(r_ >> 32); MACL = (u32)r_; } /* slot dmulu.l Rm,Rn */ if (c_) { UPD(0x0C7C0D5Cu, 4); goto L_0C7C0D5C; } goto L_0C7C0D2A; }  /* 0C7C0D26 bt/s */
L_0C7C0D2A: BLKS(0x0C7C0D2Au);
	r4 = r10;  /* 0C7C0D2A mov Rm,Rn */
	r6 += 0x1u;  /* 0C7C0D2C add #imm,Rn */
	r7 += 0xFFFFFFFCu;  /* 0C7C0D2E add #imm,Rn */
	IF(0x0C7C0D30u); r12 = MACH;  /* 0C7C0D30 sts mach,Rn */
	IF(0x0C7C0D32u); r12 >>= 2;  /* 0C7C0D32 shlr2 Rn */
	IF(0x0C7C0D34u); T = r12 & 1; r12 >>= 1;  /* 0C7C0D34 shlr Rn */
	r1 = r12;  /* 0C7C0D36 mov Rm,Rn */
	IF(0x0C7C0D38u); r1 <<= 2;  /* 0C7C0D38 shll2 Rn */
	r1 += r12;  /* 0C7C0D3A add Rm,Rn */
	r1 += r1;  /* 0C7C0D3C add Rm,Rn */
	r0 -= r1;  /* 0C7C0D3E sub Rm,Rn */
	IF(0x0C7C0D40u); r1 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C7C0D42u, 14);  /* 0C7C0D40 mov.b @(r0,Rm),Rn */
	IF(0x0C7C0D42u); r3 -= 1; T = r3 == 0;  /* 0C7C0D42 dt Rn */
	r1 |= r8;  /* 0C7C0D44 or Rm,Rn */
	W32(r7 + 0x4u, r1); UPD(0x0C7C0D48u, 3);  /* 0C7C0D46 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C7C0D82u, 3); goto L_0C7C0D82; } UPD(0x0C7C0D4Cu, 1); goto L_0C7C0D4C; }  /* 0C7C0D48 bt/s */
L_0C7C0D4C: BLKS(0x0C7C0D4Cu);
	{ u64 r_ = (u64)r2 * (u64)r5; MACH = (u32)(r_ >> 32); MACL = (u32)r_; }  /* 0C7C0D4C dmulu.l Rm,Rn */
	UPD(0x0C7C0D4Eu, 2);
L_0C7C0D4E: BLKS(0x0C7C0D4Eu);
	r0 = r2;  /* 0C7C0D4E mov Rm,Rn */
	IF(0x0C7C0D50u); r2 = MACH;  /* 0C7C0D50 sts mach,Rn */
	IF(0x0C7C0D52u); r2 >>= 2;  /* 0C7C0D52 shlr2 Rn */
	IF(0x0C7C0D54u); T = r2 & 1; r2 >>= 1;  /* 0C7C0D54 shlr Rn */
	T = r9 >= r0;  /* 0C7C0D56 cmp/hs Rm,Rn */
	{ u32 c_ = T; T = (r6 & r6) == 0; /* slot tst Rm,Rn */ if (c_) { UPD(0x0C7C0D26u, 8); goto L_0C7C0D26; } UPD(0x0C7C0D5Cu, 1); goto L_0C7C0D5C; }  /* 0C7C0D58 bt/s */
L_0C7C0D5C: BLKS(0x0C7C0D5Cu);
	{ u64 r_ = (u64)r0 * (u64)r5; MACH = (u32)(r_ >> 32); MACL = (u32)r_; }  /* 0C7C0D5C dmulu.l Rm,Rn */
	r4 = r11;  /* 0C7C0D5E mov Rm,Rn */
	r6 += 0x1u;  /* 0C7C0D60 add #imm,Rn */
	r7 += 0xFFFFFFFCu;  /* 0C7C0D62 add #imm,Rn */
	IF(0x0C7C0D64u); r12 = MACH;  /* 0C7C0D64 sts mach,Rn */
	IF(0x0C7C0D66u); r12 >>= 2;  /* 0C7C0D66 shlr2 Rn */
	IF(0x0C7C0D68u); T = r12 & 1; r12 >>= 1;  /* 0C7C0D68 shlr Rn */
	r1 = r12;  /* 0C7C0D6A mov Rm,Rn */
	IF(0x0C7C0D6Cu); r1 <<= 2;  /* 0C7C0D6C shll2 Rn */
	r1 += r12;  /* 0C7C0D6E add Rm,Rn */
	r1 += r1;  /* 0C7C0D70 add Rm,Rn */
	r0 -= r1;  /* 0C7C0D72 sub Rm,Rn */
	IF(0x0C7C0D74u); r1 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C7C0D76u, 14);  /* 0C7C0D74 mov.b @(r0,Rm),Rn */
	IF(0x0C7C0D76u); r3 -= 1; T = r3 == 0;  /* 0C7C0D76 dt Rn */
	r1 |= r8;  /* 0C7C0D78 or Rm,Rn */
	W32(r7 + 0x4u, r1); UPD(0x0C7C0D7Cu, 3);  /* 0C7C0D7A mov.l Rm,@(disp,Rn) */
	{ u32 c_ = !T; { u64 r_ = (u64)r2 * (u64)r5; MACH = (u32)(r_ >> 32); MACL = (u32)r_; } /* slot dmulu.l Rm,Rn */ if (c_) { UPD(0x0C7C0D4Eu, 4); goto L_0C7C0D4E; } goto L_0C7C0D80; }  /* 0C7C0D7C bf/s */
L_0C7C0D80: BLKS(0x0C7C0D80u);
	r0 = 0x0u;  /* 0C7C0D80 mov #imm,Rn */
	UPD(0x0C7C0D82u, 3);
L_0C7C0D82: BLKS(0x0C7C0D82u);
	IF(0x0C7C0D82u); PR = R32(r15); r15 += 4; UPD(0x0C7C0D84u, 1);  /* 0C7C0D82 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C7C0D86u, 1);  /* 0C7C0D84 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C7C0D88u, 1);  /* 0C7C0D86 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C7C0D8Au, 1);  /* 0C7C0D88 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C0D8Cu, 1);  /* 0C7C0D8A mov.l @Rm+,Rn */
	IF(0x0C7C0D8Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C7C0D8C rts */
L_0C7C0D90: BLKS(0x0C7C0D90u);
	r8 = 0xC050CD0u; UPD(0x0C7C0D92u, 1);  /* 0C7C0D90 mov.l @(disp,pc),Rn */
	r7 = 0xC0404000u; UPD(0x0C7C0D94u, 1);  /* 0C7C0D92 mov.l @(disp,pc),Rn */
	r5 = 0x27u;  /* 0C7C0D94 mov #imm,Rn */
	r4 = 0xC161ACCu; UPD(0x0C7C0D98u, 2);  /* 0C7C0D96 mov.l @(disp,pc),Rn */
	IF(0x0C7C0D98u); { u32 t_ = r8; PR = 0x0C7C0D9Cu; r9 = 0x9u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C7C0D9Cu); }  /* 0C7C0D98 jsr @Rn */
L_0C7C0D9C: BLKS(0x0C7C0D9Cu);
	r7 = 0xC040C000u; UPD(0x0C7C0D9Eu, 1);  /* 0C7C0D9C mov.l @(disp,pc),Rn */
	r6 = 0xFu;  /* 0C7C0D9E mov #imm,Rn */
	r4 = 0xC275544u; UPD(0x0C7C0DA2u, 2);  /* 0C7C0DA0 mov.l @(disp,pc),Rn */
	IF(0x0C7C0DA2u); { u32 t_ = r8; PR = 0x0C7C0DA6u; r5 = 0x27u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C7C0DA6u); }  /* 0C7C0DA2 jsr @Rn */
L_0C7C0DA6: BLKS(0x0C7C0DA6u);
	r1 = 0xC283A04u; UPD(0x0C7C0DA8u, 1);  /* 0C7C0DA6 mov.l @(disp,pc),Rn */
	r7 = 0x0u;  /* 0C7C0DA8 mov #imm,Rn */
	r6 = 0xC21F4B8u; UPD(0x0C7C0DACu, 2);  /* 0C7C0DAA mov.l @(disp,pc),Rn */
	r3 = 0xAu;  /* 0C7C0DAC mov #imm,Rn */
	r2 = R32(r1); UPD(0x0C7C0DB0u, 2);  /* 0C7C0DAE mov.l @Rm,Rn */
	r5 = 0xCCCCCCCDu; UPD(0x0C7C0DB2u, 1);  /* 0C7C0DB0 mov.l @(disp,pc),Rn */
	r11 = 0xC16224Cu; UPD(0x0C7C0DB4u, 1);  /* 0C7C0DB2 mov.l @(disp,pc),Rn */
	r10 = 0xC162258u; UPD(0x0C7C0DB6u, 1);  /* 0C7C0DB4 mov.l @(disp,pc),Rn */
	r8 = 0x80808000u; UPD(0x0C7C0DB8u, 1);  /* 0C7C0DB6 mov.l @(disp,pc),Rn */
	{ { u64 r_ = (u64)r2 * (u64)r5; MACH = (u32)(r_ >> 32); MACL = (u32)r_; } /* slot dmulu.l Rm,Rn */ UPD(0x0C7C0E72u, 4); goto L_0C7C0E72; }  /* 0C7C0DB8 bra */
L_0C7C0E4C: BLKS(0x0C7C0E4Cu);
	{ u32 c_ = !T; { u64 r_ = (u64)r0 * (u64)r5; MACH = (u32)(r_ >> 32); MACL = (u32)r_; } /* slot dmulu.l Rm,Rn */ if (c_) { UPD(0x0C7C0E80u, 4); goto L_0C7C0E80; } goto L_0C7C0E50; }  /* 0C7C0E4C bf/s */
L_0C7C0E50: BLKS(0x0C7C0E50u);
	r4 = r10;  /* 0C7C0E50 mov Rm,Rn */
	r7 += 0x1u;  /* 0C7C0E52 add #imm,Rn */
	r6 += 0xFFFFFFFCu;  /* 0C7C0E54 add #imm,Rn */
	IF(0x0C7C0E56u); r12 = MACH;  /* 0C7C0E56 sts mach,Rn */
	IF(0x0C7C0E58u); r12 >>= 2;  /* 0C7C0E58 shlr2 Rn */
	IF(0x0C7C0E5Au); T = r12 & 1; r12 >>= 1;  /* 0C7C0E5A shlr Rn */
	r1 = r12;  /* 0C7C0E5C mov Rm,Rn */
	IF(0x0C7C0E5Eu); r1 <<= 2;  /* 0C7C0E5E shll2 Rn */
	r1 += r12;  /* 0C7C0E60 add Rm,Rn */
	r1 += r1;  /* 0C7C0E62 add Rm,Rn */
	r0 -= r1;  /* 0C7C0E64 sub Rm,Rn */
	IF(0x0C7C0E66u); r1 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C7C0E68u, 14);  /* 0C7C0E66 mov.b @(r0,Rm),Rn */
	IF(0x0C7C0E68u); r3 -= 1; T = r3 == 0;  /* 0C7C0E68 dt Rn */
	r1 |= r8;  /* 0C7C0E6A or Rm,Rn */
	W32(r6 + 0x4u, r1); UPD(0x0C7C0E6Eu, 3);  /* 0C7C0E6C mov.l Rm,@(disp,Rn) */
	if (T) { UPD(0x0C7C0EA2u, 3); goto L_0C7C0EA2; }  /* 0C7C0E6E bt */
L_0C7C0E70: BLKS(0x0C7C0E70u);
	{ u64 r_ = (u64)r2 * (u64)r5; MACH = (u32)(r_ >> 32); MACL = (u32)r_; }  /* 0C7C0E70 dmulu.l Rm,Rn */
	UPD(0x0C7C0E72u, 2);
L_0C7C0E72: BLKS(0x0C7C0E72u);
	r0 = r2;  /* 0C7C0E72 mov Rm,Rn */
	IF(0x0C7C0E74u); r2 = MACH;  /* 0C7C0E74 sts mach,Rn */
	IF(0x0C7C0E76u); r2 >>= 2;  /* 0C7C0E76 shlr2 Rn */
	IF(0x0C7C0E78u); T = r2 & 1; r2 >>= 1;  /* 0C7C0E78 shlr Rn */
	T = (r7 & r7) == 0;  /* 0C7C0E7A tst Rm,Rn */
	{ u32 c_ = !T; T = r9 >= r0; /* slot cmp/hs Rm,Rn */ if (c_) { UPD(0x0C7C0E4Cu, 8); goto L_0C7C0E4C; } UPD(0x0C7C0E80u, 1); goto L_0C7C0E80; }  /* 0C7C0E7C bf/s */
L_0C7C0E80: BLKS(0x0C7C0E80u);
	{ u64 r_ = (u64)r0 * (u64)r5; MACH = (u32)(r_ >> 32); MACL = (u32)r_; }  /* 0C7C0E80 dmulu.l Rm,Rn */
	r4 = r11;  /* 0C7C0E82 mov Rm,Rn */
	r7 += 0x1u;  /* 0C7C0E84 add #imm,Rn */
	r6 += 0xFFFFFFFCu;  /* 0C7C0E86 add #imm,Rn */
	IF(0x0C7C0E88u); r12 = MACH;  /* 0C7C0E88 sts mach,Rn */
	IF(0x0C7C0E8Au); r12 >>= 2;  /* 0C7C0E8A shlr2 Rn */
	IF(0x0C7C0E8Cu); T = r12 & 1; r12 >>= 1;  /* 0C7C0E8C shlr Rn */
	r1 = r12;  /* 0C7C0E8E mov Rm,Rn */
	IF(0x0C7C0E90u); r1 <<= 2;  /* 0C7C0E90 shll2 Rn */
	r1 += r12;  /* 0C7C0E92 add Rm,Rn */
	r1 += r1;  /* 0C7C0E94 add Rm,Rn */
	r0 -= r1;  /* 0C7C0E96 sub Rm,Rn */
	IF(0x0C7C0E98u); r1 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C7C0E9Au, 14);  /* 0C7C0E98 mov.b @(r0,Rm),Rn */
	IF(0x0C7C0E9Au); r3 -= 1; T = r3 == 0;  /* 0C7C0E9A dt Rn */
	r1 |= r8;  /* 0C7C0E9C or Rm,Rn */
	W32(r6 + 0x4u, r1); UPD(0x0C7C0EA0u, 3);  /* 0C7C0E9E mov.l Rm,@(disp,Rn) */
	if (!T) { UPD(0x0C7C0E70u, 3); goto L_0C7C0E70; }  /* 0C7C0EA0 bf */
L_0C7C0EA2: BLKS(0x0C7C0EA2u);
	r1 = 0xC22C870u; UPD(0x0C7C0EA4u, 1);  /* 0C7C0EA2 mov.l @(disp,pc),Rn */
	r7 = 0x0u;  /* 0C7C0EA4 mov #imm,Rn */
	r6 = 0xC21F4F8u; UPD(0x0C7C0EA8u, 2);  /* 0C7C0EA6 mov.l @(disp,pc),Rn */
	r9 = 0x9u;  /* 0C7C0EA8 mov #imm,Rn */
	r2 = R32(r1); UPD(0x0C7C0EACu, 2);  /* 0C7C0EAA mov.l @Rm,Rn */
	r3 = 0xAu;  /* 0C7C0EAC mov #imm,Rn */
	r1 = 0xC2864B4u; UPD(0x0C7C0EB0u, 2);  /* 0C7C0EAE mov.l @(disp,pc),Rn */
	r5 = 0xCCCCCCCDu; UPD(0x0C7C0EB2u, 1);  /* 0C7C0EB0 mov.l @(disp,pc),Rn */
	r8 = R32(r1); UPD(0x0C7C0EB4u, 1);  /* 0C7C0EB2 mov.l @Rm,Rn */
	r11 = 0xC16224Cu; UPD(0x0C7C0EB6u, 1);  /* 0C7C0EB4 mov.l @(disp,pc),Rn */
	r10 = 0xC162258u; UPD(0x0C7C0EB8u, 1);  /* 0C7C0EB6 mov.l @(disp,pc),Rn */
	{ { u64 r_ = (u64)r2 * (u64)r5; MACH = (u32)(r_ >> 32); MACL = (u32)r_; } /* slot dmulu.l Rm,Rn */ UPD(0x0C7C0EE8u, 4); goto L_0C7C0EE8; }  /* 0C7C0EB8 bra */
L_0C7C0EBC: BLKS(0x0C7C0EBCu);
	{ u32 c_ = !T; r4 = r11; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C7C0EC2u, 3); goto L_0C7C0EC2; } goto L_0C7C0EC0; }  /* 0C7C0EBC bf/s */
L_0C7C0EC0: BLKS(0x0C7C0EC0u);
	r4 = r10;  /* 0C7C0EC0 mov Rm,Rn */
	UPD(0x0C7C0EC2u, 2);
L_0C7C0EC2: BLKS(0x0C7C0EC2u);
	{ u64 r_ = (u64)r0 * (u64)r5; MACH = (u32)(r_ >> 32); MACL = (u32)r_; }  /* 0C7C0EC2 dmulu.l Rm,Rn */
	r7 += 0x1u;  /* 0C7C0EC4 add #imm,Rn */
	r6 += 0xFFFFFFFCu;  /* 0C7C0EC6 add #imm,Rn */
	IF(0x0C7C0EC8u); r12 = MACH;  /* 0C7C0EC8 sts mach,Rn */
	IF(0x0C7C0ECAu); r12 >>= 2;  /* 0C7C0ECA shlr2 Rn */
	IF(0x0C7C0ECCu); T = r12 & 1; r12 >>= 1;  /* 0C7C0ECC shlr Rn */
	r1 = r12;  /* 0C7C0ECE mov Rm,Rn */
	IF(0x0C7C0ED0u); r1 <<= 2;  /* 0C7C0ED0 shll2 Rn */
	r1 += r12;  /* 0C7C0ED2 add Rm,Rn */
	r1 += r1;  /* 0C7C0ED4 add Rm,Rn */
	r0 -= r1;  /* 0C7C0ED6 sub Rm,Rn */
	IF(0x0C7C0ED8u); r1 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C7C0EDAu, 13);  /* 0C7C0ED8 mov.b @(r0,Rm),Rn */
	IF(0x0C7C0EDAu); r3 -= 1; T = r3 == 0;  /* 0C7C0EDA dt Rn */
	r1 |= r8;  /* 0C7C0EDC or Rm,Rn */
	W32(r6 + 0x4u, r1); UPD(0x0C7C0EE0u, 3);  /* 0C7C0EDE mov.l Rm,@(disp,Rn) */
	{ u32 c_ = !T; { u64 r_ = (u64)r2 * (u64)r5; MACH = (u32)(r_ >> 32); MACL = (u32)r_; } /* slot dmulu.l Rm,Rn */ if (c_) { UPD(0x0C7C0EE8u, 4); goto L_0C7C0EE8; } goto L_0C7C0EE4; }  /* 0C7C0EE0 bf/s */
L_0C7C0EE4: BLKS(0x0C7C0EE4u);
	{ r0 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C7C0D82u, 5); goto L_0C7C0D82; }  /* 0C7C0EE4 bra */
L_0C7C0EE8: BLKS(0x0C7C0EE8u);
	r0 = r2;  /* 0C7C0EE8 mov Rm,Rn */
	IF(0x0C7C0EEAu); r2 = MACH;  /* 0C7C0EEA sts mach,Rn */
	IF(0x0C7C0EECu); r2 >>= 2;  /* 0C7C0EEC shlr2 Rn */
	IF(0x0C7C0EEEu); T = r2 & 1; r2 >>= 1;  /* 0C7C0EEE shlr Rn */
	T = (r7 & r7) == 0;  /* 0C7C0EF0 tst Rm,Rn */
	{ u32 c_ = !T; T = r9 >= r0; /* slot cmp/hs Rm,Rn */ if (c_) { UPD(0x0C7C0EBCu, 8); goto L_0C7C0EBC; } goto L_0C7C0EF6; }  /* 0C7C0EF2 bf/s */
L_0C7C0EF6: BLKS(0x0C7C0EF6u);
	{ r4 = r11; /* slot mov Rm,Rn */ UPD(0x0C7C0EC2u, 4); goto L_0C7C0EC2; }  /* 0C7C0EF6 bra */
L_0C7C0EFA: BLKS(0x0C7C0EFAu);
	r0 = 0xC05B5F0u; UPD(0x0C7C0EFCu, 1);  /* 0C7C0EFA mov.l @(disp,pc),Rn */
	IF(0x0C7C0EFCu); { u32 tv_ = r0; u32 t_ = PHYS(tv_); IF(0x0C7C0EFEu); ; /* slot nop */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C05B5F0u: TAIL(f_0C05B5F0); default: JUMPD(tv_); } }  /* 0C7C0EFC jmp @Rn */
}

/* arr_rank_score */
void f_0C7C0F1C(sh3_t *c)
{
	LOCALS;
L_0C7C0F1C: BLKS(0x0C7C0F1Cu);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C7C0F1Eu, 1);  /* 0C7C0F1C mov.l Rm,@-Rn */
	r5 = (u32)(s32)(s8)r5;  /* 0C7C0F1E exts.b Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C7C0F22u, 2);  /* 0C7C0F20 mov.l Rm,@-Rn */
	r1 = 0x5u;  /* 0C7C0F22 mov #imm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C7C0F26u, 2);  /* 0C7C0F24 mov.l Rm,@-Rn */
	r6 = (u32)(s32)(s8)r6;  /* 0C7C0F26 exts.b Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C7C0F2Au, 2);  /* 0C7C0F28 mov.l Rm,@-Rn */
	IF(0x0C7C0F2Au); ARG0(0x451Du); { s32 s_ = (s32)r1; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = 0; else r5 >>= ((~s_ & 31) + 1); }  /* 0C7C0F2A shld Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C7C0F2Eu, 2);  /* 0C7C0F2C mov.l Rm,@-Rn */
	r9 = 0x9u;  /* 0C7C0F2E mov #imm,Rn */
	r12 = 0x3087851u; UPD(0x0C7C0F32u, 2);  /* 0C7C0F30 mov.l @(disp,pc),Rn */
	r3 = 0x9u;  /* 0C7C0F32 mov #imm,Rn */
	r11 = 0xC16224Cu; UPD(0x0C7C0F36u, 2);  /* 0C7C0F34 mov.l @(disp,pc),Rn */
	r6 += r12;  /* 0C7C0F36 add Rm,Rn */
	r10 = 0xC162258u; UPD(0x0C7C0F3Au, 2);  /* 0C7C0F38 mov.l @(disp,pc),Rn */
	r5 += r6;  /* 0C7C0F3A add Rm,Rn */
	r8 = 0x7C0u; UPD(0x0C7C0F3Eu, 2);  /* 0C7C0F3C mov.w @(disp,pc),Rn */
	r2 = r5;  /* 0C7C0F3E mov Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C7C0F42u, 2);  /* 0C7C0F40 mov.l Rm,@-Rn */
	r5 = 0xCCCCCCCDu; UPD(0x0C7C0F44u, 1);  /* 0C7C0F42 mov.l @(disp,pc),Rn */
	IF(0x0C7C0F44u); r2 <<= 2;  /* 0C7C0F44 shll2 Rn */
	{ r6 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C7C0F92u, 4); goto L_0C7C0F92; }  /* 0C7C0F46 bra */
L_0C7C0F4A: BLKS(0x0C7C0F4Au);
	{ u64 r_ = (u64)r0 * (u64)r5; MACH = (u32)(r_ >> 32); MACL = (u32)r_; }  /* 0C7C0F4A dmulu.l Rm,Rn */
	r6 += 0x1u;  /* 0C7C0F4C add #imm,Rn */
	IF(0x0C7C0F4Eu); r13 = MACH;  /* 0C7C0F4E sts mach,Rn */
	IF(0x0C7C0F50u); r13 >>= 2;  /* 0C7C0F50 shlr2 Rn */
	IF(0x0C7C0F52u); T = r13 & 1; r13 >>= 1;  /* 0C7C0F52 shlr Rn */
	r1 = r13;  /* 0C7C0F54 mov Rm,Rn */
	IF(0x0C7C0F56u); r1 <<= 2;  /* 0C7C0F56 shll2 Rn */
	r1 += r13;  /* 0C7C0F58 add Rm,Rn */
	r1 += r1;  /* 0C7C0F5A add Rm,Rn */
	r0 -= r1;  /* 0C7C0F5C sub Rm,Rn */
	IF(0x0C7C0F5Eu); r0 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C7C0F60u, 12);  /* 0C7C0F5E mov.b @(r0,Rm),Rn */
	IF(0x0C7C0F60u); r3 -= 1; T = r3 == 0;  /* 0C7C0F60 dt Rn */
	r12 = 0xC0u; UPD(0x0C7C0F64u, 2);  /* 0C7C0F62 mov.w @(disp,pc),Rn */
	r1 = r0;  /* 0C7C0F64 mov Rm,Rn */
	r0 &= 0xFu;  /* 0C7C0F66 and #imm,r0 */
	IF(0x0C7C0F68u); r1 <<= 2;  /* 0C7C0F68 shll2 Rn */
	r1 &= r8;  /* 0C7C0F6A and Rm,Rn */
	r0 += r0;  /* 0C7C0F6C add Rm,Rn */
	r1 += r12;  /* 0C7C0F6E add Rm,Rn */
	r0 |= r7;  /* 0C7C0F70 or Rm,Rn */
	r1 |= r0;  /* 0C7C0F72 or Rm,Rn */
	r0 = 0x80u; UPD(0x0C7C0F76u, 9);  /* 0C7C0F74 mov.w @(disp,pc),Rn */
	r12 = r1;  /* 0C7C0F76 mov Rm,Rn */
	r12 += 0x1u;  /* 0C7C0F78 add #imm,Rn */
	r0 += r2;  /* 0C7C0F7A add Rm,Rn */
	W32(r0, r1); UPD(0x0C7C0F7Eu, 4);  /* 0C7C0F7C mov.l Rm,@Rn */
	r0 = 0x84u; UPD(0x0C7C0F80u, 1);  /* 0C7C0F7E mov.w @(disp,pc),Rn */
	r0 += r2;  /* 0C7C0F80 add Rm,Rn */
	W32(r0, r12); UPD(0x0C7C0F84u, 2);  /* 0C7C0F82 mov.l Rm,@Rn */
	r0 = r1;  /* 0C7C0F84 mov Rm,Rn */
	r0 += 0x20u;  /* 0C7C0F86 add #imm,Rn */
	W32(r2, r0); UPD(0x0C7C0F8Au, 3);  /* 0C7C0F88 mov.l Rm,@Rn */
	r1 += 0x21u;  /* 0C7C0F8A add #imm,Rn */
	W32(r2 + 0x4u, r1); UPD(0x0C7C0F8Eu, 2);  /* 0C7C0F8C mov.l Rm,@(disp,Rn) */
	{ u32 c_ = T; r2 += 0xFFFFFFF8u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C7C0FAAu, 3); goto L_0C7C0FAA; } UPD(0x0C7C0F92u, 1); goto L_0C7C0F92; }  /* 0C7C0F8E bt/s */
L_0C7C0F92: BLKS(0x0C7C0F92u);
	{ u64 r_ = (u64)r4 * (u64)r5; MACH = (u32)(r_ >> 32); MACL = (u32)r_; }  /* 0C7C0F92 dmulu.l Rm,Rn */
	r0 = r4;  /* 0C7C0F94 mov Rm,Rn */
	IF(0x0C7C0F96u); r4 = MACH;  /* 0C7C0F96 sts mach,Rn */
	IF(0x0C7C0F98u); r4 >>= 2;  /* 0C7C0F98 shlr2 Rn */
	IF(0x0C7C0F9Au); T = r4 & 1; r4 >>= 1;  /* 0C7C0F9A shlr Rn */
	T = r9 >= r0;  /* 0C7C0F9C cmp/hs Rm,Rn */
	{ u32 c_ = !T; T = (r6 & r6) == 0; /* slot tst Rm,Rn */ if (c_) { UPD(0x0C7C0FA6u, 10); goto L_0C7C0FA6; } goto L_0C7C0FA2; }  /* 0C7C0F9E bf/s */
L_0C7C0FA2: BLKS(0x0C7C0FA2u);
	{ u32 c_ = !T; r12 = r10; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C7C0F4Au, 4); goto L_0C7C0F4A; } UPD(0x0C7C0FA6u, 1); goto L_0C7C0FA6; }  /* 0C7C0FA2 bf/s */
L_0C7C0FA6: BLKS(0x0C7C0FA6u);
	{ r12 = r11; /* slot mov Rm,Rn */ UPD(0x0C7C0F4Au, 3); goto L_0C7C0F4A; }  /* 0C7C0FA6 bra */
L_0C7C0FAA: BLKS(0x0C7C0FAAu);
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C7C0FACu, 1);  /* 0C7C0FAA mov.l @Rm+,Rn */
	r0 = 0x0u;  /* 0C7C0FAC mov #imm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C7C0FB0u, 2);  /* 0C7C0FAE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C7C0FB2u, 1);  /* 0C7C0FB0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C7C0FB4u, 1);  /* 0C7C0FB2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C0FB6u, 1);  /* 0C7C0FB4 mov.l @Rm+,Rn */
	IF(0x0C7C0FB6u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C7C0FB6 rts */
}

/* arr_rank_mark */
void f_0C7C0FD4(sh3_t *c)
{
	LOCALS;
L_0C7C0FD4: BLKS(0x0C7C0FD4u);
	IF(0x0C7C0FD4u); { u32 t_ = PR; r0 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 3); RET(t_); }  /* 0C7C0FD4 rts */
}

/* arr_bomb_stock */
void f_0C7C0FD8(sh3_t *c)
{
	LOCALS;
L_0C7C0FD8: BLKS(0x0C7C0FD8u);
	IF(0x0C7C0FD8u); r15 -= 4; W32(r15, PR); UPD(0x0C7C0FDAu, 1);  /* 0C7C0FD8 sts.l pr,@-Rn */
	r0 = 0xC7C0028u; UPD(0x0C7C0FDCu, 1);  /* 0C7C0FDA mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C7C0FDC add #imm,Rn */
	r1 = 0x4u;  /* 0C7C0FDE mov #imm,Rn */
	W32(r15, r7); UPD(0x0C7C0FE2u, 3);  /* 0C7C0FE0 mov.l Rm,@Rn */
	r7 = r6;  /* 0C7C0FE2 mov Rm,Rn */
	r6 = r5;  /* 0C7C0FE4 mov Rm,Rn */
	r5 = r4;  /* 0C7C0FE6 mov Rm,Rn */
	r4 = 0xC05E500u; UPD(0x0C7C0FEAu, 4);  /* 0C7C0FE8 mov.l @(disp,pc),Rn */
	IF(0x0C7C0FEAu); { u32 t_ = r0; PR = 0x0C7C0FEEu; W32(r15 + 0x4u, r1); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C7C0028, 0x0C7C0028u, 0x0C7C0FEEu); }  /* 0C7C0FEA jsr @Rn */
L_0C7C0FEE: BLKS(0x0C7C0FEEu);
	r15 += 0x8u;  /* 0C7C0FEE add #imm,Rn */
	IF(0x0C7C0FF0u); PR = R32(r15); r15 += 4; UPD(0x0C7C0FF2u, 2);  /* 0C7C0FF0 lds.l @Rn+,pr */
	IF(0x0C7C0FF2u); { u32 t_ = PR; IF(0x0C7C0FF4u); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C7C0FF2 rts */
}

/* arr_bomb_gauge */
void f_0C7C1000(sh3_t *c)
{
	LOCALS;
L_0C7C1000: BLKS(0x0C7C1000u);
	IF(0x0C7C1000u); r15 -= 4; W32(r15, PR); UPD(0x0C7C1002u, 1);  /* 0C7C1000 sts.l pr,@-Rn */
	r0 = 0xC7C0028u; UPD(0x0C7C1004u, 1);  /* 0C7C1002 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C7C1004 add #imm,Rn */
	r1 = 0xAu;  /* 0C7C1006 mov #imm,Rn */
	W32(r15, r7); UPD(0x0C7C100Au, 3);  /* 0C7C1008 mov.l Rm,@Rn */
	r7 = r6;  /* 0C7C100A mov Rm,Rn */
	r6 = r5;  /* 0C7C100C mov Rm,Rn */
	r5 = r4;  /* 0C7C100E mov Rm,Rn */
	r4 = 0xC05E560u; UPD(0x0C7C1012u, 4);  /* 0C7C1010 mov.l @(disp,pc),Rn */
	IF(0x0C7C1012u); { u32 t_ = r0; PR = 0x0C7C1016u; W32(r15 + 0x4u, r1); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C7C0028, 0x0C7C0028u, 0x0C7C1016u); }  /* 0C7C1012 jsr @Rn */
L_0C7C1016: BLKS(0x0C7C1016u);
	r15 += 0x8u;  /* 0C7C1016 add #imm,Rn */
	IF(0x0C7C1018u); PR = R32(r15); r15 += 4; UPD(0x0C7C101Au, 2);  /* 0C7C1018 lds.l @Rn+,pr */
	IF(0x0C7C101Au); { u32 t_ = PR; IF(0x0C7C101Cu); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C7C101A rts */
}

/* arr_ending_pic */
void f_0C7C1028(sh3_t *c)
{
	LOCALS;
L_0C7C1028: BLKS(0x0C7C1028u);
	r1 = 0xC21CA15u; UPD(0x0C7C102Au, 1);  /* 0C7C1028 mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C102Cu, 1);  /* 0C7C102A mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C102C tst Rm,Rn */
	if (!T) { UPD(0x0C7C104Eu, 4); goto L_0C7C104E; }  /* 0C7C102E bf */
L_0C7C1030: BLKS(0x0C7C1030u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C7C1032u, 1);  /* 0C7C1030 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C7C1034u, 1);  /* 0C7C1032 mov.l Rm,@-Rn */
	r0 = 0xC09F140u; UPD(0x0C7C1036u, 1);  /* 0C7C1034 mov.l @(disp,pc),Rn */
	IF(0x0C7C1036u); r15 -= 4; W32(r15, PR); UPD(0x0C7C1038u, 1);  /* 0C7C1036 sts.l pr,@-Rn */
	r8 = 0xC1D95D0u; UPD(0x0C7C103Au, 1);  /* 0C7C1038 mov.l @(disp,pc),Rn */
	r1 = 0xC1D8150u; UPD(0x0C7C103Cu, 1);  /* 0C7C103A mov.l @(disp,pc),Rn */
	r9 = R32(r8); UPD(0x0C7C103Eu, 1);  /* 0C7C103C mov.l @Rm,Rn */
	W32(r8, r1); UPD(0x0C7C1040u, 1);  /* 0C7C103E mov.l Rm,@Rn */
	IF(0x0C7C1040u); { u32 t_ = r0; PR = 0x0C7C1044u; IF(0x0C7C1042u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C09F140, 0x0C09F140u, 0x0C7C1044u); }  /* 0C7C1040 jsr @Rn */
L_0C7C1044: BLKS(0x0C7C1044u);
	W32(r8, r9); UPD(0x0C7C1046u, 1);  /* 0C7C1044 mov.l Rm,@Rn */
	IF(0x0C7C1046u); PR = R32(r15); r15 += 4; UPD(0x0C7C1048u, 1);  /* 0C7C1046 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C104Au, 1);  /* 0C7C1048 mov.l @Rm+,Rn */
	IF(0x0C7C104Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C7C104A rts */
L_0C7C104E: BLKS(0x0C7C104Eu);
	r0 = 0xC09F140u; UPD(0x0C7C1050u, 1);  /* 0C7C104E mov.l @(disp,pc),Rn */
	IF(0x0C7C1050u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); IF(0x0C7C1052u); ; /* slot nop */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C7C1050 jmp @Rn */
}

/* arr_kill_option */
void f_0C7C1064(sh3_t *c)
{
	LOCALS;
L_0C7C1064: BLKS(0x0C7C1064u);
	r1 = 0xC7C1D40u; UPD(0x0C7C1066u, 1);  /* 0C7C1064 mov.l @(disp,pc),Rn */
	IF(0x0C7C1066u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); r6 = r13; /* slot mov Rm,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C7C1D40u: TAIL(f_0C7C1D40); default: JUMPD(tv_); } }  /* 0C7C1066 jmp @Rn */
}

/* arr_defl_cos */
void f_0C7C1070(sh3_t *c)
{
	LOCALS;
L_0C7C1070: BLKS(0x0C7C1070u);
	r1 = 0xC7C1DE4u; UPD(0x0C7C1072u, 1);  /* 0C7C1070 mov.l @(disp,pc),Rn */
	IF(0x0C7C1072u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); r6 = r13; /* slot mov Rm,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C7C1DE4u: TAIL(f_0C7C1DE4); default: JUMPD(tv_); } }  /* 0C7C1072 jmp @Rn */
}

/* arr_defl_sin */
void f_0C7C107C(sh3_t *c)
{
	LOCALS;
L_0C7C107C: BLKS(0x0C7C107Cu);
	r1 = 0xC7C1E28u; UPD(0x0C7C107Eu, 1);  /* 0C7C107C mov.l @(disp,pc),Rn */
	IF(0x0C7C107Eu); { u32 tv_ = r1; u32 t_ = PHYS(tv_); r6 = r13; /* slot mov Rm,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C7C1E28u: TAIL(f_0C7C1E28); default: JUMPD(tv_); } }  /* 0C7C107E jmp @Rn */
}

/* slow */
void f_0C7C1088(sh3_t *c)
{
	LOCALS;
	SPIN_VARS(0C7C1134);
L_0C7C1088: BLKS(0x0C7C1088u);
	r1 = 0xC22486Eu; UPD(0x0C7C108Au, 1);  /* 0C7C1088 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C108Cu, 1);  /* 0C7C108A mov.b @Rm,Rn */
	r0 = r0 & 0xFF;  /* 0C7C108C extu.b Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C7C108E tst Rm,Rn */
	{ u32 c_ = T; r2 = r4; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C7C10E0u, 5); goto L_0C7C10E0; } goto L_0C7C1094; }  /* 0C7C1090 bt/s */
L_0C7C1094: BLKS(0x0C7C1094u);
	IF(0x0C7C1094u); T = r2 & 1; r2 = (u32)((s32)r2 >> 1);  /* 0C7C1094 shar Rn */
	IF(0x0C7C1096u); T = r2 & 1; r2 = (u32)((s32)r2 >> 1);  /* 0C7C1096 shar Rn */
	r6 = r4;  /* 0C7C1098 mov Rm,Rn */
	r1 = 0xFFFFFFFCu;  /* 0C7C109A mov #imm,Rn */
	T = r0 == 0x4u;  /* 0C7C109C cmp/eq #imm,r0 */
	IF(0x0C7C109Eu); ARG0(0x461Cu); { s32 s_ = (s32)r1; if (s_ >= 0) r6 <<= (s_ & 31); else if ((s_ & 31) == 0) r6 = (u32)((s32)r6 >> 31); else r6 = (u32)((s32)r6 >> ((~s_ & 31) + 1)); }  /* 0C7C109E shad Rm,Rn */
	{ u32 c_ = T; r1 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C7C1116u, 10); goto L_0C7C1116; } goto L_0C7C10A4; }  /* 0C7C10A0 bt/s */
L_0C7C10A4: BLKS(0x0C7C10A4u);
	r3 = 0x4u;  /* 0C7C10A4 mov #imm,Rn */
	T = r0 > r3;  /* 0C7C10A6 cmp/hi Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x6u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C7C10BCu, 6); goto L_0C7C10BC; } goto L_0C7C10AC; }  /* 0C7C10A8 bt/s */
L_0C7C10AC: BLKS(0x0C7C10ACu);
	T = r0 == 0x2u;  /* 0C7C10AC cmp/eq #imm,r0 */
	if (T) { UPD(0x0C7C110Au, 5); goto L_0C7C110A; }  /* 0C7C10AE bt */
L_0C7C10B0: BLKS(0x0C7C10B0u);
	T = r0 == 0x3u;  /* 0C7C10B0 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C7C10E4u, 4); goto L_0C7C10E4; }  /* 0C7C10B2 bt */
L_0C7C10B4: BLKS(0x0C7C10B4u);
	r1 += r6;  /* 0C7C10B4 add Rm,Rn */
	r0 = r4;  /* 0C7C10B6 mov Rm,Rn */
	IF(0x0C7C10B8u); { u32 t_ = PR; r0 -= r1; /* slot sub Rm,Rn */ UPD(t_, 5); RET(t_); }  /* 0C7C10B8 rts */
L_0C7C10BC: BLKS(0x0C7C10BCu);
	{ u32 c_ = T; T = r0 == 0x7u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C7C1104u, 3); goto L_0C7C1104; } goto L_0C7C10C0; }  /* 0C7C10BC bt/s */
L_0C7C10C0: BLKS(0x0C7C10C0u);
	{ u32 c_ = T; T = r0 == 0x5u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C7C10F8u, 4); goto L_0C7C10F8; } goto L_0C7C10C4; }  /* 0C7C10C0 bt/s */
L_0C7C10C4: BLKS(0x0C7C10C4u);
	{ u32 c_ = !T; IF(0x0C7C10C6u); T = (s32)r2 >= 0; /* slot cmp/pz Rn */ if (c_) { UPD(0x0C7C1128u, 4); goto L_0C7C1128; } goto L_0C7C10C8; }  /* 0C7C10C4 bf/s */
L_0C7C10C8: BLKS(0x0C7C10C8u);
	r2 = 0x66666667u; UPD(0x0C7C10CAu, 2);  /* 0C7C10C8 mov.l @(disp,pc),Rn */
	{ s64 r_ = (s64)(s32)r1 * (s64)(s32)r2; MACH = (u32)((u64)r_ >> 32); MACL = (u32)r_; }  /* 0C7C10CA dmuls.l Rm,Rn */
	IF(0x0C7C10CCu); r2 = MACH;  /* 0C7C10CC sts mach,Rn */
	UPD(0x0C7C10CEu, 3);
L_0C7C10CE: BLKS(0x0C7C10CEu);
	IF(0x0C7C10CEu); T = r2 & 1; r2 = (u32)((s32)r2 >> 1);  /* 0C7C10CE shar Rn */
	r0 = r4;  /* 0C7C10D0 mov Rm,Rn */
	IF(0x0C7C10D2u); T = r1 >> 31; r1 <<= 1;  /* 0C7C10D2 shll Rn */
	{ u32 a_ = r3, t_ = a_ - r3, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r3 = r_; }  /* 0C7C10D4 subc Rm,Rn */
	r1 = r2;  /* 0C7C10D6 mov Rm,Rn */
	r1 -= r3;  /* 0C7C10D8 sub Rm,Rn */
	r1 += r6;  /* 0C7C10DA add Rm,Rn */
	IF(0x0C7C10DCu); { u32 t_ = PR; r0 -= r1; /* slot sub Rm,Rn */ UPD(t_, 10); RET(t_); }  /* 0C7C10DC rts */
L_0C7C10E0: BLKS(0x0C7C10E0u);
	IF(0x0C7C10E0u); { u32 t_ = PR; r0 = r4; /* slot mov Rm,Rn */ UPD(t_, 3); RET(t_); }  /* 0C7C10E0 rts */
L_0C7C10E4: BLKS(0x0C7C10E4u);
	r2 = 0x55555556u; UPD(0x0C7C10E6u, 1);  /* 0C7C10E4 mov.l @(disp,pc),Rn */
	{ s64 r_ = (s64)(s32)r1 * (s64)(s32)r2; MACH = (u32)((u64)r_ >> 32); MACL = (u32)r_; }  /* 0C7C10E6 dmuls.l Rm,Rn */
	UPD(0x0C7C10E8u, 2);
L_0C7C10E8: BLKS(0x0C7C10E8u);
	IF(0x0C7C10E8u); T = r1 >> 31; r1 <<= 1;  /* 0C7C10E8 shll Rn */
	r0 = r4;  /* 0C7C10EA mov Rm,Rn */
	{ u32 a_ = r2, t_ = a_ - r2, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r2 = r_; }  /* 0C7C10EC subc Rm,Rn */
	IF(0x0C7C10EEu); r1 = MACH;  /* 0C7C10EE sts mach,Rn */
	r1 -= r2;  /* 0C7C10F0 sub Rm,Rn */
	r1 += r6;  /* 0C7C10F2 add Rm,Rn */
	IF(0x0C7C10F4u); { u32 t_ = PR; r0 -= r1; /* slot sub Rm,Rn */ UPD(t_, 9); RET(t_); }  /* 0C7C10F4 rts */
L_0C7C10F8: BLKS(0x0C7C10F8u);
	r2 = 0x92492493u; UPD(0x0C7C10FAu, 1);  /* 0C7C10F8 mov.l @(disp,pc),Rn */
	{ s64 r_ = (s64)(s32)r1 * (s64)(s32)r2; MACH = (u32)((u64)r_ >> 32); MACL = (u32)r_; }  /* 0C7C10FA dmuls.l Rm,Rn */
	IF(0x0C7C10FCu); r2 = MACH;  /* 0C7C10FC sts mach,Rn */
	r2 += r1;  /* 0C7C10FE add Rm,Rn */
	{ IF(0x0C7C1102u); T = r2 & 1; r2 = (u32)((s32)r2 >> 1); /* slot shar Rn */ UPD(0x0C7C10CEu, 7); goto L_0C7C10CE; }  /* 0C7C1100 bra */
L_0C7C1104: BLKS(0x0C7C1104u);
	r2 = 0x2AAAAAABu; UPD(0x0C7C1106u, 1);  /* 0C7C1104 mov.l @(disp,pc),Rn */
	{ { s64 r_ = (s64)(s32)r1 * (s64)(s32)r2; MACH = (u32)((u64)r_ >> 32); MACL = (u32)r_; } /* slot dmuls.l Rm,Rn */ UPD(0x0C7C10E8u, 4); goto L_0C7C10E8; }  /* 0C7C1106 bra */
L_0C7C110A: BLKS(0x0C7C110Au);
	IF(0x0C7C110Au); T = r2 >> 31; r2 <<= 1;  /* 0C7C110A shll Rn */
	r2 = 0x0u;  /* 0C7C110C mov #imm,Rn */
	{ u32 a_ = r2, t_ = a_ + r1, r_ = t_ + T; T = (a_ > t_) | (t_ > r_); r2 = r_; }  /* 0C7C110E addc Rm,Rn */
	r1 = r2;  /* 0C7C1110 mov Rm,Rn */
	{ IF(0x0C7C1114u); T = r1 & 1; r1 = (u32)((s32)r1 >> 1); /* slot shar Rn */ UPD(0x0C7C10B4u, 7); goto L_0C7C10B4; }  /* 0C7C1112 bra */
L_0C7C1116: BLKS(0x0C7C1116u);
	r0 = r2;  /* 0C7C1116 mov Rm,Rn */
	IF(0x0C7C1118u); T = r0 >> 31; r0 <<= 1;  /* 0C7C1118 shll Rn */
	{ u32 a_ = r0, t_ = a_ - r0, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r0 = r_; }  /* 0C7C111A subc Rm,Rn */
	r0 &= 0x3u;  /* 0C7C111C and #imm,r0 */
	r0 += r2;  /* 0C7C111E add Rm,Rn */
	IF(0x0C7C1120u); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C7C1120 shar Rn */
	r1 = r0;  /* 0C7C1122 mov Rm,Rn */
	{ IF(0x0C7C1126u); T = r1 & 1; r1 = (u32)((s32)r1 >> 1); /* slot shar Rn */ UPD(0x0C7C10B4u, 10); goto L_0C7C10B4; }  /* 0C7C1124 bra */
L_0C7C1128: BLKS(0x0C7C1128u);
	r3 = r2;  /* 0C7C1128 mov Rm,Rn */
	if (T) { UPD(0x0C7C112Eu, 4); goto L_0C7C112E; }  /* 0C7C112A bt */
L_0C7C112C: BLKS(0x0C7C112Cu);
	r3 = 0u - r2;  /* 0C7C112C neg Rm,Rn */
	UPD(0x0C7C112Eu, 1);
L_0C7C112E: BLKS(0x0C7C112Eu);
	T = r0 > r3;  /* 0C7C112E cmp/hi Rm,Rn */
	{ u32 c_ = T; r7 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C7C113Cu, 4); goto L_0C7C113C; } UPD(0x0C7C1134u, 1); goto L_0C7C1134; }  /* 0C7C1130 bt/s */
L_0C7C1134: BLKS(0x0C7C1134u);
	SPIN_SAVE(0C7C1134);
	r3 -= r0;  /* 0C7C1134 sub Rm,Rn */
	T = r0 > r3;  /* 0C7C1136 cmp/hi Rm,Rn */
	{ u32 c_ = !T; r7 += 0x1u; /* slot add #imm,Rn */ if (c_) { SPIN_FFD(0C7C1134, 5); UPD(0x0C7C1134u, 5); goto L_0C7C1134; } UPD(0x0C7C113Cu, 1); goto L_0C7C113C; }  /* 0C7C1138 bf/s */
L_0C7C113C: BLKS(0x0C7C113Cu);
	IF(0x0C7C113Cu); T = (s32)r2 >= 0;  /* 0C7C113C cmp/pz Rn */
	{ u32 c_ = T; r1 = r7; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C7C10B4u, 4); goto L_0C7C10B4; } goto L_0C7C1142; }  /* 0C7C113E bt/s */
L_0C7C1142: BLKS(0x0C7C1142u);
	{ r1 = 0u - r7; /* slot neg Rm,Rn */ UPD(0x0C7C10B4u, 4); goto L_0C7C10B4; }  /* 0C7C1142 bra */
}

/* peek_parent */
void f_0C7C115C(sh3_t *c)
{
	LOCALS;
L_0C7C115C: BLKS(0x0C7C115Cu);
	r3 = 0xB4u; UPD(0x0C7C115Eu, 1);  /* 0C7C115C mov.w @(disp,pc),Rn */
	r1 = 0xC26CDC2u; UPD(0x0C7C1160u, 1);  /* 0C7C115E mov.l @(disp,pc),Rn */
	IF(0x0C7C1160u); MACL = r4 * r3;  /* 0C7C1160 mul.l Rm,Rn */
	IF(0x0C7C1162u); r0 = MACL;  /* 0C7C1162 sts macl,Rn */
	r1 += r0;  /* 0C7C1164 add Rm,Rn */
	r6 = (u32)(s32)(s16)R16(r1); UPD(0x0C7C1168u, 5);  /* 0C7C1166 mov.w @Rm,Rn */
	{ r6 = r6 & 0xFFFF; /* slot extu.w Rm,Rn */ UPD(0x0C7C1182u, 3); goto L_0C7C1182; }  /* 0C7C1168 bra */
L_0C7C116C: BLKS(0x0C7C116Cu);
	r1 = 0xC26CD40u; UPD(0x0C7C116Eu, 1);  /* 0C7C116C mov.l @(disp,pc),Rn */
	r1 += r2;  /* 0C7C116E add Rm,Rn */
	r7 = R32(r1); UPD(0x0C7C1172u, 2);  /* 0C7C1170 mov.l @Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C7C1172 tst Rm,Rn */
	if (T) { UPD(0x0C7C119Au, 4); goto L_0C7C119A; }  /* 0C7C1174 bt */
L_0C7C1176: BLKS(0x0C7C1176u);
	r1 = R32(r1); UPD(0x0C7C1178u, 1);  /* 0C7C1176 mov.l @Rm,Rn */
	r7 = 0x4000u; UPD(0x0C7C117Au, 1);  /* 0C7C1178 mov.w @(disp,pc),Rn */
	T = (r1 & r7) == 0;  /* 0C7C117A tst Rm,Rn */
	{ u32 c_ = T; T = (r5 & r5) == 0; /* slot tst Rm,Rn */ if (c_) { UPD(0x0C7C119Eu, 4); goto L_0C7C119E; } goto L_0C7C1180; }  /* 0C7C117C bt/s */
L_0C7C1180: BLKS(0x0C7C1180u);
	IF(0x0C7C1180u); MACL = r4 * r3;  /* 0C7C1180 mul.l Rm,Rn */
	UPD(0x0C7C1182u, 3);
L_0C7C1182: BLKS(0x0C7C1182u);
	r7 = 0xC26CDBCu; UPD(0x0C7C1184u, 1);  /* 0C7C1182 mov.l @(disp,pc),Rn */
	IF(0x0C7C1184u); r1 = MACL;  /* 0C7C1184 sts macl,Rn */
	r1 += r7;  /* 0C7C1186 add Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r1); UPD(0x0C7C118Au, 3);  /* 0C7C1188 mov.w @Rm,Rn */
	r1 = 0xC26CDC2u; UPD(0x0C7C118Cu, 1);  /* 0C7C118A mov.l @(disp,pc),Rn */
	MACL = (u32)((s32)(s16)r4 * (s32)(s16)r3);  /* 0C7C118C muls.w Rm,Rn */
	IF(0x0C7C118Eu); r2 = MACL;  /* 0C7C118E sts macl,Rn */
	r1 += r2;  /* 0C7C1190 add Rm,Rn */
	r1 = (u32)(s32)(s16)R16(r1); UPD(0x0C7C1194u, 5);  /* 0C7C1192 mov.w @Rm,Rn */
	r1 = r1 & 0xFFFF;  /* 0C7C1194 extu.w Rm,Rn */
	T = r6 == r1;  /* 0C7C1196 cmp/eq Rm,Rn */
	if (T) { UPD(0x0C7C116Cu, 5); goto L_0C7C116C; }  /* 0C7C1198 bt */
L_0C7C119A: BLKS(0x0C7C119Au);
	IF(0x0C7C119Au); { u32 t_ = PR; r0 = 0xFFFFFFFFu; /* slot mov #imm,Rn */ UPD(t_, 3); RET(t_); }  /* 0C7C119A rts */
L_0C7C119E: BLKS(0x0C7C119Eu);
	if (T) { UPD(0x0C7C11AAu, 3); goto L_0C7C11AA; }  /* 0C7C119E bt */
L_0C7C11A0: BLKS(0x0C7C11A0u);
	r1 = 0xC26CD7Cu; UPD(0x0C7C11A2u, 1);  /* 0C7C11A0 mov.l @(disp,pc),Rn */
	r2 += r1;  /* 0C7C11A2 add Rm,Rn */
	r1 = (u32)(s32)(s16)R16(r2); UPD(0x0C7C11A6u, 2);  /* 0C7C11A4 mov.w @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C11A6 tst Rm,Rn */
	if (T) { UPD(0x0C7C119Au, 4); goto L_0C7C119A; }  /* 0C7C11A8 bt */
L_0C7C11AA: BLKS(0x0C7C11AAu);
	r2 = 0xC26CDBCu; UPD(0x0C7C11ACu, 1);  /* 0C7C11AA mov.l @(disp,pc),Rn */
	r0 += r2;  /* 0C7C11AC add Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r0); UPD(0x0C7C11B0u, 2);  /* 0C7C11AE mov.w @Rm,Rn */
	IF(0x0C7C11B0u); { u32 t_ = PR; IF(0x0C7C11B2u); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C7C11B0 rts */
}

/* peek_owner */
void f_0C7C11C8(sh3_t *c)
{
	LOCALS;
L_0C7C11C8: BLKS(0x0C7C11C8u);
	IF(0x0C7C11C8u); T = (s32)r4 >= 0;  /* 0C7C11C8 cmp/pz Rn */
	{ u32 c_ = !T; r5 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C7C121Au, 4); goto L_0C7C121A; } goto L_0C7C11CE; }  /* 0C7C11CA bf/s */
L_0C7C11CE: BLKS(0x0C7C11CEu);
	r0 = 0xC7C115Cu; UPD(0x0C7C11D0u, 2);  /* 0C7C11CE mov.l @(disp,pc),Rn */
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C7C11D2u, 1);  /* 0C7C11D0 mov.l Rm,@-Rn */
	IF(0x0C7C11D2u); r15 -= 4; W32(r15, PR); UPD(0x0C7C11D4u, 1);  /* 0C7C11D2 sts.l pr,@-Rn */
	IF(0x0C7C11D4u); { u32 t_ = r0; PR = 0x0C7C11D8u; r8 = r4; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C7C115C, 0x0C7C115Cu, 0x0C7C11D8u); }  /* 0C7C11D4 jsr @Rn */
L_0C7C11D8: BLKS(0x0C7C11D8u);
	IF(0x0C7C11D8u); T = (s32)r0 >= 0;  /* 0C7C11D8 cmp/pz Rn */
	if (!T) { UPD(0x0C7C1216u, 4); goto L_0C7C1216; }  /* 0C7C11DA bf */
L_0C7C11DC: BLKS(0x0C7C11DCu);
	r2 = 0xB4u; UPD(0x0C7C11DEu, 1);  /* 0C7C11DC mov.w @(disp,pc),Rn */
	r3 = 0xC26CDBEu; UPD(0x0C7C11E0u, 1);  /* 0C7C11DE mov.l @(disp,pc),Rn */
	MACL = (u32)(u16)r8 * (u32)(u16)r2;  /* 0C7C11E0 mulu.w Rm,Rn */
	r7 = 0xC26CDC2u; UPD(0x0C7C11E4u, 3);  /* 0C7C11E2 mov.l @(disp,pc),Rn */
	IF(0x0C7C11E4u); r1 = MACL;  /* 0C7C11E4 sts macl,Rn */
	r3 += r1;  /* 0C7C11E6 add Rm,Rn */
	r3 = (u32)(s32)(s16)R16(r3); UPD(0x0C7C11EAu, 3);  /* 0C7C11E8 mov.w @Rm,Rn */
	r7 += r1;  /* 0C7C11EA add Rm,Rn */
	r7 = (u32)(s32)(s16)R16(r7); UPD(0x0C7C11EEu, 2);  /* 0C7C11EC mov.w @Rm,Rn */
	MACL = (u32)((s32)(s16)r3 * (s32)(s16)r2);  /* 0C7C11EE muls.w Rm,Rn */
	r3 = 0xC26CDC2u; UPD(0x0C7C11F2u, 3);  /* 0C7C11F0 mov.l @(disp,pc),Rn */
	r7 = r7 & 0xFFFF;  /* 0C7C11F2 extu.w Rm,Rn */
	IF(0x0C7C11F4u); r2 = MACL;  /* 0C7C11F4 sts macl,Rn */
	r3 += r2;  /* 0C7C11F6 add Rm,Rn */
	r3 = (u32)(s32)(s16)R16(r3); UPD(0x0C7C11FAu, 4);  /* 0C7C11F8 mov.w @Rm,Rn */
	r3 = r3 & 0xFFFF;  /* 0C7C11FA extu.w Rm,Rn */
	T = r7 == r3;  /* 0C7C11FC cmp/eq Rm,Rn */
	if (!T) { UPD(0x0C7C1216u, 5); goto L_0C7C1216; }  /* 0C7C11FE bf */
L_0C7C1200: BLKS(0x0C7C1200u);
	r7 = 0xC26CD40u; UPD(0x0C7C1202u, 1);  /* 0C7C1200 mov.l @(disp,pc),Rn */
	r2 += r7;  /* 0C7C1202 add Rm,Rn */
	r2 = R32(r2); UPD(0x0C7C1206u, 2);  /* 0C7C1204 mov.l @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C7C1206 tst Rm,Rn */
	if (T) { UPD(0x0C7C1216u, 4); goto L_0C7C1216; }  /* 0C7C1208 bt */
L_0C7C120A: BLKS(0x0C7C120Au);
	r2 = 0xC26CDBCu; UPD(0x0C7C120Cu, 1);  /* 0C7C120A mov.l @(disp,pc),Rn */
	r1 += r2;  /* 0C7C120C add Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r1); UPD(0x0C7C1210u, 2);  /* 0C7C120E mov.w @Rm,Rn */
L_0C7C1210: BLKS(0x0C7C1210u);
	IF(0x0C7C1210u); PR = R32(r15); r15 += 4; UPD(0x0C7C1212u, 1);  /* 0C7C1210 lds.l @Rn+,pr */
	IF(0x0C7C1212u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C7C1212 rts */
L_0C7C1216: BLKS(0x0C7C1216u);
	{ r0 = 0xFFFFFFFFu; /* slot mov #imm,Rn */ UPD(0x0C7C1210u, 3); goto L_0C7C1210; }  /* 0C7C1216 bra */
L_0C7C121A: BLKS(0x0C7C121Au);
	IF(0x0C7C121Au); { u32 t_ = PR; r0 = 0xFFFFFFFFu; /* slot mov #imm,Rn */ UPD(t_, 3); RET(t_); }  /* 0C7C121A rts */
}

/* arr_enemy_hp */
void f_0C7C1234(sh3_t *c)
{
	LOCALS;
L_0C7C1234: BLKS(0x0C7C1234u);
	r1 = 0xB4u; UPD(0x0C7C1236u, 1);  /* 0C7C1234 mov.w @(disp,pc),Rn */
	MACL = (u32)((s32)(s16)r4 * (s32)(s16)r1);  /* 0C7C1236 muls.w Rm,Rn */
	r1 = 0xC26CD50u; UPD(0x0C7C123Au, 3);  /* 0C7C1238 mov.l @(disp,pc),Rn */
	IF(0x0C7C123Au); r2 = MACL;  /* 0C7C123A sts macl,Rn */
	r1 += r2;  /* 0C7C123C add Rm,Rn */
	r3 = R32(r1); UPD(0x0C7C1240u, 3);  /* 0C7C123E mov.l @Rm,Rn */
	r1 = 0xC26CD48u; UPD(0x0C7C1242u, 1);  /* 0C7C1240 mov.l @(disp,pc),Rn */
	r1 += r2;  /* 0C7C1242 add Rm,Rn */
	r1 = R32(r1); UPD(0x0C7C1246u, 2);  /* 0C7C1244 mov.l @Rm,Rn */
	IF(0x0C7C1246u); r1 <<= 2;  /* 0C7C1246 shll2 Rn */
	IF(0x0C7C1248u); r1 <<= 2;  /* 0C7C1248 shll2 Rn */
	r1 += r3;  /* 0C7C124A add Rm,Rn */
	r3 = 0xC26CD80u; UPD(0x0C7C124Eu, 4);  /* 0C7C124C mov.l @(disp,pc),Rn */
	r7 = R32(r1 + 0x4u); UPD(0x0C7C1250u, 1);  /* 0C7C124E mov.l @(disp,Rm),Rn */
	r3 += r2;  /* 0C7C1250 add Rm,Rn */
	W32(r3, r7); UPD(0x0C7C1254u, 2);  /* 0C7C1252 mov.l Rm,@Rn */
	r3 = 0xC26CD84u; UPD(0x0C7C1256u, 1);  /* 0C7C1254 mov.l @(disp,pc),Rn */
	r7 = R32(r1 + 0x8u); UPD(0x0C7C1258u, 1);  /* 0C7C1256 mov.l @(disp,Rm),Rn */
	r3 += r2;  /* 0C7C1258 add Rm,Rn */
	W32(r3, r7); UPD(0x0C7C125Cu, 2);  /* 0C7C125A mov.l Rm,@Rn */
	r3 = 0xC21CA15u; UPD(0x0C7C125Eu, 1);  /* 0C7C125C mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s16)R16(r1 + 0xEu); UPD(0x0C7C1260u, 1);  /* 0C7C125E mov.w @(disp,Rm),r0 */
	r3 = (u32)(s32)(s8)R8(r3); UPD(0x0C7C1262u, 1);  /* 0C7C1260 mov.b @Rm,Rn */
	r3 = r3 & 0xFF;  /* 0C7C1262 extu.b Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C7C1264 tst Rm,Rn */
	{ u32 c_ = !T; r1 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C7C128Cu, 5); goto L_0C7C128C; } goto L_0C7C126A; }  /* 0C7C1266 bf/s */
L_0C7C126A: BLKS(0x0C7C126Au);
	r7 = 0xC22486Eu; UPD(0x0C7C126Cu, 2);  /* 0C7C126A mov.l @(disp,pc),Rn */
	r7 = (u32)(s32)(s8)R8(r7); UPD(0x0C7C126Eu, 1);  /* 0C7C126C mov.b @Rm,Rn */
	r7 = r7 & 0xFF;  /* 0C7C126E extu.b Rm,Rn */
	MACL = (u32)((s32)(s16)r7 * (s32)(s16)r0);  /* 0C7C1270 muls.w Rm,Rn */
	IF(0x0C7C1272u); r7 = MACL;  /* 0C7C1272 sts macl,Rn */
	T = (s32)r3 > (s32)r7;  /* 0C7C1274 cmp/gt Rm,Rn */
	r3 = 0xFFFFFFFCu;  /* 0C7C1276 mov #imm,Rn */
	{ u32 a_ = r0, t_ = a_ - r0, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r0 = r_; }  /* 0C7C1278 subc Rm,Rn */
	r0 &= 0xFu;  /* 0C7C127A and #imm,r0 */
	r7 += r0;  /* 0C7C127C add Rm,Rn */
	r0 = 0xC26CD7Cu; UPD(0x0C7C1280u, 10);  /* 0C7C127E mov.l @(disp,pc),Rn */
	IF(0x0C7C1280u); ARG0(0x473Cu); { s32 s_ = (s32)r3; if (s_ >= 0) r7 <<= (s_ & 31); else if ((s_ & 31) == 0) r7 = (u32)((s32)r7 >> 31); else r7 = (u32)((s32)r7 >> ((~s_ & 31) + 1)); }  /* 0C7C1280 shad Rm,Rn */
	r1 += r7;  /* 0C7C1282 add Rm,Rn */
	r0 += r2;  /* 0C7C1284 add Rm,Rn */
	W16(r0, r1); UPD(0x0C7C1288u, 4);  /* 0C7C1286 mov.w Rm,@Rn */
	IF(0x0C7C1288u); { u32 t_ = PR; IF(0x0C7C128Au); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C7C1288 rts */
L_0C7C128C: BLKS(0x0C7C128Cu);
	r3 = 0xC27DFF8u; UPD(0x0C7C128Eu, 1);  /* 0C7C128C mov.l @(disp,pc),Rn */
	r7 = R32(r3); UPD(0x0C7C1290u, 1);  /* 0C7C128E mov.l @Rm,Rn */
	r3 = 0x1000000u; UPD(0x0C7C1292u, 1);  /* 0C7C1290 mov.l @(disp,pc),Rn */
	r3 -= r7;  /* 0C7C1292 sub Rm,Rn */
	IF(0x0C7C1294u); r3 >>= 16;  /* 0C7C1294 shlr16 Rn */
	IF(0x0C7C1296u); MACL = r3 * r0;  /* 0C7C1296 mul.l Rm,Rn */
	r7 = 0xFFFFFFF9u;  /* 0C7C1298 mov #imm,Rn */
	r0 = 0xC26CD7Cu; UPD(0x0C7C129Cu, 6);  /* 0C7C129A mov.l @(disp,pc),Rn */
	IF(0x0C7C129Cu); r3 = MACL;  /* 0C7C129C sts macl,Rn */
	r0 += r2;  /* 0C7C129E add Rm,Rn */
	IF(0x0C7C12A0u); ARG0(0x437Du); { s32 s_ = (s32)r7; if (s_ >= 0) r3 <<= (s_ & 31); else if ((s_ & 31) == 0) r3 = 0; else r3 >>= ((~s_ & 31) + 1); }  /* 0C7C12A0 shld Rm,Rn */
	r1 += r3;  /* 0C7C12A2 add Rm,Rn */
	W16(r0, r1); UPD(0x0C7C12A6u, 5);  /* 0C7C12A4 mov.w Rm,@Rn */
	IF(0x0C7C12A6u); { u32 t_ = PR; IF(0x0C7C12A8u); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C7C12A6 rts */
}

/* arr_enemy_damage */
void f_0C7C12D0(sh3_t *c)
{
	LOCALS;
L_0C7C12D0: BLKS(0x0C7C12D0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C7C12D2u, 1);  /* 0C7C12D0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C7C12D4u, 1);  /* 0C7C12D2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C7C12D6u, 1);  /* 0C7C12D4 mov.l Rm,@-Rn */
	r10 = r7;  /* 0C7C12D6 mov Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C7C12DAu, 2);  /* 0C7C12D8 mov.l Rm,@-Rn */
	r11 = r6;  /* 0C7C12DA mov Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C7C12DEu, 2);  /* 0C7C12DC mov.l Rm,@-Rn */
	r12 = r4;  /* 0C7C12DE mov Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C7C12E2u, 2);  /* 0C7C12E0 mov.l Rm,@-Rn */
	r1 = 0xC21CA15u; UPD(0x0C7C12E4u, 1);  /* 0C7C12E2 mov.l @(disp,pc),Rn */
	IF(0x0C7C12E4u); r15 -= 4; W32(r15, PR); UPD(0x0C7C12E6u, 1);  /* 0C7C12E4 sts.l pr,@-Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C12E8u, 1);  /* 0C7C12E6 mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C12E8 tst Rm,Rn */
	if (!T) { UPD(0x0C7C13C8u, 4); goto L_0C7C13C8; }  /* 0C7C12EA bf */
L_0C7C12EC: BLKS(0x0C7C12ECu);
	r8 = 0xB4u; UPD(0x0C7C12EEu, 1);  /* 0C7C12EC mov.w @(disp,pc),Rn */
	r9 = 0xC0A03F0u; UPD(0x0C7C12F0u, 1);  /* 0C7C12EE mov.l @(disp,pc),Rn */
	{ r4 = (u32)(s32)(s16)r5; /* slot exts.w Rm,Rn */ UPD(0x0C7C1300u, 3); goto L_0C7C1300; }  /* 0C7C12F0 bra */
L_0C7C12F4: BLKS(0x0C7C12F4u);
	r6 = 0x0u;  /* 0C7C12F4 mov #imm,Rn */
	IF(0x0C7C12F6u); { u32 t_ = r9; PR = 0x0C7C12FAu; r5 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLD(t_, 0x0C7C12FAu); }  /* 0C7C12F6 jsr @Rn */
L_0C7C12FA: BLKS(0x0C7C12FAu);
	IF(0x0C7C12FAu); T = (s32)r0 >= 0;  /* 0C7C12FA cmp/pz Rn */
	{ u32 c_ = !T; r4 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C7C13B2u, 4); goto L_0C7C13B2; } UPD(0x0C7C1300u, 1); goto L_0C7C1300; }  /* 0C7C12FC bf/s */
L_0C7C1300: BLKS(0x0C7C1300u);
	MACL = (u32)((s32)(s16)r4 * (s32)(s16)r8);  /* 0C7C1300 muls.w Rm,Rn */
	r13 = 0xC26CD40u; UPD(0x0C7C1304u, 3);  /* 0C7C1302 mov.l @(disp,pc),Rn */
	r3 = 0x4000u; UPD(0x0C7C1306u, 1);  /* 0C7C1304 mov.w @(disp,pc),Rn */
	IF(0x0C7C1306u); r1 = MACL;  /* 0C7C1306 sts macl,Rn */
	r13 += r1;  /* 0C7C1308 add Rm,Rn */
	r2 = R32(r13); UPD(0x0C7C130Cu, 3);  /* 0C7C130A mov.l @Rm,Rn */
	T = (r2 & r3) == 0;  /* 0C7C130C tst Rm,Rn */
	{ u32 c_ = !T; r7 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C7C12F4u, 4); goto L_0C7C12F4; } goto L_0C7C1312; }  /* 0C7C130E bf/s */
L_0C7C1312: BLKS(0x0C7C1312u);
	r5 = R32(r13); UPD(0x0C7C1314u, 2);  /* 0C7C1312 mov.l @Rm,Rn */
	r6 = 0x20000000u; UPD(0x0C7C1316u, 1);  /* 0C7C1314 mov.l @(disp,pc),Rn */
	T = (r5 & r6) == 0;  /* 0C7C1316 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C7C13B8u, 4); goto L_0C7C13B8; } goto L_0C7C131C; }  /* 0C7C1318 bf/s */
L_0C7C131C: BLKS(0x0C7C131Cu);
	r3 = 0xC26CDC4u; UPD(0x0C7C131Eu, 2);  /* 0C7C131C mov.l @(disp,pc),Rn */
	r3 += r1;  /* 0C7C131E add Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r3); UPD(0x0C7C1322u, 2);  /* 0C7C1320 mov.b @Rm,Rn */
	r2 = r2 & 0xFF;  /* 0C7C1322 extu.b Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C7C1324 tst Rm,Rn */
	{ u32 c_ = !T; r0 = r5; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C7C1330u, 5); goto L_0C7C1330; } goto L_0C7C132A; }  /* 0C7C1326 bf/s */
L_0C7C132A: BLKS(0x0C7C132Au);
	r7 = 0x6u;  /* 0C7C132A mov #imm,Rn */
	W8(r3, r7); UPD(0x0C7C132Eu, 3);  /* 0C7C132C mov.b Rm,@Rn */
	r0 = r5;  /* 0C7C132E mov Rm,Rn */
	UPD(0x0C7C1330u, 1);
L_0C7C1330: BLKS(0x0C7C1330u);
	T = (r0 & 0x8u) == 0;  /* 0C7C1330 tst #imm,r0 */
	if (!T) { UPD(0x0C7C133Au, 4); goto L_0C7C133A; }  /* 0C7C1332 bf */
L_0C7C1334: BLKS(0x0C7C1334u);
	r0 = (u32)(s32)(s8)R8(r3); UPD(0x0C7C1336u, 1);  /* 0C7C1334 mov.b @Rm,Rn */
	T = r0 == 0x6u;  /* 0C7C1336 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C7C13E2u, 4); goto L_0C7C13E2; }  /* 0C7C1338 bt */
L_0C7C133A: BLKS(0x0C7C133Au);
	r3 = 0xC26CD64u; UPD(0x0C7C133Cu, 1);  /* 0C7C133A mov.l @(disp,pc),Rn */
	r3 += r1;  /* 0C7C133C add Rm,Rn */
	r7 = R32(r3); UPD(0x0C7C1340u, 2);  /* 0C7C133E mov.l @Rm,Rn */
	r3 = 0x1200000u; UPD(0x0C7C1342u, 1);  /* 0C7C1340 mov.l @(disp,pc),Rn */
	T = (s32)r7 > (s32)r3;  /* 0C7C1342 cmp/gt Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C7C13B8u, 4); goto L_0C7C13B8; } goto L_0C7C1348; }  /* 0C7C1344 bt/s */
L_0C7C1348: BLKS(0x0C7C1348u);
	r6 = 0xC26CD7Cu; UPD(0x0C7C134Au, 2);  /* 0C7C1348 mov.l @(disp,pc),Rn */
	r0 = 0xEu;  /* 0C7C134A mov #imm,Rn */
	r6 += r1;  /* 0C7C134C add Rm,Rn */
	r3 = (u32)(s32)(s16)R16(r6); UPD(0x0C7C1350u, 3);  /* 0C7C134E mov.w @Rm,Rn */
	r7 = r3 & 0xFFFF;  /* 0C7C1350 extu.w Rm,Rn */
	r3 = (u32)(s32)(s16)r3;  /* 0C7C1352 exts.w Rm,Rn */
	T = (s32)r3 > (s32)r0;  /* 0C7C1354 cmp/gt Rm,Rn */
	{ u32 c_ = T; T = (r2 & r2) == 0; /* slot tst Rm,Rn */ if (c_) { UPD(0x0C7C136Au, 6); goto L_0C7C136A; } goto L_0C7C135A; }  /* 0C7C1356 bt/s */
L_0C7C135A: BLKS(0x0C7C135Au);
	r8 = 0x8000u; UPD(0x0C7C135Cu, 2);  /* 0C7C135A mov.l @(disp,pc),Rn */
	r0 = r5;  /* 0C7C135C mov Rm,Rn */
	r0 &= r11;  /* 0C7C135E and Rm,Rn */
	T = (r0 & r8) == 0;  /* 0C7C1360 tst Rm,Rn */
	if (!T) { UPD(0x0C7C13B6u, 6); goto L_0C7C13B6; }  /* 0C7C1362 bf */
L_0C7C1364: BLKS(0x0C7C1364u);
	T = (r3 & r3) == 0;  /* 0C7C1364 tst Rm,Rn */
	if (T) { UPD(0x0C7C13B6u, 4); goto L_0C7C13B6; }  /* 0C7C1366 bt */
L_0C7C1368: BLKS(0x0C7C1368u);
	T = (r2 & r2) == 0;  /* 0C7C1368 tst Rm,Rn */
	UPD(0x0C7C136Au, 1);
L_0C7C136A: BLKS(0x0C7C136Au);
	r0 = r4;  /* 0C7C136A mov Rm,Rn */
	r3 = 0xC7C429Cu; UPD(0x0C7C136Eu, 2);  /* 0C7C136C mov.l @(disp,pc),Rn */
	{ u32 c_ = T; r0 += r0; /* slot add Rm,Rn */ if (c_) { UPD(0x0C7C13DAu, 3); goto L_0C7C13DA; } goto L_0C7C1372; }  /* 0C7C136E bt/s */
L_0C7C1372: BLKS(0x0C7C1372u);
	IF(0x0C7C1372u); r8 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C7C1374u, 2);  /* 0C7C1372 mov.w @(r0,Rm),Rn */
	r9 = r8;  /* 0C7C1374 mov Rm,Rn */
	UPD(0x0C7C1376u, 1);
L_0C7C1376: BLKS(0x0C7C1376u);
	r2 = (u32)(s32)(s16)r10;  /* 0C7C1376 exts.w Rm,Rn */
	T = (s32)r2 > (s32)r9;  /* 0C7C1378 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C7C13B6u, 5); goto L_0C7C13B6; }  /* 0C7C137A bf */
L_0C7C137C: BLKS(0x0C7C137Cu);
	r7 += r8;  /* 0C7C137C add Rm,Rn */
	r8 = r7 & 0xFFFF;  /* 0C7C137E extu.w Rm,Rn */
	r7 = (u32)(s32)(s16)r7;  /* 0C7C1380 exts.w Rm,Rn */
	T = (s32)r2 >= (s32)r7;  /* 0C7C1382 cmp/ge Rm,Rn */
	{ u32 c_ = !T; IF(0x0C7C1386u); W16(r0 + r3, r2); /* slot mov.w Rm,@(r0,Rn) */ if (c_) { UPD(0x0C7C13F8u, 7); goto L_0C7C13F8; } UPD(0x0C7C1388u, 1); goto L_0C7C1388; }  /* 0C7C1384 bf/s */
L_0C7C1388: BLKS(0x0C7C1388u);
	r0 = 0x1000000u; UPD(0x0C7C138Au, 1);  /* 0C7C1388 mov.l @(disp,pc),Rn */
	r2 = 0x0u;  /* 0C7C138A mov #imm,Rn */
	W16(r6, r2); UPD(0x0C7C138Eu, 2);  /* 0C7C138C mov.w Rm,@Rn */
	T = (r11 & r0) == 0;  /* 0C7C138E tst Rm,Rn */
	if (T) { UPD(0x0C7C1398u, 4); goto L_0C7C1398; }  /* 0C7C1390 bt */
L_0C7C1392: BLKS(0x0C7C1392u);
	r2 = 0x4000000u; UPD(0x0C7C1394u, 1);  /* 0C7C1392 mov.l @(disp,pc),Rn */
	r5 |= r2;  /* 0C7C1394 or Rm,Rn */
	W32(r13, r5); UPD(0x0C7C1398u, 2);  /* 0C7C1396 mov.l Rm,@Rn */
L_0C7C1398: BLKS(0x0C7C1398u);
	r2 = 0xC26CD44u; UPD(0x0C7C139Au, 1);  /* 0C7C1398 mov.l @(disp,pc),Rn */
	r7 = 0x0u;  /* 0C7C139A mov #imm,Rn */
	r3 = 0xC1D97A8u; UPD(0x0C7C139Eu, 2);  /* 0C7C139C mov.l @(disp,pc),Rn */
	r6 = 0x0u;  /* 0C7C139E mov #imm,Rn */
	r1 += r2;  /* 0C7C13A0 add Rm,Rn */
	r1 = R32(r1); UPD(0x0C7C13A4u, 3);  /* 0C7C13A2 mov.l @Rm,Rn */
	IF(0x0C7C13A4u); r1 <<= 2;  /* 0C7C13A4 shll2 Rn */
	r1 += r3;  /* 0C7C13A6 add Rm,Rn */
	r0 = R32(r1); UPD(0x0C7C13AAu, 3);  /* 0C7C13A8 mov.l @Rm,Rn */
	IF(0x0C7C13AAu); { u32 t_ = r0; PR = 0x0C7C13AEu; IF(0x0C7C13ACu); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C7C13AEu); }  /* 0C7C13AA jsr @Rn */
L_0C7C13AE: BLKS(0x0C7C13AEu);
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C7C13B8u, 3); goto L_0C7C13B8; }  /* 0C7C13AE bra */
L_0C7C13B2: BLKS(0x0C7C13B2u);
	r1 = 0x0u;  /* 0C7C13B2 mov #imm,Rn */
	W32(r13, r1); UPD(0x0C7C13B6u, 2);  /* 0C7C13B4 mov.l Rm,@Rn */
L_0C7C13B6: BLKS(0x0C7C13B6u);
	r0 = 0x0u;  /* 0C7C13B6 mov #imm,Rn */
	UPD(0x0C7C13B8u, 1);
L_0C7C13B8: BLKS(0x0C7C13B8u);
	IF(0x0C7C13B8u); PR = R32(r15); r15 += 4; UPD(0x0C7C13BAu, 1);  /* 0C7C13B8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C7C13BCu, 1);  /* 0C7C13BA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C7C13BEu, 1);  /* 0C7C13BC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C7C13C0u, 1);  /* 0C7C13BE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C7C13C2u, 1);  /* 0C7C13C0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C13C4u, 1);  /* 0C7C13C2 mov.l @Rm+,Rn */
	IF(0x0C7C13C4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C7C13C4 rts */
L_0C7C13C8: BLKS(0x0C7C13C8u);
	r0 = 0xC0A0730u; UPD(0x0C7C13CAu, 1);  /* 0C7C13C8 mov.l @(disp,pc),Rn */
	IF(0x0C7C13CAu); PR = R32(r15); r15 += 4; UPD(0x0C7C13CCu, 1);  /* 0C7C13CA lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C7C13CEu, 1);  /* 0C7C13CC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C7C13D0u, 1);  /* 0C7C13CE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C7C13D2u, 1);  /* 0C7C13D0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C7C13D4u, 1);  /* 0C7C13D2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C13D6u, 1);  /* 0C7C13D4 mov.l @Rm+,Rn */
	IF(0x0C7C13D6u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A0730u: TAIL(f_0C0A0730); default: JUMPD(tv_); } }  /* 0C7C13D6 jmp @Rn */
L_0C7C13DA: BLKS(0x0C7C13DAu);
	IF(0x0C7C13DAu); W16(r0 + r3, r2); UPD(0x0C7C13DCu, 1);  /* 0C7C13DA mov.w Rm,@(r0,Rn) */
	r9 = 0x0u;  /* 0C7C13DC mov #imm,Rn */
	{ r8 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C7C1376u, 4); goto L_0C7C1376; }  /* 0C7C13DE bra */
L_0C7C13E2: BLKS(0x0C7C13E2u);
	r3 = 0x280u; UPD(0x0C7C13E4u, 1);  /* 0C7C13E2 mov.w @(disp,pc),Rn */
	MACL = (u32)((s32)(s16)r12 * (s32)(s16)r3);  /* 0C7C13E4 muls.w Rm,Rn */
	r3 = 0xC283A0Cu; UPD(0x0C7C13E8u, 3);  /* 0C7C13E6 mov.l @(disp,pc),Rn */
	IF(0x0C7C13E8u); r7 = MACL;  /* 0C7C13E8 sts macl,Rn */
	r7 += r3;  /* 0C7C13EA add Rm,Rn */
	r3 = 0xC26CD88u; UPD(0x0C7C13EEu, 3);  /* 0C7C13EC mov.l @(disp,pc),Rn */
	r7 = R32(r7); UPD(0x0C7C13F0u, 1);  /* 0C7C13EE mov.l @Rm,Rn */
	r3 += r1;  /* 0C7C13F0 add Rm,Rn */
	W32(r3, r7); UPD(0x0C7C13F4u, 2);  /* 0C7C13F2 mov.l Rm,@Rn */
	{ IF(0x0C7C13F6u); ; /* slot nop */ UPD(0x0C7C133Au, 3); goto L_0C7C133A; }  /* 0C7C13F4 bra */
L_0C7C13F8: BLKS(0x0C7C13F8u);
	r8 -= r10;  /* 0C7C13F8 sub Rm,Rn */
	W16(r6, r8); UPD(0x0C7C13FCu, 2);  /* 0C7C13FA mov.w Rm,@Rn */
	{ r0 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C7C13B8u, 3); goto L_0C7C13B8; }  /* 0C7C13FC bra */
}

/* arr_spawn_9460 */
void f_0C7C144C(sh3_t *c)
{
	LOCALS;
L_0C7C144C: BLKS(0x0C7C144Cu);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C7C144Eu, 1);  /* 0C7C144C mov.l Rm,@-Rn */
	r8 = r4;  /* 0C7C144E mov Rm,Rn */
	IF(0x0C7C1450u); r15 -= 4; W32(r15, PR); UPD(0x0C7C1452u, 2);  /* 0C7C1450 sts.l pr,@-Rn */
	r1 = 0xC21CA15u; UPD(0x0C7C1454u, 1);  /* 0C7C1452 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF4u;  /* 0C7C1454 add #imm,Rn */
	r4 = R32(r15 + 0x14u); UPD(0x0C7C1458u, 2);  /* 0C7C1456 mov.l @(disp,Rm),Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C145Au, 1);  /* 0C7C1458 mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C145A tst Rm,Rn */
	if (!T) { UPD(0x0C7C1482u, 4); goto L_0C7C1482; }  /* 0C7C145C bf */
L_0C7C145E: BLKS(0x0C7C145Eu);
	r1 = 0xC7C4298u; UPD(0x0C7C1460u, 1);  /* 0C7C145E mov.l @(disp,pc),Rn */
	r1 = R32(r1); UPD(0x0C7C1462u, 1);  /* 0C7C1460 mov.l @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C1462 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C7C1470u, 4); goto L_0C7C1470; } goto L_0C7C1468; }  /* 0C7C1464 bt/s */
L_0C7C1468: BLKS(0x0C7C1468u);
	r15 += 0xCu;  /* 0C7C1468 add #imm,Rn */
	IF(0x0C7C146Au); PR = R32(r15); r15 += 4; UPD(0x0C7C146Cu, 3);  /* 0C7C146A lds.l @Rn+,pr */
	IF(0x0C7C146Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C7C146C rts */
L_0C7C1470: BLKS(0x0C7C1470u);
	r0 = 0xC7C1088u; UPD(0x0C7C1472u, 1);  /* 0C7C1470 mov.l @(disp,pc),Rn */
	W32(r15 + 0x8u, r5); UPD(0x0C7C1474u, 1);  /* 0C7C1472 mov.l Rm,@(disp,Rn) */
	W32(r15 + 0x4u, r6); UPD(0x0C7C1476u, 1);  /* 0C7C1474 mov.l Rm,@(disp,Rn) */
	IF(0x0C7C1476u); { u32 t_ = r0; PR = 0x0C7C147Au; W32(r15, r7); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C7C1088, 0x0C7C1088u, 0x0C7C147Au); }  /* 0C7C1476 jsr @Rn */
L_0C7C147A: BLKS(0x0C7C147Au);
	r7 = R32(r15); UPD(0x0C7C147Cu, 1);  /* 0C7C147A mov.l @Rm,Rn */
	r4 = r0;  /* 0C7C147C mov Rm,Rn */
	r6 = R32(r15 + 0x4u); UPD(0x0C7C1480u, 2);  /* 0C7C147E mov.l @(disp,Rm),Rn */
	r5 = R32(r15 + 0x8u); UPD(0x0C7C1482u, 1);  /* 0C7C1480 mov.l @(disp,Rm),Rn */
L_0C7C1482: BLKS(0x0C7C1482u);
	r0 = 0xC0A9460u; UPD(0x0C7C1484u, 1);  /* 0C7C1482 mov.l @(disp,pc),Rn */
	W32(r15 + 0x14u, r4); UPD(0x0C7C1486u, 1);  /* 0C7C1484 mov.l Rm,@(disp,Rn) */
	r4 = r8;  /* 0C7C1486 mov Rm,Rn */
	r15 += 0xCu;  /* 0C7C1488 add #imm,Rn */
	IF(0x0C7C148Au); PR = R32(r15); r15 += 4; UPD(0x0C7C148Cu, 3);  /* 0C7C148A lds.l @Rn+,pr */
	IF(0x0C7C148Cu); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A9460u: TAIL(f_0C0A9460); default: JUMPD(tv_); } }  /* 0C7C148C jmp @Rn */
}

/* arr_spawn_92b0 */
void f_0C7C14A0(sh3_t *c)
{
	LOCALS;
L_0C7C14A0: BLKS(0x0C7C14A0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C7C14A2u, 1);  /* 0C7C14A0 mov.l Rm,@-Rn */
	r8 = r4;  /* 0C7C14A2 mov Rm,Rn */
	IF(0x0C7C14A4u); r15 -= 4; W32(r15, PR); UPD(0x0C7C14A6u, 2);  /* 0C7C14A4 sts.l pr,@-Rn */
	r1 = 0xC21CA15u; UPD(0x0C7C14A8u, 1);  /* 0C7C14A6 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF4u;  /* 0C7C14A8 add #imm,Rn */
	r4 = R32(r15 + 0x14u); UPD(0x0C7C14ACu, 2);  /* 0C7C14AA mov.l @(disp,Rm),Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C14AEu, 1);  /* 0C7C14AC mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C14AE tst Rm,Rn */
	if (!T) { UPD(0x0C7C14D6u, 4); goto L_0C7C14D6; }  /* 0C7C14B0 bf */
L_0C7C14B2: BLKS(0x0C7C14B2u);
	r1 = 0xC7C4298u; UPD(0x0C7C14B4u, 1);  /* 0C7C14B2 mov.l @(disp,pc),Rn */
	r1 = R32(r1); UPD(0x0C7C14B6u, 1);  /* 0C7C14B4 mov.l @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C14B6 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C7C14C4u, 4); goto L_0C7C14C4; } goto L_0C7C14BC; }  /* 0C7C14B8 bt/s */
L_0C7C14BC: BLKS(0x0C7C14BCu);
	r15 += 0xCu;  /* 0C7C14BC add #imm,Rn */
	IF(0x0C7C14BEu); PR = R32(r15); r15 += 4; UPD(0x0C7C14C0u, 3);  /* 0C7C14BE lds.l @Rn+,pr */
	IF(0x0C7C14C0u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C7C14C0 rts */
L_0C7C14C4: BLKS(0x0C7C14C4u);
	r0 = 0xC7C1088u; UPD(0x0C7C14C6u, 1);  /* 0C7C14C4 mov.l @(disp,pc),Rn */
	W32(r15 + 0x8u, r5); UPD(0x0C7C14C8u, 1);  /* 0C7C14C6 mov.l Rm,@(disp,Rn) */
	W32(r15 + 0x4u, r6); UPD(0x0C7C14CAu, 1);  /* 0C7C14C8 mov.l Rm,@(disp,Rn) */
	IF(0x0C7C14CAu); { u32 t_ = r0; PR = 0x0C7C14CEu; W32(r15, r7); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C7C1088, 0x0C7C1088u, 0x0C7C14CEu); }  /* 0C7C14CA jsr @Rn */
L_0C7C14CE: BLKS(0x0C7C14CEu);
	r7 = R32(r15); UPD(0x0C7C14D0u, 1);  /* 0C7C14CE mov.l @Rm,Rn */
	r4 = r0;  /* 0C7C14D0 mov Rm,Rn */
	r6 = R32(r15 + 0x4u); UPD(0x0C7C14D4u, 2);  /* 0C7C14D2 mov.l @(disp,Rm),Rn */
	r5 = R32(r15 + 0x8u); UPD(0x0C7C14D6u, 1);  /* 0C7C14D4 mov.l @(disp,Rm),Rn */
L_0C7C14D6: BLKS(0x0C7C14D6u);
	r0 = 0xC0A92B0u; UPD(0x0C7C14D8u, 1);  /* 0C7C14D6 mov.l @(disp,pc),Rn */
	W32(r15 + 0x14u, r4); UPD(0x0C7C14DAu, 1);  /* 0C7C14D8 mov.l Rm,@(disp,Rn) */
	r4 = r8;  /* 0C7C14DA mov Rm,Rn */
	r15 += 0xCu;  /* 0C7C14DC add #imm,Rn */
	IF(0x0C7C14DEu); PR = R32(r15); r15 += 4; UPD(0x0C7C14E0u, 3);  /* 0C7C14DE lds.l @Rn+,pr */
	IF(0x0C7C14E0u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A92B0u: TAIL(f_0C0A92B0); default: JUMPD(tv_); } }  /* 0C7C14E0 jmp @Rn */
}

/* arr_spawn_9060 */
void f_0C7C14F4(sh3_t *c)
{
	LOCALS;
L_0C7C14F4: BLKS(0x0C7C14F4u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C7C14F6u, 1);  /* 0C7C14F4 mov.l Rm,@-Rn */
	r8 = r4;  /* 0C7C14F6 mov Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C7C14FAu, 2);  /* 0C7C14F8 mov.l Rm,@-Rn */
	IF(0x0C7C14FAu); r15 -= 4; W32(r15, PR); UPD(0x0C7C14FCu, 1);  /* 0C7C14FA sts.l pr,@-Rn */
	r1 = 0xC21CA15u; UPD(0x0C7C14FEu, 1);  /* 0C7C14FC mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF4u;  /* 0C7C14FE add #imm,Rn */
	r4 = R32(r15 + 0x18u); UPD(0x0C7C1502u, 2);  /* 0C7C1500 mov.l @(disp,Rm),Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C1504u, 1);  /* 0C7C1502 mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C1504 tst Rm,Rn */
	{ u32 c_ = !T; r9 = R32(r15 + 0x1Cu); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C7C1530u, 4); goto L_0C7C1530; } UPD(0x0C7C150Au, 1); goto L_0C7C150A; }  /* 0C7C1506 bf/s */
L_0C7C150A: BLKS(0x0C7C150Au);
	r1 = 0xC7C4298u; UPD(0x0C7C150Cu, 1);  /* 0C7C150A mov.l @(disp,pc),Rn */
	r1 = R32(r1); UPD(0x0C7C150Eu, 1);  /* 0C7C150C mov.l @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C150E tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C7C151Eu, 4); goto L_0C7C151E; } goto L_0C7C1514; }  /* 0C7C1510 bt/s */
L_0C7C1514: BLKS(0x0C7C1514u);
	r15 += 0xCu;  /* 0C7C1514 add #imm,Rn */
	IF(0x0C7C1516u); PR = R32(r15); r15 += 4; UPD(0x0C7C1518u, 3);  /* 0C7C1516 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C151Au, 1);  /* 0C7C1518 mov.l @Rm+,Rn */
	IF(0x0C7C151Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C7C151A rts */
L_0C7C151E: BLKS(0x0C7C151Eu);
	r0 = 0xC7C1088u; UPD(0x0C7C1520u, 1);  /* 0C7C151E mov.l @(disp,pc),Rn */
	W32(r15 + 0x8u, r5); UPD(0x0C7C1522u, 1);  /* 0C7C1520 mov.l Rm,@(disp,Rn) */
	W32(r15 + 0x4u, r6); UPD(0x0C7C1524u, 1);  /* 0C7C1522 mov.l Rm,@(disp,Rn) */
	IF(0x0C7C1524u); { u32 t_ = r0; PR = 0x0C7C1528u; W32(r15, r7); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C7C1088, 0x0C7C1088u, 0x0C7C1528u); }  /* 0C7C1524 jsr @Rn */
L_0C7C1528: BLKS(0x0C7C1528u);
	r7 = R32(r15); UPD(0x0C7C152Au, 1);  /* 0C7C1528 mov.l @Rm,Rn */
	r4 = r0;  /* 0C7C152A mov Rm,Rn */
	r6 = R32(r15 + 0x4u); UPD(0x0C7C152Eu, 2);  /* 0C7C152C mov.l @(disp,Rm),Rn */
	r5 = R32(r15 + 0x8u); UPD(0x0C7C1530u, 1);  /* 0C7C152E mov.l @(disp,Rm),Rn */
L_0C7C1530: BLKS(0x0C7C1530u);
	r0 = 0xC0A9060u; UPD(0x0C7C1532u, 1);  /* 0C7C1530 mov.l @(disp,pc),Rn */
	W32(r15 + 0x18u, r4); UPD(0x0C7C1534u, 1);  /* 0C7C1532 mov.l Rm,@(disp,Rn) */
	r4 = r8;  /* 0C7C1534 mov Rm,Rn */
	W32(r15 + 0x1Cu, r9); UPD(0x0C7C1538u, 2);  /* 0C7C1536 mov.l Rm,@(disp,Rn) */
	r15 += 0xCu;  /* 0C7C1538 add #imm,Rn */
	IF(0x0C7C153Au); PR = R32(r15); r15 += 4; UPD(0x0C7C153Cu, 2);  /* 0C7C153A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C153Eu, 1);  /* 0C7C153C mov.l @Rm+,Rn */
	IF(0x0C7C153Eu); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A9060u: TAIL(f_0C0A9060); default: JUMPD(tv_); } }  /* 0C7C153E jmp @Rn */
}

/* arr_spawn_8e70 */
void f_0C7C1554(sh3_t *c)
{
	LOCALS;
L_0C7C1554: BLKS(0x0C7C1554u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C7C1556u, 1);  /* 0C7C1554 mov.l Rm,@-Rn */
	r8 = r4;  /* 0C7C1556 mov Rm,Rn */
	IF(0x0C7C1558u); r15 -= 4; W32(r15, PR); UPD(0x0C7C155Au, 2);  /* 0C7C1558 sts.l pr,@-Rn */
	r1 = 0xC21CA15u; UPD(0x0C7C155Cu, 1);  /* 0C7C155A mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF4u;  /* 0C7C155C add #imm,Rn */
	r4 = R32(r15 + 0x14u); UPD(0x0C7C1560u, 2);  /* 0C7C155E mov.l @(disp,Rm),Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C1562u, 1);  /* 0C7C1560 mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C1562 tst Rm,Rn */
	if (!T) { UPD(0x0C7C158Au, 4); goto L_0C7C158A; }  /* 0C7C1564 bf */
L_0C7C1566: BLKS(0x0C7C1566u);
	r1 = 0xC7C4298u; UPD(0x0C7C1568u, 1);  /* 0C7C1566 mov.l @(disp,pc),Rn */
	r1 = R32(r1); UPD(0x0C7C156Au, 1);  /* 0C7C1568 mov.l @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C156A tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C7C1578u, 4); goto L_0C7C1578; } goto L_0C7C1570; }  /* 0C7C156C bt/s */
L_0C7C1570: BLKS(0x0C7C1570u);
	r15 += 0xCu;  /* 0C7C1570 add #imm,Rn */
	IF(0x0C7C1572u); PR = R32(r15); r15 += 4; UPD(0x0C7C1574u, 3);  /* 0C7C1572 lds.l @Rn+,pr */
	IF(0x0C7C1574u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C7C1574 rts */
L_0C7C1578: BLKS(0x0C7C1578u);
	r0 = 0xC7C1088u; UPD(0x0C7C157Au, 1);  /* 0C7C1578 mov.l @(disp,pc),Rn */
	W32(r15 + 0x8u, r5); UPD(0x0C7C157Cu, 1);  /* 0C7C157A mov.l Rm,@(disp,Rn) */
	W32(r15 + 0x4u, r6); UPD(0x0C7C157Eu, 1);  /* 0C7C157C mov.l Rm,@(disp,Rn) */
	IF(0x0C7C157Eu); { u32 t_ = r0; PR = 0x0C7C1582u; W32(r15, r7); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C7C1088, 0x0C7C1088u, 0x0C7C1582u); }  /* 0C7C157E jsr @Rn */
L_0C7C1582: BLKS(0x0C7C1582u);
	r7 = R32(r15); UPD(0x0C7C1584u, 1);  /* 0C7C1582 mov.l @Rm,Rn */
	r4 = r0;  /* 0C7C1584 mov Rm,Rn */
	r6 = R32(r15 + 0x4u); UPD(0x0C7C1588u, 2);  /* 0C7C1586 mov.l @(disp,Rm),Rn */
	r5 = R32(r15 + 0x8u); UPD(0x0C7C158Au, 1);  /* 0C7C1588 mov.l @(disp,Rm),Rn */
L_0C7C158A: BLKS(0x0C7C158Au);
	r0 = 0xC0A8E70u; UPD(0x0C7C158Cu, 1);  /* 0C7C158A mov.l @(disp,pc),Rn */
	W32(r15 + 0x14u, r4); UPD(0x0C7C158Eu, 1);  /* 0C7C158C mov.l Rm,@(disp,Rn) */
	r4 = r8;  /* 0C7C158E mov Rm,Rn */
	r15 += 0xCu;  /* 0C7C1590 add #imm,Rn */
	IF(0x0C7C1592u); PR = R32(r15); r15 += 4; UPD(0x0C7C1594u, 3);  /* 0C7C1592 lds.l @Rn+,pr */
	IF(0x0C7C1594u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A8E70u: TAIL(f_0C0A8E70); default: JUMPD(tv_); } }  /* 0C7C1594 jmp @Rn */
}

/* arr_spawn_8c30 */
void f_0C7C15A8(sh3_t *c)
{
	LOCALS;
L_0C7C15A8: BLKS(0x0C7C15A8u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C7C15AAu, 1);  /* 0C7C15A8 mov.l Rm,@-Rn */
	r8 = r4;  /* 0C7C15AA mov Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C7C15AEu, 2);  /* 0C7C15AC mov.l Rm,@-Rn */
	IF(0x0C7C15AEu); r15 -= 4; W32(r15, PR); UPD(0x0C7C15B0u, 1);  /* 0C7C15AE sts.l pr,@-Rn */
	r1 = 0xC21CA15u; UPD(0x0C7C15B2u, 1);  /* 0C7C15B0 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF4u;  /* 0C7C15B2 add #imm,Rn */
	r4 = R32(r15 + 0x18u); UPD(0x0C7C15B6u, 2);  /* 0C7C15B4 mov.l @(disp,Rm),Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C15B8u, 1);  /* 0C7C15B6 mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C15B8 tst Rm,Rn */
	{ u32 c_ = !T; r9 = R32(r15 + 0x1Cu); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C7C15E4u, 4); goto L_0C7C15E4; } UPD(0x0C7C15BEu, 1); goto L_0C7C15BE; }  /* 0C7C15BA bf/s */
L_0C7C15BE: BLKS(0x0C7C15BEu);
	r1 = 0xC7C4298u; UPD(0x0C7C15C0u, 1);  /* 0C7C15BE mov.l @(disp,pc),Rn */
	r1 = R32(r1); UPD(0x0C7C15C2u, 1);  /* 0C7C15C0 mov.l @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C15C2 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C7C15D2u, 4); goto L_0C7C15D2; } goto L_0C7C15C8; }  /* 0C7C15C4 bt/s */
L_0C7C15C8: BLKS(0x0C7C15C8u);
	r15 += 0xCu;  /* 0C7C15C8 add #imm,Rn */
	IF(0x0C7C15CAu); PR = R32(r15); r15 += 4; UPD(0x0C7C15CCu, 3);  /* 0C7C15CA lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C15CEu, 1);  /* 0C7C15CC mov.l @Rm+,Rn */
	IF(0x0C7C15CEu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C7C15CE rts */
L_0C7C15D2: BLKS(0x0C7C15D2u);
	r0 = 0xC7C1088u; UPD(0x0C7C15D4u, 1);  /* 0C7C15D2 mov.l @(disp,pc),Rn */
	W32(r15 + 0x8u, r5); UPD(0x0C7C15D6u, 1);  /* 0C7C15D4 mov.l Rm,@(disp,Rn) */
	W32(r15 + 0x4u, r6); UPD(0x0C7C15D8u, 1);  /* 0C7C15D6 mov.l Rm,@(disp,Rn) */
	IF(0x0C7C15D8u); { u32 t_ = r0; PR = 0x0C7C15DCu; W32(r15, r7); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C7C1088, 0x0C7C1088u, 0x0C7C15DCu); }  /* 0C7C15D8 jsr @Rn */
L_0C7C15DC: BLKS(0x0C7C15DCu);
	r7 = R32(r15); UPD(0x0C7C15DEu, 1);  /* 0C7C15DC mov.l @Rm,Rn */
	r4 = r0;  /* 0C7C15DE mov Rm,Rn */
	r6 = R32(r15 + 0x4u); UPD(0x0C7C15E2u, 2);  /* 0C7C15E0 mov.l @(disp,Rm),Rn */
	r5 = R32(r15 + 0x8u); UPD(0x0C7C15E4u, 1);  /* 0C7C15E2 mov.l @(disp,Rm),Rn */
L_0C7C15E4: BLKS(0x0C7C15E4u);
	r0 = 0xC0A8C30u; UPD(0x0C7C15E6u, 1);  /* 0C7C15E4 mov.l @(disp,pc),Rn */
	W32(r15 + 0x18u, r4); UPD(0x0C7C15E8u, 1);  /* 0C7C15E6 mov.l Rm,@(disp,Rn) */
	r4 = r8;  /* 0C7C15E8 mov Rm,Rn */
	W32(r15 + 0x1Cu, r9); UPD(0x0C7C15ECu, 2);  /* 0C7C15EA mov.l Rm,@(disp,Rn) */
	r15 += 0xCu;  /* 0C7C15EC add #imm,Rn */
	IF(0x0C7C15EEu); PR = R32(r15); r15 += 4; UPD(0x0C7C15F0u, 2);  /* 0C7C15EE lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C15F2u, 1);  /* 0C7C15F0 mov.l @Rm+,Rn */
	IF(0x0C7C15F2u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A8C30u: TAIL(f_0C0A8C30); default: JUMPD(tv_); } }  /* 0C7C15F2 jmp @Rn */
}

/* arr_spawn_8a50 */
void f_0C7C1608(sh3_t *c)
{
	LOCALS;
L_0C7C1608: BLKS(0x0C7C1608u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C7C160Au, 1);  /* 0C7C1608 mov.l Rm,@-Rn */
	r8 = r4;  /* 0C7C160A mov Rm,Rn */
	IF(0x0C7C160Cu); r15 -= 4; W32(r15, PR); UPD(0x0C7C160Eu, 2);  /* 0C7C160C sts.l pr,@-Rn */
	r1 = 0xC21CA15u; UPD(0x0C7C1610u, 1);  /* 0C7C160E mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF4u;  /* 0C7C1610 add #imm,Rn */
	r4 = R32(r15 + 0x14u); UPD(0x0C7C1614u, 2);  /* 0C7C1612 mov.l @(disp,Rm),Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C1616u, 1);  /* 0C7C1614 mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C1616 tst Rm,Rn */
	if (!T) { UPD(0x0C7C163Eu, 4); goto L_0C7C163E; }  /* 0C7C1618 bf */
L_0C7C161A: BLKS(0x0C7C161Au);
	r1 = 0xC7C4298u; UPD(0x0C7C161Cu, 1);  /* 0C7C161A mov.l @(disp,pc),Rn */
	r1 = R32(r1); UPD(0x0C7C161Eu, 1);  /* 0C7C161C mov.l @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C161E tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C7C162Cu, 4); goto L_0C7C162C; } goto L_0C7C1624; }  /* 0C7C1620 bt/s */
L_0C7C1624: BLKS(0x0C7C1624u);
	r15 += 0xCu;  /* 0C7C1624 add #imm,Rn */
	IF(0x0C7C1626u); PR = R32(r15); r15 += 4; UPD(0x0C7C1628u, 3);  /* 0C7C1626 lds.l @Rn+,pr */
	IF(0x0C7C1628u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C7C1628 rts */
L_0C7C162C: BLKS(0x0C7C162Cu);
	r0 = 0xC7C1088u; UPD(0x0C7C162Eu, 1);  /* 0C7C162C mov.l @(disp,pc),Rn */
	W32(r15 + 0x8u, r5); UPD(0x0C7C1630u, 1);  /* 0C7C162E mov.l Rm,@(disp,Rn) */
	W32(r15 + 0x4u, r6); UPD(0x0C7C1632u, 1);  /* 0C7C1630 mov.l Rm,@(disp,Rn) */
	IF(0x0C7C1632u); { u32 t_ = r0; PR = 0x0C7C1636u; W32(r15, r7); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C7C1088, 0x0C7C1088u, 0x0C7C1636u); }  /* 0C7C1632 jsr @Rn */
L_0C7C1636: BLKS(0x0C7C1636u);
	r7 = R32(r15); UPD(0x0C7C1638u, 1);  /* 0C7C1636 mov.l @Rm,Rn */
	r4 = r0;  /* 0C7C1638 mov Rm,Rn */
	r6 = R32(r15 + 0x4u); UPD(0x0C7C163Cu, 2);  /* 0C7C163A mov.l @(disp,Rm),Rn */
	r5 = R32(r15 + 0x8u); UPD(0x0C7C163Eu, 1);  /* 0C7C163C mov.l @(disp,Rm),Rn */
L_0C7C163E: BLKS(0x0C7C163Eu);
	r0 = 0xC0A8A50u; UPD(0x0C7C1640u, 1);  /* 0C7C163E mov.l @(disp,pc),Rn */
	W32(r15 + 0x14u, r4); UPD(0x0C7C1642u, 1);  /* 0C7C1640 mov.l Rm,@(disp,Rn) */
	r4 = r8;  /* 0C7C1642 mov Rm,Rn */
	r15 += 0xCu;  /* 0C7C1644 add #imm,Rn */
	IF(0x0C7C1646u); PR = R32(r15); r15 += 4; UPD(0x0C7C1648u, 3);  /* 0C7C1646 lds.l @Rn+,pr */
	IF(0x0C7C1648u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A8A50u: TAIL(f_0C0A8A50); default: JUMPD(tv_); } }  /* 0C7C1648 jmp @Rn */
}

/* arr_spawn_8850 */
void f_0C7C165C(sh3_t *c)
{
	LOCALS;
L_0C7C165C: BLKS(0x0C7C165Cu);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C7C165Eu, 1);  /* 0C7C165C mov.l Rm,@-Rn */
	r8 = r4;  /* 0C7C165E mov Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C7C1662u, 2);  /* 0C7C1660 mov.l Rm,@-Rn */
	IF(0x0C7C1662u); r15 -= 4; W32(r15, PR); UPD(0x0C7C1664u, 1);  /* 0C7C1662 sts.l pr,@-Rn */
	r1 = 0xC21CA15u; UPD(0x0C7C1666u, 1);  /* 0C7C1664 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF4u;  /* 0C7C1666 add #imm,Rn */
	r4 = R32(r15 + 0x18u); UPD(0x0C7C166Au, 2);  /* 0C7C1668 mov.l @(disp,Rm),Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C166Cu, 1);  /* 0C7C166A mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C166C tst Rm,Rn */
	{ u32 c_ = !T; r9 = R32(r15 + 0x1Cu); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C7C1698u, 4); goto L_0C7C1698; } UPD(0x0C7C1672u, 1); goto L_0C7C1672; }  /* 0C7C166E bf/s */
L_0C7C1672: BLKS(0x0C7C1672u);
	r1 = 0xC7C4298u; UPD(0x0C7C1674u, 1);  /* 0C7C1672 mov.l @(disp,pc),Rn */
	r1 = R32(r1); UPD(0x0C7C1676u, 1);  /* 0C7C1674 mov.l @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C1676 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C7C1686u, 4); goto L_0C7C1686; } goto L_0C7C167C; }  /* 0C7C1678 bt/s */
L_0C7C167C: BLKS(0x0C7C167Cu);
	r15 += 0xCu;  /* 0C7C167C add #imm,Rn */
	IF(0x0C7C167Eu); PR = R32(r15); r15 += 4; UPD(0x0C7C1680u, 3);  /* 0C7C167E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C1682u, 1);  /* 0C7C1680 mov.l @Rm+,Rn */
	IF(0x0C7C1682u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C7C1682 rts */
L_0C7C1686: BLKS(0x0C7C1686u);
	r0 = 0xC7C1088u; UPD(0x0C7C1688u, 1);  /* 0C7C1686 mov.l @(disp,pc),Rn */
	W32(r15 + 0x8u, r5); UPD(0x0C7C168Au, 1);  /* 0C7C1688 mov.l Rm,@(disp,Rn) */
	W32(r15 + 0x4u, r6); UPD(0x0C7C168Cu, 1);  /* 0C7C168A mov.l Rm,@(disp,Rn) */
	IF(0x0C7C168Cu); { u32 t_ = r0; PR = 0x0C7C1690u; W32(r15, r7); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C7C1088, 0x0C7C1088u, 0x0C7C1690u); }  /* 0C7C168C jsr @Rn */
L_0C7C1690: BLKS(0x0C7C1690u);
	r7 = R32(r15); UPD(0x0C7C1692u, 1);  /* 0C7C1690 mov.l @Rm,Rn */
	r4 = r0;  /* 0C7C1692 mov Rm,Rn */
	r6 = R32(r15 + 0x4u); UPD(0x0C7C1696u, 2);  /* 0C7C1694 mov.l @(disp,Rm),Rn */
	r5 = R32(r15 + 0x8u); UPD(0x0C7C1698u, 1);  /* 0C7C1696 mov.l @(disp,Rm),Rn */
L_0C7C1698: BLKS(0x0C7C1698u);
	r0 = 0xC0A8850u; UPD(0x0C7C169Au, 1);  /* 0C7C1698 mov.l @(disp,pc),Rn */
	W32(r15 + 0x18u, r4); UPD(0x0C7C169Cu, 1);  /* 0C7C169A mov.l Rm,@(disp,Rn) */
	r4 = r8;  /* 0C7C169C mov Rm,Rn */
	W32(r15 + 0x1Cu, r9); UPD(0x0C7C16A0u, 2);  /* 0C7C169E mov.l Rm,@(disp,Rn) */
	r15 += 0xCu;  /* 0C7C16A0 add #imm,Rn */
	IF(0x0C7C16A2u); PR = R32(r15); r15 += 4; UPD(0x0C7C16A4u, 2);  /* 0C7C16A2 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C16A6u, 1);  /* 0C7C16A4 mov.l @Rm+,Rn */
	IF(0x0C7C16A6u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A8850u: TAIL(f_0C0A8850); default: JUMPD(tv_); } }  /* 0C7C16A6 jmp @Rn */
}

/* arr_spawn_8510 */
void f_0C7C16BC(sh3_t *c)
{
	LOCALS;
L_0C7C16BC: BLKS(0x0C7C16BCu);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C7C16BEu, 1);  /* 0C7C16BC mov.l Rm,@-Rn */
	r8 = r4;  /* 0C7C16BE mov Rm,Rn */
	IF(0x0C7C16C0u); r15 -= 4; W32(r15, PR); UPD(0x0C7C16C2u, 2);  /* 0C7C16C0 sts.l pr,@-Rn */
	r1 = 0xC21CA15u; UPD(0x0C7C16C4u, 1);  /* 0C7C16C2 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF4u;  /* 0C7C16C4 add #imm,Rn */
	r4 = R32(r15 + 0x14u); UPD(0x0C7C16C8u, 2);  /* 0C7C16C6 mov.l @(disp,Rm),Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C16CAu, 1);  /* 0C7C16C8 mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C16CA tst Rm,Rn */
	if (!T) { UPD(0x0C7C16F2u, 4); goto L_0C7C16F2; }  /* 0C7C16CC bf */
L_0C7C16CE: BLKS(0x0C7C16CEu);
	r1 = 0xC7C4298u; UPD(0x0C7C16D0u, 1);  /* 0C7C16CE mov.l @(disp,pc),Rn */
	r1 = R32(r1); UPD(0x0C7C16D2u, 1);  /* 0C7C16D0 mov.l @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C16D2 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C7C16E0u, 4); goto L_0C7C16E0; } goto L_0C7C16D8; }  /* 0C7C16D4 bt/s */
L_0C7C16D8: BLKS(0x0C7C16D8u);
	r15 += 0xCu;  /* 0C7C16D8 add #imm,Rn */
	IF(0x0C7C16DAu); PR = R32(r15); r15 += 4; UPD(0x0C7C16DCu, 3);  /* 0C7C16DA lds.l @Rn+,pr */
	IF(0x0C7C16DCu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C7C16DC rts */
L_0C7C16E0: BLKS(0x0C7C16E0u);
	r0 = 0xC7C1088u; UPD(0x0C7C16E2u, 1);  /* 0C7C16E0 mov.l @(disp,pc),Rn */
	W32(r15 + 0x8u, r5); UPD(0x0C7C16E4u, 1);  /* 0C7C16E2 mov.l Rm,@(disp,Rn) */
	W32(r15 + 0x4u, r6); UPD(0x0C7C16E6u, 1);  /* 0C7C16E4 mov.l Rm,@(disp,Rn) */
	IF(0x0C7C16E6u); { u32 t_ = r0; PR = 0x0C7C16EAu; W32(r15, r7); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C7C1088, 0x0C7C1088u, 0x0C7C16EAu); }  /* 0C7C16E6 jsr @Rn */
L_0C7C16EA: BLKS(0x0C7C16EAu);
	r7 = R32(r15); UPD(0x0C7C16ECu, 1);  /* 0C7C16EA mov.l @Rm,Rn */
	r4 = r0;  /* 0C7C16EC mov Rm,Rn */
	r6 = R32(r15 + 0x4u); UPD(0x0C7C16F0u, 2);  /* 0C7C16EE mov.l @(disp,Rm),Rn */
	r5 = R32(r15 + 0x8u); UPD(0x0C7C16F2u, 1);  /* 0C7C16F0 mov.l @(disp,Rm),Rn */
L_0C7C16F2: BLKS(0x0C7C16F2u);
	r0 = 0xC0A8510u; UPD(0x0C7C16F4u, 1);  /* 0C7C16F2 mov.l @(disp,pc),Rn */
	W32(r15 + 0x14u, r4); UPD(0x0C7C16F6u, 1);  /* 0C7C16F4 mov.l Rm,@(disp,Rn) */
	r4 = r8;  /* 0C7C16F6 mov Rm,Rn */
	r15 += 0xCu;  /* 0C7C16F8 add #imm,Rn */
	IF(0x0C7C16FAu); PR = R32(r15); r15 += 4; UPD(0x0C7C16FCu, 3);  /* 0C7C16FA lds.l @Rn+,pr */
	IF(0x0C7C16FCu); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A8510u: TAIL(f_0C0A8510); default: JUMPD(tv_); } }  /* 0C7C16FC jmp @Rn */
}

/* arr_spawn_8690 */
void f_0C7C1710(sh3_t *c)
{
	LOCALS;
L_0C7C1710: BLKS(0x0C7C1710u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C7C1712u, 1);  /* 0C7C1710 mov.l Rm,@-Rn */
	r8 = r4;  /* 0C7C1712 mov Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C7C1716u, 2);  /* 0C7C1714 mov.l Rm,@-Rn */
	IF(0x0C7C1716u); r15 -= 4; W32(r15, PR); UPD(0x0C7C1718u, 1);  /* 0C7C1716 sts.l pr,@-Rn */
	r1 = 0xC21CA15u; UPD(0x0C7C171Au, 1);  /* 0C7C1718 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF4u;  /* 0C7C171A add #imm,Rn */
	r4 = R32(r15 + 0x18u); UPD(0x0C7C171Eu, 2);  /* 0C7C171C mov.l @(disp,Rm),Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C1720u, 1);  /* 0C7C171E mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C1720 tst Rm,Rn */
	{ u32 c_ = !T; r9 = R32(r15 + 0x1Cu); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C7C174Cu, 4); goto L_0C7C174C; } UPD(0x0C7C1726u, 1); goto L_0C7C1726; }  /* 0C7C1722 bf/s */
L_0C7C1726: BLKS(0x0C7C1726u);
	r1 = 0xC7C4298u; UPD(0x0C7C1728u, 1);  /* 0C7C1726 mov.l @(disp,pc),Rn */
	r1 = R32(r1); UPD(0x0C7C172Au, 1);  /* 0C7C1728 mov.l @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C172A tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C7C173Au, 4); goto L_0C7C173A; } goto L_0C7C1730; }  /* 0C7C172C bt/s */
L_0C7C1730: BLKS(0x0C7C1730u);
	r15 += 0xCu;  /* 0C7C1730 add #imm,Rn */
	IF(0x0C7C1732u); PR = R32(r15); r15 += 4; UPD(0x0C7C1734u, 3);  /* 0C7C1732 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C1736u, 1);  /* 0C7C1734 mov.l @Rm+,Rn */
	IF(0x0C7C1736u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C7C1736 rts */
L_0C7C173A: BLKS(0x0C7C173Au);
	r0 = 0xC7C1088u; UPD(0x0C7C173Cu, 1);  /* 0C7C173A mov.l @(disp,pc),Rn */
	W32(r15 + 0x8u, r5); UPD(0x0C7C173Eu, 1);  /* 0C7C173C mov.l Rm,@(disp,Rn) */
	W32(r15 + 0x4u, r6); UPD(0x0C7C1740u, 1);  /* 0C7C173E mov.l Rm,@(disp,Rn) */
	IF(0x0C7C1740u); { u32 t_ = r0; PR = 0x0C7C1744u; W32(r15, r7); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C7C1088, 0x0C7C1088u, 0x0C7C1744u); }  /* 0C7C1740 jsr @Rn */
L_0C7C1744: BLKS(0x0C7C1744u);
	r7 = R32(r15); UPD(0x0C7C1746u, 1);  /* 0C7C1744 mov.l @Rm,Rn */
	r4 = r0;  /* 0C7C1746 mov Rm,Rn */
	r6 = R32(r15 + 0x4u); UPD(0x0C7C174Au, 2);  /* 0C7C1748 mov.l @(disp,Rm),Rn */
	r5 = R32(r15 + 0x8u); UPD(0x0C7C174Cu, 1);  /* 0C7C174A mov.l @(disp,Rm),Rn */
L_0C7C174C: BLKS(0x0C7C174Cu);
	r0 = 0xC0A8690u; UPD(0x0C7C174Eu, 1);  /* 0C7C174C mov.l @(disp,pc),Rn */
	W32(r15 + 0x18u, r4); UPD(0x0C7C1750u, 1);  /* 0C7C174E mov.l Rm,@(disp,Rn) */
	r4 = r8;  /* 0C7C1750 mov Rm,Rn */
	W32(r15 + 0x1Cu, r9); UPD(0x0C7C1754u, 2);  /* 0C7C1752 mov.l Rm,@(disp,Rn) */
	r15 += 0xCu;  /* 0C7C1754 add #imm,Rn */
	IF(0x0C7C1756u); PR = R32(r15); r15 += 4; UPD(0x0C7C1758u, 2);  /* 0C7C1756 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C175Au, 1);  /* 0C7C1758 mov.l @Rm+,Rn */
	IF(0x0C7C175Au); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A8690u: TAIL(f_0C0A8690); default: JUMPD(tv_); } }  /* 0C7C175A jmp @Rn */
}

/* arr_spawn_8340 */
void f_0C7C1770(sh3_t *c)
{
	LOCALS;
L_0C7C1770: BLKS(0x0C7C1770u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C7C1772u, 1);  /* 0C7C1770 mov.l Rm,@-Rn */
	r8 = r4;  /* 0C7C1772 mov Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C7C1776u, 2);  /* 0C7C1774 mov.l Rm,@-Rn */
	IF(0x0C7C1776u); r15 -= 4; W32(r15, PR); UPD(0x0C7C1778u, 1);  /* 0C7C1776 sts.l pr,@-Rn */
	r1 = 0xC21CA15u; UPD(0x0C7C177Au, 1);  /* 0C7C1778 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF4u;  /* 0C7C177A add #imm,Rn */
	r4 = R32(r15 + 0x18u); UPD(0x0C7C177Eu, 2);  /* 0C7C177C mov.l @(disp,Rm),Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C1780u, 1);  /* 0C7C177E mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C1780 tst Rm,Rn */
	{ u32 c_ = !T; r9 = R32(r15 + 0x1Cu); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C7C17ACu, 4); goto L_0C7C17AC; } UPD(0x0C7C1786u, 1); goto L_0C7C1786; }  /* 0C7C1782 bf/s */
L_0C7C1786: BLKS(0x0C7C1786u);
	r1 = 0xC7C4298u; UPD(0x0C7C1788u, 1);  /* 0C7C1786 mov.l @(disp,pc),Rn */
	r1 = R32(r1); UPD(0x0C7C178Au, 1);  /* 0C7C1788 mov.l @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C178A tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C7C179Au, 4); goto L_0C7C179A; } goto L_0C7C1790; }  /* 0C7C178C bt/s */
L_0C7C1790: BLKS(0x0C7C1790u);
	r15 += 0xCu;  /* 0C7C1790 add #imm,Rn */
	IF(0x0C7C1792u); PR = R32(r15); r15 += 4; UPD(0x0C7C1794u, 3);  /* 0C7C1792 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C1796u, 1);  /* 0C7C1794 mov.l @Rm+,Rn */
	IF(0x0C7C1796u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C7C1796 rts */
L_0C7C179A: BLKS(0x0C7C179Au);
	r0 = 0xC7C1088u; UPD(0x0C7C179Cu, 1);  /* 0C7C179A mov.l @(disp,pc),Rn */
	W32(r15 + 0x8u, r5); UPD(0x0C7C179Eu, 1);  /* 0C7C179C mov.l Rm,@(disp,Rn) */
	W32(r15 + 0x4u, r6); UPD(0x0C7C17A0u, 1);  /* 0C7C179E mov.l Rm,@(disp,Rn) */
	IF(0x0C7C17A0u); { u32 t_ = r0; PR = 0x0C7C17A4u; W32(r15, r7); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C7C1088, 0x0C7C1088u, 0x0C7C17A4u); }  /* 0C7C17A0 jsr @Rn */
L_0C7C17A4: BLKS(0x0C7C17A4u);
	r7 = R32(r15); UPD(0x0C7C17A6u, 1);  /* 0C7C17A4 mov.l @Rm,Rn */
	r4 = r0;  /* 0C7C17A6 mov Rm,Rn */
	r6 = R32(r15 + 0x4u); UPD(0x0C7C17AAu, 2);  /* 0C7C17A8 mov.l @(disp,Rm),Rn */
	r5 = R32(r15 + 0x8u); UPD(0x0C7C17ACu, 1);  /* 0C7C17AA mov.l @(disp,Rm),Rn */
L_0C7C17AC: BLKS(0x0C7C17ACu);
	r0 = 0xC0A8340u; UPD(0x0C7C17AEu, 1);  /* 0C7C17AC mov.l @(disp,pc),Rn */
	W32(r15 + 0x18u, r4); UPD(0x0C7C17B0u, 1);  /* 0C7C17AE mov.l Rm,@(disp,Rn) */
	r4 = r8;  /* 0C7C17B0 mov Rm,Rn */
	W32(r15 + 0x1Cu, r9); UPD(0x0C7C17B4u, 2);  /* 0C7C17B2 mov.l Rm,@(disp,Rn) */
	r15 += 0xCu;  /* 0C7C17B4 add #imm,Rn */
	IF(0x0C7C17B6u); PR = R32(r15); r15 += 4; UPD(0x0C7C17B8u, 2);  /* 0C7C17B6 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C17BAu, 1);  /* 0C7C17B8 mov.l @Rm+,Rn */
	IF(0x0C7C17BAu); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A8340u: TAIL(f_0C0A8340); default: JUMPD(tv_); } }  /* 0C7C17BA jmp @Rn */
}

/* arr_spawn_81b0 */
void f_0C7C17D0(sh3_t *c)
{
	LOCALS;
L_0C7C17D0: BLKS(0x0C7C17D0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C7C17D2u, 1);  /* 0C7C17D0 mov.l Rm,@-Rn */
	r8 = r4;  /* 0C7C17D2 mov Rm,Rn */
	IF(0x0C7C17D4u); r15 -= 4; W32(r15, PR); UPD(0x0C7C17D6u, 2);  /* 0C7C17D4 sts.l pr,@-Rn */
	r1 = 0xC21CA15u; UPD(0x0C7C17D8u, 1);  /* 0C7C17D6 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF4u;  /* 0C7C17D8 add #imm,Rn */
	r4 = R32(r15 + 0x14u); UPD(0x0C7C17DCu, 2);  /* 0C7C17DA mov.l @(disp,Rm),Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C17DEu, 1);  /* 0C7C17DC mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C17DE tst Rm,Rn */
	if (!T) { UPD(0x0C7C1806u, 4); goto L_0C7C1806; }  /* 0C7C17E0 bf */
L_0C7C17E2: BLKS(0x0C7C17E2u);
	r1 = 0xC7C4298u; UPD(0x0C7C17E4u, 1);  /* 0C7C17E2 mov.l @(disp,pc),Rn */
	r1 = R32(r1); UPD(0x0C7C17E6u, 1);  /* 0C7C17E4 mov.l @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C17E6 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C7C17F4u, 4); goto L_0C7C17F4; } goto L_0C7C17EC; }  /* 0C7C17E8 bt/s */
L_0C7C17EC: BLKS(0x0C7C17ECu);
	r15 += 0xCu;  /* 0C7C17EC add #imm,Rn */
	IF(0x0C7C17EEu); PR = R32(r15); r15 += 4; UPD(0x0C7C17F0u, 3);  /* 0C7C17EE lds.l @Rn+,pr */
	IF(0x0C7C17F0u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C7C17F0 rts */
L_0C7C17F4: BLKS(0x0C7C17F4u);
	r0 = 0xC7C1088u; UPD(0x0C7C17F6u, 1);  /* 0C7C17F4 mov.l @(disp,pc),Rn */
	W32(r15 + 0x8u, r5); UPD(0x0C7C17F8u, 1);  /* 0C7C17F6 mov.l Rm,@(disp,Rn) */
	W32(r15 + 0x4u, r6); UPD(0x0C7C17FAu, 1);  /* 0C7C17F8 mov.l Rm,@(disp,Rn) */
	IF(0x0C7C17FAu); { u32 t_ = r0; PR = 0x0C7C17FEu; W32(r15, r7); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C7C1088, 0x0C7C1088u, 0x0C7C17FEu); }  /* 0C7C17FA jsr @Rn */
L_0C7C17FE: BLKS(0x0C7C17FEu);
	r7 = R32(r15); UPD(0x0C7C1800u, 1);  /* 0C7C17FE mov.l @Rm,Rn */
	r4 = r0;  /* 0C7C1800 mov Rm,Rn */
	r6 = R32(r15 + 0x4u); UPD(0x0C7C1804u, 2);  /* 0C7C1802 mov.l @(disp,Rm),Rn */
	r5 = R32(r15 + 0x8u); UPD(0x0C7C1806u, 1);  /* 0C7C1804 mov.l @(disp,Rm),Rn */
L_0C7C1806: BLKS(0x0C7C1806u);
	r0 = 0xC0A81B0u; UPD(0x0C7C1808u, 1);  /* 0C7C1806 mov.l @(disp,pc),Rn */
	W32(r15 + 0x14u, r4); UPD(0x0C7C180Au, 1);  /* 0C7C1808 mov.l Rm,@(disp,Rn) */
	r4 = r8;  /* 0C7C180A mov Rm,Rn */
	r15 += 0xCu;  /* 0C7C180C add #imm,Rn */
	IF(0x0C7C180Eu); PR = R32(r15); r15 += 4; UPD(0x0C7C1810u, 3);  /* 0C7C180E lds.l @Rn+,pr */
	IF(0x0C7C1810u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A81B0u: TAIL(f_0C0A81B0); default: JUMPD(tv_); } }  /* 0C7C1810 jmp @Rn */
}

/* arr_onscreen */
void f_0C7C1824(sh3_t *c)
{
	LOCALS;
L_0C7C1824: BLKS(0x0C7C1824u);
	r1 = 0xC21CA15u; UPD(0x0C7C1826u, 1);  /* 0C7C1824 mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C1828u, 1);  /* 0C7C1826 mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C1828 tst Rm,Rn */
	if (!T) { UPD(0x0C7C1834u, 4); goto L_0C7C1834; }  /* 0C7C182A bf */
L_0C7C182C: BLKS(0x0C7C182Cu);
	r1 = 0xC7C4298u; UPD(0x0C7C182Eu, 1);  /* 0C7C182C mov.l @(disp,pc),Rn */
	r1 = R32(r1); UPD(0x0C7C1830u, 1);  /* 0C7C182E mov.l @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C1830 tst Rm,Rn */
	if (!T) { UPD(0x0C7C183Au, 4); goto L_0C7C183A; }  /* 0C7C1832 bf */
L_0C7C1834: BLKS(0x0C7C1834u);
	r0 = 0xC0A9DE0u; UPD(0x0C7C1836u, 1);  /* 0C7C1834 mov.l @(disp,pc),Rn */
	IF(0x0C7C1836u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); IF(0x0C7C1838u); ; /* slot nop */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A9DE0u: TAIL(f_0C0A9DE0); default: JUMPD(tv_); } }  /* 0C7C1836 jmp @Rn */
L_0C7C183A: BLKS(0x0C7C183Au);
	IF(0x0C7C183Au); { u32 t_ = PR; r0 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 3); RET(t_); }  /* 0C7C183A rts */
}

/* arr_kill_item */
void f_0C7C184C(sh3_t *c)
{
	LOCALS;
L_0C7C184C: BLKS(0x0C7C184Cu);
	r2 = 0xC21CA15u; UPD(0x0C7C184Eu, 1);  /* 0C7C184C mov.l @(disp,pc),Rn */
	r1 = R32(r15); UPD(0x0C7C1850u, 1);  /* 0C7C184E mov.l @Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r2); UPD(0x0C7C1852u, 1);  /* 0C7C1850 mov.b @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C7C1852 tst Rm,Rn */
	{ u32 c_ = !T; r3 = R32(r15 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C7C1868u, 4); goto L_0C7C1868; } UPD(0x0C7C1858u, 1); goto L_0C7C1858; }  /* 0C7C1854 bf/s */
L_0C7C1858: BLKS(0x0C7C1858u);
	r1 = 0xC7C4235u; UPD(0x0C7C185Au, 1);  /* 0C7C1858 mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C185Cu, 1);  /* 0C7C185A mov.b @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C7C185C tst Rm,Rn */
	if (T) { UPD(0x0C7C1870u, 4); goto L_0C7C1870; }  /* 0C7C185E bt */
L_0C7C1860: BLKS(0x0C7C1860u);
	r0 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C1862u, 1);  /* 0C7C1860 mov.b @Rm,Rn */
	r1 = 0x10000u; UPD(0x0C7C1864u, 1);  /* 0C7C1862 mov.l @(disp,pc),Rn */
	T = r0 == 0x2u;  /* 0C7C1864 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C7C1874u, 4); goto L_0C7C1874; }  /* 0C7C1866 bt */
L_0C7C1868: BLKS(0x0C7C1868u);
	r0 = 0xC06CC20u; UPD(0x0C7C186Au, 1);  /* 0C7C1868 mov.l @(disp,pc),Rn */
	W32(r15 + 0x4u, r3); UPD(0x0C7C186Cu, 1);  /* 0C7C186A mov.l Rm,@(disp,Rn) */
	IF(0x0C7C186Cu); { u32 tv_ = r0; u32 t_ = PHYS(tv_); W32(r15, r1); /* slot mov.l Rm,@Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C06CC20u: TAIL(f_0C06CC20); default: JUMPD(tv_); } }  /* 0C7C186C jmp @Rn */
L_0C7C1870: BLKS(0x0C7C1870u);
	IF(0x0C7C1870u); { u32 t_ = PR; r0 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 3); RET(t_); }  /* 0C7C1870 rts */
L_0C7C1874: BLKS(0x0C7C1874u);
	r0 = 0xC06CC20u; UPD(0x0C7C1876u, 1);  /* 0C7C1874 mov.l @(disp,pc),Rn */
	r4 = 0x3u;  /* 0C7C1876 mov #imm,Rn */
	W32(r15 + 0x4u, r3); UPD(0x0C7C187Au, 2);  /* 0C7C1878 mov.l Rm,@(disp,Rn) */
	IF(0x0C7C187Au); { u32 tv_ = r0; u32 t_ = PHYS(tv_); W32(r15, r1); /* slot mov.l Rm,@Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C06CC20u: TAIL(f_0C06CC20); default: JUMPD(tv_); } }  /* 0C7C187A jmp @Rn */
}

/* arr_expl_rose */
void f_0C7C1890(sh3_t *c)
{
	LOCALS;
L_0C7C1890: BLKS(0x0C7C1890u);
	r3 = 0xC21CA15u; UPD(0x0C7C1892u, 1);  /* 0C7C1890 mov.l @(disp,pc),Rn */
	r1 = R32(r15); UPD(0x0C7C1894u, 1);  /* 0C7C1892 mov.l @Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r3); UPD(0x0C7C1896u, 1);  /* 0C7C1894 mov.b @Rm,Rn */
	r2 = R32(r15 + 0x4u); UPD(0x0C7C1898u, 1);  /* 0C7C1896 mov.l @(disp,Rm),Rn */
	T = (r3 & r3) == 0;  /* 0C7C1898 tst Rm,Rn */
	if (!T) { UPD(0x0C7C189Eu, 4); goto L_0C7C189E; }  /* 0C7C189A bf */
L_0C7C189C: BLKS(0x0C7C189Cu);
	r1 = 0x10000u; UPD(0x0C7C189Eu, 1);  /* 0C7C189C mov.l @(disp,pc),Rn */
L_0C7C189E: BLKS(0x0C7C189Eu);
	r0 = 0xC06CC20u; UPD(0x0C7C18A0u, 1);  /* 0C7C189E mov.l @(disp,pc),Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C7C18A2u, 1);  /* 0C7C18A0 mov.l Rm,@(disp,Rn) */
	IF(0x0C7C18A2u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); W32(r15, r1); /* slot mov.l Rm,@Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C06CC20u: TAIL(f_0C06CC20); default: JUMPD(tv_); } }  /* 0C7C18A2 jmp @Rn */
}

/* arr_kill_9860 */
void f_0C7C18B4(sh3_t *c)
{
	LOCALS;
L_0C7C18B4: BLKS(0x0C7C18B4u);
	r1 = 0xC21CA15u; UPD(0x0C7C18B6u, 1);  /* 0C7C18B4 mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C18B8u, 1);  /* 0C7C18B6 mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C18B8 tst Rm,Rn */
	{ u32 c_ = !T; r1 = 0x54u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C7C18CEu, 4); goto L_0C7C18CE; } goto L_0C7C18BE; }  /* 0C7C18BA bf/s */
L_0C7C18BE: BLKS(0x0C7C18BEu);
	r2 = 0xC27E108u; UPD(0x0C7C18C0u, 2);  /* 0C7C18BE mov.l @(disp,pc),Rn */
	MACL = (u32)((s32)(s16)r4 * (s32)(s16)r1);  /* 0C7C18C0 muls.w Rm,Rn */
	r3 = 0xC27E104u; UPD(0x0C7C18C4u, 3);  /* 0C7C18C2 mov.l @(disp,pc),Rn */
	IF(0x0C7C18C4u); r1 = MACL;  /* 0C7C18C4 sts macl,Rn */
	r2 += r1;  /* 0C7C18C6 add Rm,Rn */
	r2 = R32(r2); UPD(0x0C7C18CAu, 3);  /* 0C7C18C8 mov.l @Rm,Rn */
	r1 += r3;  /* 0C7C18CA add Rm,Rn */
	W32(r1, r2); UPD(0x0C7C18CEu, 2);  /* 0C7C18CC mov.l Rm,@Rn */
L_0C7C18CE: BLKS(0x0C7C18CEu);
	r0 = 0xC0A9860u; UPD(0x0C7C18D0u, 1);  /* 0C7C18CE mov.l @(disp,pc),Rn */
	IF(0x0C7C18D0u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); IF(0x0C7C18D2u); ; /* slot nop */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C7C18D0 jmp @Rn */
}

/* arr_frame_script */
void f_0C7C18E4(sh3_t *c)
{
	LOCALS;
L_0C7C18E4: BLKS(0x0C7C18E4u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C7C18E6u, 1);  /* 0C7C18E4 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C7C18E8u, 1);  /* 0C7C18E6 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C7C18EAu, 1);  /* 0C7C18E8 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C7C18ECu, 1);  /* 0C7C18EA mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C7C18EEu, 1);  /* 0C7C18EC mov.l Rm,@-Rn */
	r0 = 0xC060D90u; UPD(0x0C7C18F0u, 1);  /* 0C7C18EE mov.l @(disp,pc),Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C7C18F2u, 1);  /* 0C7C18F0 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C7C18F4u, 1);  /* 0C7C18F2 mov.l Rm,@-Rn */
	IF(0x0C7C18F4u); r15 -= 4; W32(r15, PR); UPD(0x0C7C18F6u, 1);  /* 0C7C18F4 sts.l pr,@-Rn */
	IF(0x0C7C18F6u); { u32 t_ = r0; PR = 0x0C7C18FAu; IF(0x0C7C18F8u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C060D90, 0x0C060D90u, 0x0C7C18FAu); }  /* 0C7C18F6 jsr @Rn */
L_0C7C18FA: BLKS(0x0C7C18FAu);
	r1 = 0xC21CA15u; UPD(0x0C7C18FCu, 1);  /* 0C7C18FA mov.l @(disp,pc),Rn */
	r12 = r0;  /* 0C7C18FC mov Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C1900u, 2);  /* 0C7C18FE mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C1900 tst Rm,Rn */
	{ u32 c_ = !T; r0 = r12; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C7C190Eu, 4); goto L_0C7C190E; } goto L_0C7C1906; }  /* 0C7C1902 bf/s */
L_0C7C1906: BLKS(0x0C7C1906u);
	r13 = 0xC7C4298u; UPD(0x0C7C1908u, 2);  /* 0C7C1906 mov.l @(disp,pc),Rn */
	r1 = R32(r13); UPD(0x0C7C190Au, 1);  /* 0C7C1908 mov.l @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C190A tst Rm,Rn */
	if (!T) { UPD(0x0C7C1920u, 4); goto L_0C7C1920; }  /* 0C7C190C bf */
L_0C7C190E: BLKS(0x0C7C190Eu);
	IF(0x0C7C190Eu); PR = R32(r15); r15 += 4; UPD(0x0C7C1910u, 1);  /* 0C7C190E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C7C1912u, 1);  /* 0C7C1910 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C7C1914u, 1);  /* 0C7C1912 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C7C1916u, 1);  /* 0C7C1914 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C7C1918u, 1);  /* 0C7C1916 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C7C191Au, 1);  /* 0C7C1918 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C191Cu, 1);  /* 0C7C191A mov.l @Rm+,Rn */
	IF(0x0C7C191Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C7C191C rts */
L_0C7C1920: BLKS(0x0C7C1920u);
	r9 = 0xC2834A8u; UPD(0x0C7C1922u, 1);  /* 0C7C1920 mov.l @(disp,pc),Rn */
	r8 = 0xFFu; UPD(0x0C7C1924u, 1);  /* 0C7C1922 mov.w @(disp,pc),Rn */
	r14 = 0xC7C4235u; UPD(0x0C7C1926u, 1);  /* 0C7C1924 mov.l @(disp,pc),Rn */
	r11 = 0xC0A9EA0u; UPD(0x0C7C1928u, 1);  /* 0C7C1926 mov.l @(disp,pc),Rn */
L_0C7C1928: BLKS(0x0C7C1928u);
	r1 = R32(r9); UPD(0x0C7C192Au, 1);  /* 0C7C1928 mov.l @Rm,Rn */
	r0 = 0x10000000u; UPD(0x0C7C192Cu, 1);  /* 0C7C192A mov.l @(disp,pc),Rn */
	T = (r1 & r0) == 0;  /* 0C7C192C tst Rm,Rn */
	{ u32 c_ = T; r10 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C7C1940u, 4); goto L_0C7C1940; } goto L_0C7C1932; }  /* 0C7C192E bt/s */
L_0C7C1932: BLKS(0x0C7C1932u);
	r5 = r8;  /* 0C7C1932 mov Rm,Rn */
	W8(r14, r10); UPD(0x0C7C1936u, 3);  /* 0C7C1934 mov.b Rm,@Rn */
	r7 = 0x0u;  /* 0C7C1936 mov #imm,Rn */
	r6 = 0x0u;  /* 0C7C1938 mov #imm,Rn */
	IF(0x0C7C193Au); { u32 t_ = r11; PR = 0x0C7C193Eu; r4 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLD(t_, 0x0C7C193Eu); }  /* 0C7C193A jsr @Rn */
L_0C7C193E: BLKS(0x0C7C193Eu);
	W8(r14, r10); UPD(0x0C7C1940u, 1);  /* 0C7C193E mov.b Rm,@Rn */
L_0C7C1940: BLKS(0x0C7C1940u);
	r8 += 0xFFFFFFFFu;  /* 0C7C1940 add #imm,Rn */
	r0 = r8;  /* 0C7C1942 mov Rm,Rn */
	T = r0 == 0xFFFFFFFFu;  /* 0C7C1944 cmp/eq #imm,r0 */
	{ u32 c_ = !T; r9 += 0xFFFFFFACu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C7C1928u, 6); goto L_0C7C1928; } goto L_0C7C194A; }  /* 0C7C1946 bf/s */
L_0C7C194A: BLKS(0x0C7C194Au);
	r1 = R32(r13); UPD(0x0C7C194Cu, 2);  /* 0C7C194A mov.l @Rm,Rn */
	r0 = r12;  /* 0C7C194C mov Rm,Rn */
	r1 += 0xFFFFFFFFu;  /* 0C7C194E add #imm,Rn */
	W32(r13, r1); UPD(0x0C7C1952u, 3);  /* 0C7C1950 mov.l Rm,@Rn */
	IF(0x0C7C1952u); PR = R32(r15); r15 += 4; UPD(0x0C7C1954u, 1);  /* 0C7C1952 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C7C1956u, 1);  /* 0C7C1954 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C7C1958u, 1);  /* 0C7C1956 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C7C195Au, 1);  /* 0C7C1958 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C7C195Cu, 1);  /* 0C7C195A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C7C195Eu, 1);  /* 0C7C195C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C1960u, 1);  /* 0C7C195E mov.l @Rm+,Rn */
	IF(0x0C7C1960u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C7C1960 rts */
}

/* arr_frame_post */
void f_0C7C1984(sh3_t *c)
{
	LOCALS;
L_0C7C1984: BLKS(0x0C7C1984u);
	r1 = 0xC21CA15u; UPD(0x0C7C1986u, 1);  /* 0C7C1984 mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C1988u, 1);  /* 0C7C1986 mov.b @Rm,Rn */
	r1 = r1 & 0xFF;  /* 0C7C1988 extu.b Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C198A tst Rm,Rn */
	if (T) { UPD(0x0C7C1994u, 5); goto L_0C7C1994; }  /* 0C7C198C bt */
L_0C7C198E: BLKS(0x0C7C198Eu);
	r0 = 0xC0AF600u; UPD(0x0C7C1990u, 1);  /* 0C7C198E mov.l @(disp,pc),Rn */
	IF(0x0C7C1990u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); IF(0x0C7C1992u); ; /* slot nop */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0AF600u: TAIL(f_0C0AF600); default: JUMPD(tv_); } }  /* 0C7C1990 jmp @Rn */
L_0C7C1994: BLKS(0x0C7C1994u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C7C1996u, 1);  /* 0C7C1994 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C7C1998u, 1);  /* 0C7C1996 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C7C199Au, 1);  /* 0C7C1998 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C7C199Cu, 1);  /* 0C7C199A mov.l Rm,@-Rn */
	r3 = 0xC7C4280u; UPD(0x0C7C199Eu, 1);  /* 0C7C199C mov.l @(disp,pc),Rn */
	r9 = 0xC7C4294u; UPD(0x0C7C19A0u, 1);  /* 0C7C199E mov.l @(disp,pc),Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C7C19A2u, 1);  /* 0C7C19A0 mov.l Rm,@-Rn */
	W32(r3, r1); UPD(0x0C7C19A4u, 1);  /* 0C7C19A2 mov.l Rm,@Rn */
	r1 = R32(r9); UPD(0x0C7C19A6u, 1);  /* 0C7C19A4 mov.l @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C19A6 tst Rm,Rn */
	{ u32 c_ = T; r2 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C7C19E4u, 4); goto L_0C7C19E4; } goto L_0C7C19AC; }  /* 0C7C19A8 bt/s */
L_0C7C19AC: BLKS(0x0C7C19ACu);
	r0 = 0xC7C4288u; UPD(0x0C7C19AEu, 2);  /* 0C7C19AC mov.l @(disp,pc),Rn */
	r11 = 0xC7C4290u; UPD(0x0C7C19B0u, 1);  /* 0C7C19AE mov.l @(disp,pc),Rn */
	W32(r3, r2); UPD(0x0C7C19B2u, 1);  /* 0C7C19B0 mov.l Rm,@Rn */
	r8 = R32(r11); UPD(0x0C7C19B4u, 1);  /* 0C7C19B2 mov.l @Rm,Rn */
	r2 = R32(r0); UPD(0x0C7C19B6u, 1);  /* 0C7C19B4 mov.l @Rm,Rn */
	T = (s32)r2 >= (s32)r8;  /* 0C7C19B6 cmp/ge Rm,Rn */
	{ u32 c_ = !T; T = (s32)r2 > (s32)r8; /* slot cmp/gt Rm,Rn */ if (c_) { UPD(0x0C7C19F2u, 4); goto L_0C7C19F2; } goto L_0C7C19BC; }  /* 0C7C19B8 bf/s */
L_0C7C19BC: BLKS(0x0C7C19BCu);
	{ u32 c_ = !T; r10 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C7C19CAu, 4); goto L_0C7C19CA; } goto L_0C7C19C0; }  /* 0C7C19BC bf/s */
L_0C7C19C0: BLKS(0x0C7C19C0u);
	r12 = 0xFFFFFFFDu;  /* 0C7C19C0 mov #imm,Rn */
	r10 -= r8;  /* 0C7C19C2 sub Rm,Rn */
	IF(0x0C7C19C4u); ARG0(0x4ACCu); { s32 s_ = (s32)r12; if (s_ >= 0) r10 <<= (s_ & 31); else if ((s_ & 31) == 0) r10 = (u32)((s32)r10 >> 31); else r10 = (u32)((s32)r10 >> ((~s_ & 31) + 1)); }  /* 0C7C19C4 shad Rm,Rn */
	{ u32 a_ = r2, t_ = a_ - r10, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r2 = r_; }  /* 0C7C19C6 subc Rm,Rn */
	W32(r0, r2); UPD(0x0C7C19CAu, 6);  /* 0C7C19C8 mov.l Rm,@Rn */
L_0C7C19CA: BLKS(0x0C7C19CAu);
	r0 = r1;  /* 0C7C19CA mov Rm,Rn */
	T = r0 == 0x1u;  /* 0C7C19CC cmp/eq #imm,r0 */
	{ u32 c_ = T; T = r0 == 0x2u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C7C19F6u, 5); goto L_0C7C19F6; } goto L_0C7C19D2; }  /* 0C7C19CE bt/s */
L_0C7C19D2: BLKS(0x0C7C19D2u);
	{ u32 c_ = T; T = r0 == 0x3u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C7C1A3Au, 4); goto L_0C7C1A3A; } goto L_0C7C19D6; }  /* 0C7C19D2 bt/s */
L_0C7C19D6: BLKS(0x0C7C19D6u);
	{ u32 c_ = !T; IF(0x0C7C19D8u); T = (s32)r8 > 0; /* slot cmp/pl Rn */ if (c_) { UPD(0x0C7C19E0u, 4); goto L_0C7C19E0; } goto L_0C7C19DA; }  /* 0C7C19D6 bf/s */
L_0C7C19DA: BLKS(0x0C7C19DAu);
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C7C1A2Eu, 4); goto L_0C7C1A2E; } UPD(0x0C7C19DEu, 1); goto L_0C7C19DE; }  /* 0C7C19DA bf/s */
L_0C7C19DE: BLKS(0x0C7C19DEu);
	r0 = r1;  /* 0C7C19DE mov Rm,Rn */
	UPD(0x0C7C19E0u, 1);
L_0C7C19E0: BLKS(0x0C7C19E0u);
	T = r0 == 0x4u;  /* 0C7C19E0 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C7C1A0Eu, 4); goto L_0C7C1A0E; }  /* 0C7C19E2 bt */
L_0C7C19E4: BLKS(0x0C7C19E4u);
	r0 = 0xC0AF600u; UPD(0x0C7C19E6u, 1);  /* 0C7C19E4 mov.l @(disp,pc),Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C7C19E8u, 1);  /* 0C7C19E6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C7C19EAu, 1);  /* 0C7C19E8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C7C19ECu, 1);  /* 0C7C19EA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C19EEu, 1);  /* 0C7C19EC mov.l @Rm+,Rn */
	IF(0x0C7C19EEu); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0AF600u: TAIL(f_0C0AF600); default: JUMPD(tv_); } }  /* 0C7C19EE jmp @Rn */
L_0C7C19F2: BLKS(0x0C7C19F2u);
	{ W32(r0, r8); /* slot mov.l Rm,@Rn */ UPD(0x0C7C19CAu, 3); goto L_0C7C19CA; }  /* 0C7C19F2 bra */
L_0C7C19F6: BLKS(0x0C7C19F6u);
	r2 = 0xC7C4284u; UPD(0x0C7C19F8u, 1);  /* 0C7C19F6 mov.l @(disp,pc),Rn */
	r0 = 0x0u;  /* 0C7C19F8 mov #imm,Rn */
	W32(r2, r0); UPD(0x0C7C19FCu, 2);  /* 0C7C19FA mov.l Rm,@Rn */
	r0 = 0x2u;  /* 0C7C19FC mov #imm,Rn */
	W32(r9, r0); UPD(0x0C7C1A00u, 2);  /* 0C7C19FE mov.l Rm,@Rn */
	r0 = 0xC21CA24u; UPD(0x0C7C1A02u, 1);  /* 0C7C1A00 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r0); UPD(0x0C7C1A04u, 1);  /* 0C7C1A02 mov.b @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C7C1A04 tst Rm,Rn */
	if (!T) { UPD(0x0C7C1A0Au, 4); goto L_0C7C1A0A; }  /* 0C7C1A06 bf */
L_0C7C1A08: BLKS(0x0C7C1A08u);
	W32(r2, r1); UPD(0x0C7C1A0Au, 1);  /* 0C7C1A08 mov.l Rm,@Rn */
L_0C7C1A0A: BLKS(0x0C7C1A0Au);
	{ r1 = R32(r9); /* slot mov.l @Rm,Rn */ UPD(0x0C7C19DEu, 3); goto L_0C7C19DE; }  /* 0C7C1A0A bra */
L_0C7C1A0E: BLKS(0x0C7C1A0Eu);
	r1 = 0xC7C4284u; UPD(0x0C7C1A10u, 1);  /* 0C7C1A0E mov.l @(disp,pc),Rn */
	r2 = R32(r1); UPD(0x0C7C1A12u, 1);  /* 0C7C1A10 mov.l @Rm,Rn */
L_0C7C1A12: BLKS(0x0C7C1A12u);
	r0 = 0xC21CA24u; UPD(0x0C7C1A14u, 1);  /* 0C7C1A12 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r0); UPD(0x0C7C1A16u, 1);  /* 0C7C1A14 mov.b @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C7C1A16 tst Rm,Rn */
	{ u32 c_ = !T; IF(0x0C7C1A1Au); T = (s32)r2 > 0; /* slot cmp/pl Rn */ if (c_) { UPD(0x0C7C1A22u, 4); goto L_0C7C1A22; } goto L_0C7C1A1C; }  /* 0C7C1A18 bf/s */
L_0C7C1A1C: BLKS(0x0C7C1A1Cu);
	r2 += 0xFFFFFFFEu;  /* 0C7C1A1C add #imm,Rn */
	W32(r1, r2); UPD(0x0C7C1A20u, 3);  /* 0C7C1A1E mov.l Rm,@Rn */
	IF(0x0C7C1A20u); T = (s32)r2 > 0;  /* 0C7C1A20 cmp/pl Rn */
	UPD(0x0C7C1A22u, 1);
L_0C7C1A22: BLKS(0x0C7C1A22u);
	{ u32 c_ = T; r2 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C7C19E4u, 3); goto L_0C7C19E4; } goto L_0C7C1A26; }  /* 0C7C1A22 bt/s */
L_0C7C1A26: BLKS(0x0C7C1A26u);
	W32(r1, r2); UPD(0x0C7C1A28u, 2);  /* 0C7C1A26 mov.l Rm,@Rn */
	W32(r9, r2); UPD(0x0C7C1A2Au, 1);  /* 0C7C1A28 mov.l Rm,@Rn */
	{ W32(r3, r2); /* slot mov.l Rm,@Rn */ UPD(0x0C7C19E4u, 3); goto L_0C7C19E4; }  /* 0C7C1A2A bra */
L_0C7C1A2E: BLKS(0x0C7C1A2Eu);
	r1 = 0xC7C4284u; UPD(0x0C7C1A30u, 1);  /* 0C7C1A2E mov.l @(disp,pc),Rn */
	W32(r11, r0); UPD(0x0C7C1A32u, 1);  /* 0C7C1A30 mov.l Rm,@Rn */
	r0 = 0x4u;  /* 0C7C1A32 mov #imm,Rn */
	r2 = R32(r1); UPD(0x0C7C1A36u, 2);  /* 0C7C1A34 mov.l @Rm,Rn */
	{ W32(r9, r0); /* slot mov.l Rm,@Rn */ UPD(0x0C7C1A12u, 3); goto L_0C7C1A12; }  /* 0C7C1A36 bra */
L_0C7C1A3A: BLKS(0x0C7C1A3Au);
	r0 = 0xC21CA24u; UPD(0x0C7C1A3Cu, 1);  /* 0C7C1A3A mov.l @(disp,pc),Rn */
	r1 = 0xC7C4284u; UPD(0x0C7C1A3Eu, 1);  /* 0C7C1A3C mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r0); UPD(0x0C7C1A40u, 1);  /* 0C7C1A3E mov.b @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C7C1A40 tst Rm,Rn */
	{ u32 c_ = !T; r2 = R32(r1); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C7C1A4Au, 4); goto L_0C7C1A4A; } UPD(0x0C7C1A46u, 1); goto L_0C7C1A46; }  /* 0C7C1A42 bf/s */
L_0C7C1A46: BLKS(0x0C7C1A46u);
	r2 += 0x1u;  /* 0C7C1A46 add #imm,Rn */
	W32(r1, r2); UPD(0x0C7C1A4Au, 2);  /* 0C7C1A48 mov.l Rm,@Rn */
L_0C7C1A4A: BLKS(0x0C7C1A4Au);
	r0 = 0xDDu; UPD(0x0C7C1A4Cu, 1);  /* 0C7C1A4A mov.w @(disp,pc),Rn */
	T = (s32)r2 > (s32)r0;  /* 0C7C1A4C cmp/gt Rm,Rn */
	{ u32 c_ = !T; IF(0x0C7C1A50u); T = (s32)r8 > 0; /* slot cmp/pl Rn */ if (c_) { UPD(0x0C7C1A0Au, 4); goto L_0C7C1A0A; } goto L_0C7C1A52; }  /* 0C7C1A4E bf/s */
L_0C7C1A52: BLKS(0x0C7C1A52u);
	r2 = 0xDEu; UPD(0x0C7C1A54u, 2);  /* 0C7C1A52 mov.w @(disp,pc),Rn */
	W32(r1, r2); UPD(0x0C7C1A56u, 1);  /* 0C7C1A54 mov.l Rm,@Rn */
	r2 = 0x3u;  /* 0C7C1A56 mov #imm,Rn */
	{ u32 c_ = T; W32(r9, r2); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C7C19E4u, 4); goto L_0C7C19E4; } UPD(0x0C7C1A5Cu, 1); goto L_0C7C1A5C; }  /* 0C7C1A58 bt/s */
L_0C7C1A5C: BLKS(0x0C7C1A5Cu);
	r2 = 0x0u;  /* 0C7C1A5C mov #imm,Rn */
	W32(r11, r2); UPD(0x0C7C1A60u, 2);  /* 0C7C1A5E mov.l Rm,@Rn */
	r2 = 0x4u;  /* 0C7C1A60 mov #imm,Rn */
	W32(r9, r2); UPD(0x0C7C1A64u, 2);  /* 0C7C1A62 mov.l Rm,@Rn */
	r2 = 0xC21CA24u; UPD(0x0C7C1A66u, 1);  /* 0C7C1A64 mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s8)R8(r2); UPD(0x0C7C1A68u, 1);  /* 0C7C1A66 mov.b @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C7C1A68 tst Rm,Rn */
	if (!T) { UPD(0x0C7C19E4u, 4); goto L_0C7C19E4; }  /* 0C7C1A6A bf */
L_0C7C1A6C: BLKS(0x0C7C1A6Cu);
	r2 = 0xDCu; UPD(0x0C7C1A6Eu, 1);  /* 0C7C1A6C mov.w @(disp,pc),Rn */
	{ W32(r1, r2); /* slot mov.l Rm,@Rn */ UPD(0x0C7C19E4u, 3); goto L_0C7C19E4; }  /* 0C7C1A6E bra */
}

/* arr_game_reset */
void f_0C7C1A98(sh3_t *c)
{
	LOCALS;
L_0C7C1A98: BLKS(0x0C7C1A98u);
	r2 = 0xC7C4298u; UPD(0x0C7C1A9Au, 1);  /* 0C7C1A98 mov.l @(disp,pc),Rn */
	r1 = 0x0u;  /* 0C7C1A9A mov #imm,Rn */
	r0 = 0xC05B3E0u; UPD(0x0C7C1A9Eu, 2);  /* 0C7C1A9C mov.l @(disp,pc),Rn */
	W32(r2, r1); UPD(0x0C7C1AA0u, 1);  /* 0C7C1A9E mov.l Rm,@Rn */
	r2 = 0xC7C4294u; UPD(0x0C7C1AA2u, 1);  /* 0C7C1AA0 mov.l @(disp,pc),Rn */
	IF(0x0C7C1AA2u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); W32(r2, r1); /* slot mov.l Rm,@Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C05B3E0u: TAIL(f_0C05B3E0); default: JUMPD(tv_); } }  /* 0C7C1AA2 jmp @Rn */
}

/* arr_hit_player */
void f_0C7C1AB4(sh3_t *c)
{
	LOCALS;
L_0C7C1AB4: BLKS(0x0C7C1AB4u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C7C1AB6u, 1);  /* 0C7C1AB4 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C7C1AB8u, 1);  /* 0C7C1AB6 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C7C1ABAu, 1);  /* 0C7C1AB8 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C7C1ABCu, 1);  /* 0C7C1ABA mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C7C1ABEu, 1);  /* 0C7C1ABC mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C7C1AC0u, 1);  /* 0C7C1ABE mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C7C1AC2u, 1);  /* 0C7C1AC0 mov.l Rm,@-Rn */
	IF(0x0C7C1AC2u); r15 -= 4; W32(r15, PR); UPD(0x0C7C1AC4u, 1);  /* 0C7C1AC2 sts.l pr,@-Rn */
	r1 = 0xC21CA15u; UPD(0x0C7C1AC6u, 1);  /* 0C7C1AC4 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFC8u;  /* 0C7C1AC6 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C1ACAu, 2);  /* 0C7C1AC8 mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C1ACA tst Rm,Rn */
	if (T) { UPD(0x0C7C1AD2u, 4); goto L_0C7C1AD2; }  /* 0C7C1ACC bt */
L_0C7C1ACE: BLKS(0x0C7C1ACEu);
	{ IF(0x0C7C1AD0u); ; /* slot nop */ UPD(0x0C7C1D0Cu, 3); goto L_0C7C1D0C; }  /* 0C7C1ACE bra */
L_0C7C1AD2: BLKS(0x0C7C1AD2u);
	r1 = 0xC21F882u; UPD(0x0C7C1AD4u, 1);  /* 0C7C1AD2 mov.l @(disp,pc),Rn */
	r3 = 0x4000000u; UPD(0x0C7C1AD6u, 1);  /* 0C7C1AD4 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s16)R16(r1); UPD(0x0C7C1AD8u, 1);  /* 0C7C1AD6 mov.w @Rm,Rn */
	r1 = 0x280u; UPD(0x0C7C1ADAu, 1);  /* 0C7C1AD8 mov.w @(disp,pc),Rn */
	r0 += 0x1u;  /* 0C7C1ADA add #imm,Rn */
	r0 &= 0x1u;  /* 0C7C1ADC and #imm,r0 */
	MACL = (u32)(u16)r0 * (u32)(u16)r1;  /* 0C7C1ADE mulu.w Rm,Rn */
	r1 = 0xC283794u; UPD(0x0C7C1AE2u, 5);  /* 0C7C1AE0 mov.l @(disp,pc),Rn */
	W32(r15 + 0x14u, r0); UPD(0x0C7C1AE4u, 1);  /* 0C7C1AE2 mov.l Rm,@(disp,Rn) */
	IF(0x0C7C1AE4u); r2 = MACL;  /* 0C7C1AE4 sts macl,Rn */
	r1 += r2;  /* 0C7C1AE6 add Rm,Rn */
	r1 = R32(r1); UPD(0x0C7C1AEAu, 3);  /* 0C7C1AE8 mov.l @Rm,Rn */
	T = (r1 & r3) == 0;  /* 0C7C1AEA tst Rm,Rn */
	if (T) { UPD(0x0C7C1B26u, 4); goto L_0C7C1B26; }  /* 0C7C1AEC bt */
L_0C7C1AEE: BLKS(0x0C7C1AEEu);
	r1 = 0xC283798u; UPD(0x0C7C1AF0u, 1);  /* 0C7C1AEE mov.l @(disp,pc),Rn */
	r0 = 0xC16BE68u; UPD(0x0C7C1AF2u, 1);  /* 0C7C1AF0 mov.l @(disp,pc),Rn */
	r1 += r2;  /* 0C7C1AF2 add Rm,Rn */
	r3 = 0xC28379Cu; UPD(0x0C7C1AF6u, 2);  /* 0C7C1AF4 mov.l @(disp,pc),Rn */
	r1 = R32(r1); UPD(0x0C7C1AF8u, 1);  /* 0C7C1AF6 mov.l @Rm,Rn */
	r3 += r2;  /* 0C7C1AF8 add Rm,Rn */
	IF(0x0C7C1AFAu); r1 <<= 2;  /* 0C7C1AFA shll2 Rn */
	r1 += r1;  /* 0C7C1AFC add Rm,Rn */
	r1 += r0;  /* 0C7C1AFE add Rm,Rn */
	r1 = R32(r1); UPD(0x0C7C1B02u, 5);  /* 0C7C1B00 mov.l @Rm,Rn */
	r0 = R32(r3); UPD(0x0C7C1B04u, 1);  /* 0C7C1B02 mov.l @Rm,Rn */
	IF(0x0C7C1B04u); r0 <<= 2;  /* 0C7C1B04 shll2 Rn */
	IF(0x0C7C1B06u); r0 <<= 2;  /* 0C7C1B06 shll2 Rn */
	IF(0x0C7C1B08u); r3 = R32(r0 + r1); UPD(0x0C7C1B0Au, 3);  /* 0C7C1B08 mov.l @(r0,Rm),Rn */
	r1 = 0xC2837A0u; UPD(0x0C7C1B0Cu, 1);  /* 0C7C1B0A mov.l @(disp,pc),Rn */
	r1 += r2;  /* 0C7C1B0C add Rm,Rn */
	r1 = R32(r1); UPD(0x0C7C1B10u, 2);  /* 0C7C1B0E mov.l @Rm,Rn */
	IF(0x0C7C1B10u); r1 <<= 2;  /* 0C7C1B10 shll2 Rn */
	r1 += r1;  /* 0C7C1B12 add Rm,Rn */
	r1 += r3;  /* 0C7C1B14 add Rm,Rn */
	r1 = R32(r1 + 0x4u); UPD(0x0C7C1B18u, 4);  /* 0C7C1B16 mov.l @(disp,Rm),Rn */
	{ u32 v_ = R32(r1); r1 += 4; r3 = v_; } UPD(0x0C7C1B1Au, 1);  /* 0C7C1B18 mov.l @Rm+,Rn */
	W32(r15 + 0x2Cu, r1); UPD(0x0C7C1B1Cu, 1);  /* 0C7C1B1A mov.l Rm,@(disp,Rn) */
	r1 = 0xC2864F8u; UPD(0x0C7C1B1Eu, 1);  /* 0C7C1B1C mov.l @(disp,pc),Rn */
	T = (r3 & r3) == 0;  /* 0C7C1B1E tst Rm,Rn */
	W32(r15 + 0x10u, r3); UPD(0x0C7C1B22u, 2);  /* 0C7C1B20 mov.l Rm,@(disp,Rn) */
	W32(r1, r3); UPD(0x0C7C1B24u, 1);  /* 0C7C1B22 mov.l Rm,@Rn */
	if (!T) { UPD(0x0C7C1B2Au, 3); goto L_0C7C1B2A; }  /* 0C7C1B24 bf */
L_0C7C1B26: BLKS(0x0C7C1B26u);
	{ r0 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C7C1C78u, 3); goto L_0C7C1C78; }  /* 0C7C1B26 bra */
L_0C7C1B2A: BLKS(0x0C7C1B2Au);
	r1 = 0xC2837A4u; UPD(0x0C7C1B2Cu, 1);  /* 0C7C1B2A mov.l @(disp,pc),Rn */
	r1 += r2;  /* 0C7C1B2C add Rm,Rn */
	W32(r15 + 0x30u, r1); UPD(0x0C7C1B30u, 2);  /* 0C7C1B2E mov.l Rm,@(disp,Rn) */
	r1 = 0xC2837A8u; UPD(0x0C7C1B32u, 1);  /* 0C7C1B30 mov.l @(disp,pc),Rn */
	r1 += r2;  /* 0C7C1B32 add Rm,Rn */
	W32(r15 + 0x34u, r1); UPD(0x0C7C1B36u, 2);  /* 0C7C1B34 mov.l Rm,@(disp,Rn) */
	r1 = 0xC283A04u; UPD(0x0C7C1B38u, 1);  /* 0C7C1B36 mov.l @(disp,pc),Rn */
	r1 += r2;  /* 0C7C1B38 add Rm,Rn */
	W32(r15 + 0x18u, r1); UPD(0x0C7C1B3Cu, 2);  /* 0C7C1B3A mov.l Rm,@(disp,Rn) */
	r1 = 0xC2839FDu; UPD(0x0C7C1B3Eu, 1);  /* 0C7C1B3C mov.l @(disp,pc),Rn */
	r1 += r2;  /* 0C7C1B3E add Rm,Rn */
	W32(r15 + 0x24u, r1); UPD(0x0C7C1B42u, 2);  /* 0C7C1B40 mov.l Rm,@(disp,Rn) */
L_0C7C1B42: BLKS(0x0C7C1B42u);
	r1 = R32(r15 + 0x2Cu); UPD(0x0C7C1B44u, 1);  /* 0C7C1B42 mov.l @(disp,Rm),Rn */
	r3 = R32(r15 + 0x2Cu); UPD(0x0C7C1B46u, 1);  /* 0C7C1B44 mov.l @(disp,Rm),Rn */
	r1 = R32(r1); UPD(0x0C7C1B48u, 1);  /* 0C7C1B46 mov.l @Rm,Rn */
	r2 = R32(r15 + 0x30u); UPD(0x0C7C1B4Au, 1);  /* 0C7C1B48 mov.l @(disp,Rm),Rn */
	W32(r15 + 0x28u, r1); UPD(0x0C7C1B4Cu, 1);  /* 0C7C1B4A mov.l Rm,@(disp,Rn) */
	r13 = R32(r2); UPD(0x0C7C1B4Eu, 1);  /* 0C7C1B4C mov.l @Rm,Rn */
	r1 = R32(r3 + 0x4u); UPD(0x0C7C1B50u, 1);  /* 0C7C1B4E mov.l @(disp,Rm),Rn */
	r7 = 0xC224668u; UPD(0x0C7C1B52u, 1);  /* 0C7C1B50 mov.l @(disp,pc),Rn */
	r13 += r1;  /* 0C7C1B52 add Rm,Rn */
	r1 = R32(r15 + 0x34u); UPD(0x0C7C1B56u, 2);  /* 0C7C1B54 mov.l @(disp,Rm),Rn */
	r14 = R32(r15 + 0x10u); UPD(0x0C7C1B58u, 1);  /* 0C7C1B56 mov.l @(disp,Rm),Rn */
	r2 = R32(r1); UPD(0x0C7C1B5Au, 1);  /* 0C7C1B58 mov.l @Rm,Rn */
	r1 = R32(r3 + 0x8u); UPD(0x0C7C1B5Cu, 1);  /* 0C7C1B5A mov.l @(disp,Rm),Rn */
	r3 = r2;  /* 0C7C1B5C mov Rm,Rn */
	r2 = 0xFFFFFFFu; UPD(0x0C7C1B60u, 2);  /* 0C7C1B5E mov.l @(disp,pc),Rn */
	r3 += r1;  /* 0C7C1B60 add Rm,Rn */
	r1 = R32(r15 + 0x28u); UPD(0x0C7C1B64u, 2);  /* 0C7C1B62 mov.l @(disp,Rm),Rn */
	W32(r15 + 0xCu, r3); UPD(0x0C7C1B66u, 1);  /* 0C7C1B64 mov.l Rm,@(disp,Rn) */
	r14 &= r2;  /* 0C7C1B66 and Rm,Rn */
	W32(r7, r1); UPD(0x0C7C1B6Au, 2);  /* 0C7C1B68 mov.l Rm,@Rn */
	r1 = 0xC26CADCu; UPD(0x0C7C1B6Cu, 1);  /* 0C7C1B6A mov.l @(disp,pc),Rn */
	r2 = 0x20000000u; UPD(0x0C7C1B6Eu, 1);  /* 0C7C1B6C mov.l @(disp,pc),Rn */
	W32(r1, r13); UPD(0x0C7C1B70u, 1);  /* 0C7C1B6E mov.l Rm,@Rn */
	r1 = 0xC275DC0u; UPD(0x0C7C1B72u, 1);  /* 0C7C1B70 mov.l @(disp,pc),Rn */
	r0 = 0xFFu; UPD(0x0C7C1B74u, 1);  /* 0C7C1B72 mov.w @(disp,pc),Rn */
	W32(r1, r3); UPD(0x0C7C1B76u, 1);  /* 0C7C1B74 mov.l Rm,@Rn */
	r3 = 0x10000u; UPD(0x0C7C1B78u, 1);  /* 0C7C1B76 mov.l @(disp,pc),Rn */
	r1 = 0xC2834A8u; UPD(0x0C7C1B7Au, 1);  /* 0C7C1B78 mov.l @(disp,pc),Rn */
	r14 += r3;  /* 0C7C1B7A add Rm,Rn */
	r3 = R32(r15 + 0x10u); UPD(0x0C7C1B7Eu, 2);  /* 0C7C1B7C mov.l @(disp,Rm),Rn */
	W32(r15 + 0x8u, r0); UPD(0x0C7C1B80u, 1);  /* 0C7C1B7E mov.l Rm,@(disp,Rn) */
	r3 &= r2;  /* 0C7C1B80 and Rm,Rn */
	{ W32(r15 + 0x20u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C7C1B96u, 4); goto L_0C7C1B96; }  /* 0C7C1B82 bra */
L_0C7C1B86: BLKS(0x0C7C1B86u);
	r0 = R32(r15 + 0x8u); UPD(0x0C7C1B88u, 1);  /* 0C7C1B86 mov.l @(disp,Rm),Rn */
L_0C7C1B88: BLKS(0x0C7C1B88u);
	r1 += 0xFFFFFFACu;  /* 0C7C1B88 add #imm,Rn */
	r0 += 0xFFFFFFFFu;  /* 0C7C1B8A add #imm,Rn */
	T = r0 == 0xFFFFFFFFu;  /* 0C7C1B8C cmp/eq #imm,r0 */
	{ u32 c_ = !T; W32(r15 + 0x8u, r0); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C7C1B96u, 6); goto L_0C7C1B96; } UPD(0x0C7C1B92u, 1); goto L_0C7C1B92; }  /* 0C7C1B8E bf/s */
L_0C7C1B92: BLKS(0x0C7C1B92u);
	{ r3 = R32(r15 + 0x2Cu); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C7C1D22u, 3); goto L_0C7C1D22; }  /* 0C7C1B92 bra */
L_0C7C1B96: BLKS(0x0C7C1B96u);
	r2 = R32(r1); UPD(0x0C7C1B98u, 1);  /* 0C7C1B96 mov.l @Rm,Rn */
	r7 = 0x10000000u; UPD(0x0C7C1B9Au, 1);  /* 0C7C1B98 mov.l @(disp,pc),Rn */
	T = (r2 & r7) == 0;  /* 0C7C1B9A tst Rm,Rn */
	{ u32 c_ = T; r0 = R32(r15 + 0x8u); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C7C1B88u, 4); goto L_0C7C1B88; } UPD(0x0C7C1BA0u, 1); goto L_0C7C1BA0; }  /* 0C7C1B9C bt/s */
L_0C7C1BA0: BLKS(0x0C7C1BA0u);
	r8 = R32(r1 + 0x20u); UPD(0x0C7C1BA2u, 1);  /* 0C7C1BA0 mov.l @(disp,Rm),Rn */
	r9 = 0xC275E18u; UPD(0x0C7C1BA4u, 1);  /* 0C7C1BA2 mov.l @(disp,pc),Rn */
	r2 = R32(r8); UPD(0x0C7C1BA6u, 1);  /* 0C7C1BA4 mov.l @Rm,Rn */
	W32(r9, r2); UPD(0x0C7C1BA8u, 1);  /* 0C7C1BA6 mov.l Rm,@Rn */
	T = (r2 & r2) == 0;  /* 0C7C1BA8 tst Rm,Rn */
	{ u32 c_ = T; r12 = r1; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C7C1B86u, 4); goto L_0C7C1B86; } goto L_0C7C1BAE; }  /* 0C7C1BAA bt/s */
L_0C7C1BAE: BLKS(0x0C7C1BAEu);
	r10 = 0x10000u; UPD(0x0C7C1BB0u, 2);  /* 0C7C1BAE mov.l @(disp,pc),Rn */
	r2 = R32(r15 + 0x28u); UPD(0x0C7C1BB2u, 1);  /* 0C7C1BB0 mov.l @(disp,Rm),Rn */
	r11 = r1;  /* 0C7C1BB2 mov Rm,Rn */
	W32(r15 + 0x1Cu, r1); UPD(0x0C7C1BB6u, 2);  /* 0C7C1BB4 mov.l Rm,@(disp,Rn) */
	r12 += 0x28u;  /* 0C7C1BB6 add #imm,Rn */
	r2 += r10;  /* 0C7C1BB8 add Rm,Rn */
	r1 = r14;  /* 0C7C1BBA mov Rm,Rn */
	r11 += 0x2Cu;  /* 0C7C1BBC add #imm,Rn */
	{ r14 = r2; /* slot mov Rm,Rn */ UPD(0x0C7C1BF0u, 7); goto L_0C7C1BF0; }  /* 0C7C1BBE bra */
L_0C7C1BC2: BLKS(0x0C7C1BC2u);
	r3 = 0xC7C4235u; UPD(0x0C7C1BC4u, 1);  /* 0C7C1BC2 mov.l @(disp,pc),Rn */
	r7 = 0x0u;  /* 0C7C1BC4 mov #imm,Rn */
	r6 = 0x0u;  /* 0C7C1BC6 mov #imm,Rn */
	r0 = 0xC0A9EA0u; UPD(0x0C7C1BCAu, 3);  /* 0C7C1BC8 mov.l @(disp,pc),Rn */
	W8(r3, r2); UPD(0x0C7C1BCCu, 1);  /* 0C7C1BCA mov.b Rm,@Rn */
	W32(r15, r1); UPD(0x0C7C1BCEu, 1);  /* 0C7C1BCC mov.l Rm,@Rn */
	W32(r15 + 0x4u, r3); UPD(0x0C7C1BD0u, 1);  /* 0C7C1BCE mov.l Rm,@(disp,Rn) */
	r5 = R32(r15 + 0x8u); UPD(0x0C7C1BD2u, 1);  /* 0C7C1BD0 mov.l @(disp,Rm),Rn */
	IF(0x0C7C1BD2u); { u32 t_ = r0; PR = 0x0C7C1BD6u; r4 = R32(r15 + 0x14u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0A9EA0, 0x0C0A9EA0u, 0x0C7C1BD6u); }  /* 0C7C1BD2 jsr @Rn */
L_0C7C1BD6: BLKS(0x0C7C1BD6u);
	r3 = R32(r15 + 0x4u); UPD(0x0C7C1BD8u, 1);  /* 0C7C1BD6 mov.l @(disp,Rm),Rn */
	r7 = 0x1u;  /* 0C7C1BD8 mov #imm,Rn */
	r2 = R32(r15 + 0x24u); UPD(0x0C7C1BDCu, 2);  /* 0C7C1BDA mov.l @(disp,Rm),Rn */
	W8(r3, r7); UPD(0x0C7C1BDEu, 1);  /* 0C7C1BDC mov.b Rm,@Rn */
	r3 = (u32)(s32)(s8)R8(r2); UPD(0x0C7C1BE0u, 1);  /* 0C7C1BDE mov.b @Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C7C1BE0 tst Rm,Rn */
	{ u32 c_ = T; r1 = R32(r15); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C7C1C6Au, 4); goto L_0C7C1C6A; } UPD(0x0C7C1BE6u, 1); goto L_0C7C1BE6; }  /* 0C7C1BE2 bt/s */
L_0C7C1BE6: BLKS(0x0C7C1BE6u);
	IF(0x0C7C1BE6u); ;  /* 0C7C1BE6 nop */
	UPD(0x0C7C1BE8u, 1);
L_0C7C1BE8: BLKS(0x0C7C1BE8u);
	r3 = R32(r8); UPD(0x0C7C1BEAu, 1);  /* 0C7C1BE8 mov.l @Rm,Rn */
	W32(r9, r3); UPD(0x0C7C1BECu, 1);  /* 0C7C1BEA mov.l Rm,@Rn */
	T = (r3 & r3) == 0;  /* 0C7C1BEC tst Rm,Rn */
	if (T) { UPD(0x0C7C1C64u, 4); goto L_0C7C1C64; }  /* 0C7C1BEE bt */
L_0C7C1BF0: BLKS(0x0C7C1BF0u);
	r3 = 0xC386800u; UPD(0x0C7C1BF2u, 1);  /* 0C7C1BF0 mov.l @(disp,pc),Rn */
	r8 += 0x10u;  /* 0C7C1BF2 add #imm,Rn */
	r6 = R32(r12); UPD(0x0C7C1BF6u, 2);  /* 0C7C1BF4 mov.l @Rm,Rn */
	r7 = R32(r11); UPD(0x0C7C1BF8u, 1);  /* 0C7C1BF6 mov.l @Rm,Rn */
	W32(r9, r10); UPD(0x0C7C1BFAu, 1);  /* 0C7C1BF8 mov.l Rm,@Rn */
	W32(r3, r10); UPD(0x0C7C1BFCu, 1);  /* 0C7C1BFA mov.l Rm,@Rn */
	r3 = 0xC286728u; UPD(0x0C7C1BFEu, 1);  /* 0C7C1BFC mov.l @(disp,pc),Rn */
	r0 = 0xFFFFFF00u; UPD(0x0C7C1C00u, 1);  /* 0C7C1BFE mov.w @(disp,pc),Rn */
	W32(r3, r6); UPD(0x0C7C1C02u, 1);  /* 0C7C1C00 mov.l Rm,@Rn */
	r3 = 0xC275574u; UPD(0x0C7C1C04u, 1);  /* 0C7C1C02 mov.l @(disp,pc),Rn */
	r7 += r0;  /* 0C7C1C04 add Rm,Rn */
	W32(r3, r7); UPD(0x0C7C1C08u, 2);  /* 0C7C1C06 mov.l Rm,@Rn */
	r3 = r13;  /* 0C7C1C08 mov Rm,Rn */
	r3 -= r6;  /* 0C7C1C0A sub Rm,Rn */
	IF(0x0C7C1C0Cu); T = (s32)r3 >= 0;  /* 0C7C1C0C cmp/pz Rn */
	if (T) { UPD(0x0C7C1C12u, 6); goto L_0C7C1C12; }  /* 0C7C1C0E bt */
L_0C7C1C10: BLKS(0x0C7C1C10u);
	r3 = 0u - r3;  /* 0C7C1C10 neg Rm,Rn */
	UPD(0x0C7C1C12u, 1);
L_0C7C1C12: BLKS(0x0C7C1C12u);
	T = (s32)r3 >= (s32)r1;  /* 0C7C1C12 cmp/ge Rm,Rn */
	{ u32 c_ = T; r3 = R32(r15 + 0xCu); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C7C1BE8u, 4); goto L_0C7C1BE8; } UPD(0x0C7C1C18u, 1); goto L_0C7C1C18; }  /* 0C7C1C14 bt/s */
L_0C7C1C18: BLKS(0x0C7C1C18u);
	r3 -= r7;  /* 0C7C1C18 sub Rm,Rn */
	IF(0x0C7C1C1Au); T = (s32)r3 >= 0;  /* 0C7C1C1A cmp/pz Rn */
	if (T) { UPD(0x0C7C1C20u, 5); goto L_0C7C1C20; }  /* 0C7C1C1C bt */
L_0C7C1C1E: BLKS(0x0C7C1C1Eu);
	r3 = 0u - r3;  /* 0C7C1C1E neg Rm,Rn */
	UPD(0x0C7C1C20u, 1);
L_0C7C1C20: BLKS(0x0C7C1C20u);
	T = (s32)r14 > (s32)r3;  /* 0C7C1C20 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r2 = R32(r15 + 0x10u); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C7C1BE8u, 4); goto L_0C7C1BE8; } UPD(0x0C7C1C26u, 1); goto L_0C7C1C26; }  /* 0C7C1C22 bf/s */
L_0C7C1C26: BLKS(0x0C7C1C26u);
	r3 = 0x20000000u; UPD(0x0C7C1C28u, 1);  /* 0C7C1C26 mov.l @(disp,pc),Rn */
	T = (r2 & r3) == 0;  /* 0C7C1C28 tst Rm,Rn */
	{ u32 c_ = T; r2 = R32(r15 + 0x20u); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C7C1BC2u, 4); goto L_0C7C1BC2; } UPD(0x0C7C1C2Eu, 1); goto L_0C7C1C2E; }  /* 0C7C1C2A bt/s */
L_0C7C1C2E: BLKS(0x0C7C1C2Eu);
	r3 = R32(r15 + 0x1Cu); UPD(0x0C7C1C30u, 1);  /* 0C7C1C2E mov.l @(disp,Rm),Rn */
	r6 = 0x14u;  /* 0C7C1C30 mov #imm,Rn */
	r0 = 0xC0ADD10u; UPD(0x0C7C1C34u, 2);  /* 0C7C1C32 mov.l @(disp,pc),Rn */
	r3 += 0x44u;  /* 0C7C1C34 add #imm,Rn */
	r4 = R32(r12); UPD(0x0C7C1C38u, 2);  /* 0C7C1C36 mov.l @Rm,Rn */
	r5 = R32(r11); UPD(0x0C7C1C3Au, 1);  /* 0C7C1C38 mov.l @Rm,Rn */
	r7 = (u32)(s32)(s16)R16(r3); UPD(0x0C7C1C3Cu, 1);  /* 0C7C1C3A mov.w @Rm,Rn */
	W32(r15, r1); UPD(0x0C7C1C3Eu, 1);  /* 0C7C1C3C mov.l Rm,@Rn */
	IF(0x0C7C1C3Eu); { u32 t_ = r0; PR = 0x0C7C1C42u; r7 = r7 & 0xFFFF; /* slot extu.w Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0ADD10, 0x0C0ADD10u, 0x0C7C1C42u); }  /* 0C7C1C3E jsr @Rn */
L_0C7C1C42: BLKS(0x0C7C1C42u);
	r2 = R32(r15 + 0x18u); UPD(0x0C7C1C44u, 1);  /* 0C7C1C42 mov.l @(disp,Rm),Rn */
	r7 = 0x0u;  /* 0C7C1C44 mov #imm,Rn */
	r0 = 0xC0AFBA0u; UPD(0x0C7C1C48u, 2);  /* 0C7C1C46 mov.l @(disp,pc),Rn */
	r6 = 0x0u;  /* 0C7C1C48 mov #imm,Rn */
	r3 = R32(r2); UPD(0x0C7C1C4Cu, 2);  /* 0C7C1C4A mov.l @Rm,Rn */
	r5 = 0x59u;  /* 0C7C1C4C mov #imm,Rn */
	r4 = R32(r15 + 0x14u); UPD(0x0C7C1C50u, 2);  /* 0C7C1C4E mov.l @(disp,Rm),Rn */
	r3 += 0xAu;  /* 0C7C1C50 add #imm,Rn */
	W32(r2, r3); UPD(0x0C7C1C54u, 2);  /* 0C7C1C52 mov.l Rm,@Rn */
	IF(0x0C7C1C54u); { u32 t_ = r0; PR = 0x0C7C1C58u; IF(0x0C7C1C56u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0AFBA0, 0x0C0AFBA0u, 0x0C7C1C58u); }  /* 0C7C1C54 jsr @Rn */
L_0C7C1C58: BLKS(0x0C7C1C58u);
	r3 = R32(r8); UPD(0x0C7C1C5Au, 1);  /* 0C7C1C58 mov.l @Rm,Rn */
	r1 = R32(r15); UPD(0x0C7C1C5Cu, 1);  /* 0C7C1C5A mov.l @Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C7C1C5C tst Rm,Rn */
	W32(r9, r3); UPD(0x0C7C1C60u, 2);  /* 0C7C1C5E mov.l Rm,@Rn */
	if (!T) { UPD(0x0C7C1BF0u, 3); goto L_0C7C1BF0; }  /* 0C7C1C60 bf */
L_0C7C1C62: BLKS(0x0C7C1C62u);
	IF(0x0C7C1C62u); ;  /* 0C7C1C62 nop */
	UPD(0x0C7C1C64u, 1);
L_0C7C1C64: BLKS(0x0C7C1C64u);
	r14 = r1;  /* 0C7C1C64 mov Rm,Rn */
	{ r1 = R32(r15 + 0x1Cu); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C7C1B86u, 4); goto L_0C7C1B86; }  /* 0C7C1C66 bra */
L_0C7C1C6A: BLKS(0x0C7C1C6Au);
	r0 = 0xC066270u; UPD(0x0C7C1C6Cu, 1);  /* 0C7C1C6A mov.l @(disp,pc),Rn */
	r7 = 0x0u;  /* 0C7C1C6C mov #imm,Rn */
	r4 = R32(r15 + 0x14u); UPD(0x0C7C1C70u, 2);  /* 0C7C1C6E mov.l @(disp,Rm),Rn */
	r6 = 0x0u;  /* 0C7C1C70 mov #imm,Rn */
	IF(0x0C7C1C72u); { u32 t_ = r0; PR = 0x0C7C1C76u; r5 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C066270, 0x0C066270u, 0x0C7C1C76u); }  /* 0C7C1C72 jsr @Rn */
L_0C7C1C76: BLKS(0x0C7C1C76u);
	r0 = 0x0u;  /* 0C7C1C76 mov #imm,Rn */
	UPD(0x0C7C1C78u, 1);
L_0C7C1C78: BLKS(0x0C7C1C78u);
	r15 += 0x38u;  /* 0C7C1C78 add #imm,Rn */
	IF(0x0C7C1C7Au); PR = R32(r15); r15 += 4; UPD(0x0C7C1C7Cu, 2);  /* 0C7C1C7A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C7C1C7Eu, 1);  /* 0C7C1C7C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C7C1C80u, 1);  /* 0C7C1C7E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C7C1C82u, 1);  /* 0C7C1C80 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C7C1C84u, 1);  /* 0C7C1C82 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C7C1C86u, 1);  /* 0C7C1C84 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C1C88u, 1);  /* 0C7C1C86 mov.l @Rm+,Rn */
	IF(0x0C7C1C88u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C7C1C88 rts */
L_0C7C1D0C: BLKS(0x0C7C1D0Cu);
	r0 = 0xC05F460u; UPD(0x0C7C1D0Eu, 1);  /* 0C7C1D0C mov.l @(disp,pc),Rn */
	r15 += 0x38u;  /* 0C7C1D0E add #imm,Rn */
	IF(0x0C7C1D10u); PR = R32(r15); r15 += 4; UPD(0x0C7C1D12u, 2);  /* 0C7C1D10 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C7C1D14u, 1);  /* 0C7C1D12 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C7C1D16u, 1);  /* 0C7C1D14 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C7C1D18u, 1);  /* 0C7C1D16 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C7C1D1Au, 1);  /* 0C7C1D18 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C7C1D1Cu, 1);  /* 0C7C1D1A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C1D1Eu, 1);  /* 0C7C1D1C mov.l @Rm+,Rn */
	IF(0x0C7C1D1Eu); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C05F460u: TAIL(f_0C05F460); default: JUMPD(tv_); } }  /* 0C7C1D1E jmp @Rn */
L_0C7C1D22: BLKS(0x0C7C1D22u);
	r1 = 0xC2864F8u; UPD(0x0C7C1D24u, 1);  /* 0C7C1D22 mov.l @(disp,pc),Rn */
	r3 = R32(r3 + 0xCu); UPD(0x0C7C1D26u, 1);  /* 0C7C1D24 mov.l @(disp,Rm),Rn */
	r2 = R32(r15 + 0x2Cu); UPD(0x0C7C1D28u, 1);  /* 0C7C1D26 mov.l @(disp,Rm),Rn */
	W32(r15 + 0x10u, r3); UPD(0x0C7C1D2Au, 1);  /* 0C7C1D28 mov.l Rm,@(disp,Rn) */
	T = (r3 & r3) == 0;  /* 0C7C1D2A tst Rm,Rn */
	W32(r1, r3); UPD(0x0C7C1D2Eu, 2);  /* 0C7C1D2C mov.l Rm,@Rn */
	{ u32 c_ = T; r2 += 0x10u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C7C1C76u, 3); goto L_0C7C1C76; } goto L_0C7C1D32; }  /* 0C7C1D2E bt/s */
L_0C7C1D32: BLKS(0x0C7C1D32u);
	{ W32(r15 + 0x2Cu, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C7C1B42u, 4); goto L_0C7C1B42; }  /* 0C7C1D32 bra */
}

/* arr_kill_option_c */
void f_0C7C1D40(sh3_t *c)
{
	LOCALS;
L_0C7C1D40: BLKS(0x0C7C1D40u);
	r2 = 0xC21CA15u; UPD(0x0C7C1D42u, 1);  /* 0C7C1D40 mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s8)R8(r2); UPD(0x0C7C1D44u, 1);  /* 0C7C1D42 mov.b @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C7C1D44 tst Rm,Rn */
	{ u32 c_ = !T; r3 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C7C1DA6u, 4); goto L_0C7C1DA6; } goto L_0C7C1D4A; }  /* 0C7C1D46 bf/s */
L_0C7C1D4A: BLKS(0x0C7C1D4Au);
	r7 = 0x2800u; UPD(0x0C7C1D4Cu, 2);  /* 0C7C1D4A mov.w @(disp,pc),Rn */
	r2 = 0x1u;  /* 0C7C1D4C mov #imm,Rn */
	r1 = r6;  /* 0C7C1D4E mov Rm,Rn */
	r2 &= r4;  /* 0C7C1D50 and Rm,Rn */
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C7C1D54u, 4);  /* 0C7C1D52 mov.l Rm,@-Rn */
	MACL = (u32)(u16)r2 * (u32)(u16)r7;  /* 0C7C1D54 mulu.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C7C1D58u, 3);  /* 0C7C1D56 mov.l Rm,@-Rn */
	r8 = 0x1u;  /* 0C7C1D58 mov #imm,Rn */
	IF(0x0C7C1D5Au); r15 -= 4; W32(r15, PR); UPD(0x0C7C1D5Cu, 2);  /* 0C7C1D5A sts.l pr,@-Rn */
	IF(0x0C7C1D5Cu); r6 = MACL;  /* 0C7C1D5C sts macl,Rn */
	r2 = 0xC217A0Cu; UPD(0x0C7C1D60u, 2);  /* 0C7C1D5E mov.l @(disp,pc),Rn */
	r6 += r1;  /* 0C7C1D60 add Rm,Rn */
	r1 = 0xC217A08u; UPD(0x0C7C1D64u, 2);  /* 0C7C1D62 mov.l @(disp,pc),Rn */
	r1 += r6;  /* 0C7C1D64 add Rm,Rn */
	r1 = R32(r1); UPD(0x0C7C1D68u, 2);  /* 0C7C1D66 mov.l @Rm,Rn */
	r6 += r2;  /* 0C7C1D68 add Rm,Rn */
	r0 = R32(r6); UPD(0x0C7C1D6Cu, 2);  /* 0C7C1D6A mov.l @Rm,Rn */
	r2 = r1;  /* 0C7C1D6C mov Rm,Rn */
	r2 += 0xFFFFFFFFu;  /* 0C7C1D6E add #imm,Rn */
	T = r2 > r8;  /* 0C7C1D70 cmp/hi Rm,Rn */
	{ u32 c_ = !T; r2 = r1; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C7C1D96u, 6); goto L_0C7C1D96; } goto L_0C7C1D76; }  /* 0C7C1D72 bf/s */
L_0C7C1D76: BLKS(0x0C7C1D76u);
	r2 += 0xFFFFFFF7u;  /* 0C7C1D76 add #imm,Rn */
	T = r2 > r8;  /* 0C7C1D78 cmp/hi Rm,Rn */
	{ u32 c_ = !T; T = (r1 & r1) == 0; /* slot tst Rm,Rn */ if (c_) { UPD(0x0C7C1DACu, 6); goto L_0C7C1DAC; } goto L_0C7C1D7E; }  /* 0C7C1D7A bf/s */
L_0C7C1D7E: BLKS(0x0C7C1D7Eu);
	if (T) { UPD(0x0C7C1DACu, 4); goto L_0C7C1DAC; }  /* 0C7C1D7E bt */
L_0C7C1D80: BLKS(0x0C7C1D80u);
	r9 = 0xC7C4235u; UPD(0x0C7C1D82u, 1);  /* 0C7C1D80 mov.l @(disp,pc),Rn */
	W8(r9, r8); UPD(0x0C7C1D84u, 1);  /* 0C7C1D82 mov.b Rm,@Rn */
L_0C7C1D84: BLKS(0x0C7C1D84u);
	r0 = 0xC0A9EA0u; UPD(0x0C7C1D86u, 1);  /* 0C7C1D84 mov.l @(disp,pc),Rn */
	r7 = 0x0u;  /* 0C7C1D86 mov #imm,Rn */
	IF(0x0C7C1D88u); { u32 t_ = r0; PR = 0x0C7C1D8Cu; r6 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A9EA0, 0x0C0A9EA0u, 0x0C7C1D8Cu); }  /* 0C7C1D88 jsr @Rn */
L_0C7C1D8C: BLKS(0x0C7C1D8Cu);
	W8(r9, r8); UPD(0x0C7C1D8Eu, 1);  /* 0C7C1D8C mov.b Rm,@Rn */
L_0C7C1D8E: BLKS(0x0C7C1D8Eu);
	IF(0x0C7C1D8Eu); PR = R32(r15); r15 += 4; UPD(0x0C7C1D90u, 1);  /* 0C7C1D8E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C1D92u, 1);  /* 0C7C1D90 mov.l @Rm+,Rn */
	IF(0x0C7C1D92u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C7C1D92 rts */
L_0C7C1D96: BLKS(0x0C7C1D96u);
	T = r0 == 0x1u;  /* 0C7C1D96 cmp/eq #imm,r0 */
	{ u32 c_ = T; T = (r0 & r0) == 0; /* slot tst Rm,Rn */ if (c_) { UPD(0x0C7C1DC6u, 4); goto L_0C7C1DC6; } goto L_0C7C1D9C; }  /* 0C7C1D98 bt/s */
L_0C7C1D9C: BLKS(0x0C7C1D9Cu);
	if (T) { UPD(0x0C7C1D8Eu, 4); goto L_0C7C1D8E; }  /* 0C7C1D9C bt */
L_0C7C1D9E: BLKS(0x0C7C1D9Eu);
	r9 = 0xC7C4235u; UPD(0x0C7C1DA0u, 1);  /* 0C7C1D9E mov.l @(disp,pc),Rn */
	W8(r9, r3); UPD(0x0C7C1DA2u, 1);  /* 0C7C1DA0 mov.b Rm,@Rn */
	{ IF(0x0C7C1DA4u); ; /* slot nop */ UPD(0x0C7C1D84u, 3); goto L_0C7C1D84; }  /* 0C7C1DA2 bra */
L_0C7C1DA6: BLKS(0x0C7C1DA6u);
	r0 = 0xC0A9EA0u; UPD(0x0C7C1DA8u, 1);  /* 0C7C1DA6 mov.l @(disp,pc),Rn */
	IF(0x0C7C1DA8u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); r6 = 0x0u; /* slot mov #imm,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A9EA0u: TAIL(f_0C0A9EA0); default: JUMPD(tv_); } }  /* 0C7C1DA8 jmp @Rn */
L_0C7C1DAC: BLKS(0x0C7C1DACu);
	r8 = 0xC7C4235u; UPD(0x0C7C1DAEu, 1);  /* 0C7C1DAC mov.l @(disp,pc),Rn */
	r1 = 0x0u;  /* 0C7C1DAE mov #imm,Rn */
	UPD(0x0C7C1DB0u, 1);
L_0C7C1DB0: BLKS(0x0C7C1DB0u);
	r0 = 0xC0A9EA0u; UPD(0x0C7C1DB2u, 1);  /* 0C7C1DB0 mov.l @(disp,pc),Rn */
	r7 = 0x0u;  /* 0C7C1DB2 mov #imm,Rn */
	W8(r8, r1); UPD(0x0C7C1DB6u, 2);  /* 0C7C1DB4 mov.b Rm,@Rn */
	IF(0x0C7C1DB6u); { u32 t_ = r0; PR = 0x0C7C1DBAu; r6 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A9EA0, 0x0C0A9EA0u, 0x0C7C1DBAu); }  /* 0C7C1DB6 jsr @Rn */
L_0C7C1DBA: BLKS(0x0C7C1DBAu);
	r1 = 0x1u;  /* 0C7C1DBA mov #imm,Rn */
	W8(r8, r1); UPD(0x0C7C1DBEu, 2);  /* 0C7C1DBC mov.b Rm,@Rn */
	IF(0x0C7C1DBEu); PR = R32(r15); r15 += 4; UPD(0x0C7C1DC0u, 1);  /* 0C7C1DBE lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C1DC2u, 1);  /* 0C7C1DC0 mov.l @Rm+,Rn */
	IF(0x0C7C1DC2u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C7C1DC2 rts */
L_0C7C1DC6: BLKS(0x0C7C1DC6u);
	r8 = 0xC7C4235u; UPD(0x0C7C1DC8u, 1);  /* 0C7C1DC6 mov.l @(disp,pc),Rn */
	{ r1 = 0x2u; /* slot mov #imm,Rn */ UPD(0x0C7C1DB0u, 3); goto L_0C7C1DB0; }  /* 0C7C1DC8 bra */
}

/* arr_defl_cos_c */
void f_0C7C1DE4(sh3_t *c)
{
	LOCALS;
L_0C7C1DE4: BLKS(0x0C7C1DE4u);
	r1 = 0xC21CA15u; UPD(0x0C7C1DE6u, 1);  /* 0C7C1DE4 mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C1DE8u, 1);  /* 0C7C1DE6 mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C1DE8 tst Rm,Rn */
	{ u32 c_ = T; r1 = r6; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C7C1DF4u, 4); goto L_0C7C1DF4; } goto L_0C7C1DEE; }  /* 0C7C1DEA bt/s */
L_0C7C1DEE: BLKS(0x0C7C1DEEu);
	r0 = 0xC058060u; UPD(0x0C7C1DF0u, 2);  /* 0C7C1DEE mov.l @(disp,pc),Rn */
	IF(0x0C7C1DF0u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); r6 = 0x0u; /* slot mov #imm,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C058060u: TAIL(f_0C058060); default: JUMPD(tv_); } }  /* 0C7C1DF0 jmp @Rn */
L_0C7C1DF4: BLKS(0x0C7C1DF4u);
	r1 += 0x2Cu;  /* 0C7C1DF4 add #imm,Rn */
	r1 = (u32)(s32)(s16)R16(r1); UPD(0x0C7C1DF8u, 2);  /* 0C7C1DF6 mov.w @Rm,Rn */
	r2 = 0x1FFu; UPD(0x0C7C1DFAu, 1);  /* 0C7C1DF8 mov.w @(disp,pc),Rn */
	r4 -= r1;  /* 0C7C1DFA sub Rm,Rn */
	r5 = R32(r6 + 0x20u); UPD(0x0C7C1DFEu, 2);  /* 0C7C1DFC mov.l @(disp,Rm),Rn */
	r4 &= r2;  /* 0C7C1DFE and Rm,Rn */
	r2 = 0xFFu; UPD(0x0C7C1E02u, 2);  /* 0C7C1E00 mov.w @(disp,pc),Rn */
	r4 += 0xFFFFFF80u;  /* 0C7C1E02 add #imm,Rn */
	T = r4 > r2;  /* 0C7C1E04 cmp/hi Rm,Rn */
	{ u32 c_ = T; r4 = r1; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C7C1E14u, 5); goto L_0C7C1E14; } goto L_0C7C1E0A; }  /* 0C7C1E06 bt/s */
L_0C7C1E0A: BLKS(0x0C7C1E0Au);
	r2 = 0xFFFFFFFDu;  /* 0C7C1E0A mov #imm,Rn */
	IF(0x0C7C1E0Cu); ARG0(0x452Cu); { s32 s_ = (s32)r2; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = (u32)((s32)r5 >> 31); else r5 = (u32)((s32)r5 >> ((~s_ & 31) + 1)); }  /* 0C7C1E0C shad Rm,Rn */
	UPD(0x0C7C1E0Eu, 3);
L_0C7C1E0E: BLKS(0x0C7C1E0Eu);
	r0 = 0xC058060u; UPD(0x0C7C1E10u, 1);  /* 0C7C1E0E mov.l @(disp,pc),Rn */
	IF(0x0C7C1E10u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); r6 = 0x0u; /* slot mov #imm,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C058060u: TAIL(f_0C058060); default: JUMPD(tv_); } }  /* 0C7C1E10 jmp @Rn */
L_0C7C1E14: BLKS(0x0C7C1E14u);
	IF(0x0C7C1E14u); T = r5 & 1; r5 = (u32)((s32)r5 >> 1);  /* 0C7C1E14 shar Rn */
	{ IF(0x0C7C1E18u); T = r5 & 1; r5 = (u32)((s32)r5 >> 1); /* slot shar Rn */ UPD(0x0C7C1E0Eu, 4); goto L_0C7C1E0E; }  /* 0C7C1E16 bra */
}

/* arr_defl_sin_c */
void f_0C7C1E28(sh3_t *c)
{
	LOCALS;
L_0C7C1E28: BLKS(0x0C7C1E28u);
	r1 = 0xC21CA15u; UPD(0x0C7C1E2Au, 1);  /* 0C7C1E28 mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C1E2Cu, 1);  /* 0C7C1E2A mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C1E2C tst Rm,Rn */
	{ u32 c_ = T; r1 = r6; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C7C1E38u, 4); goto L_0C7C1E38; } goto L_0C7C1E32; }  /* 0C7C1E2E bt/s */
L_0C7C1E32: BLKS(0x0C7C1E32u);
	r0 = 0xC058030u; UPD(0x0C7C1E34u, 2);  /* 0C7C1E32 mov.l @(disp,pc),Rn */
	IF(0x0C7C1E34u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); r6 = 0x0u; /* slot mov #imm,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C058030u: TAIL(f_0C058030); default: JUMPD(tv_); } }  /* 0C7C1E34 jmp @Rn */
L_0C7C1E38: BLKS(0x0C7C1E38u);
	r1 += 0x2Cu;  /* 0C7C1E38 add #imm,Rn */
	r1 = (u32)(s32)(s16)R16(r1); UPD(0x0C7C1E3Cu, 2);  /* 0C7C1E3A mov.w @Rm,Rn */
	r2 = 0x1FFu; UPD(0x0C7C1E3Eu, 1);  /* 0C7C1E3C mov.w @(disp,pc),Rn */
	r4 -= r1;  /* 0C7C1E3E sub Rm,Rn */
	r5 = R32(r6 + 0x20u); UPD(0x0C7C1E42u, 2);  /* 0C7C1E40 mov.l @(disp,Rm),Rn */
	r4 &= r2;  /* 0C7C1E42 and Rm,Rn */
	r2 = 0xFFu; UPD(0x0C7C1E46u, 2);  /* 0C7C1E44 mov.w @(disp,pc),Rn */
	r4 += 0xFFFFFF80u;  /* 0C7C1E46 add #imm,Rn */
	T = r4 > r2;  /* 0C7C1E48 cmp/hi Rm,Rn */
	{ u32 c_ = T; r4 = r1; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C7C1E58u, 5); goto L_0C7C1E58; } goto L_0C7C1E4E; }  /* 0C7C1E4A bt/s */
L_0C7C1E4E: BLKS(0x0C7C1E4Eu);
	r2 = 0xFFFFFFFDu;  /* 0C7C1E4E mov #imm,Rn */
	IF(0x0C7C1E50u); ARG0(0x452Cu); { s32 s_ = (s32)r2; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = (u32)((s32)r5 >> 31); else r5 = (u32)((s32)r5 >> ((~s_ & 31) + 1)); }  /* 0C7C1E50 shad Rm,Rn */
	UPD(0x0C7C1E52u, 3);
L_0C7C1E52: BLKS(0x0C7C1E52u);
	r0 = 0xC058030u; UPD(0x0C7C1E54u, 1);  /* 0C7C1E52 mov.l @(disp,pc),Rn */
	IF(0x0C7C1E54u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); r6 = 0x0u; /* slot mov #imm,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C058030u: TAIL(f_0C058030); default: JUMPD(tv_); } }  /* 0C7C1E54 jmp @Rn */
L_0C7C1E58: BLKS(0x0C7C1E58u);
	IF(0x0C7C1E58u); T = r5 & 1; r5 = (u32)((s32)r5 >> 1);  /* 0C7C1E58 shar Rn */
	{ IF(0x0C7C1E5Cu); T = r5 & 1; r5 = (u32)((s32)r5 >> 1); /* slot shar Rn */ UPD(0x0C7C1E52u, 4); goto L_0C7C1E52; }  /* 0C7C1E5A bra */
}

/* arr_deflect_opt */
void f_0C7C1E6C(sh3_t *c)
{
	LOCALS;
L_0C7C1E6C: BLKS(0x0C7C1E6Cu);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C7C1E6Eu, 1);  /* 0C7C1E6C mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C7C1E70u, 1);  /* 0C7C1E6E mov.l Rm,@-Rn */
	r9 = r7;  /* 0C7C1E70 mov Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C7C1E74u, 2);  /* 0C7C1E72 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C7C1E76u, 1);  /* 0C7C1E74 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C7C1E78u, 1);  /* 0C7C1E76 mov.l Rm,@-Rn */
	r1 = 0xC21CA15u; UPD(0x0C7C1E7Au, 1);  /* 0C7C1E78 mov.l @(disp,pc),Rn */
	IF(0x0C7C1E7Au); r15 -= 4; W32(r15, PR); UPD(0x0C7C1E7Cu, 1);  /* 0C7C1E7A sts.l pr,@-Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C1E7Eu, 1);  /* 0C7C1E7C mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C1E7E tst Rm,Rn */
	if (!T) { UPD(0x0C7C1F2Eu, 4); goto L_0C7C1F2E; }  /* 0C7C1E80 bf */
L_0C7C1E82: BLKS(0x0C7C1E82u);
	r1 = 0x340u; UPD(0x0C7C1E84u, 1);  /* 0C7C1E82 mov.w @(disp,pc),Rn */
	r3 = 0xC21F8A0u; UPD(0x0C7C1E86u, 1);  /* 0C7C1E84 mov.l @(disp,pc),Rn */
	MACL = (u32)((s32)(s16)r5 * (s32)(s16)r1);  /* 0C7C1E86 muls.w Rm,Rn */
	r1 = 0x34u;  /* 0C7C1E88 mov #imm,Rn */
	r2 = 0x800000u; UPD(0x0C7C1E8Cu, 4);  /* 0C7C1E8A mov.l @(disp,pc),Rn */
	r10 = 0x800000u; UPD(0x0C7C1E8Eu, 1);  /* 0C7C1E8C mov.l @(disp,pc),Rn */
	IF(0x0C7C1E8Eu); r8 = MACL;  /* 0C7C1E8E sts macl,Rn */
	MACL = (u32)((s32)(s16)r6 * (s32)(s16)r1);  /* 0C7C1E90 muls.w Rm,Rn */
	IF(0x0C7C1E92u); r1 = MACL;  /* 0C7C1E92 sts macl,Rn */
	r8 += r1;  /* 0C7C1E94 add Rm,Rn */
	r1 = 0x9C0u; UPD(0x0C7C1E98u, 6);  /* 0C7C1E96 mov.w @(disp,pc),Rn */
	MACL = (u32)((s32)(s16)r4 * (s32)(s16)r1);  /* 0C7C1E98 muls.w Rm,Rn */
	IF(0x0C7C1E9Au); r1 = MACL;  /* 0C7C1E9A sts macl,Rn */
	r8 += r1;  /* 0C7C1E9C add Rm,Rn */
	r3 += r8;  /* 0C7C1E9E add Rm,Rn */
	r1 = R32(r3); UPD(0x0C7C1EA2u, 6);  /* 0C7C1EA0 mov.l @Rm,Rn */
	T = (r1 & r2) == 0;  /* 0C7C1EA2 tst Rm,Rn */
	{ u32 c_ = !T; r10 &= r1; /* slot and Rm,Rn */ if (c_) { UPD(0x0C7C1F1Eu, 4); goto L_0C7C1F1E; } goto L_0C7C1EA8; }  /* 0C7C1EA4 bf/s */
L_0C7C1EA8: BLKS(0x0C7C1EA8u);
	r7 = 0xF7FFFFFFu; UPD(0x0C7C1EAAu, 2);  /* 0C7C1EA8 mov.l @(disp,pc),Rn */
	r6 = 0x0u;  /* 0C7C1EAA mov #imm,Rn */
	r11 = 0xC21F8A8u; UPD(0x0C7C1EAEu, 2);  /* 0C7C1EAC mov.l @(disp,pc),Rn */
	r5 = 0x0u;  /* 0C7C1EAE mov #imm,Rn */
	r1 &= r7;  /* 0C7C1EB0 and Rm,Rn */
	r0 = 0xC050D70u; UPD(0x0C7C1EB4u, 3);  /* 0C7C1EB2 mov.l @(disp,pc),Rn */
	r11 += r8;  /* 0C7C1EB4 add Rm,Rn */
	r2 = R32(r11); UPD(0x0C7C1EB8u, 2);  /* 0C7C1EB6 mov.l @Rm,Rn */
	r7 = 0x0u;  /* 0C7C1EB8 mov #imm,Rn */
	W32(r3, r1); UPD(0x0C7C1EBCu, 2);  /* 0C7C1EBA mov.l Rm,@Rn */
	r4 = 0x4u;  /* 0C7C1EBC mov #imm,Rn */
	r1 = 0xC21F8A4u; UPD(0x0C7C1EC0u, 2);  /* 0C7C1EBE mov.l @(disp,pc),Rn */
	r1 += r8;  /* 0C7C1EC0 add Rm,Rn */
	W32(r1, r10); UPD(0x0C7C1EC4u, 2);  /* 0C7C1EC2 mov.l Rm,@Rn */
	r1 = r2;  /* 0C7C1EC4 mov Rm,Rn */
	r2 = 0xC16D3B4u; UPD(0x0C7C1EC8u, 2);  /* 0C7C1EC6 mov.l @(disp,pc),Rn */
	IF(0x0C7C1EC8u); r1 <<= 2;  /* 0C7C1EC8 shll2 Rn */
	r1 += r2;  /* 0C7C1ECA add Rm,Rn */
	r12 = R32(r1); UPD(0x0C7C1ECEu, 3);  /* 0C7C1ECC mov.l @Rm,Rn */
	IF(0x0C7C1ECEu); { u32 t_ = r0; PR = 0x0C7C1ED2u; IF(0x0C7C1ED0u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C7C1ED2u); }  /* 0C7C1ECE jsr @Rn */
L_0C7C1ED2: BLKS(0x0C7C1ED2u);
	r1 = 0xC21F8ACu; UPD(0x0C7C1ED4u, 1);  /* 0C7C1ED2 mov.l @(disp,pc),Rn */
	r12 += r0;  /* 0C7C1ED4 add Rm,Rn */
	W32(r11, r12); UPD(0x0C7C1ED8u, 2);  /* 0C7C1ED6 mov.l Rm,@Rn */
	r1 += r8;  /* 0C7C1ED8 add Rm,Rn */
	r3 = 0x20000000u; UPD(0x0C7C1EDCu, 2);  /* 0C7C1EDA mov.l @(disp,pc),Rn */
	W32(r1, r10); UPD(0x0C7C1EDEu, 1);  /* 0C7C1EDC mov.l Rm,@Rn */
	r1 = 0xC21F8D0u; UPD(0x0C7C1EE0u, 1);  /* 0C7C1EDE mov.l @(disp,pc),Rn */
	T = (r9 & r3) == 0;  /* 0C7C1EE0 tst Rm,Rn */
	r1 += r8;  /* 0C7C1EE2 add Rm,Rn */
	W8(r1, r10); UPD(0x0C7C1EE6u, 3);  /* 0C7C1EE4 mov.b Rm,@Rn */
	r1 = 0xC21F8CCu; UPD(0x0C7C1EE8u, 1);  /* 0C7C1EE6 mov.l @(disp,pc),Rn */
	r1 += r8;  /* 0C7C1EE8 add Rm,Rn */
	r10 = (u32)(s32)(s16)R16(r1); UPD(0x0C7C1EECu, 2);  /* 0C7C1EEA mov.w @Rm,Rn */
	r1 = 0xC21F8C0u; UPD(0x0C7C1EEEu, 1);  /* 0C7C1EEC mov.l @(disp,pc),Rn */
	r1 += r8;  /* 0C7C1EEE add Rm,Rn */
	r1 = R32(r1); UPD(0x0C7C1EF2u, 2);  /* 0C7C1EF0 mov.l @Rm,Rn */
	if (T) { UPD(0x0C7C1F3Eu, 3); goto L_0C7C1F3E; }  /* 0C7C1EF2 bt */
L_0C7C1EF4: BLKS(0x0C7C1EF4u);
	r2 = 0xFFFFFFFDu;  /* 0C7C1EF4 mov #imm,Rn */
	r9 = r1;  /* 0C7C1EF6 mov Rm,Rn */
	IF(0x0C7C1EF8u); ARG0(0x492Cu); { s32 s_ = (s32)r2; if (s_ >= 0) r9 <<= (s_ & 31); else if ((s_ & 31) == 0) r9 = (u32)((s32)r9 >> 31); else r9 = (u32)((s32)r9 >> ((~s_ & 31) + 1)); }  /* 0C7C1EF8 shad Rm,Rn */
	UPD(0x0C7C1EFAu, 3);
L_0C7C1EFA: BLKS(0x0C7C1EFAu);
	r0 = 0xC058060u; UPD(0x0C7C1EFCu, 1);  /* 0C7C1EFA mov.l @(disp,pc),Rn */
	r7 = 0x0u;  /* 0C7C1EFC mov #imm,Rn */
	r6 = 0x0u;  /* 0C7C1EFE mov #imm,Rn */
	r5 = r9;  /* 0C7C1F00 mov Rm,Rn */
	r11 = 0xC21F8B8u; UPD(0x0C7C1F04u, 4);  /* 0C7C1F02 mov.l @(disp,pc),Rn */
	IF(0x0C7C1F04u); { u32 t_ = r0; PR = 0x0C7C1F08u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C7C1F08u); }  /* 0C7C1F04 jsr @Rn */
L_0C7C1F08: BLKS(0x0C7C1F08u);
	r11 += r8;  /* 0C7C1F08 add Rm,Rn */
	r2 = 0xC21F8BCu; UPD(0x0C7C1F0Cu, 2);  /* 0C7C1F0A mov.l @(disp,pc),Rn */
	W32(r11, r0); UPD(0x0C7C1F0Eu, 1);  /* 0C7C1F0C mov.l Rm,@Rn */
	r7 = 0x0u;  /* 0C7C1F0E mov #imm,Rn */
	r0 = 0xC058030u; UPD(0x0C7C1F12u, 2);  /* 0C7C1F10 mov.l @(disp,pc),Rn */
	r8 += r2;  /* 0C7C1F12 add Rm,Rn */
	r6 = 0x0u;  /* 0C7C1F14 mov #imm,Rn */
	r5 = r9;  /* 0C7C1F16 mov Rm,Rn */
	IF(0x0C7C1F18u); { u32 t_ = r0; PR = 0x0C7C1F1Cu; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 5); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C7C1F1Cu); }  /* 0C7C1F18 jsr @Rn */
L_0C7C1F1C: BLKS(0x0C7C1F1Cu);
	W32(r8, r0); UPD(0x0C7C1F1Eu, 1);  /* 0C7C1F1C mov.l Rm,@Rn */
L_0C7C1F1E: BLKS(0x0C7C1F1Eu);
	r0 = 0x0u;  /* 0C7C1F1E mov #imm,Rn */
	IF(0x0C7C1F20u); PR = R32(r15); r15 += 4; UPD(0x0C7C1F22u, 2);  /* 0C7C1F20 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C7C1F24u, 1);  /* 0C7C1F22 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C7C1F26u, 1);  /* 0C7C1F24 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C7C1F28u, 1);  /* 0C7C1F26 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C1F2Au, 1);  /* 0C7C1F28 mov.l @Rm+,Rn */
	IF(0x0C7C1F2Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C7C1F2A rts */
L_0C7C1F2E: BLKS(0x0C7C1F2Eu);
	r0 = 0xC065C80u; UPD(0x0C7C1F30u, 1);  /* 0C7C1F2E mov.l @(disp,pc),Rn */
	IF(0x0C7C1F30u); PR = R32(r15); r15 += 4; UPD(0x0C7C1F32u, 1);  /* 0C7C1F30 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C7C1F34u, 1);  /* 0C7C1F32 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C7C1F36u, 1);  /* 0C7C1F34 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C7C1F38u, 1);  /* 0C7C1F36 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C1F3Au, 1);  /* 0C7C1F38 mov.l @Rm+,Rn */
	IF(0x0C7C1F3Au); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C7C1F3A jmp @Rn */
L_0C7C1F3E: BLKS(0x0C7C1F3Eu);
	r9 = r1;  /* 0C7C1F3E mov Rm,Rn */
	IF(0x0C7C1F40u); T = r9 & 1; r9 = (u32)((s32)r9 >> 1);  /* 0C7C1F40 shar Rn */
	{ IF(0x0C7C1F44u); T = r9 & 1; r9 = (u32)((s32)r9 >> 1); /* slot shar Rn */ UPD(0x0C7C1EFAu, 5); goto L_0C7C1EFA; }  /* 0C7C1F42 bra */
}

/* arr_expl_cancel */
void f_0C7C1F94(sh3_t *c)
{
	LOCALS;
L_0C7C1F94: BLKS(0x0C7C1F94u);
	IF(0x0C7C1F94u); r15 -= 4; W32(r15, PR); UPD(0x0C7C1F96u, 1);  /* 0C7C1F94 sts.l pr,@-Rn */
	r15 += 0xFFFFFFF0u;  /* 0C7C1F96 add #imm,Rn */
	r0 = 0xC0AC3B0u; UPD(0x0C7C1F9Au, 2);  /* 0C7C1F98 mov.l @(disp,pc),Rn */
	r1 = R32(r15 + 0x20u); UPD(0x0C7C1F9Cu, 1);  /* 0C7C1F9A mov.l @(disp,Rm),Rn */
	W32(r15 + 0xCu, r1); UPD(0x0C7C1F9Eu, 1);  /* 0C7C1F9C mov.l Rm,@(disp,Rn) */
	r1 = R32(r15 + 0x1Cu); UPD(0x0C7C1FA0u, 1);  /* 0C7C1F9E mov.l @(disp,Rm),Rn */
	W32(r15 + 0x8u, r1); UPD(0x0C7C1FA2u, 1);  /* 0C7C1FA0 mov.l Rm,@(disp,Rn) */
	r1 = R32(r15 + 0x18u); UPD(0x0C7C1FA4u, 1);  /* 0C7C1FA2 mov.l @(disp,Rm),Rn */
	W32(r15 + 0x4u, r1); UPD(0x0C7C1FA6u, 1);  /* 0C7C1FA4 mov.l Rm,@(disp,Rn) */
	r1 = R32(r15 + 0x14u); UPD(0x0C7C1FA8u, 1);  /* 0C7C1FA6 mov.l @(disp,Rm),Rn */
	IF(0x0C7C1FA8u); { u32 t_ = r0; PR = 0x0C7C1FACu; W32(r15, r1); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C0AC3B0, 0x0C0AC3B0u, 0x0C7C1FACu); }  /* 0C7C1FA8 jsr @Rn */
L_0C7C1FAC: BLKS(0x0C7C1FACu);
	r1 = 0xC21CA15u; UPD(0x0C7C1FAEu, 1);  /* 0C7C1FAC mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C1FB0u, 1);  /* 0C7C1FAE mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C1FB0 tst Rm,Rn */
	{ u32 c_ = !T; r2 = 0x10u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C7C1FBAu, 4); goto L_0C7C1FBA; } goto L_0C7C1FB6; }  /* 0C7C1FB2 bf/s */
L_0C7C1FB6: BLKS(0x0C7C1FB6u);
	r1 = 0xC7C4298u; UPD(0x0C7C1FB8u, 2);  /* 0C7C1FB6 mov.l @(disp,pc),Rn */
	W32(r1, r2); UPD(0x0C7C1FBAu, 1);  /* 0C7C1FB8 mov.l Rm,@Rn */
L_0C7C1FBA: BLKS(0x0C7C1FBAu);
	r15 += 0x10u;  /* 0C7C1FBA add #imm,Rn */
	IF(0x0C7C1FBCu); PR = R32(r15); r15 += 4; UPD(0x0C7C1FBEu, 2);  /* 0C7C1FBC lds.l @Rn+,pr */
	IF(0x0C7C1FBEu); { u32 t_ = PR; IF(0x0C7C1FC0u); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C7C1FBE rts */
}

/* arr_voice_cancel */
void f_0C7C1FD0(sh3_t *c)
{
	LOCALS;
L_0C7C1FD0: BLKS(0x0C7C1FD0u);
	r0 = 0xC0AFCF0u; UPD(0x0C7C1FD2u, 1);  /* 0C7C1FD0 mov.l @(disp,pc),Rn */
	IF(0x0C7C1FD2u); r15 -= 4; W32(r15, PR); UPD(0x0C7C1FD4u, 1);  /* 0C7C1FD2 sts.l pr,@-Rn */
	IF(0x0C7C1FD4u); { u32 t_ = r0; PR = 0x0C7C1FD8u; IF(0x0C7C1FD6u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0AFCF0, 0x0C0AFCF0u, 0x0C7C1FD8u); }  /* 0C7C1FD4 jsr @Rn */
L_0C7C1FD8: BLKS(0x0C7C1FD8u);
	r1 = 0xC21CA15u; UPD(0x0C7C1FDAu, 1);  /* 0C7C1FD8 mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C1FDCu, 1);  /* 0C7C1FDA mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C1FDC tst Rm,Rn */
	{ u32 c_ = !T; r2 = 0x10u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C7C1FE6u, 4); goto L_0C7C1FE6; } goto L_0C7C1FE2; }  /* 0C7C1FDE bf/s */
L_0C7C1FE2: BLKS(0x0C7C1FE2u);
	r1 = 0xC7C4298u; UPD(0x0C7C1FE4u, 2);  /* 0C7C1FE2 mov.l @(disp,pc),Rn */
	W32(r1, r2); UPD(0x0C7C1FE6u, 1);  /* 0C7C1FE4 mov.l Rm,@Rn */
L_0C7C1FE6: BLKS(0x0C7C1FE6u);
	IF(0x0C7C1FE6u); PR = R32(r15); r15 += 4; UPD(0x0C7C1FE8u, 1);  /* 0C7C1FE6 lds.l @Rn+,pr */
	IF(0x0C7C1FE8u); { u32 t_ = PR; IF(0x0C7C1FEAu); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C7C1FE8 rts */
}

/* arr_part_93900 */
void f_0C7C1FF8(sh3_t *c)
{
	LOCALS;
L_0C7C1FF8: BLKS(0x0C7C1FF8u);
	r0 = 0xC093900u; UPD(0x0C7C1FFAu, 1);  /* 0C7C1FF8 mov.l @(disp,pc),Rn */
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C7C1FFCu, 1);  /* 0C7C1FFA mov.l Rm,@-Rn */
	IF(0x0C7C1FFCu); r15 -= 4; W32(r15, PR); UPD(0x0C7C1FFEu, 1);  /* 0C7C1FFC sts.l pr,@-Rn */
	IF(0x0C7C1FFEu); { u32 t_ = r0; PR = 0x0C7C2002u; r8 = r4; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C093900, 0x0C093900u, 0x0C7C2002u); }  /* 0C7C1FFE jsr @Rn */
L_0C7C2002: BLKS(0x0C7C2002u);
	r1 = 0xC21CA15u; UPD(0x0C7C2004u, 1);  /* 0C7C2002 mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C2006u, 1);  /* 0C7C2004 mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C2006 tst Rm,Rn */
	if (!T) { UPD(0x0C7C2020u, 4); goto L_0C7C2020; }  /* 0C7C2008 bf */
L_0C7C200A: BLKS(0x0C7C200Au);
	r1 = 0xB4u; UPD(0x0C7C200Cu, 1);  /* 0C7C200A mov.w @(disp,pc),Rn */
	r2 = 0xC26CD7Cu; UPD(0x0C7C200Eu, 1);  /* 0C7C200C mov.l @(disp,pc),Rn */
	MACL = (u32)((s32)(s16)r8 * (s32)(s16)r1);  /* 0C7C200E muls.w Rm,Rn */
	IF(0x0C7C2010u); r1 = MACL;  /* 0C7C2010 sts macl,Rn */
	r1 += r2;  /* 0C7C2012 add Rm,Rn */
	r1 = (u32)(s32)(s16)R16(r1); UPD(0x0C7C2016u, 5);  /* 0C7C2014 mov.w @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C2016 tst Rm,Rn */
	{ u32 c_ = !T; r2 = 0x10u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C7C2020u, 4); goto L_0C7C2020; } goto L_0C7C201C; }  /* 0C7C2018 bf/s */
L_0C7C201C: BLKS(0x0C7C201Cu);
	r1 = 0xC7C4298u; UPD(0x0C7C201Eu, 2);  /* 0C7C201C mov.l @(disp,pc),Rn */
	W32(r1, r2); UPD(0x0C7C2020u, 1);  /* 0C7C201E mov.l Rm,@Rn */
L_0C7C2020: BLKS(0x0C7C2020u);
	IF(0x0C7C2020u); PR = R32(r15); r15 += 4; UPD(0x0C7C2022u, 1);  /* 0C7C2020 lds.l @Rn+,pr */
	IF(0x0C7C2022u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C7C2022 rts */
}


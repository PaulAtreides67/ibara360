#include "recomp.h"
#include "recomp_funcs.h"

/* arr_rose_update */
void f_0C7C3A20(sh3_t *c)
{
	LOCALS;
L_0C7C3A20: BLKS(0x0C7C3A20u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C7C3A22u, 1);  /* 0C7C3A20 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C7C3A24u, 1);  /* 0C7C3A22 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C7C3A26u, 1);  /* 0C7C3A24 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C7C3A28u, 1);  /* 0C7C3A26 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C7C3A2Au, 1);  /* 0C7C3A28 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C7C3A2Cu, 1);  /* 0C7C3A2A mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C7C3A2Eu, 1);  /* 0C7C3A2C mov.l Rm,@-Rn */
	IF(0x0C7C3A2Eu); r15 -= 4; W32(r15, PR); UPD(0x0C7C3A30u, 1);  /* 0C7C3A2E sts.l pr,@-Rn */
	r1 = 0xC21CA15u; UPD(0x0C7C3A32u, 1);  /* 0C7C3A30 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFE8u;  /* 0C7C3A32 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C3A36u, 2);  /* 0C7C3A34 mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C3A36 tst Rm,Rn */
	if (!T) { UPD(0x0C7C3B0Eu, 4); goto L_0C7C3B0E; }  /* 0C7C3A38 bf */
L_0C7C3A3A: BLKS(0x0C7C3A3Au);
	r1 = 0x54u;  /* 0C7C3A3A mov #imm,Rn */
	r10 = 0xC38C06Cu; UPD(0x0C7C3A3Eu, 2);  /* 0C7C3A3C mov.l @(disp,pc),Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C7C3A3E exts.w Rm,Rn */
	MACL = (u32)((s32)(s16)r9 * (s32)(s16)r1);  /* 0C7C3A40 muls.w Rm,Rn */
	r1 = 0x3u;  /* 0C7C3A42 mov #imm,Rn */
	IF(0x0C7C3A44u); r8 = MACL;  /* 0C7C3A44 sts macl,Rn */
	r10 += r8;  /* 0C7C3A46 add Rm,Rn */
	r2 = R32(r10); UPD(0x0C7C3A4Au, 7);  /* 0C7C3A48 mov.l @Rm,Rn */
	T = (s32)r2 > (s32)r1;  /* 0C7C3A4A cmp/gt Rm,Rn */
	if (T) { UPD(0x0C7C3B0Eu, 4); goto L_0C7C3B0E; }  /* 0C7C3A4C bt */
L_0C7C3A4E: BLKS(0x0C7C3A4Eu);
	r1 = 0xC7C4920u; UPD(0x0C7C3A50u, 1);  /* 0C7C3A4E mov.l @(disp,pc),Rn */
	r7 = 0x10000000u; UPD(0x0C7C3A52u, 1);  /* 0C7C3A50 mov.l @(disp,pc),Rn */
	r2 = R32(r1); UPD(0x0C7C3A54u, 1);  /* 0C7C3A52 mov.l @Rm,Rn */
	r1 = 0x280u; UPD(0x0C7C3A56u, 1);  /* 0C7C3A54 mov.w @(disp,pc),Rn */
	r12 = 0xC38C0B2u; UPD(0x0C7C3A58u, 1);  /* 0C7C3A56 mov.l @(disp,pc),Rn */
	IF(0x0C7C3A58u); MACL = r2 * r1;  /* 0C7C3A58 mul.l Rm,Rn */
	r2 = 0xC283794u; UPD(0x0C7C3A5Cu, 3);  /* 0C7C3A5A mov.l @(disp,pc),Rn */
	r12 += r8;  /* 0C7C3A5C add Rm,Rn */
	r11 = 0xC38C08Cu; UPD(0x0C7C3A60u, 2);  /* 0C7C3A5E mov.l @(disp,pc),Rn */
	IF(0x0C7C3A60u); r1 = MACL;  /* 0C7C3A60 sts macl,Rn */
	r11 += r8;  /* 0C7C3A62 add Rm,Rn */
	r2 += r1;  /* 0C7C3A64 add Rm,Rn */
	r2 = R32(r2); UPD(0x0C7C3A68u, 4);  /* 0C7C3A66 mov.l @Rm,Rn */
	T = (r2 & r7) == 0;  /* 0C7C3A68 tst Rm,Rn */
	if (T) { UPD(0x0C7C3A72u, 4); goto L_0C7C3A72; }  /* 0C7C3A6A bt */
L_0C7C3A6C: BLKS(0x0C7C3A6Cu);
	r0 = (u32)(s32)(s8)R8(r12); UPD(0x0C7C3A6Eu, 1);  /* 0C7C3A6C mov.b @Rm,Rn */
	T = r0 == 0x20u;  /* 0C7C3A6E cmp/eq #imm,r0 */
	if (T) { UPD(0x0C7C3B2Eu, 4); goto L_0C7C3B2E; }  /* 0C7C3A70 bt */
L_0C7C3A72: BLKS(0x0C7C3A72u);
	r2 = 0xC38C094u; UPD(0x0C7C3A74u, 1);  /* 0C7C3A72 mov.l @(disp,pc),Rn */
	r3 = 0xC38C0A4u; UPD(0x0C7C3A76u, 1);  /* 0C7C3A74 mov.l @(disp,pc),Rn */
	r2 += r8;  /* 0C7C3A76 add Rm,Rn */
	r3 += r8;  /* 0C7C3A78 add Rm,Rn */
	r1 = R32(r2); UPD(0x0C7C3A7Cu, 3);  /* 0C7C3A7A mov.l @Rm,Rn */
	r3 = R32(r3); UPD(0x0C7C3A7Eu, 1);  /* 0C7C3A7C mov.l @Rm,Rn */
	T = (s32)r3 >= (s32)r1;  /* 0C7C3A7E cmp/ge Rm,Rn */
	if (!T) { UPD(0x0C7C3B24u, 4); goto L_0C7C3B24; }  /* 0C7C3A80 bf */
L_0C7C3A82: BLKS(0x0C7C3A82u);
	r2 = R32(r11); UPD(0x0C7C3A84u, 1);  /* 0C7C3A82 mov.l @Rm,Rn */
	r1 += r2;  /* 0C7C3A84 add Rm,Rn */
	W32(r11, r1); UPD(0x0C7C3A88u, 2);  /* 0C7C3A86 mov.l Rm,@Rn */
L_0C7C3A88: BLKS(0x0C7C3A88u);
	r2 = R32(r11); UPD(0x0C7C3A8Au, 1);  /* 0C7C3A88 mov.l @Rm,Rn */
	r1 = 0xFFF00000u; UPD(0x0C7C3A8Cu, 1);  /* 0C7C3A8A mov.l @(disp,pc),Rn */
	T = (s32)r2 >= (s32)r1;  /* 0C7C3A8C cmp/ge Rm,Rn */
	{ u32 c_ = T; r7 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C7C3A9Cu, 4); goto L_0C7C3A9C; } goto L_0C7C3A92; }  /* 0C7C3A8E bt/s */
L_0C7C3A92: BLKS(0x0C7C3A92u);
	r0 = 0xC06B480u; UPD(0x0C7C3A94u, 2);  /* 0C7C3A92 mov.l @(disp,pc),Rn */
	r6 = 0x0u;  /* 0C7C3A94 mov #imm,Rn */
	r4 = r9;  /* 0C7C3A96 mov Rm,Rn */
	IF(0x0C7C3A98u); { u32 t_ = r0; PR = 0x0C7C3A9Cu; r5 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C06B480, 0x0C06B480u, 0x0C7C3A9Cu); }  /* 0C7C3A98 jsr @Rn */
L_0C7C3A9C: BLKS(0x0C7C3A9Cu);
	r2 = 0xC38C0B4u; UPD(0x0C7C3A9Eu, 1);  /* 0C7C3A9C mov.l @(disp,pc),Rn */
	r3 = 0x3u;  /* 0C7C3A9E mov #imm,Rn */
	r2 += r8;  /* 0C7C3AA0 add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C7C3AA4u, 3);  /* 0C7C3AA2 mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C7C3AA4 add #imm,Rn */
	r1 = r1 & 0xFF;  /* 0C7C3AA6 extu.b Rm,Rn */
	W8(r2, r1); UPD(0x0C7C3AAAu, 3);  /* 0C7C3AA8 mov.b Rm,@Rn */
	T = r1 > r3;  /* 0C7C3AAA cmp/hi Rm,Rn */
	{ u32 c_ = !T; r1 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C7C3ACCu, 4); goto L_0C7C3ACC; } goto L_0C7C3AB0; }  /* 0C7C3AAC bf/s */
L_0C7C3AB0: BLKS(0x0C7C3AB0u);
	r4 = r9;  /* 0C7C3AB0 mov Rm,Rn */
	W8(r2, r1); UPD(0x0C7C3AB4u, 3);  /* 0C7C3AB2 mov.b Rm,@Rn */
	r7 = 0x0u;  /* 0C7C3AB4 mov #imm,Rn */
	r1 = 0xC38C070u; UPD(0x0C7C3AB8u, 2);  /* 0C7C3AB6 mov.l @(disp,pc),Rn */
	r6 = 0x0u;  /* 0C7C3AB8 mov #imm,Rn */
	r5 = 0x0u;  /* 0C7C3ABA mov #imm,Rn */
	r1 += r8;  /* 0C7C3ABC add Rm,Rn */
	r0 = R32(r1); UPD(0x0C7C3AC0u, 4);  /* 0C7C3ABE mov.l @Rm,Rn */
	r0 += 0x1u;  /* 0C7C3AC0 add #imm,Rn */
	r0 &= 0xFu;  /* 0C7C3AC2 and #imm,r0 */
	W32(r1, r0); UPD(0x0C7C3AC6u, 3);  /* 0C7C3AC4 mov.l Rm,@Rn */
	r0 = 0xC06AD00u; UPD(0x0C7C3AC8u, 1);  /* 0C7C3AC6 mov.l @(disp,pc),Rn */
	IF(0x0C7C3AC8u); { u32 t_ = r0; PR = 0x0C7C3ACCu; IF(0x0C7C3ACAu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C06AD00, 0x0C06AD00u, 0x0C7C3ACCu); }  /* 0C7C3AC8 jsr @Rn */
L_0C7C3ACC: BLKS(0x0C7C3ACCu);
	r2 = 0xC38C0A8u; UPD(0x0C7C3ACEu, 1);  /* 0C7C3ACC mov.l @(disp,pc),Rn */
	r3 = 0x13u;  /* 0C7C3ACE mov #imm,Rn */
	r2 += r8;  /* 0C7C3AD0 add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C7C3AD4u, 3);  /* 0C7C3AD2 mov.b @Rm,Rn */
	r1 = r1 & 0xFF;  /* 0C7C3AD4 extu.b Rm,Rn */
	T = r1 > r3;  /* 0C7C3AD6 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C7C3AE0u, 5); goto L_0C7C3AE0; }  /* 0C7C3AD8 bt */
L_0C7C3ADA: BLKS(0x0C7C3ADAu);
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C7C3ADCu, 1);  /* 0C7C3ADA mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C7C3ADC add #imm,Rn */
	W8(r2, r1); UPD(0x0C7C3AE0u, 2);  /* 0C7C3ADE mov.b Rm,@Rn */
L_0C7C3AE0: BLKS(0x0C7C3AE0u);
	r2 = R32(r10); UPD(0x0C7C3AE2u, 1);  /* 0C7C3AE0 mov.l @Rm,Rn */
	r1 = 0x2u;  /* 0C7C3AE2 mov #imm,Rn */
	T = (s32)r2 > (s32)r1;  /* 0C7C3AE4 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C7C3B72u, 5); goto L_0C7C3B72; }  /* 0C7C3AE6 bf */
L_0C7C3AE8: BLKS(0x0C7C3AE8u);
	r1 = (u32)(s32)(s8)R8(r12); UPD(0x0C7C3AEAu, 1);  /* 0C7C3AE8 mov.b @Rm,Rn */
	r2 = 0x1Fu;  /* 0C7C3AEA mov #imm,Rn */
	r1 = r1 & 0xFF;  /* 0C7C3AEC extu.b Rm,Rn */
	T = r1 > r2;  /* 0C7C3AEE cmp/hi Rm,Rn */
	if (T) { UPD(0x0C7C3AF8u, 6); goto L_0C7C3AF8; }  /* 0C7C3AF0 bt */
L_0C7C3AF2: BLKS(0x0C7C3AF2u);
	r1 = (u32)(s32)(s8)R8(r12); UPD(0x0C7C3AF4u, 1);  /* 0C7C3AF2 mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C7C3AF4 add #imm,Rn */
	W8(r12, r1); UPD(0x0C7C3AF8u, 2);  /* 0C7C3AF6 mov.b Rm,@Rn */
L_0C7C3AF8: BLKS(0x0C7C3AF8u);
	r0 = 0x0u;  /* 0C7C3AF8 mov #imm,Rn */
	r15 += 0x18u;  /* 0C7C3AFA add #imm,Rn */
	IF(0x0C7C3AFCu); PR = R32(r15); r15 += 4; UPD(0x0C7C3AFEu, 3);  /* 0C7C3AFC lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C7C3B00u, 1);  /* 0C7C3AFE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C7C3B02u, 1);  /* 0C7C3B00 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C7C3B04u, 1);  /* 0C7C3B02 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C7C3B06u, 1);  /* 0C7C3B04 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C7C3B08u, 1);  /* 0C7C3B06 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C3B0Au, 1);  /* 0C7C3B08 mov.l @Rm+,Rn */
	IF(0x0C7C3B0Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C7C3B0A rts */
L_0C7C3B0E: BLKS(0x0C7C3B0Eu);
	r0 = 0xC06A990u; UPD(0x0C7C3B10u, 1);  /* 0C7C3B0E mov.l @(disp,pc),Rn */
	r15 += 0x18u;  /* 0C7C3B10 add #imm,Rn */
	IF(0x0C7C3B12u); PR = R32(r15); r15 += 4; UPD(0x0C7C3B14u, 2);  /* 0C7C3B12 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C7C3B16u, 1);  /* 0C7C3B14 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C7C3B18u, 1);  /* 0C7C3B16 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C7C3B1Au, 1);  /* 0C7C3B18 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C7C3B1Cu, 1);  /* 0C7C3B1A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C7C3B1Eu, 1);  /* 0C7C3B1C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C3B20u, 1);  /* 0C7C3B1E mov.l @Rm+,Rn */
	IF(0x0C7C3B20u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C7C3B20 jmp @Rn */
L_0C7C3B24: BLKS(0x0C7C3B24u);
	r6 = 0xFFFFF400u; UPD(0x0C7C3B26u, 1);  /* 0C7C3B24 mov.w @(disp,pc),Rn */
	r1 += r6;  /* 0C7C3B26 add Rm,Rn */
	W32(r2, r1); UPD(0x0C7C3B2Au, 2);  /* 0C7C3B28 mov.l Rm,@Rn */
	{ IF(0x0C7C3B2Cu); ; /* slot nop */ UPD(0x0C7C3A82u, 3); goto L_0C7C3A82; }  /* 0C7C3B2A bra */
L_0C7C3B2E: BLKS(0x0C7C3B2Eu);
	r13 = 0xC38C090u; UPD(0x0C7C3B30u, 1);  /* 0C7C3B2E mov.l @(disp,pc),Rn */
	r2 = 0xC2837A4u; UPD(0x0C7C3B32u, 1);  /* 0C7C3B30 mov.l @(disp,pc),Rn */
	r13 += r8;  /* 0C7C3B32 add Rm,Rn */
	r4 = R32(r11); UPD(0x0C7C3B36u, 2);  /* 0C7C3B34 mov.l @Rm,Rn */
	r2 += r1;  /* 0C7C3B36 add Rm,Rn */
	r5 = R32(r13); UPD(0x0C7C3B3Au, 2);  /* 0C7C3B38 mov.l @Rm,Rn */
	r0 = 0xC057390u; UPD(0x0C7C3B3Cu, 1);  /* 0C7C3B3A mov.l @(disp,pc),Rn */
	r6 = R32(r2); UPD(0x0C7C3B3Eu, 1);  /* 0C7C3B3C mov.l @Rm,Rn */
	r2 = 0xC2837A8u; UPD(0x0C7C3B40u, 1);  /* 0C7C3B3E mov.l @(disp,pc),Rn */
	r1 += r2;  /* 0C7C3B40 add Rm,Rn */
	r7 = R32(r1); UPD(0x0C7C3B44u, 2);  /* 0C7C3B42 mov.l @Rm,Rn */
	IF(0x0C7C3B44u); { u32 t_ = r0; PR = 0x0C7C3B48u; IF(0x0C7C3B46u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C057390, 0x0C057390u, 0x0C7C3B48u); }  /* 0C7C3B44 jsr @Rn */
L_0C7C3B48: BLKS(0x0C7C3B48u);
	r4 = r0;  /* 0C7C3B48 mov Rm,Rn */
	r14 = r0;  /* 0C7C3B4A mov Rm,Rn */
	r0 = 0xC058060u; UPD(0x0C7C3B4Eu, 3);  /* 0C7C3B4C mov.l @(disp,pc),Rn */
	r7 = 0x0u;  /* 0C7C3B4E mov #imm,Rn */
	r5 = 0x50000u; UPD(0x0C7C3B52u, 2);  /* 0C7C3B50 mov.l @(disp,pc),Rn */
	IF(0x0C7C3B52u); { u32 t_ = r0; PR = 0x0C7C3B56u; r6 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C7C3B56u); }  /* 0C7C3B52 jsr @Rn */
L_0C7C3B56: BLKS(0x0C7C3B56u);
	r1 = R32(r11); UPD(0x0C7C3B58u, 1);  /* 0C7C3B56 mov.l @Rm,Rn */
	r7 = 0x0u;  /* 0C7C3B58 mov #imm,Rn */
	r5 = 0x50000u; UPD(0x0C7C3B5Cu, 2);  /* 0C7C3B5A mov.l @(disp,pc),Rn */
	r6 = 0x0u;  /* 0C7C3B5C mov #imm,Rn */
	r1 += r0;  /* 0C7C3B5E add Rm,Rn */
	r0 = 0xC058030u; UPD(0x0C7C3B62u, 3);  /* 0C7C3B60 mov.l @(disp,pc),Rn */
	W32(r11, r1); UPD(0x0C7C3B64u, 1);  /* 0C7C3B62 mov.l Rm,@Rn */
	IF(0x0C7C3B64u); { u32 t_ = r0; PR = 0x0C7C3B68u; r4 = r14; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C7C3B68u); }  /* 0C7C3B64 jsr @Rn */
L_0C7C3B68: BLKS(0x0C7C3B68u);
	r1 = R32(r13); UPD(0x0C7C3B6Au, 1);  /* 0C7C3B68 mov.l @Rm,Rn */
	r1 += r0;  /* 0C7C3B6A add Rm,Rn */
	W32(r13, r1); UPD(0x0C7C3B6Eu, 2);  /* 0C7C3B6C mov.l Rm,@Rn */
	{ IF(0x0C7C3B70u); ; /* slot nop */ UPD(0x0C7C3A88u, 3); goto L_0C7C3A88; }  /* 0C7C3B6E bra */
L_0C7C3B72: BLKS(0x0C7C3B72u);
	r7 = 0xC38C080u; UPD(0x0C7C3B74u, 1);  /* 0C7C3B72 mov.l @(disp,pc),Rn */
	r2 = 0xFFFFFFFu; UPD(0x0C7C3B76u, 1);  /* 0C7C3B74 mov.l @(disp,pc),Rn */
	r7 += r8;  /* 0C7C3B76 add Rm,Rn */
	r3 = R32(r7); UPD(0x0C7C3B7Au, 2);  /* 0C7C3B78 mov.l @Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C7C3B7Cu, 1);  /* 0C7C3B7A mov.l Rm,@(disp,Rn) */
	r1 = R32(r3); UPD(0x0C7C3B7Eu, 1);  /* 0C7C3B7C mov.l @Rm,Rn */
	r2 &= r1;  /* 0C7C3B7E and Rm,Rn */
	W32(r15, r2); UPD(0x0C7C3B82u, 2);  /* 0C7C3B80 mov.l Rm,@Rn */
	r2 = 0xFFFFFFFu; UPD(0x0C7C3B84u, 1);  /* 0C7C3B82 mov.l @(disp,pc),Rn */
	T = (r1 & r2) == 0;  /* 0C7C3B84 tst Rm,Rn */
	if (T) { UPD(0x0C7C3AE8u, 4); goto L_0C7C3AE8; }  /* 0C7C3B86 bt */
L_0C7C3B88: BLKS(0x0C7C3B88u);
	r4 = 0xC38C090u; UPD(0x0C7C3B8Au, 1);  /* 0C7C3B88 mov.l @(disp,pc),Rn */
	r13 = 0xC38C068u; UPD(0x0C7C3B8Cu, 1);  /* 0C7C3B8A mov.l @(disp,pc),Rn */
	r4 += r8;  /* 0C7C3B8C add Rm,Rn */
	W32(r15 + 0x14u, r11); UPD(0x0C7C3B90u, 2);  /* 0C7C3B8E mov.l Rm,@(disp,Rn) */
	W32(r15 + 0x10u, r4); UPD(0x0C7C3B92u, 1);  /* 0C7C3B90 mov.l Rm,@(disp,Rn) */
	r13 += r8;  /* 0C7C3B92 add Rm,Rn */
	r11 = r3;  /* 0C7C3B94 mov Rm,Rn */
	UPD(0x0C7C3B96u, 2);
L_0C7C3B96: BLKS(0x0C7C3B96u);
	r1 = R32(r15 + 0x14u); UPD(0x0C7C3B98u, 1);  /* 0C7C3B96 mov.l @(disp,Rm),Rn */
	r14 = R32(r11 + 0x4u); UPD(0x0C7C3B9Au, 1);  /* 0C7C3B98 mov.l @(disp,Rm),Rn */
	r3 = R32(r15 + 0x10u); UPD(0x0C7C3B9Cu, 1);  /* 0C7C3B9A mov.l @(disp,Rm),Rn */
	r4 = R32(r1); UPD(0x0C7C3B9Eu, 1);  /* 0C7C3B9C mov.l @Rm,Rn */
	r1 = R32(r11 + 0x8u); UPD(0x0C7C3BA0u, 1);  /* 0C7C3B9E mov.l @(disp,Rm),Rn */
	r2 = R32(r3); UPD(0x0C7C3BA2u, 1);  /* 0C7C3BA0 mov.l @Rm,Rn */
	r4 += r1;  /* 0C7C3BA2 add Rm,Rn */
	r1 = R32(r11 + 0xCu); UPD(0x0C7C3BA6u, 2);  /* 0C7C3BA4 mov.l @(disp,Rm),Rn */
	r3 = 0x100u; UPD(0x0C7C3BA8u, 1);  /* 0C7C3BA6 mov.w @(disp,pc),Rn */
	r2 += r1;  /* 0C7C3BA8 add Rm,Rn */
	r1 = 0xC38C064u; UPD(0x0C7C3BACu, 2);  /* 0C7C3BAA mov.l @(disp,pc),Rn */
	W32(r15 + 0xCu, r2); UPD(0x0C7C3BAEu, 1);  /* 0C7C3BAC mov.l Rm,@(disp,Rn) */
	r2 = 0x0u;  /* 0C7C3BAE mov #imm,Rn */
	W32(r15 + 0x8u, r14); UPD(0x0C7C3BB2u, 2);  /* 0C7C3BB0 mov.l Rm,@(disp,Rn) */
	IF(0x0C7C3BB2u); ;  /* 0C7C3BB2 nop */
	UPD(0x0C7C3BB4u, 1);
L_0C7C3BB4: BLKS(0x0C7C3BB4u);
	T = r9 == r2;  /* 0C7C3BB4 cmp/eq Rm,Rn */
	if (T) { UPD(0x0C7C3BCEu, 4); goto L_0C7C3BCE; }  /* 0C7C3BB6 bt */
L_0C7C3BB8: BLKS(0x0C7C3BB8u);
	r7 = R32(r1); UPD(0x0C7C3BBAu, 1);  /* 0C7C3BB8 mov.l @Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C7C3BBA tst Rm,Rn */
	if (T) { UPD(0x0C7C3BCEu, 4); goto L_0C7C3BCE; }  /* 0C7C3BBC bt */
L_0C7C3BBE: BLKS(0x0C7C3BBEu);
	r6 = R32(r1 + 0x4u); UPD(0x0C7C3BC0u, 1);  /* 0C7C3BBE mov.l @(disp,Rm),Rn */
	r7 = R32(r13); UPD(0x0C7C3BC2u, 1);  /* 0C7C3BC0 mov.l @Rm,Rn */
	T = r6 == r7;  /* 0C7C3BC2 cmp/eq Rm,Rn */
	if (!T) { UPD(0x0C7C3BCEu, 4); goto L_0C7C3BCE; }  /* 0C7C3BC4 bf */
L_0C7C3BC6: BLKS(0x0C7C3BC6u);
	r6 = R32(r1 + 0x8u); UPD(0x0C7C3BC8u, 1);  /* 0C7C3BC6 mov.l @(disp,Rm),Rn */
	r7 = R32(r10); UPD(0x0C7C3BCAu, 1);  /* 0C7C3BC8 mov.l @Rm,Rn */
	T = r6 == r7;  /* 0C7C3BCA cmp/eq Rm,Rn */
	if (T) { UPD(0x0C7C3C5Cu, 4); goto L_0C7C3C5C; }  /* 0C7C3BCC bt */
L_0C7C3BCE: BLKS(0x0C7C3BCEu);
	IF(0x0C7C3BCEu); r3 -= 1; T = r3 == 0;  /* 0C7C3BCE dt Rn */
	UPD(0x0C7C3BD0u, 1);
L_0C7C3BD0: BLKS(0x0C7C3BD0u);
	r2 += 0x1u;  /* 0C7C3BD0 add #imm,Rn */
	{ u32 c_ = !T; r1 += 0x54u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C7C3BB4u, 4); goto L_0C7C3BB4; } goto L_0C7C3BD6; }  /* 0C7C3BD2 bf/s */
L_0C7C3BD6: BLKS(0x0C7C3BD6u);
	r1 = R32(r11 + 0x10u); UPD(0x0C7C3BD8u, 2);  /* 0C7C3BD6 mov.l @(disp,Rm),Rn */
	r11 += 0x10u;  /* 0C7C3BD8 add #imm,Rn */
	r2 = 0xFFFFFFFu; UPD(0x0C7C3BDCu, 2);  /* 0C7C3BDA mov.l @(disp,pc),Rn */
	r14 = 0xFFFFFFFu; UPD(0x0C7C3BDEu, 1);  /* 0C7C3BDC mov.l @(disp,pc),Rn */
	r2 &= r1;  /* 0C7C3BDE and Rm,Rn */
	T = (r1 & r14) == 0;  /* 0C7C3BE0 tst Rm,Rn */
	{ u32 c_ = !T; W32(r15, r2); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C7C3B96u, 5); goto L_0C7C3B96; } UPD(0x0C7C3BE6u, 1); goto L_0C7C3BE6; }  /* 0C7C3BE2 bf/s */
L_0C7C3BE6: BLKS(0x0C7C3BE6u);
	{ IF(0x0C7C3BE8u); ; /* slot nop */ UPD(0x0C7C3AE8u, 3); goto L_0C7C3AE8; }  /* 0C7C3BE6 bra */
L_0C7C3C5C: BLKS(0x0C7C3C5Cu);
	r7 = R32(r1 + 0x1Cu); UPD(0x0C7C3C5Eu, 1);  /* 0C7C3C5C mov.l @(disp,Rm),Rn */
	r6 = R32(r7); UPD(0x0C7C3C60u, 1);  /* 0C7C3C5E mov.l @Rm,Rn */
	T = (r6 & r6) == 0;  /* 0C7C3C60 tst Rm,Rn */
	{ u32 c_ = T; r0 = r1; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C7C3BCEu, 4); goto L_0C7C3BCE; } goto L_0C7C3C66; }  /* 0C7C3C62 bt/s */
L_0C7C3C66: BLKS(0x0C7C3C66u);
	r0 += 0x28u;  /* 0C7C3C66 add #imm,Rn */
	UPD(0x0C7C3C68u, 2);
L_0C7C3C68: BLKS(0x0C7C3C68u);
	r6 = R32(r0); UPD(0x0C7C3C6Au, 1);  /* 0C7C3C68 mov.l @Rm,Rn */
	r14 = R32(r7 + 0x8u); UPD(0x0C7C3C6Cu, 1);  /* 0C7C3C6A mov.l @(disp,Rm),Rn */
	r5 = R32(r7); UPD(0x0C7C3C6Eu, 1);  /* 0C7C3C6C mov.l @Rm,Rn */
	r14 += r6;  /* 0C7C3C6E add Rm,Rn */
	r6 = r4;  /* 0C7C3C70 mov Rm,Rn */
	r6 -= r14;  /* 0C7C3C72 sub Rm,Rn */
	r14 = R32(r15); UPD(0x0C7C3C76u, 4);  /* 0C7C3C74 mov.l @Rm,Rn */
	IF(0x0C7C3C76u); T = (s32)r6 >= 0;  /* 0C7C3C76 cmp/pz Rn */
	if (T) { UPD(0x0C7C3C7Cu, 4); goto L_0C7C3C7C; }  /* 0C7C3C78 bt */
L_0C7C3C7A: BLKS(0x0C7C3C7Au);
	r6 = 0u - r6;  /* 0C7C3C7A neg Rm,Rn */
	UPD(0x0C7C3C7Cu, 1);
L_0C7C3C7C: BLKS(0x0C7C3C7Cu);
	r5 += r14;  /* 0C7C3C7C add Rm,Rn */
	T = (s32)r6 >= (s32)r5;  /* 0C7C3C7E cmp/ge Rm,Rn */
	if (T) { UPD(0x0C7C3CFAu, 5); goto L_0C7C3CFA; }  /* 0C7C3C80 bt */
L_0C7C3C82: BLKS(0x0C7C3C82u);
	r6 = R32(r1 + 0x2Cu); UPD(0x0C7C3C84u, 1);  /* 0C7C3C82 mov.l @(disp,Rm),Rn */
	r14 = R32(r7 + 0xCu); UPD(0x0C7C3C86u, 1);  /* 0C7C3C84 mov.l @(disp,Rm),Rn */
	r5 = R32(r7 + 0x4u); UPD(0x0C7C3C88u, 1);  /* 0C7C3C86 mov.l @(disp,Rm),Rn */
	r14 += r6;  /* 0C7C3C88 add Rm,Rn */
	r6 = R32(r15 + 0xCu); UPD(0x0C7C3C8Cu, 2);  /* 0C7C3C8A mov.l @(disp,Rm),Rn */
	r6 -= r14;  /* 0C7C3C8C sub Rm,Rn */
	r14 = R32(r15 + 0x8u); UPD(0x0C7C3C90u, 2);  /* 0C7C3C8E mov.l @(disp,Rm),Rn */
	IF(0x0C7C3C90u); T = (s32)r6 >= 0;  /* 0C7C3C90 cmp/pz Rn */
	if (T) { UPD(0x0C7C3C96u, 4); goto L_0C7C3C96; }  /* 0C7C3C92 bt */
L_0C7C3C94: BLKS(0x0C7C3C94u);
	r6 = 0u - r6;  /* 0C7C3C94 neg Rm,Rn */
	UPD(0x0C7C3C96u, 1);
L_0C7C3C96: BLKS(0x0C7C3C96u);
	r5 += r14;  /* 0C7C3C96 add Rm,Rn */
	T = (s32)r6 >= (s32)r5;  /* 0C7C3C98 cmp/ge Rm,Rn */
	if (T) { UPD(0x0C7C3CFAu, 5); goto L_0C7C3CFA; }  /* 0C7C3C9A bt */
L_0C7C3C9C: BLKS(0x0C7C3C9Cu);
	r3 = R32(r10); UPD(0x0C7C3C9Eu, 1);  /* 0C7C3C9C mov.l @Rm,Rn */
	IF(0x0C7C3C9Eu); r9 <<= 2;  /* 0C7C3C9E shll2 Rn */
	r6 = 0xC38C07Cu; UPD(0x0C7C3CA2u, 2);  /* 0C7C3CA0 mov.l @(disp,pc),Rn */
	r3 += 0x1u;  /* 0C7C3CA2 add #imm,Rn */
	W32(r10, r3); UPD(0x0C7C3CA6u, 2);  /* 0C7C3CA4 mov.l Rm,@Rn */
	r6 += r8;  /* 0C7C3CA6 add Rm,Rn */
	r3 = 0xC38C074u; UPD(0x0C7C3CAAu, 2);  /* 0C7C3CA8 mov.l @(disp,pc),Rn */
	r3 += r8;  /* 0C7C3CAA add Rm,Rn */
	r7 = R32(r3); UPD(0x0C7C3CAEu, 2);  /* 0C7C3CAC mov.l @Rm,Rn */
	r0 = R32(r10); UPD(0x0C7C3CB0u, 1);  /* 0C7C3CAE mov.l @Rm,Rn */
	r3 = 0xC38C078u; UPD(0x0C7C3CB2u, 1);  /* 0C7C3CB0 mov.l @(disp,pc),Rn */
	IF(0x0C7C3CB2u); r0 <<= 2;  /* 0C7C3CB2 shll2 Rn */
	IF(0x0C7C3CB4u); r0 <<= 2;  /* 0C7C3CB4 shll2 Rn */
	IF(0x0C7C3CB6u); r7 = R32(r0 + r7); UPD(0x0C7C3CB8u, 3);  /* 0C7C3CB6 mov.l @(r0,Rm),Rn */
	r3 += r8;  /* 0C7C3CB8 add Rm,Rn */
	W32(r3, r7); UPD(0x0C7C3CBCu, 2);  /* 0C7C3CBA mov.l Rm,@Rn */
	r7 = 0xC38C070u; UPD(0x0C7C3CBEu, 1);  /* 0C7C3CBC mov.l @(disp,pc),Rn */
	r5 = R32(r3); UPD(0x0C7C3CC0u, 1);  /* 0C7C3CBE mov.l @Rm,Rn */
	r7 += r8;  /* 0C7C3CC0 add Rm,Rn */
	r0 = R32(r7); UPD(0x0C7C3CC4u, 2);  /* 0C7C3CC2 mov.l @Rm,Rn */
	IF(0x0C7C3CC4u); r0 <<= 2;  /* 0C7C3CC4 shll2 Rn */
	r0 += r0;  /* 0C7C3CC6 add Rm,Rn */
	IF(0x0C7C3CC8u); r5 = R32(r0 + r5); UPD(0x0C7C3CCAu, 3);  /* 0C7C3CC8 mov.l @(r0,Rm),Rn */
	r0 = r2;  /* 0C7C3CCA mov Rm,Rn */
	IF(0x0C7C3CCCu); r0 <<= 2;  /* 0C7C3CCC shll2 Rn */
	W32(r6, r5); UPD(0x0C7C3CD0u, 3);  /* 0C7C3CCE mov.l Rm,@Rn */
	r6 = 0xC38C094u; UPD(0x0C7C3CD2u, 1);  /* 0C7C3CD0 mov.l @(disp,pc),Rn */
	r8 += r6;  /* 0C7C3CD2 add Rm,Rn */
	r6 = 0x20000u; UPD(0x0C7C3CD6u, 2);  /* 0C7C3CD4 mov.l @(disp,pc),Rn */
	W32(r8, r6); UPD(0x0C7C3CD8u, 1);  /* 0C7C3CD6 mov.l Rm,@Rn */
	r6 = R32(r3); UPD(0x0C7C3CDAu, 1);  /* 0C7C3CD8 mov.l @Rm,Rn */
	r3 = R32(r7); UPD(0x0C7C3CDCu, 1);  /* 0C7C3CDA mov.l @Rm,Rn */
	r7 = R32(r15 + 0x4u); UPD(0x0C7C3CDEu, 1);  /* 0C7C3CDC mov.l @(disp,Rm),Rn */
	IF(0x0C7C3CDEu); r3 <<= 2;  /* 0C7C3CDE shll2 Rn */
	r3 += r3;  /* 0C7C3CE0 add Rm,Rn */
	r3 += r6;  /* 0C7C3CE2 add Rm,Rn */
	r3 = R32(r3 + 0x4u); UPD(0x0C7C3CE6u, 4);  /* 0C7C3CE4 mov.l @(disp,Rm),Rn */
	W32(r7, r3); UPD(0x0C7C3CE8u, 1);  /* 0C7C3CE6 mov.l Rm,@Rn */
	r3 = 0x0u;  /* 0C7C3CE8 mov #imm,Rn */
	W32(r1, r3); UPD(0x0C7C3CECu, 2);  /* 0C7C3CEA mov.l Rm,@Rn */
	r3 = 0xC7C441Cu; UPD(0x0C7C3CEEu, 1);  /* 0C7C3CEC mov.l @(disp,pc),Rn */
	r9 += r3;  /* 0C7C3CEE add Rm,Rn */
	IF(0x0C7C3CF0u); r2 = R32(r0 + r3); UPD(0x0C7C3CF2u, 2);  /* 0C7C3CF0 mov.l @(r0,Rm),Rn */
	r1 = R32(r9); UPD(0x0C7C3CF4u, 1);  /* 0C7C3CF2 mov.l @Rm,Rn */
	r1 += r2;  /* 0C7C3CF4 add Rm,Rn */
	{ W32(r9, r1); /* slot mov.l Rm,@Rn */ UPD(0x0C7C3AE8u, 4); goto L_0C7C3AE8; }  /* 0C7C3CF6 bra */
L_0C7C3CFA: BLKS(0x0C7C3CFAu);
	r6 = R32(r7 + 0x10u); UPD(0x0C7C3CFCu, 1);  /* 0C7C3CFA mov.l @(disp,Rm),Rn */
	T = (r6 & r6) == 0;  /* 0C7C3CFC tst Rm,Rn */
	{ u32 c_ = !T; r7 += 0x10u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C7C3C68u, 4); goto L_0C7C3C68; } goto L_0C7C3D02; }  /* 0C7C3CFE bf/s */
L_0C7C3D02: BLKS(0x0C7C3D02u);
	{ IF(0x0C7C3D04u); r3 -= 1; T = r3 == 0; /* slot dt Rn */ UPD(0x0C7C3BD0u, 4); goto L_0C7C3BD0; }  /* 0C7C3D02 bra */
}

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

/* logo_check */
void f_0C7C4960(sh3_t *c)
{
	LOCALS;
L_0C7C4960: BLKS(0x0C7C4960u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C7C4962u, 1);  /* 0C7C4960 mov.l Rm,@-Rn */
	r1 = 0xC7B0008u; UPD(0x0C7C4964u, 1);  /* 0C7C4962 mov.l @(disp,pc),Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C7C4966u, 1);  /* 0C7C4964 mov.l Rm,@-Rn */
	r5 = (u32)(s32)(s16)R16(r1); UPD(0x0C7C4968u, 1);  /* 0C7C4966 mov.w @Rm,Rn */
	r1 += 0x2u;  /* 0C7C4968 add #imm,Rn */
	r6 = (u32)(s32)(s16)R16(r1); UPD(0x0C7C496Cu, 2);  /* 0C7C496A mov.w @Rm,Rn */
	r1 += 0x6u;  /* 0C7C496C add #imm,Rn */
	r2 = (u32)(s32)(s16)R16(r1); UPD(0x0C7C4970u, 2);  /* 0C7C496E mov.w @Rm,Rn */
	r0 = r5 & 0xFFFF;  /* 0C7C4970 extu.w Rm,Rn */
	r8 = R32(r1 + 0x4u); UPD(0x0C7C4974u, 2);  /* 0C7C4972 mov.l @(disp,Rm),Rn */
	r1 += 0xFFFFFFF0u;  /* 0C7C4974 add #imm,Rn */
	r9 = R32(r1); UPD(0x0C7C4978u, 2);  /* 0C7C4976 mov.l @Rm,Rn */
	r1 = r0;  /* 0C7C4978 mov Rm,Rn */
	r3 = 0xFFu; UPD(0x0C7C497Cu, 2);  /* 0C7C497A mov.w @(disp,pc),Rn */
	r1 += 0xFFFFFFFFu;  /* 0C7C497C add #imm,Rn */
	r1 = r1 & 0xFFFF;  /* 0C7C497E extu.w Rm,Rn */
	T = r1 > r3;  /* 0C7C4980 cmp/hi Rm,Rn */
	{ u32 c_ = T; r1 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C7C4990u, 6); goto L_0C7C4990; } goto L_0C7C4986; }  /* 0C7C4982 bt/s */
L_0C7C4986: BLKS(0x0C7C4986u);
	r1 = 0x544C474Fu; UPD(0x0C7C4988u, 2);  /* 0C7C4986 mov.l @(disp,pc),Rn */
	T = r9 == r1;  /* 0C7C4988 cmp/eq Rm,Rn */
	{ u32 c_ = T; T = (r0 & 0x1u) == 0; /* slot tst #imm,r0 */ if (c_) { UPD(0x0C7C4998u, 4); goto L_0C7C4998; } UPD(0x0C7C498Eu, 1); goto L_0C7C498E; }  /* 0C7C498A bt/s */
L_0C7C498E: BLKS(0x0C7C498Eu);
	r1 = 0x0u;  /* 0C7C498E mov #imm,Rn */
	UPD(0x0C7C4990u, 1);
L_0C7C4990: BLKS(0x0C7C4990u);
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C4992u, 1);  /* 0C7C4990 mov.l @Rm+,Rn */
	r0 = r1;  /* 0C7C4992 mov Rm,Rn */
	IF(0x0C7C4994u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C7C4994 rts */
L_0C7C4998: BLKS(0x0C7C4998u);
	{ u32 c_ = !T; r7 = r6 & 0xFFFF; /* slot extu.w Rm,Rn */ if (c_) { UPD(0x0C7C498Eu, 3); goto L_0C7C498E; } goto L_0C7C499C; }  /* 0C7C4998 bf/s */
L_0C7C499C: BLKS(0x0C7C499Cu);
	r7 += 0xFFFFFFFFu;  /* 0C7C499C add #imm,Rn */
	r7 = r7 & 0xFFFF;  /* 0C7C499E extu.w Rm,Rn */
	T = r7 > r3;  /* 0C7C49A0 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C7C498Eu, 7); goto L_0C7C498E; }  /* 0C7C49A2 bt */
L_0C7C49A4: BLKS(0x0C7C49A4u);
	r2 = r2 & 0xFFFF;  /* 0C7C49A4 extu.w Rm,Rn */
	r1 = r2;  /* 0C7C49A6 mov Rm,Rn */
	r1 += 0xFFFFFFFFu;  /* 0C7C49A8 add #imm,Rn */
	r1 = r1 & 0xFFFF;  /* 0C7C49AA extu.w Rm,Rn */
	T = r1 > r3;  /* 0C7C49AC cmp/hi Rm,Rn */
	{ u32 c_ = T; r1 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C7C4990u, 8); goto L_0C7C4990; } goto L_0C7C49B2; }  /* 0C7C49AE bt/s */
L_0C7C49B2: BLKS(0x0C7C49B2u);
	r7 = 0x4000u; UPD(0x0C7C49B4u, 2);  /* 0C7C49B2 mov.w @(disp,pc),Rn */
	T = r8 > r7;  /* 0C7C49B4 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C7C4990u, 4); goto L_0C7C4990; }  /* 0C7C49B6 bt */
L_0C7C49B8: BLKS(0x0C7C49B8u);
	r0 = r8;  /* 0C7C49B8 mov Rm,Rn */
	T = (r0 & 0x1u) == 0;  /* 0C7C49BA tst #imm,r0 */
	if (!T) { UPD(0x0C7C4990u, 5); goto L_0C7C4990; }  /* 0C7C49BC bf */
L_0C7C49BE: BLKS(0x0C7C49BEu);
	r3 = 0xC7B0004u; UPD(0x0C7C49C0u, 1);  /* 0C7C49BE mov.l @(disp,pc),Rn */
	r0 = R32(r3); UPD(0x0C7C49C2u, 1);  /* 0C7C49C0 mov.l @Rm,Rn */
	r3 = r2;  /* 0C7C49C2 mov Rm,Rn */
	r3 += 0x8u;  /* 0C7C49C4 add #imm,Rn */
	r3 = r3 & 0xFFFF;  /* 0C7C49C6 extu.w Rm,Rn */
	r3 += r3;  /* 0C7C49C8 add Rm,Rn */
	r4 = r3;  /* 0C7C49CA mov Rm,Rn */
	r4 += r8;  /* 0C7C49CC add Rm,Rn */
	T = r0 == r4;  /* 0C7C49CE cmp/eq Rm,Rn */
	if (!T) { UPD(0x0C7C4990u, 10); goto L_0C7C4990; }  /* 0C7C49D0 bf */
L_0C7C49D2: BLKS(0x0C7C49D2u);
	r3 += 0x8u;  /* 0C7C49D2 add #imm,Rn */
	r3 += r8;  /* 0C7C49D4 add Rm,Rn */
	T = r3 > r7;  /* 0C7C49D6 cmp/hi Rm,Rn */
	{ u32 c_ = T; T = (r8 & r8) == 0; /* slot tst Rm,Rn */ if (c_) { UPD(0x0C7C4990u, 6); goto L_0C7C4990; } goto L_0C7C49DC; }  /* 0C7C49D8 bt/s */
L_0C7C49DC: BLKS(0x0C7C49DCu);
	{ u32 c_ = T; r4 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C7C4A10u, 4); goto L_0C7C4A10; } goto L_0C7C49E0; }  /* 0C7C49DC bt/s */
L_0C7C49E0: BLKS(0x0C7C49E0u);
	r0 = r2;  /* 0C7C49E0 mov Rm,Rn */
	r0 += r0;  /* 0C7C49E2 add Rm,Rn */
	{ r7 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C7C49FCu, 6); goto L_0C7C49FC; }  /* 0C7C49E4 bra */
L_0C7C49E8: BLKS(0x0C7C49E8u);
	r9 = 0xC7B0019u; UPD(0x0C7C49EAu, 1);  /* 0C7C49E8 mov.l @(disp,pc),Rn */
	r3 += r9;  /* 0C7C49EA add Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r3); UPD(0x0C7C49EEu, 2);  /* 0C7C49EC mov.b @Rm,Rn */
	r3 = r3 & 0xFF;  /* 0C7C49EE extu.b Rm,Rn */
	T = r3 >= r2;  /* 0C7C49F0 cmp/hs Rm,Rn */
	{ u32 c_ = T; r7 += 0x2u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C7C498Eu, 5); goto L_0C7C498E; } goto L_0C7C49F6; }  /* 0C7C49F2 bt/s */
L_0C7C49F6: BLKS(0x0C7C49F6u);
	T = r8 > r7;  /* 0C7C49F6 cmp/hi Rm,Rn */
	{ u32 c_ = !T; r4 += r1; /* slot add Rm,Rn */ if (c_) { UPD(0x0C7C4A10u, 5); goto L_0C7C4A10; } UPD(0x0C7C49FCu, 1); goto L_0C7C49FC; }  /* 0C7C49F8 bf/s */
L_0C7C49FC: BLKS(0x0C7C49FCu);
	r1 = 0xC7B0018u; UPD(0x0C7C49FEu, 1);  /* 0C7C49FC mov.l @(disp,pc),Rn */
	r3 = r7;  /* 0C7C49FE mov Rm,Rn */
	r3 += r0;  /* 0C7C4A00 add Rm,Rn */
	r1 += r3;  /* 0C7C4A02 add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C4A06u, 4);  /* 0C7C4A04 mov.b @Rm,Rn */
	r1 = r1 & 0xFF;  /* 0C7C4A06 extu.b Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C4A08 tst Rm,Rn */
	if (!T) { UPD(0x0C7C49E8u, 5); goto L_0C7C49E8; }  /* 0C7C4A0A bf */
L_0C7C4A0C: BLKS(0x0C7C4A0Cu);
	{ r1 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C7C4990u, 3); goto L_0C7C4990; }  /* 0C7C4A0C bra */
L_0C7C4A10: BLKS(0x0C7C4A10u);
	MACL = (u32)(u16)r5 * (u32)(u16)r6;  /* 0C7C4A10 mulu.w Rm,Rn */
	IF(0x0C7C4A12u); r1 = MACL;  /* 0C7C4A12 sts macl,Rn */
	T = r1 == r4;  /* 0C7C4A14 cmp/eq Rm,Rn */
	{ IF(0x0C7C4A18u); r1 = T; /* slot movt Rn */ UPD(0x0C7C4990u, 7); goto L_0C7C4990; }  /* 0C7C4A16 bra */
}

/* logo_upload */
void f_0C7C4A34(sh3_t *c)
{
	LOCALS;
L_0C7C4A34: BLKS(0x0C7C4A34u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C7C4A36u, 1);  /* 0C7C4A34 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C7C4A38u, 1);  /* 0C7C4A36 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C7C4A3Au, 1);  /* 0C7C4A38 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C7C4A3Cu, 1);  /* 0C7C4A3A mov.l Rm,@-Rn */
	r1 = 0xC392AF4u; UPD(0x0C7C4A3Eu, 1);  /* 0C7C4A3C mov.l @(disp,pc),Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C7C4A40u, 1);  /* 0C7C4A3E mov.l Rm,@-Rn */
	r8 = R32(r1); UPD(0x0C7C4A42u, 1);  /* 0C7C4A40 mov.l @Rm,Rn */
	r1 = 0xC7B0008u; UPD(0x0C7C4A44u, 1);  /* 0C7C4A42 mov.l @(disp,pc),Rn */
	r2 = 0x20000000u; UPD(0x0C7C4A46u, 1);  /* 0C7C4A44 mov.l @(disp,pc),Rn */
	r12 = (u32)(s32)(s16)R16(r1); UPD(0x0C7C4A48u, 1);  /* 0C7C4A46 mov.w @Rm,Rn */
	r1 += 0x2u;  /* 0C7C4A48 add #imm,Rn */
	r11 = (u32)(s32)(s16)R16(r1); UPD(0x0C7C4A4Cu, 2);  /* 0C7C4A4A mov.w @Rm,Rn */
	r1 += 0x6u;  /* 0C7C4A4C add #imm,Rn */
	r5 = (u32)(s32)(s16)R16(r1); UPD(0x0C7C4A50u, 2);  /* 0C7C4A4E mov.w @Rm,Rn */
	r1 += 0x4u;  /* 0C7C4A50 add #imm,Rn */
	r1 = R32(r1); UPD(0x0C7C4A54u, 2);  /* 0C7C4A52 mov.l @Rm,Rn */
	r10 = r12 & 0xFFFF;  /* 0C7C4A54 extu.w Rm,Rn */
	W32(r8, r2); UPD(0x0C7C4A58u, 2);  /* 0C7C4A56 mov.l Rm,@Rn */
	r5 = r5 & 0xFFFF;  /* 0C7C4A58 extu.w Rm,Rn */
	r2 = 0x99999999u; UPD(0x0C7C4A5Cu, 2);  /* 0C7C4A5A mov.l @(disp,pc),Rn */
	r9 = r11 & 0xFFFF;  /* 0C7C4A5C extu.w Rm,Rn */
	r0 = 0x63D800Cu; UPD(0x0C7C4A60u, 2);  /* 0C7C4A5E mov.l @(disp,pc),Rn */
	r10 += 0xFFFFFFFFu;  /* 0C7C4A60 add #imm,Rn */
	W32(r8 + 0x4u, r2); UPD(0x0C7C4A64u, 2);  /* 0C7C4A62 mov.l Rm,@(disp,Rn) */
	r9 += 0xFFFFFFFFu;  /* 0C7C4A64 add #imm,Rn */
	r2 = 0x1E000700u; UPD(0x0C7C4A68u, 2);  /* 0C7C4A66 mov.l @(disp,pc),Rn */
	r5 += r0;  /* 0C7C4A68 add Rm,Rn */
	r5 += r5;  /* 0C7C4A6A add Rm,Rn */
	W32(r8 + 0x8u, r2); UPD(0x0C7C4A6Eu, 3);  /* 0C7C4A6C mov.l Rm,@(disp,Rn) */
	r1 += r5;  /* 0C7C4A6E add Rm,Rn */
	r2 = r10;  /* 0C7C4A70 mov Rm,Rn */
	IF(0x0C7C4A72u); r2 <<= 16;  /* 0C7C4A72 shll16 Rn */
	r2 |= r9;  /* 0C7C4A74 or Rm,Rn */
	T = r5 >= r1;  /* 0C7C4A76 cmp/hs Rm,Rn */
	W32(r8 + 0xCu, r2); UPD(0x0C7C4A7Au, 6);  /* 0C7C4A78 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = T; IF(0x0C7C4A7Cu); T = 1; /* slot sett */ if (c_) { UPD(0x0C7C4AC6u, 3); goto L_0C7C4AC6; } goto L_0C7C4A7E; }  /* 0C7C4A7A bt/s */
L_0C7C4A7E: BLKS(0x0C7C4A7Eu);
	r7 = r1;  /* 0C7C4A7E mov Rm,Rn */
	{ u32 a_ = r7, t_ = a_ - r5, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r7 = r_; }  /* 0C7C4A80 subc Rm,Rn */
	r2 = r5;  /* 0C7C4A82 mov Rm,Rn */
	IF(0x0C7C4A84u); T = r7 & 1; r7 >>= 1;  /* 0C7C4A84 shlr Rn */
	r4 = r8;  /* 0C7C4A86 mov Rm,Rn */
	r2 += 0x2u;  /* 0C7C4A88 add #imm,Rn */
	r1 += 0x1u;  /* 0C7C4A8A add #imm,Rn */
	T = r2 > r1;  /* 0C7C4A8C cmp/hi Rm,Rn */
	r4 += 0x10u;  /* 0C7C4A8E add #imm,Rn */
	{ u32 c_ = T; r7 += 0x1u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C7C4B0Au, 13); goto L_0C7C4B0A; } UPD(0x0C7C4A94u, 1); goto L_0C7C4A94; }  /* 0C7C4A90 bt/s */
L_0C7C4A94: BLKS(0x0C7C4A94u);
	r0 = (u32)(s32)(s8)R8(r5 + 0x1u); UPD(0x0C7C4A96u, 1);  /* 0C7C4A94 mov.b @(disp,Rm),r0 */
	r1 = 0xC7B0018u; UPD(0x0C7C4A98u, 1);  /* 0C7C4A96 mov.l @(disp,pc),Rn */
	r0 = r0 & 0xFF;  /* 0C7C4A98 extu.b Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r5); UPD(0x0C7C4A9Cu, 2);  /* 0C7C4A9A mov.b @Rm,Rn */
	r0 += r0;  /* 0C7C4A9C add Rm,Rn */
	r0 += r1;  /* 0C7C4A9E add Rm,Rn */
	r6 = (u32)(s32)(s16)R16(r0); UPD(0x0C7C4AA2u, 3);  /* 0C7C4AA0 mov.w @Rm,Rn */
	r2 = r2 & 0xFF;  /* 0C7C4AA2 extu.b Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C7C4AA4 tst Rm,Rn */
	r0 = r2;  /* 0C7C4AA6 mov Rm,Rn */
	r6 = r6 & 0xFFFF;  /* 0C7C4AA8 extu.w Rm,Rn */
	r5 += 0x2u;  /* 0C7C4AAA add #imm,Rn */
	{ u32 c_ = T; r0 += 0xFFFFFFFFu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C7C4AC2u, 8); goto L_0C7C4AC2; } goto L_0C7C4AB0; }  /* 0C7C4AAC bt/s */
L_0C7C4AB0: BLKS(0x0C7C4AB0u);
	r3 = r4;  /* 0C7C4AB0 mov Rm,Rn */
	IF(0x0C7C4AB2u); ;  /* 0C7C4AB2 nop */
	UPD(0x0C7C4AB4u, 3);
L_0C7C4AB4: BLKS(0x0C7C4AB4u);
	W16(r3, r6); UPD(0x0C7C4AB6u, 1);  /* 0C7C4AB4 mov.w Rm,@Rn */
	IF(0x0C7C4AB6u); r2 -= 1; T = r2 == 0;  /* 0C7C4AB6 dt Rn */
	{ u32 c_ = !T; r3 += 0x2u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C7C4AB4u, 4); goto L_0C7C4AB4; } goto L_0C7C4ABC; }  /* 0C7C4AB8 bf/s */
L_0C7C4ABC: BLKS(0x0C7C4ABCu);
	r0 += r0;  /* 0C7C4ABC add Rm,Rn */
	r4 += 0x2u;  /* 0C7C4ABE add #imm,Rn */
	r4 += r0;  /* 0C7C4AC0 add Rm,Rn */
	UPD(0x0C7C4AC2u, 4);
L_0C7C4AC2: BLKS(0x0C7C4AC2u);
	IF(0x0C7C4AC2u); r7 -= 1; T = r7 == 0;  /* 0C7C4AC2 dt Rn */
	if (!T) { UPD(0x0C7C4A94u, 4); goto L_0C7C4A94; }  /* 0C7C4AC4 bf */
L_0C7C4AC6: BLKS(0x0C7C4AC6u);
	MACL = (u32)(u16)r12 * (u32)(u16)r11;  /* 0C7C4AC6 mulu.w Rm,Rn */
	r2 = 0x1u;  /* 0C7C4AC8 mov #imm,Rn */
	r7 = 0xC7B000Fu; UPD(0x0C7C4ACCu, 4);  /* 0C7C4ACA mov.l @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C7C4ACC mov #imm,Rn */
	IF(0x0C7C4ACEu); r1 = MACL;  /* 0C7C4ACE sts macl,Rn */
	r0 = r3;  /* 0C7C4AD0 mov Rm,Rn */
	IF(0x0C7C4AD2u); r10 <<= 8;  /* 0C7C4AD2 shll8 Rn */
	IF(0x0C7C4AD4u); T = r1 & 1; r1 >>= 1;  /* 0C7C4AD4 shlr Rn */
	r1 += 0x4u;  /* 0C7C4AD6 add #imm,Rn */
	IF(0x0C7C4AD8u); r1 <<= 2;  /* 0C7C4AD8 shll2 Rn */
	r8 += r1;  /* 0C7C4ADA add Rm,Rn */
	r1 = 0xC392AF4u; UPD(0x0C7C4ADEu, 9);  /* 0C7C4ADC mov.l @(disp,pc),Rn */
	W32(r1, r8); UPD(0x0C7C4AE0u, 1);  /* 0C7C4ADE mov.l Rm,@Rn */
	r1 = 0xC7C4CE4u; UPD(0x0C7C4AE2u, 1);  /* 0C7C4AE0 mov.l @(disp,pc),Rn */
	W16(r1, r2); UPD(0x0C7C4AE4u, 1);  /* 0C7C4AE2 mov.w Rm,@Rn */
	r2 = 0xC7B000Du; UPD(0x0C7C4AE6u, 1);  /* 0C7C4AE4 mov.l @(disp,pc),Rn */
	W16(r1 + 0x2u, r0); UPD(0x0C7C4AE8u, 1);  /* 0C7C4AE6 mov.w r0,@(disp,Rn) */
	r2 = (u32)(s32)(s8)R8(r2); UPD(0x0C7C4AEAu, 1);  /* 0C7C4AE8 mov.b @Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r7); UPD(0x0C7C4AECu, 1);  /* 0C7C4AEA mov.b @Rm,Rn */
	IF(0x0C7C4AECu); r2 <<= 8;  /* 0C7C4AEC shll8 Rn */
	r0 = r0 & 0xFF;  /* 0C7C4AEE extu.b Rm,Rn */
	r0 |= r2;  /* 0C7C4AF0 or Rm,Rn */
	W16(r1 + 0x4u, r0); UPD(0x0C7C4AF4u, 4);  /* 0C7C4AF2 mov.w r0,@(disp,Rn) */
	r0 = r9;  /* 0C7C4AF4 mov Rm,Rn */
	r0 |= r10;  /* 0C7C4AF6 or Rm,Rn */
	W16(r1 + 0x6u, r0); UPD(0x0C7C4AFAu, 3);  /* 0C7C4AF8 mov.w r0,@(disp,Rn) */
	r0 = r3;  /* 0C7C4AFA mov Rm,Rn */
	W16(r1 + 0x8u, r0); UPD(0x0C7C4AFEu, 2);  /* 0C7C4AFC mov.w r0,@(disp,Rn) */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C7C4B00u, 1);  /* 0C7C4AFE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C7C4B02u, 1);  /* 0C7C4B00 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C7C4B04u, 1);  /* 0C7C4B02 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C4B06u, 1);  /* 0C7C4B04 mov.l @Rm+,Rn */
	IF(0x0C7C4B06u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C7C4B06 rts */
L_0C7C4B0A: BLKS(0x0C7C4B0Au);
	{ r7 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C7C4A94u, 3); goto L_0C7C4A94; }  /* 0C7C4B0A bra */
}

/* taito_logo */
void f_0C7C4B38(sh3_t *c)
{
	LOCALS;
L_0C7C4B38: BLKS(0x0C7C4B38u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C7C4B3Au, 1);  /* 0C7C4B38 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C7C4B3Cu, 1);  /* 0C7C4B3A mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C7C4B3Eu, 1);  /* 0C7C4B3C mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C7C4B40u, 1);  /* 0C7C4B3E mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C7C4B42u, 1);  /* 0C7C4B40 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C7C4B44u, 1);  /* 0C7C4B42 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C7C4B46u, 1);  /* 0C7C4B44 mov.l Rm,@-Rn */
	IF(0x0C7C4B46u); r15 -= 4; W32(r15, PR); UPD(0x0C7C4B48u, 1);  /* 0C7C4B46 sts.l pr,@-Rn */
	r9 = 0xC284C84u; UPD(0x0C7C4B4Au, 1);  /* 0C7C4B48 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C7C4B4A add #imm,Rn */
	r1 = R32(r9); UPD(0x0C7C4B4Eu, 2);  /* 0C7C4B4C mov.l @Rm,Rn */
	W32(r15 + 0x4u, r1); UPD(0x0C7C4B50u, 1);  /* 0C7C4B4E mov.l Rm,@(disp,Rn) */
	r1 = 0xC21F589u; UPD(0x0C7C4B52u, 1);  /* 0C7C4B50 mov.l @(disp,pc),Rn */
	r8 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C4B54u, 1);  /* 0C7C4B52 mov.b @Rm,Rn */
	r8 = r8 & 0xFF;  /* 0C7C4B54 extu.b Rm,Rn */
	T = (r8 & r8) == 0;  /* 0C7C4B56 tst Rm,Rn */
	if (T) { UPD(0x0C7C4B6Eu, 5); goto L_0C7C4B6E; }  /* 0C7C4B58 bt */
L_0C7C4B5A: BLKS(0x0C7C4B5Au);
	r15 += 0x8u;  /* 0C7C4B5A add #imm,Rn */
	IF(0x0C7C4B5Cu); PR = R32(r15); r15 += 4; UPD(0x0C7C4B5Eu, 2);  /* 0C7C4B5C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C7C4B60u, 1);  /* 0C7C4B5E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C7C4B62u, 1);  /* 0C7C4B60 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C7C4B64u, 1);  /* 0C7C4B62 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C7C4B66u, 1);  /* 0C7C4B64 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C7C4B68u, 1);  /* 0C7C4B66 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C4B6Au, 1);  /* 0C7C4B68 mov.l @Rm+,Rn */
	IF(0x0C7C4B6Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C7C4B6A rts */
L_0C7C4B6E: BLKS(0x0C7C4B6Eu);
	r0 = 0xC7C4960u; UPD(0x0C7C4B70u, 1);  /* 0C7C4B6E mov.l @(disp,pc),Rn */
	IF(0x0C7C4B70u); { u32 t_ = r0; PR = 0x0C7C4B74u; IF(0x0C7C4B72u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C7C4960, 0x0C7C4960u, 0x0C7C4B74u); }  /* 0C7C4B70 jsr @Rn */
L_0C7C4B74: BLKS(0x0C7C4B74u);
	T = (r0 & r0) == 0;  /* 0C7C4B74 tst Rm,Rn */
	{ u32 c_ = T; r10 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C7C4B5Au, 4); goto L_0C7C4B5A; } goto L_0C7C4B7A; }  /* 0C7C4B76 bt/s */
L_0C7C4B7A: BLKS(0x0C7C4B7Au);
	r2 = 0xC283CA4u; UPD(0x0C7C4B7Cu, 2);  /* 0C7C4B7A mov.l @(disp,pc),Rn */
	r14 = 0xC7C4CE4u; UPD(0x0C7C4B7Eu, 1);  /* 0C7C4B7C mov.l @(disp,pc),Rn */
	W32(r2, r8); UPD(0x0C7C4B80u, 1);  /* 0C7C4B7E mov.l Rm,@Rn */
	r2 = 0xC3929E0u; UPD(0x0C7C4B82u, 1);  /* 0C7C4B80 mov.l @(disp,pc),Rn */
	r13 = 0xC7C4CE0u; UPD(0x0C7C4B84u, 1);  /* 0C7C4B82 mov.l @(disp,pc),Rn */
	W32(r2, r8); UPD(0x0C7C4B86u, 1);  /* 0C7C4B84 mov.l Rm,@Rn */
	r12 = 0xC04F330u; UPD(0x0C7C4B88u, 1);  /* 0C7C4B86 mov.l @(disp,pc),Rn */
	r11 = 0xC04F930u; UPD(0x0C7C4B8Au, 1);  /* 0C7C4B88 mov.l @(disp,pc),Rn */
	{ r8 = 0x78u; /* slot mov #imm,Rn */ UPD(0x0C7C4BF4u, 3); goto L_0C7C4BF4; }  /* 0C7C4B8A bra */
L_0C7C4B8E: BLKS(0x0C7C4B8Eu);
	r1 = 0x1E000700u; UPD(0x0C7C4B90u, 1);  /* 0C7C4B8E mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C7C4B90 mov #imm,Rn */
	r7 = 0x808080u; UPD(0x0C7C4B94u, 2);  /* 0C7C4B92 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFFFu;  /* 0C7C4B94 add #imm,Rn */
	W32(r9, r1); UPD(0x0C7C4B98u, 2);  /* 0C7C4B96 mov.l Rm,@Rn */
	r1 = 0xC2175E8u; UPD(0x0C7C4B9Au, 1);  /* 0C7C4B98 mov.l @(disp,pc),Rn */
	r6 = 0x780000u; UPD(0x0C7C4B9Cu, 1);  /* 0C7C4B9A mov.l @(disp,pc),Rn */
	W32(r1, r14); UPD(0x0C7C4B9Eu, 1);  /* 0C7C4B9C mov.l Rm,@Rn */
	r1 = 0xC393044u; UPD(0x0C7C4BA0u, 1);  /* 0C7C4B9E mov.l @(disp,pc),Rn */
	r5 = 0xA80000u; UPD(0x0C7C4BA2u, 1);  /* 0C7C4BA0 mov.l @(disp,pc),Rn */
	W32(r1, r13); UPD(0x0C7C4BA4u, 1);  /* 0C7C4BA2 mov.l Rm,@Rn */
	r1 = 0x0u;  /* 0C7C4BA4 mov #imm,Rn */
	W32(r15, r1); UPD(0x0C7C4BA8u, 2);  /* 0C7C4BA6 mov.l Rm,@Rn */
	r1 = 0xC062A70u; UPD(0x0C7C4BAAu, 1);  /* 0C7C4BA8 mov.l @(disp,pc),Rn */
	IF(0x0C7C4BAAu); { u32 t_ = r1; PR = 0x0C7C4BAEu; IF(0x0C7C4BACu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C062A70, 0x0C062A70u, 0x0C7C4BAEu); }  /* 0C7C4BAA jsr @Rn */
L_0C7C4BAE: BLKS(0x0C7C4BAEu);
	r0 = 0xC04F770u; UPD(0x0C7C4BB0u, 1);  /* 0C7C4BAE mov.l @(disp,pc),Rn */
	r7 = 0x0u;  /* 0C7C4BB0 mov #imm,Rn */
	r6 = 0x0u;  /* 0C7C4BB2 mov #imm,Rn */
	r5 = 0x7u;  /* 0C7C4BB4 mov #imm,Rn */
	IF(0x0C7C4BB6u); { u32 t_ = r0; PR = 0x0C7C4BBAu; r4 = 0x7u; /* slot mov #imm,Rn */ UPD(t_, 5); CALLP(t_, f_0C04F770, 0x0C04F770u, 0x0C7C4BBAu); }  /* 0C7C4BB6 jsr @Rn */
L_0C7C4BBA: BLKS(0x0C7C4BBAu);
	r0 = 0xC050840u; UPD(0x0C7C4BBCu, 1);  /* 0C7C4BBA mov.l @(disp,pc),Rn */
	r7 = 0x0u;  /* 0C7C4BBC mov #imm,Rn */
	r6 = 0x0u;  /* 0C7C4BBE mov #imm,Rn */
	r5 = 0x0u;  /* 0C7C4BC0 mov #imm,Rn */
	IF(0x0C7C4BC2u); { u32 t_ = r0; PR = 0x0C7C4BC6u; r4 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 5); CALLP(t_, f_0C050840, 0x0C050840u, 0x0C7C4BC6u); }  /* 0C7C4BC2 jsr @Rn */
L_0C7C4BC6: BLKS(0x0C7C4BC6u);
	r1 = 0xC21F7F9u; UPD(0x0C7C4BC8u, 1);  /* 0C7C4BC6 mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C4BCAu, 1);  /* 0C7C4BC8 mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C4BCA tst Rm,Rn */
	if (T) { UPD(0x0C7C4BD6u, 4); goto L_0C7C4BD6; }  /* 0C7C4BCC bt */
L_0C7C4BCE: BLKS(0x0C7C4BCEu);
	r1 = 0xC27DE74u; UPD(0x0C7C4BD0u, 1);  /* 0C7C4BCE mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C4BD2u, 1);  /* 0C7C4BD0 mov.b @Rm,Rn */
	IF(0x0C7C4BD2u); T = (s32)r1 >= 0;  /* 0C7C4BD2 cmp/pz Rn */
	if (!T) { UPD(0x0C7C4C2Eu, 4); goto L_0C7C4C2E; }  /* 0C7C4BD4 bf */
L_0C7C4BD6: BLKS(0x0C7C4BD6u);
	r0 = 0xC060C30u; UPD(0x0C7C4BD8u, 1);  /* 0C7C4BD6 mov.l @(disp,pc),Rn */
	r7 = 0x0u;  /* 0C7C4BD8 mov #imm,Rn */
	r6 = 0x0u;  /* 0C7C4BDA mov #imm,Rn */
	r5 = 0x0u;  /* 0C7C4BDC mov #imm,Rn */
	IF(0x0C7C4BDEu); { u32 t_ = r0; PR = 0x0C7C4BE2u; r4 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 5); CALLP(t_, f_0C060C30, 0x0C060C30u, 0x0C7C4BE2u); }  /* 0C7C4BDE jsr @Rn */
L_0C7C4BE2: BLKS(0x0C7C4BE2u);
	T = (r8 & r8) == 0;  /* 0C7C4BE2 tst Rm,Rn */
	{ u32 c_ = T; T = (r0 & r0) == 0; /* slot tst Rm,Rn */ if (c_) { UPD(0x0C7C4C2Eu, 4); goto L_0C7C4C2E; } goto L_0C7C4BE8; }  /* 0C7C4BE4 bt/s */
L_0C7C4BE8: BLKS(0x0C7C4BE8u);
	if (!T) { UPD(0x0C7C4C2Eu, 4); goto L_0C7C4C2E; }  /* 0C7C4BE8 bf */
L_0C7C4BEA: BLKS(0x0C7C4BEAu);
	r1 = 0xC21F589u; UPD(0x0C7C4BECu, 1);  /* 0C7C4BEA mov.l @(disp,pc),Rn */
	r10 = 0x0u;  /* 0C7C4BEC mov #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C4BF0u, 2);  /* 0C7C4BEE mov.b @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C7C4BF0 tst Rm,Rn */
	if (!T) { UPD(0x0C7C4C2Eu, 4); goto L_0C7C4C2E; }  /* 0C7C4BF2 bf */
L_0C7C4BF4: BLKS(0x0C7C4BF4u);
	r7 = 0x0u;  /* 0C7C4BF4 mov #imm,Rn */
	r6 = 0x0u;  /* 0C7C4BF6 mov #imm,Rn */
	r5 = 0x0u;  /* 0C7C4BF8 mov #imm,Rn */
	IF(0x0C7C4BFAu); { u32 t_ = r12; PR = 0x0C7C4BFEu; r4 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 5); CALLD(t_, 0x0C7C4BFEu); }  /* 0C7C4BFA jsr @Rn */
L_0C7C4BFE: BLKS(0x0C7C4BFEu);
	r7 = 0x0u;  /* 0C7C4BFE mov #imm,Rn */
	r6 = 0x0u;  /* 0C7C4C00 mov #imm,Rn */
	r5 = 0x0u;  /* 0C7C4C02 mov #imm,Rn */
	IF(0x0C7C4C04u); { u32 t_ = r11; PR = 0x0C7C4C08u; r4 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 5); CALLD(t_, 0x0C7C4C08u); }  /* 0C7C4C04 jsr @Rn */
L_0C7C4C08: BLKS(0x0C7C4C08u);
	r2 = 0xC050650u; UPD(0x0C7C4C0Au, 1);  /* 0C7C4C08 mov.l @(disp,pc),Rn */
	r7 = 0x0u;  /* 0C7C4C0A mov #imm,Rn */
	r4 = 0xFFFFFFu; UPD(0x0C7C4C0Eu, 2);  /* 0C7C4C0C mov.l @(disp,pc),Rn */
	r6 = 0x0u;  /* 0C7C4C0E mov #imm,Rn */
	IF(0x0C7C4C10u); { u32 t_ = r2; PR = 0x0C7C4C14u; r5 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C050650, 0x0C050650u, 0x0C7C4C14u); }  /* 0C7C4C10 jsr @Rn */
L_0C7C4C14: BLKS(0x0C7C4C14u);
	r1 = 0xC0505F0u; UPD(0x0C7C4C16u, 1);  /* 0C7C4C14 mov.l @(disp,pc),Rn */
	r7 = 0x0u;  /* 0C7C4C16 mov #imm,Rn */
	r6 = 0x0u;  /* 0C7C4C18 mov #imm,Rn */
	r5 = 0x0u;  /* 0C7C4C1A mov #imm,Rn */
	IF(0x0C7C4C1Cu); { u32 t_ = r1; PR = 0x0C7C4C20u; r4 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 5); CALLP(t_, f_0C0505F0, 0x0C0505F0u, 0x0C7C4C20u); }  /* 0C7C4C1C jsr @Rn */
L_0C7C4C20: BLKS(0x0C7C4C20u);
	T = (r10 & r10) == 0;  /* 0C7C4C20 tst Rm,Rn */
	if (T) { UPD(0x0C7C4B8Eu, 4); goto L_0C7C4B8E; }  /* 0C7C4C22 bt */
L_0C7C4C24: BLKS(0x0C7C4C24u);
	r1 = 0xC7C4A34u; UPD(0x0C7C4C26u, 1);  /* 0C7C4C24 mov.l @(disp,pc),Rn */
	IF(0x0C7C4C26u); { u32 t_ = r1; PR = 0x0C7C4C2Au; IF(0x0C7C4C28u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C7C4A34, 0x0C7C4A34u, 0x0C7C4C2Au); }  /* 0C7C4C26 jsr @Rn */
L_0C7C4C2A: BLKS(0x0C7C4C2Au);
	{ IF(0x0C7C4C2Cu); ; /* slot nop */ UPD(0x0C7C4B8Eu, 3); goto L_0C7C4B8E; }  /* 0C7C4C2A bra */
L_0C7C4C2E: BLKS(0x0C7C4C2Eu);
	r1 = 0xC284C84u; UPD(0x0C7C4C30u, 1);  /* 0C7C4C2E mov.l @(disp,pc),Rn */
	r2 = R32(r15 + 0x4u); UPD(0x0C7C4C32u, 1);  /* 0C7C4C30 mov.l @(disp,Rm),Rn */
	W32(r1, r2); UPD(0x0C7C4C34u, 1);  /* 0C7C4C32 mov.l Rm,@Rn */
	r15 += 0x8u;  /* 0C7C4C34 add #imm,Rn */
	IF(0x0C7C4C36u); PR = R32(r15); r15 += 4; UPD(0x0C7C4C38u, 2);  /* 0C7C4C36 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C7C4C3Au, 1);  /* 0C7C4C38 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C7C4C3Cu, 1);  /* 0C7C4C3A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C7C4C3Eu, 1);  /* 0C7C4C3C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C7C4C40u, 1);  /* 0C7C4C3E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C7C4C42u, 1);  /* 0C7C4C40 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C4C44u, 1);  /* 0C7C4C42 mov.l @Rm+,Rn */
	IF(0x0C7C4C44u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C7C4C44 rts */
}

/* arr_logo_ami */
void f_0C7C4CAC(sh3_t *c)
{
	LOCALS;
L_0C7C4CAC: BLKS(0x0C7C4CACu);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C7C4CAEu, 1);  /* 0C7C4CAC mov.l Rm,@-Rn */
	r8 = r4;  /* 0C7C4CAE mov Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C7C4CB2u, 2);  /* 0C7C4CB0 mov.l Rm,@-Rn */
	r9 = r5;  /* 0C7C4CB2 mov Rm,Rn */
	r1 = 0xC7C4B38u; UPD(0x0C7C4CB6u, 2);  /* 0C7C4CB4 mov.l @(disp,pc),Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C7C4CB8u, 1);  /* 0C7C4CB6 mov.l Rm,@-Rn */
	r10 = r6;  /* 0C7C4CB8 mov Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C7C4CBCu, 2);  /* 0C7C4CBA mov.l Rm,@-Rn */
	IF(0x0C7C4CBCu); r15 -= 4; W32(r15, PR); UPD(0x0C7C4CBEu, 1);  /* 0C7C4CBC sts.l pr,@-Rn */
	IF(0x0C7C4CBEu); { u32 t_ = r1; PR = 0x0C7C4CC2u; r11 = r7; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C7C4B38, 0x0C7C4B38u, 0x0C7C4CC2u); }  /* 0C7C4CBE jsr @Rn */
L_0C7C4CC2: BLKS(0x0C7C4CC2u);
	r0 = 0xC059E50u; UPD(0x0C7C4CC4u, 1);  /* 0C7C4CC2 mov.l @(disp,pc),Rn */
	r7 = r11;  /* 0C7C4CC4 mov Rm,Rn */
	r6 = r10;  /* 0C7C4CC6 mov Rm,Rn */
	r5 = r9;  /* 0C7C4CC8 mov Rm,Rn */
	r4 = r8;  /* 0C7C4CCA mov Rm,Rn */
	IF(0x0C7C4CCCu); PR = R32(r15); r15 += 4; UPD(0x0C7C4CCEu, 5);  /* 0C7C4CCC lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C7C4CD0u, 1);  /* 0C7C4CCE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C7C4CD2u, 1);  /* 0C7C4CD0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C4CD4u, 1);  /* 0C7C4CD2 mov.l @Rm+,Rn */
	IF(0x0C7C4CD4u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C059E50u: TAIL(f_0C059E50); default: JUMPD(tv_); } }  /* 0C7C4CD4 jmp @Rn */
}

/* arr_lives */
void f_0C7C4CF0(sh3_t *c)
{
	LOCALS;
L_0C7C4CF0: BLKS(0x0C7C4CF0u);
	r1 = 0xC21CA15u; UPD(0x0C7C4CF2u, 1);  /* 0C7C4CF0 mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C4CF4u, 1);  /* 0C7C4CF2 mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C4CF4 tst Rm,Rn */
	{ u32 c_ = !T; r1 = 0x5u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C7C4D50u, 4); goto L_0C7C4D50; } goto L_0C7C4CFA; }  /* 0C7C4CF6 bf/s */
L_0C7C4CFA: BLKS(0x0C7C4CFAu);
	r3 = 0x3087842u; UPD(0x0C7C4CFCu, 2);  /* 0C7C4CFA mov.l @(disp,pc),Rn */
	r5 = (u32)(s32)(s8)r5;  /* 0C7C4CFC exts.b Rm,Rn */
	r2 = r5;  /* 0C7C4CFE mov Rm,Rn */
	IF(0x0C7C4D00u); ARG0(0x421Du); { s32 s_ = (s32)r1; if (s_ >= 0) r2 <<= (s_ & 31); else if ((s_ & 31) == 0) r2 = 0; else r2 >>= ((~s_ & 31) + 1); }  /* 0C7C4D00 shld Rm,Rn */
	r1 = 0x308784Du; UPD(0x0C7C4D04u, 4);  /* 0C7C4D02 mov.l @(disp,pc),Rn */
	r6 = (u32)(s32)(s8)r6;  /* 0C7C4D04 exts.b Rm,Rn */
	r3 += r6;  /* 0C7C4D06 add Rm,Rn */
	r7 = r2;  /* 0C7C4D08 mov Rm,Rn */
	r1 += r6;  /* 0C7C4D0A add Rm,Rn */
	r7 += r3;  /* 0C7C4D0C add Rm,Rn */
	r2 += r1;  /* 0C7C4D0E add Rm,Rn */
	IF(0x0C7C4D10u); r7 <<= 2;  /* 0C7C4D10 shll2 Rn */
	IF(0x0C7C4D12u); r2 <<= 2;  /* 0C7C4D12 shll2 Rn */
	r2 -= r7;  /* 0C7C4D14 sub Rm,Rn */
	r2 += 0xFFFFFFFCu;  /* 0C7C4D16 add #imm,Rn */
	IF(0x0C7C4D18u); r2 >>= 2;  /* 0C7C4D18 shlr2 Rn */
	r6 = 0x0u;  /* 0C7C4D1A mov #imm,Rn */
	r2 += 0x1u;  /* 0C7C4D1C add #imm,Rn */
	IF(0x0C7C4D1Eu); ;  /* 0C7C4D1E nop */
	UPD(0x0C7C4D20u, 14);
L_0C7C4D20: BLKS(0x0C7C4D20u);
	W32(r7, r6); UPD(0x0C7C4D22u, 1);  /* 0C7C4D20 mov.l Rm,@Rn */
	IF(0x0C7C4D22u); r2 -= 1; T = r2 == 0;  /* 0C7C4D22 dt Rn */
	{ u32 c_ = !T; r7 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C7C4D20u, 4); goto L_0C7C4D20; } goto L_0C7C4D28; }  /* 0C7C4D24 bf/s */
L_0C7C4D28: BLKS(0x0C7C4D28u);
	r2 = 0x5u;  /* 0C7C4D28 mov #imm,Rn */
	r5 += 0x1u;  /* 0C7C4D2A add #imm,Rn */
	IF(0x0C7C4D2Cu); ARG0(0x452Du); { s32 s_ = (s32)r2; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = 0; else r5 >>= ((~s_ & 31) + 1); }  /* 0C7C4D2C shld Rm,Rn */
	r2 = r3;  /* 0C7C4D2E mov Rm,Rn */
	r1 += r5;  /* 0C7C4D30 add Rm,Rn */
	r2 += r5;  /* 0C7C4D32 add Rm,Rn */
	IF(0x0C7C4D34u); r2 <<= 2;  /* 0C7C4D34 shll2 Rn */
	IF(0x0C7C4D36u); r1 <<= 2;  /* 0C7C4D36 shll2 Rn */
	r1 -= r2;  /* 0C7C4D38 sub Rm,Rn */
	r1 += 0xFFFFFFFCu;  /* 0C7C4D3A add #imm,Rn */
	IF(0x0C7C4D3Cu); r1 >>= 2;  /* 0C7C4D3C shlr2 Rn */
	r3 = 0x0u;  /* 0C7C4D3E mov #imm,Rn */
	r1 += 0x1u;  /* 0C7C4D40 add #imm,Rn */
	IF(0x0C7C4D42u); ;  /* 0C7C4D42 nop */
	UPD(0x0C7C4D44u, 15);
L_0C7C4D44: BLKS(0x0C7C4D44u);
	W32(r2, r3); UPD(0x0C7C4D46u, 1);  /* 0C7C4D44 mov.l Rm,@Rn */
	IF(0x0C7C4D46u); r1 -= 1; T = r1 == 0;  /* 0C7C4D46 dt Rn */
	{ u32 c_ = !T; r2 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C7C4D44u, 4); goto L_0C7C4D44; } goto L_0C7C4D4C; }  /* 0C7C4D48 bf/s */
L_0C7C4D4C: BLKS(0x0C7C4D4Cu);
	IF(0x0C7C4D4Cu); { u32 t_ = PR; r0 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 4); RET(t_); }  /* 0C7C4D4C rts */
L_0C7C4D50: BLKS(0x0C7C4D50u);
	r0 = 0xC05E610u; UPD(0x0C7C4D52u, 1);  /* 0C7C4D50 mov.l @(disp,pc),Rn */
	IF(0x0C7C4D52u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); IF(0x0C7C4D54u); ; /* slot nop */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C05E610u: TAIL(f_0C05E610); default: JUMPD(tv_); } }  /* 0C7C4D52 jmp @Rn */
}

/* arr_title_print */
void f_0C7C4D68(sh3_t *c)
{
	LOCALS;
L_0C7C4D68: BLKS(0x0C7C4D68u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C7C4D6Au, 1);  /* 0C7C4D68 mov.l Rm,@-Rn */
	r8 = r4;  /* 0C7C4D6A mov Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C7C4D6Eu, 2);  /* 0C7C4D6C mov.l Rm,@-Rn */
	r9 = r5;  /* 0C7C4D6E mov Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C7C4D72u, 2);  /* 0C7C4D70 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C7C4D74u, 1);  /* 0C7C4D72 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C7C4D76u, 1);  /* 0C7C4D74 mov.l Rm,@-Rn */
	r12 = 0xC050CD0u; UPD(0x0C7C4D78u, 1);  /* 0C7C4D76 mov.l @(disp,pc),Rn */
	IF(0x0C7C4D78u); r15 -= 4; W32(r15, PR); UPD(0x0C7C4D7Au, 1);  /* 0C7C4D78 sts.l pr,@-Rn */
	IF(0x0C7C4D7Au); { u32 t_ = r12; PR = 0x0C7C4D7Eu; r10 = r6; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050CD0, 0x0C050CD0u, 0x0C7C4D7Eu); }  /* 0C7C4D7A jsr @Rn */
L_0C7C4D7E: BLKS(0x0C7C4D7Eu);
	r1 = 0xC16154Cu; UPD(0x0C7C4D80u, 1);  /* 0C7C4D7E mov.l @(disp,pc),Rn */
	T = r8 == r1;  /* 0C7C4D80 cmp/eq Rm,Rn */
	{ u32 c_ = !T; r11 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C7C4D92u, 4); goto L_0C7C4D92; } goto L_0C7C4D86; }  /* 0C7C4D82 bf/s */
L_0C7C4D86: BLKS(0x0C7C4D86u);
	r5 = r9;  /* 0C7C4D86 mov Rm,Rn */
	r7 = 0xE040A000u; UPD(0x0C7C4D8Au, 3);  /* 0C7C4D88 mov.l @(disp,pc),Rn */
	r4 = 0xC7C4DB4u; UPD(0x0C7C4D8Cu, 1);  /* 0C7C4D8A mov.l @(disp,pc),Rn */
	r5 += 0xFFFFFFFFu;  /* 0C7C4D8C add #imm,Rn */
	IF(0x0C7C4D8Eu); { u32 t_ = r12; PR = 0x0C7C4D92u; r6 = r10; /* slot mov Rm,Rn */ UPD(t_, 3); CALLD(t_, 0x0C7C4D92u); }  /* 0C7C4D8E jsr @Rn */
L_0C7C4D92: BLKS(0x0C7C4D92u);
	r0 = r11;  /* 0C7C4D92 mov Rm,Rn */
	IF(0x0C7C4D94u); PR = R32(r15); r15 += 4; UPD(0x0C7C4D96u, 2);  /* 0C7C4D94 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C7C4D98u, 1);  /* 0C7C4D96 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C7C4D9Au, 1);  /* 0C7C4D98 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C7C4D9Cu, 1);  /* 0C7C4D9A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C4D9Eu, 1);  /* 0C7C4D9C mov.l @Rm+,Rn */
	IF(0x0C7C4D9Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C7C4D9E rts */
}


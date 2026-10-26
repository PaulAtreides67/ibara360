#include "recomp.h"
#include "recomp_funcs.h"

void f_0C09ACF4(sh3_t *c)
{
	LOCALS;
L_0C09ACF4: BLKS(0x0C09ACF4u);
	r14 += 0x3Cu;  /* 0C09ACF4 add #imm,Rn */
	r15 = r14;  /* 0C09ACF6 mov Rm,Rn */
	IF(0x0C09ACF8u); PR = R32(r15); r15 += 4; UPD(0x0C09ACFAu, 3);  /* 0C09ACF8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09ACFCu, 1);  /* 0C09ACFA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C09ACFEu, 1);  /* 0C09ACFC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09AD00u, 1);  /* 0C09ACFE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09AD02u, 1);  /* 0C09AD00 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09AD04u, 1);  /* 0C09AD02 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09AD06u, 1);  /* 0C09AD04 mov.l @Rm+,Rn */
	IF(0x0C09AD06u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09AD06 jmp @Rn */
}

void f_0C09AD10(sh3_t *c)
{
	LOCALS;
	goto L_0C09AD10;
L_0C09ACF4: BLKS(0x0C09ACF4u);
	r14 += 0x3Cu;  /* 0C09ACF4 add #imm,Rn */
	r15 = r14;  /* 0C09ACF6 mov Rm,Rn */
	IF(0x0C09ACF8u); PR = R32(r15); r15 += 4; UPD(0x0C09ACFAu, 3);  /* 0C09ACF8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09ACFCu, 1);  /* 0C09ACFA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C09ACFEu, 1);  /* 0C09ACFC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09AD00u, 1);  /* 0C09ACFE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09AD02u, 1);  /* 0C09AD00 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09AD04u, 1);  /* 0C09AD02 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09AD06u, 1);  /* 0C09AD04 mov.l @Rm+,Rn */
	IF(0x0C09AD06u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09AD06 jmp @Rn */
L_0C09AD10: BLKS(0x0C09AD10u);
	r8 = 0xC0A03F0u; UPD(0x0C09AD12u, 1);  /* 0C09AD10 mov.l @(disp,pc),Rn */
	IF(0x0C09AD12u); { u32 t_ = r8; PR = 0x0C09AD16u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C09AD16u); }  /* 0C09AD12 jsr @Rn */
L_0C09AD16: BLKS(0x0C09AD16u);
	IF(0x0C09AD16u); T = (s32)r0 >= 0;  /* 0C09AD16 cmp/pz Rn */
	if (T) { UPD(0x0C09AD1Eu, 4); goto L_0C09AD1E; }  /* 0C09AD18 bt */
L_0C09AD1A: BLKS(0x0C09AD1Au);
	{ IF(0x0C09AD1Cu); ; /* slot nop */ UPD(0x0C09AE10u, 3); goto L_0C09AE10; }  /* 0C09AD1A bra */
L_0C09AD1E: BLKS(0x0C09AD1Eu);
	r9 = 0xB4u; UPD(0x0C09AD20u, 1);  /* 0C09AD1E mov.w @(disp,pc),Rn */
	IF(0x0C09AD20u); MACL = r11 * r9;  /* 0C09AD20 mul.l Rm,Rn */
	r10 = 0xC26CD40u; UPD(0x0C09AD24u, 3);  /* 0C09AD22 mov.l @(disp,pc),Rn */
	IF(0x0C09AD24u); r8 = MACL;  /* 0C09AD24 sts macl,Rn */
	IF(0x0C09AD26u); MACL = r0 * r9;  /* 0C09AD26 mul.l Rm,Rn */
	r8 += r10;  /* 0C09AD28 add Rm,Rn */
	r6 = R32(r8 + 0x2Cu); UPD(0x0C09AD2Cu, 5);  /* 0C09AD2A mov.l @(disp,Rm),Rn */
	IF(0x0C09AD2Cu); r13 = MACL;  /* 0C09AD2C sts macl,Rn */
	r13 += r10;  /* 0C09AD2E add Rm,Rn */
	r5 = R32(r13 + 0x24u); UPD(0x0C09AD32u, 3);  /* 0C09AD30 mov.l @(disp,Rm),Rn */
	r3 = R32(r13 + 0x28u); UPD(0x0C09AD34u, 1);  /* 0C09AD32 mov.l @(disp,Rm),Rn */
	r5 += r6;  /* 0C09AD34 add Rm,Rn */
	r4 = R32(r8 + 0x30u); UPD(0x0C09AD38u, 2);  /* 0C09AD36 mov.l @(disp,Rm),Rn */
	r6 = r8;  /* 0C09AD38 mov Rm,Rn */
	r0 = 0xA8u; UPD(0x0C09AD3Cu, 2);  /* 0C09AD3A mov.w @(disp,pc),Rn */
	r3 += r4;  /* 0C09AD3C add Rm,Rn */
	r2 = R32(r13 + 0x38u); UPD(0x0C09AD40u, 2);  /* 0C09AD3E mov.l @(disp,Rm),Rn */
	r6 += r0;  /* 0C09AD40 add Rm,Rn */
	W32(r8 + 0x24u, r5); UPD(0x0C09AD44u, 2);  /* 0C09AD42 mov.l Rm,@(disp,Rn) */
	r13 += r0;  /* 0C09AD44 add Rm,Rn */
	W32(r8 + 0x28u, r3); UPD(0x0C09AD48u, 2);  /* 0C09AD46 mov.l Rm,@(disp,Rn) */
	r0 = r8;  /* 0C09AD48 mov Rm,Rn */
	W32(r8 + 0x38u, r2); UPD(0x0C09AD4Cu, 2);  /* 0C09AD4A mov.l Rm,@(disp,Rn) */
	r13 += 0x1u;  /* 0C09AD4C add #imm,Rn */
	r12 = 0xAFu; UPD(0x0C09AD50u, 2);  /* 0C09AD4E mov.w @(disp,pc),Rn */
	r8 += 0x7Eu;  /* 0C09AD50 add #imm,Rn */
	r7 = (u32)(s32)(s8)R8(r13); UPD(0x0C09AD54u, 2);  /* 0C09AD52 mov.b @Rm,Rn */
	r6 += 0x1u;  /* 0C09AD54 add #imm,Rn */
	IF(0x0C09AD56u); r1 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C09AD58u, 2);  /* 0C09AD56 mov.b @(r0,Rm),Rn */
	r5 = (u32)(s32)(s16)R16(r8); UPD(0x0C09AD5Au, 1);  /* 0C09AD58 mov.w @Rm,Rn */
	r7 += r1;  /* 0C09AD5A add Rm,Rn */
	W8(r6, r7); UPD(0x0C09AD5Eu, 2);  /* 0C09AD5C mov.b Rm,@Rn */
	r8 += 0xFFFFFF82u;  /* 0C09AD5E add #imm,Rn */
	r0 = R32(r8 + 0xCu); UPD(0x0C09AD62u, 2);  /* 0C09AD60 mov.l @(disp,Rm),Rn */
	T = r0 == 0x1Fu;  /* 0C09AD62 cmp/eq #imm,r0 */
	{ u32 c_ = T; W32(r14, r5); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C09ADB0u, 4); goto L_0C09ADB0; } UPD(0x0C09AD68u, 1); goto L_0C09AD68; }  /* 0C09AD64 bt/s */
L_0C09AD68: BLKS(0x0C09AD68u);
	r3 = 0x99u; UPD(0x0C09AD6Au, 1);  /* 0C09AD68 mov.w @(disp,pc),Rn */
	r9 = 0x3u;  /* 0C09AD6A mov #imm,Rn */
	r3 += r8;  /* 0C09AD6C add Rm,Rn */
	r7 = (u32)(s32)(s8)R8(r3); UPD(0x0C09AD70u, 3);  /* 0C09AD6E mov.b @Rm,Rn */
	r7 += 0x1u;  /* 0C09AD70 add #imm,Rn */
	r10 = r7 & 0xFF;  /* 0C09AD72 extu.b Rm,Rn */
	T = r10 > r9;  /* 0C09AD74 cmp/hi Rm,Rn */
	{ u32 c_ = T; W8(r3, r7); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C09ADA0u, 6); goto L_0C09ADA0; } UPD(0x0C09AD7Au, 1); goto L_0C09AD7A; }  /* 0C09AD76 bt/s */
L_0C09AD7A: BLKS(0x0C09AD7Au);
	IF(0x0C09AD7Au); ;  /* 0C09AD7A nop */
	UPD(0x0C09AD7Cu, 1);
L_0C09AD7C: BLKS(0x0C09AD7Cu);
	r14 += 0x3Cu;  /* 0C09AD7C add #imm,Rn */
	r15 = r14;  /* 0C09AD7E mov Rm,Rn */
	IF(0x0C09AD80u); PR = R32(r15); r15 += 4; UPD(0x0C09AD82u, 3);  /* 0C09AD80 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09AD84u, 1);  /* 0C09AD82 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C09AD86u, 1);  /* 0C09AD84 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09AD88u, 1);  /* 0C09AD86 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09AD8Au, 1);  /* 0C09AD88 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09AD8Cu, 1);  /* 0C09AD8A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09AD8Eu, 1);  /* 0C09AD8C mov.l @Rm+,Rn */
	IF(0x0C09AD8Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C09AD8E rts */
L_0C09ADA0: BLKS(0x0C09ADA0u);
	r12 = 0x0u;  /* 0C09ADA0 mov #imm,Rn */
	W8(r3, r12); UPD(0x0C09ADA4u, 2);  /* 0C09ADA2 mov.b Rm,@Rn */
	r0 += 0x1u;  /* 0C09ADA4 add #imm,Rn */
	W32(r8 + 0xCu, r0); UPD(0x0C09ADA8u, 2);  /* 0C09ADA6 mov.l Rm,@(disp,Rn) */
	r1 = 0xC0A0380u; UPD(0x0C09ADAAu, 1);  /* 0C09ADA8 mov.l @(disp,pc),Rn */
	{ r4 = r11; /* slot mov Rm,Rn */ UPD(0x0C09ACF4u, 3); goto L_0C09ACF4; }  /* 0C09ADAA bra */
L_0C09ADB0: BLKS(0x0C09ADB0u);
	r0 = 0x99u; UPD(0x0C09ADB2u, 1);  /* 0C09ADB0 mov.w @(disp,pc),Rn */
	r13 = 0x3u;  /* 0C09ADB2 mov #imm,Rn */
	IF(0x0C09ADB4u); r3 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C09ADB6u, 2);  /* 0C09ADB4 mov.b @(r0,Rm),Rn */
	r3 += 0x1u;  /* 0C09ADB6 add #imm,Rn */
	r2 = r3 & 0xFF;  /* 0C09ADB8 extu.b Rm,Rn */
	T = r2 > r13;  /* 0C09ADBA cmp/hi Rm,Rn */
	{ u32 c_ = !T; IF(0x0C09ADBEu); W8(r0 + r8, r3); /* slot mov.b Rm,@(r0,Rn) */ if (c_) { UPD(0x0C09AD7Cu, 6); goto L_0C09AD7C; } UPD(0x0C09ADC0u, 1); goto L_0C09ADC0; }  /* 0C09ADBC bf/s */
L_0C09ADC0: BLKS(0x0C09ADC0u);
	r6 = 0x0u;  /* 0C09ADC0 mov #imm,Rn */
	IF(0x0C09ADC2u); W8(r0 + r8, r6); UPD(0x0C09ADC4u, 2);  /* 0C09ADC2 mov.b Rm,@(r0,Rn) */
	r3 = 0x10u;  /* 0C09ADC4 mov #imm,Rn */
	r5 = 0x100u; UPD(0x0C09ADC8u, 2);  /* 0C09ADC6 mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C09ADC8 mov Rm,Rn */
	r4 = 0x86u; UPD(0x0C09ADCCu, 2);  /* 0C09ADCA mov.w @(disp,pc),Rn */
	IF(0x0C09ADCCu); W16(r0 + r4, r5); UPD(0x0C09ADCEu, 1);  /* 0C09ADCC mov.w Rm,@(r0,Rn) */
	r2 = 0xC0A03B0u; UPD(0x0C09ADD0u, 1);  /* 0C09ADCE mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C09ADD0 mov Rm,Rn */
	r0 = R32(r8 + 0x8u); UPD(0x0C09ADD4u, 2);  /* 0C09ADD2 mov.l @(disp,Rm),Rn */
	r13 = 0xC0A1530u; UPD(0x0C09ADD6u, 1);  /* 0C09ADD4 mov.l @(disp,pc),Rn */
	r0 += 0x1u;  /* 0C09ADD6 add #imm,Rn */
	W32(r8 + 0x8u, r0); UPD(0x0C09ADDAu, 2);  /* 0C09ADD8 mov.l Rm,@(disp,Rn) */
	IF(0x0C09ADDAu); { u32 t_ = r2; PR = 0x0C09ADDEu; W32(r8 + 0xCu, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A03B0, 0x0C0A03B0u, 0x0C09ADDEu); }  /* 0C09ADDA jsr @Rn */
L_0C09ADDE: BLKS(0x0C09ADDEu);
	IF(0x0C09ADDEu); { u32 t_ = r13; PR = 0x0C09ADE2u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C09ADE2u); }  /* 0C09ADDE jsr @Rn */
L_0C09ADE2: BLKS(0x0C09ADE2u);
	r6 = R32(r14); UPD(0x0C09ADE4u, 1);  /* 0C09ADE2 mov.l @Rm,Rn */
	r0 = r8;  /* 0C09ADE4 mov Rm,Rn */
	IF(0x0C09ADE6u); MACL = r6 * r9;  /* 0C09ADE6 mul.l Rm,Rn */
	r5 = 0xA4u; UPD(0x0C09ADEAu, 4);  /* 0C09ADE8 mov.w @(disp,pc),Rn */
	r7 = 0x0u;  /* 0C09ADEA mov #imm,Rn */
	IF(0x0C09ADECu); r11 = MACL;  /* 0C09ADEC sts macl,Rn */
	r11 += r10;  /* 0C09ADEE add Rm,Rn */
	r12 = R32(r8); UPD(0x0C09ADF2u, 4);  /* 0C09ADF0 mov.l @Rm,Rn */
	r11 += r5;  /* 0C09ADF2 add Rm,Rn */
	r1 = 0xFFFFBFFFu; UPD(0x0C09ADF6u, 2);  /* 0C09ADF4 mov.w @(disp,pc),Rn */
	r5 += 0xFFFFFFFDu;  /* 0C09ADF6 add #imm,Rn */
	IF(0x0C09ADF8u); r4 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C09ADFAu, 2);  /* 0C09ADF8 mov.b @(r0,Rm),Rn */
	r12 &= r1;  /* 0C09ADFA and Rm,Rn */
	W32(r8, r12); UPD(0x0C09ADFEu, 2);  /* 0C09ADFC mov.l Rm,@Rn */
	W32(r8 + 0x30u, r7); UPD(0x0C09AE00u, 1);  /* 0C09ADFE mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x2Cu, r7); UPD(0x0C09AE02u, 1);  /* 0C09AE00 mov.l Rm,@(disp,Rn) */
	r0 = (u32)(s32)(s8)R8(r11); UPD(0x0C09AE04u, 1);  /* 0C09AE02 mov.b @Rm,Rn */
	r8 = ~r4;  /* 0C09AE04 not Rm,Rn */
	r8 &= r0;  /* 0C09AE06 and Rm,Rn */
	W8(r11, r8); UPD(0x0C09AE0Au, 3);  /* 0C09AE08 mov.b Rm,@Rn */
	r1 = 0xC0AFCA0u; UPD(0x0C09AE0Cu, 1);  /* 0C09AE0A mov.l @(disp,pc),Rn */
	{ r4 = 0xFu; /* slot mov #imm,Rn */ UPD(0x0C09ACF4u, 3); goto L_0C09ACF4; }  /* 0C09AE0C bra */
L_0C09AE10: BLKS(0x0C09AE10u);
	r0 = 0xB4u; UPD(0x0C09AE12u, 1);  /* 0C09AE10 mov.w @(disp,pc),Rn */
	r5 = 0x0u;  /* 0C09AE12 mov #imm,Rn */
	IF(0x0C09AE14u); MACL = r11 * r0;  /* 0C09AE14 mul.l Rm,Rn */
	r11 = 0xC26CD40u; UPD(0x0C09AE18u, 4);  /* 0C09AE16 mov.l @(disp,pc),Rn */
	IF(0x0C09AE18u); r0 = MACL;  /* 0C09AE18 sts macl,Rn */
	{ IF(0x0C09AE1Cu); W32(r0 + r11, r5); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C09AD7Cu, 4); goto L_0C09AD7C; }  /* 0C09AE1A bra */
}

void f_0C09AD7C(sh3_t *c)
{
	LOCALS;
L_0C09AD7C: BLKS(0x0C09AD7Cu);
	r14 += 0x3Cu;  /* 0C09AD7C add #imm,Rn */
	r15 = r14;  /* 0C09AD7E mov Rm,Rn */
	IF(0x0C09AD80u); PR = R32(r15); r15 += 4; UPD(0x0C09AD82u, 3);  /* 0C09AD80 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09AD84u, 1);  /* 0C09AD82 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C09AD86u, 1);  /* 0C09AD84 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09AD88u, 1);  /* 0C09AD86 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09AD8Au, 1);  /* 0C09AD88 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09AD8Cu, 1);  /* 0C09AD8A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09AD8Eu, 1);  /* 0C09AD8C mov.l @Rm+,Rn */
	IF(0x0C09AD8Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C09AD8E rts */
}

void f_0C09AD7E(sh3_t *c)
{
	LOCALS;
L_0C09AD7E: BLKS(0x0C09AD7Eu);
	r15 = r14;  /* 0C09AD7E mov Rm,Rn */
	IF(0x0C09AD80u); PR = R32(r15); r15 += 4; UPD(0x0C09AD82u, 2);  /* 0C09AD80 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09AD84u, 1);  /* 0C09AD82 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C09AD86u, 1);  /* 0C09AD84 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09AD88u, 1);  /* 0C09AD86 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09AD8Au, 1);  /* 0C09AD88 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09AD8Cu, 1);  /* 0C09AD8A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09AD8Eu, 1);  /* 0C09AD8C mov.l @Rm+,Rn */
	IF(0x0C09AD8Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C09AD8E rts */
}

void f_0C09ADA8(sh3_t *c)
{
	LOCALS;
	goto L_0C09ADA8;
L_0C09ACF4: BLKS(0x0C09ACF4u);
	r14 += 0x3Cu;  /* 0C09ACF4 add #imm,Rn */
	r15 = r14;  /* 0C09ACF6 mov Rm,Rn */
	IF(0x0C09ACF8u); PR = R32(r15); r15 += 4; UPD(0x0C09ACFAu, 3);  /* 0C09ACF8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09ACFCu, 1);  /* 0C09ACFA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C09ACFEu, 1);  /* 0C09ACFC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09AD00u, 1);  /* 0C09ACFE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09AD02u, 1);  /* 0C09AD00 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09AD04u, 1);  /* 0C09AD02 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09AD06u, 1);  /* 0C09AD04 mov.l @Rm+,Rn */
	IF(0x0C09AD06u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09AD06 jmp @Rn */
L_0C09ADA8: BLKS(0x0C09ADA8u);
	r1 = 0xC0A0380u; UPD(0x0C09ADAAu, 1);  /* 0C09ADA8 mov.l @(disp,pc),Rn */
	{ r4 = r11; /* slot mov Rm,Rn */ UPD(0x0C09ACF4u, 3); goto L_0C09ACF4; }  /* 0C09ADAA bra */
}

void f_0C09AE10(sh3_t *c)
{
	LOCALS;
	goto L_0C09AE10;
L_0C09AD7C: BLKS(0x0C09AD7Cu);
	r14 += 0x3Cu;  /* 0C09AD7C add #imm,Rn */
	r15 = r14;  /* 0C09AD7E mov Rm,Rn */
	IF(0x0C09AD80u); PR = R32(r15); r15 += 4; UPD(0x0C09AD82u, 3);  /* 0C09AD80 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09AD84u, 1);  /* 0C09AD82 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C09AD86u, 1);  /* 0C09AD84 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09AD88u, 1);  /* 0C09AD86 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09AD8Au, 1);  /* 0C09AD88 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09AD8Cu, 1);  /* 0C09AD8A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09AD8Eu, 1);  /* 0C09AD8C mov.l @Rm+,Rn */
	IF(0x0C09AD8Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C09AD8E rts */
L_0C09AE10: BLKS(0x0C09AE10u);
	r0 = 0xB4u; UPD(0x0C09AE12u, 1);  /* 0C09AE10 mov.w @(disp,pc),Rn */
	r5 = 0x0u;  /* 0C09AE12 mov #imm,Rn */
	IF(0x0C09AE14u); MACL = r11 * r0;  /* 0C09AE14 mul.l Rm,Rn */
	r11 = 0xC26CD40u; UPD(0x0C09AE18u, 4);  /* 0C09AE16 mov.l @(disp,pc),Rn */
	IF(0x0C09AE18u); r0 = MACL;  /* 0C09AE18 sts macl,Rn */
	{ IF(0x0C09AE1Cu); W32(r0 + r11, r5); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C09AD7Cu, 4); goto L_0C09AD7C; }  /* 0C09AE1A bra */
}

void f_0C09AE50(sh3_t *c)
{
	LOCALS;
	goto L_0C09AE50;
L_0C09AD7E: BLKS(0x0C09AD7Eu);
	r15 = r14;  /* 0C09AD7E mov Rm,Rn */
	IF(0x0C09AD80u); PR = R32(r15); r15 += 4; UPD(0x0C09AD82u, 2);  /* 0C09AD80 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09AD84u, 1);  /* 0C09AD82 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C09AD86u, 1);  /* 0C09AD84 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09AD88u, 1);  /* 0C09AD86 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09AD8Au, 1);  /* 0C09AD88 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09AD8Cu, 1);  /* 0C09AD8A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09AD8Eu, 1);  /* 0C09AD8C mov.l @Rm+,Rn */
	IF(0x0C09AD8Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C09AD8E rts */
L_0C09AE50: BLKS(0x0C09AE50u);
	r10 = 0xB4u; UPD(0x0C09AE52u, 1);  /* 0C09AE50 mov.w @(disp,pc),Rn */
	IF(0x0C09AE52u); MACL = r11 * r10;  /* 0C09AE52 mul.l Rm,Rn */
	r8 = 0xC26CD40u; UPD(0x0C09AE56u, 3);  /* 0C09AE54 mov.l @(disp,pc),Rn */
	IF(0x0C09AE56u); r10 = MACL;  /* 0C09AE56 sts macl,Rn */
	r10 += r8;  /* 0C09AE58 add Rm,Rn */
	r10 += 0x3Cu;  /* 0C09AE5A add #imm,Rn */
	r9 = (u32)(s32)(s16)R16(r10); UPD(0x0C09AE5Eu, 4);  /* 0C09AE5C mov.w @Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C09AE5E tst Rm,Rn */
	{ u32 c_ = T; r10 += 0xFFFFFFC4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C09AF30u, 4); goto L_0C09AF30; } goto L_0C09AE64; }  /* 0C09AE60 bt/s */
L_0C09AE64: BLKS(0x0C09AE64u);
	r7 = 0xC099E80u; UPD(0x0C09AE66u, 2);  /* 0C09AE64 mov.l @(disp,pc),Rn */
	IF(0x0C09AE66u); { u32 t_ = r7; PR = 0x0C09AE6Au; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C099E80, 0x0C099E80u, 0x0C09AE6Au); }  /* 0C09AE66 jsr @Rn */
L_0C09AE6A: BLKS(0x0C09AE6Au);
	r13 = 0xB4u; UPD(0x0C09AE6Cu, 1);  /* 0C09AE6A mov.w @(disp,pc),Rn */
	r1 = 0x4u;  /* 0C09AE6C mov #imm,Rn */
	IF(0x0C09AE6Eu); MACL = r11 * r13;  /* 0C09AE6E mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C09AE72u, 4);  /* 0C09AE70 mov.l @(disp,pc),Rn */
	IF(0x0C09AE72u); r11 = MACL;  /* 0C09AE72 sts macl,Rn */
	r11 += r7;  /* 0C09AE74 add Rm,Rn */
	r5 = R32(r11 + 0xCu); UPD(0x0C09AE78u, 3);  /* 0C09AE76 mov.l @(disp,Rm),Rn */
	r13 = 0x0u;  /* 0C09AE78 mov #imm,Rn */
	IF(0x0C09AE7Au); ARG0(0x451Du); { s32 s_ = (s32)r1; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = 0; else r5 >>= ((~s_ & 31) + 1); }  /* 0C09AE7A shld Rm,Rn */
	r10 = (u32)(s32)(s16)r5;  /* 0C09AE7C exts.w Rm,Rn */
	W32(r14 + 0x4u, r10); UPD(0x0C09AE80u, 4);  /* 0C09AE7E mov.l Rm,@(disp,Rn) */
	r12 = r11;  /* 0C09AE80 mov Rm,Rn */
	UPD(0x0C09AE82u, 1);
L_0C09AE82: BLKS(0x0C09AE82u);
	r10 = 0xC058060u; UPD(0x0C09AE84u, 1);  /* 0C09AE82 mov.l @(disp,pc),Rn */
	r5 = 0xFFE50000u; UPD(0x0C09AE86u, 1);  /* 0C09AE84 mov.l @(disp,pc),Rn */
	IF(0x0C09AE86u); { u32 t_ = r10; PR = 0x0C09AE8Au; r4 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C09AE8Au); }  /* 0C09AE86 jsr @Rn */
L_0C09AE8A: BLKS(0x0C09AE8Au);
	r7 = r13;  /* 0C09AE8A mov Rm,Rn */
	r4 = 0xC1D64A4u; UPD(0x0C09AE8Eu, 2);  /* 0C09AE8C mov.l @(disp,pc),Rn */
	IF(0x0C09AE8Eu); r7 <<= 2;  /* 0C09AE8E shll2 Rn */
	r1 = 0xC058030u; UPD(0x0C09AE92u, 2);  /* 0C09AE90 mov.l @(disp,pc),Rn */
	r7 += r4;  /* 0C09AE92 add Rm,Rn */
	r5 = R32(r7); UPD(0x0C09AE96u, 2);  /* 0C09AE94 mov.l @Rm,Rn */
	r9 = r0;  /* 0C09AE96 mov Rm,Rn */
	W32(r14 + 0x18u, r7); UPD(0x0C09AE9Au, 2);  /* 0C09AE98 mov.l Rm,@(disp,Rn) */
	IF(0x0C09AE9Au); { u32 t_ = r1; PR = 0x0C09AE9Eu; r4 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C09AE9Eu); }  /* 0C09AE9A jsr @Rn */
L_0C09AE9E: BLKS(0x0C09AE9Eu);
	r9 -= r0;  /* 0C09AE9E sub Rm,Rn */
	r5 = 0x66666667u; UPD(0x0C09AEA2u, 2);  /* 0C09AEA0 mov.l @(disp,pc),Rn */
	IF(0x0C09AEA2u); r9 <<= 2;  /* 0C09AEA2 shll2 Rn */
	{ s64 r_ = (s64)(s32)r9 * (s64)(s32)r5; MACH = (u32)((u64)r_ >> 32); MACL = (u32)r_; }  /* 0C09AEA4 dmuls.l Rm,Rn */
	r2 = R32(r12 + 0x24u); UPD(0x0C09AEA8u, 4);  /* 0C09AEA6 mov.l @(disp,Rm),Rn */
	IF(0x0C09AEA8u); r6 = MACH;  /* 0C09AEA8 sts mach,Rn */
	IF(0x0C09AEAAu); T = r6 & 1; r6 = (u32)((s32)r6 >> 1);  /* 0C09AEAA shar Rn */
	IF(0x0C09AEACu); T = r9 >> 31; r9 <<= 1;  /* 0C09AEAC shll Rn */
	{ u32 a_ = r9, t_ = a_ - r9, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r9 = r_; }  /* 0C09AEAE subc Rm,Rn */
	r6 -= r9;  /* 0C09AEB0 sub Rm,Rn */
	r3 = 0x80000u; UPD(0x0C09AEB4u, 6);  /* 0C09AEB2 mov.l @(disp,pc),Rn */
	r2 += r6;  /* 0C09AEB4 add Rm,Rn */
	r11 = 0xC058030u; UPD(0x0C09AEB8u, 2);  /* 0C09AEB6 mov.l @(disp,pc),Rn */
	r2 += r3;  /* 0C09AEB8 add Rm,Rn */
	W32(r14 + 0x8u, r2); UPD(0x0C09AEBCu, 2);  /* 0C09AEBA mov.l Rm,@(disp,Rn) */
	r5 = 0xFFE50000u; UPD(0x0C09AEBEu, 1);  /* 0C09AEBC mov.l @(disp,pc),Rn */
	IF(0x0C09AEBEu); { u32 t_ = r11; PR = 0x0C09AEC2u; r4 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C09AEC2u); }  /* 0C09AEBE jsr @Rn */
L_0C09AEC2: BLKS(0x0C09AEC2u);
	r10 = 0xC058060u; UPD(0x0C09AEC4u, 1);  /* 0C09AEC2 mov.l @(disp,pc),Rn */
	r8 = R32(r14 + 0x18u); UPD(0x0C09AEC6u, 1);  /* 0C09AEC4 mov.l @(disp,Rm),Rn */
	r11 = R32(r12 + 0x28u); UPD(0x0C09AEC8u, 1);  /* 0C09AEC6 mov.l @(disp,Rm),Rn */
	r5 = R32(r8); UPD(0x0C09AECAu, 1);  /* 0C09AEC8 mov.l @Rm,Rn */
	r11 += r0;  /* 0C09AECA add Rm,Rn */
	IF(0x0C09AECCu); { u32 t_ = r10; PR = 0x0C09AED0u; r4 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C09AED0u); }  /* 0C09AECC jsr @Rn */
L_0C09AED0: BLKS(0x0C09AED0u);
	r1 = 0xC0AFE40u; UPD(0x0C09AED2u, 1);  /* 0C09AED0 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFECu;  /* 0C09AED2 add #imm,Rn */
	IF(0x0C09AED4u); { u32 t_ = r1; PR = 0x0C09AED8u; r11 += r0; /* slot add Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C09AED8u); }  /* 0C09AED4 jsr @Rn */
L_0C09AED8: BLKS(0x0C09AED8u);
	r10 = 0xC1D649Cu; UPD(0x0C09AEDAu, 1);  /* 0C09AED8 mov.l @(disp,pc),Rn */
	r0 &= 0x1u;  /* 0C09AEDA and #imm,r0 */
	IF(0x0C09AEDCu); r0 <<= 2;  /* 0C09AEDC shll2 Rn */
	r10 += r0;  /* 0C09AEDE add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C09AEE2u, 4);  /* 0C09AEE0 mov.w @(disp,pc),Rn */
	IF(0x0C09AEE2u); r9 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C09AEE4u, 1);  /* 0C09AEE2 mov.b @(r0,Rm),Rn */
	r0 = r9 & 0xFF;  /* 0C09AEE4 extu.b Rm,Rn */
	W32(r15, r0); UPD(0x0C09AEE8u, 2);  /* 0C09AEE6 mov.l Rm,@Rn */
	r4 = 0xA9u; UPD(0x0C09AEEAu, 1);  /* 0C09AEE8 mov.w @(disp,pc),Rn */
	r0 = r12;  /* 0C09AEEA mov Rm,Rn */
	IF(0x0C09AEECu); r7 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C09AEEEu, 2);  /* 0C09AEEC mov.b @(r0,Rm),Rn */
	r3 = 0xC050D70u; UPD(0x0C09AEF0u, 1);  /* 0C09AEEE mov.l @(disp,pc),Rn */
	r5 = r7 & 0xFF;  /* 0C09AEF0 extu.b Rm,Rn */
	r6 = 0xFFFD8000u; UPD(0x0C09AEF4u, 2);  /* 0C09AEF2 mov.l @(disp,pc),Rn */
	r5 += 0xFFFFFFFFu;  /* 0C09AEF4 add #imm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C09AEF8u, 2);  /* 0C09AEF6 mov.l Rm,@(disp,Rn) */
	r4 = 0x3FFFu; UPD(0x0C09AEFAu, 1);  /* 0C09AEF8 mov.w @(disp,pc),Rn */
	IF(0x0C09AEFAu); { u32 t_ = r3; PR = 0x0C09AEFEu; W32(r15 + 0x8u, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C09AEFEu); }  /* 0C09AEFA jsr @Rn */
L_0C09AEFE: BLKS(0x0C09AEFEu);
	r2 = 0xFFFFE000u; UPD(0x0C09AF00u, 1);  /* 0C09AEFE mov.w @(disp,pc),Rn */
	r7 = r11;  /* 0C09AF00 mov Rm,Rn */
	r8 = 0x602020u; UPD(0x0C09AF04u, 2);  /* 0C09AF02 mov.l @(disp,pc),Rn */
	r2 += r0;  /* 0C09AF04 add Rm,Rn */
	r9 = 0xC0ACA40u; UPD(0x0C09AF08u, 2);  /* 0C09AF06 mov.l @(disp,pc),Rn */
	W32(r15 + 0xCu, r2); UPD(0x0C09AF0Au, 1);  /* 0C09AF08 mov.l Rm,@(disp,Rn) */
	W32(r15 + 0x10u, r8); UPD(0x0C09AF0Cu, 1);  /* 0C09AF0A mov.l Rm,@(disp,Rn) */
	r4 = R32(r12); UPD(0x0C09AF0Eu, 1);  /* 0C09AF0C mov.l @Rm,Rn */
	r5 = R32(r10); UPD(0x0C09AF10u, 1);  /* 0C09AF0E mov.l @Rm,Rn */
	IF(0x0C09AF10u); { u32 t_ = r9; PR = 0x0C09AF14u; r6 = R32(r14 + 0x8u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0ACA40, 0x0C0ACA40u, 0x0C09AF14u); }  /* 0C09AF10 jsr @Rn */
L_0C09AF14: BLKS(0x0C09AF14u);
	r0 = r13;  /* 0C09AF14 mov Rm,Rn */
	r0 += 0x1u;  /* 0C09AF16 add #imm,Rn */
	r13 = (u32)(s32)(s16)r0;  /* 0C09AF18 exts.w Rm,Rn */
	r4 = 0x1u;  /* 0C09AF1A mov #imm,Rn */
	T = (s32)r13 > (s32)r4;  /* 0C09AF1C cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x14u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C09AE82u, 8); goto L_0C09AE82; } UPD(0x0C09AF22u, 1); goto L_0C09AF22; }  /* 0C09AF1E bf/s */
L_0C09AF22: BLKS(0x0C09AF22u);
	{ r14 += 0x3Cu; /* slot add #imm,Rn */ UPD(0x0C09AD7Eu, 3); goto L_0C09AD7E; }  /* 0C09AF22 bra */
L_0C09AF30: BLKS(0x0C09AF30u);
	r9 = 0x9Fu; UPD(0x0C09AF32u, 1);  /* 0C09AF30 mov.w @(disp,pc),Rn */
	r9 += r10;  /* 0C09AF32 add Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r9); UPD(0x0C09AF36u, 2);  /* 0C09AF34 mov.b @Rm,Rn */
	r0 = r3 & 0xFF;  /* 0C09AF36 extu.b Rm,Rn */
	T = r0 == 0x2u;  /* 0C09AF38 cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C09AF42u, 5); goto L_0C09AF42; }  /* 0C09AF3A bf */
L_0C09AF3C: BLKS(0x0C09AF3Cu);
	r12 = 0x1Du;  /* 0C09AF3C mov #imm,Rn */
	{ IF(0x0C09AF40u); ; /* slot nop */ UPD(0x0C09B1E0u, 4); goto L_0C09B1E0; }  /* 0C09AF3E bra */
L_0C09AF42: BLKS(0x0C09AF42u);
	r3 = 0x2u;  /* 0C09AF42 mov #imm,Rn */
	T = (s32)r0 > (s32)r3;  /* 0C09AF44 cmp/gt Rm,Rn */
	{ u32 c_ = !T; T = r0 == 0x3u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C09AF4Eu, 5); goto L_0C09AF4E; } goto L_0C09AF4A; }  /* 0C09AF46 bf/s */
L_0C09AF4A: BLKS(0x0C09AF4Au);
	{ IF(0x0C09AF4Cu); ; /* slot nop */ UPD(0x0C09B190u, 4); goto L_0C09B190; }  /* 0C09AF4A bra */
L_0C09AF4E: BLKS(0x0C09AF4Eu);
	T = r0 == 0x1u;  /* 0C09AF4E cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C09AF56u, 4); goto L_0C09AF56; }  /* 0C09AF50 bf */
L_0C09AF52: BLKS(0x0C09AF52u);
	{ IF(0x0C09AF54u); ; /* slot nop */ UPD(0x0C09B070u, 3); goto L_0C09B070; }  /* 0C09AF52 bra */
L_0C09AF56: BLKS(0x0C09AF56u);
	r0 = 0xB4u; UPD(0x0C09AF58u, 1);  /* 0C09AF56 mov.w @(disp,pc),Rn */
	r12 = 0x2u;  /* 0C09AF58 mov #imm,Rn */
	IF(0x0C09AF5Au); MACL = r11 * r0;  /* 0C09AF5A mul.l Rm,Rn */
	r3 = 0xC26CD40u; UPD(0x0C09AF5Eu, 4);  /* 0C09AF5C mov.l @(disp,pc),Rn */
	IF(0x0C09AF5Eu); r9 = MACL;  /* 0C09AF5E sts macl,Rn */
	r10 = 0x98u; UPD(0x0C09AF62u, 2);  /* 0C09AF60 mov.w @(disp,pc),Rn */
	r9 += r3;  /* 0C09AF62 add Rm,Rn */
	r10 += r9;  /* 0C09AF64 add Rm,Rn */
	r3 = r10;  /* 0C09AF66 mov Rm,Rn */
	r3 += 0x1u;  /* 0C09AF68 add #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r3); UPD(0x0C09AF6Cu, 5);  /* 0C09AF6A mov.b @Rm,Rn */
	r2 += 0x1u;  /* 0C09AF6C add #imm,Rn */
	r13 = r2 & 0xFF;  /* 0C09AF6E extu.b Rm,Rn */
	T = r13 > r12;  /* 0C09AF70 cmp/hi Rm,Rn */
	{ u32 c_ = !T; W8(r3, r2); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C09AF22u, 6); goto L_0C09AF22; } UPD(0x0C09AF76u, 1); goto L_0C09AF76; }  /* 0C09AF72 bf/s */
L_0C09AF76: BLKS(0x0C09AF76u);
	r8 = 0xC0AFE40u; UPD(0x0C09AF78u, 1);  /* 0C09AF76 mov.l @(disp,pc),Rn */
	r12 = 0x0u;  /* 0C09AF78 mov #imm,Rn */
	IF(0x0C09AF7Au); { u32 t_ = r8; PR = 0x0C09AF7Eu; W8(r3, r12); /* slot mov.b Rm,@Rn */ UPD(t_, 3); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C09AF7Eu); }  /* 0C09AF7A jsr @Rn */
L_0C09AF7E: BLKS(0x0C09AF7Eu);
	r4 = (u32)(s32)(s16)r0;  /* 0C09AF7E exts.w Rm,Rn */
	r5 = 0xC050D70u; UPD(0x0C09AF82u, 2);  /* 0C09AF80 mov.l @(disp,pc),Rn */
	W32(r14 + 0x4u, r4); UPD(0x0C09AF84u, 1);  /* 0C09AF82 mov.l Rm,@(disp,Rn) */
	r4 = 0x280000u; UPD(0x0C09AF86u, 1);  /* 0C09AF84 mov.l @(disp,pc),Rn */
	IF(0x0C09AF86u); { u32 t_ = r5; PR = 0x0C09AF8Au; IF(0x0C09AF88u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C09AF8Au); }  /* 0C09AF86 jsr @Rn */
L_0C09AF8A: BLKS(0x0C09AF8Au);
	r6 = 0xC058060u; UPD(0x0C09AF8Cu, 1);  /* 0C09AF8A mov.l @(disp,pc),Rn */
	r13 = r0;  /* 0C09AF8C mov Rm,Rn */
	r4 = R32(r14 + 0x4u); UPD(0x0C09AF90u, 2);  /* 0C09AF8E mov.l @(disp,Rm),Rn */
	IF(0x0C09AF90u); { u32 t_ = r6; PR = 0x0C09AF94u; r5 = r0; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C09AF94u); }  /* 0C09AF90 jsr @Rn */
L_0C09AF94: BLKS(0x0C09AF94u);
	r7 = R32(r9 + 0x24u); UPD(0x0C09AF96u, 1);  /* 0C09AF94 mov.l @(disp,Rm),Rn */
	r5 = r13;  /* 0C09AF96 mov Rm,Rn */
	r3 = 0x200000u; UPD(0x0C09AF9Au, 2);  /* 0C09AF98 mov.l @(disp,pc),Rn */
	r7 += r0;  /* 0C09AF9A add Rm,Rn */
	r2 = 0xC058030u; UPD(0x0C09AF9Eu, 2);  /* 0C09AF9C mov.l @(disp,pc),Rn */
	r7 += r3;  /* 0C09AF9E add Rm,Rn */
	W32(r14 + 0x8u, r7); UPD(0x0C09AFA2u, 2);  /* 0C09AFA0 mov.l Rm,@(disp,Rn) */
	IF(0x0C09AFA2u); { u32 t_ = r2; PR = 0x0C09AFA6u; r4 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C09AFA6u); }  /* 0C09AFA2 jsr @Rn */
L_0C09AFA6: BLKS(0x0C09AFA6u);
	r13 = R32(r9 + 0x28u); UPD(0x0C09AFA8u, 1);  /* 0C09AFA6 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFF0u;  /* 0C09AFA8 add #imm,Rn */
	r13 += r0;  /* 0C09AFAA add Rm,Rn */
	r1 = 0xC050D70u; UPD(0x0C09AFAEu, 3);  /* 0C09AFAC mov.l @(disp,pc),Rn */
	r4 = 0x4u;  /* 0C09AFAE mov #imm,Rn */
	IF(0x0C09AFB0u); { u32 t_ = r1; PR = 0x0C09AFB4u; W32(r14 + 0xCu, r13); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C09AFB4u); }  /* 0C09AFB0 jsr @Rn */
L_0C09AFB4: BLKS(0x0C09AFB4u);
	r13 = 0xC1D648Cu; UPD(0x0C09AFB6u, 1);  /* 0C09AFB4 mov.l @(disp,pc),Rn */
	IF(0x0C09AFB6u); r0 <<= 2;  /* 0C09AFB6 shll2 Rn */
	r13 += r0;  /* 0C09AFB8 add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C09AFBCu, 3);  /* 0C09AFBA mov.w @(disp,pc),Rn */
	IF(0x0C09AFBCu); r8 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C09AFBEu, 1);  /* 0C09AFBC mov.b @(r0,Rm),Rn */
	r6 = r8 & 0xFF;  /* 0C09AFBE extu.b Rm,Rn */
	W32(r15, r6); UPD(0x0C09AFC2u, 2);  /* 0C09AFC0 mov.l Rm,@Rn */
	r0 = r9;  /* 0C09AFC2 mov Rm,Rn */
	r5 = 0xA9u; UPD(0x0C09AFC6u, 2);  /* 0C09AFC4 mov.w @(disp,pc),Rn */
	r2 = 0xC050D70u; UPD(0x0C09AFC8u, 1);  /* 0C09AFC6 mov.l @(disp,pc),Rn */
	IF(0x0C09AFC8u); r4 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C09AFCAu, 1);  /* 0C09AFC8 mov.b @(r0,Rm),Rn */
	r3 = 0xFFFA0000u; UPD(0x0C09AFCCu, 1);  /* 0C09AFCA mov.l @(disp,pc),Rn */
	r0 = r4 & 0xFF;  /* 0C09AFCC extu.b Rm,Rn */
	W32(r15 + 0x8u, r3); UPD(0x0C09AFD0u, 2);  /* 0C09AFCE mov.l Rm,@(disp,Rn) */
	r4 = 0x2000u; UPD(0x0C09AFD2u, 1);  /* 0C09AFD0 mov.w @(disp,pc),Rn */
	IF(0x0C09AFD2u); { u32 t_ = r2; PR = 0x0C09AFD6u; W32(r15 + 0x4u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C09AFD6u); }  /* 0C09AFD2 jsr @Rn */
L_0C09AFD6: BLKS(0x0C09AFD6u);
	r7 = 0xFFFFF000u; UPD(0x0C09AFD8u, 1);  /* 0C09AFD6 mov.w @(disp,pc),Rn */
	r1 = 0x4u;  /* 0C09AFD8 mov #imm,Rn */
	r0 += r7;  /* 0C09AFDA add Rm,Rn */
	IF(0x0C09AFDCu); ARG0(0x401Du); { s32 s_ = (s32)r1; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C09AFDC shld Rm,Rn */
	r8 = 0xC0AC3B0u; UPD(0x0C09AFE0u, 4);  /* 0C09AFDE mov.l @(disp,pc),Rn */
	W32(r15 + 0xCu, r0); UPD(0x0C09AFE2u, 1);  /* 0C09AFE0 mov.l Rm,@(disp,Rn) */
	r6 = R32(r14 + 0x8u); UPD(0x0C09AFE4u, 1);  /* 0C09AFE2 mov.l @(disp,Rm),Rn */
	r4 = R32(r9); UPD(0x0C09AFE6u, 1);  /* 0C09AFE4 mov.l @Rm,Rn */
	r5 = R32(r13); UPD(0x0C09AFE8u, 1);  /* 0C09AFE6 mov.l @Rm,Rn */
	IF(0x0C09AFE8u); { u32 t_ = r8; PR = 0x0C09AFECu; r7 = R32(r14 + 0xCu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AC3B0, 0x0C0AC3B0u, 0x0C09AFECu); }  /* 0C09AFE8 jsr @Rn */
L_0C09AFEC: BLKS(0x0C09AFECu);
	r6 = (u32)(s32)(s8)R8(r10); UPD(0x0C09AFEEu, 1);  /* 0C09AFEC mov.b @Rm,Rn */
	r4 = 0x3Bu;  /* 0C09AFEE mov #imm,Rn */
	r6 += 0x1u;  /* 0C09AFF0 add #imm,Rn */
	r5 = r6 & 0xFF;  /* 0C09AFF2 extu.b Rm,Rn */
	W8(r10, r6); UPD(0x0C09AFF6u, 4);  /* 0C09AFF4 mov.b Rm,@Rn */
	T = r5 > r4;  /* 0C09AFF6 cmp/hi Rm,Rn */
	{ u32 c_ = !T; r15 += 0x10u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C09AF22u, 4); goto L_0C09AF22; } goto L_0C09AFFC; }  /* 0C09AFF8 bf/s */
L_0C09AFFC: BLKS(0x0C09AFFCu);
	r0 = 0x9Fu; UPD(0x0C09AFFEu, 2);  /* 0C09AFFC mov.w @(disp,pc),Rn */
	W8(r10, r12); UPD(0x0C09B000u, 1);  /* 0C09AFFE mov.b Rm,@Rn */
	IF(0x0C09B000u); r10 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C09B002u, 1);  /* 0C09B000 mov.b @(r0,Rm),Rn */
	r10 += 0x1u;  /* 0C09B002 add #imm,Rn */
	{ IF(0x0C09B006u); W8(r0 + r9, r10); /* slot mov.b Rm,@(r0,Rn) */ UPD(0x0C09AE6Au, 4); goto L_0C09AE6A; }  /* 0C09B004 bra */
L_0C09B070: BLKS(0x0C09B070u);
	r12 = 0x98u; UPD(0x0C09B072u, 1);  /* 0C09B070 mov.w @(disp,pc),Rn */
	r12 += r10;  /* 0C09B072 add Rm,Rn */
	r2 = r12;  /* 0C09B074 mov Rm,Rn */
	r2 += 0x1u;  /* 0C09B076 add #imm,Rn */
	r13 = (u32)(s32)(s8)R8(r2); UPD(0x0C09B07Au, 4);  /* 0C09B078 mov.b @Rm,Rn */
	r13 += 0x1u;  /* 0C09B07A add #imm,Rn */
	r0 = r13 & 0xFF;  /* 0C09B07C extu.b Rm,Rn */
	T = r0 > r3;  /* 0C09B07E cmp/hi Rm,Rn */
	{ u32 c_ = !T; W8(r2, r13); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C09B118u, 6); goto L_0C09B118; } UPD(0x0C09B084u, 1); goto L_0C09B084; }  /* 0C09B080 bf/s */
L_0C09B084: BLKS(0x0C09B084u);
	r4 = 0xC0AFE40u; UPD(0x0C09B086u, 1);  /* 0C09B084 mov.l @(disp,pc),Rn */
	r0 = 0x0u;  /* 0C09B086 mov #imm,Rn */
	IF(0x0C09B088u); { u32 t_ = r4; PR = 0x0C09B08Cu; W8(r2, r0); /* slot mov.b Rm,@Rn */ UPD(t_, 3); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C09B08Cu); }  /* 0C09B088 jsr @Rn */
L_0C09B08C: BLKS(0x0C09B08Cu);
	r13 = (u32)(s32)(s16)r0;  /* 0C09B08C exts.w Rm,Rn */
	W32(r14 + 0x4u, r13); UPD(0x0C09B090u, 2);  /* 0C09B08E mov.l Rm,@(disp,Rn) */
	r1 = 0xC050D70u; UPD(0x0C09B092u, 1);  /* 0C09B090 mov.l @(disp,pc),Rn */
	r13 = 0x280000u; UPD(0x0C09B094u, 1);  /* 0C09B092 mov.l @(disp,pc),Rn */
	IF(0x0C09B094u); { u32 t_ = r1; PR = 0x0C09B098u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C09B098u); }  /* 0C09B094 jsr @Rn */
L_0C09B098: BLKS(0x0C09B098u);
	r7 = 0xC058060u; UPD(0x0C09B09Au, 1);  /* 0C09B098 mov.l @(disp,pc),Rn */
	r8 = r0;  /* 0C09B09A mov Rm,Rn */
	r4 = R32(r14 + 0x4u); UPD(0x0C09B09Eu, 2);  /* 0C09B09C mov.l @(disp,Rm),Rn */
	IF(0x0C09B09Eu); { u32 t_ = r7; PR = 0x0C09B0A2u; r5 = r0; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C09B0A2u); }  /* 0C09B09E jsr @Rn */
L_0C09B0A2: BLKS(0x0C09B0A2u);
	r6 = R32(r10 + 0x24u); UPD(0x0C09B0A4u, 1);  /* 0C09B0A2 mov.l @(disp,Rm),Rn */
	r3 = 0xC058030u; UPD(0x0C09B0A6u, 1);  /* 0C09B0A4 mov.l @(disp,pc),Rn */
	r6 += r0;  /* 0C09B0A6 add Rm,Rn */
	r5 = 0x200000u; UPD(0x0C09B0AAu, 2);  /* 0C09B0A8 mov.l @(disp,pc),Rn */
	r6 += r5;  /* 0C09B0AA add Rm,Rn */
	r5 = r8;  /* 0C09B0AC mov Rm,Rn */
	W32(r14 + 0x8u, r6); UPD(0x0C09B0B0u, 3);  /* 0C09B0AE mov.l Rm,@(disp,Rn) */
	IF(0x0C09B0B0u); { u32 t_ = r3; PR = 0x0C09B0B4u; r4 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C09B0B4u); }  /* 0C09B0B0 jsr @Rn */
L_0C09B0B4: BLKS(0x0C09B0B4u);
	r2 = 0xC050D70u; UPD(0x0C09B0B6u, 1);  /* 0C09B0B4 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF0u;  /* 0C09B0B6 add #imm,Rn */
	r8 = R32(r10 + 0x28u); UPD(0x0C09B0BAu, 2);  /* 0C09B0B8 mov.l @(disp,Rm),Rn */
	r4 = 0x4u;  /* 0C09B0BA mov #imm,Rn */
	r8 += r0;  /* 0C09B0BC add Rm,Rn */
	IF(0x0C09B0BEu); { u32 t_ = r2; PR = 0x0C09B0C2u; W32(r14 + 0xCu, r8); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 4); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C09B0C2u); }  /* 0C09B0BE jsr @Rn */
L_0C09B0C2: BLKS(0x0C09B0C2u);
	r1 = 0xB0u; UPD(0x0C09B0C4u, 1);  /* 0C09B0C2 mov.w @(disp,pc),Rn */
	IF(0x0C09B0C4u); r0 <<= 2;  /* 0C09B0C4 shll2 Rn */
	r1 += r10;  /* 0C09B0C6 add Rm,Rn */
	W32(r14 + 0x10u, r1); UPD(0x0C09B0CAu, 3);  /* 0C09B0C8 mov.l Rm,@(disp,Rn) */
	r8 = 0xC1D648Cu; UPD(0x0C09B0CCu, 1);  /* 0C09B0CA mov.l @(disp,pc),Rn */
	r7 = (u32)(s32)(s8)R8(r1); UPD(0x0C09B0CEu, 1);  /* 0C09B0CC mov.b @Rm,Rn */
	r8 += r0;  /* 0C09B0CE add Rm,Rn */
	r0 = r7 & 0xFF;  /* 0C09B0D0 extu.b Rm,Rn */
	r4 = 0xA9u; UPD(0x0C09B0D4u, 3);  /* 0C09B0D2 mov.w @(disp,pc),Rn */
	W32(r15, r0); UPD(0x0C09B0D6u, 1);  /* 0C09B0D4 mov.l Rm,@Rn */
	r4 += r10;  /* 0C09B0D6 add Rm,Rn */
	W32(r14 + 0x14u, r4); UPD(0x0C09B0DAu, 2);  /* 0C09B0D8 mov.l Rm,@(disp,Rn) */
	r7 = 0xC050D70u; UPD(0x0C09B0DCu, 1);  /* 0C09B0DA mov.l @(disp,pc),Rn */
	r5 = (u32)(s32)(s8)R8(r4); UPD(0x0C09B0DEu, 1);  /* 0C09B0DC mov.b @Rm,Rn */
	r3 = 0xFFFA0000u; UPD(0x0C09B0E0u, 1);  /* 0C09B0DE mov.l @(disp,pc),Rn */
	r6 = r5 & 0xFF;  /* 0C09B0E0 extu.b Rm,Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C09B0E4u, 2);  /* 0C09B0E2 mov.l Rm,@(disp,Rn) */
	r4 = 0x2000u; UPD(0x0C09B0E6u, 1);  /* 0C09B0E4 mov.w @(disp,pc),Rn */
	IF(0x0C09B0E6u); { u32 t_ = r7; PR = 0x0C09B0EAu; W32(r15 + 0x8u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C09B0EAu); }  /* 0C09B0E6 jsr @Rn */
L_0C09B0EA: BLKS(0x0C09B0EAu);
	r2 = 0xFFFFF000u; UPD(0x0C09B0ECu, 1);  /* 0C09B0EA mov.w @(disp,pc),Rn */
	r1 = 0x4u;  /* 0C09B0EC mov #imm,Rn */
	r0 += r2;  /* 0C09B0EE add Rm,Rn */
	IF(0x0C09B0F0u); ARG0(0x401Du); { s32 s_ = (s32)r1; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C09B0F0 shld Rm,Rn */
	W32(r15 + 0xCu, r0); UPD(0x0C09B0F4u, 4);  /* 0C09B0F2 mov.l Rm,@(disp,Rn) */
	r5 = R32(r8); UPD(0x0C09B0F6u, 1);  /* 0C09B0F4 mov.l @Rm,Rn */
	r8 = 0xC0AC3B0u; UPD(0x0C09B0F8u, 1);  /* 0C09B0F6 mov.l @(disp,pc),Rn */
	r4 = R32(r10); UPD(0x0C09B0FAu, 1);  /* 0C09B0F8 mov.l @Rm,Rn */
	r6 = R32(r14 + 0x8u); UPD(0x0C09B0FCu, 1);  /* 0C09B0FA mov.l @(disp,Rm),Rn */
	IF(0x0C09B0FCu); { u32 t_ = r8; PR = 0x0C09B100u; r7 = R32(r14 + 0xCu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AC3B0, 0x0C0AC3B0u, 0x0C09B100u); }  /* 0C09B0FC jsr @Rn */
L_0C09B100: BLKS(0x0C09B100u);
	r1 = (u32)(s32)(s8)R8(r12); UPD(0x0C09B102u, 1);  /* 0C09B100 mov.b @Rm,Rn */
	r0 = r1;  /* 0C09B102 mov Rm,Rn */
	r0 &= 0x7u;  /* 0C09B104 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C09B106 tst Rm,Rn */
	{ u32 c_ = T; r15 += 0x10u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C09B130u, 6); goto L_0C09B130; } UPD(0x0C09B10Cu, 1); goto L_0C09B10C; }  /* 0C09B108 bt/s */
L_0C09B10C: BLKS(0x0C09B10Cu);
	r1 += 0x1u;  /* 0C09B10C add #imm,Rn */
	r4 = r1 & 0xFF;  /* 0C09B10E extu.b Rm,Rn */
	r10 = 0x77u;  /* 0C09B110 mov #imm,Rn */
	T = r4 > r10;  /* 0C09B112 cmp/hi Rm,Rn */
	{ u32 c_ = T; W8(r12, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C09B11Cu, 7); goto L_0C09B11C; } UPD(0x0C09B118u, 1); goto L_0C09B118; }  /* 0C09B114 bt/s */
L_0C09B118: BLKS(0x0C09B118u);
	{ r14 += 0x3Cu; /* slot add #imm,Rn */ UPD(0x0C09AD7Eu, 3); goto L_0C09AD7E; }  /* 0C09B118 bra */
L_0C09B11C: BLKS(0x0C09B11Cu);
	r0 = 0x0u;  /* 0C09B11C mov #imm,Rn */
	W8(r12, r0); UPD(0x0C09B120u, 2);  /* 0C09B11E mov.b Rm,@Rn */
	r1 = (u32)(s32)(s8)R8(r9); UPD(0x0C09B122u, 1);  /* 0C09B120 mov.b @Rm,Rn */
L_0C09B122: BLKS(0x0C09B122u);
	r1 += 0x1u;  /* 0C09B122 add #imm,Rn */
	{ W8(r9, r1); /* slot mov.b Rm,@Rn */ UPD(0x0C09AE6Au, 4); goto L_0C09AE6A; }  /* 0C09B124 bra */
L_0C09B130: BLKS(0x0C09B130u);
	r7 = 0xC058060u; UPD(0x0C09B132u, 1);  /* 0C09B130 mov.l @(disp,pc),Rn */
	r5 = r13;  /* 0C09B132 mov Rm,Rn */
	IF(0x0C09B134u); { u32 t_ = r7; PR = 0x0C09B138u; r4 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C09B138u); }  /* 0C09B134 jsr @Rn */
L_0C09B138: BLKS(0x0C09B138u);
	r6 = R32(r10 + 0x24u); UPD(0x0C09B13Au, 1);  /* 0C09B138 mov.l @(disp,Rm),Rn */
	r3 = 0xC058030u; UPD(0x0C09B13Cu, 1);  /* 0C09B13A mov.l @(disp,pc),Rn */
	r6 += r0;  /* 0C09B13C add Rm,Rn */
	r5 = 0x200000u; UPD(0x0C09B140u, 2);  /* 0C09B13E mov.l @(disp,pc),Rn */
	r6 += r5;  /* 0C09B140 add Rm,Rn */
	r5 = r13;  /* 0C09B142 mov Rm,Rn */
	W32(r14 + 0x8u, r6); UPD(0x0C09B146u, 3);  /* 0C09B144 mov.l Rm,@(disp,Rn) */
	IF(0x0C09B146u); { u32 t_ = r3; PR = 0x0C09B14Au; r4 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C09B14Au); }  /* 0C09B146 jsr @Rn */
L_0C09B14A: BLKS(0x0C09B14Au);
	r7 = R32(r10 + 0x28u); UPD(0x0C09B14Cu, 1);  /* 0C09B14A mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C09B14C add #imm,Rn */
	r7 += r0;  /* 0C09B14E add Rm,Rn */
	W32(r14 + 0xCu, r7); UPD(0x0C09B152u, 3);  /* 0C09B150 mov.l Rm,@(disp,Rn) */
	r5 = 0x1u;  /* 0C09B152 mov #imm,Rn */
	r8 = R32(r14 + 0x10u); UPD(0x0C09B156u, 2);  /* 0C09B154 mov.l @(disp,Rm),Rn */
	r2 = (u32)(s32)(s8)R8(r8); UPD(0x0C09B158u, 1);  /* 0C09B156 mov.b @Rm,Rn */
	r13 = r2 & 0xFF;  /* 0C09B158 extu.b Rm,Rn */
	W32(r15, r13); UPD(0x0C09B15Cu, 2);  /* 0C09B15A mov.l Rm,@Rn */
	r1 = R32(r14 + 0x14u); UPD(0x0C09B15Eu, 1);  /* 0C09B15C mov.l @(disp,Rm),Rn */
	r0 = (u32)(s32)(s8)R8(r1); UPD(0x0C09B160u, 1);  /* 0C09B15E mov.b @Rm,Rn */
	r13 = 0xC0ADFD0u; UPD(0x0C09B162u, 1);  /* 0C09B160 mov.l @(disp,pc),Rn */
	r4 = r0 & 0xFF;  /* 0C09B162 extu.b Rm,Rn */
	W32(r15 + 0x4u, r4); UPD(0x0C09B166u, 2);  /* 0C09B164 mov.l Rm,@(disp,Rn) */
	r4 = R32(r10); UPD(0x0C09B168u, 1);  /* 0C09B166 mov.l @Rm,Rn */
	IF(0x0C09B168u); { u32 t_ = r13; PR = 0x0C09B16Cu; r6 = R32(r14 + 0x8u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0ADFD0, 0x0C0ADFD0u, 0x0C09B16Cu); }  /* 0C09B168 jsr @Rn */
L_0C09B16C: BLKS(0x0C09B16Cu);
	r7 = R32(r14 + 0x10u); UPD(0x0C09B16Eu, 1);  /* 0C09B16C mov.l @(disp,Rm),Rn */
	r5 = (u32)(s32)(s8)R8(r7); UPD(0x0C09B170u, 1);  /* 0C09B16E mov.b @Rm,Rn */
	r6 = r5 & 0xFF;  /* 0C09B170 extu.b Rm,Rn */
	W32(r15, r6); UPD(0x0C09B174u, 2);  /* 0C09B172 mov.l Rm,@Rn */
	r5 = 0x0u;  /* 0C09B174 mov #imm,Rn */
	r3 = R32(r14 + 0x14u); UPD(0x0C09B178u, 2);  /* 0C09B176 mov.l @(disp,Rm),Rn */
	r8 = (u32)(s32)(s8)R8(r3); UPD(0x0C09B17Au, 1);  /* 0C09B178 mov.b @Rm,Rn */
	r2 = r8 & 0xFF;  /* 0C09B17A extu.b Rm,Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C09B17Eu, 2);  /* 0C09B17C mov.l Rm,@(disp,Rn) */
	r4 = R32(r10); UPD(0x0C09B180u, 1);  /* 0C09B17E mov.l @Rm,Rn */
	r6 = R32(r14 + 0x8u); UPD(0x0C09B182u, 1);  /* 0C09B180 mov.l @(disp,Rm),Rn */
	IF(0x0C09B182u); { u32 t_ = r13; PR = 0x0C09B186u; r7 = R32(r14 + 0xCu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLD(t_, 0x0C09B186u); }  /* 0C09B182 jsr @Rn */
L_0C09B186: BLKS(0x0C09B186u);
	r1 = (u32)(s32)(s8)R8(r12); UPD(0x0C09B188u, 1);  /* 0C09B186 mov.b @Rm,Rn */
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C09B10Cu, 3); goto L_0C09B10C; }  /* 0C09B188 bra */
L_0C09B190: BLKS(0x0C09B190u);
	{ u32 c_ = T; r5 = 0x7u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C09B198u, 3); goto L_0C09B198; } goto L_0C09B194; }  /* 0C09B190 bt/s */
L_0C09B194: BLKS(0x0C09B194u);
	{ IF(0x0C09B196u); ; /* slot nop */ UPD(0x0C09AF56u, 4); goto L_0C09AF56; }  /* 0C09B194 bra */
L_0C09B198: BLKS(0x0C09B198u);
	r9 = 0xB0u; UPD(0x0C09B19Au, 1);  /* 0C09B198 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C09B19A add #imm,Rn */
	r9 += r10;  /* 0C09B19C add Rm,Rn */
	r12 = (u32)(s32)(s8)R8(r9); UPD(0x0C09B1A0u, 3);  /* 0C09B19E mov.b @Rm,Rn */
	r6 = r12 & 0xFF;  /* 0C09B1A0 extu.b Rm,Rn */
	r13 = 0xA9u; UPD(0x0C09B1A4u, 2);  /* 0C09B1A2 mov.w @(disp,pc),Rn */
	W32(r15, r6); UPD(0x0C09B1A6u, 1);  /* 0C09B1A4 mov.l Rm,@Rn */
	r13 += r10;  /* 0C09B1A6 add Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r13); UPD(0x0C09B1AAu, 2);  /* 0C09B1A8 mov.b @Rm,Rn */
	r8 = 0xC0AD830u; UPD(0x0C09B1ACu, 1);  /* 0C09B1AA mov.l @(disp,pc),Rn */
	r2 = r3 & 0xFF;  /* 0C09B1AC extu.b Rm,Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C09B1B0u, 2);  /* 0C09B1AE mov.l Rm,@(disp,Rn) */
	r4 = R32(r10); UPD(0x0C09B1B2u, 1);  /* 0C09B1B0 mov.l @Rm,Rn */
	r6 = R32(r10 + 0x24u); UPD(0x0C09B1B4u, 1);  /* 0C09B1B2 mov.l @(disp,Rm),Rn */
	IF(0x0C09B1B4u); { u32 t_ = r8; PR = 0x0C09B1B8u; r7 = R32(r10 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AD830, 0x0C0AD830u, 0x0C09B1B8u); }  /* 0C09B1B4 jsr @Rn */
L_0C09B1B8: BLKS(0x0C09B1B8u);
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C09B1BAu, 1);  /* 0C09B1B8 mov.b @Rm,Rn */
	r4 = r0 & 0xFF;  /* 0C09B1BA extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C09B1BEu, 2);  /* 0C09B1BC mov.l Rm,@Rn */
	r7 = (u32)(s32)(s8)R8(r13); UPD(0x0C09B1C0u, 1);  /* 0C09B1BE mov.b @Rm,Rn */
	r5 = r7 & 0xFF;  /* 0C09B1C0 extu.b Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C09B1C4u, 2);  /* 0C09B1C2 mov.l Rm,@(disp,Rn) */
	r12 = 0xC0ACB60u; UPD(0x0C09B1C6u, 1);  /* 0C09B1C4 mov.l @(disp,pc),Rn */
	r5 = 0x2u;  /* 0C09B1C6 mov #imm,Rn */
	r6 = R32(r10 + 0x24u); UPD(0x0C09B1CAu, 2);  /* 0C09B1C8 mov.l @(disp,Rm),Rn */
	r4 = R32(r10); UPD(0x0C09B1CCu, 1);  /* 0C09B1CA mov.l @Rm,Rn */
	IF(0x0C09B1CCu); { u32 t_ = r12; PR = 0x0C09B1D0u; r7 = R32(r10 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0ACB60, 0x0C0ACB60u, 0x0C09B1D0u); }  /* 0C09B1CC jsr @Rn */
L_0C09B1D0: BLKS(0x0C09B1D0u);
	r6 = 0x0u;  /* 0C09B1D0 mov #imm,Rn */
	W32(r10, r6); UPD(0x0C09B1D4u, 2);  /* 0C09B1D2 mov.l Rm,@Rn */
	r15 += 0x8u;  /* 0C09B1D4 add #imm,Rn */
	r9 = 0xC392AFEu; UPD(0x0C09B1D8u, 2);  /* 0C09B1D6 mov.l @(disp,pc),Rn */
	r3 = (u32)(s32)(s8)R8(r9); UPD(0x0C09B1DAu, 1);  /* 0C09B1D8 mov.b @Rm,Rn */
	r3 += 0x1u;  /* 0C09B1DA add #imm,Rn */
	{ W8(r9, r3); /* slot mov.b Rm,@Rn */ UPD(0x0C09AE6Au, 4); goto L_0C09AE6A; }  /* 0C09B1DC bra */
L_0C09B1E0: BLKS(0x0C09B1E0u);
	r0 = 0x99u; UPD(0x0C09B1E2u, 1);  /* 0C09B1E0 mov.w @(disp,pc),Rn */
	IF(0x0C09B1E2u); r2 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C09B1E4u, 1);  /* 0C09B1E2 mov.b @(r0,Rm),Rn */
	r2 += 0x1u;  /* 0C09B1E4 add #imm,Rn */
	r13 = r2 & 0xFF;  /* 0C09B1E6 extu.b Rm,Rn */
	T = r13 > r12;  /* 0C09B1E8 cmp/hi Rm,Rn */
	{ u32 c_ = T; IF(0x0C09B1ECu); W8(r0 + r10, r2); /* slot mov.b Rm,@(r0,Rn) */ if (c_) { UPD(0x0C09B1F2u, 6); goto L_0C09B1F2; } UPD(0x0C09B1EEu, 1); goto L_0C09B1EE; }  /* 0C09B1EA bt/s */
L_0C09B1EE: BLKS(0x0C09B1EEu);
	{ r14 += 0x3Cu; /* slot add #imm,Rn */ UPD(0x0C09AD7Eu, 3); goto L_0C09AD7E; }  /* 0C09B1EE bra */
L_0C09B1F2: BLKS(0x0C09B1F2u);
	r8 = 0x0u;  /* 0C09B1F2 mov #imm,Rn */
	IF(0x0C09B1F4u); W8(r0 + r10, r8); UPD(0x0C09B1F6u, 2);  /* 0C09B1F4 mov.b Rm,@(r0,Rn) */
	{ r1 = r3; /* slot mov Rm,Rn */ UPD(0x0C09B122u, 3); goto L_0C09B122; }  /* 0C09B1F6 bra */
}

void f_0C09B240(sh3_t *c)
{
	LOCALS;
	goto L_0C09B240;
L_0C09ACF4: BLKS(0x0C09ACF4u);
	r14 += 0x3Cu;  /* 0C09ACF4 add #imm,Rn */
	r15 = r14;  /* 0C09ACF6 mov Rm,Rn */
	IF(0x0C09ACF8u); PR = R32(r15); r15 += 4; UPD(0x0C09ACFAu, 3);  /* 0C09ACF8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09ACFCu, 1);  /* 0C09ACFA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C09ACFEu, 1);  /* 0C09ACFC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09AD00u, 1);  /* 0C09ACFE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09AD02u, 1);  /* 0C09AD00 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09AD04u, 1);  /* 0C09AD02 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09AD06u, 1);  /* 0C09AD04 mov.l @Rm+,Rn */
	IF(0x0C09AD06u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09AD06 jmp @Rn */
L_0C09AD7C: BLKS(0x0C09AD7Cu);
	r14 += 0x3Cu;  /* 0C09AD7C add #imm,Rn */
	UPD(0x0C09AD7Eu, 1);
L_0C09AD7E: BLKS(0x0C09AD7Eu);
	r15 = r14;  /* 0C09AD7E mov Rm,Rn */
	IF(0x0C09AD80u); PR = R32(r15); r15 += 4; UPD(0x0C09AD82u, 2);  /* 0C09AD80 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09AD84u, 1);  /* 0C09AD82 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C09AD86u, 1);  /* 0C09AD84 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09AD88u, 1);  /* 0C09AD86 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09AD8Au, 1);  /* 0C09AD88 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09AD8Cu, 1);  /* 0C09AD8A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09AD8Eu, 1);  /* 0C09AD8C mov.l @Rm+,Rn */
	IF(0x0C09AD8Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C09AD8E rts */
L_0C09ADA8: BLKS(0x0C09ADA8u);
	r1 = 0xC0A0380u; UPD(0x0C09ADAAu, 1);  /* 0C09ADA8 mov.l @(disp,pc),Rn */
	{ r4 = r11; /* slot mov Rm,Rn */ UPD(0x0C09ACF4u, 3); goto L_0C09ACF4; }  /* 0C09ADAA bra */
L_0C09AE10: BLKS(0x0C09AE10u);
	r0 = 0xB4u; UPD(0x0C09AE12u, 1);  /* 0C09AE10 mov.w @(disp,pc),Rn */
	r5 = 0x0u;  /* 0C09AE12 mov #imm,Rn */
	IF(0x0C09AE14u); MACL = r11 * r0;  /* 0C09AE14 mul.l Rm,Rn */
	r11 = 0xC26CD40u; UPD(0x0C09AE18u, 4);  /* 0C09AE16 mov.l @(disp,pc),Rn */
	IF(0x0C09AE18u); r0 = MACL;  /* 0C09AE18 sts macl,Rn */
	{ IF(0x0C09AE1Cu); W32(r0 + r11, r5); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C09AD7Cu, 4); goto L_0C09AD7C; }  /* 0C09AE1A bra */
L_0C09B240: BLKS(0x0C09B240u);
	r12 = 0xC0A03F0u; UPD(0x0C09B242u, 1);  /* 0C09B240 mov.l @(disp,pc),Rn */
	IF(0x0C09B242u); { u32 t_ = r12; PR = 0x0C09B246u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C09B246u); }  /* 0C09B242 jsr @Rn */
L_0C09B246: BLKS(0x0C09B246u);
	IF(0x0C09B246u); T = (s32)r0 >= 0;  /* 0C09B246 cmp/pz Rn */
	if (T) { UPD(0x0C09B24Eu, 4); goto L_0C09B24E; }  /* 0C09B248 bt */
L_0C09B24A: BLKS(0x0C09B24Au);
	{ IF(0x0C09B24Cu); ; /* slot nop */ UPD(0x0C09AE10u, 3); goto L_0C09AE10; }  /* 0C09B24A bra */
L_0C09B24E: BLKS(0x0C09B24Eu);
	r4 = 0xB4u; UPD(0x0C09B250u, 1);  /* 0C09B24E mov.w @(disp,pc),Rn */
	IF(0x0C09B250u); MACL = r11 * r4;  /* 0C09B250 mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C09B254u, 3);  /* 0C09B252 mov.l @(disp,pc),Rn */
	IF(0x0C09B254u); r8 = MACL;  /* 0C09B254 sts macl,Rn */
	IF(0x0C09B256u); MACL = r0 * r4;  /* 0C09B256 mul.l Rm,Rn */
	r8 += r9;  /* 0C09B258 add Rm,Rn */
	r12 = R32(r8 + 0x2Cu); UPD(0x0C09B25Cu, 5);  /* 0C09B25A mov.l @(disp,Rm),Rn */
	IF(0x0C09B25Cu); r3 = MACL;  /* 0C09B25C sts macl,Rn */
	r3 += r9;  /* 0C09B25E add Rm,Rn */
	r10 = R32(r3 + 0x24u); UPD(0x0C09B262u, 3);  /* 0C09B260 mov.l @(disp,Rm),Rn */
	r0 = R32(r3 + 0x38u); UPD(0x0C09B264u, 1);  /* 0C09B262 mov.l @(disp,Rm),Rn */
	r10 += r12;  /* 0C09B264 add Rm,Rn */
	r5 = R32(r3 + 0x28u); UPD(0x0C09B268u, 2);  /* 0C09B266 mov.l @(disp,Rm),Rn */
	r6 = 0xA8u; UPD(0x0C09B26Au, 1);  /* 0C09B268 mov.w @(disp,pc),Rn */
	r7 = R32(r8 + 0x30u); UPD(0x0C09B26Cu, 1);  /* 0C09B26A mov.l @(disp,Rm),Rn */
	r3 += r6;  /* 0C09B26C add Rm,Rn */
	W32(r8 + 0x38u, r0); UPD(0x0C09B270u, 2);  /* 0C09B26E mov.l Rm,@(disp,Rn) */
	r5 += r7;  /* 0C09B270 add Rm,Rn */
	W32(r8 + 0x24u, r10); UPD(0x0C09B274u, 2);  /* 0C09B272 mov.l Rm,@(disp,Rn) */
	r0 = r8;  /* 0C09B274 mov Rm,Rn */
	r13 = 0xAFu; UPD(0x0C09B278u, 2);  /* 0C09B276 mov.w @(disp,pc),Rn */
	r3 += 0x1u;  /* 0C09B278 add #imm,Rn */
	r12 = (u32)(s32)(s8)R8(r3); UPD(0x0C09B27Cu, 2);  /* 0C09B27A mov.b @Rm,Rn */
	r10 = r8;  /* 0C09B27C mov Rm,Rn */
	IF(0x0C09B27Eu); r1 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C09B280u, 2);  /* 0C09B27E mov.b @(r0,Rm),Rn */
	r10 += r6;  /* 0C09B280 add Rm,Rn */
	W32(r8 + 0x28u, r5); UPD(0x0C09B284u, 2);  /* 0C09B282 mov.l Rm,@(disp,Rn) */
	r10 += 0x1u;  /* 0C09B284 add #imm,Rn */
	r8 += 0x7Eu;  /* 0C09B286 add #imm,Rn */
	r12 += r1;  /* 0C09B288 add Rm,Rn */
	W8(r10, r12); UPD(0x0C09B28Cu, 4);  /* 0C09B28A mov.b Rm,@Rn */
	r13 = 0x1Fu;  /* 0C09B28C mov #imm,Rn */
	r7 = (u32)(s32)(s16)R16(r8); UPD(0x0C09B290u, 2);  /* 0C09B28E mov.w @Rm,Rn */
	W32(r14, r7); UPD(0x0C09B292u, 1);  /* 0C09B290 mov.l Rm,@Rn */
	r8 += 0xFFFFFF82u;  /* 0C09B292 add #imm,Rn */
	r5 = R32(r14); UPD(0x0C09B296u, 2);  /* 0C09B294 mov.l @Rm,Rn */
	r3 = R32(r8); UPD(0x0C09B298u, 1);  /* 0C09B296 mov.l @Rm,Rn */
	IF(0x0C09B298u); MACL = r5 * r4;  /* 0C09B298 mul.l Rm,Rn */
	r2 = 0xECFFFFFFu; UPD(0x0C09B29Cu, 3);  /* 0C09B29A mov.l @(disp,pc),Rn */
	r3 &= r2;  /* 0C09B29C and Rm,Rn */
	W32(r8, r3); UPD(0x0C09B2A0u, 2);  /* 0C09B29E mov.l Rm,@Rn */
	IF(0x0C09B2A0u); r0 = MACL;  /* 0C09B2A0 sts macl,Rn */
	IF(0x0C09B2A2u); r6 = R32(r0 + r9); UPD(0x0C09B2A4u, 2);  /* 0C09B2A2 mov.l @(r0,Rm),Rn */
	r0 = 0x13000000u; UPD(0x0C09B2A6u, 1);  /* 0C09B2A4 mov.l @(disp,pc),Rn */
	r6 &= r0;  /* 0C09B2A6 and Rm,Rn */
	r3 |= r6;  /* 0C09B2A8 or Rm,Rn */
	r2 = R32(r8 + 0xCu); UPD(0x0C09B2ACu, 3);  /* 0C09B2AA mov.l @(disp,Rm),Rn */
	T = r2 > r13;  /* 0C09B2AC cmp/hi Rm,Rn */
	{ u32 c_ = !T; W32(r8, r3); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C09B2B6u, 4); goto L_0C09B2B6; } UPD(0x0C09B2B2u, 1); goto L_0C09B2B2; }  /* 0C09B2AE bf/s */
L_0C09B2B2: BLKS(0x0C09B2B2u);
	{ IF(0x0C09B2B4u); ; /* slot nop */ UPD(0x0C09B3B0u, 3); goto L_0C09B3B0; }  /* 0C09B2B2 bra */
L_0C09B2B6: BLKS(0x0C09B2B6u);
	r0 = 0xC09B2D8u;  /* 0C09B2B6 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C09B2B8 add Rm,Rn */
	IF(0x0C09B2BAu); r8 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C09B2BCu, 3);  /* 0C09B2BA mov.w @(r0,Rm),Rn */
	IF(0x0C09B2BCu); { u32 tv_ = (r8 + 0x0C09B2C0u); u32 t_ = PHYS(tv_); IF(0x0C09B2BEu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09B2BC braf Rn */
L_0C09B3B0: BLKS(0x0C09B3B0u);
	r7 = 0xB4u; UPD(0x0C09B3B2u, 1);  /* 0C09B3B0 mov.w @(disp,pc),Rn */
	IF(0x0C09B3B2u); MACL = r11 * r7;  /* 0C09B3B2 mul.l Rm,Rn */
	r3 = 0xC26CD40u; UPD(0x0C09B3B6u, 3);  /* 0C09B3B4 mov.l @(disp,pc),Rn */
	IF(0x0C09B3B6u); r7 = MACL;  /* 0C09B3B6 sts macl,Rn */
	r8 = 0x98u; UPD(0x0C09B3BAu, 2);  /* 0C09B3B8 mov.w @(disp,pc),Rn */
	r7 += r3;  /* 0C09B3BA add Rm,Rn */
	r8 += r7;  /* 0C09B3BC add Rm,Rn */
	r3 = r8;  /* 0C09B3BE mov Rm,Rn */
	r3 += 0x1u;  /* 0C09B3C0 add #imm,Rn */
	r12 = (u32)(s32)(s8)R8(r3); UPD(0x0C09B3C4u, 5);  /* 0C09B3C2 mov.b @Rm,Rn */
	r10 = (u32)(s32)(s8)R8(r8); UPD(0x0C09B3C6u, 1);  /* 0C09B3C4 mov.b @Rm,Rn */
	r12 += 0x1u;  /* 0C09B3C6 add #imm,Rn */
	r0 = r12 & 0xFF;  /* 0C09B3C8 extu.b Rm,Rn */
	r5 = r10 & 0xFF;  /* 0C09B3CA extu.b Rm,Rn */
	T = r0 >= r5;  /* 0C09B3CC cmp/hs Rm,Rn */
	{ u32 c_ = !T; W8(r3, r12); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C09B408u, 7); goto L_0C09B408; } UPD(0x0C09B3D2u, 1); goto L_0C09B3D2; }  /* 0C09B3CE bf/s */
L_0C09B3D2: BLKS(0x0C09B3D2u);
	r9 = R32(r7 + 0xCu); UPD(0x0C09B3D4u, 1);  /* 0C09B3D2 mov.l @(disp,Rm),Rn */
	r4 = 0x0u;  /* 0C09B3D4 mov #imm,Rn */
	r9 += 0x1u;  /* 0C09B3D6 add #imm,Rn */
	W8(r3, r4); UPD(0x0C09B3DAu, 3);  /* 0C09B3D8 mov.b Rm,@Rn */
	{ W32(r7 + 0xCu, r9); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C09ADA8u, 3); goto L_0C09ADA8; }  /* 0C09B3DA bra */
L_0C09B408: BLKS(0x0C09B408u);
	{ r14 += 0x3Cu; /* slot add #imm,Rn */ UPD(0x0C09AD7Eu, 3); goto L_0C09AD7E; }  /* 0C09B408 bra */
}

void f_0C09B320(sh3_t *c)
{
	LOCALS;
	goto L_0C09B320;
L_0C09AD7E: BLKS(0x0C09AD7Eu);
	r15 = r14;  /* 0C09AD7E mov Rm,Rn */
	IF(0x0C09AD80u); PR = R32(r15); r15 += 4; UPD(0x0C09AD82u, 2);  /* 0C09AD80 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09AD84u, 1);  /* 0C09AD82 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C09AD86u, 1);  /* 0C09AD84 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09AD88u, 1);  /* 0C09AD86 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09AD8Au, 1);  /* 0C09AD88 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09AD8Cu, 1);  /* 0C09AD8A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09AD8Eu, 1);  /* 0C09AD8C mov.l @Rm+,Rn */
	IF(0x0C09AD8Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C09AD8E rts */
L_0C09B320: BLKS(0x0C09B320u);
	r13 = 0xB4u; UPD(0x0C09B322u, 1);  /* 0C09B320 mov.w @(disp,pc),Rn */
	r6 = R32(r14); UPD(0x0C09B324u, 1);  /* 0C09B322 mov.l @Rm,Rn */
	IF(0x0C09B324u); MACL = r6 * r13;  /* 0C09B324 mul.l Rm,Rn */
	r1 = 0xC26CD40u; UPD(0x0C09B328u, 3);  /* 0C09B326 mov.l @(disp,pc),Rn */
	IF(0x0C09B328u); r2 = MACL;  /* 0C09B328 sts macl,Rn */
	IF(0x0C09B32Au); MACL = r11 * r13;  /* 0C09B32A mul.l Rm,Rn */
	r0 = 0xA4u; UPD(0x0C09B32Eu, 4);  /* 0C09B32C mov.w @(disp,pc),Rn */
	IF(0x0C09B32Eu); r8 = MACL;  /* 0C09B32E sts macl,Rn */
	r8 += r1;  /* 0C09B330 add Rm,Rn */
	r1 += r2;  /* 0C09B332 add Rm,Rn */
	IF(0x0C09B334u); r4 = (u32)(s32)(s8)R8(r0 + r1); UPD(0x0C09B336u, 4);  /* 0C09B334 mov.b @(r0,Rm),Rn */
	r13 += 0xFFFFFFEDu;  /* 0C09B336 add #imm,Rn */
	r0 = r8;  /* 0C09B338 mov Rm,Rn */
	IF(0x0C09B33Au); r9 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C09B33Cu, 3);  /* 0C09B33A mov.b @(r0,Rm),Rn */
	T = (r4 & r9) == 0;  /* 0C09B33C tst Rm,Rn */
	if (T) { UPD(0x0C09B408u, 4); goto L_0C09B408; }  /* 0C09B33E bt */
L_0C09B340: BLKS(0x0C09B340u);
	r12 = R32(r8 + 0xCu); UPD(0x0C09B342u, 1);  /* 0C09B340 mov.l @(disp,Rm),Rn */
	r4 = r11;  /* 0C09B342 mov Rm,Rn */
	r10 = 0xC0A0380u; UPD(0x0C09B346u, 2);  /* 0C09B344 mov.l @(disp,pc),Rn */
	r12 += 0x1u;  /* 0C09B346 add #imm,Rn */
	IF(0x0C09B348u); { u32 t_ = r10; PR = 0x0C09B34Cu; W32(r8 + 0xCu, r12); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C09B34Cu); }  /* 0C09B348 jsr @Rn */
L_0C09B34C: BLKS(0x0C09B34Cu);
	r0 = R32(r8); UPD(0x0C09B34Eu, 1);  /* 0C09B34C mov.l @Rm,Rn */
	r5 = 0x0u;  /* 0C09B34E mov #imm,Rn */
	r7 = 0x13008000u; UPD(0x0C09B352u, 2);  /* 0C09B350 mov.l @(disp,pc),Rn */
	r4 = 0x6Cu;  /* 0C09B352 mov #imm,Rn */
	r0 |= r7;  /* 0C09B354 or Rm,Rn */
	W32(r8, r0); UPD(0x0C09B358u, 3);  /* 0C09B356 mov.l Rm,@Rn */
	r11 = 0xC0AFC10u; UPD(0x0C09B35Au, 1);  /* 0C09B358 mov.l @(disp,pc),Rn */
	r0 = 0x98u; UPD(0x0C09B35Cu, 1);  /* 0C09B35A mov.w @(disp,pc),Rn */
	IF(0x0C09B35Cu); { u32 t_ = r11; PR = 0x0C09B360u; IF(0x0C09B35Eu); W8(r0 + r8, r5); /* slot mov.b Rm,@(r0,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0AFC10, 0x0C0AFC10u, 0x0C09B360u); }  /* 0C09B35C jsr @Rn */
L_0C09B360: BLKS(0x0C09B360u);
	r3 = 0xC04E7E8u; UPD(0x0C09B362u, 1);  /* 0C09B360 mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C09B362 mov #imm,Rn */
	r5 = 0x10u;  /* 0C09B364 mov #imm,Rn */
	r14 += 0x3Cu;  /* 0C09B366 add #imm,Rn */
	r15 = r14;  /* 0C09B368 mov Rm,Rn */
	IF(0x0C09B36Au); PR = R32(r15); r15 += 4; UPD(0x0C09B36Cu, 5);  /* 0C09B36A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09B36Eu, 1);  /* 0C09B36C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C09B370u, 1);  /* 0C09B36E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09B372u, 1);  /* 0C09B370 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09B374u, 1);  /* 0C09B372 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09B376u, 1);  /* 0C09B374 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09B378u, 1);  /* 0C09B376 mov.l @Rm+,Rn */
	IF(0x0C09B378u); { u32 tv_ = r3; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C04E7E8u: TAIL(f_0C04E7E8); default: JUMPD(tv_); } }  /* 0C09B378 jmp @Rn */
L_0C09B408: BLKS(0x0C09B408u);
	{ r14 += 0x3Cu; /* slot add #imm,Rn */ UPD(0x0C09AD7Eu, 3); goto L_0C09AD7E; }  /* 0C09B408 bra */
}

void f_0C09B380(sh3_t *c)
{
	LOCALS;
	goto L_0C09B380;
L_0C09ACF4: BLKS(0x0C09ACF4u);
	r14 += 0x3Cu;  /* 0C09ACF4 add #imm,Rn */
	r15 = r14;  /* 0C09ACF6 mov Rm,Rn */
	IF(0x0C09ACF8u); PR = R32(r15); r15 += 4; UPD(0x0C09ACFAu, 3);  /* 0C09ACF8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09ACFCu, 1);  /* 0C09ACFA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C09ACFEu, 1);  /* 0C09ACFC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09AD00u, 1);  /* 0C09ACFE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09AD02u, 1);  /* 0C09AD00 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09AD04u, 1);  /* 0C09AD02 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09AD06u, 1);  /* 0C09AD04 mov.l @Rm+,Rn */
	IF(0x0C09AD06u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09AD06 jmp @Rn */
L_0C09AD7E: BLKS(0x0C09AD7Eu);
	r15 = r14;  /* 0C09AD7E mov Rm,Rn */
	IF(0x0C09AD80u); PR = R32(r15); r15 += 4; UPD(0x0C09AD82u, 2);  /* 0C09AD80 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09AD84u, 1);  /* 0C09AD82 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C09AD86u, 1);  /* 0C09AD84 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09AD88u, 1);  /* 0C09AD86 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09AD8Au, 1);  /* 0C09AD88 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09AD8Cu, 1);  /* 0C09AD8A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09AD8Eu, 1);  /* 0C09AD8C mov.l @Rm+,Rn */
	IF(0x0C09AD8Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C09AD8E rts */
L_0C09ADA8: BLKS(0x0C09ADA8u);
	r1 = 0xC0A0380u; UPD(0x0C09ADAAu, 1);  /* 0C09ADA8 mov.l @(disp,pc),Rn */
	{ r4 = r11; /* slot mov Rm,Rn */ UPD(0x0C09ACF4u, 3); goto L_0C09ACF4; }  /* 0C09ADAA bra */
L_0C09B380: BLKS(0x0C09B380u);
	r2 = 0xB4u; UPD(0x0C09B382u, 1);  /* 0C09B380 mov.w @(disp,pc),Rn */
	r8 = 0x5u;  /* 0C09B382 mov #imm,Rn */
	IF(0x0C09B384u); MACL = r11 * r2;  /* 0C09B384 mul.l Rm,Rn */
	r13 = 0xC26CD40u; UPD(0x0C09B388u, 4);  /* 0C09B386 mov.l @(disp,pc),Rn */
	r0 = 0x99u; UPD(0x0C09B38Au, 1);  /* 0C09B388 mov.w @(disp,pc),Rn */
	IF(0x0C09B38Au); r3 = MACL;  /* 0C09B38A sts macl,Rn */
	r3 += r13;  /* 0C09B38C add Rm,Rn */
	IF(0x0C09B38Eu); r4 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C09B390u, 3);  /* 0C09B38E mov.b @(r0,Rm),Rn */
	r4 += 0x1u;  /* 0C09B390 add #imm,Rn */
	r9 = r4 & 0xFF;  /* 0C09B392 extu.b Rm,Rn */
	T = r9 > r8;  /* 0C09B394 cmp/hi Rm,Rn */
	{ u32 c_ = !T; IF(0x0C09B398u); W8(r0 + r3, r4); /* slot mov.b Rm,@(r0,Rn) */ if (c_) { UPD(0x0C09B408u, 6); goto L_0C09B408; } UPD(0x0C09B39Au, 1); goto L_0C09B39A; }  /* 0C09B396 bf/s */
L_0C09B39A: BLKS(0x0C09B39Au);
	r6 = 0x0u;  /* 0C09B39A mov #imm,Rn */
	r1 = R32(r3 + 0xCu); UPD(0x0C09B39Eu, 2);  /* 0C09B39C mov.l @(disp,Rm),Rn */
	IF(0x0C09B39Eu); W8(r0 + r3, r6); UPD(0x0C09B3A0u, 1);  /* 0C09B39E mov.b Rm,@(r0,Rn) */
	r1 += 0x1u;  /* 0C09B3A0 add #imm,Rn */
	{ W32(r3 + 0xCu, r1); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C09ADA8u, 4); goto L_0C09ADA8; }  /* 0C09B3A2 bra */
L_0C09B408: BLKS(0x0C09B408u);
	{ r14 += 0x3Cu; /* slot add #imm,Rn */ UPD(0x0C09AD7Eu, 3); goto L_0C09AD7E; }  /* 0C09B408 bra */
}

void f_0C09B3A2(sh3_t *c)
{
	LOCALS;
	goto L_0C09B3A2;
L_0C09ACF4: BLKS(0x0C09ACF4u);
	r14 += 0x3Cu;  /* 0C09ACF4 add #imm,Rn */
	r15 = r14;  /* 0C09ACF6 mov Rm,Rn */
	IF(0x0C09ACF8u); PR = R32(r15); r15 += 4; UPD(0x0C09ACFAu, 3);  /* 0C09ACF8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09ACFCu, 1);  /* 0C09ACFA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C09ACFEu, 1);  /* 0C09ACFC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09AD00u, 1);  /* 0C09ACFE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09AD02u, 1);  /* 0C09AD00 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09AD04u, 1);  /* 0C09AD02 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09AD06u, 1);  /* 0C09AD04 mov.l @Rm+,Rn */
	IF(0x0C09AD06u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09AD06 jmp @Rn */
L_0C09ADA8: BLKS(0x0C09ADA8u);
	r1 = 0xC0A0380u; UPD(0x0C09ADAAu, 1);  /* 0C09ADA8 mov.l @(disp,pc),Rn */
	{ r4 = r11; /* slot mov Rm,Rn */ UPD(0x0C09ACF4u, 3); goto L_0C09ACF4; }  /* 0C09ADAA bra */
L_0C09B3A2: BLKS(0x0C09B3A2u);
	{ W32(r3 + 0xCu, r1); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C09ADA8u, 3); goto L_0C09ADA8; }  /* 0C09B3A2 bra */
}

void f_0C09B3B0(sh3_t *c)
{
	LOCALS;
	goto L_0C09B3B0;
L_0C09ACF4: BLKS(0x0C09ACF4u);
	r14 += 0x3Cu;  /* 0C09ACF4 add #imm,Rn */
	r15 = r14;  /* 0C09ACF6 mov Rm,Rn */
	IF(0x0C09ACF8u); PR = R32(r15); r15 += 4; UPD(0x0C09ACFAu, 3);  /* 0C09ACF8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09ACFCu, 1);  /* 0C09ACFA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C09ACFEu, 1);  /* 0C09ACFC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09AD00u, 1);  /* 0C09ACFE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09AD02u, 1);  /* 0C09AD00 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09AD04u, 1);  /* 0C09AD02 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09AD06u, 1);  /* 0C09AD04 mov.l @Rm+,Rn */
	IF(0x0C09AD06u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09AD06 jmp @Rn */
L_0C09AD7E: BLKS(0x0C09AD7Eu);
	r15 = r14;  /* 0C09AD7E mov Rm,Rn */
	IF(0x0C09AD80u); PR = R32(r15); r15 += 4; UPD(0x0C09AD82u, 2);  /* 0C09AD80 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09AD84u, 1);  /* 0C09AD82 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C09AD86u, 1);  /* 0C09AD84 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09AD88u, 1);  /* 0C09AD86 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09AD8Au, 1);  /* 0C09AD88 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09AD8Cu, 1);  /* 0C09AD8A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09AD8Eu, 1);  /* 0C09AD8C mov.l @Rm+,Rn */
	IF(0x0C09AD8Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C09AD8E rts */
L_0C09ADA8: BLKS(0x0C09ADA8u);
	r1 = 0xC0A0380u; UPD(0x0C09ADAAu, 1);  /* 0C09ADA8 mov.l @(disp,pc),Rn */
	{ r4 = r11; /* slot mov Rm,Rn */ UPD(0x0C09ACF4u, 3); goto L_0C09ACF4; }  /* 0C09ADAA bra */
L_0C09B3B0: BLKS(0x0C09B3B0u);
	r7 = 0xB4u; UPD(0x0C09B3B2u, 1);  /* 0C09B3B0 mov.w @(disp,pc),Rn */
	IF(0x0C09B3B2u); MACL = r11 * r7;  /* 0C09B3B2 mul.l Rm,Rn */
	r3 = 0xC26CD40u; UPD(0x0C09B3B6u, 3);  /* 0C09B3B4 mov.l @(disp,pc),Rn */
	IF(0x0C09B3B6u); r7 = MACL;  /* 0C09B3B6 sts macl,Rn */
	r8 = 0x98u; UPD(0x0C09B3BAu, 2);  /* 0C09B3B8 mov.w @(disp,pc),Rn */
	r7 += r3;  /* 0C09B3BA add Rm,Rn */
	r8 += r7;  /* 0C09B3BC add Rm,Rn */
	r3 = r8;  /* 0C09B3BE mov Rm,Rn */
	r3 += 0x1u;  /* 0C09B3C0 add #imm,Rn */
	r12 = (u32)(s32)(s8)R8(r3); UPD(0x0C09B3C4u, 5);  /* 0C09B3C2 mov.b @Rm,Rn */
	r10 = (u32)(s32)(s8)R8(r8); UPD(0x0C09B3C6u, 1);  /* 0C09B3C4 mov.b @Rm,Rn */
	r12 += 0x1u;  /* 0C09B3C6 add #imm,Rn */
	r0 = r12 & 0xFF;  /* 0C09B3C8 extu.b Rm,Rn */
	r5 = r10 & 0xFF;  /* 0C09B3CA extu.b Rm,Rn */
	T = r0 >= r5;  /* 0C09B3CC cmp/hs Rm,Rn */
	{ u32 c_ = !T; W8(r3, r12); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C09B408u, 7); goto L_0C09B408; } UPD(0x0C09B3D2u, 1); goto L_0C09B3D2; }  /* 0C09B3CE bf/s */
L_0C09B3D2: BLKS(0x0C09B3D2u);
	r9 = R32(r7 + 0xCu); UPD(0x0C09B3D4u, 1);  /* 0C09B3D2 mov.l @(disp,Rm),Rn */
	r4 = 0x0u;  /* 0C09B3D4 mov #imm,Rn */
	r9 += 0x1u;  /* 0C09B3D6 add #imm,Rn */
	W8(r3, r4); UPD(0x0C09B3DAu, 3);  /* 0C09B3D8 mov.b Rm,@Rn */
	{ W32(r7 + 0xCu, r9); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C09ADA8u, 3); goto L_0C09ADA8; }  /* 0C09B3DA bra */
L_0C09B408: BLKS(0x0C09B408u);
	{ r14 += 0x3Cu; /* slot add #imm,Rn */ UPD(0x0C09AD7Eu, 3); goto L_0C09AD7E; }  /* 0C09B408 bra */
}

void f_0C09B3E0(sh3_t *c)
{
	LOCALS;
	goto L_0C09B3E0;
L_0C09ACF4: BLKS(0x0C09ACF4u);
	r14 += 0x3Cu;  /* 0C09ACF4 add #imm,Rn */
	UPD(0x0C09ACF6u, 1);
L_0C09ACF6: BLKS(0x0C09ACF6u);
	r15 = r14;  /* 0C09ACF6 mov Rm,Rn */
	IF(0x0C09ACF8u); PR = R32(r15); r15 += 4; UPD(0x0C09ACFAu, 2);  /* 0C09ACF8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09ACFCu, 1);  /* 0C09ACFA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C09ACFEu, 1);  /* 0C09ACFC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09AD00u, 1);  /* 0C09ACFE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09AD02u, 1);  /* 0C09AD00 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09AD04u, 1);  /* 0C09AD02 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09AD06u, 1);  /* 0C09AD04 mov.l @Rm+,Rn */
	IF(0x0C09AD06u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09AD06 jmp @Rn */
L_0C09AD7E: BLKS(0x0C09AD7Eu);
	r15 = r14;  /* 0C09AD7E mov Rm,Rn */
	IF(0x0C09AD80u); PR = R32(r15); r15 += 4; UPD(0x0C09AD82u, 2);  /* 0C09AD80 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09AD84u, 1);  /* 0C09AD82 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C09AD86u, 1);  /* 0C09AD84 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09AD88u, 1);  /* 0C09AD86 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09AD8Au, 1);  /* 0C09AD88 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09AD8Cu, 1);  /* 0C09AD8A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09AD8Eu, 1);  /* 0C09AD8C mov.l @Rm+,Rn */
	IF(0x0C09AD8Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C09AD8E rts */
L_0C09ADA8: BLKS(0x0C09ADA8u);
	r1 = 0xC0A0380u; UPD(0x0C09ADAAu, 1);  /* 0C09ADA8 mov.l @(disp,pc),Rn */
	{ r4 = r11; /* slot mov Rm,Rn */ UPD(0x0C09ACF4u, 3); goto L_0C09ACF4; }  /* 0C09ADAA bra */
L_0C09B3A2: BLKS(0x0C09B3A2u);
	{ W32(r3 + 0xCu, r1); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C09ADA8u, 3); goto L_0C09ADA8; }  /* 0C09B3A2 bra */
L_0C09B3E0: BLKS(0x0C09B3E0u);
	r2 = 0xB4u; UPD(0x0C09B3E2u, 1);  /* 0C09B3E0 mov.w @(disp,pc),Rn */
	IF(0x0C09B3E2u); MACL = r11 * r2;  /* 0C09B3E2 mul.l Rm,Rn */
	r13 = 0xC26CD40u; UPD(0x0C09B3E6u, 3);  /* 0C09B3E4 mov.l @(disp,pc),Rn */
	IF(0x0C09B3E6u); r3 = MACL;  /* 0C09B3E6 sts macl,Rn */
	r6 = 0x98u; UPD(0x0C09B3EAu, 2);  /* 0C09B3E8 mov.w @(disp,pc),Rn */
	r3 += r13;  /* 0C09B3EA add Rm,Rn */
	r6 += r3;  /* 0C09B3EC add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r6); UPD(0x0C09B3F0u, 3);  /* 0C09B3EE mov.b @Rm,Rn */
	r5 = r0 & 0xFF;  /* 0C09B3F0 extu.b Rm,Rn */
	T = (r5 & r5) == 0;  /* 0C09B3F2 tst Rm,Rn */
	{ u32 c_ = !T; r10 = 0x7u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C09B40Eu, 5); goto L_0C09B40E; } goto L_0C09B3F8; }  /* 0C09B3F4 bf/s */
L_0C09B3F8: BLKS(0x0C09B3F8u);
	r7 = 0x9Cu; UPD(0x0C09B3FAu, 2);  /* 0C09B3F8 mov.w @(disp,pc),Rn */
	r7 += r3;  /* 0C09B3FA add Rm,Rn */
	r8 = (u32)(s32)(s8)R8(r7); UPD(0x0C09B3FEu, 2);  /* 0C09B3FC mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C09B3FE add #imm,Rn */
	r12 = r8 & 0xFF;  /* 0C09B400 extu.b Rm,Rn */
	T = r12 > r10;  /* 0C09B402 cmp/hi Rm,Rn */
	{ u32 c_ = T; W8(r7, r8); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C09B40Cu, 6); goto L_0C09B40C; } UPD(0x0C09B408u, 1); goto L_0C09B408; }  /* 0C09B404 bt/s */
L_0C09B408: BLKS(0x0C09B408u);
	{ r14 += 0x3Cu; /* slot add #imm,Rn */ UPD(0x0C09AD7Eu, 3); goto L_0C09AD7E; }  /* 0C09B408 bra */
L_0C09B40C: BLKS(0x0C09B40Cu);
	W8(r7, r5); UPD(0x0C09B40Eu, 1);  /* 0C09B40C mov.b Rm,@Rn */
L_0C09B40E: BLKS(0x0C09B40Eu);
	r0 += 0x1u;  /* 0C09B40E add #imm,Rn */
	W8(r6, r0); UPD(0x0C09B412u, 2);  /* 0C09B410 mov.b Rm,@Rn */
	r0 = r0 & 0xFF;  /* 0C09B412 extu.b Rm,Rn */
	T = r0 == 0x8u;  /* 0C09B414 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C09B420u, 5); goto L_0C09B420; }  /* 0C09B416 bt */
L_0C09B418: BLKS(0x0C09B418u);
	r1 = 0x10u;  /* 0C09B418 mov #imm,Rn */
	{ IF(0x0C09B41Cu); ; /* slot nop */ UPD(0x0C09B3A2u, 4); goto L_0C09B3A2; }  /* 0C09B41A bra */
L_0C09B420: BLKS(0x0C09B420u);
	r4 = r11;  /* 0C09B420 mov Rm,Rn */
	r11 = 0xC0A03B0u; UPD(0x0C09B424u, 2);  /* 0C09B422 mov.l @(disp,pc),Rn */
	r5 = 0x1u;  /* 0C09B424 mov #imm,Rn */
	r6 = 0x0u;  /* 0C09B426 mov #imm,Rn */
	W32(r3 + 0x8u, r5); UPD(0x0C09B42Au, 3);  /* 0C09B428 mov.l Rm,@(disp,Rn) */
	IF(0x0C09B42Au); { u32 t_ = r11; PR = 0x0C09B42Eu; W32(r3 + 0xCu, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A03B0, 0x0C0A03B0u, 0x0C09B42Eu); }  /* 0C09B42A jsr @Rn */
L_0C09B42E: BLKS(0x0C09B42Eu);
	r4 = 0x6Du;  /* 0C09B42E mov #imm,Rn */
	r1 = 0xC0AFC10u; UPD(0x0C09B432u, 2);  /* 0C09B430 mov.l @(disp,pc),Rn */
	{ r14 += 0x3Cu; /* slot add #imm,Rn */ UPD(0x0C09ACF6u, 3); goto L_0C09ACF6; }  /* 0C09B432 bra */
}

void f_0C09B42E(sh3_t *c)
{
	LOCALS;
	goto L_0C09B42E;
L_0C09ACF6: BLKS(0x0C09ACF6u);
	r15 = r14;  /* 0C09ACF6 mov Rm,Rn */
	IF(0x0C09ACF8u); PR = R32(r15); r15 += 4; UPD(0x0C09ACFAu, 2);  /* 0C09ACF8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09ACFCu, 1);  /* 0C09ACFA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C09ACFEu, 1);  /* 0C09ACFC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09AD00u, 1);  /* 0C09ACFE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09AD02u, 1);  /* 0C09AD00 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09AD04u, 1);  /* 0C09AD02 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09AD06u, 1);  /* 0C09AD04 mov.l @Rm+,Rn */
	IF(0x0C09AD06u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09AD06 jmp @Rn */
L_0C09B42E: BLKS(0x0C09B42Eu);
	r4 = 0x6Du;  /* 0C09B42E mov #imm,Rn */
	r1 = 0xC0AFC10u; UPD(0x0C09B432u, 2);  /* 0C09B430 mov.l @(disp,pc),Rn */
	{ r14 += 0x3Cu; /* slot add #imm,Rn */ UPD(0x0C09ACF6u, 3); goto L_0C09ACF6; }  /* 0C09B432 bra */
}

void f_0C09B430(sh3_t *c)
{
	LOCALS;
	goto L_0C09B430;
L_0C09ACF6: BLKS(0x0C09ACF6u);
	r15 = r14;  /* 0C09ACF6 mov Rm,Rn */
	IF(0x0C09ACF8u); PR = R32(r15); r15 += 4; UPD(0x0C09ACFAu, 2);  /* 0C09ACF8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09ACFCu, 1);  /* 0C09ACFA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C09ACFEu, 1);  /* 0C09ACFC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09AD00u, 1);  /* 0C09ACFE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09AD02u, 1);  /* 0C09AD00 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09AD04u, 1);  /* 0C09AD02 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09AD06u, 1);  /* 0C09AD04 mov.l @Rm+,Rn */
	IF(0x0C09AD06u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09AD06 jmp @Rn */
L_0C09B430: BLKS(0x0C09B430u);
	r1 = 0xC0AFC10u; UPD(0x0C09B432u, 1);  /* 0C09B430 mov.l @(disp,pc),Rn */
	{ r14 += 0x3Cu; /* slot add #imm,Rn */ UPD(0x0C09ACF6u, 3); goto L_0C09ACF6; }  /* 0C09B432 bra */
}

void f_0C09B440(sh3_t *c)
{
	LOCALS;
	goto L_0C09B440;
L_0C09ACF4: BLKS(0x0C09ACF4u);
	r14 += 0x3Cu;  /* 0C09ACF4 add #imm,Rn */
	r15 = r14;  /* 0C09ACF6 mov Rm,Rn */
	IF(0x0C09ACF8u); PR = R32(r15); r15 += 4; UPD(0x0C09ACFAu, 3);  /* 0C09ACF8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09ACFCu, 1);  /* 0C09ACFA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C09ACFEu, 1);  /* 0C09ACFC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09AD00u, 1);  /* 0C09ACFE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09AD02u, 1);  /* 0C09AD00 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09AD04u, 1);  /* 0C09AD02 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09AD06u, 1);  /* 0C09AD04 mov.l @Rm+,Rn */
	IF(0x0C09AD06u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09AD06 jmp @Rn */
L_0C09AD7C: BLKS(0x0C09AD7Cu);
	r14 += 0x3Cu;  /* 0C09AD7C add #imm,Rn */
	r15 = r14;  /* 0C09AD7E mov Rm,Rn */
	IF(0x0C09AD80u); PR = R32(r15); r15 += 4; UPD(0x0C09AD82u, 3);  /* 0C09AD80 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09AD84u, 1);  /* 0C09AD82 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C09AD86u, 1);  /* 0C09AD84 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09AD88u, 1);  /* 0C09AD86 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09AD8Au, 1);  /* 0C09AD88 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09AD8Cu, 1);  /* 0C09AD8A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09AD8Eu, 1);  /* 0C09AD8C mov.l @Rm+,Rn */
	IF(0x0C09AD8Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C09AD8E rts */
L_0C09ADA8: BLKS(0x0C09ADA8u);
	r1 = 0xC0A0380u; UPD(0x0C09ADAAu, 1);  /* 0C09ADA8 mov.l @(disp,pc),Rn */
	{ r4 = r11; /* slot mov Rm,Rn */ UPD(0x0C09ACF4u, 3); goto L_0C09ACF4; }  /* 0C09ADAA bra */
L_0C09AE10: BLKS(0x0C09AE10u);
	r0 = 0xB4u; UPD(0x0C09AE12u, 1);  /* 0C09AE10 mov.w @(disp,pc),Rn */
	r5 = 0x0u;  /* 0C09AE12 mov #imm,Rn */
	IF(0x0C09AE14u); MACL = r11 * r0;  /* 0C09AE14 mul.l Rm,Rn */
	r11 = 0xC26CD40u; UPD(0x0C09AE18u, 4);  /* 0C09AE16 mov.l @(disp,pc),Rn */
	IF(0x0C09AE18u); r0 = MACL;  /* 0C09AE18 sts macl,Rn */
	{ IF(0x0C09AE1Cu); W32(r0 + r11, r5); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C09AD7Cu, 4); goto L_0C09AD7C; }  /* 0C09AE1A bra */
L_0C09B440: BLKS(0x0C09B440u);
	r9 = 0xC0A03F0u; UPD(0x0C09B442u, 1);  /* 0C09B440 mov.l @(disp,pc),Rn */
	IF(0x0C09B442u); { u32 t_ = r9; PR = 0x0C09B446u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C09B446u); }  /* 0C09B442 jsr @Rn */
L_0C09B446: BLKS(0x0C09B446u);
	IF(0x0C09B446u); T = (s32)r0 >= 0;  /* 0C09B446 cmp/pz Rn */
	if (!T) { UPD(0x0C09B53Cu, 4); goto L_0C09B53C; }  /* 0C09B448 bf */
L_0C09B44A: BLKS(0x0C09B44Au);
	r2 = 0xB4u; UPD(0x0C09B44Cu, 1);  /* 0C09B44A mov.w @(disp,pc),Rn */
	IF(0x0C09B44Cu); MACL = r0 * r2;  /* 0C09B44C mul.l Rm,Rn */
	r3 = 0xC26CD40u; UPD(0x0C09B450u, 3);  /* 0C09B44E mov.l @(disp,pc),Rn */
	IF(0x0C09B450u); r10 = MACL;  /* 0C09B450 sts macl,Rn */
	r10 += r3;  /* 0C09B452 add Rm,Rn */
	r0 = R32(r10 + 0x8u); UPD(0x0C09B456u, 3);  /* 0C09B454 mov.l @(disp,Rm),Rn */
	T = r0 == 0x1u;  /* 0C09B456 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C09B4F0u, 4); goto L_0C09B4F0; }  /* 0C09B458 bt */
L_0C09B45A: BLKS(0x0C09B45Au);
	r7 = R32(r10 + 0xCu); UPD(0x0C09B45Cu, 1);  /* 0C09B45A mov.l @(disp,Rm),Rn */
	r5 = 0x7u;  /* 0C09B45C mov #imm,Rn */
	T = (s32)r7 > (s32)r5;  /* 0C09B45E cmp/gt Rm,Rn */
	{ u32 c_ = T; IF(0x0C09B462u); MACL = r11 * r2; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C09B4A0u, 6); goto L_0C09B4A0; } goto L_0C09B464; }  /* 0C09B460 bt/s */
L_0C09B464: BLKS(0x0C09B464u);
	IF(0x0C09B464u); r1 = MACL;  /* 0C09B464 sts macl,Rn */
	r1 += r3;  /* 0C09B466 add Rm,Rn */
	r11 = 0x2000000u; UPD(0x0C09B46Au, 5);  /* 0C09B468 mov.l @(disp,pc),Rn */
	{ W32(r1 + 0x24u, r11); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C09AD7Cu, 3); goto L_0C09AD7C; }  /* 0C09B46A bra */
L_0C09B4A0: BLKS(0x0C09B4A0u);
	IF(0x0C09B4A0u); MACL = r11 * r2;  /* 0C09B4A0 mul.l Rm,Rn */
	r9 = R32(r10 + 0x28u); UPD(0x0C09B4A4u, 3);  /* 0C09B4A2 mov.l @(disp,Rm),Rn */
	r7 += 0xFFFFFFF8u;  /* 0C09B4A4 add #imm,Rn */
	IF(0x0C09B4A6u); r0 = MACL;  /* 0C09B4A6 sts macl,Rn */
	r0 += r3;  /* 0C09B4A8 add Rm,Rn */
	r1 = R32(r0 + 0x30u); UPD(0x0C09B4ACu, 4);  /* 0C09B4AA mov.l @(disp,Rm),Rn */
	r4 = r0;  /* 0C09B4AC mov Rm,Rn */
	r13 = R32(r10 + 0x24u); UPD(0x0C09B4B0u, 2);  /* 0C09B4AE mov.l @(disp,Rm),Rn */
	r9 += r1;  /* 0C09B4B0 add Rm,Rn */
	r3 = R32(r0 + 0x2Cu); UPD(0x0C09B4B4u, 2);  /* 0C09B4B2 mov.l @(disp,Rm),Rn */
	W32(r0 + 0x28u, r9); UPD(0x0C09B4B6u, 1);  /* 0C09B4B4 mov.l Rm,@(disp,Rn) */
	r13 += r3;  /* 0C09B4B6 add Rm,Rn */
	r9 = R32(r0); UPD(0x0C09B4BAu, 2);  /* 0C09B4B8 mov.l @Rm,Rn */
	r3 = 0xECFFFFFFu; UPD(0x0C09B4BCu, 1);  /* 0C09B4BA mov.l @(disp,pc),Rn */
	r9 &= r3;  /* 0C09B4BC and Rm,Rn */
	W32(r0, r9); UPD(0x0C09B4C0u, 2);  /* 0C09B4BE mov.l Rm,@Rn */
	r2 = 0xA8u; UPD(0x0C09B4C2u, 1);  /* 0C09B4C0 mov.w @(disp,pc),Rn */
	W32(r0 + 0x24u, r13); UPD(0x0C09B4C4u, 1);  /* 0C09B4C2 mov.l Rm,@(disp,Rn) */
	r4 += r2;  /* 0C09B4C4 add Rm,Rn */
	r13 = R32(r10); UPD(0x0C09B4C8u, 2);  /* 0C09B4C6 mov.l @Rm,Rn */
	r2 += r10;  /* 0C09B4C8 add Rm,Rn */
	r5 = R32(r10 + 0x38u); UPD(0x0C09B4CCu, 2);  /* 0C09B4CA mov.l @(disp,Rm),Rn */
	r2 += 0x1u;  /* 0C09B4CC add #imm,Rn */
	r6 = 0xAFu; UPD(0x0C09B4D0u, 2);  /* 0C09B4CE mov.w @(disp,pc),Rn */
	r4 += 0x1u;  /* 0C09B4D0 add #imm,Rn */
	r10 = 0x13000000u; UPD(0x0C09B4D4u, 2);  /* 0C09B4D2 mov.l @(disp,pc),Rn */
	r12 = (u32)(s32)(s8)R8(r2); UPD(0x0C09B4D6u, 1);  /* 0C09B4D4 mov.b @Rm,Rn */
	r13 &= r10;  /* 0C09B4D6 and Rm,Rn */
	IF(0x0C09B4D8u); r8 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C09B4DAu, 2);  /* 0C09B4D8 mov.b @(r0,Rm),Rn */
	r9 |= r13;  /* 0C09B4DA or Rm,Rn */
	r12 += r8;  /* 0C09B4DC add Rm,Rn */
	W32(r0 + 0x38u, r5); UPD(0x0C09B4E0u, 3);  /* 0C09B4DE mov.l Rm,@(disp,Rn) */
	W8(r4, r12); UPD(0x0C09B4E2u, 1);  /* 0C09B4E0 mov.b Rm,@Rn */
	W32(r0, r9); UPD(0x0C09B4E4u, 1);  /* 0C09B4E2 mov.l Rm,@Rn */
	{ W32(r0 + 0xCu, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C09ADA8u, 3); goto L_0C09ADA8; }  /* 0C09B4E4 bra */
L_0C09B4F0: BLKS(0x0C09B4F0u);
	IF(0x0C09B4F0u); MACL = r11 * r2;  /* 0C09B4F0 mul.l Rm,Rn */
	r4 = r11;  /* 0C09B4F2 mov Rm,Rn */
	r6 = 0xDu;  /* 0C09B4F4 mov #imm,Rn */
	r11 = 0xC0A03B0u; UPD(0x0C09B4F8u, 5);  /* 0C09B4F6 mov.l @(disp,pc),Rn */
	IF(0x0C09B4F8u); r13 = MACL;  /* 0C09B4F8 sts macl,Rn */
	r13 += r3;  /* 0C09B4FA add Rm,Rn */
	r12 = 0x0u;  /* 0C09B4FC mov #imm,Rn */
	W32(r13 + 0x8u, r6); UPD(0x0C09B500u, 4);  /* 0C09B4FE mov.l Rm,@(disp,Rn) */
	IF(0x0C09B500u); { u32 t_ = r11; PR = 0x0C09B504u; W32(r13 + 0xCu, r12); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A03B0, 0x0C0A03B0u, 0x0C09B504u); }  /* 0C09B500 jsr @Rn */
L_0C09B504: BLKS(0x0C09B504u);
	r8 = R32(r13); UPD(0x0C09B506u, 1);  /* 0C09B504 mov.l @Rm,Rn */
	r0 = r13;  /* 0C09B506 mov Rm,Rn */
	r3 = 0xA8u; UPD(0x0C09B50Au, 2);  /* 0C09B508 mov.w @(disp,pc),Rn */
	r4 = 0xFFFFFFFFu;  /* 0C09B50A mov #imm,Rn */
	r1 = 0xECFFFFFFu; UPD(0x0C09B50Eu, 2);  /* 0C09B50C mov.l @(disp,pc),Rn */
	r10 += r3;  /* 0C09B50E add Rm,Rn */
	r7 = 0xAFu; UPD(0x0C09B512u, 2);  /* 0C09B510 mov.w @(disp,pc),Rn */
	r8 &= r1;  /* 0C09B512 and Rm,Rn */
	r2 = 0x110000u; UPD(0x0C09B516u, 2);  /* 0C09B514 mov.l @(disp,pc),Rn */
	r10 += 0x1u;  /* 0C09B516 add #imm,Rn */
	IF(0x0C09B518u); W8(r0 + r7, r4); UPD(0x0C09B51Au, 2);  /* 0C09B518 mov.b Rm,@(r0,Rn) */
	W32(r13, r8); UPD(0x0C09B51Cu, 1);  /* 0C09B51A mov.l Rm,@Rn */
	W32(r13 + 0x2Cu, r2); UPD(0x0C09B51Eu, 1);  /* 0C09B51C mov.l Rm,@(disp,Rn) */
	W32(r13 + 0x30u, r12); UPD(0x0C09B520u, 1);  /* 0C09B51E mov.l Rm,@(disp,Rn) */
	r0 = (u32)(s32)(s8)R8(r10); UPD(0x0C09B522u, 1);  /* 0C09B520 mov.b @Rm,Rn */
	r13 += r3;  /* 0C09B522 add Rm,Rn */
	r13 += 0x1u;  /* 0C09B524 add #imm,Rn */
	r0 += 0xFFFFFFFFu;  /* 0C09B526 add #imm,Rn */
	{ W8(r13, r0); /* slot mov.b Rm,@Rn */ UPD(0x0C09AD7Cu, 6); goto L_0C09AD7C; }  /* 0C09B528 bra */
L_0C09B53C: BLKS(0x0C09B53Cu);
	{ IF(0x0C09B53Eu); ; /* slot nop */ UPD(0x0C09AE10u, 3); goto L_0C09AE10; }  /* 0C09B53C bra */
}

void f_0C09B468(sh3_t *c)
{
	LOCALS;
	goto L_0C09B468;
L_0C09AD7C: BLKS(0x0C09AD7Cu);
	r14 += 0x3Cu;  /* 0C09AD7C add #imm,Rn */
	r15 = r14;  /* 0C09AD7E mov Rm,Rn */
	IF(0x0C09AD80u); PR = R32(r15); r15 += 4; UPD(0x0C09AD82u, 3);  /* 0C09AD80 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09AD84u, 1);  /* 0C09AD82 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C09AD86u, 1);  /* 0C09AD84 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09AD88u, 1);  /* 0C09AD86 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09AD8Au, 1);  /* 0C09AD88 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09AD8Cu, 1);  /* 0C09AD8A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09AD8Eu, 1);  /* 0C09AD8C mov.l @Rm+,Rn */
	IF(0x0C09AD8Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C09AD8E rts */
L_0C09B468: BLKS(0x0C09B468u);
	r11 = 0x2000000u; UPD(0x0C09B46Au, 1);  /* 0C09B468 mov.l @(disp,pc),Rn */
	{ W32(r1 + 0x24u, r11); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C09AD7Cu, 3); goto L_0C09AD7C; }  /* 0C09B46A bra */
}

void f_0C09B530(sh3_t *c)
{
	LOCALS;
	goto L_0C09B530;
L_0C09AD7C: BLKS(0x0C09AD7Cu);
	r14 += 0x3Cu;  /* 0C09AD7C add #imm,Rn */
	UPD(0x0C09AD7Eu, 1);
L_0C09AD7E: BLKS(0x0C09AD7Eu);
	r15 = r14;  /* 0C09AD7E mov Rm,Rn */
	IF(0x0C09AD80u); PR = R32(r15); r15 += 4; UPD(0x0C09AD82u, 2);  /* 0C09AD80 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09AD84u, 1);  /* 0C09AD82 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C09AD86u, 1);  /* 0C09AD84 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09AD88u, 1);  /* 0C09AD86 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09AD8Au, 1);  /* 0C09AD88 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09AD8Cu, 1);  /* 0C09AD8A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09AD8Eu, 1);  /* 0C09AD8C mov.l @Rm+,Rn */
	IF(0x0C09AD8Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C09AD8E rts */
L_0C09AE10: BLKS(0x0C09AE10u);
	r0 = 0xB4u; UPD(0x0C09AE12u, 1);  /* 0C09AE10 mov.w @(disp,pc),Rn */
	r5 = 0x0u;  /* 0C09AE12 mov #imm,Rn */
	IF(0x0C09AE14u); MACL = r11 * r0;  /* 0C09AE14 mul.l Rm,Rn */
	r11 = 0xC26CD40u; UPD(0x0C09AE18u, 4);  /* 0C09AE16 mov.l @(disp,pc),Rn */
	IF(0x0C09AE18u); r0 = MACL;  /* 0C09AE18 sts macl,Rn */
	{ IF(0x0C09AE1Cu); W32(r0 + r11, r5); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C09AD7Cu, 4); goto L_0C09AD7C; }  /* 0C09AE1A bra */
L_0C09B530: BLKS(0x0C09B530u);
	r10 = 0xC0A03F0u; UPD(0x0C09B532u, 1);  /* 0C09B530 mov.l @(disp,pc),Rn */
	IF(0x0C09B532u); { u32 t_ = r10; PR = 0x0C09B536u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C09B536u); }  /* 0C09B532 jsr @Rn */
L_0C09B536: BLKS(0x0C09B536u);
	IF(0x0C09B536u); T = (s32)r0 >= 0;  /* 0C09B536 cmp/pz Rn */
	{ u32 c_ = T; r13 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C09B540u, 4); goto L_0C09B540; } goto L_0C09B53C; }  /* 0C09B538 bt/s */
L_0C09B53C: BLKS(0x0C09B53Cu);
	{ IF(0x0C09B53Eu); ; /* slot nop */ UPD(0x0C09AE10u, 4); goto L_0C09AE10; }  /* 0C09B53C bra */
L_0C09B540: BLKS(0x0C09B540u);
	r9 = 0xB4u; UPD(0x0C09B542u, 1);  /* 0C09B540 mov.w @(disp,pc),Rn */
	IF(0x0C09B542u); MACL = r0 * r9;  /* 0C09B542 mul.l Rm,Rn */
	r12 = 0xC26CD40u; UPD(0x0C09B546u, 3);  /* 0C09B544 mov.l @(disp,pc),Rn */
	IF(0x0C09B546u); r7 = MACL;  /* 0C09B546 sts macl,Rn */
	r7 += r12;  /* 0C09B548 add Rm,Rn */
	r6 = R32(r7 + 0x8u); UPD(0x0C09B54Cu, 3);  /* 0C09B54A mov.l @(disp,Rm),Rn */
	r0 = r6;  /* 0C09B54C mov Rm,Rn */
	T = r0 == 0x3u;  /* 0C09B54E cmp/eq #imm,r0 */
	{ u32 c_ = T; IF(0x0C09B552u); MACL = r11 * r9; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C09B580u, 6); goto L_0C09B580; } goto L_0C09B554; }  /* 0C09B550 bt/s */
L_0C09B554: BLKS(0x0C09B554u);
	r7 = 0x0u;  /* 0C09B554 mov #imm,Rn */
	IF(0x0C09B556u); r0 = MACL;  /* 0C09B556 sts macl,Rn */
	IF(0x0C09B558u); W32(r0 + r12, r7); UPD(0x0C09B55Au, 5);  /* 0C09B558 mov.l Rm,@(r0,Rn) */
L_0C09B55A: BLKS(0x0C09B55Au);
	{ r14 += 0x3Cu; /* slot add #imm,Rn */ UPD(0x0C09AD7Eu, 3); goto L_0C09AD7E; }  /* 0C09B55A bra */
L_0C09B580: BLKS(0x0C09B580u);
	IF(0x0C09B580u); MACL = r11 * r9;  /* 0C09B580 mul.l Rm,Rn */
	r0 = R32(r7 + 0x28u); UPD(0x0C09B584u, 3);  /* 0C09B582 mov.l @(disp,Rm),Rn */
	IF(0x0C09B584u); r8 = MACL;  /* 0C09B584 sts macl,Rn */
	r8 += r12;  /* 0C09B586 add Rm,Rn */
	r5 = R32(r8 + 0x30u); UPD(0x0C09B58Au, 3);  /* 0C09B588 mov.l @(disp,Rm),Rn */
	r1 = r8;  /* 0C09B58A mov Rm,Rn */
	r4 = 0xA8u; UPD(0x0C09B58Eu, 2);  /* 0C09B58C mov.w @(disp,pc),Rn */
	r0 += r5;  /* 0C09B58E add Rm,Rn */
	r3 = R32(r7 + 0x24u); UPD(0x0C09B592u, 2);  /* 0C09B590 mov.l @(disp,Rm),Rn */
	r1 += r4;  /* 0C09B592 add Rm,Rn */
	r10 = R32(r8 + 0x2Cu); UPD(0x0C09B596u, 2);  /* 0C09B594 mov.l @(disp,Rm),Rn */
	r1 += 0x1u;  /* 0C09B596 add #imm,Rn */
	r3 += r10;  /* 0C09B598 add Rm,Rn */
	W32(r8 + 0x28u, r0); UPD(0x0C09B59Cu, 3);  /* 0C09B59A mov.l Rm,@(disp,Rn) */
	r4 += r7;  /* 0C09B59C add Rm,Rn */
	W32(r14 + 0x1Cu, r1); UPD(0x0C09B5A0u, 2);  /* 0C09B59E mov.l Rm,@(disp,Rn) */
	r0 = r8;  /* 0C09B5A0 mov Rm,Rn */
	r10 = 0xAFu; UPD(0x0C09B5A4u, 2);  /* 0C09B5A2 mov.w @(disp,pc),Rn */
	r4 += 0x1u;  /* 0C09B5A4 add #imm,Rn */
	W32(r8 + 0x24u, r3); UPD(0x0C09B5A8u, 2);  /* 0C09B5A6 mov.l Rm,@(disp,Rn) */
	IF(0x0C09B5A8u); r3 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C09B5AAu, 1);  /* 0C09B5A8 mov.b @(r0,Rm),Rn */
	r5 = (u32)(s32)(s8)R8(r4); UPD(0x0C09B5ACu, 1);  /* 0C09B5AA mov.b @Rm,Rn */
	r0 = R32(r14 + 0x1Cu); UPD(0x0C09B5AEu, 1);  /* 0C09B5AC mov.l @(disp,Rm),Rn */
	r5 += r3;  /* 0C09B5AE add Rm,Rn */
	W8(r0, r5); UPD(0x0C09B5B2u, 2);  /* 0C09B5B0 mov.b Rm,@Rn */
	r10 = 0xECFFFFFFu; UPD(0x0C09B5B4u, 1);  /* 0C09B5B2 mov.l @(disp,pc),Rn */
	r0 = R32(r8); UPD(0x0C09B5B6u, 1);  /* 0C09B5B4 mov.l @Rm,Rn */
	r0 &= r10;  /* 0C09B5B6 and Rm,Rn */
	W32(r8, r0); UPD(0x0C09B5BAu, 2);  /* 0C09B5B8 mov.l Rm,@Rn */
	r1 = 0x13000000u; UPD(0x0C09B5BCu, 1);  /* 0C09B5BA mov.l @(disp,pc),Rn */
	r3 = R32(r7); UPD(0x0C09B5BEu, 1);  /* 0C09B5BC mov.l @Rm,Rn */
	r5 = 0x8000u; UPD(0x0C09B5C0u, 1);  /* 0C09B5BE mov.l @(disp,pc),Rn */
	r3 &= r1;  /* 0C09B5C0 and Rm,Rn */
	r0 |= r3;  /* 0C09B5C2 or Rm,Rn */
	r0 |= r5;  /* 0C09B5C4 or Rm,Rn */
	W32(r8, r0); UPD(0x0C09B5C8u, 4);  /* 0C09B5C6 mov.l Rm,@Rn */
	r0 = 0x99u; UPD(0x0C09B5CAu, 1);  /* 0C09B5C8 mov.w @(disp,pc),Rn */
	r4 = R32(r7 + 0x38u); UPD(0x0C09B5CCu, 1);  /* 0C09B5CA mov.l @(disp,Rm),Rn */
	IF(0x0C09B5CCu); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C09B5CEu, 1);  /* 0C09B5CC mov.b @(r0,Rm),Rn */
	W32(r8 + 0x38u, r4); UPD(0x0C09B5D0u, 1);  /* 0C09B5CE mov.l Rm,@(disp,Rn) */
	r2 += 0x1u;  /* 0C09B5D0 add #imm,Rn */
	r4 = r2 & 0xFF;  /* 0C09B5D2 extu.b Rm,Rn */
	T = r4 > r6;  /* 0C09B5D4 cmp/hi Rm,Rn */
	{ u32 c_ = !T; IF(0x0C09B5D8u); W8(r0 + r8, r2); /* slot mov.b Rm,@(r0,Rn) */ if (c_) { UPD(0x0C09B5DEu, 6); goto L_0C09B5DE; } UPD(0x0C09B5DAu, 1); goto L_0C09B5DA; }  /* 0C09B5D6 bf/s */
L_0C09B5DA: BLKS(0x0C09B5DAu);
	{ r7 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C09B800u, 3); goto L_0C09B800; }  /* 0C09B5DA bra */
L_0C09B5DE: BLKS(0x0C09B5DEu);
	r4 = r8;  /* 0C09B5DE mov Rm,Rn */
	UPD(0x0C09B5E0u, 1);
L_0C09B5E0: BLKS(0x0C09B5E0u);
	r4 += 0x7Eu;  /* 0C09B5E0 add #imm,Rn */
	r2 = (u32)(s32)(s16)R16(r4); UPD(0x0C09B5E4u, 2);  /* 0C09B5E2 mov.w @Rm,Rn */
	r6 = 0x9Fu; UPD(0x0C09B5E6u, 1);  /* 0C09B5E4 mov.w @(disp,pc),Rn */
	W32(r14, r2); UPD(0x0C09B5E8u, 1);  /* 0C09B5E6 mov.l Rm,@Rn */
	r6 += r8;  /* 0C09B5E8 add Rm,Rn */
	r5 = (u32)(s32)(s8)R8(r6); UPD(0x0C09B5ECu, 2);  /* 0C09B5EA mov.b @Rm,Rn */
	r0 = r5 & 0xFF;  /* 0C09B5EC extu.b Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C09B5EE tst Rm,Rn */
	{ u32 c_ = !T; T = r0 == 0x1u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C09B5F8u, 5); goto L_0C09B5F8; } goto L_0C09B5F4; }  /* 0C09B5F0 bf/s */
L_0C09B5F4: BLKS(0x0C09B5F4u);
	{ r1 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(0x0C09B7C0u, 4); goto L_0C09B7C0; }  /* 0C09B5F4 bra */
L_0C09B5F8: BLKS(0x0C09B5F8u);
	if (!T) { UPD(0x0C09B600u, 3); goto L_0C09B600; }  /* 0C09B5F8 bf */
L_0C09B5FA: BLKS(0x0C09B5FAu);
	r0 = R32(r8 + 0x8u); UPD(0x0C09B5FCu, 1);  /* 0C09B5FA mov.l @(disp,Rm),Rn */
	{ T = r0 == 0xCu; /* slot cmp/eq #imm,r0 */ UPD(0x0C09B760u, 3); goto L_0C09B760; }  /* 0C09B5FC bra */
L_0C09B600: BLKS(0x0C09B600u);
	r9 = 0xB4u; UPD(0x0C09B602u, 1);  /* 0C09B600 mov.w @(disp,pc),Rn */
	r12 = 0xFFFFFFFFu;  /* 0C09B602 mov #imm,Rn */
	r3 = R32(r14); UPD(0x0C09B606u, 2);  /* 0C09B604 mov.l @Rm,Rn */
	IF(0x0C09B606u); MACL = r3 * r9;  /* 0C09B606 mul.l Rm,Rn */
	r10 = 0xC26CD40u; UPD(0x0C09B60Au, 3);  /* 0C09B608 mov.l @(disp,pc),Rn */
	IF(0x0C09B60Au); r3 = MACL;  /* 0C09B60A sts macl,Rn */
	IF(0x0C09B60Cu); MACL = r13 * r9;  /* 0C09B60C mul.l Rm,Rn */
	r3 += r10;  /* 0C09B60E add Rm,Rn */
	r3 += 0x3Cu;  /* 0C09B610 add #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r3); UPD(0x0C09B614u, 6);  /* 0C09B612 mov.w @Rm,Rn */
	IF(0x0C09B614u); r8 = MACL;  /* 0C09B614 sts macl,Rn */
	r8 += r10;  /* 0C09B616 add Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C09B618 tst Rm,Rn */
	r7 = R32(r8 + 0xCu); UPD(0x0C09B61Cu, 4);  /* 0C09B61A mov.l @(disp,Rm),Rn */
	{ u32 t_ = 0u - r12, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r4 = r_; }  /* 0C09B61C negc Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C09B61E tst Rm,Rn */
	IF(0x0C09B620u); r13 = T;  /* 0C09B620 movt Rn */
	T = (r4 & r13) == 0;  /* 0C09B622 tst Rm,Rn */
	{ u32 c_ = T; r3 += 0xFFFFFFC4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C09B55Au, 7); goto L_0C09B55A; } goto L_0C09B628; }  /* 0C09B624 bt/s */
L_0C09B628: BLKS(0x0C09B628u);
	r1 = 0xA4u; UPD(0x0C09B62Au, 2);  /* 0C09B628 mov.w @(disp,pc),Rn */
	r1 += r3;  /* 0C09B62A add Rm,Rn */
	r1 += 0x3u;  /* 0C09B62C add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r1); UPD(0x0C09B630u, 3);  /* 0C09B62E mov.b @Rm,Rn */
	T = r0 == 0x6u;  /* 0C09B630 cmp/eq #imm,r0 */
	{ u32 c_ = T; r1 += 0xFFFFFFFDu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C09B6E0u, 4); goto L_0C09B6E0; } goto L_0C09B636; }  /* 0C09B632 bt/s */
L_0C09B636: BLKS(0x0C09B636u);
	r1 += 0x1u;  /* 0C09B636 add #imm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r1); r1 += 1; r0 = v_; } UPD(0x0C09B63Au, 3);  /* 0C09B638 mov.b @Rm+,Rn */
	T = r0 == 0x5u;  /* 0C09B63A cmp/eq #imm,r0 */
	r0 = (u32)(s32)(s8)R8(r1); UPD(0x0C09B63Eu, 2);  /* 0C09B63C mov.b @Rm,Rn */
	IF(0x0C09B63Eu); r5 = T;  /* 0C09B63E movt Rn */
	T = r0 == 0x6u;  /* 0C09B640 cmp/eq #imm,r0 */
	IF(0x0C09B642u); r4 = T;  /* 0C09B642 movt Rn */
	r5 |= r4;  /* 0C09B644 or Rm,Rn */
	T = (r5 & r5) == 0;  /* 0C09B646 tst Rm,Rn */
	{ u32 c_ = T; r8 = r1; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C09B71Au, 8); goto L_0C09B71A; } goto L_0C09B64C; }  /* 0C09B648 bt/s */
L_0C09B64C: BLKS(0x0C09B64Cu);
	r12 = 0xC0A9E40u; UPD(0x0C09B64Eu, 2);  /* 0C09B64C mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C09B64E mov Rm,Rn */
	r5 = 0xFu;  /* 0C09B650 mov #imm,Rn */
	IF(0x0C09B652u); { u32 t_ = r12; PR = 0x0C09B656u; r6 = 0x5u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C09B656u); }  /* 0C09B652 jsr @Rn */
L_0C09B656: BLKS(0x0C09B656u);
	T = (r0 & r0) == 0;  /* 0C09B656 tst Rm,Rn */
	if (T) { UPD(0x0C09B71Au, 4); goto L_0C09B71A; }  /* 0C09B658 bt */
L_0C09B65A: BLKS(0x0C09B65Au);
	IF(0x0C09B65Au); MACL = r11 * r9;  /* 0C09B65A mul.l Rm,Rn */
	r13 = 0x0u;  /* 0C09B65C mov #imm,Rn */
	r12 = r8;  /* 0C09B65E mov Rm,Rn */
	IF(0x0C09B660u); r9 = MACL;  /* 0C09B660 sts macl,Rn */
	r9 += r10;  /* 0C09B662 add Rm,Rn */
	UPD(0x0C09B664u, 6);
L_0C09B664: BLKS(0x0C09B664u);
	r2 = (u32)(s32)(s8)R8(r12); UPD(0x0C09B666u, 1);  /* 0C09B664 mov.b @Rm,Rn */
	T = (s32)r2 > (s32)r13;  /* 0C09B666 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C09B690u, 4); goto L_0C09B690; }  /* 0C09B668 bf */
L_0C09B66A: BLKS(0x0C09B66Au);
	r15 += 0xFFFFFFFCu;  /* 0C09B66A add #imm,Rn */
	r8 = 0xC0AFE40u; UPD(0x0C09B66Eu, 2);  /* 0C09B66C mov.l @(disp,pc),Rn */
	r10 = R32(r9 + 0x24u); UPD(0x0C09B670u, 1);  /* 0C09B66E mov.l @(disp,Rm),Rn */
	r0 = 0x100000u; UPD(0x0C09B672u, 1);  /* 0C09B670 mov.l @(disp,pc),Rn */
	IF(0x0C09B672u); { u32 t_ = r8; PR = 0x0C09B676u; r10 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C09B676u); }  /* 0C09B672 jsr @Rn */
L_0C09B676: BLKS(0x0C09B676u);
	r3 = 0x38000u; UPD(0x0C09B678u, 1);  /* 0C09B676 mov.l @(disp,pc),Rn */
	r7 = r0;  /* 0C09B678 mov Rm,Rn */
	r8 = 0xC0A8510u; UPD(0x0C09B67Cu, 2);  /* 0C09B67A mov.l @(disp,pc),Rn */
	r4 = 0x4u;  /* 0C09B67C mov #imm,Rn */
	W32(r15, r3); UPD(0x0C09B680u, 2);  /* 0C09B67E mov.l Rm,@Rn */
	r5 = r10;  /* 0C09B680 mov Rm,Rn */
	IF(0x0C09B682u); { u32 t_ = r8; PR = 0x0C09B686u; r6 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, f_0C0A8510, 0x0C0A8510u, 0x0C09B686u); }  /* 0C09B682 jsr @Rn */
L_0C09B686: BLKS(0x0C09B686u);
	r7 = r13;  /* 0C09B686 mov Rm,Rn */
	r7 += 0x1u;  /* 0C09B688 add #imm,Rn */
	r15 += 0x4u;  /* 0C09B68A add #imm,Rn */
	{ r13 = (u32)(s32)(s16)r7; /* slot exts.w Rm,Rn */ UPD(0x0C09B664u, 6); goto L_0C09B664; }  /* 0C09B68C bra */
L_0C09B690: BLKS(0x0C09B690u);
	r5 = 0xB4u; UPD(0x0C09B692u, 1);  /* 0C09B690 mov.w @(disp,pc),Rn */
	r13 = 0x0u;  /* 0C09B692 mov #imm,Rn */
	r1 = R32(r14); UPD(0x0C09B696u, 2);  /* 0C09B694 mov.l @Rm,Rn */
	IF(0x0C09B696u); MACL = r1 * r5;  /* 0C09B696 mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C09B69Au, 3);  /* 0C09B698 mov.l @(disp,pc),Rn */
	IF(0x0C09B69Au); r9 = MACL;  /* 0C09B69A sts macl,Rn */
	IF(0x0C09B69Cu); MACL = r11 * r5;  /* 0C09B69C mul.l Rm,Rn */
	r9 += r6;  /* 0C09B69E add Rm,Rn */
	IF(0x0C09B6A0u); r10 = MACL;  /* 0C09B6A0 sts macl,Rn */
	r5 += 0xFFFFFFF3u;  /* 0C09B6A2 add #imm,Rn */
	r9 += r5;  /* 0C09B6A4 add Rm,Rn */
	r10 += r6;  /* 0C09B6A6 add Rm,Rn */
	UPD(0x0C09B6A8u, 8);
L_0C09B6A8: BLKS(0x0C09B6A8u);
	r3 = (u32)(s32)(s8)R8(r9); UPD(0x0C09B6AAu, 1);  /* 0C09B6A8 mov.b @Rm,Rn */
	T = (s32)r3 > (s32)r13;  /* 0C09B6AA cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C09B71Au, 4); goto L_0C09B71A; }  /* 0C09B6AC bf */
L_0C09B6AE: BLKS(0x0C09B6AEu);
	r15 += 0xFFFFFFFCu;  /* 0C09B6AE add #imm,Rn */
	r8 = 0xC0AFE40u; UPD(0x0C09B6B2u, 2);  /* 0C09B6B0 mov.l @(disp,pc),Rn */
	r7 = 0x100000u; UPD(0x0C09B6B4u, 1);  /* 0C09B6B2 mov.l @(disp,pc),Rn */
	r11 = R32(r10 + 0x24u); UPD(0x0C09B6B6u, 1);  /* 0C09B6B4 mov.l @(disp,Rm),Rn */
	IF(0x0C09B6B6u); { u32 t_ = r8; PR = 0x0C09B6BAu; r11 += r7; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C09B6BAu); }  /* 0C09B6B6 jsr @Rn */
L_0C09B6BA: BLKS(0x0C09B6BAu);
	r4 = 0x40000u; UPD(0x0C09B6BCu, 1);  /* 0C09B6BA mov.l @(disp,pc),Rn */
	r5 = r11;  /* 0C09B6BC mov Rm,Rn */
	r12 = 0xC0A8510u; UPD(0x0C09B6C0u, 2);  /* 0C09B6BE mov.l @(disp,pc),Rn */
	r11 = r13;  /* 0C09B6C0 mov Rm,Rn */
	W32(r15, r4); UPD(0x0C09B6C4u, 2);  /* 0C09B6C2 mov.l Rm,@Rn */
	r7 = r0;  /* 0C09B6C4 mov Rm,Rn */
	r4 = 0x5u;  /* 0C09B6C6 mov #imm,Rn */
	r6 = R32(r10 + 0x28u); UPD(0x0C09B6CAu, 3);  /* 0C09B6C8 mov.l @(disp,Rm),Rn */
	IF(0x0C09B6CAu); { u32 t_ = r12; PR = 0x0C09B6CEu; r11 += 0x1u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A8510, 0x0C0A8510u, 0x0C09B6CEu); }  /* 0C09B6CA jsr @Rn */
L_0C09B6CE: BLKS(0x0C09B6CEu);
	r15 += 0x4u;  /* 0C09B6CE add #imm,Rn */
	{ r13 = (u32)(s32)(s16)r11; /* slot exts.w Rm,Rn */ UPD(0x0C09B6A8u, 4); goto L_0C09B6A8; }  /* 0C09B6D0 bra */
L_0C09B6E0: BLKS(0x0C09B6E0u);
	r13 = 0xC0A9E40u; UPD(0x0C09B6E2u, 1);  /* 0C09B6E0 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C09B6E2 mov Rm,Rn */
	r5 = 0xFu;  /* 0C09B6E4 mov #imm,Rn */
	IF(0x0C09B6E6u); { u32 t_ = r13; PR = 0x0C09B6EAu; r6 = 0x5u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C09B6EAu); }  /* 0C09B6E6 jsr @Rn */
L_0C09B6EA: BLKS(0x0C09B6EAu);
	T = (r0 & r0) == 0;  /* 0C09B6EA tst Rm,Rn */
	if (T) { UPD(0x0C09B71Au, 4); goto L_0C09B71A; }  /* 0C09B6EC bt */
L_0C09B6EE: BLKS(0x0C09B6EEu);
	IF(0x0C09B6EEu); MACL = r11 * r9;  /* 0C09B6EE mul.l Rm,Rn */
	r0 = 0x86u; UPD(0x0C09B6F2u, 3);  /* 0C09B6F0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C09B6F2 add #imm,Rn */
	IF(0x0C09B6F4u); r11 = MACL;  /* 0C09B6F4 sts macl,Rn */
	r11 += r10;  /* 0C09B6F6 add Rm,Rn */
	IF(0x0C09B6F8u); r2 = (u32)(s32)(s16)R16(r0 + r11); UPD(0x0C09B6FAu, 4);  /* 0C09B6F8 mov.w @(r0,Rm),Rn */
	r4 = 0x5u;  /* 0C09B6FA mov #imm,Rn */
	r2 += 0x2u;  /* 0C09B6FC add #imm,Rn */
	r5 = R32(r11 + 0x24u); UPD(0x0C09B700u, 3);  /* 0C09B6FE mov.l @(disp,Rm),Rn */
	r7 = (u32)(s32)(s16)r2;  /* 0C09B700 exts.w Rm,Rn */
	IF(0x0C09B702u); W16(r0 + r11, r2); UPD(0x0C09B704u, 2);  /* 0C09B702 mov.w Rm,@(r0,Rn) */
	r10 = 0x2C000u; UPD(0x0C09B706u, 1);  /* 0C09B704 mov.l @(disp,pc),Rn */
	r9 = 0xC177C96u; UPD(0x0C09B708u, 1);  /* 0C09B706 mov.l @(disp,pc),Rn */
	r6 = 0x100000u; UPD(0x0C09B70Au, 1);  /* 0C09B708 mov.l @(disp,pc),Rn */
	W32(r15, r10); UPD(0x0C09B70Cu, 1);  /* 0C09B70A mov.l Rm,@Rn */
	r5 += r6;  /* 0C09B70C add Rm,Rn */
	W32(r15 + 0x4u, r9); UPD(0x0C09B710u, 2);  /* 0C09B70E mov.l Rm,@(disp,Rn) */
	r6 = R32(r11 + 0x28u); UPD(0x0C09B712u, 1);  /* 0C09B710 mov.l @(disp,Rm),Rn */
	r10 = 0xC0A8690u; UPD(0x0C09B714u, 1);  /* 0C09B712 mov.l @(disp,pc),Rn */
	IF(0x0C09B714u); { u32 t_ = r10; PR = 0x0C09B718u; IF(0x0C09B716u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0A8690, 0x0C0A8690u, 0x0C09B718u); }  /* 0C09B714 jsr @Rn */
L_0C09B718: BLKS(0x0C09B718u);
	r15 += 0x8u;  /* 0C09B718 add #imm,Rn */
	UPD(0x0C09B71Au, 1);
L_0C09B71A: BLKS(0x0C09B71Au);
	{ r14 += 0x3Cu; /* slot add #imm,Rn */ UPD(0x0C09AD7Eu, 3); goto L_0C09AD7E; }  /* 0C09B71A bra */
L_0C09B760: BLKS(0x0C09B760u);
	{ u32 c_ = T; r7 = R32(r14); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C09B7B0u, 3); goto L_0C09B7B0; } UPD(0x0C09B764u, 1); goto L_0C09B764; }  /* 0C09B760 bt/s */
L_0C09B764: BLKS(0x0C09B764u);
	r10 = r8;  /* 0C09B764 mov Rm,Rn */
	IF(0x0C09B766u); MACL = r7 * r9;  /* 0C09B766 mul.l Rm,Rn */
	r10 += 0x3Cu;  /* 0C09B768 add #imm,Rn */
	r6 = (u32)(s32)(s16)R16(r10); UPD(0x0C09B76Cu, 5);  /* 0C09B76A mov.w @Rm,Rn */
	IF(0x0C09B76Cu); r4 = MACL;  /* 0C09B76C sts macl,Rn */
	r4 += r12;  /* 0C09B76E add Rm,Rn */
	r4 += 0x3Cu;  /* 0C09B770 add #imm,Rn */
	r5 = (u32)(s32)(s16)R16(r4); UPD(0x0C09B774u, 4);  /* 0C09B772 mov.w @Rm,Rn */
	T = (s32)r6 >= (s32)r5;  /* 0C09B774 cmp/ge Rm,Rn */
	{ u32 c_ = !T; r0 += 0x1u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C09B7B0u, 4); goto L_0C09B7B0; } goto L_0C09B77A; }  /* 0C09B776 bf/s */
L_0C09B77A: BLKS(0x0C09B77Au);
	r6 = 0xC0A03B0u; UPD(0x0C09B77Cu, 2);  /* 0C09B77A mov.l @(disp,pc),Rn */
	W32(r8 + 0x8u, r0); UPD(0x0C09B77Eu, 1);  /* 0C09B77C mov.l Rm,@(disp,Rn) */
	IF(0x0C09B77Eu); { u32 t_ = r6; PR = 0x0C09B782u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03B0, 0x0C0A03B0u, 0x0C09B782u); }  /* 0C09B77E jsr @Rn */
L_0C09B782: BLKS(0x0C09B782u);
	r0 = 0x88u; UPD(0x0C09B784u, 1);  /* 0C09B782 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF4u;  /* 0C09B784 add #imm,Rn */
	IF(0x0C09B786u); r1 = (u32)(s32)(s16)R16(r0 + r8); UPD(0x0C09B788u, 2);  /* 0C09B786 mov.w @(r0,Rm),Rn */
	r12 = 0x40u;  /* 0C09B788 mov #imm,Rn */
	r5 = (u32)(s32)(s16)R16(r10); UPD(0x0C09B78Cu, 2);  /* 0C09B78A mov.w @Rm,Rn */
	r0 += 0x28u;  /* 0C09B78C add #imm,Rn */
	IF(0x0C09B78Eu); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C09B790u, 2);  /* 0C09B78E mov.b @(r0,Rm),Rn */
	r5 -= r1;  /* 0C09B790 sub Rm,Rn */
	W16(r10, r5); UPD(0x0C09B794u, 2);  /* 0C09B792 mov.w Rm,@Rn */
	r3 = r2 & 0xFF;  /* 0C09B794 extu.b Rm,Rn */
	W32(r15, r3); UPD(0x0C09B798u, 2);  /* 0C09B796 mov.l Rm,@Rn */
	r0 = R32(r14 + 0x1Cu); UPD(0x0C09B79Au, 1);  /* 0C09B798 mov.l @(disp,Rm),Rn */
	r10 = (u32)(s32)(s8)R8(r0); UPD(0x0C09B79Cu, 1);  /* 0C09B79A mov.b @Rm,Rn */
	r9 = r10 & 0xFF;  /* 0C09B79C extu.b Rm,Rn */
	W32(r15 + 0x4u, r9); UPD(0x0C09B7A0u, 2);  /* 0C09B79E mov.l Rm,@(disp,Rn) */
	W32(r15 + 0x8u, r12); UPD(0x0C09B7A2u, 1);  /* 0C09B7A0 mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C09B7A4u, 1);  /* 0C09B7A2 mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C09B7A6u, 1);  /* 0C09B7A4 mov.l @(disp,Rm),Rn */
	r7 = R32(r8 + 0x28u); UPD(0x0C09B7A8u, 1);  /* 0C09B7A6 mov.l @(disp,Rm),Rn */
	r8 = 0xC0AAD10u; UPD(0x0C09B7AAu, 1);  /* 0C09B7A8 mov.l @(disp,pc),Rn */
	IF(0x0C09B7AAu); { u32 t_ = r8; PR = 0x0C09B7AEu; r5 = 0x21u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AAD10, 0x0C0AAD10u, 0x0C09B7AEu); }  /* 0C09B7AA jsr @Rn */
L_0C09B7AE: BLKS(0x0C09B7AEu);
	r15 += 0xCu;  /* 0C09B7AE add #imm,Rn */
	UPD(0x0C09B7B0u, 1);
L_0C09B7B0: BLKS(0x0C09B7B0u);
	{ IF(0x0C09B7B2u); ; /* slot nop */ UPD(0x0C09B600u, 3); goto L_0C09B600; }  /* 0C09B7B0 bra */
L_0C09B7C0: BLKS(0x0C09B7C0u);
	IF(0x0C09B7C0u); MACL = r1 * r9;  /* 0C09B7C0 mul.l Rm,Rn */
	r3 = 0x92492493u; UPD(0x0C09B7C4u, 3);  /* 0C09B7C2 mov.l @(disp,pc),Rn */
	IF(0x0C09B7C4u); r2 = MACL;  /* 0C09B7C4 sts macl,Rn */
	r2 += r12;  /* 0C09B7C6 add Rm,Rn */
	r2 += 0x3Cu;  /* 0C09B7C8 add #imm,Rn */
	r10 = (u32)(s32)(s16)R16(r2); UPD(0x0C09B7CCu, 4);  /* 0C09B7CA mov.w @Rm,Rn */
	r9 = r8;  /* 0C09B7CC mov Rm,Rn */
	r0 = (u32)(s32)(s16)r10;  /* 0C09B7CE exts.w Rm,Rn */
	{ s64 r_ = (s64)(s32)r0 * (s64)(s32)r3; MACH = (u32)((u64)r_ >> 32); MACL = (u32)r_; }  /* 0C09B7D0 dmuls.l Rm,Rn */
	r12 = r5;  /* 0C09B7D2 mov Rm,Rn */
	r9 += 0x3Cu;  /* 0C09B7D4 add #imm,Rn */
	IF(0x0C09B7D6u); r7 = MACH;  /* 0C09B7D6 sts mach,Rn */
	r7 += r0;  /* 0C09B7D8 add Rm,Rn */
	IF(0x0C09B7DAu); T = r7 & 1; r7 = (u32)((s32)r7 >> 1);  /* 0C09B7DA shar Rn */
	IF(0x0C09B7DCu); T = r7 & 1; r7 = (u32)((s32)r7 >> 1);  /* 0C09B7DC shar Rn */
	IF(0x0C09B7DEu); T = r0 >> 31; r0 <<= 1;  /* 0C09B7DE shll Rn */
	{ u32 a_ = r0, t_ = a_ - r0, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r0 = r_; }  /* 0C09B7E0 subc Rm,Rn */
	r7 -= r0;  /* 0C09B7E2 sub Rm,Rn */
	r0 = 0x88u; UPD(0x0C09B7E6u, 14);  /* 0C09B7E4 mov.w @(disp,pc),Rn */
	r10 -= r7;  /* 0C09B7E6 sub Rm,Rn */
	r12 += 0x1u;  /* 0C09B7E8 add #imm,Rn */
	IF(0x0C09B7EAu); W16(r0 + r8, r7); UPD(0x0C09B7ECu, 3);  /* 0C09B7EA mov.w Rm,@(r0,Rn) */
	W16(r9, r10); UPD(0x0C09B7EEu, 1);  /* 0C09B7EC mov.w Rm,@Rn */
	{ W8(r6, r12); /* slot mov.b Rm,@Rn */ UPD(0x0C09B600u, 3); goto L_0C09B600; }  /* 0C09B7EE bra */
L_0C09B800: BLKS(0x0C09B800u);
	IF(0x0C09B800u); W8(r0 + r8, r7); UPD(0x0C09B802u, 1);  /* 0C09B800 mov.b Rm,@(r0,Rn) */
	r4 = r11;  /* 0C09B802 mov Rm,Rn */
	r0 = R32(r8 + 0xCu); UPD(0x0C09B806u, 2);  /* 0C09B804 mov.l @(disp,Rm),Rn */
	r6 = 0xC0A0380u; UPD(0x0C09B808u, 1);  /* 0C09B806 mov.l @(disp,pc),Rn */
	r0 += 0x1u;  /* 0C09B808 add #imm,Rn */
	r0 &= 0x7u;  /* 0C09B80A and #imm,r0 */
	IF(0x0C09B80Cu); { u32 t_ = r6; PR = 0x0C09B810u; W32(r8 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 4); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C09B810u); }  /* 0C09B80C jsr @Rn */
L_0C09B810: BLKS(0x0C09B810u);
	{ r4 = r8; /* slot mov Rm,Rn */ UPD(0x0C09B5E0u, 3); goto L_0C09B5E0; }  /* 0C09B810 bra */
}

void f_0C09B712(sh3_t *c)
{
	LOCALS;
	goto L_0C09B712;
L_0C09AD7E: BLKS(0x0C09AD7Eu);
	r15 = r14;  /* 0C09AD7E mov Rm,Rn */
	IF(0x0C09AD80u); PR = R32(r15); r15 += 4; UPD(0x0C09AD82u, 2);  /* 0C09AD80 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09AD84u, 1);  /* 0C09AD82 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C09AD86u, 1);  /* 0C09AD84 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09AD88u, 1);  /* 0C09AD86 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09AD8Au, 1);  /* 0C09AD88 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09AD8Cu, 1);  /* 0C09AD8A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09AD8Eu, 1);  /* 0C09AD8C mov.l @Rm+,Rn */
	IF(0x0C09AD8Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C09AD8E rts */
L_0C09B712: BLKS(0x0C09B712u);
	r10 = 0xC0A8690u; UPD(0x0C09B714u, 1);  /* 0C09B712 mov.l @(disp,pc),Rn */
	IF(0x0C09B714u); { u32 t_ = r10; PR = 0x0C09B718u; IF(0x0C09B716u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0A8690, 0x0C0A8690u, 0x0C09B718u); }  /* 0C09B714 jsr @Rn */
L_0C09B718: BLKS(0x0C09B718u);
	r15 += 0x8u;  /* 0C09B718 add #imm,Rn */
	{ r14 += 0x3Cu; /* slot add #imm,Rn */ UPD(0x0C09AD7Eu, 4); goto L_0C09AD7E; }  /* 0C09B71A bra */
}

void f_0C09B820(sh3_t *c)
{
	LOCALS;
	goto L_0C09B820;
L_0C09AD7C: BLKS(0x0C09AD7Cu);
	r14 += 0x3Cu;  /* 0C09AD7C add #imm,Rn */
	UPD(0x0C09AD7Eu, 1);
L_0C09AD7E: BLKS(0x0C09AD7Eu);
	r15 = r14;  /* 0C09AD7E mov Rm,Rn */
	IF(0x0C09AD80u); PR = R32(r15); r15 += 4; UPD(0x0C09AD82u, 2);  /* 0C09AD80 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09AD84u, 1);  /* 0C09AD82 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C09AD86u, 1);  /* 0C09AD84 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09AD88u, 1);  /* 0C09AD86 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09AD8Au, 1);  /* 0C09AD88 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09AD8Cu, 1);  /* 0C09AD8A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09AD8Eu, 1);  /* 0C09AD8C mov.l @Rm+,Rn */
	IF(0x0C09AD8Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C09AD8E rts */
L_0C09AE10: BLKS(0x0C09AE10u);
	r0 = 0xB4u; UPD(0x0C09AE12u, 1);  /* 0C09AE10 mov.w @(disp,pc),Rn */
	r5 = 0x0u;  /* 0C09AE12 mov #imm,Rn */
	IF(0x0C09AE14u); MACL = r11 * r0;  /* 0C09AE14 mul.l Rm,Rn */
	r11 = 0xC26CD40u; UPD(0x0C09AE18u, 4);  /* 0C09AE16 mov.l @(disp,pc),Rn */
	IF(0x0C09AE18u); r0 = MACL;  /* 0C09AE18 sts macl,Rn */
	{ IF(0x0C09AE1Cu); W32(r0 + r11, r5); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C09AD7Cu, 4); goto L_0C09AD7C; }  /* 0C09AE1A bra */
L_0C09B820: BLKS(0x0C09B820u);
	r13 = 0xC0A03F0u; UPD(0x0C09B822u, 1);  /* 0C09B820 mov.l @(disp,pc),Rn */
	IF(0x0C09B822u); { u32 t_ = r13; PR = 0x0C09B826u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C09B826u); }  /* 0C09B822 jsr @Rn */
L_0C09B826: BLKS(0x0C09B826u);
	IF(0x0C09B826u); T = (s32)r0 >= 0;  /* 0C09B826 cmp/pz Rn */
	{ u32 c_ = T; r13 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C09B830u, 4); goto L_0C09B830; } goto L_0C09B82C; }  /* 0C09B828 bt/s */
L_0C09B82C: BLKS(0x0C09B82Cu);
	{ IF(0x0C09B82Eu); ; /* slot nop */ UPD(0x0C09AE10u, 4); goto L_0C09AE10; }  /* 0C09B82C bra */
L_0C09B830: BLKS(0x0C09B830u);
	r2 = 0xB4u; UPD(0x0C09B832u, 1);  /* 0C09B830 mov.w @(disp,pc),Rn */
	IF(0x0C09B832u); MACL = r11 * r2;  /* 0C09B832 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C09B836u, 3);  /* 0C09B834 mov.l @(disp,pc),Rn */
	IF(0x0C09B836u); r8 = MACL;  /* 0C09B836 sts macl,Rn */
	IF(0x0C09B838u); MACL = r13 * r2;  /* 0C09B838 mul.l Rm,Rn */
	r8 += r0;  /* 0C09B83A add Rm,Rn */
	r5 = R32(r8 + 0x2Cu); UPD(0x0C09B83Eu, 5);  /* 0C09B83C mov.l @(disp,Rm),Rn */
	IF(0x0C09B83Eu); r3 = MACL;  /* 0C09B83E sts macl,Rn */
	r3 += r0;  /* 0C09B840 add Rm,Rn */
	r10 = R32(r3 + 0x24u); UPD(0x0C09B844u, 3);  /* 0C09B842 mov.l @(disp,Rm),Rn */
	r0 = r8;  /* 0C09B844 mov Rm,Rn */
	r10 += r5;  /* 0C09B846 add Rm,Rn */
	r12 = 0xA8u; UPD(0x0C09B84Au, 3);  /* 0C09B848 mov.w @(disp,pc),Rn */
	r5 = r8;  /* 0C09B84A mov Rm,Rn */
	r5 += r12;  /* 0C09B84C add Rm,Rn */
	r12 += r3;  /* 0C09B84E add Rm,Rn */
	r1 = 0xAFu; UPD(0x0C09B852u, 4);  /* 0C09B850 mov.w @(disp,pc),Rn */
	r12 += 0x1u;  /* 0C09B852 add #imm,Rn */
	r7 = (u32)(s32)(s8)R8(r12); UPD(0x0C09B856u, 2);  /* 0C09B854 mov.b @Rm,Rn */
	r5 += 0x1u;  /* 0C09B856 add #imm,Rn */
	IF(0x0C09B858u); r6 = (u32)(s32)(s8)R8(r0 + r1); UPD(0x0C09B85Au, 2);  /* 0C09B858 mov.b @(r0,Rm),Rn */
	r7 += r6;  /* 0C09B85A add Rm,Rn */
	W8(r5, r7); UPD(0x0C09B85Eu, 2);  /* 0C09B85C mov.b Rm,@Rn */
	r0 = (u32)(s32)(s8)R8(r12); UPD(0x0C09B860u, 1);  /* 0C09B85E mov.b @Rm,Rn */
	r0 += r6;  /* 0C09B860 add Rm,Rn */
	W8(r5, r0); UPD(0x0C09B864u, 2);  /* 0C09B862 mov.b Rm,@Rn */
	W32(r8 + 0x24u, r10); UPD(0x0C09B866u, 1);  /* 0C09B864 mov.l Rm,@(disp,Rn) */
	r4 = R32(r3 + 0x38u); UPD(0x0C09B868u, 1);  /* 0C09B866 mov.l @(disp,Rm),Rn */
	r0 = R32(r8 + 0xCu); UPD(0x0C09B86Au, 1);  /* 0C09B868 mov.l @(disp,Rm),Rn */
	r13 = R32(r3 + 0x28u); UPD(0x0C09B86Cu, 1);  /* 0C09B86A mov.l @(disp,Rm),Rn */
	r0 += 0x3u;  /* 0C09B86C add #imm,Rn */
	r9 = R32(r8 + 0x30u); UPD(0x0C09B870u, 2);  /* 0C09B86E mov.l @(disp,Rm),Rn */
	r0 &= 0xFu;  /* 0C09B870 and #imm,r0 */
	r10 = 0xC0A0380u; UPD(0x0C09B874u, 2);  /* 0C09B872 mov.l @(disp,pc),Rn */
	r13 += r9;  /* 0C09B874 add Rm,Rn */
	W32(r8 + 0x38u, r4); UPD(0x0C09B878u, 2);  /* 0C09B876 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x28u, r13); UPD(0x0C09B87Au, 1);  /* 0C09B878 mov.l Rm,@(disp,Rn) */
	r4 = r11;  /* 0C09B87A mov Rm,Rn */
	IF(0x0C09B87Cu); { u32 t_ = r10; PR = 0x0C09B880u; W32(r8 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C09B880u); }  /* 0C09B87C jsr @Rn */
L_0C09B880: BLKS(0x0C09B880u);
	r2 = R32(r8 + 0x2Cu); UPD(0x0C09B882u, 1);  /* 0C09B880 mov.l @(disp,Rm),Rn */
	r9 = 0xFFF60000u; UPD(0x0C09B884u, 1);  /* 0C09B882 mov.l @(disp,pc),Rn */
	T = r2 == r9;  /* 0C09B884 cmp/eq Rm,Rn */
	if (T) { UPD(0x0C09B88Eu, 4); goto L_0C09B88E; }  /* 0C09B886 bt */
L_0C09B888: BLKS(0x0C09B888u);
	r11 = 0xFFFF8000u; UPD(0x0C09B88Au, 1);  /* 0C09B888 mov.w @(disp,pc),Rn */
	r2 += r11;  /* 0C09B88A add Rm,Rn */
	W32(r8 + 0x2Cu, r2); UPD(0x0C09B88Eu, 2);  /* 0C09B88C mov.l Rm,@(disp,Rn) */
L_0C09B88E: BLKS(0x0C09B88Eu);
	{ r14 += 0x3Cu; /* slot add #imm,Rn */ UPD(0x0C09AD7Eu, 3); goto L_0C09AD7E; }  /* 0C09B88E bra */
}

void f_0C09B8A0(sh3_t *c)
{
	LOCALS;
	goto L_0C09B8A0;
L_0C09ACF4: BLKS(0x0C09ACF4u);
	r14 += 0x3Cu;  /* 0C09ACF4 add #imm,Rn */
	r15 = r14;  /* 0C09ACF6 mov Rm,Rn */
	IF(0x0C09ACF8u); PR = R32(r15); r15 += 4; UPD(0x0C09ACFAu, 3);  /* 0C09ACF8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09ACFCu, 1);  /* 0C09ACFA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C09ACFEu, 1);  /* 0C09ACFC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09AD00u, 1);  /* 0C09ACFE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09AD02u, 1);  /* 0C09AD00 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09AD04u, 1);  /* 0C09AD02 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09AD06u, 1);  /* 0C09AD04 mov.l @Rm+,Rn */
	IF(0x0C09AD06u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09AD06 jmp @Rn */
L_0C09AD7E: BLKS(0x0C09AD7Eu);
	r15 = r14;  /* 0C09AD7E mov Rm,Rn */
	IF(0x0C09AD80u); PR = R32(r15); r15 += 4; UPD(0x0C09AD82u, 2);  /* 0C09AD80 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09AD84u, 1);  /* 0C09AD82 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C09AD86u, 1);  /* 0C09AD84 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09AD88u, 1);  /* 0C09AD86 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09AD8Au, 1);  /* 0C09AD88 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09AD8Cu, 1);  /* 0C09AD8A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09AD8Eu, 1);  /* 0C09AD8C mov.l @Rm+,Rn */
	IF(0x0C09AD8Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C09AD8E rts */
L_0C09ADA8: BLKS(0x0C09ADA8u);
	r1 = 0xC0A0380u; UPD(0x0C09ADAAu, 1);  /* 0C09ADA8 mov.l @(disp,pc),Rn */
	{ r4 = r11; /* slot mov Rm,Rn */ UPD(0x0C09ACF4u, 3); goto L_0C09ACF4; }  /* 0C09ADAA bra */
L_0C09B88E: BLKS(0x0C09B88Eu);
	{ r14 += 0x3Cu; /* slot add #imm,Rn */ UPD(0x0C09AD7Eu, 3); goto L_0C09AD7E; }  /* 0C09B88E bra */
L_0C09B8A0: BLKS(0x0C09B8A0u);
	r8 = 0xC0A03F0u; UPD(0x0C09B8A2u, 1);  /* 0C09B8A0 mov.l @(disp,pc),Rn */
	IF(0x0C09B8A2u); { u32 t_ = r8; PR = 0x0C09B8A6u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C09B8A6u); }  /* 0C09B8A2 jsr @Rn */
L_0C09B8A6: BLKS(0x0C09B8A6u);
	IF(0x0C09B8A6u); T = (s32)r0 >= 0;  /* 0C09B8A6 cmp/pz Rn */
	if (!T) { UPD(0x0C09B990u, 4); goto L_0C09B990; }  /* 0C09B8A8 bf */
L_0C09B8AA: BLKS(0x0C09B8AAu);
	r2 = 0xB4u; UPD(0x0C09B8ACu, 1);  /* 0C09B8AA mov.w @(disp,pc),Rn */
	IF(0x0C09B8ACu); MACL = r11 * r2;  /* 0C09B8AC mul.l Rm,Rn */
	r3 = 0xC26CD40u; UPD(0x0C09B8B0u, 3);  /* 0C09B8AE mov.l @(disp,pc),Rn */
	IF(0x0C09B8B0u); r9 = MACL;  /* 0C09B8B0 sts macl,Rn */
	IF(0x0C09B8B2u); MACL = r0 * r2;  /* 0C09B8B2 mul.l Rm,Rn */
	r9 += r3;  /* 0C09B8B4 add Rm,Rn */
	r7 = r9;  /* 0C09B8B6 mov Rm,Rn */
	r0 = 0xA8u; UPD(0x0C09B8BAu, 6);  /* 0C09B8B8 mov.w @(disp,pc),Rn */
	IF(0x0C09B8BAu); r13 = MACL;  /* 0C09B8BA sts macl,Rn */
	r13 += r3;  /* 0C09B8BC add Rm,Rn */
	r7 += r0;  /* 0C09B8BE add Rm,Rn */
	r0 += r13;  /* 0C09B8C0 add Rm,Rn */
	r0 += 0x1u;  /* 0C09B8C2 add #imm,Rn */
	r5 = (u32)(s32)(s8)R8(r0); UPD(0x0C09B8C6u, 6);  /* 0C09B8C4 mov.b @Rm,Rn */
	r7 += 0x1u;  /* 0C09B8C6 add #imm,Rn */
	r6 = 0xAFu; UPD(0x0C09B8CAu, 2);  /* 0C09B8C8 mov.w @(disp,pc),Rn */
	r0 = r9;  /* 0C09B8CA mov Rm,Rn */
	r4 = R32(r13 + 0x24u); UPD(0x0C09B8CEu, 2);  /* 0C09B8CC mov.l @(disp,Rm),Rn */
	r10 = R32(r9 + 0x2Cu); UPD(0x0C09B8D0u, 1);  /* 0C09B8CE mov.l @(disp,Rm),Rn */
	IF(0x0C09B8D0u); r8 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C09B8D2u, 1);  /* 0C09B8D0 mov.b @(r0,Rm),Rn */
	r4 += r10;  /* 0C09B8D2 add Rm,Rn */
	r12 = R32(r13 + 0x28u); UPD(0x0C09B8D6u, 2);  /* 0C09B8D4 mov.l @(disp,Rm),Rn */
	r5 += r8;  /* 0C09B8D6 add Rm,Rn */
	r6 = R32(r9); UPD(0x0C09B8DAu, 2);  /* 0C09B8D8 mov.l @Rm,Rn */
	r1 = R32(r9 + 0x30u); UPD(0x0C09B8DCu, 1);  /* 0C09B8DA mov.l @(disp,Rm),Rn */
	r10 = 0xECFFFFFFu; UPD(0x0C09B8DEu, 1);  /* 0C09B8DC mov.l @(disp,pc),Rn */
	r12 += r1;  /* 0C09B8DE add Rm,Rn */
	r6 &= r10;  /* 0C09B8E0 and Rm,Rn */
	W32(r9, r6); UPD(0x0C09B8E4u, 3);  /* 0C09B8E2 mov.l Rm,@Rn */
	r0 = 0x86u; UPD(0x0C09B8E6u, 1);  /* 0C09B8E4 mov.w @(disp,pc),Rn */
	W32(r9 + 0x28u, r12); UPD(0x0C09B8E8u, 1);  /* 0C09B8E6 mov.l Rm,@(disp,Rn) */
	r3 = R32(r13 + 0x38u); UPD(0x0C09B8EAu, 1);  /* 0C09B8E8 mov.l @(disp,Rm),Rn */
	r12 = R32(r13); UPD(0x0C09B8ECu, 1);  /* 0C09B8EA mov.l @Rm,Rn */
	IF(0x0C09B8ECu); r2 = (u32)(s32)(s16)R16(r0 + r9); UPD(0x0C09B8EEu, 1);  /* 0C09B8EC mov.w @(r0,Rm),Rn */
	W32(r9 + 0x24u, r4); UPD(0x0C09B8F0u, 1);  /* 0C09B8EE mov.l Rm,@(disp,Rn) */
	r2 += 0x1u;  /* 0C09B8F0 add #imm,Rn */
	r13 = 0x88u; UPD(0x0C09B8F4u, 2);  /* 0C09B8F2 mov.w @(disp,pc),Rn */
	IF(0x0C09B8F4u); W16(r0 + r9, r2); UPD(0x0C09B8F6u, 1);  /* 0C09B8F4 mov.w Rm,@(r0,Rn) */
	r13 += r9;  /* 0C09B8F6 add Rm,Rn */
	r4 = 0x13000000u; UPD(0x0C09B8FAu, 2);  /* 0C09B8F8 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s16)R16(r13); UPD(0x0C09B8FCu, 1);  /* 0C09B8FA mov.w @Rm,Rn */
	r12 &= r4;  /* 0C09B8FC and Rm,Rn */
	r8 = 0xC058090u; UPD(0x0C09B900u, 2);  /* 0C09B8FE mov.l @(disp,pc),Rn */
	r6 |= r12;  /* 0C09B900 or Rm,Rn */
	W8(r7, r5); UPD(0x0C09B904u, 2);  /* 0C09B902 mov.b Rm,@Rn */
	r0 += 0xFFFFFFFFu;  /* 0C09B904 add #imm,Rn */
	W32(r9 + 0x38u, r3); UPD(0x0C09B908u, 2);  /* 0C09B906 mov.l Rm,@(disp,Rn) */
	r4 = r11;  /* 0C09B908 mov Rm,Rn */
	W32(r9, r6); UPD(0x0C09B90Cu, 2);  /* 0C09B90A mov.l Rm,@Rn */
	IF(0x0C09B90Cu); { u32 t_ = r8; PR = 0x0C09B910u; W16(r13, r0); /* slot mov.w Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C058090, 0x0C058090u, 0x0C09B910u); }  /* 0C09B90C jsr @Rn */
L_0C09B910: BLKS(0x0C09B910u);
	r5 = 0x280u; UPD(0x0C09B912u, 1);  /* 0C09B910 mov.w @(disp,pc),Rn */
	r1 = (u32)(s32)(s16)r0;  /* 0C09B912 exts.w Rm,Rn */
	IF(0x0C09B914u); MACL = r1 * r5;  /* 0C09B914 mul.l Rm,Rn */
	r7 = 0xC283794u; UPD(0x0C09B918u, 4);  /* 0C09B916 mov.l @(disp,pc),Rn */
	r13 += 0x2u;  /* 0C09B918 add #imm,Rn */
	r10 = 0xC057390u; UPD(0x0C09B91Cu, 2);  /* 0C09B91A mov.l @(disp,pc),Rn */
	IF(0x0C09B91Cu); r3 = MACL;  /* 0C09B91C sts macl,Rn */
	r3 += r7;  /* 0C09B91E add Rm,Rn */
	r4 = R32(r9 + 0x24u); UPD(0x0C09B922u, 3);  /* 0C09B920 mov.l @(disp,Rm),Rn */
	r6 = R32(r3 + 0x10u); UPD(0x0C09B924u, 1);  /* 0C09B922 mov.l @(disp,Rm),Rn */
	r5 = R32(r9 + 0x28u); UPD(0x0C09B926u, 1);  /* 0C09B924 mov.l @(disp,Rm),Rn */
	IF(0x0C09B926u); { u32 t_ = r10; PR = 0x0C09B92Au; r7 = R32(r3 + 0x14u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C057390, 0x0C057390u, 0x0C09B92Au); }  /* 0C09B926 jsr @Rn */
L_0C09B92A: BLKS(0x0C09B92Au);
	W16(r13, r0); UPD(0x0C09B92Cu, 1);  /* 0C09B92A mov.w Rm,@Rn */
	r6 = 0x3u;  /* 0C09B92C mov #imm,Rn */
	r0 = 0x99u; UPD(0x0C09B930u, 2);  /* 0C09B92E mov.w @(disp,pc),Rn */
	IF(0x0C09B930u); r4 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C09B932u, 1);  /* 0C09B930 mov.b @(r0,Rm),Rn */
	r4 += 0x1u;  /* 0C09B932 add #imm,Rn */
	r12 = r4 & 0xFF;  /* 0C09B934 extu.b Rm,Rn */
	T = r12 > r6;  /* 0C09B936 cmp/hi Rm,Rn */
	{ u32 c_ = !T; IF(0x0C09B93Au); W8(r0 + r9, r4); /* slot mov.b Rm,@(r0,Rn) */ if (c_) { UPD(0x0C09B88Eu, 6); goto L_0C09B88E; } UPD(0x0C09B93Cu, 1); goto L_0C09B93C; }  /* 0C09B938 bf/s */
L_0C09B93C: BLKS(0x0C09B93Cu);
	r13 = 0x0u;  /* 0C09B93C mov #imm,Rn */
	IF(0x0C09B93Eu); W8(r0 + r9, r13); UPD(0x0C09B940u, 2);  /* 0C09B93E mov.b Rm,@(r0,Rn) */
	r0 = R32(r9 + 0xCu); UPD(0x0C09B942u, 1);  /* 0C09B940 mov.l @(disp,Rm),Rn */
	r0 += 0x1u;  /* 0C09B942 add #imm,Rn */
	r0 &= 0xFu;  /* 0C09B944 and #imm,r0 */
	{ W32(r9 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C09ADA8u, 5); goto L_0C09ADA8; }  /* 0C09B946 bra */
L_0C09B990: BLKS(0x0C09B990u);
	r1 = 0xC0999E0u; UPD(0x0C09B992u, 1);  /* 0C09B990 mov.l @(disp,pc),Rn */
	{ r4 = r11; /* slot mov Rm,Rn */ UPD(0x0C09ACF4u, 3); goto L_0C09ACF4; }  /* 0C09B992 bra */
}

void f_0C09B946(sh3_t *c)
{
	LOCALS;
	goto L_0C09B946;
L_0C09ACF4: BLKS(0x0C09ACF4u);
	r14 += 0x3Cu;  /* 0C09ACF4 add #imm,Rn */
	r15 = r14;  /* 0C09ACF6 mov Rm,Rn */
	IF(0x0C09ACF8u); PR = R32(r15); r15 += 4; UPD(0x0C09ACFAu, 3);  /* 0C09ACF8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09ACFCu, 1);  /* 0C09ACFA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C09ACFEu, 1);  /* 0C09ACFC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09AD00u, 1);  /* 0C09ACFE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09AD02u, 1);  /* 0C09AD00 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09AD04u, 1);  /* 0C09AD02 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09AD06u, 1);  /* 0C09AD04 mov.l @Rm+,Rn */
	IF(0x0C09AD06u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09AD06 jmp @Rn */
L_0C09ADA8: BLKS(0x0C09ADA8u);
	r1 = 0xC0A0380u; UPD(0x0C09ADAAu, 1);  /* 0C09ADA8 mov.l @(disp,pc),Rn */
	{ r4 = r11; /* slot mov Rm,Rn */ UPD(0x0C09ACF4u, 3); goto L_0C09ACF4; }  /* 0C09ADAA bra */
L_0C09B946: BLKS(0x0C09B946u);
	{ W32(r9 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C09ADA8u, 3); goto L_0C09ADA8; }  /* 0C09B946 bra */
}

void f_0C09B990(sh3_t *c)
{
	LOCALS;
	goto L_0C09B990;
L_0C09ACF4: BLKS(0x0C09ACF4u);
	r14 += 0x3Cu;  /* 0C09ACF4 add #imm,Rn */
	r15 = r14;  /* 0C09ACF6 mov Rm,Rn */
	IF(0x0C09ACF8u); PR = R32(r15); r15 += 4; UPD(0x0C09ACFAu, 3);  /* 0C09ACF8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09ACFCu, 1);  /* 0C09ACFA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C09ACFEu, 1);  /* 0C09ACFC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09AD00u, 1);  /* 0C09ACFE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09AD02u, 1);  /* 0C09AD00 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09AD04u, 1);  /* 0C09AD02 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09AD06u, 1);  /* 0C09AD04 mov.l @Rm+,Rn */
	IF(0x0C09AD06u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09AD06 jmp @Rn */
L_0C09B990: BLKS(0x0C09B990u);
	r1 = 0xC0999E0u; UPD(0x0C09B992u, 1);  /* 0C09B990 mov.l @(disp,pc),Rn */
	{ r4 = r11; /* slot mov Rm,Rn */ UPD(0x0C09ACF4u, 3); goto L_0C09ACF4; }  /* 0C09B992 bra */
}

void f_0C09B9A0(sh3_t *c)
{
	LOCALS;
	goto L_0C09B9A0;
L_0C09ACF4: BLKS(0x0C09ACF4u);
	r14 += 0x3Cu;  /* 0C09ACF4 add #imm,Rn */
	r15 = r14;  /* 0C09ACF6 mov Rm,Rn */
	IF(0x0C09ACF8u); PR = R32(r15); r15 += 4; UPD(0x0C09ACFAu, 3);  /* 0C09ACF8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09ACFCu, 1);  /* 0C09ACFA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C09ACFEu, 1);  /* 0C09ACFC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09AD00u, 1);  /* 0C09ACFE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09AD02u, 1);  /* 0C09AD00 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09AD04u, 1);  /* 0C09AD02 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09AD06u, 1);  /* 0C09AD04 mov.l @Rm+,Rn */
	IF(0x0C09AD06u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09AD06 jmp @Rn */
L_0C09ADA6: BLKS(0x0C09ADA6u);
	W32(r8 + 0xCu, r0); UPD(0x0C09ADA8u, 1);  /* 0C09ADA6 mov.l Rm,@(disp,Rn) */
	r1 = 0xC0A0380u; UPD(0x0C09ADAAu, 1);  /* 0C09ADA8 mov.l @(disp,pc),Rn */
	{ r4 = r11; /* slot mov Rm,Rn */ UPD(0x0C09ACF4u, 3); goto L_0C09ACF4; }  /* 0C09ADAA bra */
L_0C09B990: BLKS(0x0C09B990u);
	r1 = 0xC0999E0u; UPD(0x0C09B992u, 1);  /* 0C09B990 mov.l @(disp,pc),Rn */
	{ r4 = r11; /* slot mov Rm,Rn */ UPD(0x0C09ACF4u, 3); goto L_0C09ACF4; }  /* 0C09B992 bra */
L_0C09B9A0: BLKS(0x0C09B9A0u);
	r9 = 0xC0A03F0u; UPD(0x0C09B9A2u, 1);  /* 0C09B9A0 mov.l @(disp,pc),Rn */
	IF(0x0C09B9A2u); { u32 t_ = r9; PR = 0x0C09B9A6u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C09B9A6u); }  /* 0C09B9A2 jsr @Rn */
L_0C09B9A6: BLKS(0x0C09B9A6u);
	IF(0x0C09B9A6u); T = (s32)r0 >= 0;  /* 0C09B9A6 cmp/pz Rn */
	{ u32 c_ = !T; r13 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C09B990u, 4); goto L_0C09B990; } goto L_0C09B9AC; }  /* 0C09B9A8 bf/s */
L_0C09B9AC: BLKS(0x0C09B9ACu);
	r2 = 0xB4u; UPD(0x0C09B9AEu, 2);  /* 0C09B9AC mov.w @(disp,pc),Rn */
	IF(0x0C09B9AEu); MACL = r11 * r2;  /* 0C09B9AE mul.l Rm,Rn */
	r1 = 0xC26CD40u; UPD(0x0C09B9B2u, 3);  /* 0C09B9B0 mov.l @(disp,pc),Rn */
	IF(0x0C09B9B2u); r8 = MACL;  /* 0C09B9B2 sts macl,Rn */
	IF(0x0C09B9B4u); MACL = r13 * r2;  /* 0C09B9B4 mul.l Rm,Rn */
	r8 += r1;  /* 0C09B9B6 add Rm,Rn */
	r4 = 0x84u; UPD(0x0C09B9BAu, 5);  /* 0C09B9B8 mov.w @(disp,pc),Rn */
	IF(0x0C09B9BAu); r9 = MACL;  /* 0C09B9BA sts macl,Rn */
	r0 = r8;  /* 0C09B9BC mov Rm,Rn */
	r9 += r1;  /* 0C09B9BE add Rm,Rn */
	r0 += r4;  /* 0C09B9C0 add Rm,Rn */
	r4 += r9;  /* 0C09B9C2 add Rm,Rn */
	r4 += 0x2u;  /* 0C09B9C4 add #imm,Rn */
	r10 = 0xC058060u; UPD(0x0C09B9C8u, 7);  /* 0C09B9C6 mov.l @(disp,pc),Rn */
	r0 += 0x2u;  /* 0C09B9C8 add #imm,Rn */
	r6 = (u32)(s32)(s16)R16(r4); UPD(0x0C09B9CCu, 2);  /* 0C09B9CA mov.w @Rm,Rn */
	r13 = 0x230000u; UPD(0x0C09B9CEu, 1);  /* 0C09B9CC mov.l @(disp,pc),Rn */
	r4 = r6;  /* 0C09B9CE mov Rm,Rn */
	W16(r0, r6); UPD(0x0C09B9D2u, 2);  /* 0C09B9D0 mov.w Rm,@Rn */
	r5 = r13;  /* 0C09B9D2 mov Rm,Rn */
	IF(0x0C09B9D4u); { u32 t_ = r10; PR = 0x0C09B9D8u; W32(r14 + 0x4u, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C09B9D8u); }  /* 0C09B9D4 jsr @Rn */
L_0C09B9D8: BLKS(0x0C09B9D8u);
	r5 = R32(r9 + 0x24u); UPD(0x0C09B9DAu, 1);  /* 0C09B9D8 mov.l @(disp,Rm),Rn */
	r12 = 0xC058030u; UPD(0x0C09B9DCu, 1);  /* 0C09B9DA mov.l @(disp,pc),Rn */
	r5 += r0;  /* 0C09B9DC add Rm,Rn */
	W32(r8 + 0x24u, r5); UPD(0x0C09B9E0u, 2);  /* 0C09B9DE mov.l Rm,@(disp,Rn) */
	r4 = R32(r14 + 0x4u); UPD(0x0C09B9E2u, 1);  /* 0C09B9E0 mov.l @(disp,Rm),Rn */
	IF(0x0C09B9E2u); { u32 t_ = r12; PR = 0x0C09B9E6u; r5 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C09B9E6u); }  /* 0C09B9E2 jsr @Rn */
L_0C09B9E6: BLKS(0x0C09B9E6u);
	r7 = R32(r9 + 0x28u); UPD(0x0C09B9E8u, 1);  /* 0C09B9E6 mov.l @(disp,Rm),Rn */
	r3 = r8;  /* 0C09B9E8 mov Rm,Rn */
	r1 = 0xA8u; UPD(0x0C09B9ECu, 2);  /* 0C09B9EA mov.w @(disp,pc),Rn */
	r7 += r0;  /* 0C09B9EC add Rm,Rn */
	r3 += r1;  /* 0C09B9EE add Rm,Rn */
	W32(r8 + 0x28u, r7); UPD(0x0C09B9F2u, 3);  /* 0C09B9F0 mov.l Rm,@(disp,Rn) */
	r3 += 0x1u;  /* 0C09B9F2 add #imm,Rn */
	r1 += r9;  /* 0C09B9F4 add Rm,Rn */
	r7 = 0xAFu; UPD(0x0C09B9F8u, 3);  /* 0C09B9F6 mov.w @(disp,pc),Rn */
	r1 += 0x1u;  /* 0C09B9F8 add #imm,Rn */
	r0 = r8;  /* 0C09B9FA mov Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r1); UPD(0x0C09B9FEu, 3);  /* 0C09B9FC mov.b @Rm,Rn */
	IF(0x0C09B9FEu); r4 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C09BA00u, 1);  /* 0C09B9FE mov.b @(r0,Rm),Rn */
	r6 += r4;  /* 0C09BA00 add Rm,Rn */
	W8(r3, r6); UPD(0x0C09BA04u, 2);  /* 0C09BA02 mov.b Rm,@Rn */
	r12 = R32(r8); UPD(0x0C09BA06u, 1);  /* 0C09BA04 mov.l @Rm,Rn */
	r3 = 0xECFFFFFFu; UPD(0x0C09BA08u, 1);  /* 0C09BA06 mov.l @(disp,pc),Rn */
	r12 &= r3;  /* 0C09BA08 and Rm,Rn */
	W32(r8, r12); UPD(0x0C09BA0Cu, 2);  /* 0C09BA0A mov.l Rm,@Rn */
	r5 = 0x13000000u; UPD(0x0C09BA0Eu, 1);  /* 0C09BA0C mov.l @(disp,pc),Rn */
	r13 = R32(r9); UPD(0x0C09BA10u, 1);  /* 0C09BA0E mov.l @Rm,Rn */
	r10 = R32(r9 + 0x38u); UPD(0x0C09BA12u, 1);  /* 0C09BA10 mov.l @(disp,Rm),Rn */
	r13 &= r5;  /* 0C09BA12 and Rm,Rn */
	r12 |= r13;  /* 0C09BA14 or Rm,Rn */
	W32(r8 + 0x38u, r10); UPD(0x0C09BA18u, 3);  /* 0C09BA16 mov.l Rm,@(disp,Rn) */
	W32(r8, r12); UPD(0x0C09BA1Au, 1);  /* 0C09BA18 mov.l Rm,@Rn */
	r0 = R32(r14 + 0x4u); UPD(0x0C09BA1Cu, 1);  /* 0C09BA1A mov.l @(disp,Rm),Rn */
	r0 += 0x4u;  /* 0C09BA1C add #imm,Rn */
	IF(0x0C09BA1Eu); r0 >>= 2;  /* 0C09BA1E shlr2 Rn */
	IF(0x0C09BA20u); T = r0 & 1; r0 >>= 1;  /* 0C09BA20 shlr Rn */
	{ r0 &= 0x3Fu; /* slot and #imm,r0 */ UPD(0x0C09ADA6u, 6); goto L_0C09ADA6; }  /* 0C09BA22 bra */
}

void f_0C09BA30(sh3_t *c)
{
	LOCALS;
	goto L_0C09BA30;
L_0C09ACF4: BLKS(0x0C09ACF4u);
	r14 += 0x3Cu;  /* 0C09ACF4 add #imm,Rn */
	r15 = r14;  /* 0C09ACF6 mov Rm,Rn */
	IF(0x0C09ACF8u); PR = R32(r15); r15 += 4; UPD(0x0C09ACFAu, 3);  /* 0C09ACF8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09ACFCu, 1);  /* 0C09ACFA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C09ACFEu, 1);  /* 0C09ACFC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09AD00u, 1);  /* 0C09ACFE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09AD02u, 1);  /* 0C09AD00 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09AD04u, 1);  /* 0C09AD02 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09AD06u, 1);  /* 0C09AD04 mov.l @Rm+,Rn */
	IF(0x0C09AD06u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09AD06 jmp @Rn */
L_0C09ADA6: BLKS(0x0C09ADA6u);
	W32(r8 + 0xCu, r0); UPD(0x0C09ADA8u, 1);  /* 0C09ADA6 mov.l Rm,@(disp,Rn) */
	r1 = 0xC0A0380u; UPD(0x0C09ADAAu, 1);  /* 0C09ADA8 mov.l @(disp,pc),Rn */
	{ r4 = r11; /* slot mov Rm,Rn */ UPD(0x0C09ACF4u, 3); goto L_0C09ACF4; }  /* 0C09ADAA bra */
L_0C09B990: BLKS(0x0C09B990u);
	r1 = 0xC0999E0u; UPD(0x0C09B992u, 1);  /* 0C09B990 mov.l @(disp,pc),Rn */
	{ r4 = r11; /* slot mov Rm,Rn */ UPD(0x0C09ACF4u, 3); goto L_0C09ACF4; }  /* 0C09B992 bra */
L_0C09B9F6: BLKS(0x0C09B9F6u);
	r7 = 0xAFu; UPD(0x0C09B9F8u, 1);  /* 0C09B9F6 mov.w @(disp,pc),Rn */
	r1 += 0x1u;  /* 0C09B9F8 add #imm,Rn */
	r0 = r8;  /* 0C09B9FA mov Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r1); UPD(0x0C09B9FEu, 3);  /* 0C09B9FC mov.b @Rm,Rn */
	IF(0x0C09B9FEu); r4 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C09BA00u, 1);  /* 0C09B9FE mov.b @(r0,Rm),Rn */
	r6 += r4;  /* 0C09BA00 add Rm,Rn */
	W8(r3, r6); UPD(0x0C09BA04u, 2);  /* 0C09BA02 mov.b Rm,@Rn */
	r12 = R32(r8); UPD(0x0C09BA06u, 1);  /* 0C09BA04 mov.l @Rm,Rn */
	r3 = 0xECFFFFFFu; UPD(0x0C09BA08u, 1);  /* 0C09BA06 mov.l @(disp,pc),Rn */
	r12 &= r3;  /* 0C09BA08 and Rm,Rn */
	W32(r8, r12); UPD(0x0C09BA0Cu, 2);  /* 0C09BA0A mov.l Rm,@Rn */
	r5 = 0x13000000u; UPD(0x0C09BA0Eu, 1);  /* 0C09BA0C mov.l @(disp,pc),Rn */
	r13 = R32(r9); UPD(0x0C09BA10u, 1);  /* 0C09BA0E mov.l @Rm,Rn */
	r10 = R32(r9 + 0x38u); UPD(0x0C09BA12u, 1);  /* 0C09BA10 mov.l @(disp,Rm),Rn */
	r13 &= r5;  /* 0C09BA12 and Rm,Rn */
	r12 |= r13;  /* 0C09BA14 or Rm,Rn */
	W32(r8 + 0x38u, r10); UPD(0x0C09BA18u, 3);  /* 0C09BA16 mov.l Rm,@(disp,Rn) */
	W32(r8, r12); UPD(0x0C09BA1Au, 1);  /* 0C09BA18 mov.l Rm,@Rn */
	r0 = R32(r14 + 0x4u); UPD(0x0C09BA1Cu, 1);  /* 0C09BA1A mov.l @(disp,Rm),Rn */
	r0 += 0x4u;  /* 0C09BA1C add #imm,Rn */
	IF(0x0C09BA1Eu); r0 >>= 2;  /* 0C09BA1E shlr2 Rn */
	IF(0x0C09BA20u); T = r0 & 1; r0 >>= 1;  /* 0C09BA20 shlr Rn */
	{ r0 &= 0x3Fu; /* slot and #imm,r0 */ UPD(0x0C09ADA6u, 6); goto L_0C09ADA6; }  /* 0C09BA22 bra */
L_0C09BA30: BLKS(0x0C09BA30u);
	r8 = 0xC0A0540u; UPD(0x0C09BA32u, 1);  /* 0C09BA30 mov.l @(disp,pc),Rn */
	IF(0x0C09BA32u); { u32 t_ = r8; PR = 0x0C09BA36u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0540, 0x0C0A0540u, 0x0C09BA36u); }  /* 0C09BA32 jsr @Rn */
L_0C09BA36: BLKS(0x0C09BA36u);
	IF(0x0C09BA36u); T = (s32)r0 >= 0;  /* 0C09BA36 cmp/pz Rn */
	{ u32 c_ = !T; r13 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C09B990u, 4); goto L_0C09B990; } goto L_0C09BA3C; }  /* 0C09BA38 bf/s */
L_0C09BA3C: BLKS(0x0C09BA3Cu);
	r9 = 0xB4u; UPD(0x0C09BA3Eu, 2);  /* 0C09BA3C mov.w @(disp,pc),Rn */
	IF(0x0C09BA3Eu); MACL = r11 * r9;  /* 0C09BA3E mul.l Rm,Rn */
	r12 = 0xC26CD40u; UPD(0x0C09BA42u, 3);  /* 0C09BA40 mov.l @(disp,pc),Rn */
	IF(0x0C09BA42u); r8 = MACL;  /* 0C09BA42 sts macl,Rn */
	r0 = 0x80u; UPD(0x0C09BA46u, 2);  /* 0C09BA44 mov.w @(disp,pc),Rn */
	r8 += r12;  /* 0C09BA46 add Rm,Rn */
	IF(0x0C09BA48u); r2 = (u32)(s32)(s16)R16(r0 + r8); UPD(0x0C09BA4Au, 2);  /* 0C09BA48 mov.w @(r0,Rm),Rn */
	IF(0x0C09BA4Au); MACL = r2 * r9;  /* 0C09BA4A mul.l Rm,Rn */
	r0 = 0x88u; UPD(0x0C09BA4Eu, 3);  /* 0C09BA4C mov.w @(disp,pc),Rn */
	IF(0x0C09BA4Eu); r9 = MACL;  /* 0C09BA4E sts macl,Rn */
	r9 += r12;  /* 0C09BA50 add Rm,Rn */
	IF(0x0C09BA52u); r7 = (u32)(s32)(s16)R16(r0 + r8); UPD(0x0C09BA54u, 3);  /* 0C09BA52 mov.w @(r0,Rm),Rn */
	IF(0x0C09BA54u); r4 = (u32)(s32)(s16)R16(r0 + r9); UPD(0x0C09BA56u, 1);  /* 0C09BA54 mov.w @(r0,Rm),Rn */
	r1 = 0x86u; UPD(0x0C09BA58u, 1);  /* 0C09BA56 mov.w @(disp,pc),Rn */
	r4 += r7;  /* 0C09BA58 add Rm,Rn */
	r0 = r8;  /* 0C09BA5A mov Rm,Rn */
	IF(0x0C09BA5Cu); W16(r0 + r1, r4); UPD(0x0C09BA5Eu, 3);  /* 0C09BA5C mov.w Rm,@(r0,Rn) */
	r0 = (u32)(s32)(s16)r4;  /* 0C09BA5E exts.w Rm,Rn */
	W32(r14 + 0x4u, r0); UPD(0x0C09BA62u, 2);  /* 0C09BA60 mov.l Rm,@(disp,Rn) */
	r4 = r0;  /* 0C09BA62 mov Rm,Rn */
	r0 = 0xC058060u; UPD(0x0C09BA66u, 2);  /* 0C09BA64 mov.l @(disp,pc),Rn */
	r10 = 0x380000u; UPD(0x0C09BA68u, 1);  /* 0C09BA66 mov.l @(disp,pc),Rn */
	IF(0x0C09BA68u); { u32 t_ = r0; PR = 0x0C09BA6Cu; r5 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C09BA6Cu); }  /* 0C09BA68 jsr @Rn */
L_0C09BA6C: BLKS(0x0C09BA6Cu);
	r5 = r10;  /* 0C09BA6C mov Rm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C09BA70u, 2);  /* 0C09BA6E mov.l @(disp,Rm),Rn */
	r10 = 0xC058030u; UPD(0x0C09BA72u, 1);  /* 0C09BA70 mov.l @(disp,pc),Rn */
	r6 += r0;  /* 0C09BA72 add Rm,Rn */
	W32(r8 + 0x24u, r6); UPD(0x0C09BA76u, 2);  /* 0C09BA74 mov.l Rm,@(disp,Rn) */
	IF(0x0C09BA76u); { u32 t_ = r10; PR = 0x0C09BA7Au; r4 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C09BA7Au); }  /* 0C09BA76 jsr @Rn */
L_0C09BA7A: BLKS(0x0C09BA7Au);
	r3 = R32(r9 + 0x28u); UPD(0x0C09BA7Cu, 1);  /* 0C09BA7A mov.l @(disp,Rm),Rn */
	r5 = 0xB4u; UPD(0x0C09BA7Eu, 1);  /* 0C09BA7C mov.w @(disp,pc),Rn */
	r3 += r0;  /* 0C09BA7E add Rm,Rn */
	IF(0x0C09BA80u); MACL = r13 * r5;  /* 0C09BA80 mul.l Rm,Rn */
	W32(r8 + 0x28u, r3); UPD(0x0C09BA84u, 4);  /* 0C09BA82 mov.l Rm,@(disp,Rn) */
	r7 = 0xA8u; UPD(0x0C09BA86u, 1);  /* 0C09BA84 mov.w @(disp,pc),Rn */
	r3 = r8;  /* 0C09BA86 mov Rm,Rn */
	IF(0x0C09BA88u); r1 = MACL;  /* 0C09BA88 sts macl,Rn */
	r3 += r7;  /* 0C09BA8A add Rm,Rn */
	r1 += r12;  /* 0C09BA8C add Rm,Rn */
	r3 += 0x1u;  /* 0C09BA8E add #imm,Rn */
	{ r1 += r7; /* slot add Rm,Rn */ UPD(0x0C09B9F6u, 8); goto L_0C09B9F6; }  /* 0C09BA90 bra */
}

void f_0C09BAD0(sh3_t *c)
{
	LOCALS;
	goto L_0C09BAD0;
L_0C09ACF6: BLKS(0x0C09ACF6u);
	r15 = r14;  /* 0C09ACF6 mov Rm,Rn */
	IF(0x0C09ACF8u); PR = R32(r15); r15 += 4; UPD(0x0C09ACFAu, 2);  /* 0C09ACF8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09ACFCu, 1);  /* 0C09ACFA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C09ACFEu, 1);  /* 0C09ACFC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09AD00u, 1);  /* 0C09ACFE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09AD02u, 1);  /* 0C09AD00 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09AD04u, 1);  /* 0C09AD02 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09AD06u, 1);  /* 0C09AD04 mov.l @Rm+,Rn */
	IF(0x0C09AD06u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09AD06 jmp @Rn */
L_0C09AD7C: BLKS(0x0C09AD7Cu);
	r14 += 0x3Cu;  /* 0C09AD7C add #imm,Rn */
	UPD(0x0C09AD7Eu, 1);
L_0C09AD7E: BLKS(0x0C09AD7Eu);
	r15 = r14;  /* 0C09AD7E mov Rm,Rn */
	IF(0x0C09AD80u); PR = R32(r15); r15 += 4; UPD(0x0C09AD82u, 2);  /* 0C09AD80 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09AD84u, 1);  /* 0C09AD82 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C09AD86u, 1);  /* 0C09AD84 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09AD88u, 1);  /* 0C09AD86 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09AD8Au, 1);  /* 0C09AD88 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09AD8Cu, 1);  /* 0C09AD8A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09AD8Eu, 1);  /* 0C09AD8C mov.l @Rm+,Rn */
	IF(0x0C09AD8Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C09AD8E rts */
L_0C09AE10: BLKS(0x0C09AE10u);
	r0 = 0xB4u; UPD(0x0C09AE12u, 1);  /* 0C09AE10 mov.w @(disp,pc),Rn */
	r5 = 0x0u;  /* 0C09AE12 mov #imm,Rn */
	IF(0x0C09AE14u); MACL = r11 * r0;  /* 0C09AE14 mul.l Rm,Rn */
	r11 = 0xC26CD40u; UPD(0x0C09AE18u, 4);  /* 0C09AE16 mov.l @(disp,pc),Rn */
	IF(0x0C09AE18u); r0 = MACL;  /* 0C09AE18 sts macl,Rn */
	{ IF(0x0C09AE1Cu); W32(r0 + r11, r5); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C09AD7Cu, 4); goto L_0C09AD7C; }  /* 0C09AE1A bra */
L_0C09B430: BLKS(0x0C09B430u);
	r1 = 0xC0AFC10u; UPD(0x0C09B432u, 1);  /* 0C09B430 mov.l @(disp,pc),Rn */
	{ r14 += 0x3Cu; /* slot add #imm,Rn */ UPD(0x0C09ACF6u, 3); goto L_0C09ACF6; }  /* 0C09B432 bra */
L_0C09BAD0: BLKS(0x0C09BAD0u);
	r8 = 0xC0A03F0u; UPD(0x0C09BAD2u, 1);  /* 0C09BAD0 mov.l @(disp,pc),Rn */
	IF(0x0C09BAD2u); { u32 t_ = r8; PR = 0x0C09BAD6u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C09BAD6u); }  /* 0C09BAD2 jsr @Rn */
L_0C09BAD6: BLKS(0x0C09BAD6u);
	IF(0x0C09BAD6u); T = (s32)r0 >= 0;  /* 0C09BAD6 cmp/pz Rn */
	if (T) { UPD(0x0C09BADEu, 4); goto L_0C09BADE; }  /* 0C09BAD8 bt */
L_0C09BADA: BLKS(0x0C09BADAu);
	{ IF(0x0C09BADCu); ; /* slot nop */ UPD(0x0C09AE10u, 3); goto L_0C09AE10; }  /* 0C09BADA bra */
L_0C09BADE: BLKS(0x0C09BADEu);
	r2 = 0xB4u; UPD(0x0C09BAE0u, 1);  /* 0C09BADE mov.w @(disp,pc),Rn */
	IF(0x0C09BAE0u); MACL = r11 * r2;  /* 0C09BAE0 mul.l Rm,Rn */
	r1 = 0xB4u; UPD(0x0C09BAE4u, 3);  /* 0C09BAE2 mov.w @(disp,pc),Rn */
	IF(0x0C09BAE4u); r6 = MACL;  /* 0C09BAE4 sts macl,Rn */
	IF(0x0C09BAE6u); MACL = r0 * r1;  /* 0C09BAE6 mul.l Rm,Rn */
	r12 = 0xC26CD40u; UPD(0x0C09BAEAu, 4);  /* 0C09BAE8 mov.l @(disp,pc),Rn */
	r2 += 0xFFFFFFD0u;  /* 0C09BAEA add #imm,Rn */
	r6 += r12;  /* 0C09BAEC add Rm,Rn */
	IF(0x0C09BAEEu); r9 = MACL;  /* 0C09BAEE sts macl,Rn */
	r5 = r6;  /* 0C09BAF0 mov Rm,Rn */
	r9 += r12;  /* 0C09BAF2 add Rm,Rn */
	r5 += r2;  /* 0C09BAF4 add Rm,Rn */
	r3 = 0x88u; UPD(0x0C09BAF8u, 7);  /* 0C09BAF6 mov.w @(disp,pc),Rn */
	r2 += r9;  /* 0C09BAF8 add Rm,Rn */
	r3 += r6;  /* 0C09BAFA add Rm,Rn */
	r2 += 0x2u;  /* 0C09BAFC add #imm,Rn */
	r13 = (u32)(s32)(s16)R16(r2); UPD(0x0C09BB00u, 4);  /* 0C09BAFE mov.w @Rm,Rn */
	r5 += 0x2u;  /* 0C09BB00 add #imm,Rn */
	r8 = (u32)(s32)(s16)R16(r3); UPD(0x0C09BB04u, 2);  /* 0C09BB02 mov.w @Rm,Rn */
	r8 += r13;  /* 0C09BB04 add Rm,Rn */
	W16(r5, r8); UPD(0x0C09BB08u, 2);  /* 0C09BB06 mov.w Rm,@Rn */
	r13 = (u32)(s32)(s16)r8;  /* 0C09BB08 exts.w Rm,Rn */
	r0 = R32(r6 + 0x2Cu); UPD(0x0C09BB0Cu, 2);  /* 0C09BB0A mov.l @(disp,Rm),Rn */
	r4 = r13;  /* 0C09BB0C mov Rm,Rn */
	r8 = R32(r9 + 0x24u); UPD(0x0C09BB10u, 2);  /* 0C09BB0E mov.l @(disp,Rm),Rn */
	r8 += r0;  /* 0C09BB10 add Rm,Rn */
	r0 = 0xC058060u; UPD(0x0C09BB14u, 2);  /* 0C09BB12 mov.l @(disp,pc),Rn */
	r10 = 0x300000u; UPD(0x0C09BB16u, 1);  /* 0C09BB14 mov.l @(disp,pc),Rn */
	W32(r14 + 0x20u, r3); UPD(0x0C09BB18u, 1);  /* 0C09BB16 mov.l Rm,@(disp,Rn) */
	r5 = r10;  /* 0C09BB18 mov Rm,Rn */
	IF(0x0C09BB1Au); { u32 t_ = r0; PR = 0x0C09BB1Eu; W32(r14 + 0x38u, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C09BB1Eu); }  /* 0C09BB1A jsr @Rn */
L_0C09BB1E: BLKS(0x0C09BB1Eu);
	r7 = R32(r14 + 0x38u); UPD(0x0C09BB20u, 1);  /* 0C09BB1E mov.l @(disp,Rm),Rn */
	r8 += r0;  /* 0C09BB20 add Rm,Rn */
	W32(r7 + 0x24u, r8); UPD(0x0C09BB24u, 2);  /* 0C09BB22 mov.l Rm,@(disp,Rn) */
	r5 = r10;  /* 0C09BB24 mov Rm,Rn */
	r4 = R32(r7 + 0x30u); UPD(0x0C09BB28u, 2);  /* 0C09BB26 mov.l @(disp,Rm),Rn */
	r8 = R32(r9 + 0x28u); UPD(0x0C09BB2Au, 1);  /* 0C09BB28 mov.l @(disp,Rm),Rn */
	r10 = 0xC058030u; UPD(0x0C09BB2Cu, 1);  /* 0C09BB2A mov.l @(disp,pc),Rn */
	r8 += r4;  /* 0C09BB2C add Rm,Rn */
	IF(0x0C09BB2Eu); { u32 t_ = r10; PR = 0x0C09BB32u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C09BB32u); }  /* 0C09BB2E jsr @Rn */
L_0C09BB32: BLKS(0x0C09BB32u);
	r2 = 0xA8u; UPD(0x0C09BB34u, 1);  /* 0C09BB32 mov.w @(disp,pc),Rn */
	r8 += r0;  /* 0C09BB34 add Rm,Rn */
	r9 += r2;  /* 0C09BB36 add Rm,Rn */
	r9 += 0x1u;  /* 0C09BB38 add #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r9); UPD(0x0C09BB3Cu, 4);  /* 0C09BB3A mov.b @Rm,Rn */
	r4 = r11;  /* 0C09BB3C mov Rm,Rn */
	r5 = R32(r14 + 0x38u); UPD(0x0C09BB40u, 2);  /* 0C09BB3E mov.l @(disp,Rm),Rn */
	r9 = 0xAFu; UPD(0x0C09BB42u, 1);  /* 0C09BB40 mov.w @(disp,pc),Rn */
	r0 = r5;  /* 0C09BB42 mov Rm,Rn */
	IF(0x0C09BB44u); r1 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C09BB46u, 2);  /* 0C09BB44 mov.b @(r0,Rm),Rn */
	r6 = r5;  /* 0C09BB46 mov Rm,Rn */
	r0 = r13;  /* 0C09BB48 mov Rm,Rn */
	r0 += 0x4u;  /* 0C09BB4A add #imm,Rn */
	IF(0x0C09BB4Cu); r0 >>= 2;  /* 0C09BB4C shlr2 Rn */
	IF(0x0C09BB4Eu); T = r0 & 1; r0 >>= 1;  /* 0C09BB4E shlr Rn */
	r0 &= 0x3Fu;  /* 0C09BB50 and #imm,r0 */
	W32(r5 + 0xCu, r0); UPD(0x0C09BB54u, 7);  /* 0C09BB52 mov.l Rm,@(disp,Rn) */
	r6 += r2;  /* 0C09BB54 add Rm,Rn */
	r3 += r1;  /* 0C09BB56 add Rm,Rn */
	r6 += 0x1u;  /* 0C09BB58 add #imm,Rn */
	r0 = 0xC0A0380u; UPD(0x0C09BB5Cu, 4);  /* 0C09BB5A mov.l @(disp,pc),Rn */
	W8(r6, r3); UPD(0x0C09BB5Eu, 1);  /* 0C09BB5C mov.b Rm,@Rn */
	W32(r5 + 0x28u, r8); UPD(0x0C09BB60u, 1);  /* 0C09BB5E mov.l Rm,@(disp,Rn) */
	IF(0x0C09BB60u); { u32 t_ = r0; PR = 0x0C09BB64u; W32(r14 + 0x38u, r5); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C09BB64u); }  /* 0C09BB60 jsr @Rn */
L_0C09BB64: BLKS(0x0C09BB64u);
	r6 = R32(r14 + 0x38u); UPD(0x0C09BB66u, 1);  /* 0C09BB64 mov.l @(disp,Rm),Rn */
	r6 += 0x7Eu;  /* 0C09BB66 add #imm,Rn */
	r7 = (u32)(s32)(s16)R16(r6); UPD(0x0C09BB6Au, 2);  /* 0C09BB68 mov.w @Rm,Rn */
	r4 = 0xB4u; UPD(0x0C09BB6Cu, 1);  /* 0C09BB6A mov.w @(disp,pc),Rn */
	r6 += 0xFFFFFF82u;  /* 0C09BB6C add #imm,Rn */
	IF(0x0C09BB6Eu); MACL = r7 * r4;  /* 0C09BB6E mul.l Rm,Rn */
	r5 = R32(r6); UPD(0x0C09BB72u, 4);  /* 0C09BB70 mov.l @Rm,Rn */
	r8 = 0xECFFFFFFu; UPD(0x0C09BB74u, 1);  /* 0C09BB72 mov.l @(disp,pc),Rn */
	IF(0x0C09BB74u); r13 = MACL;  /* 0C09BB74 sts macl,Rn */
	r0 = 0x80u; UPD(0x0C09BB78u, 2);  /* 0C09BB76 mov.w @(disp,pc),Rn */
	r5 &= r8;  /* 0C09BB78 and Rm,Rn */
	W32(r6, r5); UPD(0x0C09BB7Cu, 2);  /* 0C09BB7A mov.l Rm,@Rn */
	r13 += r12;  /* 0C09BB7C add Rm,Rn */
	IF(0x0C09BB7Eu); r9 = (u32)(s32)(s16)R16(r0 + r6); UPD(0x0C09BB80u, 2);  /* 0C09BB7E mov.w @(r0,Rm),Rn */
	r1 = 0xB4u; UPD(0x0C09BB82u, 1);  /* 0C09BB80 mov.w @(disp,pc),Rn */
	r2 = R32(r13 + 0x38u); UPD(0x0C09BB84u, 1);  /* 0C09BB82 mov.l @(disp,Rm),Rn */
	IF(0x0C09BB84u); MACL = r9 * r1;  /* 0C09BB84 mul.l Rm,Rn */
	r3 = R32(r13); UPD(0x0C09BB88u, 3);  /* 0C09BB86 mov.l @Rm,Rn */
	r10 = 0x13000000u; UPD(0x0C09BB8Au, 1);  /* 0C09BB88 mov.l @(disp,pc),Rn */
	W32(r6 + 0x38u, r2); UPD(0x0C09BB8Cu, 1);  /* 0C09BB8A mov.l Rm,@(disp,Rn) */
	r3 &= r10;  /* 0C09BB8C and Rm,Rn */
	r5 |= r3;  /* 0C09BB8E or Rm,Rn */
	IF(0x0C09BB90u); r2 = MACL;  /* 0C09BB90 sts macl,Rn */
	r2 += r12;  /* 0C09BB92 add Rm,Rn */
	r3 = 0xA0u; UPD(0x0C09BB96u, 5);  /* 0C09BB94 mov.w @(disp,pc),Rn */
	r0 = r2;  /* 0C09BB96 mov Rm,Rn */
	r0 += r3;  /* 0C09BB98 add Rm,Rn */
	r0 += 0x2u;  /* 0C09BB9A add #imm,Rn */
	r7 = (u32)(s32)(s8)R8(r0); UPD(0x0C09BB9Eu, 4);  /* 0C09BB9C mov.b @Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C09BB9E tst Rm,Rn */
	{ u32 c_ = T; W32(r6, r5); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C09BBB6u, 4); goto L_0C09BBB6; } UPD(0x0C09BBA4u, 1); goto L_0C09BBA4; }  /* 0C09BBA0 bt/s */
L_0C09BBA4: BLKS(0x0C09BBA4u);
	r9 = r3;  /* 0C09BBA4 mov Rm,Rn */
	r9 += r6;  /* 0C09BBA6 add Rm,Rn */
	r9 += 0x1u;  /* 0C09BBA8 add #imm,Rn */
	r2 += 0x64u;  /* 0C09BBAA add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C09BBAEu, 5);  /* 0C09BBAC mov.b @Rm,Rn */
	r12 = R32(r2); UPD(0x0C09BBB0u, 1);  /* 0C09BBAE mov.l @Rm,Rn */
	r0 |= 0x80u;  /* 0C09BBB0 or #imm,r0 */
	T = (r12 & r0) == 0;  /* 0C09BBB2 tst Rm,Rn */
	if (!T) { UPD(0x0C09BBBAu, 5); goto L_0C09BBBA; }  /* 0C09BBB4 bf */
L_0C09BBB6: BLKS(0x0C09BBB6u);
	{ r14 += 0x3Cu; /* slot add #imm,Rn */ UPD(0x0C09AD7Eu, 3); goto L_0C09AD7E; }  /* 0C09BBB6 bra */
L_0C09BBBA: BLKS(0x0C09BBBAu);
	r8 = 0x9Au; UPD(0x0C09BBBCu, 1);  /* 0C09BBBA mov.w @(disp,pc),Rn */
	r0 = r6;  /* 0C09BBBC mov Rm,Rn */
	IF(0x0C09BBBEu); W8(r0 + r8, r7); UPD(0x0C09BBC0u, 2);  /* 0C09BBBE mov.b Rm,@(r0,Rn) */
	r0 = R32(r14 + 0x20u); UPD(0x0C09BBC2u, 1);  /* 0C09BBC0 mov.l @(disp,Rm),Rn */
	r7 = 0x1u;  /* 0C09BBC2 mov #imm,Rn */
	r0 += 0x2u;  /* 0C09BBC4 add #imm,Rn */
	W32(r14 + 0x20u, r0); UPD(0x0C09BBC8u, 3);  /* 0C09BBC6 mov.l Rm,@(disp,Rn) */
	r4 = R32(r14 + 0x20u); UPD(0x0C09BBCAu, 1);  /* 0C09BBC8 mov.l @(disp,Rm),Rn */
	W16(r4, r7); UPD(0x0C09BBCCu, 1);  /* 0C09BBCA mov.w Rm,@Rn */
	r4 = r11;  /* 0C09BBCC mov Rm,Rn */
	r10 = R32(r6 + 0x8u); UPD(0x0C09BBD0u, 2);  /* 0C09BBCE mov.l @(disp,Rm),Rn */
	r11 = 0xC0A03B0u; UPD(0x0C09BBD2u, 1);  /* 0C09BBD0 mov.l @(disp,pc),Rn */
	r10 += 0x1u;  /* 0C09BBD2 add #imm,Rn */
	IF(0x0C09BBD4u); { u32 t_ = r11; PR = 0x0C09BBD8u; W32(r6 + 0x8u, r10); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C0A03B0, 0x0C0A03B0u, 0x0C09BBD8u); }  /* 0C09BBD4 jsr @Rn */
L_0C09BBD8: BLKS(0x0C09BBD8u);
	{ r4 = 0x73u; /* slot mov #imm,Rn */ UPD(0x0C09B430u, 3); goto L_0C09B430; }  /* 0C09BBD8 bra */
}

void f_0C09BC10(sh3_t *c)
{
	LOCALS;
	goto L_0C09BC10;
L_0C09AD7C: BLKS(0x0C09AD7Cu);
	r14 += 0x3Cu;  /* 0C09AD7C add #imm,Rn */
	r15 = r14;  /* 0C09AD7E mov Rm,Rn */
	IF(0x0C09AD80u); PR = R32(r15); r15 += 4; UPD(0x0C09AD82u, 3);  /* 0C09AD80 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09AD84u, 1);  /* 0C09AD82 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C09AD86u, 1);  /* 0C09AD84 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09AD88u, 1);  /* 0C09AD86 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09AD8Au, 1);  /* 0C09AD88 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09AD8Cu, 1);  /* 0C09AD8A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09AD8Eu, 1);  /* 0C09AD8C mov.l @Rm+,Rn */
	IF(0x0C09AD8Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C09AD8E rts */
L_0C09AE10: BLKS(0x0C09AE10u);
	r0 = 0xB4u; UPD(0x0C09AE12u, 1);  /* 0C09AE10 mov.w @(disp,pc),Rn */
	r5 = 0x0u;  /* 0C09AE12 mov #imm,Rn */
	IF(0x0C09AE14u); MACL = r11 * r0;  /* 0C09AE14 mul.l Rm,Rn */
	r11 = 0xC26CD40u; UPD(0x0C09AE18u, 4);  /* 0C09AE16 mov.l @(disp,pc),Rn */
	IF(0x0C09AE18u); r0 = MACL;  /* 0C09AE18 sts macl,Rn */
	{ IF(0x0C09AE1Cu); W32(r0 + r11, r5); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C09AD7Cu, 4); goto L_0C09AD7C; }  /* 0C09AE1A bra */
L_0C09BC10: BLKS(0x0C09BC10u);
	r13 = 0xC0A03F0u; UPD(0x0C09BC12u, 1);  /* 0C09BC10 mov.l @(disp,pc),Rn */
	IF(0x0C09BC12u); { u32 t_ = r13; PR = 0x0C09BC16u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C09BC16u); }  /* 0C09BC12 jsr @Rn */
L_0C09BC16: BLKS(0x0C09BC16u);
	IF(0x0C09BC16u); T = (s32)r0 >= 0;  /* 0C09BC16 cmp/pz Rn */
	if (!T) { UPD(0x0C09BCFCu, 4); goto L_0C09BCFC; }  /* 0C09BC18 bf */
L_0C09BC1A: BLKS(0x0C09BC1Au);
	r12 = 0xB4u; UPD(0x0C09BC1Cu, 1);  /* 0C09BC1A mov.w @(disp,pc),Rn */
	IF(0x0C09BC1Cu); MACL = r11 * r12;  /* 0C09BC1C mul.l Rm,Rn */
	r10 = 0xC26CD40u; UPD(0x0C09BC20u, 3);  /* 0C09BC1E mov.l @(disp,pc),Rn */
	IF(0x0C09BC20u); r6 = MACL;  /* 0C09BC20 sts macl,Rn */
	IF(0x0C09BC22u); MACL = r0 * r12;  /* 0C09BC22 mul.l Rm,Rn */
	r6 += r10;  /* 0C09BC24 add Rm,Rn */
	r2 = 0x84u; UPD(0x0C09BC28u, 5);  /* 0C09BC26 mov.w @(disp,pc),Rn */
	IF(0x0C09BC28u); r9 = MACL;  /* 0C09BC28 sts macl,Rn */
	r8 = r6;  /* 0C09BC2A mov Rm,Rn */
	r9 += r10;  /* 0C09BC2C add Rm,Rn */
	r8 += r2;  /* 0C09BC2E add Rm,Rn */
	r5 = 0x88u; UPD(0x0C09BC32u, 5);  /* 0C09BC30 mov.w @(disp,pc),Rn */
	r2 += r9;  /* 0C09BC32 add Rm,Rn */
	r5 += r6;  /* 0C09BC34 add Rm,Rn */
	r2 += 0x2u;  /* 0C09BC36 add #imm,Rn */
	r13 = (u32)(s32)(s16)R16(r2); UPD(0x0C09BC3Au, 4);  /* 0C09BC38 mov.w @Rm,Rn */
	r8 += 0x2u;  /* 0C09BC3A add #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r5); UPD(0x0C09BC3Eu, 2);  /* 0C09BC3C mov.w @Rm,Rn */
	r0 += r13;  /* 0C09BC3E add Rm,Rn */
	W16(r8, r0); UPD(0x0C09BC42u, 2);  /* 0C09BC40 mov.w Rm,@Rn */
	r13 = (u32)(s32)(s16)r0;  /* 0C09BC42 exts.w Rm,Rn */
	r0 = 0xC058060u; UPD(0x0C09BC46u, 2);  /* 0C09BC44 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C09BC46 mov Rm,Rn */
	r7 = R32(r6 + 0x2Cu); UPD(0x0C09BC4Au, 2);  /* 0C09BC48 mov.l @(disp,Rm),Rn */
	r8 = R32(r9 + 0x24u); UPD(0x0C09BC4Cu, 1);  /* 0C09BC4A mov.l @(disp,Rm),Rn */
	r10 = 0x300000u; UPD(0x0C09BC4Eu, 1);  /* 0C09BC4C mov.l @(disp,pc),Rn */
	r8 += r7;  /* 0C09BC4E add Rm,Rn */
	W32(r14 + 0x24u, r5); UPD(0x0C09BC52u, 2);  /* 0C09BC50 mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x38u, r6); UPD(0x0C09BC54u, 1);  /* 0C09BC52 mov.l Rm,@(disp,Rn) */
	IF(0x0C09BC54u); { u32 t_ = r0; PR = 0x0C09BC58u; r5 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C09BC58u); }  /* 0C09BC54 jsr @Rn */
L_0C09BC58: BLKS(0x0C09BC58u);
	r1 = R32(r14 + 0x38u); UPD(0x0C09BC5Au, 1);  /* 0C09BC58 mov.l @(disp,Rm),Rn */
	r8 += r0;  /* 0C09BC5A add Rm,Rn */
	W32(r1 + 0x24u, r8); UPD(0x0C09BC5Eu, 2);  /* 0C09BC5C mov.l Rm,@(disp,Rn) */
	r5 = r10;  /* 0C09BC5E mov Rm,Rn */
	r4 = R32(r1 + 0x30u); UPD(0x0C09BC62u, 2);  /* 0C09BC60 mov.l @(disp,Rm),Rn */
	r8 = R32(r9 + 0x28u); UPD(0x0C09BC64u, 1);  /* 0C09BC62 mov.l @(disp,Rm),Rn */
	r10 = 0xC058030u; UPD(0x0C09BC66u, 1);  /* 0C09BC64 mov.l @(disp,pc),Rn */
	r8 += r4;  /* 0C09BC66 add Rm,Rn */
	IF(0x0C09BC68u); { u32 t_ = r10; PR = 0x0C09BC6Cu; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C09BC6Cu); }  /* 0C09BC68 jsr @Rn */
L_0C09BC6C: BLKS(0x0C09BC6Cu);
	r2 = 0xA8u; UPD(0x0C09BC6Eu, 1);  /* 0C09BC6C mov.w @(disp,pc),Rn */
	r8 += r0;  /* 0C09BC6E add Rm,Rn */
	r9 += r2;  /* 0C09BC70 add Rm,Rn */
	r5 = R32(r14 + 0x38u); UPD(0x0C09BC74u, 3);  /* 0C09BC72 mov.l @(disp,Rm),Rn */
	r9 += 0x1u;  /* 0C09BC74 add #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r9); UPD(0x0C09BC78u, 2);  /* 0C09BC76 mov.b @Rm,Rn */
	r0 = r5;  /* 0C09BC78 mov Rm,Rn */
	r10 = 0xAFu; UPD(0x0C09BC7Cu, 2);  /* 0C09BC7A mov.w @(disp,pc),Rn */
	r6 = r5;  /* 0C09BC7C mov Rm,Rn */
	IF(0x0C09BC7Eu); r9 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C09BC80u, 2);  /* 0C09BC7E mov.b @(r0,Rm),Rn */
	r6 += r2;  /* 0C09BC80 add Rm,Rn */
	r0 = r13;  /* 0C09BC82 mov Rm,Rn */
	r0 += 0x4u;  /* 0C09BC84 add #imm,Rn */
	r3 += r9;  /* 0C09BC86 add Rm,Rn */
	r6 += 0x1u;  /* 0C09BC88 add #imm,Rn */
	IF(0x0C09BC8Au); r0 >>= 2;  /* 0C09BC8A shlr2 Rn */
	r13 = 0xC0A0380u; UPD(0x0C09BC8Eu, 7);  /* 0C09BC8C mov.l @(disp,pc),Rn */
	IF(0x0C09BC8Eu); T = r0 & 1; r0 >>= 1;  /* 0C09BC8E shlr Rn */
	W8(r6, r3); UPD(0x0C09BC92u, 2);  /* 0C09BC90 mov.b Rm,@Rn */
	r0 &= 0x3Fu;  /* 0C09BC92 and #imm,r0 */
	W32(r5 + 0x28u, r8); UPD(0x0C09BC96u, 2);  /* 0C09BC94 mov.l Rm,@(disp,Rn) */
	r4 = r11;  /* 0C09BC96 mov Rm,Rn */
	W32(r5 + 0xCu, r0); UPD(0x0C09BC9Au, 2);  /* 0C09BC98 mov.l Rm,@(disp,Rn) */
	IF(0x0C09BC9Au); { u32 t_ = r13; PR = 0x0C09BC9Eu; W32(r14 + 0x38u, r5); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C09BC9Eu); }  /* 0C09BC9A jsr @Rn */
L_0C09BC9E: BLKS(0x0C09BC9Eu);
	r6 = R32(r14 + 0x38u); UPD(0x0C09BCA0u, 1);  /* 0C09BC9E mov.l @(disp,Rm),Rn */
	r5 = 0x6u;  /* 0C09BCA0 mov #imm,Rn */
	r6 += 0x7Eu;  /* 0C09BCA2 add #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r6); UPD(0x0C09BCA6u, 3);  /* 0C09BCA4 mov.w @Rm,Rn */
	r6 += 0xFFFFFF82u;  /* 0C09BCA6 add #imm,Rn */
	r10 = R32(r6); UPD(0x0C09BCAAu, 2);  /* 0C09BCA8 mov.l @Rm,Rn */
	IF(0x0C09BCAAu); MACL = r0 * r12;  /* 0C09BCAA mul.l Rm,Rn */
	r8 = 0xECFFFFFFu; UPD(0x0C09BCAEu, 3);  /* 0C09BCAC mov.l @(disp,pc),Rn */
	r7 = 0xC26CD40u; UPD(0x0C09BCB0u, 1);  /* 0C09BCAE mov.l @(disp,pc),Rn */
	r10 &= r8;  /* 0C09BCB0 and Rm,Rn */
	W32(r6, r10); UPD(0x0C09BCB4u, 2);  /* 0C09BCB2 mov.l Rm,@Rn */
	IF(0x0C09BCB4u); r9 = MACL;  /* 0C09BCB4 sts macl,Rn */
	r9 += r7;  /* 0C09BCB6 add Rm,Rn */
	r0 = 0x99u; UPD(0x0C09BCBAu, 3);  /* 0C09BCB8 mov.w @(disp,pc),Rn */
	r4 = R32(r9); UPD(0x0C09BCBCu, 1);  /* 0C09BCBA mov.l @Rm,Rn */
	r1 = 0x13000000u; UPD(0x0C09BCBEu, 1);  /* 0C09BCBC mov.l @(disp,pc),Rn */
	IF(0x0C09BCBEu); r2 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C09BCC0u, 1);  /* 0C09BCBE mov.b @(r0,Rm),Rn */
	r4 &= r1;  /* 0C09BCC0 and Rm,Rn */
	r12 = R32(r9 + 0x38u); UPD(0x0C09BCC4u, 2);  /* 0C09BCC2 mov.l @(disp,Rm),Rn */
	r2 += 0x1u;  /* 0C09BCC4 add #imm,Rn */
	r10 |= r4;  /* 0C09BCC6 or Rm,Rn */
	r3 = r2 & 0xFF;  /* 0C09BCC8 extu.b Rm,Rn */
	W32(r6, r10); UPD(0x0C09BCCCu, 4);  /* 0C09BCCA mov.l Rm,@Rn */
	T = r3 > r5;  /* 0C09BCCC cmp/hi Rm,Rn */
	W32(r6 + 0x38u, r12); UPD(0x0C09BCD0u, 2);  /* 0C09BCCE mov.l Rm,@(disp,Rn) */
	{ u32 c_ = !T; IF(0x0C09BCD2u); W8(r0 + r6, r2); /* slot mov.b Rm,@(r0,Rn) */ if (c_) { UPD(0x0C09BCE6u, 3); goto L_0C09BCE6; } UPD(0x0C09BCD4u, 1); goto L_0C09BCD4; }  /* 0C09BCD0 bf/s */
L_0C09BCD4: BLKS(0x0C09BCD4u);
	r9 = 0x0u;  /* 0C09BCD4 mov #imm,Rn */
	IF(0x0C09BCD6u); W8(r0 + r6, r9); UPD(0x0C09BCD8u, 2);  /* 0C09BCD6 mov.b Rm,@(r0,Rn) */
	r3 = R32(r14 + 0x24u); UPD(0x0C09BCDAu, 1);  /* 0C09BCD8 mov.l @(disp,Rm),Rn */
	r3 += 0x2u;  /* 0C09BCDA add #imm,Rn */
	r12 = (u32)(s32)(s16)R16(r3); UPD(0x0C09BCDEu, 2);  /* 0C09BCDC mov.w @Rm,Rn */
	r1 = R32(r6 + 0x8u); UPD(0x0C09BCE0u, 1);  /* 0C09BCDE mov.l @(disp,Rm),Rn */
	W32(r14 + 0x24u, r3); UPD(0x0C09BCE2u, 1);  /* 0C09BCE0 mov.l Rm,@(disp,Rn) */
	r1 += r12;  /* 0C09BCE2 add Rm,Rn */
	W32(r6 + 0x8u, r1); UPD(0x0C09BCE6u, 2);  /* 0C09BCE4 mov.l Rm,@(disp,Rn) */
L_0C09BCE6: BLKS(0x0C09BCE6u);
	r1 = 0xC0A03B0u; UPD(0x0C09BCE8u, 1);  /* 0C09BCE6 mov.l @(disp,pc),Rn */
	r13 = 0xFFFFF006u; UPD(0x0C09BCEAu, 1);  /* 0C09BCE8 mov.w @(disp,pc),Rn */
	IF(0x0C09BCEAu); { u32 tv_ = (r13 + 0x0C09BCEEu); u32 t_ = PHYS(tv_); r4 = r11; /* slot mov Rm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09BCEA braf Rn */
L_0C09BCFC: BLKS(0x0C09BCFCu);
	{ IF(0x0C09BCFEu); ; /* slot nop */ UPD(0x0C09AE10u, 3); goto L_0C09AE10; }  /* 0C09BCFC bra */
}

void f_0C09BCE6(sh3_t *c)
{
	LOCALS;
L_0C09BCE6: BLKS(0x0C09BCE6u);
	r1 = 0xC0A03B0u; UPD(0x0C09BCE8u, 1);  /* 0C09BCE6 mov.l @(disp,pc),Rn */
	r13 = 0xFFFFF006u; UPD(0x0C09BCEAu, 1);  /* 0C09BCE8 mov.w @(disp,pc),Rn */
	IF(0x0C09BCEAu); { u32 tv_ = (r13 + 0x0C09BCEEu); u32 t_ = PHYS(tv_); r4 = r11; /* slot mov Rm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09BCEA braf Rn */
}

void f_0C09BCF0(sh3_t *c)
{
	LOCALS;
	goto L_0C09BCF0;
L_0C09AD7C: BLKS(0x0C09AD7Cu);
	r14 += 0x3Cu;  /* 0C09AD7C add #imm,Rn */
	r15 = r14;  /* 0C09AD7E mov Rm,Rn */
	IF(0x0C09AD80u); PR = R32(r15); r15 += 4; UPD(0x0C09AD82u, 3);  /* 0C09AD80 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09AD84u, 1);  /* 0C09AD82 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C09AD86u, 1);  /* 0C09AD84 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09AD88u, 1);  /* 0C09AD86 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09AD8Au, 1);  /* 0C09AD88 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09AD8Cu, 1);  /* 0C09AD8A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09AD8Eu, 1);  /* 0C09AD8C mov.l @Rm+,Rn */
	IF(0x0C09AD8Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C09AD8E rts */
L_0C09AE10: BLKS(0x0C09AE10u);
	r0 = 0xB4u; UPD(0x0C09AE12u, 1);  /* 0C09AE10 mov.w @(disp,pc),Rn */
	r5 = 0x0u;  /* 0C09AE12 mov #imm,Rn */
	IF(0x0C09AE14u); MACL = r11 * r0;  /* 0C09AE14 mul.l Rm,Rn */
	r11 = 0xC26CD40u; UPD(0x0C09AE18u, 4);  /* 0C09AE16 mov.l @(disp,pc),Rn */
	IF(0x0C09AE18u); r0 = MACL;  /* 0C09AE18 sts macl,Rn */
	{ IF(0x0C09AE1Cu); W32(r0 + r11, r5); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C09AD7Cu, 4); goto L_0C09AD7C; }  /* 0C09AE1A bra */
L_0C09BCE4: BLKS(0x0C09BCE4u);
	W32(r6 + 0x8u, r1); UPD(0x0C09BCE6u, 1);  /* 0C09BCE4 mov.l Rm,@(disp,Rn) */
	r1 = 0xC0A03B0u; UPD(0x0C09BCE8u, 1);  /* 0C09BCE6 mov.l @(disp,pc),Rn */
	r13 = 0xFFFFF006u; UPD(0x0C09BCEAu, 1);  /* 0C09BCE8 mov.w @(disp,pc),Rn */
	IF(0x0C09BCEAu); { u32 tv_ = (r13 + 0x0C09BCEEu); u32 t_ = PHYS(tv_); r4 = r11; /* slot mov Rm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09BCEA braf Rn */
L_0C09BCF0: BLKS(0x0C09BCF0u);
	r8 = 0xC0A03F0u; UPD(0x0C09BCF2u, 1);  /* 0C09BCF0 mov.l @(disp,pc),Rn */
	IF(0x0C09BCF2u); { u32 t_ = r8; PR = 0x0C09BCF6u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C09BCF6u); }  /* 0C09BCF2 jsr @Rn */
L_0C09BCF6: BLKS(0x0C09BCF6u);
	IF(0x0C09BCF6u); T = (s32)r0 >= 0;  /* 0C09BCF6 cmp/pz Rn */
	{ u32 c_ = T; r13 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C09BD00u, 4); goto L_0C09BD00; } goto L_0C09BCFC; }  /* 0C09BCF8 bt/s */
L_0C09BCFC: BLKS(0x0C09BCFCu);
	{ IF(0x0C09BCFEu); ; /* slot nop */ UPD(0x0C09AE10u, 4); goto L_0C09AE10; }  /* 0C09BCFC bra */
L_0C09BD00: BLKS(0x0C09BD00u);
	r12 = 0xB4u; UPD(0x0C09BD02u, 1);  /* 0C09BD00 mov.w @(disp,pc),Rn */
	IF(0x0C09BD02u); MACL = r11 * r12;  /* 0C09BD02 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C09BD06u, 3);  /* 0C09BD04 mov.l @(disp,pc),Rn */
	IF(0x0C09BD06u); r6 = MACL;  /* 0C09BD06 sts macl,Rn */
	IF(0x0C09BD08u); MACL = r13 * r12;  /* 0C09BD08 mul.l Rm,Rn */
	r6 += r0;  /* 0C09BD0A add Rm,Rn */
	r7 = 0x84u; UPD(0x0C09BD0Eu, 5);  /* 0C09BD0C mov.w @(disp,pc),Rn */
	IF(0x0C09BD0Eu); r9 = MACL;  /* 0C09BD0E sts macl,Rn */
	r4 = r6;  /* 0C09BD10 mov Rm,Rn */
	r9 += r0;  /* 0C09BD12 add Rm,Rn */
	r4 += r7;  /* 0C09BD14 add Rm,Rn */
	r5 = 0x88u; UPD(0x0C09BD18u, 5);  /* 0C09BD16 mov.w @(disp,pc),Rn */
	r7 += r9;  /* 0C09BD18 add Rm,Rn */
	r5 += r6;  /* 0C09BD1A add Rm,Rn */
	r7 += 0x2u;  /* 0C09BD1C add #imm,Rn */
	r13 = (u32)(s32)(s16)R16(r7); UPD(0x0C09BD20u, 4);  /* 0C09BD1E mov.w @Rm,Rn */
	r4 += 0x2u;  /* 0C09BD20 add #imm,Rn */
	r8 = (u32)(s32)(s16)R16(r5); UPD(0x0C09BD24u, 2);  /* 0C09BD22 mov.w @Rm,Rn */
	r8 += r13;  /* 0C09BD24 add Rm,Rn */
	W16(r4, r8); UPD(0x0C09BD28u, 2);  /* 0C09BD26 mov.w Rm,@Rn */
	r13 = (u32)(s32)(s16)r8;  /* 0C09BD28 exts.w Rm,Rn */
	r0 = 0xC058060u; UPD(0x0C09BD2Cu, 2);  /* 0C09BD2A mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C09BD2C mov Rm,Rn */
	r3 = R32(r6 + 0x2Cu); UPD(0x0C09BD30u, 2);  /* 0C09BD2E mov.l @(disp,Rm),Rn */
	r8 = R32(r9 + 0x24u); UPD(0x0C09BD32u, 1);  /* 0C09BD30 mov.l @(disp,Rm),Rn */
	r10 = 0x300000u; UPD(0x0C09BD34u, 1);  /* 0C09BD32 mov.l @(disp,pc),Rn */
	r8 += r3;  /* 0C09BD34 add Rm,Rn */
	W32(r14 + 0x28u, r5); UPD(0x0C09BD38u, 2);  /* 0C09BD36 mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x38u, r6); UPD(0x0C09BD3Au, 1);  /* 0C09BD38 mov.l Rm,@(disp,Rn) */
	IF(0x0C09BD3Au); { u32 t_ = r0; PR = 0x0C09BD3Eu; r5 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C09BD3Eu); }  /* 0C09BD3A jsr @Rn */
L_0C09BD3E: BLKS(0x0C09BD3Eu);
	r1 = R32(r14 + 0x38u); UPD(0x0C09BD40u, 1);  /* 0C09BD3E mov.l @(disp,Rm),Rn */
	r8 += r0;  /* 0C09BD40 add Rm,Rn */
	W32(r1 + 0x24u, r8); UPD(0x0C09BD44u, 2);  /* 0C09BD42 mov.l Rm,@(disp,Rn) */
	r5 = r10;  /* 0C09BD44 mov Rm,Rn */
	r10 = 0xC058030u; UPD(0x0C09BD48u, 2);  /* 0C09BD46 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C09BD48 mov Rm,Rn */
	r2 = R32(r1 + 0x30u); UPD(0x0C09BD4Cu, 2);  /* 0C09BD4A mov.l @(disp,Rm),Rn */
	r8 = R32(r9 + 0x28u); UPD(0x0C09BD4Eu, 1);  /* 0C09BD4C mov.l @(disp,Rm),Rn */
	IF(0x0C09BD4Eu); { u32 t_ = r10; PR = 0x0C09BD52u; r8 += r2; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C09BD52u); }  /* 0C09BD4E jsr @Rn */
L_0C09BD52: BLKS(0x0C09BD52u);
	r7 = R32(r14 + 0x38u); UPD(0x0C09BD54u, 1);  /* 0C09BD52 mov.l @(disp,Rm),Rn */
	r8 += r0;  /* 0C09BD54 add Rm,Rn */
	r0 = 0xA8u; UPD(0x0C09BD58u, 2);  /* 0C09BD56 mov.w @(disp,pc),Rn */
	r6 = r7;  /* 0C09BD58 mov Rm,Rn */
	r6 += r0;  /* 0C09BD5A add Rm,Rn */
	r9 += r0;  /* 0C09BD5C add Rm,Rn */
	r10 = 0xAFu; UPD(0x0C09BD60u, 4);  /* 0C09BD5E mov.w @(disp,pc),Rn */
	r0 = r7;  /* 0C09BD60 mov Rm,Rn */
	IF(0x0C09BD62u); r5 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C09BD64u, 2);  /* 0C09BD62 mov.b @(r0,Rm),Rn */
	r9 += 0x1u;  /* 0C09BD64 add #imm,Rn */
	r4 = (u32)(s32)(s8)R8(r9); UPD(0x0C09BD68u, 2);  /* 0C09BD66 mov.b @Rm,Rn */
	r0 = r13;  /* 0C09BD68 mov Rm,Rn */
	W32(r7 + 0x28u, r8); UPD(0x0C09BD6Cu, 2);  /* 0C09BD6A mov.l Rm,@(disp,Rn) */
	r0 += 0x4u;  /* 0C09BD6C add #imm,Rn */
	r4 += r5;  /* 0C09BD6E add Rm,Rn */
	r6 += 0x1u;  /* 0C09BD70 add #imm,Rn */
	IF(0x0C09BD72u); r0 >>= 2;  /* 0C09BD72 shlr2 Rn */
	r8 = 0xC0A0380u; UPD(0x0C09BD76u, 5);  /* 0C09BD74 mov.l @(disp,pc),Rn */
	IF(0x0C09BD76u); T = r0 & 1; r0 >>= 1;  /* 0C09BD76 shlr Rn */
	W8(r6, r4); UPD(0x0C09BD7Au, 2);  /* 0C09BD78 mov.b Rm,@Rn */
	r0 &= 0x3Fu;  /* 0C09BD7A and #imm,r0 */
	W32(r7 + 0xCu, r0); UPD(0x0C09BD7Eu, 2);  /* 0C09BD7C mov.l Rm,@(disp,Rn) */
	r4 = r11;  /* 0C09BD7E mov Rm,Rn */
	IF(0x0C09BD80u); { u32 t_ = r8; PR = 0x0C09BD84u; W32(r14 + 0x38u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C09BD84u); }  /* 0C09BD80 jsr @Rn */
L_0C09BD84: BLKS(0x0C09BD84u);
	r6 = R32(r14 + 0x38u); UPD(0x0C09BD86u, 1);  /* 0C09BD84 mov.l @(disp,Rm),Rn */
	r6 += 0x7Eu;  /* 0C09BD86 add #imm,Rn */
	r3 = (u32)(s32)(s16)R16(r6); UPD(0x0C09BD8Au, 2);  /* 0C09BD88 mov.w @Rm,Rn */
	IF(0x0C09BD8Au); MACL = r3 * r12;  /* 0C09BD8A mul.l Rm,Rn */
	r6 += 0xFFFFFF82u;  /* 0C09BD8C add #imm,Rn */
	r5 = R32(r6); UPD(0x0C09BD90u, 4);  /* 0C09BD8E mov.l @Rm,Rn */
	IF(0x0C09BD90u); r13 = MACL;  /* 0C09BD90 sts macl,Rn */
	r9 = 0xECFFFFFFu; UPD(0x0C09BD94u, 2);  /* 0C09BD92 mov.l @(disp,pc),Rn */
	r2 = 0xC26CD40u; UPD(0x0C09BD96u, 1);  /* 0C09BD94 mov.l @(disp,pc),Rn */
	r5 &= r9;  /* 0C09BD96 and Rm,Rn */
	r13 += r2;  /* 0C09BD98 add Rm,Rn */
	W32(r6, r5); UPD(0x0C09BD9Cu, 3);  /* 0C09BD9A mov.l Rm,@Rn */
	r0 = R32(r13 + 0x38u); UPD(0x0C09BD9Eu, 1);  /* 0C09BD9C mov.l @(disp,Rm),Rn */
	r10 = R32(r13); UPD(0x0C09BDA0u, 1);  /* 0C09BD9E mov.l @Rm,Rn */
	r1 = 0x13000000u; UPD(0x0C09BDA2u, 1);  /* 0C09BDA0 mov.l @(disp,pc),Rn */
	W32(r6 + 0x38u, r0); UPD(0x0C09BDA4u, 1);  /* 0C09BDA2 mov.l Rm,@(disp,Rn) */
	r10 &= r1;  /* 0C09BDA4 and Rm,Rn */
	r7 = 0x9Au; UPD(0x0C09BDA8u, 2);  /* 0C09BDA6 mov.w @(disp,pc),Rn */
	r0 = r6;  /* 0C09BDA8 mov Rm,Rn */
	r5 |= r10;  /* 0C09BDAA or Rm,Rn */
	IF(0x0C09BDACu); r4 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C09BDAEu, 3);  /* 0C09BDAC mov.b @(r0,Rm),Rn */
	T = (r4 & r4) == 0;  /* 0C09BDAE tst Rm,Rn */
	{ u32 c_ = T; W32(r6, r5); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C09BDBCu, 4); goto L_0C09BDBC; } UPD(0x0C09BDB4u, 1); goto L_0C09BDB4; }  /* 0C09BDB0 bt/s */
L_0C09BDB4: BLKS(0x0C09BDB4u);
	r13 = 0xFFFFEFC4u; UPD(0x0C09BDB6u, 1);  /* 0C09BDB4 mov.w @(disp,pc),Rn */
	IF(0x0C09BDB6u); { u32 tv_ = (r13 + 0x0C09BDBAu); u32 t_ = PHYS(tv_); r14 += 0x3Cu; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09BDB6 braf Rn */
L_0C09BDBC: BLKS(0x0C09BDBCu);
	r12 = R32(r14 + 0x28u); UPD(0x0C09BDBEu, 1);  /* 0C09BDBC mov.l @(disp,Rm),Rn */
	r1 = 0xFFFFFFFFu;  /* 0C09BDBE mov #imm,Rn */
	r12 += 0x2u;  /* 0C09BDC0 add #imm,Rn */
	W32(r14 + 0x28u, r12); UPD(0x0C09BDC4u, 3);  /* 0C09BDC2 mov.l Rm,@(disp,Rn) */
	r2 = R32(r14 + 0x28u); UPD(0x0C09BDC6u, 1);  /* 0C09BDC4 mov.l @(disp,Rm),Rn */
	W16(r2, r1); UPD(0x0C09BDC8u, 1);  /* 0C09BDC6 mov.w Rm,@Rn */
	r1 = R32(r6 + 0x8u); UPD(0x0C09BDCAu, 1);  /* 0C09BDC8 mov.l @(disp,Rm),Rn */
	{ r1 += 0xFFFFFFFFu; /* slot add #imm,Rn */ UPD(0x0C09BCE4u, 3); goto L_0C09BCE4; }  /* 0C09BDCA bra */
}

void f_0C09BE00(sh3_t *c)
{
	LOCALS;
	goto L_0C09BE00;
L_0C09ACF6: BLKS(0x0C09ACF6u);
	r15 = r14;  /* 0C09ACF6 mov Rm,Rn */
	IF(0x0C09ACF8u); PR = R32(r15); r15 += 4; UPD(0x0C09ACFAu, 2);  /* 0C09ACF8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09ACFCu, 1);  /* 0C09ACFA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C09ACFEu, 1);  /* 0C09ACFC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09AD00u, 1);  /* 0C09ACFE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09AD02u, 1);  /* 0C09AD00 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09AD04u, 1);  /* 0C09AD02 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09AD06u, 1);  /* 0C09AD04 mov.l @Rm+,Rn */
	IF(0x0C09AD06u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09AD06 jmp @Rn */
L_0C09B430: BLKS(0x0C09B430u);
	r1 = 0xC0AFC10u; UPD(0x0C09B432u, 1);  /* 0C09B430 mov.l @(disp,pc),Rn */
	{ r14 += 0x3Cu; /* slot add #imm,Rn */ UPD(0x0C09ACF6u, 3); goto L_0C09ACF6; }  /* 0C09B432 bra */
L_0C09BE00: BLKS(0x0C09BE00u);
	r9 = 0xC0A03F0u; UPD(0x0C09BE02u, 1);  /* 0C09BE00 mov.l @(disp,pc),Rn */
	IF(0x0C09BE02u); { u32 t_ = r9; PR = 0x0C09BE06u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C09BE06u); }  /* 0C09BE02 jsr @Rn */
L_0C09BE06: BLKS(0x0C09BE06u);
	IF(0x0C09BE06u); T = (s32)r0 >= 0;  /* 0C09BE06 cmp/pz Rn */
	{ u32 c_ = T; r13 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C09BE14u, 4); goto L_0C09BE14; } goto L_0C09BE0C; }  /* 0C09BE08 bt/s */
L_0C09BE0C: BLKS(0x0C09BE0Cu);
	r0 = 0xFFFFEFFEu; UPD(0x0C09BE0Eu, 2);  /* 0C09BE0C mov.w @(disp,pc),Rn */
	IF(0x0C09BE0Eu); { u32 tv_ = (r0 + 0x0C09BE12u); u32 t_ = PHYS(tv_); IF(0x0C09BE10u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09BE0E braf Rn */
L_0C09BE14: BLKS(0x0C09BE14u);
	r12 = 0xB4u; UPD(0x0C09BE16u, 1);  /* 0C09BE14 mov.w @(disp,pc),Rn */
	IF(0x0C09BE16u); MACL = r11 * r12;  /* 0C09BE16 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C09BE1Au, 3);  /* 0C09BE18 mov.l @(disp,pc),Rn */
	IF(0x0C09BE1Au); r6 = MACL;  /* 0C09BE1A sts macl,Rn */
	IF(0x0C09BE1Cu); MACL = r13 * r12;  /* 0C09BE1C mul.l Rm,Rn */
	r6 += r0;  /* 0C09BE1E add Rm,Rn */
	r1 = r6;  /* 0C09BE20 mov Rm,Rn */
	IF(0x0C09BE22u); r9 = MACL;  /* 0C09BE22 sts macl,Rn */
	r9 += r0;  /* 0C09BE24 add Rm,Rn */
	r0 = 0x88u; UPD(0x0C09BE28u, 8);  /* 0C09BE26 mov.w @(disp,pc),Rn */
	r1 += r0;  /* 0C09BE28 add Rm,Rn */
	IF(0x0C09BE2Au); r3 = (u32)(s32)(s16)R16(r0 + r9); UPD(0x0C09BE2Cu, 2);  /* 0C09BE2A mov.w @(r0,Rm),Rn */
	r8 = (u32)(s32)(s16)R16(r1); UPD(0x0C09BE2Eu, 1);  /* 0C09BE2C mov.w @Rm,Rn */
	r7 = r3;  /* 0C09BE2E mov Rm,Rn */
	r13 = 0x86u; UPD(0x0C09BE32u, 2);  /* 0C09BE30 mov.w @(disp,pc),Rn */
	r7 += r8;  /* 0C09BE32 add Rm,Rn */
	r0 = r6;  /* 0C09BE34 mov Rm,Rn */
	IF(0x0C09BE36u); W16(r0 + r13, r7); UPD(0x0C09BE38u, 3);  /* 0C09BE36 mov.w Rm,@(r0,Rn) */
	r5 = R32(r6 + 0x2Cu); UPD(0x0C09BE3Au, 1);  /* 0C09BE38 mov.l @(disp,Rm),Rn */
	r13 = (u32)(s32)(s16)r7;  /* 0C09BE3A exts.w Rm,Rn */
	r8 = R32(r9 + 0x24u); UPD(0x0C09BE3Eu, 2);  /* 0C09BE3C mov.l @(disp,Rm),Rn */
	r4 = r13;  /* 0C09BE3E mov Rm,Rn */
	r0 = 0xC058060u; UPD(0x0C09BE42u, 2);  /* 0C09BE40 mov.l @(disp,pc),Rn */
	r8 += r5;  /* 0C09BE42 add Rm,Rn */
	r10 = 0x1C0000u; UPD(0x0C09BE46u, 2);  /* 0C09BE44 mov.l @(disp,pc),Rn */
	W32(r14 + 0x2Cu, r1); UPD(0x0C09BE48u, 1);  /* 0C09BE46 mov.l Rm,@(disp,Rn) */
	r5 = r10;  /* 0C09BE48 mov Rm,Rn */
	IF(0x0C09BE4Au); { u32 t_ = r0; PR = 0x0C09BE4Eu; W32(r14 + 0x38u, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C09BE4Eu); }  /* 0C09BE4A jsr @Rn */
L_0C09BE4E: BLKS(0x0C09BE4Eu);
	r4 = R32(r14 + 0x38u); UPD(0x0C09BE50u, 1);  /* 0C09BE4E mov.l @(disp,Rm),Rn */
	r8 += r0;  /* 0C09BE50 add Rm,Rn */
	r5 = r10;  /* 0C09BE52 mov Rm,Rn */
	W32(r4 + 0x24u, r8); UPD(0x0C09BE56u, 3);  /* 0C09BE54 mov.l Rm,@(disp,Rn) */
	r10 = 0xC058030u; UPD(0x0C09BE58u, 1);  /* 0C09BE56 mov.l @(disp,pc),Rn */
	r2 = R32(r4 + 0x30u); UPD(0x0C09BE5Au, 1);  /* 0C09BE58 mov.l @(disp,Rm),Rn */
	r8 = R32(r9 + 0x28u); UPD(0x0C09BE5Cu, 1);  /* 0C09BE5A mov.l @(disp,Rm),Rn */
	r4 = r13;  /* 0C09BE5C mov Rm,Rn */
	IF(0x0C09BE5Eu); { u32 t_ = r10; PR = 0x0C09BE62u; r8 += r2; /* slot add Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C09BE62u); }  /* 0C09BE5E jsr @Rn */
L_0C09BE62: BLKS(0x0C09BE62u);
	r10 = R32(r14 + 0x38u); UPD(0x0C09BE64u, 1);  /* 0C09BE62 mov.l @(disp,Rm),Rn */
	r8 += r0;  /* 0C09BE64 add Rm,Rn */
	r0 = 0xA8u; UPD(0x0C09BE68u, 2);  /* 0C09BE66 mov.w @(disp,pc),Rn */
	r13 += 0x8u;  /* 0C09BE68 add #imm,Rn */
	W32(r10 + 0x28u, r8); UPD(0x0C09BE6Cu, 2);  /* 0C09BE6A mov.l Rm,@(disp,Rn) */
	r9 += r0;  /* 0C09BE6C add Rm,Rn */
	r8 = r10;  /* 0C09BE6E mov Rm,Rn */
	r9 += 0x1u;  /* 0C09BE70 add #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r9); UPD(0x0C09BE74u, 4);  /* 0C09BE72 mov.b @Rm,Rn */
	r8 += r0;  /* 0C09BE74 add Rm,Rn */
	r1 = 0xAFu; UPD(0x0C09BE78u, 2);  /* 0C09BE76 mov.w @(disp,pc),Rn */
	r0 = r10;  /* 0C09BE78 mov Rm,Rn */
	IF(0x0C09BE7Au); r9 = (u32)(s32)(s8)R8(r0 + r1); UPD(0x0C09BE7Cu, 2);  /* 0C09BE7A mov.b @(r0,Rm),Rn */
	r8 += 0x1u;  /* 0C09BE7C add #imm,Rn */
	r3 += r9;  /* 0C09BE7E add Rm,Rn */
	r7 = 0xC0A0380u; UPD(0x0C09BE82u, 3);  /* 0C09BE80 mov.l @(disp,pc),Rn */
	IF(0x0C09BE82u); r13 >>= 2;  /* 0C09BE82 shlr2 Rn */
	W8(r8, r3); UPD(0x0C09BE86u, 2);  /* 0C09BE84 mov.b Rm,@Rn */
	r6 = 0x1Fu;  /* 0C09BE86 mov #imm,Rn */
	IF(0x0C09BE88u); r13 >>= 2;  /* 0C09BE88 shlr2 Rn */
	r13 &= r6;  /* 0C09BE8A and Rm,Rn */
	W32(r10 + 0xCu, r13); UPD(0x0C09BE8Eu, 4);  /* 0C09BE8C mov.l Rm,@(disp,Rn) */
	r4 = r11;  /* 0C09BE8E mov Rm,Rn */
	IF(0x0C09BE90u); { u32 t_ = r7; PR = 0x0C09BE94u; W32(r14 + 0x38u, r10); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C09BE94u); }  /* 0C09BE90 jsr @Rn */
L_0C09BE94: BLKS(0x0C09BE94u);
	r6 = R32(r14 + 0x38u); UPD(0x0C09BE96u, 1);  /* 0C09BE94 mov.l @(disp,Rm),Rn */
	r0 = 0x80u; UPD(0x0C09BE98u, 1);  /* 0C09BE96 mov.w @(disp,pc),Rn */
	IF(0x0C09BE98u); r13 = (u32)(s32)(s16)R16(r0 + r6); UPD(0x0C09BE9Au, 1);  /* 0C09BE98 mov.w @(r0,Rm),Rn */
	IF(0x0C09BE9Au); MACL = r13 * r12;  /* 0C09BE9A mul.l Rm,Rn */
	r4 = 0xC26CD40u; UPD(0x0C09BE9Eu, 3);  /* 0C09BE9C mov.l @(disp,pc),Rn */
	IF(0x0C09BE9Eu); r7 = MACL;  /* 0C09BE9E sts macl,Rn */
	r8 = R32(r6); UPD(0x0C09BEA2u, 2);  /* 0C09BEA0 mov.l @Rm,Rn */
	r7 += r4;  /* 0C09BEA2 add Rm,Rn */
	r5 = 0xECFFFFFFu; UPD(0x0C09BEA6u, 2);  /* 0C09BEA4 mov.l @(disp,pc),Rn */
	r10 = r7;  /* 0C09BEA6 mov Rm,Rn */
	r2 = R32(r7 + 0x38u); UPD(0x0C09BEAAu, 2);  /* 0C09BEA8 mov.l @(disp,Rm),Rn */
	r8 &= r5;  /* 0C09BEAA and Rm,Rn */
	W32(r6, r8); UPD(0x0C09BEAEu, 2);  /* 0C09BEAC mov.l Rm,@Rn */
	W32(r6 + 0x38u, r2); UPD(0x0C09BEB0u, 1);  /* 0C09BEAE mov.l Rm,@(disp,Rn) */
	r3 = R32(r7); UPD(0x0C09BEB2u, 1);  /* 0C09BEB0 mov.l @Rm,Rn */
	r1 = 0x13000000u; UPD(0x0C09BEB4u, 1);  /* 0C09BEB2 mov.l @(disp,pc),Rn */
	r2 = 0xA0u; UPD(0x0C09BEB6u, 1);  /* 0C09BEB4 mov.w @(disp,pc),Rn */
	r3 &= r1;  /* 0C09BEB6 and Rm,Rn */
	r10 += r2;  /* 0C09BEB8 add Rm,Rn */
	r8 |= r3;  /* 0C09BEBA or Rm,Rn */
	r10 += 0x3u;  /* 0C09BEBC add #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r10); UPD(0x0C09BEC0u, 5);  /* 0C09BEBE mov.b @Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C09BEC0 tst Rm,Rn */
	{ u32 c_ = T; W32(r6, r8); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C09BED8u, 4); goto L_0C09BED8; } UPD(0x0C09BEC6u, 1); goto L_0C09BEC6; }  /* 0C09BEC2 bt/s */
L_0C09BEC6: BLKS(0x0C09BEC6u);
	r9 = r2;  /* 0C09BEC6 mov Rm,Rn */
	r9 += r6;  /* 0C09BEC8 add Rm,Rn */
	r9 += 0x1u;  /* 0C09BECA add #imm,Rn */
	r7 += 0x68u;  /* 0C09BECC add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C09BED0u, 5);  /* 0C09BECE mov.b @Rm,Rn */
	r12 = R32(r7); UPD(0x0C09BED2u, 1);  /* 0C09BED0 mov.l @Rm,Rn */
	r0 |= 0x80u;  /* 0C09BED2 or #imm,r0 */
	T = (r12 & r0) == 0;  /* 0C09BED4 tst Rm,Rn */
	if (!T) { UPD(0x0C09BEE0u, 5); goto L_0C09BEE0; }  /* 0C09BED6 bf */
L_0C09BED8: BLKS(0x0C09BED8u);
	r13 = 0xFFFFEEA0u; UPD(0x0C09BEDAu, 1);  /* 0C09BED8 mov.w @(disp,pc),Rn */
	IF(0x0C09BEDAu); { u32 tv_ = (r13 + 0x0C09BEDEu); u32 t_ = PHYS(tv_); r14 += 0x3Cu; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09BEDA braf Rn */
L_0C09BEE0: BLKS(0x0C09BEE0u);
	r8 = 0x9Au; UPD(0x0C09BEE2u, 1);  /* 0C09BEE0 mov.w @(disp,pc),Rn */
	r0 = r6;  /* 0C09BEE2 mov Rm,Rn */
	IF(0x0C09BEE4u); W8(r0 + r8, r3); UPD(0x0C09BEE6u, 2);  /* 0C09BEE4 mov.b Rm,@(r0,Rn) */
	r7 = 0x1u;  /* 0C09BEE6 mov #imm,Rn */
	r13 = R32(r14 + 0x2Cu); UPD(0x0C09BEEAu, 2);  /* 0C09BEE8 mov.l @(disp,Rm),Rn */
	r4 = R32(r6 + 0x8u); UPD(0x0C09BEECu, 1);  /* 0C09BEEA mov.l @(disp,Rm),Rn */
	r13 += 0x2u;  /* 0C09BEEC add #imm,Rn */
	W32(r14 + 0x2Cu, r13); UPD(0x0C09BEF0u, 2);  /* 0C09BEEE mov.l Rm,@(disp,Rn) */
	r4 += 0x1u;  /* 0C09BEF0 add #imm,Rn */
	r2 = 0xC0A03B0u; UPD(0x0C09BEF4u, 2);  /* 0C09BEF2 mov.l @(disp,pc),Rn */
	W32(r6 + 0x8u, r4); UPD(0x0C09BEF6u, 1);  /* 0C09BEF4 mov.l Rm,@(disp,Rn) */
	r5 = R32(r14 + 0x2Cu); UPD(0x0C09BEF8u, 1);  /* 0C09BEF6 mov.l @(disp,Rm),Rn */
	r4 = r11;  /* 0C09BEF8 mov Rm,Rn */
	W32(r14 + 0x38u, r6); UPD(0x0C09BEFCu, 2);  /* 0C09BEFA mov.l Rm,@(disp,Rn) */
	IF(0x0C09BEFCu); { u32 t_ = r2; PR = 0x0C09BF00u; W16(r5, r7); /* slot mov.w Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03B0, 0x0C0A03B0u, 0x0C09BF00u); }  /* 0C09BEFC jsr @Rn */
L_0C09BF00: BLKS(0x0C09BF00u);
	r11 = R32(r14 + 0x38u); UPD(0x0C09BF02u, 1);  /* 0C09BF00 mov.l @(disp,Rm),Rn */
	r4 = 0x72u;  /* 0C09BF02 mov #imm,Rn */
	r6 = R32(r11); UPD(0x0C09BF06u, 2);  /* 0C09BF04 mov.l @Rm,Rn */
	r10 = 0xFFFFBFFFu; UPD(0x0C09BF08u, 1);  /* 0C09BF06 mov.w @(disp,pc),Rn */
	r6 &= r10;  /* 0C09BF08 and Rm,Rn */
	{ W32(r11, r6); /* slot mov.l Rm,@Rn */ UPD(0x0C09B430u, 4); goto L_0C09B430; }  /* 0C09BF0A bra */
}

void f_0C09BF50(sh3_t *c)
{
	LOCALS;
L_0C09BF50: BLKS(0x0C09BF50u);
	r12 = 0xC0A03F0u; UPD(0x0C09BF52u, 1);  /* 0C09BF50 mov.l @(disp,pc),Rn */
	IF(0x0C09BF52u); { u32 t_ = r12; PR = 0x0C09BF56u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C09BF56u); }  /* 0C09BF52 jsr @Rn */
L_0C09BF56: BLKS(0x0C09BF56u);
	IF(0x0C09BF56u); T = (s32)r0 >= 0;  /* 0C09BF56 cmp/pz Rn */
	if (T) { UPD(0x0C09BF62u, 4); goto L_0C09BF62; }  /* 0C09BF58 bt */
L_0C09BF5A: BLKS(0x0C09BF5Au);
	r0 = 0xFFFFEEB0u; UPD(0x0C09BF5Cu, 1);  /* 0C09BF5A mov.w @(disp,pc),Rn */
	IF(0x0C09BF5Cu); { u32 tv_ = (r0 + 0x0C09BF60u); u32 t_ = PHYS(tv_); IF(0x0C09BF5Eu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09BF5C braf Rn */
L_0C09BF62: BLKS(0x0C09BF62u);
	r12 = 0xB4u; UPD(0x0C09BF64u, 1);  /* 0C09BF62 mov.w @(disp,pc),Rn */
	IF(0x0C09BF64u); MACL = r11 * r12;  /* 0C09BF64 mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C09BF68u, 3);  /* 0C09BF66 mov.l @(disp,pc),Rn */
	IF(0x0C09BF68u); r6 = MACL;  /* 0C09BF68 sts macl,Rn */
	IF(0x0C09BF6Au); MACL = r0 * r12;  /* 0C09BF6A mul.l Rm,Rn */
	r6 += r7;  /* 0C09BF6C add Rm,Rn */
	r2 = r6;  /* 0C09BF6E mov Rm,Rn */
	IF(0x0C09BF70u); r9 = MACL;  /* 0C09BF70 sts macl,Rn */
	r0 = 0x88u; UPD(0x0C09BF74u, 7);  /* 0C09BF72 mov.w @(disp,pc),Rn */
	r9 += r7;  /* 0C09BF74 add Rm,Rn */
	r2 += r0;  /* 0C09BF76 add Rm,Rn */
	IF(0x0C09BF78u); r5 = (u32)(s32)(s16)R16(r0 + r9); UPD(0x0C09BF7Au, 3);  /* 0C09BF78 mov.w @(r0,Rm),Rn */
	r4 = (u32)(s32)(s16)R16(r2); UPD(0x0C09BF7Cu, 1);  /* 0C09BF7A mov.w @Rm,Rn */
	r8 = r5;  /* 0C09BF7C mov Rm,Rn */
	r13 = 0x86u; UPD(0x0C09BF80u, 2);  /* 0C09BF7E mov.w @(disp,pc),Rn */
	r0 = r6;  /* 0C09BF80 mov Rm,Rn */
	r8 += r4;  /* 0C09BF82 add Rm,Rn */
	IF(0x0C09BF84u); W16(r0 + r13, r8); UPD(0x0C09BF86u, 3);  /* 0C09BF84 mov.w Rm,@(r0,Rn) */
	r13 = (u32)(s32)(s16)r8;  /* 0C09BF86 exts.w Rm,Rn */
	r0 = R32(r6 + 0x2Cu); UPD(0x0C09BF8Au, 2);  /* 0C09BF88 mov.l @(disp,Rm),Rn */
	r4 = r13;  /* 0C09BF8A mov Rm,Rn */
	r8 = R32(r9 + 0x24u); UPD(0x0C09BF8Eu, 2);  /* 0C09BF8C mov.l @(disp,Rm),Rn */
	r8 += r0;  /* 0C09BF8E add Rm,Rn */
	r0 = 0xC058060u; UPD(0x0C09BF92u, 2);  /* 0C09BF90 mov.l @(disp,pc),Rn */
	r10 = 0x1C0000u; UPD(0x0C09BF94u, 1);  /* 0C09BF92 mov.l @(disp,pc),Rn */
	W32(r14 + 0x30u, r2); UPD(0x0C09BF96u, 1);  /* 0C09BF94 mov.l Rm,@(disp,Rn) */
	r5 = r10;  /* 0C09BF96 mov Rm,Rn */
	IF(0x0C09BF98u); { u32 t_ = r0; PR = 0x0C09BF9Cu; W32(r14 + 0x38u, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C09BF9Cu); }  /* 0C09BF98 jsr @Rn */
L_0C09BF9C: BLKS(0x0C09BF9Cu);
	r1 = R32(r14 + 0x38u); UPD(0x0C09BF9Eu, 1);  /* 0C09BF9C mov.l @(disp,Rm),Rn */
	r8 += r0;  /* 0C09BF9E add Rm,Rn */
	W32(r1 + 0x24u, r8); UPD(0x0C09BFA2u, 2);  /* 0C09BFA0 mov.l Rm,@(disp,Rn) */
	r5 = r10;  /* 0C09BFA2 mov Rm,Rn */
	r10 = 0xC058030u; UPD(0x0C09BFA6u, 2);  /* 0C09BFA4 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C09BFA6 mov Rm,Rn */
	r3 = R32(r1 + 0x30u); UPD(0x0C09BFAAu, 2);  /* 0C09BFA8 mov.l @(disp,Rm),Rn */
	r13 += 0x8u;  /* 0C09BFAA add #imm,Rn */
	r8 = R32(r9 + 0x28u); UPD(0x0C09BFAEu, 2);  /* 0C09BFAC mov.l @(disp,Rm),Rn */
	IF(0x0C09BFAEu); r13 >>= 2;  /* 0C09BFAE shlr2 Rn */
	IF(0x0C09BFB0u); { u32 t_ = r10; PR = 0x0C09BFB4u; r8 += r3; /* slot add Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C09BFB4u); }  /* 0C09BFB0 jsr @Rn */
L_0C09BFB4: BLKS(0x0C09BFB4u);
	r2 = 0xA8u; UPD(0x0C09BFB6u, 1);  /* 0C09BFB4 mov.w @(disp,pc),Rn */
	r8 += r0;  /* 0C09BFB6 add Rm,Rn */
	r9 += r2;  /* 0C09BFB8 add Rm,Rn */
	r10 = R32(r14 + 0x38u); UPD(0x0C09BFBCu, 3);  /* 0C09BFBA mov.l @(disp,Rm),Rn */
	r9 += 0x1u;  /* 0C09BFBC add #imm,Rn */
	r5 = (u32)(s32)(s8)R8(r9); UPD(0x0C09BFC0u, 2);  /* 0C09BFBE mov.b @Rm,Rn */
	r0 = r10;  /* 0C09BFC0 mov Rm,Rn */
	r7 = 0xAFu; UPD(0x0C09BFC4u, 2);  /* 0C09BFC2 mov.w @(disp,pc),Rn */
	r4 = r10;  /* 0C09BFC4 mov Rm,Rn */
	IF(0x0C09BFC6u); r9 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C09BFC8u, 2);  /* 0C09BFC6 mov.b @(r0,Rm),Rn */
	r4 += r2;  /* 0C09BFC8 add Rm,Rn */
	r5 += r9;  /* 0C09BFCA add Rm,Rn */
	r4 += 0x1u;  /* 0C09BFCC add #imm,Rn */
	r0 = 0xC0A0380u; UPD(0x0C09BFD0u, 4);  /* 0C09BFCE mov.l @(disp,pc),Rn */
	r6 = 0x1Fu;  /* 0C09BFD0 mov #imm,Rn */
	W8(r4, r5); UPD(0x0C09BFD4u, 2);  /* 0C09BFD2 mov.b Rm,@Rn */
	IF(0x0C09BFD4u); r13 >>= 2;  /* 0C09BFD4 shlr2 Rn */
	r13 &= r6;  /* 0C09BFD6 and Rm,Rn */
	W32(r10 + 0x28u, r8); UPD(0x0C09BFDAu, 3);  /* 0C09BFD8 mov.l Rm,@(disp,Rn) */
	r4 = r11;  /* 0C09BFDA mov Rm,Rn */
	W32(r10 + 0xCu, r13); UPD(0x0C09BFDEu, 2);  /* 0C09BFDC mov.l Rm,@(disp,Rn) */
	IF(0x0C09BFDEu); { u32 t_ = r0; PR = 0x0C09BFE2u; W32(r14 + 0x38u, r10); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C09BFE2u); }  /* 0C09BFDE jsr @Rn */
L_0C09BFE2: BLKS(0x0C09BFE2u);
	r6 = R32(r14 + 0x38u); UPD(0x0C09BFE4u, 1);  /* 0C09BFE2 mov.l @(disp,Rm),Rn */
	r0 = 0x80u; UPD(0x0C09BFE6u, 1);  /* 0C09BFE4 mov.w @(disp,pc),Rn */
	IF(0x0C09BFE6u); r8 = (u32)(s32)(s16)R16(r0 + r6); UPD(0x0C09BFE8u, 1);  /* 0C09BFE6 mov.w @(r0,Rm),Rn */
	r5 = R32(r6); UPD(0x0C09BFEAu, 1);  /* 0C09BFE8 mov.l @Rm,Rn */
	IF(0x0C09BFEAu); MACL = r8 * r12;  /* 0C09BFEA mul.l Rm,Rn */
	r3 = 0xECFFFFFFu; UPD(0x0C09BFEEu, 3);  /* 0C09BFEC mov.l @(disp,pc),Rn */
	r0 += 0x19u;  /* 0C09BFEE add #imm,Rn */
	r5 &= r3;  /* 0C09BFF0 and Rm,Rn */
	r13 = 0xC26CD40u; UPD(0x0C09BFF4u, 3);  /* 0C09BFF2 mov.l @(disp,pc),Rn */
	IF(0x0C09BFF4u); r4 = MACL;  /* 0C09BFF4 sts macl,Rn */
	W32(r6, r5); UPD(0x0C09BFF8u, 2);  /* 0C09BFF6 mov.l Rm,@Rn */
	r4 += r13;  /* 0C09BFF8 add Rm,Rn */
	r7 = R32(r4); UPD(0x0C09BFFCu, 2);  /* 0C09BFFA mov.l @Rm,Rn */
	r3 = 0x4u;  /* 0C09BFFC mov #imm,Rn */
	r1 = 0x13000000u; UPD(0x0C09C000u, 2);  /* 0C09BFFE mov.l @(disp,pc),Rn */
	IF(0x0C09C000u); r10 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C09C002u, 1);  /* 0C09C000 mov.b @(r0,Rm),Rn */
	r7 &= r1;  /* 0C09C002 and Rm,Rn */
	r2 = R32(r4 + 0x38u); UPD(0x0C09C006u, 2);  /* 0C09C004 mov.l @(disp,Rm),Rn */
	r10 += 0x1u;  /* 0C09C006 add #imm,Rn */
	r5 |= r7;  /* 0C09C008 or Rm,Rn */
	r9 = r10 & 0xFF;  /* 0C09C00A extu.b Rm,Rn */
	W32(r6, r5); UPD(0x0C09C00Eu, 4);  /* 0C09C00C mov.l Rm,@Rn */
	T = r9 > r3;  /* 0C09C00E cmp/hi Rm,Rn */
	W32(r6 + 0x38u, r2); UPD(0x0C09C012u, 2);  /* 0C09C010 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = !T; IF(0x0C09C014u); W8(r0 + r6, r10); /* slot mov.b Rm,@(r0,Rn) */ if (c_) { UPD(0x0C09C026u, 3); goto L_0C09C026; } UPD(0x0C09C016u, 1); goto L_0C09C016; }  /* 0C09C012 bf/s */
L_0C09C016: BLKS(0x0C09C016u);
	r3 = 0x0u;  /* 0C09C016 mov #imm,Rn */
	IF(0x0C09C018u); W8(r0 + r6, r3); UPD(0x0C09C01Au, 2);  /* 0C09C018 mov.b Rm,@(r0,Rn) */
	r10 = R32(r14 + 0x30u); UPD(0x0C09C01Cu, 1);  /* 0C09C01A mov.l @(disp,Rm),Rn */
	r10 += 0x2u;  /* 0C09C01C add #imm,Rn */
	r12 = R32(r6 + 0x8u); UPD(0x0C09C020u, 2);  /* 0C09C01E mov.l @(disp,Rm),Rn */
	r9 = (u32)(s32)(s16)R16(r10); UPD(0x0C09C022u, 1);  /* 0C09C020 mov.w @Rm,Rn */
	r12 += r9;  /* 0C09C022 add Rm,Rn */
	W32(r6 + 0x8u, r12); UPD(0x0C09C026u, 2);  /* 0C09C024 mov.l Rm,@(disp,Rn) */
L_0C09C026: BLKS(0x0C09C026u);
	r4 = r11;  /* 0C09C026 mov Rm,Rn */
	r11 = 0xC0A03B0u; UPD(0x0C09C02Au, 2);  /* 0C09C028 mov.l @(disp,pc),Rn */
	IF(0x0C09C02Au); { u32 t_ = r11; PR = 0x0C09C02Eu; W32(r14 + 0x38u, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A03B0, 0x0C0A03B0u, 0x0C09C02Eu); }  /* 0C09C02A jsr @Rn */
L_0C09C02E: BLKS(0x0C09C02Eu);
	r6 = R32(r14 + 0x38u); UPD(0x0C09C030u, 1);  /* 0C09C02E mov.l @(disp,Rm),Rn */
	r0 = R32(r6 + 0x8u); UPD(0x0C09C032u, 1);  /* 0C09C030 mov.l @(disp,Rm),Rn */
	T = r0 == 0x19u;  /* 0C09C032 cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C09C03Eu, 4); goto L_0C09C03E; }  /* 0C09C034 bf */
L_0C09C036: BLKS(0x0C09C036u);
	r0 = R32(r6); UPD(0x0C09C038u, 1);  /* 0C09C036 mov.l @Rm,Rn */
	r1 = 0x4000u; UPD(0x0C09C03Au, 1);  /* 0C09C038 mov.w @(disp,pc),Rn */
	r0 |= r1;  /* 0C09C03A or Rm,Rn */
	W32(r6, r0); UPD(0x0C09C03Eu, 2);  /* 0C09C03C mov.l Rm,@Rn */
L_0C09C03E: BLKS(0x0C09C03Eu);
	r13 = 0xFFFFED3Au; UPD(0x0C09C040u, 1);  /* 0C09C03E mov.w @(disp,pc),Rn */
	IF(0x0C09C040u); { u32 tv_ = (r13 + 0x0C09C044u); u32 t_ = PHYS(tv_); r14 += 0x3Cu; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09C040 braf Rn */
}

void f_0C09C050(sh3_t *c)
{
	LOCALS;
	goto L_0C09C050;
L_0C09BCE4: BLKS(0x0C09BCE4u);
	W32(r6 + 0x8u, r1); UPD(0x0C09BCE6u, 1);  /* 0C09BCE4 mov.l Rm,@(disp,Rn) */
	r1 = 0xC0A03B0u; UPD(0x0C09BCE8u, 1);  /* 0C09BCE6 mov.l @(disp,pc),Rn */
	r13 = 0xFFFFF006u; UPD(0x0C09BCEAu, 1);  /* 0C09BCE8 mov.w @(disp,pc),Rn */
	IF(0x0C09BCEAu); { u32 tv_ = (r13 + 0x0C09BCEEu); u32 t_ = PHYS(tv_); r4 = r11; /* slot mov Rm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09BCEA braf Rn */
L_0C09BDC6: BLKS(0x0C09BDC6u);
	W16(r2, r1); UPD(0x0C09BDC8u, 1);  /* 0C09BDC6 mov.w Rm,@Rn */
	r1 = R32(r6 + 0x8u); UPD(0x0C09BDCAu, 1);  /* 0C09BDC8 mov.l @(disp,Rm),Rn */
	{ r1 += 0xFFFFFFFFu; /* slot add #imm,Rn */ UPD(0x0C09BCE4u, 3); goto L_0C09BCE4; }  /* 0C09BDCA bra */
L_0C09C03E: BLKS(0x0C09C03Eu);
	r13 = 0xFFFFED3Au; UPD(0x0C09C040u, 1);  /* 0C09C03E mov.w @(disp,pc),Rn */
	IF(0x0C09C040u); { u32 tv_ = (r13 + 0x0C09C044u); u32 t_ = PHYS(tv_); r14 += 0x3Cu; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09C040 braf Rn */
L_0C09C050: BLKS(0x0C09C050u);
	r8 = 0xC0A03F0u; UPD(0x0C09C052u, 1);  /* 0C09C050 mov.l @(disp,pc),Rn */
	IF(0x0C09C052u); { u32 t_ = r8; PR = 0x0C09C056u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C09C056u); }  /* 0C09C052 jsr @Rn */
L_0C09C056: BLKS(0x0C09C056u);
	IF(0x0C09C056u); T = (s32)r0 >= 0;  /* 0C09C056 cmp/pz Rn */
	if (T) { UPD(0x0C09C062u, 4); goto L_0C09C062; }  /* 0C09C058 bt */
L_0C09C05A: BLKS(0x0C09C05Au);
	r0 = 0xFFFFEDB0u; UPD(0x0C09C05Cu, 1);  /* 0C09C05A mov.w @(disp,pc),Rn */
	IF(0x0C09C05Cu); { u32 tv_ = (r0 + 0x0C09C060u); u32 t_ = PHYS(tv_); IF(0x0C09C05Eu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09C05C braf Rn */
L_0C09C062: BLKS(0x0C09C062u);
	r12 = 0xB4u; UPD(0x0C09C064u, 1);  /* 0C09C062 mov.w @(disp,pc),Rn */
	IF(0x0C09C064u); MACL = r11 * r12;  /* 0C09C064 mul.l Rm,Rn */
	r1 = 0xC26CD40u; UPD(0x0C09C068u, 3);  /* 0C09C066 mov.l @(disp,pc),Rn */
	IF(0x0C09C068u); r3 = MACL;  /* 0C09C068 sts macl,Rn */
	IF(0x0C09C06Au); MACL = r0 * r12;  /* 0C09C06A mul.l Rm,Rn */
	r3 += r1;  /* 0C09C06C add Rm,Rn */
	r4 = r3;  /* 0C09C06E mov Rm,Rn */
	IF(0x0C09C070u); r9 = MACL;  /* 0C09C070 sts macl,Rn */
	r0 = 0x88u; UPD(0x0C09C074u, 7);  /* 0C09C072 mov.w @(disp,pc),Rn */
	r9 += r1;  /* 0C09C074 add Rm,Rn */
	IF(0x0C09C076u); r6 = (u32)(s32)(s16)R16(r0 + r9); UPD(0x0C09C078u, 2);  /* 0C09C076 mov.w @(r0,Rm),Rn */
	r4 += r0;  /* 0C09C078 add Rm,Rn */
	r5 = (u32)(s32)(s16)R16(r4); UPD(0x0C09C07Cu, 2);  /* 0C09C07A mov.w @Rm,Rn */
	r8 = r6;  /* 0C09C07C mov Rm,Rn */
	r13 = 0x86u; UPD(0x0C09C080u, 2);  /* 0C09C07E mov.w @(disp,pc),Rn */
	r8 += r5;  /* 0C09C080 add Rm,Rn */
	r0 = r3;  /* 0C09C082 mov Rm,Rn */
	IF(0x0C09C084u); W16(r0 + r13, r8); UPD(0x0C09C086u, 3);  /* 0C09C084 mov.w Rm,@(r0,Rn) */
	r13 = (u32)(s32)(s16)r8;  /* 0C09C086 exts.w Rm,Rn */
	r0 = R32(r3 + 0x2Cu); UPD(0x0C09C08Au, 2);  /* 0C09C088 mov.l @(disp,Rm),Rn */
	r8 = R32(r9 + 0x24u); UPD(0x0C09C08Cu, 1);  /* 0C09C08A mov.l @(disp,Rm),Rn */
	r8 += r0;  /* 0C09C08C add Rm,Rn */
	r0 = 0xC058060u; UPD(0x0C09C090u, 2);  /* 0C09C08E mov.l @(disp,pc),Rn */
	r10 = 0x1C0000u; UPD(0x0C09C092u, 1);  /* 0C09C090 mov.l @(disp,pc),Rn */
	W32(r14 + 0x34u, r4); UPD(0x0C09C094u, 1);  /* 0C09C092 mov.l Rm,@(disp,Rn) */
	r5 = r10;  /* 0C09C094 mov Rm,Rn */
	r4 = r13;  /* 0C09C096 mov Rm,Rn */
	IF(0x0C09C098u); { u32 t_ = r0; PR = 0x0C09C09Cu; W32(r14 + 0x38u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 4); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C09C09Cu); }  /* 0C09C098 jsr @Rn */
L_0C09C09C: BLKS(0x0C09C09Cu);
	r2 = R32(r14 + 0x38u); UPD(0x0C09C09Eu, 1);  /* 0C09C09C mov.l @(disp,Rm),Rn */
	r8 += r0;  /* 0C09C09E add Rm,Rn */
	W32(r2 + 0x24u, r8); UPD(0x0C09C0A2u, 2);  /* 0C09C0A0 mov.l Rm,@(disp,Rn) */
	r5 = r10;  /* 0C09C0A2 mov Rm,Rn */
	r10 = 0xC058030u; UPD(0x0C09C0A6u, 2);  /* 0C09C0A4 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C09C0A6 mov Rm,Rn */
	r3 = R32(r2 + 0x30u); UPD(0x0C09C0AAu, 2);  /* 0C09C0A8 mov.l @(disp,Rm),Rn */
	r13 += 0x8u;  /* 0C09C0AA add #imm,Rn */
	r8 = R32(r9 + 0x28u); UPD(0x0C09C0AEu, 2);  /* 0C09C0AC mov.l @(disp,Rm),Rn */
	IF(0x0C09C0AEu); r13 >>= 2;  /* 0C09C0AE shlr2 Rn */
	IF(0x0C09C0B0u); { u32 t_ = r10; PR = 0x0C09C0B4u; r8 += r3; /* slot add Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C09C0B4u); }  /* 0C09C0B0 jsr @Rn */
L_0C09C0B4: BLKS(0x0C09C0B4u);
	r10 = 0xA8u; UPD(0x0C09C0B6u, 1);  /* 0C09C0B4 mov.w @(disp,pc),Rn */
	r8 += r0;  /* 0C09C0B6 add Rm,Rn */
	r9 += r10;  /* 0C09C0B8 add Rm,Rn */
	r9 += 0x1u;  /* 0C09C0BA add #imm,Rn */
	r7 = (u32)(s32)(s8)R8(r9); UPD(0x0C09C0BEu, 4);  /* 0C09C0BC mov.b @Rm,Rn */
	r6 = 0x1Fu;  /* 0C09C0BE mov #imm,Rn */
	r5 = R32(r14 + 0x38u); UPD(0x0C09C0C2u, 2);  /* 0C09C0C0 mov.l @(disp,Rm),Rn */
	IF(0x0C09C0C2u); r13 >>= 2;  /* 0C09C0C2 shlr2 Rn */
	r9 = 0xAFu; UPD(0x0C09C0C6u, 2);  /* 0C09C0C4 mov.w @(disp,pc),Rn */
	r0 = r5;  /* 0C09C0C6 mov Rm,Rn */
	IF(0x0C09C0C8u); r1 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C09C0CAu, 2);  /* 0C09C0C8 mov.b @(r0,Rm),Rn */
	r4 = r5;  /* 0C09C0CA mov Rm,Rn */
	r4 += r10;  /* 0C09C0CC add Rm,Rn */
	r7 += r1;  /* 0C09C0CE add Rm,Rn */
	r4 += 0x1u;  /* 0C09C0D0 add #imm,Rn */
	r0 = 0xC0A0380u; UPD(0x0C09C0D4u, 5);  /* 0C09C0D2 mov.l @(disp,pc),Rn */
	r13 &= r6;  /* 0C09C0D4 and Rm,Rn */
	W8(r4, r7); UPD(0x0C09C0D8u, 2);  /* 0C09C0D6 mov.b Rm,@Rn */
	W32(r5 + 0x28u, r8); UPD(0x0C09C0DAu, 1);  /* 0C09C0D8 mov.l Rm,@(disp,Rn) */
	r4 = r11;  /* 0C09C0DA mov Rm,Rn */
	W32(r5 + 0xCu, r13); UPD(0x0C09C0DEu, 2);  /* 0C09C0DC mov.l Rm,@(disp,Rn) */
	IF(0x0C09C0DEu); { u32 t_ = r0; PR = 0x0C09C0E2u; W32(r14 + 0x38u, r5); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C09C0E2u); }  /* 0C09C0DE jsr @Rn */
L_0C09C0E2: BLKS(0x0C09C0E2u);
	r6 = R32(r14 + 0x38u); UPD(0x0C09C0E4u, 1);  /* 0C09C0E2 mov.l @(disp,Rm),Rn */
	r0 = 0x80u; UPD(0x0C09C0E6u, 1);  /* 0C09C0E4 mov.w @(disp,pc),Rn */
	IF(0x0C09C0E6u); r8 = (u32)(s32)(s16)R16(r0 + r6); UPD(0x0C09C0E8u, 1);  /* 0C09C0E6 mov.w @(r0,Rm),Rn */
	r9 = R32(r6); UPD(0x0C09C0EAu, 1);  /* 0C09C0E8 mov.l @Rm,Rn */
	IF(0x0C09C0EAu); MACL = r8 * r12;  /* 0C09C0EA mul.l Rm,Rn */
	r2 = 0xECFFFFFFu; UPD(0x0C09C0EEu, 3);  /* 0C09C0EC mov.l @(disp,pc),Rn */
	r0 = r6;  /* 0C09C0EE mov Rm,Rn */
	r9 &= r2;  /* 0C09C0F0 and Rm,Rn */
	r3 = 0xC26CD40u; UPD(0x0C09C0F4u, 3);  /* 0C09C0F2 mov.l @(disp,pc),Rn */
	IF(0x0C09C0F4u); r12 = MACL;  /* 0C09C0F4 sts macl,Rn */
	W32(r6, r9); UPD(0x0C09C0F8u, 2);  /* 0C09C0F6 mov.l Rm,@Rn */
	r12 += r3;  /* 0C09C0F8 add Rm,Rn */
	r7 = R32(r12); UPD(0x0C09C0FCu, 2);  /* 0C09C0FA mov.l @Rm,Rn */
	r10 = 0x13000000u; UPD(0x0C09C0FEu, 1);  /* 0C09C0FC mov.l @(disp,pc),Rn */
	r4 = 0x9Au; UPD(0x0C09C100u, 1);  /* 0C09C0FE mov.w @(disp,pc),Rn */
	r7 &= r10;  /* 0C09C100 and Rm,Rn */
	r5 = R32(r12 + 0x38u); UPD(0x0C09C104u, 2);  /* 0C09C102 mov.l @(disp,Rm),Rn */
	r9 |= r7;  /* 0C09C104 or Rm,Rn */
	IF(0x0C09C106u); r13 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C09C108u, 2);  /* 0C09C106 mov.b @(r0,Rm),Rn */
	W32(r6, r9); UPD(0x0C09C10Au, 1);  /* 0C09C108 mov.l Rm,@Rn */
	T = (r13 & r13) == 0;  /* 0C09C10A tst Rm,Rn */
	{ u32 c_ = !T; W32(r6 + 0x38u, r5); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C09C03Eu, 4); goto L_0C09C03E; } UPD(0x0C09C110u, 1); goto L_0C09C110; }  /* 0C09C10C bf/s */
L_0C09C110: BLKS(0x0C09C110u);
	r12 = R32(r14 + 0x34u); UPD(0x0C09C112u, 1);  /* 0C09C110 mov.l @(disp,Rm),Rn */
	r1 = 0xFFFFFFFFu;  /* 0C09C112 mov #imm,Rn */
	r12 += 0x2u;  /* 0C09C114 add #imm,Rn */
	W32(r14 + 0x34u, r12); UPD(0x0C09C118u, 3);  /* 0C09C116 mov.l Rm,@(disp,Rn) */
	{ r2 = R32(r14 + 0x34u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C09BDC6u, 3); goto L_0C09BDC6; }  /* 0C09C118 bra */
}

void f_0C09C150(sh3_t *c)
{
	LOCALS;
	goto L_0C09C150;
L_0C09ACF4: BLKS(0x0C09ACF4u);
	r14 += 0x3Cu;  /* 0C09ACF4 add #imm,Rn */
	r15 = r14;  /* 0C09ACF6 mov Rm,Rn */
	IF(0x0C09ACF8u); PR = R32(r15); r15 += 4; UPD(0x0C09ACFAu, 3);  /* 0C09ACF8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09ACFCu, 1);  /* 0C09ACFA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C09ACFEu, 1);  /* 0C09ACFC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09AD00u, 1);  /* 0C09ACFE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09AD02u, 1);  /* 0C09AD00 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09AD04u, 1);  /* 0C09AD02 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09AD06u, 1);  /* 0C09AD04 mov.l @Rm+,Rn */
	IF(0x0C09AD06u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09AD06 jmp @Rn */
L_0C09ADA6: BLKS(0x0C09ADA6u);
	W32(r8 + 0xCu, r0); UPD(0x0C09ADA8u, 1);  /* 0C09ADA6 mov.l Rm,@(disp,Rn) */
	r1 = 0xC0A0380u; UPD(0x0C09ADAAu, 1);  /* 0C09ADA8 mov.l @(disp,pc),Rn */
	{ r4 = r11; /* slot mov Rm,Rn */ UPD(0x0C09ACF4u, 3); goto L_0C09ACF4; }  /* 0C09ADAA bra */
L_0C09BA1A: BLKS(0x0C09BA1Au);
	r0 = R32(r14 + 0x4u); UPD(0x0C09BA1Cu, 1);  /* 0C09BA1A mov.l @(disp,Rm),Rn */
	r0 += 0x4u;  /* 0C09BA1C add #imm,Rn */
	IF(0x0C09BA1Eu); r0 >>= 2;  /* 0C09BA1E shlr2 Rn */
	IF(0x0C09BA20u); T = r0 & 1; r0 >>= 1;  /* 0C09BA20 shlr Rn */
	{ r0 &= 0x3Fu; /* slot and #imm,r0 */ UPD(0x0C09ADA6u, 6); goto L_0C09ADA6; }  /* 0C09BA22 bra */
L_0C09C150: BLKS(0x0C09C150u);
	r9 = 0xC0A03F0u; UPD(0x0C09C152u, 1);  /* 0C09C150 mov.l @(disp,pc),Rn */
	IF(0x0C09C152u); { u32 t_ = r9; PR = 0x0C09C156u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C09C156u); }  /* 0C09C152 jsr @Rn */
L_0C09C156: BLKS(0x0C09C156u);
	IF(0x0C09C156u); T = (s32)r0 >= 0;  /* 0C09C156 cmp/pz Rn */
	if (T) { UPD(0x0C09C162u, 4); goto L_0C09C162; }  /* 0C09C158 bt */
L_0C09C15A: BLKS(0x0C09C15Au);
	r0 = 0xFFFFECB0u; UPD(0x0C09C15Cu, 1);  /* 0C09C15A mov.w @(disp,pc),Rn */
	IF(0x0C09C15Cu); { u32 tv_ = (r0 + 0x0C09C160u); u32 t_ = PHYS(tv_); IF(0x0C09C15Eu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09C15C braf Rn */
L_0C09C162: BLKS(0x0C09C162u);
	r12 = 0xB4u; UPD(0x0C09C164u, 1);  /* 0C09C162 mov.w @(disp,pc),Rn */
	IF(0x0C09C164u); MACL = r11 * r12;  /* 0C09C164 mul.l Rm,Rn */
	r1 = 0xC26CD40u; UPD(0x0C09C168u, 3);  /* 0C09C166 mov.l @(disp,pc),Rn */
	IF(0x0C09C168u); r8 = MACL;  /* 0C09C168 sts macl,Rn */
	IF(0x0C09C16Au); MACL = r0 * r12;  /* 0C09C16A mul.l Rm,Rn */
	r8 += r1;  /* 0C09C16C add Rm,Rn */
	r4 = 0x84u; UPD(0x0C09C170u, 5);  /* 0C09C16E mov.w @(disp,pc),Rn */
	IF(0x0C09C170u); r13 = MACL;  /* 0C09C170 sts macl,Rn */
	r6 = r8;  /* 0C09C172 mov Rm,Rn */
	r13 += r1;  /* 0C09C174 add Rm,Rn */
	r6 += r4;  /* 0C09C176 add Rm,Rn */
	r0 = 0x88u; UPD(0x0C09C17Au, 5);  /* 0C09C178 mov.w @(disp,pc),Rn */
	r4 += r13;  /* 0C09C17A add Rm,Rn */
	r4 += 0x2u;  /* 0C09C17C add #imm,Rn */
	IF(0x0C09C17Eu); r3 = (u32)(s32)(s16)R16(r0 + r8); UPD(0x0C09C180u, 3);  /* 0C09C17E mov.w @(r0,Rm),Rn */
	r6 += 0x2u;  /* 0C09C180 add #imm,Rn */
	r5 = (u32)(s32)(s16)R16(r4); UPD(0x0C09C184u, 2);  /* 0C09C182 mov.w @Rm,Rn */
	r10 = 0xC058060u; UPD(0x0C09C186u, 1);  /* 0C09C184 mov.l @(disp,pc),Rn */
	r5 += r3;  /* 0C09C186 add Rm,Rn */
	W16(r6, r5); UPD(0x0C09C18Au, 2);  /* 0C09C188 mov.w Rm,@Rn */
	r0 = (u32)(s32)(s16)r5;  /* 0C09C18A exts.w Rm,Rn */
	r9 = 0x480000u; UPD(0x0C09C18Eu, 2);  /* 0C09C18C mov.l @(disp,pc),Rn */
	r4 = r0;  /* 0C09C18E mov Rm,Rn */
	r5 = r9;  /* 0C09C190 mov Rm,Rn */
	IF(0x0C09C192u); { u32 t_ = r10; PR = 0x0C09C196u; W32(r14 + 0x4u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 4); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C09C196u); }  /* 0C09C192 jsr @Rn */
L_0C09C196: BLKS(0x0C09C196u);
	r7 = R32(r13 + 0x24u); UPD(0x0C09C198u, 1);  /* 0C09C196 mov.l @(disp,Rm),Rn */
	r5 = r9;  /* 0C09C198 mov Rm,Rn */
	r12 = 0xC058030u; UPD(0x0C09C19Cu, 2);  /* 0C09C19A mov.l @(disp,pc),Rn */
	r7 += r0;  /* 0C09C19C add Rm,Rn */
	W32(r8 + 0x24u, r7); UPD(0x0C09C1A0u, 2);  /* 0C09C19E mov.l Rm,@(disp,Rn) */
	r10 = r8;  /* 0C09C1A0 mov Rm,Rn */
	IF(0x0C09C1A2u); { u32 t_ = r12; PR = 0x0C09C1A6u; r4 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C09C1A6u); }  /* 0C09C1A2 jsr @Rn */
L_0C09C1A6: BLKS(0x0C09C1A6u);
	r2 = 0xA8u; UPD(0x0C09C1A8u, 1);  /* 0C09C1A6 mov.w @(disp,pc),Rn */
	r4 = R32(r13 + 0x28u); UPD(0x0C09C1AAu, 1);  /* 0C09C1A8 mov.l @(disp,Rm),Rn */
	r10 += r2;  /* 0C09C1AA add Rm,Rn */
	r4 += r0;  /* 0C09C1AC add Rm,Rn */
	r2 += r13;  /* 0C09C1AE add Rm,Rn */
	r6 = 0xAFu; UPD(0x0C09C1B2u, 4);  /* 0C09C1B0 mov.w @(disp,pc),Rn */
	r2 += 0x1u;  /* 0C09C1B2 add #imm,Rn */
	r0 = r8;  /* 0C09C1B4 mov Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r2); UPD(0x0C09C1B8u, 3);  /* 0C09C1B6 mov.b @Rm,Rn */
	r10 += 0x1u;  /* 0C09C1B8 add #imm,Rn */
	IF(0x0C09C1BAu); r5 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C09C1BCu, 2);  /* 0C09C1BA mov.b @(r0,Rm),Rn */
	r7 = R32(r13 + 0x38u); UPD(0x0C09C1BEu, 1);  /* 0C09C1BC mov.l @(disp,Rm),Rn */
	r3 += r5;  /* 0C09C1BE add Rm,Rn */
	W32(r8 + 0x28u, r4); UPD(0x0C09C1C2u, 2);  /* 0C09C1C0 mov.l Rm,@(disp,Rn) */
	W8(r10, r3); UPD(0x0C09C1C4u, 1);  /* 0C09C1C2 mov.b Rm,@Rn */
	{ W32(r8 + 0x38u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C09BA1Au, 3); goto L_0C09BA1A; }  /* 0C09C1C4 bra */
}

void f_0C09C1D0(sh3_t *c)
{
	LOCALS;
	goto L_0C09C1D0;
L_0C09ACF4: BLKS(0x0C09ACF4u);
	r14 += 0x3Cu;  /* 0C09ACF4 add #imm,Rn */
	r15 = r14;  /* 0C09ACF6 mov Rm,Rn */
	IF(0x0C09ACF8u); PR = R32(r15); r15 += 4; UPD(0x0C09ACFAu, 3);  /* 0C09ACF8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09ACFCu, 1);  /* 0C09ACFA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C09ACFEu, 1);  /* 0C09ACFC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09AD00u, 1);  /* 0C09ACFE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09AD02u, 1);  /* 0C09AD00 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09AD04u, 1);  /* 0C09AD02 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09AD06u, 1);  /* 0C09AD04 mov.l @Rm+,Rn */
	IF(0x0C09AD06u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09AD06 jmp @Rn */
L_0C09B990: BLKS(0x0C09B990u);
	r1 = 0xC0999E0u; UPD(0x0C09B992u, 1);  /* 0C09B990 mov.l @(disp,pc),Rn */
	{ r4 = r11; /* slot mov Rm,Rn */ UPD(0x0C09ACF4u, 3); goto L_0C09ACF4; }  /* 0C09B992 bra */
L_0C09C1D0: BLKS(0x0C09C1D0u);
	r13 = 0xC0A03F0u; UPD(0x0C09C1D2u, 1);  /* 0C09C1D0 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C09C1D2 mov Rm,Rn */
	IF(0x0C09C1D4u); { u32 t_ = r13; PR = 0x0C09C1D8u; r9 = 0xFFFFFFFFu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C09C1D8u); }  /* 0C09C1D4 jsr @Rn */
L_0C09C1D8: BLKS(0x0C09C1D8u);
	r3 = 0xB4u; UPD(0x0C09C1DAu, 1);  /* 0C09C1D8 mov.w @(disp,pc),Rn */
	r7 = r0;  /* 0C09C1DA mov Rm,Rn */
	IF(0x0C09C1DCu); MACL = r11 * r3;  /* 0C09C1DC mul.l Rm,Rn */
	IF(0x0C09C1DEu); T = r7 >> 31; r7 = (r7 << 1) | T;  /* 0C09C1DE rotl Rn */
	r7 = 0xC26CD40u; UPD(0x0C09C1E2u, 5);  /* 0C09C1E0 mov.l @(disp,pc),Rn */
	IF(0x0C09C1E2u); r10 = MACL;  /* 0C09C1E2 sts macl,Rn */
	r13 = r0;  /* 0C09C1E4 mov Rm,Rn */
	r10 += r7;  /* 0C09C1E6 add Rm,Rn */
	r6 = 0xA5u; UPD(0x0C09C1EAu, 4);  /* 0C09C1E8 mov.w @(disp,pc),Rn */
	r0 = r10;  /* 0C09C1EA mov Rm,Rn */
	IF(0x0C09C1ECu); r5 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C09C1EEu, 2);  /* 0C09C1EC mov.b @(r0,Rm),Rn */
	IF(0x0C09C1EEu); r8 = T;  /* 0C09C1EE movt Rn */
	T = (r5 & r5) == 0;  /* 0C09C1F0 tst Rm,Rn */
	{ u32 t_ = 0u - r9, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r2 = r_; }  /* 0C09C1F2 negc Rm,Rn */
	r8 |= r2;  /* 0C09C1F4 or Rm,Rn */
	T = (r8 & r8) == 0;  /* 0C09C1F6 tst Rm,Rn */
	{ u32 c_ = !T; IF(0x0C09C1FAu); MACL = r13 * r3; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C09C29Cu, 9); goto L_0C09C29C; } goto L_0C09C1FC; }  /* 0C09C1F8 bf/s */
L_0C09C1FC: BLKS(0x0C09C1FCu);
	r4 = 0x84u; UPD(0x0C09C1FEu, 3);  /* 0C09C1FC mov.w @(disp,pc),Rn */
	r0 = r10;  /* 0C09C1FE mov Rm,Rn */
	IF(0x0C09C200u); r8 = MACL;  /* 0C09C200 sts macl,Rn */
	r0 += r4;  /* 0C09C202 add Rm,Rn */
	r8 += r7;  /* 0C09C204 add Rm,Rn */
	r4 += r8;  /* 0C09C206 add Rm,Rn */
	r4 += 0x2u;  /* 0C09C208 add #imm,Rn */
	r1 = (u32)(s32)(s16)R16(r4); UPD(0x0C09C20Cu, 7);  /* 0C09C20A mov.w @Rm,Rn */
	r0 += 0x2u;  /* 0C09C20C add #imm,Rn */
	W16(r0, r1); UPD(0x0C09C210u, 2);  /* 0C09C20E mov.w Rm,@Rn */
	r9 = 0xC058060u; UPD(0x0C09C212u, 1);  /* 0C09C210 mov.l @(disp,pc),Rn */
	r4 = r1;  /* 0C09C212 mov Rm,Rn */
	r13 = 0x100000u; UPD(0x0C09C216u, 2);  /* 0C09C214 mov.l @(disp,pc),Rn */
	W32(r14 + 0x4u, r1); UPD(0x0C09C218u, 1);  /* 0C09C216 mov.l Rm,@(disp,Rn) */
	IF(0x0C09C218u); { u32 t_ = r9; PR = 0x0C09C21Cu; r5 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C09C21Cu); }  /* 0C09C218 jsr @Rn */
L_0C09C21C: BLKS(0x0C09C21Cu);
	r7 = R32(r8 + 0x24u); UPD(0x0C09C21Eu, 1);  /* 0C09C21C mov.l @(disp,Rm),Rn */
	r5 = r13;  /* 0C09C21E mov Rm,Rn */
	r12 = 0xC058030u; UPD(0x0C09C222u, 2);  /* 0C09C220 mov.l @(disp,pc),Rn */
	r7 += r0;  /* 0C09C222 add Rm,Rn */
	W32(r10 + 0x24u, r7); UPD(0x0C09C226u, 2);  /* 0C09C224 mov.l Rm,@(disp,Rn) */
	r9 = r10;  /* 0C09C226 mov Rm,Rn */
	IF(0x0C09C228u); { u32 t_ = r12; PR = 0x0C09C22Cu; r4 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C09C22Cu); }  /* 0C09C228 jsr @Rn */
L_0C09C22C: BLKS(0x0C09C22Cu);
	r6 = R32(r8 + 0x28u); UPD(0x0C09C22Eu, 1);  /* 0C09C22C mov.l @(disp,Rm),Rn */
	r2 = 0xA8u; UPD(0x0C09C230u, 1);  /* 0C09C22E mov.w @(disp,pc),Rn */
	r6 += r0;  /* 0C09C230 add Rm,Rn */
	r7 = R32(r10); UPD(0x0C09C234u, 2);  /* 0C09C232 mov.l @Rm,Rn */
	r9 += r2;  /* 0C09C234 add Rm,Rn */
	r12 = 0xECFFFFFFu; UPD(0x0C09C238u, 2);  /* 0C09C236 mov.l @(disp,pc),Rn */
	r0 = r10;  /* 0C09C238 mov Rm,Rn */
	r3 = 0xAFu; UPD(0x0C09C23Cu, 2);  /* 0C09C23A mov.w @(disp,pc),Rn */
	r7 &= r12;  /* 0C09C23C and Rm,Rn */
	r2 += r8;  /* 0C09C23E add Rm,Rn */
	W32(r10, r7); UPD(0x0C09C242u, 3);  /* 0C09C240 mov.l Rm,@Rn */
	r2 += 0x1u;  /* 0C09C242 add #imm,Rn */
	IF(0x0C09C244u); r13 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C09C246u, 2);  /* 0C09C244 mov.b @(r0,Rm),Rn */
	r9 += 0x1u;  /* 0C09C246 add #imm,Rn */
	r5 = (u32)(s32)(s8)R8(r2); UPD(0x0C09C24Au, 2);  /* 0C09C248 mov.b @Rm,Rn */
	r0 = R32(r8); UPD(0x0C09C24Cu, 1);  /* 0C09C24A mov.l @Rm,Rn */
	r5 += r13;  /* 0C09C24C add Rm,Rn */
	r4 = 0x13000000u; UPD(0x0C09C250u, 2);  /* 0C09C24E mov.l @(disp,pc),Rn */
	W8(r9, r5); UPD(0x0C09C252u, 1);  /* 0C09C250 mov.b Rm,@Rn */
	r0 &= r4;  /* 0C09C252 and Rm,Rn */
	r7 |= r0;  /* 0C09C254 or Rm,Rn */
	r0 = R32(r14 + 0x4u); UPD(0x0C09C258u, 3);  /* 0C09C256 mov.l @(disp,Rm),Rn */
	r0 += 0x4u;  /* 0C09C258 add #imm,Rn */
	IF(0x0C09C25Au); r0 >>= 2;  /* 0C09C25A shlr2 Rn */
	IF(0x0C09C25Cu); T = r0 & 1; r0 >>= 1;  /* 0C09C25C shlr Rn */
	r0 &= 0x3Fu;  /* 0C09C25E and #imm,r0 */
	W32(r10 + 0x28u, r6); UPD(0x0C09C262u, 5);  /* 0C09C260 mov.l Rm,@(disp,Rn) */
	W32(r10, r7); UPD(0x0C09C264u, 1);  /* 0C09C262 mov.l Rm,@Rn */
	r1 = 0xFFFFEB3Eu; UPD(0x0C09C266u, 1);  /* 0C09C264 mov.w @(disp,pc),Rn */
	IF(0x0C09C266u); { u32 tv_ = (r1 + 0x0C09C26Au); u32 t_ = PHYS(tv_); W32(r10 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09C266 braf Rn */
L_0C09C29C: BLKS(0x0C09C29Cu);
	{ IF(0x0C09C29Eu); ; /* slot nop */ UPD(0x0C09B990u, 3); goto L_0C09B990; }  /* 0C09C29C bra */
}

void f_0C09C270(sh3_t *c)
{
	LOCALS;
	goto L_0C09C270;
L_0C09ACF4: BLKS(0x0C09ACF4u);
	r14 += 0x3Cu;  /* 0C09ACF4 add #imm,Rn */
	r15 = r14;  /* 0C09ACF6 mov Rm,Rn */
	IF(0x0C09ACF8u); PR = R32(r15); r15 += 4; UPD(0x0C09ACFAu, 3);  /* 0C09ACF8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09ACFCu, 1);  /* 0C09ACFA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C09ACFEu, 1);  /* 0C09ACFC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09AD00u, 1);  /* 0C09ACFE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09AD02u, 1);  /* 0C09AD00 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09AD04u, 1);  /* 0C09AD02 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09AD06u, 1);  /* 0C09AD04 mov.l @Rm+,Rn */
	IF(0x0C09AD06u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09AD06 jmp @Rn */
L_0C09B990: BLKS(0x0C09B990u);
	r1 = 0xC0999E0u; UPD(0x0C09B992u, 1);  /* 0C09B990 mov.l @(disp,pc),Rn */
	{ r4 = r11; /* slot mov Rm,Rn */ UPD(0x0C09ACF4u, 3); goto L_0C09ACF4; }  /* 0C09B992 bra */
L_0C09C210: BLKS(0x0C09C210u);
	r9 = 0xC058060u; UPD(0x0C09C212u, 1);  /* 0C09C210 mov.l @(disp,pc),Rn */
	r4 = r1;  /* 0C09C212 mov Rm,Rn */
	r13 = 0x100000u; UPD(0x0C09C216u, 2);  /* 0C09C214 mov.l @(disp,pc),Rn */
	W32(r14 + 0x4u, r1); UPD(0x0C09C218u, 1);  /* 0C09C216 mov.l Rm,@(disp,Rn) */
	IF(0x0C09C218u); { u32 t_ = r9; PR = 0x0C09C21Cu; r5 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C09C21Cu); }  /* 0C09C218 jsr @Rn */
L_0C09C21C: BLKS(0x0C09C21Cu);
	r7 = R32(r8 + 0x24u); UPD(0x0C09C21Eu, 1);  /* 0C09C21C mov.l @(disp,Rm),Rn */
	r5 = r13;  /* 0C09C21E mov Rm,Rn */
	r12 = 0xC058030u; UPD(0x0C09C222u, 2);  /* 0C09C220 mov.l @(disp,pc),Rn */
	r7 += r0;  /* 0C09C222 add Rm,Rn */
	W32(r10 + 0x24u, r7); UPD(0x0C09C226u, 2);  /* 0C09C224 mov.l Rm,@(disp,Rn) */
	r9 = r10;  /* 0C09C226 mov Rm,Rn */
	IF(0x0C09C228u); { u32 t_ = r12; PR = 0x0C09C22Cu; r4 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C09C22Cu); }  /* 0C09C228 jsr @Rn */
L_0C09C22C: BLKS(0x0C09C22Cu);
	r6 = R32(r8 + 0x28u); UPD(0x0C09C22Eu, 1);  /* 0C09C22C mov.l @(disp,Rm),Rn */
	r2 = 0xA8u; UPD(0x0C09C230u, 1);  /* 0C09C22E mov.w @(disp,pc),Rn */
	r6 += r0;  /* 0C09C230 add Rm,Rn */
	r7 = R32(r10); UPD(0x0C09C234u, 2);  /* 0C09C232 mov.l @Rm,Rn */
	r9 += r2;  /* 0C09C234 add Rm,Rn */
	r12 = 0xECFFFFFFu; UPD(0x0C09C238u, 2);  /* 0C09C236 mov.l @(disp,pc),Rn */
	r0 = r10;  /* 0C09C238 mov Rm,Rn */
	r3 = 0xAFu; UPD(0x0C09C23Cu, 2);  /* 0C09C23A mov.w @(disp,pc),Rn */
	r7 &= r12;  /* 0C09C23C and Rm,Rn */
	r2 += r8;  /* 0C09C23E add Rm,Rn */
	W32(r10, r7); UPD(0x0C09C242u, 3);  /* 0C09C240 mov.l Rm,@Rn */
	r2 += 0x1u;  /* 0C09C242 add #imm,Rn */
	IF(0x0C09C244u); r13 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C09C246u, 2);  /* 0C09C244 mov.b @(r0,Rm),Rn */
	r9 += 0x1u;  /* 0C09C246 add #imm,Rn */
	r5 = (u32)(s32)(s8)R8(r2); UPD(0x0C09C24Au, 2);  /* 0C09C248 mov.b @Rm,Rn */
	r0 = R32(r8); UPD(0x0C09C24Cu, 1);  /* 0C09C24A mov.l @Rm,Rn */
	r5 += r13;  /* 0C09C24C add Rm,Rn */
	r4 = 0x13000000u; UPD(0x0C09C250u, 2);  /* 0C09C24E mov.l @(disp,pc),Rn */
	W8(r9, r5); UPD(0x0C09C252u, 1);  /* 0C09C250 mov.b Rm,@Rn */
	r0 &= r4;  /* 0C09C252 and Rm,Rn */
	r7 |= r0;  /* 0C09C254 or Rm,Rn */
	r0 = R32(r14 + 0x4u); UPD(0x0C09C258u, 3);  /* 0C09C256 mov.l @(disp,Rm),Rn */
	r0 += 0x4u;  /* 0C09C258 add #imm,Rn */
	IF(0x0C09C25Au); r0 >>= 2;  /* 0C09C25A shlr2 Rn */
	IF(0x0C09C25Cu); T = r0 & 1; r0 >>= 1;  /* 0C09C25C shlr Rn */
	r0 &= 0x3Fu;  /* 0C09C25E and #imm,r0 */
	W32(r10 + 0x28u, r6); UPD(0x0C09C262u, 5);  /* 0C09C260 mov.l Rm,@(disp,Rn) */
	W32(r10, r7); UPD(0x0C09C264u, 1);  /* 0C09C262 mov.l Rm,@Rn */
	r1 = 0xFFFFEB3Eu; UPD(0x0C09C266u, 1);  /* 0C09C264 mov.w @(disp,pc),Rn */
	IF(0x0C09C266u); { u32 tv_ = (r1 + 0x0C09C26Au); u32 t_ = PHYS(tv_); W32(r10 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09C266 braf Rn */
L_0C09C270: BLKS(0x0C09C270u);
	r13 = 0xC0A03F0u; UPD(0x0C09C272u, 1);  /* 0C09C270 mov.l @(disp,pc),Rn */
	IF(0x0C09C272u); { u32 t_ = r13; PR = 0x0C09C276u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C09C276u); }  /* 0C09C272 jsr @Rn */
L_0C09C276: BLKS(0x0C09C276u);
	r3 = 0xB4u; UPD(0x0C09C278u, 1);  /* 0C09C276 mov.w @(disp,pc),Rn */
	r10 = r0;  /* 0C09C278 mov Rm,Rn */
	IF(0x0C09C27Au); MACL = r11 * r3;  /* 0C09C27A mul.l Rm,Rn */
	IF(0x0C09C27Cu); T = r10 >> 31; r10 = (r10 << 1) | T;  /* 0C09C27C rotl Rn */
	r7 = 0xC26CD40u; UPD(0x0C09C280u, 5);  /* 0C09C27E mov.l @(disp,pc),Rn */
	IF(0x0C09C280u); r10 = MACL;  /* 0C09C280 sts macl,Rn */
	r13 = r0;  /* 0C09C282 mov Rm,Rn */
	r10 += r7;  /* 0C09C284 add Rm,Rn */
	r5 = 0xA5u; UPD(0x0C09C288u, 4);  /* 0C09C286 mov.w @(disp,pc),Rn */
	r0 = r10;  /* 0C09C288 mov Rm,Rn */
	IF(0x0C09C28Au); r9 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C09C28Cu, 2);  /* 0C09C28A mov.b @(r0,Rm),Rn */
	IF(0x0C09C28Cu); r12 = T;  /* 0C09C28C movt Rn */
	T = (r9 & r9) == 0;  /* 0C09C28E tst Rm,Rn */
	r2 = 0xFFFFFFFFu;  /* 0C09C290 mov #imm,Rn */
	{ u32 t_ = 0u - r2, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r8 = r_; }  /* 0C09C292 negc Rm,Rn */
	r12 |= r8;  /* 0C09C294 or Rm,Rn */
	T = (r12 & r12) == 0;  /* 0C09C296 tst Rm,Rn */
	{ u32 c_ = T; IF(0x0C09C29Au); MACL = r13 * r3; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C09C2A0u, 10); goto L_0C09C2A0; } goto L_0C09C29C; }  /* 0C09C298 bt/s */
L_0C09C29C: BLKS(0x0C09C29Cu);
	{ IF(0x0C09C29Eu); ; /* slot nop */ UPD(0x0C09B990u, 5); goto L_0C09B990; }  /* 0C09C29C bra */
L_0C09C2A0: BLKS(0x0C09C2A0u);
	r0 = 0x88u; UPD(0x0C09C2A2u, 1);  /* 0C09C2A0 mov.w @(disp,pc),Rn */
	IF(0x0C09C2A2u); r8 = MACL;  /* 0C09C2A2 sts macl,Rn */
	r8 += r7;  /* 0C09C2A4 add Rm,Rn */
	IF(0x0C09C2A6u); r3 = (u32)(s32)(s16)R16(r0 + r8); UPD(0x0C09C2A8u, 3);  /* 0C09C2A6 mov.w @(r0,Rm),Rn */
	IF(0x0C09C2A8u); r6 = (u32)(s32)(s16)R16(r0 + r10); UPD(0x0C09C2AAu, 1);  /* 0C09C2A8 mov.w @(r0,Rm),Rn */
	r1 = 0x86u; UPD(0x0C09C2ACu, 1);  /* 0C09C2AA mov.w @(disp,pc),Rn */
	r3 += r6;  /* 0C09C2AC add Rm,Rn */
	r0 = r10;  /* 0C09C2AE mov Rm,Rn */
	IF(0x0C09C2B0u); W16(r0 + r1, r3); UPD(0x0C09C2B2u, 3);  /* 0C09C2B0 mov.w Rm,@(r0,Rn) */
	{ r1 = (u32)(s32)(s16)r3; /* slot exts.w Rm,Rn */ UPD(0x0C09C210u, 3); goto L_0C09C210; }  /* 0C09C2B2 bra */
}

void f_0C09C2F0(sh3_t *c)
{
	LOCALS;
	goto L_0C09C2F0;
L_0C09ACF4: BLKS(0x0C09ACF4u);
	r14 += 0x3Cu;  /* 0C09ACF4 add #imm,Rn */
	r15 = r14;  /* 0C09ACF6 mov Rm,Rn */
	IF(0x0C09ACF8u); PR = R32(r15); r15 += 4; UPD(0x0C09ACFAu, 3);  /* 0C09ACF8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09ACFCu, 1);  /* 0C09ACFA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C09ACFEu, 1);  /* 0C09ACFC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09AD00u, 1);  /* 0C09ACFE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09AD02u, 1);  /* 0C09AD00 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09AD04u, 1);  /* 0C09AD02 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09AD06u, 1);  /* 0C09AD04 mov.l @Rm+,Rn */
	IF(0x0C09AD06u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09AD06 jmp @Rn */
L_0C09B990: BLKS(0x0C09B990u);
	r1 = 0xC0999E0u; UPD(0x0C09B992u, 1);  /* 0C09B990 mov.l @(disp,pc),Rn */
	{ r4 = r11; /* slot mov Rm,Rn */ UPD(0x0C09ACF4u, 3); goto L_0C09ACF4; }  /* 0C09B992 bra */
L_0C09C2F0: BLKS(0x0C09C2F0u);
	r8 = 0xC0A03F0u; UPD(0x0C09C2F2u, 1);  /* 0C09C2F0 mov.l @(disp,pc),Rn */
	IF(0x0C09C2F2u); { u32 t_ = r8; PR = 0x0C09C2F6u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C09C2F6u); }  /* 0C09C2F2 jsr @Rn */
L_0C09C2F6: BLKS(0x0C09C2F6u);
	IF(0x0C09C2F6u); T = (s32)r0 >= 0;  /* 0C09C2F6 cmp/pz Rn */
	if (!T) { UPD(0x0C09C3DCu, 4); goto L_0C09C3DC; }  /* 0C09C2F8 bf */
L_0C09C2FA: BLKS(0x0C09C2FAu);
	r4 = 0xB4u; UPD(0x0C09C2FCu, 1);  /* 0C09C2FA mov.w @(disp,pc),Rn */
	IF(0x0C09C2FCu); MACL = r11 * r4;  /* 0C09C2FC mul.l Rm,Rn */
	r2 = 0xB4u; UPD(0x0C09C300u, 3);  /* 0C09C2FE mov.w @(disp,pc),Rn */
	IF(0x0C09C300u); r12 = MACL;  /* 0C09C300 sts macl,Rn */
	IF(0x0C09C302u); MACL = r0 * r2;  /* 0C09C302 mul.l Rm,Rn */
	r5 = 0xC26CD40u; UPD(0x0C09C306u, 4);  /* 0C09C304 mov.l @(disp,pc),Rn */
	r4 += 0xFFFFFFD0u;  /* 0C09C306 add #imm,Rn */
	r12 += r5;  /* 0C09C308 add Rm,Rn */
	r1 = 0xC26CD40u; UPD(0x0C09C30Cu, 3);  /* 0C09C30A mov.l @(disp,pc),Rn */
	IF(0x0C09C30Cu); r13 = MACL;  /* 0C09C30C sts macl,Rn */
	r7 = r12;  /* 0C09C30E mov Rm,Rn */
	r13 += r1;  /* 0C09C310 add Rm,Rn */
	r7 += r4;  /* 0C09C312 add Rm,Rn */
	r4 += r13;  /* 0C09C314 add Rm,Rn */
	r4 += 0x2u;  /* 0C09C316 add #imm,Rn */
	r8 = 0xC058060u; UPD(0x0C09C31Au, 7);  /* 0C09C318 mov.l @(disp,pc),Rn */
	r7 += 0x2u;  /* 0C09C31A add #imm,Rn */
	r10 = (u32)(s32)(s16)R16(r4); UPD(0x0C09C31Eu, 2);  /* 0C09C31C mov.w @Rm,Rn */
	r9 = 0x100000u; UPD(0x0C09C320u, 1);  /* 0C09C31E mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C09C320 mov Rm,Rn */
	W16(r7, r10); UPD(0x0C09C324u, 2);  /* 0C09C322 mov.w Rm,@Rn */
	IF(0x0C09C324u); { u32 t_ = r8; PR = 0x0C09C328u; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C09C328u); }  /* 0C09C324 jsr @Rn */
L_0C09C328: BLKS(0x0C09C328u);
	r5 = r9;  /* 0C09C328 mov Rm,Rn */
	r6 = R32(r13 + 0x24u); UPD(0x0C09C32Cu, 2);  /* 0C09C32A mov.l @(disp,Rm),Rn */
	r4 = r10;  /* 0C09C32C mov Rm,Rn */
	r9 = 0xC058030u; UPD(0x0C09C330u, 2);  /* 0C09C32E mov.l @(disp,pc),Rn */
	r6 += r0;  /* 0C09C330 add Rm,Rn */
	IF(0x0C09C332u); { u32 t_ = r9; PR = 0x0C09C336u; W32(r12 + 0x24u, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C09C336u); }  /* 0C09C332 jsr @Rn */
L_0C09C336: BLKS(0x0C09C336u);
	r3 = R32(r13 + 0x28u); UPD(0x0C09C338u, 1);  /* 0C09C336 mov.l @(disp,Rm),Rn */
	r8 = r12;  /* 0C09C338 mov Rm,Rn */
	r3 += r0;  /* 0C09C33A add Rm,Rn */
	r0 = 0xA8u; UPD(0x0C09C33Eu, 3);  /* 0C09C33C mov.w @(disp,pc),Rn */
	r5 = 0xAFu; UPD(0x0C09C340u, 1);  /* 0C09C33E mov.w @(disp,pc),Rn */
	r8 += r0;  /* 0C09C340 add Rm,Rn */
	r13 += r0;  /* 0C09C342 add Rm,Rn */
	r13 += 0x1u;  /* 0C09C344 add #imm,Rn */
	r0 = r12;  /* 0C09C346 mov Rm,Rn */
	IF(0x0C09C348u); r4 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C09C34Au, 5);  /* 0C09C348 mov.b @(r0,Rm),Rn */
	r8 += 0x1u;  /* 0C09C34A add #imm,Rn */
	r10 = (u32)(s32)(s8)R8(r13); UPD(0x0C09C34Eu, 2);  /* 0C09C34C mov.b @Rm,Rn */
	r10 += r4;  /* 0C09C34E add Rm,Rn */
	W8(r8, r10); UPD(0x0C09C352u, 2);  /* 0C09C350 mov.b Rm,@Rn */
	r8 = 0x80u; UPD(0x0C09C354u, 1);  /* 0C09C352 mov.w @(disp,pc),Rn */
	r8 += r12;  /* 0C09C354 add Rm,Rn */
	W32(r12 + 0x28u, r3); UPD(0x0C09C358u, 2);  /* 0C09C356 mov.l Rm,@(disp,Rn) */
	r9 = (u32)(s32)(s16)R16(r8); UPD(0x0C09C35Au, 1);  /* 0C09C358 mov.w @Rm,Rn */
	r7 = 0xB4u; UPD(0x0C09C35Cu, 1);  /* 0C09C35A mov.w @(disp,pc),Rn */
	r3 = R32(r12); UPD(0x0C09C35Eu, 1);  /* 0C09C35C mov.l @Rm,Rn */
	IF(0x0C09C35Eu); MACL = r9 * r7;  /* 0C09C35E mul.l Rm,Rn */
	r0 = R32(r12 + 0xCu); UPD(0x0C09C362u, 3);  /* 0C09C360 mov.l @(disp,Rm),Rn */
	r2 = 0xECFFFFFFu; UPD(0x0C09C364u, 1);  /* 0C09C362 mov.l @(disp,pc),Rn */
	r0 += 0x1u;  /* 0C09C364 add #imm,Rn */
	r3 &= r2;  /* 0C09C366 and Rm,Rn */
	r13 = 0xC26CD40u; UPD(0x0C09C36Au, 3);  /* 0C09C368 mov.l @(disp,pc),Rn */
	IF(0x0C09C36Au); r5 = MACL;  /* 0C09C36A sts macl,Rn */
	W32(r12, r3); UPD(0x0C09C36Eu, 2);  /* 0C09C36C mov.l Rm,@Rn */
	r0 &= 0x7u;  /* 0C09C36E and #imm,r0 */
	r5 += r13;  /* 0C09C370 add Rm,Rn */
	W32(r12 + 0xCu, r0); UPD(0x0C09C374u, 3);  /* 0C09C372 mov.l Rm,@(disp,Rn) */
	r6 = R32(r5); UPD(0x0C09C376u, 1);  /* 0C09C374 mov.l @Rm,Rn */
	r4 = R32(r5 + 0x38u); UPD(0x0C09C378u, 1);  /* 0C09C376 mov.l @(disp,Rm),Rn */
	r1 = 0x13000000u; UPD(0x0C09C37Au, 1);  /* 0C09C378 mov.l @(disp,pc),Rn */
	r0 = 0xC0A0380u; UPD(0x0C09C37Cu, 1);  /* 0C09C37A mov.l @(disp,pc),Rn */
	r6 &= r1;  /* 0C09C37C and Rm,Rn */
	W32(r12 + 0x38u, r4); UPD(0x0C09C380u, 2);  /* 0C09C37E mov.l Rm,@(disp,Rn) */
	r3 |= r6;  /* 0C09C380 or Rm,Rn */
	W32(r12, r3); UPD(0x0C09C384u, 2);  /* 0C09C382 mov.l Rm,@Rn */
	IF(0x0C09C384u); { u32 t_ = r0; PR = 0x0C09C388u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C09C388u); }  /* 0C09C384 jsr @Rn */
L_0C09C388: BLKS(0x0C09C388u);
	r10 = R32(r12 + 0xCu); UPD(0x0C09C38Au, 1);  /* 0C09C388 mov.l @(disp,Rm),Rn */
	T = (r10 & r10) == 0;  /* 0C09C38A tst Rm,Rn */
	if (!T) { UPD(0x0C09C3BEu, 4); goto L_0C09C3BE; }  /* 0C09C38C bf */
L_0C09C38E: BLKS(0x0C09C38Eu);
	r3 = (u32)(s32)(s16)R16(r8); UPD(0x0C09C390u, 1);  /* 0C09C38E mov.w @Rm,Rn */
	r0 = 0xB4u; UPD(0x0C09C392u, 1);  /* 0C09C390 mov.w @(disp,pc),Rn */
	IF(0x0C09C392u); MACL = r3 * r0;  /* 0C09C392 mul.l Rm,Rn */
	r13 = 0xC26CD40u; UPD(0x0C09C396u, 3);  /* 0C09C394 mov.l @(disp,pc),Rn */
	W32(r14, r3); UPD(0x0C09C398u, 1);  /* 0C09C396 mov.l Rm,@Rn */
	IF(0x0C09C398u); r0 = MACL;  /* 0C09C398 sts macl,Rn */
	r1 = 0xA1u; UPD(0x0C09C39Cu, 2);  /* 0C09C39A mov.w @(disp,pc),Rn */
	r0 += r13;  /* 0C09C39C add Rm,Rn */
	IF(0x0C09C39Eu); r2 = (u32)(s32)(s8)R8(r0 + r1); UPD(0x0C09C3A0u, 2);  /* 0C09C39E mov.b @(r0,Rm),Rn */
	T = (r2 & r2) == 0;  /* 0C09C3A0 tst Rm,Rn */
	if (T) { UPD(0x0C09C3BEu, 4); goto L_0C09C3BE; }  /* 0C09C3A2 bt */
L_0C09C3A4: BLKS(0x0C09C3A4u);
	r4 = r11;  /* 0C09C3A4 mov Rm,Rn */
	r9 = R32(r12 + 0x8u); UPD(0x0C09C3A8u, 2);  /* 0C09C3A6 mov.l @(disp,Rm),Rn */
	r1 += 0xFFFFFFF9u;  /* 0C09C3A8 add #imm,Rn */
	r11 = 0xC0A03B0u; UPD(0x0C09C3ACu, 2);  /* 0C09C3AA mov.l @(disp,pc),Rn */
	r0 = r12;  /* 0C09C3AC mov Rm,Rn */
	IF(0x0C09C3AEu); W8(r0 + r1, r2); UPD(0x0C09C3B0u, 2);  /* 0C09C3AE mov.b Rm,@(r0,Rn) */
	r9 += 0x1u;  /* 0C09C3B0 add #imm,Rn */
	IF(0x0C09C3B2u); { u32 t_ = r11; PR = 0x0C09C3B6u; W32(r12 + 0x8u, r9); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C0A03B0, 0x0C0A03B0u, 0x0C09C3B6u); }  /* 0C09C3B2 jsr @Rn */
L_0C09C3B6: BLKS(0x0C09C3B6u);
	r2 = 0x8Au; UPD(0x0C09C3B8u, 1);  /* 0C09C3B6 mov.w @(disp,pc),Rn */
	r1 = 0x1u;  /* 0C09C3B8 mov #imm,Rn */
	r0 = r12;  /* 0C09C3BA mov Rm,Rn */
	IF(0x0C09C3BCu); W16(r0 + r2, r1); UPD(0x0C09C3BEu, 3);  /* 0C09C3BC mov.w Rm,@(r0,Rn) */
L_0C09C3BE: BLKS(0x0C09C3BEu);
	r13 = 0xFFFFE9BAu; UPD(0x0C09C3C0u, 1);  /* 0C09C3BE mov.w @(disp,pc),Rn */
	IF(0x0C09C3C0u); { u32 tv_ = (r13 + 0x0C09C3C4u); u32 t_ = PHYS(tv_); r14 += 0x3Cu; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09C3C0 braf Rn */
L_0C09C3DC: BLKS(0x0C09C3DCu);
	{ IF(0x0C09C3DEu); ; /* slot nop */ UPD(0x0C09B990u, 3); goto L_0C09B990; }  /* 0C09C3DC bra */
}

void f_0C09C3D0(sh3_t *c)
{
	LOCALS;
	goto L_0C09C3D0;
L_0C09ACF4: BLKS(0x0C09ACF4u);
	r14 += 0x3Cu;  /* 0C09ACF4 add #imm,Rn */
	r15 = r14;  /* 0C09ACF6 mov Rm,Rn */
	IF(0x0C09ACF8u); PR = R32(r15); r15 += 4; UPD(0x0C09ACFAu, 3);  /* 0C09ACF8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09ACFCu, 1);  /* 0C09ACFA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C09ACFEu, 1);  /* 0C09ACFC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09AD00u, 1);  /* 0C09ACFE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09AD02u, 1);  /* 0C09AD00 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09AD04u, 1);  /* 0C09AD02 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09AD06u, 1);  /* 0C09AD04 mov.l @Rm+,Rn */
	IF(0x0C09AD06u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09AD06 jmp @Rn */
L_0C09B990: BLKS(0x0C09B990u);
	r1 = 0xC0999E0u; UPD(0x0C09B992u, 1);  /* 0C09B990 mov.l @(disp,pc),Rn */
	{ r4 = r11; /* slot mov Rm,Rn */ UPD(0x0C09ACF4u, 3); goto L_0C09ACF4; }  /* 0C09B992 bra */
L_0C09BCE6: BLKS(0x0C09BCE6u);
	r1 = 0xC0A03B0u; UPD(0x0C09BCE8u, 1);  /* 0C09BCE6 mov.l @(disp,pc),Rn */
	r13 = 0xFFFFF006u; UPD(0x0C09BCEAu, 1);  /* 0C09BCE8 mov.w @(disp,pc),Rn */
	IF(0x0C09BCEAu); { u32 tv_ = (r13 + 0x0C09BCEEu); u32 t_ = PHYS(tv_); r4 = r11; /* slot mov Rm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09BCEA braf Rn */
L_0C09C3D0: BLKS(0x0C09C3D0u);
	r12 = 0xC0A03F0u; UPD(0x0C09C3D2u, 1);  /* 0C09C3D0 mov.l @(disp,pc),Rn */
	IF(0x0C09C3D2u); { u32 t_ = r12; PR = 0x0C09C3D6u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C09C3D6u); }  /* 0C09C3D2 jsr @Rn */
L_0C09C3D6: BLKS(0x0C09C3D6u);
	IF(0x0C09C3D6u); T = (s32)r0 >= 0;  /* 0C09C3D6 cmp/pz Rn */
	{ u32 c_ = T; r13 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C09C3E0u, 4); goto L_0C09C3E0; } goto L_0C09C3DC; }  /* 0C09C3D8 bt/s */
L_0C09C3DC: BLKS(0x0C09C3DCu);
	{ IF(0x0C09C3DEu); ; /* slot nop */ UPD(0x0C09B990u, 4); goto L_0C09B990; }  /* 0C09C3DC bra */
L_0C09C3E0: BLKS(0x0C09C3E0u);
	r2 = 0xB4u; UPD(0x0C09C3E2u, 1);  /* 0C09C3E0 mov.w @(disp,pc),Rn */
	IF(0x0C09C3E2u); MACL = r11 * r2;  /* 0C09C3E2 mul.l Rm,Rn */
	r1 = 0xB4u; UPD(0x0C09C3E6u, 3);  /* 0C09C3E4 mov.w @(disp,pc),Rn */
	IF(0x0C09C3E6u); r0 = MACL;  /* 0C09C3E6 sts macl,Rn */
	IF(0x0C09C3E8u); MACL = r13 * r1;  /* 0C09C3E8 mul.l Rm,Rn */
	r12 = 0xC26CD40u; UPD(0x0C09C3ECu, 4);  /* 0C09C3EA mov.l @(disp,pc),Rn */
	r2 += 0xFFFFFFD0u;  /* 0C09C3EC add #imm,Rn */
	r0 += r12;  /* 0C09C3EE add Rm,Rn */
	IF(0x0C09C3F0u); r13 = MACL;  /* 0C09C3F0 sts macl,Rn */
	r5 = r0;  /* 0C09C3F2 mov Rm,Rn */
	r13 += r12;  /* 0C09C3F4 add Rm,Rn */
	r5 += r2;  /* 0C09C3F6 add Rm,Rn */
	r2 += r13;  /* 0C09C3F8 add Rm,Rn */
	r2 += 0x2u;  /* 0C09C3FA add #imm,Rn */
	r10 = (u32)(s32)(s16)R16(r2); UPD(0x0C09C3FEu, 9);  /* 0C09C3FC mov.w @Rm,Rn */
	r5 += 0x2u;  /* 0C09C3FE add #imm,Rn */
	r8 = 0xC058060u; UPD(0x0C09C402u, 2);  /* 0C09C400 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C09C402 mov Rm,Rn */
	W16(r5, r10); UPD(0x0C09C406u, 2);  /* 0C09C404 mov.w Rm,@Rn */
	r9 = 0x100000u; UPD(0x0C09C408u, 1);  /* 0C09C406 mov.l @(disp,pc),Rn */
	W32(r14 + 0x38u, r0); UPD(0x0C09C40Au, 1);  /* 0C09C408 mov.l Rm,@(disp,Rn) */
	IF(0x0C09C40Au); { u32 t_ = r8; PR = 0x0C09C40Eu; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C09C40Eu); }  /* 0C09C40A jsr @Rn */
L_0C09C40E: BLKS(0x0C09C40Eu);
	r4 = r10;  /* 0C09C40E mov Rm,Rn */
	r6 = R32(r13 + 0x24u); UPD(0x0C09C412u, 2);  /* 0C09C410 mov.l @(disp,Rm),Rn */
	r5 = r9;  /* 0C09C412 mov Rm,Rn */
	r10 = 0xC058030u; UPD(0x0C09C416u, 2);  /* 0C09C414 mov.l @(disp,pc),Rn */
	r6 += r0;  /* 0C09C416 add Rm,Rn */
	r7 = R32(r14 + 0x38u); UPD(0x0C09C41Au, 2);  /* 0C09C418 mov.l @(disp,Rm),Rn */
	IF(0x0C09C41Au); { u32 t_ = r10; PR = 0x0C09C41Eu; W32(r7 + 0x24u, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C09C41Eu); }  /* 0C09C41A jsr @Rn */
L_0C09C41E: BLKS(0x0C09C41Eu);
	r4 = R32(r13 + 0x28u); UPD(0x0C09C420u, 1);  /* 0C09C41E mov.l @(disp,Rm),Rn */
	r6 = R32(r14 + 0x38u); UPD(0x0C09C422u, 1);  /* 0C09C420 mov.l @(disp,Rm),Rn */
	r4 += r0;  /* 0C09C422 add Rm,Rn */
	r0 = 0xA8u; UPD(0x0C09C426u, 2);  /* 0C09C424 mov.w @(disp,pc),Rn */
	r10 = r6;  /* 0C09C426 mov Rm,Rn */
	r10 += r0;  /* 0C09C428 add Rm,Rn */
	r13 += r0;  /* 0C09C42A add Rm,Rn */
	r8 = 0xAFu; UPD(0x0C09C42Eu, 4);  /* 0C09C42C mov.w @(disp,pc),Rn */
	r0 = r6;  /* 0C09C42E mov Rm,Rn */
	IF(0x0C09C430u); r9 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C09C432u, 2);  /* 0C09C430 mov.b @(r0,Rm),Rn */
	r13 += 0x1u;  /* 0C09C432 add #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r13); UPD(0x0C09C436u, 2);  /* 0C09C434 mov.b @Rm,Rn */
	r10 += 0x1u;  /* 0C09C436 add #imm,Rn */
	r0 = 0x80u; UPD(0x0C09C43Au, 2);  /* 0C09C438 mov.w @(disp,pc),Rn */
	r3 += r9;  /* 0C09C43A add Rm,Rn */
	IF(0x0C09C43Cu); r13 = (u32)(s32)(s16)R16(r0 + r6); UPD(0x0C09C43Eu, 2);  /* 0C09C43C mov.w @(r0,Rm),Rn */
	W32(r6 + 0x28u, r4); UPD(0x0C09C440u, 1);  /* 0C09C43E mov.l Rm,@(disp,Rn) */
	r5 = 0xB4u; UPD(0x0C09C442u, 1);  /* 0C09C440 mov.w @(disp,pc),Rn */
	r4 = R32(r6); UPD(0x0C09C444u, 1);  /* 0C09C442 mov.l @Rm,Rn */
	IF(0x0C09C444u); MACL = r13 * r5;  /* 0C09C444 mul.l Rm,Rn */
	r2 = 0xECFFFFFFu; UPD(0x0C09C448u, 3);  /* 0C09C446 mov.l @(disp,pc),Rn */
	r4 &= r2;  /* 0C09C448 and Rm,Rn */
	W32(r6, r4); UPD(0x0C09C44Cu, 2);  /* 0C09C44A mov.l Rm,@Rn */
	IF(0x0C09C44Cu); r8 = MACL;  /* 0C09C44C sts macl,Rn */
	r8 += r12;  /* 0C09C44E add Rm,Rn */
	r7 = R32(r8); UPD(0x0C09C452u, 3);  /* 0C09C450 mov.l @Rm,Rn */
	W8(r10, r3); UPD(0x0C09C454u, 1);  /* 0C09C452 mov.b Rm,@Rn */
	r1 = 0x13000000u; UPD(0x0C09C456u, 1);  /* 0C09C454 mov.l @(disp,pc),Rn */
	r10 = R32(r8 + 0x38u); UPD(0x0C09C458u, 1);  /* 0C09C456 mov.l @(disp,Rm),Rn */
	r7 &= r1;  /* 0C09C458 and Rm,Rn */
	r4 |= r7;  /* 0C09C45A or Rm,Rn */
	r0 = R32(r6 + 0xCu); UPD(0x0C09C45Eu, 3);  /* 0C09C45C mov.l @(disp,Rm),Rn */
	W32(r6, r4); UPD(0x0C09C460u, 1);  /* 0C09C45E mov.l Rm,@Rn */
	T = r0 == 0xFu;  /* 0C09C460 cmp/eq #imm,r0 */
	{ u32 c_ = T; W32(r6 + 0x38u, r10); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C09C470u, 4); goto L_0C09C470; } UPD(0x0C09C466u, 1); goto L_0C09C466; }  /* 0C09C462 bt/s */
L_0C09C466: BLKS(0x0C09C466u);
	r0 += 0x1u;  /* 0C09C466 add #imm,Rn */
	{ W32(r6 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C09BCE6u, 4); goto L_0C09BCE6; }  /* 0C09C468 bra */
L_0C09C470: BLKS(0x0C09C470u);
	r1 = R32(r6 + 0x8u); UPD(0x0C09C472u, 1);  /* 0C09C470 mov.l @(disp,Rm),Rn */
	r1 += 0x1u;  /* 0C09C472 add #imm,Rn */
	r12 = 0x0u;  /* 0C09C474 mov #imm,Rn */
	W32(r6 + 0x8u, r1); UPD(0x0C09C478u, 3);  /* 0C09C476 mov.l Rm,@(disp,Rn) */
	{ W32(r6 + 0xCu, r12); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C09BCE6u, 3); goto L_0C09BCE6; }  /* 0C09C478 bra */
}

void f_0C09C4B0(sh3_t *c)
{
	LOCALS;
	goto L_0C09C4B0;
L_0C09ACF4: BLKS(0x0C09ACF4u);
	r14 += 0x3Cu;  /* 0C09ACF4 add #imm,Rn */
	r15 = r14;  /* 0C09ACF6 mov Rm,Rn */
	IF(0x0C09ACF8u); PR = R32(r15); r15 += 4; UPD(0x0C09ACFAu, 3);  /* 0C09ACF8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09ACFCu, 1);  /* 0C09ACFA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C09ACFEu, 1);  /* 0C09ACFC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09AD00u, 1);  /* 0C09ACFE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09AD02u, 1);  /* 0C09AD00 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09AD04u, 1);  /* 0C09AD02 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09AD06u, 1);  /* 0C09AD04 mov.l @Rm+,Rn */
	IF(0x0C09AD06u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09AD06 jmp @Rn */
L_0C09B990: BLKS(0x0C09B990u);
	r1 = 0xC0999E0u; UPD(0x0C09B992u, 1);  /* 0C09B990 mov.l @(disp,pc),Rn */
	{ r4 = r11; /* slot mov Rm,Rn */ UPD(0x0C09ACF4u, 3); goto L_0C09ACF4; }  /* 0C09B992 bra */
L_0C09C3BC: BLKS(0x0C09C3BCu);
	IF(0x0C09C3BCu); W16(r0 + r2, r1); UPD(0x0C09C3BEu, 1);  /* 0C09C3BC mov.w Rm,@(r0,Rn) */
	r13 = 0xFFFFE9BAu; UPD(0x0C09C3C0u, 1);  /* 0C09C3BE mov.w @(disp,pc),Rn */
	IF(0x0C09C3C0u); { u32 tv_ = (r13 + 0x0C09C3C4u); u32 t_ = PHYS(tv_); r14 += 0x3Cu; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09C3C0 braf Rn */
L_0C09C4B0: BLKS(0x0C09C4B0u);
	r12 = 0xC0A03F0u; UPD(0x0C09C4B2u, 1);  /* 0C09C4B0 mov.l @(disp,pc),Rn */
	IF(0x0C09C4B2u); { u32 t_ = r12; PR = 0x0C09C4B6u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C09C4B6u); }  /* 0C09C4B2 jsr @Rn */
L_0C09C4B6: BLKS(0x0C09C4B6u);
	IF(0x0C09C4B6u); T = (s32)r0 >= 0;  /* 0C09C4B6 cmp/pz Rn */
	if (!T) { UPD(0x0C09C58Cu, 4); goto L_0C09C58C; }  /* 0C09C4B8 bf */
L_0C09C4BA: BLKS(0x0C09C4BAu);
	r1 = 0xB4u; UPD(0x0C09C4BCu, 1);  /* 0C09C4BA mov.w @(disp,pc),Rn */
	IF(0x0C09C4BCu); MACL = r11 * r1;  /* 0C09C4BC mul.l Rm,Rn */
	r2 = 0xB4u; UPD(0x0C09C4C0u, 3);  /* 0C09C4BE mov.w @(disp,pc),Rn */
	IF(0x0C09C4C0u); r7 = MACL;  /* 0C09C4C0 sts macl,Rn */
	IF(0x0C09C4C2u); MACL = r0 * r2;  /* 0C09C4C2 mul.l Rm,Rn */
	r12 = 0xC26CD40u; UPD(0x0C09C4C6u, 4);  /* 0C09C4C4 mov.l @(disp,pc),Rn */
	r4 = 0x84u; UPD(0x0C09C4C8u, 1);  /* 0C09C4C6 mov.w @(disp,pc),Rn */
	r7 += r12;  /* 0C09C4C8 add Rm,Rn */
	r5 = r7;  /* 0C09C4CA mov Rm,Rn */
	IF(0x0C09C4CCu); r13 = MACL;  /* 0C09C4CC sts macl,Rn */
	r13 += r12;  /* 0C09C4CE add Rm,Rn */
	r5 += r4;  /* 0C09C4D0 add Rm,Rn */
	r4 += r13;  /* 0C09C4D2 add Rm,Rn */
	r4 += 0x2u;  /* 0C09C4D4 add #imm,Rn */
	r10 = (u32)(s32)(s16)R16(r4); UPD(0x0C09C4D8u, 8);  /* 0C09C4D6 mov.w @Rm,Rn */
	r5 += 0x2u;  /* 0C09C4D8 add #imm,Rn */
	r8 = 0xC058060u; UPD(0x0C09C4DCu, 2);  /* 0C09C4DA mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C09C4DC mov Rm,Rn */
	W16(r5, r10); UPD(0x0C09C4E0u, 2);  /* 0C09C4DE mov.w Rm,@Rn */
	r9 = 0x100000u; UPD(0x0C09C4E2u, 1);  /* 0C09C4E0 mov.l @(disp,pc),Rn */
	W32(r14 + 0x38u, r7); UPD(0x0C09C4E4u, 1);  /* 0C09C4E2 mov.l Rm,@(disp,Rn) */
	IF(0x0C09C4E4u); { u32 t_ = r8; PR = 0x0C09C4E8u; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C09C4E8u); }  /* 0C09C4E4 jsr @Rn */
L_0C09C4E8: BLKS(0x0C09C4E8u);
	r6 = R32(r13 + 0x24u); UPD(0x0C09C4EAu, 1);  /* 0C09C4E8 mov.l @(disp,Rm),Rn */
	r4 = r10;  /* 0C09C4EA mov Rm,Rn */
	r6 += r0;  /* 0C09C4EC add Rm,Rn */
	r10 = 0xC058030u; UPD(0x0C09C4F0u, 3);  /* 0C09C4EE mov.l @(disp,pc),Rn */
	r5 = r9;  /* 0C09C4F0 mov Rm,Rn */
	r0 = R32(r14 + 0x38u); UPD(0x0C09C4F4u, 2);  /* 0C09C4F2 mov.l @(disp,Rm),Rn */
	IF(0x0C09C4F4u); { u32 t_ = r10; PR = 0x0C09C4F8u; W32(r0 + 0x24u, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C09C4F8u); }  /* 0C09C4F4 jsr @Rn */
L_0C09C4F8: BLKS(0x0C09C4F8u);
	r3 = R32(r13 + 0x28u); UPD(0x0C09C4FAu, 1);  /* 0C09C4F8 mov.l @(disp,Rm),Rn */
	r6 = R32(r14 + 0x38u); UPD(0x0C09C4FCu, 1);  /* 0C09C4FA mov.l @(disp,Rm),Rn */
	r3 += r0;  /* 0C09C4FC add Rm,Rn */
	r8 = 0xA8u; UPD(0x0C09C500u, 2);  /* 0C09C4FE mov.w @(disp,pc),Rn */
	r0 = r6;  /* 0C09C500 mov Rm,Rn */
	r9 = 0xAFu; UPD(0x0C09C504u, 2);  /* 0C09C502 mov.w @(disp,pc),Rn */
	r13 += r8;  /* 0C09C504 add Rm,Rn */
	IF(0x0C09C506u); r1 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C09C508u, 2);  /* 0C09C506 mov.b @(r0,Rm),Rn */
	r13 += 0x1u;  /* 0C09C508 add #imm,Rn */
	r7 = (u32)(s32)(s8)R8(r13); UPD(0x0C09C50Cu, 2);  /* 0C09C50A mov.b @Rm,Rn */
	r10 = r6;  /* 0C09C50C mov Rm,Rn */
	r0 = 0x80u; UPD(0x0C09C510u, 2);  /* 0C09C50E mov.w @(disp,pc),Rn */
	r10 += r8;  /* 0C09C510 add Rm,Rn */
	IF(0x0C09C512u); r4 = (u32)(s32)(s16)R16(r0 + r6); UPD(0x0C09C514u, 2);  /* 0C09C512 mov.w @(r0,Rm),Rn */
	r10 += 0x1u;  /* 0C09C514 add #imm,Rn */
	r13 = 0xB4u; UPD(0x0C09C518u, 2);  /* 0C09C516 mov.w @(disp,pc),Rn */
	r7 += r1;  /* 0C09C518 add Rm,Rn */
	W32(r6 + 0x28u, r3); UPD(0x0C09C51Cu, 2);  /* 0C09C51A mov.l Rm,@(disp,Rn) */
	IF(0x0C09C51Cu); MACL = r4 * r13;  /* 0C09C51C mul.l Rm,Rn */
	r3 = R32(r6); UPD(0x0C09C520u, 3);  /* 0C09C51E mov.l @Rm,Rn */
	r2 = 0xECFFFFFFu; UPD(0x0C09C522u, 1);  /* 0C09C520 mov.l @(disp,pc),Rn */
	IF(0x0C09C522u); r8 = MACL;  /* 0C09C522 sts macl,Rn */
	r3 &= r2;  /* 0C09C524 and Rm,Rn */
	W32(r6, r3); UPD(0x0C09C528u, 3);  /* 0C09C526 mov.l Rm,@Rn */
	r8 += r12;  /* 0C09C528 add Rm,Rn */
	r0 = R32(r8); UPD(0x0C09C52Cu, 2);  /* 0C09C52A mov.l @Rm,Rn */
	r4 = 0xFFFFFFFFu;  /* 0C09C52C mov #imm,Rn */
	r5 = 0x13000000u; UPD(0x0C09C530u, 2);  /* 0C09C52E mov.l @(disp,pc),Rn */
	r0 &= r5;  /* 0C09C530 and Rm,Rn */
	r3 |= r0;  /* 0C09C532 or Rm,Rn */
	r0 = R32(r6 + 0xCu); UPD(0x0C09C536u, 3);  /* 0C09C534 mov.l @(disp,Rm),Rn */
	r0 += 0x1u;  /* 0C09C536 add #imm,Rn */
	r0 &= 0x7u;  /* 0C09C538 and #imm,r0 */
	W8(r10, r7); UPD(0x0C09C53Cu, 3);  /* 0C09C53A mov.b Rm,@Rn */
	T = r0 == 0x7u;  /* 0C09C53C cmp/eq #imm,r0 */
	W32(r6 + 0xCu, r0); UPD(0x0C09C540u, 2);  /* 0C09C53E mov.l Rm,@(disp,Rn) */
	r10 = 0x9Au; UPD(0x0C09C542u, 1);  /* 0C09C540 mov.w @(disp,pc),Rn */
	r0 = r6;  /* 0C09C542 mov Rm,Rn */
	W32(r6, r3); UPD(0x0C09C546u, 2);  /* 0C09C544 mov.l Rm,@Rn */
	IF(0x0C09C546u); r9 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C09C548u, 1);  /* 0C09C546 mov.b @(r0,Rm),Rn */
	{ u32 t_ = 0u - r4, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r3 = r_; }  /* 0C09C548 negc Rm,Rn */
	r7 = R32(r8 + 0x38u); UPD(0x0C09C54Cu, 2);  /* 0C09C54A mov.l @(disp,Rm),Rn */
	T = (r9 & r9) == 0;  /* 0C09C54C tst Rm,Rn */
	{ u32 t_ = 0u - r4, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r13 = r_; }  /* 0C09C54E negc Rm,Rn */
	r3 |= r13;  /* 0C09C550 or Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C09C552 tst Rm,Rn */
	{ u32 c_ = T; W32(r6 + 0x38u, r7); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C09C560u, 7); goto L_0C09C560; } UPD(0x0C09C558u, 1); goto L_0C09C558; }  /* 0C09C554 bt/s */
L_0C09C558: BLKS(0x0C09C558u);
	r1 = 0xFFFFE84Au; UPD(0x0C09C55Au, 1);  /* 0C09C558 mov.w @(disp,pc),Rn */
	IF(0x0C09C55Au); { u32 tv_ = (r1 + 0x0C09C55Eu); u32 t_ = PHYS(tv_); IF(0x0C09C55Cu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09C55A braf Rn */
L_0C09C560: BLKS(0x0C09C560u);
	r13 = R32(r6 + 0x8u); UPD(0x0C09C562u, 1);  /* 0C09C560 mov.l @(disp,Rm),Rn */
	r4 = r11;  /* 0C09C562 mov Rm,Rn */
	r12 = 0xC0A03B0u; UPD(0x0C09C566u, 2);  /* 0C09C564 mov.l @(disp,pc),Rn */
	r13 += 0x1u;  /* 0C09C566 add #imm,Rn */
	W32(r6 + 0x8u, r13); UPD(0x0C09C56Au, 2);  /* 0C09C568 mov.l Rm,@(disp,Rn) */
	W32(r6 + 0xCu, r3); UPD(0x0C09C56Cu, 1);  /* 0C09C56A mov.l Rm,@(disp,Rn) */
	IF(0x0C09C56Cu); { u32 t_ = r12; PR = 0x0C09C570u; W32(r14 + 0x38u, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A03B0, 0x0C0A03B0u, 0x0C09C570u); }  /* 0C09C56C jsr @Rn */
L_0C09C570: BLKS(0x0C09C570u);
	r11 = R32(r14 + 0x38u); UPD(0x0C09C572u, 1);  /* 0C09C570 mov.l @(disp,Rm),Rn */
	r1 = 0x1u;  /* 0C09C572 mov #imm,Rn */
	r2 = 0x8Au; UPD(0x0C09C576u, 2);  /* 0C09C574 mov.w @(disp,pc),Rn */
	{ r0 = r11; /* slot mov Rm,Rn */ UPD(0x0C09C3BCu, 3); goto L_0C09C3BC; }  /* 0C09C576 bra */
L_0C09C58C: BLKS(0x0C09C58Cu);
	{ IF(0x0C09C58Eu); ; /* slot nop */ UPD(0x0C09B990u, 3); goto L_0C09B990; }  /* 0C09C58C bra */
}

void f_0C09C580(sh3_t *c)
{
	LOCALS;
	goto L_0C09C580;
L_0C09ACF4: BLKS(0x0C09ACF4u);
	r14 += 0x3Cu;  /* 0C09ACF4 add #imm,Rn */
	r15 = r14;  /* 0C09ACF6 mov Rm,Rn */
	IF(0x0C09ACF8u); PR = R32(r15); r15 += 4; UPD(0x0C09ACFAu, 3);  /* 0C09ACF8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09ACFCu, 1);  /* 0C09ACFA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C09ACFEu, 1);  /* 0C09ACFC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09AD00u, 1);  /* 0C09ACFE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09AD02u, 1);  /* 0C09AD00 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09AD04u, 1);  /* 0C09AD02 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09AD06u, 1);  /* 0C09AD04 mov.l @Rm+,Rn */
	IF(0x0C09AD06u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09AD06 jmp @Rn */
L_0C09B990: BLKS(0x0C09B990u);
	r1 = 0xC0999E0u; UPD(0x0C09B992u, 1);  /* 0C09B990 mov.l @(disp,pc),Rn */
	{ r4 = r11; /* slot mov Rm,Rn */ UPD(0x0C09ACF4u, 3); goto L_0C09ACF4; }  /* 0C09B992 bra */
L_0C09BCE6: BLKS(0x0C09BCE6u);
	r1 = 0xC0A03B0u; UPD(0x0C09BCE8u, 1);  /* 0C09BCE6 mov.l @(disp,pc),Rn */
	r13 = 0xFFFFF006u; UPD(0x0C09BCEAu, 1);  /* 0C09BCE8 mov.w @(disp,pc),Rn */
	IF(0x0C09BCEAu); { u32 tv_ = (r13 + 0x0C09BCEEu); u32 t_ = PHYS(tv_); r4 = r11; /* slot mov Rm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09BCEA braf Rn */
L_0C09C468: BLKS(0x0C09C468u);
	{ W32(r6 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C09BCE6u, 3); goto L_0C09BCE6; }  /* 0C09C468 bra */
L_0C09C474: BLKS(0x0C09C474u);
	r12 = 0x0u;  /* 0C09C474 mov #imm,Rn */
	W32(r6 + 0x8u, r1); UPD(0x0C09C478u, 2);  /* 0C09C476 mov.l Rm,@(disp,Rn) */
	{ W32(r6 + 0xCu, r12); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C09BCE6u, 3); goto L_0C09BCE6; }  /* 0C09C478 bra */
L_0C09C580: BLKS(0x0C09C580u);
	r9 = 0xC0A03F0u; UPD(0x0C09C582u, 1);  /* 0C09C580 mov.l @(disp,pc),Rn */
	IF(0x0C09C582u); { u32 t_ = r9; PR = 0x0C09C586u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C09C586u); }  /* 0C09C582 jsr @Rn */
L_0C09C586: BLKS(0x0C09C586u);
	IF(0x0C09C586u); T = (s32)r0 >= 0;  /* 0C09C586 cmp/pz Rn */
	{ u32 c_ = T; r13 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C09C590u, 4); goto L_0C09C590; } goto L_0C09C58C; }  /* 0C09C588 bt/s */
L_0C09C58C: BLKS(0x0C09C58Cu);
	{ IF(0x0C09C58Eu); ; /* slot nop */ UPD(0x0C09B990u, 4); goto L_0C09B990; }  /* 0C09C58C bra */
L_0C09C590: BLKS(0x0C09C590u);
	r4 = 0xB4u; UPD(0x0C09C592u, 1);  /* 0C09C590 mov.w @(disp,pc),Rn */
	IF(0x0C09C592u); MACL = r11 * r4;  /* 0C09C592 mul.l Rm,Rn */
	r2 = 0xB4u; UPD(0x0C09C596u, 3);  /* 0C09C594 mov.w @(disp,pc),Rn */
	IF(0x0C09C596u); r0 = MACL;  /* 0C09C596 sts macl,Rn */
	IF(0x0C09C598u); MACL = r13 * r2;  /* 0C09C598 mul.l Rm,Rn */
	r12 = 0xC26CD40u; UPD(0x0C09C59Cu, 4);  /* 0C09C59A mov.l @(disp,pc),Rn */
	r4 += 0xFFFFFFD0u;  /* 0C09C59C add #imm,Rn */
	r0 += r12;  /* 0C09C59E add Rm,Rn */
	IF(0x0C09C5A0u); r9 = MACL;  /* 0C09C5A0 sts macl,Rn */
	r5 = r0;  /* 0C09C5A2 mov Rm,Rn */
	r9 += r12;  /* 0C09C5A4 add Rm,Rn */
	r5 += r4;  /* 0C09C5A6 add Rm,Rn */
	r4 += r9;  /* 0C09C5A8 add Rm,Rn */
	r4 += 0x2u;  /* 0C09C5AA add #imm,Rn */
	r10 = (u32)(s32)(s16)R16(r4); UPD(0x0C09C5AEu, 9);  /* 0C09C5AC mov.w @Rm,Rn */
	r5 += 0x2u;  /* 0C09C5AE add #imm,Rn */
	r8 = 0xC058060u; UPD(0x0C09C5B2u, 2);  /* 0C09C5B0 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C09C5B2 mov Rm,Rn */
	W16(r5, r10); UPD(0x0C09C5B6u, 2);  /* 0C09C5B4 mov.w Rm,@Rn */
	r13 = 0x100000u; UPD(0x0C09C5B8u, 1);  /* 0C09C5B6 mov.l @(disp,pc),Rn */
	W32(r14 + 0x38u, r0); UPD(0x0C09C5BAu, 1);  /* 0C09C5B8 mov.l Rm,@(disp,Rn) */
	IF(0x0C09C5BAu); { u32 t_ = r8; PR = 0x0C09C5BEu; r5 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C09C5BEu); }  /* 0C09C5BA jsr @Rn */
L_0C09C5BE: BLKS(0x0C09C5BEu);
	r6 = R32(r9 + 0x24u); UPD(0x0C09C5C0u, 1);  /* 0C09C5BE mov.l @(disp,Rm),Rn */
	r4 = r10;  /* 0C09C5C0 mov Rm,Rn */
	r8 = 0xC058030u; UPD(0x0C09C5C4u, 2);  /* 0C09C5C2 mov.l @(disp,pc),Rn */
	r6 += r0;  /* 0C09C5C4 add Rm,Rn */
	r7 = R32(r14 + 0x38u); UPD(0x0C09C5C8u, 2);  /* 0C09C5C6 mov.l @(disp,Rm),Rn */
	r5 = r13;  /* 0C09C5C8 mov Rm,Rn */
	IF(0x0C09C5CAu); { u32 t_ = r8; PR = 0x0C09C5CEu; W32(r7 + 0x24u, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C09C5CEu); }  /* 0C09C5CA jsr @Rn */
L_0C09C5CE: BLKS(0x0C09C5CEu);
	r3 = R32(r9 + 0x28u); UPD(0x0C09C5D0u, 1);  /* 0C09C5CE mov.l @(disp,Rm),Rn */
	r3 += r0;  /* 0C09C5D0 add Rm,Rn */
	r0 = 0xA8u; UPD(0x0C09C5D4u, 2);  /* 0C09C5D2 mov.w @(disp,pc),Rn */
	r9 += r0;  /* 0C09C5D4 add Rm,Rn */
	r6 = R32(r14 + 0x38u); UPD(0x0C09C5D8u, 2);  /* 0C09C5D6 mov.l @(disp,Rm),Rn */
	r9 += 0x1u;  /* 0C09C5D8 add #imm,Rn */
	r10 = (u32)(s32)(s8)R8(r9); UPD(0x0C09C5DCu, 2);  /* 0C09C5DA mov.b @Rm,Rn */
	r13 = r6;  /* 0C09C5DC mov Rm,Rn */
	r13 += r0;  /* 0C09C5DE add Rm,Rn */
	r9 = 0xAFu; UPD(0x0C09C5E2u, 3);  /* 0C09C5E0 mov.w @(disp,pc),Rn */
	r0 = r6;  /* 0C09C5E2 mov Rm,Rn */
	IF(0x0C09C5E4u); r1 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C09C5E6u, 2);  /* 0C09C5E4 mov.b @(r0,Rm),Rn */
	r13 += 0x1u;  /* 0C09C5E6 add #imm,Rn */
	r0 = 0x80u; UPD(0x0C09C5EAu, 2);  /* 0C09C5E8 mov.w @(disp,pc),Rn */
	r10 += r1;  /* 0C09C5EA add Rm,Rn */
	IF(0x0C09C5ECu); r4 = (u32)(s32)(s16)R16(r0 + r6); UPD(0x0C09C5EEu, 2);  /* 0C09C5EC mov.w @(r0,Rm),Rn */
	W32(r6 + 0x28u, r3); UPD(0x0C09C5F0u, 1);  /* 0C09C5EE mov.l Rm,@(disp,Rn) */
	r5 = 0xB4u; UPD(0x0C09C5F2u, 1);  /* 0C09C5F0 mov.w @(disp,pc),Rn */
	r3 = R32(r6); UPD(0x0C09C5F4u, 1);  /* 0C09C5F2 mov.l @Rm,Rn */
	IF(0x0C09C5F4u); MACL = r4 * r5;  /* 0C09C5F4 mul.l Rm,Rn */
	r2 = 0xECFFFFFFu; UPD(0x0C09C5F8u, 3);  /* 0C09C5F6 mov.l @(disp,pc),Rn */
	r3 &= r2;  /* 0C09C5F8 and Rm,Rn */
	W32(r6, r3); UPD(0x0C09C5FCu, 2);  /* 0C09C5FA mov.l Rm,@Rn */
	IF(0x0C09C5FCu); r0 = MACL;  /* 0C09C5FC sts macl,Rn */
	r0 += r12;  /* 0C09C5FE add Rm,Rn */
	W8(r13, r10); UPD(0x0C09C602u, 3);  /* 0C09C600 mov.b Rm,@Rn */
	r8 = R32(r0); UPD(0x0C09C604u, 1);  /* 0C09C602 mov.l @Rm,Rn */
	r7 = 0x13000000u; UPD(0x0C09C606u, 1);  /* 0C09C604 mov.l @(disp,pc),Rn */
	r10 = R32(r0 + 0x38u); UPD(0x0C09C608u, 1);  /* 0C09C606 mov.l @(disp,Rm),Rn */
	r8 &= r7;  /* 0C09C608 and Rm,Rn */
	r3 |= r8;  /* 0C09C60A or Rm,Rn */
	r0 = R32(r6 + 0xCu); UPD(0x0C09C60Eu, 3);  /* 0C09C60C mov.l @(disp,Rm),Rn */
	W32(r6, r3); UPD(0x0C09C610u, 1);  /* 0C09C60E mov.l Rm,@Rn */
	T = r0 == 0xFu;  /* 0C09C610 cmp/eq #imm,r0 */
	{ u32 c_ = T; W32(r6 + 0x38u, r10); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C09C61Au, 4); goto L_0C09C61A; } UPD(0x0C09C616u, 1); goto L_0C09C616; }  /* 0C09C612 bt/s */
L_0C09C616: BLKS(0x0C09C616u);
	{ r0 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C09C468u, 3); goto L_0C09C468; }  /* 0C09C616 bra */
L_0C09C61A: BLKS(0x0C09C61Au);
	r1 = R32(r6 + 0x8u); UPD(0x0C09C61Cu, 1);  /* 0C09C61A mov.l @(disp,Rm),Rn */
	{ r1 += 0xFFFFFFFDu; /* slot add #imm,Rn */ UPD(0x0C09C474u, 3); goto L_0C09C474; }  /* 0C09C61C bra */
}

void f_0C09C620(sh3_t *c)
{
	LOCALS;
L_0C09C620: BLKS(0x0C09C620u);
	r10 = 0xC0A0540u; UPD(0x0C09C622u, 1);  /* 0C09C620 mov.l @(disp,pc),Rn */
	IF(0x0C09C622u); { u32 t_ = r10; PR = 0x0C09C626u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0540, 0x0C0A0540u, 0x0C09C626u); }  /* 0C09C622 jsr @Rn */
L_0C09C626: BLKS(0x0C09C626u);
	IF(0x0C09C626u); T = (s32)r0 >= 0;  /* 0C09C626 cmp/pz Rn */
	if (T) { UPD(0x0C09C632u, 4); goto L_0C09C632; }  /* 0C09C628 bt */
L_0C09C62A: BLKS(0x0C09C62Au);
	r0 = 0xFFFFE7E0u; UPD(0x0C09C62Cu, 1);  /* 0C09C62A mov.w @(disp,pc),Rn */
	IF(0x0C09C62Cu); { u32 tv_ = (r0 + 0x0C09C630u); u32 t_ = PHYS(tv_); IF(0x0C09C62Eu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09C62C braf Rn */
L_0C09C632: BLKS(0x0C09C632u);
	r1 = 0xB4u; UPD(0x0C09C634u, 1);  /* 0C09C632 mov.w @(disp,pc),Rn */
	IF(0x0C09C634u); MACL = r0 * r1;  /* 0C09C634 mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C09C638u, 3);  /* 0C09C636 mov.l @(disp,pc),Rn */
	IF(0x0C09C638u); r7 = MACL;  /* 0C09C638 sts macl,Rn */
	r7 += r2;  /* 0C09C63A add Rm,Rn */
	r0 = R32(r7 + 0x8u); UPD(0x0C09C63Eu, 3);  /* 0C09C63C mov.l @(disp,Rm),Rn */
	T = r0 == 0x20u;  /* 0C09C63E cmp/eq #imm,r0 */
	{ u32 c_ = T; IF(0x0C09C642u); MACL = r11 * r1; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C09C680u, 5); goto L_0C09C680; } goto L_0C09C644; }  /* 0C09C640 bt/s */
L_0C09C644: BLKS(0x0C09C644u);
	IF(0x0C09C644u); r1 = MACL;  /* 0C09C644 sts macl,Rn */
	r11 = 0xFFFFEE1Cu; UPD(0x0C09C648u, 4);  /* 0C09C646 mov.w @(disp,pc),Rn */
	IF(0x0C09C648u); { u32 tv_ = (r11 + 0x0C09C64Cu); u32 t_ = PHYS(tv_); r1 += r2; /* slot add Rm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09C648 braf Rn */
L_0C09C680: BLKS(0x0C09C680u);
	IF(0x0C09C680u); MACL = r11 * r1;  /* 0C09C680 mul.l Rm,Rn */
	r0 = 0xA8u; UPD(0x0C09C684u, 3);  /* 0C09C682 mov.w @(disp,pc),Rn */
	IF(0x0C09C684u); r8 = MACL;  /* 0C09C684 sts macl,Rn */
	r8 += r2;  /* 0C09C686 add Rm,Rn */
	r9 = r8;  /* 0C09C688 mov Rm,Rn */
	r9 += r0;  /* 0C09C68A add Rm,Rn */
	r0 += r7;  /* 0C09C68C add Rm,Rn */
	r0 += 0x1u;  /* 0C09C68E add #imm,Rn */
	r12 = (u32)(s32)(s8)R8(r0); UPD(0x0C09C692u, 7);  /* 0C09C690 mov.b @Rm,Rn */
	r9 += 0x1u;  /* 0C09C692 add #imm,Rn */
	r3 = 0xAFu; UPD(0x0C09C696u, 2);  /* 0C09C694 mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C09C696 mov Rm,Rn */
	IF(0x0C09C698u); r5 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C09C69Au, 2);  /* 0C09C698 mov.b @(r0,Rm),Rn */
	r13 = 0x9Au; UPD(0x0C09C69Cu, 1);  /* 0C09C69A mov.w @(disp,pc),Rn */
	r0 = r7;  /* 0C09C69C mov Rm,Rn */
	r6 = R32(r7 + 0x24u); UPD(0x0C09C6A0u, 2);  /* 0C09C69E mov.l @(disp,Rm),Rn */
	r12 += r5;  /* 0C09C6A0 add Rm,Rn */
	r4 = R32(r7 + 0x28u); UPD(0x0C09C6A4u, 2);  /* 0C09C6A2 mov.l @(disp,Rm),Rn */
	r10 = R32(r8 + 0x2Cu); UPD(0x0C09C6A6u, 1);  /* 0C09C6A4 mov.l @(disp,Rm),Rn */
	r1 = R32(r8 + 0x30u); UPD(0x0C09C6A8u, 1);  /* 0C09C6A6 mov.l @(disp,Rm),Rn */
	r6 += r10;  /* 0C09C6A8 add Rm,Rn */
	IF(0x0C09C6AAu); r2 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C09C6ACu, 2);  /* 0C09C6AA mov.b @(r0,Rm),Rn */
	r4 += r1;  /* 0C09C6AC add Rm,Rn */
	r0 = r2 & 0xFF;  /* 0C09C6AE extu.b Rm,Rn */
	W32(r8 + 0x24u, r6); UPD(0x0C09C6B2u, 3);  /* 0C09C6B0 mov.l Rm,@(disp,Rn) */
	T = (r0 & r0) == 0;  /* 0C09C6B2 tst Rm,Rn */
	W32(r8 + 0x28u, r4); UPD(0x0C09C6B6u, 2);  /* 0C09C6B4 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = T; W8(r9, r12); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C09C76Cu, 3); goto L_0C09C76C; } UPD(0x0C09C6BAu, 1); goto L_0C09C6BA; }  /* 0C09C6B6 bt/s */
L_0C09C6BA: BLKS(0x0C09C6BAu);
	r9 = 0xC1D64E6u; UPD(0x0C09C6BCu, 1);  /* 0C09C6BA mov.l @(disp,pc),Rn */
	r0 += r0;  /* 0C09C6BC add Rm,Rn */
	r7 = 0xC0A03B0u; UPD(0x0C09C6C0u, 2);  /* 0C09C6BE mov.l @(disp,pc),Rn */
	r2 = 0x0u;  /* 0C09C6C0 mov #imm,Rn */
	IF(0x0C09C6C2u); r13 = (u32)(s32)(s16)R16(r0 + r9); UPD(0x0C09C6C4u, 2);  /* 0C09C6C2 mov.w @(r0,Rm),Rn */
	r4 = r11;  /* 0C09C6C4 mov Rm,Rn */
	W32(r8 + 0x8u, r13); UPD(0x0C09C6C8u, 2);  /* 0C09C6C6 mov.l Rm,@(disp,Rn) */
	r11 = 0x1u;  /* 0C09C6C8 mov #imm,Rn */
	IF(0x0C09C6CAu); { u32 t_ = r7; PR = 0x0C09C6CEu; W32(r8 + 0xCu, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C0A03B0, 0x0C0A03B0u, 0x0C09C6CEu); }  /* 0C09C6CA jsr @Rn */
L_0C09C6CE: BLKS(0x0C09C6CEu);
	r0 = 0x88u; UPD(0x0C09C6D0u, 1);  /* 0C09C6CE mov.w @(disp,pc),Rn */
	r4 = 0x75u;  /* 0C09C6D0 mov #imm,Rn */
	r1 = 0xFFFFED58u; UPD(0x0C09C6D4u, 2);  /* 0C09C6D2 mov.w @(disp,pc),Rn */
	IF(0x0C09C6D4u); { u32 tv_ = (r1 + 0x0C09C6D8u); u32 t_ = PHYS(tv_); IF(0x0C09C6D6u); W16(r0 + r8, r11); /* slot mov.w Rm,@(r0,Rn) */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09C6D4 braf Rn */
L_0C09C76C: BLKS(0x0C09C76Cu);
	r13 = 0xFFFFE60Cu; UPD(0x0C09C76Eu, 1);  /* 0C09C76C mov.w @(disp,pc),Rn */
	IF(0x0C09C76Eu); { u32 tv_ = (r13 + 0x0C09C772u); u32 t_ = PHYS(tv_); r14 += 0x3Cu; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09C76E braf Rn */
}


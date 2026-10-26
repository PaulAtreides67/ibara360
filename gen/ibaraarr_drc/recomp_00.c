#include "recomp.h"
#include "recomp_funcs.h"

void f_0C000000(sh3_t *c)
{
	LOCALS;
L_0C000000: BLKS(0x0C000000u);
	r15 = 0xC800000u; UPD(0x0C000002u, 1);  /* 0C000000 mov.l @(disp,pc),Rn */
	r0 = 0x700000F0u; UPD(0x0C000004u, 1);  /* 0C000002 mov.l @(disp,pc),Rn */
	IF(0x0C000004u); ARG0(0x400Eu); SET_SR(r0); UPDI(0x0C000006u);  /* 0C000004 ldc Rn,sr */
L_0C000006: BLKS(0x0C000006u);
	r0 = 0xE0D4D102u; UPD(0x0C000008u, 1);  /* 0C000006 mov.l @(disp,pc),Rn */
	IF(0x0C000008u); c->vbr = r0;  /* 0C000008 ldc Rn,vbr */
	r0 = 0x6002011Eu; UPD(0x0C00000Cu, 2);  /* 0C00000A mov.l @(disp,pc),Rn */
	IF(0x0C00000Cu); c->gbr = r0;  /* 0C00000C ldc Rn,gbr */
	r0 = 0x412B0009u; UPD(0x0C000010u, 2);  /* 0C00000E mov.l @(disp,pc),Rn */
	W16(c->gbr + 0x86u, r0); UPD(0x0C000012u, 1);  /* 0C000010 mov.w r0,@(disp,gbr) */
	r0 = 0xC001000u; UPD(0x0C000014u, 1);  /* 0C000012 mov.l @(disp,pc),Rn */
	W16(c->gbr + 0x86u, r0); UPD(0x0C000016u, 1);  /* 0C000014 mov.w r0,@(disp,gbr) */
	r0 = 0x5A00u; UPD(0x0C000018u, 1);  /* 0C000016 mov.l @(disp,pc),Rn */
	W16(c->gbr + 0x84u, r0); UPD(0x0C00001Au, 1);  /* 0C000018 mov.w r0,@(disp,gbr) */
	r0 = 0x112u; UPD(0x0C00001Cu, 1);  /* 0C00001A mov.l @(disp,pc),Rn */
	W16(c->gbr + 0x80u, r0); UPD(0x0C00001Eu, 1);  /* 0C00001C mov.w r0,@(disp,gbr) */
	r1 = 0xA4000000u; UPD(0x0C000020u, 1);  /* 0C00001E mov.l @(disp,pc),Rn */
	r0 = 0x8000u; UPD(0x0C000022u, 1);  /* 0C000020 mov.l @(disp,pc),Rn */
	W16(r1 + 0x10u, r0); UPD(0x0C000024u, 1);  /* 0C000022 mov.w r0,@(disp,Rn) */
	r0 = 0xC008u; UPD(0x0C000026u, 1);  /* 0C000024 mov.l @(disp,pc),Rn */
	W16(c->gbr + 0x60u, r0); UPD(0x0C000028u, 1);  /* 0C000026 mov.w r0,@(disp,gbr) */
	r0 = 0x39F0u; UPD(0x0C00002Au, 1);  /* 0C000028 mov.l @(disp,pc),Rn */
	W16(c->gbr + 0x62u, r0); UPD(0x0C00002Cu, 1);  /* 0C00002A mov.w r0,@(disp,gbr) */
	r0 = 0x9551u; UPD(0x0C00002Eu, 1);  /* 0C00002C mov.l @(disp,pc),Rn */
	W16(c->gbr + 0x64u, r0); UPD(0x0C000030u, 1);  /* 0C00002E mov.w r0,@(disp,gbr) */
	r0 = 0xFDD7u; UPD(0x0C000032u, 1);  /* 0C000030 mov.l @(disp,pc),Rn */
	W16(c->gbr + 0x66u, r0); UPD(0x0C000034u, 1);  /* 0C000032 mov.w r0,@(disp,gbr) */
	r0 = 0x543Cu; UPD(0x0C000036u, 1);  /* 0C000034 mov.l @(disp,pc),Rn */
	W16(c->gbr + 0x68u, r0); UPD(0x0C000038u, 1);  /* 0C000036 mov.w r0,@(disp,gbr) */
	r0 = 0xA560u; UPD(0x0C00003Au, 1);  /* 0C000038 mov.l @(disp,pc),Rn */
	W16(c->gbr + 0x72u, r0); UPD(0x0C00003Cu, 1);  /* 0C00003A mov.w r0,@(disp,gbr) */
	r0 = 0x412B0009u; UPD(0x0C00003Eu, 1);  /* 0C00003C mov.l @(disp,pc),Rn */
	W16(c->gbr + 0x70u, r0); UPD(0x0C000040u, 1);  /* 0C00003E mov.w r0,@(disp,gbr) */
	r0 = 0xA510u; UPD(0x0C000042u, 1);  /* 0C000040 mov.l @(disp,pc),Rn */
	W16(c->gbr + 0x6Eu, r0); UPD(0x0C000044u, 1);  /* 0C000042 mov.w r0,@(disp,gbr) */
	r1 = 0xFFFFE880u; UPD(0x0C000046u, 1);  /* 0C000044 mov.l @(disp,pc),Rn */
	r0 ^= r0;  /* 0C000046 xor Rm,Rn */
	W16(r1, r0); UPD(0x0C00004Au, 2);  /* 0C000048 mov.w Rm,@Rn */
	r1 = 0xA4000100u; UPD(0x0C00004Cu, 1);  /* 0C00004A mov.l @(disp,pc),Rn */
	r0 = 0xAAAAu; UPD(0x0C00004Eu, 1);  /* 0C00004C mov.l @(disp,pc),Rn */
	W16(r1 + 0x4u, r0); UPD(0x0C000050u, 1);  /* 0C00004E mov.w r0,@(disp,Rn) */
	W16(r1 + 0x6u, r0); UPD(0x0C000052u, 1);  /* 0C000050 mov.w r0,@(disp,Rn) */
	W16(r1 + 0x14u, r0); UPD(0x0C000054u, 1);  /* 0C000052 mov.w r0,@(disp,Rn) */
	r1 = 0xA4000110u; UPD(0x0C000056u, 1);  /* 0C000054 mov.l @(disp,pc),Rn */
	r0 = 0xA544u; UPD(0x0C000058u, 1);  /* 0C000056 mov.l @(disp,pc),Rn */
	W16(r1, r0); UPD(0x0C00005Au, 1);  /* 0C000058 mov.w Rm,@Rn */
	r1 = 0xA4000108u; UPD(0x0C00005Cu, 1);  /* 0C00005A mov.l @(disp,pc),Rn */
	r0 = 0x1944u; UPD(0x0C00005Eu, 1);  /* 0C00005C mov.l @(disp,pc),Rn */
	W16(r1, r0); UPD(0x0C000060u, 1);  /* 0C00005E mov.w Rm,@Rn */
	r1 += 0x20u;  /* 0C000060 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r1); UPD(0x0C000064u, 2);  /* 0C000062 mov.b @Rm,Rn */
	r0 |= 0x10u;  /* 0C000064 or #imm,r0 */
	W8(r1, r0); UPD(0x0C000068u, 2);  /* 0C000066 mov.b Rm,@Rn */
	r1 = 0xA400010Au; UPD(0x0C00006Au, 1);  /* 0C000068 mov.l @(disp,pc),Rn */
	r0 = 0x9u; UPD(0x0C00006Cu, 1);  /* 0C00006A mov.l @(disp,pc),Rn */
	W16(r1, r0); UPD(0x0C00006Eu, 1);  /* 0C00006C mov.w Rm,@Rn */
	r1 = 0xA400010Cu; UPD(0x0C000070u, 1);  /* 0C00006E mov.l @(disp,pc),Rn */
	r0 = 0x0u; UPD(0x0C000072u, 1);  /* 0C000070 mov.l @(disp,pc),Rn */
	W16(r1, r0); UPD(0x0C000074u, 1);  /* 0C000072 mov.w Rm,@Rn */
	r1 = 0xA400010Eu; UPD(0x0C000076u, 1);  /* 0C000074 mov.l @(disp,pc),Rn */
	r0 = 0x0u; UPD(0x0C000078u, 1);  /* 0C000076 mov.l @(disp,pc),Rn */
	W16(r1, r0); UPD(0x0C00007Au, 1);  /* 0C000078 mov.w Rm,@Rn */
	r1 = 0xA4000116u; UPD(0x0C00007Cu, 1);  /* 0C00007A mov.l @(disp,pc),Rn */
	r0 = 0x0u; UPD(0x0C00007Eu, 1);  /* 0C00007C mov.l @(disp,pc),Rn */
	W16(r1, r0); UPD(0x0C000080u, 1);  /* 0C00007E mov.w Rm,@Rn */
	IF(0x0C000080u); ;  /* 0C000080 nop */
	r7 = 0x40000u; UPD(0x0C000084u, 2);  /* 0C000082 mov.l @(disp,pc),Rn */
	r3 = 0xC39508Cu; UPD(0x0C000086u, 1);  /* 0C000084 mov.l @(disp,pc),Rn */
	r0 = 0xC000000u; UPD(0x0C000088u, 1);  /* 0C000086 mov.l @(disp,pc),Rn */
	r1 = 0xA0000000u; UPD(0x0C00008Au, 1);  /* 0C000088 mov.l @(disp,pc),Rn */
	r3 -= r0;  /* 0C00008A sub Rm,Rn */
	r2 = 0xAC000000u; UPD(0x0C00008Eu, 2);  /* 0C00008C mov.l @(disp,pc),Rn */
	r3 += 0x3u;  /* 0C00008E add #imm,Rn */
	IF(0x0C000090u); r3 >>= 2;  /* 0C000090 shlr2 Rn */
	UPD(0x0C000092u, 2);
L_0C000092: BLKS(0x0C000092u);
	{ u32 v_ = R32(r1); r1 += 4; r0 = v_; } UPD(0x0C000094u, 1);  /* 0C000092 mov.l @Rm+,Rn */
	IF(0x0C000094u); r3 -= 1; T = r3 == 0;  /* 0C000094 dt Rn */
	W32(r2, r0); UPD(0x0C000098u, 2);  /* 0C000096 mov.l Rm,@Rn */
	{ u32 c_ = !T; r2 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C000092u, 3); goto L_0C000092; } goto L_0C00009C; }  /* 0C000098 bf/s */
L_0C00009C: BLKS(0x0C00009Cu);
	r1 = 0x1B8u; UPD(0x0C00009Eu, 2);  /* 0C00009C mov.l @(disp,pc),Rn */
	r2 = 0xAC000100u; UPD(0x0C0000A0u, 1);  /* 0C00009E mov.l @(disp,pc),Rn */
	r3 = 0x4u; UPD(0x0C0000A2u, 1);  /* 0C0000A0 mov.l @(disp,pc),Rn */
L_0C0000A2: BLKS(0x0C0000A2u);
	{ u32 v_ = R32(r1); r1 += 4; r0 = v_; } UPD(0x0C0000A4u, 1);  /* 0C0000A2 mov.l @Rm+,Rn */
	IF(0x0C0000A4u); r3 -= 1; T = r3 == 0;  /* 0C0000A4 dt Rn */
	W32(r2, r0); UPD(0x0C0000A8u, 2);  /* 0C0000A6 mov.l Rm,@Rn */
	{ u32 c_ = !T; r2 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0000A2u, 3); goto L_0C0000A2; } goto L_0C0000AC; }  /* 0C0000A8 bf/s */
L_0C0000AC: BLKS(0x0C0000ACu);
	r1 = 0x1C8u; UPD(0x0C0000AEu, 2);  /* 0C0000AC mov.l @(disp,pc),Rn */
	r2 = 0xAC000400u; UPD(0x0C0000B0u, 1);  /* 0C0000AE mov.l @(disp,pc),Rn */
	r3 = 0x4u; UPD(0x0C0000B2u, 1);  /* 0C0000B0 mov.l @(disp,pc),Rn */
L_0C0000B2: BLKS(0x0C0000B2u);
	{ u32 v_ = R32(r1); r1 += 4; r0 = v_; } UPD(0x0C0000B4u, 1);  /* 0C0000B2 mov.l @Rm+,Rn */
	IF(0x0C0000B4u); r3 -= 1; T = r3 == 0;  /* 0C0000B4 dt Rn */
	W32(r2, r0); UPD(0x0C0000B8u, 2);  /* 0C0000B6 mov.l Rm,@Rn */
	{ u32 c_ = !T; r2 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0000B2u, 3); goto L_0C0000B2; } goto L_0C0000BC; }  /* 0C0000B8 bf/s */
L_0C0000BC: BLKS(0x0C0000BCu);
	r1 = 0x1D8u; UPD(0x0C0000BEu, 2);  /* 0C0000BC mov.l @(disp,pc),Rn */
	r2 = 0xAC000600u; UPD(0x0C0000C0u, 1);  /* 0C0000BE mov.l @(disp,pc),Rn */
	r3 = 0x5u; UPD(0x0C0000C2u, 1);  /* 0C0000C0 mov.l @(disp,pc),Rn */
L_0C0000C2: BLKS(0x0C0000C2u);
	{ u32 v_ = R32(r1); r1 += 4; r0 = v_; } UPD(0x0C0000C4u, 1);  /* 0C0000C2 mov.l @Rm+,Rn */
	IF(0x0C0000C4u); r3 -= 1; T = r3 == 0;  /* 0C0000C4 dt Rn */
	W32(r2, r0); UPD(0x0C0000C8u, 2);  /* 0C0000C6 mov.l Rm,@Rn */
	{ u32 c_ = !T; r2 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0000C2u, 3); goto L_0C0000C2; } goto L_0C0000CC; }  /* 0C0000C8 bf/s */
L_0C0000CC: BLKS(0x0C0000CCu);
	r1 = 0xFFFFF00Fu; UPD(0x0C0000CEu, 2);  /* 0C0000CC mov.w @(disp,pc),Rn */
	r2 = 0x430u; UPD(0x0C0000D0u, 1);  /* 0C0000CE mov.w @(disp,pc),Rn */
	r3 = 0xA4000000u; UPD(0x0C0000D2u, 1);  /* 0C0000D0 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s16)R16(r3); UPD(0x0C0000D4u, 1);  /* 0C0000D2 mov.w @Rm,Rn */
	r0 &= r1;  /* 0C0000D4 and Rm,Rn */
	r0 |= r2;  /* 0C0000D6 or Rm,Rn */
	W16(r3 + 0x16u, r0); UPD(0x0C0000DAu, 3);  /* 0C0000D8 mov.w r0,@(disp,Rn) */
	r1 = 0x0u; UPD(0x0C0000DCu, 1);  /* 0C0000DA mov.l @(disp,pc),Rn */
	r0 = 0xB8000010u; UPD(0x0C0000DEu, 1);  /* 0C0000DC mov.l @(disp,pc),Rn */
	W32(r0, r1); UPD(0x0C0000E0u, 1);  /* 0C0000DE mov.l Rm,@Rn */
	r0 = 0xC002A30u; UPD(0x0C0000E2u, 1);  /* 0C0000E0 mov.l @(disp,pc),Rn */
	r4 = 0x0u; UPD(0x0C0000E4u, 1);  /* 0C0000E2 mov.l @(disp,pc),Rn */
	IF(0x0C0000E4u); { u32 t_ = r0; PR = 0x0C0000E8u; IF(0x0C0000E6u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C002A30, 0x0C002A30u, 0x0C0000E8u); }  /* 0C0000E4 jsr @Rn */
L_0C0000E8: BLKS(0x0C0000E8u);
	r0 = 0x1u;  /* 0C0000E8 mov #imm,Rn */
	W32(c->gbr + 0xECu, r0); UPD(0x0C0000ECu, 2);  /* 0C0000EA mov.l r0,@(disp,gbr) */
	r0 = 0xC04EB20u; UPD(0x0C0000EEu, 1);  /* 0C0000EC mov.l @(disp,pc),Rn */
	IF(0x0C0000EEu); { u32 tv_ = r0; u32 t_ = PHYS(tv_); IF(0x0C0000F0u); ; /* slot nop */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C04EB20u: TAIL(f_0C04EB20); default: JUMPD(tv_); } }  /* 0C0000EE jmp @Rn */
}

/* vbr_general_exception */
void f_0C000100(sh3_t *c)
{
	LOCALS;
L_0C000100: BLKS(0x0C000100u);
	r0 = 0xFFFFFFD4u;  /* 0C000100 mov #imm,Rn */
	r1 = 0xC001000u; UPD(0x0C000104u, 2);  /* 0C000102 mov.l @(disp,pc),Rn */
	r0 = R32(r0); UPD(0x0C000106u, 1);  /* 0C000104 mov.l @Rm,Rn */
	IF(0x0C000106u); r1 = R32(r0 + r1); UPD(0x0C000108u, 1);  /* 0C000106 mov.l @(r0,Rm),Rn */
	IF(0x0C000108u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); IF(0x0C00010Au); ; /* slot nop */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C000108 jmp @Rn */
}

/* vbr_tlb_miss */
void f_0C000400(sh3_t *c)
{
	LOCALS;
L_0C000400: BLKS(0x0C000400u);
	r0 = 0xFFFFFFD4u;  /* 0C000400 mov #imm,Rn */
	r1 = 0xC001000u; UPD(0x0C000404u, 2);  /* 0C000402 mov.l @(disp,pc),Rn */
	r0 = R32(r0); UPD(0x0C000406u, 1);  /* 0C000404 mov.l @Rm,Rn */
	IF(0x0C000406u); r1 = R32(r0 + r1); UPD(0x0C000408u, 1);  /* 0C000406 mov.l @(r0,Rm),Rn */
	IF(0x0C000408u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); IF(0x0C00040Au); ; /* slot nop */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C000408 jmp @Rn */
}

/* vbr_interrupt */
void f_0C000600(sh3_t *c)
{
	LOCALS;
L_0C000600: BLKS(0x0C000600u);
	r0 = 0xA4000000u; UPD(0x0C000602u, 1);  /* 0C000600 mov.l @(disp,pc),Rn */
	r1 = 0xC001000u; UPD(0x0C000604u, 1);  /* 0C000602 mov.l @(disp,pc),Rn */
	r0 = R32(r0); UPD(0x0C000606u, 1);  /* 0C000604 mov.l @Rm,Rn */
	IF(0x0C000606u); r1 = R32(r0 + r1); UPD(0x0C000608u, 1);  /* 0C000606 mov.l @(r0,Rm),Rn */
	IF(0x0C000608u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); IF(0x0C00060Au); ; /* slot nop */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C000608 jmp @Rn */
}

void f_0C0015A4(sh3_t *c)
{
	LOCALS;
L_0C0015A4: BLKS(0x0C0015A4u);
	r13 = 0x0u; UPD(0x0C0015A6u, 1);  /* 0C0015A4 mov.l @(disp,pc),Rn */
	IF(0x0C0015A6u); { u32 tv_ = r13; u32 t_ = PHYS(tv_); IF(0x0C0015A8u); ; /* slot nop */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0015A6 jmp @Rn */
}

void f_0C002000(sh3_t *c)
{
	LOCALS;
L_0C002000: BLKS(0x0C002000u);
	r1 = 0xFFFFFFFCu;  /* 0C002000 mov #imm,Rn */
	r5 = 0xC002050u; UPD(0x0C002004u, 2);  /* 0C002002 mov.l @(disp,pc),Rn */
	r2 = 0xA400002Cu; UPD(0x0C002006u, 1);  /* 0C002004 mov.l @(disp,pc),Rn */
	r3 = R32(r5 + 0x0u); UPD(0x0C002008u, 1);  /* 0C002006 mov.l @(disp,Rm),Rn */
	r0 = R32(r2); UPD(0x0C00200Au, 1);  /* 0C002008 mov.l @Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C00200A tst Rm,Rn */
	r0 &= r1;  /* 0C00200C and Rm,Rn */
	{ u32 c_ = T; W32(r2, r0); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C002044u, 5); goto L_0C002044; } UPD(0x0C002012u, 1); goto L_0C002012; }  /* 0C00200E bt/s */
L_0C002012: BLKS(0x0C002012u);
	r4 = R32(r5 + 0x4u); UPD(0x0C002014u, 1);  /* 0C002012 mov.l @(disp,Rm),Rn */
	IF(0x0C002014u); r15 -= 4; W32(r15, PR); UPD(0x0C002016u, 1);  /* 0C002014 sts.l pr,@-Rn */
	IF(0x0C002016u); r15 -= 4; W32(r15, MACH); UPD(0x0C002018u, 1);  /* 0C002016 sts.l mach,@-Rn */
	IF(0x0C002018u); r15 -= 4; W32(r15, MACL); UPD(0x0C00201Au, 1);  /* 0C002018 sts.l macl,@-Rn */
	IF(0x0C00201Au); r15 -= 4; W32(r15, c->gbr); UPD(0x0C00201Cu, 1);  /* 0C00201A stc.l gbr,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C00201Eu, 1);  /* 0C00201C mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C002020u, 1);  /* 0C00201E mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C002022u, 1);  /* 0C002020 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C002024u, 1);  /* 0C002022 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C002026u, 1);  /* 0C002024 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C002028u, 1);  /* 0C002026 mov.l Rm,@-Rn */
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C00202Au, 1);  /* 0C002028 mov.l Rm,@-Rn */
	IF(0x0C00202Au); { u32 t_ = r3; PR = 0x0C00202Eu; IF(0x0C00202Cu); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C00202Eu); }  /* 0C00202A jsr @Rn */
L_0C00202E: BLKS(0x0C00202Eu);
	{ u32 v_ = R32(r15); r15 += 4; r8 = v_; } UPD(0x0C002030u, 1);  /* 0C00202E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C002032u, 1);  /* 0C002030 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C002034u, 1);  /* 0C002032 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C002036u, 1);  /* 0C002034 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C002038u, 1);  /* 0C002036 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C00203Au, 1);  /* 0C002038 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C00203Cu, 1);  /* 0C00203A mov.l @Rm+,Rn */
	IF(0x0C00203Cu); c->gbr = R32(r15); r15 += 4; UPD(0x0C00203Eu, 1);  /* 0C00203C ldc.l @Rn+,gbr */
	IF(0x0C00203Eu); MACL = R32(r15); r15 += 4; UPD(0x0C002040u, 1);  /* 0C00203E lds.l @Rn+,macl */
	IF(0x0C002040u); MACH = R32(r15); r15 += 4; UPD(0x0C002042u, 1);  /* 0C002040 lds.l @Rn+,mach */
	IF(0x0C002042u); PR = R32(r15); r15 += 4; UPD(0x0C002044u, 1);  /* 0C002042 lds.l @Rn+,pr */
L_0C002044: BLKS(0x0C002044u);
	IF(0x0C002044u); { u32 t_ = c->spc; SET_SR(c->ssr); IF(0x0C002046u); ; /* slot nop */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C002044 rte */
}

void f_0C002160(sh3_t *c)
{
	LOCALS;
L_0C002160: BLKS(0x0C002160u);
	r5 = 0xC0021B0u; UPD(0x0C002162u, 1);  /* 0C002160 mov.l @(disp,pc),Rn */
	r1 = 0xFFFFFFFEu;  /* 0C002162 mov #imm,Rn */
	r3 = R32(r5 + 0x0u); UPD(0x0C002166u, 2);  /* 0C002164 mov.l @(disp,Rm),Rn */
	r2 = 0xA4000004u; UPD(0x0C002168u, 1);  /* 0C002166 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C00216Au, 1);  /* 0C002168 mov.b @Rm,Rn */
	W8(r2, r1); UPD(0x0C00216Cu, 1);  /* 0C00216A mov.b Rm,@Rn */
	T = (r3 & r3) == 0;  /* 0C00216C tst Rm,Rn */
	{ u32 c_ = T; IF(0x0C002170u); ; /* slot nop */ if (c_) { UPD(0x0C0021A4u, 4); goto L_0C0021A4; } goto L_0C002172; }  /* 0C00216E bt/s */
L_0C002172: BLKS(0x0C002172u);
	r4 = R32(r5 + 0x4u); UPD(0x0C002174u, 2);  /* 0C002172 mov.l @(disp,Rm),Rn */
	IF(0x0C002174u); r15 -= 4; W32(r15, PR); UPD(0x0C002176u, 1);  /* 0C002174 sts.l pr,@-Rn */
	IF(0x0C002176u); r15 -= 4; W32(r15, MACH); UPD(0x0C002178u, 1);  /* 0C002176 sts.l mach,@-Rn */
	IF(0x0C002178u); r15 -= 4; W32(r15, MACL); UPD(0x0C00217Au, 1);  /* 0C002178 sts.l macl,@-Rn */
	IF(0x0C00217Au); r15 -= 4; W32(r15, c->gbr); UPD(0x0C00217Cu, 1);  /* 0C00217A stc.l gbr,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C00217Eu, 1);  /* 0C00217C mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C002180u, 1);  /* 0C00217E mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C002182u, 1);  /* 0C002180 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C002184u, 1);  /* 0C002182 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C002186u, 1);  /* 0C002184 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C002188u, 1);  /* 0C002186 mov.l Rm,@-Rn */
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C00218Au, 1);  /* 0C002188 mov.l Rm,@-Rn */
	IF(0x0C00218Au); { u32 t_ = r3; PR = 0x0C00218Eu; IF(0x0C00218Cu); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C00218Eu); }  /* 0C00218A jsr @Rn */
L_0C00218E: BLKS(0x0C00218Eu);
	{ u32 v_ = R32(r15); r15 += 4; r8 = v_; } UPD(0x0C002190u, 1);  /* 0C00218E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C002192u, 1);  /* 0C002190 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C002194u, 1);  /* 0C002192 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C002196u, 1);  /* 0C002194 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C002198u, 1);  /* 0C002196 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C00219Au, 1);  /* 0C002198 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C00219Cu, 1);  /* 0C00219A mov.l @Rm+,Rn */
	IF(0x0C00219Cu); c->gbr = R32(r15); r15 += 4; UPD(0x0C00219Eu, 1);  /* 0C00219C ldc.l @Rn+,gbr */
	IF(0x0C00219Eu); MACL = R32(r15); r15 += 4; UPD(0x0C0021A0u, 1);  /* 0C00219E lds.l @Rn+,macl */
	IF(0x0C0021A0u); MACH = R32(r15); r15 += 4; UPD(0x0C0021A2u, 1);  /* 0C0021A0 lds.l @Rn+,mach */
	IF(0x0C0021A2u); PR = R32(r15); r15 += 4; UPD(0x0C0021A4u, 1);  /* 0C0021A2 lds.l @Rn+,pr */
L_0C0021A4: BLKS(0x0C0021A4u);
	IF(0x0C0021A4u); { u32 t_ = c->spc; SET_SR(c->ssr); IF(0x0C0021A6u); ; /* slot nop */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C0021A4 rte */
}

void f_0C00222C(sh3_t *c)
{
	LOCALS;
L_0C00222C: BLKS(0x0C00222Cu);
	IF(0x0C00222Cu); r15 -= 4; W32(r15, PR); UPD(0x0C00222Eu, 1);  /* 0C00222C sts.l pr,@-Rn */
	IF(0x0C00222Eu); r15 -= 4; W32(r15, MACH); UPD(0x0C002230u, 1);  /* 0C00222E sts.l mach,@-Rn */
	IF(0x0C002230u); r15 -= 4; W32(r15, MACL); UPD(0x0C002232u, 1);  /* 0C002230 sts.l macl,@-Rn */
	IF(0x0C002232u); r15 -= 4; W32(r15, c->gbr); UPD(0x0C002234u, 1);  /* 0C002232 stc.l gbr,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C002236u, 1);  /* 0C002234 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C002238u, 1);  /* 0C002236 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C00223Au, 1);  /* 0C002238 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C00223Cu, 1);  /* 0C00223A mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C00223Eu, 1);  /* 0C00223C mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C002240u, 1);  /* 0C00223E mov.l Rm,@-Rn */
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C002242u, 1);  /* 0C002240 mov.l Rm,@-Rn */
	r4 = 0xB8000024u; UPD(0x0C002244u, 1);  /* 0C002242 mov.l @(disp,pc),Rn */
	r0 = R32(r4); UPD(0x0C002246u, 1);  /* 0C002244 mov.l @Rm,Rn */
	r3 = 0x1u; UPD(0x0C002248u, 1);  /* 0C002246 mov.l @(disp,pc),Rn */
	r3 |= r0;  /* 0C002248 or Rm,Rn */
	W32(r4, r3); UPD(0x0C00224Cu, 2);  /* 0C00224A mov.l Rm,@Rn */
	r0 = 0xFFFFFFFEu; UPD(0x0C00224Eu, 1);  /* 0C00224C mov.l @(disp,pc),Rn */
	r3 &= r0;  /* 0C00224E and Rm,Rn */
	W32(r4, r3); UPD(0x0C002252u, 2);  /* 0C002250 mov.l Rm,@Rn */
	r1 = 0xFFFFFFFBu; UPD(0x0C002254u, 1);  /* 0C002252 mov.l @(disp,pc),Rn */
	r2 = 0xA4000004u; UPD(0x0C002256u, 1);  /* 0C002254 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C002258u, 1);  /* 0C002256 mov.b @Rm,Rn */
	r0 &= r1;  /* 0C002258 and Rm,Rn */
	W8(r2, r0); UPD(0x0C00225Cu, 2);  /* 0C00225A mov.b Rm,@Rn */
	r2 = 0xC0022E0u; UPD(0x0C00225Eu, 1);  /* 0C00225C mov.l @(disp,pc),Rn */
	r1 = R32(r2 + 0x10u); UPD(0x0C002260u, 1);  /* 0C00225E mov.l @(disp,Rm),Rn */
	r0 = R32(r2 + 0x0u); UPD(0x0C002262u, 1);  /* 0C002260 mov.l @(disp,Rm),Rn */
	r1 += 0x1u;  /* 0C002262 add #imm,Rn */
	T = (r0 & r0) == 0;  /* 0C002264 tst Rm,Rn */
	r4 = R32(r2 + 0x4u); UPD(0x0C002268u, 3);  /* 0C002266 mov.l @(disp,Rm),Rn */
	{ u32 c_ = T; W32(r2 + 0x10u, r1); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C002270u, 3); goto L_0C002270; } UPD(0x0C00226Cu, 1); goto L_0C00226C; }  /* 0C002268 bt/s */
L_0C00226C: BLKS(0x0C00226Cu);
	IF(0x0C00226Cu); { u32 t_ = r0; PR = 0x0C002270u; IF(0x0C00226Eu); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C002270u); }  /* 0C00226C jsr @Rn */
L_0C002270: BLKS(0x0C002270u);
	r0 = 0xC0022E8u; UPD(0x0C002272u, 1);  /* 0C002270 mov.l @(disp,pc),Rn */
	r0 = R32(r0); UPD(0x0C002274u, 1);  /* 0C002272 mov.l @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C002274 tst Rm,Rn */
	{ u32 c_ = T; IF(0x0C002278u); ; /* slot nop */ if (c_) { UPD(0x0C00227Eu, 4); goto L_0C00227E; } goto L_0C00227A; }  /* 0C002276 bt/s */
L_0C00227A: BLKS(0x0C00227Au);
	IF(0x0C00227Au); { u32 t_ = r0; PR = 0x0C00227Eu; IF(0x0C00227Cu); ; /* slot nop */ UPD(t_, 3); CALLD(t_, 0x0C00227Eu); }  /* 0C00227A jsr @Rn */
L_0C00227E: BLKS(0x0C00227Eu);
	r0 = 0xC0022ECu; UPD(0x0C002280u, 1);  /* 0C00227E mov.l @(disp,pc),Rn */
	r0 = R32(r0); UPD(0x0C002282u, 1);  /* 0C002280 mov.l @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C002282 tst Rm,Rn */
	{ u32 c_ = T; IF(0x0C002286u); ; /* slot nop */ if (c_) { UPD(0x0C00228Cu, 4); goto L_0C00228C; } goto L_0C002288; }  /* 0C002284 bt/s */
L_0C002288: BLKS(0x0C002288u);
	IF(0x0C002288u); { u32 t_ = r0; PR = 0x0C00228Cu; IF(0x0C00228Au); ; /* slot nop */ UPD(t_, 3); CALLD(t_, 0x0C00228Cu); }  /* 0C002288 jsr @Rn */
L_0C00228C: BLKS(0x0C00228Cu);
	r0 = 0xC04AD24u; UPD(0x0C00228Eu, 1);  /* 0C00228C mov.l @(disp,pc),Rn */
	r0 = R32(r0); UPD(0x0C002290u, 1);  /* 0C00228E mov.l @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C002290 tst Rm,Rn */
	{ u32 c_ = T; IF(0x0C002294u); ; /* slot nop */ if (c_) { UPD(0x0C00229Cu, 4); goto L_0C00229C; } goto L_0C002296; }  /* 0C002292 bt/s */
L_0C002296: BLKS(0x0C002296u);
	r0 = 0xC04B3F4u; UPD(0x0C002298u, 2);  /* 0C002296 mov.l @(disp,pc),Rn */
	IF(0x0C002298u); { u32 t_ = r0; PR = 0x0C00229Cu; IF(0x0C00229Au); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04B3F4, 0x0C04B3F4u, 0x0C00229Cu); }  /* 0C002298 jsr @Rn */
L_0C00229C: BLKS(0x0C00229Cu);
	{ u32 v_ = R32(r15); r15 += 4; r8 = v_; } UPD(0x0C00229Eu, 1);  /* 0C00229C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0022A0u, 1);  /* 0C00229E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0022A2u, 1);  /* 0C0022A0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0022A4u, 1);  /* 0C0022A2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0022A6u, 1);  /* 0C0022A4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0022A8u, 1);  /* 0C0022A6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0022AAu, 1);  /* 0C0022A8 mov.l @Rm+,Rn */
	IF(0x0C0022AAu); c->gbr = R32(r15); r15 += 4; UPD(0x0C0022ACu, 1);  /* 0C0022AA ldc.l @Rn+,gbr */
	IF(0x0C0022ACu); MACL = R32(r15); r15 += 4; UPD(0x0C0022AEu, 1);  /* 0C0022AC lds.l @Rn+,macl */
	IF(0x0C0022AEu); MACH = R32(r15); r15 += 4; UPD(0x0C0022B0u, 1);  /* 0C0022AE lds.l @Rn+,mach */
	IF(0x0C0022B0u); PR = R32(r15); r15 += 4; UPD(0x0C0022B2u, 1);  /* 0C0022B0 lds.l @Rn+,pr */
	IF(0x0C0022B2u); { u32 t_ = c->spc; SET_SR(c->ssr); IF(0x0C0022B4u); ; /* slot nop */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C0022B2 rte */
}

void f_0C00255C(sh3_t *c)
{
	LOCALS;
L_0C00255C: BLKS(0x0C00255Cu);
	r1 = 0xFFFFFE9Cu; UPD(0x0C00255Eu, 1);  /* 0C00255C mov.l @(disp,pc),Rn */
	r2 = 0xFFFFFEFFu; UPD(0x0C002560u, 1);  /* 0C00255E mov.w @(disp,pc),Rn */
	r0 = (u32)(s32)(s16)R16(r1); UPD(0x0C002562u, 1);  /* 0C002560 mov.w @Rm,Rn */
	r5 = 0xC0025B0u; UPD(0x0C002564u, 1);  /* 0C002562 mov.l @(disp,pc),Rn */
	r0 &= r2;  /* 0C002564 and Rm,Rn */
	r3 = R32(r5 + 0x0u); UPD(0x0C002568u, 2);  /* 0C002566 mov.l @(disp,Rm),Rn */
	T = (r3 & r3) == 0;  /* 0C002568 tst Rm,Rn */
	r4 = R32(r5 + 0x4u); UPD(0x0C00256Cu, 2);  /* 0C00256A mov.l @(disp,Rm),Rn */
	{ u32 c_ = T; W16(r1, r0); /* slot mov.w Rm,@Rn */ if (c_) { UPD(0x0C0025A0u, 3); goto L_0C0025A0; } UPD(0x0C002570u, 1); goto L_0C002570; }  /* 0C00256C bt/s */
L_0C002570: BLKS(0x0C002570u);
	IF(0x0C002570u); r15 -= 4; W32(r15, PR); UPD(0x0C002572u, 1);  /* 0C002570 sts.l pr,@-Rn */
	IF(0x0C002572u); r15 -= 4; W32(r15, MACH); UPD(0x0C002574u, 1);  /* 0C002572 sts.l mach,@-Rn */
	IF(0x0C002574u); r15 -= 4; W32(r15, MACL); UPD(0x0C002576u, 1);  /* 0C002574 sts.l macl,@-Rn */
	IF(0x0C002576u); r15 -= 4; W32(r15, c->gbr); UPD(0x0C002578u, 1);  /* 0C002576 stc.l gbr,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C00257Au, 1);  /* 0C002578 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C00257Cu, 1);  /* 0C00257A mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C00257Eu, 1);  /* 0C00257C mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C002580u, 1);  /* 0C00257E mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C002582u, 1);  /* 0C002580 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C002584u, 1);  /* 0C002582 mov.l Rm,@-Rn */
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C002586u, 1);  /* 0C002584 mov.l Rm,@-Rn */
	IF(0x0C002586u); { u32 t_ = r3; PR = 0x0C00258Au; IF(0x0C002588u); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C00258Au); }  /* 0C002586 jsr @Rn */
L_0C00258A: BLKS(0x0C00258Au);
	{ u32 v_ = R32(r15); r15 += 4; r8 = v_; } UPD(0x0C00258Cu, 1);  /* 0C00258A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C00258Eu, 1);  /* 0C00258C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C002590u, 1);  /* 0C00258E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C002592u, 1);  /* 0C002590 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C002594u, 1);  /* 0C002592 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C002596u, 1);  /* 0C002594 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C002598u, 1);  /* 0C002596 mov.l @Rm+,Rn */
	IF(0x0C002598u); c->gbr = R32(r15); r15 += 4; UPD(0x0C00259Au, 1);  /* 0C002598 ldc.l @Rn+,gbr */
	IF(0x0C00259Au); MACL = R32(r15); r15 += 4; UPD(0x0C00259Cu, 1);  /* 0C00259A lds.l @Rn+,macl */
	IF(0x0C00259Cu); MACH = R32(r15); r15 += 4; UPD(0x0C00259Eu, 1);  /* 0C00259C lds.l @Rn+,mach */
	IF(0x0C00259Eu); PR = R32(r15); r15 += 4; UPD(0x0C0025A0u, 1);  /* 0C00259E lds.l @Rn+,pr */
L_0C0025A0: BLKS(0x0C0025A0u);
	IF(0x0C0025A0u); { u32 t_ = c->spc; SET_SR(c->ssr); IF(0x0C0025A2u); ; /* slot nop */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C0025A0 rte */
}

void f_0C0025B8(sh3_t *c)
{
	LOCALS;
L_0C0025B8: BLKS(0x0C0025B8u);
	r1 = 0xFFFFFEA8u; UPD(0x0C0025BAu, 1);  /* 0C0025B8 mov.l @(disp,pc),Rn */
	r2 = 0xFFFFFEFFu; UPD(0x0C0025BCu, 1);  /* 0C0025BA mov.w @(disp,pc),Rn */
	r0 = (u32)(s32)(s16)R16(r1); UPD(0x0C0025BEu, 1);  /* 0C0025BC mov.w @Rm,Rn */
	r5 = 0xC00260Cu; UPD(0x0C0025C0u, 1);  /* 0C0025BE mov.l @(disp,pc),Rn */
	r0 &= r2;  /* 0C0025C0 and Rm,Rn */
	r3 = R32(r5 + 0x0u); UPD(0x0C0025C4u, 2);  /* 0C0025C2 mov.l @(disp,Rm),Rn */
	T = (r3 & r3) == 0;  /* 0C0025C4 tst Rm,Rn */
	r4 = R32(r5 + 0x4u); UPD(0x0C0025C8u, 2);  /* 0C0025C6 mov.l @(disp,Rm),Rn */
	{ u32 c_ = T; W16(r1, r0); /* slot mov.w Rm,@Rn */ if (c_) { UPD(0x0C0025FCu, 3); goto L_0C0025FC; } UPD(0x0C0025CCu, 1); goto L_0C0025CC; }  /* 0C0025C8 bt/s */
L_0C0025CC: BLKS(0x0C0025CCu);
	IF(0x0C0025CCu); r15 -= 4; W32(r15, PR); UPD(0x0C0025CEu, 1);  /* 0C0025CC sts.l pr,@-Rn */
	IF(0x0C0025CEu); r15 -= 4; W32(r15, MACH); UPD(0x0C0025D0u, 1);  /* 0C0025CE sts.l mach,@-Rn */
	IF(0x0C0025D0u); r15 -= 4; W32(r15, MACL); UPD(0x0C0025D2u, 1);  /* 0C0025D0 sts.l macl,@-Rn */
	IF(0x0C0025D2u); r15 -= 4; W32(r15, c->gbr); UPD(0x0C0025D4u, 1);  /* 0C0025D2 stc.l gbr,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0025D6u, 1);  /* 0C0025D4 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0025D8u, 1);  /* 0C0025D6 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0025DAu, 1);  /* 0C0025D8 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0025DCu, 1);  /* 0C0025DA mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0025DEu, 1);  /* 0C0025DC mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0025E0u, 1);  /* 0C0025DE mov.l Rm,@-Rn */
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0025E2u, 1);  /* 0C0025E0 mov.l Rm,@-Rn */
	IF(0x0C0025E2u); { u32 t_ = r3; PR = 0x0C0025E6u; IF(0x0C0025E4u); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C0025E6u); }  /* 0C0025E2 jsr @Rn */
L_0C0025E6: BLKS(0x0C0025E6u);
	{ u32 v_ = R32(r15); r15 += 4; r8 = v_; } UPD(0x0C0025E8u, 1);  /* 0C0025E6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0025EAu, 1);  /* 0C0025E8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0025ECu, 1);  /* 0C0025EA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0025EEu, 1);  /* 0C0025EC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0025F0u, 1);  /* 0C0025EE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0025F2u, 1);  /* 0C0025F0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0025F4u, 1);  /* 0C0025F2 mov.l @Rm+,Rn */
	IF(0x0C0025F4u); c->gbr = R32(r15); r15 += 4; UPD(0x0C0025F6u, 1);  /* 0C0025F4 ldc.l @Rn+,gbr */
	IF(0x0C0025F6u); MACL = R32(r15); r15 += 4; UPD(0x0C0025F8u, 1);  /* 0C0025F6 lds.l @Rn+,macl */
	IF(0x0C0025F8u); MACH = R32(r15); r15 += 4; UPD(0x0C0025FAu, 1);  /* 0C0025F8 lds.l @Rn+,mach */
	IF(0x0C0025FAu); PR = R32(r15); r15 += 4; UPD(0x0C0025FCu, 1);  /* 0C0025FA lds.l @Rn+,pr */
L_0C0025FC: BLKS(0x0C0025FCu);
	IF(0x0C0025FCu); { u32 t_ = c->spc; SET_SR(c->ssr); IF(0x0C0025FEu); ; /* slot nop */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C0025FC rte */
}

void f_0C002614(sh3_t *c)
{
	LOCALS;
L_0C002614: BLKS(0x0C002614u);
	r1 = 0xFFFFFEB4u; UPD(0x0C002616u, 1);  /* 0C002614 mov.l @(disp,pc),Rn */
	r2 = 0xFFFFFCFFu; UPD(0x0C002618u, 1);  /* 0C002616 mov.w @(disp,pc),Rn */
	r4 = 0xC002674u; UPD(0x0C00261Au, 1);  /* 0C002618 mov.l @(disp,pc),Rn */
	r5 = 0xC002670u; UPD(0x0C00261Cu, 1);  /* 0C00261A mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s16)R16(r1); UPD(0x0C00261Eu, 1);  /* 0C00261C mov.w @Rm,Rn */
	r3 = R32(r4); UPD(0x0C002620u, 1);  /* 0C00261E mov.l @Rm,Rn */
	r0 &= r2;  /* 0C002620 and Rm,Rn */
	r3 += 0x1u;  /* 0C002622 add #imm,Rn */
	W16(r1, r0); UPD(0x0C002626u, 3);  /* 0C002624 mov.w Rm,@Rn */
	r5 = R32(r5); UPD(0x0C002628u, 1);  /* 0C002626 mov.l @Rm,Rn */
	T = (r5 & r5) == 0;  /* 0C002628 tst Rm,Rn */
	{ u32 c_ = T; W32(r4, r3); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C00265Eu, 4); goto L_0C00265E; } UPD(0x0C00262Eu, 1); goto L_0C00262E; }  /* 0C00262A bt/s */
L_0C00262E: BLKS(0x0C00262Eu);
	IF(0x0C00262Eu); r15 -= 4; W32(r15, PR); UPD(0x0C002630u, 1);  /* 0C00262E sts.l pr,@-Rn */
	IF(0x0C002630u); r15 -= 4; W32(r15, MACH); UPD(0x0C002632u, 1);  /* 0C002630 sts.l mach,@-Rn */
	IF(0x0C002632u); r15 -= 4; W32(r15, MACL); UPD(0x0C002634u, 1);  /* 0C002632 sts.l macl,@-Rn */
	IF(0x0C002634u); r15 -= 4; W32(r15, c->gbr); UPD(0x0C002636u, 1);  /* 0C002634 stc.l gbr,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C002638u, 1);  /* 0C002636 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C00263Au, 1);  /* 0C002638 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C00263Cu, 1);  /* 0C00263A mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C00263Eu, 1);  /* 0C00263C mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C002640u, 1);  /* 0C00263E mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C002642u, 1);  /* 0C002640 mov.l Rm,@-Rn */
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C002644u, 1);  /* 0C002642 mov.l Rm,@-Rn */
	IF(0x0C002644u); { u32 t_ = r5; PR = 0x0C002648u; IF(0x0C002646u); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C002648u); }  /* 0C002644 jsr @Rn */
L_0C002648: BLKS(0x0C002648u);
	{ u32 v_ = R32(r15); r15 += 4; r8 = v_; } UPD(0x0C00264Au, 1);  /* 0C002648 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C00264Cu, 1);  /* 0C00264A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C00264Eu, 1);  /* 0C00264C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C002650u, 1);  /* 0C00264E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C002652u, 1);  /* 0C002650 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C002654u, 1);  /* 0C002652 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C002656u, 1);  /* 0C002654 mov.l @Rm+,Rn */
	IF(0x0C002656u); c->gbr = R32(r15); r15 += 4; UPD(0x0C002658u, 1);  /* 0C002656 ldc.l @Rn+,gbr */
	IF(0x0C002658u); MACL = R32(r15); r15 += 4; UPD(0x0C00265Au, 1);  /* 0C002658 lds.l @Rn+,macl */
	IF(0x0C00265Au); MACH = R32(r15); r15 += 4; UPD(0x0C00265Cu, 1);  /* 0C00265A lds.l @Rn+,mach */
	IF(0x0C00265Cu); PR = R32(r15); r15 += 4; UPD(0x0C00265Eu, 1);  /* 0C00265C lds.l @Rn+,pr */
L_0C00265E: BLKS(0x0C00265Eu);
	IF(0x0C00265Eu); { u32 t_ = c->spc; SET_SR(c->ssr); IF(0x0C002660u); ; /* slot nop */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C00265E rte */
}

void f_0C002678(sh3_t *c)
{
	LOCALS;
L_0C002678: BLKS(0x0C002678u);
	r0 = 0xFFFFFFD0u;  /* 0C002678 mov #imm,Rn */
	r1 = 0xC0026C0u; UPD(0x0C00267Cu, 2);  /* 0C00267A mov.l @(disp,pc),Rn */
	r0 = R32(r0); UPD(0x0C00267Eu, 1);  /* 0C00267C mov.l @Rm,Rn */
	IF(0x0C00267Eu); T = r0 >> 31; r0 <<= 1;  /* 0C00267E shll Rn */
	IF(0x0C002680u); r2 = R32(r0 + r1); UPD(0x0C002682u, 2);  /* 0C002680 mov.l @(r0,Rm),Rn */
	T = (r2 & r2) == 0;  /* 0C002682 tst Rm,Rn */
	{ u32 c_ = T; r0 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0026B8u, 4); goto L_0C0026B8; } goto L_0C002688; }  /* 0C002684 bt/s */
L_0C002688: BLKS(0x0C002688u);
	IF(0x0C002688u); r15 -= 4; W32(r15, PR); UPD(0x0C00268Au, 2);  /* 0C002688 sts.l pr,@-Rn */
	IF(0x0C00268Au); r15 -= 4; W32(r15, MACH); UPD(0x0C00268Cu, 1);  /* 0C00268A sts.l mach,@-Rn */
	IF(0x0C00268Cu); r15 -= 4; W32(r15, MACL); UPD(0x0C00268Eu, 1);  /* 0C00268C sts.l macl,@-Rn */
	IF(0x0C00268Eu); r15 -= 4; W32(r15, c->gbr); UPD(0x0C002690u, 1);  /* 0C00268E stc.l gbr,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C002692u, 1);  /* 0C002690 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C002694u, 1);  /* 0C002692 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C002696u, 1);  /* 0C002694 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C002698u, 1);  /* 0C002696 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C00269Au, 1);  /* 0C002698 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C00269Cu, 1);  /* 0C00269A mov.l Rm,@-Rn */
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C00269Eu, 1);  /* 0C00269C mov.l Rm,@-Rn */
	IF(0x0C00269Eu); { u32 t_ = r2; PR = 0x0C0026A2u; IF(0x0C0026A0u); r4 = R32(r0 + r1); /* slot mov.l @(r0,Rm),Rn */ UPD(t_, 2); CALLD(t_, 0x0C0026A2u); }  /* 0C00269E jsr @Rn */
L_0C0026A2: BLKS(0x0C0026A2u);
	{ u32 v_ = R32(r15); r15 += 4; r8 = v_; } UPD(0x0C0026A4u, 1);  /* 0C0026A2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0026A6u, 1);  /* 0C0026A4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0026A8u, 1);  /* 0C0026A6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0026AAu, 1);  /* 0C0026A8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0026ACu, 1);  /* 0C0026AA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0026AEu, 1);  /* 0C0026AC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0026B0u, 1);  /* 0C0026AE mov.l @Rm+,Rn */
	IF(0x0C0026B0u); c->gbr = R32(r15); r15 += 4; UPD(0x0C0026B2u, 1);  /* 0C0026B0 ldc.l @Rn+,gbr */
	IF(0x0C0026B2u); MACL = R32(r15); r15 += 4; UPD(0x0C0026B4u, 1);  /* 0C0026B2 lds.l @Rn+,macl */
	IF(0x0C0026B4u); MACH = R32(r15); r15 += 4; UPD(0x0C0026B6u, 1);  /* 0C0026B4 lds.l @Rn+,mach */
	IF(0x0C0026B6u); PR = R32(r15); r15 += 4; UPD(0x0C0026B8u, 1);  /* 0C0026B6 lds.l @Rn+,pr */
L_0C0026B8: BLKS(0x0C0026B8u);
	IF(0x0C0026B8u); { u32 t_ = c->spc; SET_SR(c->ssr); IF(0x0C0026BAu); ; /* slot nop */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C0026B8 rte */
}

void f_0C002740(sh3_t *c)
{
	LOCALS;
L_0C002740: BLKS(0x0C002740u);
	IF(0x0C002740u); ARG0(0x0082u); r0 = c->rbank[0];  /* 0C002740 stc Rb_bank,Rn */
	r1 = 0xC002780u; UPD(0x0C002744u, 2);  /* 0C002742 mov.l @(disp,pc),Rn */
	IF(0x0C002744u); r0 = R32(r0 + r1); UPD(0x0C002746u, 1);  /* 0C002744 mov.l @(r0,Rm),Rn */
	IF(0x0C002746u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); IF(0x0C002748u); ; /* slot nop */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C002746 jmp @Rn */
}

void f_0C0029D4(sh3_t *c)
{
	LOCALS;
L_0C0029D4: BLKS(0x0C0029D4u);
	IF(0x0C0029D4u); r15 -= 4; W32(r15, ((c->sr & ~1u) | T)); UPD(0x0C0029D6u, 2);  /* 0C0029D4 stc.l sr,@-Rn */
	IF(0x0C0029D6u); r0 = ((c->sr & ~1u) | T);  /* 0C0029D6 stc sr,Rn */
	r1 = 0x50000000u; UPD(0x0C0029DAu, 2);  /* 0C0029D8 mov.l @(disp,pc),Rn */
	r0 |= r1;  /* 0C0029DA or Rm,Rn */
	IF(0x0C0029DCu); ARG0(0x400Eu); SET_SR(r0); UPDI(0x0C0029DEu);  /* 0C0029DC ldc Rn,sr */
L_0C0029DE: BLKS(0x0C0029DEu);
	r2 = 0xA0000000u; UPD(0x0C0029E0u, 1);  /* 0C0029DE mov.l @(disp,pc),Rn */
	r3 = 0xFFFFFFECu;  /* 0C0029E0 mov #imm,Rn */
	IF(0x0C0029E2u); { u32 tv_ = (r2 + 0x0C0029E6u); u32 t_ = PHYS(tv_); r0 = 0x0u; /* slot mov #imm,Rn */ JRGN(tv_); UPD(t_, 4); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0029E2 braf Rn */
}

void f_0C002A0C(sh3_t *c)
{
	LOCALS;
L_0C002A0C: BLKS(0x0C002A0Cu);
	IF(0x0C002A0Cu); r15 -= 4; W32(r15, ((c->sr & ~1u) | T)); UPD(0x0C002A0Eu, 2);  /* 0C002A0C stc.l sr,@-Rn */
	IF(0x0C002A0Eu); r0 = ((c->sr & ~1u) | T);  /* 0C002A0E stc sr,Rn */
	r1 = 0x50000000u; UPD(0x0C002A12u, 2);  /* 0C002A10 mov.l @(disp,pc),Rn */
	r0 |= r1;  /* 0C002A12 or Rm,Rn */
	IF(0x0C002A14u); ARG0(0x400Eu); SET_SR(r0); UPDI(0x0C002A16u);  /* 0C002A14 ldc Rn,sr */
L_0C002A16: BLKS(0x0C002A16u);
	r2 = 0xA0000000u; UPD(0x0C002A18u, 1);  /* 0C002A16 mov.l @(disp,pc),Rn */
	r3 = 0xFFFFFFECu;  /* 0C002A18 mov #imm,Rn */
	IF(0x0C002A1Au); { u32 tv_ = (r2 + 0x0C002A1Eu); u32 t_ = PHYS(tv_); r0 = 0x1u; /* slot mov #imm,Rn */ JRGN(tv_); UPD(t_, 4); switch (t_) {  default: JUMPD(tv_); } }  /* 0C002A1A braf Rn */
}

/* FUN_0c002a30 */
void f_0C002A30(sh3_t *c)
{
	LOCALS;
L_0C002A30: BLKS(0x0C002A30u);
	IF(0x0C002A30u); r15 -= 4; W32(r15, ((c->sr & ~1u) | T)); UPD(0x0C002A32u, 2);  /* 0C002A30 stc.l sr,@-Rn */
	IF(0x0C002A32u); r0 = ((c->sr & ~1u) | T);  /* 0C002A32 stc sr,Rn */
	r1 = 0x50000000u; UPD(0x0C002A36u, 2);  /* 0C002A34 mov.l @(disp,pc),Rn */
	r0 |= r1;  /* 0C002A36 or Rm,Rn */
	IF(0x0C002A38u); ARG0(0x400Eu); SET_SR(r0); UPDI(0x0C002A3Au);  /* 0C002A38 ldc Rn,sr */
L_0C002A3A: BLKS(0x0C002A3Au);
	r0 = r4;  /* 0C002A3A mov Rm,Rn */
	{ IF(0x0C002A3Eu); ; /* slot nop */ UPD(0x0C002A50u, 4); goto L_0C002A50; }  /* 0C002A3C bra */
L_0C002A50: BLKS(0x0C002A50u);
	r2 = 0xA0000000u; UPD(0x0C002A52u, 1);  /* 0C002A50 mov.l @(disp,pc),Rn */
	IF(0x0C002A52u); { u32 tv_ = (r2 + 0x0C002A56u); u32 t_ = PHYS(tv_); r3 = 0xFFFFFFECu; /* slot mov #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C002A52 braf Rn */
}

void f_0C002A44(sh3_t *c)
{
	LOCALS;
L_0C002A44: BLKS(0x0C002A44u);
	IF(0x0C002A44u); r15 -= 4; W32(r15, ((c->sr & ~1u) | T)); UPD(0x0C002A46u, 2);  /* 0C002A44 stc.l sr,@-Rn */
	IF(0x0C002A46u); r0 = ((c->sr & ~1u) | T);  /* 0C002A46 stc sr,Rn */
	r1 = 0x50000000u; UPD(0x0C002A4Au, 2);  /* 0C002A48 mov.l @(disp,pc),Rn */
	r0 |= r1;  /* 0C002A4A or Rm,Rn */
	IF(0x0C002A4Cu); ARG0(0x400Eu); SET_SR(r0); UPDI(0x0C002A4Eu);  /* 0C002A4C ldc Rn,sr */
L_0C002A4E: BLKS(0x0C002A4Eu);
	IF(0x0C002A4Eu); ARG0(0x00C2u); r0 = c->rbank[4];  /* 0C002A4E stc Rb_bank,Rn */
	r2 = 0xA0000000u; UPD(0x0C002A52u, 2);  /* 0C002A50 mov.l @(disp,pc),Rn */
	IF(0x0C002A52u); { u32 tv_ = (r2 + 0x0C002A56u); u32 t_ = PHYS(tv_); r3 = 0xFFFFFFECu; /* slot mov #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C002A52 braf Rn */
}

void f_0C002A56(sh3_t *c)
{
	LOCALS;
L_0C002A56: BLKS(0x0C002A56u);
	T = r0 == 0x0u;  /* 0C002A56 cmp/eq #imm,r0 */
	{ u32 c_ = T; T = r0 == 0x1u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C002A6Eu, 4); goto L_0C002A6E; } goto L_0C002A5C; }  /* 0C002A58 bt/s */
L_0C002A5C: BLKS(0x0C002A5Cu);
	{ u32 c_ = !T; IF(0x0C002A5Eu); ; /* slot nop */ if (c_) { UPD(0x0C002A74u, 4); goto L_0C002A74; } goto L_0C002A60; }  /* 0C002A5C bf/s */
L_0C002A60: BLKS(0x0C002A60u);
	r1 = 0xF0000000u; UPD(0x0C002A62u, 2);  /* 0C002A60 mov.l @(disp,pc),Rn */
	r0 = 0x0u;  /* 0C002A62 mov #imm,Rn */
	r2 = 0x400u; UPD(0x0C002A66u, 2);  /* 0C002A64 mov.w @(disp,pc),Rn */
L_0C002A66: BLKS(0x0C002A66u);
	W32(r1, r0); UPD(0x0C002A68u, 1);  /* 0C002A66 mov.l Rm,@Rn */
	IF(0x0C002A68u); r2 -= 1; T = r2 == 0;  /* 0C002A68 dt Rn */
	{ u32 c_ = !T; r1 += 0x10u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C002A66u, 4); goto L_0C002A66; } UPD(0x0C002A6Eu, 1); goto L_0C002A6E; }  /* 0C002A6A bf/s */
L_0C002A6E: BLKS(0x0C002A6Eu);
	r0 = R32(r3); UPD(0x0C002A70u, 1);  /* 0C002A6E mov.l @Rm,Rn */
	r0 |= 0x8u;  /* 0C002A70 or #imm,r0 */
	W32(r3, r0); UPD(0x0C002A74u, 2);  /* 0C002A72 mov.l Rm,@Rn */
L_0C002A74: BLKS(0x0C002A74u);
	IF(0x0C002A74u); ARG0(0x4F07u); { u32 v_ = R32N(r15); r15 += 4; SET_SR(v_); } UPDN(0x0C002A76u, 2); UPDI(0x0C002A76u);  /* 0C002A74 ldc.l @Rn+,sr */
L_0C002A76: BLKS(0x0C002A76u);
	IF(0x0C002A76u); { u32 t_ = PR; IF(0x0C002A78u); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C002A76 rts */
}

void f_0C002A88(sh3_t *c)
{
	LOCALS;
L_0C002A88: BLKS(0x0C002A88u);
	IF(0x0C002A88u); r15 -= 4; W32(r15, ((c->sr & ~1u) | T)); UPD(0x0C002A8Au, 2);  /* 0C002A88 stc.l sr,@-Rn */
	IF(0x0C002A8Au); r0 = ((c->sr & ~1u) | T);  /* 0C002A8A stc sr,Rn */
	r1 = 0x50000000u; UPD(0x0C002A8Eu, 2);  /* 0C002A8C mov.l @(disp,pc),Rn */
	r0 |= r1;  /* 0C002A8E or Rm,Rn */
	IF(0x0C002A90u); ARG0(0x400Eu); SET_SR(r0); UPDI(0x0C002A92u);  /* 0C002A90 ldc Rn,sr */
L_0C002A92: BLKS(0x0C002A92u);
	IF(0x0C002A92u); ARG0(0x04C2u); r4 = c->rbank[4];  /* 0C002A92 stc Rb_bank,Rn */
	r2 = 0xA0000000u; UPD(0x0C002A96u, 2);  /* 0C002A94 mov.l @(disp,pc),Rn */
	r0 = 0xFF0u; UPD(0x0C002A98u, 1);  /* 0C002A96 mov.l @(disp,pc),Rn */
	IF(0x0C002A98u); { u32 tv_ = (r2 + 0x0C002A9Cu); u32 t_ = PHYS(tv_); r0 &= r4; /* slot and Rm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C002A98 braf Rn */
}

/* blit_driver_clear */
void f_0C049980(sh3_t *c)
{
	LOCALS;
L_0C049980: BLKS(0x0C049980u);
	r1 = 0x14u; UPD(0x0C049982u, 1);  /* 0C049980 mov.l @(disp,pc),Rn */
	r0 = 0x0u; UPD(0x0C049984u, 1);  /* 0C049982 mov.l @(disp,pc),Rn */
	r2 = 0xC049930u; UPD(0x0C049986u, 1);  /* 0C049984 mov.l @(disp,pc),Rn */
L_0C049986: BLKS(0x0C049986u);
	W32(r2, r0); UPD(0x0C049988u, 1);  /* 0C049986 mov.l Rm,@Rn */
	IF(0x0C049988u); r1 -= 1; T = r1 == 0;  /* 0C049988 dt Rn */
	{ u32 c_ = !T; r2 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C049986u, 4); goto L_0C049986; } goto L_0C04998E; }  /* 0C04998A bf/s */
L_0C04998E: BLKS(0x0C04998Eu);
	r0 = 0xC049978u; UPD(0x0C049990u, 2);  /* 0C04998E mov.l @(disp,pc),Rn */
	r1 = 0x1u; UPD(0x0C049992u, 1);  /* 0C049990 mov.l @(disp,pc),Rn */
	W32(r0, r1); UPD(0x0C049994u, 1);  /* 0C049992 mov.l Rm,@Rn */
	r0 = 0xC04997Cu; UPD(0x0C049996u, 1);  /* 0C049994 mov.l @(disp,pc),Rn */
	r1 = 0xFFFFu; UPD(0x0C049998u, 1);  /* 0C049996 mov.l @(disp,pc),Rn */
	W32(r0, r1); UPD(0x0C04999Au, 1);  /* 0C049998 mov.l Rm,@Rn */
	IF(0x0C04999Au); { u32 t_ = PR; IF(0x0C04999Cu); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C04999A rts */
}

/* FUN_0c049f38 */
void f_0C049F38(sh3_t *c)
{
	LOCALS;
L_0C049F38: BLKS(0x0C049F38u);
	r0 = 0xC049950u; UPD(0x0C049F3Au, 1);  /* 0C049F38 mov.l @(disp,pc),Rn */
	T = (r4 & r4) == 0;  /* 0C049F3A tst Rm,Rn */
	{ u32 c_ = T; IF(0x0C049F3Eu); ; /* slot nop */ if (c_) { UPD(0x0C049F42u, 4); goto L_0C049F42; } goto L_0C049F40; }  /* 0C049F3C bt/s */
L_0C049F40: BLKS(0x0C049F40u);
	r0 = 0xC04995Cu; UPD(0x0C049F42u, 2);  /* 0C049F40 mov.l @(disp,pc),Rn */
L_0C049F42: BLKS(0x0C049F42u);
	IF(0x0C049F42u); { u32 t_ = PR; r0 = R32(r0); /* slot mov.l @Rm,Rn */ UPD(t_, 3); RET(t_); }  /* 0C049F42 rts */
}

/* blitter_init */
void f_0C049F54(sh3_t *c)
{
	LOCALS;
	SPIN_VARS(0C049F70);
	SPIN_VARS(0C049F86);
L_0C049F54: BLKS(0x0C049F54u);
	IF(0x0C049F54u); r15 -= 4; W32(r15, PR); UPD(0x0C049F56u, 1);  /* 0C049F54 sts.l pr,@-Rn */
	r0 = 0xC049980u; UPD(0x0C049F58u, 1);  /* 0C049F56 mov.l @(disp,pc),Rn */
	IF(0x0C049F58u); { u32 t_ = r0; PR = 0x0C049F5Cu; IF(0x0C049F5Au); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C049980, 0x0C049980u, 0x0C049F5Cu); }  /* 0C049F58 jsr @Rn */
L_0C049F5C: BLKS(0x0C049F5Cu);
	r0 = 0xB0C00002u; UPD(0x0C049F5Eu, 1);  /* 0C049F5C mov.l @(disp,pc),Rn */
	r2 = 0x1u; UPD(0x0C049F60u, 1);  /* 0C049F5E mov.l @(disp,pc),Rn */
	W8(r0, r2); UPD(0x0C049F62u, 1);  /* 0C049F60 mov.b Rm,@Rn */
	r0 = 0xC04A250u; UPD(0x0C049F64u, 1);  /* 0C049F62 mov.l @(disp,pc),Rn */
	IF(0x0C049F64u); { u32 t_ = r0; PR = 0x0C049F68u; IF(0x0C049F66u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04A250, 0x0C04A250u, 0x0C049F68u); }  /* 0C049F64 jsr @Rn */
L_0C049F68: BLKS(0x0C049F68u);
	r0 = 0xB0C00002u; UPD(0x0C049F6Au, 1);  /* 0C049F68 mov.l @(disp,pc),Rn */
	r2 = 0xFFFFFFFEu; UPD(0x0C049F6Cu, 1);  /* 0C049F6A mov.l @(disp,pc),Rn */
	W8(r0, r2); UPD(0x0C049F6Eu, 1);  /* 0C049F6C mov.b Rm,@Rn */
	r0 = 0x40000u; UPD(0x0C049F70u, 1);  /* 0C049F6E mov.l @(disp,pc),Rn */
L_0C049F70: BLKS(0x0C049F70u);
	SPIN_SAVE(0C049F70);
	IF(0x0C049F70u); ;  /* 0C049F70 nop */
	IF(0x0C049F72u); r0 -= 1; T = r0 == 0;  /* 0C049F72 dt Rn */
	{ u32 c_ = !T; IF(0x0C049F76u); ; /* slot nop */ if (c_) { SPIN_FFD(0C049F70, 5); UPD(0x0C049F70u, 5); goto L_0C049F70; } goto L_0C049F78; }  /* 0C049F74 bf/s */
L_0C049F78: BLKS(0x0C049F78u);
	r1 = 0x0u; UPD(0x0C049F7Au, 2);  /* 0C049F78 mov.l @(disp,pc),Rn */
	r0 = 0xB8000010u; UPD(0x0C049F7Cu, 1);  /* 0C049F7A mov.l @(disp,pc),Rn */
	W32(r0, r1); UPD(0x0C049F7Eu, 1);  /* 0C049F7C mov.l Rm,@Rn */
	r0 = 0xB800001Cu; UPD(0x0C049F80u, 1);  /* 0C049F7E mov.l @(disp,pc),Rn */
	r1 = 0x1u; UPD(0x0C049F82u, 1);  /* 0C049F80 mov.l @(disp,pc),Rn */
	W32(r0, r1); UPD(0x0C049F84u, 1);  /* 0C049F82 mov.l Rm,@Rn */
	r1 = 0xB8000010u; UPD(0x0C049F86u, 1);  /* 0C049F84 mov.l @(disp,pc),Rn */
L_0C049F86: BLKS(0x0C049F86u);
	SPIN_SAVE(0C049F86);
	r0 = RS32(0C049F86, r1); UPD(0x0C049F88u, 1);  /* 0C049F86 mov.l @Rm,Rn */
	T = (r0 & 0x2u) == 0;  /* 0C049F88 tst #imm,r0 */
	{ u32 c_ = !T; IF(0x0C049F8Cu); ; /* slot nop */ if (c_) { SPIN_FFD(0C049F86, 5); UPD(0x0C049F86u, 4); goto L_0C049F86; } goto L_0C049F8E; }  /* 0C049F8A bf/s */
L_0C049F8E: BLKS(0x0C049F8Eu);
	r1 = 0x1u; UPD(0x0C049F90u, 2);  /* 0C049F8E mov.l @(disp,pc),Rn */
	r0 = 0xB8000010u; UPD(0x0C049F92u, 1);  /* 0C049F90 mov.l @(disp,pc),Rn */
	W32(r0, r1); UPD(0x0C049F94u, 1);  /* 0C049F92 mov.l Rm,@Rn */
	r0 = 0xC049954u; UPD(0x0C049F96u, 1);  /* 0C049F94 mov.l @(disp,pc),Rn */
	r1 = 0x200000u; UPD(0x0C049F98u, 1);  /* 0C049F96 mov.l @(disp,pc),Rn */
	W32(r0 + 0x0u, r1); UPD(0x0C049F9Au, 1);  /* 0C049F98 mov.l Rm,@(disp,Rn) */
	r1 = 0x20u; UPD(0x0C049F9Cu, 1);  /* 0C049F9A mov.l @(disp,pc),Rn */
	W32(r0 + 0x4u, r1); UPD(0x0C049F9Eu, 1);  /* 0C049F9C mov.l Rm,@(disp,Rn) */
	r0 = 0xC049960u; UPD(0x0C049FA0u, 1);  /* 0C049F9E mov.l @(disp,pc),Rn */
	r1 = 0x1A00000u; UPD(0x0C049FA2u, 1);  /* 0C049FA0 mov.l @(disp,pc),Rn */
	W32(r0 + 0x0u, r1); UPD(0x0C049FA4u, 1);  /* 0C049FA2 mov.l Rm,@(disp,Rn) */
	r1 = 0x20u; UPD(0x0C049FA6u, 1);  /* 0C049FA4 mov.l @(disp,pc),Rn */
	W32(r0 + 0x4u, r1); UPD(0x0C049FA8u, 1);  /* 0C049FA6 mov.l Rm,@(disp,Rn) */
	r1 = 0x0u; UPD(0x0C049FAAu, 1);  /* 0C049FA8 mov.l @(disp,pc),Rn */
	r0 = 0xB8000014u; UPD(0x0C049FACu, 1);  /* 0C049FAA mov.l @(disp,pc),Rn */
	W32(r0, r1); UPD(0x0C049FAEu, 1);  /* 0C049FAC mov.l Rm,@Rn */
	r0 = 0xB8000018u; UPD(0x0C049FB0u, 1);  /* 0C049FAE mov.l @(disp,pc),Rn */
	W32(r0, r1); UPD(0x0C049FB2u, 1);  /* 0C049FB0 mov.l Rm,@Rn */
	r4 = 0x0u; UPD(0x0C049FB4u, 1);  /* 0C049FB2 mov.l @(disp,pc),Rn */
	r5 = 0x0u; UPD(0x0C049FB6u, 1);  /* 0C049FB4 mov.l @(disp,pc),Rn */
	r0 = 0xC04A42Cu; UPD(0x0C049FB8u, 1);  /* 0C049FB6 mov.l @(disp,pc),Rn */
	IF(0x0C049FB8u); { u32 t_ = r0; PR = 0x0C049FBCu; IF(0x0C049FBAu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04A42C, 0x0C04A42Cu, 0x0C049FBCu); }  /* 0C049FB8 jsr @Rn */
L_0C049FBC: BLKS(0x0C049FBCu);
	r4 = 0xA0000u; UPD(0x0C049FBEu, 1);  /* 0C049FBC mov.l @(disp,pc),Rn */
	r5 = 0x100u; UPD(0x0C049FC0u, 1);  /* 0C049FBE mov.l @(disp,pc),Rn */
	r0 = 0xC04A61Eu; UPD(0x0C049FC2u, 1);  /* 0C049FC0 mov.l @(disp,pc),Rn */
	IF(0x0C049FC2u); { u32 t_ = r0; PR = 0x0C049FC6u; IF(0x0C049FC4u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04A61E, 0x0C04A61Eu, 0x0C049FC6u); }  /* 0C049FC2 jsr @Rn */
L_0C049FC6: BLKS(0x0C049FC6u);
	r1 = 0xA0000000u; UPD(0x0C049FC8u, 1);  /* 0C049FC6 mov.l @(disp,pc),Rn */
	r0 |= r1;  /* 0C049FC8 or Rm,Rn */
	r1 = 0xC049950u; UPD(0x0C049FCCu, 2);  /* 0C049FCA mov.l @(disp,pc),Rn */
	W32(r1, r0); UPD(0x0C049FCEu, 1);  /* 0C049FCC mov.l Rm,@Rn */
	r1 = 0xC049930u; UPD(0x0C049FD0u, 1);  /* 0C049FCE mov.l @(disp,pc),Rn */
	W32(r1, r0); UPD(0x0C049FD2u, 1);  /* 0C049FD0 mov.l Rm,@Rn */
	r3 = 0xFFFFFFFFu; UPD(0x0C049FD4u, 1);  /* 0C049FD2 mov.l @(disp,pc),Rn */
	W32(r0, r3); UPD(0x0C049FD6u, 1);  /* 0C049FD4 mov.l Rm,@Rn */
	r1 = 0xB8000008u; UPD(0x0C049FD8u, 1);  /* 0C049FD6 mov.l @(disp,pc),Rn */
	W32(r1, r0); UPD(0x0C049FDAu, 1);  /* 0C049FD8 mov.l Rm,@Rn */
	r4 = 0xA0000u; UPD(0x0C049FDCu, 1);  /* 0C049FDA mov.l @(disp,pc),Rn */
	r5 = 0x100u; UPD(0x0C049FDEu, 1);  /* 0C049FDC mov.l @(disp,pc),Rn */
	r0 = 0xC04A61Eu; UPD(0x0C049FE0u, 1);  /* 0C049FDE mov.l @(disp,pc),Rn */
	IF(0x0C049FE0u); { u32 t_ = r0; PR = 0x0C049FE4u; IF(0x0C049FE2u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04A61E, 0x0C04A61Eu, 0x0C049FE4u); }  /* 0C049FE0 jsr @Rn */
L_0C049FE4: BLKS(0x0C049FE4u);
	r1 = 0xA0000000u; UPD(0x0C049FE6u, 1);  /* 0C049FE4 mov.l @(disp,pc),Rn */
	r0 |= r1;  /* 0C049FE6 or Rm,Rn */
	r1 = 0xC04995Cu; UPD(0x0C049FEAu, 2);  /* 0C049FE8 mov.l @(disp,pc),Rn */
	W32(r1, r0); UPD(0x0C049FECu, 1);  /* 0C049FEA mov.l Rm,@Rn */
	r3 = 0xFFFFFFFFu; UPD(0x0C049FEEu, 1);  /* 0C049FEC mov.l @(disp,pc),Rn */
	W32(r0, r3); UPD(0x0C049FF0u, 1);  /* 0C049FEE mov.l Rm,@Rn */
	r1 = 0xB8000034u; UPD(0x0C049FF2u, 1);  /* 0C049FF0 mov.l @(disp,pc),Rn */
	r0 = 0x0u; UPD(0x0C049FF4u, 1);  /* 0C049FF2 mov.l @(disp,pc),Rn */
	W32(r1, r0); UPD(0x0C049FF6u, 1);  /* 0C049FF4 mov.l Rm,@Rn */
	r1 = 0xB8000030u; UPD(0x0C049FF8u, 1);  /* 0C049FF6 mov.l @(disp,pc),Rn */
	r0 = 0x1Fu; UPD(0x0C049FFAu, 1);  /* 0C049FF8 mov.l @(disp,pc),Rn */
	W32(r1, r0); UPD(0x0C049FFCu, 1);  /* 0C049FFA mov.l Rm,@Rn */
	r1 = 0xB8000048u; UPD(0x0C049FFEu, 1);  /* 0C049FFC mov.l @(disp,pc),Rn */
	r0 = 0x1u; UPD(0x0C04A000u, 1);  /* 0C049FFE mov.l @(disp,pc),Rn */
	W32(r1, r0); UPD(0x0C04A002u, 1);  /* 0C04A000 mov.l Rm,@Rn */
	r1 = 0xC04A174u; UPD(0x0C04A004u, 1);  /* 0C04A002 mov.l @(disp,pc),Rn */
	IF(0x0C04A004u); { u32 t_ = r1; PR = 0x0C04A008u; IF(0x0C04A006u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04A174, 0x0C04A174u, 0x0C04A008u); }  /* 0C04A004 jsr @Rn */
L_0C04A008: BLKS(0x0C04A008u);
	IF(0x0C04A008u); PR = R32(r15); r15 += 4; UPD(0x0C04A00Au, 1);  /* 0C04A008 lds.l @Rn+,pr */
	IF(0x0C04A00Au); { u32 t_ = PR; IF(0x0C04A00Cu); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C04A00A rts */
}

/* FUN_0c04a08c */
void f_0C04A08C(sh3_t *c)
{
	LOCALS;
L_0C04A08C: BLKS(0x0C04A08Cu);
	r0 = 0xC0022E0u; UPD(0x0C04A08Eu, 1);  /* 0C04A08C mov.l @(disp,pc),Rn */
	W32(r0 + 0x4u, r5); UPD(0x0C04A090u, 1);  /* 0C04A08E mov.l Rm,@(disp,Rn) */
	IF(0x0C04A090u); { u32 t_ = PR; W32(r0, r4); /* slot mov.l Rm,@Rn */ UPD(t_, 3); RET(t_); }  /* 0C04A090 rts */
}

/* FUN_0c04a098 */
void f_0C04A098(sh3_t *c)
{
	LOCALS;
L_0C04A098: BLKS(0x0C04A098u);
	r0 = 0xC002224u; UPD(0x0C04A09Au, 1);  /* 0C04A098 mov.l @(disp,pc),Rn */
	W32(r0 + 0x4u, r5); UPD(0x0C04A09Cu, 1);  /* 0C04A09A mov.l Rm,@(disp,Rn) */
	IF(0x0C04A09Cu); { u32 t_ = PR; W32(r0, r4); /* slot mov.l Rm,@Rn */ UPD(t_, 3); RET(t_); }  /* 0C04A09C rts */
}

/* wait_vblanks */
void f_0C04A0A4(sh3_t *c)
{
	LOCALS;
	SPIN_VARS(0C04A0AA);
L_0C04A0A4: BLKS(0x0C04A0A4u);
	r2 = 0xC0022F0u; UPD(0x0C04A0A6u, 1);  /* 0C04A0A4 mov.l @(disp,pc),Rn */
	r1 = R32(r2); UPD(0x0C04A0A8u, 1);  /* 0C04A0A6 mov.l @Rm,Rn */
	r0 = R32(r2); UPD(0x0C04A0AAu, 1);  /* 0C04A0A8 mov.l @Rm,Rn */
L_0C04A0AA: BLKS(0x0C04A0AAu);
	SPIN_SAVE(0C04A0AA);
	r0 -= r1;  /* 0C04A0AA sub Rm,Rn */
	PCB_PC(0x0C04A0ACu); T = r4 > r0;  /* 0C04A0AC cmp/hi Rm,Rn */
	{ u32 c_ = T; r0 = R32(r2); PCB_IDLE; /* slot mov.l @Rm,Rn */ if (c_) { SPIN_FFD(0C04A0AA, 5); UPD(0x0C04A0AAu, 5); goto L_0C04A0AA; } UPD(0x0C04A0B2u, 1); goto L_0C04A0B2; }  /* 0C04A0AE bt/s */
L_0C04A0B2: BLKS(0x0C04A0B2u);
	IF(0x0C04A0B2u); { u32 t_ = PR; IF(0x0C04A0B4u); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C04A0B2 rts */
}

/* set_interrupts */
void f_0C04A0BC(sh3_t *c)
{
	LOCALS;
L_0C04A0BC: BLKS(0x0C04A0BCu);
	T = (r4 & r4) == 0;  /* 0C04A0BC tst Rm,Rn */
	{ u32 c_ = T; IF(0x0C04A0C0u); ; /* slot nop */ if (c_) { UPD(0x0C04A0DCu, 4); goto L_0C04A0DC; } goto L_0C04A0C2; }  /* 0C04A0BE bt/s */
L_0C04A0C2: BLKS(0x0C04A0C2u);
	r0 = 0x40000000u; UPD(0x0C04A0C4u, 2);  /* 0C04A0C2 mov.l @(disp,pc),Rn */
	IF(0x0C04A0C4u); ARG0(0x400Eu); SET_SR(r0); UPDI(0x0C04A0C6u);  /* 0C04A0C4 ldc Rn,sr */
L_0C04A0C6: BLKS(0x0C04A0C6u);
	r0 = 0xB8000024u; UPD(0x0C04A0C8u, 1);  /* 0C04A0C6 mov.l @(disp,pc),Rn */
	r1 = 0x1u;  /* 0C04A0C8 mov #imm,Rn */
	W32(r0, r1); UPD(0x0C04A0CCu, 2);  /* 0C04A0CA mov.l Rm,@Rn */
	r1 = 0x0u;  /* 0C04A0CC mov #imm,Rn */
	IF(0x0C04A0CEu); { u32 t_ = PR; W32(r0, r1); /* slot mov.l Rm,@Rn */ UPD(t_, 4); RET(t_); }  /* 0C04A0CE rts */
L_0C04A0DC: BLKS(0x0C04A0DCu);
	r0 = 0x500000F0u; UPD(0x0C04A0DEu, 1);  /* 0C04A0DC mov.l @(disp,pc),Rn */
	IF(0x0C04A0DEu); ARG0(0x400Eu); SET_SR(r0); UPDI(0x0C04A0E0u);  /* 0C04A0DE ldc Rn,sr */
L_0C04A0E0: BLKS(0x0C04A0E0u);
	IF(0x0C04A0E0u); { u32 t_ = PR; IF(0x0C04A0E2u); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C04A0E0 rts */
}

/* FUN_0c04a128 */
void f_0C04A128(sh3_t *c)
{
	LOCALS;
L_0C04A128: BLKS(0x0C04A128u);
	IF(0x0C04A128u); r15 -= 4; W32(r15, PR); UPD(0x0C04A12Au, 1);  /* 0C04A128 sts.l pr,@-Rn */
	r4 = 0x1u; UPD(0x0C04A12Cu, 1);  /* 0C04A12A mov.l @(disp,pc),Rn */
	r0 = 0xC002A30u; UPD(0x0C04A12Eu, 1);  /* 0C04A12C mov.l @(disp,pc),Rn */
	IF(0x0C04A12Eu); { u32 t_ = r0; PR = 0x0C04A132u; IF(0x0C04A130u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C002A30, 0x0C002A30u, 0x0C04A132u); }  /* 0C04A12E jsr @Rn */
L_0C04A132: BLKS(0x0C04A132u);
	IF(0x0C04A132u); PR = R32(r15); r15 += 4; UPD(0x0C04A134u, 1);  /* 0C04A132 lds.l @Rn+,pr */
	r0 = 0x700000F0u; UPD(0x0C04A136u, 1);  /* 0C04A134 mov.l @(disp,pc),Rn */
	IF(0x0C04A136u); ARG0(0x400Eu); SET_SR(r0); UPDI(0x0C04A138u);  /* 0C04A136 ldc Rn,sr */
L_0C04A138: BLKS(0x0C04A138u);
	r0 = 0xFFFFFF00u; UPD(0x0C04A13Au, 1);  /* 0C04A138 mov.l @(disp,pc),Rn */
	IF(0x0C04A13Au); c->gbr = r0;  /* 0C04A13A ldc Rn,gbr */
	r0 = 0x0u;  /* 0C04A13C mov #imm,Rn */
	W32(c->gbr + 0xECu, r0); UPD(0x0C04A140u, 3);  /* 0C04A13E mov.l r0,@(disp,gbr) */
	r0 = 0x0u; UPD(0x0C04A142u, 1);  /* 0C04A140 mov.l @(disp,pc),Rn */
	IF(0x0C04A142u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); IF(0x0C04A144u); ; /* slot nop */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C04A142 jmp @Rn */
}

/* FUN_0c04a160 */
void f_0C04A160(sh3_t *c)
{
	LOCALS;
L_0C04A160: BLKS(0x0C04A160u);
	r0 = 0xA0000u; UPD(0x0C04A162u, 1);  /* 0C04A160 mov.l @(disp,pc),Rn */
	IF(0x0C04A162u); { u32 t_ = PR; IF(0x0C04A164u); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C04A162 rts */
}

/* FUN_0c04a174 */
void f_0C04A174(sh3_t *c)
{
	LOCALS;
L_0C04A174: BLKS(0x0C04A174u);
	r0 = 0xC04A16Cu; UPD(0x0C04A176u, 1);  /* 0C04A174 mov.l @(disp,pc),Rn */
	r1 = 0x0u; UPD(0x0C04A178u, 1);  /* 0C04A176 mov.l @(disp,pc),Rn */
	W32(r0, r1); UPD(0x0C04A17Au, 1);  /* 0C04A178 mov.l Rm,@Rn */
	r2 = 0xC00260Cu; UPD(0x0C04A17Cu, 1);  /* 0C04A17A mov.l @(disp,pc),Rn */
	r3 = 0xC04A194u; UPD(0x0C04A17Eu, 1);  /* 0C04A17C mov.l @(disp,pc),Rn */
	W32(r2, r3); UPD(0x0C04A180u, 1);  /* 0C04A17E mov.l Rm,@Rn */
	IF(0x0C04A180u); { u32 t_ = PR; IF(0x0C04A182u); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C04A180 rts */
}

void f_0C04A194(sh3_t *c)
{
	LOCALS;
L_0C04A194: BLKS(0x0C04A194u);
	r0 = 0xC04A16Cu; UPD(0x0C04A196u, 1);  /* 0C04A194 mov.l @(disp,pc),Rn */
	r1 = R32(r0); UPD(0x0C04A198u, 1);  /* 0C04A196 mov.l @Rm,Rn */
	r2 = 0x1u; UPD(0x0C04A19Au, 1);  /* 0C04A198 mov.l @(disp,pc),Rn */
	r1 += r2;  /* 0C04A19A add Rm,Rn */
	IF(0x0C04A19Cu); { u32 t_ = PR; W32(r0, r1); /* slot mov.l Rm,@Rn */ UPD(t_, 4); RET(t_); }  /* 0C04A19C rts */
}

/* tmu1_control */
void f_0C04A1A8(sh3_t *c)
{
	LOCALS;
L_0C04A1A8: BLKS(0x0C04A1A8u);
	r0 = 0xFFFFFE00u; UPD(0x0C04A1AAu, 1);  /* 0C04A1A8 mov.l @(disp,pc),Rn */
	IF(0x0C04A1AAu); c->gbr = r0;  /* 0C04A1AA ldc Rn,gbr */
	r2 = 0x0u; UPD(0x0C04A1AEu, 2);  /* 0C04A1AC mov.l @(disp,pc),Rn */
	T = r4 == r2;  /* 0C04A1AE cmp/eq Rm,Rn */
	{ u32 c_ = !T; IF(0x0C04A1B2u); ; /* slot nop */ if (c_) { UPD(0x0C04A1D4u, 4); goto L_0C04A1D4; } goto L_0C04A1B4; }  /* 0C04A1B0 bf/s */
L_0C04A1B4: BLKS(0x0C04A1B4u);
	r1 = 0xFFFFFFFDu; UPD(0x0C04A1B6u, 2);  /* 0C04A1B4 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(c->gbr + 0x92u); UPD(0x0C04A1B8u, 1);  /* 0C04A1B6 mov.b @(disp,gbr),r0 */
	r0 &= r1;  /* 0C04A1B8 and Rm,Rn */
	W8(c->gbr + 0x92u, r0); UPD(0x0C04A1BCu, 2);  /* 0C04A1BA mov.b r0,@(disp,gbr) */
	r0 = 0x0u; UPD(0x0C04A1BEu, 1);  /* 0C04A1BC mov.w @(disp,pc),Rn */
	W16(c->gbr + 0xA8u, r0); UPD(0x0C04A1C0u, 1);  /* 0C04A1BE mov.w r0,@(disp,gbr) */
	IF(0x0C04A1C0u); { u32 t_ = PR; IF(0x0C04A1C2u); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C04A1C0 rts */
L_0C04A1D4: BLKS(0x0C04A1D4u);
	r2 = 0x1u; UPD(0x0C04A1D6u, 1);  /* 0C04A1D4 mov.l @(disp,pc),Rn */
	T = r4 == r2;  /* 0C04A1D6 cmp/eq Rm,Rn */
	{ u32 c_ = !T; IF(0x0C04A1DAu); ; /* slot nop */ if (c_) { UPD(0x0C04A218u, 4); goto L_0C04A218; } goto L_0C04A1DC; }  /* 0C04A1D8 bf/s */
L_0C04A1DC: BLKS(0x0C04A1DCu);
	r0 = 0x20u; UPD(0x0C04A1DEu, 2);  /* 0C04A1DC mov.w @(disp,pc),Rn */
	W16(c->gbr + 0xA8u, r0); UPD(0x0C04A1E0u, 1);  /* 0C04A1DE mov.w r0,@(disp,gbr) */
	r0 = 0x18FFu; UPD(0x0C04A1E2u, 1);  /* 0C04A1E0 mov.l @(disp,pc),Rn */
	W32(c->gbr + 0xA0u, r0); UPD(0x0C04A1E4u, 1);  /* 0C04A1E2 mov.l r0,@(disp,gbr) */
	W32(c->gbr + 0xA4u, r0); UPD(0x0C04A1E6u, 1);  /* 0C04A1E4 mov.l r0,@(disp,gbr) */
	r1 = 0x2u; UPD(0x0C04A1E8u, 1);  /* 0C04A1E6 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(c->gbr + 0x92u); UPD(0x0C04A1EAu, 1);  /* 0C04A1E8 mov.b @(disp,gbr),r0 */
	r0 |= r1;  /* 0C04A1EA or Rm,Rn */
	W8(c->gbr + 0x92u, r0); UPD(0x0C04A1EEu, 2);  /* 0C04A1EC mov.b r0,@(disp,gbr) */
	r3 = 0xFFFFFEE2u; UPD(0x0C04A1F0u, 1);  /* 0C04A1EE mov.l @(disp,pc),Rn */
	r2 = 0x100u; UPD(0x0C04A1F2u, 1);  /* 0C04A1F0 mov.w @(disp,pc),Rn */
	r1 = 0xFFFFF0FFu; UPD(0x0C04A1F4u, 1);  /* 0C04A1F2 mov.w @(disp,pc),Rn */
	r0 = (u32)(s32)(s16)R16(r3); UPD(0x0C04A1F6u, 1);  /* 0C04A1F4 mov.w @Rm,Rn */
	r0 &= r1;  /* 0C04A1F6 and Rm,Rn */
	r0 |= r2;  /* 0C04A1F8 or Rm,Rn */
	W16(r3, r0); UPD(0x0C04A1FCu, 3);  /* 0C04A1FA mov.w Rm,@Rn */
	IF(0x0C04A1FCu); { u32 t_ = PR; IF(0x0C04A1FEu); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C04A1FC rts */
L_0C04A218: BLKS(0x0C04A218u);
	r2 = 0x2u; UPD(0x0C04A21Au, 1);  /* 0C04A218 mov.l @(disp,pc),Rn */
	T = r4 == r2;  /* 0C04A21A cmp/eq Rm,Rn */
	{ u32 c_ = !T; IF(0x0C04A21Eu); ; /* slot nop */ if (c_) { UPD(0x0C04A234u, 4); goto L_0C04A234; } goto L_0C04A220; }  /* 0C04A21C bf/s */
L_0C04A220: BLKS(0x0C04A220u);
	r1 = 0xFFFFFFFDu; UPD(0x0C04A222u, 2);  /* 0C04A220 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(c->gbr + 0x92u); UPD(0x0C04A224u, 1);  /* 0C04A222 mov.b @(disp,gbr),r0 */
	r0 &= r1;  /* 0C04A224 and Rm,Rn */
	W8(c->gbr + 0x92u, r0); UPD(0x0C04A228u, 2);  /* 0C04A226 mov.b r0,@(disp,gbr) */
	IF(0x0C04A228u); { u32 t_ = PR; IF(0x0C04A22Au); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C04A228 rts */
L_0C04A234: BLKS(0x0C04A234u);
	r2 = 0x5u; UPD(0x0C04A236u, 1);  /* 0C04A234 mov.l @(disp,pc),Rn */
	T = r4 == r2;  /* 0C04A236 cmp/eq Rm,Rn */
	{ u32 c_ = !T; IF(0x0C04A23Au); ; /* slot nop */ if (c_) { UPD(0x0C04A24Cu, 4); goto L_0C04A24C; } goto L_0C04A23C; }  /* 0C04A238 bf/s */
L_0C04A23C: BLKS(0x0C04A23Cu);
	r1 = 0xC04A16Cu; UPD(0x0C04A23Eu, 2);  /* 0C04A23C mov.l @(disp,pc),Rn */
	IF(0x0C04A23Eu); { u32 t_ = PR; r0 = R32(r1); /* slot mov.l @Rm,Rn */ UPD(t_, 3); RET(t_); }  /* 0C04A23E rts */
L_0C04A24C: BLKS(0x0C04A24Cu);
	IF(0x0C04A24Cu); { u32 t_ = PR; IF(0x0C04A24Eu); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C04A24C rts */
}

/* fpga_upload_bitstream */
void f_0C04A250(sh3_t *c)
{
	LOCALS;
	SPIN_VARS(0C04A3FE);
L_0C04A250: BLKS(0x0C04A250u);
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C04A252u, 1);  /* 0C04A250 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C04A254u, 1);  /* 0C04A252 mov.l Rm,@-Rn */
	IF(0x0C04A254u); r15 -= 4; W32(r15, PR); UPD(0x0C04A256u, 1);  /* 0C04A254 sts.l pr,@-Rn */
	r13 = 0xC04A414u; UPD(0x0C04A258u, 1);  /* 0C04A256 mov.l @(disp,pc),Rn */
	r5 = 0xB8000000u; UPD(0x0C04A25Au, 1);  /* 0C04A258 mov.l @(disp,pc),Rn */
	r0 = 0x0u; UPD(0x0C04A25Cu, 1);  /* 0C04A25A mov.l @(disp,pc),Rn */
	W8(r5, r0); UPD(0x0C04A25Eu, 1);  /* 0C04A25C mov.b Rm,@Rn */
	r14 = 0xA4000130u; UPD(0x0C04A260u, 1);  /* 0C04A25E mov.l @(disp,pc),Rn */
	r0 = 0x0u; UPD(0x0C04A262u, 1);  /* 0C04A260 mov.l @(disp,pc),Rn */
	W8(r14, r0); UPD(0x0C04A264u, 1);  /* 0C04A262 mov.b Rm,@Rn */
	r0 = 0xBu; UPD(0x0C04A266u, 1);  /* 0C04A264 mov.l @(disp,pc),Rn */
	IF(0x0C04A266u); { u32 t_ = r13; PR = 0x0C04A26Au; IF(0x0C04A268u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04A414, 0x0C04A414u, 0x0C04A26Au); }  /* 0C04A266 jsr @Rn */
L_0C04A26A: BLKS(0x0C04A26Au);
	r0 = 0x8u; UPD(0x0C04A26Cu, 1);  /* 0C04A26A mov.l @(disp,pc),Rn */
	W8(r14, r0); UPD(0x0C04A26Eu, 1);  /* 0C04A26C mov.b Rm,@Rn */
	r0 = 0xBu; UPD(0x0C04A270u, 1);  /* 0C04A26E mov.l @(disp,pc),Rn */
	IF(0x0C04A270u); { u32 t_ = r13; PR = 0x0C04A274u; IF(0x0C04A272u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C04A414, 0x0C04A414u, 0x0C04A274u); }  /* 0C04A270 jsr @Rn */
L_0C04A274: BLKS(0x0C04A274u);
	r13 = 0x10000u; UPD(0x0C04A276u, 1);  /* 0C04A274 mov.l @(disp,pc),Rn */
	r0 = 0xC002AC0u; UPD(0x0C04A278u, 1);  /* 0C04A276 mov.l @(disp,pc),Rn */
	r2 = 0xC152C08u; UPD(0x0C04A27Au, 1);  /* 0C04A278 mov.l @(disp,pc),Rn */
	r2 = R32(r2); UPD(0x0C04A27Cu, 1);  /* 0C04A27A mov.l @Rm,Rn */
	r2 += 0xBu;  /* 0C04A27C add #imm,Rn */
	UPD(0x0C04A27Eu, 1);
L_0C04A27E: BLKS(0x0C04A27Eu);
	{ u32 v_ = (u32)(s32)(s8)R8(r0); r0 += 1; r3 = v_; } UPD(0x0C04A280u, 1);  /* 0C04A27E mov.b @Rm+,Rn */
	r5 = r3;  /* 0C04A280 mov Rm,Rn */
	r6 = r3;  /* 0C04A282 mov Rm,Rn */
	r7 = r3;  /* 0C04A284 mov Rm,Rn */
	r4 = 0x1u; UPD(0x0C04A288u, 4);  /* 0C04A286 mov.l @(disp,pc),Rn */
	r5 &= r4;  /* 0C04A288 and Rm,Rn */
	r6 &= r4;  /* 0C04A28A and Rm,Rn */
	r7 &= r4;  /* 0C04A28C and Rm,Rn */
	r4 = 0x5u; UPD(0x0C04A290u, 4);  /* 0C04A28E mov.l @(disp,pc),Rn */
	IF(0x0C04A290u); ARG0(0x454Du); { s32 s_ = (s32)r4; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = 0; else r5 >>= ((~s_ & 31) + 1); }  /* 0C04A290 shld Rm,Rn */
	IF(0x0C04A292u); ARG0(0x464Du); { s32 s_ = (s32)r4; if (s_ >= 0) r6 <<= (s_ & 31); else if ((s_ & 31) == 0) r6 = 0; else r6 >>= ((~s_ & 31) + 1); }  /* 0C04A292 shld Rm,Rn */
	IF(0x0C04A294u); ARG0(0x474Du); { s32 s_ = (s32)r4; if (s_ >= 0) r7 <<= (s_ & 31); else if ((s_ & 31) == 0) r7 = 0; else r7 >>= ((~s_ & 31) + 1); }  /* 0C04A294 shld Rm,Rn */
	r4 = 0x8u; UPD(0x0C04A298u, 4);  /* 0C04A296 mov.l @(disp,pc),Rn */
	r5 |= r4;  /* 0C04A298 or Rm,Rn */
	r7 |= r4;  /* 0C04A29A or Rm,Rn */
	r4 = 0x18u; UPD(0x0C04A29Eu, 3);  /* 0C04A29C mov.l @(disp,pc),Rn */
	r6 |= r4;  /* 0C04A29E or Rm,Rn */
	W8(r14, r5); UPD(0x0C04A2A2u, 2);  /* 0C04A2A0 mov.b Rm,@Rn */
	W8(r14, r6); UPD(0x0C04A2A4u, 1);  /* 0C04A2A2 mov.b Rm,@Rn */
	W8(r14, r7); UPD(0x0C04A2A6u, 1);  /* 0C04A2A4 mov.b Rm,@Rn */
	IF(0x0C04A2A6u); T = r3 & 1; r3 >>= 1;  /* 0C04A2A6 shlr Rn */
	r5 = r3;  /* 0C04A2A8 mov Rm,Rn */
	r6 = r3;  /* 0C04A2AA mov Rm,Rn */
	r7 = r3;  /* 0C04A2AC mov Rm,Rn */
	r4 = 0x1u; UPD(0x0C04A2B0u, 5);  /* 0C04A2AE mov.l @(disp,pc),Rn */
	r5 &= r4;  /* 0C04A2B0 and Rm,Rn */
	r6 &= r4;  /* 0C04A2B2 and Rm,Rn */
	r7 &= r4;  /* 0C04A2B4 and Rm,Rn */
	r4 = 0x5u; UPD(0x0C04A2B8u, 4);  /* 0C04A2B6 mov.l @(disp,pc),Rn */
	IF(0x0C04A2B8u); ARG0(0x454Du); { s32 s_ = (s32)r4; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = 0; else r5 >>= ((~s_ & 31) + 1); }  /* 0C04A2B8 shld Rm,Rn */
	IF(0x0C04A2BAu); ARG0(0x464Du); { s32 s_ = (s32)r4; if (s_ >= 0) r6 <<= (s_ & 31); else if ((s_ & 31) == 0) r6 = 0; else r6 >>= ((~s_ & 31) + 1); }  /* 0C04A2BA shld Rm,Rn */
	IF(0x0C04A2BCu); ARG0(0x474Du); { s32 s_ = (s32)r4; if (s_ >= 0) r7 <<= (s_ & 31); else if ((s_ & 31) == 0) r7 = 0; else r7 >>= ((~s_ & 31) + 1); }  /* 0C04A2BC shld Rm,Rn */
	r4 = 0x8u; UPD(0x0C04A2C0u, 4);  /* 0C04A2BE mov.l @(disp,pc),Rn */
	r5 |= r4;  /* 0C04A2C0 or Rm,Rn */
	r7 |= r4;  /* 0C04A2C2 or Rm,Rn */
	r4 = 0x18u; UPD(0x0C04A2C6u, 3);  /* 0C04A2C4 mov.l @(disp,pc),Rn */
	r6 |= r4;  /* 0C04A2C6 or Rm,Rn */
	W8(r14, r5); UPD(0x0C04A2CAu, 2);  /* 0C04A2C8 mov.b Rm,@Rn */
	W8(r14, r6); UPD(0x0C04A2CCu, 1);  /* 0C04A2CA mov.b Rm,@Rn */
	W8(r14, r7); UPD(0x0C04A2CEu, 1);  /* 0C04A2CC mov.b Rm,@Rn */
	IF(0x0C04A2CEu); T = r3 & 1; r3 >>= 1;  /* 0C04A2CE shlr Rn */
	r5 = r3;  /* 0C04A2D0 mov Rm,Rn */
	r6 = r3;  /* 0C04A2D2 mov Rm,Rn */
	r7 = r3;  /* 0C04A2D4 mov Rm,Rn */
	r4 = 0x1u; UPD(0x0C04A2D8u, 5);  /* 0C04A2D6 mov.l @(disp,pc),Rn */
	r5 &= r4;  /* 0C04A2D8 and Rm,Rn */
	r6 &= r4;  /* 0C04A2DA and Rm,Rn */
	r7 &= r4;  /* 0C04A2DC and Rm,Rn */
	r4 = 0x5u; UPD(0x0C04A2E0u, 4);  /* 0C04A2DE mov.l @(disp,pc),Rn */
	IF(0x0C04A2E0u); ARG0(0x454Du); { s32 s_ = (s32)r4; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = 0; else r5 >>= ((~s_ & 31) + 1); }  /* 0C04A2E0 shld Rm,Rn */
	IF(0x0C04A2E2u); ARG0(0x464Du); { s32 s_ = (s32)r4; if (s_ >= 0) r6 <<= (s_ & 31); else if ((s_ & 31) == 0) r6 = 0; else r6 >>= ((~s_ & 31) + 1); }  /* 0C04A2E2 shld Rm,Rn */
	IF(0x0C04A2E4u); ARG0(0x474Du); { s32 s_ = (s32)r4; if (s_ >= 0) r7 <<= (s_ & 31); else if ((s_ & 31) == 0) r7 = 0; else r7 >>= ((~s_ & 31) + 1); }  /* 0C04A2E4 shld Rm,Rn */
	r4 = 0x8u; UPD(0x0C04A2E8u, 4);  /* 0C04A2E6 mov.l @(disp,pc),Rn */
	r5 |= r4;  /* 0C04A2E8 or Rm,Rn */
	r7 |= r4;  /* 0C04A2EA or Rm,Rn */
	r4 = 0x18u; UPD(0x0C04A2EEu, 3);  /* 0C04A2EC mov.l @(disp,pc),Rn */
	r6 |= r4;  /* 0C04A2EE or Rm,Rn */
	W8(r14, r5); UPD(0x0C04A2F2u, 2);  /* 0C04A2F0 mov.b Rm,@Rn */
	W8(r14, r6); UPD(0x0C04A2F4u, 1);  /* 0C04A2F2 mov.b Rm,@Rn */
	W8(r14, r7); UPD(0x0C04A2F6u, 1);  /* 0C04A2F4 mov.b Rm,@Rn */
	IF(0x0C04A2F6u); T = r3 & 1; r3 >>= 1;  /* 0C04A2F6 shlr Rn */
	r5 = r3;  /* 0C04A2F8 mov Rm,Rn */
	r6 = r3;  /* 0C04A2FA mov Rm,Rn */
	r7 = r3; UPD(0x0C04A2FEu, 4);  /* 0C04A2FC mov Rm,Rn */
	r4 = 0x1u; UPD(0x0C04A300u, 1);  /* 0C04A2FE mov.l @(disp,pc),Rn */
	r5 &= r4;  /* 0C04A300 and Rm,Rn */
	r6 &= r4;  /* 0C04A302 and Rm,Rn */
	r7 &= r4;  /* 0C04A304 and Rm,Rn */
	r4 = 0x5u; UPD(0x0C04A308u, 4);  /* 0C04A306 mov.l @(disp,pc),Rn */
	IF(0x0C04A308u); ARG0(0x454Du); { s32 s_ = (s32)r4; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = 0; else r5 >>= ((~s_ & 31) + 1); }  /* 0C04A308 shld Rm,Rn */
	IF(0x0C04A30Au); ARG0(0x464Du); { s32 s_ = (s32)r4; if (s_ >= 0) r6 <<= (s_ & 31); else if ((s_ & 31) == 0) r6 = 0; else r6 >>= ((~s_ & 31) + 1); }  /* 0C04A30A shld Rm,Rn */
	IF(0x0C04A30Cu); ARG0(0x474Du); { s32 s_ = (s32)r4; if (s_ >= 0) r7 <<= (s_ & 31); else if ((s_ & 31) == 0) r7 = 0; else r7 >>= ((~s_ & 31) + 1); }  /* 0C04A30C shld Rm,Rn */
	r4 = 0x8u; UPD(0x0C04A310u, 4);  /* 0C04A30E mov.l @(disp,pc),Rn */
	r5 |= r4;  /* 0C04A310 or Rm,Rn */
	r7 |= r4;  /* 0C04A312 or Rm,Rn */
	r4 = 0x18u; UPD(0x0C04A316u, 3);  /* 0C04A314 mov.l @(disp,pc),Rn */
	r6 |= r4;  /* 0C04A316 or Rm,Rn */
	W8(r14, r5); UPD(0x0C04A31Au, 2);  /* 0C04A318 mov.b Rm,@Rn */
	W8(r14, r6); UPD(0x0C04A31Cu, 1);  /* 0C04A31A mov.b Rm,@Rn */
	W8(r14, r7); UPD(0x0C04A31Eu, 1);  /* 0C04A31C mov.b Rm,@Rn */
	IF(0x0C04A31Eu); T = r3 & 1; r3 >>= 1;  /* 0C04A31E shlr Rn */
	r5 = r3;  /* 0C04A320 mov Rm,Rn */
	r6 = r3;  /* 0C04A322 mov Rm,Rn */
	r7 = r3;  /* 0C04A324 mov Rm,Rn */
	r4 = 0x1u; UPD(0x0C04A328u, 5);  /* 0C04A326 mov.l @(disp,pc),Rn */
	r5 &= r4;  /* 0C04A328 and Rm,Rn */
	r6 &= r4;  /* 0C04A32A and Rm,Rn */
	r7 &= r4;  /* 0C04A32C and Rm,Rn */
	r4 = 0x5u; UPD(0x0C04A330u, 4);  /* 0C04A32E mov.l @(disp,pc),Rn */
	IF(0x0C04A330u); ARG0(0x454Du); { s32 s_ = (s32)r4; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = 0; else r5 >>= ((~s_ & 31) + 1); }  /* 0C04A330 shld Rm,Rn */
	IF(0x0C04A332u); ARG0(0x464Du); { s32 s_ = (s32)r4; if (s_ >= 0) r6 <<= (s_ & 31); else if ((s_ & 31) == 0) r6 = 0; else r6 >>= ((~s_ & 31) + 1); }  /* 0C04A332 shld Rm,Rn */
	IF(0x0C04A334u); ARG0(0x474Du); { s32 s_ = (s32)r4; if (s_ >= 0) r7 <<= (s_ & 31); else if ((s_ & 31) == 0) r7 = 0; else r7 >>= ((~s_ & 31) + 1); }  /* 0C04A334 shld Rm,Rn */
	r4 = 0x8u; UPD(0x0C04A338u, 4);  /* 0C04A336 mov.l @(disp,pc),Rn */
	r5 |= r4;  /* 0C04A338 or Rm,Rn */
	r7 |= r4;  /* 0C04A33A or Rm,Rn */
	r4 = 0x18u; UPD(0x0C04A33Eu, 3);  /* 0C04A33C mov.l @(disp,pc),Rn */
	r6 |= r4;  /* 0C04A33E or Rm,Rn */
	W8(r14, r5); UPD(0x0C04A342u, 2);  /* 0C04A340 mov.b Rm,@Rn */
	W8(r14, r6); UPD(0x0C04A344u, 1);  /* 0C04A342 mov.b Rm,@Rn */
	W8(r14, r7); UPD(0x0C04A346u, 1);  /* 0C04A344 mov.b Rm,@Rn */
	IF(0x0C04A346u); T = r3 & 1; r3 >>= 1;  /* 0C04A346 shlr Rn */
	r5 = r3;  /* 0C04A348 mov Rm,Rn */
	r6 = r3;  /* 0C04A34A mov Rm,Rn */
	r7 = r3;  /* 0C04A34C mov Rm,Rn */
	r4 = 0x1u; UPD(0x0C04A350u, 5);  /* 0C04A34E mov.l @(disp,pc),Rn */
	r5 &= r4;  /* 0C04A350 and Rm,Rn */
	r6 &= r4;  /* 0C04A352 and Rm,Rn */
	r7 &= r4;  /* 0C04A354 and Rm,Rn */
	r4 = 0x5u; UPD(0x0C04A358u, 4);  /* 0C04A356 mov.l @(disp,pc),Rn */
	IF(0x0C04A358u); ARG0(0x454Du); { s32 s_ = (s32)r4; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = 0; else r5 >>= ((~s_ & 31) + 1); }  /* 0C04A358 shld Rm,Rn */
	IF(0x0C04A35Au); ARG0(0x464Du); { s32 s_ = (s32)r4; if (s_ >= 0) r6 <<= (s_ & 31); else if ((s_ & 31) == 0) r6 = 0; else r6 >>= ((~s_ & 31) + 1); }  /* 0C04A35A shld Rm,Rn */
	IF(0x0C04A35Cu); ARG0(0x474Du); { s32 s_ = (s32)r4; if (s_ >= 0) r7 <<= (s_ & 31); else if ((s_ & 31) == 0) r7 = 0; else r7 >>= ((~s_ & 31) + 1); }  /* 0C04A35C shld Rm,Rn */
	r4 = 0x8u; UPD(0x0C04A360u, 4);  /* 0C04A35E mov.l @(disp,pc),Rn */
	r5 |= r4;  /* 0C04A360 or Rm,Rn */
	r7 |= r4;  /* 0C04A362 or Rm,Rn */
	r4 = 0x18u; UPD(0x0C04A366u, 3);  /* 0C04A364 mov.l @(disp,pc),Rn */
	r6 |= r4;  /* 0C04A366 or Rm,Rn */
	W8(r14, r5); UPD(0x0C04A36Au, 2);  /* 0C04A368 mov.b Rm,@Rn */
	W8(r14, r6); UPD(0x0C04A36Cu, 1);  /* 0C04A36A mov.b Rm,@Rn */
	W8(r14, r7); UPD(0x0C04A36Eu, 1);  /* 0C04A36C mov.b Rm,@Rn */
	IF(0x0C04A36Eu); T = r3 & 1; r3 >>= 1;  /* 0C04A36E shlr Rn */
	r5 = r3;  /* 0C04A370 mov Rm,Rn */
	r6 = r3;  /* 0C04A372 mov Rm,Rn */
	r7 = r3;  /* 0C04A374 mov Rm,Rn */
	r4 = 0x1u; UPD(0x0C04A378u, 5);  /* 0C04A376 mov.l @(disp,pc),Rn */
	r5 &= r4;  /* 0C04A378 and Rm,Rn */
	r6 &= r4;  /* 0C04A37A and Rm,Rn */
	r7 &= r4; UPD(0x0C04A37Eu, 3);  /* 0C04A37C and Rm,Rn */
	r4 = 0x5u; UPD(0x0C04A380u, 1);  /* 0C04A37E mov.l @(disp,pc),Rn */
	IF(0x0C04A380u); ARG0(0x454Du); { s32 s_ = (s32)r4; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = 0; else r5 >>= ((~s_ & 31) + 1); }  /* 0C04A380 shld Rm,Rn */
	IF(0x0C04A382u); ARG0(0x464Du); { s32 s_ = (s32)r4; if (s_ >= 0) r6 <<= (s_ & 31); else if ((s_ & 31) == 0) r6 = 0; else r6 >>= ((~s_ & 31) + 1); }  /* 0C04A382 shld Rm,Rn */
	IF(0x0C04A384u); ARG0(0x474Du); { s32 s_ = (s32)r4; if (s_ >= 0) r7 <<= (s_ & 31); else if ((s_ & 31) == 0) r7 = 0; else r7 >>= ((~s_ & 31) + 1); }  /* 0C04A384 shld Rm,Rn */
	r4 = 0x8u; UPD(0x0C04A388u, 4);  /* 0C04A386 mov.l @(disp,pc),Rn */
	r5 |= r4;  /* 0C04A388 or Rm,Rn */
	r7 |= r4;  /* 0C04A38A or Rm,Rn */
	r4 = 0x18u; UPD(0x0C04A38Eu, 3);  /* 0C04A38C mov.l @(disp,pc),Rn */
	r6 |= r4;  /* 0C04A38E or Rm,Rn */
	W8(r14, r5); UPD(0x0C04A392u, 2);  /* 0C04A390 mov.b Rm,@Rn */
	W8(r14, r6); UPD(0x0C04A394u, 1);  /* 0C04A392 mov.b Rm,@Rn */
	W8(r14, r7); UPD(0x0C04A396u, 1);  /* 0C04A394 mov.b Rm,@Rn */
	IF(0x0C04A396u); T = r3 & 1; r3 >>= 1;  /* 0C04A396 shlr Rn */
	r5 = r3;  /* 0C04A398 mov Rm,Rn */
	r6 = r3;  /* 0C04A39A mov Rm,Rn */
	r7 = r3;  /* 0C04A39C mov Rm,Rn */
	r4 = 0x1u; UPD(0x0C04A3A0u, 5);  /* 0C04A39E mov.l @(disp,pc),Rn */
	r5 &= r4;  /* 0C04A3A0 and Rm,Rn */
	r6 &= r4;  /* 0C04A3A2 and Rm,Rn */
	r7 &= r4;  /* 0C04A3A4 and Rm,Rn */
	r4 = 0x5u; UPD(0x0C04A3A8u, 4);  /* 0C04A3A6 mov.l @(disp,pc),Rn */
	IF(0x0C04A3A8u); ARG0(0x454Du); { s32 s_ = (s32)r4; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = 0; else r5 >>= ((~s_ & 31) + 1); }  /* 0C04A3A8 shld Rm,Rn */
	IF(0x0C04A3AAu); ARG0(0x464Du); { s32 s_ = (s32)r4; if (s_ >= 0) r6 <<= (s_ & 31); else if ((s_ & 31) == 0) r6 = 0; else r6 >>= ((~s_ & 31) + 1); }  /* 0C04A3AA shld Rm,Rn */
	IF(0x0C04A3ACu); ARG0(0x474Du); { s32 s_ = (s32)r4; if (s_ >= 0) r7 <<= (s_ & 31); else if ((s_ & 31) == 0) r7 = 0; else r7 >>= ((~s_ & 31) + 1); }  /* 0C04A3AC shld Rm,Rn */
	r4 = 0x8u; UPD(0x0C04A3B0u, 4);  /* 0C04A3AE mov.l @(disp,pc),Rn */
	r5 |= r4;  /* 0C04A3B0 or Rm,Rn */
	r7 |= r4;  /* 0C04A3B2 or Rm,Rn */
	r4 = 0x18u; UPD(0x0C04A3B6u, 3);  /* 0C04A3B4 mov.l @(disp,pc),Rn */
	r6 |= r4;  /* 0C04A3B6 or Rm,Rn */
	W8(r14, r5); UPD(0x0C04A3BAu, 2);  /* 0C04A3B8 mov.b Rm,@Rn */
	W8(r14, r6); UPD(0x0C04A3BCu, 1);  /* 0C04A3BA mov.b Rm,@Rn */
	W8(r14, r7); UPD(0x0C04A3BEu, 1);  /* 0C04A3BC mov.b Rm,@Rn */
	IF(0x0C04A3BEu); T = r3 & 1; r3 >>= 1;  /* 0C04A3BE shlr Rn */
	IF(0x0C04A3C0u); r2 -= 1; T = r2 == 0;  /* 0C04A3C0 dt Rn */
	if (T) { UPD(0x0C04A3FCu, 5); goto L_0C04A3FC; }  /* 0C04A3C2 bt */
L_0C04A3C4: BLKS(0x0C04A3C4u);
	IF(0x0C04A3C4u); ;  /* 0C04A3C4 nop */
	{ IF(0x0C04A3C8u); ; /* slot nop */ UPD(0x0C04A27Eu, 4); goto L_0C04A27E; }  /* 0C04A3C6 bra */
L_0C04A3FC: BLKS(0x0C04A3FCu);
	r1 = 0x40u; UPD(0x0C04A3FEu, 1);  /* 0C04A3FC mov.l @(disp,pc),Rn */
L_0C04A3FE: BLKS(0x0C04A3FEu);
	SPIN_SAVE(0C04A3FE);
	r2 = (u32)(s32)(s8)RS8(0C04A3FE, r14); UPD(0x0C04A400u, 1);  /* 0C04A3FE mov.b @Rm,Rn */
	T = (r2 & r1) == 0;  /* 0C04A400 tst Rm,Rn */
	{ u32 c_ = T; IF(0x0C04A404u); ; /* slot nop */ if (c_) { SPIN_FFD(0C04A3FE, 5); UPD(0x0C04A3FEu, 4); goto L_0C04A3FE; } goto L_0C04A406; }  /* 0C04A402 bt/s */
L_0C04A406: BLKS(0x0C04A406u);
	IF(0x0C04A406u); PR = R32(r15); r15 += 4; UPD(0x0C04A408u, 2);  /* 0C04A406 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C04A40Au, 1);  /* 0C04A408 mov.l @Rm+,Rn */
	IF(0x0C04A40Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r13 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C04A40A rts */
}

/* fpga_delay */
void f_0C04A414(sh3_t *c)
{
	LOCALS;
	SPIN_VARS(0C04A414);
L_0C04A414: BLKS(0x0C04A414u);
	SPIN_SAVE(0C04A414);
	IF(0x0C04A414u); r0 -= 1; T = r0 == 0;  /* 0C04A414 dt Rn */
	{ u32 c_ = !T; IF(0x0C04A418u); ; /* slot nop */ if (c_) { SPIN_FFD(0C04A414, 4); UPD(0x0C04A414u, 4); goto L_0C04A414; } goto L_0C04A41A; }  /* 0C04A416 bf/s */
L_0C04A41A: BLKS(0x0C04A41Au);
	IF(0x0C04A41Au); { u32 t_ = PR; IF(0x0C04A41Cu); ; /* slot nop */ UPD(t_, 4); RET(t_); }  /* 0C04A41A rts */
}

/* heap_init */
void f_0C04A42C(sh3_t *c)
{
	LOCALS;
L_0C04A42C: BLKS(0x0C04A42Cu);
	r0 = 0xC002780u; UPD(0x0C04A42Eu, 1);  /* 0C04A42C mov.l @(disp,pc),Rn */
	r1 = 0xC04A4C4u; UPD(0x0C04A430u, 1);  /* 0C04A42E mov.l @(disp,pc),Rn */
	W32(r0 + 0x0u, r1); UPD(0x0C04A432u, 1);  /* 0C04A430 mov.l Rm,@(disp,Rn) */
	r1 = 0xC04A4F0u; UPD(0x0C04A434u, 1);  /* 0C04A432 mov.l @(disp,pc),Rn */
	W32(r0 + 0x4u, r1); UPD(0x0C04A436u, 1);  /* 0C04A434 mov.l Rm,@(disp,Rn) */
	r1 = 0xC04A53Cu; UPD(0x0C04A438u, 1);  /* 0C04A436 mov.l @(disp,pc),Rn */
	W32(r0 + 0x8u, r1); UPD(0x0C04A43Au, 1);  /* 0C04A438 mov.l Rm,@(disp,Rn) */
	r1 = 0xC04A570u; UPD(0x0C04A43Cu, 1);  /* 0C04A43A mov.l @(disp,pc),Rn */
	W32(r0 + 0xCu, r1); UPD(0x0C04A43Eu, 1);  /* 0C04A43C mov.l Rm,@(disp,Rn) */
	r1 = 0xC04A5DCu; UPD(0x0C04A440u, 1);  /* 0C04A43E mov.l @(disp,pc),Rn */
	W32(r0 + 0x10u, r1); UPD(0x0C04A442u, 1);  /* 0C04A440 mov.l Rm,@(disp,Rn) */
	r1 = 0xC04A610u; UPD(0x0C04A444u, 1);  /* 0C04A442 mov.l @(disp,pc),Rn */
	W32(r0 + 0x14u, r1); UPD(0x0C04A446u, 1);  /* 0C04A444 mov.l Rm,@(disp,Rn) */
	r1 = 0xC04A720u; UPD(0x0C04A448u, 1);  /* 0C04A446 mov.l @(disp,pc),Rn */
	W32(r0 + 0x18u, r1); UPD(0x0C04A44Au, 1);  /* 0C04A448 mov.l Rm,@(disp,Rn) */
	T = (r4 & r4) == 0;  /* 0C04A44A tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0xFFFFFFF0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C04A456u, 4); goto L_0C04A456; } goto L_0C04A450; }  /* 0C04A44C bf/s */
L_0C04A450: BLKS(0x0C04A450u);
	r4 = 0xC39508Cu; UPD(0x0C04A452u, 2);  /* 0C04A450 mov.l @(disp,pc),Rn */
	r5 = 0xC7FF000u; UPD(0x0C04A454u, 1);  /* 0C04A452 mov.l @(disp,pc),Rn */
	r5 -= r4;  /* 0C04A454 sub Rm,Rn */
	UPD(0x0C04A456u, 1);
L_0C04A456: BLKS(0x0C04A456u);
	r7 = 0xC04A420u; UPD(0x0C04A458u, 1);  /* 0C04A456 mov.l @(disp,pc),Rn */
	r4 += 0xFu;  /* 0C04A458 add #imm,Rn */
	r5 += 0xFFFFFFF1u;  /* 0C04A45A add #imm,Rn */
	r1 = 0x20u;  /* 0C04A45C mov #imm,Rn */
	r4 &= r0;  /* 0C04A45E and Rm,Rn */
	r5 &= r0;  /* 0C04A460 and Rm,Rn */
	W32(r7, r4); UPD(0x0C04A464u, 6);  /* 0C04A462 mov.l Rm,@Rn */
	r0 = r5;  /* 0C04A464 mov Rm,Rn */
	r2 = 0x0u;  /* 0C04A466 mov #imm,Rn */
	r0 += r4;  /* 0C04A468 add Rm,Rn */
	W32(r4 + 0x0u, r1); UPD(0x0C04A46Cu, 4);  /* 0C04A46A mov.l Rm,@(disp,Rn) */
	W32(r4 + 0x4u, r2); UPD(0x0C04A46Eu, 1);  /* 0C04A46C mov.l Rm,@(disp,Rn) */
	W32(r4 + 0x8u, r2); UPD(0x0C04A470u, 1);  /* 0C04A46E mov.l Rm,@(disp,Rn) */
	W32(r4 + 0xCu, r2); UPD(0x0C04A472u, 1);  /* 0C04A470 mov.l Rm,@(disp,Rn) */
	W32(r4 + 0x10u, r5); UPD(0x0C04A474u, 1);  /* 0C04A472 mov.l Rm,@(disp,Rn) */
	W32(r7 + 0x4u, r0); UPD(0x0C04A476u, 1);  /* 0C04A474 mov.l Rm,@(disp,Rn) */
	IF(0x0C04A476u); { u32 t_ = PR; W32(r7 + 0x8u, r4); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); RET(t_); }  /* 0C04A476 rts */
}

void f_0C04A4C4(sh3_t *c)
{
	LOCALS;
L_0C04A4C4: BLKS(0x0C04A4C4u);
	IF(0x0C04A4C4u); r15 -= 4; W32(r15, PR); UPD(0x0C04A4C6u, 1);  /* 0C04A4C4 sts.l pr,@-Rn */
	IF(0x0C04A4C6u); ARG0(0x04C2u); r4 = c->rbank[4];  /* 0C04A4C6 stc Rb_bank,Rn */
	{ PR = 0x0C04A4CCu; r5 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C04A62Au, 4); CALL(f_0C04A62A, 0x0C04A4CCu); }  /* 0C04A4C8 bsr */
L_0C04A4CC: BLKS(0x0C04A4CCu);
	IF(0x0C04A4CCu); PR = R32(r15); r15 += 4; UPD(0x0C04A4CEu, 1);  /* 0C04A4CC lds.l @Rn+,pr */
	IF(0x0C04A4CEu); { u32 t_ = PR; IF(0x0C04A4D0u); ARG0(0x408Eu); c->rbank[0] = r0; /* slot ldc Rn,Rb_bank */ UPD(t_, 3); RET(t_); }  /* 0C04A4CE rts */
}

/* FUN_0c04a4d4 */
void f_0C04A4D4(sh3_t *c)
{
	LOCALS;
L_0C04A4D4: BLKS(0x0C04A4D4u);
	r0 = 0xC002780u; UPD(0x0C04A4D6u, 1);  /* 0C04A4D4 mov.l @(disp,pc),Rn */
	r1 = 0xC002780u; UPD(0x0C04A4D8u, 1);  /* 0C04A4D6 mov.l @(disp,pc),Rn */
	r0 -= r1;  /* 0C04A4D8 sub Rm,Rn */
	r1 = 0x4u; UPD(0x0C04A4DCu, 2);  /* 0C04A4DA mov.l @(disp,pc),Rn */
	r0 += r1;  /* 0C04A4DC add Rm,Rn */
	UPDN(0x0C04A4E0u, 7); ARG0(0xC30Fu); TRAPA(0x0C04A4E0u, 15);  /* 0C04A4DE trapa #imm */
L_0C04A4E0: BLKS(0x0C04A4E0u);
	IF(0x0C04A4E0u); { u32 t_ = PR; IF(0x0C04A4E2u); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C04A4E0 rts */
}

void f_0C04A4F0(sh3_t *c)
{
	LOCALS;
L_0C04A4F0: BLKS(0x0C04A4F0u);
	IF(0x0C04A4F0u); ARG0(0x04C2u); r4 = c->rbank[4];  /* 0C04A4F0 stc Rb_bank,Rn */
	IF(0x0C04A4F2u); ARG0(0x05D2u); r5 = c->rbank[5];  /* 0C04A4F2 stc Rb_bank,Rn */
	IF(0x0C04A4F4u); r15 -= 4; W32(r15, MACL); UPD(0x0C04A4F6u, 3);  /* 0C04A4F4 sts.l macl,@-Rn */
	IF(0x0C04A4F6u); r15 -= 4; W32(r15, PR); UPD(0x0C04A4F8u, 1);  /* 0C04A4F6 sts.l pr,@-Rn */
	IF(0x0C04A4F8u); MACL = r5 * r4;  /* 0C04A4F8 mul.l Rm,Rn */
	r5 = 0x0u;  /* 0C04A4FA mov #imm,Rn */
	{ PR = 0x0C04A500u; IF(0x0C04A4FEu); r4 = MACL; /* slot sts macl,Rn */ UPD(0x0C04A62Au, 6); CALL(f_0C04A62A, 0x0C04A500u); }  /* 0C04A4FC bsr */
L_0C04A500: BLKS(0x0C04A500u);
	IF(0x0C04A500u); ARG0(0x408Eu); c->rbank[0] = r0;  /* 0C04A500 ldc Rn,Rb_bank */
	r2 = r0;  /* 0C04A502 mov Rm,Rn */
	IF(0x0C04A504u); r3 = MACL;  /* 0C04A504 sts macl,Rn */
	T = (r2 & r2) == 0;  /* 0C04A506 tst Rm,Rn */
	{ u32 c_ = T; r3 += 0x3u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C04A518u, 7); goto L_0C04A518; } goto L_0C04A50C; }  /* 0C04A508 bt/s */
L_0C04A50C: BLKS(0x0C04A50Cu);
	r1 = 0x0u;  /* 0C04A50C mov #imm,Rn */
	IF(0x0C04A50Eu); r3 >>= 2;  /* 0C04A50E shlr2 Rn */
	UPD(0x0C04A510u, 3);
L_0C04A510: BLKS(0x0C04A510u);
	W32(r2, r1); UPD(0x0C04A512u, 1);  /* 0C04A510 mov.l Rm,@Rn */
	IF(0x0C04A512u); r3 -= 1; T = r3 == 0;  /* 0C04A512 dt Rn */
	{ u32 c_ = !T; r2 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C04A510u, 4); goto L_0C04A510; } UPD(0x0C04A518u, 1); goto L_0C04A518; }  /* 0C04A514 bf/s */
L_0C04A518: BLKS(0x0C04A518u);
	IF(0x0C04A518u); PR = R32(r15); r15 += 4; UPD(0x0C04A51Au, 1);  /* 0C04A518 lds.l @Rn+,pr */
	IF(0x0C04A51Au); { u32 t_ = PR; IF(0x0C04A51Cu); MACL = R32(r15); r15 += 4; /* slot lds.l @Rn+,macl */ UPD(t_, 3); RET(t_); }  /* 0C04A51A rts */
}

void f_0C04A53C(sh3_t *c)
{
	LOCALS;
L_0C04A53C: BLKS(0x0C04A53Cu);
	IF(0x0C04A53Cu); ARG0(0x04C2u); r4 = c->rbank[4];  /* 0C04A53C stc Rb_bank,Rn */
	IF(0x0C04A53Eu); ARG0(0x05D2u); r5 = c->rbank[5];  /* 0C04A53E stc Rb_bank,Rn */
	IF(0x0C04A540u); r15 -= 4; W32(r15, PR); UPD(0x0C04A542u, 3);  /* 0C04A540 sts.l pr,@-Rn */
	{ PR = 0x0C04A546u; { u32 v_ = r5; r15 -= 4; W32(r15, v_); } /* slot mov.l Rm,@-Rn */ UPD(0x0C04A572u, 3); CALL(f_0C04A572, 0x0C04A546u); }  /* 0C04A542 bsr */
L_0C04A546: BLKS(0x0C04A546u);
	{ u32 v_ = R32(r15); r15 += 4; r4 = v_; } UPD(0x0C04A548u, 1);  /* 0C04A546 mov.l @Rm+,Rn */
	{ PR = 0x0C04A54Cu; r5 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C04A62Au, 3); CALL(f_0C04A62A, 0x0C04A54Cu); }  /* 0C04A548 bsr */
L_0C04A54C: BLKS(0x0C04A54Cu);
	IF(0x0C04A54Cu); PR = R32(r15); r15 += 4; UPD(0x0C04A54Eu, 1);  /* 0C04A54C lds.l @Rn+,pr */
	IF(0x0C04A54Eu); { u32 t_ = PR; IF(0x0C04A550u); ARG0(0x408Eu); c->rbank[0] = r0; /* slot ldc Rn,Rb_bank */ UPD(t_, 3); RET(t_); }  /* 0C04A54E rts */
}

/* FUN_0c04a554 */
void f_0C04A554(sh3_t *c)
{
	LOCALS;
L_0C04A554: BLKS(0x0C04A554u);
	r0 = 0xC002780u; UPD(0x0C04A556u, 1);  /* 0C04A554 mov.l @(disp,pc),Rn */
	r1 = 0xC002780u; UPD(0x0C04A558u, 1);  /* 0C04A556 mov.l @(disp,pc),Rn */
	r0 -= r1;  /* 0C04A558 sub Rm,Rn */
	r1 = 0xCu; UPD(0x0C04A55Cu, 2);  /* 0C04A55A mov.l @(disp,pc),Rn */
	r0 += r1;  /* 0C04A55C add Rm,Rn */
	UPDN(0x0C04A560u, 7); ARG0(0xC30Fu); TRAPA(0x0C04A560u, 15);  /* 0C04A55E trapa #imm */
L_0C04A560: BLKS(0x0C04A560u);
	IF(0x0C04A560u); { u32 t_ = PR; IF(0x0C04A562u); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C04A560 rts */
}

void f_0C04A570(sh3_t *c)
{
	LOCALS;
L_0C04A570: BLKS(0x0C04A570u);
	IF(0x0C04A570u); ARG0(0x04C2u); r4 = c->rbank[4];  /* 0C04A570 stc Rb_bank,Rn */
	r7 = 0xC04A428u; UPD(0x0C04A574u, 2);  /* 0C04A572 mov.l @(disp,pc),Rn */
	T = (r4 & r4) == 0;  /* 0C04A574 tst Rm,Rn */
	{ u32 c_ = T; r4 += 0xFFFFFFE0u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C04A5B8u, 4); goto L_0C04A5B8; } goto L_0C04A57A; }  /* 0C04A576 bt/s */
L_0C04A57A: BLKS(0x0C04A57Au);
	r5 = R32(r4 + 0x8u); UPD(0x0C04A57Cu, 2);  /* 0C04A57A mov.l @(disp,Rm),Rn */
	r6 = R32(r4 + 0xCu); UPD(0x0C04A57Eu, 1);  /* 0C04A57C mov.l @(disp,Rm),Rn */
	W32(r5 + 0xCu, r6); UPD(0x0C04A580u, 1);  /* 0C04A57E mov.l Rm,@(disp,Rn) */
	T = (r6 & r6) == 0;  /* 0C04A580 tst Rm,Rn */
	{ u32 c_ = T; r0 = r6; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C04A59Cu, 4); goto L_0C04A59C; } goto L_0C04A586; }  /* 0C04A582 bt/s */
L_0C04A586: BLKS(0x0C04A586u);
	r1 = R32(r5 + 0x0u); UPD(0x0C04A588u, 2);  /* 0C04A586 mov.l @(disp,Rm),Rn */
	r0 -= r5;  /* 0C04A588 sub Rm,Rn */
	T = (r6 & r6) == 0;  /* 0C04A58A tst Rm,Rn */
	r0 -= r1;  /* 0C04A58C sub Rm,Rn */
	{ u32 c_ = T; W32(r5 + 0x10u, r0); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C04A5AEu, 6); goto L_0C04A5AE; } UPD(0x0C04A592u, 1); goto L_0C04A592; }  /* 0C04A58E bt/s */
L_0C04A592: BLKS(0x0C04A592u);
	{ W32(r6 + 0x8u, r5); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C04A5AEu, 3); goto L_0C04A5AE; }  /* 0C04A592 bra */
L_0C04A59C: BLKS(0x0C04A59Cu);
	r0 = 0xC04A424u; UPD(0x0C04A59Eu, 1);  /* 0C04A59C mov.l @(disp,pc),Rn */
	r1 = R32(r5 + 0x0u); UPD(0x0C04A5A0u, 1);  /* 0C04A59E mov.l @(disp,Rm),Rn */
	r0 = R32(r0); UPD(0x0C04A5A2u, 1);  /* 0C04A5A0 mov.l @Rm,Rn */
	r0 -= r5;  /* 0C04A5A2 sub Rm,Rn */
	T = (r6 & r6) == 0;  /* 0C04A5A4 tst Rm,Rn */
	r0 -= r1;  /* 0C04A5A6 sub Rm,Rn */
	{ u32 c_ = T; W32(r5 + 0x10u, r0); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C04A5AEu, 6); goto L_0C04A5AE; } UPD(0x0C04A5ACu, 1); goto L_0C04A5AC; }  /* 0C04A5A8 bt/s */
L_0C04A5AC: BLKS(0x0C04A5ACu);
	W32(r6 + 0x8u, r5); UPD(0x0C04A5AEu, 1);  /* 0C04A5AC mov.l Rm,@(disp,Rn) */
L_0C04A5AE: BLKS(0x0C04A5AEu);
	r0 = R32(r7); UPD(0x0C04A5B0u, 1);  /* 0C04A5AE mov.l @Rm,Rn */
	T = r0 == r4;  /* 0C04A5B0 cmp/eq Rm,Rn */
	{ u32 c_ = !T; IF(0x0C04A5B4u); ; /* slot nop */ if (c_) { UPD(0x0C04A5B8u, 4); goto L_0C04A5B8; } goto L_0C04A5B6; }  /* 0C04A5B2 bf/s */
L_0C04A5B6: BLKS(0x0C04A5B6u);
	W32(r7, r5); UPD(0x0C04A5B8u, 2);  /* 0C04A5B6 mov.l Rm,@Rn */
L_0C04A5B8: BLKS(0x0C04A5B8u);
	IF(0x0C04A5B8u); { u32 t_ = PR; IF(0x0C04A5BAu); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C04A5B8 rts */
}


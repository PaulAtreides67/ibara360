#include "recomp.h"
#include "blk_recomp_funcs.h"

void blk_f_0C000000(sh3_t *c)
{
	LOCALS;
L_0C000000: BLKS(0x0C000000u);
	r15 = 0xE0D4D102u; UPD(0x0C000002u, 1);  /* 0C000000 mov.l @(disp,pc),Rn */
	r0 = 0x6002011Eu; UPD(0x0C000004u, 1);  /* 0C000002 mov.l @(disp,pc),Rn */
	IF(0x0C000004u); ARG0(0x400Eu); SET_SR(r0); UPDI(0x0C000006u);  /* 0C000004 ldc Rn,sr */
L_0C000006: BLKS(0x0C000006u);
	r0 = 0x412B0009u; UPD(0x0C000008u, 1);  /* 0C000006 mov.l @(disp,pc),Rn */
	IF(0x0C000008u); c->vbr = r0;  /* 0C000008 ldc Rn,vbr */
	r0 = 0xC001000u; UPD(0x0C00000Cu, 2);  /* 0C00000A mov.l @(disp,pc),Rn */
	IF(0x0C00000Cu); c->gbr = r0;  /* 0C00000C ldc Rn,gbr */
	r0 = 0xA500u; UPD(0x0C000010u, 2);  /* 0C00000E mov.l @(disp,pc),Rn */
	W16(c->gbr + 0x86u, r0); UPD(0x0C000012u, 1);  /* 0C000010 mov.w r0,@(disp,gbr) */
	r0 = 0xA507u; UPD(0x0C000014u, 1);  /* 0C000012 mov.l @(disp,pc),Rn */
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
	r0 = 0xA500u; UPD(0x0C00003Eu, 1);  /* 0C00003C mov.l @(disp,pc),Rn */
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
	r2 = 0xAC000000u; UPD(0x0C000084u, 2);  /* 0C000082 mov.l @(disp,pc),Rn */
	r1 = 0xA0000000u; UPD(0x0C000086u, 1);  /* 0C000084 mov.l @(disp,pc),Rn */
	r3 = 0x51000u; UPD(0x0C000088u, 1);  /* 0C000086 mov.l @(disp,pc),Rn */
	IF(0x0C000088u); r3 >>= 2;  /* 0C000088 shlr2 Rn */
	UPD(0x0C00008Au, 1);
L_0C00008A: BLKS(0x0C00008Au);
	{ u32 v_ = R32(r1); r1 += 4; r0 = v_; } UPD(0x0C00008Cu, 1);  /* 0C00008A mov.l @Rm+,Rn */
	IF(0x0C00008Cu); r3 -= 1; T = r3 == 0;  /* 0C00008C dt Rn */
	W32(r2, r0); UPD(0x0C000090u, 2);  /* 0C00008E mov.l Rm,@Rn */
	{ u32 c_ = !T; r2 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C00008Au, 3); goto L_0C00008A; } goto L_0C000094; }  /* 0C000090 bf/s */
L_0C000094: BLKS(0x0C000094u);
	r4 = 0xAC051000u; UPD(0x0C000096u, 2);  /* 0C000094 mov.l @(disp,pc),Rn */
	r5 = 0xA0051000u; UPD(0x0C000098u, 1);  /* 0C000096 mov.l @(disp,pc),Rn */
	r0 = 0xC002AC4u; UPD(0x0C00009Au, 1);  /* 0C000098 mov.l @(disp,pc),Rn */
	IF(0x0C00009Au); { u32 t_ = r0; PR = 0x0C00009Eu; IF(0x0C00009Cu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C002AC4, 0x0C002AC4u, 0x0C00009Eu); }  /* 0C00009A jsr @Rn */
L_0C00009E: BLKS(0x0C00009Eu);
	r1 = 0x1C8u; UPD(0x0C0000A0u, 1);  /* 0C00009E mov.l @(disp,pc),Rn */
	r2 = 0xAC000100u; UPD(0x0C0000A2u, 1);  /* 0C0000A0 mov.l @(disp,pc),Rn */
	r3 = 0x4u; UPD(0x0C0000A4u, 1);  /* 0C0000A2 mov.l @(disp,pc),Rn */
L_0C0000A4: BLKS(0x0C0000A4u);
	{ u32 v_ = R32(r1); r1 += 4; r0 = v_; } UPD(0x0C0000A6u, 1);  /* 0C0000A4 mov.l @Rm+,Rn */
	IF(0x0C0000A6u); r3 -= 1; T = r3 == 0;  /* 0C0000A6 dt Rn */
	W32(r2, r0); UPD(0x0C0000AAu, 2);  /* 0C0000A8 mov.l Rm,@Rn */
	{ u32 c_ = !T; r2 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0000A4u, 3); goto L_0C0000A4; } goto L_0C0000AE; }  /* 0C0000AA bf/s */
L_0C0000AE: BLKS(0x0C0000AEu);
	r1 = 0x1D8u; UPD(0x0C0000B0u, 2);  /* 0C0000AE mov.l @(disp,pc),Rn */
	r2 = 0xAC000400u; UPD(0x0C0000B2u, 1);  /* 0C0000B0 mov.l @(disp,pc),Rn */
	r3 = 0x4u; UPD(0x0C0000B4u, 1);  /* 0C0000B2 mov.l @(disp,pc),Rn */
L_0C0000B4: BLKS(0x0C0000B4u);
	{ u32 v_ = R32(r1); r1 += 4; r0 = v_; } UPD(0x0C0000B6u, 1);  /* 0C0000B4 mov.l @Rm+,Rn */
	IF(0x0C0000B6u); r3 -= 1; T = r3 == 0;  /* 0C0000B6 dt Rn */
	W32(r2, r0); UPD(0x0C0000BAu, 2);  /* 0C0000B8 mov.l Rm,@Rn */
	{ u32 c_ = !T; r2 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0000B4u, 3); goto L_0C0000B4; } goto L_0C0000BE; }  /* 0C0000BA bf/s */
L_0C0000BE: BLKS(0x0C0000BEu);
	r1 = 0x1E8u; UPD(0x0C0000C0u, 2);  /* 0C0000BE mov.l @(disp,pc),Rn */
	r2 = 0xAC000600u; UPD(0x0C0000C2u, 1);  /* 0C0000C0 mov.l @(disp,pc),Rn */
	r3 = 0x5u; UPD(0x0C0000C4u, 1);  /* 0C0000C2 mov.l @(disp,pc),Rn */
L_0C0000C4: BLKS(0x0C0000C4u);
	{ u32 v_ = R32(r1); r1 += 4; r0 = v_; } UPD(0x0C0000C6u, 1);  /* 0C0000C4 mov.l @Rm+,Rn */
	IF(0x0C0000C6u); r3 -= 1; T = r3 == 0;  /* 0C0000C6 dt Rn */
	W32(r2, r0); UPD(0x0C0000CAu, 2);  /* 0C0000C8 mov.l Rm,@Rn */
	{ u32 c_ = !T; r2 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0000C4u, 3); goto L_0C0000C4; } goto L_0C0000CE; }  /* 0C0000CA bf/s */
L_0C0000CE: BLKS(0x0C0000CEu);
	r1 = 0xFFFFF00Fu; UPD(0x0C0000D0u, 2);  /* 0C0000CE mov.w @(disp,pc),Rn */
	r2 = 0x430u; UPD(0x0C0000D2u, 1);  /* 0C0000D0 mov.w @(disp,pc),Rn */
	r3 = 0xA4000000u; UPD(0x0C0000D4u, 1);  /* 0C0000D2 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s16)R16(r3); UPD(0x0C0000D6u, 1);  /* 0C0000D4 mov.w @Rm,Rn */
	r0 &= r1;  /* 0C0000D6 and Rm,Rn */
	r0 |= r2;  /* 0C0000D8 or Rm,Rn */
	W16(r3 + 0x16u, r0); UPD(0x0C0000DCu, 3);  /* 0C0000DA mov.w r0,@(disp,Rn) */
	r1 = 0x0u; UPD(0x0C0000DEu, 1);  /* 0C0000DC mov.l @(disp,pc),Rn */
	r0 = 0xB8000010u; UPD(0x0C0000E0u, 1);  /* 0C0000DE mov.l @(disp,pc),Rn */
	W32(r0, r1); UPD(0x0C0000E2u, 1);  /* 0C0000E0 mov.l Rm,@Rn */
	r0 = 0xC002A30u; UPD(0x0C0000E4u, 1);  /* 0C0000E2 mov.l @(disp,pc),Rn */
	r4 = 0x0u; UPD(0x0C0000E6u, 1);  /* 0C0000E4 mov.l @(disp,pc),Rn */
	IF(0x0C0000E6u); { u32 t_ = r0; PR = 0x0C0000EAu; IF(0x0C0000E8u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C002A30, 0x0C002A30u, 0x0C0000EAu); }  /* 0C0000E6 jsr @Rn */
L_0C0000EA: BLKS(0x0C0000EAu);
	r0 = 0x1u;  /* 0C0000EA mov #imm,Rn */
	W32(c->gbr + 0xECu, r0); UPD(0x0C0000EEu, 2);  /* 0C0000EC mov.l r0,@(disp,gbr) */
	r0 = 0xC05C030u; UPD(0x0C0000F0u, 1);  /* 0C0000EE mov.l @(disp,pc),Rn */
	IF(0x0C0000F0u); { u32 t_ = r0; PR = 0x0C0000F4u; IF(0x0C0000F2u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C05C030, 0x0C05C030u, 0x0C0000F4u); }  /* 0C0000F0 jsr @Rn */
L_0C0000F4: BLKS(0x0C0000F4u);
	r0 = 0xC0603C0u; UPD(0x0C0000F6u, 1);  /* 0C0000F4 mov.l @(disp,pc),Rn */
	IF(0x0C0000F6u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); IF(0x0C0000F8u); ; /* slot nop */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0603C0u: TAIL(blk_f_0C0603C0); default: JUMPD(tv_); } }  /* 0C0000F6 jmp @Rn */
}

/* vbr_general_exception */
void blk_f_0C000100(sh3_t *c)
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
void blk_f_0C000400(sh3_t *c)
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
void blk_f_0C000600(sh3_t *c)
{
	LOCALS;
L_0C000600: BLKS(0x0C000600u);
	r0 = 0xA4000000u; UPD(0x0C000602u, 1);  /* 0C000600 mov.l @(disp,pc),Rn */
	r1 = 0xC001000u; UPD(0x0C000604u, 1);  /* 0C000602 mov.l @(disp,pc),Rn */
	r0 = R32(r0); UPD(0x0C000606u, 1);  /* 0C000604 mov.l @Rm,Rn */
	IF(0x0C000606u); r1 = R32(r0 + r1); UPD(0x0C000608u, 1);  /* 0C000606 mov.l @(r0,Rm),Rn */
	IF(0x0C000608u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); IF(0x0C00060Au); ; /* slot nop */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C000608 jmp @Rn */
}

void blk_f_0C002020(sh3_t *c)
{
	LOCALS;
L_0C002020: BLKS(0x0C002020u);
	r1 = 0xFFFFFFFCu;  /* 0C002020 mov #imm,Rn */
	r5 = 0xC002070u; UPD(0x0C002024u, 2);  /* 0C002022 mov.l @(disp,pc),Rn */
	r2 = 0xA400002Cu; UPD(0x0C002026u, 1);  /* 0C002024 mov.l @(disp,pc),Rn */
	r3 = R32(r5 + 0x0u); UPD(0x0C002028u, 1);  /* 0C002026 mov.l @(disp,Rm),Rn */
	r0 = R32(r2); UPD(0x0C00202Au, 1);  /* 0C002028 mov.l @Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C00202A tst Rm,Rn */
	r0 &= r1;  /* 0C00202C and Rm,Rn */
	{ u32 c_ = T; W32(r2, r0); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C002064u, 5); goto L_0C002064; } UPD(0x0C002032u, 1); goto L_0C002032; }  /* 0C00202E bt/s */
L_0C002032: BLKS(0x0C002032u);
	r4 = R32(r5 + 0x4u); UPD(0x0C002034u, 1);  /* 0C002032 mov.l @(disp,Rm),Rn */
	IF(0x0C002034u); r15 -= 4; W32(r15, PR); UPD(0x0C002036u, 1);  /* 0C002034 sts.l pr,@-Rn */
	IF(0x0C002036u); r15 -= 4; W32(r15, MACH); UPD(0x0C002038u, 1);  /* 0C002036 sts.l mach,@-Rn */
	IF(0x0C002038u); r15 -= 4; W32(r15, MACL); UPD(0x0C00203Au, 1);  /* 0C002038 sts.l macl,@-Rn */
	IF(0x0C00203Au); r15 -= 4; W32(r15, c->gbr); UPD(0x0C00203Cu, 1);  /* 0C00203A stc.l gbr,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C00203Eu, 1);  /* 0C00203C mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C002040u, 1);  /* 0C00203E mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C002042u, 1);  /* 0C002040 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C002044u, 1);  /* 0C002042 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C002046u, 1);  /* 0C002044 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C002048u, 1);  /* 0C002046 mov.l Rm,@-Rn */
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C00204Au, 1);  /* 0C002048 mov.l Rm,@-Rn */
	IF(0x0C00204Au); { u32 t_ = r3; PR = 0x0C00204Eu; IF(0x0C00204Cu); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C00204Eu); }  /* 0C00204A jsr @Rn */
L_0C00204E: BLKS(0x0C00204Eu);
	{ u32 v_ = R32(r15); r15 += 4; r8 = v_; } UPD(0x0C002050u, 1);  /* 0C00204E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C002052u, 1);  /* 0C002050 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C002054u, 1);  /* 0C002052 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C002056u, 1);  /* 0C002054 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C002058u, 1);  /* 0C002056 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C00205Au, 1);  /* 0C002058 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C00205Cu, 1);  /* 0C00205A mov.l @Rm+,Rn */
	IF(0x0C00205Cu); c->gbr = R32(r15); r15 += 4; UPD(0x0C00205Eu, 1);  /* 0C00205C ldc.l @Rn+,gbr */
	IF(0x0C00205Eu); MACL = R32(r15); r15 += 4; UPD(0x0C002060u, 1);  /* 0C00205E lds.l @Rn+,macl */
	IF(0x0C002060u); MACH = R32(r15); r15 += 4; UPD(0x0C002062u, 1);  /* 0C002060 lds.l @Rn+,mach */
	IF(0x0C002062u); PR = R32(r15); r15 += 4; UPD(0x0C002064u, 1);  /* 0C002062 lds.l @Rn+,pr */
L_0C002064: BLKS(0x0C002064u);
	IF(0x0C002064u); { u32 t_ = c->spc; SET_SR(c->ssr); IF(0x0C002066u); ; /* slot nop */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C002064 rte */
}

void blk_f_0C002180(sh3_t *c)
{
	LOCALS;
L_0C002180: BLKS(0x0C002180u);
	r5 = 0xC0021D0u; UPD(0x0C002182u, 1);  /* 0C002180 mov.l @(disp,pc),Rn */
	r1 = 0xFFFFFFFEu;  /* 0C002182 mov #imm,Rn */
	r3 = R32(r5 + 0x0u); UPD(0x0C002186u, 2);  /* 0C002184 mov.l @(disp,Rm),Rn */
	r2 = 0xA4000004u; UPD(0x0C002188u, 1);  /* 0C002186 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C00218Au, 1);  /* 0C002188 mov.b @Rm,Rn */
	W8(r2, r1); UPD(0x0C00218Cu, 1);  /* 0C00218A mov.b Rm,@Rn */
	T = (r3 & r3) == 0;  /* 0C00218C tst Rm,Rn */
	{ u32 c_ = T; IF(0x0C002190u); ; /* slot nop */ if (c_) { UPD(0x0C0021C4u, 4); goto L_0C0021C4; } goto L_0C002192; }  /* 0C00218E bt/s */
L_0C002192: BLKS(0x0C002192u);
	r4 = R32(r5 + 0x4u); UPD(0x0C002194u, 2);  /* 0C002192 mov.l @(disp,Rm),Rn */
	IF(0x0C002194u); r15 -= 4; W32(r15, PR); UPD(0x0C002196u, 1);  /* 0C002194 sts.l pr,@-Rn */
	IF(0x0C002196u); r15 -= 4; W32(r15, MACH); UPD(0x0C002198u, 1);  /* 0C002196 sts.l mach,@-Rn */
	IF(0x0C002198u); r15 -= 4; W32(r15, MACL); UPD(0x0C00219Au, 1);  /* 0C002198 sts.l macl,@-Rn */
	IF(0x0C00219Au); r15 -= 4; W32(r15, c->gbr); UPD(0x0C00219Cu, 1);  /* 0C00219A stc.l gbr,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C00219Eu, 1);  /* 0C00219C mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0021A0u, 1);  /* 0C00219E mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0021A2u, 1);  /* 0C0021A0 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0021A4u, 1);  /* 0C0021A2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0021A6u, 1);  /* 0C0021A4 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0021A8u, 1);  /* 0C0021A6 mov.l Rm,@-Rn */
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0021AAu, 1);  /* 0C0021A8 mov.l Rm,@-Rn */
	IF(0x0C0021AAu); { u32 t_ = r3; PR = 0x0C0021AEu; IF(0x0C0021ACu); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C0021AEu); }  /* 0C0021AA jsr @Rn */
L_0C0021AE: BLKS(0x0C0021AEu);
	{ u32 v_ = R32(r15); r15 += 4; r8 = v_; } UPD(0x0C0021B0u, 1);  /* 0C0021AE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0021B2u, 1);  /* 0C0021B0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0021B4u, 1);  /* 0C0021B2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0021B6u, 1);  /* 0C0021B4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0021B8u, 1);  /* 0C0021B6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0021BAu, 1);  /* 0C0021B8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0021BCu, 1);  /* 0C0021BA mov.l @Rm+,Rn */
	IF(0x0C0021BCu); c->gbr = R32(r15); r15 += 4; UPD(0x0C0021BEu, 1);  /* 0C0021BC ldc.l @Rn+,gbr */
	IF(0x0C0021BEu); MACL = R32(r15); r15 += 4; UPD(0x0C0021C0u, 1);  /* 0C0021BE lds.l @Rn+,macl */
	IF(0x0C0021C0u); MACH = R32(r15); r15 += 4; UPD(0x0C0021C2u, 1);  /* 0C0021C0 lds.l @Rn+,mach */
	IF(0x0C0021C2u); PR = R32(r15); r15 += 4; UPD(0x0C0021C4u, 1);  /* 0C0021C2 lds.l @Rn+,pr */
L_0C0021C4: BLKS(0x0C0021C4u);
	IF(0x0C0021C4u); { u32 t_ = c->spc; SET_SR(c->ssr); IF(0x0C0021C6u); ; /* slot nop */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C0021C4 rte */
}

void blk_f_0C00224C(sh3_t *c)
{
	LOCALS;
L_0C00224C: BLKS(0x0C00224Cu);
	IF(0x0C00224Cu); r15 -= 4; W32(r15, PR); UPD(0x0C00224Eu, 1);  /* 0C00224C sts.l pr,@-Rn */
	IF(0x0C00224Eu); r15 -= 4; W32(r15, MACH); UPD(0x0C002250u, 1);  /* 0C00224E sts.l mach,@-Rn */
	IF(0x0C002250u); r15 -= 4; W32(r15, MACL); UPD(0x0C002252u, 1);  /* 0C002250 sts.l macl,@-Rn */
	IF(0x0C002252u); r15 -= 4; W32(r15, c->gbr); UPD(0x0C002254u, 1);  /* 0C002252 stc.l gbr,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C002256u, 1);  /* 0C002254 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C002258u, 1);  /* 0C002256 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C00225Au, 1);  /* 0C002258 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C00225Cu, 1);  /* 0C00225A mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C00225Eu, 1);  /* 0C00225C mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C002260u, 1);  /* 0C00225E mov.l Rm,@-Rn */
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C002262u, 1);  /* 0C002260 mov.l Rm,@-Rn */
	r4 = 0xB8000024u; UPD(0x0C002264u, 1);  /* 0C002262 mov.l @(disp,pc),Rn */
	r0 = R32(r4); UPD(0x0C002266u, 1);  /* 0C002264 mov.l @Rm,Rn */
	r3 = 0x1u; UPD(0x0C002268u, 1);  /* 0C002266 mov.l @(disp,pc),Rn */
	r3 |= r0;  /* 0C002268 or Rm,Rn */
	W32(r4, r3); UPD(0x0C00226Cu, 2);  /* 0C00226A mov.l Rm,@Rn */
	r0 = 0xFFFFFFFEu; UPD(0x0C00226Eu, 1);  /* 0C00226C mov.l @(disp,pc),Rn */
	r3 &= r0;  /* 0C00226E and Rm,Rn */
	W32(r4, r3); UPD(0x0C002272u, 2);  /* 0C002270 mov.l Rm,@Rn */
	r1 = 0xFFFFFFFBu; UPD(0x0C002274u, 1);  /* 0C002272 mov.l @(disp,pc),Rn */
	r2 = 0xA4000004u; UPD(0x0C002276u, 1);  /* 0C002274 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C002278u, 1);  /* 0C002276 mov.b @Rm,Rn */
	r0 &= r1;  /* 0C002278 and Rm,Rn */
	W8(r2, r0); UPD(0x0C00227Cu, 2);  /* 0C00227A mov.b Rm,@Rn */
	r2 = 0xC002300u; UPD(0x0C00227Eu, 1);  /* 0C00227C mov.l @(disp,pc),Rn */
	r1 = R32(r2 + 0x10u); UPD(0x0C002280u, 1);  /* 0C00227E mov.l @(disp,Rm),Rn */
	r0 = R32(r2 + 0x0u); UPD(0x0C002282u, 1);  /* 0C002280 mov.l @(disp,Rm),Rn */
	r1 += 0x1u;  /* 0C002282 add #imm,Rn */
	T = (r0 & r0) == 0;  /* 0C002284 tst Rm,Rn */
	r4 = R32(r2 + 0x4u); UPD(0x0C002288u, 3);  /* 0C002286 mov.l @(disp,Rm),Rn */
	{ u32 c_ = T; W32(r2 + 0x10u, r1); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C002290u, 3); goto L_0C002290; } UPD(0x0C00228Cu, 1); goto L_0C00228C; }  /* 0C002288 bt/s */
L_0C00228C: BLKS(0x0C00228Cu);
	IF(0x0C00228Cu); { u32 t_ = r0; PR = 0x0C002290u; IF(0x0C00228Eu); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C002290u); }  /* 0C00228C jsr @Rn */
L_0C002290: BLKS(0x0C002290u);
	r0 = 0xC002308u; UPD(0x0C002292u, 1);  /* 0C002290 mov.l @(disp,pc),Rn */
	r0 = R32(r0); UPD(0x0C002294u, 1);  /* 0C002292 mov.l @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C002294 tst Rm,Rn */
	{ u32 c_ = T; IF(0x0C002298u); ; /* slot nop */ if (c_) { UPD(0x0C00229Eu, 4); goto L_0C00229E; } goto L_0C00229A; }  /* 0C002296 bt/s */
L_0C00229A: BLKS(0x0C00229Au);
	IF(0x0C00229Au); { u32 t_ = r0; PR = 0x0C00229Eu; IF(0x0C00229Cu); ; /* slot nop */ UPD(t_, 3); CALLD(t_, 0x0C00229Eu); }  /* 0C00229A jsr @Rn */
L_0C00229E: BLKS(0x0C00229Eu);
	r0 = 0xC00230Cu; UPD(0x0C0022A0u, 1);  /* 0C00229E mov.l @(disp,pc),Rn */
	r0 = R32(r0); UPD(0x0C0022A2u, 1);  /* 0C0022A0 mov.l @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0022A2 tst Rm,Rn */
	{ u32 c_ = T; IF(0x0C0022A6u); ; /* slot nop */ if (c_) { UPD(0x0C0022ACu, 4); goto L_0C0022AC; } goto L_0C0022A8; }  /* 0C0022A4 bt/s */
L_0C0022A8: BLKS(0x0C0022A8u);
	IF(0x0C0022A8u); { u32 t_ = r0; PR = 0x0C0022ACu; IF(0x0C0022AAu); ; /* slot nop */ UPD(t_, 3); CALLD(t_, 0x0C0022ACu); }  /* 0C0022A8 jsr @Rn */
L_0C0022AC: BLKS(0x0C0022ACu);
	r0 = 0xC056EE8u; UPD(0x0C0022AEu, 1);  /* 0C0022AC mov.l @(disp,pc),Rn */
	r0 = R32(r0); UPD(0x0C0022B0u, 1);  /* 0C0022AE mov.l @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0022B0 tst Rm,Rn */
	{ u32 c_ = T; IF(0x0C0022B4u); ; /* slot nop */ if (c_) { UPD(0x0C0022BCu, 4); goto L_0C0022BC; } goto L_0C0022B6; }  /* 0C0022B2 bt/s */
L_0C0022B6: BLKS(0x0C0022B6u);
	r0 = 0xC0575B8u; UPD(0x0C0022B8u, 2);  /* 0C0022B6 mov.l @(disp,pc),Rn */
	IF(0x0C0022B8u); { u32 t_ = r0; PR = 0x0C0022BCu; IF(0x0C0022BAu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0575B8, 0x0C0575B8u, 0x0C0022BCu); }  /* 0C0022B8 jsr @Rn */
L_0C0022BC: BLKS(0x0C0022BCu);
	{ u32 v_ = R32(r15); r15 += 4; r8 = v_; } UPD(0x0C0022BEu, 1);  /* 0C0022BC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0022C0u, 1);  /* 0C0022BE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0022C2u, 1);  /* 0C0022C0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0022C4u, 1);  /* 0C0022C2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0022C6u, 1);  /* 0C0022C4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0022C8u, 1);  /* 0C0022C6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0022CAu, 1);  /* 0C0022C8 mov.l @Rm+,Rn */
	IF(0x0C0022CAu); c->gbr = R32(r15); r15 += 4; UPD(0x0C0022CCu, 1);  /* 0C0022CA ldc.l @Rn+,gbr */
	IF(0x0C0022CCu); MACL = R32(r15); r15 += 4; UPD(0x0C0022CEu, 1);  /* 0C0022CC lds.l @Rn+,macl */
	IF(0x0C0022CEu); MACH = R32(r15); r15 += 4; UPD(0x0C0022D0u, 1);  /* 0C0022CE lds.l @Rn+,mach */
	IF(0x0C0022D0u); PR = R32(r15); r15 += 4; UPD(0x0C0022D2u, 1);  /* 0C0022D0 lds.l @Rn+,pr */
	IF(0x0C0022D2u); { u32 t_ = c->spc; SET_SR(c->ssr); IF(0x0C0022D4u); ; /* slot nop */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C0022D2 rte */
}

void blk_f_0C00257C(sh3_t *c)
{
	LOCALS;
L_0C00257C: BLKS(0x0C00257Cu);
	r1 = 0xFFFFFE9Cu; UPD(0x0C00257Eu, 1);  /* 0C00257C mov.l @(disp,pc),Rn */
	r2 = 0xFFFFFEFFu; UPD(0x0C002580u, 1);  /* 0C00257E mov.w @(disp,pc),Rn */
	r0 = (u32)(s32)(s16)R16(r1); UPD(0x0C002582u, 1);  /* 0C002580 mov.w @Rm,Rn */
	r5 = 0xC0025D0u; UPD(0x0C002584u, 1);  /* 0C002582 mov.l @(disp,pc),Rn */
	r0 &= r2;  /* 0C002584 and Rm,Rn */
	r3 = R32(r5 + 0x0u); UPD(0x0C002588u, 2);  /* 0C002586 mov.l @(disp,Rm),Rn */
	T = (r3 & r3) == 0;  /* 0C002588 tst Rm,Rn */
	r4 = R32(r5 + 0x4u); UPD(0x0C00258Cu, 2);  /* 0C00258A mov.l @(disp,Rm),Rn */
	{ u32 c_ = T; W16(r1, r0); /* slot mov.w Rm,@Rn */ if (c_) { UPD(0x0C0025C0u, 3); goto L_0C0025C0; } UPD(0x0C002590u, 1); goto L_0C002590; }  /* 0C00258C bt/s */
L_0C002590: BLKS(0x0C002590u);
	IF(0x0C002590u); r15 -= 4; W32(r15, PR); UPD(0x0C002592u, 1);  /* 0C002590 sts.l pr,@-Rn */
	IF(0x0C002592u); r15 -= 4; W32(r15, MACH); UPD(0x0C002594u, 1);  /* 0C002592 sts.l mach,@-Rn */
	IF(0x0C002594u); r15 -= 4; W32(r15, MACL); UPD(0x0C002596u, 1);  /* 0C002594 sts.l macl,@-Rn */
	IF(0x0C002596u); r15 -= 4; W32(r15, c->gbr); UPD(0x0C002598u, 1);  /* 0C002596 stc.l gbr,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C00259Au, 1);  /* 0C002598 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C00259Cu, 1);  /* 0C00259A mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C00259Eu, 1);  /* 0C00259C mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0025A0u, 1);  /* 0C00259E mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0025A2u, 1);  /* 0C0025A0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0025A4u, 1);  /* 0C0025A2 mov.l Rm,@-Rn */
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0025A6u, 1);  /* 0C0025A4 mov.l Rm,@-Rn */
	IF(0x0C0025A6u); { u32 t_ = r3; PR = 0x0C0025AAu; IF(0x0C0025A8u); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C0025AAu); }  /* 0C0025A6 jsr @Rn */
L_0C0025AA: BLKS(0x0C0025AAu);
	{ u32 v_ = R32(r15); r15 += 4; r8 = v_; } UPD(0x0C0025ACu, 1);  /* 0C0025AA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0025AEu, 1);  /* 0C0025AC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0025B0u, 1);  /* 0C0025AE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0025B2u, 1);  /* 0C0025B0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0025B4u, 1);  /* 0C0025B2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0025B6u, 1);  /* 0C0025B4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0025B8u, 1);  /* 0C0025B6 mov.l @Rm+,Rn */
	IF(0x0C0025B8u); c->gbr = R32(r15); r15 += 4; UPD(0x0C0025BAu, 1);  /* 0C0025B8 ldc.l @Rn+,gbr */
	IF(0x0C0025BAu); MACL = R32(r15); r15 += 4; UPD(0x0C0025BCu, 1);  /* 0C0025BA lds.l @Rn+,macl */
	IF(0x0C0025BCu); MACH = R32(r15); r15 += 4; UPD(0x0C0025BEu, 1);  /* 0C0025BC lds.l @Rn+,mach */
	IF(0x0C0025BEu); PR = R32(r15); r15 += 4; UPD(0x0C0025C0u, 1);  /* 0C0025BE lds.l @Rn+,pr */
L_0C0025C0: BLKS(0x0C0025C0u);
	IF(0x0C0025C0u); { u32 t_ = c->spc; SET_SR(c->ssr); IF(0x0C0025C2u); ; /* slot nop */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C0025C0 rte */
}

void blk_f_0C0025D8(sh3_t *c)
{
	LOCALS;
L_0C0025D8: BLKS(0x0C0025D8u);
	r1 = 0xFFFFFEA8u; UPD(0x0C0025DAu, 1);  /* 0C0025D8 mov.l @(disp,pc),Rn */
	r2 = 0xFFFFFEFFu; UPD(0x0C0025DCu, 1);  /* 0C0025DA mov.w @(disp,pc),Rn */
	r0 = (u32)(s32)(s16)R16(r1); UPD(0x0C0025DEu, 1);  /* 0C0025DC mov.w @Rm,Rn */
	r5 = 0xC00262Cu; UPD(0x0C0025E0u, 1);  /* 0C0025DE mov.l @(disp,pc),Rn */
	r0 &= r2;  /* 0C0025E0 and Rm,Rn */
	r3 = R32(r5 + 0x0u); UPD(0x0C0025E4u, 2);  /* 0C0025E2 mov.l @(disp,Rm),Rn */
	T = (r3 & r3) == 0;  /* 0C0025E4 tst Rm,Rn */
	r4 = R32(r5 + 0x4u); UPD(0x0C0025E8u, 2);  /* 0C0025E6 mov.l @(disp,Rm),Rn */
	{ u32 c_ = T; W16(r1, r0); /* slot mov.w Rm,@Rn */ if (c_) { UPD(0x0C00261Cu, 3); goto L_0C00261C; } UPD(0x0C0025ECu, 1); goto L_0C0025EC; }  /* 0C0025E8 bt/s */
L_0C0025EC: BLKS(0x0C0025ECu);
	IF(0x0C0025ECu); r15 -= 4; W32(r15, PR); UPD(0x0C0025EEu, 1);  /* 0C0025EC sts.l pr,@-Rn */
	IF(0x0C0025EEu); r15 -= 4; W32(r15, MACH); UPD(0x0C0025F0u, 1);  /* 0C0025EE sts.l mach,@-Rn */
	IF(0x0C0025F0u); r15 -= 4; W32(r15, MACL); UPD(0x0C0025F2u, 1);  /* 0C0025F0 sts.l macl,@-Rn */
	IF(0x0C0025F2u); r15 -= 4; W32(r15, c->gbr); UPD(0x0C0025F4u, 1);  /* 0C0025F2 stc.l gbr,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0025F6u, 1);  /* 0C0025F4 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0025F8u, 1);  /* 0C0025F6 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0025FAu, 1);  /* 0C0025F8 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0025FCu, 1);  /* 0C0025FA mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0025FEu, 1);  /* 0C0025FC mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C002600u, 1);  /* 0C0025FE mov.l Rm,@-Rn */
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C002602u, 1);  /* 0C002600 mov.l Rm,@-Rn */
	IF(0x0C002602u); { u32 t_ = r3; PR = 0x0C002606u; IF(0x0C002604u); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C002606u); }  /* 0C002602 jsr @Rn */
L_0C002606: BLKS(0x0C002606u);
	{ u32 v_ = R32(r15); r15 += 4; r8 = v_; } UPD(0x0C002608u, 1);  /* 0C002606 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C00260Au, 1);  /* 0C002608 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C00260Cu, 1);  /* 0C00260A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C00260Eu, 1);  /* 0C00260C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C002610u, 1);  /* 0C00260E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C002612u, 1);  /* 0C002610 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C002614u, 1);  /* 0C002612 mov.l @Rm+,Rn */
	IF(0x0C002614u); c->gbr = R32(r15); r15 += 4; UPD(0x0C002616u, 1);  /* 0C002614 ldc.l @Rn+,gbr */
	IF(0x0C002616u); MACL = R32(r15); r15 += 4; UPD(0x0C002618u, 1);  /* 0C002616 lds.l @Rn+,macl */
	IF(0x0C002618u); MACH = R32(r15); r15 += 4; UPD(0x0C00261Au, 1);  /* 0C002618 lds.l @Rn+,mach */
	IF(0x0C00261Au); PR = R32(r15); r15 += 4; UPD(0x0C00261Cu, 1);  /* 0C00261A lds.l @Rn+,pr */
L_0C00261C: BLKS(0x0C00261Cu);
	IF(0x0C00261Cu); { u32 t_ = c->spc; SET_SR(c->ssr); IF(0x0C00261Eu); ; /* slot nop */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C00261C rte */
}

void blk_f_0C002634(sh3_t *c)
{
	LOCALS;
L_0C002634: BLKS(0x0C002634u);
	r1 = 0xFFFFFEB4u; UPD(0x0C002636u, 1);  /* 0C002634 mov.l @(disp,pc),Rn */
	r2 = 0xFFFFFCFFu; UPD(0x0C002638u, 1);  /* 0C002636 mov.w @(disp,pc),Rn */
	r4 = 0xC002694u; UPD(0x0C00263Au, 1);  /* 0C002638 mov.l @(disp,pc),Rn */
	r5 = 0xC002690u; UPD(0x0C00263Cu, 1);  /* 0C00263A mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s16)R16(r1); UPD(0x0C00263Eu, 1);  /* 0C00263C mov.w @Rm,Rn */
	r3 = R32(r4); UPD(0x0C002640u, 1);  /* 0C00263E mov.l @Rm,Rn */
	r0 &= r2;  /* 0C002640 and Rm,Rn */
	r3 += 0x1u;  /* 0C002642 add #imm,Rn */
	W16(r1, r0); UPD(0x0C002646u, 3);  /* 0C002644 mov.w Rm,@Rn */
	r5 = R32(r5); UPD(0x0C002648u, 1);  /* 0C002646 mov.l @Rm,Rn */
	T = (r5 & r5) == 0;  /* 0C002648 tst Rm,Rn */
	{ u32 c_ = T; W32(r4, r3); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C00267Eu, 4); goto L_0C00267E; } UPD(0x0C00264Eu, 1); goto L_0C00264E; }  /* 0C00264A bt/s */
L_0C00264E: BLKS(0x0C00264Eu);
	IF(0x0C00264Eu); r15 -= 4; W32(r15, PR); UPD(0x0C002650u, 1);  /* 0C00264E sts.l pr,@-Rn */
	IF(0x0C002650u); r15 -= 4; W32(r15, MACH); UPD(0x0C002652u, 1);  /* 0C002650 sts.l mach,@-Rn */
	IF(0x0C002652u); r15 -= 4; W32(r15, MACL); UPD(0x0C002654u, 1);  /* 0C002652 sts.l macl,@-Rn */
	IF(0x0C002654u); r15 -= 4; W32(r15, c->gbr); UPD(0x0C002656u, 1);  /* 0C002654 stc.l gbr,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C002658u, 1);  /* 0C002656 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C00265Au, 1);  /* 0C002658 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C00265Cu, 1);  /* 0C00265A mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C00265Eu, 1);  /* 0C00265C mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C002660u, 1);  /* 0C00265E mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C002662u, 1);  /* 0C002660 mov.l Rm,@-Rn */
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C002664u, 1);  /* 0C002662 mov.l Rm,@-Rn */
	IF(0x0C002664u); { u32 t_ = r5; PR = 0x0C002668u; IF(0x0C002666u); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C002668u); }  /* 0C002664 jsr @Rn */
L_0C002668: BLKS(0x0C002668u);
	{ u32 v_ = R32(r15); r15 += 4; r8 = v_; } UPD(0x0C00266Au, 1);  /* 0C002668 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C00266Cu, 1);  /* 0C00266A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C00266Eu, 1);  /* 0C00266C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C002670u, 1);  /* 0C00266E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C002672u, 1);  /* 0C002670 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C002674u, 1);  /* 0C002672 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C002676u, 1);  /* 0C002674 mov.l @Rm+,Rn */
	IF(0x0C002676u); c->gbr = R32(r15); r15 += 4; UPD(0x0C002678u, 1);  /* 0C002676 ldc.l @Rn+,gbr */
	IF(0x0C002678u); MACL = R32(r15); r15 += 4; UPD(0x0C00267Au, 1);  /* 0C002678 lds.l @Rn+,macl */
	IF(0x0C00267Au); MACH = R32(r15); r15 += 4; UPD(0x0C00267Cu, 1);  /* 0C00267A lds.l @Rn+,mach */
	IF(0x0C00267Cu); PR = R32(r15); r15 += 4; UPD(0x0C00267Eu, 1);  /* 0C00267C lds.l @Rn+,pr */
L_0C00267E: BLKS(0x0C00267Eu);
	IF(0x0C00267Eu); { u32 t_ = c->spc; SET_SR(c->ssr); IF(0x0C002680u); ; /* slot nop */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C00267E rte */
}

void blk_f_0C002698(sh3_t *c)
{
	LOCALS;
L_0C002698: BLKS(0x0C002698u);
	r0 = 0xFFFFFFD0u;  /* 0C002698 mov #imm,Rn */
	r1 = 0xC0026E0u; UPD(0x0C00269Cu, 2);  /* 0C00269A mov.l @(disp,pc),Rn */
	r0 = R32(r0); UPD(0x0C00269Eu, 1);  /* 0C00269C mov.l @Rm,Rn */
	IF(0x0C00269Eu); T = r0 >> 31; r0 <<= 1;  /* 0C00269E shll Rn */
	IF(0x0C0026A0u); r2 = R32(r0 + r1); UPD(0x0C0026A2u, 2);  /* 0C0026A0 mov.l @(r0,Rm),Rn */
	T = (r2 & r2) == 0;  /* 0C0026A2 tst Rm,Rn */
	{ u32 c_ = T; r0 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0026D8u, 4); goto L_0C0026D8; } goto L_0C0026A8; }  /* 0C0026A4 bt/s */
L_0C0026A8: BLKS(0x0C0026A8u);
	IF(0x0C0026A8u); r15 -= 4; W32(r15, PR); UPD(0x0C0026AAu, 2);  /* 0C0026A8 sts.l pr,@-Rn */
	IF(0x0C0026AAu); r15 -= 4; W32(r15, MACH); UPD(0x0C0026ACu, 1);  /* 0C0026AA sts.l mach,@-Rn */
	IF(0x0C0026ACu); r15 -= 4; W32(r15, MACL); UPD(0x0C0026AEu, 1);  /* 0C0026AC sts.l macl,@-Rn */
	IF(0x0C0026AEu); r15 -= 4; W32(r15, c->gbr); UPD(0x0C0026B0u, 1);  /* 0C0026AE stc.l gbr,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0026B2u, 1);  /* 0C0026B0 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0026B4u, 1);  /* 0C0026B2 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0026B6u, 1);  /* 0C0026B4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0026B8u, 1);  /* 0C0026B6 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0026BAu, 1);  /* 0C0026B8 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0026BCu, 1);  /* 0C0026BA mov.l Rm,@-Rn */
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0026BEu, 1);  /* 0C0026BC mov.l Rm,@-Rn */
	IF(0x0C0026BEu); { u32 t_ = r2; PR = 0x0C0026C2u; IF(0x0C0026C0u); r4 = R32(r0 + r1); /* slot mov.l @(r0,Rm),Rn */ UPD(t_, 2); CALLD(t_, 0x0C0026C2u); }  /* 0C0026BE jsr @Rn */
L_0C0026C2: BLKS(0x0C0026C2u);
	{ u32 v_ = R32(r15); r15 += 4; r8 = v_; } UPD(0x0C0026C4u, 1);  /* 0C0026C2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0026C6u, 1);  /* 0C0026C4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0026C8u, 1);  /* 0C0026C6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0026CAu, 1);  /* 0C0026C8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0026CCu, 1);  /* 0C0026CA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0026CEu, 1);  /* 0C0026CC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0026D0u, 1);  /* 0C0026CE mov.l @Rm+,Rn */
	IF(0x0C0026D0u); c->gbr = R32(r15); r15 += 4; UPD(0x0C0026D2u, 1);  /* 0C0026D0 ldc.l @Rn+,gbr */
	IF(0x0C0026D2u); MACL = R32(r15); r15 += 4; UPD(0x0C0026D4u, 1);  /* 0C0026D2 lds.l @Rn+,macl */
	IF(0x0C0026D4u); MACH = R32(r15); r15 += 4; UPD(0x0C0026D6u, 1);  /* 0C0026D4 lds.l @Rn+,mach */
	IF(0x0C0026D6u); PR = R32(r15); r15 += 4; UPD(0x0C0026D8u, 1);  /* 0C0026D6 lds.l @Rn+,pr */
L_0C0026D8: BLKS(0x0C0026D8u);
	IF(0x0C0026D8u); { u32 t_ = c->spc; SET_SR(c->ssr); IF(0x0C0026DAu); ; /* slot nop */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C0026D8 rte */
}

void blk_f_0C002760(sh3_t *c)
{
	LOCALS;
L_0C002760: BLKS(0x0C002760u);
	IF(0x0C002760u); ARG0(0x0082u); r0 = c->rbank[0];  /* 0C002760 stc Rb_bank,Rn */
	r1 = 0xC002780u; UPD(0x0C002764u, 2);  /* 0C002762 mov.l @(disp,pc),Rn */
	IF(0x0C002764u); r0 = R32(r0 + r1); UPD(0x0C002766u, 1);  /* 0C002764 mov.l @(r0,Rm),Rn */
	IF(0x0C002766u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); IF(0x0C002768u); ; /* slot nop */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C002766 jmp @Rn */
}

void blk_f_0C0029D4(sh3_t *c)
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

void blk_f_0C002A0C(sh3_t *c)
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
void blk_f_0C002A30(sh3_t *c)
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

void blk_f_0C002A44(sh3_t *c)
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

void blk_f_0C002A56(sh3_t *c)
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

void blk_f_0C002A88(sh3_t *c)
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

/* boot_unpack */
void blk_f_0C002AC4(sh3_t *c)
{
	LOCALS;
L_0C002AC4: BLKS(0x0C002AC4u);
	r0 = R32(r5 + 0x0u); UPD(0x0C002AC6u, 1);  /* 0C002AC4 mov.l @(disp,Rm),Rn */
	r1 = R32(r5 + 0x4u); UPD(0x0C002AC8u, 1);  /* 0C002AC6 mov.l @(disp,Rm),Rn */
	r13 = r5;  /* 0C002AC8 mov Rm,Rn */
	r2 = 0xCu; UPD(0x0C002ACCu, 2);  /* 0C002ACA mov.l @(disp,pc),Rn */
	r13 += r2;  /* 0C002ACC add Rm,Rn */
	r6 = R32(r5 + 0x8u); UPD(0x0C002AD0u, 2);  /* 0C002ACE mov.l @(disp,Rm),Rn */
	r12 = r5;  /* 0C002AD0 mov Rm,Rn */
	r12 += r6;  /* 0C002AD2 add Rm,Rn */
	r3 = 0x0u; UPD(0x0C002AD6u, 3);  /* 0C002AD4 mov.l @(disp,pc),Rn */
	r6 = 0x0u; UPD(0x0C002AD8u, 1);  /* 0C002AD6 mov.l @(disp,pc),Rn */
L_0C002AD8: BLKS(0x0C002AD8u);
	T = (r3 & r3) == 0;  /* 0C002AD8 tst Rm,Rn */
	{ u32 c_ = !T; IF(0x0C002ADCu); ; /* slot nop */ if (c_) { UPD(0x0C002AE4u, 4); goto L_0C002AE4; } goto L_0C002ADE; }  /* 0C002ADA bf/s */
L_0C002ADE: BLKS(0x0C002ADEu);
	r6 = (u32)(s32)(s8)R8(r13); UPD(0x0C002AE0u, 2);  /* 0C002ADE mov.b @Rm,Rn */
	r3 = 0x8u; UPD(0x0C002AE2u, 1);  /* 0C002AE0 mov.l @(disp,pc),Rn */
	r13 += 0x1u;  /* 0C002AE2 add #imm,Rn */
	UPD(0x0C002AE4u, 1);
L_0C002AE4: BLKS(0x0C002AE4u);
	r11 = r6;  /* 0C002AE4 mov Rm,Rn */
	r10 = 0x80u; UPD(0x0C002AE8u, 2);  /* 0C002AE6 mov.l @(disp,pc),Rn */
	r11 &= r10;  /* 0C002AE8 and Rm,Rn */
	T = (r11 & r11) == 0;  /* 0C002AEA tst Rm,Rn */
	{ u32 c_ = T; IF(0x0C002AEEu); ; /* slot nop */ if (c_) { UPD(0x0C002B44u, 5); goto L_0C002B44; } goto L_0C002AF0; }  /* 0C002AEC bt/s */
L_0C002AF0: BLKS(0x0C002AF0u);
	r7 = (u32)(s32)(s8)R8(r12); UPD(0x0C002AF2u, 2);  /* 0C002AF0 mov.b @Rm,Rn */
	IF(0x0C002AF2u); r7 <<= 8;  /* 0C002AF2 shll8 Rn */
	r8 = 0xFF00u; UPD(0x0C002AF6u, 2);  /* 0C002AF4 mov.l @(disp,pc),Rn */
	r7 &= r8;  /* 0C002AF6 and Rm,Rn */
	r12 += 0x1u;  /* 0C002AF8 add #imm,Rn */
	r8 = (u32)(s32)(s8)R8(r12); UPD(0x0C002AFCu, 3);  /* 0C002AFA mov.b @Rm,Rn */
	r9 = 0xFFu; UPD(0x0C002AFEu, 1);  /* 0C002AFC mov.l @(disp,pc),Rn */
	r8 &= r9;  /* 0C002AFE and Rm,Rn */
	r7 |= r8;  /* 0C002B00 or Rm,Rn */
	IF(0x0C002B02u); r12 -= 1; T = r12 == 0;  /* 0C002B02 dt Rn */
	r8 = r7;  /* 0C002B04 mov Rm,Rn */
	r10 = 0x1Fu; UPD(0x0C002B08u, 5);  /* 0C002B06 mov.l @(disp,pc),Rn */
	r8 &= r10;  /* 0C002B08 and Rm,Rn */
	r8 += 0x3u;  /* 0C002B0A add #imm,Rn */
	IF(0x0C002B0Cu); r7 >>= 2;  /* 0C002B0C shlr2 Rn */
	IF(0x0C002B0Eu); r7 >>= 2;  /* 0C002B0E shlr2 Rn */
	IF(0x0C002B10u); T = r7 & 1; r7 >>= 1;  /* 0C002B10 shlr Rn */
	r9 = r4;  /* 0C002B12 mov Rm,Rn */
	r9 -= r7;  /* 0C002B14 sub Rm,Rn */
	UPD(0x0C002B16u, 7);
L_0C002B16: BLKS(0x0C002B16u);
	{ u32 v_ = (u32)(s32)(s8)R8(r9); r9 += 1; r7 = v_; } UPD(0x0C002B18u, 1);  /* 0C002B16 mov.b @Rm+,Rn */
	W8(r4, r7); UPD(0x0C002B1Au, 1);  /* 0C002B18 mov.b Rm,@Rn */
	r4 += 0x1u;  /* 0C002B1A add #imm,Rn */
	IF(0x0C002B1Cu); r8 -= 1; T = r8 == 0;  /* 0C002B1C dt Rn */
	{ u32 c_ = !T; IF(0x0C002B20u); ; /* slot nop */ if (c_) { UPD(0x0C002B16u, 5); goto L_0C002B16; } goto L_0C002B22; }  /* 0C002B1E bf/s */
L_0C002B22: BLKS(0x0C002B22u);
	r12 += 0x2u;  /* 0C002B22 add #imm,Rn */
	{ IF(0x0C002B26u); ; /* slot nop */ UPD(0x0C002B4Au, 5); goto L_0C002B4A; }  /* 0C002B24 bra */
L_0C002B44: BLKS(0x0C002B44u);
	{ u32 v_ = (u32)(s32)(s8)R8(r12); r12 += 1; r7 = v_; } UPD(0x0C002B46u, 1);  /* 0C002B44 mov.b @Rm+,Rn */
	W8(r4, r7); UPD(0x0C002B48u, 1);  /* 0C002B46 mov.b Rm,@Rn */
	r4 += 0x1u;  /* 0C002B48 add #imm,Rn */
	UPD(0x0C002B4Au, 1);
L_0C002B4A: BLKS(0x0C002B4Au);
	IF(0x0C002B4Au); r3 -= 1; T = r3 == 0;  /* 0C002B4A dt Rn */
	IF(0x0C002B4Cu); r1 -= 1; T = r1 == 0;  /* 0C002B4C dt Rn */
	{ u32 c_ = !T; IF(0x0C002B50u); T = r6 >> 31; r6 <<= 1; /* slot shll Rn */ if (c_) { UPD(0x0C002AD8u, 5); goto L_0C002AD8; } goto L_0C002B52; }  /* 0C002B4E bf/s */
L_0C002B52: BLKS(0x0C002B52u);
	IF(0x0C002B52u); { u32 t_ = PR; IF(0x0C002B54u); ; /* slot nop */ UPD(t_, 4); RET(t_); }  /* 0C002B52 rts */
}

void blk_f_0C002B7C(sh3_t *c)
{
	LOCALS;
L_0C002B7C: BLKS(0x0C002B7Cu);
	{ u32 v_ = r1; r15 -= 4; W32(r15, v_); } UPD(0x0C002B7Eu, 1);  /* 0C002B7C mov.l Rm,@-Rn */
	{ u32 v_ = r0; r15 -= 4; W32(r15, v_); } UPD(0x0C002B80u, 1);  /* 0C002B7E mov.l Rm,@-Rn */
	r0 = 0xC002C0Cu; UPD(0x0C002B82u, 1);  /* 0C002B80 mov.l @(disp,pc),Rn */
	r1 = 0x1u; UPD(0x0C002B84u, 1);  /* 0C002B82 mov.l @(disp,pc),Rn */
	W32(r0, r1); UPD(0x0C002B86u, 1);  /* 0C002B84 mov.l Rm,@Rn */
	r0 += 0x4u;  /* 0C002B86 add #imm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r1 = v_; } UPD(0x0C002B8Au, 2);  /* 0C002B88 mov.l @Rm+,Rn */
	W32(r0, r1); UPD(0x0C002B8Cu, 1);  /* 0C002B8A mov.l Rm,@Rn */
	r0 += 0x4u;  /* 0C002B8C add #imm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r1 = v_; } UPD(0x0C002B90u, 2);  /* 0C002B8E mov.l @Rm+,Rn */
	W32(r0, r1); UPD(0x0C002B92u, 1);  /* 0C002B90 mov.l Rm,@Rn */
	r0 += 0x4u;  /* 0C002B92 add #imm,Rn */
	W32(r0, r2); UPD(0x0C002B96u, 2);  /* 0C002B94 mov.l Rm,@Rn */
	r0 += 0x4u;  /* 0C002B96 add #imm,Rn */
	W32(r0, r3); UPD(0x0C002B9Au, 2);  /* 0C002B98 mov.l Rm,@Rn */
	r0 += 0x4u;  /* 0C002B9A add #imm,Rn */
	W32(r0, r4); UPD(0x0C002B9Eu, 2);  /* 0C002B9C mov.l Rm,@Rn */
	r0 += 0x4u;  /* 0C002B9E add #imm,Rn */
	W32(r0, r5); UPD(0x0C002BA2u, 2);  /* 0C002BA0 mov.l Rm,@Rn */
	r0 += 0x4u;  /* 0C002BA2 add #imm,Rn */
	W32(r0, r6); UPD(0x0C002BA6u, 2);  /* 0C002BA4 mov.l Rm,@Rn */
	r0 += 0x4u;  /* 0C002BA6 add #imm,Rn */
	W32(r0, r7); UPD(0x0C002BAAu, 2);  /* 0C002BA8 mov.l Rm,@Rn */
	r0 += 0x4u;  /* 0C002BAA add #imm,Rn */
	W32(r0, r8); UPD(0x0C002BAEu, 2);  /* 0C002BAC mov.l Rm,@Rn */
	r0 += 0x4u;  /* 0C002BAE add #imm,Rn */
	W32(r0, r9); UPD(0x0C002BB2u, 2);  /* 0C002BB0 mov.l Rm,@Rn */
	r0 += 0x4u;  /* 0C002BB2 add #imm,Rn */
	W32(r0, r10); UPD(0x0C002BB6u, 2);  /* 0C002BB4 mov.l Rm,@Rn */
	r0 += 0x4u;  /* 0C002BB6 add #imm,Rn */
	W32(r0, r11); UPD(0x0C002BBAu, 2);  /* 0C002BB8 mov.l Rm,@Rn */
	r0 += 0x4u;  /* 0C002BBA add #imm,Rn */
	W32(r0, r12); UPD(0x0C002BBEu, 2);  /* 0C002BBC mov.l Rm,@Rn */
	r0 += 0x4u;  /* 0C002BBE add #imm,Rn */
	W32(r0, r13); UPD(0x0C002BC2u, 2);  /* 0C002BC0 mov.l Rm,@Rn */
	r0 += 0x4u;  /* 0C002BC2 add #imm,Rn */
	W32(r0, r14); UPD(0x0C002BC6u, 2);  /* 0C002BC4 mov.l Rm,@Rn */
	r0 += 0x4u;  /* 0C002BC6 add #imm,Rn */
	W32(r0, r15); UPD(0x0C002BCAu, 2);  /* 0C002BC8 mov.l Rm,@Rn */
	r0 += 0x4u;  /* 0C002BCA add #imm,Rn */
	IF(0x0C002BCCu); r1 = c->spc;  /* 0C002BCC stc spc,Rn */
	W32(r0, r1); UPD(0x0C002BD0u, 3);  /* 0C002BCE mov.l Rm,@Rn */
	r0 += 0x4u;  /* 0C002BD0 add #imm,Rn */
	IF(0x0C002BD2u); r1 = PR;  /* 0C002BD2 sts pr,Rn */
	W32(r0, r1); UPD(0x0C002BD6u, 3);  /* 0C002BD4 mov.l Rm,@Rn */
	r0 += 0x4u;  /* 0C002BD6 add #imm,Rn */
	IF(0x0C002BD8u); r1 = c->ssr;  /* 0C002BD8 stc ssr,Rn */
	W32(r0, r1); UPD(0x0C002BDCu, 3);  /* 0C002BDA mov.l Rm,@Rn */
	r0 += 0x4u;  /* 0C002BDC add #imm,Rn */
	r13 = 0xC002C04u; UPD(0x0C002BE0u, 2);  /* 0C002BDE mov.l @(disp,pc),Rn */
	{ u32 v_ = R32(r13); r13 += 4; r0 = v_; } UPD(0x0C002BE2u, 1);  /* 0C002BE0 mov.l @Rm+,Rn */
	T = (r0 & r0) == 0;  /* 0C002BE2 tst Rm,Rn */
	{ u32 c_ = T; { u32 v_ = R32(r13); r13 += 4; r5 = v_; } /* slot mov.l @Rm+,Rn */ if (c_) { UPD(0x0C002BEEu, 4); goto L_0C002BEE; } UPD(0x0C002BE8u, 1); goto L_0C002BE8; }  /* 0C002BE4 bt/s */
L_0C002BE8: BLKS(0x0C002BE8u);
	r4 = 0xC002C0Cu; UPD(0x0C002BEAu, 1);  /* 0C002BE8 mov.l @(disp,pc),Rn */
	IF(0x0C002BEAu); { u32 t_ = r0; PR = 0x0C002BEEu; IF(0x0C002BECu); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C002BEEu); }  /* 0C002BEA jsr @Rn */
L_0C002BEE: BLKS(0x0C002BEEu);
	r13 = 0x0u; UPD(0x0C002BF0u, 1);  /* 0C002BEE mov.l @(disp,pc),Rn */
	IF(0x0C002BF0u); { u32 tv_ = r13; u32 t_ = PHYS(tv_); IF(0x0C002BF2u); ; /* slot nop */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C002BF0 jmp @Rn */
}

/* FUN_0c051050 */
void blk_f_0C051050(sh3_t *c)
{
	LOCALS;
L_0C051050: BLKS(0x0C051050u);
	r1 = 0x14u; UPD(0x0C051052u, 1);  /* 0C051050 mov.l @(disp,pc),Rn */
	r0 = 0x0u; UPD(0x0C051054u, 1);  /* 0C051052 mov.l @(disp,pc),Rn */
	r2 = 0xC051000u; UPD(0x0C051056u, 1);  /* 0C051054 mov.l @(disp,pc),Rn */
L_0C051056: BLKS(0x0C051056u);
	W32(r2, r0); UPD(0x0C051058u, 1);  /* 0C051056 mov.l Rm,@Rn */
	IF(0x0C051058u); r1 -= 1; T = r1 == 0;  /* 0C051058 dt Rn */
	{ u32 c_ = !T; r2 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C051056u, 4); goto L_0C051056; } goto L_0C05105E; }  /* 0C05105A bf/s */
L_0C05105E: BLKS(0x0C05105Eu);
	r0 = 0xC051048u; UPD(0x0C051060u, 2);  /* 0C05105E mov.l @(disp,pc),Rn */
	r1 = 0x1u; UPD(0x0C051062u, 1);  /* 0C051060 mov.l @(disp,pc),Rn */
	W32(r0, r1); UPD(0x0C051064u, 1);  /* 0C051062 mov.l Rm,@Rn */
	r0 = 0xC05104Cu; UPD(0x0C051066u, 1);  /* 0C051064 mov.l @(disp,pc),Rn */
	r1 = 0xFFFFu; UPD(0x0C051068u, 1);  /* 0C051066 mov.l @(disp,pc),Rn */
	W32(r0, r1); UPD(0x0C05106Au, 1);  /* 0C051068 mov.l Rm,@Rn */
	IF(0x0C05106Au); { u32 t_ = PR; IF(0x0C05106Cu); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C05106A rts */
}

/* FUN_0c0515f8 */
void blk_f_0C0515F8(sh3_t *c)
{
	LOCALS;
L_0C0515F8: BLKS(0x0C0515F8u);
	r0 = 0xC051020u; UPD(0x0C0515FAu, 1);  /* 0C0515F8 mov.l @(disp,pc),Rn */
	T = (r4 & r4) == 0;  /* 0C0515FA tst Rm,Rn */
	{ u32 c_ = T; IF(0x0C0515FEu); ; /* slot nop */ if (c_) { UPD(0x0C051602u, 4); goto L_0C051602; } goto L_0C051600; }  /* 0C0515FC bt/s */
L_0C051600: BLKS(0x0C051600u);
	r0 = 0xC05102Cu; UPD(0x0C051602u, 2);  /* 0C051600 mov.l @(disp,pc),Rn */
L_0C051602: BLKS(0x0C051602u);
	IF(0x0C051602u); { u32 t_ = PR; r0 = R32(r0); /* slot mov.l @Rm,Rn */ UPD(t_, 3); RET(t_); }  /* 0C051602 rts */
}

/* blitter_init */
void blk_f_0C051614(sh3_t *c)
{
	LOCALS;
	SPIN_VARS(0C051630);
	SPIN_VARS(0C051646);
L_0C051614: BLKS(0x0C051614u);
	IF(0x0C051614u); r15 -= 4; W32(r15, PR); UPD(0x0C051616u, 1);  /* 0C051614 sts.l pr,@-Rn */
	r0 = 0xC051050u; UPD(0x0C051618u, 1);  /* 0C051616 mov.l @(disp,pc),Rn */
	IF(0x0C051618u); { u32 t_ = r0; PR = 0x0C05161Cu; IF(0x0C05161Au); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C051050, 0x0C051050u, 0x0C05161Cu); }  /* 0C051618 jsr @Rn */
L_0C05161C: BLKS(0x0C05161Cu);
	r0 = 0xB0C00002u; UPD(0x0C05161Eu, 1);  /* 0C05161C mov.l @(disp,pc),Rn */
	r2 = 0x1u; UPD(0x0C051620u, 1);  /* 0C05161E mov.l @(disp,pc),Rn */
	W8(r0, r2); UPD(0x0C051622u, 1);  /* 0C051620 mov.b Rm,@Rn */
	r0 = 0xC056378u; UPD(0x0C051624u, 1);  /* 0C051622 mov.l @(disp,pc),Rn */
	IF(0x0C051624u); { u32 t_ = r0; PR = 0x0C051628u; IF(0x0C051626u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C056378, 0x0C056378u, 0x0C051628u); }  /* 0C051624 jsr @Rn */
L_0C051628: BLKS(0x0C051628u);
	r0 = 0xB0C00002u; UPD(0x0C05162Au, 1);  /* 0C051628 mov.l @(disp,pc),Rn */
	r2 = 0xFFFFFFFEu; UPD(0x0C05162Cu, 1);  /* 0C05162A mov.l @(disp,pc),Rn */
	W8(r0, r2); UPD(0x0C05162Eu, 1);  /* 0C05162C mov.b Rm,@Rn */
	r0 = 0x40000u; UPD(0x0C051630u, 1);  /* 0C05162E mov.l @(disp,pc),Rn */
L_0C051630: BLKS(0x0C051630u);
	SPIN_SAVE(0C051630);
	IF(0x0C051630u); ;  /* 0C051630 nop */
	IF(0x0C051632u); r0 -= 1; T = r0 == 0;  /* 0C051632 dt Rn */
	{ u32 c_ = !T; IF(0x0C051636u); ; /* slot nop */ if (c_) { SPIN_FFD(0C051630, 5); UPD(0x0C051630u, 5); goto L_0C051630; } goto L_0C051638; }  /* 0C051634 bf/s */
L_0C051638: BLKS(0x0C051638u);
	r1 = 0x0u; UPD(0x0C05163Au, 2);  /* 0C051638 mov.l @(disp,pc),Rn */
	r0 = 0xB8000010u; UPD(0x0C05163Cu, 1);  /* 0C05163A mov.l @(disp,pc),Rn */
	W32(r0, r1); UPD(0x0C05163Eu, 1);  /* 0C05163C mov.l Rm,@Rn */
	r0 = 0xB800001Cu; UPD(0x0C051640u, 1);  /* 0C05163E mov.l @(disp,pc),Rn */
	r1 = 0x1u; UPD(0x0C051642u, 1);  /* 0C051640 mov.l @(disp,pc),Rn */
	W32(r0, r1); UPD(0x0C051644u, 1);  /* 0C051642 mov.l Rm,@Rn */
	r1 = 0xB8000010u; UPD(0x0C051646u, 1);  /* 0C051644 mov.l @(disp,pc),Rn */
L_0C051646: BLKS(0x0C051646u);
	SPIN_SAVE(0C051646);
	r0 = RS32(0C051646, r1); UPD(0x0C051648u, 1);  /* 0C051646 mov.l @Rm,Rn */
	T = (r0 & 0x2u) == 0;  /* 0C051648 tst #imm,r0 */
	{ u32 c_ = !T; IF(0x0C05164Cu); ; /* slot nop */ if (c_) { SPIN_FFD(0C051646, 5); UPD(0x0C051646u, 4); goto L_0C051646; } goto L_0C05164E; }  /* 0C05164A bf/s */
L_0C05164E: BLKS(0x0C05164Eu);
	r1 = 0x1u; UPD(0x0C051650u, 2);  /* 0C05164E mov.l @(disp,pc),Rn */
	r0 = 0xB8000010u; UPD(0x0C051652u, 1);  /* 0C051650 mov.l @(disp,pc),Rn */
	W32(r0, r1); UPD(0x0C051654u, 1);  /* 0C051652 mov.l Rm,@Rn */
	r0 = 0xC051024u; UPD(0x0C051656u, 1);  /* 0C051654 mov.l @(disp,pc),Rn */
	r1 = 0x200000u; UPD(0x0C051658u, 1);  /* 0C051656 mov.l @(disp,pc),Rn */
	W32(r0 + 0x0u, r1); UPD(0x0C05165Au, 1);  /* 0C051658 mov.l Rm,@(disp,Rn) */
	r1 = 0x20u; UPD(0x0C05165Cu, 1);  /* 0C05165A mov.l @(disp,pc),Rn */
	W32(r0 + 0x4u, r1); UPD(0x0C05165Eu, 1);  /* 0C05165C mov.l Rm,@(disp,Rn) */
	r0 = 0xC051030u; UPD(0x0C051660u, 1);  /* 0C05165E mov.l @(disp,pc),Rn */
	r1 = 0x1A00000u; UPD(0x0C051662u, 1);  /* 0C051660 mov.l @(disp,pc),Rn */
	W32(r0 + 0x0u, r1); UPD(0x0C051664u, 1);  /* 0C051662 mov.l Rm,@(disp,Rn) */
	r1 = 0x20u; UPD(0x0C051666u, 1);  /* 0C051664 mov.l @(disp,pc),Rn */
	W32(r0 + 0x4u, r1); UPD(0x0C051668u, 1);  /* 0C051666 mov.l Rm,@(disp,Rn) */
	r1 = 0x0u; UPD(0x0C05166Au, 1);  /* 0C051668 mov.l @(disp,pc),Rn */
	r0 = 0xB8000014u; UPD(0x0C05166Cu, 1);  /* 0C05166A mov.l @(disp,pc),Rn */
	W32(r0, r1); UPD(0x0C05166Eu, 1);  /* 0C05166C mov.l Rm,@Rn */
	r0 = 0xB8000018u; UPD(0x0C051670u, 1);  /* 0C05166E mov.l @(disp,pc),Rn */
	W32(r0, r1); UPD(0x0C051672u, 1);  /* 0C051670 mov.l Rm,@Rn */
	r4 = 0x0u; UPD(0x0C051674u, 1);  /* 0C051672 mov.l @(disp,pc),Rn */
	r5 = 0x0u; UPD(0x0C051676u, 1);  /* 0C051674 mov.l @(disp,pc),Rn */
	r0 = 0xC056554u; UPD(0x0C051678u, 1);  /* 0C051676 mov.l @(disp,pc),Rn */
	IF(0x0C051678u); { u32 t_ = r0; PR = 0x0C05167Cu; IF(0x0C05167Au); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C056554, 0x0C056554u, 0x0C05167Cu); }  /* 0C051678 jsr @Rn */
L_0C05167C: BLKS(0x0C05167Cu);
	r4 = 0xA0000u; UPD(0x0C05167Eu, 1);  /* 0C05167C mov.l @(disp,pc),Rn */
	r5 = 0x100u; UPD(0x0C051680u, 1);  /* 0C05167E mov.l @(disp,pc),Rn */
	r0 = 0xC056746u; UPD(0x0C051682u, 1);  /* 0C051680 mov.l @(disp,pc),Rn */
	IF(0x0C051682u); { u32 t_ = r0; PR = 0x0C051686u; IF(0x0C051684u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C056746, 0x0C056746u, 0x0C051686u); }  /* 0C051682 jsr @Rn */
L_0C051686: BLKS(0x0C051686u);
	r1 = 0xA0000000u; UPD(0x0C051688u, 1);  /* 0C051686 mov.l @(disp,pc),Rn */
	r0 |= r1;  /* 0C051688 or Rm,Rn */
	r1 = 0xC051020u; UPD(0x0C05168Cu, 2);  /* 0C05168A mov.l @(disp,pc),Rn */
	W32(r1, r0); UPD(0x0C05168Eu, 1);  /* 0C05168C mov.l Rm,@Rn */
	r1 = 0xC051000u; UPD(0x0C051690u, 1);  /* 0C05168E mov.l @(disp,pc),Rn */
	W32(r1, r0); UPD(0x0C051692u, 1);  /* 0C051690 mov.l Rm,@Rn */
	r3 = 0xFFFFFFFFu; UPD(0x0C051694u, 1);  /* 0C051692 mov.l @(disp,pc),Rn */
	W32(r0, r3); UPD(0x0C051696u, 1);  /* 0C051694 mov.l Rm,@Rn */
	r1 = 0xB8000008u; UPD(0x0C051698u, 1);  /* 0C051696 mov.l @(disp,pc),Rn */
	W32(r1, r0); UPD(0x0C05169Au, 1);  /* 0C051698 mov.l Rm,@Rn */
	r4 = 0xA0000u; UPD(0x0C05169Cu, 1);  /* 0C05169A mov.l @(disp,pc),Rn */
	r5 = 0x100u; UPD(0x0C05169Eu, 1);  /* 0C05169C mov.l @(disp,pc),Rn */
	r0 = 0xC056746u; UPD(0x0C0516A0u, 1);  /* 0C05169E mov.l @(disp,pc),Rn */
	IF(0x0C0516A0u); { u32 t_ = r0; PR = 0x0C0516A4u; IF(0x0C0516A2u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C056746, 0x0C056746u, 0x0C0516A4u); }  /* 0C0516A0 jsr @Rn */
L_0C0516A4: BLKS(0x0C0516A4u);
	r1 = 0xA0000000u; UPD(0x0C0516A6u, 1);  /* 0C0516A4 mov.l @(disp,pc),Rn */
	r0 |= r1;  /* 0C0516A6 or Rm,Rn */
	r1 = 0xC05102Cu; UPD(0x0C0516AAu, 2);  /* 0C0516A8 mov.l @(disp,pc),Rn */
	W32(r1, r0); UPD(0x0C0516ACu, 1);  /* 0C0516AA mov.l Rm,@Rn */
	r3 = 0xFFFFFFFFu; UPD(0x0C0516AEu, 1);  /* 0C0516AC mov.l @(disp,pc),Rn */
	W32(r0, r3); UPD(0x0C0516B0u, 1);  /* 0C0516AE mov.l Rm,@Rn */
	r1 = 0xB8000034u; UPD(0x0C0516B2u, 1);  /* 0C0516B0 mov.l @(disp,pc),Rn */
	r0 = 0x0u; UPD(0x0C0516B4u, 1);  /* 0C0516B2 mov.l @(disp,pc),Rn */
	W32(r1, r0); UPD(0x0C0516B6u, 1);  /* 0C0516B4 mov.l Rm,@Rn */
	r1 = 0xB8000030u; UPD(0x0C0516B8u, 1);  /* 0C0516B6 mov.l @(disp,pc),Rn */
	r0 = 0x1Fu; UPD(0x0C0516BAu, 1);  /* 0C0516B8 mov.l @(disp,pc),Rn */
	W32(r1, r0); UPD(0x0C0516BCu, 1);  /* 0C0516BA mov.l Rm,@Rn */
	r1 = 0xB8000048u; UPD(0x0C0516BEu, 1);  /* 0C0516BC mov.l @(disp,pc),Rn */
	r0 = 0x1u; UPD(0x0C0516C0u, 1);  /* 0C0516BE mov.l @(disp,pc),Rn */
	W32(r1, r0); UPD(0x0C0516C2u, 1);  /* 0C0516C0 mov.l Rm,@Rn */
	r1 = 0xC05629Cu; UPD(0x0C0516C4u, 1);  /* 0C0516C2 mov.l @(disp,pc),Rn */
	IF(0x0C0516C4u); { u32 t_ = r1; PR = 0x0C0516C8u; IF(0x0C0516C6u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C05629C, 0x0C05629Cu, 0x0C0516C8u); }  /* 0C0516C4 jsr @Rn */
L_0C0516C8: BLKS(0x0C0516C8u);
	IF(0x0C0516C8u); PR = R32(r15); r15 += 4; UPD(0x0C0516CAu, 1);  /* 0C0516C8 lds.l @Rn+,pr */
	IF(0x0C0516CAu); { u32 t_ = PR; IF(0x0C0516CCu); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C0516CA rts */
}

/* FUN_0c05174c */
void blk_f_0C05174C(sh3_t *c)
{
	LOCALS;
L_0C05174C: BLKS(0x0C05174Cu);
	r0 = 0xC002300u; UPD(0x0C05174Eu, 1);  /* 0C05174C mov.l @(disp,pc),Rn */
	W32(r0 + 0x4u, r5); UPD(0x0C051750u, 1);  /* 0C05174E mov.l Rm,@(disp,Rn) */
	IF(0x0C051750u); { u32 t_ = PR; W32(r0, r4); /* slot mov.l Rm,@Rn */ UPD(t_, 3); RET(t_); }  /* 0C051750 rts */
}

/* FUN_0c051758 */
void blk_f_0C051758(sh3_t *c)
{
	LOCALS;
L_0C051758: BLKS(0x0C051758u);
	r0 = 0xC002244u; UPD(0x0C05175Au, 1);  /* 0C051758 mov.l @(disp,pc),Rn */
	W32(r0 + 0x4u, r5); UPD(0x0C05175Cu, 1);  /* 0C05175A mov.l Rm,@(disp,Rn) */
	IF(0x0C05175Cu); { u32 t_ = PR; W32(r0, r4); /* slot mov.l Rm,@Rn */ UPD(t_, 3); RET(t_); }  /* 0C05175C rts */
}

/* wait_vblanks */
void blk_f_0C051764(sh3_t *c)
{
	LOCALS;
	SPIN_VARS(0C05176A);
L_0C051764: BLKS(0x0C051764u);
	r2 = 0xC002310u; UPD(0x0C051766u, 1);  /* 0C051764 mov.l @(disp,pc),Rn */
	r1 = R32(r2); UPD(0x0C051768u, 1);  /* 0C051766 mov.l @Rm,Rn */
	r0 = R32(r2); UPD(0x0C05176Au, 1);  /* 0C051768 mov.l @Rm,Rn */
L_0C05176A: BLKS(0x0C05176Au);
	SPIN_SAVE(0C05176A);
	r0 -= r1;  /* 0C05176A sub Rm,Rn */
	PCB_PC(0x0C05176Cu); T = r4 > r0;  /* 0C05176C cmp/hi Rm,Rn */
	{ u32 c_ = T; r0 = R32(r2); PCB_IDLE; /* slot mov.l @Rm,Rn */ if (c_) { SPIN_FFD(0C05176A, 5); UPD(0x0C05176Au, 5); goto L_0C05176A; } UPD(0x0C051772u, 1); goto L_0C051772; }  /* 0C05176E bt/s */
L_0C051772: BLKS(0x0C051772u);
	IF(0x0C051772u); { u32 t_ = PR; IF(0x0C051774u); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C051772 rts */
}

/* set_interrupts */
void blk_f_0C05177C(sh3_t *c)
{
	LOCALS;
L_0C05177C: BLKS(0x0C05177Cu);
	T = (r4 & r4) == 0;  /* 0C05177C tst Rm,Rn */
	{ u32 c_ = T; IF(0x0C051780u); ; /* slot nop */ if (c_) { UPD(0x0C05179Cu, 4); goto L_0C05179C; } goto L_0C051782; }  /* 0C05177E bt/s */
L_0C051782: BLKS(0x0C051782u);
	r0 = 0x40000000u; UPD(0x0C051784u, 2);  /* 0C051782 mov.l @(disp,pc),Rn */
	IF(0x0C051784u); ARG0(0x400Eu); SET_SR(r0); UPDI(0x0C051786u);  /* 0C051784 ldc Rn,sr */
L_0C051786: BLKS(0x0C051786u);
	r0 = 0xB8000024u; UPD(0x0C051788u, 1);  /* 0C051786 mov.l @(disp,pc),Rn */
	r1 = 0x1u;  /* 0C051788 mov #imm,Rn */
	W32(r0, r1); UPD(0x0C05178Cu, 2);  /* 0C05178A mov.l Rm,@Rn */
	r1 = 0x0u;  /* 0C05178C mov #imm,Rn */
	IF(0x0C05178Eu); { u32 t_ = PR; W32(r0, r1); /* slot mov.l Rm,@Rn */ UPD(t_, 4); RET(t_); }  /* 0C05178E rts */
L_0C05179C: BLKS(0x0C05179Cu);
	r0 = 0x500000F0u; UPD(0x0C05179Eu, 1);  /* 0C05179C mov.l @(disp,pc),Rn */
	IF(0x0C05179Eu); ARG0(0x400Eu); SET_SR(r0); UPDI(0x0C0517A0u);  /* 0C05179E ldc Rn,sr */
L_0C0517A0: BLKS(0x0C0517A0u);
	IF(0x0C0517A0u); { u32 t_ = PR; IF(0x0C0517A2u); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C0517A0 rts */
}

/* FUN_0c0517e8 */
void blk_f_0C0517E8(sh3_t *c)
{
	LOCALS;
L_0C0517E8: BLKS(0x0C0517E8u);
	IF(0x0C0517E8u); r15 -= 4; W32(r15, PR); UPD(0x0C0517EAu, 1);  /* 0C0517E8 sts.l pr,@-Rn */
	r4 = 0x1u; UPD(0x0C0517ECu, 1);  /* 0C0517EA mov.l @(disp,pc),Rn */
	r0 = 0xC002A30u; UPD(0x0C0517EEu, 1);  /* 0C0517EC mov.l @(disp,pc),Rn */
	IF(0x0C0517EEu); { u32 t_ = r0; PR = 0x0C0517F2u; IF(0x0C0517F0u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C002A30, 0x0C002A30u, 0x0C0517F2u); }  /* 0C0517EE jsr @Rn */
L_0C0517F2: BLKS(0x0C0517F2u);
	IF(0x0C0517F2u); PR = R32(r15); r15 += 4; UPD(0x0C0517F4u, 1);  /* 0C0517F2 lds.l @Rn+,pr */
	r0 = 0x700000F0u; UPD(0x0C0517F6u, 1);  /* 0C0517F4 mov.l @(disp,pc),Rn */
	IF(0x0C0517F6u); ARG0(0x400Eu); SET_SR(r0); UPDI(0x0C0517F8u);  /* 0C0517F6 ldc Rn,sr */
L_0C0517F8: BLKS(0x0C0517F8u);
	r0 = 0xFFFFFF00u; UPD(0x0C0517FAu, 1);  /* 0C0517F8 mov.l @(disp,pc),Rn */
	IF(0x0C0517FAu); c->gbr = r0;  /* 0C0517FA ldc Rn,gbr */
	r0 = 0x0u;  /* 0C0517FC mov #imm,Rn */
	W32(c->gbr + 0xECu, r0); UPD(0x0C051800u, 3);  /* 0C0517FE mov.l r0,@(disp,gbr) */
	r0 = 0x0u; UPD(0x0C051802u, 1);  /* 0C051800 mov.l @(disp,pc),Rn */
	IF(0x0C051802u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); IF(0x0C051804u); ; /* slot nop */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C051802 jmp @Rn */
}

/* FUN_0c051820 */
void blk_f_0C051820(sh3_t *c)
{
	LOCALS;
L_0C051820: BLKS(0x0C051820u);
	r0 = 0xA0000u; UPD(0x0C051822u, 1);  /* 0C051820 mov.l @(disp,pc),Rn */
	IF(0x0C051822u); { u32 t_ = PR; IF(0x0C051824u); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C051822 rts */
}

/* FUN_0c051838 */
void blk_f_0C051838(sh3_t *c)
{
	LOCALS;
L_0C051838: BLKS(0x0C051838u);
	r0 = 0xC002C04u; UPD(0x0C05183Au, 1);  /* 0C051838 mov.l @(disp,pc),Rn */
	W32(r0, r4); UPD(0x0C05183Cu, 1);  /* 0C05183A mov.l Rm,@Rn */
	r0 += 0x4u;  /* 0C05183C add #imm,Rn */
	IF(0x0C05183Eu); { u32 t_ = PR; W32(r0, r5); /* slot mov.l Rm,@Rn */ UPD(t_, 4); RET(t_); }  /* 0C05183E rts */
}

/* FUN_0c055ed8 */
void blk_f_0C055ED8(sh3_t *c)
{
	LOCALS;
L_0C055ED8: BLKS(0x0C055ED8u);
	IF(0x0C055ED8u); r15 -= 4; W32(r15, PR); UPD(0x0C055EDAu, 1);  /* 0C055ED8 sts.l pr,@-Rn */
	r1 = 0x1F4u; UPD(0x0C055EDCu, 1);  /* 0C055EDA mov.l @(disp,pc),Rn */
	r3 = 0x0u; UPD(0x0C055EDEu, 1);  /* 0C055EDC mov.l @(disp,pc),Rn */
	r2 = 0xC05202Cu; UPD(0x0C055EE0u, 1);  /* 0C055EDE mov.l @(disp,pc),Rn */
L_0C055EE0: BLKS(0x0C055EE0u);
	W32(r2, r3); UPD(0x0C055EE2u, 1);  /* 0C055EE0 mov.l Rm,@Rn */
	IF(0x0C055EE2u); r1 -= 1; T = r1 == 0;  /* 0C055EE2 dt Rn */
	{ u32 c_ = !T; r2 += 0x8u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C055EE0u, 4); goto L_0C055EE0; } goto L_0C055EE8; }  /* 0C055EE4 bf/s */
L_0C055EE8: BLKS(0x0C055EE8u);
	r0 = 0x0u; UPD(0x0C055EEAu, 2);  /* 0C055EE8 mov.l @(disp,pc),Rn */
	r7 = 0xC055EACu; UPD(0x0C055EECu, 1);  /* 0C055EEA mov.l @(disp,pc),Rn */
	W32(r7, r0); UPD(0x0C055EEEu, 1);  /* 0C055EEC mov.l Rm,@Rn */
	IF(0x0C055EEEu); PR = R32(r15); r15 += 4; UPD(0x0C055EF0u, 1);  /* 0C055EEE lds.l @Rn+,pr */
	IF(0x0C055EF0u); { u32 t_ = PR; IF(0x0C055EF2u); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C055EF0 rts */
}

/* FUN_0c05629c */
void blk_f_0C05629C(sh3_t *c)
{
	LOCALS;
L_0C05629C: BLKS(0x0C05629Cu);
	r0 = 0xC056294u; UPD(0x0C05629Eu, 1);  /* 0C05629C mov.l @(disp,pc),Rn */
	r1 = 0x0u; UPD(0x0C0562A0u, 1);  /* 0C05629E mov.l @(disp,pc),Rn */
	W32(r0, r1); UPD(0x0C0562A2u, 1);  /* 0C0562A0 mov.l Rm,@Rn */
	r2 = 0xC00262Cu; UPD(0x0C0562A4u, 1);  /* 0C0562A2 mov.l @(disp,pc),Rn */
	r3 = 0xC0562BCu; UPD(0x0C0562A6u, 1);  /* 0C0562A4 mov.l @(disp,pc),Rn */
	W32(r2, r3); UPD(0x0C0562A8u, 1);  /* 0C0562A6 mov.l Rm,@Rn */
	IF(0x0C0562A8u); { u32 t_ = PR; IF(0x0C0562AAu); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C0562A8 rts */
}

void blk_f_0C0562BC(sh3_t *c)
{
	LOCALS;
L_0C0562BC: BLKS(0x0C0562BCu);
	r0 = 0xC056294u; UPD(0x0C0562BEu, 1);  /* 0C0562BC mov.l @(disp,pc),Rn */
	r1 = R32(r0); UPD(0x0C0562C0u, 1);  /* 0C0562BE mov.l @Rm,Rn */
	r2 = 0x1u; UPD(0x0C0562C2u, 1);  /* 0C0562C0 mov.l @(disp,pc),Rn */
	r1 += r2;  /* 0C0562C2 add Rm,Rn */
	IF(0x0C0562C4u); { u32 t_ = PR; W32(r0, r1); /* slot mov.l Rm,@Rn */ UPD(t_, 4); RET(t_); }  /* 0C0562C4 rts */
}

/* tmu1_control */
void blk_f_0C0562D0(sh3_t *c)
{
	LOCALS;
L_0C0562D0: BLKS(0x0C0562D0u);
	r0 = 0xFFFFFE00u; UPD(0x0C0562D2u, 1);  /* 0C0562D0 mov.l @(disp,pc),Rn */
	IF(0x0C0562D2u); c->gbr = r0;  /* 0C0562D2 ldc Rn,gbr */
	r2 = 0x0u; UPD(0x0C0562D6u, 2);  /* 0C0562D4 mov.l @(disp,pc),Rn */
	T = r4 == r2;  /* 0C0562D6 cmp/eq Rm,Rn */
	{ u32 c_ = !T; IF(0x0C0562DAu); ; /* slot nop */ if (c_) { UPD(0x0C0562FCu, 4); goto L_0C0562FC; } goto L_0C0562DC; }  /* 0C0562D8 bf/s */
L_0C0562DC: BLKS(0x0C0562DCu);
	r1 = 0xFFFFFFFDu; UPD(0x0C0562DEu, 2);  /* 0C0562DC mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(c->gbr + 0x92u); UPD(0x0C0562E0u, 1);  /* 0C0562DE mov.b @(disp,gbr),r0 */
	r0 &= r1;  /* 0C0562E0 and Rm,Rn */
	W8(c->gbr + 0x92u, r0); UPD(0x0C0562E4u, 2);  /* 0C0562E2 mov.b r0,@(disp,gbr) */
	r0 = 0x0u; UPD(0x0C0562E6u, 1);  /* 0C0562E4 mov.w @(disp,pc),Rn */
	W16(c->gbr + 0xA8u, r0); UPD(0x0C0562E8u, 1);  /* 0C0562E6 mov.w r0,@(disp,gbr) */
	IF(0x0C0562E8u); { u32 t_ = PR; IF(0x0C0562EAu); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C0562E8 rts */
L_0C0562FC: BLKS(0x0C0562FCu);
	r2 = 0x1u; UPD(0x0C0562FEu, 1);  /* 0C0562FC mov.l @(disp,pc),Rn */
	T = r4 == r2;  /* 0C0562FE cmp/eq Rm,Rn */
	{ u32 c_ = !T; IF(0x0C056302u); ; /* slot nop */ if (c_) { UPD(0x0C056340u, 4); goto L_0C056340; } goto L_0C056304; }  /* 0C056300 bf/s */
L_0C056304: BLKS(0x0C056304u);
	r0 = 0x20u; UPD(0x0C056306u, 2);  /* 0C056304 mov.w @(disp,pc),Rn */
	W16(c->gbr + 0xA8u, r0); UPD(0x0C056308u, 1);  /* 0C056306 mov.w r0,@(disp,gbr) */
	r0 = 0x18FFu; UPD(0x0C05630Au, 1);  /* 0C056308 mov.l @(disp,pc),Rn */
	W32(c->gbr + 0xA0u, r0); UPD(0x0C05630Cu, 1);  /* 0C05630A mov.l r0,@(disp,gbr) */
	W32(c->gbr + 0xA4u, r0); UPD(0x0C05630Eu, 1);  /* 0C05630C mov.l r0,@(disp,gbr) */
	r1 = 0x2u; UPD(0x0C056310u, 1);  /* 0C05630E mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(c->gbr + 0x92u); UPD(0x0C056312u, 1);  /* 0C056310 mov.b @(disp,gbr),r0 */
	r0 |= r1;  /* 0C056312 or Rm,Rn */
	W8(c->gbr + 0x92u, r0); UPD(0x0C056316u, 2);  /* 0C056314 mov.b r0,@(disp,gbr) */
	r3 = 0xFFFFFEE2u; UPD(0x0C056318u, 1);  /* 0C056316 mov.l @(disp,pc),Rn */
	r2 = 0x100u; UPD(0x0C05631Au, 1);  /* 0C056318 mov.w @(disp,pc),Rn */
	r1 = 0xFFFFF0FFu; UPD(0x0C05631Cu, 1);  /* 0C05631A mov.w @(disp,pc),Rn */
	r0 = (u32)(s32)(s16)R16(r3); UPD(0x0C05631Eu, 1);  /* 0C05631C mov.w @Rm,Rn */
	r0 &= r1;  /* 0C05631E and Rm,Rn */
	r0 |= r2;  /* 0C056320 or Rm,Rn */
	W16(r3, r0); UPD(0x0C056324u, 3);  /* 0C056322 mov.w Rm,@Rn */
	IF(0x0C056324u); { u32 t_ = PR; IF(0x0C056326u); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C056324 rts */
L_0C056340: BLKS(0x0C056340u);
	r2 = 0x2u; UPD(0x0C056342u, 1);  /* 0C056340 mov.l @(disp,pc),Rn */
	T = r4 == r2;  /* 0C056342 cmp/eq Rm,Rn */
	{ u32 c_ = !T; IF(0x0C056346u); ; /* slot nop */ if (c_) { UPD(0x0C05635Cu, 4); goto L_0C05635C; } goto L_0C056348; }  /* 0C056344 bf/s */
L_0C056348: BLKS(0x0C056348u);
	r1 = 0xFFFFFFFDu; UPD(0x0C05634Au, 2);  /* 0C056348 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(c->gbr + 0x92u); UPD(0x0C05634Cu, 1);  /* 0C05634A mov.b @(disp,gbr),r0 */
	r0 &= r1;  /* 0C05634C and Rm,Rn */
	W8(c->gbr + 0x92u, r0); UPD(0x0C056350u, 2);  /* 0C05634E mov.b r0,@(disp,gbr) */
	IF(0x0C056350u); { u32 t_ = PR; IF(0x0C056352u); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C056350 rts */
L_0C05635C: BLKS(0x0C05635Cu);
	r2 = 0x5u; UPD(0x0C05635Eu, 1);  /* 0C05635C mov.l @(disp,pc),Rn */
	T = r4 == r2;  /* 0C05635E cmp/eq Rm,Rn */
	{ u32 c_ = !T; IF(0x0C056362u); ; /* slot nop */ if (c_) { UPD(0x0C056374u, 4); goto L_0C056374; } goto L_0C056364; }  /* 0C056360 bf/s */
L_0C056364: BLKS(0x0C056364u);
	r1 = 0xC056294u; UPD(0x0C056366u, 2);  /* 0C056364 mov.l @(disp,pc),Rn */
	IF(0x0C056366u); { u32 t_ = PR; r0 = R32(r1); /* slot mov.l @Rm,Rn */ UPD(t_, 3); RET(t_); }  /* 0C056366 rts */
L_0C056374: BLKS(0x0C056374u);
	IF(0x0C056374u); { u32 t_ = PR; IF(0x0C056376u); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C056374 rts */
}

/* fpga_load_bitstream */
void blk_f_0C056378(sh3_t *c)
{
	LOCALS;
	SPIN_VARS(0C056526);
L_0C056378: BLKS(0x0C056378u);
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C05637Au, 1);  /* 0C056378 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C05637Cu, 1);  /* 0C05637A mov.l Rm,@-Rn */
	IF(0x0C05637Cu); r15 -= 4; W32(r15, PR); UPD(0x0C05637Eu, 1);  /* 0C05637C sts.l pr,@-Rn */
	r13 = 0xC05653Cu; UPD(0x0C056380u, 1);  /* 0C05637E mov.l @(disp,pc),Rn */
	r5 = 0xB8000000u; UPD(0x0C056382u, 1);  /* 0C056380 mov.l @(disp,pc),Rn */
	r0 = 0x0u; UPD(0x0C056384u, 1);  /* 0C056382 mov.l @(disp,pc),Rn */
	W8(r5, r0); UPD(0x0C056386u, 1);  /* 0C056384 mov.b Rm,@Rn */
	r14 = 0xA4000130u; UPD(0x0C056388u, 1);  /* 0C056386 mov.l @(disp,pc),Rn */
	r0 = 0x0u; UPD(0x0C05638Au, 1);  /* 0C056388 mov.l @(disp,pc),Rn */
	W8(r14, r0); UPD(0x0C05638Cu, 1);  /* 0C05638A mov.b Rm,@Rn */
	r0 = 0xBu; UPD(0x0C05638Eu, 1);  /* 0C05638C mov.l @(disp,pc),Rn */
	IF(0x0C05638Eu); { u32 t_ = r13; PR = 0x0C056392u; IF(0x0C056390u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C05653C, 0x0C05653Cu, 0x0C056392u); }  /* 0C05638E jsr @Rn */
L_0C056392: BLKS(0x0C056392u);
	r0 = 0x8u; UPD(0x0C056394u, 1);  /* 0C056392 mov.l @(disp,pc),Rn */
	W8(r14, r0); UPD(0x0C056396u, 1);  /* 0C056394 mov.b Rm,@Rn */
	r0 = 0xBu; UPD(0x0C056398u, 1);  /* 0C056396 mov.l @(disp,pc),Rn */
	IF(0x0C056398u); { u32 t_ = r13; PR = 0x0C05639Cu; IF(0x0C05639Au); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C05653C, 0x0C05653Cu, 0x0C05639Cu); }  /* 0C056398 jsr @Rn */
L_0C05639C: BLKS(0x0C05639Cu);
	r13 = 0x10000u; UPD(0x0C05639Eu, 1);  /* 0C05639C mov.l @(disp,pc),Rn */
	r0 = 0xC002C50u; UPD(0x0C0563A0u, 1);  /* 0C05639E mov.l @(disp,pc),Rn */
	r2 = 0xC165144u; UPD(0x0C0563A2u, 1);  /* 0C0563A0 mov.l @(disp,pc),Rn */
	r2 = R32(r2); UPD(0x0C0563A4u, 1);  /* 0C0563A2 mov.l @Rm,Rn */
	r2 += 0xBu;  /* 0C0563A4 add #imm,Rn */
	UPD(0x0C0563A6u, 1);
L_0C0563A6: BLKS(0x0C0563A6u);
	{ u32 v_ = (u32)(s32)(s8)R8(r0); r0 += 1; r3 = v_; } UPD(0x0C0563A8u, 1);  /* 0C0563A6 mov.b @Rm+,Rn */
	r5 = r3;  /* 0C0563A8 mov Rm,Rn */
	r6 = r3;  /* 0C0563AA mov Rm,Rn */
	r7 = r3;  /* 0C0563AC mov Rm,Rn */
	r4 = 0x1u; UPD(0x0C0563B0u, 4);  /* 0C0563AE mov.l @(disp,pc),Rn */
	r5 &= r4;  /* 0C0563B0 and Rm,Rn */
	r6 &= r4;  /* 0C0563B2 and Rm,Rn */
	r7 &= r4;  /* 0C0563B4 and Rm,Rn */
	r4 = 0x5u; UPD(0x0C0563B8u, 4);  /* 0C0563B6 mov.l @(disp,pc),Rn */
	IF(0x0C0563B8u); ARG0(0x454Du); { s32 s_ = (s32)r4; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = 0; else r5 >>= ((~s_ & 31) + 1); }  /* 0C0563B8 shld Rm,Rn */
	IF(0x0C0563BAu); ARG0(0x464Du); { s32 s_ = (s32)r4; if (s_ >= 0) r6 <<= (s_ & 31); else if ((s_ & 31) == 0) r6 = 0; else r6 >>= ((~s_ & 31) + 1); }  /* 0C0563BA shld Rm,Rn */
	IF(0x0C0563BCu); ARG0(0x474Du); { s32 s_ = (s32)r4; if (s_ >= 0) r7 <<= (s_ & 31); else if ((s_ & 31) == 0) r7 = 0; else r7 >>= ((~s_ & 31) + 1); }  /* 0C0563BC shld Rm,Rn */
	r4 = 0x8u; UPD(0x0C0563C0u, 4);  /* 0C0563BE mov.l @(disp,pc),Rn */
	r5 |= r4;  /* 0C0563C0 or Rm,Rn */
	r7 |= r4;  /* 0C0563C2 or Rm,Rn */
	r4 = 0x18u; UPD(0x0C0563C6u, 3);  /* 0C0563C4 mov.l @(disp,pc),Rn */
	r6 |= r4;  /* 0C0563C6 or Rm,Rn */
	W8(r14, r5); UPD(0x0C0563CAu, 2);  /* 0C0563C8 mov.b Rm,@Rn */
	W8(r14, r6); UPD(0x0C0563CCu, 1);  /* 0C0563CA mov.b Rm,@Rn */
	W8(r14, r7); UPD(0x0C0563CEu, 1);  /* 0C0563CC mov.b Rm,@Rn */
	IF(0x0C0563CEu); T = r3 & 1; r3 >>= 1;  /* 0C0563CE shlr Rn */
	r5 = r3;  /* 0C0563D0 mov Rm,Rn */
	r6 = r3;  /* 0C0563D2 mov Rm,Rn */
	r7 = r3;  /* 0C0563D4 mov Rm,Rn */
	r4 = 0x1u; UPD(0x0C0563D8u, 5);  /* 0C0563D6 mov.l @(disp,pc),Rn */
	r5 &= r4;  /* 0C0563D8 and Rm,Rn */
	r6 &= r4;  /* 0C0563DA and Rm,Rn */
	r7 &= r4;  /* 0C0563DC and Rm,Rn */
	r4 = 0x5u; UPD(0x0C0563E0u, 4);  /* 0C0563DE mov.l @(disp,pc),Rn */
	IF(0x0C0563E0u); ARG0(0x454Du); { s32 s_ = (s32)r4; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = 0; else r5 >>= ((~s_ & 31) + 1); }  /* 0C0563E0 shld Rm,Rn */
	IF(0x0C0563E2u); ARG0(0x464Du); { s32 s_ = (s32)r4; if (s_ >= 0) r6 <<= (s_ & 31); else if ((s_ & 31) == 0) r6 = 0; else r6 >>= ((~s_ & 31) + 1); }  /* 0C0563E2 shld Rm,Rn */
	IF(0x0C0563E4u); ARG0(0x474Du); { s32 s_ = (s32)r4; if (s_ >= 0) r7 <<= (s_ & 31); else if ((s_ & 31) == 0) r7 = 0; else r7 >>= ((~s_ & 31) + 1); }  /* 0C0563E4 shld Rm,Rn */
	r4 = 0x8u; UPD(0x0C0563E8u, 4);  /* 0C0563E6 mov.l @(disp,pc),Rn */
	r5 |= r4;  /* 0C0563E8 or Rm,Rn */
	r7 |= r4;  /* 0C0563EA or Rm,Rn */
	r4 = 0x18u; UPD(0x0C0563EEu, 3);  /* 0C0563EC mov.l @(disp,pc),Rn */
	r6 |= r4;  /* 0C0563EE or Rm,Rn */
	W8(r14, r5); UPD(0x0C0563F2u, 2);  /* 0C0563F0 mov.b Rm,@Rn */
	W8(r14, r6); UPD(0x0C0563F4u, 1);  /* 0C0563F2 mov.b Rm,@Rn */
	W8(r14, r7); UPD(0x0C0563F6u, 1);  /* 0C0563F4 mov.b Rm,@Rn */
	IF(0x0C0563F6u); T = r3 & 1; r3 >>= 1;  /* 0C0563F6 shlr Rn */
	r5 = r3;  /* 0C0563F8 mov Rm,Rn */
	r6 = r3;  /* 0C0563FA mov Rm,Rn */
	r7 = r3;  /* 0C0563FC mov Rm,Rn */
	r4 = 0x1u; UPD(0x0C056400u, 5);  /* 0C0563FE mov.l @(disp,pc),Rn */
	r5 &= r4;  /* 0C056400 and Rm,Rn */
	r6 &= r4;  /* 0C056402 and Rm,Rn */
	r7 &= r4;  /* 0C056404 and Rm,Rn */
	r4 = 0x5u; UPD(0x0C056408u, 4);  /* 0C056406 mov.l @(disp,pc),Rn */
	IF(0x0C056408u); ARG0(0x454Du); { s32 s_ = (s32)r4; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = 0; else r5 >>= ((~s_ & 31) + 1); }  /* 0C056408 shld Rm,Rn */
	IF(0x0C05640Au); ARG0(0x464Du); { s32 s_ = (s32)r4; if (s_ >= 0) r6 <<= (s_ & 31); else if ((s_ & 31) == 0) r6 = 0; else r6 >>= ((~s_ & 31) + 1); }  /* 0C05640A shld Rm,Rn */
	IF(0x0C05640Cu); ARG0(0x474Du); { s32 s_ = (s32)r4; if (s_ >= 0) r7 <<= (s_ & 31); else if ((s_ & 31) == 0) r7 = 0; else r7 >>= ((~s_ & 31) + 1); }  /* 0C05640C shld Rm,Rn */
	r4 = 0x8u; UPD(0x0C056410u, 4);  /* 0C05640E mov.l @(disp,pc),Rn */
	r5 |= r4;  /* 0C056410 or Rm,Rn */
	r7 |= r4;  /* 0C056412 or Rm,Rn */
	r4 = 0x18u; UPD(0x0C056416u, 3);  /* 0C056414 mov.l @(disp,pc),Rn */
	r6 |= r4;  /* 0C056416 or Rm,Rn */
	W8(r14, r5); UPD(0x0C05641Au, 2);  /* 0C056418 mov.b Rm,@Rn */
	W8(r14, r6); UPD(0x0C05641Cu, 1);  /* 0C05641A mov.b Rm,@Rn */
	W8(r14, r7); UPD(0x0C05641Eu, 1);  /* 0C05641C mov.b Rm,@Rn */
	IF(0x0C05641Eu); T = r3 & 1; r3 >>= 1;  /* 0C05641E shlr Rn */
	r5 = r3;  /* 0C056420 mov Rm,Rn */
	r6 = r3;  /* 0C056422 mov Rm,Rn */
	r7 = r3; UPD(0x0C056426u, 4);  /* 0C056424 mov Rm,Rn */
	r4 = 0x1u; UPD(0x0C056428u, 1);  /* 0C056426 mov.l @(disp,pc),Rn */
	r5 &= r4;  /* 0C056428 and Rm,Rn */
	r6 &= r4;  /* 0C05642A and Rm,Rn */
	r7 &= r4;  /* 0C05642C and Rm,Rn */
	r4 = 0x5u; UPD(0x0C056430u, 4);  /* 0C05642E mov.l @(disp,pc),Rn */
	IF(0x0C056430u); ARG0(0x454Du); { s32 s_ = (s32)r4; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = 0; else r5 >>= ((~s_ & 31) + 1); }  /* 0C056430 shld Rm,Rn */
	IF(0x0C056432u); ARG0(0x464Du); { s32 s_ = (s32)r4; if (s_ >= 0) r6 <<= (s_ & 31); else if ((s_ & 31) == 0) r6 = 0; else r6 >>= ((~s_ & 31) + 1); }  /* 0C056432 shld Rm,Rn */
	IF(0x0C056434u); ARG0(0x474Du); { s32 s_ = (s32)r4; if (s_ >= 0) r7 <<= (s_ & 31); else if ((s_ & 31) == 0) r7 = 0; else r7 >>= ((~s_ & 31) + 1); }  /* 0C056434 shld Rm,Rn */
	r4 = 0x8u; UPD(0x0C056438u, 4);  /* 0C056436 mov.l @(disp,pc),Rn */
	r5 |= r4;  /* 0C056438 or Rm,Rn */
	r7 |= r4;  /* 0C05643A or Rm,Rn */
	r4 = 0x18u; UPD(0x0C05643Eu, 3);  /* 0C05643C mov.l @(disp,pc),Rn */
	r6 |= r4;  /* 0C05643E or Rm,Rn */
	W8(r14, r5); UPD(0x0C056442u, 2);  /* 0C056440 mov.b Rm,@Rn */
	W8(r14, r6); UPD(0x0C056444u, 1);  /* 0C056442 mov.b Rm,@Rn */
	W8(r14, r7); UPD(0x0C056446u, 1);  /* 0C056444 mov.b Rm,@Rn */
	IF(0x0C056446u); T = r3 & 1; r3 >>= 1;  /* 0C056446 shlr Rn */
	r5 = r3;  /* 0C056448 mov Rm,Rn */
	r6 = r3;  /* 0C05644A mov Rm,Rn */
	r7 = r3;  /* 0C05644C mov Rm,Rn */
	r4 = 0x1u; UPD(0x0C056450u, 5);  /* 0C05644E mov.l @(disp,pc),Rn */
	r5 &= r4;  /* 0C056450 and Rm,Rn */
	r6 &= r4;  /* 0C056452 and Rm,Rn */
	r7 &= r4;  /* 0C056454 and Rm,Rn */
	r4 = 0x5u; UPD(0x0C056458u, 4);  /* 0C056456 mov.l @(disp,pc),Rn */
	IF(0x0C056458u); ARG0(0x454Du); { s32 s_ = (s32)r4; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = 0; else r5 >>= ((~s_ & 31) + 1); }  /* 0C056458 shld Rm,Rn */
	IF(0x0C05645Au); ARG0(0x464Du); { s32 s_ = (s32)r4; if (s_ >= 0) r6 <<= (s_ & 31); else if ((s_ & 31) == 0) r6 = 0; else r6 >>= ((~s_ & 31) + 1); }  /* 0C05645A shld Rm,Rn */
	IF(0x0C05645Cu); ARG0(0x474Du); { s32 s_ = (s32)r4; if (s_ >= 0) r7 <<= (s_ & 31); else if ((s_ & 31) == 0) r7 = 0; else r7 >>= ((~s_ & 31) + 1); }  /* 0C05645C shld Rm,Rn */
	r4 = 0x8u; UPD(0x0C056460u, 4);  /* 0C05645E mov.l @(disp,pc),Rn */
	r5 |= r4;  /* 0C056460 or Rm,Rn */
	r7 |= r4;  /* 0C056462 or Rm,Rn */
	r4 = 0x18u; UPD(0x0C056466u, 3);  /* 0C056464 mov.l @(disp,pc),Rn */
	r6 |= r4;  /* 0C056466 or Rm,Rn */
	W8(r14, r5); UPD(0x0C05646Au, 2);  /* 0C056468 mov.b Rm,@Rn */
	W8(r14, r6); UPD(0x0C05646Cu, 1);  /* 0C05646A mov.b Rm,@Rn */
	W8(r14, r7); UPD(0x0C05646Eu, 1);  /* 0C05646C mov.b Rm,@Rn */
	IF(0x0C05646Eu); T = r3 & 1; r3 >>= 1;  /* 0C05646E shlr Rn */
	r5 = r3;  /* 0C056470 mov Rm,Rn */
	r6 = r3;  /* 0C056472 mov Rm,Rn */
	r7 = r3;  /* 0C056474 mov Rm,Rn */
	r4 = 0x1u; UPD(0x0C056478u, 5);  /* 0C056476 mov.l @(disp,pc),Rn */
	r5 &= r4;  /* 0C056478 and Rm,Rn */
	r6 &= r4;  /* 0C05647A and Rm,Rn */
	r7 &= r4;  /* 0C05647C and Rm,Rn */
	r4 = 0x5u; UPD(0x0C056480u, 4);  /* 0C05647E mov.l @(disp,pc),Rn */
	IF(0x0C056480u); ARG0(0x454Du); { s32 s_ = (s32)r4; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = 0; else r5 >>= ((~s_ & 31) + 1); }  /* 0C056480 shld Rm,Rn */
	IF(0x0C056482u); ARG0(0x464Du); { s32 s_ = (s32)r4; if (s_ >= 0) r6 <<= (s_ & 31); else if ((s_ & 31) == 0) r6 = 0; else r6 >>= ((~s_ & 31) + 1); }  /* 0C056482 shld Rm,Rn */
	IF(0x0C056484u); ARG0(0x474Du); { s32 s_ = (s32)r4; if (s_ >= 0) r7 <<= (s_ & 31); else if ((s_ & 31) == 0) r7 = 0; else r7 >>= ((~s_ & 31) + 1); }  /* 0C056484 shld Rm,Rn */
	r4 = 0x8u; UPD(0x0C056488u, 4);  /* 0C056486 mov.l @(disp,pc),Rn */
	r5 |= r4;  /* 0C056488 or Rm,Rn */
	r7 |= r4;  /* 0C05648A or Rm,Rn */
	r4 = 0x18u; UPD(0x0C05648Eu, 3);  /* 0C05648C mov.l @(disp,pc),Rn */
	r6 |= r4;  /* 0C05648E or Rm,Rn */
	W8(r14, r5); UPD(0x0C056492u, 2);  /* 0C056490 mov.b Rm,@Rn */
	W8(r14, r6); UPD(0x0C056494u, 1);  /* 0C056492 mov.b Rm,@Rn */
	W8(r14, r7); UPD(0x0C056496u, 1);  /* 0C056494 mov.b Rm,@Rn */
	IF(0x0C056496u); T = r3 & 1; r3 >>= 1;  /* 0C056496 shlr Rn */
	r5 = r3;  /* 0C056498 mov Rm,Rn */
	r6 = r3;  /* 0C05649A mov Rm,Rn */
	r7 = r3;  /* 0C05649C mov Rm,Rn */
	r4 = 0x1u; UPD(0x0C0564A0u, 5);  /* 0C05649E mov.l @(disp,pc),Rn */
	r5 &= r4;  /* 0C0564A0 and Rm,Rn */
	r6 &= r4;  /* 0C0564A2 and Rm,Rn */
	r7 &= r4; UPD(0x0C0564A6u, 3);  /* 0C0564A4 and Rm,Rn */
	r4 = 0x5u; UPD(0x0C0564A8u, 1);  /* 0C0564A6 mov.l @(disp,pc),Rn */
	IF(0x0C0564A8u); ARG0(0x454Du); { s32 s_ = (s32)r4; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = 0; else r5 >>= ((~s_ & 31) + 1); }  /* 0C0564A8 shld Rm,Rn */
	IF(0x0C0564AAu); ARG0(0x464Du); { s32 s_ = (s32)r4; if (s_ >= 0) r6 <<= (s_ & 31); else if ((s_ & 31) == 0) r6 = 0; else r6 >>= ((~s_ & 31) + 1); }  /* 0C0564AA shld Rm,Rn */
	IF(0x0C0564ACu); ARG0(0x474Du); { s32 s_ = (s32)r4; if (s_ >= 0) r7 <<= (s_ & 31); else if ((s_ & 31) == 0) r7 = 0; else r7 >>= ((~s_ & 31) + 1); }  /* 0C0564AC shld Rm,Rn */
	r4 = 0x8u; UPD(0x0C0564B0u, 4);  /* 0C0564AE mov.l @(disp,pc),Rn */
	r5 |= r4;  /* 0C0564B0 or Rm,Rn */
	r7 |= r4;  /* 0C0564B2 or Rm,Rn */
	r4 = 0x18u; UPD(0x0C0564B6u, 3);  /* 0C0564B4 mov.l @(disp,pc),Rn */
	r6 |= r4;  /* 0C0564B6 or Rm,Rn */
	W8(r14, r5); UPD(0x0C0564BAu, 2);  /* 0C0564B8 mov.b Rm,@Rn */
	W8(r14, r6); UPD(0x0C0564BCu, 1);  /* 0C0564BA mov.b Rm,@Rn */
	W8(r14, r7); UPD(0x0C0564BEu, 1);  /* 0C0564BC mov.b Rm,@Rn */
	IF(0x0C0564BEu); T = r3 & 1; r3 >>= 1;  /* 0C0564BE shlr Rn */
	r5 = r3;  /* 0C0564C0 mov Rm,Rn */
	r6 = r3;  /* 0C0564C2 mov Rm,Rn */
	r7 = r3;  /* 0C0564C4 mov Rm,Rn */
	r4 = 0x1u; UPD(0x0C0564C8u, 5);  /* 0C0564C6 mov.l @(disp,pc),Rn */
	r5 &= r4;  /* 0C0564C8 and Rm,Rn */
	r6 &= r4;  /* 0C0564CA and Rm,Rn */
	r7 &= r4;  /* 0C0564CC and Rm,Rn */
	r4 = 0x5u; UPD(0x0C0564D0u, 4);  /* 0C0564CE mov.l @(disp,pc),Rn */
	IF(0x0C0564D0u); ARG0(0x454Du); { s32 s_ = (s32)r4; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = 0; else r5 >>= ((~s_ & 31) + 1); }  /* 0C0564D0 shld Rm,Rn */
	IF(0x0C0564D2u); ARG0(0x464Du); { s32 s_ = (s32)r4; if (s_ >= 0) r6 <<= (s_ & 31); else if ((s_ & 31) == 0) r6 = 0; else r6 >>= ((~s_ & 31) + 1); }  /* 0C0564D2 shld Rm,Rn */
	IF(0x0C0564D4u); ARG0(0x474Du); { s32 s_ = (s32)r4; if (s_ >= 0) r7 <<= (s_ & 31); else if ((s_ & 31) == 0) r7 = 0; else r7 >>= ((~s_ & 31) + 1); }  /* 0C0564D4 shld Rm,Rn */
	r4 = 0x8u; UPD(0x0C0564D8u, 4);  /* 0C0564D6 mov.l @(disp,pc),Rn */
	r5 |= r4;  /* 0C0564D8 or Rm,Rn */
	r7 |= r4;  /* 0C0564DA or Rm,Rn */
	r4 = 0x18u; UPD(0x0C0564DEu, 3);  /* 0C0564DC mov.l @(disp,pc),Rn */
	r6 |= r4;  /* 0C0564DE or Rm,Rn */
	W8(r14, r5); UPD(0x0C0564E2u, 2);  /* 0C0564E0 mov.b Rm,@Rn */
	W8(r14, r6); UPD(0x0C0564E4u, 1);  /* 0C0564E2 mov.b Rm,@Rn */
	W8(r14, r7); UPD(0x0C0564E6u, 1);  /* 0C0564E4 mov.b Rm,@Rn */
	IF(0x0C0564E6u); T = r3 & 1; r3 >>= 1;  /* 0C0564E6 shlr Rn */
	IF(0x0C0564E8u); r2 -= 1; T = r2 == 0;  /* 0C0564E8 dt Rn */
	if (T) { UPD(0x0C056524u, 5); goto L_0C056524; }  /* 0C0564EA bt */
L_0C0564EC: BLKS(0x0C0564ECu);
	IF(0x0C0564ECu); ;  /* 0C0564EC nop */
	{ IF(0x0C0564F0u); ; /* slot nop */ UPD(0x0C0563A6u, 4); goto L_0C0563A6; }  /* 0C0564EE bra */
L_0C056524: BLKS(0x0C056524u);
	r1 = 0x40u; UPD(0x0C056526u, 1);  /* 0C056524 mov.l @(disp,pc),Rn */
L_0C056526: BLKS(0x0C056526u);
	SPIN_SAVE(0C056526);
	r2 = (u32)(s32)(s8)RS8(0C056526, r14); UPD(0x0C056528u, 1);  /* 0C056526 mov.b @Rm,Rn */
	T = (r2 & r1) == 0;  /* 0C056528 tst Rm,Rn */
	{ u32 c_ = T; IF(0x0C05652Cu); ; /* slot nop */ if (c_) { SPIN_FFD(0C056526, 5); UPD(0x0C056526u, 4); goto L_0C056526; } goto L_0C05652E; }  /* 0C05652A bt/s */
L_0C05652E: BLKS(0x0C05652Eu);
	IF(0x0C05652Eu); PR = R32(r15); r15 += 4; UPD(0x0C056530u, 2);  /* 0C05652E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C056532u, 1);  /* 0C056530 mov.l @Rm+,Rn */
	IF(0x0C056532u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r13 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C056532 rts */
}

/* delay_loop */
void blk_f_0C05653C(sh3_t *c)
{
	LOCALS;
	SPIN_VARS(0C05653C);
L_0C05653C: BLKS(0x0C05653Cu);
	SPIN_SAVE(0C05653C);
	IF(0x0C05653Cu); r0 -= 1; T = r0 == 0;  /* 0C05653C dt Rn */
	{ u32 c_ = !T; IF(0x0C056540u); ; /* slot nop */ if (c_) { SPIN_FFD(0C05653C, 4); UPD(0x0C05653Cu, 4); goto L_0C05653C; } goto L_0C056542; }  /* 0C05653E bf/s */
L_0C056542: BLKS(0x0C056542u);
	IF(0x0C056542u); { u32 t_ = PR; IF(0x0C056544u); ; /* slot nop */ UPD(t_, 4); RET(t_); }  /* 0C056542 rts */
}

/* heap_init */
void blk_f_0C056554(sh3_t *c)
{
	LOCALS;
L_0C056554: BLKS(0x0C056554u);
	r0 = 0xC002780u; UPD(0x0C056556u, 1);  /* 0C056554 mov.l @(disp,pc),Rn */
	r1 = 0xC0565ECu; UPD(0x0C056558u, 1);  /* 0C056556 mov.l @(disp,pc),Rn */
	W32(r0 + 0x0u, r1); UPD(0x0C05655Au, 1);  /* 0C056558 mov.l Rm,@(disp,Rn) */
	r1 = 0xC056618u; UPD(0x0C05655Cu, 1);  /* 0C05655A mov.l @(disp,pc),Rn */
	W32(r0 + 0x4u, r1); UPD(0x0C05655Eu, 1);  /* 0C05655C mov.l Rm,@(disp,Rn) */
	r1 = 0xC056664u; UPD(0x0C056560u, 1);  /* 0C05655E mov.l @(disp,pc),Rn */
	W32(r0 + 0x8u, r1); UPD(0x0C056562u, 1);  /* 0C056560 mov.l Rm,@(disp,Rn) */
	r1 = 0xC056698u; UPD(0x0C056564u, 1);  /* 0C056562 mov.l @(disp,pc),Rn */
	W32(r0 + 0xCu, r1); UPD(0x0C056566u, 1);  /* 0C056564 mov.l Rm,@(disp,Rn) */
	r1 = 0xC056704u; UPD(0x0C056568u, 1);  /* 0C056566 mov.l @(disp,pc),Rn */
	W32(r0 + 0x10u, r1); UPD(0x0C05656Au, 1);  /* 0C056568 mov.l Rm,@(disp,Rn) */
	r1 = 0xC056738u; UPD(0x0C05656Cu, 1);  /* 0C05656A mov.l @(disp,pc),Rn */
	W32(r0 + 0x14u, r1); UPD(0x0C05656Eu, 1);  /* 0C05656C mov.l Rm,@(disp,Rn) */
	r1 = 0xC056848u; UPD(0x0C056570u, 1);  /* 0C05656E mov.l @(disp,pc),Rn */
	W32(r0 + 0x18u, r1); UPD(0x0C056572u, 1);  /* 0C056570 mov.l Rm,@(disp,Rn) */
	T = (r4 & r4) == 0;  /* 0C056572 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0xFFFFFFF0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C05657Eu, 4); goto L_0C05657E; } goto L_0C056578; }  /* 0C056574 bf/s */
L_0C056578: BLKS(0x0C056578u);
	r4 = 0xC3CC314u; UPD(0x0C05657Au, 2);  /* 0C056578 mov.l @(disp,pc),Rn */
	r5 = 0xC7FF000u; UPD(0x0C05657Cu, 1);  /* 0C05657A mov.l @(disp,pc),Rn */
	r5 -= r4;  /* 0C05657C sub Rm,Rn */
	UPD(0x0C05657Eu, 1);
L_0C05657E: BLKS(0x0C05657Eu);
	r7 = 0xC056548u; UPD(0x0C056580u, 1);  /* 0C05657E mov.l @(disp,pc),Rn */
	r4 += 0xFu;  /* 0C056580 add #imm,Rn */
	r5 += 0xFFFFFFF1u;  /* 0C056582 add #imm,Rn */
	r1 = 0x20u;  /* 0C056584 mov #imm,Rn */
	r4 &= r0;  /* 0C056586 and Rm,Rn */
	r5 &= r0;  /* 0C056588 and Rm,Rn */
	W32(r7, r4); UPD(0x0C05658Cu, 6);  /* 0C05658A mov.l Rm,@Rn */
	r0 = r5;  /* 0C05658C mov Rm,Rn */
	r2 = 0x0u;  /* 0C05658E mov #imm,Rn */
	r0 += r4;  /* 0C056590 add Rm,Rn */
	W32(r4 + 0x0u, r1); UPD(0x0C056594u, 4);  /* 0C056592 mov.l Rm,@(disp,Rn) */
	W32(r4 + 0x4u, r2); UPD(0x0C056596u, 1);  /* 0C056594 mov.l Rm,@(disp,Rn) */
	W32(r4 + 0x8u, r2); UPD(0x0C056598u, 1);  /* 0C056596 mov.l Rm,@(disp,Rn) */
	W32(r4 + 0xCu, r2); UPD(0x0C05659Au, 1);  /* 0C056598 mov.l Rm,@(disp,Rn) */
	W32(r4 + 0x10u, r5); UPD(0x0C05659Cu, 1);  /* 0C05659A mov.l Rm,@(disp,Rn) */
	W32(r7 + 0x4u, r0); UPD(0x0C05659Eu, 1);  /* 0C05659C mov.l Rm,@(disp,Rn) */
	IF(0x0C05659Eu); { u32 t_ = PR; W32(r7 + 0x8u, r4); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); RET(t_); }  /* 0C05659E rts */
}

void blk_f_0C0565EC(sh3_t *c)
{
	LOCALS;
L_0C0565EC: BLKS(0x0C0565ECu);
	IF(0x0C0565ECu); r15 -= 4; W32(r15, PR); UPD(0x0C0565EEu, 1);  /* 0C0565EC sts.l pr,@-Rn */
	IF(0x0C0565EEu); ARG0(0x04C2u); r4 = c->rbank[4];  /* 0C0565EE stc Rb_bank,Rn */
	{ PR = 0x0C0565F4u; r5 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C056752u, 4); CALL(blk_f_0C056752, 0x0C0565F4u); }  /* 0C0565F0 bsr */
L_0C0565F4: BLKS(0x0C0565F4u);
	IF(0x0C0565F4u); PR = R32(r15); r15 += 4; UPD(0x0C0565F6u, 1);  /* 0C0565F4 lds.l @Rn+,pr */
	IF(0x0C0565F6u); { u32 t_ = PR; IF(0x0C0565F8u); ARG0(0x408Eu); c->rbank[0] = r0; /* slot ldc Rn,Rb_bank */ UPD(t_, 3); RET(t_); }  /* 0C0565F6 rts */
}

/* FUN_0c0565fc */
void blk_f_0C0565FC(sh3_t *c)
{
	LOCALS;
L_0C0565FC: BLKS(0x0C0565FCu);
	r0 = 0xC002780u; UPD(0x0C0565FEu, 1);  /* 0C0565FC mov.l @(disp,pc),Rn */
	r1 = 0xC002780u; UPD(0x0C056600u, 1);  /* 0C0565FE mov.l @(disp,pc),Rn */
	r0 -= r1;  /* 0C056600 sub Rm,Rn */
	r1 = 0x4u; UPD(0x0C056604u, 2);  /* 0C056602 mov.l @(disp,pc),Rn */
	r0 += r1;  /* 0C056604 add Rm,Rn */
	UPDN(0x0C056608u, 7); ARG0(0xC30Fu); TRAPA(0x0C056608u, 15);  /* 0C056606 trapa #imm */
L_0C056608: BLKS(0x0C056608u);
	IF(0x0C056608u); { u32 t_ = PR; IF(0x0C05660Au); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C056608 rts */
}

void blk_f_0C056618(sh3_t *c)
{
	LOCALS;
L_0C056618: BLKS(0x0C056618u);
	IF(0x0C056618u); ARG0(0x04C2u); r4 = c->rbank[4];  /* 0C056618 stc Rb_bank,Rn */
	IF(0x0C05661Au); ARG0(0x05D2u); r5 = c->rbank[5];  /* 0C05661A stc Rb_bank,Rn */
	IF(0x0C05661Cu); r15 -= 4; W32(r15, MACL); UPD(0x0C05661Eu, 3);  /* 0C05661C sts.l macl,@-Rn */
	IF(0x0C05661Eu); r15 -= 4; W32(r15, PR); UPD(0x0C056620u, 1);  /* 0C05661E sts.l pr,@-Rn */
	IF(0x0C056620u); MACL = r5 * r4;  /* 0C056620 mul.l Rm,Rn */
	r5 = 0x0u;  /* 0C056622 mov #imm,Rn */
	{ PR = 0x0C056628u; IF(0x0C056626u); r4 = MACL; /* slot sts macl,Rn */ UPD(0x0C056752u, 6); CALL(blk_f_0C056752, 0x0C056628u); }  /* 0C056624 bsr */
L_0C056628: BLKS(0x0C056628u);
	IF(0x0C056628u); ARG0(0x408Eu); c->rbank[0] = r0;  /* 0C056628 ldc Rn,Rb_bank */
	r2 = r0;  /* 0C05662A mov Rm,Rn */
	IF(0x0C05662Cu); r3 = MACL;  /* 0C05662C sts macl,Rn */
	T = (r2 & r2) == 0;  /* 0C05662E tst Rm,Rn */
	{ u32 c_ = T; r3 += 0x3u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C056640u, 7); goto L_0C056640; } goto L_0C056634; }  /* 0C056630 bt/s */
L_0C056634: BLKS(0x0C056634u);
	r1 = 0x0u;  /* 0C056634 mov #imm,Rn */
	IF(0x0C056636u); r3 >>= 2;  /* 0C056636 shlr2 Rn */
	UPD(0x0C056638u, 3);
L_0C056638: BLKS(0x0C056638u);
	W32(r2, r1); UPD(0x0C05663Au, 1);  /* 0C056638 mov.l Rm,@Rn */
	IF(0x0C05663Au); r3 -= 1; T = r3 == 0;  /* 0C05663A dt Rn */
	{ u32 c_ = !T; r2 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C056638u, 4); goto L_0C056638; } UPD(0x0C056640u, 1); goto L_0C056640; }  /* 0C05663C bf/s */
L_0C056640: BLKS(0x0C056640u);
	IF(0x0C056640u); PR = R32(r15); r15 += 4; UPD(0x0C056642u, 1);  /* 0C056640 lds.l @Rn+,pr */
	IF(0x0C056642u); { u32 t_ = PR; IF(0x0C056644u); MACL = R32(r15); r15 += 4; /* slot lds.l @Rn+,macl */ UPD(t_, 3); RET(t_); }  /* 0C056642 rts */
}


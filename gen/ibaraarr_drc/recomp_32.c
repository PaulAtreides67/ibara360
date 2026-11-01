#include "recomp.h"
#include "recomp_funcs.h"

void f_0C1BCEF0(sh3_t *c)
{
	LOCALS;
L_0C1BCEF0: BLKS(0x0C1BCEF0u);
	IF(0x0C1BCEF0u); { u32 t_ = PR; r8 = (u32)(s32)(s8)R8(r12); /* slot mov.b @Rm,Rn */ UPD(t_, 3); RET(t_); }  /* 0C1BCEF0 rts */
}

void f_0C1C1B7C(sh3_t *c)
{
	LOCALS;
L_0C1C1B7C: BLKS(0x0C1C1B7Cu);
	IF(0x0C1C1B7Cu); { u32 t_ = PR; W8(r0 + 0x0u, r0); /* slot mov.b r0,@(disp,Rn) */ UPD(t_, 3); RET(t_); }  /* 0C1C1B7C rts */
}

void f_0C1C1B86(sh3_t *c)
{
	LOCALS;
L_0C1C1B86: BLKS(0x0C1C1B86u);
	IF(0x0C1C1B86u); { u32 t_ = PR; W8(r3 + 0x0u, r0); /* slot mov.b r0,@(disp,Rn) */ UPD(t_, 3); RET(t_); }  /* 0C1C1B86 rts */
}

void f_0C1C1B90(sh3_t *c)
{
	LOCALS;
L_0C1C1B90: BLKS(0x0C1C1B90u);
	IF(0x0C1C1B90u); { u32 t_ = PR; W8(r6 + 0x0u, r0); /* slot mov.b r0,@(disp,Rn) */ UPD(t_, 3); RET(t_); }  /* 0C1C1B90 rts */
}

void f_0C1C1B9A(sh3_t *c)
{
	LOCALS;
L_0C1C1B9A: BLKS(0x0C1C1B9Au);
	IF(0x0C1C1B9Au); { u32 t_ = PR; W8(r9 + 0x0u, r0); /* slot mov.b r0,@(disp,Rn) */ UPD(t_, 3); RET(t_); }  /* 0C1C1B9A rts */
}

void f_0C1C1BA4(sh3_t *c)
{
	LOCALS;
L_0C1C1BA4: BLKS(0x0C1C1BA4u);
	IF(0x0C1C1BA4u); { u32 t_ = PR; r8 = R32(r0 + 0x0u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); RET(t_); }  /* 0C1C1BA4 rts */
}

void f_0C1C1BAE(sh3_t *c)
{
	LOCALS;
L_0C1C1BAE: BLKS(0x0C1C1BAEu);
	IF(0x0C1C1BAEu); { u32 t_ = PR; r8 = R32(r3 + 0x0u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); RET(t_); }  /* 0C1C1BAE rts */
}

void f_0C1C1BB8(sh3_t *c)
{
	LOCALS;
L_0C1C1BB8: BLKS(0x0C1C1BB8u);
	IF(0x0C1C1BB8u); { u32 t_ = PR; r8 = R32(r6 + 0x0u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); RET(t_); }  /* 0C1C1BB8 rts */
}

void f_0C1C1BC2(sh3_t *c)
{
	LOCALS;
L_0C1C1BC2: BLKS(0x0C1C1BC2u);
	IF(0x0C1C1BC2u); { u32 t_ = PR; r8 = R32(r9 + 0x0u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); RET(t_); }  /* 0C1C1BC2 rts */
}

void f_0C1C2256(sh3_t *c)
{
	LOCALS;
L_0C1C2256: BLKS(0x0C1C2256u);
	IF(0x0C1C2256u); { u32 tv_ = (r0 + 0x0C1C225Au); u32 t_ = PHYS(tv_); rt_slot_illegal(c, 0x0C1C2258u); /* slot None */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C1C2256 braf Rn */
}

void f_0C1C31B0(sh3_t *c)
{
	LOCALS;
	goto L_0C1C31B0;
L_0C1C2256: BLKS(0x0C1C2256u);
	IF(0x0C1C2256u); { u32 tv_ = (r0 + 0x0C1C225Au); u32 t_ = PHYS(tv_); rt_slot_illegal(c, 0x0C1C2258u); /* slot None */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C1C2256 braf Rn */
L_0C1C31B0: BLKS(0x0C1C31B0u);
	IF(0x0C1C31B0u); W32(r0 + r0, r0); UPD(0x0C1C31B2u, 1);  /* 0C1C31B0 mov.l Rm,@(r0,Rn) */
	{ r8 = 0xB0000u; /* slot mov.l @(disp,pc),Rn */ UPD(0x0C1C2256u, 3); goto L_0C1C2256; }  /* 0C1C31B2 bra */
}

void f_0C1C3B28(sh3_t *c)
{
	LOCALS;
L_0C1C3B28: BLKS(0x0C1C3B28u);
	IF(0x0C1C3B28u); { u32 t_ = PR; r8 = 0xFFFFFFD8u; /* slot mov #imm,Rn */ UPD(t_, 3); RET(t_); }  /* 0C1C3B28 rts */
}

void f_0C1C3B32(sh3_t *c)
{
	LOCALS;
L_0C1C3B32: BLKS(0x0C1C3B32u);
	IF(0x0C1C3B32u); { u32 t_ = PR; r0 = 0xC1C3DA0u; /* slot mov.l @(disp,pc),Rn */ UPD(t_, 3); RET(t_); }  /* 0C1C3B32 rts */
}

void f_0C1C3B50(sh3_t *c)
{
	LOCALS;
L_0C1C3B50: BLKS(0x0C1C3B50u);
	IF(0x0C1C3B50u); { u32 t_ = PR; T = r0 == 0xFFFFFFD8u; /* slot cmp/eq #imm,r0 */ UPD(t_, 3); RET(t_); }  /* 0C1C3B50 rts */
}

void f_0C1C3B5A(sh3_t *c)
{
	LOCALS;
L_0C1C3B5A: BLKS(0x0C1C3B5Au);
	IF(0x0C1C3B5Au); { u32 t_ = PR; r0 += 0xFFFFFFD8u; /* slot add #imm,Rn */ UPD(t_, 3); RET(t_); }  /* 0C1C3B5A rts */
}

void f_0C1C3B64(sh3_t *c)
{
	LOCALS;
L_0C1C3B64: BLKS(0x0C1C3B64u);
	IF(0x0C1C3B64u); { u32 t_ = PR; r8 = R32(r13 + 0x20u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); RET(t_); }  /* 0C1C3B64 rts */
}

void f_0C1C3B78(sh3_t *c)
{
	LOCALS;
L_0C1C3B78: BLKS(0x0C1C3B78u);
	IF(0x0C1C3B78u); { u32 t_ = PR; T = (r8 & r13) == 0; /* slot tst Rm,Rn */ UPD(t_, 3); RET(t_); }  /* 0C1C3B78 rts */
}

void f_0C1C3B82(sh3_t *c)
{
	LOCALS;
L_0C1C3B82: BLKS(0x0C1C3B82u);
	IF(0x0C1C3B82u); { u32 t_ = PR; W32(r0 + 0x20u, r13); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); RET(t_); }  /* 0C1C3B82 rts */
}

void f_0C1C3B96(sh3_t *c)
{
	LOCALS;
L_0C1C3B96: BLKS(0x0C1C3B96u);
	IF(0x0C1C3B96u); { u32 t_ = PR; IF(0x0C1C3B98u); T = 1; /* slot sett */ UPD(t_, 3); RET(t_); }  /* 0C1C3B96 rts */
}

void f_0C1C3BAA(sh3_t *c)
{
	LOCALS;
L_0C1C3BAA: BLKS(0x0C1C3BAAu);
	IF(0x0C1C3BAAu); { u32 t_ = PR; IF(0x0C1C3BACu); ARG0(0x0048u); c->sr &= ~SR_S; /* slot clrs */ UPD(t_, 3); RET(t_); }  /* 0C1C3BAA rts */
}

void f_0C1C6186(sh3_t *c)
{
	LOCALS;
L_0C1C6186: BLKS(0x0C1C6186u);
	IF(0x0C1C6186u); { u32 t_ = PR; r0 = (u32)(s32)(s8)R8(r0); /* slot mov.b @Rm,Rn */ UPD(t_, 3); RET(t_); }  /* 0C1C6186 rts */
}

void f_0C1C6190(sh3_t *c)
{
	LOCALS;
L_0C1C6190: BLKS(0x0C1C6190u);
	IF(0x0C1C6190u); { u32 t_ = PR; r0 = (u32)(s32)(s8)R8(r5); /* slot mov.b @Rm,Rn */ UPD(t_, 3); RET(t_); }  /* 0C1C6190 rts */
}

void f_0C1C619A(sh3_t *c)
{
	LOCALS;
L_0C1C619A: BLKS(0x0C1C619Au);
	IF(0x0C1C619Au); { u32 t_ = PR; W32(r8 + 0x0u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); RET(t_); }  /* 0C1C619A rts */
}

void f_0C1C61A4(sh3_t *c)
{
	LOCALS;
L_0C1C61A4: BLKS(0x0C1C61A4u);
	IF(0x0C1C61A4u); { u32 t_ = PR; T = (r0 & r6) == 0; /* slot tst Rm,Rn */ UPD(t_, 3); RET(t_); }  /* 0C1C61A4 rts */
}

void f_0C1C99B4(sh3_t *c)
{
	LOCALS;
L_0C1C99B4: BLKS(0x0C1C99B4u);
	IF(0x0C1C99B4u); { u32 t_ = PR; r0 = (u32)(s32)(s8)R8(r0); /* slot mov.b @Rm,Rn */ UPD(t_, 3); RET(t_); }  /* 0C1C99B4 rts */
}

void f_0C1C99BE(sh3_t *c)
{
	LOCALS;
L_0C1C99BE: BLKS(0x0C1C99BEu);
	IF(0x0C1C99BEu); { u32 t_ = PR; r0 = (r6 & 0xFFFF0000u) | ((r6 & 0xFF) << 8) | ((r6 >> 8) & 0xFF); /* slot swap.b Rm,Rn */ UPD(t_, 3); RET(t_); }  /* 0C1C99BE rts */
}

void f_0C1C99C8(sh3_t *c)
{
	LOCALS;
L_0C1C99C8: BLKS(0x0C1C99C8u);
	IF(0x0C1C99C8u); { u32 t_ = PR; W32(r0 + 0x0u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); RET(t_); }  /* 0C1C99C8 rts */
}

void f_0C1C99D2(sh3_t *c)
{
	LOCALS;
L_0C1C99D2: BLKS(0x0C1C99D2u);
	IF(0x0C1C99D2u); { u32 t_ = PR; W32(r0 + 0x20u, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); RET(t_); }  /* 0C1C99D2 rts */
}

void f_0C1CD308(sh3_t *c)
{
	LOCALS;
L_0C1CD308: BLKS(0x0C1CD308u);
	IF(0x0C1CD308u); { u32 t_ = PR; W8(r0 + 0x0u, r0); /* slot mov.b r0,@(disp,Rn) */ UPD(t_, 3); RET(t_); }  /* 0C1CD308 rts */
}

void f_0C1CD312(sh3_t *c)
{
	LOCALS;
L_0C1CD312: BLKS(0x0C1CD312u);
	IF(0x0C1CD312u); { u32 t_ = PR; W8(r8 + 0x0u, r0); /* slot mov.b r0,@(disp,Rn) */ UPD(t_, 3); RET(t_); }  /* 0C1CD312 rts */
}

void f_0C1CEC02(sh3_t *c)
{
	LOCALS;
L_0C1CEC02: BLKS(0x0C1CEC02u);
	IF(0x0C1CEC02u); r0 = c->vbr;  /* 0C1CEC02 stc vbr,Rn */
	{ r6 = 0xFFFFFFE8u; /* slot mov #imm,Rn */ UPD(0x0C1CED88u, 4); goto L_0C1CED88; }  /* 0C1CEC04 bra */
L_0C1CED88: BLKS(0x0C1CED88u);
	IF(0x0C1CED88u); { u32 tv_ = (r0 + 0x0C1CED8Cu); u32 t_ = PHYS(tv_); W32(r0 + 0x0u, r9); /* slot mov.l Rm,@(disp,Rn) */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C1CED88 braf Rn */
}

void f_0C1CECA2(sh3_t *c)
{
	LOCALS;
L_0C1CECA2: BLKS(0x0C1CECA2u);
	IF(0x0C1CECA2u); { u32 tv_ = (r0 + 0x0C1CECA6u); u32 t_ = PHYS(tv_); r0 = 0x2F2F0000u; /* slot mov.l @(disp,pc),Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C1CECA2 braf Rn */
}

void f_0C1CECAC(sh3_t *c)
{
	LOCALS;
L_0C1CECAC: BLKS(0x0C1CECACu);
	IF(0x0C1CECACu); { u32 tv_ = (r0 + 0x0C1CECB0u); u32 t_ = PHYS(tv_); r0 = 0x2F2F0000u; /* slot mov.l @(disp,pc),Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C1CECAC braf Rn */
}

void f_0C1CECB6(sh3_t *c)
{
	LOCALS;
L_0C1CECB6: BLKS(0x0C1CECB6u);
	IF(0x0C1CECB6u); { u32 tv_ = (r0 + 0x0C1CECBAu); u32 t_ = PHYS(tv_); r0 = 0xC1CEBA8u; /* slot mov.l @(disp,pc),Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C1CECB6 braf Rn */
}

void f_0C1CECC0(sh3_t *c)
{
	LOCALS;
L_0C1CECC0: BLKS(0x0C1CECC0u);
	IF(0x0C1CECC0u); { u32 tv_ = (r0 + 0x0C1CECC4u); u32 t_ = PHYS(tv_); r0 = 0xC1CECA2u; /* slot mov.l @(disp,pc),Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C1CECC0 braf Rn */
}

void f_0C1CECCA(sh3_t *c)
{
	LOCALS;
L_0C1CECCA: BLKS(0x0C1CECCAu);
	IF(0x0C1CECCAu); { u32 tv_ = (r0 + 0x0C1CECCEu); u32 t_ = PHYS(tv_); r0 = 0xC1CEE28u; /* slot mov.l @(disp,pc),Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C1CECCA braf Rn */
}

void f_0C1CED06(sh3_t *c)
{
	LOCALS;
L_0C1CED06: BLKS(0x0C1CED06u);
	IF(0x0C1CED06u); { u32 tv_ = (r0 + 0x0C1CED0Au); u32 t_ = PHYS(tv_); r0 += 0x0u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C1CED06 braf Rn */
}

void f_0C1CED10(sh3_t *c)
{
	LOCALS;
L_0C1CED10: BLKS(0x0C1CED10u);
	IF(0x0C1CED10u); { u32 tv_ = (r0 + 0x0C1CED14u); u32 t_ = PHYS(tv_); r0 += 0x30u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C1CED10 braf Rn */
}

void f_0C1CED1A(sh3_t *c)
{
	LOCALS;
L_0C1CED1A: BLKS(0x0C1CED1Au);
	IF(0x0C1CED1Au); { u32 tv_ = (r0 + 0x0C1CED1Eu); u32 t_ = PHYS(tv_); r0 += 0x60u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C1CED1A braf Rn */
}

void f_0C1CED24(sh3_t *c)
{
	LOCALS;
L_0C1CED24: BLKS(0x0C1CED24u);
	IF(0x0C1CED24u); { u32 tv_ = (r0 + 0x0C1CED28u); u32 t_ = PHYS(tv_); r0 += 0xFFFFFF90u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C1CED24 braf Rn */
}


#include "recomp.h"
#include "recomp_funcs.h"

void f_0C19EFCE(sh3_t *c)
{
	LOCALS;
L_0C19EFCE: BLKS(0x0C19EFCEu);
	IF(0x0C19EFCEu); { u32 t_ = c->spc; SET_SR(c->ssr); W32(r0 + 0x0u, r0); /* slot mov.l Rm,@(disp,Rn) */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C19EFCE rte */
}

void f_0C19EFE0(sh3_t *c)
{
	LOCALS;
L_0C19EFE0: BLKS(0x0C19EFE0u);
	IF(0x0C19EFE0u); { u32 t_ = c->spc; SET_SR(c->ssr); W32(r0 + 0x20u, r2); /* slot mov.l Rm,@(disp,Rn) */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C19EFE0 rte */
}

void f_0C19EFF2(sh3_t *c)
{
	LOCALS;
L_0C19EFF2: BLKS(0x0C19EFF2u);
	IF(0x0C19EFF2u); { u32 t_ = c->spc; SET_SR(c->ssr); W32(r0 + 0x0u, r5); /* slot mov.l Rm,@(disp,Rn) */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C19EFF2 rte */
}

void f_0C19F004(sh3_t *c)
{
	LOCALS;
L_0C19F004: BLKS(0x0C19F004u);
	IF(0x0C19F004u); { u32 t_ = c->spc; SET_SR(c->ssr); W32(r0 + 0x20u, r7); /* slot mov.l Rm,@(disp,Rn) */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C19F004 rte */
}

void f_0C19F016(sh3_t *c)
{
	LOCALS;
L_0C19F016: BLKS(0x0C19F016u);
	IF(0x0C19F016u); { u32 t_ = c->spc; SET_SR(c->ssr); W32(r0 + 0x0u, r10); /* slot mov.l Rm,@(disp,Rn) */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C19F016 rte */
}

void f_0C19F028(sh3_t *c)
{
	LOCALS;
L_0C19F028: BLKS(0x0C19F028u);
	IF(0x0C19F028u); { u32 t_ = c->spc; SET_SR(c->ssr); W32(r0 + 0x20u, r12); /* slot mov.l Rm,@(disp,Rn) */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C19F028 rte */
}

void f_0C19F05E(sh3_t *c)
{
	LOCALS;
L_0C19F05E: BLKS(0x0C19F05Eu);
	IF(0x0C19F05Eu); { u32 tv_ = r0; u32 t_ = PHYS(tv_); r0 = 0x2F27202Cu; /* slot mov.l @(disp,pc),Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C19F05E jmp @Rn */
}

void f_0C19F070(sh3_t *c)
{
	LOCALS;
L_0C19F070: BLKS(0x0C19F070u);
	IF(0x0C19F070u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); r0 = 0xA0A0ECEBu; /* slot mov.l @(disp,pc),Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C19F070 jmp @Rn */
}

void f_0C19F082(sh3_t *c)
{
	LOCALS;
L_0C19F082: BLKS(0x0C19F082u);
	IF(0x0C19F082u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); r0 = 0xC800E9E6u; /* slot mov.l @(disp,pc),Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C19F082 jmp @Rn */
}

void f_0C19F094(sh3_t *c)
{
	LOCALS;
L_0C19F094: BLKS(0x0C19F094u);
	IF(0x0C19F094u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); r0 = 0x402Au; /* slot mov.l @(disp,pc),Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C19F094 jmp @Rn */
}

void f_0C19F0A6(sh3_t *c)
{
	LOCALS;
L_0C19F0A6: BLKS(0x0C19F0A6u);
	IF(0x0C19F0A6u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); r0 = 0x4029u; /* slot mov.l @(disp,pc),Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C19F0A6 jmp @Rn */
}

void f_0C19F0B8(sh3_t *c)
{
	LOCALS;
L_0C19F0B8: BLKS(0x0C19F0B8u);
	IF(0x0C19F0B8u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); r0 = 0xD0E84747u; /* slot mov.l @(disp,pc),Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C19F0B8 jmp @Rn */
}

void f_0C19F136(sh3_t *c)
{
	LOCALS;
L_0C19F136: BLKS(0x0C19F136u);
	IF(0x0C19F136u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); r0 += 0x0u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C19F136 jmp @Rn */
}

void f_0C19F148(sh3_t *c)
{
	LOCALS;
L_0C19F148: BLKS(0x0C19F148u);
	IF(0x0C19F148u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); r0 += 0x28u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C19F148 jmp @Rn */
}

void f_0C19F15A(sh3_t *c)
{
	LOCALS;
L_0C19F15A: BLKS(0x0C19F15Au);
	IF(0x0C19F15Au); { u32 tv_ = r0; u32 t_ = PHYS(tv_); r0 += 0x50u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C19F15A jmp @Rn */
}

void f_0C19F16C(sh3_t *c)
{
	LOCALS;
L_0C19F16C: BLKS(0x0C19F16Cu);
	IF(0x0C19F16Cu); { u32 tv_ = r0; u32 t_ = PHYS(tv_); r0 += 0x78u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C19F16C jmp @Rn */
}

void f_0C1A0FEE(sh3_t *c)
{
	LOCALS;
L_0C1A0FEE: BLKS(0x0C1A0FEEu);
	IF(0x0C1A0FEEu); { u32 t_ = PR; W8(c->gbr + 0x0u, r0); /* slot mov.b r0,@(disp,gbr) */ UPD(t_, 3); RET(t_); }  /* 0C1A0FEE rts */
}

void f_0C1A0FF8(sh3_t *c)
{
	LOCALS;
L_0C1A0FF8: BLKS(0x0C1A0FF8u);
	IF(0x0C1A0FF8u); { u32 t_ = PR; W8(c->gbr + 0x40u, r0); /* slot mov.b r0,@(disp,gbr) */ UPD(t_, 3); RET(t_); }  /* 0C1A0FF8 rts */
}

void f_0C1A1002(sh3_t *c)
{
	LOCALS;
L_0C1A1002: BLKS(0x0C1A1002u);
	IF(0x0C1A1002u); { u32 t_ = PR; W8(c->gbr + 0x80u, r0); /* slot mov.b r0,@(disp,gbr) */ UPD(t_, 3); RET(t_); }  /* 0C1A1002 rts */
}

void f_0C1A100C(sh3_t *c)
{
	LOCALS;
L_0C1A100C: BLKS(0x0C1A100Cu);
	IF(0x0C1A100Cu); { u32 t_ = PR; W8(c->gbr + 0xC0u, r0); /* slot mov.b r0,@(disp,gbr) */ UPD(t_, 3); RET(t_); }  /* 0C1A100C rts */
}

void f_0C1A1016(sh3_t *c)
{
	LOCALS;
L_0C1A1016: BLKS(0x0C1A1016u);
	IF(0x0C1A1016u); { u32 t_ = PR; W8(r0 + 0x0u, r0); /* slot mov.b r0,@(disp,Rn) */ UPD(t_, 3); RET(t_); }  /* 0C1A1016 rts */
}

void f_0C1A1020(sh3_t *c)
{
	LOCALS;
L_0C1A1020: BLKS(0x0C1A1020u);
	IF(0x0C1A1020u); { u32 t_ = PR; W8(r4 + 0x0u, r0); /* slot mov.b r0,@(disp,Rn) */ UPD(t_, 3); RET(t_); }  /* 0C1A1020 rts */
}

void f_0C1A102A(sh3_t *c)
{
	LOCALS;
L_0C1A102A: BLKS(0x0C1A102Au);
	IF(0x0C1A102Au); { u32 t_ = PR; W8(r8 + 0x0u, r0); /* slot mov.b r0,@(disp,Rn) */ UPD(t_, 3); RET(t_); }  /* 0C1A102A rts */
}

void f_0C1A1034(sh3_t *c)
{
	LOCALS;
L_0C1A1034: BLKS(0x0C1A1034u);
	IF(0x0C1A1034u); { u32 t_ = PR; W8(r12 + 0x0u, r0); /* slot mov.b r0,@(disp,Rn) */ UPD(t_, 3); RET(t_); }  /* 0C1A1034 rts */
}

void f_0C1A103E(sh3_t *c)
{
	LOCALS;
L_0C1A103E: BLKS(0x0C1A103Eu);
	IF(0x0C1A103Eu); { u32 t_ = PR; IF(0x0C1A1040u); T = r0 >> 31; r0 <<= 1; /* slot shll Rn */ UPD(t_, 3); RET(t_); }  /* 0C1A103E rts */
}

void f_0C1A7CFC(sh3_t *c)
{
	LOCALS;
L_0C1A7CFC: BLKS(0x0C1A7CFCu);
	IF(0x0C1A7CFCu); { u32 t_ = PR; r0 += 0x0u; /* slot add #imm,Rn */ UPD(t_, 3); RET(t_); }  /* 0C1A7CFC rts */
}

void f_0C1A7D06(sh3_t *c)
{
	LOCALS;
L_0C1A7D06: BLKS(0x0C1A7D06u);
	IF(0x0C1A7D06u); { u32 t_ = PR; r0 += 0x50u; /* slot add #imm,Rn */ UPD(t_, 3); RET(t_); }  /* 0C1A7D06 rts */
}

void f_0C1A7D10(sh3_t *c)
{
	LOCALS;
L_0C1A7D10: BLKS(0x0C1A7D10u);
	IF(0x0C1A7D10u); { u32 t_ = PR; r0 += 0xFFFFFFA0u; /* slot add #imm,Rn */ UPD(t_, 3); RET(t_); }  /* 0C1A7D10 rts */
}

void f_0C1A7D1A(sh3_t *c)
{
	LOCALS;
L_0C1A7D1A: BLKS(0x0C1A7D1Au);
	IF(0x0C1A7D1Au); { u32 t_ = PR; W8(r8, r0); /* slot mov.b Rm,@Rn */ UPD(t_, 3); RET(t_); }  /* 0C1A7D1A rts */
}

void f_0C1A7D24(sh3_t *c)
{
	LOCALS;
L_0C1A7D24: BLKS(0x0C1A7D24u);
	IF(0x0C1A7D24u); { u32 t_ = PR; W8(r8, r5); /* slot mov.b Rm,@Rn */ UPD(t_, 3); RET(t_); }  /* 0C1A7D24 rts */
}

void f_0C1A7D2E(sh3_t *c)
{
	LOCALS;
L_0C1A7D2E: BLKS(0x0C1A7D2Eu);
	IF(0x0C1A7D2Eu); { u32 t_ = PR; W8(r8, r10); /* slot mov.b Rm,@Rn */ UPD(t_, 3); RET(t_); }  /* 0C1A7D2E rts */
}

void f_0C1AE134(sh3_t *c)
{
	LOCALS;
L_0C1AE134: BLKS(0x0C1AE134u);
	IF(0x0C1AE134u); { u32 t_ = PR; IF(0x0C1AE136u); T = r0 >> 31; r0 <<= 1; /* slot shll Rn */ UPD(t_, 3); RET(t_); }  /* 0C1AE134 rts */
}

void f_0C1AF2D0(sh3_t *c)
{
	LOCALS;
L_0C1AF2D0: BLKS(0x0C1AF2D0u);
	IF(0x0C1AF2D0u); { u32 t_ = PR; W8(r0, r0); /* slot mov.b Rm,@Rn */ UPD(t_, 3); RET(t_); }  /* 0C1AF2D0 rts */
}

void f_0C1AF2DA(sh3_t *c)
{
	LOCALS;
L_0C1AF2DA: BLKS(0x0C1AF2DAu);
	IF(0x0C1AF2DAu); { u32 t_ = PR; T = (r0 & r2) == 0; /* slot tst Rm,Rn */ UPD(t_, 3); RET(t_); }  /* 0C1AF2DA rts */
}

void f_0C1AF2E4(sh3_t *c)
{
	LOCALS;
L_0C1AF2E4: BLKS(0x0C1AF2E4u);
	IF(0x0C1AF2E4u); { u32 t_ = PR; W8(r0, r5); /* slot mov.b Rm,@Rn */ UPD(t_, 3); RET(t_); }  /* 0C1AF2E4 rts */
}

void f_0C1AF2EE(sh3_t *c)
{
	LOCALS;
L_0C1AF2EE: BLKS(0x0C1AF2EEu);
	IF(0x0C1AF2EEu); { u32 t_ = PR; T = (r0 & r7) == 0; /* slot tst Rm,Rn */ UPD(t_, 3); RET(t_); }  /* 0C1AF2EE rts */
}

void f_0C1AF2F8(sh3_t *c)
{
	LOCALS;
L_0C1AF2F8: BLKS(0x0C1AF2F8u);
	IF(0x0C1AF2F8u); { u32 t_ = PR; W8(r0, r10); /* slot mov.b Rm,@Rn */ UPD(t_, 3); RET(t_); }  /* 0C1AF2F8 rts */
}

void f_0C1AF302(sh3_t *c)
{
	LOCALS;
L_0C1AF302: BLKS(0x0C1AF302u);
	IF(0x0C1AF302u); { u32 t_ = PR; T = (r0 & r12) == 0; /* slot tst Rm,Rn */ UPD(t_, 3); RET(t_); }  /* 0C1AF302 rts */
}

void f_0C1AF316(sh3_t *c)
{
	LOCALS;
L_0C1AF316: BLKS(0x0C1AF316u);
	IF(0x0C1AF316u); { u32 t_ = PR; IF(0x0C1AF318u); MACH = 0; MACL = 0; /* slot clrmac */ UPD(t_, 3); RET(t_); }  /* 0C1AF316 rts */
}

void f_0C1B0872(sh3_t *c)
{
	LOCALS;
L_0C1B0872: BLKS(0x0C1B0872u);
	IF(0x0C1B0872u); { u32 t_ = PR; r0 += 0x0u; /* slot add #imm,Rn */ UPD(t_, 3); RET(t_); }  /* 0C1B0872 rts */
}


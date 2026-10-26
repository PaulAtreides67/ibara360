#include "recomp.h"
#include "blk_recomp_funcs.h"

void blk_f_0C1A85F4(sh3_t *c)
{
	LOCALS;
L_0C1A85F4: BLKS(0x0C1A85F4u);
	IF(0x0C1A85F4u); { u32 t_ = PR; T = (r0 & 0x60u) == 0; /* slot tst #imm,r0 */ UPD(t_, 3); RET(t_); }  /* 0C1A85F4 rts */
}

void blk_f_0C1A85FE(sh3_t *c)
{
	LOCALS;
L_0C1A85FE: BLKS(0x0C1A85FEu);
	IF(0x0C1A85FEu); { u32 t_ = PR; T = (r0 & 0x90u) == 0; /* slot tst #imm,r0 */ UPD(t_, 3); RET(t_); }  /* 0C1A85FE rts */
}

void blk_f_0C1A8608(sh3_t *c)
{
	LOCALS;
L_0C1A8608: BLKS(0x0C1A8608u);
	IF(0x0C1A8608u); { u32 t_ = PR; T = (r0 & 0xC0u) == 0; /* slot tst #imm,r0 */ UPD(t_, 3); RET(t_); }  /* 0C1A8608 rts */
}

void blk_f_0C1A8612(sh3_t *c)
{
	LOCALS;
L_0C1A8612: BLKS(0x0C1A8612u);
	IF(0x0C1A8612u); { u32 t_ = PR; r0 = 0x372Fu; /* slot mov.w @(disp,pc),Rn */ UPD(t_, 3); RET(t_); }  /* 0C1A8612 rts */
}

void blk_f_0C1A861C(sh3_t *c)
{
	LOCALS;
L_0C1A861C: BLKS(0x0C1A861Cu);
	IF(0x0C1A861Cu); { u32 t_ = PR; r0 = 0x2030u; /* slot mov.w @(disp,pc),Rn */ UPD(t_, 3); RET(t_); }  /* 0C1A861C rts */
}

void blk_f_0C1A8626(sh3_t *c)
{
	LOCALS;
L_0C1A8626: BLKS(0x0C1A8626u);
	IF(0x0C1A8626u); { u32 t_ = PR; r0 = 0x0u; /* slot mov.w @(disp,pc),Rn */ UPD(t_, 3); RET(t_); }  /* 0C1A8626 rts */
}

void blk_f_0C1A8630(sh3_t *c)
{
	LOCALS;
L_0C1A8630: BLKS(0x0C1A8630u);
	IF(0x0C1A8630u); { u32 t_ = PR; r0 = 0xFFFFE4E8u; /* slot mov.w @(disp,pc),Rn */ UPD(t_, 3); RET(t_); }  /* 0C1A8630 rts */
}

void blk_f_0C1A863A(sh3_t *c)
{
	LOCALS;
L_0C1A863A: BLKS(0x0C1A863Au);
	IF(0x0C1A863Au); { u32 t_ = PR; r0 = 0x13u; /* slot mov.w @(disp,pc),Rn */ UPD(t_, 3); RET(t_); }  /* 0C1A863A rts */
}

void blk_f_0C1A8644(sh3_t *c)
{
	LOCALS;
L_0C1A8644: BLKS(0x0C1A8644u);
	IF(0x0C1A8644u); { u32 t_ = PR; r8 = R32(r0 + 0x0u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); RET(t_); }  /* 0C1A8644 rts */
}

void blk_f_0C1A864E(sh3_t *c)
{
	LOCALS;
L_0C1A864E: BLKS(0x0C1A864Eu);
	IF(0x0C1A864Eu); { u32 t_ = PR; r8 = R32(r3 + 0x0u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); RET(t_); }  /* 0C1A864E rts */
}

void blk_f_0C1A8658(sh3_t *c)
{
	LOCALS;
L_0C1A8658: BLKS(0x0C1A8658u);
	IF(0x0C1A8658u); { u32 t_ = PR; r8 = R32(r6 + 0x0u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); RET(t_); }  /* 0C1A8658 rts */
}

void blk_f_0C1A8662(sh3_t *c)
{
	LOCALS;
L_0C1A8662: BLKS(0x0C1A8662u);
	IF(0x0C1A8662u); { u32 t_ = PR; r8 = R32(r9 + 0x0u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); RET(t_); }  /* 0C1A8662 rts */
}

void blk_f_0C1A866C(sh3_t *c)
{
	LOCALS;
L_0C1A866C: BLKS(0x0C1A866Cu);
	IF(0x0C1A866Cu); { u32 t_ = PR; r8 = R32(r12 + 0x0u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); RET(t_); }  /* 0C1A866C rts */
}

void blk_f_0C1A8676(sh3_t *c)
{
	LOCALS;
L_0C1A8676: BLKS(0x0C1A8676u);
	IF(0x0C1A8676u); { u32 t_ = PR; W8(r0, r0); /* slot mov.b Rm,@Rn */ UPD(t_, 3); RET(t_); }  /* 0C1A8676 rts */
}

void blk_f_0C1A868A(sh3_t *c)
{
	LOCALS;
L_0C1A868A: BLKS(0x0C1A868Au);
	IF(0x0C1A868Au); { u32 t_ = PR; W8(r0, r6); /* slot mov.b Rm,@Rn */ UPD(t_, 3); RET(t_); }  /* 0C1A868A rts */
}

void blk_f_0C1A8694(sh3_t *c)
{
	LOCALS;
L_0C1A8694: BLKS(0x0C1A8694u);
	IF(0x0C1A8694u); { u32 t_ = PR; W8(r0, r9); /* slot mov.b Rm,@Rn */ UPD(t_, 3); RET(t_); }  /* 0C1A8694 rts */
}

void blk_f_0C1A869E(sh3_t *c)
{
	LOCALS;
L_0C1A869E: BLKS(0x0C1A869Eu);
	IF(0x0C1A869Eu); { u32 t_ = PR; W8(r0, r12); /* slot mov.b Rm,@Rn */ UPD(t_, 3); RET(t_); }  /* 0C1A869E rts */
}

void blk_f_0C1AC14A(sh3_t *c)
{
	LOCALS;
L_0C1AC14A: BLKS(0x0C1AC14Au);
	IF(0x0C1AC14Au); { u32 tv_ = (r0 + 0x0C1AC14Eu); u32 t_ = PHYS(tv_); T = (r0 & 0x0u) == 0; /* slot tst #imm,r0 */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C1AC14A braf Rn */
}

void blk_f_0C1AC15C(sh3_t *c)
{
	LOCALS;
L_0C1AC15C: BLKS(0x0C1AC15Cu);
	IF(0x0C1AC15Cu); { u32 tv_ = (r0 + 0x0C1AC160u); u32 t_ = PHYS(tv_); T = (r0 & 0x30u) == 0; /* slot tst #imm,r0 */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C1AC15C braf Rn */
}

void blk_f_0C1AC16E(sh3_t *c)
{
	LOCALS;
L_0C1AC16E: BLKS(0x0C1AC16Eu);
	IF(0x0C1AC16Eu); { u32 tv_ = (r0 + 0x0C1AC172u); u32 t_ = PHYS(tv_); T = (r0 & 0x60u) == 0; /* slot tst #imm,r0 */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C1AC16E braf Rn */
}

void blk_f_0C1AC180(sh3_t *c)
{
	LOCALS;
L_0C1AC180: BLKS(0x0C1AC180u);
	IF(0x0C1AC180u); { u32 tv_ = (r0 + 0x0C1AC184u); u32 t_ = PHYS(tv_); T = (r0 & 0x90u) == 0; /* slot tst #imm,r0 */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C1AC180 braf Rn */
}

void blk_f_0C1AC192(sh3_t *c)
{
	LOCALS;
L_0C1AC192: BLKS(0x0C1AC192u);
	IF(0x0C1AC192u); { u32 tv_ = (r0 + 0x0C1AC196u); u32 t_ = PHYS(tv_); T = (r0 & 0xC0u) == 0; /* slot tst #imm,r0 */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C1AC192 braf Rn */
}

void blk_f_0C1AC1A4(sh3_t *c)
{
	LOCALS;
L_0C1AC1A4: BLKS(0x0C1AC1A4u);
	IF(0x0C1AC1A4u); { u32 tv_ = (r0 + 0x0C1AC1A8u); u32 t_ = PHYS(tv_); r0 = 0x372Fu; /* slot mov.w @(disp,pc),Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C1AC1A4 braf Rn */
}

void blk_f_0C1AC1B6(sh3_t *c)
{
	LOCALS;
L_0C1AC1B6: BLKS(0x0C1AC1B6u);
	IF(0x0C1AC1B6u); { u32 tv_ = (r0 + 0x0C1AC1BAu); u32 t_ = PHYS(tv_); r0 = 0xFFFFD0E8u; /* slot mov.w @(disp,pc),Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C1AC1B6 braf Rn */
}

void blk_f_0C1AC1C8(sh3_t *c)
{
	LOCALS;
L_0C1AC1C8: BLKS(0x0C1AC1C8u);
	IF(0x0C1AC1C8u); { u32 tv_ = (r0 + 0x0C1AC1CCu); u32 t_ = PHYS(tv_); r0 = 0x24u; /* slot mov.w @(disp,pc),Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C1AC1C8 braf Rn */
}

void blk_f_0C1AC9BA(sh3_t *c)
{
	LOCALS;
L_0C1AC9BA: BLKS(0x0C1AC9BAu);
	IF(0x0C1AC9BAu); { u32 t_ = c->spc; SET_SR(c->ssr); r0 = 0x2F272018u; /* slot mov.l @(disp,pc),Rn */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C1AC9BA rte */
}

void blk_f_0C1AC9CC(sh3_t *c)
{
	LOCALS;
L_0C1AC9CC: BLKS(0x0C1AC9CCu);
	IF(0x0C1AC9CCu); { u32 t_ = c->spc; SET_SR(c->ssr); r0 = 0xA0A0ECEBu; /* slot mov.l @(disp,pc),Rn */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C1AC9CC rte */
}

void blk_f_0C1AC9DE(sh3_t *c)
{
	LOCALS;
L_0C1AC9DE: BLKS(0x0C1AC9DEu);
	IF(0x0C1AC9DEu); { u32 t_ = c->spc; SET_SR(c->ssr); r0 = 0x4050EBECu; /* slot mov.l @(disp,pc),Rn */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C1AC9DE rte */
}

void blk_f_0C1AC9F0(sh3_t *c)
{
	LOCALS;
L_0C1AC9F0: BLKS(0x0C1AC9F0u);
	IF(0x0C1AC9F0u); { u32 t_ = c->spc; SET_SR(c->ssr); r0 = 0x2Cu; /* slot mov.l @(disp,pc),Rn */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C1AC9F0 rte */
}

void blk_f_0C1ACA02(sh3_t *c)
{
	LOCALS;
L_0C1ACA02: BLKS(0x0C1ACA02u);
	IF(0x0C1ACA02u); { u32 t_ = c->spc; SET_SR(c->ssr); r0 = 0x402Bu; /* slot mov.l @(disp,pc),Rn */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C1ACA02 rte */
}

void blk_f_0C1ACA14(sh3_t *c)
{
	LOCALS;
L_0C1ACA14: BLKS(0x0C1ACA14u);
	IF(0x0C1ACA14u); { u32 t_ = c->spc; SET_SR(c->ssr); r0 = 0xD0E84747u; /* slot mov.l @(disp,pc),Rn */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C1ACA14 rte */
}

void blk_f_0C1ACA92(sh3_t *c)
{
	LOCALS;
L_0C1ACA92: BLKS(0x0C1ACA92u);
	IF(0x0C1ACA92u); { u32 t_ = c->spc; SET_SR(c->ssr); r0 += 0x0u; /* slot add #imm,Rn */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C1ACA92 rte */
}

void blk_f_0C1ACAA4(sh3_t *c)
{
	LOCALS;
L_0C1ACAA4: BLKS(0x0C1ACAA4u);
	IF(0x0C1ACAA4u); { u32 t_ = c->spc; SET_SR(c->ssr); r0 += 0x28u; /* slot add #imm,Rn */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C1ACAA4 rte */
}

void blk_f_0C1ACAB6(sh3_t *c)
{
	LOCALS;
L_0C1ACAB6: BLKS(0x0C1ACAB6u);
	IF(0x0C1ACAB6u); { u32 t_ = c->spc; SET_SR(c->ssr); r0 += 0x50u; /* slot add #imm,Rn */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C1ACAB6 rte */
}

void blk_f_0C1ACAC8(sh3_t *c)
{
	LOCALS;
L_0C1ACAC8: BLKS(0x0C1ACAC8u);
	IF(0x0C1ACAC8u); { u32 t_ = c->spc; SET_SR(c->ssr); r0 += 0x78u; /* slot add #imm,Rn */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C1ACAC8 rte */
}

void blk_f_0C1ACADA(sh3_t *c)
{
	LOCALS;
L_0C1ACADA: BLKS(0x0C1ACADAu);
	IF(0x0C1ACADAu); { u32 t_ = c->spc; SET_SR(c->ssr); r0 += 0xFFFFFFA0u; /* slot add #imm,Rn */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C1ACADA rte */
}

void blk_f_0C1ACAEC(sh3_t *c)
{
	LOCALS;
L_0C1ACAEC: BLKS(0x0C1ACAECu);
	IF(0x0C1ACAECu); { u32 t_ = c->spc; SET_SR(c->ssr); r0 += 0xFFFFFFC8u; /* slot add #imm,Rn */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C1ACAEC rte */
}

void blk_f_0C1ACAFE(sh3_t *c)
{
	LOCALS;
L_0C1ACAFE: BLKS(0x0C1ACAFEu);
	IF(0x0C1ACAFEu); { u32 t_ = c->spc; SET_SR(c->ssr); IF(0x0C1ACB00u); T = r0 >> 31; r0 <<= 1; /* slot shll Rn */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C1ACAFE rte */
}

void blk_f_0C1ACB10(sh3_t *c)
{
	LOCALS;
L_0C1ACB10: BLKS(0x0C1ACB10u);
	IF(0x0C1ACB10u); { u32 t_ = c->spc; SET_SR(c->ssr); IF(0x0C1ACB12u); r0 <<= 16; /* slot shll16 Rn */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C1ACB10 rte */
}

void blk_f_0C1ACB6A(sh3_t *c)
{
	LOCALS;
L_0C1ACB6A: BLKS(0x0C1ACB6Au);
	IF(0x0C1ACB6Au); { u32 t_ = c->spc; SET_SR(c->ssr); W32(r0 + 0x0u, r0); /* slot mov.l Rm,@(disp,Rn) */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C1ACB6A rte */
}


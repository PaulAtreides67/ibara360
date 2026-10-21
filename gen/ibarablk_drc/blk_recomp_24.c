#include "recomp.h"
#include "blk_recomp_funcs.h"

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

void blk_f_0C1ACB7C(sh3_t *c)
{
	LOCALS;
L_0C1ACB7C: BLKS(0x0C1ACB7Cu);
	IF(0x0C1ACB7Cu); { u32 t_ = c->spc; SET_SR(c->ssr); W32(r0 + 0x20u, r2); /* slot mov.l Rm,@(disp,Rn) */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C1ACB7C rte */
}

void blk_f_0C1ACB8E(sh3_t *c)
{
	LOCALS;
L_0C1ACB8E: BLKS(0x0C1ACB8Eu);
	IF(0x0C1ACB8Eu); { u32 t_ = c->spc; SET_SR(c->ssr); W32(r0 + 0x0u, r5); /* slot mov.l Rm,@(disp,Rn) */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C1ACB8E rte */
}

void blk_f_0C1ACBA0(sh3_t *c)
{
	LOCALS;
L_0C1ACBA0: BLKS(0x0C1ACBA0u);
	IF(0x0C1ACBA0u); { u32 t_ = c->spc; SET_SR(c->ssr); W32(r0 + 0x20u, r7); /* slot mov.l Rm,@(disp,Rn) */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C1ACBA0 rte */
}

void blk_f_0C1ACBB2(sh3_t *c)
{
	LOCALS;
L_0C1ACBB2: BLKS(0x0C1ACBB2u);
	IF(0x0C1ACBB2u); { u32 t_ = c->spc; SET_SR(c->ssr); W32(r0 + 0x0u, r10); /* slot mov.l Rm,@(disp,Rn) */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C1ACBB2 rte */
}

void blk_f_0C1ACBC4(sh3_t *c)
{
	LOCALS;
L_0C1ACBC4: BLKS(0x0C1ACBC4u);
	IF(0x0C1ACBC4u); { u32 t_ = c->spc; SET_SR(c->ssr); W32(r0 + 0x20u, r12); /* slot mov.l Rm,@(disp,Rn) */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C1ACBC4 rte */
}

void blk_f_0C1ACBFA(sh3_t *c)
{
	LOCALS;
L_0C1ACBFA: BLKS(0x0C1ACBFAu);
	IF(0x0C1ACBFAu); { u32 tv_ = r0; u32 t_ = PHYS(tv_); r0 = 0x2F272018u; /* slot mov.l @(disp,pc),Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C1ACBFA jmp @Rn */
}

void blk_f_0C1ACC0C(sh3_t *c)
{
	LOCALS;
L_0C1ACC0C: BLKS(0x0C1ACC0Cu);
	IF(0x0C1ACC0Cu); { u32 tv_ = r0; u32 t_ = PHYS(tv_); r0 = 0xA0A0ECEBu; /* slot mov.l @(disp,pc),Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C1ACC0C jmp @Rn */
}

void blk_f_0C1ACC1E(sh3_t *c)
{
	LOCALS;
L_0C1ACC1E: BLKS(0x0C1ACC1Eu);
	IF(0x0C1ACC1Eu); { u32 tv_ = r0; u32 t_ = PHYS(tv_); r0 = 0xC800E9E6u; /* slot mov.l @(disp,pc),Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C1ACC1E jmp @Rn */
}

void blk_f_0C1ACC30(sh3_t *c)
{
	LOCALS;
L_0C1ACC30: BLKS(0x0C1ACC30u);
	IF(0x0C1ACC30u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); r0 = 0x402Au; /* slot mov.l @(disp,pc),Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C1ACC30 jmp @Rn */
}

void blk_f_0C1ACC42(sh3_t *c)
{
	LOCALS;
L_0C1ACC42: BLKS(0x0C1ACC42u);
	IF(0x0C1ACC42u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); r0 = 0x4029u; /* slot mov.l @(disp,pc),Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C1ACC42 jmp @Rn */
}

void blk_f_0C1ACC54(sh3_t *c)
{
	LOCALS;
L_0C1ACC54: BLKS(0x0C1ACC54u);
	IF(0x0C1ACC54u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); r0 = 0xD0E84747u; /* slot mov.l @(disp,pc),Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C1ACC54 jmp @Rn */
}

void blk_f_0C1ACCD2(sh3_t *c)
{
	LOCALS;
L_0C1ACCD2: BLKS(0x0C1ACCD2u);
	IF(0x0C1ACCD2u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); r0 += 0x0u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C1ACCD2 jmp @Rn */
}

void blk_f_0C1ACCE4(sh3_t *c)
{
	LOCALS;
L_0C1ACCE4: BLKS(0x0C1ACCE4u);
	IF(0x0C1ACCE4u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); r0 += 0x28u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C1ACCE4 jmp @Rn */
}

void blk_f_0C1ACCF6(sh3_t *c)
{
	LOCALS;
L_0C1ACCF6: BLKS(0x0C1ACCF6u);
	IF(0x0C1ACCF6u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); r0 += 0x50u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C1ACCF6 jmp @Rn */
}

void blk_f_0C1ACD08(sh3_t *c)
{
	LOCALS;
L_0C1ACD08: BLKS(0x0C1ACD08u);
	IF(0x0C1ACD08u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); r0 += 0x78u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C1ACD08 jmp @Rn */
}

void blk_f_0C1AE54A(sh3_t *c)
{
	LOCALS;
L_0C1AE54A: BLKS(0x0C1AE54Au);
	IF(0x0C1AE54Au); { u32 tv_ = (r0 + 0x0C1AE54Eu); u32 t_ = PHYS(tv_); T = (r0 & 0x0u) == 0; /* slot tst #imm,r0 */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C1AE54A braf Rn */
}

void blk_f_0C1AE55C(sh3_t *c)
{
	LOCALS;
L_0C1AE55C: BLKS(0x0C1AE55Cu);
	IF(0x0C1AE55Cu); { u32 tv_ = (r0 + 0x0C1AE560u); u32 t_ = PHYS(tv_); T = (r0 & 0x30u) == 0; /* slot tst #imm,r0 */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C1AE55C braf Rn */
}

void blk_f_0C1AE56E(sh3_t *c)
{
	LOCALS;
L_0C1AE56E: BLKS(0x0C1AE56Eu);
	IF(0x0C1AE56Eu); { u32 tv_ = (r0 + 0x0C1AE572u); u32 t_ = PHYS(tv_); T = (r0 & 0x60u) == 0; /* slot tst #imm,r0 */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C1AE56E braf Rn */
}

void blk_f_0C1AE580(sh3_t *c)
{
	LOCALS;
L_0C1AE580: BLKS(0x0C1AE580u);
	IF(0x0C1AE580u); { u32 tv_ = (r0 + 0x0C1AE584u); u32 t_ = PHYS(tv_); T = (r0 & 0x90u) == 0; /* slot tst #imm,r0 */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C1AE580 braf Rn */
}

void blk_f_0C1AE592(sh3_t *c)
{
	LOCALS;
L_0C1AE592: BLKS(0x0C1AE592u);
	IF(0x0C1AE592u); { u32 tv_ = (r0 + 0x0C1AE596u); u32 t_ = PHYS(tv_); T = (r0 & 0xC0u) == 0; /* slot tst #imm,r0 */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C1AE592 braf Rn */
}

void blk_f_0C1AE5A4(sh3_t *c)
{
	LOCALS;
L_0C1AE5A4: BLKS(0x0C1AE5A4u);
	IF(0x0C1AE5A4u); { u32 tv_ = (r0 + 0x0C1AE5A8u); u32 t_ = PHYS(tv_); r0 = 0x372Fu; /* slot mov.w @(disp,pc),Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C1AE5A4 braf Rn */
}

void blk_f_0C1AE5B6(sh3_t *c)
{
	LOCALS;
L_0C1AE5B6: BLKS(0x0C1AE5B6u);
	IF(0x0C1AE5B6u); { u32 tv_ = (r0 + 0x0C1AE5BAu); u32 t_ = PHYS(tv_); r0 = 0xFFFFD0E8u; /* slot mov.w @(disp,pc),Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C1AE5B6 braf Rn */
}


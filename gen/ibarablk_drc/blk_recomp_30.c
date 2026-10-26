#include "recomp.h"
#include "blk_recomp_funcs.h"

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

void blk_f_0C1AE5C8(sh3_t *c)
{
	LOCALS;
L_0C1AE5C8: BLKS(0x0C1AE5C8u);
	IF(0x0C1AE5C8u); { u32 tv_ = (r0 + 0x0C1AE5CCu); u32 t_ = PHYS(tv_); r0 = 0x24u; /* slot mov.w @(disp,pc),Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C1AE5C8 braf Rn */
}

void blk_f_0C1AEDBA(sh3_t *c)
{
	LOCALS;
L_0C1AEDBA: BLKS(0x0C1AEDBAu);
	IF(0x0C1AEDBAu); { u32 t_ = c->spc; SET_SR(c->ssr); r0 = 0x2F27202Cu; /* slot mov.l @(disp,pc),Rn */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C1AEDBA rte */
}

void blk_f_0C1AEDCC(sh3_t *c)
{
	LOCALS;
L_0C1AEDCC: BLKS(0x0C1AEDCCu);
	IF(0x0C1AEDCCu); { u32 t_ = c->spc; SET_SR(c->ssr); r0 = 0xA0A0ECEBu; /* slot mov.l @(disp,pc),Rn */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C1AEDCC rte */
}

void blk_f_0C1AEDDE(sh3_t *c)
{
	LOCALS;
L_0C1AEDDE: BLKS(0x0C1AEDDEu);
	IF(0x0C1AEDDEu); { u32 t_ = c->spc; SET_SR(c->ssr); r0 = 0x4050EBECu; /* slot mov.l @(disp,pc),Rn */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C1AEDDE rte */
}

void blk_f_0C1AEDF0(sh3_t *c)
{
	LOCALS;
L_0C1AEDF0: BLKS(0x0C1AEDF0u);
	IF(0x0C1AEDF0u); { u32 t_ = c->spc; SET_SR(c->ssr); r0 = 0x2Cu; /* slot mov.l @(disp,pc),Rn */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C1AEDF0 rte */
}

void blk_f_0C1AEE02(sh3_t *c)
{
	LOCALS;
L_0C1AEE02: BLKS(0x0C1AEE02u);
	IF(0x0C1AEE02u); { u32 t_ = c->spc; SET_SR(c->ssr); r0 = 0x402Bu; /* slot mov.l @(disp,pc),Rn */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C1AEE02 rte */
}

void blk_f_0C1AEE14(sh3_t *c)
{
	LOCALS;
L_0C1AEE14: BLKS(0x0C1AEE14u);
	IF(0x0C1AEE14u); { u32 t_ = c->spc; SET_SR(c->ssr); r0 = 0xD0E84747u; /* slot mov.l @(disp,pc),Rn */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C1AEE14 rte */
}

void blk_f_0C1AEE92(sh3_t *c)
{
	LOCALS;
L_0C1AEE92: BLKS(0x0C1AEE92u);
	IF(0x0C1AEE92u); { u32 t_ = c->spc; SET_SR(c->ssr); r0 += 0x0u; /* slot add #imm,Rn */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C1AEE92 rte */
}

void blk_f_0C1AEEA4(sh3_t *c)
{
	LOCALS;
L_0C1AEEA4: BLKS(0x0C1AEEA4u);
	IF(0x0C1AEEA4u); { u32 t_ = c->spc; SET_SR(c->ssr); r0 += 0x28u; /* slot add #imm,Rn */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C1AEEA4 rte */
}

void blk_f_0C1AEEB6(sh3_t *c)
{
	LOCALS;
L_0C1AEEB6: BLKS(0x0C1AEEB6u);
	IF(0x0C1AEEB6u); { u32 t_ = c->spc; SET_SR(c->ssr); r0 += 0x50u; /* slot add #imm,Rn */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C1AEEB6 rte */
}

void blk_f_0C1AEEC8(sh3_t *c)
{
	LOCALS;
L_0C1AEEC8: BLKS(0x0C1AEEC8u);
	IF(0x0C1AEEC8u); { u32 t_ = c->spc; SET_SR(c->ssr); r0 += 0x78u; /* slot add #imm,Rn */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C1AEEC8 rte */
}

void blk_f_0C1AEEDA(sh3_t *c)
{
	LOCALS;
L_0C1AEEDA: BLKS(0x0C1AEEDAu);
	IF(0x0C1AEEDAu); { u32 t_ = c->spc; SET_SR(c->ssr); r0 += 0xFFFFFFA0u; /* slot add #imm,Rn */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C1AEEDA rte */
}

void blk_f_0C1AEEEC(sh3_t *c)
{
	LOCALS;
L_0C1AEEEC: BLKS(0x0C1AEEECu);
	IF(0x0C1AEEECu); { u32 t_ = c->spc; SET_SR(c->ssr); r0 += 0xFFFFFFC8u; /* slot add #imm,Rn */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C1AEEEC rte */
}

void blk_f_0C1AEEFE(sh3_t *c)
{
	LOCALS;
L_0C1AEEFE: BLKS(0x0C1AEEFEu);
	IF(0x0C1AEEFEu); { u32 t_ = c->spc; SET_SR(c->ssr); IF(0x0C1AEF00u); T = r0 >> 31; r0 <<= 1; /* slot shll Rn */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C1AEEFE rte */
}

void blk_f_0C1AEF10(sh3_t *c)
{
	LOCALS;
L_0C1AEF10: BLKS(0x0C1AEF10u);
	IF(0x0C1AEF10u); { u32 t_ = c->spc; SET_SR(c->ssr); IF(0x0C1AEF12u); r0 <<= 16; /* slot shll16 Rn */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C1AEF10 rte */
}

void blk_f_0C1AEF6A(sh3_t *c)
{
	LOCALS;
L_0C1AEF6A: BLKS(0x0C1AEF6Au);
	IF(0x0C1AEF6Au); { u32 t_ = c->spc; SET_SR(c->ssr); W32(r0 + 0x0u, r0); /* slot mov.l Rm,@(disp,Rn) */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C1AEF6A rte */
}

void blk_f_0C1AEF7C(sh3_t *c)
{
	LOCALS;
L_0C1AEF7C: BLKS(0x0C1AEF7Cu);
	IF(0x0C1AEF7Cu); { u32 t_ = c->spc; SET_SR(c->ssr); W32(r0 + 0x20u, r2); /* slot mov.l Rm,@(disp,Rn) */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C1AEF7C rte */
}

void blk_f_0C1AEF8E(sh3_t *c)
{
	LOCALS;
L_0C1AEF8E: BLKS(0x0C1AEF8Eu);
	IF(0x0C1AEF8Eu); { u32 t_ = c->spc; SET_SR(c->ssr); W32(r0 + 0x0u, r5); /* slot mov.l Rm,@(disp,Rn) */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C1AEF8E rte */
}


#include "recomp.h"
#include "recomp_funcs.h"

void f_0C19CB62(sh3_t *c)
{
	LOCALS;
L_0C19CB62: BLKS(0x0C19CB62u);
	IF(0x0C19CB62u); { u32 t_ = c->spc; SET_SR(c->ssr); IF(0x0C19CB64u); T = r0 >> 31; r0 <<= 1; /* slot shll Rn */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C19CB62 rte */
}

void f_0C19CB74(sh3_t *c)
{
	LOCALS;
L_0C19CB74: BLKS(0x0C19CB74u);
	IF(0x0C19CB74u); { u32 t_ = c->spc; SET_SR(c->ssr); IF(0x0C19CB76u); r0 <<= 16; /* slot shll16 Rn */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C19CB74 rte */
}

void f_0C19CBCE(sh3_t *c)
{
	LOCALS;
L_0C19CBCE: BLKS(0x0C19CBCEu);
	IF(0x0C19CBCEu); { u32 t_ = c->spc; SET_SR(c->ssr); W32(r0 + 0x0u, r0); /* slot mov.l Rm,@(disp,Rn) */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C19CBCE rte */
}

void f_0C19CBE0(sh3_t *c)
{
	LOCALS;
L_0C19CBE0: BLKS(0x0C19CBE0u);
	IF(0x0C19CBE0u); { u32 t_ = c->spc; SET_SR(c->ssr); W32(r0 + 0x20u, r2); /* slot mov.l Rm,@(disp,Rn) */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C19CBE0 rte */
}

void f_0C19CBF2(sh3_t *c)
{
	LOCALS;
L_0C19CBF2: BLKS(0x0C19CBF2u);
	IF(0x0C19CBF2u); { u32 t_ = c->spc; SET_SR(c->ssr); W32(r0 + 0x0u, r5); /* slot mov.l Rm,@(disp,Rn) */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C19CBF2 rte */
}

void f_0C19CC04(sh3_t *c)
{
	LOCALS;
L_0C19CC04: BLKS(0x0C19CC04u);
	IF(0x0C19CC04u); { u32 t_ = c->spc; SET_SR(c->ssr); W32(r0 + 0x20u, r7); /* slot mov.l Rm,@(disp,Rn) */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C19CC04 rte */
}

void f_0C19CC16(sh3_t *c)
{
	LOCALS;
L_0C19CC16: BLKS(0x0C19CC16u);
	IF(0x0C19CC16u); { u32 t_ = c->spc; SET_SR(c->ssr); W32(r0 + 0x0u, r10); /* slot mov.l Rm,@(disp,Rn) */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C19CC16 rte */
}

void f_0C19CC28(sh3_t *c)
{
	LOCALS;
L_0C19CC28: BLKS(0x0C19CC28u);
	IF(0x0C19CC28u); { u32 t_ = c->spc; SET_SR(c->ssr); W32(r0 + 0x20u, r12); /* slot mov.l Rm,@(disp,Rn) */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C19CC28 rte */
}

void f_0C19CC5E(sh3_t *c)
{
	LOCALS;
L_0C19CC5E: BLKS(0x0C19CC5Eu);
	IF(0x0C19CC5Eu); { u32 tv_ = r0; u32 t_ = PHYS(tv_); r0 = 0x2F272018u; /* slot mov.l @(disp,pc),Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C19CC5E jmp @Rn */
}

void f_0C19CC70(sh3_t *c)
{
	LOCALS;
L_0C19CC70: BLKS(0x0C19CC70u);
	IF(0x0C19CC70u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); r0 = 0xA0A0ECEBu; /* slot mov.l @(disp,pc),Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C19CC70 jmp @Rn */
}

void f_0C19CC82(sh3_t *c)
{
	LOCALS;
L_0C19CC82: BLKS(0x0C19CC82u);
	IF(0x0C19CC82u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); r0 = 0xC800E9E6u; /* slot mov.l @(disp,pc),Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C19CC82 jmp @Rn */
}

void f_0C19CC94(sh3_t *c)
{
	LOCALS;
L_0C19CC94: BLKS(0x0C19CC94u);
	IF(0x0C19CC94u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); r0 = 0x402Au; /* slot mov.l @(disp,pc),Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C19CC94 jmp @Rn */
}

void f_0C19CCA6(sh3_t *c)
{
	LOCALS;
L_0C19CCA6: BLKS(0x0C19CCA6u);
	IF(0x0C19CCA6u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); r0 = 0x4029u; /* slot mov.l @(disp,pc),Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C19CCA6 jmp @Rn */
}

void f_0C19CCB8(sh3_t *c)
{
	LOCALS;
L_0C19CCB8: BLKS(0x0C19CCB8u);
	IF(0x0C19CCB8u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); r0 = 0xD0E84747u; /* slot mov.l @(disp,pc),Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C19CCB8 jmp @Rn */
}

void f_0C19CD36(sh3_t *c)
{
	LOCALS;
L_0C19CD36: BLKS(0x0C19CD36u);
	IF(0x0C19CD36u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); r0 += 0x0u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C19CD36 jmp @Rn */
}

void f_0C19CD48(sh3_t *c)
{
	LOCALS;
L_0C19CD48: BLKS(0x0C19CD48u);
	IF(0x0C19CD48u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); r0 += 0x28u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C19CD48 jmp @Rn */
}

void f_0C19CD5A(sh3_t *c)
{
	LOCALS;
L_0C19CD5A: BLKS(0x0C19CD5Au);
	IF(0x0C19CD5Au); { u32 tv_ = r0; u32 t_ = PHYS(tv_); r0 += 0x50u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C19CD5A jmp @Rn */
}

void f_0C19CD6C(sh3_t *c)
{
	LOCALS;
L_0C19CD6C: BLKS(0x0C19CD6Cu);
	IF(0x0C19CD6Cu); { u32 tv_ = r0; u32 t_ = PHYS(tv_); r0 += 0x78u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C19CD6C jmp @Rn */
}

void f_0C19E5AE(sh3_t *c)
{
	LOCALS;
L_0C19E5AE: BLKS(0x0C19E5AEu);
	IF(0x0C19E5AEu); { u32 tv_ = (r0 + 0x0C19E5B2u); u32 t_ = PHYS(tv_); T = (r0 & 0x0u) == 0; /* slot tst #imm,r0 */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C19E5AE braf Rn */
}

void f_0C19E5C0(sh3_t *c)
{
	LOCALS;
L_0C19E5C0: BLKS(0x0C19E5C0u);
	IF(0x0C19E5C0u); { u32 tv_ = (r0 + 0x0C19E5C4u); u32 t_ = PHYS(tv_); T = (r0 & 0x30u) == 0; /* slot tst #imm,r0 */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C19E5C0 braf Rn */
}

void f_0C19E5D2(sh3_t *c)
{
	LOCALS;
L_0C19E5D2: BLKS(0x0C19E5D2u);
	IF(0x0C19E5D2u); { u32 tv_ = (r0 + 0x0C19E5D6u); u32 t_ = PHYS(tv_); T = (r0 & 0x60u) == 0; /* slot tst #imm,r0 */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C19E5D2 braf Rn */
}

void f_0C19E5E4(sh3_t *c)
{
	LOCALS;
L_0C19E5E4: BLKS(0x0C19E5E4u);
	IF(0x0C19E5E4u); { u32 tv_ = (r0 + 0x0C19E5E8u); u32 t_ = PHYS(tv_); T = (r0 & 0x90u) == 0; /* slot tst #imm,r0 */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C19E5E4 braf Rn */
}

void f_0C19E5F6(sh3_t *c)
{
	LOCALS;
L_0C19E5F6: BLKS(0x0C19E5F6u);
	IF(0x0C19E5F6u); { u32 tv_ = (r0 + 0x0C19E5FAu); u32 t_ = PHYS(tv_); T = (r0 & 0xC0u) == 0; /* slot tst #imm,r0 */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C19E5F6 braf Rn */
}

void f_0C19E608(sh3_t *c)
{
	LOCALS;
L_0C19E608: BLKS(0x0C19E608u);
	IF(0x0C19E608u); { u32 tv_ = (r0 + 0x0C19E60Cu); u32 t_ = PHYS(tv_); r0 = 0x372Fu; /* slot mov.w @(disp,pc),Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C19E608 braf Rn */
}

void f_0C19E61A(sh3_t *c)
{
	LOCALS;
L_0C19E61A: BLKS(0x0C19E61Au);
	IF(0x0C19E61Au); { u32 tv_ = (r0 + 0x0C19E61Eu); u32 t_ = PHYS(tv_); r0 = 0xFFFFD0E8u; /* slot mov.w @(disp,pc),Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C19E61A braf Rn */
}

void f_0C19E62C(sh3_t *c)
{
	LOCALS;
L_0C19E62C: BLKS(0x0C19E62Cu);
	IF(0x0C19E62Cu); { u32 tv_ = (r0 + 0x0C19E630u); u32 t_ = PHYS(tv_); r0 = 0x24u; /* slot mov.w @(disp,pc),Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C19E62C braf Rn */
}

void f_0C19EE1E(sh3_t *c)
{
	LOCALS;
L_0C19EE1E: BLKS(0x0C19EE1Eu);
	IF(0x0C19EE1Eu); { u32 t_ = c->spc; SET_SR(c->ssr); r0 = 0x2F27202Cu; /* slot mov.l @(disp,pc),Rn */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C19EE1E rte */
}

void f_0C19EE30(sh3_t *c)
{
	LOCALS;
L_0C19EE30: BLKS(0x0C19EE30u);
	IF(0x0C19EE30u); { u32 t_ = c->spc; SET_SR(c->ssr); r0 = 0xA0A0ECEBu; /* slot mov.l @(disp,pc),Rn */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C19EE30 rte */
}

void f_0C19EE42(sh3_t *c)
{
	LOCALS;
L_0C19EE42: BLKS(0x0C19EE42u);
	IF(0x0C19EE42u); { u32 t_ = c->spc; SET_SR(c->ssr); r0 = 0x4050EBECu; /* slot mov.l @(disp,pc),Rn */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C19EE42 rte */
}

void f_0C19EE54(sh3_t *c)
{
	LOCALS;
L_0C19EE54: BLKS(0x0C19EE54u);
	IF(0x0C19EE54u); { u32 t_ = c->spc; SET_SR(c->ssr); r0 = 0x2Cu; /* slot mov.l @(disp,pc),Rn */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C19EE54 rte */
}

void f_0C19EE66(sh3_t *c)
{
	LOCALS;
L_0C19EE66: BLKS(0x0C19EE66u);
	IF(0x0C19EE66u); { u32 t_ = c->spc; SET_SR(c->ssr); r0 = 0x402Bu; /* slot mov.l @(disp,pc),Rn */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C19EE66 rte */
}

void f_0C19EE78(sh3_t *c)
{
	LOCALS;
L_0C19EE78: BLKS(0x0C19EE78u);
	IF(0x0C19EE78u); { u32 t_ = c->spc; SET_SR(c->ssr); r0 = 0xD0E84747u; /* slot mov.l @(disp,pc),Rn */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C19EE78 rte */
}

void f_0C19EEF6(sh3_t *c)
{
	LOCALS;
L_0C19EEF6: BLKS(0x0C19EEF6u);
	IF(0x0C19EEF6u); { u32 t_ = c->spc; SET_SR(c->ssr); r0 += 0x0u; /* slot add #imm,Rn */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C19EEF6 rte */
}

void f_0C19EF08(sh3_t *c)
{
	LOCALS;
L_0C19EF08: BLKS(0x0C19EF08u);
	IF(0x0C19EF08u); { u32 t_ = c->spc; SET_SR(c->ssr); r0 += 0x28u; /* slot add #imm,Rn */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C19EF08 rte */
}

void f_0C19EF1A(sh3_t *c)
{
	LOCALS;
L_0C19EF1A: BLKS(0x0C19EF1Au);
	IF(0x0C19EF1Au); { u32 t_ = c->spc; SET_SR(c->ssr); r0 += 0x50u; /* slot add #imm,Rn */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C19EF1A rte */
}

void f_0C19EF2C(sh3_t *c)
{
	LOCALS;
L_0C19EF2C: BLKS(0x0C19EF2Cu);
	IF(0x0C19EF2Cu); { u32 t_ = c->spc; SET_SR(c->ssr); r0 += 0x78u; /* slot add #imm,Rn */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C19EF2C rte */
}

void f_0C19EF3E(sh3_t *c)
{
	LOCALS;
L_0C19EF3E: BLKS(0x0C19EF3Eu);
	IF(0x0C19EF3Eu); { u32 t_ = c->spc; SET_SR(c->ssr); r0 += 0xFFFFFFA0u; /* slot add #imm,Rn */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C19EF3E rte */
}

void f_0C19EF50(sh3_t *c)
{
	LOCALS;
L_0C19EF50: BLKS(0x0C19EF50u);
	IF(0x0C19EF50u); { u32 t_ = c->spc; SET_SR(c->ssr); r0 += 0xFFFFFFC8u; /* slot add #imm,Rn */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C19EF50 rte */
}

void f_0C19EF62(sh3_t *c)
{
	LOCALS;
L_0C19EF62: BLKS(0x0C19EF62u);
	IF(0x0C19EF62u); { u32 t_ = c->spc; SET_SR(c->ssr); IF(0x0C19EF64u); T = r0 >> 31; r0 <<= 1; /* slot shll Rn */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C19EF62 rte */
}

void f_0C19EF74(sh3_t *c)
{
	LOCALS;
L_0C19EF74: BLKS(0x0C19EF74u);
	IF(0x0C19EF74u); { u32 t_ = c->spc; SET_SR(c->ssr); IF(0x0C19EF76u); r0 <<= 16; /* slot shll16 Rn */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C19EF74 rte */
}


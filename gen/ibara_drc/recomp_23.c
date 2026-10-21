#include "recomp.h"
#include "recomp_funcs.h"

void f_0C199720(sh3_t *c)
{
	LOCALS;
L_0C199720: BLKS(0x0C199720u);
	IF(0x0C199720u); { u32 t_ = PR; r0 = (u32)(s32)(s8)R8(r5); /* slot mov.b @Rm,Rn */ UPD(t_, 3); RET(t_); }  /* 0C199720 rts */
}

void f_0C199732(sh3_t *c)
{
	LOCALS;
L_0C199732: BLKS(0x0C199732u);
	IF(0x0C199732u); { u32 t_ = PR; r0 = (u32)(s32)(s8)R8(r10); /* slot mov.b @Rm,Rn */ UPD(t_, 3); RET(t_); }  /* 0C199732 rts */
}

void f_0C199744(sh3_t *c)
{
	LOCALS;
L_0C199744: BLKS(0x0C199744u);
	IF(0x0C199744u); { u32 t_ = PR; W32(r0 + 0x0u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); RET(t_); }  /* 0C199744 rts */
}

void f_0C199756(sh3_t *c)
{
	LOCALS;
L_0C199756: BLKS(0x0C199756u);
	IF(0x0C199756u); { u32 t_ = PR; W32(r0 + 0x0u, r5); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); RET(t_); }  /* 0C199756 rts */
}

void f_0C199768(sh3_t *c)
{
	LOCALS;
L_0C199768: BLKS(0x0C199768u);
	IF(0x0C199768u); { u32 t_ = PR; W32(r0 + 0x0u, r10); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); RET(t_); }  /* 0C199768 rts */
}

void f_0C19C1AE(sh3_t *c)
{
	LOCALS;
L_0C19C1AE: BLKS(0x0C19C1AEu);
	IF(0x0C19C1AEu); { u32 tv_ = (r0 + 0x0C19C1B2u); u32 t_ = PHYS(tv_); T = (r0 & 0x0u) == 0; /* slot tst #imm,r0 */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C19C1AE braf Rn */
}

void f_0C19C1C0(sh3_t *c)
{
	LOCALS;
L_0C19C1C0: BLKS(0x0C19C1C0u);
	IF(0x0C19C1C0u); { u32 tv_ = (r0 + 0x0C19C1C4u); u32 t_ = PHYS(tv_); T = (r0 & 0x30u) == 0; /* slot tst #imm,r0 */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C19C1C0 braf Rn */
}

void f_0C19C1D2(sh3_t *c)
{
	LOCALS;
L_0C19C1D2: BLKS(0x0C19C1D2u);
	IF(0x0C19C1D2u); { u32 tv_ = (r0 + 0x0C19C1D6u); u32 t_ = PHYS(tv_); T = (r0 & 0x60u) == 0; /* slot tst #imm,r0 */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C19C1D2 braf Rn */
}

void f_0C19C1E4(sh3_t *c)
{
	LOCALS;
L_0C19C1E4: BLKS(0x0C19C1E4u);
	IF(0x0C19C1E4u); { u32 tv_ = (r0 + 0x0C19C1E8u); u32 t_ = PHYS(tv_); T = (r0 & 0x90u) == 0; /* slot tst #imm,r0 */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C19C1E4 braf Rn */
}

void f_0C19C1F6(sh3_t *c)
{
	LOCALS;
L_0C19C1F6: BLKS(0x0C19C1F6u);
	IF(0x0C19C1F6u); { u32 tv_ = (r0 + 0x0C19C1FAu); u32 t_ = PHYS(tv_); T = (r0 & 0xC0u) == 0; /* slot tst #imm,r0 */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C19C1F6 braf Rn */
}

void f_0C19C208(sh3_t *c)
{
	LOCALS;
L_0C19C208: BLKS(0x0C19C208u);
	IF(0x0C19C208u); { u32 tv_ = (r0 + 0x0C19C20Cu); u32 t_ = PHYS(tv_); r0 = 0x372Fu; /* slot mov.w @(disp,pc),Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C19C208 braf Rn */
}

void f_0C19C21A(sh3_t *c)
{
	LOCALS;
L_0C19C21A: BLKS(0x0C19C21Au);
	IF(0x0C19C21Au); { u32 tv_ = (r0 + 0x0C19C21Eu); u32 t_ = PHYS(tv_); r0 = 0xFFFFD0E8u; /* slot mov.w @(disp,pc),Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C19C21A braf Rn */
}

void f_0C19C22C(sh3_t *c)
{
	LOCALS;
L_0C19C22C: BLKS(0x0C19C22Cu);
	IF(0x0C19C22Cu); { u32 tv_ = (r0 + 0x0C19C230u); u32 t_ = PHYS(tv_); r0 = 0x24u; /* slot mov.w @(disp,pc),Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C19C22C braf Rn */
}

void f_0C19CA1E(sh3_t *c)
{
	LOCALS;
L_0C19CA1E: BLKS(0x0C19CA1Eu);
	IF(0x0C19CA1Eu); { u32 t_ = c->spc; SET_SR(c->ssr); r0 = 0x2F272018u; /* slot mov.l @(disp,pc),Rn */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C19CA1E rte */
}

void f_0C19CA30(sh3_t *c)
{
	LOCALS;
L_0C19CA30: BLKS(0x0C19CA30u);
	IF(0x0C19CA30u); { u32 t_ = c->spc; SET_SR(c->ssr); r0 = 0xA0A0ECEBu; /* slot mov.l @(disp,pc),Rn */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C19CA30 rte */
}

void f_0C19CA42(sh3_t *c)
{
	LOCALS;
L_0C19CA42: BLKS(0x0C19CA42u);
	IF(0x0C19CA42u); { u32 t_ = c->spc; SET_SR(c->ssr); r0 = 0x4050EBECu; /* slot mov.l @(disp,pc),Rn */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C19CA42 rte */
}

void f_0C19CA54(sh3_t *c)
{
	LOCALS;
L_0C19CA54: BLKS(0x0C19CA54u);
	IF(0x0C19CA54u); { u32 t_ = c->spc; SET_SR(c->ssr); r0 = 0x2Cu; /* slot mov.l @(disp,pc),Rn */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C19CA54 rte */
}

void f_0C19CA66(sh3_t *c)
{
	LOCALS;
L_0C19CA66: BLKS(0x0C19CA66u);
	IF(0x0C19CA66u); { u32 t_ = c->spc; SET_SR(c->ssr); r0 = 0x402Bu; /* slot mov.l @(disp,pc),Rn */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C19CA66 rte */
}

void f_0C19CA78(sh3_t *c)
{
	LOCALS;
L_0C19CA78: BLKS(0x0C19CA78u);
	IF(0x0C19CA78u); { u32 t_ = c->spc; SET_SR(c->ssr); r0 = 0xD0E84747u; /* slot mov.l @(disp,pc),Rn */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C19CA78 rte */
}

void f_0C19CAF6(sh3_t *c)
{
	LOCALS;
L_0C19CAF6: BLKS(0x0C19CAF6u);
	IF(0x0C19CAF6u); { u32 t_ = c->spc; SET_SR(c->ssr); r0 += 0x0u; /* slot add #imm,Rn */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C19CAF6 rte */
}

void f_0C19CB08(sh3_t *c)
{
	LOCALS;
L_0C19CB08: BLKS(0x0C19CB08u);
	IF(0x0C19CB08u); { u32 t_ = c->spc; SET_SR(c->ssr); r0 += 0x28u; /* slot add #imm,Rn */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C19CB08 rte */
}

void f_0C19CB1A(sh3_t *c)
{
	LOCALS;
L_0C19CB1A: BLKS(0x0C19CB1Au);
	IF(0x0C19CB1Au); { u32 t_ = c->spc; SET_SR(c->ssr); r0 += 0x50u; /* slot add #imm,Rn */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C19CB1A rte */
}

void f_0C19CB2C(sh3_t *c)
{
	LOCALS;
L_0C19CB2C: BLKS(0x0C19CB2Cu);
	IF(0x0C19CB2Cu); { u32 t_ = c->spc; SET_SR(c->ssr); r0 += 0x78u; /* slot add #imm,Rn */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C19CB2C rte */
}

void f_0C19CB3E(sh3_t *c)
{
	LOCALS;
L_0C19CB3E: BLKS(0x0C19CB3Eu);
	IF(0x0C19CB3Eu); { u32 t_ = c->spc; SET_SR(c->ssr); r0 += 0xFFFFFFA0u; /* slot add #imm,Rn */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C19CB3E rte */
}

void f_0C19CB50(sh3_t *c)
{
	LOCALS;
L_0C19CB50: BLKS(0x0C19CB50u);
	IF(0x0C19CB50u); { u32 t_ = c->spc; SET_SR(c->ssr); r0 += 0xFFFFFFC8u; /* slot add #imm,Rn */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C19CB50 rte */
}

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


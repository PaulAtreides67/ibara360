#include "recomp.h"
#include "recomp_funcs.h"

void f_0C19626A(sh3_t *c)
{
	LOCALS;
L_0C19626A: BLKS(0x0C19626Au);
	IF(0x0C19626Au); { u32 t_ = PR; T = (r0 & 0x90u) == 0; /* slot tst #imm,r0 */ UPD(t_, 3); RET(t_); }  /* 0C19626A rts */
}

void f_0C196274(sh3_t *c)
{
	LOCALS;
L_0C196274: BLKS(0x0C196274u);
	IF(0x0C196274u); { u32 t_ = PR; T = (r0 & 0xC0u) == 0; /* slot tst #imm,r0 */ UPD(t_, 3); RET(t_); }  /* 0C196274 rts */
}

void f_0C19627E(sh3_t *c)
{
	LOCALS;
L_0C19627E: BLKS(0x0C19627Eu);
	IF(0x0C19627Eu); { u32 t_ = PR; r0 = 0x372Fu; /* slot mov.w @(disp,pc),Rn */ UPD(t_, 3); RET(t_); }  /* 0C19627E rts */
}

void f_0C196288(sh3_t *c)
{
	LOCALS;
L_0C196288: BLKS(0x0C196288u);
	IF(0x0C196288u); { u32 t_ = PR; r0 = 0x2030u; /* slot mov.w @(disp,pc),Rn */ UPD(t_, 3); RET(t_); }  /* 0C196288 rts */
}

void f_0C196292(sh3_t *c)
{
	LOCALS;
L_0C196292: BLKS(0x0C196292u);
	IF(0x0C196292u); { u32 t_ = PR; r0 = 0x0u; /* slot mov.w @(disp,pc),Rn */ UPD(t_, 3); RET(t_); }  /* 0C196292 rts */
}

void f_0C19629C(sh3_t *c)
{
	LOCALS;
L_0C19629C: BLKS(0x0C19629Cu);
	IF(0x0C19629Cu); { u32 t_ = PR; r0 = 0xFFFFE4E8u; /* slot mov.w @(disp,pc),Rn */ UPD(t_, 3); RET(t_); }  /* 0C19629C rts */
}

void f_0C1962A6(sh3_t *c)
{
	LOCALS;
L_0C1962A6: BLKS(0x0C1962A6u);
	IF(0x0C1962A6u); { u32 t_ = PR; r0 = 0x13u; /* slot mov.w @(disp,pc),Rn */ UPD(t_, 3); RET(t_); }  /* 0C1962A6 rts */
}

void f_0C1962B0(sh3_t *c)
{
	LOCALS;
L_0C1962B0: BLKS(0x0C1962B0u);
	IF(0x0C1962B0u); { u32 t_ = PR; r8 = R32(r0 + 0x0u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); RET(t_); }  /* 0C1962B0 rts */
}

void f_0C1962BA(sh3_t *c)
{
	LOCALS;
L_0C1962BA: BLKS(0x0C1962BAu);
	IF(0x0C1962BAu); { u32 t_ = PR; r8 = R32(r3 + 0x0u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); RET(t_); }  /* 0C1962BA rts */
}

void f_0C1962C4(sh3_t *c)
{
	LOCALS;
L_0C1962C4: BLKS(0x0C1962C4u);
	IF(0x0C1962C4u); { u32 t_ = PR; r8 = R32(r6 + 0x0u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); RET(t_); }  /* 0C1962C4 rts */
}

void f_0C1962CE(sh3_t *c)
{
	LOCALS;
L_0C1962CE: BLKS(0x0C1962CEu);
	IF(0x0C1962CEu); { u32 t_ = PR; r8 = R32(r9 + 0x0u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); RET(t_); }  /* 0C1962CE rts */
}

void f_0C1962D8(sh3_t *c)
{
	LOCALS;
L_0C1962D8: BLKS(0x0C1962D8u);
	IF(0x0C1962D8u); { u32 t_ = PR; r8 = R32(r12 + 0x0u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); RET(t_); }  /* 0C1962D8 rts */
}

void f_0C1962E2(sh3_t *c)
{
	LOCALS;
L_0C1962E2: BLKS(0x0C1962E2u);
	IF(0x0C1962E2u); { u32 t_ = PR; W8(r0, r0); /* slot mov.b Rm,@Rn */ UPD(t_, 3); RET(t_); }  /* 0C1962E2 rts */
}

void f_0C1962F6(sh3_t *c)
{
	LOCALS;
L_0C1962F6: BLKS(0x0C1962F6u);
	IF(0x0C1962F6u); { u32 t_ = PR; W8(r0, r6); /* slot mov.b Rm,@Rn */ UPD(t_, 3); RET(t_); }  /* 0C1962F6 rts */
}

void f_0C196300(sh3_t *c)
{
	LOCALS;
L_0C196300: BLKS(0x0C196300u);
	IF(0x0C196300u); { u32 t_ = PR; W8(r0, r9); /* slot mov.b Rm,@Rn */ UPD(t_, 3); RET(t_); }  /* 0C196300 rts */
}

void f_0C19630A(sh3_t *c)
{
	LOCALS;
L_0C19630A: BLKS(0x0C19630Au);
	IF(0x0C19630Au); { u32 t_ = PR; W8(r0, r12); /* slot mov.b Rm,@Rn */ UPD(t_, 3); RET(t_); }  /* 0C19630A rts */
}

void f_0C19970E(sh3_t *c)
{
	LOCALS;
L_0C19970E: BLKS(0x0C19970Eu);
	IF(0x0C19970Eu); { u32 t_ = PR; r0 = (u32)(s32)(s8)R8(r0); /* slot mov.b @Rm,Rn */ UPD(t_, 3); RET(t_); }  /* 0C19970E rts */
}

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


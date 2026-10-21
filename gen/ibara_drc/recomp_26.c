#include "recomp.h"
#include "recomp_funcs.h"

void f_0C1B2FB4(sh3_t *c)
{
	LOCALS;
L_0C1B2FB4: BLKS(0x0C1B2FB4u);
	IF(0x0C1B2FB4u); { u32 t_ = c->spc; SET_SR(c->ssr); W32(r0 + 0x20u, r2); /* slot mov.l Rm,@(disp,Rn) */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C1B2FB4 rte */
}

void f_0C1B2FC6(sh3_t *c)
{
	LOCALS;
L_0C1B2FC6: BLKS(0x0C1B2FC6u);
	IF(0x0C1B2FC6u); { u32 t_ = c->spc; SET_SR(c->ssr); W32(r0 + 0x20u, r9); /* slot mov.l Rm,@(disp,Rn) */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C1B2FC6 rte */
}

void f_0C1B3528(sh3_t *c)
{
	LOCALS;
L_0C1B3528: BLKS(0x0C1B3528u);
	IF(0x0C1B3528u); { u32 t_ = c->spc; SET_SR(c->ssr); r0 = (r4 & 0xFFFF0000u) | ((r4 & 0xFF) << 8) | ((r4 >> 8) & 0xFF); /* slot swap.b Rm,Rn */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C1B3528 rte */
}

void f_0C1B3532(sh3_t *c)
{
	LOCALS;
L_0C1B3532: BLKS(0x0C1B3532u);
	IF(0x0C1B3532u); { u32 t_ = c->spc; SET_SR(c->ssr); r0 = (r11 & 0xFFFF0000u) | ((r11 & 0xFF) << 8) | ((r11 >> 8) & 0xFF); /* slot swap.b Rm,Rn */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C1B3532 rte */
}

void f_0C1B353C(sh3_t *c)
{
	LOCALS;
L_0C1B353C: BLKS(0x0C1B353Cu);
	IF(0x0C1B353Cu); { u32 t_ = c->spc; SET_SR(c->ssr); W32(r0 + 0x20u, r4); /* slot mov.l Rm,@(disp,Rn) */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C1B353C rte */
}

void f_0C1B3546(sh3_t *c)
{
	LOCALS;
L_0C1B3546: BLKS(0x0C1B3546u);
	IF(0x0C1B3546u); { u32 t_ = c->spc; SET_SR(c->ssr); W32(r0 + 0x20u, r11); /* slot mov.l Rm,@(disp,Rn) */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C1B3546 rte */
}

void f_0C1B8450(sh3_t *c)
{
	LOCALS;
L_0C1B8450: BLKS(0x0C1B8450u);
	IF(0x0C1B8450u); { u32 t_ = PR; T = (r0 & 0x0u) == 0; /* slot tst #imm,r0 */ UPD(t_, 3); RET(t_); }  /* 0C1B8450 rts */
}

void f_0C1B845A(sh3_t *c)
{
	LOCALS;
L_0C1B845A: BLKS(0x0C1B845Au);
	IF(0x0C1B845Au); { u32 t_ = PR; T = (r0 & 0x30u) == 0; /* slot tst #imm,r0 */ UPD(t_, 3); RET(t_); }  /* 0C1B845A rts */
}

void f_0C1B8464(sh3_t *c)
{
	LOCALS;
L_0C1B8464: BLKS(0x0C1B8464u);
	IF(0x0C1B8464u); { u32 t_ = PR; T = (r0 & 0x60u) == 0; /* slot tst #imm,r0 */ UPD(t_, 3); RET(t_); }  /* 0C1B8464 rts */
}

void f_0C1B846E(sh3_t *c)
{
	LOCALS;
L_0C1B846E: BLKS(0x0C1B846Eu);
	IF(0x0C1B846Eu); { u32 t_ = PR; T = (r0 & 0x90u) == 0; /* slot tst #imm,r0 */ UPD(t_, 3); RET(t_); }  /* 0C1B846E rts */
}

void f_0C1B8478(sh3_t *c)
{
	LOCALS;
L_0C1B8478: BLKS(0x0C1B8478u);
	IF(0x0C1B8478u); { u32 t_ = PR; r0 = 0x372Fu; /* slot mov.w @(disp,pc),Rn */ UPD(t_, 3); RET(t_); }  /* 0C1B8478 rts */
}

void f_0C1B8482(sh3_t *c)
{
	LOCALS;
L_0C1B8482: BLKS(0x0C1B8482u);
	IF(0x0C1B8482u); { u32 t_ = PR; r0 = 0x2090u; /* slot mov.w @(disp,pc),Rn */ UPD(t_, 3); RET(t_); }  /* 0C1B8482 rts */
}

void f_0C1B848C(sh3_t *c)
{
	LOCALS;
L_0C1B848C: BLKS(0x0C1B848Cu);
	IF(0x0C1B848Cu); { u32 t_ = PR; r0 = 0xFFFF83CEu; /* slot mov.w @(disp,pc),Rn */ UPD(t_, 3); RET(t_); }  /* 0C1B848C rts */
}

void f_0C1B8496(sh3_t *c)
{
	LOCALS;
L_0C1B8496: BLKS(0x0C1B8496u);
	IF(0x0C1B8496u); { u32 t_ = PR; r0 = 0xC1Bu; /* slot mov.w @(disp,pc),Rn */ UPD(t_, 3); RET(t_); }  /* 0C1B8496 rts */
}

void f_0C1B84A0(sh3_t *c)
{
	LOCALS;
L_0C1B84A0: BLKS(0x0C1B84A0u);
	IF(0x0C1B84A0u); { u32 t_ = PR; r8 = R32(r0 + 0x0u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); RET(t_); }  /* 0C1B84A0 rts */
}

void f_0C1B84AA(sh3_t *c)
{
	LOCALS;
L_0C1B84AA: BLKS(0x0C1B84AAu);
	IF(0x0C1B84AAu); { u32 t_ = PR; r8 = R32(r3 + 0x0u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); RET(t_); }  /* 0C1B84AA rts */
}

void f_0C1B84B4(sh3_t *c)
{
	LOCALS;
L_0C1B84B4: BLKS(0x0C1B84B4u);
	IF(0x0C1B84B4u); { u32 t_ = PR; r8 = R32(r6 + 0x0u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); RET(t_); }  /* 0C1B84B4 rts */
}

void f_0C1B84BE(sh3_t *c)
{
	LOCALS;
L_0C1B84BE: BLKS(0x0C1B84BEu);
	IF(0x0C1B84BEu); { u32 t_ = PR; r8 = R32(r9 + 0x0u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); RET(t_); }  /* 0C1B84BE rts */
}

void f_0C1B84C8(sh3_t *c)
{
	LOCALS;
L_0C1B84C8: BLKS(0x0C1B84C8u);
	IF(0x0C1B84C8u); { u32 t_ = PR; W8(r0, r0); /* slot mov.b Rm,@Rn */ UPD(t_, 3); RET(t_); }  /* 0C1B84C8 rts */
}

void f_0C1B84D2(sh3_t *c)
{
	LOCALS;
L_0C1B84D2: BLKS(0x0C1B84D2u);
	IF(0x0C1B84D2u); { u32 t_ = PR; W8(r0, r3); /* slot mov.b Rm,@Rn */ UPD(t_, 3); RET(t_); }  /* 0C1B84D2 rts */
}

void f_0C1B84DC(sh3_t *c)
{
	LOCALS;
L_0C1B84DC: BLKS(0x0C1B84DCu);
	IF(0x0C1B84DCu); { u32 t_ = PR; W8(r0, r6); /* slot mov.b Rm,@Rn */ UPD(t_, 3); RET(t_); }  /* 0C1B84DC rts */
}

void f_0C1B84E6(sh3_t *c)
{
	LOCALS;
L_0C1B84E6: BLKS(0x0C1B84E6u);
	IF(0x0C1B84E6u); { u32 t_ = PR; W8(r0, r9); /* slot mov.b Rm,@Rn */ UPD(t_, 3); RET(t_); }  /* 0C1B84E6 rts */
}

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


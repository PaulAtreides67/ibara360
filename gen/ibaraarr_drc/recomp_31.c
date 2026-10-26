#include "recomp.h"
#include "recomp_funcs.h"

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

void f_0C1B0884(sh3_t *c)
{
	LOCALS;
L_0C1B0884: BLKS(0x0C1B0884u);
	IF(0x0C1B0884u); { u32 t_ = PR; r0 += 0x50u; /* slot add #imm,Rn */ UPD(t_, 3); RET(t_); }  /* 0C1B0884 rts */
}

void f_0C1B0896(sh3_t *c)
{
	LOCALS;
L_0C1B0896: BLKS(0x0C1B0896u);
	IF(0x0C1B0896u); { u32 t_ = PR; r0 += 0xFFFFFFA0u; /* slot add #imm,Rn */ UPD(t_, 3); RET(t_); }  /* 0C1B0896 rts */
}

void f_0C1B08A8(sh3_t *c)
{
	LOCALS;
L_0C1B08A8: BLKS(0x0C1B08A8u);
	IF(0x0C1B08A8u); { u32 t_ = PR; W8(r8, r0); /* slot mov.b Rm,@Rn */ UPD(t_, 3); RET(t_); }  /* 0C1B08A8 rts */
}

void f_0C1B08BA(sh3_t *c)
{
	LOCALS;
L_0C1B08BA: BLKS(0x0C1B08BAu);
	IF(0x0C1B08BAu); { u32 t_ = PR; W8(r8, r5); /* slot mov.b Rm,@Rn */ UPD(t_, 3); RET(t_); }  /* 0C1B08BA rts */
}

void f_0C1B08CC(sh3_t *c)
{
	LOCALS;
L_0C1B08CC: BLKS(0x0C1B08CCu);
	IF(0x0C1B08CCu); { u32 t_ = PR; W8(r8, r10); /* slot mov.b Rm,@Rn */ UPD(t_, 3); RET(t_); }  /* 0C1B08CC rts */
}

void f_0C1B2578(sh3_t *c)
{
	LOCALS;
L_0C1B2578: BLKS(0x0C1B2578u);
	IF(0x0C1B2578u); { u32 tv_ = (r0 + 0x0C1B257Cu); u32 t_ = PHYS(tv_); r0 = (u32)(s32)(s8)R8(r0); /* slot mov.b @Rm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C1B2578 braf Rn */
}

void f_0C1B258A(sh3_t *c)
{
	LOCALS;
L_0C1B258A: BLKS(0x0C1B258Au);
	IF(0x0C1B258Au); { u32 tv_ = (r0 + 0x0C1B258Eu); u32 t_ = PHYS(tv_); r0 = (u32)(s32)(s8)R8(r7); /* slot mov.b @Rm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C1B258A braf Rn */
}

void f_0C1B259C(sh3_t *c)
{
	LOCALS;
L_0C1B259C: BLKS(0x0C1B259Cu);
	IF(0x0C1B259Cu); { u32 tv_ = (r0 + 0x0C1B25A0u); u32 t_ = PHYS(tv_); W32(r0 + 0x0u, r0); /* slot mov.l Rm,@(disp,Rn) */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C1B259C braf Rn */
}

void f_0C1B25AE(sh3_t *c)
{
	LOCALS;
L_0C1B25AE: BLKS(0x0C1B25AEu);
	IF(0x0C1B25AEu); { u32 tv_ = (r0 + 0x0C1B25B2u); u32 t_ = PHYS(tv_); W32(r0 + 0x0u, r7); /* slot mov.l Rm,@(disp,Rn) */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C1B25AE braf Rn */
}

void f_0C1B2988(sh3_t *c)
{
	LOCALS;
L_0C1B2988: BLKS(0x0C1B2988u);
	IF(0x0C1B2988u); { u32 t_ = c->spc; SET_SR(c->ssr); r0 = (u32)(s32)(s8)R8(r0); /* slot mov.b @Rm,Rn */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C1B2988 rte */
}

void f_0C1B2992(sh3_t *c)
{
	LOCALS;
L_0C1B2992: BLKS(0x0C1B2992u);
	IF(0x0C1B2992u); { u32 t_ = c->spc; SET_SR(c->ssr); r0 = (u32)(s32)(s8)R8(r7); /* slot mov.b @Rm,Rn */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C1B2992 rte */
}

void f_0C1B299C(sh3_t *c)
{
	LOCALS;
L_0C1B299C: BLKS(0x0C1B299Cu);
	IF(0x0C1B299Cu); { u32 t_ = c->spc; SET_SR(c->ssr); W32(r0 + 0x0u, r0); /* slot mov.l Rm,@(disp,Rn) */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C1B299C rte */
}

void f_0C1B29A6(sh3_t *c)
{
	LOCALS;
L_0C1B29A6: BLKS(0x0C1B29A6u);
	IF(0x0C1B29A6u); { u32 t_ = c->spc; SET_SR(c->ssr); W32(r0 + 0x0u, r7); /* slot mov.l Rm,@(disp,Rn) */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C1B29A6 rte */
}

void f_0C1B2F90(sh3_t *c)
{
	LOCALS;
L_0C1B2F90: BLKS(0x0C1B2F90u);
	IF(0x0C1B2F90u); { u32 t_ = c->spc; SET_SR(c->ssr); r0 = (r2 & 0xFFFF0000u) | ((r2 & 0xFF) << 8) | ((r2 >> 8) & 0xFF); /* slot swap.b Rm,Rn */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C1B2F90 rte */
}

void f_0C1B2FA2(sh3_t *c)
{
	LOCALS;
L_0C1B2FA2: BLKS(0x0C1B2FA2u);
	IF(0x0C1B2FA2u); { u32 t_ = c->spc; SET_SR(c->ssr); r0 = (r9 & 0xFFFF0000u) | ((r9 & 0xFF) << 8) | ((r9 >> 8) & 0xFF); /* slot swap.b Rm,Rn */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C1B2FA2 rte */
}

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


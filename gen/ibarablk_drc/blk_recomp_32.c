#include "recomp.h"
#include "blk_recomp_funcs.h"

void blk_f_0C1C0856(sh3_t *c)
{
	LOCALS;
L_0C1C0856: BLKS(0x0C1C0856u);
	IF(0x0C1C0856u); { u32 t_ = PR; W8(r8, r5); /* slot mov.b Rm,@Rn */ UPD(t_, 3); RET(t_); }  /* 0C1C0856 rts */
}

void blk_f_0C1C0868(sh3_t *c)
{
	LOCALS;
L_0C1C0868: BLKS(0x0C1C0868u);
	IF(0x0C1C0868u); { u32 t_ = PR; W8(r8, r10); /* slot mov.b Rm,@Rn */ UPD(t_, 3); RET(t_); }  /* 0C1C0868 rts */
}

void blk_f_0C1C2514(sh3_t *c)
{
	LOCALS;
L_0C1C2514: BLKS(0x0C1C2514u);
	IF(0x0C1C2514u); { u32 tv_ = (r0 + 0x0C1C2518u); u32 t_ = PHYS(tv_); r0 = (u32)(s32)(s8)R8(r0); /* slot mov.b @Rm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C1C2514 braf Rn */
}

void blk_f_0C1C2526(sh3_t *c)
{
	LOCALS;
L_0C1C2526: BLKS(0x0C1C2526u);
	IF(0x0C1C2526u); { u32 tv_ = (r0 + 0x0C1C252Au); u32 t_ = PHYS(tv_); r0 = (u32)(s32)(s8)R8(r7); /* slot mov.b @Rm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C1C2526 braf Rn */
}

void blk_f_0C1C2538(sh3_t *c)
{
	LOCALS;
L_0C1C2538: BLKS(0x0C1C2538u);
	IF(0x0C1C2538u); { u32 tv_ = (r0 + 0x0C1C253Cu); u32 t_ = PHYS(tv_); W32(r0 + 0x0u, r0); /* slot mov.l Rm,@(disp,Rn) */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C1C2538 braf Rn */
}

void blk_f_0C1C254A(sh3_t *c)
{
	LOCALS;
L_0C1C254A: BLKS(0x0C1C254Au);
	IF(0x0C1C254Au); { u32 tv_ = (r0 + 0x0C1C254Eu); u32 t_ = PHYS(tv_); W32(r0 + 0x0u, r7); /* slot mov.l Rm,@(disp,Rn) */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C1C254A braf Rn */
}

void blk_f_0C1C2924(sh3_t *c)
{
	LOCALS;
L_0C1C2924: BLKS(0x0C1C2924u);
	IF(0x0C1C2924u); { u32 t_ = c->spc; SET_SR(c->ssr); r0 = (u32)(s32)(s8)R8(r0); /* slot mov.b @Rm,Rn */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C1C2924 rte */
}

void blk_f_0C1C292E(sh3_t *c)
{
	LOCALS;
L_0C1C292E: BLKS(0x0C1C292Eu);
	IF(0x0C1C292Eu); { u32 t_ = c->spc; SET_SR(c->ssr); r0 = (u32)(s32)(s8)R8(r7); /* slot mov.b @Rm,Rn */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C1C292E rte */
}

void blk_f_0C1C2938(sh3_t *c)
{
	LOCALS;
L_0C1C2938: BLKS(0x0C1C2938u);
	IF(0x0C1C2938u); { u32 t_ = c->spc; SET_SR(c->ssr); W32(r0 + 0x0u, r0); /* slot mov.l Rm,@(disp,Rn) */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C1C2938 rte */
}

void blk_f_0C1C2942(sh3_t *c)
{
	LOCALS;
L_0C1C2942: BLKS(0x0C1C2942u);
	IF(0x0C1C2942u); { u32 t_ = c->spc; SET_SR(c->ssr); W32(r0 + 0x0u, r7); /* slot mov.l Rm,@(disp,Rn) */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C1C2942 rte */
}

void blk_f_0C1C2F2C(sh3_t *c)
{
	LOCALS;
L_0C1C2F2C: BLKS(0x0C1C2F2Cu);
	IF(0x0C1C2F2Cu); { u32 t_ = c->spc; SET_SR(c->ssr); r0 = (r2 & 0xFFFF0000u) | ((r2 & 0xFF) << 8) | ((r2 >> 8) & 0xFF); /* slot swap.b Rm,Rn */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C1C2F2C rte */
}

void blk_f_0C1C2F3E(sh3_t *c)
{
	LOCALS;
L_0C1C2F3E: BLKS(0x0C1C2F3Eu);
	IF(0x0C1C2F3Eu); { u32 t_ = c->spc; SET_SR(c->ssr); r0 = (r9 & 0xFFFF0000u) | ((r9 & 0xFF) << 8) | ((r9 >> 8) & 0xFF); /* slot swap.b Rm,Rn */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C1C2F3E rte */
}

void blk_f_0C1C2F50(sh3_t *c)
{
	LOCALS;
L_0C1C2F50: BLKS(0x0C1C2F50u);
	IF(0x0C1C2F50u); { u32 t_ = c->spc; SET_SR(c->ssr); W32(r0 + 0x20u, r2); /* slot mov.l Rm,@(disp,Rn) */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C1C2F50 rte */
}

void blk_f_0C1C2F62(sh3_t *c)
{
	LOCALS;
L_0C1C2F62: BLKS(0x0C1C2F62u);
	IF(0x0C1C2F62u); { u32 t_ = c->spc; SET_SR(c->ssr); W32(r0 + 0x20u, r9); /* slot mov.l Rm,@(disp,Rn) */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C1C2F62 rte */
}

void blk_f_0C1C34C4(sh3_t *c)
{
	LOCALS;
L_0C1C34C4: BLKS(0x0C1C34C4u);
	IF(0x0C1C34C4u); { u32 t_ = c->spc; SET_SR(c->ssr); r0 = (r4 & 0xFFFF0000u) | ((r4 & 0xFF) << 8) | ((r4 >> 8) & 0xFF); /* slot swap.b Rm,Rn */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C1C34C4 rte */
}

void blk_f_0C1C34CE(sh3_t *c)
{
	LOCALS;
L_0C1C34CE: BLKS(0x0C1C34CEu);
	IF(0x0C1C34CEu); { u32 t_ = c->spc; SET_SR(c->ssr); r0 = (r11 & 0xFFFF0000u) | ((r11 & 0xFF) << 8) | ((r11 >> 8) & 0xFF); /* slot swap.b Rm,Rn */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C1C34CE rte */
}

void blk_f_0C1C34D8(sh3_t *c)
{
	LOCALS;
L_0C1C34D8: BLKS(0x0C1C34D8u);
	IF(0x0C1C34D8u); { u32 t_ = c->spc; SET_SR(c->ssr); W32(r0 + 0x20u, r4); /* slot mov.l Rm,@(disp,Rn) */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C1C34D8 rte */
}

void blk_f_0C1C34E2(sh3_t *c)
{
	LOCALS;
L_0C1C34E2: BLKS(0x0C1C34E2u);
	IF(0x0C1C34E2u); { u32 t_ = c->spc; SET_SR(c->ssr); W32(r0 + 0x20u, r11); /* slot mov.l Rm,@(disp,Rn) */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C1C34E2 rte */
}

void blk_f_0C1C83EC(sh3_t *c)
{
	LOCALS;
L_0C1C83EC: BLKS(0x0C1C83ECu);
	IF(0x0C1C83ECu); { u32 t_ = PR; T = (r0 & 0x0u) == 0; /* slot tst #imm,r0 */ UPD(t_, 3); RET(t_); }  /* 0C1C83EC rts */
}

void blk_f_0C1C83F6(sh3_t *c)
{
	LOCALS;
L_0C1C83F6: BLKS(0x0C1C83F6u);
	IF(0x0C1C83F6u); { u32 t_ = PR; T = (r0 & 0x30u) == 0; /* slot tst #imm,r0 */ UPD(t_, 3); RET(t_); }  /* 0C1C83F6 rts */
}

void blk_f_0C1C8400(sh3_t *c)
{
	LOCALS;
L_0C1C8400: BLKS(0x0C1C8400u);
	IF(0x0C1C8400u); { u32 t_ = PR; T = (r0 & 0x60u) == 0; /* slot tst #imm,r0 */ UPD(t_, 3); RET(t_); }  /* 0C1C8400 rts */
}

void blk_f_0C1C840A(sh3_t *c)
{
	LOCALS;
L_0C1C840A: BLKS(0x0C1C840Au);
	IF(0x0C1C840Au); { u32 t_ = PR; T = (r0 & 0x90u) == 0; /* slot tst #imm,r0 */ UPD(t_, 3); RET(t_); }  /* 0C1C840A rts */
}

void blk_f_0C1C8414(sh3_t *c)
{
	LOCALS;
L_0C1C8414: BLKS(0x0C1C8414u);
	IF(0x0C1C8414u); { u32 t_ = PR; r0 = 0x372Fu; /* slot mov.w @(disp,pc),Rn */ UPD(t_, 3); RET(t_); }  /* 0C1C8414 rts */
}

void blk_f_0C1C841E(sh3_t *c)
{
	LOCALS;
L_0C1C841E: BLKS(0x0C1C841Eu);
	IF(0x0C1C841Eu); { u32 t_ = PR; r0 = 0x2090u; /* slot mov.w @(disp,pc),Rn */ UPD(t_, 3); RET(t_); }  /* 0C1C841E rts */
}

void blk_f_0C1C8428(sh3_t *c)
{
	LOCALS;
L_0C1C8428: BLKS(0x0C1C8428u);
	IF(0x0C1C8428u); { u32 t_ = PR; r0 = 0xFFFF836Au; /* slot mov.w @(disp,pc),Rn */ UPD(t_, 3); RET(t_); }  /* 0C1C8428 rts */
}

void blk_f_0C1C8432(sh3_t *c)
{
	LOCALS;
L_0C1C8432: BLKS(0x0C1C8432u);
	IF(0x0C1C8432u); { u32 t_ = PR; r0 = 0xC1Cu; /* slot mov.w @(disp,pc),Rn */ UPD(t_, 3); RET(t_); }  /* 0C1C8432 rts */
}

void blk_f_0C1C843C(sh3_t *c)
{
	LOCALS;
L_0C1C843C: BLKS(0x0C1C843Cu);
	IF(0x0C1C843Cu); { u32 t_ = PR; r8 = R32(r0 + 0x0u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); RET(t_); }  /* 0C1C843C rts */
}

void blk_f_0C1C8446(sh3_t *c)
{
	LOCALS;
L_0C1C8446: BLKS(0x0C1C8446u);
	IF(0x0C1C8446u); { u32 t_ = PR; r8 = R32(r3 + 0x0u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); RET(t_); }  /* 0C1C8446 rts */
}

void blk_f_0C1C8450(sh3_t *c)
{
	LOCALS;
L_0C1C8450: BLKS(0x0C1C8450u);
	IF(0x0C1C8450u); { u32 t_ = PR; r8 = R32(r6 + 0x0u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); RET(t_); }  /* 0C1C8450 rts */
}

void blk_f_0C1C845A(sh3_t *c)
{
	LOCALS;
L_0C1C845A: BLKS(0x0C1C845Au);
	IF(0x0C1C845Au); { u32 t_ = PR; r8 = R32(r9 + 0x0u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); RET(t_); }  /* 0C1C845A rts */
}

void blk_f_0C1C8464(sh3_t *c)
{
	LOCALS;
L_0C1C8464: BLKS(0x0C1C8464u);
	IF(0x0C1C8464u); { u32 t_ = PR; W8(r0, r0); /* slot mov.b Rm,@Rn */ UPD(t_, 3); RET(t_); }  /* 0C1C8464 rts */
}

void blk_f_0C1C846E(sh3_t *c)
{
	LOCALS;
L_0C1C846E: BLKS(0x0C1C846Eu);
	IF(0x0C1C846Eu); { u32 t_ = PR; W8(r0, r3); /* slot mov.b Rm,@Rn */ UPD(t_, 3); RET(t_); }  /* 0C1C846E rts */
}

void blk_f_0C1C8478(sh3_t *c)
{
	LOCALS;
L_0C1C8478: BLKS(0x0C1C8478u);
	IF(0x0C1C8478u); { u32 t_ = PR; W8(r0, r6); /* slot mov.b Rm,@Rn */ UPD(t_, 3); RET(t_); }  /* 0C1C8478 rts */
}

void blk_f_0C1C8482(sh3_t *c)
{
	LOCALS;
L_0C1C8482: BLKS(0x0C1C8482u);
	IF(0x0C1C8482u); { u32 t_ = PR; W8(r0, r9); /* slot mov.b Rm,@Rn */ UPD(t_, 3); RET(t_); }  /* 0C1C8482 rts */
}

void blk_f_0C1CC6BC(sh3_t *c)
{
	LOCALS;
L_0C1CC6BC: BLKS(0x0C1CC6BCu);
	IF(0x0C1CC6BCu); { u32 t_ = PR; r8 = 0xFFFFFFD8u; /* slot mov #imm,Rn */ UPD(t_, 3); RET(t_); }  /* 0C1CC6BC rts */
}

void blk_f_0C1CC6C6(sh3_t *c)
{
	LOCALS;
L_0C1CC6C6: BLKS(0x0C1CC6C6u);
	IF(0x0C1CC6C6u); { u32 t_ = PR; r0 = 0xC1CC934u; /* slot mov.l @(disp,pc),Rn */ UPD(t_, 3); RET(t_); }  /* 0C1CC6C6 rts */
}

void blk_f_0C1CC6E4(sh3_t *c)
{
	LOCALS;
L_0C1CC6E4: BLKS(0x0C1CC6E4u);
	IF(0x0C1CC6E4u); { u32 t_ = PR; T = r0 == 0xFFFFFFD8u; /* slot cmp/eq #imm,r0 */ UPD(t_, 3); RET(t_); }  /* 0C1CC6E4 rts */
}

void blk_f_0C1CC6EE(sh3_t *c)
{
	LOCALS;
L_0C1CC6EE: BLKS(0x0C1CC6EEu);
	IF(0x0C1CC6EEu); { u32 t_ = PR; r0 += 0xFFFFFFD8u; /* slot add #imm,Rn */ UPD(t_, 3); RET(t_); }  /* 0C1CC6EE rts */
}

void blk_f_0C1CC6F8(sh3_t *c)
{
	LOCALS;
L_0C1CC6F8: BLKS(0x0C1CC6F8u);
	IF(0x0C1CC6F8u); { u32 t_ = PR; r8 = R32(r13 + 0x20u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); RET(t_); }  /* 0C1CC6F8 rts */
}

void blk_f_0C1CC70C(sh3_t *c)
{
	LOCALS;
L_0C1CC70C: BLKS(0x0C1CC70Cu);
	IF(0x0C1CC70Cu); { u32 t_ = PR; T = (r8 & r13) == 0; /* slot tst Rm,Rn */ UPD(t_, 3); RET(t_); }  /* 0C1CC70C rts */
}


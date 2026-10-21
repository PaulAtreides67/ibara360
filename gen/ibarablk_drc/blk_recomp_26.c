#include "recomp.h"
#include "blk_recomp_funcs.h"

void blk_f_0C1B7C98(sh3_t *c)
{
	LOCALS;
L_0C1B7C98: BLKS(0x0C1B7C98u);
	IF(0x0C1B7C98u); { u32 t_ = PR; r0 += 0x0u; /* slot add #imm,Rn */ UPD(t_, 3); RET(t_); }  /* 0C1B7C98 rts */
}

void blk_f_0C1B7CA2(sh3_t *c)
{
	LOCALS;
L_0C1B7CA2: BLKS(0x0C1B7CA2u);
	IF(0x0C1B7CA2u); { u32 t_ = PR; r0 += 0x50u; /* slot add #imm,Rn */ UPD(t_, 3); RET(t_); }  /* 0C1B7CA2 rts */
}

void blk_f_0C1B7CAC(sh3_t *c)
{
	LOCALS;
L_0C1B7CAC: BLKS(0x0C1B7CACu);
	IF(0x0C1B7CACu); { u32 t_ = PR; r0 += 0xFFFFFFA0u; /* slot add #imm,Rn */ UPD(t_, 3); RET(t_); }  /* 0C1B7CAC rts */
}

void blk_f_0C1B7CB6(sh3_t *c)
{
	LOCALS;
L_0C1B7CB6: BLKS(0x0C1B7CB6u);
	IF(0x0C1B7CB6u); { u32 t_ = PR; W8(r8, r0); /* slot mov.b Rm,@Rn */ UPD(t_, 3); RET(t_); }  /* 0C1B7CB6 rts */
}

void blk_f_0C1B7CC0(sh3_t *c)
{
	LOCALS;
L_0C1B7CC0: BLKS(0x0C1B7CC0u);
	IF(0x0C1B7CC0u); { u32 t_ = PR; W8(r8, r5); /* slot mov.b Rm,@Rn */ UPD(t_, 3); RET(t_); }  /* 0C1B7CC0 rts */
}

void blk_f_0C1B7CCA(sh3_t *c)
{
	LOCALS;
L_0C1B7CCA: BLKS(0x0C1B7CCAu);
	IF(0x0C1B7CCAu); { u32 t_ = PR; W8(r8, r10); /* slot mov.b Rm,@Rn */ UPD(t_, 3); RET(t_); }  /* 0C1B7CCA rts */
}

void blk_f_0C1BE0D0(sh3_t *c)
{
	LOCALS;
L_0C1BE0D0: BLKS(0x0C1BE0D0u);
	IF(0x0C1BE0D0u); { u32 t_ = PR; IF(0x0C1BE0D2u); T = r0 >> 31; r0 <<= 1; /* slot shll Rn */ UPD(t_, 3); RET(t_); }  /* 0C1BE0D0 rts */
}

void blk_f_0C1BF26C(sh3_t *c)
{
	LOCALS;
L_0C1BF26C: BLKS(0x0C1BF26Cu);
	IF(0x0C1BF26Cu); { u32 t_ = PR; W8(r0, r0); /* slot mov.b Rm,@Rn */ UPD(t_, 3); RET(t_); }  /* 0C1BF26C rts */
}

void blk_f_0C1BF276(sh3_t *c)
{
	LOCALS;
L_0C1BF276: BLKS(0x0C1BF276u);
	IF(0x0C1BF276u); { u32 t_ = PR; T = (r0 & r2) == 0; /* slot tst Rm,Rn */ UPD(t_, 3); RET(t_); }  /* 0C1BF276 rts */
}

void blk_f_0C1BF280(sh3_t *c)
{
	LOCALS;
L_0C1BF280: BLKS(0x0C1BF280u);
	IF(0x0C1BF280u); { u32 t_ = PR; W8(r0, r5); /* slot mov.b Rm,@Rn */ UPD(t_, 3); RET(t_); }  /* 0C1BF280 rts */
}

void blk_f_0C1BF28A(sh3_t *c)
{
	LOCALS;
L_0C1BF28A: BLKS(0x0C1BF28Au);
	IF(0x0C1BF28Au); { u32 t_ = PR; T = (r0 & r7) == 0; /* slot tst Rm,Rn */ UPD(t_, 3); RET(t_); }  /* 0C1BF28A rts */
}

void blk_f_0C1BF294(sh3_t *c)
{
	LOCALS;
L_0C1BF294: BLKS(0x0C1BF294u);
	IF(0x0C1BF294u); { u32 t_ = PR; W8(r0, r10); /* slot mov.b Rm,@Rn */ UPD(t_, 3); RET(t_); }  /* 0C1BF294 rts */
}

void blk_f_0C1BF29E(sh3_t *c)
{
	LOCALS;
L_0C1BF29E: BLKS(0x0C1BF29Eu);
	IF(0x0C1BF29Eu); { u32 t_ = PR; T = (r0 & r12) == 0; /* slot tst Rm,Rn */ UPD(t_, 3); RET(t_); }  /* 0C1BF29E rts */
}

void blk_f_0C1BF2B2(sh3_t *c)
{
	LOCALS;
L_0C1BF2B2: BLKS(0x0C1BF2B2u);
	IF(0x0C1BF2B2u); { u32 t_ = PR; IF(0x0C1BF2B4u); MACH = 0; MACL = 0; /* slot clrmac */ UPD(t_, 3); RET(t_); }  /* 0C1BF2B2 rts */
}

void blk_f_0C1C080E(sh3_t *c)
{
	LOCALS;
L_0C1C080E: BLKS(0x0C1C080Eu);
	IF(0x0C1C080Eu); { u32 t_ = PR; r0 += 0x0u; /* slot add #imm,Rn */ UPD(t_, 3); RET(t_); }  /* 0C1C080E rts */
}

void blk_f_0C1C0820(sh3_t *c)
{
	LOCALS;
L_0C1C0820: BLKS(0x0C1C0820u);
	IF(0x0C1C0820u); { u32 t_ = PR; r0 += 0x50u; /* slot add #imm,Rn */ UPD(t_, 3); RET(t_); }  /* 0C1C0820 rts */
}

void blk_f_0C1C0832(sh3_t *c)
{
	LOCALS;
L_0C1C0832: BLKS(0x0C1C0832u);
	IF(0x0C1C0832u); { u32 t_ = PR; r0 += 0xFFFFFFA0u; /* slot add #imm,Rn */ UPD(t_, 3); RET(t_); }  /* 0C1C0832 rts */
}

void blk_f_0C1C0844(sh3_t *c)
{
	LOCALS;
L_0C1C0844: BLKS(0x0C1C0844u);
	IF(0x0C1C0844u); { u32 t_ = PR; W8(r8, r0); /* slot mov.b Rm,@Rn */ UPD(t_, 3); RET(t_); }  /* 0C1C0844 rts */
}

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


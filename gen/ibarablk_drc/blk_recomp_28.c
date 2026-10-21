#include "recomp.h"
#include "blk_recomp_funcs.h"

void blk_f_0C1D3028(sh3_t *c)
{
	LOCALS;
L_0C1D3028: BLKS(0x0C1D3028u);
	IF(0x0C1D3028u); { u32 tv_ = (r0 + 0x0C1D302Cu); u32 t_ = PHYS(tv_); W32(r0 + 0x0u, r3); /* slot mov.l Rm,@(disp,Rn) */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C1D3028 braf Rn */
}

void blk_f_0C1D3032(sh3_t *c)
{
	LOCALS;
L_0C1D3032: BLKS(0x0C1D3032u);
	IF(0x0C1D3032u); { u32 tv_ = (r0 + 0x0C1D3036u); u32 t_ = PHYS(tv_); W32(r0 + 0x0u, r6); /* slot mov.l Rm,@(disp,Rn) */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C1D3032 braf Rn */
}

void blk_f_0C1D3046(sh3_t *c)
{
	LOCALS;
L_0C1D3046: BLKS(0x0C1D3046u);
	IF(0x0C1D3046u); { u32 tv_ = (r0 + 0x0C1D304Au); u32 t_ = PHYS(tv_); W32(r0 + 0x0u, r12); /* slot mov.l Rm,@(disp,Rn) */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C1D3046 braf Rn */
}

void blk_f_0C1D36B4(sh3_t *c)
{
	LOCALS;
L_0C1D36B4: BLKS(0x0C1D36B4u);
	IF(0x0C1D36B4u); { u32 t_ = c->spc; SET_SR(c->ssr); W8(c->gbr + 0x0u, r0); /* slot mov.b r0,@(disp,gbr) */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C1D36B4 rte */
}

void blk_f_0C1D36BE(sh3_t *c)
{
	LOCALS;
L_0C1D36BE: BLKS(0x0C1D36BEu);
	IF(0x0C1D36BEu); { u32 t_ = c->spc; SET_SR(c->ssr); W8(c->gbr + 0x40u, r0); /* slot mov.b r0,@(disp,gbr) */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C1D36BE rte */
}

void blk_f_0C1D36C8(sh3_t *c)
{
	LOCALS;
L_0C1D36C8: BLKS(0x0C1D36C8u);
	IF(0x0C1D36C8u); { u32 t_ = c->spc; SET_SR(c->ssr); W8(c->gbr + 0x80u, r0); /* slot mov.b r0,@(disp,gbr) */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C1D36C8 rte */
}

void blk_f_0C1D36D2(sh3_t *c)
{
	LOCALS;
L_0C1D36D2: BLKS(0x0C1D36D2u);
	IF(0x0C1D36D2u); { u32 t_ = c->spc; SET_SR(c->ssr); W8(c->gbr + 0xC0u, r0); /* slot mov.b r0,@(disp,gbr) */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C1D36D2 rte */
}

void blk_f_0C1D36DC(sh3_t *c)
{
	LOCALS;
L_0C1D36DC: BLKS(0x0C1D36DCu);
	IF(0x0C1D36DCu); { u32 t_ = c->spc; SET_SR(c->ssr); W8(r0 + 0x0u, r0); /* slot mov.b r0,@(disp,Rn) */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C1D36DC rte */
}

void blk_f_0C1D36E6(sh3_t *c)
{
	LOCALS;
L_0C1D36E6: BLKS(0x0C1D36E6u);
	IF(0x0C1D36E6u); { u32 t_ = c->spc; SET_SR(c->ssr); W8(r4 + 0x0u, r0); /* slot mov.b r0,@(disp,Rn) */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C1D36E6 rte */
}

void blk_f_0C1D36F0(sh3_t *c)
{
	LOCALS;
L_0C1D36F0: BLKS(0x0C1D36F0u);
	IF(0x0C1D36F0u); { u32 t_ = c->spc; SET_SR(c->ssr); W8(r8 + 0x0u, r0); /* slot mov.b r0,@(disp,Rn) */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C1D36F0 rte */
}

void blk_f_0C1D36FA(sh3_t *c)
{
	LOCALS;
L_0C1D36FA: BLKS(0x0C1D36FAu);
	IF(0x0C1D36FAu); { u32 t_ = c->spc; SET_SR(c->ssr); W8(r12 + 0x0u, r0); /* slot mov.b r0,@(disp,Rn) */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C1D36FA rte */
}

void blk_f_0C1D3704(sh3_t *c)
{
	LOCALS;
L_0C1D3704: BLKS(0x0C1D3704u);
	IF(0x0C1D3704u); { u32 t_ = c->spc; SET_SR(c->ssr); IF(0x0C1D3706u); T = r0 >> 31; r0 <<= 1; /* slot shll Rn */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C1D3704 rte */
}

void blk_f_0C1DA79A(sh3_t *c)
{
	LOCALS;
L_0C1DA79A: BLKS(0x0C1DA79Au);
	IF(0x0C1DA79Au); r0 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C1DA79Cu, 1);  /* 0C1DA79A mov.b @(r0,Rm),Rn */
	IF(0x0C1DA79Cu); { u32 t_ = c->spc; SET_SR(c->ssr); IF(0x0C1DA79Eu); r0 = (u32)(s32)(s16)R16(r0 + r2); /* slot mov.w @(r0,Rm),Rn */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C1DA79C rte */
}

void blk_f_0C1DAAA4(sh3_t *c)
{
	LOCALS;
L_0C1DAAA4: BLKS(0x0C1DAAA4u);
	IF(0x0C1DAAA4u); { u32 t_ = PR; W8(r0 + 0x0u, r0); /* slot mov.b r0,@(disp,Rn) */ UPD(t_, 3); RET(t_); }  /* 0C1DAAA4 rts */
}

void blk_f_0C1DAAC6(sh3_t *c)
{
	LOCALS;
L_0C1DAAC6: BLKS(0x0C1DAAC6u);
	IF(0x0C1DAAC6u); { u32 t_ = PR; W8(r7 + 0x8u, r0); /* slot mov.b r0,@(disp,Rn) */ UPD(t_, 3); RET(t_); }  /* 0C1DAAC6 rts */
}

void blk_f_0C1DF064(sh3_t *c)
{
	LOCALS;
L_0C1DF064: BLKS(0x0C1DF064u);
	IF(0x0C1DF064u); { u32 t_ = PR; r8 = (u32)(s32)(s8)R8(r12); /* slot mov.b @Rm,Rn */ UPD(t_, 3); RET(t_); }  /* 0C1DF064 rts */
}

void blk_f_0C1E3CF0(sh3_t *c)
{
	LOCALS;
L_0C1E3CF0: BLKS(0x0C1E3CF0u);
	IF(0x0C1E3CF0u); { u32 t_ = PR; W8(r0 + 0x0u, r0); /* slot mov.b r0,@(disp,Rn) */ UPD(t_, 3); RET(t_); }  /* 0C1E3CF0 rts */
}

void blk_f_0C1E3CFA(sh3_t *c)
{
	LOCALS;
L_0C1E3CFA: BLKS(0x0C1E3CFAu);
	IF(0x0C1E3CFAu); { u32 t_ = PR; W8(r3 + 0x0u, r0); /* slot mov.b r0,@(disp,Rn) */ UPD(t_, 3); RET(t_); }  /* 0C1E3CFA rts */
}

void blk_f_0C1E3D04(sh3_t *c)
{
	LOCALS;
L_0C1E3D04: BLKS(0x0C1E3D04u);
	IF(0x0C1E3D04u); { u32 t_ = PR; W8(r6 + 0x0u, r0); /* slot mov.b r0,@(disp,Rn) */ UPD(t_, 3); RET(t_); }  /* 0C1E3D04 rts */
}

void blk_f_0C1E3D0E(sh3_t *c)
{
	LOCALS;
L_0C1E3D0E: BLKS(0x0C1E3D0Eu);
	IF(0x0C1E3D0Eu); { u32 t_ = PR; W8(r9 + 0x0u, r0); /* slot mov.b r0,@(disp,Rn) */ UPD(t_, 3); RET(t_); }  /* 0C1E3D0E rts */
}

void blk_f_0C1E3D18(sh3_t *c)
{
	LOCALS;
L_0C1E3D18: BLKS(0x0C1E3D18u);
	IF(0x0C1E3D18u); { u32 t_ = PR; r8 = R32(r0 + 0x0u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); RET(t_); }  /* 0C1E3D18 rts */
}

void blk_f_0C1E3D22(sh3_t *c)
{
	LOCALS;
L_0C1E3D22: BLKS(0x0C1E3D22u);
	IF(0x0C1E3D22u); { u32 t_ = PR; r8 = R32(r3 + 0x0u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); RET(t_); }  /* 0C1E3D22 rts */
}

void blk_f_0C1E3D2C(sh3_t *c)
{
	LOCALS;
L_0C1E3D2C: BLKS(0x0C1E3D2Cu);
	IF(0x0C1E3D2Cu); { u32 t_ = PR; r8 = R32(r6 + 0x0u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); RET(t_); }  /* 0C1E3D2C rts */
}

void blk_f_0C1E3D36(sh3_t *c)
{
	LOCALS;
L_0C1E3D36: BLKS(0x0C1E3D36u);
	IF(0x0C1E3D36u); { u32 t_ = PR; r8 = R32(r9 + 0x0u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); RET(t_); }  /* 0C1E3D36 rts */
}

void blk_f_0C1E658C(sh3_t *c)
{
	LOCALS;
L_0C1E658C: BLKS(0x0C1E658Cu);
	IF(0x0C1E658Cu); { u32 t_ = PR; r0 = (u32)(s32)(s8)R8(r0); /* slot mov.b @Rm,Rn */ UPD(t_, 3); RET(t_); }  /* 0C1E658C rts */
}

void blk_f_0C1E6596(sh3_t *c)
{
	LOCALS;
L_0C1E6596: BLKS(0x0C1E6596u);
	IF(0x0C1E6596u); { u32 t_ = PR; r0 = (r6 & 0xFFFF0000u) | ((r6 & 0xFF) << 8) | ((r6 >> 8) & 0xFF); /* slot swap.b Rm,Rn */ UPD(t_, 3); RET(t_); }  /* 0C1E6596 rts */
}

void blk_f_0C1E65A0(sh3_t *c)
{
	LOCALS;
L_0C1E65A0: BLKS(0x0C1E65A0u);
	IF(0x0C1E65A0u); { u32 t_ = PR; W32(r0 + 0x0u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); RET(t_); }  /* 0C1E65A0 rts */
}

void blk_f_0C1E65AA(sh3_t *c)
{
	LOCALS;
L_0C1E65AA: BLKS(0x0C1E65AAu);
	IF(0x0C1E65AAu); { u32 t_ = PR; W32(r0 + 0x20u, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); RET(t_); }  /* 0C1E65AA rts */
}


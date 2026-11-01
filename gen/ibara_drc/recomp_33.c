#include "recomp.h"
#include "recomp_funcs.h"

void f_0C1CED6A(sh3_t *c)
{
	LOCALS;
L_0C1CED6A: BLKS(0x0C1CED6Au);
	IF(0x0C1CED6Au); { u32 tv_ = (r0 + 0x0C1CED6Eu); u32 t_ = PHYS(tv_); W32(r0 + 0x0u, r0); /* slot mov.l Rm,@(disp,Rn) */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C1CED6A braf Rn */
}

void f_0C1CED74(sh3_t *c)
{
	LOCALS;
L_0C1CED74: BLKS(0x0C1CED74u);
	IF(0x0C1CED74u); { u32 tv_ = (r0 + 0x0C1CED78u); u32 t_ = PHYS(tv_); W32(r0 + 0x0u, r3); /* slot mov.l Rm,@(disp,Rn) */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C1CED74 braf Rn */
}

void f_0C1CED7E(sh3_t *c)
{
	LOCALS;
L_0C1CED7E: BLKS(0x0C1CED7Eu);
	IF(0x0C1CED7Eu); { u32 tv_ = (r0 + 0x0C1CED82u); u32 t_ = PHYS(tv_); W32(r0 + 0x0u, r6); /* slot mov.l Rm,@(disp,Rn) */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C1CED7E braf Rn */
}

void f_0C1CED92(sh3_t *c)
{
	LOCALS;
L_0C1CED92: BLKS(0x0C1CED92u);
	IF(0x0C1CED92u); { u32 tv_ = (r0 + 0x0C1CED96u); u32 t_ = PHYS(tv_); W32(r0 + 0x0u, r12); /* slot mov.l Rm,@(disp,Rn) */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C1CED92 braf Rn */
}

void f_0C1CF400(sh3_t *c)
{
	LOCALS;
L_0C1CF400: BLKS(0x0C1CF400u);
	IF(0x0C1CF400u); { u32 t_ = c->spc; SET_SR(c->ssr); W8(c->gbr + 0x0u, r0); /* slot mov.b r0,@(disp,gbr) */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C1CF400 rte */
}

void f_0C1CF40A(sh3_t *c)
{
	LOCALS;
L_0C1CF40A: BLKS(0x0C1CF40Au);
	IF(0x0C1CF40Au); { u32 t_ = c->spc; SET_SR(c->ssr); W8(c->gbr + 0x40u, r0); /* slot mov.b r0,@(disp,gbr) */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C1CF40A rte */
}

void f_0C1CF414(sh3_t *c)
{
	LOCALS;
L_0C1CF414: BLKS(0x0C1CF414u);
	IF(0x0C1CF414u); { u32 t_ = c->spc; SET_SR(c->ssr); W8(c->gbr + 0x80u, r0); /* slot mov.b r0,@(disp,gbr) */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C1CF414 rte */
}

void f_0C1CF41E(sh3_t *c)
{
	LOCALS;
L_0C1CF41E: BLKS(0x0C1CF41Eu);
	IF(0x0C1CF41Eu); { u32 t_ = c->spc; SET_SR(c->ssr); W8(c->gbr + 0xC0u, r0); /* slot mov.b r0,@(disp,gbr) */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C1CF41E rte */
}

void f_0C1CF428(sh3_t *c)
{
	LOCALS;
L_0C1CF428: BLKS(0x0C1CF428u);
	IF(0x0C1CF428u); { u32 t_ = c->spc; SET_SR(c->ssr); W8(r0 + 0x0u, r0); /* slot mov.b r0,@(disp,Rn) */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C1CF428 rte */
}

void f_0C1CF432(sh3_t *c)
{
	LOCALS;
L_0C1CF432: BLKS(0x0C1CF432u);
	IF(0x0C1CF432u); { u32 t_ = c->spc; SET_SR(c->ssr); W8(r4 + 0x0u, r0); /* slot mov.b r0,@(disp,Rn) */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C1CF432 rte */
}

void f_0C1CF43C(sh3_t *c)
{
	LOCALS;
L_0C1CF43C: BLKS(0x0C1CF43Cu);
	IF(0x0C1CF43Cu); { u32 t_ = c->spc; SET_SR(c->ssr); W8(r8 + 0x0u, r0); /* slot mov.b r0,@(disp,Rn) */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C1CF43C rte */
}

void f_0C1CF446(sh3_t *c)
{
	LOCALS;
L_0C1CF446: BLKS(0x0C1CF446u);
	IF(0x0C1CF446u); { u32 t_ = c->spc; SET_SR(c->ssr); W8(r12 + 0x0u, r0); /* slot mov.b r0,@(disp,Rn) */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C1CF446 rte */
}

void f_0C1CF450(sh3_t *c)
{
	LOCALS;
L_0C1CF450: BLKS(0x0C1CF450u);
	IF(0x0C1CF450u); { u32 t_ = c->spc; SET_SR(c->ssr); IF(0x0C1CF452u); T = r0 >> 31; r0 <<= 1; /* slot shll Rn */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C1CF450 rte */
}

void f_0C1D64E6(sh3_t *c)
{
	LOCALS;
L_0C1D64E6: BLKS(0x0C1D64E6u);
	IF(0x0C1D64E6u); r0 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C1D64E8u, 1);  /* 0C1D64E6 mov.b @(r0,Rm),Rn */
	IF(0x0C1D64E8u); { u32 t_ = c->spc; SET_SR(c->ssr); IF(0x0C1D64EAu); r0 = (u32)(s32)(s16)R16(r0 + r2); /* slot mov.w @(r0,Rm),Rn */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C1D64E8 rte */
}

void f_0C1D67F0(sh3_t *c)
{
	LOCALS;
L_0C1D67F0: BLKS(0x0C1D67F0u);
	IF(0x0C1D67F0u); { u32 t_ = PR; W8(r0 + 0x0u, r0); /* slot mov.b r0,@(disp,Rn) */ UPD(t_, 3); RET(t_); }  /* 0C1D67F0 rts */
}

void f_0C1D6812(sh3_t *c)
{
	LOCALS;
L_0C1D6812: BLKS(0x0C1D6812u);
	IF(0x0C1D6812u); { u32 t_ = PR; W8(r7 + 0x8u, r0); /* slot mov.b r0,@(disp,Rn) */ UPD(t_, 3); RET(t_); }  /* 0C1D6812 rts */
}


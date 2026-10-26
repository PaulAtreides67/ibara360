#include "recomp.h"
#include "blk_recomp_funcs.h"

void blk_f_0C1CC716(sh3_t *c)
{
	LOCALS;
L_0C1CC716: BLKS(0x0C1CC716u);
	IF(0x0C1CC716u); { u32 t_ = PR; W32(r0 + 0x20u, r13); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); RET(t_); }  /* 0C1CC716 rts */
}

void blk_f_0C1CC72A(sh3_t *c)
{
	LOCALS;
L_0C1CC72A: BLKS(0x0C1CC72Au);
	IF(0x0C1CC72Au); { u32 t_ = PR; IF(0x0C1CC72Cu); T = 1; /* slot sett */ UPD(t_, 3); RET(t_); }  /* 0C1CC72A rts */
}

void blk_f_0C1CC73E(sh3_t *c)
{
	LOCALS;
L_0C1CC73E: BLKS(0x0C1CC73Eu);
	IF(0x0C1CC73Eu); { u32 t_ = PR; IF(0x0C1CC740u); ARG0(0x0048u); c->sr &= ~SR_S; /* slot clrs */ UPD(t_, 3); RET(t_); }  /* 0C1CC73E rts */
}

void blk_f_0C1CED1A(sh3_t *c)
{
	LOCALS;
L_0C1CED1A: BLKS(0x0C1CED1Au);
	IF(0x0C1CED1Au); { u32 t_ = PR; r0 = (u32)(s32)(s8)R8(r0); /* slot mov.b @Rm,Rn */ UPD(t_, 3); RET(t_); }  /* 0C1CED1A rts */
}

void blk_f_0C1CED24(sh3_t *c)
{
	LOCALS;
L_0C1CED24: BLKS(0x0C1CED24u);
	IF(0x0C1CED24u); { u32 t_ = PR; r0 = (u32)(s32)(s8)R8(r5); /* slot mov.b @Rm,Rn */ UPD(t_, 3); RET(t_); }  /* 0C1CED24 rts */
}

void blk_f_0C1CED2E(sh3_t *c)
{
	LOCALS;
L_0C1CED2E: BLKS(0x0C1CED2Eu);
	IF(0x0C1CED2Eu); { u32 t_ = PR; W32(r8 + 0x0u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); RET(t_); }  /* 0C1CED2E rts */
}

void blk_f_0C1CED38(sh3_t *c)
{
	LOCALS;
L_0C1CED38: BLKS(0x0C1CED38u);
	IF(0x0C1CED38u); { u32 t_ = PR; T = (r0 & r6) == 0; /* slot tst Rm,Rn */ UPD(t_, 3); RET(t_); }  /* 0C1CED38 rts */
}

void blk_f_0C1D15BC(sh3_t *c)
{
	LOCALS;
L_0C1D15BC: BLKS(0x0C1D15BCu);
	IF(0x0C1D15BCu); { u32 t_ = PR; W8(r0 + 0x0u, r0); /* slot mov.b r0,@(disp,Rn) */ UPD(t_, 3); RET(t_); }  /* 0C1D15BC rts */
}

void blk_f_0C1D15C6(sh3_t *c)
{
	LOCALS;
L_0C1D15C6: BLKS(0x0C1D15C6u);
	IF(0x0C1D15C6u); { u32 t_ = PR; W8(r8 + 0x0u, r0); /* slot mov.b r0,@(disp,Rn) */ UPD(t_, 3); RET(t_); }  /* 0C1D15C6 rts */
}

void blk_f_0C1D2EB6(sh3_t *c)
{
	LOCALS;
L_0C1D2EB6: BLKS(0x0C1D2EB6u);
	IF(0x0C1D2EB6u); r0 = c->vbr;  /* 0C1D2EB6 stc vbr,Rn */
	{ r6 = 0xFFFFFFE8u; /* slot mov #imm,Rn */ UPD(0x0C1D303Cu, 4); goto L_0C1D303C; }  /* 0C1D2EB8 bra */
L_0C1D303C: BLKS(0x0C1D303Cu);
	IF(0x0C1D303Cu); { u32 tv_ = (r0 + 0x0C1D3040u); u32 t_ = PHYS(tv_); W32(r0 + 0x0u, r9); /* slot mov.l Rm,@(disp,Rn) */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C1D303C braf Rn */
}

void blk_f_0C1D2F56(sh3_t *c)
{
	LOCALS;
L_0C1D2F56: BLKS(0x0C1D2F56u);
	IF(0x0C1D2F56u); { u32 tv_ = (r0 + 0x0C1D2F5Au); u32 t_ = PHYS(tv_); r0 = 0x2F2F0000u; /* slot mov.l @(disp,pc),Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C1D2F56 braf Rn */
}

void blk_f_0C1D2F60(sh3_t *c)
{
	LOCALS;
L_0C1D2F60: BLKS(0x0C1D2F60u);
	IF(0x0C1D2F60u); { u32 tv_ = (r0 + 0x0C1D2F64u); u32 t_ = PHYS(tv_); r0 = 0x2F2F0000u; /* slot mov.l @(disp,pc),Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C1D2F60 braf Rn */
}

void blk_f_0C1D2F6A(sh3_t *c)
{
	LOCALS;
L_0C1D2F6A: BLKS(0x0C1D2F6Au);
	IF(0x0C1D2F6Au); { u32 tv_ = (r0 + 0x0C1D2F6Eu); u32 t_ = PHYS(tv_); r0 = 0xC1D2E5Cu; /* slot mov.l @(disp,pc),Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C1D2F6A braf Rn */
}

void blk_f_0C1D2F74(sh3_t *c)
{
	LOCALS;
L_0C1D2F74: BLKS(0x0C1D2F74u);
	IF(0x0C1D2F74u); { u32 tv_ = (r0 + 0x0C1D2F78u); u32 t_ = PHYS(tv_); r0 = 0xC1D2F56u; /* slot mov.l @(disp,pc),Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C1D2F74 braf Rn */
}

void blk_f_0C1D2F7E(sh3_t *c)
{
	LOCALS;
L_0C1D2F7E: BLKS(0x0C1D2F7Eu);
	IF(0x0C1D2F7Eu); { u32 tv_ = (r0 + 0x0C1D2F82u); u32 t_ = PHYS(tv_); r0 = 0xC1D30DCu; /* slot mov.l @(disp,pc),Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C1D2F7E braf Rn */
}

void blk_f_0C1D2FBA(sh3_t *c)
{
	LOCALS;
L_0C1D2FBA: BLKS(0x0C1D2FBAu);
	IF(0x0C1D2FBAu); { u32 tv_ = (r0 + 0x0C1D2FBEu); u32 t_ = PHYS(tv_); r0 += 0x0u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C1D2FBA braf Rn */
}

void blk_f_0C1D2FC4(sh3_t *c)
{
	LOCALS;
L_0C1D2FC4: BLKS(0x0C1D2FC4u);
	IF(0x0C1D2FC4u); { u32 tv_ = (r0 + 0x0C1D2FC8u); u32 t_ = PHYS(tv_); r0 += 0x30u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C1D2FC4 braf Rn */
}

void blk_f_0C1D2FCE(sh3_t *c)
{
	LOCALS;
L_0C1D2FCE: BLKS(0x0C1D2FCEu);
	IF(0x0C1D2FCEu); { u32 tv_ = (r0 + 0x0C1D2FD2u); u32 t_ = PHYS(tv_); r0 += 0x60u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C1D2FCE braf Rn */
}

void blk_f_0C1D2FD8(sh3_t *c)
{
	LOCALS;
L_0C1D2FD8: BLKS(0x0C1D2FD8u);
	IF(0x0C1D2FD8u); { u32 tv_ = (r0 + 0x0C1D2FDCu); u32 t_ = PHYS(tv_); r0 += 0xFFFFFF90u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C1D2FD8 braf Rn */
}

void blk_f_0C1D2FE2(sh3_t *c)
{
	LOCALS;
L_0C1D2FE2: BLKS(0x0C1D2FE2u);
	IF(0x0C1D2FE2u); { u32 tv_ = (r0 + 0x0C1D2FE6u); u32 t_ = PHYS(tv_); r0 += 0xFFFFFFC0u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C1D2FE2 braf Rn */
}

void blk_f_0C1D2FEC(sh3_t *c)
{
	LOCALS;
L_0C1D2FEC: BLKS(0x0C1D2FECu);
	IF(0x0C1D2FECu); { u32 tv_ = (r0 + 0x0C1D2FF0u); u32 t_ = PHYS(tv_); IF(0x0C1D2FEEu); T = r0 >> 31; r0 <<= 1; /* slot shll Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C1D2FEC braf Rn */
}

void blk_f_0C1D301E(sh3_t *c)
{
	LOCALS;
L_0C1D301E: BLKS(0x0C1D301Eu);
	IF(0x0C1D301Eu); { u32 tv_ = (r0 + 0x0C1D3022u); u32 t_ = PHYS(tv_); W32(r0 + 0x0u, r0); /* slot mov.l Rm,@(disp,Rn) */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C1D301E braf Rn */
}

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


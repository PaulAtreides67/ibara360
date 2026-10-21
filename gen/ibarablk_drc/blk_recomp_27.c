#include "recomp.h"
#include "blk_recomp_funcs.h"

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


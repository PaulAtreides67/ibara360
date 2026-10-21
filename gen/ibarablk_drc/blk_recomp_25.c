#include "recomp.h"
#include "blk_recomp_funcs.h"

void blk_f_0C1AE5C8(sh3_t *c)
{
	LOCALS;
L_0C1AE5C8: BLKS(0x0C1AE5C8u);
	IF(0x0C1AE5C8u); { u32 tv_ = (r0 + 0x0C1AE5CCu); u32 t_ = PHYS(tv_); r0 = 0x24u; /* slot mov.w @(disp,pc),Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C1AE5C8 braf Rn */
}

void blk_f_0C1AEDBA(sh3_t *c)
{
	LOCALS;
L_0C1AEDBA: BLKS(0x0C1AEDBAu);
	IF(0x0C1AEDBAu); { u32 t_ = c->spc; SET_SR(c->ssr); r0 = 0x2F27202Cu; /* slot mov.l @(disp,pc),Rn */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C1AEDBA rte */
}

void blk_f_0C1AEDCC(sh3_t *c)
{
	LOCALS;
L_0C1AEDCC: BLKS(0x0C1AEDCCu);
	IF(0x0C1AEDCCu); { u32 t_ = c->spc; SET_SR(c->ssr); r0 = 0xA0A0ECEBu; /* slot mov.l @(disp,pc),Rn */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C1AEDCC rte */
}

void blk_f_0C1AEDDE(sh3_t *c)
{
	LOCALS;
L_0C1AEDDE: BLKS(0x0C1AEDDEu);
	IF(0x0C1AEDDEu); { u32 t_ = c->spc; SET_SR(c->ssr); r0 = 0x4050EBECu; /* slot mov.l @(disp,pc),Rn */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C1AEDDE rte */
}

void blk_f_0C1AEDF0(sh3_t *c)
{
	LOCALS;
L_0C1AEDF0: BLKS(0x0C1AEDF0u);
	IF(0x0C1AEDF0u); { u32 t_ = c->spc; SET_SR(c->ssr); r0 = 0x2Cu; /* slot mov.l @(disp,pc),Rn */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C1AEDF0 rte */
}

void blk_f_0C1AEE02(sh3_t *c)
{
	LOCALS;
L_0C1AEE02: BLKS(0x0C1AEE02u);
	IF(0x0C1AEE02u); { u32 t_ = c->spc; SET_SR(c->ssr); r0 = 0x402Bu; /* slot mov.l @(disp,pc),Rn */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C1AEE02 rte */
}

void blk_f_0C1AEE14(sh3_t *c)
{
	LOCALS;
L_0C1AEE14: BLKS(0x0C1AEE14u);
	IF(0x0C1AEE14u); { u32 t_ = c->spc; SET_SR(c->ssr); r0 = 0xD0E84747u; /* slot mov.l @(disp,pc),Rn */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C1AEE14 rte */
}

void blk_f_0C1AEE92(sh3_t *c)
{
	LOCALS;
L_0C1AEE92: BLKS(0x0C1AEE92u);
	IF(0x0C1AEE92u); { u32 t_ = c->spc; SET_SR(c->ssr); r0 += 0x0u; /* slot add #imm,Rn */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C1AEE92 rte */
}

void blk_f_0C1AEEA4(sh3_t *c)
{
	LOCALS;
L_0C1AEEA4: BLKS(0x0C1AEEA4u);
	IF(0x0C1AEEA4u); { u32 t_ = c->spc; SET_SR(c->ssr); r0 += 0x28u; /* slot add #imm,Rn */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C1AEEA4 rte */
}

void blk_f_0C1AEEB6(sh3_t *c)
{
	LOCALS;
L_0C1AEEB6: BLKS(0x0C1AEEB6u);
	IF(0x0C1AEEB6u); { u32 t_ = c->spc; SET_SR(c->ssr); r0 += 0x50u; /* slot add #imm,Rn */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C1AEEB6 rte */
}

void blk_f_0C1AEEC8(sh3_t *c)
{
	LOCALS;
L_0C1AEEC8: BLKS(0x0C1AEEC8u);
	IF(0x0C1AEEC8u); { u32 t_ = c->spc; SET_SR(c->ssr); r0 += 0x78u; /* slot add #imm,Rn */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C1AEEC8 rte */
}

void blk_f_0C1AEEDA(sh3_t *c)
{
	LOCALS;
L_0C1AEEDA: BLKS(0x0C1AEEDAu);
	IF(0x0C1AEEDAu); { u32 t_ = c->spc; SET_SR(c->ssr); r0 += 0xFFFFFFA0u; /* slot add #imm,Rn */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C1AEEDA rte */
}

void blk_f_0C1AEEEC(sh3_t *c)
{
	LOCALS;
L_0C1AEEEC: BLKS(0x0C1AEEECu);
	IF(0x0C1AEEECu); { u32 t_ = c->spc; SET_SR(c->ssr); r0 += 0xFFFFFFC8u; /* slot add #imm,Rn */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C1AEEEC rte */
}

void blk_f_0C1AEEFE(sh3_t *c)
{
	LOCALS;
L_0C1AEEFE: BLKS(0x0C1AEEFEu);
	IF(0x0C1AEEFEu); { u32 t_ = c->spc; SET_SR(c->ssr); IF(0x0C1AEF00u); T = r0 >> 31; r0 <<= 1; /* slot shll Rn */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C1AEEFE rte */
}

void blk_f_0C1AEF10(sh3_t *c)
{
	LOCALS;
L_0C1AEF10: BLKS(0x0C1AEF10u);
	IF(0x0C1AEF10u); { u32 t_ = c->spc; SET_SR(c->ssr); IF(0x0C1AEF12u); r0 <<= 16; /* slot shll16 Rn */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C1AEF10 rte */
}

void blk_f_0C1AEF6A(sh3_t *c)
{
	LOCALS;
L_0C1AEF6A: BLKS(0x0C1AEF6Au);
	IF(0x0C1AEF6Au); { u32 t_ = c->spc; SET_SR(c->ssr); W32(r0 + 0x0u, r0); /* slot mov.l Rm,@(disp,Rn) */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C1AEF6A rte */
}

void blk_f_0C1AEF7C(sh3_t *c)
{
	LOCALS;
L_0C1AEF7C: BLKS(0x0C1AEF7Cu);
	IF(0x0C1AEF7Cu); { u32 t_ = c->spc; SET_SR(c->ssr); W32(r0 + 0x20u, r2); /* slot mov.l Rm,@(disp,Rn) */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C1AEF7C rte */
}

void blk_f_0C1AEF8E(sh3_t *c)
{
	LOCALS;
L_0C1AEF8E: BLKS(0x0C1AEF8Eu);
	IF(0x0C1AEF8Eu); { u32 t_ = c->spc; SET_SR(c->ssr); W32(r0 + 0x0u, r5); /* slot mov.l Rm,@(disp,Rn) */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C1AEF8E rte */
}

void blk_f_0C1AEFA0(sh3_t *c)
{
	LOCALS;
L_0C1AEFA0: BLKS(0x0C1AEFA0u);
	IF(0x0C1AEFA0u); { u32 t_ = c->spc; SET_SR(c->ssr); W32(r0 + 0x20u, r7); /* slot mov.l Rm,@(disp,Rn) */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C1AEFA0 rte */
}

void blk_f_0C1AEFB2(sh3_t *c)
{
	LOCALS;
L_0C1AEFB2: BLKS(0x0C1AEFB2u);
	IF(0x0C1AEFB2u); { u32 t_ = c->spc; SET_SR(c->ssr); W32(r0 + 0x0u, r10); /* slot mov.l Rm,@(disp,Rn) */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C1AEFB2 rte */
}

void blk_f_0C1AEFC4(sh3_t *c)
{
	LOCALS;
L_0C1AEFC4: BLKS(0x0C1AEFC4u);
	IF(0x0C1AEFC4u); { u32 t_ = c->spc; SET_SR(c->ssr); W32(r0 + 0x20u, r12); /* slot mov.l Rm,@(disp,Rn) */ PCB_PC(t_); UPDN(t_, 1); RET(t_); }  /* 0C1AEFC4 rte */
}

void blk_f_0C1AEFFA(sh3_t *c)
{
	LOCALS;
L_0C1AEFFA: BLKS(0x0C1AEFFAu);
	IF(0x0C1AEFFAu); { u32 tv_ = r0; u32 t_ = PHYS(tv_); r0 = 0x2F27202Cu; /* slot mov.l @(disp,pc),Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C1AEFFA jmp @Rn */
}

void blk_f_0C1AF00C(sh3_t *c)
{
	LOCALS;
L_0C1AF00C: BLKS(0x0C1AF00Cu);
	IF(0x0C1AF00Cu); { u32 tv_ = r0; u32 t_ = PHYS(tv_); r0 = 0xA0A0ECEBu; /* slot mov.l @(disp,pc),Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C1AF00C jmp @Rn */
}

void blk_f_0C1AF01E(sh3_t *c)
{
	LOCALS;
L_0C1AF01E: BLKS(0x0C1AF01Eu);
	IF(0x0C1AF01Eu); { u32 tv_ = r0; u32 t_ = PHYS(tv_); r0 = 0xC800E9E6u; /* slot mov.l @(disp,pc),Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C1AF01E jmp @Rn */
}

void blk_f_0C1AF030(sh3_t *c)
{
	LOCALS;
L_0C1AF030: BLKS(0x0C1AF030u);
	IF(0x0C1AF030u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); r0 = 0x402Au; /* slot mov.l @(disp,pc),Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C1AF030 jmp @Rn */
}

void blk_f_0C1AF042(sh3_t *c)
{
	LOCALS;
L_0C1AF042: BLKS(0x0C1AF042u);
	IF(0x0C1AF042u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); r0 = 0x4029u; /* slot mov.l @(disp,pc),Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C1AF042 jmp @Rn */
}

void blk_f_0C1AF054(sh3_t *c)
{
	LOCALS;
L_0C1AF054: BLKS(0x0C1AF054u);
	IF(0x0C1AF054u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); r0 = 0xD0E84747u; /* slot mov.l @(disp,pc),Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C1AF054 jmp @Rn */
}

void blk_f_0C1AF0D2(sh3_t *c)
{
	LOCALS;
L_0C1AF0D2: BLKS(0x0C1AF0D2u);
	IF(0x0C1AF0D2u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); r0 += 0x0u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C1AF0D2 jmp @Rn */
}

void blk_f_0C1AF0E4(sh3_t *c)
{
	LOCALS;
L_0C1AF0E4: BLKS(0x0C1AF0E4u);
	IF(0x0C1AF0E4u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); r0 += 0x28u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C1AF0E4 jmp @Rn */
}

void blk_f_0C1AF0F6(sh3_t *c)
{
	LOCALS;
L_0C1AF0F6: BLKS(0x0C1AF0F6u);
	IF(0x0C1AF0F6u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); r0 += 0x50u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C1AF0F6 jmp @Rn */
}

void blk_f_0C1AF108(sh3_t *c)
{
	LOCALS;
L_0C1AF108: BLKS(0x0C1AF108u);
	IF(0x0C1AF108u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); r0 += 0x78u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C1AF108 jmp @Rn */
}

void blk_f_0C1B0F8A(sh3_t *c)
{
	LOCALS;
L_0C1B0F8A: BLKS(0x0C1B0F8Au);
	IF(0x0C1B0F8Au); { u32 t_ = PR; W8(c->gbr + 0x0u, r0); /* slot mov.b r0,@(disp,gbr) */ UPD(t_, 3); RET(t_); }  /* 0C1B0F8A rts */
}

void blk_f_0C1B0F94(sh3_t *c)
{
	LOCALS;
L_0C1B0F94: BLKS(0x0C1B0F94u);
	IF(0x0C1B0F94u); { u32 t_ = PR; W8(c->gbr + 0x40u, r0); /* slot mov.b r0,@(disp,gbr) */ UPD(t_, 3); RET(t_); }  /* 0C1B0F94 rts */
}

void blk_f_0C1B0F9E(sh3_t *c)
{
	LOCALS;
L_0C1B0F9E: BLKS(0x0C1B0F9Eu);
	IF(0x0C1B0F9Eu); { u32 t_ = PR; W8(c->gbr + 0x80u, r0); /* slot mov.b r0,@(disp,gbr) */ UPD(t_, 3); RET(t_); }  /* 0C1B0F9E rts */
}

void blk_f_0C1B0FA8(sh3_t *c)
{
	LOCALS;
L_0C1B0FA8: BLKS(0x0C1B0FA8u);
	IF(0x0C1B0FA8u); { u32 t_ = PR; W8(c->gbr + 0xC0u, r0); /* slot mov.b r0,@(disp,gbr) */ UPD(t_, 3); RET(t_); }  /* 0C1B0FA8 rts */
}

void blk_f_0C1B0FB2(sh3_t *c)
{
	LOCALS;
L_0C1B0FB2: BLKS(0x0C1B0FB2u);
	IF(0x0C1B0FB2u); { u32 t_ = PR; W8(r0 + 0x0u, r0); /* slot mov.b r0,@(disp,Rn) */ UPD(t_, 3); RET(t_); }  /* 0C1B0FB2 rts */
}

void blk_f_0C1B0FBC(sh3_t *c)
{
	LOCALS;
L_0C1B0FBC: BLKS(0x0C1B0FBCu);
	IF(0x0C1B0FBCu); { u32 t_ = PR; W8(r4 + 0x0u, r0); /* slot mov.b r0,@(disp,Rn) */ UPD(t_, 3); RET(t_); }  /* 0C1B0FBC rts */
}

void blk_f_0C1B0FC6(sh3_t *c)
{
	LOCALS;
L_0C1B0FC6: BLKS(0x0C1B0FC6u);
	IF(0x0C1B0FC6u); { u32 t_ = PR; W8(r8 + 0x0u, r0); /* slot mov.b r0,@(disp,Rn) */ UPD(t_, 3); RET(t_); }  /* 0C1B0FC6 rts */
}

void blk_f_0C1B0FD0(sh3_t *c)
{
	LOCALS;
L_0C1B0FD0: BLKS(0x0C1B0FD0u);
	IF(0x0C1B0FD0u); { u32 t_ = PR; W8(r12 + 0x0u, r0); /* slot mov.b r0,@(disp,Rn) */ UPD(t_, 3); RET(t_); }  /* 0C1B0FD0 rts */
}

void blk_f_0C1B0FDA(sh3_t *c)
{
	LOCALS;
L_0C1B0FDA: BLKS(0x0C1B0FDAu);
	IF(0x0C1B0FDAu); { u32 t_ = PR; IF(0x0C1B0FDCu); T = r0 >> 31; r0 <<= 1; /* slot shll Rn */ UPD(t_, 3); RET(t_); }  /* 0C1B0FDA rts */
}


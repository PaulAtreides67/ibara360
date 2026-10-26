#include "recomp.h"
#include "blk_recomp_funcs.h"

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


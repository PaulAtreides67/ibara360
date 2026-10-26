#include "recomp.h"
#include "recomp_funcs.h"

void f_0C1CED38(sh3_t *c)
{
	LOCALS;
L_0C1CED38: BLKS(0x0C1CED38u);
	IF(0x0C1CED38u); { u32 tv_ = (r0 + 0x0C1CED3Cu); u32 t_ = PHYS(tv_); IF(0x0C1CED3Au); T = r0 >> 31; r0 <<= 1; /* slot shll Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C1CED38 braf Rn */
}

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

/* arr_smoke */
void f_0C7C0000(sh3_t *c)
{
	LOCALS;
L_0C7C0000: BLKS(0x0C7C0000u);
	r0 = 0xC7C4240u; UPD(0x0C7C0002u, 1);  /* 0C7C0000 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r0); UPD(0x0C7C0004u, 1);  /* 0C7C0002 mov.b @Rm,Rn */
	T = r0 == 0x1u;  /* 0C7C0004 cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C7C0014u, 4); goto L_0C7C0014; }  /* 0C7C0006 bf */
L_0C7C0008: BLKS(0x0C7C0008u);
	r0 = 0xC21CA15u; UPD(0x0C7C000Au, 1);  /* 0C7C0008 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r0); UPD(0x0C7C000Cu, 1);  /* 0C7C000A mov.b @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C7C000C tst Rm,Rn */
	if (!T) { UPD(0x0C7C0014u, 4); goto L_0C7C0014; }  /* 0C7C000E bf */
L_0C7C0010: BLKS(0x0C7C0010u);
	IF(0x0C7C0010u); { u32 t_ = PR; r0 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 3); RET(t_); }  /* 0C7C0010 rts */
L_0C7C0014: BLKS(0x0C7C0014u);
	r0 = 0xC0ACA40u; UPD(0x0C7C0016u, 1);  /* 0C7C0014 mov.l @(disp,pc),Rn */
	IF(0x0C7C0016u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); IF(0x0C7C0018u); ; /* slot nop */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0ACA40u: TAIL(f_0C0ACA40); default: JUMPD(tv_); } }  /* 0C7C0016 jmp @Rn */
}

/* bomb_row */
void f_0C7C0028(sh3_t *c)
{
	LOCALS;
L_0C7C0028: BLKS(0x0C7C0028u);
	r2 = 0xC21CA15u; UPD(0x0C7C002Au, 1);  /* 0C7C0028 mov.l @(disp,pc),Rn */
	r3 = r4;  /* 0C7C002A mov Rm,Rn */
	r1 = R32(r15 + 0x4u); UPD(0x0C7C002Eu, 2);  /* 0C7C002C mov.l @(disp,Rm),Rn */
	r4 = r5;  /* 0C7C002E mov Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r2); UPD(0x0C7C0032u, 2);  /* 0C7C0030 mov.b @Rm,Rn */
	r5 = r6;  /* 0C7C0032 mov Rm,Rn */
	r6 = r7;  /* 0C7C0034 mov Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C7C0036 tst Rm,Rn */
	{ u32 c_ = !T; r7 = R32(r15); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C7C005Eu, 6); goto L_0C7C005E; } UPD(0x0C7C003Cu, 1); goto L_0C7C003C; }  /* 0C7C0038 bf/s */
L_0C7C003C: BLKS(0x0C7C003Cu);
	r0 = (u32)(s32)(s8)r5;  /* 0C7C003C exts.b Rm,Rn */
	T = r0 == 0x1u;  /* 0C7C003E cmp/eq #imm,r0 */
	{ u32 c_ = !T; IF(0x0C7C0042u); r1 <<= 2; /* slot shll2 Rn */ if (c_) { UPD(0x0C7C005Eu, 5); goto L_0C7C005E; } goto L_0C7C0044; }  /* 0C7C0040 bf/s */
L_0C7C0044: BLKS(0x0C7C0044u);
	r5 = 0x3087862u; UPD(0x0C7C0046u, 2);  /* 0C7C0044 mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s8)r6;  /* 0C7C0046 exts.b Rm,Rn */
	r1 += 0xFFFFFFFCu;  /* 0C7C0048 add #imm,Rn */
	r2 += r5;  /* 0C7C004A add Rm,Rn */
	IF(0x0C7C004Cu); r1 >>= 2;  /* 0C7C004C shlr2 Rn */
	IF(0x0C7C004Eu); r2 <<= 2;  /* 0C7C004E shll2 Rn */
	r5 = 0x0u;  /* 0C7C0050 mov #imm,Rn */
	r1 += 0x1u;  /* 0C7C0052 add #imm,Rn */
	UPD(0x0C7C0054u, 7);
L_0C7C0054: BLKS(0x0C7C0054u);
	W32(r2, r5); UPD(0x0C7C0056u, 1);  /* 0C7C0054 mov.l Rm,@Rn */
	IF(0x0C7C0056u); r1 -= 1; T = r1 == 0;  /* 0C7C0056 dt Rn */
	{ u32 c_ = !T; r2 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C7C0054u, 4); goto L_0C7C0054; } goto L_0C7C005C; }  /* 0C7C0058 bf/s */
L_0C7C005C: BLKS(0x0C7C005Cu);
	r5 = 0x2u;  /* 0C7C005C mov #imm,Rn */
	UPD(0x0C7C005Eu, 2);
L_0C7C005E: BLKS(0x0C7C005Eu);
	IF(0x0C7C005Eu); { u32 tv_ = r3; u32 t_ = PHYS(tv_); IF(0x0C7C0060u); ; /* slot nop */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C7C005E jmp @Rn */
}

/* arr_rank_up */
void f_0C7C006C(sh3_t *c)
{
	LOCALS;
L_0C7C006C: BLKS(0x0C7C006Cu);
	r2 = 0xC27DFF8u; UPD(0x0C7C006Eu, 1);  /* 0C7C006C mov.l @(disp,pc),Rn */
	r1 = R32(r2); UPD(0x0C7C0070u, 1);  /* 0C7C006E mov.l @Rm,Rn */
	T = r1 > r4;  /* 0C7C0070 cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C7C007Cu, 4); goto L_0C7C007C; }  /* 0C7C0072 bf */
L_0C7C0074: BLKS(0x0C7C0074u);
	r1 -= r4;  /* 0C7C0074 sub Rm,Rn */
	W32(r2, r1); UPD(0x0C7C0078u, 2);  /* 0C7C0076 mov.l Rm,@Rn */
	IF(0x0C7C0078u); { u32 t_ = PR; IF(0x0C7C007Au); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C7C0078 rts */
L_0C7C007C: BLKS(0x0C7C007Cu);
	r3 = 0xC21CA15u; UPD(0x0C7C007Eu, 1);  /* 0C7C007C mov.l @(disp,pc),Rn */
	T = (r1 & r1) == 0;  /* 0C7C007E tst Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r3); UPD(0x0C7C0082u, 2);  /* 0C7C0080 mov.b @Rm,Rn */
	{ u32 c_ = T; r3 = r3 & 0xFF; /* slot extu.b Rm,Rn */ if (c_) { UPD(0x0C7C008Cu, 3); goto L_0C7C008C; } goto L_0C7C0086; }  /* 0C7C0082 bt/s */
L_0C7C0086: BLKS(0x0C7C0086u);
	T = (r3 & r3) == 0;  /* 0C7C0086 tst Rm,Rn */
	{ u32 c_ = T; r1 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C7C0090u, 5); goto L_0C7C0090; } UPD(0x0C7C008Cu, 1); goto L_0C7C008C; }  /* 0C7C0088 bt/s */
L_0C7C008C: BLKS(0x0C7C008Cu);
	IF(0x0C7C008Cu); { u32 t_ = PR; IF(0x0C7C008Eu); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C7C008C rts */
L_0C7C0090: BLKS(0x0C7C0090u);
	W32(r2, r1); UPD(0x0C7C0092u, 1);  /* 0C7C0090 mov.l Rm,@Rn */
	IF(0x0C7C0092u); { u32 t_ = PR; IF(0x0C7C0094u); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C7C0092 rts */
}

/* arr_rank_up_arcade */
void f_0C7C00A0(sh3_t *c)
{
	LOCALS;
L_0C7C00A0: BLKS(0x0C7C00A0u);
	r1 = 0xC21CA15u; UPD(0x0C7C00A2u, 1);  /* 0C7C00A0 mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C00A4u, 1);  /* 0C7C00A2 mov.b @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C7C00A4 tst Rm,Rn */
	if (!T) { UPD(0x0C7C00ACu, 4); goto L_0C7C00AC; }  /* 0C7C00A6 bf */
L_0C7C00A8: BLKS(0x0C7C00A8u);
	IF(0x0C7C00A8u); { u32 t_ = PR; IF(0x0C7C00AAu); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C7C00A8 rts */
L_0C7C00AC: BLKS(0x0C7C00ACu);
	r3 = 0xC27DFF8u; UPD(0x0C7C00AEu, 1);  /* 0C7C00AC mov.l @(disp,pc),Rn */
	r2 = R32(r3); UPD(0x0C7C00B0u, 1);  /* 0C7C00AE mov.l @Rm,Rn */
	T = r4 >= r2;  /* 0C7C00B0 cmp/hs Rm,Rn */
	if (!T) { UPD(0x0C7C00C4u, 4); goto L_0C7C00C4; }  /* 0C7C00B2 bf */
L_0C7C00B4: BLKS(0x0C7C00B4u);
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C00B6u, 1);  /* 0C7C00B4 mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C00B6 tst Rm,Rn */
	{ u32 c_ = !T; T = (r2 & r2) == 0; /* slot tst Rm,Rn */ if (c_) { UPD(0x0C7C00A8u, 4); goto L_0C7C00A8; } goto L_0C7C00BC; }  /* 0C7C00B8 bf/s */
L_0C7C00BC: BLKS(0x0C7C00BCu);
	if (T) { UPD(0x0C7C00A8u, 4); goto L_0C7C00A8; }  /* 0C7C00BC bt */
L_0C7C00BE: BLKS(0x0C7C00BEu);
	W32(r3, r1); UPD(0x0C7C00C0u, 1);  /* 0C7C00BE mov.l Rm,@Rn */
	IF(0x0C7C00C0u); { u32 t_ = PR; IF(0x0C7C00C2u); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C7C00C0 rts */
L_0C7C00C4: BLKS(0x0C7C00C4u);
	r2 -= r4;  /* 0C7C00C4 sub Rm,Rn */
	W32(r3, r2); UPD(0x0C7C00C8u, 2);  /* 0C7C00C6 mov.l Rm,@Rn */
	IF(0x0C7C00C8u); { u32 t_ = PR; IF(0x0C7C00CAu); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C7C00C8 rts */
}

/* arr_rank_down_arcade */
void f_0C7C00D4(sh3_t *c)
{
	LOCALS;
L_0C7C00D4: BLKS(0x0C7C00D4u);
	r1 = 0xC21CA15u; UPD(0x0C7C00D6u, 1);  /* 0C7C00D4 mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C00D8u, 1);  /* 0C7C00D6 mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C00D8 tst Rm,Rn */
	if (T) { UPD(0x0C7C00E2u, 4); goto L_0C7C00E2; }  /* 0C7C00DA bt */
L_0C7C00DC: BLKS(0x0C7C00DCu);
	r0 = 0xC060D60u; UPD(0x0C7C00DEu, 1);  /* 0C7C00DC mov.l @(disp,pc),Rn */
	IF(0x0C7C00DEu); { u32 tv_ = r0; u32 t_ = PHYS(tv_); IF(0x0C7C00E0u); ; /* slot nop */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C060D60u: TAIL(f_0C060D60); default: JUMPD(tv_); } }  /* 0C7C00DE jmp @Rn */
L_0C7C00E2: BLKS(0x0C7C00E2u);
	IF(0x0C7C00E2u); { u32 t_ = PR; IF(0x0C7C00E4u); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C7C00E2 rts */
}

/* arr_rank_init */
void f_0C7C00F0(sh3_t *c)
{
	LOCALS;
L_0C7C00F0: BLKS(0x0C7C00F0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C7C00F2u, 1);  /* 0C7C00F0 mov.l Rm,@-Rn */
	r8 = 0x0u;  /* 0C7C00F2 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C7C00F6u, 2);  /* 0C7C00F4 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C7C00F8u, 1);  /* 0C7C00F6 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C7C00FAu, 1);  /* 0C7C00F8 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C7C00FCu, 1);  /* 0C7C00FA mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C7C00FEu, 1);  /* 0C7C00FC mov.l Rm,@-Rn */
	r2 = 0xC21CA15u; UPD(0x0C7C0100u, 1);  /* 0C7C00FE mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C7C0102u, 1);  /* 0C7C0100 mov.l Rm,@-Rn */
	r1 = 0xC7C4240u; UPD(0x0C7C0104u, 1);  /* 0C7C0102 mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s8)R8(r2); UPD(0x0C7C0106u, 1);  /* 0C7C0104 mov.b @Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C0108u, 1);  /* 0C7C0106 mov.b @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C7C0108 tst Rm,Rn */
	{ u32 c_ = !T; r1 = r1 & 0xFF; /* slot extu.b Rm,Rn */ if (c_) { UPD(0x0C7C011Au, 4); goto L_0C7C011A; } goto L_0C7C010E; }  /* 0C7C010A bf/s */
L_0C7C010E: BLKS(0x0C7C010Eu);
	r3 = 0x1u;  /* 0C7C010E mov #imm,Rn */
	r2 = r1;  /* 0C7C0110 mov Rm,Rn */
	r2 += 0xFFFFFFFFu;  /* 0C7C0112 add #imm,Rn */
	T = r2 > r3;  /* 0C7C0114 cmp/hi Rm,Rn */
	{ u32 c_ = !T; r3 = 0x18u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C7C01CAu, 8); goto L_0C7C01CA; } UPD(0x0C7C011Au, 1); goto L_0C7C011A; }  /* 0C7C0116 bf/s */
L_0C7C011A: BLKS(0x0C7C011Au);
	r1 += 0xFFFFFFFFu;  /* 0C7C011A add #imm,Rn */
	r2 = 0xC284060u; UPD(0x0C7C011Eu, 2);  /* 0C7C011C mov.l @(disp,pc),Rn */
	r10 = r1;  /* 0C7C011E mov Rm,Rn */
	r12 = 0xC7C4244u; UPD(0x0C7C0122u, 2);  /* 0C7C0120 mov.l @(disp,pc),Rn */
	r10 += r10;  /* 0C7C0122 add Rm,Rn */
	r10 += r1;  /* 0C7C0124 add Rm,Rn */
	r14 = 0x6Au;  /* 0C7C0126 mov #imm,Rn */
	r3 = 0x2u;  /* 0C7C0128 mov #imm,Rn */
	r9 = 0x6Fu;  /* 0C7C012A mov #imm,Rn */
	r11 = 0x78u;  /* 0C7C012C mov #imm,Rn */
	r10 += r10;  /* 0C7C012E add Rm,Rn */
	UPD(0x0C7C0130u, 7);
L_0C7C0130: BLKS(0x0C7C0130u);
	r1 = r14;  /* 0C7C0130 mov Rm,Rn */
	r1 += 0xFFFFFF90u;  /* 0C7C0132 add #imm,Rn */
	T = r1 > r3;  /* 0C7C0134 cmp/hi Rm,Rn */
	{ u32 c_ = !T; T = r14 > r9; /* slot cmp/hi Rm,Rn */ if (c_) { UPD(0x0C7C0152u, 6); goto L_0C7C0152; } goto L_0C7C013A; }  /* 0C7C0136 bf/s */
L_0C7C013A: BLKS(0x0C7C013Au);
	{ u32 c_ = !T; T = r14 > r11; /* slot cmp/hi Rm,Rn */ if (c_) { UPD(0x0C7C01B0u, 4); goto L_0C7C01B0; } goto L_0C7C013E; }  /* 0C7C013A bf/s */
L_0C7C013E: BLKS(0x0C7C013Eu);
	{ u32 c_ = T; T = (r8 & r8) == 0; /* slot tst Rm,Rn */ if (c_) { UPD(0x0C7C01BAu, 4); goto L_0C7C01BA; } goto L_0C7C0142; }  /* 0C7C013E bt/s */
L_0C7C0142: BLKS(0x0C7C0142u);
	{ u32 c_ = T; r1 = r14; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C7C0158u, 4); goto L_0C7C0158; } goto L_0C7C0146; }  /* 0C7C0142 bt/s */
L_0C7C0146: BLKS(0x0C7C0146u);
	r1 += 0xFFFFFF8Du;  /* 0C7C0146 add #imm,Rn */
	UPD(0x0C7C0148u, 2);
L_0C7C0148: BLKS(0x0C7C0148u);
	r1 += r10;  /* 0C7C0148 add Rm,Rn */
	IF(0x0C7C014Au); r1 <<= 2;  /* 0C7C014A shll2 Rn */
	r0 = r1;  /* 0C7C014C mov Rm,Rn */
	IF(0x0C7C014Eu); r1 = R32(r0 + r12); UPD(0x0C7C0150u, 4);  /* 0C7C014E mov.l @(r0,Rm),Rn */
	W32(r2, r1); UPD(0x0C7C0152u, 1);  /* 0C7C0150 mov.l Rm,@Rn */
L_0C7C0152: BLKS(0x0C7C0152u);
	r14 += 0x1u;  /* 0C7C0152 add #imm,Rn */
	{ r2 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C7C0130u, 4); goto L_0C7C0130; }  /* 0C7C0154 bra */
L_0C7C0158: BLKS(0x0C7C0158u);
	r1 = 0xC284EC0u; UPD(0x0C7C015Au, 1);  /* 0C7C0158 mov.l @(disp,pc),Rn */
	r1 += r14;  /* 0C7C015A add Rm,Rn */
	r13 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C015Eu, 2);  /* 0C7C015C mov.b @Rm,Rn */
	r1 = 0xC220C64u; UPD(0x0C7C0160u, 1);  /* 0C7C015E mov.l @(disp,pc),Rn */
	IF(0x0C7C0160u); r13 <<= 16;  /* 0C7C0160 shll16 Rn */
	r1 += r14;  /* 0C7C0162 add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C0166u, 3);  /* 0C7C0164 mov.b @Rm,Rn */
	IF(0x0C7C0166u); r13 <<= 8;  /* 0C7C0166 shll8 Rn */
	r1 = r1 & 0xFF;  /* 0C7C0168 extu.b Rm,Rn */
	r1 = (r1 & 0xFFFF0000u) | ((r1 & 0xFF) << 8) | ((r1 >> 8) & 0xFF);  /* 0C7C016A swap.b Rm,Rn */
	r1 |= r13;  /* 0C7C016C or Rm,Rn */
	UPD(0x0C7C016Eu, 4);
L_0C7C016E: BLKS(0x0C7C016Eu);
	r14 += 0x1u;  /* 0C7C016E add #imm,Rn */
	W32(r2, r1); UPD(0x0C7C0172u, 2);  /* 0C7C0170 mov.l Rm,@Rn */
	r0 = r14;  /* 0C7C0172 mov Rm,Rn */
	T = r0 == 0x7Fu;  /* 0C7C0174 cmp/eq #imm,r0 */
	{ u32 c_ = !T; r2 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C7C0130u, 5); goto L_0C7C0130; } goto L_0C7C017A; }  /* 0C7C0176 bf/s */
L_0C7C017A: BLKS(0x0C7C017Au);
	r1 = 0xC21CA15u; UPD(0x0C7C017Cu, 2);  /* 0C7C017A mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C017Eu, 1);  /* 0C7C017C mov.b @Rm,Rn */
	r2 = r1 & 0xFF;  /* 0C7C017E extu.b Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C7C0180 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C7C01DAu, 5); goto L_0C7C01DA; } goto L_0C7C0186; }  /* 0C7C0182 bf/s */
L_0C7C0186: BLKS(0x0C7C0186u);
	r3 = 0xC395088u; UPD(0x0C7C0188u, 2);  /* 0C7C0186 mov.l @(disp,pc),Rn */
	W32(r3, r2); UPD(0x0C7C018Au, 1);  /* 0C7C0188 mov.l Rm,@Rn */
	r3 = 0xC393068u; UPD(0x0C7C018Cu, 1);  /* 0C7C018A mov.l @(disp,pc),Rn */
	W32(r3, r2); UPD(0x0C7C018Eu, 1);  /* 0C7C018C mov.l Rm,@Rn */
	r2 = 0xFFFFFFu; UPD(0x0C7C0190u, 1);  /* 0C7C018E mov.l @(disp,pc),Rn */
	r3 = 0xC21F5E4u; UPD(0x0C7C0192u, 1);  /* 0C7C0190 mov.l @(disp,pc),Rn */
	W32(r3, r2); UPD(0x0C7C0194u, 1);  /* 0C7C0192 mov.l Rm,@Rn */
	r3 = 0xC27DFF8u; UPD(0x0C7C0196u, 1);  /* 0C7C0194 mov.l @(disp,pc),Rn */
	W32(r3, r2); UPD(0x0C7C0198u, 1);  /* 0C7C0196 mov.l Rm,@Rn */
	r2 = 0xC392AFDu; UPD(0x0C7C019Au, 1);  /* 0C7C0198 mov.l @(disp,pc),Rn */
	W8(r2, r1); UPD(0x0C7C019Cu, 1);  /* 0C7C019A mov.b Rm,@Rn */
	r2 += 0x1u;  /* 0C7C019C add #imm,Rn */
	W8(r2, r1); UPD(0x0C7C01A0u, 2);  /* 0C7C019E mov.b Rm,@Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C7C01A2u, 1);  /* 0C7C01A0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C7C01A4u, 1);  /* 0C7C01A2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C7C01A6u, 1);  /* 0C7C01A4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C7C01A8u, 1);  /* 0C7C01A6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C7C01AAu, 1);  /* 0C7C01A8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C01ACu, 1);  /* 0C7C01AA mov.l @Rm+,Rn */
	IF(0x0C7C01ACu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C7C01AC rts */
L_0C7C01B0: BLKS(0x0C7C01B0u);
	T = (r8 & r8) == 0;  /* 0C7C01B0 tst Rm,Rn */
	{ u32 c_ = T; r1 = r14; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C7C0158u, 4); goto L_0C7C0158; } goto L_0C7C01B6; }  /* 0C7C01B2 bt/s */
L_0C7C01B6: BLKS(0x0C7C01B6u);
	{ r1 += 0xFFFFFF96u; /* slot add #imm,Rn */ UPD(0x0C7C0148u, 4); goto L_0C7C0148; }  /* 0C7C01B6 bra */
L_0C7C01BA: BLKS(0x0C7C01BAu);
	{ u32 c_ = T; r1 = r14; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C7C0158u, 3); goto L_0C7C0158; } goto L_0C7C01BE; }  /* 0C7C01BA bt/s */
L_0C7C01BE: BLKS(0x0C7C01BEu);
	r1 += 0xFFFFFF87u;  /* 0C7C01BE add #imm,Rn */
	r1 += r10;  /* 0C7C01C0 add Rm,Rn */
	IF(0x0C7C01C2u); r1 <<= 2;  /* 0C7C01C2 shll2 Rn */
	r0 = r1;  /* 0C7C01C4 mov Rm,Rn */
	{ IF(0x0C7C01C8u); r1 = R32(r0 + r12); /* slot mov.l @(r0,Rm),Rn */ UPD(0x0C7C016Eu, 8); goto L_0C7C016E; }  /* 0C7C01C6 bra */
L_0C7C01CA: BLKS(0x0C7C01CAu);
	IF(0x0C7C01CAu); MACL = r2 * r3;  /* 0C7C01CA mul.l Rm,Rn */
	r2 = 0xC7C4244u; UPD(0x0C7C01CEu, 3);  /* 0C7C01CC mov.l @(disp,pc),Rn */
	r8 = 0xFFFFFFFFu;  /* 0C7C01CE mov #imm,Rn */
	IF(0x0C7C01D0u); r0 = MACL;  /* 0C7C01D0 sts macl,Rn */
	IF(0x0C7C01D2u); r2 = R32(r0 + r2); UPD(0x0C7C01D4u, 3);  /* 0C7C01D2 mov.l @(r0,Rm),Rn */
	T = (r2 & r2) == 0;  /* 0C7C01D4 tst Rm,Rn */
	{ { u32 t_ = 0u - r8, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r8 = r_; } /* slot negc Rm,Rn */ UPD(0x0C7C011Au, 4); goto L_0C7C011A; }  /* 0C7C01D6 bra */
L_0C7C01DA: BLKS(0x0C7C01DAu);
	r0 = 0xC05B740u; UPD(0x0C7C01DCu, 1);  /* 0C7C01DA mov.l @(disp,pc),Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C7C01DEu, 1);  /* 0C7C01DC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C7C01E0u, 1);  /* 0C7C01DE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C7C01E2u, 1);  /* 0C7C01E0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C7C01E4u, 1);  /* 0C7C01E2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C7C01E6u, 1);  /* 0C7C01E4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C01E8u, 1);  /* 0C7C01E6 mov.l @Rm+,Rn */
	IF(0x0C7C01E8u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C05B740u: TAIL(f_0C05B740); default: JUMPD(tv_); } }  /* 0C7C01E8 jmp @Rn */
}

/* arr_scr_relief */
void f_0C7C0220(sh3_t *c)
{
	LOCALS;
L_0C7C0220: BLKS(0x0C7C0220u);
	r1 = 0xC21CA15u; UPD(0x0C7C0222u, 1);  /* 0C7C0220 mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C0224u, 1);  /* 0C7C0222 mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C0224 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C7C022Eu, 4); goto L_0C7C022E; } goto L_0C7C022A; }  /* 0C7C0226 bf/s */
L_0C7C022A: BLKS(0x0C7C022Au);
	IF(0x0C7C022Au); { u32 t_ = PR; IF(0x0C7C022Cu); ; /* slot nop */ UPD(t_, 4); RET(t_); }  /* 0C7C022A rts */
L_0C7C022E: BLKS(0x0C7C022Eu);
	r0 = 0xC0615D0u; UPD(0x0C7C0230u, 1);  /* 0C7C022E mov.l @(disp,pc),Rn */
	IF(0x0C7C0230u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); IF(0x0C7C0232u); ; /* slot nop */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C7C0230 jmp @Rn */
}

/* arr_scr_bgm */
void f_0C7C023C(sh3_t *c)
{
	LOCALS;
L_0C7C023C: BLKS(0x0C7C023Cu);
	r1 = 0xC21CA15u; UPD(0x0C7C023Eu, 1);  /* 0C7C023C mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C0240u, 1);  /* 0C7C023E mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C0240 tst Rm,Rn */
	{ u32 c_ = !T; r1 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C7C0262u, 4); goto L_0C7C0262; } goto L_0C7C0246; }  /* 0C7C0242 bf/s */
L_0C7C0246: BLKS(0x0C7C0246u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C7C0248u, 2);  /* 0C7C0246 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C7C024Au, 1);  /* 0C7C0248 mov.l Rm,@-Rn */
	r0 = 0xC061720u; UPD(0x0C7C024Cu, 1);  /* 0C7C024A mov.l @(disp,pc),Rn */
	IF(0x0C7C024Cu); r15 -= 4; W32(r15, PR); UPD(0x0C7C024Eu, 1);  /* 0C7C024C sts.l pr,@-Rn */
	r8 = 0xC27DC50u; UPD(0x0C7C0250u, 1);  /* 0C7C024E mov.l @(disp,pc),Rn */
	r9 = (u32)(s32)(s8)R8(r8); UPD(0x0C7C0252u, 1);  /* 0C7C0250 mov.b @Rm,Rn */
	W8(r8, r1); UPD(0x0C7C0254u, 1);  /* 0C7C0252 mov.b Rm,@Rn */
	IF(0x0C7C0254u); { u32 t_ = r0; PR = 0x0C7C0258u; IF(0x0C7C0256u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C061720, 0x0C061720u, 0x0C7C0258u); }  /* 0C7C0254 jsr @Rn */
L_0C7C0258: BLKS(0x0C7C0258u);
	W8(r8, r9); UPD(0x0C7C025Au, 1);  /* 0C7C0258 mov.b Rm,@Rn */
	IF(0x0C7C025Au); PR = R32(r15); r15 += 4; UPD(0x0C7C025Cu, 1);  /* 0C7C025A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C025Eu, 1);  /* 0C7C025C mov.l @Rm+,Rn */
	IF(0x0C7C025Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C7C025E rts */
L_0C7C0262: BLKS(0x0C7C0262u);
	r0 = 0xC061720u; UPD(0x0C7C0264u, 1);  /* 0C7C0262 mov.l @(disp,pc),Rn */
	IF(0x0C7C0264u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); IF(0x0C7C0266u); ; /* slot nop */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C7C0264 jmp @Rn */
}

/* arr_scr_wait */
void f_0C7C0274(sh3_t *c)
{
	LOCALS;
L_0C7C0274: BLKS(0x0C7C0274u);
	r1 = 0xC21CA15u; UPD(0x0C7C0276u, 1);  /* 0C7C0274 mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C0278u, 1);  /* 0C7C0276 mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C0278 tst Rm,Rn */
	if (T) { UPD(0x0C7C0282u, 4); goto L_0C7C0282; }  /* 0C7C027A bt */
L_0C7C027C: BLKS(0x0C7C027Cu);
	r0 = 0xC060FF0u; UPD(0x0C7C027Eu, 1);  /* 0C7C027C mov.l @(disp,pc),Rn */
	IF(0x0C7C027Eu); { u32 tv_ = r0; u32 t_ = PHYS(tv_); IF(0x0C7C0280u); ; /* slot nop */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C7C027E jmp @Rn */
L_0C7C0282: BLKS(0x0C7C0282u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C7C0284u, 1);  /* 0C7C0282 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C7C0286u, 1);  /* 0C7C0284 mov.l Rm,@-Rn */
	IF(0x0C7C0286u); r15 -= 4; W32(r15, PR); UPD(0x0C7C0288u, 1);  /* 0C7C0286 sts.l pr,@-Rn */
	r9 = 0xC393078u; UPD(0x0C7C028Au, 1);  /* 0C7C0288 mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s16)R16(r9); UPD(0x0C7C028Cu, 1);  /* 0C7C028A mov.w @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C028C tst Rm,Rn */
	if (!T) { UPD(0x0C7C029Au, 4); goto L_0C7C029A; }  /* 0C7C028E bf */
L_0C7C0290: BLKS(0x0C7C0290u);
	r1 = 0xC2859A0u; UPD(0x0C7C0292u, 1);  /* 0C7C0290 mov.l @(disp,pc),Rn */
	r2 = 0xC1F08B0u; UPD(0x0C7C0294u, 1);  /* 0C7C0292 mov.l @(disp,pc),Rn */
	r1 = R32(r1); UPD(0x0C7C0296u, 1);  /* 0C7C0294 mov.l @Rm,Rn */
	T = r1 == r2;  /* 0C7C0296 cmp/eq Rm,Rn */
	if (T) { UPD(0x0C7C02A4u, 4); goto L_0C7C02A4; }  /* 0C7C0298 bt */
L_0C7C029A: BLKS(0x0C7C029Au);
	r0 = 0xC060FF0u; UPD(0x0C7C029Cu, 1);  /* 0C7C029A mov.l @(disp,pc),Rn */
	IF(0x0C7C029Cu); PR = R32(r15); r15 += 4; UPD(0x0C7C029Eu, 1);  /* 0C7C029C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C02A0u, 1);  /* 0C7C029E mov.l @Rm+,Rn */
	IF(0x0C7C02A0u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C7C02A0 jmp @Rn */
L_0C7C02A4: BLKS(0x0C7C02A4u);
	r0 = 0xC060FF0u; UPD(0x0C7C02A6u, 1);  /* 0C7C02A4 mov.l @(disp,pc),Rn */
	r8 = (u32)(s32)(s16)R16(r1); UPD(0x0C7C02A8u, 1);  /* 0C7C02A6 mov.w @Rm,Rn */
	IF(0x0C7C02A8u); { u32 t_ = r0; PR = 0x0C7C02ACu; r8 = r8 & 0xFFFF; /* slot extu.w Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C060FF0, 0x0C060FF0u, 0x0C7C02ACu); }  /* 0C7C02A8 jsr @Rn */
L_0C7C02AC: BLKS(0x0C7C02ACu);
	r1 = 0x1E0u; UPD(0x0C7C02AEu, 1);  /* 0C7C02AC mov.w @(disp,pc),Rn */
	T = r8 == r1;  /* 0C7C02AE cmp/eq Rm,Rn */
	if (!T) { UPD(0x0C7C02B6u, 4); goto L_0C7C02B6; }  /* 0C7C02B0 bf */
L_0C7C02B2: BLKS(0x0C7C02B2u);
	r1 = 0xE10u; UPD(0x0C7C02B4u, 1);  /* 0C7C02B2 mov.w @(disp,pc),Rn */
	W16(r9, r1); UPD(0x0C7C02B6u, 1);  /* 0C7C02B4 mov.w Rm,@Rn */
L_0C7C02B6: BLKS(0x0C7C02B6u);
	IF(0x0C7C02B6u); PR = R32(r15); r15 += 4; UPD(0x0C7C02B8u, 1);  /* 0C7C02B6 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C02BAu, 1);  /* 0C7C02B8 mov.l @Rm+,Rn */
	IF(0x0C7C02BAu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C7C02BA rts */
}

/* arr_new_game */
void f_0C7C02D8(sh3_t *c)
{
	LOCALS;
L_0C7C02D8: BLKS(0x0C7C02D8u);
	r0 = 0xC05AFF0u; UPD(0x0C7C02DAu, 1);  /* 0C7C02D8 mov.l @(disp,pc),Rn */
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C7C02DCu, 1);  /* 0C7C02DA mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C7C02DEu, 1);  /* 0C7C02DC mov.l Rm,@-Rn */
	IF(0x0C7C02DEu); r15 -= 4; W32(r15, PR); UPD(0x0C7C02E0u, 1);  /* 0C7C02DE sts.l pr,@-Rn */
	IF(0x0C7C02E0u); { u32 t_ = r0; PR = 0x0C7C02E4u; r8 = r4; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C05AFF0, 0x0C05AFF0u, 0x0C7C02E4u); }  /* 0C7C02E0 jsr @Rn */
L_0C7C02E4: BLKS(0x0C7C02E4u);
	r1 = 0xC21CA15u; UPD(0x0C7C02E6u, 1);  /* 0C7C02E4 mov.l @(disp,pc),Rn */
	r9 = r0;  /* 0C7C02E6 mov Rm,Rn */
	r0 = r8;  /* 0C7C02E8 mov Rm,Rn */
	r0 &= 0x1u;  /* 0C7C02EA and #imm,r0 */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C02EEu, 4);  /* 0C7C02EC mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C02EE tst Rm,Rn */
	if (T) { UPD(0x0C7C0316u, 4); goto L_0C7C0316; }  /* 0C7C02F0 bt */
L_0C7C02F2: BLKS(0x0C7C02F2u);
	r1 = 0xC286514u; UPD(0x0C7C02F4u, 1);  /* 0C7C02F2 mov.l @(disp,pc),Rn */
	r2 = R32(r1); UPD(0x0C7C02F6u, 1);  /* 0C7C02F4 mov.l @Rm,Rn */
	r1 = 0xC7C423Cu; UPD(0x0C7C02F8u, 1);  /* 0C7C02F6 mov.l @(disp,pc),Rn */
	W32(r1, r2); UPD(0x0C7C02FAu, 1);  /* 0C7C02F8 mov.l Rm,@Rn */
	r1 = 0x0u;  /* 0C7C02FA mov #imm,Rn */
	r2 = 0xC7C427Cu; UPD(0x0C7C02FEu, 2);  /* 0C7C02FC mov.l @(disp,pc),Rn */
	IF(0x0C7C02FEu); W8(r0 + r2, r1); UPD(0x0C7C0300u, 1);  /* 0C7C02FE mov.b Rm,@(r0,Rn) */
	r2 = 0xC7C4278u; UPD(0x0C7C0302u, 1);  /* 0C7C0300 mov.l @(disp,pc),Rn */
	IF(0x0C7C0302u); W8(r0 + r2, r1); UPD(0x0C7C0304u, 1);  /* 0C7C0302 mov.b Rm,@(r0,Rn) */
	r1 = 0xC21CA15u; UPD(0x0C7C0306u, 1);  /* 0C7C0304 mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C0308u, 1);  /* 0C7C0306 mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C0308 tst Rm,Rn */
	if (T) { UPD(0x0C7C032Eu, 4); goto L_0C7C032E; }  /* 0C7C030A bt */
L_0C7C030C: BLKS(0x0C7C030Cu);
	r0 = r9;  /* 0C7C030C mov Rm,Rn */
	IF(0x0C7C030Eu); PR = R32(r15); r15 += 4; UPD(0x0C7C0310u, 2);  /* 0C7C030E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C0312u, 1);  /* 0C7C0310 mov.l @Rm+,Rn */
	IF(0x0C7C0312u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C7C0312 rts */
L_0C7C0316: BLKS(0x0C7C0316u);
	r2 = 0x989680u; UPD(0x0C7C0318u, 1);  /* 0C7C0316 mov.l @(disp,pc),Rn */
	r1 = 0xC7C423Cu; UPD(0x0C7C031Au, 1);  /* 0C7C0318 mov.l @(disp,pc),Rn */
	W32(r1, r2); UPD(0x0C7C031Cu, 1);  /* 0C7C031A mov.l Rm,@Rn */
	r1 = 0x0u;  /* 0C7C031C mov #imm,Rn */
	r2 = 0xC7C427Cu; UPD(0x0C7C0320u, 2);  /* 0C7C031E mov.l @(disp,pc),Rn */
	IF(0x0C7C0320u); W8(r0 + r2, r1); UPD(0x0C7C0322u, 1);  /* 0C7C0320 mov.b Rm,@(r0,Rn) */
	r2 = 0xC7C4278u; UPD(0x0C7C0324u, 1);  /* 0C7C0322 mov.l @(disp,pc),Rn */
	IF(0x0C7C0324u); W8(r0 + r2, r1); UPD(0x0C7C0326u, 1);  /* 0C7C0324 mov.b Rm,@(r0,Rn) */
	r1 = 0xC21CA15u; UPD(0x0C7C0328u, 1);  /* 0C7C0326 mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C032Au, 1);  /* 0C7C0328 mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C032A tst Rm,Rn */
	if (!T) { UPD(0x0C7C030Cu, 4); goto L_0C7C030C; }  /* 0C7C032C bf */
L_0C7C032E: BLKS(0x0C7C032Eu);
	r1 = 0x280u; UPD(0x0C7C0330u, 1);  /* 0C7C032E mov.w @(disp,pc),Rn */
	r3 = 0x2u;  /* 0C7C0330 mov #imm,Rn */
	r2 = 0xC2839E7u; UPD(0x0C7C0334u, 2);  /* 0C7C0332 mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C7C0334 mov Rm,Rn */
	MACL = (u32)(u16)r0 * (u32)(u16)r1;  /* 0C7C0336 mulu.w Rm,Rn */
	IF(0x0C7C0338u); r1 = MACL;  /* 0C7C0338 sts macl,Rn */
	r2 += r1;  /* 0C7C033A add Rm,Rn */
	W8(r2, r3); UPD(0x0C7C033Eu, 6);  /* 0C7C033C mov.b Rm,@Rn */
	r2 = 0xC283A08u; UPD(0x0C7C0340u, 1);  /* 0C7C033E mov.l @(disp,pc),Rn */
	r1 += r2;  /* 0C7C0340 add Rm,Rn */
	r2 = 0x989680u; UPD(0x0C7C0344u, 2);  /* 0C7C0342 mov.l @(disp,pc),Rn */
	W32(r1, r2); UPD(0x0C7C0346u, 1);  /* 0C7C0344 mov.l Rm,@Rn */
	r1 = 0xC7C3008u; UPD(0x0C7C0348u, 1);  /* 0C7C0346 mov.l @(disp,pc),Rn */
	IF(0x0C7C0348u); { u32 t_ = r1; PR = 0x0C7C034Cu; IF(0x0C7C034Au); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C7C3008, 0x0C7C3008u, 0x0C7C034Cu); }  /* 0C7C0348 jsr @Rn */
L_0C7C034C: BLKS(0x0C7C034Cu);
	r0 = r9;  /* 0C7C034C mov Rm,Rn */
	IF(0x0C7C034Eu); PR = R32(r15); r15 += 4; UPD(0x0C7C0350u, 2);  /* 0C7C034E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C0352u, 1);  /* 0C7C0350 mov.l @Rm+,Rn */
	IF(0x0C7C0352u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C7C0352 rts */
}

/* arr_new_game_credit */
void f_0C7C0380(sh3_t *c)
{
	LOCALS;
L_0C7C0380: BLKS(0x0C7C0380u);
	r1 = 0xC21CA15u; UPD(0x0C7C0382u, 1);  /* 0C7C0380 mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C0384u, 1);  /* 0C7C0382 mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C0384 tst Rm,Rn */
	if (!T) { UPD(0x0C7C03AEu, 4); goto L_0C7C03AE; }  /* 0C7C0386 bf */
L_0C7C0388: BLKS(0x0C7C0388u);
	r1 = 0xC220C34u; UPD(0x0C7C038Au, 1);  /* 0C7C0388 mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C038Cu, 1);  /* 0C7C038A mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C038C tst Rm,Rn */
	{ u32 c_ = !T; r2 = r1; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C7C03AEu, 4); goto L_0C7C03AE; } goto L_0C7C0392; }  /* 0C7C038E bf/s */
L_0C7C0392: BLKS(0x0C7C0392u);
	r1 = 0xC27DC50u; UPD(0x0C7C0394u, 2);  /* 0C7C0392 mov.l @(disp,pc),Rn */
	r3 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C0396u, 1);  /* 0C7C0394 mov.b @Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C7C0396 tst Rm,Rn */
	if (T) { UPD(0x0C7C03AEu, 4); goto L_0C7C03AE; }  /* 0C7C0398 bt */
L_0C7C039A: BLKS(0x0C7C039Au);
	r3 = 0xC286752u; UPD(0x0C7C039Cu, 1);  /* 0C7C039A mov.l @(disp,pc),Rn */
	W8(r3, r2); UPD(0x0C7C039Eu, 1);  /* 0C7C039C mov.b Rm,@Rn */
	W8(r1, r2); UPD(0x0C7C03A0u, 1);  /* 0C7C039E mov.b Rm,@Rn */
	r1 = 0xC161580u; UPD(0x0C7C03A2u, 1);  /* 0C7C03A0 mov.l @(disp,pc),Rn */
	r2 = 0xC22486Eu; UPD(0x0C7C03A4u, 1);  /* 0C7C03A2 mov.l @(disp,pc),Rn */
	r3 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C03A6u, 1);  /* 0C7C03A4 mov.b @Rm,Rn */
	W8(r2, r3); UPD(0x0C7C03A8u, 1);  /* 0C7C03A6 mov.b Rm,@Rn */
	r2 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C03AAu, 1);  /* 0C7C03A8 mov.b @Rm,Rn */
	r1 = 0xC220C60u; UPD(0x0C7C03ACu, 1);  /* 0C7C03AA mov.l @(disp,pc),Rn */
	W32(r1, r2); UPD(0x0C7C03AEu, 1);  /* 0C7C03AC mov.l Rm,@Rn */
L_0C7C03AE: BLKS(0x0C7C03AEu);
	r0 = 0xC7C02D8u; UPD(0x0C7C03B0u, 1);  /* 0C7C03AE mov.l @(disp,pc),Rn */
	IF(0x0C7C03B0u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); IF(0x0C7C03B2u); ; /* slot nop */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C7C02D8u: TAIL(f_0C7C02D8); default: JUMPD(tv_); } }  /* 0C7C03B0 jmp @Rn */
}

/* arr_respawn */
void f_0C7C03D4(sh3_t *c)
{
	LOCALS;
L_0C7C03D4: BLKS(0x0C7C03D4u);
	r1 = 0x280u; UPD(0x0C7C03D6u, 1);  /* 0C7C03D4 mov.w @(disp,pc),Rn */
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C7C03D8u, 1);  /* 0C7C03D6 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C7C03DAu, 1);  /* 0C7C03D8 mov.l Rm,@-Rn */
	r9 = r4;  /* 0C7C03DA mov Rm,Rn */
	MACL = (u32)((s32)(s16)r4 * (s32)(s16)r1);  /* 0C7C03DC muls.w Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C7C03E0u, 4);  /* 0C7C03DE mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C7C03E2u, 1);  /* 0C7C03E0 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C7C03E4u, 1);  /* 0C7C03E2 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C7C03E6u, 1);  /* 0C7C03E4 mov.l Rm,@-Rn */
	IF(0x0C7C03E6u); r8 = MACL;  /* 0C7C03E6 sts macl,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C7C03EAu, 2);  /* 0C7C03E8 mov.l Rm,@-Rn */
	r13 = 0xC2839EBu; UPD(0x0C7C03ECu, 1);  /* 0C7C03EA mov.l @(disp,pc),Rn */
	IF(0x0C7C03ECu); r15 -= 4; W32(r15, PR); UPD(0x0C7C03EEu, 1);  /* 0C7C03EC sts.l pr,@-Rn */
	r13 += r8;  /* 0C7C03EE add Rm,Rn */
	r12 = 0xC2839EAu; UPD(0x0C7C03F2u, 2);  /* 0C7C03F0 mov.l @(disp,pc),Rn */
	r11 = (u32)(s32)(s8)R8(r13); UPD(0x0C7C03F4u, 1);  /* 0C7C03F2 mov.b @Rm,Rn */
	r15 += 0xFFFFFFF4u;  /* 0C7C03F4 add #imm,Rn */
	r12 += r8;  /* 0C7C03F6 add Rm,Rn */
	r14 = 0xC2839F7u; UPD(0x0C7C03FAu, 3);  /* 0C7C03F8 mov.l @(disp,pc),Rn */
	r11 = r11 & 0xFF;  /* 0C7C03FA extu.b Rm,Rn */
	r10 = (u32)(s32)(s8)R8(r12); UPD(0x0C7C03FEu, 2);  /* 0C7C03FC mov.b @Rm,Rn */
	W32(r15 + 0x4u, r11); UPD(0x0C7C0400u, 1);  /* 0C7C03FE mov.l Rm,@(disp,Rn) */
	r14 += r8;  /* 0C7C0400 add Rm,Rn */
	r11 = 0xC2839F6u; UPD(0x0C7C0404u, 2);  /* 0C7C0402 mov.l @(disp,pc),Rn */
	r10 = r10 & 0xFF;  /* 0C7C0404 extu.b Rm,Rn */
	r11 += r8;  /* 0C7C0406 add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r11); UPD(0x0C7C040Au, 3);  /* 0C7C0408 mov.b @Rm,Rn */
	r0 = r1;  /* 0C7C040A mov Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r14); UPD(0x0C7C040Eu, 2);  /* 0C7C040C mov.b @Rm,Rn */
	W8(r15 + 0x9u, r0); UPD(0x0C7C0410u, 1);  /* 0C7C040E mov.b r0,@(disp,Rn) */
	r0 = r1;  /* 0C7C0410 mov Rm,Rn */
	W8(r15 + 0xAu, r0); UPD(0x0C7C0414u, 2);  /* 0C7C0412 mov.b r0,@(disp,Rn) */
	r0 = 0xC2839F8u; UPD(0x0C7C0416u, 1);  /* 0C7C0414 mov.l @(disp,pc),Rn */
	r8 += r0;  /* 0C7C0416 add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r8); UPD(0x0C7C041Au, 2);  /* 0C7C0418 mov.b @Rm,Rn */
	r0 = r1;  /* 0C7C041A mov Rm,Rn */
	W8(r15 + 0xBu, r0); UPD(0x0C7C041Eu, 2);  /* 0C7C041C mov.b r0,@(disp,Rn) */
	r0 = 0xC05B260u; UPD(0x0C7C0420u, 1);  /* 0C7C041E mov.l @(disp,pc),Rn */
	IF(0x0C7C0420u); { u32 t_ = r0; PR = 0x0C7C0424u; IF(0x0C7C0422u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C05B260, 0x0C05B260u, 0x0C7C0424u); }  /* 0C7C0420 jsr @Rn */
L_0C7C0424: BLKS(0x0C7C0424u);
	r7 = 0xC21CA15u; UPD(0x0C7C0426u, 1);  /* 0C7C0424 mov.l @(disp,pc),Rn */
	r3 = r0;  /* 0C7C0426 mov Rm,Rn */
	r7 = (u32)(s32)(s8)R8(r7); UPD(0x0C7C042Au, 2);  /* 0C7C0428 mov.b @Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C7C042A tst Rm,Rn */
	{ u32 c_ = !T; r0 = r3; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C7C0462u, 4); goto L_0C7C0462; } goto L_0C7C0430; }  /* 0C7C042C bf/s */
L_0C7C0430: BLKS(0x0C7C0430u);
	r0 = (u32)(s32)(s8)R8(r15 + 0x9u); UPD(0x0C7C0432u, 2);  /* 0C7C0430 mov.b @(disp,Rm),r0 */
	r2 = 0x3u;  /* 0C7C0432 mov #imm,Rn */
	T = r10 > r2;  /* 0C7C0434 cmp/hi Rm,Rn */
	W8(r11, r0); UPD(0x0C7C0438u, 3);  /* 0C7C0436 mov.b Rm,@Rn */
	r0 = (u32)(s32)(s8)R8(r15 + 0xAu); UPD(0x0C7C043Au, 1);  /* 0C7C0438 mov.b @(disp,Rm),r0 */
	W8(r14, r0); UPD(0x0C7C043Cu, 1);  /* 0C7C043A mov.b Rm,@Rn */
	r0 = (u32)(s32)(s8)R8(r15 + 0xBu); UPD(0x0C7C043Eu, 1);  /* 0C7C043C mov.b @(disp,Rm),r0 */
	W8(r8, r0); UPD(0x0C7C0440u, 1);  /* 0C7C043E mov.b Rm,@Rn */
	{ u32 c_ = T; r1 = 0x28u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C7C0476u, 3); goto L_0C7C0476; } goto L_0C7C0444; }  /* 0C7C0440 bt/s */
L_0C7C0444: BLKS(0x0C7C0444u);
	r10 += 0x1u;  /* 0C7C0444 add #imm,Rn */
	r10 = r10 & 0xFF;  /* 0C7C0446 extu.b Rm,Rn */
	UPD(0x0C7C0448u, 3);
L_0C7C0448: BLKS(0x0C7C0448u);
	r1 = R32(r15 + 0x4u); UPD(0x0C7C044Au, 1);  /* 0C7C0448 mov.l @(disp,Rm),Rn */
	r4 = r9;  /* 0C7C044A mov Rm,Rn */
	W8(r13, r1); UPD(0x0C7C044Eu, 2);  /* 0C7C044C mov.b Rm,@Rn */
	r1 = 0xC21F5E4u; UPD(0x0C7C0450u, 1);  /* 0C7C044E mov.l @(disp,pc),Rn */
	W8(r12, r10); UPD(0x0C7C0452u, 1);  /* 0C7C0450 mov.b Rm,@Rn */
	r2 = R32(r1); UPD(0x0C7C0454u, 1);  /* 0C7C0452 mov.l @Rm,Rn */
	r1 = 0xC27DFF8u; UPD(0x0C7C0456u, 1);  /* 0C7C0454 mov.l @(disp,pc),Rn */
	W32(r1, r2); UPD(0x0C7C0458u, 1);  /* 0C7C0456 mov.l Rm,@Rn */
	r1 = 0xC7C2FB0u; UPD(0x0C7C045Au, 1);  /* 0C7C0458 mov.l @(disp,pc),Rn */
	IF(0x0C7C045Au); { u32 t_ = r1; PR = 0x0C7C045Eu; W32(r15, r3); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C7C2FB0, 0x0C7C2FB0u, 0x0C7C045Eu); }  /* 0C7C045A jsr @Rn */
L_0C7C045E: BLKS(0x0C7C045Eu);
	r3 = R32(r15); UPD(0x0C7C0460u, 1);  /* 0C7C045E mov.l @Rm,Rn */
	r0 = r3;  /* 0C7C0460 mov Rm,Rn */
	UPD(0x0C7C0462u, 1);
L_0C7C0462: BLKS(0x0C7C0462u);
	r15 += 0xCu;  /* 0C7C0462 add #imm,Rn */
	IF(0x0C7C0464u); PR = R32(r15); r15 += 4; UPD(0x0C7C0466u, 2);  /* 0C7C0464 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C7C0468u, 1);  /* 0C7C0466 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C7C046Au, 1);  /* 0C7C0468 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C7C046Cu, 1);  /* 0C7C046A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C7C046Eu, 1);  /* 0C7C046C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C7C0470u, 1);  /* 0C7C046E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C0472u, 1);  /* 0C7C0470 mov.l @Rm+,Rn */
	IF(0x0C7C0472u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C7C0472 rts */
L_0C7C0476: BLKS(0x0C7C0476u);
	W32(r15 + 0x4u, r1); UPD(0x0C7C0478u, 1);  /* 0C7C0476 mov.l Rm,@(disp,Rn) */
	{ r10 = 0x4u; /* slot mov #imm,Rn */ UPD(0x0C7C0448u, 3); goto L_0C7C0448; }  /* 0C7C0478 bra */
}

/* arr_player_hud */
void f_0C7C04A8(sh3_t *c)
{
	LOCALS;
L_0C7C04A8: BLKS(0x0C7C04A8u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C7C04AAu, 1);  /* 0C7C04A8 mov.l Rm,@-Rn */
	r1 = 0x0u;  /* 0C7C04AA mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C7C04AEu, 2);  /* 0C7C04AC mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C7C04B0u, 1);  /* 0C7C04AE mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C7C04B2u, 1);  /* 0C7C04B0 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C7C04B4u, 1);  /* 0C7C04B2 mov.l Rm,@-Rn */
	IF(0x0C7C04B4u); r15 -= 4; W32(r15, PR); UPD(0x0C7C04B6u, 1);  /* 0C7C04B4 sts.l pr,@-Rn */
	r15 += 0xFFFFFFFCu;  /* 0C7C04B6 add #imm,Rn */
	W16(r15, r1); UPD(0x0C7C04BAu, 2);  /* 0C7C04B8 mov.w Rm,@Rn */
	r3 = r15;  /* 0C7C04BA mov Rm,Rn */
	r1 = 0xC21CA15u; UPD(0x0C7C04BEu, 2);  /* 0C7C04BC mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C04C0u, 1);  /* 0C7C04BE mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C04C0 tst Rm,Rn */
	if (T) { UPD(0x0C7C059Cu, 4); goto L_0C7C059C; }  /* 0C7C04C2 bt */
L_0C7C04C4: BLKS(0x0C7C04C4u);
	r1 = 0xC286514u; UPD(0x0C7C04C6u, 1);  /* 0C7C04C4 mov.l @(disp,pc),Rn */
	r2 = R32(r1); UPD(0x0C7C04C8u, 1);  /* 0C7C04C6 mov.l @Rm,Rn */
	r1 = 0xC7C423Cu; UPD(0x0C7C04CAu, 1);  /* 0C7C04C8 mov.l @(disp,pc),Rn */
	W32(r1, r2); UPD(0x0C7C04CCu, 1);  /* 0C7C04CA mov.l Rm,@Rn */
	r1 = 0xC21CA15u; UPD(0x0C7C04CEu, 1);  /* 0C7C04CC mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C04D0u, 1);  /* 0C7C04CE mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C04D0 tst Rm,Rn */
	if (!T) { UPD(0x0C7C05AAu, 4); goto L_0C7C05AA; }  /* 0C7C04D2 bf */
L_0C7C04D4: BLKS(0x0C7C04D4u);
	r1 = 0xC283A04u; UPD(0x0C7C04D6u, 1);  /* 0C7C04D4 mov.l @(disp,pc),Rn */
	r2 = 0x3B9AC9FFu; UPD(0x0C7C04D8u, 1);  /* 0C7C04D6 mov.l @(disp,pc),Rn */
	r0 = R32(r1); UPD(0x0C7C04DAu, 1);  /* 0C7C04D8 mov.l @Rm,Rn */
	T = r0 > r2;  /* 0C7C04DA cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C7C04E0u, 4); goto L_0C7C04E0; }  /* 0C7C04DC bf */
L_0C7C04DE: BLKS(0x0C7C04DEu);
	W32(r1, r2); UPD(0x0C7C04E0u, 1);  /* 0C7C04DE mov.l Rm,@Rn */
L_0C7C04E0: BLKS(0x0C7C04E0u);
	r1 = 0xC2839FFu; UPD(0x0C7C04E2u, 1);  /* 0C7C04E0 mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C04E4u, 1);  /* 0C7C04E2 mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C04E4 tst Rm,Rn */
	if (!T) { UPD(0x0C7C04F6u, 4); goto L_0C7C04F6; }  /* 0C7C04E6 bf */
L_0C7C04E8: BLKS(0x0C7C04E8u);
	r1 = 0xC2839E1u; UPD(0x0C7C04EAu, 1);  /* 0C7C04E8 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C04ECu, 1);  /* 0C7C04EA mov.b @Rm,Rn */
	r0 &= 0x80u;  /* 0C7C04EC and #imm,r0 */
	W8(r3, r0); UPD(0x0C7C04F0u, 2);  /* 0C7C04EE mov.b Rm,@Rn */
	r0 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C04F2u, 1);  /* 0C7C04F0 mov.b @Rm,Rn */
	r0 &= 0x7Fu;  /* 0C7C04F2 and #imm,r0 */
	W8(r1, r0); UPD(0x0C7C04F6u, 2);  /* 0C7C04F4 mov.b Rm,@Rn */
L_0C7C04F6: BLKS(0x0C7C04F6u);
	r1 = 0xC283C84u; UPD(0x0C7C04F8u, 1);  /* 0C7C04F6 mov.l @(disp,pc),Rn */
	r2 = 0x3B9AC9FFu; UPD(0x0C7C04FAu, 1);  /* 0C7C04F8 mov.l @(disp,pc),Rn */
	r0 = R32(r1); UPD(0x0C7C04FCu, 1);  /* 0C7C04FA mov.l @Rm,Rn */
	T = r0 > r2;  /* 0C7C04FC cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C7C0502u, 4); goto L_0C7C0502; }  /* 0C7C04FE bf */
L_0C7C0500: BLKS(0x0C7C0500u);
	W32(r1, r2); UPD(0x0C7C0502u, 1);  /* 0C7C0500 mov.l Rm,@Rn */
L_0C7C0502: BLKS(0x0C7C0502u);
	r1 = 0xC283C7Fu; UPD(0x0C7C0504u, 1);  /* 0C7C0502 mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C0506u, 1);  /* 0C7C0504 mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C0506 tst Rm,Rn */
	if (T) { UPD(0x0C7C05BCu, 4); goto L_0C7C05BC; }  /* 0C7C0508 bt */
L_0C7C050A: BLKS(0x0C7C050Au);
	r0 = 0xC05DE00u; UPD(0x0C7C050Cu, 1);  /* 0C7C050A mov.l @(disp,pc),Rn */
	r9 = 0xC161E91u; UPD(0x0C7C050Eu, 1);  /* 0C7C050C mov.l @(disp,pc),Rn */
	r8 = 0xC161E92u; UPD(0x0C7C0510u, 1);  /* 0C7C050E mov.l @(disp,pc),Rn */
	IF(0x0C7C0510u); { u32 t_ = r0; PR = 0x0C7C0514u; IF(0x0C7C0512u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C05DE00, 0x0C05DE00u, 0x0C7C0514u); }  /* 0C7C0510 jsr @Rn */
L_0C7C0514: BLKS(0x0C7C0514u);
	r6 = 0xC2839FFu; UPD(0x0C7C0516u, 1);  /* 0C7C0514 mov.l @(disp,pc),Rn */
	r4 = r0;  /* 0C7C0516 mov Rm,Rn */
	r0 = 0xC161E90u; UPD(0x0C7C051Au, 2);  /* 0C7C0518 mov.l @(disp,pc),Rn */
L_0C7C051A: BLKS(0x0C7C051Au);
	r2 = (u32)(s32)(s8)R8(r0); UPD(0x0C7C051Cu, 1);  /* 0C7C051A mov.b @Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r6); UPD(0x0C7C051Eu, 1);  /* 0C7C051C mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C051E tst Rm,Rn */
	{ u32 c_ = T; r3 = r6; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C7C0544u, 4); goto L_0C7C0544; } UPD(0x0C7C0524u, 1); goto L_0C7C0524; }  /* 0C7C0520 bt/s */
L_0C7C0524: BLKS(0x0C7C0524u);
	r1 = r0;  /* 0C7C0524 mov Rm,Rn */
	UPD(0x0C7C0526u, 1);
L_0C7C0526: BLKS(0x0C7C0526u);
	r2 = 0x280u; UPD(0x0C7C0528u, 1);  /* 0C7C0526 mov.w @(disp,pc),Rn */
	r1 += 0x1u;  /* 0C7C0528 add #imm,Rn */
	r0 = r9;  /* 0C7C052A mov Rm,Rn */
	T = r1 == r8;  /* 0C7C052C cmp/eq Rm,Rn */
	{ u32 c_ = !T; r6 += r2; /* slot add Rm,Rn */ if (c_) { UPD(0x0C7C051Au, 6); goto L_0C7C051A; } goto L_0C7C0532; }  /* 0C7C052E bf/s */
L_0C7C0532: BLKS(0x0C7C0532u);
	r0 = r4;  /* 0C7C0532 mov Rm,Rn */
	r15 += 0x4u;  /* 0C7C0534 add #imm,Rn */
	IF(0x0C7C0536u); PR = R32(r15); r15 += 4; UPD(0x0C7C0538u, 4);  /* 0C7C0536 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C7C053Au, 1);  /* 0C7C0538 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C7C053Cu, 1);  /* 0C7C053A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C7C053Eu, 1);  /* 0C7C053C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C0540u, 1);  /* 0C7C053E mov.l @Rm+,Rn */
	IF(0x0C7C0540u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C7C0540 rts */
L_0C7C0544: BLKS(0x0C7C0544u);
	r1 = 0xF3E9E170u; UPD(0x0C7C0546u, 1);  /* 0C7C0544 mov.l @(disp,pc),Rn */
	r3 += 0xFFFFFFE2u;  /* 0C7C0546 add #imm,Rn */
	r1 += r15;  /* 0C7C0548 add Rm,Rn */
	r7 = (u32)(s32)(s8)R8(r3); UPD(0x0C7C054Cu, 3);  /* 0C7C054A mov.b @Rm,Rn */
	IF(0x0C7C054Cu); r1 = (u32)(s32)(s8)R8(r0 + r1); UPD(0x0C7C054Eu, 1);  /* 0C7C054C mov.b @(r0,Rm),Rn */
	r2 = (u32)(s32)(s8)r2;  /* 0C7C054E exts.b Rm,Rn */
	r5 = r2;  /* 0C7C0550 mov Rm,Rn */
	r10 = 0x1Fu;  /* 0C7C0552 mov #imm,Rn */
	r1 |= r7;  /* 0C7C0554 or Rm,Rn */
	r5 += 0xDu;  /* 0C7C0556 add #imm,Rn */
	W8(r3, r1); UPD(0x0C7C055Au, 6);  /* 0C7C0558 mov.b Rm,@Rn */
	r11 = 0x0u;  /* 0C7C055A mov #imm,Rn */
	r1 = r2;  /* 0C7C055C mov Rm,Rn */
	r7 = 0xDu;  /* 0C7C055E mov #imm,Rn */
	UPD(0x0C7C0560u, 3);
L_0C7C0560: BLKS(0x0C7C0560u);
	T = (s32)r1 > (s32)r10;  /* 0C7C0560 cmp/gt Rm,Rn */
	{ u32 c_ = T; r3 = r1; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C7C0574u, 4); goto L_0C7C0574; } goto L_0C7C0566; }  /* 0C7C0562 bt/s */
L_0C7C0566: BLKS(0x0C7C0566u);
	r12 = 0xC21F388u; UPD(0x0C7C0568u, 2);  /* 0C7C0566 mov.l @(disp,pc),Rn */
	IF(0x0C7C0568u); r3 <<= 2;  /* 0C7C0568 shll2 Rn */
	r3 += r12;  /* 0C7C056A add Rm,Rn */
	W32(r3, r11); UPD(0x0C7C056Eu, 3);  /* 0C7C056C mov.l Rm,@Rn */
	IF(0x0C7C056Eu); r7 -= 1; T = r7 == 0;  /* 0C7C056E dt Rn */
	{ u32 c_ = !T; r1 += 0x1u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C7C0560u, 4); goto L_0C7C0560; } UPD(0x0C7C0574u, 1); goto L_0C7C0574; }  /* 0C7C0570 bf/s */
L_0C7C0574: BLKS(0x0C7C0574u);
	r3 = 0x20u;  /* 0C7C0574 mov #imm,Rn */
	r1 = 0x21u;  /* 0C7C0576 mov #imm,Rn */
	T = (s32)r2 > (s32)r3;  /* 0C7C0578 cmp/gt Rm,Rn */
	r7 = 0x0u;  /* 0C7C057A mov #imm,Rn */
	{ u32 c_ = T; r1 -= r2; /* slot sub Rm,Rn */ if (c_) { UPD(0x0C7C0598u, 7); goto L_0C7C0598; } UPD(0x0C7C0580u, 1); goto L_0C7C0580; }  /* 0C7C057C bt/s */
L_0C7C0580: BLKS(0x0C7C0580u);
	IF(0x0C7C0580u); r1 -= 1; T = r1 == 0;  /* 0C7C0580 dt Rn */
	{ u32 c_ = T; r3 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C7C0524u, 4); goto L_0C7C0524; } goto L_0C7C0586; }  /* 0C7C0582 bt/s */
L_0C7C0586: BLKS(0x0C7C0586u);
	r10 = 0xC21F408u; UPD(0x0C7C0588u, 2);  /* 0C7C0586 mov.l @(disp,pc),Rn */
	IF(0x0C7C0588u); r3 <<= 2;  /* 0C7C0588 shll2 Rn */
	r3 += r10;  /* 0C7C058A add Rm,Rn */
	r2 += 0x1u;  /* 0C7C058C add #imm,Rn */
	W32(r3, r7); UPD(0x0C7C0590u, 4);  /* 0C7C058E mov.l Rm,@Rn */
	T = r5 == r2;  /* 0C7C0590 cmp/eq Rm,Rn */
	if (!T) { UPD(0x0C7C0580u, 4); goto L_0C7C0580; }  /* 0C7C0592 bf */
L_0C7C0594: BLKS(0x0C7C0594u);
	{ r1 = r0; /* slot mov Rm,Rn */ UPD(0x0C7C0526u, 3); goto L_0C7C0526; }  /* 0C7C0594 bra */
L_0C7C0598: BLKS(0x0C7C0598u);
	{ r1 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C7C0580u, 3); goto L_0C7C0580; }  /* 0C7C0598 bra */
L_0C7C059C: BLKS(0x0C7C059Cu);
	r1 = 0xC7C423Cu; UPD(0x0C7C059Eu, 1);  /* 0C7C059C mov.l @(disp,pc),Rn */
	r2 = 0x989680u; UPD(0x0C7C05A0u, 1);  /* 0C7C059E mov.l @(disp,pc),Rn */
	W32(r1, r2); UPD(0x0C7C05A2u, 1);  /* 0C7C05A0 mov.l Rm,@Rn */
	r1 = 0xC21CA15u; UPD(0x0C7C05A4u, 1);  /* 0C7C05A2 mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C05A6u, 1);  /* 0C7C05A4 mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C05A6 tst Rm,Rn */
	if (T) { UPD(0x0C7C04D4u, 4); goto L_0C7C04D4; }  /* 0C7C05A8 bt */
L_0C7C05AA: BLKS(0x0C7C05AAu);
	r0 = 0xC05DE00u; UPD(0x0C7C05ACu, 1);  /* 0C7C05AA mov.l @(disp,pc),Rn */
	r15 += 0x4u;  /* 0C7C05AC add #imm,Rn */
	IF(0x0C7C05AEu); PR = R32(r15); r15 += 4; UPD(0x0C7C05B0u, 2);  /* 0C7C05AE lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C7C05B2u, 1);  /* 0C7C05B0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C7C05B4u, 1);  /* 0C7C05B2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C7C05B6u, 1);  /* 0C7C05B4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C05B8u, 1);  /* 0C7C05B6 mov.l @Rm+,Rn */
	IF(0x0C7C05B8u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C05DE00u: TAIL(f_0C05DE00); default: JUMPD(tv_); } }  /* 0C7C05B8 jmp @Rn */
L_0C7C05BC: BLKS(0x0C7C05BCu);
	r1 = 0xC283C61u; UPD(0x0C7C05BEu, 1);  /* 0C7C05BC mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C05C0u, 1);  /* 0C7C05BE mov.b @Rm,Rn */
	r0 &= 0x80u;  /* 0C7C05C0 and #imm,r0 */
	W8(r3 + 0x1u, r0); UPD(0x0C7C05C4u, 2);  /* 0C7C05C2 mov.b r0,@(disp,Rn) */
	r0 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C05C6u, 1);  /* 0C7C05C4 mov.b @Rm,Rn */
	r0 &= 0x7Fu;  /* 0C7C05C6 and #imm,r0 */
	W8(r1, r0); UPD(0x0C7C05CAu, 2);  /* 0C7C05C8 mov.b Rm,@Rn */
	{ IF(0x0C7C05CCu); ; /* slot nop */ UPD(0x0C7C050Au, 3); goto L_0C7C050A; }  /* 0C7C05CA bra */
}

/* arr_move */
void f_0C7C0618(sh3_t *c)
{
	LOCALS;
L_0C7C0618: BLKS(0x0C7C0618u);
	r1 = 0xC21CA15u; UPD(0x0C7C061Au, 1);  /* 0C7C0618 mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C061Cu, 1);  /* 0C7C061A mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C061C tst Rm,Rn */
	{ u32 c_ = !T; r2 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C7C06A6u, 4); goto L_0C7C06A6; } goto L_0C7C0622; }  /* 0C7C061E bf/s */
L_0C7C0622: BLKS(0x0C7C0622u);
	r3 = 0xC7C4278u; UPD(0x0C7C0624u, 2);  /* 0C7C0622 mov.l @(disp,pc),Rn */
	r2 &= r4;  /* 0C7C0624 and Rm,Rn */
	r0 = r2;  /* 0C7C0626 mov Rm,Rn */
	IF(0x0C7C0628u); r1 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C7C062Au, 3);  /* 0C7C0628 mov.b @(r0,Rm),Rn */
	r0 = 0xC7C427Cu; UPD(0x0C7C062Cu, 1);  /* 0C7C062A mov.l @(disp,pc),Rn */
	IF(0x0C7C062Cu); r0 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C7C062Eu, 1);  /* 0C7C062C mov.b @(r0,Rm),Rn */
	T = r0 == 0x8u;  /* 0C7C062E cmp/eq #imm,r0 */
	{ u32 c_ = T; r1 = r1 & 0xFF; /* slot extu.b Rm,Rn */ if (c_) { UPD(0x0C7C06ACu, 4); goto L_0C7C06AC; } goto L_0C7C0634; }  /* 0C7C0630 bt/s */
L_0C7C0634: BLKS(0x0C7C0634u);
	T = (r1 & r1) == 0;  /* 0C7C0634 tst Rm,Rn */
	{ u32 c_ = T; r1 += 0xFFFFFFFFu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C7C06A6u, 5); goto L_0C7C06A6; } goto L_0C7C063A; }  /* 0C7C0636 bt/s */
L_0C7C063A: BLKS(0x0C7C063Au);
	r0 = r2;  /* 0C7C063A mov Rm,Rn */
	r1 = r1 & 0xFF;  /* 0C7C063C extu.b Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C063E tst Rm,Rn */
	{ u32 c_ = T; IF(0x0C7C0642u); W8(r0 + r3, r1); /* slot mov.b Rm,@(r0,Rn) */ if (c_) { UPD(0x0C7C06A6u, 7); goto L_0C7C06A6; } UPD(0x0C7C0644u, 1); goto L_0C7C0644; }  /* 0C7C0640 bt/s */
L_0C7C0644: BLKS(0x0C7C0644u);
	r3 = 0x280u; UPD(0x0C7C0646u, 1);  /* 0C7C0644 mov.w @(disp,pc),Rn */
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C7C0648u, 1);  /* 0C7C0646 mov.l Rm,@-Rn */
	MACL = (u32)(u16)r2 * (u32)(u16)r3;  /* 0C7C0648 mulu.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C7C064Cu, 3);  /* 0C7C064A mov.l Rm,@-Rn */
	r3 = 0x0u;  /* 0C7C064C mov #imm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C7C0650u, 2);  /* 0C7C064E mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C7C0652u, 1);  /* 0C7C0650 mov.l Rm,@-Rn */
	IF(0x0C7C0652u); r8 = MACL;  /* 0C7C0652 sts macl,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C7C0656u, 2);  /* 0C7C0654 mov.l Rm,@-Rn */
	r11 = 0xC2837ACu; UPD(0x0C7C0658u, 1);  /* 0C7C0656 mov.l @(disp,pc),Rn */
	IF(0x0C7C0658u); r15 -= 4; W32(r15, PR); UPD(0x0C7C065Au, 1);  /* 0C7C0658 sts.l pr,@-Rn */
	r11 += r8;  /* 0C7C065A add Rm,Rn */
	r0 = 0xC2837B0u; UPD(0x0C7C065Eu, 2);  /* 0C7C065C mov.l @(disp,pc),Rn */
	r10 = R32(r11); UPD(0x0C7C0660u, 1);  /* 0C7C065E mov.l @Rm,Rn */
	r8 += r0;  /* 0C7C0660 add Rm,Rn */
	r0 = 0x66666667u; UPD(0x0C7C0664u, 2);  /* 0C7C0662 mov.l @(disp,pc),Rn */
	IF(0x0C7C0664u); MACL = r1 * r10;  /* 0C7C0664 mul.l Rm,Rn */
	r9 = R32(r8); UPD(0x0C7C0668u, 3);  /* 0C7C0666 mov.l @Rm,Rn */
	IF(0x0C7C0668u); r12 = MACL;  /* 0C7C0668 sts macl,Rn */
	{ s64 r_ = (s64)(s32)r12 * (s64)(s32)r0; MACH = (u32)((u64)r_ >> 32); MACL = (u32)r_; }  /* 0C7C066A dmuls.l Rm,Rn */
	IF(0x0C7C066Cu); r2 = MACH;  /* 0C7C066C sts mach,Rn */
	IF(0x0C7C066Eu); MACL = r1 * r9;  /* 0C7C066E mul.l Rm,Rn */
	IF(0x0C7C0670u); T = r2 & 1; r2 = (u32)((s32)r2 >> 1);  /* 0C7C0670 shar Rn */
	IF(0x0C7C0672u); T = r2 & 1; r2 = (u32)((s32)r2 >> 1);  /* 0C7C0672 shar Rn */
	T = (s32)r3 > (s32)r12;  /* 0C7C0674 cmp/gt Rm,Rn */
	r12 = r10;  /* 0C7C0676 mov Rm,Rn */
	{ u32 a_ = r12, t_ = a_ - r2, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r12 = r_; }  /* 0C7C0678 subc Rm,Rn */
	IF(0x0C7C067Au); r2 = MACL;  /* 0C7C067A sts macl,Rn */
	W32(r11, r12); UPD(0x0C7C067Eu, 13);  /* 0C7C067C mov.l Rm,@Rn */
	{ s64 r_ = (s64)(s32)r2 * (s64)(s32)r0; MACH = (u32)((u64)r_ >> 32); MACL = (u32)r_; }  /* 0C7C067E dmuls.l Rm,Rn */
	r0 = 0xC0621D0u; UPD(0x0C7C0682u, 3);  /* 0C7C0680 mov.l @(disp,pc),Rn */
	IF(0x0C7C0682u); r1 = MACH;  /* 0C7C0682 sts mach,Rn */
	IF(0x0C7C0684u); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C7C0684 shar Rn */
	IF(0x0C7C0686u); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C7C0686 shar Rn */
	T = (s32)r3 > (s32)r2;  /* 0C7C0688 cmp/gt Rm,Rn */
	r2 = r9;  /* 0C7C068A mov Rm,Rn */
	{ u32 a_ = r2, t_ = a_ - r1, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r2 = r_; }  /* 0C7C068C subc Rm,Rn */
	W32(r8, r2); UPD(0x0C7C0690u, 7);  /* 0C7C068E mov.l Rm,@Rn */
	IF(0x0C7C0690u); { u32 t_ = r0; PR = 0x0C7C0694u; IF(0x0C7C0692u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0621D0, 0x0C0621D0u, 0x0C7C0694u); }  /* 0C7C0690 jsr @Rn */
L_0C7C0694: BLKS(0x0C7C0694u);
	W32(r11, r10); UPD(0x0C7C0696u, 1);  /* 0C7C0694 mov.l Rm,@Rn */
	W32(r8, r9); UPD(0x0C7C0698u, 1);  /* 0C7C0696 mov.l Rm,@Rn */
	IF(0x0C7C0698u); PR = R32(r15); r15 += 4; UPD(0x0C7C069Au, 1);  /* 0C7C0698 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C7C069Cu, 1);  /* 0C7C069A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C7C069Eu, 1);  /* 0C7C069C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C7C06A0u, 1);  /* 0C7C069E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C06A2u, 1);  /* 0C7C06A0 mov.l @Rm+,Rn */
	IF(0x0C7C06A2u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C7C06A2 rts */
L_0C7C06A6: BLKS(0x0C7C06A6u);
	r0 = 0xC0621D0u; UPD(0x0C7C06A8u, 1);  /* 0C7C06A6 mov.l @(disp,pc),Rn */
	IF(0x0C7C06A8u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); IF(0x0C7C06AAu); ; /* slot nop */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0621D0u: TAIL(f_0C0621D0); default: JUMPD(tv_); } }  /* 0C7C06A8 jmp @Rn */
L_0C7C06AC: BLKS(0x0C7C06ACu);
	r0 = 0x3u;  /* 0C7C06AC mov #imm,Rn */
	T = r1 > r0;  /* 0C7C06AE cmp/hi Rm,Rn */
	if (T) { UPD(0x0C7C0644u, 5); goto L_0C7C0644; }  /* 0C7C06B0 bt */
L_0C7C06B2: BLKS(0x0C7C06B2u);
	r1 += 0x1u;  /* 0C7C06B2 add #imm,Rn */
	r0 = r2;  /* 0C7C06B4 mov Rm,Rn */
	r1 = r1 & 0xFF;  /* 0C7C06B6 extu.b Rm,Rn */
	{ IF(0x0C7C06BAu); W8(r0 + r3, r1); /* slot mov.b Rm,@(r0,Rn) */ UPD(0x0C7C0644u, 6); goto L_0C7C0644; }  /* 0C7C06B8 bra */
}

/* arr_move_cos */
void f_0C7C06DC(sh3_t *c)
{
	LOCALS;
L_0C7C06DC: BLKS(0x0C7C06DCu);
	r1 = 0xC21CA15u; UPD(0x0C7C06DEu, 1);  /* 0C7C06DC mov.l @(disp,pc),Rn */
	r0 = r4;  /* 0C7C06DE mov Rm,Rn */
	T = r0 == 0x30u;  /* 0C7C06E0 cmp/eq #imm,r0 */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C06E4u, 3);  /* 0C7C06E2 mov.b @Rm,Rn */
	{ u32 c_ = !T; r1 = r1 & 0xFF; /* slot extu.b Rm,Rn */ if (c_) { UPD(0x0C7C06ECu, 3); goto L_0C7C06EC; } goto L_0C7C06E8; }  /* 0C7C06E4 bf/s */
L_0C7C06E8: BLKS(0x0C7C06E8u);
	T = (r1 & r1) == 0;  /* 0C7C06E8 tst Rm,Rn */
	if (T) { UPD(0x0C7C06F2u, 5); goto L_0C7C06F2; }  /* 0C7C06EA bt */
L_0C7C06EC: BLKS(0x0C7C06ECu);
	r0 = 0xC058060u; UPD(0x0C7C06EEu, 1);  /* 0C7C06EC mov.l @(disp,pc),Rn */
	IF(0x0C7C06EEu); { u32 tv_ = r0; u32 t_ = PHYS(tv_); IF(0x0C7C06F0u); ; /* slot nop */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C058060u: TAIL(f_0C058060); default: JUMPD(tv_); } }  /* 0C7C06EE jmp @Rn */
L_0C7C06F2: BLKS(0x0C7C06F2u);
	r0 = 0xC058060u; UPD(0x0C7C06F4u, 1);  /* 0C7C06F2 mov.l @(disp,pc),Rn */
	IF(0x0C7C06F4u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); r4 = 0x40u; /* slot mov #imm,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C058060u: TAIL(f_0C058060); default: JUMPD(tv_); } }  /* 0C7C06F4 jmp @Rn */
}

/* arr_shot_input */
void f_0C7C0700(sh3_t *c)
{
	LOCALS;
L_0C7C0700: BLKS(0x0C7C0700u);
	r1 = 0x280u; UPD(0x0C7C0702u, 1);  /* 0C7C0700 mov.w @(disp,pc),Rn */
	r3 = 0x1u;  /* 0C7C0702 mov #imm,Rn */
	r3 &= r4;  /* 0C7C0704 and Rm,Rn */
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C7C0708u, 3);  /* 0C7C0706 mov.l Rm,@-Rn */
	MACL = (u32)(u16)r3 * (u32)(u16)r1;  /* 0C7C0708 mulu.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C7C070Cu, 3);  /* 0C7C070A mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C7C070Eu, 1);  /* 0C7C070C mov.l Rm,@-Rn */
	IF(0x0C7C070Eu); r8 = MACL;  /* 0C7C070E sts macl,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C7C0712u, 2);  /* 0C7C0710 mov.l Rm,@-Rn */
	r1 = 0xC2839E0u; UPD(0x0C7C0714u, 1);  /* 0C7C0712 mov.l @(disp,pc),Rn */
	IF(0x0C7C0714u); r15 -= 4; W32(r15, PR); UPD(0x0C7C0716u, 1);  /* 0C7C0714 sts.l pr,@-Rn */
	r2 = 0xC21CA15u; UPD(0x0C7C0718u, 1);  /* 0C7C0716 mov.l @(disp,pc),Rn */
	r1 += r8;  /* 0C7C0718 add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C071Cu, 2);  /* 0C7C071A mov.b @Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r2); UPD(0x0C7C071Eu, 1);  /* 0C7C071C mov.b @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C7C071E tst Rm,Rn */
	{ u32 c_ = !T; r1 = r1 & 0xFF; /* slot extu.b Rm,Rn */ if (c_) { UPD(0x0C7C07FAu, 4); goto L_0C7C07FA; } goto L_0C7C0724; }  /* 0C7C0720 bf/s */
L_0C7C0724: BLKS(0x0C7C0724u);
	r11 = 0xC2839ECu; UPD(0x0C7C0726u, 2);  /* 0C7C0724 mov.l @(disp,pc),Rn */
	r0 = r1;  /* 0C7C0726 mov Rm,Rn */
	r9 = 0x10u;  /* 0C7C0728 mov #imm,Rn */
	r11 += r8;  /* 0C7C072A add Rm,Rn */
	T = (r0 & 0x10u) == 0;  /* 0C7C072C tst #imm,r0 */
	W8(r11, r2); UPD(0x0C7C0730u, 5);  /* 0C7C072E mov.b Rm,@Rn */
	r9 &= r1;  /* 0C7C0730 and Rm,Rn */
	r1 = 0xC7C427Cu; UPD(0x0C7C0734u, 2);  /* 0C7C0732 mov.l @(disp,pc),Rn */
	{ u32 c_ = !T; r0 = r3; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C7C0778u, 3); goto L_0C7C0778; } goto L_0C7C0738; }  /* 0C7C0734 bf/s */
L_0C7C0738: BLKS(0x0C7C0738u);
	IF(0x0C7C0738u); W8(r0 + r1, r9); UPD(0x0C7C073Au, 2);  /* 0C7C0738 mov.b Rm,@(r0,Rn) */
L_0C7C073A: BLKS(0x0C7C073Au);
	r2 = 0xC2839E1u; UPD(0x0C7C073Cu, 1);  /* 0C7C073A mov.l @(disp,pc),Rn */
	r10 = 0xC2839EDu; UPD(0x0C7C073Eu, 1);  /* 0C7C073C mov.l @(disp,pc),Rn */
	r2 += r8;  /* 0C7C073E add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C7C0742u, 2);  /* 0C7C0740 mov.b @Rm,Rn */
	T = (r0 & 0x10u) == 0;  /* 0C7C0742 tst #imm,r0 */
	{ u32 c_ = T; r10 += r8; /* slot add Rm,Rn */ if (c_) { UPD(0x0C7C0796u, 4); goto L_0C7C0796; } UPD(0x0C7C0748u, 1); goto L_0C7C0748; }  /* 0C7C0744 bt/s */
L_0C7C0748: BLKS(0x0C7C0748u);
	r0 = r3;  /* 0C7C0748 mov Rm,Rn */
	IF(0x0C7C074Au); r0 = (u32)(s32)(s8)R8(r0 + r1); UPD(0x0C7C074Cu, 2);  /* 0C7C074A mov.b @(r0,Rm),Rn */
	r9 = 0xC7C4274u; UPD(0x0C7C074Eu, 1);  /* 0C7C074C mov.l @(disp,pc),Rn */
	r2 = 0x1u;  /* 0C7C074E mov #imm,Rn */
	T = r0 == 0x8u;  /* 0C7C0750 cmp/eq #imm,r0 */
	r0 = 0xC0627D0u; UPD(0x0C7C0754u, 3);  /* 0C7C0752 mov.l @(disp,pc),Rn */
	IF(0x0C7C0754u); r1 = T;  /* 0C7C0754 movt Rn */
	W8(r11, r2); UPD(0x0C7C0758u, 2);  /* 0C7C0756 mov.b Rm,@Rn */
	IF(0x0C7C0758u); { u32 t_ = r0; PR = 0x0C7C075Cu; W8(r9, r1); /* slot mov.b Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C0627D0, 0x0C0627D0u, 0x0C7C075Cu); }  /* 0C7C0758 jsr @Rn */
L_0C7C075C: BLKS(0x0C7C075Cu);
	r2 = 0xC2839EEu; UPD(0x0C7C075Eu, 1);  /* 0C7C075C mov.l @(disp,pc),Rn */
	r1 = 0x0u;  /* 0C7C075E mov #imm,Rn */
	W8(r9, r1); UPD(0x0C7C0762u, 2);  /* 0C7C0760 mov.b Rm,@Rn */
	r8 += r2;  /* 0C7C0762 add Rm,Rn */
	W8(r8, r1); UPD(0x0C7C0766u, 2);  /* 0C7C0764 mov.b Rm,@Rn */
	r1 = 0x2u;  /* 0C7C0766 mov #imm,Rn */
	W8(r10, r1); UPD(0x0C7C076Au, 2);  /* 0C7C0768 mov.b Rm,@Rn */
L_0C7C076A: BLKS(0x0C7C076Au);
	r0 = 0x0u;  /* 0C7C076A mov #imm,Rn */
	UPD(0x0C7C076Cu, 1);
L_0C7C076C: BLKS(0x0C7C076Cu);
	IF(0x0C7C076Cu); PR = R32(r15); r15 += 4; UPD(0x0C7C076Eu, 1);  /* 0C7C076C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C7C0770u, 1);  /* 0C7C076E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C7C0772u, 1);  /* 0C7C0770 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C0774u, 1);  /* 0C7C0772 mov.l @Rm+,Rn */
	IF(0x0C7C0774u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C7C0774 rts */
L_0C7C0778: BLKS(0x0C7C0778u);
	IF(0x0C7C0778u); r2 = (u32)(s32)(s8)R8(r0 + r1); UPD(0x0C7C077Au, 1);  /* 0C7C0778 mov.b @(r0,Rm),Rn */
	r0 = 0x7u;  /* 0C7C077A mov #imm,Rn */
	r2 = r2 & 0xFF;  /* 0C7C077C extu.b Rm,Rn */
	T = r2 > r0;  /* 0C7C077E cmp/hi Rm,Rn */
	{ u32 c_ = T; r2 += 0x1u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C7C073Au, 6); goto L_0C7C073A; } goto L_0C7C0784; }  /* 0C7C0780 bt/s */
L_0C7C0784: BLKS(0x0C7C0784u);
	r0 = r3;  /* 0C7C0784 mov Rm,Rn */
	IF(0x0C7C0786u); W8(r0 + r1, r2); UPD(0x0C7C0788u, 3);  /* 0C7C0786 mov.b Rm,@(r0,Rn) */
	r2 = 0xC2839E1u; UPD(0x0C7C078Au, 1);  /* 0C7C0788 mov.l @(disp,pc),Rn */
	r10 = 0xC2839EDu; UPD(0x0C7C078Cu, 1);  /* 0C7C078A mov.l @(disp,pc),Rn */
	r2 += r8;  /* 0C7C078C add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C7C0790u, 2);  /* 0C7C078E mov.b @Rm,Rn */
	T = (r0 & 0x10u) == 0;  /* 0C7C0790 tst #imm,r0 */
	{ u32 c_ = !T; r10 += r8; /* slot add Rm,Rn */ if (c_) { UPD(0x0C7C0748u, 4); goto L_0C7C0748; } UPD(0x0C7C0796u, 1); goto L_0C7C0796; }  /* 0C7C0792 bf/s */
L_0C7C0796: BLKS(0x0C7C0796u);
	r2 = (u32)(s32)(s8)R8(r10); UPD(0x0C7C0798u, 1);  /* 0C7C0796 mov.b @Rm,Rn */
	r2 = r2 & 0xFF;  /* 0C7C0798 extu.b Rm,Rn */
	r2 |= r9;  /* 0C7C079A or Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C7C079C tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C7C076Cu, 6); goto L_0C7C076C; } goto L_0C7C07A2; }  /* 0C7C079E bt/s */
L_0C7C07A2: BLKS(0x0C7C07A2u);
	r0 = r3;  /* 0C7C07A2 mov Rm,Rn */
	IF(0x0C7C07A4u); r1 = (u32)(s32)(s8)R8(r0 + r1); UPD(0x0C7C07A6u, 3);  /* 0C7C07A4 mov.b @(r0,Rm),Rn */
	r0 = r1 & 0xFF;  /* 0C7C07A6 extu.b Rm,Rn */
	r1 = 0x7u;  /* 0C7C07A8 mov #imm,Rn */
	T = r0 > r1;  /* 0C7C07AA cmp/hi Rm,Rn */
	{ u32 c_ = T; r2 = 0x2u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C7C07B8u, 6); goto L_0C7C07B8; } goto L_0C7C07B0; }  /* 0C7C07AC bt/s */
L_0C7C07B0: BLKS(0x0C7C07B0u);
	r1 = 0xC2839EFu; UPD(0x0C7C07B2u, 2);  /* 0C7C07B0 mov.l @(disp,pc),Rn */
	r1 += r8;  /* 0C7C07B2 add Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C07B6u, 2);  /* 0C7C07B4 mov.b @Rm,Rn */
	r2 = r2 & 0xFF;  /* 0C7C07B6 extu.b Rm,Rn */
	UPD(0x0C7C07B8u, 1);
L_0C7C07B8: BLKS(0x0C7C07B8u);
	r1 = 0xC2839EEu; UPD(0x0C7C07BAu, 1);  /* 0C7C07B8 mov.l @(disp,pc),Rn */
	r8 += r1;  /* 0C7C07BA add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r8); UPD(0x0C7C07BEu, 2);  /* 0C7C07BC mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C7C07BE add #imm,Rn */
	r1 = r1 & 0xFF;  /* 0C7C07C0 extu.b Rm,Rn */
	W8(r8, r1); UPD(0x0C7C07C4u, 3);  /* 0C7C07C2 mov.b Rm,@Rn */
	T = r2 > r1;  /* 0C7C07C4 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C7C076Au, 4); goto L_0C7C076A; }  /* 0C7C07C6 bt */
L_0C7C07C8: BLKS(0x0C7C07C8u);
	T = r0 == 0x8u;  /* 0C7C07C8 cmp/eq #imm,r0 */
	r1 = 0x1u;  /* 0C7C07CA mov #imm,Rn */
	r0 = 0xC0627D0u; UPD(0x0C7C07CEu, 3);  /* 0C7C07CC mov.l @(disp,pc),Rn */
	W8(r11, r1); UPD(0x0C7C07D0u, 1);  /* 0C7C07CE mov.b Rm,@Rn */
	IF(0x0C7C07D0u); r1 = T;  /* 0C7C07D0 movt Rn */
	r11 = 0xC7C4274u; UPD(0x0C7C07D4u, 2);  /* 0C7C07D2 mov.l @(disp,pc),Rn */
	IF(0x0C7C07D4u); { u32 t_ = r0; PR = 0x0C7C07D8u; W8(r11, r1); /* slot mov.b Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C0627D0, 0x0C0627D0u, 0x0C7C07D8u); }  /* 0C7C07D4 jsr @Rn */
L_0C7C07D8: BLKS(0x0C7C07D8u);
	r1 = 0x0u;  /* 0C7C07D8 mov #imm,Rn */
	T = (r9 & r9) == 0;  /* 0C7C07DA tst Rm,Rn */
	W8(r11, r1); UPD(0x0C7C07DEu, 3);  /* 0C7C07DC mov.b Rm,@Rn */
	W8(r8, r1); UPD(0x0C7C07E0u, 1);  /* 0C7C07DE mov.b Rm,@Rn */
	{ u32 c_ = !T; r1 = 0x2u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C7C07EAu, 3); goto L_0C7C07EA; } goto L_0C7C07E4; }  /* 0C7C07E0 bf/s */
L_0C7C07E4: BLKS(0x0C7C07E4u);
	r1 = (u32)(s32)(s8)R8(r10); UPD(0x0C7C07E6u, 2);  /* 0C7C07E4 mov.b @Rm,Rn */
	r1 += 0xFFFFFFFFu;  /* 0C7C07E6 add #imm,Rn */
	r1 = r1 & 0xFF;  /* 0C7C07E8 extu.b Rm,Rn */
	UPD(0x0C7C07EAu, 2);
L_0C7C07EA: BLKS(0x0C7C07EAu);
	r0 = 0x0u;  /* 0C7C07EA mov #imm,Rn */
	W8(r10, r1); UPD(0x0C7C07EEu, 2);  /* 0C7C07EC mov.b Rm,@Rn */
	IF(0x0C7C07EEu); PR = R32(r15); r15 += 4; UPD(0x0C7C07F0u, 1);  /* 0C7C07EE lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C7C07F2u, 1);  /* 0C7C07F0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C7C07F4u, 1);  /* 0C7C07F2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C07F6u, 1);  /* 0C7C07F4 mov.l @Rm+,Rn */
	IF(0x0C7C07F6u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C7C07F6 rts */
L_0C7C07FA: BLKS(0x0C7C07FAu);
	r0 = 0xC0623D0u; UPD(0x0C7C07FCu, 1);  /* 0C7C07FA mov.l @(disp,pc),Rn */
	IF(0x0C7C07FCu); PR = R32(r15); r15 += 4; UPD(0x0C7C07FEu, 1);  /* 0C7C07FC lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C7C0800u, 1);  /* 0C7C07FE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C7C0802u, 1);  /* 0C7C0800 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C0804u, 1);  /* 0C7C0802 mov.l @Rm+,Rn */
	IF(0x0C7C0804u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0623D0u: TAIL(f_0C0623D0); default: JUMPD(tv_); } }  /* 0C7C0804 jmp @Rn */
}

/* arr_shot_cos */
void f_0C7C0838(sh3_t *c)
{
	LOCALS;
L_0C7C0838: BLKS(0x0C7C0838u);
	r1 = 0xC7C4274u; UPD(0x0C7C083Au, 1);  /* 0C7C0838 mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C083Cu, 1);  /* 0C7C083A mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C083C tst Rm,Rn */
	{ u32 c_ = T; r1 = r5; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C7C0846u, 4); goto L_0C7C0846; } goto L_0C7C0842; }  /* 0C7C083E bt/s */
L_0C7C0842: BLKS(0x0C7C0842u);
	IF(0x0C7C0842u); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C7C0842 shar Rn */
	r5 += r1;  /* 0C7C0844 add Rm,Rn */
	UPD(0x0C7C0846u, 3);
L_0C7C0846: BLKS(0x0C7C0846u);
	r0 = 0xC058060u; UPD(0x0C7C0848u, 1);  /* 0C7C0846 mov.l @(disp,pc),Rn */
	IF(0x0C7C0848u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); IF(0x0C7C084Au); ; /* slot nop */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C058060u: TAIL(f_0C058060); default: JUMPD(tv_); } }  /* 0C7C0848 jmp @Rn */
}

/* arr_shot_sin */
void f_0C7C0854(sh3_t *c)
{
	LOCALS;
L_0C7C0854: BLKS(0x0C7C0854u);
	r1 = 0xC7C4274u; UPD(0x0C7C0856u, 1);  /* 0C7C0854 mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C0858u, 1);  /* 0C7C0856 mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C0858 tst Rm,Rn */
	{ u32 c_ = T; r1 = r5; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C7C0862u, 4); goto L_0C7C0862; } goto L_0C7C085E; }  /* 0C7C085A bt/s */
L_0C7C085E: BLKS(0x0C7C085Eu);
	IF(0x0C7C085Eu); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C7C085E shar Rn */
	r5 += r1;  /* 0C7C0860 add Rm,Rn */
	UPD(0x0C7C0862u, 3);
L_0C7C0862: BLKS(0x0C7C0862u);
	r0 = 0xC058030u; UPD(0x0C7C0864u, 1);  /* 0C7C0862 mov.l @(disp,pc),Rn */
	IF(0x0C7C0864u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); IF(0x0C7C0866u); ; /* slot nop */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C058030u: TAIL(f_0C058030); default: JUMPD(tv_); } }  /* 0C7C0864 jmp @Rn */
}

/* arr_shot_alloc */
void f_0C7C0870(sh3_t *c)
{
	LOCALS;
L_0C7C0870: BLKS(0x0C7C0870u);
	r1 = 0xC21CA15u; UPD(0x0C7C0872u, 1);  /* 0C7C0870 mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C0874u, 1);  /* 0C7C0872 mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C0874 tst Rm,Rn */
	{ u32 c_ = !T; r1 = (u32)(s32)(s16)r4; /* slot exts.w Rm,Rn */ if (c_) { UPD(0x0C7C0900u, 4); goto L_0C7C0900; } goto L_0C7C087A; }  /* 0C7C0876 bf/s */
L_0C7C087A: BLKS(0x0C7C087Au);
	r2 = 0x1u;  /* 0C7C087A mov #imm,Rn */
	T = r1 > r2;  /* 0C7C087C cmp/hi Rm,Rn */
	{ u32 c_ = T; r2 ^= r1; /* slot xor Rm,Rn */ if (c_) { UPD(0x0C7C0900u, 6); goto L_0C7C0900; } goto L_0C7C0882; }  /* 0C7C087E bt/s */
L_0C7C0882: BLKS(0x0C7C0882u);
	r3 = 0x280u; UPD(0x0C7C0884u, 2);  /* 0C7C0882 mov.w @(disp,pc),Rn */
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C7C0886u, 1);  /* 0C7C0884 mov.l Rm,@-Rn */
	MACL = (u32)(u16)r2 * (u32)(u16)r3;  /* 0C7C0886 mulu.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C7C088Au, 3);  /* 0C7C0888 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C7C088Cu, 1);  /* 0C7C088A mov.l Rm,@-Rn */
	IF(0x0C7C088Cu); r2 = MACL;  /* 0C7C088C sts macl,Rn */
	r0 = 0xC283794u; UPD(0x0C7C0890u, 2);  /* 0C7C088E mov.l @(disp,pc),Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C7C0892u, 1);  /* 0C7C0890 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C7C0894u, 1);  /* 0C7C0892 mov.l Rm,@-Rn */
	r2 += r0;  /* 0C7C0894 add Rm,Rn */
	r9 = R32(r2); UPD(0x0C7C0898u, 2);  /* 0C7C0896 mov.l @Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C7C0898 tst Rm,Rn */
	if (!T) { UPD(0x0C7C0906u, 4); goto L_0C7C0906; }  /* 0C7C089A bf */
L_0C7C089C: BLKS(0x0C7C089Cu);
	r2 = 0x3FFu; UPD(0x0C7C089Eu, 1);  /* 0C7C089C mov.w @(disp,pc),Rn */
	r5 = (u32)(s32)(s16)r5;  /* 0C7C089E exts.w Rm,Rn */
	T = (s32)r5 > (s32)r2;  /* 0C7C08A0 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C7C08F2u, 5); goto L_0C7C08F2; }  /* 0C7C08A2 bt */
L_0C7C08A4: BLKS(0x0C7C08A4u);
	r2 = 0x340u; UPD(0x0C7C08A6u, 1);  /* 0C7C08A4 mov.w @(disp,pc),Rn */
	r12 = 0x1u;  /* 0C7C08A6 mov #imm,Rn */
	r12 &= r4;  /* 0C7C08A8 and Rm,Rn */
	MACL = (u32)((s32)(s16)r1 * (s32)(s16)r2);  /* 0C7C08AA muls.w Rm,Rn */
	r1 = 0xC285318u; UPD(0x0C7C08AEu, 5);  /* 0C7C08AC mov.l @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C7C08AE mov #imm,Rn */
	r10 = 0xFu;  /* 0C7C08B0 mov #imm,Rn */
	IF(0x0C7C08B2u); r6 = MACL;  /* 0C7C08B2 sts macl,Rn */
	r8 = 0xFFFFFFE0u;  /* 0C7C08B4 mov #imm,Rn */
	r4 = 0x34u;  /* 0C7C08B6 mov #imm,Rn */
	r6 += r1;  /* 0C7C08B8 add Rm,Rn */
	r7 = 0x20u;  /* 0C7C08BA mov #imm,Rn */
	{ r1 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C7C08C8u, 10); goto L_0C7C08C8; }  /* 0C7C08BC bra */
L_0C7C08C0: BLKS(0x0C7C08C0u);
	r1 = r11;  /* 0C7C08C0 mov Rm,Rn */
	UPD(0x0C7C08C2u, 1);
L_0C7C08C2: BLKS(0x0C7C08C2u);
	IF(0x0C7C08C2u); r7 -= 1; T = r7 == 0;  /* 0C7C08C2 dt Rn */
	{ u32 c_ = T; r3 += 0x1u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C7C08F2u, 4); goto L_0C7C08F2; } UPD(0x0C7C08C8u, 1); goto L_0C7C08C8; }  /* 0C7C08C4 bt/s */
L_0C7C08C8: BLKS(0x0C7C08C8u);
	T = (s32)r3 > (s32)r10;  /* 0C7C08C8 cmp/gt Rm,Rn */
	r0 = r6;  /* 0C7C08CA mov Rm,Rn */
	IF(0x0C7C08CCu); r2 = T;  /* 0C7C08CC movt Rn */
	r2 &= r12;  /* 0C7C08CE and Rm,Rn */
	MACL = (u32)((s32)(s16)r2 * (s32)(s16)r8);  /* 0C7C08D0 muls.w Rm,Rn */
	IF(0x0C7C08D2u); r2 = MACL;  /* 0C7C08D2 sts macl,Rn */
	r2 += r3;  /* 0C7C08D4 add Rm,Rn */
	IF(0x0C7C08D6u); MACL = r2 * r4;  /* 0C7C08D6 mul.l Rm,Rn */
	IF(0x0C7C08D8u); r11 = MACL;  /* 0C7C08D8 sts macl,Rn */
	IF(0x0C7C08DAu); r11 = R32(r0 + r11); UPD(0x0C7C08DCu, 12);  /* 0C7C08DA mov.l @(r0,Rm),Rn */
	T = (r11 & r11) == 0;  /* 0C7C08DC tst Rm,Rn */
	{ u32 c_ = !T; r11 = r1; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C7C08C2u, 4); goto L_0C7C08C2; } goto L_0C7C08E2; }  /* 0C7C08DE bf/s */
L_0C7C08E2: BLKS(0x0C7C08E2u);
	r0 = 0xC2755BCu; UPD(0x0C7C08E4u, 2);  /* 0C7C08E2 mov.l @(disp,pc),Rn */
	r1 += r1;  /* 0C7C08E4 add Rm,Rn */
	r1 += r0;  /* 0C7C08E6 add Rm,Rn */
	W16(r1, r2); UPD(0x0C7C08EAu, 3);  /* 0C7C08E8 mov.w Rm,@Rn */
	IF(0x0C7C08EAu); r5 -= 1; T = r5 == 0;  /* 0C7C08EA dt Rn */
	{ u32 c_ = !T; r11 += 0x1u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C7C08C0u, 4); goto L_0C7C08C0; } goto L_0C7C08F0; }  /* 0C7C08EC bf/s */
L_0C7C08F0: BLKS(0x0C7C08F0u);
	r9 = 0x1u;  /* 0C7C08F0 mov #imm,Rn */
	UPD(0x0C7C08F2u, 2);
L_0C7C08F2: BLKS(0x0C7C08F2u);
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C7C08F4u, 1);  /* 0C7C08F2 mov.l @Rm+,Rn */
	r0 = r9;  /* 0C7C08F4 mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C7C08F8u, 2);  /* 0C7C08F6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C7C08FAu, 1);  /* 0C7C08F8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C08FCu, 1);  /* 0C7C08FA mov.l @Rm+,Rn */
	IF(0x0C7C08FCu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C7C08FC rts */
L_0C7C0900: BLKS(0x0C7C0900u);
	r0 = 0xC0607D0u; UPD(0x0C7C0902u, 1);  /* 0C7C0900 mov.l @(disp,pc),Rn */
	IF(0x0C7C0902u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); IF(0x0C7C0904u); ; /* slot nop */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0607D0u: TAIL(f_0C0607D0); default: JUMPD(tv_); } }  /* 0C7C0902 jmp @Rn */
L_0C7C0906: BLKS(0x0C7C0906u);
	r0 = 0xC0607D0u; UPD(0x0C7C0908u, 1);  /* 0C7C0906 mov.l @(disp,pc),Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C7C090Au, 1);  /* 0C7C0908 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C7C090Cu, 1);  /* 0C7C090A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C7C090Eu, 1);  /* 0C7C090C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C0910u, 1);  /* 0C7C090E mov.l @Rm+,Rn */
	IF(0x0C7C0910u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0607D0u: TAIL(f_0C0607D0); default: JUMPD(tv_); } }  /* 0C7C0910 jmp @Rn */
}

/* arr_shot_hit */
void f_0C7C0930(sh3_t *c)
{
	LOCALS;
L_0C7C0930: BLKS(0x0C7C0930u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C7C0932u, 1);  /* 0C7C0930 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C7C0934u, 1);  /* 0C7C0932 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C7C0936u, 1);  /* 0C7C0934 mov.l Rm,@-Rn */
	r10 = r4;  /* 0C7C0936 mov Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C7C093Au, 2);  /* 0C7C0938 mov.l Rm,@-Rn */
	r11 = r5;  /* 0C7C093A mov Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C7C093Eu, 2);  /* 0C7C093C mov.l Rm,@-Rn */
	r12 = r6;  /* 0C7C093E mov Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C7C0942u, 2);  /* 0C7C0940 mov.l Rm,@-Rn */
	r13 = r7;  /* 0C7C0942 mov Rm,Rn */
	r1 = 0xC21CA15u; UPD(0x0C7C0946u, 2);  /* 0C7C0944 mov.l @(disp,pc),Rn */
	IF(0x0C7C0946u); r15 -= 4; W32(r15, PR); UPD(0x0C7C0948u, 1);  /* 0C7C0946 sts.l pr,@-Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C094Au, 1);  /* 0C7C0948 mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C094A tst Rm,Rn */
	{ u32 c_ = !T; r2 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C7C09AEu, 4); goto L_0C7C09AE; } goto L_0C7C0950; }  /* 0C7C094C bf/s */
L_0C7C0950: BLKS(0x0C7C0950u);
	r1 = 0xC7C4920u; UPD(0x0C7C0952u, 2);  /* 0C7C0950 mov.l @(disp,pc),Rn */
	r3 = 0xC283794u; UPD(0x0C7C0954u, 1);  /* 0C7C0952 mov.l @(disp,pc),Rn */
	r1 = R32(r1); UPD(0x0C7C0956u, 1);  /* 0C7C0954 mov.l @Rm,Rn */
	r0 = r1;  /* 0C7C0956 mov Rm,Rn */
	r2 &= r1;  /* 0C7C0958 and Rm,Rn */
	T = (r0 & 0x1u) == 0;  /* 0C7C095A tst #imm,r0 */
	r1 = 0x280u; UPD(0x0C7C095Eu, 4);  /* 0C7C095C mov.w @(disp,pc),Rn */
	IF(0x0C7C095Eu); r9 = T;  /* 0C7C095E movt Rn */
	MACL = (u32)(u16)r9 * (u32)(u16)r1;  /* 0C7C0960 mulu.w Rm,Rn */
	IF(0x0C7C0962u); r1 = MACL;  /* 0C7C0962 sts macl,Rn */
	r1 += r3;  /* 0C7C0964 add Rm,Rn */
	r8 = R32(r1); UPD(0x0C7C0968u, 6);  /* 0C7C0966 mov.l @Rm,Rn */
	T = (r8 & r8) == 0;  /* 0C7C0968 tst Rm,Rn */
	if (!T) { UPD(0x0C7C09AEu, 4); goto L_0C7C09AE; }  /* 0C7C096A bf */
L_0C7C096C: BLKS(0x0C7C096Cu);
	r1 = 0xC21F882u; UPD(0x0C7C096Eu, 1);  /* 0C7C096C mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s16)R16(r1); UPD(0x0C7C0970u, 1);  /* 0C7C096E mov.w @Rm,Rn */
	r0 &= 0x1u;  /* 0C7C0970 and #imm,r0 */
	T = r0 == r2;  /* 0C7C0972 cmp/eq Rm,Rn */
	{ u32 c_ = !T; r0 = r8; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C7C099Eu, 5); goto L_0C7C099E; } goto L_0C7C0978; }  /* 0C7C0974 bf/s */
L_0C7C0978: BLKS(0x0C7C0978u);
	r0 = 0xC05E6E0u; UPD(0x0C7C097Au, 2);  /* 0C7C0978 mov.l @(disp,pc),Rn */
	IF(0x0C7C097Au); { u32 t_ = r0; PR = 0x0C7C097Eu; IF(0x0C7C097Cu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C05E6E0, 0x0C05E6E0u, 0x0C7C097Eu); }  /* 0C7C097A jsr @Rn */
L_0C7C097E: BLKS(0x0C7C097Eu);
	r1 = 0x340u; UPD(0x0C7C0980u, 1);  /* 0C7C097E mov.w @(disp,pc),Rn */
	r8 = r0;  /* 0C7C0980 mov Rm,Rn */
	MACL = (u32)(u16)r9 * (u32)(u16)r1;  /* 0C7C0982 mulu.w Rm,Rn */
	r1 = 0xC285318u; UPD(0x0C7C0986u, 4);  /* 0C7C0984 mov.l @(disp,pc),Rn */
	IF(0x0C7C0986u); r2 = MACL;  /* 0C7C0986 sts macl,Rn */
	T = (r2 & r2) == 0;  /* 0C7C0988 tst Rm,Rn */
	{ u32 c_ = !T; r1 += r2; /* slot add Rm,Rn */ if (c_) { UPD(0x0C7C09C8u, 5); goto L_0C7C09C8; } goto L_0C7C098E; }  /* 0C7C098A bf/s */
L_0C7C098E: BLKS(0x0C7C098Eu);
	r3 = 0xC285658u; UPD(0x0C7C0990u, 2);  /* 0C7C098E mov.l @(disp,pc),Rn */
L_0C7C0990: BLKS(0x0C7C0990u);
	r2 = R32(r1); UPD(0x0C7C0992u, 1);  /* 0C7C0990 mov.l @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C7C0992 tst Rm,Rn */
	{ u32 c_ = !T; r1 += 0x34u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C7C09D4u, 4); goto L_0C7C09D4; } UPD(0x0C7C0998u, 1); goto L_0C7C0998; }  /* 0C7C0994 bf/s */
L_0C7C0998: BLKS(0x0C7C0998u);
	T = r1 == r3;  /* 0C7C0998 cmp/eq Rm,Rn */
	{ u32 c_ = !T; r0 = r8; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C7C0990u, 4); goto L_0C7C0990; } UPD(0x0C7C099Eu, 1); goto L_0C7C099E; }  /* 0C7C099A bf/s */
L_0C7C099E: BLKS(0x0C7C099Eu);
	IF(0x0C7C099Eu); PR = R32(r15); r15 += 4; UPD(0x0C7C09A0u, 1);  /* 0C7C099E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C7C09A2u, 1);  /* 0C7C09A0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C7C09A4u, 1);  /* 0C7C09A2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C7C09A6u, 1);  /* 0C7C09A4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C7C09A8u, 1);  /* 0C7C09A6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C09AAu, 1);  /* 0C7C09A8 mov.l @Rm+,Rn */
	IF(0x0C7C09AAu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C7C09AA rts */
L_0C7C09AE: BLKS(0x0C7C09AEu);
	r0 = 0xC05E6E0u; UPD(0x0C7C09B0u, 1);  /* 0C7C09AE mov.l @(disp,pc),Rn */
	r7 = r13;  /* 0C7C09B0 mov Rm,Rn */
	r6 = r12;  /* 0C7C09B2 mov Rm,Rn */
	r5 = r11;  /* 0C7C09B4 mov Rm,Rn */
	r4 = r10;  /* 0C7C09B6 mov Rm,Rn */
	IF(0x0C7C09B8u); PR = R32(r15); r15 += 4; UPD(0x0C7C09BAu, 5);  /* 0C7C09B8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C7C09BCu, 1);  /* 0C7C09BA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C7C09BEu, 1);  /* 0C7C09BC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C7C09C0u, 1);  /* 0C7C09BE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C7C09C2u, 1);  /* 0C7C09C0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C09C4u, 1);  /* 0C7C09C2 mov.l @Rm+,Rn */
	IF(0x0C7C09C4u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C05E6E0u: TAIL(f_0C05E6E0); default: JUMPD(tv_); } }  /* 0C7C09C4 jmp @Rn */
L_0C7C09C8: BLKS(0x0C7C09C8u);
	r2 = R32(r1); UPD(0x0C7C09CAu, 1);  /* 0C7C09C8 mov.l @Rm,Rn */
	r3 = 0xC285998u; UPD(0x0C7C09CCu, 1);  /* 0C7C09CA mov.l @(disp,pc),Rn */
	T = (r2 & r2) == 0;  /* 0C7C09CC tst Rm,Rn */
	{ u32 c_ = T; r1 += 0x34u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C7C0998u, 4); goto L_0C7C0998; } goto L_0C7C09D2; }  /* 0C7C09CE bt/s */
L_0C7C09D2: BLKS(0x0C7C09D2u);
	IF(0x0C7C09D2u); ;  /* 0C7C09D2 nop */
	UPD(0x0C7C09D4u, 2);
L_0C7C09D4: BLKS(0x0C7C09D4u);
	r1 = 0xC285318u; UPD(0x0C7C09D6u, 1);  /* 0C7C09D4 mov.l @(disp,pc),Rn */
	r2 = 0xD0u; UPD(0x0C7C09D8u, 1);  /* 0C7C09D6 mov.w @(disp,pc),Rn */
L_0C7C09D8: BLKS(0x0C7C09D8u);
	r3 = 0x340u; UPD(0x0C7C09DAu, 1);  /* 0C7C09D8 mov.w @(disp,pc),Rn */
	IF(0x0C7C09DAu); r2 -= 1; T = r2 == 0;  /* 0C7C09DA dt Rn */
	r0 = R32(r1); UPD(0x0C7C09DEu, 2);  /* 0C7C09DC mov.l @Rm,Rn */
	r3 += r1;  /* 0C7C09DE add Rm,Rn */
	r9 = R32(r3); UPD(0x0C7C09E2u, 2);  /* 0C7C09E0 mov.l @Rm,Rn */
	W32(r1, r9); UPD(0x0C7C09E4u, 1);  /* 0C7C09E2 mov.l Rm,@Rn */
	r1 += 0x4u;  /* 0C7C09E4 add #imm,Rn */
	W32(r3, r0); UPD(0x0C7C09E8u, 2);  /* 0C7C09E6 mov.l Rm,@Rn */
	{ u32 c_ = !T; r7 = r13; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C7C09D8u, 3); goto L_0C7C09D8; } goto L_0C7C09EC; }  /* 0C7C09E8 bf/s */
L_0C7C09EC: BLKS(0x0C7C09ECu);
	r0 = 0xC05E6E0u; UPD(0x0C7C09EEu, 2);  /* 0C7C09EC mov.l @(disp,pc),Rn */
	r6 = r12;  /* 0C7C09EE mov Rm,Rn */
	r5 = r11;  /* 0C7C09F0 mov Rm,Rn */
	IF(0x0C7C09F2u); { u32 t_ = r0; PR = 0x0C7C09F6u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C05E6E0, 0x0C05E6E0u, 0x0C7C09F6u); }  /* 0C7C09F2 jsr @Rn */
L_0C7C09F6: BLKS(0x0C7C09F6u);
	r1 = 0xC285318u; UPD(0x0C7C09F8u, 1);  /* 0C7C09F6 mov.l @(disp,pc),Rn */
	r2 = 0xD0u; UPD(0x0C7C09FAu, 1);  /* 0C7C09F8 mov.w @(disp,pc),Rn */
	IF(0x0C7C09FAu); ;  /* 0C7C09FA nop */
	UPD(0x0C7C09FCu, 1);
L_0C7C09FC: BLKS(0x0C7C09FCu);
	r3 = 0x340u; UPD(0x0C7C09FEu, 1);  /* 0C7C09FC mov.w @(disp,pc),Rn */
	IF(0x0C7C09FEu); r2 -= 1; T = r2 == 0;  /* 0C7C09FE dt Rn */
	r7 = R32(r1); UPD(0x0C7C0A02u, 2);  /* 0C7C0A00 mov.l @Rm,Rn */
	r3 += r1;  /* 0C7C0A02 add Rm,Rn */
	r6 = R32(r3); UPD(0x0C7C0A06u, 2);  /* 0C7C0A04 mov.l @Rm,Rn */
	W32(r1, r6); UPD(0x0C7C0A08u, 1);  /* 0C7C0A06 mov.l Rm,@Rn */
	r1 += 0x4u;  /* 0C7C0A08 add #imm,Rn */
	W32(r3, r7); UPD(0x0C7C0A0Cu, 2);  /* 0C7C0A0A mov.l Rm,@Rn */
	{ u32 c_ = !T; r0 = r8; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C7C09FCu, 3); goto L_0C7C09FC; } goto L_0C7C0A10; }  /* 0C7C0A0C bf/s */
L_0C7C0A10: BLKS(0x0C7C0A10u);
	{ IF(0x0C7C0A12u); ; /* slot nop */ UPD(0x0C7C099Eu, 4); goto L_0C7C099E; }  /* 0C7C0A10 bra */
}

/* arr_dying */
void f_0C7C0A3C(sh3_t *c)
{
	LOCALS;
L_0C7C0A3C: BLKS(0x0C7C0A3Cu);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C7C0A3Eu, 1);  /* 0C7C0A3C mov.l Rm,@-Rn */
	r8 = r4;  /* 0C7C0A3E mov Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C7C0A42u, 2);  /* 0C7C0A40 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C7C0A44u, 1);  /* 0C7C0A42 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C7C0A46u, 1);  /* 0C7C0A44 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C7C0A48u, 1);  /* 0C7C0A46 mov.l Rm,@-Rn */
	IF(0x0C7C0A48u); r15 -= 4; W32(r15, PR); UPD(0x0C7C0A4Au, 1);  /* 0C7C0A48 sts.l pr,@-Rn */
	r1 = 0xC21CA15u; UPD(0x0C7C0A4Cu, 1);  /* 0C7C0A4A mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C7C0A4C add #imm,Rn */
	r12 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C0A50u, 2);  /* 0C7C0A4E mov.b @Rm,Rn */
	r11 = r12 & 0xFF;  /* 0C7C0A50 extu.b Rm,Rn */
	T = (r11 & r11) == 0;  /* 0C7C0A52 tst Rm,Rn */
	if (T) { UPD(0x0C7C0A68u, 5); goto L_0C7C0A68; }  /* 0C7C0A54 bt */
L_0C7C0A56: BLKS(0x0C7C0A56u);
	r0 = 0xC064BB0u; UPD(0x0C7C0A58u, 1);  /* 0C7C0A56 mov.l @(disp,pc),Rn */
	r15 += 0x8u;  /* 0C7C0A58 add #imm,Rn */
	IF(0x0C7C0A5Au); PR = R32(r15); r15 += 4; UPD(0x0C7C0A5Cu, 2);  /* 0C7C0A5A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C7C0A5Eu, 1);  /* 0C7C0A5C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C7C0A60u, 1);  /* 0C7C0A5E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C7C0A62u, 1);  /* 0C7C0A60 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C0A64u, 1);  /* 0C7C0A62 mov.l @Rm+,Rn */
	IF(0x0C7C0A64u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C7C0A64 jmp @Rn */
L_0C7C0A68: BLKS(0x0C7C0A68u);
	r1 = 0x280u; UPD(0x0C7C0A6Au, 1);  /* 0C7C0A68 mov.w @(disp,pc),Rn */
	r10 = 0x1u;  /* 0C7C0A6A mov #imm,Rn */
	r10 &= r4;  /* 0C7C0A6C and Rm,Rn */
	r0 = 0xC7C3D24u; UPD(0x0C7C0A70u, 3);  /* 0C7C0A6E mov.l @(disp,pc),Rn */
	MACL = (u32)(u16)r10 * (u32)(u16)r1;  /* 0C7C0A70 mulu.w Rm,Rn */
	IF(0x0C7C0A72u); { u32 t_ = r0; PR = 0x0C7C0A76u; IF(0x0C7C0A74u); r9 = MACL; /* slot sts macl,Rn */ UPD(t_, 4); CALLP(t_, f_0C7C3D24, 0x0C7C3D24u, 0x0C7C0A76u); }  /* 0C7C0A72 jsr @Rn */
L_0C7C0A76: BLKS(0x0C7C0A76u);
	r1 = 0xC2839FCu; UPD(0x0C7C0A78u, 1);  /* 0C7C0A76 mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C7C0A78 mov #imm,Rn */
	r2 = 0xC283794u; UPD(0x0C7C0A7Cu, 2);  /* 0C7C0A7A mov.l @(disp,pc),Rn */
	r1 += r9;  /* 0C7C0A7C add Rm,Rn */
	r3 = 0xA3FFFFFFu; UPD(0x0C7C0A80u, 2);  /* 0C7C0A7E mov.l @(disp,pc),Rn */
	W8(r1, r12); UPD(0x0C7C0A82u, 1);  /* 0C7C0A80 mov.b Rm,@Rn */
	r2 += r9;  /* 0C7C0A82 add Rm,Rn */
	r1 = 0xC2837A0u; UPD(0x0C7C0A86u, 2);  /* 0C7C0A84 mov.l @(disp,pc),Rn */
	r1 += r9;  /* 0C7C0A86 add Rm,Rn */
	W32(r1, r11); UPD(0x0C7C0A8Au, 2);  /* 0C7C0A88 mov.l Rm,@Rn */
	r1 = R32(r2); UPD(0x0C7C0A8Cu, 1);  /* 0C7C0A8A mov.l @Rm,Rn */
	r1 &= r3;  /* 0C7C0A8C and Rm,Rn */
	W32(r2, r1); UPD(0x0C7C0A90u, 2);  /* 0C7C0A8E mov.l Rm,@Rn */
	r2 = 0x20u;  /* 0C7C0A90 mov #imm,Rn */
	r1 = 0xC28379Cu; UPD(0x0C7C0A94u, 2);  /* 0C7C0A92 mov.l @(disp,pc),Rn */
	r1 += r9;  /* 0C7C0A94 add Rm,Rn */
	W32(r1, r2); UPD(0x0C7C0A98u, 2);  /* 0C7C0A96 mov.l Rm,@Rn */
	r1 = 0x305B47Cu; UPD(0x0C7C0A9Au, 1);  /* 0C7C0A98 mov.l @(disp,pc),Rn */
	r10 += r1;  /* 0C7C0A9A add Rm,Rn */
	r1 = 0xC2837A4u; UPD(0x0C7C0A9Eu, 2);  /* 0C7C0A9C mov.l @(disp,pc),Rn */
	IF(0x0C7C0A9Eu); r10 <<= 2;  /* 0C7C0A9E shll2 Rn */
	r1 += r9;  /* 0C7C0AA0 add Rm,Rn */
	r5 = R32(r10); UPD(0x0C7C0AA4u, 3);  /* 0C7C0AA2 mov.l @Rm,Rn */
	r6 = R32(r1); UPD(0x0C7C0AA6u, 1);  /* 0C7C0AA4 mov.l @Rm,Rn */
	r1 = 0xC2837A8u; UPD(0x0C7C0AA8u, 1);  /* 0C7C0AA6 mov.l @(disp,pc),Rn */
	r9 += r1;  /* 0C7C0AA8 add Rm,Rn */
	r1 = 0x15u;  /* 0C7C0AAA mov #imm,Rn */
	r7 = R32(r9); UPD(0x0C7C0AAEu, 3);  /* 0C7C0AAC mov.l @Rm,Rn */
	W32(r15 + 0x4u, r1); UPD(0x0C7C0AB0u, 1);  /* 0C7C0AAE mov.l Rm,@(disp,Rn) */
	r1 = 0xC0AB240u; UPD(0x0C7C0AB2u, 1);  /* 0C7C0AB0 mov.l @(disp,pc),Rn */
	IF(0x0C7C0AB2u); { u32 t_ = r1; PR = 0x0C7C0AB6u; W32(r15, r11); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C0AB240, 0x0C0AB240u, 0x0C7C0AB6u); }  /* 0C7C0AB2 jsr @Rn */
L_0C7C0AB6: BLKS(0x0C7C0AB6u);
	r0 = 0xC0AFB20u; UPD(0x0C7C0AB8u, 1);  /* 0C7C0AB6 mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C7C0AB8 mov Rm,Rn */
	r7 = 0x0u;  /* 0C7C0ABA mov #imm,Rn */
	r6 = 0x0u;  /* 0C7C0ABC mov #imm,Rn */
	IF(0x0C7C0ABEu); { u32 t_ = r0; PR = 0x0C7C0AC2u; r5 = 0x47u; /* slot mov #imm,Rn */ UPD(t_, 5); CALLP(t_, f_0C0AFB20, 0x0C0AFB20u, 0x0C7C0AC2u); }  /* 0C7C0ABE jsr @Rn */
L_0C7C0AC2: BLKS(0x0C7C0AC2u);
	r0 = 0xC0AFC10u; UPD(0x0C7C0AC4u, 1);  /* 0C7C0AC2 mov.l @(disp,pc),Rn */
	r7 = 0x0u;  /* 0C7C0AC4 mov #imm,Rn */
	r4 = 0x80u; UPD(0x0C7C0AC8u, 2);  /* 0C7C0AC6 mov.w @(disp,pc),Rn */
	r6 = 0x0u;  /* 0C7C0AC8 mov #imm,Rn */
	IF(0x0C7C0ACAu); { u32 t_ = r0; PR = 0x0C7C0ACEu; r5 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0AFC10, 0x0C0AFC10u, 0x0C7C0ACEu); }  /* 0C7C0ACA jsr @Rn */
L_0C7C0ACE: BLKS(0x0C7C0ACEu);
	r0 = 0xC068F40u; UPD(0x0C7C0AD0u, 1);  /* 0C7C0ACE mov.l @(disp,pc),Rn */
	r7 = 0x0u;  /* 0C7C0AD0 mov #imm,Rn */
	r6 = 0x0u;  /* 0C7C0AD2 mov #imm,Rn */
	r4 = r8;  /* 0C7C0AD4 mov Rm,Rn */
	IF(0x0C7C0AD6u); { u32 t_ = r0; PR = 0x0C7C0ADAu; r5 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 5); CALLP(t_, f_0C068F40, 0x0C068F40u, 0x0C7C0ADAu); }  /* 0C7C0AD6 jsr @Rn */
L_0C7C0ADA: BLKS(0x0C7C0ADAu);
	r0 = 0x0u;  /* 0C7C0ADA mov #imm,Rn */
	r15 += 0x8u;  /* 0C7C0ADC add #imm,Rn */
	IF(0x0C7C0ADEu); PR = R32(r15); r15 += 4; UPD(0x0C7C0AE0u, 3);  /* 0C7C0ADE lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C7C0AE2u, 1);  /* 0C7C0AE0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C7C0AE4u, 1);  /* 0C7C0AE2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C7C0AE6u, 1);  /* 0C7C0AE4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C0AE8u, 1);  /* 0C7C0AE6 mov.l @Rm+,Rn */
	IF(0x0C7C0AE8u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C7C0AE8 rts */
}

/* arr_warn_digits */
void f_0C7C0B2C(sh3_t *c)
{
	LOCALS;
L_0C7C0B2C: BLKS(0x0C7C0B2Cu);
	IF(0x0C7C0B2Cu); { u32 t_ = PR; r0 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 3); RET(t_); }  /* 0C7C0B2C rts */
}

/* arr_score_player */
void f_0C7C0B30(sh3_t *c)
{
	LOCALS;
L_0C7C0B30: BLKS(0x0C7C0B30u);
	r1 = 0xC21CA15u; UPD(0x0C7C0B32u, 1);  /* 0C7C0B30 mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C0B34u, 1);  /* 0C7C0B32 mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C0B34 tst Rm,Rn */
	{ u32 c_ = !T; r0 = (u32)(s32)(s8)r6; /* slot exts.b Rm,Rn */ if (c_) { UPD(0x0C7C0BCEu, 4); goto L_0C7C0BCE; } goto L_0C7C0B3A; }  /* 0C7C0B36 bf/s */
L_0C7C0B3A: BLKS(0x0C7C0B3Au);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C7C0B3Cu, 2);  /* 0C7C0B3A mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C7C0B3Eu, 1);  /* 0C7C0B3C mov.l Rm,@-Rn */
	T = r0 == 0x17u;  /* 0C7C0B3E cmp/eq #imm,r0 */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C7C0B42u, 2);  /* 0C7C0B40 mov.l Rm,@-Rn */
	r5 = (u32)(s32)(s8)r5;  /* 0C7C0B42 exts.b Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C7C0B46u, 2);  /* 0C7C0B44 mov.l Rm,@-Rn */
	{ u32 c_ = T; { u32 v_ = r12; r15 -= 4; W32(r15, v_); } /* slot mov.l Rm,@-Rn */ if (c_) { UPD(0x0C7C0BCAu, 3); goto L_0C7C0BCA; } UPD(0x0C7C0B4Au, 1); goto L_0C7C0B4A; }  /* 0C7C0B46 bt/s */
L_0C7C0B4A: BLKS(0x0C7C0B4Au);
	r2 = 0x308784Cu; UPD(0x0C7C0B4Cu, 1);  /* 0C7C0B4A mov.l @(disp,pc),Rn */
	r1 = 0x5u;  /* 0C7C0B4C mov #imm,Rn */
	IF(0x0C7C0B4Eu); ARG0(0x451Du); { s32 s_ = (s32)r1; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = 0; else r5 >>= ((~s_ & 31) + 1); }  /* 0C7C0B4E shld Rm,Rn */
	r8 = 0xCCCCCCCDu; UPD(0x0C7C0B52u, 3);  /* 0C7C0B50 mov.l @(disp,pc),Rn */
	r2 += r5;  /* 0C7C0B52 add Rm,Rn */
	r11 = 0xC16224Cu; UPD(0x0C7C0B56u, 2);  /* 0C7C0B54 mov.l @(disp,pc),Rn */
	r2 += r0;  /* 0C7C0B56 add Rm,Rn */
	r10 = 0xC162258u; UPD(0x0C7C0B5Au, 2);  /* 0C7C0B58 mov.l @(disp,pc),Rn */
	IF(0x0C7C0B5Au); r2 <<= 2;  /* 0C7C0B5A shll2 Rn */
	r6 = 0x0u;  /* 0C7C0B5C mov #imm,Rn */
	r9 = 0x9u;  /* 0C7C0B5E mov #imm,Rn */
	{ r3 = 0xAu; /* slot mov #imm,Rn */ UPD(0x0C7C0B84u, 6); goto L_0C7C0B84; }  /* 0C7C0B60 bra */
L_0C7C0B64: BLKS(0x0C7C0B64u);
	{ u64 r_ = (u64)r0 * (u64)r8; MACH = (u32)(r_ >> 32); MACL = (u32)r_; }  /* 0C7C0B64 dmulu.l Rm,Rn */
	r6 += 0x1u;  /* 0C7C0B66 add #imm,Rn */
	r2 += 0xFFFFFFFCu;  /* 0C7C0B68 add #imm,Rn */
	IF(0x0C7C0B6Au); r12 = MACH;  /* 0C7C0B6A sts mach,Rn */
	IF(0x0C7C0B6Cu); r12 >>= 2;  /* 0C7C0B6C shlr2 Rn */
	IF(0x0C7C0B6Eu); T = r12 & 1; r12 >>= 1;  /* 0C7C0B6E shlr Rn */
	r1 = r12;  /* 0C7C0B70 mov Rm,Rn */
	IF(0x0C7C0B72u); r1 <<= 2;  /* 0C7C0B72 shll2 Rn */
	r1 += r12;  /* 0C7C0B74 add Rm,Rn */
	r1 += r1;  /* 0C7C0B76 add Rm,Rn */
	r0 -= r1;  /* 0C7C0B78 sub Rm,Rn */
	IF(0x0C7C0B7Au); r1 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C7C0B7Cu, 13);  /* 0C7C0B7A mov.b @(r0,Rm),Rn */
	IF(0x0C7C0B7Cu); r3 -= 1; T = r3 == 0;  /* 0C7C0B7C dt Rn */
	r1 |= r7;  /* 0C7C0B7E or Rm,Rn */
	W32(r2 + 0x4u, r1); UPD(0x0C7C0B82u, 3);  /* 0C7C0B80 mov.l Rm,@(disp,Rn) */
	if (T) { UPD(0x0C7C0BBCu, 3); goto L_0C7C0BBC; }  /* 0C7C0B82 bt */
L_0C7C0B84: BLKS(0x0C7C0B84u);
	{ u64 r_ = (u64)r4 * (u64)r8; MACH = (u32)(r_ >> 32); MACL = (u32)r_; }  /* 0C7C0B84 dmulu.l Rm,Rn */
	UPD(0x0C7C0B86u, 2);
L_0C7C0B86: BLKS(0x0C7C0B86u);
	r0 = r4;  /* 0C7C0B86 mov Rm,Rn */
	IF(0x0C7C0B88u); r4 = MACH;  /* 0C7C0B88 sts mach,Rn */
	IF(0x0C7C0B8Au); r4 >>= 2;  /* 0C7C0B8A shlr2 Rn */
	IF(0x0C7C0B8Cu); T = r4 & 1; r4 >>= 1;  /* 0C7C0B8C shlr Rn */
	T = r9 >= r0;  /* 0C7C0B8E cmp/hs Rm,Rn */
	{ u32 c_ = !T; T = (r6 & r6) == 0; /* slot tst Rm,Rn */ if (c_) { UPD(0x0C7C0B98u, 8); goto L_0C7C0B98; } goto L_0C7C0B94; }  /* 0C7C0B90 bf/s */
L_0C7C0B94: BLKS(0x0C7C0B94u);
	{ u32 c_ = !T; r5 = r10; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C7C0B64u, 4); goto L_0C7C0B64; } UPD(0x0C7C0B98u, 1); goto L_0C7C0B98; }  /* 0C7C0B94 bf/s */
L_0C7C0B98: BLKS(0x0C7C0B98u);
	{ u64 r_ = (u64)r0 * (u64)r8; MACH = (u32)(r_ >> 32); MACL = (u32)r_; }  /* 0C7C0B98 dmulu.l Rm,Rn */
	r5 = r11;  /* 0C7C0B9A mov Rm,Rn */
	r6 += 0x1u;  /* 0C7C0B9C add #imm,Rn */
	r2 += 0xFFFFFFFCu;  /* 0C7C0B9E add #imm,Rn */
	IF(0x0C7C0BA0u); r12 = MACH;  /* 0C7C0BA0 sts mach,Rn */
	IF(0x0C7C0BA2u); r12 >>= 2;  /* 0C7C0BA2 shlr2 Rn */
	IF(0x0C7C0BA4u); T = r12 & 1; r12 >>= 1;  /* 0C7C0BA4 shlr Rn */
	r1 = r12;  /* 0C7C0BA6 mov Rm,Rn */
	IF(0x0C7C0BA8u); r1 <<= 2;  /* 0C7C0BA8 shll2 Rn */
	r1 += r12;  /* 0C7C0BAA add Rm,Rn */
	r1 += r1;  /* 0C7C0BAC add Rm,Rn */
	r0 -= r1;  /* 0C7C0BAE sub Rm,Rn */
	IF(0x0C7C0BB0u); r1 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C7C0BB2u, 14);  /* 0C7C0BB0 mov.b @(r0,Rm),Rn */
	IF(0x0C7C0BB2u); r3 -= 1; T = r3 == 0;  /* 0C7C0BB2 dt Rn */
	r1 |= r7;  /* 0C7C0BB4 or Rm,Rn */
	W32(r2 + 0x4u, r1); UPD(0x0C7C0BB8u, 3);  /* 0C7C0BB6 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = !T; { u64 r_ = (u64)r4 * (u64)r8; MACH = (u32)(r_ >> 32); MACL = (u32)r_; } /* slot dmulu.l Rm,Rn */ if (c_) { UPD(0x0C7C0B86u, 4); goto L_0C7C0B86; } UPD(0x0C7C0BBCu, 2); goto L_0C7C0BBC; }  /* 0C7C0BB8 bf/s */
L_0C7C0BBC: BLKS(0x0C7C0BBCu);
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C7C0BBEu, 1);  /* 0C7C0BBC mov.l @Rm+,Rn */
	r0 = 0x0u;  /* 0C7C0BBE mov #imm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C7C0BC2u, 2);  /* 0C7C0BC0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C7C0BC4u, 1);  /* 0C7C0BC2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C0BC6u, 1);  /* 0C7C0BC4 mov.l @Rm+,Rn */
	IF(0x0C7C0BC6u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C7C0BC6 rts */
L_0C7C0BCA: BLKS(0x0C7C0BCAu);
	{ r0 = 0x12u; /* slot mov #imm,Rn */ UPD(0x0C7C0B4Au, 3); goto L_0C7C0B4A; }  /* 0C7C0BCA bra */
L_0C7C0BCE: BLKS(0x0C7C0BCEu);
	r0 = 0xC05E330u; UPD(0x0C7C0BD0u, 1);  /* 0C7C0BCE mov.l @(disp,pc),Rn */
	IF(0x0C7C0BD0u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); IF(0x0C7C0BD2u); ; /* slot nop */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C05E330u: TAIL(f_0C05E330); default: JUMPD(tv_); } }  /* 0C7C0BD0 jmp @Rn */
}


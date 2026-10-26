#include "recomp.h"
#include "recomp_funcs.h"

void f_0C090BB0(sh3_t *c)
{
	LOCALS;
L_0C090BB0: BLKS(0x0C090BB0u);
	r9 = 0xC0A9E40u; UPD(0x0C090BB2u, 1);  /* 0C090BB0 mov.l @(disp,pc),Rn */
	r6 = 0xAu;  /* 0C090BB2 mov #imm,Rn */
	r8 = 0xB4u; UPD(0x0C090BB6u, 2);  /* 0C090BB4 mov.w @(disp,pc),Rn */
	r4 = R32(r14); UPD(0x0C090BB8u, 1);  /* 0C090BB6 mov.l @Rm,Rn */
	IF(0x0C090BB8u); { u32 t_ = r9; PR = 0x0C090BBCu; r5 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C090BBCu); }  /* 0C090BB8 jsr @Rn */
L_0C090BBC: BLKS(0x0C090BBCu);
	T = (r0 & r0) == 0;  /* 0C090BBC tst Rm,Rn */
	if (T) { UPD(0x0C090C5Au, 4); goto L_0C090C5A; }  /* 0C090BBE bt */
L_0C090BC0: BLKS(0x0C090BC0u);
	r6 = R32(r14); UPD(0x0C090BC2u, 1);  /* 0C090BC0 mov.l @Rm,Rn */
	r2 = 0x1u;  /* 0C090BC2 mov #imm,Rn */
	IF(0x0C090BC4u); MACL = r6 * r8;  /* 0C090BC4 mul.l Rm,Rn */
	r11 = 0xC26CD40u; UPD(0x0C090BC8u, 4);  /* 0C090BC6 mov.l @(disp,pc),Rn */
	IF(0x0C090BC8u); r8 = MACL;  /* 0C090BC8 sts macl,Rn */
	r0 = 0x88u; UPD(0x0C090BCCu, 2);  /* 0C090BCA mov.w @(disp,pc),Rn */
	r8 += r11;  /* 0C090BCC add Rm,Rn */
	IF(0x0C090BCEu); W16(r0 + r8, r2); UPD(0x0C090BD0u, 2);  /* 0C090BCE mov.w Rm,@(r0,Rn) */
	r3 = R32(r8 + 0xCu); UPD(0x0C090BD2u, 1);  /* 0C090BD0 mov.l @(disp,Rm),Rn */
	r0 = 0xC0A0380u; UPD(0x0C090BD4u, 1);  /* 0C090BD2 mov.l @(disp,pc),Rn */
	r3 += 0x1u;  /* 0C090BD4 add #imm,Rn */
	r10 = 0xC0AFC10u; UPD(0x0C090BD8u, 2);  /* 0C090BD6 mov.l @(disp,pc),Rn */
	r4 = R32(r14); UPD(0x0C090BDAu, 1);  /* 0C090BD8 mov.l @Rm,Rn */
	IF(0x0C090BDAu); { u32 t_ = r0; PR = 0x0C090BDEu; W32(r8 + 0xCu, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C090BDEu); }  /* 0C090BDA jsr @Rn */
L_0C090BDE: BLKS(0x0C090BDEu);
	IF(0x0C090BDEu); { u32 t_ = r10; PR = 0x0C090BE2u; r4 = 0x73u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C090BE2u); }  /* 0C090BDE jsr @Rn */
L_0C090BE2: BLKS(0x0C090BE2u);
	r1 = R32(r8); UPD(0x0C090BE4u, 1);  /* 0C090BE2 mov.l @Rm,Rn */
	r10 = 0xFFFFBFFFu; UPD(0x0C090BE6u, 1);  /* 0C090BE4 mov.w @(disp,pc),Rn */
	r13 = 0xFFFFEC6Cu; UPD(0x0C090BE8u, 1);  /* 0C090BE6 mov.w @(disp,pc),Rn */
	IF(0x0C090BE8u); { u32 tv_ = (r13 + 0x0C090BECu); u32 t_ = PHYS(tv_); r1 &= r10; /* slot and Rm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C090BE8 braf Rn */
L_0C090C5A: BLKS(0x0C090C5Au);
	r13 = 0xFFFFE2F6u; UPD(0x0C090C5Cu, 1);  /* 0C090C5A mov.w @(disp,pc),Rn */
	IF(0x0C090C5Cu); { u32 tv_ = (r13 + 0x0C090C60u); u32 t_ = PHYS(tv_); r14 += 0x40u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C090C5C braf Rn */
}

void f_0C090BF0(sh3_t *c)
{
	LOCALS;
L_0C090BF0: BLKS(0x0C090BF0u);
	r7 = R32(r14); UPD(0x0C090BF2u, 1);  /* 0C090BF0 mov.l @Rm,Rn */
	r4 = 0xB4u; UPD(0x0C090BF4u, 1);  /* 0C090BF2 mov.w @(disp,pc),Rn */
	IF(0x0C090BF4u); MACL = r7 * r4;  /* 0C090BF4 mul.l Rm,Rn */
	r12 = 0xC26CD40u; UPD(0x0C090BF8u, 3);  /* 0C090BF6 mov.l @(disp,pc),Rn */
	IF(0x0C090BF8u); r8 = MACL;  /* 0C090BF8 sts macl,Rn */
	r2 = 0x99u; UPD(0x0C090BFCu, 2);  /* 0C090BFA mov.w @(disp,pc),Rn */
	r8 += r12;  /* 0C090BFC add Rm,Rn */
	r2 += r8;  /* 0C090BFE add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C090C02u, 3);  /* 0C090C00 mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C090C02 add #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C090C04 extu.b Rm,Rn */
	T = r0 == 0x3u;  /* 0C090C06 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r2, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C090C5Au, 6); goto L_0C090C5A; } UPD(0x0C090C0Cu, 1); goto L_0C090C0C; }  /* 0C090C08 bf/s */
L_0C090C0C: BLKS(0x0C090C0Cu);
	r0 = 0x0u;  /* 0C090C0C mov #imm,Rn */
	W8(r2, r0); UPD(0x0C090C10u, 2);  /* 0C090C0E mov.b Rm,@Rn */
	r0 = 0x88u; UPD(0x0C090C12u, 1);  /* 0C090C10 mov.w @(disp,pc),Rn */
	r9 = R32(r8 + 0xCu); UPD(0x0C090C14u, 1);  /* 0C090C12 mov.l @(disp,Rm),Rn */
	IF(0x0C090C14u); r10 = (u32)(s32)(s16)R16(r0 + r8); UPD(0x0C090C16u, 1);  /* 0C090C14 mov.w @(r0,Rm),Rn */
	r13 = 0xC0A0380u; UPD(0x0C090C18u, 1);  /* 0C090C16 mov.l @(disp,pc),Rn */
	r9 += r10;  /* 0C090C18 add Rm,Rn */
	W32(r8 + 0xCu, r9); UPD(0x0C090C1Cu, 2);  /* 0C090C1A mov.l Rm,@(disp,Rn) */
	IF(0x0C090C1Cu); { u32 t_ = r13; PR = 0x0C090C20u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C090C20u); }  /* 0C090C1C jsr @Rn */
L_0C090C20: BLKS(0x0C090C20u);
	r5 = R32(r8 + 0xCu); UPD(0x0C090C22u, 1);  /* 0C090C20 mov.l @(disp,Rm),Rn */
	T = (r5 & r5) == 0;  /* 0C090C22 tst Rm,Rn */
	{ u32 c_ = !T; r1 = R32(r14); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C090C32u, 4); goto L_0C090C32; } UPD(0x0C090C28u, 1); goto L_0C090C28; }  /* 0C090C24 bf/s */
L_0C090C28: BLKS(0x0C090C28u);
	r3 = R32(r8); UPD(0x0C090C2Au, 1);  /* 0C090C28 mov.l @Rm,Rn */
	r11 = 0x4000u; UPD(0x0C090C2Cu, 1);  /* 0C090C2A mov.w @(disp,pc),Rn */
	r3 |= r11;  /* 0C090C2C or Rm,Rn */
	W32(r8, r3); UPD(0x0C090C30u, 2);  /* 0C090C2E mov.l Rm,@Rn */
	r1 = R32(r14); UPD(0x0C090C32u, 1);  /* 0C090C30 mov.l @Rm,Rn */
L_0C090C32: BLKS(0x0C090C32u);
	r4 = 0xB4u; UPD(0x0C090C34u, 1);  /* 0C090C32 mov.w @(disp,pc),Rn */
	IF(0x0C090C34u); MACL = r1 * r4;  /* 0C090C34 mul.l Rm,Rn */
	r12 = 0xC26CD40u; UPD(0x0C090C38u, 3);  /* 0C090C36 mov.l @(disp,pc),Rn */
	r0 = 0x99u; UPD(0x0C090C3Au, 1);  /* 0C090C38 mov.w @(disp,pc),Rn */
	IF(0x0C090C3Au); r3 = MACL;  /* 0C090C3A sts macl,Rn */
	r3 += r12;  /* 0C090C3C add Rm,Rn */
	IF(0x0C090C3Eu); r6 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C090C40u, 3);  /* 0C090C3E mov.b @(r0,Rm),Rn */
	r8 = 0xF0u; UPD(0x0C090C42u, 1);  /* 0C090C40 mov.w @(disp,pc),Rn */
	r6 += 0x1u;  /* 0C090C42 add #imm,Rn */
	r2 = r6 & 0xFF;  /* 0C090C44 extu.b Rm,Rn */
	T = r2 == r8;  /* 0C090C46 cmp/eq Rm,Rn */
	{ u32 c_ = T; IF(0x0C090C4Au); W8(r0 + r3, r6); /* slot mov.b Rm,@(r0,Rn) */ if (c_) { UPD(0x0C090C80u, 6); goto L_0C090C80; } UPD(0x0C090C4Cu, 1); goto L_0C090C4C; }  /* 0C090C48 bt/s */
L_0C090C4C: BLKS(0x0C090C4Cu);
	r10 = 0xC0A9E40u; UPD(0x0C090C4Eu, 1);  /* 0C090C4C mov.l @(disp,pc),Rn */
	r5 = 0xAu;  /* 0C090C4E mov #imm,Rn */
	r4 = R32(r14); UPD(0x0C090C52u, 2);  /* 0C090C50 mov.l @Rm,Rn */
	IF(0x0C090C52u); { u32 t_ = r10; PR = 0x0C090C56u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C090C56u); }  /* 0C090C52 jsr @Rn */
L_0C090C56: BLKS(0x0C090C56u);
	T = (r0 & r0) == 0;  /* 0C090C56 tst Rm,Rn */
	if (!T) { UPD(0x0C090C62u, 4); goto L_0C090C62; }  /* 0C090C58 bf */
L_0C090C5A: BLKS(0x0C090C5Au);
	r13 = 0xFFFFE2F6u; UPD(0x0C090C5Cu, 1);  /* 0C090C5A mov.w @(disp,pc),Rn */
	IF(0x0C090C5Cu); { u32 tv_ = (r13 + 0x0C090C60u); u32 t_ = PHYS(tv_); r14 += 0x40u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C090C5C braf Rn */
L_0C090C62: BLKS(0x0C090C62u);
	r3 = R32(r14); UPD(0x0C090C64u, 1);  /* 0C090C62 mov.l @Rm,Rn */
	r2 = 0xB4u; UPD(0x0C090C66u, 1);  /* 0C090C64 mov.w @(disp,pc),Rn */
	r4 = r3;  /* 0C090C66 mov Rm,Rn */
	IF(0x0C090C68u); MACL = r3 * r2;  /* 0C090C68 mul.l Rm,Rn */
	r8 = 0xC26CD40u; UPD(0x0C090C6Cu, 4);  /* 0C090C6A mov.l @(disp,pc),Rn */
	IF(0x0C090C6Cu); r0 = MACL;  /* 0C090C6C sts macl,Rn */
	r0 += r8;  /* 0C090C6E add Rm,Rn */
	r11 = R32(r0 + 0xCu); UPD(0x0C090C72u, 3);  /* 0C090C70 mov.l @(disp,Rm),Rn */
	r11 += 0x1u;  /* 0C090C72 add #imm,Rn */
	r1 = 0xFFFFE7ACu; UPD(0x0C090C76u, 2);  /* 0C090C74 mov.w @(disp,pc),Rn */
	IF(0x0C090C76u); { u32 tv_ = (r1 + 0x0C090C7Au); u32 t_ = PHYS(tv_); W32(r0 + 0xCu, r11); /* slot mov.l Rm,@(disp,Rn) */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C090C76 braf Rn */
L_0C090C80: BLKS(0x0C090C80u);
	r9 = 0x0u;  /* 0C090C80 mov #imm,Rn */
	IF(0x0C090C82u); W8(r0 + r3, r9); UPD(0x0C090C84u, 2);  /* 0C090C82 mov.b Rm,@(r0,Rn) */
	r13 = 0xFFFFFFFFu;  /* 0C090C84 mov #imm,Rn */
	r5 = R32(r3 + 0xCu); UPD(0x0C090C88u, 2);  /* 0C090C86 mov.l @(disp,Rm),Rn */
	r0 += 0xFFFFFFEFu;  /* 0C090C88 add #imm,Rn */
	r7 = 0xC0A0380u; UPD(0x0C090C8Cu, 2);  /* 0C090C8A mov.l @(disp,pc),Rn */
	r5 += 0xFFFFFFFFu;  /* 0C090C8C add #imm,Rn */
	IF(0x0C090C8Eu); W16(r0 + r3, r13); UPD(0x0C090C90u, 2);  /* 0C090C8E mov.w Rm,@(r0,Rn) */
	W32(r3 + 0xCu, r5); UPD(0x0C090C92u, 1);  /* 0C090C90 mov.l Rm,@(disp,Rn) */
	IF(0x0C090C92u); { u32 t_ = r7; PR = 0x0C090C96u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C090C96u); }  /* 0C090C92 jsr @Rn */
L_0C090C96: BLKS(0x0C090C96u);
	{ IF(0x0C090C98u); ; /* slot nop */ UPD(0x0C090C4Cu, 3); goto L_0C090C4C; }  /* 0C090C96 bra */
}

void f_0C090C30(sh3_t *c)
{
	LOCALS;
L_0C090C30: BLKS(0x0C090C30u);
	r1 = R32(r14); UPD(0x0C090C32u, 1);  /* 0C090C30 mov.l @Rm,Rn */
	r4 = 0xB4u; UPD(0x0C090C34u, 1);  /* 0C090C32 mov.w @(disp,pc),Rn */
	IF(0x0C090C34u); MACL = r1 * r4;  /* 0C090C34 mul.l Rm,Rn */
	r12 = 0xC26CD40u; UPD(0x0C090C38u, 3);  /* 0C090C36 mov.l @(disp,pc),Rn */
	r0 = 0x99u; UPD(0x0C090C3Au, 1);  /* 0C090C38 mov.w @(disp,pc),Rn */
	IF(0x0C090C3Au); r3 = MACL;  /* 0C090C3A sts macl,Rn */
	r3 += r12;  /* 0C090C3C add Rm,Rn */
	IF(0x0C090C3Eu); r6 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C090C40u, 3);  /* 0C090C3E mov.b @(r0,Rm),Rn */
	r8 = 0xF0u; UPD(0x0C090C42u, 1);  /* 0C090C40 mov.w @(disp,pc),Rn */
	r6 += 0x1u;  /* 0C090C42 add #imm,Rn */
	r2 = r6 & 0xFF;  /* 0C090C44 extu.b Rm,Rn */
	T = r2 == r8;  /* 0C090C46 cmp/eq Rm,Rn */
	{ u32 c_ = T; IF(0x0C090C4Au); W8(r0 + r3, r6); /* slot mov.b Rm,@(r0,Rn) */ if (c_) { UPD(0x0C090C80u, 6); goto L_0C090C80; } UPD(0x0C090C4Cu, 1); goto L_0C090C4C; }  /* 0C090C48 bt/s */
L_0C090C4C: BLKS(0x0C090C4Cu);
	r10 = 0xC0A9E40u; UPD(0x0C090C4Eu, 1);  /* 0C090C4C mov.l @(disp,pc),Rn */
	r5 = 0xAu;  /* 0C090C4E mov #imm,Rn */
	r4 = R32(r14); UPD(0x0C090C52u, 2);  /* 0C090C50 mov.l @Rm,Rn */
	IF(0x0C090C52u); { u32 t_ = r10; PR = 0x0C090C56u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C090C56u); }  /* 0C090C52 jsr @Rn */
L_0C090C56: BLKS(0x0C090C56u);
	T = (r0 & r0) == 0;  /* 0C090C56 tst Rm,Rn */
	if (!T) { UPD(0x0C090C62u, 4); goto L_0C090C62; }  /* 0C090C58 bf */
L_0C090C5A: BLKS(0x0C090C5Au);
	r13 = 0xFFFFE2F6u; UPD(0x0C090C5Cu, 1);  /* 0C090C5A mov.w @(disp,pc),Rn */
	IF(0x0C090C5Cu); { u32 tv_ = (r13 + 0x0C090C60u); u32 t_ = PHYS(tv_); r14 += 0x40u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C090C5C braf Rn */
L_0C090C62: BLKS(0x0C090C62u);
	r3 = R32(r14); UPD(0x0C090C64u, 1);  /* 0C090C62 mov.l @Rm,Rn */
	r2 = 0xB4u; UPD(0x0C090C66u, 1);  /* 0C090C64 mov.w @(disp,pc),Rn */
	r4 = r3;  /* 0C090C66 mov Rm,Rn */
	IF(0x0C090C68u); MACL = r3 * r2;  /* 0C090C68 mul.l Rm,Rn */
	r8 = 0xC26CD40u; UPD(0x0C090C6Cu, 4);  /* 0C090C6A mov.l @(disp,pc),Rn */
	IF(0x0C090C6Cu); r0 = MACL;  /* 0C090C6C sts macl,Rn */
	r0 += r8;  /* 0C090C6E add Rm,Rn */
	r11 = R32(r0 + 0xCu); UPD(0x0C090C72u, 3);  /* 0C090C70 mov.l @(disp,Rm),Rn */
	r11 += 0x1u;  /* 0C090C72 add #imm,Rn */
	r1 = 0xFFFFE7ACu; UPD(0x0C090C76u, 2);  /* 0C090C74 mov.w @(disp,pc),Rn */
	IF(0x0C090C76u); { u32 tv_ = (r1 + 0x0C090C7Au); u32 t_ = PHYS(tv_); W32(r0 + 0xCu, r11); /* slot mov.l Rm,@(disp,Rn) */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C090C76 braf Rn */
L_0C090C80: BLKS(0x0C090C80u);
	r9 = 0x0u;  /* 0C090C80 mov #imm,Rn */
	IF(0x0C090C82u); W8(r0 + r3, r9); UPD(0x0C090C84u, 2);  /* 0C090C82 mov.b Rm,@(r0,Rn) */
	r13 = 0xFFFFFFFFu;  /* 0C090C84 mov #imm,Rn */
	r5 = R32(r3 + 0xCu); UPD(0x0C090C88u, 2);  /* 0C090C86 mov.l @(disp,Rm),Rn */
	r0 += 0xFFFFFFEFu;  /* 0C090C88 add #imm,Rn */
	r7 = 0xC0A0380u; UPD(0x0C090C8Cu, 2);  /* 0C090C8A mov.l @(disp,pc),Rn */
	r5 += 0xFFFFFFFFu;  /* 0C090C8C add #imm,Rn */
	IF(0x0C090C8Eu); W16(r0 + r3, r13); UPD(0x0C090C90u, 2);  /* 0C090C8E mov.w Rm,@(r0,Rn) */
	W32(r3 + 0xCu, r5); UPD(0x0C090C92u, 1);  /* 0C090C90 mov.l Rm,@(disp,Rn) */
	IF(0x0C090C92u); { u32 t_ = r7; PR = 0x0C090C96u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C090C96u); }  /* 0C090C92 jsr @Rn */
L_0C090C96: BLKS(0x0C090C96u);
	{ IF(0x0C090C98u); ; /* slot nop */ UPD(0x0C090C4Cu, 3); goto L_0C090C4C; }  /* 0C090C96 bra */
}

void f_0C090C62(sh3_t *c)
{
	LOCALS;
L_0C090C62: BLKS(0x0C090C62u);
	r3 = R32(r14); UPD(0x0C090C64u, 1);  /* 0C090C62 mov.l @Rm,Rn */
	r2 = 0xB4u; UPD(0x0C090C66u, 1);  /* 0C090C64 mov.w @(disp,pc),Rn */
	r4 = r3;  /* 0C090C66 mov Rm,Rn */
	IF(0x0C090C68u); MACL = r3 * r2;  /* 0C090C68 mul.l Rm,Rn */
	r8 = 0xC26CD40u; UPD(0x0C090C6Cu, 4);  /* 0C090C6A mov.l @(disp,pc),Rn */
	IF(0x0C090C6Cu); r0 = MACL;  /* 0C090C6C sts macl,Rn */
	r0 += r8;  /* 0C090C6E add Rm,Rn */
	r11 = R32(r0 + 0xCu); UPD(0x0C090C72u, 3);  /* 0C090C70 mov.l @(disp,Rm),Rn */
	r11 += 0x1u;  /* 0C090C72 add #imm,Rn */
	r1 = 0xFFFFE7ACu; UPD(0x0C090C76u, 2);  /* 0C090C74 mov.w @(disp,pc),Rn */
	IF(0x0C090C76u); { u32 tv_ = (r1 + 0x0C090C7Au); u32 t_ = PHYS(tv_); W32(r0 + 0xCu, r11); /* slot mov.l Rm,@(disp,Rn) */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C090C76 braf Rn */
}

void f_0C090CA0(sh3_t *c)
{
	LOCALS;
L_0C090CA0: BLKS(0x0C090CA0u);
	r1 = R32(r14); UPD(0x0C090CA2u, 1);  /* 0C090CA0 mov.l @Rm,Rn */
	r15 += 0xFFFFFFFCu;  /* 0C090CA2 add #imm,Rn */
	r9 = 0xB4u; UPD(0x0C090CA6u, 2);  /* 0C090CA4 mov.w @(disp,pc),Rn */
	IF(0x0C090CA6u); MACL = r1 * r9;  /* 0C090CA6 mul.l Rm,Rn */
	r5 = 0xC26CD40u; UPD(0x0C090CAAu, 3);  /* 0C090CA8 mov.l @(disp,pc),Rn */
	IF(0x0C090CAAu); r12 = MACL;  /* 0C090CAA sts macl,Rn */
	r12 += r5;  /* 0C090CAC add Rm,Rn */
	r5 = R32(r12 + 0x24u); UPD(0x0C090CB0u, 3);  /* 0C090CAE mov.l @(disp,Rm),Rn */
	r4 = 0x38000u; UPD(0x0C090CB2u, 1);  /* 0C090CB0 mov.l @(disp,pc),Rn */
	r7 = 0xFFD80000u; UPD(0x0C090CB4u, 1);  /* 0C090CB2 mov.l @(disp,pc),Rn */
	W32(r15, r4); UPD(0x0C090CB6u, 1);  /* 0C090CB4 mov.l Rm,@Rn */
	r5 += r7;  /* 0C090CB6 add Rm,Rn */
	r13 = 0xC0A8E70u; UPD(0x0C090CBAu, 2);  /* 0C090CB8 mov.l @(disp,pc),Rn */
	r4 = 0x2u;  /* 0C090CBA mov #imm,Rn */
	r7 = 0x100u; UPD(0x0C090CBEu, 2);  /* 0C090CBC mov.w @(disp,pc),Rn */
	IF(0x0C090CBEu); { u32 t_ = r13; PR = 0x0C090CC2u; r6 = R32(r12 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0A8E70, 0x0C0A8E70u, 0x0C090CC2u); }  /* 0C090CBE jsr @Rn */
L_0C090CC2: BLKS(0x0C090CC2u);
	r6 = 0x10u;  /* 0C090CC2 mov #imm,Rn */
	W32(r12 + 0xCu, r6); UPD(0x0C090CC6u, 2);  /* 0C090CC4 mov.l Rm,@(disp,Rn) */
	r4 = 0xFFFFE758u; UPD(0x0C090CC8u, 1);  /* 0C090CC6 mov.w @(disp,pc),Rn */
	IF(0x0C090CC8u); { u32 tv_ = (r4 + 0x0C090CCCu); u32 t_ = PHYS(tv_); r15 += 0x4u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C090CC8 braf Rn */
}

void f_0C090D00(sh3_t *c)
{
	LOCALS;
	goto L_0C090D00;
L_0C090320: BLKS(0x0C090320u);
	W8(r10, r1); UPD(0x0C090322u, 1);  /* 0C090320 mov.b Rm,@Rn */
	r13 = 0xFFFFEC2Eu; UPD(0x0C090324u, 1);  /* 0C090322 mov.w @(disp,pc),Rn */
	IF(0x0C090324u); { u32 tv_ = (r13 + 0x0C090328u); u32 t_ = PHYS(tv_); r14 += 0x40u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C090324 braf Rn */
L_0C090D00: BLKS(0x0C090D00u);
	r10 = 0xC0A0540u; UPD(0x0C090D02u, 1);  /* 0C090D00 mov.l @(disp,pc),Rn */
	IF(0x0C090D02u); { u32 t_ = r10; PR = 0x0C090D06u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0540, 0x0C0A0540u, 0x0C090D06u); }  /* 0C090D02 jsr @Rn */
L_0C090D06: BLKS(0x0C090D06u);
	IF(0x0C090D06u); T = (s32)r0 >= 0;  /* 0C090D06 cmp/pz Rn */
	{ u32 c_ = T; r8 = R32(r14); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C090D14u, 4); goto L_0C090D14; } UPD(0x0C090D0Cu, 1); goto L_0C090D0C; }  /* 0C090D08 bt/s */
L_0C090D0C: BLKS(0x0C090D0Cu);
	r4 = 0xFFFFE590u; UPD(0x0C090D0Eu, 1);  /* 0C090D0C mov.w @(disp,pc),Rn */
	IF(0x0C090D0Eu); { u32 tv_ = (r4 + 0x0C090D12u); u32 t_ = PHYS(tv_); r4 = R32(r14); /* slot mov.l @Rm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C090D0E braf Rn */
L_0C090D14: BLKS(0x0C090D14u);
	r6 = 0xB4u; UPD(0x0C090D16u, 1);  /* 0C090D14 mov.w @(disp,pc),Rn */
	IF(0x0C090D16u); MACL = r8 * r6;  /* 0C090D16 mul.l Rm,Rn */
	r11 = 0xC26CD40u; UPD(0x0C090D1Au, 3);  /* 0C090D18 mov.l @(disp,pc),Rn */
	IF(0x0C090D1Au); r8 = MACL;  /* 0C090D1A sts macl,Rn */
	r8 += r11;  /* 0C090D1C add Rm,Rn */
	IF(0x0C090D1Eu); MACL = r0 * r6;  /* 0C090D1E mul.l Rm,Rn */
	r12 = R32(r8); UPD(0x0C090D22u, 5);  /* 0C090D20 mov.l @Rm,Rn */
	r2 = 0xECFFFEFFu; UPD(0x0C090D24u, 1);  /* 0C090D22 mov.l @(disp,pc),Rn */
	IF(0x0C090D24u); r7 = MACL;  /* 0C090D24 sts macl,Rn */
	r12 &= r2;  /* 0C090D26 and Rm,Rn */
	W32(r8, r12); UPD(0x0C090D2Au, 3);  /* 0C090D28 mov.l Rm,@Rn */
	r7 += r11;  /* 0C090D2A add Rm,Rn */
	r3 = R32(r7); UPD(0x0C090D2Eu, 2);  /* 0C090D2C mov.l @Rm,Rn */
	r1 = 0x13000100u; UPD(0x0C090D30u, 1);  /* 0C090D2E mov.l @(disp,pc),Rn */
	r3 &= r1;  /* 0C090D30 and Rm,Rn */
	r12 |= r3;  /* 0C090D32 or Rm,Rn */
	W32(r8, r12); UPD(0x0C090D36u, 3);  /* 0C090D34 mov.l Rm,@Rn */
	r0 = 0xA8u; UPD(0x0C090D38u, 1);  /* 0C090D36 mov.w @(disp,pc),Rn */
	r12 = r8;  /* 0C090D38 mov Rm,Rn */
	r12 += r0;  /* 0C090D3A add Rm,Rn */
	r0 += r7;  /* 0C090D3C add Rm,Rn */
	r0 += 0x1u;  /* 0C090D3E add #imm,Rn */
	r13 = (u32)(s32)(s8)R8(r0); UPD(0x0C090D42u, 5);  /* 0C090D40 mov.b @Rm,Rn */
	r12 += 0x1u;  /* 0C090D42 add #imm,Rn */
	r10 = 0xAFu; UPD(0x0C090D46u, 2);  /* 0C090D44 mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C090D46 mov Rm,Rn */
	IF(0x0C090D48u); r9 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C090D4Au, 2);  /* 0C090D48 mov.b @(r0,Rm),Rn */
	r10 = 0x9Fu; UPD(0x0C090D4Cu, 1);  /* 0C090D4A mov.w @(disp,pc),Rn */
	r13 += r9;  /* 0C090D4C add Rm,Rn */
	r5 = R32(r7 + 0x24u); UPD(0x0C090D50u, 2);  /* 0C090D4E mov.l @(disp,Rm),Rn */
	r10 += r8;  /* 0C090D50 add Rm,Rn */
	r6 = R32(r7 + 0x28u); UPD(0x0C090D54u, 2);  /* 0C090D52 mov.l @(disp,Rm),Rn */
	r11 = R32(r8 + 0x2Cu); UPD(0x0C090D56u, 1);  /* 0C090D54 mov.l @(disp,Rm),Rn */
	r4 = R32(r8 + 0x30u); UPD(0x0C090D58u, 1);  /* 0C090D56 mov.l @(disp,Rm),Rn */
	r5 += r11;  /* 0C090D58 add Rm,Rn */
	r3 = R32(r7 + 0x38u); UPD(0x0C090D5Cu, 2);  /* 0C090D5A mov.l @(disp,Rm),Rn */
	r6 += r4;  /* 0C090D5C add Rm,Rn */
	r9 = (u32)(s32)(s8)R8(r10); UPD(0x0C090D60u, 2);  /* 0C090D5E mov.b @Rm,Rn */
	W32(r8 + 0x24u, r5); UPD(0x0C090D62u, 1);  /* 0C090D60 mov.l Rm,@(disp,Rn) */
	r0 = r9 & 0xFF;  /* 0C090D62 extu.b Rm,Rn */
	W32(r8 + 0x28u, r6); UPD(0x0C090D66u, 2);  /* 0C090D64 mov.l Rm,@(disp,Rn) */
	T = r0 == 0x1u;  /* 0C090D66 cmp/eq #imm,r0 */
	W8(r12, r13); UPD(0x0C090D6Au, 2);  /* 0C090D68 mov.b Rm,@Rn */
	{ u32 c_ = !T; W32(r8 + 0x38u, r3); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C090D72u, 3); goto L_0C090D72; } UPD(0x0C090D6Eu, 1); goto L_0C090D6E; }  /* 0C090D6A bf/s */
L_0C090D6E: BLKS(0x0C090D6Eu);
	{ IF(0x0C090D70u); T = (s32)r4 >= 0; /* slot cmp/pz Rn */ UPD(0x0C090E90u, 3); goto L_0C090E90; }  /* 0C090D6E bra */
L_0C090D72: BLKS(0x0C090D72u);
	r11 = 0x1u;  /* 0C090D72 mov #imm,Rn */
	T = (s32)r0 > (s32)r11;  /* 0C090D74 cmp/gt Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x2u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C090DA0u, 5); goto L_0C090DA0; } goto L_0C090D7A; }  /* 0C090D76 bt/s */
L_0C090D7A: BLKS(0x0C090D7Au);
	T = (r0 & r0) == 0;  /* 0C090D7A tst Rm,Rn */
	if (!T) { UPD(0x0C090E3Eu, 5); goto L_0C090E3E; }  /* 0C090D7C bf */
L_0C090D7E: BLKS(0x0C090D7Eu);
	r13 = 0xA0u; UPD(0x0C090D80u, 1);  /* 0C090D7E mov.w @(disp,pc),Rn */
	r7 += r13;  /* 0C090D80 add Rm,Rn */
	r8 += r13;  /* 0C090D82 add Rm,Rn */
	r7 += 0x1u;  /* 0C090D84 add #imm,Rn */
	r8 += 0x1u;  /* 0C090D86 add #imm,Rn */
	r5 = (u32)(s32)(s8)R8(r7); UPD(0x0C090D8Au, 5);  /* 0C090D88 mov.b @Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r8); UPD(0x0C090D8Cu, 1);  /* 0C090D8A mov.b @Rm,Rn */
	T = (r5 & r4) == 0;  /* 0C090D8C tst Rm,Rn */
	if (T) { UPD(0x0C090E3Eu, 4); goto L_0C090E3E; }  /* 0C090D8E bt */
L_0C090D90: BLKS(0x0C090D90u);
	r1 = r9;  /* 0C090D90 mov Rm,Rn */
	{ r1 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C090320u, 4); goto L_0C090320; }  /* 0C090D92 bra */
L_0C090DA0: BLKS(0x0C090DA0u);
	if (!T) { UPD(0x0C090E3Eu, 3); goto L_0C090E3E; }  /* 0C090DA0 bf */
L_0C090DA2: BLKS(0x0C090DA2u);
	r0 = r8;  /* 0C090DA2 mov Rm,Rn */
	r10 = 0xA5u; UPD(0x0C090DA6u, 2);  /* 0C090DA4 mov.w @(disp,pc),Rn */
	IF(0x0C090DA6u); r9 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C090DA8u, 1);  /* 0C090DA6 mov.b @(r0,Rm),Rn */
	T = (r9 & r9) == 0;  /* 0C090DA8 tst Rm,Rn */
	if (T) { UPD(0x0C090E3Eu, 4); goto L_0C090E3E; }  /* 0C090DAA bt */
L_0C090DAC: BLKS(0x0C090DACu);
	r0 = R32(r8 + 0xCu); UPD(0x0C090DAEu, 1);  /* 0C090DAC mov.l @(disp,Rm),Rn */
	T = (r0 & r0) == 0;  /* 0C090DAE tst Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x6u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C090E30u, 4); goto L_0C090E30; } goto L_0C090DB4; }  /* 0C090DB0 bt/s */
L_0C090DB4: BLKS(0x0C090DB4u);
	{ u32 c_ = T; r7 = R32(r14); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C090DE0u, 4); goto L_0C090DE0; } UPD(0x0C090DB8u, 1); goto L_0C090DB8; }  /* 0C090DB4 bt/s */
L_0C090DB8: BLKS(0x0C090DB8u);
	r3 = 0xB4u; UPD(0x0C090DBAu, 1);  /* 0C090DB8 mov.w @(disp,pc),Rn */
	IF(0x0C090DBAu); MACL = r7 * r3;  /* 0C090DBA mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C090DBEu, 3);  /* 0C090DBC mov.l @(disp,pc),Rn */
	IF(0x0C090DBEu); r3 = MACL;  /* 0C090DBE sts macl,Rn */
	r8 = 0x99u; UPD(0x0C090DC2u, 2);  /* 0C090DC0 mov.w @(disp,pc),Rn */
	r3 += r0;  /* 0C090DC2 add Rm,Rn */
	r8 += r3;  /* 0C090DC4 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r8); UPD(0x0C090DC8u, 3);  /* 0C090DC6 mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C090DC8 add #imm,Rn */
	W8(r8, r0); UPD(0x0C090DCCu, 2);  /* 0C090DCA mov.b Rm,@Rn */
	r0 &= 0x1u;  /* 0C090DCC and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C090DCE tst Rm,Rn */
	if (!T) { UPD(0x0C090E3Eu, 5); goto L_0C090E3E; }  /* 0C090DD0 bf */
L_0C090DD2: BLKS(0x0C090DD2u);
	r0 = 0xFFFFE642u; UPD(0x0C090DD4u, 1);  /* 0C090DD2 mov.w @(disp,pc),Rn */
	IF(0x0C090DD4u); { u32 tv_ = (r0 + 0x0C090DD8u); u32 t_ = PHYS(tv_); IF(0x0C090DD6u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C090DD4 braf Rn */
L_0C090DE0: BLKS(0x0C090DE0u);
	r2 = 0x99u; UPD(0x0C090DE2u, 1);  /* 0C090DE0 mov.w @(disp,pc),Rn */
	r2 += r8;  /* 0C090DE2 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C090DE6u, 2);  /* 0C090DE4 mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C090DE6 add #imm,Rn */
	W8(r2, r0); UPD(0x0C090DEAu, 2);  /* 0C090DE8 mov.b Rm,@Rn */
	r0 &= 0x1u;  /* 0C090DEA and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C090DEC tst Rm,Rn */
	if (!T) { UPD(0x0C090E3Eu, 5); goto L_0C090E3E; }  /* 0C090DEE bf */
L_0C090DF0: BLKS(0x0C090DF0u);
	r3 = R32(r8 + 0x8u); UPD(0x0C090DF2u, 1);  /* 0C090DF0 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C090DF2 add #imm,Rn */
	r0 = 0xC1C2D18u; UPD(0x0C090DF6u, 2);  /* 0C090DF4 mov.l @(disp,pc),Rn */
	IF(0x0C090DF6u); r3 <<= 2;  /* 0C090DF6 shll2 Rn */
	r3 += r0;  /* 0C090DF8 add Rm,Rn */
	r0 = 0xFFFFFF30u; UPD(0x0C090DFCu, 3);  /* 0C090DFA mov.w @(disp,pc),Rn */
	r4 = 0x1u;  /* 0C090DFC mov #imm,Rn */
	r7 = 0xFFF30000u; UPD(0x0C090E00u, 2);  /* 0C090DFE mov.l @(disp,pc),Rn */
	r13 = 0xC0A8690u; UPD(0x0C090E02u, 1);  /* 0C090E00 mov.l @(disp,pc),Rn */
	r5 += r7;  /* 0C090E02 add Rm,Rn */
	IF(0x0C090E04u); r12 = R32(r0 + r3); UPD(0x0C090E06u, 2);  /* 0C090E04 mov.l @(r0,Rm),Rn */
	r10 = 0x30000u; UPD(0x0C090E08u, 1);  /* 0C090E06 mov.l @(disp,pc),Rn */
	r6 += r12;  /* 0C090E08 add Rm,Rn */
	r9 = 0xC177A52u; UPD(0x0C090E0Cu, 2);  /* 0C090E0A mov.l @(disp,pc),Rn */
	W32(r15, r10); UPD(0x0C090E0Eu, 1);  /* 0C090E0C mov.l Rm,@Rn */
	r7 = 0x100u; UPD(0x0C090E10u, 1);  /* 0C090E0E mov.w @(disp,pc),Rn */
	IF(0x0C090E10u); { u32 t_ = r13; PR = 0x0C090E14u; W32(r15 + 0x4u, r9); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A8690, 0x0C0A8690u, 0x0C090E14u); }  /* 0C090E10 jsr @Rn */
L_0C090E14: BLKS(0x0C090E14u);
	r6 = R32(r8 + 0xCu); UPD(0x0C090E16u, 1);  /* 0C090E14 mov.l @(disp,Rm),Rn */
	r4 = 0xFFFFFFFFu;  /* 0C090E16 mov #imm,Rn */
	r0 = 0x88u; UPD(0x0C090E1Au, 2);  /* 0C090E18 mov.w @(disp,pc),Rn */
	r6 += 0xFFFFFFFFu;  /* 0C090E1A add #imm,Rn */
	IF(0x0C090E1Cu); W16(r0 + r8, r4); UPD(0x0C090E1Eu, 2);  /* 0C090E1C mov.w Rm,@(r0,Rn) */
	r15 += 0x8u;  /* 0C090E1E add #imm,Rn */
	r4 = 0xFFFFE5FEu; UPD(0x0C090E22u, 2);  /* 0C090E20 mov.w @(disp,pc),Rn */
	IF(0x0C090E22u); { u32 tv_ = (r4 + 0x0C090E26u); u32 t_ = PHYS(tv_); W32(r8 + 0xCu, r6); /* slot mov.l Rm,@(disp,Rn) */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C090E22 braf Rn */
L_0C090E30: BLKS(0x0C090E30u);
	r12 = 0xC0A9E40u; UPD(0x0C090E32u, 1);  /* 0C090E30 mov.l @(disp,pc),Rn */
	r5 = 0x5Au;  /* 0C090E32 mov #imm,Rn */
	r4 = R32(r14); UPD(0x0C090E36u, 2);  /* 0C090E34 mov.l @Rm,Rn */
	IF(0x0C090E36u); { u32 t_ = r12; PR = 0x0C090E3Au; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C090E3Au); }  /* 0C090E36 jsr @Rn */
L_0C090E3A: BLKS(0x0C090E3Au);
	T = (r0 & r0) == 0;  /* 0C090E3A tst Rm,Rn */
	if (!T) { UPD(0x0C090E46u, 4); goto L_0C090E46; }  /* 0C090E3C bf */
L_0C090E3E: BLKS(0x0C090E3Eu);
	r13 = 0xFFFFE112u; UPD(0x0C090E40u, 1);  /* 0C090E3E mov.w @(disp,pc),Rn */
	IF(0x0C090E40u); { u32 tv_ = (r13 + 0x0C090E44u); u32 t_ = PHYS(tv_); r14 += 0x40u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C090E40 braf Rn */
L_0C090E46: BLKS(0x0C090E46u);
	r0 = 0x88u; UPD(0x0C090E48u, 1);  /* 0C090E46 mov.w @(disp,pc),Rn */
	r1 = R32(r8 + 0xCu); UPD(0x0C090E4Au, 1);  /* 0C090E48 mov.l @(disp,Rm),Rn */
	IF(0x0C090E4Au); W16(r0 + r8, r11); UPD(0x0C090E4Cu, 1);  /* 0C090E4A mov.w Rm,@(r0,Rn) */
	r4 = 0xFFFFE880u; UPD(0x0C090E4Eu, 1);  /* 0C090E4C mov.w @(disp,pc),Rn */
	IF(0x0C090E4Eu); { u32 tv_ = (r4 + 0x0C090E52u); u32 t_ = PHYS(tv_); r1 += 0x1u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C090E4E braf Rn */
L_0C090E90: BLKS(0x0C090E90u);
	if (!T) { UPD(0x0C090ED0u, 3); goto L_0C090ED0; }  /* 0C090E90 bf */
L_0C090E92: BLKS(0x0C090E92u);
	IF(0x0C090E92u); T = (s32)r4 > 0;  /* 0C090E92 cmp/pl Rn */
	if (!T) { UPD(0x0C090E9Cu, 4); goto L_0C090E9C; }  /* 0C090E94 bf */
L_0C090E96: BLKS(0x0C090E96u);
	r12 = 0x8000u; UPD(0x0C090E98u, 1);  /* 0C090E96 mov.l @(disp,pc),Rn */
	r12 += r4;  /* 0C090E98 add Rm,Rn */
	W32(r8 + 0x30u, r12); UPD(0x0C090E9Cu, 2);  /* 0C090E9A mov.l Rm,@(disp,Rn) */
L_0C090E9C: BLKS(0x0C090E9Cu);
	r2 = 0xFFFFE000u; UPD(0x0C090E9Eu, 1);  /* 0C090E9C mov.w @(disp,pc),Rn */
	r3 = 0xB0000u; UPD(0x0C090EA0u, 1);  /* 0C090E9E mov.l @(disp,pc),Rn */
	r2 += r11;  /* 0C090EA0 add Rm,Rn */
	T = r2 == r3;  /* 0C090EA2 cmp/eq Rm,Rn */
	{ u32 c_ = !T; W32(r8 + 0x2Cu, r2); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C090F52u, 5); goto L_0C090F52; } UPD(0x0C090EA8u, 1); goto L_0C090EA8; }  /* 0C090EA4 bf/s */
L_0C090EA8: BLKS(0x0C090EA8u);
	r13 = 0xA0u; UPD(0x0C090EAAu, 1);  /* 0C090EA8 mov.w @(disp,pc),Rn */
	r11 = r7;  /* 0C090EAA mov Rm,Rn */
	r11 += r13;  /* 0C090EAC add Rm,Rn */
	r13 += r8;  /* 0C090EAE add Rm,Rn */
	r13 += 0x1u;  /* 0C090EB0 add #imm,Rn */
	r11 += 0x1u;  /* 0C090EB2 add #imm,Rn */
	r5 = (u32)(s32)(s8)R8(r13); UPD(0x0C090EB6u, 6);  /* 0C090EB4 mov.b @Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r11); UPD(0x0C090EB8u, 1);  /* 0C090EB6 mov.b @Rm,Rn */
	r6 = ~r5;  /* 0C090EB8 not Rm,Rn */
	r7 = R32(r8); UPD(0x0C090EBCu, 2);  /* 0C090EBA mov.l @Rm,Rn */
	r6 &= r4;  /* 0C090EBC and Rm,Rn */
	r1 = 0xFFFFBFFFu; UPD(0x0C090EC0u, 2);  /* 0C090EBE mov.w @(disp,pc),Rn */
	r7 &= r1;  /* 0C090EC0 and Rm,Rn */
	W8(r11, r6); UPD(0x0C090EC4u, 2);  /* 0C090EC2 mov.b Rm,@Rn */
	{ W32(r8, r7); /* slot mov.l Rm,@Rn */ UPD(0x0C090D90u, 3); goto L_0C090D90; }  /* 0C090EC4 bra */
L_0C090ED0: BLKS(0x0C090ED0u);
	r0 = 0xFFFF8000u; UPD(0x0C090ED2u, 1);  /* 0C090ED0 mov.w @(disp,pc),Rn */
	r0 += r4;  /* 0C090ED2 add Rm,Rn */
	W32(r8 + 0x30u, r0); UPD(0x0C090ED6u, 2);  /* 0C090ED4 mov.l Rm,@(disp,Rn) */
	{ r4 = r0; /* slot mov Rm,Rn */ UPD(0x0C090E92u, 3); goto L_0C090E92; }  /* 0C090ED6 bra */
L_0C090F52: BLKS(0x0C090F52u);
	r13 = 0xFFFFDFFEu; UPD(0x0C090F54u, 1);  /* 0C090F52 mov.w @(disp,pc),Rn */
	IF(0x0C090F54u); { u32 tv_ = (r13 + 0x0C090F58u); u32 t_ = PHYS(tv_); r14 += 0x40u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C090F54 braf Rn */
}

void f_0C090EE0(sh3_t *c)
{
	LOCALS;
L_0C090EE0: BLKS(0x0C090EE0u);
	r8 = 0xC0A0540u; UPD(0x0C090EE2u, 1);  /* 0C090EE0 mov.l @(disp,pc),Rn */
	IF(0x0C090EE2u); { u32 t_ = r8; PR = 0x0C090EE6u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0540, 0x0C0A0540u, 0x0C090EE6u); }  /* 0C090EE2 jsr @Rn */
L_0C090EE6: BLKS(0x0C090EE6u);
	IF(0x0C090EE6u); T = (s32)r0 >= 0;  /* 0C090EE6 cmp/pz Rn */
	{ u32 c_ = T; r6 = R32(r14); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C090EF4u, 4); goto L_0C090EF4; } UPD(0x0C090EECu, 1); goto L_0C090EEC; }  /* 0C090EE8 bt/s */
L_0C090EEC: BLKS(0x0C090EECu);
	r4 = 0xFFFFE3B0u; UPD(0x0C090EEEu, 1);  /* 0C090EEC mov.w @(disp,pc),Rn */
	IF(0x0C090EEEu); { u32 tv_ = (r4 + 0x0C090EF2u); u32 t_ = PHYS(tv_); r4 = R32(r14); /* slot mov.l @Rm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C090EEE braf Rn */
L_0C090EF4: BLKS(0x0C090EF4u);
	r11 = 0xB4u; UPD(0x0C090EF6u, 1);  /* 0C090EF4 mov.w @(disp,pc),Rn */
	IF(0x0C090EF6u); MACL = r6 * r11;  /* 0C090EF6 mul.l Rm,Rn */
	r10 = 0xC26CD40u; UPD(0x0C090EFAu, 3);  /* 0C090EF8 mov.l @(disp,pc),Rn */
	IF(0x0C090EFAu); r6 = MACL;  /* 0C090EFA sts macl,Rn */
	IF(0x0C090EFCu); MACL = r0 * r11;  /* 0C090EFC mul.l Rm,Rn */
	r6 += r10;  /* 0C090EFE add Rm,Rn */
	r7 = 0xECFFBEFFu; UPD(0x0C090F02u, 5);  /* 0C090F00 mov.l @(disp,pc),Rn */
	IF(0x0C090F02u); r11 = MACL;  /* 0C090F02 sts macl,Rn */
	r0 = R32(r6); UPD(0x0C090F06u, 2);  /* 0C090F04 mov.l @Rm,Rn */
	r11 += r10;  /* 0C090F06 add Rm,Rn */
	r0 &= r7;  /* 0C090F08 and Rm,Rn */
	W32(r6, r0); UPD(0x0C090F0Cu, 3);  /* 0C090F0A mov.l Rm,@Rn */
	r4 = R32(r11 + 0x24u); UPD(0x0C090F0Eu, 1);  /* 0C090F0C mov.l @(disp,Rm),Rn */
	r13 = R32(r6 + 0x2Cu); UPD(0x0C090F10u, 1);  /* 0C090F0E mov.l @(disp,Rm),Rn */
	r3 = R32(r11); UPD(0x0C090F12u, 1);  /* 0C090F10 mov.l @Rm,Rn */
	r4 += r13;  /* 0C090F12 add Rm,Rn */
	r1 = 0x13004100u; UPD(0x0C090F16u, 2);  /* 0C090F14 mov.l @(disp,pc),Rn */
	W32(r6 + 0x24u, r4); UPD(0x0C090F18u, 1);  /* 0C090F16 mov.l Rm,@(disp,Rn) */
	r3 &= r1;  /* 0C090F18 and Rm,Rn */
	r12 = 0xA8u; UPD(0x0C090F1Cu, 2);  /* 0C090F1A mov.w @(disp,pc),Rn */
	r0 |= r3;  /* 0C090F1C or Rm,Rn */
	r4 = r6;  /* 0C090F1E mov Rm,Rn */
	W32(r6, r0); UPD(0x0C090F22u, 3);  /* 0C090F20 mov.l Rm,@Rn */
	r4 += r12;  /* 0C090F22 add Rm,Rn */
	r8 = R32(r11 + 0x28u); UPD(0x0C090F26u, 2);  /* 0C090F24 mov.l @(disp,Rm),Rn */
	r12 += r11;  /* 0C090F26 add Rm,Rn */
	r5 = R32(r6 + 0x30u); UPD(0x0C090F2Au, 2);  /* 0C090F28 mov.l @(disp,Rm),Rn */
	r12 += 0x1u;  /* 0C090F2A add #imm,Rn */
	r10 = 0xAFu; UPD(0x0C090F2Eu, 2);  /* 0C090F2C mov.w @(disp,pc),Rn */
	r0 = r6;  /* 0C090F2E mov Rm,Rn */
	r8 += r5;  /* 0C090F30 add Rm,Rn */
	r13 = (u32)(s32)(s8)R8(r12); UPD(0x0C090F34u, 3);  /* 0C090F32 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C090F34 add #imm,Rn */
	IF(0x0C090F36u); r9 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C090F38u, 2);  /* 0C090F36 mov.b @(r0,Rm),Rn */
	r2 = R32(r11 + 0x38u); UPD(0x0C090F3Au, 1);  /* 0C090F38 mov.l @(disp,Rm),Rn */
	r13 += r9;  /* 0C090F3A add Rm,Rn */
	r7 = R32(r11); UPD(0x0C090F3Eu, 2);  /* 0C090F3C mov.l @Rm,Rn */
	r5 = 0x4000u; UPD(0x0C090F40u, 1);  /* 0C090F3E mov.w @(disp,pc),Rn */
	W32(r6 + 0x28u, r8); UPD(0x0C090F42u, 1);  /* 0C090F40 mov.l Rm,@(disp,Rn) */
	r7 &= r5;  /* 0C090F42 and Rm,Rn */
	W8(r4, r13); UPD(0x0C090F46u, 2);  /* 0C090F44 mov.b Rm,@Rn */
	T = (r7 & r7) == 0;  /* 0C090F46 tst Rm,Rn */
	{ u32 c_ = T; W32(r6 + 0x38u, r2); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C090F60u, 4); goto L_0C090F60; } UPD(0x0C090F4Cu, 1); goto L_0C090F4C; }  /* 0C090F48 bt/s */
L_0C090F4C: BLKS(0x0C090F4Cu);
	r0 = 0x98u; UPD(0x0C090F4Eu, 1);  /* 0C090F4C mov.w @(disp,pc),Rn */
	r2 = 0x4u;  /* 0C090F4E mov #imm,Rn */
	IF(0x0C090F50u); W8(r0 + r6, r2); UPD(0x0C090F52u, 2);  /* 0C090F50 mov.b Rm,@(r0,Rn) */
	r13 = 0xFFFFDFFEu; UPD(0x0C090F54u, 1);  /* 0C090F52 mov.w @(disp,pc),Rn */
	IF(0x0C090F54u); { u32 tv_ = (r13 + 0x0C090F58u); u32 t_ = PHYS(tv_); r14 += 0x40u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C090F54 braf Rn */
L_0C090F60: BLKS(0x0C090F60u);
	r5 = 0x98u; UPD(0x0C090F62u, 1);  /* 0C090F60 mov.w @(disp,pc),Rn */
	r5 += r6;  /* 0C090F62 add Rm,Rn */
	r2 = r5;  /* 0C090F64 mov Rm,Rn */
	r2 += 0x1u;  /* 0C090F66 add #imm,Rn */
	r12 = (u32)(s32)(s8)R8(r2); UPD(0x0C090F6Au, 4);  /* 0C090F68 mov.b @Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r5); UPD(0x0C090F6Cu, 1);  /* 0C090F6A mov.b @Rm,Rn */
	r12 += 0x1u;  /* 0C090F6C add #imm,Rn */
	r9 = r12 & 0xFF;  /* 0C090F6E extu.b Rm,Rn */
	r3 = r4 & 0xFF;  /* 0C090F70 extu.b Rm,Rn */
	T = r9 > r3;  /* 0C090F72 cmp/hi Rm,Rn */
	{ u32 c_ = !T; W8(r2, r12); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C090F90u, 7); goto L_0C090F90; } UPD(0x0C090F78u, 1); goto L_0C090F78; }  /* 0C090F74 bf/s */
L_0C090F78: BLKS(0x0C090F78u);
	r0 = R32(r6 + 0xCu); UPD(0x0C090F7Au, 1);  /* 0C090F78 mov.l @(disp,Rm),Rn */
	r0 += 0x1u;  /* 0C090F7A add #imm,Rn */
	W8(r2, r7); UPD(0x0C090F7Eu, 2);  /* 0C090F7C mov.b Rm,@Rn */
	T = r0 == 0x8u;  /* 0C090F7E cmp/eq #imm,r0 */
	{ u32 c_ = !T; W32(r6 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C090F90u, 4); goto L_0C090F90; } UPD(0x0C090F84u, 1); goto L_0C090F84; }  /* 0C090F80 bf/s */
L_0C090F84: BLKS(0x0C090F84u);
	T = (r3 & r3) == 0;  /* 0C090F84 tst Rm,Rn */
	{ u32 c_ = T; W32(r6 + 0xCu, r7); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C090F90u, 4); goto L_0C090F90; } UPD(0x0C090F8Au, 1); goto L_0C090F8A; }  /* 0C090F86 bt/s */
L_0C090F8A: BLKS(0x0C090F8Au);
	r0 = r4;  /* 0C090F8A mov Rm,Rn */
	r0 += 0xFFFFFFFFu;  /* 0C090F8C add #imm,Rn */
	W8(r5, r0); UPD(0x0C090F90u, 3);  /* 0C090F8E mov.b Rm,@Rn */
L_0C090F90: BLKS(0x0C090F90u);
	r4 = 0xFFFFE490u; UPD(0x0C090F92u, 1);  /* 0C090F90 mov.w @(disp,pc),Rn */
	IF(0x0C090F92u); { u32 tv_ = (r4 + 0x0C090F96u); u32 t_ = PHYS(tv_); r4 = R32(r14); /* slot mov.l @Rm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C090F92 braf Rn */
}

void f_0C090FD0(sh3_t *c)
{
	LOCALS;
	goto L_0C090FD0;
L_0C090BE2: BLKS(0x0C090BE2u);
	r1 = R32(r8); UPD(0x0C090BE4u, 1);  /* 0C090BE2 mov.l @Rm,Rn */
	r10 = 0xFFFFBFFFu; UPD(0x0C090BE6u, 1);  /* 0C090BE4 mov.w @(disp,pc),Rn */
	r13 = 0xFFFFEC6Cu; UPD(0x0C090BE8u, 1);  /* 0C090BE6 mov.w @(disp,pc),Rn */
	IF(0x0C090BE8u); { u32 tv_ = (r13 + 0x0C090BECu); u32 t_ = PHYS(tv_); r1 &= r10; /* slot and Rm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C090BE8 braf Rn */
L_0C090FD0: BLKS(0x0C090FD0u);
	r8 = 0xC0A0540u; UPD(0x0C090FD2u, 1);  /* 0C090FD0 mov.l @(disp,pc),Rn */
	IF(0x0C090FD2u); { u32 t_ = r8; PR = 0x0C090FD6u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0540, 0x0C0A0540u, 0x0C090FD6u); }  /* 0C090FD2 jsr @Rn */
L_0C090FD6: BLKS(0x0C090FD6u);
	IF(0x0C090FD6u); T = (s32)r0 >= 0;  /* 0C090FD6 cmp/pz Rn */
	{ u32 c_ = !T; r9 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C090FEEu, 4); goto L_0C090FEE; } goto L_0C090FDC; }  /* 0C090FD8 bf/s */
L_0C090FDC: BLKS(0x0C090FDCu);
	r2 = 0xB4u; UPD(0x0C090FDEu, 2);  /* 0C090FDC mov.w @(disp,pc),Rn */
	IF(0x0C090FDEu); MACL = r0 * r2;  /* 0C090FDE mul.l Rm,Rn */
	r3 = 0xC26CD40u; UPD(0x0C090FE2u, 3);  /* 0C090FE0 mov.l @(disp,pc),Rn */
	IF(0x0C090FE2u); r7 = MACL;  /* 0C090FE2 sts macl,Rn */
	r7 += r3;  /* 0C090FE4 add Rm,Rn */
	r5 = R32(r7 + 0xCu); UPD(0x0C090FE8u, 3);  /* 0C090FE6 mov.l @(disp,Rm),Rn */
	T = (r5 & r5) == 0;  /* 0C090FE8 tst Rm,Rn */
	{ u32 c_ = T; r0 = R32(r14); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C090FF6u, 4); goto L_0C090FF6; } UPD(0x0C090FEEu, 1); goto L_0C090FEE; }  /* 0C090FEA bt/s */
L_0C090FEE: BLKS(0x0C090FEEu);
	r4 = 0xFFFFE2AEu; UPD(0x0C090FF0u, 1);  /* 0C090FEE mov.w @(disp,pc),Rn */
	IF(0x0C090FF0u); { u32 tv_ = (r4 + 0x0C090FF4u); u32 t_ = PHYS(tv_); r4 = R32(r14); /* slot mov.l @Rm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C090FF0 braf Rn */
L_0C090FF6: BLKS(0x0C090FF6u);
	IF(0x0C090FF6u); MACL = r0 * r2;  /* 0C090FF6 mul.l Rm,Rn */
	r4 = R32(r7 + 0x24u); UPD(0x0C090FFAu, 3);  /* 0C090FF8 mov.l @(disp,Rm),Rn */
	IF(0x0C090FFAu); r0 = MACL;  /* 0C090FFA sts macl,Rn */
	r0 += r3;  /* 0C090FFC add Rm,Rn */
	r13 = R32(r0 + 0x2Cu); UPD(0x0C091000u, 3);  /* 0C090FFE mov.l @(disp,Rm),Rn */
	r4 += r13;  /* 0C091000 add Rm,Rn */
	r12 = R32(r0); UPD(0x0C091004u, 2);  /* 0C091002 mov.l @Rm,Rn */
	W32(r0 + 0x24u, r4); UPD(0x0C091006u, 1);  /* 0C091004 mov.l Rm,@(disp,Rn) */
	r2 = 0xECFFFEFFu; UPD(0x0C091008u, 1);  /* 0C091006 mov.l @(disp,pc),Rn */
	r4 = r0;  /* 0C091008 mov Rm,Rn */
	r6 = 0xA8u; UPD(0x0C09100Cu, 2);  /* 0C09100A mov.w @(disp,pc),Rn */
	r12 &= r2;  /* 0C09100C and Rm,Rn */
	W32(r0, r12); UPD(0x0C091010u, 2);  /* 0C09100E mov.l Rm,@Rn */
	r4 += r6;  /* 0C091010 add Rm,Rn */
	r5 = R32(r7 + 0x28u); UPD(0x0C091014u, 2);  /* 0C091012 mov.l @(disp,Rm),Rn */
	r6 += r7;  /* 0C091014 add Rm,Rn */
	r3 = R32(r0 + 0x30u); UPD(0x0C091018u, 2);  /* 0C091016 mov.l @(disp,Rm),Rn */
	r6 += 0x1u;  /* 0C091018 add #imm,Rn */
	r11 = 0xAFu; UPD(0x0C09101Cu, 2);  /* 0C09101A mov.w @(disp,pc),Rn */
	r5 += r3;  /* 0C09101C add Rm,Rn */
	r8 = R32(r7); UPD(0x0C091020u, 2);  /* 0C09101E mov.l @Rm,Rn */
	r4 += 0x1u;  /* 0C091020 add #imm,Rn */
	r1 = 0x13000100u; UPD(0x0C091024u, 2);  /* 0C091022 mov.l @(disp,pc),Rn */
	r13 = (u32)(s32)(s8)R8(r6); UPD(0x0C091026u, 1);  /* 0C091024 mov.b @Rm,Rn */
	r8 &= r1;  /* 0C091026 and Rm,Rn */
	IF(0x0C091028u); r10 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C09102Au, 2);  /* 0C091028 mov.b @(r0,Rm),Rn */
	r12 |= r8;  /* 0C09102A or Rm,Rn */
	r3 = R32(r7 + 0x38u); UPD(0x0C09102Eu, 2);  /* 0C09102C mov.l @(disp,Rm),Rn */
	r13 += r10;  /* 0C09102E add Rm,Rn */
	r1 = R32(r0 + 0xCu); UPD(0x0C091032u, 2);  /* 0C091030 mov.l @(disp,Rm),Rn */
	W32(r0 + 0x28u, r5); UPD(0x0C091034u, 1);  /* 0C091032 mov.l Rm,@(disp,Rn) */
	T = (r1 & r1) == 0;  /* 0C091034 tst Rm,Rn */
	W32(r0, r12); UPD(0x0C091038u, 2);  /* 0C091036 mov.l Rm,@Rn */
	W8(r4, r13); UPD(0x0C09103Au, 1);  /* 0C091038 mov.b Rm,@Rn */
	{ u32 c_ = T; W32(r0 + 0x38u, r3); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0910A0u, 3); goto L_0C0910A0; } UPD(0x0C09103Eu, 1); goto L_0C09103E; }  /* 0C09103A bt/s */
L_0C09103E: BLKS(0x0C09103Eu);
	r0 = r1;  /* 0C09103E mov Rm,Rn */
	T = r0 == 0x10u;  /* 0C091040 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C091104u, 5); goto L_0C091104; }  /* 0C091042 bt */
L_0C091044: BLKS(0x0C091044u);
	r8 = R32(r14); UPD(0x0C091046u, 1);  /* 0C091044 mov.l @Rm,Rn */
	r11 = 0xB4u; UPD(0x0C091048u, 1);  /* 0C091046 mov.w @(disp,pc),Rn */
	IF(0x0C091048u); MACL = r8 * r11;  /* 0C091048 mul.l Rm,Rn */
	r10 = 0xC26CD40u; UPD(0x0C09104Cu, 3);  /* 0C09104A mov.l @(disp,pc),Rn */
	IF(0x0C09104Cu); r8 = MACL;  /* 0C09104C sts macl,Rn */
	r2 = 0x99u; UPD(0x0C091050u, 2);  /* 0C09104E mov.w @(disp,pc),Rn */
	r8 += r10;  /* 0C091050 add Rm,Rn */
	r2 += r8;  /* 0C091052 add Rm,Rn */
	r12 = (u32)(s32)(s8)R8(r2); UPD(0x0C091056u, 3);  /* 0C091054 mov.b @Rm,Rn */
	r12 += 0x1u;  /* 0C091056 add #imm,Rn */
	r0 = r12 & 0xFF;  /* 0C091058 extu.b Rm,Rn */
	T = r0 == 0x3u;  /* 0C09105A cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r2, r12); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C091104u, 6); goto L_0C091104; } UPD(0x0C091060u, 1); goto L_0C091060; }  /* 0C09105C bf/s */
L_0C091060: BLKS(0x0C091060u);
	r3 = 0x0u;  /* 0C091060 mov #imm,Rn */
	W8(r2, r3); UPD(0x0C091064u, 2);  /* 0C091062 mov.b Rm,@Rn */
	r5 = R32(r8 + 0xCu); UPD(0x0C091066u, 1);  /* 0C091064 mov.l @(disp,Rm),Rn */
	r2 = 0xC0A0380u; UPD(0x0C091068u, 1);  /* 0C091066 mov.l @(disp,pc),Rn */
	r5 += 0x1u;  /* 0C091068 add #imm,Rn */
	W32(r8 + 0xCu, r5); UPD(0x0C09106Cu, 2);  /* 0C09106A mov.l Rm,@(disp,Rn) */
	IF(0x0C09106Cu); { u32 t_ = r2; PR = 0x0C091070u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C091070u); }  /* 0C09106C jsr @Rn */
L_0C091070: BLKS(0x0C091070u);
	r0 = R32(r8 + 0xCu); UPD(0x0C091072u, 1);  /* 0C091070 mov.l @(disp,Rm),Rn */
	T = r0 == 0x10u;  /* 0C091072 cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C091104u, 4); goto L_0C091104; }  /* 0C091074 bf */
L_0C091076: BLKS(0x0C091076u);
	IF(0x0C091076u); MACL = r9 * r11;  /* 0C091076 mul.l Rm,Rn */
	r9 = 0xA0u; UPD(0x0C09107Au, 3);  /* 0C091078 mov.w @(disp,pc),Rn */
	IF(0x0C09107Au); r4 = MACL;  /* 0C09107A sts macl,Rn */
	r4 += r10;  /* 0C09107C add Rm,Rn */
	r4 += r9;  /* 0C09107E add Rm,Rn */
	r9 += r8;  /* 0C091080 add Rm,Rn */
	r9 += 0x1u;  /* 0C091082 add #imm,Rn */
	r4 += 0x1u;  /* 0C091084 add #imm,Rn */
	r7 = (u32)(s32)(s8)R8(r9); UPD(0x0C091088u, 7);  /* 0C091086 mov.b @Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r4); UPD(0x0C09108Au, 1);  /* 0C091088 mov.b @Rm,Rn */
	r13 = ~r7;  /* 0C09108A not Rm,Rn */
	r13 &= r0;  /* 0C09108C and Rm,Rn */
	{ W8(r4, r13); /* slot mov.b Rm,@Rn */ UPD(0x0C090BE2u, 5); goto L_0C090BE2; }  /* 0C09108E bra */
L_0C0910A0: BLKS(0x0C0910A0u);
	r10 = 0xA0u; UPD(0x0C0910A2u, 1);  /* 0C0910A0 mov.w @(disp,pc),Rn */
	r7 += r10;  /* 0C0910A2 add Rm,Rn */
	r7 += 0x1u;  /* 0C0910A4 add #imm,Rn */
	r9 = (u32)(s32)(s8)R8(r7); UPD(0x0C0910A8u, 3);  /* 0C0910A6 mov.b @Rm,Rn */
	r10 += r0;  /* 0C0910A8 add Rm,Rn */
	r10 += 0x1u;  /* 0C0910AA add #imm,Rn */
	r7 = (u32)(s32)(s8)R8(r10); UPD(0x0C0910AEu, 3);  /* 0C0910AC mov.b @Rm,Rn */
	T = (r9 & r7) == 0;  /* 0C0910AE tst Rm,Rn */
	if (T) { UPD(0x0C091104u, 4); goto L_0C091104; }  /* 0C0910B0 bt */
L_0C0910B2: BLKS(0x0C0910B2u);
	r6 = 0x1u;  /* 0C0910B2 mov #imm,Rn */
	r11 = 0xC0A0380u; UPD(0x0C0910B6u, 2);  /* 0C0910B4 mov.l @(disp,pc),Rn */
	r4 = R32(r14); UPD(0x0C0910B8u, 1);  /* 0C0910B6 mov.l @Rm,Rn */
	IF(0x0C0910B8u); { u32 t_ = r11; PR = 0x0C0910BCu; W32(r0 + 0xCu, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C0910BCu); }  /* 0C0910B8 jsr @Rn */
L_0C0910BC: BLKS(0x0C0910BCu);
	r1 = 0xFFFFE66Eu; UPD(0x0C0910BEu, 1);  /* 0C0910BC mov.w @(disp,pc),Rn */
	IF(0x0C0910BEu); { u32 tv_ = (r1 + 0x0C0910C2u); u32 t_ = PHYS(tv_); r4 = 0x72u; /* slot mov #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0910BE braf Rn */
L_0C091104: BLKS(0x0C091104u);
	r13 = 0xFFFFDE4Cu; UPD(0x0C091106u, 1);  /* 0C091104 mov.w @(disp,pc),Rn */
	IF(0x0C091106u); { u32 tv_ = (r13 + 0x0C09110Au); u32 t_ = PHYS(tv_); r14 += 0x40u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C091106 braf Rn */
}

void f_0C0910D0(sh3_t *c)
{
	LOCALS;
L_0C0910D0: BLKS(0x0C0910D0u);
	r11 = 0xC0A0540u; UPD(0x0C0910D2u, 1);  /* 0C0910D0 mov.l @(disp,pc),Rn */
	IF(0x0C0910D2u); { u32 t_ = r11; PR = 0x0C0910D6u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0540, 0x0C0A0540u, 0x0C0910D6u); }  /* 0C0910D2 jsr @Rn */
L_0C0910D6: BLKS(0x0C0910D6u);
	IF(0x0C0910D6u); T = (s32)r0 >= 0;  /* 0C0910D6 cmp/pz Rn */
	if (T) { UPD(0x0C0910E2u, 4); goto L_0C0910E2; }  /* 0C0910D8 bt */
L_0C0910DA: BLKS(0x0C0910DAu);
	r4 = 0xFFFFE1C2u; UPD(0x0C0910DCu, 1);  /* 0C0910DA mov.w @(disp,pc),Rn */
	IF(0x0C0910DCu); { u32 tv_ = (r4 + 0x0C0910E0u); u32 t_ = PHYS(tv_); r4 = R32(r14); /* slot mov.l @Rm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0910DC braf Rn */
L_0C0910E2: BLKS(0x0C0910E2u);
	r1 = 0xB4u; UPD(0x0C0910E4u, 1);  /* 0C0910E2 mov.w @(disp,pc),Rn */
	IF(0x0C0910E4u); MACL = r0 * r1;  /* 0C0910E4 mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C0910E8u, 3);  /* 0C0910E6 mov.l @(disp,pc),Rn */
	IF(0x0C0910E8u); r9 = MACL;  /* 0C0910E8 sts macl,Rn */
	r9 += r2;  /* 0C0910EA add Rm,Rn */
	r0 = R32(r9 + 0xCu); UPD(0x0C0910EEu, 3);  /* 0C0910EC mov.l @(disp,Rm),Rn */
	T = r0 == 0x10u;  /* 0C0910EE cmp/eq #imm,r0 */
	{ u32 c_ = T; r12 = R32(r14); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C091140u, 4); goto L_0C091140; } UPD(0x0C0910F4u, 1); goto L_0C0910F4; }  /* 0C0910F0 bt/s */
L_0C0910F4: BLKS(0x0C0910F4u);
	IF(0x0C0910F4u); MACL = r12 * r1;  /* 0C0910F4 mul.l Rm,Rn */
	r6 = 0x2000000u; UPD(0x0C0910F8u, 3);  /* 0C0910F6 mov.l @(disp,pc),Rn */
	IF(0x0C0910F8u); r0 = MACL;  /* 0C0910F8 sts macl,Rn */
	r0 += r2;  /* 0C0910FA add Rm,Rn */
	W32(r0 + 0x24u, r6); UPD(0x0C0910FEu, 3);  /* 0C0910FC mov.l Rm,@(disp,Rn) */
	r2 = 0x86u; UPD(0x0C091100u, 1);  /* 0C0910FE mov.w @(disp,pc),Rn */
	r1 = 0x100u; UPD(0x0C091102u, 1);  /* 0C091100 mov.w @(disp,pc),Rn */
	IF(0x0C091102u); W16(r0 + r2, r1); UPD(0x0C091104u, 1);  /* 0C091102 mov.w Rm,@(r0,Rn) */
L_0C091104: BLKS(0x0C091104u);
	r13 = 0xFFFFDE4Cu; UPD(0x0C091106u, 1);  /* 0C091104 mov.w @(disp,pc),Rn */
	IF(0x0C091106u); { u32 tv_ = (r13 + 0x0C09110Au); u32 t_ = PHYS(tv_); r14 += 0x40u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C091106 braf Rn */
L_0C091140: BLKS(0x0C091140u);
	r10 = R32(r14); UPD(0x0C091142u, 1);  /* 0C091140 mov.l @Rm,Rn */
	IF(0x0C091142u); MACL = r10 * r1;  /* 0C091142 mul.l Rm,Rn */
	r4 = R32(r9 + 0x24u); UPD(0x0C091146u, 3);  /* 0C091144 mov.l @(disp,Rm),Rn */
	IF(0x0C091146u); r10 = MACL;  /* 0C091146 sts macl,Rn */
	r10 += r2;  /* 0C091148 add Rm,Rn */
	r3 = R32(r10 + 0x2Cu); UPD(0x0C09114Cu, 3);  /* 0C09114A mov.l @(disp,Rm),Rn */
	r4 += r3;  /* 0C09114C add Rm,Rn */
	W32(r10 + 0x24u, r4); UPD(0x0C091150u, 2);  /* 0C09114E mov.l Rm,@(disp,Rn) */
	r0 = 0xA8u; UPD(0x0C091152u, 1);  /* 0C091150 mov.w @(disp,pc),Rn */
	r4 = r10;  /* 0C091152 mov Rm,Rn */
	r4 += r0;  /* 0C091154 add Rm,Rn */
	r0 += r9;  /* 0C091156 add Rm,Rn */
	r0 += 0x1u;  /* 0C091158 add #imm,Rn */
	r6 = R32(r10); UPD(0x0C09115Cu, 5);  /* 0C09115A mov.l @Rm,Rn */
	r4 += 0x1u;  /* 0C09115C add #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r0); UPD(0x0C091160u, 2);  /* 0C09115E mov.b @Rm,Rn */
	r5 = 0xECFFFEFFu; UPD(0x0C091162u, 1);  /* 0C091160 mov.l @(disp,pc),Rn */
	r0 = r10;  /* 0C091162 mov Rm,Rn */
	r11 = 0xAFu; UPD(0x0C091166u, 2);  /* 0C091164 mov.w @(disp,pc),Rn */
	r6 &= r5;  /* 0C091166 and Rm,Rn */
	r8 = R32(r9 + 0x28u); UPD(0x0C09116Au, 2);  /* 0C091168 mov.l @(disp,Rm),Rn */
	r13 = R32(r10 + 0x30u); UPD(0x0C09116Cu, 1);  /* 0C09116A mov.l @(disp,Rm),Rn */
	W32(r10, r6); UPD(0x0C09116Eu, 1);  /* 0C09116C mov.l Rm,@Rn */
	r8 += r13;  /* 0C09116E add Rm,Rn */
	IF(0x0C091170u); r7 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C091172u, 2);  /* 0C091170 mov.b @(r0,Rm),Rn */
	r12 = R32(r9); UPD(0x0C091174u, 1);  /* 0C091172 mov.l @Rm,Rn */
	r3 += r7;  /* 0C091174 add Rm,Rn */
	r1 = 0x13000100u; UPD(0x0C091178u, 2);  /* 0C091176 mov.l @(disp,pc),Rn */
	W32(r10 + 0x28u, r8); UPD(0x0C09117Au, 1);  /* 0C091178 mov.l Rm,@(disp,Rn) */
	r12 &= r1;  /* 0C09117A and Rm,Rn */
	W8(r4, r3); UPD(0x0C09117Eu, 2);  /* 0C09117C mov.b Rm,@Rn */
	r6 |= r12;  /* 0C09117E or Rm,Rn */
	r13 = 0xC058130u; UPD(0x0C091182u, 2);  /* 0C091180 mov.l @(disp,pc),Rn */
	r2 = R32(r9 + 0x38u); UPD(0x0C091184u, 1);  /* 0C091182 mov.l @(disp,Rm),Rn */
	r8 = 0xC057430u; UPD(0x0C091186u, 1);  /* 0C091184 mov.l @(disp,pc),Rn */
	r4 = R32(r14); UPD(0x0C091188u, 1);  /* 0C091186 mov.l @Rm,Rn */
	W32(r10 + 0x38u, r2); UPD(0x0C09118Au, 1);  /* 0C091188 mov.l Rm,@(disp,Rn) */
	IF(0x0C09118Au); { u32 t_ = r13; PR = 0x0C09118Eu; W32(r10, r6); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C058130, 0x0C058130u, 0x0C09118Eu); }  /* 0C09118A jsr @Rn */
L_0C09118E: BLKS(0x0C09118Eu);
	r5 = 0x2u;  /* 0C09118E mov #imm,Rn */
	IF(0x0C091190u); { u32 t_ = r8; PR = 0x0C091194u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLD(t_, 0x0C091194u); }  /* 0C091190 jsr @Rn */
L_0C091194: BLKS(0x0C091194u);
	r8 = 0x86u; UPD(0x0C091196u, 1);  /* 0C091194 mov.w @(disp,pc),Rn */
	r5 = 0x7Fu;  /* 0C091196 mov #imm,Rn */
	r8 += r10;  /* 0C091198 add Rm,Rn */
	r2 = (u32)(s32)(s16)R16(r8); UPD(0x0C09119Cu, 3);  /* 0C09119A mov.w @Rm,Rn */
	T = (s32)r2 > (s32)r5;  /* 0C09119C cmp/gt Rm,Rn */
	if (T) { UPD(0x0C0911A6u, 4); goto L_0C0911A6; }  /* 0C09119E bt */
L_0C0911A0: BLKS(0x0C0911A0u);
	r7 = 0x80u; UPD(0x0C0911A2u, 1);  /* 0C0911A0 mov.w @(disp,pc),Rn */
	W16(r8, r7); UPD(0x0C0911A4u, 1);  /* 0C0911A2 mov.w Rm,@Rn */
	r2 = r7;  /* 0C0911A4 mov Rm,Rn */
	UPD(0x0C0911A6u, 1);
L_0C0911A6: BLKS(0x0C0911A6u);
	r7 = 0x180u; UPD(0x0C0911A8u, 1);  /* 0C0911A6 mov.w @(disp,pc),Rn */
	r11 = (u32)(s32)(s16)r2;  /* 0C0911A8 exts.w Rm,Rn */
	r3 = (u32)(s32)(s16)r7;  /* 0C0911AA exts.w Rm,Rn */
	T = (s32)r11 > (s32)r3;  /* 0C0911AC cmp/gt Rm,Rn */
	{ u32 c_ = !T; r6 = (u32)(s32)(s16)r2; /* slot exts.w Rm,Rn */ if (c_) { UPD(0x0C0911B8u, 6); goto L_0C0911B8; } goto L_0C0911B2; }  /* 0C0911AE bf/s */
L_0C0911B2: BLKS(0x0C0911B2u);
	W16(r8, r3); UPD(0x0C0911B4u, 2);  /* 0C0911B2 mov.w Rm,@Rn */
	r2 = r7;  /* 0C0911B4 mov Rm,Rn */
	r6 = (u32)(s32)(s16)r2;  /* 0C0911B6 exts.w Rm,Rn */
	UPD(0x0C0911B8u, 2);
L_0C0911B8: BLKS(0x0C0911B8u);
	r6 += 0xFFFFFF88u;  /* 0C0911B8 add #imm,Rn */
	r12 = 0xFFFFFFFCu;  /* 0C0911BA mov #imm,Rn */
	r0 = 0xC0A0380u; UPD(0x0C0911BEu, 3);  /* 0C0911BC mov.l @(disp,pc),Rn */
	IF(0x0C0911BEu); ARG0(0x46CCu); { s32 s_ = (s32)r12; if (s_ >= 0) r6 <<= (s_ & 31); else if ((s_ & 31) == 0) r6 = (u32)((s32)r6 >> 31); else r6 = (u32)((s32)r6 >> ((~s_ & 31) + 1)); }  /* 0C0911BE shad Rm,Rn */
	r11 = 0x9Cu; UPD(0x0C0911C2u, 2);  /* 0C0911C0 mov.w @(disp,pc),Rn */
	W32(r10 + 0xCu, r6); UPD(0x0C0911C4u, 1);  /* 0C0911C2 mov.l Rm,@(disp,Rn) */
	r11 += r10;  /* 0C0911C4 add Rm,Rn */
	IF(0x0C0911C6u); { u32 t_ = r0; PR = 0x0C0911CAu; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C0911CAu); }  /* 0C0911C6 jsr @Rn */
L_0C0911CA: BLKS(0x0C0911CAu);
	r2 = (u32)(s32)(s8)R8(r11); UPD(0x0C0911CCu, 1);  /* 0C0911CA mov.b @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C0911CC tst Rm,Rn */
	{ u32 c_ = T; r2 = r11; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C091230u, 4); goto L_0C091230; } goto L_0C0911D2; }  /* 0C0911CE bt/s */
L_0C0911D2: BLKS(0x0C0911D2u);
	r2 += 0x1u;  /* 0C0911D2 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C0911D6u, 3);  /* 0C0911D4 mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C0911D6 add #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C0911D8 extu.b Rm,Rn */
	T = r0 == 0x8u;  /* 0C0911DA cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r2, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C091104u, 6); goto L_0C091104; } UPD(0x0C0911E0u, 1); goto L_0C0911E0; }  /* 0C0911DC bf/s */
L_0C0911E0: BLKS(0x0C0911E0u);
	r5 = 0x0u;  /* 0C0911E0 mov #imm,Rn */
	r13 = 0xC058060u; UPD(0x0C0911E4u, 2);  /* 0C0911E2 mov.l @(disp,pc),Rn */
	W8(r2, r5); UPD(0x0C0911E6u, 1);  /* 0C0911E4 mov.b Rm,@Rn */
	r6 = (u32)(s32)(s16)R16(r8); UPD(0x0C0911E8u, 1);  /* 0C0911E6 mov.w @Rm,Rn */
	r5 = 0xE6666u; UPD(0x0C0911EAu, 1);  /* 0C0911E8 mov.l @(disp,pc),Rn */
	r4 = r6;  /* 0C0911EA mov Rm,Rn */
	IF(0x0C0911ECu); { u32 t_ = r13; PR = 0x0C0911F0u; W32(r14 + 0x4u, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0911F0u); }  /* 0C0911EC jsr @Rn */
L_0C0911F0: BLKS(0x0C0911F0u);
	r8 = 0xC058030u; UPD(0x0C0911F2u, 1);  /* 0C0911F0 mov.l @(disp,pc),Rn */
	r9 = R32(r10 + 0x24u); UPD(0x0C0911F4u, 1);  /* 0C0911F2 mov.l @(disp,Rm),Rn */
	r4 = R32(r14 + 0x4u); UPD(0x0C0911F6u, 1);  /* 0C0911F4 mov.l @(disp,Rm),Rn */
	r5 = 0x120000u; UPD(0x0C0911F8u, 1);  /* 0C0911F6 mov.l @(disp,pc),Rn */
	IF(0x0C0911F8u); { u32 t_ = r8; PR = 0x0C0911FCu; r9 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0911FCu); }  /* 0C0911F8 jsr @Rn */
L_0C0911FC: BLKS(0x0C0911FCu);
	r6 = R32(r10 + 0x28u); UPD(0x0C0911FEu, 1);  /* 0C0911FC mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0911FE add #imm,Rn */
	r6 += r0;  /* 0C091200 add Rm,Rn */
	r0 = 0x20000u; UPD(0x0C091204u, 3);  /* 0C091202 mov.l @(disp,pc),Rn */
	r4 = 0x2u;  /* 0C091204 mov #imm,Rn */
	r12 = 0xC0A81B0u; UPD(0x0C091208u, 2);  /* 0C091206 mov.l @(disp,pc),Rn */
	r5 = r9;  /* 0C091208 mov Rm,Rn */
	W32(r15, r0); UPD(0x0C09120Cu, 2);  /* 0C09120A mov.l Rm,@Rn */
	IF(0x0C09120Cu); { u32 t_ = r12; PR = 0x0C091210u; r7 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0A81B0, 0x0C0A81B0u, 0x0C091210u); }  /* 0C09120C jsr @Rn */
L_0C091210: BLKS(0x0C091210u);
	r2 = (u32)(s32)(s8)R8(r11); UPD(0x0C091212u, 1);  /* 0C091210 mov.b @Rm,Rn */
	r2 += 0xFFFFFFFFu;  /* 0C091212 add #imm,Rn */
	W8(r11, r2); UPD(0x0C091216u, 2);  /* 0C091214 mov.b Rm,@Rn */
	r11 = r2 & 0xFF;  /* 0C091216 extu.b Rm,Rn */
	T = (r11 & r11) == 0;  /* 0C091218 tst Rm,Rn */
	{ u32 c_ = !T; r15 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C09125Au, 5); goto L_0C09125A; } goto L_0C09121E; }  /* 0C09121A bf/s */
L_0C09121E: BLKS(0x0C09121Eu);
	r1 = 0xC0580D0u; UPD(0x0C091220u, 2);  /* 0C09121E mov.l @(disp,pc),Rn */
	r13 = 0xFFFFE07Eu; UPD(0x0C091222u, 1);  /* 0C091220 mov.w @(disp,pc),Rn */
	IF(0x0C091222u); { u32 tv_ = (r13 + 0x0C091226u); u32 t_ = PHYS(tv_); r4 = R32(r14); /* slot mov.l @Rm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C091222 braf Rn */
L_0C091230: BLKS(0x0C091230u);
	r4 = 0xA5u; UPD(0x0C091232u, 1);  /* 0C091230 mov.w @(disp,pc),Rn */
	r0 = r9;  /* 0C091232 mov Rm,Rn */
	IF(0x0C091234u); r13 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C091236u, 2);  /* 0C091234 mov.b @(r0,Rm),Rn */
	r6 = 0xAu;  /* 0C091236 mov #imm,Rn */
	r5 = 0xC1C2D20u; UPD(0x0C09123Au, 2);  /* 0C091238 mov.l @(disp,pc),Rn */
	r0 = r13;  /* 0C09123A mov Rm,Rn */
	r0 &= 0x1u;  /* 0C09123C and #imm,r0 */
	r9 = 0xC0A9E40u; UPD(0x0C091240u, 3);  /* 0C09123E mov.l @(disp,pc),Rn */
	IF(0x0C091240u); r8 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C091242u, 1);  /* 0C091240 mov.b @(r0,Rm),Rn */
	r4 = R32(r14); UPD(0x0C091244u, 1);  /* 0C091242 mov.l @Rm,Rn */
	IF(0x0C091244u); { u32 t_ = r9; PR = 0x0C091248u; r5 = r8 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C091248u); }  /* 0C091244 jsr @Rn */
L_0C091248: BLKS(0x0C091248u);
	T = (r0 & r0) == 0;  /* 0C091248 tst Rm,Rn */
	if (T) { UPD(0x0C09125Au, 4); goto L_0C09125A; }  /* 0C09124A bt */
L_0C09124C: BLKS(0x0C09124Cu);
	r10 = 0xFFFFFFEBu;  /* 0C09124C mov #imm,Rn */
	r7 = 0xC27DFF8u; UPD(0x0C091250u, 2);  /* 0C09124E mov.l @(disp,pc),Rn */
	r3 = R32(r7); UPD(0x0C091252u, 1);  /* 0C091250 mov.l @Rm,Rn */
	IF(0x0C091252u); ARG0(0x43ADu); { s32 s_ = (s32)r10; if (s_ >= 0) r3 <<= (s_ & 31); else if ((s_ & 31) == 0) r3 = 0; else r3 >>= ((~s_ & 31) + 1); }  /* 0C091252 shld Rm,Rn */
	r1 = 0u - r3;  /* 0C091254 neg Rm,Rn */
	r1 += 0xCu;  /* 0C091256 add #imm,Rn */
	W8(r11, r1); UPD(0x0C09125Au, 4);  /* 0C091258 mov.b Rm,@Rn */
L_0C09125A: BLKS(0x0C09125Au);
	r13 = 0xFFFFDCF6u; UPD(0x0C09125Cu, 1);  /* 0C09125A mov.w @(disp,pc),Rn */
	IF(0x0C09125Cu); { u32 tv_ = (r13 + 0x0C091260u); u32 t_ = PHYS(tv_); r14 += 0x40u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09125C braf Rn */
}

void f_0C0912B0(sh3_t *c)
{
	LOCALS;
	goto L_0C0912B0;
L_0C08EF56: BLKS(0x0C08EF56u);
	r15 = r14;  /* 0C08EF56 mov Rm,Rn */
	IF(0x0C08EF58u); PR = R32(r15); r15 += 4; UPD(0x0C08EF5Au, 2);  /* 0C08EF58 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08EF5Cu, 1);  /* 0C08EF5A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08EF5Eu, 1);  /* 0C08EF5C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08EF60u, 1);  /* 0C08EF5E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08EF62u, 1);  /* 0C08EF60 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08EF64u, 1);  /* 0C08EF62 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08EF66u, 1);  /* 0C08EF64 mov.l @Rm+,Rn */
	IF(0x0C08EF66u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08EF66 rts */
L_0C08FE90: BLKS(0x0C08FE90u);
	r15 += 0x4u;  /* 0C08FE90 add #imm,Rn */
	{ r14 += 0x40u; /* slot add #imm,Rn */ UPD(0x0C08EF56u, 4); goto L_0C08EF56; }  /* 0C08FE92 bra */
L_0C09057C: BLKS(0x0C09057Cu);
	IF(0x0C09057Cu); { u32 t_ = r0; PR = 0x0C090580u; IF(0x0C09057Eu); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C090580u); }  /* 0C09057C jsr @Rn */
L_0C090580: BLKS(0x0C090580u);
	r7 = (u32)(s32)(s8)R8(r9); UPD(0x0C090582u, 1);  /* 0C090580 mov.b @Rm,Rn */
	r7 += 0x1u;  /* 0C090582 add #imm,Rn */
	{ W8(r9, r7); /* slot mov.b Rm,@Rn */ UPD(0x0C08FE90u, 4); goto L_0C08FE90; }  /* 0C090584 bra */
L_0C091258: BLKS(0x0C091258u);
	W8(r11, r1); UPD(0x0C09125Au, 1);  /* 0C091258 mov.b Rm,@Rn */
L_0C09125A: BLKS(0x0C09125Au);
	r13 = 0xFFFFDCF6u; UPD(0x0C09125Cu, 1);  /* 0C09125A mov.w @(disp,pc),Rn */
	IF(0x0C09125Cu); { u32 tv_ = (r13 + 0x0C091260u); u32 t_ = PHYS(tv_); r14 += 0x40u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09125C braf Rn */
L_0C0912B0: BLKS(0x0C0912B0u);
	r10 = 0xC0A0540u; UPD(0x0C0912B2u, 1);  /* 0C0912B0 mov.l @(disp,pc),Rn */
	IF(0x0C0912B2u); { u32 t_ = r10; PR = 0x0C0912B6u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0540, 0x0C0A0540u, 0x0C0912B6u); }  /* 0C0912B2 jsr @Rn */
L_0C0912B6: BLKS(0x0C0912B6u);
	IF(0x0C0912B6u); T = (s32)r0 >= 0;  /* 0C0912B6 cmp/pz Rn */
	{ u32 c_ = T; r10 = R32(r14); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C0912C4u, 4); goto L_0C0912C4; } UPD(0x0C0912BCu, 1); goto L_0C0912BC; }  /* 0C0912B8 bt/s */
L_0C0912BC: BLKS(0x0C0912BCu);
	r4 = 0xFFFFDFE0u; UPD(0x0C0912BEu, 1);  /* 0C0912BC mov.w @(disp,pc),Rn */
	IF(0x0C0912BEu); { u32 tv_ = (r4 + 0x0C0912C2u); u32 t_ = PHYS(tv_); r4 = R32(r14); /* slot mov.l @Rm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0912BE braf Rn */
L_0C0912C4: BLKS(0x0C0912C4u);
	r8 = 0xB4u; UPD(0x0C0912C6u, 1);  /* 0C0912C4 mov.w @(disp,pc),Rn */
	IF(0x0C0912C6u); MACL = r10 * r8;  /* 0C0912C6 mul.l Rm,Rn */
	r12 = 0xC26CD40u; UPD(0x0C0912CAu, 3);  /* 0C0912C8 mov.l @(disp,pc),Rn */
	IF(0x0C0912CAu); r10 = MACL;  /* 0C0912CA sts macl,Rn */
	IF(0x0C0912CCu); MACL = r0 * r8;  /* 0C0912CC mul.l Rm,Rn */
	r10 += r12;  /* 0C0912CE add Rm,Rn */
	r5 = R32(r10 + 0x2Cu); UPD(0x0C0912D2u, 5);  /* 0C0912D0 mov.l @(disp,Rm),Rn */
	IF(0x0C0912D2u); r13 = MACL;  /* 0C0912D2 sts macl,Rn */
	r13 += r12;  /* 0C0912D4 add Rm,Rn */
	r6 = R32(r13 + 0x24u); UPD(0x0C0912D8u, 3);  /* 0C0912D6 mov.l @(disp,Rm),Rn */
	r3 = R32(r10); UPD(0x0C0912DAu, 1);  /* 0C0912D8 mov.l @Rm,Rn */
	r6 += r5;  /* 0C0912DA add Rm,Rn */
	r4 = 0xFCFFFEFFu; UPD(0x0C0912DEu, 2);  /* 0C0912DC mov.l @(disp,pc),Rn */
	W32(r10 + 0x24u, r6); UPD(0x0C0912E0u, 1);  /* 0C0912DE mov.l Rm,@(disp,Rn) */
	r3 &= r4;  /* 0C0912E0 and Rm,Rn */
	r9 = R32(r13 + 0x28u); UPD(0x0C0912E4u, 2);  /* 0C0912E2 mov.l @(disp,Rm),Rn */
	r6 = r10;  /* 0C0912E4 mov Rm,Rn */
	r1 = R32(r10 + 0x30u); UPD(0x0C0912E8u, 2);  /* 0C0912E6 mov.l @(disp,Rm),Rn */
	W32(r10, r3); UPD(0x0C0912EAu, 1);  /* 0C0912E8 mov.l Rm,@Rn */
	r9 += r1;  /* 0C0912EA add Rm,Rn */
	r0 = 0xA8u; UPD(0x0C0912EEu, 2);  /* 0C0912EC mov.w @(disp,pc),Rn */
	W32(r10 + 0x28u, r9); UPD(0x0C0912F0u, 1);  /* 0C0912EE mov.l Rm,@(disp,Rn) */
	r6 += r0;  /* 0C0912F0 add Rm,Rn */
	r4 = R32(r13); UPD(0x0C0912F4u, 2);  /* 0C0912F2 mov.l @Rm,Rn */
	r0 += r13;  /* 0C0912F4 add Rm,Rn */
	r2 = 0x3000100u; UPD(0x0C0912F8u, 2);  /* 0C0912F6 mov.l @(disp,pc),Rn */
	r0 += 0x1u;  /* 0C0912F8 add #imm,Rn */
	r4 &= r2;  /* 0C0912FA and Rm,Rn */
	r9 = R32(r13 + 0x38u); UPD(0x0C0912FEu, 3);  /* 0C0912FC mov.l @(disp,Rm),Rn */
	r4 |= r3;  /* 0C0912FE or Rm,Rn */
	r5 = (u32)(s32)(s8)R8(r0); UPD(0x0C091302u, 2);  /* 0C091300 mov.b @Rm,Rn */
	r6 += 0x1u;  /* 0C091302 add #imm,Rn */
	W32(r10, r4); UPD(0x0C091306u, 2);  /* 0C091304 mov.l Rm,@Rn */
	r0 = r10;  /* 0C091306 mov Rm,Rn */
	W32(r10 + 0x38u, r9); UPD(0x0C09130Au, 2);  /* 0C091308 mov.l Rm,@(disp,Rn) */
	r10 += 0x7Eu;  /* 0C09130A add #imm,Rn */
	r3 = (u32)(s32)(s16)R16(r10); UPD(0x0C09130Eu, 2);  /* 0C09130C mov.w @Rm,Rn */
	IF(0x0C09130Eu); MACL = r3 * r8;  /* 0C09130E mul.l Rm,Rn */
	r11 = 0xAFu; UPD(0x0C091312u, 3);  /* 0C091310 mov.w @(disp,pc),Rn */
	r10 += 0xFFFFFF82u;  /* 0C091312 add #imm,Rn */
	IF(0x0C091314u); r7 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C091316u, 2);  /* 0C091314 mov.b @(r0,Rm),Rn */
	r3 = 0xA0u; UPD(0x0C091318u, 1);  /* 0C091316 mov.w @(disp,pc),Rn */
	IF(0x0C091318u); r0 = MACL;  /* 0C091318 sts macl,Rn */
	r3 += r10;  /* 0C09131A add Rm,Rn */
	r2 = 0xA7u; UPD(0x0C09131Eu, 3);  /* 0C09131C mov.w @(disp,pc),Rn */
	r5 += r7;  /* 0C09131E add Rm,Rn */
	r3 += 0x2u;  /* 0C091320 add #imm,Rn */
	r0 += r12;  /* 0C091322 add Rm,Rn */
	r7 = (u32)(s32)(s8)R8(r3); UPD(0x0C091326u, 4);  /* 0C091324 mov.b @Rm,Rn */
	IF(0x0C091326u); r11 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C091328u, 1);  /* 0C091326 mov.b @(r0,Rm),Rn */
	r3 += 0xFFFFFFFEu;  /* 0C091328 add #imm,Rn */
	T = (r11 & r7) == 0;  /* 0C09132A tst Rm,Rn */
	{ u32 c_ = T; W8(r6, r5); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C09125Au, 5); goto L_0C09125A; } UPD(0x0C091330u, 1); goto L_0C091330; }  /* 0C09132C bt/s */
L_0C091330: BLKS(0x0C091330u);
	r12 = 0x100u; UPD(0x0C091332u, 1);  /* 0C091330 mov.w @(disp,pc),Rn */
	T = (r4 & r12) == 0;  /* 0C091332 tst Rm,Rn */
	if (T) { UPD(0x0C09125Au, 4); goto L_0C09125A; }  /* 0C091334 bt */
L_0C091336: BLKS(0x0C091336u);
	r9 = 0x9Cu; UPD(0x0C091338u, 1);  /* 0C091336 mov.w @(disp,pc),Rn */
	r9 += r10;  /* 0C091338 add Rm,Rn */
	r11 = r9;  /* 0C09133A mov Rm,Rn */
	r11 += 0x3u;  /* 0C09133C add #imm,Rn */
	r8 = (u32)(s32)(s8)R8(r11); UPD(0x0C091340u, 4);  /* 0C09133E mov.b @Rm,Rn */
	r0 = r8 & 0xFF;  /* 0C091340 extu.b Rm,Rn */
	T = (r0 & r0) == 0; UPD(0x0C091344u, 2);  /* 0C091342 tst Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x1u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C0913C0u, 3); goto L_0C0913C0; } goto L_0C091348; }  /* 0C091344 bt/s */
L_0C091348: BLKS(0x0C091348u);
	if (!T) { UPD(0x0C0913F4u, 4); goto L_0C0913F4; }  /* 0C091348 bf */
L_0C09134A: BLKS(0x0C09134Au);
	r3 += 0x1u;  /* 0C09134A add #imm,Rn */
	r8 = 0x86u; UPD(0x0C09134Eu, 2);  /* 0C09134C mov.w @(disp,pc),Rn */
	r8 += r10;  /* 0C09134E add Rm,Rn */
	r5 = (u32)(s32)(s8)R8(r3); UPD(0x0C091352u, 2);  /* 0C091350 mov.b @Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r8); UPD(0x0C091354u, 1);  /* 0C091352 mov.w @Rm,Rn */
	r4 += r5;  /* 0C091354 add Rm,Rn */
	r0 = (u32)(s32)(s16)r4;  /* 0C091356 exts.w Rm,Rn */
	r0 += 0x8u;  /* 0C091358 add #imm,Rn */
	W16(r8, r4); UPD(0x0C09135Cu, 4);  /* 0C09135A mov.w Rm,@Rn */
	IF(0x0C09135Cu); r0 >>= 2;  /* 0C09135C shlr2 Rn */
	r6 = 0xC0A0380u; UPD(0x0C091360u, 2);  /* 0C09135E mov.l @(disp,pc),Rn */
	IF(0x0C091360u); r0 >>= 2;  /* 0C091360 shlr2 Rn */
	r13 = 0xC0A9E40u; UPD(0x0C091364u, 2);  /* 0C091362 mov.l @(disp,pc),Rn */
	r0 &= 0x1Fu;  /* 0C091364 and #imm,r0 */
	r4 = R32(r14); UPD(0x0C091368u, 2);  /* 0C091366 mov.l @Rm,Rn */
	IF(0x0C091368u); { u32 t_ = r6; PR = 0x0C09136Cu; W32(r10 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C09136Cu); }  /* 0C091368 jsr @Rn */
L_0C09136C: BLKS(0x0C09136Cu);
	r4 = R32(r14); UPD(0x0C09136Eu, 1);  /* 0C09136C mov.l @Rm,Rn */
	r5 = 0x4u;  /* 0C09136E mov #imm,Rn */
	IF(0x0C091370u); { u32 t_ = r13; PR = 0x0C091374u; r6 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLD(t_, 0x0C091374u); }  /* 0C091370 jsr @Rn */
L_0C091374: BLKS(0x0C091374u);
	T = (r0 & r0) == 0;  /* 0C091374 tst Rm,Rn */
	if (T) { UPD(0x0C0913F4u, 4); goto L_0C0913F4; }  /* 0C091376 bt */
L_0C091378: BLKS(0x0C091378u);
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C09137Au, 1);  /* 0C091378 mov.b @Rm,Rn */
	T = r0 == 0x8u;  /* 0C09137A cmp/eq #imm,r0 */
	if (T) { UPD(0x0C0913B0u, 4); goto L_0C0913B0; }  /* 0C09137C bt */
L_0C09137E: BLKS(0x0C09137Eu);
	r1 = (u32)(s32)(s16)R16(r8); UPD(0x0C091380u, 1);  /* 0C09137E mov.w @Rm,Rn */
	r12 = 0xC058060u; UPD(0x0C091382u, 1);  /* 0C091380 mov.l @(disp,pc),Rn */
	r5 = 0xCCCCCu; UPD(0x0C091384u, 1);  /* 0C091382 mov.l @(disp,pc),Rn */
	r4 = r1;  /* 0C091384 mov Rm,Rn */
	IF(0x0C091386u); { u32 t_ = r12; PR = 0x0C09138Au; W32(r14 + 0x4u, r1); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C09138Au); }  /* 0C091386 jsr @Rn */
L_0C09138A: BLKS(0x0C09138Au);
	r8 = 0xC058030u; UPD(0x0C09138Cu, 1);  /* 0C09138A mov.l @(disp,pc),Rn */
	r11 = R32(r10 + 0x24u); UPD(0x0C09138Eu, 1);  /* 0C09138C mov.l @(disp,Rm),Rn */
	r4 = R32(r14 + 0x4u); UPD(0x0C091390u, 1);  /* 0C09138E mov.l @(disp,Rm),Rn */
	r5 = 0x100000u; UPD(0x0C091392u, 1);  /* 0C091390 mov.l @(disp,pc),Rn */
	IF(0x0C091392u); { u32 t_ = r8; PR = 0x0C091396u; r11 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C091396u); }  /* 0C091392 jsr @Rn */
L_0C091396: BLKS(0x0C091396u);
	r6 = R32(r10 + 0x28u); UPD(0x0C091398u, 1);  /* 0C091396 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C091398 add #imm,Rn */
	r10 = 0x20000u; UPD(0x0C09139Cu, 2);  /* 0C09139A mov.l @(disp,pc),Rn */
	r6 += r0;  /* 0C09139C add Rm,Rn */
	W32(r15, r10); UPD(0x0C0913A0u, 2);  /* 0C09139E mov.l Rm,@Rn */
	r4 = 0x2u;  /* 0C0913A0 mov #imm,Rn */
	r7 = R32(r14 + 0x4u); UPD(0x0C0913A4u, 2);  /* 0C0913A2 mov.l @(disp,Rm),Rn */
	r0 = 0xC0A81B0u; UPD(0x0C0913A6u, 1);  /* 0C0913A4 mov.l @(disp,pc),Rn */
	{ r5 = r11; /* slot mov Rm,Rn */ UPD(0x0C09057Cu, 3); goto L_0C09057C; }  /* 0C0913A6 bra */
L_0C0913B0: BLKS(0x0C0913B0u);
	r13 = 0xC0580D0u; UPD(0x0C0913B2u, 1);  /* 0C0913B0 mov.l @(disp,pc),Rn */
	IF(0x0C0913B2u); { u32 t_ = r13; PR = 0x0C0913B6u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0580D0, 0x0C0580D0u, 0x0C0913B6u); }  /* 0C0913B2 jsr @Rn */
L_0C0913B6: BLKS(0x0C0913B6u);
	r1 = 0x0u;  /* 0C0913B6 mov #imm,Rn */
	r13 = 0xFFFFE4D4u; UPD(0x0C0913BAu, 2);  /* 0C0913B8 mov.w @(disp,pc),Rn */
	IF(0x0C0913BAu); { u32 tv_ = (r13 + 0x0C0913BEu); u32 t_ = PHYS(tv_); W8(r11, r1); /* slot mov.b Rm,@Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0913BA braf Rn */
L_0C0913C0: BLKS(0x0C0913C0u);
	r12 = 0xC058130u; UPD(0x0C0913C2u, 1);  /* 0C0913C0 mov.l @(disp,pc),Rn */
	r9 = 0xC057430u; UPD(0x0C0913C4u, 1);  /* 0C0913C2 mov.l @(disp,pc),Rn */
	IF(0x0C0913C4u); { u32 t_ = r12; PR = 0x0C0913C8u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058130, 0x0C058130u, 0x0C0913C8u); }  /* 0C0913C4 jsr @Rn */
L_0C0913C8: BLKS(0x0C0913C8u);
	r5 = 0x4u;  /* 0C0913C8 mov #imm,Rn */
	IF(0x0C0913CAu); { u32 t_ = r9; PR = 0x0C0913CEu; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLD(t_, 0x0C0913CEu); }  /* 0C0913CA jsr @Rn */
L_0C0913CE: BLKS(0x0C0913CEu);
	r2 = 0x86u; UPD(0x0C0913D0u, 1);  /* 0C0913CE mov.w @(disp,pc),Rn */
	r0 = r10;  /* 0C0913D0 mov Rm,Rn */
	IF(0x0C0913D2u); r3 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C0913D4u, 2);  /* 0C0913D2 mov.w @(r0,Rm),Rn */
	r3 += 0x8u;  /* 0C0913D4 add #imm,Rn */
	r7 = 0xC0A0380u; UPD(0x0C0913D8u, 2);  /* 0C0913D6 mov.l @(disp,pc),Rn */
	IF(0x0C0913D8u); r3 >>= 2;  /* 0C0913D8 shlr2 Rn */
	r0 = 0x1Fu;  /* 0C0913DA mov #imm,Rn */
	IF(0x0C0913DCu); r3 >>= 2;  /* 0C0913DC shlr2 Rn */
	r13 = 0xC0A9E40u; UPD(0x0C0913E0u, 4);  /* 0C0913DE mov.l @(disp,pc),Rn */
	r3 &= r0;  /* 0C0913E0 and Rm,Rn */
	r4 = R32(r14); UPD(0x0C0913E4u, 2);  /* 0C0913E2 mov.l @Rm,Rn */
	IF(0x0C0913E4u); { u32 t_ = r7; PR = 0x0C0913E8u; W32(r10 + 0xCu, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C0913E8u); }  /* 0C0913E4 jsr @Rn */
L_0C0913E8: BLKS(0x0C0913E8u);
	r4 = R32(r14); UPD(0x0C0913EAu, 1);  /* 0C0913E8 mov.l @Rm,Rn */
	r5 = 0x5Au;  /* 0C0913EA mov #imm,Rn */
	IF(0x0C0913ECu); { u32 t_ = r13; PR = 0x0C0913F0u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLD(t_, 0x0C0913F0u); }  /* 0C0913EC jsr @Rn */
L_0C0913F0: BLKS(0x0C0913F0u);
	T = (r0 & r0) == 0;  /* 0C0913F0 tst Rm,Rn */
	if (!T) { UPD(0x0C0913FCu, 4); goto L_0C0913FC; }  /* 0C0913F2 bf */
L_0C0913F4: BLKS(0x0C0913F4u);
	r13 = 0xFFFFDB5Cu; UPD(0x0C0913F6u, 1);  /* 0C0913F4 mov.w @(disp,pc),Rn */
	IF(0x0C0913F6u); { u32 tv_ = (r13 + 0x0C0913FAu); u32 t_ = PHYS(tv_); r14 += 0x40u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0913F6 braf Rn */
L_0C0913FC: BLKS(0x0C0913FCu);
	r1 = (u32)(s32)(s8)R8(r11); UPD(0x0C0913FEu, 1);  /* 0C0913FC mov.b @Rm,Rn */
	{ r1 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C091258u, 3); goto L_0C091258; }  /* 0C0913FE bra */
}

void f_0C091450(sh3_t *c)
{
	LOCALS;
L_0C091450: BLKS(0x0C091450u);
	r9 = 0xC0A03F0u; UPD(0x0C091452u, 1);  /* 0C091450 mov.l @(disp,pc),Rn */
	IF(0x0C091452u); { u32 t_ = r9; PR = 0x0C091456u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C091456u); }  /* 0C091452 jsr @Rn */
L_0C091456: BLKS(0x0C091456u);
	IF(0x0C091456u); T = (s32)r0 >= 0;  /* 0C091456 cmp/pz Rn */
	{ u32 c_ = T; r8 = R32(r14); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C091464u, 4); goto L_0C091464; } UPD(0x0C09145Cu, 1); goto L_0C09145C; }  /* 0C091458 bt/s */
L_0C09145C: BLKS(0x0C09145Cu);
	r4 = 0xFFFFDE40u; UPD(0x0C09145Eu, 1);  /* 0C09145C mov.w @(disp,pc),Rn */
	IF(0x0C09145Eu); { u32 tv_ = (r4 + 0x0C091462u); u32 t_ = PHYS(tv_); r4 = R32(r14); /* slot mov.l @Rm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09145E braf Rn */
L_0C091464: BLKS(0x0C091464u);
	r2 = 0xB4u; UPD(0x0C091466u, 1);  /* 0C091464 mov.w @(disp,pc),Rn */
	IF(0x0C091466u); MACL = r8 * r2;  /* 0C091466 mul.l Rm,Rn */
	r10 = 0xC26CD40u; UPD(0x0C09146Au, 3);  /* 0C091468 mov.l @(disp,pc),Rn */
	IF(0x0C09146Au); r7 = MACL;  /* 0C09146A sts macl,Rn */
	IF(0x0C09146Cu); MACL = r0 * r2;  /* 0C09146C mul.l Rm,Rn */
	r7 += r10;  /* 0C09146E add Rm,Rn */
	r6 = R32(r7 + 0x30u); UPD(0x0C091472u, 5);  /* 0C091470 mov.l @(disp,Rm),Rn */
	IF(0x0C091472u); r4 = MACL;  /* 0C091472 sts macl,Rn */
	r4 += r10;  /* 0C091474 add Rm,Rn */
	r2 = 0x99u; UPD(0x0C091478u, 3);  /* 0C091476 mov.w @(disp,pc),Rn */
	r0 = R32(r4 + 0x28u); UPD(0x0C09147Au, 1);  /* 0C091478 mov.l @(disp,Rm),Rn */
	r2 += r7;  /* 0C09147A add Rm,Rn */
	r5 = R32(r4 + 0x24u); UPD(0x0C09147Eu, 2);  /* 0C09147C mov.l @(disp,Rm),Rn */
	r0 += r6;  /* 0C09147E add Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r2); UPD(0x0C091482u, 2);  /* 0C091480 mov.b @Rm,Rn */
	r11 = R32(r7 + 0x2Cu); UPD(0x0C091484u, 1);  /* 0C091482 mov.l @(disp,Rm),Rn */
	r3 += 0x1u;  /* 0C091484 add #imm,Rn */
	W32(r7 + 0x28u, r0); UPD(0x0C091488u, 2);  /* 0C091486 mov.l Rm,@(disp,Rn) */
	r5 += r11;  /* 0C091488 add Rm,Rn */
	r0 = r3 & 0xFF;  /* 0C09148A extu.b Rm,Rn */
	W32(r7 + 0x24u, r5); UPD(0x0C09148Eu, 3);  /* 0C09148C mov.l Rm,@(disp,Rn) */
	T = r0 == 0x8u;  /* 0C09148E cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r2, r3); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C091498u, 4); goto L_0C091498; } UPD(0x0C091494u, 1); goto L_0C091494; }  /* 0C091490 bf/s */
L_0C091494: BLKS(0x0C091494u);
	{ r13 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C0915D0u, 3); goto L_0C0915D0; }  /* 0C091494 bra */
L_0C091498: BLKS(0x0C091498u);
	r10 = 0xB4u; UPD(0x0C09149Au, 1);  /* 0C091498 mov.w @(disp,pc),Rn */
	r12 = 0x3u;  /* 0C09149A mov #imm,Rn */
	r1 = R32(r14); UPD(0x0C09149Eu, 2);  /* 0C09149C mov.l @Rm,Rn */
	IF(0x0C09149Eu); MACL = r1 * r10;  /* 0C09149E mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C0914A2u, 3);  /* 0C0914A0 mov.l @(disp,pc),Rn */
	IF(0x0C0914A2u); r0 = MACL;  /* 0C0914A2 sts macl,Rn */
	r9 += r0;  /* 0C0914A4 add Rm,Rn */
	r0 = 0x9Fu; UPD(0x0C0914A8u, 3);  /* 0C0914A6 mov.w @(disp,pc),Rn */
	IF(0x0C0914A8u); r11 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0914AAu, 1);  /* 0C0914A8 mov.b @(r0,Rm),Rn */
	r2 = r11 & 0xFF;  /* 0C0914AA extu.b Rm,Rn */
	T = r2 > r12;  /* 0C0914AC cmp/hi Rm,Rn */
	if (T) { UPD(0x0C09156Au, 5); goto L_0C09156A; }  /* 0C0914AE bt */
L_0C0914B0: BLKS(0x0C0914B0u);
	r0 = 0xC0914BCu;  /* 0C0914B0 mova @(disp,pc),r0 */
	IF(0x0C0914B2u); r8 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C0914B4u, 2);  /* 0C0914B2 mov.b @(r0,Rm),Rn */
	r8 = r8 & 0xFF;  /* 0C0914B4 extu.b Rm,Rn */
	IF(0x0C0914B6u); { u32 tv_ = (r8 + 0x0C0914BAu); u32 t_ = PHYS(tv_); IF(0x0C0914B8u); ; /* slot nop */ JRGN(tv_); UPD(t_, 4); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0914B6 braf Rn */
L_0C09156A: BLKS(0x0C09156Au);
	r13 = 0xFFFFD9E6u; UPD(0x0C09156Cu, 1);  /* 0C09156A mov.w @(disp,pc),Rn */
	IF(0x0C09156Cu); { u32 tv_ = (r13 + 0x0C091570u); u32 t_ = PHYS(tv_); r14 += 0x40u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09156C braf Rn */
L_0C0915D0: BLKS(0x0C0915D0u);
	W8(r2, r13); UPD(0x0C0915D2u, 1);  /* 0C0915D0 mov.b Rm,@Rn */
	r12 = 0x0u;  /* 0C0915D2 mov #imm,Rn */
	W32(r14 + 0x8u, r12); UPD(0x0C0915D6u, 2);  /* 0C0915D4 mov.l Rm,@(disp,Rn) */
	r12 = r7;  /* 0C0915D6 mov Rm,Rn */
	UPD(0x0C0915D8u, 1);
L_0C0915D8: BLKS(0x0C0915D8u);
	r5 = R32(r14 + 0x8u); UPD(0x0C0915DAu, 1);  /* 0C0915D8 mov.l @(disp,Rm),Rn */
	r6 = 0x3u;  /* 0C0915DA mov #imm,Rn */
	r3 = 0xC1C2D24u; UPD(0x0C0915DEu, 2);  /* 0C0915DC mov.l @(disp,pc),Rn */
	IF(0x0C0915DEu); ARG0(0x456Du); { s32 s_ = (s32)r6; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = 0; else r5 >>= ((~s_ & 31) + 1); }  /* 0C0915DE shld Rm,Rn */
	r5 += r3;  /* 0C0915E0 add Rm,Rn */
	r4 = R32(r5 + 0x4u); UPD(0x0C0915E4u, 3);  /* 0C0915E2 mov.l @(disp,Rm),Rn */
	r0 = r12;  /* 0C0915E4 mov Rm,Rn */
	r13 = 0x86u; UPD(0x0C0915E8u, 2);  /* 0C0915E6 mov.w @(disp,pc),Rn */
	r2 = 0xC058060u; UPD(0x0C0915EAu, 1);  /* 0C0915E8 mov.l @(disp,pc),Rn */
	IF(0x0C0915EAu); r11 = (u32)(s32)(s16)R16(r0 + r13); UPD(0x0C0915ECu, 1);  /* 0C0915EA mov.w @(r0,Rm),Rn */
	r7 = R32(r5); UPD(0x0C0915EEu, 1);  /* 0C0915EC mov.l @Rm,Rn */
	W32(r14 + 0x10u, r4); UPD(0x0C0915F0u, 1);  /* 0C0915EE mov.l Rm,@(disp,Rn) */
	r5 = r7;  /* 0C0915F0 mov Rm,Rn */
	r8 = 0xC058030u; UPD(0x0C0915F4u, 2);  /* 0C0915F2 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C0915F4 mov Rm,Rn */
	IF(0x0C0915F6u); { u32 t_ = r2; PR = 0x0C0915FAu; W32(r14 + 0xCu, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0915FAu); }  /* 0C0915F6 jsr @Rn */
L_0C0915FA: BLKS(0x0C0915FAu);
	r4 = r11;  /* 0C0915FA mov Rm,Rn */
	r9 = r0;  /* 0C0915FC mov Rm,Rn */
	IF(0x0C0915FEu); { u32 t_ = r8; PR = 0x0C091602u; r5 = R32(r14 + 0x10u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 4); CALLD(t_, 0x0C091602u); }  /* 0C0915FE jsr @Rn */
L_0C091602: BLKS(0x0C091602u);
	r9 -= r0;  /* 0C091602 sub Rm,Rn */
	r10 = 0x66666667u; UPD(0x0C091606u, 2);  /* 0C091604 mov.l @(disp,pc),Rn */
	IF(0x0C091606u); r9 <<= 2;  /* 0C091606 shll2 Rn */
	{ s64 r_ = (s64)(s32)r9 * (s64)(s32)r10; MACH = (u32)((u64)r_ >> 32); MACL = (u32)r_; }  /* 0C091608 dmuls.l Rm,Rn */
	r1 = 0xC058030u; UPD(0x0C09160Cu, 4);  /* 0C09160A mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C09160C mov Rm,Rn */
	IF(0x0C09160Eu); r0 = MACH;  /* 0C09160E sts mach,Rn */
	IF(0x0C091610u); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C091610 shar Rn */
	IF(0x0C091612u); T = r9 >> 31; r9 <<= 1;  /* 0C091612 shll Rn */
	{ u32 a_ = r9, t_ = a_ - r9, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r9 = r_; }  /* 0C091614 subc Rm,Rn */
	r0 -= r9;  /* 0C091616 sub Rm,Rn */
	r9 = R32(r12 + 0x24u); UPD(0x0C09161Au, 7);  /* 0C091618 mov.l @(disp,Rm),Rn */
	r5 = R32(r14 + 0xCu); UPD(0x0C09161Cu, 1);  /* 0C09161A mov.l @(disp,Rm),Rn */
	IF(0x0C09161Cu); { u32 t_ = r1; PR = 0x0C091620u; r9 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C091620u); }  /* 0C09161C jsr @Rn */
L_0C091620: BLKS(0x0C091620u);
	r6 = 0xC058060u; UPD(0x0C091622u, 1);  /* 0C091620 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C091622 mov Rm,Rn */
	r13 = 0xFFFC0000u; UPD(0x0C091626u, 2);  /* 0C091624 mov.l @(disp,pc),Rn */
	r9 += r13;  /* 0C091626 add Rm,Rn */
	r13 = r0;  /* 0C091628 mov Rm,Rn */
	IF(0x0C09162Au); { u32 t_ = r6; PR = 0x0C09162Eu; r5 = R32(r14 + 0x10u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 4); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C09162Eu); }  /* 0C09162A jsr @Rn */
L_0C09162E: BLKS(0x0C09162Eu);
	r13 += r0;  /* 0C09162E add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C091632u, 2);  /* 0C091630 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFECu;  /* 0C091632 add #imm,Rn */
	IF(0x0C091634u); r3 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C091636u, 2);  /* 0C091634 mov.b @(r0,Rm),Rn */
	r11 = R32(r12 + 0x28u); UPD(0x0C091638u, 1);  /* 0C091636 mov.l @(disp,Rm),Rn */
	r7 = r3 & 0xFF;  /* 0C091638 extu.b Rm,Rn */
	W32(r15, r7); UPD(0x0C09163Cu, 2);  /* 0C09163A mov.l Rm,@Rn */
	r0 = r12;  /* 0C09163C mov Rm,Rn */
	r8 = 0xA9u; UPD(0x0C091640u, 2);  /* 0C09163E mov.w @(disp,pc),Rn */
	r13 += r11;  /* 0C091640 add Rm,Rn */
	IF(0x0C091642u); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C091644u, 2);  /* 0C091642 mov.b @(r0,Rm),Rn */
	r4 = 0x10000u; UPD(0x0C091646u, 1);  /* 0C091644 mov.l @(disp,pc),Rn */
	r5 = r2 & 0xFF;  /* 0C091646 extu.b Rm,Rn */
	r10 = 0xC050D70u; UPD(0x0C09164Au, 2);  /* 0C091648 mov.l @(disp,pc),Rn */
	W32(r15 + 0x8u, r4); UPD(0x0C09164Cu, 1);  /* 0C09164A mov.l Rm,@(disp,Rn) */
	r4 = 0x8000u; UPD(0x0C09164Eu, 1);  /* 0C09164C mov.l @(disp,pc),Rn */
	IF(0x0C09164Eu); { u32 t_ = r10; PR = 0x0C091652u; W32(r15 + 0x4u, r5); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C091652u); }  /* 0C09164E jsr @Rn */
L_0C091652: BLKS(0x0C091652u);
	r6 = 0xFFFFC000u; UPD(0x0C091654u, 1);  /* 0C091652 mov.w @(disp,pc),Rn */
	r7 = r13;  /* 0C091654 mov Rm,Rn */
	r6 += r0;  /* 0C091656 add Rm,Rn */
	r0 = 0x808080u; UPD(0x0C09165Au, 3);  /* 0C091658 mov.l @(disp,pc),Rn */
	r5 = 0x7u;  /* 0C09165A mov #imm,Rn */
	r11 = 0xC0ACA40u; UPD(0x0C09165Eu, 2);  /* 0C09165C mov.l @(disp,pc),Rn */
	W32(r15 + 0xCu, r6); UPD(0x0C091660u, 1);  /* 0C09165E mov.l Rm,@(disp,Rn) */
	W32(r15 + 0x10u, r0); UPD(0x0C091662u, 1);  /* 0C091660 mov.l Rm,@(disp,Rn) */
	r6 = r9;  /* 0C091662 mov Rm,Rn */
	IF(0x0C091664u); { u32 t_ = r11; PR = 0x0C091668u; r4 = R32(r12); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0ACA40, 0x0C0ACA40u, 0x0C091668u); }  /* 0C091664 jsr @Rn */
L_0C091668: BLKS(0x0C091668u);
	r3 = R32(r14 + 0x8u); UPD(0x0C09166Au, 1);  /* 0C091668 mov.l @(disp,Rm),Rn */
	r7 = 0x5u;  /* 0C09166A mov #imm,Rn */
	r3 += 0x1u;  /* 0C09166C add #imm,Rn */
	r9 = (u32)(s32)(s16)r3;  /* 0C09166E exts.w Rm,Rn */
	W32(r14 + 0x8u, r9); UPD(0x0C091672u, 4);  /* 0C091670 mov.l Rm,@(disp,Rn) */
	r1 = R32(r14 + 0x8u); UPD(0x0C091674u, 1);  /* 0C091672 mov.l @(disp,Rm),Rn */
	T = (s32)r1 > (s32)r7;  /* 0C091674 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x14u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0915D8u, 4); goto L_0C0915D8; } goto L_0C09167A; }  /* 0C091676 bf/s */
L_0C09167A: BLKS(0x0C09167Au);
	{ IF(0x0C09167Cu); ; /* slot nop */ UPD(0x0C091498u, 4); goto L_0C091498; }  /* 0C09167A bra */
}

void f_0C0914C0(sh3_t *c)
{
	LOCALS;
	goto L_0C0914C0;
L_0C091102: BLKS(0x0C091102u);
	IF(0x0C091102u); W16(r0 + r2, r1); UPD(0x0C091104u, 1);  /* 0C091102 mov.w Rm,@(r0,Rn) */
	r13 = 0xFFFFDE4Cu; UPD(0x0C091106u, 1);  /* 0C091104 mov.w @(disp,pc),Rn */
	IF(0x0C091106u); { u32 tv_ = (r13 + 0x0C09110Au); u32 t_ = PHYS(tv_); r14 += 0x40u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C091106 braf Rn */
L_0C0914C0: BLKS(0x0C0914C0u);
	r5 = 0xB4u; UPD(0x0C0914C2u, 1);  /* 0C0914C0 mov.w @(disp,pc),Rn */
	r3 = R32(r14); UPD(0x0C0914C4u, 1);  /* 0C0914C2 mov.l @Rm,Rn */
	IF(0x0C0914C4u); MACL = r3 * r5;  /* 0C0914C4 mul.l Rm,Rn */
	r4 = 0xC26CD40u; UPD(0x0C0914C8u, 3);  /* 0C0914C6 mov.l @(disp,pc),Rn */
	IF(0x0C0914C8u); r8 = MACL;  /* 0C0914C8 sts macl,Rn */
	r8 += r4;  /* 0C0914CA add Rm,Rn */
	r7 = 0xA9u; UPD(0x0C0914CEu, 3);  /* 0C0914CC mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C0914CE mov Rm,Rn */
	r13 = 0xC0A9D50u; UPD(0x0C0914D2u, 2);  /* 0C0914D0 mov.l @(disp,pc),Rn */
	IF(0x0C0914D2u); r2 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C0914D4u, 1);  /* 0C0914D2 mov.b @(r0,Rm),Rn */
	r4 = R32(r8 + 0x24u); UPD(0x0C0914D6u, 1);  /* 0C0914D4 mov.l @(disp,Rm),Rn */
	r6 = r2 & 0xFF;  /* 0C0914D6 extu.b Rm,Rn */
	IF(0x0C0914D8u); { u32 t_ = r13; PR = 0x0C0914DCu; r5 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, f_0C0A9D50, 0x0C0A9D50u, 0x0C0914DCu); }  /* 0C0914D8 jsr @Rn */
L_0C0914DC: BLKS(0x0C0914DCu);
	T = (r0 & r0) == 0;  /* 0C0914DC tst Rm,Rn */
	if (T) { UPD(0x0C0914E8u, 4); goto L_0C0914E8; }  /* 0C0914DE bt */
L_0C0914E0: BLKS(0x0C0914E0u);
	r0 = 0x9Fu; UPD(0x0C0914E2u, 1);  /* 0C0914E0 mov.w @(disp,pc),Rn */
	IF(0x0C0914E2u); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0914E4u, 1);  /* 0C0914E2 mov.b @(r0,Rm),Rn */
	r6 += 0x1u;  /* 0C0914E4 add #imm,Rn */
	IF(0x0C0914E6u); W8(r0 + r8, r6); UPD(0x0C0914E8u, 2);  /* 0C0914E6 mov.b Rm,@(r0,Rn) */
L_0C0914E8: BLKS(0x0C0914E8u);
	r12 = 0xC0A0380u; UPD(0x0C0914EAu, 1);  /* 0C0914E8 mov.l @(disp,pc),Rn */
	r11 = 0x10u;  /* 0C0914EA mov #imm,Rn */
	W32(r8 + 0xCu, r11); UPD(0x0C0914EEu, 2);  /* 0C0914EC mov.l Rm,@(disp,Rn) */
	IF(0x0C0914EEu); { u32 t_ = r12; PR = 0x0C0914F2u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C0914F2u); }  /* 0C0914EE jsr @Rn */
L_0C0914F2: BLKS(0x0C0914F2u);
	r2 = 0x86u; UPD(0x0C0914F4u, 1);  /* 0C0914F2 mov.w @(disp,pc),Rn */
	r1 = 0x100u; UPD(0x0C0914F6u, 1);  /* 0C0914F4 mov.w @(disp,pc),Rn */
	{ r0 = r8; /* slot mov Rm,Rn */ UPD(0x0C091102u, 3); goto L_0C091102; }  /* 0C0914F6 bra */
}

void f_0C091500(sh3_t *c)
{
	LOCALS;
L_0C091500: BLKS(0x0C091500u);
	r13 = 0xB4u; UPD(0x0C091502u, 1);  /* 0C091500 mov.w @(disp,pc),Rn */
	r1 = R32(r14); UPD(0x0C091504u, 1);  /* 0C091502 mov.l @Rm,Rn */
	IF(0x0C091504u); MACL = r1 * r13;  /* 0C091504 mul.l Rm,Rn */
	r8 = 0xC26CD40u; UPD(0x0C091508u, 3);  /* 0C091506 mov.l @(disp,pc),Rn */
	IF(0x0C091508u); r3 = MACL;  /* 0C091508 sts macl,Rn */
	r3 += r8;  /* 0C09150A add Rm,Rn */
	r0 = R32(r3 + 0x38u); UPD(0x0C09150Eu, 3);  /* 0C09150C mov.l @(disp,Rm),Rn */
	r10 = 0x10101u; UPD(0x0C091510u, 1);  /* 0C09150E mov.l @(disp,pc),Rn */
	r9 = 0x808080u; UPD(0x0C091512u, 1);  /* 0C091510 mov.l @(disp,pc),Rn */
	r0 += r10;  /* 0C091512 add Rm,Rn */
	T = r0 == r9;  /* 0C091514 cmp/eq Rm,Rn */
	{ u32 c_ = !T; W32(r3 + 0x38u, r0); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C09156Au, 5); goto L_0C09156A; } UPD(0x0C09151Au, 1); goto L_0C09151A; }  /* 0C091516 bf/s */
L_0C09151A: BLKS(0x0C09151Au);
	r0 = 0x9Fu; UPD(0x0C09151Cu, 1);  /* 0C09151A mov.w @(disp,pc),Rn */
	r2 = 0xFFFFDBD2u; UPD(0x0C09151Eu, 1);  /* 0C09151C mov.w @(disp,pc),Rn */
	IF(0x0C09151Eu); { u32 tv_ = (r2 + 0x0C091522u); u32 t_ = PHYS(tv_); IF(0x0C091520u); r2 = (u32)(s32)(s8)R8(r0 + r3); /* slot mov.b @(r0,Rm),Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09151E braf Rn */
L_0C09156A: BLKS(0x0C09156Au);
	r13 = 0xFFFFD9E6u; UPD(0x0C09156Cu, 1);  /* 0C09156A mov.w @(disp,pc),Rn */
	IF(0x0C09156Cu); { u32 tv_ = (r13 + 0x0C091570u); u32 t_ = PHYS(tv_); r14 += 0x40u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09156C braf Rn */
}

void f_0C091530(sh3_t *c)
{
	LOCALS;
L_0C091530: BLKS(0x0C091530u);
	r7 = 0xB4u; UPD(0x0C091532u, 1);  /* 0C091530 mov.w @(disp,pc),Rn */
	r5 = 0xFFFFFFE0u;  /* 0C091532 mov #imm,Rn */
	r6 = R32(r14); UPD(0x0C091536u, 2);  /* 0C091534 mov.l @Rm,Rn */
	IF(0x0C091536u); MACL = r6 * r7;  /* 0C091536 mul.l Rm,Rn */
	r3 = 0xC26CD40u; UPD(0x0C09153Au, 3);  /* 0C091538 mov.l @(disp,pc),Rn */
	r0 = 0xA1u; UPD(0x0C09153Cu, 1);  /* 0C09153A mov.w @(disp,pc),Rn */
	IF(0x0C09153Cu); r7 = MACL;  /* 0C09153C sts macl,Rn */
	r7 += r3;  /* 0C09153E add Rm,Rn */
	IF(0x0C091540u); r4 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C091542u, 3);  /* 0C091540 mov.b @(r0,Rm),Rn */
	r4 |= r5;  /* 0C091542 or Rm,Rn */
	IF(0x0C091544u); W8(r0 + r7, r4); UPD(0x0C091546u, 2);  /* 0C091544 mov.b Rm,@(r0,Rn) */
	r1 = 0xFFFFDE88u; UPD(0x0C091548u, 1);  /* 0C091546 mov.w @(disp,pc),Rn */
	IF(0x0C091548u); { u32 tv_ = (r1 + 0x0C09154Cu); u32 t_ = PHYS(tv_); r0 += 0xFFFFFFFEu; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C091548 braf Rn */
}

void f_0C091550(sh3_t *c)
{
	LOCALS;
L_0C091550: BLKS(0x0C091550u);
	r9 = 0xB4u; UPD(0x0C091552u, 1);  /* 0C091550 mov.w @(disp,pc),Rn */
	r10 = R32(r14); UPD(0x0C091554u, 1);  /* 0C091552 mov.l @Rm,Rn */
	IF(0x0C091554u); MACL = r10 * r9;  /* 0C091554 mul.l Rm,Rn */
	r11 = 0xC26CD40u; UPD(0x0C091558u, 3);  /* 0C091556 mov.l @(disp,pc),Rn */
	IF(0x0C091558u); r9 = MACL;  /* 0C091558 sts macl,Rn */
	r12 = 0xA1u; UPD(0x0C09155Cu, 2);  /* 0C09155A mov.w @(disp,pc),Rn */
	r9 += r11;  /* 0C09155C add Rm,Rn */
	r0 = r9;  /* 0C09155E mov Rm,Rn */
	IF(0x0C091560u); r10 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C091562u, 3);  /* 0C091560 mov.b @(r0,Rm),Rn */
	r12 += 0x3Fu;  /* 0C091562 add #imm,Rn */
	r10 &= r12;  /* 0C091564 and Rm,Rn */
	T = (r10 & r10) == 0;  /* 0C091566 tst Rm,Rn */
	if (T) { UPD(0x0C091572u, 6); goto L_0C091572; }  /* 0C091568 bt */
L_0C09156A: BLKS(0x0C09156Au);
	r13 = 0xFFFFD9E6u; UPD(0x0C09156Cu, 1);  /* 0C09156A mov.w @(disp,pc),Rn */
	IF(0x0C09156Cu); { u32 tv_ = (r13 + 0x0C091570u); u32 t_ = PHYS(tv_); r14 += 0x40u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09156C braf Rn */
L_0C091572: BLKS(0x0C091572u);
	r13 = 0x9Fu; UPD(0x0C091574u, 1);  /* 0C091572 mov.w @(disp,pc),Rn */
	r13 += r9;  /* 0C091574 add Rm,Rn */
	r5 = (u32)(s32)(s8)R8(r13); UPD(0x0C091578u, 2);  /* 0C091576 mov.b @Rm,Rn */
	r4 = R32(r9 + 0x8u); UPD(0x0C09157Au, 1);  /* 0C091578 mov.l @(disp,Rm),Rn */
	r5 += 0x1u;  /* 0C09157A add #imm,Rn */
	r4 += 0x1u;  /* 0C09157C add #imm,Rn */
	r2 = 0xC0A03B0u; UPD(0x0C091580u, 3);  /* 0C09157E mov.l @(disp,pc),Rn */
	W8(r13, r5); UPD(0x0C091582u, 1);  /* 0C091580 mov.b Rm,@Rn */
	W32(r9 + 0x8u, r4); UPD(0x0C091584u, 1);  /* 0C091582 mov.l Rm,@(disp,Rn) */
	IF(0x0C091584u); { u32 t_ = r2; PR = 0x0C091588u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03B0, 0x0C0A03B0u, 0x0C091588u); }  /* 0C091584 jsr @Rn */
L_0C091588: BLKS(0x0C091588u);
	r0 = R32(r9); UPD(0x0C09158Au, 1);  /* 0C091588 mov.l @Rm,Rn */
	r8 = 0x100u; UPD(0x0C09158Cu, 1);  /* 0C09158A mov.w @(disp,pc),Rn */
	r0 |= r8;  /* 0C09158C or Rm,Rn */
	W32(r9, r0); UPD(0x0C091590u, 2);  /* 0C09158E mov.l Rm,@Rn */
	r0 = 0x98u; UPD(0x0C091592u, 1);  /* 0C091590 mov.w @(disp,pc),Rn */
	W8(r13, r10); UPD(0x0C091594u, 1);  /* 0C091592 mov.b Rm,@Rn */
	r13 = 0xFFFFD9BAu; UPD(0x0C091596u, 1);  /* 0C091594 mov.w @(disp,pc),Rn */
	IF(0x0C091596u); { u32 tv_ = (r13 + 0x0C09159Au); u32 t_ = PHYS(tv_); IF(0x0C091598u); W8(r0 + r9, r10); /* slot mov.b Rm,@(r0,Rn) */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C091596 braf Rn */
}

void f_0C091680(sh3_t *c)
{
	LOCALS;
L_0C091680: BLKS(0x0C091680u);
	r6 = R32(r14); UPD(0x0C091682u, 1);  /* 0C091680 mov.l @Rm,Rn */
	r7 = 0xB4u; UPD(0x0C091684u, 1);  /* 0C091682 mov.w @(disp,pc),Rn */
	IF(0x0C091684u); MACL = r6 * r7;  /* 0C091684 mul.l Rm,Rn */
	r3 = 0xC26CD40u; UPD(0x0C091688u, 3);  /* 0C091686 mov.l @(disp,pc),Rn */
	IF(0x0C091688u); r2 = MACL;  /* 0C091688 sts macl,Rn */
	r2 += r3;  /* 0C09168A add Rm,Rn */
	r3 = 0x99u; UPD(0x0C09168Eu, 3);  /* 0C09168C mov.w @(disp,pc),Rn */
	r3 += r2;  /* 0C09168E add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r3); UPD(0x0C091692u, 2);  /* 0C091690 mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C091692 add #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C091694 extu.b Rm,Rn */
	T = r0 == 0x8u;  /* 0C091696 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r3, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0916A0u, 6); goto L_0C0916A0; } UPD(0x0C09169Cu, 1); goto L_0C09169C; }  /* 0C091698 bf/s */
L_0C09169C: BLKS(0x0C09169Cu);
	{ r11 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C091D90u, 3); goto L_0C091D90; }  /* 0C09169C bra */
L_0C0916A0: BLKS(0x0C0916A0u);
	r12 = 0xB4u; UPD(0x0C0916A2u, 1);  /* 0C0916A0 mov.w @(disp,pc),Rn */
	r13 = 0x7u;  /* 0C0916A2 mov #imm,Rn */
	r5 = R32(r14); UPD(0x0C0916A6u, 2);  /* 0C0916A4 mov.l @Rm,Rn */
	IF(0x0C0916A6u); MACL = r5 * r12;  /* 0C0916A6 mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C0916AAu, 3);  /* 0C0916A8 mov.l @(disp,pc),Rn */
	IF(0x0C0916AAu); r4 = MACL;  /* 0C0916AA sts macl,Rn */
	r0 = 0x9Fu; UPD(0x0C0916AEu, 2);  /* 0C0916AC mov.w @(disp,pc),Rn */
	r9 += r4;  /* 0C0916AE add Rm,Rn */
	IF(0x0C0916B0u); r11 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0916B2u, 2);  /* 0C0916B0 mov.b @(r0,Rm),Rn */
	r2 = r11 & 0xFF;  /* 0C0916B2 extu.b Rm,Rn */
	T = r2 > r13;  /* 0C0916B4 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C09175Cu, 5); goto L_0C09175C; }  /* 0C0916B6 bt */
L_0C0916B8: BLKS(0x0C0916B8u);
	r0 = 0xC0916FCu;  /* 0C0916B8 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C0916BA add Rm,Rn */
	IF(0x0C0916BCu); r3 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C0916BEu, 3);  /* 0C0916BC mov.w @(r0,Rm),Rn */
	IF(0x0C0916BEu); { u32 tv_ = (r3 + 0x0C0916C2u); u32 t_ = PHYS(tv_); IF(0x0C0916C0u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0916BE braf Rn */
L_0C09175C: BLKS(0x0C09175Cu);
	r7 = 0xB4u; UPD(0x0C09175Eu, 1);  /* 0C09175C mov.w @(disp,pc),Rn */
	r0 = R32(r14); UPD(0x0C091760u, 1);  /* 0C09175E mov.l @Rm,Rn */
	IF(0x0C091760u); MACL = r0 * r7;  /* 0C091760 mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C091764u, 3);  /* 0C091762 mov.l @(disp,pc),Rn */
	IF(0x0C091764u); r11 = MACL;  /* 0C091764 sts macl,Rn */
	r12 = 0x8Cu; UPD(0x0C091768u, 2);  /* 0C091766 mov.w @(disp,pc),Rn */
	r11 += r6;  /* 0C091768 add Rm,Rn */
	r9 = 0x88u; UPD(0x0C09176Cu, 2);  /* 0C09176A mov.w @(disp,pc),Rn */
	r12 += r11;  /* 0C09176C add Rm,Rn */
	r10 = 0xC058060u; UPD(0x0C091770u, 2);  /* 0C09176E mov.l @(disp,pc),Rn */
	r9 += r11;  /* 0C091770 add Rm,Rn */
	r5 = R32(r12); UPD(0x0C091774u, 2);  /* 0C091772 mov.l @Rm,Rn */
	r8 = 0xC058030u; UPD(0x0C091776u, 1);  /* 0C091774 mov.l @(disp,pc),Rn */
	IF(0x0C091776u); { u32 t_ = r10; PR = 0x0C09177Au; r4 = (u32)(s32)(s16)R16(r9); /* slot mov.w @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C09177Au); }  /* 0C091776 jsr @Rn */
L_0C09177A: BLKS(0x0C09177Au);
	r5 = R32(r12); UPD(0x0C09177Cu, 1);  /* 0C09177A mov.l @Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r9); UPD(0x0C09177Eu, 1);  /* 0C09177C mov.w @Rm,Rn */
	IF(0x0C09177Eu); { u32 t_ = r8; PR = 0x0C091782u; W32(r11 + 0x2Cu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLD(t_, 0x0C091782u); }  /* 0C09177E jsr @Rn */
L_0C091782: BLKS(0x0C091782u);
	r5 = R32(r11 + 0x24u); UPD(0x0C091784u, 1);  /* 0C091782 mov.l @(disp,Rm),Rn */
	r3 = R32(r11 + 0x28u); UPD(0x0C091786u, 1);  /* 0C091784 mov.l @(disp,Rm),Rn */
	r13 = R32(r11 + 0x2Cu); UPD(0x0C091788u, 1);  /* 0C091786 mov.l @(disp,Rm),Rn */
	r3 += r0;  /* 0C091788 add Rm,Rn */
	r5 += r13;  /* 0C09178A add Rm,Rn */
	r4 = R32(r11); UPD(0x0C09178Eu, 3);  /* 0C09178C mov.l @Rm,Rn */
	r12 = 0x100u; UPD(0x0C091790u, 1);  /* 0C09178E mov.w @(disp,pc),Rn */
	W32(r11 + 0x30u, r0); UPD(0x0C091792u, 1);  /* 0C091790 mov.l Rm,@(disp,Rn) */
	T = (r4 & r12) == 0;  /* 0C091792 tst Rm,Rn */
	W32(r11 + 0x24u, r5); UPD(0x0C091796u, 2);  /* 0C091794 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = !T; W32(r11 + 0x28u, r3); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0917E0u, 3); goto L_0C0917E0; } UPD(0x0C09179Au, 1); goto L_0C09179A; }  /* 0C091796 bf/s */
L_0C09179A: BLKS(0x0C09179Au);
	r5 = 0xB4u; UPD(0x0C09179Cu, 1);  /* 0C09179A mov.w @(disp,pc),Rn */
	r4 = 0x7Fu;  /* 0C09179C mov #imm,Rn */
	r1 = R32(r14); UPD(0x0C0917A0u, 2);  /* 0C09179E mov.l @Rm,Rn */
	IF(0x0C0917A0u); MACL = r1 * r5;  /* 0C0917A0 mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C0917A4u, 3);  /* 0C0917A2 mov.l @(disp,pc),Rn */
	IF(0x0C0917A4u); r3 = MACL;  /* 0C0917A4 sts macl,Rn */
	r6 = 0x86u; UPD(0x0C0917A8u, 2);  /* 0C0917A6 mov.w @(disp,pc),Rn */
	r3 += r2;  /* 0C0917A8 add Rm,Rn */
	r6 += r3;  /* 0C0917AA add Rm,Rn */
	r2 = (u32)(s32)(s16)R16(r6); UPD(0x0C0917AEu, 3);  /* 0C0917AC mov.w @Rm,Rn */
	T = (s32)r2 > (s32)r4;  /* 0C0917AE cmp/gt Rm,Rn */
	if (T) { UPD(0x0C0917B8u, 4); goto L_0C0917B8; }  /* 0C0917B0 bt */
L_0C0917B2: BLKS(0x0C0917B2u);
	r9 = 0x80u; UPD(0x0C0917B4u, 1);  /* 0C0917B2 mov.w @(disp,pc),Rn */
	W16(r6, r9); UPD(0x0C0917B6u, 1);  /* 0C0917B4 mov.w Rm,@Rn */
	r2 = r9;  /* 0C0917B6 mov Rm,Rn */
	UPD(0x0C0917B8u, 1);
L_0C0917B8: BLKS(0x0C0917B8u);
	r5 = 0x180u; UPD(0x0C0917BAu, 1);  /* 0C0917B8 mov.w @(disp,pc),Rn */
	r10 = (u32)(s32)(s16)r2;  /* 0C0917BA exts.w Rm,Rn */
	r7 = (u32)(s32)(s16)r5;  /* 0C0917BC exts.w Rm,Rn */
	T = (s32)r10 > (s32)r7;  /* 0C0917BE cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0917C6u, 6); goto L_0C0917C6; }  /* 0C0917C0 bf */
L_0C0917C2: BLKS(0x0C0917C2u);
	W16(r6, r7); UPD(0x0C0917C4u, 1);  /* 0C0917C2 mov.w Rm,@Rn */
	r2 = r5;  /* 0C0917C4 mov Rm,Rn */
	UPD(0x0C0917C6u, 1);
L_0C0917C6: BLKS(0x0C0917C6u);
	r1 = (u32)(s32)(s16)r2;  /* 0C0917C6 exts.w Rm,Rn */
	r1 += 0xFFFFFF84u;  /* 0C0917C8 add #imm,Rn */
	IF(0x0C0917CAu); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C0917CA shar Rn */
	IF(0x0C0917CCu); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C0917CC shar Rn */
	r4 = 0xFFFFDC4Eu; UPD(0x0C0917D0u, 5);  /* 0C0917CE mov.w @(disp,pc),Rn */
	IF(0x0C0917D0u); { u32 tv_ = (r4 + 0x0C0917D4u); u32 t_ = PHYS(tv_); IF(0x0C0917D2u); T = r1 & 1; r1 = (u32)((s32)r1 >> 1); /* slot shar Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0917D0 braf Rn */
L_0C0917E0: BLKS(0x0C0917E0u);
	r11 = 0xC0A9E40u; UPD(0x0C0917E2u, 1);  /* 0C0917E0 mov.l @(disp,pc),Rn */
	r5 = 0x5Au;  /* 0C0917E2 mov #imm,Rn */
	r4 = R32(r14); UPD(0x0C0917E6u, 2);  /* 0C0917E4 mov.l @Rm,Rn */
	IF(0x0C0917E6u); { u32 t_ = r11; PR = 0x0C0917EAu; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C0917EAu); }  /* 0C0917E6 jsr @Rn */
L_0C0917EA: BLKS(0x0C0917EAu);
	T = (r0 & r0) == 0;  /* 0C0917EA tst Rm,Rn */
	if (!T) { UPD(0x0C091800u, 4); goto L_0C091800; }  /* 0C0917EC bf */
L_0C0917EE: BLKS(0x0C0917EEu);
	r12 = 0xC058130u; UPD(0x0C0917F0u, 1);  /* 0C0917EE mov.l @(disp,pc),Rn */
	r8 = 0xC057430u; UPD(0x0C0917F2u, 1);  /* 0C0917F0 mov.l @(disp,pc),Rn */
	IF(0x0C0917F2u); { u32 t_ = r12; PR = 0x0C0917F6u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058130, 0x0C058130u, 0x0C0917F6u); }  /* 0C0917F2 jsr @Rn */
L_0C0917F6: BLKS(0x0C0917F6u);
	r4 = R32(r14); UPD(0x0C0917F8u, 1);  /* 0C0917F6 mov.l @Rm,Rn */
	IF(0x0C0917F8u); { u32 t_ = r8; PR = 0x0C0917FCu; r5 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C0917FCu); }  /* 0C0917F8 jsr @Rn */
L_0C0917FC: BLKS(0x0C0917FCu);
	{ IF(0x0C0917FEu); ; /* slot nop */ UPD(0x0C09179Au, 3); goto L_0C09179A; }  /* 0C0917FC bra */
L_0C091800: BLKS(0x0C091800u);
	r13 = 0xC0580D0u; UPD(0x0C091802u, 1);  /* 0C091800 mov.l @(disp,pc),Rn */
	IF(0x0C091802u); { u32 t_ = r13; PR = 0x0C091806u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0580D0, 0x0C0580D0u, 0x0C091806u); }  /* 0C091802 jsr @Rn */
L_0C091806: BLKS(0x0C091806u);
	{ IF(0x0C091808u); ; /* slot nop */ UPD(0x0C0917EEu, 3); goto L_0C0917EE; }  /* 0C091806 bra */
L_0C091D90: BLKS(0x0C091D90u);
	W8(r3, r11); UPD(0x0C091D92u, 1);  /* 0C091D90 mov.b Rm,@Rn */
	r12 = 0x0u;  /* 0C091D92 mov #imm,Rn */
	W32(r14 + 0x14u, r12); UPD(0x0C091D96u, 2);  /* 0C091D94 mov.l Rm,@(disp,Rn) */
	r13 = r2;  /* 0C091D96 mov Rm,Rn */
	UPD(0x0C091D98u, 1);
L_0C091D98: BLKS(0x0C091D98u);
	r2 = 0x86u; UPD(0x0C091D9Au, 1);  /* 0C091D98 mov.w @(disp,pc),Rn */
	r0 = r13;  /* 0C091D9A mov Rm,Rn */
	IF(0x0C091D9Cu); r11 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C091D9Eu, 2);  /* 0C091D9C mov.w @(r0,Rm),Rn */
	r1 = 0x3u;  /* 0C091D9E mov #imm,Rn */
	r8 = R32(r14 + 0x14u); UPD(0x0C091DA2u, 2);  /* 0C091DA0 mov.l @(disp,Rm),Rn */
	r4 = r11;  /* 0C091DA2 mov Rm,Rn */
	IF(0x0C091DA4u); ARG0(0x481Du); { s32 s_ = (s32)r1; if (s_ >= 0) r8 <<= (s_ & 31); else if ((s_ & 31) == 0) r8 = 0; else r8 >>= ((~s_ & 31) + 1); }  /* 0C091DA4 shld Rm,Rn */
	r0 = 0xC1C2D24u; UPD(0x0C091DA8u, 3);  /* 0C091DA6 mov.l @(disp,pc),Rn */
	r7 = 0xC058060u; UPD(0x0C091DAAu, 1);  /* 0C091DA8 mov.l @(disp,pc),Rn */
	r8 += r0;  /* 0C091DAA add Rm,Rn */
	r6 = R32(r8); UPD(0x0C091DAEu, 2);  /* 0C091DAC mov.l @Rm,Rn */
	r10 = R32(r8 + 0x4u); UPD(0x0C091DB0u, 1);  /* 0C091DAE mov.l @(disp,Rm),Rn */
	r5 = r6;  /* 0C091DB0 mov Rm,Rn */
	W32(r14 + 0x18u, r6); UPD(0x0C091DB4u, 2);  /* 0C091DB2 mov.l Rm,@(disp,Rn) */
	IF(0x0C091DB4u); { u32 t_ = r7; PR = 0x0C091DB8u; W32(r14 + 0x1Cu, r10); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C091DB8u); }  /* 0C091DB4 jsr @Rn */
L_0C091DB8: BLKS(0x0C091DB8u);
	r3 = 0xC058030u; UPD(0x0C091DBAu, 1);  /* 0C091DB8 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C091DBA mov Rm,Rn */
	r5 = R32(r14 + 0x1Cu); UPD(0x0C091DBEu, 2);  /* 0C091DBC mov.l @(disp,Rm),Rn */
	IF(0x0C091DBEu); { u32 t_ = r3; PR = 0x0C091DC2u; r12 = r0; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C091DC2u); }  /* 0C091DBE jsr @Rn */
L_0C091DC2: BLKS(0x0C091DC2u);
	r12 -= r0;  /* 0C091DC2 sub Rm,Rn */
	r5 = 0x66666667u; UPD(0x0C091DC6u, 2);  /* 0C091DC4 mov.l @(disp,pc),Rn */
	IF(0x0C091DC6u); r12 <<= 2;  /* 0C091DC6 shll2 Rn */
	{ s64 r_ = (s64)(s32)r12 * (s64)(s32)r5; MACH = (u32)((u64)r_ >> 32); MACL = (u32)r_; }  /* 0C091DC8 dmuls.l Rm,Rn */
	r1 = 0xC058030u; UPD(0x0C091DCCu, 4);  /* 0C091DCA mov.l @(disp,pc),Rn */
	IF(0x0C091DCCu); r4 = MACH;  /* 0C091DCC sts mach,Rn */
	IF(0x0C091DCEu); T = r4 & 1; r4 = (u32)((s32)r4 >> 1);  /* 0C091DCE shar Rn */
	IF(0x0C091DD0u); T = r12 >> 31; r12 <<= 1;  /* 0C091DD0 shll Rn */
	{ u32 a_ = r12, t_ = a_ - r12, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r12 = r_; }  /* 0C091DD2 subc Rm,Rn */
	r4 -= r12;  /* 0C091DD4 sub Rm,Rn */
	r12 = R32(r13 + 0x24u); UPD(0x0C091DD8u, 6);  /* 0C091DD6 mov.l @(disp,Rm),Rn */
	r12 += r4;  /* 0C091DD8 add Rm,Rn */
	r4 = r11;  /* 0C091DDA mov Rm,Rn */
	IF(0x0C091DDCu); { u32 t_ = r1; PR = 0x0C091DE0u; r5 = R32(r14 + 0x18u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 4); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C091DE0u); }  /* 0C091DDC jsr @Rn */
L_0C091DE0: BLKS(0x0C091DE0u);
	r2 = 0xC058060u; UPD(0x0C091DE2u, 1);  /* 0C091DE0 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C091DE2 mov Rm,Rn */
	r9 = 0xFFFC0000u; UPD(0x0C091DE6u, 2);  /* 0C091DE4 mov.l @(disp,pc),Rn */
	r12 += r9;  /* 0C091DE6 add Rm,Rn */
	r9 = r0;  /* 0C091DE8 mov Rm,Rn */
	IF(0x0C091DEAu); { u32 t_ = r2; PR = 0x0C091DEEu; r5 = R32(r14 + 0x1Cu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 4); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C091DEEu); }  /* 0C091DEA jsr @Rn */
L_0C091DEE: BLKS(0x0C091DEEu);
	r9 += r0;  /* 0C091DEE add Rm,Rn */
	r0 = R32(r13 + 0x28u); UPD(0x0C091DF2u, 2);  /* 0C091DF0 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFECu;  /* 0C091DF2 add #imm,Rn */
	r9 += r0;  /* 0C091DF4 add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C091DF8u, 3);  /* 0C091DF6 mov.w @(disp,pc),Rn */
	IF(0x0C091DF8u); r8 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C091DFAu, 1);  /* 0C091DF8 mov.b @(r0,Rm),Rn */
	r10 = r8 & 0xFF;  /* 0C091DFA extu.b Rm,Rn */
	W32(r15, r10); UPD(0x0C091DFEu, 2);  /* 0C091DFC mov.l Rm,@Rn */
	r0 = r13;  /* 0C091DFE mov Rm,Rn */
	r6 = 0xA9u; UPD(0x0C091E02u, 2);  /* 0C091E00 mov.w @(disp,pc),Rn */
	r11 = 0xC050D70u; UPD(0x0C091E04u, 1);  /* 0C091E02 mov.l @(disp,pc),Rn */
	IF(0x0C091E04u); r7 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C091E06u, 1);  /* 0C091E04 mov.b @(r0,Rm),Rn */
	r5 = 0x10000u; UPD(0x0C091E08u, 1);  /* 0C091E06 mov.l @(disp,pc),Rn */
	r3 = r7 & 0xFF;  /* 0C091E08 extu.b Rm,Rn */
	r4 = 0x8000u; UPD(0x0C091E0Cu, 2);  /* 0C091E0A mov.l @(disp,pc),Rn */
	W32(r15 + 0x4u, r3); UPD(0x0C091E0Eu, 1);  /* 0C091E0C mov.l Rm,@(disp,Rn) */
	IF(0x0C091E0Eu); { u32 t_ = r11; PR = 0x0C091E12u; W32(r15 + 0x8u, r5); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C091E12u); }  /* 0C091E0E jsr @Rn */
L_0C091E12: BLKS(0x0C091E12u);
	r4 = 0xFFFFC000u; UPD(0x0C091E14u, 1);  /* 0C091E12 mov.w @(disp,pc),Rn */
	r6 = r12;  /* 0C091E14 mov Rm,Rn */
	r2 = 0x808080u; UPD(0x0C091E18u, 2);  /* 0C091E16 mov.l @(disp,pc),Rn */
	r4 += r0;  /* 0C091E18 add Rm,Rn */
	r12 = 0xC0ACA40u; UPD(0x0C091E1Cu, 2);  /* 0C091E1A mov.l @(disp,pc),Rn */
	r7 = r9;  /* 0C091E1C mov Rm,Rn */
	W32(r15 + 0xCu, r4); UPD(0x0C091E20u, 2);  /* 0C091E1E mov.l Rm,@(disp,Rn) */
	r5 = 0x7u;  /* 0C091E20 mov #imm,Rn */
	W32(r15 + 0x10u, r2); UPD(0x0C091E24u, 2);  /* 0C091E22 mov.l Rm,@(disp,Rn) */
	r9 = 0x5u;  /* 0C091E24 mov #imm,Rn */
	IF(0x0C091E26u); { u32 t_ = r12; PR = 0x0C091E2Au; r4 = R32(r13); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0ACA40, 0x0C0ACA40u, 0x0C091E2Au); }  /* 0C091E26 jsr @Rn */
L_0C091E2A: BLKS(0x0C091E2Au);
	r8 = R32(r14 + 0x14u); UPD(0x0C091E2Cu, 1);  /* 0C091E2A mov.l @(disp,Rm),Rn */
	r8 += 0x1u;  /* 0C091E2C add #imm,Rn */
	r0 = (u32)(s32)(s16)r8;  /* 0C091E2E exts.w Rm,Rn */
	W32(r14 + 0x14u, r0); UPD(0x0C091E32u, 3);  /* 0C091E30 mov.l Rm,@(disp,Rn) */
	r10 = R32(r14 + 0x14u); UPD(0x0C091E34u, 1);  /* 0C091E32 mov.l @(disp,Rm),Rn */
	T = (s32)r10 > (s32)r9;  /* 0C091E34 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x14u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C091D98u, 4); goto L_0C091D98; } goto L_0C091E3A; }  /* 0C091E36 bf/s */
L_0C091E3A: BLKS(0x0C091E3Au);
	{ IF(0x0C091E3Cu); ; /* slot nop */ UPD(0x0C0916A0u, 4); goto L_0C0916A0; }  /* 0C091E3A bra */
}

void f_0C091710(sh3_t *c)
{
	LOCALS;
L_0C091710: BLKS(0x0C091710u);
	r0 = 0xB4u; UPD(0x0C091712u, 1);  /* 0C091710 mov.w @(disp,pc),Rn */
	r1 = R32(r14); UPD(0x0C091714u, 1);  /* 0C091712 mov.l @Rm,Rn */
	IF(0x0C091714u); MACL = r1 * r0;  /* 0C091714 mul.l Rm,Rn */
	r8 = 0xC26CD40u; UPD(0x0C091718u, 3);  /* 0C091716 mov.l @(disp,pc),Rn */
	IF(0x0C091718u); r3 = MACL;  /* 0C091718 sts macl,Rn */
	r7 = 0x98u; UPD(0x0C09171Cu, 2);  /* 0C09171A mov.w @(disp,pc),Rn */
	r3 += r8;  /* 0C09171C add Rm,Rn */
	r7 += r3;  /* 0C09171E add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r7); UPD(0x0C091722u, 3);  /* 0C091720 mov.b @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C091724u, 1);  /* 0C091722 mov.l @(disp,Rm),Rn */
	r0 += 0x1u;  /* 0C091724 add #imm,Rn */
	r10 = 0x8000u; UPD(0x0C091728u, 2);  /* 0C091726 mov.l @(disp,pc),Rn */
	W8(r7, r0); UPD(0x0C09172Au, 1);  /* 0C091728 mov.b Rm,@Rn */
	r6 += r10;  /* 0C09172A add Rm,Rn */
	r0 &= 0x3u;  /* 0C09172C and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C09172E tst Rm,Rn */
	{ u32 c_ = !T; W32(r3 + 0x24u, r6); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C091744u, 6); goto L_0C091744; } UPD(0x0C091734u, 1); goto L_0C091734; }  /* 0C091730 bf/s */
L_0C091734: BLKS(0x0C091734u);
	r13 = 0xA9u; UPD(0x0C091736u, 1);  /* 0C091734 mov.w @(disp,pc),Rn */
	r13 += r3;  /* 0C091736 add Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r13); UPD(0x0C09173Au, 2);  /* 0C091738 mov.b @Rm,Rn */
	r2 += 0x1u;  /* 0C09173A add #imm,Rn */
	r0 = r2 & 0xFF;  /* 0C09173C extu.b Rm,Rn */
	T = r0 == 0x12u;  /* 0C09173E cmp/eq #imm,r0 */
	{ u32 c_ = T; W8(r13, r2); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C09174Cu, 6); goto L_0C09174C; } UPD(0x0C091744u, 1); goto L_0C091744; }  /* 0C091740 bt/s */
L_0C091744: BLKS(0x0C091744u);
	r13 = 0xFFFFD80Cu; UPD(0x0C091746u, 1);  /* 0C091744 mov.w @(disp,pc),Rn */
	IF(0x0C091746u); { u32 tv_ = (r13 + 0x0C09174Au); u32 t_ = PHYS(tv_); r14 += 0x40u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C091746 braf Rn */
L_0C09174C: BLKS(0x0C09174Cu);
	r11 = R32(r3); UPD(0x0C09174Eu, 1);  /* 0C09174C mov.l @Rm,Rn */
	r9 = 0x10000000u; UPD(0x0C091750u, 1);  /* 0C09174E mov.l @(disp,pc),Rn */
	r11 |= r9;  /* 0C091750 or Rm,Rn */
	W32(r3, r11); UPD(0x0C091754u, 2);  /* 0C091752 mov.l Rm,@Rn */
	r0 = 0x9Fu; UPD(0x0C091756u, 1);  /* 0C091754 mov.w @(disp,pc),Rn */
	IF(0x0C091756u); r5 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C091758u, 1);  /* 0C091756 mov.b @(r0,Rm),Rn */
	r5 += 0x1u;  /* 0C091758 add #imm,Rn */
	IF(0x0C09175Au); W8(r0 + r3, r5); UPD(0x0C09175Cu, 2);  /* 0C09175A mov.b Rm,@(r0,Rn) */
	r7 = 0xB4u; UPD(0x0C09175Eu, 1);  /* 0C09175C mov.w @(disp,pc),Rn */
	r0 = R32(r14); UPD(0x0C091760u, 1);  /* 0C09175E mov.l @Rm,Rn */
	IF(0x0C091760u); MACL = r0 * r7;  /* 0C091760 mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C091764u, 3);  /* 0C091762 mov.l @(disp,pc),Rn */
	IF(0x0C091764u); r11 = MACL;  /* 0C091764 sts macl,Rn */
	r12 = 0x8Cu; UPD(0x0C091768u, 2);  /* 0C091766 mov.w @(disp,pc),Rn */
	r11 += r6;  /* 0C091768 add Rm,Rn */
	r9 = 0x88u; UPD(0x0C09176Cu, 2);  /* 0C09176A mov.w @(disp,pc),Rn */
	r12 += r11;  /* 0C09176C add Rm,Rn */
	r10 = 0xC058060u; UPD(0x0C091770u, 2);  /* 0C09176E mov.l @(disp,pc),Rn */
	r9 += r11;  /* 0C091770 add Rm,Rn */
	r5 = R32(r12); UPD(0x0C091774u, 2);  /* 0C091772 mov.l @Rm,Rn */
	r8 = 0xC058030u; UPD(0x0C091776u, 1);  /* 0C091774 mov.l @(disp,pc),Rn */
	IF(0x0C091776u); { u32 t_ = r10; PR = 0x0C09177Au; r4 = (u32)(s32)(s16)R16(r9); /* slot mov.w @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C09177Au); }  /* 0C091776 jsr @Rn */
L_0C09177A: BLKS(0x0C09177Au);
	r5 = R32(r12); UPD(0x0C09177Cu, 1);  /* 0C09177A mov.l @Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r9); UPD(0x0C09177Eu, 1);  /* 0C09177C mov.w @Rm,Rn */
	IF(0x0C09177Eu); { u32 t_ = r8; PR = 0x0C091782u; W32(r11 + 0x2Cu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLD(t_, 0x0C091782u); }  /* 0C09177E jsr @Rn */
L_0C091782: BLKS(0x0C091782u);
	r5 = R32(r11 + 0x24u); UPD(0x0C091784u, 1);  /* 0C091782 mov.l @(disp,Rm),Rn */
	r3 = R32(r11 + 0x28u); UPD(0x0C091786u, 1);  /* 0C091784 mov.l @(disp,Rm),Rn */
	r13 = R32(r11 + 0x2Cu); UPD(0x0C091788u, 1);  /* 0C091786 mov.l @(disp,Rm),Rn */
	r3 += r0;  /* 0C091788 add Rm,Rn */
	r5 += r13;  /* 0C09178A add Rm,Rn */
	r4 = R32(r11); UPD(0x0C09178Eu, 3);  /* 0C09178C mov.l @Rm,Rn */
	r12 = 0x100u; UPD(0x0C091790u, 1);  /* 0C09178E mov.w @(disp,pc),Rn */
	W32(r11 + 0x30u, r0); UPD(0x0C091792u, 1);  /* 0C091790 mov.l Rm,@(disp,Rn) */
	T = (r4 & r12) == 0;  /* 0C091792 tst Rm,Rn */
	W32(r11 + 0x24u, r5); UPD(0x0C091796u, 2);  /* 0C091794 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = !T; W32(r11 + 0x28u, r3); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0917E0u, 3); goto L_0C0917E0; } UPD(0x0C09179Au, 1); goto L_0C09179A; }  /* 0C091796 bf/s */
L_0C09179A: BLKS(0x0C09179Au);
	r5 = 0xB4u; UPD(0x0C09179Cu, 1);  /* 0C09179A mov.w @(disp,pc),Rn */
	r4 = 0x7Fu;  /* 0C09179C mov #imm,Rn */
	r1 = R32(r14); UPD(0x0C0917A0u, 2);  /* 0C09179E mov.l @Rm,Rn */
	IF(0x0C0917A0u); MACL = r1 * r5;  /* 0C0917A0 mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C0917A4u, 3);  /* 0C0917A2 mov.l @(disp,pc),Rn */
	IF(0x0C0917A4u); r3 = MACL;  /* 0C0917A4 sts macl,Rn */
	r6 = 0x86u; UPD(0x0C0917A8u, 2);  /* 0C0917A6 mov.w @(disp,pc),Rn */
	r3 += r2;  /* 0C0917A8 add Rm,Rn */
	r6 += r3;  /* 0C0917AA add Rm,Rn */
	r2 = (u32)(s32)(s16)R16(r6); UPD(0x0C0917AEu, 3);  /* 0C0917AC mov.w @Rm,Rn */
	T = (s32)r2 > (s32)r4;  /* 0C0917AE cmp/gt Rm,Rn */
	if (T) { UPD(0x0C0917B8u, 4); goto L_0C0917B8; }  /* 0C0917B0 bt */
L_0C0917B2: BLKS(0x0C0917B2u);
	r9 = 0x80u; UPD(0x0C0917B4u, 1);  /* 0C0917B2 mov.w @(disp,pc),Rn */
	W16(r6, r9); UPD(0x0C0917B6u, 1);  /* 0C0917B4 mov.w Rm,@Rn */
	r2 = r9;  /* 0C0917B6 mov Rm,Rn */
	UPD(0x0C0917B8u, 1);
L_0C0917B8: BLKS(0x0C0917B8u);
	r5 = 0x180u; UPD(0x0C0917BAu, 1);  /* 0C0917B8 mov.w @(disp,pc),Rn */
	r10 = (u32)(s32)(s16)r2;  /* 0C0917BA exts.w Rm,Rn */
	r7 = (u32)(s32)(s16)r5;  /* 0C0917BC exts.w Rm,Rn */
	T = (s32)r10 > (s32)r7;  /* 0C0917BE cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0917C6u, 6); goto L_0C0917C6; }  /* 0C0917C0 bf */
L_0C0917C2: BLKS(0x0C0917C2u);
	W16(r6, r7); UPD(0x0C0917C4u, 1);  /* 0C0917C2 mov.w Rm,@Rn */
	r2 = r5;  /* 0C0917C4 mov Rm,Rn */
	UPD(0x0C0917C6u, 1);
L_0C0917C6: BLKS(0x0C0917C6u);
	r1 = (u32)(s32)(s16)r2;  /* 0C0917C6 exts.w Rm,Rn */
	r1 += 0xFFFFFF84u;  /* 0C0917C8 add #imm,Rn */
	IF(0x0C0917CAu); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C0917CA shar Rn */
	IF(0x0C0917CCu); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C0917CC shar Rn */
	r4 = 0xFFFFDC4Eu; UPD(0x0C0917D0u, 5);  /* 0C0917CE mov.w @(disp,pc),Rn */
	IF(0x0C0917D0u); { u32 tv_ = (r4 + 0x0C0917D4u); u32 t_ = PHYS(tv_); IF(0x0C0917D2u); T = r1 & 1; r1 = (u32)((s32)r1 >> 1); /* slot shar Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0917D0 braf Rn */
L_0C0917E0: BLKS(0x0C0917E0u);
	r11 = 0xC0A9E40u; UPD(0x0C0917E2u, 1);  /* 0C0917E0 mov.l @(disp,pc),Rn */
	r5 = 0x5Au;  /* 0C0917E2 mov #imm,Rn */
	r4 = R32(r14); UPD(0x0C0917E6u, 2);  /* 0C0917E4 mov.l @Rm,Rn */
	IF(0x0C0917E6u); { u32 t_ = r11; PR = 0x0C0917EAu; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C0917EAu); }  /* 0C0917E6 jsr @Rn */
L_0C0917EA: BLKS(0x0C0917EAu);
	T = (r0 & r0) == 0;  /* 0C0917EA tst Rm,Rn */
	if (!T) { UPD(0x0C091800u, 4); goto L_0C091800; }  /* 0C0917EC bf */
L_0C0917EE: BLKS(0x0C0917EEu);
	r12 = 0xC058130u; UPD(0x0C0917F0u, 1);  /* 0C0917EE mov.l @(disp,pc),Rn */
	r8 = 0xC057430u; UPD(0x0C0917F2u, 1);  /* 0C0917F0 mov.l @(disp,pc),Rn */
	IF(0x0C0917F2u); { u32 t_ = r12; PR = 0x0C0917F6u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058130, 0x0C058130u, 0x0C0917F6u); }  /* 0C0917F2 jsr @Rn */
L_0C0917F6: BLKS(0x0C0917F6u);
	r4 = R32(r14); UPD(0x0C0917F8u, 1);  /* 0C0917F6 mov.l @Rm,Rn */
	IF(0x0C0917F8u); { u32 t_ = r8; PR = 0x0C0917FCu; r5 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C0917FCu); }  /* 0C0917F8 jsr @Rn */
L_0C0917FC: BLKS(0x0C0917FCu);
	{ IF(0x0C0917FEu); ; /* slot nop */ UPD(0x0C09179Au, 3); goto L_0C09179A; }  /* 0C0917FC bra */
L_0C091800: BLKS(0x0C091800u);
	r13 = 0xC0580D0u; UPD(0x0C091802u, 1);  /* 0C091800 mov.l @(disp,pc),Rn */
	IF(0x0C091802u); { u32 t_ = r13; PR = 0x0C091806u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0580D0, 0x0C0580D0u, 0x0C091806u); }  /* 0C091802 jsr @Rn */
L_0C091806: BLKS(0x0C091806u);
	{ IF(0x0C091808u); ; /* slot nop */ UPD(0x0C0917EEu, 3); goto L_0C0917EE; }  /* 0C091806 bra */
}

void f_0C091810(sh3_t *c)
{
	LOCALS;
	goto L_0C091810;
L_0C09175C: BLKS(0x0C09175Cu);
	r7 = 0xB4u; UPD(0x0C09175Eu, 1);  /* 0C09175C mov.w @(disp,pc),Rn */
	r0 = R32(r14); UPD(0x0C091760u, 1);  /* 0C09175E mov.l @Rm,Rn */
	IF(0x0C091760u); MACL = r0 * r7;  /* 0C091760 mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C091764u, 3);  /* 0C091762 mov.l @(disp,pc),Rn */
	IF(0x0C091764u); r11 = MACL;  /* 0C091764 sts macl,Rn */
	r12 = 0x8Cu; UPD(0x0C091768u, 2);  /* 0C091766 mov.w @(disp,pc),Rn */
	r11 += r6;  /* 0C091768 add Rm,Rn */
	r9 = 0x88u; UPD(0x0C09176Cu, 2);  /* 0C09176A mov.w @(disp,pc),Rn */
	r12 += r11;  /* 0C09176C add Rm,Rn */
	r10 = 0xC058060u; UPD(0x0C091770u, 2);  /* 0C09176E mov.l @(disp,pc),Rn */
	r9 += r11;  /* 0C091770 add Rm,Rn */
	r5 = R32(r12); UPD(0x0C091774u, 2);  /* 0C091772 mov.l @Rm,Rn */
	r8 = 0xC058030u; UPD(0x0C091776u, 1);  /* 0C091774 mov.l @(disp,pc),Rn */
	IF(0x0C091776u); { u32 t_ = r10; PR = 0x0C09177Au; r4 = (u32)(s32)(s16)R16(r9); /* slot mov.w @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C09177Au); }  /* 0C091776 jsr @Rn */
L_0C09177A: BLKS(0x0C09177Au);
	r5 = R32(r12); UPD(0x0C09177Cu, 1);  /* 0C09177A mov.l @Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r9); UPD(0x0C09177Eu, 1);  /* 0C09177C mov.w @Rm,Rn */
	IF(0x0C09177Eu); { u32 t_ = r8; PR = 0x0C091782u; W32(r11 + 0x2Cu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLD(t_, 0x0C091782u); }  /* 0C09177E jsr @Rn */
L_0C091782: BLKS(0x0C091782u);
	r5 = R32(r11 + 0x24u); UPD(0x0C091784u, 1);  /* 0C091782 mov.l @(disp,Rm),Rn */
	r3 = R32(r11 + 0x28u); UPD(0x0C091786u, 1);  /* 0C091784 mov.l @(disp,Rm),Rn */
	r13 = R32(r11 + 0x2Cu); UPD(0x0C091788u, 1);  /* 0C091786 mov.l @(disp,Rm),Rn */
	r3 += r0;  /* 0C091788 add Rm,Rn */
	r5 += r13;  /* 0C09178A add Rm,Rn */
	r4 = R32(r11); UPD(0x0C09178Eu, 3);  /* 0C09178C mov.l @Rm,Rn */
	r12 = 0x100u; UPD(0x0C091790u, 1);  /* 0C09178E mov.w @(disp,pc),Rn */
	W32(r11 + 0x30u, r0); UPD(0x0C091792u, 1);  /* 0C091790 mov.l Rm,@(disp,Rn) */
	T = (r4 & r12) == 0;  /* 0C091792 tst Rm,Rn */
	W32(r11 + 0x24u, r5); UPD(0x0C091796u, 2);  /* 0C091794 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = !T; W32(r11 + 0x28u, r3); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0917E0u, 3); goto L_0C0917E0; } UPD(0x0C09179Au, 1); goto L_0C09179A; }  /* 0C091796 bf/s */
L_0C09179A: BLKS(0x0C09179Au);
	r5 = 0xB4u; UPD(0x0C09179Cu, 1);  /* 0C09179A mov.w @(disp,pc),Rn */
	r4 = 0x7Fu;  /* 0C09179C mov #imm,Rn */
	r1 = R32(r14); UPD(0x0C0917A0u, 2);  /* 0C09179E mov.l @Rm,Rn */
	IF(0x0C0917A0u); MACL = r1 * r5;  /* 0C0917A0 mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C0917A4u, 3);  /* 0C0917A2 mov.l @(disp,pc),Rn */
	IF(0x0C0917A4u); r3 = MACL;  /* 0C0917A4 sts macl,Rn */
	r6 = 0x86u; UPD(0x0C0917A8u, 2);  /* 0C0917A6 mov.w @(disp,pc),Rn */
	r3 += r2;  /* 0C0917A8 add Rm,Rn */
	r6 += r3;  /* 0C0917AA add Rm,Rn */
	r2 = (u32)(s32)(s16)R16(r6); UPD(0x0C0917AEu, 3);  /* 0C0917AC mov.w @Rm,Rn */
	T = (s32)r2 > (s32)r4;  /* 0C0917AE cmp/gt Rm,Rn */
	if (T) { UPD(0x0C0917B8u, 4); goto L_0C0917B8; }  /* 0C0917B0 bt */
L_0C0917B2: BLKS(0x0C0917B2u);
	r9 = 0x80u; UPD(0x0C0917B4u, 1);  /* 0C0917B2 mov.w @(disp,pc),Rn */
	W16(r6, r9); UPD(0x0C0917B6u, 1);  /* 0C0917B4 mov.w Rm,@Rn */
	r2 = r9;  /* 0C0917B6 mov Rm,Rn */
	UPD(0x0C0917B8u, 1);
L_0C0917B8: BLKS(0x0C0917B8u);
	r5 = 0x180u; UPD(0x0C0917BAu, 1);  /* 0C0917B8 mov.w @(disp,pc),Rn */
	r10 = (u32)(s32)(s16)r2;  /* 0C0917BA exts.w Rm,Rn */
	r7 = (u32)(s32)(s16)r5;  /* 0C0917BC exts.w Rm,Rn */
	T = (s32)r10 > (s32)r7;  /* 0C0917BE cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0917C6u, 6); goto L_0C0917C6; }  /* 0C0917C0 bf */
L_0C0917C2: BLKS(0x0C0917C2u);
	W16(r6, r7); UPD(0x0C0917C4u, 1);  /* 0C0917C2 mov.w Rm,@Rn */
	r2 = r5;  /* 0C0917C4 mov Rm,Rn */
	UPD(0x0C0917C6u, 1);
L_0C0917C6: BLKS(0x0C0917C6u);
	r1 = (u32)(s32)(s16)r2;  /* 0C0917C6 exts.w Rm,Rn */
	r1 += 0xFFFFFF84u;  /* 0C0917C8 add #imm,Rn */
	IF(0x0C0917CAu); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C0917CA shar Rn */
	IF(0x0C0917CCu); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C0917CC shar Rn */
	r4 = 0xFFFFDC4Eu; UPD(0x0C0917D0u, 5);  /* 0C0917CE mov.w @(disp,pc),Rn */
	IF(0x0C0917D0u); { u32 tv_ = (r4 + 0x0C0917D4u); u32 t_ = PHYS(tv_); IF(0x0C0917D2u); T = r1 & 1; r1 = (u32)((s32)r1 >> 1); /* slot shar Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0917D0 braf Rn */
L_0C0917E0: BLKS(0x0C0917E0u);
	r11 = 0xC0A9E40u; UPD(0x0C0917E2u, 1);  /* 0C0917E0 mov.l @(disp,pc),Rn */
	r5 = 0x5Au;  /* 0C0917E2 mov #imm,Rn */
	r4 = R32(r14); UPD(0x0C0917E6u, 2);  /* 0C0917E4 mov.l @Rm,Rn */
	IF(0x0C0917E6u); { u32 t_ = r11; PR = 0x0C0917EAu; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C0917EAu); }  /* 0C0917E6 jsr @Rn */
L_0C0917EA: BLKS(0x0C0917EAu);
	T = (r0 & r0) == 0;  /* 0C0917EA tst Rm,Rn */
	if (!T) { UPD(0x0C091800u, 4); goto L_0C091800; }  /* 0C0917EC bf */
L_0C0917EE: BLKS(0x0C0917EEu);
	r12 = 0xC058130u; UPD(0x0C0917F0u, 1);  /* 0C0917EE mov.l @(disp,pc),Rn */
	r8 = 0xC057430u; UPD(0x0C0917F2u, 1);  /* 0C0917F0 mov.l @(disp,pc),Rn */
	IF(0x0C0917F2u); { u32 t_ = r12; PR = 0x0C0917F6u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058130, 0x0C058130u, 0x0C0917F6u); }  /* 0C0917F2 jsr @Rn */
L_0C0917F6: BLKS(0x0C0917F6u);
	r4 = R32(r14); UPD(0x0C0917F8u, 1);  /* 0C0917F6 mov.l @Rm,Rn */
	IF(0x0C0917F8u); { u32 t_ = r8; PR = 0x0C0917FCu; r5 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C0917FCu); }  /* 0C0917F8 jsr @Rn */
L_0C0917FC: BLKS(0x0C0917FCu);
	{ IF(0x0C0917FEu); ; /* slot nop */ UPD(0x0C09179Au, 3); goto L_0C09179A; }  /* 0C0917FC bra */
L_0C091800: BLKS(0x0C091800u);
	r13 = 0xC0580D0u; UPD(0x0C091802u, 1);  /* 0C091800 mov.l @(disp,pc),Rn */
	IF(0x0C091802u); { u32 t_ = r13; PR = 0x0C091806u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0580D0, 0x0C0580D0u, 0x0C091806u); }  /* 0C091802 jsr @Rn */
L_0C091806: BLKS(0x0C091806u);
	{ IF(0x0C091808u); ; /* slot nop */ UPD(0x0C0917EEu, 3); goto L_0C0917EE; }  /* 0C091806 bra */
L_0C091810: BLKS(0x0C091810u);
	r10 = 0xC0A03F0u; UPD(0x0C091812u, 1);  /* 0C091810 mov.l @(disp,pc),Rn */
	r8 = 0xB4u; UPD(0x0C091814u, 1);  /* 0C091812 mov.w @(disp,pc),Rn */
	IF(0x0C091814u); { u32 t_ = r10; PR = 0x0C091818u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C091818u); }  /* 0C091814 jsr @Rn */
L_0C091818: BLKS(0x0C091818u);
	IF(0x0C091818u); MACL = r0 * r8;  /* 0C091818 mul.l Rm,Rn */
	r12 = r0;  /* 0C09181A mov Rm,Rn */
	r10 = 0xC26CD40u; UPD(0x0C09181Eu, 4);  /* 0C09181C mov.l @(disp,pc),Rn */
	IF(0x0C09181Eu); r0 = MACL;  /* 0C09181E sts macl,Rn */
	IF(0x0C091820u); r0 = R32(r0 + r10); UPD(0x0C091822u, 2);  /* 0C091820 mov.l @(r0,Rm),Rn */
	IF(0x0C091822u); T = r12 >> 31; r12 = (r12 << 1) | T;  /* 0C091822 rotl Rn */
	IF(0x0C091824u); r0 >>= 8;  /* 0C091824 shlr8 Rn */
	IF(0x0C091826u); r4 = T;  /* 0C091826 movt Rn */
	r0 &= 0x1u;  /* 0C091828 and #imm,r0 */
	r0 |= r4;  /* 0C09182A or Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C09182C tst Rm,Rn */
	{ u32 c_ = T; r6 = R32(r14); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C0918D0u, 9); goto L_0C0918D0; } UPD(0x0C091832u, 1); goto L_0C091832; }  /* 0C09182E bt/s */
L_0C091832: BLKS(0x0C091832u);
	IF(0x0C091832u); MACL = r6 * r8;  /* 0C091832 mul.l Rm,Rn */
	r7 = 0xFFFFFEFFu; UPD(0x0C091836u, 3);  /* 0C091834 mov.w @(disp,pc),Rn */
	IF(0x0C091836u); r3 = MACL;  /* 0C091836 sts macl,Rn */
	r3 += r10;  /* 0C091838 add Rm,Rn */
	r5 = R32(r3); UPD(0x0C09183Cu, 3);  /* 0C09183A mov.l @Rm,Rn */
	r6 = 0x86u; UPD(0x0C09183Eu, 1);  /* 0C09183C mov.w @(disp,pc),Rn */
	r5 &= r7;  /* 0C09183E and Rm,Rn */
	W32(r3, r5); UPD(0x0C091842u, 2);  /* 0C091840 mov.l Rm,@Rn */
	r6 += r3;  /* 0C091842 add Rm,Rn */
	r2 = (u32)(s32)(s16)R16(r6); UPD(0x0C091846u, 2);  /* 0C091844 mov.w @Rm,Rn */
	r5 = 0x100u; UPD(0x0C091848u, 1);  /* 0C091846 mov.w @(disp,pc),Rn */
	r7 = (u32)(s32)(s16)r2;  /* 0C091848 exts.w Rm,Rn */
	T = (s32)r7 > (s32)r5;  /* 0C09184A cmp/gt Rm,Rn */
	{ u32 c_ = !T; r1 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C091860u, 5); goto L_0C091860; } goto L_0C091850; }  /* 0C09184C bf/s */
L_0C091850: BLKS(0x0C091850u);
	r1 += 0xFFFFFFFFu;  /* 0C091850 add #imm,Rn */
	UPD(0x0C091852u, 2);
L_0C091852: BLKS(0x0C091852u);
	{ W16(r6, r1); /* slot mov.w Rm,@Rn */ UPD(0x0C09175Cu, 3); goto L_0C09175C; }  /* 0C091852 bra */
L_0C091860: BLKS(0x0C091860u);
	r8 = 0xFFu; UPD(0x0C091862u, 1);  /* 0C091860 mov.w @(disp,pc),Rn */
	T = (s32)r7 > (s32)r8;  /* 0C091862 cmp/gt Rm,Rn */
	{ u32 c_ = T; r0 = r3; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C091870u, 4); goto L_0C091870; } goto L_0C091868; }  /* 0C091864 bt/s */
L_0C091868: BLKS(0x0C091868u);
	r1 = r2;  /* 0C091868 mov Rm,Rn */
	{ r1 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C091852u, 5); goto L_0C091852; }  /* 0C09186A bra */
L_0C091870: BLKS(0x0C091870u);
	r11 = R32(r3 + 0x24u); UPD(0x0C091872u, 1);  /* 0C091870 mov.l @(disp,Rm),Rn */
	r0 += 0x5Cu;  /* 0C091872 add #imm,Rn */
	W32(r0, r11); UPD(0x0C091876u, 2);  /* 0C091874 mov.l Rm,@Rn */
	r2 = 0x4u;  /* 0C091876 mov #imm,Rn */
	r13 = 0xFF000000u; UPD(0x0C09187Au, 2);  /* 0C091878 mov.l @(disp,pc),Rn */
	r0 += 0x4u;  /* 0C09187A add #imm,Rn */
	W32(r0, r13); UPD(0x0C09187Eu, 2);  /* 0C09187C mov.l Rm,@Rn */
	r0 = 0x9Fu; UPD(0x0C091880u, 1);  /* 0C09187E mov.w @(disp,pc),Rn */
	IF(0x0C091880u); W8(r0 + r3, r2); UPD(0x0C091882u, 1);  /* 0C091880 mov.b Rm,@(r0,Rn) */
	r0 += 0xFFFFFFE9u;  /* 0C091882 add #imm,Rn */
	{ IF(0x0C091886u); W16(r0 + r3, r5); /* slot mov.w Rm,@(r0,Rn) */ UPD(0x0C09175Cu, 4); goto L_0C09175C; }  /* 0C091884 bra */
L_0C0918D0: BLKS(0x0C0918D0u);
	r11 = 0xC058090u; UPD(0x0C0918D2u, 1);  /* 0C0918D0 mov.l @(disp,pc),Rn */
	IF(0x0C0918D2u); { u32 t_ = r11; PR = 0x0C0918D6u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058090, 0x0C058090u, 0x0C0918D6u); }  /* 0C0918D2 jsr @Rn */
L_0C0918D6: BLKS(0x0C0918D6u);
	r9 = R32(r14); UPD(0x0C0918D8u, 1);  /* 0C0918D6 mov.l @Rm,Rn */
	r13 = (u32)(s32)(s16)r0;  /* 0C0918D8 exts.w Rm,Rn */
	IF(0x0C0918DAu); MACL = r9 * r8;  /* 0C0918DA mul.l Rm,Rn */
	r0 = 0xC283794u; UPD(0x0C0918DEu, 4);  /* 0C0918DC mov.l @(disp,pc),Rn */
	r8 = 0x280u; UPD(0x0C0918E0u, 1);  /* 0C0918DE mov.w @(disp,pc),Rn */
	IF(0x0C0918E0u); r9 = MACL;  /* 0C0918E0 sts macl,Rn */
	IF(0x0C0918E2u); MACL = r13 * r8;  /* 0C0918E2 mul.l Rm,Rn */
	r9 += r10;  /* 0C0918E4 add Rm,Rn */
	r10 = 0xC057390u; UPD(0x0C0918E8u, 5);  /* 0C0918E6 mov.l @(disp,pc),Rn */
	IF(0x0C0918E8u); r8 = MACL;  /* 0C0918E8 sts macl,Rn */
	r8 += r0;  /* 0C0918EA add Rm,Rn */
	r5 = R32(r9 + 0x28u); UPD(0x0C0918EEu, 3);  /* 0C0918EC mov.l @(disp,Rm),Rn */
	r6 = R32(r8 + 0x10u); UPD(0x0C0918F0u, 1);  /* 0C0918EE mov.l @(disp,Rm),Rn */
	r7 = R32(r8 + 0x14u); UPD(0x0C0918F2u, 1);  /* 0C0918F0 mov.l @(disp,Rm),Rn */
	IF(0x0C0918F2u); { u32 t_ = r10; PR = 0x0C0918F6u; r4 = R32(r9 + 0x24u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C057390, 0x0C057390u, 0x0C0918F6u); }  /* 0C0918F2 jsr @Rn */
L_0C0918F6: BLKS(0x0C0918F6u);
	r10 = 0xC050D70u; UPD(0x0C0918F8u, 1);  /* 0C0918F6 mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s16)r0;  /* 0C0918F8 exts.w Rm,Rn */
	r4 = 0x10u;  /* 0C0918FA mov #imm,Rn */
	IF(0x0C0918FCu); { u32 t_ = r10; PR = 0x0C091900u; W32(r14 + 0x4u, r1); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 4); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C091900u); }  /* 0C0918FC jsr @Rn */
L_0C091900: BLKS(0x0C091900u);
	r2 = 0x2u;  /* 0C091900 mov #imm,Rn */
	T = (s32)r2 >= (s32)r0;  /* 0C091902 cmp/ge Rm,Rn */
	r6 = 0x86u; UPD(0x0C091906u, 3);  /* 0C091904 mov.w @(disp,pc),Rn */
	r0 = r9;  /* 0C091906 mov Rm,Rn */
	IF(0x0C091908u); r12 = (u32)(s32)(s16)R16(r0 + r6); UPD(0x0C09190Au, 2);  /* 0C091908 mov.w @(r0,Rm),Rn */
	IF(0x0C09190Au); r4 = T;  /* 0C09190A movt Rn */
	r7 = R32(r14 + 0x4u); UPD(0x0C09190Eu, 2);  /* 0C09190C mov.l @(disp,Rm),Rn */
	r5 = 0xEu;  /* 0C09190E mov #imm,Rn */
	r12 -= r7;  /* 0C091910 sub Rm,Rn */
	r12 += 0x7u;  /* 0C091912 add #imm,Rn */
	T = r5 >= r12;  /* 0C091914 cmp/hs Rm,Rn */
	IF(0x0C091916u); r3 = T;  /* 0C091916 movt Rn */
	r4 &= r3;  /* 0C091918 and Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C09191A tst Rm,Rn */
	if (T) { UPD(0x0C091970u, 10); goto L_0C091970; }  /* 0C09191C bt */
L_0C09191E: BLKS(0x0C09191Eu);
	r13 = R32(r8 + 0x10u); UPD(0x0C091920u, 1);  /* 0C09191E mov.l @(disp,Rm),Rn */
	r7 = r9;  /* 0C091920 mov Rm,Rn */
	r7 += 0x5Cu;  /* 0C091922 add #imm,Rn */
	W32(r7, r13); UPD(0x0C091926u, 3);  /* 0C091924 mov.l Rm,@Rn */
	r3 = 0x4u;  /* 0C091926 mov #imm,Rn */
	r10 = R32(r8 + 0x14u); UPD(0x0C09192Au, 2);  /* 0C091928 mov.l @(disp,Rm),Rn */
	r7 += 0x4u;  /* 0C09192A add #imm,Rn */
	W32(r7, r10); UPD(0x0C09192Eu, 2);  /* 0C09192C mov.l Rm,@Rn */
	r2 = R32(r9 + 0x24u); UPD(0x0C091930u, 1);  /* 0C09192E mov.l @(disp,Rm),Rn */
	r7 += 0x4u;  /* 0C091930 add #imm,Rn */
	W32(r7, r2); UPD(0x0C091934u, 2);  /* 0C091932 mov.l Rm,@Rn */
	r12 = R32(r9); UPD(0x0C091936u, 1);  /* 0C091934 mov.l @Rm,Rn */
	r7 += 0x4u;  /* 0C091936 add #imm,Rn */
	r5 = 0xFFFFFEFFu; UPD(0x0C09193Au, 2);  /* 0C091938 mov.w @(disp,pc),Rn */
	r6 = R32(r9 + 0x28u); UPD(0x0C09193Cu, 1);  /* 0C09193A mov.l @(disp,Rm),Rn */
	r12 &= r5;  /* 0C09193C and Rm,Rn */
	r4 = 0x9Fu; UPD(0x0C091940u, 2);  /* 0C09193E mov.w @(disp,pc),Rn */
	W32(r7, r6); UPD(0x0C091942u, 1);  /* 0C091940 mov.l Rm,@Rn */
	W32(r9, r12); UPD(0x0C091944u, 1);  /* 0C091942 mov.l Rm,@Rn */
	IF(0x0C091944u); W8(r0 + r4, r3); UPD(0x0C091946u, 1);  /* 0C091944 mov.b Rm,@(r0,Rn) */
L_0C091946: BLKS(0x0C091946u);
	r5 = R32(r14); UPD(0x0C091948u, 1);  /* 0C091946 mov.l @Rm,Rn */
	r12 = 0xB4u; UPD(0x0C09194Au, 1);  /* 0C091948 mov.w @(disp,pc),Rn */
	IF(0x0C09194Au); MACL = r5 * r12;  /* 0C09194A mul.l Rm,Rn */
	r1 = 0xC26CD40u; UPD(0x0C09194Eu, 3);  /* 0C09194C mov.l @(disp,pc),Rn */
	IF(0x0C09194Eu); r9 = MACL;  /* 0C09194E sts macl,Rn */
	r9 += r1;  /* 0C091950 add Rm,Rn */
	r8 = 0x88u; UPD(0x0C091954u, 3);  /* 0C091952 mov.w @(disp,pc),Rn */
	r0 = r9;  /* 0C091954 mov Rm,Rn */
	r4 = R32(r9 + 0x24u); UPD(0x0C091958u, 2);  /* 0C091956 mov.l @(disp,Rm),Rn */
	r8 += r9;  /* 0C091958 add Rm,Rn */
	r5 = R32(r9 + 0x28u); UPD(0x0C09195Cu, 2);  /* 0C09195A mov.l @(disp,Rm),Rn */
	r0 += 0x60u;  /* 0C09195C add #imm,Rn */
	r9 += 0x5Cu;  /* 0C09195E add #imm,Rn */
	r6 = R32(r9); UPD(0x0C091962u, 3);  /* 0C091960 mov.l @Rm,Rn */
	r7 = R32(r0); UPD(0x0C091964u, 1);  /* 0C091962 mov.l @Rm,Rn */
	r9 = 0xC057390u; UPD(0x0C091966u, 1);  /* 0C091964 mov.l @(disp,pc),Rn */
	IF(0x0C091966u); { u32 t_ = r9; PR = 0x0C09196Au; IF(0x0C091968u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C057390, 0x0C057390u, 0x0C09196Au); }  /* 0C091966 jsr @Rn */
L_0C09196A: BLKS(0x0C09196Au);
	{ W16(r8, r0); /* slot mov.w Rm,@Rn */ UPD(0x0C09175Cu, 3); goto L_0C09175C; }  /* 0C09196A bra */
L_0C091970: BLKS(0x0C091970u);
	IF(0x0C091970u); { u32 t_ = r10; PR = 0x0C091974u; r4 = 0x40u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C091974u); }  /* 0C091970 jsr @Rn */
L_0C091974: BLKS(0x0C091974u);
	r3 = 0xC0u; UPD(0x0C091976u, 1);  /* 0C091974 mov.w @(disp,pc),Rn */
	r11 = r9;  /* 0C091976 mov Rm,Rn */
	r0 += r3;  /* 0C091978 add Rm,Rn */
	r11 += 0x5Cu;  /* 0C09197A add #imm,Rn */
	IF(0x0C09197Cu); r0 <<= 16;  /* 0C09197C shll16 Rn */
	r4 = 0x80u; UPD(0x0C091980u, 5);  /* 0C09197E mov.w @(disp,pc),Rn */
	IF(0x0C091980u); { u32 t_ = r10; PR = 0x0C091984u; W32(r11, r0); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLD(t_, 0x0C091984u); }  /* 0C091980 jsr @Rn */
L_0C091984: BLKS(0x0C091984u);
	r4 = 0x1C0u; UPD(0x0C091986u, 1);  /* 0C091984 mov.w @(disp,pc),Rn */
	r11 += 0x4u;  /* 0C091986 add #imm,Rn */
	r0 += r4;  /* 0C091988 add Rm,Rn */
	IF(0x0C09198Au); r0 <<= 16;  /* 0C09198A shll16 Rn */
	W32(r11, r0); UPD(0x0C09198Eu, 4);  /* 0C09198C mov.l Rm,@Rn */
	r0 = 0x9Fu; UPD(0x0C091990u, 1);  /* 0C09198E mov.w @(disp,pc),Rn */
	IF(0x0C091990u); r8 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C091992u, 1);  /* 0C091990 mov.b @(r0,Rm),Rn */
	r8 += 0x1u;  /* 0C091992 add #imm,Rn */
	{ IF(0x0C091996u); W8(r0 + r9, r8); /* slot mov.b Rm,@(r0,Rn) */ UPD(0x0C091946u, 4); goto L_0C091946; }  /* 0C091994 bra */
}

void f_0C0919A0(sh3_t *c)
{
	LOCALS;
	goto L_0C0919A0;
L_0C09175C: BLKS(0x0C09175Cu);
	r7 = 0xB4u; UPD(0x0C09175Eu, 1);  /* 0C09175C mov.w @(disp,pc),Rn */
	r0 = R32(r14); UPD(0x0C091760u, 1);  /* 0C09175E mov.l @Rm,Rn */
	IF(0x0C091760u); MACL = r0 * r7;  /* 0C091760 mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C091764u, 3);  /* 0C091762 mov.l @(disp,pc),Rn */
	IF(0x0C091764u); r11 = MACL;  /* 0C091764 sts macl,Rn */
	r12 = 0x8Cu; UPD(0x0C091768u, 2);  /* 0C091766 mov.w @(disp,pc),Rn */
	r11 += r6;  /* 0C091768 add Rm,Rn */
	r9 = 0x88u; UPD(0x0C09176Cu, 2);  /* 0C09176A mov.w @(disp,pc),Rn */
	r12 += r11;  /* 0C09176C add Rm,Rn */
	r10 = 0xC058060u; UPD(0x0C091770u, 2);  /* 0C09176E mov.l @(disp,pc),Rn */
	r9 += r11;  /* 0C091770 add Rm,Rn */
	r5 = R32(r12); UPD(0x0C091774u, 2);  /* 0C091772 mov.l @Rm,Rn */
	r8 = 0xC058030u; UPD(0x0C091776u, 1);  /* 0C091774 mov.l @(disp,pc),Rn */
	IF(0x0C091776u); { u32 t_ = r10; PR = 0x0C09177Au; r4 = (u32)(s32)(s16)R16(r9); /* slot mov.w @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C09177Au); }  /* 0C091776 jsr @Rn */
L_0C09177A: BLKS(0x0C09177Au);
	r5 = R32(r12); UPD(0x0C09177Cu, 1);  /* 0C09177A mov.l @Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r9); UPD(0x0C09177Eu, 1);  /* 0C09177C mov.w @Rm,Rn */
	IF(0x0C09177Eu); { u32 t_ = r8; PR = 0x0C091782u; W32(r11 + 0x2Cu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLD(t_, 0x0C091782u); }  /* 0C09177E jsr @Rn */
L_0C091782: BLKS(0x0C091782u);
	r5 = R32(r11 + 0x24u); UPD(0x0C091784u, 1);  /* 0C091782 mov.l @(disp,Rm),Rn */
	r3 = R32(r11 + 0x28u); UPD(0x0C091786u, 1);  /* 0C091784 mov.l @(disp,Rm),Rn */
	r13 = R32(r11 + 0x2Cu); UPD(0x0C091788u, 1);  /* 0C091786 mov.l @(disp,Rm),Rn */
	r3 += r0;  /* 0C091788 add Rm,Rn */
	r5 += r13;  /* 0C09178A add Rm,Rn */
	r4 = R32(r11); UPD(0x0C09178Eu, 3);  /* 0C09178C mov.l @Rm,Rn */
	r12 = 0x100u; UPD(0x0C091790u, 1);  /* 0C09178E mov.w @(disp,pc),Rn */
	W32(r11 + 0x30u, r0); UPD(0x0C091792u, 1);  /* 0C091790 mov.l Rm,@(disp,Rn) */
	T = (r4 & r12) == 0;  /* 0C091792 tst Rm,Rn */
	W32(r11 + 0x24u, r5); UPD(0x0C091796u, 2);  /* 0C091794 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = !T; W32(r11 + 0x28u, r3); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0917E0u, 3); goto L_0C0917E0; } UPD(0x0C09179Au, 1); goto L_0C09179A; }  /* 0C091796 bf/s */
L_0C09179A: BLKS(0x0C09179Au);
	r5 = 0xB4u; UPD(0x0C09179Cu, 1);  /* 0C09179A mov.w @(disp,pc),Rn */
	r4 = 0x7Fu;  /* 0C09179C mov #imm,Rn */
	r1 = R32(r14); UPD(0x0C0917A0u, 2);  /* 0C09179E mov.l @Rm,Rn */
	IF(0x0C0917A0u); MACL = r1 * r5;  /* 0C0917A0 mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C0917A4u, 3);  /* 0C0917A2 mov.l @(disp,pc),Rn */
	IF(0x0C0917A4u); r3 = MACL;  /* 0C0917A4 sts macl,Rn */
	r6 = 0x86u; UPD(0x0C0917A8u, 2);  /* 0C0917A6 mov.w @(disp,pc),Rn */
	r3 += r2;  /* 0C0917A8 add Rm,Rn */
	r6 += r3;  /* 0C0917AA add Rm,Rn */
	r2 = (u32)(s32)(s16)R16(r6); UPD(0x0C0917AEu, 3);  /* 0C0917AC mov.w @Rm,Rn */
	T = (s32)r2 > (s32)r4;  /* 0C0917AE cmp/gt Rm,Rn */
	if (T) { UPD(0x0C0917B8u, 4); goto L_0C0917B8; }  /* 0C0917B0 bt */
L_0C0917B2: BLKS(0x0C0917B2u);
	r9 = 0x80u; UPD(0x0C0917B4u, 1);  /* 0C0917B2 mov.w @(disp,pc),Rn */
	W16(r6, r9); UPD(0x0C0917B6u, 1);  /* 0C0917B4 mov.w Rm,@Rn */
	r2 = r9;  /* 0C0917B6 mov Rm,Rn */
	UPD(0x0C0917B8u, 1);
L_0C0917B8: BLKS(0x0C0917B8u);
	r5 = 0x180u; UPD(0x0C0917BAu, 1);  /* 0C0917B8 mov.w @(disp,pc),Rn */
	r10 = (u32)(s32)(s16)r2;  /* 0C0917BA exts.w Rm,Rn */
	r7 = (u32)(s32)(s16)r5;  /* 0C0917BC exts.w Rm,Rn */
	T = (s32)r10 > (s32)r7;  /* 0C0917BE cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0917C6u, 6); goto L_0C0917C6; }  /* 0C0917C0 bf */
L_0C0917C2: BLKS(0x0C0917C2u);
	W16(r6, r7); UPD(0x0C0917C4u, 1);  /* 0C0917C2 mov.w Rm,@Rn */
	r2 = r5;  /* 0C0917C4 mov Rm,Rn */
	UPD(0x0C0917C6u, 1);
L_0C0917C6: BLKS(0x0C0917C6u);
	r1 = (u32)(s32)(s16)r2;  /* 0C0917C6 exts.w Rm,Rn */
	r1 += 0xFFFFFF84u;  /* 0C0917C8 add #imm,Rn */
	IF(0x0C0917CAu); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C0917CA shar Rn */
	IF(0x0C0917CCu); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C0917CC shar Rn */
	r4 = 0xFFFFDC4Eu; UPD(0x0C0917D0u, 5);  /* 0C0917CE mov.w @(disp,pc),Rn */
	IF(0x0C0917D0u); { u32 tv_ = (r4 + 0x0C0917D4u); u32 t_ = PHYS(tv_); IF(0x0C0917D2u); T = r1 & 1; r1 = (u32)((s32)r1 >> 1); /* slot shar Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0917D0 braf Rn */
L_0C0917E0: BLKS(0x0C0917E0u);
	r11 = 0xC0A9E40u; UPD(0x0C0917E2u, 1);  /* 0C0917E0 mov.l @(disp,pc),Rn */
	r5 = 0x5Au;  /* 0C0917E2 mov #imm,Rn */
	r4 = R32(r14); UPD(0x0C0917E6u, 2);  /* 0C0917E4 mov.l @Rm,Rn */
	IF(0x0C0917E6u); { u32 t_ = r11; PR = 0x0C0917EAu; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C0917EAu); }  /* 0C0917E6 jsr @Rn */
L_0C0917EA: BLKS(0x0C0917EAu);
	T = (r0 & r0) == 0;  /* 0C0917EA tst Rm,Rn */
	if (!T) { UPD(0x0C091800u, 4); goto L_0C091800; }  /* 0C0917EC bf */
L_0C0917EE: BLKS(0x0C0917EEu);
	r12 = 0xC058130u; UPD(0x0C0917F0u, 1);  /* 0C0917EE mov.l @(disp,pc),Rn */
	r8 = 0xC057430u; UPD(0x0C0917F2u, 1);  /* 0C0917F0 mov.l @(disp,pc),Rn */
	IF(0x0C0917F2u); { u32 t_ = r12; PR = 0x0C0917F6u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058130, 0x0C058130u, 0x0C0917F6u); }  /* 0C0917F2 jsr @Rn */
L_0C0917F6: BLKS(0x0C0917F6u);
	r4 = R32(r14); UPD(0x0C0917F8u, 1);  /* 0C0917F6 mov.l @Rm,Rn */
	IF(0x0C0917F8u); { u32 t_ = r8; PR = 0x0C0917FCu; r5 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C0917FCu); }  /* 0C0917F8 jsr @Rn */
L_0C0917FC: BLKS(0x0C0917FCu);
	{ IF(0x0C0917FEu); ; /* slot nop */ UPD(0x0C09179Au, 3); goto L_0C09179A; }  /* 0C0917FC bra */
L_0C091800: BLKS(0x0C091800u);
	r13 = 0xC0580D0u; UPD(0x0C091802u, 1);  /* 0C091800 mov.l @(disp,pc),Rn */
	IF(0x0C091802u); { u32 t_ = r13; PR = 0x0C091806u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0580D0, 0x0C0580D0u, 0x0C091806u); }  /* 0C091802 jsr @Rn */
L_0C091806: BLKS(0x0C091806u);
	{ IF(0x0C091808u); ; /* slot nop */ UPD(0x0C0917EEu, 3); goto L_0C0917EE; }  /* 0C091806 bra */
L_0C091964: BLKS(0x0C091964u);
	r9 = 0xC057390u; UPD(0x0C091966u, 1);  /* 0C091964 mov.l @(disp,pc),Rn */
	IF(0x0C091966u); { u32 t_ = r9; PR = 0x0C09196Au; IF(0x0C091968u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C057390, 0x0C057390u, 0x0C09196Au); }  /* 0C091966 jsr @Rn */
L_0C09196A: BLKS(0x0C09196Au);
	{ W16(r8, r0); /* slot mov.w Rm,@Rn */ UPD(0x0C09175Cu, 3); goto L_0C09175C; }  /* 0C09196A bra */
L_0C0919A0: BLKS(0x0C0919A0u);
	r2 = 0xB4u; UPD(0x0C0919A2u, 1);  /* 0C0919A0 mov.w @(disp,pc),Rn */
	r10 = R32(r14); UPD(0x0C0919A4u, 1);  /* 0C0919A2 mov.l @Rm,Rn */
	IF(0x0C0919A4u); MACL = r10 * r2;  /* 0C0919A4 mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C0919A8u, 3);  /* 0C0919A6 mov.l @(disp,pc),Rn */
	IF(0x0C0919A8u); r9 = MACL;  /* 0C0919A8 sts macl,Rn */
	r0 = 0x8Cu; UPD(0x0C0919ACu, 2);  /* 0C0919AA mov.w @(disp,pc),Rn */
	r9 += r6;  /* 0C0919AC add Rm,Rn */
	IF(0x0C0919AEu); r2 = R32(r0 + r9); UPD(0x0C0919B0u, 2);  /* 0C0919AE mov.l @(r0,Rm),Rn */
	r7 = 0x1FFFFu; UPD(0x0C0919B2u, 1);  /* 0C0919B0 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r7;  /* 0C0919B2 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C0919BCu, 4); goto L_0C0919BC; }  /* 0C0919B4 bt */
L_0C0919B6: BLKS(0x0C0919B6u);
	r13 = 0x800u; UPD(0x0C0919B8u, 1);  /* 0C0919B6 mov.w @(disp,pc),Rn */
	r2 += r13;  /* 0C0919B8 add Rm,Rn */
	IF(0x0C0919BAu); W32(r0 + r9, r2); UPD(0x0C0919BCu, 2);  /* 0C0919BA mov.l Rm,@(r0,Rn) */
L_0C0919BC: BLKS(0x0C0919BCu);
	r8 = 0xC08EB00u; UPD(0x0C0919BEu, 1);  /* 0C0919BC mov.l @(disp,pc),Rn */
	IF(0x0C0919BEu); { u32 t_ = r8; PR = 0x0C0919C2u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C08EB00, 0x0C08EB00u, 0x0C0919C2u); }  /* 0C0919BE jsr @Rn */
L_0C0919C2: BLKS(0x0C0919C2u);
	r4 = R32(r9 + 0x24u); UPD(0x0C0919C4u, 1);  /* 0C0919C2 mov.l @(disp,Rm),Rn */
	r2 = 0xFF600000u; UPD(0x0C0919C6u, 1);  /* 0C0919C4 mov.l @(disp,pc),Rn */
	r2 += r4;  /* 0C0919C6 add Rm,Rn */
	IF(0x0C0919C8u); T = (s32)r2 >= 0;  /* 0C0919C8 cmp/pz Rn */
	if (!T) { UPD(0x0C091A50u, 5); goto L_0C091A50; }  /* 0C0919CA bf */
L_0C0919CC: BLKS(0x0C0919CCu);
	r11 = 0x1E00000u; UPD(0x0C0919CEu, 1);  /* 0C0919CC mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r11;  /* 0C0919CE cmp/gt Rm,Rn */
	if (T) { UPD(0x0C0919E4u, 4); goto L_0C0919E4; }  /* 0C0919D0 bt */
L_0C0919D2: BLKS(0x0C0919D2u);
	r5 = R32(r9 + 0x28u); UPD(0x0C0919D4u, 1);  /* 0C0919D2 mov.l @(disp,Rm),Rn */
	r2 = 0xFE000000u; UPD(0x0C0919D6u, 1);  /* 0C0919D4 mov.l @(disp,pc),Rn */
	r2 += r5;  /* 0C0919D6 add Rm,Rn */
	IF(0x0C0919D8u); T = (s32)r2 >= 0;  /* 0C0919D8 cmp/pz Rn */
	if (!T) { UPD(0x0C091A40u, 5); goto L_0C091A40; }  /* 0C0919DA bf */
L_0C0919DC: BLKS(0x0C0919DCu);
	r3 = 0xC80000u; UPD(0x0C0919DEu, 1);  /* 0C0919DC mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r3;  /* 0C0919DE cmp/gt Rm,Rn */
	{ u32 c_ = !T; r6 = r9; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C091A00u, 4); goto L_0C091A00; } UPD(0x0C0919E4u, 1); goto L_0C0919E4; }  /* 0C0919E0 bf/s */
L_0C0919E4: BLKS(0x0C0919E4u);
	r0 = 0x9Fu; UPD(0x0C0919E6u, 1);  /* 0C0919E4 mov.w @(disp,pc),Rn */
	IF(0x0C0919E6u); r12 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0919E8u, 1);  /* 0C0919E6 mov.b @(r0,Rm),Rn */
	r12 += 0x1u;  /* 0C0919E8 add #imm,Rn */
	IF(0x0C0919EAu); W8(r0 + r9, r12); UPD(0x0C0919ECu, 2);  /* 0C0919EA mov.b Rm,@(r0,Rn) */
	r0 += 0xFFFFFFE9u;  /* 0C0919EC add #imm,Rn */
	IF(0x0C0919EEu); r4 = (u32)(s32)(s16)R16(r0 + r9); UPD(0x0C0919F0u, 2);  /* 0C0919EE mov.w @(r0,Rm),Rn */
	r1 = 0x100u; UPD(0x0C0919F2u, 1);  /* 0C0919F0 mov.w @(disp,pc),Rn */
	r4 += r1;  /* 0C0919F2 add Rm,Rn */
	IF(0x0C0919F4u); W16(r0 + r9, r4); UPD(0x0C0919F6u, 2);  /* 0C0919F4 mov.w Rm,@(r0,Rn) */
	{ IF(0x0C0919F8u); ; /* slot nop */ UPD(0x0C09175Cu, 3); goto L_0C09175C; }  /* 0C0919F6 bra */
L_0C091A00: BLKS(0x0C091A00u);
	r6 += 0x5Cu;  /* 0C091A00 add #imm,Rn */
	r0 = R32(r6); UPD(0x0C091A04u, 2);  /* 0C091A02 mov.l @Rm,Rn */
	r4 -= r0;  /* 0C091A04 sub Rm,Rn */
	r0 = r9;  /* 0C091A06 mov Rm,Rn */
	r13 = 0x7FFFFu; UPD(0x0C091A0Au, 3);  /* 0C091A08 mov.l @(disp,pc),Rn */
	r0 += 0x60u;  /* 0C091A0A add #imm,Rn */
	r2 = 0xFFFFEu; UPD(0x0C091A0Eu, 2);  /* 0C091A0C mov.l @(disp,pc),Rn */
	r4 += r13;  /* 0C091A0E add Rm,Rn */
	r7 = R32(r0); UPD(0x0C091A12u, 2);  /* 0C091A10 mov.l @Rm,Rn */
	T = r2 >= r4;  /* 0C091A12 cmp/hs Rm,Rn */
	r5 -= r7;  /* 0C091A14 sub Rm,Rn */
	IF(0x0C091A16u); r10 = T;  /* 0C091A16 movt Rn */
	r5 += r13;  /* 0C091A18 add Rm,Rn */
	T = r2 >= r5;  /* 0C091A1A cmp/hs Rm,Rn */
	IF(0x0C091A1Cu); r5 = T;  /* 0C091A1C movt Rn */
	r10 &= r5;  /* 0C091A1E and Rm,Rn */
	T = (r10 & r10) == 0;  /* 0C091A20 tst Rm,Rn */
	if (T) { UPD(0x0C091A2Eu, 11); goto L_0C091A2E; }  /* 0C091A22 bt */
L_0C091A24: BLKS(0x0C091A24u);
	r8 = 0x9Fu; UPD(0x0C091A26u, 1);  /* 0C091A24 mov.w @(disp,pc),Rn */
	r8 += r9;  /* 0C091A26 add Rm,Rn */
	r11 = (u32)(s32)(s8)R8(r8); UPD(0x0C091A2Au, 2);  /* 0C091A28 mov.b @Rm,Rn */
	r11 += 0x1u;  /* 0C091A2A add #imm,Rn */
	W8(r8, r11); UPD(0x0C091A2Eu, 2);  /* 0C091A2C mov.b Rm,@Rn */
L_0C091A2E: BLKS(0x0C091A2Eu);
	r8 = 0x88u; UPD(0x0C091A30u, 1);  /* 0C091A2E mov.w @(disp,pc),Rn */
	r4 = R32(r9 + 0x24u); UPD(0x0C091A32u, 1);  /* 0C091A30 mov.l @(disp,Rm),Rn */
	r8 += r9;  /* 0C091A32 add Rm,Rn */
	r5 = R32(r9 + 0x28u); UPD(0x0C091A36u, 2);  /* 0C091A34 mov.l @(disp,Rm),Rn */
	r6 = R32(r6); UPD(0x0C091A38u, 1);  /* 0C091A36 mov.l @Rm,Rn */
	{ r7 = R32(r0); /* slot mov.l @Rm,Rn */ UPD(0x0C091964u, 3); goto L_0C091964; }  /* 0C091A38 bra */
L_0C091A40: BLKS(0x0C091A40u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0919DCu, 3); goto L_0C0919DC; }  /* 0C091A40 bra */
L_0C091A50: BLKS(0x0C091A50u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0919CCu, 3); goto L_0C0919CC; }  /* 0C091A50 bra */
}

void f_0C091A60(sh3_t *c)
{
	LOCALS;
	goto L_0C091A60;
L_0C09175C: BLKS(0x0C09175Cu);
	r7 = 0xB4u; UPD(0x0C09175Eu, 1);  /* 0C09175C mov.w @(disp,pc),Rn */
	r0 = R32(r14); UPD(0x0C091760u, 1);  /* 0C09175E mov.l @Rm,Rn */
	IF(0x0C091760u); MACL = r0 * r7;  /* 0C091760 mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C091764u, 3);  /* 0C091762 mov.l @(disp,pc),Rn */
	IF(0x0C091764u); r11 = MACL;  /* 0C091764 sts macl,Rn */
	r12 = 0x8Cu; UPD(0x0C091768u, 2);  /* 0C091766 mov.w @(disp,pc),Rn */
	r11 += r6;  /* 0C091768 add Rm,Rn */
	r9 = 0x88u; UPD(0x0C09176Cu, 2);  /* 0C09176A mov.w @(disp,pc),Rn */
	r12 += r11;  /* 0C09176C add Rm,Rn */
	r10 = 0xC058060u; UPD(0x0C091770u, 2);  /* 0C09176E mov.l @(disp,pc),Rn */
	r9 += r11;  /* 0C091770 add Rm,Rn */
	r5 = R32(r12); UPD(0x0C091774u, 2);  /* 0C091772 mov.l @Rm,Rn */
	r8 = 0xC058030u; UPD(0x0C091776u, 1);  /* 0C091774 mov.l @(disp,pc),Rn */
	IF(0x0C091776u); { u32 t_ = r10; PR = 0x0C09177Au; r4 = (u32)(s32)(s16)R16(r9); /* slot mov.w @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C09177Au); }  /* 0C091776 jsr @Rn */
L_0C09177A: BLKS(0x0C09177Au);
	r5 = R32(r12); UPD(0x0C09177Cu, 1);  /* 0C09177A mov.l @Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r9); UPD(0x0C09177Eu, 1);  /* 0C09177C mov.w @Rm,Rn */
	IF(0x0C09177Eu); { u32 t_ = r8; PR = 0x0C091782u; W32(r11 + 0x2Cu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLD(t_, 0x0C091782u); }  /* 0C09177E jsr @Rn */
L_0C091782: BLKS(0x0C091782u);
	r5 = R32(r11 + 0x24u); UPD(0x0C091784u, 1);  /* 0C091782 mov.l @(disp,Rm),Rn */
	r3 = R32(r11 + 0x28u); UPD(0x0C091786u, 1);  /* 0C091784 mov.l @(disp,Rm),Rn */
	r13 = R32(r11 + 0x2Cu); UPD(0x0C091788u, 1);  /* 0C091786 mov.l @(disp,Rm),Rn */
	r3 += r0;  /* 0C091788 add Rm,Rn */
	r5 += r13;  /* 0C09178A add Rm,Rn */
	r4 = R32(r11); UPD(0x0C09178Eu, 3);  /* 0C09178C mov.l @Rm,Rn */
	r12 = 0x100u; UPD(0x0C091790u, 1);  /* 0C09178E mov.w @(disp,pc),Rn */
	W32(r11 + 0x30u, r0); UPD(0x0C091792u, 1);  /* 0C091790 mov.l Rm,@(disp,Rn) */
	T = (r4 & r12) == 0;  /* 0C091792 tst Rm,Rn */
	W32(r11 + 0x24u, r5); UPD(0x0C091796u, 2);  /* 0C091794 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = !T; W32(r11 + 0x28u, r3); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0917E0u, 3); goto L_0C0917E0; } UPD(0x0C09179Au, 1); goto L_0C09179A; }  /* 0C091796 bf/s */
L_0C09179A: BLKS(0x0C09179Au);
	r5 = 0xB4u; UPD(0x0C09179Cu, 1);  /* 0C09179A mov.w @(disp,pc),Rn */
	r4 = 0x7Fu;  /* 0C09179C mov #imm,Rn */
	r1 = R32(r14); UPD(0x0C0917A0u, 2);  /* 0C09179E mov.l @Rm,Rn */
	IF(0x0C0917A0u); MACL = r1 * r5;  /* 0C0917A0 mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C0917A4u, 3);  /* 0C0917A2 mov.l @(disp,pc),Rn */
	IF(0x0C0917A4u); r3 = MACL;  /* 0C0917A4 sts macl,Rn */
	r6 = 0x86u; UPD(0x0C0917A8u, 2);  /* 0C0917A6 mov.w @(disp,pc),Rn */
	r3 += r2;  /* 0C0917A8 add Rm,Rn */
	r6 += r3;  /* 0C0917AA add Rm,Rn */
	r2 = (u32)(s32)(s16)R16(r6); UPD(0x0C0917AEu, 3);  /* 0C0917AC mov.w @Rm,Rn */
	T = (s32)r2 > (s32)r4;  /* 0C0917AE cmp/gt Rm,Rn */
	if (T) { UPD(0x0C0917B8u, 4); goto L_0C0917B8; }  /* 0C0917B0 bt */
L_0C0917B2: BLKS(0x0C0917B2u);
	r9 = 0x80u; UPD(0x0C0917B4u, 1);  /* 0C0917B2 mov.w @(disp,pc),Rn */
	W16(r6, r9); UPD(0x0C0917B6u, 1);  /* 0C0917B4 mov.w Rm,@Rn */
	r2 = r9;  /* 0C0917B6 mov Rm,Rn */
	UPD(0x0C0917B8u, 1);
L_0C0917B8: BLKS(0x0C0917B8u);
	r5 = 0x180u; UPD(0x0C0917BAu, 1);  /* 0C0917B8 mov.w @(disp,pc),Rn */
	r10 = (u32)(s32)(s16)r2;  /* 0C0917BA exts.w Rm,Rn */
	r7 = (u32)(s32)(s16)r5;  /* 0C0917BC exts.w Rm,Rn */
	T = (s32)r10 > (s32)r7;  /* 0C0917BE cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0917C6u, 6); goto L_0C0917C6; }  /* 0C0917C0 bf */
L_0C0917C2: BLKS(0x0C0917C2u);
	W16(r6, r7); UPD(0x0C0917C4u, 1);  /* 0C0917C2 mov.w Rm,@Rn */
	r2 = r5;  /* 0C0917C4 mov Rm,Rn */
	UPD(0x0C0917C6u, 1);
L_0C0917C6: BLKS(0x0C0917C6u);
	r1 = (u32)(s32)(s16)r2;  /* 0C0917C6 exts.w Rm,Rn */
	r1 += 0xFFFFFF84u;  /* 0C0917C8 add #imm,Rn */
	IF(0x0C0917CAu); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C0917CA shar Rn */
	IF(0x0C0917CCu); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C0917CC shar Rn */
	r4 = 0xFFFFDC4Eu; UPD(0x0C0917D0u, 5);  /* 0C0917CE mov.w @(disp,pc),Rn */
	IF(0x0C0917D0u); { u32 tv_ = (r4 + 0x0C0917D4u); u32 t_ = PHYS(tv_); IF(0x0C0917D2u); T = r1 & 1; r1 = (u32)((s32)r1 >> 1); /* slot shar Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0917D0 braf Rn */
L_0C0917E0: BLKS(0x0C0917E0u);
	r11 = 0xC0A9E40u; UPD(0x0C0917E2u, 1);  /* 0C0917E0 mov.l @(disp,pc),Rn */
	r5 = 0x5Au;  /* 0C0917E2 mov #imm,Rn */
	r4 = R32(r14); UPD(0x0C0917E6u, 2);  /* 0C0917E4 mov.l @Rm,Rn */
	IF(0x0C0917E6u); { u32 t_ = r11; PR = 0x0C0917EAu; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C0917EAu); }  /* 0C0917E6 jsr @Rn */
L_0C0917EA: BLKS(0x0C0917EAu);
	T = (r0 & r0) == 0;  /* 0C0917EA tst Rm,Rn */
	if (!T) { UPD(0x0C091800u, 4); goto L_0C091800; }  /* 0C0917EC bf */
L_0C0917EE: BLKS(0x0C0917EEu);
	r12 = 0xC058130u; UPD(0x0C0917F0u, 1);  /* 0C0917EE mov.l @(disp,pc),Rn */
	r8 = 0xC057430u; UPD(0x0C0917F2u, 1);  /* 0C0917F0 mov.l @(disp,pc),Rn */
	IF(0x0C0917F2u); { u32 t_ = r12; PR = 0x0C0917F6u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058130, 0x0C058130u, 0x0C0917F6u); }  /* 0C0917F2 jsr @Rn */
L_0C0917F6: BLKS(0x0C0917F6u);
	r4 = R32(r14); UPD(0x0C0917F8u, 1);  /* 0C0917F6 mov.l @Rm,Rn */
	IF(0x0C0917F8u); { u32 t_ = r8; PR = 0x0C0917FCu; r5 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C0917FCu); }  /* 0C0917F8 jsr @Rn */
L_0C0917FC: BLKS(0x0C0917FCu);
	{ IF(0x0C0917FEu); ; /* slot nop */ UPD(0x0C09179Au, 3); goto L_0C09179A; }  /* 0C0917FC bra */
L_0C091800: BLKS(0x0C091800u);
	r13 = 0xC0580D0u; UPD(0x0C091802u, 1);  /* 0C091800 mov.l @(disp,pc),Rn */
	IF(0x0C091802u); { u32 t_ = r13; PR = 0x0C091806u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0580D0, 0x0C0580D0u, 0x0C091806u); }  /* 0C091802 jsr @Rn */
L_0C091806: BLKS(0x0C091806u);
	{ IF(0x0C091808u); ; /* slot nop */ UPD(0x0C0917EEu, 3); goto L_0C0917EE; }  /* 0C091806 bra */
L_0C0919F6: BLKS(0x0C0919F6u);
	{ IF(0x0C0919F8u); ; /* slot nop */ UPD(0x0C09175Cu, 3); goto L_0C09175C; }  /* 0C0919F6 bra */
L_0C091A60: BLKS(0x0C091A60u);
	r5 = 0xB4u; UPD(0x0C091A62u, 1);  /* 0C091A60 mov.w @(disp,pc),Rn */
	r13 = R32(r14); UPD(0x0C091A64u, 1);  /* 0C091A62 mov.l @Rm,Rn */
	IF(0x0C091A64u); MACL = r13 * r5;  /* 0C091A64 mul.l Rm,Rn */
	r10 = 0xC26CD40u; UPD(0x0C091A68u, 3);  /* 0C091A66 mov.l @(disp,pc),Rn */
	IF(0x0C091A68u); r9 = MACL;  /* 0C091A68 sts macl,Rn */
	r12 = 0x8Cu; UPD(0x0C091A6Cu, 2);  /* 0C091A6A mov.w @(disp,pc),Rn */
	r9 += r10;  /* 0C091A6C add Rm,Rn */
	r12 += r9;  /* 0C091A6E add Rm,Rn */
	r4 = R32(r12); UPD(0x0C091A72u, 3);  /* 0C091A70 mov.l @Rm,Rn */
	r1 = 0xFFFFF800u; UPD(0x0C091A74u, 1);  /* 0C091A72 mov.w @(disp,pc),Rn */
	r3 = 0xC08EB00u; UPD(0x0C091A76u, 1);  /* 0C091A74 mov.l @(disp,pc),Rn */
	r4 += r1;  /* 0C091A76 add Rm,Rn */
	W32(r12, r4); UPD(0x0C091A7Au, 2);  /* 0C091A78 mov.l Rm,@Rn */
	IF(0x0C091A7Au); { u32 t_ = r3; PR = 0x0C091A7Eu; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C08EB00, 0x0C08EB00u, 0x0C091A7Eu); }  /* 0C091A7A jsr @Rn */
L_0C091A7E: BLKS(0x0C091A7Eu);
	r6 = R32(r12); UPD(0x0C091A80u, 1);  /* 0C091A7E mov.l @Rm,Rn */
	T = (r6 & r6) == 0;  /* 0C091A80 tst Rm,Rn */
	if (!T) { UPD(0x0C0919F6u, 4); goto L_0C0919F6; }  /* 0C091A82 bf */
L_0C091A84: BLKS(0x0C091A84u);
	r7 = R32(r9); UPD(0x0C091A86u, 1);  /* 0C091A84 mov.l @Rm,Rn */
	r1 = 0x1u;  /* 0C091A86 mov #imm,Rn */
	r2 = 0x100u; UPD(0x0C091A8Au, 2);  /* 0C091A88 mov.w @(disp,pc),Rn */
	r0 = r9;  /* 0C091A8A mov Rm,Rn */
	r7 |= r2;  /* 0C091A8C or Rm,Rn */
	W32(r9, r7); UPD(0x0C091A90u, 3);  /* 0C091A8E mov.l Rm,@Rn */
	r2 += 0xFFFFFF9Fu;  /* 0C091A90 add #imm,Rn */
	IF(0x0C091A92u); W8(r0 + r2, r1); UPD(0x0C091A94u, 2);  /* 0C091A92 mov.b Rm,@(r0,Rn) */
	{ IF(0x0C091A96u); ; /* slot nop */ UPD(0x0C09175Cu, 3); goto L_0C09175C; }  /* 0C091A94 bra */
}

void f_0C091AF0(sh3_t *c)
{
	LOCALS;
	goto L_0C091AF0;
L_0C09175C: BLKS(0x0C09175Cu);
	r7 = 0xB4u; UPD(0x0C09175Eu, 1);  /* 0C09175C mov.w @(disp,pc),Rn */
	r0 = R32(r14); UPD(0x0C091760u, 1);  /* 0C09175E mov.l @Rm,Rn */
	IF(0x0C091760u); MACL = r0 * r7;  /* 0C091760 mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C091764u, 3);  /* 0C091762 mov.l @(disp,pc),Rn */
	IF(0x0C091764u); r11 = MACL;  /* 0C091764 sts macl,Rn */
	r12 = 0x8Cu; UPD(0x0C091768u, 2);  /* 0C091766 mov.w @(disp,pc),Rn */
	r11 += r6;  /* 0C091768 add Rm,Rn */
	r9 = 0x88u; UPD(0x0C09176Cu, 2);  /* 0C09176A mov.w @(disp,pc),Rn */
	r12 += r11;  /* 0C09176C add Rm,Rn */
	r10 = 0xC058060u; UPD(0x0C091770u, 2);  /* 0C09176E mov.l @(disp,pc),Rn */
	r9 += r11;  /* 0C091770 add Rm,Rn */
	r5 = R32(r12); UPD(0x0C091774u, 2);  /* 0C091772 mov.l @Rm,Rn */
	r8 = 0xC058030u; UPD(0x0C091776u, 1);  /* 0C091774 mov.l @(disp,pc),Rn */
	IF(0x0C091776u); { u32 t_ = r10; PR = 0x0C09177Au; r4 = (u32)(s32)(s16)R16(r9); /* slot mov.w @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C09177Au); }  /* 0C091776 jsr @Rn */
L_0C09177A: BLKS(0x0C09177Au);
	r5 = R32(r12); UPD(0x0C09177Cu, 1);  /* 0C09177A mov.l @Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r9); UPD(0x0C09177Eu, 1);  /* 0C09177C mov.w @Rm,Rn */
	IF(0x0C09177Eu); { u32 t_ = r8; PR = 0x0C091782u; W32(r11 + 0x2Cu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLD(t_, 0x0C091782u); }  /* 0C09177E jsr @Rn */
L_0C091782: BLKS(0x0C091782u);
	r5 = R32(r11 + 0x24u); UPD(0x0C091784u, 1);  /* 0C091782 mov.l @(disp,Rm),Rn */
	r3 = R32(r11 + 0x28u); UPD(0x0C091786u, 1);  /* 0C091784 mov.l @(disp,Rm),Rn */
	r13 = R32(r11 + 0x2Cu); UPD(0x0C091788u, 1);  /* 0C091786 mov.l @(disp,Rm),Rn */
	r3 += r0;  /* 0C091788 add Rm,Rn */
	r5 += r13;  /* 0C09178A add Rm,Rn */
	r4 = R32(r11); UPD(0x0C09178Eu, 3);  /* 0C09178C mov.l @Rm,Rn */
	r12 = 0x100u; UPD(0x0C091790u, 1);  /* 0C09178E mov.w @(disp,pc),Rn */
	W32(r11 + 0x30u, r0); UPD(0x0C091792u, 1);  /* 0C091790 mov.l Rm,@(disp,Rn) */
	T = (r4 & r12) == 0;  /* 0C091792 tst Rm,Rn */
	W32(r11 + 0x24u, r5); UPD(0x0C091796u, 2);  /* 0C091794 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = !T; W32(r11 + 0x28u, r3); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0917E0u, 3); goto L_0C0917E0; } UPD(0x0C09179Au, 1); goto L_0C09179A; }  /* 0C091796 bf/s */
L_0C09179A: BLKS(0x0C09179Au);
	r5 = 0xB4u; UPD(0x0C09179Cu, 1);  /* 0C09179A mov.w @(disp,pc),Rn */
	r4 = 0x7Fu;  /* 0C09179C mov #imm,Rn */
	r1 = R32(r14); UPD(0x0C0917A0u, 2);  /* 0C09179E mov.l @Rm,Rn */
	IF(0x0C0917A0u); MACL = r1 * r5;  /* 0C0917A0 mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C0917A4u, 3);  /* 0C0917A2 mov.l @(disp,pc),Rn */
	IF(0x0C0917A4u); r3 = MACL;  /* 0C0917A4 sts macl,Rn */
	r6 = 0x86u; UPD(0x0C0917A8u, 2);  /* 0C0917A6 mov.w @(disp,pc),Rn */
	r3 += r2;  /* 0C0917A8 add Rm,Rn */
	r6 += r3;  /* 0C0917AA add Rm,Rn */
	r2 = (u32)(s32)(s16)R16(r6); UPD(0x0C0917AEu, 3);  /* 0C0917AC mov.w @Rm,Rn */
	T = (s32)r2 > (s32)r4;  /* 0C0917AE cmp/gt Rm,Rn */
	if (T) { UPD(0x0C0917B8u, 4); goto L_0C0917B8; }  /* 0C0917B0 bt */
L_0C0917B2: BLKS(0x0C0917B2u);
	r9 = 0x80u; UPD(0x0C0917B4u, 1);  /* 0C0917B2 mov.w @(disp,pc),Rn */
	W16(r6, r9); UPD(0x0C0917B6u, 1);  /* 0C0917B4 mov.w Rm,@Rn */
	r2 = r9;  /* 0C0917B6 mov Rm,Rn */
	UPD(0x0C0917B8u, 1);
L_0C0917B8: BLKS(0x0C0917B8u);
	r5 = 0x180u; UPD(0x0C0917BAu, 1);  /* 0C0917B8 mov.w @(disp,pc),Rn */
	r10 = (u32)(s32)(s16)r2;  /* 0C0917BA exts.w Rm,Rn */
	r7 = (u32)(s32)(s16)r5;  /* 0C0917BC exts.w Rm,Rn */
	T = (s32)r10 > (s32)r7;  /* 0C0917BE cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0917C6u, 6); goto L_0C0917C6; }  /* 0C0917C0 bf */
L_0C0917C2: BLKS(0x0C0917C2u);
	W16(r6, r7); UPD(0x0C0917C4u, 1);  /* 0C0917C2 mov.w Rm,@Rn */
	r2 = r5;  /* 0C0917C4 mov Rm,Rn */
	UPD(0x0C0917C6u, 1);
L_0C0917C6: BLKS(0x0C0917C6u);
	r1 = (u32)(s32)(s16)r2;  /* 0C0917C6 exts.w Rm,Rn */
	r1 += 0xFFFFFF84u;  /* 0C0917C8 add #imm,Rn */
	IF(0x0C0917CAu); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C0917CA shar Rn */
	IF(0x0C0917CCu); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C0917CC shar Rn */
	r4 = 0xFFFFDC4Eu; UPD(0x0C0917D0u, 5);  /* 0C0917CE mov.w @(disp,pc),Rn */
	IF(0x0C0917D0u); { u32 tv_ = (r4 + 0x0C0917D4u); u32 t_ = PHYS(tv_); IF(0x0C0917D2u); T = r1 & 1; r1 = (u32)((s32)r1 >> 1); /* slot shar Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0917D0 braf Rn */
L_0C0917E0: BLKS(0x0C0917E0u);
	r11 = 0xC0A9E40u; UPD(0x0C0917E2u, 1);  /* 0C0917E0 mov.l @(disp,pc),Rn */
	r5 = 0x5Au;  /* 0C0917E2 mov #imm,Rn */
	r4 = R32(r14); UPD(0x0C0917E6u, 2);  /* 0C0917E4 mov.l @Rm,Rn */
	IF(0x0C0917E6u); { u32 t_ = r11; PR = 0x0C0917EAu; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C0917EAu); }  /* 0C0917E6 jsr @Rn */
L_0C0917EA: BLKS(0x0C0917EAu);
	T = (r0 & r0) == 0;  /* 0C0917EA tst Rm,Rn */
	if (!T) { UPD(0x0C091800u, 4); goto L_0C091800; }  /* 0C0917EC bf */
L_0C0917EE: BLKS(0x0C0917EEu);
	r12 = 0xC058130u; UPD(0x0C0917F0u, 1);  /* 0C0917EE mov.l @(disp,pc),Rn */
	r8 = 0xC057430u; UPD(0x0C0917F2u, 1);  /* 0C0917F0 mov.l @(disp,pc),Rn */
	IF(0x0C0917F2u); { u32 t_ = r12; PR = 0x0C0917F6u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058130, 0x0C058130u, 0x0C0917F6u); }  /* 0C0917F2 jsr @Rn */
L_0C0917F6: BLKS(0x0C0917F6u);
	r4 = R32(r14); UPD(0x0C0917F8u, 1);  /* 0C0917F6 mov.l @Rm,Rn */
	IF(0x0C0917F8u); { u32 t_ = r8; PR = 0x0C0917FCu; r5 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C0917FCu); }  /* 0C0917F8 jsr @Rn */
L_0C0917FC: BLKS(0x0C0917FCu);
	{ IF(0x0C0917FEu); ; /* slot nop */ UPD(0x0C09179Au, 3); goto L_0C09179A; }  /* 0C0917FC bra */
L_0C091800: BLKS(0x0C091800u);
	r13 = 0xC0580D0u; UPD(0x0C091802u, 1);  /* 0C091800 mov.l @(disp,pc),Rn */
	IF(0x0C091802u); { u32 t_ = r13; PR = 0x0C091806u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0580D0, 0x0C0580D0u, 0x0C091806u); }  /* 0C091802 jsr @Rn */
L_0C091806: BLKS(0x0C091806u);
	{ IF(0x0C091808u); ; /* slot nop */ UPD(0x0C0917EEu, 3); goto L_0C0917EE; }  /* 0C091806 bra */
L_0C091A94: BLKS(0x0C091A94u);
	{ IF(0x0C091A96u); ; /* slot nop */ UPD(0x0C09175Cu, 3); goto L_0C09175C; }  /* 0C091A94 bra */
L_0C091AF0: BLKS(0x0C091AF0u);
	r9 = 0xB4u; UPD(0x0C091AF2u, 1);  /* 0C091AF0 mov.w @(disp,pc),Rn */
	r6 = R32(r14); UPD(0x0C091AF4u, 1);  /* 0C091AF2 mov.l @Rm,Rn */
	IF(0x0C091AF4u); MACL = r6 * r9;  /* 0C091AF4 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C091AF8u, 3);  /* 0C091AF6 mov.l @(disp,pc),Rn */
	IF(0x0C091AF8u); r7 = MACL;  /* 0C091AF8 sts macl,Rn */
	r7 += r0;  /* 0C091AFA add Rm,Rn */
	r0 = 0x8Cu; UPD(0x0C091AFEu, 3);  /* 0C091AFC mov.w @(disp,pc),Rn */
	r11 = 0xFFFFE000u; UPD(0x0C091B00u, 1);  /* 0C091AFE mov.w @(disp,pc),Rn */
	IF(0x0C091B00u); r8 = R32(r0 + r7); UPD(0x0C091B02u, 1);  /* 0C091B00 mov.l @(r0,Rm),Rn */
	r2 = 0xFFFE0000u; UPD(0x0C091B04u, 1);  /* 0C091B02 mov.l @(disp,pc),Rn */
	r8 += r11;  /* 0C091B04 add Rm,Rn */
	T = r8 == r2;  /* 0C091B06 cmp/eq Rm,Rn */
	{ u32 c_ = !T; IF(0x0C091B0Au); W32(r0 + r7, r8); /* slot mov.l Rm,@(r0,Rn) */ if (c_) { UPD(0x0C091A94u, 5); goto L_0C091A94; } UPD(0x0C091B0Cu, 1); goto L_0C091B0C; }  /* 0C091B08 bf/s */
L_0C091B0C: BLKS(0x0C091B0Cu);
	r0 += 0x13u;  /* 0C091B0C add #imm,Rn */
	IF(0x0C091B0Eu); r12 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C091B10u, 2);  /* 0C091B0E mov.b @(r0,Rm),Rn */
	r12 += 0x1u;  /* 0C091B10 add #imm,Rn */
	{ IF(0x0C091B14u); W8(r0 + r7, r12); /* slot mov.b Rm,@(r0,Rn) */ UPD(0x0C09175Cu, 4); goto L_0C09175C; }  /* 0C091B12 bra */
}

void f_0C091B20(sh3_t *c)
{
	LOCALS;
	goto L_0C091B20;
L_0C09175C: BLKS(0x0C09175Cu);
	r7 = 0xB4u; UPD(0x0C09175Eu, 1);  /* 0C09175C mov.w @(disp,pc),Rn */
	r0 = R32(r14); UPD(0x0C091760u, 1);  /* 0C09175E mov.l @Rm,Rn */
	IF(0x0C091760u); MACL = r0 * r7;  /* 0C091760 mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C091764u, 3);  /* 0C091762 mov.l @(disp,pc),Rn */
	IF(0x0C091764u); r11 = MACL;  /* 0C091764 sts macl,Rn */
	r12 = 0x8Cu; UPD(0x0C091768u, 2);  /* 0C091766 mov.w @(disp,pc),Rn */
	r11 += r6;  /* 0C091768 add Rm,Rn */
	r9 = 0x88u; UPD(0x0C09176Cu, 2);  /* 0C09176A mov.w @(disp,pc),Rn */
	r12 += r11;  /* 0C09176C add Rm,Rn */
	r10 = 0xC058060u; UPD(0x0C091770u, 2);  /* 0C09176E mov.l @(disp,pc),Rn */
	r9 += r11;  /* 0C091770 add Rm,Rn */
	r5 = R32(r12); UPD(0x0C091774u, 2);  /* 0C091772 mov.l @Rm,Rn */
	r8 = 0xC058030u; UPD(0x0C091776u, 1);  /* 0C091774 mov.l @(disp,pc),Rn */
	IF(0x0C091776u); { u32 t_ = r10; PR = 0x0C09177Au; r4 = (u32)(s32)(s16)R16(r9); /* slot mov.w @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C09177Au); }  /* 0C091776 jsr @Rn */
L_0C09177A: BLKS(0x0C09177Au);
	r5 = R32(r12); UPD(0x0C09177Cu, 1);  /* 0C09177A mov.l @Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r9); UPD(0x0C09177Eu, 1);  /* 0C09177C mov.w @Rm,Rn */
	IF(0x0C09177Eu); { u32 t_ = r8; PR = 0x0C091782u; W32(r11 + 0x2Cu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLD(t_, 0x0C091782u); }  /* 0C09177E jsr @Rn */
L_0C091782: BLKS(0x0C091782u);
	r5 = R32(r11 + 0x24u); UPD(0x0C091784u, 1);  /* 0C091782 mov.l @(disp,Rm),Rn */
	r3 = R32(r11 + 0x28u); UPD(0x0C091786u, 1);  /* 0C091784 mov.l @(disp,Rm),Rn */
	r13 = R32(r11 + 0x2Cu); UPD(0x0C091788u, 1);  /* 0C091786 mov.l @(disp,Rm),Rn */
	r3 += r0;  /* 0C091788 add Rm,Rn */
	r5 += r13;  /* 0C09178A add Rm,Rn */
	r4 = R32(r11); UPD(0x0C09178Eu, 3);  /* 0C09178C mov.l @Rm,Rn */
	r12 = 0x100u; UPD(0x0C091790u, 1);  /* 0C09178E mov.w @(disp,pc),Rn */
	W32(r11 + 0x30u, r0); UPD(0x0C091792u, 1);  /* 0C091790 mov.l Rm,@(disp,Rn) */
	T = (r4 & r12) == 0;  /* 0C091792 tst Rm,Rn */
	W32(r11 + 0x24u, r5); UPD(0x0C091796u, 2);  /* 0C091794 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = !T; W32(r11 + 0x28u, r3); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0917E0u, 3); goto L_0C0917E0; } UPD(0x0C09179Au, 1); goto L_0C09179A; }  /* 0C091796 bf/s */
L_0C09179A: BLKS(0x0C09179Au);
	r5 = 0xB4u; UPD(0x0C09179Cu, 1);  /* 0C09179A mov.w @(disp,pc),Rn */
	r4 = 0x7Fu;  /* 0C09179C mov #imm,Rn */
	r1 = R32(r14); UPD(0x0C0917A0u, 2);  /* 0C09179E mov.l @Rm,Rn */
	IF(0x0C0917A0u); MACL = r1 * r5;  /* 0C0917A0 mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C0917A4u, 3);  /* 0C0917A2 mov.l @(disp,pc),Rn */
	IF(0x0C0917A4u); r3 = MACL;  /* 0C0917A4 sts macl,Rn */
	r6 = 0x86u; UPD(0x0C0917A8u, 2);  /* 0C0917A6 mov.w @(disp,pc),Rn */
	r3 += r2;  /* 0C0917A8 add Rm,Rn */
	r6 += r3;  /* 0C0917AA add Rm,Rn */
	r2 = (u32)(s32)(s16)R16(r6); UPD(0x0C0917AEu, 3);  /* 0C0917AC mov.w @Rm,Rn */
	T = (s32)r2 > (s32)r4;  /* 0C0917AE cmp/gt Rm,Rn */
	if (T) { UPD(0x0C0917B8u, 4); goto L_0C0917B8; }  /* 0C0917B0 bt */
L_0C0917B2: BLKS(0x0C0917B2u);
	r9 = 0x80u; UPD(0x0C0917B4u, 1);  /* 0C0917B2 mov.w @(disp,pc),Rn */
	W16(r6, r9); UPD(0x0C0917B6u, 1);  /* 0C0917B4 mov.w Rm,@Rn */
	r2 = r9;  /* 0C0917B6 mov Rm,Rn */
	UPD(0x0C0917B8u, 1);
L_0C0917B8: BLKS(0x0C0917B8u);
	r5 = 0x180u; UPD(0x0C0917BAu, 1);  /* 0C0917B8 mov.w @(disp,pc),Rn */
	r10 = (u32)(s32)(s16)r2;  /* 0C0917BA exts.w Rm,Rn */
	r7 = (u32)(s32)(s16)r5;  /* 0C0917BC exts.w Rm,Rn */
	T = (s32)r10 > (s32)r7;  /* 0C0917BE cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0917C6u, 6); goto L_0C0917C6; }  /* 0C0917C0 bf */
L_0C0917C2: BLKS(0x0C0917C2u);
	W16(r6, r7); UPD(0x0C0917C4u, 1);  /* 0C0917C2 mov.w Rm,@Rn */
	r2 = r5;  /* 0C0917C4 mov Rm,Rn */
	UPD(0x0C0917C6u, 1);
L_0C0917C6: BLKS(0x0C0917C6u);
	r1 = (u32)(s32)(s16)r2;  /* 0C0917C6 exts.w Rm,Rn */
	r1 += 0xFFFFFF84u;  /* 0C0917C8 add #imm,Rn */
	IF(0x0C0917CAu); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C0917CA shar Rn */
	IF(0x0C0917CCu); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C0917CC shar Rn */
	r4 = 0xFFFFDC4Eu; UPD(0x0C0917D0u, 5);  /* 0C0917CE mov.w @(disp,pc),Rn */
	IF(0x0C0917D0u); { u32 tv_ = (r4 + 0x0C0917D4u); u32 t_ = PHYS(tv_); IF(0x0C0917D2u); T = r1 & 1; r1 = (u32)((s32)r1 >> 1); /* slot shar Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0917D0 braf Rn */
L_0C0917E0: BLKS(0x0C0917E0u);
	r11 = 0xC0A9E40u; UPD(0x0C0917E2u, 1);  /* 0C0917E0 mov.l @(disp,pc),Rn */
	r5 = 0x5Au;  /* 0C0917E2 mov #imm,Rn */
	r4 = R32(r14); UPD(0x0C0917E6u, 2);  /* 0C0917E4 mov.l @Rm,Rn */
	IF(0x0C0917E6u); { u32 t_ = r11; PR = 0x0C0917EAu; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C0917EAu); }  /* 0C0917E6 jsr @Rn */
L_0C0917EA: BLKS(0x0C0917EAu);
	T = (r0 & r0) == 0;  /* 0C0917EA tst Rm,Rn */
	if (!T) { UPD(0x0C091800u, 4); goto L_0C091800; }  /* 0C0917EC bf */
L_0C0917EE: BLKS(0x0C0917EEu);
	r12 = 0xC058130u; UPD(0x0C0917F0u, 1);  /* 0C0917EE mov.l @(disp,pc),Rn */
	r8 = 0xC057430u; UPD(0x0C0917F2u, 1);  /* 0C0917F0 mov.l @(disp,pc),Rn */
	IF(0x0C0917F2u); { u32 t_ = r12; PR = 0x0C0917F6u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058130, 0x0C058130u, 0x0C0917F6u); }  /* 0C0917F2 jsr @Rn */
L_0C0917F6: BLKS(0x0C0917F6u);
	r4 = R32(r14); UPD(0x0C0917F8u, 1);  /* 0C0917F6 mov.l @Rm,Rn */
	IF(0x0C0917F8u); { u32 t_ = r8; PR = 0x0C0917FCu; r5 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C0917FCu); }  /* 0C0917F8 jsr @Rn */
L_0C0917FC: BLKS(0x0C0917FCu);
	{ IF(0x0C0917FEu); ; /* slot nop */ UPD(0x0C09179Au, 3); goto L_0C09179A; }  /* 0C0917FC bra */
L_0C091800: BLKS(0x0C091800u);
	r13 = 0xC0580D0u; UPD(0x0C091802u, 1);  /* 0C091800 mov.l @(disp,pc),Rn */
	IF(0x0C091802u); { u32 t_ = r13; PR = 0x0C091806u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0580D0, 0x0C0580D0u, 0x0C091806u); }  /* 0C091802 jsr @Rn */
L_0C091806: BLKS(0x0C091806u);
	{ IF(0x0C091808u); ; /* slot nop */ UPD(0x0C0917EEu, 3); goto L_0C0917EE; }  /* 0C091806 bra */
L_0C091B20: BLKS(0x0C091B20u);
	r1 = 0xB4u; UPD(0x0C091B22u, 1);  /* 0C091B20 mov.w @(disp,pc),Rn */
	r5 = R32(r14); UPD(0x0C091B24u, 1);  /* 0C091B22 mov.l @Rm,Rn */
	IF(0x0C091B24u); MACL = r5 * r1;  /* 0C091B24 mul.l Rm,Rn */
	r10 = 0xC26CD40u; UPD(0x0C091B28u, 3);  /* 0C091B26 mov.l @(disp,pc),Rn */
	IF(0x0C091B28u); r0 = MACL;  /* 0C091B28 sts macl,Rn */
	r0 += r10;  /* 0C091B2A add Rm,Rn */
	r4 = R32(r0 + 0x24u); UPD(0x0C091B2Eu, 3);  /* 0C091B2C mov.l @(disp,Rm),Rn */
	r3 = 0xFFA00000u; UPD(0x0C091B30u, 1);  /* 0C091B2E mov.l @(disp,pc),Rn */
	T = (s32)r4 >= (s32)r3;  /* 0C091B30 cmp/ge Rm,Rn */
	{ u32 c_ = T; r13 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C091B38u, 4); goto L_0C091B38; } goto L_0C091B36; }  /* 0C091B32 bt/s */
L_0C091B36: BLKS(0x0C091B36u);
	W32(r0, r13); UPD(0x0C091B38u, 2);  /* 0C091B36 mov.l Rm,@Rn */
L_0C091B38: BLKS(0x0C091B38u);
	r3 = 0x8Cu; UPD(0x0C091B3Au, 1);  /* 0C091B38 mov.w @(disp,pc),Rn */
	r7 = 0x3FFFFu; UPD(0x0C091B3Cu, 1);  /* 0C091B3A mov.l @(disp,pc),Rn */
	IF(0x0C091B3Cu); r2 = R32(r0 + r3); UPD(0x0C091B3Eu, 1);  /* 0C091B3C mov.l @(r0,Rm),Rn */
	T = (s32)r2 > (s32)r7;  /* 0C091B3E cmp/gt Rm,Rn */
	if (T) { UPD(0x0C091B48u, 4); goto L_0C091B48; }  /* 0C091B40 bt */
L_0C091B42: BLKS(0x0C091B42u);
	r8 = 0x2000u; UPD(0x0C091B44u, 1);  /* 0C091B42 mov.w @(disp,pc),Rn */
	r2 += r8;  /* 0C091B44 add Rm,Rn */
	IF(0x0C091B46u); W32(r0 + r3, r2); UPD(0x0C091B48u, 2);  /* 0C091B46 mov.l Rm,@(r0,Rn) */
L_0C091B48: BLKS(0x0C091B48u);
	r2 = 0x0u;  /* 0C091B48 mov #imm,Rn */
	W32(r14 + 0x20u, r2); UPD(0x0C091B4Cu, 2);  /* 0C091B4A mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x28u, r0); UPD(0x0C091B4Eu, 1);  /* 0C091B4C mov.l Rm,@(disp,Rn) */
L_0C091B4E: BLKS(0x0C091B4Eu);
	r0 = R32(r14 + 0x28u); UPD(0x0C091B50u, 1);  /* 0C091B4E mov.l @(disp,Rm),Rn */
	r11 = 0x86u; UPD(0x0C091B52u, 1);  /* 0C091B50 mov.w @(disp,pc),Rn */
	IF(0x0C091B52u); r9 = (u32)(s32)(s16)R16(r0 + r11); UPD(0x0C091B54u, 1);  /* 0C091B52 mov.w @(r0,Rm),Rn */
	r0 = R32(r14 + 0x20u); UPD(0x0C091B56u, 1);  /* 0C091B54 mov.l @(disp,Rm),Rn */
	r12 = 0xC1C2D54u; UPD(0x0C091B58u, 1);  /* 0C091B56 mov.l @(disp,pc),Rn */
	IF(0x0C091B58u); r0 <<= 2;  /* 0C091B58 shll2 Rn */
	IF(0x0C091B5Au); r11 = R32(r0 + r12); UPD(0x0C091B5Cu, 2);  /* 0C091B5A mov.l @(r0,Rm),Rn */
	r5 = R32(r14); UPD(0x0C091B5Eu, 1);  /* 0C091B5C mov.l @Rm,Rn */
	r0 = 0xB4u; UPD(0x0C091B60u, 1);  /* 0C091B5E mov.w @(disp,pc),Rn */
	IF(0x0C091B60u); MACL = r5 * r0;  /* 0C091B60 mul.l Rm,Rn */
	r7 = 0xC058060u; UPD(0x0C091B64u, 3);  /* 0C091B62 mov.l @(disp,pc),Rn */
	IF(0x0C091B64u); r4 = MACL;  /* 0C091B64 sts macl,Rn */
	W32(r14 + 0x2Cu, r4); UPD(0x0C091B68u, 2);  /* 0C091B66 mov.l Rm,@(disp,Rn) */
	r10 = 0xC058030u; UPD(0x0C091B6Au, 1);  /* 0C091B68 mov.l @(disp,pc),Rn */
	r5 = 0xFFF00000u; UPD(0x0C091B6Cu, 1);  /* 0C091B6A mov.l @(disp,pc),Rn */
	IF(0x0C091B6Cu); { u32 t_ = r7; PR = 0x0C091B70u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C091B70u); }  /* 0C091B6C jsr @Rn */
L_0C091B70: BLKS(0x0C091B70u);
	r4 = r9;  /* 0C091B70 mov Rm,Rn */
	r5 = r11;  /* 0C091B72 mov Rm,Rn */
	IF(0x0C091B74u); { u32 t_ = r10; PR = 0x0C091B78u; r8 = r0; /* slot mov Rm,Rn */ UPD(t_, 4); CALLD(t_, 0x0C091B78u); }  /* 0C091B74 jsr @Rn */
L_0C091B78: BLKS(0x0C091B78u);
	r3 = 0x66666667u; UPD(0x0C091B7Au, 1);  /* 0C091B78 mov.l @(disp,pc),Rn */
	r8 -= r0;  /* 0C091B7A sub Rm,Rn */
	IF(0x0C091B7Cu); r8 <<= 2;  /* 0C091B7C shll2 Rn */
	{ s64 r_ = (s64)(s32)r8 * (s64)(s32)r3; MACH = (u32)((u64)r_ >> 32); MACL = (u32)r_; }  /* 0C091B7E dmuls.l Rm,Rn */
	r6 = R32(r14 + 0x28u); UPD(0x0C091B82u, 5);  /* 0C091B80 mov.l @(disp,Rm),Rn */
	r4 = r9;  /* 0C091B82 mov Rm,Rn */
	IF(0x0C091B84u); r1 = MACH;  /* 0C091B84 sts mach,Rn */
	IF(0x0C091B86u); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C091B86 shar Rn */
	IF(0x0C091B88u); T = r8 >> 31; r8 <<= 1;  /* 0C091B88 shll Rn */
	{ u32 a_ = r8, t_ = a_ - r8, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r8 = r_; }  /* 0C091B8A subc Rm,Rn */
	r2 = R32(r6 + 0x24u); UPD(0x0C091B8Eu, 6);  /* 0C091B8C mov.l @(disp,Rm),Rn */
	r1 -= r8;  /* 0C091B8E sub Rm,Rn */
	r13 = 0xFFFC0000u; UPD(0x0C091B92u, 2);  /* 0C091B90 mov.l @(disp,pc),Rn */
	r2 += r1;  /* 0C091B92 add Rm,Rn */
	r12 = 0xC058030u; UPD(0x0C091B96u, 2);  /* 0C091B94 mov.l @(disp,pc),Rn */
	r2 += r13;  /* 0C091B96 add Rm,Rn */
	r8 = 0xC058060u; UPD(0x0C091B9Au, 2);  /* 0C091B98 mov.l @(disp,pc),Rn */
	r5 = 0xFFF00000u; UPD(0x0C091B9Cu, 1);  /* 0C091B9A mov.l @(disp,pc),Rn */
	IF(0x0C091B9Cu); { u32 t_ = r12; PR = 0x0C091BA0u; W32(r14 + 0x24u, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C091BA0u); }  /* 0C091B9C jsr @Rn */
L_0C091BA0: BLKS(0x0C091BA0u);
	r4 = r9;  /* 0C091BA0 mov Rm,Rn */
	r5 = r11;  /* 0C091BA2 mov Rm,Rn */
	IF(0x0C091BA4u); { u32 t_ = r8; PR = 0x0C091BA8u; r12 = r0; /* slot mov Rm,Rn */ UPD(t_, 4); CALLD(t_, 0x0C091BA8u); }  /* 0C091BA4 jsr @Rn */
L_0C091BA8: BLKS(0x0C091BA8u);
	r7 = R32(r14 + 0x28u); UPD(0x0C091BAAu, 1);  /* 0C091BA8 mov.l @(disp,Rm),Rn */
	r12 += r0;  /* 0C091BAA add Rm,Rn */
	r10 = 0xC050D70u; UPD(0x0C091BAEu, 2);  /* 0C091BAC mov.l @(disp,pc),Rn */
	r4 = 0x1Fu;  /* 0C091BAE mov #imm,Rn */
	r5 = R32(r7 + 0x28u); UPD(0x0C091BB2u, 2);  /* 0C091BB0 mov.l @(disp,Rm),Rn */
	IF(0x0C091BB2u); { u32 t_ = r10; PR = 0x0C091BB6u; r12 += r5; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C091BB6u); }  /* 0C091BB2 jsr @Rn */
L_0C091BB6: BLKS(0x0C091BB6u);
	r4 = r0;  /* 0C091BB6 mov Rm,Rn */
	r0 = 0xF0u; UPD(0x0C091BBAu, 2);  /* 0C091BB8 mov.w @(disp,pc),Rn */
	r4 += r9;  /* 0C091BBA add Rm,Rn */
	r3 = 0x100u; UPD(0x0C091BBEu, 2);  /* 0C091BBC mov.w @(disp,pc),Rn */
	r4 += r0;  /* 0C091BBE add Rm,Rn */
	r6 = 0xC058060u; UPD(0x0C091BC2u, 2);  /* 0C091BC0 mov.l @(disp,pc),Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C091BC2 exts.w Rm,Rn */
	r13 = 0xFFFD0000u; UPD(0x0C091BC6u, 2);  /* 0C091BC4 mov.l @(disp,pc),Rn */
	r9 += r3;  /* 0C091BC6 add Rm,Rn */
	r4 = r9;  /* 0C091BC8 mov Rm,Rn */
	IF(0x0C091BCAu); { u32 t_ = r6; PR = 0x0C091BCEu; r5 = r13; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C091BCEu); }  /* 0C091BCA jsr @Rn */
L_0C091BCE: BLKS(0x0C091BCEu);
	r1 = 0xC058030u; UPD(0x0C091BD0u, 1);  /* 0C091BCE mov.l @(disp,pc),Rn */
	r4 = r9;  /* 0C091BD0 mov Rm,Rn */
	r5 = r13;  /* 0C091BD2 mov Rm,Rn */
	IF(0x0C091BD4u); { u32 t_ = r1; PR = 0x0C091BD8u; r10 = r0; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C091BD8u); }  /* 0C091BD4 jsr @Rn */
L_0C091BD8: BLKS(0x0C091BD8u);
	r4 = r0;  /* 0C091BD8 mov Rm,Rn */
	r0 = R32(r14 + 0x28u); UPD(0x0C091BDCu, 2);  /* 0C091BDA mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFECu;  /* 0C091BDC add #imm,Rn */
	r11 = 0xB0u; UPD(0x0C091BE0u, 2);  /* 0C091BDE mov.w @(disp,pc),Rn */
	IF(0x0C091BE0u); r2 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C091BE2u, 1);  /* 0C091BE0 mov.b @(r0,Rm),Rn */
	r8 = r2 & 0xFF;  /* 0C091BE2 extu.b Rm,Rn */
	W32(r15, r8); UPD(0x0C091BE6u, 2);  /* 0C091BE4 mov.l Rm,@Rn */
	r11 = 0x1u;  /* 0C091BE6 mov #imm,Rn */
	r7 = 0xA9u; UPD(0x0C091BEAu, 2);  /* 0C091BE8 mov.w @(disp,pc),Rn */
	IF(0x0C091BEAu); r13 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C091BECu, 1);  /* 0C091BEA mov.b @(r0,Rm),Rn */
	r3 = 0x808080u; UPD(0x0C091BEEu, 1);  /* 0C091BEC mov.l @(disp,pc),Rn */
	r5 = r13 & 0xFF;  /* 0C091BEE extu.b Rm,Rn */
	r7 = r12;  /* 0C091BF0 mov Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C091BF4u, 3);  /* 0C091BF2 mov.l Rm,@(disp,Rn) */
	W32(r15 + 0x8u, r10); UPD(0x0C091BF6u, 1);  /* 0C091BF4 mov.l Rm,@(disp,Rn) */
	r5 = 0x8u;  /* 0C091BF6 mov #imm,Rn */
	W32(r15 + 0xCu, r4); UPD(0x0C091BFAu, 2);  /* 0C091BF8 mov.l Rm,@(disp,Rn) */
	W32(r15 + 0x10u, r3); UPD(0x0C091BFCu, 1);  /* 0C091BFA mov.l Rm,@(disp,Rn) */
	r12 = 0xC0ACA40u; UPD(0x0C091BFEu, 1);  /* 0C091BFC mov.l @(disp,pc),Rn */
	r6 = R32(r14 + 0x24u); UPD(0x0C091C00u, 1);  /* 0C091BFE mov.l @(disp,Rm),Rn */
	IF(0x0C091C00u); { u32 t_ = r12; PR = 0x0C091C04u; r4 = R32(r0); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0ACA40, 0x0C0ACA40u, 0x0C091C04u); }  /* 0C091C00 jsr @Rn */
L_0C091C04: BLKS(0x0C091C04u);
	r6 = R32(r14 + 0x20u); UPD(0x0C091C06u, 1);  /* 0C091C04 mov.l @(disp,Rm),Rn */
	r6 += 0x1u;  /* 0C091C06 add #imm,Rn */
	r9 = (u32)(s32)(s16)r6;  /* 0C091C08 exts.w Rm,Rn */
	W32(r14 + 0x20u, r9); UPD(0x0C091C0Cu, 3);  /* 0C091C0A mov.l Rm,@(disp,Rn) */
	r0 = R32(r14 + 0x20u); UPD(0x0C091C0Eu, 1);  /* 0C091C0C mov.l @(disp,Rm),Rn */
	T = (s32)r0 > (s32)r11;  /* 0C091C0E cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x14u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C091B4Eu, 4); goto L_0C091B4E; } goto L_0C091C14; }  /* 0C091C10 bf/s */
L_0C091C14: BLKS(0x0C091C14u);
	r6 = 0xC26CD40u; UPD(0x0C091C16u, 2);  /* 0C091C14 mov.l @(disp,pc),Rn */
	r9 = R32(r14 + 0x2Cu); UPD(0x0C091C18u, 1);  /* 0C091C16 mov.l @(disp,Rm),Rn */
	r6 += r9;  /* 0C091C18 add Rm,Rn */
	r4 = R32(r6 + 0x24u); UPD(0x0C091C1Cu, 2);  /* 0C091C1A mov.l @(disp,Rm),Rn */
	r2 = 0xFF600000u; UPD(0x0C091C1Eu, 1);  /* 0C091C1C mov.l @(disp,pc),Rn */
	r2 += r4;  /* 0C091C1E add Rm,Rn */
	IF(0x0C091C20u); T = (s32)r2 >= 0;  /* 0C091C20 cmp/pz Rn */
	if (!T) { UPD(0x0C091CF0u, 5); goto L_0C091CF0; }  /* 0C091C22 bf */
L_0C091C24: BLKS(0x0C091C24u);
	r13 = 0x1E00000u; UPD(0x0C091C26u, 1);  /* 0C091C24 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r13;  /* 0C091C26 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C091C3Au, 4); goto L_0C091C3A; }  /* 0C091C28 bt */
L_0C091C2A: BLKS(0x0C091C2Au);
	r5 = R32(r6 + 0x28u); UPD(0x0C091C2Cu, 1);  /* 0C091C2A mov.l @(disp,Rm),Rn */
	r2 = 0xFE000000u; UPD(0x0C091C2Eu, 1);  /* 0C091C2C mov.l @(disp,pc),Rn */
	r2 += r5;  /* 0C091C2E add Rm,Rn */
	IF(0x0C091C30u); T = (s32)r2 >= 0;  /* 0C091C30 cmp/pz Rn */
	if (!T) { UPD(0x0C091C80u, 5); goto L_0C091C80; }  /* 0C091C32 bf */
L_0C091C34: BLKS(0x0C091C34u);
	r8 = 0xC80000u; UPD(0x0C091C36u, 1);  /* 0C091C34 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r8;  /* 0C091C36 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C091C50u, 4); goto L_0C091C50; }  /* 0C091C38 bf */
L_0C091C3A: BLKS(0x0C091C3Au);
	r0 = 0x9Fu; UPD(0x0C091C3Cu, 1);  /* 0C091C3A mov.w @(disp,pc),Rn */
	IF(0x0C091C3Cu); r3 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C091C3Eu, 1);  /* 0C091C3C mov.b @(r0,Rm),Rn */
	r3 += 0x1u;  /* 0C091C3E add #imm,Rn */
	IF(0x0C091C40u); W8(r0 + r6, r3); UPD(0x0C091C42u, 2);  /* 0C091C40 mov.b Rm,@(r0,Rn) */
	r0 += 0xFFFFFFE9u;  /* 0C091C42 add #imm,Rn */
	IF(0x0C091C44u); r1 = (u32)(s32)(s16)R16(r0 + r6); UPD(0x0C091C46u, 2);  /* 0C091C44 mov.w @(r0,Rm),Rn */
	r2 = 0x100u; UPD(0x0C091C48u, 1);  /* 0C091C46 mov.w @(disp,pc),Rn */
	r2 += r1;  /* 0C091C48 add Rm,Rn */
	IF(0x0C091C4Au); W16(r0 + r6, r2); UPD(0x0C091C4Cu, 2);  /* 0C091C4A mov.w Rm,@(r0,Rn) */
L_0C091C4C: BLKS(0x0C091C4Cu);
	{ IF(0x0C091C4Eu); ; /* slot nop */ UPD(0x0C09175Cu, 3); goto L_0C09175C; }  /* 0C091C4C bra */
L_0C091C50: BLKS(0x0C091C50u);
	r6 += 0x5Cu;  /* 0C091C50 add #imm,Rn */
	{ u32 v_ = R32(r6); r6 += 4; r11 = v_; } UPD(0x0C091C54u, 2);  /* 0C091C52 mov.l @Rm+,Rn */
	r12 = 0x7FFFFu; UPD(0x0C091C56u, 1);  /* 0C091C54 mov.l @(disp,pc),Rn */
	r4 -= r11;  /* 0C091C56 sub Rm,Rn */
	r0 = 0xFFFFEu; UPD(0x0C091C5Au, 2);  /* 0C091C58 mov.l @(disp,pc),Rn */
	r4 += r12;  /* 0C091C5A add Rm,Rn */
	T = r0 >= r4;  /* 0C091C5C cmp/hs Rm,Rn */
	r4 = R32(r6); UPD(0x0C091C60u, 3);  /* 0C091C5E mov.l @Rm,Rn */
	IF(0x0C091C60u); r10 = T;  /* 0C091C60 movt Rn */
	r5 -= r4;  /* 0C091C62 sub Rm,Rn */
	r5 += r12;  /* 0C091C64 add Rm,Rn */
	T = r0 >= r5;  /* 0C091C66 cmp/hs Rm,Rn */
	IF(0x0C091C68u); r7 = T;  /* 0C091C68 movt Rn */
	r10 &= r7;  /* 0C091C6A and Rm,Rn */
	T = (r10 & r10) == 0;  /* 0C091C6C tst Rm,Rn */
	{ u32 c_ = T; r6 += 0xFFFFFFA0u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C091C4Cu, 10); goto L_0C091C4C; } goto L_0C091C72; }  /* 0C091C6E bt/s */
L_0C091C72: BLKS(0x0C091C72u);
	r0 = 0x9Fu; UPD(0x0C091C74u, 2);  /* 0C091C72 mov.w @(disp,pc),Rn */
	IF(0x0C091C74u); r5 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C091C76u, 1);  /* 0C091C74 mov.b @(r0,Rm),Rn */
	r5 += 0x1u;  /* 0C091C76 add #imm,Rn */
	IF(0x0C091C78u); W8(r0 + r6, r5); UPD(0x0C091C7Au, 2);  /* 0C091C78 mov.b Rm,@(r0,Rn) */
	{ IF(0x0C091C7Cu); ; /* slot nop */ UPD(0x0C09175Cu, 3); goto L_0C09175C; }  /* 0C091C7A bra */
L_0C091C80: BLKS(0x0C091C80u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C091C34u, 3); goto L_0C091C34; }  /* 0C091C80 bra */
L_0C091CF0: BLKS(0x0C091CF0u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C091C24u, 3); goto L_0C091C24; }  /* 0C091CF0 bra */
}

void f_0C091D00(sh3_t *c)
{
	LOCALS;
	goto L_0C091D00;
L_0C091758: BLKS(0x0C091758u);
	r5 += 0x1u;  /* 0C091758 add #imm,Rn */
	IF(0x0C09175Au); W8(r0 + r3, r5); UPD(0x0C09175Cu, 2);  /* 0C09175A mov.b Rm,@(r0,Rn) */
L_0C09175C: BLKS(0x0C09175Cu);
	r7 = 0xB4u; UPD(0x0C09175Eu, 1);  /* 0C09175C mov.w @(disp,pc),Rn */
	r0 = R32(r14); UPD(0x0C091760u, 1);  /* 0C09175E mov.l @Rm,Rn */
	IF(0x0C091760u); MACL = r0 * r7;  /* 0C091760 mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C091764u, 3);  /* 0C091762 mov.l @(disp,pc),Rn */
	IF(0x0C091764u); r11 = MACL;  /* 0C091764 sts macl,Rn */
	r12 = 0x8Cu; UPD(0x0C091768u, 2);  /* 0C091766 mov.w @(disp,pc),Rn */
	r11 += r6;  /* 0C091768 add Rm,Rn */
	r9 = 0x88u; UPD(0x0C09176Cu, 2);  /* 0C09176A mov.w @(disp,pc),Rn */
	r12 += r11;  /* 0C09176C add Rm,Rn */
	r10 = 0xC058060u; UPD(0x0C091770u, 2);  /* 0C09176E mov.l @(disp,pc),Rn */
	r9 += r11;  /* 0C091770 add Rm,Rn */
	r5 = R32(r12); UPD(0x0C091774u, 2);  /* 0C091772 mov.l @Rm,Rn */
	r8 = 0xC058030u; UPD(0x0C091776u, 1);  /* 0C091774 mov.l @(disp,pc),Rn */
	IF(0x0C091776u); { u32 t_ = r10; PR = 0x0C09177Au; r4 = (u32)(s32)(s16)R16(r9); /* slot mov.w @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C09177Au); }  /* 0C091776 jsr @Rn */
L_0C09177A: BLKS(0x0C09177Au);
	r5 = R32(r12); UPD(0x0C09177Cu, 1);  /* 0C09177A mov.l @Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r9); UPD(0x0C09177Eu, 1);  /* 0C09177C mov.w @Rm,Rn */
	IF(0x0C09177Eu); { u32 t_ = r8; PR = 0x0C091782u; W32(r11 + 0x2Cu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLD(t_, 0x0C091782u); }  /* 0C09177E jsr @Rn */
L_0C091782: BLKS(0x0C091782u);
	r5 = R32(r11 + 0x24u); UPD(0x0C091784u, 1);  /* 0C091782 mov.l @(disp,Rm),Rn */
	r3 = R32(r11 + 0x28u); UPD(0x0C091786u, 1);  /* 0C091784 mov.l @(disp,Rm),Rn */
	r13 = R32(r11 + 0x2Cu); UPD(0x0C091788u, 1);  /* 0C091786 mov.l @(disp,Rm),Rn */
	r3 += r0;  /* 0C091788 add Rm,Rn */
	r5 += r13;  /* 0C09178A add Rm,Rn */
	r4 = R32(r11); UPD(0x0C09178Eu, 3);  /* 0C09178C mov.l @Rm,Rn */
	r12 = 0x100u; UPD(0x0C091790u, 1);  /* 0C09178E mov.w @(disp,pc),Rn */
	W32(r11 + 0x30u, r0); UPD(0x0C091792u, 1);  /* 0C091790 mov.l Rm,@(disp,Rn) */
	T = (r4 & r12) == 0;  /* 0C091792 tst Rm,Rn */
	W32(r11 + 0x24u, r5); UPD(0x0C091796u, 2);  /* 0C091794 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = !T; W32(r11 + 0x28u, r3); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0917E0u, 3); goto L_0C0917E0; } UPD(0x0C09179Au, 1); goto L_0C09179A; }  /* 0C091796 bf/s */
L_0C09179A: BLKS(0x0C09179Au);
	r5 = 0xB4u; UPD(0x0C09179Cu, 1);  /* 0C09179A mov.w @(disp,pc),Rn */
	r4 = 0x7Fu;  /* 0C09179C mov #imm,Rn */
	r1 = R32(r14); UPD(0x0C0917A0u, 2);  /* 0C09179E mov.l @Rm,Rn */
	IF(0x0C0917A0u); MACL = r1 * r5;  /* 0C0917A0 mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C0917A4u, 3);  /* 0C0917A2 mov.l @(disp,pc),Rn */
	IF(0x0C0917A4u); r3 = MACL;  /* 0C0917A4 sts macl,Rn */
	r6 = 0x86u; UPD(0x0C0917A8u, 2);  /* 0C0917A6 mov.w @(disp,pc),Rn */
	r3 += r2;  /* 0C0917A8 add Rm,Rn */
	r6 += r3;  /* 0C0917AA add Rm,Rn */
	r2 = (u32)(s32)(s16)R16(r6); UPD(0x0C0917AEu, 3);  /* 0C0917AC mov.w @Rm,Rn */
	T = (s32)r2 > (s32)r4;  /* 0C0917AE cmp/gt Rm,Rn */
	if (T) { UPD(0x0C0917B8u, 4); goto L_0C0917B8; }  /* 0C0917B0 bt */
L_0C0917B2: BLKS(0x0C0917B2u);
	r9 = 0x80u; UPD(0x0C0917B4u, 1);  /* 0C0917B2 mov.w @(disp,pc),Rn */
	W16(r6, r9); UPD(0x0C0917B6u, 1);  /* 0C0917B4 mov.w Rm,@Rn */
	r2 = r9;  /* 0C0917B6 mov Rm,Rn */
	UPD(0x0C0917B8u, 1);
L_0C0917B8: BLKS(0x0C0917B8u);
	r5 = 0x180u; UPD(0x0C0917BAu, 1);  /* 0C0917B8 mov.w @(disp,pc),Rn */
	r10 = (u32)(s32)(s16)r2;  /* 0C0917BA exts.w Rm,Rn */
	r7 = (u32)(s32)(s16)r5;  /* 0C0917BC exts.w Rm,Rn */
	T = (s32)r10 > (s32)r7;  /* 0C0917BE cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0917C6u, 6); goto L_0C0917C6; }  /* 0C0917C0 bf */
L_0C0917C2: BLKS(0x0C0917C2u);
	W16(r6, r7); UPD(0x0C0917C4u, 1);  /* 0C0917C2 mov.w Rm,@Rn */
	r2 = r5;  /* 0C0917C4 mov Rm,Rn */
	UPD(0x0C0917C6u, 1);
L_0C0917C6: BLKS(0x0C0917C6u);
	r1 = (u32)(s32)(s16)r2;  /* 0C0917C6 exts.w Rm,Rn */
	r1 += 0xFFFFFF84u;  /* 0C0917C8 add #imm,Rn */
	IF(0x0C0917CAu); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C0917CA shar Rn */
	IF(0x0C0917CCu); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C0917CC shar Rn */
	r4 = 0xFFFFDC4Eu; UPD(0x0C0917D0u, 5);  /* 0C0917CE mov.w @(disp,pc),Rn */
	IF(0x0C0917D0u); { u32 tv_ = (r4 + 0x0C0917D4u); u32 t_ = PHYS(tv_); IF(0x0C0917D2u); T = r1 & 1; r1 = (u32)((s32)r1 >> 1); /* slot shar Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0917D0 braf Rn */
L_0C0917E0: BLKS(0x0C0917E0u);
	r11 = 0xC0A9E40u; UPD(0x0C0917E2u, 1);  /* 0C0917E0 mov.l @(disp,pc),Rn */
	r5 = 0x5Au;  /* 0C0917E2 mov #imm,Rn */
	r4 = R32(r14); UPD(0x0C0917E6u, 2);  /* 0C0917E4 mov.l @Rm,Rn */
	IF(0x0C0917E6u); { u32 t_ = r11; PR = 0x0C0917EAu; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C0917EAu); }  /* 0C0917E6 jsr @Rn */
L_0C0917EA: BLKS(0x0C0917EAu);
	T = (r0 & r0) == 0;  /* 0C0917EA tst Rm,Rn */
	if (!T) { UPD(0x0C091800u, 4); goto L_0C091800; }  /* 0C0917EC bf */
L_0C0917EE: BLKS(0x0C0917EEu);
	r12 = 0xC058130u; UPD(0x0C0917F0u, 1);  /* 0C0917EE mov.l @(disp,pc),Rn */
	r8 = 0xC057430u; UPD(0x0C0917F2u, 1);  /* 0C0917F0 mov.l @(disp,pc),Rn */
	IF(0x0C0917F2u); { u32 t_ = r12; PR = 0x0C0917F6u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058130, 0x0C058130u, 0x0C0917F6u); }  /* 0C0917F2 jsr @Rn */
L_0C0917F6: BLKS(0x0C0917F6u);
	r4 = R32(r14); UPD(0x0C0917F8u, 1);  /* 0C0917F6 mov.l @Rm,Rn */
	IF(0x0C0917F8u); { u32 t_ = r8; PR = 0x0C0917FCu; r5 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C0917FCu); }  /* 0C0917F8 jsr @Rn */
L_0C0917FC: BLKS(0x0C0917FCu);
	{ IF(0x0C0917FEu); ; /* slot nop */ UPD(0x0C09179Au, 3); goto L_0C09179A; }  /* 0C0917FC bra */
L_0C091800: BLKS(0x0C091800u);
	r13 = 0xC0580D0u; UPD(0x0C091802u, 1);  /* 0C091800 mov.l @(disp,pc),Rn */
	IF(0x0C091802u); { u32 t_ = r13; PR = 0x0C091806u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0580D0, 0x0C0580D0u, 0x0C091806u); }  /* 0C091802 jsr @Rn */
L_0C091806: BLKS(0x0C091806u);
	{ IF(0x0C091808u); ; /* slot nop */ UPD(0x0C0917EEu, 3); goto L_0C0917EE; }  /* 0C091806 bra */
L_0C091C7A: BLKS(0x0C091C7Au);
	{ IF(0x0C091C7Cu); ; /* slot nop */ UPD(0x0C09175Cu, 3); goto L_0C09175C; }  /* 0C091C7A bra */
L_0C091D00: BLKS(0x0C091D00u);
	r8 = 0xB4u; UPD(0x0C091D02u, 1);  /* 0C091D00 mov.w @(disp,pc),Rn */
	r2 = R32(r14); UPD(0x0C091D04u, 1);  /* 0C091D02 mov.l @Rm,Rn */
	IF(0x0C091D04u); MACL = r2 * r8;  /* 0C091D04 mul.l Rm,Rn */
	r13 = 0xC26CD40u; UPD(0x0C091D08u, 3);  /* 0C091D06 mov.l @(disp,pc),Rn */
	IF(0x0C091D08u); r3 = MACL;  /* 0C091D08 sts macl,Rn */
	r3 += r13;  /* 0C091D0A add Rm,Rn */
	r9 = R32(r3 + 0x24u); UPD(0x0C091D0Eu, 3);  /* 0C091D0C mov.l @(disp,Rm),Rn */
	r6 = 0xFFC00000u; UPD(0x0C091D10u, 1);  /* 0C091D0E mov.l @(disp,pc),Rn */
	T = (s32)r9 >= (s32)r6;  /* 0C091D10 cmp/ge Rm,Rn */
	{ u32 c_ = T; r10 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C091D40u, 4); goto L_0C091D40; } goto L_0C091D16; }  /* 0C091D12 bt/s */
L_0C091D16: BLKS(0x0C091D16u);
	r0 = 0x8Cu; UPD(0x0C091D18u, 2);  /* 0C091D16 mov.w @(disp,pc),Rn */
	IF(0x0C091D18u); W32(r0 + r3, r10); UPD(0x0C091D1Au, 1);  /* 0C091D18 mov.l Rm,@(r0,Rn) */
L_0C091D1A: BLKS(0x0C091D1Au);
	r3 = 0xB4u; UPD(0x0C091D1Cu, 1);  /* 0C091D1A mov.w @(disp,pc),Rn */
	r11 = R32(r14); UPD(0x0C091D1Eu, 1);  /* 0C091D1C mov.l @Rm,Rn */
	IF(0x0C091D1Eu); MACL = r11 * r3;  /* 0C091D1E mul.l Rm,Rn */
	r4 = 0xC26CD40u; UPD(0x0C091D22u, 3);  /* 0C091D20 mov.l @(disp,pc),Rn */
	IF(0x0C091D22u); r3 = MACL;  /* 0C091D22 sts macl,Rn */
	r0 = 0x8Cu; UPD(0x0C091D26u, 2);  /* 0C091D24 mov.w @(disp,pc),Rn */
	r3 += r4;  /* 0C091D26 add Rm,Rn */
	IF(0x0C091D28u); r12 = R32(r0 + r3); UPD(0x0C091D2Au, 2);  /* 0C091D28 mov.l @(r0,Rm),Rn */
	T = (r12 & r12) == 0;  /* 0C091D2A tst Rm,Rn */
	{ u32 c_ = !T; r0 += 0x13u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C091C7Au, 4); goto L_0C091C7A; } goto L_0C091D30; }  /* 0C091D2C bf/s */
L_0C091D30: BLKS(0x0C091D30u);
	{ IF(0x0C091D32u); r5 = (u32)(s32)(s8)R8(r0 + r3); /* slot mov.b @(r0,Rm),Rn */ UPD(0x0C091758u, 4); goto L_0C091758; }  /* 0C091D30 bra */
L_0C091D40: BLKS(0x0C091D40u);
	r7 = 0x8Cu; UPD(0x0C091D42u, 1);  /* 0C091D40 mov.w @(disp,pc),Rn */
	r7 += r3;  /* 0C091D42 add Rm,Rn */
	r1 = R32(r7); UPD(0x0C091D46u, 2);  /* 0C091D44 mov.l @Rm,Rn */
	r0 = 0xFFFFE000u; UPD(0x0C091D48u, 1);  /* 0C091D46 mov.w @(disp,pc),Rn */
	r1 += r0;  /* 0C091D48 add Rm,Rn */
	{ W32(r7, r1); /* slot mov.l Rm,@Rn */ UPD(0x0C091D1Au, 4); goto L_0C091D1A; }  /* 0C091D4A bra */
}

void f_0C091D50(sh3_t *c)
{
	LOCALS;
	goto L_0C091D50;
L_0C09175C: BLKS(0x0C09175Cu);
	r7 = 0xB4u; UPD(0x0C09175Eu, 1);  /* 0C09175C mov.w @(disp,pc),Rn */
	r0 = R32(r14); UPD(0x0C091760u, 1);  /* 0C09175E mov.l @Rm,Rn */
	IF(0x0C091760u); MACL = r0 * r7;  /* 0C091760 mul.l Rm,Rn */
	r6 = 0xC26CD40u; UPD(0x0C091764u, 3);  /* 0C091762 mov.l @(disp,pc),Rn */
	IF(0x0C091764u); r11 = MACL;  /* 0C091764 sts macl,Rn */
	r12 = 0x8Cu; UPD(0x0C091768u, 2);  /* 0C091766 mov.w @(disp,pc),Rn */
	r11 += r6;  /* 0C091768 add Rm,Rn */
	r9 = 0x88u; UPD(0x0C09176Cu, 2);  /* 0C09176A mov.w @(disp,pc),Rn */
	r12 += r11;  /* 0C09176C add Rm,Rn */
	r10 = 0xC058060u; UPD(0x0C091770u, 2);  /* 0C09176E mov.l @(disp,pc),Rn */
	r9 += r11;  /* 0C091770 add Rm,Rn */
	r5 = R32(r12); UPD(0x0C091774u, 2);  /* 0C091772 mov.l @Rm,Rn */
	r8 = 0xC058030u; UPD(0x0C091776u, 1);  /* 0C091774 mov.l @(disp,pc),Rn */
	IF(0x0C091776u); { u32 t_ = r10; PR = 0x0C09177Au; r4 = (u32)(s32)(s16)R16(r9); /* slot mov.w @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C09177Au); }  /* 0C091776 jsr @Rn */
L_0C09177A: BLKS(0x0C09177Au);
	r5 = R32(r12); UPD(0x0C09177Cu, 1);  /* 0C09177A mov.l @Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r9); UPD(0x0C09177Eu, 1);  /* 0C09177C mov.w @Rm,Rn */
	IF(0x0C09177Eu); { u32 t_ = r8; PR = 0x0C091782u; W32(r11 + 0x2Cu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLD(t_, 0x0C091782u); }  /* 0C09177E jsr @Rn */
L_0C091782: BLKS(0x0C091782u);
	r5 = R32(r11 + 0x24u); UPD(0x0C091784u, 1);  /* 0C091782 mov.l @(disp,Rm),Rn */
	r3 = R32(r11 + 0x28u); UPD(0x0C091786u, 1);  /* 0C091784 mov.l @(disp,Rm),Rn */
	r13 = R32(r11 + 0x2Cu); UPD(0x0C091788u, 1);  /* 0C091786 mov.l @(disp,Rm),Rn */
	r3 += r0;  /* 0C091788 add Rm,Rn */
	r5 += r13;  /* 0C09178A add Rm,Rn */
	r4 = R32(r11); UPD(0x0C09178Eu, 3);  /* 0C09178C mov.l @Rm,Rn */
	r12 = 0x100u; UPD(0x0C091790u, 1);  /* 0C09178E mov.w @(disp,pc),Rn */
	W32(r11 + 0x30u, r0); UPD(0x0C091792u, 1);  /* 0C091790 mov.l Rm,@(disp,Rn) */
	T = (r4 & r12) == 0;  /* 0C091792 tst Rm,Rn */
	W32(r11 + 0x24u, r5); UPD(0x0C091796u, 2);  /* 0C091794 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = !T; W32(r11 + 0x28u, r3); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0917E0u, 3); goto L_0C0917E0; } UPD(0x0C09179Au, 1); goto L_0C09179A; }  /* 0C091796 bf/s */
L_0C09179A: BLKS(0x0C09179Au);
	r5 = 0xB4u; UPD(0x0C09179Cu, 1);  /* 0C09179A mov.w @(disp,pc),Rn */
	r4 = 0x7Fu;  /* 0C09179C mov #imm,Rn */
	r1 = R32(r14); UPD(0x0C0917A0u, 2);  /* 0C09179E mov.l @Rm,Rn */
	IF(0x0C0917A0u); MACL = r1 * r5;  /* 0C0917A0 mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C0917A4u, 3);  /* 0C0917A2 mov.l @(disp,pc),Rn */
	IF(0x0C0917A4u); r3 = MACL;  /* 0C0917A4 sts macl,Rn */
	r6 = 0x86u; UPD(0x0C0917A8u, 2);  /* 0C0917A6 mov.w @(disp,pc),Rn */
	r3 += r2;  /* 0C0917A8 add Rm,Rn */
	r6 += r3;  /* 0C0917AA add Rm,Rn */
	r2 = (u32)(s32)(s16)R16(r6); UPD(0x0C0917AEu, 3);  /* 0C0917AC mov.w @Rm,Rn */
	T = (s32)r2 > (s32)r4;  /* 0C0917AE cmp/gt Rm,Rn */
	if (T) { UPD(0x0C0917B8u, 4); goto L_0C0917B8; }  /* 0C0917B0 bt */
L_0C0917B2: BLKS(0x0C0917B2u);
	r9 = 0x80u; UPD(0x0C0917B4u, 1);  /* 0C0917B2 mov.w @(disp,pc),Rn */
	W16(r6, r9); UPD(0x0C0917B6u, 1);  /* 0C0917B4 mov.w Rm,@Rn */
	r2 = r9;  /* 0C0917B6 mov Rm,Rn */
	UPD(0x0C0917B8u, 1);
L_0C0917B8: BLKS(0x0C0917B8u);
	r5 = 0x180u; UPD(0x0C0917BAu, 1);  /* 0C0917B8 mov.w @(disp,pc),Rn */
	r10 = (u32)(s32)(s16)r2;  /* 0C0917BA exts.w Rm,Rn */
	r7 = (u32)(s32)(s16)r5;  /* 0C0917BC exts.w Rm,Rn */
	T = (s32)r10 > (s32)r7;  /* 0C0917BE cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0917C6u, 6); goto L_0C0917C6; }  /* 0C0917C0 bf */
L_0C0917C2: BLKS(0x0C0917C2u);
	W16(r6, r7); UPD(0x0C0917C4u, 1);  /* 0C0917C2 mov.w Rm,@Rn */
	r2 = r5;  /* 0C0917C4 mov Rm,Rn */
	UPD(0x0C0917C6u, 1);
L_0C0917C6: BLKS(0x0C0917C6u);
	r1 = (u32)(s32)(s16)r2;  /* 0C0917C6 exts.w Rm,Rn */
	r1 += 0xFFFFFF84u;  /* 0C0917C8 add #imm,Rn */
	IF(0x0C0917CAu); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C0917CA shar Rn */
	IF(0x0C0917CCu); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C0917CC shar Rn */
	r4 = 0xFFFFDC4Eu; UPD(0x0C0917D0u, 5);  /* 0C0917CE mov.w @(disp,pc),Rn */
	IF(0x0C0917D0u); { u32 tv_ = (r4 + 0x0C0917D4u); u32 t_ = PHYS(tv_); IF(0x0C0917D2u); T = r1 & 1; r1 = (u32)((s32)r1 >> 1); /* slot shar Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0917D0 braf Rn */
L_0C0917E0: BLKS(0x0C0917E0u);
	r11 = 0xC0A9E40u; UPD(0x0C0917E2u, 1);  /* 0C0917E0 mov.l @(disp,pc),Rn */
	r5 = 0x5Au;  /* 0C0917E2 mov #imm,Rn */
	r4 = R32(r14); UPD(0x0C0917E6u, 2);  /* 0C0917E4 mov.l @Rm,Rn */
	IF(0x0C0917E6u); { u32 t_ = r11; PR = 0x0C0917EAu; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C0917EAu); }  /* 0C0917E6 jsr @Rn */
L_0C0917EA: BLKS(0x0C0917EAu);
	T = (r0 & r0) == 0;  /* 0C0917EA tst Rm,Rn */
	if (!T) { UPD(0x0C091800u, 4); goto L_0C091800; }  /* 0C0917EC bf */
L_0C0917EE: BLKS(0x0C0917EEu);
	r12 = 0xC058130u; UPD(0x0C0917F0u, 1);  /* 0C0917EE mov.l @(disp,pc),Rn */
	r8 = 0xC057430u; UPD(0x0C0917F2u, 1);  /* 0C0917F0 mov.l @(disp,pc),Rn */
	IF(0x0C0917F2u); { u32 t_ = r12; PR = 0x0C0917F6u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058130, 0x0C058130u, 0x0C0917F6u); }  /* 0C0917F2 jsr @Rn */
L_0C0917F6: BLKS(0x0C0917F6u);
	r4 = R32(r14); UPD(0x0C0917F8u, 1);  /* 0C0917F6 mov.l @Rm,Rn */
	IF(0x0C0917F8u); { u32 t_ = r8; PR = 0x0C0917FCu; r5 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C0917FCu); }  /* 0C0917F8 jsr @Rn */
L_0C0917FC: BLKS(0x0C0917FCu);
	{ IF(0x0C0917FEu); ; /* slot nop */ UPD(0x0C09179Au, 3); goto L_0C09179A; }  /* 0C0917FC bra */
L_0C091800: BLKS(0x0C091800u);
	r13 = 0xC0580D0u; UPD(0x0C091802u, 1);  /* 0C091800 mov.l @(disp,pc),Rn */
	IF(0x0C091802u); { u32 t_ = r13; PR = 0x0C091806u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0580D0, 0x0C0580D0u, 0x0C091806u); }  /* 0C091802 jsr @Rn */
L_0C091806: BLKS(0x0C091806u);
	{ IF(0x0C091808u); ; /* slot nop */ UPD(0x0C0917EEu, 3); goto L_0C0917EE; }  /* 0C091806 bra */
L_0C091A92: BLKS(0x0C091A92u);
	IF(0x0C091A92u); W8(r0 + r2, r1); UPD(0x0C091A94u, 1);  /* 0C091A92 mov.b Rm,@(r0,Rn) */
	{ IF(0x0C091A96u); ; /* slot nop */ UPD(0x0C09175Cu, 3); goto L_0C09175C; }  /* 0C091A94 bra */
L_0C091D50: BLKS(0x0C091D50u);
	r1 = R32(r14); UPD(0x0C091D52u, 1);  /* 0C091D50 mov.l @Rm,Rn */
	r0 = 0xB4u; UPD(0x0C091D54u, 1);  /* 0C091D52 mov.w @(disp,pc),Rn */
	IF(0x0C091D54u); MACL = r1 * r0;  /* 0C091D54 mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C091D58u, 3);  /* 0C091D56 mov.l @(disp,pc),Rn */
	IF(0x0C091D58u); r13 = MACL;  /* 0C091D58 sts macl,Rn */
	r13 += r7;  /* 0C091D5A add Rm,Rn */
	r10 = r13;  /* 0C091D5C mov Rm,Rn */
	r13 += 0x64u;  /* 0C091D5E add #imm,Rn */
	r2 = R32(r13); UPD(0x0C091D62u, 5);  /* 0C091D60 mov.l @Rm,Rn */
	r10 += 0x5Cu;  /* 0C091D62 add #imm,Rn */
	r13 += 0xFFFFFF9Cu;  /* 0C091D64 add #imm,Rn */
	W32(r10, r2); UPD(0x0C091D68u, 3);  /* 0C091D66 mov.l Rm,@Rn */
	r6 = r13;  /* 0C091D68 mov Rm,Rn */
	r13 += 0x68u;  /* 0C091D6A add #imm,Rn */
	r7 = R32(r13); UPD(0x0C091D6Eu, 3);  /* 0C091D6C mov.l @Rm,Rn */
	r6 += 0x60u;  /* 0C091D6E add #imm,Rn */
	r9 = 0xC057390u; UPD(0x0C091D72u, 2);  /* 0C091D70 mov.l @(disp,pc),Rn */
	r13 += 0xFFFFFF98u;  /* 0C091D72 add #imm,Rn */
	W32(r6, r7); UPD(0x0C091D76u, 2);  /* 0C091D74 mov.l Rm,@Rn */
	r8 = 0x88u; UPD(0x0C091D78u, 1);  /* 0C091D76 mov.w @(disp,pc),Rn */
	r4 = R32(r13 + 0x24u); UPD(0x0C091D7Au, 1);  /* 0C091D78 mov.l @(disp,Rm),Rn */
	r8 += r13;  /* 0C091D7A add Rm,Rn */
	r5 = R32(r13 + 0x28u); UPD(0x0C091D7Eu, 2);  /* 0C091D7C mov.l @(disp,Rm),Rn */
	IF(0x0C091D7Eu); { u32 t_ = r9; PR = 0x0C091D82u; r6 = R32(r10); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C057390, 0x0C057390u, 0x0C091D82u); }  /* 0C091D7E jsr @Rn */
L_0C091D82: BLKS(0x0C091D82u);
	W16(r8, r0); UPD(0x0C091D84u, 1);  /* 0C091D82 mov.w Rm,@Rn */
	r1 = 0x2u;  /* 0C091D84 mov #imm,Rn */
	r2 = 0x9Fu; UPD(0x0C091D88u, 2);  /* 0C091D86 mov.w @(disp,pc),Rn */
	{ r0 = r13; /* slot mov Rm,Rn */ UPD(0x0C091A92u, 3); goto L_0C091A92; }  /* 0C091D88 bra */
}

void f_0C091E90(sh3_t *c)
{
	LOCALS;
L_0C091E90: BLKS(0x0C091E90u);
	r12 = 0xC0A03F0u; UPD(0x0C091E92u, 1);  /* 0C091E90 mov.l @(disp,pc),Rn */
	IF(0x0C091E92u); { u32 t_ = r12; PR = 0x0C091E96u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C091E96u); }  /* 0C091E92 jsr @Rn */
L_0C091E96: BLKS(0x0C091E96u);
	IF(0x0C091E96u); T = (s32)r0 >= 0;  /* 0C091E96 cmp/pz Rn */
	{ u32 c_ = !T; r11 = R32(r14); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C091F4Au, 4); goto L_0C091F4A; } UPD(0x0C091E9Cu, 1); goto L_0C091E9C; }  /* 0C091E98 bf/s */
L_0C091E9C: BLKS(0x0C091E9Cu);
	r13 = 0xB4u; UPD(0x0C091E9Eu, 1);  /* 0C091E9C mov.w @(disp,pc),Rn */
	IF(0x0C091E9Eu); MACL = r11 * r13;  /* 0C091E9E mul.l Rm,Rn */
	r8 = 0xC26CD40u; UPD(0x0C091EA2u, 3);  /* 0C091EA0 mov.l @(disp,pc),Rn */
	IF(0x0C091EA2u); r11 = MACL;  /* 0C091EA2 sts macl,Rn */
	IF(0x0C091EA4u); MACL = r0 * r13;  /* 0C091EA4 mul.l Rm,Rn */
	r11 += r8;  /* 0C091EA6 add Rm,Rn */
	r6 = 0x84u; UPD(0x0C091EAAu, 5);  /* 0C091EA8 mov.w @(disp,pc),Rn */
	IF(0x0C091EAAu); r13 = MACL;  /* 0C091EAA sts macl,Rn */
	r10 = r11;  /* 0C091EAC mov Rm,Rn */
	r13 += r8;  /* 0C091EAE add Rm,Rn */
	r10 += r6;  /* 0C091EB0 add Rm,Rn */
	r6 += r13;  /* 0C091EB2 add Rm,Rn */
	r6 += 0x2u;  /* 0C091EB4 add #imm,Rn */
	r5 = (u32)(s32)(s16)R16(r6); UPD(0x0C091EB8u, 7);  /* 0C091EB6 mov.w @Rm,Rn */
	r10 += 0x2u;  /* 0C091EB8 add #imm,Rn */
	r9 = 0xC058060u; UPD(0x0C091EBCu, 2);  /* 0C091EBA mov.l @(disp,pc),Rn */
	r4 = r5;  /* 0C091EBC mov Rm,Rn */
	W16(r10, r5); UPD(0x0C091EC0u, 2);  /* 0C091EBE mov.w Rm,@Rn */
	W32(r14 + 0x4u, r5); UPD(0x0C091EC2u, 1);  /* 0C091EC0 mov.l Rm,@(disp,Rn) */
	IF(0x0C091EC2u); { u32 t_ = r9; PR = 0x0C091EC6u; r5 = R32(r11 + 0x2Cu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C091EC6u); }  /* 0C091EC2 jsr @Rn */
L_0C091EC6: BLKS(0x0C091EC6u);
	r2 = 0x66666667u; UPD(0x0C091EC8u, 1);  /* 0C091EC6 mov.l @(disp,pc),Rn */
	IF(0x0C091EC8u); r0 <<= 2;  /* 0C091EC8 shll2 Rn */
	{ s64 r_ = (s64)(s32)r0 * (s64)(s32)r2; MACH = (u32)((u64)r_ >> 32); MACL = (u32)r_; }  /* 0C091ECA dmuls.l Rm,Rn */
	r1 = R32(r11 + 0x30u); UPD(0x0C091ECEu, 4);  /* 0C091ECC mov.l @(disp,Rm),Rn */
	IF(0x0C091ECEu); r4 = MACH;  /* 0C091ECE sts mach,Rn */
	IF(0x0C091ED0u); T = r4 & 1; r4 = (u32)((s32)r4 >> 1);  /* 0C091ED0 shar Rn */
	IF(0x0C091ED2u); T = r0 >> 31; r0 <<= 1;  /* 0C091ED2 shll Rn */
	{ u32 a_ = r0, t_ = a_ - r0, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r0 = r_; }  /* 0C091ED4 subc Rm,Rn */
	r4 -= r0;  /* 0C091ED6 sub Rm,Rn */
	r0 = R32(r13 + 0x24u); UPD(0x0C091EDAu, 6);  /* 0C091ED8 mov.l @(disp,Rm),Rn */
	r8 = 0xC058030u; UPD(0x0C091EDCu, 1);  /* 0C091EDA mov.l @(disp,pc),Rn */
	r0 += r4;  /* 0C091EDC add Rm,Rn */
	r0 += r1;  /* 0C091EDE add Rm,Rn */
	r4 = R32(r14 + 0x4u); UPD(0x0C091EE2u, 3);  /* 0C091EE0 mov.l @(disp,Rm),Rn */
	r5 = R32(r11 + 0x2Cu); UPD(0x0C091EE4u, 1);  /* 0C091EE2 mov.l @(disp,Rm),Rn */
	IF(0x0C091EE4u); { u32 t_ = r8; PR = 0x0C091EE8u; W32(r11 + 0x24u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C091EE8u); }  /* 0C091EE4 jsr @Rn */
L_0C091EE8: BLKS(0x0C091EE8u);
	r3 = 0xA8u; UPD(0x0C091EEAu, 1);  /* 0C091EE8 mov.w @(disp,pc),Rn */
	r5 = r11;  /* 0C091EEA mov Rm,Rn */
	r7 = R32(r13 + 0x28u); UPD(0x0C091EEEu, 2);  /* 0C091EEC mov.l @(disp,Rm),Rn */
	r5 += r3;  /* 0C091EEE add Rm,Rn */
	r7 += r0;  /* 0C091EF0 add Rm,Rn */
	r6 = 0xAFu; UPD(0x0C091EF4u, 3);  /* 0C091EF2 mov.w @(disp,pc),Rn */
	r3 += r13;  /* 0C091EF4 add Rm,Rn */
	r3 += 0x1u;  /* 0C091EF6 add #imm,Rn */
	r0 = r11;  /* 0C091EF8 mov Rm,Rn */
	r9 = (u32)(s32)(s8)R8(r3); UPD(0x0C091EFCu, 4);  /* 0C091EFA mov.b @Rm,Rn */
	r5 += 0x1u;  /* 0C091EFC add #imm,Rn */
	IF(0x0C091EFEu); r10 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C091F00u, 2);  /* 0C091EFE mov.b @(r0,Rm),Rn */
	r4 = R32(r13 + 0xCu); UPD(0x0C091F02u, 1);  /* 0C091F00 mov.l @(disp,Rm),Rn */
	r9 += r10;  /* 0C091F02 add Rm,Rn */
	r8 = 0xC0A0380u; UPD(0x0C091F06u, 2);  /* 0C091F04 mov.l @(disp,pc),Rn */
	r2 = R32(r13 + 0x38u); UPD(0x0C091F08u, 1);  /* 0C091F06 mov.l @(disp,Rm),Rn */
	W8(r5, r9); UPD(0x0C091F0Au, 1);  /* 0C091F08 mov.b Rm,@Rn */
	W32(r11 + 0xCu, r4); UPD(0x0C091F0Cu, 1);  /* 0C091F0A mov.l Rm,@(disp,Rn) */
	W32(r11 + 0x28u, r7); UPD(0x0C091F0Eu, 1);  /* 0C091F0C mov.l Rm,@(disp,Rn) */
	W32(r11 + 0x38u, r2); UPD(0x0C091F10u, 1);  /* 0C091F0E mov.l Rm,@(disp,Rn) */
	IF(0x0C091F10u); { u32 t_ = r8; PR = 0x0C091F14u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C091F14u); }  /* 0C091F10 jsr @Rn */
L_0C091F14: BLKS(0x0C091F14u);
	r0 = R32(r13 + 0xCu); UPD(0x0C091F16u, 1);  /* 0C091F14 mov.l @(disp,Rm),Rn */
	r3 = 0xFFFFFFF9u;  /* 0C091F16 mov #imm,Rn */
	T = r0 == 0x10u;  /* 0C091F18 cmp/eq #imm,r0 */
	r0 = 0xFFFFFFFFu;  /* 0C091F1A mov #imm,Rn */
	{ u32 t_ = 0u - r0, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r2 = r_; }  /* 0C091F1C negc Rm,Rn */
	r7 = 0xA1u; UPD(0x0C091F20u, 5);  /* 0C091F1E mov.w @(disp,pc),Rn */
	r0 = r13;  /* 0C091F20 mov Rm,Rn */
	IF(0x0C091F22u); r6 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C091F24u, 2);  /* 0C091F22 mov.b @(r0,Rm),Rn */
	IF(0x0C091F24u); ARG0(0x463Cu); { s32 s_ = (s32)r3; if (s_ >= 0) r6 <<= (s_ & 31); else if ((s_ & 31) == 0) r6 = (u32)((s32)r6 >> 31); else r6 = (u32)((s32)r6 >> ((~s_ & 31) + 1)); }  /* 0C091F24 shad Rm,Rn */
	r0 = r6;  /* 0C091F26 mov Rm,Rn */
	r0 ^= 0x1u;  /* 0C091F28 xor #imm,r0 */
	r0 &= 0x1u;  /* 0C091F2A and #imm,r0 */
	r2 |= r0;  /* 0C091F2C or Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C091F2E tst Rm,Rn */
	if (!T) { UPD(0x0C091FDCu, 9); goto L_0C091FDC; }  /* 0C091F30 bf */
L_0C091F32: BLKS(0x0C091F32u);
	r7 = R32(r11 + 0x8u); UPD(0x0C091F34u, 1);  /* 0C091F32 mov.l @(disp,Rm),Rn */
	r3 = 0xC0A03B0u; UPD(0x0C091F36u, 1);  /* 0C091F34 mov.l @(disp,pc),Rn */
	r7 += 0x1u;  /* 0C091F36 add #imm,Rn */
	W32(r11 + 0x8u, r7); UPD(0x0C091F3Au, 2);  /* 0C091F38 mov.l Rm,@(disp,Rn) */
	W32(r11 + 0xCu, r2); UPD(0x0C091F3Cu, 1);  /* 0C091F3A mov.l Rm,@(disp,Rn) */
	IF(0x0C091F3Cu); { u32 t_ = r3; PR = 0x0C091F40u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03B0, 0x0C0A03B0u, 0x0C091F40u); }  /* 0C091F3C jsr @Rn */
L_0C091F40: BLKS(0x0C091F40u);
	IF(0x0C091F40u); { u32 t_ = r12; PR = 0x0C091F44u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C091F44u); }  /* 0C091F40 jsr @Rn */
L_0C091F44: BLKS(0x0C091F44u);
	IF(0x0C091F44u); T = (s32)r0 >= 0;  /* 0C091F44 cmp/pz Rn */
	{ u32 c_ = T; r7 = R32(r14); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C091F52u, 4); goto L_0C091F52; } UPD(0x0C091F4Au, 1); goto L_0C091F4A; }  /* 0C091F46 bt/s */
L_0C091F4A: BLKS(0x0C091F4Au);
	r4 = 0xFFFFD352u; UPD(0x0C091F4Cu, 1);  /* 0C091F4A mov.w @(disp,pc),Rn */
	IF(0x0C091F4Cu); { u32 tv_ = (r4 + 0x0C091F50u); u32 t_ = PHYS(tv_); r4 = R32(r14); /* slot mov.l @Rm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C091F4C braf Rn */
L_0C091F52: BLKS(0x0C091F52u);
	r11 = 0xB4u; UPD(0x0C091F54u, 1);  /* 0C091F52 mov.w @(disp,pc),Rn */
	IF(0x0C091F54u); MACL = r7 * r11;  /* 0C091F54 mul.l Rm,Rn */
	r13 = 0xC26CD40u; UPD(0x0C091F58u, 3);  /* 0C091F56 mov.l @(disp,pc),Rn */
	IF(0x0C091F58u); r7 = MACL;  /* 0C091F58 sts macl,Rn */
	IF(0x0C091F5Au); MACL = r0 * r11;  /* 0C091F5A mul.l Rm,Rn */
	r7 += r13;  /* 0C091F5C add Rm,Rn */
	r2 = 0xA8u; UPD(0x0C091F60u, 5);  /* 0C091F5E mov.w @(disp,pc),Rn */
	IF(0x0C091F60u); r9 = MACL;  /* 0C091F60 sts macl,Rn */
	r9 += r13;  /* 0C091F62 add Rm,Rn */
	r12 = R32(r9 + 0x28u); UPD(0x0C091F66u, 3);  /* 0C091F64 mov.l @(disp,Rm),Rn */
	r5 = r7;  /* 0C091F66 mov Rm,Rn */
	W32(r7 + 0x28u, r12); UPD(0x0C091F6Au, 2);  /* 0C091F68 mov.l Rm,@(disp,Rn) */
	r5 += r2;  /* 0C091F6A add Rm,Rn */
	r12 = 0xAFu; UPD(0x0C091F6Eu, 2);  /* 0C091F6C mov.w @(disp,pc),Rn */
	r2 += r9;  /* 0C091F6E add Rm,Rn */
	r2 += 0x1u;  /* 0C091F70 add #imm,Rn */
	r12 += r7;  /* 0C091F72 add Rm,Rn */
	r10 = (u32)(s32)(s8)R8(r2); UPD(0x0C091F76u, 4);  /* 0C091F74 mov.b @Rm,Rn */
	r5 += 0x1u;  /* 0C091F76 add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r12); UPD(0x0C091F7Au, 2);  /* 0C091F78 mov.b @Rm,Rn */
	r10 += r6;  /* 0C091F7A add Rm,Rn */
	W8(r5, r10); UPD(0x0C091F7Eu, 2);  /* 0C091F7C mov.b Rm,@Rn */
	r10 = 0x98u; UPD(0x0C091F80u, 1);  /* 0C091F7E mov.w @(disp,pc),Rn */
	r10 += r7;  /* 0C091F80 add Rm,Rn */
	r2 = r10;  /* 0C091F82 mov Rm,Rn */
	r2 += 0x1u;  /* 0C091F84 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C091F88u, 4);  /* 0C091F86 mov.b @Rm,Rn */
	r8 = R32(r9 + 0x24u); UPD(0x0C091F8Au, 1);  /* 0C091F88 mov.l @(disp,Rm),Rn */
	r0 += 0x1u;  /* 0C091F8A add #imm,Rn */
	r1 = 0x210000u; UPD(0x0C091F8Eu, 2);  /* 0C091F8C mov.l @(disp,pc),Rn */
	r11 = r0 & 0xFF;  /* 0C091F8E extu.b Rm,Rn */
	r4 = R32(r9 + 0x38u); UPD(0x0C091F92u, 2);  /* 0C091F90 mov.l @(disp,Rm),Rn */
	r8 += r1;  /* 0C091F92 add Rm,Rn */
	W8(r2, r0); UPD(0x0C091F96u, 2);  /* 0C091F94 mov.b Rm,@Rn */
	W32(r7 + 0x24u, r8); UPD(0x0C091F98u, 1);  /* 0C091F96 mov.l Rm,@(disp,Rn) */
	r0 = r11;  /* 0C091F98 mov Rm,Rn */
	T = r0 == 0x4u;  /* 0C091F9A cmp/eq #imm,r0 */
	{ u32 c_ = !T; W32(r7 + 0x38u, r4); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C091FDCu, 5); goto L_0C091FDC; } UPD(0x0C091FA0u, 1); goto L_0C091FA0; }  /* 0C091F9C bf/s */
L_0C091FA0: BLKS(0x0C091FA0u);
	r3 = 0x0u;  /* 0C091FA0 mov #imm,Rn */
	r0 = R32(r7 + 0xCu); UPD(0x0C091FA4u, 2);  /* 0C091FA2 mov.l @(disp,Rm),Rn */
	T = r0 == 0xFu;  /* 0C091FA4 cmp/eq #imm,r0 */
	{ u32 c_ = T; W8(r2, r3); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C091FC0u, 4); goto L_0C091FC0; } UPD(0x0C091FAAu, 1); goto L_0C091FAA; }  /* 0C091FA6 bt/s */
L_0C091FAA: BLKS(0x0C091FAAu);
	r0 += 0x1u;  /* 0C091FAA add #imm,Rn */
	r4 = 0xFFFFD472u; UPD(0x0C091FAEu, 2);  /* 0C091FAC mov.w @(disp,pc),Rn */
	IF(0x0C091FAEu); { u32 tv_ = (r4 + 0x0C091FB2u); u32 t_ = PHYS(tv_); W32(r7 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C091FAE braf Rn */
L_0C091FC0: BLKS(0x0C091FC0u);
	r0 = 0xC0A03B0u; UPD(0x0C091FC2u, 1);  /* 0C091FC0 mov.l @(disp,pc),Rn */
	r5 = 0x40u;  /* 0C091FC2 mov #imm,Rn */
	r13 = 0x0u;  /* 0C091FC4 mov #imm,Rn */
	r4 = R32(r14); UPD(0x0C091FC8u, 3);  /* 0C091FC6 mov.l @Rm,Rn */
	W32(r7 + 0x8u, r5); UPD(0x0C091FCAu, 1);  /* 0C091FC8 mov.l Rm,@(disp,Rn) */
	IF(0x0C091FCAu); { u32 t_ = r0; PR = 0x0C091FCEu; W32(r7 + 0xCu, r13); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A03B0, 0x0C0A03B0u, 0x0C091FCEu); }  /* 0C091FCA jsr @Rn */
L_0C091FCE: BLKS(0x0C091FCEu);
	r4 = 0xA1u; UPD(0x0C091FD0u, 1);  /* 0C091FCE mov.w @(disp,pc),Rn */
	r4 += r9;  /* 0C091FD0 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r4); UPD(0x0C091FD4u, 2);  /* 0C091FD2 mov.b @Rm,Rn */
	r0 &= 0x7Fu;  /* 0C091FD4 and #imm,r0 */
	W8(r10, r11); UPD(0x0C091FD8u, 2);  /* 0C091FD6 mov.b Rm,@Rn */
	W8(r4, r0); UPD(0x0C091FDAu, 1);  /* 0C091FD8 mov.b Rm,@Rn */
	W8(r12, r13); UPD(0x0C091FDCu, 1);  /* 0C091FDA mov.b Rm,@Rn */
L_0C091FDC: BLKS(0x0C091FDCu);
	r13 = 0xFFFFCF74u; UPD(0x0C091FDEu, 1);  /* 0C091FDC mov.w @(disp,pc),Rn */
	IF(0x0C091FDEu); { u32 tv_ = (r13 + 0x0C091FE2u); u32 t_ = PHYS(tv_); r14 += 0x40u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C091FDE braf Rn */
}

void f_0C091FF0(sh3_t *c)
{
	LOCALS;
	goto L_0C091FF0;
L_0C091F40: BLKS(0x0C091F40u);
	IF(0x0C091F40u); { u32 t_ = r12; PR = 0x0C091F44u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C091F44u); }  /* 0C091F40 jsr @Rn */
L_0C091F44: BLKS(0x0C091F44u);
	IF(0x0C091F44u); T = (s32)r0 >= 0;  /* 0C091F44 cmp/pz Rn */
	{ u32 c_ = T; r7 = R32(r14); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C091F52u, 4); goto L_0C091F52; } UPD(0x0C091F4Au, 1); goto L_0C091F4A; }  /* 0C091F46 bt/s */
L_0C091F4A: BLKS(0x0C091F4Au);
	r4 = 0xFFFFD352u; UPD(0x0C091F4Cu, 1);  /* 0C091F4A mov.w @(disp,pc),Rn */
	IF(0x0C091F4Cu); { u32 tv_ = (r4 + 0x0C091F50u); u32 t_ = PHYS(tv_); r4 = R32(r14); /* slot mov.l @Rm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C091F4C braf Rn */
L_0C091F52: BLKS(0x0C091F52u);
	r11 = 0xB4u; UPD(0x0C091F54u, 1);  /* 0C091F52 mov.w @(disp,pc),Rn */
	IF(0x0C091F54u); MACL = r7 * r11;  /* 0C091F54 mul.l Rm,Rn */
	r13 = 0xC26CD40u; UPD(0x0C091F58u, 3);  /* 0C091F56 mov.l @(disp,pc),Rn */
	IF(0x0C091F58u); r7 = MACL;  /* 0C091F58 sts macl,Rn */
	IF(0x0C091F5Au); MACL = r0 * r11;  /* 0C091F5A mul.l Rm,Rn */
	r7 += r13;  /* 0C091F5C add Rm,Rn */
	r2 = 0xA8u; UPD(0x0C091F60u, 5);  /* 0C091F5E mov.w @(disp,pc),Rn */
	IF(0x0C091F60u); r9 = MACL;  /* 0C091F60 sts macl,Rn */
	r9 += r13;  /* 0C091F62 add Rm,Rn */
	r12 = R32(r9 + 0x28u); UPD(0x0C091F66u, 3);  /* 0C091F64 mov.l @(disp,Rm),Rn */
	r5 = r7;  /* 0C091F66 mov Rm,Rn */
	W32(r7 + 0x28u, r12); UPD(0x0C091F6Au, 2);  /* 0C091F68 mov.l Rm,@(disp,Rn) */
	r5 += r2;  /* 0C091F6A add Rm,Rn */
	r12 = 0xAFu; UPD(0x0C091F6Eu, 2);  /* 0C091F6C mov.w @(disp,pc),Rn */
	r2 += r9;  /* 0C091F6E add Rm,Rn */
	r2 += 0x1u;  /* 0C091F70 add #imm,Rn */
	r12 += r7;  /* 0C091F72 add Rm,Rn */
	r10 = (u32)(s32)(s8)R8(r2); UPD(0x0C091F76u, 4);  /* 0C091F74 mov.b @Rm,Rn */
	r5 += 0x1u;  /* 0C091F76 add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r12); UPD(0x0C091F7Au, 2);  /* 0C091F78 mov.b @Rm,Rn */
	r10 += r6;  /* 0C091F7A add Rm,Rn */
	W8(r5, r10); UPD(0x0C091F7Eu, 2);  /* 0C091F7C mov.b Rm,@Rn */
	r10 = 0x98u; UPD(0x0C091F80u, 1);  /* 0C091F7E mov.w @(disp,pc),Rn */
	r10 += r7;  /* 0C091F80 add Rm,Rn */
	r2 = r10;  /* 0C091F82 mov Rm,Rn */
	r2 += 0x1u;  /* 0C091F84 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C091F88u, 4);  /* 0C091F86 mov.b @Rm,Rn */
	r8 = R32(r9 + 0x24u); UPD(0x0C091F8Au, 1);  /* 0C091F88 mov.l @(disp,Rm),Rn */
	r0 += 0x1u;  /* 0C091F8A add #imm,Rn */
	r1 = 0x210000u; UPD(0x0C091F8Eu, 2);  /* 0C091F8C mov.l @(disp,pc),Rn */
	r11 = r0 & 0xFF;  /* 0C091F8E extu.b Rm,Rn */
	r4 = R32(r9 + 0x38u); UPD(0x0C091F92u, 2);  /* 0C091F90 mov.l @(disp,Rm),Rn */
	r8 += r1;  /* 0C091F92 add Rm,Rn */
	W8(r2, r0); UPD(0x0C091F96u, 2);  /* 0C091F94 mov.b Rm,@Rn */
	W32(r7 + 0x24u, r8); UPD(0x0C091F98u, 1);  /* 0C091F96 mov.l Rm,@(disp,Rn) */
	r0 = r11;  /* 0C091F98 mov Rm,Rn */
	T = r0 == 0x4u;  /* 0C091F9A cmp/eq #imm,r0 */
	{ u32 c_ = !T; W32(r7 + 0x38u, r4); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C091FDCu, 5); goto L_0C091FDC; } UPD(0x0C091FA0u, 1); goto L_0C091FA0; }  /* 0C091F9C bf/s */
L_0C091FA0: BLKS(0x0C091FA0u);
	r3 = 0x0u;  /* 0C091FA0 mov #imm,Rn */
	r0 = R32(r7 + 0xCu); UPD(0x0C091FA4u, 2);  /* 0C091FA2 mov.l @(disp,Rm),Rn */
	T = r0 == 0xFu;  /* 0C091FA4 cmp/eq #imm,r0 */
	{ u32 c_ = T; W8(r2, r3); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C091FC0u, 4); goto L_0C091FC0; } UPD(0x0C091FAAu, 1); goto L_0C091FAA; }  /* 0C091FA6 bt/s */
L_0C091FAA: BLKS(0x0C091FAAu);
	r0 += 0x1u;  /* 0C091FAA add #imm,Rn */
	r4 = 0xFFFFD472u; UPD(0x0C091FAEu, 2);  /* 0C091FAC mov.w @(disp,pc),Rn */
	IF(0x0C091FAEu); { u32 tv_ = (r4 + 0x0C091FB2u); u32 t_ = PHYS(tv_); W32(r7 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C091FAE braf Rn */
L_0C091FC0: BLKS(0x0C091FC0u);
	r0 = 0xC0A03B0u; UPD(0x0C091FC2u, 1);  /* 0C091FC0 mov.l @(disp,pc),Rn */
	r5 = 0x40u;  /* 0C091FC2 mov #imm,Rn */
	r13 = 0x0u;  /* 0C091FC4 mov #imm,Rn */
	r4 = R32(r14); UPD(0x0C091FC8u, 3);  /* 0C091FC6 mov.l @Rm,Rn */
	W32(r7 + 0x8u, r5); UPD(0x0C091FCAu, 1);  /* 0C091FC8 mov.l Rm,@(disp,Rn) */
	IF(0x0C091FCAu); { u32 t_ = r0; PR = 0x0C091FCEu; W32(r7 + 0xCu, r13); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A03B0, 0x0C0A03B0u, 0x0C091FCEu); }  /* 0C091FCA jsr @Rn */
L_0C091FCE: BLKS(0x0C091FCEu);
	r4 = 0xA1u; UPD(0x0C091FD0u, 1);  /* 0C091FCE mov.w @(disp,pc),Rn */
	r4 += r9;  /* 0C091FD0 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r4); UPD(0x0C091FD4u, 2);  /* 0C091FD2 mov.b @Rm,Rn */
	r0 &= 0x7Fu;  /* 0C091FD4 and #imm,r0 */
	W8(r10, r11); UPD(0x0C091FD8u, 2);  /* 0C091FD6 mov.b Rm,@Rn */
	W8(r4, r0); UPD(0x0C091FDAu, 1);  /* 0C091FD8 mov.b Rm,@Rn */
	W8(r12, r13); UPD(0x0C091FDCu, 1);  /* 0C091FDA mov.b Rm,@Rn */
L_0C091FDC: BLKS(0x0C091FDCu);
	r13 = 0xFFFFCF74u; UPD(0x0C091FDEu, 1);  /* 0C091FDC mov.w @(disp,pc),Rn */
	IF(0x0C091FDEu); { u32 tv_ = (r13 + 0x0C091FE2u); u32 t_ = PHYS(tv_); r14 += 0x40u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C091FDE braf Rn */
L_0C091FF0: BLKS(0x0C091FF0u);
	r12 = 0xC0A03F0u; UPD(0x0C091FF2u, 1);  /* 0C091FF0 mov.l @(disp,pc),Rn */
	{ IF(0x0C091FF4u); ; /* slot nop */ UPD(0x0C091F40u, 3); goto L_0C091F40; }  /* 0C091FF2 bra */
}

void f_0C092030(sh3_t *c)
{
	LOCALS;
	goto L_0C092030;
L_0C091FDC: BLKS(0x0C091FDCu);
	r13 = 0xFFFFCF74u; UPD(0x0C091FDEu, 1);  /* 0C091FDC mov.w @(disp,pc),Rn */
	IF(0x0C091FDEu); { u32 tv_ = (r13 + 0x0C091FE2u); u32 t_ = PHYS(tv_); r14 += 0x40u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C091FDE braf Rn */
L_0C092030: BLKS(0x0C092030u);
	r9 = 0xC0A03F0u; UPD(0x0C092032u, 1);  /* 0C092030 mov.l @(disp,pc),Rn */
	IF(0x0C092032u); { u32 t_ = r9; PR = 0x0C092036u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C092036u); }  /* 0C092032 jsr @Rn */
L_0C092036: BLKS(0x0C092036u);
	IF(0x0C092036u); T = (s32)r0 >= 0;  /* 0C092036 cmp/pz Rn */
	{ u32 c_ = !T; r3 = R32(r14); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C0920EAu, 4); goto L_0C0920EA; } UPD(0x0C09203Cu, 1); goto L_0C09203C; }  /* 0C092038 bf/s */
L_0C09203C: BLKS(0x0C09203Cu);
	r12 = 0xB4u; UPD(0x0C09203Eu, 1);  /* 0C09203C mov.w @(disp,pc),Rn */
	IF(0x0C09203Eu); MACL = r0 * r12;  /* 0C09203E mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C092042u, 3);  /* 0C092040 mov.l @(disp,pc),Rn */
	IF(0x0C092042u); r13 = MACL;  /* 0C092042 sts macl,Rn */
	r13 += r7;  /* 0C092044 add Rm,Rn */
	r2 = 0x86u; UPD(0x0C092048u, 3);  /* 0C092046 mov.w @(disp,pc),Rn */
	r0 = r13;  /* 0C092048 mov Rm,Rn */
	IF(0x0C09204Au); r4 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C09204Cu, 2);  /* 0C09204A mov.w @(r0,Rm),Rn */
	IF(0x0C09204Cu); MACL = r3 * r12;  /* 0C09204C mul.l Rm,Rn */
	r11 = 0xC058060u; UPD(0x0C092050u, 3);  /* 0C09204E mov.l @(disp,pc),Rn */
	r10 = 0xFFE70000u; UPD(0x0C092052u, 1);  /* 0C092050 mov.l @(disp,pc),Rn */
	IF(0x0C092052u); r12 = MACL;  /* 0C092052 sts macl,Rn */
	W32(r14 + 0x4u, r4); UPD(0x0C092056u, 2);  /* 0C092054 mov.l Rm,@(disp,Rn) */
	r12 += r7;  /* 0C092056 add Rm,Rn */
	r5 = r10;  /* 0C092058 mov Rm,Rn */
	IF(0x0C09205Au); { u32 t_ = r11; PR = 0x0C09205Eu; r4 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 4); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C09205Eu); }  /* 0C09205A jsr @Rn */
L_0C09205E: BLKS(0x0C09205Eu);
	r8 = 0x66666667u; UPD(0x0C092060u, 1);  /* 0C09205E mov.l @(disp,pc),Rn */
	IF(0x0C092060u); r0 <<= 2;  /* 0C092060 shll2 Rn */
	{ s64 r_ = (s64)(s32)r0 * (s64)(s32)r8; MACH = (u32)((u64)r_ >> 32); MACL = (u32)r_; }  /* 0C092062 dmuls.l Rm,Rn */
	r1 = 0x90000u; UPD(0x0C092066u, 4);  /* 0C092064 mov.l @(disp,pc),Rn */
	r5 = r10;  /* 0C092066 mov Rm,Rn */
	IF(0x0C092068u); r6 = MACH;  /* 0C092068 sts mach,Rn */
	IF(0x0C09206Au); T = r6 & 1; r6 = (u32)((s32)r6 >> 1);  /* 0C09206A shar Rn */
	IF(0x0C09206Cu); T = r0 >> 31; r0 <<= 1;  /* 0C09206C shll Rn */
	{ u32 a_ = r0, t_ = a_ - r0, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r0 = r_; }  /* 0C09206E subc Rm,Rn */
	r6 -= r0;  /* 0C092070 sub Rm,Rn */
	r0 = R32(r13 + 0x24u); UPD(0x0C092074u, 7);  /* 0C092072 mov.l @(disp,Rm),Rn */
	r11 = r12;  /* 0C092074 mov Rm,Rn */
	r9 = 0xC058030u; UPD(0x0C092078u, 2);  /* 0C092076 mov.l @(disp,pc),Rn */
	r0 += r6;  /* 0C092078 add Rm,Rn */
	r0 += r1;  /* 0C09207A add Rm,Rn */
	r4 = R32(r14 + 0x4u); UPD(0x0C09207Eu, 3);  /* 0C09207C mov.l @(disp,Rm),Rn */
	IF(0x0C09207Eu); { u32 t_ = r9; PR = 0x0C092082u; W32(r12 + 0x24u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C092082u); }  /* 0C09207E jsr @Rn */
L_0C092082: BLKS(0x0C092082u);
	r2 = 0xA8u; UPD(0x0C092084u, 1);  /* 0C092082 mov.w @(disp,pc),Rn */
	r5 = R32(r13 + 0x28u); UPD(0x0C092086u, 1);  /* 0C092084 mov.l @(disp,Rm),Rn */
	r11 += r2;  /* 0C092086 add Rm,Rn */
	r5 += r0;  /* 0C092088 add Rm,Rn */
	r2 += r13;  /* 0C09208A add Rm,Rn */
	r4 = 0xAFu; UPD(0x0C09208Eu, 4);  /* 0C09208C mov.w @(disp,pc),Rn */
	r2 += 0x1u;  /* 0C09208E add #imm,Rn */
	r0 = r12;  /* 0C092090 mov Rm,Rn */
	r7 = (u32)(s32)(s8)R8(r2); UPD(0x0C092094u, 3);  /* 0C092092 mov.b @Rm,Rn */
	r11 += 0x1u;  /* 0C092094 add #imm,Rn */
	IF(0x0C092096u); r3 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C092098u, 2);  /* 0C092096 mov.b @(r0,Rm),Rn */
	r7 += r3;  /* 0C092098 add Rm,Rn */
	r3 = 0x98u; UPD(0x0C09209Cu, 2);  /* 0C09209A mov.w @(disp,pc),Rn */
	r6 = R32(r13 + 0x38u); UPD(0x0C09209Eu, 1);  /* 0C09209C mov.l @(disp,Rm),Rn */
	r3 += r12;  /* 0C09209E add Rm,Rn */
	r2 = r3;  /* 0C0920A0 mov Rm,Rn */
	r2 += 0x1u;  /* 0C0920A2 add #imm,Rn */
	W32(r12 + 0x38u, r6); UPD(0x0C0920A6u, 4);  /* 0C0920A4 mov.l Rm,@(disp,Rn) */
	r8 = (u32)(s32)(s8)R8(r2); UPD(0x0C0920A8u, 1);  /* 0C0920A6 mov.b @Rm,Rn */
	W8(r11, r7); UPD(0x0C0920AAu, 1);  /* 0C0920A8 mov.b Rm,@Rn */
	r8 += 0x1u;  /* 0C0920AA add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r3); UPD(0x0C0920AEu, 2);  /* 0C0920AC mov.b @Rm,Rn */
	r10 = r8 & 0xFF;  /* 0C0920AE extu.b Rm,Rn */
	r7 = r6 & 0xFF;  /* 0C0920B0 extu.b Rm,Rn */
	W32(r12 + 0x28u, r5); UPD(0x0C0920B4u, 3);  /* 0C0920B2 mov.l Rm,@(disp,Rn) */
	T = r10 > r7;  /* 0C0920B4 cmp/hi Rm,Rn */
	{ u32 c_ = !T; W8(r2, r8); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C091FDCu, 4); goto L_0C091FDC; } UPD(0x0C0920BAu, 1); goto L_0C0920BA; }  /* 0C0920B6 bf/s */
L_0C0920BA: BLKS(0x0C0920BAu);
	r0 = R32(r12 + 0xCu); UPD(0x0C0920BCu, 1);  /* 0C0920BA mov.l @(disp,Rm),Rn */
	r13 = 0x0u;  /* 0C0920BC mov #imm,Rn */
	r0 += 0x1u;  /* 0C0920BE add #imm,Rn */
	W8(r2, r13); UPD(0x0C0920C2u, 3);  /* 0C0920C0 mov.b Rm,@Rn */
	T = r0 == 0x8u;  /* 0C0920C2 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W32(r12 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0920D6u, 4); goto L_0C0920D6; } UPD(0x0C0920C8u, 1); goto L_0C0920C8; }  /* 0C0920C4 bf/s */
L_0C0920C8: BLKS(0x0C0920C8u);
	r5 = 0x0u;  /* 0C0920C8 mov #imm,Rn */
	T = (r7 & r7) == 0;  /* 0C0920CA tst Rm,Rn */
	{ u32 c_ = T; W32(r12 + 0xCu, r5); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0920D6u, 5); goto L_0C0920D6; } UPD(0x0C0920D0u, 1); goto L_0C0920D0; }  /* 0C0920CC bt/s */
L_0C0920D0: BLKS(0x0C0920D0u);
	r9 = r6;  /* 0C0920D0 mov Rm,Rn */
	r9 += 0xFFFFFFFFu;  /* 0C0920D2 add #imm,Rn */
	W8(r3, r9); UPD(0x0C0920D6u, 3);  /* 0C0920D4 mov.b Rm,@Rn */
L_0C0920D6: BLKS(0x0C0920D6u);
	r4 = 0xFFFFD34Au; UPD(0x0C0920D8u, 1);  /* 0C0920D6 mov.w @(disp,pc),Rn */
	IF(0x0C0920D8u); { u32 tv_ = (r4 + 0x0C0920DCu); u32 t_ = PHYS(tv_); r4 = R32(r14); /* slot mov.l @Rm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0920D8 braf Rn */
L_0C0920EA: BLKS(0x0C0920EAu);
	r4 = 0xFFFFD1B2u; UPD(0x0C0920ECu, 1);  /* 0C0920EA mov.w @(disp,pc),Rn */
	IF(0x0C0920ECu); { u32 tv_ = (r4 + 0x0C0920F0u); u32 t_ = PHYS(tv_); r4 = R32(r14); /* slot mov.l @Rm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0920EC braf Rn */
}

void f_0C0920E0(sh3_t *c)
{
	LOCALS;
L_0C0920E0: BLKS(0x0C0920E0u);
	r10 = 0xC0A03F0u; UPD(0x0C0920E2u, 1);  /* 0C0920E0 mov.l @(disp,pc),Rn */
	IF(0x0C0920E2u); { u32 t_ = r10; PR = 0x0C0920E6u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C0920E6u); }  /* 0C0920E2 jsr @Rn */
L_0C0920E6: BLKS(0x0C0920E6u);
	IF(0x0C0920E6u); T = (s32)r0 >= 0;  /* 0C0920E6 cmp/pz Rn */
	if (T) { UPD(0x0C0920F2u, 4); goto L_0C0920F2; }  /* 0C0920E8 bt */
L_0C0920EA: BLKS(0x0C0920EAu);
	r4 = 0xFFFFD1B2u; UPD(0x0C0920ECu, 1);  /* 0C0920EA mov.w @(disp,pc),Rn */
	IF(0x0C0920ECu); { u32 tv_ = (r4 + 0x0C0920F0u); u32 t_ = PHYS(tv_); r4 = R32(r14); /* slot mov.l @Rm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0920EC braf Rn */
L_0C0920F2: BLKS(0x0C0920F2u);
	r1 = 0xB4u; UPD(0x0C0920F4u, 1);  /* 0C0920F2 mov.w @(disp,pc),Rn */
	IF(0x0C0920F4u); MACL = r0 * r1;  /* 0C0920F4 mul.l Rm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C0920F8u, 3);  /* 0C0920F6 mov.l @(disp,pc),Rn */
	IF(0x0C0920F8u); r11 = MACL;  /* 0C0920F8 sts macl,Rn */
	r11 += r2;  /* 0C0920FA add Rm,Rn */
	r0 = R32(r11 + 0x8u); UPD(0x0C0920FEu, 3);  /* 0C0920FC mov.l @(disp,Rm),Rn */
	T = r0 == 0x3Eu;  /* 0C0920FE cmp/eq #imm,r0 */
	{ u32 c_ = T; r0 = R32(r14); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C092120u, 4); goto L_0C092120; } UPD(0x0C092104u, 1); goto L_0C092104; }  /* 0C092100 bt/s */
L_0C092104: BLKS(0x0C092104u);
	r6 = 0x0u;  /* 0C092104 mov #imm,Rn */
	IF(0x0C092106u); MACL = r0 * r1;  /* 0C092106 mul.l Rm,Rn */
	IF(0x0C092108u); r0 = MACL;  /* 0C092108 sts macl,Rn */
	r13 = 0xFFFFCE44u; UPD(0x0C09210Cu, 5);  /* 0C09210A mov.w @(disp,pc),Rn */
	IF(0x0C09210Cu); { u32 tv_ = (r13 + 0x0C092110u); u32 t_ = PHYS(tv_); IF(0x0C09210Eu); W32(r0 + r2, r6); /* slot mov.l Rm,@(r0,Rn) */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09210C braf Rn */
L_0C092120: BLKS(0x0C092120u);
	r12 = R32(r14); UPD(0x0C092122u, 1);  /* 0C092120 mov.l @Rm,Rn */
	IF(0x0C092122u); MACL = r12 * r1;  /* 0C092122 mul.l Rm,Rn */
	r3 = 0x84u; UPD(0x0C092126u, 3);  /* 0C092124 mov.w @(disp,pc),Rn */
	IF(0x0C092126u); r12 = MACL;  /* 0C092126 sts macl,Rn */
	r12 += r2;  /* 0C092128 add Rm,Rn */
	r4 = r12;  /* 0C09212A mov Rm,Rn */
	r4 += r3;  /* 0C09212C add Rm,Rn */
	r3 += r11;  /* 0C09212E add Rm,Rn */
	r3 += 0x2u;  /* 0C092130 add #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r3); UPD(0x0C092134u, 7);  /* 0C092132 mov.w @Rm,Rn */
	r4 += 0x2u;  /* 0C092134 add #imm,Rn */
	r13 = 0xC058060u; UPD(0x0C092138u, 2);  /* 0C092136 mov.l @(disp,pc),Rn */
	W16(r4, r0); UPD(0x0C09213Au, 1);  /* 0C092138 mov.w Rm,@Rn */
	r5 = R32(r12 + 0x2Cu); UPD(0x0C09213Cu, 1);  /* 0C09213A mov.l @(disp,Rm),Rn */
	r4 = r0;  /* 0C09213C mov Rm,Rn */
	r8 = 0x66666667u; UPD(0x0C092140u, 2);  /* 0C09213E mov.l @(disp,pc),Rn */
	IF(0x0C092140u); { u32 t_ = r13; PR = 0x0C092144u; W32(r14 + 0x4u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C092144u); }  /* 0C092140 jsr @Rn */
L_0C092144: BLKS(0x0C092144u);
	IF(0x0C092144u); r0 <<= 2;  /* 0C092144 shll2 Rn */
	{ s64 r_ = (s64)(s32)r0 * (s64)(s32)r8; MACH = (u32)((u64)r_ >> 32); MACL = (u32)r_; }  /* 0C092146 dmuls.l Rm,Rn */
	r6 = R32(r11 + 0x24u); UPD(0x0C09214Au, 4);  /* 0C092148 mov.l @(disp,Rm),Rn */
	IF(0x0C09214Au); r7 = MACH;  /* 0C09214A sts mach,Rn */
	IF(0x0C09214Cu); T = r7 & 1; r7 = (u32)((s32)r7 >> 1);  /* 0C09214C shar Rn */
	IF(0x0C09214Eu); T = r0 >> 31; r0 <<= 1;  /* 0C09214E shll Rn */
	{ u32 a_ = r0, t_ = a_ - r0, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r0 = r_; }  /* 0C092150 subc Rm,Rn */
	r7 -= r0;  /* 0C092152 sub Rm,Rn */
	r1 = R32(r12 + 0x30u); UPD(0x0C092156u, 6);  /* 0C092154 mov.l @(disp,Rm),Rn */
	r6 += r7;  /* 0C092156 add Rm,Rn */
	r10 = 0xC058030u; UPD(0x0C09215Au, 2);  /* 0C092158 mov.l @(disp,pc),Rn */
	r6 += r1;  /* 0C09215A add Rm,Rn */
	r4 = R32(r14 + 0x4u); UPD(0x0C09215Eu, 2);  /* 0C09215C mov.l @(disp,Rm),Rn */
	r5 = R32(r12 + 0x2Cu); UPD(0x0C092160u, 1);  /* 0C09215E mov.l @(disp,Rm),Rn */
	IF(0x0C092160u); { u32 t_ = r10; PR = 0x0C092164u; W32(r12 + 0x24u, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C092164u); }  /* 0C092160 jsr @Rn */
L_0C092164: BLKS(0x0C092164u);
	r2 = 0xA8u; UPD(0x0C092166u, 1);  /* 0C092164 mov.w @(disp,pc),Rn */
	r4 = r12;  /* 0C092166 mov Rm,Rn */
	r9 = R32(r11 + 0x28u); UPD(0x0C09216Au, 2);  /* 0C092168 mov.l @(disp,Rm),Rn */
	r4 += r2;  /* 0C09216A add Rm,Rn */
	r9 += r0;  /* 0C09216C add Rm,Rn */
	r2 += r11;  /* 0C09216E add Rm,Rn */
	r5 = 0xAFu; UPD(0x0C092172u, 4);  /* 0C092170 mov.w @(disp,pc),Rn */
	r2 += 0x1u;  /* 0C092172 add #imm,Rn */
	r0 = r12;  /* 0C092174 mov Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r2); UPD(0x0C092178u, 3);  /* 0C092176 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C092178 add #imm,Rn */
	IF(0x0C09217Au); r13 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C09217Cu, 2);  /* 0C09217A mov.b @(r0,Rm),Rn */
	r7 = R32(r11 + 0x38u); UPD(0x0C09217Eu, 1);  /* 0C09217C mov.l @(disp,Rm),Rn */
	r3 += r13;  /* 0C09217E add Rm,Rn */
	r8 = R32(r11 + 0xCu); UPD(0x0C092182u, 2);  /* 0C092180 mov.l @(disp,Rm),Rn */
	W32(r12 + 0x28u, r9); UPD(0x0C092184u, 1);  /* 0C092182 mov.l Rm,@(disp,Rn) */
	W8(r4, r3); UPD(0x0C092186u, 1);  /* 0C092184 mov.b Rm,@Rn */
	W32(r12 + 0x38u, r7); UPD(0x0C092188u, 1);  /* 0C092186 mov.l Rm,@(disp,Rn) */
	r4 = 0xFFFFD296u; UPD(0x0C09218Au, 1);  /* 0C092188 mov.w @(disp,pc),Rn */
	IF(0x0C09218Au); { u32 tv_ = (r4 + 0x0C09218Eu); u32 t_ = PHYS(tv_); W32(r12 + 0xCu, r8); /* slot mov.l Rm,@(disp,Rn) */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09218A braf Rn */
}

void f_0C0921C0(sh3_t *c)
{
	LOCALS;
L_0C0921C0: BLKS(0x0C0921C0u);
	r9 = 0xC0A03F0u; UPD(0x0C0921C2u, 1);  /* 0C0921C0 mov.l @(disp,pc),Rn */
	IF(0x0C0921C2u); { u32 t_ = r9; PR = 0x0C0921C6u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C0921C6u); }  /* 0C0921C2 jsr @Rn */
L_0C0921C6: BLKS(0x0C0921C6u);
	IF(0x0C0921C6u); T = (s32)r0 >= 0;  /* 0C0921C6 cmp/pz Rn */
	{ u32 c_ = T; r9 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0921D4u, 4); goto L_0C0921D4; } goto L_0C0921CC; }  /* 0C0921C8 bt/s */
L_0C0921CC: BLKS(0x0C0921CCu);
	r4 = 0xFFFFD0D0u; UPD(0x0C0921CEu, 2);  /* 0C0921CC mov.w @(disp,pc),Rn */
	IF(0x0C0921CEu); { u32 tv_ = (r4 + 0x0C0921D2u); u32 t_ = PHYS(tv_); r4 = R32(r14); /* slot mov.l @Rm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0921CE braf Rn */
L_0C0921D4: BLKS(0x0C0921D4u);
	r10 = 0xB4u; UPD(0x0C0921D6u, 1);  /* 0C0921D4 mov.w @(disp,pc),Rn */
	r11 = R32(r14); UPD(0x0C0921D8u, 1);  /* 0C0921D6 mov.l @Rm,Rn */
	IF(0x0C0921D8u); MACL = r11 * r10;  /* 0C0921D8 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C0921DCu, 3);  /* 0C0921DA mov.l @(disp,pc),Rn */
	IF(0x0C0921DCu); r11 = MACL;  /* 0C0921DC sts macl,Rn */
	IF(0x0C0921DEu); MACL = r9 * r10;  /* 0C0921DE mul.l Rm,Rn */
	r11 += r0;  /* 0C0921E0 add Rm,Rn */
	r6 = 0x84u; UPD(0x0C0921E4u, 5);  /* 0C0921E2 mov.w @(disp,pc),Rn */
	IF(0x0C0921E4u); r10 = MACL;  /* 0C0921E4 sts macl,Rn */
	r12 = r11;  /* 0C0921E6 mov Rm,Rn */
	r10 += r0;  /* 0C0921E8 add Rm,Rn */
	r12 += r6;  /* 0C0921EA add Rm,Rn */
	r8 = R32(r11); UPD(0x0C0921EEu, 5);  /* 0C0921EC mov.l @Rm,Rn */
	r6 += r10;  /* 0C0921EE add Rm,Rn */
	r2 = 0xECFFFEFFu; UPD(0x0C0921F2u, 2);  /* 0C0921F0 mov.l @(disp,pc),Rn */
	r6 += 0x2u;  /* 0C0921F2 add #imm,Rn */
	r5 = (u32)(s32)(s16)R16(r6); UPD(0x0C0921F6u, 2);  /* 0C0921F4 mov.w @Rm,Rn */
	r8 &= r2;  /* 0C0921F6 and Rm,Rn */
	W32(r11, r8); UPD(0x0C0921FAu, 2);  /* 0C0921F8 mov.l Rm,@Rn */
	r12 += 0x2u;  /* 0C0921FA add #imm,Rn */
	W16(r12, r5); UPD(0x0C0921FEu, 2);  /* 0C0921FC mov.w Rm,@Rn */
	r7 = R32(r10); UPD(0x0C092200u, 1);  /* 0C0921FE mov.l @Rm,Rn */
	r4 = 0x13000100u; UPD(0x0C092202u, 1);  /* 0C092200 mov.l @(disp,pc),Rn */
	r12 = 0xC058060u; UPD(0x0C092204u, 1);  /* 0C092202 mov.l @(disp,pc),Rn */
	r7 &= r4;  /* 0C092204 and Rm,Rn */
	W32(r14 + 0x4u, r5); UPD(0x0C092208u, 2);  /* 0C092206 mov.l Rm,@(disp,Rn) */
	r8 |= r7;  /* 0C092208 or Rm,Rn */
	r4 = r5;  /* 0C09220A mov Rm,Rn */
	W32(r11, r8); UPD(0x0C09220Eu, 3);  /* 0C09220C mov.l Rm,@Rn */
	IF(0x0C09220Eu); { u32 t_ = r12; PR = 0x0C092212u; r5 = R32(r11 + 0x2Cu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C092212u); }  /* 0C09220E jsr @Rn */
L_0C092212: BLKS(0x0C092212u);
	r9 = 0x66666667u; UPD(0x0C092214u, 1);  /* 0C092212 mov.l @(disp,pc),Rn */
	IF(0x0C092214u); r0 <<= 2;  /* 0C092214 shll2 Rn */
	{ s64 r_ = (s64)(s32)r0 * (s64)(s32)r9; MACH = (u32)((u64)r_ >> 32); MACL = (u32)r_; }  /* 0C092216 dmuls.l Rm,Rn */
	r1 = R32(r11 + 0x30u); UPD(0x0C09221Au, 4);  /* 0C092218 mov.l @(disp,Rm),Rn */
	IF(0x0C09221Au); r13 = MACH;  /* 0C09221A sts mach,Rn */
	IF(0x0C09221Cu); T = r13 & 1; r13 = (u32)((s32)r13 >> 1);  /* 0C09221C shar Rn */
	IF(0x0C09221Eu); T = r0 >> 31; r0 <<= 1;  /* 0C09221E shll Rn */
	{ u32 a_ = r0, t_ = a_ - r0, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r0 = r_; }  /* 0C092220 subc Rm,Rn */
	r13 -= r0;  /* 0C092222 sub Rm,Rn */
	r0 = R32(r10 + 0x24u); UPD(0x0C092226u, 6);  /* 0C092224 mov.l @(disp,Rm),Rn */
	r9 = r11;  /* 0C092226 mov Rm,Rn */
	r0 += r13;  /* 0C092228 add Rm,Rn */
	r13 = 0xC058030u; UPD(0x0C09222Cu, 3);  /* 0C09222A mov.l @(disp,pc),Rn */
	r0 += r1;  /* 0C09222C add Rm,Rn */
	r5 = R32(r11 + 0x2Cu); UPD(0x0C092230u, 2);  /* 0C09222E mov.l @(disp,Rm),Rn */
	r4 = R32(r14 + 0x4u); UPD(0x0C092232u, 1);  /* 0C092230 mov.l @(disp,Rm),Rn */
	IF(0x0C092232u); { u32 t_ = r13; PR = 0x0C092236u; W32(r11 + 0x24u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C092236u); }  /* 0C092232 jsr @Rn */
L_0C092236: BLKS(0x0C092236u);
	r3 = R32(r10 + 0x28u); UPD(0x0C092238u, 1);  /* 0C092236 mov.l @(disp,Rm),Rn */
	r2 = 0xA8u; UPD(0x0C09223Au, 1);  /* 0C092238 mov.w @(disp,pc),Rn */
	r3 += r0;  /* 0C09223A add Rm,Rn */
	r9 += r2;  /* 0C09223C add Rm,Rn */
	r0 = 0xAFu; UPD(0x0C092240u, 3);  /* 0C09223E mov.w @(disp,pc),Rn */
	r2 += r10;  /* 0C092240 add Rm,Rn */
	r2 += 0x1u;  /* 0C092242 add #imm,Rn */
	r8 = (u32)(s32)(s8)R8(r2); UPD(0x0C092246u, 3);  /* 0C092244 mov.b @Rm,Rn */
	r9 += 0x1u;  /* 0C092246 add #imm,Rn */
	IF(0x0C092248u); r4 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C09224Au, 2);  /* 0C092248 mov.b @(r0,Rm),Rn */
	r6 = 0xC0A0380u; UPD(0x0C09224Cu, 1);  /* 0C09224A mov.l @(disp,pc),Rn */
	r8 += r4;  /* 0C09224C add Rm,Rn */
	r7 = R32(r10 + 0xCu); UPD(0x0C092250u, 2);  /* 0C09224E mov.l @(disp,Rm),Rn */
	W8(r9, r8); UPD(0x0C092252u, 1);  /* 0C092250 mov.b Rm,@Rn */
	W32(r11 + 0x28u, r3); UPD(0x0C092254u, 1);  /* 0C092252 mov.l Rm,@(disp,Rn) */
	W32(r11 + 0xCu, r7); UPD(0x0C092256u, 1);  /* 0C092254 mov.l Rm,@(disp,Rn) */
	IF(0x0C092256u); { u32 t_ = r6; PR = 0x0C09225Au; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C09225Au); }  /* 0C092256 jsr @Rn */
L_0C09225A: BLKS(0x0C09225Au);
	r5 = R32(r10 + 0x38u); UPD(0x0C09225Cu, 1);  /* 0C09225A mov.l @(disp,Rm),Rn */
	r6 = 0xAu;  /* 0C09225C mov #imm,Rn */
	r10 = 0xC0A9E40u; UPD(0x0C092260u, 2);  /* 0C09225E mov.l @(disp,pc),Rn */
	W32(r11 + 0x38u, r5); UPD(0x0C092262u, 1);  /* 0C092260 mov.l Rm,@(disp,Rn) */
	r4 = R32(r14); UPD(0x0C092264u, 1);  /* 0C092262 mov.l @Rm,Rn */
	IF(0x0C092264u); { u32 t_ = r10; PR = 0x0C092268u; r5 = 0x5Au; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C092268u); }  /* 0C092264 jsr @Rn */
L_0C092268: BLKS(0x0C092268u);
	T = (r0 & r0) == 0;  /* 0C092268 tst Rm,Rn */
	if (T) { UPD(0x0C092292u, 4); goto L_0C092292; }  /* 0C09226A bt */
L_0C09226C: BLKS(0x0C09226Cu);
	r4 = R32(r14 + 0x4u); UPD(0x0C09226Eu, 1);  /* 0C09226C mov.l @(disp,Rm),Rn */
	r10 = 0x100000u; UPD(0x0C092270u, 1);  /* 0C09226E mov.l @(disp,pc),Rn */
	IF(0x0C092270u); { u32 t_ = r12; PR = 0x0C092274u; r5 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C092274u); }  /* 0C092270 jsr @Rn */
L_0C092274: BLKS(0x0C092274u);
	r12 = R32(r11 + 0x24u); UPD(0x0C092276u, 1);  /* 0C092274 mov.l @(disp,Rm),Rn */
	r5 = r10;  /* 0C092276 mov Rm,Rn */
	r12 += r0;  /* 0C092278 add Rm,Rn */
	IF(0x0C09227Au); { u32 t_ = r13; PR = 0x0C09227Eu; r4 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 4); CALLD(t_, 0x0C09227Eu); }  /* 0C09227A jsr @Rn */
L_0C09227E: BLKS(0x0C09227Eu);
	r11 = R32(r11 + 0x28u); UPD(0x0C092280u, 1);  /* 0C09227E mov.l @(disp,Rm),Rn */
	r4 = r12;  /* 0C092280 mov Rm,Rn */
	r13 = 0xC0A9D50u; UPD(0x0C092284u, 2);  /* 0C092282 mov.l @(disp,pc),Rn */
	r11 += r0;  /* 0C092284 add Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r9); UPD(0x0C092288u, 2);  /* 0C092286 mov.b @Rm,Rn */
	r5 = r11;  /* 0C092288 mov Rm,Rn */
	IF(0x0C09228Au); { u32 t_ = r13; PR = 0x0C09228Eu; r6 = r3 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A9D50, 0x0C0A9D50u, 0x0C09228Eu); }  /* 0C09228A jsr @Rn */
L_0C09228E: BLKS(0x0C09228Eu);
	T = (r0 & r0) == 0;  /* 0C09228E tst Rm,Rn */
	if (!T) { UPD(0x0C09229Au, 4); goto L_0C09229A; }  /* 0C092290 bf */
L_0C092292: BLKS(0x0C092292u);
	r13 = 0xFFFFCCBEu; UPD(0x0C092294u, 1);  /* 0C092292 mov.w @(disp,pc),Rn */
	IF(0x0C092294u); { u32 tv_ = (r13 + 0x0C092298u); u32 t_ = PHYS(tv_); r14 += 0x40u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C092294 braf Rn */
L_0C09229A: BLKS(0x0C09229Au);
	r5 = 0x30000u; UPD(0x0C09229Cu, 1);  /* 0C09229A mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C09229C add #imm,Rn */
	r9 = 0xC0A8E70u; UPD(0x0C0922A0u, 2);  /* 0C09229E mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C0922A0 mov #imm,Rn */
	W32(r15, r5); UPD(0x0C0922A4u, 2);  /* 0C0922A2 mov.l Rm,@Rn */
	r6 = r11;  /* 0C0922A4 mov Rm,Rn */
	r5 = r12;  /* 0C0922A6 mov Rm,Rn */
	IF(0x0C0922A8u); { u32 t_ = r9; PR = 0x0C0922ACu; r7 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 4); CALLP(t_, f_0C0A8E70, 0x0C0A8E70u, 0x0C0922ACu); }  /* 0C0922A8 jsr @Rn */
L_0C0922AC: BLKS(0x0C0922ACu);
	r13 = 0xFFFFDBE0u; UPD(0x0C0922AEu, 1);  /* 0C0922AC mov.w @(disp,pc),Rn */
	IF(0x0C0922AEu); { u32 tv_ = (r13 + 0x0C0922B2u); u32 t_ = PHYS(tv_); r15 += 0x4u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0922AE braf Rn */
}

void f_0C0922C0(sh3_t *c)
{
	LOCALS;
L_0C0922C0: BLKS(0x0C0922C0u);
	r11 = 0xC0A03F0u; UPD(0x0C0922C2u, 1);  /* 0C0922C0 mov.l @(disp,pc),Rn */
	IF(0x0C0922C2u); { u32 t_ = r11; PR = 0x0C0922C6u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C0922C6u); }  /* 0C0922C2 jsr @Rn */
L_0C0922C6: BLKS(0x0C0922C6u);
	IF(0x0C0922C6u); T = (s32)r0 >= 0;  /* 0C0922C6 cmp/pz Rn */
	{ u32 c_ = !T; r13 = R32(r14); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C0923AAu, 4); goto L_0C0923AA; } UPD(0x0C0922CCu, 1); goto L_0C0922CC; }  /* 0C0922C8 bf/s */
L_0C0922CC: BLKS(0x0C0922CCu);
	r3 = 0xB4u; UPD(0x0C0922CEu, 1);  /* 0C0922CC mov.w @(disp,pc),Rn */
	IF(0x0C0922CEu); MACL = r13 * r3;  /* 0C0922CE mul.l Rm,Rn */
	r12 = 0xC26CD40u; UPD(0x0C0922D2u, 3);  /* 0C0922D0 mov.l @(disp,pc),Rn */
	IF(0x0C0922D2u); r13 = MACL;  /* 0C0922D2 sts macl,Rn */
	r13 += r12;  /* 0C0922D4 add Rm,Rn */
	IF(0x0C0922D6u); MACL = r0 * r3;  /* 0C0922D6 mul.l Rm,Rn */
	r8 = R32(r13); UPD(0x0C0922DAu, 5);  /* 0C0922D8 mov.l @Rm,Rn */
	r7 = r13;  /* 0C0922DA mov Rm,Rn */
	r11 = 0xECFFFEFFu; UPD(0x0C0922DEu, 2);  /* 0C0922DC mov.l @(disp,pc),Rn */
	IF(0x0C0922DEu); r9 = MACL;  /* 0C0922DE sts macl,Rn */
	r8 &= r11;  /* 0C0922E0 and Rm,Rn */
	r2 = 0x84u; UPD(0x0C0922E4u, 3);  /* 0C0922E2 mov.w @(disp,pc),Rn */
	r9 += r12;  /* 0C0922E4 add Rm,Rn */
	W32(r13, r8); UPD(0x0C0922E8u, 2);  /* 0C0922E6 mov.l Rm,@Rn */
	r7 += r2;  /* 0C0922E8 add Rm,Rn */
	r0 = R32(r9); UPD(0x0C0922ECu, 2);  /* 0C0922EA mov.l @Rm,Rn */
	r2 += r9;  /* 0C0922EC add Rm,Rn */
	r4 = 0x13000100u; UPD(0x0C0922F0u, 2);  /* 0C0922EE mov.l @(disp,pc),Rn */
	r2 += 0x2u;  /* 0C0922F0 add #imm,Rn */
	r10 = 0xC058060u; UPD(0x0C0922F4u, 2);  /* 0C0922F2 mov.l @(disp,pc),Rn */
	r0 &= r4;  /* 0C0922F4 and Rm,Rn */
	r6 = (u32)(s32)(s16)R16(r2); UPD(0x0C0922F8u, 2);  /* 0C0922F6 mov.w @Rm,Rn */
	r7 += 0x2u;  /* 0C0922F8 add #imm,Rn */
	r8 |= r0;  /* 0C0922FA or Rm,Rn */
	r5 = R32(r13 + 0x2Cu); UPD(0x0C0922FEu, 3);  /* 0C0922FC mov.l @(disp,Rm),Rn */
	r4 = r6;  /* 0C0922FE mov Rm,Rn */
	W16(r7, r6); UPD(0x0C092302u, 2);  /* 0C092300 mov.w Rm,@Rn */
	W32(r14 + 0x4u, r6); UPD(0x0C092304u, 1);  /* 0C092302 mov.l Rm,@(disp,Rn) */
	IF(0x0C092304u); { u32 t_ = r10; PR = 0x0C092308u; W32(r13, r8); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C092308u); }  /* 0C092304 jsr @Rn */
L_0C092308: BLKS(0x0C092308u);
	r5 = 0x66666667u; UPD(0x0C09230Au, 1);  /* 0C092308 mov.l @(disp,pc),Rn */
	IF(0x0C09230Au); r0 <<= 2;  /* 0C09230A shll2 Rn */
	{ s64 r_ = (s64)(s32)r0 * (s64)(s32)r5; MACH = (u32)((u64)r_ >> 32); MACL = (u32)r_; }  /* 0C09230C dmuls.l Rm,Rn */
	r3 = R32(r9 + 0x24u); UPD(0x0C092310u, 4);  /* 0C09230E mov.l @(disp,Rm),Rn */
	IF(0x0C092310u); r11 = MACH;  /* 0C092310 sts mach,Rn */
	IF(0x0C092312u); T = r11 & 1; r11 = (u32)((s32)r11 >> 1);  /* 0C092312 shar Rn */
	IF(0x0C092314u); T = r0 >> 31; r0 <<= 1;  /* 0C092314 shll Rn */
	{ u32 a_ = r0, t_ = a_ - r0, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r0 = r_; }  /* 0C092316 subc Rm,Rn */
	r1 = R32(r13 + 0x30u); UPD(0x0C09231Au, 5);  /* 0C092318 mov.l @(disp,Rm),Rn */
	r11 -= r0;  /* 0C09231A sub Rm,Rn */
	r12 = 0xC058030u; UPD(0x0C09231Eu, 2);  /* 0C09231C mov.l @(disp,pc),Rn */
	r3 += r11;  /* 0C09231E add Rm,Rn */
	r3 += r1;  /* 0C092320 add Rm,Rn */
	r4 = R32(r14 + 0x4u); UPD(0x0C092324u, 3);  /* 0C092322 mov.l @(disp,Rm),Rn */
	r5 = R32(r13 + 0x2Cu); UPD(0x0C092326u, 1);  /* 0C092324 mov.l @(disp,Rm),Rn */
	IF(0x0C092326u); { u32 t_ = r12; PR = 0x0C09232Au; W32(r13 + 0x24u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C09232Au); }  /* 0C092326 jsr @Rn */
L_0C09232A: BLKS(0x0C09232Au);
	r4 = R32(r9 + 0x28u); UPD(0x0C09232Cu, 1);  /* 0C09232A mov.l @(disp,Rm),Rn */
	r6 = r13;  /* 0C09232C mov Rm,Rn */
	r4 += r0;  /* 0C09232E add Rm,Rn */
	r0 = 0xA8u; UPD(0x0C092332u, 3);  /* 0C092330 mov.w @(disp,pc),Rn */
	r6 += r0;  /* 0C092332 add Rm,Rn */
	r0 += r9;  /* 0C092334 add Rm,Rn */
	r0 += 0x1u;  /* 0C092336 add #imm,Rn */
	r7 = (u32)(s32)(s8)R8(r0); UPD(0x0C09233Au, 4);  /* 0C092338 mov.b @Rm,Rn */
	r6 += 0x1u;  /* 0C09233A add #imm,Rn */
	r0 = 0xAFu; UPD(0x0C09233Eu, 2);  /* 0C09233C mov.w @(disp,pc),Rn */
	IF(0x0C09233Eu); r8 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C092340u, 1);  /* 0C09233E mov.b @(r0,Rm),Rn */
	r2 = 0xC0A0380u; UPD(0x0C092342u, 1);  /* 0C092340 mov.l @(disp,pc),Rn */
	r7 += r8;  /* 0C092342 add Rm,Rn */
	W32(r13 + 0x28u, r4); UPD(0x0C092346u, 2);  /* 0C092344 mov.l Rm,@(disp,Rn) */
	W8(r6, r7); UPD(0x0C092348u, 1);  /* 0C092346 mov.b Rm,@Rn */
	r10 = R32(r9 + 0xCu); UPD(0x0C09234Au, 1);  /* 0C092348 mov.l @(disp,Rm),Rn */
	r4 = R32(r14); UPD(0x0C09234Cu, 1);  /* 0C09234A mov.l @Rm,Rn */
	IF(0x0C09234Cu); { u32 t_ = r2; PR = 0x0C092350u; W32(r13 + 0xCu, r10); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C092350u); }  /* 0C09234C jsr @Rn */
L_0C092350: BLKS(0x0C092350u);
	r5 = R32(r9 + 0x38u); UPD(0x0C092352u, 1);  /* 0C092350 mov.l @(disp,Rm),Rn */
	r12 = 0xFFFFCBFCu; UPD(0x0C092354u, 1);  /* 0C092352 mov.w @(disp,pc),Rn */
	IF(0x0C092354u); { u32 tv_ = (r12 + 0x0C092358u); u32 t_ = PHYS(tv_); W32(r13 + 0x38u, r5); /* slot mov.l Rm,@(disp,Rn) */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C092354 braf Rn */
L_0C0923AA: BLKS(0x0C0923AAu);
	r4 = 0xFFFFCEF2u; UPD(0x0C0923ACu, 1);  /* 0C0923AA mov.w @(disp,pc),Rn */
	IF(0x0C0923ACu); { u32 tv_ = (r4 + 0x0C0923B0u); u32 t_ = PHYS(tv_); r4 = R32(r14); /* slot mov.l @Rm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0923AC braf Rn */
}

void f_0C0923A0(sh3_t *c)
{
	LOCALS;
L_0C0923A0: BLKS(0x0C0923A0u);
	r12 = 0xC0A03F0u; UPD(0x0C0923A2u, 1);  /* 0C0923A0 mov.l @(disp,pc),Rn */
	IF(0x0C0923A2u); { u32 t_ = r12; PR = 0x0C0923A6u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C0923A6u); }  /* 0C0923A2 jsr @Rn */
L_0C0923A6: BLKS(0x0C0923A6u);
	IF(0x0C0923A6u); T = (s32)r0 >= 0;  /* 0C0923A6 cmp/pz Rn */
	if (T) { UPD(0x0C0923B2u, 4); goto L_0C0923B2; }  /* 0C0923A8 bt */
L_0C0923AA: BLKS(0x0C0923AAu);
	r4 = 0xFFFFCEF2u; UPD(0x0C0923ACu, 1);  /* 0C0923AA mov.w @(disp,pc),Rn */
	IF(0x0C0923ACu); { u32 tv_ = (r4 + 0x0C0923B0u); u32 t_ = PHYS(tv_); r4 = R32(r14); /* slot mov.l @Rm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0923AC braf Rn */
L_0C0923B2: BLKS(0x0C0923B2u);
	r13 = 0xB4u; UPD(0x0C0923B4u, 1);  /* 0C0923B2 mov.w @(disp,pc),Rn */
	IF(0x0C0923B4u); MACL = r0 * r13;  /* 0C0923B4 mul.l Rm,Rn */
	r5 = 0xC26CD40u; UPD(0x0C0923B8u, 3);  /* 0C0923B6 mov.l @(disp,pc),Rn */
	IF(0x0C0923B8u); r0 = MACL;  /* 0C0923B8 sts macl,Rn */
	r8 = 0x86u; UPD(0x0C0923BCu, 2);  /* 0C0923BA mov.w @(disp,pc),Rn */
	r0 += r5;  /* 0C0923BC add Rm,Rn */
	IF(0x0C0923BEu); r6 = (u32)(s32)(s16)R16(r0 + r8); UPD(0x0C0923C0u, 2);  /* 0C0923BE mov.w @(r0,Rm),Rn */
	W32(r14 + 0x30u, r0); UPD(0x0C0923C2u, 1);  /* 0C0923C0 mov.l Rm,@(disp,Rn) */
	r0 = R32(r14); UPD(0x0C0923C4u, 1);  /* 0C0923C2 mov.l @Rm,Rn */
	IF(0x0C0923C4u); MACL = r0 * r13;  /* 0C0923C4 mul.l Rm,Rn */
	r12 = 0xC058060u; UPD(0x0C0923C8u, 3);  /* 0C0923C6 mov.l @(disp,pc),Rn */
	W32(r14 + 0x4u, r6); UPD(0x0C0923CAu, 1);  /* 0C0923C8 mov.l Rm,@(disp,Rn) */
	IF(0x0C0923CAu); r13 = MACL;  /* 0C0923CA sts macl,Rn */
	r13 += r5;  /* 0C0923CC add Rm,Rn */
	r4 = R32(r14 + 0x4u); UPD(0x0C0923D0u, 3);  /* 0C0923CE mov.l @(disp,Rm),Rn */
	IF(0x0C0923D0u); { u32 t_ = r12; PR = 0x0C0923D4u; r5 = R32(r13 + 0x2Cu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0923D4u); }  /* 0C0923D0 jsr @Rn */
L_0C0923D4: BLKS(0x0C0923D4u);
	r2 = 0xC058030u; UPD(0x0C0923D6u, 1);  /* 0C0923D4 mov.l @(disp,pc),Rn */
	r9 = r0;  /* 0C0923D6 mov Rm,Rn */
	r4 = R32(r14 + 0x4u); UPD(0x0C0923DAu, 2);  /* 0C0923D8 mov.l @(disp,Rm),Rn */
	IF(0x0C0923DAu); { u32 t_ = r2; PR = 0x0C0923DEu; r5 = R32(r13 + 0x30u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0923DEu); }  /* 0C0923DA jsr @Rn */
L_0C0923DE: BLKS(0x0C0923DEu);
	r9 -= r0;  /* 0C0923DE sub Rm,Rn */
	r10 = 0x66666667u; UPD(0x0C0923E2u, 2);  /* 0C0923E0 mov.l @(disp,pc),Rn */
	IF(0x0C0923E2u); r9 <<= 2;  /* 0C0923E2 shll2 Rn */
	{ s64 r_ = (s64)(s32)r9 * (s64)(s32)r10; MACH = (u32)((u64)r_ >> 32); MACL = (u32)r_; }  /* 0C0923E4 dmuls.l Rm,Rn */
	r3 = R32(r14 + 0x30u); UPD(0x0C0923E8u, 4);  /* 0C0923E6 mov.l @(disp,Rm),Rn */
	IF(0x0C0923E8u); r11 = MACH;  /* 0C0923E8 sts mach,Rn */
	IF(0x0C0923EAu); T = r11 & 1; r11 = (u32)((s32)r11 >> 1);  /* 0C0923EA shar Rn */
	IF(0x0C0923ECu); T = r9 >> 31; r9 <<= 1;  /* 0C0923EC shll Rn */
	{ u32 a_ = r9, t_ = a_ - r9, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r9 = r_; }  /* 0C0923EE subc Rm,Rn */
	r7 = R32(r3 + 0x24u); UPD(0x0C0923F2u, 5);  /* 0C0923F0 mov.l @(disp,Rm),Rn */
	r11 -= r9;  /* 0C0923F2 sub Rm,Rn */
	r4 = 0xFFF60000u; UPD(0x0C0923F6u, 2);  /* 0C0923F4 mov.l @(disp,pc),Rn */
	r7 += r11;  /* 0C0923F6 add Rm,Rn */
	r8 = 0xC058030u; UPD(0x0C0923FAu, 2);  /* 0C0923F8 mov.l @(disp,pc),Rn */
	r7 += r4;  /* 0C0923FA add Rm,Rn */
	W32(r13 + 0x24u, r7); UPD(0x0C0923FEu, 2);  /* 0C0923FC mov.l Rm,@(disp,Rn) */
	r11 = r13;  /* 0C0923FE mov Rm,Rn */
	r4 = R32(r14 + 0x4u); UPD(0x0C092402u, 2);  /* 0C092400 mov.l @(disp,Rm),Rn */
	IF(0x0C092402u); { u32 t_ = r8; PR = 0x0C092406u; r5 = R32(r13 + 0x2Cu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C092406u); }  /* 0C092402 jsr @Rn */
L_0C092406: BLKS(0x0C092406u);
	r1 = 0xC058060u; UPD(0x0C092408u, 1);  /* 0C092406 mov.l @(disp,pc),Rn */
	r12 = r0;  /* 0C092408 mov Rm,Rn */
	r4 = R32(r14 + 0x4u); UPD(0x0C09240Cu, 2);  /* 0C09240A mov.l @(disp,Rm),Rn */
	IF(0x0C09240Cu); { u32 t_ = r1; PR = 0x0C092410u; r5 = R32(r13 + 0x30u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C092410u); }  /* 0C09240C jsr @Rn */
L_0C092410: BLKS(0x0C092410u);
	r6 = R32(r14 + 0x30u); UPD(0x0C092412u, 1);  /* 0C092410 mov.l @(disp,Rm),Rn */
	r12 += r0;  /* 0C092412 add Rm,Rn */
	r0 = R32(r6 + 0x28u); UPD(0x0C092416u, 2);  /* 0C092414 mov.l @(disp,Rm),Rn */
	r2 = 0xA8u; UPD(0x0C092418u, 1);  /* 0C092416 mov.w @(disp,pc),Rn */
	r0 += r12;  /* 0C092418 add Rm,Rn */
	r5 = R32(r14 + 0x30u); UPD(0x0C09241Cu, 2);  /* 0C09241A mov.l @(disp,Rm),Rn */
	r11 += r2;  /* 0C09241C add Rm,Rn */
	W32(r13 + 0x28u, r0); UPD(0x0C092420u, 2);  /* 0C09241E mov.l Rm,@(disp,Rn) */
	r2 += r5;  /* 0C092420 add Rm,Rn */
	r9 = 0xAFu; UPD(0x0C092424u, 2);  /* 0C092422 mov.w @(disp,pc),Rn */
	r2 += 0x1u;  /* 0C092424 add #imm,Rn */
	r0 = r13;  /* 0C092426 mov Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r2); UPD(0x0C09242Au, 3);  /* 0C092428 mov.b @Rm,Rn */
	r11 += 0x1u;  /* 0C09242A add #imm,Rn */
	IF(0x0C09242Cu); r10 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C09242Eu, 2);  /* 0C09242C mov.b @(r0,Rm),Rn */
	r3 += r10;  /* 0C09242E add Rm,Rn */
	W8(r11, r3); UPD(0x0C092432u, 2);  /* 0C092430 mov.b Rm,@Rn */
	r4 = R32(r14 + 0x30u); UPD(0x0C092434u, 1);  /* 0C092432 mov.l @(disp,Rm),Rn */
	r8 = 0xC0A0380u; UPD(0x0C092436u, 1);  /* 0C092434 mov.l @(disp,pc),Rn */
	r7 = R32(r4 + 0xCu); UPD(0x0C092438u, 1);  /* 0C092436 mov.l @(disp,Rm),Rn */
	r4 = R32(r14); UPD(0x0C09243Au, 1);  /* 0C092438 mov.l @Rm,Rn */
	IF(0x0C09243Au); { u32 t_ = r8; PR = 0x0C09243Eu; W32(r13 + 0xCu, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C09243Eu); }  /* 0C09243A jsr @Rn */
L_0C09243E: BLKS(0x0C09243Eu);
	r1 = R32(r14 + 0x30u); UPD(0x0C092440u, 1);  /* 0C09243E mov.l @(disp,Rm),Rn */
	r6 = R32(r1 + 0x38u); UPD(0x0C092442u, 1);  /* 0C092440 mov.l @(disp,Rm),Rn */
	W32(r13 + 0x38u, r6); UPD(0x0C092444u, 1);  /* 0C092442 mov.l Rm,@(disp,Rn) */
	r12 = 0xFFFFCB0Cu; UPD(0x0C092446u, 1);  /* 0C092444 mov.w @(disp,pc),Rn */
	IF(0x0C092446u); { u32 tv_ = (r12 + 0x0C09244Au); u32 t_ = PHYS(tv_); r14 += 0x40u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C092446 braf Rn */
}

void f_0C092450(sh3_t *c)
{
	LOCALS;
	goto L_0C092450;
L_0C091FAC: BLKS(0x0C091FACu);
	r4 = 0xFFFFD472u; UPD(0x0C091FAEu, 1);  /* 0C091FAC mov.w @(disp,pc),Rn */
	IF(0x0C091FAEu); { u32 tv_ = (r4 + 0x0C091FB2u); u32 t_ = PHYS(tv_); W32(r7 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C091FAE braf Rn */
L_0C092444: BLKS(0x0C092444u);
	r12 = 0xFFFFCB0Cu; UPD(0x0C092446u, 1);  /* 0C092444 mov.w @(disp,pc),Rn */
	IF(0x0C092446u); { u32 tv_ = (r12 + 0x0C09244Au); u32 t_ = PHYS(tv_); r14 += 0x40u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C092446 braf Rn */
L_0C092450: BLKS(0x0C092450u);
	r11 = 0xC0A03F0u; UPD(0x0C092452u, 1);  /* 0C092450 mov.l @(disp,pc),Rn */
	IF(0x0C092452u); { u32 t_ = r11; PR = 0x0C092456u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A03F0, 0x0C0A03F0u, 0x0C092456u); }  /* 0C092452 jsr @Rn */
L_0C092456: BLKS(0x0C092456u);
	IF(0x0C092456u); T = (s32)r0 >= 0;  /* 0C092456 cmp/pz Rn */
	if (T) { UPD(0x0C092462u, 4); goto L_0C092462; }  /* 0C092458 bt */
L_0C09245A: BLKS(0x0C09245Au);
	r4 = 0xFFFFCE42u; UPD(0x0C09245Cu, 1);  /* 0C09245A mov.w @(disp,pc),Rn */
	IF(0x0C09245Cu); { u32 tv_ = (r4 + 0x0C092460u); u32 t_ = PHYS(tv_); r4 = R32(r14); /* slot mov.l @Rm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09245C braf Rn */
L_0C092462: BLKS(0x0C092462u);
	r2 = 0xB4u; UPD(0x0C092464u, 1);  /* 0C092462 mov.w @(disp,pc),Rn */
	IF(0x0C092464u); MACL = r0 * r2;  /* 0C092464 mul.l Rm,Rn */
	r3 = 0xC26CD40u; UPD(0x0C092468u, 3);  /* 0C092466 mov.l @(disp,pc),Rn */
	IF(0x0C092468u); r13 = MACL;  /* 0C092468 sts macl,Rn */
	r13 += r3;  /* 0C09246A add Rm,Rn */
	r0 = R32(r13 + 0xCu); UPD(0x0C09246Eu, 3);  /* 0C09246C mov.l @(disp,Rm),Rn */
	T = r0 == 0x10u;  /* 0C09246E cmp/eq #imm,r0 */
	{ u32 c_ = T; W32(r14 + 0x34u, r0); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C092490u, 4); goto L_0C092490; } UPD(0x0C092474u, 1); goto L_0C092474; }  /* 0C092470 bt/s */
L_0C092474: BLKS(0x0C092474u);
	r7 = R32(r14); UPD(0x0C092476u, 1);  /* 0C092474 mov.l @Rm,Rn */
	IF(0x0C092476u); MACL = r7 * r2;  /* 0C092476 mul.l Rm,Rn */
	IF(0x0C092478u); r1 = MACL;  /* 0C092478 sts macl,Rn */
	r4 = 0xFFFFD2E8u; UPD(0x0C09247Cu, 4);  /* 0C09247A mov.w @(disp,pc),Rn */
	IF(0x0C09247Cu); { u32 tv_ = (r4 + 0x0C092480u); u32 t_ = PHYS(tv_); r1 += r3; /* slot add Rm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09247C braf Rn */
L_0C092490: BLKS(0x0C092490u);
	r5 = R32(r14); UPD(0x0C092492u, 1);  /* 0C092490 mov.l @Rm,Rn */
	r0 = r13;  /* 0C092492 mov Rm,Rn */
	r9 = 0x86u; UPD(0x0C092496u, 2);  /* 0C092494 mov.w @(disp,pc),Rn */
	IF(0x0C092496u); MACL = r5 * r2;  /* 0C092496 mul.l Rm,Rn */
	IF(0x0C092498u); r6 = (u32)(s32)(s16)R16(r0 + r9); UPD(0x0C09249Au, 3);  /* 0C092498 mov.w @(r0,Rm),Rn */
	r11 = 0xC058060u; UPD(0x0C09249Cu, 1);  /* 0C09249A mov.l @(disp,pc),Rn */
	IF(0x0C09249Cu); r0 = MACL;  /* 0C09249C sts macl,Rn */
	W32(r14 + 0x4u, r6); UPD(0x0C0924A0u, 2);  /* 0C09249E mov.l Rm,@(disp,Rn) */
	r0 += r3;  /* 0C0924A0 add Rm,Rn */
	r9 = 0xC058030u; UPD(0x0C0924A4u, 2);  /* 0C0924A2 mov.l @(disp,pc),Rn */
	r4 = R32(r14 + 0x4u); UPD(0x0C0924A6u, 1);  /* 0C0924A4 mov.l @(disp,Rm),Rn */
	r5 = R32(r0 + 0x2Cu); UPD(0x0C0924A8u, 1);  /* 0C0924A6 mov.l @(disp,Rm),Rn */
	IF(0x0C0924A8u); { u32 t_ = r11; PR = 0x0C0924ACu; W32(r14 + 0x3Cu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0924ACu); }  /* 0C0924A8 jsr @Rn */
L_0C0924AC: BLKS(0x0C0924ACu);
	r2 = R32(r14 + 0x3Cu); UPD(0x0C0924AEu, 1);  /* 0C0924AC mov.l @(disp,Rm),Rn */
	r12 = r0;  /* 0C0924AE mov Rm,Rn */
	r5 = R32(r2 + 0x30u); UPD(0x0C0924B2u, 2);  /* 0C0924B0 mov.l @(disp,Rm),Rn */
	IF(0x0C0924B2u); { u32 t_ = r9; PR = 0x0C0924B6u; r4 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLD(t_, 0x0C0924B6u); }  /* 0C0924B2 jsr @Rn */
L_0C0924B6: BLKS(0x0C0924B6u);
	r12 -= r0;  /* 0C0924B6 sub Rm,Rn */
	r10 = 0x66666667u; UPD(0x0C0924BAu, 2);  /* 0C0924B8 mov.l @(disp,pc),Rn */
	IF(0x0C0924BAu); r12 <<= 2;  /* 0C0924BA shll2 Rn */
	{ s64 r_ = (s64)(s32)r12 * (s64)(s32)r10; MACH = (u32)((u64)r_ >> 32); MACL = (u32)r_; }  /* 0C0924BC dmuls.l Rm,Rn */
	r7 = R32(r13 + 0x24u); UPD(0x0C0924C0u, 4);  /* 0C0924BE mov.l @(disp,Rm),Rn */
	IF(0x0C0924C0u); r3 = MACH;  /* 0C0924C0 sts mach,Rn */
	IF(0x0C0924C2u); T = r3 & 1; r3 = (u32)((s32)r3 >> 1);  /* 0C0924C2 shar Rn */
	IF(0x0C0924C4u); T = r12 >> 31; r12 <<= 1;  /* 0C0924C4 shll Rn */
	{ u32 a_ = r12, t_ = a_ - r12, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r12 = r_; }  /* 0C0924C6 subc Rm,Rn */
	r3 -= r12;  /* 0C0924C8 sub Rm,Rn */
	r4 = 0xFFF60000u; UPD(0x0C0924CCu, 6);  /* 0C0924CA mov.l @(disp,pc),Rn */
	r7 += r3;  /* 0C0924CC add Rm,Rn */
	r8 = R32(r14 + 0x3Cu); UPD(0x0C0924D0u, 2);  /* 0C0924CE mov.l @(disp,Rm),Rn */
	r7 += r4;  /* 0C0924D0 add Rm,Rn */
	W32(r8 + 0x24u, r7); UPD(0x0C0924D4u, 2);  /* 0C0924D2 mov.l Rm,@(disp,Rn) */
	r4 = R32(r14 + 0x4u); UPD(0x0C0924D6u, 1);  /* 0C0924D4 mov.l @(disp,Rm),Rn */
	IF(0x0C0924D6u); { u32 t_ = r9; PR = 0x0C0924DAu; r5 = R32(r8 + 0x2Cu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLD(t_, 0x0C0924DAu); }  /* 0C0924D6 jsr @Rn */
L_0C0924DA: BLKS(0x0C0924DAu);
	r1 = 0xC058060u; UPD(0x0C0924DCu, 1);  /* 0C0924DA mov.l @(disp,pc),Rn */
	r11 = r0;  /* 0C0924DC mov Rm,Rn */
	r6 = R32(r14 + 0x3Cu); UPD(0x0C0924E0u, 2);  /* 0C0924DE mov.l @(disp,Rm),Rn */
	r4 = R32(r14 + 0x4u); UPD(0x0C0924E2u, 1);  /* 0C0924E0 mov.l @(disp,Rm),Rn */
	IF(0x0C0924E2u); { u32 t_ = r1; PR = 0x0C0924E6u; r5 = R32(r6 + 0x30u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0924E6u); }  /* 0C0924E2 jsr @Rn */
L_0C0924E6: BLKS(0x0C0924E6u);
	r11 += r0;  /* 0C0924E6 add Rm,Rn */
	r7 = R32(r14 + 0x3Cu); UPD(0x0C0924EAu, 2);  /* 0C0924E8 mov.l @(disp,Rm),Rn */
	r0 = R32(r13 + 0x28u); UPD(0x0C0924ECu, 1);  /* 0C0924EA mov.l @(disp,Rm),Rn */
	r9 = r7;  /* 0C0924EC mov Rm,Rn */
	r2 = 0xA8u; UPD(0x0C0924F0u, 2);  /* 0C0924EE mov.w @(disp,pc),Rn */
	r0 += r11;  /* 0C0924F0 add Rm,Rn */
	r9 += r2;  /* 0C0924F2 add Rm,Rn */
	r3 = R32(r13 + 0x38u); UPD(0x0C0924F6u, 3);  /* 0C0924F4 mov.l @(disp,Rm),Rn */
	r2 += r13;  /* 0C0924F6 add Rm,Rn */
	W32(r7 + 0x28u, r0); UPD(0x0C0924FAu, 2);  /* 0C0924F8 mov.l Rm,@(disp,Rn) */
	r2 += 0x1u;  /* 0C0924FA add #imm,Rn */
	r5 = 0xAFu; UPD(0x0C0924FEu, 2);  /* 0C0924FC mov.w @(disp,pc),Rn */
	r0 = r7;  /* 0C0924FE mov Rm,Rn */
	r6 = 0x9Fu; UPD(0x0C092502u, 2);  /* 0C092500 mov.w @(disp,pc),Rn */
	r9 += 0x1u;  /* 0C092502 add #imm,Rn */
	W32(r7 + 0x38u, r3); UPD(0x0C092506u, 2);  /* 0C092504 mov.l Rm,@(disp,Rn) */
	r6 += r7;  /* 0C092506 add Rm,Rn */
	r10 = (u32)(s32)(s8)R8(r2); UPD(0x0C09250Au, 2);  /* 0C092508 mov.b @Rm,Rn */
	IF(0x0C09250Au); r12 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C09250Cu, 1);  /* 0C09250A mov.b @(r0,Rm),Rn */
	r3 = (u32)(s32)(s8)R8(r6); UPD(0x0C09250Eu, 1);  /* 0C09250C mov.b @Rm,Rn */
	r10 += r12;  /* 0C09250E add Rm,Rn */
	r0 = r3 & 0xFF;  /* 0C092510 extu.b Rm,Rn */
	T = r0 == 0x1u;  /* 0C092512 cmp/eq #imm,r0 */
	{ u32 c_ = T; W8(r9, r10); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0925D0u, 6); goto L_0C0925D0; } UPD(0x0C092518u, 1); goto L_0C092518; }  /* 0C092514 bt/s */
L_0C092518: BLKS(0x0C092518u);
	r8 = 0x1u;  /* 0C092518 mov #imm,Rn */
	T = (s32)r0 > (s32)r8;  /* 0C09251A cmp/gt Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x2u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C092570u, 5); goto L_0C092570; } goto L_0C092520; }  /* 0C09251C bt/s */
L_0C092520: BLKS(0x0C092520u);
	T = (r0 & r0) == 0;  /* 0C092520 tst Rm,Rn */
	if (!T) { UPD(0x0C092444u, 5); goto L_0C092444; }  /* 0C092522 bf */
L_0C092524: BLKS(0x0C092524u);
	r4 = r7;  /* 0C092524 mov Rm,Rn */
	r12 = 0xA0u; UPD(0x0C092528u, 2);  /* 0C092526 mov.w @(disp,pc),Rn */
	r13 += r12;  /* 0C092528 add Rm,Rn */
	r13 += 0x1u;  /* 0C09252A add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r13); UPD(0x0C09252Eu, 3);  /* 0C09252C mov.b @Rm,Rn */
	r4 += r12;  /* 0C09252E add Rm,Rn */
	r4 += 0x1u;  /* 0C092530 add #imm,Rn */
	r13 = (u32)(s32)(s8)R8(r4); UPD(0x0C092534u, 3);  /* 0C092532 mov.b @Rm,Rn */
	T = (r1 & r13) == 0;  /* 0C092534 tst Rm,Rn */
	if (T) { UPD(0x0C0925EEu, 4); goto L_0C0925EE; }  /* 0C092536 bt */
L_0C092538: BLKS(0x0C092538u);
	r13 = 0xFFFFD1B2u; UPD(0x0C09253Au, 1);  /* 0C092538 mov.w @(disp,pc),Rn */
	IF(0x0C09253Au); { u32 tv_ = (r13 + 0x0C09253Eu); u32 t_ = PHYS(tv_); r1 = r3; /* slot mov Rm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09253A braf Rn */
L_0C092570: BLKS(0x0C092570u);
	if (!T) { UPD(0x0C0925EEu, 3); goto L_0C0925EE; }  /* 0C092570 bf */
L_0C092572: BLKS(0x0C092572u);
	r2 = 0x99u; UPD(0x0C092574u, 1);  /* 0C092572 mov.w @(disp,pc),Rn */
	r2 += r7;  /* 0C092574 add Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r2); UPD(0x0C092578u, 2);  /* 0C092576 mov.b @Rm,Rn */
	r3 += 0x1u;  /* 0C092578 add #imm,Rn */
	r0 = r3 & 0xFF;  /* 0C09257A extu.b Rm,Rn */
	T = r0 == 0x8u;  /* 0C09257C cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r2, r3); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0925EEu, 6); goto L_0C0925EE; } UPD(0x0C092582u, 1); goto L_0C092582; }  /* 0C09257E bf/s */
L_0C092582: BLKS(0x0C092582u);
	r0 = 0x0u;  /* 0C092582 mov #imm,Rn */
	W8(r2, r0); UPD(0x0C092586u, 2);  /* 0C092584 mov.b Rm,@Rn */
	r0 = R32(r7 + 0xCu); UPD(0x0C092588u, 1);  /* 0C092586 mov.l @(disp,Rm),Rn */
	T = r0 == 0x7u;  /* 0C092588 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C092592u, 4); goto L_0C092592; }  /* 0C09258A bt */
L_0C09258C: BLKS(0x0C09258Cu);
	r0 += 0x1u;  /* 0C09258C add #imm,Rn */
	{ IF(0x0C092590u); ; /* slot nop */ UPD(0x0C091FACu, 4); goto L_0C091FAC; }  /* 0C09258E bra */
L_0C092592: BLKS(0x0C092592u);
	r4 = R32(r14 + 0x34u); UPD(0x0C092594u, 1);  /* 0C092592 mov.l @(disp,Rm),Rn */
	r10 = R32(r7 + 0x8u); UPD(0x0C092596u, 1);  /* 0C092594 mov.l @(disp,Rm),Rn */
	r12 = 0xC0A03B0u; UPD(0x0C092598u, 1);  /* 0C092596 mov.l @(disp,pc),Rn */
	r10 += 0xFFFFFFFEu;  /* 0C092598 add #imm,Rn */
	W32(r7 + 0xCu, r4); UPD(0x0C09259Cu, 2);  /* 0C09259A mov.l Rm,@(disp,Rn) */
	W32(r7 + 0x8u, r10); UPD(0x0C09259Eu, 1);  /* 0C09259C mov.l Rm,@(disp,Rn) */
	r4 = R32(r14); UPD(0x0C0925A0u, 1);  /* 0C09259E mov.l @Rm,Rn */
	IF(0x0C0925A0u); { u32 t_ = r12; PR = 0x0C0925A4u; W32(r14 + 0x3Cu, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A03B0, 0x0C0A03B0u, 0x0C0925A4u); }  /* 0C0925A0 jsr @Rn */
L_0C0925A4: BLKS(0x0C0925A4u);
	r8 = R32(r14 + 0x3Cu); UPD(0x0C0925A6u, 1);  /* 0C0925A4 mov.l @(disp,Rm),Rn */
	r3 = r13;  /* 0C0925A6 mov Rm,Rn */
	r9 = 0xA0u; UPD(0x0C0925AAu, 2);  /* 0C0925A8 mov.w @(disp,pc),Rn */
	r6 = r8;  /* 0C0925AA mov Rm,Rn */
	r6 += r9;  /* 0C0925AC add Rm,Rn */
	r3 += r9;  /* 0C0925AE add Rm,Rn */
	r6 += 0x1u;  /* 0C0925B0 add #imm,Rn */
	r3 += 0x1u;  /* 0C0925B2 add #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r6); UPD(0x0C0925B6u, 6);  /* 0C0925B4 mov.b @Rm,Rn */
	r5 = (u32)(s32)(s8)R8(r3); UPD(0x0C0925B8u, 1);  /* 0C0925B6 mov.b @Rm,Rn */
	r1 = ~r2;  /* 0C0925B8 not Rm,Rn */
	r13 = 0xFFFFCABAu; UPD(0x0C0925BCu, 2);  /* 0C0925BA mov.w @(disp,pc),Rn */
	IF(0x0C0925BCu); { u32 tv_ = (r13 + 0x0C0925C0u); u32 t_ = PHYS(tv_); r1 &= r5; /* slot and Rm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0925BC braf Rn */
L_0C0925D0: BLKS(0x0C0925D0u);
	r2 = R32(r7 + 0x30u); UPD(0x0C0925D2u, 1);  /* 0C0925D0 mov.l @(disp,Rm),Rn */
	IF(0x0C0925D2u); T = (s32)r2 >= 0;  /* 0C0925D2 cmp/pz Rn */
	if (!T) { UPD(0x0C092610u, 4); goto L_0C092610; }  /* 0C0925D4 bf */
L_0C0925D6: BLKS(0x0C0925D6u);
	IF(0x0C0925D6u); T = (s32)r2 > 0;  /* 0C0925D6 cmp/pl Rn */
	{ u32 c_ = !T; IF(0x0C0925DAu); T = (s32)r2 >= 0; /* slot cmp/pz Rn */ if (c_) { UPD(0x0C0925E6u, 4); goto L_0C0925E6; } goto L_0C0925DC; }  /* 0C0925D8 bf/s */
L_0C0925DC: BLKS(0x0C0925DCu);
	r11 = 0x8000u; UPD(0x0C0925DEu, 2);  /* 0C0925DC mov.l @(disp,pc),Rn */
	r11 += r2;  /* 0C0925DE add Rm,Rn */
	W32(r7 + 0x30u, r11); UPD(0x0C0925E2u, 2);  /* 0C0925E0 mov.l Rm,@(disp,Rn) */
	r2 = r11;  /* 0C0925E2 mov Rm,Rn */
	IF(0x0C0925E4u); T = (s32)r2 >= 0;  /* 0C0925E4 cmp/pz Rn */
	UPD(0x0C0925E6u, 2);
L_0C0925E6: BLKS(0x0C0925E6u);
	if (!T) { UPD(0x0C092600u, 3); goto L_0C092600; }  /* 0C0925E6 bf */
L_0C0925E8: BLKS(0x0C0925E8u);
	r7 = 0x240000u; UPD(0x0C0925EAu, 1);  /* 0C0925E8 mov.l @(disp,pc),Rn */
	T = r2 == r7;  /* 0C0925EA cmp/eq Rm,Rn */
	if (T) { UPD(0x0C092538u, 4); goto L_0C092538; }  /* 0C0925EC bt */
L_0C0925EE: BLKS(0x0C0925EEu);
	r13 = 0xFFFFC962u; UPD(0x0C0925F0u, 1);  /* 0C0925EE mov.w @(disp,pc),Rn */
	IF(0x0C0925F0u); { u32 tv_ = (r13 + 0x0C0925F4u); u32 t_ = PHYS(tv_); r14 += 0x40u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C0925F0 braf Rn */
L_0C092600: BLKS(0x0C092600u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0925E8u, 3); goto L_0C0925E8; }  /* 0C092600 bra */
L_0C092610: BLKS(0x0C092610u);
	r10 = 0xFFFF8000u; UPD(0x0C092612u, 1);  /* 0C092610 mov.w @(disp,pc),Rn */
	r10 += r2;  /* 0C092612 add Rm,Rn */
	W32(r7 + 0x30u, r10); UPD(0x0C092616u, 2);  /* 0C092614 mov.l Rm,@(disp,Rn) */
	{ r2 = r10; /* slot mov Rm,Rn */ UPD(0x0C0925D6u, 3); goto L_0C0925D6; }  /* 0C092616 bra */
}

void f_0C092620(sh3_t *c)
{
	LOCALS;
L_0C092620: BLKS(0x0C092620u);
	r0 = R32(r14); UPD(0x0C092622u, 1);  /* 0C092620 mov.l @Rm,Rn */
	r10 = 0xB4u; UPD(0x0C092624u, 1);  /* 0C092622 mov.w @(disp,pc),Rn */
	r4 = r0;  /* 0C092624 mov Rm,Rn */
	IF(0x0C092626u); MACL = r0 * r10;  /* 0C092626 mul.l Rm,Rn */
	r11 = 0xC26CD40u; UPD(0x0C09262Au, 4);  /* 0C092628 mov.l @(disp,pc),Rn */
	IF(0x0C09262Au); r8 = MACL;  /* 0C09262A sts macl,Rn */
	r8 += r11;  /* 0C09262C add Rm,Rn */
	r8 += 0x3Cu;  /* 0C09262E add #imm,Rn */
	r3 = (u32)(s32)(s16)R16(r8); UPD(0x0C092632u, 4);  /* 0C092630 mov.w @Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C092632 tst Rm,Rn */
	{ u32 c_ = !T; r8 += 0xFFFFFFC4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C092640u, 4); goto L_0C092640; } goto L_0C092638; }  /* 0C092634 bf/s */
L_0C092638: BLKS(0x0C092638u);
	r1 = 0xFFFFDD62u; UPD(0x0C09263Au, 2);  /* 0C092638 mov.w @(disp,pc),Rn */
	IF(0x0C09263Au); { u32 tv_ = (r1 + 0x0C09263Eu); u32 t_ = PHYS(tv_); IF(0x0C09263Cu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09263A braf Rn */
L_0C092640: BLKS(0x0C092640u);
	r13 = 0xC0A0540u; UPD(0x0C092642u, 1);  /* 0C092640 mov.l @(disp,pc),Rn */
	IF(0x0C092642u); { u32 t_ = r13; PR = 0x0C092646u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0540, 0x0C0A0540u, 0x0C092646u); }  /* 0C092642 jsr @Rn */
L_0C092646: BLKS(0x0C092646u);
	IF(0x0C092646u); T = (s32)r0 >= 0;  /* 0C092646 cmp/pz Rn */
	{ u32 c_ = T; IF(0x0C09264Au); MACL = r0 * r10; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C092654u, 5); goto L_0C092654; } goto L_0C09264C; }  /* 0C092648 bt/s */
L_0C09264C: BLKS(0x0C09264Cu);
	r4 = 0xFFFFCC50u; UPD(0x0C09264Eu, 3);  /* 0C09264C mov.w @(disp,pc),Rn */
	IF(0x0C09264Eu); { u32 tv_ = (r4 + 0x0C092652u); u32 t_ = PHYS(tv_); r4 = R32(r14); /* slot mov.l @Rm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09264E braf Rn */
L_0C092654: BLKS(0x0C092654u);
	r7 = R32(r8); UPD(0x0C092656u, 1);  /* 0C092654 mov.l @Rm,Rn */
	r6 = 0xECFFFEFFu; UPD(0x0C092658u, 1);  /* 0C092656 mov.l @(disp,pc),Rn */
	IF(0x0C092658u); r5 = MACL;  /* 0C092658 sts macl,Rn */
	r7 &= r6;  /* 0C09265A and Rm,Rn */
	W32(r8, r7); UPD(0x0C09265Eu, 3);  /* 0C09265C mov.l Rm,@Rn */
	r5 += r11;  /* 0C09265E add Rm,Rn */
	r12 = R32(r5 + 0x24u); UPD(0x0C092662u, 2);  /* 0C092660 mov.l @(disp,Rm),Rn */
	r10 = 0x11u;  /* 0C092662 mov #imm,Rn */
	r3 = R32(r8 + 0x2Cu); UPD(0x0C092666u, 2);  /* 0C092664 mov.l @(disp,Rm),Rn */
	r0 = R32(r5); UPD(0x0C092668u, 1);  /* 0C092666 mov.l @Rm,Rn */
	r12 += r3;  /* 0C092668 add Rm,Rn */
	r1 = 0x13000100u; UPD(0x0C09266Cu, 2);  /* 0C09266A mov.l @(disp,pc),Rn */
	r4 = R32(r5 + 0x28u); UPD(0x0C09266Eu, 1);  /* 0C09266C mov.l @(disp,Rm),Rn */
	r0 &= r1;  /* 0C09266E and Rm,Rn */
	r11 = R32(r8 + 0x30u); UPD(0x0C092672u, 2);  /* 0C092670 mov.l @(disp,Rm),Rn */
	r7 |= r0;  /* 0C092672 or Rm,Rn */
	r9 = R32(r5 + 0x38u); UPD(0x0C092676u, 2);  /* 0C092674 mov.l @(disp,Rm),Rn */
	r4 += r11;  /* 0C092676 add Rm,Rn */
	r3 = R32(r8 + 0xCu); UPD(0x0C09267Au, 2);  /* 0C092678 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x24u, r12); UPD(0x0C09267Cu, 1);  /* 0C09267A mov.l Rm,@(disp,Rn) */
	T = r3 > r10;  /* 0C09267C cmp/hi Rm,Rn */
	W32(r8 + 0x28u, r4); UPD(0x0C092680u, 2);  /* 0C09267E mov.l Rm,@(disp,Rn) */
	W32(r8, r7); UPD(0x0C092682u, 1);  /* 0C092680 mov.l Rm,@Rn */
	{ u32 c_ = T; W32(r8 + 0x38u, r9); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C092720u, 3); goto L_0C092720; } UPD(0x0C092686u, 1); goto L_0C092686; }  /* 0C092682 bt/s */
L_0C092686: BLKS(0x0C092686u);
	r0 = 0xC0926B4u;  /* 0C092686 mova @(disp,pc),r0 */
	r3 += r3;  /* 0C092688 add Rm,Rn */
	IF(0x0C09268Au); r8 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C09268Cu, 3);  /* 0C09268A mov.w @(r0,Rm),Rn */
	IF(0x0C09268Cu); { u32 tv_ = (r8 + 0x0C092690u); u32 t_ = PHYS(tv_); IF(0x0C09268Eu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09268C braf Rn */
L_0C092720: BLKS(0x0C092720u);
	r12 = R32(r14); UPD(0x0C092722u, 1);  /* 0C092720 mov.l @Rm,Rn */
	r11 = 0xB4u; UPD(0x0C092724u, 1);  /* 0C092722 mov.w @(disp,pc),Rn */
	IF(0x0C092724u); MACL = r12 * r11;  /* 0C092724 mul.l Rm,Rn */
	r4 = 0xC26CD40u; UPD(0x0C092728u, 3);  /* 0C092726 mov.l @(disp,pc),Rn */
	IF(0x0C092728u); r3 = MACL;  /* 0C092728 sts macl,Rn */
	r2 = 0x99u; UPD(0x0C09272Cu, 2);  /* 0C09272A mov.w @(disp,pc),Rn */
	r3 += r4;  /* 0C09272C add Rm,Rn */
	r2 += r3;  /* 0C09272E add Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r2); UPD(0x0C092732u, 3);  /* 0C092730 mov.b @Rm,Rn */
	r6 += 0x1u;  /* 0C092732 add #imm,Rn */
	r0 = r6 & 0xFF;  /* 0C092734 extu.b Rm,Rn */
	W8(r2, r6); UPD(0x0C092738u, 3);  /* 0C092736 mov.b Rm,@Rn */
	T = r0 == 0x3u;  /* 0C092738 cmp/eq #imm,r0 */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C09273Cu, 2);  /* 0C09273A mov.l Rm,@-Rn */
	r13 = 0xFFFFDB88u; UPD(0x0C09273Eu, 1);  /* 0C09273C mov.w @(disp,pc),Rn */
	IF(0x0C09273Eu); { u32 tv_ = (r13 + 0x0C092742u); u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r13 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09273E braf Rn */
}

void f_0C0926E0(sh3_t *c)
{
	LOCALS;
L_0C0926E0: BLKS(0x0C0926E0u);
	r13 = 0xC0A9E40u; UPD(0x0C0926E2u, 1);  /* 0C0926E0 mov.l @(disp,pc),Rn */
	r5 = 0x5Au;  /* 0C0926E2 mov #imm,Rn */
	r4 = R32(r14); UPD(0x0C0926E6u, 2);  /* 0C0926E4 mov.l @Rm,Rn */
	IF(0x0C0926E6u); { u32 t_ = r13; PR = 0x0C0926EAu; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C0926EAu); }  /* 0C0926E6 jsr @Rn */
L_0C0926EA: BLKS(0x0C0926EAu);
	T = (r0 & r0) == 0;  /* 0C0926EA tst Rm,Rn */
	if (T) { UPD(0x0C092788u, 4); goto L_0C092788; }  /* 0C0926EC bt */
L_0C0926EE: BLKS(0x0C0926EEu);
	r5 = 0x1u;  /* 0C0926EE mov #imm,Rn */
	r0 = 0xB4u; UPD(0x0C0926F2u, 2);  /* 0C0926F0 mov.w @(disp,pc),Rn */
	r1 = R32(r14); UPD(0x0C0926F4u, 1);  /* 0C0926F2 mov.l @Rm,Rn */
	IF(0x0C0926F4u); MACL = r1 * r0;  /* 0C0926F4 mul.l Rm,Rn */
	r7 = 0xC26CD40u; UPD(0x0C0926F8u, 3);  /* 0C0926F6 mov.l @(disp,pc),Rn */
	IF(0x0C0926F8u); r0 = MACL;  /* 0C0926F8 sts macl,Rn */
	r0 += r7;  /* 0C0926FA add Rm,Rn */
	r10 = R32(r0 + 0xCu); UPD(0x0C0926FEu, 3);  /* 0C0926FC mov.l @(disp,Rm),Rn */
	r2 = 0xC0A0380u; UPD(0x0C092700u, 1);  /* 0C0926FE mov.l @(disp,pc),Rn */
	r10 += 0x1u;  /* 0C092700 add #imm,Rn */
	r9 = 0x88u; UPD(0x0C092704u, 2);  /* 0C092702 mov.w @(disp,pc),Rn */
	W32(r0 + 0xCu, r10); UPD(0x0C092706u, 1);  /* 0C092704 mov.l Rm,@(disp,Rn) */
	IF(0x0C092706u); W16(r0 + r9, r5); UPD(0x0C092708u, 1);  /* 0C092706 mov.w Rm,@(r0,Rn) */
	IF(0x0C092708u); { u32 t_ = r2; PR = 0x0C09270Cu; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0380, 0x0C0A0380u, 0x0C09270Cu); }  /* 0C092708 jsr @Rn */
L_0C09270C: BLKS(0x0C09270Cu);
	r4 = 0xFFFFD01Eu; UPD(0x0C09270Eu, 1);  /* 0C09270C mov.w @(disp,pc),Rn */
	IF(0x0C09270Eu); { u32 tv_ = (r4 + 0x0C092712u); u32 t_ = PHYS(tv_); r4 = 0x6Cu; /* slot mov #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09270E braf Rn */
L_0C092788: BLKS(0x0C092788u);
	r13 = 0xFFFFC7C8u; UPD(0x0C09278Au, 1);  /* 0C092788 mov.w @(disp,pc),Rn */
	IF(0x0C09278Au); { u32 tv_ = (r13 + 0x0C09278Eu); u32 t_ = PHYS(tv_); r14 += 0x40u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09278A braf Rn */
}

void f_0C092720(sh3_t *c)
{
	LOCALS;
L_0C092720: BLKS(0x0C092720u);
	r12 = R32(r14); UPD(0x0C092722u, 1);  /* 0C092720 mov.l @Rm,Rn */
	r11 = 0xB4u; UPD(0x0C092724u, 1);  /* 0C092722 mov.w @(disp,pc),Rn */
	IF(0x0C092724u); MACL = r12 * r11;  /* 0C092724 mul.l Rm,Rn */
	r4 = 0xC26CD40u; UPD(0x0C092728u, 3);  /* 0C092726 mov.l @(disp,pc),Rn */
	IF(0x0C092728u); r3 = MACL;  /* 0C092728 sts macl,Rn */
	r2 = 0x99u; UPD(0x0C09272Cu, 2);  /* 0C09272A mov.w @(disp,pc),Rn */
	r3 += r4;  /* 0C09272C add Rm,Rn */
	r2 += r3;  /* 0C09272E add Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r2); UPD(0x0C092732u, 3);  /* 0C092730 mov.b @Rm,Rn */
	r6 += 0x1u;  /* 0C092732 add #imm,Rn */
	r0 = r6 & 0xFF;  /* 0C092734 extu.b Rm,Rn */
	W8(r2, r6); UPD(0x0C092738u, 3);  /* 0C092736 mov.b Rm,@Rn */
	T = r0 == 0x3u;  /* 0C092738 cmp/eq #imm,r0 */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C09273Cu, 2);  /* 0C09273A mov.l Rm,@-Rn */
	r13 = 0xFFFFDB88u; UPD(0x0C09273Eu, 1);  /* 0C09273C mov.w @(disp,pc),Rn */
	IF(0x0C09273Eu); { u32 tv_ = (r13 + 0x0C092742u); u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r13 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09273E braf Rn */
}

void f_0C092750(sh3_t *c)
{
	LOCALS;
L_0C092750: BLKS(0x0C092750u);
	r3 = 0xC286298u; UPD(0x0C092752u, 1);  /* 0C092750 mov.l @(disp,pc),Rn */
	r0 = R32(r3); UPD(0x0C092754u, 1);  /* 0C092752 mov.l @Rm,Rn */
	r0 &= 0x1u;  /* 0C092754 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C092756 tst Rm,Rn */
	{ u32 c_ = T; r1 = R32(r14); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C092810u, 5); goto L_0C092810; } UPD(0x0C09275Cu, 1); goto L_0C09275C; }  /* 0C092758 bt/s */
L_0C09275C: BLKS(0x0C09275Cu);
	r11 = 0xC0A9E40u; UPD(0x0C09275Eu, 1);  /* 0C09275C mov.l @(disp,pc),Rn */
	r5 = 0x5u;  /* 0C09275E mov #imm,Rn */
	r4 = R32(r14); UPD(0x0C092762u, 2);  /* 0C092760 mov.l @Rm,Rn */
	IF(0x0C092762u); { u32 t_ = r11; PR = 0x0C092766u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A9E40, 0x0C0A9E40u, 0x0C092766u); }  /* 0C092762 jsr @Rn */
L_0C092766: BLKS(0x0C092766u);
	T = (r0 & r0) == 0;  /* 0C092766 tst Rm,Rn */
	if (T) { UPD(0x0C092788u, 4); goto L_0C092788; }  /* 0C092768 bt */
L_0C09276A: BLKS(0x0C09276Au);
	r6 = 0x3u;  /* 0C09276A mov #imm,Rn */
	r12 = 0xB4u; UPD(0x0C09276Eu, 2);  /* 0C09276C mov.w @(disp,pc),Rn */
	r3 = R32(r14); UPD(0x0C092770u, 1);  /* 0C09276E mov.l @Rm,Rn */
	IF(0x0C092770u); MACL = r3 * r12;  /* 0C092770 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C092774u, 3);  /* 0C092772 mov.l @(disp,pc),Rn */
	IF(0x0C092774u); r9 = MACL;  /* 0C092774 sts macl,Rn */
	r10 = 0x9Fu; UPD(0x0C092778u, 2);  /* 0C092776 mov.w @(disp,pc),Rn */
	r9 += r0;  /* 0C092778 add Rm,Rn */
	r10 += r9;  /* 0C09277A add Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r10); UPD(0x0C09277Eu, 3);  /* 0C09277C mov.b @Rm,Rn */
	r0 = r4 & 0xFF;  /* 0C09277E extu.b Rm,Rn */
	T = (s32)r0 > (s32)r6;  /* 0C092780 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0927B0u, 5); goto L_0C0927B0; }  /* 0C092782 bf */
L_0C092784: BLKS(0x0C092784u);
	T = r0 == 0x4u;  /* 0C092784 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C092790u, 4); goto L_0C092790; }  /* 0C092786 bt */
L_0C092788: BLKS(0x0C092788u);
	r13 = 0xFFFFC7C8u; UPD(0x0C09278Au, 1);  /* 0C092788 mov.w @(disp,pc),Rn */
	IF(0x0C09278Au); { u32 tv_ = (r13 + 0x0C09278Eu); u32 t_ = PHYS(tv_); r14 += 0x40u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09278A braf Rn */
L_0C092790: BLKS(0x0C092790u);
	r5 = R32(r9 + 0xCu); UPD(0x0C092792u, 1);  /* 0C092790 mov.l @(disp,Rm),Rn */
	r6 = 0xFFFFFFFFu;  /* 0C092792 mov #imm,Rn */
	r0 = 0x88u; UPD(0x0C092796u, 2);  /* 0C092794 mov.w @(disp,pc),Rn */
	r5 += 0xFFFFFFFFu;  /* 0C092796 add #imm,Rn */
	IF(0x0C092798u); W16(r0 + r9, r6); UPD(0x0C09279Au, 2);  /* 0C092798 mov.w Rm,@(r0,Rn) */
	r11 = 0xFFFFDB78u; UPD(0x0C09279Cu, 1);  /* 0C09279A mov.w @(disp,pc),Rn */
	IF(0x0C09279Cu); { u32 tv_ = (r11 + 0x0C0927A0u); u32 t_ = PHYS(tv_); W32(r9 + 0xCu, r5); /* slot mov.l Rm,@(disp,Rn) */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09279C braf Rn */
L_0C0927B0: BLKS(0x0C0927B0u);
	r12 = 0xC058090u; UPD(0x0C0927B2u, 1);  /* 0C0927B0 mov.l @(disp,pc),Rn */
	IF(0x0C0927B2u); { u32 t_ = r12; PR = 0x0C0927B6u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058090, 0x0C058090u, 0x0C0927B6u); }  /* 0C0927B2 jsr @Rn */
L_0C0927B6: BLKS(0x0C0927B6u);
	r11 = 0x280u; UPD(0x0C0927B8u, 1);  /* 0C0927B6 mov.w @(disp,pc),Rn */
	r2 = (u32)(s32)(s16)r0;  /* 0C0927B8 exts.w Rm,Rn */
	IF(0x0C0927BAu); MACL = r2 * r11;  /* 0C0927BA mul.l Rm,Rn */
	r7 = 0xC283794u; UPD(0x0C0927BEu, 4);  /* 0C0927BC mov.l @(disp,pc),Rn */
	r8 = 0xC057390u; UPD(0x0C0927C0u, 1);  /* 0C0927BE mov.l @(disp,pc),Rn */
	IF(0x0C0927C0u); r3 = MACL;  /* 0C0927C0 sts macl,Rn */
	r13 = 0xC050D70u; UPD(0x0C0927C4u, 2);  /* 0C0927C2 mov.l @(disp,pc),Rn */
	r3 += r7;  /* 0C0927C4 add Rm,Rn */
	r4 = R32(r9 + 0x24u); UPD(0x0C0927C8u, 2);  /* 0C0927C6 mov.l @(disp,Rm),Rn */
	r5 = R32(r9 + 0x28u); UPD(0x0C0927CAu, 1);  /* 0C0927C8 mov.l @(disp,Rm),Rn */
	r6 = R32(r3 + 0x10u); UPD(0x0C0927CCu, 1);  /* 0C0927CA mov.l @(disp,Rm),Rn */
	IF(0x0C0927CCu); { u32 t_ = r8; PR = 0x0C0927D0u; r7 = R32(r3 + 0x14u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C057390, 0x0C057390u, 0x0C0927D0u); }  /* 0C0927CC jsr @Rn */
L_0C0927D0: BLKS(0x0C0927D0u);
	r12 = r0;  /* 0C0927D0 mov Rm,Rn */
	IF(0x0C0927D2u); { u32 t_ = r13; PR = 0x0C0927D6u; r4 = 0x1Fu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLD(t_, 0x0C0927D6u); }  /* 0C0927D2 jsr @Rn */
L_0C0927D6: BLKS(0x0C0927D6u);
	r12 += r0;  /* 0C0927D6 add Rm,Rn */
	r12 += 0xFFFFFFF0u;  /* 0C0927D8 add #imm,Rn */
	r1 = (u32)(s32)(s16)r12;  /* 0C0927DA exts.w Rm,Rn */
	W32(r14 + 0x4u, r1); UPD(0x0C0927DEu, 4);  /* 0C0927DC mov.l Rm,@(disp,Rn) */
	r6 = 0xCu;  /* 0C0927DE mov #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r10); UPD(0x0C0927E2u, 2);  /* 0C0927E0 mov.b @Rm,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0927E2 add #imm,Rn */
	r4 = r0 & 0xFF;  /* 0C0927E4 extu.b Rm,Rn */
	IF(0x0C0927E6u); MACL = r4 * r6;  /* 0C0927E6 mul.l Rm,Rn */
	r5 = 0xC1C2B64u; UPD(0x0C0927EAu, 5);  /* 0C0927E8 mov.l @(disp,pc),Rn */
	IF(0x0C0927EAu); r11 = MACL;  /* 0C0927EA sts macl,Rn */
	r11 += r5;  /* 0C0927EC add Rm,Rn */
	r5 = R32(r11); UPD(0x0C0927F0u, 3);  /* 0C0927EE mov.l @Rm,Rn */
	r4 = 0x1u;  /* 0C0927F0 mov #imm,Rn */
	r2 = R32(r9 + 0x24u); UPD(0x0C0927F4u, 2);  /* 0C0927F2 mov.l @(disp,Rm),Rn */
	r13 = R32(r9 + 0x28u); UPD(0x0C0927F6u, 1);  /* 0C0927F4 mov.l @(disp,Rm),Rn */
	r5 += r2;  /* 0C0927F6 add Rm,Rn */
	r7 = R32(r11 + 0x8u); UPD(0x0C0927FAu, 2);  /* 0C0927F8 mov.l @(disp,Rm),Rn */
	r6 = r13;  /* 0C0927FA mov Rm,Rn */
	r8 = R32(r11 + 0x4u); UPD(0x0C0927FEu, 2);  /* 0C0927FC mov.l @(disp,Rm),Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C092800u, 1);  /* 0C0927FE mov.l Rm,@(disp,Rn) */
	W32(r15, r8); UPD(0x0C092802u, 1);  /* 0C092800 mov.l Rm,@Rn */
	r0 = 0xC0A8690u; UPD(0x0C092804u, 1);  /* 0C092802 mov.l @(disp,pc),Rn */
	r1 = 0xFFFFDB84u; UPD(0x0C092806u, 1);  /* 0C092804 mov.w @(disp,pc),Rn */
	IF(0x0C092806u); { u32 tv_ = (r1 + 0x0C09280Au); u32 t_ = PHYS(tv_); r7 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C092806 braf Rn */
L_0C092810: BLKS(0x0C092810u);
	r15 += 0xFFFFFFFCu;  /* 0C092810 add #imm,Rn */
	r7 = 0xB4u; UPD(0x0C092814u, 2);  /* 0C092812 mov.w @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C092814 mov #imm,Rn */
	IF(0x0C092816u); MACL = r1 * r7;  /* 0C092816 mul.l Rm,Rn */
	r5 = 0xC26CD40u; UPD(0x0C09281Au, 4);  /* 0C092818 mov.l @(disp,pc),Rn */
	IF(0x0C09281Au); r10 = MACL;  /* 0C09281A sts macl,Rn */
	r10 += r5;  /* 0C09281C add Rm,Rn */
	r5 = R32(r10 + 0x24u); UPD(0x0C092820u, 3);  /* 0C09281E mov.l @(disp,Rm),Rn */
	r13 = R32(r10 + 0x28u); UPD(0x0C092822u, 1);  /* 0C092820 mov.l @(disp,Rm),Rn */
	r2 = 0x40000u; UPD(0x0C092824u, 1);  /* 0C092822 mov.l @(disp,pc),Rn */
	r6 = r13;  /* 0C092824 mov Rm,Rn */
	r8 = 0xC0A9460u; UPD(0x0C092828u, 2);  /* 0C092826 mov.l @(disp,pc),Rn */
	r9 = 0xFFB00000u; UPD(0x0C09282Au, 1);  /* 0C092828 mov.l @(disp,pc),Rn */
	W32(r15, r2); UPD(0x0C09282Cu, 1);  /* 0C09282A mov.l Rm,@Rn */
	r7 = 0x100u; UPD(0x0C09282Eu, 1);  /* 0C09282C mov.w @(disp,pc),Rn */
	IF(0x0C09282Eu); { u32 t_ = r8; PR = 0x0C092832u; r5 += r9; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A9460, 0x0C0A9460u, 0x0C092832u); }  /* 0C09282E jsr @Rn */
L_0C092832: BLKS(0x0C092832u);
	{ r15 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C09275Cu, 3); goto L_0C09275C; }  /* 0C092832 bra */
}

void f_0C092880(sh3_t *c)
{
	LOCALS;
L_0C092880: BLKS(0x0C092880u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C092882u, 1);  /* 0C092880 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C092884u, 1);  /* 0C092882 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C092886u, 1);  /* 0C092884 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C092888u, 1);  /* 0C092886 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C09288Au, 1);  /* 0C092888 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C09288Cu, 1);  /* 0C09288A mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C09288Eu, 1);  /* 0C09288C mov.l Rm,@-Rn */
	r9 = 0xC22C874u; UPD(0x0C092890u, 1);  /* 0C09288E mov.l @(disp,pc),Rn */
	IF(0x0C092890u); r15 -= 4; W32(r15, PR); UPD(0x0C092892u, 1);  /* 0C092890 sts.l pr,@-Rn */
	r8 = 0xC057A50u; UPD(0x0C092894u, 1);  /* 0C092892 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF0u;  /* 0C092894 add #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r9); UPD(0x0C092898u, 2);  /* 0C092896 mov.w @Rm,Rn */
	r14 = r15;  /* 0C092898 mov Rm,Rn */
	r5 = 0x8000u; UPD(0x0C09289Cu, 2);  /* 0C09289A mov.l @(disp,pc),Rn */
	IF(0x0C09289Cu); { u32 t_ = r8; PR = 0x0C0928A0u; r4 = r0 & 0xFFFF; /* slot extu.w Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C057A50, 0x0C057A50u, 0x0C0928A0u); }  /* 0C09289C jsr @Rn */
L_0C0928A0: BLKS(0x0C0928A0u);
	T = (r0 & r0) == 0;  /* 0C0928A0 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0928C0u, 4); goto L_0C0928C0; } UPD(0x0C0928A6u, 1); goto L_0C0928A6; }  /* 0C0928A2 bf/s */
L_0C0928A6: BLKS(0x0C0928A6u);
	r14 += 0x10u;  /* 0C0928A6 add #imm,Rn */
	r15 = r14;  /* 0C0928A8 mov Rm,Rn */
	IF(0x0C0928AAu); PR = R32(r15); r15 += 4; UPD(0x0C0928ACu, 3);  /* 0C0928AA lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0928AEu, 1);  /* 0C0928AC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0928B0u, 1);  /* 0C0928AE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0928B2u, 1);  /* 0C0928B0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0928B4u, 1);  /* 0C0928B2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0928B6u, 1);  /* 0C0928B4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0928B8u, 1);  /* 0C0928B6 mov.l @Rm+,Rn */
	IF(0x0C0928B8u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0928B8 rts */
L_0C0928C0: BLKS(0x0C0928C0u);
	r8 = 0xC0606C0u; UPD(0x0C0928C2u, 1);  /* 0C0928C0 mov.l @(disp,pc),Rn */
	IF(0x0C0928C2u); { u32 t_ = r8; PR = 0x0C0928C6u; r4 = 0x2Fu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0606C0, 0x0C0606C0u, 0x0C0928C6u); }  /* 0C0928C2 jsr @Rn */
L_0C0928C6: BLKS(0x0C0928C6u);
	T = (r0 & r0) == 0;  /* 0C0928C6 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0928A6u, 4); goto L_0C0928A6; } goto L_0C0928CC; }  /* 0C0928C8 bt/s */
L_0C0928CC: BLKS(0x0C0928CCu);
	r13 = 0xC2755BCu; UPD(0x0C0928CEu, 2);  /* 0C0928CC mov.l @(disp,pc),Rn */
	r8 = 0xB4u; UPD(0x0C0928D0u, 1);  /* 0C0928CE mov.w @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r13); r13 += 2; r1 = v_; } UPD(0x0C0928D2u, 1);  /* 0C0928D0 mov.w @Rm+,Rn */
	IF(0x0C0928D2u); MACL = r1 * r8;  /* 0C0928D2 mul.l Rm,Rn */
	r11 = 0xC28629Eu; UPD(0x0C0928D6u, 3);  /* 0C0928D4 mov.l @(disp,pc),Rn */
	r3 = (u32)(s32)(s16)R16(r9); UPD(0x0C0928D8u, 1);  /* 0C0928D6 mov.w @Rm,Rn */
	IF(0x0C0928D8u); r8 = MACL;  /* 0C0928D8 sts macl,Rn */
	r6 = 0xC26CD40u; UPD(0x0C0928DCu, 2);  /* 0C0928DA mov.l @(disp,pc),Rn */
	r2 = r3 & 0xFFFF;  /* 0C0928DC extu.w Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r11); UPD(0x0C0928E0u, 2);  /* 0C0928DE mov.w @Rm,Rn */
	r8 += r6;  /* 0C0928E0 add Rm,Rn */
	r0 = 0x8Au; UPD(0x0C0928E4u, 2);  /* 0C0928E2 mov.w @(disp,pc),Rn */
	r11 = 0x0u;  /* 0C0928E4 mov #imm,Rn */
	r9 = 0x86u; UPD(0x0C0928E8u, 2);  /* 0C0928E6 mov.w @(disp,pc),Rn */
	IF(0x0C0928E8u); W16(r0 + r8, r4); UPD(0x0C0928EAu, 1);  /* 0C0928E8 mov.w Rm,@(r0,Rn) */
	r9 += r8;  /* 0C0928EA add Rm,Rn */
	W32(r14, r1); UPD(0x0C0928EEu, 2);  /* 0C0928EC mov.l Rm,@Rn */
	W16(r9, r4); UPD(0x0C0928F0u, 1);  /* 0C0928EE mov.w Rm,@Rn */
	r0 = 0xC0A02D0u; UPD(0x0C0928F2u, 1);  /* 0C0928F0 mov.l @(disp,pc),Rn */
	r5 = 0xF3008100u; UPD(0x0C0928F4u, 1);  /* 0C0928F2 mov.l @(disp,pc),Rn */
	r10 = 0xC061380u; UPD(0x0C0928F6u, 1);  /* 0C0928F4 mov.l @(disp,pc),Rn */
	r4 = R32(r14); UPD(0x0C0928F8u, 1);  /* 0C0928F6 mov.l @Rm,Rn */
	r12 = 0x1900000u; UPD(0x0C0928FAu, 1);  /* 0C0928F8 mov.l @(disp,pc),Rn */
	W32(r8, r5); UPD(0x0C0928FCu, 1);  /* 0C0928FA mov.l Rm,@Rn */
	W32(r8 + 0x4u, r2); UPD(0x0C0928FEu, 1);  /* 0C0928FC mov.l Rm,@(disp,Rn) */
	W32(r8 + 0xCu, r11); UPD(0x0C092900u, 1);  /* 0C0928FE mov.l Rm,@(disp,Rn) */
	IF(0x0C092900u); { u32 t_ = r0; PR = 0x0C092904u; W32(r8 + 0x8u, r11); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A02D0, 0x0C0A02D0u, 0x0C092904u); }  /* 0C092900 jsr @Rn */
L_0C092904: BLKS(0x0C092904u);
	W32(r8 + 0x24u, r12); UPD(0x0C092906u, 1);  /* 0C092904 mov.l Rm,@(disp,Rn) */
	IF(0x0C092906u); { u32 t_ = r10; PR = 0x0C09290Au; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C061380, 0x0C061380u, 0x0C09290Au); }  /* 0C092906 jsr @Rn */
L_0C09290A: BLKS(0x0C09290Au);
	r7 = 0xC0A1530u; UPD(0x0C09290Cu, 1);  /* 0C09290A mov.l @(disp,pc),Rn */
	r12 = r8;  /* 0C09290C mov Rm,Rn */
	IF(0x0C09290Eu); { u32 t_ = r7; PR = 0x0C092912u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0A1530, 0x0C0A1530u, 0x0C092912u); }  /* 0C09290E jsr @Rn */
L_0C092912: BLKS(0x0C092912u);
	r2 = 0xA0u; UPD(0x0C092914u, 1);  /* 0C092912 mov.w @(disp,pc),Rn */
	r4 = r8;  /* 0C092914 mov Rm,Rn */
	r2 += r8;  /* 0C092916 add Rm,Rn */
	r2 += 0x3u;  /* 0C092918 add #imm,Rn */
	W8(r2, r11); UPD(0x0C09291Cu, 4);  /* 0C09291A mov.b Rm,@Rn */
	r6 = 0x12u;  /* 0C09291C mov #imm,Rn */
	r1 = 0xACu; UPD(0x0C092920u, 2);  /* 0C09291E mov.w @(disp,pc),Rn */
	r0 = 0xA9u; UPD(0x0C092922u, 1);  /* 0C092920 mov.w @(disp,pc),Rn */
	r4 += r1;  /* 0C092922 add Rm,Rn */
	{ u32 v_ = r11; r2 -= 1; W8(r2, v_); } UPD(0x0C092926u, 2);  /* 0C092924 mov.b Rm,@-Rn */
	r4 += 0x1u;  /* 0C092926 add #imm,Rn */
	IF(0x0C092928u); W8(r0 + r8, r6); UPD(0x0C09292Au, 2);  /* 0C092928 mov.b Rm,@(r0,Rn) */
	W8(r4, r6); UPD(0x0C09292Cu, 1);  /* 0C09292A mov.b Rm,@Rn */
	r0 += 0xFFFFFFE3u;  /* 0C09292C add #imm,Rn */
	{ u32 v_ = r11; r2 -= 1; W8(r2, v_); } UPD(0x0C092930u, 2);  /* 0C09292E mov.b Rm,@-Rn */
	r5 = 0x100u; UPD(0x0C092932u, 1);  /* 0C092930 mov.w @(disp,pc),Rn */
	r3 = 0x20000u; UPD(0x0C092934u, 1);  /* 0C092932 mov.l @(disp,pc),Rn */
	W16(r9, r5); UPD(0x0C092936u, 1);  /* 0C092934 mov.w Rm,@Rn */
	IF(0x0C092936u); W32(r0 + r8, r3); UPD(0x0C092938u, 1);  /* 0C092936 mov.l Rm,@(r0,Rn) */
	W32(r14 + 0x4u, r11); UPD(0x0C09293Au, 1);  /* 0C092938 mov.l Rm,@(disp,Rn) */
	W32(r14 + 0xCu, r11); UPD(0x0C09293Cu, 1);  /* 0C09293A mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x8u, r4); UPD(0x0C09293Eu, 1);  /* 0C09293C mov.l Rm,@(disp,Rn) */
	IF(0x0C09293Eu); ;  /* 0C09293E nop */
	UPD(0x0C092940u, 1);
L_0C092940: BLKS(0x0C092940u);
	{ u32 v_ = (u32)(s32)(s16)R16(r13); r13 += 2; r10 = v_; } UPD(0x0C092942u, 1);  /* 0C092940 mov.w @Rm+,Rn */
	r8 = 0xB4u; UPD(0x0C092944u, 1);  /* 0C092942 mov.w @(disp,pc),Rn */
	IF(0x0C092944u); MACL = r10 * r8;  /* 0C092944 mul.l Rm,Rn */
	r9 = 0xC26CD40u; UPD(0x0C092948u, 3);  /* 0C092946 mov.l @(disp,pc),Rn */
	IF(0x0C092948u); r8 = MACL;  /* 0C092948 sts macl,Rn */
	r8 += r9;  /* 0C09294A add Rm,Rn */
	r1 = R32(r14 + 0xCu); UPD(0x0C09294Eu, 3);  /* 0C09294C mov.l @(disp,Rm),Rn */
	r8 += 0x7Cu;  /* 0C09294E add #imm,Rn */
	r9 = 0xC1C7CD8u; UPD(0x0C092952u, 2);  /* 0C092950 mov.l @(disp,pc),Rn */
	r9 += r1;  /* 0C092952 add Rm,Rn */
	r9 += 0x4u;  /* 0C092954 add #imm,Rn */
	r7 = (u32)(s32)(s16)R16(r9); UPD(0x0C092958u, 3);  /* 0C092956 mov.w @Rm,Rn */
	r1 = 0x0u;  /* 0C092958 mov #imm,Rn */
	r0 = 0xC2755BCu; UPD(0x0C09295Cu, 2);  /* 0C09295A mov.l @(disp,pc),Rn */
	r7 += r7;  /* 0C09295C add Rm,Rn */
	IF(0x0C09295Eu); r11 = (u32)(s32)(s16)R16(r0 + r7); UPD(0x0C092960u, 2);  /* 0C09295E mov.w @(r0,Rm),Rn */
	r9 += 0xFFFFFFFCu;  /* 0C092960 add #imm,Rn */
	W16(r8, r11); UPD(0x0C092964u, 2);  /* 0C092962 mov.w Rm,@Rn */
	r0 = 0x2u;  /* 0C092964 mov #imm,Rn */
	IF(0x0C092966u); r5 = (u32)(s32)(s16)R16(r0 + r14); UPD(0x0C092968u, 2);  /* 0C092966 mov.w @(r0,Rm),Rn */
	r8 += 0x2u;  /* 0C092968 add #imm,Rn */
	W16(r8, r5); UPD(0x0C09296Cu, 2);  /* 0C09296A mov.w Rm,@Rn */
	r2 = 0xC22C874u; UPD(0x0C09296Eu, 1);  /* 0C09296C mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFF82u;  /* 0C09296E add #imm,Rn */
	r3 = R32(r9); UPD(0x0C092972u, 2);  /* 0C092970 mov.l @Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r2); UPD(0x0C092974u, 1);  /* 0C092972 mov.w @Rm,Rn */
	r6 = 0xC0000100u; UPD(0x0C092976u, 1);  /* 0C092974 mov.l @(disp,pc),Rn */
	r0 = r4 & 0xFFFF;  /* 0C092976 extu.w Rm,Rn */
	r3 |= r6;  /* 0C092978 or Rm,Rn */
	W32(r8, r3); UPD(0x0C09297Cu, 3);  /* 0C09297A mov.l Rm,@Rn */
	r4 = r10;  /* 0C09297C mov Rm,Rn */
	W32(r8 + 0x4u, r0); UPD(0x0C092980u, 2);  /* 0C09297E mov.l Rm,@(disp,Rn) */
	r11 = 0xC0A02D0u; UPD(0x0C092982u, 1);  /* 0C092980 mov.l @(disp,pc),Rn */
	r7 = R32(r9 + 0x8u); UPD(0x0C092984u, 1);  /* 0C092982 mov.l @(disp,Rm),Rn */
	W32(r8 + 0xCu, r1); UPD(0x0C092986u, 1);  /* 0C092984 mov.l Rm,@(disp,Rn) */
	IF(0x0C092986u); { u32 t_ = r11; PR = 0x0C09298Au; W32(r8 + 0x8u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A02D0, 0x0C0A02D0u, 0x0C09298Au); }  /* 0C092986 jsr @Rn */
L_0C09298A: BLKS(0x0C09298Au);
	r3 = R32(r12 + 0x24u); UPD(0x0C09298Cu, 1);  /* 0C09298A mov.l @(disp,Rm),Rn */
	r2 = R32(r12 + 0x28u); UPD(0x0C09298Eu, 1);  /* 0C09298C mov.l @(disp,Rm),Rn */
	W32(r8 + 0x24u, r3); UPD(0x0C092990u, 1);  /* 0C09298E mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x28u, r2); UPD(0x0C092992u, 1);  /* 0C092990 mov.l Rm,@(disp,Rn) */
	r5 = 0xC28629Eu; UPD(0x0C092994u, 1);  /* 0C092992 mov.l @(disp,pc),Rn */
	r4 = R32(r9 + 0xCu); UPD(0x0C092996u, 1);  /* 0C092994 mov.l @(disp,Rm),Rn */
	r6 = (u32)(s32)(s16)R16(r5); UPD(0x0C092998u, 1);  /* 0C092996 mov.w @Rm,Rn */
	W32(r8 + 0x2Cu, r4); UPD(0x0C09299Au, 1);  /* 0C092998 mov.l Rm,@(disp,Rn) */
	IF(0x0C09299Au); r6 >>= 2;  /* 0C09299A shlr2 Rn */
	r0 = R32(r9 + 0x10u); UPD(0x0C09299Eu, 2);  /* 0C09299C mov.l @(disp,Rm),Rn */
	IF(0x0C09299Eu); r6 >>= 2;  /* 0C09299E shlr2 Rn */
	r7 = 0xC0A1530u; UPD(0x0C0929A2u, 2);  /* 0C0929A0 mov.l @(disp,pc),Rn */
	IF(0x0C0929A2u); r6 >>= 2;  /* 0C0929A2 shlr2 Rn */
	r11 = 0x86u; UPD(0x0C0929A6u, 2);  /* 0C0929A4 mov.w @(disp,pc),Rn */
	r4 = r10;  /* 0C0929A6 mov Rm,Rn */
	r11 += r8;  /* 0C0929A8 add Rm,Rn */
	W32(r8 + 0x30u, r0); UPD(0x0C0929ACu, 3);  /* 0C0929AA mov.l Rm,@(disp,Rn) */
	r9 += 0x14u;  /* 0C0929AC add #imm,Rn */
	IF(0x0C0929AEu); { u32 t_ = r7; PR = 0x0C0929B2u; W16(r11, r6); /* slot mov.w Rm,@Rn */ UPD(t_, 3); CALLP(t_, f_0C0A1530, 0x0C0A1530u, 0x0C0929B2u); }  /* 0C0929AE jsr @Rn */
L_0C0929B2: BLKS(0x0C0929B2u);
	r0 = 0xB0u; UPD(0x0C0929B4u, 1);  /* 0C0929B2 mov.w @(disp,pc),Rn */
	r4 = r8;  /* 0C0929B4 mov Rm,Rn */
	IF(0x0C0929B6u); r5 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C0929B8u, 2);  /* 0C0929B6 mov.b @(r0,Rm),Rn */
	r6 = 0xA8u; UPD(0x0C0929BAu, 1);  /* 0C0929B8 mov.w @(disp,pc),Rn */
	IF(0x0C0929BAu); W8(r0 + r8, r5); UPD(0x0C0929BCu, 1);  /* 0C0929BA mov.b Rm,@(r0,Rn) */
	r4 += r6;  /* 0C0929BC add Rm,Rn */
	r6 += r12;  /* 0C0929BE add Rm,Rn */
	r6 += 0x1u;  /* 0C0929C0 add #imm,Rn */
	r5 = 0xACu; UPD(0x0C0929C4u, 4);  /* 0C0929C2 mov.w @(disp,pc),Rn */
	r4 += 0x1u;  /* 0C0929C4 add #imm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r9); r9 += 1; r3 = v_; } UPD(0x0C0929C8u, 2);  /* 0C0929C6 mov.b @Rm+,Rn */
	r5 += r8;  /* 0C0929C8 add Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r6); UPD(0x0C0929CCu, 2);  /* 0C0929CA mov.b @Rm,Rn */
	r5 += 0x3u;  /* 0C0929CC add #imm,Rn */
	r2 += r3;  /* 0C0929CE add Rm,Rn */
	W8(r5, r3); UPD(0x0C0929D2u, 3);  /* 0C0929D0 mov.b Rm,@Rn */
	W8(r4, r2); UPD(0x0C0929D4u, 1);  /* 0C0929D2 mov.b Rm,@Rn */
	r5 += 0xFFFFFFFEu;  /* 0C0929D4 add #imm,Rn */
	r7 = 0xA0u; UPD(0x0C0929D8u, 2);  /* 0C0929D6 mov.w @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r9); r9 += 1; r0 = v_; } UPD(0x0C0929DAu, 1);  /* 0C0929D8 mov.b @Rm+,Rn */
	r7 += r8;  /* 0C0929DA add Rm,Rn */
	r7 += 0x1u;  /* 0C0929DC add #imm,Rn */
	W8(r7, r0); UPD(0x0C0929E0u, 3);  /* 0C0929DE mov.b Rm,@Rn */
	r10 = (u32)(s32)(s8)R8(r9); UPD(0x0C0929E2u, 1);  /* 0C0929E0 mov.b @Rm,Rn */
	r7 += 0x1u;  /* 0C0929E2 add #imm,Rn */
	W8(r7, r10); UPD(0x0C0929E6u, 2);  /* 0C0929E4 mov.b Rm,@Rn */
	r9 = 0x2Cu;  /* 0C0929E6 mov #imm,Rn */
	r1 = R32(r14 + 0x8u); UPD(0x0C0929EAu, 2);  /* 0C0929E8 mov.l @(disp,Rm),Rn */
	r6 = (u32)(s32)(s8)R8(r1); UPD(0x0C0929ECu, 1);  /* 0C0929EA mov.b @Rm,Rn */
	W8(r5, r6); UPD(0x0C0929EEu, 1);  /* 0C0929EC mov.b Rm,@Rn */
	r0 = R32(r14 + 0x4u); UPD(0x0C0929F0u, 1);  /* 0C0929EE mov.l @(disp,Rm),Rn */
	r0 += 0x1u;  /* 0C0929F0 add #imm,Rn */
	r10 = (u32)(s32)(s16)r0;  /* 0C0929F2 exts.w Rm,Rn */
	r4 = R32(r14 + 0xCu); UPD(0x0C0929F6u, 3);  /* 0C0929F4 mov.l @(disp,Rm),Rn */
	W32(r14 + 0x4u, r10); UPD(0x0C0929F8u, 1);  /* 0C0929F6 mov.l Rm,@(disp,Rn) */
	r4 += 0x18u;  /* 0C0929F8 add #imm,Rn */
	r3 = R32(r12 + 0x38u); UPD(0x0C0929FCu, 2);  /* 0C0929FA mov.l @(disp,Rm),Rn */
	r2 = 0x100u; UPD(0x0C0929FEu, 1);  /* 0C0929FC mov.w @(disp,pc),Rn */
	r7 = R32(r14 + 0x4u); UPD(0x0C092A00u, 1);  /* 0C0929FE mov.l @(disp,Rm),Rn */
	W32(r8 + 0x38u, r3); UPD(0x0C092A02u, 1);  /* 0C092A00 mov.l Rm,@(disp,Rn) */
	T = (s32)r7 > (s32)r9;  /* 0C092A02 cmp/gt Rm,Rn */
	W16(r11, r2); UPD(0x0C092A06u, 2);  /* 0C092A04 mov.w Rm,@Rn */
	{ u32 c_ = !T; W32(r14 + 0xCu, r4); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C092940u, 3); goto L_0C092940; } UPD(0x0C092A0Au, 1); goto L_0C092A0A; }  /* 0C092A06 bf/s */
L_0C092A0A: BLKS(0x0C092A0Au);
	r10 = 0xC392AFDu; UPD(0x0C092A0Cu, 1);  /* 0C092A0A mov.l @(disp,pc),Rn */
	r12 = 0x0u;  /* 0C092A0C mov #imm,Rn */
	r13 = 0xC392AFEu; UPD(0x0C092A10u, 2);  /* 0C092A0E mov.l @(disp,pc),Rn */
	r0 = 0x1u;  /* 0C092A10 mov #imm,Rn */
	W8(r10, r12); UPD(0x0C092A14u, 2);  /* 0C092A12 mov.b Rm,@Rn */
	{ W8(r13, r12); /* slot mov.b Rm,@Rn */ UPD(0x0C0928A6u, 3); goto L_0C0928A6; }  /* 0C092A14 bra */
}

/* FUN_0c092a70 */
void f_0C092A70(sh3_t *c)
{
	LOCALS;
L_0C092A70: BLKS(0x0C092A70u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C092A72u, 1);  /* 0C092A70 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C092A74u, 1);  /* 0C092A72 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C092A76u, 1);  /* 0C092A74 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C092A78u, 1);  /* 0C092A76 mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s16)r4;  /* 0C092A78 exts.w Rm,Rn */
	r3 = 0xB4u; UPD(0x0C092A7Cu, 2);  /* 0C092A7A mov.w @(disp,pc),Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C092A7Eu, 1);  /* 0C092A7C mov.l Rm,@-Rn */
	IF(0x0C092A7Eu); MACL = r10 * r3;  /* 0C092A7E mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C092A82u, 3);  /* 0C092A80 mov.l Rm,@-Rn */
	r0 = 0xC26CD40u; UPD(0x0C092A84u, 1);  /* 0C092A82 mov.l @(disp,pc),Rn */
	IF(0x0C092A84u); r2 = MACL;  /* 0C092A84 sts macl,Rn */
	IF(0x0C092A86u); r15 -= 4; W32(r15, PR); UPD(0x0C092A88u, 2);  /* 0C092A86 sts.l pr,@-Rn */
	r0 += r2;  /* 0C092A88 add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C092A8Cu, 2);  /* 0C092A8A mov.l @(disp,Rm),Rn */
	r0 = 0x25u;  /* 0C092A8C mov #imm,Rn */
	T = r2 > r0;  /* 0C092A8E cmp/hi Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C092A98u, 5); goto L_0C092A98; } goto L_0C092A94; }  /* 0C092A90 bf/s */
L_0C092A94: BLKS(0x0C092A94u);
	{ IF(0x0C092A96u); ; /* slot nop */ UPD(0x0C092FB0u, 4); goto L_0C092FB0; }  /* 0C092A94 bra */
L_0C092A98: BLKS(0x0C092A98u);
	r0 = 0xC092AA8u;  /* 0C092A98 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C092A9A add Rm,Rn */
	IF(0x0C092A9Cu); r4 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C092A9Eu, 3);  /* 0C092A9C mov.w @(r0,Rm),Rn */
	IF(0x0C092A9Eu); { u32 tv_ = (r4 + 0x0C092AA2u); u32 t_ = PHYS(tv_); IF(0x0C092AA0u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C092A9E braf Rn */
L_0C092B20: BLKS(0x0C092B20u);
	r3 = 0xB4u; UPD(0x0C092B22u, 1);  /* 0C092B20 mov.w @(disp,pc),Rn */
	r11 = 0x0u;  /* 0C092B22 mov #imm,Rn */
	IF(0x0C092B24u); MACL = r10 * r3;  /* 0C092B24 mul.l Rm,Rn */
	r10 = 0xC26CD40u; UPD(0x0C092B28u, 4);  /* 0C092B26 mov.l @(disp,pc),Rn */
	IF(0x0C092B28u); r0 = MACL;  /* 0C092B28 sts macl,Rn */
	IF(0x0C092B2Au); W32(r0 + r10, r11); UPD(0x0C092B2Cu, 2);  /* 0C092B2A mov.l Rm,@(r0,Rn) */
	r15 = r14;  /* 0C092B2C mov Rm,Rn */
	IF(0x0C092B2Eu); PR = R32(r15); r15 += 4; UPD(0x0C092B30u, 2);  /* 0C092B2E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C092B32u, 1);  /* 0C092B30 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C092B34u, 1);  /* 0C092B32 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C092B36u, 1);  /* 0C092B34 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C092B38u, 1);  /* 0C092B36 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C092B3Au, 1);  /* 0C092B38 mov.l @Rm+,Rn */
	IF(0x0C092B3Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C092B3A rts */
L_0C092F76: BLKS(0x0C092F76u);
	{ IF(0x0C092F78u); ; /* slot nop */ UPD(0x0C092B20u, 3); goto L_0C092B20; }  /* 0C092F76 bra */
L_0C092FB0: BLKS(0x0C092FB0u);
	r9 = 0xC0A0540u; UPD(0x0C092FB2u, 1);  /* 0C092FB0 mov.l @(disp,pc),Rn */
	IF(0x0C092FB2u); { u32 t_ = r9; PR = 0x0C092FB6u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0540, 0x0C0A0540u, 0x0C092FB6u); }  /* 0C092FB2 jsr @Rn */
L_0C092FB6: BLKS(0x0C092FB6u);
	IF(0x0C092FB6u); T = (s32)r0 >= 0;  /* 0C092FB6 cmp/pz Rn */
	if (!T) { UPD(0x0C092F76u, 4); goto L_0C092F76; }  /* 0C092FB8 bf */
L_0C092FBA: BLKS(0x0C092FBAu);
	r15 += 0xFFFFFFF8u;  /* 0C092FBA add #imm,Rn */
	r7 = 0xB4u; UPD(0x0C092FBEu, 2);  /* 0C092FBC mov.w @(disp,pc),Rn */
	IF(0x0C092FBEu); MACL = r0 * r7;  /* 0C092FBE mul.l Rm,Rn */
	r12 = 0xC26CD40u; UPD(0x0C092FC2u, 3);  /* 0C092FC0 mov.l @(disp,pc),Rn */
	IF(0x0C092FC2u); r6 = MACL;  /* 0C092FC2 sts macl,Rn */
	IF(0x0C092FC4u); MACL = r10 * r7;  /* 0C092FC4 mul.l Rm,Rn */
	r9 = 0xA5u; UPD(0x0C092FC8u, 4);  /* 0C092FC6 mov.w @(disp,pc),Rn */
	r6 += r12;  /* 0C092FC8 add Rm,Rn */
	r6 += r9;  /* 0C092FCA add Rm,Rn */
	r8 = (u32)(s32)(s8)R8(r6); UPD(0x0C092FCEu, 3);  /* 0C092FCC mov.b @Rm,Rn */
	IF(0x0C092FCEu); r3 = MACL;  /* 0C092FCE sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C092FD2u, 2);  /* 0C092FD0 mov.w @(disp,pc),Rn */
	r3 += r12;  /* 0C092FD2 add Rm,Rn */
	IF(0x0C092FD4u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C092FD6u, 2);  /* 0C092FD4 mov.b @(r0,Rm),Rn */
	r8 += 0x1u;  /* 0C092FD6 add #imm,Rn */
	W8(r6, r8); UPD(0x0C092FDAu, 2);  /* 0C092FD8 mov.b Rm,@Rn */
	r5 = r2 & 0xFF;  /* 0C092FDA extu.b Rm,Rn */
	W32(r15, r5); UPD(0x0C092FDEu, 2);  /* 0C092FDC mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C092FDE add #imm,Rn */
	IF(0x0C092FE0u); r4 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C092FE2u, 2);  /* 0C092FE0 mov.b @(r0,Rm),Rn */
	r5 = 0x5u;  /* 0C092FE2 mov #imm,Rn */
	r0 = r4 & 0xFF;  /* 0C092FE4 extu.b Rm,Rn */
	r11 = 0xC0AD970u; UPD(0x0C092FE8u, 3);  /* 0C092FE6 mov.l @(disp,pc),Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C092FEAu, 1);  /* 0C092FE8 mov.l Rm,@(disp,Rn) */
	r4 = R32(r3); UPD(0x0C092FECu, 1);  /* 0C092FEA mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C092FEEu, 1);  /* 0C092FEC mov.l @(disp,Rm),Rn */
	IF(0x0C092FEEu); { u32 t_ = r11; PR = 0x0C092FF2u; r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0AD970, 0x0C0AD970u, 0x0C092FF2u); }  /* 0C092FEE jsr @Rn */
L_0C092FF2: BLKS(0x0C092FF2u);
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C092B20u, 3); goto L_0C092B20; }  /* 0C092FF2 bra */
}

void f_0C092B00(sh3_t *c)
{
	LOCALS;
L_0C092B00: BLKS(0x0C092B00u);
	r5 = 0xC1C8110u; UPD(0x0C092B02u, 1);  /* 0C092B00 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C092B02 mov Rm,Rn */
	r6 = 0xC0A17E0u; UPD(0x0C092B06u, 2);  /* 0C092B04 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C092B06 mov Rm,Rn */
	IF(0x0C092B08u); PR = R32(r15); r15 += 4; UPD(0x0C092B0Au, 2);  /* 0C092B08 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C092B0Cu, 1);  /* 0C092B0A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C092B0Eu, 1);  /* 0C092B0C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C092B10u, 1);  /* 0C092B0E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C092B12u, 1);  /* 0C092B10 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C092B14u, 1);  /* 0C092B12 mov.l @Rm+,Rn */
	IF(0x0C092B14u); { u32 tv_ = r6; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A17E0u: TAIL(f_0C0A17E0); default: JUMPD(tv_); } }  /* 0C092B14 jmp @Rn */
}

void f_0C092B20(sh3_t *c)
{
	LOCALS;
L_0C092B20: BLKS(0x0C092B20u);
	r3 = 0xB4u; UPD(0x0C092B22u, 1);  /* 0C092B20 mov.w @(disp,pc),Rn */
	r11 = 0x0u;  /* 0C092B22 mov #imm,Rn */
	IF(0x0C092B24u); MACL = r10 * r3;  /* 0C092B24 mul.l Rm,Rn */
	r10 = 0xC26CD40u; UPD(0x0C092B28u, 4);  /* 0C092B26 mov.l @(disp,pc),Rn */
	IF(0x0C092B28u); r0 = MACL;  /* 0C092B28 sts macl,Rn */
	IF(0x0C092B2Au); W32(r0 + r10, r11); UPD(0x0C092B2Cu, 2);  /* 0C092B2A mov.l Rm,@(r0,Rn) */
	r15 = r14;  /* 0C092B2C mov Rm,Rn */
	IF(0x0C092B2Eu); PR = R32(r15); r15 += 4; UPD(0x0C092B30u, 2);  /* 0C092B2E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C092B32u, 1);  /* 0C092B30 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C092B34u, 1);  /* 0C092B32 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C092B36u, 1);  /* 0C092B34 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C092B38u, 1);  /* 0C092B36 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C092B3Au, 1);  /* 0C092B38 mov.l @Rm+,Rn */
	IF(0x0C092B3Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C092B3A rts */
}


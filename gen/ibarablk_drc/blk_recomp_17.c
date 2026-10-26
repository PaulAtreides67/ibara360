#include "recomp.h"
#include "blk_recomp_funcs.h"

void blk_f_0C09B250(sh3_t *c)
{
	LOCALS;
	goto L_0C09B250;
L_0C09B062: BLKS(0x0C09B062u);
	W8(r9, r1); UPD(0x0C09B064u, 1);  /* 0C09B062 mov.b Rm,@Rn */
	r13 = 0xFFFFE6AAu; UPD(0x0C09B066u, 1);  /* 0C09B064 mov.w @(disp,pc),Rn */
	IF(0x0C09B066u); { u32 tv_ = (r13 + 0x0C09B06Au); u32 t_ = PHYS(tv_); r14 += 0x8u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09B066 braf Rn */
L_0C09B250: BLKS(0x0C09B250u);
	r8 = 0xC0A8BF0u; UPD(0x0C09B252u, 1);  /* 0C09B250 mov.l @(disp,pc),Rn */
	IF(0x0C09B252u); { u32 t_ = r8; PR = 0x0C09B256u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8BF0, 0x0C0A8BF0u, 0x0C09B256u); }  /* 0C09B252 jsr @Rn */
L_0C09B256: BLKS(0x0C09B256u);
	IF(0x0C09B256u); T = (s32)r0 >= 0;  /* 0C09B256 cmp/pz Rn */
	if (T) { UPD(0x0C09B262u, 4); goto L_0C09B262; }  /* 0C09B258 bt */
L_0C09B25A: BLKS(0x0C09B25Au);
	r1 = 0xFFFFE880u; UPD(0x0C09B25Cu, 1);  /* 0C09B25A mov.w @(disp,pc),Rn */
	IF(0x0C09B25Cu); { u32 tv_ = (r1 + 0x0C09B260u); u32 t_ = PHYS(tv_); IF(0x0C09B25Eu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09B25C braf Rn */
L_0C09B262: BLKS(0x0C09B262u);
	r1 = 0xB4u; UPD(0x0C09B264u, 1);  /* 0C09B262 mov.w @(disp,pc),Rn */
	IF(0x0C09B264u); MACL = r0 * r1;  /* 0C09B264 mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C09B268u, 3);  /* 0C09B266 mov.l @(disp,pc),Rn */
	IF(0x0C09B268u); r7 = MACL;  /* 0C09B268 sts macl,Rn */
	r7 += r2;  /* 0C09B26A add Rm,Rn */
	r0 = R32(r7 + 0xCu); UPD(0x0C09B26Eu, 3);  /* 0C09B26C mov.l @(disp,Rm),Rn */
	T = r0 == 0x10u;  /* 0C09B26E cmp/eq #imm,r0 */
	{ u32 c_ = T; IF(0x0C09B272u); MACL = r12 * r1; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C09B290u, 5); goto L_0C09B290; } goto L_0C09B274; }  /* 0C09B270 bt/s */
L_0C09B274: BLKS(0x0C09B274u);
	r9 = 0x2000000u; UPD(0x0C09B276u, 3);  /* 0C09B274 mov.l @(disp,pc),Rn */
	IF(0x0C09B276u); r0 = MACL;  /* 0C09B276 sts macl,Rn */
	r4 = 0x9Bu; UPD(0x0C09B27Au, 2);  /* 0C09B278 mov.w @(disp,pc),Rn */
	r0 += r2;  /* 0C09B27A add Rm,Rn */
	W32(r0 + 0x24u, r9); UPD(0x0C09B27Eu, 2);  /* 0C09B27C mov.l Rm,@(disp,Rn) */
	IF(0x0C09B27Eu); W8(r0 + r4, r9); UPD(0x0C09B280u, 1);  /* 0C09B27E mov.b Rm,@(r0,Rn) */
L_0C09B280: BLKS(0x0C09B280u);
	r13 = 0xFFFFE48Eu; UPD(0x0C09B282u, 1);  /* 0C09B280 mov.w @(disp,pc),Rn */
	IF(0x0C09B282u); { u32 tv_ = (r13 + 0x0C09B286u); u32 t_ = PHYS(tv_); r14 += 0x8u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09B282 braf Rn */
L_0C09B290: BLKS(0x0C09B290u);
	IF(0x0C09B290u); MACL = r12 * r1;  /* 0C09B290 mul.l Rm,Rn */
	r0 = 0xA8u; UPD(0x0C09B294u, 3);  /* 0C09B292 mov.w @(disp,pc),Rn */
	IF(0x0C09B294u); r8 = MACL;  /* 0C09B294 sts macl,Rn */
	r8 += r2;  /* 0C09B296 add Rm,Rn */
	r9 = R32(r7 + 0x28u); UPD(0x0C09B29Au, 3);  /* 0C09B298 mov.l @(disp,Rm),Rn */
	r13 = r8;  /* 0C09B29A mov Rm,Rn */
	r1 = R32(r8 + 0x30u); UPD(0x0C09B29Eu, 2);  /* 0C09B29C mov.l @(disp,Rm),Rn */
	r13 += r0;  /* 0C09B29E add Rm,Rn */
	r9 += r1;  /* 0C09B2A0 add Rm,Rn */
	r0 += r7;  /* 0C09B2A2 add Rm,Rn */
	r11 = R32(r7 + 0x24u); UPD(0x0C09B2A6u, 4);  /* 0C09B2A4 mov.l @(disp,Rm),Rn */
	r0 += 0x1u;  /* 0C09B2A6 add #imm,Rn */
	r5 = R32(r8 + 0x2Cu); UPD(0x0C09B2AAu, 2);  /* 0C09B2A8 mov.l @(disp,Rm),Rn */
	r13 += 0x1u;  /* 0C09B2AA add #imm,Rn */
	W32(r8 + 0x28u, r9); UPD(0x0C09B2AEu, 2);  /* 0C09B2AC mov.l Rm,@(disp,Rn) */
	r11 += r5;  /* 0C09B2AE add Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r0); UPD(0x0C09B2B2u, 2);  /* 0C09B2B0 mov.b @Rm,Rn */
	r10 = R32(r7); UPD(0x0C09B2B4u, 1);  /* 0C09B2B2 mov.l @Rm,Rn */
	r0 = r8;  /* 0C09B2B4 mov Rm,Rn */
	r4 = 0xAFu; UPD(0x0C09B2B8u, 2);  /* 0C09B2B6 mov.w @(disp,pc),Rn */
	r9 = 0x9Fu; UPD(0x0C09B2BAu, 1);  /* 0C09B2B8 mov.w @(disp,pc),Rn */
	r5 = R32(r8); UPD(0x0C09B2BCu, 1);  /* 0C09B2BA mov.l @Rm,Rn */
	r9 += r8;  /* 0C09B2BC add Rm,Rn */
	W32(r8 + 0x24u, r11); UPD(0x0C09B2C0u, 2);  /* 0C09B2BE mov.l Rm,@(disp,Rn) */
	r2 = 0xECFFFFFFu; UPD(0x0C09B2C2u, 1);  /* 0C09B2C0 mov.l @(disp,pc),Rn */
	r7 = 0x13000000u; UPD(0x0C09B2C4u, 1);  /* 0C09B2C2 mov.l @(disp,pc),Rn */
	r5 &= r2;  /* 0C09B2C4 and Rm,Rn */
	IF(0x0C09B2C6u); r3 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C09B2C8u, 2);  /* 0C09B2C6 mov.b @(r0,Rm),Rn */
	r10 &= r7;  /* 0C09B2C8 and Rm,Rn */
	r11 = (u32)(s32)(s8)R8(r9); UPD(0x0C09B2CCu, 2);  /* 0C09B2CA mov.b @Rm,Rn */
	r6 += r3;  /* 0C09B2CC add Rm,Rn */
	r5 |= r10;  /* 0C09B2CE or Rm,Rn */
	r0 = r11 & 0xFF;  /* 0C09B2D0 extu.b Rm,Rn */
	W8(r13, r6); UPD(0x0C09B2D4u, 4);  /* 0C09B2D2 mov.b Rm,@Rn */
	T = r0 == 0x1u;  /* 0C09B2D4 cmp/eq #imm,r0 */
	{ u32 c_ = T; W32(r8, r5); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C09B390u, 4); goto L_0C09B390; } UPD(0x0C09B2DAu, 1); goto L_0C09B2DA; }  /* 0C09B2D6 bt/s */
L_0C09B2DA: BLKS(0x0C09B2DAu);
	T = r0 == 0x2u;  /* 0C09B2DA cmp/eq #imm,r0 */
	if (T) { UPD(0x0C09B350u, 4); goto L_0C09B350; }  /* 0C09B2DC bt */
L_0C09B2DE: BLKS(0x0C09B2DEu);
	r4 = r12;  /* 0C09B2DE mov Rm,Rn */
	r5 = 0x5Au;  /* 0C09B2E0 mov #imm,Rn */
	r6 = 0x0u;  /* 0C09B2E2 mov #imm,Rn */
	UPD(0x0C09B2E4u, 3);
L_0C09B2E4: BLKS(0x0C09B2E4u);
	r12 = 0xC0BC1B0u; UPD(0x0C09B2E6u, 1);  /* 0C09B2E4 mov.l @(disp,pc),Rn */
	IF(0x0C09B2E6u); { u32 t_ = r12; PR = 0x0C09B2EAu; IF(0x0C09B2E8u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C09B2EAu); }  /* 0C09B2E6 jsr @Rn */
L_0C09B2EA: BLKS(0x0C09B2EAu);
	T = (r0 & r0) == 0;  /* 0C09B2EA tst Rm,Rn */
	if (T) { UPD(0x0C09B280u, 4); goto L_0C09B280; }  /* 0C09B2EC bt */
L_0C09B2EE: BLKS(0x0C09B2EEu);
	r1 = (u32)(s32)(s8)R8(r9); UPD(0x0C09B2F0u, 1);  /* 0C09B2EE mov.b @Rm,Rn */
	{ r1 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C09B062u, 3); goto L_0C09B062; }  /* 0C09B2F0 bra */
L_0C09B350: BLKS(0x0C09B350u);
	r5 = R32(r8 + 0x8u); UPD(0x0C09B352u, 1);  /* 0C09B350 mov.l @(disp,Rm),Rn */
	r0 = 0xC1C7158u; UPD(0x0C09B354u, 1);  /* 0C09B352 mov.l @(disp,pc),Rn */
	IF(0x0C09B354u); r5 <<= 2;  /* 0C09B354 shll2 Rn */
	r5 += r0;  /* 0C09B356 add Rm,Rn */
	r0 = 0xFFFFFE88u; UPD(0x0C09B35Au, 3);  /* 0C09B358 mov.w @(disp,pc),Rn */
	IF(0x0C09B35Au); r4 = R32(r0 + r5); UPD(0x0C09B35Cu, 1);  /* 0C09B35A mov.l @(r0,Rm),Rn */
	r3 = 0xC0A8B10u; UPD(0x0C09B35Eu, 1);  /* 0C09B35C mov.l @(disp,pc),Rn */
	W32(r8 + 0x8u, r4); UPD(0x0C09B360u, 1);  /* 0C09B35E mov.l Rm,@(disp,Rn) */
	IF(0x0C09B360u); { u32 t_ = r3; PR = 0x0C09B364u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B10, 0x0C0A8B10u, 0x0C09B364u); }  /* 0C09B360 jsr @Rn */
L_0C09B364: BLKS(0x0C09B364u);
	r2 = 0x99u; UPD(0x0C09B366u, 1);  /* 0C09B364 mov.w @(disp,pc),Rn */
	r2 += r8;  /* 0C09B366 add Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r2); UPD(0x0C09B36Au, 2);  /* 0C09B368 mov.b @Rm,Rn */
	r6 += 0x1u;  /* 0C09B36A add #imm,Rn */
	r0 = r6 & 0xFF;  /* 0C09B36C extu.b Rm,Rn */
	T = r0 == 0x5Au;  /* 0C09B36E cmp/eq #imm,r0 */
	{ u32 c_ = T; W8(r2, r6); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C09B37Cu, 6); goto L_0C09B37C; } UPD(0x0C09B374u, 1); goto L_0C09B374; }  /* 0C09B370 bt/s */
L_0C09B374: BLKS(0x0C09B374u);
	r13 = 0xFFFFE39Au; UPD(0x0C09B376u, 1);  /* 0C09B374 mov.w @(disp,pc),Rn */
	IF(0x0C09B376u); { u32 tv_ = (r13 + 0x0C09B37Au); u32 t_ = PHYS(tv_); r14 += 0x8u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09B376 braf Rn */
L_0C09B37C: BLKS(0x0C09B37Cu);
	r8 = 0xC069B90u; UPD(0x0C09B37Eu, 1);  /* 0C09B37C mov.l @(disp,pc),Rn */
	r10 = 0x0u;  /* 0C09B37E mov #imm,Rn */
	W8(r2, r10); UPD(0x0C09B382u, 2);  /* 0C09B380 mov.b Rm,@Rn */
	IF(0x0C09B382u); { u32 t_ = r8; PR = 0x0C09B386u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B90, 0x0C069B90u, 0x0C09B386u); }  /* 0C09B382 jsr @Rn */
L_0C09B386: BLKS(0x0C09B386u);
	r1 = (u32)(s32)(s8)R8(r9); UPD(0x0C09B388u, 1);  /* 0C09B386 mov.b @Rm,Rn */
	{ r1 += 0xFFFFFFFFu; /* slot add #imm,Rn */ UPD(0x0C09B062u, 3); goto L_0C09B062; }  /* 0C09B388 bra */
L_0C09B390: BLKS(0x0C09B390u);
	r11 = 0xC069BF0u; UPD(0x0C09B392u, 1);  /* 0C09B390 mov.l @(disp,pc),Rn */
	r13 = 0xC068F00u; UPD(0x0C09B394u, 1);  /* 0C09B392 mov.l @(disp,pc),Rn */
	IF(0x0C09B394u); { u32 t_ = r11; PR = 0x0C09B398u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069BF0, 0x0C069BF0u, 0x0C09B398u); }  /* 0C09B394 jsr @Rn */
L_0C09B398: BLKS(0x0C09B398u);
	r5 = 0x1u;  /* 0C09B398 mov #imm,Rn */
	IF(0x0C09B39Au); { u32 t_ = r13; PR = 0x0C09B39Eu; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 3); CALLD(t_, 0x0C09B39Eu); }  /* 0C09B39A jsr @Rn */
L_0C09B39E: BLKS(0x0C09B39Eu);
	r2 = 0x86u; UPD(0x0C09B3A0u, 1);  /* 0C09B39E mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C09B3A0 mov Rm,Rn */
	IF(0x0C09B3A2u); r10 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C09B3A4u, 2);  /* 0C09B3A2 mov.w @(r0,Rm),Rn */
	r7 = 0x1Fu;  /* 0C09B3A4 mov #imm,Rn */
	r10 += 0x8u;  /* 0C09B3A6 add #imm,Rn */
	IF(0x0C09B3A8u); r10 >>= 2;  /* 0C09B3A8 shlr2 Rn */
	IF(0x0C09B3AAu); r10 >>= 2;  /* 0C09B3AA shlr2 Rn */
	r10 &= r7;  /* 0C09B3AC and Rm,Rn */
	W32(r8 + 0xCu, r10); UPD(0x0C09B3B0u, 6);  /* 0C09B3AE mov.l Rm,@(disp,Rn) */
	r8 = 0xC0A8AE0u; UPD(0x0C09B3B2u, 1);  /* 0C09B3B0 mov.l @(disp,pc),Rn */
	IF(0x0C09B3B2u); { u32 t_ = r8; PR = 0x0C09B3B6u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C09B3B6u); }  /* 0C09B3B2 jsr @Rn */
L_0C09B3B6: BLKS(0x0C09B3B6u);
	r4 = r12;  /* 0C09B3B6 mov Rm,Rn */
	r5 = 0x5Au;  /* 0C09B3B8 mov #imm,Rn */
	{ r6 = 0xAu; /* slot mov #imm,Rn */ UPD(0x0C09B2E4u, 5); goto L_0C09B2E4; }  /* 0C09B3BA bra */
}

void blk_f_0C09B3C0(sh3_t *c)
{
	LOCALS;
	goto L_0C09B3C0;
L_0C099AE4: BLKS(0x0C099AE4u);
	r14 += 0x8u;  /* 0C099AE4 add #imm,Rn */
	r15 = r14;  /* 0C099AE6 mov Rm,Rn */
	IF(0x0C099AE8u); PR = R32(r15); r15 += 4; UPD(0x0C099AEAu, 3);  /* 0C099AE8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C099AECu, 1);  /* 0C099AEA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C099AEEu, 1);  /* 0C099AEC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C099AF0u, 1);  /* 0C099AEE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C099AF2u, 1);  /* 0C099AF0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C099AF4u, 1);  /* 0C099AF2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C099AF6u, 1);  /* 0C099AF4 mov.l @Rm+,Rn */
	IF(0x0C099AF6u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C099AF6 jmp @Rn */
L_0C099BF2: BLKS(0x0C099BF2u);
	r1 = 0xC0A8AE0u; UPD(0x0C099BF4u, 1);  /* 0C099BF2 mov.l @(disp,pc),Rn */
	{ r4 = r12; /* slot mov Rm,Rn */ UPD(0x0C099AE4u, 3); goto L_0C099AE4; }  /* 0C099BF4 bra */
L_0C09A598: BLKS(0x0C09A598u);
	{ W32(r9 + 0xCu, r1); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C099BF2u, 3); goto L_0C099BF2; }  /* 0C09A598 bra */
L_0C09B3C0: BLKS(0x0C09B3C0u);
	r9 = 0xC0A8CA0u; UPD(0x0C09B3C2u, 1);  /* 0C09B3C0 mov.l @(disp,pc),Rn */
	IF(0x0C09B3C2u); { u32 t_ = r9; PR = 0x0C09B3C6u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C09B3C6u); }  /* 0C09B3C2 jsr @Rn */
L_0C09B3C6: BLKS(0x0C09B3C6u);
	IF(0x0C09B3C6u); T = (s32)r0 >= 0;  /* 0C09B3C6 cmp/pz Rn */
	if (!T) { UPD(0x0C09B48Au, 4); goto L_0C09B48A; }  /* 0C09B3C8 bf */
L_0C09B3CA: BLKS(0x0C09B3CAu);
	r13 = 0xB4u; UPD(0x0C09B3CCu, 1);  /* 0C09B3CA mov.w @(disp,pc),Rn */
	IF(0x0C09B3CCu); MACL = r12 * r13;  /* 0C09B3CC mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C09B3D0u, 3);  /* 0C09B3CE mov.l @(disp,pc),Rn */
	IF(0x0C09B3D0u); r9 = MACL;  /* 0C09B3D0 sts macl,Rn */
	IF(0x0C09B3D2u); MACL = r0 * r13;  /* 0C09B3D2 mul.l Rm,Rn */
	r9 += r3;  /* 0C09B3D4 add Rm,Rn */
	r11 = 0xA8u; UPD(0x0C09B3D8u, 5);  /* 0C09B3D6 mov.w @(disp,pc),Rn */
	IF(0x0C09B3D8u); r13 = MACL;  /* 0C09B3D8 sts macl,Rn */
	r13 += r3;  /* 0C09B3DA add Rm,Rn */
	r0 = r9;  /* 0C09B3DC mov Rm,Rn */
	r6 = R32(r13); UPD(0x0C09B3E0u, 4);  /* 0C09B3DE mov.l @Rm,Rn */
	r0 += r11;  /* 0C09B3E0 add Rm,Rn */
	r8 = R32(r9); UPD(0x0C09B3E4u, 2);  /* 0C09B3E2 mov.l @Rm,Rn */
	r11 += r13;  /* 0C09B3E4 add Rm,Rn */
	r4 = 0xECFFFFFFu; UPD(0x0C09B3E8u, 2);  /* 0C09B3E6 mov.l @(disp,pc),Rn */
	r13 += 0xBu;  /* 0C09B3E8 add #imm,Rn */
	r5 = (u32)(s32)(s8)R8(r13); UPD(0x0C09B3ECu, 2);  /* 0C09B3EA mov.b @Rm,Rn */
	r8 &= r4;  /* 0C09B3EC and Rm,Rn */
	r11 += 0x1u;  /* 0C09B3EE add #imm,Rn */
	r2 = 0x84u; UPD(0x0C09B3F2u, 3);  /* 0C09B3F0 mov.w @(disp,pc),Rn */
	r4 = r9;  /* 0C09B3F2 mov Rm,Rn */
	r7 = (u32)(s32)(s8)R8(r11); UPD(0x0C09B3F6u, 2);  /* 0C09B3F4 mov.b @Rm,Rn */
	r13 += 0xFFFFFFF5u;  /* 0C09B3F6 add #imm,Rn */
	r0 += 0x1u;  /* 0C09B3F8 add #imm,Rn */
	r4 += r2;  /* 0C09B3FA add Rm,Rn */
	W8(r0, r7); UPD(0x0C09B3FEu, 4);  /* 0C09B3FC mov.b Rm,@Rn */
	r2 += r13;  /* 0C09B3FE add Rm,Rn */
	r1 = 0x13000000u; UPD(0x0C09B402u, 2);  /* 0C09B400 mov.l @(disp,pc),Rn */
	r2 += 0x2u;  /* 0C09B402 add #imm,Rn */
	r3 = (u32)(s32)(s16)R16(r2); UPD(0x0C09B406u, 2);  /* 0C09B404 mov.w @Rm,Rn */
	r6 &= r1;  /* 0C09B406 and Rm,Rn */
	r0 = 0x98u; UPD(0x0C09B40Au, 2);  /* 0C09B408 mov.w @(disp,pc),Rn */
	r8 |= r6;  /* 0C09B40A or Rm,Rn */
	r5 += 0xFFFFFFA2u;  /* 0C09B40C add #imm,Rn */
	r4 += 0x2u;  /* 0C09B40E add #imm,Rn */
	r10 = 0xC069B20u; UPD(0x0C09B412u, 4);  /* 0C09B410 mov.l @(disp,pc),Rn */
	W16(r4, r3); UPD(0x0C09B414u, 1);  /* 0C09B412 mov.w Rm,@Rn */
	W32(r9, r8); UPD(0x0C09B416u, 1);  /* 0C09B414 mov.l Rm,@Rn */
	r4 = r3;  /* 0C09B416 mov Rm,Rn */
	IF(0x0C09B418u); W8(r0 + r9, r5); UPD(0x0C09B41Au, 2);  /* 0C09B418 mov.b Rm,@(r0,Rn) */
	r8 = r3;  /* 0C09B41A mov Rm,Rn */
	IF(0x0C09B41Cu); { u32 t_ = r10; PR = 0x0C09B420u; r5 = R32(r9 + 0x2Cu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C09B420u); }  /* 0C09B41C jsr @Rn */
L_0C09B420: BLKS(0x0C09B420u);
	r6 = R32(r13 + 0x24u); UPD(0x0C09B422u, 1);  /* 0C09B420 mov.l @(disp,Rm),Rn */
	r4 = r8;  /* 0C09B422 mov Rm,Rn */
	r1 = 0xFFFC0000u; UPD(0x0C09B426u, 2);  /* 0C09B424 mov.l @(disp,pc),Rn */
	r6 += r0;  /* 0C09B426 add Rm,Rn */
	r11 = 0xC069AF0u; UPD(0x0C09B42Au, 2);  /* 0C09B428 mov.l @(disp,pc),Rn */
	r6 += r1;  /* 0C09B42A add Rm,Rn */
	W32(r9 + 0x24u, r6); UPD(0x0C09B42Eu, 2);  /* 0C09B42C mov.l Rm,@(disp,Rn) */
	IF(0x0C09B42Eu); { u32 t_ = r11; PR = 0x0C09B432u; r5 = R32(r9 + 0x2Cu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C09B432u); }  /* 0C09B42E jsr @Rn */
L_0C09B432: BLKS(0x0C09B432u);
	r7 = R32(r13 + 0x28u); UPD(0x0C09B434u, 1);  /* 0C09B432 mov.l @(disp,Rm),Rn */
	r1 = R32(r13 + 0xCu); UPD(0x0C09B436u, 1);  /* 0C09B434 mov.l @(disp,Rm),Rn */
	r7 += r0;  /* 0C09B436 add Rm,Rn */
	{ W32(r9 + 0x28u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C09A598u, 4); goto L_0C09A598; }  /* 0C09B438 bra */
L_0C09B48A: BLKS(0x0C09B48Au);
	r1 = 0xFFFFE650u; UPD(0x0C09B48Cu, 1);  /* 0C09B48A mov.w @(disp,pc),Rn */
	IF(0x0C09B48Cu); { u32 tv_ = (r1 + 0x0C09B490u); u32 t_ = PHYS(tv_); IF(0x0C09B48Eu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09B48C braf Rn */
}

void blk_f_0C09B480(sh3_t *c)
{
	LOCALS;
	goto L_0C09B480;
L_0C099714: BLKS(0x0C099714u);
	r15 = r14;  /* 0C099714 mov Rm,Rn */
	IF(0x0C099716u); PR = R32(r15); r15 += 4; UPD(0x0C099718u, 2);  /* 0C099716 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09971Au, 1);  /* 0C099718 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C09971Cu, 1);  /* 0C09971A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09971Eu, 1);  /* 0C09971C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C099720u, 1);  /* 0C09971E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C099722u, 1);  /* 0C099720 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C099724u, 1);  /* 0C099722 mov.l @Rm+,Rn */
	IF(0x0C099724u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C099724 rts */
L_0C09A066: BLKS(0x0C09A066u);
	{ r14 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C099714u, 3); goto L_0C099714; }  /* 0C09A066 bra */
L_0C09A874: BLKS(0x0C09A874u);
	IF(0x0C09A874u); { u32 t_ = r0; PR = 0x0C09A878u; IF(0x0C09A876u); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C09A878u); }  /* 0C09A874 jsr @Rn */
L_0C09A878: BLKS(0x0C09A878u);
	{ r15 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C09A066u, 3); goto L_0C09A066; }  /* 0C09A878 bra */
L_0C09B480: BLKS(0x0C09B480u);
	r9 = 0xC0A8CA0u; UPD(0x0C09B482u, 1);  /* 0C09B480 mov.l @(disp,pc),Rn */
	IF(0x0C09B482u); { u32 t_ = r9; PR = 0x0C09B486u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C09B486u); }  /* 0C09B482 jsr @Rn */
L_0C09B486: BLKS(0x0C09B486u);
	IF(0x0C09B486u); T = (s32)r0 >= 0;  /* 0C09B486 cmp/pz Rn */
	if (T) { UPD(0x0C09B492u, 4); goto L_0C09B492; }  /* 0C09B488 bt */
L_0C09B48A: BLKS(0x0C09B48Au);
	r1 = 0xFFFFE650u; UPD(0x0C09B48Cu, 1);  /* 0C09B48A mov.w @(disp,pc),Rn */
	IF(0x0C09B48Cu); { u32 tv_ = (r1 + 0x0C09B490u); u32 t_ = PHYS(tv_); IF(0x0C09B48Eu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09B48C braf Rn */
L_0C09B492: BLKS(0x0C09B492u);
	r8 = 0xB4u; UPD(0x0C09B494u, 1);  /* 0C09B492 mov.w @(disp,pc),Rn */
	IF(0x0C09B494u); MACL = r12 * r8;  /* 0C09B494 mul.l Rm,Rn */
	r4 = 0xC286578u; UPD(0x0C09B498u, 3);  /* 0C09B496 mov.l @(disp,pc),Rn */
	IF(0x0C09B498u); r11 = MACL;  /* 0C09B498 sts macl,Rn */
	IF(0x0C09B49Au); MACL = r0 * r8;  /* 0C09B49A mul.l Rm,Rn */
	r11 += r4;  /* 0C09B49C add Rm,Rn */
	r9 = r11;  /* 0C09B49E mov Rm,Rn */
	r0 = 0xA8u; UPD(0x0C09B4A2u, 6);  /* 0C09B4A0 mov.w @(disp,pc),Rn */
	IF(0x0C09B4A2u); r8 = MACL;  /* 0C09B4A2 sts macl,Rn */
	r8 += r4;  /* 0C09B4A4 add Rm,Rn */
	r9 += r0;  /* 0C09B4A6 add Rm,Rn */
	r0 += r8;  /* 0C09B4A8 add Rm,Rn */
	r0 += 0x1u;  /* 0C09B4AA add #imm,Rn */
	r5 = (u32)(s32)(s8)R8(r0); UPD(0x0C09B4AEu, 6);  /* 0C09B4AC mov.b @Rm,Rn */
	r9 += 0x1u;  /* 0C09B4AE add #imm,Rn */
	W8(r9, r5); UPD(0x0C09B4B2u, 2);  /* 0C09B4B0 mov.b Rm,@Rn */
	r0 = 0x98u; UPD(0x0C09B4B4u, 1);  /* 0C09B4B2 mov.w @(disp,pc),Rn */
	r9 = r11;  /* 0C09B4B4 mov Rm,Rn */
	IF(0x0C09B4B6u); r13 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C09B4B8u, 2);  /* 0C09B4B6 mov.b @(r0,Rm),Rn */
	r9 += r0;  /* 0C09B4B8 add Rm,Rn */
	W8(r9, r13); UPD(0x0C09B4BCu, 2);  /* 0C09B4BA mov.b Rm,@Rn */
	r10 = 0x84u; UPD(0x0C09B4BEu, 1);  /* 0C09B4BC mov.w @(disp,pc),Rn */
	r13 = r11;  /* 0C09B4BE mov Rm,Rn */
	r2 = 0xECFFFFFFu; UPD(0x0C09B4C2u, 2);  /* 0C09B4C0 mov.l @(disp,pc),Rn */
	r13 += r10;  /* 0C09B4C2 add Rm,Rn */
	r6 = R32(r11); UPD(0x0C09B4C6u, 2);  /* 0C09B4C4 mov.l @Rm,Rn */
	r10 += r8;  /* 0C09B4C6 add Rm,Rn */
	r7 = R32(r8); UPD(0x0C09B4CAu, 2);  /* 0C09B4C8 mov.l @Rm,Rn */
	r6 &= r2;  /* 0C09B4CA and Rm,Rn */
	r3 = 0x13000000u; UPD(0x0C09B4CEu, 2);  /* 0C09B4CC mov.l @(disp,pc),Rn */
	r10 += 0x2u;  /* 0C09B4CE add #imm,Rn */
	r7 &= r3;  /* 0C09B4D0 and Rm,Rn */
	r1 = 0xC069B20u; UPD(0x0C09B4D4u, 3);  /* 0C09B4D2 mov.l @(disp,pc),Rn */
	r6 |= r7;  /* 0C09B4D4 or Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r10); UPD(0x0C09B4D8u, 2);  /* 0C09B4D6 mov.w @Rm,Rn */
	r13 += 0x2u;  /* 0C09B4D8 add #imm,Rn */
	W32(r11, r6); UPD(0x0C09B4DCu, 2);  /* 0C09B4DA mov.l Rm,@Rn */
	r10 = r4;  /* 0C09B4DC mov Rm,Rn */
	W16(r13, r4); UPD(0x0C09B4E0u, 2);  /* 0C09B4DE mov.w Rm,@Rn */
	IF(0x0C09B4E0u); { u32 t_ = r1; PR = 0x0C09B4E4u; r5 = R32(r11 + 0x2Cu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C09B4E4u); }  /* 0C09B4E0 jsr @Rn */
L_0C09B4E4: BLKS(0x0C09B4E4u);
	r3 = R32(r8 + 0x24u); UPD(0x0C09B4E6u, 1);  /* 0C09B4E4 mov.l @(disp,Rm),Rn */
	r4 = r10;  /* 0C09B4E6 mov Rm,Rn */
	r6 = 0xC069AF0u; UPD(0x0C09B4EAu, 2);  /* 0C09B4E8 mov.l @(disp,pc),Rn */
	r3 += r0;  /* 0C09B4EA add Rm,Rn */
	W32(r11 + 0x24u, r3); UPD(0x0C09B4EEu, 2);  /* 0C09B4EC mov.l Rm,@(disp,Rn) */
	IF(0x0C09B4EEu); { u32 t_ = r6; PR = 0x0C09B4F2u; r5 = R32(r11 + 0x2Cu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C09B4F2u); }  /* 0C09B4EE jsr @Rn */
L_0C09B4F2: BLKS(0x0C09B4F2u);
	r2 = R32(r8 + 0x28u); UPD(0x0C09B4F4u, 1);  /* 0C09B4F2 mov.l @(disp,Rm),Rn */
	r4 = r12;  /* 0C09B4F4 mov Rm,Rn */
	r7 = (u32)(s32)(s8)R8(r9); UPD(0x0C09B4F8u, 2);  /* 0C09B4F6 mov.b @Rm,Rn */
	r2 += r0;  /* 0C09B4F8 add Rm,Rn */
	r5 = R32(r11 + 0x30u); UPD(0x0C09B4FCu, 2);  /* 0C09B4FA mov.l @(disp,Rm),Rn */
	r0 = r7 & 0xFF;  /* 0C09B4FC extu.b Rm,Rn */
	r12 = 0xC0A8B10u; UPD(0x0C09B500u, 2);  /* 0C09B4FE mov.l @(disp,pc),Rn */
	r5 += r0;  /* 0C09B500 add Rm,Rn */
	r10 = R32(r8 + 0xCu); UPD(0x0C09B504u, 2);  /* 0C09B502 mov.l @(disp,Rm),Rn */
	W32(r11 + 0x28u, r2); UPD(0x0C09B506u, 1);  /* 0C09B504 mov.l Rm,@(disp,Rn) */
	W32(r11 + 0x8u, r5); UPD(0x0C09B508u, 1);  /* 0C09B506 mov.l Rm,@(disp,Rn) */
	IF(0x0C09B508u); { u32 t_ = r12; PR = 0x0C09B50Cu; W32(r11 + 0xCu, r10); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B10, 0x0C0A8B10u, 0x0C09B50Cu); }  /* 0C09B508 jsr @Rn */
L_0C09B50C: BLKS(0x0C09B50Cu);
	r0 = R32(r11 + 0x8u); UPD(0x0C09B50Eu, 1);  /* 0C09B50C mov.l @(disp,Rm),Rn */
	T = r0 == 0x64u;  /* 0C09B50E cmp/eq #imm,r0 */
	if (T) { UPD(0x0C09B51Cu, 4); goto L_0C09B51C; }  /* 0C09B510 bt */
L_0C09B512: BLKS(0x0C09B512u);
	r14 += 0x8u;  /* 0C09B512 add #imm,Rn */
	r13 = 0xFFFFE1FAu; UPD(0x0C09B516u, 2);  /* 0C09B514 mov.w @(disp,pc),Rn */
	IF(0x0C09B516u); { u32 tv_ = (r13 + 0x0C09B51Au); u32 t_ = PHYS(tv_); IF(0x0C09B518u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09B516 braf Rn */
L_0C09B51C: BLKS(0x0C09B51Cu);
	r6 = 0xC069B20u; UPD(0x0C09B51Eu, 1);  /* 0C09B51C mov.l @(disp,pc),Rn */
	r10 = (u32)(s32)(s16)R16(r13); UPD(0x0C09B520u, 1);  /* 0C09B51E mov.w @Rm,Rn */
	r12 = 0xC0000u; UPD(0x0C09B522u, 1);  /* 0C09B520 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C09B522 mov Rm,Rn */
	IF(0x0C09B524u); { u32 t_ = r6; PR = 0x0C09B528u; r5 = r12; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C09B528u); }  /* 0C09B524 jsr @Rn */
L_0C09B528: BLKS(0x0C09B528u);
	r1 = 0xC069AF0u; UPD(0x0C09B52Au, 1);  /* 0C09B528 mov.l @(disp,pc),Rn */
	r5 = r12;  /* 0C09B52A mov Rm,Rn */
	r9 = R32(r11 + 0x24u); UPD(0x0C09B52Eu, 2);  /* 0C09B52C mov.l @(disp,Rm),Rn */
	r4 = r10;  /* 0C09B52E mov Rm,Rn */
	r13 = 0xC062780u; UPD(0x0C09B532u, 2);  /* 0C09B530 mov.l @(disp,pc),Rn */
	IF(0x0C09B532u); { u32 t_ = r1; PR = 0x0C09B536u; r9 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C09B536u); }  /* 0C09B532 jsr @Rn */
L_0C09B536: BLKS(0x0C09B536u);
	r12 = R32(r11 + 0x28u); UPD(0x0C09B538u, 1);  /* 0C09B536 mov.l @(disp,Rm),Rn */
	r4 = 0xBu;  /* 0C09B538 mov #imm,Rn */
	IF(0x0C09B53Au); { u32 t_ = r13; PR = 0x0C09B53Eu; r12 += r0; /* slot add Rm,Rn */ UPD(t_, 3); CALLD(t_, 0x0C09B53Eu); }  /* 0C09B53A jsr @Rn */
L_0C09B53E: BLKS(0x0C09B53Eu);
	r0 += r10;  /* 0C09B53E add Rm,Rn */
	r0 += 0xFFFFFFFAu;  /* 0C09B540 add #imm,Rn */
	r11 = (u32)(s32)(s16)r0;  /* 0C09B542 exts.w Rm,Rn */
	r10 = 0x40000u; UPD(0x0C09B546u, 4);  /* 0C09B544 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C09B546 add #imm,Rn */
	r0 = 0xC0BAD60u; UPD(0x0C09B54Au, 2);  /* 0C09B548 mov.l @(disp,pc),Rn */
	r4 = 0x6u;  /* 0C09B54A mov #imm,Rn */
	W32(r15, r10); UPD(0x0C09B54Eu, 2);  /* 0C09B54C mov.l Rm,@Rn */
	r5 = r9;  /* 0C09B54E mov Rm,Rn */
	r6 = r12;  /* 0C09B550 mov Rm,Rn */
	{ r7 = r11; /* slot mov Rm,Rn */ UPD(0x0C09A874u, 5); goto L_0C09A874; }  /* 0C09B552 bra */
}

void blk_f_0C09B590(sh3_t *c)
{
	LOCALS;
L_0C09B590: BLKS(0x0C09B590u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C09B592u, 1);  /* 0C09B590 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C09B594u, 1);  /* 0C09B592 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C09B596u, 1);  /* 0C09B594 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C09B598u, 1);  /* 0C09B596 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C09B59Au, 1);  /* 0C09B598 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C09B59Cu, 1);  /* 0C09B59A mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C09B59Eu, 1);  /* 0C09B59C mov.l Rm,@-Rn */
	r9 = 0xC2460ACu; UPD(0x0C09B5A0u, 1);  /* 0C09B59E mov.l @(disp,pc),Rn */
	IF(0x0C09B5A0u); r15 -= 4; W32(r15, PR); UPD(0x0C09B5A2u, 1);  /* 0C09B5A0 sts.l pr,@-Rn */
	r8 = 0xC069510u; UPD(0x0C09B5A4u, 1);  /* 0C09B5A2 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C09B5A4 add #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r9); UPD(0x0C09B5A8u, 2);  /* 0C09B5A6 mov.w @Rm,Rn */
	r14 = r15;  /* 0C09B5A8 mov Rm,Rn */
	r5 = 0x8000u; UPD(0x0C09B5ACu, 2);  /* 0C09B5AA mov.l @(disp,pc),Rn */
	IF(0x0C09B5ACu); { u32 t_ = r8; PR = 0x0C09B5B0u; r4 = r0 & 0xFFFF; /* slot extu.w Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069510, 0x0C069510u, 0x0C09B5B0u); }  /* 0C09B5AC jsr @Rn */
L_0C09B5B0: BLKS(0x0C09B5B0u);
	T = (r0 & r0) == 0;  /* 0C09B5B0 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C09B5D0u, 4); goto L_0C09B5D0; } UPD(0x0C09B5B6u, 1); goto L_0C09B5B6; }  /* 0C09B5B2 bf/s */
L_0C09B5B6: BLKS(0x0C09B5B6u);
	r14 += 0x8u;  /* 0C09B5B6 add #imm,Rn */
	r15 = r14;  /* 0C09B5B8 mov Rm,Rn */
	IF(0x0C09B5BAu); PR = R32(r15); r15 += 4; UPD(0x0C09B5BCu, 3);  /* 0C09B5BA lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09B5BEu, 1);  /* 0C09B5BC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C09B5C0u, 1);  /* 0C09B5BE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09B5C2u, 1);  /* 0C09B5C0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09B5C4u, 1);  /* 0C09B5C2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09B5C6u, 1);  /* 0C09B5C4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09B5C8u, 1);  /* 0C09B5C6 mov.l @Rm+,Rn */
	IF(0x0C09B5C8u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C09B5C8 rts */
L_0C09B5D0: BLKS(0x0C09B5D0u);
	r8 = 0xC071740u; UPD(0x0C09B5D2u, 1);  /* 0C09B5D0 mov.l @(disp,pc),Rn */
	IF(0x0C09B5D2u); { u32 t_ = r8; PR = 0x0C09B5D6u; r4 = 0x46u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C071740, 0x0C071740u, 0x0C09B5D6u); }  /* 0C09B5D2 jsr @Rn */
L_0C09B5D6: BLKS(0x0C09B5D6u);
	T = (r0 & r0) == 0;  /* 0C09B5D6 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C09B5B6u, 4); goto L_0C09B5B6; } goto L_0C09B5DC; }  /* 0C09B5D8 bt/s */
L_0C09B5DC: BLKS(0x0C09B5DCu);
	r13 = 0xC28EDFCu; UPD(0x0C09B5DEu, 2);  /* 0C09B5DC mov.l @(disp,pc),Rn */
	r0 = 0xB4u; UPD(0x0C09B5E0u, 1);  /* 0C09B5DE mov.w @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r13); r13 += 2; r11 = v_; } UPD(0x0C09B5E2u, 1);  /* 0C09B5E0 mov.w @Rm+,Rn */
	IF(0x0C09B5E2u); MACL = r11 * r0;  /* 0C09B5E2 mul.l Rm,Rn */
	r7 = (u32)(s32)(s16)R16(r9); UPD(0x0C09B5E6u, 3);  /* 0C09B5E4 mov.w @Rm,Rn */
	r4 = r11;  /* 0C09B5E6 mov Rm,Rn */
	r1 = 0xC286578u; UPD(0x0C09B5EAu, 2);  /* 0C09B5E8 mov.l @(disp,pc),Rn */
	IF(0x0C09B5EAu); r8 = MACL;  /* 0C09B5EA sts macl,Rn */
	r6 = 0xC2B03A2u; UPD(0x0C09B5EEu, 2);  /* 0C09B5EC mov.l @(disp,pc),Rn */
	r8 += r1;  /* 0C09B5EE add Rm,Rn */
	r9 = 0x86u; UPD(0x0C09B5F2u, 2);  /* 0C09B5F0 mov.w @(disp,pc),Rn */
	r0 += 0xFFFFFFD6u;  /* 0C09B5F2 add #imm,Rn */
	r12 = (u32)(s32)(s16)R16(r6); UPD(0x0C09B5F6u, 2);  /* 0C09B5F4 mov.w @Rm,Rn */
	r9 += r8;  /* 0C09B5F6 add Rm,Rn */
	IF(0x0C09B5F8u); W16(r0 + r8, r12); UPD(0x0C09B5FAu, 2);  /* 0C09B5F8 mov.w Rm,@(r0,Rn) */
	r2 = r7 & 0xFFFF;  /* 0C09B5FA extu.w Rm,Rn */
	r5 = 0xC0A8A30u; UPD(0x0C09B5FEu, 2);  /* 0C09B5FC mov.l @(disp,pc),Rn */
	W16(r9, r12); UPD(0x0C09B600u, 1);  /* 0C09B5FE mov.w Rm,@Rn */
	r3 = 0xD3008104u; UPD(0x0C09B602u, 1);  /* 0C09B600 mov.l @(disp,pc),Rn */
	r12 = 0x0u;  /* 0C09B602 mov #imm,Rn */
	W32(r8 + 0x4u, r2); UPD(0x0C09B606u, 2);  /* 0C09B604 mov.l Rm,@(disp,Rn) */
	W32(r8, r3); UPD(0x0C09B608u, 1);  /* 0C09B606 mov.l Rm,@Rn */
	W32(r8 + 0xCu, r12); UPD(0x0C09B60Au, 1);  /* 0C09B608 mov.l Rm,@(disp,Rn) */
	IF(0x0C09B60Au); { u32 t_ = r5; PR = 0x0C09B60Eu; W32(r8 + 0x8u, r12); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C09B60Eu); }  /* 0C09B60A jsr @Rn */
L_0C09B60E: BLKS(0x0C09B60Eu);
	r4 = 0x1A00000u; UPD(0x0C09B610u, 1);  /* 0C09B60E mov.l @(disp,pc),Rn */
	r10 = 0xC0722E0u; UPD(0x0C09B612u, 1);  /* 0C09B610 mov.l @(disp,pc),Rn */
	W32(r8 + 0x24u, r4); UPD(0x0C09B614u, 1);  /* 0C09B612 mov.l Rm,@(disp,Rn) */
	IF(0x0C09B614u); { u32 t_ = r10; PR = 0x0C09B618u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0722E0, 0x0C0722E0u, 0x0C09B618u); }  /* 0C09B614 jsr @Rn */
L_0C09B618: BLKS(0x0C09B618u);
	r3 = 0xC0A9AE0u; UPD(0x0C09B61Au, 1);  /* 0C09B618 mov.l @(disp,pc),Rn */
	r10 = 0x100u; UPD(0x0C09B61Cu, 1);  /* 0C09B61A mov.w @(disp,pc),Rn */
	IF(0x0C09B61Cu); { u32 t_ = r3; PR = 0x0C09B620u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C09B620u); }  /* 0C09B61C jsr @Rn */
L_0C09B620: BLKS(0x0C09B620u);
	r0 = 0xA8u; UPD(0x0C09B622u, 1);  /* 0C09B620 mov.w @(disp,pc),Rn */
	r4 = r8;  /* 0C09B622 mov Rm,Rn */
	r4 += r0;  /* 0C09B624 add Rm,Rn */
	r7 = 0xA0u; UPD(0x0C09B628u, 3);  /* 0C09B626 mov.w @(disp,pc),Rn */
	r11 = 0x12u;  /* 0C09B628 mov #imm,Rn */
	r0 = 0xADu; UPD(0x0C09B62Cu, 2);  /* 0C09B62A mov.w @(disp,pc),Rn */
	r7 += r8;  /* 0C09B62C add Rm,Rn */
	W16(r9, r10); UPD(0x0C09B630u, 2);  /* 0C09B62E mov.w Rm,@Rn */
	r7 += 0x3u;  /* 0C09B630 add #imm,Rn */
	IF(0x0C09B632u); W8(r0 + r8, r11); UPD(0x0C09B634u, 2);  /* 0C09B632 mov.b Rm,@(r0,Rn) */
	r4 += 0x1u;  /* 0C09B634 add #imm,Rn */
	W8(r7, r12); UPD(0x0C09B638u, 2);  /* 0C09B636 mov.b Rm,@Rn */
	r0 += 0xFFFFFFDFu;  /* 0C09B638 add #imm,Rn */
	r9 = 0x38000u; UPD(0x0C09B63Cu, 2);  /* 0C09B63A mov.l @(disp,pc),Rn */
	r1 = 0x1u;  /* 0C09B63C mov #imm,Rn */
	{ u32 v_ = r12; r7 -= 1; W8(r7, v_); } UPD(0x0C09B640u, 2);  /* 0C09B63E mov.b Rm,@-Rn */
	IF(0x0C09B640u); W32(r0 + r8, r9); UPD(0x0C09B642u, 1);  /* 0C09B640 mov.l Rm,@(r0,Rn) */
	W8(r4, r11); UPD(0x0C09B644u, 1);  /* 0C09B642 mov.b Rm,@Rn */
	r8 += 0x3Cu;  /* 0C09B644 add #imm,Rn */
	{ u32 v_ = r12; r7 -= 1; W8(r7, v_); } UPD(0x0C09B648u, 2);  /* 0C09B646 mov.b Rm,@-Rn */
	r6 = (u32)(s32)(s16)R16(r8); UPD(0x0C09B64Au, 1);  /* 0C09B648 mov.w @Rm,Rn */
	r2 = 0xC3CA700u; UPD(0x0C09B64Cu, 1);  /* 0C09B64A mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFC4u;  /* 0C09B64C add #imm,Rn */
	r5 = 0xC3CC310u; UPD(0x0C09B650u, 2);  /* 0C09B64E mov.l @(disp,pc),Rn */
	r11 = r8;  /* 0C09B650 mov Rm,Rn */
	r3 = 0xC175064u; UPD(0x0C09B654u, 2);  /* 0C09B652 mov.l @(disp,pc),Rn */
	W32(r14, r12); UPD(0x0C09B656u, 1);  /* 0C09B654 mov.l Rm,@Rn */
	W32(r2, r6); UPD(0x0C09B658u, 1);  /* 0C09B656 mov.l Rm,@Rn */
	r12 = 0x0u;  /* 0C09B658 mov #imm,Rn */
	W32(r5, r6); UPD(0x0C09B65Cu, 2);  /* 0C09B65A mov.l Rm,@Rn */
	W32(r3, r1); UPD(0x0C09B65Eu, 1);  /* 0C09B65C mov.l Rm,@Rn */
	W32(r14 + 0x4u, r4); UPD(0x0C09B660u, 1);  /* 0C09B65E mov.l Rm,@(disp,Rn) */
L_0C09B660: BLKS(0x0C09B660u);
	{ u32 v_ = (u32)(s32)(s16)R16(r13); r13 += 2; r10 = v_; } UPD(0x0C09B662u, 1);  /* 0C09B660 mov.w @Rm+,Rn */
	r8 = 0xB4u; UPD(0x0C09B664u, 1);  /* 0C09B662 mov.w @(disp,pc),Rn */
	IF(0x0C09B664u); MACL = r10 * r8;  /* 0C09B664 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C09B668u, 3);  /* 0C09B666 mov.l @(disp,pc),Rn */
	IF(0x0C09B668u); r8 = MACL;  /* 0C09B668 sts macl,Rn */
	r8 += r9;  /* 0C09B66A add Rm,Rn */
	r9 = 0xC1CAF7Cu; UPD(0x0C09B66Eu, 3);  /* 0C09B66C mov.l @(disp,pc),Rn */
	r8 += 0x7Cu;  /* 0C09B66E add #imm,Rn */
	r9 += r12;  /* 0C09B670 add Rm,Rn */
	r9 += 0x4u;  /* 0C09B672 add #imm,Rn */
	r6 = (u32)(s32)(s16)R16(r9); UPD(0x0C09B676u, 4);  /* 0C09B674 mov.w @Rm,Rn */
	r12 += 0x1Cu;  /* 0C09B676 add #imm,Rn */
	r0 = 0xC28EDFCu; UPD(0x0C09B67Au, 2);  /* 0C09B678 mov.l @(disp,pc),Rn */
	r6 += r6;  /* 0C09B67A add Rm,Rn */
	IF(0x0C09B67Cu); r4 = (u32)(s32)(s16)R16(r0 + r6); UPD(0x0C09B67Eu, 2);  /* 0C09B67C mov.w @(r0,Rm),Rn */
	r9 += 0xFFFFFFFCu;  /* 0C09B67E add #imm,Rn */
	W16(r8, r4); UPD(0x0C09B682u, 2);  /* 0C09B680 mov.w Rm,@Rn */
	r5 = (u32)(s32)(s16)R16(r0); UPD(0x0C09B684u, 1);  /* 0C09B682 mov.w @Rm,Rn */
	r8 += 0x2u;  /* 0C09B684 add #imm,Rn */
	W16(r8, r5); UPD(0x0C09B688u, 2);  /* 0C09B686 mov.w Rm,@Rn */
	r4 = 0x0u;  /* 0C09B688 mov #imm,Rn */
	r2 = 0xC2460ACu; UPD(0x0C09B68Cu, 2);  /* 0C09B68A mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFF82u;  /* 0C09B68C add #imm,Rn */
	r0 = R32(r9); UPD(0x0C09B690u, 2);  /* 0C09B68E mov.l @Rm,Rn */
	r3 = (u32)(s32)(s16)R16(r2); UPD(0x0C09B692u, 1);  /* 0C09B690 mov.w @Rm,Rn */
	r5 = 0xC0A8A30u; UPD(0x0C09B694u, 1);  /* 0C09B692 mov.l @(disp,pc),Rn */
	r7 = r3 & 0xFFFF;  /* 0C09B694 extu.w Rm,Rn */
	r6 = R32(r9 + 0x8u); UPD(0x0C09B698u, 2);  /* 0C09B696 mov.l @(disp,Rm),Rn */
	W32(r8 + 0xCu, r4); UPD(0x0C09B69Au, 1);  /* 0C09B698 mov.l Rm,@(disp,Rn) */
	W32(r8, r0); UPD(0x0C09B69Cu, 1);  /* 0C09B69A mov.l Rm,@Rn */
	r4 = r10;  /* 0C09B69C mov Rm,Rn */
	W32(r8 + 0x4u, r7); UPD(0x0C09B6A0u, 2);  /* 0C09B69E mov.l Rm,@(disp,Rn) */
	IF(0x0C09B6A0u); { u32 t_ = r5; PR = 0x0C09B6A4u; W32(r8 + 0x8u, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C09B6A4u); }  /* 0C09B6A0 jsr @Rn */
L_0C09B6A4: BLKS(0x0C09B6A4u);
	r0 = 0xC2B03A2u; UPD(0x0C09B6A6u, 1);  /* 0C09B6A4 mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s16)R16(r0); UPD(0x0C09B6A8u, 1);  /* 0C09B6A6 mov.w @Rm,Rn */
	IF(0x0C09B6A8u); r2 >>= 2;  /* 0C09B6A8 shlr2 Rn */
	r3 = 0x86u; UPD(0x0C09B6ACu, 2);  /* 0C09B6AA mov.w @(disp,pc),Rn */
	IF(0x0C09B6ACu); r2 >>= 2;  /* 0C09B6AC shlr2 Rn */
	r5 = R32(r9 + 0xCu); UPD(0x0C09B6B0u, 2);  /* 0C09B6AE mov.l @(disp,Rm),Rn */
	r0 = r8;  /* 0C09B6B0 mov Rm,Rn */
	r4 = R32(r9 + 0x10u); UPD(0x0C09B6B4u, 2);  /* 0C09B6B2 mov.l @(disp,Rm),Rn */
	IF(0x0C09B6B4u); r2 >>= 2;  /* 0C09B6B4 shlr2 Rn */
	IF(0x0C09B6B6u); W16(r0 + r3, r2); UPD(0x0C09B6B8u, 2);  /* 0C09B6B6 mov.w Rm,@(r0,Rn) */
	r9 += 0x14u;  /* 0C09B6B8 add #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r9); r9 += 2; r2 = v_; } UPD(0x0C09B6BCu, 2);  /* 0C09B6BA mov.w @Rm+,Rn */
	r7 = R32(r11 + 0x24u); UPD(0x0C09B6BEu, 1);  /* 0C09B6BC mov.l @(disp,Rm),Rn */
	r6 = R32(r11 + 0x28u); UPD(0x0C09B6C0u, 1);  /* 0C09B6BE mov.l @(disp,Rm),Rn */
	r0 = 0x88u; UPD(0x0C09B6C2u, 1);  /* 0C09B6C0 mov.w @(disp,pc),Rn */
	W32(r8 + 0x24u, r7); UPD(0x0C09B6C4u, 1);  /* 0C09B6C2 mov.l Rm,@(disp,Rn) */
	IF(0x0C09B6C4u); W16(r0 + r8, r2); UPD(0x0C09B6C6u, 1);  /* 0C09B6C4 mov.w Rm,@(r0,Rn) */
	W32(r8 + 0x28u, r6); UPD(0x0C09B6C8u, 1);  /* 0C09B6C6 mov.l Rm,@(disp,Rn) */
	r0 = 0x0u;  /* 0C09B6C8 mov #imm,Rn */
	W32(r8 + 0x2Cu, r5); UPD(0x0C09B6CCu, 2);  /* 0C09B6CA mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x30u, r4); UPD(0x0C09B6CEu, 1);  /* 0C09B6CC mov.l Rm,@(disp,Rn) */
	r3 = 0xC0A9AE0u; UPD(0x0C09B6D0u, 1);  /* 0C09B6CE mov.l @(disp,pc),Rn */
	r8 += 0x50u;  /* 0C09B6D0 add #imm,Rn */
	W32(r8, r0); UPD(0x0C09B6D4u, 2);  /* 0C09B6D2 mov.l Rm,@Rn */
	IF(0x0C09B6D4u); { u32 t_ = r3; PR = 0x0C09B6D8u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C09B6D8u); }  /* 0C09B6D4 jsr @Rn */
L_0C09B6D8: BLKS(0x0C09B6D8u);
	r0 = 0xB0u; UPD(0x0C09B6DAu, 1);  /* 0C09B6D8 mov.w @(disp,pc),Rn */
	r8 += 0xFFFFFFB0u;  /* 0C09B6DA add #imm,Rn */
	IF(0x0C09B6DCu); r7 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C09B6DEu, 2);  /* 0C09B6DC mov.b @(r0,Rm),Rn */
	IF(0x0C09B6DEu); W8(r0 + r8, r7); UPD(0x0C09B6E0u, 1);  /* 0C09B6DE mov.b Rm,@(r0,Rn) */
	r10 = 0xACu; UPD(0x0C09B6E2u, 1);  /* 0C09B6E0 mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C09B6E2 mov Rm,Rn */
	r6 = R32(r14 + 0x4u); UPD(0x0C09B6E6u, 2);  /* 0C09B6E4 mov.l @(disp,Rm),Rn */
	r0 += r10;  /* 0C09B6E6 add Rm,Rn */
	r4 = 0xA8u; UPD(0x0C09B6EAu, 2);  /* 0C09B6E8 mov.w @(disp,pc),Rn */
	r10 += r11;  /* 0C09B6EA add Rm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r9); r9 += 1; r1 = v_; } UPD(0x0C09B6EEu, 2);  /* 0C09B6EC mov.b @Rm+,Rn */
	r10 += 0x1u;  /* 0C09B6EE add #imm,Rn */
	r5 = (u32)(s32)(s8)R8(r6); UPD(0x0C09B6F2u, 2);  /* 0C09B6F0 mov.b @Rm,Rn */
	r4 += r8;  /* 0C09B6F2 add Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r10); UPD(0x0C09B6F6u, 2);  /* 0C09B6F4 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C09B6F6 add #imm,Rn */
	r5 += r1;  /* 0C09B6F8 add Rm,Rn */
	r0 += 0x1u;  /* 0C09B6FA add #imm,Rn */
	W8(r4, r5); UPD(0x0C09B6FEu, 4);  /* 0C09B6FC mov.b Rm,@Rn */
	W8(r0, r2); UPD(0x0C09B700u, 1);  /* 0C09B6FE mov.b Rm,@Rn */
	r4 = 0x0u;  /* 0C09B700 mov #imm,Rn */
	r6 = 0xA0u; UPD(0x0C09B704u, 2);  /* 0C09B702 mov.w @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r9); r9 += 1; r3 = v_; } UPD(0x0C09B706u, 1);  /* 0C09B704 mov.b @Rm+,Rn */
	r6 += r8;  /* 0C09B706 add Rm,Rn */
	r6 += 0x1u;  /* 0C09B708 add #imm,Rn */
	W8(r6, r3); UPD(0x0C09B70Cu, 3);  /* 0C09B70A mov.b Rm,@Rn */
	r5 = 0x9Au; UPD(0x0C09B70Eu, 1);  /* 0C09B70C mov.w @(disp,pc),Rn */
	r6 += 0x1u;  /* 0C09B70E add #imm,Rn */
	r7 = (u32)(s32)(s8)R8(r9); UPD(0x0C09B712u, 2);  /* 0C09B710 mov.b @Rm,Rn */
	r8 += r5;  /* 0C09B712 add Rm,Rn */
	W8(r8, r4); UPD(0x0C09B716u, 2);  /* 0C09B714 mov.b Rm,@Rn */
	W8(r6, r7); UPD(0x0C09B718u, 1);  /* 0C09B716 mov.b Rm,@Rn */
	r8 = 0x44u;  /* 0C09B718 mov #imm,Rn */
	r10 = R32(r14); UPD(0x0C09B71Cu, 2);  /* 0C09B71A mov.l @Rm,Rn */
	r10 += 0x1u;  /* 0C09B71C add #imm,Rn */
	r0 = (u32)(s32)(s16)r10;  /* 0C09B71E exts.w Rm,Rn */
	W32(r14, r0); UPD(0x0C09B722u, 3);  /* 0C09B720 mov.l Rm,@Rn */
	r9 = R32(r14); UPD(0x0C09B724u, 1);  /* 0C09B722 mov.l @Rm,Rn */
	T = (s32)r9 > (s32)r8;  /* 0C09B724 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C09B660u, 4); goto L_0C09B660; }  /* 0C09B726 bf */
L_0C09B728: BLKS(0x0C09B728u);
	r11 = 0x0u;  /* 0C09B728 mov #imm,Rn */
	r12 = 0xC3C4164u; UPD(0x0C09B72Cu, 2);  /* 0C09B72A mov.l @(disp,pc),Rn */
	r13 = 0xC3C4165u; UPD(0x0C09B72Eu, 1);  /* 0C09B72C mov.l @(disp,pc),Rn */
	r0 = 0x1u;  /* 0C09B72E mov #imm,Rn */
	W8(r12, r11); UPD(0x0C09B732u, 2);  /* 0C09B730 mov.b Rm,@Rn */
	{ W8(r13, r11); /* slot mov.b Rm,@Rn */ UPD(0x0C09B5B6u, 3); goto L_0C09B5B6; }  /* 0C09B732 bra */
}

void blk_f_0C09B7A0(sh3_t *c)
{
	LOCALS;
L_0C09B7A0: BLKS(0x0C09B7A0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C09B7A2u, 1);  /* 0C09B7A0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C09B7A4u, 1);  /* 0C09B7A2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C09B7A6u, 1);  /* 0C09B7A4 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C09B7A6 exts.w Rm,Rn */
	r3 = 0xB4u; UPD(0x0C09B7AAu, 2);  /* 0C09B7A8 mov.w @(disp,pc),Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C09B7ACu, 1);  /* 0C09B7AA mov.l Rm,@-Rn */
	IF(0x0C09B7ACu); MACL = r9 * r3;  /* 0C09B7AC mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C09B7B0u, 3);  /* 0C09B7AE mov.l Rm,@-Rn */
	r0 = 0xC286578u; UPD(0x0C09B7B2u, 1);  /* 0C09B7B0 mov.l @(disp,pc),Rn */
	IF(0x0C09B7B2u); r2 = MACL;  /* 0C09B7B2 sts macl,Rn */
	IF(0x0C09B7B4u); r15 -= 4; W32(r15, PR); UPD(0x0C09B7B6u, 2);  /* 0C09B7B4 sts.l pr,@-Rn */
	r0 += r2;  /* 0C09B7B6 add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C09B7BAu, 2);  /* 0C09B7B8 mov.l @(disp,Rm),Rn */
	r0 = 0x27u;  /* 0C09B7BA mov #imm,Rn */
	T = r2 > r0;  /* 0C09B7BC cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C09B838u, 5); goto L_0C09B838; } goto L_0C09B7C2; }  /* 0C09B7BE bt/s */
L_0C09B7C2: BLKS(0x0C09B7C2u);
	r0 = 0xC09B7D4u;  /* 0C09B7C2 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C09B7C4 add Rm,Rn */
	IF(0x0C09B7C6u); r4 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C09B7C8u, 4);  /* 0C09B7C6 mov.w @(r0,Rm),Rn */
	IF(0x0C09B7C8u); { u32 tv_ = (r4 + 0x0C09B7CCu); u32 t_ = PHYS(tv_); IF(0x0C09B7CAu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09B7C8 braf Rn */
L_0C09B838: BLKS(0x0C09B838u);
	r4 = 0xB4u; UPD(0x0C09B83Au, 1);  /* 0C09B838 mov.w @(disp,pc),Rn */
	IF(0x0C09B83Au); MACL = r9 * r4;  /* 0C09B83A mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C09B83Eu, 3);  /* 0C09B83C mov.l @(disp,pc),Rn */
	IF(0x0C09B83Eu); r4 = MACL;  /* 0C09B83E sts macl,Rn */
	r4 += r2;  /* 0C09B840 add Rm,Rn */
	r9 = R32(r4); UPD(0x0C09B844u, 3);  /* 0C09B842 mov.l @Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C09B844 tst Rm,Rn */
	if (!T) { UPD(0x0C09B85Au, 4); goto L_0C09B85A; }  /* 0C09B846 bf */
L_0C09B848: BLKS(0x0C09B848u);
	r4 += 0x40u;  /* 0C09B848 add #imm,Rn */
	r4 = R32(r4); UPD(0x0C09B84Cu, 2);  /* 0C09B84A mov.l @Rm,Rn */
	r8 = 0x1869Fu; UPD(0x0C09B84Eu, 1);  /* 0C09B84C mov.l @(disp,pc),Rn */
	T = r4 > r8;  /* 0C09B84E cmp/hi Rm,Rn */
	if (T) { UPD(0x0C09B85Au, 4); goto L_0C09B85A; }  /* 0C09B850 bt */
L_0C09B852: BLKS(0x0C09B852u);
	r10 = 0xC175064u; UPD(0x0C09B854u, 1);  /* 0C09B852 mov.l @(disp,pc),Rn */
	r0 = R32(r10); UPD(0x0C09B856u, 1);  /* 0C09B854 mov.l @Rm,Rn */
	T = r0 == 0x3u;  /* 0C09B856 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C09B870u, 4); goto L_0C09B870; }  /* 0C09B858 bt */
L_0C09B85A: BLKS(0x0C09B85Au);
	r15 = r14;  /* 0C09B85A mov Rm,Rn */
	IF(0x0C09B85Cu); PR = R32(r15); r15 += 4; UPD(0x0C09B85Eu, 2);  /* 0C09B85C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09B860u, 1);  /* 0C09B85E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09B862u, 1);  /* 0C09B860 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09B864u, 1);  /* 0C09B862 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09B866u, 1);  /* 0C09B864 mov.l @Rm+,Rn */
	IF(0x0C09B866u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C09B866 rts */
L_0C09B870: BLKS(0x0C09B870u);
	r7 = 0x4u;  /* 0C09B870 mov #imm,Rn */
	IF(0x0C09B872u); ARG0(0x447Du); { s32 s_ = (s32)r7; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = 0; else r4 >>= ((~s_ & 31) + 1); }  /* 0C09B872 shld Rm,Rn */
	r5 = 0x40000u; UPD(0x0C09B876u, 3);  /* 0C09B874 mov.l @(disp,pc),Rn */
	r6 = 0xC071C90u; UPD(0x0C09B878u, 1);  /* 0C09B876 mov.l @(disp,pc),Rn */
	r4 += r5;  /* 0C09B878 add Rm,Rn */
	r15 = r14;  /* 0C09B87A mov Rm,Rn */
	IF(0x0C09B87Cu); PR = R32(r15); r15 += 4; UPD(0x0C09B87Eu, 3);  /* 0C09B87C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09B880u, 1);  /* 0C09B87E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09B882u, 1);  /* 0C09B880 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09B884u, 1);  /* 0C09B882 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09B886u, 1);  /* 0C09B884 mov.l @Rm+,Rn */
	IF(0x0C09B886u); { u32 tv_ = r6; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C071C90u: TAIL(blk_f_0C071C90); default: JUMPD(tv_); } }  /* 0C09B886 jmp @Rn */
}

void blk_f_0C09B830(sh3_t *c)
{
	LOCALS;
L_0C09B830: BLKS(0x0C09B830u);
	r6 = 0xC0A9D90u; UPD(0x0C09B832u, 1);  /* 0C09B830 mov.l @(disp,pc),Rn */
	r5 = 0xC1CB708u; UPD(0x0C09B834u, 1);  /* 0C09B832 mov.l @(disp,pc),Rn */
	IF(0x0C09B834u); { u32 t_ = r6; PR = 0x0C09B838u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9D90, 0x0C0A9D90u, 0x0C09B838u); }  /* 0C09B834 jsr @Rn */
L_0C09B838: BLKS(0x0C09B838u);
	r4 = 0xB4u; UPD(0x0C09B83Au, 1);  /* 0C09B838 mov.w @(disp,pc),Rn */
	IF(0x0C09B83Au); MACL = r9 * r4;  /* 0C09B83A mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C09B83Eu, 3);  /* 0C09B83C mov.l @(disp,pc),Rn */
	IF(0x0C09B83Eu); r4 = MACL;  /* 0C09B83E sts macl,Rn */
	r4 += r2;  /* 0C09B840 add Rm,Rn */
	r9 = R32(r4); UPD(0x0C09B844u, 3);  /* 0C09B842 mov.l @Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C09B844 tst Rm,Rn */
	if (!T) { UPD(0x0C09B85Au, 4); goto L_0C09B85A; }  /* 0C09B846 bf */
L_0C09B848: BLKS(0x0C09B848u);
	r4 += 0x40u;  /* 0C09B848 add #imm,Rn */
	r4 = R32(r4); UPD(0x0C09B84Cu, 2);  /* 0C09B84A mov.l @Rm,Rn */
	r8 = 0x1869Fu; UPD(0x0C09B84Eu, 1);  /* 0C09B84C mov.l @(disp,pc),Rn */
	T = r4 > r8;  /* 0C09B84E cmp/hi Rm,Rn */
	if (T) { UPD(0x0C09B85Au, 4); goto L_0C09B85A; }  /* 0C09B850 bt */
L_0C09B852: BLKS(0x0C09B852u);
	r10 = 0xC175064u; UPD(0x0C09B854u, 1);  /* 0C09B852 mov.l @(disp,pc),Rn */
	r0 = R32(r10); UPD(0x0C09B856u, 1);  /* 0C09B854 mov.l @Rm,Rn */
	T = r0 == 0x3u;  /* 0C09B856 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C09B870u, 4); goto L_0C09B870; }  /* 0C09B858 bt */
L_0C09B85A: BLKS(0x0C09B85Au);
	r15 = r14;  /* 0C09B85A mov Rm,Rn */
	IF(0x0C09B85Cu); PR = R32(r15); r15 += 4; UPD(0x0C09B85Eu, 2);  /* 0C09B85C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09B860u, 1);  /* 0C09B85E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09B862u, 1);  /* 0C09B860 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09B864u, 1);  /* 0C09B862 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09B866u, 1);  /* 0C09B864 mov.l @Rm+,Rn */
	IF(0x0C09B866u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C09B866 rts */
L_0C09B870: BLKS(0x0C09B870u);
	r7 = 0x4u;  /* 0C09B870 mov #imm,Rn */
	IF(0x0C09B872u); ARG0(0x447Du); { s32 s_ = (s32)r7; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = 0; else r4 >>= ((~s_ & 31) + 1); }  /* 0C09B872 shld Rm,Rn */
	r5 = 0x40000u; UPD(0x0C09B876u, 3);  /* 0C09B874 mov.l @(disp,pc),Rn */
	r6 = 0xC071C90u; UPD(0x0C09B878u, 1);  /* 0C09B876 mov.l @(disp,pc),Rn */
	r4 += r5;  /* 0C09B878 add Rm,Rn */
	r15 = r14;  /* 0C09B87A mov Rm,Rn */
	IF(0x0C09B87Cu); PR = R32(r15); r15 += 4; UPD(0x0C09B87Eu, 3);  /* 0C09B87C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09B880u, 1);  /* 0C09B87E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09B882u, 1);  /* 0C09B880 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09B884u, 1);  /* 0C09B882 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09B886u, 1);  /* 0C09B884 mov.l @Rm+,Rn */
	IF(0x0C09B886u); { u32 tv_ = r6; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C071C90u: TAIL(blk_f_0C071C90); default: JUMPD(tv_); } }  /* 0C09B886 jmp @Rn */
}

void blk_f_0C09B890(sh3_t *c)
{
	LOCALS;
	goto L_0C09B890;
L_0C09B838: BLKS(0x0C09B838u);
	r4 = 0xB4u; UPD(0x0C09B83Au, 1);  /* 0C09B838 mov.w @(disp,pc),Rn */
	IF(0x0C09B83Au); MACL = r9 * r4;  /* 0C09B83A mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C09B83Eu, 3);  /* 0C09B83C mov.l @(disp,pc),Rn */
	IF(0x0C09B83Eu); r4 = MACL;  /* 0C09B83E sts macl,Rn */
	r4 += r2;  /* 0C09B840 add Rm,Rn */
	r9 = R32(r4); UPD(0x0C09B844u, 3);  /* 0C09B842 mov.l @Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C09B844 tst Rm,Rn */
	if (!T) { UPD(0x0C09B85Au, 4); goto L_0C09B85A; }  /* 0C09B846 bf */
L_0C09B848: BLKS(0x0C09B848u);
	r4 += 0x40u;  /* 0C09B848 add #imm,Rn */
	r4 = R32(r4); UPD(0x0C09B84Cu, 2);  /* 0C09B84A mov.l @Rm,Rn */
	r8 = 0x1869Fu; UPD(0x0C09B84Eu, 1);  /* 0C09B84C mov.l @(disp,pc),Rn */
	T = r4 > r8;  /* 0C09B84E cmp/hi Rm,Rn */
	if (T) { UPD(0x0C09B85Au, 4); goto L_0C09B85A; }  /* 0C09B850 bt */
L_0C09B852: BLKS(0x0C09B852u);
	r10 = 0xC175064u; UPD(0x0C09B854u, 1);  /* 0C09B852 mov.l @(disp,pc),Rn */
	r0 = R32(r10); UPD(0x0C09B856u, 1);  /* 0C09B854 mov.l @Rm,Rn */
	T = r0 == 0x3u;  /* 0C09B856 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C09B870u, 4); goto L_0C09B870; }  /* 0C09B858 bt */
L_0C09B85A: BLKS(0x0C09B85Au);
	r15 = r14;  /* 0C09B85A mov Rm,Rn */
	IF(0x0C09B85Cu); PR = R32(r15); r15 += 4; UPD(0x0C09B85Eu, 2);  /* 0C09B85C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09B860u, 1);  /* 0C09B85E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09B862u, 1);  /* 0C09B860 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09B864u, 1);  /* 0C09B862 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09B866u, 1);  /* 0C09B864 mov.l @Rm+,Rn */
	IF(0x0C09B866u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C09B866 rts */
L_0C09B870: BLKS(0x0C09B870u);
	r7 = 0x4u;  /* 0C09B870 mov #imm,Rn */
	IF(0x0C09B872u); ARG0(0x447Du); { s32 s_ = (s32)r7; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = 0; else r4 >>= ((~s_ & 31) + 1); }  /* 0C09B872 shld Rm,Rn */
	r5 = 0x40000u; UPD(0x0C09B876u, 3);  /* 0C09B874 mov.l @(disp,pc),Rn */
	r6 = 0xC071C90u; UPD(0x0C09B878u, 1);  /* 0C09B876 mov.l @(disp,pc),Rn */
	r4 += r5;  /* 0C09B878 add Rm,Rn */
	r15 = r14;  /* 0C09B87A mov Rm,Rn */
	IF(0x0C09B87Cu); PR = R32(r15); r15 += 4; UPD(0x0C09B87Eu, 3);  /* 0C09B87C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09B880u, 1);  /* 0C09B87E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09B882u, 1);  /* 0C09B880 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09B884u, 1);  /* 0C09B882 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09B886u, 1);  /* 0C09B884 mov.l @Rm+,Rn */
	IF(0x0C09B886u); { u32 tv_ = r6; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C071C90u: TAIL(blk_f_0C071C90); default: JUMPD(tv_); } }  /* 0C09B886 jmp @Rn */
L_0C09B890: BLKS(0x0C09B890u);
	r8 = 0xC0A8CA0u; UPD(0x0C09B892u, 1);  /* 0C09B890 mov.l @(disp,pc),Rn */
	IF(0x0C09B892u); { u32 t_ = r8; PR = 0x0C09B896u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C09B896u); }  /* 0C09B892 jsr @Rn */
L_0C09B896: BLKS(0x0C09B896u);
	IF(0x0C09B896u); T = (s32)r0 >= 0;  /* 0C09B896 cmp/pz Rn */
	if (!T) { UPD(0x0C09B920u, 4); goto L_0C09B920; }  /* 0C09B898 bf */
L_0C09B89A: BLKS(0x0C09B89Au);
	r7 = 0xB4u; UPD(0x0C09B89Cu, 1);  /* 0C09B89A mov.w @(disp,pc),Rn */
	IF(0x0C09B89Cu); MACL = r9 * r7;  /* 0C09B89C mul.l Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C09B8A0u, 3);  /* 0C09B89E mov.l @(disp,pc),Rn */
	IF(0x0C09B8A0u); r2 = MACL;  /* 0C09B8A0 sts macl,Rn */
	r2 += r5;  /* 0C09B8A2 add Rm,Rn */
	r3 = R32(r2); UPD(0x0C09B8A6u, 3);  /* 0C09B8A4 mov.l @Rm,Rn */
	r1 = 0x40000000u; UPD(0x0C09B8A8u, 1);  /* 0C09B8A6 mov.l @(disp,pc),Rn */
	T = (r3 & r1) == 0;  /* 0C09B8A8 tst Rm,Rn */
	if (T) { UPD(0x0C09B910u, 4); goto L_0C09B910; }  /* 0C09B8AA bt */
L_0C09B8AC: BLKS(0x0C09B8ACu);
	r0 = R32(r2 + 0xCu); UPD(0x0C09B8AEu, 1);  /* 0C09B8AC mov.l @(disp,Rm),Rn */
	r0 += 0x1u;  /* 0C09B8AE add #imm,Rn */
	T = r0 == 0x6u;  /* 0C09B8B0 cmp/eq #imm,r0 */
	{ u32 c_ = T; W32(r2 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C09B900u, 5); goto L_0C09B900; } UPD(0x0C09B8B6u, 1); goto L_0C09B8B6; }  /* 0C09B8B2 bt/s */
L_0C09B8B6: BLKS(0x0C09B8B6u);
	r11 = 0xC0A8AE0u; UPD(0x0C09B8B8u, 1);  /* 0C09B8B6 mov.l @(disp,pc),Rn */
	IF(0x0C09B8B8u); { u32 t_ = r11; PR = 0x0C09B8BCu; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C09B8BCu); }  /* 0C09B8B8 jsr @Rn */
L_0C09B8BC: BLKS(0x0C09B8BCu);
	r10 = 0xC0A9AE0u; UPD(0x0C09B8BEu, 1);  /* 0C09B8BC mov.l @(disp,pc),Rn */
	IF(0x0C09B8BEu); { u32 t_ = r10; PR = 0x0C09B8C2u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C09B8C2u); }  /* 0C09B8BE jsr @Rn */
L_0C09B8C2: BLKS(0x0C09B8C2u);
	r7 = 0xB4u; UPD(0x0C09B8C4u, 1);  /* 0C09B8C2 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF4u;  /* 0C09B8C4 add #imm,Rn */
	IF(0x0C09B8C6u); MACL = r9 * r7;  /* 0C09B8C6 mul.l Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C09B8CAu, 4);  /* 0C09B8C8 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C09B8CCu, 1);  /* 0C09B8CA mov.w @(disp,pc),Rn */
	IF(0x0C09B8CCu); r3 = MACL;  /* 0C09B8CC sts macl,Rn */
	r3 += r5;  /* 0C09B8CE add Rm,Rn */
	IF(0x0C09B8D0u); r8 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C09B8D2u, 3);  /* 0C09B8D0 mov.b @(r0,Rm),Rn */
	r5 = 0x1Cu;  /* 0C09B8D2 mov #imm,Rn */
	r6 = r8 & 0xFF;  /* 0C09B8D4 extu.b Rm,Rn */
	W32(r15, r6); UPD(0x0C09B8D8u, 3);  /* 0C09B8D6 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C09B8D8 add #imm,Rn */
	IF(0x0C09B8DAu); r4 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C09B8DCu, 2);  /* 0C09B8DA mov.b @(r0,Rm),Rn */
	r0 = 0x18u;  /* 0C09B8DC mov #imm,Rn */
	r2 = r4 & 0xFF;  /* 0C09B8DE extu.b Rm,Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C09B8E2u, 3);  /* 0C09B8E0 mov.l Rm,@(disp,Rn) */
	W32(r15 + 0x8u, r0); UPD(0x0C09B8E4u, 1);  /* 0C09B8E2 mov.l Rm,@(disp,Rn) */
	r4 = R32(r3); UPD(0x0C09B8E6u, 1);  /* 0C09B8E4 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C09B8E8u, 1);  /* 0C09B8E6 mov.l @(disp,Rm),Rn */
	r7 = R32(r3 + 0x28u); UPD(0x0C09B8EAu, 1);  /* 0C09B8E8 mov.l @(disp,Rm),Rn */
	r8 = 0xC0BD1C0u; UPD(0x0C09B8ECu, 1);  /* 0C09B8EA mov.l @(disp,pc),Rn */
	IF(0x0C09B8ECu); { u32 t_ = r8; PR = 0x0C09B8F0u; IF(0x0C09B8EEu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD1C0, 0x0C0BD1C0u, 0x0C09B8F0u); }  /* 0C09B8EC jsr @Rn */
L_0C09B8F0: BLKS(0x0C09B8F0u);
	{ r15 += 0xCu; /* slot add #imm,Rn */ UPD(0x0C09B838u, 3); goto L_0C09B838; }  /* 0C09B8F0 bra */
L_0C09B900: BLKS(0x0C09B900u);
	r10 = 0x20004000u; UPD(0x0C09B902u, 1);  /* 0C09B900 mov.l @(disp,pc),Rn */
	r3 |= r10;  /* 0C09B902 or Rm,Rn */
	{ W32(r2, r3); /* slot mov.l Rm,@Rn */ UPD(0x0C09B8B6u, 4); goto L_0C09B8B6; }  /* 0C09B904 bra */
L_0C09B910: BLKS(0x0C09B910u);
	r3 |= r1;  /* 0C09B910 or Rm,Rn */
	{ W32(r2, r3); /* slot mov.l Rm,@Rn */ UPD(0x0C09B8BCu, 4); goto L_0C09B8BC; }  /* 0C09B912 bra */
L_0C09B920: BLKS(0x0C09B920u);
	r5 = 0xB4u; UPD(0x0C09B922u, 1);  /* 0C09B920 mov.w @(disp,pc),Rn */
	r6 = 0x0u;  /* 0C09B922 mov #imm,Rn */
	IF(0x0C09B924u); MACL = r9 * r5;  /* 0C09B924 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C09B928u, 4);  /* 0C09B926 mov.l @(disp,pc),Rn */
	IF(0x0C09B928u); r0 = MACL;  /* 0C09B928 sts macl,Rn */
	IF(0x0C09B92Au); W32(r0 + r9, r6); UPD(0x0C09B92Cu, 2);  /* 0C09B92A mov.l Rm,@(r0,Rn) */
	{ IF(0x0C09B92Eu); ; /* slot nop */ UPD(0x0C09B85Au, 3); goto L_0C09B85A; }  /* 0C09B92C bra */
}

void blk_f_0C09B930(sh3_t *c)
{
	LOCALS;
	goto L_0C09B930;
L_0C09B838: BLKS(0x0C09B838u);
	r4 = 0xB4u; UPD(0x0C09B83Au, 1);  /* 0C09B838 mov.w @(disp,pc),Rn */
	IF(0x0C09B83Au); MACL = r9 * r4;  /* 0C09B83A mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C09B83Eu, 3);  /* 0C09B83C mov.l @(disp,pc),Rn */
	IF(0x0C09B83Eu); r4 = MACL;  /* 0C09B83E sts macl,Rn */
	r4 += r2;  /* 0C09B840 add Rm,Rn */
	r9 = R32(r4); UPD(0x0C09B844u, 3);  /* 0C09B842 mov.l @Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C09B844 tst Rm,Rn */
	if (!T) { UPD(0x0C09B85Au, 4); goto L_0C09B85A; }  /* 0C09B846 bf */
L_0C09B848: BLKS(0x0C09B848u);
	r4 += 0x40u;  /* 0C09B848 add #imm,Rn */
	r4 = R32(r4); UPD(0x0C09B84Cu, 2);  /* 0C09B84A mov.l @Rm,Rn */
	r8 = 0x1869Fu; UPD(0x0C09B84Eu, 1);  /* 0C09B84C mov.l @(disp,pc),Rn */
	T = r4 > r8;  /* 0C09B84E cmp/hi Rm,Rn */
	if (T) { UPD(0x0C09B85Au, 4); goto L_0C09B85A; }  /* 0C09B850 bt */
L_0C09B852: BLKS(0x0C09B852u);
	r10 = 0xC175064u; UPD(0x0C09B854u, 1);  /* 0C09B852 mov.l @(disp,pc),Rn */
	r0 = R32(r10); UPD(0x0C09B856u, 1);  /* 0C09B854 mov.l @Rm,Rn */
	T = r0 == 0x3u;  /* 0C09B856 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C09B870u, 4); goto L_0C09B870; }  /* 0C09B858 bt */
L_0C09B85A: BLKS(0x0C09B85Au);
	r15 = r14;  /* 0C09B85A mov Rm,Rn */
	IF(0x0C09B85Cu); PR = R32(r15); r15 += 4; UPD(0x0C09B85Eu, 2);  /* 0C09B85C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09B860u, 1);  /* 0C09B85E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09B862u, 1);  /* 0C09B860 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09B864u, 1);  /* 0C09B862 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09B866u, 1);  /* 0C09B864 mov.l @Rm+,Rn */
	IF(0x0C09B866u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C09B866 rts */
L_0C09B870: BLKS(0x0C09B870u);
	r7 = 0x4u;  /* 0C09B870 mov #imm,Rn */
	IF(0x0C09B872u); ARG0(0x447Du); { s32 s_ = (s32)r7; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = 0; else r4 >>= ((~s_ & 31) + 1); }  /* 0C09B872 shld Rm,Rn */
	r5 = 0x40000u; UPD(0x0C09B876u, 3);  /* 0C09B874 mov.l @(disp,pc),Rn */
	r6 = 0xC071C90u; UPD(0x0C09B878u, 1);  /* 0C09B876 mov.l @(disp,pc),Rn */
	r4 += r5;  /* 0C09B878 add Rm,Rn */
	r15 = r14;  /* 0C09B87A mov Rm,Rn */
	IF(0x0C09B87Cu); PR = R32(r15); r15 += 4; UPD(0x0C09B87Eu, 3);  /* 0C09B87C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09B880u, 1);  /* 0C09B87E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09B882u, 1);  /* 0C09B880 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09B884u, 1);  /* 0C09B882 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09B886u, 1);  /* 0C09B884 mov.l @Rm+,Rn */
	IF(0x0C09B886u); { u32 tv_ = r6; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C071C90u: TAIL(blk_f_0C071C90); default: JUMPD(tv_); } }  /* 0C09B886 jmp @Rn */
L_0C09B8EA: BLKS(0x0C09B8EAu);
	r8 = 0xC0BD1C0u; UPD(0x0C09B8ECu, 1);  /* 0C09B8EA mov.l @(disp,pc),Rn */
	IF(0x0C09B8ECu); { u32 t_ = r8; PR = 0x0C09B8F0u; IF(0x0C09B8EEu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD1C0, 0x0C0BD1C0u, 0x0C09B8F0u); }  /* 0C09B8EC jsr @Rn */
L_0C09B8F0: BLKS(0x0C09B8F0u);
	{ r15 += 0xCu; /* slot add #imm,Rn */ UPD(0x0C09B838u, 3); goto L_0C09B838; }  /* 0C09B8F0 bra */
L_0C09B92C: BLKS(0x0C09B92Cu);
	{ IF(0x0C09B92Eu); ; /* slot nop */ UPD(0x0C09B85Au, 3); goto L_0C09B85A; }  /* 0C09B92C bra */
L_0C09B930: BLKS(0x0C09B930u);
	r11 = 0xC0A8CA0u; UPD(0x0C09B932u, 1);  /* 0C09B930 mov.l @(disp,pc),Rn */
	IF(0x0C09B932u); { u32 t_ = r11; PR = 0x0C09B936u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C09B936u); }  /* 0C09B932 jsr @Rn */
L_0C09B936: BLKS(0x0C09B936u);
	IF(0x0C09B936u); T = (s32)r0 >= 0;  /* 0C09B936 cmp/pz Rn */
	if (!T) { UPD(0x0C09B990u, 4); goto L_0C09B990; }  /* 0C09B938 bf */
L_0C09B93A: BLKS(0x0C09B93Au);
	r8 = 0xB4u; UPD(0x0C09B93Cu, 1);  /* 0C09B93A mov.w @(disp,pc),Rn */
	IF(0x0C09B93Cu); MACL = r9 * r8;  /* 0C09B93C mul.l Rm,Rn */
	r11 = 0xC286578u; UPD(0x0C09B940u, 3);  /* 0C09B93E mov.l @(disp,pc),Rn */
	IF(0x0C09B940u); r8 = MACL;  /* 0C09B940 sts macl,Rn */
	r8 += r11;  /* 0C09B942 add Rm,Rn */
	r0 = R32(r8 + 0xCu); UPD(0x0C09B946u, 3);  /* 0C09B944 mov.l @(disp,Rm),Rn */
	r0 += 0x1u;  /* 0C09B946 add #imm,Rn */
	T = r0 == 0x7u;  /* 0C09B948 cmp/eq #imm,r0 */
	{ u32 c_ = T; W32(r8 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C09B980u, 5); goto L_0C09B980; } UPD(0x0C09B94Eu, 1); goto L_0C09B94E; }  /* 0C09B94A bt/s */
L_0C09B94E: BLKS(0x0C09B94Eu);
	r11 = 0xC0A8AE0u; UPD(0x0C09B950u, 1);  /* 0C09B94E mov.l @(disp,pc),Rn */
	r10 = 0xA9u; UPD(0x0C09B952u, 1);  /* 0C09B950 mov.w @(disp,pc),Rn */
	IF(0x0C09B952u); { u32 t_ = r11; PR = 0x0C09B956u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C09B956u); }  /* 0C09B952 jsr @Rn */
L_0C09B956: BLKS(0x0C09B956u);
	r7 = 0xC0A9AE0u; UPD(0x0C09B958u, 1);  /* 0C09B956 mov.l @(disp,pc),Rn */
	IF(0x0C09B958u); { u32 t_ = r7; PR = 0x0C09B95Cu; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C09B95Cu); }  /* 0C09B958 jsr @Rn */
L_0C09B95C: BLKS(0x0C09B95Cu);
	r0 = 0xB0u; UPD(0x0C09B95Eu, 1);  /* 0C09B95C mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF4u;  /* 0C09B95E add #imm,Rn */
	IF(0x0C09B960u); r5 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C09B962u, 2);  /* 0C09B960 mov.b @(r0,Rm),Rn */
	r6 = r5 & 0xFF;  /* 0C09B962 extu.b Rm,Rn */
	W32(r15, r6); UPD(0x0C09B966u, 2);  /* 0C09B964 mov.l Rm,@Rn */
	r0 = r8;  /* 0C09B966 mov Rm,Rn */
	IF(0x0C09B968u); r4 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C09B96Au, 2);  /* 0C09B968 mov.b @(r0,Rm),Rn */
	r5 = 0x1Cu;  /* 0C09B96A mov #imm,Rn */
	r2 = r4 & 0xFF;  /* 0C09B96C extu.b Rm,Rn */
	r0 = 0x18u;  /* 0C09B96E mov #imm,Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C09B972u, 4);  /* 0C09B970 mov.l Rm,@(disp,Rn) */
	W32(r15 + 0x8u, r0); UPD(0x0C09B974u, 1);  /* 0C09B972 mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C09B976u, 1);  /* 0C09B974 mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C09B978u, 1);  /* 0C09B976 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C09B8EAu, 3); goto L_0C09B8EA; }  /* 0C09B978 bra */
L_0C09B980: BLKS(0x0C09B980u);
	r3 = R32(r8); UPD(0x0C09B982u, 1);  /* 0C09B980 mov.l @Rm,Rn */
	r1 = 0x20004000u; UPD(0x0C09B984u, 1);  /* 0C09B982 mov.l @(disp,pc),Rn */
	r3 |= r1;  /* 0C09B984 or Rm,Rn */
	{ W32(r8, r3); /* slot mov.l Rm,@Rn */ UPD(0x0C09B94Eu, 4); goto L_0C09B94E; }  /* 0C09B986 bra */
L_0C09B990: BLKS(0x0C09B990u);
	r8 = 0xC0A8B50u; UPD(0x0C09B992u, 1);  /* 0C09B990 mov.l @(disp,pc),Rn */
	IF(0x0C09B992u); { u32 t_ = r8; PR = 0x0C09B996u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C09B996u); }  /* 0C09B992 jsr @Rn */
L_0C09B996: BLKS(0x0C09B996u);
	IF(0x0C09B996u); T = (s32)r0 >= 0;  /* 0C09B996 cmp/pz Rn */
	if (T) { UPD(0x0C09B92Cu, 4); goto L_0C09B92C; }  /* 0C09B998 bt */
L_0C09B99A: BLKS(0x0C09B99Au);
	r2 = 0xB4u; UPD(0x0C09B99Cu, 1);  /* 0C09B99A mov.w @(disp,pc),Rn */
	IF(0x0C09B99Cu); MACL = r9 * r2;  /* 0C09B99C mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C09B9A0u, 3);  /* 0C09B99E mov.l @(disp,pc),Rn */
	IF(0x0C09B9A0u); r8 = MACL;  /* 0C09B9A0 sts macl,Rn */
	r3 = 0xA0u; UPD(0x0C09B9A4u, 2);  /* 0C09B9A2 mov.w @(disp,pc),Rn */
	r8 += r0;  /* 0C09B9A4 add Rm,Rn */
	r3 += r8;  /* 0C09B9A6 add Rm,Rn */
	r9 = (u32)(s32)(s8)R8(r3); UPD(0x0C09B9AAu, 3);  /* 0C09B9A8 mov.b @Rm,Rn */
	r9 += 0x1u;  /* 0C09B9AA add #imm,Rn */
	r0 = r9 & 0xFF;  /* 0C09B9AC extu.b Rm,Rn */
	T = r0 == 0x4u;  /* 0C09B9AE cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r3, r9); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C09B92Cu, 6); goto L_0C09B92C; } UPD(0x0C09B9B4u, 1); goto L_0C09B9B4; }  /* 0C09B9B0 bf/s */
L_0C09B9B4: BLKS(0x0C09B9B4u);
	r0 = 0xB0u; UPD(0x0C09B9B6u, 1);  /* 0C09B9B4 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C09B9B6 add #imm,Rn */
	IF(0x0C09B9B8u); r7 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C09B9BAu, 2);  /* 0C09B9B8 mov.b @(r0,Rm),Rn */
	r6 = 0x14u;  /* 0C09B9BA mov #imm,Rn */
	r5 = r7 & 0xFF;  /* 0C09B9BC extu.b Rm,Rn */
	W32(r15, r5); UPD(0x0C09B9C0u, 3);  /* 0C09B9BE mov.l Rm,@Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C09B9C2u, 1);  /* 0C09B9C0 mov.l Rm,@(disp,Rn) */
	r5 = 0x6u;  /* 0C09B9C2 mov #imm,Rn */
	r10 = 0xC0BD6F0u; UPD(0x0C09B9C6u, 2);  /* 0C09B9C4 mov.l @(disp,pc),Rn */
	r4 = R32(r8); UPD(0x0C09B9C8u, 1);  /* 0C09B9C6 mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C09B9CAu, 1);  /* 0C09B9C8 mov.l @(disp,Rm),Rn */
	IF(0x0C09B9CAu); { u32 t_ = r10; PR = 0x0C09B9CEu; r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C09B9CEu); }  /* 0C09B9CA jsr @Rn */
L_0C09B9CE: BLKS(0x0C09B9CEu);
	r4 = 0x0u;  /* 0C09B9CE mov #imm,Rn */
	{ W32(r8, r4); /* slot mov.l Rm,@Rn */ UPD(0x0C09B85Au, 4); goto L_0C09B85A; }  /* 0C09B9D0 bra */
}

void blk_f_0C09BA20(sh3_t *c)
{
	LOCALS;
	goto L_0C09BA20;
L_0C09B838: BLKS(0x0C09B838u);
	r4 = 0xB4u; UPD(0x0C09B83Au, 1);  /* 0C09B838 mov.w @(disp,pc),Rn */
	IF(0x0C09B83Au); MACL = r9 * r4;  /* 0C09B83A mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C09B83Eu, 3);  /* 0C09B83C mov.l @(disp,pc),Rn */
	IF(0x0C09B83Eu); r4 = MACL;  /* 0C09B83E sts macl,Rn */
	r4 += r2;  /* 0C09B840 add Rm,Rn */
	r9 = R32(r4); UPD(0x0C09B844u, 3);  /* 0C09B842 mov.l @Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C09B844 tst Rm,Rn */
	if (!T) { UPD(0x0C09B85Au, 4); goto L_0C09B85A; }  /* 0C09B846 bf */
L_0C09B848: BLKS(0x0C09B848u);
	r4 += 0x40u;  /* 0C09B848 add #imm,Rn */
	r4 = R32(r4); UPD(0x0C09B84Cu, 2);  /* 0C09B84A mov.l @Rm,Rn */
	r8 = 0x1869Fu; UPD(0x0C09B84Eu, 1);  /* 0C09B84C mov.l @(disp,pc),Rn */
	T = r4 > r8;  /* 0C09B84E cmp/hi Rm,Rn */
	if (T) { UPD(0x0C09B85Au, 4); goto L_0C09B85A; }  /* 0C09B850 bt */
L_0C09B852: BLKS(0x0C09B852u);
	r10 = 0xC175064u; UPD(0x0C09B854u, 1);  /* 0C09B852 mov.l @(disp,pc),Rn */
	r0 = R32(r10); UPD(0x0C09B856u, 1);  /* 0C09B854 mov.l @Rm,Rn */
	T = r0 == 0x3u;  /* 0C09B856 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C09B870u, 4); goto L_0C09B870; }  /* 0C09B858 bt */
L_0C09B85A: BLKS(0x0C09B85Au);
	r15 = r14;  /* 0C09B85A mov Rm,Rn */
	IF(0x0C09B85Cu); PR = R32(r15); r15 += 4; UPD(0x0C09B85Eu, 2);  /* 0C09B85C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09B860u, 1);  /* 0C09B85E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09B862u, 1);  /* 0C09B860 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09B864u, 1);  /* 0C09B862 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09B866u, 1);  /* 0C09B864 mov.l @Rm+,Rn */
	IF(0x0C09B866u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C09B866 rts */
L_0C09B870: BLKS(0x0C09B870u);
	r7 = 0x4u;  /* 0C09B870 mov #imm,Rn */
	IF(0x0C09B872u); ARG0(0x447Du); { s32 s_ = (s32)r7; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = 0; else r4 >>= ((~s_ & 31) + 1); }  /* 0C09B872 shld Rm,Rn */
	r5 = 0x40000u; UPD(0x0C09B876u, 3);  /* 0C09B874 mov.l @(disp,pc),Rn */
	r6 = 0xC071C90u; UPD(0x0C09B878u, 1);  /* 0C09B876 mov.l @(disp,pc),Rn */
	r4 += r5;  /* 0C09B878 add Rm,Rn */
	r15 = r14;  /* 0C09B87A mov Rm,Rn */
	IF(0x0C09B87Cu); PR = R32(r15); r15 += 4; UPD(0x0C09B87Eu, 3);  /* 0C09B87C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09B880u, 1);  /* 0C09B87E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09B882u, 1);  /* 0C09B880 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09B884u, 1);  /* 0C09B882 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09B886u, 1);  /* 0C09B884 mov.l @Rm+,Rn */
	IF(0x0C09B886u); { u32 tv_ = r6; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C071C90u: TAIL(blk_f_0C071C90); default: JUMPD(tv_); } }  /* 0C09B886 jmp @Rn */
L_0C09BA20: BLKS(0x0C09BA20u);
	r6 = 0xB4u; UPD(0x0C09BA22u, 1);  /* 0C09BA20 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C09BA22 add #imm,Rn */
	IF(0x0C09BA24u); MACL = r9 * r6;  /* 0C09BA24 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C09BA28u, 4);  /* 0C09BA26 mov.l @(disp,pc),Rn */
	r5 = 0x3u;  /* 0C09BA28 mov #imm,Rn */
	IF(0x0C09BA2Au); r8 = MACL;  /* 0C09BA2A sts macl,Rn */
	r8 += r0;  /* 0C09BA2C add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C09BA30u, 4);  /* 0C09BA2E mov.w @(disp,pc),Rn */
	IF(0x0C09BA30u); r10 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C09BA32u, 1);  /* 0C09BA30 mov.b @(r0,Rm),Rn */
	r4 = r10 & 0xFF;  /* 0C09BA32 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C09BA36u, 2);  /* 0C09BA34 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C09BA36 add #imm,Rn */
	IF(0x0C09BA38u); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C09BA3Au, 2);  /* 0C09BA38 mov.b @(r0,Rm),Rn */
	r3 = r2 & 0xFF;  /* 0C09BA3A extu.b Rm,Rn */
	W32(r15 + 0x4u, r3); UPD(0x0C09BA3Eu, 2);  /* 0C09BA3C mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C09BA40u, 1);  /* 0C09BA3E mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C09BA42u, 1);  /* 0C09BA40 mov.l @(disp,Rm),Rn */
	r7 = R32(r8 + 0x28u); UPD(0x0C09BA44u, 1);  /* 0C09BA42 mov.l @(disp,Rm),Rn */
	r0 = 0xC0BD6F0u; UPD(0x0C09BA46u, 1);  /* 0C09BA44 mov.l @(disp,pc),Rn */
	IF(0x0C09BA46u); { u32 t_ = r0; PR = 0x0C09BA4Au; IF(0x0C09BA48u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C09BA4Au); }  /* 0C09BA46 jsr @Rn */
L_0C09BA4A: BLKS(0x0C09BA4Au);
	r1 = 0x0u;  /* 0C09BA4A mov #imm,Rn */
	W32(r8, r1); UPD(0x0C09BA4Eu, 2);  /* 0C09BA4C mov.l Rm,@Rn */
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C09B838u, 3); goto L_0C09B838; }  /* 0C09BA4E bra */
}

void blk_f_0C09BA60(sh3_t *c)
{
	LOCALS;
	goto L_0C09BA60;
L_0C09B838: BLKS(0x0C09B838u);
	r4 = 0xB4u; UPD(0x0C09B83Au, 1);  /* 0C09B838 mov.w @(disp,pc),Rn */
	IF(0x0C09B83Au); MACL = r9 * r4;  /* 0C09B83A mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C09B83Eu, 3);  /* 0C09B83C mov.l @(disp,pc),Rn */
	IF(0x0C09B83Eu); r4 = MACL;  /* 0C09B83E sts macl,Rn */
	r4 += r2;  /* 0C09B840 add Rm,Rn */
	r9 = R32(r4); UPD(0x0C09B844u, 3);  /* 0C09B842 mov.l @Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C09B844 tst Rm,Rn */
	if (!T) { UPD(0x0C09B85Au, 4); goto L_0C09B85A; }  /* 0C09B846 bf */
L_0C09B848: BLKS(0x0C09B848u);
	r4 += 0x40u;  /* 0C09B848 add #imm,Rn */
	r4 = R32(r4); UPD(0x0C09B84Cu, 2);  /* 0C09B84A mov.l @Rm,Rn */
	r8 = 0x1869Fu; UPD(0x0C09B84Eu, 1);  /* 0C09B84C mov.l @(disp,pc),Rn */
	T = r4 > r8;  /* 0C09B84E cmp/hi Rm,Rn */
	if (T) { UPD(0x0C09B85Au, 4); goto L_0C09B85A; }  /* 0C09B850 bt */
L_0C09B852: BLKS(0x0C09B852u);
	r10 = 0xC175064u; UPD(0x0C09B854u, 1);  /* 0C09B852 mov.l @(disp,pc),Rn */
	r0 = R32(r10); UPD(0x0C09B856u, 1);  /* 0C09B854 mov.l @Rm,Rn */
	T = r0 == 0x3u;  /* 0C09B856 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C09B870u, 4); goto L_0C09B870; }  /* 0C09B858 bt */
L_0C09B85A: BLKS(0x0C09B85Au);
	r15 = r14;  /* 0C09B85A mov Rm,Rn */
	IF(0x0C09B85Cu); PR = R32(r15); r15 += 4; UPD(0x0C09B85Eu, 2);  /* 0C09B85C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09B860u, 1);  /* 0C09B85E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09B862u, 1);  /* 0C09B860 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09B864u, 1);  /* 0C09B862 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09B866u, 1);  /* 0C09B864 mov.l @Rm+,Rn */
	IF(0x0C09B866u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C09B866 rts */
L_0C09B870: BLKS(0x0C09B870u);
	r7 = 0x4u;  /* 0C09B870 mov #imm,Rn */
	IF(0x0C09B872u); ARG0(0x447Du); { s32 s_ = (s32)r7; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = 0; else r4 >>= ((~s_ & 31) + 1); }  /* 0C09B872 shld Rm,Rn */
	r5 = 0x40000u; UPD(0x0C09B876u, 3);  /* 0C09B874 mov.l @(disp,pc),Rn */
	r6 = 0xC071C90u; UPD(0x0C09B878u, 1);  /* 0C09B876 mov.l @(disp,pc),Rn */
	r4 += r5;  /* 0C09B878 add Rm,Rn */
	r15 = r14;  /* 0C09B87A mov Rm,Rn */
	IF(0x0C09B87Cu); PR = R32(r15); r15 += 4; UPD(0x0C09B87Eu, 3);  /* 0C09B87C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09B880u, 1);  /* 0C09B87E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09B882u, 1);  /* 0C09B880 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09B884u, 1);  /* 0C09B882 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09B886u, 1);  /* 0C09B884 mov.l @Rm+,Rn */
	IF(0x0C09B886u); { u32 tv_ = r6; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C071C90u: TAIL(blk_f_0C071C90); default: JUMPD(tv_); } }  /* 0C09B886 jmp @Rn */
L_0C09BA46: BLKS(0x0C09BA46u);
	IF(0x0C09BA46u); { u32 t_ = r0; PR = 0x0C09BA4Au; IF(0x0C09BA48u); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C09BA4Au); }  /* 0C09BA46 jsr @Rn */
L_0C09BA4A: BLKS(0x0C09BA4Au);
	r1 = 0x0u;  /* 0C09BA4A mov #imm,Rn */
	W32(r8, r1); UPD(0x0C09BA4Eu, 2);  /* 0C09BA4C mov.l Rm,@Rn */
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C09B838u, 3); goto L_0C09B838; }  /* 0C09BA4E bra */
L_0C09BA60: BLKS(0x0C09BA60u);
	r8 = 0xB4u; UPD(0x0C09BA62u, 1);  /* 0C09BA60 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C09BA62 add #imm,Rn */
	IF(0x0C09BA64u); MACL = r9 * r8;  /* 0C09BA64 mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C09BA68u, 4);  /* 0C09BA66 mov.l @(disp,pc),Rn */
	r5 = 0x14u;  /* 0C09BA68 mov #imm,Rn */
	r0 = 0xB0u; UPD(0x0C09BA6Cu, 2);  /* 0C09BA6A mov.w @(disp,pc),Rn */
	IF(0x0C09BA6Cu); r8 = MACL;  /* 0C09BA6C sts macl,Rn */
	r8 += r3;  /* 0C09BA6E add Rm,Rn */
	IF(0x0C09BA70u); r11 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C09BA72u, 3);  /* 0C09BA70 mov.b @(r0,Rm),Rn */
	r7 = r11 & 0xFF;  /* 0C09BA72 extu.b Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C09BA76u, 2);  /* 0C09BA74 mov.l Rm,@(disp,Rn) */
	W32(r15, r7); UPD(0x0C09BA78u, 1);  /* 0C09BA76 mov.l Rm,@Rn */
	r5 = 0x3u;  /* 0C09BA78 mov #imm,Rn */
	r4 = R32(r8); UPD(0x0C09BA7Cu, 2);  /* 0C09BA7A mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C09BA7Eu, 1);  /* 0C09BA7C mov.l @(disp,Rm),Rn */
	r0 = 0xC0BFE70u; UPD(0x0C09BA80u, 1);  /* 0C09BA7E mov.l @(disp,pc),Rn */
	{ r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C09BA46u, 3); goto L_0C09BA46; }  /* 0C09BA80 bra */
}

void blk_f_0C09BA90(sh3_t *c)
{
	LOCALS;
	goto L_0C09BA90;
L_0C09B838: BLKS(0x0C09B838u);
	r4 = 0xB4u; UPD(0x0C09B83Au, 1);  /* 0C09B838 mov.w @(disp,pc),Rn */
	IF(0x0C09B83Au); MACL = r9 * r4;  /* 0C09B83A mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C09B83Eu, 3);  /* 0C09B83C mov.l @(disp,pc),Rn */
	IF(0x0C09B83Eu); r4 = MACL;  /* 0C09B83E sts macl,Rn */
	r4 += r2;  /* 0C09B840 add Rm,Rn */
	r9 = R32(r4); UPD(0x0C09B844u, 3);  /* 0C09B842 mov.l @Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C09B844 tst Rm,Rn */
	if (!T) { UPD(0x0C09B85Au, 4); goto L_0C09B85A; }  /* 0C09B846 bf */
L_0C09B848: BLKS(0x0C09B848u);
	r4 += 0x40u;  /* 0C09B848 add #imm,Rn */
	r4 = R32(r4); UPD(0x0C09B84Cu, 2);  /* 0C09B84A mov.l @Rm,Rn */
	r8 = 0x1869Fu; UPD(0x0C09B84Eu, 1);  /* 0C09B84C mov.l @(disp,pc),Rn */
	T = r4 > r8;  /* 0C09B84E cmp/hi Rm,Rn */
	if (T) { UPD(0x0C09B85Au, 4); goto L_0C09B85A; }  /* 0C09B850 bt */
L_0C09B852: BLKS(0x0C09B852u);
	r10 = 0xC175064u; UPD(0x0C09B854u, 1);  /* 0C09B852 mov.l @(disp,pc),Rn */
	r0 = R32(r10); UPD(0x0C09B856u, 1);  /* 0C09B854 mov.l @Rm,Rn */
	T = r0 == 0x3u;  /* 0C09B856 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C09B870u, 4); goto L_0C09B870; }  /* 0C09B858 bt */
L_0C09B85A: BLKS(0x0C09B85Au);
	r15 = r14;  /* 0C09B85A mov Rm,Rn */
	IF(0x0C09B85Cu); PR = R32(r15); r15 += 4; UPD(0x0C09B85Eu, 2);  /* 0C09B85C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09B860u, 1);  /* 0C09B85E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09B862u, 1);  /* 0C09B860 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09B864u, 1);  /* 0C09B862 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09B866u, 1);  /* 0C09B864 mov.l @Rm+,Rn */
	IF(0x0C09B866u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C09B866 rts */
L_0C09B870: BLKS(0x0C09B870u);
	r7 = 0x4u;  /* 0C09B870 mov #imm,Rn */
	IF(0x0C09B872u); ARG0(0x447Du); { s32 s_ = (s32)r7; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = 0; else r4 >>= ((~s_ & 31) + 1); }  /* 0C09B872 shld Rm,Rn */
	r5 = 0x40000u; UPD(0x0C09B876u, 3);  /* 0C09B874 mov.l @(disp,pc),Rn */
	r6 = 0xC071C90u; UPD(0x0C09B878u, 1);  /* 0C09B876 mov.l @(disp,pc),Rn */
	r4 += r5;  /* 0C09B878 add Rm,Rn */
	r15 = r14;  /* 0C09B87A mov Rm,Rn */
	IF(0x0C09B87Cu); PR = R32(r15); r15 += 4; UPD(0x0C09B87Eu, 3);  /* 0C09B87C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09B880u, 1);  /* 0C09B87E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09B882u, 1);  /* 0C09B880 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09B884u, 1);  /* 0C09B882 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09B886u, 1);  /* 0C09B884 mov.l @Rm+,Rn */
	IF(0x0C09B886u); { u32 tv_ = r6; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C071C90u: TAIL(blk_f_0C071C90); default: JUMPD(tv_); } }  /* 0C09B886 jmp @Rn */
L_0C09BA40: BLKS(0x0C09BA40u);
	r6 = R32(r8 + 0x24u); UPD(0x0C09BA42u, 1);  /* 0C09BA40 mov.l @(disp,Rm),Rn */
	r7 = R32(r8 + 0x28u); UPD(0x0C09BA44u, 1);  /* 0C09BA42 mov.l @(disp,Rm),Rn */
	r0 = 0xC0BD6F0u; UPD(0x0C09BA46u, 1);  /* 0C09BA44 mov.l @(disp,pc),Rn */
	IF(0x0C09BA46u); { u32 t_ = r0; PR = 0x0C09BA4Au; IF(0x0C09BA48u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C09BA4Au); }  /* 0C09BA46 jsr @Rn */
L_0C09BA4A: BLKS(0x0C09BA4Au);
	r1 = 0x0u;  /* 0C09BA4A mov #imm,Rn */
	W32(r8, r1); UPD(0x0C09BA4Eu, 2);  /* 0C09BA4C mov.l Rm,@Rn */
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C09B838u, 3); goto L_0C09B838; }  /* 0C09BA4E bra */
L_0C09BA90: BLKS(0x0C09BA90u);
	r5 = 0xB4u; UPD(0x0C09BA92u, 1);  /* 0C09BA90 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C09BA92 add #imm,Rn */
	IF(0x0C09BA94u); MACL = r9 * r5;  /* 0C09BA94 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C09BA98u, 4);  /* 0C09BA96 mov.l @(disp,pc),Rn */
	IF(0x0C09BA98u); r8 = MACL;  /* 0C09BA98 sts macl,Rn */
	r8 += r0;  /* 0C09BA9A add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C09BA9Eu, 3);  /* 0C09BA9C mov.w @(disp,pc),Rn */
	r5 = 0x6u;  /* 0C09BA9E mov #imm,Rn */
	IF(0x0C09BAA0u); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C09BAA2u, 2);  /* 0C09BAA0 mov.b @(r0,Rm),Rn */
	r10 = r6 & 0xFF;  /* 0C09BAA2 extu.b Rm,Rn */
	W32(r15, r10); UPD(0x0C09BAA6u, 2);  /* 0C09BAA4 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C09BAA6 add #imm,Rn */
	IF(0x0C09BAA8u); r4 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C09BAAAu, 2);  /* 0C09BAA8 mov.b @(r0,Rm),Rn */
	r2 = r4 & 0xFF;  /* 0C09BAAA extu.b Rm,Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C09BAAEu, 2);  /* 0C09BAAC mov.l Rm,@(disp,Rn) */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C09BA40u, 3); goto L_0C09BA40; }  /* 0C09BAAE bra */
}

void blk_f_0C09BAC0(sh3_t *c)
{
	LOCALS;
	goto L_0C09BAC0;
L_0C09B838: BLKS(0x0C09B838u);
	r4 = 0xB4u; UPD(0x0C09B83Au, 1);  /* 0C09B838 mov.w @(disp,pc),Rn */
	IF(0x0C09B83Au); MACL = r9 * r4;  /* 0C09B83A mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C09B83Eu, 3);  /* 0C09B83C mov.l @(disp,pc),Rn */
	IF(0x0C09B83Eu); r4 = MACL;  /* 0C09B83E sts macl,Rn */
	r4 += r2;  /* 0C09B840 add Rm,Rn */
	r9 = R32(r4); UPD(0x0C09B844u, 3);  /* 0C09B842 mov.l @Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C09B844 tst Rm,Rn */
	if (!T) { UPD(0x0C09B85Au, 4); goto L_0C09B85A; }  /* 0C09B846 bf */
L_0C09B848: BLKS(0x0C09B848u);
	r4 += 0x40u;  /* 0C09B848 add #imm,Rn */
	r4 = R32(r4); UPD(0x0C09B84Cu, 2);  /* 0C09B84A mov.l @Rm,Rn */
	r8 = 0x1869Fu; UPD(0x0C09B84Eu, 1);  /* 0C09B84C mov.l @(disp,pc),Rn */
	T = r4 > r8;  /* 0C09B84E cmp/hi Rm,Rn */
	if (T) { UPD(0x0C09B85Au, 4); goto L_0C09B85A; }  /* 0C09B850 bt */
L_0C09B852: BLKS(0x0C09B852u);
	r10 = 0xC175064u; UPD(0x0C09B854u, 1);  /* 0C09B852 mov.l @(disp,pc),Rn */
	r0 = R32(r10); UPD(0x0C09B856u, 1);  /* 0C09B854 mov.l @Rm,Rn */
	T = r0 == 0x3u;  /* 0C09B856 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C09B870u, 4); goto L_0C09B870; }  /* 0C09B858 bt */
L_0C09B85A: BLKS(0x0C09B85Au);
	r15 = r14;  /* 0C09B85A mov Rm,Rn */
	IF(0x0C09B85Cu); PR = R32(r15); r15 += 4; UPD(0x0C09B85Eu, 2);  /* 0C09B85C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09B860u, 1);  /* 0C09B85E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09B862u, 1);  /* 0C09B860 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09B864u, 1);  /* 0C09B862 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09B866u, 1);  /* 0C09B864 mov.l @Rm+,Rn */
	IF(0x0C09B866u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C09B866 rts */
L_0C09B870: BLKS(0x0C09B870u);
	r7 = 0x4u;  /* 0C09B870 mov #imm,Rn */
	IF(0x0C09B872u); ARG0(0x447Du); { s32 s_ = (s32)r7; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = 0; else r4 >>= ((~s_ & 31) + 1); }  /* 0C09B872 shld Rm,Rn */
	r5 = 0x40000u; UPD(0x0C09B876u, 3);  /* 0C09B874 mov.l @(disp,pc),Rn */
	r6 = 0xC071C90u; UPD(0x0C09B878u, 1);  /* 0C09B876 mov.l @(disp,pc),Rn */
	r4 += r5;  /* 0C09B878 add Rm,Rn */
	r15 = r14;  /* 0C09B87A mov Rm,Rn */
	IF(0x0C09B87Cu); PR = R32(r15); r15 += 4; UPD(0x0C09B87Eu, 3);  /* 0C09B87C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09B880u, 1);  /* 0C09B87E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09B882u, 1);  /* 0C09B880 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09B884u, 1);  /* 0C09B882 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09B886u, 1);  /* 0C09B884 mov.l @Rm+,Rn */
	IF(0x0C09B886u); { u32 tv_ = r6; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C071C90u: TAIL(blk_f_0C071C90); default: JUMPD(tv_); } }  /* 0C09B886 jmp @Rn */
L_0C09BA46: BLKS(0x0C09BA46u);
	IF(0x0C09BA46u); { u32 t_ = r0; PR = 0x0C09BA4Au; IF(0x0C09BA48u); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C09BA4Au); }  /* 0C09BA46 jsr @Rn */
L_0C09BA4A: BLKS(0x0C09BA4Au);
	r1 = 0x0u;  /* 0C09BA4A mov #imm,Rn */
	W32(r8, r1); UPD(0x0C09BA4Eu, 2);  /* 0C09BA4C mov.l Rm,@Rn */
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C09B838u, 3); goto L_0C09B838; }  /* 0C09BA4E bra */
L_0C09BAC0: BLKS(0x0C09BAC0u);
	r8 = 0xB4u; UPD(0x0C09BAC2u, 1);  /* 0C09BAC0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C09BAC2 add #imm,Rn */
	IF(0x0C09BAC4u); MACL = r9 * r8;  /* 0C09BAC4 mul.l Rm,Rn */
	r4 = 0xC286578u; UPD(0x0C09BAC8u, 4);  /* 0C09BAC6 mov.l @(disp,pc),Rn */
	r5 = 0x5u;  /* 0C09BAC8 mov #imm,Rn */
	r0 = 0xB0u; UPD(0x0C09BACCu, 2);  /* 0C09BACA mov.w @(disp,pc),Rn */
	IF(0x0C09BACCu); r8 = MACL;  /* 0C09BACC sts macl,Rn */
	r8 += r4;  /* 0C09BACE add Rm,Rn */
	IF(0x0C09BAD0u); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C09BAD2u, 3);  /* 0C09BAD0 mov.b @(r0,Rm),Rn */
	r3 = r2 & 0xFF;  /* 0C09BAD2 extu.b Rm,Rn */
	W32(r15, r3); UPD(0x0C09BAD6u, 2);  /* 0C09BAD4 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C09BAD6 add #imm,Rn */
	IF(0x0C09BAD8u); r11 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C09BADAu, 2);  /* 0C09BAD8 mov.b @(r0,Rm),Rn */
	r7 = r11 & 0xFF;  /* 0C09BADA extu.b Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C09BADEu, 2);  /* 0C09BADC mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BECB0u; UPD(0x0C09BAE0u, 1);  /* 0C09BADE mov.l @(disp,pc),Rn */
	r4 = R32(r8); UPD(0x0C09BAE2u, 1);  /* 0C09BAE0 mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C09BAE4u, 1);  /* 0C09BAE2 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C09BA46u, 3); goto L_0C09BA46; }  /* 0C09BAE4 bra */
}

void blk_f_0C09BAF0(sh3_t *c)
{
	LOCALS;
	goto L_0C09BAF0;
L_0C09B838: BLKS(0x0C09B838u);
	r4 = 0xB4u; UPD(0x0C09B83Au, 1);  /* 0C09B838 mov.w @(disp,pc),Rn */
	IF(0x0C09B83Au); MACL = r9 * r4;  /* 0C09B83A mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C09B83Eu, 3);  /* 0C09B83C mov.l @(disp,pc),Rn */
	IF(0x0C09B83Eu); r4 = MACL;  /* 0C09B83E sts macl,Rn */
	r4 += r2;  /* 0C09B840 add Rm,Rn */
	r9 = R32(r4); UPD(0x0C09B844u, 3);  /* 0C09B842 mov.l @Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C09B844 tst Rm,Rn */
	if (!T) { UPD(0x0C09B85Au, 4); goto L_0C09B85A; }  /* 0C09B846 bf */
L_0C09B848: BLKS(0x0C09B848u);
	r4 += 0x40u;  /* 0C09B848 add #imm,Rn */
	r4 = R32(r4); UPD(0x0C09B84Cu, 2);  /* 0C09B84A mov.l @Rm,Rn */
	r8 = 0x1869Fu; UPD(0x0C09B84Eu, 1);  /* 0C09B84C mov.l @(disp,pc),Rn */
	T = r4 > r8;  /* 0C09B84E cmp/hi Rm,Rn */
	if (T) { UPD(0x0C09B85Au, 4); goto L_0C09B85A; }  /* 0C09B850 bt */
L_0C09B852: BLKS(0x0C09B852u);
	r10 = 0xC175064u; UPD(0x0C09B854u, 1);  /* 0C09B852 mov.l @(disp,pc),Rn */
	r0 = R32(r10); UPD(0x0C09B856u, 1);  /* 0C09B854 mov.l @Rm,Rn */
	T = r0 == 0x3u;  /* 0C09B856 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C09B870u, 4); goto L_0C09B870; }  /* 0C09B858 bt */
L_0C09B85A: BLKS(0x0C09B85Au);
	r15 = r14;  /* 0C09B85A mov Rm,Rn */
	IF(0x0C09B85Cu); PR = R32(r15); r15 += 4; UPD(0x0C09B85Eu, 2);  /* 0C09B85C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09B860u, 1);  /* 0C09B85E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09B862u, 1);  /* 0C09B860 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09B864u, 1);  /* 0C09B862 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09B866u, 1);  /* 0C09B864 mov.l @Rm+,Rn */
	IF(0x0C09B866u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C09B866 rts */
L_0C09B870: BLKS(0x0C09B870u);
	r7 = 0x4u;  /* 0C09B870 mov #imm,Rn */
	IF(0x0C09B872u); ARG0(0x447Du); { s32 s_ = (s32)r7; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = 0; else r4 >>= ((~s_ & 31) + 1); }  /* 0C09B872 shld Rm,Rn */
	r5 = 0x40000u; UPD(0x0C09B876u, 3);  /* 0C09B874 mov.l @(disp,pc),Rn */
	r6 = 0xC071C90u; UPD(0x0C09B878u, 1);  /* 0C09B876 mov.l @(disp,pc),Rn */
	r4 += r5;  /* 0C09B878 add Rm,Rn */
	r15 = r14;  /* 0C09B87A mov Rm,Rn */
	IF(0x0C09B87Cu); PR = R32(r15); r15 += 4; UPD(0x0C09B87Eu, 3);  /* 0C09B87C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09B880u, 1);  /* 0C09B87E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09B882u, 1);  /* 0C09B880 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09B884u, 1);  /* 0C09B882 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09B886u, 1);  /* 0C09B884 mov.l @Rm+,Rn */
	IF(0x0C09B886u); { u32 tv_ = r6; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C071C90u: TAIL(blk_f_0C071C90); default: JUMPD(tv_); } }  /* 0C09B886 jmp @Rn */
L_0C09B920: BLKS(0x0C09B920u);
	r5 = 0xB4u; UPD(0x0C09B922u, 1);  /* 0C09B920 mov.w @(disp,pc),Rn */
	r6 = 0x0u;  /* 0C09B922 mov #imm,Rn */
	IF(0x0C09B924u); MACL = r9 * r5;  /* 0C09B924 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C09B928u, 4);  /* 0C09B926 mov.l @(disp,pc),Rn */
	IF(0x0C09B928u); r0 = MACL;  /* 0C09B928 sts macl,Rn */
	IF(0x0C09B92Au); W32(r0 + r9, r6); UPD(0x0C09B92Cu, 2);  /* 0C09B92A mov.l Rm,@(r0,Rn) */
	{ IF(0x0C09B92Eu); ; /* slot nop */ UPD(0x0C09B85Au, 3); goto L_0C09B85A; }  /* 0C09B92C bra */
L_0C09BAF0: BLKS(0x0C09BAF0u);
	r10 = 0xC0A8CA0u; UPD(0x0C09BAF2u, 1);  /* 0C09BAF0 mov.l @(disp,pc),Rn */
	IF(0x0C09BAF2u); { u32 t_ = r10; PR = 0x0C09BAF6u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C09BAF6u); }  /* 0C09BAF2 jsr @Rn */
L_0C09BAF6: BLKS(0x0C09BAF6u);
	IF(0x0C09BAF6u); T = (s32)r0 >= 0;  /* 0C09BAF6 cmp/pz Rn */
	if (!T) { UPD(0x0C09BB6Au, 4); goto L_0C09BB6A; }  /* 0C09BAF8 bf */
L_0C09BAFA: BLKS(0x0C09BAFAu);
	r15 += 0xFFFFFFF8u;  /* 0C09BAFA add #imm,Rn */
	r10 = 0xB4u; UPD(0x0C09BAFEu, 2);  /* 0C09BAFC mov.w @(disp,pc),Rn */
	IF(0x0C09BAFEu); MACL = r9 * r10;  /* 0C09BAFE mul.l Rm,Rn */
	r11 = 0xC286578u; UPD(0x0C09BB02u, 3);  /* 0C09BB00 mov.l @(disp,pc),Rn */
	IF(0x0C09BB02u); r8 = MACL;  /* 0C09BB02 sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C09BB06u, 2);  /* 0C09BB04 mov.w @(disp,pc),Rn */
	r8 += r11;  /* 0C09BB06 add Rm,Rn */
	IF(0x0C09BB08u); r3 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C09BB0Au, 2);  /* 0C09BB08 mov.b @(r0,Rm),Rn */
	r7 = r3 & 0xFF;  /* 0C09BB0A extu.b Rm,Rn */
	W32(r15, r7); UPD(0x0C09BB0Eu, 2);  /* 0C09BB0C mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C09BB0E add #imm,Rn */
	IF(0x0C09BB10u); r5 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C09BB12u, 2);  /* 0C09BB10 mov.b @(r0,Rm),Rn */
	r0 = r5 & 0xFF;  /* 0C09BB12 extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C09BB16u, 2);  /* 0C09BB14 mov.l Rm,@(disp,Rn) */
	r5 = 0x6u;  /* 0C09BB16 mov #imm,Rn */
	r0 = 0xC0BFD30u; UPD(0x0C09BB1Au, 2);  /* 0C09BB18 mov.l @(disp,pc),Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C09BB1Cu, 1);  /* 0C09BB1A mov.l @(disp,Rm),Rn */
	r4 = R32(r8); UPD(0x0C09BB1Eu, 1);  /* 0C09BB1C mov.l @Rm,Rn */
	IF(0x0C09BB1Eu); { u32 t_ = r0; PR = 0x0C09BB22u; r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BFD30, 0x0C0BFD30u, 0x0C09BB22u); }  /* 0C09BB1E jsr @Rn */
L_0C09BB22: BLKS(0x0C09BB22u);
	r8 += 0x7Eu;  /* 0C09BB22 add #imm,Rn */
	r2 = (u32)(s32)(s16)R16(r8); UPD(0x0C09BB26u, 2);  /* 0C09BB24 mov.w @Rm,Rn */
	r0 = 0xA1u; UPD(0x0C09BB28u, 1);  /* 0C09BB26 mov.w @(disp,pc),Rn */
	r8 += 0xFFFFFF82u;  /* 0C09BB28 add #imm,Rn */
	IF(0x0C09BB2Au); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C09BB2Cu, 2);  /* 0C09BB2A mov.b @(r0,Rm),Rn */
	T = (r6 & r6) == 0;  /* 0C09BB2C tst Rm,Rn */
	{ u32 c_ = T; r15 += 0x8u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C09BB50u, 4); goto L_0C09BB50; } goto L_0C09BB32; }  /* 0C09BB2E bt/s */
L_0C09BB32: BLKS(0x0C09BB32u);
	IF(0x0C09BB32u); MACL = r2 * r10;  /* 0C09BB32 mul.l Rm,Rn */
	r1 = 0xA5u; UPD(0x0C09BB36u, 4);  /* 0C09BB34 mov.w @(disp,pc),Rn */
	IF(0x0C09BB36u); r2 = MACL;  /* 0C09BB36 sts macl,Rn */
	r2 += r11;  /* 0C09BB38 add Rm,Rn */
	UPD(0x0C09BB3Au, 2);
L_0C09BB3A: BLKS(0x0C09BB3Au);
	r2 += r1;  /* 0C09BB3A add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C09BB3Eu, 2);  /* 0C09BB3C mov.b @Rm,Rn */
	r4 = 0xB4u; UPD(0x0C09BB40u, 1);  /* 0C09BB3E mov.w @(disp,pc),Rn */
	r0 |= 0x8u;  /* 0C09BB40 or #imm,r0 */
	IF(0x0C09BB42u); MACL = r9 * r4;  /* 0C09BB42 mul.l Rm,Rn */
	W8(r2, r0); UPD(0x0C09BB46u, 4);  /* 0C09BB44 mov.b Rm,@Rn */
	r11 = 0xC286578u; UPD(0x0C09BB48u, 1);  /* 0C09BB46 mov.l @(disp,pc),Rn */
	IF(0x0C09BB48u); r0 = MACL;  /* 0C09BB48 sts macl,Rn */
	r2 = 0x0u;  /* 0C09BB4A mov #imm,Rn */
	{ IF(0x0C09BB4Eu); W32(r0 + r11, r2); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C09B838u, 5); goto L_0C09B838; }  /* 0C09BB4C bra */
L_0C09BB50: BLKS(0x0C09BB50u);
	IF(0x0C09BB50u); MACL = r2 * r10;  /* 0C09BB50 mul.l Rm,Rn */
	r1 = 0xA6u; UPD(0x0C09BB54u, 3);  /* 0C09BB52 mov.w @(disp,pc),Rn */
	IF(0x0C09BB54u); r2 = MACL;  /* 0C09BB54 sts macl,Rn */
	{ r2 += r11; /* slot add Rm,Rn */ UPD(0x0C09BB3Au, 4); goto L_0C09BB3A; }  /* 0C09BB56 bra */
L_0C09BB6A: BLKS(0x0C09BB6Au);
	{ IF(0x0C09BB6Cu); ; /* slot nop */ UPD(0x0C09B920u, 3); goto L_0C09B920; }  /* 0C09BB6A bra */
}

void blk_f_0C09BB60(sh3_t *c)
{
	LOCALS;
	goto L_0C09BB60;
L_0C09B838: BLKS(0x0C09B838u);
	r4 = 0xB4u; UPD(0x0C09B83Au, 1);  /* 0C09B838 mov.w @(disp,pc),Rn */
	IF(0x0C09B83Au); MACL = r9 * r4;  /* 0C09B83A mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C09B83Eu, 3);  /* 0C09B83C mov.l @(disp,pc),Rn */
	IF(0x0C09B83Eu); r4 = MACL;  /* 0C09B83E sts macl,Rn */
	r4 += r2;  /* 0C09B840 add Rm,Rn */
	r9 = R32(r4); UPD(0x0C09B844u, 3);  /* 0C09B842 mov.l @Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C09B844 tst Rm,Rn */
	if (!T) { UPD(0x0C09B85Au, 4); goto L_0C09B85A; }  /* 0C09B846 bf */
L_0C09B848: BLKS(0x0C09B848u);
	r4 += 0x40u;  /* 0C09B848 add #imm,Rn */
	r4 = R32(r4); UPD(0x0C09B84Cu, 2);  /* 0C09B84A mov.l @Rm,Rn */
	r8 = 0x1869Fu; UPD(0x0C09B84Eu, 1);  /* 0C09B84C mov.l @(disp,pc),Rn */
	T = r4 > r8;  /* 0C09B84E cmp/hi Rm,Rn */
	if (T) { UPD(0x0C09B85Au, 4); goto L_0C09B85A; }  /* 0C09B850 bt */
L_0C09B852: BLKS(0x0C09B852u);
	r10 = 0xC175064u; UPD(0x0C09B854u, 1);  /* 0C09B852 mov.l @(disp,pc),Rn */
	r0 = R32(r10); UPD(0x0C09B856u, 1);  /* 0C09B854 mov.l @Rm,Rn */
	T = r0 == 0x3u;  /* 0C09B856 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C09B870u, 4); goto L_0C09B870; }  /* 0C09B858 bt */
L_0C09B85A: BLKS(0x0C09B85Au);
	r15 = r14;  /* 0C09B85A mov Rm,Rn */
	IF(0x0C09B85Cu); PR = R32(r15); r15 += 4; UPD(0x0C09B85Eu, 2);  /* 0C09B85C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09B860u, 1);  /* 0C09B85E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09B862u, 1);  /* 0C09B860 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09B864u, 1);  /* 0C09B862 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09B866u, 1);  /* 0C09B864 mov.l @Rm+,Rn */
	IF(0x0C09B866u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C09B866 rts */
L_0C09B870: BLKS(0x0C09B870u);
	r7 = 0x4u;  /* 0C09B870 mov #imm,Rn */
	IF(0x0C09B872u); ARG0(0x447Du); { s32 s_ = (s32)r7; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = 0; else r4 >>= ((~s_ & 31) + 1); }  /* 0C09B872 shld Rm,Rn */
	r5 = 0x40000u; UPD(0x0C09B876u, 3);  /* 0C09B874 mov.l @(disp,pc),Rn */
	r6 = 0xC071C90u; UPD(0x0C09B878u, 1);  /* 0C09B876 mov.l @(disp,pc),Rn */
	r4 += r5;  /* 0C09B878 add Rm,Rn */
	r15 = r14;  /* 0C09B87A mov Rm,Rn */
	IF(0x0C09B87Cu); PR = R32(r15); r15 += 4; UPD(0x0C09B87Eu, 3);  /* 0C09B87C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09B880u, 1);  /* 0C09B87E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09B882u, 1);  /* 0C09B880 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09B884u, 1);  /* 0C09B882 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09B886u, 1);  /* 0C09B884 mov.l @Rm+,Rn */
	IF(0x0C09B886u); { u32 tv_ = r6; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C071C90u: TAIL(blk_f_0C071C90); default: JUMPD(tv_); } }  /* 0C09B886 jmp @Rn */
L_0C09B920: BLKS(0x0C09B920u);
	r5 = 0xB4u; UPD(0x0C09B922u, 1);  /* 0C09B920 mov.w @(disp,pc),Rn */
	r6 = 0x0u;  /* 0C09B922 mov #imm,Rn */
	IF(0x0C09B924u); MACL = r9 * r5;  /* 0C09B924 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C09B928u, 4);  /* 0C09B926 mov.l @(disp,pc),Rn */
	IF(0x0C09B928u); r0 = MACL;  /* 0C09B928 sts macl,Rn */
	IF(0x0C09B92Au); W32(r0 + r9, r6); UPD(0x0C09B92Cu, 2);  /* 0C09B92A mov.l Rm,@(r0,Rn) */
	{ IF(0x0C09B92Eu); ; /* slot nop */ UPD(0x0C09B85Au, 3); goto L_0C09B85A; }  /* 0C09B92C bra */
L_0C09BA4C: BLKS(0x0C09BA4Cu);
	W32(r8, r1); UPD(0x0C09BA4Eu, 1);  /* 0C09BA4C mov.l Rm,@Rn */
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C09B838u, 3); goto L_0C09B838; }  /* 0C09BA4E bra */
L_0C09BB60: BLKS(0x0C09BB60u);
	r8 = 0xC0A8CA0u; UPD(0x0C09BB62u, 1);  /* 0C09BB60 mov.l @(disp,pc),Rn */
	IF(0x0C09BB62u); { u32 t_ = r8; PR = 0x0C09BB66u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C09BB66u); }  /* 0C09BB62 jsr @Rn */
L_0C09BB66: BLKS(0x0C09BB66u);
	IF(0x0C09BB66u); T = (s32)r0 >= 0;  /* 0C09BB66 cmp/pz Rn */
	if (T) { UPD(0x0C09BB6Eu, 4); goto L_0C09BB6E; }  /* 0C09BB68 bt */
L_0C09BB6A: BLKS(0x0C09BB6Au);
	{ IF(0x0C09BB6Cu); ; /* slot nop */ UPD(0x0C09B920u, 3); goto L_0C09B920; }  /* 0C09BB6A bra */
L_0C09BB6E: BLKS(0x0C09BB6Eu);
	r2 = 0xB4u; UPD(0x0C09BB70u, 1);  /* 0C09BB6E mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C09BB70 add #imm,Rn */
	IF(0x0C09BB72u); MACL = r9 * r2;  /* 0C09BB72 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C09BB76u, 4);  /* 0C09BB74 mov.l @(disp,pc),Rn */
	IF(0x0C09BB76u); r8 = MACL;  /* 0C09BB76 sts macl,Rn */
	r8 += r0;  /* 0C09BB78 add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C09BB7Cu, 3);  /* 0C09BB7A mov.w @(disp,pc),Rn */
	IF(0x0C09BB7Cu); r3 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C09BB7Eu, 1);  /* 0C09BB7C mov.b @(r0,Rm),Rn */
	r7 = r3 & 0xFF;  /* 0C09BB7E extu.b Rm,Rn */
	W32(r15, r7); UPD(0x0C09BB82u, 2);  /* 0C09BB80 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C09BB82 add #imm,Rn */
	IF(0x0C09BB84u); r5 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C09BB86u, 2);  /* 0C09BB84 mov.b @(r0,Rm),Rn */
	r11 = 0xC0BD6F0u; UPD(0x0C09BB88u, 1);  /* 0C09BB86 mov.l @(disp,pc),Rn */
	r6 = r5 & 0xFF;  /* 0C09BB88 extu.b Rm,Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C09BB8Cu, 2);  /* 0C09BB8A mov.l Rm,@(disp,Rn) */
	r5 = 0x4u;  /* 0C09BB8C mov #imm,Rn */
	r4 = R32(r8); UPD(0x0C09BB90u, 2);  /* 0C09BB8E mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C09BB92u, 1);  /* 0C09BB90 mov.l @(disp,Rm),Rn */
	IF(0x0C09BB92u); { u32 t_ = r11; PR = 0x0C09BB96u; r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C09BB96u); }  /* 0C09BB92 jsr @Rn */
L_0C09BB96: BLKS(0x0C09BB96u);
	r1 = R32(r8); UPD(0x0C09BB98u, 1);  /* 0C09BB96 mov.l @Rm,Rn */
	r10 = 0xECFFFFFFu; UPD(0x0C09BB9Au, 1);  /* 0C09BB98 mov.l @(disp,pc),Rn */
	{ r1 &= r10; /* slot and Rm,Rn */ UPD(0x0C09BA4Cu, 3); goto L_0C09BA4C; }  /* 0C09BB9A bra */
}

void blk_f_0C09BBA0(sh3_t *c)
{
	LOCALS;
	goto L_0C09BBA0;
L_0C09B838: BLKS(0x0C09B838u);
	r4 = 0xB4u; UPD(0x0C09B83Au, 1);  /* 0C09B838 mov.w @(disp,pc),Rn */
	IF(0x0C09B83Au); MACL = r9 * r4;  /* 0C09B83A mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C09B83Eu, 3);  /* 0C09B83C mov.l @(disp,pc),Rn */
	IF(0x0C09B83Eu); r4 = MACL;  /* 0C09B83E sts macl,Rn */
	r4 += r2;  /* 0C09B840 add Rm,Rn */
	r9 = R32(r4); UPD(0x0C09B844u, 3);  /* 0C09B842 mov.l @Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C09B844 tst Rm,Rn */
	if (!T) { UPD(0x0C09B85Au, 4); goto L_0C09B85A; }  /* 0C09B846 bf */
L_0C09B848: BLKS(0x0C09B848u);
	r4 += 0x40u;  /* 0C09B848 add #imm,Rn */
	r4 = R32(r4); UPD(0x0C09B84Cu, 2);  /* 0C09B84A mov.l @Rm,Rn */
	r8 = 0x1869Fu; UPD(0x0C09B84Eu, 1);  /* 0C09B84C mov.l @(disp,pc),Rn */
	T = r4 > r8;  /* 0C09B84E cmp/hi Rm,Rn */
	if (T) { UPD(0x0C09B85Au, 4); goto L_0C09B85A; }  /* 0C09B850 bt */
L_0C09B852: BLKS(0x0C09B852u);
	r10 = 0xC175064u; UPD(0x0C09B854u, 1);  /* 0C09B852 mov.l @(disp,pc),Rn */
	r0 = R32(r10); UPD(0x0C09B856u, 1);  /* 0C09B854 mov.l @Rm,Rn */
	T = r0 == 0x3u;  /* 0C09B856 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C09B870u, 4); goto L_0C09B870; }  /* 0C09B858 bt */
L_0C09B85A: BLKS(0x0C09B85Au);
	r15 = r14;  /* 0C09B85A mov Rm,Rn */
	IF(0x0C09B85Cu); PR = R32(r15); r15 += 4; UPD(0x0C09B85Eu, 2);  /* 0C09B85C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09B860u, 1);  /* 0C09B85E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09B862u, 1);  /* 0C09B860 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09B864u, 1);  /* 0C09B862 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09B866u, 1);  /* 0C09B864 mov.l @Rm+,Rn */
	IF(0x0C09B866u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C09B866 rts */
L_0C09B870: BLKS(0x0C09B870u);
	r7 = 0x4u;  /* 0C09B870 mov #imm,Rn */
	IF(0x0C09B872u); ARG0(0x447Du); { s32 s_ = (s32)r7; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = 0; else r4 >>= ((~s_ & 31) + 1); }  /* 0C09B872 shld Rm,Rn */
	r5 = 0x40000u; UPD(0x0C09B876u, 3);  /* 0C09B874 mov.l @(disp,pc),Rn */
	r6 = 0xC071C90u; UPD(0x0C09B878u, 1);  /* 0C09B876 mov.l @(disp,pc),Rn */
	r4 += r5;  /* 0C09B878 add Rm,Rn */
	r15 = r14;  /* 0C09B87A mov Rm,Rn */
	IF(0x0C09B87Cu); PR = R32(r15); r15 += 4; UPD(0x0C09B87Eu, 3);  /* 0C09B87C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09B880u, 1);  /* 0C09B87E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09B882u, 1);  /* 0C09B880 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09B884u, 1);  /* 0C09B882 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09B886u, 1);  /* 0C09B884 mov.l @Rm+,Rn */
	IF(0x0C09B886u); { u32 tv_ = r6; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C071C90u: TAIL(blk_f_0C071C90); default: JUMPD(tv_); } }  /* 0C09B886 jmp @Rn */
L_0C09BA40: BLKS(0x0C09BA40u);
	r6 = R32(r8 + 0x24u); UPD(0x0C09BA42u, 1);  /* 0C09BA40 mov.l @(disp,Rm),Rn */
	r7 = R32(r8 + 0x28u); UPD(0x0C09BA44u, 1);  /* 0C09BA42 mov.l @(disp,Rm),Rn */
	r0 = 0xC0BD6F0u; UPD(0x0C09BA46u, 1);  /* 0C09BA44 mov.l @(disp,pc),Rn */
	IF(0x0C09BA46u); { u32 t_ = r0; PR = 0x0C09BA4Au; IF(0x0C09BA48u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C09BA4Au); }  /* 0C09BA46 jsr @Rn */
L_0C09BA4A: BLKS(0x0C09BA4Au);
	r1 = 0x0u;  /* 0C09BA4A mov #imm,Rn */
	W32(r8, r1); UPD(0x0C09BA4Eu, 2);  /* 0C09BA4C mov.l Rm,@Rn */
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C09B838u, 3); goto L_0C09B838; }  /* 0C09BA4E bra */
L_0C09BBA0: BLKS(0x0C09BBA0u);
	r8 = 0xC0A8B50u; UPD(0x0C09BBA2u, 1);  /* 0C09BBA0 mov.l @(disp,pc),Rn */
	IF(0x0C09BBA2u); { u32 t_ = r8; PR = 0x0C09BBA6u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C09BBA6u); }  /* 0C09BBA2 jsr @Rn */
L_0C09BBA6: BLKS(0x0C09BBA6u);
	IF(0x0C09BBA6u); T = (s32)r0 >= 0;  /* 0C09BBA6 cmp/pz Rn */
	if (T) { UPD(0x0C09BBC4u, 4); goto L_0C09BBC4; }  /* 0C09BBA8 bt */
L_0C09BBAA: BLKS(0x0C09BBAAu);
	r6 = 0xB4u; UPD(0x0C09BBACu, 1);  /* 0C09BBAA mov.w @(disp,pc),Rn */
	IF(0x0C09BBACu); MACL = r9 * r6;  /* 0C09BBAC mul.l Rm,Rn */
	r11 = 0xC286578u; UPD(0x0C09BBB0u, 3);  /* 0C09BBAE mov.l @(disp,pc),Rn */
	IF(0x0C09BBB0u); r8 = MACL;  /* 0C09BBB0 sts macl,Rn */
	r10 = 0xA0u; UPD(0x0C09BBB4u, 2);  /* 0C09BBB2 mov.w @(disp,pc),Rn */
	r8 += r11;  /* 0C09BBB4 add Rm,Rn */
	r10 += r8;  /* 0C09BBB6 add Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r10); UPD(0x0C09BBBAu, 3);  /* 0C09BBB8 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C09BBBA add #imm,Rn */
	r0 = r4 & 0xFF;  /* 0C09BBBC extu.b Rm,Rn */
	T = r0 == 0x4u;  /* 0C09BBBE cmp/eq #imm,r0 */
	{ u32 c_ = T; W8(r10, r4); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C09BBC8u, 6); goto L_0C09BBC8; } UPD(0x0C09BBC4u, 1); goto L_0C09BBC4; }  /* 0C09BBC0 bt/s */
L_0C09BBC4: BLKS(0x0C09BBC4u);
	{ IF(0x0C09BBC6u); ; /* slot nop */ UPD(0x0C09B85Au, 3); goto L_0C09B85A; }  /* 0C09BBC4 bra */
L_0C09BBC8: BLKS(0x0C09BBC8u);
	r0 = 0xB0u; UPD(0x0C09BBCAu, 1);  /* 0C09BBC8 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C09BBCA add #imm,Rn */
	IF(0x0C09BBCCu); r3 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C09BBCEu, 2);  /* 0C09BBCC mov.b @(r0,Rm),Rn */
	r5 = 0x14u;  /* 0C09BBCE mov #imm,Rn */
	r7 = r3 & 0xFF;  /* 0C09BBD0 extu.b Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C09BBD4u, 3);  /* 0C09BBD2 mov.l Rm,@(disp,Rn) */
	W32(r15, r7); UPD(0x0C09BBD6u, 1);  /* 0C09BBD4 mov.l Rm,@Rn */
	r5 = 0x5u;  /* 0C09BBD6 mov #imm,Rn */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C09BA40u, 4); goto L_0C09BA40; }  /* 0C09BBD8 bra */
}

void blk_f_0C09BC10(sh3_t *c)
{
	LOCALS;
	goto L_0C09BC10;
L_0C09B838: BLKS(0x0C09B838u);
	r4 = 0xB4u; UPD(0x0C09B83Au, 1);  /* 0C09B838 mov.w @(disp,pc),Rn */
	IF(0x0C09B83Au); MACL = r9 * r4;  /* 0C09B83A mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C09B83Eu, 3);  /* 0C09B83C mov.l @(disp,pc),Rn */
	IF(0x0C09B83Eu); r4 = MACL;  /* 0C09B83E sts macl,Rn */
	r4 += r2;  /* 0C09B840 add Rm,Rn */
	r9 = R32(r4); UPD(0x0C09B844u, 3);  /* 0C09B842 mov.l @Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C09B844 tst Rm,Rn */
	if (!T) { UPD(0x0C09B85Au, 4); goto L_0C09B85A; }  /* 0C09B846 bf */
L_0C09B848: BLKS(0x0C09B848u);
	r4 += 0x40u;  /* 0C09B848 add #imm,Rn */
	r4 = R32(r4); UPD(0x0C09B84Cu, 2);  /* 0C09B84A mov.l @Rm,Rn */
	r8 = 0x1869Fu; UPD(0x0C09B84Eu, 1);  /* 0C09B84C mov.l @(disp,pc),Rn */
	T = r4 > r8;  /* 0C09B84E cmp/hi Rm,Rn */
	if (T) { UPD(0x0C09B85Au, 4); goto L_0C09B85A; }  /* 0C09B850 bt */
L_0C09B852: BLKS(0x0C09B852u);
	r10 = 0xC175064u; UPD(0x0C09B854u, 1);  /* 0C09B852 mov.l @(disp,pc),Rn */
	r0 = R32(r10); UPD(0x0C09B856u, 1);  /* 0C09B854 mov.l @Rm,Rn */
	T = r0 == 0x3u;  /* 0C09B856 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C09B870u, 4); goto L_0C09B870; }  /* 0C09B858 bt */
L_0C09B85A: BLKS(0x0C09B85Au);
	r15 = r14;  /* 0C09B85A mov Rm,Rn */
	IF(0x0C09B85Cu); PR = R32(r15); r15 += 4; UPD(0x0C09B85Eu, 2);  /* 0C09B85C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09B860u, 1);  /* 0C09B85E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09B862u, 1);  /* 0C09B860 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09B864u, 1);  /* 0C09B862 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09B866u, 1);  /* 0C09B864 mov.l @Rm+,Rn */
	IF(0x0C09B866u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C09B866 rts */
L_0C09B870: BLKS(0x0C09B870u);
	r7 = 0x4u;  /* 0C09B870 mov #imm,Rn */
	IF(0x0C09B872u); ARG0(0x447Du); { s32 s_ = (s32)r7; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = 0; else r4 >>= ((~s_ & 31) + 1); }  /* 0C09B872 shld Rm,Rn */
	r5 = 0x40000u; UPD(0x0C09B876u, 3);  /* 0C09B874 mov.l @(disp,pc),Rn */
	r6 = 0xC071C90u; UPD(0x0C09B878u, 1);  /* 0C09B876 mov.l @(disp,pc),Rn */
	r4 += r5;  /* 0C09B878 add Rm,Rn */
	r15 = r14;  /* 0C09B87A mov Rm,Rn */
	IF(0x0C09B87Cu); PR = R32(r15); r15 += 4; UPD(0x0C09B87Eu, 3);  /* 0C09B87C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09B880u, 1);  /* 0C09B87E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09B882u, 1);  /* 0C09B880 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09B884u, 1);  /* 0C09B882 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09B886u, 1);  /* 0C09B884 mov.l @Rm+,Rn */
	IF(0x0C09B886u); { u32 tv_ = r6; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C071C90u: TAIL(blk_f_0C071C90); default: JUMPD(tv_); } }  /* 0C09B886 jmp @Rn */
L_0C09BA40: BLKS(0x0C09BA40u);
	r6 = R32(r8 + 0x24u); UPD(0x0C09BA42u, 1);  /* 0C09BA40 mov.l @(disp,Rm),Rn */
	r7 = R32(r8 + 0x28u); UPD(0x0C09BA44u, 1);  /* 0C09BA42 mov.l @(disp,Rm),Rn */
	r0 = 0xC0BD6F0u; UPD(0x0C09BA46u, 1);  /* 0C09BA44 mov.l @(disp,pc),Rn */
	IF(0x0C09BA46u); { u32 t_ = r0; PR = 0x0C09BA4Au; IF(0x0C09BA48u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C09BA4Au); }  /* 0C09BA46 jsr @Rn */
L_0C09BA4A: BLKS(0x0C09BA4Au);
	r1 = 0x0u;  /* 0C09BA4A mov #imm,Rn */
	W32(r8, r1); UPD(0x0C09BA4Eu, 2);  /* 0C09BA4C mov.l Rm,@Rn */
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C09B838u, 3); goto L_0C09B838; }  /* 0C09BA4E bra */
L_0C09BC10: BLKS(0x0C09BC10u);
	r8 = 0xB4u; UPD(0x0C09BC12u, 1);  /* 0C09BC10 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C09BC12 add #imm,Rn */
	IF(0x0C09BC14u); MACL = r9 * r8;  /* 0C09BC14 mul.l Rm,Rn */
	r11 = 0xC286578u; UPD(0x0C09BC18u, 4);  /* 0C09BC16 mov.l @(disp,pc),Rn */
	r5 = 0x2u;  /* 0C09BC18 mov #imm,Rn */
	r0 = 0xB0u; UPD(0x0C09BC1Cu, 2);  /* 0C09BC1A mov.w @(disp,pc),Rn */
	IF(0x0C09BC1Cu); r8 = MACL;  /* 0C09BC1C sts macl,Rn */
	r8 += r11;  /* 0C09BC1E add Rm,Rn */
	IF(0x0C09BC20u); r10 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C09BC22u, 3);  /* 0C09BC20 mov.b @(r0,Rm),Rn */
	r4 = r10 & 0xFF;  /* 0C09BC22 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C09BC26u, 2);  /* 0C09BC24 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C09BC26 add #imm,Rn */
	IF(0x0C09BC28u); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C09BC2Au, 2);  /* 0C09BC28 mov.b @(r0,Rm),Rn */
	r0 = r2 & 0xFF;  /* 0C09BC2A extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C09BC2Eu, 2);  /* 0C09BC2C mov.l Rm,@(disp,Rn) */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C09BA40u, 3); goto L_0C09BA40; }  /* 0C09BC2E bra */
}

void blk_f_0C09BC40(sh3_t *c)
{
	LOCALS;
	goto L_0C09BC40;
L_0C09B838: BLKS(0x0C09B838u);
	r4 = 0xB4u; UPD(0x0C09B83Au, 1);  /* 0C09B838 mov.w @(disp,pc),Rn */
	IF(0x0C09B83Au); MACL = r9 * r4;  /* 0C09B83A mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C09B83Eu, 3);  /* 0C09B83C mov.l @(disp,pc),Rn */
	IF(0x0C09B83Eu); r4 = MACL;  /* 0C09B83E sts macl,Rn */
	r4 += r2;  /* 0C09B840 add Rm,Rn */
	r9 = R32(r4); UPD(0x0C09B844u, 3);  /* 0C09B842 mov.l @Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C09B844 tst Rm,Rn */
	if (!T) { UPD(0x0C09B85Au, 4); goto L_0C09B85A; }  /* 0C09B846 bf */
L_0C09B848: BLKS(0x0C09B848u);
	r4 += 0x40u;  /* 0C09B848 add #imm,Rn */
	r4 = R32(r4); UPD(0x0C09B84Cu, 2);  /* 0C09B84A mov.l @Rm,Rn */
	r8 = 0x1869Fu; UPD(0x0C09B84Eu, 1);  /* 0C09B84C mov.l @(disp,pc),Rn */
	T = r4 > r8;  /* 0C09B84E cmp/hi Rm,Rn */
	if (T) { UPD(0x0C09B85Au, 4); goto L_0C09B85A; }  /* 0C09B850 bt */
L_0C09B852: BLKS(0x0C09B852u);
	r10 = 0xC175064u; UPD(0x0C09B854u, 1);  /* 0C09B852 mov.l @(disp,pc),Rn */
	r0 = R32(r10); UPD(0x0C09B856u, 1);  /* 0C09B854 mov.l @Rm,Rn */
	T = r0 == 0x3u;  /* 0C09B856 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C09B870u, 4); goto L_0C09B870; }  /* 0C09B858 bt */
L_0C09B85A: BLKS(0x0C09B85Au);
	r15 = r14;  /* 0C09B85A mov Rm,Rn */
	IF(0x0C09B85Cu); PR = R32(r15); r15 += 4; UPD(0x0C09B85Eu, 2);  /* 0C09B85C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09B860u, 1);  /* 0C09B85E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09B862u, 1);  /* 0C09B860 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09B864u, 1);  /* 0C09B862 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09B866u, 1);  /* 0C09B864 mov.l @Rm+,Rn */
	IF(0x0C09B866u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C09B866 rts */
L_0C09B870: BLKS(0x0C09B870u);
	r7 = 0x4u;  /* 0C09B870 mov #imm,Rn */
	IF(0x0C09B872u); ARG0(0x447Du); { s32 s_ = (s32)r7; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = 0; else r4 >>= ((~s_ & 31) + 1); }  /* 0C09B872 shld Rm,Rn */
	r5 = 0x40000u; UPD(0x0C09B876u, 3);  /* 0C09B874 mov.l @(disp,pc),Rn */
	r6 = 0xC071C90u; UPD(0x0C09B878u, 1);  /* 0C09B876 mov.l @(disp,pc),Rn */
	r4 += r5;  /* 0C09B878 add Rm,Rn */
	r15 = r14;  /* 0C09B87A mov Rm,Rn */
	IF(0x0C09B87Cu); PR = R32(r15); r15 += 4; UPD(0x0C09B87Eu, 3);  /* 0C09B87C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09B880u, 1);  /* 0C09B87E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09B882u, 1);  /* 0C09B880 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09B884u, 1);  /* 0C09B882 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09B886u, 1);  /* 0C09B884 mov.l @Rm+,Rn */
	IF(0x0C09B886u); { u32 tv_ = r6; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C071C90u: TAIL(blk_f_0C071C90); default: JUMPD(tv_); } }  /* 0C09B886 jmp @Rn */
L_0C09B920: BLKS(0x0C09B920u);
	r5 = 0xB4u; UPD(0x0C09B922u, 1);  /* 0C09B920 mov.w @(disp,pc),Rn */
	r6 = 0x0u;  /* 0C09B922 mov #imm,Rn */
	IF(0x0C09B924u); MACL = r9 * r5;  /* 0C09B924 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C09B928u, 4);  /* 0C09B926 mov.l @(disp,pc),Rn */
	IF(0x0C09B928u); r0 = MACL;  /* 0C09B928 sts macl,Rn */
	IF(0x0C09B92Au); W32(r0 + r9, r6); UPD(0x0C09B92Cu, 2);  /* 0C09B92A mov.l Rm,@(r0,Rn) */
	{ IF(0x0C09B92Eu); ; /* slot nop */ UPD(0x0C09B85Au, 3); goto L_0C09B85A; }  /* 0C09B92C bra */
L_0C09BC40: BLKS(0x0C09BC40u);
	r10 = 0xC0A8CA0u; UPD(0x0C09BC42u, 1);  /* 0C09BC40 mov.l @(disp,pc),Rn */
	IF(0x0C09BC42u); { u32 t_ = r10; PR = 0x0C09BC46u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C09BC46u); }  /* 0C09BC42 jsr @Rn */
L_0C09BC46: BLKS(0x0C09BC46u);
	IF(0x0C09BC46u); T = (s32)r0 >= 0;  /* 0C09BC46 cmp/pz Rn */
	if (T) { UPD(0x0C09BC4Eu, 4); goto L_0C09BC4E; }  /* 0C09BC48 bt */
L_0C09BC4A: BLKS(0x0C09BC4Au);
	{ IF(0x0C09BC4Cu); ; /* slot nop */ UPD(0x0C09B920u, 3); goto L_0C09B920; }  /* 0C09BC4A bra */
L_0C09BC4E: BLKS(0x0C09BC4Eu);
	r11 = 0xB4u; UPD(0x0C09BC50u, 1);  /* 0C09BC4E mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C09BC50 add #imm,Rn */
	IF(0x0C09BC52u); MACL = r9 * r11;  /* 0C09BC52 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C09BC56u, 4);  /* 0C09BC54 mov.l @(disp,pc),Rn */
	IF(0x0C09BC56u); r11 = MACL;  /* 0C09BC56 sts macl,Rn */
	r11 += r0;  /* 0C09BC58 add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C09BC5Cu, 3);  /* 0C09BC5A mov.w @(disp,pc),Rn */
	IF(0x0C09BC5Cu); r3 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C09BC5Eu, 1);  /* 0C09BC5C mov.b @(r0,Rm),Rn */
	r7 = r3 & 0xFF;  /* 0C09BC5E extu.b Rm,Rn */
	W32(r15, r7); UPD(0x0C09BC62u, 2);  /* 0C09BC60 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C09BC62 add #imm,Rn */
	IF(0x0C09BC64u); r5 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C09BC66u, 2);  /* 0C09BC64 mov.b @(r0,Rm),Rn */
	r6 = r5 & 0xFF;  /* 0C09BC66 extu.b Rm,Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C09BC6Au, 2);  /* 0C09BC68 mov.l Rm,@(disp,Rn) */
	r5 = 0x2u;  /* 0C09BC6A mov #imm,Rn */
	r10 = 0xC0BFE70u; UPD(0x0C09BC6Eu, 2);  /* 0C09BC6C mov.l @(disp,pc),Rn */
	r4 = R32(r11); UPD(0x0C09BC70u, 1);  /* 0C09BC6E mov.l @Rm,Rn */
	r7 = R32(r11 + 0x28u); UPD(0x0C09BC72u, 1);  /* 0C09BC70 mov.l @(disp,Rm),Rn */
	IF(0x0C09BC72u); { u32 t_ = r10; PR = 0x0C09BC76u; r6 = R32(r11 + 0x24u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BFE70, 0x0C0BFE70u, 0x0C09BC76u); }  /* 0C09BC72 jsr @Rn */
L_0C09BC76: BLKS(0x0C09BC76u);
	r8 = R32(r11); UPD(0x0C09BC78u, 1);  /* 0C09BC76 mov.l @Rm,Rn */
	r4 = 0x21u;  /* 0C09BC78 mov #imm,Rn */
	r1 = 0xECFFFFFFu; UPD(0x0C09BC7Cu, 2);  /* 0C09BC7A mov.l @(disp,pc),Rn */
	r2 = 0x7u;  /* 0C09BC7C mov #imm,Rn */
	r0 = 0xC0A9AE0u; UPD(0x0C09BC80u, 2);  /* 0C09BC7E mov.l @(disp,pc),Rn */
	r8 &= r1;  /* 0C09BC80 and Rm,Rn */
	W32(r11 + 0x8u, r4); UPD(0x0C09BC84u, 2);  /* 0C09BC82 mov.l Rm,@(disp,Rn) */
	r15 += 0x8u;  /* 0C09BC84 add #imm,Rn */
	W32(r11 + 0xCu, r2); UPD(0x0C09BC88u, 2);  /* 0C09BC86 mov.l Rm,@(disp,Rn) */
	r4 = r9;  /* 0C09BC88 mov Rm,Rn */
	IF(0x0C09BC8Au); { u32 t_ = r0; PR = 0x0C09BC8Eu; W32(r11, r8); /* slot mov.l Rm,@Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C09BC8Eu); }  /* 0C09BC8A jsr @Rn */
L_0C09BC8E: BLKS(0x0C09BC8Eu);
	r3 = 0xC0A8B10u; UPD(0x0C09BC90u, 1);  /* 0C09BC8E mov.l @(disp,pc),Rn */
	IF(0x0C09BC90u); { u32 t_ = r3; PR = 0x0C09BC94u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B10, 0x0C0A8B10u, 0x0C09BC94u); }  /* 0C09BC90 jsr @Rn */
L_0C09BC94: BLKS(0x0C09BC94u);
	r0 = 0x99u; UPD(0x0C09BC96u, 1);  /* 0C09BC94 mov.w @(disp,pc),Rn */
	r7 = 0x0u;  /* 0C09BC96 mov #imm,Rn */
	{ IF(0x0C09BC9Au); W8(r0 + r11, r7); /* slot mov.b Rm,@(r0,Rn) */ UPD(0x0C09B838u, 4); goto L_0C09B838; }  /* 0C09BC98 bra */
}

/* FUN_0c09bcc0 */
void blk_f_0C09BCC0(sh3_t *c)
{
	LOCALS;
L_0C09BCC0: BLKS(0x0C09BCC0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C09BCC2u, 1);  /* 0C09BCC0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C09BCC4u, 1);  /* 0C09BCC2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C09BCC6u, 1);  /* 0C09BCC4 mov.l Rm,@-Rn */
	r8 = 0xB4u; UPD(0x0C09BCC8u, 1);  /* 0C09BCC6 mov.w @(disp,pc),Rn */
	r10 = (u32)(s32)(s16)r4;  /* 0C09BCC8 exts.w Rm,Rn */
	IF(0x0C09BCCAu); MACL = r10 * r8;  /* 0C09BCCA mul.l Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C09BCCEu, 4);  /* 0C09BCCC mov.l Rm,@-Rn */
	r7 = 0xC286578u; UPD(0x0C09BCD0u, 1);  /* 0C09BCCE mov.l @(disp,pc),Rn */
	IF(0x0C09BCD0u); r0 = MACL;  /* 0C09BCD0 sts macl,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C09BCD4u, 2);  /* 0C09BCD2 mov.l Rm,@-Rn */
	r0 += r7;  /* 0C09BCD4 add Rm,Rn */
	IF(0x0C09BCD6u); r15 -= 4; W32(r15, PR); UPD(0x0C09BCD8u, 2);  /* 0C09BCD6 sts.l pr,@-Rn */
	r3 = r0;  /* 0C09BCD8 mov Rm,Rn */
	r3 += 0x50u;  /* 0C09BCDA add #imm,Rn */
	r6 = R32(r3); UPD(0x0C09BCDEu, 3);  /* 0C09BCDC mov.l @Rm,Rn */
	r14 = r15;  /* 0C09BCDE mov Rm,Rn */
	r6 += 0x1u;  /* 0C09BCE0 add #imm,Rn */
	r4 = 0xA4u; UPD(0x0C09BCE4u, 3);  /* 0C09BCE2 mov.w @(disp,pc),Rn */
	W32(r3, r6); UPD(0x0C09BCE6u, 1);  /* 0C09BCE4 mov.l Rm,@Rn */
	r4 += r0;  /* 0C09BCE6 add Rm,Rn */
	r5 = r4;  /* 0C09BCE8 mov Rm,Rn */
	r6 = 0x9Fu; UPD(0x0C09BCECu, 3);  /* 0C09BCEA mov.w @(disp,pc),Rn */
	r4 += 0x1u;  /* 0C09BCEC add #imm,Rn */
	r5 += 0x2u;  /* 0C09BCEE add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r4); UPD(0x0C09BCF2u, 3);  /* 0C09BCF0 mov.b @Rm,Rn */
	r6 += r0;  /* 0C09BCF2 add Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r5); UPD(0x0C09BCF6u, 2);  /* 0C09BCF4 mov.b @Rm,Rn */
	r4 += 0x2u;  /* 0C09BCF6 add #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r6); UPD(0x0C09BCFAu, 2);  /* 0C09BCF8 mov.b @Rm,Rn */
	r1 &= r2;  /* 0C09BCFA and Rm,Rn */
	r2 = r3 & 0xFF;  /* 0C09BCFC extu.b Rm,Rn */
	r0 = 0x4u;  /* 0C09BCFE mov #imm,Rn */
	T = r2 > r0;  /* 0C09BD00 cmp/hi Rm,Rn */
	{ u32 c_ = !T; W8(r4, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C09BD0Au, 7); goto L_0C09BD0A; } UPD(0x0C09BD06u, 1); goto L_0C09BD06; }  /* 0C09BD02 bf/s */
L_0C09BD06: BLKS(0x0C09BD06u);
	{ r1 = r3; /* slot mov Rm,Rn */ UPD(0x0C09C990u, 3); goto L_0C09C990; }  /* 0C09BD06 bra */
L_0C09BD0A: BLKS(0x0C09BD0Au);
	r0 = 0xC09BD20u;  /* 0C09BD0A mova @(disp,pc),r0 */
	r2 += r2;  /* 0C09BD0C add Rm,Rn */
	IF(0x0C09BD0Eu); r9 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C09BD10u, 3);  /* 0C09BD0E mov.w @(r0,Rm),Rn */
	IF(0x0C09BD10u); { u32 tv_ = (r9 + 0x0C09BD14u); u32 t_ = PHYS(tv_); IF(0x0C09BD12u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C09BD30u: goto L_0C09BD30; case 0x0C09BDB0u: goto L_0C09BDB0; case 0x0C09C1A0u: goto L_0C09C1A0; case 0x0C09C5F0u: goto L_0C09C5F0; case 0x0C09C8E0u: goto L_0C09C8E0; default: JUMPD(tv_); } }  /* 0C09BD10 braf Rn */
L_0C09BD30: BLKS(0x0C09BD30u);
	r0 = 0xB4u; UPD(0x0C09BD32u, 1);  /* 0C09BD30 mov.w @(disp,pc),Rn */
	IF(0x0C09BD32u); MACL = r10 * r0;  /* 0C09BD32 mul.l Rm,Rn */
	r11 = 0xC286578u; UPD(0x0C09BD36u, 3);  /* 0C09BD34 mov.l @(disp,pc),Rn */
	r0 = 0x8Cu; UPD(0x0C09BD38u, 1);  /* 0C09BD36 mov.w @(disp,pc),Rn */
	IF(0x0C09BD38u); r3 = MACL;  /* 0C09BD38 sts macl,Rn */
	r3 += r11;  /* 0C09BD3A add Rm,Rn */
	IF(0x0C09BD3Cu); r7 = R32(r0 + r3); UPD(0x0C09BD3Eu, 3);  /* 0C09BD3C mov.l @(r0,Rm),Rn */
	r10 = 0xFFFFF800u; UPD(0x0C09BD40u, 1);  /* 0C09BD3E mov.w @(disp,pc),Rn */
	r7 += r10;  /* 0C09BD40 add Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C09BD42 tst Rm,Rn */
	{ u32 c_ = !T; IF(0x0C09BD46u); W32(r0 + r3, r7); /* slot mov.l Rm,@(r0,Rn) */ if (c_) { UPD(0x0C09BD84u, 5); goto L_0C09BD84; } UPD(0x0C09BD48u, 1); goto L_0C09BD48; }  /* 0C09BD44 bf/s */
L_0C09BD48: BLKS(0x0C09BD48u);
	r3 += 0x50u;  /* 0C09BD48 add #imm,Rn */
	W32(r3, r7); UPD(0x0C09BD4Cu, 2);  /* 0C09BD4A mov.l Rm,@Rn */
	r0 += 0x13u;  /* 0C09BD4C add #imm,Rn */
	r3 += 0xFFFFFFB0u;  /* 0C09BD4E add #imm,Rn */
	IF(0x0C09BD50u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C09BD52u, 3);  /* 0C09BD50 mov.b @(r0,Rm),Rn */
	r4 = 0x3u;  /* 0C09BD52 mov #imm,Rn */
	r2 += 0x1u;  /* 0C09BD54 add #imm,Rn */
	IF(0x0C09BD56u); W8(r0 + r3, r2); UPD(0x0C09BD58u, 3);  /* 0C09BD56 mov.b Rm,@(r0,Rn) */
	r0 += 0x1u;  /* 0C09BD58 add #imm,Rn */
	IF(0x0C09BD5Au); W8(r0 + r3, r7); UPD(0x0C09BD5Cu, 2);  /* 0C09BD5A mov.b Rm,@(r0,Rn) */
	r3 += 0x3Cu;  /* 0C09BD5C add #imm,Rn */
	r2 = (u32)(s32)(s16)R16(r3); UPD(0x0C09BD60u, 2);  /* 0C09BD5E mov.w @Rm,Rn */
	MACL = (u32)((s32)(s16)r2 * (s32)(s16)r4);  /* 0C09BD60 muls.w Rm,Rn */
	IF(0x0C09BD62u); r3 = MACL;  /* 0C09BD62 sts macl,Rn */
	IF(0x0C09BD64u); T = (s32)r3 >= 0;  /* 0C09BD64 cmp/pz Rn */
	if (!T) { UPD(0x0C09BDA0u, 7); goto L_0C09BDA0; }  /* 0C09BD66 bf */
L_0C09BD68: BLKS(0x0C09BD68u);
	r8 = 0xC207542u; UPD(0x0C09BD6Au, 1);  /* 0C09BD68 mov.l @(disp,pc),Rn */
	IF(0x0C09BD6Au); r3 >>= 2;  /* 0C09BD6A shlr2 Rn */
	W16(r8, r3); UPD(0x0C09BD6Eu, 2);  /* 0C09BD6C mov.w Rm,@Rn */
	r3 = (u32)(s32)(s16)r2;  /* 0C09BD6E exts.w Rm,Rn */
	r6 = r3;  /* 0C09BD70 mov Rm,Rn */
	IF(0x0C09BD72u); T = r6 >> 31; r6 = (r6 << 1) | T;  /* 0C09BD72 rotl Rn */
	IF(0x0C09BD74u); r1 = T;  /* 0C09BD74 movt Rn */
	r3 += r1;  /* 0C09BD76 add Rm,Rn */
	r5 = 0xC207544u; UPD(0x0C09BD7Au, 6);  /* 0C09BD78 mov.l @(disp,pc),Rn */
	IF(0x0C09BD7Au); T = r3 & 1; r3 = (u32)((s32)r3 >> 1);  /* 0C09BD7A shar Rn */
	W16(r5, r3); UPD(0x0C09BD7Eu, 2);  /* 0C09BD7C mov.w Rm,@Rn */
	r1 = 0xC207546u; UPD(0x0C09BD80u, 1);  /* 0C09BD7E mov.l @(disp,pc),Rn */
L_0C09BD80: BLKS(0x0C09BD80u);
	W8(r1, r7); UPD(0x0C09BD82u, 1);  /* 0C09BD80 mov.b Rm,@Rn */
	IF(0x0C09BD82u); ;  /* 0C09BD82 nop */
	UPD(0x0C09BD84u, 1);
L_0C09BD84: BLKS(0x0C09BD84u);
	r15 = r14;  /* 0C09BD84 mov Rm,Rn */
	IF(0x0C09BD86u); PR = R32(r15); r15 += 4; UPD(0x0C09BD88u, 2);  /* 0C09BD86 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09BD8Au, 1);  /* 0C09BD88 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09BD8Cu, 1);  /* 0C09BD8A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09BD8Eu, 1);  /* 0C09BD8C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09BD90u, 1);  /* 0C09BD8E mov.l @Rm+,Rn */
	IF(0x0C09BD90u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C09BD90 rts */
L_0C09BDA0: BLKS(0x0C09BDA0u);
	{ r3 += 0x3u; /* slot add #imm,Rn */ UPD(0x0C09BD68u, 3); goto L_0C09BD68; }  /* 0C09BDA0 bra */
L_0C09BDB0: BLKS(0x0C09BDB0u);
	r4 = 0xB4u; UPD(0x0C09BDB2u, 1);  /* 0C09BDB0 mov.w @(disp,pc),Rn */
	r7 = 0xFu;  /* 0C09BDB2 mov #imm,Rn */
	IF(0x0C09BDB4u); MACL = r10 * r4;  /* 0C09BDB4 mul.l Rm,Rn */
	r11 = 0xC286578u; UPD(0x0C09BDB8u, 4);  /* 0C09BDB6 mov.l @(disp,pc),Rn */
	IF(0x0C09BDB8u); r0 = MACL;  /* 0C09BDB8 sts macl,Rn */
	r11 += r0;  /* 0C09BDBA add Rm,Rn */
	r0 = 0xA0u; UPD(0x0C09BDBEu, 3);  /* 0C09BDBC mov.w @(disp,pc),Rn */
	IF(0x0C09BDBEu); r9 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C09BDC0u, 1);  /* 0C09BDBE mov.b @(r0,Rm),Rn */
	r2 = r9 & 0xFF;  /* 0C09BDC0 extu.b Rm,Rn */
	T = r2 > r7;  /* 0C09BDC2 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C09BD84u, 5); goto L_0C09BD84; }  /* 0C09BDC4 bt */
L_0C09BDC6: BLKS(0x0C09BDC6u);
	r0 = 0xC09BDE8u;  /* 0C09BDC6 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C09BDC8 add Rm,Rn */
	IF(0x0C09BDCAu); r5 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C09BDCCu, 3);  /* 0C09BDCA mov.w @(r0,Rm),Rn */
	IF(0x0C09BDCCu); { u32 tv_ = (r5 + 0x0C09BDD0u); u32 t_ = PHYS(tv_); IF(0x0C09BDCEu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C09BE10u: goto L_0C09BE10; case 0x0C09BE50u: goto L_0C09BE50; case 0x0C09BEA0u: goto L_0C09BEA0; case 0x0C09BEC0u: goto L_0C09BEC0; case 0x0C09BF30u: goto L_0C09BF30; case 0x0C09BF52u: goto L_0C09BF52; case 0x0C09BFC0u: goto L_0C09BFC0; case 0x0C09C000u: goto L_0C09C000; case 0x0C09C020u: goto L_0C09C020; case 0x0C09C060u: goto L_0C09C060; case 0x0C09C120u: goto L_0C09C120; default: JUMPD(tv_); } }  /* 0C09BDCC braf Rn */
L_0C09BE10: BLKS(0x0C09BE10u);
	r6 = 0xB4u; UPD(0x0C09BE12u, 1);  /* 0C09BE10 mov.w @(disp,pc),Rn */
	IF(0x0C09BE12u); MACL = r10 * r6;  /* 0C09BE12 mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C09BE16u, 3);  /* 0C09BE14 mov.l @(disp,pc),Rn */
	IF(0x0C09BE16u); r8 = MACL;  /* 0C09BE16 sts macl,Rn */
	r10 = 0xA0u; UPD(0x0C09BE1Au, 2);  /* 0C09BE18 mov.w @(disp,pc),Rn */
	r8 += r3;  /* 0C09BE1A add Rm,Rn */
	r9 = 0xC062780u; UPD(0x0C09BE1Eu, 2);  /* 0C09BE1C mov.l @(disp,pc),Rn */
	r8 += r10;  /* 0C09BE1E add Rm,Rn */
	r10 = 0xC1CB74Cu; UPD(0x0C09BE22u, 2);  /* 0C09BE20 mov.l @(disp,pc),Rn */
	IF(0x0C09BE22u); { u32 t_ = r9; PR = 0x0C09BE26u; r4 = 0x3u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C09BE26u); }  /* 0C09BE22 jsr @Rn */
L_0C09BE26: BLKS(0x0C09BE26u);
	IF(0x0C09BE26u); r2 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C09BE28u, 1);  /* 0C09BE26 mov.b @(r0,Rm),Rn */
	r8 += 0x1u;  /* 0C09BE28 add #imm,Rn */
	W8(r8, r2); UPD(0x0C09BE2Cu, 2);  /* 0C09BE2A mov.b Rm,@Rn */
	r4 = 0x3u;  /* 0C09BE2C mov #imm,Rn */
	r8 += 0x1u;  /* 0C09BE2E add #imm,Rn */
	UPD(0x0C09BE30u, 2);
L_0C09BE30: BLKS(0x0C09BE30u);
	IF(0x0C09BE30u); { u32 t_ = r9; PR = 0x0C09BE34u; IF(0x0C09BE32u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C09BE34u); }  /* 0C09BE30 jsr @Rn */
L_0C09BE34: BLKS(0x0C09BE34u);
	IF(0x0C09BE34u); r11 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C09BE36u, 1);  /* 0C09BE34 mov.b @(r0,Rm),Rn */
	W8(r8, r11); UPD(0x0C09BE38u, 1);  /* 0C09BE36 mov.b Rm,@Rn */
L_0C09BE38: BLKS(0x0C09BE38u);
	r8 += 0xFFFFFFFEu;  /* 0C09BE38 add #imm,Rn */
	UPD(0x0C09BE3Au, 1);
L_0C09BE3A: BLKS(0x0C09BE3Au);
	r7 = (u32)(s32)(s8)R8(r8); UPD(0x0C09BE3Cu, 1);  /* 0C09BE3A mov.b @Rm,Rn */
	r7 += 0x1u;  /* 0C09BE3C add #imm,Rn */
	{ W8(r8, r7); /* slot mov.b Rm,@Rn */ UPD(0x0C09BD84u, 4); goto L_0C09BD84; }  /* 0C09BE3E bra */
L_0C09BE50: BLKS(0x0C09BE50u);
	r8 = 0xB4u; UPD(0x0C09BE52u, 1);  /* 0C09BE50 mov.w @(disp,pc),Rn */
	r4 = 0x40u;  /* 0C09BE52 mov #imm,Rn */
	IF(0x0C09BE54u); MACL = r10 * r8;  /* 0C09BE54 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C09BE58u, 4);  /* 0C09BE56 mov.l @(disp,pc),Rn */
	r10 = 0xC062780u; UPD(0x0C09BE5Au, 1);  /* 0C09BE58 mov.l @(disp,pc),Rn */
	IF(0x0C09BE5Au); r8 = MACL;  /* 0C09BE5A sts macl,Rn */
	IF(0x0C09BE5Cu); { u32 t_ = r10; PR = 0x0C09BE60u; r8 += r0; /* slot add Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C09BE60u); }  /* 0C09BE5C jsr @Rn */
L_0C09BE60: BLKS(0x0C09BE60u);
	r4 = 0xD0u; UPD(0x0C09BE62u, 1);  /* 0C09BE60 mov.w @(disp,pc),Rn */
	r11 = r8;  /* 0C09BE62 mov Rm,Rn */
	r0 += r4;  /* 0C09BE64 add Rm,Rn */
	r11 += 0x5Cu;  /* 0C09BE66 add #imm,Rn */
	r9 = 0xA0u; UPD(0x0C09BE6Au, 4);  /* 0C09BE68 mov.w @(disp,pc),Rn */
	IF(0x0C09BE6Au); r0 <<= 16;  /* 0C09BE6A shll16 Rn */
	W32(r11, r0); UPD(0x0C09BE6Eu, 2);  /* 0C09BE6C mov.l Rm,@Rn */
	r8 += 0x60u;  /* 0C09BE6E add #imm,Rn */
	IF(0x0C09BE70u); { u32 t_ = r10; PR = 0x0C09BE74u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C09BE74u); }  /* 0C09BE70 jsr @Rn */
L_0C09BE74: BLKS(0x0C09BE74u);
	r7 = 0x1B0u; UPD(0x0C09BE76u, 1);  /* 0C09BE74 mov.w @(disp,pc),Rn */
	r0 += r7;  /* 0C09BE76 add Rm,Rn */
	IF(0x0C09BE78u); r0 <<= 16;  /* 0C09BE78 shll16 Rn */
	W32(r8, r0); UPD(0x0C09BE7Cu, 3);  /* 0C09BE7A mov.l Rm,@Rn */
	r7 = r0;  /* 0C09BE7C mov Rm,Rn */
	r6 = R32(r11); UPD(0x0C09BE80u, 2);  /* 0C09BE7E mov.l @Rm,Rn */
	r8 += 0xFFFFFFA0u;  /* 0C09BE80 add #imm,Rn */
	r11 = 0xC068E60u; UPD(0x0C09BE84u, 2);  /* 0C09BE82 mov.l @(disp,pc),Rn */
	r9 += r8;  /* 0C09BE84 add Rm,Rn */
	r10 = 0x86u; UPD(0x0C09BE88u, 2);  /* 0C09BE86 mov.w @(disp,pc),Rn */
	r4 = R32(r8 + 0x24u); UPD(0x0C09BE8Au, 1);  /* 0C09BE88 mov.l @(disp,Rm),Rn */
	r10 += r8;  /* 0C09BE8A add Rm,Rn */
	IF(0x0C09BE8Cu); { u32 t_ = r11; PR = 0x0C09BE90u; r5 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C068E60, 0x0C068E60u, 0x0C09BE90u); }  /* 0C09BE8C jsr @Rn */
L_0C09BE90: BLKS(0x0C09BE90u);
	r8 = (u32)(s32)(s8)R8(r9); UPD(0x0C09BE92u, 1);  /* 0C09BE90 mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C09BE92 add #imm,Rn */
	W16(r10, r0); UPD(0x0C09BE96u, 2);  /* 0C09BE94 mov.w Rm,@Rn */
	{ W8(r9, r8); /* slot mov.b Rm,@Rn */ UPD(0x0C09BD84u, 3); goto L_0C09BD84; }  /* 0C09BE96 bra */
L_0C09BEA0: BLKS(0x0C09BEA0u);
	r6 = 0xB4u; UPD(0x0C09BEA2u, 1);  /* 0C09BEA0 mov.w @(disp,pc),Rn */
	IF(0x0C09BEA2u); MACL = r10 * r6;  /* 0C09BEA2 mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C09BEA6u, 3);  /* 0C09BEA4 mov.l @(disp,pc),Rn */
	IF(0x0C09BEA6u); r8 = MACL;  /* 0C09BEA6 sts macl,Rn */
	r8 += r3;  /* 0C09BEA8 add Rm,Rn */
	r4 = R32(r8 + 0x24u); UPD(0x0C09BEACu, 3);  /* 0C09BEAA mov.l @(disp,Rm),Rn */
	r11 = r8;  /* 0C09BEAC mov Rm,Rn */
	r11 += 0x5Cu;  /* 0C09BEAE add #imm,Rn */
	r10 = 0xC062780u; UPD(0x0C09BEB2u, 3);  /* 0C09BEB0 mov.l @(disp,pc),Rn */
	r8 += 0x60u;  /* 0C09BEB2 add #imm,Rn */
	W32(r11, r4); UPD(0x0C09BEB6u, 2);  /* 0C09BEB4 mov.l Rm,@Rn */
	r9 = 0xA0u; UPD(0x0C09BEB8u, 1);  /* 0C09BEB6 mov.w @(disp,pc),Rn */
	IF(0x0C09BEB8u); { u32 t_ = r10; PR = 0x0C09BEBCu; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C09BEBCu); }  /* 0C09BEB8 jsr @Rn */
L_0C09BEBC: BLKS(0x0C09BEBCu);
	{ IF(0x0C09BEBEu); ; /* slot nop */ UPD(0x0C09BE74u, 3); goto L_0C09BE74; }  /* 0C09BEBC bra */
L_0C09BEC0: BLKS(0x0C09BEC0u);
	r11 = 0xB4u; UPD(0x0C09BEC2u, 1);  /* 0C09BEC0 mov.w @(disp,pc),Rn */
	IF(0x0C09BEC2u); MACL = r10 * r11;  /* 0C09BEC2 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C09BEC6u, 3);  /* 0C09BEC4 mov.l @(disp,pc),Rn */
	IF(0x0C09BEC6u); r7 = MACL;  /* 0C09BEC6 sts macl,Rn */
	r0 = 0x8Cu; UPD(0x0C09BECAu, 2);  /* 0C09BEC8 mov.w @(disp,pc),Rn */
	r7 += r9;  /* 0C09BECA add Rm,Rn */
	IF(0x0C09BECCu); r3 = R32(r0 + r7); UPD(0x0C09BECEu, 2);  /* 0C09BECC mov.l @(r0,Rm),Rn */
	T = (r3 & r3) == 0;  /* 0C09BECE tst Rm,Rn */
	if (!T) { UPD(0x0C09BF20u, 4); goto L_0C09BF20; }  /* 0C09BED0 bf */
L_0C09BED2: BLKS(0x0C09BED2u);
	r4 = 0xC207546u; UPD(0x0C09BED4u, 1);  /* 0C09BED2 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r4); UPD(0x0C09BED6u, 1);  /* 0C09BED4 mov.b @Rm,Rn */
	T = r0 == 0x4u;  /* 0C09BED6 cmp/eq #imm,r0 */
	UPD(0x0C09BED8u, 1);
L_0C09BED8: BLKS(0x0C09BED8u);
	{ u32 c_ = T; r2 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C09BEF0u, 3); goto L_0C09BEF0; } goto L_0C09BEDC; }  /* 0C09BED8 bt/s */
L_0C09BEDC: BLKS(0x0C09BEDCu);
	r2 += 0x1u;  /* 0C09BEDC add #imm,Rn */
	W8(r4, r2); UPD(0x0C09BEE0u, 3);  /* 0C09BEDE mov.b Rm,@Rn */
	r0 = 0xA0u; UPD(0x0C09BEE2u, 1);  /* 0C09BEE0 mov.w @(disp,pc),Rn */
	IF(0x0C09BEE2u); r1 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C09BEE4u, 1);  /* 0C09BEE2 mov.b @(r0,Rm),Rn */
	r1 += 0xFFFFFFFEu;  /* 0C09BEE4 add #imm,Rn */
	UPD(0x0C09BEE6u, 1);
L_0C09BEE6: BLKS(0x0C09BEE6u);
	IF(0x0C09BEE6u); W8(r0 + r7, r1); UPD(0x0C09BEE8u, 1);  /* 0C09BEE6 mov.b Rm,@(r0,Rn) */
L_0C09BEE8: BLKS(0x0C09BEE8u);
	{ IF(0x0C09BEEAu); ; /* slot nop */ UPD(0x0C09BD84u, 3); goto L_0C09BD84; }  /* 0C09BEE8 bra */
L_0C09BEF0: BLKS(0x0C09BEF0u);
	r6 = 0xA0u; UPD(0x0C09BEF2u, 1);  /* 0C09BEF0 mov.w @(disp,pc),Rn */
	r11 = 0x1Du;  /* 0C09BEF2 mov #imm,Rn */
	r0 = 0x99u; UPD(0x0C09BEF6u, 2);  /* 0C09BEF4 mov.w @(disp,pc),Rn */
	r6 += r7;  /* 0C09BEF6 add Rm,Rn */
	r10 = r6;  /* 0C09BEF8 mov Rm,Rn */
	IF(0x0C09BEFAu); r5 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C09BEFCu, 3);  /* 0C09BEFA mov.b @(r0,Rm),Rn */
	r6 += 0x2u;  /* 0C09BEFC add #imm,Rn */
	r5 += 0x1u;  /* 0C09BEFE add #imm,Rn */
	r10 += 0x1u;  /* 0C09BF00 add #imm,Rn */
	W8(r6, r3); UPD(0x0C09BF04u, 4);  /* 0C09BF02 mov.b Rm,@Rn */
	r9 = r5 & 0xFF;  /* 0C09BF04 extu.b Rm,Rn */
	W8(r10, r3); UPD(0x0C09BF08u, 2);  /* 0C09BF06 mov.b Rm,@Rn */
	r6 += 0xFFFFFFFEu;  /* 0C09BF08 add #imm,Rn */
	T = r9 > r11;  /* 0C09BF0A cmp/hi Rm,Rn */
	{ u32 c_ = !T; IF(0x0C09BF0Eu); W8(r0 + r7, r5); /* slot mov.b Rm,@(r0,Rn) */ if (c_) { UPD(0x0C09BEE8u, 5); goto L_0C09BEE8; } UPD(0x0C09BF10u, 1); goto L_0C09BF10; }  /* 0C09BF0C bf/s */
L_0C09BF10: BLKS(0x0C09BF10u);
	IF(0x0C09BF10u); W8(r0 + r7, r3); UPD(0x0C09BF12u, 1);  /* 0C09BF10 mov.b Rm,@(r0,Rn) */
	W8(r4, r3); UPD(0x0C09BF14u, 1);  /* 0C09BF12 mov.b Rm,@Rn */
	r1 = (u32)(s32)(s8)R8(r6); UPD(0x0C09BF16u, 1);  /* 0C09BF14 mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C09BF16 add #imm,Rn */
	UPD(0x0C09BF18u, 1);
L_0C09BF18: BLKS(0x0C09BF18u);
	{ W8(r6, r1); /* slot mov.b Rm,@Rn */ UPD(0x0C09BD84u, 3); goto L_0C09BD84; }  /* 0C09BF18 bra */
L_0C09BF20: BLKS(0x0C09BF20u);
	r1 = 0xFFFFF800u; UPD(0x0C09BF22u, 1);  /* 0C09BF20 mov.w @(disp,pc),Rn */
	r3 += r1;  /* 0C09BF22 add Rm,Rn */
	UPD(0x0C09BF24u, 1);
L_0C09BF24: BLKS(0x0C09BF24u);
	IF(0x0C09BF24u); W32(r0 + r7, r3); UPD(0x0C09BF26u, 1);  /* 0C09BF24 mov.l Rm,@(r0,Rn) */
L_0C09BF26: BLKS(0x0C09BF26u);
	{ IF(0x0C09BF28u); ; /* slot nop */ UPD(0x0C09BD84u, 3); goto L_0C09BD84; }  /* 0C09BF26 bra */
L_0C09BF30: BLKS(0x0C09BF30u);
	r8 = 0xB4u; UPD(0x0C09BF32u, 1);  /* 0C09BF30 mov.w @(disp,pc),Rn */
	r2 = 0xFFFFFF80u;  /* 0C09BF32 mov #imm,Rn */
	IF(0x0C09BF34u); MACL = r10 * r8;  /* 0C09BF34 mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C09BF38u, 4);  /* 0C09BF36 mov.l @(disp,pc),Rn */
	r5 = 0x0u;  /* 0C09BF38 mov #imm,Rn */
	IF(0x0C09BF3Au); r0 = MACL;  /* 0C09BF3A sts macl,Rn */
	r3 = 0xA0u; UPD(0x0C09BF3Eu, 3);  /* 0C09BF3C mov.w @(disp,pc),Rn */
	r0 += r6;  /* 0C09BF3E add Rm,Rn */
	r0 += r3;  /* 0C09BF40 add Rm,Rn */
	r0 += 0x1u;  /* 0C09BF42 add #imm,Rn */
	W8(r0, r2); UPD(0x0C09BF46u, 4);  /* 0C09BF44 mov.b Rm,@Rn */
	r0 += 0x1u;  /* 0C09BF46 add #imm,Rn */
	W8(r0, r5); UPD(0x0C09BF4Au, 2);  /* 0C09BF48 mov.b Rm,@Rn */
	r0 += 0xFFFFFFFEu;  /* 0C09BF4A add #imm,Rn */
	r4 = (u32)(s32)(s8)R8(r0); UPD(0x0C09BF4Eu, 2);  /* 0C09BF4C mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C09BF4E add #imm,Rn */
	W8(r0, r4); UPD(0x0C09BF52u, 2);  /* 0C09BF50 mov.b Rm,@Rn */
L_0C09BF52: BLKS(0x0C09BF52u);
	r9 = 0xB4u; UPD(0x0C09BF54u, 1);  /* 0C09BF52 mov.w @(disp,pc),Rn */
	IF(0x0C09BF54u); MACL = r10 * r9;  /* 0C09BF54 mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C09BF58u, 3);  /* 0C09BF56 mov.l @(disp,pc),Rn */
	IF(0x0C09BF58u); r3 = MACL;  /* 0C09BF58 sts macl,Rn */
	r3 += r7;  /* 0C09BF5A add Rm,Rn */
	r7 = 0xA0u; UPD(0x0C09BF5Eu, 3);  /* 0C09BF5C mov.w @(disp,pc),Rn */
	r7 += r3;  /* 0C09BF5E add Rm,Rn */
	r7 += 0x1u;  /* 0C09BF60 add #imm,Rn */
	r10 = (u32)(s32)(s8)R8(r7); UPD(0x0C09BF64u, 3);  /* 0C09BF62 mov.b @Rm,Rn */
	IF(0x0C09BF64u); T = (s32)r10 >= 0;  /* 0C09BF64 cmp/pz Rn */
	{ u32 c_ = !T; r7 += 0xFFFFFFFFu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C09BF26u, 4); goto L_0C09BF26; } goto L_0C09BF6A; }  /* 0C09BF66 bf/s */
L_0C09BF6A: BLKS(0x0C09BF6Au);
	r3 += 0x50u;  /* 0C09BF6A add #imm,Rn */
	r1 = R32(r3); UPD(0x0C09BF6Eu, 3);  /* 0C09BF6C mov.l @Rm,Rn */
	r6 = 0xE10u; UPD(0x0C09BF70u, 1);  /* 0C09BF6E mov.w @(disp,pc),Rn */
	r3 += 0xFFFFFFECu;  /* 0C09BF70 add #imm,Rn */
	r5 = 0xC207542u; UPD(0x0C09BF74u, 2);  /* 0C09BF72 mov.l @(disp,pc),Rn */
	T = (s32)r1 > (s32)r6;  /* 0C09BF74 cmp/gt Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r3); UPD(0x0C09BF78u, 2);  /* 0C09BF76 mov.w @Rm,Rn */
	IF(0x0C09BF78u); r6 = T;  /* 0C09BF78 movt Rn */
	r4 = (u32)(s32)(s16)R16(r5); UPD(0x0C09BF7Cu, 2);  /* 0C09BF7A mov.w @Rm,Rn */
	T = (s32)r4 > (s32)r0;  /* 0C09BF7C cmp/gt Rm,Rn */
	IF(0x0C09BF7Eu); r11 = T;  /* 0C09BF7E movt Rn */
	r6 |= r11;  /* 0C09BF80 or Rm,Rn */
	T = (r6 & r6) == 0;  /* 0C09BF82 tst Rm,Rn */
	if (T) { UPD(0x0C09BF90u, 7); goto L_0C09BF90; }  /* 0C09BF84 bt */
L_0C09BF86: BLKS(0x0C09BF86u);
	r1 = (u32)(s32)(s8)R8(r7); UPD(0x0C09BF88u, 1);  /* 0C09BF86 mov.b @Rm,Rn */
L_0C09BF88: BLKS(0x0C09BF88u);
	r1 += 0x1u;  /* 0C09BF88 add #imm,Rn */
	{ W8(r7, r1); /* slot mov.b Rm,@Rn */ UPD(0x0C09BD84u, 4); goto L_0C09BD84; }  /* 0C09BF8A bra */
L_0C09BF90: BLKS(0x0C09BF90u);
	{ W8(r7, r6); /* slot mov.b Rm,@Rn */ UPD(0x0C09BD84u, 3); goto L_0C09BD84; }  /* 0C09BF90 bra */
L_0C09BFC0: BLKS(0x0C09BFC0u);
	r11 = 0xB4u; UPD(0x0C09BFC2u, 1);  /* 0C09BFC0 mov.w @(disp,pc),Rn */
	IF(0x0C09BFC2u); MACL = r10 * r11;  /* 0C09BFC2 mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C09BFC6u, 3);  /* 0C09BFC4 mov.l @(disp,pc),Rn */
	IF(0x0C09BFC6u); r10 = MACL;  /* 0C09BFC6 sts macl,Rn */
	r10 += r7;  /* 0C09BFC8 add Rm,Rn */
	r2 = 0x300000u; UPD(0x0C09BFCCu, 3);  /* 0C09BFCA mov.l @(disp,pc),Rn */
	r3 = r10;  /* 0C09BFCC mov Rm,Rn */
	r7 = R32(r10 + 0x28u); UPD(0x0C09BFD0u, 2);  /* 0C09BFCE mov.l @(disp,Rm),Rn */
	r3 += 0x5Cu;  /* 0C09BFD0 add #imm,Rn */
	W32(r3, r2); UPD(0x0C09BFD4u, 2);  /* 0C09BFD2 mov.l Rm,@Rn */
	r10 += 0x60u;  /* 0C09BFD4 add #imm,Rn */
	W32(r10, r7); UPD(0x0C09BFD8u, 2);  /* 0C09BFD6 mov.l Rm,@Rn */
	r5 = r7;  /* 0C09BFD8 mov Rm,Rn */
	r9 = 0xC068E60u; UPD(0x0C09BFDCu, 2);  /* 0C09BFDA mov.l @(disp,pc),Rn */
	r10 += 0xFFFFFFA0u;  /* 0C09BFDC add #imm,Rn */
	r8 = 0x86u; UPD(0x0C09BFE0u, 2);  /* 0C09BFDE mov.w @(disp,pc),Rn */
	r4 = R32(r10 + 0x24u); UPD(0x0C09BFE2u, 1);  /* 0C09BFE0 mov.l @(disp,Rm),Rn */
	r8 += r10;  /* 0C09BFE2 add Rm,Rn */
	IF(0x0C09BFE4u); { u32 t_ = r9; PR = 0x0C09BFE8u; r6 = R32(r3); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C068E60, 0x0C068E60u, 0x0C09BFE8u); }  /* 0C09BFE4 jsr @Rn */
L_0C09BFE8: BLKS(0x0C09BFE8u);
	r2 = 0xA0u; UPD(0x0C09BFEAu, 1);  /* 0C09BFE8 mov.w @(disp,pc),Rn */
	W16(r8, r0); UPD(0x0C09BFECu, 1);  /* 0C09BFEA mov.w Rm,@Rn */
	r2 += r10;  /* 0C09BFEC add Rm,Rn */
	UPD(0x0C09BFEEu, 1);
L_0C09BFEE: BLKS(0x0C09BFEEu);
	r2 += 0x3u;  /* 0C09BFEE add #imm,Rn */
	UPD(0x0C09BFF0u, 1);
L_0C09BFF0: BLKS(0x0C09BFF0u);
	r4 = 0xFFFFFF80u;  /* 0C09BFF0 mov #imm,Rn */
	W8(r2, r4); UPD(0x0C09BFF4u, 2);  /* 0C09BFF2 mov.b Rm,@Rn */
	r2 += 0xFFFFFFFDu;  /* 0C09BFF4 add #imm,Rn */
	UPD(0x0C09BFF6u, 1);
L_0C09BFF6: BLKS(0x0C09BFF6u);
	r3 = (u32)(s32)(s8)R8(r2); UPD(0x0C09BFF8u, 1);  /* 0C09BFF6 mov.b @Rm,Rn */
L_0C09BFF8: BLKS(0x0C09BFF8u);
	r3 += 0x1u;  /* 0C09BFF8 add #imm,Rn */
	W8(r2, r3); UPD(0x0C09BFFCu, 2);  /* 0C09BFFA mov.b Rm,@Rn */
L_0C09BFFC: BLKS(0x0C09BFFCu);
	{ IF(0x0C09BFFEu); ; /* slot nop */ UPD(0x0C09BD84u, 3); goto L_0C09BD84; }  /* 0C09BFFC bra */
L_0C09C000: BLKS(0x0C09C000u);
	r4 = 0xB4u; UPD(0x0C09C002u, 1);  /* 0C09C000 mov.w @(disp,pc),Rn */
	IF(0x0C09C002u); MACL = r10 * r4;  /* 0C09C002 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C09C006u, 3);  /* 0C09C004 mov.l @(disp,pc),Rn */
	IF(0x0C09C006u); r7 = MACL;  /* 0C09C006 sts macl,Rn */
	r7 += r0;  /* 0C09C008 add Rm,Rn */
	r0 = 0x8Cu; UPD(0x0C09C00Cu, 3);  /* 0C09C00A mov.w @(disp,pc),Rn */
	r2 = 0xFFFFF800u; UPD(0x0C09C00Eu, 1);  /* 0C09C00C mov.w @(disp,pc),Rn */
	IF(0x0C09C00Eu); r1 = R32(r0 + r7); UPD(0x0C09C010u, 1);  /* 0C09C00E mov.l @(r0,Rm),Rn */
L_0C09C010: BLKS(0x0C09C010u);
	r1 += r2;  /* 0C09C010 add Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C09C012 tst Rm,Rn */
	{ u32 c_ = !T; IF(0x0C09C016u); W32(r0 + r7, r1); /* slot mov.l Rm,@(r0,Rn) */ if (c_) { UPD(0x0C09BFFCu, 5); goto L_0C09BFFC; } UPD(0x0C09C018u, 1); goto L_0C09C018; }  /* 0C09C014 bf/s */
L_0C09C018: BLKS(0x0C09C018u);
	r0 += 0x14u;  /* 0C09C018 add #imm,Rn */
	IF(0x0C09C01Au); r1 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C09C01Cu, 2);  /* 0C09C01A mov.b @(r0,Rm),Rn */
	{ r1 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C09BEE6u, 3); goto L_0C09BEE6; }  /* 0C09C01C bra */
L_0C09C020: BLKS(0x0C09C020u);
	r2 = 0xB4u; UPD(0x0C09C022u, 1);  /* 0C09C020 mov.w @(disp,pc),Rn */
	IF(0x0C09C022u); MACL = r10 * r2;  /* 0C09C022 mul.l Rm,Rn */
	r4 = 0xC286578u; UPD(0x0C09C026u, 3);  /* 0C09C024 mov.l @(disp,pc),Rn */
	IF(0x0C09C026u); r11 = MACL;  /* 0C09C026 sts macl,Rn */
	r11 += r4;  /* 0C09C028 add Rm,Rn */
	r0 = r11;  /* 0C09C02A mov Rm,Rn */
	r7 = 0xE00000u; UPD(0x0C09C02Eu, 4);  /* 0C09C02C mov.l @(disp,pc),Rn */
	r0 += 0x5Cu;  /* 0C09C02E add #imm,Rn */
	W32(r0, r7); UPD(0x0C09C032u, 2);  /* 0C09C030 mov.l Rm,@Rn */
	r7 = R32(r11 + 0x28u); UPD(0x0C09C034u, 1);  /* 0C09C032 mov.l @(disp,Rm),Rn */
	r11 += 0x60u;  /* 0C09C034 add #imm,Rn */
	W32(r11, r7); UPD(0x0C09C038u, 2);  /* 0C09C036 mov.l Rm,@Rn */
	r5 = r7;  /* 0C09C038 mov Rm,Rn */
	r8 = 0xC068E60u; UPD(0x0C09C03Cu, 2);  /* 0C09C03A mov.l @(disp,pc),Rn */
	r11 += 0xFFFFFFA0u;  /* 0C09C03C add #imm,Rn */
	r10 = 0x86u; UPD(0x0C09C040u, 2);  /* 0C09C03E mov.w @(disp,pc),Rn */
	r4 = R32(r11 + 0x24u); UPD(0x0C09C042u, 1);  /* 0C09C040 mov.l @(disp,Rm),Rn */
	r10 += r11;  /* 0C09C042 add Rm,Rn */
	IF(0x0C09C044u); { u32 t_ = r8; PR = 0x0C09C048u; r6 = R32(r0); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C068E60, 0x0C068E60u, 0x0C09C048u); }  /* 0C09C044 jsr @Rn */
L_0C09C048: BLKS(0x0C09C048u);
	W16(r10, r0); UPD(0x0C09C04Au, 1);  /* 0C09C048 mov.w Rm,@Rn */
	r0 = 0xA0u; UPD(0x0C09C04Cu, 1);  /* 0C09C04A mov.w @(disp,pc),Rn */
	IF(0x0C09C04Cu); r3 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C09C04Eu, 1);  /* 0C09C04C mov.b @(r0,Rm),Rn */
	r3 += 0x1u;  /* 0C09C04E add #imm,Rn */
	{ IF(0x0C09C052u); W8(r0 + r11, r3); /* slot mov.b Rm,@(r0,Rn) */ UPD(0x0C09BD84u, 4); goto L_0C09BD84; }  /* 0C09C050 bra */
L_0C09C060: BLKS(0x0C09C060u);
	r7 = 0xB4u; UPD(0x0C09C062u, 1);  /* 0C09C060 mov.w @(disp,pc),Rn */
	IF(0x0C09C062u); MACL = r10 * r7;  /* 0C09C062 mul.l Rm,Rn */
	r8 = 0xC286578u; UPD(0x0C09C066u, 3);  /* 0C09C064 mov.l @(disp,pc),Rn */
	IF(0x0C09C066u); r0 = MACL;  /* 0C09C066 sts macl,Rn */
	r3 = 0x8Cu; UPD(0x0C09C06Au, 2);  /* 0C09C068 mov.w @(disp,pc),Rn */
	r0 += r8;  /* 0C09C06A add Rm,Rn */
	IF(0x0C09C06Cu); r2 = R32(r0 + r3); UPD(0x0C09C06Eu, 2);  /* 0C09C06C mov.l @(r0,Rm),Rn */
	r1 = 0xFFFFu; UPD(0x0C09C070u, 1);  /* 0C09C06E mov.l @(disp,pc),Rn */
L_0C09C070: BLKS(0x0C09C070u);
	T = (s32)r2 > (s32)r1;  /* 0C09C070 cmp/gt Rm,Rn */
	r1 = 0x800u; UPD(0x0C09C074u, 2);  /* 0C09C072 mov.w @(disp,pc),Rn */
	{ u32 c_ = !T; r2 += r1; /* slot add Rm,Rn */ if (c_) { UPD(0x0C09C110u, 3); goto L_0C09C110; } UPD(0x0C09C078u, 1); goto L_0C09C078; }  /* 0C09C074 bf/s */
L_0C09C078: BLKS(0x0C09C078u);
	r4 = R32(r0 + 0x24u); UPD(0x0C09C07Au, 1);  /* 0C09C078 mov.l @(disp,Rm),Rn */
L_0C09C07A: BLKS(0x0C09C07Au);
	r2 = 0xFF600000u; UPD(0x0C09C07Cu, 1);  /* 0C09C07A mov.l @(disp,pc),Rn */
	r2 += r4;  /* 0C09C07C add Rm,Rn */
	IF(0x0C09C07Eu); T = (s32)r2 >= 0;  /* 0C09C07E cmp/pz Rn */
	if (!T) { UPD(0x0C09C100u, 5); goto L_0C09C100; }  /* 0C09C080 bf */
L_0C09C082: BLKS(0x0C09C082u);
	r10 = 0x1E00000u; UPD(0x0C09C084u, 1);  /* 0C09C082 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r10;  /* 0C09C084 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C09C098u, 4); goto L_0C09C098; }  /* 0C09C086 bt */
L_0C09C088: BLKS(0x0C09C088u);
	r5 = R32(r0 + 0x28u); UPD(0x0C09C08Au, 1);  /* 0C09C088 mov.l @(disp,Rm),Rn */
	r2 = 0xFE000000u; UPD(0x0C09C08Cu, 1);  /* 0C09C08A mov.l @(disp,pc),Rn */
	r2 += r5;  /* 0C09C08C add Rm,Rn */
	IF(0x0C09C08Eu); T = (s32)r2 >= 0;  /* 0C09C08E cmp/pz Rn */
	if (!T) { UPD(0x0C09C0F0u, 5); goto L_0C09C0F0; }  /* 0C09C090 bf */
L_0C09C092: BLKS(0x0C09C092u);
	r3 = 0xC80000u; UPD(0x0C09C094u, 1);  /* 0C09C092 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r3;  /* 0C09C094 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C09C0B0u, 4); goto L_0C09C0B0; }  /* 0C09C096 bf */
L_0C09C098: BLKS(0x0C09C098u);
	r7 = 0xA0u; UPD(0x0C09C09Au, 1);  /* 0C09C098 mov.w @(disp,pc),Rn */
	r9 = 0x86u; UPD(0x0C09C09Cu, 1);  /* 0C09C09A mov.w @(disp,pc),Rn */
	IF(0x0C09C09Cu); r4 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C09C09Eu, 1);  /* 0C09C09C mov.b @(r0,Rm),Rn */
	IF(0x0C09C09Eu); r11 = (u32)(s32)(s16)R16(r0 + r9); UPD(0x0C09C0A0u, 1);  /* 0C09C09E mov.w @(r0,Rm),Rn */
	r4 += 0x1u;  /* 0C09C0A0 add #imm,Rn */
	r1 = 0x100u; UPD(0x0C09C0A4u, 2);  /* 0C09C0A2 mov.w @(disp,pc),Rn */
	r11 += r1;  /* 0C09C0A4 add Rm,Rn */
	IF(0x0C09C0A6u); W8(r0 + r7, r4); UPD(0x0C09C0A8u, 2);  /* 0C09C0A6 mov.b Rm,@(r0,Rn) */
	{ IF(0x0C09C0AAu); W16(r0 + r9, r11); /* slot mov.w Rm,@(r0,Rn) */ UPD(0x0C09BD84u, 3); goto L_0C09BD84; }  /* 0C09C0A8 bra */
L_0C09C0B0: BLKS(0x0C09C0B0u);
	r0 += 0x5Cu;  /* 0C09C0B0 add #imm,Rn */
	{ u32 v_ = R32(r0); r0 += 4; r6 = v_; } UPD(0x0C09C0B4u, 2);  /* 0C09C0B2 mov.l @Rm+,Rn */
	r9 = r4;  /* 0C09C0B4 mov Rm,Rn */
	r3 = 0x7FFFFu; UPD(0x0C09C0B8u, 2);  /* 0C09C0B6 mov.l @(disp,pc),Rn */
	r9 -= r6;  /* 0C09C0B8 sub Rm,Rn */
	r11 = 0xFFFFEu; UPD(0x0C09C0BCu, 2);  /* 0C09C0BA mov.l @(disp,pc),Rn */
	r9 += r3;  /* 0C09C0BC add Rm,Rn */
	T = r11 >= r9;  /* 0C09C0BE cmp/hs Rm,Rn */
	r9 = R32(r0); UPD(0x0C09C0C2u, 3);  /* 0C09C0C0 mov.l @Rm,Rn */
	r10 = r5;  /* 0C09C0C2 mov Rm,Rn */
	r10 -= r9;  /* 0C09C0C4 sub Rm,Rn */
	IF(0x0C09C0C6u); r8 = T;  /* 0C09C0C6 movt Rn */
	r10 += r3;  /* 0C09C0C8 add Rm,Rn */
	T = r11 >= r10;  /* 0C09C0CA cmp/hs Rm,Rn */
	IF(0x0C09C0CCu); r2 = T;  /* 0C09C0CC movt Rn */
	r8 &= r2;  /* 0C09C0CE and Rm,Rn */
	T = (r8 & r8) == 0;  /* 0C09C0D0 tst Rm,Rn */
	{ u32 c_ = T; r0 += 0xFFFFFFA0u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C09C0E0u, 11); goto L_0C09C0E0; } goto L_0C09C0D6; }  /* 0C09C0D2 bt/s */
L_0C09C0D6: BLKS(0x0C09C0D6u);
	r5 = 0xA0u; UPD(0x0C09C0D8u, 2);  /* 0C09C0D6 mov.w @(disp,pc),Rn */
	IF(0x0C09C0D8u); r6 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C09C0DAu, 1);  /* 0C09C0D8 mov.b @(r0,Rm),Rn */
	r6 += 0x1u;  /* 0C09C0DA add #imm,Rn */
	{ IF(0x0C09C0DEu); W8(r0 + r5, r6); /* slot mov.b Rm,@(r0,Rn) */ UPD(0x0C09BD84u, 4); goto L_0C09BD84; }  /* 0C09C0DC bra */
L_0C09C0E0: BLKS(0x0C09C0E0u);
	r8 = 0xC068E60u; UPD(0x0C09C0E2u, 1);  /* 0C09C0E0 mov.l @(disp,pc),Rn */
	r7 = r9;  /* 0C09C0E2 mov Rm,Rn */
	r10 = 0x86u; UPD(0x0C09C0E6u, 2);  /* 0C09C0E4 mov.w @(disp,pc),Rn */
	IF(0x0C09C0E6u); { u32 t_ = r8; PR = 0x0C09C0EAu; r10 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C068E60, 0x0C068E60u, 0x0C09C0EAu); }  /* 0C09C0E6 jsr @Rn */
L_0C09C0EA: BLKS(0x0C09C0EAu);
	W16(r10, r0); UPD(0x0C09C0ECu, 1);  /* 0C09C0EA mov.w Rm,@Rn */
L_0C09C0EC: BLKS(0x0C09C0ECu);
	{ IF(0x0C09C0EEu); ; /* slot nop */ UPD(0x0C09BD84u, 3); goto L_0C09BD84; }  /* 0C09C0EC bra */
L_0C09C0F0: BLKS(0x0C09C0F0u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C09C092u, 3); goto L_0C09C092; }  /* 0C09C0F0 bra */
L_0C09C100: BLKS(0x0C09C100u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C09C082u, 3); goto L_0C09C082; }  /* 0C09C100 bra */
L_0C09C110: BLKS(0x0C09C110u);
	{ IF(0x0C09C112u); W32(r0 + r3, r2); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C09C078u, 3); goto L_0C09C078; }  /* 0C09C110 bra */
L_0C09C120: BLKS(0x0C09C120u);
	r8 = 0xB4u; UPD(0x0C09C122u, 1);  /* 0C09C120 mov.w @(disp,pc),Rn */
	IF(0x0C09C122u); MACL = r10 * r8;  /* 0C09C122 mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C09C126u, 3);  /* 0C09C124 mov.l @(disp,pc),Rn */
	r0 = 0x8Cu; UPD(0x0C09C128u, 1);  /* 0C09C126 mov.w @(disp,pc),Rn */
	IF(0x0C09C128u); r7 = MACL;  /* 0C09C128 sts macl,Rn */
	r7 += r6;  /* 0C09C12A add Rm,Rn */
	IF(0x0C09C12Cu); r3 = R32(r0 + r7); UPD(0x0C09C12Eu, 3);  /* 0C09C12C mov.l @(r0,Rm),Rn */
	r5 = 0xFFFFF800u; UPD(0x0C09C130u, 1);  /* 0C09C12E mov.w @(disp,pc),Rn */
	r3 += r5;  /* 0C09C130 add Rm,Rn */
	IF(0x0C09C132u); W32(r0 + r7, r3); UPD(0x0C09C134u, 2);  /* 0C09C132 mov.l Rm,@(r0,Rn) */
	T = (r3 & r3) == 0;  /* 0C09C134 tst Rm,Rn */
	{ u32 c_ = !T; r0 += 0x13u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C09C0ECu, 4); goto L_0C09C0EC; } goto L_0C09C13A; }  /* 0C09C136 bf/s */
L_0C09C13A: BLKS(0x0C09C13Au);
	IF(0x0C09C13Au); r11 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C09C13Cu, 2);  /* 0C09C13A mov.b @(r0,Rm),Rn */
L_0C09C13C: BLKS(0x0C09C13Cu);
	r9 = 0xA0u; UPD(0x0C09C13Eu, 1);  /* 0C09C13C mov.w @(disp,pc),Rn */
	r11 += 0x1u;  /* 0C09C13E add #imm,Rn */
	r9 += r7;  /* 0C09C140 add Rm,Rn */
	W8(r9, r3); UPD(0x0C09C144u, 3);  /* 0C09C142 mov.b Rm,@Rn */
	IF(0x0C09C144u); W8(r0 + r7, r11); UPD(0x0C09C146u, 1);  /* 0C09C144 mov.b Rm,@(r0,Rn) */
	r9 += 0x3u;  /* 0C09C146 add #imm,Rn */
	r7 += 0x50u;  /* 0C09C148 add #imm,Rn */
	W32(r7, r3); UPD(0x0C09C14Cu, 3);  /* 0C09C14A mov.l Rm,@Rn */
	W8(r9, r3); UPD(0x0C09C14Eu, 1);  /* 0C09C14C mov.b Rm,@Rn */
	r3 = 0xC0C21F0u; UPD(0x0C09C150u, 1);  /* 0C09C14E mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C09C150 mov Rm,Rn */
	IF(0x0C09C152u); PR = R32(r15); r15 += 4; UPD(0x0C09C154u, 2);  /* 0C09C152 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09C156u, 1);  /* 0C09C154 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09C158u, 1);  /* 0C09C156 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09C15Au, 1);  /* 0C09C158 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09C15Cu, 1);  /* 0C09C15A mov.l @Rm+,Rn */
	IF(0x0C09C15Cu); { u32 tv_ = r3; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0C21F0u: TAIL(blk_f_0C0C21F0); default: JUMPD(tv_); } }  /* 0C09C15C jmp @Rn */
L_0C09C1A0: BLKS(0x0C09C1A0u);
	r11 = 0xB4u; UPD(0x0C09C1A2u, 1);  /* 0C09C1A0 mov.w @(disp,pc),Rn */
	r9 = 0xFu;  /* 0C09C1A2 mov #imm,Rn */
	IF(0x0C09C1A4u); MACL = r10 * r11;  /* 0C09C1A4 mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C09C1A8u, 4);  /* 0C09C1A6 mov.l @(disp,pc),Rn */
	IF(0x0C09C1A8u); r2 = MACL;  /* 0C09C1A8 sts macl,Rn */
	r0 = 0xA0u; UPD(0x0C09C1ACu, 2);  /* 0C09C1AA mov.w @(disp,pc),Rn */
	r7 += r2;  /* 0C09C1AC add Rm,Rn */
	IF(0x0C09C1AEu); r3 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C09C1B0u, 2);  /* 0C09C1AE mov.b @(r0,Rm),Rn */
	r2 = r3 & 0xFF;  /* 0C09C1B0 extu.b Rm,Rn */
	T = r2 > r9;  /* 0C09C1B2 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C09C0ECu, 5); goto L_0C09C0EC; }  /* 0C09C1B4 bt */
L_0C09C1B6: BLKS(0x0C09C1B6u);
	r0 = 0xC09C1C8u;  /* 0C09C1B6 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C09C1B8 add Rm,Rn */
	IF(0x0C09C1BAu); r4 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C09C1BCu, 3);  /* 0C09C1BA mov.w @(r0,Rm),Rn */
	IF(0x0C09C1BCu); { u32 tv_ = (r4 + 0x0C09C1C0u); u32 t_ = PHYS(tv_); IF(0x0C09C1BEu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C09C020u: goto L_0C09C020; case 0x0C09C1F0u: goto L_0C09C1F0; case 0x0C09C220u: goto L_0C09C220; case 0x0C09C250u: goto L_0C09C250; case 0x0C09C270u: goto L_0C09C270; case 0x0C09C420u: goto L_0C09C420; case 0x0C09C480u: goto L_0C09C480; case 0x0C09C4A0u: goto L_0C09C4A0; case 0x0C09C520u: goto L_0C09C520; case 0x0C09C590u: goto L_0C09C590; case 0x0C09C5B0u: goto L_0C09C5B0; case 0x0C09C5D0u: goto L_0C09C5D0; default: JUMPD(tv_); } }  /* 0C09C1BC braf Rn */
L_0C09C1F0: BLKS(0x0C09C1F0u);
	r6 = 0xB4u; UPD(0x0C09C1F2u, 1);  /* 0C09C1F0 mov.w @(disp,pc),Rn */
	IF(0x0C09C1F2u); MACL = r10 * r6;  /* 0C09C1F2 mul.l Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C09C1F6u, 3);  /* 0C09C1F4 mov.l @(disp,pc),Rn */
	r10 = 0xC0C2360u; UPD(0x0C09C1F8u, 1);  /* 0C09C1F6 mov.l @(disp,pc),Rn */
	IF(0x0C09C1F8u); r8 = MACL;  /* 0C09C1F8 sts macl,Rn */
	r0 = 0xA0u; UPD(0x0C09C1FCu, 2);  /* 0C09C1FA mov.w @(disp,pc),Rn */
	r8 += r5;  /* 0C09C1FC add Rm,Rn */
	IF(0x0C09C1FEu); { u32 t_ = r10; PR = 0x0C09C202u; r8 += r0; /* slot add Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C09C202u); }  /* 0C09C1FE jsr @Rn */
L_0C09C202: BLKS(0x0C09C202u);
	r0 &= 0x70u;  /* 0C09C202 and #imm,r0 */
	r8 += 0x1u;  /* 0C09C204 add #imm,Rn */
	r0 += 0x8u;  /* 0C09C206 add #imm,Rn */
	IF(0x0C09C208u); { u32 t_ = r10; PR = 0x0C09C20Cu; W8(r8, r0); /* slot mov.b Rm,@Rn */ UPD(t_, 5); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C09C20Cu); }  /* 0C09C208 jsr @Rn */
L_0C09C20C: BLKS(0x0C09C20Cu);
	r0 &= 0x70u;  /* 0C09C20C and #imm,r0 */
	r8 += 0x1u;  /* 0C09C20E add #imm,Rn */
	r0 += 0x8u;  /* 0C09C210 add #imm,Rn */
	{ W8(r8, r0); /* slot mov.b Rm,@Rn */ UPD(0x0C09BE38u, 6); goto L_0C09BE38; }  /* 0C09C212 bra */
L_0C09C220: BLKS(0x0C09C220u);
	r8 = 0xB4u; UPD(0x0C09C222u, 1);  /* 0C09C220 mov.w @(disp,pc),Rn */
	r4 = 0x40u;  /* 0C09C222 mov #imm,Rn */
	IF(0x0C09C224u); MACL = r10 * r8;  /* 0C09C224 mul.l Rm,Rn */
	r11 = 0xC062780u; UPD(0x0C09C228u, 4);  /* 0C09C226 mov.l @(disp,pc),Rn */
	r3 = 0xC286578u; UPD(0x0C09C22Au, 1);  /* 0C09C228 mov.l @(disp,pc),Rn */
	IF(0x0C09C22Au); r8 = MACL;  /* 0C09C22A sts macl,Rn */
	r9 = 0xD0u; UPD(0x0C09C22Eu, 2);  /* 0C09C22C mov.w @(disp,pc),Rn */
	IF(0x0C09C22Eu); { u32 t_ = r11; PR = 0x0C09C232u; r8 += r3; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C09C232u); }  /* 0C09C22E jsr @Rn */
L_0C09C232: BLKS(0x0C09C232u);
	r0 += r9;  /* 0C09C232 add Rm,Rn */
	r8 += 0x5Cu;  /* 0C09C234 add #imm,Rn */
	IF(0x0C09C236u); r0 <<= 16;  /* 0C09C236 shll16 Rn */
	r9 = 0xA0u; UPD(0x0C09C23Au, 4);  /* 0C09C238 mov.w @(disp,pc),Rn */
	W32(r8, r0); UPD(0x0C09C23Cu, 1);  /* 0C09C23A mov.l Rm,@Rn */
	r4 = r9;  /* 0C09C23C mov Rm,Rn */
	IF(0x0C09C23Eu); { u32 t_ = r11; PR = 0x0C09C242u; r8 += 0x4u; /* slot add #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C09C242u); }  /* 0C09C23E jsr @Rn */
L_0C09C242: BLKS(0x0C09C242u);
	r3 = 0x1B0u; UPD(0x0C09C244u, 1);  /* 0C09C242 mov.w @(disp,pc),Rn */
	r0 += r3;  /* 0C09C244 add Rm,Rn */
	IF(0x0C09C246u); r0 <<= 16;  /* 0C09C246 shll16 Rn */
	W32(r8, r0); UPD(0x0C09C24Au, 3);  /* 0C09C248 mov.l Rm,@Rn */
	r8 += 0xFFFFFFA0u;  /* 0C09C24A add #imm,Rn */
	{ r8 += r9; /* slot add Rm,Rn */ UPD(0x0C09BE3Au, 4); goto L_0C09BE3A; }  /* 0C09C24C bra */
L_0C09C250: BLKS(0x0C09C250u);
	r2 = 0xB4u; UPD(0x0C09C252u, 1);  /* 0C09C250 mov.w @(disp,pc),Rn */
	IF(0x0C09C252u); MACL = r10 * r2;  /* 0C09C252 mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C09C256u, 3);  /* 0C09C254 mov.l @(disp,pc),Rn */
	IF(0x0C09C256u); r8 = MACL;  /* 0C09C256 sts macl,Rn */
	r8 += r7;  /* 0C09C258 add Rm,Rn */
	r0 = R32(r8 + 0x24u); UPD(0x0C09C25Cu, 3);  /* 0C09C25A mov.l @(disp,Rm),Rn */
	r10 = 0xC062780u; UPD(0x0C09C25Eu, 1);  /* 0C09C25C mov.l @(disp,pc),Rn */
	r8 += 0x5Cu;  /* 0C09C25E add #imm,Rn */
	W32(r8, r0); UPD(0x0C09C262u, 2);  /* 0C09C260 mov.l Rm,@Rn */
	r9 = 0xA0u; UPD(0x0C09C264u, 1);  /* 0C09C262 mov.w @(disp,pc),Rn */
	r8 += 0x4u;  /* 0C09C264 add #imm,Rn */
	IF(0x0C09C266u); { u32 t_ = r10; PR = 0x0C09C26Au; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C09C26Au); }  /* 0C09C266 jsr @Rn */
L_0C09C26A: BLKS(0x0C09C26Au);
	{ IF(0x0C09C26Cu); ; /* slot nop */ UPD(0x0C09C242u, 3); goto L_0C09C242; }  /* 0C09C26A bra */
L_0C09C270: BLKS(0x0C09C270u);
	r2 = 0xB4u; UPD(0x0C09C272u, 1);  /* 0C09C270 mov.w @(disp,pc),Rn */
	r4 = r10;  /* 0C09C272 mov Rm,Rn */
	IF(0x0C09C274u); MACL = r10 * r2;  /* 0C09C274 mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C09C278u, 4);  /* 0C09C276 mov.l @(disp,pc),Rn */
	r5 = 0x4u;  /* 0C09C278 mov #imm,Rn */
	IF(0x0C09C27Au); r11 = MACL;  /* 0C09C27A sts macl,Rn */
	r11 += r7;  /* 0C09C27C add Rm,Rn */
	r9 = r11;  /* 0C09C27E mov Rm,Rn */
	r0 = 0xC069000u; UPD(0x0C09C282u, 5);  /* 0C09C280 mov.l @(disp,pc),Rn */
	r9 += 0x60u;  /* 0C09C282 add #imm,Rn */
	r8 = r11;  /* 0C09C284 mov Rm,Rn */
	r7 = R32(r9); UPD(0x0C09C288u, 3);  /* 0C09C286 mov.l @Rm,Rn */
	r8 += 0x5Cu;  /* 0C09C288 add #imm,Rn */
	IF(0x0C09C28Au); { u32 t_ = r0; PR = 0x0C09C28Eu; r6 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C069000, 0x0C069000u, 0x0C09C28Eu); }  /* 0C09C28A jsr @Rn */
L_0C09C28E: BLKS(0x0C09C28Eu);
	r7 = R32(r9); UPD(0x0C09C290u, 1);  /* 0C09C28E mov.l @Rm,Rn */
	r9 = 0xC068E60u; UPD(0x0C09C292u, 1);  /* 0C09C290 mov.l @(disp,pc),Rn */
	r4 = R32(r11 + 0x24u); UPD(0x0C09C294u, 1);  /* 0C09C292 mov.l @(disp,Rm),Rn */
	r5 = R32(r11 + 0x28u); UPD(0x0C09C296u, 1);  /* 0C09C294 mov.l @(disp,Rm),Rn */
	IF(0x0C09C296u); { u32 t_ = r9; PR = 0x0C09C29Au; r6 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C068E60, 0x0C068E60u, 0x0C09C29Au); }  /* 0C09C296 jsr @Rn */
L_0C09C29A: BLKS(0x0C09C29Au);
	r3 = 0x8Cu; UPD(0x0C09C29Cu, 1);  /* 0C09C29A mov.w @(disp,pc),Rn */
	r3 += r11;  /* 0C09C29C add Rm,Rn */
	r2 = R32(r3); UPD(0x0C09C2A0u, 2);  /* 0C09C29E mov.l @Rm,Rn */
	r4 = 0x7FFFu; UPD(0x0C09C2A2u, 1);  /* 0C09C2A0 mov.w @(disp,pc),Rn */
	T = (s32)r2 > (s32)r4;  /* 0C09C2A2 cmp/gt Rm,Rn */
	{ u32 c_ = T; r7 = (u32)(s32)(s16)r0; /* slot exts.w Rm,Rn */ if (c_) { UPD(0x0C09C2AEu, 4); goto L_0C09C2AE; } goto L_0C09C2A8; }  /* 0C09C2A4 bt/s */
L_0C09C2A8: BLKS(0x0C09C2A8u);
	r0 = 0x800u; UPD(0x0C09C2AAu, 2);  /* 0C09C2A8 mov.w @(disp,pc),Rn */
	r2 += r0;  /* 0C09C2AA add Rm,Rn */
	W32(r3, r2); UPD(0x0C09C2AEu, 2);  /* 0C09C2AC mov.l Rm,@Rn */
L_0C09C2AE: BLKS(0x0C09C2AEu);
	r8 = 0x86u; UPD(0x0C09C2B0u, 1);  /* 0C09C2AE mov.w @(disp,pc),Rn */
	r0 = r11;  /* 0C09C2B0 mov Rm,Rn */
	IF(0x0C09C2B2u); r6 = (u32)(s32)(s16)R16(r0 + r8); UPD(0x0C09C2B4u, 2);  /* 0C09C2B2 mov.w @(r0,Rm),Rn */
	r5 = 0xEu;  /* 0C09C2B4 mov #imm,Rn */
	r6 -= r7;  /* 0C09C2B6 sub Rm,Rn */
	r6 += 0x7u;  /* 0C09C2B8 add #imm,Rn */
	T = r6 > r5;  /* 0C09C2BA cmp/hi Rm,Rn */
	if (T) { UPD(0x0C09C2CCu, 7); goto L_0C09C2CC; }  /* 0C09C2BC bt */
L_0C09C2BE: BLKS(0x0C09C2BEu);
	r2 = R32(r3); UPD(0x0C09C2C0u, 1);  /* 0C09C2BE mov.l @Rm,Rn */
	r11 = 0x17FFFu; UPD(0x0C09C2C2u, 1);  /* 0C09C2C0 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r11;  /* 0C09C2C2 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C09C2CCu, 4); goto L_0C09C2CC; }  /* 0C09C2C4 bt */
L_0C09C2C6: BLKS(0x0C09C2C6u);
	r4 = 0x800u; UPD(0x0C09C2C8u, 1);  /* 0C09C2C6 mov.w @(disp,pc),Rn */
	r2 += r4;  /* 0C09C2C8 add Rm,Rn */
	W32(r3, r2); UPD(0x0C09C2CCu, 2);  /* 0C09C2CA mov.l Rm,@Rn */
L_0C09C2CC: BLKS(0x0C09C2CCu);
	r2 = 0xB4u; UPD(0x0C09C2CEu, 1);  /* 0C09C2CC mov.w @(disp,pc),Rn */
	IF(0x0C09C2CEu); MACL = r10 * r2;  /* 0C09C2CE mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C09C2D2u, 3);  /* 0C09C2D0 mov.l @(disp,pc),Rn */
	IF(0x0C09C2D2u); r0 = MACL;  /* 0C09C2D2 sts macl,Rn */
	r3 = 0x86u; UPD(0x0C09C2D6u, 2);  /* 0C09C2D4 mov.w @(disp,pc),Rn */
	r0 += r9;  /* 0C09C2D6 add Rm,Rn */
	IF(0x0C09C2D8u); r2 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C09C2DAu, 2);  /* 0C09C2D8 mov.w @(r0,Rm),Rn */
	r2 -= r7;  /* 0C09C2DA sub Rm,Rn */
	IF(0x0C09C2DCu); T = (s32)r2 >= 0;  /* 0C09C2DC cmp/pz Rn */
	if (T) { UPD(0x0C09C2E6u, 5); goto L_0C09C2E6; }  /* 0C09C2DE bt */
L_0C09C2E0: BLKS(0x0C09C2E0u);
	r2 = 0u - r2;  /* 0C09C2E0 neg Rm,Rn */
	{ r7 = 0x20u; /* slot mov #imm,Rn */ UPD(0x0C09C2E8u, 4); goto L_0C09C2E8; }  /* 0C09C2E2 bra */
L_0C09C2E6: BLKS(0x0C09C2E6u);
	r7 = 0x20u;  /* 0C09C2E6 mov #imm,Rn */
	UPD(0x0C09C2E8u, 1);
L_0C09C2E8: BLKS(0x0C09C2E8u);
	T = (s32)r2 > (s32)r7;  /* 0C09C2E8 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C09C2FCu, 4); goto L_0C09C2FC; }  /* 0C09C2EA bf */
L_0C09C2EC: BLKS(0x0C09C2ECu);
	r3 = 0x8Cu; UPD(0x0C09C2EEu, 1);  /* 0C09C2EC mov.w @(disp,pc),Rn */
	r5 = 0x8000u; UPD(0x0C09C2F0u, 1);  /* 0C09C2EE mov.l @(disp,pc),Rn */
	IF(0x0C09C2F0u); r2 = R32(r0 + r3); UPD(0x0C09C2F2u, 1);  /* 0C09C2F0 mov.l @(r0,Rm),Rn */
	T = (s32)r2 > (s32)r5;  /* 0C09C2F2 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C09C2FCu, 4); goto L_0C09C2FC; }  /* 0C09C2F4 bf */
L_0C09C2F6: BLKS(0x0C09C2F6u);
	r6 = 0xFFFFF800u; UPD(0x0C09C2F8u, 1);  /* 0C09C2F6 mov.w @(disp,pc),Rn */
	r2 += r6;  /* 0C09C2F8 add Rm,Rn */
	IF(0x0C09C2FAu); W32(r0 + r3, r2); UPD(0x0C09C2FCu, 2);  /* 0C09C2FA mov.l Rm,@(r0,Rn) */
L_0C09C2FC: BLKS(0x0C09C2FCu);
	r0 = 0xB4u; UPD(0x0C09C2FEu, 1);  /* 0C09C2FC mov.w @(disp,pc),Rn */
	IF(0x0C09C2FEu); MACL = r10 * r0;  /* 0C09C2FE mul.l Rm,Rn */
	r2 = 0xFF600000u; UPD(0x0C09C302u, 3);  /* 0C09C300 mov.l @(disp,pc),Rn */
	r10 = 0xC286578u; UPD(0x0C09C304u, 1);  /* 0C09C302 mov.l @(disp,pc),Rn */
	IF(0x0C09C304u); r7 = MACL;  /* 0C09C304 sts macl,Rn */
	r7 += r10;  /* 0C09C306 add Rm,Rn */
	r3 = R32(r7 + 0x24u); UPD(0x0C09C30Au, 3);  /* 0C09C308 mov.l @(disp,Rm),Rn */
	r2 += r3;  /* 0C09C30A add Rm,Rn */
	IF(0x0C09C30Cu); T = (s32)r2 >= 0;  /* 0C09C30C cmp/pz Rn */
	if (T) { UPD(0x0C09C312u, 5); goto L_0C09C312; }  /* 0C09C30E bt */
L_0C09C310: BLKS(0x0C09C310u);
	r2 = 0u - r2;  /* 0C09C310 neg Rm,Rn */
	UPD(0x0C09C312u, 1);
L_0C09C312: BLKS(0x0C09C312u);
	r8 = 0x1E00000u; UPD(0x0C09C314u, 1);  /* 0C09C312 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r8;  /* 0C09C314 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C09C32Au, 4); goto L_0C09C32A; }  /* 0C09C316 bt */
L_0C09C318: BLKS(0x0C09C318u);
	r6 = R32(r7 + 0x28u); UPD(0x0C09C31Au, 1);  /* 0C09C318 mov.l @(disp,Rm),Rn */
	r2 = 0xFE000000u; UPD(0x0C09C31Cu, 1);  /* 0C09C31A mov.l @(disp,pc),Rn */
	r2 += r6;  /* 0C09C31C add Rm,Rn */
	IF(0x0C09C31Eu); T = (s32)r2 >= 0;  /* 0C09C31E cmp/pz Rn */
	if (T) { UPD(0x0C09C324u, 5); goto L_0C09C324; }  /* 0C09C320 bt */
L_0C09C322: BLKS(0x0C09C322u);
	r2 = 0u - r2;  /* 0C09C322 neg Rm,Rn */
	UPD(0x0C09C324u, 1);
L_0C09C324: BLKS(0x0C09C324u);
	r11 = 0xC80000u; UPD(0x0C09C326u, 1);  /* 0C09C324 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r11;  /* 0C09C326 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C09C380u, 4); goto L_0C09C380; }  /* 0C09C328 bf */
L_0C09C32A: BLKS(0x0C09C32Au);
	r0 = 0xA0u; UPD(0x0C09C32Cu, 1);  /* 0C09C32A mov.w @(disp,pc),Rn */
	IF(0x0C09C32Cu); r3 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C09C32Eu, 1);  /* 0C09C32C mov.b @(r0,Rm),Rn */
	r3 += 0x1u;  /* 0C09C32E add #imm,Rn */
	IF(0x0C09C330u); W8(r0 + r7, r3); UPD(0x0C09C332u, 2);  /* 0C09C330 mov.b Rm,@(r0,Rn) */
	r0 += 0xFFFFFFE6u;  /* 0C09C332 add #imm,Rn */
	IF(0x0C09C334u); r4 = (u32)(s32)(s16)R16(r0 + r7); UPD(0x0C09C336u, 2);  /* 0C09C334 mov.w @(r0,Rm),Rn */
	r1 = 0x100u; UPD(0x0C09C338u, 1);  /* 0C09C336 mov.w @(disp,pc),Rn */
	r4 += r1;  /* 0C09C338 add Rm,Rn */
	IF(0x0C09C33Au); W16(r0 + r7, r4); UPD(0x0C09C33Cu, 2);  /* 0C09C33A mov.w Rm,@(r0,Rn) */
L_0C09C33C: BLKS(0x0C09C33Cu);
	{ IF(0x0C09C33Eu); ; /* slot nop */ UPD(0x0C09BD84u, 3); goto L_0C09BD84; }  /* 0C09C33C bra */
L_0C09C380: BLKS(0x0C09C380u);
	r7 += 0x5Cu;  /* 0C09C380 add #imm,Rn */
	r9 = R32(r7); UPD(0x0C09C384u, 2);  /* 0C09C382 mov.l @Rm,Rn */
	r3 -= r9;  /* 0C09C384 sub Rm,Rn */
	r7 += 0xFFFFFFA4u;  /* 0C09C386 add #imm,Rn */
	IF(0x0C09C388u); T = (s32)r3 >= 0;  /* 0C09C388 cmp/pz Rn */
	{ u32 c_ = !T; r1 = r3; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C09C410u, 6); goto L_0C09C410; } UPD(0x0C09C38Eu, 1); goto L_0C09C38E; }  /* 0C09C38A bf/s */
L_0C09C38E: BLKS(0x0C09C38Eu);
	r7 += 0x60u;  /* 0C09C38E add #imm,Rn */
	r3 = 0x80000u; UPD(0x0C09C392u, 2);  /* 0C09C390 mov.l @(disp,pc),Rn */
	r5 = R32(r7); UPD(0x0C09C394u, 1);  /* 0C09C392 mov.l @Rm,Rn */
	T = (s32)r1 > (s32)r3;  /* 0C09C394 cmp/gt Rm,Rn */
	r6 -= r5;  /* 0C09C396 sub Rm,Rn */
	IF(0x0C09C398u); r2 = T;  /* 0C09C398 movt Rn */
	r7 += 0xFFFFFFA0u;  /* 0C09C39A add #imm,Rn */
	IF(0x0C09C39Cu); T = (s32)r6 >= 0;  /* 0C09C39C cmp/pz Rn */
	{ u32 c_ = !T; r1 = r6; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C09C400u, 8); goto L_0C09C400; } UPD(0x0C09C3A2u, 1); goto L_0C09C3A2; }  /* 0C09C39E bf/s */
L_0C09C3A2: BLKS(0x0C09C3A2u);
	T = (s32)r1 > (s32)r3;  /* 0C09C3A2 cmp/gt Rm,Rn */
	IF(0x0C09C3A4u); r6 = T;  /* 0C09C3A4 movt Rn */
	r2 |= r6;  /* 0C09C3A6 or Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C09C3A8 tst Rm,Rn */
	if (!T) { UPD(0x0C09C33Cu, 7); goto L_0C09C33C; }  /* 0C09C3AA bf */
L_0C09C3AC: BLKS(0x0C09C3ACu);
	r2 = 0xC207546u; UPD(0x0C09C3AEu, 1);  /* 0C09C3AC mov.l @(disp,pc),Rn */
	r11 = (u32)(s32)(s8)R8(r2); UPD(0x0C09C3B0u, 1);  /* 0C09C3AE mov.b @Rm,Rn */
	r11 += 0x1u;  /* 0C09C3B0 add #imm,Rn */
	r0 = (u32)(s32)(s8)r11;  /* 0C09C3B2 exts.b Rm,Rn */
	T = r0 == 0x5u;  /* 0C09C3B4 cmp/eq #imm,r0 */
	r0 = 0xFFFFFFFFu;  /* 0C09C3B6 mov #imm,Rn */
	{ u32 t_ = 0u - r0, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r3 = r_; }  /* 0C09C3B8 negc Rm,Rn */
	W8(r2, r11); UPD(0x0C09C3BCu, 6);  /* 0C09C3BA mov.b Rm,@Rn */
	r0 = r7;  /* 0C09C3BC mov Rm,Rn */
	r8 = 0xA7u; UPD(0x0C09C3C0u, 2);  /* 0C09C3BE mov.w @(disp,pc),Rn */
	IF(0x0C09C3C0u); r10 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C09C3C2u, 1);  /* 0C09C3C0 mov.b @(r0,Rm),Rn */
	IF(0x0C09C3C2u); T = r10 & 1; r10 = (u32)((s32)r10 >> 1);  /* 0C09C3C2 shar Rn */
	IF(0x0C09C3C4u); T = r10 & 1; r10 = (u32)((s32)r10 >> 1);  /* 0C09C3C4 shar Rn */
	IF(0x0C09C3C6u); T = r10 & 1; r10 = (u32)((s32)r10 >> 1);  /* 0C09C3C6 shar Rn */
	r0 = r10;  /* 0C09C3C8 mov Rm,Rn */
	r0 ^= 0x1u;  /* 0C09C3CA xor #imm,r0 */
	r0 &= 0x1u;  /* 0C09C3CC and #imm,r0 */
	r3 &= r0;  /* 0C09C3CE and Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C09C3D0 tst Rm,Rn */
	if (T) { UPD(0x0C09C3E0u, 11); goto L_0C09C3E0; }  /* 0C09C3D2 bt */
L_0C09C3D4: BLKS(0x0C09C3D4u);
	r0 = 0xA0u; UPD(0x0C09C3D6u, 1);  /* 0C09C3D4 mov.w @(disp,pc),Rn */
	IF(0x0C09C3D6u); r1 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C09C3D8u, 1);  /* 0C09C3D6 mov.b @(r0,Rm),Rn */
	{ r1 += 0xFFFFFFFFu; /* slot add #imm,Rn */ UPD(0x0C09BEE6u, 3); goto L_0C09BEE6; }  /* 0C09C3D8 bra */
L_0C09C3E0: BLKS(0x0C09C3E0u);
	r4 = 0xA0u; UPD(0x0C09C3E2u, 1);  /* 0C09C3E0 mov.w @(disp,pc),Rn */
	r4 += r7;  /* 0C09C3E2 add Rm,Rn */
	W8(r2, r3); UPD(0x0C09C3E6u, 2);  /* 0C09C3E4 mov.b Rm,@Rn */
	r1 = r4;  /* 0C09C3E6 mov Rm,Rn */
	r4 += 0x2u;  /* 0C09C3E8 add #imm,Rn */
	W8(r4, r3); UPD(0x0C09C3ECu, 3);  /* 0C09C3EA mov.b Rm,@Rn */
	r1 += 0x1u;  /* 0C09C3EC add #imm,Rn */
	r4 += 0xFFFFFFFEu;  /* 0C09C3EE add #imm,Rn */
	r7 = (u32)(s32)(s8)R8(r4); UPD(0x0C09C3F2u, 3);  /* 0C09C3F0 mov.b @Rm,Rn */
	r7 += 0x1u;  /* 0C09C3F2 add #imm,Rn */
	W8(r1, r3); UPD(0x0C09C3F6u, 2);  /* 0C09C3F4 mov.b Rm,@Rn */
	{ W8(r4, r7); /* slot mov.b Rm,@Rn */ UPD(0x0C09BD84u, 3); goto L_0C09BD84; }  /* 0C09C3F6 bra */
L_0C09C400: BLKS(0x0C09C400u);
	{ r1 = 0u - r6; /* slot neg Rm,Rn */ UPD(0x0C09C3A2u, 3); goto L_0C09C3A2; }  /* 0C09C400 bra */
L_0C09C410: BLKS(0x0C09C410u);
	{ r1 = 0u - r3; /* slot neg Rm,Rn */ UPD(0x0C09C38Eu, 3); goto L_0C09C38E; }  /* 0C09C410 bra */
L_0C09C420: BLKS(0x0C09C420u);
	r3 = 0xB4u; UPD(0x0C09C422u, 1);  /* 0C09C420 mov.w @(disp,pc),Rn */
	IF(0x0C09C422u); MACL = r10 * r3;  /* 0C09C422 mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C09C426u, 3);  /* 0C09C424 mov.l @(disp,pc),Rn */
	IF(0x0C09C426u); r3 = MACL;  /* 0C09C426 sts macl,Rn */
	r0 = 0x8Cu; UPD(0x0C09C42Au, 2);  /* 0C09C428 mov.w @(disp,pc),Rn */
	r3 += r2;  /* 0C09C42A add Rm,Rn */
	IF(0x0C09C42Cu); r7 = R32(r0 + r3); UPD(0x0C09C42Eu, 2);  /* 0C09C42C mov.l @(r0,Rm),Rn */
	T = (r7 & r7) == 0;  /* 0C09C42E tst Rm,Rn */
	if (T) { UPD(0x0C09C440u, 4); goto L_0C09C440; }  /* 0C09C430 bt */
L_0C09C432: BLKS(0x0C09C432u);
	r9 = 0xFFFFF800u; UPD(0x0C09C434u, 1);  /* 0C09C432 mov.w @(disp,pc),Rn */
	r7 += r9;  /* 0C09C434 add Rm,Rn */
	IF(0x0C09C436u); W32(r0 + r3, r7); UPD(0x0C09C438u, 2);  /* 0C09C436 mov.l Rm,@(r0,Rn) */
L_0C09C438: BLKS(0x0C09C438u);
	{ IF(0x0C09C43Au); ; /* slot nop */ UPD(0x0C09BD84u, 3); goto L_0C09BD84; }  /* 0C09C438 bra */
L_0C09C440: BLKS(0x0C09C440u);
	r0 = 0x99u; UPD(0x0C09C442u, 1);  /* 0C09C440 mov.w @(disp,pc),Rn */
	r5 = 0x1Du;  /* 0C09C442 mov #imm,Rn */
	IF(0x0C09C444u); r10 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C09C446u, 2);  /* 0C09C444 mov.b @(r0,Rm),Rn */
	r10 += 0x1u;  /* 0C09C446 add #imm,Rn */
	r6 = r10 & 0xFF;  /* 0C09C448 extu.b Rm,Rn */
	T = r6 > r5;  /* 0C09C44A cmp/hi Rm,Rn */
	{ u32 c_ = !T; IF(0x0C09C44Eu); W8(r0 + r3, r10); /* slot mov.b Rm,@(r0,Rn) */ if (c_) { UPD(0x0C09C438u, 6); goto L_0C09C438; } UPD(0x0C09C450u, 1); goto L_0C09C450; }  /* 0C09C44C bf/s */
L_0C09C450: BLKS(0x0C09C450u);
	IF(0x0C09C450u); W8(r0 + r3, r7); UPD(0x0C09C452u, 1);  /* 0C09C450 mov.b Rm,@(r0,Rn) */
	r11 = 0xA7u; UPD(0x0C09C454u, 1);  /* 0C09C452 mov.w @(disp,pc),Rn */
	r0 = r3;  /* 0C09C454 mov Rm,Rn */
	IF(0x0C09C456u); r8 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C09C458u, 2);  /* 0C09C456 mov.b @(r0,Rm),Rn */
	r0 = r8;  /* 0C09C458 mov Rm,Rn */
	r0 &= 0x8u;  /* 0C09C45A and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C09C45C tst Rm,Rn */
	if (T) { UPD(0x0C09C470u, 6); goto L_0C09C470; }  /* 0C09C45E bt */
L_0C09C460: BLKS(0x0C09C460u);
	r4 = 0xAu;  /* 0C09C460 mov #imm,Rn */
	r0 = 0xA0u; UPD(0x0C09C464u, 2);  /* 0C09C462 mov.w @(disp,pc),Rn */
	{ IF(0x0C09C466u); W8(r0 + r3, r4); /* slot mov.b Rm,@(r0,Rn) */ UPD(0x0C09BD84u, 3); goto L_0C09BD84; }  /* 0C09C464 bra */
L_0C09C470: BLKS(0x0C09C470u);
	r0 = 0xA0u; UPD(0x0C09C472u, 1);  /* 0C09C470 mov.w @(disp,pc),Rn */
	IF(0x0C09C472u); r9 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C09C474u, 1);  /* 0C09C472 mov.b @(r0,Rm),Rn */
	r9 += 0x1u;  /* 0C09C474 add #imm,Rn */
	IF(0x0C09C476u); W8(r0 + r3, r9); UPD(0x0C09C478u, 2);  /* 0C09C476 mov.b Rm,@(r0,Rn) */
L_0C09C478: BLKS(0x0C09C478u);
	{ IF(0x0C09C47Au); ; /* slot nop */ UPD(0x0C09BD84u, 3); goto L_0C09BD84; }  /* 0C09C478 bra */
L_0C09C480: BLKS(0x0C09C480u);
	r11 = 0xB4u; UPD(0x0C09C482u, 1);  /* 0C09C480 mov.w @(disp,pc),Rn */
	r5 = 0xFFFFFF80u;  /* 0C09C482 mov #imm,Rn */
	IF(0x0C09C484u); MACL = r10 * r11;  /* 0C09C484 mul.l Rm,Rn */
	r8 = 0xC286578u; UPD(0x0C09C488u, 4);  /* 0C09C486 mov.l @(disp,pc),Rn */
	r9 = 0x0u;  /* 0C09C488 mov #imm,Rn */
	IF(0x0C09C48Au); r2 = MACL;  /* 0C09C48A sts macl,Rn */
	r6 = 0xA0u; UPD(0x0C09C48Eu, 3);  /* 0C09C48C mov.w @(disp,pc),Rn */
	r2 += r8;  /* 0C09C48E add Rm,Rn */
	r2 += r6;  /* 0C09C490 add Rm,Rn */
	r2 += 0x1u;  /* 0C09C492 add #imm,Rn */
	W8(r2, r5); UPD(0x0C09C496u, 4);  /* 0C09C494 mov.b Rm,@Rn */
	r2 += 0x1u;  /* 0C09C496 add #imm,Rn */
	W8(r2, r9); UPD(0x0C09C49Au, 2);  /* 0C09C498 mov.b Rm,@Rn */
	{ r2 += 0xFFFFFFFEu; /* slot add #imm,Rn */ UPD(0x0C09BFF6u, 3); goto L_0C09BFF6; }  /* 0C09C49A bra */
L_0C09C4A0: BLKS(0x0C09C4A0u);
	r0 = 0xB4u; UPD(0x0C09C4A2u, 1);  /* 0C09C4A0 mov.w @(disp,pc),Rn */
	IF(0x0C09C4A2u); MACL = r10 * r0;  /* 0C09C4A2 mul.l Rm,Rn */
	r3 = 0xA1u; UPD(0x0C09C4A6u, 3);  /* 0C09C4A4 mov.w @(disp,pc),Rn */
	r10 = 0xC286578u; UPD(0x0C09C4A8u, 1);  /* 0C09C4A6 mov.l @(disp,pc),Rn */
	IF(0x0C09C4A8u); r0 = MACL;  /* 0C09C4A8 sts macl,Rn */
	r0 += r10;  /* 0C09C4AA add Rm,Rn */
	r3 += r0;  /* 0C09C4AC add Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r3); UPD(0x0C09C4B0u, 4);  /* 0C09C4AE mov.b @Rm,Rn */
	IF(0x0C09C4B0u); T = (s32)r4 >= 0;  /* 0C09C4B0 cmp/pz Rn */
	{ u32 c_ = !T; r3 += 0xFFFFFFFFu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C09C478u, 4); goto L_0C09C478; } goto L_0C09C4B6; }  /* 0C09C4B2 bf/s */
L_0C09C4B6: BLKS(0x0C09C4B6u);
	r0 += 0x50u;  /* 0C09C4B6 add #imm,Rn */
	r1 = R32(r0); UPD(0x0C09C4BAu, 3);  /* 0C09C4B8 mov.l @Rm,Rn */
	r0 += 0xFFFFFFECu;  /* 0C09C4BA add #imm,Rn */
	r7 = 0xE10u; UPD(0x0C09C4BEu, 2);  /* 0C09C4BC mov.w @(disp,pc),Rn */
	r5 = (u32)(s32)(s16)R16(r0); UPD(0x0C09C4C0u, 1);  /* 0C09C4BE mov.w @Rm,Rn */
	T = (s32)r1 > (s32)r7;  /* 0C09C4C0 cmp/gt Rm,Rn */
	r8 = 0xC207544u; UPD(0x0C09C4C4u, 2);  /* 0C09C4C2 mov.l @(disp,pc),Rn */
	r0 += 0xFFFFFFC4u;  /* 0C09C4C4 add #imm,Rn */
	r2 = 0xA7u; UPD(0x0C09C4C8u, 2);  /* 0C09C4C6 mov.w @(disp,pc),Rn */
	IF(0x0C09C4C8u); r7 = T;  /* 0C09C4C8 movt Rn */
	r6 = (u32)(s32)(s16)R16(r8); UPD(0x0C09C4CCu, 2);  /* 0C09C4CA mov.w @Rm,Rn */
	IF(0x0C09C4CCu); r0 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C09C4CEu, 1);  /* 0C09C4CC mov.b @(r0,Rm),Rn */
	T = (s32)r6 > (s32)r5;  /* 0C09C4CE cmp/gt Rm,Rn */
	IF(0x0C09C4D0u); r9 = T;  /* 0C09C4D0 movt Rn */
	IF(0x0C09C4D2u); r0 >>= 2;  /* 0C09C4D2 shlr2 Rn */
	IF(0x0C09C4D4u); T = r0 & 1; r0 >>= 1;  /* 0C09C4D4 shlr Rn */
	r7 |= r9;  /* 0C09C4D6 or Rm,Rn */
	r0 &= 0x1u;  /* 0C09C4D8 and #imm,r0 */
	r7 |= r0;  /* 0C09C4DA or Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C09C4DC tst Rm,Rn */
	if (T) { UPD(0x0C09C4F0u, 11); goto L_0C09C4F0; }  /* 0C09C4DE bt */
L_0C09C4E0: BLKS(0x0C09C4E0u);
	r11 = (u32)(s32)(s8)R8(r3); UPD(0x0C09C4E2u, 1);  /* 0C09C4E0 mov.b @Rm,Rn */
	r11 += 0x1u;  /* 0C09C4E2 add #imm,Rn */
	{ W8(r3, r11); /* slot mov.b Rm,@Rn */ UPD(0x0C09BD84u, 4); goto L_0C09BD84; }  /* 0C09C4E4 bra */
L_0C09C4F0: BLKS(0x0C09C4F0u);
	{ W8(r3, r7); /* slot mov.b Rm,@Rn */ UPD(0x0C09BD84u, 3); goto L_0C09BD84; }  /* 0C09C4F0 bra */
L_0C09C520: BLKS(0x0C09C520u);
	r11 = 0xC069B90u; UPD(0x0C09C522u, 1);  /* 0C09C520 mov.l @(disp,pc),Rn */
	r9 = 0xB4u; UPD(0x0C09C524u, 1);  /* 0C09C522 mov.w @(disp,pc),Rn */
	IF(0x0C09C524u); { u32 t_ = r11; PR = 0x0C09C528u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B90, 0x0C069B90u, 0x0C09C528u); }  /* 0C09C524 jsr @Rn */
L_0C09C528: BLKS(0x0C09C528u);
	IF(0x0C09C528u); MACL = r10 * r9;  /* 0C09C528 mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C09C52Cu, 3);  /* 0C09C52A mov.l @(disp,pc),Rn */
	r5 = (u32)(s32)(s16)r0;  /* 0C09C52C exts.w Rm,Rn */
	r2 = 0x2A0u; UPD(0x0C09C530u, 2);  /* 0C09C52E mov.w @(disp,pc),Rn */
	IF(0x0C09C530u); r9 = MACL;  /* 0C09C530 sts macl,Rn */
	r9 += r6;  /* 0C09C532 add Rm,Rn */
	IF(0x0C09C534u); MACL = r5 * r2;  /* 0C09C534 mul.l Rm,Rn */
	r6 = r9;  /* 0C09C536 mov Rm,Rn */
	r8 = 0x300000u; UPD(0x0C09C53Au, 6);  /* 0C09C538 mov.l @(disp,pc),Rn */
	r6 += 0x5Cu;  /* 0C09C53A add #imm,Rn */
	r4 = 0xC29D1D8u; UPD(0x0C09C53Eu, 2);  /* 0C09C53C mov.l @(disp,pc),Rn */
	IF(0x0C09C53Eu); r10 = MACL;  /* 0C09C53E sts macl,Rn */
	W32(r6, r8); UPD(0x0C09C542u, 2);  /* 0C09C540 mov.l Rm,@Rn */
	r4 += r10;  /* 0C09C542 add Rm,Rn */
	r3 = R32(r4 + 0x14u); UPD(0x0C09C546u, 2);  /* 0C09C544 mov.l @(disp,Rm),Rn */
	r7 = r9;  /* 0C09C546 mov Rm,Rn */
	r2 = 0xFE000000u; UPD(0x0C09C54Au, 2);  /* 0C09C548 mov.l @(disp,pc),Rn */
	r7 += 0x60u;  /* 0C09C54A add #imm,Rn */
	r2 += r3;  /* 0C09C54C add Rm,Rn */
	IF(0x0C09C54Eu); T = (s32)r2 >= 0;  /* 0C09C54E cmp/pz Rn */
	{ u32 c_ = !T; W32(r7, r3); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C09C580u, 6); goto L_0C09C580; } UPD(0x0C09C554u, 1); goto L_0C09C554; }  /* 0C09C550 bf/s */
L_0C09C554: BLKS(0x0C09C554u);
	r0 = 0xA00000u; UPD(0x0C09C556u, 1);  /* 0C09C554 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r0;  /* 0C09C556 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C09C55Eu, 4); goto L_0C09C55E; }  /* 0C09C558 bf */
L_0C09C55A: BLKS(0x0C09C55Au);
	r3 = 0x2000000u; UPD(0x0C09C55Cu, 1);  /* 0C09C55A mov.l @(disp,pc),Rn */
	W32(r7, r3); UPD(0x0C09C55Eu, 1);  /* 0C09C55C mov.l Rm,@Rn */
L_0C09C55E: BLKS(0x0C09C55Eu);
	r8 = 0xC068E60u; UPD(0x0C09C560u, 1);  /* 0C09C55E mov.l @(disp,pc),Rn */
	r10 = 0x86u; UPD(0x0C09C562u, 1);  /* 0C09C560 mov.w @(disp,pc),Rn */
	r4 = R32(r9 + 0x24u); UPD(0x0C09C564u, 1);  /* 0C09C562 mov.l @(disp,Rm),Rn */
	r10 += r9;  /* 0C09C564 add Rm,Rn */
	r5 = R32(r9 + 0x28u); UPD(0x0C09C568u, 2);  /* 0C09C566 mov.l @(disp,Rm),Rn */
	r6 = R32(r6); UPD(0x0C09C56Au, 1);  /* 0C09C568 mov.l @Rm,Rn */
	IF(0x0C09C56Au); { u32 t_ = r8; PR = 0x0C09C56Eu; r7 = R32(r7); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C068E60, 0x0C068E60u, 0x0C09C56Eu); }  /* 0C09C56A jsr @Rn */
L_0C09C56E: BLKS(0x0C09C56Eu);
	r2 = 0xA0u; UPD(0x0C09C570u, 1);  /* 0C09C56E mov.w @(disp,pc),Rn */
	W16(r10, r0); UPD(0x0C09C572u, 1);  /* 0C09C570 mov.w Rm,@Rn */
	{ r2 += r9; /* slot add Rm,Rn */ UPD(0x0C09BFEEu, 3); goto L_0C09BFEE; }  /* 0C09C572 bra */
L_0C09C580: BLKS(0x0C09C580u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C09C554u, 3); goto L_0C09C554; }  /* 0C09C580 bra */
L_0C09C590: BLKS(0x0C09C590u);
	r5 = 0xB4u; UPD(0x0C09C592u, 1);  /* 0C09C590 mov.w @(disp,pc),Rn */
	IF(0x0C09C592u); MACL = r10 * r5;  /* 0C09C592 mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C09C596u, 3);  /* 0C09C594 mov.l @(disp,pc),Rn */
	IF(0x0C09C596u); r3 = MACL;  /* 0C09C596 sts macl,Rn */
	r0 = 0x8Cu; UPD(0x0C09C59Au, 2);  /* 0C09C598 mov.w @(disp,pc),Rn */
	r3 += r2;  /* 0C09C59A add Rm,Rn */
	IF(0x0C09C59Cu); r2 = R32(r0 + r3); UPD(0x0C09C59Eu, 2);  /* 0C09C59C mov.l @(r0,Rm),Rn */
	T = (r2 & r2) == 0;  /* 0C09C59E tst Rm,Rn */
	if (!T) { UPD(0x0C09C5A6u, 4); goto L_0C09C5A6; }  /* 0C09C5A0 bf */
L_0C09C5A2: BLKS(0x0C09C5A2u);
	{ IF(0x0C09C5A4u); ; /* slot nop */ UPD(0x0C09C470u, 3); goto L_0C09C470; }  /* 0C09C5A2 bra */
L_0C09C5A6: BLKS(0x0C09C5A6u);
	r6 = 0xFFFFF800u; UPD(0x0C09C5A8u, 1);  /* 0C09C5A6 mov.w @(disp,pc),Rn */
	r2 += r6;  /* 0C09C5A8 add Rm,Rn */
	IF(0x0C09C5AAu); W32(r0 + r3, r2); UPD(0x0C09C5ACu, 2);  /* 0C09C5AA mov.l Rm,@(r0,Rn) */
L_0C09C5AC: BLKS(0x0C09C5ACu);
	{ IF(0x0C09C5AEu); ; /* slot nop */ UPD(0x0C09BD84u, 3); goto L_0C09BD84; }  /* 0C09C5AC bra */
L_0C09C5B0: BLKS(0x0C09C5B0u);
	r4 = 0xB4u; UPD(0x0C09C5B2u, 1);  /* 0C09C5B0 mov.w @(disp,pc),Rn */
	IF(0x0C09C5B2u); MACL = r10 * r4;  /* 0C09C5B2 mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C09C5B6u, 3);  /* 0C09C5B4 mov.l @(disp,pc),Rn */
	IF(0x0C09C5B6u); r0 = MACL;  /* 0C09C5B6 sts macl,Rn */
	r3 = 0x8Cu; UPD(0x0C09C5BAu, 2);  /* 0C09C5B8 mov.w @(disp,pc),Rn */
	r0 += r7;  /* 0C09C5BA add Rm,Rn */
	r1 = 0x17FFFu; UPD(0x0C09C5BEu, 2);  /* 0C09C5BC mov.l @(disp,pc),Rn */
	{ IF(0x0C09C5C0u); r2 = R32(r0 + r3); /* slot mov.l @(r0,Rm),Rn */ UPD(0x0C09C070u, 3); goto L_0C09C070; }  /* 0C09C5BE bra */
L_0C09C5D0: BLKS(0x0C09C5D0u);
	r6 = 0xB4u; UPD(0x0C09C5D2u, 1);  /* 0C09C5D0 mov.w @(disp,pc),Rn */
	IF(0x0C09C5D2u); MACL = r10 * r6;  /* 0C09C5D2 mul.l Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C09C5D6u, 3);  /* 0C09C5D4 mov.l @(disp,pc),Rn */
	IF(0x0C09C5D6u); r7 = MACL;  /* 0C09C5D6 sts macl,Rn */
	r0 = 0x8Cu; UPD(0x0C09C5DAu, 2);  /* 0C09C5D8 mov.w @(disp,pc),Rn */
	r7 += r5;  /* 0C09C5DA add Rm,Rn */
	IF(0x0C09C5DCu); r3 = R32(r0 + r7); UPD(0x0C09C5DEu, 2);  /* 0C09C5DC mov.l @(r0,Rm),Rn */
	T = (r3 & r3) == 0;  /* 0C09C5DE tst Rm,Rn */
	if (T) { UPD(0x0C09C5E6u, 4); goto L_0C09C5E6; }  /* 0C09C5E0 bt */
L_0C09C5E2: BLKS(0x0C09C5E2u);
	{ IF(0x0C09C5E4u); ; /* slot nop */ UPD(0x0C09BF20u, 3); goto L_0C09BF20; }  /* 0C09C5E2 bra */
L_0C09C5E6: BLKS(0x0C09C5E6u);
	r0 = 0x9Fu; UPD(0x0C09C5E8u, 1);  /* 0C09C5E6 mov.w @(disp,pc),Rn */
	{ IF(0x0C09C5EAu); r11 = (u32)(s32)(s8)R8(r0 + r7); /* slot mov.b @(r0,Rm),Rn */ UPD(0x0C09C13Cu, 3); goto L_0C09C13C; }  /* 0C09C5E8 bra */
L_0C09C5F0: BLKS(0x0C09C5F0u);
	r2 = 0xB4u; UPD(0x0C09C5F2u, 1);  /* 0C09C5F0 mov.w @(disp,pc),Rn */
	r8 = 0x12u;  /* 0C09C5F2 mov #imm,Rn */
	IF(0x0C09C5F4u); MACL = r10 * r2;  /* 0C09C5F4 mul.l Rm,Rn */
	r4 = 0xC286578u; UPD(0x0C09C5F8u, 4);  /* 0C09C5F6 mov.l @(disp,pc),Rn */
	IF(0x0C09C5F8u); r0 = MACL;  /* 0C09C5F8 sts macl,Rn */
	r4 += r0;  /* 0C09C5FA add Rm,Rn */
	r0 = 0xA0u; UPD(0x0C09C5FEu, 3);  /* 0C09C5FC mov.w @(disp,pc),Rn */
	IF(0x0C09C5FEu); r7 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C09C600u, 1);  /* 0C09C5FE mov.b @(r0,Rm),Rn */
	r2 = r7 & 0xFF;  /* 0C09C600 extu.b Rm,Rn */
	T = r2 > r8;  /* 0C09C602 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C09C5ACu, 5); goto L_0C09C5AC; }  /* 0C09C604 bt */
L_0C09C606: BLKS(0x0C09C606u);
	r0 = 0xC09C644u;  /* 0C09C606 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C09C608 add Rm,Rn */
	IF(0x0C09C60Au); r5 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C09C60Cu, 3);  /* 0C09C60A mov.w @(r0,Rm),Rn */
	IF(0x0C09C60Cu); { u32 tv_ = (r5 + 0x0C09C610u); u32 t_ = PHYS(tv_); IF(0x0C09C60Eu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C09BE50u: goto L_0C09BE50; case 0x0C09BEA0u: goto L_0C09BEA0; case 0x0C09C670u: goto L_0C09C670; case 0x0C09C6A0u: goto L_0C09C6A0; case 0x0C09C6D0u: goto L_0C09C6D0; case 0x0C09C6F2u: goto L_0C09C6F2; case 0x0C09C710u: goto L_0C09C710; case 0x0C09C790u: goto L_0C09C790; case 0x0C09C830u: goto L_0C09C830; case 0x0C09C850u: goto L_0C09C850; case 0x0C09C870u: goto L_0C09C870; case 0x0C09C890u: goto L_0C09C890; default: JUMPD(tv_); } }  /* 0C09C60C braf Rn */
L_0C09C670: BLKS(0x0C09C670u);
	r9 = 0xB4u; UPD(0x0C09C672u, 1);  /* 0C09C670 mov.w @(disp,pc),Rn */
	IF(0x0C09C672u); MACL = r10 * r9;  /* 0C09C672 mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C09C676u, 3);  /* 0C09C674 mov.l @(disp,pc),Rn */
	IF(0x0C09C676u); r8 = MACL;  /* 0C09C676 sts macl,Rn */
	r10 = 0xA0u; UPD(0x0C09C67Au, 2);  /* 0C09C678 mov.w @(disp,pc),Rn */
	r8 += r3;  /* 0C09C67A add Rm,Rn */
	r9 = 0xC062780u; UPD(0x0C09C67Eu, 2);  /* 0C09C67C mov.l @(disp,pc),Rn */
	r8 += r10;  /* 0C09C67E add Rm,Rn */
	r10 = 0xC1CB750u; UPD(0x0C09C682u, 2);  /* 0C09C680 mov.l @(disp,pc),Rn */
	IF(0x0C09C682u); { u32 t_ = r9; PR = 0x0C09C686u; r4 = 0x7u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C09C686u); }  /* 0C09C682 jsr @Rn */
L_0C09C686: BLKS(0x0C09C686u);
	IF(0x0C09C686u); r6 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C09C688u, 1);  /* 0C09C686 mov.b @(r0,Rm),Rn */
	r8 += 0x1u;  /* 0C09C688 add #imm,Rn */
	W8(r8, r6); UPD(0x0C09C68Cu, 2);  /* 0C09C68A mov.b Rm,@Rn */
	r4 = 0x7u;  /* 0C09C68C mov #imm,Rn */
	{ r8 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C09BE30u, 4); goto L_0C09BE30; }  /* 0C09C68E bra */
L_0C09C6A0: BLKS(0x0C09C6A0u);
	r7 = 0xB4u; UPD(0x0C09C6A2u, 1);  /* 0C09C6A0 mov.w @(disp,pc),Rn */
	IF(0x0C09C6A2u); MACL = r10 * r7;  /* 0C09C6A2 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C09C6A6u, 3);  /* 0C09C6A4 mov.l @(disp,pc),Rn */
	IF(0x0C09C6A6u); r7 = MACL;  /* 0C09C6A6 sts macl,Rn */
	r7 += r0;  /* 0C09C6A8 add Rm,Rn */
	r0 = 0x8Cu; UPD(0x0C09C6ACu, 3);  /* 0C09C6AA mov.w @(disp,pc),Rn */
	IF(0x0C09C6ACu); r3 = R32(r0 + r7); UPD(0x0C09C6AEu, 1);  /* 0C09C6AC mov.l @(r0,Rm),Rn */
	T = (r3 & r3) == 0;  /* 0C09C6AE tst Rm,Rn */
	if (T) { UPD(0x0C09C6C0u, 4); goto L_0C09C6C0; }  /* 0C09C6B0 bt */
L_0C09C6B2: BLKS(0x0C09C6B2u);
	r1 = 0xFFFFF000u; UPD(0x0C09C6B4u, 1);  /* 0C09C6B2 mov.w @(disp,pc),Rn */
	{ r3 += r1; /* slot add Rm,Rn */ UPD(0x0C09BF24u, 3); goto L_0C09BF24; }  /* 0C09C6B4 bra */
L_0C09C6C0: BLKS(0x0C09C6C0u);
	r4 = 0xC207546u; UPD(0x0C09C6C2u, 1);  /* 0C09C6C0 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r4); UPD(0x0C09C6C4u, 1);  /* 0C09C6C2 mov.b @Rm,Rn */
	{ T = r0 == 0x6u; /* slot cmp/eq #imm,r0 */ UPD(0x0C09BED8u, 3); goto L_0C09BED8; }  /* 0C09C6C4 bra */
L_0C09C6D0: BLKS(0x0C09C6D0u);
	r6 = 0xB4u; UPD(0x0C09C6D2u, 1);  /* 0C09C6D0 mov.w @(disp,pc),Rn */
	r5 = 0xFFFFFF80u;  /* 0C09C6D2 mov #imm,Rn */
	IF(0x0C09C6D4u); MACL = r10 * r6;  /* 0C09C6D4 mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C09C6D8u, 4);  /* 0C09C6D6 mov.l @(disp,pc),Rn */
	r9 = 0x0u;  /* 0C09C6D8 mov #imm,Rn */
	IF(0x0C09C6DAu); r0 = MACL;  /* 0C09C6DA sts macl,Rn */
	r4 = 0xA0u; UPD(0x0C09C6DEu, 3);  /* 0C09C6DC mov.w @(disp,pc),Rn */
	r0 += r3;  /* 0C09C6DE add Rm,Rn */
	r0 += r4;  /* 0C09C6E0 add Rm,Rn */
	r0 += 0x1u;  /* 0C09C6E2 add #imm,Rn */
	W8(r0, r5); UPD(0x0C09C6E6u, 4);  /* 0C09C6E4 mov.b Rm,@Rn */
	r0 += 0x1u;  /* 0C09C6E6 add #imm,Rn */
	W8(r0, r9); UPD(0x0C09C6EAu, 2);  /* 0C09C6E8 mov.b Rm,@Rn */
	r0 += 0xFFFFFFFEu;  /* 0C09C6EA add #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r0); UPD(0x0C09C6EEu, 2);  /* 0C09C6EC mov.b @Rm,Rn */
	r2 += 0x1u;  /* 0C09C6EE add #imm,Rn */
	W8(r0, r2); UPD(0x0C09C6F2u, 2);  /* 0C09C6F0 mov.b Rm,@Rn */
L_0C09C6F2: BLKS(0x0C09C6F2u);
	r7 = 0xB4u; UPD(0x0C09C6F4u, 1);  /* 0C09C6F2 mov.w @(disp,pc),Rn */
	IF(0x0C09C6F4u); MACL = r10 * r7;  /* 0C09C6F4 mul.l Rm,Rn */
	r11 = 0xC286578u; UPD(0x0C09C6F8u, 3);  /* 0C09C6F6 mov.l @(disp,pc),Rn */
	IF(0x0C09C6F8u); r2 = MACL;  /* 0C09C6F8 sts macl,Rn */
	r8 = 0xA0u; UPD(0x0C09C6FCu, 2);  /* 0C09C6FA mov.w @(disp,pc),Rn */
	r2 += r11;  /* 0C09C6FC add Rm,Rn */
	r2 += r8;  /* 0C09C6FE add Rm,Rn */
	r2 += 0x1u;  /* 0C09C700 add #imm,Rn */
	r10 = (u32)(s32)(s8)R8(r2); UPD(0x0C09C704u, 4);  /* 0C09C702 mov.b @Rm,Rn */
	IF(0x0C09C704u); T = (s32)r10 >= 0;  /* 0C09C704 cmp/pz Rn */
	{ u32 c_ = !T; r2 += 0xFFFFFFFFu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C09C7E8u, 4); goto L_0C09C7E8; } goto L_0C09C70A; }  /* 0C09C706 bf/s */
L_0C09C70A: BLKS(0x0C09C70Au);
	{ r3 = (u32)(s32)(s8)R8(r2); /* slot mov.b @Rm,Rn */ UPD(0x0C09BFF8u, 4); goto L_0C09BFF8; }  /* 0C09C70A bra */
L_0C09C710: BLKS(0x0C09C710u);
	r8 = 0xC069B90u; UPD(0x0C09C712u, 1);  /* 0C09C710 mov.l @(disp,pc),Rn */
	r9 = 0xB4u; UPD(0x0C09C714u, 1);  /* 0C09C712 mov.w @(disp,pc),Rn */
	IF(0x0C09C714u); { u32 t_ = r8; PR = 0x0C09C718u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B90, 0x0C069B90u, 0x0C09C718u); }  /* 0C09C714 jsr @Rn */
L_0C09C718: BLKS(0x0C09C718u);
	IF(0x0C09C718u); MACL = r10 * r9;  /* 0C09C718 mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C09C71Cu, 3);  /* 0C09C71A mov.l @(disp,pc),Rn */
	r3 = (u32)(s32)(s16)r0;  /* 0C09C71C exts.w Rm,Rn */
	r4 = 0x2A0u; UPD(0x0C09C720u, 2);  /* 0C09C71E mov.w @(disp,pc),Rn */
	IF(0x0C09C720u); r9 = MACL;  /* 0C09C720 sts macl,Rn */
	r9 += r6;  /* 0C09C722 add Rm,Rn */
	IF(0x0C09C724u); MACL = r3 * r4;  /* 0C09C724 mul.l Rm,Rn */
	r6 = r9;  /* 0C09C726 mov Rm,Rn */
	r10 = 0x400000u; UPD(0x0C09C72Au, 6);  /* 0C09C728 mov.l @(disp,pc),Rn */
	r6 += 0x5Cu;  /* 0C09C72A add #imm,Rn */
	r5 = 0xC29D1D8u; UPD(0x0C09C72Eu, 2);  /* 0C09C72C mov.l @(disp,pc),Rn */
	IF(0x0C09C72Eu); r2 = MACL;  /* 0C09C72E sts macl,Rn */
	W32(r6, r10); UPD(0x0C09C732u, 2);  /* 0C09C730 mov.l Rm,@Rn */
	r5 += r2;  /* 0C09C732 add Rm,Rn */
	r0 = R32(r5 + 0x14u); UPD(0x0C09C736u, 2);  /* 0C09C734 mov.l @(disp,Rm),Rn */
	r7 = r9;  /* 0C09C736 mov Rm,Rn */
	r2 = 0xFE000000u; UPD(0x0C09C73Au, 2);  /* 0C09C738 mov.l @(disp,pc),Rn */
	r7 += 0x60u;  /* 0C09C73A add #imm,Rn */
	r2 += r0;  /* 0C09C73C add Rm,Rn */
	IF(0x0C09C73Eu); T = (s32)r2 >= 0;  /* 0C09C73E cmp/pz Rn */
	{ u32 c_ = !T; W32(r7, r0); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C09C780u, 6); goto L_0C09C780; } UPD(0x0C09C744u, 1); goto L_0C09C744; }  /* 0C09C740 bf/s */
L_0C09C744: BLKS(0x0C09C744u);
	r11 = 0xA00000u; UPD(0x0C09C746u, 1);  /* 0C09C744 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r11;  /* 0C09C746 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C09C74Eu, 4); goto L_0C09C74E; }  /* 0C09C748 bf */
L_0C09C74A: BLKS(0x0C09C74Au);
	r0 = 0x2000000u; UPD(0x0C09C74Cu, 1);  /* 0C09C74A mov.l @(disp,pc),Rn */
	W32(r7, r0); UPD(0x0C09C74Eu, 1);  /* 0C09C74C mov.l Rm,@Rn */
L_0C09C74E: BLKS(0x0C09C74Eu);
	r8 = 0xC068E60u; UPD(0x0C09C750u, 1);  /* 0C09C74E mov.l @(disp,pc),Rn */
	r5 = R32(r9 + 0x28u); UPD(0x0C09C752u, 1);  /* 0C09C750 mov.l @(disp,Rm),Rn */
	r7 = R32(r7); UPD(0x0C09C754u, 1);  /* 0C09C752 mov.l @Rm,Rn */
	r4 = R32(r9 + 0x24u); UPD(0x0C09C756u, 1);  /* 0C09C754 mov.l @(disp,Rm),Rn */
	IF(0x0C09C756u); { u32 t_ = r8; PR = 0x0C09C75Au; r6 = R32(r6); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C068E60, 0x0C068E60u, 0x0C09C75Au); }  /* 0C09C756 jsr @Rn */
L_0C09C75A: BLKS(0x0C09C75Au);
	r2 = 0xA0u; UPD(0x0C09C75Cu, 1);  /* 0C09C75A mov.w @(disp,pc),Rn */
	r5 = 0x70u;  /* 0C09C75C mov #imm,Rn */
	r2 += r9;  /* 0C09C75E add Rm,Rn */
	r2 += 0x1u;  /* 0C09C760 add #imm,Rn */
	W8(r2, r5); UPD(0x0C09C764u, 4);  /* 0C09C762 mov.b Rm,@Rn */
	r7 = 0xFFFFFFF0u;  /* 0C09C764 mov #imm,Rn */
	r10 = 0x86u; UPD(0x0C09C768u, 2);  /* 0C09C766 mov.w @(disp,pc),Rn */
	r2 += 0x1u;  /* 0C09C768 add #imm,Rn */
	r10 += r9;  /* 0C09C76A add Rm,Rn */
	W8(r2, r7); UPD(0x0C09C76Eu, 3);  /* 0C09C76C mov.b Rm,@Rn */
	W16(r10, r0); UPD(0x0C09C770u, 1);  /* 0C09C76E mov.w Rm,@Rn */
	{ r2 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C09BFF0u, 3); goto L_0C09BFF0; }  /* 0C09C770 bra */
L_0C09C780: BLKS(0x0C09C780u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C09C744u, 3); goto L_0C09C744; }  /* 0C09C780 bra */
L_0C09C790: BLKS(0x0C09C790u);
	r8 = 0xC069B90u; UPD(0x0C09C792u, 1);  /* 0C09C790 mov.l @(disp,pc),Rn */
	r9 = 0xB4u; UPD(0x0C09C794u, 1);  /* 0C09C792 mov.w @(disp,pc),Rn */
	IF(0x0C09C794u); { u32 t_ = r8; PR = 0x0C09C798u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B90, 0x0C069B90u, 0x0C09C798u); }  /* 0C09C794 jsr @Rn */
L_0C09C798: BLKS(0x0C09C798u);
	IF(0x0C09C798u); MACL = r10 * r9;  /* 0C09C798 mul.l Rm,Rn */
	r11 = 0xC286578u; UPD(0x0C09C79Cu, 3);  /* 0C09C79A mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s16)r0;  /* 0C09C79C exts.w Rm,Rn */
	IF(0x0C09C79Eu); r9 = MACL;  /* 0C09C79E sts macl,Rn */
	r9 += r11;  /* 0C09C7A0 add Rm,Rn */
	r6 = r9;  /* 0C09C7A2 mov Rm,Rn */
	r1 = R32(r9 + 0x24u); UPD(0x0C09C7A6u, 5);  /* 0C09C7A4 mov.l @(disp,Rm),Rn */
	r6 += 0x5Cu;  /* 0C09C7A6 add #imm,Rn */
	UPD(0x0C09C7A8u, 1);
L_0C09C7A8: BLKS(0x0C09C7A8u);
	r3 = 0x2A0u; UPD(0x0C09C7AAu, 1);  /* 0C09C7A8 mov.w @(disp,pc),Rn */
	r7 = r9;  /* 0C09C7AA mov Rm,Rn */
	IF(0x0C09C7ACu); MACL = r0 * r3;  /* 0C09C7AC mul.l Rm,Rn */
	r10 = 0xC29D1D8u; UPD(0x0C09C7B0u, 4);  /* 0C09C7AE mov.l @(disp,pc),Rn */
	r7 += 0x60u;  /* 0C09C7B0 add #imm,Rn */
	W32(r6, r1); UPD(0x0C09C7B4u, 2);  /* 0C09C7B2 mov.l Rm,@Rn */
	IF(0x0C09C7B4u); r4 = MACL;  /* 0C09C7B4 sts macl,Rn */
	r10 += r4;  /* 0C09C7B6 add Rm,Rn */
	r0 = R32(r10 + 0x14u); UPD(0x0C09C7BAu, 3);  /* 0C09C7B8 mov.l @(disp,Rm),Rn */
	r2 = 0xFE000000u; UPD(0x0C09C7BCu, 1);  /* 0C09C7BA mov.l @(disp,pc),Rn */
	r2 += r0;  /* 0C09C7BC add Rm,Rn */
	IF(0x0C09C7BEu); T = (s32)r2 >= 0;  /* 0C09C7BE cmp/pz Rn */
	{ u32 c_ = !T; W32(r7, r0); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C09C7F0u, 5); goto L_0C09C7F0; } UPD(0x0C09C7C4u, 1); goto L_0C09C7C4; }  /* 0C09C7C0 bf/s */
L_0C09C7C4: BLKS(0x0C09C7C4u);
	r8 = 0xA00000u; UPD(0x0C09C7C6u, 1);  /* 0C09C7C4 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r8;  /* 0C09C7C6 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C09C7CEu, 4); goto L_0C09C7CE; }  /* 0C09C7C8 bf */
L_0C09C7CA: BLKS(0x0C09C7CAu);
	r2 = 0x2000000u; UPD(0x0C09C7CCu, 1);  /* 0C09C7CA mov.l @(disp,pc),Rn */
	W32(r7, r2); UPD(0x0C09C7CEu, 1);  /* 0C09C7CC mov.l Rm,@Rn */
L_0C09C7CE: BLKS(0x0C09C7CEu);
	r10 = 0xC068E60u; UPD(0x0C09C7D0u, 1);  /* 0C09C7CE mov.l @(disp,pc),Rn */
	r11 = 0x86u; UPD(0x0C09C7D2u, 1);  /* 0C09C7D0 mov.w @(disp,pc),Rn */
	r6 = R32(r6); UPD(0x0C09C7D4u, 1);  /* 0C09C7D2 mov.l @Rm,Rn */
	r11 += r9;  /* 0C09C7D4 add Rm,Rn */
	r4 = R32(r9 + 0x24u); UPD(0x0C09C7D8u, 2);  /* 0C09C7D6 mov.l @(disp,Rm),Rn */
	r5 = R32(r9 + 0x28u); UPD(0x0C09C7DAu, 1);  /* 0C09C7D8 mov.l @(disp,Rm),Rn */
	IF(0x0C09C7DAu); { u32 t_ = r10; PR = 0x0C09C7DEu; r7 = R32(r7); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C068E60, 0x0C068E60u, 0x0C09C7DEu); }  /* 0C09C7DA jsr @Rn */
L_0C09C7DE: BLKS(0x0C09C7DEu);
	W16(r11, r0); UPD(0x0C09C7E0u, 1);  /* 0C09C7DE mov.w Rm,@Rn */
	r0 = 0xA0u; UPD(0x0C09C7E2u, 1);  /* 0C09C7E0 mov.w @(disp,pc),Rn */
	IF(0x0C09C7E2u); r6 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C09C7E4u, 1);  /* 0C09C7E2 mov.b @(r0,Rm),Rn */
	r6 += 0x1u;  /* 0C09C7E4 add #imm,Rn */
	IF(0x0C09C7E6u); W8(r0 + r9, r6); UPD(0x0C09C7E8u, 2);  /* 0C09C7E6 mov.b Rm,@(r0,Rn) */
L_0C09C7E8: BLKS(0x0C09C7E8u);
	{ IF(0x0C09C7EAu); ; /* slot nop */ UPD(0x0C09BD84u, 3); goto L_0C09BD84; }  /* 0C09C7E8 bra */
L_0C09C7F0: BLKS(0x0C09C7F0u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C09C7C4u, 3); goto L_0C09C7C4; }  /* 0C09C7F0 bra */
L_0C09C830: BLKS(0x0C09C830u);
	r6 = 0xB4u; UPD(0x0C09C832u, 1);  /* 0C09C830 mov.w @(disp,pc),Rn */
	IF(0x0C09C832u); MACL = r10 * r6;  /* 0C09C832 mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C09C836u, 3);  /* 0C09C834 mov.l @(disp,pc),Rn */
	IF(0x0C09C836u); r7 = MACL;  /* 0C09C836 sts macl,Rn */
	r0 = 0x8Cu; UPD(0x0C09C83Au, 2);  /* 0C09C838 mov.w @(disp,pc),Rn */
	r7 += r2;  /* 0C09C83A add Rm,Rn */
	r2 = 0xFFFFF000u; UPD(0x0C09C83Eu, 2);  /* 0C09C83C mov.w @(disp,pc),Rn */
	{ IF(0x0C09C840u); r1 = R32(r0 + r7); /* slot mov.l @(r0,Rm),Rn */ UPD(0x0C09C010u, 3); goto L_0C09C010; }  /* 0C09C83E bra */
L_0C09C850: BLKS(0x0C09C850u);
	r11 = 0xC069B90u; UPD(0x0C09C852u, 1);  /* 0C09C850 mov.l @(disp,pc),Rn */
	IF(0x0C09C852u); { u32 t_ = r11; PR = 0x0C09C856u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B90, 0x0C069B90u, 0x0C09C856u); }  /* 0C09C852 jsr @Rn */
L_0C09C856: BLKS(0x0C09C856u);
	r5 = 0xB4u; UPD(0x0C09C858u, 1);  /* 0C09C856 mov.w @(disp,pc),Rn */
	r0 = (u32)(s32)(s16)r0;  /* 0C09C858 exts.w Rm,Rn */
	IF(0x0C09C85Au); MACL = r10 * r5;  /* 0C09C85A mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C09C85Eu, 4);  /* 0C09C85C mov.l @(disp,pc),Rn */
	IF(0x0C09C85Eu); r9 = MACL;  /* 0C09C85E sts macl,Rn */
	r9 += r7;  /* 0C09C860 add Rm,Rn */
	r1 = 0xE00000u; UPD(0x0C09C864u, 3);  /* 0C09C862 mov.l @(disp,pc),Rn */
	r6 = r9;  /* 0C09C864 mov Rm,Rn */
	{ r6 += 0x5Cu; /* slot add #imm,Rn */ UPD(0x0C09C7A8u, 4); goto L_0C09C7A8; }  /* 0C09C866 bra */
L_0C09C870: BLKS(0x0C09C870u);
	r6 = 0xB4u; UPD(0x0C09C872u, 1);  /* 0C09C870 mov.w @(disp,pc),Rn */
	IF(0x0C09C872u); MACL = r10 * r6;  /* 0C09C872 mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C09C876u, 3);  /* 0C09C874 mov.l @(disp,pc),Rn */
	IF(0x0C09C876u); r0 = MACL;  /* 0C09C876 sts macl,Rn */
	r3 = 0x8Cu; UPD(0x0C09C87Au, 2);  /* 0C09C878 mov.w @(disp,pc),Rn */
	r0 += r2;  /* 0C09C87A add Rm,Rn */
	IF(0x0C09C87Cu); r2 = R32(r0 + r3); UPD(0x0C09C87Eu, 2);  /* 0C09C87C mov.l @(r0,Rm),Rn */
	r5 = 0x1FFFFu; UPD(0x0C09C880u, 1);  /* 0C09C87E mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r5;  /* 0C09C880 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C09C88Au, 4); goto L_0C09C88A; }  /* 0C09C882 bf */
L_0C09C884: BLKS(0x0C09C884u);
	r4 = R32(r0 + 0x24u); UPD(0x0C09C886u, 1);  /* 0C09C884 mov.l @(disp,Rm),Rn */
	{ IF(0x0C09C888u); ; /* slot nop */ UPD(0x0C09C07Au, 3); goto L_0C09C07A; }  /* 0C09C886 bra */
L_0C09C88A: BLKS(0x0C09C88Au);
	r1 = 0x1000u; UPD(0x0C09C88Cu, 1);  /* 0C09C88A mov.w @(disp,pc),Rn */
	{ r2 += r1; /* slot add Rm,Rn */ UPD(0x0C09C110u, 3); goto L_0C09C110; }  /* 0C09C88C bra */
L_0C09C890: BLKS(0x0C09C890u);
	r5 = 0xB4u; UPD(0x0C09C892u, 1);  /* 0C09C890 mov.w @(disp,pc),Rn */
	IF(0x0C09C892u); MACL = r10 * r5;  /* 0C09C892 mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C09C896u, 3);  /* 0C09C894 mov.l @(disp,pc),Rn */
	r0 = 0x8Cu; UPD(0x0C09C898u, 1);  /* 0C09C896 mov.w @(disp,pc),Rn */
	IF(0x0C09C898u); r3 = MACL;  /* 0C09C898 sts macl,Rn */
	r3 += r7;  /* 0C09C89A add Rm,Rn */
	IF(0x0C09C89Cu); r7 = R32(r0 + r3); UPD(0x0C09C89Eu, 3);  /* 0C09C89C mov.l @(r0,Rm),Rn */
	r9 = 0xFFFFF000u; UPD(0x0C09C8A0u, 1);  /* 0C09C89E mov.w @(disp,pc),Rn */
	r7 += r9;  /* 0C09C8A0 add Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C09C8A2 tst Rm,Rn */
	{ u32 c_ = !T; IF(0x0C09C8A6u); W32(r0 + r3, r7); /* slot mov.l Rm,@(r0,Rn) */ if (c_) { UPD(0x0C09C7E8u, 5); goto L_0C09C7E8; } UPD(0x0C09C8A8u, 1); goto L_0C09C8A8; }  /* 0C09C8A4 bf/s */
L_0C09C8A8: BLKS(0x0C09C8A8u);
	r3 += 0x50u;  /* 0C09C8A8 add #imm,Rn */
	r1 = R32(r3); UPD(0x0C09C8ACu, 2);  /* 0C09C8AA mov.l @Rm,Rn */
	r4 = 0x1C20u; UPD(0x0C09C8AEu, 1);  /* 0C09C8AC mov.w @(disp,pc),Rn */
	T = (s32)r1 > (s32)r4;  /* 0C09C8AE cmp/gt Rm,Rn */
	{ u32 c_ = !T; r3 += 0xFFFFFFB0u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C09C8BCu, 4); goto L_0C09C8BC; } goto L_0C09C8B4; }  /* 0C09C8B0 bf/s */
L_0C09C8B4: BLKS(0x0C09C8B4u);
	r0 += 0x13u;  /* 0C09C8B4 add #imm,Rn */
	IF(0x0C09C8B6u); r8 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C09C8B8u, 3);  /* 0C09C8B6 mov.b @(r0,Rm),Rn */
	r8 += 0x1u;  /* 0C09C8B8 add #imm,Rn */
	IF(0x0C09C8BAu); W8(r0 + r3, r8); UPD(0x0C09C8BCu, 2);  /* 0C09C8BA mov.b Rm,@(r0,Rn) */
L_0C09C8BC: BLKS(0x0C09C8BCu);
	r1 = 0xA0u; UPD(0x0C09C8BEu, 1);  /* 0C09C8BC mov.w @(disp,pc),Rn */
	r1 += r3;  /* 0C09C8BE add Rm,Rn */
	r0 = r1;  /* 0C09C8C0 mov Rm,Rn */
	r3 = r1;  /* 0C09C8C2 mov Rm,Rn */
	r1 += 0x3u;  /* 0C09C8C4 add #imm,Rn */
	r0 += 0x1u;  /* 0C09C8C6 add #imm,Rn */
	r3 += 0x2u;  /* 0C09C8C8 add #imm,Rn */
	W8(r1, r7); UPD(0x0C09C8CCu, 7);  /* 0C09C8CA mov.b Rm,@Rn */
	W8(r3, r7); UPD(0x0C09C8CEu, 1);  /* 0C09C8CC mov.b Rm,@Rn */
	r1 += 0xFFFFFFFDu;  /* 0C09C8CE add #imm,Rn */
	{ W8(r0, r7); /* slot mov.b Rm,@Rn */ UPD(0x0C09BD80u, 4); goto L_0C09BD80; }  /* 0C09C8D0 bra */
L_0C09C8E0: BLKS(0x0C09C8E0u);
	r6 = 0xB4u; UPD(0x0C09C8E2u, 1);  /* 0C09C8E0 mov.w @(disp,pc),Rn */
	IF(0x0C09C8E2u); MACL = r10 * r6;  /* 0C09C8E2 mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C09C8E6u, 3);  /* 0C09C8E4 mov.l @(disp,pc),Rn */
	IF(0x0C09C8E6u); r3 = MACL;  /* 0C09C8E6 sts macl,Rn */
	r7 = 0xA0u; UPD(0x0C09C8EAu, 2);  /* 0C09C8E8 mov.w @(disp,pc),Rn */
	r3 += r2;  /* 0C09C8EA add Rm,Rn */
	r7 += r3;  /* 0C09C8EC add Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C09C8F0u, 3);  /* 0C09C8EE mov.b @Rm,Rn */
	r5 = r6 & 0xFF;  /* 0C09C8F0 extu.b Rm,Rn */
	r0 = r5;  /* 0C09C8F2 mov Rm,Rn */
	T = r0 == 0x1u;  /* 0C09C8F4 cmp/eq #imm,r0 */
	{ u32 c_ = T; r11 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C09C970u, 6); goto L_0C09C970; } goto L_0C09C8FA; }  /* 0C09C8F6 bt/s */
L_0C09C8FA: BLKS(0x0C09C8FAu);
	T = (s32)r5 > (s32)r11;  /* 0C09C8FA cmp/gt Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x2u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C09C930u, 5); goto L_0C09C930; } goto L_0C09C900; }  /* 0C09C8FC bt/s */
L_0C09C900: BLKS(0x0C09C900u);
	T = (r5 & r5) == 0;  /* 0C09C900 tst Rm,Rn */
	if (!T) { UPD(0x0C09C92Au, 5); goto L_0C09C92A; }  /* 0C09C902 bf */
L_0C09C904: BLKS(0x0C09C904u);
	r0 = r3;  /* 0C09C904 mov Rm,Rn */
	r8 = r7;  /* 0C09C906 mov Rm,Rn */
	r7 += 0x2u;  /* 0C09C908 add #imm,Rn */
	r3 = 0xFFFFFFF8u;  /* 0C09C90A mov #imm,Rn */
	W8(r7, r3); UPD(0x0C09C90Eu, 5);  /* 0C09C90C mov.b Rm,@Rn */
	r4 = 0xFFFFFF80u;  /* 0C09C90E mov #imm,Rn */
	r7 += 0x1u;  /* 0C09C910 add #imm,Rn */
	W8(r7, r4); UPD(0x0C09C914u, 3);  /* 0C09C912 mov.b Rm,@Rn */
	r9 = r6;  /* 0C09C914 mov Rm,Rn */
	r11 = 0x86u; UPD(0x0C09C918u, 2);  /* 0C09C916 mov.w @(disp,pc),Rn */
	r8 += 0x1u;  /* 0C09C918 add #imm,Rn */
	r2 = 0x100u; UPD(0x0C09C91Cu, 2);  /* 0C09C91A mov.w @(disp,pc),Rn */
	r7 += 0xFFFFFFFDu;  /* 0C09C91C add #imm,Rn */
	r10 = 0x99u; UPD(0x0C09C920u, 2);  /* 0C09C91E mov.w @(disp,pc),Rn */
	r9 += 0x1u;  /* 0C09C920 add #imm,Rn */
	IF(0x0C09C922u); W16(r0 + r11, r2); UPD(0x0C09C924u, 2);  /* 0C09C922 mov.w Rm,@(r0,Rn) */
	W8(r8, r3); UPD(0x0C09C926u, 1);  /* 0C09C924 mov.b Rm,@Rn */
	W8(r7, r9); UPD(0x0C09C928u, 1);  /* 0C09C926 mov.b Rm,@Rn */
	IF(0x0C09C928u); W8(r0 + r10, r5); UPD(0x0C09C92Au, 1);  /* 0C09C928 mov.b Rm,@(r0,Rn) */
L_0C09C92A: BLKS(0x0C09C92Au);
	{ IF(0x0C09C92Cu); ; /* slot nop */ UPD(0x0C09BD84u, 3); goto L_0C09BD84; }  /* 0C09C92A bra */
L_0C09C930: BLKS(0x0C09C930u);
	if (!T) { UPD(0x0C09C92Au, 3); goto L_0C09C92A; }  /* 0C09C930 bf */
L_0C09C932: BLKS(0x0C09C932u);
	r0 = 0x8Cu; UPD(0x0C09C934u, 1);  /* 0C09C932 mov.w @(disp,pc),Rn */
	r7 = 0xFFFFu; UPD(0x0C09C936u, 1);  /* 0C09C934 mov.l @(disp,pc),Rn */
	IF(0x0C09C936u); r2 = R32(r0 + r3); UPD(0x0C09C938u, 1);  /* 0C09C936 mov.l @(r0,Rm),Rn */
	T = (s32)r2 > (s32)r7;  /* 0C09C938 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C09C942u, 4); goto L_0C09C942; }  /* 0C09C93A bt */
L_0C09C93C: BLKS(0x0C09C93Cu);
	r6 = 0x800u; UPD(0x0C09C93Eu, 1);  /* 0C09C93C mov.w @(disp,pc),Rn */
	r2 += r6;  /* 0C09C93E add Rm,Rn */
	IF(0x0C09C940u); W32(r0 + r3, r2); UPD(0x0C09C942u, 2);  /* 0C09C940 mov.l Rm,@(r0,Rn) */
L_0C09C942: BLKS(0x0C09C942u);
	r9 = R32(r3 + 0x24u); UPD(0x0C09C944u, 1);  /* 0C09C942 mov.l @(disp,Rm),Rn */
	r0 = 0xFF900000u; UPD(0x0C09C946u, 1);  /* 0C09C944 mov.l @(disp,pc),Rn */
	T = (s32)r9 >= (s32)r0;  /* 0C09C946 cmp/ge Rm,Rn */
	if (T) { UPD(0x0C09C92Au, 4); goto L_0C09C92A; }  /* 0C09C948 bt */
L_0C09C94A: BLKS(0x0C09C94Au);
	r10 = 0x0u;  /* 0C09C94A mov #imm,Rn */
	W32(r3, r10); UPD(0x0C09C94Eu, 2);  /* 0C09C94C mov.l Rm,@Rn */
	r8 = 0x4u;  /* 0C09C94E mov #imm,Rn */
	r5 = 0xC3C4165u; UPD(0x0C09C952u, 2);  /* 0C09C950 mov.l @(disp,pc),Rn */
	r3 = 0xC3C4164u; UPD(0x0C09C954u, 1);  /* 0C09C952 mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s8)R8(r5); UPD(0x0C09C956u, 1);  /* 0C09C954 mov.b @Rm,Rn */
	r11 = (u32)(s32)(s8)R8(r3); UPD(0x0C09C958u, 1);  /* 0C09C956 mov.b @Rm,Rn */
	r2 += 0x1u;  /* 0C09C958 add #imm,Rn */
	r4 = 0xC175064u; UPD(0x0C09C95Cu, 2);  /* 0C09C95A mov.l @(disp,pc),Rn */
	r11 += 0x1u;  /* 0C09C95C add #imm,Rn */
	W8(r5, r2); UPD(0x0C09C960u, 2);  /* 0C09C95E mov.b Rm,@Rn */
	W8(r3, r11); UPD(0x0C09C962u, 1);  /* 0C09C960 mov.b Rm,@Rn */
	W32(r4, r8); UPD(0x0C09C964u, 1);  /* 0C09C962 mov.l Rm,@Rn */
L_0C09C964: BLKS(0x0C09C964u);
	{ IF(0x0C09C966u); ; /* slot nop */ UPD(0x0C09BD84u, 3); goto L_0C09BD84; }  /* 0C09C964 bra */
L_0C09C970: BLKS(0x0C09C970u);
	r0 = 0x99u; UPD(0x0C09C972u, 1);  /* 0C09C970 mov.w @(disp,pc),Rn */
	r5 = 0x78u;  /* 0C09C972 mov #imm,Rn */
	IF(0x0C09C974u); r10 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C09C976u, 2);  /* 0C09C974 mov.b @(r0,Rm),Rn */
	r10 += 0x1u;  /* 0C09C976 add #imm,Rn */
	r1 = r10 & 0xFF;  /* 0C09C978 extu.b Rm,Rn */
	T = r1 > r5;  /* 0C09C97A cmp/hi Rm,Rn */
	{ u32 c_ = !T; IF(0x0C09C97Eu); W8(r0 + r3, r10); /* slot mov.b Rm,@(r0,Rn) */ if (c_) { UPD(0x0C09C964u, 6); goto L_0C09C964; } UPD(0x0C09C980u, 1); goto L_0C09C980; }  /* 0C09C97C bf/s */
L_0C09C980: BLKS(0x0C09C980u);
	{ r1 = r6; /* slot mov Rm,Rn */ UPD(0x0C09BF88u, 3); goto L_0C09BF88; }  /* 0C09C980 bra */
L_0C09C990: BLKS(0x0C09C990u);
	{ r1 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C09BF18u, 3); goto L_0C09BF18; }  /* 0C09C990 bra */
}

void blk_f_0C09C9D0(sh3_t *c)
{
	LOCALS;
L_0C09C9D0: BLKS(0x0C09C9D0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C09C9D2u, 1);  /* 0C09C9D0 mov.l Rm,@-Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C09C9D2 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C09C9D6u, 2);  /* 0C09C9D4 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C09C9D8u, 1);  /* 0C09C9D6 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C09C9DAu, 1);  /* 0C09C9D8 mov.l Rm,@-Rn */
	r0 = 0xB4u; UPD(0x0C09C9DCu, 1);  /* 0C09C9DA mov.w @(disp,pc),Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C09C9DEu, 1);  /* 0C09C9DC mov.l Rm,@-Rn */
	IF(0x0C09C9DEu); MACL = r4 * r0;  /* 0C09C9DE mul.l Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C09C9E2u, 3);  /* 0C09C9E0 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C09C9E4u, 1);  /* 0C09C9E2 mov.l Rm,@-Rn */
	IF(0x0C09C9E4u); r8 = MACL;  /* 0C09C9E4 sts macl,Rn */
	r0 = 0xC286578u; UPD(0x0C09C9E8u, 2);  /* 0C09C9E6 mov.l @(disp,pc),Rn */
	IF(0x0C09C9E8u); r15 -= 4; W32(r15, PR); UPD(0x0C09C9EAu, 1);  /* 0C09C9E8 sts.l pr,@-Rn */
	r8 += r0;  /* 0C09C9EA add Rm,Rn */
	r0 = R32(r8 + 0xCu); UPD(0x0C09C9EEu, 2);  /* 0C09C9EC mov.l @(disp,Rm),Rn */
	T = (r0 & r0) == 0;  /* 0C09C9EE tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C09CAD0u, 4); goto L_0C09CAD0; } goto L_0C09C9F4; }  /* 0C09C9F0 bt/s */
L_0C09C9F4: BLKS(0x0C09C9F4u);
	T = r0 == 0x8u;  /* 0C09C9F4 cmp/eq #imm,r0 */
	{ u32 c_ = T; r0 = r8; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C09CA50u, 5); goto L_0C09CA50; } goto L_0C09C9FA; }  /* 0C09C9F6 bt/s */
L_0C09C9FA: BLKS(0x0C09C9FAu);
	r8 = 0xB4u; UPD(0x0C09C9FCu, 2);  /* 0C09C9FA mov.w @(disp,pc),Rn */
	IF(0x0C09C9FCu); MACL = r4 * r8;  /* 0C09C9FC mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C09CA00u, 3);  /* 0C09C9FE mov.l @(disp,pc),Rn */
	IF(0x0C09CA00u); r3 = MACL;  /* 0C09CA00 sts macl,Rn */
	r6 = 0x98u; UPD(0x0C09CA04u, 2);  /* 0C09CA02 mov.w @(disp,pc),Rn */
	r3 += r7;  /* 0C09CA04 add Rm,Rn */
	r6 += r3;  /* 0C09CA06 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r6); UPD(0x0C09CA0Au, 3);  /* 0C09CA08 mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C09CA0A add #imm,Rn */
	W8(r6, r0); UPD(0x0C09CA0Eu, 2);  /* 0C09CA0C mov.b Rm,@Rn */
	r0 &= 0x3u;  /* 0C09CA0E and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C09CA10 tst Rm,Rn */
	if (!T) { UPD(0x0C09CA30u, 5); goto L_0C09CA30; }  /* 0C09CA12 bf */
L_0C09CA14: BLKS(0x0C09CA14u);
	r15 = r14;  /* 0C09CA14 mov Rm,Rn */
	IF(0x0C09CA16u); PR = R32(r15); r15 += 4; UPD(0x0C09CA18u, 2);  /* 0C09CA16 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09CA1Au, 1);  /* 0C09CA18 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C09CA1Cu, 1);  /* 0C09CA1A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09CA1Eu, 1);  /* 0C09CA1C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09CA20u, 1);  /* 0C09CA1E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09CA22u, 1);  /* 0C09CA20 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09CA24u, 1);  /* 0C09CA22 mov.l @Rm+,Rn */
	IF(0x0C09CA24u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C09CA24 rts */
L_0C09CA30: BLKS(0x0C09CA30u);
	r0 = 0x88u; UPD(0x0C09CA32u, 1);  /* 0C09CA30 mov.w @(disp,pc),Rn */
	r9 = R32(r3 + 0xCu); UPD(0x0C09CA34u, 1);  /* 0C09CA32 mov.l @(disp,Rm),Rn */
	IF(0x0C09CA34u); r1 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C09CA36u, 1);  /* 0C09CA34 mov.w @(r0,Rm),Rn */
	r9 += r1;  /* 0C09CA36 add Rm,Rn */
	W32(r3 + 0xCu, r9); UPD(0x0C09CA3Au, 2);  /* 0C09CA38 mov.l Rm,@(disp,Rn) */
L_0C09CA3A: BLKS(0x0C09CA3Au);
	r0 = 0xC0A8AE0u; UPD(0x0C09CA3Cu, 1);  /* 0C09CA3A mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C09CA3C mov Rm,Rn */
	IF(0x0C09CA3Eu); PR = R32(r15); r15 += 4; UPD(0x0C09CA40u, 2);  /* 0C09CA3E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09CA42u, 1);  /* 0C09CA40 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C09CA44u, 1);  /* 0C09CA42 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09CA46u, 1);  /* 0C09CA44 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09CA48u, 1);  /* 0C09CA46 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09CA4Au, 1);  /* 0C09CA48 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09CA4Cu, 1);  /* 0C09CA4A mov.l @Rm+,Rn */
	IF(0x0C09CA4Cu); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A8AE0u: TAIL(blk_f_0C0A8AE0); default: JUMPD(tv_); } }  /* 0C09CA4C jmp @Rn */
L_0C09CA50: BLKS(0x0C09CA50u);
	r11 = 0xA3u; UPD(0x0C09CA52u, 1);  /* 0C09CA50 mov.w @(disp,pc),Rn */
	IF(0x0C09CA52u); r10 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C09CA54u, 1);  /* 0C09CA52 mov.b @(r0,Rm),Rn */
	IF(0x0C09CA54u); T = (s32)r10 >= 0;  /* 0C09CA54 cmp/pz Rn */
	{ u32 c_ = T; r5 = 0x32u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C09CAC0u, 4); goto L_0C09CAC0; } goto L_0C09CA5A; }  /* 0C09CA56 bt/s */
L_0C09CA5A: BLKS(0x0C09CA5Au);
	r13 = 0xC0BC1B0u; UPD(0x0C09CA5Cu, 2);  /* 0C09CA5A mov.l @(disp,pc),Rn */
	IF(0x0C09CA5Cu); { u32 t_ = r13; PR = 0x0C09CA60u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C09CA60u); }  /* 0C09CA5C jsr @Rn */
L_0C09CA60: BLKS(0x0C09CA60u);
	T = (r0 & r0) == 0;  /* 0C09CA60 tst Rm,Rn */
	if (T) { UPD(0x0C09CA14u, 4); goto L_0C09CA14; }  /* 0C09CA62 bt */
L_0C09CA64: BLKS(0x0C09CA64u);
	r11 = 0x0u;  /* 0C09CA64 mov #imm,Rn */
	r13 = r8;  /* 0C09CA66 mov Rm,Rn */
	r12 = 0x0u;  /* 0C09CA68 mov #imm,Rn */
	IF(0x0C09CA6Au); ;  /* 0C09CA6A nop */
	UPD(0x0C09CA6Cu, 4);
L_0C09CA6C: BLKS(0x0C09CA6Cu);
	r8 = 0xC1CB758u; UPD(0x0C09CA6Eu, 1);  /* 0C09CA6C mov.l @(disp,pc),Rn */
	r4 = 0x20u;  /* 0C09CA6E mov #imm,Rn */
	r8 += r12;  /* 0C09CA70 add Rm,Rn */
	r9 = R32(r8); UPD(0x0C09CA74u, 3);  /* 0C09CA72 mov.l @Rm,Rn */
	r12 += 0xCu;  /* 0C09CA74 add #imm,Rn */
	r10 = R32(r13 + 0x24u); UPD(0x0C09CA78u, 2);  /* 0C09CA76 mov.l @(disp,Rm),Rn */
	r10 += r9;  /* 0C09CA78 add Rm,Rn */
	r0 = R32(r8 + 0x4u); UPD(0x0C09CA7Cu, 2);  /* 0C09CA7A mov.l @(disp,Rm),Rn */
	r9 = R32(r13 + 0x28u); UPD(0x0C09CA7Eu, 1);  /* 0C09CA7C mov.l @(disp,Rm),Rn */
	r9 += r0;  /* 0C09CA7E add Rm,Rn */
	r0 = 0xC062780u; UPD(0x0C09CA82u, 2);  /* 0C09CA80 mov.l @(disp,pc),Rn */
	IF(0x0C09CA82u); { u32 t_ = r0; PR = 0x0C09CA86u; r8 += 0xAu; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C09CA86u); }  /* 0C09CA82 jsr @Rn */
L_0C09CA86: BLKS(0x0C09CA86u);
	r7 = (u32)(s32)(s16)R16(r8); UPD(0x0C09CA88u, 1);  /* 0C09CA86 mov.w @Rm,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C09CA88 add #imm,Rn */
	r6 = 0x30000u; UPD(0x0C09CA8Cu, 2);  /* 0C09CA8A mov.l @(disp,pc),Rn */
	r0 += r7;  /* 0C09CA8C add Rm,Rn */
	r5 = 0xC189CD8u; UPD(0x0C09CA90u, 2);  /* 0C09CA8E mov.l @(disp,pc),Rn */
	r0 += 0xFFFFFFF0u;  /* 0C09CA90 add #imm,Rn */
	r3 = 0xC0BA970u; UPD(0x0C09CA94u, 2);  /* 0C09CA92 mov.l @(disp,pc),Rn */
	r8 = (u32)(s32)(s16)r0;  /* 0C09CA94 exts.w Rm,Rn */
	W32(r15, r6); UPD(0x0C09CA98u, 2);  /* 0C09CA96 mov.l Rm,@Rn */
	r4 = 0x3u;  /* 0C09CA98 mov #imm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C09CA9Cu, 2);  /* 0C09CA9A mov.l Rm,@(disp,Rn) */
	r6 = r9;  /* 0C09CA9C mov Rm,Rn */
	r5 = r10;  /* 0C09CA9E mov Rm,Rn */
	IF(0x0C09CAA0u); { u32 t_ = r3; PR = 0x0C09CAA4u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0BA970, 0x0C0BA970u, 0x0C09CAA4u); }  /* 0C09CAA0 jsr @Rn */
L_0C09CAA4: BLKS(0x0C09CAA4u);
	r2 = r11;  /* 0C09CAA4 mov Rm,Rn */
	r2 += 0x1u;  /* 0C09CAA6 add #imm,Rn */
	r11 = (u32)(s32)(s16)r2;  /* 0C09CAA8 exts.w Rm,Rn */
	r4 = 0x5u;  /* 0C09CAAA mov #imm,Rn */
	T = (s32)r11 > (s32)r4;  /* 0C09CAAC cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x8u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C09CA6Cu, 8); goto L_0C09CA6C; } goto L_0C09CAB2; }  /* 0C09CAAE bf/s */
L_0C09CAB2: BLKS(0x0C09CAB2u);
	{ IF(0x0C09CAB4u); ; /* slot nop */ UPD(0x0C09CA14u, 4); goto L_0C09CA14; }  /* 0C09CAB2 bra */
L_0C09CAC0: BLKS(0x0C09CAC0u);
	r0 = 0x88u; UPD(0x0C09CAC2u, 1);  /* 0C09CAC0 mov.w @(disp,pc),Rn */
	r12 = 0xFFFFFFFFu;  /* 0C09CAC2 mov #imm,Rn */
	IF(0x0C09CAC4u); W16(r0 + r8, r12); UPD(0x0C09CAC6u, 2);  /* 0C09CAC4 mov.w Rm,@(r0,Rn) */
	r1 = 0x7u;  /* 0C09CAC6 mov #imm,Rn */
	UPD(0x0C09CAC8u, 1);
L_0C09CAC8: BLKS(0x0C09CAC8u);
	{ W32(r8 + 0xCu, r1); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C09CA3Au, 3); goto L_0C09CA3A; }  /* 0C09CAC8 bra */
L_0C09CAD0: BLKS(0x0C09CAD0u);
	r3 = 0xA3u; UPD(0x0C09CAD2u, 1);  /* 0C09CAD0 mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C09CAD2 mov Rm,Rn */
	IF(0x0C09CAD4u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C09CAD6u, 2);  /* 0C09CAD4 mov.b @(r0,Rm),Rn */
	IF(0x0C09CAD6u); T = (s32)r2 >= 0;  /* 0C09CAD6 cmp/pz Rn */
	if (T) { UPD(0x0C09CA14u, 4); goto L_0C09CA14; }  /* 0C09CAD8 bt */
L_0C09CADA: BLKS(0x0C09CADAu);
	r5 = 0x1u;  /* 0C09CADA mov #imm,Rn */
	r0 = 0x88u; UPD(0x0C09CADEu, 2);  /* 0C09CADC mov.w @(disp,pc),Rn */
	IF(0x0C09CADEu); W16(r0 + r8, r5); UPD(0x0C09CAE0u, 1);  /* 0C09CADE mov.w Rm,@(r0,Rn) */
	{ r1 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C09CAC8u, 3); goto L_0C09CAC8; }  /* 0C09CAE0 bra */
}

void blk_f_0C09CB10(sh3_t *c)
{
	LOCALS;
	goto L_0C09CB10;
L_0C09B7A0: BLKS(0x0C09B7A0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C09B7A2u, 1);  /* 0C09B7A0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C09B7A4u, 1);  /* 0C09B7A2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C09B7A6u, 1);  /* 0C09B7A4 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C09B7A6 exts.w Rm,Rn */
	r3 = 0xB4u; UPD(0x0C09B7AAu, 2);  /* 0C09B7A8 mov.w @(disp,pc),Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C09B7ACu, 1);  /* 0C09B7AA mov.l Rm,@-Rn */
	IF(0x0C09B7ACu); MACL = r9 * r3;  /* 0C09B7AC mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C09B7B0u, 3);  /* 0C09B7AE mov.l Rm,@-Rn */
	r0 = 0xC286578u; UPD(0x0C09B7B2u, 1);  /* 0C09B7B0 mov.l @(disp,pc),Rn */
	IF(0x0C09B7B2u); r2 = MACL;  /* 0C09B7B2 sts macl,Rn */
	IF(0x0C09B7B4u); r15 -= 4; W32(r15, PR); UPD(0x0C09B7B6u, 2);  /* 0C09B7B4 sts.l pr,@-Rn */
	r0 += r2;  /* 0C09B7B6 add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C09B7BAu, 2);  /* 0C09B7B8 mov.l @(disp,Rm),Rn */
	r0 = 0x27u;  /* 0C09B7BA mov #imm,Rn */
	T = r2 > r0;  /* 0C09B7BC cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C09B838u, 5); goto L_0C09B838; } goto L_0C09B7C2; }  /* 0C09B7BE bt/s */
L_0C09B7C2: BLKS(0x0C09B7C2u);
	r0 = 0xC09B7D4u;  /* 0C09B7C2 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C09B7C4 add Rm,Rn */
	IF(0x0C09B7C6u); r4 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C09B7C8u, 4);  /* 0C09B7C6 mov.w @(r0,Rm),Rn */
	IF(0x0C09B7C8u); { u32 tv_ = (r4 + 0x0C09B7CCu); u32 t_ = PHYS(tv_); IF(0x0C09B7CAu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09B7C8 braf Rn */
L_0C09B838: BLKS(0x0C09B838u);
	r4 = 0xB4u; UPD(0x0C09B83Au, 1);  /* 0C09B838 mov.w @(disp,pc),Rn */
	IF(0x0C09B83Au); MACL = r9 * r4;  /* 0C09B83A mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C09B83Eu, 3);  /* 0C09B83C mov.l @(disp,pc),Rn */
	IF(0x0C09B83Eu); r4 = MACL;  /* 0C09B83E sts macl,Rn */
	r4 += r2;  /* 0C09B840 add Rm,Rn */
	r9 = R32(r4); UPD(0x0C09B844u, 3);  /* 0C09B842 mov.l @Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C09B844 tst Rm,Rn */
	if (!T) { UPD(0x0C09B85Au, 4); goto L_0C09B85A; }  /* 0C09B846 bf */
L_0C09B848: BLKS(0x0C09B848u);
	r4 += 0x40u;  /* 0C09B848 add #imm,Rn */
	r4 = R32(r4); UPD(0x0C09B84Cu, 2);  /* 0C09B84A mov.l @Rm,Rn */
	r8 = 0x1869Fu; UPD(0x0C09B84Eu, 1);  /* 0C09B84C mov.l @(disp,pc),Rn */
	T = r4 > r8;  /* 0C09B84E cmp/hi Rm,Rn */
	if (T) { UPD(0x0C09B85Au, 4); goto L_0C09B85A; }  /* 0C09B850 bt */
L_0C09B852: BLKS(0x0C09B852u);
	r10 = 0xC175064u; UPD(0x0C09B854u, 1);  /* 0C09B852 mov.l @(disp,pc),Rn */
	r0 = R32(r10); UPD(0x0C09B856u, 1);  /* 0C09B854 mov.l @Rm,Rn */
	T = r0 == 0x3u;  /* 0C09B856 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C09B870u, 4); goto L_0C09B870; }  /* 0C09B858 bt */
L_0C09B85A: BLKS(0x0C09B85Au);
	r15 = r14;  /* 0C09B85A mov Rm,Rn */
	IF(0x0C09B85Cu); PR = R32(r15); r15 += 4; UPD(0x0C09B85Eu, 2);  /* 0C09B85C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09B860u, 1);  /* 0C09B85E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09B862u, 1);  /* 0C09B860 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09B864u, 1);  /* 0C09B862 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09B866u, 1);  /* 0C09B864 mov.l @Rm+,Rn */
	IF(0x0C09B866u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C09B866 rts */
L_0C09B870: BLKS(0x0C09B870u);
	r7 = 0x4u;  /* 0C09B870 mov #imm,Rn */
	IF(0x0C09B872u); ARG0(0x447Du); { s32 s_ = (s32)r7; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = 0; else r4 >>= ((~s_ & 31) + 1); }  /* 0C09B872 shld Rm,Rn */
	r5 = 0x40000u; UPD(0x0C09B876u, 3);  /* 0C09B874 mov.l @(disp,pc),Rn */
	r6 = 0xC071C90u; UPD(0x0C09B878u, 1);  /* 0C09B876 mov.l @(disp,pc),Rn */
	r4 += r5;  /* 0C09B878 add Rm,Rn */
	r15 = r14;  /* 0C09B87A mov Rm,Rn */
	IF(0x0C09B87Cu); PR = R32(r15); r15 += 4; UPD(0x0C09B87Eu, 3);  /* 0C09B87C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09B880u, 1);  /* 0C09B87E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09B882u, 1);  /* 0C09B880 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09B884u, 1);  /* 0C09B882 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09B886u, 1);  /* 0C09B884 mov.l @Rm+,Rn */
	IF(0x0C09B886u); { u32 tv_ = r6; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C071C90u: TAIL(blk_f_0C071C90); default: JUMPD(tv_); } }  /* 0C09B886 jmp @Rn */
L_0C09CB10: BLKS(0x0C09CB10u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C09CB12u, 1);  /* 0C09CB10 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C09CB14u, 1);  /* 0C09CB12 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C09CB16u, 1);  /* 0C09CB14 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C09CB18u, 1);  /* 0C09CB16 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C09CB1Au, 1);  /* 0C09CB18 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C09CB1Cu, 1);  /* 0C09CB1A mov.l Rm,@-Rn */
	r3 = 0xB4u; UPD(0x0C09CB1Eu, 1);  /* 0C09CB1C mov.w @(disp,pc),Rn */
	r13 = (u32)(s32)(s16)r4;  /* 0C09CB1E exts.w Rm,Rn */
	IF(0x0C09CB20u); MACL = r13 * r3;  /* 0C09CB20 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C09CB24u, 4);  /* 0C09CB22 mov.l Rm,@-Rn */
	r0 = 0xC286578u; UPD(0x0C09CB26u, 1);  /* 0C09CB24 mov.l @(disp,pc),Rn */
	IF(0x0C09CB26u); r2 = MACL;  /* 0C09CB26 sts macl,Rn */
	IF(0x0C09CB28u); r15 -= 4; W32(r15, PR); UPD(0x0C09CB2Au, 2);  /* 0C09CB28 sts.l pr,@-Rn */
	r0 += r2;  /* 0C09CB2A add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C09CB2Eu, 2);  /* 0C09CB2C mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFE8u;  /* 0C09CB2E add #imm,Rn */
	r0 = 0x27u;  /* 0C09CB30 mov #imm,Rn */
	T = r2 > r0;  /* 0C09CB32 cmp/hi Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C09CB3Cu, 6); goto L_0C09CB3C; } goto L_0C09CB38; }  /* 0C09CB34 bf/s */
L_0C09CB38: BLKS(0x0C09CB38u);
	{ r14 += 0x18u; /* slot add #imm,Rn */ UPD(0x0C09CC56u, 4); goto L_0C09CC56; }  /* 0C09CB38 bra */
L_0C09CB3C: BLKS(0x0C09CB3Cu);
	r0 = 0xC09CB4Cu;  /* 0C09CB3C mova @(disp,pc),r0 */
	r2 += r2;  /* 0C09CB3E add Rm,Rn */
	IF(0x0C09CB40u); r4 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C09CB42u, 3);  /* 0C09CB40 mov.w @(r0,Rm),Rn */
	IF(0x0C09CB42u); { u32 tv_ = (r4 + 0x0C09CB46u); u32 t_ = PHYS(tv_); IF(0x0C09CB44u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C09CBA0u: goto L_0C09CBA0; case 0x0C09CC54u: goto L_0C09CC54; case 0x0C09CCE0u: goto L_0C09CCE0; case 0x0C09CD80u: goto L_0C09CD80; case 0x0C09CFA0u: goto L_0C09CFA0; case 0x0C09D400u: goto L_0C09D400; case 0x0C09D470u: goto L_0C09D470; case 0x0C09D520u: goto L_0C09D520; case 0x0C09D5B0u: goto L_0C09D5B0; case 0x0C09D640u: goto L_0C09D640; case 0x0C09D6B0u: goto L_0C09D6B0; case 0x0C09D8F0u: goto L_0C09D8F0; case 0x0C09DAE0u: goto L_0C09DAE0; case 0x0C09DCF0u: goto L_0C09DCF0; case 0x0C09DF80u: goto L_0C09DF80; case 0x0C09E180u: goto L_0C09E180; case 0x0C09E2C0u: goto L_0C09E2C0; case 0x0C09E360u: goto L_0C09E360; case 0x0C09E430u: goto L_0C09E430; case 0x0C09E580u: goto L_0C09E580; case 0x0C09E760u: goto L_0C09E760; case 0x0C09E880u: goto L_0C09E880; case 0x0C09EA10u: goto L_0C09EA10; default: JUMPD(tv_); } }  /* 0C09CB42 braf Rn */
L_0C09CBA0: BLKS(0x0C09CBA0u);
	r8 = 0xB4u; UPD(0x0C09CBA2u, 1);  /* 0C09CBA0 mov.w @(disp,pc),Rn */
	IF(0x0C09CBA2u); MACL = r13 * r8;  /* 0C09CBA2 mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C09CBA6u, 3);  /* 0C09CBA4 mov.l @(disp,pc),Rn */
	IF(0x0C09CBA6u); r10 = MACL;  /* 0C09CBA6 sts macl,Rn */
	r10 += r7;  /* 0C09CBA8 add Rm,Rn */
	r10 += 0x3Cu;  /* 0C09CBAA add #imm,Rn */
	r5 = (u32)(s32)(s16)R16(r10); UPD(0x0C09CBAEu, 4);  /* 0C09CBAC mov.w @Rm,Rn */
	r6 = 0xC3CC310u; UPD(0x0C09CBB0u, 1);  /* 0C09CBAE mov.l @(disp,pc),Rn */
	r10 += 0xFFFFFFC4u;  /* 0C09CBB0 add #imm,Rn */
	T = (r5 & r5) == 0;  /* 0C09CBB2 tst Rm,Rn */
	{ u32 c_ = !T; W32(r6, r5); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C09CC90u, 5); goto L_0C09CC90; } UPD(0x0C09CBB8u, 1); goto L_0C09CBB8; }  /* 0C09CBB4 bf/s */
L_0C09CBB8: BLKS(0x0C09CBB8u);
	r11 = 0xC0A9CB0u; UPD(0x0C09CBBAu, 1);  /* 0C09CBB8 mov.l @(disp,pc),Rn */
	IF(0x0C09CBBAu); { u32 t_ = r11; PR = 0x0C09CBBEu; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9CB0, 0x0C0A9CB0u, 0x0C09CBBEu); }  /* 0C09CBBA jsr @Rn */
L_0C09CBBE: BLKS(0x0C09CBBEu);
	r9 = R32(r10 + 0x2Cu); UPD(0x0C09CBC0u, 1);  /* 0C09CBBE mov.l @(disp,Rm),Rn */
	r2 = 0xF0u; UPD(0x0C09CBC2u, 1);  /* 0C09CBC0 mov.w @(disp,pc),Rn */
	IF(0x0C09CBC2u); MACL = r9 * r2;  /* 0C09CBC2 mul.l Rm,Rn */
	IF(0x0C09CBC4u); r3 = MACL;  /* 0C09CBC4 sts macl,Rn */
	IF(0x0C09CBC6u); T = (s32)r3 >= 0;  /* 0C09CBC6 cmp/pz Rn */
	if (!T) { UPD(0x0C09CC80u, 7); goto L_0C09CC80; }  /* 0C09CBC8 bf */
L_0C09CBCA: BLKS(0x0C09CBCAu);
	r13 = R32(r10 + 0x30u); UPD(0x0C09CBCCu, 1);  /* 0C09CBCA mov.l @(disp,Rm),Rn */
	r7 = 0xFFFFFFF8u;  /* 0C09CBCC mov #imm,Rn */
	IF(0x0C09CBCEu); MACL = r13 * r2;  /* 0C09CBCE mul.l Rm,Rn */
	IF(0x0C09CBD0u); ARG0(0x437Cu); { s32 s_ = (s32)r7; if (s_ >= 0) r3 <<= (s_ & 31); else if ((s_ & 31) == 0) r3 = (u32)((s32)r3 >> 31); else r3 = (u32)((s32)r3 >> ((~s_ & 31) + 1)); }  /* 0C09CBD0 shad Rm,Rn */
	IF(0x0C09CBD2u); r2 = MACL;  /* 0C09CBD2 sts macl,Rn */
	IF(0x0C09CBD4u); T = (s32)r2 >= 0;  /* 0C09CBD4 cmp/pz Rn */
	{ u32 c_ = !T; W32(r10 + 0x2Cu, r3); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C09CC70u, 9); goto L_0C09CC70; } UPD(0x0C09CBDAu, 1); goto L_0C09CBDA; }  /* 0C09CBD6 bf/s */
L_0C09CBDA: BLKS(0x0C09CBDAu);
	IF(0x0C09CBDAu); ARG0(0x427Cu); { s32 s_ = (s32)r7; if (s_ >= 0) r2 <<= (s_ & 31); else if ((s_ & 31) == 0) r2 = (u32)((s32)r2 >> 31); else r2 = (u32)((s32)r2 >> ((~s_ & 31) + 1)); }  /* 0C09CBDA shad Rm,Rn */
	r4 = R32(r10 + 0x24u); UPD(0x0C09CBDEu, 2);  /* 0C09CBDC mov.l @(disp,Rm),Rn */
	r0 = R32(r10 + 0x28u); UPD(0x0C09CBE0u, 1);  /* 0C09CBDE mov.l @(disp,Rm),Rn */
	r4 += r3;  /* 0C09CBE0 add Rm,Rn */
	r12 = 0xC0C2360u; UPD(0x0C09CBE4u, 2);  /* 0C09CBE2 mov.l @(disp,pc),Rn */
	r0 += r2;  /* 0C09CBE4 add Rm,Rn */
	r8 = 0xC069B20u; UPD(0x0C09CBE8u, 2);  /* 0C09CBE6 mov.l @(disp,pc),Rn */
	W32(r10 + 0x30u, r2); UPD(0x0C09CBEAu, 1);  /* 0C09CBE8 mov.l Rm,@(disp,Rn) */
	W32(r10 + 0x24u, r4); UPD(0x0C09CBECu, 1);  /* 0C09CBEA mov.l Rm,@(disp,Rn) */
	r9 = 0x180000u; UPD(0x0C09CBEEu, 1);  /* 0C09CBEC mov.l @(disp,pc),Rn */
	IF(0x0C09CBEEu); { u32 t_ = r12; PR = 0x0C09CBF2u; W32(r10 + 0x28u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C09CBF2u); }  /* 0C09CBEE jsr @Rn */
L_0C09CBF2: BLKS(0x0C09CBF2u);
	r13 = (u32)(s32)(s16)r0;  /* 0C09CBF2 exts.w Rm,Rn */
	r4 = r13;  /* 0C09CBF4 mov Rm,Rn */
	IF(0x0C09CBF6u); { u32 t_ = r8; PR = 0x0C09CBFAu; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C09CBFAu); }  /* 0C09CBF6 jsr @Rn */
L_0C09CBFA: BLKS(0x0C09CBFAu);
	r11 = R32(r10 + 0x24u); UPD(0x0C09CBFCu, 1);  /* 0C09CBFA mov.l @(disp,Rm),Rn */
	r4 = r13;  /* 0C09CBFC mov Rm,Rn */
	r8 = 0xC069AF0u; UPD(0x0C09CC00u, 2);  /* 0C09CBFE mov.l @(disp,pc),Rn */
	r11 += r0;  /* 0C09CC00 add Rm,Rn */
	r5 = r9;  /* 0C09CC02 mov Rm,Rn */
	IF(0x0C09CC04u); { u32 t_ = r8; PR = 0x0C09CC08u; W32(r14, r11); /* slot mov.l Rm,@Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C09CC08u); }  /* 0C09CC04 jsr @Rn */
L_0C09CC08: BLKS(0x0C09CC08u);
	r1 = R32(r10 + 0x28u); UPD(0x0C09CC0Au, 1);  /* 0C09CC08 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFF0u;  /* 0C09CC0A add #imm,Rn */
	r1 += r0;  /* 0C09CC0C add Rm,Rn */
	IF(0x0C09CC0Eu); { u32 t_ = r12; PR = 0x0C09CC12u; W32(r14 + 0x4u, r1); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 4); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C09CC12u); }  /* 0C09CC0E jsr @Rn */
L_0C09CC12: BLKS(0x0C09CC12u);
	r11 = 0xC1CB7B8u; UPD(0x0C09CC14u, 1);  /* 0C09CC12 mov.l @(disp,pc),Rn */
	r0 &= 0x3u;  /* 0C09CC14 and #imm,r0 */
	IF(0x0C09CC16u); r0 <<= 2;  /* 0C09CC16 shll2 Rn */
	r11 += r0;  /* 0C09CC18 add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C09CC1Cu, 4);  /* 0C09CC1A mov.w @(disp,pc),Rn */
	IF(0x0C09CC1Cu); r13 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C09CC1Eu, 1);  /* 0C09CC1C mov.b @(r0,Rm),Rn */
	r12 = r13 & 0xFF;  /* 0C09CC1E extu.b Rm,Rn */
	W32(r15, r12); UPD(0x0C09CC22u, 2);  /* 0C09CC20 mov.l Rm,@Rn */
	r0 = r10;  /* 0C09CC22 mov Rm,Rn */
	r7 = 0xA9u; UPD(0x0C09CC26u, 2);  /* 0C09CC24 mov.w @(disp,pc),Rn */
	r4 = 0xFFFC0000u; UPD(0x0C09CC28u, 1);  /* 0C09CC26 mov.l @(disp,pc),Rn */
	IF(0x0C09CC28u); r6 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C09CC2Au, 1);  /* 0C09CC28 mov.b @(r0,Rm),Rn */
	r9 = 0xC062780u; UPD(0x0C09CC2Cu, 1);  /* 0C09CC2A mov.l @(disp,pc),Rn */
	r5 = r6 & 0xFF;  /* 0C09CC2C extu.b Rm,Rn */
	W32(r15 + 0x8u, r4); UPD(0x0C09CC30u, 2);  /* 0C09CC2E mov.l Rm,@(disp,Rn) */
	r4 = 0x1000u; UPD(0x0C09CC32u, 1);  /* 0C09CC30 mov.w @(disp,pc),Rn */
	IF(0x0C09CC32u); { u32 t_ = r9; PR = 0x0C09CC36u; W32(r15 + 0x4u, r5); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C09CC36u); }  /* 0C09CC32 jsr @Rn */
L_0C09CC36: BLKS(0x0C09CC36u);
	r3 = 0xFFFFF800u; UPD(0x0C09CC38u, 1);  /* 0C09CC36 mov.w @(disp,pc),Rn */
	r2 = 0x4u;  /* 0C09CC38 mov #imm,Rn */
	r0 += r3;  /* 0C09CC3A add Rm,Rn */
	IF(0x0C09CC3Cu); ARG0(0x402Du); { s32 s_ = (s32)r2; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C09CC3C shld Rm,Rn */
	W32(r15 + 0xCu, r0); UPD(0x0C09CC40u, 4);  /* 0C09CC3E mov.l Rm,@(disp,Rn) */
	r8 = 0xC0BE860u; UPD(0x0C09CC42u, 1);  /* 0C09CC40 mov.l @(disp,pc),Rn */
	r4 = R32(r10); UPD(0x0C09CC44u, 1);  /* 0C09CC42 mov.l @Rm,Rn */
	r5 = R32(r11); UPD(0x0C09CC46u, 1);  /* 0C09CC44 mov.l @Rm,Rn */
	r6 = R32(r14); UPD(0x0C09CC48u, 1);  /* 0C09CC46 mov.l @Rm,Rn */
	IF(0x0C09CC48u); { u32 t_ = r8; PR = 0x0C09CC4Cu; r7 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BE860, 0x0C0BE860u, 0x0C09CC4Cu); }  /* 0C09CC48 jsr @Rn */
L_0C09CC4C: BLKS(0x0C09CC4Cu);
	r10 = 0xC2B07FCu; UPD(0x0C09CC4Eu, 1);  /* 0C09CC4C mov.l @(disp,pc),Rn */
	r1 = 0x10u;  /* 0C09CC4E mov #imm,Rn */
	W32(r10, r1); UPD(0x0C09CC52u, 2);  /* 0C09CC50 mov.l Rm,@Rn */
	r15 += 0x10u;  /* 0C09CC52 add #imm,Rn */
	UPD(0x0C09CC54u, 1);
L_0C09CC54: BLKS(0x0C09CC54u);
	r14 += 0x18u;  /* 0C09CC54 add #imm,Rn */
	UPD(0x0C09CC56u, 1);
L_0C09CC56: BLKS(0x0C09CC56u);
	r15 = r14;  /* 0C09CC56 mov Rm,Rn */
	IF(0x0C09CC58u); PR = R32(r15); r15 += 4; UPD(0x0C09CC5Au, 2);  /* 0C09CC58 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09CC5Cu, 1);  /* 0C09CC5A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C09CC5Eu, 1);  /* 0C09CC5C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09CC60u, 1);  /* 0C09CC5E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09CC62u, 1);  /* 0C09CC60 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09CC64u, 1);  /* 0C09CC62 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09CC66u, 1);  /* 0C09CC64 mov.l @Rm+,Rn */
	IF(0x0C09CC66u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C09CC66 rts */
L_0C09CC70: BLKS(0x0C09CC70u);
	r0 = 0xFFu; UPD(0x0C09CC72u, 1);  /* 0C09CC70 mov.w @(disp,pc),Rn */
	{ r2 += r0; /* slot add Rm,Rn */ UPD(0x0C09CBDAu, 3); goto L_0C09CBDA; }  /* 0C09CC72 bra */
L_0C09CC80: BLKS(0x0C09CC80u);
	r12 = 0xFFu; UPD(0x0C09CC82u, 1);  /* 0C09CC80 mov.w @(disp,pc),Rn */
	{ r3 += r12; /* slot add Rm,Rn */ UPD(0x0C09CBCAu, 3); goto L_0C09CBCA; }  /* 0C09CC82 bra */
L_0C09CC90: BLKS(0x0C09CC90u);
	r6 = 0xC09BCC0u; UPD(0x0C09CC92u, 1);  /* 0C09CC90 mov.l @(disp,pc),Rn */
	r11 = 0x8Cu; UPD(0x0C09CC94u, 1);  /* 0C09CC92 mov.w @(disp,pc),Rn */
	IF(0x0C09CC94u); { u32 t_ = r6; PR = 0x0C09CC98u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C09BCC0, 0x0C09BCC0u, 0x0C09CC98u); }  /* 0C09CC94 jsr @Rn */
L_0C09CC98: BLKS(0x0C09CC98u);
	r8 = 0x86u; UPD(0x0C09CC9Au, 1);  /* 0C09CC98 mov.w @(disp,pc),Rn */
	r11 += r10;  /* 0C09CC9A add Rm,Rn */
	r9 = 0xC069B20u; UPD(0x0C09CC9Eu, 2);  /* 0C09CC9C mov.l @(disp,pc),Rn */
	r8 += r10;  /* 0C09CC9E add Rm,Rn */
	r5 = R32(r11); UPD(0x0C09CCA2u, 2);  /* 0C09CCA0 mov.l @Rm,Rn */
	r12 = 0xC069AF0u; UPD(0x0C09CCA4u, 1);  /* 0C09CCA2 mov.l @(disp,pc),Rn */
	IF(0x0C09CCA4u); { u32 t_ = r9; PR = 0x0C09CCA8u; r4 = (u32)(s32)(s16)R16(r8); /* slot mov.w @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C09CCA8u); }  /* 0C09CCA4 jsr @Rn */
L_0C09CCA8: BLKS(0x0C09CCA8u);
	r5 = R32(r11); UPD(0x0C09CCAAu, 1);  /* 0C09CCA8 mov.l @Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r8); UPD(0x0C09CCACu, 1);  /* 0C09CCAA mov.w @Rm,Rn */
	IF(0x0C09CCACu); { u32 t_ = r12; PR = 0x0C09CCB0u; W32(r10 + 0x2Cu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C09CCB0u); }  /* 0C09CCAC jsr @Rn */
L_0C09CCB0: BLKS(0x0C09CCB0u);
	r3 = R32(r10 + 0x24u); UPD(0x0C09CCB2u, 1);  /* 0C09CCB0 mov.l @(disp,Rm),Rn */
	r4 = r13;  /* 0C09CCB2 mov Rm,Rn */
	r2 = R32(r10 + 0x28u); UPD(0x0C09CCB6u, 2);  /* 0C09CCB4 mov.l @(disp,Rm),Rn */
	r5 = R32(r10 + 0x2Cu); UPD(0x0C09CCB8u, 1);  /* 0C09CCB6 mov.l @(disp,Rm),Rn */
	r2 += r0;  /* 0C09CCB8 add Rm,Rn */
	r3 += r5;  /* 0C09CCBA add Rm,Rn */
	W32(r10 + 0x30u, r0); UPD(0x0C09CCBEu, 3);  /* 0C09CCBC mov.l Rm,@(disp,Rn) */
	W32(r10 + 0x24u, r3); UPD(0x0C09CCC0u, 1);  /* 0C09CCBE mov.l Rm,@(disp,Rn) */
	W32(r10 + 0x28u, r2); UPD(0x0C09CCC2u, 1);  /* 0C09CCC0 mov.l Rm,@(disp,Rn) */
	r1 = 0xC09C9D0u; UPD(0x0C09CCC4u, 1);  /* 0C09CCC2 mov.l @(disp,pc),Rn */
L_0C09CCC4: BLKS(0x0C09CCC4u);
	r14 += 0x18u;  /* 0C09CCC4 add #imm,Rn */
	UPD(0x0C09CCC6u, 1);
L_0C09CCC6: BLKS(0x0C09CCC6u);
	r15 = r14;  /* 0C09CCC6 mov Rm,Rn */
	IF(0x0C09CCC8u); PR = R32(r15); r15 += 4; UPD(0x0C09CCCAu, 2);  /* 0C09CCC8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09CCCCu, 1);  /* 0C09CCCA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C09CCCEu, 1);  /* 0C09CCCC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09CCD0u, 1);  /* 0C09CCCE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09CCD2u, 1);  /* 0C09CCD0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09CCD4u, 1);  /* 0C09CCD2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09CCD6u, 1);  /* 0C09CCD4 mov.l @Rm+,Rn */
	IF(0x0C09CCD6u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C09B7A0u: goto L_0C09B7A0; case 0x0C0A8AE0u: TAIL(blk_f_0C0A8AE0); default: JUMPD(tv_); } }  /* 0C09CCD6 jmp @Rn */
L_0C09CCE0: BLKS(0x0C09CCE0u);
	r10 = 0xC0A8CA0u; UPD(0x0C09CCE2u, 1);  /* 0C09CCE0 mov.l @(disp,pc),Rn */
	IF(0x0C09CCE2u); { u32 t_ = r10; PR = 0x0C09CCE6u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C09CCE6u); }  /* 0C09CCE2 jsr @Rn */
L_0C09CCE6: BLKS(0x0C09CCE6u);
	IF(0x0C09CCE6u); T = (s32)r0 >= 0;  /* 0C09CCE6 cmp/pz Rn */
	if (!T) { UPD(0x0C09CD20u, 4); goto L_0C09CD20; }  /* 0C09CCE8 bf */
L_0C09CCEA: BLKS(0x0C09CCEAu);
	r9 = 0xB4u; UPD(0x0C09CCECu, 1);  /* 0C09CCEA mov.w @(disp,pc),Rn */
	IF(0x0C09CCECu); MACL = r13 * r9;  /* 0C09CCEC mul.l Rm,Rn */
	r8 = 0xC286578u; UPD(0x0C09CCF0u, 3);  /* 0C09CCEE mov.l @(disp,pc),Rn */
	IF(0x0C09CCF0u); r13 = MACL;  /* 0C09CCF0 sts macl,Rn */
	IF(0x0C09CCF2u); MACL = r0 * r9;  /* 0C09CCF2 mul.l Rm,Rn */
	r13 += r8;  /* 0C09CCF4 add Rm,Rn */
	r2 = 0xECFFFFFFu; UPD(0x0C09CCF8u, 5);  /* 0C09CCF6 mov.l @(disp,pc),Rn */
	IF(0x0C09CCF8u); r4 = MACL;  /* 0C09CCF8 sts macl,Rn */
	r0 = R32(r13); UPD(0x0C09CCFCu, 2);  /* 0C09CCFA mov.l @Rm,Rn */
	r4 += r8;  /* 0C09CCFC add Rm,Rn */
	r0 &= r2;  /* 0C09CCFE and Rm,Rn */
	W32(r13, r0); UPD(0x0C09CD02u, 3);  /* 0C09CD00 mov.l Rm,@Rn */
	r1 = 0x13000000u; UPD(0x0C09CD04u, 1);  /* 0C09CD02 mov.l @(disp,pc),Rn */
	r7 = R32(r4); UPD(0x0C09CD06u, 1);  /* 0C09CD04 mov.l @Rm,Rn */
	r12 = R32(r4 + 0x24u); UPD(0x0C09CD08u, 1);  /* 0C09CD06 mov.l @(disp,Rm),Rn */
	r7 &= r1;  /* 0C09CD08 and Rm,Rn */
	r3 = R32(r4 + 0x28u); UPD(0x0C09CD0Cu, 2);  /* 0C09CD0A mov.l @(disp,Rm),Rn */
	r0 |= r7;  /* 0C09CD0C or Rm,Rn */
	r11 = R32(r13 + 0x2Cu); UPD(0x0C09CD10u, 2);  /* 0C09CD0E mov.l @(disp,Rm),Rn */
	r5 = R32(r13 + 0x30u); UPD(0x0C09CD12u, 1);  /* 0C09CD10 mov.l @(disp,Rm),Rn */
	r12 += r11;  /* 0C09CD12 add Rm,Rn */
	r3 += r5;  /* 0C09CD14 add Rm,Rn */
	W32(r13 + 0x24u, r12); UPD(0x0C09CD18u, 3);  /* 0C09CD16 mov.l Rm,@(disp,Rn) */
	W32(r13 + 0x28u, r3); UPD(0x0C09CD1Au, 1);  /* 0C09CD18 mov.l Rm,@(disp,Rn) */
	W32(r13, r0); UPD(0x0C09CD1Cu, 1);  /* 0C09CD1A mov.l Rm,@Rn */
L_0C09CD1C: BLKS(0x0C09CD1Cu);
	{ r14 += 0x18u; /* slot add #imm,Rn */ UPD(0x0C09CC56u, 3); goto L_0C09CC56; }  /* 0C09CD1C bra */
L_0C09CD20: BLKS(0x0C09CD20u);
	r1 = 0xC09B7A0u; UPD(0x0C09CD22u, 1);  /* 0C09CD20 mov.l @(disp,pc),Rn */
	{ r4 = r13; /* slot mov Rm,Rn */ UPD(0x0C09CCC4u, 3); goto L_0C09CCC4; }  /* 0C09CD22 bra */
L_0C09CD80: BLKS(0x0C09CD80u);
	r10 = 0xC0A8CA0u; UPD(0x0C09CD82u, 1);  /* 0C09CD80 mov.l @(disp,pc),Rn */
	IF(0x0C09CD82u); { u32 t_ = r10; PR = 0x0C09CD86u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C09CD86u); }  /* 0C09CD82 jsr @Rn */
L_0C09CD86: BLKS(0x0C09CD86u);
	IF(0x0C09CD86u); T = (s32)r0 >= 0;  /* 0C09CD86 cmp/pz Rn */
	{ u32 c_ = !T; r10 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C09CD20u, 4); goto L_0C09CD20; } goto L_0C09CD8C; }  /* 0C09CD88 bf/s */
L_0C09CD8C: BLKS(0x0C09CD8Cu);
	r7 = 0xB4u; UPD(0x0C09CD8Eu, 2);  /* 0C09CD8C mov.w @(disp,pc),Rn */
	IF(0x0C09CD8Eu); MACL = r0 * r7;  /* 0C09CD8E mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C09CD92u, 3);  /* 0C09CD90 mov.l @(disp,pc),Rn */
	IF(0x0C09CD92u); r0 = MACL;  /* 0C09CD92 sts macl,Rn */
	IF(0x0C09CD94u); r1 = R32(r0 + r6); UPD(0x0C09CD96u, 2);  /* 0C09CD94 mov.l @(r0,Rm),Rn */
	r0 = 0x13000000u; UPD(0x0C09CD98u, 1);  /* 0C09CD96 mov.l @(disp,pc),Rn */
	T = (r1 & r0) == 0;  /* 0C09CD98 tst Rm,Rn */
	{ u32 c_ = !T; IF(0x0C09CD9Cu); MACL = r13 * r7; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C09CDAEu, 5); goto L_0C09CDAE; } goto L_0C09CD9E; }  /* 0C09CD9A bf/s */
L_0C09CD9E: BLKS(0x0C09CD9Eu);
	IF(0x0C09CD9Eu); MACL = r13 * r7;  /* 0C09CD9E mul.l Rm,Rn */
	r2 = 0xECFFFFFFu; UPD(0x0C09CDA2u, 5);  /* 0C09CDA0 mov.l @(disp,pc),Rn */
	IF(0x0C09CDA2u); r4 = MACL;  /* 0C09CDA2 sts macl,Rn */
	r4 += r6;  /* 0C09CDA4 add Rm,Rn */
	r5 = R32(r4); UPD(0x0C09CDA8u, 3);  /* 0C09CDA6 mov.l @Rm,Rn */
	r5 &= r2;  /* 0C09CDA8 and Rm,Rn */
	W32(r4, r5); UPD(0x0C09CDACu, 2);  /* 0C09CDAA mov.l Rm,@Rn */
	IF(0x0C09CDACu); MACL = r13 * r7;  /* 0C09CDAC mul.l Rm,Rn */
	UPD(0x0C09CDAEu, 2);
L_0C09CDAE: BLKS(0x0C09CDAEu);
	r3 = 0x9Fu; UPD(0x0C09CDB0u, 1);  /* 0C09CDAE mov.w @(disp,pc),Rn */
	IF(0x0C09CDB0u); r0 = MACL;  /* 0C09CDB0 sts macl,Rn */
	r0 += r6;  /* 0C09CDB2 add Rm,Rn */
	IF(0x0C09CDB4u); r7 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C09CDB6u, 3);  /* 0C09CDB4 mov.b @(r0,Rm),Rn */
	r6 = 0x3u;  /* 0C09CDB6 mov #imm,Rn */
	r2 = r7 & 0xFF;  /* 0C09CDB8 extu.b Rm,Rn */
	T = r2 > r6;  /* 0C09CDBA cmp/hi Rm,Rn */
	if (T) { UPD(0x0C09CD1Cu, 6); goto L_0C09CD1C; }  /* 0C09CDBC bt */
L_0C09CDBE: BLKS(0x0C09CDBEu);
	r0 = 0xC09CDDCu;  /* 0C09CDBE mova @(disp,pc),r0 */
	r2 += r2;  /* 0C09CDC0 add Rm,Rn */
	IF(0x0C09CDC2u); r12 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C09CDC4u, 3);  /* 0C09CDC2 mov.w @(r0,Rm),Rn */
	IF(0x0C09CDC4u); { u32 tv_ = (r12 + 0x0C09CDC8u); u32 t_ = PHYS(tv_); IF(0x0C09CDC6u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C09CDF0u: goto L_0C09CDF0; case 0x0C09CE30u: goto L_0C09CE30; case 0x0C09CE90u: goto L_0C09CE90; case 0x0C09CF10u: goto L_0C09CF10; default: JUMPD(tv_); } }  /* 0C09CDC4 braf Rn */
L_0C09CDF0: BLKS(0x0C09CDF0u);
	r0 = 0xB4u; UPD(0x0C09CDF2u, 1);  /* 0C09CDF0 mov.w @(disp,pc),Rn */
	IF(0x0C09CDF2u); MACL = r13 * r0;  /* 0C09CDF2 mul.l Rm,Rn */
	r4 = 0xC286578u; UPD(0x0C09CDF6u, 3);  /* 0C09CDF4 mov.l @(disp,pc),Rn */
	IF(0x0C09CDF6u); r3 = MACL;  /* 0C09CDF6 sts macl,Rn */
	IF(0x0C09CDF8u); MACL = r10 * r0;  /* 0C09CDF8 mul.l Rm,Rn */
	r3 += r4;  /* 0C09CDFA add Rm,Rn */
	r1 = R32(r3 + 0x2Cu); UPD(0x0C09CDFEu, 5);  /* 0C09CDFC mov.l @(disp,Rm),Rn */
	IF(0x0C09CDFEu); r0 = MACL;  /* 0C09CDFE sts macl,Rn */
	r0 += r4;  /* 0C09CE00 add Rm,Rn */
	r10 = R32(r0 + 0x24u); UPD(0x0C09CE04u, 3);  /* 0C09CE02 mov.l @(disp,Rm),Rn */
	r8 = R32(r0 + 0x28u); UPD(0x0C09CE06u, 1);  /* 0C09CE04 mov.l @(disp,Rm),Rn */
	r10 += r1;  /* 0C09CE06 add Rm,Rn */
	r9 = R32(r3 + 0x30u); UPD(0x0C09CE0Au, 2);  /* 0C09CE08 mov.l @(disp,Rm),Rn */
	r11 = 0x9Au; UPD(0x0C09CE0Cu, 1);  /* 0C09CE0A mov.w @(disp,pc),Rn */
	r8 += r9;  /* 0C09CE0C add Rm,Rn */
	IF(0x0C09CE0Eu); r13 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C09CE10u, 2);  /* 0C09CE0E mov.b @(r0,Rm),Rn */
	W32(r3 + 0x24u, r10); UPD(0x0C09CE12u, 1);  /* 0C09CE10 mov.l Rm,@(disp,Rn) */
	T = (r13 & r13) == 0;  /* 0C09CE12 tst Rm,Rn */
	{ u32 c_ = T; W32(r3 + 0x28u, r8); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C09CE88u, 4); goto L_0C09CE88; } UPD(0x0C09CE18u, 1); goto L_0C09CE18; }  /* 0C09CE14 bt/s */
L_0C09CE18: BLKS(0x0C09CE18u);
	r0 = 0x9Fu; UPD(0x0C09CE1Au, 1);  /* 0C09CE18 mov.w @(disp,pc),Rn */
	r4 = 0x6Cu;  /* 0C09CE1A mov #imm,Rn */
	IF(0x0C09CE1Cu); r5 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C09CE1Eu, 2);  /* 0C09CE1C mov.b @(r0,Rm),Rn */
	r5 += 0x1u;  /* 0C09CE1E add #imm,Rn */
	IF(0x0C09CE20u); W8(r0 + r3, r5); UPD(0x0C09CE22u, 2);  /* 0C09CE20 mov.b Rm,@(r0,Rn) */
L_0C09CE22: BLKS(0x0C09CE22u);
	r1 = 0xC0C2110u; UPD(0x0C09CE24u, 1);  /* 0C09CE22 mov.l @(disp,pc),Rn */
	{ r14 += 0x18u; /* slot add #imm,Rn */ UPD(0x0C09CCC6u, 3); goto L_0C09CCC6; }  /* 0C09CE24 bra */
L_0C09CE30: BLKS(0x0C09CE30u);
	r12 = 0xB4u; UPD(0x0C09CE32u, 1);  /* 0C09CE30 mov.w @(disp,pc),Rn */
	IF(0x0C09CE32u); MACL = r13 * r12;  /* 0C09CE32 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C09CE36u, 3);  /* 0C09CE34 mov.l @(disp,pc),Rn */
	IF(0x0C09CE36u); r11 = MACL;  /* 0C09CE36 sts macl,Rn */
	IF(0x0C09CE38u); MACL = r10 * r12;  /* 0C09CE38 mul.l Rm,Rn */
	r11 += r9;  /* 0C09CE3A add Rm,Rn */
	r8 = 0xC069B20u; UPD(0x0C09CE3Eu, 5);  /* 0C09CE3C mov.l @(disp,pc),Rn */
	IF(0x0C09CE3Eu); r12 = MACL;  /* 0C09CE3E sts macl,Rn */
	r12 += r9;  /* 0C09CE40 add Rm,Rn */
	r9 = 0x88u; UPD(0x0C09CE44u, 3);  /* 0C09CE42 mov.w @(disp,pc),Rn */
	r13 = r11;  /* 0C09CE44 mov Rm,Rn */
	r3 = R32(r11 + 0x2Cu); UPD(0x0C09CE48u, 2);  /* 0C09CE46 mov.l @(disp,Rm),Rn */
	r13 += 0x50u;  /* 0C09CE48 add #imm,Rn */
	r10 = R32(r12 + 0x24u); UPD(0x0C09CE4Cu, 2);  /* 0C09CE4A mov.l @(disp,Rm),Rn */
	r9 += r11;  /* 0C09CE4C add Rm,Rn */
	r10 += r3;  /* 0C09CE4E add Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r9); UPD(0x0C09CE52u, 3);  /* 0C09CE50 mov.w @Rm,Rn */
	IF(0x0C09CE52u); { u32 t_ = r8; PR = 0x0C09CE56u; r5 = R32(r13); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C09CE56u); }  /* 0C09CE52 jsr @Rn */
L_0C09CE56: BLKS(0x0C09CE56u);
	r10 += r0;  /* 0C09CE56 add Rm,Rn */
	W32(r11 + 0x24u, r10); UPD(0x0C09CE5Au, 2);  /* 0C09CE58 mov.l Rm,@(disp,Rn) */
	r8 = 0xC069AF0u; UPD(0x0C09CE5Cu, 1);  /* 0C09CE5A mov.l @(disp,pc),Rn */
	r10 = R32(r12 + 0x28u); UPD(0x0C09CE5Eu, 1);  /* 0C09CE5C mov.l @(disp,Rm),Rn */
	r7 = R32(r11 + 0x30u); UPD(0x0C09CE60u, 1);  /* 0C09CE5E mov.l @(disp,Rm),Rn */
	r4 = (u32)(s32)(s16)R16(r9); UPD(0x0C09CE62u, 1);  /* 0C09CE60 mov.w @Rm,Rn */
	r10 += r7;  /* 0C09CE62 add Rm,Rn */
	IF(0x0C09CE64u); { u32 t_ = r8; PR = 0x0C09CE68u; r5 = R32(r13); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C09CE68u); }  /* 0C09CE64 jsr @Rn */
L_0C09CE68: BLKS(0x0C09CE68u);
	r6 = R32(r13); UPD(0x0C09CE6Au, 1);  /* 0C09CE68 mov.l @Rm,Rn */
	r10 += r0;  /* 0C09CE6A add Rm,Rn */
	r2 = 0x8000u; UPD(0x0C09CE6Eu, 2);  /* 0C09CE6C mov.l @(disp,pc),Rn */
	r1 = 0xE0000u; UPD(0x0C09CE70u, 1);  /* 0C09CE6E mov.l @(disp,pc),Rn */
	r6 += r2;  /* 0C09CE70 add Rm,Rn */
	W32(r11 + 0x28u, r10); UPD(0x0C09CE74u, 2);  /* 0C09CE72 mov.l Rm,@(disp,Rn) */
	T = r6 == r1;  /* 0C09CE74 cmp/eq Rm,Rn */
	{ u32 c_ = !T; W32(r13, r6); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C09CE88u, 4); goto L_0C09CE88; } UPD(0x0C09CE7Au, 1); goto L_0C09CE7A; }  /* 0C09CE76 bf/s */
L_0C09CE7A: BLKS(0x0C09CE7Au);
	r4 = 0x9Au; UPD(0x0C09CE7Cu, 1);  /* 0C09CE7A mov.w @(disp,pc),Rn */
	r0 = r12;  /* 0C09CE7C mov Rm,Rn */
	IF(0x0C09CE7Eu); W8(r0 + r4, r1); UPD(0x0C09CE80u, 2);  /* 0C09CE7E mov.b Rm,@(r0,Rn) */
L_0C09CE80: BLKS(0x0C09CE80u);
	r0 = 0x9Fu; UPD(0x0C09CE82u, 1);  /* 0C09CE80 mov.w @(disp,pc),Rn */
	IF(0x0C09CE82u); r3 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C09CE84u, 1);  /* 0C09CE82 mov.b @(r0,Rm),Rn */
	r3 += 0x1u;  /* 0C09CE84 add #imm,Rn */
	IF(0x0C09CE86u); W8(r0 + r11, r3); UPD(0x0C09CE88u, 2);  /* 0C09CE86 mov.b Rm,@(r0,Rn) */
L_0C09CE88: BLKS(0x0C09CE88u);
	{ r14 += 0x18u; /* slot add #imm,Rn */ UPD(0x0C09CC56u, 3); goto L_0C09CC56; }  /* 0C09CE88 bra */
L_0C09CE90: BLKS(0x0C09CE90u);
	r11 = 0xB4u; UPD(0x0C09CE92u, 1);  /* 0C09CE90 mov.w @(disp,pc),Rn */
	IF(0x0C09CE92u); MACL = r13 * r11;  /* 0C09CE92 mul.l Rm,Rn */
	r12 = 0xC286578u; UPD(0x0C09CE96u, 3);  /* 0C09CE94 mov.l @(disp,pc),Rn */
	IF(0x0C09CE96u); r11 = MACL;  /* 0C09CE96 sts macl,Rn */
	r11 += r12;  /* 0C09CE98 add Rm,Rn */
	r9 = 0x88u; UPD(0x0C09CE9Cu, 3);  /* 0C09CE9A mov.w @(disp,pc),Rn */
	r13 = r11;  /* 0C09CE9C mov Rm,Rn */
	r8 = 0xC069B20u; UPD(0x0C09CEA0u, 2);  /* 0C09CE9E mov.l @(disp,pc),Rn */
	r13 += 0x50u;  /* 0C09CEA0 add #imm,Rn */
	r5 = R32(r13); UPD(0x0C09CEA4u, 2);  /* 0C09CEA2 mov.l @Rm,Rn */
	r9 += r11;  /* 0C09CEA4 add Rm,Rn */
	IF(0x0C09CEA6u); { u32 t_ = r8; PR = 0x0C09CEAAu; r4 = (u32)(s32)(s16)R16(r9); /* slot mov.w @Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C09CEAAu); }  /* 0C09CEA6 jsr @Rn */
L_0C09CEAA: BLKS(0x0C09CEAAu);
	r5 = R32(r13); UPD(0x0C09CEACu, 1);  /* 0C09CEAA mov.l @Rm,Rn */
	r13 = 0xC069AF0u; UPD(0x0C09CEAEu, 1);  /* 0C09CEAC mov.l @(disp,pc),Rn */
	W32(r14, r0); UPD(0x0C09CEB0u, 1);  /* 0C09CEAE mov.l Rm,@Rn */
	IF(0x0C09CEB0u); { u32 t_ = r13; PR = 0x0C09CEB4u; r4 = (u32)(s32)(s16)R16(r9); /* slot mov.w @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C09CEB4u); }  /* 0C09CEB0 jsr @Rn */
L_0C09CEB4: BLKS(0x0C09CEB4u);
	W32(r14 + 0x4u, r0); UPD(0x0C09CEB6u, 1);  /* 0C09CEB4 mov.l Rm,@(disp,Rn) */
	r1 = R32(r14); UPD(0x0C09CEB8u, 1);  /* 0C09CEB6 mov.l @Rm,Rn */
	r7 = 0xFFFFu; UPD(0x0C09CEBAu, 1);  /* 0C09CEB8 mov.l @(disp,pc),Rn */
	r0 = R32(r14); UPD(0x0C09CEBCu, 1);  /* 0C09CEBA mov.l @Rm,Rn */
	r1 &= r7;  /* 0C09CEBC and Rm,Rn */
	W32(r14, r1); UPD(0x0C09CEC0u, 2);  /* 0C09CEBE mov.l Rm,@Rn */
	r3 = 0xFFFF0000u; UPD(0x0C09CEC2u, 1);  /* 0C09CEC0 mov.l @(disp,pc),Rn */
	r2 = 0x8000u; UPD(0x0C09CEC4u, 1);  /* 0C09CEC2 mov.l @(disp,pc),Rn */
	r5 = R32(r14); UPD(0x0C09CEC6u, 1);  /* 0C09CEC4 mov.l @Rm,Rn */
	T = (s32)r5 > (s32)r2;  /* 0C09CEC6 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r0 &= r3; /* slot and Rm,Rn */ if (c_) { UPD(0x0C09CED0u, 4); goto L_0C09CED0; } goto L_0C09CECC; }  /* 0C09CEC8 bf/s */
L_0C09CECC: BLKS(0x0C09CECCu);
	r6 = 0x10000u; UPD(0x0C09CECEu, 2);  /* 0C09CECC mov.l @(disp,pc),Rn */
	r0 += r6;  /* 0C09CECE add Rm,Rn */
	UPD(0x0C09CED0u, 1);
L_0C09CED0: BLKS(0x0C09CED0u);
	r4 = R32(r14 + 0x4u); UPD(0x0C09CED2u, 1);  /* 0C09CED0 mov.l @(disp,Rm),Rn */
	r3 &= r4;  /* 0C09CED2 and Rm,Rn */
	r4 &= r7;  /* 0C09CED4 and Rm,Rn */
	T = (s32)r4 > (s32)r2;  /* 0C09CED6 cmp/gt Rm,Rn */
	{ u32 c_ = !T; W32(r14, r0); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C09CEE0u, 6); goto L_0C09CEE0; } UPD(0x0C09CEDCu, 1); goto L_0C09CEDC; }  /* 0C09CED8 bf/s */
L_0C09CEDC: BLKS(0x0C09CEDCu);
	r0 = 0x10000u; UPD(0x0C09CEDEu, 1);  /* 0C09CEDC mov.l @(disp,pc),Rn */
	r3 += r0;  /* 0C09CEDE add Rm,Rn */
	UPD(0x0C09CEE0u, 1);
L_0C09CEE0: BLKS(0x0C09CEE0u);
	r9 = 0xB4u; UPD(0x0C09CEE2u, 1);  /* 0C09CEE0 mov.w @(disp,pc),Rn */
	IF(0x0C09CEE2u); MACL = r10 * r9;  /* 0C09CEE2 mul.l Rm,Rn */
	r13 = R32(r11 + 0x2Cu); UPD(0x0C09CEE6u, 3);  /* 0C09CEE4 mov.l @(disp,Rm),Rn */
	IF(0x0C09CEE6u); r0 = MACL;  /* 0C09CEE6 sts macl,Rn */
	r0 += r12;  /* 0C09CEE8 add Rm,Rn */
	r5 = R32(r0 + 0x24u); UPD(0x0C09CEECu, 3);  /* 0C09CEEA mov.l @(disp,Rm),Rn */
	r10 = R32(r0 + 0x28u); UPD(0x0C09CEEEu, 1);  /* 0C09CEEC mov.l @(disp,Rm),Rn */
	r5 += r13;  /* 0C09CEEE add Rm,Rn */
	r12 = R32(r11 + 0x30u); UPD(0x0C09CEF2u, 2);  /* 0C09CEF0 mov.l @(disp,Rm),Rn */
	r1 = R32(r14); UPD(0x0C09CEF4u, 1);  /* 0C09CEF2 mov.l @Rm,Rn */
	r10 += r12;  /* 0C09CEF4 add Rm,Rn */
	r7 = 0x9Au; UPD(0x0C09CEF8u, 2);  /* 0C09CEF6 mov.w @(disp,pc),Rn */
	r5 += r1;  /* 0C09CEF8 add Rm,Rn */
	r10 += r3;  /* 0C09CEFA add Rm,Rn */
	IF(0x0C09CEFCu); r2 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C09CEFEu, 3);  /* 0C09CEFC mov.b @(r0,Rm),Rn */
	W32(r11 + 0x24u, r5); UPD(0x0C09CF00u, 1);  /* 0C09CEFE mov.l Rm,@(disp,Rn) */
	T = (r2 & r2) == 0;  /* 0C09CF00 tst Rm,Rn */
	{ u32 c_ = !T; W32(r11 + 0x28u, r10); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C09CE80u, 4); goto L_0C09CE80; } UPD(0x0C09CF06u, 1); goto L_0C09CF06; }  /* 0C09CF02 bf/s */
L_0C09CF06: BLKS(0x0C09CF06u);
	{ r14 += 0x18u; /* slot add #imm,Rn */ UPD(0x0C09CC56u, 3); goto L_0C09CC56; }  /* 0C09CF06 bra */
L_0C09CF10: BLKS(0x0C09CF10u);
	r2 = 0xB4u; UPD(0x0C09CF12u, 1);  /* 0C09CF10 mov.w @(disp,pc),Rn */
	IF(0x0C09CF12u); MACL = r13 * r2;  /* 0C09CF12 mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C09CF16u, 3);  /* 0C09CF14 mov.l @(disp,pc),Rn */
	IF(0x0C09CF16u); r11 = MACL;  /* 0C09CF16 sts macl,Rn */
	IF(0x0C09CF18u); MACL = r10 * r2;  /* 0C09CF18 mul.l Rm,Rn */
	r11 += r7;  /* 0C09CF1A add Rm,Rn */
	r8 = 0xC069B20u; UPD(0x0C09CF1Eu, 5);  /* 0C09CF1C mov.l @(disp,pc),Rn */
	IF(0x0C09CF1Eu); r12 = MACL;  /* 0C09CF1E sts macl,Rn */
	r12 += r7;  /* 0C09CF20 add Rm,Rn */
	r9 = 0x88u; UPD(0x0C09CF24u, 3);  /* 0C09CF22 mov.w @(disp,pc),Rn */
	r10 = r11;  /* 0C09CF24 mov Rm,Rn */
	r13 = R32(r12 + 0x24u); UPD(0x0C09CF28u, 2);  /* 0C09CF26 mov.l @(disp,Rm),Rn */
	r9 += r11;  /* 0C09CF28 add Rm,Rn */
	r0 = R32(r11 + 0x2Cu); UPD(0x0C09CF2Cu, 2);  /* 0C09CF2A mov.l @(disp,Rm),Rn */
	r10 += 0x50u;  /* 0C09CF2C add #imm,Rn */
	r4 = (u32)(s32)(s16)R16(r9); UPD(0x0C09CF30u, 2);  /* 0C09CF2E mov.w @Rm,Rn */
	r13 += r0;  /* 0C09CF30 add Rm,Rn */
	IF(0x0C09CF32u); { u32 t_ = r8; PR = 0x0C09CF36u; r5 = R32(r10); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C09CF36u); }  /* 0C09CF32 jsr @Rn */
L_0C09CF36: BLKS(0x0C09CF36u);
	r13 += r0;  /* 0C09CF36 add Rm,Rn */
	W32(r11 + 0x24u, r13); UPD(0x0C09CF3Au, 2);  /* 0C09CF38 mov.l Rm,@(disp,Rn) */
	r8 = 0x1u;  /* 0C09CF3A mov #imm,Rn */
	r4 = R32(r11 + 0x30u); UPD(0x0C09CF3Eu, 2);  /* 0C09CF3C mov.l @(disp,Rm),Rn */
	r13 = R32(r12 + 0x28u); UPD(0x0C09CF40u, 1);  /* 0C09CF3E mov.l @(disp,Rm),Rn */
	r13 += r4;  /* 0C09CF40 add Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r9); UPD(0x0C09CF44u, 2);  /* 0C09CF42 mov.w @Rm,Rn */
	r9 = 0xC069AF0u; UPD(0x0C09CF46u, 1);  /* 0C09CF44 mov.l @(disp,pc),Rn */
	IF(0x0C09CF46u); { u32 t_ = r9; PR = 0x0C09CF4Au; r5 = R32(r10); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C09CF4Au); }  /* 0C09CF46 jsr @Rn */
L_0C09CF4A: BLKS(0x0C09CF4Au);
	r6 = R32(r12 + 0x8u); UPD(0x0C09CF4Cu, 1);  /* 0C09CF4A mov.l @(disp,Rm),Rn */
	r13 += r0;  /* 0C09CF4C add Rm,Rn */
	r6 += 0xFFFFFFEBu;  /* 0C09CF4E add #imm,Rn */
	T = r6 > r8;  /* 0C09CF50 cmp/hi Rm,Rn */
	{ u32 c_ = T; W32(r11 + 0x28u, r13); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C09CF06u, 6); goto L_0C09CF06; } UPD(0x0C09CF56u, 1); goto L_0C09CF56; }  /* 0C09CF52 bt/s */
L_0C09CF56: BLKS(0x0C09CF56u);
	r2 = R32(r10); UPD(0x0C09CF58u, 1);  /* 0C09CF56 mov.l @Rm,Rn */
	r5 = 0xFFFF8000u; UPD(0x0C09CF5Au, 1);  /* 0C09CF58 mov.w @(disp,pc),Rn */
	r2 += r5;  /* 0C09CF5A add Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C09CF5C tst Rm,Rn */
	{ u32 c_ = !T; W32(r10, r2); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C09CF06u, 5); goto L_0C09CF06; } UPD(0x0C09CF62u, 1); goto L_0C09CF62; }  /* 0C09CF5E bf/s */
L_0C09CF62: BLKS(0x0C09CF62u);
	r1 = 0x9Au; UPD(0x0C09CF64u, 1);  /* 0C09CF62 mov.w @(disp,pc),Rn */
	r0 = r12;  /* 0C09CF64 mov Rm,Rn */
	IF(0x0C09CF66u); W8(r0 + r1, r2); UPD(0x0C09CF68u, 2);  /* 0C09CF66 mov.b Rm,@(r0,Rn) */
	r1 += 0x5u;  /* 0C09CF68 add #imm,Rn */
	r0 = r11;  /* 0C09CF6A mov Rm,Rn */
	UPD(0x0C09CF6Cu, 2);
L_0C09CF6C: BLKS(0x0C09CF6Cu);
	IF(0x0C09CF6Cu); W8(r0 + r1, r2); UPD(0x0C09CF6Eu, 1);  /* 0C09CF6C mov.b Rm,@(r0,Rn) */
L_0C09CF6E: BLKS(0x0C09CF6Eu);
	{ r14 += 0x18u; /* slot add #imm,Rn */ UPD(0x0C09CC56u, 3); goto L_0C09CC56; }  /* 0C09CF6E bra */
L_0C09CFA0: BLKS(0x0C09CFA0u);
	r11 = 0xC0A8BF0u; UPD(0x0C09CFA2u, 1);  /* 0C09CFA0 mov.l @(disp,pc),Rn */
	IF(0x0C09CFA2u); { u32 t_ = r11; PR = 0x0C09CFA6u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8BF0, 0x0C0A8BF0u, 0x0C09CFA6u); }  /* 0C09CFA2 jsr @Rn */
L_0C09CFA6: BLKS(0x0C09CFA6u);
	IF(0x0C09CFA6u); T = (s32)r0 >= 0;  /* 0C09CFA6 cmp/pz Rn */
	{ u32 c_ = T; r10 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C09CFB0u, 4); goto L_0C09CFB0; } goto L_0C09CFAC; }  /* 0C09CFA8 bt/s */
L_0C09CFAC: BLKS(0x0C09CFACu);
	{ IF(0x0C09CFAEu); ; /* slot nop */ UPD(0x0C09CD20u, 4); goto L_0C09CD20; }  /* 0C09CFAC bra */
L_0C09CFB0: BLKS(0x0C09CFB0u);
	r2 = 0xB4u; UPD(0x0C09CFB2u, 1);  /* 0C09CFB0 mov.w @(disp,pc),Rn */
	r12 = 0x1Fu;  /* 0C09CFB2 mov #imm,Rn */
	IF(0x0C09CFB4u); MACL = r13 * r2;  /* 0C09CFB4 mul.l Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C09CFB8u, 4);  /* 0C09CFB6 mov.l @(disp,pc),Rn */
	IF(0x0C09CFB8u); r0 = MACL;  /* 0C09CFB8 sts macl,Rn */
	IF(0x0C09CFBAu); MACL = r10 * r2;  /* 0C09CFBA mul.l Rm,Rn */
	r0 += r5;  /* 0C09CFBC add Rm,Rn */
	r3 = R32(r0); UPD(0x0C09CFC0u, 5);  /* 0C09CFBE mov.l @Rm,Rn */
	IF(0x0C09CFC0u); r4 = MACL;  /* 0C09CFC0 sts macl,Rn */
	r4 += r5;  /* 0C09CFC2 add Rm,Rn */
	r8 = R32(r4 + 0x24u); UPD(0x0C09CFC6u, 3);  /* 0C09CFC4 mov.l @(disp,Rm),Rn */
	r6 = R32(r4 + 0x28u); UPD(0x0C09CFC8u, 1);  /* 0C09CFC6 mov.l @(disp,Rm),Rn */
	r7 = R32(r0 + 0x2Cu); UPD(0x0C09CFCAu, 1);  /* 0C09CFC8 mov.l @(disp,Rm),Rn */
	r9 = R32(r0 + 0x30u); UPD(0x0C09CFCCu, 1);  /* 0C09CFCA mov.l @(disp,Rm),Rn */
	r8 += r7;  /* 0C09CFCC add Rm,Rn */
	r1 = 0x100u; UPD(0x0C09CFD0u, 2);  /* 0C09CFCE mov.w @(disp,pc),Rn */
	r6 += r9;  /* 0C09CFD0 add Rm,Rn */
	r3 |= r1;  /* 0C09CFD2 or Rm,Rn */
	r2 = R32(r0 + 0xCu); UPD(0x0C09CFD6u, 3);  /* 0C09CFD4 mov.l @(disp,Rm),Rn */
	W32(r0 + 0x24u, r8); UPD(0x0C09CFD8u, 1);  /* 0C09CFD6 mov.l Rm,@(disp,Rn) */
	T = r2 > r12;  /* 0C09CFD8 cmp/hi Rm,Rn */
	W32(r0 + 0x28u, r6); UPD(0x0C09CFDCu, 2);  /* 0C09CFDA mov.l Rm,@(disp,Rn) */
	{ u32 c_ = !T; W32(r0, r3); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C09CFE4u, 3); goto L_0C09CFE4; } UPD(0x0C09CFE0u, 1); goto L_0C09CFE0; }  /* 0C09CFDC bf/s */
L_0C09CFE0: BLKS(0x0C09CFE0u);
	{ r7 = 0x3u; /* slot mov #imm,Rn */ UPD(0x0C09D0E0u, 3); goto L_0C09D0E0; }  /* 0C09CFE0 bra */
L_0C09CFE4: BLKS(0x0C09CFE4u);
	r0 = 0xC09CFFCu;  /* 0C09CFE4 mova @(disp,pc),r0 */
	IF(0x0C09CFE6u); r11 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C09CFE8u, 2);  /* 0C09CFE6 mov.b @(r0,Rm),Rn */
	r11 = r11 & 0xFF;  /* 0C09CFE8 extu.b Rm,Rn */
	IF(0x0C09CFEAu); { u32 tv_ = (r11 + 0x0C09CFEEu); u32 t_ = PHYS(tv_); IF(0x0C09CFECu); ; /* slot nop */ JRGN(tv_); UPD(t_, 4); switch (t_) { case 0x0C09D020u: goto L_0C09D020; case 0x0C09D060u: goto L_0C09D060; case 0x0C09D090u: goto L_0C09D090; default: JUMPD(tv_); } }  /* 0C09CFEA braf Rn */
L_0C09D020: BLKS(0x0C09D020u);
	r2 = 0xB4u; UPD(0x0C09D022u, 1);  /* 0C09D020 mov.w @(disp,pc),Rn */
	IF(0x0C09D022u); MACL = r10 * r2;  /* 0C09D022 mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C09D026u, 3);  /* 0C09D024 mov.l @(disp,pc),Rn */
	IF(0x0C09D026u); r0 = MACL;  /* 0C09D026 sts macl,Rn */
	r12 = 0xA1u; UPD(0x0C09D02Au, 2);  /* 0C09D028 mov.w @(disp,pc),Rn */
	r0 += r3;  /* 0C09D02A add Rm,Rn */
	IF(0x0C09D02Cu); r10 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C09D02Eu, 2);  /* 0C09D02C mov.b @(r0,Rm),Rn */
	IF(0x0C09D02Eu); T = (s32)r10 >= 0;  /* 0C09D02E cmp/pz Rn */
	if (T) { UPD(0x0C09CF6Eu, 4); goto L_0C09CF6E; }  /* 0C09D030 bt */
L_0C09D032: BLKS(0x0C09D032u);
	IF(0x0C09D032u); MACL = r13 * r2;  /* 0C09D032 mul.l Rm,Rn */
	r9 = 0x100u; UPD(0x0C09D036u, 3);  /* 0C09D034 mov.w @(disp,pc),Rn */
	r4 = r13;  /* 0C09D036 mov Rm,Rn */
	IF(0x0C09D038u); r0 = MACL;  /* 0C09D038 sts macl,Rn */
	r0 += r3;  /* 0C09D03A add Rm,Rn */
	r2 += 0xFFFFFFD2u;  /* 0C09D03C add #imm,Rn */
	r3 = R32(r0 + 0xCu); UPD(0x0C09D040u, 5);  /* 0C09D03E mov.l @(disp,Rm),Rn */
	r6 = 0x1u;  /* 0C09D040 mov #imm,Rn */
	IF(0x0C09D042u); W16(r0 + r2, r9); UPD(0x0C09D044u, 2);  /* 0C09D042 mov.w Rm,@(r0,Rn) */
	r3 += 0x1u;  /* 0C09D044 add #imm,Rn */
	r13 = 0xC0A8AE0u; UPD(0x0C09D048u, 2);  /* 0C09D046 mov.l @(disp,pc),Rn */
	r2 += 0x2u;  /* 0C09D048 add #imm,Rn */
	IF(0x0C09D04Au); W16(r0 + r2, r6); UPD(0x0C09D04Cu, 2);  /* 0C09D04A mov.w Rm,@(r0,Rn) */
	IF(0x0C09D04Cu); { u32 t_ = r13; PR = 0x0C09D050u; W32(r0 + 0xCu, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C09D050u); }  /* 0C09D04C jsr @Rn */
L_0C09D050: BLKS(0x0C09D050u);
	{ r4 = 0x6Du; /* slot mov #imm,Rn */ UPD(0x0C09CE22u, 3); goto L_0C09CE22; }  /* 0C09D050 bra */
L_0C09D060: BLKS(0x0C09D060u);
	r6 = 0xB4u; UPD(0x0C09D062u, 1);  /* 0C09D060 mov.w @(disp,pc),Rn */
	IF(0x0C09D062u); MACL = r13 * r6;  /* 0C09D062 mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C09D066u, 3);  /* 0C09D064 mov.l @(disp,pc),Rn */
	IF(0x0C09D066u); r3 = MACL;  /* 0C09D066 sts macl,Rn */
	r3 += r2;  /* 0C09D068 add Rm,Rn */
	r2 = 0x99u; UPD(0x0C09D06Cu, 3);  /* 0C09D06A mov.w @(disp,pc),Rn */
	r2 += r3;  /* 0C09D06C add Rm,Rn */
	r7 = (u32)(s32)(s8)R8(r2); UPD(0x0C09D070u, 2);  /* 0C09D06E mov.b @Rm,Rn */
	r7 += 0x1u;  /* 0C09D070 add #imm,Rn */
	r0 = r7 & 0xFF;  /* 0C09D072 extu.b Rm,Rn */
	T = r0 == 0x2u;  /* 0C09D074 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r2, r7); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C09D160u, 6); goto L_0C09D160; } UPD(0x0C09D07Au, 1); goto L_0C09D07A; }  /* 0C09D076 bf/s */
L_0C09D07A: BLKS(0x0C09D07Au);
	r12 = 0x0u;  /* 0C09D07A mov #imm,Rn */
	W8(r2, r12); UPD(0x0C09D07Eu, 2);  /* 0C09D07C mov.b Rm,@Rn */
L_0C09D07E: BLKS(0x0C09D07Eu);
	r0 = 0x88u; UPD(0x0C09D080u, 1);  /* 0C09D07E mov.w @(disp,pc),Rn */
	r9 = R32(r3 + 0xCu); UPD(0x0C09D082u, 1);  /* 0C09D080 mov.l @(disp,Rm),Rn */
	IF(0x0C09D082u); r10 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C09D084u, 1);  /* 0C09D082 mov.w @(r0,Rm),Rn */
	r9 += r10;  /* 0C09D084 add Rm,Rn */
	W32(r3 + 0xCu, r9); UPD(0x0C09D088u, 2);  /* 0C09D086 mov.l Rm,@(disp,Rn) */
L_0C09D088: BLKS(0x0C09D088u);
	r1 = 0xC0A8AE0u; UPD(0x0C09D08Au, 1);  /* 0C09D088 mov.l @(disp,pc),Rn */
	{ r4 = r13; /* slot mov Rm,Rn */ UPD(0x0C09CCC4u, 3); goto L_0C09CCC4; }  /* 0C09D08A bra */
L_0C09D090: BLKS(0x0C09D090u);
	r8 = 0xB4u; UPD(0x0C09D092u, 1);  /* 0C09D090 mov.w @(disp,pc),Rn */
	IF(0x0C09D092u); MACL = r13 * r8;  /* 0C09D092 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C09D096u, 3);  /* 0C09D094 mov.l @(disp,pc),Rn */
	IF(0x0C09D096u); r2 = MACL;  /* 0C09D096 sts macl,Rn */
	r3 = 0x98u; UPD(0x0C09D09Au, 2);  /* 0C09D098 mov.w @(disp,pc),Rn */
	r2 += r0;  /* 0C09D09A add Rm,Rn */
	r3 += r2;  /* 0C09D09C add Rm,Rn */
	r1 = r3;  /* 0C09D09E mov Rm,Rn */
	r1 += 0x1u;  /* 0C09D0A0 add #imm,Rn */
	r4 = (u32)(s32)(s8)R8(r1); UPD(0x0C09D0A4u, 5);  /* 0C09D0A2 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C09D0A4 add #imm,Rn */
	r0 = r4 & 0xFF;  /* 0C09D0A6 extu.b Rm,Rn */
	T = r0 == 0x2u;  /* 0C09D0A8 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r1, r4); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C09D160u, 6); goto L_0C09D160; } UPD(0x0C09D0AEu, 1); goto L_0C09D0AE; }  /* 0C09D0AA bf/s */
L_0C09D0AE: BLKS(0x0C09D0AEu);
	r0 = 0x88u; UPD(0x0C09D0B0u, 1);  /* 0C09D0AE mov.w @(disp,pc),Rn */
	r7 = 0x0u;  /* 0C09D0B0 mov #imm,Rn */
	IF(0x0C09D0B2u); r5 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C09D0B4u, 2);  /* 0C09D0B2 mov.w @(r0,Rm),Rn */
	IF(0x0C09D0B4u); T = (s32)r5 > 0;  /* 0C09D0B4 cmp/pl Rn */
	{ u32 c_ = !T; W8(r1, r7); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C09D0D0u, 4); goto L_0C09D0D0; } UPD(0x0C09D0BAu, 1); goto L_0C09D0BA; }  /* 0C09D0B6 bf/s */
L_0C09D0BA: BLKS(0x0C09D0BAu);
	r11 = 0x30u;  /* 0C09D0BA mov #imm,Rn */
	W32(r2 + 0xCu, r11); UPD(0x0C09D0BEu, 2);  /* 0C09D0BC mov.l Rm,@(disp,Rn) */
	{ W8(r3, r7); /* slot mov.b Rm,@Rn */ UPD(0x0C09D088u, 3); goto L_0C09D088; }  /* 0C09D0BE bra */
L_0C09D0D0: BLKS(0x0C09D0D0u);
	r1 = R32(r2 + 0xCu); UPD(0x0C09D0D2u, 1);  /* 0C09D0D0 mov.l @(disp,Rm),Rn */
	r1 += 0xFFFFFFFFu;  /* 0C09D0D2 add #imm,Rn */
	UPD(0x0C09D0D4u, 1);
L_0C09D0D4: BLKS(0x0C09D0D4u);
	{ W32(r2 + 0xCu, r1); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C09D088u, 3); goto L_0C09D088; }  /* 0C09D0D4 bra */
L_0C09D0E0: BLKS(0x0C09D0E0u);
	r2 = 0x9Fu; UPD(0x0C09D0E2u, 1);  /* 0C09D0E0 mov.w @(disp,pc),Rn */
	IF(0x0C09D0E2u); r12 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C09D0E4u, 1);  /* 0C09D0E2 mov.b @(r0,Rm),Rn */
	r2 = r12 & 0xFF;  /* 0C09D0E4 extu.b Rm,Rn */
	T = r2 > r7;  /* 0C09D0E6 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C09D160u, 5); goto L_0C09D160; }  /* 0C09D0E8 bt */
L_0C09D0EA: BLKS(0x0C09D0EAu);
	r0 = 0xC09D10Cu;  /* 0C09D0EA mova @(disp,pc),r0 */
	r2 += r2;  /* 0C09D0EC add Rm,Rn */
	IF(0x0C09D0EEu); r3 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C09D0F0u, 3);  /* 0C09D0EE mov.w @(r0,Rm),Rn */
	IF(0x0C09D0F0u); { u32 tv_ = (r3 + 0x0C09D0F4u); u32 t_ = PHYS(tv_); IF(0x0C09D0F2u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C09D120u: goto L_0C09D120; case 0x0C09D180u: goto L_0C09D180; case 0x0C09D350u: goto L_0C09D350; case 0x0C09D3D0u: goto L_0C09D3D0; default: JUMPD(tv_); } }  /* 0C09D0F0 braf Rn */
L_0C09D120: BLKS(0x0C09D120u);
	r12 = 0xC069BF0u; UPD(0x0C09D122u, 1);  /* 0C09D120 mov.l @(disp,pc),Rn */
	r11 = 0xC068F00u; UPD(0x0C09D124u, 1);  /* 0C09D122 mov.l @(disp,pc),Rn */
	IF(0x0C09D124u); { u32 t_ = r12; PR = 0x0C09D128u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069BF0, 0x0C069BF0u, 0x0C09D128u); }  /* 0C09D124 jsr @Rn */
L_0C09D128: BLKS(0x0C09D128u);
	r8 = 0xB4u; UPD(0x0C09D12Au, 1);  /* 0C09D128 mov.w @(disp,pc),Rn */
	r4 = r13;  /* 0C09D12A mov Rm,Rn */
	IF(0x0C09D12Cu); { u32 t_ = r11; PR = 0x0C09D130u; r5 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C068F00, 0x0C068F00u, 0x0C09D130u); }  /* 0C09D12C jsr @Rn */
L_0C09D130: BLKS(0x0C09D130u);
	IF(0x0C09D130u); MACL = r13 * r8;  /* 0C09D130 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C09D134u, 3);  /* 0C09D132 mov.l @(disp,pc),Rn */
	r4 = 0x1Fu;  /* 0C09D134 mov #imm,Rn */
	IF(0x0C09D136u); r8 = MACL;  /* 0C09D136 sts macl,Rn */
	r5 = 0x86u; UPD(0x0C09D13Au, 3);  /* 0C09D138 mov.w @(disp,pc),Rn */
	r8 += r0;  /* 0C09D13A add Rm,Rn */
	r0 = r8;  /* 0C09D13C mov Rm,Rn */
	IF(0x0C09D13Eu); r9 = (u32)(s32)(s16)R16(r0 + r5); UPD(0x0C09D140u, 3);  /* 0C09D13E mov.w @(r0,Rm),Rn */
	r9 += 0x8u;  /* 0C09D140 add #imm,Rn */
	IF(0x0C09D142u); r9 >>= 2;  /* 0C09D142 shlr2 Rn */
	r6 = 0xC0A8AE0u; UPD(0x0C09D146u, 3);  /* 0C09D144 mov.l @(disp,pc),Rn */
	IF(0x0C09D146u); r9 >>= 2;  /* 0C09D146 shlr2 Rn */
	r9 &= r4;  /* 0C09D148 and Rm,Rn */
	r10 = 0xC0BC1B0u; UPD(0x0C09D14Cu, 3);  /* 0C09D14A mov.l @(disp,pc),Rn */
	r9 += 0x20u;  /* 0C09D14C add #imm,Rn */
	r4 = r13;  /* 0C09D14E mov Rm,Rn */
	IF(0x0C09D150u); { u32 t_ = r6; PR = 0x0C09D154u; W32(r8 + 0xCu, r9); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 4); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C09D154u); }  /* 0C09D150 jsr @Rn */
L_0C09D154: BLKS(0x0C09D154u);
	r4 = r13;  /* 0C09D154 mov Rm,Rn */
	r5 = 0x1Eu;  /* 0C09D156 mov #imm,Rn */
	IF(0x0C09D158u); { u32 t_ = r10; PR = 0x0C09D15Cu; r6 = 0xFu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C09D15Cu); }  /* 0C09D158 jsr @Rn */
L_0C09D15C: BLKS(0x0C09D15Cu);
	T = (r0 & r0) == 0;  /* 0C09D15C tst Rm,Rn */
	if (!T) { UPD(0x0C09D164u, 4); goto L_0C09D164; }  /* 0C09D15E bf */
L_0C09D160: BLKS(0x0C09D160u);
	{ r14 += 0x18u; /* slot add #imm,Rn */ UPD(0x0C09CC56u, 3); goto L_0C09CC56; }  /* 0C09D160 bra */
L_0C09D164: BLKS(0x0C09D164u);
	r0 = 0x98u; UPD(0x0C09D166u, 1);  /* 0C09D164 mov.w @(disp,pc),Rn */
	r2 = 0x0u;  /* 0C09D166 mov #imm,Rn */
	IF(0x0C09D168u); W8(r0 + r8, r2); UPD(0x0C09D16Au, 2);  /* 0C09D168 mov.b Rm,@(r0,Rn) */
	r0 += 0x7u;  /* 0C09D16A add #imm,Rn */
	IF(0x0C09D16Cu); r7 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C09D16Eu, 2);  /* 0C09D16C mov.b @(r0,Rm),Rn */
	r7 += 0x1u;  /* 0C09D16E add #imm,Rn */
	IF(0x0C09D170u); W8(r0 + r8, r7); UPD(0x0C09D172u, 2);  /* 0C09D170 mov.b Rm,@(r0,Rn) */
	r13 = 0x30000u; UPD(0x0C09D174u, 1);  /* 0C09D172 mov.l @(disp,pc),Rn */
	r0 += 0xFFFFFFEDu;  /* 0C09D174 add #imm,Rn */
	{ IF(0x0C09D178u); W32(r0 + r8, r13); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C09CC54u, 4); goto L_0C09CC54; }  /* 0C09D176 bra */
L_0C09D180: BLKS(0x0C09D180u);
	r9 = 0xB4u; UPD(0x0C09D182u, 1);  /* 0C09D180 mov.w @(disp,pc),Rn */
	IF(0x0C09D182u); MACL = r10 * r9;  /* 0C09D182 mul.l Rm,Rn */
	r8 = 0xC286578u; UPD(0x0C09D186u, 3);  /* 0C09D184 mov.l @(disp,pc),Rn */
	IF(0x0C09D186u); r0 = MACL;  /* 0C09D186 sts macl,Rn */
	r3 = 0x9Fu; UPD(0x0C09D18Au, 2);  /* 0C09D188 mov.w @(disp,pc),Rn */
	r0 += r8;  /* 0C09D18A add Rm,Rn */
	IF(0x0C09D18Cu); r0 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C09D18Eu, 2);  /* 0C09D18C mov.b @(r0,Rm),Rn */
	T = r0 == 0x3u;  /* 0C09D18E cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C09D196u, 4); goto L_0C09D196; }  /* 0C09D190 bf */
L_0C09D192: BLKS(0x0C09D192u);
	{ IF(0x0C09D194u); ; /* slot nop */ UPD(0x0C09D310u, 3); goto L_0C09D310; }  /* 0C09D192 bra */
L_0C09D196: BLKS(0x0C09D196u);
	r12 = 0xC0BC1B0u; UPD(0x0C09D198u, 1);  /* 0C09D196 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C09D198 mov Rm,Rn */
	r5 = 0x2u;  /* 0C09D19A mov #imm,Rn */
	IF(0x0C09D19Cu); { u32 t_ = r12; PR = 0x0C09D1A0u; r6 = 0x2u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C09D1A0u); }  /* 0C09D19C jsr @Rn */
L_0C09D1A0: BLKS(0x0C09D1A0u);
	T = (r0 & r0) == 0;  /* 0C09D1A0 tst Rm,Rn */
	{ u32 c_ = T; IF(0x0C09D1A4u); MACL = r13 * r9; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C09D28Eu, 5); goto L_0C09D28E; } goto L_0C09D1A6; }  /* 0C09D1A2 bt/s */
L_0C09D1A6: BLKS(0x0C09D1A6u);
	r12 = 0x0u;  /* 0C09D1A6 mov #imm,Rn */
	W32(r14 + 0x14u, r12); UPD(0x0C09D1AAu, 4);  /* 0C09D1A8 mov.l Rm,@(disp,Rn) */
	IF(0x0C09D1AAu); r1 = MACL;  /* 0C09D1AA sts macl,Rn */
	r1 += r8;  /* 0C09D1AC add Rm,Rn */
	W32(r14 + 0x8u, r1); UPD(0x0C09D1B0u, 3);  /* 0C09D1AE mov.l Rm,@(disp,Rn) */
L_0C09D1B0: BLKS(0x0C09D1B0u);
	r0 = R32(r14 + 0x8u); UPD(0x0C09D1B2u, 1);  /* 0C09D1B0 mov.l @(disp,Rm),Rn */
	r8 = 0x86u; UPD(0x0C09D1B4u, 1);  /* 0C09D1B2 mov.w @(disp,pc),Rn */
	IF(0x0C09D1B4u); r11 = (u32)(s32)(s16)R16(r0 + r8); UPD(0x0C09D1B6u, 1);  /* 0C09D1B4 mov.w @(r0,Rm),Rn */
	r9 = R32(r14 + 0x14u); UPD(0x0C09D1B8u, 1);  /* 0C09D1B6 mov.l @(disp,Rm),Rn */
	r4 = r11;  /* 0C09D1B8 mov Rm,Rn */
	r0 = 0xC1CB7C8u; UPD(0x0C09D1BCu, 2);  /* 0C09D1BA mov.l @(disp,pc),Rn */
	r1 = 0xC069B20u; UPD(0x0C09D1BEu, 1);  /* 0C09D1BC mov.l @(disp,pc),Rn */
	r0 += r9;  /* 0C09D1BE add Rm,Rn */
	r8 = R32(r0 + 0x4u); UPD(0x0C09D1C2u, 2);  /* 0C09D1C0 mov.l @(disp,Rm),Rn */
	r9 = R32(r0 + 0x8u); UPD(0x0C09D1C4u, 1);  /* 0C09D1C2 mov.l @(disp,Rm),Rn */
	IF(0x0C09D1C4u); { u32 t_ = r1; PR = 0x0C09D1C8u; r5 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C09D1C8u); }  /* 0C09D1C4 jsr @Rn */
L_0C09D1C8: BLKS(0x0C09D1C8u);
	r7 = R32(r14 + 0x8u); UPD(0x0C09D1CAu, 1);  /* 0C09D1C8 mov.l @(disp,Rm),Rn */
	r4 = r11;  /* 0C09D1CA mov Rm,Rn */
	r5 = R32(r7 + 0x24u); UPD(0x0C09D1CEu, 2);  /* 0C09D1CC mov.l @(disp,Rm),Rn */
	r3 = 0xC069AF0u; UPD(0x0C09D1D0u, 1);  /* 0C09D1CE mov.l @(disp,pc),Rn */
	r5 += r0;  /* 0C09D1D0 add Rm,Rn */
	W32(r14, r5); UPD(0x0C09D1D4u, 2);  /* 0C09D1D2 mov.l Rm,@Rn */
	IF(0x0C09D1D4u); { u32 t_ = r3; PR = 0x0C09D1D8u; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C09D1D8u); }  /* 0C09D1D4 jsr @Rn */
L_0C09D1D8: BLKS(0x0C09D1D8u);
	r4 = R32(r14); UPD(0x0C09D1DAu, 1);  /* 0C09D1D8 mov.l @Rm,Rn */
	r5 = r8;  /* 0C09D1DA mov Rm,Rn */
	r4 -= r0;  /* 0C09D1DC sub Rm,Rn */
	r2 = 0xC069AF0u; UPD(0x0C09D1E0u, 3);  /* 0C09D1DE mov.l @(disp,pc),Rn */
	W32(r14, r4); UPD(0x0C09D1E2u, 1);  /* 0C09D1E0 mov.l Rm,@Rn */
	IF(0x0C09D1E2u); { u32 t_ = r2; PR = 0x0C09D1E6u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C09D1E6u); }  /* 0C09D1E2 jsr @Rn */
L_0C09D1E6: BLKS(0x0C09D1E6u);
	r6 = R32(r14 + 0x8u); UPD(0x0C09D1E8u, 1);  /* 0C09D1E6 mov.l @(disp,Rm),Rn */
	r5 = r9;  /* 0C09D1E8 mov Rm,Rn */
	r8 = R32(r6 + 0x28u); UPD(0x0C09D1ECu, 2);  /* 0C09D1EA mov.l @(disp,Rm),Rn */
	r4 = r11;  /* 0C09D1EC mov Rm,Rn */
	r1 = 0xC069B20u; UPD(0x0C09D1F0u, 2);  /* 0C09D1EE mov.l @(disp,pc),Rn */
	r8 += r0;  /* 0C09D1F0 add Rm,Rn */
	IF(0x0C09D1F2u); { u32 t_ = r1; PR = 0x0C09D1F6u; W32(r14 + 0x4u, r8); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C09D1F6u); }  /* 0C09D1F2 jsr @Rn */
L_0C09D1F6: BLKS(0x0C09D1F6u);
	r5 = 0xC234C04u; UPD(0x0C09D1F8u, 1);  /* 0C09D1F6 mov.l @(disp,pc),Rn */
	r7 = R32(r14 + 0x4u); UPD(0x0C09D1FAu, 1);  /* 0C09D1F8 mov.l @(disp,Rm),Rn */
	r2 = (u32)(s32)(s8)R8(r5); UPD(0x0C09D1FCu, 1);  /* 0C09D1FA mov.b @Rm,Rn */
	r7 += r0;  /* 0C09D1FC add Rm,Rn */
	r3 = 0xC3C4170u; UPD(0x0C09D200u, 2);  /* 0C09D1FE mov.l @(disp,pc),Rn */
	r8 = r2 & 0xFF;  /* 0C09D200 extu.b Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r3); UPD(0x0C09D204u, 2);  /* 0C09D202 mov.b @Rm,Rn */
	IF(0x0C09D204u); r8 <<= 16;  /* 0C09D204 shll16 Rn */
	r4 = 0x40000u; UPD(0x0C09D208u, 2);  /* 0C09D206 mov.l @(disp,pc),Rn */
	IF(0x0C09D208u); r8 <<= 2;  /* 0C09D208 shll2 Rn */
	r9 = 0xC297A3Cu; UPD(0x0C09D20Cu, 2);  /* 0C09D20A mov.l @(disp,pc),Rn */
	r6 = r0 & 0xFF;  /* 0C09D20C extu.b Rm,Rn */
	W32(r14 + 0x4u, r7); UPD(0x0C09D210u, 2);  /* 0C09D20E mov.l Rm,@(disp,Rn) */
	r8 += r4;  /* 0C09D210 add Rm,Rn */
	IF(0x0C09D212u); MACL = r6 * r8;  /* 0C09D212 mul.l Rm,Rn */
	r7 = R32(r9); UPD(0x0C09D216u, 4);  /* 0C09D214 mov.l @Rm,Rn */
	IF(0x0C09D216u); r9 = MACL;  /* 0C09D216 sts macl,Rn */
	T = r7 >= r9;  /* 0C09D218 cmp/hs Rm,Rn */
	{ u32 c_ = T; r7 -= r9; /* slot sub Rm,Rn */ if (c_) { UPD(0x0C09D220u, 5); goto L_0C09D220; } goto L_0C09D21E; }  /* 0C09D21A bt/s */
L_0C09D21E: BLKS(0x0C09D21Eu);
	r7 = 0x0u;  /* 0C09D21E mov #imm,Rn */
	UPD(0x0C09D220u, 2);
L_0C09D220: BLKS(0x0C09D220u);
	r2 = R32(r14 + 0x14u); UPD(0x0C09D222u, 1);  /* 0C09D220 mov.l @(disp,Rm),Rn */
	IF(0x0C09D222u); r7 >>= 16;  /* 0C09D222 shlr16 Rn */
	r8 = 0xC1CB7C8u; UPD(0x0C09D226u, 2);  /* 0C09D224 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C09D226 add #imm,Rn */
	r8 += r2;  /* 0C09D228 add Rm,Rn */
	r6 = R32(r8); UPD(0x0C09D22Cu, 3);  /* 0C09D22A mov.l @Rm,Rn */
	r3 = 0x5u;  /* 0C09D22C mov #imm,Rn */
	IF(0x0C09D22Eu); MACL = r6 * r7;  /* 0C09D22E mul.l Rm,Rn */
	r8 += 0x2u;  /* 0C09D230 add #imm,Rn */
	r9 = (u32)(s32)(s16)R16(r8); UPD(0x0C09D234u, 5);  /* 0C09D232 mov.w @Rm,Rn */
	IF(0x0C09D234u); r0 = MACL;  /* 0C09D234 sts macl,Rn */
	r1 = 0xB4u; UPD(0x0C09D238u, 2);  /* 0C09D236 mov.w @(disp,pc),Rn */
	IF(0x0C09D238u); r0 >>= 8;  /* 0C09D238 shlr8 Rn */
	IF(0x0C09D23Au); MACL = r10 * r1;  /* 0C09D23A mul.l Rm,Rn */
	r0 += r9;  /* 0C09D23C add Rm,Rn */
	r0 += r11;  /* 0C09D23E add Rm,Rn */
	r11 = (u32)(s32)(s16)r0;  /* 0C09D240 exts.w Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C09D244u, 7);  /* 0C09D242 mov.l @(disp,pc),Rn */
	IF(0x0C09D244u); r0 = MACL;  /* 0C09D244 sts macl,Rn */
	r4 = 0x9Fu; UPD(0x0C09D248u, 2);  /* 0C09D246 mov.w @(disp,pc),Rn */
	r0 += r7;  /* 0C09D248 add Rm,Rn */
	r5 = 0xB4u; UPD(0x0C09D24Cu, 2);  /* 0C09D24A mov.w @(disp,pc),Rn */
	r7 = r11;  /* 0C09D24C mov Rm,Rn */
	IF(0x0C09D24Eu); r0 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C09D250u, 2);  /* 0C09D24E mov.b @(r0,Rm),Rn */
	IF(0x0C09D250u); MACL = r13 * r5;  /* 0C09D250 mul.l Rm,Rn */
	T = r0 == 0x3u;  /* 0C09D252 cmp/eq #imm,r0 */
	r0 = 0xC286578u; UPD(0x0C09D256u, 4);  /* 0C09D254 mov.l @(disp,pc),Rn */
	IF(0x0C09D256u); r8 = MACL;  /* 0C09D256 sts macl,Rn */
	r9 = 0x8Cu; UPD(0x0C09D25Au, 2);  /* 0C09D258 mov.w @(disp,pc),Rn */
	r0 += r8;  /* 0C09D25A add Rm,Rn */
	IF(0x0C09D25Cu); r2 = R32(r0 + r9); UPD(0x0C09D25Eu, 2);  /* 0C09D25C mov.l @(r0,Rm),Rn */
	IF(0x0C09D25Eu); r4 = T;  /* 0C09D25E movt Rn */
	W32(r15, r2); UPD(0x0C09D262u, 2);  /* 0C09D260 mov.l Rm,@Rn */
	IF(0x0C09D262u); ARG0(0x443Du); { s32 s_ = (s32)r3; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = 0; else r4 >>= ((~s_ & 31) + 1); }  /* 0C09D262 shld Rm,Rn */
	r11 = 0xC0BB7B0u; UPD(0x0C09D266u, 2);  /* 0C09D264 mov.l @(disp,pc),Rn */
	r6 = R32(r14 + 0x4u); UPD(0x0C09D268u, 1);  /* 0C09D266 mov.l @(disp,Rm),Rn */
	IF(0x0C09D268u); { u32 t_ = r11; PR = 0x0C09D26Cu; r5 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BB7B0, 0x0C0BB7B0u, 0x0C09D26Cu); }  /* 0C09D268 jsr @Rn */
L_0C09D26C: BLKS(0x0C09D26Cu);
	r6 = r12;  /* 0C09D26C mov Rm,Rn */
	r12 = R32(r14 + 0x14u); UPD(0x0C09D270u, 2);  /* 0C09D26E mov.l @(disp,Rm),Rn */
	r6 += 0x1u;  /* 0C09D270 add #imm,Rn */
	r12 += 0x10u;  /* 0C09D272 add #imm,Rn */
	W32(r14 + 0x14u, r12); UPD(0x0C09D276u, 3);  /* 0C09D274 mov.l Rm,@(disp,Rn) */
	r11 = 0x6u;  /* 0C09D276 mov #imm,Rn */
	r12 = (u32)(s32)(s16)r6;  /* 0C09D278 exts.w Rm,Rn */
	T = (s32)r12 > (s32)r11;  /* 0C09D27A cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C09D1B0u, 6); goto L_0C09D1B0; } goto L_0C09D280; }  /* 0C09D27C bf/s */
L_0C09D280: BLKS(0x0C09D280u);
	r12 = 0xC286578u; UPD(0x0C09D282u, 2);  /* 0C09D280 mov.l @(disp,pc),Rn */
	r12 += r8;  /* 0C09D282 add Rm,Rn */
	r12 += r9;  /* 0C09D284 add Rm,Rn */
	r11 = R32(r12); UPD(0x0C09D288u, 3);  /* 0C09D286 mov.l @Rm,Rn */
	r5 = 0x1000u; UPD(0x0C09D28Au, 1);  /* 0C09D288 mov.w @(disp,pc),Rn */
	r11 += r5;  /* 0C09D28A add Rm,Rn */
	W32(r12, r11); UPD(0x0C09D28Eu, 2);  /* 0C09D28C mov.l Rm,@Rn */
L_0C09D28E: BLKS(0x0C09D28Eu);
	r7 = 0xB4u; UPD(0x0C09D290u, 1);  /* 0C09D28E mov.w @(disp,pc),Rn */
	IF(0x0C09D290u); MACL = r13 * r7;  /* 0C09D290 mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C09D294u, 3);  /* 0C09D292 mov.l @(disp,pc),Rn */
	r0 = 0x98u; UPD(0x0C09D296u, 1);  /* 0C09D294 mov.w @(disp,pc),Rn */
	IF(0x0C09D296u); r3 = MACL;  /* 0C09D296 sts macl,Rn */
	r3 += r6;  /* 0C09D298 add Rm,Rn */
	IF(0x0C09D29Au); r4 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C09D29Cu, 3);  /* 0C09D29A mov.b @(r0,Rm),Rn */
	r1 = 0xF0u; UPD(0x0C09D29Eu, 1);  /* 0C09D29C mov.w @(disp,pc),Rn */
	r4 += 0x1u;  /* 0C09D29E add #imm,Rn */
	r13 = r4 & 0xFF;  /* 0C09D2A0 extu.b Rm,Rn */
	T = r13 == r1;  /* 0C09D2A2 cmp/eq Rm,Rn */
	{ u32 c_ = !T; IF(0x0C09D2A6u); W8(r0 + r3, r4); /* slot mov.b Rm,@(r0,Rn) */ if (c_) { UPD(0x0C09D2C0u, 6); goto L_0C09D2C0; } UPD(0x0C09D2A8u, 1); goto L_0C09D2A8; }  /* 0C09D2A4 bf/s */
L_0C09D2A8: BLKS(0x0C09D2A8u);
	IF(0x0C09D2A8u); MACL = r10 * r7;  /* 0C09D2A8 mul.l Rm,Rn */
	r1 += 0xFFFFFFB1u;  /* 0C09D2AA add #imm,Rn */
	IF(0x0C09D2ACu); r7 = MACL;  /* 0C09D2AC sts macl,Rn */
	r7 += r6;  /* 0C09D2AE add Rm,Rn */
	r7 += r1;  /* 0C09D2B0 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r7); UPD(0x0C09D2B4u, 7);  /* 0C09D2B2 mov.b @Rm,Rn */
	r0 &= 0x7Fu;  /* 0C09D2B4 and #imm,r0 */
	W8(r7, r0); UPD(0x0C09D2B8u, 2);  /* 0C09D2B6 mov.b Rm,@Rn */
	r0 = 0x9Fu; UPD(0x0C09D2BAu, 1);  /* 0C09D2B8 mov.w @(disp,pc),Rn */
	IF(0x0C09D2BAu); r10 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C09D2BCu, 1);  /* 0C09D2BA mov.b @(r0,Rm),Rn */
	r10 += 0x1u;  /* 0C09D2BC add #imm,Rn */
	IF(0x0C09D2BEu); W8(r0 + r3, r10); UPD(0x0C09D2C0u, 2);  /* 0C09D2BE mov.b Rm,@(r0,Rn) */
L_0C09D2C0: BLKS(0x0C09D2C0u);
	{ r14 += 0x18u; /* slot add #imm,Rn */ UPD(0x0C09CC56u, 3); goto L_0C09CC56; }  /* 0C09D2C0 bra */
L_0C09D310: BLKS(0x0C09D310u);
	r11 = 0xC069BF0u; UPD(0x0C09D312u, 1);  /* 0C09D310 mov.l @(disp,pc),Rn */
	r12 = 0xC068F00u; UPD(0x0C09D314u, 1);  /* 0C09D312 mov.l @(disp,pc),Rn */
	IF(0x0C09D314u); { u32 t_ = r11; PR = 0x0C09D318u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069BF0, 0x0C069BF0u, 0x0C09D318u); }  /* 0C09D314 jsr @Rn */
L_0C09D318: BLKS(0x0C09D318u);
	r4 = r13;  /* 0C09D318 mov Rm,Rn */
	IF(0x0C09D31Au); { u32 t_ = r12; PR = 0x0C09D31Eu; r5 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C068F00, 0x0C068F00u, 0x0C09D31Eu); }  /* 0C09D31A jsr @Rn */
L_0C09D31E: BLKS(0x0C09D31Eu);
	IF(0x0C09D31Eu); MACL = r13 * r9;  /* 0C09D31E mul.l Rm,Rn */
	r11 = 0x86u; UPD(0x0C09D322u, 3);  /* 0C09D320 mov.w @(disp,pc),Rn */
	IF(0x0C09D322u); r4 = MACL;  /* 0C09D322 sts macl,Rn */
	r4 += r8;  /* 0C09D324 add Rm,Rn */
	r0 = r4;  /* 0C09D326 mov Rm,Rn */
	IF(0x0C09D328u); r5 = (u32)(s32)(s16)R16(r0 + r11); UPD(0x0C09D32Au, 4);  /* 0C09D328 mov.w @(r0,Rm),Rn */
	r5 += 0x8u;  /* 0C09D32A add #imm,Rn */
	IF(0x0C09D32Cu); r5 >>= 2;  /* 0C09D32C shlr2 Rn */
	IF(0x0C09D32Eu); r5 >>= 2;  /* 0C09D32E shlr2 Rn */
	r0 = 0x1Fu;  /* 0C09D330 mov #imm,Rn */
	r5 &= r0;  /* 0C09D332 and Rm,Rn */
	r5 += 0x20u;  /* 0C09D334 add #imm,Rn */
	r6 = 0xC0A8AE0u; UPD(0x0C09D338u, 7);  /* 0C09D336 mov.l @(disp,pc),Rn */
	W32(r4 + 0xCu, r5); UPD(0x0C09D33Au, 1);  /* 0C09D338 mov.l Rm,@(disp,Rn) */
	IF(0x0C09D33Au); { u32 t_ = r6; PR = 0x0C09D33Eu; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C09D33Eu); }  /* 0C09D33A jsr @Rn */
L_0C09D33E: BLKS(0x0C09D33Eu);
	{ IF(0x0C09D340u); ; /* slot nop */ UPD(0x0C09D196u, 3); goto L_0C09D196; }  /* 0C09D33E bra */
L_0C09D350: BLKS(0x0C09D350u);
	r4 = 0xB4u; UPD(0x0C09D352u, 1);  /* 0C09D350 mov.w @(disp,pc),Rn */
	r12 = 0x0u;  /* 0C09D352 mov #imm,Rn */
	IF(0x0C09D354u); MACL = r13 * r4;  /* 0C09D354 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C09D358u, 4);  /* 0C09D356 mov.l @(disp,pc),Rn */
	IF(0x0C09D358u); r3 = MACL;  /* 0C09D358 sts macl,Rn */
	r0 = 0x86u; UPD(0x0C09D35Cu, 2);  /* 0C09D35A mov.w @(disp,pc),Rn */
	r3 += r9;  /* 0C09D35C add Rm,Rn */
	r6 = 0xFFu; UPD(0x0C09D360u, 2);  /* 0C09D35E mov.w @(disp,pc),Rn */
	r3 += r0;  /* 0C09D360 add Rm,Rn */
	r5 = 0x100u; UPD(0x0C09D364u, 2);  /* 0C09D362 mov.w @(disp,pc),Rn */
L_0C09D364: BLKS(0x0C09D364u);
	r2 = (u32)(s32)(s16)R16(r3); UPD(0x0C09D366u, 1);  /* 0C09D364 mov.w @Rm,Rn */
	r8 = (u32)(s32)(s16)r2;  /* 0C09D366 exts.w Rm,Rn */
	T = (s32)r8 > (s32)r6;  /* 0C09D368 cmp/gt Rm,Rn */
	{ u32 c_ = T; IF(0x0C09D36Cu); MACL = r13 * r4; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C09D378u, 6); goto L_0C09D378; } goto L_0C09D36E; }  /* 0C09D36A bt/s */
L_0C09D36E: BLKS(0x0C09D36Eu);
	r11 = r2;  /* 0C09D36E mov Rm,Rn */
	r11 += 0x1u;  /* 0C09D370 add #imm,Rn */
	W16(r3, r11); UPD(0x0C09D374u, 5);  /* 0C09D372 mov.w Rm,@Rn */
	r2 = r11;  /* 0C09D374 mov Rm,Rn */
	IF(0x0C09D376u); MACL = r13 * r4;  /* 0C09D376 mul.l Rm,Rn */
	UPD(0x0C09D378u, 3);
L_0C09D378: BLKS(0x0C09D378u);
	r10 = (u32)(s32)(s16)r2;  /* 0C09D378 exts.w Rm,Rn */
	T = (s32)r10 > (s32)r5;  /* 0C09D37A cmp/gt Rm,Rn */
	{ u32 c_ = !T; IF(0x0C09D37Eu); r7 = MACL; /* slot sts macl,Rn */ if (c_) { UPD(0x0C09D386u, 5); goto L_0C09D386; } goto L_0C09D380; }  /* 0C09D37C bf/s */
L_0C09D380: BLKS(0x0C09D380u);
	r0 = r2;  /* 0C09D380 mov Rm,Rn */
	r0 += 0xFFFFFFFFu;  /* 0C09D382 add #imm,Rn */
	W16(r3, r0); UPD(0x0C09D386u, 4);  /* 0C09D384 mov.w Rm,@Rn */
L_0C09D386: BLKS(0x0C09D386u);
	r9 = r12;  /* 0C09D386 mov Rm,Rn */
	r9 += 0x1u;  /* 0C09D388 add #imm,Rn */
	r12 = (u32)(s32)(s16)r9;  /* 0C09D38A exts.w Rm,Rn */
	r2 = 0x1u;  /* 0C09D38C mov #imm,Rn */
	T = (s32)r12 > (s32)r2;  /* 0C09D38E cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C09D364u, 8); goto L_0C09D364; }  /* 0C09D390 bf */
L_0C09D392: BLKS(0x0C09D392u);
	r4 = r13;  /* 0C09D392 mov Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C09D396u, 2);  /* 0C09D394 mov.l @(disp,pc),Rn */
	r12 = 0x86u; UPD(0x0C09D398u, 1);  /* 0C09D396 mov.w @(disp,pc),Rn */
	r9 += r7;  /* 0C09D398 add Rm,Rn */
	r12 += r9;  /* 0C09D39A add Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r12); UPD(0x0C09D39Eu, 3);  /* 0C09D39C mov.w @Rm,Rn */
	r0 += 0x8u;  /* 0C09D39E add #imm,Rn */
	IF(0x0C09D3A0u); r0 >>= 2;  /* 0C09D3A0 shlr2 Rn */
	IF(0x0C09D3A2u); r0 >>= 2;  /* 0C09D3A2 shlr2 Rn */
	r6 = 0xC0A8AE0u; UPD(0x0C09D3A6u, 4);  /* 0C09D3A4 mov.l @(disp,pc),Rn */
	r0 &= 0x1Fu;  /* 0C09D3A6 and #imm,r0 */
	r0 += 0x20u;  /* 0C09D3A8 add #imm,Rn */
	IF(0x0C09D3AAu); { u32 t_ = r6; PR = 0x0C09D3AEu; W32(r9 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 4); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C09D3AEu); }  /* 0C09D3AA jsr @Rn */
L_0C09D3AE: BLKS(0x0C09D3AEu);
	r1 = (u32)(s32)(s16)R16(r12); UPD(0x0C09D3B0u, 1);  /* 0C09D3AE mov.w @Rm,Rn */
	r3 = 0x100u; UPD(0x0C09D3B2u, 1);  /* 0C09D3B0 mov.w @(disp,pc),Rn */
	T = r1 == r3;  /* 0C09D3B2 cmp/eq Rm,Rn */
	if (T) { UPD(0x0C09D3BAu, 4); goto L_0C09D3BA; }  /* 0C09D3B4 bt */
L_0C09D3B6: BLKS(0x0C09D3B6u);
	{ IF(0x0C09D3B8u); ; /* slot nop */ UPD(0x0C09D2C0u, 3); goto L_0C09D2C0; }  /* 0C09D3B6 bra */
L_0C09D3BA: BLKS(0x0C09D3BAu);
	r0 = 0x9Fu; UPD(0x0C09D3BCu, 1);  /* 0C09D3BA mov.w @(disp,pc),Rn */
	IF(0x0C09D3BCu); r5 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C09D3BEu, 1);  /* 0C09D3BC mov.b @(r0,Rm),Rn */
	r5 += 0x1u;  /* 0C09D3BE add #imm,Rn */
	{ IF(0x0C09D3C2u); W8(r0 + r9, r5); /* slot mov.b Rm,@(r0,Rn) */ UPD(0x0C09CC54u, 4); goto L_0C09CC54; }  /* 0C09D3C0 bra */
L_0C09D3D0: BLKS(0x0C09D3D0u);
	r10 = 0xB4u; UPD(0x0C09D3D2u, 1);  /* 0C09D3D0 mov.w @(disp,pc),Rn */
	r4 = 0x1Fu;  /* 0C09D3D2 mov #imm,Rn */
	IF(0x0C09D3D4u); MACL = r13 * r10;  /* 0C09D3D4 mul.l Rm,Rn */
	r8 = 0xC286578u; UPD(0x0C09D3D8u, 4);  /* 0C09D3D6 mov.l @(disp,pc),Rn */
	r7 = 0xFFFFFFFFu;  /* 0C09D3D8 mov #imm,Rn */
	IF(0x0C09D3DAu); r11 = MACL;  /* 0C09D3DA sts macl,Rn */
	r11 += r8;  /* 0C09D3DC add Rm,Rn */
	W32(r11 + 0xCu, r4); UPD(0x0C09D3E0u, 4);  /* 0C09D3DE mov.l Rm,@(disp,Rn) */
	r4 = r13;  /* 0C09D3E0 mov Rm,Rn */
	r13 = 0xC0A8AE0u; UPD(0x0C09D3E4u, 2);  /* 0C09D3E2 mov.l @(disp,pc),Rn */
	r0 = 0x88u; UPD(0x0C09D3E6u, 1);  /* 0C09D3E4 mov.w @(disp,pc),Rn */
	IF(0x0C09D3E6u); { u32 t_ = r13; PR = 0x0C09D3EAu; IF(0x0C09D3E8u); W16(r0 + r11, r7); /* slot mov.w Rm,@(r0,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C09D3EAu); }  /* 0C09D3E6 jsr @Rn */
L_0C09D3EA: BLKS(0x0C09D3EAu);
	r2 = 0x9Fu; UPD(0x0C09D3ECu, 1);  /* 0C09D3EA mov.w @(disp,pc),Rn */
	r1 = 0x0u;  /* 0C09D3EC mov #imm,Rn */
	r0 = r11;  /* 0C09D3EE mov Rm,Rn */
	UPD(0x0C09D3F0u, 2);
L_0C09D3F0: BLKS(0x0C09D3F0u);
	IF(0x0C09D3F0u); W8(r0 + r2, r1); UPD(0x0C09D3F2u, 1);  /* 0C09D3F0 mov.b Rm,@(r0,Rn) */
L_0C09D3F2: BLKS(0x0C09D3F2u);
	{ r14 += 0x18u; /* slot add #imm,Rn */ UPD(0x0C09CC56u, 3); goto L_0C09CC56; }  /* 0C09D3F2 bra */
L_0C09D400: BLKS(0x0C09D400u);
	r12 = 0xC0A8CA0u; UPD(0x0C09D402u, 1);  /* 0C09D400 mov.l @(disp,pc),Rn */
	IF(0x0C09D402u); { u32 t_ = r12; PR = 0x0C09D406u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C09D406u); }  /* 0C09D402 jsr @Rn */
L_0C09D406: BLKS(0x0C09D406u);
	IF(0x0C09D406u); T = (s32)r0 >= 0;  /* 0C09D406 cmp/pz Rn */
	if (!T) { UPD(0x0C09D47Au, 4); goto L_0C09D47A; }  /* 0C09D408 bf */
L_0C09D40A: BLKS(0x0C09D40Au);
	r7 = 0xB4u; UPD(0x0C09D40Cu, 1);  /* 0C09D40A mov.w @(disp,pc),Rn */
	IF(0x0C09D40Cu); MACL = r13 * r7;  /* 0C09D40C mul.l Rm,Rn */
	r11 = 0xC286578u; UPD(0x0C09D410u, 3);  /* 0C09D40E mov.l @(disp,pc),Rn */
	IF(0x0C09D410u); r9 = MACL;  /* 0C09D410 sts macl,Rn */
	IF(0x0C09D412u); MACL = r0 * r7;  /* 0C09D412 mul.l Rm,Rn */
	r9 += r11;  /* 0C09D414 add Rm,Rn */
	r10 = R32(r9); UPD(0x0C09D418u, 5);  /* 0C09D416 mov.l @Rm,Rn */
	IF(0x0C09D418u); r5 = MACL;  /* 0C09D418 sts macl,Rn */
	r5 += r11;  /* 0C09D41A add Rm,Rn */
	r4 = R32(r5 + 0x24u); UPD(0x0C09D41Eu, 3);  /* 0C09D41C mov.l @(disp,Rm),Rn */
	r0 = R32(r9 + 0x2Cu); UPD(0x0C09D420u, 1);  /* 0C09D41E mov.l @(disp,Rm),Rn */
	r4 += r0;  /* 0C09D420 add Rm,Rn */
	r8 = R32(r5); UPD(0x0C09D424u, 2);  /* 0C09D422 mov.l @Rm,Rn */
	r0 = R32(r9 + 0xCu); UPD(0x0C09D426u, 1);  /* 0C09D424 mov.l @(disp,Rm),Rn */
	r2 = 0xECFFFFFFu; UPD(0x0C09D428u, 1);  /* 0C09D426 mov.l @(disp,pc),Rn */
	r0 += 0xFFFFFFFFu;  /* 0C09D428 add #imm,Rn */
	r1 = 0x13000000u; UPD(0x0C09D42Cu, 2);  /* 0C09D42A mov.l @(disp,pc),Rn */
	r10 &= r2;  /* 0C09D42C and Rm,Rn */
	r6 = R32(r5 + 0x28u); UPD(0x0C09D430u, 2);  /* 0C09D42E mov.l @(disp,Rm),Rn */
	r8 &= r1;  /* 0C09D430 and Rm,Rn */
	r3 = R32(r9 + 0x30u); UPD(0x0C09D434u, 2);  /* 0C09D432 mov.l @(disp,Rm),Rn */
	r10 |= r8;  /* 0C09D434 or Rm,Rn */
	r6 += r3;  /* 0C09D436 add Rm,Rn */
	r0 &= 0x7u;  /* 0C09D438 and #imm,r0 */
	W32(r9 + 0x24u, r4); UPD(0x0C09D43Cu, 4);  /* 0C09D43A mov.l Rm,@(disp,Rn) */
	W32(r9 + 0x28u, r6); UPD(0x0C09D43Eu, 1);  /* 0C09D43C mov.l Rm,@(disp,Rn) */
	W32(r9, r10); UPD(0x0C09D440u, 1);  /* 0C09D43E mov.l Rm,@Rn */
	{ W32(r9 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C09D088u, 3); goto L_0C09D088; }  /* 0C09D440 bra */
L_0C09D470: BLKS(0x0C09D470u);
	r12 = 0xC0A8D30u; UPD(0x0C09D472u, 1);  /* 0C09D470 mov.l @(disp,pc),Rn */
	IF(0x0C09D472u); { u32 t_ = r12; PR = 0x0C09D476u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8D30, 0x0C0A8D30u, 0x0C09D476u); }  /* 0C09D472 jsr @Rn */
L_0C09D476: BLKS(0x0C09D476u);
	IF(0x0C09D476u); T = (s32)r0 >= 0;  /* 0C09D476 cmp/pz Rn */
	if (T) { UPD(0x0C09D47Eu, 4); goto L_0C09D47E; }  /* 0C09D478 bt */
L_0C09D47A: BLKS(0x0C09D47Au);
	{ IF(0x0C09D47Cu); ; /* slot nop */ UPD(0x0C09CD20u, 3); goto L_0C09CD20; }  /* 0C09D47A bra */
L_0C09D47E: BLKS(0x0C09D47Eu);
	r2 = 0xB4u; UPD(0x0C09D480u, 1);  /* 0C09D47E mov.w @(disp,pc),Rn */
	IF(0x0C09D480u); MACL = r13 * r2;  /* 0C09D480 mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C09D484u, 3);  /* 0C09D482 mov.l @(disp,pc),Rn */
	IF(0x0C09D484u); r11 = MACL;  /* 0C09D484 sts macl,Rn */
	IF(0x0C09D486u); MACL = r0 * r2;  /* 0C09D486 mul.l Rm,Rn */
	r11 += r7;  /* 0C09D488 add Rm,Rn */
	r8 = R32(r11 + 0xCu); UPD(0x0C09D48Cu, 5);  /* 0C09D48A mov.l @(disp,Rm),Rn */
	IF(0x0C09D48Cu); r4 = MACL;  /* 0C09D48C sts macl,Rn */
	r1 = 0xC1CB898u; UPD(0x0C09D490u, 2);  /* 0C09D48E mov.l @(disp,pc),Rn */
	r4 += r7;  /* 0C09D490 add Rm,Rn */
	IF(0x0C09D492u); r8 <<= 2;  /* 0C09D492 shll2 Rn */
	r3 = R32(r4 + 0x24u); UPD(0x0C09D496u, 3);  /* 0C09D494 mov.l @(disp,Rm),Rn */
	r8 += r1;  /* 0C09D496 add Rm,Rn */
	r5 = R32(r4 + 0x28u); UPD(0x0C09D49Au, 2);  /* 0C09D498 mov.l @(disp,Rm),Rn */
	r0 = R32(r11 + 0x2Cu); UPD(0x0C09D49Cu, 1);  /* 0C09D49A mov.l @(disp,Rm),Rn */
	r4 = r13;  /* 0C09D49C mov Rm,Rn */
	r6 = R32(r11 + 0x30u); UPD(0x0C09D4A0u, 2);  /* 0C09D49E mov.l @(disp,Rm),Rn */
	r3 += r0;  /* 0C09D4A0 add Rm,Rn */
	r9 = 0xC0A8AE0u; UPD(0x0C09D4A4u, 2);  /* 0C09D4A2 mov.l @(disp,pc),Rn */
	r5 += r6;  /* 0C09D4A4 add Rm,Rn */
	r10 = R32(r8 + 0x4u); UPD(0x0C09D4A8u, 2);  /* 0C09D4A6 mov.l @(disp,Rm),Rn */
	W32(r11 + 0x24u, r3); UPD(0x0C09D4AAu, 1);  /* 0C09D4A8 mov.l Rm,@(disp,Rn) */
	W32(r11 + 0x28u, r5); UPD(0x0C09D4ACu, 1);  /* 0C09D4AA mov.l Rm,@(disp,Rn) */
	IF(0x0C09D4ACu); { u32 t_ = r9; PR = 0x0C09D4B0u; W32(r11 + 0xCu, r10); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C09D4B0u); }  /* 0C09D4AC jsr @Rn */
L_0C09D4B0: BLKS(0x0C09D4B0u);
	r2 = 0x99u; UPD(0x0C09D4B2u, 1);  /* 0C09D4B0 mov.w @(disp,pc),Rn */
	r2 += r11;  /* 0C09D4B2 add Rm,Rn */
	r13 = (u32)(s32)(s8)R8(r2); UPD(0x0C09D4B6u, 2);  /* 0C09D4B4 mov.b @Rm,Rn */
	r13 += 0x1u;  /* 0C09D4B6 add #imm,Rn */
	r0 = r13 & 0xFF;  /* 0C09D4B8 extu.b Rm,Rn */
	T = r0 == 0xAu;  /* 0C09D4BA cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r2, r13); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C09D3F2u, 6); goto L_0C09D3F2; } UPD(0x0C09D4C0u, 1); goto L_0C09D4C0; }  /* 0C09D4BC bf/s */
L_0C09D4C0: BLKS(0x0C09D4C0u);
	r9 = R32(r11 + 0x8u); UPD(0x0C09D4C2u, 1);  /* 0C09D4C0 mov.l @(disp,Rm),Rn */
	r13 = 0x0u;  /* 0C09D4C2 mov #imm,Rn */
	W8(r2, r13); UPD(0x0C09D4C6u, 2);  /* 0C09D4C4 mov.b Rm,@Rn */
	IF(0x0C09D4C6u); r9 <<= 2;  /* 0C09D4C6 shll2 Rn */
	r0 = 0xC1CB87Cu; UPD(0x0C09D4CAu, 2);  /* 0C09D4C8 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFECu;  /* 0C09D4CA add #imm,Rn */
	IF(0x0C09D4CCu); r2 = R32(r0 + r9); UPD(0x0C09D4CEu, 2);  /* 0C09D4CC mov.l @(r0,Rm),Rn */
	r13 = R32(r11 + 0x24u); UPD(0x0C09D4D0u, 1);  /* 0C09D4CE mov.l @(disp,Rm),Rn */
	r12 = 0xFFF80000u; UPD(0x0C09D4D2u, 1);  /* 0C09D4D0 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C09D4D4u, 1);  /* 0C09D4D2 mov.w @(disp,pc),Rn */
	r13 += r12;  /* 0C09D4D4 add Rm,Rn */
	IF(0x0C09D4D6u); r7 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C09D4D8u, 2);  /* 0C09D4D6 mov.b @(r0,Rm),Rn */
	r12 = R32(r11 + 0x28u); UPD(0x0C09D4DAu, 1);  /* 0C09D4D8 mov.l @(disp,Rm),Rn */
	r0 = r7 & 0xFF;  /* 0C09D4DA extu.b Rm,Rn */
	W32(r15, r0); UPD(0x0C09D4DEu, 2);  /* 0C09D4DC mov.l Rm,@Rn */
	r12 += r2;  /* 0C09D4DE add Rm,Rn */
	r3 = 0xA9u; UPD(0x0C09D4E2u, 2);  /* 0C09D4E0 mov.w @(disp,pc),Rn */
	r0 = r11;  /* 0C09D4E2 mov Rm,Rn */
	IF(0x0C09D4E4u); r4 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C09D4E6u, 2);  /* 0C09D4E4 mov.b @(r0,Rm),Rn */
	r8 = 0xC062780u; UPD(0x0C09D4E8u, 1);  /* 0C09D4E6 mov.l @(disp,pc),Rn */
	r6 = r4 & 0xFF;  /* 0C09D4E8 extu.b Rm,Rn */
	r5 = 0xFFFF4000u; UPD(0x0C09D4ECu, 2);  /* 0C09D4EA mov.l @(disp,pc),Rn */
	r6 += 0xFFFFFFFFu;  /* 0C09D4EC add #imm,Rn */
	r10 = 0xFFFFF000u; UPD(0x0C09D4F0u, 2);  /* 0C09D4EE mov.w @(disp,pc),Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C09D4F2u, 1);  /* 0C09D4F0 mov.l Rm,@(disp,Rn) */
	r4 = 0x1FFFu; UPD(0x0C09D4F4u, 1);  /* 0C09D4F2 mov.w @(disp,pc),Rn */
	IF(0x0C09D4F4u); { u32 t_ = r8; PR = 0x0C09D4F8u; W32(r15 + 0x8u, r5); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C09D4F8u); }  /* 0C09D4F4 jsr @Rn */
L_0C09D4F8: BLKS(0x0C09D4F8u);
	r9 = 0x808080u; UPD(0x0C09D4FAu, 1);  /* 0C09D4F8 mov.l @(disp,pc),Rn */
	r10 += r0;  /* 0C09D4FA add Rm,Rn */
	W32(r15 + 0xCu, r10); UPD(0x0C09D4FEu, 2);  /* 0C09D4FC mov.l Rm,@(disp,Rn) */
	r5 = 0x8u;  /* 0C09D4FE mov #imm,Rn */
	W32(r15 + 0x10u, r9); UPD(0x0C09D502u, 2);  /* 0C09D500 mov.l Rm,@(disp,Rn) */
	r6 = r13;  /* 0C09D502 mov Rm,Rn */
	r4 = R32(r11); UPD(0x0C09D506u, 2);  /* 0C09D504 mov.l @Rm,Rn */
	r7 = r12;  /* 0C09D506 mov Rm,Rn */
	UPD(0x0C09D508u, 1);
L_0C09D508: BLKS(0x0C09D508u);
	r9 = 0xC0BEEF0u; UPD(0x0C09D50Au, 1);  /* 0C09D508 mov.l @(disp,pc),Rn */
	IF(0x0C09D50Au); { u32 t_ = r9; PR = 0x0C09D50Eu; IF(0x0C09D50Cu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0BEEF0, 0x0C0BEEF0u, 0x0C09D50Eu); }  /* 0C09D50A jsr @Rn */
L_0C09D50E: BLKS(0x0C09D50Eu);
	r15 += 0x14u;  /* 0C09D50E add #imm,Rn */
	UPD(0x0C09D510u, 1);
L_0C09D510: BLKS(0x0C09D510u);
	{ r14 += 0x18u; /* slot add #imm,Rn */ UPD(0x0C09CC56u, 3); goto L_0C09CC56; }  /* 0C09D510 bra */
L_0C09D520: BLKS(0x0C09D520u);
	r11 = 0xC0A8CA0u; UPD(0x0C09D522u, 1);  /* 0C09D520 mov.l @(disp,pc),Rn */
	IF(0x0C09D522u); { u32 t_ = r11; PR = 0x0C09D526u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C09D526u); }  /* 0C09D522 jsr @Rn */
L_0C09D526: BLKS(0x0C09D526u);
	IF(0x0C09D526u); T = (s32)r0 >= 0;  /* 0C09D526 cmp/pz Rn */
	if (!T) { UPD(0x0C09D5BAu, 4); goto L_0C09D5BA; }  /* 0C09D528 bf */
L_0C09D52A: BLKS(0x0C09D52Au);
	r2 = 0xB4u; UPD(0x0C09D52Cu, 1);  /* 0C09D52A mov.w @(disp,pc),Rn */
	IF(0x0C09D52Cu); MACL = r13 * r2;  /* 0C09D52C mul.l Rm,Rn */
	r11 = 0xC286578u; UPD(0x0C09D530u, 3);  /* 0C09D52E mov.l @(disp,pc),Rn */
	IF(0x0C09D530u); r9 = MACL;  /* 0C09D530 sts macl,Rn */
	IF(0x0C09D532u); MACL = r0 * r2;  /* 0C09D532 mul.l Rm,Rn */
	r9 += r11;  /* 0C09D534 add Rm,Rn */
	r5 = R32(r9 + 0xCu); UPD(0x0C09D538u, 5);  /* 0C09D536 mov.l @(disp,Rm),Rn */
	IF(0x0C09D538u); r0 = MACL;  /* 0C09D538 sts macl,Rn */
	r0 += r11;  /* 0C09D53A add Rm,Rn */
	r4 = R32(r0 + 0x28u); UPD(0x0C09D53Eu, 3);  /* 0C09D53C mov.l @(disp,Rm),Rn */
	IF(0x0C09D53Eu); r5 <<= 2;  /* 0C09D53E shll2 Rn */
	r3 = R32(r9 + 0x30u); UPD(0x0C09D542u, 2);  /* 0C09D540 mov.l @(disp,Rm),Rn */
	r6 = 0xC1CB898u; UPD(0x0C09D544u, 1);  /* 0C09D542 mov.l @(disp,pc),Rn */
	r4 += r3;  /* 0C09D544 add Rm,Rn */
	r7 = R32(r0 + 0x24u); UPD(0x0C09D548u, 2);  /* 0C09D546 mov.l @(disp,Rm),Rn */
	r5 += r6;  /* 0C09D548 add Rm,Rn */
	r12 = R32(r9 + 0x2Cu); UPD(0x0C09D54Cu, 2);  /* 0C09D54A mov.l @(disp,Rm),Rn */
	r10 = 0xC0A8AE0u; UPD(0x0C09D54Eu, 1);  /* 0C09D54C mov.l @(disp,pc),Rn */
	r7 += r12;  /* 0C09D54E add Rm,Rn */
	W32(r9 + 0x28u, r4); UPD(0x0C09D552u, 2);  /* 0C09D550 mov.l Rm,@(disp,Rn) */
	r8 = R32(r5 + 0x4u); UPD(0x0C09D554u, 1);  /* 0C09D552 mov.l @(disp,Rm),Rn */
	r4 = r13;  /* 0C09D554 mov Rm,Rn */
	W32(r9 + 0x24u, r7); UPD(0x0C09D558u, 2);  /* 0C09D556 mov.l Rm,@(disp,Rn) */
	IF(0x0C09D558u); { u32 t_ = r10; PR = 0x0C09D55Cu; W32(r9 + 0xCu, r8); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C09D55Cu); }  /* 0C09D558 jsr @Rn */
L_0C09D55C: BLKS(0x0C09D55Cu);
	r2 = 0x99u; UPD(0x0C09D55Eu, 1);  /* 0C09D55C mov.w @(disp,pc),Rn */
	r2 += r9;  /* 0C09D55E add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C09D562u, 2);  /* 0C09D560 mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C09D562 add #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C09D564 extu.b Rm,Rn */
	T = r0 == 0xAu;  /* 0C09D566 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r2, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C09D510u, 6); goto L_0C09D510; } UPD(0x0C09D56Cu, 1); goto L_0C09D56C; }  /* 0C09D568 bf/s */
L_0C09D56C: BLKS(0x0C09D56Cu);
	r13 = 0x0u;  /* 0C09D56C mov #imm,Rn */
	r0 = 0xB0u; UPD(0x0C09D570u, 2);  /* 0C09D56E mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFECu;  /* 0C09D570 add #imm,Rn */
	W8(r2, r13); UPD(0x0C09D574u, 2);  /* 0C09D572 mov.b Rm,@Rn */
	IF(0x0C09D574u); r7 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C09D576u, 1);  /* 0C09D574 mov.b @(r0,Rm),Rn */
	r13 = R32(r9 + 0x24u); UPD(0x0C09D578u, 1);  /* 0C09D576 mov.l @(disp,Rm),Rn */
	r0 = r7 & 0xFF;  /* 0C09D578 extu.b Rm,Rn */
	W32(r15, r0); UPD(0x0C09D57Cu, 2);  /* 0C09D57A mov.l Rm,@Rn */
	r3 = 0xA9u; UPD(0x0C09D57Eu, 1);  /* 0C09D57C mov.w @(disp,pc),Rn */
	r0 = r9;  /* 0C09D57E mov Rm,Rn */
	IF(0x0C09D580u); r4 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C09D582u, 2);  /* 0C09D580 mov.b @(r0,Rm),Rn */
	r12 = 0xC062780u; UPD(0x0C09D584u, 1);  /* 0C09D582 mov.l @(disp,pc),Rn */
	r6 = r4 & 0xFF;  /* 0C09D584 extu.b Rm,Rn */
	r5 = 0xFFFF4000u; UPD(0x0C09D588u, 2);  /* 0C09D586 mov.l @(disp,pc),Rn */
	r6 += 0xFFFFFFFFu;  /* 0C09D588 add #imm,Rn */
	r8 = 0xFFFFF000u; UPD(0x0C09D58Cu, 2);  /* 0C09D58A mov.w @(disp,pc),Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C09D58Eu, 1);  /* 0C09D58C mov.l Rm,@(disp,Rn) */
	r4 = 0x1FFFu; UPD(0x0C09D590u, 1);  /* 0C09D58E mov.w @(disp,pc),Rn */
	IF(0x0C09D590u); { u32 t_ = r12; PR = 0x0C09D594u; W32(r15 + 0x8u, r5); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C09D594u); }  /* 0C09D590 jsr @Rn */
L_0C09D594: BLKS(0x0C09D594u);
	r10 = 0x808080u; UPD(0x0C09D596u, 1);  /* 0C09D594 mov.l @(disp,pc),Rn */
	r8 += r0;  /* 0C09D596 add Rm,Rn */
	W32(r15 + 0xCu, r8); UPD(0x0C09D59Au, 2);  /* 0C09D598 mov.l Rm,@(disp,Rn) */
	r5 = 0x9u;  /* 0C09D59A mov #imm,Rn */
	W32(r15 + 0x10u, r10); UPD(0x0C09D59Eu, 2);  /* 0C09D59C mov.l Rm,@(disp,Rn) */
	r11 = 0xFFF40000u; UPD(0x0C09D5A0u, 1);  /* 0C09D59E mov.l @(disp,pc),Rn */
	r4 = R32(r9); UPD(0x0C09D5A2u, 1);  /* 0C09D5A0 mov.l @Rm,Rn */
	r13 += r11;  /* 0C09D5A2 add Rm,Rn */
	r7 = R32(r9 + 0x28u); UPD(0x0C09D5A6u, 2);  /* 0C09D5A4 mov.l @(disp,Rm),Rn */
	{ r6 = r13; /* slot mov Rm,Rn */ UPD(0x0C09D508u, 3); goto L_0C09D508; }  /* 0C09D5A6 bra */
L_0C09D5B0: BLKS(0x0C09D5B0u);
	r10 = 0xC0A8CA0u; UPD(0x0C09D5B2u, 1);  /* 0C09D5B0 mov.l @(disp,pc),Rn */
	IF(0x0C09D5B2u); { u32 t_ = r10; PR = 0x0C09D5B6u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C09D5B6u); }  /* 0C09D5B2 jsr @Rn */
L_0C09D5B6: BLKS(0x0C09D5B6u);
	IF(0x0C09D5B6u); T = (s32)r0 >= 0;  /* 0C09D5B6 cmp/pz Rn */
	if (T) { UPD(0x0C09D5BEu, 4); goto L_0C09D5BE; }  /* 0C09D5B8 bt */
L_0C09D5BA: BLKS(0x0C09D5BAu);
	{ IF(0x0C09D5BCu); ; /* slot nop */ UPD(0x0C09CD20u, 3); goto L_0C09CD20; }  /* 0C09D5BA bra */
L_0C09D5BE: BLKS(0x0C09D5BEu);
	r2 = 0xB4u; UPD(0x0C09D5C0u, 1);  /* 0C09D5BE mov.w @(disp,pc),Rn */
	IF(0x0C09D5C0u); MACL = r13 * r2;  /* 0C09D5C0 mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C09D5C4u, 3);  /* 0C09D5C2 mov.l @(disp,pc),Rn */
	IF(0x0C09D5C4u); r7 = MACL;  /* 0C09D5C4 sts macl,Rn */
	IF(0x0C09D5C6u); MACL = r0 * r2;  /* 0C09D5C6 mul.l Rm,Rn */
	r7 += r3;  /* 0C09D5C8 add Rm,Rn */
	r4 = R32(r7 + 0x2Cu); UPD(0x0C09D5CCu, 5);  /* 0C09D5CA mov.l @(disp,Rm),Rn */
	IF(0x0C09D5CCu); r5 = MACL;  /* 0C09D5CC sts macl,Rn */
	r2 = 0x99u; UPD(0x0C09D5D0u, 2);  /* 0C09D5CE mov.w @(disp,pc),Rn */
	r5 += r3;  /* 0C09D5D0 add Rm,Rn */
	r2 += r7;  /* 0C09D5D2 add Rm,Rn */
	r6 = R32(r5 + 0x24u); UPD(0x0C09D5D6u, 3);  /* 0C09D5D4 mov.l @(disp,Rm),Rn */
	r8 = R32(r5 + 0x28u); UPD(0x0C09D5D8u, 1);  /* 0C09D5D6 mov.l @(disp,Rm),Rn */
	r6 += r4;  /* 0C09D5D8 add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C09D5DCu, 2);  /* 0C09D5DA mov.b @Rm,Rn */
	r12 = R32(r7 + 0x30u); UPD(0x0C09D5DEu, 1);  /* 0C09D5DC mov.l @(disp,Rm),Rn */
	r1 += 0x1u;  /* 0C09D5DE add #imm,Rn */
	r8 += r12;  /* 0C09D5E0 add Rm,Rn */
	r0 = r1 & 0xFF;  /* 0C09D5E2 extu.b Rm,Rn */
	W32(r7 + 0x24u, r6); UPD(0x0C09D5E6u, 4);  /* 0C09D5E4 mov.l Rm,@(disp,Rn) */
	T = r0 == 0x3u;  /* 0C09D5E6 cmp/eq #imm,r0 */
	W32(r7 + 0x28u, r8); UPD(0x0C09D5EAu, 2);  /* 0C09D5E8 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = !T; W8(r2, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C09D510u, 3); goto L_0C09D510; } UPD(0x0C09D5EEu, 1); goto L_0C09D5EE; }  /* 0C09D5EA bf/s */
L_0C09D5EE: BLKS(0x0C09D5EEu);
	r0 = 0x0u;  /* 0C09D5EE mov #imm,Rn */
	W8(r2, r0); UPD(0x0C09D5F2u, 2);  /* 0C09D5F0 mov.b Rm,@Rn */
	r0 = R32(r7 + 0xCu); UPD(0x0C09D5F4u, 1);  /* 0C09D5F2 mov.l @(disp,Rm),Rn */
	r0 += 0x1u;  /* 0C09D5F4 add #imm,Rn */
	r0 &= 0xFu;  /* 0C09D5F6 and #imm,r0 */
	UPD(0x0C09D5F8u, 2);
L_0C09D5F8: BLKS(0x0C09D5F8u);
	{ W32(r7 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C09D088u, 3); goto L_0C09D088; }  /* 0C09D5F8 bra */
L_0C09D640: BLKS(0x0C09D640u);
	r11 = 0xC0A8D30u; UPD(0x0C09D642u, 1);  /* 0C09D640 mov.l @(disp,pc),Rn */
	IF(0x0C09D642u); { u32 t_ = r11; PR = 0x0C09D646u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8D30, 0x0C0A8D30u, 0x0C09D646u); }  /* 0C09D642 jsr @Rn */
L_0C09D646: BLKS(0x0C09D646u);
	IF(0x0C09D646u); T = (s32)r0 >= 0;  /* 0C09D646 cmp/pz Rn */
	if (!T) { UPD(0x0C09D6BAu, 4); goto L_0C09D6BA; }  /* 0C09D648 bf */
L_0C09D64A: BLKS(0x0C09D64Au);
	r9 = 0xB4u; UPD(0x0C09D64Cu, 1);  /* 0C09D64A mov.w @(disp,pc),Rn */
	IF(0x0C09D64Cu); MACL = r13 * r9;  /* 0C09D64C mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C09D650u, 3);  /* 0C09D64E mov.l @(disp,pc),Rn */
	IF(0x0C09D650u); r8 = MACL;  /* 0C09D650 sts macl,Rn */
	IF(0x0C09D652u); MACL = r0 * r9;  /* 0C09D652 mul.l Rm,Rn */
	r2 = 0x99u; UPD(0x0C09D656u, 4);  /* 0C09D654 mov.w @(disp,pc),Rn */
	r8 += r6;  /* 0C09D656 add Rm,Rn */
	IF(0x0C09D658u); r9 = MACL;  /* 0C09D658 sts macl,Rn */
	r9 += r6;  /* 0C09D65A add Rm,Rn */
	r2 += r8;  /* 0C09D65C add Rm,Rn */
	r12 = R32(r9 + 0x24u); UPD(0x0C09D660u, 5);  /* 0C09D65E mov.l @(disp,Rm),Rn */
	r10 = R32(r9 + 0x28u); UPD(0x0C09D662u, 1);  /* 0C09D660 mov.l @(disp,Rm),Rn */
	r7 = (u32)(s32)(s8)R8(r2); UPD(0x0C09D664u, 1);  /* 0C09D662 mov.b @Rm,Rn */
	r5 = R32(r8 + 0x2Cu); UPD(0x0C09D666u, 1);  /* 0C09D664 mov.l @(disp,Rm),Rn */
	r7 += 0x1u;  /* 0C09D666 add #imm,Rn */
	r1 = R32(r8 + 0x30u); UPD(0x0C09D66Au, 2);  /* 0C09D668 mov.l @(disp,Rm),Rn */
	r12 += r5;  /* 0C09D66A add Rm,Rn */
	r10 += r1;  /* 0C09D66C add Rm,Rn */
	r0 = r7 & 0xFF;  /* 0C09D66E extu.b Rm,Rn */
	W32(r8 + 0x24u, r12); UPD(0x0C09D672u, 4);  /* 0C09D670 mov.l Rm,@(disp,Rn) */
	T = r0 == 0x3u;  /* 0C09D672 cmp/eq #imm,r0 */
	W32(r8 + 0x28u, r10); UPD(0x0C09D676u, 2);  /* 0C09D674 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = !T; W8(r2, r7); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C09D73Au, 3); goto L_0C09D73A; } UPD(0x0C09D67Au, 1); goto L_0C09D67A; }  /* 0C09D676 bf/s */
L_0C09D67A: BLKS(0x0C09D67Au);
	r0 = R32(r8 + 0xCu); UPD(0x0C09D67Cu, 1);  /* 0C09D67A mov.l @(disp,Rm),Rn */
	r7 = 0x0u;  /* 0C09D67C mov #imm,Rn */
	r11 = 0xC0A8AE0u; UPD(0x0C09D680u, 2);  /* 0C09D67E mov.l @(disp,pc),Rn */
	r0 += 0x1u;  /* 0C09D680 add #imm,Rn */
	r0 &= 0xFu;  /* 0C09D682 and #imm,r0 */
	W8(r2, r7); UPD(0x0C09D686u, 3);  /* 0C09D684 mov.b Rm,@Rn */
	r4 = r13;  /* 0C09D686 mov Rm,Rn */
	IF(0x0C09D688u); { u32 t_ = r11; PR = 0x0C09D68Cu; W32(r8 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C09D68Cu); }  /* 0C09D688 jsr @Rn */
L_0C09D68C: BLKS(0x0C09D68Cu);
	r2 = 0xA4u; UPD(0x0C09D68Eu, 1);  /* 0C09D68C mov.w @(disp,pc),Rn */
	r13 = 0x1u;  /* 0C09D68E mov #imm,Rn */
	r2 += r9;  /* 0C09D690 add Rm,Rn */
	r0 = r2;  /* 0C09D692 mov Rm,Rn */
	r2 += 0x1u;  /* 0C09D694 add #imm,Rn */
	r0 += 0x2u;  /* 0C09D696 add #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r2); UPD(0x0C09D69Au, 6);  /* 0C09D698 mov.b @Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r0); UPD(0x0C09D69Cu, 1);  /* 0C09D69A mov.b @Rm,Rn */
	r2 = r3;  /* 0C09D69C mov Rm,Rn */
	r2 |= r4;  /* 0C09D69E or Rm,Rn */
	IF(0x0C09D6A0u); T = r2 & 1; r2 = (u32)((s32)r2 >> 1);  /* 0C09D6A0 shar Rn */
	IF(0x0C09D6A2u); T = r2 & 1; r2 = (u32)((s32)r2 >> 1);  /* 0C09D6A2 shar Rn */
	r1 = 0xA2u; UPD(0x0C09D6A6u, 5);  /* 0C09D6A4 mov.w @(disp,pc),Rn */
	IF(0x0C09D6A6u); T = r2 & 1; r2 = (u32)((s32)r2 >> 1);  /* 0C09D6A6 shar Rn */
	r2 &= r13;  /* 0C09D6A8 and Rm,Rn */
	{ r0 = r8; /* slot mov Rm,Rn */ UPD(0x0C09CF6Cu, 5); goto L_0C09CF6C; }  /* 0C09D6AA bra */
L_0C09D6B0: BLKS(0x0C09D6B0u);
	r11 = 0xC0A8CA0u; UPD(0x0C09D6B2u, 1);  /* 0C09D6B0 mov.l @(disp,pc),Rn */
	IF(0x0C09D6B2u); { u32 t_ = r11; PR = 0x0C09D6B6u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C09D6B6u); }  /* 0C09D6B2 jsr @Rn */
L_0C09D6B6: BLKS(0x0C09D6B6u);
	IF(0x0C09D6B6u); T = (s32)r0 >= 0;  /* 0C09D6B6 cmp/pz Rn */
	if (T) { UPD(0x0C09D6BEu, 4); goto L_0C09D6BE; }  /* 0C09D6B8 bt */
L_0C09D6BA: BLKS(0x0C09D6BAu);
	{ IF(0x0C09D6BCu); ; /* slot nop */ UPD(0x0C09CD20u, 3); goto L_0C09CD20; }  /* 0C09D6BA bra */
L_0C09D6BE: BLKS(0x0C09D6BEu);
	r6 = 0xB4u; UPD(0x0C09D6C0u, 1);  /* 0C09D6BE mov.w @(disp,pc),Rn */
	IF(0x0C09D6C0u); MACL = r13 * r6;  /* 0C09D6C0 mul.l Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C09D6C4u, 3);  /* 0C09D6C2 mov.l @(disp,pc),Rn */
	IF(0x0C09D6C4u); r4 = MACL;  /* 0C09D6C4 sts macl,Rn */
	IF(0x0C09D6C6u); MACL = r0 * r6;  /* 0C09D6C6 mul.l Rm,Rn */
	r4 += r5;  /* 0C09D6C8 add Rm,Rn */
	r2 = R32(r4 + 0x30u); UPD(0x0C09D6CCu, 5);  /* 0C09D6CA mov.l @(disp,Rm),Rn */
	IF(0x0C09D6CCu); r9 = MACL;  /* 0C09D6CC sts macl,Rn */
	r9 += r5;  /* 0C09D6CE add Rm,Rn */
	r7 = R32(r9 + 0x24u); UPD(0x0C09D6D2u, 3);  /* 0C09D6D0 mov.l @(disp,Rm),Rn */
	r8 = R32(r4 + 0x2Cu); UPD(0x0C09D6D4u, 1);  /* 0C09D6D2 mov.l @(disp,Rm),Rn */
	r1 = R32(r9 + 0x28u); UPD(0x0C09D6D6u, 1);  /* 0C09D6D4 mov.l @(disp,Rm),Rn */
	r7 += r8;  /* 0C09D6D6 add Rm,Rn */
	r1 += r2;  /* 0C09D6D8 add Rm,Rn */
	W32(r4 + 0x24u, r7); UPD(0x0C09D6DCu, 3);  /* 0C09D6DA mov.l Rm,@(disp,Rn) */
	W32(r4 + 0x28u, r1); UPD(0x0C09D6DEu, 1);  /* 0C09D6DC mov.l Rm,@(disp,Rn) */
	r4 += 0x7Eu;  /* 0C09D6DE add #imm,Rn */
	r3 = (u32)(s32)(s16)R16(r4); UPD(0x0C09D6E2u, 2);  /* 0C09D6E0 mov.w @Rm,Rn */
	r2 = 0xA0u; UPD(0x0C09D6E4u, 1);  /* 0C09D6E2 mov.w @(disp,pc),Rn */
	r4 += 0xFFFFFF82u;  /* 0C09D6E4 add #imm,Rn */
	r4 += r2;  /* 0C09D6E6 add Rm,Rn */
	r4 += 0x2u;  /* 0C09D6E8 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r4); UPD(0x0C09D6ECu, 4);  /* 0C09D6EA mov.b @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C09D6EC tst Rm,Rn */
	{ u32 c_ = !T; IF(0x0C09D6F0u); MACL = r3 * r6; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C09D6F6u, 5); goto L_0C09D6F6; } goto L_0C09D6F2; }  /* 0C09D6EE bf/s */
L_0C09D6F2: BLKS(0x0C09D6F2u);
	{ IF(0x0C09D6F4u); r1 = MACL; /* slot sts macl,Rn */ UPD(0x0C09D8E0u, 5); goto L_0C09D8E0; }  /* 0C09D6F2 bra */
L_0C09D6F6: BLKS(0x0C09D6F6u);
	IF(0x0C09D6F6u); MACL = r3 * r6;  /* 0C09D6F6 mul.l Rm,Rn */
	IF(0x0C09D6F8u); r1 = MACL;  /* 0C09D6F8 sts macl,Rn */
	r1 += r5;  /* 0C09D6FA add Rm,Rn */
	r1 += r2;  /* 0C09D6FC add Rm,Rn */
	r1 += 0x2u;  /* 0C09D6FE add #imm,Rn */
	UPD(0x0C09D700u, 6);
L_0C09D700: BLKS(0x0C09D700u);
	r11 = 0xB4u; UPD(0x0C09D702u, 1);  /* 0C09D700 mov.w @(disp,pc),Rn */
	IF(0x0C09D702u); MACL = r13 * r11;  /* 0C09D702 mul.l Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C09D706u, 3);  /* 0C09D704 mov.l @(disp,pc),Rn */
	IF(0x0C09D706u); r9 = MACL;  /* 0C09D706 sts macl,Rn */
	r11 = 0xA0u; UPD(0x0C09D70Au, 2);  /* 0C09D708 mov.w @(disp,pc),Rn */
	r9 += r5;  /* 0C09D70A add Rm,Rn */
	r11 += r9;  /* 0C09D70C add Rm,Rn */
	r12 = (u32)(s32)(s8)R8(r1); UPD(0x0C09D710u, 3);  /* 0C09D70E mov.b @Rm,Rn */
	r10 = r11;  /* 0C09D710 mov Rm,Rn */
	r10 += 0x1u;  /* 0C09D712 add #imm,Rn */
	W32(r14 + 0xCu, r10); UPD(0x0C09D716u, 3);  /* 0C09D714 mov.l Rm,@(disp,Rn) */
	r2 = r9;  /* 0C09D716 mov Rm,Rn */
	r2 += 0x3Cu;  /* 0C09D718 add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r10); UPD(0x0C09D71Cu, 3);  /* 0C09D71A mov.b @Rm,Rn */
	r7 = (u32)(s32)(s16)R16(r2); UPD(0x0C09D71Eu, 1);  /* 0C09D71C mov.w @Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C09D71E tst Rm,Rn */
	{ u32 c_ = T; r12 &= r6; /* slot and Rm,Rn */ if (c_) { UPD(0x0C09D728u, 4); goto L_0C09D728; } goto L_0C09D724; }  /* 0C09D720 bt/s */
L_0C09D724: BLKS(0x0C09D724u);
	{ IF(0x0C09D726u); ; /* slot nop */ UPD(0x0C09D840u, 4); goto L_0C09D840; }  /* 0C09D724 bra */
L_0C09D728: BLKS(0x0C09D728u);
	r10 = 0x98u; UPD(0x0C09D72Au, 1);  /* 0C09D728 mov.w @(disp,pc),Rn */
	r3 = 0x2u;  /* 0C09D72A mov #imm,Rn */
	r10 += r9;  /* 0C09D72C add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r10); UPD(0x0C09D730u, 3);  /* 0C09D72E mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C09D730 add #imm,Rn */
	r12 = r0 & 0xFF;  /* 0C09D732 extu.b Rm,Rn */
	T = r12 > r3;  /* 0C09D734 cmp/hi Rm,Rn */
	{ u32 c_ = T; W8(r10, r0); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C09D73Eu, 6); goto L_0C09D73E; } UPD(0x0C09D73Au, 1); goto L_0C09D73A; }  /* 0C09D736 bt/s */
L_0C09D73A: BLKS(0x0C09D73Au);
	{ r14 += 0x18u; /* slot add #imm,Rn */ UPD(0x0C09CC56u, 3); goto L_0C09CC56; }  /* 0C09D73A bra */
L_0C09D73E: BLKS(0x0C09D73Eu);
	r12 = 0xC0C2360u; UPD(0x0C09D740u, 1);  /* 0C09D73E mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF0u;  /* 0C09D740 add #imm,Rn */
	IF(0x0C09D742u); { u32 t_ = r12; PR = 0x0C09D746u; W8(r10, r7); /* slot mov.b Rm,@Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C09D746u); }  /* 0C09D742 jsr @Rn */
L_0C09D746: BLKS(0x0C09D746u);
	r12 = 0xB0u; UPD(0x0C09D748u, 1);  /* 0C09D746 mov.w @(disp,pc),Rn */
	r0 &= 0x1u;  /* 0C09D748 and #imm,r0 */
	r12 += r9;  /* 0C09D74A add Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r12); UPD(0x0C09D74Eu, 3);  /* 0C09D74C mov.b @Rm,Rn */
	IF(0x0C09D74Eu); r0 <<= 2;  /* 0C09D74E shll2 Rn */
	r2 = r6 & 0xFF;  /* 0C09D750 extu.b Rm,Rn */
	r7 = 0xA9u; UPD(0x0C09D754u, 3);  /* 0C09D752 mov.w @(disp,pc),Rn */
	W32(r15, r2); UPD(0x0C09D756u, 1);  /* 0C09D754 mov.l Rm,@Rn */
	r7 += r9;  /* 0C09D756 add Rm,Rn */
	W32(r14 + 0x10u, r7); UPD(0x0C09D75Au, 2);  /* 0C09D758 mov.l Rm,@(disp,Rn) */
	r8 = 0xC1CB890u; UPD(0x0C09D75Cu, 1);  /* 0C09D75A mov.l @(disp,pc),Rn */
	r4 = (u32)(s32)(s8)R8(r7); UPD(0x0C09D75Eu, 1);  /* 0C09D75C mov.b @Rm,Rn */
	r8 += r0;  /* 0C09D75E add Rm,Rn */
	r0 = r4 & 0xFF;  /* 0C09D760 extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C09D764u, 3);  /* 0C09D762 mov.l Rm,@(disp,Rn) */
	r0 = 0xC062780u; UPD(0x0C09D766u, 1);  /* 0C09D764 mov.l @(disp,pc),Rn */
	r3 = 0xFFFD0000u; UPD(0x0C09D768u, 1);  /* 0C09D766 mov.l @(disp,pc),Rn */
	r4 = 0x1000u; UPD(0x0C09D76Au, 1);  /* 0C09D768 mov.w @(disp,pc),Rn */
	IF(0x0C09D76Au); { u32 t_ = r0; PR = 0x0C09D76Eu; W32(r15 + 0x8u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C09D76Eu); }  /* 0C09D76A jsr @Rn */
L_0C09D76E: BLKS(0x0C09D76Eu);
	r5 = 0xFFFFF800u; UPD(0x0C09D770u, 1);  /* 0C09D76E mov.w @(disp,pc),Rn */
	r6 = 0x4u;  /* 0C09D770 mov #imm,Rn */
	r0 += r5;  /* 0C09D772 add Rm,Rn */
	IF(0x0C09D774u); ARG0(0x406Du); { s32 s_ = (s32)r6; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C09D774 shld Rm,Rn */
	W32(r15 + 0xCu, r0); UPD(0x0C09D778u, 4);  /* 0C09D776 mov.l Rm,@(disp,Rn) */
	r5 = R32(r8); UPD(0x0C09D77Au, 1);  /* 0C09D778 mov.l @Rm,Rn */
	r8 = 0xC0BE860u; UPD(0x0C09D77Cu, 1);  /* 0C09D77A mov.l @(disp,pc),Rn */
	r4 = R32(r9); UPD(0x0C09D77Eu, 1);  /* 0C09D77C mov.l @Rm,Rn */
	r7 = R32(r9 + 0x28u); UPD(0x0C09D780u, 1);  /* 0C09D77E mov.l @(disp,Rm),Rn */
	IF(0x0C09D780u); { u32 t_ = r8; PR = 0x0C09D784u; r6 = R32(r9 + 0x24u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BE860, 0x0C0BE860u, 0x0C09D784u); }  /* 0C09D780 jsr @Rn */
L_0C09D784: BLKS(0x0C09D784u);
	r1 = r10;  /* 0C09D784 mov Rm,Rn */
	r1 += 0x1u;  /* 0C09D786 add #imm,Rn */
	r7 = (u32)(s32)(s8)R8(r1); UPD(0x0C09D78Au, 3);  /* 0C09D788 mov.b @Rm,Rn */
	r4 = 0x3Bu;  /* 0C09D78A mov #imm,Rn */
	r7 += 0x1u;  /* 0C09D78C add #imm,Rn */
	r2 = r7 & 0xFF;  /* 0C09D78E extu.b Rm,Rn */
	W8(r1, r7); UPD(0x0C09D792u, 4);  /* 0C09D790 mov.b Rm,@Rn */
	T = r2 > r4;  /* 0C09D792 cmp/hi Rm,Rn */
	{ u32 c_ = !T; r15 += 0x10u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C09D7E6u, 4); goto L_0C09D7E6; } goto L_0C09D798; }  /* 0C09D794 bf/s */
L_0C09D798: BLKS(0x0C09D798u);
	r4 = (u32)(s32)(s8)R8(r12); UPD(0x0C09D79Au, 2);  /* 0C09D798 mov.b @Rm,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C09D79A add #imm,Rn */
	r0 = r4 & 0xFF;  /* 0C09D79C extu.b Rm,Rn */
	W32(r15, r0); UPD(0x0C09D7A0u, 3);  /* 0C09D79E mov.l Rm,@Rn */
	r11 += 0x2u;  /* 0C09D7A0 add #imm,Rn */
	r1 = R32(r14 + 0x10u); UPD(0x0C09D7A4u, 2);  /* 0C09D7A2 mov.l @(disp,Rm),Rn */
	r3 = (u32)(s32)(s8)R8(r1); UPD(0x0C09D7A6u, 1);  /* 0C09D7A4 mov.b @Rm,Rn */
	r5 = r3 & 0xFF;  /* 0C09D7A6 extu.b Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C09D7AAu, 2);  /* 0C09D7A8 mov.l Rm,@(disp,Rn) */
	r8 = 0xC0BD6F0u; UPD(0x0C09D7ACu, 1);  /* 0C09D7AA mov.l @(disp,pc),Rn */
	r5 = 0x4u;  /* 0C09D7AC mov #imm,Rn */
	r4 = R32(r9); UPD(0x0C09D7B0u, 2);  /* 0C09D7AE mov.l @Rm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C09D7B2u, 1);  /* 0C09D7B0 mov.l @(disp,Rm),Rn */
	IF(0x0C09D7B2u); { u32 t_ = r8; PR = 0x0C09D7B6u; r7 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C09D7B6u); }  /* 0C09D7B2 jsr @Rn */
L_0C09D7B6: BLKS(0x0C09D7B6u);
	r9 += 0x7Eu;  /* 0C09D7B6 add #imm,Rn */
	r3 = (u32)(s32)(s16)R16(r9); UPD(0x0C09D7BAu, 2);  /* 0C09D7B8 mov.w @Rm,Rn */
	r15 += 0x8u;  /* 0C09D7BA add #imm,Rn */
	r10 = R32(r14 + 0xCu); UPD(0x0C09D7BEu, 2);  /* 0C09D7BC mov.l @(disp,Rm),Rn */
	r9 = (u32)(s32)(s8)R8(r11); UPD(0x0C09D7C0u, 1);  /* 0C09D7BE mov.b @Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C09D7C0 tst Rm,Rn */
	{ u32 c_ = T; r12 = (u32)(s32)(s8)R8(r10); /* slot mov.b @Rm,Rn */ if (c_) { UPD(0x0C09D830u, 4); goto L_0C09D830; } UPD(0x0C09D7C6u, 1); goto L_0C09D7C6; }  /* 0C09D7C2 bt/s */
L_0C09D7C6: BLKS(0x0C09D7C6u);
	r2 = 0xB4u; UPD(0x0C09D7C8u, 1);  /* 0C09D7C6 mov.w @(disp,pc),Rn */
	IF(0x0C09D7C8u); MACL = r3 * r2;  /* 0C09D7C8 mul.l Rm,Rn */
	r11 = 0xC286578u; UPD(0x0C09D7CCu, 3);  /* 0C09D7CA mov.l @(disp,pc),Rn */
	IF(0x0C09D7CCu); r1 = MACL;  /* 0C09D7CC sts macl,Rn */
	r1 += r11;  /* 0C09D7CE add Rm,Rn */
	r2 += 0xFFFFFFF2u;  /* 0C09D7D0 add #imm,Rn */
	UPD(0x0C09D7D2u, 3);
L_0C09D7D2: BLKS(0x0C09D7D2u);
	r1 += r2;  /* 0C09D7D2 add Rm,Rn */
	r9 = (u32)(s32)(s8)R8(r1); UPD(0x0C09D7D6u, 2);  /* 0C09D7D4 mov.b @Rm,Rn */
	r6 = 0x0u;  /* 0C09D7D6 mov #imm,Rn */
	r12 |= r9;  /* 0C09D7D8 or Rm,Rn */
	W8(r1, r12); UPD(0x0C09D7DCu, 3);  /* 0C09D7DA mov.b Rm,@Rn */
	r12 = 0xB4u; UPD(0x0C09D7DEu, 1);  /* 0C09D7DC mov.w @(disp,pc),Rn */
	IF(0x0C09D7DEu); MACL = r13 * r12;  /* 0C09D7DE mul.l Rm,Rn */
	r13 = 0xC286578u; UPD(0x0C09D7E2u, 3);  /* 0C09D7E0 mov.l @(disp,pc),Rn */
	IF(0x0C09D7E2u); r0 = MACL;  /* 0C09D7E2 sts macl,Rn */
	IF(0x0C09D7E4u); W32(r0 + r13, r6); UPD(0x0C09D7E6u, 2);  /* 0C09D7E4 mov.l Rm,@(r0,Rn) */
L_0C09D7E6: BLKS(0x0C09D7E6u);
	{ r14 += 0x18u; /* slot add #imm,Rn */ UPD(0x0C09CC56u, 3); goto L_0C09CC56; }  /* 0C09D7E6 bra */
L_0C09D830: BLKS(0x0C09D830u);
	r2 = 0xB4u; UPD(0x0C09D832u, 1);  /* 0C09D830 mov.w @(disp,pc),Rn */
	IF(0x0C09D832u); MACL = r3 * r2;  /* 0C09D832 mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C09D836u, 3);  /* 0C09D834 mov.l @(disp,pc),Rn */
	r2 = 0xA5u; UPD(0x0C09D838u, 1);  /* 0C09D836 mov.w @(disp,pc),Rn */
	IF(0x0C09D838u); r1 = MACL;  /* 0C09D838 sts macl,Rn */
	{ r1 += r7; /* slot add Rm,Rn */ UPD(0x0C09D7D2u, 4); goto L_0C09D7D2; }  /* 0C09D83A bra */
L_0C09D840: BLKS(0x0C09D840u);
	r5 = 0xB4u; UPD(0x0C09D842u, 1);  /* 0C09D840 mov.w @(disp,pc),Rn */
	IF(0x0C09D842u); MACL = r3 * r5;  /* 0C09D842 mul.l Rm,Rn */
	r8 = 0xC286578u; UPD(0x0C09D846u, 3);  /* 0C09D844 mov.l @(disp,pc),Rn */
	IF(0x0C09D846u); r10 = MACL;  /* 0C09D846 sts macl,Rn */
	r10 += r8;  /* 0C09D848 add Rm,Rn */
	r10 += 0x3Cu;  /* 0C09D84A add #imm,Rn */
	r1 = (u32)(s32)(s16)R16(r10); UPD(0x0C09D84Eu, 4);  /* 0C09D84C mov.w @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C09D84E tst Rm,Rn */
	if (!T) { UPD(0x0C09D85Cu, 4); goto L_0C09D85C; }  /* 0C09D850 bf */
L_0C09D852: BLKS(0x0C09D852u);
	W16(r2, r1); UPD(0x0C09D854u, 1);  /* 0C09D852 mov.w Rm,@Rn */
	r3 = R32(r9); UPD(0x0C09D856u, 1);  /* 0C09D854 mov.l @Rm,Rn */
	r1 = 0xECFFFFFFu; UPD(0x0C09D858u, 1);  /* 0C09D856 mov.l @(disp,pc),Rn */
	r3 &= r1;  /* 0C09D858 and Rm,Rn */
	W32(r9, r3); UPD(0x0C09D85Cu, 2);  /* 0C09D85A mov.l Rm,@Rn */
L_0C09D85C: BLKS(0x0C09D85Cu);
	r0 = R32(r9 + 0xCu); UPD(0x0C09D85Eu, 1);  /* 0C09D85C mov.l @(disp,Rm),Rn */
	T = (r0 & r0) == 0;  /* 0C09D85E tst Rm,Rn */
	{ u32 c_ = T; T = (r12 & r12) == 0; /* slot tst Rm,Rn */ if (c_) { UPD(0x0C09D8C0u, 4); goto L_0C09D8C0; } goto L_0C09D864; }  /* 0C09D860 bt/s */
L_0C09D864: BLKS(0x0C09D864u);
	T = r0 == 0x1Fu;  /* 0C09D864 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C09D86Cu, 5); goto L_0C09D86C; }  /* 0C09D866 bt */
L_0C09D868: BLKS(0x0C09D868u);
	{ IF(0x0C09D86Au); ; /* slot nop */ UPD(0x0C09D060u, 3); goto L_0C09D060; }  /* 0C09D868 bra */
L_0C09D86C: BLKS(0x0C09D86Cu);
	r10 = 0x9Fu; UPD(0x0C09D86Eu, 1);  /* 0C09D86C mov.w @(disp,pc),Rn */
	r10 += r9;  /* 0C09D86E add Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r10); UPD(0x0C09D872u, 2);  /* 0C09D870 mov.b @Rm,Rn */
	r0 = r3 & 0xFF;  /* 0C09D872 extu.b Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C09D874 tst Rm,Rn */
	{ u32 c_ = T; r8 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C09D8A0u, 5); goto L_0C09D8A0; } goto L_0C09D87A; }  /* 0C09D876 bt/s */
L_0C09D87A: BLKS(0x0C09D87Au);
	T = r0 == 0x1u;  /* 0C09D87A cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C09D7E6u, 5); goto L_0C09D7E6; }  /* 0C09D87C bf */
L_0C09D87E: BLKS(0x0C09D87Eu);
	r0 = r9;  /* 0C09D87E mov Rm,Rn */
	r4 = 0x9Au; UPD(0x0C09D882u, 2);  /* 0C09D880 mov.w @(disp,pc),Rn */
	IF(0x0C09D882u); r3 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C09D884u, 1);  /* 0C09D882 mov.b @(r0,Rm),Rn */
	r8 = r3 & 0xFF;  /* 0C09D884 extu.b Rm,Rn */
	T = (r8 & r8) == 0;  /* 0C09D886 tst Rm,Rn */
	if (!T) { UPD(0x0C09D7E6u, 5); goto L_0C09D7E6; }  /* 0C09D888 bf */
L_0C09D88A: BLKS(0x0C09D88Au);
	r7 = 0xFFFFFFFFu;  /* 0C09D88A mov #imm,Rn */
	r0 = 0x88u; UPD(0x0C09D88Eu, 2);  /* 0C09D88C mov.w @(disp,pc),Rn */
	IF(0x0C09D88Eu); W16(r0 + r9, r7); UPD(0x0C09D890u, 1);  /* 0C09D88E mov.w Rm,@(r0,Rn) */
	r11 = 0x1Eu;  /* 0C09D890 mov #imm,Rn */
	r0 = 0xC0A8AE0u; UPD(0x0C09D894u, 2);  /* 0C09D892 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C09D894 mov Rm,Rn */
	IF(0x0C09D896u); { u32 t_ = r0; PR = 0x0C09D89Au; W32(r9 + 0xCu, r11); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C09D89Au); }  /* 0C09D896 jsr @Rn */
L_0C09D89A: BLKS(0x0C09D89Au);
	W8(r10, r8); UPD(0x0C09D89Cu, 1);  /* 0C09D89A mov.b Rm,@Rn */
L_0C09D89C: BLKS(0x0C09D89Cu);
	{ r14 += 0x18u; /* slot add #imm,Rn */ UPD(0x0C09CC56u, 3); goto L_0C09CC56; }  /* 0C09D89C bra */
L_0C09D8A0: BLKS(0x0C09D8A0u);
	r13 = 0x9Au; UPD(0x0C09D8A2u, 1);  /* 0C09D8A0 mov.w @(disp,pc),Rn */
	r0 = r9;  /* 0C09D8A2 mov Rm,Rn */
	T = (r12 & r12) == 0;  /* 0C09D8A4 tst Rm,Rn */
	{ u32 c_ = !T; IF(0x0C09D8A8u); W8(r0 + r13, r8); /* slot mov.b Rm,@(r0,Rn) */ if (c_) { UPD(0x0C09D89Cu, 5); goto L_0C09D89C; } UPD(0x0C09D8AAu, 1); goto L_0C09D8AA; }  /* 0C09D8A6 bf/s */
L_0C09D8AA: BLKS(0x0C09D8AAu);
	r5 = r3;  /* 0C09D8AA mov Rm,Rn */
	r5 += 0x1u;  /* 0C09D8AC add #imm,Rn */
	W8(r10, r5); UPD(0x0C09D8B0u, 3);  /* 0C09D8AE mov.b Rm,@Rn */
L_0C09D8B0: BLKS(0x0C09D8B0u);
	{ r14 += 0x18u; /* slot add #imm,Rn */ UPD(0x0C09CC56u, 3); goto L_0C09CC56; }  /* 0C09D8B0 bra */
L_0C09D8C0: BLKS(0x0C09D8C0u);
	if (T) { UPD(0x0C09D8B0u, 3); goto L_0C09D8B0; }  /* 0C09D8C0 bt */
L_0C09D8C2: BLKS(0x0C09D8C2u);
	r11 = 0x1u;  /* 0C09D8C2 mov #imm,Rn */
	r0 = 0x88u; UPD(0x0C09D8C6u, 2);  /* 0C09D8C4 mov.w @(disp,pc),Rn */
	IF(0x0C09D8C6u); W16(r0 + r9, r11); UPD(0x0C09D8C8u, 1);  /* 0C09D8C6 mov.w Rm,@(r0,Rn) */
	r4 = 0x1u;  /* 0C09D8C8 mov #imm,Rn */
	r0 = 0xC0A8AE0u; UPD(0x0C09D8CCu, 2);  /* 0C09D8CA mov.l @(disp,pc),Rn */
	W32(r9 + 0xCu, r4); UPD(0x0C09D8CEu, 1);  /* 0C09D8CC mov.l Rm,@(disp,Rn) */
	IF(0x0C09D8CEu); { u32 t_ = r0; PR = 0x0C09D8D2u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C09D8D2u); }  /* 0C09D8CE jsr @Rn */
L_0C09D8D2: BLKS(0x0C09D8D2u);
	{ r4 = 0x72u; /* slot mov #imm,Rn */ UPD(0x0C09CE22u, 3); goto L_0C09CE22; }  /* 0C09D8D2 bra */
L_0C09D8E0: BLKS(0x0C09D8E0u);
	r1 += r5;  /* 0C09D8E0 add Rm,Rn */
	r1 += r2;  /* 0C09D8E2 add Rm,Rn */
	{ r1 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C09D700u, 5); goto L_0C09D700; }  /* 0C09D8E4 bra */
L_0C09D8F0: BLKS(0x0C09D8F0u);
	r9 = 0xC0A8CA0u; UPD(0x0C09D8F2u, 1);  /* 0C09D8F0 mov.l @(disp,pc),Rn */
	IF(0x0C09D8F2u); { u32 t_ = r9; PR = 0x0C09D8F6u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C09D8F6u); }  /* 0C09D8F2 jsr @Rn */
L_0C09D8F6: BLKS(0x0C09D8F6u);
	IF(0x0C09D8F6u); T = (s32)r0 >= 0;  /* 0C09D8F6 cmp/pz Rn */
	{ u32 c_ = T; r10 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C09D900u, 4); goto L_0C09D900; } goto L_0C09D8FC; }  /* 0C09D8F8 bt/s */
L_0C09D8FC: BLKS(0x0C09D8FCu);
	{ IF(0x0C09D8FEu); ; /* slot nop */ UPD(0x0C09CD20u, 4); goto L_0C09CD20; }  /* 0C09D8FC bra */
L_0C09D900: BLKS(0x0C09D900u);
	r2 = 0xB4u; UPD(0x0C09D902u, 1);  /* 0C09D900 mov.w @(disp,pc),Rn */
	IF(0x0C09D902u); MACL = r13 * r2;  /* 0C09D902 mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C09D906u, 3);  /* 0C09D904 mov.l @(disp,pc),Rn */
	IF(0x0C09D906u); r0 = MACL;  /* 0C09D906 sts macl,Rn */
	IF(0x0C09D908u); MACL = r10 * r2;  /* 0C09D908 mul.l Rm,Rn */
	r0 += r7;  /* 0C09D90A add Rm,Rn */
	r4 = R32(r0 + 0x2Cu); UPD(0x0C09D90Eu, 5);  /* 0C09D90C mov.l @(disp,Rm),Rn */
	IF(0x0C09D90Eu); r12 = MACL;  /* 0C09D90E sts macl,Rn */
	r12 += r7;  /* 0C09D910 add Rm,Rn */
	r11 = R32(r12 + 0x24u); UPD(0x0C09D914u, 3);  /* 0C09D912 mov.l @(disp,Rm),Rn */
	r6 = R32(r12 + 0x28u); UPD(0x0C09D916u, 1);  /* 0C09D914 mov.l @(disp,Rm),Rn */
	r11 += r4;  /* 0C09D916 add Rm,Rn */
	r5 = R32(r0 + 0x30u); UPD(0x0C09D91Au, 2);  /* 0C09D918 mov.l @(disp,Rm),Rn */
	r1 = R32(r12); UPD(0x0C09D91Cu, 1);  /* 0C09D91A mov.l @Rm,Rn */
	r6 += r5;  /* 0C09D91C add Rm,Rn */
	r3 = 0x13000000u; UPD(0x0C09D920u, 2);  /* 0C09D91E mov.l @(disp,pc),Rn */
	W32(r0 + 0x24u, r11); UPD(0x0C09D922u, 1);  /* 0C09D920 mov.l Rm,@(disp,Rn) */
	T = (r1 & r3) == 0;  /* 0C09D922 tst Rm,Rn */
	{ u32 c_ = !T; W32(r0 + 0x28u, r6); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C09D930u, 4); goto L_0C09D930; } UPD(0x0C09D928u, 1); goto L_0C09D928; }  /* 0C09D924 bf/s */
L_0C09D928: BLKS(0x0C09D928u);
	r8 = R32(r0); UPD(0x0C09D92Au, 1);  /* 0C09D928 mov.l @Rm,Rn */
	r10 = 0xECFFFFFFu; UPD(0x0C09D92Cu, 1);  /* 0C09D92A mov.l @(disp,pc),Rn */
	r8 &= r10;  /* 0C09D92C and Rm,Rn */
	W32(r0, r8); UPD(0x0C09D930u, 2);  /* 0C09D92E mov.l Rm,@Rn */
L_0C09D930: BLKS(0x0C09D930u);
	r0 += 0x7Eu;  /* 0C09D930 add #imm,Rn */
	r3 = (u32)(s32)(s16)R16(r0); UPD(0x0C09D934u, 2);  /* 0C09D932 mov.w @Rm,Rn */
	r12 = 0x9Fu; UPD(0x0C09D936u, 1);  /* 0C09D934 mov.w @(disp,pc),Rn */
	r0 += 0xFFFFFF82u;  /* 0C09D936 add #imm,Rn */
	IF(0x0C09D938u); r9 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C09D93Au, 2);  /* 0C09D938 mov.b @(r0,Rm),Rn */
	r0 = 0x5u;  /* 0C09D93A mov #imm,Rn */
	r2 = r9 & 0xFF;  /* 0C09D93C extu.b Rm,Rn */
	T = r2 > r0;  /* 0C09D93E cmp/hi Rm,Rn */
	if (T) { UPD(0x0C09D8B0u, 6); goto L_0C09D8B0; }  /* 0C09D940 bt */
L_0C09D942: BLKS(0x0C09D942u);
	r0 = 0xC09D96Cu;  /* 0C09D942 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C09D944 add Rm,Rn */
	IF(0x0C09D946u); r6 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C09D948u, 3);  /* 0C09D946 mov.w @(r0,Rm),Rn */
	IF(0x0C09D948u); { u32 tv_ = (r6 + 0x0C09D94Cu); u32 t_ = PHYS(tv_); IF(0x0C09D94Au); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C09D980u: goto L_0C09D980; case 0x0C09DA00u: goto L_0C09DA00; case 0x0C09DA40u: goto L_0C09DA40; case 0x0C09DA60u: goto L_0C09DA60; case 0x0C09DA80u: goto L_0C09DA80; case 0x0C09DAA0u: goto L_0C09DAA0; default: JUMPD(tv_); } }  /* 0C09D948 braf Rn */
L_0C09D980: BLKS(0x0C09D980u);
	r2 = 0xB4u; UPD(0x0C09D982u, 1);  /* 0C09D980 mov.w @(disp,pc),Rn */
	IF(0x0C09D982u); MACL = r13 * r2;  /* 0C09D982 mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C09D986u, 3);  /* 0C09D984 mov.l @(disp,pc),Rn */
	IF(0x0C09D986u); r11 = MACL;  /* 0C09D986 sts macl,Rn */
	r7 = 0xA0u; UPD(0x0C09D98Au, 2);  /* 0C09D988 mov.w @(disp,pc),Rn */
	r11 += r6;  /* 0C09D98A add Rm,Rn */
	r11 += r7;  /* 0C09D98C add Rm,Rn */
	r11 += 0x2u;  /* 0C09D98E add #imm,Rn */
	r5 = (u32)(s32)(s8)R8(r11); UPD(0x0C09D992u, 4);  /* 0C09D990 mov.b @Rm,Rn */
	T = (r5 & r5) == 0;  /* 0C09D992 tst Rm,Rn */
	{ u32 c_ = T; IF(0x0C09D996u); MACL = r3 * r2; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C09D9F0u, 5); goto L_0C09D9F0; } goto L_0C09D998; }  /* 0C09D994 bt/s */
L_0C09D998: BLKS(0x0C09D998u);
	IF(0x0C09D998u); MACL = r3 * r2;  /* 0C09D998 mul.l Rm,Rn */
	IF(0x0C09D99Au); r1 = MACL;  /* 0C09D99A sts macl,Rn */
	r1 += r6;  /* 0C09D99C add Rm,Rn */
	r1 += r7;  /* 0C09D99E add Rm,Rn */
	r1 += 0x2u;  /* 0C09D9A0 add #imm,Rn */
	UPD(0x0C09D9A2u, 8);
L_0C09D9A2: BLKS(0x0C09D9A2u);
	r6 = 0xB4u; UPD(0x0C09D9A4u, 1);  /* 0C09D9A2 mov.w @(disp,pc),Rn */
	IF(0x0C09D9A4u); MACL = r13 * r6;  /* 0C09D9A4 mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C09D9A8u, 3);  /* 0C09D9A6 mov.l @(disp,pc),Rn */
	IF(0x0C09D9A8u); r0 = MACL;  /* 0C09D9A8 sts macl,Rn */
	r0 += r7;  /* 0C09D9AA add Rm,Rn */
	r2 = 0xA0u; UPD(0x0C09D9AEu, 3);  /* 0C09D9AC mov.w @(disp,pc),Rn */
	r8 = r0;  /* 0C09D9AE mov Rm,Rn */
	r8 += r2;  /* 0C09D9B0 add Rm,Rn */
	r8 += 0x1u;  /* 0C09D9B2 add #imm,Rn */
	r4 = (u32)(s32)(s8)R8(r1); UPD(0x0C09D9B6u, 4);  /* 0C09D9B4 mov.b @Rm,Rn */
	r13 = (u32)(s32)(s8)R8(r8); UPD(0x0C09D9B8u, 1);  /* 0C09D9B6 mov.b @Rm,Rn */
	T = (r4 & r13) == 0;  /* 0C09D9B8 tst Rm,Rn */
	if (T) { UPD(0x0C09D9D0u, 4); goto L_0C09D9D0; }  /* 0C09D9BA bt */
L_0C09D9BC: BLKS(0x0C09D9BCu);
	r2 += 0xFFFFFFFFu;  /* 0C09D9BC add #imm,Rn */
	IF(0x0C09D9BEu); r3 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C09D9C0u, 2);  /* 0C09D9BE mov.b @(r0,Rm),Rn */
	r3 += 0x1u;  /* 0C09D9C0 add #imm,Rn */
	IF(0x0C09D9C2u); W8(r0 + r2, r3); UPD(0x0C09D9C4u, 2);  /* 0C09D9C2 mov.b Rm,@(r0,Rn) */
L_0C09D9C4: BLKS(0x0C09D9C4u);
	r2 += 0xFFFFFFFBu;  /* 0C09D9C4 add #imm,Rn */
	{ r1 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C09D3F0u, 4); goto L_0C09D3F0; }  /* 0C09D9C6 bra */
L_0C09D9D0: BLKS(0x0C09D9D0u);
	IF(0x0C09D9D0u); MACL = r3 * r6;  /* 0C09D9D0 mul.l Rm,Rn */
	IF(0x0C09D9D2u); r10 = MACL;  /* 0C09D9D2 sts macl,Rn */
	r10 += r7;  /* 0C09D9D4 add Rm,Rn */
	r10 += r2;  /* 0C09D9D6 add Rm,Rn */
	r10 += 0x2u;  /* 0C09D9D8 add #imm,Rn */
	r7 = (u32)(s32)(s8)R8(r10); UPD(0x0C09D9DCu, 7);  /* 0C09D9DA mov.b @Rm,Rn */
	IF(0x0C09D9DCu); T = (s32)r7 >= 0;  /* 0C09D9DC cmp/pz Rn */
	if (T) { UPD(0x0C09DA58u, 4); goto L_0C09DA58; }  /* 0C09D9DE bt */
L_0C09D9E0: BLKS(0x0C09D9E0u);
	r9 = 0x4u;  /* 0C09D9E0 mov #imm,Rn */
	r2 = 0x9Fu; UPD(0x0C09D9E4u, 2);  /* 0C09D9E2 mov.w @(disp,pc),Rn */
	{ IF(0x0C09D9E6u); W8(r0 + r2, r9); /* slot mov.b Rm,@(r0,Rn) */ UPD(0x0C09D9C4u, 3); goto L_0C09D9C4; }  /* 0C09D9E4 bra */
L_0C09D9F0: BLKS(0x0C09D9F0u);
	IF(0x0C09D9F0u); r1 = MACL;  /* 0C09D9F0 sts macl,Rn */
	r1 += r6;  /* 0C09D9F2 add Rm,Rn */
	r1 += r7;  /* 0C09D9F4 add Rm,Rn */
	{ r1 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C09D9A2u, 6); goto L_0C09D9A2; }  /* 0C09D9F6 bra */
L_0C09DA00: BLKS(0x0C09DA00u);
	r6 = 0xB4u; UPD(0x0C09DA02u, 1);  /* 0C09DA00 mov.w @(disp,pc),Rn */
	IF(0x0C09DA02u); MACL = r13 * r6;  /* 0C09DA02 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C09DA06u, 3);  /* 0C09DA04 mov.l @(disp,pc),Rn */
	IF(0x0C09DA06u); r8 = MACL;  /* 0C09DA06 sts macl,Rn */
	r8 += r0;  /* 0C09DA08 add Rm,Rn */
	r12 = 0x9Au; UPD(0x0C09DA0Cu, 3);  /* 0C09DA0A mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C09DA0C mov Rm,Rn */
	IF(0x0C09DA0Eu); r2 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C09DA10u, 2);  /* 0C09DA0E mov.b @(r0,Rm),Rn */
	T = (r2 & r2) == 0;  /* 0C09DA10 tst Rm,Rn */
	if (!T) { UPD(0x0C09DA58u, 4); goto L_0C09DA58; }  /* 0C09DA12 bf */
L_0C09DA14: BLKS(0x0C09DA14u);
	r4 = 0x3u;  /* 0C09DA14 mov #imm,Rn */
	r10 = 0xC062780u; UPD(0x0C09DA18u, 2);  /* 0C09DA16 mov.l @(disp,pc),Rn */
	IF(0x0C09DA18u); { u32 t_ = r10; PR = 0x0C09DA1Cu; r11 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C09DA1Cu); }  /* 0C09DA18 jsr @Rn */
L_0C09DA1C: BLKS(0x0C09DA1Cu);
	r4 = R32(r8 + 0x8u); UPD(0x0C09DA1Eu, 1);  /* 0C09DA1C mov.l @(disp,Rm),Rn */
	r0 += r0;  /* 0C09DA1E add Rm,Rn */
	r4 += r0;  /* 0C09DA20 add Rm,Rn */
	r4 += 0x2u;  /* 0C09DA22 add #imm,Rn */
	W32(r8 + 0x8u, r4); UPD(0x0C09DA26u, 4);  /* 0C09DA24 mov.l Rm,@(disp,Rn) */
	r4 = r13;  /* 0C09DA26 mov Rm,Rn */
	r13 = 0xC0A8B10u; UPD(0x0C09DA2Au, 2);  /* 0C09DA28 mov.l @(disp,pc),Rn */
	IF(0x0C09DA2Au); { u32 t_ = r13; PR = 0x0C09DA2Eu; IF(0x0C09DA2Cu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B10, 0x0C0A8B10u, 0x0C09DA2Eu); }  /* 0C09DA2A jsr @Rn */
L_0C09DA2E: BLKS(0x0C09DA2Eu);
	r0 = 0x88u; UPD(0x0C09DA30u, 1);  /* 0C09DA2E mov.w @(disp,pc),Rn */
	r4 = 0x73u;  /* 0C09DA30 mov #imm,Rn */
	IF(0x0C09DA32u); W16(r0 + r8, r11); UPD(0x0C09DA34u, 2);  /* 0C09DA32 mov.w Rm,@(r0,Rn) */
	r0 += 0x17u;  /* 0C09DA34 add #imm,Rn */
	IF(0x0C09DA36u); r5 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C09DA38u, 2);  /* 0C09DA36 mov.b @(r0,Rm),Rn */
	r5 += 0x1u;  /* 0C09DA38 add #imm,Rn */
	{ IF(0x0C09DA3Cu); W8(r0 + r8, r5); /* slot mov.b Rm,@(r0,Rn) */ UPD(0x0C09CE22u, 4); goto L_0C09CE22; }  /* 0C09DA3A bra */
L_0C09DA40: BLKS(0x0C09DA40u);
	r7 = 0xB4u; UPD(0x0C09DA42u, 1);  /* 0C09DA40 mov.w @(disp,pc),Rn */
	r8 = 0x1u;  /* 0C09DA42 mov #imm,Rn */
	IF(0x0C09DA44u); MACL = r13 * r7;  /* 0C09DA44 mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C09DA48u, 4);  /* 0C09DA46 mov.l @(disp,pc),Rn */
	r2 = 0x9Au; UPD(0x0C09DA4Au, 1);  /* 0C09DA48 mov.w @(disp,pc),Rn */
	IF(0x0C09DA4Au); r0 = MACL;  /* 0C09DA4A sts macl,Rn */
	r0 += r3;  /* 0C09DA4C add Rm,Rn */
	IF(0x0C09DA4Eu); W8(r0 + r2, r8); UPD(0x0C09DA50u, 3);  /* 0C09DA4E mov.b Rm,@(r0,Rn) */
	r2 += 0x5u;  /* 0C09DA50 add #imm,Rn */
	IF(0x0C09DA52u); r13 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C09DA54u, 2);  /* 0C09DA52 mov.b @(r0,Rm),Rn */
L_0C09DA54: BLKS(0x0C09DA54u);
	r13 += 0x1u;  /* 0C09DA54 add #imm,Rn */
	IF(0x0C09DA56u); W8(r0 + r2, r13); UPD(0x0C09DA58u, 2);  /* 0C09DA56 mov.b Rm,@(r0,Rn) */
L_0C09DA58: BLKS(0x0C09DA58u);
	{ r14 += 0x18u; /* slot add #imm,Rn */ UPD(0x0C09CC56u, 3); goto L_0C09CC56; }  /* 0C09DA58 bra */
L_0C09DA60: BLKS(0x0C09DA60u);
	r0 = 0xB4u; UPD(0x0C09DA62u, 1);  /* 0C09DA60 mov.w @(disp,pc),Rn */
	IF(0x0C09DA62u); MACL = r13 * r0;  /* 0C09DA62 mul.l Rm,Rn */
	r12 = 0xC286578u; UPD(0x0C09DA66u, 3);  /* 0C09DA64 mov.l @(disp,pc),Rn */
	r2 = 0x9Au; UPD(0x0C09DA68u, 1);  /* 0C09DA66 mov.w @(disp,pc),Rn */
	IF(0x0C09DA68u); r0 = MACL;  /* 0C09DA68 sts macl,Rn */
	r0 += r12;  /* 0C09DA6A add Rm,Rn */
	IF(0x0C09DA6Cu); r9 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C09DA6Eu, 3);  /* 0C09DA6C mov.b @(r0,Rm),Rn */
	r1 = 0x9Fu; UPD(0x0C09DA70u, 1);  /* 0C09DA6E mov.w @(disp,pc),Rn */
	r2 = r9 & 0xFF;  /* 0C09DA70 extu.b Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C09DA72 tst Rm,Rn */
	if (!T) { UPD(0x0C09DA7Cu, 5); goto L_0C09DA7C; }  /* 0C09DA74 bf */
L_0C09DA76: BLKS(0x0C09DA76u);
	IF(0x0C09DA76u); W8(r0 + r1, r2); UPD(0x0C09DA78u, 1);  /* 0C09DA76 mov.b Rm,@(r0,Rn) */
	{ IF(0x0C09DA7Au); ; /* slot nop */ UPD(0x0C09CF6Eu, 3); goto L_0C09CF6E; }  /* 0C09DA78 bra */
L_0C09DA7C: BLKS(0x0C09DA7Cu);
	{ r14 += 0x18u; /* slot add #imm,Rn */ UPD(0x0C09CC56u, 3); goto L_0C09CC56; }  /* 0C09DA7C bra */
L_0C09DA80: BLKS(0x0C09DA80u);
	r4 = 0xB4u; UPD(0x0C09DA82u, 1);  /* 0C09DA80 mov.w @(disp,pc),Rn */
	IF(0x0C09DA82u); MACL = r13 * r4;  /* 0C09DA82 mul.l Rm,Rn */
	r11 = 0xC286578u; UPD(0x0C09DA86u, 3);  /* 0C09DA84 mov.l @(disp,pc),Rn */
	IF(0x0C09DA86u); r0 = MACL;  /* 0C09DA86 sts macl,Rn */
	r5 = 0x9Au; UPD(0x0C09DA8Au, 2);  /* 0C09DA88 mov.w @(disp,pc),Rn */
	r0 += r11;  /* 0C09DA8A add Rm,Rn */
	IF(0x0C09DA8Cu); r6 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C09DA8Eu, 2);  /* 0C09DA8C mov.b @(r0,Rm),Rn */
	T = (r6 & r6) == 0;  /* 0C09DA8E tst Rm,Rn */
	if (!T) { UPD(0x0C09DA7Cu, 4); goto L_0C09DA7C; }  /* 0C09DA90 bf */
L_0C09DA92: BLKS(0x0C09DA92u);
	r2 = 0x9Fu; UPD(0x0C09DA94u, 1);  /* 0C09DA92 mov.w @(disp,pc),Rn */
	{ IF(0x0C09DA96u); r13 = (u32)(s32)(s8)R8(r0 + r2); /* slot mov.b @(r0,Rm),Rn */ UPD(0x0C09DA54u, 3); goto L_0C09DA54; }  /* 0C09DA94 bra */
L_0C09DAA0: BLKS(0x0C09DAA0u);
	r2 = 0xB4u; UPD(0x0C09DAA2u, 1);  /* 0C09DAA0 mov.w @(disp,pc),Rn */
	IF(0x0C09DAA2u); MACL = r3 * r2;  /* 0C09DAA2 mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C09DAA6u, 3);  /* 0C09DAA4 mov.l @(disp,pc),Rn */
	IF(0x0C09DAA6u); r0 = MACL;  /* 0C09DAA6 sts macl,Rn */
	r8 = 0xA2u; UPD(0x0C09DAAAu, 2);  /* 0C09DAA8 mov.w @(disp,pc),Rn */
	r0 += r7;  /* 0C09DAAA add Rm,Rn */
	IF(0x0C09DAACu); r10 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C09DAAEu, 2);  /* 0C09DAAC mov.b @(r0,Rm),Rn */
	IF(0x0C09DAAEu); T = (s32)r10 >= 0;  /* 0C09DAAE cmp/pz Rn */
	if (!T) { UPD(0x0C09DA7Cu, 4); goto L_0C09DA7C; }  /* 0C09DAB0 bf */
L_0C09DAB2: BLKS(0x0C09DAB2u);
	IF(0x0C09DAB2u); MACL = r13 * r2;  /* 0C09DAB2 mul.l Rm,Rn */
	r1 = 0x2u;  /* 0C09DAB4 mov #imm,Rn */
	IF(0x0C09DAB6u); r0 = MACL;  /* 0C09DAB6 sts macl,Rn */
	r0 += r7;  /* 0C09DAB8 add Rm,Rn */
	{ r2 += 0xFFFFFFEBu; /* slot add #imm,Rn */ UPD(0x0C09D3F0u, 8); goto L_0C09D3F0; }  /* 0C09DABA bra */
L_0C09DAE0: BLKS(0x0C09DAE0u);
	r9 = 0xC0A8CA0u; UPD(0x0C09DAE2u, 1);  /* 0C09DAE0 mov.l @(disp,pc),Rn */
	IF(0x0C09DAE2u); { u32 t_ = r9; PR = 0x0C09DAE6u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C09DAE6u); }  /* 0C09DAE2 jsr @Rn */
L_0C09DAE6: BLKS(0x0C09DAE6u);
	IF(0x0C09DAE6u); T = (s32)r0 >= 0;  /* 0C09DAE6 cmp/pz Rn */
	if (T) { UPD(0x0C09DAEEu, 4); goto L_0C09DAEE; }  /* 0C09DAE8 bt */
L_0C09DAEA: BLKS(0x0C09DAEAu);
	{ IF(0x0C09DAECu); ; /* slot nop */ UPD(0x0C09CD20u, 3); goto L_0C09CD20; }  /* 0C09DAEA bra */
L_0C09DAEE: BLKS(0x0C09DAEEu);
	r6 = 0xB4u; UPD(0x0C09DAF0u, 1);  /* 0C09DAEE mov.w @(disp,pc),Rn */
	IF(0x0C09DAF0u); MACL = r13 * r6;  /* 0C09DAF0 mul.l Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C09DAF4u, 3);  /* 0C09DAF2 mov.l @(disp,pc),Rn */
	IF(0x0C09DAF4u); r7 = MACL;  /* 0C09DAF4 sts macl,Rn */
	IF(0x0C09DAF6u); MACL = r0 * r6;  /* 0C09DAF6 mul.l Rm,Rn */
	r7 += r5;  /* 0C09DAF8 add Rm,Rn */
	r10 = R32(r7 + 0x2Cu); UPD(0x0C09DAFCu, 5);  /* 0C09DAFA mov.l @(disp,Rm),Rn */
	IF(0x0C09DAFCu); r12 = MACL;  /* 0C09DAFC sts macl,Rn */
	r12 += r5;  /* 0C09DAFE add Rm,Rn */
	r4 = R32(r12 + 0x24u); UPD(0x0C09DB02u, 3);  /* 0C09DB00 mov.l @(disp,Rm),Rn */
	r0 = R32(r12 + 0x28u); UPD(0x0C09DB04u, 1);  /* 0C09DB02 mov.l @(disp,Rm),Rn */
	r4 += r10;  /* 0C09DB04 add Rm,Rn */
	r11 = R32(r7 + 0x30u); UPD(0x0C09DB08u, 2);  /* 0C09DB06 mov.l @(disp,Rm),Rn */
	r1 = R32(r12); UPD(0x0C09DB0Au, 1);  /* 0C09DB08 mov.l @Rm,Rn */
	r0 += r11;  /* 0C09DB0A add Rm,Rn */
	r3 = 0x13000000u; UPD(0x0C09DB0Eu, 2);  /* 0C09DB0C mov.l @(disp,pc),Rn */
	W32(r7 + 0x24u, r4); UPD(0x0C09DB10u, 1);  /* 0C09DB0E mov.l Rm,@(disp,Rn) */
	T = (r1 & r3) == 0;  /* 0C09DB10 tst Rm,Rn */
	{ u32 c_ = !T; W32(r7 + 0x28u, r0); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C09DB1Au, 4); goto L_0C09DB1A; } UPD(0x0C09DB16u, 1); goto L_0C09DB16; }  /* 0C09DB12 bf/s */
L_0C09DB16: BLKS(0x0C09DB16u);
	{ r13 = R32(r7); /* slot mov.l @Rm,Rn */ UPD(0x0C09DCE2u, 3); goto L_0C09DCE2; }  /* 0C09DB16 bra */
L_0C09DB1A: BLKS(0x0C09DB1Au);
	r7 += 0x7Eu;  /* 0C09DB1A add #imm,Rn */
	r8 = (u32)(s32)(s16)R16(r7); UPD(0x0C09DB1Eu, 2);  /* 0C09DB1C mov.w @Rm,Rn */
	IF(0x0C09DB1Eu); MACL = r8 * r6;  /* 0C09DB1E mul.l Rm,Rn */
	r7 += 0xFFFFFF82u;  /* 0C09DB20 add #imm,Rn */
	IF(0x0C09DB22u); r3 = MACL;  /* 0C09DB22 sts macl,Rn */
	r3 += r5;  /* 0C09DB24 add Rm,Rn */
	r3 += 0x3Cu;  /* 0C09DB26 add #imm,Rn */
	r2 = (u32)(s32)(s16)R16(r3); UPD(0x0C09DB2Au, 7);  /* 0C09DB28 mov.w @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C09DB2A tst Rm,Rn */
	{ u32 c_ = T; r3 += 0xFFFFFFC4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C09DA7Cu, 4); goto L_0C09DA7C; } goto L_0C09DB30; }  /* 0C09DB2C bt/s */
L_0C09DB30: BLKS(0x0C09DB30u);
	r2 = 0x99u; UPD(0x0C09DB32u, 2);  /* 0C09DB30 mov.w @(disp,pc),Rn */
	r2 += r7;  /* 0C09DB32 add Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r2); UPD(0x0C09DB36u, 2);  /* 0C09DB34 mov.b @Rm,Rn */
	r6 += 0x1u;  /* 0C09DB36 add #imm,Rn */
	r0 = r6 & 0xFF;  /* 0C09DB38 extu.b Rm,Rn */
	T = r0 == 0x2u;  /* 0C09DB3A cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r2, r6); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C09DA7Cu, 6); goto L_0C09DA7C; } UPD(0x0C09DB40u, 1); goto L_0C09DB40; }  /* 0C09DB3C bf/s */
L_0C09DB40: BLKS(0x0C09DB40u);
	r5 = 0x0u;  /* 0C09DB40 mov #imm,Rn */
	r0 = R32(r7 + 0xCu); UPD(0x0C09DB44u, 2);  /* 0C09DB42 mov.l @(disp,Rm),Rn */
	T = r0 == 0x1Eu;  /* 0C09DB44 cmp/eq #imm,r0 */
	{ u32 c_ = T; W8(r2, r5); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C09DB70u, 4); goto L_0C09DB70; } UPD(0x0C09DB4Au, 1); goto L_0C09DB4A; }  /* 0C09DB46 bt/s */
L_0C09DB4A: BLKS(0x0C09DB4Au);
	T = r0 == 0x2Fu;  /* 0C09DB4A cmp/eq #imm,r0 */
	{ u32 c_ = T; r0 += 0x1u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C09DB54u, 4); goto L_0C09DB54; } goto L_0C09DB50; }  /* 0C09DB4C bt/s */
L_0C09DB50: BLKS(0x0C09DB50u);
	{ IF(0x0C09DB52u); ; /* slot nop */ UPD(0x0C09D5F8u, 4); goto L_0C09D5F8; }  /* 0C09DB50 bra */
L_0C09DB54: BLKS(0x0C09DB54u);
	r0 = R32(r7 + 0x8u); UPD(0x0C09DB56u, 1);  /* 0C09DB54 mov.l @(disp,Rm),Rn */
	r6 = 0xC1CB7DCu; UPD(0x0C09DB58u, 1);  /* 0C09DB56 mov.l @(disp,pc),Rn */
	IF(0x0C09DB58u); r0 <<= 2;  /* 0C09DB58 shll2 Rn */
	IF(0x0C09DB5Au); r2 = R32(r0 + r6); UPD(0x0C09DB5Cu, 2);  /* 0C09DB5A mov.l @(r0,Rm),Rn */
	r0 = 0x0u;  /* 0C09DB5C mov #imm,Rn */
	W32(r7 + 0x8u, r2); UPD(0x0C09DB60u, 2);  /* 0C09DB5E mov.l Rm,@(disp,Rn) */
	W32(r7 + 0xCu, r0); UPD(0x0C09DB62u, 1);  /* 0C09DB60 mov.l Rm,@(disp,Rn) */
L_0C09DB62: BLKS(0x0C09DB62u);
	r1 = 0xC0A8B10u; UPD(0x0C09DB64u, 1);  /* 0C09DB62 mov.l @(disp,pc),Rn */
	{ r4 = r13; /* slot mov Rm,Rn */ UPD(0x0C09CCC4u, 3); goto L_0C09CCC4; }  /* 0C09DB64 bra */
L_0C09DB70: BLKS(0x0C09DB70u);
	r2 = 0xA0u; UPD(0x0C09DB72u, 1);  /* 0C09DB70 mov.w @(disp,pc),Rn */
	r7 += r2;  /* 0C09DB72 add Rm,Rn */
	r7 += 0x2u;  /* 0C09DB74 add #imm,Rn */
	r9 = (u32)(s32)(s8)R8(r7); UPD(0x0C09DB78u, 3);  /* 0C09DB76 mov.b @Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C09DB78 tst Rm,Rn */
	{ u32 c_ = !T; r1 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C09DB82u, 4); goto L_0C09DB82; } goto L_0C09DB7E; }  /* 0C09DB7A bf/s */
L_0C09DB7E: BLKS(0x0C09DB7Eu);
	{ r1 += r3; /* slot add Rm,Rn */ UPD(0x0C09DC80u, 4); goto L_0C09DC80; }  /* 0C09DB7E bra */
L_0C09DB82: BLKS(0x0C09DB82u);
	r1 = r2;  /* 0C09DB82 mov Rm,Rn */
	r1 += r3;  /* 0C09DB84 add Rm,Rn */
	r1 += 0x2u;  /* 0C09DB86 add #imm,Rn */
	UPD(0x0C09DB88u, 3);
L_0C09DB88: BLKS(0x0C09DB88u);
	r10 = 0xB4u; UPD(0x0C09DB8Au, 1);  /* 0C09DB88 mov.w @(disp,pc),Rn */
	r5 = 0x14u;  /* 0C09DB8A mov #imm,Rn */
	r12 = (u32)(s32)(s8)R8(r1); UPD(0x0C09DB8Eu, 2);  /* 0C09DB8C mov.b @Rm,Rn */
	IF(0x0C09DB8Eu); MACL = r13 * r10;  /* 0C09DB8E mul.l Rm,Rn */
	r1 = 0xC286578u; UPD(0x0C09DB92u, 3);  /* 0C09DB90 mov.l @(disp,pc),Rn */
	r6 = 0x0u;  /* 0C09DB92 mov #imm,Rn */
	IF(0x0C09DB94u); r8 = MACL;  /* 0C09DB94 sts macl,Rn */
	r8 += r1;  /* 0C09DB96 add Rm,Rn */
	r10 += 0xFFFFFFEDu;  /* 0C09DB98 add #imm,Rn */
	r0 = r8;  /* 0C09DB9A mov Rm,Rn */
	IF(0x0C09DB9Cu); r4 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C09DB9Eu, 6);  /* 0C09DB9C mov.b @(r0,Rm),Rn */
	r11 = 0xC0BC1B0u; UPD(0x0C09DBA0u, 1);  /* 0C09DB9E mov.l @(disp,pc),Rn */
	r12 &= r4;  /* 0C09DBA0 and Rm,Rn */
	IF(0x0C09DBA2u); { u32 t_ = r11; PR = 0x0C09DBA6u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C09DBA6u); }  /* 0C09DBA2 jsr @Rn */
L_0C09DBA6: BLKS(0x0C09DBA6u);
	T = (r0 & r0) == 0;  /* 0C09DBA6 tst Rm,Rn */
	IF(0x0C09DBA8u); r10 = T;  /* 0C09DBA8 movt Rn */
	T = (r12 & r12) == 0;  /* 0C09DBAA tst Rm,Rn */
	r3 = 0xFFFFFFFFu;  /* 0C09DBAC mov #imm,Rn */
	{ u32 t_ = 0u - r3, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r7 = r_; }  /* 0C09DBAE negc Rm,Rn */
	r10 &= r7;  /* 0C09DBB0 and Rm,Rn */
	T = (r10 & r10) == 0;  /* 0C09DBB2 tst Rm,Rn */
	if (T) { UPD(0x0C09DBBCu, 10); goto L_0C09DBBC; }  /* 0C09DBB4 bt */
L_0C09DBB6: BLKS(0x0C09DBB6u);
	r14 += 0x18u;  /* 0C09DBB6 add #imm,Rn */
	{ IF(0x0C09DBBAu); ; /* slot nop */ UPD(0x0C09CC56u, 4); goto L_0C09CC56; }  /* 0C09DBB8 bra */
L_0C09DBBC: BLKS(0x0C09DBBCu);
	r3 = R32(r8 + 0x24u); UPD(0x0C09DBBEu, 1);  /* 0C09DBBC mov.l @(disp,Rm),Rn */
	r4 = 0x1u;  /* 0C09DBBE mov #imm,Rn */
	r5 = R32(r8 + 0x8u); UPD(0x0C09DBC2u, 2);  /* 0C09DBC0 mov.l @(disp,Rm),Rn */
	r0 = 0xC1CB7F4u; UPD(0x0C09DBC4u, 1);  /* 0C09DBC2 mov.l @(disp,pc),Rn */
	IF(0x0C09DBC4u); r5 <<= 2;  /* 0C09DBC4 shll2 Rn */
	W32(r14, r3); UPD(0x0C09DBC8u, 2);  /* 0C09DBC6 mov.l Rm,@Rn */
	r6 = R32(r8 + 0x28u); UPD(0x0C09DBCAu, 1);  /* 0C09DBC8 mov.l @(disp,Rm),Rn */
	IF(0x0C09DBCAu); r2 = R32(r0 + r5); UPD(0x0C09DBCCu, 1);  /* 0C09DBCA mov.l @(r0,Rm),Rn */
	r9 = R32(r14); UPD(0x0C09DBCEu, 1);  /* 0C09DBCC mov.l @Rm,Rn */
	r0 = r6;  /* 0C09DBCE mov Rm,Rn */
	r7 = 0xFFF70000u; UPD(0x0C09DBD2u, 2);  /* 0C09DBD0 mov.l @(disp,pc),Rn */
	r0 += r2;  /* 0C09DBD2 add Rm,Rn */
	r8 = 0xC071740u; UPD(0x0C09DBD6u, 2);  /* 0C09DBD4 mov.l @(disp,pc),Rn */
	r9 += r7;  /* 0C09DBD6 add Rm,Rn */
	W32(r14, r9); UPD(0x0C09DBDAu, 2);  /* 0C09DBD8 mov.l Rm,@Rn */
	IF(0x0C09DBDAu); { u32 t_ = r8; PR = 0x0C09DBDEu; W32(r14 + 0x4u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C071740, 0x0C071740u, 0x0C09DBDEu); }  /* 0C09DBDA jsr @Rn */
L_0C09DBDE: BLKS(0x0C09DBDEu);
	r11 = 0x100u; UPD(0x0C09DBE0u, 1);  /* 0C09DBDE mov.w @(disp,pc),Rn */
	T = (r0 & r0) == 0;  /* 0C09DBE0 tst Rm,Rn */
	{ u32 c_ = !T; r1 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C09DC20u, 4); goto L_0C09DC20; } UPD(0x0C09DBE6u, 1); goto L_0C09DBE6; }  /* 0C09DBE2 bf/s */
L_0C09DBE6: BLKS(0x0C09DBE6u);
	r11 = (u32)(s32)(s8)r1;  /* 0C09DBE6 exts.b Rm,Rn */
	T = (r11 & r11) == 0;  /* 0C09DBE8 tst Rm,Rn */
	if (T) { UPD(0x0C09DC10u, 5); goto L_0C09DC10; }  /* 0C09DBEA bt */
L_0C09DBEC: BLKS(0x0C09DBECu);
	T = (r12 & r12) == 0;  /* 0C09DBEC tst Rm,Rn */
	UPD(0x0C09DBEEu, 1);
L_0C09DBEE: BLKS(0x0C09DBEEu);
	if (T) { UPD(0x0C09DC00u, 3); goto L_0C09DC00; }  /* 0C09DBEE bt */
L_0C09DBF0: BLKS(0x0C09DBF0u);
	r1 = 0x12u;  /* 0C09DBF0 mov #imm,Rn */
	r9 = 0xB4u; UPD(0x0C09DBF4u, 2);  /* 0C09DBF2 mov.w @(disp,pc),Rn */
	IF(0x0C09DBF4u); MACL = r13 * r9;  /* 0C09DBF4 mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C09DBF8u, 3);  /* 0C09DBF6 mov.l @(disp,pc),Rn */
	IF(0x0C09DBF8u); r12 = MACL;  /* 0C09DBF8 sts macl,Rn */
	r2 += r12;  /* 0C09DBFA add Rm,Rn */
	UPD(0x0C09DBFCu, 2);
L_0C09DBFC: BLKS(0x0C09DBFCu);
	{ W32(r2 + 0xCu, r1); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C09DB62u, 3); goto L_0C09DB62; }  /* 0C09DBFC bra */
L_0C09DC00: BLKS(0x0C09DC00u);
	r5 = 0xB4u; UPD(0x0C09DC02u, 1);  /* 0C09DC00 mov.w @(disp,pc),Rn */
	IF(0x0C09DC02u); MACL = r13 * r5;  /* 0C09DC02 mul.l Rm,Rn */
	r12 = 0xC286578u; UPD(0x0C09DC06u, 3);  /* 0C09DC04 mov.l @(disp,pc),Rn */
	IF(0x0C09DC06u); r2 = MACL;  /* 0C09DC06 sts macl,Rn */
	r2 += r12;  /* 0C09DC08 add Rm,Rn */
	r1 = R32(r2 + 0xCu); UPD(0x0C09DC0Cu, 3);  /* 0C09DC0A mov.l @(disp,Rm),Rn */
	{ r1 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C09D0D4u, 3); goto L_0C09D0D4; }  /* 0C09DC0C bra */
L_0C09DC10: BLKS(0x0C09DC10u);
	r10 = 0xC0C2110u; UPD(0x0C09DC12u, 1);  /* 0C09DC10 mov.l @(disp,pc),Rn */
	IF(0x0C09DC12u); { u32 t_ = r10; PR = 0x0C09DC16u; r4 = 0x70u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2110, 0x0C0C2110u, 0x0C09DC16u); }  /* 0C09DC12 jsr @Rn */
L_0C09DC16: BLKS(0x0C09DC16u);
	{ T = (r12 & r12) == 0; /* slot tst Rm,Rn */ UPD(0x0C09DBEEu, 3); goto L_0C09DBEE; }  /* 0C09DC16 bra */
L_0C09DC20: BLKS(0x0C09DC20u);
	r4 = 0xC28EDFCu; UPD(0x0C09DC22u, 1);  /* 0C09DC20 mov.l @(disp,pc),Rn */
	r6 = 0x10u;  /* 0C09DC22 mov #imm,Rn */
	r9 = (u32)(s32)(s16)R16(r4); UPD(0x0C09DC26u, 2);  /* 0C09DC24 mov.w @Rm,Rn */
	r5 = 0x2Bu;  /* 0C09DC26 mov #imm,Rn */
	r8 = 0xB4u; UPD(0x0C09DC2Au, 2);  /* 0C09DC28 mov.w @(disp,pc),Rn */
	r4 = r9;  /* 0C09DC2A mov Rm,Rn */
	IF(0x0C09DC2Cu); MACL = r9 * r8;  /* 0C09DC2C mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C09DC30u, 4);  /* 0C09DC2E mov.l @(disp,pc),Rn */
	r2 = 0xC0A8A30u; UPD(0x0C09DC32u, 1);  /* 0C09DC30 mov.l @(disp,pc),Rn */
	IF(0x0C09DC32u); r8 = MACL;  /* 0C09DC32 sts macl,Rn */
	r7 = 0xD3000000u; UPD(0x0C09DC36u, 2);  /* 0C09DC34 mov.l @(disp,pc),Rn */
	r8 += r3;  /* 0C09DC36 add Rm,Rn */
	W32(r8, r7); UPD(0x0C09DC3Au, 2);  /* 0C09DC38 mov.l Rm,@Rn */
	W32(r8 + 0x8u, r6); UPD(0x0C09DC3Cu, 1);  /* 0C09DC3A mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x4u, r5); UPD(0x0C09DC3Eu, 1);  /* 0C09DC3C mov.l Rm,@(disp,Rn) */
	IF(0x0C09DC3Eu); { u32 t_ = r2; PR = 0x0C09DC42u; W32(r8 + 0xCu, r10); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C09DC42u); }  /* 0C09DC3E jsr @Rn */
L_0C09DC42: BLKS(0x0C09DC42u);
	r0 = 0xC0A9AE0u; UPD(0x0C09DC44u, 1);  /* 0C09DC42 mov.l @(disp,pc),Rn */
	r4 = r9;  /* 0C09DC44 mov Rm,Rn */
	r9 = 0xC069B20u; UPD(0x0C09DC48u, 2);  /* 0C09DC46 mov.l @(disp,pc),Rn */
	IF(0x0C09DC48u); { u32 t_ = r0; PR = 0x0C09DC4Cu; IF(0x0C09DC4Au); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C09DC4Cu); }  /* 0C09DC48 jsr @Rn */
L_0C09DC4C: BLKS(0x0C09DC4Cu);
	r4 = R32(r14 + 0x4u); UPD(0x0C09DC4Eu, 1);  /* 0C09DC4C mov.l @(disp,Rm),Rn */
	r1 = R32(r14); UPD(0x0C09DC50u, 1);  /* 0C09DC4E mov.l @Rm,Rn */
	W32(r8 + 0x28u, r4); UPD(0x0C09DC52u, 1);  /* 0C09DC50 mov.l Rm,@(disp,Rn) */
	r0 = 0x86u; UPD(0x0C09DC54u, 1);  /* 0C09DC52 mov.w @(disp,pc),Rn */
	r4 = r11;  /* 0C09DC54 mov Rm,Rn */
	r10 = 0xC069AF0u; UPD(0x0C09DC58u, 2);  /* 0C09DC56 mov.l @(disp,pc),Rn */
	r5 = 0x20000u; UPD(0x0C09DC5Au, 1);  /* 0C09DC58 mov.l @(disp,pc),Rn */
	W32(r8 + 0x24u, r1); UPD(0x0C09DC5Cu, 1);  /* 0C09DC5A mov.l Rm,@(disp,Rn) */
	IF(0x0C09DC5Cu); { u32 t_ = r9; PR = 0x0C09DC60u; IF(0x0C09DC5Eu); W16(r0 + r8, r11); /* slot mov.w Rm,@(r0,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C09DC60u); }  /* 0C09DC5C jsr @Rn */
L_0C09DC60: BLKS(0x0C09DC60u);
	r4 = r11;  /* 0C09DC60 mov Rm,Rn */
	W32(r8 + 0x2Cu, r0); UPD(0x0C09DC64u, 2);  /* 0C09DC62 mov.l Rm,@(disp,Rn) */
	r5 = 0x20000u; UPD(0x0C09DC66u, 1);  /* 0C09DC64 mov.l @(disp,pc),Rn */
	IF(0x0C09DC66u); { u32 t_ = r10; PR = 0x0C09DC6Au; r11 = 0x14u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C09DC6Au); }  /* 0C09DC66 jsr @Rn */
L_0C09DC6A: BLKS(0x0C09DC6Au);
	W32(r8 + 0x30u, r0); UPD(0x0C09DC6Cu, 1);  /* 0C09DC6A mov.l Rm,@(disp,Rn) */
	r1 = 0x0u;  /* 0C09DC6C mov #imm,Rn */
	r0 = 0xADu; UPD(0x0C09DC70u, 2);  /* 0C09DC6E mov.w @(disp,pc),Rn */
	IF(0x0C09DC70u); W8(r0 + r8, r11); UPD(0x0C09DC72u, 1);  /* 0C09DC70 mov.b Rm,@(r0,Rn) */
	r0 += 0xFFFFFFFCu;  /* 0C09DC72 add #imm,Rn */
	{ IF(0x0C09DC76u); W8(r0 + r8, r11); /* slot mov.b Rm,@(r0,Rn) */ UPD(0x0C09DBE6u, 4); goto L_0C09DBE6; }  /* 0C09DC74 bra */
L_0C09DC80: BLKS(0x0C09DC80u);
	{ r1 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C09DB88u, 3); goto L_0C09DB88; }  /* 0C09DC80 bra */
L_0C09DCE0: BLKS(0x0C09DCE0u);
	r13 = R32(r7); UPD(0x0C09DCE2u, 1);  /* 0C09DCE0 mov.l @Rm,Rn */
L_0C09DCE2: BLKS(0x0C09DCE2u);
	r5 = 0xECFFFFFFu; UPD(0x0C09DCE4u, 1);  /* 0C09DCE2 mov.l @(disp,pc),Rn */
	r13 &= r5;  /* 0C09DCE4 and Rm,Rn */
	W32(r7, r13); UPD(0x0C09DCE8u, 2);  /* 0C09DCE6 mov.l Rm,@Rn */
L_0C09DCE8: BLKS(0x0C09DCE8u);
	r12 = 0xFFFFEF68u; UPD(0x0C09DCEAu, 1);  /* 0C09DCE8 mov.w @(disp,pc),Rn */
	IF(0x0C09DCEAu); { u32 tv_ = (r12 + 0x0C09DCEEu); u32 t_ = PHYS(tv_); r14 += 0x18u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C09CC56u: goto L_0C09CC56; default: JUMPD(tv_); } }  /* 0C09DCEA braf Rn */
L_0C09DCF0: BLKS(0x0C09DCF0u);
	r8 = 0xC0A8CA0u; UPD(0x0C09DCF2u, 1);  /* 0C09DCF0 mov.l @(disp,pc),Rn */
	IF(0x0C09DCF2u); { u32 t_ = r8; PR = 0x0C09DCF6u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C09DCF6u); }  /* 0C09DCF2 jsr @Rn */
L_0C09DCF6: BLKS(0x0C09DCF6u);
	IF(0x0C09DCF6u); T = (s32)r0 >= 0;  /* 0C09DCF6 cmp/pz Rn */
	if (T) { UPD(0x0C09DCFEu, 4); goto L_0C09DCFE; }  /* 0C09DCF8 bt */
L_0C09DCFA: BLKS(0x0C09DCFAu);
	{ IF(0x0C09DCFCu); ; /* slot nop */ UPD(0x0C09CD20u, 3); goto L_0C09CD20; }  /* 0C09DCFA bra */
L_0C09DCFE: BLKS(0x0C09DCFEu);
	r6 = 0xB4u; UPD(0x0C09DD00u, 1);  /* 0C09DCFE mov.w @(disp,pc),Rn */
	IF(0x0C09DD00u); MACL = r13 * r6;  /* 0C09DD00 mul.l Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C09DD04u, 3);  /* 0C09DD02 mov.l @(disp,pc),Rn */
	IF(0x0C09DD04u); r7 = MACL;  /* 0C09DD04 sts macl,Rn */
	IF(0x0C09DD06u); MACL = r0 * r6;  /* 0C09DD06 mul.l Rm,Rn */
	r7 += r5;  /* 0C09DD08 add Rm,Rn */
	r9 = R32(r7 + 0x2Cu); UPD(0x0C09DD0Cu, 5);  /* 0C09DD0A mov.l @(disp,Rm),Rn */
	IF(0x0C09DD0Cu); r4 = MACL;  /* 0C09DD0C sts macl,Rn */
	r4 += r5;  /* 0C09DD0E add Rm,Rn */
	r12 = R32(r4 + 0x24u); UPD(0x0C09DD12u, 3);  /* 0C09DD10 mov.l @(disp,Rm),Rn */
	r11 = R32(r4 + 0x28u); UPD(0x0C09DD14u, 1);  /* 0C09DD12 mov.l @(disp,Rm),Rn */
	r12 += r9;  /* 0C09DD14 add Rm,Rn */
	r10 = R32(r7 + 0x30u); UPD(0x0C09DD18u, 2);  /* 0C09DD16 mov.l @(disp,Rm),Rn */
	r1 = R32(r4); UPD(0x0C09DD1Au, 1);  /* 0C09DD18 mov.l @Rm,Rn */
	r11 += r10;  /* 0C09DD1A add Rm,Rn */
	r3 = 0x13000000u; UPD(0x0C09DD1Eu, 2);  /* 0C09DD1C mov.l @(disp,pc),Rn */
	W32(r7 + 0x24u, r12); UPD(0x0C09DD20u, 1);  /* 0C09DD1E mov.l Rm,@(disp,Rn) */
	T = (r1 & r3) == 0;  /* 0C09DD20 tst Rm,Rn */
	{ u32 c_ = T; W32(r7 + 0x28u, r11); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C09DCE0u, 4); goto L_0C09DCE0; } UPD(0x0C09DD26u, 1); goto L_0C09DD26; }  /* 0C09DD22 bt/s */
L_0C09DD26: BLKS(0x0C09DD26u);
	r7 += 0x7Eu;  /* 0C09DD26 add #imm,Rn */
	r3 = (u32)(s32)(s16)R16(r7); UPD(0x0C09DD2Au, 2);  /* 0C09DD28 mov.w @Rm,Rn */
	IF(0x0C09DD2Au); MACL = r3 * r6;  /* 0C09DD2A mul.l Rm,Rn */
	IF(0x0C09DD2Cu); r0 = MACL;  /* 0C09DD2C sts macl,Rn */
	r0 += r5;  /* 0C09DD2E add Rm,Rn */
	r0 += 0x3Cu;  /* 0C09DD30 add #imm,Rn */
	r5 = (u32)(s32)(s16)R16(r0); UPD(0x0C09DD34u, 6);  /* 0C09DD32 mov.w @Rm,Rn */
	T = (r5 & r5) == 0;  /* 0C09DD34 tst Rm,Rn */
	{ u32 c_ = T; r7 += 0xFFFFFF82u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C09DCE8u, 4); goto L_0C09DCE8; } goto L_0C09DD3A; }  /* 0C09DD36 bt/s */
L_0C09DD3A: BLKS(0x0C09DD3Au);
	r2 = R32(r7 + 0xCu); UPD(0x0C09DD3Cu, 2);  /* 0C09DD3A mov.l @(disp,Rm),Rn */
	r7 = 0x2Fu;  /* 0C09DD3C mov #imm,Rn */
	T = r2 > r7;  /* 0C09DD3E cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C09DD46u, 5); goto L_0C09DD46; }  /* 0C09DD40 bf */
L_0C09DD42: BLKS(0x0C09DD42u);
	{ IF(0x0C09DD44u); ; /* slot nop */ UPD(0x0C09DF10u, 3); goto L_0C09DF10; }  /* 0C09DD42 bra */
L_0C09DD46: BLKS(0x0C09DD46u);
	r0 = 0xC09DD64u;  /* 0C09DD46 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C09DD48 add Rm,Rn */
	IF(0x0C09DD4Au); r6 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C09DD4Cu, 3);  /* 0C09DD4A mov.w @(r0,Rm),Rn */
	IF(0x0C09DD4Cu); { u32 tv_ = (r6 + 0x0C09DD50u); u32 t_ = PHYS(tv_); IF(0x0C09DD4Eu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C09DDD0u: goto L_0C09DDD0; case 0x0C09DE00u: goto L_0C09DE00; case 0x0C09DE60u: goto L_0C09DE60; case 0x0C09DF10u: goto L_0C09DF10; case 0x0C09DF20u: goto L_0C09DF20; default: JUMPD(tv_); } }  /* 0C09DD4C braf Rn */
L_0C09DDD0: BLKS(0x0C09DDD0u);
	r2 = 0xB4u; UPD(0x0C09DDD2u, 1);  /* 0C09DDD0 mov.w @(disp,pc),Rn */
	IF(0x0C09DDD2u); MACL = r13 * r2;  /* 0C09DDD2 mul.l Rm,Rn */
	r8 = 0xC286578u; UPD(0x0C09DDD6u, 3);  /* 0C09DDD4 mov.l @(disp,pc),Rn */
	IF(0x0C09DDD6u); r2 = MACL;  /* 0C09DDD6 sts macl,Rn */
	r0 = 0x88u; UPD(0x0C09DDDAu, 2);  /* 0C09DDD8 mov.w @(disp,pc),Rn */
	r2 += r8;  /* 0C09DDDA add Rm,Rn */
	IF(0x0C09DDDCu); r3 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C09DDDEu, 2);  /* 0C09DDDC mov.w @(r0,Rm),Rn */
	IF(0x0C09DDDEu); T = (s32)r3 >= 0;  /* 0C09DDDE cmp/pz Rn */
	if (!T) { UPD(0x0C09DDF0u, 4); goto L_0C09DDF0; }  /* 0C09DDE0 bf */
L_0C09DDE2: BLKS(0x0C09DDE2u);
	r4 = 0x0u;  /* 0C09DDE2 mov #imm,Rn */
	r0 = 0x9Cu; UPD(0x0C09DDE6u, 2);  /* 0C09DDE4 mov.w @(disp,pc),Rn */
	IF(0x0C09DDE6u); W8(r0 + r2, r4); UPD(0x0C09DDE8u, 1);  /* 0C09DDE6 mov.b Rm,@(r0,Rn) */
L_0C09DDE8: BLKS(0x0C09DDE8u);
	r1 = R32(r2 + 0xCu); UPD(0x0C09DDEAu, 1);  /* 0C09DDE8 mov.l @(disp,Rm),Rn */
	{ r1 += r3; /* slot add Rm,Rn */ UPD(0x0C09D0D4u, 3); goto L_0C09D0D4; }  /* 0C09DDEA bra */
L_0C09DDF0: BLKS(0x0C09DDF0u);
	r0 = R32(r2 + 0x8u); UPD(0x0C09DDF2u, 1);  /* 0C09DDF0 mov.l @(disp,Rm),Rn */
	r1 = 0x0u;  /* 0C09DDF2 mov #imm,Rn */
	r12 = 0xC1CB7DCu; UPD(0x0C09DDF6u, 2);  /* 0C09DDF4 mov.l @(disp,pc),Rn */
	IF(0x0C09DDF6u); r0 <<= 2;  /* 0C09DDF6 shll2 Rn */
	IF(0x0C09DDF8u); r5 = R32(r0 + r12); UPD(0x0C09DDFAu, 2);  /* 0C09DDF8 mov.l @(r0,Rm),Rn */
	{ W32(r2 + 0x8u, r5); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C09DBFCu, 3); goto L_0C09DBFC; }  /* 0C09DDFA bra */
L_0C09DE00: BLKS(0x0C09DE00u);
	r2 = 0xB4u; UPD(0x0C09DE02u, 1);  /* 0C09DE00 mov.w @(disp,pc),Rn */
	IF(0x0C09DE02u); MACL = r13 * r2;  /* 0C09DE02 mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C09DE06u, 3);  /* 0C09DE04 mov.l @(disp,pc),Rn */
	IF(0x0C09DE06u); r12 = MACL;  /* 0C09DE06 sts macl,Rn */
	r7 = 0xA0u; UPD(0x0C09DE0Au, 2);  /* 0C09DE08 mov.w @(disp,pc),Rn */
	r12 += r6;  /* 0C09DE0A add Rm,Rn */
	r12 += r7;  /* 0C09DE0C add Rm,Rn */
	r12 += 0x2u;  /* 0C09DE0E add #imm,Rn */
	r10 = (u32)(s32)(s8)R8(r12); UPD(0x0C09DE12u, 4);  /* 0C09DE10 mov.b @Rm,Rn */
	T = (r10 & r10) == 0;  /* 0C09DE12 tst Rm,Rn */
	{ u32 c_ = T; IF(0x0C09DE16u); MACL = r3 * r2; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C09DE50u, 5); goto L_0C09DE50; } goto L_0C09DE18; }  /* 0C09DE14 bt/s */
L_0C09DE18: BLKS(0x0C09DE18u);
	IF(0x0C09DE18u); MACL = r3 * r2;  /* 0C09DE18 mul.l Rm,Rn */
	IF(0x0C09DE1Au); r1 = MACL;  /* 0C09DE1A sts macl,Rn */
	r1 += r6;  /* 0C09DE1C add Rm,Rn */
	r1 += r7;  /* 0C09DE1E add Rm,Rn */
	r1 += 0x2u;  /* 0C09DE20 add #imm,Rn */
	UPD(0x0C09DE22u, 8);
L_0C09DE22: BLKS(0x0C09DE22u);
	r6 = 0xB4u; UPD(0x0C09DE24u, 1);  /* 0C09DE22 mov.w @(disp,pc),Rn */
	IF(0x0C09DE24u); MACL = r13 * r6;  /* 0C09DE24 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C09DE28u, 3);  /* 0C09DE26 mov.l @(disp,pc),Rn */
	IF(0x0C09DE28u); r3 = MACL;  /* 0C09DE28 sts macl,Rn */
	r3 += r0;  /* 0C09DE2A add Rm,Rn */
	r7 = 0xA1u; UPD(0x0C09DE2Eu, 3);  /* 0C09DE2C mov.w @(disp,pc),Rn */
	r0 = r3;  /* 0C09DE2E mov Rm,Rn */
	r5 = (u32)(s32)(s8)R8(r1); UPD(0x0C09DE32u, 2);  /* 0C09DE30 mov.b @Rm,Rn */
	IF(0x0C09DE32u); r9 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C09DE34u, 1);  /* 0C09DE32 mov.b @(r0,Rm),Rn */
	T = (r5 & r9) == 0;  /* 0C09DE34 tst Rm,Rn */
	{ u32 c_ = !T; r8 = 0xFFFFFFFFu; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C09DE3Eu, 4); goto L_0C09DE3E; } goto L_0C09DE3A; }  /* 0C09DE36 bf/s */
L_0C09DE3A: BLKS(0x0C09DE3Au);
	r0 = 0x88u; UPD(0x0C09DE3Cu, 2);  /* 0C09DE3A mov.w @(disp,pc),Rn */
	IF(0x0C09DE3Cu); W16(r0 + r3, r8); UPD(0x0C09DE3Eu, 1);  /* 0C09DE3C mov.w Rm,@(r0,Rn) */
L_0C09DE3E: BLKS(0x0C09DE3Eu);
	{ IF(0x0C09DE40u); ; /* slot nop */ UPD(0x0C09D07Eu, 3); goto L_0C09D07E; }  /* 0C09DE3E bra */
L_0C09DE50: BLKS(0x0C09DE50u);
	IF(0x0C09DE50u); r1 = MACL;  /* 0C09DE50 sts macl,Rn */
	r1 += r6;  /* 0C09DE52 add Rm,Rn */
	r1 += r7;  /* 0C09DE54 add Rm,Rn */
	{ r1 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C09DE22u, 6); goto L_0C09DE22; }  /* 0C09DE56 bra */
L_0C09DE60: BLKS(0x0C09DE60u);
	r11 = 0xC0BC1B0u; UPD(0x0C09DE62u, 1);  /* 0C09DE60 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C09DE62 mov Rm,Rn */
	r5 = 0xCu;  /* 0C09DE64 mov #imm,Rn */
	IF(0x0C09DE66u); { u32 t_ = r11; PR = 0x0C09DE6Au; r6 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C09DE6Au); }  /* 0C09DE66 jsr @Rn */
L_0C09DE6A: BLKS(0x0C09DE6Au);
	T = (r0 & r0) == 0;  /* 0C09DE6A tst Rm,Rn */
	if (!T) { UPD(0x0C09DE78u, 4); goto L_0C09DE78; }  /* 0C09DE6C bf */
L_0C09DE6E: BLKS(0x0C09DE6Eu);
	r14 += 0x18u;  /* 0C09DE6E add #imm,Rn */
	r13 = 0xFFFFEDE0u; UPD(0x0C09DE72u, 2);  /* 0C09DE70 mov.w @(disp,pc),Rn */
	IF(0x0C09DE72u); { u32 tv_ = (r13 + 0x0C09DE76u); u32 t_ = PHYS(tv_); IF(0x0C09DE74u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C09CC56u: goto L_0C09CC56; default: JUMPD(tv_); } }  /* 0C09DE72 braf Rn */
L_0C09DE78: BLKS(0x0C09DE78u);
	r12 = 0xB4u; UPD(0x0C09DE7Au, 1);  /* 0C09DE78 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C09DE7A add #imm,Rn */
	IF(0x0C09DE7Cu); MACL = r13 * r12;  /* 0C09DE7C mul.l Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C09DE80u, 4);  /* 0C09DE7E mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C09DE80 mov #imm,Rn */
	IF(0x0C09DE82u); r12 = MACL;  /* 0C09DE82 sts macl,Rn */
	r12 += r5;  /* 0C09DE84 add Rm,Rn */
	r5 = R32(r12 + 0x24u); UPD(0x0C09DE88u, 4);  /* 0C09DE86 mov.l @(disp,Rm),Rn */
	r0 = 0xFFE10000u; UPD(0x0C09DE8Au, 1);  /* 0C09DE88 mov.l @(disp,pc),Rn */
	r5 += r0;  /* 0C09DE8A add Rm,Rn */
	r0 = R32(r12 + 0x8u); UPD(0x0C09DE8Eu, 2);  /* 0C09DE8C mov.l @(disp,Rm),Rn */
	r11 = 0xC1CB870u; UPD(0x0C09DE90u, 1);  /* 0C09DE8E mov.l @(disp,pc),Rn */
	r0 &= 0x1u;  /* 0C09DE90 and #imm,r0 */
	IF(0x0C09DE92u); r0 <<= 2;  /* 0C09DE92 shll2 Rn */
	IF(0x0C09DE94u); r10 = R32(r0 + r11); UPD(0x0C09DE96u, 3);  /* 0C09DE94 mov.l @(r0,Rm),Rn */
	r6 = R32(r12 + 0x28u); UPD(0x0C09DE98u, 1);  /* 0C09DE96 mov.l @(disp,Rm),Rn */
	r8 = 0x2A000u; UPD(0x0C09DE9Au, 1);  /* 0C09DE98 mov.l @(disp,pc),Rn */
	r6 += r10;  /* 0C09DE9A add Rm,Rn */
	W32(r15, r8); UPD(0x0C09DE9Eu, 2);  /* 0C09DE9C mov.l Rm,@Rn */
	r8 = 0xC0BA480u; UPD(0x0C09DEA0u, 1);  /* 0C09DE9E mov.l @(disp,pc),Rn */
	r10 = 0x100u; UPD(0x0C09DEA2u, 1);  /* 0C09DEA0 mov.w @(disp,pc),Rn */
	IF(0x0C09DEA2u); { u32 t_ = r8; PR = 0x0C09DEA6u; r7 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BA480, 0x0C0BA480u, 0x0C09DEA6u); }  /* 0C09DEA2 jsr @Rn */
L_0C09DEA6: BLKS(0x0C09DEA6u);
	r0 = R32(r12 + 0x8u); UPD(0x0C09DEA8u, 1);  /* 0C09DEA6 mov.l @(disp,Rm),Rn */
	r4 = 0x0u;  /* 0C09DEA8 mov #imm,Rn */
	r9 = 0xC1CB868u; UPD(0x0C09DEACu, 2);  /* 0C09DEAA mov.l @(disp,pc),Rn */
	r0 &= 0x1u;  /* 0C09DEAC and #imm,r0 */
	r5 = R32(r12 + 0x24u); UPD(0x0C09DEB0u, 2);  /* 0C09DEAE mov.l @(disp,Rm),Rn */
	IF(0x0C09DEB0u); r0 <<= 2;  /* 0C09DEB0 shll2 Rn */
	r7 = 0xFFE30000u; UPD(0x0C09DEB4u, 2);  /* 0C09DEB2 mov.l @(disp,pc),Rn */
	IF(0x0C09DEB4u); r3 = R32(r0 + r9); UPD(0x0C09DEB6u, 1);  /* 0C09DEB4 mov.l @(r0,Rm),Rn */
	r5 += r7;  /* 0C09DEB6 add Rm,Rn */
	r2 = 0x2C000u; UPD(0x0C09DEBAu, 2);  /* 0C09DEB8 mov.l @(disp,pc),Rn */
	r7 = r10;  /* 0C09DEBA mov Rm,Rn */
	r6 = R32(r12 + 0x28u); UPD(0x0C09DEBEu, 2);  /* 0C09DEBC mov.l @(disp,Rm),Rn */
	W32(r15, r2); UPD(0x0C09DEC0u, 1);  /* 0C09DEBE mov.l Rm,@Rn */
	IF(0x0C09DEC0u); { u32 t_ = r8; PR = 0x0C09DEC4u; r6 += r3; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BA480, 0x0C0BA480u, 0x0C09DEC4u); }  /* 0C09DEC0 jsr @Rn */
L_0C09DEC4: BLKS(0x0C09DEC4u);
	r0 = R32(r12 + 0x8u); UPD(0x0C09DEC6u, 1);  /* 0C09DEC4 mov.l @(disp,Rm),Rn */
	r7 = r10;  /* 0C09DEC6 mov Rm,Rn */
	r4 = 0xC1CB860u; UPD(0x0C09DECAu, 2);  /* 0C09DEC8 mov.l @(disp,pc),Rn */
	r0 &= 0x1u;  /* 0C09DECA and #imm,r0 */
	r5 = R32(r12 + 0x24u); UPD(0x0C09DECEu, 2);  /* 0C09DECC mov.l @(disp,Rm),Rn */
	IF(0x0C09DECEu); r0 <<= 2;  /* 0C09DECE shll2 Rn */
	r6 = 0xFFE60000u; UPD(0x0C09DED2u, 2);  /* 0C09DED0 mov.l @(disp,pc),Rn */
	IF(0x0C09DED2u); r11 = R32(r0 + r4); UPD(0x0C09DED4u, 1);  /* 0C09DED2 mov.l @(r0,Rm),Rn */
	r5 += r6;  /* 0C09DED4 add Rm,Rn */
	r6 = R32(r12 + 0x28u); UPD(0x0C09DED8u, 2);  /* 0C09DED6 mov.l @(disp,Rm),Rn */
	r4 = 0x0u;  /* 0C09DED8 mov #imm,Rn */
	r0 = 0x2E000u; UPD(0x0C09DEDCu, 2);  /* 0C09DEDA mov.l @(disp,pc),Rn */
	r6 += r11;  /* 0C09DEDC add Rm,Rn */
	IF(0x0C09DEDEu); { u32 t_ = r8; PR = 0x0C09DEE2u; W32(r15, r0); /* slot mov.l Rm,@Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BA480, 0x0C0BA480u, 0x0C09DEE2u); }  /* 0C09DEDE jsr @Rn */
L_0C09DEE2: BLKS(0x0C09DEE2u);
	r0 = R32(r12 + 0x8u); UPD(0x0C09DEE4u, 1);  /* 0C09DEE2 mov.l @(disp,Rm),Rn */
	r4 = 0x0u;  /* 0C09DEE4 mov #imm,Rn */
	r0 &= 0x1u;  /* 0C09DEE6 and #imm,r0 */
	r9 = 0xC1CB858u; UPD(0x0C09DEEAu, 3);  /* 0C09DEE8 mov.l @(disp,pc),Rn */
	IF(0x0C09DEEAu); r0 <<= 2;  /* 0C09DEEA shll2 Rn */
	r5 = R32(r12 + 0x24u); UPD(0x0C09DEEEu, 2);  /* 0C09DEEC mov.l @(disp,Rm),Rn */
	r7 = 0xFFE80000u; UPD(0x0C09DEF0u, 1);  /* 0C09DEEE mov.l @(disp,pc),Rn */
	r6 = R32(r12 + 0x28u); UPD(0x0C09DEF2u, 1);  /* 0C09DEF0 mov.l @(disp,Rm),Rn */
	r5 += r7;  /* 0C09DEF2 add Rm,Rn */
	IF(0x0C09DEF4u); r3 = R32(r0 + r9); UPD(0x0C09DEF6u, 2);  /* 0C09DEF4 mov.l @(r0,Rm),Rn */
	r7 = r10;  /* 0C09DEF6 mov Rm,Rn */
	r2 = 0x30000u; UPD(0x0C09DEFAu, 2);  /* 0C09DEF8 mov.l @(disp,pc),Rn */
	r6 += r3;  /* 0C09DEFA add Rm,Rn */
	IF(0x0C09DEFCu); { u32 t_ = r8; PR = 0x0C09DF00u; W32(r15, r2); /* slot mov.l Rm,@Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BA480, 0x0C0BA480u, 0x0C09DF00u); }  /* 0C09DEFC jsr @Rn */
L_0C09DF00: BLKS(0x0C09DF00u);
	r0 = 0x88u; UPD(0x0C09DF02u, 1);  /* 0C09DF00 mov.w @(disp,pc),Rn */
	r15 += 0x4u;  /* 0C09DF02 add #imm,Rn */
	r4 = R32(r12 + 0xCu); UPD(0x0C09DF06u, 2);  /* 0C09DF04 mov.l @(disp,Rm),Rn */
	IF(0x0C09DF06u); r1 = (u32)(s32)(s16)R16(r0 + r12); UPD(0x0C09DF08u, 1);  /* 0C09DF06 mov.w @(r0,Rm),Rn */
	r4 += r1;  /* 0C09DF08 add Rm,Rn */
	{ W32(r12 + 0xCu, r4); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C09D088u, 4); goto L_0C09D088; }  /* 0C09DF0A bra */
L_0C09DF10: BLKS(0x0C09DF10u);
	r11 = 0xB4u; UPD(0x0C09DF12u, 1);  /* 0C09DF10 mov.w @(disp,pc),Rn */
	IF(0x0C09DF12u); MACL = r13 * r11;  /* 0C09DF12 mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C09DF16u, 3);  /* 0C09DF14 mov.l @(disp,pc),Rn */
	IF(0x0C09DF16u); r2 = MACL;  /* 0C09DF16 sts macl,Rn */
	r0 = 0x88u; UPD(0x0C09DF1Au, 2);  /* 0C09DF18 mov.w @(disp,pc),Rn */
	r2 += r3;  /* 0C09DF1A add Rm,Rn */
	{ IF(0x0C09DF1Eu); r3 = (u32)(s32)(s16)R16(r0 + r2); /* slot mov.w @(r0,Rm),Rn */ UPD(0x0C09DDE8u, 4); goto L_0C09DDE8; }  /* 0C09DF1C bra */
L_0C09DF20: BLKS(0x0C09DF20u);
	r6 = 0xB4u; UPD(0x0C09DF22u, 1);  /* 0C09DF20 mov.w @(disp,pc),Rn */
	r1 = 0x20u;  /* 0C09DF22 mov #imm,Rn */
	IF(0x0C09DF24u); MACL = r13 * r6;  /* 0C09DF24 mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C09DF28u, 4);  /* 0C09DF26 mov.l @(disp,pc),Rn */
	IF(0x0C09DF28u); r4 = MACL;  /* 0C09DF28 sts macl,Rn */
	{ r2 += r4; /* slot add Rm,Rn */ UPD(0x0C09D0D4u, 4); goto L_0C09D0D4; }  /* 0C09DF2A bra */
L_0C09DF80: BLKS(0x0C09DF80u);
	r9 = 0xC0A8CA0u; UPD(0x0C09DF82u, 1);  /* 0C09DF80 mov.l @(disp,pc),Rn */
	IF(0x0C09DF82u); { u32 t_ = r9; PR = 0x0C09DF86u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C09DF86u); }  /* 0C09DF82 jsr @Rn */
L_0C09DF86: BLKS(0x0C09DF86u);
	IF(0x0C09DF86u); T = (s32)r0 >= 0;  /* 0C09DF86 cmp/pz Rn */
	if (T) { UPD(0x0C09DF92u, 4); goto L_0C09DF92; }  /* 0C09DF88 bt */
L_0C09DF8A: BLKS(0x0C09DF8Au);
	r1 = 0xFFFFED90u; UPD(0x0C09DF8Cu, 1);  /* 0C09DF8A mov.w @(disp,pc),Rn */
	IF(0x0C09DF8Cu); { u32 tv_ = (r1 + 0x0C09DF90u); u32 t_ = PHYS(tv_); IF(0x0C09DF8Eu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C09CD20u: goto L_0C09CD20; default: JUMPD(tv_); } }  /* 0C09DF8C braf Rn */
L_0C09DF92: BLKS(0x0C09DF92u);
	r6 = 0xB4u; UPD(0x0C09DF94u, 1);  /* 0C09DF92 mov.w @(disp,pc),Rn */
	IF(0x0C09DF94u); MACL = r13 * r6;  /* 0C09DF94 mul.l Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C09DF98u, 3);  /* 0C09DF96 mov.l @(disp,pc),Rn */
	IF(0x0C09DF98u); r7 = MACL;  /* 0C09DF98 sts macl,Rn */
	IF(0x0C09DF9Au); MACL = r0 * r6;  /* 0C09DF9A mul.l Rm,Rn */
	r7 += r5;  /* 0C09DF9C add Rm,Rn */
	r12 = R32(r7 + 0x2Cu); UPD(0x0C09DFA0u, 5);  /* 0C09DF9E mov.l @(disp,Rm),Rn */
	IF(0x0C09DFA0u); r8 = MACL;  /* 0C09DFA0 sts macl,Rn */
	r8 += r5;  /* 0C09DFA2 add Rm,Rn */
	r0 = R32(r8 + 0x24u); UPD(0x0C09DFA6u, 3);  /* 0C09DFA4 mov.l @(disp,Rm),Rn */
	r10 = R32(r8 + 0x28u); UPD(0x0C09DFA8u, 1);  /* 0C09DFA6 mov.l @(disp,Rm),Rn */
	r0 += r12;  /* 0C09DFA8 add Rm,Rn */
	r11 = R32(r7 + 0x30u); UPD(0x0C09DFACu, 2);  /* 0C09DFAA mov.l @(disp,Rm),Rn */
	r1 = R32(r8); UPD(0x0C09DFAEu, 1);  /* 0C09DFAC mov.l @Rm,Rn */
	r10 += r11;  /* 0C09DFAE add Rm,Rn */
	r3 = 0x13000000u; UPD(0x0C09DFB2u, 2);  /* 0C09DFB0 mov.l @(disp,pc),Rn */
	W32(r7 + 0x24u, r0); UPD(0x0C09DFB4u, 1);  /* 0C09DFB2 mov.l Rm,@(disp,Rn) */
	T = (r1 & r3) == 0;  /* 0C09DFB4 tst Rm,Rn */
	{ u32 c_ = !T; W32(r7 + 0x28u, r10); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C09DFBEu, 4); goto L_0C09DFBE; } UPD(0x0C09DFBAu, 1); goto L_0C09DFBA; }  /* 0C09DFB6 bf/s */
L_0C09DFBA: BLKS(0x0C09DFBAu);
	{ r13 = R32(r7); /* slot mov.l @Rm,Rn */ UPD(0x0C09DCE2u, 3); goto L_0C09DCE2; }  /* 0C09DFBA bra */
L_0C09DFBE: BLKS(0x0C09DFBEu);
	r7 += 0x7Eu;  /* 0C09DFBE add #imm,Rn */
	r3 = (u32)(s32)(s16)R16(r7); UPD(0x0C09DFC2u, 2);  /* 0C09DFC0 mov.w @Rm,Rn */
	IF(0x0C09DFC2u); MACL = r3 * r6;  /* 0C09DFC2 mul.l Rm,Rn */
	IF(0x0C09DFC4u); r4 = MACL;  /* 0C09DFC4 sts macl,Rn */
	r4 += r5;  /* 0C09DFC6 add Rm,Rn */
	r4 += 0x3Cu;  /* 0C09DFC8 add #imm,Rn */
	r2 = (u32)(s32)(s16)R16(r4); UPD(0x0C09DFCCu, 6);  /* 0C09DFCA mov.w @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C09DFCC tst Rm,Rn */
	{ u32 c_ = T; r7 += 0xFFFFFF82u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C09DFE2u, 4); goto L_0C09DFE2; } goto L_0C09DFD2; }  /* 0C09DFCE bt/s */
L_0C09DFD2: BLKS(0x0C09DFD2u);
	r2 = 0x99u; UPD(0x0C09DFD4u, 2);  /* 0C09DFD2 mov.w @(disp,pc),Rn */
	r2 += r7;  /* 0C09DFD4 add Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r2); UPD(0x0C09DFD8u, 2);  /* 0C09DFD6 mov.b @Rm,Rn */
	r6 += 0x1u;  /* 0C09DFD8 add #imm,Rn */
	r0 = r6 & 0xFF;  /* 0C09DFDA extu.b Rm,Rn */
	T = r0 == 0x2u;  /* 0C09DFDC cmp/eq #imm,r0 */
	{ u32 c_ = T; W8(r2, r6); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C09DFEAu, 6); goto L_0C09DFEA; } UPD(0x0C09DFE2u, 1); goto L_0C09DFE2; }  /* 0C09DFDE bt/s */
L_0C09DFE2: BLKS(0x0C09DFE2u);
	r13 = 0xFFFFEC6Eu; UPD(0x0C09DFE4u, 1);  /* 0C09DFE2 mov.w @(disp,pc),Rn */
	IF(0x0C09DFE4u); { u32 tv_ = (r13 + 0x0C09DFE8u); u32 t_ = PHYS(tv_); r14 += 0x18u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C09CC56u: goto L_0C09CC56; default: JUMPD(tv_); } }  /* 0C09DFE4 braf Rn */
L_0C09DFEA: BLKS(0x0C09DFEAu);
	r9 = 0x0u;  /* 0C09DFEA mov #imm,Rn */
	W8(r2, r9); UPD(0x0C09DFEEu, 2);  /* 0C09DFEC mov.b Rm,@Rn */
	r2 = R32(r7 + 0xCu); UPD(0x0C09DFF0u, 1);  /* 0C09DFEE mov.l @(disp,Rm),Rn */
	r7 = 0x2Fu;  /* 0C09DFF0 mov #imm,Rn */
	T = r2 > r7;  /* 0C09DFF2 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C09E080u, 5); goto L_0C09E080; }  /* 0C09DFF4 bt */
L_0C09DFF6: BLKS(0x0C09DFF6u);
	r0 = 0xC09E010u;  /* 0C09DFF6 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C09DFF8 add Rm,Rn */
	IF(0x0C09DFFAu); r8 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C09DFFCu, 3);  /* 0C09DFFA mov.w @(r0,Rm),Rn */
	IF(0x0C09DFFCu); { u32 tv_ = (r8 + 0x0C09E000u); u32 t_ = PHYS(tv_); IF(0x0C09DFFEu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C09DC00u: goto L_0C09DC00; case 0x0C09E070u: goto L_0C09E070; case 0x0C09E090u: goto L_0C09E090; case 0x0C09E0F0u: goto L_0C09E0F0; case 0x0C09E170u: goto L_0C09E170; default: JUMPD(tv_); } }  /* 0C09DFFC braf Rn */
L_0C09E070: BLKS(0x0C09E070u);
	r0 = 0xB4u; UPD(0x0C09E072u, 1);  /* 0C09E070 mov.w @(disp,pc),Rn */
	r10 = 0x0u;  /* 0C09E072 mov #imm,Rn */
	IF(0x0C09E074u); MACL = r13 * r0;  /* 0C09E074 mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C09E078u, 4);  /* 0C09E076 mov.l @(disp,pc),Rn */
	IF(0x0C09E078u); r11 = MACL;  /* 0C09E078 sts macl,Rn */
	r0 = 0x9Cu; UPD(0x0C09E07Cu, 2);  /* 0C09E07A mov.w @(disp,pc),Rn */
	r3 += r11;  /* 0C09E07C add Rm,Rn */
	IF(0x0C09E07Eu); W8(r0 + r3, r10); UPD(0x0C09E080u, 2);  /* 0C09E07E mov.b Rm,@(r0,Rn) */
L_0C09E080: BLKS(0x0C09E080u);
	{ IF(0x0C09E082u); ; /* slot nop */ UPD(0x0C09DC00u, 3); goto L_0C09DC00; }  /* 0C09E080 bra */
L_0C09E090: BLKS(0x0C09E090u);
	r2 = 0xB4u; UPD(0x0C09E092u, 1);  /* 0C09E090 mov.w @(disp,pc),Rn */
	IF(0x0C09E092u); MACL = r13 * r2;  /* 0C09E092 mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C09E096u, 3);  /* 0C09E094 mov.l @(disp,pc),Rn */
	IF(0x0C09E096u); r9 = MACL;  /* 0C09E096 sts macl,Rn */
	r7 = 0xA0u; UPD(0x0C09E09Au, 2);  /* 0C09E098 mov.w @(disp,pc),Rn */
	r9 += r6;  /* 0C09E09A add Rm,Rn */
	r9 += r7;  /* 0C09E09C add Rm,Rn */
	r9 += 0x2u;  /* 0C09E09E add #imm,Rn */
	r4 = (u32)(s32)(s8)R8(r9); UPD(0x0C09E0A2u, 4);  /* 0C09E0A0 mov.b @Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C09E0A2 tst Rm,Rn */
	{ u32 c_ = T; IF(0x0C09E0A6u); MACL = r3 * r2; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C09E0E0u, 5); goto L_0C09E0E0; } goto L_0C09E0A8; }  /* 0C09E0A4 bt/s */
L_0C09E0A8: BLKS(0x0C09E0A8u);
	IF(0x0C09E0A8u); MACL = r3 * r2;  /* 0C09E0A8 mul.l Rm,Rn */
	IF(0x0C09E0AAu); r1 = MACL;  /* 0C09E0AA sts macl,Rn */
	r1 += r6;  /* 0C09E0AC add Rm,Rn */
	r1 += r7;  /* 0C09E0AE add Rm,Rn */
	r1 += 0x2u;  /* 0C09E0B0 add #imm,Rn */
	UPD(0x0C09E0B2u, 8);
L_0C09E0B2: BLKS(0x0C09E0B2u);
	r8 = 0xB4u; UPD(0x0C09E0B4u, 1);  /* 0C09E0B2 mov.w @(disp,pc),Rn */
	IF(0x0C09E0B4u); MACL = r13 * r8;  /* 0C09E0B4 mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C09E0B8u, 3);  /* 0C09E0B6 mov.l @(disp,pc),Rn */
	IF(0x0C09E0B8u); r0 = MACL;  /* 0C09E0B8 sts macl,Rn */
	r6 = 0xA1u; UPD(0x0C09E0BCu, 2);  /* 0C09E0BA mov.w @(disp,pc),Rn */
	r0 += r7;  /* 0C09E0BC add Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r1); UPD(0x0C09E0C0u, 2);  /* 0C09E0BE mov.b @Rm,Rn */
	IF(0x0C09E0C0u); r13 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C09E0C2u, 1);  /* 0C09E0C0 mov.b @(r0,Rm),Rn */
	T = (r2 & r13) == 0;  /* 0C09E0C2 tst Rm,Rn */
	{ u32 c_ = T; r1 = 0x1Cu; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C09E0CAu, 4); goto L_0C09E0CA; } goto L_0C09E0C8; }  /* 0C09E0C4 bt/s */
L_0C09E0C8: BLKS(0x0C09E0C8u);
	r1 = 0x17u;  /* 0C09E0C8 mov #imm,Rn */
	UPD(0x0C09E0CAu, 2);
L_0C09E0CA: BLKS(0x0C09E0CAu);
	W32(r0 + 0xCu, r1); UPD(0x0C09E0CCu, 1);  /* 0C09E0CA mov.l Rm,@(disp,Rn) */
L_0C09E0CC: BLKS(0x0C09E0CCu);
	r13 = 0xFFFFEB84u; UPD(0x0C09E0CEu, 1);  /* 0C09E0CC mov.w @(disp,pc),Rn */
	IF(0x0C09E0CEu); { u32 tv_ = (r13 + 0x0C09E0D2u); u32 t_ = PHYS(tv_); r14 += 0x18u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C09CC56u: goto L_0C09CC56; default: JUMPD(tv_); } }  /* 0C09E0CE braf Rn */
L_0C09E0E0: BLKS(0x0C09E0E0u);
	IF(0x0C09E0E0u); r1 = MACL;  /* 0C09E0E0 sts macl,Rn */
	r1 += r6;  /* 0C09E0E2 add Rm,Rn */
	r1 += r7;  /* 0C09E0E4 add Rm,Rn */
	{ r1 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C09E0B2u, 6); goto L_0C09E0B2; }  /* 0C09E0E6 bra */
L_0C09E0F0: BLKS(0x0C09E0F0u);
	r10 = 0xC0BC1B0u; UPD(0x0C09E0F2u, 1);  /* 0C09E0F0 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C09E0F2 mov Rm,Rn */
	r5 = 0xAu;  /* 0C09E0F4 mov #imm,Rn */
	IF(0x0C09E0F6u); { u32 t_ = r10; PR = 0x0C09E0FAu; r6 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C09E0FAu); }  /* 0C09E0F6 jsr @Rn */
L_0C09E0FA: BLKS(0x0C09E0FAu);
	T = (r0 & r0) == 0;  /* 0C09E0FA tst Rm,Rn */
	if (T) { UPD(0x0C09E0CCu, 4); goto L_0C09E0CC; }  /* 0C09E0FC bt */
L_0C09E0FE: BLKS(0x0C09E0FEu);
	r11 = 0x1u;  /* 0C09E0FE mov #imm,Rn */
	r9 = 0xB4u; UPD(0x0C09E102u, 2);  /* 0C09E100 mov.w @(disp,pc),Rn */
	IF(0x0C09E102u); MACL = r13 * r9;  /* 0C09E102 mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C09E106u, 3);  /* 0C09E104 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C09E106 add #imm,Rn */
	IF(0x0C09E108u); r9 = MACL;  /* 0C09E108 sts macl,Rn */
	r9 += r6;  /* 0C09E10A add Rm,Rn */
	r8 = R32(r9 + 0x8u); UPD(0x0C09E10Eu, 4);  /* 0C09E10C mov.l @(disp,Rm),Rn */
	r8 &= r11;  /* 0C09E10E and Rm,Rn */
	r12 = r8;  /* 0C09E110 mov Rm,Rn */
	IF(0x0C09E112u); r12 <<= 2;  /* 0C09E112 shll2 Rn */
	r7 = 0xC1CB880u; UPD(0x0C09E116u, 4);  /* 0C09E114 mov.l @(disp,pc),Rn */
	r0 = r12;  /* 0C09E116 mov Rm,Rn */
	IF(0x0C09E118u); r6 = R32(r0 + r7); UPD(0x0C09E11Au, 2);  /* 0C09E118 mov.l @(r0,Rm),Rn */
	r8 += r8;  /* 0C09E11A add Rm,Rn */
	r4 = 0xC1CB878u; UPD(0x0C09E11Eu, 2);  /* 0C09E11C mov.l @(disp,pc),Rn */
	r0 = r8;  /* 0C09E11E mov Rm,Rn */
	IF(0x0C09E120u); r7 = (u32)(s32)(s16)R16(r0 + r4); UPD(0x0C09E122u, 2);  /* 0C09E120 mov.w @(r0,Rm),Rn */
	r3 = 0xC0BB5F0u; UPD(0x0C09E124u, 1);  /* 0C09E122 mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C09E124 mov #imm,Rn */
	r10 = R32(r9 + 0x24u); UPD(0x0C09E128u, 2);  /* 0C09E126 mov.l @(disp,Rm),Rn */
	r11 = R32(r9 + 0x28u); UPD(0x0C09E12Au, 1);  /* 0C09E128 mov.l @(disp,Rm),Rn */
	r0 = 0x3C000u; UPD(0x0C09E12Cu, 1);  /* 0C09E12A mov.l @(disp,pc),Rn */
	r6 += r11;  /* 0C09E12C add Rm,Rn */
	r5 = 0x80000u; UPD(0x0C09E130u, 2);  /* 0C09E12E mov.l @(disp,pc),Rn */
	W32(r15, r0); UPD(0x0C09E132u, 1);  /* 0C09E130 mov.l Rm,@Rn */
	IF(0x0C09E132u); { u32 t_ = r3; PR = 0x0C09E136u; r5 += r10; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BB5F0, 0x0C0BB5F0u, 0x0C09E136u); }  /* 0C09E132 jsr @Rn */
L_0C09E136: BLKS(0x0C09E136u);
	r2 = 0xC1CB888u; UPD(0x0C09E138u, 1);  /* 0C09E136 mov.l @(disp,pc),Rn */
	r0 = r12;  /* 0C09E138 mov Rm,Rn */
	IF(0x0C09E13Au); r4 = R32(r0 + r2); UPD(0x0C09E13Cu, 2);  /* 0C09E13A mov.l @(r0,Rm),Rn */
	r12 = 0xC1CB87Cu; UPD(0x0C09E13Eu, 1);  /* 0C09E13C mov.l @(disp,pc),Rn */
	r0 = r8;  /* 0C09E13E mov Rm,Rn */
	r5 = 0x40000u; UPD(0x0C09E142u, 2);  /* 0C09E140 mov.l @(disp,pc),Rn */
	r11 += r4;  /* 0C09E142 add Rm,Rn */
	IF(0x0C09E144u); r7 = (u32)(s32)(s16)R16(r0 + r12); UPD(0x0C09E146u, 2);  /* 0C09E144 mov.w @(r0,Rm),Rn */
	r10 += r5;  /* 0C09E146 add Rm,Rn */
	r3 = 0xC0BB5F0u; UPD(0x0C09E14Au, 2);  /* 0C09E148 mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C09E14A mov #imm,Rn */
	W32(r15, r5); UPD(0x0C09E14Eu, 2);  /* 0C09E14C mov.l Rm,@Rn */
	r6 = r11;  /* 0C09E14E mov Rm,Rn */
	IF(0x0C09E150u); { u32 t_ = r3; PR = 0x0C09E154u; r5 = r10; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BB5F0, 0x0C0BB5F0u, 0x0C09E154u); }  /* 0C09E150 jsr @Rn */
L_0C09E154: BLKS(0x0C09E154u);
	r1 = R32(r9 + 0xCu); UPD(0x0C09E156u, 1);  /* 0C09E154 mov.l @(disp,Rm),Rn */
	r15 += 0x4u;  /* 0C09E156 add #imm,Rn */
	r1 += 0x1u;  /* 0C09E158 add #imm,Rn */
	UPD(0x0C09E15Au, 2);
L_0C09E15A: BLKS(0x0C09E15Au);
	r4 = 0xFFFFEF28u; UPD(0x0C09E15Cu, 1);  /* 0C09E15A mov.w @(disp,pc),Rn */
	IF(0x0C09E15Cu); { u32 tv_ = (r4 + 0x0C09E160u); u32 t_ = PHYS(tv_); W32(r9 + 0xCu, r1); /* slot mov.l Rm,@(disp,Rn) */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C09D088u: goto L_0C09D088; default: JUMPD(tv_); } }  /* 0C09E15C braf Rn */
L_0C09E170: BLKS(0x0C09E170u);
	r10 = 0xB4u; UPD(0x0C09E172u, 1);  /* 0C09E170 mov.w @(disp,pc),Rn */
	IF(0x0C09E172u); MACL = r13 * r10;  /* 0C09E172 mul.l Rm,Rn */
	r8 = 0xC286578u; UPD(0x0C09E176u, 3);  /* 0C09E174 mov.l @(disp,pc),Rn */
	IF(0x0C09E176u); r2 = MACL;  /* 0C09E176 sts macl,Rn */
	{ r2 += r8; /* slot add Rm,Rn */ UPD(0x0C09DDF0u, 4); goto L_0C09DDF0; }  /* 0C09E178 bra */
L_0C09E180: BLKS(0x0C09E180u);
	r8 = 0xC0A8CA0u; UPD(0x0C09E182u, 1);  /* 0C09E180 mov.l @(disp,pc),Rn */
	IF(0x0C09E182u); { u32 t_ = r8; PR = 0x0C09E186u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C09E186u); }  /* 0C09E182 jsr @Rn */
L_0C09E186: BLKS(0x0C09E186u);
	IF(0x0C09E186u); T = (s32)r0 >= 0;  /* 0C09E186 cmp/pz Rn */
	if (T) { UPD(0x0C09E192u, 4); goto L_0C09E192; }  /* 0C09E188 bt */
L_0C09E18A: BLKS(0x0C09E18Au);
	r1 = 0xFFFFEB90u; UPD(0x0C09E18Cu, 1);  /* 0C09E18A mov.w @(disp,pc),Rn */
	IF(0x0C09E18Cu); { u32 tv_ = (r1 + 0x0C09E190u); u32 t_ = PHYS(tv_); IF(0x0C09E18Eu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C09CD20u: goto L_0C09CD20; default: JUMPD(tv_); } }  /* 0C09E18C braf Rn */
L_0C09E192: BLKS(0x0C09E192u);
	r1 = 0xB4u; UPD(0x0C09E194u, 1);  /* 0C09E192 mov.w @(disp,pc),Rn */
	IF(0x0C09E194u); MACL = r0 * r1;  /* 0C09E194 mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C09E198u, 3);  /* 0C09E196 mov.l @(disp,pc),Rn */
	IF(0x0C09E198u); r7 = MACL;  /* 0C09E198 sts macl,Rn */
	r7 += r2;  /* 0C09E19A add Rm,Rn */
	r0 = R32(r7 + 0xCu); UPD(0x0C09E19Eu, 3);  /* 0C09E19C mov.l @(disp,Rm),Rn */
	T = r0 == 0x1Fu;  /* 0C09E19E cmp/eq #imm,r0 */
	{ u32 c_ = T; IF(0x0C09E1A2u); MACL = r13 * r1; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C09E200u, 5); goto L_0C09E200; } goto L_0C09E1A4; }  /* 0C09E1A0 bt/s */
L_0C09E1A4: BLKS(0x0C09E1A4u);
	r6 = 0x2000000u; UPD(0x0C09E1A6u, 3);  /* 0C09E1A4 mov.l @(disp,pc),Rn */
	IF(0x0C09E1A6u); r0 = MACL;  /* 0C09E1A6 sts macl,Rn */
	r0 += r2;  /* 0C09E1A8 add Rm,Rn */
	r10 = R32(r0); UPD(0x0C09E1ACu, 3);  /* 0C09E1AA mov.l @Rm,Rn */
	r1 = 0xFFFFFEFFu; UPD(0x0C09E1AEu, 1);  /* 0C09E1AC mov.w @(disp,pc),Rn */
	r12 = 0x86u; UPD(0x0C09E1B0u, 1);  /* 0C09E1AE mov.w @(disp,pc),Rn */
	r10 &= r1;  /* 0C09E1B0 and Rm,Rn */
	r5 = 0x100u; UPD(0x0C09E1B4u, 2);  /* 0C09E1B2 mov.w @(disp,pc),Rn */
	W32(r0 + 0x24u, r6); UPD(0x0C09E1B6u, 1);  /* 0C09E1B4 mov.l Rm,@(disp,Rn) */
	IF(0x0C09E1B6u); W16(r0 + r12, r5); UPD(0x0C09E1B8u, 1);  /* 0C09E1B6 mov.w Rm,@(r0,Rn) */
	r13 = 0xFFFFEA96u; UPD(0x0C09E1BAu, 1);  /* 0C09E1B8 mov.w @(disp,pc),Rn */
	IF(0x0C09E1BAu); { u32 tv_ = (r13 + 0x0C09E1BEu); u32 t_ = PHYS(tv_); W32(r0, r10); /* slot mov.l Rm,@Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C09CC54u: goto L_0C09CC54; default: JUMPD(tv_); } }  /* 0C09E1BA braf Rn */
L_0C09E200: BLKS(0x0C09E200u);
	IF(0x0C09E200u); MACL = r13 * r1;  /* 0C09E200 mul.l Rm,Rn */
	r3 = R32(r7 + 0x28u); UPD(0x0C09E204u, 3);  /* 0C09E202 mov.l @(disp,Rm),Rn */
	IF(0x0C09E204u); r8 = MACL;  /* 0C09E204 sts macl,Rn */
	r8 += r2;  /* 0C09E206 add Rm,Rn */
	r12 = R32(r8); UPD(0x0C09E20Au, 3);  /* 0C09E208 mov.l @Rm,Rn */
	r2 = 0xECFFFEFFu; UPD(0x0C09E20Cu, 1);  /* 0C09E20A mov.l @(disp,pc),Rn */
	r12 &= r2;  /* 0C09E20C and Rm,Rn */
	W32(r8, r12); UPD(0x0C09E210u, 2);  /* 0C09E20E mov.l Rm,@Rn */
	r0 = R32(r8 + 0x30u); UPD(0x0C09E212u, 1);  /* 0C09E210 mov.l @(disp,Rm),Rn */
	r5 = R32(r7); UPD(0x0C09E214u, 1);  /* 0C09E212 mov.l @Rm,Rn */
	r3 += r0;  /* 0C09E214 add Rm,Rn */
	r1 = 0x13000100u; UPD(0x0C09E218u, 2);  /* 0C09E216 mov.l @(disp,pc),Rn */
	r0 = r7;  /* 0C09E218 mov Rm,Rn */
	r11 = R32(r7 + 0x24u); UPD(0x0C09E21Cu, 2);  /* 0C09E21A mov.l @(disp,Rm),Rn */
	r5 &= r1;  /* 0C09E21C and Rm,Rn */
	r10 = R32(r8 + 0x2Cu); UPD(0x0C09E220u, 2);  /* 0C09E21E mov.l @(disp,Rm),Rn */
	r12 |= r5;  /* 0C09E220 or Rm,Rn */
	r4 = 0x9Fu; UPD(0x0C09E224u, 2);  /* 0C09E222 mov.w @(disp,pc),Rn */
	r11 += r10;  /* 0C09E224 add Rm,Rn */
	IF(0x0C09E226u); r9 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C09E228u, 2);  /* 0C09E226 mov.b @(r0,Rm),Rn */
	W32(r8, r12); UPD(0x0C09E22Au, 1);  /* 0C09E228 mov.l Rm,@Rn */
	T = (r9 & r9) == 0;  /* 0C09E22A tst Rm,Rn */
	W32(r8 + 0x24u, r11); UPD(0x0C09E22Eu, 2);  /* 0C09E22C mov.l Rm,@(disp,Rn) */
	{ u32 c_ = T; W32(r8 + 0x28u, r3); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C09E290u, 3); goto L_0C09E290; } UPD(0x0C09E232u, 1); goto L_0C09E232; }  /* 0C09E22E bt/s */
L_0C09E232: BLKS(0x0C09E232u);
	r4 = 0x86u; UPD(0x0C09E234u, 1);  /* 0C09E232 mov.w @(disp,pc),Rn */
	r4 += r8;  /* 0C09E234 add Rm,Rn */
	r3 = (u32)(s32)(s16)R16(r4); UPD(0x0C09E238u, 2);  /* 0C09E236 mov.w @Rm,Rn */
	r5 = 0x100u; UPD(0x0C09E23Au, 1);  /* 0C09E238 mov.w @(disp,pc),Rn */
	r6 = (u32)(s32)(s16)r3;  /* 0C09E23A exts.w Rm,Rn */
	T = r6 == r5;  /* 0C09E23C cmp/eq Rm,Rn */
	{ u32 c_ = T; r12 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C09E280u, 5); goto L_0C09E280; } UPD(0x0C09E242u, 1); goto L_0C09E242; }  /* 0C09E23E bt/s */
L_0C09E242: BLKS(0x0C09E242u);
	T = (s32)r6 > (s32)r5;  /* 0C09E242 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r7 = r3; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C09E24Eu, 4); goto L_0C09E24E; } goto L_0C09E248; }  /* 0C09E244 bf/s */
L_0C09E248: BLKS(0x0C09E248u);
	r7 += 0xFFFFFFFFu;  /* 0C09E248 add #imm,Rn */
	W16(r4, r7); UPD(0x0C09E24Cu, 3);  /* 0C09E24A mov.w Rm,@Rn */
	r3 = r7;  /* 0C09E24C mov Rm,Rn */
	UPD(0x0C09E24Eu, 1);
L_0C09E24E: BLKS(0x0C09E24Eu);
	r0 = 0xFFu; UPD(0x0C09E250u, 1);  /* 0C09E24E mov.w @(disp,pc),Rn */
	r5 = (u32)(s32)(s16)r3;  /* 0C09E250 exts.w Rm,Rn */
	T = (s32)r5 > (s32)r0;  /* 0C09E252 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C09E25Cu, 5); goto L_0C09E25C; }  /* 0C09E254 bt */
L_0C09E256: BLKS(0x0C09E256u);
	r2 = r3;  /* 0C09E256 mov Rm,Rn */
	r2 += 0x1u;  /* 0C09E258 add #imm,Rn */
	W16(r4, r2); UPD(0x0C09E25Cu, 3);  /* 0C09E25A mov.w Rm,@Rn */
L_0C09E25C: BLKS(0x0C09E25Cu);
	r6 = 0xB4u; UPD(0x0C09E25Eu, 1);  /* 0C09E25C mov.w @(disp,pc),Rn */
	r8 = 0x1Fu;  /* 0C09E25E mov #imm,Rn */
	IF(0x0C09E260u); MACL = r13 * r6;  /* 0C09E260 mul.l Rm,Rn */
	r11 = 0xC286578u; UPD(0x0C09E264u, 4);  /* 0C09E262 mov.l @(disp,pc),Rn */
	IF(0x0C09E264u); r2 = MACL;  /* 0C09E264 sts macl,Rn */
	r2 += r11;  /* 0C09E266 add Rm,Rn */
	r9 = 0x86u; UPD(0x0C09E26Au, 3);  /* 0C09E268 mov.w @(disp,pc),Rn */
	r0 = r2;  /* 0C09E26A mov Rm,Rn */
	IF(0x0C09E26Cu); r1 = (u32)(s32)(s16)R16(r0 + r9); UPD(0x0C09E26Eu, 2);  /* 0C09E26C mov.w @(r0,Rm),Rn */
	r1 += 0x8u;  /* 0C09E26E add #imm,Rn */
	IF(0x0C09E270u); r1 >>= 2;  /* 0C09E270 shlr2 Rn */
	IF(0x0C09E272u); r1 >>= 2;  /* 0C09E272 shlr2 Rn */
	r4 = 0xFFFFEE5Au; UPD(0x0C09E276u, 4);  /* 0C09E274 mov.w @(disp,pc),Rn */
	IF(0x0C09E276u); { u32 tv_ = (r4 + 0x0C09E27Au); u32 t_ = PHYS(tv_); r1 &= r8; /* slot and Rm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C09D0D4u: goto L_0C09D0D4; default: JUMPD(tv_); } }  /* 0C09E276 braf Rn */
L_0C09E280: BLKS(0x0C09E280u);
	r10 = 0x9Au; UPD(0x0C09E282u, 1);  /* 0C09E280 mov.w @(disp,pc),Rn */
	r0 = r7;  /* 0C09E282 mov Rm,Rn */
	{ IF(0x0C09E286u); W8(r0 + r10, r12); /* slot mov.b Rm,@(r0,Rn) */ UPD(0x0C09E242u, 4); goto L_0C09E242; }  /* 0C09E284 bra */
L_0C09E290: BLKS(0x0C09E290u);
	r11 = 0xC069BF0u; UPD(0x0C09E292u, 1);  /* 0C09E290 mov.l @(disp,pc),Rn */
	r9 = 0xC068F00u; UPD(0x0C09E294u, 1);  /* 0C09E292 mov.l @(disp,pc),Rn */
	IF(0x0C09E294u); { u32 t_ = r11; PR = 0x0C09E298u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069BF0, 0x0C069BF0u, 0x0C09E298u); }  /* 0C09E294 jsr @Rn */
L_0C09E298: BLKS(0x0C09E298u);
	r4 = r13;  /* 0C09E298 mov Rm,Rn */
	IF(0x0C09E29Au); { u32 t_ = r9; PR = 0x0C09E29Eu; r5 = 0x2u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C068F00, 0x0C068F00u, 0x0C09E29Eu); }  /* 0C09E29A jsr @Rn */
L_0C09E29E: BLKS(0x0C09E29Eu);
	r7 = 0x86u; UPD(0x0C09E2A0u, 1);  /* 0C09E29E mov.w @(disp,pc),Rn */
	r7 += r8;  /* 0C09E2A0 add Rm,Rn */
	r2 = (u32)(s32)(s16)R16(r7); UPD(0x0C09E2A4u, 2);  /* 0C09E2A2 mov.w @Rm,Rn */
	r6 = 0x160u; UPD(0x0C09E2A6u, 1);  /* 0C09E2A4 mov.w @(disp,pc),Rn */
	r8 = (u32)(s32)(s16)r2;  /* 0C09E2A6 exts.w Rm,Rn */
	r3 = (u32)(s32)(s16)r6;  /* 0C09E2A8 exts.w Rm,Rn */
	T = (s32)r8 > (s32)r3;  /* 0C09E2AA cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C09E2B2u, 6); goto L_0C09E2B2; }  /* 0C09E2AC bf */
L_0C09E2AE: BLKS(0x0C09E2AEu);
	W16(r7, r3); UPD(0x0C09E2B0u, 1);  /* 0C09E2AE mov.w Rm,@Rn */
	r2 = r6;  /* 0C09E2B0 mov Rm,Rn */
	UPD(0x0C09E2B2u, 1);
L_0C09E2B2: BLKS(0x0C09E2B2u);
	r6 = 0x9Fu; UPD(0x0C09E2B4u, 1);  /* 0C09E2B2 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r2;  /* 0C09E2B4 exts.w Rm,Rn */
	T = (s32)r4 > (s32)r6;  /* 0C09E2B6 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C09E25Cu, 5); goto L_0C09E25C; }  /* 0C09E2B8 bt */
L_0C09E2BA: BLKS(0x0C09E2BAu);
	r3 = 0xA0u; UPD(0x0C09E2BCu, 1);  /* 0C09E2BA mov.w @(disp,pc),Rn */
	{ W16(r7, r3); /* slot mov.w Rm,@Rn */ UPD(0x0C09E25Cu, 3); goto L_0C09E25C; }  /* 0C09E2BC bra */
L_0C09E2C0: BLKS(0x0C09E2C0u);
	r10 = 0xC0A8CA0u; UPD(0x0C09E2C2u, 1);  /* 0C09E2C0 mov.l @(disp,pc),Rn */
	IF(0x0C09E2C2u); { u32 t_ = r10; PR = 0x0C09E2C6u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C09E2C6u); }  /* 0C09E2C2 jsr @Rn */
L_0C09E2C6: BLKS(0x0C09E2C6u);
	IF(0x0C09E2C6u); T = (s32)r0 >= 0;  /* 0C09E2C6 cmp/pz Rn */
	if (!T) { UPD(0x0C09E36Cu, 4); goto L_0C09E36C; }  /* 0C09E2C8 bf */
L_0C09E2CA: BLKS(0x0C09E2CAu);
	r12 = 0xB4u; UPD(0x0C09E2CCu, 1);  /* 0C09E2CA mov.w @(disp,pc),Rn */
	IF(0x0C09E2CCu); MACL = r13 * r12;  /* 0C09E2CC mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C09E2D0u, 3);  /* 0C09E2CE mov.l @(disp,pc),Rn */
	IF(0x0C09E2D0u); r8 = MACL;  /* 0C09E2D0 sts macl,Rn */
	r8 += r9;  /* 0C09E2D2 add Rm,Rn */
	r6 = R32(r8); UPD(0x0C09E2D6u, 3);  /* 0C09E2D4 mov.l @Rm,Rn */
	IF(0x0C09E2D6u); MACL = r0 * r12;  /* 0C09E2D6 mul.l Rm,Rn */
	r2 = 0xECFFFEFFu; UPD(0x0C09E2DAu, 3);  /* 0C09E2D8 mov.l @(disp,pc),Rn */
	r5 = 0x84u; UPD(0x0C09E2DCu, 1);  /* 0C09E2DA mov.w @(disp,pc),Rn */
	r6 &= r2;  /* 0C09E2DC and Rm,Rn */
	W32(r8, r6); UPD(0x0C09E2E0u, 2);  /* 0C09E2DE mov.l Rm,@Rn */
	IF(0x0C09E2E0u); r12 = MACL;  /* 0C09E2E0 sts macl,Rn */
	r0 = r8;  /* 0C09E2E2 mov Rm,Rn */
	r12 += r9;  /* 0C09E2E4 add Rm,Rn */
	r0 += r5;  /* 0C09E2E6 add Rm,Rn */
	r1 = 0x13000100u; UPD(0x0C09E2EAu, 5);  /* 0C09E2E8 mov.l @(disp,pc),Rn */
	r5 += r12;  /* 0C09E2EA add Rm,Rn */
	r4 = R32(r12); UPD(0x0C09E2EEu, 2);  /* 0C09E2EC mov.l @Rm,Rn */
	r5 += 0x2u;  /* 0C09E2EE add #imm,Rn */
	r11 = 0xC069B20u; UPD(0x0C09E2F2u, 2);  /* 0C09E2F0 mov.l @(disp,pc),Rn */
	r4 &= r1;  /* 0C09E2F2 and Rm,Rn */
	r7 = (u32)(s32)(s16)R16(r5); UPD(0x0C09E2F6u, 2);  /* 0C09E2F4 mov.w @Rm,Rn */
	r6 |= r4;  /* 0C09E2F6 or Rm,Rn */
	r0 += 0x2u;  /* 0C09E2F8 add #imm,Rn */
	r10 = r7;  /* 0C09E2FA mov Rm,Rn */
	r4 = r7;  /* 0C09E2FC mov Rm,Rn */
	W32(r8, r6); UPD(0x0C09E300u, 5);  /* 0C09E2FE mov.l Rm,@Rn */
	W16(r0, r7); UPD(0x0C09E302u, 1);  /* 0C09E300 mov.w Rm,@Rn */
	IF(0x0C09E302u); { u32 t_ = r11; PR = 0x0C09E306u; r5 = R32(r8 + 0x2Cu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C09E306u); }  /* 0C09E302 jsr @Rn */
L_0C09E306: BLKS(0x0C09E306u);
	r3 = R32(r12 + 0x24u); UPD(0x0C09E308u, 1);  /* 0C09E306 mov.l @(disp,Rm),Rn */
	r4 = r10;  /* 0C09E308 mov Rm,Rn */
	r9 = 0xC069AF0u; UPD(0x0C09E30Cu, 2);  /* 0C09E30A mov.l @(disp,pc),Rn */
	r3 += r0;  /* 0C09E30C add Rm,Rn */
	W32(r8 + 0x24u, r3); UPD(0x0C09E310u, 2);  /* 0C09E30E mov.l Rm,@(disp,Rn) */
	IF(0x0C09E310u); { u32 t_ = r9; PR = 0x0C09E314u; r5 = R32(r8 + 0x2Cu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C09E314u); }  /* 0C09E310 jsr @Rn */
L_0C09E314: BLKS(0x0C09E314u);
	r4 = R32(r12 + 0x28u); UPD(0x0C09E316u, 1);  /* 0C09E314 mov.l @(disp,Rm),Rn */
	r4 += r0;  /* 0C09E316 add Rm,Rn */
	W32(r8 + 0x28u, r4); UPD(0x0C09E31Au, 2);  /* 0C09E318 mov.l Rm,@(disp,Rn) */
	r1 = R32(r12 + 0xCu); UPD(0x0C09E31Cu, 1);  /* 0C09E31A mov.l @(disp,Rm),Rn */
L_0C09E31C: BLKS(0x0C09E31Cu);
	r4 = 0xFFFFED66u; UPD(0x0C09E31Eu, 1);  /* 0C09E31C mov.w @(disp,pc),Rn */
	IF(0x0C09E31Eu); { u32 tv_ = (r4 + 0x0C09E322u); u32 t_ = PHYS(tv_); W32(r8 + 0xCu, r1); /* slot mov.l Rm,@(disp,Rn) */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C09D088u: goto L_0C09D088; default: JUMPD(tv_); } }  /* 0C09E31E braf Rn */
L_0C09E360: BLKS(0x0C09E360u);
	r8 = 0xC0A8CA0u; UPD(0x0C09E362u, 1);  /* 0C09E360 mov.l @(disp,pc),Rn */
	IF(0x0C09E362u); { u32 t_ = r8; PR = 0x0C09E366u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C09E366u); }  /* 0C09E362 jsr @Rn */
L_0C09E366: BLKS(0x0C09E366u);
	IF(0x0C09E366u); T = (s32)r0 >= 0;  /* 0C09E366 cmp/pz Rn */
	{ u32 c_ = T; r10 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C09E374u, 4); goto L_0C09E374; } UPD(0x0C09E36Cu, 1); goto L_0C09E36C; }  /* 0C09E368 bt/s */
L_0C09E36C: BLKS(0x0C09E36Cu);
	r1 = 0xFFFFE9AEu; UPD(0x0C09E36Eu, 1);  /* 0C09E36C mov.w @(disp,pc),Rn */
	IF(0x0C09E36Eu); { u32 tv_ = (r1 + 0x0C09E372u); u32 t_ = PHYS(tv_); IF(0x0C09E370u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C09CD20u: goto L_0C09CD20; default: JUMPD(tv_); } }  /* 0C09E36E braf Rn */
L_0C09E374: BLKS(0x0C09E374u);
	r0 = 0xB4u; UPD(0x0C09E376u, 1);  /* 0C09E374 mov.w @(disp,pc),Rn */
	IF(0x0C09E376u); MACL = r13 * r0;  /* 0C09E376 mul.l Rm,Rn */
	r11 = 0xC286578u; UPD(0x0C09E37Au, 3);  /* 0C09E378 mov.l @(disp,pc),Rn */
	IF(0x0C09E37Au); r8 = MACL;  /* 0C09E37A sts macl,Rn */
	r8 += r11;  /* 0C09E37C add Rm,Rn */
	r5 = R32(r8); UPD(0x0C09E380u, 3);  /* 0C09E37E mov.l @Rm,Rn */
	IF(0x0C09E380u); MACL = r10 * r0;  /* 0C09E380 mul.l Rm,Rn */
	r9 = 0xECFFFEFFu; UPD(0x0C09E384u, 3);  /* 0C09E382 mov.l @(disp,pc),Rn */
	r5 &= r9;  /* 0C09E384 and Rm,Rn */
	W32(r8, r5); UPD(0x0C09E388u, 2);  /* 0C09E386 mov.l Rm,@Rn */
	IF(0x0C09E388u); r9 = MACL;  /* 0C09E388 sts macl,Rn */
	r9 += r11;  /* 0C09E38A add Rm,Rn */
	r6 = R32(r9); UPD(0x0C09E38Eu, 3);  /* 0C09E38C mov.l @Rm,Rn */
	r4 = 0x13000100u; UPD(0x0C09E390u, 1);  /* 0C09E38E mov.l @(disp,pc),Rn */
	r6 &= r4;  /* 0C09E390 and Rm,Rn */
	r5 |= r6;  /* 0C09E392 or Rm,Rn */
	W32(r8, r5); UPD(0x0C09E396u, 3);  /* 0C09E394 mov.l Rm,@Rn */
	r8 += 0x7Eu;  /* 0C09E396 add #imm,Rn */
	r7 = (u32)(s32)(s16)R16(r8); UPD(0x0C09E39Au, 2);  /* 0C09E398 mov.w @Rm,Rn */
	IF(0x0C09E39Au); MACL = r7 * r0;  /* 0C09E39A mul.l Rm,Rn */
	IF(0x0C09E39Cu); r3 = MACL;  /* 0C09E39C sts macl,Rn */
	r3 += r11;  /* 0C09E39E add Rm,Rn */
	r3 += 0x3Cu;  /* 0C09E3A0 add #imm,Rn */
	r10 = (u32)(s32)(s16)R16(r3); UPD(0x0C09E3A4u, 6);  /* 0C09E3A2 mov.w @Rm,Rn */
	T = (r10 & r10) == 0;  /* 0C09E3A4 tst Rm,Rn */
	{ u32 c_ = T; r8 += 0xFFFFFF82u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C09E428u, 4); goto L_0C09E428; } goto L_0C09E3AA; }  /* 0C09E3A6 bt/s */
L_0C09E3AA: BLKS(0x0C09E3AAu);
	r0 = 0x84u; UPD(0x0C09E3ACu, 2);  /* 0C09E3AA mov.w @(disp,pc),Rn */
	r10 = r8;  /* 0C09E3AC mov Rm,Rn */
	r10 += r0;  /* 0C09E3AE add Rm,Rn */
	r0 += r9;  /* 0C09E3B0 add Rm,Rn */
	r0 += 0x2u;  /* 0C09E3B2 add #imm,Rn */
	r12 = (u32)(s32)(s16)R16(r0); UPD(0x0C09E3B6u, 5);  /* 0C09E3B4 mov.w @Rm,Rn */
	r10 += 0x2u;  /* 0C09E3B6 add #imm,Rn */
	W16(r10, r12); UPD(0x0C09E3BAu, 2);  /* 0C09E3B8 mov.w Rm,@Rn */
	r11 = r12;  /* 0C09E3BA mov Rm,Rn */
	r12 = 0xC069B20u; UPD(0x0C09E3BEu, 2);  /* 0C09E3BC mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C09E3BE mov Rm,Rn */
	IF(0x0C09E3C0u); { u32 t_ = r12; PR = 0x0C09E3C4u; r5 = R32(r8 + 0x2Cu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C09E3C4u); }  /* 0C09E3C0 jsr @Rn */
L_0C09E3C4: BLKS(0x0C09E3C4u);
	r5 = R32(r9 + 0x24u); UPD(0x0C09E3C6u, 1);  /* 0C09E3C4 mov.l @(disp,Rm),Rn */
	r4 = r11;  /* 0C09E3C6 mov Rm,Rn */
	r5 += r0;  /* 0C09E3C8 add Rm,Rn */
	r7 = 0xC069AF0u; UPD(0x0C09E3CCu, 3);  /* 0C09E3CA mov.l @(disp,pc),Rn */
	W32(r8 + 0x24u, r5); UPD(0x0C09E3CEu, 1);  /* 0C09E3CC mov.l Rm,@(disp,Rn) */
	IF(0x0C09E3CEu); { u32 t_ = r7; PR = 0x0C09E3D2u; r5 = R32(r8 + 0x2Cu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C09E3D2u); }  /* 0C09E3CE jsr @Rn */
L_0C09E3D2: BLKS(0x0C09E3D2u);
	r11 = R32(r9 + 0x28u); UPD(0x0C09E3D4u, 1);  /* 0C09E3D2 mov.l @(disp,Rm),Rn */
	r4 = r13;  /* 0C09E3D4 mov Rm,Rn */
	r2 = 0xC0A8AE0u; UPD(0x0C09E3D8u, 2);  /* 0C09E3D6 mov.l @(disp,pc),Rn */
	r11 += r0;  /* 0C09E3D8 add Rm,Rn */
	r3 = R32(r9 + 0xCu); UPD(0x0C09E3DCu, 2);  /* 0C09E3DA mov.l @(disp,Rm),Rn */
	W32(r8 + 0x28u, r11); UPD(0x0C09E3DEu, 1);  /* 0C09E3DC mov.l Rm,@(disp,Rn) */
	IF(0x0C09E3DEu); { u32 t_ = r2; PR = 0x0C09E3E2u; W32(r8 + 0xCu, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C09E3E2u); }  /* 0C09E3DE jsr @Rn */
L_0C09E3E2: BLKS(0x0C09E3E2u);
	r4 = r13;  /* 0C09E3E2 mov Rm,Rn */
	r13 = 0xC0BC1B0u; UPD(0x0C09E3E6u, 2);  /* 0C09E3E4 mov.l @(disp,pc),Rn */
	r5 = 0x5Au;  /* 0C09E3E6 mov #imm,Rn */
	IF(0x0C09E3E8u); { u32 t_ = r13; PR = 0x0C09E3ECu; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C09E3ECu); }  /* 0C09E3E8 jsr @Rn */
L_0C09E3EC: BLKS(0x0C09E3ECu);
	T = (r0 & r0) == 0;  /* 0C09E3EC tst Rm,Rn */
	if (T) { UPD(0x0C09E428u, 4); goto L_0C09E428; }  /* 0C09E3EE bt */
L_0C09E3F0: BLKS(0x0C09E3F0u);
	r9 = (u32)(s32)(s16)R16(r10); UPD(0x0C09E3F2u, 1);  /* 0C09E3F0 mov.w @Rm,Rn */
	r5 = 0x80000u; UPD(0x0C09E3F4u, 1);  /* 0C09E3F2 mov.l @(disp,pc),Rn */
	IF(0x0C09E3F4u); { u32 t_ = r12; PR = 0x0C09E3F8u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C09E3F8u); }  /* 0C09E3F4 jsr @Rn */
L_0C09E3F8: BLKS(0x0C09E3F8u);
	r6 = R32(r8 + 0x24u); UPD(0x0C09E3FAu, 1);  /* 0C09E3F8 mov.l @(disp,Rm),Rn */
	r4 = r9;  /* 0C09E3FA mov Rm,Rn */
	r1 = 0xC069AF0u; UPD(0x0C09E3FEu, 2);  /* 0C09E3FC mov.l @(disp,pc),Rn */
	r6 += r0;  /* 0C09E3FE add Rm,Rn */
	r5 = 0xA0000u; UPD(0x0C09E402u, 2);  /* 0C09E400 mov.l @(disp,pc),Rn */
	IF(0x0C09E402u); { u32 t_ = r1; PR = 0x0C09E406u; W32(r14, r6); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C09E406u); }  /* 0C09E402 jsr @Rn */
L_0C09E406: BLKS(0x0C09E406u);
	r6 = R32(r8 + 0x28u); UPD(0x0C09E408u, 1);  /* 0C09E406 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C09E408 add #imm,Rn */
	r13 = 0x20000u; UPD(0x0C09E40Cu, 2);  /* 0C09E40A mov.l @(disp,pc),Rn */
	r6 += r0;  /* 0C09E40C add Rm,Rn */
	W32(r15, r13); UPD(0x0C09E410u, 2);  /* 0C09E40E mov.l Rm,@Rn */
	r7 = r9;  /* 0C09E410 mov Rm,Rn */
	r0 = 0xA1u; UPD(0x0C09E414u, 2);  /* 0C09E412 mov.w @(disp,pc),Rn */
	IF(0x0C09E414u); r0 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C09E416u, 1);  /* 0C09E414 mov.b @(r0,Rm),Rn */
	r4 = 0xC1CB8B8u; UPD(0x0C09E418u, 1);  /* 0C09E416 mov.l @(disp,pc),Rn */
	IF(0x0C09E418u); r0 <<= 2;  /* 0C09E418 shll2 Rn */
	IF(0x0C09E41Au); r10 = R32(r0 + r4); UPD(0x0C09E41Cu, 2);  /* 0C09E41A mov.l @(r0,Rm),Rn */
	r8 = 0xC0BA970u; UPD(0x0C09E41Eu, 1);  /* 0C09E41C mov.l @(disp,pc),Rn */
	r4 = 0x3u;  /* 0C09E41E mov #imm,Rn */
	W32(r15 + 0x4u, r10); UPD(0x0C09E422u, 2);  /* 0C09E420 mov.l Rm,@(disp,Rn) */
	IF(0x0C09E422u); { u32 t_ = r8; PR = 0x0C09E426u; r5 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BA970, 0x0C0BA970u, 0x0C09E426u); }  /* 0C09E422 jsr @Rn */
L_0C09E426: BLKS(0x0C09E426u);
	r15 += 0x8u;  /* 0C09E426 add #imm,Rn */
	UPD(0x0C09E428u, 1);
L_0C09E428: BLKS(0x0C09E428u);
	r13 = 0xFFFFE828u; UPD(0x0C09E42Au, 1);  /* 0C09E428 mov.w @(disp,pc),Rn */
	IF(0x0C09E42Au); { u32 tv_ = (r13 + 0x0C09E42Eu); u32 t_ = PHYS(tv_); r14 += 0x18u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C09CC56u: goto L_0C09CC56; default: JUMPD(tv_); } }  /* 0C09E42A braf Rn */
L_0C09E430: BLKS(0x0C09E430u);
	r11 = 0xC0A8BF0u; UPD(0x0C09E432u, 1);  /* 0C09E430 mov.l @(disp,pc),Rn */
	IF(0x0C09E432u); { u32 t_ = r11; PR = 0x0C09E436u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8BF0, 0x0C0A8BF0u, 0x0C09E436u); }  /* 0C09E432 jsr @Rn */
L_0C09E436: BLKS(0x0C09E436u);
	IF(0x0C09E436u); T = (s32)r0 >= 0;  /* 0C09E436 cmp/pz Rn */
	if (T) { UPD(0x0C09E442u, 4); goto L_0C09E442; }  /* 0C09E438 bt */
L_0C09E43A: BLKS(0x0C09E43Au);
	r1 = 0xFFFFE8E0u; UPD(0x0C09E43Cu, 1);  /* 0C09E43A mov.w @(disp,pc),Rn */
	IF(0x0C09E43Cu); { u32 tv_ = (r1 + 0x0C09E440u); u32 t_ = PHYS(tv_); IF(0x0C09E43Eu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C09CD20u: goto L_0C09CD20; default: JUMPD(tv_); } }  /* 0C09E43C braf Rn */
L_0C09E442: BLKS(0x0C09E442u);
	r6 = 0xB4u; UPD(0x0C09E444u, 1);  /* 0C09E442 mov.w @(disp,pc),Rn */
	IF(0x0C09E444u); MACL = r13 * r6;  /* 0C09E444 mul.l Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C09E448u, 3);  /* 0C09E446 mov.l @(disp,pc),Rn */
	IF(0x0C09E448u); r12 = MACL;  /* 0C09E448 sts macl,Rn */
	IF(0x0C09E44Au); MACL = r0 * r6;  /* 0C09E44A mul.l Rm,Rn */
	r12 += r5;  /* 0C09E44C add Rm,Rn */
	r2 = R32(r12 + 0x30u); UPD(0x0C09E450u, 5);  /* 0C09E44E mov.l @(disp,Rm),Rn */
	IF(0x0C09E450u); r8 = MACL;  /* 0C09E450 sts macl,Rn */
	r8 += r5;  /* 0C09E452 add Rm,Rn */
	r9 = R32(r8 + 0x24u); UPD(0x0C09E456u, 3);  /* 0C09E454 mov.l @(disp,Rm),Rn */
	r10 = R32(r12 + 0x2Cu); UPD(0x0C09E458u, 1);  /* 0C09E456 mov.l @(disp,Rm),Rn */
	r0 = R32(r8 + 0x28u); UPD(0x0C09E45Au, 1);  /* 0C09E458 mov.l @(disp,Rm),Rn */
	r9 += r10;  /* 0C09E45A add Rm,Rn */
	r0 += r2;  /* 0C09E45C add Rm,Rn */
	W32(r12 + 0x24u, r9); UPD(0x0C09E460u, 3);  /* 0C09E45E mov.l Rm,@(disp,Rn) */
	W32(r12 + 0x28u, r0); UPD(0x0C09E462u, 1);  /* 0C09E460 mov.l Rm,@(disp,Rn) */
	r12 += 0x7Eu;  /* 0C09E462 add #imm,Rn */
	r3 = (u32)(s32)(s16)R16(r12); UPD(0x0C09E466u, 2);  /* 0C09E464 mov.w @Rm,Rn */
	r2 = 0xA0u; UPD(0x0C09E468u, 1);  /* 0C09E466 mov.w @(disp,pc),Rn */
	r12 += 0xFFFFFF82u;  /* 0C09E468 add #imm,Rn */
	r12 += r2;  /* 0C09E46A add Rm,Rn */
	r12 += 0x2u;  /* 0C09E46C add #imm,Rn */
	r7 = (u32)(s32)(s8)R8(r12); UPD(0x0C09E470u, 4);  /* 0C09E46E mov.b @Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C09E470 tst Rm,Rn */
	{ u32 c_ = !T; IF(0x0C09E474u); MACL = r3 * r6; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C09E47Au, 5); goto L_0C09E47A; } goto L_0C09E476; }  /* 0C09E472 bf/s */
L_0C09E476: BLKS(0x0C09E476u);
	{ IF(0x0C09E478u); r1 = MACL; /* slot sts macl,Rn */ UPD(0x0C09E570u, 5); goto L_0C09E570; }  /* 0C09E476 bra */
L_0C09E47A: BLKS(0x0C09E47Au);
	IF(0x0C09E47Au); MACL = r3 * r6;  /* 0C09E47A mul.l Rm,Rn */
	IF(0x0C09E47Cu); r1 = MACL;  /* 0C09E47C sts macl,Rn */
	r1 += r5;  /* 0C09E47E add Rm,Rn */
	r1 += r2;  /* 0C09E480 add Rm,Rn */
	r1 += 0x2u;  /* 0C09E482 add #imm,Rn */
	UPD(0x0C09E484u, 6);
L_0C09E484: BLKS(0x0C09E484u);
	r5 = 0xB4u; UPD(0x0C09E486u, 1);  /* 0C09E484 mov.w @(disp,pc),Rn */
	r4 = 0x8u;  /* 0C09E486 mov #imm,Rn */
	IF(0x0C09E488u); MACL = r13 * r5;  /* 0C09E488 mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C09E48Cu, 4);  /* 0C09E48A mov.l @(disp,pc),Rn */
	IF(0x0C09E48Cu); r9 = MACL;  /* 0C09E48C sts macl,Rn */
	r9 += r3;  /* 0C09E48E add Rm,Rn */
	r12 = (u32)(s32)(s8)R8(r1); UPD(0x0C09E492u, 3);  /* 0C09E490 mov.b @Rm,Rn */
	r8 = R32(r9 + 0xCu); UPD(0x0C09E494u, 1);  /* 0C09E492 mov.l @(disp,Rm),Rn */
	T = (r8 & r8) == 0;  /* 0C09E494 tst Rm,Rn */
	{ u32 c_ = T; r12 &= r4; /* slot and Rm,Rn */ if (c_) { UPD(0x0C09E530u, 4); goto L_0C09E530; } goto L_0C09E49A; }  /* 0C09E496 bt/s */
L_0C09E49A: BLKS(0x0C09E49Au);
	r0 = r8;  /* 0C09E49A mov Rm,Rn */
	T = r0 == 0x7u;  /* 0C09E49C cmp/eq #imm,r0 */
	if (T) { UPD(0x0C09E4D0u, 6); goto L_0C09E4D0; }  /* 0C09E49E bt */
L_0C09E4A0: BLKS(0x0C09E4A0u);
	r9 = 0xB4u; UPD(0x0C09E4A2u, 1);  /* 0C09E4A0 mov.w @(disp,pc),Rn */
	IF(0x0C09E4A2u); MACL = r13 * r9;  /* 0C09E4A2 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C09E4A6u, 3);  /* 0C09E4A4 mov.l @(disp,pc),Rn */
	IF(0x0C09E4A6u); r2 = MACL;  /* 0C09E4A6 sts macl,Rn */
	r3 = 0x99u; UPD(0x0C09E4AAu, 2);  /* 0C09E4A8 mov.w @(disp,pc),Rn */
	r2 += r0;  /* 0C09E4AA add Rm,Rn */
	r3 += r2;  /* 0C09E4AC add Rm,Rn */
	r8 = (u32)(s32)(s8)R8(r3); UPD(0x0C09E4B0u, 3);  /* 0C09E4AE mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C09E4B0 add #imm,Rn */
	r0 = r8 & 0xFF;  /* 0C09E4B2 extu.b Rm,Rn */
	T = r0 == 0x1u;  /* 0C09E4B4 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r3, r8); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C09E428u, 6); goto L_0C09E428; } UPD(0x0C09E4BAu, 1); goto L_0C09E4BA; }  /* 0C09E4B6 bf/s */
L_0C09E4BA: BLKS(0x0C09E4BAu);
	r10 = 0x0u;  /* 0C09E4BA mov #imm,Rn */
	r1 = 0xFFFFEC0Eu; UPD(0x0C09E4BEu, 2);  /* 0C09E4BC mov.w @(disp,pc),Rn */
	IF(0x0C09E4BEu); { u32 tv_ = (r1 + 0x0C09E4C2u); u32 t_ = PHYS(tv_); W8(r3, r10); /* slot mov.b Rm,@Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C09D0D0u: goto L_0C09D0D0; default: JUMPD(tv_); } }  /* 0C09E4BE braf Rn */
L_0C09E4D0: BLKS(0x0C09E4D0u);
	r2 = 0x99u; UPD(0x0C09E4D2u, 1);  /* 0C09E4D0 mov.w @(disp,pc),Rn */
	r2 += r9;  /* 0C09E4D2 add Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r2); UPD(0x0C09E4D6u, 2);  /* 0C09E4D4 mov.b @Rm,Rn */
	r3 += 0x1u;  /* 0C09E4D6 add #imm,Rn */
	r0 = r3 & 0xFF;  /* 0C09E4D8 extu.b Rm,Rn */
	T = r0 == 0x1Eu;  /* 0C09E4DA cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r2, r3); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C09E428u, 6); goto L_0C09E428; } UPD(0x0C09E4E0u, 1); goto L_0C09E4E0; }  /* 0C09E4DC bf/s */
L_0C09E4E0: BLKS(0x0C09E4E0u);
	r5 = 0x0u;  /* 0C09E4E0 mov #imm,Rn */
	W8(r2, r5); UPD(0x0C09E4E4u, 2);  /* 0C09E4E2 mov.b Rm,@Rn */
	{ r1 = 0x6u; /* slot mov #imm,Rn */ UPD(0x0C09E15Au, 3); goto L_0C09E15A; }  /* 0C09E4E4 bra */
L_0C09E530: BLKS(0x0C09E530u);
	T = (r12 & r12) == 0;  /* 0C09E530 tst Rm,Rn */
	if (!T) { UPD(0x0C09E53Eu, 4); goto L_0C09E53E; }  /* 0C09E532 bf */
L_0C09E534: BLKS(0x0C09E534u);
	r14 += 0x18u;  /* 0C09E534 add #imm,Rn */
	r13 = 0xFFFFE71Au; UPD(0x0C09E538u, 2);  /* 0C09E536 mov.w @(disp,pc),Rn */
	IF(0x0C09E538u); { u32 tv_ = (r13 + 0x0C09E53Cu); u32 t_ = PHYS(tv_); IF(0x0C09E53Au); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C09CC56u: goto L_0C09CC56; default: JUMPD(tv_); } }  /* 0C09E538 braf Rn */
L_0C09E53E: BLKS(0x0C09E53Eu);
	r12 = 0xC062780u; UPD(0x0C09E540u, 1);  /* 0C09E53E mov.l @(disp,pc),Rn */
	r2 = 0x1u;  /* 0C09E540 mov #imm,Rn */
	r0 = 0x88u; UPD(0x0C09E544u, 2);  /* 0C09E542 mov.w @(disp,pc),Rn */
	r4 = 0x3u;  /* 0C09E544 mov #imm,Rn */
	IF(0x0C09E546u); { u32 t_ = r12; PR = 0x0C09E54Au; IF(0x0C09E548u); W16(r0 + r9, r2); /* slot mov.w Rm,@(r0,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C09E54Au); }  /* 0C09E546 jsr @Rn */
L_0C09E54A: BLKS(0x0C09E54Au);
	r7 = 0xC1CB8C4u; UPD(0x0C09E54Cu, 1);  /* 0C09E54A mov.l @(disp,pc),Rn */
	IF(0x0C09E54Cu); r0 <<= 2;  /* 0C09E54C shll2 Rn */
	r6 = 0xC0A8B10u; UPD(0x0C09E550u, 2);  /* 0C09E54E mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C09E550 mov Rm,Rn */
	IF(0x0C09E552u); r11 = R32(r0 + r7); UPD(0x0C09E554u, 2);  /* 0C09E552 mov.l @(r0,Rm),Rn */
	W32(r9 + 0xCu, r8); UPD(0x0C09E556u, 1);  /* 0C09E554 mov.l Rm,@(disp,Rn) */
	IF(0x0C09E556u); { u32 t_ = r6; PR = 0x0C09E55Au; W32(r9 + 0x8u, r11); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B10, 0x0C0A8B10u, 0x0C09E55Au); }  /* 0C09E556 jsr @Rn */
L_0C09E55A: BLKS(0x0C09E55Au);
	r13 = R32(r9); UPD(0x0C09E55Cu, 1);  /* 0C09E55A mov.l @Rm,Rn */
	r4 = 0x75u;  /* 0C09E55C mov #imm,Rn */
	r1 = 0x3004000u; UPD(0x0C09E560u, 2);  /* 0C09E55E mov.l @(disp,pc),Rn */
	r13 |= r1;  /* 0C09E560 or Rm,Rn */
	r1 = 0xFFFFE8BAu; UPD(0x0C09E564u, 2);  /* 0C09E562 mov.w @(disp,pc),Rn */
	IF(0x0C09E564u); { u32 tv_ = (r1 + 0x0C09E568u); u32 t_ = PHYS(tv_); W32(r9, r13); /* slot mov.l Rm,@Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C09CE22u: goto L_0C09CE22; default: JUMPD(tv_); } }  /* 0C09E564 braf Rn */
L_0C09E570: BLKS(0x0C09E570u);
	r1 += r5;  /* 0C09E570 add Rm,Rn */
	r1 += r2;  /* 0C09E572 add Rm,Rn */
	{ r1 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C09E484u, 5); goto L_0C09E484; }  /* 0C09E574 bra */
L_0C09E580: BLKS(0x0C09E580u);
	r8 = 0xC0A8BF0u; UPD(0x0C09E582u, 1);  /* 0C09E580 mov.l @(disp,pc),Rn */
	IF(0x0C09E582u); { u32 t_ = r8; PR = 0x0C09E586u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8BF0, 0x0C0A8BF0u, 0x0C09E586u); }  /* 0C09E582 jsr @Rn */
L_0C09E586: BLKS(0x0C09E586u);
	IF(0x0C09E586u); T = (s32)r0 >= 0;  /* 0C09E586 cmp/pz Rn */
	{ u32 c_ = T; r10 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C09E590u, 4); goto L_0C09E590; } goto L_0C09E58C; }  /* 0C09E588 bt/s */
L_0C09E58C: BLKS(0x0C09E58Cu);
	{ IF(0x0C09E58Eu); ; /* slot nop */ UPD(0x0C09E750u, 4); goto L_0C09E750; }  /* 0C09E58C bra */
L_0C09E590: BLKS(0x0C09E590u);
	r6 = 0xB4u; UPD(0x0C09E592u, 1);  /* 0C09E590 mov.w @(disp,pc),Rn */
	IF(0x0C09E592u); MACL = r13 * r6;  /* 0C09E592 mul.l Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C09E596u, 3);  /* 0C09E594 mov.l @(disp,pc),Rn */
	IF(0x0C09E596u); r11 = MACL;  /* 0C09E596 sts macl,Rn */
	IF(0x0C09E598u); MACL = r0 * r6;  /* 0C09E598 mul.l Rm,Rn */
	r11 += r5;  /* 0C09E59A add Rm,Rn */
	r2 = R32(r11 + 0x30u); UPD(0x0C09E59Eu, 5);  /* 0C09E59C mov.l @(disp,Rm),Rn */
	IF(0x0C09E59Eu); r4 = MACL;  /* 0C09E59E sts macl,Rn */
	r4 += r5;  /* 0C09E5A0 add Rm,Rn */
	r12 = R32(r4 + 0x24u); UPD(0x0C09E5A4u, 3);  /* 0C09E5A2 mov.l @(disp,Rm),Rn */
	r7 = R32(r11 + 0x2Cu); UPD(0x0C09E5A6u, 1);  /* 0C09E5A4 mov.l @(disp,Rm),Rn */
	r1 = R32(r4 + 0x28u); UPD(0x0C09E5A8u, 1);  /* 0C09E5A6 mov.l @(disp,Rm),Rn */
	r12 += r7;  /* 0C09E5A8 add Rm,Rn */
	r1 += r2;  /* 0C09E5AA add Rm,Rn */
	W32(r11 + 0x24u, r12); UPD(0x0C09E5AEu, 3);  /* 0C09E5AC mov.l Rm,@(disp,Rn) */
	W32(r11 + 0x28u, r1); UPD(0x0C09E5B0u, 1);  /* 0C09E5AE mov.l Rm,@(disp,Rn) */
	r11 += 0x7Eu;  /* 0C09E5B0 add #imm,Rn */
	r3 = (u32)(s32)(s16)R16(r11); UPD(0x0C09E5B4u, 2);  /* 0C09E5B2 mov.w @Rm,Rn */
	r2 = 0xA0u; UPD(0x0C09E5B6u, 1);  /* 0C09E5B4 mov.w @(disp,pc),Rn */
	r11 += 0xFFFFFF82u;  /* 0C09E5B6 add #imm,Rn */
	r11 += r2;  /* 0C09E5B8 add Rm,Rn */
	r11 += 0x2u;  /* 0C09E5BA add #imm,Rn */
	r9 = (u32)(s32)(s8)R8(r11); UPD(0x0C09E5BEu, 4);  /* 0C09E5BC mov.b @Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C09E5BE tst Rm,Rn */
	{ u32 c_ = !T; IF(0x0C09E5C2u); MACL = r3 * r6; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C09E5C8u, 5); goto L_0C09E5C8; } goto L_0C09E5C4; }  /* 0C09E5C0 bf/s */
L_0C09E5C4: BLKS(0x0C09E5C4u);
	{ IF(0x0C09E5C6u); r1 = MACL; /* slot sts macl,Rn */ UPD(0x0C09E740u, 5); goto L_0C09E740; }  /* 0C09E5C4 bra */
L_0C09E5C8: BLKS(0x0C09E5C8u);
	IF(0x0C09E5C8u); MACL = r3 * r6;  /* 0C09E5C8 mul.l Rm,Rn */
	IF(0x0C09E5CAu); r1 = MACL;  /* 0C09E5CA sts macl,Rn */
	r1 += r5;  /* 0C09E5CC add Rm,Rn */
	r1 += r2;  /* 0C09E5CE add Rm,Rn */
	r1 += 0x2u;  /* 0C09E5D0 add #imm,Rn */
	UPD(0x0C09E5D2u, 6);
L_0C09E5D2: BLKS(0x0C09E5D2u);
	r11 = 0xB4u; UPD(0x0C09E5D4u, 1);  /* 0C09E5D2 mov.w @(disp,pc),Rn */
	r6 = 0x8u;  /* 0C09E5D4 mov #imm,Rn */
	IF(0x0C09E5D6u); MACL = r13 * r11;  /* 0C09E5D6 mul.l Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C09E5DAu, 4);  /* 0C09E5D8 mov.l @(disp,pc),Rn */
	IF(0x0C09E5DAu); r8 = MACL;  /* 0C09E5DA sts macl,Rn */
	r9 = 0x9Cu; UPD(0x0C09E5DEu, 2);  /* 0C09E5DC mov.w @(disp,pc),Rn */
	r8 += r5;  /* 0C09E5DE add Rm,Rn */
	r9 += r8;  /* 0C09E5E0 add Rm,Rn */
	r12 = (u32)(s32)(s8)R8(r1); UPD(0x0C09E5E4u, 3);  /* 0C09E5E2 mov.b @Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r9); UPD(0x0C09E5E6u, 1);  /* 0C09E5E4 mov.b @Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C09E5E6 tst Rm,Rn */
	{ u32 c_ = !T; r12 &= r6; /* slot and Rm,Rn */ if (c_) { UPD(0x0C09E690u, 4); goto L_0C09E690; } goto L_0C09E5EC; }  /* 0C09E5E8 bf/s */
L_0C09E5EC: BLKS(0x0C09E5ECu);
	T = (r12 & r12) == 0;  /* 0C09E5EC tst Rm,Rn */
	if (!T) { UPD(0x0C09E640u, 5); goto L_0C09E640; }  /* 0C09E5EE bf */
L_0C09E5F0: BLKS(0x0C09E5F0u);
	r0 = R32(r8 + 0xCu); UPD(0x0C09E5F2u, 1);  /* 0C09E5F0 mov.l @(disp,Rm),Rn */
	T = r0 == 0x10u;  /* 0C09E5F2 cmp/eq #imm,r0 */
	{ u32 c_ = T; r6 = 0x10u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C09E620u, 4); goto L_0C09E620; } goto L_0C09E5F8; }  /* 0C09E5F4 bt/s */
L_0C09E5F8: BLKS(0x0C09E5F8u);
	T = (s32)r0 > (s32)r6;  /* 0C09E5F8 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C09E610u, 5); goto L_0C09E610; }  /* 0C09E5FA bf */
L_0C09E5FC: BLKS(0x0C09E5FCu);
	r0 += 0xFFFFFFFFu;  /* 0C09E5FC add #imm,Rn */
	UPD(0x0C09E5FEu, 1);
L_0C09E5FE: BLKS(0x0C09E5FEu);
	r1 = 0xFFFFEA84u; UPD(0x0C09E600u, 1);  /* 0C09E5FE mov.w @(disp,pc),Rn */
	IF(0x0C09E600u); { u32 tv_ = (r1 + 0x0C09E604u); u32 t_ = PHYS(tv_); W32(r8 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C09D088u: goto L_0C09D088; default: JUMPD(tv_); } }  /* 0C09E600 braf Rn */
L_0C09E610: BLKS(0x0C09E610u);
	{ r0 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C09E5FEu, 3); goto L_0C09E5FE; }  /* 0C09E610 bra */
L_0C09E620: BLKS(0x0C09E620u);
	r7 = R32(r8 + 0x8u); UPD(0x0C09E622u, 1);  /* 0C09E620 mov.l @(disp,Rm),Rn */
	r5 = 0xFFFFFFFFu;  /* 0C09E622 mov #imm,Rn */
	r0 = 0x88u; UPD(0x0C09E626u, 2);  /* 0C09E624 mov.w @(disp,pc),Rn */
	r7 += 0xFFFFFFFFu;  /* 0C09E626 add #imm,Rn */
	r9 = 0x17u;  /* 0C09E628 mov #imm,Rn */
	IF(0x0C09E62Au); W16(r0 + r8, r5); UPD(0x0C09E62Cu, 3);  /* 0C09E62A mov.w Rm,@(r0,Rn) */
	W32(r8 + 0x8u, r7); UPD(0x0C09E62Eu, 1);  /* 0C09E62C mov.l Rm,@(disp,Rn) */
	{ W32(r8 + 0xCu, r9); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C09DB62u, 3); goto L_0C09DB62; }  /* 0C09E62E bra */
L_0C09E640: BLKS(0x0C09E640u);
	r12 = 0xC069BF0u; UPD(0x0C09E642u, 1);  /* 0C09E640 mov.l @(disp,pc),Rn */
	IF(0x0C09E642u); { u32 t_ = r12; PR = 0x0C09E646u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069BF0, 0x0C069BF0u, 0x0C09E646u); }  /* 0C09E642 jsr @Rn */
L_0C09E646: BLKS(0x0C09E646u);
	r12 = 0xC068F00u; UPD(0x0C09E648u, 1);  /* 0C09E646 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C09E648 mov Rm,Rn */
	IF(0x0C09E64Au); { u32 t_ = r12; PR = 0x0C09E64Eu; r5 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C068F00, 0x0C068F00u, 0x0C09E64Eu); }  /* 0C09E64A jsr @Rn */
L_0C09E64E: BLKS(0x0C09E64Eu);
	r2 = 0x86u; UPD(0x0C09E650u, 1);  /* 0C09E64E mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C09E650 mov Rm,Rn */
	IF(0x0C09E652u); r4 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C09E654u, 2);  /* 0C09E652 mov.w @(r0,Rm),Rn */
	r12 = 0x1Fu;  /* 0C09E654 mov #imm,Rn */
	r4 += 0x8u;  /* 0C09E656 add #imm,Rn */
	IF(0x0C09E658u); r4 >>= 2;  /* 0C09E658 shlr2 Rn */
	IF(0x0C09E65Au); r4 >>= 2;  /* 0C09E65A shlr2 Rn */
	r4 &= r12;  /* 0C09E65C and Rm,Rn */
	r0 = 0xC0A8AE0u; UPD(0x0C09E660u, 6);  /* 0C09E65E mov.l @(disp,pc),Rn */
	W32(r8 + 0xCu, r4); UPD(0x0C09E662u, 1);  /* 0C09E660 mov.l Rm,@(disp,Rn) */
	IF(0x0C09E662u); { u32 t_ = r0; PR = 0x0C09E666u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C09E666u); }  /* 0C09E662 jsr @Rn */
L_0C09E666: BLKS(0x0C09E666u);
	IF(0x0C09E666u); MACL = r10 * r11;  /* 0C09E666 mul.l Rm,Rn */
	r8 = 0xC286578u; UPD(0x0C09E66Au, 3);  /* 0C09E668 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C09E66A mov Rm,Rn */
	IF(0x0C09E66Cu); r0 = MACL;  /* 0C09E66C sts macl,Rn */
	r3 = 0xA2u; UPD(0x0C09E670u, 3);  /* 0C09E66E mov.w @(disp,pc),Rn */
	r0 += r8;  /* 0C09E670 add Rm,Rn */
	IF(0x0C09E672u); r0 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C09E674u, 2);  /* 0C09E672 mov.b @(r0,Rm),Rn */
	r6 = 0xAu;  /* 0C09E674 mov #imm,Rn */
	r13 = 0xC0BC1B0u; UPD(0x0C09E678u, 2);  /* 0C09E676 mov.l @(disp,pc),Rn */
	r0 += r0;  /* 0C09E678 add Rm,Rn */
	r10 = 0xC1CB8E0u; UPD(0x0C09E67Cu, 2);  /* 0C09E67A mov.l @(disp,pc),Rn */
	IF(0x0C09E67Cu); { u32 t_ = r13; PR = 0x0C09E680u; IF(0x0C09E67Eu); r5 = (u32)(s32)(s16)R16(r0 + r10); /* slot mov.w @(r0,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C09E680u); }  /* 0C09E67C jsr @Rn */
L_0C09E680: BLKS(0x0C09E680u);
	T = (r0 & r0) == 0;  /* 0C09E680 tst Rm,Rn */
	if (T) { UPD(0x0C09E688u, 4); goto L_0C09E688; }  /* 0C09E682 bt */
L_0C09E684: BLKS(0x0C09E684u);
	r11 = 0x4u;  /* 0C09E684 mov #imm,Rn */
	W8(r9, r11); UPD(0x0C09E688u, 2);  /* 0C09E686 mov.b Rm,@Rn */
L_0C09E688: BLKS(0x0C09E688u);
	r13 = 0xFFFFE5C8u; UPD(0x0C09E68Au, 1);  /* 0C09E688 mov.w @(disp,pc),Rn */
	IF(0x0C09E68Au); { u32 tv_ = (r13 + 0x0C09E68Eu); u32 t_ = PHYS(tv_); r14 += 0x18u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C09CC56u: goto L_0C09CC56; default: JUMPD(tv_); } }  /* 0C09E68A braf Rn */
L_0C09E690: BLKS(0x0C09E690u);
	r2 = r9;  /* 0C09E690 mov Rm,Rn */
	r2 += 0x1u;  /* 0C09E692 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C09E696u, 3);  /* 0C09E694 mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C09E696 add #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C09E698 extu.b Rm,Rn */
	T = r0 == 0x8u;  /* 0C09E69A cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r2, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C09E688u, 6); goto L_0C09E688; } UPD(0x0C09E6A0u, 1); goto L_0C09E6A0; }  /* 0C09E69C bf/s */
L_0C09E6A0: BLKS(0x0C09E6A0u);
	r0 = r3;  /* 0C09E6A0 mov Rm,Rn */
	r0 += 0xFFFFFFFFu;  /* 0C09E6A2 add #imm,Rn */
	r11 = 0x0u;  /* 0C09E6A4 mov #imm,Rn */
	W8(r9, r0); UPD(0x0C09E6A8u, 4);  /* 0C09E6A6 mov.b Rm,@Rn */
	W8(r2, r11); UPD(0x0C09E6AAu, 1);  /* 0C09E6A8 mov.b Rm,@Rn */
	r0 = r8;  /* 0C09E6AA mov Rm,Rn */
	r4 = 0x86u; UPD(0x0C09E6AEu, 2);  /* 0C09E6AC mov.w @(disp,pc),Rn */
	r12 = 0xC069B20u; UPD(0x0C09E6B0u, 1);  /* 0C09E6AE mov.l @(disp,pc),Rn */
	IF(0x0C09E6B0u); r11 = (u32)(s32)(s16)R16(r0 + r4); UPD(0x0C09E6B2u, 1);  /* 0C09E6B0 mov.w @(r0,Rm),Rn */
	r5 = 0x80000u; UPD(0x0C09E6B4u, 1);  /* 0C09E6B2 mov.l @(disp,pc),Rn */
	IF(0x0C09E6B4u); { u32 t_ = r12; PR = 0x0C09E6B8u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C09E6B8u); }  /* 0C09E6B4 jsr @Rn */
L_0C09E6B8: BLKS(0x0C09E6B8u);
	r3 = R32(r8 + 0x24u); UPD(0x0C09E6BAu, 1);  /* 0C09E6B8 mov.l @(disp,Rm),Rn */
	r4 = r11;  /* 0C09E6BA mov Rm,Rn */
	r10 = 0xC069AF0u; UPD(0x0C09E6BEu, 2);  /* 0C09E6BC mov.l @(disp,pc),Rn */
	r3 += r0;  /* 0C09E6BE add Rm,Rn */
	r5 = 0x66666u; UPD(0x0C09E6C2u, 2);  /* 0C09E6C0 mov.l @(disp,pc),Rn */
	IF(0x0C09E6C2u); { u32 t_ = r10; PR = 0x0C09E6C6u; W32(r14, r3); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C09E6C6u); }  /* 0C09E6C2 jsr @Rn */
L_0C09E6C6: BLKS(0x0C09E6C6u);
	r6 = R32(r8 + 0x28u); UPD(0x0C09E6C8u, 1);  /* 0C09E6C6 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C09E6C8 add #imm,Rn */
	r13 = 0x20000u; UPD(0x0C09E6CCu, 2);  /* 0C09E6CA mov.l @(disp,pc),Rn */
	r6 += r0;  /* 0C09E6CC add Rm,Rn */
	W32(r15, r13); UPD(0x0C09E6D0u, 2);  /* 0C09E6CE mov.l Rm,@Rn */
	r4 = 0x0u;  /* 0C09E6D0 mov #imm,Rn */
	UPD(0x0C09E6D2u, 1);
L_0C09E6D2: BLKS(0x0C09E6D2u);
	r7 = r11;  /* 0C09E6D2 mov Rm,Rn */
	r11 = 0xC0BA480u; UPD(0x0C09E6D6u, 2);  /* 0C09E6D4 mov.l @(disp,pc),Rn */
	IF(0x0C09E6D6u); { u32 t_ = r11; PR = 0x0C09E6DAu; r5 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BA480, 0x0C0BA480u, 0x0C09E6DAu); }  /* 0C09E6D6 jsr @Rn */
L_0C09E6DA: BLKS(0x0C09E6DAu);
	r13 = 0xFFFFE574u; UPD(0x0C09E6DCu, 1);  /* 0C09E6DA mov.w @(disp,pc),Rn */
	IF(0x0C09E6DCu); { u32 tv_ = (r13 + 0x0C09E6E0u); u32 t_ = PHYS(tv_); r15 += 0x4u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C09CC54u: goto L_0C09CC54; default: JUMPD(tv_); } }  /* 0C09E6DC braf Rn */
L_0C09E740: BLKS(0x0C09E740u);
	r1 += r5;  /* 0C09E740 add Rm,Rn */
	r1 += r2;  /* 0C09E742 add Rm,Rn */
	{ r1 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C09E5D2u, 5); goto L_0C09E5D2; }  /* 0C09E744 bra */
L_0C09E750: BLKS(0x0C09E750u);
	r1 = 0xC098E60u; UPD(0x0C09E752u, 1);  /* 0C09E750 mov.l @(disp,pc),Rn */
	r12 = 0xFFFFE56Cu; UPD(0x0C09E754u, 1);  /* 0C09E752 mov.w @(disp,pc),Rn */
	IF(0x0C09E754u); { u32 tv_ = (r12 + 0x0C09E758u); u32 t_ = PHYS(tv_); r4 = r13; /* slot mov Rm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C09CCC4u: goto L_0C09CCC4; default: JUMPD(tv_); } }  /* 0C09E754 braf Rn */
L_0C09E760: BLKS(0x0C09E760u);
	r8 = 0xC0A8BF0u; UPD(0x0C09E762u, 1);  /* 0C09E760 mov.l @(disp,pc),Rn */
	IF(0x0C09E762u); { u32 t_ = r8; PR = 0x0C09E766u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8BF0, 0x0C0A8BF0u, 0x0C09E766u); }  /* 0C09E762 jsr @Rn */
L_0C09E766: BLKS(0x0C09E766u);
	IF(0x0C09E766u); T = (s32)r0 >= 0;  /* 0C09E766 cmp/pz Rn */
	{ u32 c_ = !T; r10 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C09E750u, 4); goto L_0C09E750; } goto L_0C09E76C; }  /* 0C09E768 bf/s */
L_0C09E76C: BLKS(0x0C09E76Cu);
	r6 = 0xB4u; UPD(0x0C09E76Eu, 2);  /* 0C09E76C mov.w @(disp,pc),Rn */
	IF(0x0C09E76Eu); MACL = r13 * r6;  /* 0C09E76E mul.l Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C09E772u, 3);  /* 0C09E770 mov.l @(disp,pc),Rn */
	IF(0x0C09E772u); r12 = MACL;  /* 0C09E772 sts macl,Rn */
	IF(0x0C09E774u); MACL = r0 * r6;  /* 0C09E774 mul.l Rm,Rn */
	r12 += r5;  /* 0C09E776 add Rm,Rn */
	r2 = R32(r12 + 0x30u); UPD(0x0C09E77Au, 5);  /* 0C09E778 mov.l @(disp,Rm),Rn */
	IF(0x0C09E77Au); r4 = MACL;  /* 0C09E77A sts macl,Rn */
	r4 += r5;  /* 0C09E77C add Rm,Rn */
	r7 = R32(r4 + 0x24u); UPD(0x0C09E780u, 3);  /* 0C09E77E mov.l @(disp,Rm),Rn */
	r0 = R32(r12 + 0x2Cu); UPD(0x0C09E782u, 1);  /* 0C09E780 mov.l @(disp,Rm),Rn */
	r1 = R32(r4 + 0x28u); UPD(0x0C09E784u, 1);  /* 0C09E782 mov.l @(disp,Rm),Rn */
	r7 += r0;  /* 0C09E784 add Rm,Rn */
	r1 += r2;  /* 0C09E786 add Rm,Rn */
	W32(r12 + 0x24u, r7); UPD(0x0C09E78Au, 3);  /* 0C09E788 mov.l Rm,@(disp,Rn) */
	W32(r12 + 0x28u, r1); UPD(0x0C09E78Cu, 1);  /* 0C09E78A mov.l Rm,@(disp,Rn) */
	r12 += 0x7Eu;  /* 0C09E78C add #imm,Rn */
	r3 = (u32)(s32)(s16)R16(r12); UPD(0x0C09E790u, 2);  /* 0C09E78E mov.w @Rm,Rn */
	r2 = 0xA0u; UPD(0x0C09E792u, 1);  /* 0C09E790 mov.w @(disp,pc),Rn */
	r12 += 0xFFFFFF82u;  /* 0C09E792 add #imm,Rn */
	r12 += r2;  /* 0C09E794 add Rm,Rn */
	r12 += 0x2u;  /* 0C09E796 add #imm,Rn */
	r9 = (u32)(s32)(s8)R8(r12); UPD(0x0C09E79Au, 4);  /* 0C09E798 mov.b @Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C09E79A tst Rm,Rn */
	{ u32 c_ = T; IF(0x0C09E79Eu); MACL = r3 * r6; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C09E870u, 5); goto L_0C09E870; } goto L_0C09E7A0; }  /* 0C09E79C bt/s */
L_0C09E7A0: BLKS(0x0C09E7A0u);
	IF(0x0C09E7A0u); MACL = r3 * r6;  /* 0C09E7A0 mul.l Rm,Rn */
	IF(0x0C09E7A2u); r1 = MACL;  /* 0C09E7A2 sts macl,Rn */
	r1 += r5;  /* 0C09E7A4 add Rm,Rn */
	r1 += r2;  /* 0C09E7A6 add Rm,Rn */
	r1 += 0x2u;  /* 0C09E7A8 add #imm,Rn */
	UPD(0x0C09E7AAu, 8);
L_0C09E7AA: BLKS(0x0C09E7AAu);
	r5 = (u32)(s32)(s8)R8(r1); UPD(0x0C09E7ACu, 1);  /* 0C09E7AA mov.b @Rm,Rn */
	r6 = 0x8u;  /* 0C09E7AC mov #imm,Rn */
	r5 &= r6;  /* 0C09E7AE and Rm,Rn */
	T = (r5 & r5) == 0;  /* 0C09E7B0 tst Rm,Rn */
	{ u32 c_ = !T; r4 = r13; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C09E7E0u, 6); goto L_0C09E7E0; } goto L_0C09E7B6; }  /* 0C09E7B2 bf/s */
L_0C09E7B6: BLKS(0x0C09E7B6u);
	r12 = 0xB4u; UPD(0x0C09E7B8u, 2);  /* 0C09E7B6 mov.w @(disp,pc),Rn */
	IF(0x0C09E7B8u); MACL = r13 * r12;  /* 0C09E7B8 mul.l Rm,Rn */
	r8 = 0xC286578u; UPD(0x0C09E7BCu, 3);  /* 0C09E7BA mov.l @(disp,pc),Rn */
	IF(0x0C09E7BCu); r2 = MACL;  /* 0C09E7BC sts macl,Rn */
	r2 += r8;  /* 0C09E7BE add Rm,Rn */
	r1 = R32(r2 + 0xCu); UPD(0x0C09E7C2u, 3);  /* 0C09E7C0 mov.l @(disp,Rm),Rn */
	T = (r1 & r1) == 0;  /* 0C09E7C2 tst Rm,Rn */
	if (T) { UPD(0x0C09E7D0u, 4); goto L_0C09E7D0; }  /* 0C09E7C4 bt */
L_0C09E7C6: BLKS(0x0C09E7C6u);
	r1 += 0xFFFFFFFFu;  /* 0C09E7C6 add #imm,Rn */
	r4 = 0xFFFFE906u; UPD(0x0C09E7CAu, 2);  /* 0C09E7C8 mov.w @(disp,pc),Rn */
	IF(0x0C09E7CAu); { u32 tv_ = (r4 + 0x0C09E7CEu); u32 t_ = PHYS(tv_); IF(0x0C09E7CCu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C09D0D4u: goto L_0C09D0D4; default: JUMPD(tv_); } }  /* 0C09E7CA braf Rn */
L_0C09E7D0: BLKS(0x0C09E7D0u);
	r5 = R32(r2 + 0x8u); UPD(0x0C09E7D2u, 1);  /* 0C09E7D0 mov.l @(disp,Rm),Rn */
L_0C09E7D2: BLKS(0x0C09E7D2u);
	r6 = 0xFFFFFFFFu;  /* 0C09E7D2 mov #imm,Rn */
	r0 = 0x88u; UPD(0x0C09E7D6u, 2);  /* 0C09E7D4 mov.w @(disp,pc),Rn */
	r5 += 0xFFFFFFFFu;  /* 0C09E7D6 add #imm,Rn */
	IF(0x0C09E7D8u); W16(r0 + r2, r6); UPD(0x0C09E7DAu, 2);  /* 0C09E7D8 mov.w Rm,@(r0,Rn) */
	r1 = 0x17u;  /* 0C09E7DA mov #imm,Rn */
	{ W32(r2 + 0x8u, r5); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C09DBFCu, 4); goto L_0C09DBFC; }  /* 0C09E7DC bra */
L_0C09E7E0: BLKS(0x0C09E7E0u);
	r8 = 0xB4u; UPD(0x0C09E7E2u, 1);  /* 0C09E7E0 mov.w @(disp,pc),Rn */
	IF(0x0C09E7E2u); MACL = r10 * r8;  /* 0C09E7E2 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C09E7E6u, 3);  /* 0C09E7E4 mov.l @(disp,pc),Rn */
	r6 = 0x0u;  /* 0C09E7E6 mov #imm,Rn */
	IF(0x0C09E7E8u); r0 = MACL;  /* 0C09E7E8 sts macl,Rn */
	r11 = 0xA2u; UPD(0x0C09E7ECu, 3);  /* 0C09E7EA mov.w @(disp,pc),Rn */
	r0 += r9;  /* 0C09E7EC add Rm,Rn */
	IF(0x0C09E7EEu); r0 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C09E7F0u, 2);  /* 0C09E7EE mov.b @(r0,Rm),Rn */
	r10 = 0xC0BC1B0u; UPD(0x0C09E7F2u, 1);  /* 0C09E7F0 mov.l @(disp,pc),Rn */
	r0 += r0;  /* 0C09E7F2 add Rm,Rn */
	r3 = 0xC1CB8E8u; UPD(0x0C09E7F6u, 2);  /* 0C09E7F4 mov.l @(disp,pc),Rn */
	IF(0x0C09E7F6u); { u32 t_ = r10; PR = 0x0C09E7FAu; IF(0x0C09E7F8u); r5 = (u32)(s32)(s16)R16(r0 + r3); /* slot mov.w @(r0,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C09E7FAu); }  /* 0C09E7F6 jsr @Rn */
L_0C09E7FA: BLKS(0x0C09E7FAu);
	T = (r0 & r0) == 0;  /* 0C09E7FA tst Rm,Rn */
	if (T) { UPD(0x0C09E862u, 4); goto L_0C09E862; }  /* 0C09E7FC bt */
L_0C09E7FE: BLKS(0x0C09E7FEu);
	IF(0x0C09E7FEu); MACL = r13 * r8;  /* 0C09E7FE mul.l Rm,Rn */
	r0 = 0x88u; UPD(0x0C09E802u, 3);  /* 0C09E800 mov.w @(disp,pc),Rn */
	r4 = r13;  /* 0C09E802 mov Rm,Rn */
	IF(0x0C09E804u); r8 = MACL;  /* 0C09E804 sts macl,Rn */
	r8 += r9;  /* 0C09E806 add Rm,Rn */
	IF(0x0C09E808u); r9 = (u32)(s32)(s16)R16(r0 + r8); UPD(0x0C09E80Au, 4);  /* 0C09E808 mov.w @(r0,Rm),Rn */
	r12 = 0x0u;  /* 0C09E80A mov #imm,Rn */
	r0 = R32(r8 + 0xCu); UPD(0x0C09E80Eu, 2);  /* 0C09E80C mov.l @(disp,Rm),Rn */
	r13 = 0xC0A8AE0u; UPD(0x0C09E810u, 1);  /* 0C09E80E mov.l @(disp,pc),Rn */
	r0 += r9;  /* 0C09E810 add Rm,Rn */
	r9 = 0xC069B20u; UPD(0x0C09E814u, 2);  /* 0C09E812 mov.l @(disp,pc),Rn */
	r0 &= 0xFu;  /* 0C09E814 and #imm,r0 */
	r10 = 0xC0BA480u; UPD(0x0C09E818u, 2);  /* 0C09E816 mov.l @(disp,pc),Rn */
	IF(0x0C09E818u); { u32 t_ = r13; PR = 0x0C09E81Cu; W32(r8 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C09E81Cu); }  /* 0C09E818 jsr @Rn */
L_0C09E81C: BLKS(0x0C09E81Cu);
	r2 = 0xC1CB8E4u; UPD(0x0C09E81Eu, 1);  /* 0C09E81C mov.l @(disp,pc),Rn */
	r0 = r12;  /* 0C09E81E mov Rm,Rn */
	r6 = R32(r8 + 0xCu); UPD(0x0C09E822u, 2);  /* 0C09E820 mov.l @(disp,Rm),Rn */
	r1 = 0x4u;  /* 0C09E822 mov #imm,Rn */
	r0 += r0;  /* 0C09E824 add Rm,Rn */
	IF(0x0C09E826u); r3 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C09E828u, 3);  /* 0C09E826 mov.w @(r0,Rm),Rn */
	IF(0x0C09E828u); ARG0(0x461Du); { s32 s_ = (s32)r1; if (s_ >= 0) r6 <<= (s_ & 31); else if ((s_ & 31) == 0) r6 = 0; else r6 >>= ((~s_ & 31) + 1); }  /* 0C09E828 shld Rm,Rn */
	r6 += r3;  /* 0C09E82A add Rm,Rn */
	r13 = (u32)(s32)(s16)r6;  /* 0C09E82C exts.w Rm,Rn */
	r5 = 0x140000u; UPD(0x0C09E830u, 4);  /* 0C09E82E mov.l @(disp,pc),Rn */
	IF(0x0C09E830u); { u32 t_ = r9; PR = 0x0C09E834u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C09E834u); }  /* 0C09E830 jsr @Rn */
L_0C09E834: BLKS(0x0C09E834u);
	r5 = R32(r8 + 0x24u); UPD(0x0C09E836u, 1);  /* 0C09E834 mov.l @(disp,Rm),Rn */
	r5 += r0;  /* 0C09E836 add Rm,Rn */
	r11 = 0xC069AF0u; UPD(0x0C09E83Au, 2);  /* 0C09E838 mov.l @(disp,pc),Rn */
	W32(r14, r5); UPD(0x0C09E83Cu, 1);  /* 0C09E83A mov.l Rm,@Rn */
	r5 = 0x100000u; UPD(0x0C09E83Eu, 1);  /* 0C09E83C mov.l @(disp,pc),Rn */
	IF(0x0C09E83Eu); { u32 t_ = r11; PR = 0x0C09E842u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C09E842u); }  /* 0C09E83E jsr @Rn */
L_0C09E842: BLKS(0x0C09E842u);
	r6 = R32(r8 + 0x28u); UPD(0x0C09E844u, 1);  /* 0C09E842 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C09E844 add #imm,Rn */
	r7 = 0x28000u; UPD(0x0C09E848u, 2);  /* 0C09E846 mov.l @(disp,pc),Rn */
	r4 = 0x3u;  /* 0C09E848 mov #imm,Rn */
	W32(r15, r7); UPD(0x0C09E84Cu, 2);  /* 0C09E84A mov.l Rm,@Rn */
	r6 += r0;  /* 0C09E84C add Rm,Rn */
	r5 = R32(r14); UPD(0x0C09E850u, 2);  /* 0C09E84E mov.l @Rm,Rn */
	IF(0x0C09E850u); { u32 t_ = r10; PR = 0x0C09E854u; r7 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BA480, 0x0C0BA480u, 0x0C09E854u); }  /* 0C09E850 jsr @Rn */
L_0C09E854: BLKS(0x0C09E854u);
	r4 = r12;  /* 0C09E854 mov Rm,Rn */
	r4 += 0x1u;  /* 0C09E856 add #imm,Rn */
	r12 = (u32)(s32)(s16)r4;  /* 0C09E858 exts.w Rm,Rn */
	r2 = 0x1u;  /* 0C09E85A mov #imm,Rn */
	T = (s32)r12 > (s32)r2;  /* 0C09E85C cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C09E81Cu, 8); goto L_0C09E81C; } UPD(0x0C09E862u, 1); goto L_0C09E862; }  /* 0C09E85E bf/s */
L_0C09E862: BLKS(0x0C09E862u);
	r13 = 0xFFFFE3EEu; UPD(0x0C09E864u, 1);  /* 0C09E862 mov.w @(disp,pc),Rn */
	IF(0x0C09E864u); { u32 tv_ = (r13 + 0x0C09E868u); u32 t_ = PHYS(tv_); r14 += 0x18u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C09CC56u: goto L_0C09CC56; default: JUMPD(tv_); } }  /* 0C09E864 braf Rn */
L_0C09E870: BLKS(0x0C09E870u);
	IF(0x0C09E870u); r1 = MACL;  /* 0C09E870 sts macl,Rn */
	r1 += r5;  /* 0C09E872 add Rm,Rn */
	r1 += r2;  /* 0C09E874 add Rm,Rn */
	{ r1 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C09E7AAu, 6); goto L_0C09E7AA; }  /* 0C09E876 bra */
L_0C09E880: BLKS(0x0C09E880u);
	r11 = 0xC0A8BF0u; UPD(0x0C09E882u, 1);  /* 0C09E880 mov.l @(disp,pc),Rn */
	IF(0x0C09E882u); { u32 t_ = r11; PR = 0x0C09E886u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8BF0, 0x0C0A8BF0u, 0x0C09E886u); }  /* 0C09E882 jsr @Rn */
L_0C09E886: BLKS(0x0C09E886u);
	IF(0x0C09E886u); T = (s32)r0 >= 0;  /* 0C09E886 cmp/pz Rn */
	if (T) { UPD(0x0C09E88Eu, 4); goto L_0C09E88E; }  /* 0C09E888 bt */
L_0C09E88A: BLKS(0x0C09E88Au);
	{ IF(0x0C09E88Cu); ; /* slot nop */ UPD(0x0C09E750u, 3); goto L_0C09E750; }  /* 0C09E88A bra */
L_0C09E88E: BLKS(0x0C09E88Eu);
	r2 = 0xB4u; UPD(0x0C09E890u, 1);  /* 0C09E88E mov.w @(disp,pc),Rn */
	r4 = 0x17u;  /* 0C09E890 mov #imm,Rn */
	IF(0x0C09E892u); MACL = r13 * r2;  /* 0C09E892 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C09E896u, 4);  /* 0C09E894 mov.l @(disp,pc),Rn */
	IF(0x0C09E896u); r6 = MACL;  /* 0C09E896 sts macl,Rn */
	IF(0x0C09E898u); MACL = r0 * r2;  /* 0C09E898 mul.l Rm,Rn */
	r6 += r9;  /* 0C09E89A add Rm,Rn */
	r1 = R32(r6 + 0x30u); UPD(0x0C09E89Eu, 5);  /* 0C09E89C mov.l @(disp,Rm),Rn */
	IF(0x0C09E89Eu); r8 = MACL;  /* 0C09E89E sts macl,Rn */
	r8 += r9;  /* 0C09E8A0 add Rm,Rn */
	r7 = R32(r8 + 0x24u); UPD(0x0C09E8A4u, 3);  /* 0C09E8A2 mov.l @(disp,Rm),Rn */
	r12 = R32(r8 + 0x28u); UPD(0x0C09E8A6u, 1);  /* 0C09E8A4 mov.l @(disp,Rm),Rn */
	r0 = R32(r6 + 0x2Cu); UPD(0x0C09E8A8u, 1);  /* 0C09E8A6 mov.l @(disp,Rm),Rn */
	r12 += r1;  /* 0C09E8A8 add Rm,Rn */
	r7 += r0;  /* 0C09E8AA add Rm,Rn */
	r2 = R32(r6 + 0xCu); UPD(0x0C09E8AEu, 3);  /* 0C09E8AC mov.l @(disp,Rm),Rn */
	W32(r6 + 0x24u, r7); UPD(0x0C09E8B0u, 1);  /* 0C09E8AE mov.l Rm,@(disp,Rn) */
	T = r2 > r4;  /* 0C09E8B0 cmp/hi Rm,Rn */
	{ u32 c_ = T; W32(r6 + 0x28u, r12); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C09E862u, 4); goto L_0C09E862; } UPD(0x0C09E8B6u, 1); goto L_0C09E8B6; }  /* 0C09E8B2 bt/s */
L_0C09E8B6: BLKS(0x0C09E8B6u);
	r0 = 0xC09E8FCu;  /* 0C09E8B6 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C09E8B8 add Rm,Rn */
	IF(0x0C09E8BAu); r10 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C09E8BCu, 3);  /* 0C09E8BA mov.w @(r0,Rm),Rn */
	IF(0x0C09E8BCu); { u32 tv_ = (r10 + 0x0C09E8C0u); u32 t_ = PHYS(tv_); IF(0x0C09E8BEu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C09E930u: goto L_0C09E930; case 0x0C09E944u: goto L_0C09E944; case 0x0C09E9B0u: goto L_0C09E9B0; default: JUMPD(tv_); } }  /* 0C09E8BC braf Rn */
L_0C09E930: BLKS(0x0C09E930u);
	r11 = 0xB4u; UPD(0x0C09E932u, 1);  /* 0C09E930 mov.w @(disp,pc),Rn */
	IF(0x0C09E932u); MACL = r13 * r11;  /* 0C09E932 mul.l Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C09E936u, 3);  /* 0C09E934 mov.l @(disp,pc),Rn */
	IF(0x0C09E936u); r8 = MACL;  /* 0C09E936 sts macl,Rn */
	r0 = 0x88u; UPD(0x0C09E93Au, 2);  /* 0C09E938 mov.w @(disp,pc),Rn */
	r8 += r5;  /* 0C09E93A add Rm,Rn */
	IF(0x0C09E93Cu); r3 = (u32)(s32)(s16)R16(r0 + r8); UPD(0x0C09E93Eu, 2);  /* 0C09E93C mov.w @(r0,Rm),Rn */
	IF(0x0C09E93Eu); T = (s32)r3 >= 0;  /* 0C09E93E cmp/pz Rn */
	{ u32 c_ = !T; r4 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C09E990u, 4); goto L_0C09E990; } UPD(0x0C09E944u, 1); goto L_0C09E944; }  /* 0C09E940 bf/s */
L_0C09E944: BLKS(0x0C09E944u);
	r8 = 0xB4u; UPD(0x0C09E946u, 1);  /* 0C09E944 mov.w @(disp,pc),Rn */
	IF(0x0C09E946u); MACL = r13 * r8;  /* 0C09E946 mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C09E94Au, 3);  /* 0C09E948 mov.l @(disp,pc),Rn */
	IF(0x0C09E94Au); r8 = MACL;  /* 0C09E94A sts macl,Rn */
	r12 = 0x98u; UPD(0x0C09E94Eu, 2);  /* 0C09E94C mov.w @(disp,pc),Rn */
	r8 += r7;  /* 0C09E94E add Rm,Rn */
	r12 += r8;  /* 0C09E950 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r12); UPD(0x0C09E954u, 3);  /* 0C09E952 mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C09E954 add #imm,Rn */
	W8(r12, r0); UPD(0x0C09E958u, 2);  /* 0C09E956 mov.b Rm,@Rn */
	r0 &= 0x1u;  /* 0C09E958 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C09E95A tst Rm,Rn */
	if (!T) { UPD(0x0C09E97Cu, 5); goto L_0C09E97C; }  /* 0C09E95C bf */
L_0C09E95E: BLKS(0x0C09E95Eu);
	r4 = r13;  /* 0C09E95E mov Rm,Rn */
	r0 = 0x88u; UPD(0x0C09E962u, 2);  /* 0C09E960 mov.w @(disp,pc),Rn */
	IF(0x0C09E962u); r1 = (u32)(s32)(s16)R16(r0 + r8); UPD(0x0C09E964u, 1);  /* 0C09E962 mov.w @(r0,Rm),Rn */
	r10 = R32(r8 + 0xCu); UPD(0x0C09E966u, 1);  /* 0C09E964 mov.l @(disp,Rm),Rn */
	r9 = 0xC0A8AE0u; UPD(0x0C09E968u, 1);  /* 0C09E966 mov.l @(disp,pc),Rn */
	r10 += r1;  /* 0C09E968 add Rm,Rn */
	IF(0x0C09E96Au); { u32 t_ = r9; PR = 0x0C09E96Eu; W32(r8 + 0xCu, r10); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C09E96Eu); }  /* 0C09E96A jsr @Rn */
L_0C09E96E: BLKS(0x0C09E96Eu);
	r0 = R32(r8 + 0xCu); UPD(0x0C09E970u, 1);  /* 0C09E96E mov.l @(disp,Rm),Rn */
	T = (r0 & r0) == 0;  /* 0C09E970 tst Rm,Rn */
	if (!T) { UPD(0x0C09E97Cu, 4); goto L_0C09E97C; }  /* 0C09E972 bf */
L_0C09E974: BLKS(0x0C09E974u);
	r1 = R32(r8); UPD(0x0C09E976u, 1);  /* 0C09E974 mov.l @Rm,Rn */
	r3 = 0x4000u; UPD(0x0C09E978u, 1);  /* 0C09E976 mov.w @(disp,pc),Rn */
	r1 |= r3;  /* 0C09E978 or Rm,Rn */
	UPD(0x0C09E97Au, 1);
L_0C09E97A: BLKS(0x0C09E97Au);
	W32(r8, r1); UPD(0x0C09E97Cu, 1);  /* 0C09E97A mov.l Rm,@Rn */
L_0C09E97C: BLKS(0x0C09E97Cu);
	r13 = 0xFFFFE2D4u; UPD(0x0C09E97Eu, 1);  /* 0C09E97C mov.w @(disp,pc),Rn */
	IF(0x0C09E97Eu); { u32 tv_ = (r13 + 0x0C09E982u); u32 t_ = PHYS(tv_); r14 += 0x18u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C09CC56u: goto L_0C09CC56; default: JUMPD(tv_); } }  /* 0C09E97E braf Rn */
L_0C09E990: BLKS(0x0C09E990u);
	W32(r8 + 0xCu, r4); UPD(0x0C09E992u, 1);  /* 0C09E990 mov.l Rm,@(disp,Rn) */
	r6 = 0x21u;  /* 0C09E992 mov #imm,Rn */
	r4 = r13;  /* 0C09E994 mov Rm,Rn */
	r13 = 0xC0A8B10u; UPD(0x0C09E998u, 3);  /* 0C09E996 mov.l @(disp,pc),Rn */
	IF(0x0C09E998u); { u32 t_ = r13; PR = 0x0C09E99Cu; W32(r8 + 0x8u, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B10, 0x0C0A8B10u, 0x0C09E99Cu); }  /* 0C09E998 jsr @Rn */
L_0C09E99C: BLKS(0x0C09E99Cu);
	r1 = R32(r8); UPD(0x0C09E99Eu, 1);  /* 0C09E99C mov.l @Rm,Rn */
	r2 = 0xFCFFFFFFu; UPD(0x0C09E9A0u, 1);  /* 0C09E99E mov.l @(disp,pc),Rn */
L_0C09E9A0: BLKS(0x0C09E9A0u);
	{ r1 &= r2; /* slot and Rm,Rn */ UPD(0x0C09E97Au, 3); goto L_0C09E97A; }  /* 0C09E9A0 bra */
L_0C09E9B0: BLKS(0x0C09E9B0u);
	r11 = 0xB4u; UPD(0x0C09E9B2u, 1);  /* 0C09E9B0 mov.w @(disp,pc),Rn */
	IF(0x0C09E9B2u); MACL = r13 * r11;  /* 0C09E9B2 mul.l Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C09E9B6u, 3);  /* 0C09E9B4 mov.l @(disp,pc),Rn */
	IF(0x0C09E9B6u); r8 = MACL;  /* 0C09E9B6 sts macl,Rn */
	r9 = 0x88u; UPD(0x0C09E9BAu, 2);  /* 0C09E9B8 mov.w @(disp,pc),Rn */
	r8 += r5;  /* 0C09E9BA add Rm,Rn */
	r9 += r8;  /* 0C09E9BC add Rm,Rn */
	r2 = (u32)(s32)(s16)R16(r9); UPD(0x0C09E9C0u, 3);  /* 0C09E9BE mov.w @Rm,Rn */
	IF(0x0C09E9C0u); T = (s32)r2 >= 0;  /* 0C09E9C0 cmp/pz Rn */
	if (!T) { UPD(0x0C09EA00u, 4); goto L_0C09EA00; }  /* 0C09E9C2 bf */
L_0C09E9C4: BLKS(0x0C09E9C4u);
	r0 = R32(r8 + 0x8u); UPD(0x0C09E9C6u, 1);  /* 0C09E9C4 mov.l @(disp,Rm),Rn */
	r4 = r13;  /* 0C09E9C6 mov Rm,Rn */
	r0 += 0x1u;  /* 0C09E9C8 add #imm,Rn */
	W32(r8 + 0x8u, r0); UPD(0x0C09E9CCu, 3);  /* 0C09E9CA mov.l Rm,@(disp,Rn) */
	r3 = 0xC1CB890u; UPD(0x0C09E9CEu, 1);  /* 0C09E9CC mov.l @(disp,pc),Rn */
	r0 += r0;  /* 0C09E9CE add Rm,Rn */
	IF(0x0C09E9D0u); r10 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C09E9D2u, 2);  /* 0C09E9D0 mov.w @(r0,Rm),Rn */
	r0 = 0xC0A8B10u; UPD(0x0C09E9D4u, 1);  /* 0C09E9D2 mov.l @(disp,pc),Rn */
	IF(0x0C09E9D4u); { u32 t_ = r0; PR = 0x0C09E9D8u; W32(r8 + 0xCu, r10); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B10, 0x0C0A8B10u, 0x0C09E9D8u); }  /* 0C09E9D4 jsr @Rn */
L_0C09E9D8: BLKS(0x0C09E9D8u);
	r12 = 0xC0C2360u; UPD(0x0C09E9DAu, 1);  /* 0C09E9D8 mov.l @(disp,pc),Rn */
	r0 = r8;  /* 0C09E9DA mov Rm,Rn */
	r6 = 0x86u; UPD(0x0C09E9DEu, 2);  /* 0C09E9DC mov.w @(disp,pc),Rn */
	r7 = 0x100u; UPD(0x0C09E9E0u, 1);  /* 0C09E9DE mov.w @(disp,pc),Rn */
	IF(0x0C09E9E0u); { u32 t_ = r12; PR = 0x0C09E9E4u; IF(0x0C09E9E2u); W16(r0 + r6, r7); /* slot mov.w Rm,@(r0,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C09E9E4u); }  /* 0C09E9E0 jsr @Rn */
L_0C09E9E4: BLKS(0x0C09E9E4u);
	r0 &= 0x1u;  /* 0C09E9E4 and #imm,r0 */
	r4 = 0xC1CB8D0u; UPD(0x0C09E9E8u, 2);  /* 0C09E9E6 mov.l @(disp,pc),Rn */
	r0 += r0;  /* 0C09E9E8 add Rm,Rn */
	IF(0x0C09E9EAu); r13 = (u32)(s32)(s16)R16(r0 + r4); UPD(0x0C09E9ECu, 2);  /* 0C09E9EA mov.w @(r0,Rm),Rn */
	r1 = R32(r8); UPD(0x0C09E9EEu, 1);  /* 0C09E9EC mov.l @Rm,Rn */
	r2 = 0xFFFFBFFFu; UPD(0x0C09E9F0u, 1);  /* 0C09E9EE mov.w @(disp,pc),Rn */
	{ W16(r9, r13); /* slot mov.w Rm,@Rn */ UPD(0x0C09E9A0u, 3); goto L_0C09E9A0; }  /* 0C09E9F0 bra */
L_0C09EA00: BLKS(0x0C09EA00u);
	r1 = R32(r8 + 0xCu); UPD(0x0C09EA02u, 1);  /* 0C09EA00 mov.l @(disp,Rm),Rn */
	{ r1 += 0xFFFFFFFFu; /* slot add #imm,Rn */ UPD(0x0C09E31Cu, 3); goto L_0C09E31C; }  /* 0C09EA02 bra */
L_0C09EA10: BLKS(0x0C09EA10u);
	r10 = 0xC0A8BF0u; UPD(0x0C09EA12u, 1);  /* 0C09EA10 mov.l @(disp,pc),Rn */
	IF(0x0C09EA12u); { u32 t_ = r10; PR = 0x0C09EA16u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8BF0, 0x0C0A8BF0u, 0x0C09EA16u); }  /* 0C09EA12 jsr @Rn */
L_0C09EA16: BLKS(0x0C09EA16u);
	IF(0x0C09EA16u); T = (s32)r0 >= 0;  /* 0C09EA16 cmp/pz Rn */
	{ u32 c_ = T; r10 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C09EA20u, 4); goto L_0C09EA20; } goto L_0C09EA1C; }  /* 0C09EA18 bt/s */
L_0C09EA1C: BLKS(0x0C09EA1Cu);
	{ IF(0x0C09EA1Eu); ; /* slot nop */ UPD(0x0C09E750u, 4); goto L_0C09E750; }  /* 0C09EA1C bra */
L_0C09EA20: BLKS(0x0C09EA20u);
	r6 = 0xB4u; UPD(0x0C09EA22u, 1);  /* 0C09EA20 mov.w @(disp,pc),Rn */
	IF(0x0C09EA22u); MACL = r13 * r6;  /* 0C09EA22 mul.l Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C09EA26u, 3);  /* 0C09EA24 mov.l @(disp,pc),Rn */
	IF(0x0C09EA26u); r9 = MACL;  /* 0C09EA26 sts macl,Rn */
	IF(0x0C09EA28u); MACL = r0 * r6;  /* 0C09EA28 mul.l Rm,Rn */
	r9 += r5;  /* 0C09EA2A add Rm,Rn */
	r2 = R32(r9 + 0x2Cu); UPD(0x0C09EA2Eu, 5);  /* 0C09EA2C mov.l @(disp,Rm),Rn */
	IF(0x0C09EA2Eu); r11 = MACL;  /* 0C09EA2E sts macl,Rn */
	r11 += r5;  /* 0C09EA30 add Rm,Rn */
	r1 = R32(r11 + 0x24u); UPD(0x0C09EA34u, 3);  /* 0C09EA32 mov.l @(disp,Rm),Rn */
	r4 = R32(r11 + 0x28u); UPD(0x0C09EA36u, 1);  /* 0C09EA34 mov.l @(disp,Rm),Rn */
	r1 += r2;  /* 0C09EA36 add Rm,Rn */
	r7 = R32(r9 + 0x30u); UPD(0x0C09EA3Au, 2);  /* 0C09EA38 mov.l @(disp,Rm),Rn */
	r4 += r7;  /* 0C09EA3A add Rm,Rn */
	W32(r9 + 0x24u, r1); UPD(0x0C09EA3Eu, 2);  /* 0C09EA3C mov.l Rm,@(disp,Rn) */
	W32(r9 + 0x28u, r4); UPD(0x0C09EA40u, 1);  /* 0C09EA3E mov.l Rm,@(disp,Rn) */
	r9 += 0x7Eu;  /* 0C09EA40 add #imm,Rn */
	r3 = (u32)(s32)(s16)R16(r9); UPD(0x0C09EA44u, 2);  /* 0C09EA42 mov.w @Rm,Rn */
	r2 = 0xA0u; UPD(0x0C09EA46u, 1);  /* 0C09EA44 mov.w @(disp,pc),Rn */
	r9 += 0xFFFFFF82u;  /* 0C09EA46 add #imm,Rn */
	r9 += r2;  /* 0C09EA48 add Rm,Rn */
	r9 += 0x2u;  /* 0C09EA4A add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C09EA4Eu, 4);  /* 0C09EA4C mov.b @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C09EA4E tst Rm,Rn */
	{ u32 c_ = !T; IF(0x0C09EA52u); MACL = r3 * r6; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C09EA58u, 5); goto L_0C09EA58; } goto L_0C09EA54; }  /* 0C09EA50 bf/s */
L_0C09EA54: BLKS(0x0C09EA54u);
	{ IF(0x0C09EA56u); r1 = MACL; /* slot sts macl,Rn */ UPD(0x0C09EB50u, 5); goto L_0C09EB50; }  /* 0C09EA54 bra */
L_0C09EA58: BLKS(0x0C09EA58u);
	IF(0x0C09EA58u); MACL = r3 * r6;  /* 0C09EA58 mul.l Rm,Rn */
	IF(0x0C09EA5Au); r1 = MACL;  /* 0C09EA5A sts macl,Rn */
	r1 += r5;  /* 0C09EA5C add Rm,Rn */
	r1 += r2;  /* 0C09EA5E add Rm,Rn */
	r1 += 0x2u;  /* 0C09EA60 add #imm,Rn */
	UPD(0x0C09EA62u, 6);
L_0C09EA62: BLKS(0x0C09EA62u);
	r5 = (u32)(s32)(s8)R8(r1); UPD(0x0C09EA64u, 1);  /* 0C09EA62 mov.b @Rm,Rn */
	r6 = 0x8u;  /* 0C09EA64 mov #imm,Rn */
	r5 &= r6;  /* 0C09EA66 and Rm,Rn */
	T = (r5 & r5) == 0;  /* 0C09EA68 tst Rm,Rn */
	if (!T) { UPD(0x0C09EAE0u, 6); goto L_0C09EAE0; }  /* 0C09EA6A bf */
L_0C09EA6C: BLKS(0x0C09EA6Cu);
	r2 = 0xB4u; UPD(0x0C09EA6Eu, 1);  /* 0C09EA6C mov.w @(disp,pc),Rn */
	IF(0x0C09EA6Eu); MACL = r13 * r2;  /* 0C09EA6E mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C09EA72u, 3);  /* 0C09EA70 mov.l @(disp,pc),Rn */
	IF(0x0C09EA72u); r2 = MACL;  /* 0C09EA72 sts macl,Rn */
	r2 += r7;  /* 0C09EA74 add Rm,Rn */
	r0 = R32(r2 + 0xCu); UPD(0x0C09EA78u, 3);  /* 0C09EA76 mov.l @(disp,Rm),Rn */
	T = r0 == 0x10u;  /* 0C09EA78 cmp/eq #imm,r0 */
	{ u32 c_ = !T; r3 = 0x10u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C09EA82u, 4); goto L_0C09EA82; } goto L_0C09EA7E; }  /* 0C09EA7A bf/s */
L_0C09EA7E: BLKS(0x0C09EA7Eu);
	{ r5 = R32(r2 + 0x8u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C09E7D2u, 4); goto L_0C09E7D2; }  /* 0C09EA7E bra */
L_0C09EA82: BLKS(0x0C09EA82u);
	T = (s32)r0 > (s32)r3;  /* 0C09EA82 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C09EAA0u, 4); goto L_0C09EAA0; }  /* 0C09EA84 bf */
L_0C09EA86: BLKS(0x0C09EA86u);
	r0 += 0xFFFFFFFFu;  /* 0C09EA86 add #imm,Rn */
	UPD(0x0C09EA88u, 1);
L_0C09EA88: BLKS(0x0C09EA88u);
	W32(r2 + 0xCu, r0); UPD(0x0C09EA8Au, 1);  /* 0C09EA88 mov.l Rm,@(disp,Rn) */
	r0 = 0xC0A8AE0u; UPD(0x0C09EA8Cu, 1);  /* 0C09EA8A mov.l @(disp,pc),Rn */
	IF(0x0C09EA8Cu); { u32 t_ = r0; PR = 0x0C09EA90u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C09EA90u); }  /* 0C09EA8C jsr @Rn */
L_0C09EA90: BLKS(0x0C09EA90u);
	r12 = 0xFFFFE1C0u; UPD(0x0C09EA92u, 1);  /* 0C09EA90 mov.w @(disp,pc),Rn */
	IF(0x0C09EA92u); { u32 tv_ = (r12 + 0x0C09EA96u); u32 t_ = PHYS(tv_); r14 += 0x18u; /* slot add #imm,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C09CC56u: goto L_0C09CC56; default: JUMPD(tv_); } }  /* 0C09EA92 braf Rn */
L_0C09EAA0: BLKS(0x0C09EAA0u);
	{ r0 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C09EA88u, 3); goto L_0C09EA88; }  /* 0C09EAA0 bra */
L_0C09EAE0: BLKS(0x0C09EAE0u);
	r9 = 0xC069BF0u; UPD(0x0C09EAE2u, 1);  /* 0C09EAE0 mov.l @(disp,pc),Rn */
	r12 = 0xC068F00u; UPD(0x0C09EAE4u, 1);  /* 0C09EAE2 mov.l @(disp,pc),Rn */
	IF(0x0C09EAE4u); { u32 t_ = r9; PR = 0x0C09EAE8u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069BF0, 0x0C069BF0u, 0x0C09EAE8u); }  /* 0C09EAE4 jsr @Rn */
L_0C09EAE8: BLKS(0x0C09EAE8u);
	r8 = 0xB4u; UPD(0x0C09EAEAu, 1);  /* 0C09EAE8 mov.w @(disp,pc),Rn */
	r4 = r13;  /* 0C09EAEA mov Rm,Rn */
	IF(0x0C09EAECu); { u32 t_ = r12; PR = 0x0C09EAF0u; r5 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C068F00, 0x0C068F00u, 0x0C09EAF0u); }  /* 0C09EAEC jsr @Rn */
L_0C09EAF0: BLKS(0x0C09EAF0u);
	IF(0x0C09EAF0u); MACL = r13 * r8;  /* 0C09EAF0 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C09EAF4u, 3);  /* 0C09EAF2 mov.l @(disp,pc),Rn */
	IF(0x0C09EAF4u); r12 = MACL;  /* 0C09EAF4 sts macl,Rn */
	r11 = 0x86u; UPD(0x0C09EAF8u, 2);  /* 0C09EAF6 mov.w @(disp,pc),Rn */
	r12 += r9;  /* 0C09EAF8 add Rm,Rn */
	r11 += r12;  /* 0C09EAFA add Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r11); UPD(0x0C09EAFEu, 3);  /* 0C09EAFC mov.w @Rm,Rn */
	r0 += 0x8u;  /* 0C09EAFE add #imm,Rn */
	IF(0x0C09EB00u); r0 >>= 2;  /* 0C09EB00 shlr2 Rn */
	IF(0x0C09EB02u); r0 >>= 2;  /* 0C09EB02 shlr2 Rn */
	r0 &= 0x1Fu;  /* 0C09EB04 and #imm,r0 */
	W32(r12 + 0xCu, r0); UPD(0x0C09EB08u, 5);  /* 0C09EB06 mov.l Rm,@(disp,Rn) */
	r0 = 0xC0A8AE0u; UPD(0x0C09EB0Au, 1);  /* 0C09EB08 mov.l @(disp,pc),Rn */
	IF(0x0C09EB0Au); { u32 t_ = r0; PR = 0x0C09EB0Eu; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C09EB0Eu); }  /* 0C09EB0A jsr @Rn */
L_0C09EB0E: BLKS(0x0C09EB0Eu);
	IF(0x0C09EB0Eu); MACL = r10 * r8;  /* 0C09EB0E mul.l Rm,Rn */
	r4 = r13;  /* 0C09EB10 mov Rm,Rn */
	r13 = 0xC0BC1B0u; UPD(0x0C09EB14u, 4);  /* 0C09EB12 mov.l @(disp,pc),Rn */
	IF(0x0C09EB14u); r0 = MACL;  /* 0C09EB14 sts macl,Rn */
	r8 = 0xA2u; UPD(0x0C09EB18u, 2);  /* 0C09EB16 mov.w @(disp,pc),Rn */
	r0 += r9;  /* 0C09EB18 add Rm,Rn */
	IF(0x0C09EB1Au); r0 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C09EB1Cu, 2);  /* 0C09EB1A mov.b @(r0,Rm),Rn */
	r6 = 0x3u;  /* 0C09EB1C mov #imm,Rn */
	r3 = 0xC1CB8ECu; UPD(0x0C09EB20u, 2);  /* 0C09EB1E mov.l @(disp,pc),Rn */
	r0 += r0;  /* 0C09EB20 add Rm,Rn */
	IF(0x0C09EB22u); { u32 t_ = r13; PR = 0x0C09EB26u; IF(0x0C09EB24u); r5 = (u32)(s32)(s16)R16(r0 + r3); /* slot mov.w @(r0,Rm),Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C09EB26u); }  /* 0C09EB22 jsr @Rn */
L_0C09EB26: BLKS(0x0C09EB26u);
	T = (r0 & r0) == 0;  /* 0C09EB26 tst Rm,Rn */
	if (T) { UPD(0x0C09EA90u, 4); goto L_0C09EA90; }  /* 0C09EB28 bt */
L_0C09EB2A: BLKS(0x0C09EB2Au);
	r11 = (u32)(s32)(s16)R16(r11); UPD(0x0C09EB2Cu, 1);  /* 0C09EB2A mov.w @Rm,Rn */
	r8 = 0xC069B20u; UPD(0x0C09EB2Eu, 1);  /* 0C09EB2C mov.l @(disp,pc),Rn */
	r5 = 0x100000u; UPD(0x0C09EB30u, 1);  /* 0C09EB2E mov.l @(disp,pc),Rn */
	IF(0x0C09EB30u); { u32 t_ = r8; PR = 0x0C09EB34u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C09EB34u); }  /* 0C09EB30 jsr @Rn */
L_0C09EB34: BLKS(0x0C09EB34u);
	r4 = R32(r12 + 0x24u); UPD(0x0C09EB36u, 1);  /* 0C09EB34 mov.l @(disp,Rm),Rn */
	r13 = 0xC069AF0u; UPD(0x0C09EB38u, 1);  /* 0C09EB36 mov.l @(disp,pc),Rn */
	r4 += r0;  /* 0C09EB38 add Rm,Rn */
	W32(r14, r4); UPD(0x0C09EB3Cu, 2);  /* 0C09EB3A mov.l Rm,@Rn */
	r5 = 0xCCCCCu; UPD(0x0C09EB3Eu, 1);  /* 0C09EB3C mov.l @(disp,pc),Rn */
	IF(0x0C09EB3Eu); { u32 t_ = r13; PR = 0x0C09EB42u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C09EB42u); }  /* 0C09EB3E jsr @Rn */
L_0C09EB42: BLKS(0x0C09EB42u);
	r6 = R32(r12 + 0x28u); UPD(0x0C09EB44u, 1);  /* 0C09EB42 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C09EB44 add #imm,Rn */
	r10 = 0x30000u; UPD(0x0C09EB48u, 2);  /* 0C09EB46 mov.l @(disp,pc),Rn */
	r6 += r0;  /* 0C09EB48 add Rm,Rn */
	W32(r15, r10); UPD(0x0C09EB4Cu, 2);  /* 0C09EB4A mov.l Rm,@Rn */
	{ r4 = 0x3u; /* slot mov #imm,Rn */ UPD(0x0C09E6D2u, 3); goto L_0C09E6D2; }  /* 0C09EB4C bra */
L_0C09EB50: BLKS(0x0C09EB50u);
	r1 += r5;  /* 0C09EB50 add Rm,Rn */
	r1 += r2;  /* 0C09EB52 add Rm,Rn */
	{ r1 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C09EA62u, 5); goto L_0C09EA62; }  /* 0C09EB54 bra */
}

void blk_f_0C09EB90(sh3_t *c)
{
	LOCALS;
L_0C09EB90: BLKS(0x0C09EB90u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C09EB92u, 1);  /* 0C09EB90 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C09EB94u, 1);  /* 0C09EB92 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C09EB96u, 1);  /* 0C09EB94 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C09EB98u, 1);  /* 0C09EB96 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C09EB9Au, 1);  /* 0C09EB98 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C09EB9Cu, 1);  /* 0C09EB9A mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C09EB9Eu, 1);  /* 0C09EB9C mov.l Rm,@-Rn */
	r9 = 0xC2460ACu; UPD(0x0C09EBA0u, 1);  /* 0C09EB9E mov.l @(disp,pc),Rn */
	IF(0x0C09EBA0u); r15 -= 4; W32(r15, PR); UPD(0x0C09EBA2u, 1);  /* 0C09EBA0 sts.l pr,@-Rn */
	r8 = 0xC069510u; UPD(0x0C09EBA4u, 1);  /* 0C09EBA2 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF0u;  /* 0C09EBA4 add #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r9); UPD(0x0C09EBA8u, 2);  /* 0C09EBA6 mov.w @Rm,Rn */
	r14 = r15;  /* 0C09EBA8 mov Rm,Rn */
	r5 = 0x8000u; UPD(0x0C09EBACu, 2);  /* 0C09EBAA mov.l @(disp,pc),Rn */
	IF(0x0C09EBACu); { u32 t_ = r8; PR = 0x0C09EBB0u; r4 = r0 & 0xFFFF; /* slot extu.w Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069510, 0x0C069510u, 0x0C09EBB0u); }  /* 0C09EBAC jsr @Rn */
L_0C09EBB0: BLKS(0x0C09EBB0u);
	T = (r0 & r0) == 0;  /* 0C09EBB0 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C09EBD0u, 4); goto L_0C09EBD0; } UPD(0x0C09EBB6u, 1); goto L_0C09EBB6; }  /* 0C09EBB2 bf/s */
L_0C09EBB6: BLKS(0x0C09EBB6u);
	r14 += 0x10u;  /* 0C09EBB6 add #imm,Rn */
	r15 = r14;  /* 0C09EBB8 mov Rm,Rn */
	IF(0x0C09EBBAu); PR = R32(r15); r15 += 4; UPD(0x0C09EBBCu, 3);  /* 0C09EBBA lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09EBBEu, 1);  /* 0C09EBBC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C09EBC0u, 1);  /* 0C09EBBE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09EBC2u, 1);  /* 0C09EBC0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09EBC4u, 1);  /* 0C09EBC2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09EBC6u, 1);  /* 0C09EBC4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09EBC8u, 1);  /* 0C09EBC6 mov.l @Rm+,Rn */
	IF(0x0C09EBC8u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C09EBC8 rts */
L_0C09EBD0: BLKS(0x0C09EBD0u);
	r8 = 0xC071740u; UPD(0x0C09EBD2u, 1);  /* 0C09EBD0 mov.l @(disp,pc),Rn */
	IF(0x0C09EBD2u); { u32 t_ = r8; PR = 0x0C09EBD6u; r4 = 0x2Fu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C071740, 0x0C071740u, 0x0C09EBD6u); }  /* 0C09EBD2 jsr @Rn */
L_0C09EBD6: BLKS(0x0C09EBD6u);
	T = (r0 & r0) == 0;  /* 0C09EBD6 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C09EBB6u, 4); goto L_0C09EBB6; } goto L_0C09EBDC; }  /* 0C09EBD8 bt/s */
L_0C09EBDC: BLKS(0x0C09EBDCu);
	r13 = 0xC28EDFCu; UPD(0x0C09EBDEu, 2);  /* 0C09EBDC mov.l @(disp,pc),Rn */
	r8 = 0xB4u; UPD(0x0C09EBE0u, 1);  /* 0C09EBDE mov.w @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r13); r13 += 2; r1 = v_; } UPD(0x0C09EBE2u, 1);  /* 0C09EBE0 mov.w @Rm+,Rn */
	IF(0x0C09EBE2u); MACL = r1 * r8;  /* 0C09EBE2 mul.l Rm,Rn */
	r11 = 0xC2B03A2u; UPD(0x0C09EBE6u, 3);  /* 0C09EBE4 mov.l @(disp,pc),Rn */
	r3 = (u32)(s32)(s16)R16(r9); UPD(0x0C09EBE8u, 1);  /* 0C09EBE6 mov.w @Rm,Rn */
	IF(0x0C09EBE8u); r8 = MACL;  /* 0C09EBE8 sts macl,Rn */
	r6 = 0xC286578u; UPD(0x0C09EBECu, 2);  /* 0C09EBEA mov.l @(disp,pc),Rn */
	r2 = r3 & 0xFFFF;  /* 0C09EBEC extu.w Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r11); UPD(0x0C09EBF0u, 2);  /* 0C09EBEE mov.w @Rm,Rn */
	r8 += r6;  /* 0C09EBF0 add Rm,Rn */
	r0 = 0x8Au; UPD(0x0C09EBF4u, 2);  /* 0C09EBF2 mov.w @(disp,pc),Rn */
	r11 = 0x0u;  /* 0C09EBF4 mov #imm,Rn */
	r9 = 0x86u; UPD(0x0C09EBF8u, 2);  /* 0C09EBF6 mov.w @(disp,pc),Rn */
	IF(0x0C09EBF8u); W16(r0 + r8, r4); UPD(0x0C09EBFAu, 1);  /* 0C09EBF8 mov.w Rm,@(r0,Rn) */
	r9 += r8;  /* 0C09EBFA add Rm,Rn */
	W32(r14, r1); UPD(0x0C09EBFEu, 2);  /* 0C09EBFC mov.l Rm,@Rn */
	W16(r9, r4); UPD(0x0C09EC00u, 1);  /* 0C09EBFE mov.w Rm,@Rn */
	r0 = 0xC0A8A30u; UPD(0x0C09EC02u, 1);  /* 0C09EC00 mov.l @(disp,pc),Rn */
	r5 = 0xF3008100u; UPD(0x0C09EC04u, 1);  /* 0C09EC02 mov.l @(disp,pc),Rn */
	r10 = 0xC0722E0u; UPD(0x0C09EC06u, 1);  /* 0C09EC04 mov.l @(disp,pc),Rn */
	r4 = R32(r14); UPD(0x0C09EC08u, 1);  /* 0C09EC06 mov.l @Rm,Rn */
	r12 = 0x1900000u; UPD(0x0C09EC0Au, 1);  /* 0C09EC08 mov.l @(disp,pc),Rn */
	W32(r8, r5); UPD(0x0C09EC0Cu, 1);  /* 0C09EC0A mov.l Rm,@Rn */
	W32(r8 + 0x4u, r2); UPD(0x0C09EC0Eu, 1);  /* 0C09EC0C mov.l Rm,@(disp,Rn) */
	W32(r8 + 0xCu, r11); UPD(0x0C09EC10u, 1);  /* 0C09EC0E mov.l Rm,@(disp,Rn) */
	IF(0x0C09EC10u); { u32 t_ = r0; PR = 0x0C09EC14u; W32(r8 + 0x8u, r11); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C09EC14u); }  /* 0C09EC10 jsr @Rn */
L_0C09EC14: BLKS(0x0C09EC14u);
	W32(r8 + 0x24u, r12); UPD(0x0C09EC16u, 1);  /* 0C09EC14 mov.l Rm,@(disp,Rn) */
	IF(0x0C09EC16u); { u32 t_ = r10; PR = 0x0C09EC1Au; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0722E0, 0x0C0722E0u, 0x0C09EC1Au); }  /* 0C09EC16 jsr @Rn */
L_0C09EC1A: BLKS(0x0C09EC1Au);
	r7 = 0xC0A9AE0u; UPD(0x0C09EC1Cu, 1);  /* 0C09EC1A mov.l @(disp,pc),Rn */
	r12 = r8;  /* 0C09EC1C mov Rm,Rn */
	IF(0x0C09EC1Eu); { u32 t_ = r7; PR = 0x0C09EC22u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C09EC22u); }  /* 0C09EC1E jsr @Rn */
L_0C09EC22: BLKS(0x0C09EC22u);
	r2 = 0xA0u; UPD(0x0C09EC24u, 1);  /* 0C09EC22 mov.w @(disp,pc),Rn */
	r4 = r8;  /* 0C09EC24 mov Rm,Rn */
	r2 += r8;  /* 0C09EC26 add Rm,Rn */
	r2 += 0x3u;  /* 0C09EC28 add #imm,Rn */
	W8(r2, r11); UPD(0x0C09EC2Cu, 4);  /* 0C09EC2A mov.b Rm,@Rn */
	r6 = 0x12u;  /* 0C09EC2C mov #imm,Rn */
	r1 = 0xACu; UPD(0x0C09EC30u, 2);  /* 0C09EC2E mov.w @(disp,pc),Rn */
	r0 = 0xA9u; UPD(0x0C09EC32u, 1);  /* 0C09EC30 mov.w @(disp,pc),Rn */
	r4 += r1;  /* 0C09EC32 add Rm,Rn */
	{ u32 v_ = r11; r2 -= 1; W8(r2, v_); } UPD(0x0C09EC36u, 2);  /* 0C09EC34 mov.b Rm,@-Rn */
	r4 += 0x1u;  /* 0C09EC36 add #imm,Rn */
	IF(0x0C09EC38u); W8(r0 + r8, r6); UPD(0x0C09EC3Au, 2);  /* 0C09EC38 mov.b Rm,@(r0,Rn) */
	W8(r4, r6); UPD(0x0C09EC3Cu, 1);  /* 0C09EC3A mov.b Rm,@Rn */
	r0 += 0xFFFFFFE3u;  /* 0C09EC3C add #imm,Rn */
	{ u32 v_ = r11; r2 -= 1; W8(r2, v_); } UPD(0x0C09EC40u, 2);  /* 0C09EC3E mov.b Rm,@-Rn */
	r5 = 0x100u; UPD(0x0C09EC42u, 1);  /* 0C09EC40 mov.w @(disp,pc),Rn */
	r3 = 0x20000u; UPD(0x0C09EC44u, 1);  /* 0C09EC42 mov.l @(disp,pc),Rn */
	W16(r9, r5); UPD(0x0C09EC46u, 1);  /* 0C09EC44 mov.w Rm,@Rn */
	IF(0x0C09EC46u); W32(r0 + r8, r3); UPD(0x0C09EC48u, 1);  /* 0C09EC46 mov.l Rm,@(r0,Rn) */
	W32(r14 + 0x4u, r11); UPD(0x0C09EC4Au, 1);  /* 0C09EC48 mov.l Rm,@(disp,Rn) */
	W32(r14 + 0xCu, r11); UPD(0x0C09EC4Cu, 1);  /* 0C09EC4A mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x8u, r4); UPD(0x0C09EC4Eu, 1);  /* 0C09EC4C mov.l Rm,@(disp,Rn) */
	IF(0x0C09EC4Eu); ;  /* 0C09EC4E nop */
	UPD(0x0C09EC50u, 1);
L_0C09EC50: BLKS(0x0C09EC50u);
	{ u32 v_ = (u32)(s32)(s16)R16(r13); r13 += 2; r10 = v_; } UPD(0x0C09EC52u, 1);  /* 0C09EC50 mov.w @Rm+,Rn */
	r8 = 0xB4u; UPD(0x0C09EC54u, 1);  /* 0C09EC52 mov.w @(disp,pc),Rn */
	IF(0x0C09EC54u); MACL = r10 * r8;  /* 0C09EC54 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C09EC58u, 3);  /* 0C09EC56 mov.l @(disp,pc),Rn */
	IF(0x0C09EC58u); r8 = MACL;  /* 0C09EC58 sts macl,Rn */
	r8 += r9;  /* 0C09EC5A add Rm,Rn */
	r1 = R32(r14 + 0xCu); UPD(0x0C09EC5Eu, 3);  /* 0C09EC5C mov.l @(disp,Rm),Rn */
	r8 += 0x7Cu;  /* 0C09EC5E add #imm,Rn */
	r9 = 0xC1D086Cu; UPD(0x0C09EC62u, 2);  /* 0C09EC60 mov.l @(disp,pc),Rn */
	r9 += r1;  /* 0C09EC62 add Rm,Rn */
	r9 += 0x4u;  /* 0C09EC64 add #imm,Rn */
	r7 = (u32)(s32)(s16)R16(r9); UPD(0x0C09EC68u, 3);  /* 0C09EC66 mov.w @Rm,Rn */
	r1 = 0x0u;  /* 0C09EC68 mov #imm,Rn */
	r0 = 0xC28EDFCu; UPD(0x0C09EC6Cu, 2);  /* 0C09EC6A mov.l @(disp,pc),Rn */
	r7 += r7;  /* 0C09EC6C add Rm,Rn */
	IF(0x0C09EC6Eu); r11 = (u32)(s32)(s16)R16(r0 + r7); UPD(0x0C09EC70u, 2);  /* 0C09EC6E mov.w @(r0,Rm),Rn */
	r9 += 0xFFFFFFFCu;  /* 0C09EC70 add #imm,Rn */
	W16(r8, r11); UPD(0x0C09EC74u, 2);  /* 0C09EC72 mov.w Rm,@Rn */
	r0 = 0x2u;  /* 0C09EC74 mov #imm,Rn */
	IF(0x0C09EC76u); r5 = (u32)(s32)(s16)R16(r0 + r14); UPD(0x0C09EC78u, 2);  /* 0C09EC76 mov.w @(r0,Rm),Rn */
	r8 += 0x2u;  /* 0C09EC78 add #imm,Rn */
	W16(r8, r5); UPD(0x0C09EC7Cu, 2);  /* 0C09EC7A mov.w Rm,@Rn */
	r2 = 0xC2460ACu; UPD(0x0C09EC7Eu, 1);  /* 0C09EC7C mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFF82u;  /* 0C09EC7E add #imm,Rn */
	r4 = (u32)(s32)(s16)R16(r2); UPD(0x0C09EC82u, 2);  /* 0C09EC80 mov.w @Rm,Rn */
	r3 = R32(r9); UPD(0x0C09EC84u, 1);  /* 0C09EC82 mov.l @Rm,Rn */
	r0 = r4 & 0xFFFF;  /* 0C09EC84 extu.w Rm,Rn */
	r6 = 0xC0000100u; UPD(0x0C09EC88u, 2);  /* 0C09EC86 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C09EC88 mov Rm,Rn */
	r11 = 0xC0A8A30u; UPD(0x0C09EC8Cu, 2);  /* 0C09EC8A mov.l @(disp,pc),Rn */
	r3 |= r6;  /* 0C09EC8C or Rm,Rn */
	r7 = R32(r9 + 0x8u); UPD(0x0C09EC90u, 2);  /* 0C09EC8E mov.l @(disp,Rm),Rn */
	W32(r8 + 0xCu, r1); UPD(0x0C09EC92u, 1);  /* 0C09EC90 mov.l Rm,@(disp,Rn) */
	W32(r8, r3); UPD(0x0C09EC94u, 1);  /* 0C09EC92 mov.l Rm,@Rn */
	W32(r8 + 0x4u, r0); UPD(0x0C09EC96u, 1);  /* 0C09EC94 mov.l Rm,@(disp,Rn) */
	IF(0x0C09EC96u); { u32 t_ = r11; PR = 0x0C09EC9Au; W32(r8 + 0x8u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C09EC9Au); }  /* 0C09EC96 jsr @Rn */
L_0C09EC9A: BLKS(0x0C09EC9Au);
	r5 = 0xC2B03A2u; UPD(0x0C09EC9Cu, 1);  /* 0C09EC9A mov.l @(disp,pc),Rn */
	r6 = (u32)(s32)(s16)R16(r5); UPD(0x0C09EC9Eu, 1);  /* 0C09EC9C mov.w @Rm,Rn */
	r4 = R32(r9 + 0xCu); UPD(0x0C09ECA0u, 1);  /* 0C09EC9E mov.l @(disp,Rm),Rn */
	IF(0x0C09ECA0u); r6 >>= 2;  /* 0C09ECA0 shlr2 Rn */
	r0 = R32(r9 + 0x10u); UPD(0x0C09ECA4u, 2);  /* 0C09ECA2 mov.l @(disp,Rm),Rn */
	IF(0x0C09ECA4u); r6 >>= 2;  /* 0C09ECA4 shlr2 Rn */
	r7 = 0xC0A9AE0u; UPD(0x0C09ECA8u, 2);  /* 0C09ECA6 mov.l @(disp,pc),Rn */
	IF(0x0C09ECA8u); r6 >>= 2;  /* 0C09ECA8 shlr2 Rn */
	r11 = 0x86u; UPD(0x0C09ECACu, 2);  /* 0C09ECAA mov.w @(disp,pc),Rn */
	r9 += 0x14u;  /* 0C09ECAC add #imm,Rn */
	r3 = R32(r12 + 0x24u); UPD(0x0C09ECB0u, 2);  /* 0C09ECAE mov.l @(disp,Rm),Rn */
	r11 += r8;  /* 0C09ECB0 add Rm,Rn */
	r2 = R32(r12 + 0x28u); UPD(0x0C09ECB4u, 2);  /* 0C09ECB2 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x2Cu, r4); UPD(0x0C09ECB6u, 1);  /* 0C09ECB4 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x30u, r0); UPD(0x0C09ECB8u, 1);  /* 0C09ECB6 mov.l Rm,@(disp,Rn) */
	r4 = r10;  /* 0C09ECB8 mov Rm,Rn */
	W16(r11, r6); UPD(0x0C09ECBCu, 2);  /* 0C09ECBA mov.w Rm,@Rn */
	W32(r8 + 0x24u, r3); UPD(0x0C09ECBEu, 1);  /* 0C09ECBC mov.l Rm,@(disp,Rn) */
	IF(0x0C09ECBEu); { u32 t_ = r7; PR = 0x0C09ECC2u; W32(r8 + 0x28u, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C09ECC2u); }  /* 0C09ECBE jsr @Rn */
L_0C09ECC2: BLKS(0x0C09ECC2u);
	r0 = 0xB0u; UPD(0x0C09ECC4u, 1);  /* 0C09ECC2 mov.w @(disp,pc),Rn */
	r4 = r8;  /* 0C09ECC4 mov Rm,Rn */
	IF(0x0C09ECC6u); r5 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C09ECC8u, 2);  /* 0C09ECC6 mov.b @(r0,Rm),Rn */
	r6 = 0xA8u; UPD(0x0C09ECCAu, 1);  /* 0C09ECC8 mov.w @(disp,pc),Rn */
	IF(0x0C09ECCAu); W8(r0 + r8, r5); UPD(0x0C09ECCCu, 1);  /* 0C09ECCA mov.b Rm,@(r0,Rn) */
	r4 += r6;  /* 0C09ECCC add Rm,Rn */
	r6 += r12;  /* 0C09ECCE add Rm,Rn */
	r6 += 0x1u;  /* 0C09ECD0 add #imm,Rn */
	r5 = 0xACu; UPD(0x0C09ECD4u, 4);  /* 0C09ECD2 mov.w @(disp,pc),Rn */
	r4 += 0x1u;  /* 0C09ECD4 add #imm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r9); r9 += 1; r3 = v_; } UPD(0x0C09ECD8u, 2);  /* 0C09ECD6 mov.b @Rm+,Rn */
	r5 += r8;  /* 0C09ECD8 add Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r6); UPD(0x0C09ECDCu, 2);  /* 0C09ECDA mov.b @Rm,Rn */
	r5 += 0x3u;  /* 0C09ECDC add #imm,Rn */
	r2 += r3;  /* 0C09ECDE add Rm,Rn */
	W8(r5, r3); UPD(0x0C09ECE2u, 3);  /* 0C09ECE0 mov.b Rm,@Rn */
	W8(r4, r2); UPD(0x0C09ECE4u, 1);  /* 0C09ECE2 mov.b Rm,@Rn */
	r5 += 0xFFFFFFFEu;  /* 0C09ECE4 add #imm,Rn */
	r7 = 0xA0u; UPD(0x0C09ECE8u, 2);  /* 0C09ECE6 mov.w @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r9); r9 += 1; r0 = v_; } UPD(0x0C09ECEAu, 1);  /* 0C09ECE8 mov.b @Rm+,Rn */
	r7 += r8;  /* 0C09ECEA add Rm,Rn */
	r7 += 0x1u;  /* 0C09ECEC add #imm,Rn */
	W8(r7, r0); UPD(0x0C09ECF0u, 3);  /* 0C09ECEE mov.b Rm,@Rn */
	r10 = (u32)(s32)(s8)R8(r9); UPD(0x0C09ECF2u, 1);  /* 0C09ECF0 mov.b @Rm,Rn */
	r7 += 0x1u;  /* 0C09ECF2 add #imm,Rn */
	W8(r7, r10); UPD(0x0C09ECF6u, 2);  /* 0C09ECF4 mov.b Rm,@Rn */
	r9 = 0x2Cu;  /* 0C09ECF6 mov #imm,Rn */
	r1 = R32(r14 + 0x8u); UPD(0x0C09ECFAu, 2);  /* 0C09ECF8 mov.l @(disp,Rm),Rn */
	r6 = (u32)(s32)(s8)R8(r1); UPD(0x0C09ECFCu, 1);  /* 0C09ECFA mov.b @Rm,Rn */
	W8(r5, r6); UPD(0x0C09ECFEu, 1);  /* 0C09ECFC mov.b Rm,@Rn */
	r0 = R32(r14 + 0x4u); UPD(0x0C09ED00u, 1);  /* 0C09ECFE mov.l @(disp,Rm),Rn */
	r0 += 0x1u;  /* 0C09ED00 add #imm,Rn */
	r10 = (u32)(s32)(s16)r0;  /* 0C09ED02 exts.w Rm,Rn */
	r4 = R32(r14 + 0xCu); UPD(0x0C09ED06u, 3);  /* 0C09ED04 mov.l @(disp,Rm),Rn */
	W32(r14 + 0x4u, r10); UPD(0x0C09ED08u, 1);  /* 0C09ED06 mov.l Rm,@(disp,Rn) */
	r4 += 0x18u;  /* 0C09ED08 add #imm,Rn */
	r3 = R32(r12 + 0x38u); UPD(0x0C09ED0Cu, 2);  /* 0C09ED0A mov.l @(disp,Rm),Rn */
	r2 = 0x100u; UPD(0x0C09ED0Eu, 1);  /* 0C09ED0C mov.w @(disp,pc),Rn */
	r7 = R32(r14 + 0x4u); UPD(0x0C09ED10u, 1);  /* 0C09ED0E mov.l @(disp,Rm),Rn */
	W32(r8 + 0x38u, r3); UPD(0x0C09ED12u, 1);  /* 0C09ED10 mov.l Rm,@(disp,Rn) */
	T = (s32)r7 > (s32)r9;  /* 0C09ED12 cmp/gt Rm,Rn */
	W16(r11, r2); UPD(0x0C09ED16u, 2);  /* 0C09ED14 mov.w Rm,@Rn */
	{ u32 c_ = !T; W32(r14 + 0xCu, r4); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C09EC50u, 3); goto L_0C09EC50; } UPD(0x0C09ED1Au, 1); goto L_0C09ED1A; }  /* 0C09ED16 bf/s */
L_0C09ED1A: BLKS(0x0C09ED1Au);
	r10 = 0xC3C4164u; UPD(0x0C09ED1Cu, 1);  /* 0C09ED1A mov.l @(disp,pc),Rn */
	r12 = 0x0u;  /* 0C09ED1C mov #imm,Rn */
	r13 = 0xC3C4165u; UPD(0x0C09ED20u, 2);  /* 0C09ED1E mov.l @(disp,pc),Rn */
	r0 = 0x1u;  /* 0C09ED20 mov #imm,Rn */
	W8(r10, r12); UPD(0x0C09ED24u, 2);  /* 0C09ED22 mov.b Rm,@Rn */
	{ W8(r13, r12); /* slot mov.b Rm,@Rn */ UPD(0x0C09EBB6u, 3); goto L_0C09EBB6; }  /* 0C09ED24 bra */
}

void blk_f_0C09ED80(sh3_t *c)
{
	LOCALS;
L_0C09ED80: BLKS(0x0C09ED80u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C09ED82u, 1);  /* 0C09ED80 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C09ED84u, 1);  /* 0C09ED82 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C09ED86u, 1);  /* 0C09ED84 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C09ED88u, 1);  /* 0C09ED86 mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s16)r4;  /* 0C09ED88 exts.w Rm,Rn */
	r3 = 0xB4u; UPD(0x0C09ED8Cu, 2);  /* 0C09ED8A mov.w @(disp,pc),Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C09ED8Eu, 1);  /* 0C09ED8C mov.l Rm,@-Rn */
	IF(0x0C09ED8Eu); MACL = r10 * r3;  /* 0C09ED8E mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C09ED92u, 3);  /* 0C09ED90 mov.l Rm,@-Rn */
	r0 = 0xC286578u; UPD(0x0C09ED94u, 1);  /* 0C09ED92 mov.l @(disp,pc),Rn */
	IF(0x0C09ED94u); r2 = MACL;  /* 0C09ED94 sts macl,Rn */
	IF(0x0C09ED96u); r15 -= 4; W32(r15, PR); UPD(0x0C09ED98u, 2);  /* 0C09ED96 sts.l pr,@-Rn */
	r0 += r2;  /* 0C09ED98 add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C09ED9Cu, 2);  /* 0C09ED9A mov.l @(disp,Rm),Rn */
	r0 = 0x25u;  /* 0C09ED9C mov #imm,Rn */
	T = r2 > r0;  /* 0C09ED9E cmp/hi Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C09EDA8u, 5); goto L_0C09EDA8; } goto L_0C09EDA4; }  /* 0C09EDA0 bf/s */
L_0C09EDA4: BLKS(0x0C09EDA4u);
	{ IF(0x0C09EDA6u); ; /* slot nop */ UPD(0x0C09F370u, 4); goto L_0C09F370; }  /* 0C09EDA4 bra */
L_0C09EDA8: BLKS(0x0C09EDA8u);
	r0 = 0xC09EDB8u;  /* 0C09EDA8 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C09EDAA add Rm,Rn */
	IF(0x0C09EDACu); r4 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C09EDAEu, 3);  /* 0C09EDAC mov.w @(r0,Rm),Rn */
	IF(0x0C09EDAEu); { u32 tv_ = (r4 + 0x0C09EDB2u); u32 t_ = PHYS(tv_); IF(0x0C09EDB0u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C09EDAE braf Rn */
L_0C09EE1C: BLKS(0x0C09EE1Cu);
	r4 = 0xB4u; UPD(0x0C09EE1Eu, 1);  /* 0C09EE1C mov.w @(disp,pc),Rn */
	IF(0x0C09EE1Eu); MACL = r10 * r4;  /* 0C09EE1E mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C09EE22u, 3);  /* 0C09EE20 mov.l @(disp,pc),Rn */
	IF(0x0C09EE22u); r4 = MACL;  /* 0C09EE22 sts macl,Rn */
	r4 += r3;  /* 0C09EE24 add Rm,Rn */
	r10 = R32(r4); UPD(0x0C09EE28u, 3);  /* 0C09EE26 mov.l @Rm,Rn */
	T = (r10 & r10) == 0;  /* 0C09EE28 tst Rm,Rn */
	if (!T) { UPD(0x0C09EE3Eu, 4); goto L_0C09EE3E; }  /* 0C09EE2A bf */
L_0C09EE2C: BLKS(0x0C09EE2Cu);
	r4 += 0x40u;  /* 0C09EE2C add #imm,Rn */
	r4 = R32(r4); UPD(0x0C09EE30u, 2);  /* 0C09EE2E mov.l @Rm,Rn */
	r5 = 0x1869Fu; UPD(0x0C09EE32u, 1);  /* 0C09EE30 mov.l @(disp,pc),Rn */
	T = r4 > r5;  /* 0C09EE32 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C09EE3Eu, 4); goto L_0C09EE3E; }  /* 0C09EE34 bt */
L_0C09EE36: BLKS(0x0C09EE36u);
	r8 = 0xC175064u; UPD(0x0C09EE38u, 1);  /* 0C09EE36 mov.l @(disp,pc),Rn */
	r0 = R32(r8); UPD(0x0C09EE3Au, 1);  /* 0C09EE38 mov.l @Rm,Rn */
	T = r0 == 0x3u;  /* 0C09EE3A cmp/eq #imm,r0 */
	if (T) { UPD(0x0C09EE50u, 4); goto L_0C09EE50; }  /* 0C09EE3C bt */
L_0C09EE3E: BLKS(0x0C09EE3Eu);
	r15 = r14;  /* 0C09EE3E mov Rm,Rn */
	IF(0x0C09EE40u); PR = R32(r15); r15 += 4; UPD(0x0C09EE42u, 2);  /* 0C09EE40 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09EE44u, 1);  /* 0C09EE42 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09EE46u, 1);  /* 0C09EE44 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09EE48u, 1);  /* 0C09EE46 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09EE4Au, 1);  /* 0C09EE48 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09EE4Cu, 1);  /* 0C09EE4A mov.l @Rm+,Rn */
	IF(0x0C09EE4Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C09EE4C rts */
L_0C09EE50: BLKS(0x0C09EE50u);
	r6 = 0x4u;  /* 0C09EE50 mov #imm,Rn */
	IF(0x0C09EE52u); ARG0(0x446Du); { s32 s_ = (s32)r6; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = 0; else r4 >>= ((~s_ & 31) + 1); }  /* 0C09EE52 shld Rm,Rn */
	r7 = 0x40000u; UPD(0x0C09EE56u, 3);  /* 0C09EE54 mov.l @(disp,pc),Rn */
	r2 = 0xC071C90u; UPD(0x0C09EE58u, 1);  /* 0C09EE56 mov.l @(disp,pc),Rn */
	r4 += r7;  /* 0C09EE58 add Rm,Rn */
	r15 = r14;  /* 0C09EE5A mov Rm,Rn */
	IF(0x0C09EE5Cu); PR = R32(r15); r15 += 4; UPD(0x0C09EE5Eu, 3);  /* 0C09EE5C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09EE60u, 1);  /* 0C09EE5E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09EE62u, 1);  /* 0C09EE60 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09EE64u, 1);  /* 0C09EE62 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09EE66u, 1);  /* 0C09EE64 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09EE68u, 1);  /* 0C09EE66 mov.l @Rm+,Rn */
	IF(0x0C09EE68u); { u32 tv_ = r2; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C071C90u: TAIL(blk_f_0C071C90); default: JUMPD(tv_); } }  /* 0C09EE68 jmp @Rn */
L_0C09EE70: BLKS(0x0C09EE70u);
	r4 = 0xB4u; UPD(0x0C09EE72u, 1);  /* 0C09EE70 mov.w @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C09EE72 mov #imm,Rn */
	IF(0x0C09EE74u); MACL = r10 * r4;  /* 0C09EE74 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C09EE78u, 4);  /* 0C09EE76 mov.l @(disp,pc),Rn */
	IF(0x0C09EE78u); r0 = MACL;  /* 0C09EE78 sts macl,Rn */
	{ IF(0x0C09EE7Cu); W32(r0 + r9, r3); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C09EE1Cu, 4); goto L_0C09EE1C; }  /* 0C09EE7A bra */
L_0C09F306: BLKS(0x0C09F306u);
	{ IF(0x0C09F308u); ; /* slot nop */ UPD(0x0C09EE70u, 3); goto L_0C09EE70; }  /* 0C09F306 bra */
L_0C09F370: BLKS(0x0C09F370u);
	r11 = 0xC0A8CA0u; UPD(0x0C09F372u, 1);  /* 0C09F370 mov.l @(disp,pc),Rn */
	IF(0x0C09F372u); { u32 t_ = r11; PR = 0x0C09F376u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C09F376u); }  /* 0C09F372 jsr @Rn */
L_0C09F376: BLKS(0x0C09F376u);
	IF(0x0C09F376u); T = (s32)r0 >= 0;  /* 0C09F376 cmp/pz Rn */
	if (!T) { UPD(0x0C09F306u, 4); goto L_0C09F306; }  /* 0C09F378 bf */
L_0C09F37A: BLKS(0x0C09F37Au);
	r15 += 0xFFFFFFF8u;  /* 0C09F37A add #imm,Rn */
	r12 = 0xB4u; UPD(0x0C09F37Eu, 2);  /* 0C09F37C mov.w @(disp,pc),Rn */
	IF(0x0C09F37Eu); MACL = r0 * r12;  /* 0C09F37E mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C09F382u, 3);  /* 0C09F380 mov.l @(disp,pc),Rn */
	IF(0x0C09F382u); r0 = MACL;  /* 0C09F382 sts macl,Rn */
	r11 = 0xA5u; UPD(0x0C09F386u, 2);  /* 0C09F384 mov.w @(disp,pc),Rn */
	r0 += r6;  /* 0C09F386 add Rm,Rn */
	r0 += r11;  /* 0C09F388 add Rm,Rn */
	r8 = (u32)(s32)(s8)R8(r0); UPD(0x0C09F38Cu, 3);  /* 0C09F38A mov.b @Rm,Rn */
	IF(0x0C09F38Cu); MACL = r10 * r12;  /* 0C09F38C mul.l Rm,Rn */
	r8 += 0x1u;  /* 0C09F38E add #imm,Rn */
	W8(r0, r8); UPD(0x0C09F392u, 4);  /* 0C09F390 mov.b Rm,@Rn */
	IF(0x0C09F392u); r3 = MACL;  /* 0C09F392 sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C09F396u, 2);  /* 0C09F394 mov.w @(disp,pc),Rn */
	r3 += r6;  /* 0C09F396 add Rm,Rn */
	IF(0x0C09F398u); r7 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C09F39Au, 2);  /* 0C09F398 mov.b @(r0,Rm),Rn */
	r2 = r7 & 0xFF;  /* 0C09F39A extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C09F39Eu, 2);  /* 0C09F39C mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C09F39E add #imm,Rn */
	IF(0x0C09F3A0u); r5 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C09F3A2u, 2);  /* 0C09F3A0 mov.b @(r0,Rm),Rn */
	r9 = 0xC0BFE70u; UPD(0x0C09F3A4u, 1);  /* 0C09F3A2 mov.l @(disp,pc),Rn */
	r4 = r5 & 0xFF;  /* 0C09F3A4 extu.b Rm,Rn */
	W32(r15 + 0x4u, r4); UPD(0x0C09F3A8u, 2);  /* 0C09F3A6 mov.l Rm,@(disp,Rn) */
	r5 = 0x5u;  /* 0C09F3A8 mov #imm,Rn */
	r4 = R32(r3); UPD(0x0C09F3ACu, 2);  /* 0C09F3AA mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C09F3AEu, 1);  /* 0C09F3AC mov.l @(disp,Rm),Rn */
	IF(0x0C09F3AEu); { u32 t_ = r9; PR = 0x0C09F3B2u; r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BFE70, 0x0C0BFE70u, 0x0C09F3B2u); }  /* 0C09F3AE jsr @Rn */
L_0C09F3B2: BLKS(0x0C09F3B2u);
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C09EE70u, 3); goto L_0C09EE70; }  /* 0C09F3B2 bra */
}

void blk_f_0C09EE10(sh3_t *c)
{
	LOCALS;
L_0C09EE10: BLKS(0x0C09EE10u);
	r5 = 0xC1D0CA4u; UPD(0x0C09EE12u, 1);  /* 0C09EE10 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C09EE12 mov Rm,Rn */
	r3 = 0xC0A9D90u; UPD(0x0C09EE16u, 2);  /* 0C09EE14 mov.l @(disp,pc),Rn */
	IF(0x0C09EE16u); { u32 t_ = r3; PR = 0x0C09EE1Au; IF(0x0C09EE18u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9D90, 0x0C0A9D90u, 0x0C09EE1Au); }  /* 0C09EE16 jsr @Rn */
L_0C09EE1A: BLKS(0x0C09EE1Au);
	IF(0x0C09EE1Au); ;  /* 0C09EE1A nop */
	r4 = 0xB4u; UPD(0x0C09EE1Eu, 2);  /* 0C09EE1C mov.w @(disp,pc),Rn */
	IF(0x0C09EE1Eu); MACL = r10 * r4;  /* 0C09EE1E mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C09EE22u, 3);  /* 0C09EE20 mov.l @(disp,pc),Rn */
	IF(0x0C09EE22u); r4 = MACL;  /* 0C09EE22 sts macl,Rn */
	r4 += r3;  /* 0C09EE24 add Rm,Rn */
	r10 = R32(r4); UPD(0x0C09EE28u, 3);  /* 0C09EE26 mov.l @Rm,Rn */
	T = (r10 & r10) == 0;  /* 0C09EE28 tst Rm,Rn */
	if (!T) { UPD(0x0C09EE3Eu, 4); goto L_0C09EE3E; }  /* 0C09EE2A bf */
L_0C09EE2C: BLKS(0x0C09EE2Cu);
	r4 += 0x40u;  /* 0C09EE2C add #imm,Rn */
	r4 = R32(r4); UPD(0x0C09EE30u, 2);  /* 0C09EE2E mov.l @Rm,Rn */
	r5 = 0x1869Fu; UPD(0x0C09EE32u, 1);  /* 0C09EE30 mov.l @(disp,pc),Rn */
	T = r4 > r5;  /* 0C09EE32 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C09EE3Eu, 4); goto L_0C09EE3E; }  /* 0C09EE34 bt */
L_0C09EE36: BLKS(0x0C09EE36u);
	r8 = 0xC175064u; UPD(0x0C09EE38u, 1);  /* 0C09EE36 mov.l @(disp,pc),Rn */
	r0 = R32(r8); UPD(0x0C09EE3Au, 1);  /* 0C09EE38 mov.l @Rm,Rn */
	T = r0 == 0x3u;  /* 0C09EE3A cmp/eq #imm,r0 */
	if (T) { UPD(0x0C09EE50u, 4); goto L_0C09EE50; }  /* 0C09EE3C bt */
L_0C09EE3E: BLKS(0x0C09EE3Eu);
	r15 = r14;  /* 0C09EE3E mov Rm,Rn */
	IF(0x0C09EE40u); PR = R32(r15); r15 += 4; UPD(0x0C09EE42u, 2);  /* 0C09EE40 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09EE44u, 1);  /* 0C09EE42 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09EE46u, 1);  /* 0C09EE44 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09EE48u, 1);  /* 0C09EE46 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09EE4Au, 1);  /* 0C09EE48 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09EE4Cu, 1);  /* 0C09EE4A mov.l @Rm+,Rn */
	IF(0x0C09EE4Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C09EE4C rts */
L_0C09EE50: BLKS(0x0C09EE50u);
	r6 = 0x4u;  /* 0C09EE50 mov #imm,Rn */
	IF(0x0C09EE52u); ARG0(0x446Du); { s32 s_ = (s32)r6; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = 0; else r4 >>= ((~s_ & 31) + 1); }  /* 0C09EE52 shld Rm,Rn */
	r7 = 0x40000u; UPD(0x0C09EE56u, 3);  /* 0C09EE54 mov.l @(disp,pc),Rn */
	r2 = 0xC071C90u; UPD(0x0C09EE58u, 1);  /* 0C09EE56 mov.l @(disp,pc),Rn */
	r4 += r7;  /* 0C09EE58 add Rm,Rn */
	r15 = r14;  /* 0C09EE5A mov Rm,Rn */
	IF(0x0C09EE5Cu); PR = R32(r15); r15 += 4; UPD(0x0C09EE5Eu, 3);  /* 0C09EE5C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09EE60u, 1);  /* 0C09EE5E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09EE62u, 1);  /* 0C09EE60 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09EE64u, 1);  /* 0C09EE62 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09EE66u, 1);  /* 0C09EE64 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09EE68u, 1);  /* 0C09EE66 mov.l @Rm+,Rn */
	IF(0x0C09EE68u); { u32 tv_ = r2; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C071C90u: TAIL(blk_f_0C071C90); default: JUMPD(tv_); } }  /* 0C09EE68 jmp @Rn */
}

void blk_f_0C09EE70(sh3_t *c)
{
	LOCALS;
	goto L_0C09EE70;
L_0C09EE1C: BLKS(0x0C09EE1Cu);
	r4 = 0xB4u; UPD(0x0C09EE1Eu, 1);  /* 0C09EE1C mov.w @(disp,pc),Rn */
	IF(0x0C09EE1Eu); MACL = r10 * r4;  /* 0C09EE1E mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C09EE22u, 3);  /* 0C09EE20 mov.l @(disp,pc),Rn */
	IF(0x0C09EE22u); r4 = MACL;  /* 0C09EE22 sts macl,Rn */
	r4 += r3;  /* 0C09EE24 add Rm,Rn */
	r10 = R32(r4); UPD(0x0C09EE28u, 3);  /* 0C09EE26 mov.l @Rm,Rn */
	T = (r10 & r10) == 0;  /* 0C09EE28 tst Rm,Rn */
	if (!T) { UPD(0x0C09EE3Eu, 4); goto L_0C09EE3E; }  /* 0C09EE2A bf */
L_0C09EE2C: BLKS(0x0C09EE2Cu);
	r4 += 0x40u;  /* 0C09EE2C add #imm,Rn */
	r4 = R32(r4); UPD(0x0C09EE30u, 2);  /* 0C09EE2E mov.l @Rm,Rn */
	r5 = 0x1869Fu; UPD(0x0C09EE32u, 1);  /* 0C09EE30 mov.l @(disp,pc),Rn */
	T = r4 > r5;  /* 0C09EE32 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C09EE3Eu, 4); goto L_0C09EE3E; }  /* 0C09EE34 bt */
L_0C09EE36: BLKS(0x0C09EE36u);
	r8 = 0xC175064u; UPD(0x0C09EE38u, 1);  /* 0C09EE36 mov.l @(disp,pc),Rn */
	r0 = R32(r8); UPD(0x0C09EE3Au, 1);  /* 0C09EE38 mov.l @Rm,Rn */
	T = r0 == 0x3u;  /* 0C09EE3A cmp/eq #imm,r0 */
	if (T) { UPD(0x0C09EE50u, 4); goto L_0C09EE50; }  /* 0C09EE3C bt */
L_0C09EE3E: BLKS(0x0C09EE3Eu);
	r15 = r14;  /* 0C09EE3E mov Rm,Rn */
	IF(0x0C09EE40u); PR = R32(r15); r15 += 4; UPD(0x0C09EE42u, 2);  /* 0C09EE40 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09EE44u, 1);  /* 0C09EE42 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09EE46u, 1);  /* 0C09EE44 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09EE48u, 1);  /* 0C09EE46 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09EE4Au, 1);  /* 0C09EE48 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09EE4Cu, 1);  /* 0C09EE4A mov.l @Rm+,Rn */
	IF(0x0C09EE4Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C09EE4C rts */
L_0C09EE50: BLKS(0x0C09EE50u);
	r6 = 0x4u;  /* 0C09EE50 mov #imm,Rn */
	IF(0x0C09EE52u); ARG0(0x446Du); { s32 s_ = (s32)r6; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = 0; else r4 >>= ((~s_ & 31) + 1); }  /* 0C09EE52 shld Rm,Rn */
	r7 = 0x40000u; UPD(0x0C09EE56u, 3);  /* 0C09EE54 mov.l @(disp,pc),Rn */
	r2 = 0xC071C90u; UPD(0x0C09EE58u, 1);  /* 0C09EE56 mov.l @(disp,pc),Rn */
	r4 += r7;  /* 0C09EE58 add Rm,Rn */
	r15 = r14;  /* 0C09EE5A mov Rm,Rn */
	IF(0x0C09EE5Cu); PR = R32(r15); r15 += 4; UPD(0x0C09EE5Eu, 3);  /* 0C09EE5C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09EE60u, 1);  /* 0C09EE5E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09EE62u, 1);  /* 0C09EE60 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09EE64u, 1);  /* 0C09EE62 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09EE66u, 1);  /* 0C09EE64 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09EE68u, 1);  /* 0C09EE66 mov.l @Rm+,Rn */
	IF(0x0C09EE68u); { u32 tv_ = r2; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C071C90u: TAIL(blk_f_0C071C90); default: JUMPD(tv_); } }  /* 0C09EE68 jmp @Rn */
L_0C09EE70: BLKS(0x0C09EE70u);
	r4 = 0xB4u; UPD(0x0C09EE72u, 1);  /* 0C09EE70 mov.w @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C09EE72 mov #imm,Rn */
	IF(0x0C09EE74u); MACL = r10 * r4;  /* 0C09EE74 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C09EE78u, 4);  /* 0C09EE76 mov.l @(disp,pc),Rn */
	IF(0x0C09EE78u); r0 = MACL;  /* 0C09EE78 sts macl,Rn */
	{ IF(0x0C09EE7Cu); W32(r0 + r9, r3); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C09EE1Cu, 4); goto L_0C09EE1C; }  /* 0C09EE7A bra */
}

void blk_f_0C09EE80(sh3_t *c)
{
	LOCALS;
	goto L_0C09EE80;
L_0C09EE1C: BLKS(0x0C09EE1Cu);
	r4 = 0xB4u; UPD(0x0C09EE1Eu, 1);  /* 0C09EE1C mov.w @(disp,pc),Rn */
	IF(0x0C09EE1Eu); MACL = r10 * r4;  /* 0C09EE1E mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C09EE22u, 3);  /* 0C09EE20 mov.l @(disp,pc),Rn */
	IF(0x0C09EE22u); r4 = MACL;  /* 0C09EE22 sts macl,Rn */
	r4 += r3;  /* 0C09EE24 add Rm,Rn */
	r10 = R32(r4); UPD(0x0C09EE28u, 3);  /* 0C09EE26 mov.l @Rm,Rn */
	T = (r10 & r10) == 0;  /* 0C09EE28 tst Rm,Rn */
	if (!T) { UPD(0x0C09EE3Eu, 4); goto L_0C09EE3E; }  /* 0C09EE2A bf */
L_0C09EE2C: BLKS(0x0C09EE2Cu);
	r4 += 0x40u;  /* 0C09EE2C add #imm,Rn */
	r4 = R32(r4); UPD(0x0C09EE30u, 2);  /* 0C09EE2E mov.l @Rm,Rn */
	r5 = 0x1869Fu; UPD(0x0C09EE32u, 1);  /* 0C09EE30 mov.l @(disp,pc),Rn */
	T = r4 > r5;  /* 0C09EE32 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C09EE3Eu, 4); goto L_0C09EE3E; }  /* 0C09EE34 bt */
L_0C09EE36: BLKS(0x0C09EE36u);
	r8 = 0xC175064u; UPD(0x0C09EE38u, 1);  /* 0C09EE36 mov.l @(disp,pc),Rn */
	r0 = R32(r8); UPD(0x0C09EE3Au, 1);  /* 0C09EE38 mov.l @Rm,Rn */
	T = r0 == 0x3u;  /* 0C09EE3A cmp/eq #imm,r0 */
	if (T) { UPD(0x0C09EE50u, 4); goto L_0C09EE50; }  /* 0C09EE3C bt */
L_0C09EE3E: BLKS(0x0C09EE3Eu);
	r15 = r14;  /* 0C09EE3E mov Rm,Rn */
	IF(0x0C09EE40u); PR = R32(r15); r15 += 4; UPD(0x0C09EE42u, 2);  /* 0C09EE40 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09EE44u, 1);  /* 0C09EE42 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09EE46u, 1);  /* 0C09EE44 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09EE48u, 1);  /* 0C09EE46 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09EE4Au, 1);  /* 0C09EE48 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09EE4Cu, 1);  /* 0C09EE4A mov.l @Rm+,Rn */
	IF(0x0C09EE4Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C09EE4C rts */
L_0C09EE50: BLKS(0x0C09EE50u);
	r6 = 0x4u;  /* 0C09EE50 mov #imm,Rn */
	IF(0x0C09EE52u); ARG0(0x446Du); { s32 s_ = (s32)r6; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = 0; else r4 >>= ((~s_ & 31) + 1); }  /* 0C09EE52 shld Rm,Rn */
	r7 = 0x40000u; UPD(0x0C09EE56u, 3);  /* 0C09EE54 mov.l @(disp,pc),Rn */
	r2 = 0xC071C90u; UPD(0x0C09EE58u, 1);  /* 0C09EE56 mov.l @(disp,pc),Rn */
	r4 += r7;  /* 0C09EE58 add Rm,Rn */
	r15 = r14;  /* 0C09EE5A mov Rm,Rn */
	IF(0x0C09EE5Cu); PR = R32(r15); r15 += 4; UPD(0x0C09EE5Eu, 3);  /* 0C09EE5C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09EE60u, 1);  /* 0C09EE5E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09EE62u, 1);  /* 0C09EE60 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09EE64u, 1);  /* 0C09EE62 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09EE66u, 1);  /* 0C09EE64 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09EE68u, 1);  /* 0C09EE66 mov.l @Rm+,Rn */
	IF(0x0C09EE68u); { u32 tv_ = r2; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C071C90u: TAIL(blk_f_0C071C90); default: JUMPD(tv_); } }  /* 0C09EE68 jmp @Rn */
L_0C09EE80: BLKS(0x0C09EE80u);
	r11 = 0xB4u; UPD(0x0C09EE82u, 1);  /* 0C09EE80 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C09EE82 add #imm,Rn */
	IF(0x0C09EE84u); MACL = r10 * r11;  /* 0C09EE84 mul.l Rm,Rn */
	r12 = 0xC286578u; UPD(0x0C09EE88u, 4);  /* 0C09EE86 mov.l @(disp,pc),Rn */
	r5 = 0x6u;  /* 0C09EE88 mov #imm,Rn */
	IF(0x0C09EE8Au); r8 = MACL;  /* 0C09EE8A sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C09EE8Eu, 3);  /* 0C09EE8C mov.w @(disp,pc),Rn */
	r8 += r12;  /* 0C09EE8E add Rm,Rn */
	IF(0x0C09EE90u); r3 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C09EE92u, 2);  /* 0C09EE90 mov.b @(r0,Rm),Rn */
	r2 = r8;  /* 0C09EE92 mov Rm,Rn */
	r9 = r3 & 0xFF;  /* 0C09EE94 extu.b Rm,Rn */
	W32(r15, r9); UPD(0x0C09EE98u, 3);  /* 0C09EE96 mov.l Rm,@Rn */
	r9 = 0xA8u; UPD(0x0C09EE9Au, 1);  /* 0C09EE98 mov.w @(disp,pc),Rn */
	r2 += r9;  /* 0C09EE9A add Rm,Rn */
	r2 += 0x1u;  /* 0C09EE9C add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C09EEA0u, 3);  /* 0C09EE9E mov.b @Rm,Rn */
	r7 = r0 & 0xFF;  /* 0C09EEA0 extu.b Rm,Rn */
	r0 = 0xC0BD6F0u; UPD(0x0C09EEA4u, 2);  /* 0C09EEA2 mov.l @(disp,pc),Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C09EEA6u, 1);  /* 0C09EEA4 mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C09EEA8u, 1);  /* 0C09EEA6 mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C09EEAAu, 1);  /* 0C09EEA8 mov.l @(disp,Rm),Rn */
	IF(0x0C09EEAAu); { u32 t_ = r0; PR = 0x0C09EEAEu; r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C09EEAEu); }  /* 0C09EEAA jsr @Rn */
L_0C09EEAE: BLKS(0x0C09EEAEu);
	r0 = 0x9Cu; UPD(0x0C09EEB0u, 1);  /* 0C09EEAE mov.w @(disp,pc),Rn */
	r5 = 0x0u;  /* 0C09EEB0 mov #imm,Rn */
	IF(0x0C09EEB2u); W8(r0 + r8, r5); UPD(0x0C09EEB4u, 2);  /* 0C09EEB2 mov.b Rm,@(r0,Rn) */
	r15 += 0x8u;  /* 0C09EEB4 add #imm,Rn */
	r6 = R32(r8); UPD(0x0C09EEB8u, 2);  /* 0C09EEB6 mov.l @Rm,Rn */
	r4 = r10;  /* 0C09EEB8 mov Rm,Rn */
	r1 = 0xECFFFFFFu; UPD(0x0C09EEBCu, 2);  /* 0C09EEBA mov.l @(disp,pc),Rn */
	r0 = 0xC0A8CA0u; UPD(0x0C09EEBEu, 1);  /* 0C09EEBC mov.l @(disp,pc),Rn */
	r6 &= r1;  /* 0C09EEBE and Rm,Rn */
	IF(0x0C09EEC0u); { u32 t_ = r0; PR = 0x0C09EEC4u; W32(r8, r6); /* slot mov.l Rm,@Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C09EEC4u); }  /* 0C09EEC0 jsr @Rn */
L_0C09EEC4: BLKS(0x0C09EEC4u);
	IF(0x0C09EEC4u); T = (s32)r0 >= 0;  /* 0C09EEC4 cmp/pz Rn */
	{ u32 c_ = !T; r8 += 0x7Eu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C09EE1Cu, 4); goto L_0C09EE1C; } goto L_0C09EECA; }  /* 0C09EEC6 bf/s */
L_0C09EECA: BLKS(0x0C09EECAu);
	r4 = (u32)(s32)(s16)R16(r8); UPD(0x0C09EECCu, 2);  /* 0C09EECA mov.w @Rm,Rn */
	IF(0x0C09EECCu); MACL = r4 * r11;  /* 0C09EECC mul.l Rm,Rn */
	r8 = 0x1u;  /* 0C09EECE mov #imm,Rn */
	IF(0x0C09EED0u); r0 = MACL;  /* 0C09EED0 sts macl,Rn */
	r0 += r12;  /* 0C09EED2 add Rm,Rn */
	{ IF(0x0C09EED6u); W8(r0 + r9, r8); /* slot mov.b Rm,@(r0,Rn) */ UPD(0x0C09EE1Cu, 8); goto L_0C09EE1C; }  /* 0C09EED4 bra */
}

void blk_f_0C09EEE0(sh3_t *c)
{
	LOCALS;
	goto L_0C09EEE0;
L_0C09EE1C: BLKS(0x0C09EE1Cu);
	r4 = 0xB4u; UPD(0x0C09EE1Eu, 1);  /* 0C09EE1C mov.w @(disp,pc),Rn */
	IF(0x0C09EE1Eu); MACL = r10 * r4;  /* 0C09EE1E mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C09EE22u, 3);  /* 0C09EE20 mov.l @(disp,pc),Rn */
	IF(0x0C09EE22u); r4 = MACL;  /* 0C09EE22 sts macl,Rn */
	r4 += r3;  /* 0C09EE24 add Rm,Rn */
	r10 = R32(r4); UPD(0x0C09EE28u, 3);  /* 0C09EE26 mov.l @Rm,Rn */
	T = (r10 & r10) == 0;  /* 0C09EE28 tst Rm,Rn */
	if (!T) { UPD(0x0C09EE3Eu, 4); goto L_0C09EE3E; }  /* 0C09EE2A bf */
L_0C09EE2C: BLKS(0x0C09EE2Cu);
	r4 += 0x40u;  /* 0C09EE2C add #imm,Rn */
	r4 = R32(r4); UPD(0x0C09EE30u, 2);  /* 0C09EE2E mov.l @Rm,Rn */
	r5 = 0x1869Fu; UPD(0x0C09EE32u, 1);  /* 0C09EE30 mov.l @(disp,pc),Rn */
	T = r4 > r5;  /* 0C09EE32 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C09EE3Eu, 4); goto L_0C09EE3E; }  /* 0C09EE34 bt */
L_0C09EE36: BLKS(0x0C09EE36u);
	r8 = 0xC175064u; UPD(0x0C09EE38u, 1);  /* 0C09EE36 mov.l @(disp,pc),Rn */
	r0 = R32(r8); UPD(0x0C09EE3Au, 1);  /* 0C09EE38 mov.l @Rm,Rn */
	T = r0 == 0x3u;  /* 0C09EE3A cmp/eq #imm,r0 */
	if (T) { UPD(0x0C09EE50u, 4); goto L_0C09EE50; }  /* 0C09EE3C bt */
L_0C09EE3E: BLKS(0x0C09EE3Eu);
	r15 = r14;  /* 0C09EE3E mov Rm,Rn */
	IF(0x0C09EE40u); PR = R32(r15); r15 += 4; UPD(0x0C09EE42u, 2);  /* 0C09EE40 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09EE44u, 1);  /* 0C09EE42 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09EE46u, 1);  /* 0C09EE44 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09EE48u, 1);  /* 0C09EE46 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09EE4Au, 1);  /* 0C09EE48 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09EE4Cu, 1);  /* 0C09EE4A mov.l @Rm+,Rn */
	IF(0x0C09EE4Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C09EE4C rts */
L_0C09EE50: BLKS(0x0C09EE50u);
	r6 = 0x4u;  /* 0C09EE50 mov #imm,Rn */
	IF(0x0C09EE52u); ARG0(0x446Du); { s32 s_ = (s32)r6; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = 0; else r4 >>= ((~s_ & 31) + 1); }  /* 0C09EE52 shld Rm,Rn */
	r7 = 0x40000u; UPD(0x0C09EE56u, 3);  /* 0C09EE54 mov.l @(disp,pc),Rn */
	r2 = 0xC071C90u; UPD(0x0C09EE58u, 1);  /* 0C09EE56 mov.l @(disp,pc),Rn */
	r4 += r7;  /* 0C09EE58 add Rm,Rn */
	r15 = r14;  /* 0C09EE5A mov Rm,Rn */
	IF(0x0C09EE5Cu); PR = R32(r15); r15 += 4; UPD(0x0C09EE5Eu, 3);  /* 0C09EE5C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09EE60u, 1);  /* 0C09EE5E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09EE62u, 1);  /* 0C09EE60 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09EE64u, 1);  /* 0C09EE62 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09EE66u, 1);  /* 0C09EE64 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09EE68u, 1);  /* 0C09EE66 mov.l @Rm+,Rn */
	IF(0x0C09EE68u); { u32 tv_ = r2; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C071C90u: TAIL(blk_f_0C071C90); default: JUMPD(tv_); } }  /* 0C09EE68 jmp @Rn */
L_0C09EEE0: BLKS(0x0C09EEE0u);
	r0 = 0xB4u; UPD(0x0C09EEE2u, 1);  /* 0C09EEE0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C09EEE2 add #imm,Rn */
	IF(0x0C09EEE4u); MACL = r10 * r0;  /* 0C09EEE4 mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C09EEE8u, 4);  /* 0C09EEE6 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C09EEEAu, 1);  /* 0C09EEE8 mov.w @(disp,pc),Rn */
	IF(0x0C09EEEAu); r8 = MACL;  /* 0C09EEEA sts macl,Rn */
	r8 += r7;  /* 0C09EEEC add Rm,Rn */
	IF(0x0C09EEEEu); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C09EEF0u, 3);  /* 0C09EEEE mov.b @(r0,Rm),Rn */
	r5 = r6 & 0xFF;  /* 0C09EEF0 extu.b Rm,Rn */
	W32(r15, r5); UPD(0x0C09EEF4u, 2);  /* 0C09EEF2 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C09EEF4 add #imm,Rn */
	IF(0x0C09EEF6u); r12 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C09EEF8u, 2);  /* 0C09EEF6 mov.b @(r0,Rm),Rn */
	r5 = 0x3u;  /* 0C09EEF8 mov #imm,Rn */
	r11 = r12 & 0xFF;  /* 0C09EEFA extu.b Rm,Rn */
	W32(r15 + 0x4u, r11); UPD(0x0C09EEFEu, 3);  /* 0C09EEFC mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C09EF00u, 1);  /* 0C09EEFE mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C09EF02u, 1);  /* 0C09EF00 mov.l @(disp,Rm),Rn */
	r7 = R32(r8 + 0x28u); UPD(0x0C09EF04u, 1);  /* 0C09EF02 mov.l @(disp,Rm),Rn */
	r0 = 0xC0BD6F0u; UPD(0x0C09EF06u, 1);  /* 0C09EF04 mov.l @(disp,pc),Rn */
	IF(0x0C09EF06u); { u32 t_ = r0; PR = 0x0C09EF0Au; r9 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C09EF0Au); }  /* 0C09EF06 jsr @Rn */
L_0C09EF0A: BLKS(0x0C09EF0Au);
	W32(r8, r9); UPD(0x0C09EF0Cu, 1);  /* 0C09EF0A mov.l Rm,@Rn */
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C09EE1Cu, 3); goto L_0C09EE1C; }  /* 0C09EF0C bra */
}

void blk_f_0C09EF2A(sh3_t *c)
{
	LOCALS;
	goto L_0C09EF2A;
L_0C09EE1C: BLKS(0x0C09EE1Cu);
	r4 = 0xB4u; UPD(0x0C09EE1Eu, 1);  /* 0C09EE1C mov.w @(disp,pc),Rn */
	IF(0x0C09EE1Eu); MACL = r10 * r4;  /* 0C09EE1E mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C09EE22u, 3);  /* 0C09EE20 mov.l @(disp,pc),Rn */
	IF(0x0C09EE22u); r4 = MACL;  /* 0C09EE22 sts macl,Rn */
	r4 += r3;  /* 0C09EE24 add Rm,Rn */
	r10 = R32(r4); UPD(0x0C09EE28u, 3);  /* 0C09EE26 mov.l @Rm,Rn */
	T = (r10 & r10) == 0;  /* 0C09EE28 tst Rm,Rn */
	if (!T) { UPD(0x0C09EE3Eu, 4); goto L_0C09EE3E; }  /* 0C09EE2A bf */
L_0C09EE2C: BLKS(0x0C09EE2Cu);
	r4 += 0x40u;  /* 0C09EE2C add #imm,Rn */
	r4 = R32(r4); UPD(0x0C09EE30u, 2);  /* 0C09EE2E mov.l @Rm,Rn */
	r5 = 0x1869Fu; UPD(0x0C09EE32u, 1);  /* 0C09EE30 mov.l @(disp,pc),Rn */
	T = r4 > r5;  /* 0C09EE32 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C09EE3Eu, 4); goto L_0C09EE3E; }  /* 0C09EE34 bt */
L_0C09EE36: BLKS(0x0C09EE36u);
	r8 = 0xC175064u; UPD(0x0C09EE38u, 1);  /* 0C09EE36 mov.l @(disp,pc),Rn */
	r0 = R32(r8); UPD(0x0C09EE3Au, 1);  /* 0C09EE38 mov.l @Rm,Rn */
	T = r0 == 0x3u;  /* 0C09EE3A cmp/eq #imm,r0 */
	if (T) { UPD(0x0C09EE50u, 4); goto L_0C09EE50; }  /* 0C09EE3C bt */
L_0C09EE3E: BLKS(0x0C09EE3Eu);
	r15 = r14;  /* 0C09EE3E mov Rm,Rn */
	IF(0x0C09EE40u); PR = R32(r15); r15 += 4; UPD(0x0C09EE42u, 2);  /* 0C09EE40 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09EE44u, 1);  /* 0C09EE42 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09EE46u, 1);  /* 0C09EE44 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09EE48u, 1);  /* 0C09EE46 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09EE4Au, 1);  /* 0C09EE48 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09EE4Cu, 1);  /* 0C09EE4A mov.l @Rm+,Rn */
	IF(0x0C09EE4Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C09EE4C rts */
L_0C09EE50: BLKS(0x0C09EE50u);
	r6 = 0x4u;  /* 0C09EE50 mov #imm,Rn */
	IF(0x0C09EE52u); ARG0(0x446Du); { s32 s_ = (s32)r6; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = 0; else r4 >>= ((~s_ & 31) + 1); }  /* 0C09EE52 shld Rm,Rn */
	r7 = 0x40000u; UPD(0x0C09EE56u, 3);  /* 0C09EE54 mov.l @(disp,pc),Rn */
	r2 = 0xC071C90u; UPD(0x0C09EE58u, 1);  /* 0C09EE56 mov.l @(disp,pc),Rn */
	r4 += r7;  /* 0C09EE58 add Rm,Rn */
	r15 = r14;  /* 0C09EE5A mov Rm,Rn */
	IF(0x0C09EE5Cu); PR = R32(r15); r15 += 4; UPD(0x0C09EE5Eu, 3);  /* 0C09EE5C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09EE60u, 1);  /* 0C09EE5E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09EE62u, 1);  /* 0C09EE60 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09EE64u, 1);  /* 0C09EE62 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09EE66u, 1);  /* 0C09EE64 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09EE68u, 1);  /* 0C09EE66 mov.l @Rm+,Rn */
	IF(0x0C09EE68u); { u32 tv_ = r2; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C071C90u: TAIL(blk_f_0C071C90); default: JUMPD(tv_); } }  /* 0C09EE68 jmp @Rn */
L_0C09EF06: BLKS(0x0C09EF06u);
	IF(0x0C09EF06u); { u32 t_ = r0; PR = 0x0C09EF0Au; r9 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C09EF0Au); }  /* 0C09EF06 jsr @Rn */
L_0C09EF0A: BLKS(0x0C09EF0Au);
	W32(r8, r9); UPD(0x0C09EF0Cu, 1);  /* 0C09EF0A mov.l Rm,@Rn */
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C09EE1Cu, 3); goto L_0C09EE1C; }  /* 0C09EF0C bra */
L_0C09EF2A: BLKS(0x0C09EF2Au);
	r8 = 0xB4u; UPD(0x0C09EF2Cu, 1);  /* 0C09EF2A mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C09EF2C add #imm,Rn */
	IF(0x0C09EF2Eu); MACL = r10 * r8;  /* 0C09EF2E mul.l Rm,Rn */
	r4 = 0xC286578u; UPD(0x0C09EF32u, 4);  /* 0C09EF30 mov.l @(disp,pc),Rn */
	r5 = 0x4u;  /* 0C09EF32 mov #imm,Rn */
	r0 = 0xB0u; UPD(0x0C09EF36u, 2);  /* 0C09EF34 mov.w @(disp,pc),Rn */
	IF(0x0C09EF36u); r8 = MACL;  /* 0C09EF36 sts macl,Rn */
	r8 += r4;  /* 0C09EF38 add Rm,Rn */
	IF(0x0C09EF3Au); r12 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C09EF3Cu, 3);  /* 0C09EF3A mov.b @(r0,Rm),Rn */
	r9 = r12 & 0xFF;  /* 0C09EF3C extu.b Rm,Rn */
	W32(r15, r9); UPD(0x0C09EF40u, 2);  /* 0C09EF3E mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C09EF40 add #imm,Rn */
	IF(0x0C09EF42u); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C09EF44u, 2);  /* 0C09EF42 mov.b @(r0,Rm),Rn */
	r11 = r6 & 0xFF;  /* 0C09EF44 extu.b Rm,Rn */
	W32(r15 + 0x4u, r11); UPD(0x0C09EF48u, 2);  /* 0C09EF46 mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C09EF4Au, 1);  /* 0C09EF48 mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C09EF4Cu, 1);  /* 0C09EF4A mov.l @(disp,Rm),Rn */
	r0 = 0xC0BECB0u; UPD(0x0C09EF4Eu, 1);  /* 0C09EF4C mov.l @(disp,pc),Rn */
	{ r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C09EF06u, 3); goto L_0C09EF06; }  /* 0C09EF4E bra */
}

void blk_f_0C09EF60(sh3_t *c)
{
	LOCALS;
	goto L_0C09EF60;
L_0C09EE1C: BLKS(0x0C09EE1Cu);
	r4 = 0xB4u; UPD(0x0C09EE1Eu, 1);  /* 0C09EE1C mov.w @(disp,pc),Rn */
	IF(0x0C09EE1Eu); MACL = r10 * r4;  /* 0C09EE1E mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C09EE22u, 3);  /* 0C09EE20 mov.l @(disp,pc),Rn */
	IF(0x0C09EE22u); r4 = MACL;  /* 0C09EE22 sts macl,Rn */
	r4 += r3;  /* 0C09EE24 add Rm,Rn */
	r10 = R32(r4); UPD(0x0C09EE28u, 3);  /* 0C09EE26 mov.l @Rm,Rn */
	T = (r10 & r10) == 0;  /* 0C09EE28 tst Rm,Rn */
	if (!T) { UPD(0x0C09EE3Eu, 4); goto L_0C09EE3E; }  /* 0C09EE2A bf */
L_0C09EE2C: BLKS(0x0C09EE2Cu);
	r4 += 0x40u;  /* 0C09EE2C add #imm,Rn */
	r4 = R32(r4); UPD(0x0C09EE30u, 2);  /* 0C09EE2E mov.l @Rm,Rn */
	r5 = 0x1869Fu; UPD(0x0C09EE32u, 1);  /* 0C09EE30 mov.l @(disp,pc),Rn */
	T = r4 > r5;  /* 0C09EE32 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C09EE3Eu, 4); goto L_0C09EE3E; }  /* 0C09EE34 bt */
L_0C09EE36: BLKS(0x0C09EE36u);
	r8 = 0xC175064u; UPD(0x0C09EE38u, 1);  /* 0C09EE36 mov.l @(disp,pc),Rn */
	r0 = R32(r8); UPD(0x0C09EE3Au, 1);  /* 0C09EE38 mov.l @Rm,Rn */
	T = r0 == 0x3u;  /* 0C09EE3A cmp/eq #imm,r0 */
	if (T) { UPD(0x0C09EE50u, 4); goto L_0C09EE50; }  /* 0C09EE3C bt */
L_0C09EE3E: BLKS(0x0C09EE3Eu);
	r15 = r14;  /* 0C09EE3E mov Rm,Rn */
	IF(0x0C09EE40u); PR = R32(r15); r15 += 4; UPD(0x0C09EE42u, 2);  /* 0C09EE40 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09EE44u, 1);  /* 0C09EE42 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09EE46u, 1);  /* 0C09EE44 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09EE48u, 1);  /* 0C09EE46 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09EE4Au, 1);  /* 0C09EE48 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09EE4Cu, 1);  /* 0C09EE4A mov.l @Rm+,Rn */
	IF(0x0C09EE4Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C09EE4C rts */
L_0C09EE50: BLKS(0x0C09EE50u);
	r6 = 0x4u;  /* 0C09EE50 mov #imm,Rn */
	IF(0x0C09EE52u); ARG0(0x446Du); { s32 s_ = (s32)r6; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = 0; else r4 >>= ((~s_ & 31) + 1); }  /* 0C09EE52 shld Rm,Rn */
	r7 = 0x40000u; UPD(0x0C09EE56u, 3);  /* 0C09EE54 mov.l @(disp,pc),Rn */
	r2 = 0xC071C90u; UPD(0x0C09EE58u, 1);  /* 0C09EE56 mov.l @(disp,pc),Rn */
	r4 += r7;  /* 0C09EE58 add Rm,Rn */
	r15 = r14;  /* 0C09EE5A mov Rm,Rn */
	IF(0x0C09EE5Cu); PR = R32(r15); r15 += 4; UPD(0x0C09EE5Eu, 3);  /* 0C09EE5C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09EE60u, 1);  /* 0C09EE5E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09EE62u, 1);  /* 0C09EE60 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09EE64u, 1);  /* 0C09EE62 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09EE66u, 1);  /* 0C09EE64 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09EE68u, 1);  /* 0C09EE66 mov.l @Rm+,Rn */
	IF(0x0C09EE68u); { u32 tv_ = r2; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C071C90u: TAIL(blk_f_0C071C90); default: JUMPD(tv_); } }  /* 0C09EE68 jmp @Rn */
L_0C09EF06: BLKS(0x0C09EF06u);
	IF(0x0C09EF06u); { u32 t_ = r0; PR = 0x0C09EF0Au; r9 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C09EF0Au); }  /* 0C09EF06 jsr @Rn */
L_0C09EF0A: BLKS(0x0C09EF0Au);
	W32(r8, r9); UPD(0x0C09EF0Cu, 1);  /* 0C09EF0A mov.l Rm,@Rn */
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C09EE1Cu, 3); goto L_0C09EE1C; }  /* 0C09EF0C bra */
L_0C09EF4A: BLKS(0x0C09EF4Au);
	r6 = R32(r8 + 0x24u); UPD(0x0C09EF4Cu, 1);  /* 0C09EF4A mov.l @(disp,Rm),Rn */
	r0 = 0xC0BECB0u; UPD(0x0C09EF4Eu, 1);  /* 0C09EF4C mov.l @(disp,pc),Rn */
	{ r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C09EF06u, 3); goto L_0C09EF06; }  /* 0C09EF4E bra */
L_0C09EF60: BLKS(0x0C09EF60u);
	r8 = 0xB4u; UPD(0x0C09EF62u, 1);  /* 0C09EF60 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C09EF62 add #imm,Rn */
	IF(0x0C09EF64u); MACL = r10 * r8;  /* 0C09EF64 mul.l Rm,Rn */
	r4 = 0xC286578u; UPD(0x0C09EF68u, 4);  /* 0C09EF66 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C09EF6Au, 1);  /* 0C09EF68 mov.w @(disp,pc),Rn */
	IF(0x0C09EF6Au); r8 = MACL;  /* 0C09EF6A sts macl,Rn */
	r8 += r4;  /* 0C09EF6C add Rm,Rn */
	IF(0x0C09EF6Eu); r3 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C09EF70u, 3);  /* 0C09EF6E mov.b @(r0,Rm),Rn */
	r9 = r3 & 0xFF;  /* 0C09EF70 extu.b Rm,Rn */
	W32(r15, r9); UPD(0x0C09EF74u, 2);  /* 0C09EF72 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C09EF74 add #imm,Rn */
	IF(0x0C09EF76u); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C09EF78u, 2);  /* 0C09EF76 mov.b @(r0,Rm),Rn */
	r1 = r2 & 0xFF;  /* 0C09EF78 extu.b Rm,Rn */
	W32(r15 + 0x4u, r1); UPD(0x0C09EF7Cu, 2);  /* 0C09EF7A mov.l Rm,@(disp,Rn) */
	r5 = 0x3u;  /* 0C09EF7C mov #imm,Rn */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C09EF4Au, 4); goto L_0C09EF4A; }  /* 0C09EF7E bra */
}

void blk_f_0C09EFC0(sh3_t *c)
{
	LOCALS;
	goto L_0C09EFC0;
L_0C09EE14: BLKS(0x0C09EE14u);
	r3 = 0xC0A9D90u; UPD(0x0C09EE16u, 1);  /* 0C09EE14 mov.l @(disp,pc),Rn */
	IF(0x0C09EE16u); { u32 t_ = r3; PR = 0x0C09EE1Au; IF(0x0C09EE18u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9D90, 0x0C0A9D90u, 0x0C09EE1Au); }  /* 0C09EE16 jsr @Rn */
L_0C09EE1A: BLKS(0x0C09EE1Au);
	IF(0x0C09EE1Au); ;  /* 0C09EE1A nop */
	r4 = 0xB4u; UPD(0x0C09EE1Eu, 2);  /* 0C09EE1C mov.w @(disp,pc),Rn */
	IF(0x0C09EE1Eu); MACL = r10 * r4;  /* 0C09EE1E mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C09EE22u, 3);  /* 0C09EE20 mov.l @(disp,pc),Rn */
	IF(0x0C09EE22u); r4 = MACL;  /* 0C09EE22 sts macl,Rn */
	r4 += r3;  /* 0C09EE24 add Rm,Rn */
	r10 = R32(r4); UPD(0x0C09EE28u, 3);  /* 0C09EE26 mov.l @Rm,Rn */
	T = (r10 & r10) == 0;  /* 0C09EE28 tst Rm,Rn */
	if (!T) { UPD(0x0C09EE3Eu, 4); goto L_0C09EE3E; }  /* 0C09EE2A bf */
L_0C09EE2C: BLKS(0x0C09EE2Cu);
	r4 += 0x40u;  /* 0C09EE2C add #imm,Rn */
	r4 = R32(r4); UPD(0x0C09EE30u, 2);  /* 0C09EE2E mov.l @Rm,Rn */
	r5 = 0x1869Fu; UPD(0x0C09EE32u, 1);  /* 0C09EE30 mov.l @(disp,pc),Rn */
	T = r4 > r5;  /* 0C09EE32 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C09EE3Eu, 4); goto L_0C09EE3E; }  /* 0C09EE34 bt */
L_0C09EE36: BLKS(0x0C09EE36u);
	r8 = 0xC175064u; UPD(0x0C09EE38u, 1);  /* 0C09EE36 mov.l @(disp,pc),Rn */
	r0 = R32(r8); UPD(0x0C09EE3Au, 1);  /* 0C09EE38 mov.l @Rm,Rn */
	T = r0 == 0x3u;  /* 0C09EE3A cmp/eq #imm,r0 */
	if (T) { UPD(0x0C09EE50u, 4); goto L_0C09EE50; }  /* 0C09EE3C bt */
L_0C09EE3E: BLKS(0x0C09EE3Eu);
	r15 = r14;  /* 0C09EE3E mov Rm,Rn */
	IF(0x0C09EE40u); PR = R32(r15); r15 += 4; UPD(0x0C09EE42u, 2);  /* 0C09EE40 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09EE44u, 1);  /* 0C09EE42 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09EE46u, 1);  /* 0C09EE44 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09EE48u, 1);  /* 0C09EE46 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09EE4Au, 1);  /* 0C09EE48 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09EE4Cu, 1);  /* 0C09EE4A mov.l @Rm+,Rn */
	IF(0x0C09EE4Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C09EE4C rts */
L_0C09EE50: BLKS(0x0C09EE50u);
	r6 = 0x4u;  /* 0C09EE50 mov #imm,Rn */
	IF(0x0C09EE52u); ARG0(0x446Du); { s32 s_ = (s32)r6; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = 0; else r4 >>= ((~s_ & 31) + 1); }  /* 0C09EE52 shld Rm,Rn */
	r7 = 0x40000u; UPD(0x0C09EE56u, 3);  /* 0C09EE54 mov.l @(disp,pc),Rn */
	r2 = 0xC071C90u; UPD(0x0C09EE58u, 1);  /* 0C09EE56 mov.l @(disp,pc),Rn */
	r4 += r7;  /* 0C09EE58 add Rm,Rn */
	r15 = r14;  /* 0C09EE5A mov Rm,Rn */
	IF(0x0C09EE5Cu); PR = R32(r15); r15 += 4; UPD(0x0C09EE5Eu, 3);  /* 0C09EE5C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09EE60u, 1);  /* 0C09EE5E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09EE62u, 1);  /* 0C09EE60 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09EE64u, 1);  /* 0C09EE62 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09EE66u, 1);  /* 0C09EE64 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09EE68u, 1);  /* 0C09EE66 mov.l @Rm+,Rn */
	IF(0x0C09EE68u); { u32 tv_ = r2; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C071C90u: TAIL(blk_f_0C071C90); default: JUMPD(tv_); } }  /* 0C09EE68 jmp @Rn */
L_0C09EFC0: BLKS(0x0C09EFC0u);
	r9 = 0xC0A8BF0u; UPD(0x0C09EFC2u, 1);  /* 0C09EFC0 mov.l @(disp,pc),Rn */
	IF(0x0C09EFC2u); { u32 t_ = r9; PR = 0x0C09EFC6u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8BF0, 0x0C0A8BF0u, 0x0C09EFC6u); }  /* 0C09EFC2 jsr @Rn */
L_0C09EFC6: BLKS(0x0C09EFC6u);
	IF(0x0C09EFC6u); T = (s32)r0 >= 0;  /* 0C09EFC6 cmp/pz Rn */
	if (!T) { UPD(0x0C09EFFCu, 4); goto L_0C09EFFC; }  /* 0C09EFC8 bf */
L_0C09EFCA: BLKS(0x0C09EFCAu);
	r15 += 0xFFFFFFF8u;  /* 0C09EFCA add #imm,Rn */
	r0 = 0xB4u; UPD(0x0C09EFCEu, 2);  /* 0C09EFCC mov.w @(disp,pc),Rn */
	IF(0x0C09EFCEu); MACL = r10 * r0;  /* 0C09EFCE mul.l Rm,Rn */
	r8 = 0xC286578u; UPD(0x0C09EFD2u, 3);  /* 0C09EFD0 mov.l @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C09EFD2 mov #imm,Rn */
	IF(0x0C09EFD4u); r0 = MACL;  /* 0C09EFD4 sts macl,Rn */
	r6 = 0xA9u; UPD(0x0C09EFD8u, 3);  /* 0C09EFD6 mov.w @(disp,pc),Rn */
	r0 += r8;  /* 0C09EFD8 add Rm,Rn */
	IF(0x0C09EFDAu); r12 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C09EFDCu, 2);  /* 0C09EFDA mov.b @(r0,Rm),Rn */
	r5 = R32(r0 + 0x24u); UPD(0x0C09EFDEu, 1);  /* 0C09EFDC mov.l @(disp,Rm),Rn */
	r7 = r12 & 0xFF;  /* 0C09EFDE extu.b Rm,Rn */
	r4 = 0x20000u; UPD(0x0C09EFE2u, 2);  /* 0C09EFE0 mov.l @(disp,pc),Rn */
	r11 = 0xC07CD80u; UPD(0x0C09EFE4u, 1);  /* 0C09EFE2 mov.l @(disp,pc),Rn */
	W32(r15, r4); UPD(0x0C09EFE6u, 1);  /* 0C09EFE4 mov.l Rm,@Rn */
	W32(r15 + 0x4u, r3); UPD(0x0C09EFE8u, 1);  /* 0C09EFE6 mov.l Rm,@(disp,Rn) */
	r4 = 0xEu;  /* 0C09EFE8 mov #imm,Rn */
	r8 = 0x100000u; UPD(0x0C09EFECu, 2);  /* 0C09EFEA mov.l @(disp,pc),Rn */
	r6 = R32(r0 + 0x28u); UPD(0x0C09EFEEu, 1);  /* 0C09EFEC mov.l @(disp,Rm),Rn */
	IF(0x0C09EFEEu); { u32 t_ = r11; PR = 0x0C09EFF2u; r5 += r8; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07CD80, 0x0C07CD80u, 0x0C09EFF2u); }  /* 0C09EFEE jsr @Rn */
L_0C09EFF2: BLKS(0x0C09EFF2u);
	r2 = 0xC175064u; UPD(0x0C09EFF4u, 1);  /* 0C09EFF2 mov.l @(disp,pc),Rn */
	r0 = R32(r2); UPD(0x0C09EFF6u, 1);  /* 0C09EFF4 mov.l @Rm,Rn */
	T = r0 == 0x3u;  /* 0C09EFF6 cmp/eq #imm,r0 */
	{ u32 c_ = T; r15 += 0x8u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C09F020u, 4); goto L_0C09F020; } UPD(0x0C09EFFCu, 1); goto L_0C09EFFC; }  /* 0C09EFF8 bt/s */
L_0C09EFFC: BLKS(0x0C09EFFCu);
	r11 = 0xB4u; UPD(0x0C09EFFEu, 1);  /* 0C09EFFC mov.w @(disp,pc),Rn */
	r4 = r10;  /* 0C09EFFE mov Rm,Rn */
	IF(0x0C09F000u); MACL = r10 * r11;  /* 0C09F000 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C09F004u, 4);  /* 0C09F002 mov.l @(disp,pc),Rn */
	IF(0x0C09F004u); r2 = MACL;  /* 0C09F004 sts macl,Rn */
	r9 += r2;  /* 0C09F006 add Rm,Rn */
	r7 = R32(r9 + 0x8u); UPD(0x0C09F00Au, 3);  /* 0C09F008 mov.l @(disp,Rm),Rn */
	r0 = 0xC1D0D24u; UPD(0x0C09F00Cu, 1);  /* 0C09F00A mov.l @(disp,pc),Rn */
	IF(0x0C09F00Cu); r7 <<= 2;  /* 0C09F00C shll2 Rn */
	{ IF(0x0C09F010u); r5 = R32(r0 + r7); /* slot mov.l @(r0,Rm),Rn */ UPD(0x0C09EE14u, 4); goto L_0C09EE14; }  /* 0C09F00E bra */
L_0C09F020: BLKS(0x0C09F020u);
	r5 = 0xC071C90u; UPD(0x0C09F022u, 1);  /* 0C09F020 mov.l @(disp,pc),Rn */
	IF(0x0C09F022u); { u32 t_ = r5; PR = 0x0C09F026u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C071C90, 0x0C071C90u, 0x0C09F026u); }  /* 0C09F022 jsr @Rn */
L_0C09F026: BLKS(0x0C09F026u);
	{ IF(0x0C09F028u); ; /* slot nop */ UPD(0x0C09EFFCu, 3); goto L_0C09EFFC; }  /* 0C09F026 bra */
}

void blk_f_0C09F030(sh3_t *c)
{
	LOCALS;
	goto L_0C09F030;
L_0C09EE1C: BLKS(0x0C09EE1Cu);
	r4 = 0xB4u; UPD(0x0C09EE1Eu, 1);  /* 0C09EE1C mov.w @(disp,pc),Rn */
	IF(0x0C09EE1Eu); MACL = r10 * r4;  /* 0C09EE1E mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C09EE22u, 3);  /* 0C09EE20 mov.l @(disp,pc),Rn */
	IF(0x0C09EE22u); r4 = MACL;  /* 0C09EE22 sts macl,Rn */
	r4 += r3;  /* 0C09EE24 add Rm,Rn */
	r10 = R32(r4); UPD(0x0C09EE28u, 3);  /* 0C09EE26 mov.l @Rm,Rn */
	T = (r10 & r10) == 0;  /* 0C09EE28 tst Rm,Rn */
	if (!T) { UPD(0x0C09EE3Eu, 4); goto L_0C09EE3E; }  /* 0C09EE2A bf */
L_0C09EE2C: BLKS(0x0C09EE2Cu);
	r4 += 0x40u;  /* 0C09EE2C add #imm,Rn */
	r4 = R32(r4); UPD(0x0C09EE30u, 2);  /* 0C09EE2E mov.l @Rm,Rn */
	r5 = 0x1869Fu; UPD(0x0C09EE32u, 1);  /* 0C09EE30 mov.l @(disp,pc),Rn */
	T = r4 > r5;  /* 0C09EE32 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C09EE3Eu, 4); goto L_0C09EE3E; }  /* 0C09EE34 bt */
L_0C09EE36: BLKS(0x0C09EE36u);
	r8 = 0xC175064u; UPD(0x0C09EE38u, 1);  /* 0C09EE36 mov.l @(disp,pc),Rn */
	r0 = R32(r8); UPD(0x0C09EE3Au, 1);  /* 0C09EE38 mov.l @Rm,Rn */
	T = r0 == 0x3u;  /* 0C09EE3A cmp/eq #imm,r0 */
	if (T) { UPD(0x0C09EE50u, 4); goto L_0C09EE50; }  /* 0C09EE3C bt */
L_0C09EE3E: BLKS(0x0C09EE3Eu);
	r15 = r14;  /* 0C09EE3E mov Rm,Rn */
	IF(0x0C09EE40u); PR = R32(r15); r15 += 4; UPD(0x0C09EE42u, 2);  /* 0C09EE40 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09EE44u, 1);  /* 0C09EE42 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09EE46u, 1);  /* 0C09EE44 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09EE48u, 1);  /* 0C09EE46 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09EE4Au, 1);  /* 0C09EE48 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09EE4Cu, 1);  /* 0C09EE4A mov.l @Rm+,Rn */
	IF(0x0C09EE4Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C09EE4C rts */
L_0C09EE50: BLKS(0x0C09EE50u);
	r6 = 0x4u;  /* 0C09EE50 mov #imm,Rn */
	IF(0x0C09EE52u); ARG0(0x446Du); { s32 s_ = (s32)r6; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = 0; else r4 >>= ((~s_ & 31) + 1); }  /* 0C09EE52 shld Rm,Rn */
	r7 = 0x40000u; UPD(0x0C09EE56u, 3);  /* 0C09EE54 mov.l @(disp,pc),Rn */
	r2 = 0xC071C90u; UPD(0x0C09EE58u, 1);  /* 0C09EE56 mov.l @(disp,pc),Rn */
	r4 += r7;  /* 0C09EE58 add Rm,Rn */
	r15 = r14;  /* 0C09EE5A mov Rm,Rn */
	IF(0x0C09EE5Cu); PR = R32(r15); r15 += 4; UPD(0x0C09EE5Eu, 3);  /* 0C09EE5C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09EE60u, 1);  /* 0C09EE5E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09EE62u, 1);  /* 0C09EE60 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09EE64u, 1);  /* 0C09EE62 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09EE66u, 1);  /* 0C09EE64 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09EE68u, 1);  /* 0C09EE66 mov.l @Rm+,Rn */
	IF(0x0C09EE68u); { u32 tv_ = r2; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C071C90u: TAIL(blk_f_0C071C90); default: JUMPD(tv_); } }  /* 0C09EE68 jmp @Rn */
L_0C09EF06: BLKS(0x0C09EF06u);
	IF(0x0C09EF06u); { u32 t_ = r0; PR = 0x0C09EF0Au; r9 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C09EF0Au); }  /* 0C09EF06 jsr @Rn */
L_0C09EF0A: BLKS(0x0C09EF0Au);
	W32(r8, r9); UPD(0x0C09EF0Cu, 1);  /* 0C09EF0A mov.l Rm,@Rn */
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C09EE1Cu, 3); goto L_0C09EE1C; }  /* 0C09EF0C bra */
L_0C09EF2A: BLKS(0x0C09EF2Au);
	r8 = 0xB4u; UPD(0x0C09EF2Cu, 1);  /* 0C09EF2A mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C09EF2C add #imm,Rn */
	IF(0x0C09EF2Eu); MACL = r10 * r8;  /* 0C09EF2E mul.l Rm,Rn */
	r4 = 0xC286578u; UPD(0x0C09EF32u, 4);  /* 0C09EF30 mov.l @(disp,pc),Rn */
	r5 = 0x4u;  /* 0C09EF32 mov #imm,Rn */
	r0 = 0xB0u; UPD(0x0C09EF36u, 2);  /* 0C09EF34 mov.w @(disp,pc),Rn */
	IF(0x0C09EF36u); r8 = MACL;  /* 0C09EF36 sts macl,Rn */
	r8 += r4;  /* 0C09EF38 add Rm,Rn */
	IF(0x0C09EF3Au); r12 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C09EF3Cu, 3);  /* 0C09EF3A mov.b @(r0,Rm),Rn */
	r9 = r12 & 0xFF;  /* 0C09EF3C extu.b Rm,Rn */
	W32(r15, r9); UPD(0x0C09EF40u, 2);  /* 0C09EF3E mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C09EF40 add #imm,Rn */
	IF(0x0C09EF42u); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C09EF44u, 2);  /* 0C09EF42 mov.b @(r0,Rm),Rn */
	r11 = r6 & 0xFF;  /* 0C09EF44 extu.b Rm,Rn */
	W32(r15 + 0x4u, r11); UPD(0x0C09EF48u, 2);  /* 0C09EF46 mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C09EF4Au, 1);  /* 0C09EF48 mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C09EF4Cu, 1);  /* 0C09EF4A mov.l @(disp,Rm),Rn */
	r0 = 0xC0BECB0u; UPD(0x0C09EF4Eu, 1);  /* 0C09EF4C mov.l @(disp,pc),Rn */
	{ r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C09EF06u, 3); goto L_0C09EF06; }  /* 0C09EF4E bra */
L_0C09F030: BLKS(0x0C09F030u);
	r12 = 0xC0A8CA0u; UPD(0x0C09F032u, 1);  /* 0C09F030 mov.l @(disp,pc),Rn */
	IF(0x0C09F032u); { u32 t_ = r12; PR = 0x0C09F036u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C09F036u); }  /* 0C09F032 jsr @Rn */
L_0C09F036: BLKS(0x0C09F036u);
	IF(0x0C09F036u); T = (s32)r0 >= 0;  /* 0C09F036 cmp/pz Rn */
	if (!T) { UPD(0x0C09F04Eu, 4); goto L_0C09F04E; }  /* 0C09F038 bf */
L_0C09F03A: BLKS(0x0C09F03Au);
	r5 = 0xB4u; UPD(0x0C09F03Cu, 1);  /* 0C09F03A mov.w @(disp,pc),Rn */
	IF(0x0C09F03Cu); MACL = r0 * r5;  /* 0C09F03C mul.l Rm,Rn */
	r8 = 0xA5u; UPD(0x0C09F040u, 3);  /* 0C09F03E mov.w @(disp,pc),Rn */
	r0 = 0xC286578u; UPD(0x0C09F042u, 1);  /* 0C09F040 mov.l @(disp,pc),Rn */
	IF(0x0C09F042u); r4 = MACL;  /* 0C09F042 sts macl,Rn */
	r4 += r0;  /* 0C09F044 add Rm,Rn */
	r4 += r8;  /* 0C09F046 add Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r4); UPD(0x0C09F04Au, 4);  /* 0C09F048 mov.b @Rm,Rn */
	r6 += 0x1u;  /* 0C09F04A add #imm,Rn */
	W8(r4, r6); UPD(0x0C09F04Eu, 2);  /* 0C09F04C mov.b Rm,@Rn */
L_0C09F04E: BLKS(0x0C09F04Eu);
	{ IF(0x0C09F050u); ; /* slot nop */ UPD(0x0C09EF2Au, 3); goto L_0C09EF2A; }  /* 0C09F04E bra */
}

void blk_f_0C09F060(sh3_t *c)
{
	LOCALS;
	goto L_0C09F060;
L_0C09EE1C: BLKS(0x0C09EE1Cu);
	r4 = 0xB4u; UPD(0x0C09EE1Eu, 1);  /* 0C09EE1C mov.w @(disp,pc),Rn */
	IF(0x0C09EE1Eu); MACL = r10 * r4;  /* 0C09EE1E mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C09EE22u, 3);  /* 0C09EE20 mov.l @(disp,pc),Rn */
	IF(0x0C09EE22u); r4 = MACL;  /* 0C09EE22 sts macl,Rn */
	r4 += r3;  /* 0C09EE24 add Rm,Rn */
	r10 = R32(r4); UPD(0x0C09EE28u, 3);  /* 0C09EE26 mov.l @Rm,Rn */
	T = (r10 & r10) == 0;  /* 0C09EE28 tst Rm,Rn */
	if (!T) { UPD(0x0C09EE3Eu, 4); goto L_0C09EE3E; }  /* 0C09EE2A bf */
L_0C09EE2C: BLKS(0x0C09EE2Cu);
	r4 += 0x40u;  /* 0C09EE2C add #imm,Rn */
	r4 = R32(r4); UPD(0x0C09EE30u, 2);  /* 0C09EE2E mov.l @Rm,Rn */
	r5 = 0x1869Fu; UPD(0x0C09EE32u, 1);  /* 0C09EE30 mov.l @(disp,pc),Rn */
	T = r4 > r5;  /* 0C09EE32 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C09EE3Eu, 4); goto L_0C09EE3E; }  /* 0C09EE34 bt */
L_0C09EE36: BLKS(0x0C09EE36u);
	r8 = 0xC175064u; UPD(0x0C09EE38u, 1);  /* 0C09EE36 mov.l @(disp,pc),Rn */
	r0 = R32(r8); UPD(0x0C09EE3Au, 1);  /* 0C09EE38 mov.l @Rm,Rn */
	T = r0 == 0x3u;  /* 0C09EE3A cmp/eq #imm,r0 */
	if (T) { UPD(0x0C09EE50u, 4); goto L_0C09EE50; }  /* 0C09EE3C bt */
L_0C09EE3E: BLKS(0x0C09EE3Eu);
	r15 = r14;  /* 0C09EE3E mov Rm,Rn */
	IF(0x0C09EE40u); PR = R32(r15); r15 += 4; UPD(0x0C09EE42u, 2);  /* 0C09EE40 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09EE44u, 1);  /* 0C09EE42 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09EE46u, 1);  /* 0C09EE44 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09EE48u, 1);  /* 0C09EE46 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09EE4Au, 1);  /* 0C09EE48 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09EE4Cu, 1);  /* 0C09EE4A mov.l @Rm+,Rn */
	IF(0x0C09EE4Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C09EE4C rts */
L_0C09EE50: BLKS(0x0C09EE50u);
	r6 = 0x4u;  /* 0C09EE50 mov #imm,Rn */
	IF(0x0C09EE52u); ARG0(0x446Du); { s32 s_ = (s32)r6; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = 0; else r4 >>= ((~s_ & 31) + 1); }  /* 0C09EE52 shld Rm,Rn */
	r7 = 0x40000u; UPD(0x0C09EE56u, 3);  /* 0C09EE54 mov.l @(disp,pc),Rn */
	r2 = 0xC071C90u; UPD(0x0C09EE58u, 1);  /* 0C09EE56 mov.l @(disp,pc),Rn */
	r4 += r7;  /* 0C09EE58 add Rm,Rn */
	r15 = r14;  /* 0C09EE5A mov Rm,Rn */
	IF(0x0C09EE5Cu); PR = R32(r15); r15 += 4; UPD(0x0C09EE5Eu, 3);  /* 0C09EE5C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09EE60u, 1);  /* 0C09EE5E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09EE62u, 1);  /* 0C09EE60 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09EE64u, 1);  /* 0C09EE62 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09EE66u, 1);  /* 0C09EE64 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09EE68u, 1);  /* 0C09EE66 mov.l @Rm+,Rn */
	IF(0x0C09EE68u); { u32 tv_ = r2; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C071C90u: TAIL(blk_f_0C071C90); default: JUMPD(tv_); } }  /* 0C09EE68 jmp @Rn */
L_0C09EE70: BLKS(0x0C09EE70u);
	r4 = 0xB4u; UPD(0x0C09EE72u, 1);  /* 0C09EE70 mov.w @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C09EE72 mov #imm,Rn */
	IF(0x0C09EE74u); MACL = r10 * r4;  /* 0C09EE74 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C09EE78u, 4);  /* 0C09EE76 mov.l @(disp,pc),Rn */
	IF(0x0C09EE78u); r0 = MACL;  /* 0C09EE78 sts macl,Rn */
	{ IF(0x0C09EE7Cu); W32(r0 + r9, r3); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C09EE1Cu, 4); goto L_0C09EE1C; }  /* 0C09EE7A bra */
L_0C09F060: BLKS(0x0C09F060u);
	r2 = 0xB4u; UPD(0x0C09F062u, 1);  /* 0C09F060 mov.w @(disp,pc),Rn */
	IF(0x0C09F062u); MACL = r10 * r2;  /* 0C09F062 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C09F066u, 3);  /* 0C09F064 mov.l @(disp,pc),Rn */
	IF(0x0C09F066u); r0 = MACL;  /* 0C09F066 sts macl,Rn */
	r0 += r9;  /* 0C09F068 add Rm,Rn */
	r8 = R32(r0 + 0x1Cu); UPD(0x0C09F06Cu, 3);  /* 0C09F06A mov.l @(disp,Rm),Rn */
	{ u32 v_ = R32(r8); r8 += 4; r7 = v_; } UPD(0x0C09F06Eu, 1);  /* 0C09F06C mov.l @Rm+,Rn */
	T = (r7 & r7) == 0;  /* 0C09F06E tst Rm,Rn */
	{ u32 c_ = T; r9 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C09F0A6u, 4); goto L_0C09F0A6; } goto L_0C09F074; }  /* 0C09F070 bt/s */
L_0C09F074: BLKS(0x0C09F074u);
	r11 = 0xA9u; UPD(0x0C09F076u, 2);  /* 0C09F074 mov.w @(disp,pc),Rn */
	r11 += r0;  /* 0C09F076 add Rm,Rn */
	UPD(0x0C09F078u, 1);
L_0C09F078: BLKS(0x0C09F078u);
	r8 += 0x4u;  /* 0C09F078 add #imm,Rn */
	{ u32 v_ = R32(r8); r8 += 4; r7 = v_; } UPD(0x0C09F07Cu, 2);  /* 0C09F07A mov.l @Rm+,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C09F07C add #imm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C09F080u, 2);  /* 0C09F07E mov.l @(disp,Rm),Rn */
	r0 = 0xB0u; UPD(0x0C09F082u, 1);  /* 0C09F080 mov.w @(disp,pc),Rn */
	r6 += r7;  /* 0C09F082 add Rm,Rn */
	IF(0x0C09F084u); r2 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C09F086u, 2);  /* 0C09F084 mov.b @(r0,Rm),Rn */
	{ u32 v_ = R32(r8); r8 += 4; r3 = v_; } UPD(0x0C09F088u, 1);  /* 0C09F086 mov.l @Rm+,Rn */
	r5 = r2 & 0xFF;  /* 0C09F088 extu.b Rm,Rn */
	r7 = R32(r9 + 0x28u); UPD(0x0C09F08Cu, 2);  /* 0C09F08A mov.l @(disp,Rm),Rn */
	W32(r15, r5); UPD(0x0C09F08Eu, 1);  /* 0C09F08C mov.l Rm,@Rn */
	r7 += r3;  /* 0C09F08E add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r11); UPD(0x0C09F092u, 2);  /* 0C09F090 mov.b @Rm,Rn */
	r5 = 0x2u;  /* 0C09F092 mov #imm,Rn */
	r4 = r0 & 0xFF;  /* 0C09F094 extu.b Rm,Rn */
	r12 = 0xC0BD6F0u; UPD(0x0C09F098u, 3);  /* 0C09F096 mov.l @(disp,pc),Rn */
	W32(r15 + 0x4u, r4); UPD(0x0C09F09Au, 1);  /* 0C09F098 mov.l Rm,@(disp,Rn) */
	IF(0x0C09F09Au); { u32 t_ = r12; PR = 0x0C09F09Eu; r4 = R32(r9); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C09F09Eu); }  /* 0C09F09A jsr @Rn */
L_0C09F09E: BLKS(0x0C09F09Eu);
	{ u32 v_ = R32(r8); r8 += 4; r3 = v_; } UPD(0x0C09F0A0u, 1);  /* 0C09F09E mov.l @Rm+,Rn */
	T = (r3 & r3) == 0;  /* 0C09F0A0 tst Rm,Rn */
	{ u32 c_ = !T; r15 += 0x8u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C09F078u, 4); goto L_0C09F078; } UPD(0x0C09F0A6u, 1); goto L_0C09F0A6; }  /* 0C09F0A2 bf/s */
L_0C09F0A6: BLKS(0x0C09F0A6u);
	{ IF(0x0C09F0A8u); ; /* slot nop */ UPD(0x0C09EE70u, 3); goto L_0C09EE70; }  /* 0C09F0A6 bra */
}

void blk_f_0C09F0B0(sh3_t *c)
{
	LOCALS;
	goto L_0C09F0B0;
L_0C09EE1C: BLKS(0x0C09EE1Cu);
	r4 = 0xB4u; UPD(0x0C09EE1Eu, 1);  /* 0C09EE1C mov.w @(disp,pc),Rn */
	IF(0x0C09EE1Eu); MACL = r10 * r4;  /* 0C09EE1E mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C09EE22u, 3);  /* 0C09EE20 mov.l @(disp,pc),Rn */
	IF(0x0C09EE22u); r4 = MACL;  /* 0C09EE22 sts macl,Rn */
	r4 += r3;  /* 0C09EE24 add Rm,Rn */
	r10 = R32(r4); UPD(0x0C09EE28u, 3);  /* 0C09EE26 mov.l @Rm,Rn */
	T = (r10 & r10) == 0;  /* 0C09EE28 tst Rm,Rn */
	if (!T) { UPD(0x0C09EE3Eu, 4); goto L_0C09EE3E; }  /* 0C09EE2A bf */
L_0C09EE2C: BLKS(0x0C09EE2Cu);
	r4 += 0x40u;  /* 0C09EE2C add #imm,Rn */
	r4 = R32(r4); UPD(0x0C09EE30u, 2);  /* 0C09EE2E mov.l @Rm,Rn */
	r5 = 0x1869Fu; UPD(0x0C09EE32u, 1);  /* 0C09EE30 mov.l @(disp,pc),Rn */
	T = r4 > r5;  /* 0C09EE32 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C09EE3Eu, 4); goto L_0C09EE3E; }  /* 0C09EE34 bt */
L_0C09EE36: BLKS(0x0C09EE36u);
	r8 = 0xC175064u; UPD(0x0C09EE38u, 1);  /* 0C09EE36 mov.l @(disp,pc),Rn */
	r0 = R32(r8); UPD(0x0C09EE3Au, 1);  /* 0C09EE38 mov.l @Rm,Rn */
	T = r0 == 0x3u;  /* 0C09EE3A cmp/eq #imm,r0 */
	if (T) { UPD(0x0C09EE50u, 4); goto L_0C09EE50; }  /* 0C09EE3C bt */
L_0C09EE3E: BLKS(0x0C09EE3Eu);
	r15 = r14;  /* 0C09EE3E mov Rm,Rn */
	IF(0x0C09EE40u); PR = R32(r15); r15 += 4; UPD(0x0C09EE42u, 2);  /* 0C09EE40 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09EE44u, 1);  /* 0C09EE42 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09EE46u, 1);  /* 0C09EE44 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09EE48u, 1);  /* 0C09EE46 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09EE4Au, 1);  /* 0C09EE48 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09EE4Cu, 1);  /* 0C09EE4A mov.l @Rm+,Rn */
	IF(0x0C09EE4Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C09EE4C rts */
L_0C09EE50: BLKS(0x0C09EE50u);
	r6 = 0x4u;  /* 0C09EE50 mov #imm,Rn */
	IF(0x0C09EE52u); ARG0(0x446Du); { s32 s_ = (s32)r6; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = 0; else r4 >>= ((~s_ & 31) + 1); }  /* 0C09EE52 shld Rm,Rn */
	r7 = 0x40000u; UPD(0x0C09EE56u, 3);  /* 0C09EE54 mov.l @(disp,pc),Rn */
	r2 = 0xC071C90u; UPD(0x0C09EE58u, 1);  /* 0C09EE56 mov.l @(disp,pc),Rn */
	r4 += r7;  /* 0C09EE58 add Rm,Rn */
	r15 = r14;  /* 0C09EE5A mov Rm,Rn */
	IF(0x0C09EE5Cu); PR = R32(r15); r15 += 4; UPD(0x0C09EE5Eu, 3);  /* 0C09EE5C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09EE60u, 1);  /* 0C09EE5E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09EE62u, 1);  /* 0C09EE60 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09EE64u, 1);  /* 0C09EE62 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09EE66u, 1);  /* 0C09EE64 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09EE68u, 1);  /* 0C09EE66 mov.l @Rm+,Rn */
	IF(0x0C09EE68u); { u32 tv_ = r2; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C071C90u: TAIL(blk_f_0C071C90); default: JUMPD(tv_); } }  /* 0C09EE68 jmp @Rn */
L_0C09F0B0: BLKS(0x0C09F0B0u);
	r8 = 0xB4u; UPD(0x0C09F0B2u, 1);  /* 0C09F0B0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C09F0B2 add #imm,Rn */
	IF(0x0C09F0B4u); MACL = r10 * r8;  /* 0C09F0B4 mul.l Rm,Rn */
	r4 = 0xC286578u; UPD(0x0C09F0B8u, 4);  /* 0C09F0B6 mov.l @(disp,pc),Rn */
	r5 = 0x5u;  /* 0C09F0B8 mov #imm,Rn */
	IF(0x0C09F0BAu); r8 = MACL;  /* 0C09F0BA sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C09F0BEu, 3);  /* 0C09F0BC mov.w @(disp,pc),Rn */
	r8 += r4;  /* 0C09F0BE add Rm,Rn */
	IF(0x0C09F0C0u); r12 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C09F0C2u, 2);  /* 0C09F0C0 mov.b @(r0,Rm),Rn */
	r6 = r12 & 0xFF;  /* 0C09F0C2 extu.b Rm,Rn */
	W32(r15, r6); UPD(0x0C09F0C6u, 2);  /* 0C09F0C4 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C09F0C6 add #imm,Rn */
	IF(0x0C09F0C8u); r7 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C09F0CAu, 2);  /* 0C09F0C8 mov.b @(r0,Rm),Rn */
	r2 = r7 & 0xFF;  /* 0C09F0CA extu.b Rm,Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C09F0CEu, 2);  /* 0C09F0CC mov.l Rm,@(disp,Rn) */
	r9 = 0xC0BFE70u; UPD(0x0C09F0D0u, 1);  /* 0C09F0CE mov.l @(disp,pc),Rn */
	r11 = 0xC0A8CA0u; UPD(0x0C09F0D2u, 1);  /* 0C09F0D0 mov.l @(disp,pc),Rn */
	r4 = R32(r8); UPD(0x0C09F0D4u, 1);  /* 0C09F0D2 mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C09F0D6u, 1);  /* 0C09F0D4 mov.l @(disp,Rm),Rn */
	IF(0x0C09F0D6u); { u32 t_ = r9; PR = 0x0C09F0DAu; r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BFE70, 0x0C0BFE70u, 0x0C09F0DAu); }  /* 0C09F0D6 jsr @Rn */
L_0C09F0DA: BLKS(0x0C09F0DAu);
	r15 += 0x8u;  /* 0C09F0DA add #imm,Rn */
	IF(0x0C09F0DCu); { u32 t_ = r11; PR = 0x0C09F0E0u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 3); CALLD(t_, 0x0C09F0E0u); }  /* 0C09F0DC jsr @Rn */
L_0C09F0E0: BLKS(0x0C09F0E0u);
	IF(0x0C09F0E0u); T = r0 >> 31; r0 = (r0 << 1) | T;  /* 0C09F0E0 rotl Rn */
	r2 = R32(r8 + 0xCu); UPD(0x0C09F0E4u, 2);  /* 0C09F0E2 mov.l @(disp,Rm),Rn */
	IF(0x0C09F0E4u); r3 = T;  /* 0C09F0E4 movt Rn */
	T = (r2 & r2) == 0;  /* 0C09F0E6 tst Rm,Rn */
	r0 = 0xFFFFFFFFu;  /* 0C09F0E8 mov #imm,Rn */
	{ u32 t_ = 0u - r0, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r5 = r_; }  /* 0C09F0EA negc Rm,Rn */
	r5 |= r3;  /* 0C09F0EC or Rm,Rn */
	T = (r5 & r5) == 0;  /* 0C09F0EE tst Rm,Rn */
	if (T) { UPD(0x0C09F100u, 9); goto L_0C09F100; }  /* 0C09F0F0 bt */
L_0C09F0F2: BLKS(0x0C09F0F2u);
	r10 = 0x0u;  /* 0C09F0F2 mov #imm,Rn */
	{ W32(r8, r10); /* slot mov.l Rm,@Rn */ UPD(0x0C09EE3Eu, 4); goto L_0C09EE3E; }  /* 0C09F0F4 bra */
L_0C09F100: BLKS(0x0C09F100u);
	r5 = 0xC0A8A30u; UPD(0x0C09F102u, 1);  /* 0C09F100 mov.l @(disp,pc),Rn */
	r2 += 0x1u;  /* 0C09F102 add #imm,Rn */
	W32(r8 + 0xCu, r2); UPD(0x0C09F106u, 2);  /* 0C09F104 mov.l Rm,@(disp,Rn) */
	IF(0x0C09F106u); { u32 t_ = r5; PR = 0x0C09F10Au; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C09F10Au); }  /* 0C09F106 jsr @Rn */
L_0C09F10A: BLKS(0x0C09F10Au);
	{ IF(0x0C09F10Cu); ; /* slot nop */ UPD(0x0C09EE1Cu, 3); goto L_0C09EE1C; }  /* 0C09F10A bra */
}

void blk_f_0C09F110(sh3_t *c)
{
	LOCALS;
	goto L_0C09F110;
L_0C09EE1C: BLKS(0x0C09EE1Cu);
	r4 = 0xB4u; UPD(0x0C09EE1Eu, 1);  /* 0C09EE1C mov.w @(disp,pc),Rn */
	IF(0x0C09EE1Eu); MACL = r10 * r4;  /* 0C09EE1E mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C09EE22u, 3);  /* 0C09EE20 mov.l @(disp,pc),Rn */
	IF(0x0C09EE22u); r4 = MACL;  /* 0C09EE22 sts macl,Rn */
	r4 += r3;  /* 0C09EE24 add Rm,Rn */
	r10 = R32(r4); UPD(0x0C09EE28u, 3);  /* 0C09EE26 mov.l @Rm,Rn */
	T = (r10 & r10) == 0;  /* 0C09EE28 tst Rm,Rn */
	if (!T) { UPD(0x0C09EE3Eu, 4); goto L_0C09EE3E; }  /* 0C09EE2A bf */
L_0C09EE2C: BLKS(0x0C09EE2Cu);
	r4 += 0x40u;  /* 0C09EE2C add #imm,Rn */
	r4 = R32(r4); UPD(0x0C09EE30u, 2);  /* 0C09EE2E mov.l @Rm,Rn */
	r5 = 0x1869Fu; UPD(0x0C09EE32u, 1);  /* 0C09EE30 mov.l @(disp,pc),Rn */
	T = r4 > r5;  /* 0C09EE32 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C09EE3Eu, 4); goto L_0C09EE3E; }  /* 0C09EE34 bt */
L_0C09EE36: BLKS(0x0C09EE36u);
	r8 = 0xC175064u; UPD(0x0C09EE38u, 1);  /* 0C09EE36 mov.l @(disp,pc),Rn */
	r0 = R32(r8); UPD(0x0C09EE3Au, 1);  /* 0C09EE38 mov.l @Rm,Rn */
	T = r0 == 0x3u;  /* 0C09EE3A cmp/eq #imm,r0 */
	if (T) { UPD(0x0C09EE50u, 4); goto L_0C09EE50; }  /* 0C09EE3C bt */
L_0C09EE3E: BLKS(0x0C09EE3Eu);
	r15 = r14;  /* 0C09EE3E mov Rm,Rn */
	IF(0x0C09EE40u); PR = R32(r15); r15 += 4; UPD(0x0C09EE42u, 2);  /* 0C09EE40 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09EE44u, 1);  /* 0C09EE42 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09EE46u, 1);  /* 0C09EE44 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09EE48u, 1);  /* 0C09EE46 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09EE4Au, 1);  /* 0C09EE48 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09EE4Cu, 1);  /* 0C09EE4A mov.l @Rm+,Rn */
	IF(0x0C09EE4Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C09EE4C rts */
L_0C09EE50: BLKS(0x0C09EE50u);
	r6 = 0x4u;  /* 0C09EE50 mov #imm,Rn */
	IF(0x0C09EE52u); ARG0(0x446Du); { s32 s_ = (s32)r6; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = 0; else r4 >>= ((~s_ & 31) + 1); }  /* 0C09EE52 shld Rm,Rn */
	r7 = 0x40000u; UPD(0x0C09EE56u, 3);  /* 0C09EE54 mov.l @(disp,pc),Rn */
	r2 = 0xC071C90u; UPD(0x0C09EE58u, 1);  /* 0C09EE56 mov.l @(disp,pc),Rn */
	r4 += r7;  /* 0C09EE58 add Rm,Rn */
	r15 = r14;  /* 0C09EE5A mov Rm,Rn */
	IF(0x0C09EE5Cu); PR = R32(r15); r15 += 4; UPD(0x0C09EE5Eu, 3);  /* 0C09EE5C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09EE60u, 1);  /* 0C09EE5E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09EE62u, 1);  /* 0C09EE60 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09EE64u, 1);  /* 0C09EE62 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09EE66u, 1);  /* 0C09EE64 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09EE68u, 1);  /* 0C09EE66 mov.l @Rm+,Rn */
	IF(0x0C09EE68u); { u32 tv_ = r2; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C071C90u: TAIL(blk_f_0C071C90); default: JUMPD(tv_); } }  /* 0C09EE68 jmp @Rn */
L_0C09EF04: BLKS(0x0C09EF04u);
	r0 = 0xC0BD6F0u; UPD(0x0C09EF06u, 1);  /* 0C09EF04 mov.l @(disp,pc),Rn */
	IF(0x0C09EF06u); { u32 t_ = r0; PR = 0x0C09EF0Au; r9 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C09EF0Au); }  /* 0C09EF06 jsr @Rn */
L_0C09EF0A: BLKS(0x0C09EF0Au);
	W32(r8, r9); UPD(0x0C09EF0Cu, 1);  /* 0C09EF0A mov.l Rm,@Rn */
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C09EE1Cu, 3); goto L_0C09EE1C; }  /* 0C09EF0C bra */
L_0C09F110: BLKS(0x0C09F110u);
	r3 = 0xC286578u; UPD(0x0C09F112u, 1);  /* 0C09F110 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C09F112 add #imm,Rn */
	r0 = 0xB0u; UPD(0x0C09F116u, 2);  /* 0C09F114 mov.w @(disp,pc),Rn */
	r5 = 0x4u;  /* 0C09F116 mov #imm,Rn */
	IF(0x0C09F118u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C09F11Au, 2);  /* 0C09F118 mov.b @(r0,Rm),Rn */
	r9 = r2 & 0xFF;  /* 0C09F11A extu.b Rm,Rn */
	W32(r15, r9); UPD(0x0C09F11Eu, 2);  /* 0C09F11C mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C09F11E add #imm,Rn */
	r7 = 0xB4u; UPD(0x0C09F122u, 2);  /* 0C09F120 mov.w @(disp,pc),Rn */
	IF(0x0C09F122u); r11 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C09F124u, 1);  /* 0C09F122 mov.b @(r0,Rm),Rn */
	IF(0x0C09F124u); MACL = r10 * r7;  /* 0C09F124 mul.l Rm,Rn */
	r0 = r11 & 0xFF;  /* 0C09F126 extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C09F12Au, 4);  /* 0C09F128 mov.l Rm,@(disp,Rn) */
	IF(0x0C09F12Au); r8 = MACL;  /* 0C09F12A sts macl,Rn */
	r8 += r3;  /* 0C09F12C add Rm,Rn */
	r4 = R32(r8); UPD(0x0C09F130u, 3);  /* 0C09F12E mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C09F132u, 1);  /* 0C09F130 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C09EF04u, 3); goto L_0C09EF04; }  /* 0C09F132 bra */
}

void blk_f_0C09F140(sh3_t *c)
{
	LOCALS;
	goto L_0C09F140;
L_0C09EE1C: BLKS(0x0C09EE1Cu);
	r4 = 0xB4u; UPD(0x0C09EE1Eu, 1);  /* 0C09EE1C mov.w @(disp,pc),Rn */
	IF(0x0C09EE1Eu); MACL = r10 * r4;  /* 0C09EE1E mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C09EE22u, 3);  /* 0C09EE20 mov.l @(disp,pc),Rn */
	IF(0x0C09EE22u); r4 = MACL;  /* 0C09EE22 sts macl,Rn */
	r4 += r3;  /* 0C09EE24 add Rm,Rn */
	r10 = R32(r4); UPD(0x0C09EE28u, 3);  /* 0C09EE26 mov.l @Rm,Rn */
	T = (r10 & r10) == 0;  /* 0C09EE28 tst Rm,Rn */
	if (!T) { UPD(0x0C09EE3Eu, 4); goto L_0C09EE3E; }  /* 0C09EE2A bf */
L_0C09EE2C: BLKS(0x0C09EE2Cu);
	r4 += 0x40u;  /* 0C09EE2C add #imm,Rn */
	r4 = R32(r4); UPD(0x0C09EE30u, 2);  /* 0C09EE2E mov.l @Rm,Rn */
	r5 = 0x1869Fu; UPD(0x0C09EE32u, 1);  /* 0C09EE30 mov.l @(disp,pc),Rn */
	T = r4 > r5;  /* 0C09EE32 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C09EE3Eu, 4); goto L_0C09EE3E; }  /* 0C09EE34 bt */
L_0C09EE36: BLKS(0x0C09EE36u);
	r8 = 0xC175064u; UPD(0x0C09EE38u, 1);  /* 0C09EE36 mov.l @(disp,pc),Rn */
	r0 = R32(r8); UPD(0x0C09EE3Au, 1);  /* 0C09EE38 mov.l @Rm,Rn */
	T = r0 == 0x3u;  /* 0C09EE3A cmp/eq #imm,r0 */
	if (T) { UPD(0x0C09EE50u, 4); goto L_0C09EE50; }  /* 0C09EE3C bt */
L_0C09EE3E: BLKS(0x0C09EE3Eu);
	r15 = r14;  /* 0C09EE3E mov Rm,Rn */
	IF(0x0C09EE40u); PR = R32(r15); r15 += 4; UPD(0x0C09EE42u, 2);  /* 0C09EE40 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09EE44u, 1);  /* 0C09EE42 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09EE46u, 1);  /* 0C09EE44 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09EE48u, 1);  /* 0C09EE46 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09EE4Au, 1);  /* 0C09EE48 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09EE4Cu, 1);  /* 0C09EE4A mov.l @Rm+,Rn */
	IF(0x0C09EE4Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C09EE4C rts */
L_0C09EE50: BLKS(0x0C09EE50u);
	r6 = 0x4u;  /* 0C09EE50 mov #imm,Rn */
	IF(0x0C09EE52u); ARG0(0x446Du); { s32 s_ = (s32)r6; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = 0; else r4 >>= ((~s_ & 31) + 1); }  /* 0C09EE52 shld Rm,Rn */
	r7 = 0x40000u; UPD(0x0C09EE56u, 3);  /* 0C09EE54 mov.l @(disp,pc),Rn */
	r2 = 0xC071C90u; UPD(0x0C09EE58u, 1);  /* 0C09EE56 mov.l @(disp,pc),Rn */
	r4 += r7;  /* 0C09EE58 add Rm,Rn */
	r15 = r14;  /* 0C09EE5A mov Rm,Rn */
	IF(0x0C09EE5Cu); PR = R32(r15); r15 += 4; UPD(0x0C09EE5Eu, 3);  /* 0C09EE5C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09EE60u, 1);  /* 0C09EE5E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09EE62u, 1);  /* 0C09EE60 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09EE64u, 1);  /* 0C09EE62 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09EE66u, 1);  /* 0C09EE64 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09EE68u, 1);  /* 0C09EE66 mov.l @Rm+,Rn */
	IF(0x0C09EE68u); { u32 tv_ = r2; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C071C90u: TAIL(blk_f_0C071C90); default: JUMPD(tv_); } }  /* 0C09EE68 jmp @Rn */
L_0C09EF06: BLKS(0x0C09EF06u);
	IF(0x0C09EF06u); { u32 t_ = r0; PR = 0x0C09EF0Au; r9 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C09EF0Au); }  /* 0C09EF06 jsr @Rn */
L_0C09EF0A: BLKS(0x0C09EF0Au);
	W32(r8, r9); UPD(0x0C09EF0Cu, 1);  /* 0C09EF0A mov.l Rm,@Rn */
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C09EE1Cu, 3); goto L_0C09EE1C; }  /* 0C09EF0C bra */
L_0C09EF4A: BLKS(0x0C09EF4Au);
	r6 = R32(r8 + 0x24u); UPD(0x0C09EF4Cu, 1);  /* 0C09EF4A mov.l @(disp,Rm),Rn */
	r0 = 0xC0BECB0u; UPD(0x0C09EF4Eu, 1);  /* 0C09EF4C mov.l @(disp,pc),Rn */
	{ r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C09EF06u, 3); goto L_0C09EF06; }  /* 0C09EF4E bra */
L_0C09EF7A: BLKS(0x0C09EF7Au);
	W32(r15 + 0x4u, r1); UPD(0x0C09EF7Cu, 1);  /* 0C09EF7A mov.l Rm,@(disp,Rn) */
	r5 = 0x3u;  /* 0C09EF7C mov #imm,Rn */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C09EF4Au, 4); goto L_0C09EF4A; }  /* 0C09EF7E bra */
L_0C09F140: BLKS(0x0C09F140u);
	r12 = 0xC0A8CA0u; UPD(0x0C09F142u, 1);  /* 0C09F140 mov.l @(disp,pc),Rn */
	IF(0x0C09F142u); { u32 t_ = r12; PR = 0x0C09F146u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C09F146u); }  /* 0C09F142 jsr @Rn */
L_0C09F146: BLKS(0x0C09F146u);
	IF(0x0C09F146u); T = (s32)r0 >= 0;  /* 0C09F146 cmp/pz Rn */
	if (!T) { UPD(0x0C09F170u, 4); goto L_0C09F170; }  /* 0C09F148 bf */
L_0C09F14A: BLKS(0x0C09F14Au);
	r15 += 0xFFFFFFF8u;  /* 0C09F14A add #imm,Rn */
	r9 = 0xB4u; UPD(0x0C09F14Eu, 2);  /* 0C09F14C mov.w @(disp,pc),Rn */
	IF(0x0C09F14Eu); MACL = r10 * r9;  /* 0C09F14E mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C09F152u, 3);  /* 0C09F150 mov.l @(disp,pc),Rn */
	IF(0x0C09F152u); r8 = MACL;  /* 0C09F152 sts macl,Rn */
	r8 += r0;  /* 0C09F154 add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C09F158u, 3);  /* 0C09F156 mov.w @(disp,pc),Rn */
	IF(0x0C09F158u); r11 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C09F15Au, 1);  /* 0C09F158 mov.b @(r0,Rm),Rn */
	r3 = r11 & 0xFF;  /* 0C09F15A extu.b Rm,Rn */
	W32(r15, r3); UPD(0x0C09F15Eu, 2);  /* 0C09F15C mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C09F15E add #imm,Rn */
	IF(0x0C09F160u); r5 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C09F162u, 2);  /* 0C09F160 mov.b @(r0,Rm),Rn */
	r1 = r5 & 0xFF;  /* 0C09F162 extu.b Rm,Rn */
	{ r1 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C09EF7Au, 4); goto L_0C09EF7A; }  /* 0C09F164 bra */
L_0C09F170: BLKS(0x0C09F170u);
	r8 = 0xB4u; UPD(0x0C09F172u, 1);  /* 0C09F170 mov.w @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C09F172 mov #imm,Rn */
	IF(0x0C09F174u); MACL = r10 * r8;  /* 0C09F174 mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C09F178u, 4);  /* 0C09F176 mov.l @(disp,pc),Rn */
	IF(0x0C09F178u); r0 = MACL;  /* 0C09F178 sts macl,Rn */
	{ IF(0x0C09F17Cu); W32(r0 + r6, r4); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C09EE3Eu, 4); goto L_0C09EE3E; }  /* 0C09F17A bra */
}

void blk_f_0C09F1C0(sh3_t *c)
{
	LOCALS;
	goto L_0C09F1C0;
L_0C09EE1C: BLKS(0x0C09EE1Cu);
	r4 = 0xB4u; UPD(0x0C09EE1Eu, 1);  /* 0C09EE1C mov.w @(disp,pc),Rn */
	IF(0x0C09EE1Eu); MACL = r10 * r4;  /* 0C09EE1E mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C09EE22u, 3);  /* 0C09EE20 mov.l @(disp,pc),Rn */
	IF(0x0C09EE22u); r4 = MACL;  /* 0C09EE22 sts macl,Rn */
	r4 += r3;  /* 0C09EE24 add Rm,Rn */
	r10 = R32(r4); UPD(0x0C09EE28u, 3);  /* 0C09EE26 mov.l @Rm,Rn */
	T = (r10 & r10) == 0;  /* 0C09EE28 tst Rm,Rn */
	if (!T) { UPD(0x0C09EE3Eu, 4); goto L_0C09EE3E; }  /* 0C09EE2A bf */
L_0C09EE2C: BLKS(0x0C09EE2Cu);
	r4 += 0x40u;  /* 0C09EE2C add #imm,Rn */
	r4 = R32(r4); UPD(0x0C09EE30u, 2);  /* 0C09EE2E mov.l @Rm,Rn */
	r5 = 0x1869Fu; UPD(0x0C09EE32u, 1);  /* 0C09EE30 mov.l @(disp,pc),Rn */
	T = r4 > r5;  /* 0C09EE32 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C09EE3Eu, 4); goto L_0C09EE3E; }  /* 0C09EE34 bt */
L_0C09EE36: BLKS(0x0C09EE36u);
	r8 = 0xC175064u; UPD(0x0C09EE38u, 1);  /* 0C09EE36 mov.l @(disp,pc),Rn */
	r0 = R32(r8); UPD(0x0C09EE3Au, 1);  /* 0C09EE38 mov.l @Rm,Rn */
	T = r0 == 0x3u;  /* 0C09EE3A cmp/eq #imm,r0 */
	if (T) { UPD(0x0C09EE50u, 4); goto L_0C09EE50; }  /* 0C09EE3C bt */
L_0C09EE3E: BLKS(0x0C09EE3Eu);
	r15 = r14;  /* 0C09EE3E mov Rm,Rn */
	IF(0x0C09EE40u); PR = R32(r15); r15 += 4; UPD(0x0C09EE42u, 2);  /* 0C09EE40 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09EE44u, 1);  /* 0C09EE42 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09EE46u, 1);  /* 0C09EE44 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09EE48u, 1);  /* 0C09EE46 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09EE4Au, 1);  /* 0C09EE48 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09EE4Cu, 1);  /* 0C09EE4A mov.l @Rm+,Rn */
	IF(0x0C09EE4Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C09EE4C rts */
L_0C09EE50: BLKS(0x0C09EE50u);
	r6 = 0x4u;  /* 0C09EE50 mov #imm,Rn */
	IF(0x0C09EE52u); ARG0(0x446Du); { s32 s_ = (s32)r6; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = 0; else r4 >>= ((~s_ & 31) + 1); }  /* 0C09EE52 shld Rm,Rn */
	r7 = 0x40000u; UPD(0x0C09EE56u, 3);  /* 0C09EE54 mov.l @(disp,pc),Rn */
	r2 = 0xC071C90u; UPD(0x0C09EE58u, 1);  /* 0C09EE56 mov.l @(disp,pc),Rn */
	r4 += r7;  /* 0C09EE58 add Rm,Rn */
	r15 = r14;  /* 0C09EE5A mov Rm,Rn */
	IF(0x0C09EE5Cu); PR = R32(r15); r15 += 4; UPD(0x0C09EE5Eu, 3);  /* 0C09EE5C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09EE60u, 1);  /* 0C09EE5E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09EE62u, 1);  /* 0C09EE60 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09EE64u, 1);  /* 0C09EE62 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09EE66u, 1);  /* 0C09EE64 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09EE68u, 1);  /* 0C09EE66 mov.l @Rm+,Rn */
	IF(0x0C09EE68u); { u32 tv_ = r2; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C071C90u: TAIL(blk_f_0C071C90); default: JUMPD(tv_); } }  /* 0C09EE68 jmp @Rn */
L_0C09EE70: BLKS(0x0C09EE70u);
	r4 = 0xB4u; UPD(0x0C09EE72u, 1);  /* 0C09EE70 mov.w @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C09EE72 mov #imm,Rn */
	IF(0x0C09EE74u); MACL = r10 * r4;  /* 0C09EE74 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C09EE78u, 4);  /* 0C09EE76 mov.l @(disp,pc),Rn */
	IF(0x0C09EE78u); r0 = MACL;  /* 0C09EE78 sts macl,Rn */
	{ IF(0x0C09EE7Cu); W32(r0 + r9, r3); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C09EE1Cu, 4); goto L_0C09EE1C; }  /* 0C09EE7A bra */
L_0C09F1C0: BLKS(0x0C09F1C0u);
	r11 = 0xB4u; UPD(0x0C09F1C2u, 1);  /* 0C09F1C0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C09F1C2 add #imm,Rn */
	IF(0x0C09F1C4u); MACL = r10 * r11;  /* 0C09F1C4 mul.l Rm,Rn */
	r12 = 0xC286578u; UPD(0x0C09F1C8u, 4);  /* 0C09F1C6 mov.l @(disp,pc),Rn */
	r5 = 0x5u;  /* 0C09F1C8 mov #imm,Rn */
	IF(0x0C09F1CAu); r8 = MACL;  /* 0C09F1CA sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C09F1CEu, 3);  /* 0C09F1CC mov.w @(disp,pc),Rn */
	r8 += r12;  /* 0C09F1CE add Rm,Rn */
	IF(0x0C09F1D0u); r4 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C09F1D2u, 2);  /* 0C09F1D0 mov.b @(r0,Rm),Rn */
	r9 = 0xA9u; UPD(0x0C09F1D4u, 1);  /* 0C09F1D2 mov.w @(disp,pc),Rn */
	r6 = r4 & 0xFF;  /* 0C09F1D4 extu.b Rm,Rn */
	W32(r15, r6); UPD(0x0C09F1D8u, 2);  /* 0C09F1D6 mov.l Rm,@Rn */
	r9 += r8;  /* 0C09F1D8 add Rm,Rn */
	r7 = (u32)(s32)(s8)R8(r9); UPD(0x0C09F1DCu, 2);  /* 0C09F1DA mov.b @Rm,Rn */
	r0 = 0xC0BECB0u; UPD(0x0C09F1DEu, 1);  /* 0C09F1DC mov.l @(disp,pc),Rn */
	r2 = r7 & 0xFF;  /* 0C09F1DE extu.b Rm,Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C09F1E2u, 2);  /* 0C09F1E0 mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C09F1E4u, 1);  /* 0C09F1E2 mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C09F1E6u, 1);  /* 0C09F1E4 mov.l @(disp,Rm),Rn */
	IF(0x0C09F1E6u); { u32 t_ = r0; PR = 0x0C09F1EAu; r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BECB0, 0x0C0BECB0u, 0x0C09F1EAu); }  /* 0C09F1E6 jsr @Rn */
L_0C09F1EA: BLKS(0x0C09F1EAu);
	r0 = 0xC0A8CA0u; UPD(0x0C09F1ECu, 1);  /* 0C09F1EA mov.l @(disp,pc),Rn */
	r15 += 0x8u;  /* 0C09F1EC add #imm,Rn */
	IF(0x0C09F1EEu); { u32 t_ = r0; PR = 0x0C09F1F2u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C09F1F2u); }  /* 0C09F1EE jsr @Rn */
L_0C09F1F2: BLKS(0x0C09F1F2u);
	IF(0x0C09F1F2u); T = (s32)r0 >= 0;  /* 0C09F1F2 cmp/pz Rn */
	if (!T) { UPD(0x0C09F232u, 4); goto L_0C09F232; }  /* 0C09F1F4 bf */
L_0C09F1F6: BLKS(0x0C09F1F6u);
	r1 = (u32)(s32)(s8)R8(r9); UPD(0x0C09F1F8u, 1);  /* 0C09F1F6 mov.b @Rm,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C09F1F8 add #imm,Rn */
	r0 = 0x20000u; UPD(0x0C09F1FCu, 2);  /* 0C09F1FA mov.l @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C09F1FC mov #imm,Rn */
	W32(r15, r0); UPD(0x0C09F200u, 2);  /* 0C09F1FE mov.l Rm,@Rn */
	r7 = r1 & 0xFF;  /* 0C09F200 extu.b Rm,Rn */
	W32(r15 + 0x4u, r3); UPD(0x0C09F204u, 2);  /* 0C09F202 mov.l Rm,@(disp,Rn) */
	r4 = 0xBu;  /* 0C09F204 mov #imm,Rn */
	r9 = 0xC07CD80u; UPD(0x0C09F208u, 2);  /* 0C09F206 mov.l @(disp,pc),Rn */
	r5 = R32(r8 + 0x24u); UPD(0x0C09F20Au, 1);  /* 0C09F208 mov.l @(disp,Rm),Rn */
	IF(0x0C09F20Au); { u32 t_ = r9; PR = 0x0C09F20Eu; r6 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07CD80, 0x0C07CD80u, 0x0C09F20Eu); }  /* 0C09F20A jsr @Rn */
L_0C09F20E: BLKS(0x0C09F20Eu);
	r5 = 0xC175064u; UPD(0x0C09F210u, 1);  /* 0C09F20E mov.l @(disp,pc),Rn */
	r0 = R32(r5); UPD(0x0C09F212u, 1);  /* 0C09F210 mov.l @Rm,Rn */
	T = r0 == 0x3u;  /* 0C09F212 cmp/eq #imm,r0 */
	{ u32 c_ = T; r15 += 0x8u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C09F240u, 4); goto L_0C09F240; } goto L_0C09F218; }  /* 0C09F214 bt/s */
L_0C09F218: BLKS(0x0C09F218u);
	r8 += 0x7Eu;  /* 0C09F218 add #imm,Rn */
	r4 = (u32)(s32)(s16)R16(r8); UPD(0x0C09F21Cu, 3);  /* 0C09F21A mov.w @Rm,Rn */
L_0C09F21C: BLKS(0x0C09F21Cu);
	IF(0x0C09F21Cu); MACL = r4 * r11;  /* 0C09F21C mul.l Rm,Rn */
	r6 = 0xA6u; UPD(0x0C09F220u, 3);  /* 0C09F21E mov.w @(disp,pc),Rn */
	r8 += 0xFFFFFF82u;  /* 0C09F220 add #imm,Rn */
	IF(0x0C09F222u); r11 = MACL;  /* 0C09F222 sts macl,Rn */
	r11 += r12;  /* 0C09F224 add Rm,Rn */
	r0 = 0xA1u; UPD(0x0C09F228u, 4);  /* 0C09F226 mov.w @(disp,pc),Rn */
	r11 += r6;  /* 0C09F228 add Rm,Rn */
	r12 = (u32)(s32)(s8)R8(r11); UPD(0x0C09F22Cu, 2);  /* 0C09F22A mov.b @Rm,Rn */
	IF(0x0C09F22Cu); r7 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C09F22Eu, 1);  /* 0C09F22C mov.b @(r0,Rm),Rn */
	r12 |= r7;  /* 0C09F22E or Rm,Rn */
	W8(r11, r12); UPD(0x0C09F232u, 2);  /* 0C09F230 mov.b Rm,@Rn */
L_0C09F232: BLKS(0x0C09F232u);
	{ IF(0x0C09F234u); ; /* slot nop */ UPD(0x0C09EE70u, 3); goto L_0C09EE70; }  /* 0C09F232 bra */
L_0C09F240: BLKS(0x0C09F240u);
	r2 = 0xC071C90u; UPD(0x0C09F242u, 1);  /* 0C09F240 mov.l @(disp,pc),Rn */
	r4 = 0x100000u; UPD(0x0C09F244u, 1);  /* 0C09F242 mov.l @(disp,pc),Rn */
	IF(0x0C09F244u); { u32 t_ = r2; PR = 0x0C09F248u; r8 += 0x7Eu; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C071C90, 0x0C071C90u, 0x0C09F248u); }  /* 0C09F244 jsr @Rn */
L_0C09F248: BLKS(0x0C09F248u);
	{ r4 = (u32)(s32)(s16)R16(r8); /* slot mov.w @Rm,Rn */ UPD(0x0C09F21Cu, 3); goto L_0C09F21C; }  /* 0C09F248 bra */
}

void blk_f_0C09F250(sh3_t *c)
{
	LOCALS;
	goto L_0C09F250;
L_0C09EE1C: BLKS(0x0C09EE1Cu);
	r4 = 0xB4u; UPD(0x0C09EE1Eu, 1);  /* 0C09EE1C mov.w @(disp,pc),Rn */
	IF(0x0C09EE1Eu); MACL = r10 * r4;  /* 0C09EE1E mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C09EE22u, 3);  /* 0C09EE20 mov.l @(disp,pc),Rn */
	IF(0x0C09EE22u); r4 = MACL;  /* 0C09EE22 sts macl,Rn */
	r4 += r3;  /* 0C09EE24 add Rm,Rn */
	r10 = R32(r4); UPD(0x0C09EE28u, 3);  /* 0C09EE26 mov.l @Rm,Rn */
	T = (r10 & r10) == 0;  /* 0C09EE28 tst Rm,Rn */
	if (!T) { UPD(0x0C09EE3Eu, 4); goto L_0C09EE3E; }  /* 0C09EE2A bf */
L_0C09EE2C: BLKS(0x0C09EE2Cu);
	r4 += 0x40u;  /* 0C09EE2C add #imm,Rn */
	r4 = R32(r4); UPD(0x0C09EE30u, 2);  /* 0C09EE2E mov.l @Rm,Rn */
	r5 = 0x1869Fu; UPD(0x0C09EE32u, 1);  /* 0C09EE30 mov.l @(disp,pc),Rn */
	T = r4 > r5;  /* 0C09EE32 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C09EE3Eu, 4); goto L_0C09EE3E; }  /* 0C09EE34 bt */
L_0C09EE36: BLKS(0x0C09EE36u);
	r8 = 0xC175064u; UPD(0x0C09EE38u, 1);  /* 0C09EE36 mov.l @(disp,pc),Rn */
	r0 = R32(r8); UPD(0x0C09EE3Au, 1);  /* 0C09EE38 mov.l @Rm,Rn */
	T = r0 == 0x3u;  /* 0C09EE3A cmp/eq #imm,r0 */
	if (T) { UPD(0x0C09EE50u, 4); goto L_0C09EE50; }  /* 0C09EE3C bt */
L_0C09EE3E: BLKS(0x0C09EE3Eu);
	r15 = r14;  /* 0C09EE3E mov Rm,Rn */
	IF(0x0C09EE40u); PR = R32(r15); r15 += 4; UPD(0x0C09EE42u, 2);  /* 0C09EE40 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09EE44u, 1);  /* 0C09EE42 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09EE46u, 1);  /* 0C09EE44 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09EE48u, 1);  /* 0C09EE46 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09EE4Au, 1);  /* 0C09EE48 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09EE4Cu, 1);  /* 0C09EE4A mov.l @Rm+,Rn */
	IF(0x0C09EE4Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C09EE4C rts */
L_0C09EE50: BLKS(0x0C09EE50u);
	r6 = 0x4u;  /* 0C09EE50 mov #imm,Rn */
	IF(0x0C09EE52u); ARG0(0x446Du); { s32 s_ = (s32)r6; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = 0; else r4 >>= ((~s_ & 31) + 1); }  /* 0C09EE52 shld Rm,Rn */
	r7 = 0x40000u; UPD(0x0C09EE56u, 3);  /* 0C09EE54 mov.l @(disp,pc),Rn */
	r2 = 0xC071C90u; UPD(0x0C09EE58u, 1);  /* 0C09EE56 mov.l @(disp,pc),Rn */
	r4 += r7;  /* 0C09EE58 add Rm,Rn */
	r15 = r14;  /* 0C09EE5A mov Rm,Rn */
	IF(0x0C09EE5Cu); PR = R32(r15); r15 += 4; UPD(0x0C09EE5Eu, 3);  /* 0C09EE5C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09EE60u, 1);  /* 0C09EE5E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09EE62u, 1);  /* 0C09EE60 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09EE64u, 1);  /* 0C09EE62 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09EE66u, 1);  /* 0C09EE64 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09EE68u, 1);  /* 0C09EE66 mov.l @Rm+,Rn */
	IF(0x0C09EE68u); { u32 tv_ = r2; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C071C90u: TAIL(blk_f_0C071C90); default: JUMPD(tv_); } }  /* 0C09EE68 jmp @Rn */
L_0C09EE70: BLKS(0x0C09EE70u);
	r4 = 0xB4u; UPD(0x0C09EE72u, 1);  /* 0C09EE70 mov.w @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C09EE72 mov #imm,Rn */
	IF(0x0C09EE74u); MACL = r10 * r4;  /* 0C09EE74 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C09EE78u, 4);  /* 0C09EE76 mov.l @(disp,pc),Rn */
	IF(0x0C09EE78u); r0 = MACL;  /* 0C09EE78 sts macl,Rn */
	{ IF(0x0C09EE7Cu); W32(r0 + r9, r3); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C09EE1Cu, 4); goto L_0C09EE1C; }  /* 0C09EE7A bra */
L_0C09F232: BLKS(0x0C09F232u);
	{ IF(0x0C09F234u); ; /* slot nop */ UPD(0x0C09EE70u, 3); goto L_0C09EE70; }  /* 0C09F232 bra */
L_0C09F250: BLKS(0x0C09F250u);
	r8 = 0xB4u; UPD(0x0C09F252u, 1);  /* 0C09F250 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C09F252 add #imm,Rn */
	IF(0x0C09F254u); MACL = r10 * r8;  /* 0C09F254 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C09F258u, 4);  /* 0C09F256 mov.l @(disp,pc),Rn */
	IF(0x0C09F258u); r8 = MACL;  /* 0C09F258 sts macl,Rn */
	r8 += r0;  /* 0C09F25A add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C09F25Eu, 3);  /* 0C09F25C mov.w @(disp,pc),Rn */
	IF(0x0C09F25Eu); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C09F260u, 1);  /* 0C09F25E mov.b @(r0,Rm),Rn */
	r9 = r2 & 0xFF;  /* 0C09F260 extu.b Rm,Rn */
	W32(r15, r9); UPD(0x0C09F264u, 2);  /* 0C09F262 mov.l Rm,@Rn */
	r9 = 0xA9u; UPD(0x0C09F266u, 1);  /* 0C09F264 mov.w @(disp,pc),Rn */
	r9 += r8;  /* 0C09F266 add Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r9); UPD(0x0C09F26Au, 2);  /* 0C09F268 mov.b @Rm,Rn */
	r5 = r3 & 0xFF;  /* 0C09F26A extu.b Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C09F26Eu, 2);  /* 0C09F26C mov.l Rm,@(disp,Rn) */
	r12 = 0xC0BFE70u; UPD(0x0C09F270u, 1);  /* 0C09F26E mov.l @(disp,pc),Rn */
	r5 = 0x4u;  /* 0C09F270 mov #imm,Rn */
	r11 = 0xC0A8BF0u; UPD(0x0C09F274u, 2);  /* 0C09F272 mov.l @(disp,pc),Rn */
	r4 = R32(r8); UPD(0x0C09F276u, 1);  /* 0C09F274 mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C09F278u, 1);  /* 0C09F276 mov.l @(disp,Rm),Rn */
	IF(0x0C09F278u); { u32 t_ = r12; PR = 0x0C09F27Cu; r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BFE70, 0x0C0BFE70u, 0x0C09F27Cu); }  /* 0C09F278 jsr @Rn */
L_0C09F27C: BLKS(0x0C09F27Cu);
	r15 += 0x8u;  /* 0C09F27C add #imm,Rn */
	IF(0x0C09F27Eu); { u32 t_ = r11; PR = 0x0C09F282u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 3); CALLD(t_, 0x0C09F282u); }  /* 0C09F27E jsr @Rn */
L_0C09F282: BLKS(0x0C09F282u);
	IF(0x0C09F282u); T = (s32)r0 >= 0;  /* 0C09F282 cmp/pz Rn */
	if (!T) { UPD(0x0C09F232u, 4); goto L_0C09F232; }  /* 0C09F284 bf */
L_0C09F286: BLKS(0x0C09F286u);
	r1 = (u32)(s32)(s8)R8(r9); UPD(0x0C09F288u, 1);  /* 0C09F286 mov.b @Rm,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C09F288 add #imm,Rn */
	r4 = 0x20000u; UPD(0x0C09F28Cu, 2);  /* 0C09F28A mov.l @(disp,pc),Rn */
	r6 = 0x0u;  /* 0C09F28C mov #imm,Rn */
	r11 = 0xC07CD80u; UPD(0x0C09F290u, 2);  /* 0C09F28E mov.l @(disp,pc),Rn */
	r7 = r1 & 0xFF;  /* 0C09F290 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C09F294u, 2);  /* 0C09F292 mov.l Rm,@Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C09F296u, 1);  /* 0C09F294 mov.l Rm,@(disp,Rn) */
	r4 = 0x8u;  /* 0C09F296 mov #imm,Rn */
	r5 = R32(r8 + 0x24u); UPD(0x0C09F29Au, 2);  /* 0C09F298 mov.l @(disp,Rm),Rn */
	IF(0x0C09F29Au); { u32 t_ = r11; PR = 0x0C09F29Eu; r6 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07CD80, 0x0C07CD80u, 0x0C09F29Eu); }  /* 0C09F29A jsr @Rn */
L_0C09F29E: BLKS(0x0C09F29Eu);
	r7 = 0xC175064u; UPD(0x0C09F2A0u, 1);  /* 0C09F29E mov.l @(disp,pc),Rn */
	r0 = R32(r7); UPD(0x0C09F2A2u, 1);  /* 0C09F2A0 mov.l @Rm,Rn */
	T = r0 == 0x3u;  /* 0C09F2A2 cmp/eq #imm,r0 */
	{ u32 c_ = !T; r15 += 0x8u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C09F232u, 4); goto L_0C09F232; } goto L_0C09F2A8; }  /* 0C09F2A4 bf/s */
L_0C09F2A8: BLKS(0x0C09F2A8u);
	r12 = 0xC071C90u; UPD(0x0C09F2AAu, 2);  /* 0C09F2A8 mov.l @(disp,pc),Rn */
	r4 = 0x100000u; UPD(0x0C09F2ACu, 1);  /* 0C09F2AA mov.l @(disp,pc),Rn */
	IF(0x0C09F2ACu); { u32 t_ = r12; PR = 0x0C09F2B0u; IF(0x0C09F2AEu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C071C90, 0x0C071C90u, 0x0C09F2B0u); }  /* 0C09F2AC jsr @Rn */
L_0C09F2B0: BLKS(0x0C09F2B0u);
	{ IF(0x0C09F2B2u); ; /* slot nop */ UPD(0x0C09EE70u, 3); goto L_0C09EE70; }  /* 0C09F2B0 bra */
}

void blk_f_0C09F2C0(sh3_t *c)
{
	LOCALS;
	goto L_0C09F2C0;
L_0C09EE1C: BLKS(0x0C09EE1Cu);
	r4 = 0xB4u; UPD(0x0C09EE1Eu, 1);  /* 0C09EE1C mov.w @(disp,pc),Rn */
	IF(0x0C09EE1Eu); MACL = r10 * r4;  /* 0C09EE1E mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C09EE22u, 3);  /* 0C09EE20 mov.l @(disp,pc),Rn */
	IF(0x0C09EE22u); r4 = MACL;  /* 0C09EE22 sts macl,Rn */
	r4 += r3;  /* 0C09EE24 add Rm,Rn */
	r10 = R32(r4); UPD(0x0C09EE28u, 3);  /* 0C09EE26 mov.l @Rm,Rn */
	T = (r10 & r10) == 0;  /* 0C09EE28 tst Rm,Rn */
	if (!T) { UPD(0x0C09EE3Eu, 4); goto L_0C09EE3E; }  /* 0C09EE2A bf */
L_0C09EE2C: BLKS(0x0C09EE2Cu);
	r4 += 0x40u;  /* 0C09EE2C add #imm,Rn */
	r4 = R32(r4); UPD(0x0C09EE30u, 2);  /* 0C09EE2E mov.l @Rm,Rn */
	r5 = 0x1869Fu; UPD(0x0C09EE32u, 1);  /* 0C09EE30 mov.l @(disp,pc),Rn */
	T = r4 > r5;  /* 0C09EE32 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C09EE3Eu, 4); goto L_0C09EE3E; }  /* 0C09EE34 bt */
L_0C09EE36: BLKS(0x0C09EE36u);
	r8 = 0xC175064u; UPD(0x0C09EE38u, 1);  /* 0C09EE36 mov.l @(disp,pc),Rn */
	r0 = R32(r8); UPD(0x0C09EE3Au, 1);  /* 0C09EE38 mov.l @Rm,Rn */
	T = r0 == 0x3u;  /* 0C09EE3A cmp/eq #imm,r0 */
	if (T) { UPD(0x0C09EE50u, 4); goto L_0C09EE50; }  /* 0C09EE3C bt */
L_0C09EE3E: BLKS(0x0C09EE3Eu);
	r15 = r14;  /* 0C09EE3E mov Rm,Rn */
	IF(0x0C09EE40u); PR = R32(r15); r15 += 4; UPD(0x0C09EE42u, 2);  /* 0C09EE40 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09EE44u, 1);  /* 0C09EE42 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09EE46u, 1);  /* 0C09EE44 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09EE48u, 1);  /* 0C09EE46 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09EE4Au, 1);  /* 0C09EE48 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09EE4Cu, 1);  /* 0C09EE4A mov.l @Rm+,Rn */
	IF(0x0C09EE4Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C09EE4C rts */
L_0C09EE50: BLKS(0x0C09EE50u);
	r6 = 0x4u;  /* 0C09EE50 mov #imm,Rn */
	IF(0x0C09EE52u); ARG0(0x446Du); { s32 s_ = (s32)r6; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = 0; else r4 >>= ((~s_ & 31) + 1); }  /* 0C09EE52 shld Rm,Rn */
	r7 = 0x40000u; UPD(0x0C09EE56u, 3);  /* 0C09EE54 mov.l @(disp,pc),Rn */
	r2 = 0xC071C90u; UPD(0x0C09EE58u, 1);  /* 0C09EE56 mov.l @(disp,pc),Rn */
	r4 += r7;  /* 0C09EE58 add Rm,Rn */
	r15 = r14;  /* 0C09EE5A mov Rm,Rn */
	IF(0x0C09EE5Cu); PR = R32(r15); r15 += 4; UPD(0x0C09EE5Eu, 3);  /* 0C09EE5C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09EE60u, 1);  /* 0C09EE5E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09EE62u, 1);  /* 0C09EE60 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09EE64u, 1);  /* 0C09EE62 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09EE66u, 1);  /* 0C09EE64 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09EE68u, 1);  /* 0C09EE66 mov.l @Rm+,Rn */
	IF(0x0C09EE68u); { u32 tv_ = r2; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C071C90u: TAIL(blk_f_0C071C90); default: JUMPD(tv_); } }  /* 0C09EE68 jmp @Rn */
L_0C09EE70: BLKS(0x0C09EE70u);
	r4 = 0xB4u; UPD(0x0C09EE72u, 1);  /* 0C09EE70 mov.w @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C09EE72 mov #imm,Rn */
	IF(0x0C09EE74u); MACL = r10 * r4;  /* 0C09EE74 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C09EE78u, 4);  /* 0C09EE76 mov.l @(disp,pc),Rn */
	IF(0x0C09EE78u); r0 = MACL;  /* 0C09EE78 sts macl,Rn */
	{ IF(0x0C09EE7Cu); W32(r0 + r9, r3); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C09EE1Cu, 4); goto L_0C09EE1C; }  /* 0C09EE7A bra */
L_0C09F2B0: BLKS(0x0C09F2B0u);
	{ IF(0x0C09F2B2u); ; /* slot nop */ UPD(0x0C09EE70u, 3); goto L_0C09EE70; }  /* 0C09F2B0 bra */
L_0C09F2C0: BLKS(0x0C09F2C0u);
	r9 = 0xB4u; UPD(0x0C09F2C2u, 1);  /* 0C09F2C0 mov.w @(disp,pc),Rn */
	IF(0x0C09F2C2u); MACL = r10 * r9;  /* 0C09F2C2 mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C09F2C6u, 3);  /* 0C09F2C4 mov.l @(disp,pc),Rn */
	IF(0x0C09F2C6u); r0 = MACL;  /* 0C09F2C6 sts macl,Rn */
	r0 += r3;  /* 0C09F2C8 add Rm,Rn */
	r8 = R32(r0 + 0x1Cu); UPD(0x0C09F2CCu, 3);  /* 0C09F2CA mov.l @(disp,Rm),Rn */
	{ u32 v_ = R32(r8); r8 += 4; r5 = v_; } UPD(0x0C09F2CEu, 1);  /* 0C09F2CC mov.l @Rm+,Rn */
	T = (r5 & r5) == 0;  /* 0C09F2CE tst Rm,Rn */
	{ u32 c_ = T; r9 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C09F2B0u, 4); goto L_0C09F2B0; } goto L_0C09F2D4; }  /* 0C09F2D0 bt/s */
L_0C09F2D4: BLKS(0x0C09F2D4u);
	r11 = 0xA9u; UPD(0x0C09F2D6u, 2);  /* 0C09F2D4 mov.w @(disp,pc),Rn */
	r11 += r0;  /* 0C09F2D6 add Rm,Rn */
	UPD(0x0C09F2D8u, 1);
L_0C09F2D8: BLKS(0x0C09F2D8u);
	r8 += 0x4u;  /* 0C09F2D8 add #imm,Rn */
	{ u32 v_ = R32(r8); r8 += 4; r7 = v_; } UPD(0x0C09F2DCu, 2);  /* 0C09F2DA mov.l @Rm+,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C09F2DC add #imm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C09F2E0u, 2);  /* 0C09F2DE mov.l @(disp,Rm),Rn */
	r0 = 0xB0u; UPD(0x0C09F2E2u, 1);  /* 0C09F2E0 mov.w @(disp,pc),Rn */
	r6 += r7;  /* 0C09F2E2 add Rm,Rn */
	IF(0x0C09F2E4u); r3 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C09F2E6u, 2);  /* 0C09F2E4 mov.b @(r0,Rm),Rn */
	{ u32 v_ = R32(r8); r8 += 4; r2 = v_; } UPD(0x0C09F2E8u, 1);  /* 0C09F2E6 mov.l @Rm+,Rn */
	r5 = r3 & 0xFF;  /* 0C09F2E8 extu.b Rm,Rn */
	r7 = R32(r9 + 0x28u); UPD(0x0C09F2ECu, 2);  /* 0C09F2EA mov.l @(disp,Rm),Rn */
	W32(r15, r5); UPD(0x0C09F2EEu, 1);  /* 0C09F2EC mov.l Rm,@Rn */
	r7 += r2;  /* 0C09F2EE add Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r11); UPD(0x0C09F2F2u, 2);  /* 0C09F2F0 mov.b @Rm,Rn */
	r5 = 0x4u;  /* 0C09F2F2 mov #imm,Rn */
	r0 = r4 & 0xFF;  /* 0C09F2F4 extu.b Rm,Rn */
	r12 = 0xC0BD6F0u; UPD(0x0C09F2F8u, 3);  /* 0C09F2F6 mov.l @(disp,pc),Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C09F2FAu, 1);  /* 0C09F2F8 mov.l Rm,@(disp,Rn) */
	IF(0x0C09F2FAu); { u32 t_ = r12; PR = 0x0C09F2FEu; r4 = R32(r9); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C09F2FEu); }  /* 0C09F2FA jsr @Rn */
L_0C09F2FE: BLKS(0x0C09F2FEu);
	{ u32 v_ = R32(r8); r8 += 4; r2 = v_; } UPD(0x0C09F300u, 1);  /* 0C09F2FE mov.l @Rm+,Rn */
	T = (r2 & r2) == 0;  /* 0C09F300 tst Rm,Rn */
	{ u32 c_ = !T; r15 += 0x8u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C09F2D8u, 4); goto L_0C09F2D8; } goto L_0C09F306; }  /* 0C09F302 bf/s */
L_0C09F306: BLKS(0x0C09F306u);
	{ IF(0x0C09F308u); ; /* slot nop */ UPD(0x0C09EE70u, 4); goto L_0C09EE70; }  /* 0C09F306 bra */
}

void blk_f_0C09F310(sh3_t *c)
{
	LOCALS;
	goto L_0C09F310;
L_0C09EE1C: BLKS(0x0C09EE1Cu);
	r4 = 0xB4u; UPD(0x0C09EE1Eu, 1);  /* 0C09EE1C mov.w @(disp,pc),Rn */
	IF(0x0C09EE1Eu); MACL = r10 * r4;  /* 0C09EE1E mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C09EE22u, 3);  /* 0C09EE20 mov.l @(disp,pc),Rn */
	IF(0x0C09EE22u); r4 = MACL;  /* 0C09EE22 sts macl,Rn */
	r4 += r3;  /* 0C09EE24 add Rm,Rn */
	r10 = R32(r4); UPD(0x0C09EE28u, 3);  /* 0C09EE26 mov.l @Rm,Rn */
	T = (r10 & r10) == 0;  /* 0C09EE28 tst Rm,Rn */
	if (!T) { UPD(0x0C09EE3Eu, 4); goto L_0C09EE3E; }  /* 0C09EE2A bf */
L_0C09EE2C: BLKS(0x0C09EE2Cu);
	r4 += 0x40u;  /* 0C09EE2C add #imm,Rn */
	r4 = R32(r4); UPD(0x0C09EE30u, 2);  /* 0C09EE2E mov.l @Rm,Rn */
	r5 = 0x1869Fu; UPD(0x0C09EE32u, 1);  /* 0C09EE30 mov.l @(disp,pc),Rn */
	T = r4 > r5;  /* 0C09EE32 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C09EE3Eu, 4); goto L_0C09EE3E; }  /* 0C09EE34 bt */
L_0C09EE36: BLKS(0x0C09EE36u);
	r8 = 0xC175064u; UPD(0x0C09EE38u, 1);  /* 0C09EE36 mov.l @(disp,pc),Rn */
	r0 = R32(r8); UPD(0x0C09EE3Au, 1);  /* 0C09EE38 mov.l @Rm,Rn */
	T = r0 == 0x3u;  /* 0C09EE3A cmp/eq #imm,r0 */
	if (T) { UPD(0x0C09EE50u, 4); goto L_0C09EE50; }  /* 0C09EE3C bt */
L_0C09EE3E: BLKS(0x0C09EE3Eu);
	r15 = r14;  /* 0C09EE3E mov Rm,Rn */
	IF(0x0C09EE40u); PR = R32(r15); r15 += 4; UPD(0x0C09EE42u, 2);  /* 0C09EE40 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09EE44u, 1);  /* 0C09EE42 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09EE46u, 1);  /* 0C09EE44 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09EE48u, 1);  /* 0C09EE46 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09EE4Au, 1);  /* 0C09EE48 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09EE4Cu, 1);  /* 0C09EE4A mov.l @Rm+,Rn */
	IF(0x0C09EE4Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C09EE4C rts */
L_0C09EE50: BLKS(0x0C09EE50u);
	r6 = 0x4u;  /* 0C09EE50 mov #imm,Rn */
	IF(0x0C09EE52u); ARG0(0x446Du); { s32 s_ = (s32)r6; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = 0; else r4 >>= ((~s_ & 31) + 1); }  /* 0C09EE52 shld Rm,Rn */
	r7 = 0x40000u; UPD(0x0C09EE56u, 3);  /* 0C09EE54 mov.l @(disp,pc),Rn */
	r2 = 0xC071C90u; UPD(0x0C09EE58u, 1);  /* 0C09EE56 mov.l @(disp,pc),Rn */
	r4 += r7;  /* 0C09EE58 add Rm,Rn */
	r15 = r14;  /* 0C09EE5A mov Rm,Rn */
	IF(0x0C09EE5Cu); PR = R32(r15); r15 += 4; UPD(0x0C09EE5Eu, 3);  /* 0C09EE5C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09EE60u, 1);  /* 0C09EE5E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09EE62u, 1);  /* 0C09EE60 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09EE64u, 1);  /* 0C09EE62 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09EE66u, 1);  /* 0C09EE64 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09EE68u, 1);  /* 0C09EE66 mov.l @Rm+,Rn */
	IF(0x0C09EE68u); { u32 tv_ = r2; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C071C90u: TAIL(blk_f_0C071C90); default: JUMPD(tv_); } }  /* 0C09EE68 jmp @Rn */
L_0C09EF00: BLKS(0x0C09EF00u);
	r6 = R32(r8 + 0x24u); UPD(0x0C09EF02u, 1);  /* 0C09EF00 mov.l @(disp,Rm),Rn */
	r7 = R32(r8 + 0x28u); UPD(0x0C09EF04u, 1);  /* 0C09EF02 mov.l @(disp,Rm),Rn */
	r0 = 0xC0BD6F0u; UPD(0x0C09EF06u, 1);  /* 0C09EF04 mov.l @(disp,pc),Rn */
	IF(0x0C09EF06u); { u32 t_ = r0; PR = 0x0C09EF0Au; r9 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C09EF0Au); }  /* 0C09EF06 jsr @Rn */
L_0C09EF0A: BLKS(0x0C09EF0Au);
	W32(r8, r9); UPD(0x0C09EF0Cu, 1);  /* 0C09EF0A mov.l Rm,@Rn */
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C09EE1Cu, 3); goto L_0C09EE1C; }  /* 0C09EF0C bra */
L_0C09F310: BLKS(0x0C09F310u);
	r8 = 0xB4u; UPD(0x0C09F312u, 1);  /* 0C09F310 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C09F312 add #imm,Rn */
	IF(0x0C09F314u); MACL = r10 * r8;  /* 0C09F314 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C09F318u, 4);  /* 0C09F316 mov.l @(disp,pc),Rn */
	r5 = 0x2u;  /* 0C09F318 mov #imm,Rn */
	IF(0x0C09F31Au); r8 = MACL;  /* 0C09F31A sts macl,Rn */
	r8 += r0;  /* 0C09F31C add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C09F320u, 4);  /* 0C09F31E mov.w @(disp,pc),Rn */
	IF(0x0C09F320u); r12 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C09F322u, 1);  /* 0C09F320 mov.b @(r0,Rm),Rn */
	r9 = r12 & 0xFF;  /* 0C09F322 extu.b Rm,Rn */
	W32(r15, r9); UPD(0x0C09F326u, 2);  /* 0C09F324 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C09F326 add #imm,Rn */
	IF(0x0C09F328u); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C09F32Au, 2);  /* 0C09F328 mov.b @(r0,Rm),Rn */
	r11 = r6 & 0xFF;  /* 0C09F32A extu.b Rm,Rn */
	W32(r15 + 0x4u, r11); UPD(0x0C09F32Eu, 2);  /* 0C09F32C mov.l Rm,@(disp,Rn) */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C09EF00u, 3); goto L_0C09EF00; }  /* 0C09F32E bra */
}

void blk_f_0C09F370(sh3_t *c)
{
	LOCALS;
	goto L_0C09F370;
L_0C09EE1C: BLKS(0x0C09EE1Cu);
	r4 = 0xB4u; UPD(0x0C09EE1Eu, 1);  /* 0C09EE1C mov.w @(disp,pc),Rn */
	IF(0x0C09EE1Eu); MACL = r10 * r4;  /* 0C09EE1E mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C09EE22u, 3);  /* 0C09EE20 mov.l @(disp,pc),Rn */
	IF(0x0C09EE22u); r4 = MACL;  /* 0C09EE22 sts macl,Rn */
	r4 += r3;  /* 0C09EE24 add Rm,Rn */
	r10 = R32(r4); UPD(0x0C09EE28u, 3);  /* 0C09EE26 mov.l @Rm,Rn */
	T = (r10 & r10) == 0;  /* 0C09EE28 tst Rm,Rn */
	if (!T) { UPD(0x0C09EE3Eu, 4); goto L_0C09EE3E; }  /* 0C09EE2A bf */
L_0C09EE2C: BLKS(0x0C09EE2Cu);
	r4 += 0x40u;  /* 0C09EE2C add #imm,Rn */
	r4 = R32(r4); UPD(0x0C09EE30u, 2);  /* 0C09EE2E mov.l @Rm,Rn */
	r5 = 0x1869Fu; UPD(0x0C09EE32u, 1);  /* 0C09EE30 mov.l @(disp,pc),Rn */
	T = r4 > r5;  /* 0C09EE32 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C09EE3Eu, 4); goto L_0C09EE3E; }  /* 0C09EE34 bt */
L_0C09EE36: BLKS(0x0C09EE36u);
	r8 = 0xC175064u; UPD(0x0C09EE38u, 1);  /* 0C09EE36 mov.l @(disp,pc),Rn */
	r0 = R32(r8); UPD(0x0C09EE3Au, 1);  /* 0C09EE38 mov.l @Rm,Rn */
	T = r0 == 0x3u;  /* 0C09EE3A cmp/eq #imm,r0 */
	if (T) { UPD(0x0C09EE50u, 4); goto L_0C09EE50; }  /* 0C09EE3C bt */
L_0C09EE3E: BLKS(0x0C09EE3Eu);
	r15 = r14;  /* 0C09EE3E mov Rm,Rn */
	IF(0x0C09EE40u); PR = R32(r15); r15 += 4; UPD(0x0C09EE42u, 2);  /* 0C09EE40 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09EE44u, 1);  /* 0C09EE42 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09EE46u, 1);  /* 0C09EE44 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09EE48u, 1);  /* 0C09EE46 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09EE4Au, 1);  /* 0C09EE48 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09EE4Cu, 1);  /* 0C09EE4A mov.l @Rm+,Rn */
	IF(0x0C09EE4Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C09EE4C rts */
L_0C09EE50: BLKS(0x0C09EE50u);
	r6 = 0x4u;  /* 0C09EE50 mov #imm,Rn */
	IF(0x0C09EE52u); ARG0(0x446Du); { s32 s_ = (s32)r6; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = 0; else r4 >>= ((~s_ & 31) + 1); }  /* 0C09EE52 shld Rm,Rn */
	r7 = 0x40000u; UPD(0x0C09EE56u, 3);  /* 0C09EE54 mov.l @(disp,pc),Rn */
	r2 = 0xC071C90u; UPD(0x0C09EE58u, 1);  /* 0C09EE56 mov.l @(disp,pc),Rn */
	r4 += r7;  /* 0C09EE58 add Rm,Rn */
	r15 = r14;  /* 0C09EE5A mov Rm,Rn */
	IF(0x0C09EE5Cu); PR = R32(r15); r15 += 4; UPD(0x0C09EE5Eu, 3);  /* 0C09EE5C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09EE60u, 1);  /* 0C09EE5E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09EE62u, 1);  /* 0C09EE60 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09EE64u, 1);  /* 0C09EE62 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09EE66u, 1);  /* 0C09EE64 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09EE68u, 1);  /* 0C09EE66 mov.l @Rm+,Rn */
	IF(0x0C09EE68u); { u32 tv_ = r2; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C071C90u: TAIL(blk_f_0C071C90); default: JUMPD(tv_); } }  /* 0C09EE68 jmp @Rn */
L_0C09EE70: BLKS(0x0C09EE70u);
	r4 = 0xB4u; UPD(0x0C09EE72u, 1);  /* 0C09EE70 mov.w @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C09EE72 mov #imm,Rn */
	IF(0x0C09EE74u); MACL = r10 * r4;  /* 0C09EE74 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C09EE78u, 4);  /* 0C09EE76 mov.l @(disp,pc),Rn */
	IF(0x0C09EE78u); r0 = MACL;  /* 0C09EE78 sts macl,Rn */
	{ IF(0x0C09EE7Cu); W32(r0 + r9, r3); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C09EE1Cu, 4); goto L_0C09EE1C; }  /* 0C09EE7A bra */
L_0C09F306: BLKS(0x0C09F306u);
	{ IF(0x0C09F308u); ; /* slot nop */ UPD(0x0C09EE70u, 3); goto L_0C09EE70; }  /* 0C09F306 bra */
L_0C09F370: BLKS(0x0C09F370u);
	r11 = 0xC0A8CA0u; UPD(0x0C09F372u, 1);  /* 0C09F370 mov.l @(disp,pc),Rn */
	IF(0x0C09F372u); { u32 t_ = r11; PR = 0x0C09F376u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C09F376u); }  /* 0C09F372 jsr @Rn */
L_0C09F376: BLKS(0x0C09F376u);
	IF(0x0C09F376u); T = (s32)r0 >= 0;  /* 0C09F376 cmp/pz Rn */
	if (!T) { UPD(0x0C09F306u, 4); goto L_0C09F306; }  /* 0C09F378 bf */
L_0C09F37A: BLKS(0x0C09F37Au);
	r15 += 0xFFFFFFF8u;  /* 0C09F37A add #imm,Rn */
	r12 = 0xB4u; UPD(0x0C09F37Eu, 2);  /* 0C09F37C mov.w @(disp,pc),Rn */
	IF(0x0C09F37Eu); MACL = r0 * r12;  /* 0C09F37E mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C09F382u, 3);  /* 0C09F380 mov.l @(disp,pc),Rn */
	IF(0x0C09F382u); r0 = MACL;  /* 0C09F382 sts macl,Rn */
	r11 = 0xA5u; UPD(0x0C09F386u, 2);  /* 0C09F384 mov.w @(disp,pc),Rn */
	r0 += r6;  /* 0C09F386 add Rm,Rn */
	r0 += r11;  /* 0C09F388 add Rm,Rn */
	r8 = (u32)(s32)(s8)R8(r0); UPD(0x0C09F38Cu, 3);  /* 0C09F38A mov.b @Rm,Rn */
	IF(0x0C09F38Cu); MACL = r10 * r12;  /* 0C09F38C mul.l Rm,Rn */
	r8 += 0x1u;  /* 0C09F38E add #imm,Rn */
	W8(r0, r8); UPD(0x0C09F392u, 4);  /* 0C09F390 mov.b Rm,@Rn */
	IF(0x0C09F392u); r3 = MACL;  /* 0C09F392 sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C09F396u, 2);  /* 0C09F394 mov.w @(disp,pc),Rn */
	r3 += r6;  /* 0C09F396 add Rm,Rn */
	IF(0x0C09F398u); r7 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C09F39Au, 2);  /* 0C09F398 mov.b @(r0,Rm),Rn */
	r2 = r7 & 0xFF;  /* 0C09F39A extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C09F39Eu, 2);  /* 0C09F39C mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C09F39E add #imm,Rn */
	IF(0x0C09F3A0u); r5 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C09F3A2u, 2);  /* 0C09F3A0 mov.b @(r0,Rm),Rn */
	r9 = 0xC0BFE70u; UPD(0x0C09F3A4u, 1);  /* 0C09F3A2 mov.l @(disp,pc),Rn */
	r4 = r5 & 0xFF;  /* 0C09F3A4 extu.b Rm,Rn */
	W32(r15 + 0x4u, r4); UPD(0x0C09F3A8u, 2);  /* 0C09F3A6 mov.l Rm,@(disp,Rn) */
	r5 = 0x5u;  /* 0C09F3A8 mov #imm,Rn */
	r4 = R32(r3); UPD(0x0C09F3ACu, 2);  /* 0C09F3AA mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C09F3AEu, 1);  /* 0C09F3AC mov.l @(disp,Rm),Rn */
	IF(0x0C09F3AEu); { u32 t_ = r9; PR = 0x0C09F3B2u; r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BFE70, 0x0C0BFE70u, 0x0C09F3B2u); }  /* 0C09F3AE jsr @Rn */
L_0C09F3B2: BLKS(0x0C09F3B2u);
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C09EE70u, 3); goto L_0C09EE70; }  /* 0C09F3B2 bra */
}

void blk_f_0C09F3C0(sh3_t *c)
{
	LOCALS;
	goto L_0C09F3C0;
L_0C09EE1C: BLKS(0x0C09EE1Cu);
	r4 = 0xB4u; UPD(0x0C09EE1Eu, 1);  /* 0C09EE1C mov.w @(disp,pc),Rn */
	IF(0x0C09EE1Eu); MACL = r10 * r4;  /* 0C09EE1E mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C09EE22u, 3);  /* 0C09EE20 mov.l @(disp,pc),Rn */
	IF(0x0C09EE22u); r4 = MACL;  /* 0C09EE22 sts macl,Rn */
	r4 += r3;  /* 0C09EE24 add Rm,Rn */
	r10 = R32(r4); UPD(0x0C09EE28u, 3);  /* 0C09EE26 mov.l @Rm,Rn */
	T = (r10 & r10) == 0;  /* 0C09EE28 tst Rm,Rn */
	if (!T) { UPD(0x0C09EE3Eu, 4); goto L_0C09EE3E; }  /* 0C09EE2A bf */
L_0C09EE2C: BLKS(0x0C09EE2Cu);
	r4 += 0x40u;  /* 0C09EE2C add #imm,Rn */
	r4 = R32(r4); UPD(0x0C09EE30u, 2);  /* 0C09EE2E mov.l @Rm,Rn */
	r5 = 0x1869Fu; UPD(0x0C09EE32u, 1);  /* 0C09EE30 mov.l @(disp,pc),Rn */
	T = r4 > r5;  /* 0C09EE32 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C09EE3Eu, 4); goto L_0C09EE3E; }  /* 0C09EE34 bt */
L_0C09EE36: BLKS(0x0C09EE36u);
	r8 = 0xC175064u; UPD(0x0C09EE38u, 1);  /* 0C09EE36 mov.l @(disp,pc),Rn */
	r0 = R32(r8); UPD(0x0C09EE3Au, 1);  /* 0C09EE38 mov.l @Rm,Rn */
	T = r0 == 0x3u;  /* 0C09EE3A cmp/eq #imm,r0 */
	if (T) { UPD(0x0C09EE50u, 4); goto L_0C09EE50; }  /* 0C09EE3C bt */
L_0C09EE3E: BLKS(0x0C09EE3Eu);
	r15 = r14;  /* 0C09EE3E mov Rm,Rn */
	IF(0x0C09EE40u); PR = R32(r15); r15 += 4; UPD(0x0C09EE42u, 2);  /* 0C09EE40 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09EE44u, 1);  /* 0C09EE42 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09EE46u, 1);  /* 0C09EE44 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09EE48u, 1);  /* 0C09EE46 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09EE4Au, 1);  /* 0C09EE48 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09EE4Cu, 1);  /* 0C09EE4A mov.l @Rm+,Rn */
	IF(0x0C09EE4Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C09EE4C rts */
L_0C09EE50: BLKS(0x0C09EE50u);
	r6 = 0x4u;  /* 0C09EE50 mov #imm,Rn */
	IF(0x0C09EE52u); ARG0(0x446Du); { s32 s_ = (s32)r6; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = 0; else r4 >>= ((~s_ & 31) + 1); }  /* 0C09EE52 shld Rm,Rn */
	r7 = 0x40000u; UPD(0x0C09EE56u, 3);  /* 0C09EE54 mov.l @(disp,pc),Rn */
	r2 = 0xC071C90u; UPD(0x0C09EE58u, 1);  /* 0C09EE56 mov.l @(disp,pc),Rn */
	r4 += r7;  /* 0C09EE58 add Rm,Rn */
	r15 = r14;  /* 0C09EE5A mov Rm,Rn */
	IF(0x0C09EE5Cu); PR = R32(r15); r15 += 4; UPD(0x0C09EE5Eu, 3);  /* 0C09EE5C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C09EE60u, 1);  /* 0C09EE5E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C09EE62u, 1);  /* 0C09EE60 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C09EE64u, 1);  /* 0C09EE62 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C09EE66u, 1);  /* 0C09EE64 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C09EE68u, 1);  /* 0C09EE66 mov.l @Rm+,Rn */
	IF(0x0C09EE68u); { u32 tv_ = r2; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C071C90u: TAIL(blk_f_0C071C90); default: JUMPD(tv_); } }  /* 0C09EE68 jmp @Rn */
L_0C09EF06: BLKS(0x0C09EF06u);
	IF(0x0C09EF06u); { u32 t_ = r0; PR = 0x0C09EF0Au; r9 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C09EF0Au); }  /* 0C09EF06 jsr @Rn */
L_0C09EF0A: BLKS(0x0C09EF0Au);
	W32(r8, r9); UPD(0x0C09EF0Cu, 1);  /* 0C09EF0A mov.l Rm,@Rn */
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C09EE1Cu, 3); goto L_0C09EE1C; }  /* 0C09EF0C bra */
L_0C09F3C0: BLKS(0x0C09F3C0u);
	r0 = 0xB4u; UPD(0x0C09F3C2u, 1);  /* 0C09F3C0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C09F3C2 add #imm,Rn */
	IF(0x0C09F3C4u); MACL = r10 * r0;  /* 0C09F3C4 mul.l Rm,Rn */
	r12 = 0xC286578u; UPD(0x0C09F3C8u, 4);  /* 0C09F3C6 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C09F3CAu, 1);  /* 0C09F3C8 mov.w @(disp,pc),Rn */
	IF(0x0C09F3CAu); r8 = MACL;  /* 0C09F3CA sts macl,Rn */
	r8 += r12;  /* 0C09F3CC add Rm,Rn */
	IF(0x0C09F3CEu); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C09F3D0u, 3);  /* 0C09F3CE mov.b @(r0,Rm),Rn */
	r7 = r6 & 0xFF;  /* 0C09F3D0 extu.b Rm,Rn */
	W32(r15, r7); UPD(0x0C09F3D4u, 2);  /* 0C09F3D2 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C09F3D4 add #imm,Rn */
	IF(0x0C09F3D6u); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C09F3D8u, 2);  /* 0C09F3D6 mov.b @(r0,Rm),Rn */
	r5 = r2 & 0xFF;  /* 0C09F3D8 extu.b Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C09F3DCu, 2);  /* 0C09F3DA mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BFE70u; UPD(0x0C09F3DEu, 1);  /* 0C09F3DC mov.l @(disp,pc),Rn */
	r5 = 0x2u;  /* 0C09F3DE mov #imm,Rn */
	r4 = R32(r8); UPD(0x0C09F3E2u, 2);  /* 0C09F3E0 mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C09F3E4u, 1);  /* 0C09F3E2 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C09EF06u, 3); goto L_0C09EF06; }  /* 0C09F3E4 bra */
}


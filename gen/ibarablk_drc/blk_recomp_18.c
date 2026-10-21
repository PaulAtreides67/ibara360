#include "recomp.h"
#include "blk_recomp_funcs.h"

void blk_f_0C0ADA90(sh3_t *c)
{
	LOCALS;
L_0C0ADA90: BLKS(0x0C0ADA90u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0ADA92u, 1);  /* 0C0ADA90 mov.l Rm,@-Rn */
	r5 = 0x4Cu;  /* 0C0ADA92 mov #imm,Rn */
	IF(0x0C0ADA94u); r15 -= 4; W32(r15, PR); UPD(0x0C0ADA96u, 2);  /* 0C0ADA94 sts.l pr,@-Rn */
	r2 = 0xC2B1811u; UPD(0x0C0ADA98u, 1);  /* 0C0ADA96 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0ADA98 mov Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C0ADA9Cu, 2);  /* 0C0ADA9A mov.b @Rm,Rn */
	IF(0x0C0ADA9Cu); MACL = r0 * r5;  /* 0C0ADA9C mul.l Rm,Rn */
	r4 = 0xC286318u; UPD(0x0C0ADAA0u, 3);  /* 0C0ADA9E mov.l @(disp,pc),Rn */
	IF(0x0C0ADAA0u); r7 = MACL;  /* 0C0ADAA0 sts macl,Rn */
	r4 += r7;  /* 0C0ADAA2 add Rm,Rn */
	r3 = R32(r4 + 0x38u); UPD(0x0C0ADAA6u, 3);  /* 0C0ADAA4 mov.l @(disp,Rm),Rn */
	r4 = 0xC3C43CCu; UPD(0x0C0ADAA8u, 1);  /* 0C0ADAA6 mov.l @(disp,pc),Rn */
	r5 = R32(r4); UPD(0x0C0ADAAAu, 1);  /* 0C0ADAA8 mov.l @Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r0 = v_; } UPD(0x0C0ADAACu, 1);  /* 0C0ADAAA mov.w @Rm+,Rn */
	IF(0x0C0ADAACu); r0 <<= 2;  /* 0C0ADAAC shll2 Rn */
	IF(0x0C0ADAAEu); r6 = R32(r0 + r3); UPD(0x0C0ADAB0u, 2);  /* 0C0ADAAE mov.l @(r0,Rm),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r1 = v_; } UPD(0x0C0ADAB2u, 1);  /* 0C0ADAB0 mov.w @Rm+,Rn */
	r0 = 0xC2B03A2u; UPD(0x0C0ADAB4u, 1);  /* 0C0ADAB2 mov.l @(disp,pc),Rn */
	W16(r0, r1); UPD(0x0C0ADAB6u, 1);  /* 0C0ADAB4 mov.w Rm,@Rn */
	r2 = 0xC297460u; UPD(0x0C0ADAB8u, 1);  /* 0C0ADAB6 mov.l @(disp,pc),Rn */
	r0 = 0xC08FE50u; UPD(0x0C0ADABAu, 1);  /* 0C0ADAB8 mov.l @(disp,pc),Rn */
	W32(r2, r6); UPD(0x0C0ADABCu, 1);  /* 0C0ADABA mov.l Rm,@Rn */
	IF(0x0C0ADABCu); { u32 t_ = r0; PR = 0x0C0ADAC0u; W32(r4, r5); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C08FE50, 0x0C08FE50u, 0x0C0ADAC0u); }  /* 0C0ADABC jsr @Rn */
L_0C0ADAC0: BLKS(0x0C0ADAC0u);
	r15 = r14;  /* 0C0ADAC0 mov Rm,Rn */
	IF(0x0C0ADAC2u); PR = R32(r15); r15 += 4; UPD(0x0C0ADAC4u, 2);  /* 0C0ADAC2 lds.l @Rn+,pr */
	IF(0x0C0ADAC4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0ADAC4 rts */
}

void blk_f_0C0ADCA0(sh3_t *c)
{
	LOCALS;
L_0C0ADCA0: BLKS(0x0C0ADCA0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0ADCA2u, 1);  /* 0C0ADCA0 mov.l Rm,@-Rn */
	r2 = 0x4Cu;  /* 0C0ADCA2 mov #imm,Rn */
	IF(0x0C0ADCA4u); r15 -= 4; W32(r15, PR); UPD(0x0C0ADCA6u, 2);  /* 0C0ADCA4 sts.l pr,@-Rn */
	r4 = 0xC2B1811u; UPD(0x0C0ADCA8u, 1);  /* 0C0ADCA6 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0ADCA8 mov Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r4); UPD(0x0C0ADCACu, 2);  /* 0C0ADCAA mov.b @Rm,Rn */
	r4 = 0xC3C43CCu; UPD(0x0C0ADCAEu, 1);  /* 0C0ADCAC mov.l @(disp,pc),Rn */
	IF(0x0C0ADCAEu); MACL = r6 * r2;  /* 0C0ADCAE mul.l Rm,Rn */
	r5 = R32(r4); UPD(0x0C0ADCB2u, 3);  /* 0C0ADCB0 mov.l @Rm,Rn */
	r7 = 0xC2B0378u; UPD(0x0C0ADCB4u, 1);  /* 0C0ADCB2 mov.l @(disp,pc),Rn */
	IF(0x0C0ADCB4u); r3 = MACL;  /* 0C0ADCB4 sts macl,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r1 = v_; } UPD(0x0C0ADCB8u, 2);  /* 0C0ADCB6 mov.w @Rm+,Rn */
	r0 = 0xC286318u; UPD(0x0C0ADCBAu, 1);  /* 0C0ADCB8 mov.l @(disp,pc),Rn */
	W16(r7, r1); UPD(0x0C0ADCBCu, 1);  /* 0C0ADCBA mov.w Rm,@Rn */
	r0 += r3;  /* 0C0ADCBC add Rm,Rn */
	r7 = R32(r0 + 0x38u); UPD(0x0C0ADCC0u, 2);  /* 0C0ADCBE mov.l @(disp,Rm),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r0 = v_; } UPD(0x0C0ADCC2u, 1);  /* 0C0ADCC0 mov.w @Rm+,Rn */
	IF(0x0C0ADCC2u); r0 <<= 2;  /* 0C0ADCC2 shll2 Rn */
	IF(0x0C0ADCC4u); r6 = R32(r0 + r7); UPD(0x0C0ADCC6u, 2);  /* 0C0ADCC4 mov.l @(r0,Rm),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r1 = v_; } UPD(0x0C0ADCC8u, 1);  /* 0C0ADCC6 mov.w @Rm+,Rn */
	r0 = 0xC2B03A2u; UPD(0x0C0ADCCAu, 1);  /* 0C0ADCC8 mov.l @(disp,pc),Rn */
	W16(r0, r1); UPD(0x0C0ADCCCu, 1);  /* 0C0ADCCA mov.w Rm,@Rn */
	r2 = 0xC297460u; UPD(0x0C0ADCCEu, 1);  /* 0C0ADCCC mov.l @(disp,pc),Rn */
	r0 = 0xC092FD0u; UPD(0x0C0ADCD0u, 1);  /* 0C0ADCCE mov.l @(disp,pc),Rn */
	W32(r2, r6); UPD(0x0C0ADCD2u, 1);  /* 0C0ADCD0 mov.l Rm,@Rn */
	IF(0x0C0ADCD2u); { u32 t_ = r0; PR = 0x0C0ADCD6u; W32(r4, r5); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C092FD0, 0x0C092FD0u, 0x0C0ADCD6u); }  /* 0C0ADCD2 jsr @Rn */
L_0C0ADCD6: BLKS(0x0C0ADCD6u);
	r15 = r14;  /* 0C0ADCD6 mov Rm,Rn */
	IF(0x0C0ADCD8u); PR = R32(r15); r15 += 4; UPD(0x0C0ADCDAu, 2);  /* 0C0ADCD8 lds.l @Rn+,pr */
	IF(0x0C0ADCDAu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0ADCDA rts */
}

void blk_f_0C0ADF40(sh3_t *c)
{
	LOCALS;
L_0C0ADF40: BLKS(0x0C0ADF40u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0ADF42u, 1);  /* 0C0ADF40 mov.l Rm,@-Rn */
	r2 = 0x4Cu;  /* 0C0ADF42 mov #imm,Rn */
	IF(0x0C0ADF44u); r15 -= 4; W32(r15, PR); UPD(0x0C0ADF46u, 2);  /* 0C0ADF44 sts.l pr,@-Rn */
	r4 = 0xC2B1811u; UPD(0x0C0ADF48u, 1);  /* 0C0ADF46 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0ADF48 mov Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r4); UPD(0x0C0ADF4Cu, 2);  /* 0C0ADF4A mov.b @Rm,Rn */
	r4 = 0xC3C43CCu; UPD(0x0C0ADF4Eu, 1);  /* 0C0ADF4C mov.l @(disp,pc),Rn */
	IF(0x0C0ADF4Eu); MACL = r6 * r2;  /* 0C0ADF4E mul.l Rm,Rn */
	r5 = R32(r4); UPD(0x0C0ADF52u, 3);  /* 0C0ADF50 mov.l @Rm,Rn */
	r7 = 0xC2B0378u; UPD(0x0C0ADF54u, 1);  /* 0C0ADF52 mov.l @(disp,pc),Rn */
	IF(0x0C0ADF54u); r3 = MACL;  /* 0C0ADF54 sts macl,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r1 = v_; } UPD(0x0C0ADF58u, 2);  /* 0C0ADF56 mov.w @Rm+,Rn */
	r0 = 0xC286318u; UPD(0x0C0ADF5Au, 1);  /* 0C0ADF58 mov.l @(disp,pc),Rn */
	W16(r7, r1); UPD(0x0C0ADF5Cu, 1);  /* 0C0ADF5A mov.w Rm,@Rn */
	r0 += r3;  /* 0C0ADF5C add Rm,Rn */
	r7 = R32(r0 + 0x38u); UPD(0x0C0ADF60u, 2);  /* 0C0ADF5E mov.l @(disp,Rm),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r0 = v_; } UPD(0x0C0ADF62u, 1);  /* 0C0ADF60 mov.w @Rm+,Rn */
	IF(0x0C0ADF62u); r0 <<= 2;  /* 0C0ADF62 shll2 Rn */
	IF(0x0C0ADF64u); r6 = R32(r0 + r7); UPD(0x0C0ADF66u, 2);  /* 0C0ADF64 mov.l @(r0,Rm),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r1 = v_; } UPD(0x0C0ADF68u, 1);  /* 0C0ADF66 mov.w @Rm+,Rn */
	r0 = 0xC2B03A2u; UPD(0x0C0ADF6Au, 1);  /* 0C0ADF68 mov.l @(disp,pc),Rn */
	W16(r0, r1); UPD(0x0C0ADF6Cu, 1);  /* 0C0ADF6A mov.w Rm,@Rn */
	r2 = 0xC297460u; UPD(0x0C0ADF6Eu, 1);  /* 0C0ADF6C mov.l @(disp,pc),Rn */
	r0 = 0xC094500u; UPD(0x0C0ADF70u, 1);  /* 0C0ADF6E mov.l @(disp,pc),Rn */
	W32(r2, r6); UPD(0x0C0ADF72u, 1);  /* 0C0ADF70 mov.l Rm,@Rn */
	IF(0x0C0ADF72u); { u32 t_ = r0; PR = 0x0C0ADF76u; W32(r4, r5); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C094500, 0x0C094500u, 0x0C0ADF76u); }  /* 0C0ADF72 jsr @Rn */
L_0C0ADF76: BLKS(0x0C0ADF76u);
	r15 = r14;  /* 0C0ADF76 mov Rm,Rn */
	IF(0x0C0ADF78u); PR = R32(r15); r15 += 4; UPD(0x0C0ADF7Au, 2);  /* 0C0ADF78 lds.l @Rn+,pr */
	IF(0x0C0ADF7Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0ADF7A rts */
}

void blk_f_0C0AE780(sh3_t *c)
{
	LOCALS;
L_0C0AE780: BLKS(0x0C0AE780u);
	r3 = 0xB4u; UPD(0x0C0AE782u, 1);  /* 0C0AE780 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C0AE782 exts.w Rm,Rn */
	IF(0x0C0AE784u); MACL = r4 * r3;  /* 0C0AE784 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AE788u, 4);  /* 0C0AE786 mov.l Rm,@-Rn */
	r6 = 0xC286578u; UPD(0x0C0AE78Au, 1);  /* 0C0AE788 mov.l @(disp,pc),Rn */
	IF(0x0C0AE78Au); r3 = MACL;  /* 0C0AE78A sts macl,Rn */
	IF(0x0C0AE78Cu); r15 -= 4; W32(r15, PR); UPD(0x0C0AE78Eu, 2);  /* 0C0AE78C sts.l pr,@-Rn */
	r3 += r6;  /* 0C0AE78E add Rm,Rn */
	r0 = R32(r3 + 0x2Cu); UPD(0x0C0AE792u, 2);  /* 0C0AE790 mov.l @(disp,Rm),Rn */
	W32(r3 + 0x24u, r0); UPD(0x0C0AE794u, 1);  /* 0C0AE792 mov.l Rm,@(disp,Rn) */
	r5 = 0xC3C4048u; UPD(0x0C0AE796u, 1);  /* 0C0AE794 mov.l @(disp,pc),Rn */
	r0 = R32(r3 + 0x30u); UPD(0x0C0AE798u, 1);  /* 0C0AE796 mov.l @(disp,Rm),Rn */
	r2 = R32(r5); UPD(0x0C0AE79Au, 1);  /* 0C0AE798 mov.l @Rm,Rn */
	r0 += r2;  /* 0C0AE79A add Rm,Rn */
	W32(r3 + 0x28u, r0); UPD(0x0C0AE79Eu, 2);  /* 0C0AE79C mov.l Rm,@(disp,Rn) */
	r0 = R32(r3 + 0x8u); UPD(0x0C0AE7A0u, 1);  /* 0C0AE79E mov.l @(disp,Rm),Rn */
	T = r0 == 0x7u;  /* 0C0AE7A0 cmp/eq #imm,r0 */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0AE7B0u, 4); goto L_0C0AE7B0; } UPD(0x0C0AE7A6u, 1); goto L_0C0AE7A6; }  /* 0C0AE7A2 bt/s */
L_0C0AE7A6: BLKS(0x0C0AE7A6u);
	r15 = r14;  /* 0C0AE7A6 mov Rm,Rn */
	IF(0x0C0AE7A8u); PR = R32(r15); r15 += 4; UPD(0x0C0AE7AAu, 2);  /* 0C0AE7A8 lds.l @Rn+,pr */
	IF(0x0C0AE7AAu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AE7AA rts */
L_0C0AE7B0: BLKS(0x0C0AE7B0u);
	r7 = 0x99u; UPD(0x0C0AE7B2u, 1);  /* 0C0AE7B0 mov.w @(disp,pc),Rn */
	r7 += r3;  /* 0C0AE7B2 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r7); UPD(0x0C0AE7B6u, 2);  /* 0C0AE7B4 mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C0AE7B6 add #imm,Rn */
	W8(r7, r0); UPD(0x0C0AE7BAu, 2);  /* 0C0AE7B8 mov.b Rm,@Rn */
	r0 &= 0x3u;  /* 0C0AE7BA and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0AE7BC tst Rm,Rn */
	if (T) { UPD(0x0C0AE7A6u, 5); goto L_0C0AE7A6; }  /* 0C0AE7BE bt */
L_0C0AE7C0: BLKS(0x0C0AE7C0u);
	r0 = R32(r3 + 0xCu); UPD(0x0C0AE7C2u, 1);  /* 0C0AE7C0 mov.l @(disp,Rm),Rn */
	r2 = 0xC0A8AE0u; UPD(0x0C0AE7C4u, 1);  /* 0C0AE7C2 mov.l @(disp,pc),Rn */
	r0 += 0x1u;  /* 0C0AE7C4 add #imm,Rn */
	r0 &= 0xFu;  /* 0C0AE7C6 and #imm,r0 */
	IF(0x0C0AE7C8u); { u32 t_ = r2; PR = 0x0C0AE7CCu; W32(r3 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 4); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C0AE7CCu); }  /* 0C0AE7C8 jsr @Rn */
L_0C0AE7CC: BLKS(0x0C0AE7CCu);
	{ IF(0x0C0AE7CEu); ; /* slot nop */ UPD(0x0C0AE7A6u, 3); goto L_0C0AE7A6; }  /* 0C0AE7CC bra */
}

/* FUN_0c0ae7e0 */
void blk_f_0C0AE7E0(sh3_t *c)
{
	LOCALS;
L_0C0AE7E0: BLKS(0x0C0AE7E0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AE7E2u, 1);  /* 0C0AE7E0 mov.l Rm,@-Rn */
	r0 = 0xC0A6980u; UPD(0x0C0AE7E4u, 1);  /* 0C0AE7E2 mov.l @(disp,pc),Rn */
	IF(0x0C0AE7E4u); r15 -= 4; W32(r15, PR); UPD(0x0C0AE7E6u, 1);  /* 0C0AE7E4 sts.l pr,@-Rn */
	IF(0x0C0AE7E6u); { u32 t_ = r0; PR = 0x0C0AE7EAu; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A6980, 0x0C0A6980u, 0x0C0AE7EAu); }  /* 0C0AE7E6 jsr @Rn */
L_0C0AE7EA: BLKS(0x0C0AE7EAu);
	r15 = r14;  /* 0C0AE7EA mov Rm,Rn */
	IF(0x0C0AE7ECu); PR = R32(r15); r15 += 4; UPD(0x0C0AE7EEu, 2);  /* 0C0AE7EC lds.l @Rn+,pr */
	IF(0x0C0AE7EEu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AE7EE rts */
}

void blk_f_0C0AE860(sh3_t *c)
{
	LOCALS;
L_0C0AE860: BLKS(0x0C0AE860u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AE862u, 1);  /* 0C0AE860 mov.l Rm,@-Rn */
	r5 = 0x4Cu;  /* 0C0AE862 mov #imm,Rn */
	IF(0x0C0AE864u); r15 -= 4; W32(r15, PR); UPD(0x0C0AE866u, 2);  /* 0C0AE864 sts.l pr,@-Rn */
	r2 = 0xC2B1811u; UPD(0x0C0AE868u, 1);  /* 0C0AE866 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0AE868 mov Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C0AE86Cu, 2);  /* 0C0AE86A mov.b @Rm,Rn */
	IF(0x0C0AE86Cu); MACL = r0 * r5;  /* 0C0AE86C mul.l Rm,Rn */
	r4 = 0xC286318u; UPD(0x0C0AE870u, 3);  /* 0C0AE86E mov.l @(disp,pc),Rn */
	IF(0x0C0AE870u); r7 = MACL;  /* 0C0AE870 sts macl,Rn */
	r4 += r7;  /* 0C0AE872 add Rm,Rn */
	r3 = R32(r4 + 0x38u); UPD(0x0C0AE876u, 3);  /* 0C0AE874 mov.l @(disp,Rm),Rn */
	r4 = 0xC3C43CCu; UPD(0x0C0AE878u, 1);  /* 0C0AE876 mov.l @(disp,pc),Rn */
	r5 = R32(r4); UPD(0x0C0AE87Au, 1);  /* 0C0AE878 mov.l @Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r0 = v_; } UPD(0x0C0AE87Cu, 1);  /* 0C0AE87A mov.w @Rm+,Rn */
	IF(0x0C0AE87Cu); r0 <<= 2;  /* 0C0AE87C shll2 Rn */
	IF(0x0C0AE87Eu); r6 = R32(r0 + r3); UPD(0x0C0AE880u, 2);  /* 0C0AE87E mov.l @(r0,Rm),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r1 = v_; } UPD(0x0C0AE882u, 1);  /* 0C0AE880 mov.w @Rm+,Rn */
	r0 = 0xC2B03A2u; UPD(0x0C0AE884u, 1);  /* 0C0AE882 mov.l @(disp,pc),Rn */
	W16(r0, r1); UPD(0x0C0AE886u, 1);  /* 0C0AE884 mov.w Rm,@Rn */
	r2 = 0xC297460u; UPD(0x0C0AE888u, 1);  /* 0C0AE886 mov.l @(disp,pc),Rn */
	r0 = 0xC0A87C0u; UPD(0x0C0AE88Au, 1);  /* 0C0AE888 mov.l @(disp,pc),Rn */
	W32(r2, r6); UPD(0x0C0AE88Cu, 1);  /* 0C0AE88A mov.l Rm,@Rn */
	IF(0x0C0AE88Cu); { u32 t_ = r0; PR = 0x0C0AE890u; W32(r4, r5); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A87C0, 0x0C0A87C0u, 0x0C0AE890u); }  /* 0C0AE88C jsr @Rn */
L_0C0AE890: BLKS(0x0C0AE890u);
	r15 = r14;  /* 0C0AE890 mov Rm,Rn */
	IF(0x0C0AE892u); PR = R32(r15); r15 += 4; UPD(0x0C0AE894u, 2);  /* 0C0AE892 lds.l @Rn+,pr */
	IF(0x0C0AE894u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AE894 rts */
}

void blk_f_0C0AE8B0(sh3_t *c)
{
	LOCALS;
L_0C0AE8B0: BLKS(0x0C0AE8B0u);
	r0 = 0xB4u; UPD(0x0C0AE8B2u, 1);  /* 0C0AE8B0 mov.w @(disp,pc),Rn */
	r1 = (u32)(s32)(s16)r4;  /* 0C0AE8B2 exts.w Rm,Rn */
	IF(0x0C0AE8B4u); MACL = r1 * r0;  /* 0C0AE8B4 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AE8B8u, 4);  /* 0C0AE8B6 mov.l Rm,@-Rn */
	r2 = 0x1u;  /* 0C0AE8B8 mov #imm,Rn */
	r0 = 0xC2865B4u; UPD(0x0C0AE8BCu, 2);  /* 0C0AE8BA mov.l @(disp,pc),Rn */
	IF(0x0C0AE8BCu); r3 = MACL;  /* 0C0AE8BC sts macl,Rn */
	IF(0x0C0AE8BEu); W16(r0 + r3, r2); UPD(0x0C0AE8C0u, 2);  /* 0C0AE8BE mov.w Rm,@(r0,Rn) */
	r14 = r15;  /* 0C0AE8C0 mov Rm,Rn */
	r15 = r14;  /* 0C0AE8C2 mov Rm,Rn */
	IF(0x0C0AE8C4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C0AE8C4 rts */
}

void blk_f_0C0AE8D0(sh3_t *c)
{
	LOCALS;
L_0C0AE8D0: BLKS(0x0C0AE8D0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AE8D2u, 1);  /* 0C0AE8D0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AE8D4u, 1);  /* 0C0AE8D2 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AE8D6u, 1);  /* 0C0AE8D4 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C0AE8D6 exts.w Rm,Rn */
	r8 = 0xC0A9CB0u; UPD(0x0C0AE8DAu, 2);  /* 0C0AE8D8 mov.l @(disp,pc),Rn */
	r4 = r9;  /* 0C0AE8DA mov Rm,Rn */
	IF(0x0C0AE8DCu); r15 -= 4; W32(r15, PR); UPD(0x0C0AE8DEu, 2);  /* 0C0AE8DC sts.l pr,@-Rn */
	IF(0x0C0AE8DEu); { u32 t_ = r8; PR = 0x0C0AE8E2u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9CB0, 0x0C0A9CB0u, 0x0C0AE8E2u); }  /* 0C0AE8DE jsr @Rn */
L_0C0AE8E2: BLKS(0x0C0AE8E2u);
	r7 = 0xC0A9B40u; UPD(0x0C0AE8E4u, 1);  /* 0C0AE8E2 mov.l @(disp,pc),Rn */
	IF(0x0C0AE8E4u); { u32 t_ = r7; PR = 0x0C0AE8E8u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9B40, 0x0C0A9B40u, 0x0C0AE8E8u); }  /* 0C0AE8E4 jsr @Rn */
L_0C0AE8E8: BLKS(0x0C0AE8E8u);
	r6 = 0xB4u; UPD(0x0C0AE8EAu, 1);  /* 0C0AE8E8 mov.w @(disp,pc),Rn */
	IF(0x0C0AE8EAu); MACL = r9 * r6;  /* 0C0AE8EA mul.l Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C0AE8EEu, 3);  /* 0C0AE8EC mov.l @(disp,pc),Rn */
	IF(0x0C0AE8EEu); r8 = MACL;  /* 0C0AE8EE sts macl,Rn */
	r8 += r5;  /* 0C0AE8F0 add Rm,Rn */
	r4 = 0x86u; UPD(0x0C0AE8F4u, 3);  /* 0C0AE8F2 mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C0AE8F4 mov Rm,Rn */
	IF(0x0C0AE8F6u); r3 = (u32)(s32)(s16)R16(r0 + r4); UPD(0x0C0AE8F8u, 2);  /* 0C0AE8F6 mov.w @(r0,Rm),Rn */
	r5 = 0x6u;  /* 0C0AE8F8 mov #imm,Rn */
	r2 = 0x200u; UPD(0x0C0AE8FCu, 2);  /* 0C0AE8FA mov.w @(disp,pc),Rn */
	r0 = 0x1Fu;  /* 0C0AE8FC mov #imm,Rn */
	r3 += r2;  /* 0C0AE8FE add Rm,Rn */
	IF(0x0C0AE900u); r3 >>= 8;  /* 0C0AE900 shlr8 Rn */
	IF(0x0C0AE902u); r3 >>= 2;  /* 0C0AE902 shlr2 Rn */
	r3 &= r0;  /* 0C0AE904 and Rm,Rn */
	W32(r8 + 0x8u, r3); UPD(0x0C0AE908u, 6);  /* 0C0AE906 mov.l Rm,@(disp,Rn) */
	r0 = 0xC0C2310u; UPD(0x0C0AE90Au, 1);  /* 0C0AE908 mov.l @(disp,pc),Rn */
	r8 += 0x50u;  /* 0C0AE90A add #imm,Rn */
	IF(0x0C0AE90Cu); { u32 t_ = r0; PR = 0x0C0AE910u; r4 = (u32)(s32)(s16)R16(r8); /* slot mov.w @Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0C2310, 0x0C0C2310u, 0x0C0AE910u); }  /* 0C0AE90C jsr @Rn */
L_0C0AE910: BLKS(0x0C0AE910u);
	r8 += 0xFFFFFFB0u;  /* 0C0AE910 add #imm,Rn */
	W32(r8 + 0xCu, r1); UPD(0x0C0AE914u, 2);  /* 0C0AE912 mov.l Rm,@(disp,Rn) */
	r4 = r9;  /* 0C0AE914 mov Rm,Rn */
	r0 = 0xC0A8B10u; UPD(0x0C0AE918u, 2);  /* 0C0AE916 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C0AE918 mov Rm,Rn */
	IF(0x0C0AE91Au); PR = R32(r15); r15 += 4; UPD(0x0C0AE91Cu, 2);  /* 0C0AE91A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AE91Eu, 1);  /* 0C0AE91C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AE920u, 1);  /* 0C0AE91E mov.l @Rm+,Rn */
	IF(0x0C0AE920u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A8B10u: TAIL(blk_f_0C0A8B10); default: JUMPD(tv_); } }  /* 0C0AE920 jmp @Rn */
}

/* FUN_0c0ae940 */
void blk_f_0C0AE940(sh3_t *c)
{
	LOCALS;
L_0C0AE940: BLKS(0x0C0AE940u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AE942u, 1);  /* 0C0AE940 mov.l Rm,@-Rn */
	r1 = 0x0u;  /* 0C0AE942 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AE946u, 2);  /* 0C0AE944 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AE948u, 1);  /* 0C0AE946 mov.l Rm,@-Rn */
	r9 = 0x0u;  /* 0C0AE948 mov #imm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0AE94Cu, 2);  /* 0C0AE94A mov.l Rm,@-Rn */
	r10 = 0x0u;  /* 0C0AE94C mov #imm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0AE950u, 2);  /* 0C0AE94E mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AE952u, 1);  /* 0C0AE950 mov.l Rm,@-Rn */
	r0 = 0xC29CF86u; UPD(0x0C0AE954u, 1);  /* 0C0AE952 mov.l @(disp,pc),Rn */
	IF(0x0C0AE954u); r15 -= 4; W32(r15, PR); UPD(0x0C0AE956u, 1);  /* 0C0AE954 sts.l pr,@-Rn */
	r11 = 0xC286578u; UPD(0x0C0AE958u, 1);  /* 0C0AE956 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0AE958 mov Rm,Rn */
	r12 = 0xC1DD6DCu; UPD(0x0C0AE95Cu, 2);  /* 0C0AE95A mov.l @(disp,pc),Rn */
	W16(r0, r1); UPD(0x0C0AE95Eu, 1);  /* 0C0AE95C mov.w Rm,@Rn */
	IF(0x0C0AE95Eu); ;  /* 0C0AE95E nop */
	UPD(0x0C0AE960u, 1);
L_0C0AE960: BLKS(0x0C0AE960u);
	r8 = r10;  /* 0C0AE960 mov Rm,Rn */
	r8 += r11;  /* 0C0AE962 add Rm,Rn */
	r0 = R32(r8); UPD(0x0C0AE966u, 3);  /* 0C0AE964 mov.l @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0AE966 tst Rm,Rn */
	{ u32 c_ = !T; r7 = r9; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0AE990u, 4); goto L_0C0AE990; } UPD(0x0C0AE96Cu, 1); goto L_0C0AE96C; }  /* 0C0AE968 bf/s */
L_0C0AE96C: BLKS(0x0C0AE96Cu);
	r7 += 0x1u;  /* 0C0AE96C add #imm,Rn */
	UPD(0x0C0AE96Eu, 1);
L_0C0AE96E: BLKS(0x0C0AE96Eu);
	r8 = 0xB4u; UPD(0x0C0AE970u, 1);  /* 0C0AE96E mov.w @(disp,pc),Rn */
	r9 = (u32)(s32)(s16)r7;  /* 0C0AE970 exts.w Rm,Rn */
	r6 = 0xBFu; UPD(0x0C0AE974u, 2);  /* 0C0AE972 mov.w @(disp,pc),Rn */
	T = (s32)r9 > (s32)r6;  /* 0C0AE974 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r10 += r8; /* slot add Rm,Rn */ if (c_) { UPD(0x0C0AE960u, 4); goto L_0C0AE960; } goto L_0C0AE97A; }  /* 0C0AE976 bf/s */
L_0C0AE97A: BLKS(0x0C0AE97Au);
	r15 = r14;  /* 0C0AE97A mov Rm,Rn */
	IF(0x0C0AE97Cu); PR = R32(r15); r15 += 4; UPD(0x0C0AE97Eu, 3);  /* 0C0AE97C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AE980u, 1);  /* 0C0AE97E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0AE982u, 1);  /* 0C0AE980 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0AE984u, 1);  /* 0C0AE982 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AE986u, 1);  /* 0C0AE984 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AE988u, 1);  /* 0C0AE986 mov.l @Rm+,Rn */
	IF(0x0C0AE988u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AE988 rts */
L_0C0AE990: BLKS(0x0C0AE990u);
	r4 = 0xC29CF86u; UPD(0x0C0AE992u, 1);  /* 0C0AE990 mov.l @(disp,pc),Rn */
	r0 = R32(r8 + 0x4u); UPD(0x0C0AE994u, 1);  /* 0C0AE992 mov.l @(disp,Rm),Rn */
	r5 = (u32)(s32)(s16)R16(r4); UPD(0x0C0AE996u, 1);  /* 0C0AE994 mov.w @Rm,Rn */
	IF(0x0C0AE996u); r0 <<= 2;  /* 0C0AE996 shll2 Rn */
	r5 += 0x1u;  /* 0C0AE998 add #imm,Rn */
	IF(0x0C0AE99Au); r2 = R32(r0 + r12); UPD(0x0C0AE99Cu, 3);  /* 0C0AE99A mov.l @(r0,Rm),Rn */
	W16(r4, r5); UPD(0x0C0AE99Eu, 1);  /* 0C0AE99C mov.w Rm,@Rn */
	IF(0x0C0AE99Eu); { u32 t_ = r2; PR = 0x0C0AE9A2u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C0AE9A2u); }  /* 0C0AE99E jsr @Rn */
L_0C0AE9A2: BLKS(0x0C0AE9A2u);
	r2 = R32(r8); UPD(0x0C0AE9A4u, 1);  /* 0C0AE9A2 mov.l @Rm,Rn */
	r3 = 0x4000u; UPD(0x0C0AE9A6u, 1);  /* 0C0AE9A4 mov.w @(disp,pc),Rn */
	r2 &= r3;  /* 0C0AE9A6 and Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C0AE9A8 tst Rm,Rn */
	{ u32 c_ = !T; r7 = r9; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0AE96Cu, 5); goto L_0C0AE96C; } goto L_0C0AE9AE; }  /* 0C0AE9AA bf/s */
L_0C0AE9AE: BLKS(0x0C0AE9AEu);
	r1 = 0x84u; UPD(0x0C0AE9B0u, 2);  /* 0C0AE9AE mov.w @(disp,pc),Rn */
	r1 += r8;  /* 0C0AE9B0 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r1); UPD(0x0C0AE9B4u, 2);  /* 0C0AE9B2 mov.b @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0AE9B4 tst Rm,Rn */
	{ u32 c_ = T; r7 += 0x1u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AE96Eu, 4); goto L_0C0AE96E; } goto L_0C0AE9BA; }  /* 0C0AE9B6 bt/s */
L_0C0AE9BA: BLKS(0x0C0AE9BAu);
	r0 += 0xFFFFFFFFu;  /* 0C0AE9BA add #imm,Rn */
	W8(r1, r0); UPD(0x0C0AE9BEu, 3);  /* 0C0AE9BC mov.b Rm,@Rn */
	r0 = r0 & 0xFF;  /* 0C0AE9BE extu.b Rm,Rn */
	T = r0 == 0x1u;  /* 0C0AE9C0 cmp/eq #imm,r0 */
	{ u32 c_ = !T; r7 = r9; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0AE96Cu, 5); goto L_0C0AE96C; } goto L_0C0AE9C6; }  /* 0C0AE9C2 bf/s */
L_0C0AE9C6: BLKS(0x0C0AE9C6u);
	r8 += 0x48u;  /* 0C0AE9C6 add #imm,Rn */
	{ W32(r8, r2); /* slot mov.l Rm,@Rn */ UPD(0x0C0AE96Cu, 5); goto L_0C0AE96C; }  /* 0C0AE9C8 bra */
}

/* FUN_0c0ae9e0 */
void blk_f_0C0AE9E0(sh3_t *c)
{
	LOCALS;
L_0C0AE9E0: BLKS(0x0C0AE9E0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AE9E2u, 1);  /* 0C0AE9E0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AE9E4u, 1);  /* 0C0AE9E2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AE9E6u, 1);  /* 0C0AE9E4 mov.l Rm,@-Rn */
	r9 = 0x0u;  /* 0C0AE9E6 mov #imm,Rn */
	r10 = (u32)(s32)(s8)r4;  /* 0C0AE9E8 exts.b Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0AE9ECu, 3);  /* 0C0AE9EA mov.l Rm,@-Rn */
	r4 = 0x180u; UPD(0x0C0AE9EEu, 1);  /* 0C0AE9EC mov.w @(disp,pc),Rn */
	r11 = r10;  /* 0C0AE9EE mov Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0AE9F2u, 2);  /* 0C0AE9F0 mov.l Rm,@-Rn */
	IF(0x0C0AE9F2u); MACL = r10 * r4;  /* 0C0AE9F2 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AE9F6u, 3);  /* 0C0AE9F4 mov.l Rm,@-Rn */
	r11 += r11;  /* 0C0AE9F6 add Rm,Rn */
	r0 = 0xC3C546Au; UPD(0x0C0AE9FAu, 2);  /* 0C0AE9F8 mov.l @(disp,pc),Rn */
	IF(0x0C0AE9FAu); r8 = MACL;  /* 0C0AE9FA sts macl,Rn */
	IF(0x0C0AE9FCu); r15 -= 4; W32(r15, PR); UPD(0x0C0AE9FEu, 2);  /* 0C0AE9FC sts.l pr,@-Rn */
	r8 += r0;  /* 0C0AE9FE add Rm,Rn */
	r3 = 0xC29D196u; UPD(0x0C0AEA02u, 2);  /* 0C0AEA00 mov.l @(disp,pc),Rn */
	r0 = r11;  /* 0C0AEA02 mov Rm,Rn */
	IF(0x0C0AEA04u); r2 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C0AEA06u, 2);  /* 0C0AEA04 mov.w @(r0,Rm),Rn */
	r0 = r2 & 0xFFFF;  /* 0C0AEA06 extu.w Rm,Rn */
	T = (s32)r9 >= (s32)r0;  /* 0C0AEA08 cmp/ge Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0AEA3Eu, 5); goto L_0C0AEA3E; } goto L_0C0AEA0E; }  /* 0C0AEA0A bt/s */
L_0C0AEA0E: BLKS(0x0C0AEA0Eu);
	r12 = 0xC073B10u; UPD(0x0C0AEA10u, 2);  /* 0C0AEA0E mov.l @(disp,pc),Rn */
L_0C0AEA10: BLKS(0x0C0AEA10u);
	r7 = 0xB4u; UPD(0x0C0AEA12u, 1);  /* 0C0AEA10 mov.w @(disp,pc),Rn */
	r3 = (u32)(s32)(s16)R16(r8); UPD(0x0C0AEA14u, 1);  /* 0C0AEA12 mov.w @Rm,Rn */
	MACL = (u32)(u16)r3 * (u32)(u16)r7;  /* 0C0AEA14 mulu.w Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C0AEA18u, 3);  /* 0C0AEA16 mov.l @(disp,pc),Rn */
	IF(0x0C0AEA18u); r7 = MACL;  /* 0C0AEA18 sts macl,Rn */
	r7 += r6;  /* 0C0AEA1A add Rm,Rn */
	r1 = R32(r7); UPD(0x0C0AEA1Eu, 3);  /* 0C0AEA1C mov.l @Rm,Rn */
	r5 = 0x40000000u; UPD(0x0C0AEA20u, 1);  /* 0C0AEA1E mov.l @(disp,pc),Rn */
	T = (r1 & r5) == 0;  /* 0C0AEA20 tst Rm,Rn */
	if (T) { UPD(0x0C0AEA2Eu, 4); goto L_0C0AEA2E; }  /* 0C0AEA22 bt */
L_0C0AEA24: BLKS(0x0C0AEA24u);
	r0 = 0xA9u; UPD(0x0C0AEA26u, 1);  /* 0C0AEA24 mov.w @(disp,pc),Rn */
	IF(0x0C0AEA26u); r4 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C0AEA28u, 1);  /* 0C0AEA26 mov.b @(r0,Rm),Rn */
	r2 = r4 & 0xFF;  /* 0C0AEA28 extu.b Rm,Rn */
	T = r2 == r10;  /* 0C0AEA2A cmp/eq Rm,Rn */
	if (T) { UPD(0x0C0AEA50u, 5); goto L_0C0AEA50; }  /* 0C0AEA2C bt */
L_0C0AEA2E: BLKS(0x0C0AEA2Eu);
	r2 = 0xC29D196u; UPD(0x0C0AEA30u, 1);  /* 0C0AEA2E mov.l @(disp,pc),Rn */
	r0 = r11;  /* 0C0AEA30 mov Rm,Rn */
	IF(0x0C0AEA32u); r4 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C0AEA34u, 2);  /* 0C0AEA32 mov.w @(r0,Rm),Rn */
	r9 += 0x1u;  /* 0C0AEA34 add #imm,Rn */
	r7 = r4 & 0xFFFF;  /* 0C0AEA36 extu.w Rm,Rn */
	T = (s32)r9 >= (s32)r7;  /* 0C0AEA38 cmp/ge Rm,Rn */
	{ u32 c_ = !T; r8 += 0x2u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AEA10u, 6); goto L_0C0AEA10; } UPD(0x0C0AEA3Eu, 1); goto L_0C0AEA3E; }  /* 0C0AEA3A bf/s */
L_0C0AEA3E: BLKS(0x0C0AEA3Eu);
	r15 = r14;  /* 0C0AEA3E mov Rm,Rn */
	IF(0x0C0AEA40u); PR = R32(r15); r15 += 4; UPD(0x0C0AEA42u, 2);  /* 0C0AEA40 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AEA44u, 1);  /* 0C0AEA42 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0AEA46u, 1);  /* 0C0AEA44 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0AEA48u, 1);  /* 0C0AEA46 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AEA4Au, 1);  /* 0C0AEA48 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AEA4Cu, 1);  /* 0C0AEA4A mov.l @Rm+,Rn */
	IF(0x0C0AEA4Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AEA4C rts */
L_0C0AEA50: BLKS(0x0C0AEA50u);
	r3 = R32(r7 + 0x18u); UPD(0x0C0AEA52u, 1);  /* 0C0AEA50 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0AEA52 add #imm,Rn */
	r6 = 0xC2289E8u; UPD(0x0C0AEA56u, 2);  /* 0C0AEA54 mov.l @(disp,pc),Rn */
	W32(r6, r3); UPD(0x0C0AEA58u, 1);  /* 0C0AEA56 mov.l Rm,@Rn */
	r5 = 0xC3C86B0u; UPD(0x0C0AEA5Au, 1);  /* 0C0AEA58 mov.l @(disp,pc),Rn */
	r3 = r7;  /* 0C0AEA5A mov Rm,Rn */
	r1 = R32(r7 + 0x20u); UPD(0x0C0AEA5Eu, 2);  /* 0C0AEA5C mov.l @(disp,Rm),Rn */
	r3 += 0x40u;  /* 0C0AEA5E add #imm,Rn */
	W32(r5, r1); UPD(0x0C0AEA62u, 2);  /* 0C0AEA60 mov.l Rm,@Rn */
	r4 = R32(r7 + 0x34u); UPD(0x0C0AEA64u, 1);  /* 0C0AEA62 mov.l @(disp,Rm),Rn */
	r5 = R32(r7 + 0x24u); UPD(0x0C0AEA66u, 1);  /* 0C0AEA64 mov.l @(disp,Rm),Rn */
	r6 = R32(r7 + 0x28u); UPD(0x0C0AEA68u, 1);  /* 0C0AEA66 mov.l @(disp,Rm),Rn */
	r0 = R32(r3 + 0x8u); UPD(0x0C0AEA6Au, 1);  /* 0C0AEA68 mov.l @(disp,Rm),Rn */
	r2 = 0xFFFFFFu; UPD(0x0C0AEA6Cu, 1);  /* 0C0AEA6A mov.l @(disp,pc),Rn */
	r7 = R32(r7 + 0x38u); UPD(0x0C0AEA6Eu, 1);  /* 0C0AEA6C mov.l @(disp,Rm),Rn */
	r0 &= r2;  /* 0C0AEA6E and Rm,Rn */
	r7 |= r0;  /* 0C0AEA70 or Rm,Rn */
	r0 = R32(r3 + 0x10u); UPD(0x0C0AEA74u, 3);  /* 0C0AEA72 mov.l @(disp,Rm),Rn */
	IF(0x0C0AEA74u); { u32 t_ = r12; PR = 0x0C0AEA78u; W32(r15, r0); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C073B10, 0x0C073B10u, 0x0C0AEA78u); }  /* 0C0AEA74 jsr @Rn */
L_0C0AEA78: BLKS(0x0C0AEA78u);
	{ r15 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C0AEA2Eu, 3); goto L_0C0AEA2E; }  /* 0C0AEA78 bra */
}

/* FUN_0c0aeab0 */
void blk_f_0C0AEAB0(sh3_t *c)
{
	LOCALS;
L_0C0AEAB0: BLKS(0x0C0AEAB0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AEAB2u, 1);  /* 0C0AEAB0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AEAB4u, 1);  /* 0C0AEAB2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AEAB6u, 1);  /* 0C0AEAB4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0AEAB8u, 1);  /* 0C0AEAB6 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0AEABAu, 1);  /* 0C0AEAB8 mov.l Rm,@-Rn */
	r11 = 0x0u;  /* 0C0AEABA mov #imm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0AEABEu, 2);  /* 0C0AEABC mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AEAC0u, 1);  /* 0C0AEABE mov.l Rm,@-Rn */
	r9 = 0xC286578u; UPD(0x0C0AEAC2u, 1);  /* 0C0AEAC0 mov.l @(disp,pc),Rn */
	IF(0x0C0AEAC2u); r15 -= 4; W32(r15, PR); UPD(0x0C0AEAC4u, 1);  /* 0C0AEAC2 sts.l pr,@-Rn */
	r13 = 0xC29D196u; UPD(0x0C0AEAC6u, 1);  /* 0C0AEAC4 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0AEAC6 mov Rm,Rn */
	r12 = 0xC28F616u; UPD(0x0C0AEACAu, 2);  /* 0C0AEAC8 mov.l @(disp,pc),Rn */
	IF(0x0C0AEACAu); ;  /* 0C0AEACA nop */
	UPD(0x0C0AEACCu, 1);
L_0C0AEACC: BLKS(0x0C0AEACCu);
	r2 = R32(r9); UPD(0x0C0AEACEu, 1);  /* 0C0AEACC mov.l @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C0AEACE tst Rm,Rn */
	if (T) { UPD(0x0C0AEB6Cu, 4); goto L_0C0AEB6C; }  /* 0C0AEAD0 bt */
L_0C0AEAD2: BLKS(0x0C0AEAD2u);
	r0 = 0x40000000u; UPD(0x0C0AEAD4u, 1);  /* 0C0AEAD2 mov.l @(disp,pc),Rn */
	T = (r2 & r0) == 0;  /* 0C0AEAD4 tst Rm,Rn */
	{ u32 c_ = T; r2 = 0x1Fu; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AEB0Au, 4); goto L_0C0AEB0A; } goto L_0C0AEADA; }  /* 0C0AEAD6 bt/s */
L_0C0AEADA: BLKS(0x0C0AEADAu);
	r4 = 0xA9u; UPD(0x0C0AEADCu, 2);  /* 0C0AEADA mov.w @(disp,pc),Rn */
	r4 += r9;  /* 0C0AEADC add Rm,Rn */
	r8 = (u32)(s32)(s8)R8(r4); UPD(0x0C0AEAE0u, 2);  /* 0C0AEADE mov.b @Rm,Rn */
	r3 = 0x1Fu;  /* 0C0AEAE0 mov #imm,Rn */
	r8 &= r2;  /* 0C0AEAE2 and Rm,Rn */
	r7 = 0xC0u; UPD(0x0C0AEAE6u, 3);  /* 0C0AEAE4 mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C0AEAE6 mov Rm,Rn */
	r0 += r0;  /* 0C0AEAE8 add Rm,Rn */
	IF(0x0C0AEAEAu); MACL = r8 * r7;  /* 0C0AEAEA mul.l Rm,Rn */
	IF(0x0C0AEAECu); r10 = (u32)(s32)(s16)R16(r0 + r13); UPD(0x0C0AEAEEu, 5);  /* 0C0AEAEC mov.w @(r0,Rm),Rn */
	IF(0x0C0AEAEEu); r5 = MACL;  /* 0C0AEAEE sts macl,Rn */
	r6 = r10 & 0xFFFF;  /* 0C0AEAF0 extu.w Rm,Rn */
	r0 = 0xC3C546Au; UPD(0x0C0AEAF4u, 3);  /* 0C0AEAF2 mov.l @(disp,pc),Rn */
	r5 += r6;  /* 0C0AEAF4 add Rm,Rn */
	r5 += r5;  /* 0C0AEAF6 add Rm,Rn */
	IF(0x0C0AEAF8u); W16(r0 + r5, r11); UPD(0x0C0AEAFAu, 3);  /* 0C0AEAF8 mov.w Rm,@(r0,Rn) */
	r1 = (u32)(s32)(s8)R8(r4); UPD(0x0C0AEAFCu, 1);  /* 0C0AEAFA mov.b @Rm,Rn */
	r3 &= r1;  /* 0C0AEAFC and Rm,Rn */
	r3 += r3;  /* 0C0AEAFE add Rm,Rn */
	r0 = r3;  /* 0C0AEB00 mov Rm,Rn */
	r0 += r13;  /* 0C0AEB02 add Rm,Rn */
	r2 = (u32)(s32)(s16)R16(r0); UPD(0x0C0AEB06u, 5);  /* 0C0AEB04 mov.w @Rm,Rn */
	r2 += 0x1u;  /* 0C0AEB06 add #imm,Rn */
	W16(r0, r2); UPD(0x0C0AEB0Au, 2);  /* 0C0AEB08 mov.w Rm,@Rn */
L_0C0AEB0A: BLKS(0x0C0AEB0Au);
	r10 = 0xA9u; UPD(0x0C0AEB0Cu, 1);  /* 0C0AEB0A mov.w @(disp,pc),Rn */
	r10 += r9;  /* 0C0AEB0C add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r10); UPD(0x0C0AEB10u, 2);  /* 0C0AEB0E mov.b @Rm,Rn */
	r6 = r0 & 0xFF;  /* 0C0AEB10 extu.b Rm,Rn */
	r0 = 0xC076AF0u; UPD(0x0C0AEB14u, 2);  /* 0C0AEB12 mov.l @(disp,pc),Rn */
	r8 = 0xABu; UPD(0x0C0AEB16u, 1);  /* 0C0AEB14 mov.w @(disp,pc),Rn */
	r4 = R32(r9 + 0x24u); UPD(0x0C0AEB18u, 1);  /* 0C0AEB16 mov.l @(disp,Rm),Rn */
	r8 += r9;  /* 0C0AEB18 add Rm,Rn */
	IF(0x0C0AEB1Au); { u32 t_ = r0; PR = 0x0C0AEB1Eu; r5 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C076AF0, 0x0C076AF0u, 0x0C0AEB1Eu); }  /* 0C0AEB1A jsr @Rn */
L_0C0AEB1E: BLKS(0x0C0AEB1Eu);
	W8(r8, r0); UPD(0x0C0AEB20u, 1);  /* 0C0AEB1E mov.b Rm,@Rn */
	r2 = r0;  /* 0C0AEB20 mov Rm,Rn */
	r1 = R32(r9); UPD(0x0C0AEB24u, 2);  /* 0C0AEB22 mov.l @Rm,Rn */
	r0 = r1;  /* 0C0AEB24 mov Rm,Rn */
	r0 &= 0x4u;  /* 0C0AEB26 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0AEB28 tst Rm,Rn */
	{ u32 c_ = T; r4 = 0x10u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AEB6Cu, 6); goto L_0C0AEB6C; } goto L_0C0AEB2E; }  /* 0C0AEB2A bt/s */
L_0C0AEB2E: BLKS(0x0C0AEB2Eu);
	r1 &= r4;  /* 0C0AEB2E and Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C0AEB30 tst Rm,Rn */
	if (T) { UPD(0x0C0AEB90u, 6); goto L_0C0AEB90; }  /* 0C0AEB32 bt */
L_0C0AEB34: BLKS(0x0C0AEB34u);
	r3 = (u32)(s32)(s8)R8(r10); UPD(0x0C0AEB36u, 1);  /* 0C0AEB34 mov.b @Rm,Rn */
	r0 = 0xADu; UPD(0x0C0AEB38u, 1);  /* 0C0AEB36 mov.w @(disp,pc),Rn */
	IF(0x0C0AEB38u); W8(r0 + r9, r3); UPD(0x0C0AEB3Au, 1);  /* 0C0AEB38 mov.b Rm,@(r0,Rn) */
L_0C0AEB3A: BLKS(0x0C0AEB3Au);
	r8 = 0xADu; UPD(0x0C0AEB3Cu, 1);  /* 0C0AEB3A mov.w @(disp,pc),Rn */
	r3 = 0x1Fu;  /* 0C0AEB3C mov #imm,Rn */
	r8 += r9;  /* 0C0AEB3E add Rm,Rn */
	r5 = (u32)(s32)(s8)R8(r8); UPD(0x0C0AEB42u, 3);  /* 0C0AEB40 mov.b @Rm,Rn */
	r7 = 0x1Fu;  /* 0C0AEB42 mov #imm,Rn */
	r5 &= r3;  /* 0C0AEB44 and Rm,Rn */
	r4 = 0xC0u; UPD(0x0C0AEB48u, 3);  /* 0C0AEB46 mov.w @(disp,pc),Rn */
	r0 = r5;  /* 0C0AEB48 mov Rm,Rn */
	r0 += r0;  /* 0C0AEB4A add Rm,Rn */
	IF(0x0C0AEB4Cu); MACL = r5 * r4;  /* 0C0AEB4C mul.l Rm,Rn */
	IF(0x0C0AEB4Eu); r2 = (u32)(s32)(s16)R16(r0 + r12); UPD(0x0C0AEB50u, 5);  /* 0C0AEB4E mov.w @(r0,Rm),Rn */
	IF(0x0C0AEB50u); r10 = MACL;  /* 0C0AEB50 sts macl,Rn */
	r0 = r2 & 0xFFFF;  /* 0C0AEB52 extu.w Rm,Rn */
	r10 += r0;  /* 0C0AEB54 add Rm,Rn */
	r0 = 0xC234C06u; UPD(0x0C0AEB58u, 4);  /* 0C0AEB56 mov.l @(disp,pc),Rn */
	r10 += r10;  /* 0C0AEB58 add Rm,Rn */
	IF(0x0C0AEB5Au); W16(r0 + r10, r11); UPD(0x0C0AEB5Cu, 2);  /* 0C0AEB5A mov.w Rm,@(r0,Rn) */
	r1 = (u32)(s32)(s8)R8(r8); UPD(0x0C0AEB5Eu, 1);  /* 0C0AEB5C mov.b @Rm,Rn */
	r7 &= r1;  /* 0C0AEB5E and Rm,Rn */
	r7 += r7;  /* 0C0AEB60 add Rm,Rn */
	r5 = r7;  /* 0C0AEB62 mov Rm,Rn */
	r5 += r12;  /* 0C0AEB64 add Rm,Rn */
	r6 = (u32)(s32)(s16)R16(r5); UPD(0x0C0AEB68u, 5);  /* 0C0AEB66 mov.w @Rm,Rn */
	r6 += 0x1u;  /* 0C0AEB68 add #imm,Rn */
	W16(r5, r6); UPD(0x0C0AEB6Cu, 2);  /* 0C0AEB6A mov.w Rm,@Rn */
L_0C0AEB6C: BLKS(0x0C0AEB6Cu);
	r6 = 0xB4u; UPD(0x0C0AEB6Eu, 1);  /* 0C0AEB6C mov.w @(disp,pc),Rn */
	r11 += 0x1u;  /* 0C0AEB6E add #imm,Rn */
	r9 += r6;  /* 0C0AEB70 add Rm,Rn */
	r6 += 0xBu;  /* 0C0AEB72 add #imm,Rn */
	T = (s32)r11 > (s32)r6;  /* 0C0AEB74 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0AEACCu, 7); goto L_0C0AEACC; }  /* 0C0AEB76 bf */
L_0C0AEB78: BLKS(0x0C0AEB78u);
	r15 = r14;  /* 0C0AEB78 mov Rm,Rn */
	IF(0x0C0AEB7Au); PR = R32(r15); r15 += 4; UPD(0x0C0AEB7Cu, 2);  /* 0C0AEB7A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AEB7Eu, 1);  /* 0C0AEB7C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0AEB80u, 1);  /* 0C0AEB7E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0AEB82u, 1);  /* 0C0AEB80 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0AEB84u, 1);  /* 0C0AEB82 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AEB86u, 1);  /* 0C0AEB84 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AEB88u, 1);  /* 0C0AEB86 mov.l @Rm+,Rn */
	IF(0x0C0AEB88u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AEB88 rts */
L_0C0AEB90: BLKS(0x0C0AEB90u);
	r0 = 0xADu; UPD(0x0C0AEB92u, 1);  /* 0C0AEB90 mov.w @(disp,pc),Rn */
	{ IF(0x0C0AEB94u); W8(r0 + r9, r2); /* slot mov.b Rm,@(r0,Rn) */ UPD(0x0C0AEB3Au, 3); goto L_0C0AEB3A; }  /* 0C0AEB92 bra */
}

/* FUN_0c0aee60 */
void blk_f_0C0AEE60(sh3_t *c)
{
	LOCALS;
L_0C0AEE60: BLKS(0x0C0AEE60u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AEE62u, 1);  /* 0C0AEE60 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AEE64u, 1);  /* 0C0AEE62 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AEE66u, 1);  /* 0C0AEE64 mov.l Rm,@-Rn */
	r2 = 0xB4u; UPD(0x0C0AEE68u, 1);  /* 0C0AEE66 mov.w @(disp,pc),Rn */
	r10 = (u32)(s32)(s16)r4;  /* 0C0AEE68 exts.w Rm,Rn */
	IF(0x0C0AEE6Au); MACL = r10 * r2;  /* 0C0AEE6A mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AEE6Eu, 4);  /* 0C0AEE6C mov.l Rm,@-Rn */
	r4 = 0x14u;  /* 0C0AEE6E mov #imm,Rn */
	r0 = 0xC286578u; UPD(0x0C0AEE72u, 2);  /* 0C0AEE70 mov.l @(disp,pc),Rn */
	IF(0x0C0AEE72u); r8 = MACL;  /* 0C0AEE72 sts macl,Rn */
	r9 = 0xB0u; UPD(0x0C0AEE76u, 2);  /* 0C0AEE74 mov.w @(disp,pc),Rn */
	r8 += r0;  /* 0C0AEE76 add Rm,Rn */
	IF(0x0C0AEE78u); r15 -= 4; W32(r15, PR); UPD(0x0C0AEE7Au, 2);  /* 0C0AEE78 sts.l pr,@-Rn */
	r9 += r8;  /* 0C0AEE7A add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C0AEE7Eu, 2);  /* 0C0AEE7C mov.b @Rm,Rn */
	r14 = r15;  /* 0C0AEE7E mov Rm,Rn */
	r7 = r0 & 0xFF;  /* 0C0AEE80 extu.b Rm,Rn */
	r0 = 0xC0BEE10u; UPD(0x0C0AEE84u, 3);  /* 0C0AEE82 mov.l @(disp,pc),Rn */
	r5 = R32(r8 + 0x24u); UPD(0x0C0AEE86u, 1);  /* 0C0AEE84 mov.l @(disp,Rm),Rn */
	IF(0x0C0AEE86u); { u32 t_ = r0; PR = 0x0C0AEE8Au; r6 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BEE10, 0x0C0BEE10u, 0x0C0AEE8Au); }  /* 0C0AEE86 jsr @Rn */
L_0C0AEE8A: BLKS(0x0C0AEE8Au);
	r0 = 0xC0C2360u; UPD(0x0C0AEE8Cu, 1);  /* 0C0AEE8A mov.l @(disp,pc),Rn */
	IF(0x0C0AEE8Cu); { u32 t_ = r0; PR = 0x0C0AEE90u; IF(0x0C0AEE8Eu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C0AEE90u); }  /* 0C0AEE8C jsr @Rn */
L_0C0AEE90: BLKS(0x0C0AEE90u);
	r0 &= 0x3u;  /* 0C0AEE90 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0AEE92 tst Rm,Rn */
	if (T) { UPD(0x0C0AEEE0u, 5); goto L_0C0AEEE0; }  /* 0C0AEE94 bt */
L_0C0AEE96: BLKS(0x0C0AEE96u);
	r7 = (u32)(s32)(s8)R8(r9); UPD(0x0C0AEE98u, 1);  /* 0C0AEE96 mov.b @Rm,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0AEE98 add #imm,Rn */
	r6 = r7 & 0xFF;  /* 0C0AEE9A extu.b Rm,Rn */
	W32(r15, r6); UPD(0x0C0AEE9Eu, 3);  /* 0C0AEE9C mov.l Rm,@Rn */
	r0 = r8;  /* 0C0AEE9E mov Rm,Rn */
	r5 = 0xA9u; UPD(0x0C0AEEA2u, 2);  /* 0C0AEEA0 mov.w @(disp,pc),Rn */
	IF(0x0C0AEEA2u); r4 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C0AEEA4u, 1);  /* 0C0AEEA2 mov.b @(r0,Rm),Rn */
	r3 = r4 & 0xFF;  /* 0C0AEEA4 extu.b Rm,Rn */
	W32(r15 + 0x4u, r3); UPD(0x0C0AEEA8u, 2);  /* 0C0AEEA6 mov.l Rm,@(disp,Rn) */
	r5 = 0xEu;  /* 0C0AEEA8 mov #imm,Rn */
	r4 = R32(r8); UPD(0x0C0AEEACu, 2);  /* 0C0AEEAA mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C0AEEAEu, 1);  /* 0C0AEEAC mov.l @(disp,Rm),Rn */
	r7 = R32(r8 + 0x28u); UPD(0x0C0AEEB0u, 1);  /* 0C0AEEAE mov.l @(disp,Rm),Rn */
	r0 = 0xC0BD6F0u; UPD(0x0C0AEEB2u, 1);  /* 0C0AEEB0 mov.l @(disp,pc),Rn */
L_0C0AEEB2: BLKS(0x0C0AEEB2u);
	IF(0x0C0AEEB2u); { u32 t_ = r0; PR = 0x0C0AEEB6u; IF(0x0C0AEEB4u); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C0AEEB6u); }  /* 0C0AEEB2 jsr @Rn */
L_0C0AEEB6: BLKS(0x0C0AEEB6u);
	r5 = 0xB4u; UPD(0x0C0AEEB8u, 1);  /* 0C0AEEB6 mov.w @(disp,pc),Rn */
	r15 += 0x8u;  /* 0C0AEEB8 add #imm,Rn */
	IF(0x0C0AEEBAu); MACL = r10 * r5;  /* 0C0AEEBA mul.l Rm,Rn */
	r8 = 0xC286578u; UPD(0x0C0AEEBEu, 4);  /* 0C0AEEBC mov.l @(disp,pc),Rn */
	IF(0x0C0AEEBEu); r0 = MACL;  /* 0C0AEEBE sts macl,Rn */
	r10 = 0x0u;  /* 0C0AEEC0 mov #imm,Rn */
	IF(0x0C0AEEC2u); W32(r0 + r8, r10); UPD(0x0C0AEEC4u, 3);  /* 0C0AEEC2 mov.l Rm,@(r0,Rn) */
	r15 = r14;  /* 0C0AEEC4 mov Rm,Rn */
	IF(0x0C0AEEC6u); PR = R32(r15); r15 += 4; UPD(0x0C0AEEC8u, 2);  /* 0C0AEEC6 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AEECAu, 1);  /* 0C0AEEC8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AEECCu, 1);  /* 0C0AEECA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AEECEu, 1);  /* 0C0AEECC mov.l @Rm+,Rn */
	IF(0x0C0AEECEu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AEECE rts */
L_0C0AEEE0: BLKS(0x0C0AEEE0u);
	r4 = (u32)(s32)(s8)R8(r9); UPD(0x0C0AEEE2u, 1);  /* 0C0AEEE0 mov.b @Rm,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0AEEE2 add #imm,Rn */
	r0 = r4 & 0xFF;  /* 0C0AEEE4 extu.b Rm,Rn */
	W32(r15, r0); UPD(0x0C0AEEE8u, 3);  /* 0C0AEEE6 mov.l Rm,@Rn */
	r5 = 0xEu;  /* 0C0AEEE8 mov #imm,Rn */
	r3 = 0xA9u; UPD(0x0C0AEEECu, 2);  /* 0C0AEEEA mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C0AEEEC mov Rm,Rn */
	IF(0x0C0AEEEEu); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0AEEF0u, 2);  /* 0C0AEEEE mov.b @(r0,Rm),Rn */
	r9 = r2 & 0xFF;  /* 0C0AEEF0 extu.b Rm,Rn */
	W32(r15 + 0x4u, r9); UPD(0x0C0AEEF4u, 2);  /* 0C0AEEF2 mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BFD30u; UPD(0x0C0AEEF6u, 1);  /* 0C0AEEF4 mov.l @(disp,pc),Rn */
	r4 = R32(r8); UPD(0x0C0AEEF8u, 1);  /* 0C0AEEF6 mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C0AEEFAu, 1);  /* 0C0AEEF8 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0AEEB2u, 3); goto L_0C0AEEB2; }  /* 0C0AEEFA bra */
}

void blk_f_0C0AEF20(sh3_t *c)
{
	LOCALS;
L_0C0AEF20: BLKS(0x0C0AEF20u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AEF22u, 1);  /* 0C0AEF20 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AEF24u, 1);  /* 0C0AEF22 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C0AEF24 exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AEF28u, 2);  /* 0C0AEF26 mov.l Rm,@-Rn */
	r4 = 0x6u;  /* 0C0AEF28 mov #imm,Rn */
	r9 = 0xC062780u; UPD(0x0C0AEF2Cu, 2);  /* 0C0AEF2A mov.l @(disp,pc),Rn */
	IF(0x0C0AEF2Cu); r15 -= 4; W32(r15, PR); UPD(0x0C0AEF2Eu, 1);  /* 0C0AEF2C sts.l pr,@-Rn */
	IF(0x0C0AEF2Eu); { u32 t_ = r9; PR = 0x0C0AEF32u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0AEF32u); }  /* 0C0AEF2E jsr @Rn */
L_0C0AEF32: BLKS(0x0C0AEF32u);
	r2 = r0;  /* 0C0AEF32 mov Rm,Rn */
	r0 = 0x4u;  /* 0C0AEF34 mov #imm,Rn */
	T = r2 > r0;  /* 0C0AEF36 cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C0AEF40u, 6); goto L_0C0AEF40; }  /* 0C0AEF38 bf */
L_0C0AEF3A: BLKS(0x0C0AEF3Au);
	r15 += 0xFFFFFFF8u;  /* 0C0AEF3A add #imm,Rn */
	{ IF(0x0C0AEF3Eu); ; /* slot nop */ UPD(0x0C0AF090u, 4); goto L_0C0AF090; }  /* 0C0AEF3C bra */
L_0C0AEF40: BLKS(0x0C0AEF40u);
	r0 = 0xC0AEF50u;  /* 0C0AEF40 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C0AEF42 add Rm,Rn */
	IF(0x0C0AEF44u); r3 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C0AEF46u, 3);  /* 0C0AEF44 mov.w @(r0,Rm),Rn */
	IF(0x0C0AEF46u); { u32 tv_ = (r3 + 0x0C0AEF4Au); u32 t_ = PHYS(tv_); IF(0x0C0AEF48u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0AEF60u: goto L_0C0AEF60; case 0x0C0AEFC0u: goto L_0C0AEFC0; case 0x0C0AEFF0u: goto L_0C0AEFF0; case 0x0C0AF030u: goto L_0C0AF030; case 0x0C0AF060u: goto L_0C0AF060; default: JUMPD(tv_); } }  /* 0C0AEF46 braf Rn */
L_0C0AEF60: BLKS(0x0C0AEF60u);
	r0 = 0xB4u; UPD(0x0C0AEF62u, 1);  /* 0C0AEF60 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0AEF62 add #imm,Rn */
	IF(0x0C0AEF64u); MACL = r8 * r0;  /* 0C0AEF64 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C0AEF68u, 4);  /* 0C0AEF66 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0AEF6Au, 1);  /* 0C0AEF68 mov.w @(disp,pc),Rn */
	IF(0x0C0AEF6Au); r3 = MACL;  /* 0C0AEF6A sts macl,Rn */
	r3 += r9;  /* 0C0AEF6C add Rm,Rn */
	IF(0x0C0AEF6Eu); r5 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0AEF70u, 3);  /* 0C0AEF6E mov.b @(r0,Rm),Rn */
	r4 = r5 & 0xFF;  /* 0C0AEF70 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C0AEF74u, 2);  /* 0C0AEF72 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0AEF74 add #imm,Rn */
	IF(0x0C0AEF76u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0AEF78u, 2);  /* 0C0AEF76 mov.b @(r0,Rm),Rn */
	r5 = 0x1u;  /* 0C0AEF78 mov #imm,Rn */
	r7 = r2 & 0xFF;  /* 0C0AEF7A extu.b Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C0AEF7Eu, 3);  /* 0C0AEF7C mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BFE70u; UPD(0x0C0AEF80u, 1);  /* 0C0AEF7E mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0AEF82u, 1);  /* 0C0AEF80 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0AEF84u, 1);  /* 0C0AEF82 mov.l @(disp,Rm),Rn */
	r7 = R32(r3 + 0x28u); UPD(0x0C0AEF86u, 1);  /* 0C0AEF84 mov.l @(disp,Rm),Rn */
	IF(0x0C0AEF86u); ;  /* 0C0AEF86 nop */
	UPD(0x0C0AEF88u, 1);
L_0C0AEF88: BLKS(0x0C0AEF88u);
	IF(0x0C0AEF88u); { u32 t_ = r0; PR = 0x0C0AEF8Cu; IF(0x0C0AEF8Au); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C0AEF8Cu); }  /* 0C0AEF88 jsr @Rn */
L_0C0AEF8C: BLKS(0x0C0AEF8Cu);
	r15 += 0x8u;  /* 0C0AEF8C add #imm,Rn */
	UPD(0x0C0AEF8Eu, 1);
L_0C0AEF8E: BLKS(0x0C0AEF8Eu);
	r4 = 0xB4u; UPD(0x0C0AEF90u, 1);  /* 0C0AEF8E mov.w @(disp,pc),Rn */
	IF(0x0C0AEF90u); MACL = r8 * r4;  /* 0C0AEF90 mul.l Rm,Rn */
	r0 = 0xA9u; UPD(0x0C0AEF94u, 3);  /* 0C0AEF92 mov.w @(disp,pc),Rn */
	IF(0x0C0AEF94u); r8 = MACL;  /* 0C0AEF94 sts macl,Rn */
	r8 += r9;  /* 0C0AEF96 add Rm,Rn */
	r9 = 0xC07DCE0u; UPD(0x0C0AEF9Au, 3);  /* 0C0AEF98 mov.l @(disp,pc),Rn */
	IF(0x0C0AEF9Au); r1 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0AEF9Cu, 1);  /* 0C0AEF9A mov.b @(r0,Rm),Rn */
	r4 = R32(r8); UPD(0x0C0AEF9Eu, 1);  /* 0C0AEF9C mov.l @Rm,Rn */
	r7 = r1 & 0xFF;  /* 0C0AEF9E extu.b Rm,Rn */
	r5 = R32(r8 + 0x24u); UPD(0x0C0AEFA2u, 2);  /* 0C0AEFA0 mov.l @(disp,Rm),Rn */
	IF(0x0C0AEFA2u); { u32 t_ = r9; PR = 0x0C0AEFA6u; r6 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07DCE0, 0x0C07DCE0u, 0x0C0AEFA6u); }  /* 0C0AEFA2 jsr @Rn */
L_0C0AEFA6: BLKS(0x0C0AEFA6u);
	r9 = 0x0u;  /* 0C0AEFA6 mov #imm,Rn */
	W32(r8, r9); UPD(0x0C0AEFAAu, 2);  /* 0C0AEFA8 mov.l Rm,@Rn */
	r15 = r14;  /* 0C0AEFAA mov Rm,Rn */
	IF(0x0C0AEFACu); PR = R32(r15); r15 += 4; UPD(0x0C0AEFAEu, 2);  /* 0C0AEFAC lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AEFB0u, 1);  /* 0C0AEFAE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AEFB2u, 1);  /* 0C0AEFB0 mov.l @Rm+,Rn */
	IF(0x0C0AEFB2u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AEFB2 rts */
L_0C0AEFC0: BLKS(0x0C0AEFC0u);
	r5 = 0xB4u; UPD(0x0C0AEFC2u, 1);  /* 0C0AEFC0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0AEFC2 add #imm,Rn */
	IF(0x0C0AEFC4u); MACL = r8 * r5;  /* 0C0AEFC4 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C0AEFC8u, 4);  /* 0C0AEFC6 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0AEFCAu, 1);  /* 0C0AEFC8 mov.w @(disp,pc),Rn */
	IF(0x0C0AEFCAu); r3 = MACL;  /* 0C0AEFCA sts macl,Rn */
	r3 += r9;  /* 0C0AEFCC add Rm,Rn */
	IF(0x0C0AEFCEu); r4 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0AEFD0u, 3);  /* 0C0AEFCE mov.b @(r0,Rm),Rn */
	r5 = 0x1u;  /* 0C0AEFD0 mov #imm,Rn */
	r2 = r4 & 0xFF;  /* 0C0AEFD2 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C0AEFD6u, 3);  /* 0C0AEFD4 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0AEFD6 add #imm,Rn */
	IF(0x0C0AEFD8u); r7 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0AEFDAu, 2);  /* 0C0AEFD8 mov.b @(r0,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C0AEFDA extu.b Rm,Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C0AEFDEu, 2);  /* 0C0AEFDC mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BECB0u; UPD(0x0C0AEFE0u, 1);  /* 0C0AEFDE mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0AEFE2u, 1);  /* 0C0AEFE0 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0AEFE4u, 1);  /* 0C0AEFE2 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0AEF88u, 3); goto L_0C0AEF88; }  /* 0C0AEFE4 bra */
L_0C0AEFF0: BLKS(0x0C0AEFF0u);
	r3 = 0xB4u; UPD(0x0C0AEFF2u, 1);  /* 0C0AEFF0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF0u;  /* 0C0AEFF2 add #imm,Rn */
	IF(0x0C0AEFF4u); MACL = r8 * r3;  /* 0C0AEFF4 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C0AEFF8u, 4);  /* 0C0AEFF6 mov.l @(disp,pc),Rn */
	IF(0x0C0AEFF8u); r3 = MACL;  /* 0C0AEFF8 sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C0AEFFCu, 2);  /* 0C0AEFFA mov.w @(disp,pc),Rn */
	r3 += r9;  /* 0C0AEFFC add Rm,Rn */
	IF(0x0C0AEFFEu); r5 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0AF000u, 2);  /* 0C0AEFFE mov.b @(r0,Rm),Rn */
	r4 = r5 & 0xFF;  /* 0C0AF000 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C0AF004u, 2);  /* 0C0AF002 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0AF004 add #imm,Rn */
	IF(0x0C0AF006u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0AF008u, 2);  /* 0C0AF006 mov.b @(r0,Rm),Rn */
	r5 = 0x1u;  /* 0C0AF008 mov #imm,Rn */
	r7 = r2 & 0xFF;  /* 0C0AF00A extu.b Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C0AF00Eu, 3);  /* 0C0AF00C mov.l Rm,@(disp,Rn) */
	r6 = R32(r3 + 0x2Cu); UPD(0x0C0AF010u, 1);  /* 0C0AF00E mov.l @(disp,Rm),Rn */
	W32(r15 + 0x8u, r6); UPD(0x0C0AF012u, 1);  /* 0C0AF010 mov.l Rm,@(disp,Rn) */
	r0 = R32(r3 + 0x30u); UPD(0x0C0AF014u, 1);  /* 0C0AF012 mov.l @(disp,Rm),Rn */
	W32(r15 + 0xCu, r0); UPD(0x0C0AF016u, 1);  /* 0C0AF014 mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BE860u; UPD(0x0C0AF018u, 1);  /* 0C0AF016 mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0AF01Au, 1);  /* 0C0AF018 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0AF01Cu, 1);  /* 0C0AF01A mov.l @(disp,Rm),Rn */
	IF(0x0C0AF01Cu); { u32 t_ = r0; PR = 0x0C0AF020u; r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BE860, 0x0C0BE860u, 0x0C0AF020u); }  /* 0C0AF01C jsr @Rn */
L_0C0AF020: BLKS(0x0C0AF020u);
	{ r15 += 0x10u; /* slot add #imm,Rn */ UPD(0x0C0AEF8Eu, 3); goto L_0C0AEF8E; }  /* 0C0AF020 bra */
L_0C0AF030: BLKS(0x0C0AF030u);
	r4 = 0xB4u; UPD(0x0C0AF032u, 1);  /* 0C0AF030 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0AF032 add #imm,Rn */
	IF(0x0C0AF034u); MACL = r8 * r4;  /* 0C0AF034 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C0AF038u, 4);  /* 0C0AF036 mov.l @(disp,pc),Rn */
	r5 = 0x1u;  /* 0C0AF038 mov #imm,Rn */
	r0 = 0xB0u; UPD(0x0C0AF03Cu, 2);  /* 0C0AF03A mov.w @(disp,pc),Rn */
	IF(0x0C0AF03Cu); r3 = MACL;  /* 0C0AF03C sts macl,Rn */
	r3 += r9;  /* 0C0AF03E add Rm,Rn */
	IF(0x0C0AF040u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0AF042u, 3);  /* 0C0AF040 mov.b @(r0,Rm),Rn */
	r7 = r2 & 0xFF;  /* 0C0AF042 extu.b Rm,Rn */
	W32(r15, r7); UPD(0x0C0AF046u, 2);  /* 0C0AF044 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0AF046 add #imm,Rn */
	IF(0x0C0AF048u); r6 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0AF04Au, 2);  /* 0C0AF048 mov.b @(r0,Rm),Rn */
	r0 = r6 & 0xFF;  /* 0C0AF04A extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0AF04Eu, 2);  /* 0C0AF04C mov.l Rm,@(disp,Rn) */
	r0 = 0xC0C0030u; UPD(0x0C0AF050u, 1);  /* 0C0AF04E mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0AF052u, 1);  /* 0C0AF050 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0AF054u, 1);  /* 0C0AF052 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0AEF88u, 3); goto L_0C0AEF88; }  /* 0C0AF054 bra */
L_0C0AF060: BLKS(0x0C0AF060u);
	r0 = 0xB4u; UPD(0x0C0AF062u, 1);  /* 0C0AF060 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0AF062 add #imm,Rn */
	IF(0x0C0AF064u); MACL = r8 * r0;  /* 0C0AF064 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C0AF068u, 4);  /* 0C0AF066 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0AF06Au, 1);  /* 0C0AF068 mov.w @(disp,pc),Rn */
	IF(0x0C0AF06Au); r3 = MACL;  /* 0C0AF06A sts macl,Rn */
	r3 += r9;  /* 0C0AF06C add Rm,Rn */
	IF(0x0C0AF06Eu); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0AF070u, 3);  /* 0C0AF06E mov.b @(r0,Rm),Rn */
	r7 = r2 & 0xFF;  /* 0C0AF070 extu.b Rm,Rn */
	W32(r15, r7); UPD(0x0C0AF074u, 2);  /* 0C0AF072 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0AF074 add #imm,Rn */
	IF(0x0C0AF076u); r6 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0AF078u, 2);  /* 0C0AF076 mov.b @(r0,Rm),Rn */
	r5 = r6 & 0xFF;  /* 0C0AF078 extu.b Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C0AF07Cu, 2);  /* 0C0AF07A mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BFD30u; UPD(0x0C0AF07Eu, 1);  /* 0C0AF07C mov.l @(disp,pc),Rn */
	r5 = 0x1u;  /* 0C0AF07E mov #imm,Rn */
	r4 = R32(r3); UPD(0x0C0AF082u, 2);  /* 0C0AF080 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0AF084u, 1);  /* 0C0AF082 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0AEF88u, 3); goto L_0C0AEF88; }  /* 0C0AF084 bra */
L_0C0AF090: BLKS(0x0C0AF090u);
	r6 = 0xB4u; UPD(0x0C0AF092u, 1);  /* 0C0AF090 mov.w @(disp,pc),Rn */
	IF(0x0C0AF092u); MACL = r8 * r6;  /* 0C0AF092 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C0AF096u, 3);  /* 0C0AF094 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0AF098u, 1);  /* 0C0AF096 mov.w @(disp,pc),Rn */
	IF(0x0C0AF098u); r3 = MACL;  /* 0C0AF098 sts macl,Rn */
	r3 += r9;  /* 0C0AF09A add Rm,Rn */
	IF(0x0C0AF09Cu); r5 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0AF09Eu, 3);  /* 0C0AF09C mov.b @(r0,Rm),Rn */
	r4 = r5 & 0xFF;  /* 0C0AF09E extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C0AF0A2u, 2);  /* 0C0AF0A0 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0AF0A2 add #imm,Rn */
	IF(0x0C0AF0A4u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0AF0A6u, 2);  /* 0C0AF0A4 mov.b @(r0,Rm),Rn */
	r5 = 0x1u;  /* 0C0AF0A6 mov #imm,Rn */
	r0 = r2 & 0xFF;  /* 0C0AF0A8 extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0AF0ACu, 3);  /* 0C0AF0AA mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BD6F0u; UPD(0x0C0AF0AEu, 1);  /* 0C0AF0AC mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0AF0B0u, 1);  /* 0C0AF0AE mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0AF0B2u, 1);  /* 0C0AF0B0 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0AEF88u, 3); goto L_0C0AEF88; }  /* 0C0AF0B2 bra */
}

/* FUN_0c0af0e0 */
void blk_f_0C0AF0E0(sh3_t *c)
{
	LOCALS;
L_0C0AF0E0: BLKS(0x0C0AF0E0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF0E2u, 1);  /* 0C0AF0E0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF0E4u, 1);  /* 0C0AF0E2 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C0AF0E4 exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF0E8u, 2);  /* 0C0AF0E6 mov.l Rm,@-Rn */
	r4 = 0x6u;  /* 0C0AF0E8 mov #imm,Rn */
	r9 = 0xC062780u; UPD(0x0C0AF0ECu, 2);  /* 0C0AF0EA mov.l @(disp,pc),Rn */
	IF(0x0C0AF0ECu); r15 -= 4; W32(r15, PR); UPD(0x0C0AF0EEu, 1);  /* 0C0AF0EC sts.l pr,@-Rn */
	IF(0x0C0AF0EEu); { u32 t_ = r9; PR = 0x0C0AF0F2u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0AF0F2u); }  /* 0C0AF0EE jsr @Rn */
L_0C0AF0F2: BLKS(0x0C0AF0F2u);
	r2 = r0;  /* 0C0AF0F2 mov Rm,Rn */
	r0 = 0x4u;  /* 0C0AF0F4 mov #imm,Rn */
	T = r2 > r0;  /* 0C0AF0F6 cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C0AF100u, 6); goto L_0C0AF100; }  /* 0C0AF0F8 bf */
L_0C0AF0FA: BLKS(0x0C0AF0FAu);
	r15 += 0xFFFFFFF8u;  /* 0C0AF0FA add #imm,Rn */
	{ IF(0x0C0AF0FEu); ; /* slot nop */ UPD(0x0C0AF250u, 4); goto L_0C0AF250; }  /* 0C0AF0FC bra */
L_0C0AF100: BLKS(0x0C0AF100u);
	r0 = 0xC0AF110u;  /* 0C0AF100 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C0AF102 add Rm,Rn */
	IF(0x0C0AF104u); r3 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C0AF106u, 3);  /* 0C0AF104 mov.w @(r0,Rm),Rn */
	IF(0x0C0AF106u); { u32 tv_ = (r3 + 0x0C0AF10Au); u32 t_ = PHYS(tv_); IF(0x0C0AF108u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0AF120u: goto L_0C0AF120; case 0x0C0AF180u: goto L_0C0AF180; case 0x0C0AF1B0u: goto L_0C0AF1B0; case 0x0C0AF1F0u: goto L_0C0AF1F0; case 0x0C0AF220u: goto L_0C0AF220; default: JUMPD(tv_); } }  /* 0C0AF106 braf Rn */
L_0C0AF120: BLKS(0x0C0AF120u);
	r0 = 0xB4u; UPD(0x0C0AF122u, 1);  /* 0C0AF120 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0AF122 add #imm,Rn */
	IF(0x0C0AF124u); MACL = r8 * r0;  /* 0C0AF124 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C0AF128u, 4);  /* 0C0AF126 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0AF12Au, 1);  /* 0C0AF128 mov.w @(disp,pc),Rn */
	IF(0x0C0AF12Au); r3 = MACL;  /* 0C0AF12A sts macl,Rn */
	r3 += r9;  /* 0C0AF12C add Rm,Rn */
	IF(0x0C0AF12Eu); r5 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0AF130u, 3);  /* 0C0AF12E mov.b @(r0,Rm),Rn */
	r4 = r5 & 0xFF;  /* 0C0AF130 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C0AF134u, 2);  /* 0C0AF132 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0AF134 add #imm,Rn */
	IF(0x0C0AF136u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0AF138u, 2);  /* 0C0AF136 mov.b @(r0,Rm),Rn */
	r5 = 0x6u;  /* 0C0AF138 mov #imm,Rn */
	r7 = r2 & 0xFF;  /* 0C0AF13A extu.b Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C0AF13Eu, 3);  /* 0C0AF13C mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BFE70u; UPD(0x0C0AF140u, 1);  /* 0C0AF13E mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0AF142u, 1);  /* 0C0AF140 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0AF144u, 1);  /* 0C0AF142 mov.l @(disp,Rm),Rn */
	r7 = R32(r3 + 0x28u); UPD(0x0C0AF146u, 1);  /* 0C0AF144 mov.l @(disp,Rm),Rn */
	IF(0x0C0AF146u); ;  /* 0C0AF146 nop */
	UPD(0x0C0AF148u, 1);
L_0C0AF148: BLKS(0x0C0AF148u);
	IF(0x0C0AF148u); { u32 t_ = r0; PR = 0x0C0AF14Cu; IF(0x0C0AF14Au); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C0AF14Cu); }  /* 0C0AF148 jsr @Rn */
L_0C0AF14C: BLKS(0x0C0AF14Cu);
	r15 += 0x8u;  /* 0C0AF14C add #imm,Rn */
	UPD(0x0C0AF14Eu, 1);
L_0C0AF14E: BLKS(0x0C0AF14Eu);
	r4 = 0xB4u; UPD(0x0C0AF150u, 1);  /* 0C0AF14E mov.w @(disp,pc),Rn */
	IF(0x0C0AF150u); MACL = r8 * r4;  /* 0C0AF150 mul.l Rm,Rn */
	r0 = 0xA9u; UPD(0x0C0AF154u, 3);  /* 0C0AF152 mov.w @(disp,pc),Rn */
	IF(0x0C0AF154u); r8 = MACL;  /* 0C0AF154 sts macl,Rn */
	r8 += r9;  /* 0C0AF156 add Rm,Rn */
	r9 = 0xC07DCE0u; UPD(0x0C0AF15Au, 3);  /* 0C0AF158 mov.l @(disp,pc),Rn */
	IF(0x0C0AF15Au); r1 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0AF15Cu, 1);  /* 0C0AF15A mov.b @(r0,Rm),Rn */
	r4 = R32(r8); UPD(0x0C0AF15Eu, 1);  /* 0C0AF15C mov.l @Rm,Rn */
	r7 = r1 & 0xFF;  /* 0C0AF15E extu.b Rm,Rn */
	r5 = R32(r8 + 0x24u); UPD(0x0C0AF162u, 2);  /* 0C0AF160 mov.l @(disp,Rm),Rn */
	IF(0x0C0AF162u); { u32 t_ = r9; PR = 0x0C0AF166u; r6 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07DCE0, 0x0C07DCE0u, 0x0C0AF166u); }  /* 0C0AF162 jsr @Rn */
L_0C0AF166: BLKS(0x0C0AF166u);
	r9 = 0x0u;  /* 0C0AF166 mov #imm,Rn */
	W32(r8, r9); UPD(0x0C0AF16Au, 2);  /* 0C0AF168 mov.l Rm,@Rn */
	r15 = r14;  /* 0C0AF16A mov Rm,Rn */
	IF(0x0C0AF16Cu); PR = R32(r15); r15 += 4; UPD(0x0C0AF16Eu, 2);  /* 0C0AF16C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AF170u, 1);  /* 0C0AF16E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AF172u, 1);  /* 0C0AF170 mov.l @Rm+,Rn */
	IF(0x0C0AF172u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AF172 rts */
L_0C0AF180: BLKS(0x0C0AF180u);
	r5 = 0xB4u; UPD(0x0C0AF182u, 1);  /* 0C0AF180 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0AF182 add #imm,Rn */
	IF(0x0C0AF184u); MACL = r8 * r5;  /* 0C0AF184 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C0AF188u, 4);  /* 0C0AF186 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0AF18Au, 1);  /* 0C0AF188 mov.w @(disp,pc),Rn */
	IF(0x0C0AF18Au); r3 = MACL;  /* 0C0AF18A sts macl,Rn */
	r3 += r9;  /* 0C0AF18C add Rm,Rn */
	IF(0x0C0AF18Eu); r4 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0AF190u, 3);  /* 0C0AF18E mov.b @(r0,Rm),Rn */
	r5 = 0x6u;  /* 0C0AF190 mov #imm,Rn */
	r2 = r4 & 0xFF;  /* 0C0AF192 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C0AF196u, 3);  /* 0C0AF194 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0AF196 add #imm,Rn */
	IF(0x0C0AF198u); r7 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0AF19Au, 2);  /* 0C0AF198 mov.b @(r0,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C0AF19A extu.b Rm,Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C0AF19Eu, 2);  /* 0C0AF19C mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BECB0u; UPD(0x0C0AF1A0u, 1);  /* 0C0AF19E mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0AF1A2u, 1);  /* 0C0AF1A0 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0AF1A4u, 1);  /* 0C0AF1A2 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0AF148u, 3); goto L_0C0AF148; }  /* 0C0AF1A4 bra */
L_0C0AF1B0: BLKS(0x0C0AF1B0u);
	r3 = 0xB4u; UPD(0x0C0AF1B2u, 1);  /* 0C0AF1B0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF0u;  /* 0C0AF1B2 add #imm,Rn */
	IF(0x0C0AF1B4u); MACL = r8 * r3;  /* 0C0AF1B4 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C0AF1B8u, 4);  /* 0C0AF1B6 mov.l @(disp,pc),Rn */
	IF(0x0C0AF1B8u); r3 = MACL;  /* 0C0AF1B8 sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C0AF1BCu, 2);  /* 0C0AF1BA mov.w @(disp,pc),Rn */
	r3 += r9;  /* 0C0AF1BC add Rm,Rn */
	IF(0x0C0AF1BEu); r5 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0AF1C0u, 2);  /* 0C0AF1BE mov.b @(r0,Rm),Rn */
	r4 = r5 & 0xFF;  /* 0C0AF1C0 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C0AF1C4u, 2);  /* 0C0AF1C2 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0AF1C4 add #imm,Rn */
	IF(0x0C0AF1C6u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0AF1C8u, 2);  /* 0C0AF1C6 mov.b @(r0,Rm),Rn */
	r5 = 0x6u;  /* 0C0AF1C8 mov #imm,Rn */
	r7 = r2 & 0xFF;  /* 0C0AF1CA extu.b Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C0AF1CEu, 3);  /* 0C0AF1CC mov.l Rm,@(disp,Rn) */
	r6 = R32(r3 + 0x2Cu); UPD(0x0C0AF1D0u, 1);  /* 0C0AF1CE mov.l @(disp,Rm),Rn */
	W32(r15 + 0x8u, r6); UPD(0x0C0AF1D2u, 1);  /* 0C0AF1D0 mov.l Rm,@(disp,Rn) */
	r0 = R32(r3 + 0x30u); UPD(0x0C0AF1D4u, 1);  /* 0C0AF1D2 mov.l @(disp,Rm),Rn */
	W32(r15 + 0xCu, r0); UPD(0x0C0AF1D6u, 1);  /* 0C0AF1D4 mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BE860u; UPD(0x0C0AF1D8u, 1);  /* 0C0AF1D6 mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0AF1DAu, 1);  /* 0C0AF1D8 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0AF1DCu, 1);  /* 0C0AF1DA mov.l @(disp,Rm),Rn */
	IF(0x0C0AF1DCu); { u32 t_ = r0; PR = 0x0C0AF1E0u; r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BE860, 0x0C0BE860u, 0x0C0AF1E0u); }  /* 0C0AF1DC jsr @Rn */
L_0C0AF1E0: BLKS(0x0C0AF1E0u);
	{ r15 += 0x10u; /* slot add #imm,Rn */ UPD(0x0C0AF14Eu, 3); goto L_0C0AF14E; }  /* 0C0AF1E0 bra */
L_0C0AF1F0: BLKS(0x0C0AF1F0u);
	r4 = 0xB4u; UPD(0x0C0AF1F2u, 1);  /* 0C0AF1F0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0AF1F2 add #imm,Rn */
	IF(0x0C0AF1F4u); MACL = r8 * r4;  /* 0C0AF1F4 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C0AF1F8u, 4);  /* 0C0AF1F6 mov.l @(disp,pc),Rn */
	r5 = 0x5u;  /* 0C0AF1F8 mov #imm,Rn */
	r0 = 0xB0u; UPD(0x0C0AF1FCu, 2);  /* 0C0AF1FA mov.w @(disp,pc),Rn */
	IF(0x0C0AF1FCu); r3 = MACL;  /* 0C0AF1FC sts macl,Rn */
	r3 += r9;  /* 0C0AF1FE add Rm,Rn */
	IF(0x0C0AF200u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0AF202u, 3);  /* 0C0AF200 mov.b @(r0,Rm),Rn */
	r7 = r2 & 0xFF;  /* 0C0AF202 extu.b Rm,Rn */
	W32(r15, r7); UPD(0x0C0AF206u, 2);  /* 0C0AF204 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0AF206 add #imm,Rn */
	IF(0x0C0AF208u); r6 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0AF20Au, 2);  /* 0C0AF208 mov.b @(r0,Rm),Rn */
	r0 = r6 & 0xFF;  /* 0C0AF20A extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0AF20Eu, 2);  /* 0C0AF20C mov.l Rm,@(disp,Rn) */
	r0 = 0xC0C0030u; UPD(0x0C0AF210u, 1);  /* 0C0AF20E mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0AF212u, 1);  /* 0C0AF210 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0AF214u, 1);  /* 0C0AF212 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0AF148u, 3); goto L_0C0AF148; }  /* 0C0AF214 bra */
L_0C0AF220: BLKS(0x0C0AF220u);
	r0 = 0xB4u; UPD(0x0C0AF222u, 1);  /* 0C0AF220 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0AF222 add #imm,Rn */
	IF(0x0C0AF224u); MACL = r8 * r0;  /* 0C0AF224 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C0AF228u, 4);  /* 0C0AF226 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0AF22Au, 1);  /* 0C0AF228 mov.w @(disp,pc),Rn */
	IF(0x0C0AF22Au); r3 = MACL;  /* 0C0AF22A sts macl,Rn */
	r3 += r9;  /* 0C0AF22C add Rm,Rn */
	IF(0x0C0AF22Eu); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0AF230u, 3);  /* 0C0AF22E mov.b @(r0,Rm),Rn */
	r7 = r2 & 0xFF;  /* 0C0AF230 extu.b Rm,Rn */
	W32(r15, r7); UPD(0x0C0AF234u, 2);  /* 0C0AF232 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0AF234 add #imm,Rn */
	IF(0x0C0AF236u); r6 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0AF238u, 2);  /* 0C0AF236 mov.b @(r0,Rm),Rn */
	r5 = r6 & 0xFF;  /* 0C0AF238 extu.b Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C0AF23Cu, 2);  /* 0C0AF23A mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BFD30u; UPD(0x0C0AF23Eu, 1);  /* 0C0AF23C mov.l @(disp,pc),Rn */
	r5 = 0x5u;  /* 0C0AF23E mov #imm,Rn */
	r4 = R32(r3); UPD(0x0C0AF242u, 2);  /* 0C0AF240 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0AF244u, 1);  /* 0C0AF242 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0AF148u, 3); goto L_0C0AF148; }  /* 0C0AF244 bra */
L_0C0AF250: BLKS(0x0C0AF250u);
	r6 = 0xB4u; UPD(0x0C0AF252u, 1);  /* 0C0AF250 mov.w @(disp,pc),Rn */
	IF(0x0C0AF252u); MACL = r8 * r6;  /* 0C0AF252 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C0AF256u, 3);  /* 0C0AF254 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0AF258u, 1);  /* 0C0AF256 mov.w @(disp,pc),Rn */
	IF(0x0C0AF258u); r3 = MACL;  /* 0C0AF258 sts macl,Rn */
	r3 += r9;  /* 0C0AF25A add Rm,Rn */
	IF(0x0C0AF25Cu); r5 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0AF25Eu, 3);  /* 0C0AF25C mov.b @(r0,Rm),Rn */
	r4 = r5 & 0xFF;  /* 0C0AF25E extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C0AF262u, 2);  /* 0C0AF260 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0AF262 add #imm,Rn */
	IF(0x0C0AF264u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0AF266u, 2);  /* 0C0AF264 mov.b @(r0,Rm),Rn */
	r5 = 0x6u;  /* 0C0AF266 mov #imm,Rn */
	r0 = r2 & 0xFF;  /* 0C0AF268 extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0AF26Cu, 3);  /* 0C0AF26A mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BD6F0u; UPD(0x0C0AF26Eu, 1);  /* 0C0AF26C mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0AF270u, 1);  /* 0C0AF26E mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0AF272u, 1);  /* 0C0AF270 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0AF148u, 3); goto L_0C0AF148; }  /* 0C0AF272 bra */
}

void blk_f_0C0AF2A0(sh3_t *c)
{
	LOCALS;
L_0C0AF2A0: BLKS(0x0C0AF2A0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF2A2u, 1);  /* 0C0AF2A0 mov.l Rm,@-Rn */
	r0 = 0x0u;  /* 0C0AF2A2 mov #imm,Rn */
	r14 = r15;  /* 0C0AF2A4 mov Rm,Rn */
	r15 = r14;  /* 0C0AF2A6 mov Rm,Rn */
	IF(0x0C0AF2A8u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 6); RET(t_); }  /* 0C0AF2A8 rts */
}

void blk_f_0C0AF2B0(sh3_t *c)
{
	LOCALS;
L_0C0AF2B0: BLKS(0x0C0AF2B0u);
	r6 = 0xB4u; UPD(0x0C0AF2B2u, 1);  /* 0C0AF2B0 mov.w @(disp,pc),Rn */
	r1 = (u32)(s32)(s16)r4;  /* 0C0AF2B2 exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF2B6u, 2);  /* 0C0AF2B4 mov.l Rm,@-Rn */
	IF(0x0C0AF2B6u); MACL = r1 * r6;  /* 0C0AF2B6 mul.l Rm,Rn */
	r4 = 0xC2B1A3Cu; UPD(0x0C0AF2BAu, 3);  /* 0C0AF2B8 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0AF2BA mov Rm,Rn */
	r5 = R32(r4); UPD(0x0C0AF2BEu, 2);  /* 0C0AF2BC mov.l @Rm,Rn */
	IF(0x0C0AF2BEu); r2 = MACL;  /* 0C0AF2BE sts macl,Rn */
	r0 = 0xC286578u; UPD(0x0C0AF2C2u, 2);  /* 0C0AF2C0 mov.l @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r3 = v_; } UPD(0x0C0AF2C4u, 1);  /* 0C0AF2C2 mov.w @Rm+,Rn */
	r2 += r0;  /* 0C0AF2C4 add Rm,Rn */
	r0 = 0x94u; UPD(0x0C0AF2C8u, 2);  /* 0C0AF2C6 mov.w @(disp,pc),Rn */
	IF(0x0C0AF2C8u); r3 <<= 8;  /* 0C0AF2C8 shll8 Rn */
	IF(0x0C0AF2CAu); W32(r0 + r2, r3); UPD(0x0C0AF2CCu, 2);  /* 0C0AF2CA mov.l Rm,@(r0,Rn) */
	r0 += 0xFFFFFFF8u;  /* 0C0AF2CC add #imm,Rn */
	IF(0x0C0AF2CEu); W32(r0 + r2, r3); UPD(0x0C0AF2D0u, 2);  /* 0C0AF2CE mov.l Rm,@(r0,Rn) */
	W32(r4, r5); UPD(0x0C0AF2D2u, 1);  /* 0C0AF2D0 mov.l Rm,@Rn */
	r0 = 0x1u;  /* 0C0AF2D2 mov #imm,Rn */
	r15 = r14;  /* 0C0AF2D4 mov Rm,Rn */
	IF(0x0C0AF2D6u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C0AF2D6 rts */
}

void blk_f_0C0AF2F0(sh3_t *c)
{
	LOCALS;
L_0C0AF2F0: BLKS(0x0C0AF2F0u);
	r2 = 0xB4u; UPD(0x0C0AF2F2u, 1);  /* 0C0AF2F0 mov.w @(disp,pc),Rn */
	r3 = (u32)(s32)(s16)r4;  /* 0C0AF2F2 exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF2F6u, 2);  /* 0C0AF2F4 mov.l Rm,@-Rn */
	IF(0x0C0AF2F6u); MACL = r3 * r2;  /* 0C0AF2F6 mul.l Rm,Rn */
	r4 = 0xC2B1A3Cu; UPD(0x0C0AF2FAu, 3);  /* 0C0AF2F8 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0AF2FA mov Rm,Rn */
	r5 = R32(r4); UPD(0x0C0AF2FEu, 2);  /* 0C0AF2FC mov.l @Rm,Rn */
	IF(0x0C0AF2FEu); r0 = MACL;  /* 0C0AF2FE sts macl,Rn */
	r6 = 0xC286578u; UPD(0x0C0AF302u, 2);  /* 0C0AF300 mov.l @(disp,pc),Rn */
	r5 += 0x1u;  /* 0C0AF302 add #imm,Rn */
	r6 += r0;  /* 0C0AF304 add Rm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r5); r5 += 1; r1 = v_; } UPD(0x0C0AF308u, 3);  /* 0C0AF306 mov.b @Rm+,Rn */
	r0 = 0xAAu; UPD(0x0C0AF30Au, 1);  /* 0C0AF308 mov.w @(disp,pc),Rn */
	IF(0x0C0AF30Au); W8(r0 + r6, r1); UPD(0x0C0AF30Cu, 1);  /* 0C0AF30A mov.b Rm,@(r0,Rn) */
	W32(r4, r5); UPD(0x0C0AF30Eu, 1);  /* 0C0AF30C mov.l Rm,@Rn */
	r0 = 0x1u;  /* 0C0AF30E mov #imm,Rn */
	r15 = r14;  /* 0C0AF310 mov Rm,Rn */
	IF(0x0C0AF312u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C0AF312 rts */
}

void blk_f_0C0AF330(sh3_t *c)
{
	LOCALS;
L_0C0AF330: BLKS(0x0C0AF330u);
	r3 = 0xB4u; UPD(0x0C0AF332u, 1);  /* 0C0AF330 mov.w @(disp,pc),Rn */
	r6 = (u32)(s32)(s16)r4;  /* 0C0AF332 exts.w Rm,Rn */
	IF(0x0C0AF334u); MACL = r6 * r3;  /* 0C0AF334 mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C0AF338u, 4);  /* 0C0AF336 mov.l @(disp,pc),Rn */
	IF(0x0C0AF338u); r5 = MACL;  /* 0C0AF338 sts macl,Rn */
	r0 = 0xA8u; UPD(0x0C0AF33Cu, 2);  /* 0C0AF33A mov.w @(disp,pc),Rn */
	r5 += r2;  /* 0C0AF33C add Rm,Rn */
	r5 += r0;  /* 0C0AF33E add Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF342u, 3);  /* 0C0AF340 mov.l Rm,@-Rn */
	r5 += 0x2u;  /* 0C0AF342 add #imm,Rn */
	r0 = 0xC2B1A3Cu; UPD(0x0C0AF346u, 2);  /* 0C0AF344 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0AF346 mov Rm,Rn */
	r4 = R32(r0); UPD(0x0C0AF34Au, 2);  /* 0C0AF348 mov.l @Rm,Rn */
	r4 += 0x1u;  /* 0C0AF34A add #imm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r4); r4 += 1; r1 = v_; } UPD(0x0C0AF34Eu, 2);  /* 0C0AF34C mov.b @Rm+,Rn */
	W8(r5, r1); UPD(0x0C0AF350u, 1);  /* 0C0AF34E mov.b Rm,@Rn */
	{ u32 v_ = r1; r5 -= 1; W8(r5, v_); } UPD(0x0C0AF352u, 1);  /* 0C0AF350 mov.b Rm,@-Rn */
	W32(r0, r4); UPD(0x0C0AF354u, 1);  /* 0C0AF352 mov.l Rm,@Rn */
	r0 = 0x1u;  /* 0C0AF354 mov #imm,Rn */
	r15 = r14;  /* 0C0AF356 mov Rm,Rn */
	IF(0x0C0AF358u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C0AF358 rts */
}

void blk_f_0C0AF370(sh3_t *c)
{
	LOCALS;
L_0C0AF370: BLKS(0x0C0AF370u);
	r6 = (u32)(s32)(s16)r4;  /* 0C0AF370 exts.w Rm,Rn */
	r0 = 0xB4u; UPD(0x0C0AF374u, 2);  /* 0C0AF372 mov.w @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF376u, 1);  /* 0C0AF374 mov.l Rm,@-Rn */
	IF(0x0C0AF376u); MACL = r6 * r0;  /* 0C0AF376 mul.l Rm,Rn */
	r4 = 0xC2B1A3Cu; UPD(0x0C0AF37Au, 3);  /* 0C0AF378 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0AF37A mov Rm,Rn */
	r5 = R32(r4); UPD(0x0C0AF37Eu, 2);  /* 0C0AF37C mov.l @Rm,Rn */
	IF(0x0C0AF37Eu); r0 = MACL;  /* 0C0AF37E sts macl,Rn */
	r3 = 0xC286578u; UPD(0x0C0AF382u, 2);  /* 0C0AF380 mov.l @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r1 = v_; } UPD(0x0C0AF384u, 1);  /* 0C0AF382 mov.w @Rm+,Rn */
	r0 += r3;  /* 0C0AF384 add Rm,Rn */
	r2 = 0x8Au; UPD(0x0C0AF388u, 2);  /* 0C0AF386 mov.w @(disp,pc),Rn */
	IF(0x0C0AF388u); W16(r0 + r2, r1); UPD(0x0C0AF38Au, 1);  /* 0C0AF388 mov.w Rm,@(r0,Rn) */
	r2 += 0xFFFFFFFCu;  /* 0C0AF38A add #imm,Rn */
	IF(0x0C0AF38Cu); W16(r0 + r2, r1); UPD(0x0C0AF38Eu, 2);  /* 0C0AF38C mov.w Rm,@(r0,Rn) */
	W32(r4, r5); UPD(0x0C0AF390u, 1);  /* 0C0AF38E mov.l Rm,@Rn */
	r0 = 0x1u;  /* 0C0AF390 mov #imm,Rn */
	r15 = r14;  /* 0C0AF392 mov Rm,Rn */
	IF(0x0C0AF394u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C0AF394 rts */
}

void blk_f_0C0AF3B0(sh3_t *c)
{
	LOCALS;
L_0C0AF3B0: BLKS(0x0C0AF3B0u);
	r0 = (u32)(s32)(s16)r4;  /* 0C0AF3B0 exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF3B4u, 2);  /* 0C0AF3B2 mov.l Rm,@-Rn */
	r4 = 0xC2B1A3Cu; UPD(0x0C0AF3B6u, 1);  /* 0C0AF3B4 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0AF3B6 mov Rm,Rn */
	r3 = 0xB4u; UPD(0x0C0AF3BAu, 2);  /* 0C0AF3B8 mov.w @(disp,pc),Rn */
	r7 = R32(r4); UPD(0x0C0AF3BCu, 1);  /* 0C0AF3BA mov.l @Rm,Rn */
	IF(0x0C0AF3BCu); MACL = r0 * r3;  /* 0C0AF3BC mul.l Rm,Rn */
	r7 += 0x1u;  /* 0C0AF3BE add #imm,Rn */
	r2 = 0xC286578u; UPD(0x0C0AF3C2u, 4);  /* 0C0AF3C0 mov.l @(disp,pc),Rn */
	IF(0x0C0AF3C2u); r6 = MACL;  /* 0C0AF3C2 sts macl,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r7); r7 += 1; r5 = v_; } UPD(0x0C0AF3C6u, 2);  /* 0C0AF3C4 mov.b @Rm+,Rn */
	r6 += r2;  /* 0C0AF3C6 add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0AF3CAu, 2);  /* 0C0AF3C8 mov.w @(disp,pc),Rn */
	r1 = r5 & 0xFF;  /* 0C0AF3CA extu.b Rm,Rn */
	IF(0x0C0AF3CCu); W8(r0 + r6, r5); UPD(0x0C0AF3CEu, 2);  /* 0C0AF3CC mov.b Rm,@(r0,Rn) */
	r0 = 0x4Cu;  /* 0C0AF3CE mov #imm,Rn */
	IF(0x0C0AF3D0u); MACL = r1 * r0;  /* 0C0AF3D0 mul.l Rm,Rn */
	W32(r4, r7); UPD(0x0C0AF3D4u, 4);  /* 0C0AF3D2 mov.l Rm,@Rn */
	r0 = 0xC28635Au; UPD(0x0C0AF3D6u, 1);  /* 0C0AF3D4 mov.l @(disp,pc),Rn */
	IF(0x0C0AF3D6u); r3 = MACL;  /* 0C0AF3D6 sts macl,Rn */
	r4 = 0xA8u; UPD(0x0C0AF3DAu, 2);  /* 0C0AF3D8 mov.w @(disp,pc),Rn */
	IF(0x0C0AF3DAu); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0AF3DCu, 1);  /* 0C0AF3DA mov.b @(r0,Rm),Rn */
	r4 += r6;  /* 0C0AF3DC add Rm,Rn */
	r4 += 0x2u;  /* 0C0AF3DE add #imm,Rn */
	W8(r4, r2); UPD(0x0C0AF3E2u, 3);  /* 0C0AF3E0 mov.b Rm,@Rn */
	r0 = 0x1u;  /* 0C0AF3E2 mov #imm,Rn */
	{ u32 v_ = r2; r4 -= 1; W8(r4, v_); } UPD(0x0C0AF3E6u, 2);  /* 0C0AF3E4 mov.b Rm,@-Rn */
	r15 = r14;  /* 0C0AF3E6 mov Rm,Rn */
	IF(0x0C0AF3E8u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0AF3E8 rts */
}

void blk_f_0C0AF400(sh3_t *c)
{
	LOCALS;
L_0C0AF400: BLKS(0x0C0AF400u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF402u, 1);  /* 0C0AF400 mov.l Rm,@-Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C0AF402 exts.w Rm,Rn */
	r3 = 0xC2B1A3Cu; UPD(0x0C0AF406u, 2);  /* 0C0AF404 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0AF406 mov Rm,Rn */
	r6 = R32(r3); UPD(0x0C0AF40Au, 2);  /* 0C0AF408 mov.l @Rm,Rn */
	r2 = 0xB4u; UPD(0x0C0AF40Cu, 1);  /* 0C0AF40A mov.w @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r6); r6 += 2; r5 = v_; } UPD(0x0C0AF40Eu, 1);  /* 0C0AF40C mov.w @Rm+,Rn */
	IF(0x0C0AF40Eu); MACL = r4 * r2;  /* 0C0AF40E mul.l Rm,Rn */
	W32(r3, r6); UPD(0x0C0AF412u, 3);  /* 0C0AF410 mov.l Rm,@Rn */
	r0 = 0xC286578u; UPD(0x0C0AF414u, 1);  /* 0C0AF412 mov.l @(disp,pc),Rn */
	IF(0x0C0AF414u); r3 = MACL;  /* 0C0AF414 sts macl,Rn */
	r3 += r0;  /* 0C0AF416 add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0AF41Au, 3);  /* 0C0AF418 mov.w @(disp,pc),Rn */
	IF(0x0C0AF41Au); r7 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0AF41Cu, 1);  /* 0C0AF41A mov.b @(r0,Rm),Rn */
	r0 = R32(r3); UPD(0x0C0AF41Eu, 1);  /* 0C0AF41C mov.l @Rm,Rn */
	r0 &= 0x10u;  /* 0C0AF41E and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0AF420 tst Rm,Rn */
	{ u32 c_ = T; r6 = R32(r3 + 0x2Cu); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C0AF444u, 5); goto L_0C0AF444; } UPD(0x0C0AF426u, 1); goto L_0C0AF426; }  /* 0C0AF422 bt/s */
L_0C0AF426: BLKS(0x0C0AF426u);
	r0 = 0x4Cu;  /* 0C0AF426 mov #imm,Rn */
	IF(0x0C0AF428u); MACL = r7 * r0;  /* 0C0AF428 mul.l Rm,Rn */
	r2 = 0xC286318u; UPD(0x0C0AF42Cu, 4);  /* 0C0AF42A mov.l @(disp,pc),Rn */
	IF(0x0C0AF42Cu); r7 = MACL;  /* 0C0AF42C sts macl,Rn */
	r3 = 0xC23945Cu; UPD(0x0C0AF430u, 2);  /* 0C0AF42E mov.l @(disp,pc),Rn */
	r2 += r7;  /* 0C0AF430 add Rm,Rn */
	r7 = R32(r2 + 0x10u); UPD(0x0C0AF434u, 2);  /* 0C0AF432 mov.l @(disp,Rm),Rn */
	r0 = R32(r3); UPD(0x0C0AF436u, 1);  /* 0C0AF434 mov.l @Rm,Rn */
	IF(0x0C0AF436u); MACL = r0 * r7;  /* 0C0AF436 mul.l Rm,Rn */
	IF(0x0C0AF438u); r2 = MACL;  /* 0C0AF438 sts macl,Rn */
	IF(0x0C0AF43Au); T = (s32)r2 >= 0;  /* 0C0AF43A cmp/pz Rn */
	if (!T) { UPD(0x0C0AF4A0u, 7); goto L_0C0AF4A0; }  /* 0C0AF43C bf */
L_0C0AF43E: BLKS(0x0C0AF43Eu);
	r7 = (r2 >> 16) | (r2 << 16);  /* 0C0AF43E swap.w Rm,Rn */
	r2 = (u32)(s32)(s16)r7;  /* 0C0AF440 exts.w Rm,Rn */
	r6 -= r2;  /* 0C0AF442 sub Rm,Rn */
	UPD(0x0C0AF444u, 3);
L_0C0AF444: BLKS(0x0C0AF444u);
	r0 = 0xB4u; UPD(0x0C0AF446u, 1);  /* 0C0AF444 mov.w @(disp,pc),Rn */
	IF(0x0C0AF446u); MACL = r4 * r0;  /* 0C0AF446 mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C0AF44Au, 3);  /* 0C0AF448 mov.l @(disp,pc),Rn */
	IF(0x0C0AF44Au); r2 = MACL;  /* 0C0AF44A sts macl,Rn */
	r7 += r2;  /* 0C0AF44C add Rm,Rn */
	r3 = R32(r7 + 0x24u); UPD(0x0C0AF450u, 3);  /* 0C0AF44E mov.l @(disp,Rm),Rn */
	r2 = r5;  /* 0C0AF450 mov Rm,Rn */
	r0 = (r3 >> 16) | (r3 << 16);  /* 0C0AF452 swap.w Rm,Rn */
	r4 = (u32)(s32)(s16)r0;  /* 0C0AF454 exts.w Rm,Rn */
	r2 -= r4;  /* 0C0AF456 sub Rm,Rn */
	IF(0x0C0AF458u); T = (s32)r2 >= 0;  /* 0C0AF458 cmp/pz Rn */
	if (!T) { UPD(0x0C0AF490u, 8); goto L_0C0AF490; }  /* 0C0AF45A bf */
L_0C0AF45C: BLKS(0x0C0AF45Cu);
	r5 = (r6 >> 16) | (r6 << 16);  /* 0C0AF45C swap.w Rm,Rn */
	r1 = (u32)(s32)(s16)r5;  /* 0C0AF45E exts.w Rm,Rn */
	IF(0x0C0AF460u); T = (s32)r1 >= 0;  /* 0C0AF460 cmp/pz Rn */
	if (!T) { UPD(0x0C0AF480u, 6); goto L_0C0AF480; }  /* 0C0AF462 bf */
L_0C0AF464: BLKS(0x0C0AF464u);
	r1 += r1;  /* 0C0AF464 add Rm,Rn */
	T = (s32)r2 > (s32)r1;  /* 0C0AF466 cmp/gt Rm,Rn */
	IF(0x0C0AF468u); r6 = T;  /* 0C0AF468 movt Rn */
	T = (r6 & r6) == 0;  /* 0C0AF46A tst Rm,Rn */
	IF(0x0C0AF46Cu); r0 = T;  /* 0C0AF46C movt Rn */
	r15 = r14;  /* 0C0AF46E mov Rm,Rn */
	IF(0x0C0AF470u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 9); RET(t_); }  /* 0C0AF470 rts */
L_0C0AF480: BLKS(0x0C0AF480u);
	{ r1 = 0u - r1; /* slot neg Rm,Rn */ UPD(0x0C0AF464u, 3); goto L_0C0AF464; }  /* 0C0AF480 bra */
L_0C0AF490: BLKS(0x0C0AF490u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0AF45Cu, 3); goto L_0C0AF45C; }  /* 0C0AF490 bra */
L_0C0AF4A0: BLKS(0x0C0AF4A0u);
	r3 = 0xFFFFu; UPD(0x0C0AF4A2u, 1);  /* 0C0AF4A0 mov.l @(disp,pc),Rn */
	{ r2 += r3; /* slot add Rm,Rn */ UPD(0x0C0AF43Eu, 3); goto L_0C0AF43E; }  /* 0C0AF4A2 bra */
}

void blk_f_0C0AF4C0(sh3_t *c)
{
	LOCALS;
L_0C0AF4C0: BLKS(0x0C0AF4C0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF4C2u, 1);  /* 0C0AF4C0 mov.l Rm,@-Rn */
	r3 = (u32)(s32)(s16)r4;  /* 0C0AF4C2 exts.w Rm,Rn */
	r0 = 0xC2B1A3Cu; UPD(0x0C0AF4C6u, 2);  /* 0C0AF4C4 mov.l @(disp,pc),Rn */
	r2 = R32(r0); UPD(0x0C0AF4C8u, 1);  /* 0C0AF4C6 mov.l @Rm,Rn */
	r7 = 0xB4u; UPD(0x0C0AF4CAu, 1);  /* 0C0AF4C8 mov.w @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r2); r2 += 2; r6 = v_; } UPD(0x0C0AF4CCu, 1);  /* 0C0AF4CA mov.w @Rm+,Rn */
	IF(0x0C0AF4CCu); MACL = r3 * r7;  /* 0C0AF4CC mul.l Rm,Rn */
	W32(r0, r2); UPD(0x0C0AF4D0u, 3);  /* 0C0AF4CE mov.l Rm,@Rn */
	r5 = 0xC286578u; UPD(0x0C0AF4D2u, 1);  /* 0C0AF4D0 mov.l @(disp,pc),Rn */
	IF(0x0C0AF4D2u); r2 = MACL;  /* 0C0AF4D2 sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C0AF4D6u, 2);  /* 0C0AF4D4 mov.w @(disp,pc),Rn */
	r2 += r5;  /* 0C0AF4D6 add Rm,Rn */
	IF(0x0C0AF4D8u); r1 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C0AF4DAu, 2);  /* 0C0AF4D8 mov.b @(r0,Rm),Rn */
	r0 = 0x4Cu;  /* 0C0AF4DA mov #imm,Rn */
	IF(0x0C0AF4DCu); MACL = r1 * r0;  /* 0C0AF4DC mul.l Rm,Rn */
	r4 = 0xC286318u; UPD(0x0C0AF4E0u, 4);  /* 0C0AF4DE mov.l @(disp,pc),Rn */
	IF(0x0C0AF4E0u); r3 = MACL;  /* 0C0AF4E0 sts macl,Rn */
	r4 += r3;  /* 0C0AF4E2 add Rm,Rn */
	r0 = R32(r2 + 0x24u); UPD(0x0C0AF4E6u, 3);  /* 0C0AF4E4 mov.l @(disp,Rm),Rn */
	r1 = R32(r4 + 0x8u); UPD(0x0C0AF4E8u, 1);  /* 0C0AF4E6 mov.l @(disp,Rm),Rn */
	r5 = R32(r2 + 0x2Cu); UPD(0x0C0AF4EAu, 1);  /* 0C0AF4E8 mov.l @(disp,Rm),Rn */
	r0 += r1;  /* 0C0AF4EA add Rm,Rn */
	r2 = (r0 >> 16) | (r0 << 16);  /* 0C0AF4EC swap.w Rm,Rn */
	r0 = (u32)(s32)(s16)r2;  /* 0C0AF4EE exts.w Rm,Rn */
	r6 -= r0;  /* 0C0AF4F0 sub Rm,Rn */
	IF(0x0C0AF4F2u); T = (s32)r6 >= 0;  /* 0C0AF4F2 cmp/pz Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0AF520u, 8); goto L_0C0AF520; } UPD(0x0C0AF4F8u, 1); goto L_0C0AF4F8; }  /* 0C0AF4F4 bf/s */
L_0C0AF4F8: BLKS(0x0C0AF4F8u);
	r4 = (r5 >> 16) | (r5 << 16);  /* 0C0AF4F8 swap.w Rm,Rn */
	r1 = (u32)(s32)(s16)r4;  /* 0C0AF4FA exts.w Rm,Rn */
	IF(0x0C0AF4FCu); T = (s32)r1 >= 0;  /* 0C0AF4FC cmp/pz Rn */
	if (!T) { UPD(0x0C0AF510u, 6); goto L_0C0AF510; }  /* 0C0AF4FE bf */
L_0C0AF500: BLKS(0x0C0AF500u);
	r1 += r1;  /* 0C0AF500 add Rm,Rn */
	T = (s32)r6 > (s32)r1;  /* 0C0AF502 cmp/gt Rm,Rn */
	IF(0x0C0AF504u); r6 = T;  /* 0C0AF504 movt Rn */
	T = (r6 & r6) == 0;  /* 0C0AF506 tst Rm,Rn */
	IF(0x0C0AF508u); r0 = T;  /* 0C0AF508 movt Rn */
	r15 = r14;  /* 0C0AF50A mov Rm,Rn */
	IF(0x0C0AF50Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 9); RET(t_); }  /* 0C0AF50C rts */
L_0C0AF510: BLKS(0x0C0AF510u);
	{ r1 = 0u - r1; /* slot neg Rm,Rn */ UPD(0x0C0AF500u, 3); goto L_0C0AF500; }  /* 0C0AF510 bra */
L_0C0AF520: BLKS(0x0C0AF520u);
	{ r6 = 0u - r6; /* slot neg Rm,Rn */ UPD(0x0C0AF4F8u, 3); goto L_0C0AF4F8; }  /* 0C0AF520 bra */
}

void blk_f_0C0AF540(sh3_t *c)
{
	LOCALS;
L_0C0AF540: BLKS(0x0C0AF540u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF542u, 1);  /* 0C0AF540 mov.l Rm,@-Rn */
	r0 = 0xC2B1A3Cu; UPD(0x0C0AF544u, 1);  /* 0C0AF542 mov.l @(disp,pc),Rn */
	IF(0x0C0AF544u); r15 -= 4; W32(r15, PR); UPD(0x0C0AF546u, 1);  /* 0C0AF544 sts.l pr,@-Rn */
	r2 = R32(r0); UPD(0x0C0AF548u, 1);  /* 0C0AF546 mov.l @Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r2); r2 += 2; r4 = v_; } UPD(0x0C0AF54Au, 1);  /* 0C0AF548 mov.w @Rm+,Rn */
	W32(r0, r2); UPD(0x0C0AF54Cu, 1);  /* 0C0AF54A mov.l Rm,@Rn */
	r0 = 0xC0C2110u; UPD(0x0C0AF54Eu, 1);  /* 0C0AF54C mov.l @(disp,pc),Rn */
	IF(0x0C0AF54Eu); { u32 t_ = r0; PR = 0x0C0AF552u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2110, 0x0C0C2110u, 0x0C0AF552u); }  /* 0C0AF54E jsr @Rn */
L_0C0AF552: BLKS(0x0C0AF552u);
	r0 = 0x1u;  /* 0C0AF552 mov #imm,Rn */
	r15 = r14;  /* 0C0AF554 mov Rm,Rn */
	IF(0x0C0AF556u); PR = R32(r15); r15 += 4; UPD(0x0C0AF558u, 3);  /* 0C0AF556 lds.l @Rn+,pr */
	IF(0x0C0AF558u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AF558 rts */
}

void blk_f_0C0AF570(sh3_t *c)
{
	LOCALS;
L_0C0AF570: BLKS(0x0C0AF570u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF572u, 1);  /* 0C0AF570 mov.l Rm,@-Rn */
	r5 = (u32)(s32)(s16)r4;  /* 0C0AF572 exts.w Rm,Rn */
	r6 = 0xC2B1A3Cu; UPD(0x0C0AF576u, 2);  /* 0C0AF574 mov.l @(disp,pc),Rn */
	r2 = 0xB4u; UPD(0x0C0AF578u, 1);  /* 0C0AF576 mov.w @(disp,pc),Rn */
	r7 = R32(r6); UPD(0x0C0AF57Au, 1);  /* 0C0AF578 mov.l @Rm,Rn */
	IF(0x0C0AF57Au); MACL = r5 * r2;  /* 0C0AF57A mul.l Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r7); r7 += 2; r0 = v_; } UPD(0x0C0AF57Eu, 3);  /* 0C0AF57C mov.w @Rm+,Rn */
	r3 = 0xC286578u; UPD(0x0C0AF580u, 1);  /* 0C0AF57E mov.l @(disp,pc),Rn */
	IF(0x0C0AF580u); r2 = MACL;  /* 0C0AF580 sts macl,Rn */
	W32(r6, r7); UPD(0x0C0AF584u, 2);  /* 0C0AF582 mov.l Rm,@Rn */
	r2 += r3;  /* 0C0AF584 add Rm,Rn */
	r7 = R32(r2 + 0x28u); UPD(0x0C0AF588u, 2);  /* 0C0AF586 mov.l @(disp,Rm),Rn */
	IF(0x0C0AF588u); r0 <<= 16;  /* 0C0AF588 shll16 Rn */
	r7 -= r0;  /* 0C0AF58A sub Rm,Rn */
	IF(0x0C0AF58Cu); T = (s32)r7 >= 0;  /* 0C0AF58C cmp/pz Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0AF5C0u, 6); goto L_0C0AF5C0; } UPD(0x0C0AF592u, 1); goto L_0C0AF592; }  /* 0C0AF58E bf/s */
L_0C0AF592: BLKS(0x0C0AF592u);
	r2 = R32(r2 + 0x30u); UPD(0x0C0AF594u, 1);  /* 0C0AF592 mov.l @(disp,Rm),Rn */
	IF(0x0C0AF594u); T = (s32)r2 >= 0;  /* 0C0AF594 cmp/pz Rn */
	if (!T) { UPD(0x0C0AF5B0u, 4); goto L_0C0AF5B0; }  /* 0C0AF596 bf */
L_0C0AF598: BLKS(0x0C0AF598u);
	r4 = 0x20000u; UPD(0x0C0AF59Au, 1);  /* 0C0AF598 mov.l @(disp,pc),Rn */
	r2 += r4;  /* 0C0AF59A add Rm,Rn */
	T = (s32)r7 >= (s32)r2;  /* 0C0AF59C cmp/ge Rm,Rn */
	IF(0x0C0AF59Eu); r0 = T;  /* 0C0AF59E movt Rn */
	T = (r0 & r0) == 0;  /* 0C0AF5A0 tst Rm,Rn */
	IF(0x0C0AF5A2u); r0 = T;  /* 0C0AF5A2 movt Rn */
	r15 = r14;  /* 0C0AF5A4 mov Rm,Rn */
	IF(0x0C0AF5A6u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 9); RET(t_); }  /* 0C0AF5A6 rts */
L_0C0AF5B0: BLKS(0x0C0AF5B0u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0AF598u, 3); goto L_0C0AF598; }  /* 0C0AF5B0 bra */
L_0C0AF5C0: BLKS(0x0C0AF5C0u);
	{ r7 = 0u - r7; /* slot neg Rm,Rn */ UPD(0x0C0AF592u, 3); goto L_0C0AF592; }  /* 0C0AF5C0 bra */
}

void blk_f_0C0AF5E0(sh3_t *c)
{
	LOCALS;
L_0C0AF5E0: BLKS(0x0C0AF5E0u);
	r5 = 0xB4u; UPD(0x0C0AF5E2u, 1);  /* 0C0AF5E0 mov.w @(disp,pc),Rn */
	r1 = (u32)(s32)(s16)r4;  /* 0C0AF5E2 exts.w Rm,Rn */
	IF(0x0C0AF5E4u); MACL = r1 * r5;  /* 0C0AF5E4 mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C0AF5E8u, 4);  /* 0C0AF5E6 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF5EAu, 1);  /* 0C0AF5E8 mov.l Rm,@-Rn */
	IF(0x0C0AF5EAu); r6 = MACL;  /* 0C0AF5EA sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C0AF5EEu, 2);  /* 0C0AF5EC mov.w @(disp,pc),Rn */
	r6 += r3;  /* 0C0AF5EE add Rm,Rn */
	IF(0x0C0AF5F0u); r4 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C0AF5F2u, 2);  /* 0C0AF5F0 mov.b @(r0,Rm),Rn */
	r0 = 0xC2B1A3Cu; UPD(0x0C0AF5F4u, 1);  /* 0C0AF5F2 mov.l @(disp,pc),Rn */
	r2 = R32(r0); UPD(0x0C0AF5F6u, 1);  /* 0C0AF5F4 mov.l @Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r2); r2 += 2; r3 = v_; } UPD(0x0C0AF5F8u, 1);  /* 0C0AF5F6 mov.w @Rm+,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r2); r2 += 2; r5 = v_; } UPD(0x0C0AF5FAu, 1);  /* 0C0AF5F8 mov.w @Rm+,Rn */
	W32(r0, r2); UPD(0x0C0AF5FCu, 1);  /* 0C0AF5FA mov.l Rm,@Rn */
	r0 = 0x180u; UPD(0x0C0AF5FEu, 1);  /* 0C0AF5FC mov.w @(disp,pc),Rn */
	T = (s32)r3 > (s32)r0;  /* 0C0AF5FE cmp/gt Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0AF6B0u, 4); goto L_0C0AF6B0; } goto L_0C0AF604; }  /* 0C0AF600 bf/s */
L_0C0AF604: BLKS(0x0C0AF604u);
	r2 = 0x4Cu;  /* 0C0AF604 mov #imm,Rn */
	IF(0x0C0AF606u); MACL = r4 * r2;  /* 0C0AF606 mul.l Rm,Rn */
	r0 = 0xC286318u; UPD(0x0C0AF60Au, 5);  /* 0C0AF608 mov.l @(disp,pc),Rn */
	IF(0x0C0AF60Au); r7 = MACL;  /* 0C0AF60A sts macl,Rn */
	r7 += r0;  /* 0C0AF60C add Rm,Rn */
	r2 = R32(r7 + 0x8u); UPD(0x0C0AF610u, 3);  /* 0C0AF60E mov.l @(disp,Rm),Rn */
	r7 = (r2 >> 16) | (r2 << 16);  /* 0C0AF610 swap.w Rm,Rn */
	r2 = (u32)(s32)(s16)r7;  /* 0C0AF612 exts.w Rm,Rn */
	r3 -= r2;  /* 0C0AF614 sub Rm,Rn */
	r3 = (u32)(s32)(s16)r3;  /* 0C0AF616 exts.w Rm,Rn */
	r7 = R32(r6 + 0x24u); UPD(0x0C0AF61Au, 5);  /* 0C0AF618 mov.l @(disp,Rm),Rn */
L_0C0AF61A: BLKS(0x0C0AF61Au);
	IF(0x0C0AF61Au); r3 <<= 16;  /* 0C0AF61A shll16 Rn */
	r7 -= r3;  /* 0C0AF61C sub Rm,Rn */
	IF(0x0C0AF61Eu); T = (s32)r7 >= 0;  /* 0C0AF61E cmp/pz Rn */
	if (!T) { UPD(0x0C0AF6A0u, 6); goto L_0C0AF6A0; }  /* 0C0AF620 bf */
L_0C0AF622: BLKS(0x0C0AF622u);
	r2 = R32(r6 + 0x2Cu); UPD(0x0C0AF624u, 1);  /* 0C0AF622 mov.l @(disp,Rm),Rn */
	IF(0x0C0AF624u); T = (s32)r2 >= 0;  /* 0C0AF624 cmp/pz Rn */
	if (!T) { UPD(0x0C0AF690u, 4); goto L_0C0AF690; }  /* 0C0AF626 bf */
L_0C0AF628: BLKS(0x0C0AF628u);
	r3 = 0x4Cu;  /* 0C0AF628 mov #imm,Rn */
	IF(0x0C0AF62Au); MACL = r4 * r3;  /* 0C0AF62A mul.l Rm,Rn */
	IF(0x0C0AF62Cu); r4 = MACL;  /* 0C0AF62C sts macl,Rn */
	r0 += r4;  /* 0C0AF62E add Rm,Rn */
	r1 = R32(r0 + 0x10u); UPD(0x0C0AF632u, 6);  /* 0C0AF630 mov.l @(disp,Rm),Rn */
	IF(0x0C0AF632u); T = (s32)r1 >= 0;  /* 0C0AF632 cmp/pz Rn */
	if (!T) { UPD(0x0C0AF680u, 4); goto L_0C0AF680; }  /* 0C0AF634 bf */
L_0C0AF636: BLKS(0x0C0AF636u);
	r3 = 0x20000u; UPD(0x0C0AF638u, 1);  /* 0C0AF636 mov.l @(disp,pc),Rn */
	r2 += r1;  /* 0C0AF638 add Rm,Rn */
	r2 += r3;  /* 0C0AF63A add Rm,Rn */
	T = (s32)r7 >= (s32)r2;  /* 0C0AF63C cmp/ge Rm,Rn */
	{ u32 c_ = !T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AF65Au, 6); goto L_0C0AF65A; } goto L_0C0AF642; }  /* 0C0AF63E bf/s */
L_0C0AF642: BLKS(0x0C0AF642u);
	r2 = R32(r6 + 0x28u); UPD(0x0C0AF644u, 2);  /* 0C0AF642 mov.l @(disp,Rm),Rn */
	IF(0x0C0AF644u); r5 <<= 16;  /* 0C0AF644 shll16 Rn */
	r2 -= r5;  /* 0C0AF646 sub Rm,Rn */
	IF(0x0C0AF648u); T = (s32)r2 >= 0;  /* 0C0AF648 cmp/pz Rn */
	if (!T) { UPD(0x0C0AF670u, 6); goto L_0C0AF670; }  /* 0C0AF64A bf */
L_0C0AF64C: BLKS(0x0C0AF64Cu);
	r1 = R32(r6 + 0x30u); UPD(0x0C0AF64Eu, 1);  /* 0C0AF64C mov.l @(disp,Rm),Rn */
	IF(0x0C0AF64Eu); T = (s32)r1 >= 0;  /* 0C0AF64E cmp/pz Rn */
	if (!T) { UPD(0x0C0AF660u, 4); goto L_0C0AF660; }  /* 0C0AF650 bf */
L_0C0AF652: BLKS(0x0C0AF652u);
	r1 += r3;  /* 0C0AF652 add Rm,Rn */
	T = (s32)r2 >= (s32)r1;  /* 0C0AF654 cmp/ge Rm,Rn */
	IF(0x0C0AF656u); r0 = T;  /* 0C0AF656 movt Rn */
	r0 ^= 0x1u;  /* 0C0AF658 xor #imm,r0 */
	UPD(0x0C0AF65Au, 4);
L_0C0AF65A: BLKS(0x0C0AF65Au);
	r15 = r14;  /* 0C0AF65A mov Rm,Rn */
	IF(0x0C0AF65Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0AF65C rts */
L_0C0AF660: BLKS(0x0C0AF660u);
	{ r1 = 0u - r1; /* slot neg Rm,Rn */ UPD(0x0C0AF652u, 3); goto L_0C0AF652; }  /* 0C0AF660 bra */
L_0C0AF670: BLKS(0x0C0AF670u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0AF64Cu, 3); goto L_0C0AF64C; }  /* 0C0AF670 bra */
L_0C0AF680: BLKS(0x0C0AF680u);
	{ r1 = 0u - r1; /* slot neg Rm,Rn */ UPD(0x0C0AF636u, 3); goto L_0C0AF636; }  /* 0C0AF680 bra */
L_0C0AF690: BLKS(0x0C0AF690u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0AF628u, 3); goto L_0C0AF628; }  /* 0C0AF690 bra */
L_0C0AF6A0: BLKS(0x0C0AF6A0u);
	{ r7 = 0u - r7; /* slot neg Rm,Rn */ UPD(0x0C0AF622u, 3); goto L_0C0AF622; }  /* 0C0AF6A0 bra */
L_0C0AF6B0: BLKS(0x0C0AF6B0u);
	r0 = 0xC286318u; UPD(0x0C0AF6B2u, 1);  /* 0C0AF6B0 mov.l @(disp,pc),Rn */
	{ r7 = R32(r6 + 0x24u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0AF61Au, 3); goto L_0C0AF61A; }  /* 0C0AF6B2 bra */
}

void blk_f_0C0AF6D0(sh3_t *c)
{
	LOCALS;
L_0C0AF6D0: BLKS(0x0C0AF6D0u);
	r7 = 0xB4u; UPD(0x0C0AF6D2u, 1);  /* 0C0AF6D0 mov.w @(disp,pc),Rn */
	r1 = (u32)(s32)(s16)r4;  /* 0C0AF6D2 exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF6D6u, 2);  /* 0C0AF6D4 mov.l Rm,@-Rn */
	IF(0x0C0AF6D6u); MACL = r1 * r7;  /* 0C0AF6D6 mul.l Rm,Rn */
	r4 = 0xC2B1A3Cu; UPD(0x0C0AF6DAu, 3);  /* 0C0AF6D8 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0AF6DA mov Rm,Rn */
	r5 = R32(r4); UPD(0x0C0AF6DEu, 2);  /* 0C0AF6DC mov.l @Rm,Rn */
	IF(0x0C0AF6DEu); r2 = MACL;  /* 0C0AF6DE sts macl,Rn */
	r0 = 0xC286578u; UPD(0x0C0AF6E2u, 2);  /* 0C0AF6E0 mov.l @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r6 = v_; } UPD(0x0C0AF6E4u, 1);  /* 0C0AF6E2 mov.w @Rm+,Rn */
	r2 += r0;  /* 0C0AF6E4 add Rm,Rn */
	r0 = 0x94u; UPD(0x0C0AF6E8u, 2);  /* 0C0AF6E6 mov.w @(disp,pc),Rn */
	IF(0x0C0AF6E8u); r6 <<= 8;  /* 0C0AF6E8 shll8 Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r3 = v_; } UPD(0x0C0AF6ECu, 2);  /* 0C0AF6EA mov.w @Rm+,Rn */
	IF(0x0C0AF6ECu); W32(r0 + r2, r6); UPD(0x0C0AF6EEu, 1);  /* 0C0AF6EC mov.l Rm,@(r0,Rn) */
	IF(0x0C0AF6EEu); r3 <<= 8;  /* 0C0AF6EE shll8 Rn */
	r0 += 0xFFFFFFFCu;  /* 0C0AF6F0 add #imm,Rn */
	IF(0x0C0AF6F2u); W32(r0 + r2, r3); UPD(0x0C0AF6F4u, 3);  /* 0C0AF6F2 mov.l Rm,@(r0,Rn) */
	W32(r4, r5); UPD(0x0C0AF6F6u, 1);  /* 0C0AF6F4 mov.l Rm,@Rn */
	r0 = 0x1u;  /* 0C0AF6F6 mov #imm,Rn */
	r15 = r14;  /* 0C0AF6F8 mov Rm,Rn */
	IF(0x0C0AF6FAu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C0AF6FA rts */
}

void blk_f_0C0AF710(sh3_t *c)
{
	LOCALS;
L_0C0AF710: BLKS(0x0C0AF710u);
	r2 = 0xB4u; UPD(0x0C0AF712u, 1);  /* 0C0AF710 mov.w @(disp,pc),Rn */
	r5 = (u32)(s32)(s16)r4;  /* 0C0AF712 exts.w Rm,Rn */
	IF(0x0C0AF714u); MACL = r5 * r2;  /* 0C0AF714 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C0AF718u, 4);  /* 0C0AF716 mov.l @(disp,pc),Rn */
	IF(0x0C0AF718u); r3 = MACL;  /* 0C0AF718 sts macl,Rn */
	r3 += r0;  /* 0C0AF71A add Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF71Eu, 3);  /* 0C0AF71C mov.l Rm,@-Rn */
	r0 = 0x8Cu; UPD(0x0C0AF720u, 1);  /* 0C0AF71E mov.w @(disp,pc),Rn */
	r14 = r15;  /* 0C0AF720 mov Rm,Rn */
	IF(0x0C0AF722u); r1 = R32(r0 + r3); UPD(0x0C0AF724u, 2);  /* 0C0AF722 mov.l @(r0,Rm),Rn */
	r0 += 0x8u;  /* 0C0AF724 add #imm,Rn */
	IF(0x0C0AF726u); r4 = R32(r0 + r3); UPD(0x0C0AF728u, 2);  /* 0C0AF726 mov.l @(r0,Rm),Rn */
	T = r1 == r4;  /* 0C0AF728 cmp/eq Rm,Rn */
	IF(0x0C0AF72Au); r0 = T;  /* 0C0AF72A movt Rn */
	r15 = r14;  /* 0C0AF72C mov Rm,Rn */
	IF(0x0C0AF72Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 6); RET(t_); }  /* 0C0AF72E rts */
}

void blk_f_0C0AF740(sh3_t *c)
{
	LOCALS;
L_0C0AF740: BLKS(0x0C0AF740u);
	r0 = 0xB4u; UPD(0x0C0AF742u, 1);  /* 0C0AF740 mov.w @(disp,pc),Rn */
	r1 = (u32)(s32)(s16)r4;  /* 0C0AF742 exts.w Rm,Rn */
	IF(0x0C0AF744u); MACL = r1 * r0;  /* 0C0AF744 mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C0AF748u, 4);  /* 0C0AF746 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF74Au, 1);  /* 0C0AF748 mov.l Rm,@-Rn */
	IF(0x0C0AF74Au); r0 = MACL;  /* 0C0AF74A sts macl,Rn */
	r2 = 0x86u; UPD(0x0C0AF74Eu, 2);  /* 0C0AF74C mov.w @(disp,pc),Rn */
	r0 += r3;  /* 0C0AF74E add Rm,Rn */
	IF(0x0C0AF750u); r4 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C0AF752u, 2);  /* 0C0AF750 mov.w @(r0,Rm),Rn */
	r14 = r15;  /* 0C0AF752 mov Rm,Rn */
	r2 += 0x4u;  /* 0C0AF754 add #imm,Rn */
	IF(0x0C0AF756u); r3 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C0AF758u, 3);  /* 0C0AF756 mov.w @(r0,Rm),Rn */
	T = r4 == r3;  /* 0C0AF758 cmp/eq Rm,Rn */
	IF(0x0C0AF75Au); r0 = T;  /* 0C0AF75A movt Rn */
	r15 = r14;  /* 0C0AF75C mov Rm,Rn */
	IF(0x0C0AF75Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 6); RET(t_); }  /* 0C0AF75E rts */
}

void blk_f_0C0AF770(sh3_t *c)
{
	LOCALS;
L_0C0AF770: BLKS(0x0C0AF770u);
	r6 = 0xB4u; UPD(0x0C0AF772u, 1);  /* 0C0AF770 mov.w @(disp,pc),Rn */
	r7 = (u32)(s32)(s16)r4;  /* 0C0AF772 exts.w Rm,Rn */
	IF(0x0C0AF774u); MACL = r7 * r6;  /* 0C0AF774 mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C0AF778u, 4);  /* 0C0AF776 mov.l @(disp,pc),Rn */
	IF(0x0C0AF778u); r5 = MACL;  /* 0C0AF778 sts macl,Rn */
	r0 = 0x88u; UPD(0x0C0AF77Cu, 2);  /* 0C0AF77A mov.w @(disp,pc),Rn */
	r5 += r2;  /* 0C0AF77C add Rm,Rn */
	r5 += r0;  /* 0C0AF77E add Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF782u, 3);  /* 0C0AF780 mov.l Rm,@-Rn */
	r5 += 0x2u;  /* 0C0AF782 add #imm,Rn */
	r0 = 0xC2B1A3Cu; UPD(0x0C0AF786u, 2);  /* 0C0AF784 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0AF786 mov Rm,Rn */
	r4 = R32(r0); UPD(0x0C0AF78Au, 2);  /* 0C0AF788 mov.l @Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r4); r4 += 2; r3 = v_; } UPD(0x0C0AF78Cu, 1);  /* 0C0AF78A mov.w @Rm+,Rn */
	W16(r5, r3); UPD(0x0C0AF78Eu, 1);  /* 0C0AF78C mov.w Rm,@Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r4); r4 += 2; r1 = v_; } UPD(0x0C0AF790u, 1);  /* 0C0AF78E mov.w @Rm+,Rn */
	W32(r0, r4); UPD(0x0C0AF792u, 1);  /* 0C0AF790 mov.l Rm,@Rn */
	{ u32 v_ = r1; r5 -= 2; W16(r5, v_); } UPD(0x0C0AF794u, 1);  /* 0C0AF792 mov.w Rm,@-Rn */
	r0 = 0x1u;  /* 0C0AF794 mov #imm,Rn */
	r15 = r14;  /* 0C0AF796 mov Rm,Rn */
	IF(0x0C0AF798u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C0AF798 rts */
}

void blk_f_0C0AF7B0(sh3_t *c)
{
	LOCALS;
L_0C0AF7B0: BLKS(0x0C0AF7B0u);
	r0 = 0xB4u; UPD(0x0C0AF7B2u, 1);  /* 0C0AF7B0 mov.w @(disp,pc),Rn */
	r1 = (u32)(s32)(s16)r4;  /* 0C0AF7B2 exts.w Rm,Rn */
	IF(0x0C0AF7B4u); MACL = r1 * r0;  /* 0C0AF7B4 mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C0AF7B8u, 4);  /* 0C0AF7B6 mov.l @(disp,pc),Rn */
	r2 = 0x0u;  /* 0C0AF7B8 mov #imm,Rn */
	IF(0x0C0AF7BAu); r0 = MACL;  /* 0C0AF7BA sts macl,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF7BEu, 3);  /* 0C0AF7BC mov.l Rm,@-Rn */
	IF(0x0C0AF7BEu); W32(r0 + r3, r2); UPD(0x0C0AF7C0u, 1);  /* 0C0AF7BE mov.l Rm,@(r0,Rn) */
	r14 = r15;  /* 0C0AF7C0 mov Rm,Rn */
	r0 = 0x0u;  /* 0C0AF7C2 mov #imm,Rn */
	r15 = r14;  /* 0C0AF7C4 mov Rm,Rn */
	IF(0x0C0AF7C6u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 6); RET(t_); }  /* 0C0AF7C6 rts */
}

void blk_f_0C0AF7D0(sh3_t *c)
{
	LOCALS;
L_0C0AF7D0: BLKS(0x0C0AF7D0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF7D2u, 1);  /* 0C0AF7D0 mov.l Rm,@-Rn */
	r0 = 0xC3C4165u; UPD(0x0C0AF7D4u, 1);  /* 0C0AF7D2 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0AF7D4 mov Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r0); UPD(0x0C0AF7D8u, 2);  /* 0C0AF7D6 mov.b @Rm,Rn */
	r2 += 0x1u;  /* 0C0AF7D8 add #imm,Rn */
	W8(r0, r2); UPD(0x0C0AF7DCu, 2);  /* 0C0AF7DA mov.b Rm,@Rn */
	r0 = 0x1u;  /* 0C0AF7DC mov #imm,Rn */
	r15 = r14;  /* 0C0AF7DE mov Rm,Rn */
	IF(0x0C0AF7E0u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C0AF7E0 rts */
}

void blk_f_0C0AF7F0(sh3_t *c)
{
	LOCALS;
L_0C0AF7F0: BLKS(0x0C0AF7F0u);
	r0 = 0xB4u; UPD(0x0C0AF7F2u, 1);  /* 0C0AF7F0 mov.w @(disp,pc),Rn */
	r5 = (u32)(s32)(s16)r4;  /* 0C0AF7F2 exts.w Rm,Rn */
	IF(0x0C0AF7F4u); MACL = r5 * r0;  /* 0C0AF7F4 mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C0AF7F8u, 4);  /* 0C0AF7F6 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF7FAu, 1);  /* 0C0AF7F8 mov.l Rm,@-Rn */
	IF(0x0C0AF7FAu); r0 = MACL;  /* 0C0AF7FA sts macl,Rn */
	r0 += r2;  /* 0C0AF7FC add Rm,Rn */
	r3 = R32(r0); UPD(0x0C0AF800u, 3);  /* 0C0AF7FE mov.l @Rm,Rn */
	r14 = r15;  /* 0C0AF800 mov Rm,Rn */
	r1 = 0x100u; UPD(0x0C0AF804u, 2);  /* 0C0AF802 mov.w @(disp,pc),Rn */
	r3 |= r1;  /* 0C0AF804 or Rm,Rn */
	W32(r0, r3); UPD(0x0C0AF808u, 2);  /* 0C0AF806 mov.l Rm,@Rn */
	r0 = 0x1u;  /* 0C0AF808 mov #imm,Rn */
	r15 = r14;  /* 0C0AF80A mov Rm,Rn */
	IF(0x0C0AF80Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C0AF80C rts */
}

void blk_f_0C0AF820(sh3_t *c)
{
	LOCALS;
L_0C0AF820: BLKS(0x0C0AF820u);
	r0 = 0xB4u; UPD(0x0C0AF822u, 1);  /* 0C0AF820 mov.w @(disp,pc),Rn */
	r5 = (u32)(s32)(s16)r4;  /* 0C0AF822 exts.w Rm,Rn */
	IF(0x0C0AF824u); MACL = r5 * r0;  /* 0C0AF824 mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C0AF828u, 4);  /* 0C0AF826 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF82Au, 1);  /* 0C0AF828 mov.l Rm,@-Rn */
	IF(0x0C0AF82Au); r0 = MACL;  /* 0C0AF82A sts macl,Rn */
	r0 += r2;  /* 0C0AF82C add Rm,Rn */
	r3 = R32(r0); UPD(0x0C0AF830u, 3);  /* 0C0AF82E mov.l @Rm,Rn */
	r14 = r15;  /* 0C0AF830 mov Rm,Rn */
	r1 = 0xFFFFFEFFu; UPD(0x0C0AF834u, 2);  /* 0C0AF832 mov.w @(disp,pc),Rn */
	r3 &= r1;  /* 0C0AF834 and Rm,Rn */
	W32(r0, r3); UPD(0x0C0AF838u, 2);  /* 0C0AF836 mov.l Rm,@Rn */
	r0 = 0x1u;  /* 0C0AF838 mov #imm,Rn */
	r15 = r14;  /* 0C0AF83A mov Rm,Rn */
	IF(0x0C0AF83Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C0AF83C rts */
}

void blk_f_0C0AF850(sh3_t *c)
{
	LOCALS;
L_0C0AF850: BLKS(0x0C0AF850u);
	r2 = (u32)(s32)(s16)r4;  /* 0C0AF850 exts.w Rm,Rn */
	r0 = 0xB4u; UPD(0x0C0AF854u, 2);  /* 0C0AF852 mov.w @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF856u, 1);  /* 0C0AF854 mov.l Rm,@-Rn */
	IF(0x0C0AF856u); MACL = r2 * r0;  /* 0C0AF856 mul.l Rm,Rn */
	r4 = 0xC2B1A3Cu; UPD(0x0C0AF85Au, 3);  /* 0C0AF858 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0AF85A mov Rm,Rn */
	r3 = R32(r4); UPD(0x0C0AF85Eu, 2);  /* 0C0AF85C mov.l @Rm,Rn */
	IF(0x0C0AF85Eu); r1 = MACL;  /* 0C0AF85E sts macl,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r5 = v_; } UPD(0x0C0AF862u, 2);  /* 0C0AF860 mov.w @Rm+,Rn */
	r0 = 0xC2865CCu; UPD(0x0C0AF864u, 1);  /* 0C0AF862 mov.l @(disp,pc),Rn */
	IF(0x0C0AF864u); W16(r0 + r1, r5); UPD(0x0C0AF866u, 1);  /* 0C0AF864 mov.w Rm,@(r0,Rn) */
	W32(r4, r3); UPD(0x0C0AF868u, 1);  /* 0C0AF866 mov.l Rm,@Rn */
	r0 = 0x1u;  /* 0C0AF868 mov #imm,Rn */
	r15 = r14;  /* 0C0AF86A mov Rm,Rn */
	IF(0x0C0AF86Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C0AF86C rts */
}

void blk_f_0C0AF880(sh3_t *c)
{
	LOCALS;
L_0C0AF880: BLKS(0x0C0AF880u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF882u, 1);  /* 0C0AF880 mov.l Rm,@-Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C0AF882 exts.w Rm,Rn */
	r0 = 0xC072220u; UPD(0x0C0AF886u, 2);  /* 0C0AF884 mov.l @(disp,pc),Rn */
	IF(0x0C0AF886u); r15 -= 4; W32(r15, PR); UPD(0x0C0AF888u, 1);  /* 0C0AF886 sts.l pr,@-Rn */
	IF(0x0C0AF888u); { u32 t_ = r0; PR = 0x0C0AF88Cu; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C072220, 0x0C072220u, 0x0C0AF88Cu); }  /* 0C0AF888 jsr @Rn */
L_0C0AF88C: BLKS(0x0C0AF88Cu);
	r0 = (u32)(s32)(s16)r0;  /* 0C0AF88C exts.w Rm,Rn */
	r15 = r14;  /* 0C0AF88E mov Rm,Rn */
	IF(0x0C0AF890u); PR = R32(r15); r15 += 4; UPD(0x0C0AF892u, 3);  /* 0C0AF890 lds.l @Rn+,pr */
	IF(0x0C0AF892u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AF892 rts */
}

void blk_f_0C0AF8A0(sh3_t *c)
{
	LOCALS;
L_0C0AF8A0: BLKS(0x0C0AF8A0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF8A2u, 1);  /* 0C0AF8A0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF8A4u, 1);  /* 0C0AF8A2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF8A6u, 1);  /* 0C0AF8A4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF8A8u, 1);  /* 0C0AF8A6 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF8AAu, 1);  /* 0C0AF8A8 mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C0AF8AA exts.w Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF8AEu, 2);  /* 0C0AF8AC mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF8B0u, 1);  /* 0C0AF8AE mov.l Rm,@-Rn */
	r8 = 0xC2B1A3Cu; UPD(0x0C0AF8B2u, 1);  /* 0C0AF8B0 mov.l @(disp,pc),Rn */
	IF(0x0C0AF8B2u); r15 -= 4; W32(r15, PR); UPD(0x0C0AF8B4u, 1);  /* 0C0AF8B2 sts.l pr,@-Rn */
	r13 = R32(r8); UPD(0x0C0AF8B6u, 1);  /* 0C0AF8B4 mov.l @Rm,Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0AF8B6 add #imm,Rn */
	r9 = 0xC0C2360u; UPD(0x0C0AF8BAu, 2);  /* 0C0AF8B8 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0AF8BA mov Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r13); r13 += 2; r4 = v_; } UPD(0x0C0AF8BEu, 2);  /* 0C0AF8BC mov.w @Rm+,Rn */
	W32(r14, r4); UPD(0x0C0AF8C0u, 1);  /* 0C0AF8BE mov.l Rm,@Rn */
	IF(0x0C0AF8C0u); { u32 t_ = r9; PR = 0x0C0AF8C4u; W32(r8, r13); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C0AF8C4u); }  /* 0C0AF8C0 jsr @Rn */
L_0C0AF8C4: BLKS(0x0C0AF8C4u);
	r2 = R32(r8); UPD(0x0C0AF8C6u, 1);  /* 0C0AF8C4 mov.l @Rm,Rn */
	r13 = (u32)(s32)(s16)r0;  /* 0C0AF8C6 exts.w Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r2); r2 += 2; r12 = v_; } UPD(0x0C0AF8CAu, 2);  /* 0C0AF8C8 mov.w @Rm+,Rn */
	IF(0x0C0AF8CAu); { u32 t_ = r9; PR = 0x0C0AF8CEu; W32(r8, r2); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C0AF8CEu); }  /* 0C0AF8CA jsr @Rn */
L_0C0AF8CE: BLKS(0x0C0AF8CEu);
	IF(0x0C0AF8CEu); MACL = r12 * r0;  /* 0C0AF8CE mul.l Rm,Rn */
	r9 = 0xB4u; UPD(0x0C0AF8D2u, 3);  /* 0C0AF8D0 mov.w @(disp,pc),Rn */
	r4 = r13;  /* 0C0AF8D2 mov Rm,Rn */
	IF(0x0C0AF8D4u); r12 = MACL;  /* 0C0AF8D4 sts macl,Rn */
	IF(0x0C0AF8D6u); MACL = r11 * r9;  /* 0C0AF8D6 mul.l Rm,Rn */
	r7 = R32(r8); UPD(0x0C0AF8DAu, 5);  /* 0C0AF8D8 mov.l @Rm,Rn */
	r12 += r12;  /* 0C0AF8DA add Rm,Rn */
	r11 = 0xC286578u; UPD(0x0C0AF8DEu, 2);  /* 0C0AF8DC mov.l @(disp,pc),Rn */
	IF(0x0C0AF8DEu); r9 = MACL;  /* 0C0AF8DE sts macl,Rn */
	r9 += r11;  /* 0C0AF8E0 add Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r7); r7 += 2; r0 = v_; } UPD(0x0C0AF8E4u, 3);  /* 0C0AF8E2 mov.w @Rm+,Rn */
	r5 = r12;  /* 0C0AF8E4 mov Rm,Rn */
	r10 = 0xC069B20u; UPD(0x0C0AF8E8u, 2);  /* 0C0AF8E6 mov.l @(disp,pc),Rn */
	IF(0x0C0AF8E8u); r0 <<= 16;  /* 0C0AF8E8 shll16 Rn */
	r11 = R32(r9 + 0x24u); UPD(0x0C0AF8ECu, 2);  /* 0C0AF8EA mov.l @(disp,Rm),Rn */
	W32(r8, r7); UPD(0x0C0AF8EEu, 1);  /* 0C0AF8EC mov.l Rm,@Rn */
	IF(0x0C0AF8EEu); { u32 t_ = r10; PR = 0x0C0AF8F2u; r11 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0AF8F2u); }  /* 0C0AF8EE jsr @Rn */
L_0C0AF8F2: BLKS(0x0C0AF8F2u);
	r6 = R32(r8); UPD(0x0C0AF8F4u, 1);  /* 0C0AF8F2 mov.l @Rm,Rn */
	r11 += r0;  /* 0C0AF8F4 add Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r6); r6 += 2; r1 = v_; } UPD(0x0C0AF8F8u, 2);  /* 0C0AF8F6 mov.w @Rm+,Rn */
	r4 = r13;  /* 0C0AF8F8 mov Rm,Rn */
	W32(r8, r6); UPD(0x0C0AF8FCu, 2);  /* 0C0AF8FA mov.l Rm,@Rn */
	IF(0x0C0AF8FCu); r1 <<= 16;  /* 0C0AF8FC shll16 Rn */
	r8 = 0xC069AF0u; UPD(0x0C0AF900u, 2);  /* 0C0AF8FE mov.l @(disp,pc),Rn */
	r5 = r12;  /* 0C0AF900 mov Rm,Rn */
	r10 = R32(r9 + 0x28u); UPD(0x0C0AF904u, 2);  /* 0C0AF902 mov.l @(disp,Rm),Rn */
	IF(0x0C0AF904u); { u32 t_ = r8; PR = 0x0C0AF908u; r10 += r1; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0AF908u); }  /* 0C0AF904 jsr @Rn */
L_0C0AF908: BLKS(0x0C0AF908u);
	r10 += r0;  /* 0C0AF908 add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0AF90Cu, 2);  /* 0C0AF90A mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0AF90C add #imm,Rn */
	IF(0x0C0AF90Eu); r5 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0AF910u, 2);  /* 0C0AF90E mov.b @(r0,Rm),Rn */
	r6 = r11;  /* 0C0AF910 mov Rm,Rn */
	r4 = r5 & 0xFF;  /* 0C0AF912 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C0AF916u, 3);  /* 0C0AF914 mov.l Rm,@Rn */
	r0 = r9;  /* 0C0AF916 mov Rm,Rn */
	r3 = 0xA9u; UPD(0x0C0AF91Au, 2);  /* 0C0AF918 mov.w @(disp,pc),Rn */
	r7 = r10;  /* 0C0AF91A mov Rm,Rn */
	IF(0x0C0AF91Cu); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0AF91Eu, 2);  /* 0C0AF91C mov.b @(r0,Rm),Rn */
	r8 = 0xC0BD6F0u; UPD(0x0C0AF920u, 1);  /* 0C0AF91E mov.l @(disp,pc),Rn */
	r0 = r2 & 0xFF;  /* 0C0AF920 extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0AF924u, 2);  /* 0C0AF922 mov.l Rm,@(disp,Rn) */
	r5 = R32(r14); UPD(0x0C0AF926u, 1);  /* 0C0AF924 mov.l @Rm,Rn */
	IF(0x0C0AF926u); { u32 t_ = r8; PR = 0x0C0AF92Au; r4 = R32(r9); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C0AF92Au); }  /* 0C0AF926 jsr @Rn */
L_0C0AF92A: BLKS(0x0C0AF92Au);
	r0 = 0x1u;  /* 0C0AF92A mov #imm,Rn */
	r14 += 0x4u;  /* 0C0AF92C add #imm,Rn */
	r15 = r14;  /* 0C0AF92E mov Rm,Rn */
	IF(0x0C0AF930u); PR = R32(r15); r15 += 4; UPD(0x0C0AF932u, 4);  /* 0C0AF930 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AF934u, 1);  /* 0C0AF932 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0AF936u, 1);  /* 0C0AF934 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0AF938u, 1);  /* 0C0AF936 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0AF93Au, 1);  /* 0C0AF938 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AF93Cu, 1);  /* 0C0AF93A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AF93Eu, 1);  /* 0C0AF93C mov.l @Rm+,Rn */
	IF(0x0C0AF93Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AF93E rts */
}

void blk_f_0C0AF960(sh3_t *c)
{
	LOCALS;
L_0C0AF960: BLKS(0x0C0AF960u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF962u, 1);  /* 0C0AF960 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF964u, 1);  /* 0C0AF962 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF966u, 1);  /* 0C0AF964 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF968u, 1);  /* 0C0AF966 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF96Au, 1);  /* 0C0AF968 mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C0AF96A exts.w Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF96Eu, 2);  /* 0C0AF96C mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AF970u, 1);  /* 0C0AF96E mov.l Rm,@-Rn */
	r8 = 0xC2B1A3Cu; UPD(0x0C0AF972u, 1);  /* 0C0AF970 mov.l @(disp,pc),Rn */
	IF(0x0C0AF972u); r15 -= 4; W32(r15, PR); UPD(0x0C0AF974u, 1);  /* 0C0AF972 sts.l pr,@-Rn */
	r13 = R32(r8); UPD(0x0C0AF976u, 1);  /* 0C0AF974 mov.l @Rm,Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0AF976 add #imm,Rn */
	r9 = 0xC0C2360u; UPD(0x0C0AF97Au, 2);  /* 0C0AF978 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0AF97A mov Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r13); r13 += 2; r4 = v_; } UPD(0x0C0AF97Eu, 2);  /* 0C0AF97C mov.w @Rm+,Rn */
	W32(r14, r4); UPD(0x0C0AF980u, 1);  /* 0C0AF97E mov.l Rm,@Rn */
	IF(0x0C0AF980u); { u32 t_ = r9; PR = 0x0C0AF984u; W32(r8, r13); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C0AF984u); }  /* 0C0AF980 jsr @Rn */
L_0C0AF984: BLKS(0x0C0AF984u);
	r2 = R32(r8); UPD(0x0C0AF986u, 1);  /* 0C0AF984 mov.l @Rm,Rn */
	r13 = (u32)(s32)(s16)r0;  /* 0C0AF986 exts.w Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r2); r2 += 2; r12 = v_; } UPD(0x0C0AF98Au, 2);  /* 0C0AF988 mov.w @Rm+,Rn */
	IF(0x0C0AF98Au); { u32 t_ = r9; PR = 0x0C0AF98Eu; W32(r8, r2); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C0AF98Eu); }  /* 0C0AF98A jsr @Rn */
L_0C0AF98E: BLKS(0x0C0AF98Eu);
	IF(0x0C0AF98Eu); MACL = r12 * r0;  /* 0C0AF98E mul.l Rm,Rn */
	r9 = 0xB4u; UPD(0x0C0AF992u, 3);  /* 0C0AF990 mov.w @(disp,pc),Rn */
	r4 = r13;  /* 0C0AF992 mov Rm,Rn */
	IF(0x0C0AF994u); r12 = MACL;  /* 0C0AF994 sts macl,Rn */
	IF(0x0C0AF996u); MACL = r11 * r9;  /* 0C0AF996 mul.l Rm,Rn */
	r7 = R32(r8); UPD(0x0C0AF99Au, 5);  /* 0C0AF998 mov.l @Rm,Rn */
	r12 += r12;  /* 0C0AF99A add Rm,Rn */
	r11 = 0xC286578u; UPD(0x0C0AF99Eu, 2);  /* 0C0AF99C mov.l @(disp,pc),Rn */
	IF(0x0C0AF99Eu); r9 = MACL;  /* 0C0AF99E sts macl,Rn */
	r9 += r11;  /* 0C0AF9A0 add Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r7); r7 += 2; r0 = v_; } UPD(0x0C0AF9A4u, 3);  /* 0C0AF9A2 mov.w @Rm+,Rn */
	r5 = r12;  /* 0C0AF9A4 mov Rm,Rn */
	r10 = 0xC069B20u; UPD(0x0C0AF9A8u, 2);  /* 0C0AF9A6 mov.l @(disp,pc),Rn */
	IF(0x0C0AF9A8u); r0 <<= 16;  /* 0C0AF9A8 shll16 Rn */
	r11 = R32(r9 + 0x24u); UPD(0x0C0AF9ACu, 2);  /* 0C0AF9AA mov.l @(disp,Rm),Rn */
	W32(r8, r7); UPD(0x0C0AF9AEu, 1);  /* 0C0AF9AC mov.l Rm,@Rn */
	IF(0x0C0AF9AEu); { u32 t_ = r10; PR = 0x0C0AF9B2u; r11 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0AF9B2u); }  /* 0C0AF9AE jsr @Rn */
L_0C0AF9B2: BLKS(0x0C0AF9B2u);
	r6 = R32(r8); UPD(0x0C0AF9B4u, 1);  /* 0C0AF9B2 mov.l @Rm,Rn */
	r11 += r0;  /* 0C0AF9B4 add Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r6); r6 += 2; r1 = v_; } UPD(0x0C0AF9B8u, 2);  /* 0C0AF9B6 mov.w @Rm+,Rn */
	r4 = r13;  /* 0C0AF9B8 mov Rm,Rn */
	W32(r8, r6); UPD(0x0C0AF9BCu, 2);  /* 0C0AF9BA mov.l Rm,@Rn */
	IF(0x0C0AF9BCu); r1 <<= 16;  /* 0C0AF9BC shll16 Rn */
	r8 = 0xC069AF0u; UPD(0x0C0AF9C0u, 2);  /* 0C0AF9BE mov.l @(disp,pc),Rn */
	r5 = r12;  /* 0C0AF9C0 mov Rm,Rn */
	r10 = R32(r9 + 0x28u); UPD(0x0C0AF9C4u, 2);  /* 0C0AF9C2 mov.l @(disp,Rm),Rn */
	IF(0x0C0AF9C4u); { u32 t_ = r8; PR = 0x0C0AF9C8u; r10 += r1; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0AF9C8u); }  /* 0C0AF9C4 jsr @Rn */
L_0C0AF9C8: BLKS(0x0C0AF9C8u);
	r10 += r0;  /* 0C0AF9C8 add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0AF9CCu, 2);  /* 0C0AF9CA mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0AF9CC add #imm,Rn */
	IF(0x0C0AF9CEu); r5 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0AF9D0u, 2);  /* 0C0AF9CE mov.b @(r0,Rm),Rn */
	r6 = r11;  /* 0C0AF9D0 mov Rm,Rn */
	r4 = r5 & 0xFF;  /* 0C0AF9D2 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C0AF9D6u, 3);  /* 0C0AF9D4 mov.l Rm,@Rn */
	r0 = r9;  /* 0C0AF9D6 mov Rm,Rn */
	r3 = 0xA9u; UPD(0x0C0AF9DAu, 2);  /* 0C0AF9D8 mov.w @(disp,pc),Rn */
	r7 = r10;  /* 0C0AF9DA mov Rm,Rn */
	IF(0x0C0AF9DCu); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0AF9DEu, 2);  /* 0C0AF9DC mov.b @(r0,Rm),Rn */
	r8 = 0xC0BECB0u; UPD(0x0C0AF9E0u, 1);  /* 0C0AF9DE mov.l @(disp,pc),Rn */
	r0 = r2 & 0xFF;  /* 0C0AF9E0 extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0AF9E4u, 2);  /* 0C0AF9E2 mov.l Rm,@(disp,Rn) */
	r5 = R32(r14); UPD(0x0C0AF9E6u, 1);  /* 0C0AF9E4 mov.l @Rm,Rn */
	IF(0x0C0AF9E6u); { u32 t_ = r8; PR = 0x0C0AF9EAu; r4 = R32(r9); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BECB0, 0x0C0BECB0u, 0x0C0AF9EAu); }  /* 0C0AF9E6 jsr @Rn */
L_0C0AF9EA: BLKS(0x0C0AF9EAu);
	r0 = 0x1u;  /* 0C0AF9EA mov #imm,Rn */
	r14 += 0x4u;  /* 0C0AF9EC add #imm,Rn */
	r15 = r14;  /* 0C0AF9EE mov Rm,Rn */
	IF(0x0C0AF9F0u); PR = R32(r15); r15 += 4; UPD(0x0C0AF9F2u, 4);  /* 0C0AF9F0 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AF9F4u, 1);  /* 0C0AF9F2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0AF9F6u, 1);  /* 0C0AF9F4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0AF9F8u, 1);  /* 0C0AF9F6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0AF9FAu, 1);  /* 0C0AF9F8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AF9FCu, 1);  /* 0C0AF9FA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AF9FEu, 1);  /* 0C0AF9FC mov.l @Rm+,Rn */
	IF(0x0C0AF9FEu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AF9FE rts */
}

void blk_f_0C0AFA20(sh3_t *c)
{
	LOCALS;
L_0C0AFA20: BLKS(0x0C0AFA20u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AFA22u, 1);  /* 0C0AFA20 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AFA24u, 1);  /* 0C0AFA22 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AFA26u, 1);  /* 0C0AFA24 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0AFA28u, 1);  /* 0C0AFA26 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0AFA2Au, 1);  /* 0C0AFA28 mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C0AFA2A exts.w Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0AFA2Eu, 2);  /* 0C0AFA2C mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AFA30u, 1);  /* 0C0AFA2E mov.l Rm,@-Rn */
	r8 = 0xC2B1A3Cu; UPD(0x0C0AFA32u, 1);  /* 0C0AFA30 mov.l @(disp,pc),Rn */
	IF(0x0C0AFA32u); r15 -= 4; W32(r15, PR); UPD(0x0C0AFA34u, 1);  /* 0C0AFA32 sts.l pr,@-Rn */
	r13 = R32(r8); UPD(0x0C0AFA36u, 1);  /* 0C0AFA34 mov.l @Rm,Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0AFA36 add #imm,Rn */
	r9 = 0xC0C2360u; UPD(0x0C0AFA3Au, 2);  /* 0C0AFA38 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0AFA3A mov Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r13); r13 += 2; r4 = v_; } UPD(0x0C0AFA3Eu, 2);  /* 0C0AFA3C mov.w @Rm+,Rn */
	W32(r14, r4); UPD(0x0C0AFA40u, 1);  /* 0C0AFA3E mov.l Rm,@Rn */
	IF(0x0C0AFA40u); { u32 t_ = r9; PR = 0x0C0AFA44u; W32(r8, r13); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C0AFA44u); }  /* 0C0AFA40 jsr @Rn */
L_0C0AFA44: BLKS(0x0C0AFA44u);
	r2 = R32(r8); UPD(0x0C0AFA46u, 1);  /* 0C0AFA44 mov.l @Rm,Rn */
	r13 = (u32)(s32)(s16)r0;  /* 0C0AFA46 exts.w Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r2); r2 += 2; r12 = v_; } UPD(0x0C0AFA4Au, 2);  /* 0C0AFA48 mov.w @Rm+,Rn */
	IF(0x0C0AFA4Au); { u32 t_ = r9; PR = 0x0C0AFA4Eu; W32(r8, r2); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C0AFA4Eu); }  /* 0C0AFA4A jsr @Rn */
L_0C0AFA4E: BLKS(0x0C0AFA4Eu);
	IF(0x0C0AFA4Eu); MACL = r12 * r0;  /* 0C0AFA4E mul.l Rm,Rn */
	r9 = 0xB4u; UPD(0x0C0AFA52u, 3);  /* 0C0AFA50 mov.w @(disp,pc),Rn */
	r4 = r13;  /* 0C0AFA52 mov Rm,Rn */
	IF(0x0C0AFA54u); r12 = MACL;  /* 0C0AFA54 sts macl,Rn */
	IF(0x0C0AFA56u); MACL = r11 * r9;  /* 0C0AFA56 mul.l Rm,Rn */
	r7 = R32(r8); UPD(0x0C0AFA5Au, 5);  /* 0C0AFA58 mov.l @Rm,Rn */
	r12 += r12;  /* 0C0AFA5A add Rm,Rn */
	r11 = 0xC286578u; UPD(0x0C0AFA5Eu, 2);  /* 0C0AFA5C mov.l @(disp,pc),Rn */
	IF(0x0C0AFA5Eu); r9 = MACL;  /* 0C0AFA5E sts macl,Rn */
	r9 += r11;  /* 0C0AFA60 add Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r7); r7 += 2; r0 = v_; } UPD(0x0C0AFA64u, 3);  /* 0C0AFA62 mov.w @Rm+,Rn */
	r5 = r12;  /* 0C0AFA64 mov Rm,Rn */
	r10 = 0xC069B20u; UPD(0x0C0AFA68u, 2);  /* 0C0AFA66 mov.l @(disp,pc),Rn */
	IF(0x0C0AFA68u); r0 <<= 16;  /* 0C0AFA68 shll16 Rn */
	r11 = R32(r9 + 0x24u); UPD(0x0C0AFA6Cu, 2);  /* 0C0AFA6A mov.l @(disp,Rm),Rn */
	W32(r8, r7); UPD(0x0C0AFA6Eu, 1);  /* 0C0AFA6C mov.l Rm,@Rn */
	IF(0x0C0AFA6Eu); { u32 t_ = r10; PR = 0x0C0AFA72u; r11 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0AFA72u); }  /* 0C0AFA6E jsr @Rn */
L_0C0AFA72: BLKS(0x0C0AFA72u);
	r6 = R32(r8); UPD(0x0C0AFA74u, 1);  /* 0C0AFA72 mov.l @Rm,Rn */
	r11 += r0;  /* 0C0AFA74 add Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r6); r6 += 2; r1 = v_; } UPD(0x0C0AFA78u, 2);  /* 0C0AFA76 mov.w @Rm+,Rn */
	r4 = r13;  /* 0C0AFA78 mov Rm,Rn */
	W32(r8, r6); UPD(0x0C0AFA7Cu, 2);  /* 0C0AFA7A mov.l Rm,@Rn */
	IF(0x0C0AFA7Cu); r1 <<= 16;  /* 0C0AFA7C shll16 Rn */
	r8 = 0xC069AF0u; UPD(0x0C0AFA80u, 2);  /* 0C0AFA7E mov.l @(disp,pc),Rn */
	r5 = r12;  /* 0C0AFA80 mov Rm,Rn */
	r10 = R32(r9 + 0x28u); UPD(0x0C0AFA84u, 2);  /* 0C0AFA82 mov.l @(disp,Rm),Rn */
	IF(0x0C0AFA84u); { u32 t_ = r8; PR = 0x0C0AFA88u; r10 += r1; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0AFA88u); }  /* 0C0AFA84 jsr @Rn */
L_0C0AFA88: BLKS(0x0C0AFA88u);
	r10 += r0;  /* 0C0AFA88 add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0AFA8Cu, 2);  /* 0C0AFA8A mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0AFA8C add #imm,Rn */
	IF(0x0C0AFA8Eu); r5 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0AFA90u, 2);  /* 0C0AFA8E mov.b @(r0,Rm),Rn */
	r6 = r11;  /* 0C0AFA90 mov Rm,Rn */
	r4 = r5 & 0xFF;  /* 0C0AFA92 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C0AFA96u, 3);  /* 0C0AFA94 mov.l Rm,@Rn */
	r0 = r9;  /* 0C0AFA96 mov Rm,Rn */
	r3 = 0xA9u; UPD(0x0C0AFA9Au, 2);  /* 0C0AFA98 mov.w @(disp,pc),Rn */
	r7 = r10;  /* 0C0AFA9A mov Rm,Rn */
	IF(0x0C0AFA9Cu); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0AFA9Eu, 2);  /* 0C0AFA9C mov.b @(r0,Rm),Rn */
	r8 = 0xC0BFE70u; UPD(0x0C0AFAA0u, 1);  /* 0C0AFA9E mov.l @(disp,pc),Rn */
	r0 = r2 & 0xFF;  /* 0C0AFAA0 extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0AFAA4u, 2);  /* 0C0AFAA2 mov.l Rm,@(disp,Rn) */
	r5 = R32(r14); UPD(0x0C0AFAA6u, 1);  /* 0C0AFAA4 mov.l @Rm,Rn */
	IF(0x0C0AFAA6u); { u32 t_ = r8; PR = 0x0C0AFAAAu; r4 = R32(r9); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BFE70, 0x0C0BFE70u, 0x0C0AFAAAu); }  /* 0C0AFAA6 jsr @Rn */
L_0C0AFAAA: BLKS(0x0C0AFAAAu);
	r0 = 0x1u;  /* 0C0AFAAA mov #imm,Rn */
	r14 += 0x4u;  /* 0C0AFAAC add #imm,Rn */
	r15 = r14;  /* 0C0AFAAE mov Rm,Rn */
	IF(0x0C0AFAB0u); PR = R32(r15); r15 += 4; UPD(0x0C0AFAB2u, 4);  /* 0C0AFAB0 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AFAB4u, 1);  /* 0C0AFAB2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0AFAB6u, 1);  /* 0C0AFAB4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0AFAB8u, 1);  /* 0C0AFAB6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0AFABAu, 1);  /* 0C0AFAB8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AFABCu, 1);  /* 0C0AFABA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AFABEu, 1);  /* 0C0AFABC mov.l @Rm+,Rn */
	IF(0x0C0AFABEu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AFABE rts */
}

void blk_f_0C0AFAE0(sh3_t *c)
{
	LOCALS;
L_0C0AFAE0: BLKS(0x0C0AFAE0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AFAE2u, 1);  /* 0C0AFAE0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AFAE4u, 1);  /* 0C0AFAE2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AFAE6u, 1);  /* 0C0AFAE4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0AFAE8u, 1);  /* 0C0AFAE6 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0AFAEAu, 1);  /* 0C0AFAE8 mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C0AFAEA exts.w Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0AFAEEu, 2);  /* 0C0AFAEC mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AFAF0u, 1);  /* 0C0AFAEE mov.l Rm,@-Rn */
	r8 = 0xC2B1A3Cu; UPD(0x0C0AFAF2u, 1);  /* 0C0AFAF0 mov.l @(disp,pc),Rn */
	IF(0x0C0AFAF2u); r15 -= 4; W32(r15, PR); UPD(0x0C0AFAF4u, 1);  /* 0C0AFAF2 sts.l pr,@-Rn */
	r13 = R32(r8); UPD(0x0C0AFAF6u, 1);  /* 0C0AFAF4 mov.l @Rm,Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0AFAF6 add #imm,Rn */
	r9 = 0xC0C2360u; UPD(0x0C0AFAFAu, 2);  /* 0C0AFAF8 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0AFAFA mov Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r13); r13 += 2; r4 = v_; } UPD(0x0C0AFAFEu, 2);  /* 0C0AFAFC mov.w @Rm+,Rn */
	W32(r14, r4); UPD(0x0C0AFB00u, 1);  /* 0C0AFAFE mov.l Rm,@Rn */
	IF(0x0C0AFB00u); { u32 t_ = r9; PR = 0x0C0AFB04u; W32(r8, r13); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C0AFB04u); }  /* 0C0AFB00 jsr @Rn */
L_0C0AFB04: BLKS(0x0C0AFB04u);
	r2 = R32(r8); UPD(0x0C0AFB06u, 1);  /* 0C0AFB04 mov.l @Rm,Rn */
	r13 = (u32)(s32)(s16)r0;  /* 0C0AFB06 exts.w Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r2); r2 += 2; r12 = v_; } UPD(0x0C0AFB0Au, 2);  /* 0C0AFB08 mov.w @Rm+,Rn */
	IF(0x0C0AFB0Au); { u32 t_ = r9; PR = 0x0C0AFB0Eu; W32(r8, r2); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C0AFB0Eu); }  /* 0C0AFB0A jsr @Rn */
L_0C0AFB0E: BLKS(0x0C0AFB0Eu);
	IF(0x0C0AFB0Eu); MACL = r12 * r0;  /* 0C0AFB0E mul.l Rm,Rn */
	r9 = 0xB4u; UPD(0x0C0AFB12u, 3);  /* 0C0AFB10 mov.w @(disp,pc),Rn */
	r4 = r13;  /* 0C0AFB12 mov Rm,Rn */
	IF(0x0C0AFB14u); r12 = MACL;  /* 0C0AFB14 sts macl,Rn */
	IF(0x0C0AFB16u); MACL = r11 * r9;  /* 0C0AFB16 mul.l Rm,Rn */
	r7 = R32(r8); UPD(0x0C0AFB1Au, 5);  /* 0C0AFB18 mov.l @Rm,Rn */
	r12 += r12;  /* 0C0AFB1A add Rm,Rn */
	r11 = 0xC286578u; UPD(0x0C0AFB1Eu, 2);  /* 0C0AFB1C mov.l @(disp,pc),Rn */
	IF(0x0C0AFB1Eu); r9 = MACL;  /* 0C0AFB1E sts macl,Rn */
	r9 += r11;  /* 0C0AFB20 add Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r7); r7 += 2; r0 = v_; } UPD(0x0C0AFB24u, 3);  /* 0C0AFB22 mov.w @Rm+,Rn */
	r5 = r12;  /* 0C0AFB24 mov Rm,Rn */
	r10 = 0xC069B20u; UPD(0x0C0AFB28u, 2);  /* 0C0AFB26 mov.l @(disp,pc),Rn */
	IF(0x0C0AFB28u); r0 <<= 16;  /* 0C0AFB28 shll16 Rn */
	r11 = R32(r9 + 0x24u); UPD(0x0C0AFB2Cu, 2);  /* 0C0AFB2A mov.l @(disp,Rm),Rn */
	W32(r8, r7); UPD(0x0C0AFB2Eu, 1);  /* 0C0AFB2C mov.l Rm,@Rn */
	IF(0x0C0AFB2Eu); { u32 t_ = r10; PR = 0x0C0AFB32u; r11 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0AFB32u); }  /* 0C0AFB2E jsr @Rn */
L_0C0AFB32: BLKS(0x0C0AFB32u);
	r6 = R32(r8); UPD(0x0C0AFB34u, 1);  /* 0C0AFB32 mov.l @Rm,Rn */
	r11 += r0;  /* 0C0AFB34 add Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r6); r6 += 2; r1 = v_; } UPD(0x0C0AFB38u, 2);  /* 0C0AFB36 mov.w @Rm+,Rn */
	r4 = r13;  /* 0C0AFB38 mov Rm,Rn */
	W32(r8, r6); UPD(0x0C0AFB3Cu, 2);  /* 0C0AFB3A mov.l Rm,@Rn */
	IF(0x0C0AFB3Cu); r1 <<= 16;  /* 0C0AFB3C shll16 Rn */
	r8 = 0xC069AF0u; UPD(0x0C0AFB40u, 2);  /* 0C0AFB3E mov.l @(disp,pc),Rn */
	r5 = r12;  /* 0C0AFB40 mov Rm,Rn */
	r10 = R32(r9 + 0x28u); UPD(0x0C0AFB44u, 2);  /* 0C0AFB42 mov.l @(disp,Rm),Rn */
	IF(0x0C0AFB44u); { u32 t_ = r8; PR = 0x0C0AFB48u; r10 += r1; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0AFB48u); }  /* 0C0AFB44 jsr @Rn */
L_0C0AFB48: BLKS(0x0C0AFB48u);
	r10 += r0;  /* 0C0AFB48 add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0AFB4Cu, 2);  /* 0C0AFB4A mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0AFB4C add #imm,Rn */
	IF(0x0C0AFB4Eu); r5 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0AFB50u, 2);  /* 0C0AFB4E mov.b @(r0,Rm),Rn */
	r6 = r11;  /* 0C0AFB50 mov Rm,Rn */
	r4 = r5 & 0xFF;  /* 0C0AFB52 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C0AFB56u, 3);  /* 0C0AFB54 mov.l Rm,@Rn */
	r0 = r9;  /* 0C0AFB56 mov Rm,Rn */
	r3 = 0xA9u; UPD(0x0C0AFB5Au, 2);  /* 0C0AFB58 mov.w @(disp,pc),Rn */
	r7 = r10;  /* 0C0AFB5A mov Rm,Rn */
	IF(0x0C0AFB5Cu); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0AFB5Eu, 2);  /* 0C0AFB5C mov.b @(r0,Rm),Rn */
	r8 = 0xC0C0030u; UPD(0x0C0AFB60u, 1);  /* 0C0AFB5E mov.l @(disp,pc),Rn */
	r0 = r2 & 0xFF;  /* 0C0AFB60 extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0AFB64u, 2);  /* 0C0AFB62 mov.l Rm,@(disp,Rn) */
	r5 = R32(r14); UPD(0x0C0AFB66u, 1);  /* 0C0AFB64 mov.l @Rm,Rn */
	IF(0x0C0AFB66u); { u32 t_ = r8; PR = 0x0C0AFB6Au; r4 = R32(r9); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C0030, 0x0C0C0030u, 0x0C0AFB6Au); }  /* 0C0AFB66 jsr @Rn */
L_0C0AFB6A: BLKS(0x0C0AFB6Au);
	r0 = 0x1u;  /* 0C0AFB6A mov #imm,Rn */
	r14 += 0x4u;  /* 0C0AFB6C add #imm,Rn */
	r15 = r14;  /* 0C0AFB6E mov Rm,Rn */
	IF(0x0C0AFB70u); PR = R32(r15); r15 += 4; UPD(0x0C0AFB72u, 4);  /* 0C0AFB70 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AFB74u, 1);  /* 0C0AFB72 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0AFB76u, 1);  /* 0C0AFB74 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0AFB78u, 1);  /* 0C0AFB76 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0AFB7Au, 1);  /* 0C0AFB78 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AFB7Cu, 1);  /* 0C0AFB7A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AFB7Eu, 1);  /* 0C0AFB7C mov.l @Rm+,Rn */
	IF(0x0C0AFB7Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AFB7E rts */
}

void blk_f_0C0AFBA0(sh3_t *c)
{
	LOCALS;
L_0C0AFBA0: BLKS(0x0C0AFBA0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AFBA2u, 1);  /* 0C0AFBA0 mov.l Rm,@-Rn */
	r2 = (u32)(s32)(s16)r4;  /* 0C0AFBA2 exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AFBA6u, 2);  /* 0C0AFBA4 mov.l Rm,@-Rn */
	r0 = 0xC2B1A3Cu; UPD(0x0C0AFBA8u, 1);  /* 0C0AFBA6 mov.l @(disp,pc),Rn */
	IF(0x0C0AFBA8u); r15 -= 4; W32(r15, PR); UPD(0x0C0AFBAAu, 1);  /* 0C0AFBA8 sts.l pr,@-Rn */
	r3 = 0xB4u; UPD(0x0C0AFBACu, 1);  /* 0C0AFBAA mov.w @(disp,pc),Rn */
	r14 = r15;  /* 0C0AFBAC mov Rm,Rn */
	r7 = R32(r0); UPD(0x0C0AFBB0u, 2);  /* 0C0AFBAE mov.l @Rm,Rn */
	IF(0x0C0AFBB0u); MACL = r2 * r3;  /* 0C0AFBB0 mul.l Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r7); r7 += 2; r8 = v_; } UPD(0x0C0AFBB4u, 3);  /* 0C0AFBB2 mov.w @Rm+,Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0AFBB4 add #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r7); r7 += 2; r6 = v_; } UPD(0x0C0AFBB8u, 2);  /* 0C0AFBB6 mov.w @Rm+,Rn */
	IF(0x0C0AFBB8u); r3 = MACL;  /* 0C0AFBB8 sts macl,Rn */
	r5 = 0xC286578u; UPD(0x0C0AFBBCu, 2);  /* 0C0AFBBA mov.l @(disp,pc),Rn */
	IF(0x0C0AFBBCu); r6 <<= 16;  /* 0C0AFBBC shll16 Rn */
	r3 += r5;  /* 0C0AFBBE add Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r7); r7 += 2; r4 = v_; } UPD(0x0C0AFBC2u, 3);  /* 0C0AFBC0 mov.w @Rm+,Rn */
	r5 = R32(r3 + 0x24u); UPD(0x0C0AFBC4u, 1);  /* 0C0AFBC2 mov.l @(disp,Rm),Rn */
	IF(0x0C0AFBC4u); r4 <<= 16;  /* 0C0AFBC4 shll16 Rn */
	W32(r0, r7); UPD(0x0C0AFBC8u, 2);  /* 0C0AFBC6 mov.l Rm,@Rn */
	r5 += r6;  /* 0C0AFBC8 add Rm,Rn */
	r6 = R32(r3 + 0x28u); UPD(0x0C0AFBCCu, 2);  /* 0C0AFBCA mov.l @(disp,Rm),Rn */
	r0 = 0xB0u; UPD(0x0C0AFBCEu, 1);  /* 0C0AFBCC mov.w @(disp,pc),Rn */
	r6 += r4;  /* 0C0AFBCE add Rm,Rn */
	IF(0x0C0AFBD0u); r1 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0AFBD2u, 2);  /* 0C0AFBD0 mov.b @(r0,Rm),Rn */
	r4 = 0xA9u; UPD(0x0C0AFBD4u, 1);  /* 0C0AFBD2 mov.w @(disp,pc),Rn */
	r0 = r3;  /* 0C0AFBD4 mov Rm,Rn */
	IF(0x0C0AFBD6u); r2 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C0AFBD8u, 2);  /* 0C0AFBD6 mov.b @(r0,Rm),Rn */
	r7 = r1 & 0xFF;  /* 0C0AFBD8 extu.b Rm,Rn */
	r4 = r8;  /* 0C0AFBDA mov Rm,Rn */
	r8 = 0xC07DF30u; UPD(0x0C0AFBDEu, 3);  /* 0C0AFBDC mov.l @(disp,pc),Rn */
	r0 = r2 & 0xFF;  /* 0C0AFBDE extu.b Rm,Rn */
	IF(0x0C0AFBE0u); { u32 t_ = r8; PR = 0x0C0AFBE4u; W32(r15, r0); /* slot mov.l Rm,@Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C07DF30, 0x0C07DF30u, 0x0C0AFBE4u); }  /* 0C0AFBE0 jsr @Rn */
L_0C0AFBE4: BLKS(0x0C0AFBE4u);
	r0 = 0x1u;  /* 0C0AFBE4 mov #imm,Rn */
	r15 = r14;  /* 0C0AFBE6 mov Rm,Rn */
	IF(0x0C0AFBE8u); PR = R32(r15); r15 += 4; UPD(0x0C0AFBEAu, 3);  /* 0C0AFBE8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AFBECu, 1);  /* 0C0AFBEA mov.l @Rm+,Rn */
	IF(0x0C0AFBECu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AFBEC rts */
}


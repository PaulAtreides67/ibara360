#include "recomp.h"
#include "blk_recomp_funcs.h"

void blk_f_0C0ABE90(sh3_t *c)
{
	LOCALS;
L_0C0ABE90: BLKS(0x0C0ABE90u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0ABE92u, 1);  /* 0C0ABE90 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0ABE94u, 1);  /* 0C0ABE92 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C0ABE94 exts.w Rm,Rn */
	r3 = 0xC0A9AE0u; UPD(0x0C0ABE98u, 2);  /* 0C0ABE96 mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C0ABE98 mov Rm,Rn */
	IF(0x0C0ABE9Au); r15 -= 4; W32(r15, PR); UPD(0x0C0ABE9Cu, 2);  /* 0C0ABE9A sts.l pr,@-Rn */
	IF(0x0C0ABE9Cu); { u32 t_ = r3; PR = 0x0C0ABEA0u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C0ABEA0u); }  /* 0C0ABE9C jsr @Rn */
L_0C0ABEA0: BLKS(0x0C0ABEA0u);
	r4 = 0xB4u; UPD(0x0C0ABEA2u, 1);  /* 0C0ABEA0 mov.w @(disp,pc),Rn */
	r2 = 0x1u;  /* 0C0ABEA2 mov #imm,Rn */
	IF(0x0C0ABEA4u); MACL = r8 * r4;  /* 0C0ABEA4 mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C0ABEA8u, 4);  /* 0C0ABEA6 mov.l @(disp,pc),Rn */
	IF(0x0C0ABEA8u); r0 = MACL;  /* 0C0ABEA8 sts macl,Rn */
	r3 += r0;  /* 0C0ABEAA add Rm,Rn */
	r0 = 0xA5u; UPD(0x0C0ABEAEu, 3);  /* 0C0ABEAC mov.w @(disp,pc),Rn */
	IF(0x0C0ABEAEu); W8(r0 + r3, r2); UPD(0x0C0ABEB0u, 1);  /* 0C0ABEAE mov.b Rm,@(r0,Rn) */
	r15 = r14;  /* 0C0ABEB0 mov Rm,Rn */
	IF(0x0C0ABEB2u); PR = R32(r15); r15 += 4; UPD(0x0C0ABEB4u, 2);  /* 0C0ABEB2 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0ABEB6u, 1);  /* 0C0ABEB4 mov.l @Rm+,Rn */
	IF(0x0C0ABEB6u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0ABEB6 rts */
}

void blk_f_0C0ABF70(sh3_t *c)
{
	LOCALS;
L_0C0ABF70: BLKS(0x0C0ABF70u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0ABF72u, 1);  /* 0C0ABF70 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0ABF74u, 1);  /* 0C0ABF72 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0ABF76u, 1);  /* 0C0ABF74 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0ABF78u, 1);  /* 0C0ABF76 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0ABF7Au, 1);  /* 0C0ABF78 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0ABF7Cu, 1);  /* 0C0ABF7A mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0ABF7Eu, 1);  /* 0C0ABF7C mov.l Rm,@-Rn */
	r10 = 0xC2460ACu; UPD(0x0C0ABF80u, 1);  /* 0C0ABF7E mov.l @(disp,pc),Rn */
	IF(0x0C0ABF80u); r15 -= 4; W32(r15, PR); UPD(0x0C0ABF82u, 1);  /* 0C0ABF80 sts.l pr,@-Rn */
	r8 = 0xC069510u; UPD(0x0C0ABF84u, 1);  /* 0C0ABF82 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0ABF84 add #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r10); UPD(0x0C0ABF88u, 2);  /* 0C0ABF86 mov.w @Rm,Rn */
	r14 = r15;  /* 0C0ABF88 mov Rm,Rn */
	r5 = 0x8000u; UPD(0x0C0ABF8Cu, 2);  /* 0C0ABF8A mov.l @(disp,pc),Rn */
	IF(0x0C0ABF8Cu); { u32 t_ = r8; PR = 0x0C0ABF90u; r4 = r0 & 0xFFFF; /* slot extu.w Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069510, 0x0C069510u, 0x0C0ABF90u); }  /* 0C0ABF8C jsr @Rn */
L_0C0ABF90: BLKS(0x0C0ABF90u);
	T = (r0 & r0) == 0;  /* 0C0ABF90 tst Rm,Rn */
	if (!T) { UPD(0x0C0ABFB0u, 4); goto L_0C0ABFB0; }  /* 0C0ABF92 bf */
L_0C0ABF94: BLKS(0x0C0ABF94u);
	r0 = 0x1u;  /* 0C0ABF94 mov #imm,Rn */
	r14 += 0x4u;  /* 0C0ABF96 add #imm,Rn */
	r15 = r14;  /* 0C0ABF98 mov Rm,Rn */
	IF(0x0C0ABF9Au); PR = R32(r15); r15 += 4; UPD(0x0C0ABF9Cu, 4);  /* 0C0ABF9A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0ABF9Eu, 1);  /* 0C0ABF9C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0ABFA0u, 1);  /* 0C0ABF9E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0ABFA2u, 1);  /* 0C0ABFA0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0ABFA4u, 1);  /* 0C0ABFA2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0ABFA6u, 1);  /* 0C0ABFA4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0ABFA8u, 1);  /* 0C0ABFA6 mov.l @Rm+,Rn */
	IF(0x0C0ABFA8u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0ABFA8 rts */
L_0C0ABFB0: BLKS(0x0C0ABFB0u);
	r8 = 0xC071740u; UPD(0x0C0ABFB2u, 1);  /* 0C0ABFB0 mov.l @(disp,pc),Rn */
	IF(0x0C0ABFB2u); { u32 t_ = r8; PR = 0x0C0ABFB6u; r4 = 0x2u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C071740, 0x0C071740u, 0x0C0ABFB6u); }  /* 0C0ABFB2 jsr @Rn */
L_0C0ABFB6: BLKS(0x0C0ABFB6u);
	T = (r0 & r0) == 0;  /* 0C0ABFB6 tst Rm,Rn */
	if (T) { UPD(0x0C0ABF94u, 4); goto L_0C0ABF94; }  /* 0C0ABFB8 bt */
L_0C0ABFBA: BLKS(0x0C0ABFBAu);
	r4 = 0x0u;  /* 0C0ABFBA mov #imm,Rn */
	r8 = 0xC28EDFCu; UPD(0x0C0ABFBEu, 2);  /* 0C0ABFBC mov.l @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r8); r8 += 2; r12 = v_; } UPD(0x0C0ABFC0u, 1);  /* 0C0ABFBE mov.w @Rm+,Rn */
	r9 = 0xB4u; UPD(0x0C0ABFC2u, 1);  /* 0C0ABFC0 mov.w @(disp,pc),Rn */
	IF(0x0C0ABFC2u); MACL = r12 * r9;  /* 0C0ABFC2 mul.l Rm,Rn */
	r1 = 0xC286578u; UPD(0x0C0ABFC6u, 3);  /* 0C0ABFC4 mov.l @(disp,pc),Rn */
	IF(0x0C0ABFC6u); r9 = MACL;  /* 0C0ABFC6 sts macl,Rn */
	r9 += r1;  /* 0C0ABFC8 add Rm,Rn */
	r5 = (u32)(s32)(s16)R16(r10); UPD(0x0C0ABFCCu, 3);  /* 0C0ABFCA mov.w @Rm,Rn */
	r3 = 0xC0A8A30u; UPD(0x0C0ABFCEu, 1);  /* 0C0ABFCC mov.l @(disp,pc),Rn */
	r2 = r5 & 0xFFFF;  /* 0C0ABFCE extu.w Rm,Rn */
	r6 = 0xD3000104u; UPD(0x0C0ABFD2u, 2);  /* 0C0ABFD0 mov.l @(disp,pc),Rn */
	W32(r9 + 0xCu, r4); UPD(0x0C0ABFD4u, 1);  /* 0C0ABFD2 mov.l Rm,@(disp,Rn) */
	W32(r9 + 0x8u, r4); UPD(0x0C0ABFD6u, 1);  /* 0C0ABFD4 mov.l Rm,@(disp,Rn) */
	W32(r9, r6); UPD(0x0C0ABFD8u, 1);  /* 0C0ABFD6 mov.l Rm,@Rn */
	r4 = r12;  /* 0C0ABFD8 mov Rm,Rn */
	IF(0x0C0ABFDAu); { u32 t_ = r3; PR = 0x0C0ABFDEu; W32(r9 + 0x4u, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C0ABFDEu); }  /* 0C0ABFDA jsr @Rn */
L_0C0ABFDE: BLKS(0x0C0ABFDEu);
	r11 = 0xC0722E0u; UPD(0x0C0ABFE0u, 1);  /* 0C0ABFDE mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C0ABFE0 mov Rm,Rn */
	r0 = 0x1700000u; UPD(0x0C0ABFE4u, 2);  /* 0C0ABFE2 mov.l @(disp,pc),Rn */
	IF(0x0C0ABFE4u); { u32 t_ = r11; PR = 0x0C0ABFE8u; W32(r9 + 0x24u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0722E0, 0x0C0722E0u, 0x0C0ABFE8u); }  /* 0C0ABFE4 jsr @Rn */
L_0C0ABFE8: BLKS(0x0C0ABFE8u);
	r7 = 0xC0A9AE0u; UPD(0x0C0ABFEAu, 1);  /* 0C0ABFE8 mov.l @(disp,pc),Rn */
	r13 = 0x100u; UPD(0x0C0ABFECu, 1);  /* 0C0ABFEA mov.w @(disp,pc),Rn */
	IF(0x0C0ABFECu); { u32 t_ = r7; PR = 0x0C0ABFF0u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C0ABFF0u); }  /* 0C0ABFEC jsr @Rn */
L_0C0ABFF0: BLKS(0x0C0ABFF0u);
	r0 = 0x8Au; UPD(0x0C0ABFF2u, 1);  /* 0C0ABFF0 mov.w @(disp,pc),Rn */
	r11 = 0x14u;  /* 0C0ABFF2 mov #imm,Rn */
	IF(0x0C0ABFF4u); W16(r0 + r9, r13); UPD(0x0C0ABFF6u, 2);  /* 0C0ABFF4 mov.w Rm,@(r0,Rn) */
	r4 = 0x20u;  /* 0C0ABFF6 mov #imm,Rn */
	r0 += 0xFFFFFFFCu;  /* 0C0ABFF8 add #imm,Rn */
	IF(0x0C0ABFFAu); W16(r0 + r9, r13); UPD(0x0C0ABFFCu, 3);  /* 0C0ABFFA mov.w Rm,@(r0,Rn) */
	r3 = 0x0u;  /* 0C0ABFFC mov #imm,Rn */
	r10 = 0x28000u; UPD(0x0C0AC000u, 2);  /* 0C0ABFFE mov.l @(disp,pc),Rn */
	r0 += 0x6u;  /* 0C0AC000 add #imm,Rn */
	IF(0x0C0AC002u); W32(r0 + r9, r10); UPD(0x0C0AC004u, 2);  /* 0C0AC002 mov.l Rm,@(r0,Rn) */
	r13 = r9;  /* 0C0AC004 mov Rm,Rn */
	r6 = 0xACu; UPD(0x0C0AC008u, 2);  /* 0C0AC006 mov.w @(disp,pc),Rn */
	r10 = 0xA8u; UPD(0x0C0AC00Au, 1);  /* 0C0AC008 mov.w @(disp,pc),Rn */
	r6 += r9;  /* 0C0AC00A add Rm,Rn */
	r6 += 0x1u;  /* 0C0AC00C add #imm,Rn */
	W32(r14, r6); UPD(0x0C0AC010u, 3);  /* 0C0AC00E mov.l Rm,@Rn */
	r13 += r10;  /* 0C0AC010 add Rm,Rn */
	r13 += 0x1u;  /* 0C0AC012 add #imm,Rn */
	W8(r6, r11); UPD(0x0C0AC016u, 3);  /* 0C0AC014 mov.b Rm,@Rn */
	W8(r13, r11); UPD(0x0C0AC018u, 1);  /* 0C0AC016 mov.b Rm,@Rn */
	r11 = (u32)(s32)(s16)R16(r8); UPD(0x0C0AC01Au, 1);  /* 0C0AC018 mov.w @Rm,Rn */
	r8 = 0xB4u; UPD(0x0C0AC01Cu, 1);  /* 0C0AC01A mov.w @(disp,pc),Rn */
	IF(0x0C0AC01Cu); MACL = r11 * r8;  /* 0C0AC01C mul.l Rm,Rn */
	r1 = 0xC286578u; UPD(0x0C0AC020u, 3);  /* 0C0AC01E mov.l @(disp,pc),Rn */
	IF(0x0C0AC020u); r8 = MACL;  /* 0C0AC020 sts macl,Rn */
	r8 += r1;  /* 0C0AC022 add Rm,Rn */
	r8 += 0x7Cu;  /* 0C0AC024 add #imm,Rn */
	W16(r8, r12); UPD(0x0C0AC028u, 4);  /* 0C0AC026 mov.w Rm,@Rn */
	r0 = 0xC0A8A30u; UPD(0x0C0AC02Au, 1);  /* 0C0AC028 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFF84u;  /* 0C0AC02A add #imm,Rn */
	r5 = 0xC0000000u; UPD(0x0C0AC02Eu, 2);  /* 0C0AC02C mov.l @(disp,pc),Rn */
	r10 += r8;  /* 0C0AC02E add Rm,Rn */
	r2 = R32(r9 + 0x4u); UPD(0x0C0AC032u, 2);  /* 0C0AC030 mov.l @(disp,Rm),Rn */
	r10 += 0x1u;  /* 0C0AC032 add #imm,Rn */
	W32(r8 + 0x8u, r4); UPD(0x0C0AC036u, 2);  /* 0C0AC034 mov.l Rm,@(disp,Rn) */
	W32(r8, r5); UPD(0x0C0AC038u, 1);  /* 0C0AC036 mov.l Rm,@Rn */
	r4 = r11;  /* 0C0AC038 mov Rm,Rn */
	W32(r8 + 0x4u, r2); UPD(0x0C0AC03Cu, 2);  /* 0C0AC03A mov.l Rm,@(disp,Rn) */
	IF(0x0C0AC03Cu); { u32 t_ = r0; PR = 0x0C0AC040u; W32(r8 + 0xCu, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C0AC040u); }  /* 0C0AC03C jsr @Rn */
L_0C0AC040: BLKS(0x0C0AC040u);
	r6 = 0xC0A9AE0u; UPD(0x0C0AC042u, 1);  /* 0C0AC040 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C0AC042 mov Rm,Rn */
	r12 = R32(r9 + 0x24u); UPD(0x0C0AC046u, 2);  /* 0C0AC044 mov.l @(disp,Rm),Rn */
	r7 = R32(r9 + 0x28u); UPD(0x0C0AC048u, 1);  /* 0C0AC046 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x24u, r12); UPD(0x0C0AC04Au, 1);  /* 0C0AC048 mov.l Rm,@(disp,Rn) */
	IF(0x0C0AC04Au); { u32 t_ = r6; PR = 0x0C0AC04Eu; W32(r8 + 0x28u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C0AC04Eu); }  /* 0C0AC04A jsr @Rn */
L_0C0AC04E: BLKS(0x0C0AC04Eu);
	r0 = 0xB0u; UPD(0x0C0AC050u, 1);  /* 0C0AC04E mov.w @(disp,pc),Rn */
	r2 = (u32)(s32)(s8)R8(r13); UPD(0x0C0AC052u, 1);  /* 0C0AC050 mov.b @Rm,Rn */
	IF(0x0C0AC052u); r5 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0AC054u, 1);  /* 0C0AC052 mov.b @(r0,Rm),Rn */
	W8(r10, r2); UPD(0x0C0AC056u, 1);  /* 0C0AC054 mov.b Rm,@Rn */
	IF(0x0C0AC056u); W8(r0 + r8, r5); UPD(0x0C0AC058u, 1);  /* 0C0AC056 mov.b Rm,@(r0,Rn) */
	r4 = 0xACu; UPD(0x0C0AC05Au, 1);  /* 0C0AC058 mov.w @(disp,pc),Rn */
	r1 = R32(r14); UPD(0x0C0AC05Cu, 1);  /* 0C0AC05A mov.l @Rm,Rn */
	r8 += r4;  /* 0C0AC05C add Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r1); UPD(0x0C0AC060u, 2);  /* 0C0AC05E mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C0AC060 add #imm,Rn */
	{ W8(r8, r3); /* slot mov.b Rm,@Rn */ UPD(0x0C0ABF94u, 4); goto L_0C0ABF94; }  /* 0C0AC062 bra */
}

void blk_f_0C0AC0B0(sh3_t *c)
{
	LOCALS;
L_0C0AC0B0: BLKS(0x0C0AC0B0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC0B2u, 1);  /* 0C0AC0B0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC0B4u, 1);  /* 0C0AC0B2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC0B6u, 1);  /* 0C0AC0B4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC0B8u, 1);  /* 0C0AC0B6 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC0BAu, 1);  /* 0C0AC0B8 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC0BCu, 1);  /* 0C0AC0BA mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC0BEu, 1);  /* 0C0AC0BC mov.l Rm,@-Rn */
	r10 = 0xC2460ACu; UPD(0x0C0AC0C0u, 1);  /* 0C0AC0BE mov.l @(disp,pc),Rn */
	IF(0x0C0AC0C0u); r15 -= 4; W32(r15, PR); UPD(0x0C0AC0C2u, 1);  /* 0C0AC0C0 sts.l pr,@-Rn */
	r8 = 0xC069510u; UPD(0x0C0AC0C4u, 1);  /* 0C0AC0C2 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0AC0C4 add #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r10); UPD(0x0C0AC0C8u, 2);  /* 0C0AC0C6 mov.w @Rm,Rn */
	r14 = r15;  /* 0C0AC0C8 mov Rm,Rn */
	r5 = 0x8000u; UPD(0x0C0AC0CCu, 2);  /* 0C0AC0CA mov.l @(disp,pc),Rn */
	IF(0x0C0AC0CCu); { u32 t_ = r8; PR = 0x0C0AC0D0u; r4 = r0 & 0xFFFF; /* slot extu.w Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069510, 0x0C069510u, 0x0C0AC0D0u); }  /* 0C0AC0CC jsr @Rn */
L_0C0AC0D0: BLKS(0x0C0AC0D0u);
	T = (r0 & r0) == 0;  /* 0C0AC0D0 tst Rm,Rn */
	if (!T) { UPD(0x0C0AC0F0u, 4); goto L_0C0AC0F0; }  /* 0C0AC0D2 bf */
L_0C0AC0D4: BLKS(0x0C0AC0D4u);
	r0 = 0x1u;  /* 0C0AC0D4 mov #imm,Rn */
	r14 += 0x4u;  /* 0C0AC0D6 add #imm,Rn */
	r15 = r14;  /* 0C0AC0D8 mov Rm,Rn */
	IF(0x0C0AC0DAu); PR = R32(r15); r15 += 4; UPD(0x0C0AC0DCu, 4);  /* 0C0AC0DA lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AC0DEu, 1);  /* 0C0AC0DC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0AC0E0u, 1);  /* 0C0AC0DE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0AC0E2u, 1);  /* 0C0AC0E0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0AC0E4u, 1);  /* 0C0AC0E2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AC0E6u, 1);  /* 0C0AC0E4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AC0E8u, 1);  /* 0C0AC0E6 mov.l @Rm+,Rn */
	IF(0x0C0AC0E8u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AC0E8 rts */
L_0C0AC0F0: BLKS(0x0C0AC0F0u);
	r8 = 0xC071740u; UPD(0x0C0AC0F2u, 1);  /* 0C0AC0F0 mov.l @(disp,pc),Rn */
	IF(0x0C0AC0F2u); { u32 t_ = r8; PR = 0x0C0AC0F6u; r4 = 0x2u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C071740, 0x0C071740u, 0x0C0AC0F6u); }  /* 0C0AC0F2 jsr @Rn */
L_0C0AC0F6: BLKS(0x0C0AC0F6u);
	T = (r0 & r0) == 0;  /* 0C0AC0F6 tst Rm,Rn */
	if (T) { UPD(0x0C0AC0D4u, 4); goto L_0C0AC0D4; }  /* 0C0AC0F8 bt */
L_0C0AC0FA: BLKS(0x0C0AC0FAu);
	r4 = 0x0u;  /* 0C0AC0FA mov #imm,Rn */
	r8 = 0xC28EDFCu; UPD(0x0C0AC0FEu, 2);  /* 0C0AC0FC mov.l @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r8); r8 += 2; r12 = v_; } UPD(0x0C0AC100u, 1);  /* 0C0AC0FE mov.w @Rm+,Rn */
	r9 = 0xB4u; UPD(0x0C0AC102u, 1);  /* 0C0AC100 mov.w @(disp,pc),Rn */
	IF(0x0C0AC102u); MACL = r12 * r9;  /* 0C0AC102 mul.l Rm,Rn */
	r1 = 0xC286578u; UPD(0x0C0AC106u, 3);  /* 0C0AC104 mov.l @(disp,pc),Rn */
	IF(0x0C0AC106u); r9 = MACL;  /* 0C0AC106 sts macl,Rn */
	r9 += r1;  /* 0C0AC108 add Rm,Rn */
	r5 = (u32)(s32)(s16)R16(r10); UPD(0x0C0AC10Cu, 3);  /* 0C0AC10A mov.w @Rm,Rn */
	r3 = 0xC0A8A30u; UPD(0x0C0AC10Eu, 1);  /* 0C0AC10C mov.l @(disp,pc),Rn */
	r2 = r5 & 0xFFFF;  /* 0C0AC10E extu.w Rm,Rn */
	r6 = 0xD3000104u; UPD(0x0C0AC112u, 2);  /* 0C0AC110 mov.l @(disp,pc),Rn */
	W32(r9 + 0xCu, r4); UPD(0x0C0AC114u, 1);  /* 0C0AC112 mov.l Rm,@(disp,Rn) */
	W32(r9 + 0x8u, r4); UPD(0x0C0AC116u, 1);  /* 0C0AC114 mov.l Rm,@(disp,Rn) */
	W32(r9, r6); UPD(0x0C0AC118u, 1);  /* 0C0AC116 mov.l Rm,@Rn */
	r4 = r12;  /* 0C0AC118 mov Rm,Rn */
	IF(0x0C0AC11Au); { u32 t_ = r3; PR = 0x0C0AC11Eu; W32(r9 + 0x4u, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C0AC11Eu); }  /* 0C0AC11A jsr @Rn */
L_0C0AC11E: BLKS(0x0C0AC11Eu);
	r11 = 0xC0722E0u; UPD(0x0C0AC120u, 1);  /* 0C0AC11E mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C0AC120 mov Rm,Rn */
	r0 = 0x1700000u; UPD(0x0C0AC124u, 2);  /* 0C0AC122 mov.l @(disp,pc),Rn */
	IF(0x0C0AC124u); { u32 t_ = r11; PR = 0x0C0AC128u; W32(r9 + 0x24u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0722E0, 0x0C0722E0u, 0x0C0AC128u); }  /* 0C0AC124 jsr @Rn */
L_0C0AC128: BLKS(0x0C0AC128u);
	r7 = 0xC0A9AE0u; UPD(0x0C0AC12Au, 1);  /* 0C0AC128 mov.l @(disp,pc),Rn */
	r13 = 0x100u; UPD(0x0C0AC12Cu, 1);  /* 0C0AC12A mov.w @(disp,pc),Rn */
	IF(0x0C0AC12Cu); { u32 t_ = r7; PR = 0x0C0AC130u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C0AC130u); }  /* 0C0AC12C jsr @Rn */
L_0C0AC130: BLKS(0x0C0AC130u);
	r0 = 0x8Au; UPD(0x0C0AC132u, 1);  /* 0C0AC130 mov.w @(disp,pc),Rn */
	r11 = 0x14u;  /* 0C0AC132 mov #imm,Rn */
	IF(0x0C0AC134u); W16(r0 + r9, r13); UPD(0x0C0AC136u, 2);  /* 0C0AC134 mov.w Rm,@(r0,Rn) */
	r4 = 0x20u;  /* 0C0AC136 mov #imm,Rn */
	r0 += 0xFFFFFFFCu;  /* 0C0AC138 add #imm,Rn */
	IF(0x0C0AC13Au); W16(r0 + r9, r13); UPD(0x0C0AC13Cu, 3);  /* 0C0AC13A mov.w Rm,@(r0,Rn) */
	r3 = 0x0u;  /* 0C0AC13C mov #imm,Rn */
	r10 = 0x10000u; UPD(0x0C0AC140u, 2);  /* 0C0AC13E mov.l @(disp,pc),Rn */
	r0 += 0x6u;  /* 0C0AC140 add #imm,Rn */
	IF(0x0C0AC142u); W32(r0 + r9, r10); UPD(0x0C0AC144u, 2);  /* 0C0AC142 mov.l Rm,@(r0,Rn) */
	r13 = r9;  /* 0C0AC144 mov Rm,Rn */
	r6 = 0xACu; UPD(0x0C0AC148u, 2);  /* 0C0AC146 mov.w @(disp,pc),Rn */
	r10 = 0xA8u; UPD(0x0C0AC14Au, 1);  /* 0C0AC148 mov.w @(disp,pc),Rn */
	r6 += r9;  /* 0C0AC14A add Rm,Rn */
	r6 += 0x1u;  /* 0C0AC14C add #imm,Rn */
	W32(r14, r6); UPD(0x0C0AC150u, 3);  /* 0C0AC14E mov.l Rm,@Rn */
	r13 += r10;  /* 0C0AC150 add Rm,Rn */
	r13 += 0x1u;  /* 0C0AC152 add #imm,Rn */
	W8(r6, r11); UPD(0x0C0AC156u, 3);  /* 0C0AC154 mov.b Rm,@Rn */
	W8(r13, r11); UPD(0x0C0AC158u, 1);  /* 0C0AC156 mov.b Rm,@Rn */
	r11 = (u32)(s32)(s16)R16(r8); UPD(0x0C0AC15Au, 1);  /* 0C0AC158 mov.w @Rm,Rn */
	r8 = 0xB4u; UPD(0x0C0AC15Cu, 1);  /* 0C0AC15A mov.w @(disp,pc),Rn */
	IF(0x0C0AC15Cu); MACL = r11 * r8;  /* 0C0AC15C mul.l Rm,Rn */
	r1 = 0xC286578u; UPD(0x0C0AC160u, 3);  /* 0C0AC15E mov.l @(disp,pc),Rn */
	IF(0x0C0AC160u); r8 = MACL;  /* 0C0AC160 sts macl,Rn */
	r8 += r1;  /* 0C0AC162 add Rm,Rn */
	r8 += 0x7Cu;  /* 0C0AC164 add #imm,Rn */
	W16(r8, r12); UPD(0x0C0AC168u, 4);  /* 0C0AC166 mov.w Rm,@Rn */
	r0 = 0xC0A8A30u; UPD(0x0C0AC16Au, 1);  /* 0C0AC168 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFF84u;  /* 0C0AC16A add #imm,Rn */
	r5 = 0xC0000000u; UPD(0x0C0AC16Eu, 2);  /* 0C0AC16C mov.l @(disp,pc),Rn */
	r10 += r8;  /* 0C0AC16E add Rm,Rn */
	r2 = R32(r9 + 0x4u); UPD(0x0C0AC172u, 2);  /* 0C0AC170 mov.l @(disp,Rm),Rn */
	r10 += 0x1u;  /* 0C0AC172 add #imm,Rn */
	W32(r8 + 0x8u, r4); UPD(0x0C0AC176u, 2);  /* 0C0AC174 mov.l Rm,@(disp,Rn) */
	W32(r8, r5); UPD(0x0C0AC178u, 1);  /* 0C0AC176 mov.l Rm,@Rn */
	r4 = r11;  /* 0C0AC178 mov Rm,Rn */
	W32(r8 + 0x4u, r2); UPD(0x0C0AC17Cu, 2);  /* 0C0AC17A mov.l Rm,@(disp,Rn) */
	IF(0x0C0AC17Cu); { u32 t_ = r0; PR = 0x0C0AC180u; W32(r8 + 0xCu, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C0AC180u); }  /* 0C0AC17C jsr @Rn */
L_0C0AC180: BLKS(0x0C0AC180u);
	r6 = 0xC0A9AE0u; UPD(0x0C0AC182u, 1);  /* 0C0AC180 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C0AC182 mov Rm,Rn */
	r12 = R32(r9 + 0x24u); UPD(0x0C0AC186u, 2);  /* 0C0AC184 mov.l @(disp,Rm),Rn */
	r7 = R32(r9 + 0x28u); UPD(0x0C0AC188u, 1);  /* 0C0AC186 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x24u, r12); UPD(0x0C0AC18Au, 1);  /* 0C0AC188 mov.l Rm,@(disp,Rn) */
	IF(0x0C0AC18Au); { u32 t_ = r6; PR = 0x0C0AC18Eu; W32(r8 + 0x28u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C0AC18Eu); }  /* 0C0AC18A jsr @Rn */
L_0C0AC18E: BLKS(0x0C0AC18Eu);
	r0 = 0xB0u; UPD(0x0C0AC190u, 1);  /* 0C0AC18E mov.w @(disp,pc),Rn */
	r2 = (u32)(s32)(s8)R8(r13); UPD(0x0C0AC192u, 1);  /* 0C0AC190 mov.b @Rm,Rn */
	IF(0x0C0AC192u); r5 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0AC194u, 1);  /* 0C0AC192 mov.b @(r0,Rm),Rn */
	W8(r10, r2); UPD(0x0C0AC196u, 1);  /* 0C0AC194 mov.b Rm,@Rn */
	IF(0x0C0AC196u); W8(r0 + r8, r5); UPD(0x0C0AC198u, 1);  /* 0C0AC196 mov.b Rm,@(r0,Rn) */
	r4 = 0xACu; UPD(0x0C0AC19Au, 1);  /* 0C0AC198 mov.w @(disp,pc),Rn */
	r1 = R32(r14); UPD(0x0C0AC19Cu, 1);  /* 0C0AC19A mov.l @Rm,Rn */
	r8 += r4;  /* 0C0AC19C add Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r1); UPD(0x0C0AC1A0u, 2);  /* 0C0AC19E mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C0AC1A0 add #imm,Rn */
	{ W8(r8, r3); /* slot mov.b Rm,@Rn */ UPD(0x0C0AC0D4u, 4); goto L_0C0AC0D4; }  /* 0C0AC1A2 bra */
}

void blk_f_0C0AC1F0(sh3_t *c)
{
	LOCALS;
L_0C0AC1F0: BLKS(0x0C0AC1F0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC1F2u, 1);  /* 0C0AC1F0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC1F4u, 1);  /* 0C0AC1F2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC1F6u, 1);  /* 0C0AC1F4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC1F8u, 1);  /* 0C0AC1F6 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC1FAu, 1);  /* 0C0AC1F8 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC1FCu, 1);  /* 0C0AC1FA mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC1FEu, 1);  /* 0C0AC1FC mov.l Rm,@-Rn */
	r10 = 0xC2460ACu; UPD(0x0C0AC200u, 1);  /* 0C0AC1FE mov.l @(disp,pc),Rn */
	IF(0x0C0AC200u); r15 -= 4; W32(r15, PR); UPD(0x0C0AC202u, 1);  /* 0C0AC200 sts.l pr,@-Rn */
	r8 = 0xC069510u; UPD(0x0C0AC204u, 1);  /* 0C0AC202 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0AC204 add #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r10); UPD(0x0C0AC208u, 2);  /* 0C0AC206 mov.w @Rm,Rn */
	r14 = r15;  /* 0C0AC208 mov Rm,Rn */
	r11 = 0x8000u; UPD(0x0C0AC20Cu, 2);  /* 0C0AC20A mov.l @(disp,pc),Rn */
	r4 = r0 & 0xFFFF;  /* 0C0AC20C extu.w Rm,Rn */
	IF(0x0C0AC20Eu); { u32 t_ = r8; PR = 0x0C0AC212u; r5 = r11; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C069510, 0x0C069510u, 0x0C0AC212u); }  /* 0C0AC20E jsr @Rn */
L_0C0AC212: BLKS(0x0C0AC212u);
	T = (r0 & r0) == 0;  /* 0C0AC212 tst Rm,Rn */
	if (!T) { UPD(0x0C0AC230u, 4); goto L_0C0AC230; }  /* 0C0AC214 bf */
L_0C0AC216: BLKS(0x0C0AC216u);
	r0 = 0x1u;  /* 0C0AC216 mov #imm,Rn */
	r14 += 0x4u;  /* 0C0AC218 add #imm,Rn */
	r15 = r14;  /* 0C0AC21A mov Rm,Rn */
	IF(0x0C0AC21Cu); PR = R32(r15); r15 += 4; UPD(0x0C0AC21Eu, 4);  /* 0C0AC21C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AC220u, 1);  /* 0C0AC21E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0AC222u, 1);  /* 0C0AC220 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0AC224u, 1);  /* 0C0AC222 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0AC226u, 1);  /* 0C0AC224 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AC228u, 1);  /* 0C0AC226 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AC22Au, 1);  /* 0C0AC228 mov.l @Rm+,Rn */
	IF(0x0C0AC22Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AC22A rts */
L_0C0AC230: BLKS(0x0C0AC230u);
	r8 = 0xC071740u; UPD(0x0C0AC232u, 1);  /* 0C0AC230 mov.l @(disp,pc),Rn */
	IF(0x0C0AC232u); { u32 t_ = r8; PR = 0x0C0AC236u; r4 = 0x2u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C071740, 0x0C071740u, 0x0C0AC236u); }  /* 0C0AC232 jsr @Rn */
L_0C0AC236: BLKS(0x0C0AC236u);
	T = (r0 & r0) == 0;  /* 0C0AC236 tst Rm,Rn */
	if (T) { UPD(0x0C0AC216u, 4); goto L_0C0AC216; }  /* 0C0AC238 bt */
L_0C0AC23A: BLKS(0x0C0AC23Au);
	r3 = 0x0u;  /* 0C0AC23A mov #imm,Rn */
	r8 = 0xC28EDFCu; UPD(0x0C0AC23Eu, 2);  /* 0C0AC23C mov.l @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r8); r8 += 2; r12 = v_; } UPD(0x0C0AC240u, 1);  /* 0C0AC23E mov.w @Rm+,Rn */
	r9 = 0xB4u; UPD(0x0C0AC242u, 1);  /* 0C0AC240 mov.w @(disp,pc),Rn */
	IF(0x0C0AC242u); MACL = r12 * r9;  /* 0C0AC242 mul.l Rm,Rn */
	r2 = (u32)(s32)(s16)R16(r10); UPD(0x0C0AC246u, 3);  /* 0C0AC244 mov.w @Rm,Rn */
	r1 = 0xC286578u; UPD(0x0C0AC248u, 1);  /* 0C0AC246 mov.l @(disp,pc),Rn */
	IF(0x0C0AC248u); r9 = MACL;  /* 0C0AC248 sts macl,Rn */
	r9 += r1;  /* 0C0AC24A add Rm,Rn */
	r4 = r2 & 0xFFFF;  /* 0C0AC24C extu.w Rm,Rn */
	r0 = 0xC0A8A30u; UPD(0x0C0AC250u, 4);  /* 0C0AC24E mov.l @(disp,pc),Rn */
	r5 = 0xD3000104u; UPD(0x0C0AC252u, 1);  /* 0C0AC250 mov.l @(disp,pc),Rn */
	W32(r9 + 0x4u, r4); UPD(0x0C0AC254u, 1);  /* 0C0AC252 mov.l Rm,@(disp,Rn) */
	W32(r9, r5); UPD(0x0C0AC256u, 1);  /* 0C0AC254 mov.l Rm,@Rn */
	r4 = r12;  /* 0C0AC256 mov Rm,Rn */
	W32(r9 + 0xCu, r3); UPD(0x0C0AC25Au, 2);  /* 0C0AC258 mov.l Rm,@(disp,Rn) */
	IF(0x0C0AC25Au); { u32 t_ = r0; PR = 0x0C0AC25Eu; W32(r9 + 0x8u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C0AC25Eu); }  /* 0C0AC25A jsr @Rn */
L_0C0AC25E: BLKS(0x0C0AC25Eu);
	r10 = 0xC0722E0u; UPD(0x0C0AC260u, 1);  /* 0C0AC25E mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C0AC260 mov Rm,Rn */
	r7 = 0x1700000u; UPD(0x0C0AC264u, 2);  /* 0C0AC262 mov.l @(disp,pc),Rn */
	r13 = 0xC0A9AE0u; UPD(0x0C0AC266u, 1);  /* 0C0AC264 mov.l @(disp,pc),Rn */
	IF(0x0C0AC266u); { u32 t_ = r10; PR = 0x0C0AC26Au; W32(r9 + 0x24u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0722E0, 0x0C0722E0u, 0x0C0AC26Au); }  /* 0C0AC266 jsr @Rn */
L_0C0AC26A: BLKS(0x0C0AC26Au);
	IF(0x0C0AC26Au); { u32 t_ = r13; PR = 0x0C0AC26Eu; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C0AC26Eu); }  /* 0C0AC26A jsr @Rn */
L_0C0AC26E: BLKS(0x0C0AC26Eu);
	r10 = 0x100u; UPD(0x0C0AC270u, 1);  /* 0C0AC26E mov.w @(disp,pc),Rn */
	r13 = r9;  /* 0C0AC270 mov Rm,Rn */
	r0 = 0x8Au; UPD(0x0C0AC274u, 2);  /* 0C0AC272 mov.w @(disp,pc),Rn */
	r4 = 0x20u;  /* 0C0AC274 mov #imm,Rn */
	IF(0x0C0AC276u); W16(r0 + r9, r10); UPD(0x0C0AC278u, 2);  /* 0C0AC276 mov.w Rm,@(r0,Rn) */
	r3 = 0x0u;  /* 0C0AC278 mov #imm,Rn */
	r0 += 0xFFFFFFFCu;  /* 0C0AC27A add #imm,Rn */
	IF(0x0C0AC27Cu); W16(r0 + r9, r10); UPD(0x0C0AC27Eu, 3);  /* 0C0AC27C mov.w Rm,@(r0,Rn) */
	r6 = 0xACu; UPD(0x0C0AC280u, 1);  /* 0C0AC27E mov.w @(disp,pc),Rn */
	r0 += 0x6u;  /* 0C0AC280 add #imm,Rn */
	r10 = 0xA8u; UPD(0x0C0AC284u, 2);  /* 0C0AC282 mov.w @(disp,pc),Rn */
	r6 += r9;  /* 0C0AC284 add Rm,Rn */
	r6 += 0x1u;  /* 0C0AC286 add #imm,Rn */
	IF(0x0C0AC288u); W32(r0 + r9, r11); UPD(0x0C0AC28Au, 3);  /* 0C0AC288 mov.l Rm,@(r0,Rn) */
	r13 += r10;  /* 0C0AC28A add Rm,Rn */
	W32(r14, r6); UPD(0x0C0AC28Eu, 2);  /* 0C0AC28C mov.l Rm,@Rn */
	r11 = 0x14u;  /* 0C0AC28E mov #imm,Rn */
	r13 += 0x1u;  /* 0C0AC290 add #imm,Rn */
	W8(r6, r11); UPD(0x0C0AC294u, 3);  /* 0C0AC292 mov.b Rm,@Rn */
	W8(r13, r11); UPD(0x0C0AC296u, 1);  /* 0C0AC294 mov.b Rm,@Rn */
	r11 = (u32)(s32)(s16)R16(r8); UPD(0x0C0AC298u, 1);  /* 0C0AC296 mov.w @Rm,Rn */
	r8 = 0xB4u; UPD(0x0C0AC29Au, 1);  /* 0C0AC298 mov.w @(disp,pc),Rn */
	IF(0x0C0AC29Au); MACL = r11 * r8;  /* 0C0AC29A mul.l Rm,Rn */
	r1 = 0xC286578u; UPD(0x0C0AC29Eu, 3);  /* 0C0AC29C mov.l @(disp,pc),Rn */
	IF(0x0C0AC29Eu); r8 = MACL;  /* 0C0AC29E sts macl,Rn */
	r8 += r1;  /* 0C0AC2A0 add Rm,Rn */
	r8 += 0x7Cu;  /* 0C0AC2A2 add #imm,Rn */
	W16(r8, r12); UPD(0x0C0AC2A6u, 4);  /* 0C0AC2A4 mov.w Rm,@Rn */
	r0 = 0xC0A8A30u; UPD(0x0C0AC2A8u, 1);  /* 0C0AC2A6 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFF84u;  /* 0C0AC2A8 add #imm,Rn */
	r5 = 0xC0000000u; UPD(0x0C0AC2ACu, 2);  /* 0C0AC2AA mov.l @(disp,pc),Rn */
	r10 += r8;  /* 0C0AC2AC add Rm,Rn */
	r2 = R32(r9 + 0x4u); UPD(0x0C0AC2B0u, 2);  /* 0C0AC2AE mov.l @(disp,Rm),Rn */
	r10 += 0x1u;  /* 0C0AC2B0 add #imm,Rn */
	W32(r8 + 0x8u, r4); UPD(0x0C0AC2B4u, 2);  /* 0C0AC2B2 mov.l Rm,@(disp,Rn) */
	W32(r8, r5); UPD(0x0C0AC2B6u, 1);  /* 0C0AC2B4 mov.l Rm,@Rn */
	r4 = r11;  /* 0C0AC2B6 mov Rm,Rn */
	W32(r8 + 0x4u, r2); UPD(0x0C0AC2BAu, 2);  /* 0C0AC2B8 mov.l Rm,@(disp,Rn) */
	IF(0x0C0AC2BAu); { u32 t_ = r0; PR = 0x0C0AC2BEu; W32(r8 + 0xCu, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C0AC2BEu); }  /* 0C0AC2BA jsr @Rn */
L_0C0AC2BE: BLKS(0x0C0AC2BEu);
	r6 = 0xC0A9AE0u; UPD(0x0C0AC2C0u, 1);  /* 0C0AC2BE mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C0AC2C0 mov Rm,Rn */
	r12 = R32(r9 + 0x24u); UPD(0x0C0AC2C4u, 2);  /* 0C0AC2C2 mov.l @(disp,Rm),Rn */
	r7 = R32(r9 + 0x28u); UPD(0x0C0AC2C6u, 1);  /* 0C0AC2C4 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x24u, r12); UPD(0x0C0AC2C8u, 1);  /* 0C0AC2C6 mov.l Rm,@(disp,Rn) */
	IF(0x0C0AC2C8u); { u32 t_ = r6; PR = 0x0C0AC2CCu; W32(r8 + 0x28u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C0AC2CCu); }  /* 0C0AC2C8 jsr @Rn */
L_0C0AC2CC: BLKS(0x0C0AC2CCu);
	r0 = 0xB0u; UPD(0x0C0AC2CEu, 1);  /* 0C0AC2CC mov.w @(disp,pc),Rn */
	r2 = (u32)(s32)(s8)R8(r13); UPD(0x0C0AC2D0u, 1);  /* 0C0AC2CE mov.b @Rm,Rn */
	IF(0x0C0AC2D0u); r5 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0AC2D2u, 1);  /* 0C0AC2D0 mov.b @(r0,Rm),Rn */
	W8(r10, r2); UPD(0x0C0AC2D4u, 1);  /* 0C0AC2D2 mov.b Rm,@Rn */
	IF(0x0C0AC2D4u); W8(r0 + r8, r5); UPD(0x0C0AC2D6u, 1);  /* 0C0AC2D4 mov.b Rm,@(r0,Rn) */
	r4 = 0xACu; UPD(0x0C0AC2D8u, 1);  /* 0C0AC2D6 mov.w @(disp,pc),Rn */
	r1 = R32(r14); UPD(0x0C0AC2DAu, 1);  /* 0C0AC2D8 mov.l @Rm,Rn */
	r8 += r4;  /* 0C0AC2DA add Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r1); UPD(0x0C0AC2DEu, 2);  /* 0C0AC2DC mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C0AC2DE add #imm,Rn */
	{ W8(r8, r3); /* slot mov.b Rm,@Rn */ UPD(0x0C0AC216u, 4); goto L_0C0AC216; }  /* 0C0AC2E0 bra */
}

void blk_f_0C0AC430(sh3_t *c)
{
	LOCALS;
L_0C0AC430: BLKS(0x0C0AC430u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC432u, 1);  /* 0C0AC430 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC434u, 1);  /* 0C0AC432 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC436u, 1);  /* 0C0AC434 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC438u, 1);  /* 0C0AC436 mov.l Rm,@-Rn */
	r10 = 0xC2460ACu; UPD(0x0C0AC43Au, 1);  /* 0C0AC438 mov.l @(disp,pc),Rn */
	IF(0x0C0AC43Au); r15 -= 4; W32(r15, PR); UPD(0x0C0AC43Cu, 1);  /* 0C0AC43A sts.l pr,@-Rn */
	r8 = 0xC069510u; UPD(0x0C0AC43Eu, 1);  /* 0C0AC43C mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0AC43E mov Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r10); UPD(0x0C0AC442u, 2);  /* 0C0AC440 mov.w @Rm,Rn */
	r5 = 0x8000u; UPD(0x0C0AC444u, 1);  /* 0C0AC442 mov.l @(disp,pc),Rn */
	IF(0x0C0AC444u); { u32 t_ = r8; PR = 0x0C0AC448u; r4 = r0 & 0xFFFF; /* slot extu.w Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069510, 0x0C069510u, 0x0C0AC448u); }  /* 0C0AC444 jsr @Rn */
L_0C0AC448: BLKS(0x0C0AC448u);
	T = (r0 & r0) == 0;  /* 0C0AC448 tst Rm,Rn */
	if (!T) { UPD(0x0C0AC460u, 4); goto L_0C0AC460; }  /* 0C0AC44A bf */
L_0C0AC44C: BLKS(0x0C0AC44Cu);
	r0 = 0x1u;  /* 0C0AC44C mov #imm,Rn */
	r15 = r14;  /* 0C0AC44E mov Rm,Rn */
	IF(0x0C0AC450u); PR = R32(r15); r15 += 4; UPD(0x0C0AC452u, 3);  /* 0C0AC450 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AC454u, 1);  /* 0C0AC452 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AC456u, 1);  /* 0C0AC454 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AC458u, 1);  /* 0C0AC456 mov.l @Rm+,Rn */
	IF(0x0C0AC458u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AC458 rts */
L_0C0AC460: BLKS(0x0C0AC460u);
	r8 = 0xC071740u; UPD(0x0C0AC462u, 1);  /* 0C0AC460 mov.l @(disp,pc),Rn */
	IF(0x0C0AC462u); { u32 t_ = r8; PR = 0x0C0AC466u; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C071740, 0x0C071740u, 0x0C0AC466u); }  /* 0C0AC462 jsr @Rn */
L_0C0AC466: BLKS(0x0C0AC466u);
	T = (r0 & r0) == 0;  /* 0C0AC466 tst Rm,Rn */
	if (T) { UPD(0x0C0AC44Cu, 4); goto L_0C0AC44C; }  /* 0C0AC468 bt */
L_0C0AC46A: BLKS(0x0C0AC46Au);
	r0 = 0x0u;  /* 0C0AC46A mov #imm,Rn */
	r6 = 0xC28EDFCu; UPD(0x0C0AC46Eu, 2);  /* 0C0AC46C mov.l @(disp,pc),Rn */
	r9 = (u32)(s32)(s16)R16(r6); UPD(0x0C0AC470u, 1);  /* 0C0AC46E mov.w @Rm,Rn */
	r8 = 0xB4u; UPD(0x0C0AC472u, 1);  /* 0C0AC470 mov.w @(disp,pc),Rn */
	IF(0x0C0AC472u); MACL = r9 * r8;  /* 0C0AC472 mul.l Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C0AC476u, 3);  /* 0C0AC474 mov.l @(disp,pc),Rn */
	IF(0x0C0AC476u); r8 = MACL;  /* 0C0AC476 sts macl,Rn */
	r4 = 0xD3000104u; UPD(0x0C0AC47Au, 2);  /* 0C0AC478 mov.l @(disp,pc),Rn */
	r8 += r5;  /* 0C0AC47A add Rm,Rn */
	r3 = (u32)(s32)(s16)R16(r10); UPD(0x0C0AC47Eu, 2);  /* 0C0AC47C mov.w @Rm,Rn */
	r7 = 0xC0A8A30u; UPD(0x0C0AC480u, 1);  /* 0C0AC47E mov.l @(disp,pc),Rn */
	r2 = r3 & 0xFFFF;  /* 0C0AC480 extu.w Rm,Rn */
	W32(r8, r4); UPD(0x0C0AC484u, 2);  /* 0C0AC482 mov.l Rm,@Rn */
	W32(r8 + 0x4u, r2); UPD(0x0C0AC486u, 1);  /* 0C0AC484 mov.l Rm,@(disp,Rn) */
	r4 = r9;  /* 0C0AC486 mov Rm,Rn */
	W32(r8 + 0xCu, r0); UPD(0x0C0AC48Au, 2);  /* 0C0AC488 mov.l Rm,@(disp,Rn) */
	IF(0x0C0AC48Au); { u32 t_ = r7; PR = 0x0C0AC48Eu; W32(r8 + 0x8u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C0AC48Eu); }  /* 0C0AC48A jsr @Rn */
L_0C0AC48E: BLKS(0x0C0AC48Eu);
	r10 = 0xC0722E0u; UPD(0x0C0AC490u, 1);  /* 0C0AC48E mov.l @(disp,pc),Rn */
	r4 = r9;  /* 0C0AC490 mov Rm,Rn */
	r6 = 0x1600000u; UPD(0x0C0AC494u, 2);  /* 0C0AC492 mov.l @(disp,pc),Rn */
	IF(0x0C0AC494u); { u32 t_ = r10; PR = 0x0C0AC498u; W32(r8 + 0x24u, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0722E0, 0x0C0722E0u, 0x0C0AC498u); }  /* 0C0AC494 jsr @Rn */
L_0C0AC498: BLKS(0x0C0AC498u);
	r5 = 0xC0A9AE0u; UPD(0x0C0AC49Au, 1);  /* 0C0AC498 mov.l @(disp,pc),Rn */
	IF(0x0C0AC49Au); { u32 t_ = r5; PR = 0x0C0AC49Eu; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C0AC49Eu); }  /* 0C0AC49A jsr @Rn */
L_0C0AC49E: BLKS(0x0C0AC49Eu);
	r0 = 0x86u; UPD(0x0C0AC4A0u, 1);  /* 0C0AC49E mov.w @(disp,pc),Rn */
	r2 = 0x14u;  /* 0C0AC4A0 mov #imm,Rn */
	r4 = 0x100u; UPD(0x0C0AC4A4u, 2);  /* 0C0AC4A2 mov.w @(disp,pc),Rn */
	IF(0x0C0AC4A4u); W16(r0 + r8, r4); UPD(0x0C0AC4A6u, 1);  /* 0C0AC4A4 mov.w Rm,@(r0,Rn) */
	r3 = 0x30000u; UPD(0x0C0AC4A8u, 1);  /* 0C0AC4A6 mov.l @(disp,pc),Rn */
	r0 += 0x6u;  /* 0C0AC4A8 add #imm,Rn */
	IF(0x0C0AC4AAu); W32(r0 + r8, r3); UPD(0x0C0AC4ACu, 2);  /* 0C0AC4AA mov.l Rm,@(r0,Rn) */
	r0 += 0x21u;  /* 0C0AC4AC add #imm,Rn */
	IF(0x0C0AC4AEu); W8(r0 + r8, r2); UPD(0x0C0AC4B0u, 2);  /* 0C0AC4AE mov.b Rm,@(r0,Rn) */
	r0 += 0xFFFFFFFCu;  /* 0C0AC4B0 add #imm,Rn */
	{ IF(0x0C0AC4B4u); W8(r0 + r8, r2); /* slot mov.b Rm,@(r0,Rn) */ UPD(0x0C0AC44Cu, 4); goto L_0C0AC44C; }  /* 0C0AC4B2 bra */
}

void blk_f_0C0AC5E0(sh3_t *c)
{
	LOCALS;
L_0C0AC5E0: BLKS(0x0C0AC5E0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC5E2u, 1);  /* 0C0AC5E0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC5E4u, 1);  /* 0C0AC5E2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC5E6u, 1);  /* 0C0AC5E4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC5E8u, 1);  /* 0C0AC5E6 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC5EAu, 1);  /* 0C0AC5E8 mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C0AC5EA exts.w Rm,Rn */
	r5 = 0xC08B940u; UPD(0x0C0AC5EEu, 2);  /* 0C0AC5EC mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C0AC5EE mov Rm,Rn */
	IF(0x0C0AC5F0u); r15 -= 4; W32(r15, PR); UPD(0x0C0AC5F2u, 2);  /* 0C0AC5F0 sts.l pr,@-Rn */
	IF(0x0C0AC5F2u); { u32 t_ = r5; PR = 0x0C0AC5F6u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C08B940, 0x0C08B940u, 0x0C0AC5F6u); }  /* 0C0AC5F2 jsr @Rn */
L_0C0AC5F6: BLKS(0x0C0AC5F6u);
	r3 = 0xB4u; UPD(0x0C0AC5F8u, 1);  /* 0C0AC5F6 mov.w @(disp,pc),Rn */
	IF(0x0C0AC5F8u); MACL = r11 * r3;  /* 0C0AC5F8 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C0AC5FCu, 3);  /* 0C0AC5FA mov.l @(disp,pc),Rn */
	IF(0x0C0AC5FCu); r9 = MACL;  /* 0C0AC5FC sts macl,Rn */
	r9 += r0;  /* 0C0AC5FE add Rm,Rn */
	r8 = 0x8Cu; UPD(0x0C0AC602u, 3);  /* 0C0AC600 mov.w @(disp,pc),Rn */
	r10 = 0x86u; UPD(0x0C0AC604u, 1);  /* 0C0AC602 mov.w @(disp,pc),Rn */
	r8 += r9;  /* 0C0AC604 add Rm,Rn */
	r0 = 0xC069B20u; UPD(0x0C0AC608u, 2);  /* 0C0AC606 mov.l @(disp,pc),Rn */
	r10 += r9;  /* 0C0AC608 add Rm,Rn */
	r5 = R32(r8); UPD(0x0C0AC60Cu, 2);  /* 0C0AC60A mov.l @Rm,Rn */
	IF(0x0C0AC60Cu); { u32 t_ = r0; PR = 0x0C0AC610u; r4 = (u32)(s32)(s16)R16(r10); /* slot mov.w @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0AC610u); }  /* 0C0AC60C jsr @Rn */
L_0C0AC610: BLKS(0x0C0AC610u);
	r5 = R32(r8); UPD(0x0C0AC612u, 1);  /* 0C0AC610 mov.l @Rm,Rn */
	r8 = 0xC069AF0u; UPD(0x0C0AC614u, 1);  /* 0C0AC612 mov.l @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)R16(r10); UPD(0x0C0AC616u, 1);  /* 0C0AC614 mov.w @Rm,Rn */
	IF(0x0C0AC616u); { u32 t_ = r8; PR = 0x0C0AC61Au; W32(r9 + 0x2Cu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0AC61Au); }  /* 0C0AC616 jsr @Rn */
L_0C0AC61A: BLKS(0x0C0AC61Au);
	r4 = R32(r9 + 0x24u); UPD(0x0C0AC61Cu, 1);  /* 0C0AC61A mov.l @(disp,Rm),Rn */
	r7 = R32(r9 + 0x28u); UPD(0x0C0AC61Eu, 1);  /* 0C0AC61C mov.l @(disp,Rm),Rn */
	r2 = R32(r9 + 0x2Cu); UPD(0x0C0AC620u, 1);  /* 0C0AC61E mov.l @(disp,Rm),Rn */
	r7 += r0;  /* 0C0AC620 add Rm,Rn */
	r3 = 0xFF600000u; UPD(0x0C0AC624u, 2);  /* 0C0AC622 mov.l @(disp,pc),Rn */
	r4 += r2;  /* 0C0AC624 add Rm,Rn */
	r3 += r4;  /* 0C0AC626 add Rm,Rn */
	W32(r9 + 0x30u, r0); UPD(0x0C0AC62Au, 3);  /* 0C0AC628 mov.l Rm,@(disp,Rn) */
	IF(0x0C0AC62Au); T = (s32)r3 >= 0;  /* 0C0AC62A cmp/pz Rn */
	W32(r9 + 0x24u, r4); UPD(0x0C0AC62Eu, 2);  /* 0C0AC62C mov.l Rm,@(disp,Rn) */
	{ u32 c_ = !T; W32(r9 + 0x28u, r7); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0AC710u, 3); goto L_0C0AC710; } UPD(0x0C0AC632u, 1); goto L_0C0AC632; }  /* 0C0AC62E bf/s */
L_0C0AC632: BLKS(0x0C0AC632u);
	r4 = 0xD00000u; UPD(0x0C0AC634u, 1);  /* 0C0AC632 mov.l @(disp,pc),Rn */
	T = (s32)r3 > (s32)r4;  /* 0C0AC634 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C0AC64Eu, 4); goto L_0C0AC64E; }  /* 0C0AC636 bt */
L_0C0AC638: BLKS(0x0C0AC638u);
	r2 = 0xC3C4048u; UPD(0x0C0AC63Au, 1);  /* 0C0AC638 mov.l @(disp,pc),Rn */
	r8 = R32(r2); UPD(0x0C0AC63Cu, 1);  /* 0C0AC63A mov.l @Rm,Rn */
	r6 = 0xFF880000u; UPD(0x0C0AC63Eu, 1);  /* 0C0AC63C mov.l @(disp,pc),Rn */
	r2 = r7;  /* 0C0AC63E mov Rm,Rn */
	r2 -= r8;  /* 0C0AC640 sub Rm,Rn */
	r2 += r6;  /* 0C0AC642 add Rm,Rn */
	IF(0x0C0AC644u); T = (s32)r2 >= 0;  /* 0C0AC644 cmp/pz Rn */
	if (!T) { UPD(0x0C0AC700u, 7); goto L_0C0AC700; }  /* 0C0AC646 bf */
L_0C0AC648: BLKS(0x0C0AC648u);
	r7 = 0xA80000u; UPD(0x0C0AC64Au, 1);  /* 0C0AC648 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r7;  /* 0C0AC64A cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0AC6E0u, 4); goto L_0C0AC6E0; }  /* 0C0AC64C bf */
L_0C0AC64E: BLKS(0x0C0AC64Eu);
	r10 = 0x0u;  /* 0C0AC64E mov #imm,Rn */
	W32(r9, r10); UPD(0x0C0AC652u, 2);  /* 0C0AC650 mov.l Rm,@Rn */
	r1 = 0x1u;  /* 0C0AC652 mov #imm,Rn */
	UPD(0x0C0AC654u, 1);
L_0C0AC654: BLKS(0x0C0AC654u);
	r0 = (u32)(s32)(s16)r1;  /* 0C0AC654 exts.w Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0AC656 tst Rm,Rn */
	if (T) { UPD(0x0C0AC670u, 5); goto L_0C0AC670; }  /* 0C0AC658 bt */
L_0C0AC65A: BLKS(0x0C0AC65Au);
	r15 = r14;  /* 0C0AC65A mov Rm,Rn */
	IF(0x0C0AC65Cu); PR = R32(r15); r15 += 4; UPD(0x0C0AC65Eu, 2);  /* 0C0AC65C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AC660u, 1);  /* 0C0AC65E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0AC662u, 1);  /* 0C0AC660 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AC664u, 1);  /* 0C0AC662 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AC666u, 1);  /* 0C0AC664 mov.l @Rm+,Rn */
	IF(0x0C0AC666u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AC666 rts */
L_0C0AC670: BLKS(0x0C0AC670u);
	r8 = 0xC0BC1B0u; UPD(0x0C0AC672u, 1);  /* 0C0AC670 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C0AC672 mov Rm,Rn */
	r5 = 0x5Au;  /* 0C0AC674 mov #imm,Rn */
	IF(0x0C0AC676u); { u32 t_ = r8; PR = 0x0C0AC67Au; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C0AC67Au); }  /* 0C0AC676 jsr @Rn */
L_0C0AC67A: BLKS(0x0C0AC67Au);
	T = (r0 & r0) == 0;  /* 0C0AC67A tst Rm,Rn */
	if (T) { UPD(0x0C0AC65Au, 4); goto L_0C0AC65A; }  /* 0C0AC67C bt */
L_0C0AC67E: BLKS(0x0C0AC67Eu);
	r7 = 0xB4u; UPD(0x0C0AC680u, 1);  /* 0C0AC67E mov.w @(disp,pc),Rn */
	IF(0x0C0AC680u); MACL = r11 * r7;  /* 0C0AC680 mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C0AC684u, 3);  /* 0C0AC682 mov.l @(disp,pc),Rn */
	IF(0x0C0AC684u); r8 = MACL;  /* 0C0AC684 sts macl,Rn */
	r8 += r2;  /* 0C0AC686 add Rm,Rn */
	r6 = 0xA9u; UPD(0x0C0AC68Au, 3);  /* 0C0AC688 mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C0AC68A mov Rm,Rn */
	IF(0x0C0AC68Cu); r4 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C0AC68Eu, 2);  /* 0C0AC68C mov.b @(r0,Rm),Rn */
	r10 = 0xC0BBF10u; UPD(0x0C0AC690u, 1);  /* 0C0AC68E mov.l @(disp,pc),Rn */
	r6 = r4 & 0xFF;  /* 0C0AC690 extu.b Rm,Rn */
	r4 = R32(r8 + 0x24u); UPD(0x0C0AC694u, 2);  /* 0C0AC692 mov.l @(disp,Rm),Rn */
	IF(0x0C0AC694u); { u32 t_ = r10; PR = 0x0C0AC698u; r5 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BBF10, 0x0C0BBF10u, 0x0C0AC698u); }  /* 0C0AC694 jsr @Rn */
L_0C0AC698: BLKS(0x0C0AC698u);
	T = (r0 & r0) == 0;  /* 0C0AC698 tst Rm,Rn */
	if (T) { UPD(0x0C0AC65Au, 4); goto L_0C0AC65A; }  /* 0C0AC69A bt */
L_0C0AC69C: BLKS(0x0C0AC69Cu);
	r4 = r11;  /* 0C0AC69C mov Rm,Rn */
	r11 = 0xC069B50u; UPD(0x0C0AC6A0u, 2);  /* 0C0AC69E mov.l @(disp,pc),Rn */
	r10 = 0xC068E60u; UPD(0x0C0AC6A2u, 1);  /* 0C0AC6A0 mov.l @(disp,pc),Rn */
	IF(0x0C0AC6A2u); { u32 t_ = r11; PR = 0x0C0AC6A6u; IF(0x0C0AC6A4u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C069B50, 0x0C069B50u, 0x0C0AC6A6u); }  /* 0C0AC6A2 jsr @Rn */
L_0C0AC6A6: BLKS(0x0C0AC6A6u);
	r4 = 0x2A0u; UPD(0x0C0AC6A8u, 1);  /* 0C0AC6A6 mov.w @(disp,pc),Rn */
	r1 = (u32)(s32)(s16)r0;  /* 0C0AC6A8 exts.w Rm,Rn */
	IF(0x0C0AC6AAu); MACL = r1 * r4;  /* 0C0AC6AA mul.l Rm,Rn */
	r5 = 0xC29D1D8u; UPD(0x0C0AC6AEu, 4);  /* 0C0AC6AC mov.l @(disp,pc),Rn */
	IF(0x0C0AC6AEu); r0 = MACL;  /* 0C0AC6AE sts macl,Rn */
	r0 += r5;  /* 0C0AC6B0 add Rm,Rn */
	r4 = R32(r8 + 0x24u); UPD(0x0C0AC6B4u, 3);  /* 0C0AC6B2 mov.l @(disp,Rm),Rn */
	r5 = R32(r8 + 0x28u); UPD(0x0C0AC6B6u, 1);  /* 0C0AC6B4 mov.l @(disp,Rm),Rn */
	r6 = R32(r0 + 0x10u); UPD(0x0C0AC6B8u, 1);  /* 0C0AC6B6 mov.l @(disp,Rm),Rn */
	IF(0x0C0AC6B8u); { u32 t_ = r10; PR = 0x0C0AC6BCu; r7 = R32(r0 + 0x14u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C068E60, 0x0C068E60u, 0x0C0AC6BCu); }  /* 0C0AC6B8 jsr @Rn */
L_0C0AC6BC: BLKS(0x0C0AC6BCu);
	r3 = 0x28000u; UPD(0x0C0AC6BEu, 1);  /* 0C0AC6BC mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0AC6BE add #imm,Rn */
	r11 = 0xC0BA480u; UPD(0x0C0AC6C2u, 2);  /* 0C0AC6C0 mov.l @(disp,pc),Rn */
	r9 = (u32)(s32)(s16)r0;  /* 0C0AC6C2 exts.w Rm,Rn */
	W32(r15, r3); UPD(0x0C0AC6C6u, 2);  /* 0C0AC6C4 mov.l Rm,@Rn */
	r4 = 0x2u;  /* 0C0AC6C6 mov #imm,Rn */
	r5 = R32(r8 + 0x24u); UPD(0x0C0AC6CAu, 2);  /* 0C0AC6C8 mov.l @(disp,Rm),Rn */
	r7 = r9;  /* 0C0AC6CA mov Rm,Rn */
	IF(0x0C0AC6CCu); { u32 t_ = r11; PR = 0x0C0AC6D0u; r6 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BA480, 0x0C0BA480u, 0x0C0AC6D0u); }  /* 0C0AC6CC jsr @Rn */
L_0C0AC6D0: BLKS(0x0C0AC6D0u);
	{ IF(0x0C0AC6D2u); ; /* slot nop */ UPD(0x0C0AC65Au, 3); goto L_0C0AC65A; }  /* 0C0AC6D0 bra */
L_0C0AC6E0: BLKS(0x0C0AC6E0u);
	r0 = (u32)(s32)(s16)R16(r10); UPD(0x0C0AC6E2u, 1);  /* 0C0AC6E0 mov.w @Rm,Rn */
	r0 += 0x8u;  /* 0C0AC6E2 add #imm,Rn */
	IF(0x0C0AC6E4u); r0 >>= 2;  /* 0C0AC6E4 shlr2 Rn */
	IF(0x0C0AC6E6u); r0 >>= 2;  /* 0C0AC6E6 shlr2 Rn */
	r0 &= 0x1Fu;  /* 0C0AC6E8 and #imm,r0 */
	W32(r9 + 0x8u, r0); UPD(0x0C0AC6ECu, 5);  /* 0C0AC6EA mov.l Rm,@(disp,Rn) */
	r0 = R32(r9 + 0xCu); UPD(0x0C0AC6EEu, 1);  /* 0C0AC6EC mov.l @(disp,Rm),Rn */
	r5 = 0xC1A0158u; UPD(0x0C0AC6F0u, 1);  /* 0C0AC6EE mov.l @(disp,pc),Rn */
	IF(0x0C0AC6F0u); r0 <<= 2;  /* 0C0AC6F0 shll2 Rn */
	IF(0x0C0AC6F2u); r3 = R32(r0 + r5); UPD(0x0C0AC6F4u, 2);  /* 0C0AC6F2 mov.l @(r0,Rm),Rn */
	W32(r9 + 0xCu, r3); UPD(0x0C0AC6F6u, 1);  /* 0C0AC6F4 mov.l Rm,@(disp,Rn) */
	r9 = 0xC0A8B10u; UPD(0x0C0AC6F8u, 1);  /* 0C0AC6F6 mov.l @(disp,pc),Rn */
	IF(0x0C0AC6F8u); { u32 t_ = r9; PR = 0x0C0AC6FCu; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B10, 0x0C0A8B10u, 0x0C0AC6FCu); }  /* 0C0AC6F8 jsr @Rn */
L_0C0AC6FC: BLKS(0x0C0AC6FCu);
	{ r1 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C0AC654u, 3); goto L_0C0AC654; }  /* 0C0AC6FC bra */
L_0C0AC700: BLKS(0x0C0AC700u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0AC648u, 3); goto L_0C0AC648; }  /* 0C0AC700 bra */
L_0C0AC710: BLKS(0x0C0AC710u);
	{ r3 = 0u - r3; /* slot neg Rm,Rn */ UPD(0x0C0AC632u, 3); goto L_0C0AC632; }  /* 0C0AC710 bra */
}

void blk_f_0C0AC7C0(sh3_t *c)
{
	LOCALS;
L_0C0AC7C0: BLKS(0x0C0AC7C0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC7C2u, 1);  /* 0C0AC7C0 mov.l Rm,@-Rn */
	r1 = (u32)(s32)(s16)r4;  /* 0C0AC7C2 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC7C6u, 2);  /* 0C0AC7C4 mov.l Rm,@-Rn */
	r5 = 0xB4u; UPD(0x0C0AC7C8u, 1);  /* 0C0AC7C6 mov.w @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC7CAu, 1);  /* 0C0AC7C8 mov.l Rm,@-Rn */
	IF(0x0C0AC7CAu); MACL = r1 * r5;  /* 0C0AC7CA mul.l Rm,Rn */
	IF(0x0C0AC7CCu); r15 -= 4; W32(r15, PR); UPD(0x0C0AC7CEu, 3);  /* 0C0AC7CC sts.l pr,@-Rn */
	r9 = 0xC0C2360u; UPD(0x0C0AC7D0u, 1);  /* 0C0AC7CE mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0AC7D0 mov Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C0AC7D4u, 2);  /* 0C0AC7D2 mov.l @(disp,pc),Rn */
	IF(0x0C0AC7D4u); r8 = MACL;  /* 0C0AC7D4 sts macl,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0AC7D6 add #imm,Rn */
	IF(0x0C0AC7D8u); { u32 t_ = r9; PR = 0x0C0AC7DCu; r8 += r0; /* slot add Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C0AC7DCu); }  /* 0C0AC7D8 jsr @Rn */
L_0C0AC7DC: BLKS(0x0C0AC7DCu);
	r3 = 0x28000u; UPD(0x0C0AC7DEu, 1);  /* 0C0AC7DC mov.l @(disp,pc),Rn */
	r4 = 0x1u;  /* 0C0AC7DE mov #imm,Rn */
	r2 = 0xC18A00Au; UPD(0x0C0AC7E2u, 2);  /* 0C0AC7E0 mov.l @(disp,pc),Rn */
	r7 = r0;  /* 0C0AC7E2 mov Rm,Rn */
	r9 = 0xC0BA970u; UPD(0x0C0AC7E6u, 2);  /* 0C0AC7E4 mov.l @(disp,pc),Rn */
	W32(r15, r3); UPD(0x0C0AC7E8u, 1);  /* 0C0AC7E6 mov.l Rm,@Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C0AC7EAu, 1);  /* 0C0AC7E8 mov.l Rm,@(disp,Rn) */
	r5 = R32(r8 + 0x24u); UPD(0x0C0AC7ECu, 1);  /* 0C0AC7EA mov.l @(disp,Rm),Rn */
	IF(0x0C0AC7ECu); { u32 t_ = r9; PR = 0x0C0AC7F0u; r6 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BA970, 0x0C0BA970u, 0x0C0AC7F0u); }  /* 0C0AC7EC jsr @Rn */
L_0C0AC7F0: BLKS(0x0C0AC7F0u);
	r0 = 0x14u;  /* 0C0AC7F0 mov #imm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0AC7F4u, 2);  /* 0C0AC7F2 mov.l Rm,@(disp,Rn) */
	r9 = 0x0u;  /* 0C0AC7F4 mov #imm,Rn */
	r0 = 0xC0C02E0u; UPD(0x0C0AC7F8u, 2);  /* 0C0AC7F6 mov.l @(disp,pc),Rn */
	r5 = 0x3u;  /* 0C0AC7F8 mov #imm,Rn */
	W32(r15, r9); UPD(0x0C0AC7FCu, 2);  /* 0C0AC7FA mov.l Rm,@Rn */
	r4 = R32(r8); UPD(0x0C0AC7FEu, 1);  /* 0C0AC7FC mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C0AC800u, 1);  /* 0C0AC7FE mov.l @(disp,Rm),Rn */
	IF(0x0C0AC800u); { u32 t_ = r0; PR = 0x0C0AC804u; r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C02E0, 0x0C0C02E0u, 0x0C0AC804u); }  /* 0C0AC800 jsr @Rn */
L_0C0AC804: BLKS(0x0C0AC804u);
	W32(r8, r9); UPD(0x0C0AC806u, 1);  /* 0C0AC804 mov.l Rm,@Rn */
	r15 = r14;  /* 0C0AC806 mov Rm,Rn */
	IF(0x0C0AC808u); PR = R32(r15); r15 += 4; UPD(0x0C0AC80Au, 2);  /* 0C0AC808 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AC80Cu, 1);  /* 0C0AC80A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AC80Eu, 1);  /* 0C0AC80C mov.l @Rm+,Rn */
	IF(0x0C0AC80Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AC80E rts */
}

void blk_f_0C0AC830(sh3_t *c)
{
	LOCALS;
L_0C0AC830: BLKS(0x0C0AC830u);
	r3 = 0xB4u; UPD(0x0C0AC832u, 1);  /* 0C0AC830 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C0AC832 exts.w Rm,Rn */
	IF(0x0C0AC834u); MACL = r4 * r3;  /* 0C0AC834 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C0AC838u, 4);  /* 0C0AC836 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC83Au, 1);  /* 0C0AC838 mov.l Rm,@-Rn */
	IF(0x0C0AC83Au); r3 = MACL;  /* 0C0AC83A sts macl,Rn */
	r3 += r0;  /* 0C0AC83C add Rm,Rn */
	r0 = R32(r3 + 0x24u); UPD(0x0C0AC840u, 3);  /* 0C0AC83E mov.l @(disp,Rm),Rn */
	r14 = r15;  /* 0C0AC840 mov Rm,Rn */
	r6 = R32(r3 + 0x28u); UPD(0x0C0AC844u, 2);  /* 0C0AC842 mov.l @(disp,Rm),Rn */
	r5 = R32(r3 + 0x2Cu); UPD(0x0C0AC846u, 1);  /* 0C0AC844 mov.l @(disp,Rm),Rn */
	r2 = R32(r3 + 0x30u); UPD(0x0C0AC848u, 1);  /* 0C0AC846 mov.l @(disp,Rm),Rn */
	r0 += r5;  /* 0C0AC848 add Rm,Rn */
	r7 = 0xFF600000u; UPD(0x0C0AC84Cu, 2);  /* 0C0AC84A mov.l @(disp,pc),Rn */
	r6 += r2;  /* 0C0AC84C add Rm,Rn */
	r7 += r0;  /* 0C0AC84E add Rm,Rn */
	W32(r3 + 0x24u, r0); UPD(0x0C0AC852u, 3);  /* 0C0AC850 mov.l Rm,@(disp,Rn) */
	IF(0x0C0AC852u); T = (s32)r7 >= 0;  /* 0C0AC852 cmp/pz Rn */
	{ u32 c_ = !T; W32(r3 + 0x28u, r6); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0AC8B0u, 4); goto L_0C0AC8B0; } UPD(0x0C0AC858u, 1); goto L_0C0AC858; }  /* 0C0AC854 bf/s */
L_0C0AC858: BLKS(0x0C0AC858u);
	r2 = 0xA80000u; UPD(0x0C0AC85Au, 1);  /* 0C0AC858 mov.l @(disp,pc),Rn */
	T = (s32)r7 > (s32)r2;  /* 0C0AC85A cmp/gt Rm,Rn */
	if (T) { UPD(0x0C0AC874u, 4); goto L_0C0AC874; }  /* 0C0AC85C bt */
L_0C0AC85E: BLKS(0x0C0AC85Eu);
	r2 = r6;  /* 0C0AC85E mov Rm,Rn */
	r5 = 0xC3C4048u; UPD(0x0C0AC862u, 2);  /* 0C0AC860 mov.l @(disp,pc),Rn */
	r7 = R32(r5); UPD(0x0C0AC864u, 1);  /* 0C0AC862 mov.l @Rm,Rn */
	r6 = 0xFF880000u; UPD(0x0C0AC866u, 1);  /* 0C0AC864 mov.l @(disp,pc),Rn */
	r2 -= r7;  /* 0C0AC866 sub Rm,Rn */
	r2 += r6;  /* 0C0AC868 add Rm,Rn */
	IF(0x0C0AC86Au); T = (s32)r2 >= 0;  /* 0C0AC86A cmp/pz Rn */
	if (!T) { UPD(0x0C0AC8A0u, 6); goto L_0C0AC8A0; }  /* 0C0AC86C bf */
L_0C0AC86E: BLKS(0x0C0AC86Eu);
	r0 = 0x800000u; UPD(0x0C0AC870u, 1);  /* 0C0AC86E mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r0;  /* 0C0AC870 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0AC880u, 4); goto L_0C0AC880; }  /* 0C0AC872 bf */
L_0C0AC874: BLKS(0x0C0AC874u);
	r4 = 0x0u;  /* 0C0AC874 mov #imm,Rn */
	W32(r3, r4); UPD(0x0C0AC878u, 2);  /* 0C0AC876 mov.l Rm,@Rn */
L_0C0AC878: BLKS(0x0C0AC878u);
	r15 = r14;  /* 0C0AC878 mov Rm,Rn */
	IF(0x0C0AC87Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0AC87A rts */
L_0C0AC880: BLKS(0x0C0AC880u);
	r2 = 0x99u; UPD(0x0C0AC882u, 1);  /* 0C0AC880 mov.w @(disp,pc),Rn */
	r2 += r3;  /* 0C0AC882 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C0AC886u, 2);  /* 0C0AC884 mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C0AC886 add #imm,Rn */
	W8(r2, r0); UPD(0x0C0AC88Au, 2);  /* 0C0AC888 mov.b Rm,@Rn */
	r0 &= 0x1u;  /* 0C0AC88A and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0AC88C tst Rm,Rn */
	if (T) { UPD(0x0C0AC878u, 5); goto L_0C0AC878; }  /* 0C0AC88E bt */
L_0C0AC890: BLKS(0x0C0AC890u);
	r0 = R32(r3 + 0xCu); UPD(0x0C0AC892u, 1);  /* 0C0AC890 mov.l @(disp,Rm),Rn */
	r0 += 0x1u;  /* 0C0AC892 add #imm,Rn */
	r0 &= 0x3u;  /* 0C0AC894 and #imm,r0 */
	W32(r3 + 0xCu, r0); UPD(0x0C0AC898u, 3);  /* 0C0AC896 mov.l Rm,@(disp,Rn) */
	r3 = 0xC0A8AE0u; UPD(0x0C0AC89Au, 1);  /* 0C0AC898 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C0AC89A mov Rm,Rn */
	IF(0x0C0AC89Cu); { u32 tv_ = r3; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0A8AE0u: TAIL(blk_f_0C0A8AE0); default: JUMPD(tv_); } }  /* 0C0AC89C jmp @Rn */
L_0C0AC8A0: BLKS(0x0C0AC8A0u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0AC86Eu, 3); goto L_0C0AC86E; }  /* 0C0AC8A0 bra */
L_0C0AC8B0: BLKS(0x0C0AC8B0u);
	{ r7 = 0u - r7; /* slot neg Rm,Rn */ UPD(0x0C0AC858u, 3); goto L_0C0AC858; }  /* 0C0AC8B0 bra */
}

void blk_f_0C0AC9B0(sh3_t *c)
{
	LOCALS;
L_0C0AC9B0: BLKS(0x0C0AC9B0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC9B2u, 1);  /* 0C0AC9B0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC9B4u, 1);  /* 0C0AC9B2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC9B6u, 1);  /* 0C0AC9B4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC9B8u, 1);  /* 0C0AC9B6 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC9BAu, 1);  /* 0C0AC9B8 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AC9BCu, 1);  /* 0C0AC9BA mov.l Rm,@-Rn */
	r8 = 0xC062780u; UPD(0x0C0AC9BEu, 1);  /* 0C0AC9BC mov.l @(disp,pc),Rn */
	IF(0x0C0AC9BEu); r15 -= 4; W32(r15, PR); UPD(0x0C0AC9C0u, 1);  /* 0C0AC9BE sts.l pr,@-Rn */
	r4 = 0xB0u; UPD(0x0C0AC9C2u, 1);  /* 0C0AC9C0 mov.w @(disp,pc),Rn */
	IF(0x0C0AC9C2u); { u32 t_ = r8; PR = 0x0C0AC9C6u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0AC9C6u); }  /* 0C0AC9C2 jsr @Rn */
L_0C0AC9C6: BLKS(0x0C0AC9C6u);
	r2 = 0xC3C4048u; UPD(0x0C0AC9C8u, 1);  /* 0C0AC9C6 mov.l @(disp,pc),Rn */
	r0 += 0x20u;  /* 0C0AC9C8 add #imm,Rn */
	r8 = 0xC071740u; UPD(0x0C0AC9CCu, 2);  /* 0C0AC9CA mov.l @(disp,pc),Rn */
	IF(0x0C0AC9CCu); r0 <<= 16;  /* 0C0AC9CC shll16 Rn */
	r10 = R32(r2); UPD(0x0C0AC9D0u, 2);  /* 0C0AC9CE mov.l @Rm,Rn */
	r4 = 0x1u;  /* 0C0AC9D0 mov #imm,Rn */
	r11 = 0x100u; UPD(0x0C0AC9D4u, 2);  /* 0C0AC9D2 mov.w @(disp,pc),Rn */
	IF(0x0C0AC9D4u); { u32 t_ = r8; PR = 0x0C0AC9D8u; r10 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C071740, 0x0C071740u, 0x0C0AC9D8u); }  /* 0C0AC9D4 jsr @Rn */
L_0C0AC9D8: BLKS(0x0C0AC9D8u);
	r12 = 0x20000u; UPD(0x0C0AC9DAu, 1);  /* 0C0AC9D8 mov.l @(disp,pc),Rn */
	T = (r0 & r0) == 0;  /* 0C0AC9DA tst Rm,Rn */
	if (!T) { UPD(0x0C0ACA00u, 4); goto L_0C0ACA00; }  /* 0C0AC9DC bf */
L_0C0AC9DE: BLKS(0x0C0AC9DEu);
	r0 = 0x1u;  /* 0C0AC9DE mov #imm,Rn */
	r15 = r14;  /* 0C0AC9E0 mov Rm,Rn */
	IF(0x0C0AC9E2u); PR = R32(r15); r15 += 4; UPD(0x0C0AC9E4u, 3);  /* 0C0AC9E2 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AC9E6u, 1);  /* 0C0AC9E4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0AC9E8u, 1);  /* 0C0AC9E6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0AC9EAu, 1);  /* 0C0AC9E8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AC9ECu, 1);  /* 0C0AC9EA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AC9EEu, 1);  /* 0C0AC9EC mov.l @Rm+,Rn */
	IF(0x0C0AC9EEu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AC9EE rts */
L_0C0ACA00: BLKS(0x0C0ACA00u);
	r5 = 0xC28EDFCu; UPD(0x0C0ACA02u, 1);  /* 0C0ACA00 mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C0ACA02 mov #imm,Rn */
	r9 = (u32)(s32)(s16)R16(r5); UPD(0x0C0ACA06u, 2);  /* 0C0ACA04 mov.w @Rm,Rn */
	r2 = 0x2Bu;  /* 0C0ACA06 mov #imm,Rn */
	r8 = 0xB4u; UPD(0x0C0ACA0Au, 2);  /* 0C0ACA08 mov.w @(disp,pc),Rn */
	r7 = 0x10u;  /* 0C0ACA0A mov #imm,Rn */
	IF(0x0C0ACA0Cu); MACL = r9 * r8;  /* 0C0ACA0C mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C0ACA10u, 4);  /* 0C0ACA0E mov.l @(disp,pc),Rn */
	IF(0x0C0ACA10u); r8 = MACL;  /* 0C0ACA10 sts macl,Rn */
	r8 += r0;  /* 0C0ACA12 add Rm,Rn */
	r6 = 0xC0A8A30u; UPD(0x0C0ACA16u, 3);  /* 0C0ACA14 mov.l @(disp,pc),Rn */
	r3 = 0xD3000000u; UPD(0x0C0ACA18u, 1);  /* 0C0ACA16 mov.l @(disp,pc),Rn */
	W32(r8 + 0xCu, r4); UPD(0x0C0ACA1Au, 1);  /* 0C0ACA18 mov.l Rm,@(disp,Rn) */
	W32(r8, r3); UPD(0x0C0ACA1Cu, 1);  /* 0C0ACA1A mov.l Rm,@Rn */
	r4 = r9;  /* 0C0ACA1C mov Rm,Rn */
	W32(r8 + 0x4u, r2); UPD(0x0C0ACA20u, 2);  /* 0C0ACA1E mov.l Rm,@(disp,Rn) */
	IF(0x0C0ACA20u); { u32 t_ = r6; PR = 0x0C0ACA24u; W32(r8 + 0x8u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C0ACA24u); }  /* 0C0ACA20 jsr @Rn */
L_0C0ACA24: BLKS(0x0C0ACA24u);
	r5 = 0xC0A9AE0u; UPD(0x0C0ACA26u, 1);  /* 0C0ACA24 mov.l @(disp,pc),Rn */
	r4 = r9;  /* 0C0ACA26 mov Rm,Rn */
	r9 = 0xC069AF0u; UPD(0x0C0ACA2Au, 2);  /* 0C0ACA28 mov.l @(disp,pc),Rn */
	IF(0x0C0ACA2Au); { u32 t_ = r5; PR = 0x0C0ACA2Eu; IF(0x0C0ACA2Cu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C0ACA2Eu); }  /* 0C0ACA2A jsr @Rn */
L_0C0ACA2E: BLKS(0x0C0ACA2Eu);
	r0 = 0x1500000u; UPD(0x0C0ACA30u, 1);  /* 0C0ACA2E mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C0ACA30 mov Rm,Rn */
	W32(r8 + 0x28u, r10); UPD(0x0C0ACA34u, 2);  /* 0C0ACA32 mov.l Rm,@(disp,Rn) */
	r5 = r12;  /* 0C0ACA34 mov Rm,Rn */
	W32(r8 + 0x24u, r0); UPD(0x0C0ACA38u, 2);  /* 0C0ACA36 mov.l Rm,@(disp,Rn) */
	r10 = 0xC069B20u; UPD(0x0C0ACA3Au, 1);  /* 0C0ACA38 mov.l @(disp,pc),Rn */
	r0 = 0x86u; UPD(0x0C0ACA3Cu, 1);  /* 0C0ACA3A mov.w @(disp,pc),Rn */
	IF(0x0C0ACA3Cu); { u32 t_ = r10; PR = 0x0C0ACA40u; IF(0x0C0ACA3Eu); W16(r0 + r8, r11); /* slot mov.w Rm,@(r0,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0ACA40u); }  /* 0C0ACA3C jsr @Rn */
L_0C0ACA40: BLKS(0x0C0ACA40u);
	W32(r8 + 0x2Cu, r0); UPD(0x0C0ACA42u, 1);  /* 0C0ACA40 mov.l Rm,@(disp,Rn) */
	r4 = r11;  /* 0C0ACA42 mov Rm,Rn */
	IF(0x0C0ACA44u); { u32 t_ = r9; PR = 0x0C0ACA48u; r5 = r12; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0ACA48u); }  /* 0C0ACA44 jsr @Rn */
L_0C0ACA48: BLKS(0x0C0ACA48u);
	W32(r8 + 0x30u, r0); UPD(0x0C0ACA4Au, 1);  /* 0C0ACA48 mov.l Rm,@(disp,Rn) */
	r3 = 0x14u;  /* 0C0ACA4A mov #imm,Rn */
	r0 = 0xADu; UPD(0x0C0ACA4Eu, 2);  /* 0C0ACA4C mov.w @(disp,pc),Rn */
	IF(0x0C0ACA4Eu); W8(r0 + r8, r3); UPD(0x0C0ACA50u, 1);  /* 0C0ACA4E mov.b Rm,@(r0,Rn) */
	r0 += 0xFFFFFFFCu;  /* 0C0ACA50 add #imm,Rn */
	{ IF(0x0C0ACA54u); W8(r0 + r8, r3); /* slot mov.b Rm,@(r0,Rn) */ UPD(0x0C0AC9DEu, 4); goto L_0C0AC9DE; }  /* 0C0ACA52 bra */
}

void blk_f_0C0ACA90(sh3_t *c)
{
	LOCALS;
L_0C0ACA90: BLKS(0x0C0ACA90u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0ACA92u, 1);  /* 0C0ACA90 mov.l Rm,@-Rn */
	r1 = (u32)(s32)(s16)r4;  /* 0C0ACA92 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0ACA96u, 2);  /* 0C0ACA94 mov.l Rm,@-Rn */
	r5 = 0xB4u; UPD(0x0C0ACA98u, 1);  /* 0C0ACA96 mov.w @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0ACA9Au, 1);  /* 0C0ACA98 mov.l Rm,@-Rn */
	IF(0x0C0ACA9Au); MACL = r1 * r5;  /* 0C0ACA9A mul.l Rm,Rn */
	IF(0x0C0ACA9Cu); r15 -= 4; W32(r15, PR); UPD(0x0C0ACA9Eu, 3);  /* 0C0ACA9C sts.l pr,@-Rn */
	r9 = 0xC0C2360u; UPD(0x0C0ACAA0u, 1);  /* 0C0ACA9E mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0ACAA0 mov Rm,Rn */
	r4 = 0xC286578u; UPD(0x0C0ACAA4u, 2);  /* 0C0ACAA2 mov.l @(disp,pc),Rn */
	IF(0x0C0ACAA4u); r8 = MACL;  /* 0C0ACAA4 sts macl,Rn */
	r8 += r4;  /* 0C0ACAA6 add Rm,Rn */
	IF(0x0C0ACAA8u); { u32 t_ = r9; PR = 0x0C0ACAACu; r15 += 0xFFFFFFF8u; /* slot add #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C0ACAACu); }  /* 0C0ACAA8 jsr @Rn */
L_0C0ACAAC: BLKS(0x0C0ACAACu);
	r3 = 0x28000u; UPD(0x0C0ACAAEu, 1);  /* 0C0ACAAC mov.l @(disp,pc),Rn */
	r4 = 0x1u;  /* 0C0ACAAE mov #imm,Rn */
	r2 = 0xC18A00Au; UPD(0x0C0ACAB2u, 2);  /* 0C0ACAB0 mov.l @(disp,pc),Rn */
	r7 = r0;  /* 0C0ACAB2 mov Rm,Rn */
	r9 = 0xC0BB3A0u; UPD(0x0C0ACAB6u, 2);  /* 0C0ACAB4 mov.l @(disp,pc),Rn */
	W32(r15, r3); UPD(0x0C0ACAB8u, 1);  /* 0C0ACAB6 mov.l Rm,@Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C0ACABAu, 1);  /* 0C0ACAB8 mov.l Rm,@(disp,Rn) */
	r5 = R32(r8 + 0x24u); UPD(0x0C0ACABCu, 1);  /* 0C0ACABA mov.l @(disp,Rm),Rn */
	IF(0x0C0ACABCu); { u32 t_ = r9; PR = 0x0C0ACAC0u; r6 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BB3A0, 0x0C0BB3A0u, 0x0C0ACAC0u); }  /* 0C0ACABC jsr @Rn */
L_0C0ACAC0: BLKS(0x0C0ACAC0u);
	r0 = 0x14u;  /* 0C0ACAC0 mov #imm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0ACAC4u, 2);  /* 0C0ACAC2 mov.l Rm,@(disp,Rn) */
	r9 = 0x0u;  /* 0C0ACAC4 mov #imm,Rn */
	r0 = 0xC0C02E0u; UPD(0x0C0ACAC8u, 2);  /* 0C0ACAC6 mov.l @(disp,pc),Rn */
	r5 = 0x3u;  /* 0C0ACAC8 mov #imm,Rn */
	W32(r15, r9); UPD(0x0C0ACACCu, 2);  /* 0C0ACACA mov.l Rm,@Rn */
	r4 = R32(r8); UPD(0x0C0ACACEu, 1);  /* 0C0ACACC mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C0ACAD0u, 1);  /* 0C0ACACE mov.l @(disp,Rm),Rn */
	IF(0x0C0ACAD0u); { u32 t_ = r0; PR = 0x0C0ACAD4u; r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C02E0, 0x0C0C02E0u, 0x0C0ACAD4u); }  /* 0C0ACAD0 jsr @Rn */
L_0C0ACAD4: BLKS(0x0C0ACAD4u);
	r0 = 0xC0C2110u; UPD(0x0C0ACAD6u, 1);  /* 0C0ACAD4 mov.l @(disp,pc),Rn */
	r15 += 0x8u;  /* 0C0ACAD6 add #imm,Rn */
	IF(0x0C0ACAD8u); { u32 t_ = r0; PR = 0x0C0ACADCu; r4 = 0x71u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0C2110, 0x0C0C2110u, 0x0C0ACADCu); }  /* 0C0ACAD8 jsr @Rn */
L_0C0ACADC: BLKS(0x0C0ACADCu);
	W32(r8, r9); UPD(0x0C0ACADEu, 1);  /* 0C0ACADC mov.l Rm,@Rn */
	r4 = 0x40000u; UPD(0x0C0ACAE0u, 1);  /* 0C0ACADE mov.l @(disp,pc),Rn */
	r0 = 0xC071C90u; UPD(0x0C0ACAE2u, 1);  /* 0C0ACAE0 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C0ACAE2 mov Rm,Rn */
	IF(0x0C0ACAE4u); PR = R32(r15); r15 += 4; UPD(0x0C0ACAE6u, 2);  /* 0C0ACAE4 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0ACAE8u, 1);  /* 0C0ACAE6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0ACAEAu, 1);  /* 0C0ACAE8 mov.l @Rm+,Rn */
	IF(0x0C0ACAEAu); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C071C90u: TAIL(blk_f_0C071C90); default: JUMPD(tv_); } }  /* 0C0ACAEA jmp @Rn */
}

void blk_f_0C0ACB20(sh3_t *c)
{
	LOCALS;
L_0C0ACB20: BLKS(0x0C0ACB20u);
	r3 = 0xB4u; UPD(0x0C0ACB22u, 1);  /* 0C0ACB20 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C0ACB22 exts.w Rm,Rn */
	IF(0x0C0ACB24u); MACL = r4 * r3;  /* 0C0ACB24 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C0ACB28u, 4);  /* 0C0ACB26 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0ACB2Au, 1);  /* 0C0ACB28 mov.l Rm,@-Rn */
	IF(0x0C0ACB2Au); r3 = MACL;  /* 0C0ACB2A sts macl,Rn */
	r3 += r0;  /* 0C0ACB2C add Rm,Rn */
	r0 = R32(r3 + 0x24u); UPD(0x0C0ACB30u, 3);  /* 0C0ACB2E mov.l @(disp,Rm),Rn */
	r14 = r15;  /* 0C0ACB30 mov Rm,Rn */
	r6 = R32(r3 + 0x28u); UPD(0x0C0ACB34u, 2);  /* 0C0ACB32 mov.l @(disp,Rm),Rn */
	r5 = R32(r3 + 0x2Cu); UPD(0x0C0ACB36u, 1);  /* 0C0ACB34 mov.l @(disp,Rm),Rn */
	r2 = R32(r3 + 0x30u); UPD(0x0C0ACB38u, 1);  /* 0C0ACB36 mov.l @(disp,Rm),Rn */
	r0 += r5;  /* 0C0ACB38 add Rm,Rn */
	r7 = 0xFF600000u; UPD(0x0C0ACB3Cu, 2);  /* 0C0ACB3A mov.l @(disp,pc),Rn */
	r6 += r2;  /* 0C0ACB3C add Rm,Rn */
	r7 += r0;  /* 0C0ACB3E add Rm,Rn */
	W32(r3 + 0x24u, r0); UPD(0x0C0ACB42u, 3);  /* 0C0ACB40 mov.l Rm,@(disp,Rn) */
	IF(0x0C0ACB42u); T = (s32)r7 >= 0;  /* 0C0ACB42 cmp/pz Rn */
	{ u32 c_ = !T; W32(r3 + 0x28u, r6); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0ACBA0u, 4); goto L_0C0ACBA0; } UPD(0x0C0ACB48u, 1); goto L_0C0ACB48; }  /* 0C0ACB44 bf/s */
L_0C0ACB48: BLKS(0x0C0ACB48u);
	r2 = 0xB80000u; UPD(0x0C0ACB4Au, 1);  /* 0C0ACB48 mov.l @(disp,pc),Rn */
	T = (s32)r7 > (s32)r2;  /* 0C0ACB4A cmp/gt Rm,Rn */
	if (T) { UPD(0x0C0ACB64u, 4); goto L_0C0ACB64; }  /* 0C0ACB4C bt */
L_0C0ACB4E: BLKS(0x0C0ACB4Eu);
	r2 = r6;  /* 0C0ACB4E mov Rm,Rn */
	r5 = 0xC3C4048u; UPD(0x0C0ACB52u, 2);  /* 0C0ACB50 mov.l @(disp,pc),Rn */
	r7 = R32(r5); UPD(0x0C0ACB54u, 1);  /* 0C0ACB52 mov.l @Rm,Rn */
	r6 = 0xFF880000u; UPD(0x0C0ACB56u, 1);  /* 0C0ACB54 mov.l @(disp,pc),Rn */
	r2 -= r7;  /* 0C0ACB56 sub Rm,Rn */
	r2 += r6;  /* 0C0ACB58 add Rm,Rn */
	IF(0x0C0ACB5Au); T = (s32)r2 >= 0;  /* 0C0ACB5A cmp/pz Rn */
	if (!T) { UPD(0x0C0ACB90u, 6); goto L_0C0ACB90; }  /* 0C0ACB5C bf */
L_0C0ACB5E: BLKS(0x0C0ACB5Eu);
	r0 = 0x900000u; UPD(0x0C0ACB60u, 1);  /* 0C0ACB5E mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r0;  /* 0C0ACB60 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0ACB70u, 4); goto L_0C0ACB70; }  /* 0C0ACB62 bf */
L_0C0ACB64: BLKS(0x0C0ACB64u);
	r4 = 0x0u;  /* 0C0ACB64 mov #imm,Rn */
	W32(r3, r4); UPD(0x0C0ACB68u, 2);  /* 0C0ACB66 mov.l Rm,@Rn */
L_0C0ACB68: BLKS(0x0C0ACB68u);
	r15 = r14;  /* 0C0ACB68 mov Rm,Rn */
	IF(0x0C0ACB6Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0ACB6A rts */
L_0C0ACB70: BLKS(0x0C0ACB70u);
	r2 = 0x99u; UPD(0x0C0ACB72u, 1);  /* 0C0ACB70 mov.w @(disp,pc),Rn */
	r2 += r3;  /* 0C0ACB72 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C0ACB76u, 2);  /* 0C0ACB74 mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C0ACB76 add #imm,Rn */
	W8(r2, r0); UPD(0x0C0ACB7Au, 2);  /* 0C0ACB78 mov.b Rm,@Rn */
	r0 &= 0x1u;  /* 0C0ACB7A and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0ACB7C tst Rm,Rn */
	if (T) { UPD(0x0C0ACB68u, 5); goto L_0C0ACB68; }  /* 0C0ACB7E bt */
L_0C0ACB80: BLKS(0x0C0ACB80u);
	r0 = R32(r3 + 0xCu); UPD(0x0C0ACB82u, 1);  /* 0C0ACB80 mov.l @(disp,Rm),Rn */
	r0 += 0x1u;  /* 0C0ACB82 add #imm,Rn */
	r0 &= 0x3u;  /* 0C0ACB84 and #imm,r0 */
	W32(r3 + 0xCu, r0); UPD(0x0C0ACB88u, 3);  /* 0C0ACB86 mov.l Rm,@(disp,Rn) */
	r3 = 0xC0A8AE0u; UPD(0x0C0ACB8Au, 1);  /* 0C0ACB88 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C0ACB8A mov Rm,Rn */
	IF(0x0C0ACB8Cu); { u32 tv_ = r3; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0A8AE0u: TAIL(blk_f_0C0A8AE0); default: JUMPD(tv_); } }  /* 0C0ACB8C jmp @Rn */
L_0C0ACB90: BLKS(0x0C0ACB90u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C0ACB5Eu, 3); goto L_0C0ACB5E; }  /* 0C0ACB90 bra */
L_0C0ACBA0: BLKS(0x0C0ACBA0u);
	{ r7 = 0u - r7; /* slot neg Rm,Rn */ UPD(0x0C0ACB48u, 3); goto L_0C0ACB48; }  /* 0C0ACBA0 bra */
}

void blk_f_0C0ACBD0(sh3_t *c)
{
	LOCALS;
L_0C0ACBD0: BLKS(0x0C0ACBD0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0ACBD2u, 1);  /* 0C0ACBD0 mov.l Rm,@-Rn */
	r0 = 0xB4u; UPD(0x0C0ACBD4u, 1);  /* 0C0ACBD2 mov.w @(disp,pc),Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C0ACBD4 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0ACBD8u, 2);  /* 0C0ACBD6 mov.l Rm,@-Rn */
	IF(0x0C0ACBD8u); MACL = r8 * r0;  /* 0C0ACBD8 mul.l Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0ACBDCu, 3);  /* 0C0ACBDA mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0ACBDEu, 1);  /* 0C0ACBDC mov.l Rm,@-Rn */
	IF(0x0C0ACBDEu); r9 = MACL;  /* 0C0ACBDE sts macl,Rn */
	r0 = 0xC286578u; UPD(0x0C0ACBE2u, 2);  /* 0C0ACBE0 mov.l @(disp,pc),Rn */
	IF(0x0C0ACBE2u); r15 -= 4; W32(r15, PR); UPD(0x0C0ACBE4u, 1);  /* 0C0ACBE2 sts.l pr,@-Rn */
	r9 += r0;  /* 0C0ACBE4 add Rm,Rn */
	r10 = R32(r9 + 0x8u); UPD(0x0C0ACBE8u, 2);  /* 0C0ACBE6 mov.l @(disp,Rm),Rn */
	T = (r10 & r10) == 0;  /* 0C0ACBE8 tst Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0ACC20u, 4); goto L_0C0ACC20; } goto L_0C0ACBEE; }  /* 0C0ACBEA bf/s */
L_0C0ACBEE: BLKS(0x0C0ACBEEu);
	r1 = 0xFDFFFFFFu; UPD(0x0C0ACBF0u, 2);  /* 0C0ACBEE mov.l @(disp,pc),Rn */
	r4 = R32(r9); UPD(0x0C0ACBF2u, 1);  /* 0C0ACBF0 mov.l @Rm,Rn */
	r0 = 0xC062780u; UPD(0x0C0ACBF4u, 1);  /* 0C0ACBF2 mov.l @(disp,pc),Rn */
	r4 &= r1;  /* 0C0ACBF4 and Rm,Rn */
	W32(r9, r4); UPD(0x0C0ACBF8u, 2);  /* 0C0ACBF6 mov.l Rm,@Rn */
	IF(0x0C0ACBF8u); { u32 t_ = r0; PR = 0x0C0ACBFCu; r4 = 0x2u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0ACBFCu); }  /* 0C0ACBF8 jsr @Rn */
L_0C0ACBFC: BLKS(0x0C0ACBFCu);
	r5 = 0xC0A8B10u; UPD(0x0C0ACBFEu, 1);  /* 0C0ACBFC mov.l @(disp,pc),Rn */
	r0 += 0x1u;  /* 0C0ACBFE add #imm,Rn */
	W32(r9 + 0x8u, r0); UPD(0x0C0ACC02u, 2);  /* 0C0ACC00 mov.l Rm,@(disp,Rn) */
	r4 = r8;  /* 0C0ACC02 mov Rm,Rn */
	IF(0x0C0ACC04u); { u32 t_ = r5; PR = 0x0C0ACC08u; W32(r9 + 0xCu, r10); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8B10, 0x0C0A8B10u, 0x0C0ACC08u); }  /* 0C0ACC04 jsr @Rn */
L_0C0ACC08: BLKS(0x0C0ACC08u);
	r3 = 0xC0A9AE0u; UPD(0x0C0ACC0Au, 1);  /* 0C0ACC08 mov.l @(disp,pc),Rn */
	IF(0x0C0ACC0Au); { u32 t_ = r3; PR = 0x0C0ACC0Eu; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C0ACC0Eu); }  /* 0C0ACC0A jsr @Rn */
L_0C0ACC0E: BLKS(0x0C0ACC0Eu);
	r2 = 0x207C0C0u; UPD(0x0C0ACC10u, 1);  /* 0C0ACC0E mov.l @(disp,pc),Rn */
	W32(r9 + 0x34u, r2); UPD(0x0C0ACC12u, 1);  /* 0C0ACC10 mov.l Rm,@(disp,Rn) */
L_0C0ACC12: BLKS(0x0C0ACC12u);
	r15 = r14;  /* 0C0ACC12 mov Rm,Rn */
	IF(0x0C0ACC14u); PR = R32(r15); r15 += 4; UPD(0x0C0ACC16u, 2);  /* 0C0ACC14 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0ACC18u, 1);  /* 0C0ACC16 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0ACC1Au, 1);  /* 0C0ACC18 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0ACC1Cu, 1);  /* 0C0ACC1A mov.l @Rm+,Rn */
	IF(0x0C0ACC1Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0ACC1C rts */
L_0C0ACC20: BLKS(0x0C0ACC20u);
	r15 += 0xFFFFFFF8u;  /* 0C0ACC20 add #imm,Rn */
	r10 = 0x0u;  /* 0C0ACC22 mov #imm,Rn */
	r6 = 0x14u;  /* 0C0ACC24 mov #imm,Rn */
	r8 = 0xC0C02E0u; UPD(0x0C0ACC28u, 4);  /* 0C0ACC26 mov.l @(disp,pc),Rn */
	r5 = 0x3u;  /* 0C0ACC28 mov #imm,Rn */
	W32(r15, r10); UPD(0x0C0ACC2Cu, 2);  /* 0C0ACC2A mov.l Rm,@Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C0ACC2Eu, 1);  /* 0C0ACC2C mov.l Rm,@(disp,Rn) */
	r4 = R32(r9); UPD(0x0C0ACC30u, 1);  /* 0C0ACC2E mov.l @Rm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C0ACC32u, 1);  /* 0C0ACC30 mov.l @(disp,Rm),Rn */
	IF(0x0C0ACC32u); { u32 t_ = r8; PR = 0x0C0ACC36u; r7 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C02E0, 0x0C0C02E0u, 0x0C0ACC36u); }  /* 0C0ACC32 jsr @Rn */
L_0C0ACC36: BLKS(0x0C0ACC36u);
	W32(r9, r10); UPD(0x0C0ACC38u, 1);  /* 0C0ACC36 mov.l Rm,@Rn */
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C0ACC12u, 3); goto L_0C0ACC12; }  /* 0C0ACC38 bra */
}

void blk_f_0C0AD0B0(sh3_t *c)
{
	LOCALS;
L_0C0AD0B0: BLKS(0x0C0AD0B0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD0B2u, 1);  /* 0C0AD0B0 mov.l Rm,@-Rn */
	r3 = 0xB4u; UPD(0x0C0AD0B4u, 1);  /* 0C0AD0B2 mov.w @(disp,pc),Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C0AD0B4 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD0B8u, 2);  /* 0C0AD0B6 mov.l Rm,@-Rn */
	IF(0x0C0AD0B8u); MACL = r8 * r3;  /* 0C0AD0B8 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD0BCu, 3);  /* 0C0AD0BA mov.l Rm,@-Rn */
	r0 = 0xC286578u; UPD(0x0C0AD0BEu, 1);  /* 0C0AD0BC mov.l @(disp,pc),Rn */
	IF(0x0C0AD0BEu); r2 = MACL;  /* 0C0AD0BE sts macl,Rn */
	IF(0x0C0AD0C0u); r15 -= 4; W32(r15, PR); UPD(0x0C0AD0C2u, 2);  /* 0C0AD0C0 sts.l pr,@-Rn */
	r0 += r2;  /* 0C0AD0C2 add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C0AD0C6u, 2);  /* 0C0AD0C4 mov.l @(disp,Rm),Rn */
	r0 = 0x5u;  /* 0C0AD0C6 mov #imm,Rn */
	T = r2 > r0;  /* 0C0AD0C8 cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0AD168u, 5); goto L_0C0AD168; } goto L_0C0AD0CE; }  /* 0C0AD0CA bt/s */
L_0C0AD0CE: BLKS(0x0C0AD0CEu);
	r0 = 0xC0AD0E0u;  /* 0C0AD0CE mova @(disp,pc),r0 */
	IF(0x0C0AD0D0u); r4 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C0AD0D2u, 3);  /* 0C0AD0D0 mov.b @(r0,Rm),Rn */
	r4 = r4 & 0xFF;  /* 0C0AD0D2 extu.b Rm,Rn */
	IF(0x0C0AD0D4u); { u32 tv_ = (r4 + 0x0C0AD0D8u); u32 t_ = PHYS(tv_); IF(0x0C0AD0D6u); ; /* slot nop */ JRGN(tv_); UPD(t_, 4); switch (t_) { case 0x0C0AD0F0u: goto L_0C0AD0F0; case 0x0C0AD100u: goto L_0C0AD100; case 0x0C0AD120u: goto L_0C0AD120; case 0x0C0AD180u: goto L_0C0AD180; case 0x0C0AD1B0u: goto L_0C0AD1B0; default: JUMPD(tv_); } }  /* 0C0AD0D4 braf Rn */
L_0C0AD0F0: BLKS(0x0C0AD0F0u);
	r5 = 0xC0A9A70u; UPD(0x0C0AD0F2u, 1);  /* 0C0AD0F0 mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C0AD0F2 mov Rm,Rn */
	r15 = r14;  /* 0C0AD0F4 mov Rm,Rn */
	IF(0x0C0AD0F6u); PR = R32(r15); r15 += 4; UPD(0x0C0AD0F8u, 3);  /* 0C0AD0F6 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AD0FAu, 1);  /* 0C0AD0F8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AD0FCu, 1);  /* 0C0AD0FA mov.l @Rm+,Rn */
	IF(0x0C0AD0FCu); { u32 tv_ = r5; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A9A70u: TAIL(blk_f_0C0A9A70); default: JUMPD(tv_); } }  /* 0C0AD0FC jmp @Rn */
L_0C0AD100: BLKS(0x0C0AD100u);
	r5 = 0xC1A7108u; UPD(0x0C0AD102u, 1);  /* 0C0AD100 mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C0AD102 mov Rm,Rn */
	r6 = 0xC0A9D90u; UPD(0x0C0AD106u, 2);  /* 0C0AD104 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C0AD106 mov Rm,Rn */
	IF(0x0C0AD108u); PR = R32(r15); r15 += 4; UPD(0x0C0AD10Au, 2);  /* 0C0AD108 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AD10Cu, 1);  /* 0C0AD10A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AD10Eu, 1);  /* 0C0AD10C mov.l @Rm+,Rn */
	IF(0x0C0AD10Eu); { u32 tv_ = r6; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A9D90u: TAIL(blk_f_0C0A9D90); default: JUMPD(tv_); } }  /* 0C0AD10E jmp @Rn */
L_0C0AD120: BLKS(0x0C0AD120u);
	r9 = 0xB4u; UPD(0x0C0AD122u, 1);  /* 0C0AD120 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0AD122 add #imm,Rn */
	IF(0x0C0AD124u); MACL = r8 * r9;  /* 0C0AD124 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C0AD128u, 4);  /* 0C0AD126 mov.l @(disp,pc),Rn */
	r5 = 0x3u;  /* 0C0AD128 mov #imm,Rn */
	IF(0x0C0AD12Au); r9 = MACL;  /* 0C0AD12A sts macl,Rn */
	r9 += r0;  /* 0C0AD12C add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0AD130u, 4);  /* 0C0AD12E mov.w @(disp,pc),Rn */
	IF(0x0C0AD130u); r4 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0AD132u, 1);  /* 0C0AD130 mov.b @(r0,Rm),Rn */
	r3 = r4 & 0xFF;  /* 0C0AD132 extu.b Rm,Rn */
	W32(r15, r3); UPD(0x0C0AD136u, 2);  /* 0C0AD134 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0AD136 add #imm,Rn */
	IF(0x0C0AD138u); r2 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0AD13Au, 2);  /* 0C0AD138 mov.b @(r0,Rm),Rn */
	r7 = r2 & 0xFF;  /* 0C0AD13A extu.b Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C0AD13Eu, 2);  /* 0C0AD13C mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BECB0u; UPD(0x0C0AD140u, 1);  /* 0C0AD13E mov.l @(disp,pc),Rn */
	r4 = R32(r9); UPD(0x0C0AD142u, 1);  /* 0C0AD140 mov.l @Rm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C0AD144u, 1);  /* 0C0AD142 mov.l @(disp,Rm),Rn */
	IF(0x0C0AD144u); { u32 t_ = r0; PR = 0x0C0AD148u; r7 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BECB0, 0x0C0BECB0u, 0x0C0AD148u); }  /* 0C0AD144 jsr @Rn */
L_0C0AD148: BLKS(0x0C0AD148u);
	r4 = r8;  /* 0C0AD148 mov Rm,Rn */
	r8 = 0xC0A8D30u; UPD(0x0C0AD14Cu, 2);  /* 0C0AD14A mov.l @(disp,pc),Rn */
	IF(0x0C0AD14Cu); { u32 t_ = r8; PR = 0x0C0AD150u; r15 += 0x8u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8D30, 0x0C0A8D30u, 0x0C0AD150u); }  /* 0C0AD14C jsr @Rn */
L_0C0AD150: BLKS(0x0C0AD150u);
	IF(0x0C0AD150u); T = (s32)r0 >= 0;  /* 0C0AD150 cmp/pz Rn */
	if (!T) { UPD(0x0C0AD164u, 4); goto L_0C0AD164; }  /* 0C0AD152 bf */
L_0C0AD154: BLKS(0x0C0AD154u);
	r4 = 0x2u;  /* 0C0AD154 mov #imm,Rn */
	r5 = 0xFFFE0000u; UPD(0x0C0AD158u, 2);  /* 0C0AD156 mov.l @(disp,pc),Rn */
	r6 = R32(r9 + 0x2Cu); UPD(0x0C0AD15Au, 1);  /* 0C0AD158 mov.l @(disp,Rm),Rn */
	r6 += r5;  /* 0C0AD15A add Rm,Rn */
	r5 = r0;  /* 0C0AD15C mov Rm,Rn */
	UPD(0x0C0AD15Eu, 2);
L_0C0AD15E: BLKS(0x0C0AD15Eu);
	r8 = 0xC07DE60u; UPD(0x0C0AD160u, 1);  /* 0C0AD15E mov.l @(disp,pc),Rn */
	IF(0x0C0AD160u); { u32 t_ = r8; PR = 0x0C0AD164u; r7 = R32(r9 + 0x30u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07DE60, 0x0C07DE60u, 0x0C0AD164u); }  /* 0C0AD160 jsr @Rn */
L_0C0AD164: BLKS(0x0C0AD164u);
	r5 = 0x0u;  /* 0C0AD164 mov #imm,Rn */
	W32(r9, r5); UPD(0x0C0AD168u, 2);  /* 0C0AD166 mov.l Rm,@Rn */
L_0C0AD168: BLKS(0x0C0AD168u);
	r15 = r14;  /* 0C0AD168 mov Rm,Rn */
	IF(0x0C0AD16Au); PR = R32(r15); r15 += 4; UPD(0x0C0AD16Cu, 2);  /* 0C0AD16A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AD16Eu, 1);  /* 0C0AD16C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AD170u, 1);  /* 0C0AD16E mov.l @Rm+,Rn */
	IF(0x0C0AD170u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AD170 rts */
L_0C0AD180: BLKS(0x0C0AD180u);
	r6 = 0xB4u; UPD(0x0C0AD182u, 1);  /* 0C0AD180 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0AD182 add #imm,Rn */
	IF(0x0C0AD184u); MACL = r8 * r6;  /* 0C0AD184 mul.l Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C0AD188u, 4);  /* 0C0AD186 mov.l @(disp,pc),Rn */
	IF(0x0C0AD188u); r9 = MACL;  /* 0C0AD188 sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C0AD18Cu, 2);  /* 0C0AD18A mov.w @(disp,pc),Rn */
	r9 += r5;  /* 0C0AD18C add Rm,Rn */
	IF(0x0C0AD18Eu); r4 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0AD190u, 2);  /* 0C0AD18E mov.b @(r0,Rm),Rn */
	r5 = 0x7u;  /* 0C0AD190 mov #imm,Rn */
	r3 = r4 & 0xFF;  /* 0C0AD192 extu.b Rm,Rn */
	W32(r15, r3); UPD(0x0C0AD196u, 3);  /* 0C0AD194 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0AD196 add #imm,Rn */
	IF(0x0C0AD198u); r2 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0AD19Au, 2);  /* 0C0AD198 mov.b @(r0,Rm),Rn */
	r0 = r2 & 0xFF;  /* 0C0AD19A extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0AD19Eu, 2);  /* 0C0AD19C mov.l Rm,@(disp,Rn) */
	r8 = 0xC0BD6F0u; UPD(0x0C0AD1A0u, 1);  /* 0C0AD19E mov.l @(disp,pc),Rn */
	r7 = R32(r9 + 0x28u); UPD(0x0C0AD1A2u, 1);  /* 0C0AD1A0 mov.l @(disp,Rm),Rn */
	r4 = R32(r9); UPD(0x0C0AD1A4u, 1);  /* 0C0AD1A2 mov.l @Rm,Rn */
	IF(0x0C0AD1A4u); { u32 t_ = r8; PR = 0x0C0AD1A8u; r6 = R32(r9 + 0x24u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C0AD1A8u); }  /* 0C0AD1A4 jsr @Rn */
L_0C0AD1A8: BLKS(0x0C0AD1A8u);
	r7 = 0x0u;  /* 0C0AD1A8 mov #imm,Rn */
	W32(r9, r7); UPD(0x0C0AD1ACu, 2);  /* 0C0AD1AA mov.l Rm,@Rn */
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C0AD168u, 3); goto L_0C0AD168; }  /* 0C0AD1AC bra */
L_0C0AD1B0: BLKS(0x0C0AD1B0u);
	r0 = 0xB4u; UPD(0x0C0AD1B2u, 1);  /* 0C0AD1B0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0AD1B2 add #imm,Rn */
	IF(0x0C0AD1B4u); MACL = r8 * r0;  /* 0C0AD1B4 mul.l Rm,Rn */
	r4 = 0xC286578u; UPD(0x0C0AD1B8u, 4);  /* 0C0AD1B6 mov.l @(disp,pc),Rn */
	r5 = 0x2u;  /* 0C0AD1B8 mov #imm,Rn */
	IF(0x0C0AD1BAu); r9 = MACL;  /* 0C0AD1BA sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C0AD1BEu, 3);  /* 0C0AD1BC mov.w @(disp,pc),Rn */
	r9 += r4;  /* 0C0AD1BE add Rm,Rn */
	IF(0x0C0AD1C0u); r3 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0AD1C2u, 2);  /* 0C0AD1C0 mov.b @(r0,Rm),Rn */
	r2 = r3 & 0xFF;  /* 0C0AD1C2 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C0AD1C6u, 2);  /* 0C0AD1C4 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0AD1C6 add #imm,Rn */
	IF(0x0C0AD1C8u); r7 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0AD1CAu, 2);  /* 0C0AD1C8 mov.b @(r0,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C0AD1CA extu.b Rm,Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C0AD1CEu, 2);  /* 0C0AD1CC mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BECB0u; UPD(0x0C0AD1D0u, 1);  /* 0C0AD1CE mov.l @(disp,pc),Rn */
	r4 = R32(r9); UPD(0x0C0AD1D2u, 1);  /* 0C0AD1D0 mov.l @Rm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C0AD1D4u, 1);  /* 0C0AD1D2 mov.l @(disp,Rm),Rn */
	IF(0x0C0AD1D4u); { u32 t_ = r0; PR = 0x0C0AD1D8u; r7 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BECB0, 0x0C0BECB0u, 0x0C0AD1D8u); }  /* 0C0AD1D4 jsr @Rn */
L_0C0AD1D8: BLKS(0x0C0AD1D8u);
	r4 = r8;  /* 0C0AD1D8 mov Rm,Rn */
	r8 = 0xC0A8D30u; UPD(0x0C0AD1DCu, 2);  /* 0C0AD1DA mov.l @(disp,pc),Rn */
	IF(0x0C0AD1DCu); { u32 t_ = r8; PR = 0x0C0AD1E0u; r15 += 0x8u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8D30, 0x0C0A8D30u, 0x0C0AD1E0u); }  /* 0C0AD1DC jsr @Rn */
L_0C0AD1E0: BLKS(0x0C0AD1E0u);
	IF(0x0C0AD1E0u); T = (s32)r0 >= 0;  /* 0C0AD1E0 cmp/pz Rn */
	if (!T) { UPD(0x0C0AD164u, 4); goto L_0C0AD164; }  /* 0C0AD1E2 bf */
L_0C0AD1E4: BLKS(0x0C0AD1E4u);
	r6 = R32(r9 + 0x2Cu); UPD(0x0C0AD1E6u, 1);  /* 0C0AD1E4 mov.l @(disp,Rm),Rn */
	r4 = 0x2u;  /* 0C0AD1E6 mov #imm,Rn */
	{ r5 = r0; /* slot mov Rm,Rn */ UPD(0x0C0AD15Eu, 4); goto L_0C0AD15E; }  /* 0C0AD1E8 bra */
}

void blk_f_0C0AD2F0(sh3_t *c)
{
	LOCALS;
L_0C0AD2F0: BLKS(0x0C0AD2F0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD2F2u, 1);  /* 0C0AD2F0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD2F4u, 1);  /* 0C0AD2F2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD2F6u, 1);  /* 0C0AD2F4 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C0AD2F6 exts.w Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD2FAu, 2);  /* 0C0AD2F8 mov.l Rm,@-Rn */
	r4 = r9;  /* 0C0AD2FA mov Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD2FEu, 2);  /* 0C0AD2FC mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD300u, 1);  /* 0C0AD2FE mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD302u, 1);  /* 0C0AD300 mov.l Rm,@-Rn */
	r2 = 0xC0A9D90u; UPD(0x0C0AD304u, 1);  /* 0C0AD302 mov.l @(disp,pc),Rn */
	IF(0x0C0AD304u); r15 -= 4; W32(r15, PR); UPD(0x0C0AD306u, 1);  /* 0C0AD304 sts.l pr,@-Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0AD306 add #imm,Rn */
	r5 = 0xC1DD96Cu; UPD(0x0C0AD30Au, 2);  /* 0C0AD308 mov.l @(disp,pc),Rn */
	IF(0x0C0AD30Au); { u32 t_ = r2; PR = 0x0C0AD30Eu; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9D90, 0x0C0A9D90u, 0x0C0AD30Eu); }  /* 0C0AD30A jsr @Rn */
L_0C0AD30E: BLKS(0x0C0AD30Eu);
	r4 = 0xB4u; UPD(0x0C0AD310u, 1);  /* 0C0AD30E mov.w @(disp,pc),Rn */
	IF(0x0C0AD310u); MACL = r9 * r4;  /* 0C0AD310 mul.l Rm,Rn */
	IF(0x0C0AD312u); r0 = MACL;  /* 0C0AD312 sts macl,Rn */
	W32(r14, r0); UPD(0x0C0AD316u, 4);  /* 0C0AD314 mov.l Rm,@Rn */
	IF(0x0C0AD316u); r3 = MACL;  /* 0C0AD316 sts macl,Rn */
	r0 = 0xC286578u; UPD(0x0C0AD31Au, 2);  /* 0C0AD318 mov.l @(disp,pc),Rn */
	r3 += r0;  /* 0C0AD31A add Rm,Rn */
	r11 = R32(r3 + 0x1Cu); UPD(0x0C0AD31Eu, 2);  /* 0C0AD31C mov.l @(disp,Rm),Rn */
	r2 = R32(r11); UPD(0x0C0AD320u, 1);  /* 0C0AD31E mov.l @Rm,Rn */
	IF(0x0C0AD320u); T = (s32)r2 >= 0;  /* 0C0AD320 cmp/pz Rn */
	if (!T) { UPD(0x0C0AD3B0u, 4); goto L_0C0AD3B0; }  /* 0C0AD322 bf */
L_0C0AD324: BLKS(0x0C0AD324u);
	r6 = (r2 >> 16) | (r2 << 16);  /* 0C0AD324 swap.w Rm,Rn */
	r2 = R32(r11 + 0x4u); UPD(0x0C0AD328u, 2);  /* 0C0AD326 mov.l @(disp,Rm),Rn */
	IF(0x0C0AD328u); T = (s32)r2 >= 0;  /* 0C0AD328 cmp/pz Rn */
	{ u32 c_ = !T; r13 = (u32)(s32)(s16)r6; /* slot exts.w Rm,Rn */ if (c_) { UPD(0x0C0AD3A0u, 4); goto L_0C0AD3A0; } UPD(0x0C0AD32Eu, 1); goto L_0C0AD32E; }  /* 0C0AD32A bf/s */
L_0C0AD32E: BLKS(0x0C0AD32Eu);
	r8 = 0xC062780u; UPD(0x0C0AD330u, 1);  /* 0C0AD32E mov.l @(disp,pc),Rn */
	r0 = (r2 >> 16) | (r2 << 16);  /* 0C0AD330 swap.w Rm,Rn */
	r10 = 0x98u; UPD(0x0C0AD334u, 2);  /* 0C0AD332 mov.w @(disp,pc),Rn */
	r12 = (u32)(s32)(s16)r0;  /* 0C0AD334 exts.w Rm,Rn */
	IF(0x0C0AD336u); { u32 t_ = r8; PR = 0x0C0AD33Au; r10 += r3; /* slot add Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0AD33Au); }  /* 0C0AD336 jsr @Rn */
L_0C0AD33A: BLKS(0x0C0AD33Au);
	r0 += 0x3Cu;  /* 0C0AD33A add #imm,Rn */
	W8(r10, r0); UPD(0x0C0AD33Eu, 2);  /* 0C0AD33C mov.b Rm,@Rn */
	r4 = r13;  /* 0C0AD33E mov Rm,Rn */
	r8 = 0xC286578u; UPD(0x0C0AD342u, 2);  /* 0C0AD340 mov.l @(disp,pc),Rn */
	r4 += r4;  /* 0C0AD342 add Rm,Rn */
	r3 = R32(r14); UPD(0x0C0AD346u, 2);  /* 0C0AD344 mov.l @Rm,Rn */
	r9 = r12;  /* 0C0AD346 mov Rm,Rn */
	r8 += 0x5Cu;  /* 0C0AD348 add #imm,Rn */
	W32(r14 + 0x4u, r4); UPD(0x0C0AD34Cu, 3);  /* 0C0AD34A mov.l Rm,@(disp,Rn) */
	r10 = 0x0u;  /* 0C0AD34C mov #imm,Rn */
	r9 += r9;  /* 0C0AD34E add Rm,Rn */
	r8 += r3;  /* 0C0AD350 add Rm,Rn */
	IF(0x0C0AD352u); ;  /* 0C0AD352 nop */
	UPD(0x0C0AD354u, 4);
L_0C0AD354: BLKS(0x0C0AD354u);
	r2 = 0xC062780u; UPD(0x0C0AD356u, 1);  /* 0C0AD354 mov.l @(disp,pc),Rn */
	IF(0x0C0AD356u); { u32 t_ = r2; PR = 0x0C0AD35Au; r4 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0AD35Au); }  /* 0C0AD356 jsr @Rn */
L_0C0AD35A: BLKS(0x0C0AD35Au);
	r3 = R32(r11 + 0x8u); UPD(0x0C0AD35Cu, 1);  /* 0C0AD35A mov.l @(disp,Rm),Rn */
	r0 -= r13;  /* 0C0AD35C sub Rm,Rn */
	r7 = 0xC062780u; UPD(0x0C0AD360u, 2);  /* 0C0AD35E mov.l @(disp,pc),Rn */
	IF(0x0C0AD360u); r0 <<= 16;  /* 0C0AD360 shll16 Rn */
	r3 += r0;  /* 0C0AD362 add Rm,Rn */
	W32(r8, r3); UPD(0x0C0AD366u, 3);  /* 0C0AD364 mov.l Rm,@Rn */
	IF(0x0C0AD366u); { u32 t_ = r7; PR = 0x0C0AD36Au; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0AD36Au); }  /* 0C0AD366 jsr @Rn */
L_0C0AD36A: BLKS(0x0C0AD36Au);
	r6 = R32(r11 + 0xCu); UPD(0x0C0AD36Cu, 1);  /* 0C0AD36A mov.l @(disp,Rm),Rn */
	r0 -= r12;  /* 0C0AD36C sub Rm,Rn */
	IF(0x0C0AD36Eu); r0 <<= 16;  /* 0C0AD36E shll16 Rn */
	r5 = r10;  /* 0C0AD370 mov Rm,Rn */
	r6 += r0;  /* 0C0AD372 add Rm,Rn */
	W32(r8 + 0x4u, r6); UPD(0x0C0AD376u, 5);  /* 0C0AD374 mov.l Rm,@(disp,Rn) */
	r5 += 0x1u;  /* 0C0AD376 add #imm,Rn */
	r10 = (u32)(s32)(s16)r5;  /* 0C0AD378 exts.w Rm,Rn */
	r2 = 0x2u;  /* 0C0AD37A mov #imm,Rn */
	T = (s32)r10 > (s32)r2;  /* 0C0AD37C cmp/gt Rm,Rn */
	{ u32 c_ = !T; r8 += 0x8u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AD354u, 7); goto L_0C0AD354; } goto L_0C0AD382; }  /* 0C0AD37E bf/s */
L_0C0AD382: BLKS(0x0C0AD382u);
	r14 += 0x8u;  /* 0C0AD382 add #imm,Rn */
	r15 = r14;  /* 0C0AD384 mov Rm,Rn */
	IF(0x0C0AD386u); PR = R32(r15); r15 += 4; UPD(0x0C0AD388u, 4);  /* 0C0AD386 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AD38Au, 1);  /* 0C0AD388 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0AD38Cu, 1);  /* 0C0AD38A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0AD38Eu, 1);  /* 0C0AD38C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0AD390u, 1);  /* 0C0AD38E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AD392u, 1);  /* 0C0AD390 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AD394u, 1);  /* 0C0AD392 mov.l @Rm+,Rn */
	IF(0x0C0AD394u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AD394 rts */
L_0C0AD3A0: BLKS(0x0C0AD3A0u);
	r7 = 0xFFFFu; UPD(0x0C0AD3A2u, 1);  /* 0C0AD3A0 mov.l @(disp,pc),Rn */
	{ r2 += r7; /* slot add Rm,Rn */ UPD(0x0C0AD32Eu, 3); goto L_0C0AD32E; }  /* 0C0AD3A2 bra */
L_0C0AD3B0: BLKS(0x0C0AD3B0u);
	r5 = 0xFFFFu; UPD(0x0C0AD3B2u, 1);  /* 0C0AD3B0 mov.l @(disp,pc),Rn */
	{ r2 += r5; /* slot add Rm,Rn */ UPD(0x0C0AD324u, 3); goto L_0C0AD324; }  /* 0C0AD3B2 bra */
}

void blk_f_0C0AD3D0(sh3_t *c)
{
	LOCALS;
L_0C0AD3D0: BLKS(0x0C0AD3D0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD3D2u, 1);  /* 0C0AD3D0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD3D4u, 1);  /* 0C0AD3D2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD3D6u, 1);  /* 0C0AD3D4 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C0AD3D6 exts.w Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD3DAu, 2);  /* 0C0AD3D8 mov.l Rm,@-Rn */
	r4 = r9;  /* 0C0AD3DA mov Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD3DEu, 2);  /* 0C0AD3DC mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD3E0u, 1);  /* 0C0AD3DE mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD3E2u, 1);  /* 0C0AD3E0 mov.l Rm,@-Rn */
	r2 = 0xC0A9D90u; UPD(0x0C0AD3E4u, 1);  /* 0C0AD3E2 mov.l @(disp,pc),Rn */
	IF(0x0C0AD3E4u); r15 -= 4; W32(r15, PR); UPD(0x0C0AD3E6u, 1);  /* 0C0AD3E4 sts.l pr,@-Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0AD3E6 add #imm,Rn */
	r5 = 0xC1DD978u; UPD(0x0C0AD3EAu, 2);  /* 0C0AD3E8 mov.l @(disp,pc),Rn */
	IF(0x0C0AD3EAu); { u32 t_ = r2; PR = 0x0C0AD3EEu; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9D90, 0x0C0A9D90u, 0x0C0AD3EEu); }  /* 0C0AD3EA jsr @Rn */
L_0C0AD3EE: BLKS(0x0C0AD3EEu);
	r4 = 0xB4u; UPD(0x0C0AD3F0u, 1);  /* 0C0AD3EE mov.w @(disp,pc),Rn */
	IF(0x0C0AD3F0u); MACL = r9 * r4;  /* 0C0AD3F0 mul.l Rm,Rn */
	IF(0x0C0AD3F2u); r0 = MACL;  /* 0C0AD3F2 sts macl,Rn */
	W32(r14, r0); UPD(0x0C0AD3F6u, 4);  /* 0C0AD3F4 mov.l Rm,@Rn */
	IF(0x0C0AD3F6u); r3 = MACL;  /* 0C0AD3F6 sts macl,Rn */
	r0 = 0xC286578u; UPD(0x0C0AD3FAu, 2);  /* 0C0AD3F8 mov.l @(disp,pc),Rn */
	r3 += r0;  /* 0C0AD3FA add Rm,Rn */
	r11 = R32(r3 + 0x1Cu); UPD(0x0C0AD3FEu, 2);  /* 0C0AD3FC mov.l @(disp,Rm),Rn */
	r2 = R32(r11); UPD(0x0C0AD400u, 1);  /* 0C0AD3FE mov.l @Rm,Rn */
	IF(0x0C0AD400u); T = (s32)r2 >= 0;  /* 0C0AD400 cmp/pz Rn */
	if (!T) { UPD(0x0C0AD490u, 4); goto L_0C0AD490; }  /* 0C0AD402 bf */
L_0C0AD404: BLKS(0x0C0AD404u);
	r6 = (r2 >> 16) | (r2 << 16);  /* 0C0AD404 swap.w Rm,Rn */
	r2 = R32(r11 + 0x4u); UPD(0x0C0AD408u, 2);  /* 0C0AD406 mov.l @(disp,Rm),Rn */
	IF(0x0C0AD408u); T = (s32)r2 >= 0;  /* 0C0AD408 cmp/pz Rn */
	{ u32 c_ = !T; r13 = (u32)(s32)(s16)r6; /* slot exts.w Rm,Rn */ if (c_) { UPD(0x0C0AD480u, 4); goto L_0C0AD480; } UPD(0x0C0AD40Eu, 1); goto L_0C0AD40E; }  /* 0C0AD40A bf/s */
L_0C0AD40E: BLKS(0x0C0AD40Eu);
	r8 = 0xC062780u; UPD(0x0C0AD410u, 1);  /* 0C0AD40E mov.l @(disp,pc),Rn */
	r0 = (r2 >> 16) | (r2 << 16);  /* 0C0AD410 swap.w Rm,Rn */
	r10 = 0x98u; UPD(0x0C0AD414u, 2);  /* 0C0AD412 mov.w @(disp,pc),Rn */
	r12 = (u32)(s32)(s16)r0;  /* 0C0AD414 exts.w Rm,Rn */
	IF(0x0C0AD416u); { u32 t_ = r8; PR = 0x0C0AD41Au; r10 += r3; /* slot add Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0AD41Au); }  /* 0C0AD416 jsr @Rn */
L_0C0AD41A: BLKS(0x0C0AD41Au);
	r0 += 0x3Cu;  /* 0C0AD41A add #imm,Rn */
	W8(r10, r0); UPD(0x0C0AD41Eu, 2);  /* 0C0AD41C mov.b Rm,@Rn */
	r4 = r13;  /* 0C0AD41E mov Rm,Rn */
	r8 = 0xC286578u; UPD(0x0C0AD422u, 2);  /* 0C0AD420 mov.l @(disp,pc),Rn */
	r4 += r4;  /* 0C0AD422 add Rm,Rn */
	r3 = R32(r14); UPD(0x0C0AD426u, 2);  /* 0C0AD424 mov.l @Rm,Rn */
	r9 = r12;  /* 0C0AD426 mov Rm,Rn */
	r8 += 0x5Cu;  /* 0C0AD428 add #imm,Rn */
	W32(r14 + 0x4u, r4); UPD(0x0C0AD42Cu, 3);  /* 0C0AD42A mov.l Rm,@(disp,Rn) */
	r10 = 0x0u;  /* 0C0AD42C mov #imm,Rn */
	r9 += r9;  /* 0C0AD42E add Rm,Rn */
	r8 += r3;  /* 0C0AD430 add Rm,Rn */
	IF(0x0C0AD432u); ;  /* 0C0AD432 nop */
	UPD(0x0C0AD434u, 4);
L_0C0AD434: BLKS(0x0C0AD434u);
	r2 = 0xC062780u; UPD(0x0C0AD436u, 1);  /* 0C0AD434 mov.l @(disp,pc),Rn */
	IF(0x0C0AD436u); { u32 t_ = r2; PR = 0x0C0AD43Au; r4 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0AD43Au); }  /* 0C0AD436 jsr @Rn */
L_0C0AD43A: BLKS(0x0C0AD43Au);
	r3 = R32(r11 + 0x8u); UPD(0x0C0AD43Cu, 1);  /* 0C0AD43A mov.l @(disp,Rm),Rn */
	r0 -= r13;  /* 0C0AD43C sub Rm,Rn */
	r7 = 0xC062780u; UPD(0x0C0AD440u, 2);  /* 0C0AD43E mov.l @(disp,pc),Rn */
	IF(0x0C0AD440u); r0 <<= 16;  /* 0C0AD440 shll16 Rn */
	r3 += r0;  /* 0C0AD442 add Rm,Rn */
	W32(r8, r3); UPD(0x0C0AD446u, 3);  /* 0C0AD444 mov.l Rm,@Rn */
	IF(0x0C0AD446u); { u32 t_ = r7; PR = 0x0C0AD44Au; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0AD44Au); }  /* 0C0AD446 jsr @Rn */
L_0C0AD44A: BLKS(0x0C0AD44Au);
	r6 = R32(r11 + 0xCu); UPD(0x0C0AD44Cu, 1);  /* 0C0AD44A mov.l @(disp,Rm),Rn */
	r0 -= r12;  /* 0C0AD44C sub Rm,Rn */
	IF(0x0C0AD44Eu); r0 <<= 16;  /* 0C0AD44E shll16 Rn */
	r5 = r10;  /* 0C0AD450 mov Rm,Rn */
	r6 += r0;  /* 0C0AD452 add Rm,Rn */
	W32(r8 + 0x4u, r6); UPD(0x0C0AD456u, 5);  /* 0C0AD454 mov.l Rm,@(disp,Rn) */
	r5 += 0x1u;  /* 0C0AD456 add #imm,Rn */
	r10 = (u32)(s32)(s16)r5;  /* 0C0AD458 exts.w Rm,Rn */
	r2 = 0x2u;  /* 0C0AD45A mov #imm,Rn */
	T = (s32)r10 > (s32)r2;  /* 0C0AD45C cmp/gt Rm,Rn */
	{ u32 c_ = !T; r8 += 0x8u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AD434u, 7); goto L_0C0AD434; } goto L_0C0AD462; }  /* 0C0AD45E bf/s */
L_0C0AD462: BLKS(0x0C0AD462u);
	r14 += 0x8u;  /* 0C0AD462 add #imm,Rn */
	r15 = r14;  /* 0C0AD464 mov Rm,Rn */
	IF(0x0C0AD466u); PR = R32(r15); r15 += 4; UPD(0x0C0AD468u, 4);  /* 0C0AD466 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AD46Au, 1);  /* 0C0AD468 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0AD46Cu, 1);  /* 0C0AD46A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0AD46Eu, 1);  /* 0C0AD46C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0AD470u, 1);  /* 0C0AD46E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AD472u, 1);  /* 0C0AD470 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AD474u, 1);  /* 0C0AD472 mov.l @Rm+,Rn */
	IF(0x0C0AD474u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AD474 rts */
L_0C0AD480: BLKS(0x0C0AD480u);
	r7 = 0xFFFFu; UPD(0x0C0AD482u, 1);  /* 0C0AD480 mov.l @(disp,pc),Rn */
	{ r2 += r7; /* slot add Rm,Rn */ UPD(0x0C0AD40Eu, 3); goto L_0C0AD40E; }  /* 0C0AD482 bra */
L_0C0AD490: BLKS(0x0C0AD490u);
	r5 = 0xFFFFu; UPD(0x0C0AD492u, 1);  /* 0C0AD490 mov.l @(disp,pc),Rn */
	{ r2 += r5; /* slot add Rm,Rn */ UPD(0x0C0AD404u, 3); goto L_0C0AD404; }  /* 0C0AD492 bra */
}

void blk_f_0C0AD4B0(sh3_t *c)
{
	LOCALS;
L_0C0AD4B0: BLKS(0x0C0AD4B0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD4B2u, 1);  /* 0C0AD4B0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD4B4u, 1);  /* 0C0AD4B2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD4B6u, 1);  /* 0C0AD4B4 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C0AD4B6 exts.w Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD4BAu, 2);  /* 0C0AD4B8 mov.l Rm,@-Rn */
	r4 = r9;  /* 0C0AD4BA mov Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD4BEu, 2);  /* 0C0AD4BC mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD4C0u, 1);  /* 0C0AD4BE mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD4C2u, 1);  /* 0C0AD4C0 mov.l Rm,@-Rn */
	r2 = 0xC0A9D90u; UPD(0x0C0AD4C4u, 1);  /* 0C0AD4C2 mov.l @(disp,pc),Rn */
	IF(0x0C0AD4C4u); r15 -= 4; W32(r15, PR); UPD(0x0C0AD4C6u, 1);  /* 0C0AD4C4 sts.l pr,@-Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0AD4C6 add #imm,Rn */
	r5 = 0xC1DDA42u; UPD(0x0C0AD4CAu, 2);  /* 0C0AD4C8 mov.l @(disp,pc),Rn */
	IF(0x0C0AD4CAu); { u32 t_ = r2; PR = 0x0C0AD4CEu; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9D90, 0x0C0A9D90u, 0x0C0AD4CEu); }  /* 0C0AD4CA jsr @Rn */
L_0C0AD4CE: BLKS(0x0C0AD4CEu);
	r4 = 0xB4u; UPD(0x0C0AD4D0u, 1);  /* 0C0AD4CE mov.w @(disp,pc),Rn */
	IF(0x0C0AD4D0u); MACL = r9 * r4;  /* 0C0AD4D0 mul.l Rm,Rn */
	IF(0x0C0AD4D2u); r0 = MACL;  /* 0C0AD4D2 sts macl,Rn */
	W32(r14, r0); UPD(0x0C0AD4D6u, 4);  /* 0C0AD4D4 mov.l Rm,@Rn */
	IF(0x0C0AD4D6u); r3 = MACL;  /* 0C0AD4D6 sts macl,Rn */
	r0 = 0xC286578u; UPD(0x0C0AD4DAu, 2);  /* 0C0AD4D8 mov.l @(disp,pc),Rn */
	r3 += r0;  /* 0C0AD4DA add Rm,Rn */
	r11 = R32(r3 + 0x1Cu); UPD(0x0C0AD4DEu, 2);  /* 0C0AD4DC mov.l @(disp,Rm),Rn */
	r2 = R32(r11); UPD(0x0C0AD4E0u, 1);  /* 0C0AD4DE mov.l @Rm,Rn */
	IF(0x0C0AD4E0u); T = (s32)r2 >= 0;  /* 0C0AD4E0 cmp/pz Rn */
	if (!T) { UPD(0x0C0AD570u, 4); goto L_0C0AD570; }  /* 0C0AD4E2 bf */
L_0C0AD4E4: BLKS(0x0C0AD4E4u);
	r6 = (r2 >> 16) | (r2 << 16);  /* 0C0AD4E4 swap.w Rm,Rn */
	r2 = R32(r11 + 0x4u); UPD(0x0C0AD4E8u, 2);  /* 0C0AD4E6 mov.l @(disp,Rm),Rn */
	IF(0x0C0AD4E8u); T = (s32)r2 >= 0;  /* 0C0AD4E8 cmp/pz Rn */
	{ u32 c_ = !T; r13 = (u32)(s32)(s16)r6; /* slot exts.w Rm,Rn */ if (c_) { UPD(0x0C0AD560u, 4); goto L_0C0AD560; } UPD(0x0C0AD4EEu, 1); goto L_0C0AD4EE; }  /* 0C0AD4EA bf/s */
L_0C0AD4EE: BLKS(0x0C0AD4EEu);
	r8 = 0xC062780u; UPD(0x0C0AD4F0u, 1);  /* 0C0AD4EE mov.l @(disp,pc),Rn */
	r0 = (r2 >> 16) | (r2 << 16);  /* 0C0AD4F0 swap.w Rm,Rn */
	r10 = 0x98u; UPD(0x0C0AD4F4u, 2);  /* 0C0AD4F2 mov.w @(disp,pc),Rn */
	r12 = (u32)(s32)(s16)r0;  /* 0C0AD4F4 exts.w Rm,Rn */
	IF(0x0C0AD4F6u); { u32 t_ = r8; PR = 0x0C0AD4FAu; r10 += r3; /* slot add Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0AD4FAu); }  /* 0C0AD4F6 jsr @Rn */
L_0C0AD4FA: BLKS(0x0C0AD4FAu);
	r0 += 0x3Cu;  /* 0C0AD4FA add #imm,Rn */
	W8(r10, r0); UPD(0x0C0AD4FEu, 2);  /* 0C0AD4FC mov.b Rm,@Rn */
	r4 = r13;  /* 0C0AD4FE mov Rm,Rn */
	r8 = 0xC286578u; UPD(0x0C0AD502u, 2);  /* 0C0AD500 mov.l @(disp,pc),Rn */
	r4 += r4;  /* 0C0AD502 add Rm,Rn */
	r3 = R32(r14); UPD(0x0C0AD506u, 2);  /* 0C0AD504 mov.l @Rm,Rn */
	r9 = r12;  /* 0C0AD506 mov Rm,Rn */
	r8 += 0x5Cu;  /* 0C0AD508 add #imm,Rn */
	W32(r14 + 0x4u, r4); UPD(0x0C0AD50Cu, 3);  /* 0C0AD50A mov.l Rm,@(disp,Rn) */
	r10 = 0x0u;  /* 0C0AD50C mov #imm,Rn */
	r9 += r9;  /* 0C0AD50E add Rm,Rn */
	r8 += r3;  /* 0C0AD510 add Rm,Rn */
	IF(0x0C0AD512u); ;  /* 0C0AD512 nop */
	UPD(0x0C0AD514u, 4);
L_0C0AD514: BLKS(0x0C0AD514u);
	r2 = 0xC062780u; UPD(0x0C0AD516u, 1);  /* 0C0AD514 mov.l @(disp,pc),Rn */
	IF(0x0C0AD516u); { u32 t_ = r2; PR = 0x0C0AD51Au; r4 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0AD51Au); }  /* 0C0AD516 jsr @Rn */
L_0C0AD51A: BLKS(0x0C0AD51Au);
	r3 = R32(r11 + 0x8u); UPD(0x0C0AD51Cu, 1);  /* 0C0AD51A mov.l @(disp,Rm),Rn */
	r0 -= r13;  /* 0C0AD51C sub Rm,Rn */
	r7 = 0xC062780u; UPD(0x0C0AD520u, 2);  /* 0C0AD51E mov.l @(disp,pc),Rn */
	IF(0x0C0AD520u); r0 <<= 16;  /* 0C0AD520 shll16 Rn */
	r3 += r0;  /* 0C0AD522 add Rm,Rn */
	W32(r8, r3); UPD(0x0C0AD526u, 3);  /* 0C0AD524 mov.l Rm,@Rn */
	IF(0x0C0AD526u); { u32 t_ = r7; PR = 0x0C0AD52Au; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0AD52Au); }  /* 0C0AD526 jsr @Rn */
L_0C0AD52A: BLKS(0x0C0AD52Au);
	r6 = R32(r11 + 0xCu); UPD(0x0C0AD52Cu, 1);  /* 0C0AD52A mov.l @(disp,Rm),Rn */
	r0 -= r12;  /* 0C0AD52C sub Rm,Rn */
	IF(0x0C0AD52Eu); r0 <<= 16;  /* 0C0AD52E shll16 Rn */
	r5 = r10;  /* 0C0AD530 mov Rm,Rn */
	r6 += r0;  /* 0C0AD532 add Rm,Rn */
	W32(r8 + 0x4u, r6); UPD(0x0C0AD536u, 5);  /* 0C0AD534 mov.l Rm,@(disp,Rn) */
	r5 += 0x1u;  /* 0C0AD536 add #imm,Rn */
	r10 = (u32)(s32)(s16)r5;  /* 0C0AD538 exts.w Rm,Rn */
	r2 = 0x2u;  /* 0C0AD53A mov #imm,Rn */
	T = (s32)r10 > (s32)r2;  /* 0C0AD53C cmp/gt Rm,Rn */
	{ u32 c_ = !T; r8 += 0x8u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AD514u, 7); goto L_0C0AD514; } goto L_0C0AD542; }  /* 0C0AD53E bf/s */
L_0C0AD542: BLKS(0x0C0AD542u);
	r14 += 0x8u;  /* 0C0AD542 add #imm,Rn */
	r15 = r14;  /* 0C0AD544 mov Rm,Rn */
	IF(0x0C0AD546u); PR = R32(r15); r15 += 4; UPD(0x0C0AD548u, 4);  /* 0C0AD546 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AD54Au, 1);  /* 0C0AD548 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0AD54Cu, 1);  /* 0C0AD54A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0AD54Eu, 1);  /* 0C0AD54C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0AD550u, 1);  /* 0C0AD54E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AD552u, 1);  /* 0C0AD550 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AD554u, 1);  /* 0C0AD552 mov.l @Rm+,Rn */
	IF(0x0C0AD554u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AD554 rts */
L_0C0AD560: BLKS(0x0C0AD560u);
	r7 = 0xFFFFu; UPD(0x0C0AD562u, 1);  /* 0C0AD560 mov.l @(disp,pc),Rn */
	{ r2 += r7; /* slot add Rm,Rn */ UPD(0x0C0AD4EEu, 3); goto L_0C0AD4EE; }  /* 0C0AD562 bra */
L_0C0AD570: BLKS(0x0C0AD570u);
	r5 = 0xFFFFu; UPD(0x0C0AD572u, 1);  /* 0C0AD570 mov.l @(disp,pc),Rn */
	{ r2 += r5; /* slot add Rm,Rn */ UPD(0x0C0AD4E4u, 3); goto L_0C0AD4E4; }  /* 0C0AD572 bra */
}

void blk_f_0C0AD590(sh3_t *c)
{
	LOCALS;
L_0C0AD590: BLKS(0x0C0AD590u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD592u, 1);  /* 0C0AD590 mov.l Rm,@-Rn */
	r4 = 0x1u;  /* 0C0AD592 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD596u, 2);  /* 0C0AD594 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD598u, 1);  /* 0C0AD596 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD59Au, 1);  /* 0C0AD598 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD59Cu, 1);  /* 0C0AD59A mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD59Eu, 1);  /* 0C0AD59C mov.l Rm,@-Rn */
	r8 = 0xC071740u; UPD(0x0C0AD5A0u, 1);  /* 0C0AD59E mov.l @(disp,pc),Rn */
	IF(0x0C0AD5A0u); r15 -= 4; W32(r15, PR); UPD(0x0C0AD5A2u, 1);  /* 0C0AD5A0 sts.l pr,@-Rn */
	r0 = 0xC2B1811u; UPD(0x0C0AD5A4u, 1);  /* 0C0AD5A2 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0AD5A4 mov Rm,Rn */
	IF(0x0C0AD5A6u); { u32 t_ = r8; PR = 0x0C0AD5AAu; r12 = (u32)(s32)(s8)R8(r0); /* slot mov.b @Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C071740, 0x0C071740u, 0x0C0AD5AAu); }  /* 0C0AD5A6 jsr @Rn */
L_0C0AD5AA: BLKS(0x0C0AD5AAu);
	T = (r0 & r0) == 0;  /* 0C0AD5AA tst Rm,Rn */
	if (!T) { UPD(0x0C0AD5D0u, 4); goto L_0C0AD5D0; }  /* 0C0AD5AC bf */
L_0C0AD5AE: BLKS(0x0C0AD5AEu);
	r0 = 0x1u;  /* 0C0AD5AE mov #imm,Rn */
	r15 = r14;  /* 0C0AD5B0 mov Rm,Rn */
	IF(0x0C0AD5B2u); PR = R32(r15); r15 += 4; UPD(0x0C0AD5B4u, 3);  /* 0C0AD5B2 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AD5B6u, 1);  /* 0C0AD5B4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0AD5B8u, 1);  /* 0C0AD5B6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0AD5BAu, 1);  /* 0C0AD5B8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AD5BCu, 1);  /* 0C0AD5BA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AD5BEu, 1);  /* 0C0AD5BC mov.l @Rm+,Rn */
	IF(0x0C0AD5BEu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AD5BE rts */
L_0C0AD5D0: BLKS(0x0C0AD5D0u);
	r10 = 0xC28EDFCu; UPD(0x0C0AD5D2u, 1);  /* 0C0AD5D0 mov.l @(disp,pc),Rn */
	r4 = 0xFFFFFFFAu;  /* 0C0AD5D2 mov #imm,Rn */
	r11 = (u32)(s32)(s16)R16(r10); UPD(0x0C0AD5D6u, 2);  /* 0C0AD5D4 mov.w @Rm,Rn */
	r8 = 0xB4u; UPD(0x0C0AD5D8u, 1);  /* 0C0AD5D6 mov.w @(disp,pc),Rn */
	IF(0x0C0AD5D8u); MACL = r11 * r8;  /* 0C0AD5D8 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C0AD5DCu, 3);  /* 0C0AD5DA mov.l @(disp,pc),Rn */
	IF(0x0C0AD5DCu); r8 = MACL;  /* 0C0AD5DC sts macl,Rn */
	r6 = 0xC2B03A2u; UPD(0x0C0AD5E0u, 2);  /* 0C0AD5DE mov.l @(disp,pc),Rn */
	r8 += r0;  /* 0C0AD5E0 add Rm,Rn */
	r9 = 0xC2460ACu; UPD(0x0C0AD5E4u, 2);  /* 0C0AD5E2 mov.l @(disp,pc),Rn */
	r10 = (u32)(s32)(s16)R16(r6); UPD(0x0C0AD5E6u, 1);  /* 0C0AD5E4 mov.w @Rm,Rn */
	r7 = (u32)(s32)(s16)R16(r9); UPD(0x0C0AD5E8u, 1);  /* 0C0AD5E6 mov.w @Rm,Rn */
	r0 = 0x8Au; UPD(0x0C0AD5EAu, 1);  /* 0C0AD5E8 mov.w @(disp,pc),Rn */
	r2 = r7 & 0xFFFF;  /* 0C0AD5EA extu.w Rm,Rn */
	IF(0x0C0AD5ECu); W16(r0 + r8, r10); UPD(0x0C0AD5EEu, 2);  /* 0C0AD5EC mov.w Rm,@(r0,Rn) */
	r9 = 0x4Cu;  /* 0C0AD5EE mov #imm,Rn */
	r0 += 0xFFFFFFFCu;  /* 0C0AD5F0 add #imm,Rn */
	IF(0x0C0AD5F2u); W16(r0 + r8, r10); UPD(0x0C0AD5F4u, 3);  /* 0C0AD5F2 mov.w Rm,@(r0,Rn) */
	IF(0x0C0AD5F4u); ARG0(0x4A4Cu); { s32 s_ = (s32)r4; if (s_ >= 0) r10 <<= (s_ & 31); else if ((s_ & 31) == 0) r10 = (u32)((s32)r10 >> 31); else r10 = (u32)((s32)r10 >> ((~s_ & 31) + 1)); }  /* 0C0AD5F4 shad Rm,Rn */
	r3 = 0x1FFu; UPD(0x0C0AD5F8u, 2);  /* 0C0AD5F6 mov.w @(disp,pc),Rn */
	r10 += 0x40u;  /* 0C0AD5F8 add #imm,Rn */
	r10 &= r3;  /* 0C0AD5FA and Rm,Rn */
	IF(0x0C0AD5FCu); ARG0(0x4A4Cu); { s32 s_ = (s32)r4; if (s_ >= 0) r10 <<= (s_ & 31); else if ((s_ & 31) == 0) r10 = (u32)((s32)r10 >> 31); else r10 = (u32)((s32)r10 >> ((~s_ & 31) + 1)); }  /* 0C0AD5FC shad Rm,Rn */
	r0 = 0xC0A8A30u; UPD(0x0C0AD600u, 4);  /* 0C0AD5FE mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C0AD600 mov Rm,Rn */
	W32(r8 + 0x8u, r10); UPD(0x0C0AD604u, 2);  /* 0C0AD602 mov.l Rm,@(disp,Rn) */
	r5 = 0xC3000114u; UPD(0x0C0AD606u, 1);  /* 0C0AD604 mov.l @(disp,pc),Rn */
	r10 = 0x0u;  /* 0C0AD606 mov #imm,Rn */
	W32(r8, r5); UPD(0x0C0AD60Au, 2);  /* 0C0AD608 mov.l Rm,@Rn */
	W32(r8 + 0x4u, r2); UPD(0x0C0AD60Cu, 1);  /* 0C0AD60A mov.l Rm,@(disp,Rn) */
	IF(0x0C0AD60Cu); { u32 t_ = r0; PR = 0x0C0AD610u; W32(r8 + 0xCu, r10); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C0AD610u); }  /* 0C0AD60C jsr @Rn */
L_0C0AD610: BLKS(0x0C0AD610u);
	IF(0x0C0AD610u); MACL = r12 * r9;  /* 0C0AD610 mul.l Rm,Rn */
	r3 = 0xC3C43C6u; UPD(0x0C0AD614u, 3);  /* 0C0AD612 mov.l @(disp,pc),Rn */
	r7 = 0xC286318u; UPD(0x0C0AD616u, 1);  /* 0C0AD614 mov.l @(disp,pc),Rn */
	IF(0x0C0AD616u); r9 = MACL;  /* 0C0AD616 sts macl,Rn */
	r5 = 0xC237C08u; UPD(0x0C0AD61Au, 2);  /* 0C0AD618 mov.l @(disp,pc),Rn */
	r9 += r7;  /* 0C0AD61A add Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r3); UPD(0x0C0AD61Eu, 2);  /* 0C0AD61C mov.w @Rm,Rn */
	r2 = R32(r9 + 0x8u); UPD(0x0C0AD620u, 1);  /* 0C0AD61E mov.l @(disp,Rm),Rn */
	IF(0x0C0AD620u); r4 <<= 16;  /* 0C0AD620 shll16 Rn */
	r6 = (u32)(s32)(s16)R16(r5); UPD(0x0C0AD624u, 2);  /* 0C0AD622 mov.w @Rm,Rn */
	r9 += 0x42u;  /* 0C0AD624 add #imm,Rn */
	r0 = 0xC0A9AE0u; UPD(0x0C0AD628u, 2);  /* 0C0AD626 mov.l @(disp,pc),Rn */
	IF(0x0C0AD628u); r6 <<= 16;  /* 0C0AD628 shll16 Rn */
	W32(r8 + 0x28u, r4); UPD(0x0C0AD62Cu, 2);  /* 0C0AD62A mov.l Rm,@(disp,Rn) */
	r6 -= r2;  /* 0C0AD62C sub Rm,Rn */
	W32(r8 + 0x24u, r6); UPD(0x0C0AD630u, 2);  /* 0C0AD62E mov.l Rm,@(disp,Rn) */
	IF(0x0C0AD630u); { u32 t_ = r0; PR = 0x0C0AD634u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C0AD634u); }  /* 0C0AD630 jsr @Rn */
L_0C0AD634: BLKS(0x0C0AD634u);
	r0 = 0xB0u; UPD(0x0C0AD636u, 1);  /* 0C0AD634 mov.w @(disp,pc),Rn */
	r4 = r11;  /* 0C0AD636 mov Rm,Rn */
	IF(0x0C0AD638u); W8(r0 + r8, r12); UPD(0x0C0AD63Au, 2);  /* 0C0AD638 mov.b Rm,@(r0,Rn) */
	r5 = (u32)(s32)(s8)R8(r9); UPD(0x0C0AD63Cu, 1);  /* 0C0AD63A mov.b @Rm,Rn */
	r0 += 0xFFFFFFFDu;  /* 0C0AD63C add #imm,Rn */
	IF(0x0C0AD63Eu); W8(r0 + r8, r5); UPD(0x0C0AD640u, 2);  /* 0C0AD63E mov.b Rm,@(r0,Rn) */
	r6 = 0xC0A9D30u; UPD(0x0C0AD642u, 1);  /* 0C0AD640 mov.l @(disp,pc),Rn */
	r0 += 0xFFFFFFFCu;  /* 0C0AD642 add #imm,Rn */
	IF(0x0C0AD644u); W8(r0 + r8, r5); UPD(0x0C0AD646u, 2);  /* 0C0AD644 mov.b Rm,@(r0,Rn) */
	r7 = 0xC297460u; UPD(0x0C0AD648u, 1);  /* 0C0AD646 mov.l @(disp,pc),Rn */
	IF(0x0C0AD648u); { u32 t_ = r6; PR = 0x0C0AD64Cu; r5 = R32(r7); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9D30, 0x0C0A9D30u, 0x0C0AD64Cu); }  /* 0C0AD648 jsr @Rn */
L_0C0AD64C: BLKS(0x0C0AD64Cu);
	r4 = 0x8Cu; UPD(0x0C0AD64Eu, 1);  /* 0C0AD64C mov.w @(disp,pc),Rn */
	r3 = 0x94u; UPD(0x0C0AD650u, 1);  /* 0C0AD64E mov.w @(disp,pc),Rn */
	r4 += r8;  /* 0C0AD650 add Rm,Rn */
	r2 = 0x90u; UPD(0x0C0AD654u, 2);  /* 0C0AD652 mov.w @(disp,pc),Rn */
	r3 += r8;  /* 0C0AD654 add Rm,Rn */
	r8 += r2;  /* 0C0AD656 add Rm,Rn */
	W32(r8, r10); UPD(0x0C0AD65Au, 3);  /* 0C0AD658 mov.l Rm,@Rn */
	W32(r3, r10); UPD(0x0C0AD65Cu, 1);  /* 0C0AD65A mov.l Rm,@Rn */
	{ W32(r4, r10); /* slot mov.l Rm,@Rn */ UPD(0x0C0AD5AEu, 3); goto L_0C0AD5AE; }  /* 0C0AD65C bra */
}

void blk_f_0C0AD6B0(sh3_t *c)
{
	LOCALS;
L_0C0AD6B0: BLKS(0x0C0AD6B0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD6B2u, 1);  /* 0C0AD6B0 mov.l Rm,@-Rn */
	r7 = 0x4Cu;  /* 0C0AD6B2 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD6B6u, 2);  /* 0C0AD6B4 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD6B8u, 1);  /* 0C0AD6B6 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD6BAu, 1);  /* 0C0AD6B8 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD6BCu, 1);  /* 0C0AD6BA mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD6BEu, 1);  /* 0C0AD6BC mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD6C0u, 1);  /* 0C0AD6BE mov.l Rm,@-Rn */
	r4 = 0xC3C43CCu; UPD(0x0C0AD6C2u, 1);  /* 0C0AD6C0 mov.l @(disp,pc),Rn */
	IF(0x0C0AD6C2u); r15 -= 4; W32(r15, PR); UPD(0x0C0AD6C4u, 1);  /* 0C0AD6C2 sts.l pr,@-Rn */
	r9 = 0xC2B1811u; UPD(0x0C0AD6C6u, 1);  /* 0C0AD6C4 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0AD6C6 mov Rm,Rn */
	r5 = R32(r4); UPD(0x0C0AD6CAu, 2);  /* 0C0AD6C8 mov.l @Rm,Rn */
	r12 = (u32)(s32)(s8)R8(r9); UPD(0x0C0AD6CCu, 1);  /* 0C0AD6CA mov.b @Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r1 = v_; } UPD(0x0C0AD6CEu, 1);  /* 0C0AD6CC mov.w @Rm+,Rn */
	IF(0x0C0AD6CEu); MACL = r12 * r7;  /* 0C0AD6CE mul.l Rm,Rn */
	r8 = 0xC2B0378u; UPD(0x0C0AD6D2u, 3);  /* 0C0AD6D0 mov.l @(disp,pc),Rn */
	r6 = 0xC286318u; UPD(0x0C0AD6D4u, 1);  /* 0C0AD6D2 mov.l @(disp,pc),Rn */
	IF(0x0C0AD6D4u); r11 = MACL;  /* 0C0AD6D4 sts macl,Rn */
	W16(r8, r1); UPD(0x0C0AD6D8u, 2);  /* 0C0AD6D6 mov.w Rm,@Rn */
	r11 += r6;  /* 0C0AD6D8 add Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r0 = v_; } UPD(0x0C0AD6DCu, 2);  /* 0C0AD6DA mov.w @Rm+,Rn */
	r3 = R32(r11 + 0x38u); UPD(0x0C0AD6DEu, 1);  /* 0C0AD6DC mov.l @(disp,Rm),Rn */
	IF(0x0C0AD6DEu); r0 <<= 2;  /* 0C0AD6DE shll2 Rn */
	IF(0x0C0AD6E0u); r2 = R32(r0 + r3); UPD(0x0C0AD6E2u, 2);  /* 0C0AD6E0 mov.l @(r0,Rm),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r0 = v_; } UPD(0x0C0AD6E4u, 1);  /* 0C0AD6E2 mov.w @Rm+,Rn */
	r8 = 0xC071740u; UPD(0x0C0AD6E6u, 1);  /* 0C0AD6E4 mov.l @(disp,pc),Rn */
	W32(r4, r5); UPD(0x0C0AD6E8u, 1);  /* 0C0AD6E6 mov.l Rm,@Rn */
	r13 = 0xC297460u; UPD(0x0C0AD6EAu, 1);  /* 0C0AD6E8 mov.l @(disp,pc),Rn */
	r4 = 0x1u;  /* 0C0AD6EA mov #imm,Rn */
	r9 = 0xC2B03A2u; UPD(0x0C0AD6EEu, 2);  /* 0C0AD6EC mov.l @(disp,pc),Rn */
	W32(r13, r2); UPD(0x0C0AD6F0u, 1);  /* 0C0AD6EE mov.l Rm,@Rn */
	IF(0x0C0AD6F0u); { u32 t_ = r8; PR = 0x0C0AD6F4u; W16(r9, r0); /* slot mov.w Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C071740, 0x0C071740u, 0x0C0AD6F4u); }  /* 0C0AD6F0 jsr @Rn */
L_0C0AD6F4: BLKS(0x0C0AD6F4u);
	T = (r0 & r0) == 0;  /* 0C0AD6F4 tst Rm,Rn */
	if (!T) { UPD(0x0C0AD710u, 4); goto L_0C0AD710; }  /* 0C0AD6F6 bf */
L_0C0AD6F8: BLKS(0x0C0AD6F8u);
	r0 = 0x1u;  /* 0C0AD6F8 mov #imm,Rn */
	r15 = r14;  /* 0C0AD6FA mov Rm,Rn */
	IF(0x0C0AD6FCu); PR = R32(r15); r15 += 4; UPD(0x0C0AD6FEu, 3);  /* 0C0AD6FC lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AD700u, 1);  /* 0C0AD6FE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0AD702u, 1);  /* 0C0AD700 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0AD704u, 1);  /* 0C0AD702 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0AD706u, 1);  /* 0C0AD704 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AD708u, 1);  /* 0C0AD706 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AD70Au, 1);  /* 0C0AD708 mov.l @Rm+,Rn */
	IF(0x0C0AD70Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AD70A rts */
L_0C0AD710: BLKS(0x0C0AD710u);
	r5 = 0xC28EDFCu; UPD(0x0C0AD712u, 1);  /* 0C0AD710 mov.l @(disp,pc),Rn */
	r1 = 0xFFFFFFFAu;  /* 0C0AD712 mov #imm,Rn */
	r10 = (u32)(s32)(s16)R16(r5); UPD(0x0C0AD716u, 2);  /* 0C0AD714 mov.w @Rm,Rn */
	r8 = 0xB4u; UPD(0x0C0AD718u, 1);  /* 0C0AD716 mov.w @(disp,pc),Rn */
	r3 = 0xC2460ACu; UPD(0x0C0AD71Au, 1);  /* 0C0AD718 mov.l @(disp,pc),Rn */
	IF(0x0C0AD71Au); MACL = r10 * r8;  /* 0C0AD71A mul.l Rm,Rn */
	r2 = (u32)(s32)(s16)R16(r3); UPD(0x0C0AD71Eu, 3);  /* 0C0AD71C mov.w @Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C0AD720u, 1);  /* 0C0AD71E mov.l @(disp,pc),Rn */
	IF(0x0C0AD720u); r8 = MACL;  /* 0C0AD720 sts macl,Rn */
	r8 += r7;  /* 0C0AD722 add Rm,Rn */
	r0 = r2 & 0xFFFF;  /* 0C0AD724 extu.w Rm,Rn */
	W32(r8 + 0x4u, r0); UPD(0x0C0AD728u, 4);  /* 0C0AD726 mov.l Rm,@(disp,Rn) */
	r4 = (u32)(s32)(s16)R16(r9); UPD(0x0C0AD72Au, 1);  /* 0C0AD728 mov.w @Rm,Rn */
	r0 = 0x8Au; UPD(0x0C0AD72Cu, 1);  /* 0C0AD72A mov.w @(disp,pc),Rn */
	IF(0x0C0AD72Cu); W16(r0 + r8, r4); UPD(0x0C0AD72Eu, 1);  /* 0C0AD72C mov.w Rm,@(r0,Rn) */
	r0 += 0xFFFFFFFCu;  /* 0C0AD72E add #imm,Rn */
	IF(0x0C0AD730u); W16(r0 + r8, r4); UPD(0x0C0AD732u, 2);  /* 0C0AD730 mov.w Rm,@(r0,Rn) */
	IF(0x0C0AD732u); ARG0(0x441Cu); { s32 s_ = (s32)r1; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = (u32)((s32)r4 >> 31); else r4 = (u32)((s32)r4 >> ((~s_ & 31) + 1)); }  /* 0C0AD732 shad Rm,Rn */
	r9 = 0x1FFu; UPD(0x0C0AD736u, 2);  /* 0C0AD734 mov.w @(disp,pc),Rn */
	r4 += 0x40u;  /* 0C0AD736 add #imm,Rn */
	r4 &= r9;  /* 0C0AD738 and Rm,Rn */
	IF(0x0C0AD73Au); ARG0(0x441Cu); { s32 s_ = (s32)r1; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = (u32)((s32)r4 >> 31); else r4 = (u32)((s32)r4 >> ((~s_ & 31) + 1)); }  /* 0C0AD73A shad Rm,Rn */
	r5 = 0xC0A8A30u; UPD(0x0C0AD73Eu, 4);  /* 0C0AD73C mov.l @(disp,pc),Rn */
	r9 = 0x0u;  /* 0C0AD73E mov #imm,Rn */
	r6 = 0xC3000114u; UPD(0x0C0AD742u, 2);  /* 0C0AD740 mov.l @(disp,pc),Rn */
	W32(r8 + 0x8u, r4); UPD(0x0C0AD744u, 1);  /* 0C0AD742 mov.l Rm,@(disp,Rn) */
	W32(r8, r6); UPD(0x0C0AD746u, 1);  /* 0C0AD744 mov.l Rm,@Rn */
	r4 = r10;  /* 0C0AD746 mov Rm,Rn */
	IF(0x0C0AD748u); { u32 t_ = r5; PR = 0x0C0AD74Cu; W32(r8 + 0xCu, r9); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C0AD74Cu); }  /* 0C0AD748 jsr @Rn */
L_0C0AD74C: BLKS(0x0C0AD74Cu);
	r7 = 0xC237C08u; UPD(0x0C0AD74Eu, 1);  /* 0C0AD74C mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C0AD74E mov Rm,Rn */
	r2 = 0xC3C43C6u; UPD(0x0C0AD752u, 2);  /* 0C0AD750 mov.l @(disp,pc),Rn */
	r3 = (u32)(s32)(s16)R16(r7); UPD(0x0C0AD754u, 1);  /* 0C0AD752 mov.w @Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r2); UPD(0x0C0AD756u, 1);  /* 0C0AD754 mov.w @Rm,Rn */
	IF(0x0C0AD756u); r3 <<= 16;  /* 0C0AD756 shll16 Rn */
	r6 = R32(r11 + 0x8u); UPD(0x0C0AD75Au, 2);  /* 0C0AD758 mov.l @(disp,Rm),Rn */
	IF(0x0C0AD75Au); r0 <<= 16;  /* 0C0AD75A shll16 Rn */
	r5 = 0xC0A9AE0u; UPD(0x0C0AD75Eu, 2);  /* 0C0AD75C mov.l @(disp,pc),Rn */
	r3 -= r6;  /* 0C0AD75E sub Rm,Rn */
	W32(r8 + 0x28u, r0); UPD(0x0C0AD762u, 2);  /* 0C0AD760 mov.l Rm,@(disp,Rn) */
	r11 += 0x42u;  /* 0C0AD762 add #imm,Rn */
	IF(0x0C0AD764u); { u32 t_ = r5; PR = 0x0C0AD768u; W32(r8 + 0x24u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C0AD768u); }  /* 0C0AD764 jsr @Rn */
L_0C0AD768: BLKS(0x0C0AD768u);
	r0 = 0xB0u; UPD(0x0C0AD76Au, 1);  /* 0C0AD768 mov.w @(disp,pc),Rn */
	IF(0x0C0AD76Au); W8(r0 + r8, r12); UPD(0x0C0AD76Cu, 1);  /* 0C0AD76A mov.b Rm,@(r0,Rn) */
	r4 = (u32)(s32)(s8)R8(r11); UPD(0x0C0AD76Eu, 1);  /* 0C0AD76C mov.b @Rm,Rn */
	r0 += 0xFFFFFFFDu;  /* 0C0AD76E add #imm,Rn */
	IF(0x0C0AD770u); W8(r0 + r8, r4); UPD(0x0C0AD772u, 2);  /* 0C0AD770 mov.b Rm,@(r0,Rn) */
	r0 += 0xFFFFFFFCu;  /* 0C0AD772 add #imm,Rn */
	IF(0x0C0AD774u); W8(r0 + r8, r4); UPD(0x0C0AD776u, 2);  /* 0C0AD774 mov.b Rm,@(r0,Rn) */
	r5 = R32(r13); UPD(0x0C0AD778u, 1);  /* 0C0AD776 mov.l @Rm,Rn */
	r4 = r10;  /* 0C0AD778 mov Rm,Rn */
	r13 = 0xC0A9D30u; UPD(0x0C0AD77Cu, 2);  /* 0C0AD77A mov.l @(disp,pc),Rn */
	r10 = 0x8Cu; UPD(0x0C0AD77Eu, 1);  /* 0C0AD77C mov.w @(disp,pc),Rn */
	IF(0x0C0AD77Eu); { u32 t_ = r13; PR = 0x0C0AD782u; r10 += r8; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9D30, 0x0C0A9D30u, 0x0C0AD782u); }  /* 0C0AD77E jsr @Rn */
L_0C0AD782: BLKS(0x0C0AD782u);
	r11 = 0x94u; UPD(0x0C0AD784u, 1);  /* 0C0AD782 mov.w @(disp,pc),Rn */
	r12 = 0x90u; UPD(0x0C0AD786u, 1);  /* 0C0AD784 mov.w @(disp,pc),Rn */
	r11 += r8;  /* 0C0AD786 add Rm,Rn */
	r8 += r12;  /* 0C0AD788 add Rm,Rn */
	W32(r8, r9); UPD(0x0C0AD78Cu, 3);  /* 0C0AD78A mov.l Rm,@Rn */
	W32(r11, r9); UPD(0x0C0AD78Eu, 1);  /* 0C0AD78C mov.l Rm,@Rn */
	{ W32(r10, r9); /* slot mov.l Rm,@Rn */ UPD(0x0C0AD6F8u, 3); goto L_0C0AD6F8; }  /* 0C0AD78E bra */
}

void blk_f_0C0AD7E0(sh3_t *c)
{
	LOCALS;
L_0C0AD7E0: BLKS(0x0C0AD7E0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD7E2u, 1);  /* 0C0AD7E0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD7E4u, 1);  /* 0C0AD7E2 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C0AD7E4 exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD7E8u, 2);  /* 0C0AD7E6 mov.l Rm,@-Rn */
	r9 = 0xC0C2360u; UPD(0x0C0AD7EAu, 1);  /* 0C0AD7E8 mov.l @(disp,pc),Rn */
	IF(0x0C0AD7EAu); r15 -= 4; W32(r15, PR); UPD(0x0C0AD7ECu, 1);  /* 0C0AD7EA sts.l pr,@-Rn */
	IF(0x0C0AD7ECu); { u32 t_ = r9; PR = 0x0C0AD7F0u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C0AD7F0u); }  /* 0C0AD7EC jsr @Rn */
L_0C0AD7F0: BLKS(0x0C0AD7F0u);
	r0 &= 0x3u;  /* 0C0AD7F0 and #imm,r0 */
	T = r0 == 0x2u;  /* 0C0AD7F2 cmp/eq #imm,r0 */
	{ u32 c_ = T; r2 = 0x2u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0AD8E0u, 5); goto L_0C0AD8E0; } goto L_0C0AD7F8; }  /* 0C0AD7F4 bt/s */
L_0C0AD7F8: BLKS(0x0C0AD7F8u);
	T = (s32)r0 > (s32)r2;  /* 0C0AD7F8 cmp/gt Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x3u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C0AD8B0u, 5); goto L_0C0AD8B0; } goto L_0C0AD7FE; }  /* 0C0AD7FA bt/s */
L_0C0AD7FE: BLKS(0x0C0AD7FEu);
	T = r0 == 0x1u;  /* 0C0AD7FE cmp/eq #imm,r0 */
	if (T) { UPD(0x0C0AD880u, 5); goto L_0C0AD880; }  /* 0C0AD800 bt */
L_0C0AD802: BLKS(0x0C0AD802u);
	r7 = 0xB4u; UPD(0x0C0AD804u, 1);  /* 0C0AD802 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0AD804 add #imm,Rn */
	IF(0x0C0AD806u); MACL = r8 * r7;  /* 0C0AD806 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C0AD80Au, 4);  /* 0C0AD808 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0AD80Cu, 1);  /* 0C0AD80A mov.w @(disp,pc),Rn */
	IF(0x0C0AD80Cu); r3 = MACL;  /* 0C0AD80C sts macl,Rn */
	r3 += r9;  /* 0C0AD80E add Rm,Rn */
	IF(0x0C0AD810u); r6 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0AD812u, 3);  /* 0C0AD810 mov.b @(r0,Rm),Rn */
	r5 = r6 & 0xFF;  /* 0C0AD812 extu.b Rm,Rn */
	W32(r15, r5); UPD(0x0C0AD816u, 2);  /* 0C0AD814 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0AD816 add #imm,Rn */
	IF(0x0C0AD818u); r4 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0AD81Au, 2);  /* 0C0AD818 mov.b @(r0,Rm),Rn */
	r5 = 0xAu;  /* 0C0AD81A mov #imm,Rn */
	r0 = r4 & 0xFF;  /* 0C0AD81C extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0AD820u, 3);  /* 0C0AD81E mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BD6F0u; UPD(0x0C0AD822u, 1);  /* 0C0AD820 mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0AD824u, 1);  /* 0C0AD822 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0AD826u, 1);  /* 0C0AD824 mov.l @(disp,Rm),Rn */
	r7 = R32(r3 + 0x28u); UPD(0x0C0AD828u, 1);  /* 0C0AD826 mov.l @(disp,Rm),Rn */
L_0C0AD828: BLKS(0x0C0AD828u);
	IF(0x0C0AD828u); { u32 t_ = r0; PR = 0x0C0AD82Cu; IF(0x0C0AD82Au); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C0AD82Cu); }  /* 0C0AD828 jsr @Rn */
L_0C0AD82C: BLKS(0x0C0AD82Cu);
	r3 = 0xB4u; UPD(0x0C0AD82Eu, 1);  /* 0C0AD82C mov.w @(disp,pc),Rn */
	IF(0x0C0AD82Eu); MACL = r8 * r3;  /* 0C0AD82E mul.l Rm,Rn */
	r6 = 0x4000000u; UPD(0x0C0AD832u, 3);  /* 0C0AD830 mov.l @(disp,pc),Rn */
	IF(0x0C0AD832u); r3 = MACL;  /* 0C0AD832 sts macl,Rn */
	r3 += r9;  /* 0C0AD834 add Rm,Rn */
	r1 = R32(r3); UPD(0x0C0AD838u, 3);  /* 0C0AD836 mov.l @Rm,Rn */
	T = (r1 & r6) == 0;  /* 0C0AD838 tst Rm,Rn */
	{ u32 c_ = !T; r15 += 0x8u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0AD860u, 4); goto L_0C0AD860; } goto L_0C0AD83E; }  /* 0C0AD83A bf/s */
L_0C0AD83E: BLKS(0x0C0AD83Eu);
	r7 = 0xC297498u; UPD(0x0C0AD840u, 2);  /* 0C0AD83E mov.l @(disp,pc),Rn */
	r0 = R32(r7); UPD(0x0C0AD842u, 1);  /* 0C0AD840 mov.l @Rm,Rn */
	T = r0 == 0x7u;  /* 0C0AD842 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C0AD860u, 4); goto L_0C0AD860; }  /* 0C0AD844 bt */
L_0C0AD846: BLKS(0x0C0AD846u);
	r0 = 0xB4u; UPD(0x0C0AD848u, 1);  /* 0C0AD846 mov.w @(disp,pc),Rn */
	IF(0x0C0AD848u); MACL = r8 * r0;  /* 0C0AD848 mul.l Rm,Rn */
	r8 = 0x0u;  /* 0C0AD84A mov #imm,Rn */
	IF(0x0C0AD84Cu); r0 = MACL;  /* 0C0AD84C sts macl,Rn */
	IF(0x0C0AD84Eu); W32(r0 + r9, r8); UPD(0x0C0AD850u, 5);  /* 0C0AD84E mov.l Rm,@(r0,Rn) */
	r15 = r14;  /* 0C0AD850 mov Rm,Rn */
	IF(0x0C0AD852u); PR = R32(r15); r15 += 4; UPD(0x0C0AD854u, 2);  /* 0C0AD852 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AD856u, 1);  /* 0C0AD854 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AD858u, 1);  /* 0C0AD856 mov.l @Rm+,Rn */
	IF(0x0C0AD858u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AD858 rts */
L_0C0AD860: BLKS(0x0C0AD860u);
	r0 = 0xB0u; UPD(0x0C0AD862u, 1);  /* 0C0AD860 mov.w @(disp,pc),Rn */
	r4 = 0x2u;  /* 0C0AD862 mov #imm,Rn */
	IF(0x0C0AD864u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0AD866u, 2);  /* 0C0AD864 mov.b @(r0,Rm),Rn */
	r0 = 0xC07DF30u; UPD(0x0C0AD868u, 1);  /* 0C0AD866 mov.l @(disp,pc),Rn */
	r7 = r2 & 0xFF;  /* 0C0AD868 extu.b Rm,Rn */
	r5 = R32(r3 + 0x24u); UPD(0x0C0AD86Cu, 2);  /* 0C0AD86A mov.l @(disp,Rm),Rn */
	IF(0x0C0AD86Cu); { u32 t_ = r0; PR = 0x0C0AD870u; r6 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07DF30, 0x0C07DF30u, 0x0C0AD870u); }  /* 0C0AD86C jsr @Rn */
L_0C0AD870: BLKS(0x0C0AD870u);
	{ IF(0x0C0AD872u); ; /* slot nop */ UPD(0x0C0AD846u, 3); goto L_0C0AD846; }  /* 0C0AD870 bra */
L_0C0AD880: BLKS(0x0C0AD880u);
	r0 = 0xB4u; UPD(0x0C0AD882u, 1);  /* 0C0AD880 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0AD882 add #imm,Rn */
	IF(0x0C0AD884u); MACL = r8 * r0;  /* 0C0AD884 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C0AD888u, 4);  /* 0C0AD886 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0AD88Au, 1);  /* 0C0AD888 mov.w @(disp,pc),Rn */
	IF(0x0C0AD88Au); r3 = MACL;  /* 0C0AD88A sts macl,Rn */
	r3 += r9;  /* 0C0AD88C add Rm,Rn */
	IF(0x0C0AD88Eu); r6 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0AD890u, 3);  /* 0C0AD88E mov.b @(r0,Rm),Rn */
	r5 = r6 & 0xFF;  /* 0C0AD890 extu.b Rm,Rn */
	W32(r15, r5); UPD(0x0C0AD894u, 2);  /* 0C0AD892 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0AD894 add #imm,Rn */
	IF(0x0C0AD896u); r4 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0AD898u, 2);  /* 0C0AD896 mov.b @(r0,Rm),Rn */
	r5 = 0xAu;  /* 0C0AD898 mov #imm,Rn */
	r2 = r4 & 0xFF;  /* 0C0AD89A extu.b Rm,Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C0AD89Eu, 3);  /* 0C0AD89C mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BECB0u; UPD(0x0C0AD8A0u, 1);  /* 0C0AD89E mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0AD8A2u, 1);  /* 0C0AD8A0 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0AD8A4u, 1);  /* 0C0AD8A2 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0AD828u, 3); goto L_0C0AD828; }  /* 0C0AD8A4 bra */
L_0C0AD8B0: BLKS(0x0C0AD8B0u);
	if (!T) { UPD(0x0C0AD802u, 3); goto L_0C0AD802; }  /* 0C0AD8B0 bf */
L_0C0AD8B2: BLKS(0x0C0AD8B2u);
	r15 += 0xFFFFFFF8u;  /* 0C0AD8B2 add #imm,Rn */
	r5 = 0xB4u; UPD(0x0C0AD8B6u, 2);  /* 0C0AD8B4 mov.w @(disp,pc),Rn */
	IF(0x0C0AD8B6u); MACL = r8 * r5;  /* 0C0AD8B6 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C0AD8BAu, 3);  /* 0C0AD8B8 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0AD8BCu, 1);  /* 0C0AD8BA mov.w @(disp,pc),Rn */
	IF(0x0C0AD8BCu); r3 = MACL;  /* 0C0AD8BC sts macl,Rn */
	r3 += r9;  /* 0C0AD8BE add Rm,Rn */
	IF(0x0C0AD8C0u); r4 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0AD8C2u, 3);  /* 0C0AD8C0 mov.b @(r0,Rm),Rn */
	r5 = 0xAu;  /* 0C0AD8C2 mov #imm,Rn */
	r2 = r4 & 0xFF;  /* 0C0AD8C4 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C0AD8C8u, 3);  /* 0C0AD8C6 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0AD8C8 add #imm,Rn */
	IF(0x0C0AD8CAu); r7 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0AD8CCu, 2);  /* 0C0AD8CA mov.b @(r0,Rm),Rn */
	r0 = r7 & 0xFF;  /* 0C0AD8CC extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0AD8D0u, 2);  /* 0C0AD8CE mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BFD30u; UPD(0x0C0AD8D2u, 1);  /* 0C0AD8D0 mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0AD8D4u, 1);  /* 0C0AD8D2 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0AD8D6u, 1);  /* 0C0AD8D4 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0AD828u, 3); goto L_0C0AD828; }  /* 0C0AD8D6 bra */
L_0C0AD8E0: BLKS(0x0C0AD8E0u);
	r6 = 0xB4u; UPD(0x0C0AD8E2u, 1);  /* 0C0AD8E0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0AD8E2 add #imm,Rn */
	IF(0x0C0AD8E4u); MACL = r8 * r6;  /* 0C0AD8E4 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C0AD8E8u, 4);  /* 0C0AD8E6 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0AD8EAu, 1);  /* 0C0AD8E8 mov.w @(disp,pc),Rn */
	IF(0x0C0AD8EAu); r3 = MACL;  /* 0C0AD8EA sts macl,Rn */
	r3 += r9;  /* 0C0AD8EC add Rm,Rn */
	IF(0x0C0AD8EEu); r5 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0AD8F0u, 3);  /* 0C0AD8EE mov.b @(r0,Rm),Rn */
	r4 = r5 & 0xFF;  /* 0C0AD8F0 extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C0AD8F4u, 2);  /* 0C0AD8F2 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0AD8F4 add #imm,Rn */
	IF(0x0C0AD8F6u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0AD8F8u, 2);  /* 0C0AD8F6 mov.b @(r0,Rm),Rn */
	r5 = 0xAu;  /* 0C0AD8F8 mov #imm,Rn */
	r7 = r2 & 0xFF;  /* 0C0AD8FA extu.b Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C0AD8FEu, 3);  /* 0C0AD8FC mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BFE70u; UPD(0x0C0AD900u, 1);  /* 0C0AD8FE mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C0AD902u, 1);  /* 0C0AD900 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C0AD904u, 1);  /* 0C0AD902 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0AD828u, 3); goto L_0C0AD828; }  /* 0C0AD904 bra */
}

void blk_f_0C0AD930(sh3_t *c)
{
	LOCALS;
L_0C0AD930: BLKS(0x0C0AD930u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD932u, 1);  /* 0C0AD930 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD934u, 1);  /* 0C0AD932 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD936u, 1);  /* 0C0AD934 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C0AD936 exts.w Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD93Au, 2);  /* 0C0AD938 mov.l Rm,@-Rn */
	r4 = r9;  /* 0C0AD93A mov Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD93Eu, 2);  /* 0C0AD93C mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD940u, 1);  /* 0C0AD93E mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AD942u, 1);  /* 0C0AD940 mov.l Rm,@-Rn */
	r11 = 0xC069BF0u; UPD(0x0C0AD944u, 1);  /* 0C0AD942 mov.l @(disp,pc),Rn */
	IF(0x0C0AD944u); r15 -= 4; W32(r15, PR); UPD(0x0C0AD946u, 1);  /* 0C0AD944 sts.l pr,@-Rn */
	r10 = 0xC068F00u; UPD(0x0C0AD948u, 1);  /* 0C0AD946 mov.l @(disp,pc),Rn */
	IF(0x0C0AD948u); { u32 t_ = r11; PR = 0x0C0AD94Cu; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069BF0, 0x0C069BF0u, 0x0C0AD94Cu); }  /* 0C0AD948 jsr @Rn */
L_0C0AD94C: BLKS(0x0C0AD94Cu);
	r5 = 0x2u;  /* 0C0AD94C mov #imm,Rn */
	IF(0x0C0AD94Eu); { u32 t_ = r10; PR = 0x0C0AD952u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 3); CALLD(t_, 0x0C0AD952u); }  /* 0C0AD94E jsr @Rn */
L_0C0AD952: BLKS(0x0C0AD952u);
	r4 = 0xB4u; UPD(0x0C0AD954u, 1);  /* 0C0AD952 mov.w @(disp,pc),Rn */
	r2 = 0x8u;  /* 0C0AD954 mov #imm,Rn */
	IF(0x0C0AD956u); MACL = r9 * r4;  /* 0C0AD956 mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C0AD95Au, 4);  /* 0C0AD958 mov.l @(disp,pc),Rn */
	IF(0x0C0AD95Au); r13 = MACL;  /* 0C0AD95A sts macl,Rn */
	r10 = 0x86u; UPD(0x0C0AD95Eu, 2);  /* 0C0AD95C mov.w @(disp,pc),Rn */
	r13 += r3;  /* 0C0AD95E add Rm,Rn */
	r10 += r13;  /* 0C0AD960 add Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r10); UPD(0x0C0AD964u, 3);  /* 0C0AD962 mov.w @Rm,Rn */
	r4 = r9;  /* 0C0AD964 mov Rm,Rn */
	r0 += 0x8u;  /* 0C0AD966 add #imm,Rn */
	IF(0x0C0AD968u); r0 >>= 2;  /* 0C0AD968 shlr2 Rn */
	IF(0x0C0AD96Au); r0 >>= 2;  /* 0C0AD96A shlr2 Rn */
	r0 &= 0x1Fu;  /* 0C0AD96C and #imm,r0 */
	W32(r13 + 0xCu, r0); UPD(0x0C0AD970u, 6);  /* 0C0AD96E mov.l Rm,@(disp,Rn) */
	r0 = 0xC0A8B10u; UPD(0x0C0AD972u, 1);  /* 0C0AD970 mov.l @(disp,pc),Rn */
	r8 = 0xC0BC1B0u; UPD(0x0C0AD974u, 1);  /* 0C0AD972 mov.l @(disp,pc),Rn */
	IF(0x0C0AD974u); { u32 t_ = r0; PR = 0x0C0AD978u; W32(r13 + 0x8u, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B10, 0x0C0A8B10u, 0x0C0AD978u); }  /* 0C0AD974 jsr @Rn */
L_0C0AD978: BLKS(0x0C0AD978u);
	r4 = r9;  /* 0C0AD978 mov Rm,Rn */
	r5 = 0x3Cu;  /* 0C0AD97A mov #imm,Rn */
	IF(0x0C0AD97Cu); { u32 t_ = r8; PR = 0x0C0AD980u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLD(t_, 0x0C0AD980u); }  /* 0C0AD97C jsr @Rn */
L_0C0AD980: BLKS(0x0C0AD980u);
	T = (r0 & r0) == 0;  /* 0C0AD980 tst Rm,Rn */
	if (!T) { UPD(0x0C0AD9A0u, 4); goto L_0C0AD9A0; }  /* 0C0AD982 bf */
L_0C0AD984: BLKS(0x0C0AD984u);
	r15 = r14;  /* 0C0AD984 mov Rm,Rn */
	IF(0x0C0AD986u); PR = R32(r15); r15 += 4; UPD(0x0C0AD988u, 2);  /* 0C0AD986 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0AD98Au, 1);  /* 0C0AD988 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0AD98Cu, 1);  /* 0C0AD98A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0AD98Eu, 1);  /* 0C0AD98C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0AD990u, 1);  /* 0C0AD98E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0AD992u, 1);  /* 0C0AD990 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0AD994u, 1);  /* 0C0AD992 mov.l @Rm+,Rn */
	IF(0x0C0AD994u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AD994 rts */
L_0C0AD9A0: BLKS(0x0C0AD9A0u);
	r6 = 0xA9u; UPD(0x0C0AD9A2u, 1);  /* 0C0AD9A0 mov.w @(disp,pc),Rn */
	r0 = r13;  /* 0C0AD9A2 mov Rm,Rn */
	IF(0x0C0AD9A4u); r5 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C0AD9A6u, 2);  /* 0C0AD9A4 mov.b @(r0,Rm),Rn */
	r8 = 0xC0BBF10u; UPD(0x0C0AD9A8u, 1);  /* 0C0AD9A6 mov.l @(disp,pc),Rn */
	r6 = r5 & 0xFF;  /* 0C0AD9A8 extu.b Rm,Rn */
	r4 = R32(r13 + 0x24u); UPD(0x0C0AD9ACu, 2);  /* 0C0AD9AA mov.l @(disp,Rm),Rn */
	IF(0x0C0AD9ACu); { u32 t_ = r8; PR = 0x0C0AD9B0u; r5 = R32(r13 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BBF10, 0x0C0BBF10u, 0x0C0AD9B0u); }  /* 0C0AD9AC jsr @Rn */
L_0C0AD9B0: BLKS(0x0C0AD9B0u);
	T = (r0 & r0) == 0;  /* 0C0AD9B0 tst Rm,Rn */
	if (T) { UPD(0x0C0AD984u, 4); goto L_0C0AD984; }  /* 0C0AD9B2 bt */
L_0C0AD9B4: BLKS(0x0C0AD9B4u);
	r9 = (u32)(s32)(s16)R16(r10); UPD(0x0C0AD9B6u, 1);  /* 0C0AD9B4 mov.w @Rm,Rn */
	r10 = 0xC069B20u; UPD(0x0C0AD9B8u, 1);  /* 0C0AD9B6 mov.l @(disp,pc),Rn */
	r11 = 0xC069AF0u; UPD(0x0C0AD9BAu, 1);  /* 0C0AD9B8 mov.l @(disp,pc),Rn */
	r5 = 0xE0000u; UPD(0x0C0AD9BCu, 1);  /* 0C0AD9BA mov.l @(disp,pc),Rn */
	IF(0x0C0AD9BCu); { u32 t_ = r10; PR = 0x0C0AD9C0u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0AD9C0u); }  /* 0C0AD9BC jsr @Rn */
L_0C0AD9C0: BLKS(0x0C0AD9C0u);
	r8 = r0;  /* 0C0AD9C0 mov Rm,Rn */
	r5 = 0x20000u; UPD(0x0C0AD9C4u, 2);  /* 0C0AD9C2 mov.l @(disp,pc),Rn */
	IF(0x0C0AD9C4u); { u32 t_ = r11; PR = 0x0C0AD9C8u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C0AD9C8u); }  /* 0C0AD9C4 jsr @Rn */
L_0C0AD9C8: BLKS(0x0C0AD9C8u);
	r3 = 0x66666667u; UPD(0x0C0AD9CAu, 1);  /* 0C0AD9C8 mov.l @(disp,pc),Rn */
	r8 -= r0;  /* 0C0AD9CA sub Rm,Rn */
	IF(0x0C0AD9CCu); r8 <<= 2;  /* 0C0AD9CC shll2 Rn */
	{ s64 r_ = (s64)(s32)r8 * (s64)(s32)r3; MACH = (u32)((u64)r_ >> 32); MACL = (u32)r_; }  /* 0C0AD9CE dmuls.l Rm,Rn */
	r10 = R32(r13 + 0x24u); UPD(0x0C0AD9D2u, 5);  /* 0C0AD9D0 mov.l @(disp,Rm),Rn */
	r4 = r9;  /* 0C0AD9D2 mov Rm,Rn */
	IF(0x0C0AD9D4u); r2 = MACH;  /* 0C0AD9D4 sts mach,Rn */
	IF(0x0C0AD9D6u); T = r2 & 1; r2 = (u32)((s32)r2 >> 1);  /* 0C0AD9D6 shar Rn */
	IF(0x0C0AD9D8u); T = r8 >> 31; r8 <<= 1;  /* 0C0AD9D8 shll Rn */
	{ u32 a_ = r8, t_ = a_ - r8, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r8 = r_; }  /* 0C0AD9DA subc Rm,Rn */
	r2 -= r8;  /* 0C0AD9DC sub Rm,Rn */
	r0 = 0x60000u; UPD(0x0C0AD9E0u, 7);  /* 0C0AD9DE mov.l @(disp,pc),Rn */
	r10 += r2;  /* 0C0AD9E0 add Rm,Rn */
	r5 = 0xE0000u; UPD(0x0C0AD9E4u, 2);  /* 0C0AD9E2 mov.l @(disp,pc),Rn */
	IF(0x0C0AD9E4u); { u32 t_ = r11; PR = 0x0C0AD9E8u; r10 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C0AD9E8u); }  /* 0C0AD9E4 jsr @Rn */
L_0C0AD9E8: BLKS(0x0C0AD9E8u);
	r11 = R32(r13 + 0x28u); UPD(0x0C0AD9EAu, 1);  /* 0C0AD9E8 mov.l @(disp,Rm),Rn */
	r4 = r9;  /* 0C0AD9EA mov Rm,Rn */
	r13 = 0xC069B20u; UPD(0x0C0AD9EEu, 2);  /* 0C0AD9EC mov.l @(disp,pc),Rn */
	r5 = 0x20000u; UPD(0x0C0AD9F0u, 1);  /* 0C0AD9EE mov.l @(disp,pc),Rn */
	IF(0x0C0AD9F0u); { u32 t_ = r13; PR = 0x0C0AD9F4u; r11 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0AD9F4u); }  /* 0C0AD9F0 jsr @Rn */
L_0C0AD9F4: BLKS(0x0C0AD9F4u);
	r7 = 0x20000u; UPD(0x0C0AD9F6u, 1);  /* 0C0AD9F4 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0AD9F6 add #imm,Rn */
	r12 = 0xC072C90u; UPD(0x0C0AD9FAu, 2);  /* 0C0AD9F8 mov.l @(disp,pc),Rn */
	r11 += r0;  /* 0C0AD9FA add Rm,Rn */
	W32(r15, r7); UPD(0x0C0AD9FEu, 2);  /* 0C0AD9FC mov.l Rm,@Rn */
	r4 = 0x1u;  /* 0C0AD9FE mov #imm,Rn */
	r5 = r10;  /* 0C0ADA00 mov Rm,Rn */
	r6 = r11;  /* 0C0ADA02 mov Rm,Rn */
	IF(0x0C0ADA04u); { u32 t_ = r12; PR = 0x0C0ADA08u; r7 = r9; /* slot mov Rm,Rn */ UPD(t_, 5); CALLP(t_, blk_f_0C072C90, 0x0C072C90u, 0x0C0ADA08u); }  /* 0C0ADA04 jsr @Rn */
L_0C0ADA08: BLKS(0x0C0ADA08u);
	{ IF(0x0C0ADA0Au); ; /* slot nop */ UPD(0x0C0AD984u, 3); goto L_0C0AD984; }  /* 0C0ADA08 bra */
}

void blk_f_0C0ADA50(sh3_t *c)
{
	LOCALS;
L_0C0ADA50: BLKS(0x0C0ADA50u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0ADA52u, 1);  /* 0C0ADA50 mov.l Rm,@-Rn */
	r14 = r15;  /* 0C0ADA52 mov Rm,Rn */
	r15 = r14;  /* 0C0ADA54 mov Rm,Rn */
	IF(0x0C0ADA56u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C0ADA56 rts */
}

void blk_f_0C0ADA60(sh3_t *c)
{
	LOCALS;
L_0C0ADA60: BLKS(0x0C0ADA60u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0ADA62u, 1);  /* 0C0ADA60 mov.l Rm,@-Rn */
	r0 = 0x1u;  /* 0C0ADA62 mov #imm,Rn */
	r14 = r15;  /* 0C0ADA64 mov Rm,Rn */
	r15 = r14;  /* 0C0ADA66 mov Rm,Rn */
	IF(0x0C0ADA68u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 6); RET(t_); }  /* 0C0ADA68 rts */
}

void blk_f_0C0ADA70(sh3_t *c)
{
	LOCALS;
L_0C0ADA70: BLKS(0x0C0ADA70u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0ADA72u, 1);  /* 0C0ADA70 mov.l Rm,@-Rn */
	r14 = r15;  /* 0C0ADA72 mov Rm,Rn */
	r15 = r14;  /* 0C0ADA74 mov Rm,Rn */
	IF(0x0C0ADA76u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C0ADA76 rts */
}

void blk_f_0C0ADA80(sh3_t *c)
{
	LOCALS;
L_0C0ADA80: BLKS(0x0C0ADA80u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0ADA82u, 1);  /* 0C0ADA80 mov.l Rm,@-Rn */
	r14 = r15;  /* 0C0ADA82 mov Rm,Rn */
	r15 = r14;  /* 0C0ADA84 mov Rm,Rn */
	IF(0x0C0ADA86u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C0ADA86 rts */
}

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

void blk_f_0C0AE800(sh3_t *c)
{
	LOCALS;
L_0C0AE800: BLKS(0x0C0AE800u);
	r2 = 0xB4u; UPD(0x0C0AE802u, 1);  /* 0C0AE800 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C0AE802 exts.w Rm,Rn */
	IF(0x0C0AE804u); MACL = r4 * r2;  /* 0C0AE804 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0AE808u, 4);  /* 0C0AE806 mov.l Rm,@-Rn */
	r0 = 0xC286578u; UPD(0x0C0AE80Au, 1);  /* 0C0AE808 mov.l @(disp,pc),Rn */
	IF(0x0C0AE80Au); r2 = MACL;  /* 0C0AE80A sts macl,Rn */
	IF(0x0C0AE80Cu); r15 -= 4; W32(r15, PR); UPD(0x0C0AE80Eu, 2);  /* 0C0AE80C sts.l pr,@-Rn */
	r2 += r0;  /* 0C0AE80E add Rm,Rn */
	r0 = R32(r2 + 0x8u); UPD(0x0C0AE812u, 2);  /* 0C0AE810 mov.l @(disp,Rm),Rn */
	T = (r0 & r0) == 0;  /* 0C0AE812 tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0AE830u, 4); goto L_0C0AE830; } goto L_0C0AE818; }  /* 0C0AE814 bt/s */
L_0C0AE818: BLKS(0x0C0AE818u);
	r4 = 0x0u;  /* 0C0AE818 mov #imm,Rn */
	W32(r2, r4); UPD(0x0C0AE81Cu, 3);  /* 0C0AE81A mov.l Rm,@Rn */
	r15 = r14;  /* 0C0AE81C mov Rm,Rn */
	IF(0x0C0AE81Eu); PR = R32(r15); r15 += 4; UPD(0x0C0AE820u, 2);  /* 0C0AE81E lds.l @Rn+,pr */
	IF(0x0C0AE820u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0AE820 rts */
L_0C0AE830: BLKS(0x0C0AE830u);
	r5 = 0xC0A9590u; UPD(0x0C0AE832u, 1);  /* 0C0AE830 mov.l @(disp,pc),Rn */
	IF(0x0C0AE832u); { u32 t_ = r5; PR = 0x0C0AE836u; IF(0x0C0AE834u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9590, 0x0C0A9590u, 0x0C0AE836u); }  /* 0C0AE832 jsr @Rn */
L_0C0AE836: BLKS(0x0C0AE836u);
	r4 = 0x800u; UPD(0x0C0AE838u, 1);  /* 0C0AE836 mov.w @(disp,pc),Rn */
	r3 = 0xC071C90u; UPD(0x0C0AE83Au, 1);  /* 0C0AE838 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C0AE83A mov Rm,Rn */
	IF(0x0C0AE83Cu); PR = R32(r15); r15 += 4; UPD(0x0C0AE83Eu, 2);  /* 0C0AE83C lds.l @Rn+,pr */
	IF(0x0C0AE83Eu); { u32 tv_ = r3; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C071C90u: TAIL(blk_f_0C071C90); default: JUMPD(tv_); } }  /* 0C0AE83E jmp @Rn */
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


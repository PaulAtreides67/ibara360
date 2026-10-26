#include "recomp.h"
#include "blk_recomp_funcs.h"

void blk_f_0C07A100(sh3_t *c)
{
	LOCALS;
L_0C07A100: BLKS(0x0C07A100u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07A102u, 1);  /* 0C07A100 mov.l Rm,@-Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C07A102 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07A106u, 2);  /* 0C07A104 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07A108u, 1);  /* 0C07A106 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07A10Au, 1);  /* 0C07A108 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07A10Cu, 1);  /* 0C07A10A mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C07A10Eu, 1);  /* 0C07A10C mov.l Rm,@-Rn */
	r5 = 0x2A0u; UPD(0x0C07A110u, 1);  /* 0C07A10E mov.w @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07A112u, 1);  /* 0C07A110 mov.l Rm,@-Rn */
	IF(0x0C07A112u); MACL = r4 * r5;  /* 0C07A112 mul.l Rm,Rn */
	IF(0x0C07A114u); r15 -= 4; W32(r15, PR); UPD(0x0C07A116u, 3);  /* 0C07A114 sts.l pr,@-Rn */
	r1 = 0xC28EDFCu; UPD(0x0C07A118u, 1);  /* 0C07A116 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF4u;  /* 0C07A118 add #imm,Rn */
	r0 = 0xC29D1D8u; UPD(0x0C07A11Cu, 2);  /* 0C07A11A mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C07A11C mov Rm,Rn */
	IF(0x0C07A11Eu); r8 = MACL;  /* 0C07A11E sts macl,Rn */
	W32(r14, r4); UPD(0x0C07A122u, 3);  /* 0C07A120 mov.l Rm,@Rn */
	r8 += r0;  /* 0C07A122 add Rm,Rn */
	W32(r14 + 0x4u, r1); UPD(0x0C07A126u, 2);  /* 0C07A124 mov.l Rm,@(disp,Rn) */
	r0 = r8;  /* 0C07A126 mov Rm,Rn */
	r3 = 0x266u; UPD(0x0C07A12Au, 2);  /* 0C07A128 mov.w @(disp,pc),Rn */
	r9 = 0xC079F80u; UPD(0x0C07A12Cu, 1);  /* 0C07A12A mov.l @(disp,pc),Rn */
	IF(0x0C07A12Cu); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C07A12Eu, 1);  /* 0C07A12C mov.b @(r0,Rm),Rn */
	r5 = r2 & 0xFF;  /* 0C07A12E extu.b Rm,Rn */
	IF(0x0C07A130u); { u32 t_ = r9; PR = 0x0C07A134u; r5 += r5; /* slot add Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C079F80, 0x0C079F80u, 0x0C07A134u); }  /* 0C07A130 jsr @Rn */
L_0C07A134: BLKS(0x0C07A134u);
	T = (r0 & r0) == 0;  /* 0C07A134 tst Rm,Rn */
	if (!T) { UPD(0x0C07A13Eu, 4); goto L_0C07A13E; }  /* 0C07A136 bf */
L_0C07A138: BLKS(0x0C07A138u);
	r14 += 0xCu;  /* 0C07A138 add #imm,Rn */
	{ IF(0x0C07A13Cu); ; /* slot nop */ UPD(0x0C07A22Eu, 4); goto L_0C07A22E; }  /* 0C07A13A bra */
L_0C07A13E: BLKS(0x0C07A13Eu);
	r4 = 0x0u;  /* 0C07A13E mov #imm,Rn */
	W32(r14 + 0x8u, r4); UPD(0x0C07A142u, 2);  /* 0C07A140 mov.l Rm,@(disp,Rn) */
	r13 = r8;  /* 0C07A142 mov Rm,Rn */
	UPD(0x0C07A144u, 1);
L_0C07A144: BLKS(0x0C07A144u);
	r3 = 0x264u; UPD(0x0C07A146u, 1);  /* 0C07A144 mov.w @(disp,pc),Rn */
	r12 = r13;  /* 0C07A146 mov Rm,Rn */
	r12 += r3;  /* 0C07A148 add Rm,Rn */
	r12 += 0x2u;  /* 0C07A14A add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r12); UPD(0x0C07A14Eu, 4);  /* 0C07A14C mov.b @Rm,Rn */
	r2 = R32(r14 + 0x8u); UPD(0x0C07A150u, 1);  /* 0C07A14E mov.l @(disp,Rm),Rn */
	r10 = r0 & 0xFF;  /* 0C07A150 extu.b Rm,Rn */
	r10 += r10;  /* 0C07A152 add Rm,Rn */
	T = (s32)r2 >= (s32)r10;  /* 0C07A154 cmp/ge Rm,Rn */
	{ u32 c_ = T; r1 = R32(r14); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C07A210u, 6); goto L_0C07A210; } UPD(0x0C07A15Au, 1); goto L_0C07A15A; }  /* 0C07A156 bt/s */
L_0C07A15A: BLKS(0x0C07A15Au);
	r7 = 0x50u;  /* 0C07A15A mov #imm,Rn */
	r8 = 0x2800u; UPD(0x0C07A15Eu, 2);  /* 0C07A15C mov.w @(disp,pc),Rn */
	r11 = R32(r14 + 0x4u); UPD(0x0C07A160u, 1);  /* 0C07A15E mov.l @(disp,Rm),Rn */
	IF(0x0C07A160u); MACL = r1 * r8;  /* 0C07A160 mul.l Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r11); r11 += 2; r10 = v_; } UPD(0x0C07A164u, 3);  /* 0C07A162 mov.w @Rm+,Rn */
	IF(0x0C07A164u); r8 = MACL;  /* 0C07A164 sts macl,Rn */
	IF(0x0C07A166u); MACL = r10 * r7;  /* 0C07A166 mul.l Rm,Rn */
	r4 = 0xC229004u; UPD(0x0C07A16Au, 4);  /* 0C07A168 mov.l @(disp,pc),Rn */
	IF(0x0C07A16Au); r6 = MACL;  /* 0C07A16A sts macl,Rn */
	r8 += r6;  /* 0C07A16C add Rm,Rn */
	r9 = 0xCD800000u; UPD(0x0C07A170u, 3);  /* 0C07A16E mov.l @(disp,pc),Rn */
	r8 += r4;  /* 0C07A170 add Rm,Rn */
	W32(r8, r9); UPD(0x0C07A174u, 2);  /* 0C07A172 mov.l Rm,@Rn */
	r4 = 0xFu;  /* 0C07A174 mov #imm,Rn */
	r5 = R32(r14 + 0x8u); UPD(0x0C07A178u, 2);  /* 0C07A176 mov.l @(disp,Rm),Rn */
	r9 = 0xFu;  /* 0C07A178 mov #imm,Rn */
	r3 = 0xC062780u; UPD(0x0C07A17Cu, 2);  /* 0C07A17A mov.l @(disp,pc),Rn */
	r9 &= r5;  /* 0C07A17C and Rm,Rn */
	r0 = 0xC1867B8u; UPD(0x0C07A180u, 2);  /* 0C07A17E mov.l @(disp,pc),Rn */
	r9 += r9;  /* 0C07A180 add Rm,Rn */
	W32(r14 + 0x4u, r11); UPD(0x0C07A184u, 2);  /* 0C07A182 mov.l Rm,@(disp,Rn) */
	IF(0x0C07A184u); { u32 t_ = r3; PR = 0x0C07A188u; r9 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C07A188u); }  /* 0C07A184 jsr @Rn */
L_0C07A188: BLKS(0x0C07A188u);
	r11 = (u32)(s32)(s16)R16(r9); UPD(0x0C07A18Au, 1);  /* 0C07A188 mov.w @Rm,Rn */
	r8 += 0x44u;  /* 0C07A18A add #imm,Rn */
	r0 += r11;  /* 0C07A18C add Rm,Rn */
	r0 += 0xFFFFFFF8u;  /* 0C07A18E add #imm,Rn */
	W16(r8, r0); UPD(0x0C07A192u, 4);  /* 0C07A190 mov.w Rm,@Rn */
	r11 = (u32)(s32)(s16)r0;  /* 0C07A192 exts.w Rm,Rn */
	r0 = r0 & 0xFFFF;  /* 0C07A194 extu.w Rm,Rn */
	r0 += 0x4u;  /* 0C07A196 add #imm,Rn */
	r7 = 0xC079E80u; UPD(0x0C07A19Au, 4);  /* 0C07A198 mov.l @(disp,pc),Rn */
	IF(0x0C07A19Au); r0 >>= 2;  /* 0C07A19A shlr2 Rn */
	IF(0x0C07A19Cu); T = r0 & 1; r0 >>= 1;  /* 0C07A19C shlr Rn */
	r8 += 0xFFFFFFBCu;  /* 0C07A19E add #imm,Rn */
	r2 = 0x3u;  /* 0C07A1A0 mov #imm,Rn */
	r1 = 0x0u;  /* 0C07A1A2 mov #imm,Rn */
	r0 &= 0x3Fu;  /* 0C07A1A4 and #imm,r0 */
	W32(r8 + 0x4u, r2); UPD(0x0C07A1A8u, 7);  /* 0C07A1A6 mov.l Rm,@(disp,Rn) */
	r5 = r10;  /* 0C07A1A8 mov Rm,Rn */
	W32(r8 + 0xCu, r1); UPD(0x0C07A1ACu, 2);  /* 0C07A1AA mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x8u, r0); UPD(0x0C07A1AEu, 1);  /* 0C07A1AC mov.l Rm,@(disp,Rn) */
	IF(0x0C07A1AEu); { u32 t_ = r7; PR = 0x0C07A1B2u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C079E80, 0x0C079E80u, 0x0C07A1B2u); }  /* 0C07A1AE jsr @Rn */
L_0C07A1B2: BLKS(0x0C07A1B2u);
	r6 = R32(r13 + 0x10u); UPD(0x0C07A1B4u, 1);  /* 0C07A1B2 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x24u, r6); UPD(0x0C07A1B6u, 1);  /* 0C07A1B4 mov.l Rm,@(disp,Rn) */
	r4 = R32(r13 + 0x14u); UPD(0x0C07A1B8u, 1);  /* 0C07A1B6 mov.l @(disp,Rm),Rn */
	r5 = 0xC062780u; UPD(0x0C07A1BAu, 1);  /* 0C07A1B8 mov.l @(disp,pc),Rn */
	W32(r8 + 0x28u, r4); UPD(0x0C07A1BCu, 1);  /* 0C07A1BA mov.l Rm,@(disp,Rn) */
	r10 = 0x8000u; UPD(0x0C07A1BEu, 1);  /* 0C07A1BC mov.l @(disp,pc),Rn */
	IF(0x0C07A1BEu); { u32 t_ = r5; PR = 0x0C07A1C2u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C07A1C2u); }  /* 0C07A1BE jsr @Rn */
L_0C07A1C2: BLKS(0x0C07A1C2u);
	r9 = r0;  /* 0C07A1C2 mov Rm,Rn */
	r9 += r10;  /* 0C07A1C4 add Rm,Rn */
	r10 = 0xC069B20u; UPD(0x0C07A1C8u, 3);  /* 0C07A1C6 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C07A1C8 mov Rm,Rn */
	IF(0x0C07A1CAu); { u32 t_ = r10; PR = 0x0C07A1CEu; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C07A1CEu); }  /* 0C07A1CA jsr @Rn */
L_0C07A1CE: BLKS(0x0C07A1CEu);
	r5 = r9;  /* 0C07A1CE mov Rm,Rn */
	r9 = 0xC069AF0u; UPD(0x0C07A1D2u, 2);  /* 0C07A1D0 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C07A1D2 mov Rm,Rn */
	IF(0x0C07A1D4u); { u32 t_ = r9; PR = 0x0C07A1D8u; W32(r8 + 0x2Cu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C07A1D8u); }  /* 0C07A1D4 jsr @Rn */
L_0C07A1D8: BLKS(0x0C07A1D8u);
	W32(r8 + 0x30u, r0); UPD(0x0C07A1DAu, 1);  /* 0C07A1D8 mov.l Rm,@(disp,Rn) */
	r11 = 0x14u;  /* 0C07A1DA mov #imm,Rn */
	r8 += 0x48u;  /* 0C07A1DC add #imm,Rn */
	r0 = 0x0u;  /* 0C07A1DE mov #imm,Rn */
	W8(r8, r0); UPD(0x0C07A1E2u, 4);  /* 0C07A1E0 mov.b Rm,@Rn */
	r10 = 0x0u;  /* 0C07A1E2 mov #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r12); UPD(0x0C07A1E6u, 2);  /* 0C07A1E4 mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C07A1E6 add #imm,Rn */
	r2 = r3 & 0xFF;  /* 0C07A1E8 extu.b Rm,Rn */
	r12 = 0xC062780u; UPD(0x0C07A1ECu, 3);  /* 0C07A1EA mov.l @(disp,pc),Rn */
	r4 = r2;  /* 0C07A1EC mov Rm,Rn */
	IF(0x0C07A1EEu); r4 <<= 2;  /* 0C07A1EE shll2 Rn */
	IF(0x0C07A1F0u); { u32 t_ = r12; PR = 0x0C07A1F4u; r4 += r2; /* slot add Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C07A1F4u); }  /* 0C07A1F0 jsr @Rn */
L_0C07A1F4: BLKS(0x0C07A1F4u);
	r0 += 0x1u;  /* 0C07A1F4 add #imm,Rn */
	W8(r8, r0); UPD(0x0C07A1F8u, 2);  /* 0C07A1F6 mov.b Rm,@Rn */
	r8 += 0x1u;  /* 0C07A1F8 add #imm,Rn */
	W8(r8, r11); UPD(0x0C07A1FCu, 2);  /* 0C07A1FA mov.b Rm,@Rn */
	r8 += 0xFFFFFFB6u;  /* 0C07A1FC add #imm,Rn */
	r7 = R32(r14 + 0x8u); UPD(0x0C07A200u, 2);  /* 0C07A1FE mov.l @(disp,Rm),Rn */
	W32(r8 + 0x3Cu, r10); UPD(0x0C07A202u, 1);  /* 0C07A200 mov.l Rm,@(disp,Rn) */
	r7 += 0x1u;  /* 0C07A202 add #imm,Rn */
	r9 = 0x808080u; UPD(0x0C07A206u, 2);  /* 0C07A204 mov.l @(disp,pc),Rn */
	r8 += 0x40u;  /* 0C07A206 add #imm,Rn */
	r6 = (u32)(s32)(s16)r7;  /* 0C07A208 exts.w Rm,Rn */
	W32(r8, r9); UPD(0x0C07A20Cu, 3);  /* 0C07A20A mov.l Rm,@Rn */
	{ W32(r14 + 0x8u, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C07A144u, 3); goto L_0C07A144; }  /* 0C07A20C bra */
L_0C07A210: BLKS(0x0C07A210u);
	r4 = R32(r14); UPD(0x0C07A212u, 1);  /* 0C07A210 mov.l @Rm,Rn */
	r9 = 0x2A0u; UPD(0x0C07A214u, 1);  /* 0C07A212 mov.w @(disp,pc),Rn */
	IF(0x0C07A214u); MACL = r4 * r9;  /* 0C07A214 mul.l Rm,Rn */
	r5 = 0xC29D1D8u; UPD(0x0C07A218u, 3);  /* 0C07A216 mov.l @(disp,pc),Rn */
	IF(0x0C07A218u); r12 = MACL;  /* 0C07A218 sts macl,Rn */
	r12 += r5;  /* 0C07A21A add Rm,Rn */
	r12 += r3;  /* 0C07A21C add Rm,Rn */
	r12 += 0x2u;  /* 0C07A21E add #imm,Rn */
	r3 = 0x0u;  /* 0C07A220 mov #imm,Rn */
	r13 = 0xC0C20A0u; UPD(0x0C07A224u, 6);  /* 0C07A222 mov.l @(disp,pc),Rn */
	r5 = 0x53u;  /* 0C07A224 mov #imm,Rn */
	W8(r12, r3); UPD(0x0C07A228u, 2);  /* 0C07A226 mov.b Rm,@Rn */
	IF(0x0C07A228u); { u32 t_ = r13; PR = 0x0C07A22Cu; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C20A0, 0x0C0C20A0u, 0x0C07A22Cu); }  /* 0C07A228 jsr @Rn */
L_0C07A22C: BLKS(0x0C07A22Cu);
	r14 += 0xCu;  /* 0C07A22C add #imm,Rn */
	UPD(0x0C07A22Eu, 1);
L_0C07A22E: BLKS(0x0C07A22Eu);
	r15 = r14;  /* 0C07A22E mov Rm,Rn */
	IF(0x0C07A230u); PR = R32(r15); r15 += 4; UPD(0x0C07A232u, 2);  /* 0C07A230 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07A234u, 1);  /* 0C07A232 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07A236u, 1);  /* 0C07A234 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07A238u, 1);  /* 0C07A236 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07A23Au, 1);  /* 0C07A238 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07A23Cu, 1);  /* 0C07A23A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07A23Eu, 1);  /* 0C07A23C mov.l @Rm+,Rn */
	IF(0x0C07A23Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07A23E rts */
}

void blk_f_0C07A280(sh3_t *c)
{
	LOCALS;
L_0C07A280: BLKS(0x0C07A280u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07A282u, 1);  /* 0C07A280 mov.l Rm,@-Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C07A282 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07A286u, 2);  /* 0C07A284 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07A288u, 1);  /* 0C07A286 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07A28Au, 1);  /* 0C07A288 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07A28Cu, 1);  /* 0C07A28A mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C07A28Eu, 1);  /* 0C07A28C mov.l Rm,@-Rn */
	r5 = 0x2A0u; UPD(0x0C07A290u, 1);  /* 0C07A28E mov.w @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07A292u, 1);  /* 0C07A290 mov.l Rm,@-Rn */
	IF(0x0C07A292u); MACL = r4 * r5;  /* 0C07A292 mul.l Rm,Rn */
	IF(0x0C07A294u); r15 -= 4; W32(r15, PR); UPD(0x0C07A296u, 3);  /* 0C07A294 sts.l pr,@-Rn */
	r1 = 0xC28EDFCu; UPD(0x0C07A298u, 1);  /* 0C07A296 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF4u;  /* 0C07A298 add #imm,Rn */
	r0 = 0xC29D1D8u; UPD(0x0C07A29Cu, 2);  /* 0C07A29A mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C07A29C mov Rm,Rn */
	IF(0x0C07A29Eu); r8 = MACL;  /* 0C07A29E sts macl,Rn */
	W32(r14, r4); UPD(0x0C07A2A2u, 3);  /* 0C07A2A0 mov.l Rm,@Rn */
	r8 += r0;  /* 0C07A2A2 add Rm,Rn */
	W32(r14 + 0x4u, r1); UPD(0x0C07A2A6u, 2);  /* 0C07A2A4 mov.l Rm,@(disp,Rn) */
	r0 = r8;  /* 0C07A2A6 mov Rm,Rn */
	r3 = 0x266u; UPD(0x0C07A2AAu, 2);  /* 0C07A2A8 mov.w @(disp,pc),Rn */
	r9 = 0xC079F80u; UPD(0x0C07A2ACu, 1);  /* 0C07A2AA mov.l @(disp,pc),Rn */
	IF(0x0C07A2ACu); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C07A2AEu, 1);  /* 0C07A2AC mov.b @(r0,Rm),Rn */
	r5 = r2 & 0xFF;  /* 0C07A2AE extu.b Rm,Rn */
	IF(0x0C07A2B0u); { u32 t_ = r9; PR = 0x0C07A2B4u; r5 += r5; /* slot add Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C079F80, 0x0C079F80u, 0x0C07A2B4u); }  /* 0C07A2B0 jsr @Rn */
L_0C07A2B4: BLKS(0x0C07A2B4u);
	T = (r0 & r0) == 0;  /* 0C07A2B4 tst Rm,Rn */
	{ u32 c_ = !T; r4 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07A2BEu, 4); goto L_0C07A2BE; } goto L_0C07A2BA; }  /* 0C07A2B6 bf/s */
L_0C07A2BA: BLKS(0x0C07A2BAu);
	{ r14 += 0xCu; /* slot add #imm,Rn */ UPD(0x0C07A3C0u, 4); goto L_0C07A3C0; }  /* 0C07A2BA bra */
L_0C07A2BE: BLKS(0x0C07A2BEu);
	W32(r14 + 0x8u, r4); UPD(0x0C07A2C0u, 1);  /* 0C07A2BE mov.l Rm,@(disp,Rn) */
	r13 = r8;  /* 0C07A2C0 mov Rm,Rn */
	IF(0x0C07A2C2u); ;  /* 0C07A2C2 nop */
	UPD(0x0C07A2C4u, 2);
L_0C07A2C4: BLKS(0x0C07A2C4u);
	r3 = 0x264u; UPD(0x0C07A2C6u, 1);  /* 0C07A2C4 mov.w @(disp,pc),Rn */
	r12 = r13;  /* 0C07A2C6 mov Rm,Rn */
	r12 += r3;  /* 0C07A2C8 add Rm,Rn */
	r12 += 0x2u;  /* 0C07A2CA add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r12); UPD(0x0C07A2CEu, 4);  /* 0C07A2CC mov.b @Rm,Rn */
	r2 = R32(r14 + 0x8u); UPD(0x0C07A2D0u, 1);  /* 0C07A2CE mov.l @(disp,Rm),Rn */
	r10 = r0 & 0xFF;  /* 0C07A2D0 extu.b Rm,Rn */
	r10 += r10;  /* 0C07A2D2 add Rm,Rn */
	T = (s32)r2 >= (s32)r10;  /* 0C07A2D4 cmp/ge Rm,Rn */
	{ u32 c_ = T; r1 = R32(r14); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C07A390u, 6); goto L_0C07A390; } UPD(0x0C07A2DAu, 1); goto L_0C07A2DA; }  /* 0C07A2D6 bt/s */
L_0C07A2DA: BLKS(0x0C07A2DAu);
	r7 = 0x50u;  /* 0C07A2DA mov #imm,Rn */
	r8 = 0x2800u; UPD(0x0C07A2DEu, 2);  /* 0C07A2DC mov.w @(disp,pc),Rn */
	r11 = R32(r14 + 0x4u); UPD(0x0C07A2E0u, 1);  /* 0C07A2DE mov.l @(disp,Rm),Rn */
	IF(0x0C07A2E0u); MACL = r1 * r8;  /* 0C07A2E0 mul.l Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r11); r11 += 2; r10 = v_; } UPD(0x0C07A2E4u, 3);  /* 0C07A2E2 mov.w @Rm+,Rn */
	IF(0x0C07A2E4u); r8 = MACL;  /* 0C07A2E4 sts macl,Rn */
	IF(0x0C07A2E6u); MACL = r10 * r7;  /* 0C07A2E6 mul.l Rm,Rn */
	r4 = 0xC229004u; UPD(0x0C07A2EAu, 4);  /* 0C07A2E8 mov.l @(disp,pc),Rn */
	IF(0x0C07A2EAu); r6 = MACL;  /* 0C07A2EA sts macl,Rn */
	r8 += r6;  /* 0C07A2EC add Rm,Rn */
	r9 = 0xCD800000u; UPD(0x0C07A2F0u, 3);  /* 0C07A2EE mov.l @(disp,pc),Rn */
	r8 += r4;  /* 0C07A2F0 add Rm,Rn */
	W32(r8, r9); UPD(0x0C07A2F4u, 2);  /* 0C07A2F2 mov.l Rm,@Rn */
	r4 = 0xDu;  /* 0C07A2F4 mov #imm,Rn */
	r5 = R32(r14 + 0x8u); UPD(0x0C07A2F8u, 2);  /* 0C07A2F6 mov.l @(disp,Rm),Rn */
	r9 = 0xFu;  /* 0C07A2F8 mov #imm,Rn */
	r3 = 0xC062780u; UPD(0x0C07A2FCu, 2);  /* 0C07A2FA mov.l @(disp,pc),Rn */
	r9 &= r5;  /* 0C07A2FC and Rm,Rn */
	r0 = 0xC1867D8u; UPD(0x0C07A300u, 2);  /* 0C07A2FE mov.l @(disp,pc),Rn */
	r9 += r9;  /* 0C07A300 add Rm,Rn */
	W32(r14 + 0x4u, r11); UPD(0x0C07A304u, 2);  /* 0C07A302 mov.l Rm,@(disp,Rn) */
	IF(0x0C07A304u); { u32 t_ = r3; PR = 0x0C07A308u; r9 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C07A308u); }  /* 0C07A304 jsr @Rn */
L_0C07A308: BLKS(0x0C07A308u);
	r11 = (u32)(s32)(s16)R16(r9); UPD(0x0C07A30Au, 1);  /* 0C07A308 mov.w @Rm,Rn */
	r8 += 0x44u;  /* 0C07A30A add #imm,Rn */
	r0 += r11;  /* 0C07A30C add Rm,Rn */
	r0 += 0xFFFFFFFAu;  /* 0C07A30E add #imm,Rn */
	W16(r8, r0); UPD(0x0C07A312u, 4);  /* 0C07A310 mov.w Rm,@Rn */
	r11 = (u32)(s32)(s16)r0;  /* 0C07A312 exts.w Rm,Rn */
	r0 = r0 & 0xFFFF;  /* 0C07A314 extu.w Rm,Rn */
	r0 += 0x4u;  /* 0C07A316 add #imm,Rn */
	r7 = 0xC079E80u; UPD(0x0C07A31Au, 4);  /* 0C07A318 mov.l @(disp,pc),Rn */
	IF(0x0C07A31Au); r0 >>= 2;  /* 0C07A31A shlr2 Rn */
	IF(0x0C07A31Cu); T = r0 & 1; r0 >>= 1;  /* 0C07A31C shlr Rn */
	r8 += 0xFFFFFFBCu;  /* 0C07A31E add #imm,Rn */
	r2 = 0x3u;  /* 0C07A320 mov #imm,Rn */
	r1 = 0x0u;  /* 0C07A322 mov #imm,Rn */
	r0 &= 0x3Fu;  /* 0C07A324 and #imm,r0 */
	W32(r8 + 0x4u, r2); UPD(0x0C07A328u, 7);  /* 0C07A326 mov.l Rm,@(disp,Rn) */
	r5 = r10;  /* 0C07A328 mov Rm,Rn */
	W32(r8 + 0xCu, r1); UPD(0x0C07A32Cu, 2);  /* 0C07A32A mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x8u, r0); UPD(0x0C07A32Eu, 1);  /* 0C07A32C mov.l Rm,@(disp,Rn) */
	IF(0x0C07A32Eu); { u32 t_ = r7; PR = 0x0C07A332u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C079E80, 0x0C079E80u, 0x0C07A332u); }  /* 0C07A32E jsr @Rn */
L_0C07A332: BLKS(0x0C07A332u);
	r6 = R32(r13 + 0x10u); UPD(0x0C07A334u, 1);  /* 0C07A332 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x24u, r6); UPD(0x0C07A336u, 1);  /* 0C07A334 mov.l Rm,@(disp,Rn) */
	r4 = R32(r13 + 0x14u); UPD(0x0C07A338u, 1);  /* 0C07A336 mov.l @(disp,Rm),Rn */
	r5 = 0xC062780u; UPD(0x0C07A33Au, 1);  /* 0C07A338 mov.l @(disp,pc),Rn */
	W32(r8 + 0x28u, r4); UPD(0x0C07A33Cu, 1);  /* 0C07A33A mov.l Rm,@(disp,Rn) */
	r10 = 0x18000u; UPD(0x0C07A33Eu, 1);  /* 0C07A33C mov.l @(disp,pc),Rn */
	IF(0x0C07A33Eu); { u32 t_ = r5; PR = 0x0C07A342u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C07A342u); }  /* 0C07A33E jsr @Rn */
L_0C07A342: BLKS(0x0C07A342u);
	r9 = r0;  /* 0C07A342 mov Rm,Rn */
	r9 += r10;  /* 0C07A344 add Rm,Rn */
	r10 = 0xC069B20u; UPD(0x0C07A348u, 3);  /* 0C07A346 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C07A348 mov Rm,Rn */
	IF(0x0C07A34Au); { u32 t_ = r10; PR = 0x0C07A34Eu; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C07A34Eu); }  /* 0C07A34A jsr @Rn */
L_0C07A34E: BLKS(0x0C07A34Eu);
	r5 = r9;  /* 0C07A34E mov Rm,Rn */
	r9 = 0xC069AF0u; UPD(0x0C07A352u, 2);  /* 0C07A350 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C07A352 mov Rm,Rn */
	IF(0x0C07A354u); { u32 t_ = r9; PR = 0x0C07A358u; W32(r8 + 0x2Cu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C07A358u); }  /* 0C07A354 jsr @Rn */
L_0C07A358: BLKS(0x0C07A358u);
	W32(r8 + 0x30u, r0); UPD(0x0C07A35Au, 1);  /* 0C07A358 mov.l Rm,@(disp,Rn) */
	r11 = 0x14u;  /* 0C07A35A mov #imm,Rn */
	r8 += 0x48u;  /* 0C07A35C add #imm,Rn */
	r0 = 0x0u;  /* 0C07A35E mov #imm,Rn */
	W8(r8, r0); UPD(0x0C07A362u, 4);  /* 0C07A360 mov.b Rm,@Rn */
	r10 = 0x0u;  /* 0C07A362 mov #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r12); UPD(0x0C07A366u, 2);  /* 0C07A364 mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C07A366 add #imm,Rn */
	r2 = r3 & 0xFF;  /* 0C07A368 extu.b Rm,Rn */
	r12 = 0xC062780u; UPD(0x0C07A36Cu, 3);  /* 0C07A36A mov.l @(disp,pc),Rn */
	r4 = r2;  /* 0C07A36C mov Rm,Rn */
	r4 += r4;  /* 0C07A36E add Rm,Rn */
	IF(0x0C07A370u); { u32 t_ = r12; PR = 0x0C07A374u; r4 += r2; /* slot add Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C07A374u); }  /* 0C07A370 jsr @Rn */
L_0C07A374: BLKS(0x0C07A374u);
	r0 += 0x4u;  /* 0C07A374 add #imm,Rn */
	W8(r8, r0); UPD(0x0C07A378u, 2);  /* 0C07A376 mov.b Rm,@Rn */
	r8 += 0x1u;  /* 0C07A378 add #imm,Rn */
	W8(r8, r11); UPD(0x0C07A37Cu, 2);  /* 0C07A37A mov.b Rm,@Rn */
	r8 += 0xFFFFFFB6u;  /* 0C07A37C add #imm,Rn */
	r7 = R32(r14 + 0x8u); UPD(0x0C07A380u, 2);  /* 0C07A37E mov.l @(disp,Rm),Rn */
	W32(r8 + 0x3Cu, r10); UPD(0x0C07A382u, 1);  /* 0C07A380 mov.l Rm,@(disp,Rn) */
	r7 += 0x1u;  /* 0C07A382 add #imm,Rn */
	r9 = 0x808080u; UPD(0x0C07A386u, 2);  /* 0C07A384 mov.l @(disp,pc),Rn */
	r8 += 0x40u;  /* 0C07A386 add #imm,Rn */
	r6 = (u32)(s32)(s16)r7;  /* 0C07A388 exts.w Rm,Rn */
	W32(r8, r9); UPD(0x0C07A38Cu, 3);  /* 0C07A38A mov.l Rm,@Rn */
	{ W32(r14 + 0x8u, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C07A2C4u, 3); goto L_0C07A2C4; }  /* 0C07A38C bra */
L_0C07A390: BLKS(0x0C07A390u);
	r4 = R32(r14); UPD(0x0C07A392u, 1);  /* 0C07A390 mov.l @Rm,Rn */
	r12 = 0x0u;  /* 0C07A392 mov #imm,Rn */
	r9 = 0x2A0u; UPD(0x0C07A396u, 2);  /* 0C07A394 mov.w @(disp,pc),Rn */
	IF(0x0C07A396u); MACL = r4 * r9;  /* 0C07A396 mul.l Rm,Rn */
	r5 = 0xC29D1D8u; UPD(0x0C07A39Au, 3);  /* 0C07A398 mov.l @(disp,pc),Rn */
	IF(0x0C07A39Au); r13 = MACL;  /* 0C07A39A sts macl,Rn */
	r13 += r5;  /* 0C07A39C add Rm,Rn */
	r13 += r3;  /* 0C07A39E add Rm,Rn */
	r13 += 0x2u;  /* 0C07A3A0 add #imm,Rn */
	W8(r13, r12); UPD(0x0C07A3A4u, 5);  /* 0C07A3A2 mov.b Rm,@Rn */
	r5 = 0x53u;  /* 0C07A3A4 mov #imm,Rn */
	r4 = R32(r14); UPD(0x0C07A3A8u, 2);  /* 0C07A3A6 mov.l @Rm,Rn */
	r3 = 0xC0C20A0u; UPD(0x0C07A3AAu, 1);  /* 0C07A3A8 mov.l @(disp,pc),Rn */
	r14 += 0xCu;  /* 0C07A3AA add #imm,Rn */
	r15 = r14;  /* 0C07A3AC mov Rm,Rn */
	IF(0x0C07A3AEu); PR = R32(r15); r15 += 4; UPD(0x0C07A3B0u, 3);  /* 0C07A3AE lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07A3B2u, 1);  /* 0C07A3B0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07A3B4u, 1);  /* 0C07A3B2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07A3B6u, 1);  /* 0C07A3B4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07A3B8u, 1);  /* 0C07A3B6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07A3BAu, 1);  /* 0C07A3B8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07A3BCu, 1);  /* 0C07A3BA mov.l @Rm+,Rn */
	IF(0x0C07A3BCu); { u32 tv_ = r3; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0C20A0u: TAIL(blk_f_0C0C20A0); default: JUMPD(tv_); } }  /* 0C07A3BC jmp @Rn */
L_0C07A3C0: BLKS(0x0C07A3C0u);
	r15 = r14;  /* 0C07A3C0 mov Rm,Rn */
	IF(0x0C07A3C2u); PR = R32(r15); r15 += 4; UPD(0x0C07A3C4u, 2);  /* 0C07A3C2 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07A3C6u, 1);  /* 0C07A3C4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07A3C8u, 1);  /* 0C07A3C6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07A3CAu, 1);  /* 0C07A3C8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07A3CCu, 1);  /* 0C07A3CA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07A3CEu, 1);  /* 0C07A3CC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07A3D0u, 1);  /* 0C07A3CE mov.l @Rm+,Rn */
	IF(0x0C07A3D0u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07A3D0 rts */
}

void blk_f_0C07A410(sh3_t *c)
{
	LOCALS;
L_0C07A410: BLKS(0x0C07A410u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07A412u, 1);  /* 0C07A410 mov.l Rm,@-Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C07A412 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07A416u, 2);  /* 0C07A414 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07A418u, 1);  /* 0C07A416 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07A41Au, 1);  /* 0C07A418 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07A41Cu, 1);  /* 0C07A41A mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C07A41Eu, 1);  /* 0C07A41C mov.l Rm,@-Rn */
	r5 = 0x2A0u; UPD(0x0C07A420u, 1);  /* 0C07A41E mov.w @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07A422u, 1);  /* 0C07A420 mov.l Rm,@-Rn */
	IF(0x0C07A422u); MACL = r4 * r5;  /* 0C07A422 mul.l Rm,Rn */
	IF(0x0C07A424u); r15 -= 4; W32(r15, PR); UPD(0x0C07A426u, 3);  /* 0C07A424 sts.l pr,@-Rn */
	r1 = 0xC28EDFCu; UPD(0x0C07A428u, 1);  /* 0C07A426 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF4u;  /* 0C07A428 add #imm,Rn */
	r0 = 0xC29D1D8u; UPD(0x0C07A42Cu, 2);  /* 0C07A42A mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C07A42C mov Rm,Rn */
	IF(0x0C07A42Eu); r8 = MACL;  /* 0C07A42E sts macl,Rn */
	W32(r14, r4); UPD(0x0C07A432u, 3);  /* 0C07A430 mov.l Rm,@Rn */
	r8 += r0;  /* 0C07A432 add Rm,Rn */
	W32(r14 + 0x4u, r1); UPD(0x0C07A436u, 2);  /* 0C07A434 mov.l Rm,@(disp,Rn) */
	r0 = r8;  /* 0C07A436 mov Rm,Rn */
	r3 = 0x266u; UPD(0x0C07A43Au, 2);  /* 0C07A438 mov.w @(disp,pc),Rn */
	r9 = 0xC079F80u; UPD(0x0C07A43Cu, 1);  /* 0C07A43A mov.l @(disp,pc),Rn */
	IF(0x0C07A43Cu); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C07A43Eu, 1);  /* 0C07A43C mov.b @(r0,Rm),Rn */
	r5 = r2 & 0xFF;  /* 0C07A43E extu.b Rm,Rn */
	IF(0x0C07A440u); { u32 t_ = r9; PR = 0x0C07A444u; r5 += r5; /* slot add Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C079F80, 0x0C079F80u, 0x0C07A444u); }  /* 0C07A440 jsr @Rn */
L_0C07A444: BLKS(0x0C07A444u);
	T = (r0 & r0) == 0;  /* 0C07A444 tst Rm,Rn */
	{ u32 c_ = !T; r4 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07A44Eu, 4); goto L_0C07A44E; } goto L_0C07A44A; }  /* 0C07A446 bf/s */
L_0C07A44A: BLKS(0x0C07A44Au);
	{ r14 += 0xCu; /* slot add #imm,Rn */ UPD(0x0C07A570u, 4); goto L_0C07A570; }  /* 0C07A44A bra */
L_0C07A44E: BLKS(0x0C07A44Eu);
	W32(r14 + 0x8u, r4); UPD(0x0C07A450u, 1);  /* 0C07A44E mov.l Rm,@(disp,Rn) */
	r13 = r8;  /* 0C07A450 mov Rm,Rn */
	IF(0x0C07A452u); ;  /* 0C07A452 nop */
	UPD(0x0C07A454u, 2);
L_0C07A454: BLKS(0x0C07A454u);
	r3 = 0x264u; UPD(0x0C07A456u, 1);  /* 0C07A454 mov.w @(disp,pc),Rn */
	r12 = r13;  /* 0C07A456 mov Rm,Rn */
	r12 += r3;  /* 0C07A458 add Rm,Rn */
	r12 += 0x2u;  /* 0C07A45A add #imm,Rn */
	r7 = (u32)(s32)(s8)R8(r12); UPD(0x0C07A45Eu, 4);  /* 0C07A45C mov.b @Rm,Rn */
	r6 = R32(r14 + 0x8u); UPD(0x0C07A460u, 1);  /* 0C07A45E mov.l @(disp,Rm),Rn */
	r10 = r7 & 0xFF;  /* 0C07A460 extu.b Rm,Rn */
	r10 += r10;  /* 0C07A462 add Rm,Rn */
	T = (s32)r6 >= (s32)r10;  /* 0C07A464 cmp/ge Rm,Rn */
	{ u32 c_ = T; r5 = R32(r14); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C07A540u, 6); goto L_0C07A540; } UPD(0x0C07A46Au, 1); goto L_0C07A46A; }  /* 0C07A466 bt/s */
L_0C07A46A: BLKS(0x0C07A46Au);
	r9 = 0x50u;  /* 0C07A46A mov #imm,Rn */
	r8 = 0x2800u; UPD(0x0C07A46Eu, 2);  /* 0C07A46C mov.w @(disp,pc),Rn */
	r2 = 0xFu;  /* 0C07A46E mov #imm,Rn */
	r4 = R32(r14 + 0x4u); UPD(0x0C07A472u, 2);  /* 0C07A470 mov.l @(disp,Rm),Rn */
	IF(0x0C07A472u); MACL = r5 * r8;  /* 0C07A472 mul.l Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r4); r4 += 2; r10 = v_; } UPD(0x0C07A476u, 3);  /* 0C07A474 mov.w @Rm+,Rn */
	IF(0x0C07A476u); r8 = MACL;  /* 0C07A476 sts macl,Rn */
	IF(0x0C07A478u); MACL = r10 * r9;  /* 0C07A478 mul.l Rm,Rn */
	r11 = 0xC229004u; UPD(0x0C07A47Cu, 4);  /* 0C07A47A mov.l @(disp,pc),Rn */
	IF(0x0C07A47Cu); r3 = MACL;  /* 0C07A47C sts macl,Rn */
	r8 += r3;  /* 0C07A47E add Rm,Rn */
	r0 = 0xCD800000u; UPD(0x0C07A482u, 3);  /* 0C07A480 mov.l @(disp,pc),Rn */
	r8 += r11;  /* 0C07A482 add Rm,Rn */
	W32(r8, r0); UPD(0x0C07A486u, 2);  /* 0C07A484 mov.l Rm,@Rn */
	r0 = 0x24Cu; UPD(0x0C07A488u, 1);  /* 0C07A486 mov.w @(disp,pc),Rn */
	r8 += 0x44u;  /* 0C07A488 add #imm,Rn */
	IF(0x0C07A48Au); r1 = (u32)(s32)(s16)R16(r0 + r13); UPD(0x0C07A48Cu, 2);  /* 0C07A48A mov.w @(r0,Rm),Rn */
	W32(r14 + 0x4u, r4); UPD(0x0C07A48Eu, 1);  /* 0C07A48C mov.l Rm,@(disp,Rn) */
	r2 &= r1;  /* 0C07A48E and Rm,Rn */
	r6 = 0xC1867F8u; UPD(0x0C07A492u, 2);  /* 0C07A490 mov.l @(disp,pc),Rn */
	r2 += r2;  /* 0C07A492 add Rm,Rn */
	r7 = R32(r14 + 0x8u); UPD(0x0C07A496u, 2);  /* 0C07A494 mov.l @(disp,Rm),Rn */
	r0 = r2;  /* 0C07A496 mov Rm,Rn */
	r4 = 0xFu;  /* 0C07A498 mov #imm,Rn */
	IF(0x0C07A49Au); r11 = (u32)(s32)(s16)R16(r0 + r6); UPD(0x0C07A49Cu, 3);  /* 0C07A49A mov.w @(r0,Rm),Rn */
	r4 &= r7;  /* 0C07A49C and Rm,Rn */
	r5 = 0xC1867D8u; UPD(0x0C07A4A0u, 2);  /* 0C07A49E mov.l @(disp,pc),Rn */
	r4 += r4;  /* 0C07A4A0 add Rm,Rn */
	r3 = 0xC062780u; UPD(0x0C07A4A4u, 2);  /* 0C07A4A2 mov.l @(disp,pc),Rn */
	r0 = r4;  /* 0C07A4A4 mov Rm,Rn */
	IF(0x0C07A4A6u); r9 = (u32)(s32)(s16)R16(r0 + r5); UPD(0x0C07A4A8u, 2);  /* 0C07A4A6 mov.w @(r0,Rm),Rn */
	r4 = 0xDu;  /* 0C07A4A8 mov #imm,Rn */
	IF(0x0C07A4AAu); { u32 t_ = r3; PR = 0x0C07A4AEu; r11 += r9; /* slot add Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C07A4AEu); }  /* 0C07A4AA jsr @Rn */
L_0C07A4AE: BLKS(0x0C07A4AEu);
	r0 += r11;  /* 0C07A4AE add Rm,Rn */
	r0 += 0xFFFFFFFAu;  /* 0C07A4B0 add #imm,Rn */
	W16(r8, r0); UPD(0x0C07A4B4u, 3);  /* 0C07A4B2 mov.w Rm,@Rn */
	r11 = (u32)(s32)(s16)r0;  /* 0C07A4B4 exts.w Rm,Rn */
	r0 = r0 & 0xFFFF;  /* 0C07A4B6 extu.w Rm,Rn */
	r0 += 0x4u;  /* 0C07A4B8 add #imm,Rn */
	r7 = 0xC079E80u; UPD(0x0C07A4BCu, 4);  /* 0C07A4BA mov.l @(disp,pc),Rn */
	IF(0x0C07A4BCu); r0 >>= 2;  /* 0C07A4BC shlr2 Rn */
	IF(0x0C07A4BEu); T = r0 & 1; r0 >>= 1;  /* 0C07A4BE shlr Rn */
	r8 += 0xFFFFFFBCu;  /* 0C07A4C0 add #imm,Rn */
	r2 = 0x3u;  /* 0C07A4C2 mov #imm,Rn */
	r1 = 0x0u;  /* 0C07A4C4 mov #imm,Rn */
	r0 &= 0x3Fu;  /* 0C07A4C6 and #imm,r0 */
	W32(r8 + 0x4u, r2); UPD(0x0C07A4CAu, 7);  /* 0C07A4C8 mov.l Rm,@(disp,Rn) */
	r5 = r10;  /* 0C07A4CA mov Rm,Rn */
	W32(r8 + 0xCu, r1); UPD(0x0C07A4CEu, 2);  /* 0C07A4CC mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x8u, r0); UPD(0x0C07A4D0u, 1);  /* 0C07A4CE mov.l Rm,@(disp,Rn) */
	IF(0x0C07A4D0u); { u32 t_ = r7; PR = 0x0C07A4D4u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C079E80, 0x0C079E80u, 0x0C07A4D4u); }  /* 0C07A4D0 jsr @Rn */
L_0C07A4D4: BLKS(0x0C07A4D4u);
	r6 = R32(r13 + 0x10u); UPD(0x0C07A4D6u, 1);  /* 0C07A4D4 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x24u, r6); UPD(0x0C07A4D8u, 1);  /* 0C07A4D6 mov.l Rm,@(disp,Rn) */
	r4 = R32(r13 + 0x14u); UPD(0x0C07A4DAu, 1);  /* 0C07A4D8 mov.l @(disp,Rm),Rn */
	r5 = 0xC062780u; UPD(0x0C07A4DCu, 1);  /* 0C07A4DA mov.l @(disp,pc),Rn */
	W32(r8 + 0x28u, r4); UPD(0x0C07A4DEu, 1);  /* 0C07A4DC mov.l Rm,@(disp,Rn) */
	r10 = 0x18000u; UPD(0x0C07A4E0u, 1);  /* 0C07A4DE mov.l @(disp,pc),Rn */
	IF(0x0C07A4E0u); { u32 t_ = r5; PR = 0x0C07A4E4u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C07A4E4u); }  /* 0C07A4E0 jsr @Rn */
L_0C07A4E4: BLKS(0x0C07A4E4u);
	r9 = r0;  /* 0C07A4E4 mov Rm,Rn */
	r9 += r10;  /* 0C07A4E6 add Rm,Rn */
	r10 = 0xC069B20u; UPD(0x0C07A4EAu, 3);  /* 0C07A4E8 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C07A4EA mov Rm,Rn */
	IF(0x0C07A4ECu); { u32 t_ = r10; PR = 0x0C07A4F0u; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C07A4F0u); }  /* 0C07A4EC jsr @Rn */
L_0C07A4F0: BLKS(0x0C07A4F0u);
	r5 = r9;  /* 0C07A4F0 mov Rm,Rn */
	r9 = 0xC069AF0u; UPD(0x0C07A4F4u, 2);  /* 0C07A4F2 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C07A4F4 mov Rm,Rn */
	IF(0x0C07A4F6u); { u32 t_ = r9; PR = 0x0C07A4FAu; W32(r8 + 0x2Cu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C07A4FAu); }  /* 0C07A4F6 jsr @Rn */
L_0C07A4FA: BLKS(0x0C07A4FAu);
	W32(r8 + 0x30u, r0); UPD(0x0C07A4FCu, 1);  /* 0C07A4FA mov.l Rm,@(disp,Rn) */
	r11 = 0x14u;  /* 0C07A4FC mov #imm,Rn */
	r8 += 0x48u;  /* 0C07A4FE add #imm,Rn */
	r0 = 0x0u;  /* 0C07A500 mov #imm,Rn */
	W8(r8, r0); UPD(0x0C07A504u, 4);  /* 0C07A502 mov.b Rm,@Rn */
	r10 = 0x0u;  /* 0C07A504 mov #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r12); UPD(0x0C07A508u, 2);  /* 0C07A506 mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C07A508 add #imm,Rn */
	r2 = r3 & 0xFF;  /* 0C07A50A extu.b Rm,Rn */
	r12 = 0xC062780u; UPD(0x0C07A50Eu, 3);  /* 0C07A50C mov.l @(disp,pc),Rn */
	r4 = r2;  /* 0C07A50E mov Rm,Rn */
	r4 += r4;  /* 0C07A510 add Rm,Rn */
	IF(0x0C07A512u); { u32 t_ = r12; PR = 0x0C07A516u; r4 += r2; /* slot add Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C07A516u); }  /* 0C07A512 jsr @Rn */
L_0C07A516: BLKS(0x0C07A516u);
	r0 += 0x4u;  /* 0C07A516 add #imm,Rn */
	W8(r8, r0); UPD(0x0C07A51Au, 2);  /* 0C07A518 mov.b Rm,@Rn */
	r8 += 0x1u;  /* 0C07A51A add #imm,Rn */
	W8(r8, r11); UPD(0x0C07A51Eu, 2);  /* 0C07A51C mov.b Rm,@Rn */
	r8 += 0xFFFFFFB6u;  /* 0C07A51E add #imm,Rn */
	r7 = R32(r14 + 0x8u); UPD(0x0C07A522u, 2);  /* 0C07A520 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x3Cu, r10); UPD(0x0C07A524u, 1);  /* 0C07A522 mov.l Rm,@(disp,Rn) */
	r7 += 0x1u;  /* 0C07A524 add #imm,Rn */
	r9 = 0x808080u; UPD(0x0C07A528u, 2);  /* 0C07A526 mov.l @(disp,pc),Rn */
	r8 += 0x40u;  /* 0C07A528 add #imm,Rn */
	r6 = (u32)(s32)(s16)r7;  /* 0C07A52A exts.w Rm,Rn */
	W32(r8, r9); UPD(0x0C07A52Eu, 3);  /* 0C07A52C mov.l Rm,@Rn */
	{ W32(r14 + 0x8u, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C07A454u, 3); goto L_0C07A454; }  /* 0C07A52E bra */
L_0C07A540: BLKS(0x0C07A540u);
	r11 = R32(r14); UPD(0x0C07A542u, 1);  /* 0C07A540 mov.l @Rm,Rn */
	r12 = 0x0u;  /* 0C07A542 mov #imm,Rn */
	r0 = 0x2A0u; UPD(0x0C07A546u, 2);  /* 0C07A544 mov.w @(disp,pc),Rn */
	r5 = 0x53u;  /* 0C07A546 mov #imm,Rn */
	IF(0x0C07A548u); MACL = r11 * r0;  /* 0C07A548 mul.l Rm,Rn */
	r1 = 0xC29D1D8u; UPD(0x0C07A54Cu, 4);  /* 0C07A54A mov.l @(disp,pc),Rn */
	IF(0x0C07A54Cu); r13 = MACL;  /* 0C07A54C sts macl,Rn */
	r13 += r1;  /* 0C07A54E add Rm,Rn */
	r13 += r3;  /* 0C07A550 add Rm,Rn */
	r13 += 0x2u;  /* 0C07A552 add #imm,Rn */
	W8(r13, r12); UPD(0x0C07A556u, 5);  /* 0C07A554 mov.b Rm,@Rn */
	r4 = R32(r14); UPD(0x0C07A558u, 1);  /* 0C07A556 mov.l @Rm,Rn */
	r2 = 0xC0C20A0u; UPD(0x0C07A55Au, 1);  /* 0C07A558 mov.l @(disp,pc),Rn */
	r14 += 0xCu;  /* 0C07A55A add #imm,Rn */
	r15 = r14;  /* 0C07A55C mov Rm,Rn */
	IF(0x0C07A55Eu); PR = R32(r15); r15 += 4; UPD(0x0C07A560u, 3);  /* 0C07A55E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07A562u, 1);  /* 0C07A560 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07A564u, 1);  /* 0C07A562 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07A566u, 1);  /* 0C07A564 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07A568u, 1);  /* 0C07A566 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07A56Au, 1);  /* 0C07A568 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07A56Cu, 1);  /* 0C07A56A mov.l @Rm+,Rn */
	IF(0x0C07A56Cu); { u32 tv_ = r2; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0C20A0u: TAIL(blk_f_0C0C20A0); default: JUMPD(tv_); } }  /* 0C07A56C jmp @Rn */
L_0C07A570: BLKS(0x0C07A570u);
	r15 = r14;  /* 0C07A570 mov Rm,Rn */
	IF(0x0C07A572u); PR = R32(r15); r15 += 4; UPD(0x0C07A574u, 2);  /* 0C07A572 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07A576u, 1);  /* 0C07A574 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07A578u, 1);  /* 0C07A576 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07A57Au, 1);  /* 0C07A578 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07A57Cu, 1);  /* 0C07A57A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07A57Eu, 1);  /* 0C07A57C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07A580u, 1);  /* 0C07A57E mov.l @Rm+,Rn */
	IF(0x0C07A580u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07A580 rts */
}

void blk_f_0C07A5D0(sh3_t *c)
{
	LOCALS;
L_0C07A5D0: BLKS(0x0C07A5D0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07A5D2u, 1);  /* 0C07A5D0 mov.l Rm,@-Rn */
	r7 = 0x50u;  /* 0C07A5D2 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07A5D6u, 2);  /* 0C07A5D4 mov.l Rm,@-Rn */
	r5 = (u32)(s32)(s16)r5;  /* 0C07A5D6 exts.w Rm,Rn */
	r3 = 0x2800u; UPD(0x0C07A5DAu, 2);  /* 0C07A5D8 mov.w @(disp,pc),Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C07A5DA exts.w Rm,Rn */
	IF(0x0C07A5DCu); MACL = r9 * r3;  /* 0C07A5DC mul.l Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07A5E0u, 4);  /* 0C07A5DE mov.l Rm,@-Rn */
	IF(0x0C07A5E0u); r3 = MACL;  /* 0C07A5E0 sts macl,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07A5E4u, 2);  /* 0C07A5E2 mov.l Rm,@-Rn */
	IF(0x0C07A5E4u); MACL = r5 * r7;  /* 0C07A5E4 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07A5E8u, 3);  /* 0C07A5E6 mov.l Rm,@-Rn */
	IF(0x0C07A5E8u); r6 = MACL;  /* 0C07A5E8 sts macl,Rn */
	r0 = 0xC229004u; UPD(0x0C07A5ECu, 2);  /* 0C07A5EA mov.l @(disp,pc),Rn */
	r3 += r6;  /* 0C07A5EC add Rm,Rn */
	IF(0x0C07A5EEu); r15 -= 4; W32(r15, PR); UPD(0x0C07A5F0u, 2);  /* 0C07A5EE sts.l pr,@-Rn */
	r3 += r0;  /* 0C07A5F0 add Rm,Rn */
	r0 = R32(r3 + 0x24u); UPD(0x0C07A5F4u, 2);  /* 0C07A5F2 mov.l @(disp,Rm),Rn */
	r14 = r15;  /* 0C07A5F4 mov Rm,Rn */
	r6 = R32(r3 + 0x28u); UPD(0x0C07A5F8u, 2);  /* 0C07A5F6 mov.l @(disp,Rm),Rn */
	r4 = R32(r3 + 0x2Cu); UPD(0x0C07A5FAu, 1);  /* 0C07A5F8 mov.l @(disp,Rm),Rn */
	r2 = R32(r3 + 0x30u); UPD(0x0C07A5FCu, 1);  /* 0C07A5FA mov.l @(disp,Rm),Rn */
	r0 += r4;  /* 0C07A5FC add Rm,Rn */
	r7 = 0xFF600000u; UPD(0x0C07A600u, 2);  /* 0C07A5FE mov.l @(disp,pc),Rn */
	r6 += r2;  /* 0C07A600 add Rm,Rn */
	r7 += r0;  /* 0C07A602 add Rm,Rn */
	W32(r3 + 0x24u, r0); UPD(0x0C07A606u, 3);  /* 0C07A604 mov.l Rm,@(disp,Rn) */
	IF(0x0C07A606u); T = (s32)r7 >= 0;  /* 0C07A606 cmp/pz Rn */
	{ u32 c_ = T; W32(r3 + 0x28u, r6); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C07A610u, 4); goto L_0C07A610; } UPD(0x0C07A60Cu, 1); goto L_0C07A60C; }  /* 0C07A608 bt/s */
L_0C07A60C: BLKS(0x0C07A60Cu);
	{ r7 = 0u - r7; /* slot neg Rm,Rn */ UPD(0x0C07A790u, 3); goto L_0C07A790; }  /* 0C07A60C bra */
L_0C07A610: BLKS(0x0C07A610u);
	r8 = 0xB00000u; UPD(0x0C07A612u, 1);  /* 0C07A610 mov.l @(disp,pc),Rn */
	T = (s32)r7 > (s32)r8;  /* 0C07A612 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C07A62Eu, 4); goto L_0C07A62E; }  /* 0C07A614 bt */
L_0C07A616: BLKS(0x0C07A616u);
	r2 = 0xC3C4048u; UPD(0x0C07A618u, 1);  /* 0C07A616 mov.l @(disp,pc),Rn */
	r11 = R32(r2); UPD(0x0C07A61Au, 1);  /* 0C07A618 mov.l @Rm,Rn */
	r10 = 0xFF880000u; UPD(0x0C07A61Cu, 1);  /* 0C07A61A mov.l @(disp,pc),Rn */
	r2 = r6;  /* 0C07A61C mov Rm,Rn */
	r2 -= r11;  /* 0C07A61E sub Rm,Rn */
	r2 += r10;  /* 0C07A620 add Rm,Rn */
	IF(0x0C07A622u); T = (s32)r2 >= 0;  /* 0C07A622 cmp/pz Rn */
	if (T) { UPD(0x0C07A628u, 7); goto L_0C07A628; }  /* 0C07A624 bt */
L_0C07A626: BLKS(0x0C07A626u);
	r2 = 0u - r2;  /* 0C07A626 neg Rm,Rn */
	UPD(0x0C07A628u, 1);
L_0C07A628: BLKS(0x0C07A628u);
	r4 = 0x880000u; UPD(0x0C07A62Au, 1);  /* 0C07A628 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r4;  /* 0C07A62A cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C07A650u, 4); goto L_0C07A650; }  /* 0C07A62C bf */
L_0C07A62E: BLKS(0x0C07A62Eu);
	r5 = 0x0u;  /* 0C07A62E mov #imm,Rn */
	W32(r3, r5); UPD(0x0C07A632u, 2);  /* 0C07A630 mov.l Rm,@Rn */
L_0C07A632: BLKS(0x0C07A632u);
	r15 = r14;  /* 0C07A632 mov Rm,Rn */
	IF(0x0C07A634u); PR = R32(r15); r15 += 4; UPD(0x0C07A636u, 2);  /* 0C07A634 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07A638u, 1);  /* 0C07A636 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07A63Au, 1);  /* 0C07A638 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07A63Cu, 1);  /* 0C07A63A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07A63Eu, 1);  /* 0C07A63C mov.l @Rm+,Rn */
	IF(0x0C07A63Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07A63E rts */
L_0C07A650: BLKS(0x0C07A650u);
	r2 = R32(r3 + 0xCu); UPD(0x0C07A652u, 1);  /* 0C07A650 mov.l @(disp,Rm),Rn */
	r0 = 0x7u;  /* 0C07A652 mov #imm,Rn */
	T = r2 > r0;  /* 0C07A654 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C07A632u, 5); goto L_0C07A632; }  /* 0C07A656 bt */
L_0C07A658: BLKS(0x0C07A658u);
	r0 = 0xC07A67Cu;  /* 0C07A658 mova @(disp,pc),r0 */
	IF(0x0C07A65Au); r6 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C07A65Cu, 2);  /* 0C07A65A mov.b @(r0,Rm),Rn */
	r6 = r6 & 0xFF;  /* 0C07A65C extu.b Rm,Rn */
	IF(0x0C07A65Eu); { u32 tv_ = (r6 + 0x0C07A662u); u32 t_ = PHYS(tv_); IF(0x0C07A660u); ; /* slot nop */ JRGN(tv_); UPD(t_, 4); switch (t_) { case 0x0C07A690u: goto L_0C07A690; case 0x0C07A6D0u: goto L_0C07A6D0; case 0x0C07A720u: goto L_0C07A720; default: JUMPD(tv_); } }  /* 0C07A65E braf Rn */
L_0C07A690: BLKS(0x0C07A690u);
	r3 = 0x2800u; UPD(0x0C07A692u, 1);  /* 0C07A690 mov.w @(disp,pc),Rn */
	r2 = 0x50u;  /* 0C07A692 mov #imm,Rn */
	IF(0x0C07A694u); MACL = r9 * r3;  /* 0C07A694 mul.l Rm,Rn */
	r8 = 0xC229004u; UPD(0x0C07A698u, 4);  /* 0C07A696 mov.l @(disp,pc),Rn */
	IF(0x0C07A698u); r3 = MACL;  /* 0C07A698 sts macl,Rn */
	IF(0x0C07A69Au); MACL = r5 * r2;  /* 0C07A69A mul.l Rm,Rn */
	IF(0x0C07A69Cu); r11 = MACL;  /* 0C07A69C sts macl,Rn */
	r3 += r11;  /* 0C07A69E add Rm,Rn */
	r3 += r8;  /* 0C07A6A0 add Rm,Rn */
	r8 = r3;  /* 0C07A6A2 mov Rm,Rn */
	r8 += 0x48u;  /* 0C07A6A4 add #imm,Rn */
	r10 = (u32)(s32)(s8)R8(r8); UPD(0x0C07A6A8u, 9);  /* 0C07A6A6 mov.b @Rm,Rn */
	r1 = r3;  /* 0C07A6A8 mov Rm,Rn */
	r1 += 0x49u;  /* 0C07A6AA add #imm,Rn */
	r10 += 0x1u;  /* 0C07A6AC add #imm,Rn */
	r7 = (u32)(s32)(s8)R8(r1); UPD(0x0C07A6B0u, 4);  /* 0C07A6AE mov.b @Rm,Rn */
	W8(r8, r10); UPD(0x0C07A6B2u, 1);  /* 0C07A6B0 mov.b Rm,@Rn */
	r7 += 0xFFFFFFFFu;  /* 0C07A6B2 add #imm,Rn */
	r10 = r7 & 0xFF;  /* 0C07A6B4 extu.b Rm,Rn */
	T = (r10 & r10) == 0;  /* 0C07A6B6 tst Rm,Rn */
	{ u32 c_ = !T; W8(r1, r7); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C07A632u, 6); goto L_0C07A632; } UPD(0x0C07A6BCu, 1); goto L_0C07A6BC; }  /* 0C07A6B8 bf/s */
L_0C07A6BC: BLKS(0x0C07A6BCu);
	r4 = 0x4u;  /* 0C07A6BC mov #imm,Rn */
	W32(r3 + 0xCu, r4); UPD(0x0C07A6C0u, 2);  /* 0C07A6BE mov.l Rm,@(disp,Rn) */
	r4 = r9;  /* 0C07A6C0 mov Rm,Rn */
	r9 = 0xC079EF0u; UPD(0x0C07A6C4u, 2);  /* 0C07A6C2 mov.l @(disp,pc),Rn */
	IF(0x0C07A6C4u); { u32 t_ = r9; PR = 0x0C07A6C8u; IF(0x0C07A6C6u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C079EF0, 0x0C079EF0u, 0x0C07A6C8u); }  /* 0C07A6C4 jsr @Rn */
L_0C07A6C8: BLKS(0x0C07A6C8u);
	{ W8(r8, r10); /* slot mov.b Rm,@Rn */ UPD(0x0C07A632u, 3); goto L_0C07A632; }  /* 0C07A6C8 bra */
L_0C07A6D0: BLKS(0x0C07A6D0u);
	r7 = 0x2800u; UPD(0x0C07A6D2u, 1);  /* 0C07A6D0 mov.w @(disp,pc),Rn */
	r0 = 0x50u;  /* 0C07A6D2 mov #imm,Rn */
	IF(0x0C07A6D4u); MACL = r9 * r7;  /* 0C07A6D4 mul.l Rm,Rn */
	r4 = 0xC229004u; UPD(0x0C07A6D8u, 4);  /* 0C07A6D6 mov.l @(disp,pc),Rn */
	r10 = 0xFFFFFFF8u;  /* 0C07A6D8 mov #imm,Rn */
	IF(0x0C07A6DAu); r7 = MACL;  /* 0C07A6DA sts macl,Rn */
	IF(0x0C07A6DCu); MACL = r5 * r0;  /* 0C07A6DC mul.l Rm,Rn */
	r8 = 0xE0u; UPD(0x0C07A6E0u, 5);  /* 0C07A6DE mov.w @(disp,pc),Rn */
	IF(0x0C07A6E0u); r6 = MACL;  /* 0C07A6E0 sts macl,Rn */
	r7 += r6;  /* 0C07A6E2 add Rm,Rn */
	r7 += r4;  /* 0C07A6E4 add Rm,Rn */
	r3 = R32(r7 + 0x2Cu); UPD(0x0C07A6E8u, 4);  /* 0C07A6E6 mov.l @(disp,Rm),Rn */
	IF(0x0C07A6E8u); MACL = r3 * r8;  /* 0C07A6E8 mul.l Rm,Rn */
	r11 = R32(r7 + 0x30u); UPD(0x0C07A6ECu, 3);  /* 0C07A6EA mov.l @(disp,Rm),Rn */
	IF(0x0C07A6ECu); r2 = MACL;  /* 0C07A6EC sts macl,Rn */
	IF(0x0C07A6EEu); MACL = r11 * r8;  /* 0C07A6EE mul.l Rm,Rn */
	IF(0x0C07A6F0u); ARG0(0x42ACu); { s32 s_ = (s32)r10; if (s_ >= 0) r2 <<= (s_ & 31); else if ((s_ & 31) == 0) r2 = (u32)((s32)r2 >> 31); else r2 = (u32)((s32)r2 >> ((~s_ & 31) + 1)); }  /* 0C07A6F0 shad Rm,Rn */
	IF(0x0C07A6F2u); r0 = MACL;  /* 0C07A6F2 sts macl,Rn */
	r8 = r7;  /* 0C07A6F4 mov Rm,Rn */
	IF(0x0C07A6F6u); ARG0(0x40ACu); { s32 s_ = (s32)r10; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = (u32)((s32)r0 >> 31); else r0 = (u32)((s32)r0 >> ((~s_ & 31) + 1)); }  /* 0C07A6F6 shad Rm,Rn */
	r8 += 0x48u;  /* 0C07A6F8 add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r8); UPD(0x0C07A6FCu, 9);  /* 0C07A6FA mov.b @Rm,Rn */
	W32(r7 + 0x30u, r0); UPD(0x0C07A6FEu, 1);  /* 0C07A6FC mov.l Rm,@(disp,Rn) */
	r6 += 0x1u;  /* 0C07A6FE add #imm,Rn */
	r0 = r6 & 0xFF;  /* 0C07A700 extu.b Rm,Rn */
	W32(r7 + 0x2Cu, r2); UPD(0x0C07A704u, 3);  /* 0C07A702 mov.l Rm,@(disp,Rn) */
	T = r0 == 0x4u;  /* 0C07A704 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r8, r6); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C07A632u, 4); goto L_0C07A632; } UPD(0x0C07A70Au, 1); goto L_0C07A70A; }  /* 0C07A706 bf/s */
L_0C07A70A: BLKS(0x0C07A70Au);
	r4 = r9;  /* 0C07A70A mov Rm,Rn */
	r10 = R32(r7 + 0xCu); UPD(0x0C07A70Eu, 2);  /* 0C07A70C mov.l @(disp,Rm),Rn */
	r9 = 0xC079EF0u; UPD(0x0C07A710u, 1);  /* 0C07A70E mov.l @(disp,pc),Rn */
	r10 += 0x1u;  /* 0C07A710 add #imm,Rn */
	IF(0x0C07A712u); { u32 t_ = r9; PR = 0x0C07A716u; W32(r7 + 0xCu, r10); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C079EF0, 0x0C079EF0u, 0x0C07A716u); }  /* 0C07A712 jsr @Rn */
L_0C07A716: BLKS(0x0C07A716u);
	r5 = 0x0u;  /* 0C07A716 mov #imm,Rn */
	W8(r8, r5); UPD(0x0C07A71Au, 2);  /* 0C07A718 mov.b Rm,@Rn */
L_0C07A71A: BLKS(0x0C07A71Au);
	{ IF(0x0C07A71Cu); ; /* slot nop */ UPD(0x0C07A632u, 3); goto L_0C07A632; }  /* 0C07A71A bra */
L_0C07A720: BLKS(0x0C07A720u);
	r10 = 0x2800u; UPD(0x0C07A722u, 1);  /* 0C07A720 mov.w @(disp,pc),Rn */
	r8 = 0x50u;  /* 0C07A722 mov #imm,Rn */
	IF(0x0C07A724u); MACL = r9 * r10;  /* 0C07A724 mul.l Rm,Rn */
	r0 = 0xC229004u; UPD(0x0C07A728u, 4);  /* 0C07A726 mov.l @(disp,pc),Rn */
	r11 = 0xFFFFFFF8u;  /* 0C07A728 mov #imm,Rn */
	IF(0x0C07A72Au); r10 = MACL;  /* 0C07A72A sts macl,Rn */
	IF(0x0C07A72Cu); MACL = r5 * r8;  /* 0C07A72C mul.l Rm,Rn */
	r2 = 0xE0u; UPD(0x0C07A730u, 5);  /* 0C07A72E mov.w @(disp,pc),Rn */
	IF(0x0C07A730u); r7 = MACL;  /* 0C07A730 sts macl,Rn */
	r10 += r7;  /* 0C07A732 add Rm,Rn */
	r10 += r0;  /* 0C07A734 add Rm,Rn */
	r6 = R32(r10 + 0x2Cu); UPD(0x0C07A738u, 4);  /* 0C07A736 mov.l @(disp,Rm),Rn */
	IF(0x0C07A738u); MACL = r6 * r2;  /* 0C07A738 mul.l Rm,Rn */
	r3 = R32(r10 + 0x30u); UPD(0x0C07A73Cu, 3);  /* 0C07A73A mov.l @(disp,Rm),Rn */
	IF(0x0C07A73Cu); r4 = MACL;  /* 0C07A73C sts macl,Rn */
	IF(0x0C07A73Eu); MACL = r3 * r2;  /* 0C07A73E mul.l Rm,Rn */
	IF(0x0C07A740u); ARG0(0x44BCu); { s32 s_ = (s32)r11; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = (u32)((s32)r4 >> 31); else r4 = (u32)((s32)r4 >> ((~s_ & 31) + 1)); }  /* 0C07A740 shad Rm,Rn */
	IF(0x0C07A742u); r8 = MACL;  /* 0C07A742 sts macl,Rn */
	IF(0x0C07A744u); ARG0(0x48BCu); { s32 s_ = (s32)r11; if (s_ >= 0) r8 <<= (s_ & 31); else if ((s_ & 31) == 0) r8 = (u32)((s32)r8 >> 31); else r8 = (u32)((s32)r8 >> ((~s_ & 31) + 1)); }  /* 0C07A744 shad Rm,Rn */
	r11 = r10;  /* 0C07A746 mov Rm,Rn */
	r11 += 0x48u;  /* 0C07A748 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r11); UPD(0x0C07A74Cu, 9);  /* 0C07A74A mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C07A74C add #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C07A74E extu.b Rm,Rn */
	W32(r10 + 0x2Cu, r4); UPD(0x0C07A752u, 3);  /* 0C07A750 mov.l Rm,@(disp,Rn) */
	T = r0 == 0x4u;  /* 0C07A752 cmp/eq #imm,r0 */
	W32(r10 + 0x30u, r8); UPD(0x0C07A756u, 2);  /* 0C07A754 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = !T; W8(r11, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C07A71Au, 3); goto L_0C07A71A; } UPD(0x0C07A75Au, 1); goto L_0C07A75A; }  /* 0C07A756 bf/s */
L_0C07A75A: BLKS(0x0C07A75Au);
	r9 += 0x40u;  /* 0C07A75A add #imm,Rn */
	W32(r10 + 0x8u, r9); UPD(0x0C07A75Eu, 2);  /* 0C07A75C mov.l Rm,@(disp,Rn) */
	r8 = 0x0u;  /* 0C07A75E mov #imm,Rn */
	r2 = 0xC079E80u; UPD(0x0C07A762u, 2);  /* 0C07A760 mov.l @(disp,pc),Rn */
	r9 += 0xFFFFFFC0u;  /* 0C07A762 add #imm,Rn */
	r4 = r9;  /* 0C07A764 mov Rm,Rn */
	W32(r10 + 0x30u, r8); UPD(0x0C07A768u, 3);  /* 0C07A766 mov.l Rm,@(disp,Rn) */
	W32(r10 + 0x2Cu, r8); UPD(0x0C07A76Au, 1);  /* 0C07A768 mov.l Rm,@(disp,Rn) */
	W32(r10 + 0x4u, r8); UPD(0x0C07A76Cu, 1);  /* 0C07A76A mov.l Rm,@(disp,Rn) */
	IF(0x0C07A76Cu); { u32 t_ = r2; PR = 0x0C07A770u; W32(r10 + 0xCu, r8); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C079E80, 0x0C079E80u, 0x0C07A770u); }  /* 0C07A76C jsr @Rn */
L_0C07A770: BLKS(0x0C07A770u);
	r5 = 0x204B0B0u; UPD(0x0C07A772u, 1);  /* 0C07A770 mov.l @(disp,pc),Rn */
	r4 = r9;  /* 0C07A772 mov Rm,Rn */
	r9 = 0xC0C2020u; UPD(0x0C07A776u, 2);  /* 0C07A774 mov.l @(disp,pc),Rn */
	W32(r10 + 0x3Cu, r5); UPD(0x0C07A778u, 1);  /* 0C07A776 mov.l Rm,@(disp,Rn) */
	W8(r11, r8); UPD(0x0C07A77Au, 1);  /* 0C07A778 mov.b Rm,@Rn */
	IF(0x0C07A77Au); { u32 t_ = r9; PR = 0x0C07A77Eu; r5 = 0x54u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2020, 0x0C0C2020u, 0x0C07A77Eu); }  /* 0C07A77A jsr @Rn */
L_0C07A77E: BLKS(0x0C07A77Eu);
	{ IF(0x0C07A780u); ; /* slot nop */ UPD(0x0C07A632u, 3); goto L_0C07A632; }  /* 0C07A77E bra */
L_0C07A790: BLKS(0x0C07A790u);
	{ IF(0x0C07A792u); ; /* slot nop */ UPD(0x0C07A610u, 3); goto L_0C07A610; }  /* 0C07A790 bra */
}

void blk_f_0C07A7B0(sh3_t *c)
{
	LOCALS;
L_0C07A7B0: BLKS(0x0C07A7B0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07A7B2u, 1);  /* 0C07A7B0 mov.l Rm,@-Rn */
	r5 = 0x8u;  /* 0C07A7B2 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07A7B6u, 2);  /* 0C07A7B4 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07A7B8u, 1);  /* 0C07A7B6 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C07A7B8 exts.w Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07A7BCu, 2);  /* 0C07A7BA mov.l Rm,@-Rn */
	r4 = r9;  /* 0C07A7BC mov Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07A7C0u, 2);  /* 0C07A7BE mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C07A7C2u, 1);  /* 0C07A7C0 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07A7C4u, 1);  /* 0C07A7C2 mov.l Rm,@-Rn */
	r8 = 0xC079F80u; UPD(0x0C07A7C6u, 1);  /* 0C07A7C4 mov.l @(disp,pc),Rn */
	IF(0x0C07A7C6u); r15 -= 4; W32(r15, PR); UPD(0x0C07A7C8u, 1);  /* 0C07A7C6 sts.l pr,@-Rn */
	r15 += 0xFFFFFFF4u;  /* 0C07A7C8 add #imm,Rn */
	IF(0x0C07A7CAu); { u32 t_ = r8; PR = 0x0C07A7CEu; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C079F80, 0x0C079F80u, 0x0C07A7CEu); }  /* 0C07A7CA jsr @Rn */
L_0C07A7CE: BLKS(0x0C07A7CEu);
	T = (r0 & r0) == 0;  /* 0C07A7CE tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07A7D8u, 4); goto L_0C07A7D8; } goto L_0C07A7D4; }  /* 0C07A7D0 bf/s */
L_0C07A7D4: BLKS(0x0C07A7D4u);
	{ r14 += 0xCu; /* slot add #imm,Rn */ UPD(0x0C07A8D0u, 4); goto L_0C07A8D0; }  /* 0C07A7D4 bra */
L_0C07A7D8: BLKS(0x0C07A7D8u);
	r2 = 0xC28EDFCu; UPD(0x0C07A7DAu, 1);  /* 0C07A7D8 mov.l @(disp,pc),Rn */
	W32(r14, r2); UPD(0x0C07A7DCu, 1);  /* 0C07A7DA mov.l Rm,@Rn */
	W32(r14 + 0x4u, r0); UPD(0x0C07A7DEu, 1);  /* 0C07A7DC mov.l Rm,@(disp,Rn) */
	IF(0x0C07A7DEu); ;  /* 0C07A7DE nop */
	UPD(0x0C07A7E0u, 1);
L_0C07A7E0: BLKS(0x0C07A7E0u);
	r7 = 0x2A0u; UPD(0x0C07A7E2u, 1);  /* 0C07A7E0 mov.w @(disp,pc),Rn */
	r3 = 0xAu;  /* 0C07A7E2 mov #imm,Rn */
	IF(0x0C07A7E4u); MACL = r9 * r7;  /* 0C07A7E4 mul.l Rm,Rn */
	r6 = 0xC29D1D8u; UPD(0x0C07A7E8u, 4);  /* 0C07A7E6 mov.l @(disp,pc),Rn */
	IF(0x0C07A7E8u); r0 = MACL;  /* 0C07A7E8 sts macl,Rn */
	r5 = 0x266u; UPD(0x0C07A7ECu, 2);  /* 0C07A7EA mov.w @(disp,pc),Rn */
	r0 += r6;  /* 0C07A7EC add Rm,Rn */
	IF(0x0C07A7EEu); r4 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C07A7F0u, 2);  /* 0C07A7EE mov.b @(r0,Rm),Rn */
	r2 = r4 & 0xFF;  /* 0C07A7F0 extu.b Rm,Rn */
	T = r2 > r3;  /* 0C07A7F2 cmp/hi Rm,Rn */
	{ u32 c_ = T; r6 = 0xAu; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07A7FAu, 5); goto L_0C07A7FA; } goto L_0C07A7F8; }  /* 0C07A7F4 bt/s */
L_0C07A7F8: BLKS(0x0C07A7F8u);
	r6 = r2;  /* 0C07A7F8 mov Rm,Rn */
	UPD(0x0C07A7FAu, 2);
L_0C07A7FA: BLKS(0x0C07A7FAu);
	r1 = 0x2A0u; UPD(0x0C07A7FCu, 1);  /* 0C07A7FA mov.w @(disp,pc),Rn */
	IF(0x0C07A7FCu); MACL = r9 * r1;  /* 0C07A7FC mul.l Rm,Rn */
	r10 = 0xC29D1D8u; UPD(0x0C07A800u, 3);  /* 0C07A7FE mov.l @(disp,pc),Rn */
	IF(0x0C07A800u); r8 = MACL;  /* 0C07A800 sts macl,Rn */
	r13 = 0x266u; UPD(0x0C07A804u, 2);  /* 0C07A802 mov.w @(disp,pc),Rn */
	r10 += r8;  /* 0C07A804 add Rm,Rn */
	r10 += r13;  /* 0C07A806 add Rm,Rn */
	r12 = (u32)(s32)(s8)R8(r10); UPD(0x0C07A80Au, 3);  /* 0C07A808 mov.b @Rm,Rn */
	r13 = r6;  /* 0C07A80A mov Rm,Rn */
	r12 -= r6;  /* 0C07A80C sub Rm,Rn */
	W8(r10, r12); UPD(0x0C07A810u, 3);  /* 0C07A80E mov.b Rm,@Rn */
	r13 += 0xFFFFFFFFu;  /* 0C07A810 add #imm,Rn */
	r11 = R32(r14 + 0x4u); UPD(0x0C07A814u, 2);  /* 0C07A812 mov.l @(disp,Rm),Rn */
	r10 = 0x0u;  /* 0C07A814 mov #imm,Rn */
	r11 += r11;  /* 0C07A816 add Rm,Rn */
	W32(r14 + 0x8u, r11); UPD(0x0C07A81Au, 3);  /* 0C07A818 mov.l Rm,@(disp,Rn) */
	r12 = 0xC29D1D8u; UPD(0x0C07A81Cu, 1);  /* 0C07A81A mov.l @(disp,pc),Rn */
	r11 = 0x0u;  /* 0C07A81C mov #imm,Rn */
	r12 += r8;  /* 0C07A81E add Rm,Rn */
	UPD(0x0C07A820u, 2);
L_0C07A820: BLKS(0x0C07A820u);
	r8 = 0x2800u; UPD(0x0C07A822u, 1);  /* 0C07A820 mov.w @(disp,pc),Rn */
	r6 = 0x50u;  /* 0C07A822 mov #imm,Rn */
	r4 = R32(r14); UPD(0x0C07A826u, 2);  /* 0C07A824 mov.l @Rm,Rn */
	IF(0x0C07A826u); MACL = r9 * r8;  /* 0C07A826 mul.l Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r4); r4 += 2; r5 = v_; } UPD(0x0C07A82Au, 3);  /* 0C07A828 mov.w @Rm+,Rn */
	r7 = 0x5u;  /* 0C07A82A mov #imm,Rn */
	IF(0x0C07A82Cu); r8 = MACL;  /* 0C07A82C sts macl,Rn */
	IF(0x0C07A82Eu); MACL = r5 * r6;  /* 0C07A82E mul.l Rm,Rn */
	r3 = 0xC229004u; UPD(0x0C07A832u, 5);  /* 0C07A830 mov.l @(disp,pc),Rn */
	IF(0x0C07A832u); r0 = MACL;  /* 0C07A832 sts macl,Rn */
	r8 += r0;  /* 0C07A834 add Rm,Rn */
	W32(r14, r4); UPD(0x0C07A838u, 3);  /* 0C07A836 mov.l Rm,@Rn */
	r8 += r3;  /* 0C07A838 add Rm,Rn */
	r0 = R32(r14 + 0x8u); UPD(0x0C07A83Cu, 2);  /* 0C07A83A mov.l @(disp,Rm),Rn */
	r2 = 0xCD000000u; UPD(0x0C07A83Eu, 1);  /* 0C07A83C mov.l @(disp,pc),Rn */
	r0 += r10;  /* 0C07A83E add Rm,Rn */
	r4 = 0xC186820u; UPD(0x0C07A842u, 2);  /* 0C07A840 mov.l @(disp,pc),Rn */
	r0 += r0;  /* 0C07A842 add Rm,Rn */
	W32(r8, r2); UPD(0x0C07A846u, 2);  /* 0C07A844 mov.l Rm,@Rn */
	W32(r8 + 0x4u, r7); UPD(0x0C07A848u, 1);  /* 0C07A846 mov.l Rm,@(disp,Rn) */
	IF(0x0C07A848u); r0 = (u32)(s32)(s16)R16(r0 + r4); UPD(0x0C07A84Au, 1);  /* 0C07A848 mov.w @(r0,Rm),Rn */
	r8 += 0x44u;  /* 0C07A84A add #imm,Rn */
	W16(r8, r0); UPD(0x0C07A84Eu, 2);  /* 0C07A84C mov.w Rm,@Rn */
	r4 = r9;  /* 0C07A84E mov Rm,Rn */
	r0 += 0x4u;  /* 0C07A850 add #imm,Rn */
	IF(0x0C07A852u); r0 >>= 2;  /* 0C07A852 shlr2 Rn */
	IF(0x0C07A854u); T = r0 & 1; r0 >>= 1;  /* 0C07A854 shlr Rn */
	r6 = 0xC079E80u; UPD(0x0C07A858u, 5);  /* 0C07A856 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFBCu;  /* 0C07A858 add #imm,Rn */
	r0 &= 0x3Fu;  /* 0C07A85A and #imm,r0 */
	W32(r8 + 0x8u, r0); UPD(0x0C07A85Eu, 3);  /* 0C07A85C mov.l Rm,@(disp,Rn) */
	IF(0x0C07A85Eu); { u32 t_ = r6; PR = 0x0C07A862u; W32(r8 + 0xCu, r11); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C079E80, 0x0C079E80u, 0x0C07A862u); }  /* 0C07A85E jsr @Rn */
L_0C07A862: BLKS(0x0C07A862u);
	r0 = R32(r12 + 0x10u); UPD(0x0C07A864u, 1);  /* 0C07A862 mov.l @(disp,Rm),Rn */
	r5 = 0x14u;  /* 0C07A864 mov #imm,Rn */
	W32(r8 + 0x24u, r0); UPD(0x0C07A868u, 2);  /* 0C07A866 mov.l Rm,@(disp,Rn) */
	r2 = 0xC186818u; UPD(0x0C07A86Au, 1);  /* 0C07A868 mov.l @(disp,pc),Rn */
	r0 = r10;  /* 0C07A86A mov Rm,Rn */
	IF(0x0C07A86Cu); r0 <<= 2;  /* 0C07A86C shll2 Rn */
	IF(0x0C07A86Eu); r7 = R32(r0 + r2); UPD(0x0C07A870u, 3);  /* 0C07A86E mov.l @(r0,Rm),Rn */
	r6 = R32(r12 + 0x14u); UPD(0x0C07A872u, 1);  /* 0C07A870 mov.l @(disp,Rm),Rn */
	r2 = r10;  /* 0C07A872 mov Rm,Rn */
	r6 += r7;  /* 0C07A874 add Rm,Rn */
	W32(r8 + 0x28u, r6); UPD(0x0C07A878u, 3);  /* 0C07A876 mov.l Rm,@(disp,Rn) */
	r2 += 0x1u;  /* 0C07A878 add #imm,Rn */
	r8 += 0x48u;  /* 0C07A87A add #imm,Rn */
	W8(r8, r11); UPD(0x0C07A87Eu, 3);  /* 0C07A87C mov.b Rm,@Rn */
	r10 = (u32)(s32)(s16)r2;  /* 0C07A87E exts.w Rm,Rn */
	r8 += 0x1u;  /* 0C07A880 add #imm,Rn */
	W8(r8, r13); UPD(0x0C07A884u, 3);  /* 0C07A882 mov.b Rm,@Rn */
	r0 = 0x1u;  /* 0C07A884 mov #imm,Rn */
	r8 += 0x1u;  /* 0C07A886 add #imm,Rn */
	W8(r8, r5); UPD(0x0C07A88Au, 3);  /* 0C07A888 mov.b Rm,@Rn */
	T = (s32)r10 > (s32)r0;  /* 0C07A88A cmp/gt Rm,Rn */
	r3 = 0x2A0u; UPD(0x0C07A88Eu, 2);  /* 0C07A88C mov.w @(disp,pc),Rn */
	r8 += 0xFFFFFFB6u;  /* 0C07A88E add #imm,Rn */
	W32(r8 + 0x3Cu, r11); UPD(0x0C07A892u, 2);  /* 0C07A890 mov.l Rm,@(disp,Rn) */
	IF(0x0C07A892u); MACL = r9 * r3;  /* 0C07A892 mul.l Rm,Rn */
	r4 = 0x808080u; UPD(0x0C07A896u, 3);  /* 0C07A894 mov.l @(disp,pc),Rn */
	r8 += 0x40u;  /* 0C07A896 add #imm,Rn */
	W32(r8, r4); UPD(0x0C07A89Au, 2);  /* 0C07A898 mov.l Rm,@Rn */
	{ u32 c_ = !T; IF(0x0C07A89Cu); r3 = MACL; /* slot sts macl,Rn */ if (c_) { UPD(0x0C07A820u, 3); goto L_0C07A820; } goto L_0C07A89E; }  /* 0C07A89A bf/s */
L_0C07A89E: BLKS(0x0C07A89Eu);
	r13 = R32(r14 + 0x4u); UPD(0x0C07A8A0u, 2);  /* 0C07A89E mov.l @(disp,Rm),Rn */
	r13 += 0x1u;  /* 0C07A8A0 add #imm,Rn */
	r12 = (u32)(s32)(s16)r13;  /* 0C07A8A2 exts.w Rm,Rn */
	r10 = 0xC29D1D8u; UPD(0x0C07A8A6u, 3);  /* 0C07A8A4 mov.l @(disp,pc),Rn */
	W32(r14 + 0x4u, r12); UPD(0x0C07A8A8u, 1);  /* 0C07A8A6 mov.l Rm,@(disp,Rn) */
	r10 += r3;  /* 0C07A8A8 add Rm,Rn */
	r0 = 0x266u; UPD(0x0C07A8ACu, 2);  /* 0C07A8AA mov.w @(disp,pc),Rn */
	IF(0x0C07A8ACu); r11 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C07A8AEu, 1);  /* 0C07A8AC mov.b @(r0,Rm),Rn */
	T = (r11 & r11) == 0;  /* 0C07A8AE tst Rm,Rn */
	{ u32 c_ = !T; r4 = r9; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07A7E0u, 4); goto L_0C07A7E0; } goto L_0C07A8B4; }  /* 0C07A8B0 bf/s */
L_0C07A8B4: BLKS(0x0C07A8B4u);
	r7 = 0xC0C20A0u; UPD(0x0C07A8B6u, 2);  /* 0C07A8B4 mov.l @(disp,pc),Rn */
	r5 = 0x53u;  /* 0C07A8B6 mov #imm,Rn */
	r14 += 0xCu;  /* 0C07A8B8 add #imm,Rn */
	r15 = r14;  /* 0C07A8BA mov Rm,Rn */
	IF(0x0C07A8BCu); PR = R32(r15); r15 += 4; UPD(0x0C07A8BEu, 4);  /* 0C07A8BC lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07A8C0u, 1);  /* 0C07A8BE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07A8C2u, 1);  /* 0C07A8C0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07A8C4u, 1);  /* 0C07A8C2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07A8C6u, 1);  /* 0C07A8C4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07A8C8u, 1);  /* 0C07A8C6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07A8CAu, 1);  /* 0C07A8C8 mov.l @Rm+,Rn */
	IF(0x0C07A8CAu); { u32 tv_ = r7; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0C20A0u: TAIL(blk_f_0C0C20A0); default: JUMPD(tv_); } }  /* 0C07A8CA jmp @Rn */
L_0C07A8D0: BLKS(0x0C07A8D0u);
	r15 = r14;  /* 0C07A8D0 mov Rm,Rn */
	IF(0x0C07A8D2u); PR = R32(r15); r15 += 4; UPD(0x0C07A8D4u, 2);  /* 0C07A8D2 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07A8D6u, 1);  /* 0C07A8D4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07A8D8u, 1);  /* 0C07A8D6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07A8DAu, 1);  /* 0C07A8D8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07A8DCu, 1);  /* 0C07A8DA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07A8DEu, 1);  /* 0C07A8DC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07A8E0u, 1);  /* 0C07A8DE mov.l @Rm+,Rn */
	IF(0x0C07A8E0u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07A8E0 rts */
}

void blk_f_0C07A920(sh3_t *c)
{
	LOCALS;
L_0C07A920: BLKS(0x0C07A920u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07A922u, 1);  /* 0C07A920 mov.l Rm,@-Rn */
	r5 = 0x8u;  /* 0C07A922 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07A926u, 2);  /* 0C07A924 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07A928u, 1);  /* 0C07A926 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C07A928 exts.w Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07A92Cu, 2);  /* 0C07A92A mov.l Rm,@-Rn */
	r4 = r9;  /* 0C07A92C mov Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07A930u, 2);  /* 0C07A92E mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C07A932u, 1);  /* 0C07A930 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07A934u, 1);  /* 0C07A932 mov.l Rm,@-Rn */
	r8 = 0xC079F80u; UPD(0x0C07A936u, 1);  /* 0C07A934 mov.l @(disp,pc),Rn */
	IF(0x0C07A936u); r15 -= 4; W32(r15, PR); UPD(0x0C07A938u, 1);  /* 0C07A936 sts.l pr,@-Rn */
	r15 += 0xFFFFFFF0u;  /* 0C07A938 add #imm,Rn */
	IF(0x0C07A93Au); { u32 t_ = r8; PR = 0x0C07A93Eu; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C079F80, 0x0C079F80u, 0x0C07A93Eu); }  /* 0C07A93A jsr @Rn */
L_0C07A93E: BLKS(0x0C07A93Eu);
	T = (r0 & r0) == 0;  /* 0C07A93E tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07A948u, 4); goto L_0C07A948; } goto L_0C07A944; }  /* 0C07A940 bf/s */
L_0C07A944: BLKS(0x0C07A944u);
	{ r14 += 0x10u; /* slot add #imm,Rn */ UPD(0x0C07AA40u, 4); goto L_0C07AA40; }  /* 0C07A944 bra */
L_0C07A948: BLKS(0x0C07A948u);
	r1 = 0xC28EDFCu; UPD(0x0C07A94Au, 1);  /* 0C07A948 mov.l @(disp,pc),Rn */
	W32(r14, r1); UPD(0x0C07A94Cu, 1);  /* 0C07A94A mov.l Rm,@Rn */
	W32(r14 + 0x4u, r0); UPD(0x0C07A94Eu, 1);  /* 0C07A94C mov.l Rm,@(disp,Rn) */
	IF(0x0C07A94Eu); ;  /* 0C07A94E nop */
	UPD(0x0C07A950u, 1);
L_0C07A950: BLKS(0x0C07A950u);
	r6 = 0x2A0u; UPD(0x0C07A952u, 1);  /* 0C07A950 mov.w @(disp,pc),Rn */
	r3 = 0xAu;  /* 0C07A952 mov #imm,Rn */
	IF(0x0C07A954u); MACL = r9 * r6;  /* 0C07A954 mul.l Rm,Rn */
	r5 = 0xC29D1D8u; UPD(0x0C07A958u, 4);  /* 0C07A956 mov.l @(disp,pc),Rn */
	r2 = 0x266u; UPD(0x0C07A95Au, 1);  /* 0C07A958 mov.w @(disp,pc),Rn */
	IF(0x0C07A95Au); r0 = MACL;  /* 0C07A95A sts macl,Rn */
	r0 += r5;  /* 0C07A95C add Rm,Rn */
	IF(0x0C07A95Eu); r4 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C07A960u, 3);  /* 0C07A95E mov.b @(r0,Rm),Rn */
	r2 = r4 & 0xFF;  /* 0C07A960 extu.b Rm,Rn */
	T = r2 > r3;  /* 0C07A962 cmp/hi Rm,Rn */
	{ u32 c_ = T; r6 = 0xAu; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07A96Au, 5); goto L_0C07A96A; } goto L_0C07A968; }  /* 0C07A964 bt/s */
L_0C07A968: BLKS(0x0C07A968u);
	r6 = r2;  /* 0C07A968 mov Rm,Rn */
	UPD(0x0C07A96Au, 2);
L_0C07A96A: BLKS(0x0C07A96Au);
	r0 = 0x2A0u; UPD(0x0C07A96Cu, 1);  /* 0C07A96A mov.w @(disp,pc),Rn */
	IF(0x0C07A96Cu); MACL = r9 * r0;  /* 0C07A96C mul.l Rm,Rn */
	r11 = 0xC29D1D8u; UPD(0x0C07A970u, 3);  /* 0C07A96E mov.l @(disp,pc),Rn */
	IF(0x0C07A970u); r7 = MACL;  /* 0C07A970 sts macl,Rn */
	r13 = 0x266u; UPD(0x0C07A974u, 2);  /* 0C07A972 mov.w @(disp,pc),Rn */
	r11 += r7;  /* 0C07A974 add Rm,Rn */
	r11 += r13;  /* 0C07A976 add Rm,Rn */
	r12 = (u32)(s32)(s8)R8(r11); UPD(0x0C07A97Au, 3);  /* 0C07A978 mov.b @Rm,Rn */
	r13 = r6;  /* 0C07A97A mov Rm,Rn */
	r12 -= r6;  /* 0C07A97C sub Rm,Rn */
	W8(r11, r12); UPD(0x0C07A980u, 3);  /* 0C07A97E mov.b Rm,@Rn */
	r13 += 0xFFFFFFFFu;  /* 0C07A980 add #imm,Rn */
	r10 = R32(r14 + 0x4u); UPD(0x0C07A984u, 2);  /* 0C07A982 mov.l @(disp,Rm),Rn */
	r11 = 0x0u;  /* 0C07A984 mov #imm,Rn */
	r8 = R32(r14 + 0x4u); UPD(0x0C07A988u, 2);  /* 0C07A986 mov.l @(disp,Rm),Rn */
	IF(0x0C07A988u); r10 <<= 2;  /* 0C07A988 shll2 Rn */
	W32(r14 + 0xCu, r10); UPD(0x0C07A98Cu, 2);  /* 0C07A98A mov.l Rm,@(disp,Rn) */
	r8 += r8;  /* 0C07A98C add Rm,Rn */
	r12 = 0xC29D1D8u; UPD(0x0C07A990u, 2);  /* 0C07A98E mov.l @(disp,pc),Rn */
	r10 = 0x0u;  /* 0C07A990 mov #imm,Rn */
	W32(r14 + 0x8u, r8); UPD(0x0C07A994u, 2);  /* 0C07A992 mov.l Rm,@(disp,Rn) */
	r12 += r7;  /* 0C07A994 add Rm,Rn */
	IF(0x0C07A996u); ;  /* 0C07A996 nop */
	UPD(0x0C07A998u, 2);
L_0C07A998: BLKS(0x0C07A998u);
	r8 = 0x2800u; UPD(0x0C07A99Au, 1);  /* 0C07A998 mov.w @(disp,pc),Rn */
	r1 = 0x50u;  /* 0C07A99A mov #imm,Rn */
	r4 = R32(r14); UPD(0x0C07A99Eu, 2);  /* 0C07A99C mov.l @Rm,Rn */
	IF(0x0C07A99Eu); MACL = r9 * r8;  /* 0C07A99E mul.l Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r4); r4 += 2; r5 = v_; } UPD(0x0C07A9A2u, 3);  /* 0C07A9A0 mov.w @Rm+,Rn */
	r2 = 0x5u;  /* 0C07A9A2 mov #imm,Rn */
	IF(0x0C07A9A4u); r8 = MACL;  /* 0C07A9A4 sts macl,Rn */
	IF(0x0C07A9A6u); MACL = r5 * r1;  /* 0C07A9A6 mul.l Rm,Rn */
	r6 = 0xC229004u; UPD(0x0C07A9AAu, 5);  /* 0C07A9A8 mov.l @(disp,pc),Rn */
	IF(0x0C07A9AAu); r7 = MACL;  /* 0C07A9AA sts macl,Rn */
	r0 = 0xC079E80u; UPD(0x0C07A9AEu, 2);  /* 0C07A9AC mov.l @(disp,pc),Rn */
	r8 += r7;  /* 0C07A9AE add Rm,Rn */
	r3 = 0xCD000000u; UPD(0x0C07A9B2u, 2);  /* 0C07A9B0 mov.l @(disp,pc),Rn */
	r8 += r6;  /* 0C07A9B2 add Rm,Rn */
	W32(r14, r4); UPD(0x0C07A9B6u, 2);  /* 0C07A9B4 mov.l Rm,@Rn */
	W32(r8, r3); UPD(0x0C07A9B8u, 1);  /* 0C07A9B6 mov.l Rm,@Rn */
	r4 = r9;  /* 0C07A9B8 mov Rm,Rn */
	W32(r8 + 0x4u, r2); UPD(0x0C07A9BCu, 2);  /* 0C07A9BA mov.l Rm,@(disp,Rn) */
	W32(r8 + 0xCu, r10); UPD(0x0C07A9BEu, 1);  /* 0C07A9BC mov.l Rm,@(disp,Rn) */
	IF(0x0C07A9BEu); { u32 t_ = r0; PR = 0x0C07A9C2u; W32(r8 + 0x8u, r10); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C079E80, 0x0C079E80u, 0x0C07A9C2u); }  /* 0C07A9BE jsr @Rn */
L_0C07A9C2: BLKS(0x0C07A9C2u);
	r0 = R32(r14 + 0xCu); UPD(0x0C07A9C4u, 1);  /* 0C07A9C2 mov.l @(disp,Rm),Rn */
	r4 = 0xC186830u; UPD(0x0C07A9C6u, 1);  /* 0C07A9C4 mov.l @(disp,pc),Rn */
	IF(0x0C07A9C6u); r7 = R32(r0 + r4); UPD(0x0C07A9C8u, 1);  /* 0C07A9C6 mov.l @(r0,Rm),Rn */
	r6 = R32(r12 + 0x10u); UPD(0x0C07A9CAu, 1);  /* 0C07A9C8 mov.l @(disp,Rm),Rn */
	r0 = R32(r14 + 0x8u); UPD(0x0C07A9CCu, 1);  /* 0C07A9CA mov.l @(disp,Rm),Rn */
	r6 += r7;  /* 0C07A9CC add Rm,Rn */
	W32(r8 + 0x24u, r6); UPD(0x0C07A9D0u, 2);  /* 0C07A9CE mov.l Rm,@(disp,Rn) */
	r0 += r11;  /* 0C07A9D0 add Rm,Rn */
	r5 = 0xC186840u; UPD(0x0C07A9D4u, 2);  /* 0C07A9D2 mov.l @(disp,pc),Rn */
	IF(0x0C07A9D4u); r0 <<= 2;  /* 0C07A9D4 shll2 Rn */
	IF(0x0C07A9D6u); r2 = R32(r0 + r5); UPD(0x0C07A9D8u, 2);  /* 0C07A9D6 mov.l @(r0,Rm),Rn */
	r7 = 0x0u;  /* 0C07A9D8 mov #imm,Rn */
	r4 = R32(r12 + 0x14u); UPD(0x0C07A9DCu, 2);  /* 0C07A9DA mov.l @(disp,Rm),Rn */
	r6 = 0x14u;  /* 0C07A9DC mov #imm,Rn */
	r4 += r2;  /* 0C07A9DE add Rm,Rn */
	W32(r8 + 0x28u, r4); UPD(0x0C07A9E2u, 3);  /* 0C07A9E0 mov.l Rm,@(disp,Rn) */
	r2 = r11;  /* 0C07A9E2 mov Rm,Rn */
	r8 += 0x44u;  /* 0C07A9E4 add #imm,Rn */
	W16(r8, r10); UPD(0x0C07A9E8u, 3);  /* 0C07A9E6 mov.w Rm,@Rn */
	r2 += 0x1u;  /* 0C07A9E8 add #imm,Rn */
	r8 += 0x4u;  /* 0C07A9EA add #imm,Rn */
	W8(r8, r7); UPD(0x0C07A9EEu, 3);  /* 0C07A9EC mov.b Rm,@Rn */
	r11 = (u32)(s32)(s16)r2;  /* 0C07A9EE exts.w Rm,Rn */
	r8 += 0x1u;  /* 0C07A9F0 add #imm,Rn */
	W8(r8, r13); UPD(0x0C07A9F4u, 3);  /* 0C07A9F2 mov.b Rm,@Rn */
	r4 = 0x1u;  /* 0C07A9F4 mov #imm,Rn */
	r8 += 0x1u;  /* 0C07A9F6 add #imm,Rn */
	W8(r8, r6); UPD(0x0C07A9FAu, 3);  /* 0C07A9F8 mov.b Rm,@Rn */
	T = (s32)r11 > (s32)r4;  /* 0C07A9FA cmp/gt Rm,Rn */
	r8 += 0xFFFFFFB6u;  /* 0C07A9FC add #imm,Rn */
	r3 = 0x2A0u; UPD(0x0C07AA00u, 3);  /* 0C07A9FE mov.w @(disp,pc),Rn */
	W32(r8 + 0x3Cu, r10); UPD(0x0C07AA02u, 1);  /* 0C07AA00 mov.l Rm,@(disp,Rn) */
	IF(0x0C07AA02u); MACL = r9 * r3;  /* 0C07AA02 mul.l Rm,Rn */
	r5 = 0x808080u; UPD(0x0C07AA06u, 3);  /* 0C07AA04 mov.l @(disp,pc),Rn */
	r8 += 0x40u;  /* 0C07AA06 add #imm,Rn */
	{ u32 c_ = !T; W32(r8, r5); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C07A998u, 4); goto L_0C07A998; } UPD(0x0C07AA0Cu, 1); goto L_0C07AA0C; }  /* 0C07AA08 bf/s */
L_0C07AA0C: BLKS(0x0C07AA0Cu);
	r5 = R32(r14 + 0x4u); UPD(0x0C07AA0Eu, 1);  /* 0C07AA0C mov.l @(disp,Rm),Rn */
	IF(0x0C07AA0Eu); r0 = MACL;  /* 0C07AA0E sts macl,Rn */
	r5 += 0x1u;  /* 0C07AA10 add #imm,Rn */
	r13 = (u32)(s32)(s16)r5;  /* 0C07AA12 exts.w Rm,Rn */
	r12 = 0xC29D1D8u; UPD(0x0C07AA16u, 4);  /* 0C07AA14 mov.l @(disp,pc),Rn */
	W32(r14 + 0x4u, r13); UPD(0x0C07AA18u, 1);  /* 0C07AA16 mov.l Rm,@(disp,Rn) */
	r0 += r12;  /* 0C07AA18 add Rm,Rn */
	r11 = 0x266u; UPD(0x0C07AA1Cu, 2);  /* 0C07AA1A mov.w @(disp,pc),Rn */
	IF(0x0C07AA1Cu); r10 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C07AA1Eu, 1);  /* 0C07AA1C mov.b @(r0,Rm),Rn */
	T = (r10 & r10) == 0;  /* 0C07AA1E tst Rm,Rn */
	{ u32 c_ = !T; r4 = r9; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07A950u, 4); goto L_0C07A950; } goto L_0C07AA24; }  /* 0C07AA20 bf/s */
L_0C07AA24: BLKS(0x0C07AA24u);
	r0 = 0xC0C20A0u; UPD(0x0C07AA26u, 2);  /* 0C07AA24 mov.l @(disp,pc),Rn */
	r5 = 0x53u;  /* 0C07AA26 mov #imm,Rn */
	r14 += 0x10u;  /* 0C07AA28 add #imm,Rn */
	r15 = r14;  /* 0C07AA2A mov Rm,Rn */
	IF(0x0C07AA2Cu); PR = R32(r15); r15 += 4; UPD(0x0C07AA2Eu, 4);  /* 0C07AA2C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07AA30u, 1);  /* 0C07AA2E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07AA32u, 1);  /* 0C07AA30 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07AA34u, 1);  /* 0C07AA32 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07AA36u, 1);  /* 0C07AA34 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07AA38u, 1);  /* 0C07AA36 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07AA3Au, 1);  /* 0C07AA38 mov.l @Rm+,Rn */
	IF(0x0C07AA3Au); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0C20A0u: TAIL(blk_f_0C0C20A0); default: JUMPD(tv_); } }  /* 0C07AA3A jmp @Rn */
L_0C07AA40: BLKS(0x0C07AA40u);
	r15 = r14;  /* 0C07AA40 mov Rm,Rn */
	IF(0x0C07AA42u); PR = R32(r15); r15 += 4; UPD(0x0C07AA44u, 2);  /* 0C07AA42 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07AA46u, 1);  /* 0C07AA44 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07AA48u, 1);  /* 0C07AA46 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07AA4Au, 1);  /* 0C07AA48 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07AA4Cu, 1);  /* 0C07AA4A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07AA4Eu, 1);  /* 0C07AA4C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07AA50u, 1);  /* 0C07AA4E mov.l @Rm+,Rn */
	IF(0x0C07AA50u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07AA50 rts */
}

void blk_f_0C07AA90(sh3_t *c)
{
	LOCALS;
L_0C07AA90: BLKS(0x0C07AA90u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07AA92u, 1);  /* 0C07AA90 mov.l Rm,@-Rn */
	r5 = 0x2u;  /* 0C07AA92 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07AA96u, 2);  /* 0C07AA94 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07AA98u, 1);  /* 0C07AA96 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07AA9Au, 1);  /* 0C07AA98 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07AA9Cu, 1);  /* 0C07AA9A mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C07AA9C exts.w Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C07AAA0u, 2);  /* 0C07AA9E mov.l Rm,@-Rn */
	r4 = r11;  /* 0C07AAA0 mov Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07AAA4u, 2);  /* 0C07AAA2 mov.l Rm,@-Rn */
	r8 = 0xC079F80u; UPD(0x0C07AAA6u, 1);  /* 0C07AAA4 mov.l @(disp,pc),Rn */
	IF(0x0C07AAA6u); r15 -= 4; W32(r15, PR); UPD(0x0C07AAA8u, 1);  /* 0C07AAA6 sts.l pr,@-Rn */
	IF(0x0C07AAA8u); { u32 t_ = r8; PR = 0x0C07AAACu; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C079F80, 0x0C079F80u, 0x0C07AAACu); }  /* 0C07AAA8 jsr @Rn */
L_0C07AAAC: BLKS(0x0C07AAACu);
	T = (r0 & r0) == 0;  /* 0C07AAAC tst Rm,Rn */
	if (T) { UPD(0x0C07AB60u, 4); goto L_0C07AB60; }  /* 0C07AAAE bt */
L_0C07AAB0: BLKS(0x0C07AAB0u);
	r12 = 0x0u;  /* 0C07AAB0 mov #imm,Rn */
	r2 = 0x2A0u; UPD(0x0C07AAB4u, 2);  /* 0C07AAB2 mov.w @(disp,pc),Rn */
	IF(0x0C07AAB4u); MACL = r11 * r2;  /* 0C07AAB4 mul.l Rm,Rn */
	r0 = 0xC29D1D8u; UPD(0x0C07AAB8u, 3);  /* 0C07AAB6 mov.l @(disp,pc),Rn */
	r10 = 0x0u;  /* 0C07AAB8 mov #imm,Rn */
	r13 = 0xC28EDFCu; UPD(0x0C07AABCu, 2);  /* 0C07AABA mov.l @(disp,pc),Rn */
	IF(0x0C07AABCu); r9 = MACL;  /* 0C07AABC sts macl,Rn */
	r9 += r0;  /* 0C07AABE add Rm,Rn */
	UPD(0x0C07AAC0u, 2);
L_0C07AAC0: BLKS(0x0C07AAC0u);
	r8 = 0x2800u; UPD(0x0C07AAC2u, 1);  /* 0C07AAC0 mov.w @(disp,pc),Rn */
	r0 = 0x50u;  /* 0C07AAC2 mov #imm,Rn */
	IF(0x0C07AAC4u); MACL = r11 * r8;  /* 0C07AAC4 mul.l Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r13); r13 += 2; r5 = v_; } UPD(0x0C07AAC8u, 4);  /* 0C07AAC6 mov.w @Rm+,Rn */
	r4 = 0x6u;  /* 0C07AAC8 mov #imm,Rn */
	IF(0x0C07AACAu); r8 = MACL;  /* 0C07AACA sts macl,Rn */
	IF(0x0C07AACCu); MACL = r5 * r0;  /* 0C07AACC mul.l Rm,Rn */
	r3 = 0xC229004u; UPD(0x0C07AAD0u, 5);  /* 0C07AACE mov.l @(disp,pc),Rn */
	IF(0x0C07AAD0u); r7 = MACL;  /* 0C07AAD0 sts macl,Rn */
	r8 += r7;  /* 0C07AAD2 add Rm,Rn */
	r6 = 0xCD000000u; UPD(0x0C07AAD6u, 3);  /* 0C07AAD4 mov.l @(disp,pc),Rn */
	r8 += r3;  /* 0C07AAD6 add Rm,Rn */
	W32(r8, r6); UPD(0x0C07AADAu, 2);  /* 0C07AAD8 mov.l Rm,@Rn */
	r8 += 0x44u;  /* 0C07AADA add #imm,Rn */
	W16(r8, r10); UPD(0x0C07AADEu, 2);  /* 0C07AADC mov.w Rm,@Rn */
	r2 = 0xC079E80u; UPD(0x0C07AAE0u, 1);  /* 0C07AADE mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFBCu;  /* 0C07AAE0 add #imm,Rn */
	W32(r8 + 0x4u, r4); UPD(0x0C07AAE4u, 2);  /* 0C07AAE2 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x8u, r10); UPD(0x0C07AAE6u, 1);  /* 0C07AAE4 mov.l Rm,@(disp,Rn) */
	r4 = r11;  /* 0C07AAE6 mov Rm,Rn */
	IF(0x0C07AAE8u); { u32 t_ = r2; PR = 0x0C07AAECu; W32(r8 + 0xCu, r10); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C079E80, 0x0C079E80u, 0x0C07AAECu); }  /* 0C07AAE8 jsr @Rn */
L_0C07AAEC: BLKS(0x0C07AAECu);
	W32(r8 + 0x3Cu, r10); UPD(0x0C07AAEEu, 1);  /* 0C07AAEC mov.l Rm,@(disp,Rn) */
	r2 = 0x0u;  /* 0C07AAEE mov #imm,Rn */
	r0 = 0x808080u; UPD(0x0C07AAF2u, 2);  /* 0C07AAF0 mov.l @(disp,pc),Rn */
	r8 += 0x40u;  /* 0C07AAF2 add #imm,Rn */
	W32(r8, r0); UPD(0x0C07AAF6u, 2);  /* 0C07AAF4 mov.l Rm,@Rn */
	r7 = R32(r9 + 0x10u); UPD(0x0C07AAF8u, 1);  /* 0C07AAF6 mov.l @(disp,Rm),Rn */
	r8 += 0xFFFFFFC0u;  /* 0C07AAF8 add #imm,Rn */
	W32(r8 + 0x24u, r7); UPD(0x0C07AAFCu, 2);  /* 0C07AAFA mov.l Rm,@(disp,Rn) */
	r0 = r12;  /* 0C07AAFC mov Rm,Rn */
	r6 = 0xC186860u; UPD(0x0C07AB00u, 2);  /* 0C07AAFE mov.l @(disp,pc),Rn */
	IF(0x0C07AB00u); r0 <<= 2;  /* 0C07AB00 shll2 Rn */
	IF(0x0C07AB02u); r5 = R32(r0 + r6); UPD(0x0C07AB04u, 2);  /* 0C07AB02 mov.l @(r0,Rm),Rn */
	r4 = R32(r9 + 0x14u); UPD(0x0C07AB06u, 1);  /* 0C07AB04 mov.l @(disp,Rm),Rn */
	r0 = r9;  /* 0C07AB06 mov Rm,Rn */
	r4 += r5;  /* 0C07AB08 add Rm,Rn */
	W32(r8 + 0x28u, r4); UPD(0x0C07AB0Cu, 3);  /* 0C07AB0A mov.l Rm,@(disp,Rn) */
	r5 = r12;  /* 0C07AB0C mov Rm,Rn */
	W32(r8 + 0x30u, r10); UPD(0x0C07AB10u, 2);  /* 0C07AB0E mov.l Rm,@(disp,Rn) */
	r6 = 0x14u;  /* 0C07AB10 mov #imm,Rn */
	W32(r8 + 0x2Cu, r10); UPD(0x0C07AB14u, 2);  /* 0C07AB12 mov.l Rm,@(disp,Rn) */
	r5 += 0x1u;  /* 0C07AB14 add #imm,Rn */
	r8 += 0x48u;  /* 0C07AB16 add #imm,Rn */
	W8(r8, r2); UPD(0x0C07AB1Au, 3);  /* 0C07AB18 mov.b Rm,@Rn */
	r12 = (u32)(s32)(s16)r5;  /* 0C07AB1A exts.w Rm,Rn */
	r2 = 0x264u; UPD(0x0C07AB1Eu, 2);  /* 0C07AB1C mov.w @(disp,pc),Rn */
	r8 += 0x1u;  /* 0C07AB1E add #imm,Rn */
	r0 += r2;  /* 0C07AB20 add Rm,Rn */
	r0 += 0x2u;  /* 0C07AB22 add #imm,Rn */
	r7 = (u32)(s32)(s8)R8(r0); UPD(0x0C07AB26u, 4);  /* 0C07AB24 mov.b @Rm,Rn */
	r4 = 0x1u;  /* 0C07AB26 mov #imm,Rn */
	r3 = 0x2A0u; UPD(0x0C07AB2Au, 2);  /* 0C07AB28 mov.w @(disp,pc),Rn */
	r7 += 0x1u;  /* 0C07AB2A add #imm,Rn */
	W8(r8, r7); UPD(0x0C07AB2Eu, 2);  /* 0C07AB2C mov.b Rm,@Rn */
	IF(0x0C07AB2Eu); MACL = r11 * r3;  /* 0C07AB2E mul.l Rm,Rn */
	r8 += 0x1u;  /* 0C07AB30 add #imm,Rn */
	W8(r8, r6); UPD(0x0C07AB34u, 4);  /* 0C07AB32 mov.b Rm,@Rn */
	T = (s32)r12 > (s32)r4;  /* 0C07AB34 cmp/gt Rm,Rn */
	{ u32 c_ = !T; IF(0x0C07AB38u); r3 = MACL; /* slot sts macl,Rn */ if (c_) { UPD(0x0C07AAC0u, 4); goto L_0C07AAC0; } goto L_0C07AB3A; }  /* 0C07AB36 bf/s */
L_0C07AB3A: BLKS(0x0C07AB3Au);
	r9 = 0xC29D1D8u; UPD(0x0C07AB3Cu, 2);  /* 0C07AB3A mov.l @(disp,pc),Rn */
	r1 = 0x0u;  /* 0C07AB3C mov #imm,Rn */
	r9 += r3;  /* 0C07AB3E add Rm,Rn */
	r9 += r2;  /* 0C07AB40 add Rm,Rn */
	r9 += 0x2u;  /* 0C07AB42 add #imm,Rn */
	W8(r9, r1); UPD(0x0C07AB46u, 5);  /* 0C07AB44 mov.b Rm,@Rn */
	r4 = r11;  /* 0C07AB46 mov Rm,Rn */
	r2 = 0xC0C20A0u; UPD(0x0C07AB4Au, 2);  /* 0C07AB48 mov.l @(disp,pc),Rn */
	r5 = 0x53u;  /* 0C07AB4A mov #imm,Rn */
	r15 = r14;  /* 0C07AB4C mov Rm,Rn */
	IF(0x0C07AB4Eu); PR = R32(r15); r15 += 4; UPD(0x0C07AB50u, 3);  /* 0C07AB4E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07AB52u, 1);  /* 0C07AB50 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07AB54u, 1);  /* 0C07AB52 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07AB56u, 1);  /* 0C07AB54 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07AB58u, 1);  /* 0C07AB56 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07AB5Au, 1);  /* 0C07AB58 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07AB5Cu, 1);  /* 0C07AB5A mov.l @Rm+,Rn */
	IF(0x0C07AB5Cu); { u32 tv_ = r2; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0C20A0u: TAIL(blk_f_0C0C20A0); default: JUMPD(tv_); } }  /* 0C07AB5C jmp @Rn */
L_0C07AB60: BLKS(0x0C07AB60u);
	r15 = r14;  /* 0C07AB60 mov Rm,Rn */
	IF(0x0C07AB62u); PR = R32(r15); r15 += 4; UPD(0x0C07AB64u, 2);  /* 0C07AB62 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07AB66u, 1);  /* 0C07AB64 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07AB68u, 1);  /* 0C07AB66 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07AB6Au, 1);  /* 0C07AB68 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07AB6Cu, 1);  /* 0C07AB6A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07AB6Eu, 1);  /* 0C07AB6C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07AB70u, 1);  /* 0C07AB6E mov.l @Rm+,Rn */
	IF(0x0C07AB70u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07AB70 rts */
}

void blk_f_0C07ACF0(sh3_t *c)
{
	LOCALS;
L_0C07ACF0: BLKS(0x0C07ACF0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07ACF2u, 1);  /* 0C07ACF0 mov.l Rm,@-Rn */
	r3 = 0x50u;  /* 0C07ACF2 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07ACF6u, 2);  /* 0C07ACF4 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07ACF8u, 1);  /* 0C07ACF6 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07ACFAu, 1);  /* 0C07ACF8 mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C07ACFA exts.w Rm,Rn */
	r4 = 0x2800u; UPD(0x0C07ACFEu, 2);  /* 0C07ACFC mov.w @(disp,pc),Rn */
	IF(0x0C07ACFEu); MACL = r11 * r4;  /* 0C07ACFE mul.l Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07AD02u, 3);  /* 0C07AD00 mov.l Rm,@-Rn */
	IF(0x0C07AD02u); r9 = MACL;  /* 0C07AD02 sts macl,Rn */
	r12 = (u32)(s32)(s16)r5;  /* 0C07AD04 exts.w Rm,Rn */
	IF(0x0C07AD06u); MACL = r12 * r3;  /* 0C07AD06 mul.l Rm,Rn */
	r0 = 0xC229004u; UPD(0x0C07AD0Au, 5);  /* 0C07AD08 mov.l @(disp,pc),Rn */
	IF(0x0C07AD0Au); r2 = MACL;  /* 0C07AD0A sts macl,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07AD0Eu, 2);  /* 0C07AD0C mov.l Rm,@-Rn */
	r9 += r2;  /* 0C07AD0E add Rm,Rn */
	r9 += r0;  /* 0C07AD10 add Rm,Rn */
	IF(0x0C07AD12u); r15 -= 4; W32(r15, PR); UPD(0x0C07AD14u, 3);  /* 0C07AD12 sts.l pr,@-Rn */
	r8 = r9;  /* 0C07AD14 mov Rm,Rn */
	r8 += 0x46u;  /* 0C07AD16 add #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r8); UPD(0x0C07AD1Au, 3);  /* 0C07AD18 mov.w @Rm,Rn */
	r14 = r15;  /* 0C07AD1A mov Rm,Rn */
	r4 = r0 & 0xFFFF;  /* 0C07AD1C extu.w Rm,Rn */
	r0 = 0xC0769D0u; UPD(0x0C07AD20u, 3);  /* 0C07AD1E mov.l @(disp,pc),Rn */
	r10 = r9;  /* 0C07AD20 mov Rm,Rn */
	IF(0x0C07AD22u); { u32 t_ = r0; PR = 0x0C07AD26u; r10 += 0x44u; /* slot add #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0769D0, 0x0C0769D0u, 0x0C07AD26u); }  /* 0C07AD22 jsr @Rn */
L_0C07AD26: BLKS(0x0C07AD26u);
	W16(r8, r0); UPD(0x0C07AD28u, 1);  /* 0C07AD26 mov.w Rm,@Rn */
	r1 = 0xBFu; UPD(0x0C07AD2Au, 1);  /* 0C07AD28 mov.w @(disp,pc),Rn */
	r0 = (u32)(s32)(s16)r0;  /* 0C07AD2A exts.w Rm,Rn */
	T = (s32)r0 > (s32)r1;  /* 0C07AD2C cmp/gt Rm,Rn */
	{ u32 c_ = !T; r1 += 0xFFFFFFF5u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C07AE00u, 5); goto L_0C07AE00; } UPD(0x0C07AD32u, 1); goto L_0C07AD32; }  /* 0C07AD2E bf/s */
L_0C07AD32: BLKS(0x0C07AD32u);
	r9 = 0x2800u; UPD(0x0C07AD34u, 1);  /* 0C07AD32 mov.w @(disp,pc),Rn */
	r0 = 0x50u;  /* 0C07AD34 mov #imm,Rn */
	IF(0x0C07AD36u); MACL = r11 * r9;  /* 0C07AD36 mul.l Rm,Rn */
	r7 = 0xC229004u; UPD(0x0C07AD3Au, 4);  /* 0C07AD38 mov.l @(disp,pc),Rn */
	IF(0x0C07AD3Au); r9 = MACL;  /* 0C07AD3A sts macl,Rn */
	IF(0x0C07AD3Cu); MACL = r12 * r0;  /* 0C07AD3C mul.l Rm,Rn */
	IF(0x0C07AD3Eu); r8 = MACL;  /* 0C07AD3E sts macl,Rn */
	r9 += r8;  /* 0C07AD40 add Rm,Rn */
	r9 += r7;  /* 0C07AD42 add Rm,Rn */
	r10 = r9;  /* 0C07AD44 mov Rm,Rn */
	r10 += 0x44u;  /* 0C07AD46 add #imm,Rn */
	r1 = (u32)(s32)(s16)R16(r10); UPD(0x0C07AD4Au, 9);  /* 0C07AD48 mov.w @Rm,Rn */
	r6 = r9;  /* 0C07AD4A mov Rm,Rn */
	r0 = r1 & 0xFFFF;  /* 0C07AD4C extu.w Rm,Rn */
	r0 += 0x4u;  /* 0C07AD4E add #imm,Rn */
	IF(0x0C07AD50u); r0 >>= 2;  /* 0C07AD50 shlr2 Rn */
	IF(0x0C07AD52u); T = r0 & 1; r0 >>= 1;  /* 0C07AD52 shlr Rn */
	r0 &= 0x3Fu;  /* 0C07AD54 and #imm,r0 */
	W32(r9 + 0x8u, r0); UPD(0x0C07AD58u, 7);  /* 0C07AD56 mov.l Rm,@(disp,Rn) */
	r6 += 0x48u;  /* 0C07AD58 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r6); UPD(0x0C07AD5Cu, 2);  /* 0C07AD5A mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C07AD5C add #imm,Rn */
	W8(r6, r0); UPD(0x0C07AD60u, 2);  /* 0C07AD5E mov.b Rm,@Rn */
	r0 &= 0x1u;  /* 0C07AD60 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C07AD62 tst Rm,Rn */
	if (T) { UPD(0x0C07AD6Eu, 5); goto L_0C07AD6E; }  /* 0C07AD64 bt */
L_0C07AD66: BLKS(0x0C07AD66u);
	r0 = R32(r9 + 0xCu); UPD(0x0C07AD68u, 1);  /* 0C07AD66 mov.l @(disp,Rm),Rn */
	r0 += 0x1u;  /* 0C07AD68 add #imm,Rn */
	r0 &= 0x3u;  /* 0C07AD6A and #imm,r0 */
	W32(r9 + 0xCu, r0); UPD(0x0C07AD6Eu, 3);  /* 0C07AD6C mov.l Rm,@(disp,Rn) */
L_0C07AD6E: BLKS(0x0C07AD6Eu);
	r6 = 0xC079F30u; UPD(0x0C07AD70u, 1);  /* 0C07AD6E mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C07AD70 mov Rm,Rn */
	r8 = 0xC069B20u; UPD(0x0C07AD74u, 2);  /* 0C07AD72 mov.l @(disp,pc),Rn */
	IF(0x0C07AD74u); { u32 t_ = r6; PR = 0x0C07AD78u; r5 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C079F30, 0x0C079F30u, 0x0C07AD78u); }  /* 0C07AD74 jsr @Rn */
L_0C07AD78: BLKS(0x0C07AD78u);
	r3 = (u32)(s32)(s16)R16(r10); UPD(0x0C07AD7Au, 1);  /* 0C07AD78 mov.w @Rm,Rn */
	r11 = R32(r9 + 0x34u); UPD(0x0C07AD7Cu, 1);  /* 0C07AD7A mov.l @(disp,Rm),Rn */
	r4 = r3 & 0xFFFF;  /* 0C07AD7C extu.w Rm,Rn */
	IF(0x0C07AD7Eu); { u32 t_ = r8; PR = 0x0C07AD82u; r5 = r11; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C07AD82u); }  /* 0C07AD7E jsr @Rn */
L_0C07AD82: BLKS(0x0C07AD82u);
	r2 = (u32)(s32)(s16)R16(r10); UPD(0x0C07AD84u, 1);  /* 0C07AD82 mov.w @Rm,Rn */
	r5 = r11;  /* 0C07AD84 mov Rm,Rn */
	r10 = 0xC069AF0u; UPD(0x0C07AD88u, 2);  /* 0C07AD86 mov.l @(disp,pc),Rn */
	r4 = r2 & 0xFFFF;  /* 0C07AD88 extu.w Rm,Rn */
	IF(0x0C07AD8Au); { u32 t_ = r10; PR = 0x0C07AD8Eu; W32(r9 + 0x2Cu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C07AD8Eu); }  /* 0C07AD8A jsr @Rn */
L_0C07AD8E: BLKS(0x0C07AD8Eu);
	r11 = R32(r9 + 0x24u); UPD(0x0C07AD90u, 1);  /* 0C07AD8E mov.l @(disp,Rm),Rn */
	r7 = R32(r9 + 0x28u); UPD(0x0C07AD92u, 1);  /* 0C07AD90 mov.l @(disp,Rm),Rn */
	r12 = R32(r9 + 0x2Cu); UPD(0x0C07AD94u, 1);  /* 0C07AD92 mov.l @(disp,Rm),Rn */
	r7 += r0;  /* 0C07AD94 add Rm,Rn */
	r3 = 0xFF600000u; UPD(0x0C07AD98u, 2);  /* 0C07AD96 mov.l @(disp,pc),Rn */
	r11 += r12;  /* 0C07AD98 add Rm,Rn */
	r3 += r11;  /* 0C07AD9A add Rm,Rn */
	W32(r9 + 0x30u, r0); UPD(0x0C07AD9Eu, 3);  /* 0C07AD9C mov.l Rm,@(disp,Rn) */
	IF(0x0C07AD9Eu); T = (s32)r3 >= 0;  /* 0C07AD9E cmp/pz Rn */
	W32(r9 + 0x24u, r11); UPD(0x0C07ADA2u, 2);  /* 0C07ADA0 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = !T; W32(r9 + 0x28u, r7); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C07ADF0u, 3); goto L_0C07ADF0; } UPD(0x0C07ADA6u, 1); goto L_0C07ADA6; }  /* 0C07ADA2 bf/s */
L_0C07ADA6: BLKS(0x0C07ADA6u);
	r4 = 0xB00000u; UPD(0x0C07ADA8u, 1);  /* 0C07ADA6 mov.l @(disp,pc),Rn */
	T = (s32)r3 > (s32)r4;  /* 0C07ADA8 cmp/gt Rm,Rn */
	{ u32 c_ = T; r10 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07ADC6u, 4); goto L_0C07ADC6; } goto L_0C07ADAE; }  /* 0C07ADAA bt/s */
L_0C07ADAE: BLKS(0x0C07ADAEu);
	r12 = 0xC3C4048u; UPD(0x0C07ADB0u, 2);  /* 0C07ADAE mov.l @(disp,pc),Rn */
	r2 = r7;  /* 0C07ADB0 mov Rm,Rn */
	r0 = R32(r12); UPD(0x0C07ADB4u, 2);  /* 0C07ADB2 mov.l @Rm,Rn */
	r5 = 0xFF880000u; UPD(0x0C07ADB6u, 1);  /* 0C07ADB4 mov.l @(disp,pc),Rn */
	r2 -= r0;  /* 0C07ADB6 sub Rm,Rn */
	r2 += r5;  /* 0C07ADB8 add Rm,Rn */
	IF(0x0C07ADBAu); T = (s32)r2 >= 0;  /* 0C07ADBA cmp/pz Rn */
	if (!T) { UPD(0x0C07ADE0u, 6); goto L_0C07ADE0; }  /* 0C07ADBC bf */
L_0C07ADBE: BLKS(0x0C07ADBEu);
	r7 = 0x880000u; UPD(0x0C07ADC0u, 1);  /* 0C07ADBE mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r7;  /* 0C07ADC0 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C07ADC8u, 4); goto L_0C07ADC8; }  /* 0C07ADC2 bf */
L_0C07ADC4: BLKS(0x0C07ADC4u);
	r10 = 0x0u;  /* 0C07ADC4 mov #imm,Rn */
	UPD(0x0C07ADC6u, 1);
L_0C07ADC6: BLKS(0x0C07ADC6u);
	W32(r9, r10); UPD(0x0C07ADC8u, 1);  /* 0C07ADC6 mov.l Rm,@Rn */
L_0C07ADC8: BLKS(0x0C07ADC8u);
	r15 = r14;  /* 0C07ADC8 mov Rm,Rn */
	IF(0x0C07ADCAu); PR = R32(r15); r15 += 4; UPD(0x0C07ADCCu, 2);  /* 0C07ADCA lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07ADCEu, 1);  /* 0C07ADCC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07ADD0u, 1);  /* 0C07ADCE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07ADD2u, 1);  /* 0C07ADD0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07ADD4u, 1);  /* 0C07ADD2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07ADD6u, 1);  /* 0C07ADD4 mov.l @Rm+,Rn */
	IF(0x0C07ADD6u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07ADD6 rts */
L_0C07ADE0: BLKS(0x0C07ADE0u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C07ADBEu, 3); goto L_0C07ADBE; }  /* 0C07ADE0 bra */
L_0C07ADF0: BLKS(0x0C07ADF0u);
	{ r3 = 0u - r3; /* slot neg Rm,Rn */ UPD(0x0C07ADA6u, 3); goto L_0C07ADA6; }  /* 0C07ADF0 bra */
L_0C07AE00: BLKS(0x0C07AE00u);
	IF(0x0C07AE00u); MACL = r0 * r1;  /* 0C07AE00 mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C07AE04u, 3);  /* 0C07AE02 mov.l @(disp,pc),Rn */
	r8 = 0xC068E60u; UPD(0x0C07AE06u, 1);  /* 0C07AE04 mov.l @(disp,pc),Rn */
	IF(0x0C07AE06u); r0 = MACL;  /* 0C07AE06 sts macl,Rn */
	r0 += r2;  /* 0C07AE08 add Rm,Rn */
	r5 = R32(r9 + 0x28u); UPD(0x0C07AE0Cu, 3);  /* 0C07AE0A mov.l @(disp,Rm),Rn */
	r6 = R32(r0 + 0x24u); UPD(0x0C07AE0Eu, 1);  /* 0C07AE0C mov.l @(disp,Rm),Rn */
	r7 = R32(r0 + 0x28u); UPD(0x0C07AE10u, 1);  /* 0C07AE0E mov.l @(disp,Rm),Rn */
	IF(0x0C07AE10u); { u32 t_ = r8; PR = 0x0C07AE14u; r4 = R32(r9 + 0x24u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C068E60, 0x0C068E60u, 0x0C07AE14u); }  /* 0C07AE10 jsr @Rn */
L_0C07AE14: BLKS(0x0C07AE14u);
	r3 = (u32)(s32)(s16)R16(r10); UPD(0x0C07AE16u, 1);  /* 0C07AE14 mov.w @Rm,Rn */
	r6 = (u32)(s32)(s16)r0;  /* 0C07AE16 exts.w Rm,Rn */
	r8 = 0x1FFu; UPD(0x0C07AE1Au, 2);  /* 0C07AE18 mov.w @(disp,pc),Rn */
	r6 -= r3;  /* 0C07AE1A sub Rm,Rn */
	r7 = 0xFFFFFF00u; UPD(0x0C07AE1Eu, 2);  /* 0C07AE1C mov.w @(disp,pc),Rn */
	r6 &= r8;  /* 0C07AE1E and Rm,Rn */
	r6 += r7;  /* 0C07AE20 add Rm,Rn */
	r0 = (u32)(s32)(s16)r6;  /* 0C07AE22 exts.w Rm,Rn */
	r0 += 0x2u;  /* 0C07AE24 add #imm,Rn */
	r1 = r0 & 0xFFFF;  /* 0C07AE26 extu.w Rm,Rn */
	r5 = 0x4u;  /* 0C07AE28 mov #imm,Rn */
	T = r1 > r5;  /* 0C07AE2A cmp/hi Rm,Rn */
	{ u32 c_ = T; r0 += 0xFFFFFFFEu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C07AE40u, 10); goto L_0C07AE40; } goto L_0C07AE30; }  /* 0C07AE2C bt/s */
L_0C07AE30: BLKS(0x0C07AE30u);
	r10 = R32(r9 + 0x34u); UPD(0x0C07AE32u, 2);  /* 0C07AE30 mov.l @(disp,Rm),Rn */
	r3 = 0x2000u; UPD(0x0C07AE34u, 1);  /* 0C07AE32 mov.w @(disp,pc),Rn */
	r10 += r3;  /* 0C07AE34 add Rm,Rn */
	W32(r9 + 0x34u, r10); UPD(0x0C07AE38u, 2);  /* 0C07AE36 mov.l Rm,@(disp,Rn) */
L_0C07AE38: BLKS(0x0C07AE38u);
	{ IF(0x0C07AE3Au); ; /* slot nop */ UPD(0x0C07AD32u, 3); goto L_0C07AD32; }  /* 0C07AE38 bra */
L_0C07AE40: BLKS(0x0C07AE40u);
	IF(0x0C07AE40u); T = (s32)r0 >= 0;  /* 0C07AE40 cmp/pz Rn */
	{ u32 c_ = !T; IF(0x0C07AE44u); T = (s32)r0 > 0; /* slot cmp/pl Rn */ if (c_) { UPD(0x0C07AE60u, 4); goto L_0C07AE60; } goto L_0C07AE46; }  /* 0C07AE42 bf/s */
L_0C07AE46: BLKS(0x0C07AE46u);
	{ u32 c_ = !T; r1 = r3; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07AE38u, 4); goto L_0C07AE38; } goto L_0C07AE4A; }  /* 0C07AE46 bf/s */
L_0C07AE4A: BLKS(0x0C07AE4Au);
	r1 += 0xFFFFFFFEu;  /* 0C07AE4A add #imm,Rn */
	UPD(0x0C07AE4Cu, 2);
L_0C07AE4C: BLKS(0x0C07AE4Cu);
	r2 = R32(r9 + 0x34u); UPD(0x0C07AE4Eu, 1);  /* 0C07AE4C mov.l @(disp,Rm),Rn */
	r4 = 0x10000u; UPD(0x0C07AE50u, 1);  /* 0C07AE4E mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r4;  /* 0C07AE50 cmp/gt Rm,Rn */
	{ u32 c_ = !T; W16(r10, r1); /* slot mov.w Rm,@Rn */ if (c_) { UPD(0x0C07AE38u, 4); goto L_0C07AE38; } UPD(0x0C07AE56u, 1); goto L_0C07AE56; }  /* 0C07AE52 bf/s */
L_0C07AE56: BLKS(0x0C07AE56u);
	r5 = 0xFFFFF000u; UPD(0x0C07AE58u, 1);  /* 0C07AE56 mov.w @(disp,pc),Rn */
	r2 += r5;  /* 0C07AE58 add Rm,Rn */
	{ W32(r9 + 0x34u, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C07AD32u, 4); goto L_0C07AD32; }  /* 0C07AE5A bra */
L_0C07AE60: BLKS(0x0C07AE60u);
	r1 = r3;  /* 0C07AE60 mov Rm,Rn */
	{ r1 += 0x2u; /* slot add #imm,Rn */ UPD(0x0C07AE4Cu, 4); goto L_0C07AE4C; }  /* 0C07AE62 bra */
}

void blk_f_0C07AEB0(sh3_t *c)
{
	LOCALS;
L_0C07AEB0: BLKS(0x0C07AEB0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07AEB2u, 1);  /* 0C07AEB0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07AEB4u, 1);  /* 0C07AEB2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07AEB6u, 1);  /* 0C07AEB4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07AEB8u, 1);  /* 0C07AEB6 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07AEBAu, 1);  /* 0C07AEB8 mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C07AEBA exts.w Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C07AEBEu, 2);  /* 0C07AEBC mov.l Rm,@-Rn */
	r4 = 0x50u;  /* 0C07AEBE mov #imm,Rn */
	r13 = (u32)(s32)(s16)r5;  /* 0C07AEC0 exts.w Rm,Rn */
	r5 = 0x2800u; UPD(0x0C07AEC4u, 3);  /* 0C07AEC2 mov.w @(disp,pc),Rn */
	IF(0x0C07AEC4u); MACL = r11 * r5;  /* 0C07AEC4 mul.l Rm,Rn */
	r3 = 0xC229004u; UPD(0x0C07AEC8u, 3);  /* 0C07AEC6 mov.l @(disp,pc),Rn */
	IF(0x0C07AEC8u); r12 = MACL;  /* 0C07AEC8 sts macl,Rn */
	IF(0x0C07AECAu); MACL = r13 * r4;  /* 0C07AECA mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07AECEu, 4);  /* 0C07AECC mov.l Rm,@-Rn */
	IF(0x0C07AECEu); r10 = MACL;  /* 0C07AECE sts macl,Rn */
	r10 += r12;  /* 0C07AED0 add Rm,Rn */
	r10 += r3;  /* 0C07AED2 add Rm,Rn */
	IF(0x0C07AED4u); r15 -= 4; W32(r15, PR); UPD(0x0C07AED6u, 4);  /* 0C07AED4 sts.l pr,@-Rn */
	r8 = r10;  /* 0C07AED6 mov Rm,Rn */
	r8 += 0x44u;  /* 0C07AED8 add #imm,Rn */
	r0 = 0xC069B20u; UPD(0x0C07AEDCu, 3);  /* 0C07AEDA mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C07AEDC mov Rm,Rn */
	r1 = (u32)(s32)(s16)R16(r8); UPD(0x0C07AEE0u, 2);  /* 0C07AEDE mov.w @Rm,Rn */
	r9 = 0x60000u; UPD(0x0C07AEE2u, 1);  /* 0C07AEE0 mov.l @(disp,pc),Rn */
	r4 = r1 & 0xFFFF;  /* 0C07AEE2 extu.w Rm,Rn */
	IF(0x0C07AEE4u); { u32 t_ = r0; PR = 0x0C07AEE8u; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C07AEE8u); }  /* 0C07AEE4 jsr @Rn */
L_0C07AEE8: BLKS(0x0C07AEE8u);
	W32(r10 + 0x2Cu, r0); UPD(0x0C07AEEAu, 1);  /* 0C07AEE8 mov.l Rm,@(disp,Rn) */
	r5 = r9;  /* 0C07AEEA mov Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r8); UPD(0x0C07AEEEu, 2);  /* 0C07AEEC mov.w @Rm,Rn */
	r8 = 0xC069AF0u; UPD(0x0C07AEF0u, 1);  /* 0C07AEEE mov.l @(disp,pc),Rn */
	IF(0x0C07AEF0u); { u32 t_ = r8; PR = 0x0C07AEF4u; r4 = r0 & 0xFFFF; /* slot extu.w Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C07AEF4u); }  /* 0C07AEF0 jsr @Rn */
L_0C07AEF4: BLKS(0x0C07AEF4u);
	r4 = R32(r10 + 0x24u); UPD(0x0C07AEF6u, 1);  /* 0C07AEF4 mov.l @(disp,Rm),Rn */
	r7 = R32(r10 + 0x28u); UPD(0x0C07AEF8u, 1);  /* 0C07AEF6 mov.l @(disp,Rm),Rn */
	r2 = R32(r10 + 0x2Cu); UPD(0x0C07AEFAu, 1);  /* 0C07AEF8 mov.l @(disp,Rm),Rn */
	r7 += r0;  /* 0C07AEFA add Rm,Rn */
	r3 = 0xFF600000u; UPD(0x0C07AEFEu, 2);  /* 0C07AEFC mov.l @(disp,pc),Rn */
	r4 += r2;  /* 0C07AEFE add Rm,Rn */
	r3 += r4;  /* 0C07AF00 add Rm,Rn */
	W32(r10 + 0x30u, r0); UPD(0x0C07AF04u, 3);  /* 0C07AF02 mov.l Rm,@(disp,Rn) */
	IF(0x0C07AF04u); T = (s32)r3 >= 0;  /* 0C07AF04 cmp/pz Rn */
	W32(r10 + 0x24u, r4); UPD(0x0C07AF08u, 2);  /* 0C07AF06 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = T; W32(r10 + 0x28u, r7); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C07AF10u, 3); goto L_0C07AF10; } UPD(0x0C07AF0Cu, 1); goto L_0C07AF0C; }  /* 0C07AF08 bt/s */
L_0C07AF0C: BLKS(0x0C07AF0Cu);
	{ r3 = 0u - r3; /* slot neg Rm,Rn */ UPD(0x0C07B070u, 3); goto L_0C07B070; }  /* 0C07AF0C bra */
L_0C07AF10: BLKS(0x0C07AF10u);
	r6 = 0xB00000u; UPD(0x0C07AF12u, 1);  /* 0C07AF10 mov.l @(disp,pc),Rn */
	T = (s32)r3 > (s32)r6;  /* 0C07AF12 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C07AF2Eu, 4); goto L_0C07AF2E; }  /* 0C07AF14 bt */
L_0C07AF16: BLKS(0x0C07AF16u);
	r2 = 0xC3C4048u; UPD(0x0C07AF18u, 1);  /* 0C07AF16 mov.l @(disp,pc),Rn */
	r9 = R32(r2); UPD(0x0C07AF1Au, 1);  /* 0C07AF18 mov.l @Rm,Rn */
	r2 = r7;  /* 0C07AF1A mov Rm,Rn */
	r7 = 0xFF880000u; UPD(0x0C07AF1Eu, 2);  /* 0C07AF1C mov.l @(disp,pc),Rn */
	r2 -= r9;  /* 0C07AF1E sub Rm,Rn */
	r2 += r7;  /* 0C07AF20 add Rm,Rn */
	IF(0x0C07AF22u); T = (s32)r2 >= 0;  /* 0C07AF22 cmp/pz Rn */
	if (T) { UPD(0x0C07AF28u, 6); goto L_0C07AF28; }  /* 0C07AF24 bt */
L_0C07AF26: BLKS(0x0C07AF26u);
	r2 = 0u - r2;  /* 0C07AF26 neg Rm,Rn */
	UPD(0x0C07AF28u, 1);
L_0C07AF28: BLKS(0x0C07AF28u);
	r8 = 0x880000u; UPD(0x0C07AF2Au, 1);  /* 0C07AF28 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r8;  /* 0C07AF2A cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C07AF50u, 4); goto L_0C07AF50; }  /* 0C07AF2C bf */
L_0C07AF2E: BLKS(0x0C07AF2Eu);
	r11 = 0x0u;  /* 0C07AF2E mov #imm,Rn */
	W32(r10, r11); UPD(0x0C07AF32u, 2);  /* 0C07AF30 mov.l Rm,@Rn */
L_0C07AF32: BLKS(0x0C07AF32u);
	r15 = r14;  /* 0C07AF32 mov Rm,Rn */
	IF(0x0C07AF34u); PR = R32(r15); r15 += 4; UPD(0x0C07AF36u, 2);  /* 0C07AF34 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07AF38u, 1);  /* 0C07AF36 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07AF3Au, 1);  /* 0C07AF38 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07AF3Cu, 1);  /* 0C07AF3A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07AF3Eu, 1);  /* 0C07AF3C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07AF40u, 1);  /* 0C07AF3E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07AF42u, 1);  /* 0C07AF40 mov.l @Rm+,Rn */
	IF(0x0C07AF42u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07AF42 rts */
L_0C07AF50: BLKS(0x0C07AF50u);
	r2 = r10;  /* 0C07AF50 mov Rm,Rn */
	r2 += 0x49u;  /* 0C07AF52 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C07AF56u, 3);  /* 0C07AF54 mov.b @Rm,Rn */
	r9 = r1 & 0xFF;  /* 0C07AF56 extu.b Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C07AF58 tst Rm,Rn */
	if (!T) { UPD(0x0C07AFE0u, 5); goto L_0C07AFE0; }  /* 0C07AF5A bf */
L_0C07AF5C: BLKS(0x0C07AF5Cu);
	r0 = R32(r10 + 0xCu); UPD(0x0C07AF5Eu, 1);  /* 0C07AF5C mov.l @(disp,Rm),Rn */
	r0 += 0x1u;  /* 0C07AF5E add #imm,Rn */
	T = r0 == 0x8u;  /* 0C07AF60 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W32(r10 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C07AF32u, 5); goto L_0C07AF32; } UPD(0x0C07AF66u, 1); goto L_0C07AF66; }  /* 0C07AF62 bf/s */
L_0C07AF66: BLKS(0x0C07AF66u);
	r13 = 0xC079F80u; UPD(0x0C07AF68u, 1);  /* 0C07AF66 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C07AF68 mov Rm,Rn */
	IF(0x0C07AF6Au); { u32 t_ = r13; PR = 0x0C07AF6Eu; r5 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C079F80, 0x0C079F80u, 0x0C07AF6Eu); }  /* 0C07AF6A jsr @Rn */
L_0C07AF6E: BLKS(0x0C07AF6Eu);
	T = (r0 & r0) == 0;  /* 0C07AF6E tst Rm,Rn */
	if (!T) { UPD(0x0C07AF80u, 4); goto L_0C07AF80; }  /* 0C07AF70 bf */
L_0C07AF72: BLKS(0x0C07AF72u);
	W32(r10, r9); UPD(0x0C07AF74u, 1);  /* 0C07AF72 mov.l Rm,@Rn */
	{ IF(0x0C07AF76u); ; /* slot nop */ UPD(0x0C07AF32u, 3); goto L_0C07AF32; }  /* 0C07AF74 bra */
L_0C07AF80: BLKS(0x0C07AF80u);
	r13 = 0xC28EDFCu; UPD(0x0C07AF82u, 1);  /* 0C07AF80 mov.l @(disp,pc),Rn */
	r0 = 0x50u;  /* 0C07AF82 mov #imm,Rn */
	r5 = (u32)(s32)(s16)R16(r13); UPD(0x0C07AF86u, 2);  /* 0C07AF84 mov.w @Rm,Rn */
	r11 += 0x40u;  /* 0C07AF86 add #imm,Rn */
	IF(0x0C07AF88u); MACL = r5 * r0;  /* 0C07AF88 mul.l Rm,Rn */
	r2 = 0xC079E80u; UPD(0x0C07AF8Cu, 4);  /* 0C07AF8A mov.l @(disp,pc),Rn */
	IF(0x0C07AF8Cu); r13 = MACL;  /* 0C07AF8C sts macl,Rn */
	r13 += r12;  /* 0C07AF8E add Rm,Rn */
	r12 = 0xC229004u; UPD(0x0C07AF92u, 3);  /* 0C07AF90 mov.l @(disp,pc),Rn */
	r13 += r12;  /* 0C07AF92 add Rm,Rn */
	W32(r13 + 0x8u, r11); UPD(0x0C07AF96u, 2);  /* 0C07AF94 mov.l Rm,@(disp,Rn) */
	r8 = 0xCD000000u; UPD(0x0C07AF98u, 1);  /* 0C07AF96 mov.l @(disp,pc),Rn */
	r11 += 0xFFFFFFC0u;  /* 0C07AF98 add #imm,Rn */
	W32(r13, r8); UPD(0x0C07AF9Cu, 2);  /* 0C07AF9A mov.l Rm,@Rn */
	r4 = r11;  /* 0C07AF9C mov Rm,Rn */
	W32(r13 + 0x4u, r9); UPD(0x0C07AFA0u, 2);  /* 0C07AF9E mov.l Rm,@(disp,Rn) */
	IF(0x0C07AFA0u); { u32 t_ = r2; PR = 0x0C07AFA4u; W32(r13 + 0xCu, r9); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C079E80, 0x0C079E80u, 0x0C07AFA4u); }  /* 0C07AFA0 jsr @Rn */
L_0C07AFA4: BLKS(0x0C07AFA4u);
	r5 = R32(r10 + 0x24u); UPD(0x0C07AFA6u, 1);  /* 0C07AFA4 mov.l @(disp,Rm),Rn */
	r0 = r13;  /* 0C07AFA6 mov Rm,Rn */
	r4 = R32(r10 + 0x28u); UPD(0x0C07AFAAu, 2);  /* 0C07AFA8 mov.l @(disp,Rm),Rn */
	r0 += 0x40u;  /* 0C07AFAA add #imm,Rn */
	r7 = 0x204B0B0u; UPD(0x0C07AFAEu, 2);  /* 0C07AFAC mov.l @(disp,pc),Rn */
	r10 += 0x4Au;  /* 0C07AFAE add #imm,Rn */
	r6 = 0x808080u; UPD(0x0C07AFB2u, 2);  /* 0C07AFB0 mov.l @(disp,pc),Rn */
	W32(r13 + 0x24u, r5); UPD(0x0C07AFB4u, 1);  /* 0C07AFB2 mov.l Rm,@(disp,Rn) */
	W32(r13 + 0x28u, r4); UPD(0x0C07AFB6u, 1);  /* 0C07AFB4 mov.l Rm,@(disp,Rn) */
	r5 = 0x54u;  /* 0C07AFB6 mov #imm,Rn */
	W32(r13 + 0x3Cu, r7); UPD(0x0C07AFBAu, 2);  /* 0C07AFB8 mov.l Rm,@(disp,Rn) */
	r4 = r11;  /* 0C07AFBA mov Rm,Rn */
	W32(r0, r6); UPD(0x0C07AFBEu, 2);  /* 0C07AFBC mov.l Rm,@Rn */
	r13 += 0x4Au;  /* 0C07AFBE add #imm,Rn */
	r12 = 0xC0C2020u; UPD(0x0C07AFC2u, 2);  /* 0C07AFC0 mov.l @(disp,pc),Rn */
	r0 += 0x8u;  /* 0C07AFC2 add #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r10); UPD(0x0C07AFC6u, 2);  /* 0C07AFC4 mov.b @Rm,Rn */
	W8(r0, r9); UPD(0x0C07AFC8u, 1);  /* 0C07AFC6 mov.b Rm,@Rn */
	r10 += 0xFFFFFFB6u;  /* 0C07AFC8 add #imm,Rn */
	IF(0x0C07AFCAu); { u32 t_ = r12; PR = 0x0C07AFCEu; W8(r13, r3); /* slot mov.b Rm,@Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0C2020, 0x0C0C2020u, 0x0C07AFCEu); }  /* 0C07AFCA jsr @Rn */
L_0C07AFCE: BLKS(0x0C07AFCEu);
	{ W32(r10, r9); /* slot mov.l Rm,@Rn */ UPD(0x0C07AF32u, 3); goto L_0C07AF32; }  /* 0C07AFCE bra */
L_0C07AFE0: BLKS(0x0C07AFE0u);
	r3 = R32(r10 + 0xCu); UPD(0x0C07AFE2u, 1);  /* 0C07AFE0 mov.l @(disp,Rm),Rn */
	r9 = 0x3u;  /* 0C07AFE2 mov #imm,Rn */
	r3 += 0x1u;  /* 0C07AFE4 add #imm,Rn */
	r9 &= r3;  /* 0C07AFE6 and Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C07AFE8 tst Rm,Rn */
	{ u32 c_ = !T; W32(r10 + 0xCu, r3); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C07AF32u, 7); goto L_0C07AF32; } UPD(0x0C07AFEEu, 1); goto L_0C07AFEE; }  /* 0C07AFEA bf/s */
L_0C07AFEE: BLKS(0x0C07AFEEu);
	r1 += 0xFFFFFFFFu;  /* 0C07AFEE add #imm,Rn */
	r4 = r1 & 0xFF;  /* 0C07AFF0 extu.b Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C07AFF2 tst Rm,Rn */
	{ u32 c_ = T; W8(r2, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C07AFFAu, 6); goto L_0C07AFFA; } UPD(0x0C07AFF8u, 1); goto L_0C07AFF8; }  /* 0C07AFF4 bt/s */
L_0C07AFF8: BLKS(0x0C07AFF8u);
	W32(r10 + 0xCu, r9); UPD(0x0C07AFFAu, 1);  /* 0C07AFF8 mov.l Rm,@(disp,Rn) */
L_0C07AFFA: BLKS(0x0C07AFFAu);
	r6 = 0xC079EF0u; UPD(0x0C07AFFCu, 1);  /* 0C07AFFA mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C07AFFC mov Rm,Rn */
	r8 = 0xC079F80u; UPD(0x0C07B000u, 2);  /* 0C07AFFE mov.l @(disp,pc),Rn */
	IF(0x0C07B000u); { u32 t_ = r6; PR = 0x0C07B004u; r5 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C079EF0, 0x0C079EF0u, 0x0C07B004u); }  /* 0C07B000 jsr @Rn */
L_0C07B004: BLKS(0x0C07B004u);
	r4 = r11;  /* 0C07B004 mov Rm,Rn */
	IF(0x0C07B006u); { u32 t_ = r8; PR = 0x0C07B00Au; r5 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C079F80, 0x0C079F80u, 0x0C07B00Au); }  /* 0C07B006 jsr @Rn */
L_0C07B00A: BLKS(0x0C07B00Au);
	T = (r0 & r0) == 0;  /* 0C07B00A tst Rm,Rn */
	if (T) { UPD(0x0C07AF32u, 4); goto L_0C07AF32; }  /* 0C07B00C bt */
L_0C07B00E: BLKS(0x0C07B00Eu);
	r13 = 0x50u;  /* 0C07B00E mov #imm,Rn */
	r2 = 0xC28EDFCu; UPD(0x0C07B012u, 2);  /* 0C07B010 mov.l @(disp,pc),Rn */
	r5 = (u32)(s32)(s16)R16(r2); UPD(0x0C07B014u, 1);  /* 0C07B012 mov.w @Rm,Rn */
	r11 += 0x40u;  /* 0C07B014 add #imm,Rn */
	IF(0x0C07B016u); MACL = r5 * r13;  /* 0C07B016 mul.l Rm,Rn */
	r7 = 0xC229004u; UPD(0x0C07B01Au, 4);  /* 0C07B018 mov.l @(disp,pc),Rn */
	IF(0x0C07B01Au); r13 = MACL;  /* 0C07B01A sts macl,Rn */
	r13 += r12;  /* 0C07B01C add Rm,Rn */
	r13 += r7;  /* 0C07B01E add Rm,Rn */
	W32(r13 + 0x8u, r11); UPD(0x0C07B022u, 4);  /* 0C07B020 mov.l Rm,@(disp,Rn) */
	r8 = 0xC079E80u; UPD(0x0C07B024u, 1);  /* 0C07B022 mov.l @(disp,pc),Rn */
	r11 += 0xFFFFFFC0u;  /* 0C07B024 add #imm,Rn */
	r6 = 0xCD000000u; UPD(0x0C07B028u, 2);  /* 0C07B026 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C07B028 mov Rm,Rn */
	W32(r13, r6); UPD(0x0C07B02Cu, 2);  /* 0C07B02A mov.l Rm,@Rn */
	W32(r13 + 0x4u, r9); UPD(0x0C07B02Eu, 1);  /* 0C07B02C mov.l Rm,@(disp,Rn) */
	IF(0x0C07B02Eu); { u32 t_ = r8; PR = 0x0C07B032u; W32(r13 + 0xCu, r9); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C079E80, 0x0C079E80u, 0x0C07B032u); }  /* 0C07B02E jsr @Rn */
L_0C07B032: BLKS(0x0C07B032u);
	r5 = r13;  /* 0C07B032 mov Rm,Rn */
	r3 = 0x808080u; UPD(0x0C07B036u, 2);  /* 0C07B034 mov.l @(disp,pc),Rn */
	r5 += 0x40u;  /* 0C07B036 add #imm,Rn */
	r0 = R32(r10 + 0x24u); UPD(0x0C07B03Au, 2);  /* 0C07B038 mov.l @(disp,Rm),Rn */
	r12 = R32(r10 + 0x28u); UPD(0x0C07B03Cu, 1);  /* 0C07B03A mov.l @(disp,Rm),Rn */
	r4 = 0x204B0B0u; UPD(0x0C07B03Eu, 1);  /* 0C07B03C mov.l @(disp,pc),Rn */
	r10 += 0x4Au;  /* 0C07B03E add #imm,Rn */
	W32(r5, r3); UPD(0x0C07B042u, 2);  /* 0C07B040 mov.l Rm,@Rn */
	W32(r13 + 0x3Cu, r4); UPD(0x0C07B044u, 1);  /* 0C07B042 mov.l Rm,@(disp,Rn) */
	r5 += 0x8u;  /* 0C07B044 add #imm,Rn */
	W32(r13 + 0x24u, r0); UPD(0x0C07B048u, 2);  /* 0C07B046 mov.l Rm,@(disp,Rn) */
	r4 = r11;  /* 0C07B048 mov Rm,Rn */
	W32(r13 + 0x28u, r12); UPD(0x0C07B04Cu, 2);  /* 0C07B04A mov.l Rm,@(disp,Rn) */
	r2 = (u32)(s32)(s8)R8(r10); UPD(0x0C07B04Eu, 1);  /* 0C07B04C mov.b @Rm,Rn */
	r13 += 0x4Au;  /* 0C07B04E add #imm,Rn */
	W8(r5, r9); UPD(0x0C07B052u, 2);  /* 0C07B050 mov.b Rm,@Rn */
	W8(r13, r2); UPD(0x0C07B054u, 1);  /* 0C07B052 mov.b Rm,@Rn */
	r5 = 0x54u;  /* 0C07B054 mov #imm,Rn */
	r7 = 0xC0C2020u; UPD(0x0C07B058u, 2);  /* 0C07B056 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C07B058 mov Rm,Rn */
	IF(0x0C07B05Au); PR = R32(r15); r15 += 4; UPD(0x0C07B05Cu, 2);  /* 0C07B05A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07B05Eu, 1);  /* 0C07B05C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07B060u, 1);  /* 0C07B05E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07B062u, 1);  /* 0C07B060 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07B064u, 1);  /* 0C07B062 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07B066u, 1);  /* 0C07B064 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07B068u, 1);  /* 0C07B066 mov.l @Rm+,Rn */
	IF(0x0C07B068u); { u32 tv_ = r7; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0C2020u: TAIL(blk_f_0C0C2020); default: JUMPD(tv_); } }  /* 0C07B068 jmp @Rn */
L_0C07B070: BLKS(0x0C07B070u);
	{ IF(0x0C07B072u); ; /* slot nop */ UPD(0x0C07AF10u, 3); goto L_0C07AF10; }  /* 0C07B070 bra */
}

void blk_f_0C07B0C0(sh3_t *c)
{
	LOCALS;
L_0C07B0C0: BLKS(0x0C07B0C0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07B0C2u, 1);  /* 0C07B0C0 mov.l Rm,@-Rn */
	r3 = 0x50u;  /* 0C07B0C2 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07B0C6u, 2);  /* 0C07B0C4 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07B0C8u, 1);  /* 0C07B0C6 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07B0CAu, 1);  /* 0C07B0C8 mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C07B0CA exts.w Rm,Rn */
	r4 = 0x2800u; UPD(0x0C07B0CEu, 2);  /* 0C07B0CC mov.w @(disp,pc),Rn */
	IF(0x0C07B0CEu); MACL = r11 * r4;  /* 0C07B0CE mul.l Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07B0D2u, 3);  /* 0C07B0D0 mov.l Rm,@-Rn */
	IF(0x0C07B0D2u); r9 = MACL;  /* 0C07B0D2 sts macl,Rn */
	r12 = (u32)(s32)(s16)r5;  /* 0C07B0D4 exts.w Rm,Rn */
	IF(0x0C07B0D6u); MACL = r12 * r3;  /* 0C07B0D6 mul.l Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C07B0DAu, 5);  /* 0C07B0D8 mov.l Rm,@-Rn */
	IF(0x0C07B0DAu); r2 = MACL;  /* 0C07B0DA sts macl,Rn */
	r0 = 0xC229004u; UPD(0x0C07B0DEu, 2);  /* 0C07B0DC mov.l @(disp,pc),Rn */
	r9 += r2;  /* 0C07B0DE add Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07B0E2u, 2);  /* 0C07B0E0 mov.l Rm,@-Rn */
	r9 += r0;  /* 0C07B0E2 add Rm,Rn */
	r8 = 0xC0769D0u; UPD(0x0C07B0E6u, 2);  /* 0C07B0E4 mov.l @(disp,pc),Rn */
	r13 = r9;  /* 0C07B0E6 mov Rm,Rn */
	IF(0x0C07B0E8u); r15 -= 4; W32(r15, PR); UPD(0x0C07B0EAu, 2);  /* 0C07B0E8 sts.l pr,@-Rn */
	r13 += 0x46u;  /* 0C07B0EA add #imm,Rn */
	r4 = (u32)(s32)(s16)R16(r13); UPD(0x0C07B0EEu, 2);  /* 0C07B0EC mov.w @Rm,Rn */
	IF(0x0C07B0EEu); { u32 t_ = r8; PR = 0x0C07B0F2u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0769D0, 0x0C0769D0u, 0x0C07B0F2u); }  /* 0C07B0EE jsr @Rn */
L_0C07B0F2: BLKS(0x0C07B0F2u);
	r1 = 0xBFu; UPD(0x0C07B0F4u, 1);  /* 0C07B0F2 mov.w @(disp,pc),Rn */
	r10 = r9;  /* 0C07B0F4 mov Rm,Rn */
	r4 = (u32)(s32)(s16)r0;  /* 0C07B0F6 exts.w Rm,Rn */
	W16(r13, r0); UPD(0x0C07B0FAu, 3);  /* 0C07B0F8 mov.w Rm,@Rn */
	T = (s32)r4 > (s32)r1;  /* 0C07B0FA cmp/gt Rm,Rn */
	{ u32 c_ = T; r10 += 0x44u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C07B104u, 4); goto L_0C07B104; } goto L_0C07B100; }  /* 0C07B0FC bt/s */
L_0C07B100: BLKS(0x0C07B100u);
	{ r1 += 0xFFFFFFF5u; /* slot add #imm,Rn */ UPD(0x0C07B2B0u, 4); goto L_0C07B2B0; }  /* 0C07B100 bra */
L_0C07B104: BLKS(0x0C07B104u);
	r5 = 0x2800u; UPD(0x0C07B106u, 1);  /* 0C07B104 mov.w @(disp,pc),Rn */
	r3 = 0x50u;  /* 0C07B106 mov #imm,Rn */
	IF(0x0C07B108u); MACL = r11 * r5;  /* 0C07B108 mul.l Rm,Rn */
	r10 = 0xC229004u; UPD(0x0C07B10Cu, 4);  /* 0C07B10A mov.l @(disp,pc),Rn */
	IF(0x0C07B10Cu); r13 = MACL;  /* 0C07B10C sts macl,Rn */
	IF(0x0C07B10Eu); MACL = r12 * r3;  /* 0C07B10E mul.l Rm,Rn */
	r8 = 0x60000u; UPD(0x0C07B112u, 4);  /* 0C07B110 mov.l @(disp,pc),Rn */
	IF(0x0C07B112u); r9 = MACL;  /* 0C07B112 sts macl,Rn */
	r9 += r13;  /* 0C07B114 add Rm,Rn */
	r9 += r10;  /* 0C07B116 add Rm,Rn */
	r10 = r9;  /* 0C07B118 mov Rm,Rn */
	r10 += 0x44u;  /* 0C07B11A add #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r10); UPD(0x0C07B11Eu, 6);  /* 0C07B11C mov.w @Rm,Rn */
	r4 = r0 & 0xFFFF;  /* 0C07B11E extu.w Rm,Rn */
	r0 = 0xC069B20u; UPD(0x0C07B122u, 2);  /* 0C07B120 mov.l @(disp,pc),Rn */
	IF(0x0C07B122u); { u32 t_ = r0; PR = 0x0C07B126u; r5 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C07B126u); }  /* 0C07B122 jsr @Rn */
L_0C07B126: BLKS(0x0C07B126u);
	r5 = r8;  /* 0C07B126 mov Rm,Rn */
	r8 = 0xC069AF0u; UPD(0x0C07B12Au, 2);  /* 0C07B128 mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s16)R16(r10); UPD(0x0C07B12Cu, 1);  /* 0C07B12A mov.w @Rm,Rn */
	W32(r9 + 0x2Cu, r0); UPD(0x0C07B12Eu, 1);  /* 0C07B12C mov.l Rm,@(disp,Rn) */
	IF(0x0C07B12Eu); { u32 t_ = r8; PR = 0x0C07B132u; r4 = r1 & 0xFFFF; /* slot extu.w Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C07B132u); }  /* 0C07B12E jsr @Rn */
L_0C07B132: BLKS(0x0C07B132u);
	r4 = R32(r9 + 0x24u); UPD(0x0C07B134u, 1);  /* 0C07B132 mov.l @(disp,Rm),Rn */
	r7 = R32(r9 + 0x28u); UPD(0x0C07B136u, 1);  /* 0C07B134 mov.l @(disp,Rm),Rn */
	r2 = R32(r9 + 0x2Cu); UPD(0x0C07B138u, 1);  /* 0C07B136 mov.l @(disp,Rm),Rn */
	r7 += r0;  /* 0C07B138 add Rm,Rn */
	r3 = 0xFF600000u; UPD(0x0C07B13Cu, 2);  /* 0C07B13A mov.l @(disp,pc),Rn */
	r4 += r2;  /* 0C07B13C add Rm,Rn */
	r3 += r4;  /* 0C07B13E add Rm,Rn */
	W32(r9 + 0x30u, r0); UPD(0x0C07B142u, 3);  /* 0C07B140 mov.l Rm,@(disp,Rn) */
	IF(0x0C07B142u); T = (s32)r3 >= 0;  /* 0C07B142 cmp/pz Rn */
	W32(r9 + 0x24u, r4); UPD(0x0C07B146u, 2);  /* 0C07B144 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = T; W32(r9 + 0x28u, r7); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C07B14Eu, 3); goto L_0C07B14E; } UPD(0x0C07B14Au, 1); goto L_0C07B14A; }  /* 0C07B146 bt/s */
L_0C07B14A: BLKS(0x0C07B14Au);
	{ r3 = 0u - r3; /* slot neg Rm,Rn */ UPD(0x0C07B260u, 3); goto L_0C07B260; }  /* 0C07B14A bra */
L_0C07B14E: BLKS(0x0C07B14Eu);
	r6 = 0xB00000u; UPD(0x0C07B150u, 1);  /* 0C07B14E mov.l @(disp,pc),Rn */
	T = (s32)r3 > (s32)r6;  /* 0C07B150 cmp/gt Rm,Rn */
	{ u32 c_ = T; r1 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07B16Eu, 4); goto L_0C07B16E; } goto L_0C07B156; }  /* 0C07B152 bt/s */
L_0C07B156: BLKS(0x0C07B156u);
	r2 = 0xC3C4048u; UPD(0x0C07B158u, 2);  /* 0C07B156 mov.l @(disp,pc),Rn */
	r4 = R32(r2); UPD(0x0C07B15Au, 1);  /* 0C07B158 mov.l @Rm,Rn */
	r2 = r7;  /* 0C07B15A mov Rm,Rn */
	r7 = 0xFF880000u; UPD(0x0C07B15Eu, 2);  /* 0C07B15C mov.l @(disp,pc),Rn */
	r2 -= r4;  /* 0C07B15E sub Rm,Rn */
	r2 += r7;  /* 0C07B160 add Rm,Rn */
	IF(0x0C07B162u); T = (s32)r2 >= 0;  /* 0C07B162 cmp/pz Rn */
	if (!T) { UPD(0x0C07B250u, 6); goto L_0C07B250; }  /* 0C07B164 bf */
L_0C07B166: BLKS(0x0C07B166u);
	r8 = 0x880000u; UPD(0x0C07B168u, 1);  /* 0C07B166 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r8;  /* 0C07B168 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r1 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07B190u, 4); goto L_0C07B190; } UPD(0x0C07B16Eu, 1); goto L_0C07B16E; }  /* 0C07B16A bf/s */
L_0C07B16E: BLKS(0x0C07B16Eu);
	W32(r9, r1); UPD(0x0C07B170u, 1);  /* 0C07B16E mov.l Rm,@Rn */
L_0C07B170: BLKS(0x0C07B170u);
	r15 = r14;  /* 0C07B170 mov Rm,Rn */
	IF(0x0C07B172u); PR = R32(r15); r15 += 4; UPD(0x0C07B174u, 2);  /* 0C07B172 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07B176u, 1);  /* 0C07B174 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07B178u, 1);  /* 0C07B176 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07B17Au, 1);  /* 0C07B178 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07B17Cu, 1);  /* 0C07B17A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07B17Eu, 1);  /* 0C07B17C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07B180u, 1);  /* 0C07B17E mov.l @Rm+,Rn */
	IF(0x0C07B180u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07B180 rts */
L_0C07B190: BLKS(0x0C07B190u);
	r1 = (u32)(s32)(s16)R16(r10); UPD(0x0C07B192u, 1);  /* 0C07B190 mov.w @Rm,Rn */
	r8 = r9;  /* 0C07B192 mov Rm,Rn */
	r0 = r1 & 0xFFFF;  /* 0C07B194 extu.w Rm,Rn */
	r0 += 0x4u;  /* 0C07B196 add #imm,Rn */
	IF(0x0C07B198u); r0 >>= 2;  /* 0C07B198 shlr2 Rn */
	IF(0x0C07B19Au); T = r0 & 1; r0 >>= 1;  /* 0C07B19A shlr Rn */
	r0 &= 0x3Fu;  /* 0C07B19C and #imm,r0 */
	W32(r9 + 0x8u, r0); UPD(0x0C07B1A0u, 7);  /* 0C07B19E mov.l Rm,@(disp,Rn) */
	r8 += 0x48u;  /* 0C07B1A0 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r8); UPD(0x0C07B1A4u, 2);  /* 0C07B1A2 mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C07B1A4 add #imm,Rn */
	W8(r8, r0); UPD(0x0C07B1A8u, 2);  /* 0C07B1A6 mov.b Rm,@Rn */
	r0 &= 0x1u;  /* 0C07B1A8 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C07B1AA tst Rm,Rn */
	if (T) { UPD(0x0C07B1B6u, 5); goto L_0C07B1B6; }  /* 0C07B1AC bt */
L_0C07B1AE: BLKS(0x0C07B1AEu);
	r0 = R32(r9 + 0xCu); UPD(0x0C07B1B0u, 1);  /* 0C07B1AE mov.l @(disp,Rm),Rn */
	r0 += 0x1u;  /* 0C07B1B0 add #imm,Rn */
	r0 &= 0x3u;  /* 0C07B1B2 and #imm,r0 */
	W32(r9 + 0xCu, r0); UPD(0x0C07B1B6u, 3);  /* 0C07B1B4 mov.l Rm,@(disp,Rn) */
L_0C07B1B6: BLKS(0x0C07B1B6u);
	r0 = 0xC079F30u; UPD(0x0C07B1B8u, 1);  /* 0C07B1B6 mov.l @(disp,pc),Rn */
	r5 = r12;  /* 0C07B1B8 mov Rm,Rn */
	IF(0x0C07B1BAu); { u32 t_ = r0; PR = 0x0C07B1BEu; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C079F30, 0x0C079F30u, 0x0C07B1BEu); }  /* 0C07B1BA jsr @Rn */
L_0C07B1BE: BLKS(0x0C07B1BEu);
	r12 = (u32)(s32)(s8)R8(r8); UPD(0x0C07B1C0u, 1);  /* 0C07B1BE mov.b @Rm,Rn */
	r10 = 0x3u;  /* 0C07B1C0 mov #imm,Rn */
	r10 &= r12;  /* 0C07B1C2 and Rm,Rn */
	T = (r10 & r10) == 0;  /* 0C07B1C4 tst Rm,Rn */
	if (!T) { UPD(0x0C07B170u, 6); goto L_0C07B170; }  /* 0C07B1C6 bf */
L_0C07B1C8: BLKS(0x0C07B1C8u);
	r4 = r11;  /* 0C07B1C8 mov Rm,Rn */
	r8 = 0xC079F80u; UPD(0x0C07B1CCu, 2);  /* 0C07B1CA mov.l @(disp,pc),Rn */
	IF(0x0C07B1CCu); { u32 t_ = r8; PR = 0x0C07B1D0u; r5 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C079F80, 0x0C079F80u, 0x0C07B1D0u); }  /* 0C07B1CC jsr @Rn */
L_0C07B1D0: BLKS(0x0C07B1D0u);
	T = (r0 & r0) == 0;  /* 0C07B1D0 tst Rm,Rn */
	if (!T) { UPD(0x0C07B1F0u, 4); goto L_0C07B1F0; }  /* 0C07B1D2 bf */
L_0C07B1D4: BLKS(0x0C07B1D4u);
	r1 = r9;  /* 0C07B1D4 mov Rm,Rn */
	UPD(0x0C07B1D6u, 1);
L_0C07B1D6: BLKS(0x0C07B1D6u);
	r1 += 0x49u;  /* 0C07B1D6 add #imm,Rn */
	r10 = (u32)(s32)(s8)R8(r1); UPD(0x0C07B1DAu, 2);  /* 0C07B1D8 mov.b @Rm,Rn */
	r10 += 0xFFFFFFFFu;  /* 0C07B1DA add #imm,Rn */
	W8(r1, r10); UPD(0x0C07B1DEu, 2);  /* 0C07B1DC mov.b Rm,@Rn */
	r1 = r10 & 0xFF;  /* 0C07B1DE extu.b Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C07B1E0 tst Rm,Rn */
	if (T) { UPD(0x0C07B16Eu, 5); goto L_0C07B16E; }  /* 0C07B1E2 bt */
L_0C07B1E4: BLKS(0x0C07B1E4u);
	{ IF(0x0C07B1E6u); ; /* slot nop */ UPD(0x0C07B170u, 3); goto L_0C07B170; }  /* 0C07B1E4 bra */
L_0C07B1F0: BLKS(0x0C07B1F0u);
	r3 = 0xC28EDFCu; UPD(0x0C07B1F2u, 1);  /* 0C07B1F0 mov.l @(disp,pc),Rn */
	r12 = 0x50u;  /* 0C07B1F2 mov #imm,Rn */
	r5 = (u32)(s32)(s16)R16(r3); UPD(0x0C07B1F6u, 2);  /* 0C07B1F4 mov.w @Rm,Rn */
	r11 += 0x40u;  /* 0C07B1F6 add #imm,Rn */
	IF(0x0C07B1F8u); MACL = r5 * r12;  /* 0C07B1F8 mul.l Rm,Rn */
	r8 = 0xC229004u; UPD(0x0C07B1FCu, 4);  /* 0C07B1FA mov.l @(disp,pc),Rn */
	IF(0x0C07B1FCu); r12 = MACL;  /* 0C07B1FC sts macl,Rn */
	r12 += r13;  /* 0C07B1FE add Rm,Rn */
	r12 += r8;  /* 0C07B200 add Rm,Rn */
	W32(r12 + 0x8u, r11); UPD(0x0C07B204u, 4);  /* 0C07B202 mov.l Rm,@(disp,Rn) */
	r13 = r12;  /* 0C07B204 mov Rm,Rn */
	r2 = 0xC079E80u; UPD(0x0C07B208u, 2);  /* 0C07B206 mov.l @(disp,pc),Rn */
	r11 += 0xFFFFFFC0u;  /* 0C07B208 add #imm,Rn */
	r0 = 0xCD000000u; UPD(0x0C07B20Cu, 2);  /* 0C07B20A mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C07B20C mov Rm,Rn */
	W32(r12, r0); UPD(0x0C07B210u, 2);  /* 0C07B20E mov.l Rm,@Rn */
	r13 += 0x40u;  /* 0C07B210 add #imm,Rn */
	W32(r12 + 0x4u, r10); UPD(0x0C07B214u, 2);  /* 0C07B212 mov.l Rm,@(disp,Rn) */
	IF(0x0C07B214u); { u32 t_ = r2; PR = 0x0C07B218u; W32(r12 + 0xCu, r10); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C079E80, 0x0C079E80u, 0x0C07B218u); }  /* 0C07B214 jsr @Rn */
L_0C07B218: BLKS(0x0C07B218u);
	r4 = 0x204B0B0u; UPD(0x0C07B21Au, 1);  /* 0C07B218 mov.l @(disp,pc),Rn */
	W32(r12 + 0x3Cu, r4); UPD(0x0C07B21Cu, 1);  /* 0C07B21A mov.l Rm,@(disp,Rn) */
	r5 = R32(r9 + 0x28u); UPD(0x0C07B21Eu, 1);  /* 0C07B21C mov.l @(disp,Rm),Rn */
	r4 = r11;  /* 0C07B21E mov Rm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C07B222u, 2);  /* 0C07B220 mov.l @(disp,Rm),Rn */
	r7 = 0x808080u; UPD(0x0C07B224u, 1);  /* 0C07B222 mov.l @(disp,pc),Rn */
	r9 += 0x4Au;  /* 0C07B224 add #imm,Rn */
	W32(r12 + 0x28u, r5); UPD(0x0C07B228u, 2);  /* 0C07B226 mov.l Rm,@(disp,Rn) */
	W32(r13, r7); UPD(0x0C07B22Au, 1);  /* 0C07B228 mov.l Rm,@Rn */
	r5 = 0x54u;  /* 0C07B22A mov #imm,Rn */
	W32(r12 + 0x24u, r6); UPD(0x0C07B22Eu, 2);  /* 0C07B22C mov.l Rm,@(disp,Rn) */
	r13 += 0x8u;  /* 0C07B22E add #imm,Rn */
	r11 = 0xC0C2020u; UPD(0x0C07B232u, 2);  /* 0C07B230 mov.l @(disp,pc),Rn */
	r12 += 0x4Au;  /* 0C07B232 add #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r9); UPD(0x0C07B236u, 2);  /* 0C07B234 mov.b @Rm,Rn */
	W8(r13, r10); UPD(0x0C07B238u, 1);  /* 0C07B236 mov.b Rm,@Rn */
	r9 += 0xFFFFFFB6u;  /* 0C07B238 add #imm,Rn */
	IF(0x0C07B23Au); { u32 t_ = r11; PR = 0x0C07B23Eu; W8(r12, r3); /* slot mov.b Rm,@Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0C2020, 0x0C0C2020u, 0x0C07B23Eu); }  /* 0C07B23A jsr @Rn */
L_0C07B23E: BLKS(0x0C07B23Eu);
	{ r1 = r9; /* slot mov Rm,Rn */ UPD(0x0C07B1D6u, 3); goto L_0C07B1D6; }  /* 0C07B23E bra */
L_0C07B250: BLKS(0x0C07B250u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C07B166u, 3); goto L_0C07B166; }  /* 0C07B250 bra */
L_0C07B260: BLKS(0x0C07B260u);
	{ IF(0x0C07B262u); ; /* slot nop */ UPD(0x0C07B14Eu, 3); goto L_0C07B14E; }  /* 0C07B260 bra */
L_0C07B2B0: BLKS(0x0C07B2B0u);
	IF(0x0C07B2B0u); MACL = r4 * r1;  /* 0C07B2B0 mul.l Rm,Rn */
	r5 = R32(r9 + 0x28u); UPD(0x0C07B2B4u, 3);  /* 0C07B2B2 mov.l @(disp,Rm),Rn */
	r4 = R32(r9 + 0x24u); UPD(0x0C07B2B6u, 1);  /* 0C07B2B4 mov.l @(disp,Rm),Rn */
	IF(0x0C07B2B6u); r13 = MACL;  /* 0C07B2B6 sts macl,Rn */
	r6 = 0xC286578u; UPD(0x0C07B2BAu, 2);  /* 0C07B2B8 mov.l @(disp,pc),Rn */
	r9 = 0xC068E60u; UPD(0x0C07B2BCu, 1);  /* 0C07B2BA mov.l @(disp,pc),Rn */
	r13 += r6;  /* 0C07B2BC add Rm,Rn */
	r6 = R32(r13 + 0x24u); UPD(0x0C07B2C0u, 2);  /* 0C07B2BE mov.l @(disp,Rm),Rn */
	IF(0x0C07B2C0u); { u32 t_ = r9; PR = 0x0C07B2C4u; r7 = R32(r13 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C068E60, 0x0C068E60u, 0x0C07B2C4u); }  /* 0C07B2C0 jsr @Rn */
L_0C07B2C4: BLKS(0x0C07B2C4u);
	r2 = (u32)(s32)(s16)R16(r10); UPD(0x0C07B2C6u, 1);  /* 0C07B2C4 mov.w @Rm,Rn */
	r0 = (u32)(s32)(s16)r0;  /* 0C07B2C6 exts.w Rm,Rn */
	r3 = 0x1FFu; UPD(0x0C07B2CAu, 2);  /* 0C07B2C8 mov.w @(disp,pc),Rn */
	r5 = r2;  /* 0C07B2CA mov Rm,Rn */
	r5 &= r3;  /* 0C07B2CC and Rm,Rn */
	T = r0 == r5;  /* 0C07B2CE cmp/eq Rm,Rn */
	{ u32 c_ = T; r0 -= r2; /* slot sub Rm,Rn */ if (c_) { UPD(0x0C07B2E4u, 6); goto L_0C07B2E4; } goto L_0C07B2D4; }  /* 0C07B2D0 bt/s */
L_0C07B2D4: BLKS(0x0C07B2D4u);
	r7 = 0x100u; UPD(0x0C07B2D6u, 2);  /* 0C07B2D4 mov.w @(disp,pc),Rn */
	r0 += r7;  /* 0C07B2D6 add Rm,Rn */
	r0 &= r3;  /* 0C07B2D8 and Rm,Rn */
	T = (s32)r0 > (s32)r7;  /* 0C07B2DA cmp/gt Rm,Rn */
	{ u32 c_ = !T; r1 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07B2F0u, 6); goto L_0C07B2F0; } goto L_0C07B2E0; }  /* 0C07B2DC bf/s */
L_0C07B2E0: BLKS(0x0C07B2E0u);
	r1 += 0x8u;  /* 0C07B2E0 add #imm,Rn */
	UPD(0x0C07B2E2u, 2);
L_0C07B2E2: BLKS(0x0C07B2E2u);
	W16(r10, r1); UPD(0x0C07B2E4u, 1);  /* 0C07B2E2 mov.w Rm,@Rn */
L_0C07B2E4: BLKS(0x0C07B2E4u);
	{ IF(0x0C07B2E6u); ; /* slot nop */ UPD(0x0C07B104u, 3); goto L_0C07B104; }  /* 0C07B2E4 bra */
L_0C07B2F0: BLKS(0x0C07B2F0u);
	r8 = 0xFFu; UPD(0x0C07B2F2u, 1);  /* 0C07B2F0 mov.w @(disp,pc),Rn */
	T = (s32)r0 > (s32)r8;  /* 0C07B2F2 cmp/gt Rm,Rn */
	{ u32 c_ = T; r1 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07B2E4u, 4); goto L_0C07B2E4; } goto L_0C07B2F8; }  /* 0C07B2F4 bt/s */
L_0C07B2F8: BLKS(0x0C07B2F8u);
	{ r1 += 0xFFFFFFF8u; /* slot add #imm,Rn */ UPD(0x0C07B2E2u, 4); goto L_0C07B2E2; }  /* 0C07B2F8 bra */
}

void blk_f_0C07B310(sh3_t *c)
{
	LOCALS;
L_0C07B310: BLKS(0x0C07B310u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07B312u, 1);  /* 0C07B310 mov.l Rm,@-Rn */
	r14 = r15;  /* 0C07B312 mov Rm,Rn */
	r15 = r14;  /* 0C07B314 mov Rm,Rn */
	IF(0x0C07B316u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C07B316 rts */
}

void blk_f_0C07B3F0(sh3_t *c)
{
	LOCALS;
L_0C07B3F0: BLKS(0x0C07B3F0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07B3F2u, 1);  /* 0C07B3F0 mov.l Rm,@-Rn */
	r5 = (u32)(s32)(s16)r5;  /* 0C07B3F2 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07B3F6u, 2);  /* 0C07B3F4 mov.l Rm,@-Rn */
	r2 = 0x50u;  /* 0C07B3F6 mov #imm,Rn */
	r3 = 0x2800u; UPD(0x0C07B3FAu, 2);  /* 0C07B3F8 mov.w @(disp,pc),Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C07B3FA exts.w Rm,Rn */
	IF(0x0C07B3FCu); MACL = r9 * r3;  /* 0C07B3FC mul.l Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07B400u, 4);  /* 0C07B3FE mov.l Rm,@-Rn */
	IF(0x0C07B400u); r8 = MACL;  /* 0C07B400 sts macl,Rn */
	IF(0x0C07B402u); MACL = r5 * r2;  /* 0C07B402 mul.l Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07B406u, 4);  /* 0C07B404 mov.l Rm,@-Rn */
	IF(0x0C07B406u); r0 = MACL;  /* 0C07B406 sts macl,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07B40Au, 2);  /* 0C07B408 mov.l Rm,@-Rn */
	r8 += r0;  /* 0C07B40A add Rm,Rn */
	r0 = 0xC229004u; UPD(0x0C07B40Eu, 2);  /* 0C07B40C mov.l @(disp,pc),Rn */
	r11 = (u32)(s32)(s16)r6;  /* 0C07B40E exts.w Rm,Rn */
	IF(0x0C07B410u); r15 -= 4; W32(r15, PR); UPD(0x0C07B412u, 2);  /* 0C07B410 sts.l pr,@-Rn */
	r8 += r0;  /* 0C07B412 add Rm,Rn */
	r0 = R32(r8 + 0x8u); UPD(0x0C07B416u, 2);  /* 0C07B414 mov.l @(disp,Rm),Rn */
	T = r0 == 0x1u;  /* 0C07B416 cmp/eq #imm,r0 */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07B430u, 4); goto L_0C07B430; } UPD(0x0C07B41Cu, 1); goto L_0C07B41C; }  /* 0C07B418 bt/s */
L_0C07B41C: BLKS(0x0C07B41Cu);
	r15 = r14;  /* 0C07B41C mov Rm,Rn */
	IF(0x0C07B41Eu); PR = R32(r15); r15 += 4; UPD(0x0C07B420u, 2);  /* 0C07B41E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07B422u, 1);  /* 0C07B420 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07B424u, 1);  /* 0C07B422 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07B426u, 1);  /* 0C07B424 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07B428u, 1);  /* 0C07B426 mov.l @Rm+,Rn */
	IF(0x0C07B428u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07B428 rts */
L_0C07B430: BLKS(0x0C07B430u);
	r7 = 0xB4u; UPD(0x0C07B432u, 1);  /* 0C07B430 mov.w @(disp,pc),Rn */
	IF(0x0C07B432u); MACL = r11 * r7;  /* 0C07B432 mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C07B436u, 3);  /* 0C07B434 mov.l @(disp,pc),Rn */
	IF(0x0C07B436u); r10 = MACL;  /* 0C07B436 sts macl,Rn */
	r10 += r6;  /* 0C07B438 add Rm,Rn */
	r1 = R32(r10); UPD(0x0C07B43Cu, 3);  /* 0C07B43A mov.l @Rm,Rn */
	r4 = 0x8000u; UPD(0x0C07B43Eu, 1);  /* 0C07B43C mov.l @(disp,pc),Rn */
	T = (r1 & r4) == 0;  /* 0C07B43E tst Rm,Rn */
	if (T) { UPD(0x0C07B41Cu, 4); goto L_0C07B41C; }  /* 0C07B440 bt */
L_0C07B442: BLKS(0x0C07B442u);
	r4 = 0x3u;  /* 0C07B442 mov #imm,Rn */
	r0 = 0xC079F30u; UPD(0x0C07B446u, 2);  /* 0C07B444 mov.l @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C07B446 mov #imm,Rn */
	W32(r8 + 0x8u, r4); UPD(0x0C07B44Au, 2);  /* 0C07B448 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0xCu, r3); UPD(0x0C07B44Cu, 1);  /* 0C07B44A mov.l Rm,@(disp,Rn) */
	IF(0x0C07B44Cu); { u32 t_ = r0; PR = 0x0C07B450u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C079F30, 0x0C079F30u, 0x0C07B450u); }  /* 0C07B44C jsr @Rn */
L_0C07B450: BLKS(0x0C07B450u);
	r8 += 0x49u;  /* 0C07B450 add #imm,Rn */
	r2 = 0xFu;  /* 0C07B452 mov #imm,Rn */
	W8(r8, r2); UPD(0x0C07B456u, 3);  /* 0C07B454 mov.b Rm,@Rn */
	r8 += 0xFFFFFFB7u;  /* 0C07B456 add #imm,Rn */
	r6 = R32(r8); UPD(0x0C07B45Au, 2);  /* 0C07B458 mov.l @Rm,Rn */
	r7 = 0x4000u; UPD(0x0C07B45Cu, 1);  /* 0C07B45A mov.w @(disp,pc),Rn */
	r6 |= r7;  /* 0C07B45C or Rm,Rn */
	W32(r8, r6); UPD(0x0C07B460u, 2);  /* 0C07B45E mov.l Rm,@Rn */
	r4 = R32(r8 + 0x24u); UPD(0x0C07B462u, 1);  /* 0C07B460 mov.l @(disp,Rm),Rn */
	r1 = R32(r10 + 0x24u); UPD(0x0C07B464u, 1);  /* 0C07B462 mov.l @(disp,Rm),Rn */
	r4 -= r1;  /* 0C07B464 sub Rm,Rn */
	W32(r8 + 0x2Cu, r4); UPD(0x0C07B468u, 2);  /* 0C07B466 mov.l Rm,@(disp,Rn) */
	r0 = R32(r8 + 0x28u); UPD(0x0C07B46Au, 1);  /* 0C07B468 mov.l @(disp,Rm),Rn */
	r4 = r9;  /* 0C07B46A mov Rm,Rn */
	r3 = R32(r10 + 0x28u); UPD(0x0C07B46Eu, 2);  /* 0C07B46C mov.l @(disp,Rm),Rn */
	r0 -= r3;  /* 0C07B46E sub Rm,Rn */
	W32(r8 + 0x30u, r0); UPD(0x0C07B472u, 2);  /* 0C07B470 mov.l Rm,@(disp,Rn) */
	r8 += 0x4Cu;  /* 0C07B472 add #imm,Rn */
	W16(r8, r11); UPD(0x0C07B476u, 2);  /* 0C07B474 mov.w Rm,@Rn */
	r5 = 0x204C0C0u; UPD(0x0C07B478u, 1);  /* 0C07B476 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFB4u;  /* 0C07B478 add #imm,Rn */
	W32(r8 + 0x3Cu, r5); UPD(0x0C07B47Cu, 2);  /* 0C07B47A mov.l Rm,@(disp,Rn) */
	r8 = 0xC0C2020u; UPD(0x0C07B47Eu, 1);  /* 0C07B47C mov.l @(disp,pc),Rn */
	IF(0x0C07B47Eu); { u32 t_ = r8; PR = 0x0C07B482u; r5 = 0x7Du; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2020, 0x0C0C2020u, 0x0C07B482u); }  /* 0C07B47E jsr @Rn */
L_0C07B482: BLKS(0x0C07B482u);
	{ IF(0x0C07B484u); ; /* slot nop */ UPD(0x0C07B41Cu, 3); goto L_0C07B41C; }  /* 0C07B482 bra */
}

void blk_f_0C07B580(sh3_t *c)
{
	LOCALS;
L_0C07B580: BLKS(0x0C07B580u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07B582u, 1);  /* 0C07B580 mov.l Rm,@-Rn */
	r14 = r15;  /* 0C07B582 mov Rm,Rn */
	r15 = r14;  /* 0C07B584 mov Rm,Rn */
	IF(0x0C07B586u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C07B586 rts */
}

void blk_f_0C07B590(sh3_t *c)
{
	LOCALS;
L_0C07B590: BLKS(0x0C07B590u);
	r2 = 0x2800u; UPD(0x0C07B592u, 1);  /* 0C07B590 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C07B592 exts.w Rm,Rn */
	IF(0x0C07B594u); MACL = r4 * r2;  /* 0C07B594 mul.l Rm,Rn */
	r6 = 0x50u;  /* 0C07B596 mov #imm,Rn */
	r5 = (u32)(s32)(s16)r5;  /* 0C07B598 exts.w Rm,Rn */
	IF(0x0C07B59Au); r2 = MACL;  /* 0C07B59A sts macl,Rn */
	IF(0x0C07B59Cu); MACL = r5 * r6;  /* 0C07B59C mul.l Rm,Rn */
	r3 = 0x2A0u; UPD(0x0C07B5A0u, 9);  /* 0C07B59E mov.w @(disp,pc),Rn */
	IF(0x0C07B5A0u); r0 = MACL;  /* 0C07B5A0 sts macl,Rn */
	IF(0x0C07B5A2u); MACL = r4 * r3;  /* 0C07B5A2 mul.l Rm,Rn */
	r6 = 0xC29D1D8u; UPD(0x0C07B5A6u, 4);  /* 0C07B5A4 mov.l @(disp,pc),Rn */
	r2 += r0;  /* 0C07B5A6 add Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07B5AAu, 2);  /* 0C07B5A8 mov.l Rm,@-Rn */
	IF(0x0C07B5AAu); r3 = MACL;  /* 0C07B5AA sts macl,Rn */
	r3 += r6;  /* 0C07B5AC add Rm,Rn */
	r7 = 0xC229004u; UPD(0x0C07B5B0u, 3);  /* 0C07B5AE mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C07B5B0 mov Rm,Rn */
	r0 = R32(r3 + 0x10u); UPD(0x0C07B5B4u, 2);  /* 0C07B5B2 mov.l @(disp,Rm),Rn */
	r2 += r7;  /* 0C07B5B4 add Rm,Rn */
	W32(r2 + 0x24u, r0); UPD(0x0C07B5B8u, 2);  /* 0C07B5B6 mov.l Rm,@(disp,Rn) */
	r0 = R32(r3 + 0x14u); UPD(0x0C07B5BAu, 1);  /* 0C07B5B8 mov.l @(disp,Rm),Rn */
	W32(r2 + 0x28u, r0); UPD(0x0C07B5BCu, 1);  /* 0C07B5BA mov.l Rm,@(disp,Rn) */
	r0 = R32(r2 + 0xCu); UPD(0x0C07B5BEu, 1);  /* 0C07B5BC mov.l @(disp,Rm),Rn */
	r0 += 0x1u;  /* 0C07B5BE add #imm,Rn */
	T = r0 == 0x10u;  /* 0C07B5C0 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W32(r2 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C07B5F0u, 5); goto L_0C07B5F0; } UPD(0x0C07B5C6u, 1); goto L_0C07B5C6; }  /* 0C07B5C2 bf/s */
L_0C07B5C6: BLKS(0x0C07B5C6u);
	r7 = 0x0u;  /* 0C07B5C6 mov #imm,Rn */
	W32(r2, r7); UPD(0x0C07B5CAu, 2);  /* 0C07B5C8 mov.l Rm,@Rn */
	r2 = 0x286u; UPD(0x0C07B5CCu, 1);  /* 0C07B5CA mov.w @(disp,pc),Rn */
	r2 += r3;  /* 0C07B5CC add Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r2); UPD(0x0C07B5D0u, 2);  /* 0C07B5CE mov.b @Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C07B5D0 tst Rm,Rn */
	if (T) { UPD(0x0C07B5DCu, 4); goto L_0C07B5DC; }  /* 0C07B5D2 bt */
L_0C07B5D4: BLKS(0x0C07B5D4u);
	r5 = 0x280u; UPD(0x0C07B5D6u, 1);  /* 0C07B5D4 mov.w @(disp,pc),Rn */
	r3 += r5;  /* 0C07B5D6 add Rm,Rn */
	W32(r3, r7); UPD(0x0C07B5DAu, 2);  /* 0C07B5D8 mov.l Rm,@Rn */
	W8(r2, r7); UPD(0x0C07B5DCu, 1);  /* 0C07B5DA mov.b Rm,@Rn */
L_0C07B5DC: BLKS(0x0C07B5DCu);
	r15 = r14;  /* 0C07B5DC mov Rm,Rn */
	IF(0x0C07B5DEu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C07B5DE rts */
L_0C07B5F0: BLKS(0x0C07B5F0u);
	r3 = 0xC079EF0u; UPD(0x0C07B5F2u, 1);  /* 0C07B5F0 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C07B5F2 mov Rm,Rn */
	IF(0x0C07B5F4u); { u32 tv_ = r3; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C079EF0u: TAIL(blk_f_0C079EF0); default: JUMPD(tv_); } }  /* 0C07B5F4 jmp @Rn */
}

void blk_f_0C07B610(sh3_t *c)
{
	LOCALS;
L_0C07B610: BLKS(0x0C07B610u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07B612u, 1);  /* 0C07B610 mov.l Rm,@-Rn */
	r14 = r15;  /* 0C07B612 mov Rm,Rn */
	r15 = r14;  /* 0C07B614 mov Rm,Rn */
	IF(0x0C07B616u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C07B616 rts */
}

/* FUN_0c07b620 */
void blk_f_0C07B620(sh3_t *c)
{
	LOCALS;
L_0C07B620: BLKS(0x0C07B620u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07B622u, 1);  /* 0C07B620 mov.l Rm,@-Rn */
	r5 = 0x1u;  /* 0C07B622 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07B626u, 2);  /* 0C07B624 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07B628u, 1);  /* 0C07B626 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07B62Au, 1);  /* 0C07B628 mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s16)r4;  /* 0C07B62A exts.w Rm,Rn */
	r8 = 0xC079F80u; UPD(0x0C07B62Eu, 2);  /* 0C07B62C mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C07B62E mov Rm,Rn */
	IF(0x0C07B630u); r15 -= 4; W32(r15, PR); UPD(0x0C07B632u, 2);  /* 0C07B630 sts.l pr,@-Rn */
	IF(0x0C07B632u); { u32 t_ = r8; PR = 0x0C07B636u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C079F80, 0x0C079F80u, 0x0C07B636u); }  /* 0C07B632 jsr @Rn */
L_0C07B636: BLKS(0x0C07B636u);
	T = (r0 & r0) == 0;  /* 0C07B636 tst Rm,Rn */
	if (!T) { UPD(0x0C07B650u, 4); goto L_0C07B650; }  /* 0C07B638 bf */
L_0C07B63A: BLKS(0x0C07B63Au);
	r15 = r14;  /* 0C07B63A mov Rm,Rn */
	IF(0x0C07B63Cu); PR = R32(r15); r15 += 4; UPD(0x0C07B63Eu, 2);  /* 0C07B63C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07B640u, 1);  /* 0C07B63E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07B642u, 1);  /* 0C07B640 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07B644u, 1);  /* 0C07B642 mov.l @Rm+,Rn */
	IF(0x0C07B644u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07B644 rts */
L_0C07B650: BLKS(0x0C07B650u);
	r8 = 0x2800u; UPD(0x0C07B652u, 1);  /* 0C07B650 mov.w @(disp,pc),Rn */
	r6 = 0x50u;  /* 0C07B652 mov #imm,Rn */
	r7 = 0xC28EDFCu; UPD(0x0C07B656u, 2);  /* 0C07B654 mov.l @(disp,pc),Rn */
	IF(0x0C07B656u); MACL = r10 * r8;  /* 0C07B656 mul.l Rm,Rn */
	r5 = (u32)(s32)(s16)R16(r7); UPD(0x0C07B65Au, 3);  /* 0C07B658 mov.w @Rm,Rn */
	IF(0x0C07B65Au); r8 = MACL;  /* 0C07B65A sts macl,Rn */
	IF(0x0C07B65Cu); MACL = r5 * r6;  /* 0C07B65C mul.l Rm,Rn */
	r4 = 0xC229004u; UPD(0x0C07B660u, 4);  /* 0C07B65E mov.l @(disp,pc),Rn */
	r10 += 0x9u;  /* 0C07B660 add #imm,Rn */
	IF(0x0C07B662u); r2 = MACL;  /* 0C07B662 sts macl,Rn */
	r8 += r2;  /* 0C07B664 add Rm,Rn */
	r9 = 0xCD000000u; UPD(0x0C07B668u, 4);  /* 0C07B666 mov.l @(disp,pc),Rn */
	r8 += r4;  /* 0C07B668 add Rm,Rn */
	W32(r8, r9); UPD(0x0C07B66Cu, 2);  /* 0C07B66A mov.l Rm,@Rn */
	W32(r8 + 0x4u, r10); UPD(0x0C07B66Eu, 1);  /* 0C07B66C mov.l Rm,@(disp,Rn) */
	r9 = 0x0u;  /* 0C07B66E mov #imm,Rn */
	r3 = 0xC079E80u; UPD(0x0C07B672u, 2);  /* 0C07B670 mov.l @(disp,pc),Rn */
	r10 += 0xFFFFFFF7u;  /* 0C07B672 add #imm,Rn */
	W32(r8 + 0xCu, r9); UPD(0x0C07B676u, 2);  /* 0C07B674 mov.l Rm,@(disp,Rn) */
	r4 = r10;  /* 0C07B676 mov Rm,Rn */
	IF(0x0C07B678u); { u32 t_ = r3; PR = 0x0C07B67Cu; W32(r8 + 0x8u, r9); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C079E80, 0x0C079E80u, 0x0C07B67Cu); }  /* 0C07B678 jsr @Rn */
L_0C07B67C: BLKS(0x0C07B67Cu);
	r0 = 0x207C0C0u; UPD(0x0C07B67Eu, 1);  /* 0C07B67C mov.l @(disp,pc),Rn */
	r6 = 0x2A0u; UPD(0x0C07B680u, 1);  /* 0C07B67E mov.w @(disp,pc),Rn */
	W32(r8 + 0x3Cu, r0); UPD(0x0C07B682u, 1);  /* 0C07B680 mov.l Rm,@(disp,Rn) */
	IF(0x0C07B682u); MACL = r10 * r6;  /* 0C07B682 mul.l Rm,Rn */
	r7 = 0x808080u; UPD(0x0C07B686u, 3);  /* 0C07B684 mov.l @(disp,pc),Rn */
	r8 += 0x40u;  /* 0C07B686 add #imm,Rn */
	r5 = 0xC29D1D8u; UPD(0x0C07B68Au, 2);  /* 0C07B688 mov.l @(disp,pc),Rn */
	IF(0x0C07B68Au); r4 = MACL;  /* 0C07B68A sts macl,Rn */
	W32(r8, r7); UPD(0x0C07B68Eu, 2);  /* 0C07B68C mov.l Rm,@Rn */
	r4 += r5;  /* 0C07B68E add Rm,Rn */
	r2 = R32(r4 + 0x10u); UPD(0x0C07B692u, 2);  /* 0C07B690 mov.l @(disp,Rm),Rn */
	r8 += 0xFFFFFFC0u;  /* 0C07B692 add #imm,Rn */
	W32(r8 + 0x24u, r2); UPD(0x0C07B696u, 2);  /* 0C07B694 mov.l Rm,@(disp,Rn) */
	r0 = 0x14u;  /* 0C07B696 mov #imm,Rn */
	r3 = R32(r4 + 0x14u); UPD(0x0C07B69Au, 2);  /* 0C07B698 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x28u, r3); UPD(0x0C07B69Cu, 1);  /* 0C07B69A mov.l Rm,@(disp,Rn) */
	r8 += 0x4Au;  /* 0C07B69C add #imm,Rn */
	W8(r8, r0); UPD(0x0C07B6A0u, 2);  /* 0C07B69E mov.b Rm,@Rn */
	r8 += 0xFFFFFFFEu;  /* 0C07B6A0 add #imm,Rn */
	{ W8(r8, r9); /* slot mov.b Rm,@Rn */ UPD(0x0C07B63Au, 4); goto L_0C07B63A; }  /* 0C07B6A2 bra */
}

/* FUN_0c07b750 */
void blk_f_0C07B750(sh3_t *c)
{
	LOCALS;
L_0C07B750: BLKS(0x0C07B750u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07B752u, 1);  /* 0C07B750 mov.l Rm,@-Rn */
	r6 = 0x0u;  /* 0C07B752 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07B756u, 2);  /* 0C07B754 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07B758u, 1);  /* 0C07B756 mov.l Rm,@-Rn */
	r7 = 0xC229004u; UPD(0x0C07B75Au, 1);  /* 0C07B758 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07B75Cu, 1);  /* 0C07B75A mov.l Rm,@-Rn */
	r4 = 0x40000000u; UPD(0x0C07B75Eu, 1);  /* 0C07B75C mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C07B75E mov Rm,Rn */
	r9 = 0xC2AC168u; UPD(0x0C07B762u, 2);  /* 0C07B760 mov.l @(disp,pc),Rn */
	r8 = 0xC3C3FD0u; UPD(0x0C07B764u, 1);  /* 0C07B762 mov.l @(disp,pc),Rn */
	r5 = 0xFFu; UPD(0x0C07B766u, 1);  /* 0C07B764 mov.w @(disp,pc),Rn */
	IF(0x0C07B766u); ;  /* 0C07B766 nop */
	UPD(0x0C07B768u, 1);
L_0C07B768: BLKS(0x0C07B768u);
	r0 = R32(r7); UPD(0x0C07B76Au, 1);  /* 0C07B768 mov.l @Rm,Rn */
	T = (r0 & r4) == 0;  /* 0C07B76A tst Rm,Rn */
	if (T) { UPD(0x0C07B78Eu, 4); goto L_0C07B78E; }  /* 0C07B76C bt */
L_0C07B76E: BLKS(0x0C07B76Eu);
	r7 += 0x4Au;  /* 0C07B76E add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r7); UPD(0x0C07B772u, 2);  /* 0C07B770 mov.b @Rm,Rn */
	r10 = 0x7u;  /* 0C07B772 mov #imm,Rn */
	r0 &= 0x1Fu;  /* 0C07B774 and #imm,r0 */
	r0 += r0;  /* 0C07B776 add Rm,Rn */
	r3 = r0;  /* 0C07B778 mov Rm,Rn */
	r3 += r8;  /* 0C07B77A add Rm,Rn */
	r1 = (u32)(s32)(s16)R16(r3); UPD(0x0C07B77Eu, 6);  /* 0C07B77C mov.w @Rm,Rn */
	IF(0x0C07B77Eu); ARG0(0x40ADu); { s32 s_ = (s32)r10; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C07B77E shld Rm,Rn */
	r2 = r1 & 0xFFFF;  /* 0C07B780 extu.w Rm,Rn */
	r0 += r2;  /* 0C07B782 add Rm,Rn */
	r0 += r0;  /* 0C07B784 add Rm,Rn */
	r1 += 0x1u;  /* 0C07B786 add #imm,Rn */
	IF(0x0C07B788u); W16(r0 + r9, r6); UPD(0x0C07B78Au, 6);  /* 0C07B788 mov.w Rm,@(r0,Rn) */
	r7 += 0xFFFFFFB6u;  /* 0C07B78A add #imm,Rn */
	W16(r3, r1); UPD(0x0C07B78Eu, 2);  /* 0C07B78C mov.w Rm,@Rn */
L_0C07B78E: BLKS(0x0C07B78Eu);
	r6 += 0x1u;  /* 0C07B78E add #imm,Rn */
	T = (s32)r6 > (s32)r5;  /* 0C07B790 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r7 += 0x50u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C07B768u, 5); goto L_0C07B768; } goto L_0C07B796; }  /* 0C07B792 bf/s */
L_0C07B796: BLKS(0x0C07B796u);
	r15 = r14;  /* 0C07B796 mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07B79Au, 3);  /* 0C07B798 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07B79Cu, 1);  /* 0C07B79A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07B79Eu, 1);  /* 0C07B79C mov.l @Rm+,Rn */
	IF(0x0C07B79Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07B79E rts */
}

/* FUN_0c07b7c0 */
void blk_f_0C07B7C0(sh3_t *c)
{
	LOCALS;
L_0C07B7C0: BLKS(0x0C07B7C0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07B7C2u, 1);  /* 0C07B7C0 mov.l Rm,@-Rn */
	r5 = r4 & 0xFF;  /* 0C07B7C2 extu.b Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07B7C6u, 2);  /* 0C07B7C4 mov.l Rm,@-Rn */
	r8 = r5;  /* 0C07B7C6 mov Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07B7CAu, 2);  /* 0C07B7C8 mov.l Rm,@-Rn */
	r1 = 0x9u;  /* 0C07B7CA mov #imm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07B7CEu, 2);  /* 0C07B7CC mov.l Rm,@-Rn */
	IF(0x0C07B7CEu); ARG0(0x481Du); { s32 s_ = (s32)r1; if (s_ >= 0) r8 <<= (s_ & 31); else if ((s_ & 31) == 0) r8 = 0; else r8 >>= ((~s_ & 31) + 1); }  /* 0C07B7CE shld Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07B7D2u, 2);  /* 0C07B7D0 mov.l Rm,@-Rn */
	r10 = r5;  /* 0C07B7D2 mov Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07B7D6u, 2);  /* 0C07B7D4 mov.l Rm,@-Rn */
	r10 += r10;  /* 0C07B7D6 add Rm,Rn */
	r0 = 0xC2AC168u; UPD(0x0C07B7DAu, 2);  /* 0C07B7D8 mov.l @(disp,pc),Rn */
	r9 = 0x0u;  /* 0C07B7DA mov #imm,Rn */
	IF(0x0C07B7DCu); r15 -= 4; W32(r15, PR); UPD(0x0C07B7DEu, 2);  /* 0C07B7DC sts.l pr,@-Rn */
	r8 += r0;  /* 0C07B7DE add Rm,Rn */
	r3 = 0xC3C3FD0u; UPD(0x0C07B7E2u, 2);  /* 0C07B7E0 mov.l @(disp,pc),Rn */
	r0 = r10;  /* 0C07B7E2 mov Rm,Rn */
	IF(0x0C07B7E4u); r2 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C07B7E6u, 2);  /* 0C07B7E4 mov.w @(r0,Rm),Rn */
	r0 = r2 & 0xFFFF;  /* 0C07B7E6 extu.w Rm,Rn */
	T = (s32)r9 >= (s32)r0;  /* 0C07B7E8 cmp/ge Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07B840u, 5); goto L_0C07B840; } goto L_0C07B7EE; }  /* 0C07B7EA bt/s */
L_0C07B7EE: BLKS(0x0C07B7EEu);
	r11 = 0xC073B10u; UPD(0x0C07B7F0u, 2);  /* 0C07B7EE mov.l @(disp,pc),Rn */
	r12 = 0xFFFFFFF9u;  /* 0C07B7F0 mov #imm,Rn */
	IF(0x0C07B7F2u); ;  /* 0C07B7F2 nop */
	UPD(0x0C07B7F4u, 2);
L_0C07B7F4: BLKS(0x0C07B7F4u);
	{ u32 v_ = (u32)(s32)(s16)R16(r8); r8 += 2; r1 = v_; } UPD(0x0C07B7F6u, 1);  /* 0C07B7F4 mov.w @Rm+,Rn */
	r7 = 0x50u;  /* 0C07B7F6 mov #imm,Rn */
	r0 = r1 & 0xFFFF;  /* 0C07B7F8 extu.w Rm,Rn */
	r4 = r0;  /* 0C07B7FA mov Rm,Rn */
	IF(0x0C07B7FCu); ARG0(0x44CDu); { s32 s_ = (s32)r12; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = 0; else r4 >>= ((~s_ & 31) + 1); }  /* 0C07B7FC shld Rm,Rn */
	r5 = 0x2800u; UPD(0x0C07B800u, 5);  /* 0C07B7FE mov.w @(disp,pc),Rn */
	r2 = r4 & 0xFFFF;  /* 0C07B800 extu.w Rm,Rn */
	IF(0x0C07B802u); MACL = r2 * r5;  /* 0C07B802 mul.l Rm,Rn */
	r0 &= 0x7Fu;  /* 0C07B804 and #imm,r0 */
	r3 = 0xC229004u; UPD(0x0C07B808u, 5);  /* 0C07B806 mov.l @(disp,pc),Rn */
	IF(0x0C07B808u); r2 = MACL;  /* 0C07B808 sts macl,Rn */
	MACL = (u32)(u16)r0 * (u32)(u16)r7;  /* 0C07B80A mulu.w Rm,Rn */
	r4 = 0xC2289E8u; UPD(0x0C07B80Eu, 4);  /* 0C07B80C mov.l @(disp,pc),Rn */
	IF(0x0C07B80Eu); r6 = MACL;  /* 0C07B80E sts macl,Rn */
	r2 += r6;  /* 0C07B810 add Rm,Rn */
	r2 += r3;  /* 0C07B812 add Rm,Rn */
	r1 = R32(r2 + 0x18u); UPD(0x0C07B816u, 4);  /* 0C07B814 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C07B816 add #imm,Rn */
	W32(r4, r1); UPD(0x0C07B81Au, 2);  /* 0C07B818 mov.l Rm,@Rn */
	r9 += 0x1u;  /* 0C07B81A add #imm,Rn */
	r0 = R32(r2 + 0x20u); UPD(0x0C07B81Eu, 2);  /* 0C07B81C mov.l @(disp,Rm),Rn */
	r5 = 0xC3C86B0u; UPD(0x0C07B820u, 1);  /* 0C07B81E mov.l @(disp,pc),Rn */
	W32(r5, r0); UPD(0x0C07B822u, 1);  /* 0C07B820 mov.l Rm,@Rn */
	r4 = R32(r2 + 0x3Cu); UPD(0x0C07B824u, 1);  /* 0C07B822 mov.l @(disp,Rm),Rn */
	r6 = R32(r2 + 0x28u); UPD(0x0C07B826u, 1);  /* 0C07B824 mov.l @(disp,Rm),Rn */
	r5 = R32(r2 + 0x24u); UPD(0x0C07B828u, 1);  /* 0C07B826 mov.l @(disp,Rm),Rn */
	r2 += 0x40u;  /* 0C07B828 add #imm,Rn */
	r7 = R32(r2); UPD(0x0C07B82Cu, 2);  /* 0C07B82A mov.l @Rm,Rn */
	r2 = 0x0u;  /* 0C07B82C mov #imm,Rn */
	IF(0x0C07B82Eu); { u32 t_ = r11; PR = 0x0C07B832u; W32(r15, r2); /* slot mov.l Rm,@Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C073B10, 0x0C073B10u, 0x0C07B832u); }  /* 0C07B82E jsr @Rn */
L_0C07B832: BLKS(0x0C07B832u);
	r7 = 0xC3C3FD0u; UPD(0x0C07B834u, 1);  /* 0C07B832 mov.l @(disp,pc),Rn */
	r0 = r10;  /* 0C07B834 mov Rm,Rn */
	IF(0x0C07B836u); r6 = (u32)(s32)(s16)R16(r0 + r7); UPD(0x0C07B838u, 2);  /* 0C07B836 mov.w @(r0,Rm),Rn */
	r4 = r6 & 0xFFFF;  /* 0C07B838 extu.w Rm,Rn */
	T = (s32)r9 >= (s32)r4;  /* 0C07B83A cmp/ge Rm,Rn */
	{ u32 c_ = !T; r15 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C07B7F4u, 5); goto L_0C07B7F4; } UPD(0x0C07B840u, 1); goto L_0C07B840; }  /* 0C07B83C bf/s */
L_0C07B840: BLKS(0x0C07B840u);
	r15 = r14;  /* 0C07B840 mov Rm,Rn */
	IF(0x0C07B842u); PR = R32(r15); r15 += 4; UPD(0x0C07B844u, 2);  /* 0C07B842 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07B846u, 1);  /* 0C07B844 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07B848u, 1);  /* 0C07B846 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07B84Au, 1);  /* 0C07B848 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07B84Cu, 1);  /* 0C07B84A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07B84Eu, 1);  /* 0C07B84C mov.l @Rm+,Rn */
	IF(0x0C07B84Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07B84E rts */
}

/* FUN_0c07b870 */
void blk_f_0C07B870(sh3_t *c)
{
	LOCALS;
L_0C07B870: BLKS(0x0C07B870u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07B872u, 1);  /* 0C07B870 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07B874u, 1);  /* 0C07B872 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07B876u, 1);  /* 0C07B874 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07B878u, 1);  /* 0C07B876 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07B87Au, 1);  /* 0C07B878 mov.l Rm,@-Rn */
	r11 = 0x0u;  /* 0C07B87A mov #imm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C07B87Eu, 2);  /* 0C07B87C mov.l Rm,@-Rn */
	r12 = 0x0u;  /* 0C07B87E mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07B882u, 2);  /* 0C07B880 mov.l Rm,@-Rn */
	r13 = 0xC186740u; UPD(0x0C07B884u, 1);  /* 0C07B882 mov.l @(disp,pc),Rn */
	IF(0x0C07B884u); r15 -= 4; W32(r15, PR); UPD(0x0C07B886u, 1);  /* 0C07B884 sts.l pr,@-Rn */
	r14 = r15;  /* 0C07B886 mov Rm,Rn */
	UPD(0x0C07B888u, 1);
L_0C07B888: BLKS(0x0C07B888u);
	r3 = 0xC228FFAu; UPD(0x0C07B88Au, 1);  /* 0C07B888 mov.l @(disp,pc),Rn */
	r0 = r11;  /* 0C07B88A mov Rm,Rn */
	r0 += r0;  /* 0C07B88C add Rm,Rn */
	r2 = 0x0u;  /* 0C07B88E mov #imm,Rn */
	r8 = 0xC229004u; UPD(0x0C07B892u, 4);  /* 0C07B890 mov.l @(disp,pc),Rn */
	r10 = r0;  /* 0C07B892 mov Rm,Rn */
	IF(0x0C07B894u); W16(r0 + r3, r2); UPD(0x0C07B896u, 2);  /* 0C07B894 mov.w Rm,@(r0,Rn) */
	r9 = 0x0u;  /* 0C07B896 mov #imm,Rn */
	r10 += r3;  /* 0C07B898 add Rm,Rn */
	r8 += r12;  /* 0C07B89A add Rm,Rn */
	UPD(0x0C07B89Cu, 3);
L_0C07B89C: BLKS(0x0C07B89Cu);
	r0 = R32(r8); UPD(0x0C07B89Eu, 1);  /* 0C07B89C mov.l @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C07B89E tst Rm,Rn */
	if (!T) { UPD(0x0C07B8E0u, 4); goto L_0C07B8E0; }  /* 0C07B8A0 bf */
L_0C07B8A2: BLKS(0x0C07B8A2u);
	r6 = r9;  /* 0C07B8A2 mov Rm,Rn */
	UPD(0x0C07B8A4u, 1);
L_0C07B8A4: BLKS(0x0C07B8A4u);
	r6 += 0x1u;  /* 0C07B8A4 add #imm,Rn */
	r9 = (u32)(s32)(s16)r6;  /* 0C07B8A6 exts.w Rm,Rn */
	r5 = 0x7Fu;  /* 0C07B8A8 mov #imm,Rn */
	T = (s32)r9 > (s32)r5;  /* 0C07B8AA cmp/gt Rm,Rn */
	{ u32 c_ = !T; r8 += 0x50u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C07B89Cu, 7); goto L_0C07B89C; } goto L_0C07B8B0; }  /* 0C07B8AC bf/s */
L_0C07B8B0: BLKS(0x0C07B8B0u);
	r8 = r11;  /* 0C07B8B0 mov Rm,Rn */
	r8 += 0x1u;  /* 0C07B8B2 add #imm,Rn */
	r1 = 0x2800u; UPD(0x0C07B8B6u, 4);  /* 0C07B8B4 mov.w @(disp,pc),Rn */
	r11 = (u32)(s32)(s16)r8;  /* 0C07B8B6 exts.w Rm,Rn */
	r7 = 0x1u;  /* 0C07B8B8 mov #imm,Rn */
	T = (s32)r11 > (s32)r7;  /* 0C07B8BA cmp/gt Rm,Rn */
	{ u32 c_ = !T; r12 += r1; /* slot add Rm,Rn */ if (c_) { UPD(0x0C07B888u, 6); goto L_0C07B888; } goto L_0C07B8C0; }  /* 0C07B8BC bf/s */
L_0C07B8C0: BLKS(0x0C07B8C0u);
	r15 = r14;  /* 0C07B8C0 mov Rm,Rn */
	IF(0x0C07B8C2u); PR = R32(r15); r15 += 4; UPD(0x0C07B8C4u, 3);  /* 0C07B8C2 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07B8C6u, 1);  /* 0C07B8C4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07B8C8u, 1);  /* 0C07B8C6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07B8CAu, 1);  /* 0C07B8C8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07B8CCu, 1);  /* 0C07B8CA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07B8CEu, 1);  /* 0C07B8CC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07B8D0u, 1);  /* 0C07B8CE mov.l @Rm+,Rn */
	IF(0x0C07B8D0u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07B8D0 rts */
L_0C07B8E0: BLKS(0x0C07B8E0u);
	r0 = R32(r8 + 0x4u); UPD(0x0C07B8E2u, 1);  /* 0C07B8E0 mov.l @(disp,Rm),Rn */
	r5 = r9;  /* 0C07B8E2 mov Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r10); UPD(0x0C07B8E6u, 2);  /* 0C07B8E4 mov.w @Rm,Rn */
	IF(0x0C07B8E6u); r0 <<= 2;  /* 0C07B8E6 shll2 Rn */
	r4 += 0x1u;  /* 0C07B8E8 add #imm,Rn */
	IF(0x0C07B8EAu); r3 = R32(r0 + r13); UPD(0x0C07B8ECu, 3);  /* 0C07B8EA mov.l @(r0,Rm),Rn */
	W16(r10, r4); UPD(0x0C07B8EEu, 1);  /* 0C07B8EC mov.w Rm,@Rn */
	IF(0x0C07B8EEu); { u32 t_ = r3; PR = 0x0C07B8F2u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C07B8F2u); }  /* 0C07B8EE jsr @Rn */
L_0C07B8F2: BLKS(0x0C07B8F2u);
	{ r6 = r9; /* slot mov Rm,Rn */ UPD(0x0C07B8A4u, 3); goto L_0C07B8A4; }  /* 0C07B8F2 bra */
}

/* FUN_0c07b910 */
void blk_f_0C07B910(sh3_t *c)
{
	LOCALS;
L_0C07B910: BLKS(0x0C07B910u);
	r0 = 0x2800u; UPD(0x0C07B912u, 1);  /* 0C07B910 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C07B912 exts.w Rm,Rn */
	IF(0x0C07B914u); MACL = r4 * r0;  /* 0C07B914 mul.l Rm,Rn */
	r5 = (u32)(s32)(s16)r5;  /* 0C07B916 exts.w Rm,Rn */
	r3 = 0x50u;  /* 0C07B918 mov #imm,Rn */
	IF(0x0C07B91Au); r0 = MACL;  /* 0C07B91A sts macl,Rn */
	IF(0x0C07B91Cu); MACL = r5 * r3;  /* 0C07B91C mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07B920u, 9);  /* 0C07B91E mov.l Rm,@-Rn */
	r6 = (u32)(s32)(s16)r6;  /* 0C07B920 exts.w Rm,Rn */
	IF(0x0C07B922u); r2 = MACL;  /* 0C07B922 sts macl,Rn */
	r7 = 0xC229004u; UPD(0x0C07B926u, 3);  /* 0C07B924 mov.l @(disp,pc),Rn */
	r0 += r2;  /* 0C07B926 add Rm,Rn */
	IF(0x0C07B928u); r15 -= 4; W32(r15, PR); UPD(0x0C07B92Au, 2);  /* 0C07B928 sts.l pr,@-Rn */
	r7 += r0;  /* 0C07B92A add Rm,Rn */
	r0 = R32(r7 + 0x4u); UPD(0x0C07B92Eu, 2);  /* 0C07B92C mov.l @(disp,Rm),Rn */
	r3 = 0xC186770u; UPD(0x0C07B930u, 1);  /* 0C07B92E mov.l @(disp,pc),Rn */
	IF(0x0C07B930u); r0 <<= 2;  /* 0C07B930 shll2 Rn */
	IF(0x0C07B932u); r2 = R32(r0 + r3); UPD(0x0C07B934u, 2);  /* 0C07B932 mov.l @(r0,Rm),Rn */
	IF(0x0C07B934u); { u32 t_ = r2; PR = 0x0C07B938u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C07B938u); }  /* 0C07B934 jsr @Rn */
L_0C07B938: BLKS(0x0C07B938u);
	r15 = r14;  /* 0C07B938 mov Rm,Rn */
	IF(0x0C07B93Au); PR = R32(r15); r15 += 4; UPD(0x0C07B93Cu, 2);  /* 0C07B93A lds.l @Rn+,pr */
	IF(0x0C07B93Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07B93C rts */
}

void blk_f_0C07B950(sh3_t *c)
{
	LOCALS;
L_0C07B950: BLKS(0x0C07B950u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07B952u, 1);  /* 0C07B950 mov.l Rm,@-Rn */
	r5 = (u32)(s32)(s16)r5;  /* 0C07B952 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07B956u, 2);  /* 0C07B954 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07B958u, 1);  /* 0C07B956 mov.l Rm,@-Rn */
	r6 = 0x2800u; UPD(0x0C07B95Au, 1);  /* 0C07B958 mov.w @(disp,pc),Rn */
	r10 = (u32)(s32)(s16)r4;  /* 0C07B95A exts.w Rm,Rn */
	IF(0x0C07B95Cu); MACL = r10 * r6;  /* 0C07B95C mul.l Rm,Rn */
	r4 = 0x50u;  /* 0C07B95E mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07B962u, 5);  /* 0C07B960 mov.l Rm,@-Rn */
	IF(0x0C07B962u); r9 = MACL;  /* 0C07B962 sts macl,Rn */
	IF(0x0C07B964u); MACL = r5 * r4;  /* 0C07B964 mul.l Rm,Rn */
	r0 = 0xC229004u; UPD(0x0C07B968u, 4);  /* 0C07B966 mov.l @(disp,pc),Rn */
	IF(0x0C07B968u); r3 = MACL;  /* 0C07B968 sts macl,Rn */
	IF(0x0C07B96Au); r15 -= 4; W32(r15, PR); UPD(0x0C07B96Cu, 2);  /* 0C07B96A sts.l pr,@-Rn */
	r9 += r3;  /* 0C07B96C add Rm,Rn */
	r9 += r0;  /* 0C07B96E add Rm,Rn */
	r2 = R32(r9 + 0x8u); UPD(0x0C07B972u, 3);  /* 0C07B970 mov.l @(disp,Rm),Rn */
	r0 = 0x1u;  /* 0C07B972 mov #imm,Rn */
	r2 += 0xFFFFFFC0u;  /* 0C07B974 add #imm,Rn */
	T = r2 > r0;  /* 0C07B976 cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07B990u, 6); goto L_0C07B990; } goto L_0C07B97C; }  /* 0C07B978 bt/s */
L_0C07B97C: BLKS(0x0C07B97Cu);
	r15 = r14;  /* 0C07B97C mov Rm,Rn */
	IF(0x0C07B97Eu); PR = R32(r15); r15 += 4; UPD(0x0C07B980u, 3);  /* 0C07B97E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07B982u, 1);  /* 0C07B980 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07B984u, 1);  /* 0C07B982 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07B986u, 1);  /* 0C07B984 mov.l @Rm+,Rn */
	IF(0x0C07B986u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07B986 rts */
L_0C07B990: BLKS(0x0C07B990u);
	r10 += 0x40u;  /* 0C07B990 add #imm,Rn */
	r8 = 0x0u;  /* 0C07B992 mov #imm,Rn */
	W32(r9 + 0x8u, r10); UPD(0x0C07B996u, 3);  /* 0C07B994 mov.l Rm,@(disp,Rn) */
	r2 = 0xC079E80u; UPD(0x0C07B998u, 1);  /* 0C07B996 mov.l @(disp,pc),Rn */
	r10 += 0xFFFFFFC0u;  /* 0C07B998 add #imm,Rn */
	W32(r9 + 0x4u, r8); UPD(0x0C07B99Cu, 2);  /* 0C07B99A mov.l Rm,@(disp,Rn) */
	r4 = r10;  /* 0C07B99C mov Rm,Rn */
	IF(0x0C07B99Eu); { u32 t_ = r2; PR = 0x0C07B9A2u; W32(r9 + 0xCu, r8); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C079E80, 0x0C079E80u, 0x0C07B9A2u); }  /* 0C07B99E jsr @Rn */
L_0C07B9A2: BLKS(0x0C07B9A2u);
	r9 += 0x48u;  /* 0C07B9A2 add #imm,Rn */
	W8(r9, r8); UPD(0x0C07B9A6u, 2);  /* 0C07B9A4 mov.b Rm,@Rn */
	r4 = r10;  /* 0C07B9A6 mov Rm,Rn */
	r5 = 0x204B0B0u; UPD(0x0C07B9AAu, 2);  /* 0C07B9A8 mov.l @(disp,pc),Rn */
	r9 += 0xFFFFFFB8u;  /* 0C07B9AA add #imm,Rn */
	W32(r9 + 0x3Cu, r5); UPD(0x0C07B9AEu, 2);  /* 0C07B9AC mov.l Rm,@(disp,Rn) */
	r7 = 0xC0C2020u; UPD(0x0C07B9B0u, 1);  /* 0C07B9AE mov.l @(disp,pc),Rn */
	r5 = 0x54u;  /* 0C07B9B0 mov #imm,Rn */
	r15 = r14;  /* 0C07B9B2 mov Rm,Rn */
	IF(0x0C07B9B4u); PR = R32(r15); r15 += 4; UPD(0x0C07B9B6u, 3);  /* 0C07B9B4 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07B9B8u, 1);  /* 0C07B9B6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07B9BAu, 1);  /* 0C07B9B8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07B9BCu, 1);  /* 0C07B9BA mov.l @Rm+,Rn */
	IF(0x0C07B9BCu); { u32 tv_ = r7; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0C2020u: TAIL(blk_f_0C0C2020); default: JUMPD(tv_); } }  /* 0C07B9BC jmp @Rn */
}

void blk_f_0C07B9E0(sh3_t *c)
{
	LOCALS;
L_0C07B9E0: BLKS(0x0C07B9E0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07B9E2u, 1);  /* 0C07B9E0 mov.l Rm,@-Rn */
	r14 = r15;  /* 0C07B9E2 mov Rm,Rn */
	r15 = r14;  /* 0C07B9E4 mov Rm,Rn */
	IF(0x0C07B9E6u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C07B9E6 rts */
}

void blk_f_0C07B9F0(sh3_t *c)
{
	LOCALS;
L_0C07B9F0: BLKS(0x0C07B9F0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07B9F2u, 1);  /* 0C07B9F0 mov.l Rm,@-Rn */
	r14 = r15;  /* 0C07B9F2 mov Rm,Rn */
	r15 = r14;  /* 0C07B9F4 mov Rm,Rn */
	IF(0x0C07B9F6u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C07B9F6 rts */
}

void blk_f_0C07BA00(sh3_t *c)
{
	LOCALS;
L_0C07BA00: BLKS(0x0C07BA00u);
	r6 = 0x2800u; UPD(0x0C07BA02u, 1);  /* 0C07BA00 mov.w @(disp,pc),Rn */
	r1 = (u32)(s32)(s16)r4;  /* 0C07BA02 exts.w Rm,Rn */
	IF(0x0C07BA04u); MACL = r1 * r6;  /* 0C07BA04 mul.l Rm,Rn */
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07BA08u, 4);  /* 0C07BA06 mov.l Rm,@-Rn */
	r3 = (u32)(s32)(s16)r5;  /* 0C07BA08 exts.w Rm,Rn */
	r2 = 0x50u;  /* 0C07BA0A mov #imm,Rn */
	IF(0x0C07BA0Cu); r8 = MACL;  /* 0C07BA0C sts macl,Rn */
	IF(0x0C07BA0Eu); MACL = r3 * r2;  /* 0C07BA0E mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07BA12u, 6);  /* 0C07BA10 mov.l Rm,@-Rn */
	IF(0x0C07BA12u); r0 = MACL;  /* 0C07BA12 sts macl,Rn */
	r8 += r0;  /* 0C07BA14 add Rm,Rn */
	r0 = 0xC22904Au; UPD(0x0C07BA18u, 3);  /* 0C07BA16 mov.l @(disp,pc),Rn */
	r8 += r0;  /* 0C07BA18 add Rm,Rn */
	r0 = 0xC0769D0u; UPD(0x0C07BA1Cu, 2);  /* 0C07BA1A mov.l @(disp,pc),Rn */
	IF(0x0C07BA1Cu); r15 -= 4; W32(r15, PR); UPD(0x0C07BA1Eu, 1);  /* 0C07BA1C sts.l pr,@-Rn */
	r4 = 0xC0u; UPD(0x0C07BA20u, 1);  /* 0C07BA1E mov.w @(disp,pc),Rn */
	IF(0x0C07BA20u); { u32 t_ = r0; PR = 0x0C07BA24u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0769D0, 0x0C0769D0u, 0x0C07BA24u); }  /* 0C07BA20 jsr @Rn */
L_0C07BA24: BLKS(0x0C07BA24u);
	W16(r8, r0); UPD(0x0C07BA26u, 1);  /* 0C07BA24 mov.w Rm,@Rn */
	r15 = r14;  /* 0C07BA26 mov Rm,Rn */
	IF(0x0C07BA28u); PR = R32(r15); r15 += 4; UPD(0x0C07BA2Au, 2);  /* 0C07BA28 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07BA2Cu, 1);  /* 0C07BA2A mov.l @Rm+,Rn */
	IF(0x0C07BA2Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07BA2C rts */
}

void blk_f_0C07BA40(sh3_t *c)
{
	LOCALS;
	goto L_0C07BA40;
L_0C0715D0: BLKS(0x0C0715D0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0715D2u, 1);  /* 0C0715D0 mov.l Rm,@-Rn */
	r0 = 0x0u;  /* 0C0715D2 mov #imm,Rn */
	r2 = 0xC3CA708u; UPD(0x0C0715D6u, 2);  /* 0C0715D4 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0715D6 mov Rm,Rn */
	r3 = 0xFFu; UPD(0x0C0715DAu, 2);  /* 0C0715D8 mov.w @(disp,pc),Rn */
	IF(0x0C0715DAu); ;  /* 0C0715DA nop */
	UPD(0x0C0715DCu, 1);
L_0C0715DC: BLKS(0x0C0715DCu);
	r7 = R32(r2); UPD(0x0C0715DEu, 1);  /* 0C0715DC mov.l @Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C0715DE tst Rm,Rn */
	if (T) { UPD(0x0C0715EAu, 4); goto L_0C0715EA; }  /* 0C0715E0 bt */
L_0C0715E2: BLKS(0x0C0715E2u);
	r0 += 0x1u;  /* 0C0715E2 add #imm,Rn */
	T = (s32)r0 > (s32)r3;  /* 0C0715E4 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r2 += 0x1Cu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0715DCu, 5); goto L_0C0715DC; } UPD(0x0C0715EAu, 1); goto L_0C0715EA; }  /* 0C0715E6 bf/s */
L_0C0715EA: BLKS(0x0C0715EAu);
	r3 = 0x100u; UPD(0x0C0715ECu, 1);  /* 0C0715EA mov.w @(disp,pc),Rn */
	T = r0 == r3;  /* 0C0715EC cmp/eq Rm,Rn */
	{ u32 c_ = T; r1 = 0xFFFFFFFFu; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C071612u, 4); goto L_0C071612; } goto L_0C0715F2; }  /* 0C0715EE bt/s */
L_0C0715F2: BLKS(0x0C0715F2u);
	r7 = 0x1u;  /* 0C0715F2 mov #imm,Rn */
	W32(r2, r7); UPD(0x0C0715F6u, 3);  /* 0C0715F4 mov.l Rm,@Rn */
	r3 = 0x2Fu;  /* 0C0715F6 mov #imm,Rn */
	W32(r2 + 0x8u, r5); UPD(0x0C0715FAu, 2);  /* 0C0715F8 mov.l Rm,@(disp,Rn) */
	r7 = 0x4Fu;  /* 0C0715FA mov #imm,Rn */
	W32(r2 + 0x4u, r4); UPD(0x0C0715FEu, 2);  /* 0C0715FC mov.l Rm,@(disp,Rn) */
	r5 = 0x0u;  /* 0C0715FE mov #imm,Rn */
	W32(r2 + 0xCu, r3); UPD(0x0C071602u, 2);  /* 0C071600 mov.l Rm,@(disp,Rn) */
	r1 = r0;  /* 0C071602 mov Rm,Rn */
	W32(r2 + 0x10u, r7); UPD(0x0C071606u, 2);  /* 0C071604 mov.l Rm,@(disp,Rn) */
	W32(r2 + 0x14u, r6); UPD(0x0C071608u, 1);  /* 0C071606 mov.l Rm,@(disp,Rn) */
	W32(r2 + 0x18u, r5); UPD(0x0C07160Au, 1);  /* 0C071608 mov.l Rm,@(disp,Rn) */
	r4 = 0xC3CA704u; UPD(0x0C07160Cu, 1);  /* 0C07160A mov.l @(disp,pc),Rn */
	r2 = R32(r4); UPD(0x0C07160Eu, 1);  /* 0C07160C mov.l @Rm,Rn */
	r2 += 0x1u;  /* 0C07160E add #imm,Rn */
	W32(r4, r2); UPD(0x0C071612u, 2);  /* 0C071610 mov.l Rm,@Rn */
L_0C071612: BLKS(0x0C071612u);
	r0 = r1;  /* 0C071612 mov Rm,Rn */
	r15 = r14;  /* 0C071614 mov Rm,Rn */
	IF(0x0C071616u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C071616 rts */
L_0C07BA40: BLKS(0x0C07BA40u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07BA42u, 1);  /* 0C07BA40 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07BA44u, 1);  /* 0C07BA42 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07BA46u, 1);  /* 0C07BA44 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07BA48u, 1);  /* 0C07BA46 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07BA4Au, 1);  /* 0C07BA48 mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C07BA4A exts.w Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C07BA4Eu, 2);  /* 0C07BA4C mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07BA50u, 1);  /* 0C07BA4E mov.l Rm,@-Rn */
	r2 = 0xC238020u; UPD(0x0C07BA52u, 1);  /* 0C07BA50 mov.l @(disp,pc),Rn */
	IF(0x0C07BA52u); r15 -= 4; W32(r15, PR); UPD(0x0C07BA54u, 1);  /* 0C07BA52 sts.l pr,@-Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C07BA56u, 1);  /* 0C07BA54 mov.b @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C07BA56 tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07BB50u, 4); goto L_0C07BB50; } goto L_0C07BA5C; }  /* 0C07BA58 bt/s */
L_0C07BA5C: BLKS(0x0C07BA5Cu);
	r4 = 0x60u;  /* 0C07BA5C mov #imm,Rn */
	IF(0x0C07BA5Eu); MACL = r11 * r4;  /* 0C07BA5E mul.l Rm,Rn */
	r3 = 0xC3BC7CCu; UPD(0x0C07BA62u, 5);  /* 0C07BA60 mov.l @(disp,pc),Rn */
	IF(0x0C07BA62u); r8 = MACL;  /* 0C07BA62 sts macl,Rn */
	r8 += r3;  /* 0C07BA64 add Rm,Rn */
	r2 = R32(r8 + 0x30u); UPD(0x0C07BA68u, 3);  /* 0C07BA66 mov.l @(disp,Rm),Rn */
	r8 += 0x40u;  /* 0C07BA68 add #imm,Rn */
	r0 = R32(r8); UPD(0x0C07BA6Cu, 2);  /* 0C07BA6A mov.l @Rm,Rn */
	T = (s32)r2 > (s32)r0;  /* 0C07BA6C cmp/gt Rm,Rn */
	{ u32 c_ = !T; r8 += 0xFFFFFFC0u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C07BA7Au, 4); goto L_0C07BA7A; } goto L_0C07BA72; }  /* 0C07BA6E bf/s */
L_0C07BA72: BLKS(0x0C07BA72u);
	r5 = 0xFFFFF000u; UPD(0x0C07BA74u, 2);  /* 0C07BA72 mov.w @(disp,pc),Rn */
	r5 += r2;  /* 0C07BA74 add Rm,Rn */
	W32(r8 + 0x30u, r5); UPD(0x0C07BA78u, 2);  /* 0C07BA76 mov.l Rm,@(disp,Rn) */
	r2 = r5;  /* 0C07BA78 mov Rm,Rn */
	UPD(0x0C07BA7Au, 1);
L_0C07BA7A: BLKS(0x0C07BA7Au);
	r10 = r8;  /* 0C07BA7A mov Rm,Rn */
	r10 += 0x4Fu;  /* 0C07BA7C add #imm,Rn */
	r7 = (u32)(s32)(s8)R8(r10); UPD(0x0C07BA80u, 3);  /* 0C07BA7E mov.b @Rm,Rn */
	r13 = R32(r8 + 0x28u); UPD(0x0C07BA82u, 1);  /* 0C07BA80 mov.l @(disp,Rm),Rn */
	r12 = r7;  /* 0C07BA82 mov Rm,Rn */
	r9 = 0xC069AF0u; UPD(0x0C07BA86u, 2);  /* 0C07BA84 mov.l @(disp,pc),Rn */
	r4 = r7 & 0xFF;  /* 0C07BA86 extu.b Rm,Rn */
	r13 += r2;  /* 0C07BA88 add Rm,Rn */
	r12 += 0x1u;  /* 0C07BA8A add #imm,Rn */
	r4 += r11;  /* 0C07BA8C add Rm,Rn */
	W32(r8 + 0x28u, r13); UPD(0x0C07BA90u, 5);  /* 0C07BA8E mov.l Rm,@(disp,Rn) */
	IF(0x0C07BA90u); r4 <<= 2;  /* 0C07BA90 shll2 Rn */
	r5 = 0xC000u; UPD(0x0C07BA94u, 2);  /* 0C07BA92 mov.l @(disp,pc),Rn */
	IF(0x0C07BA94u); { u32 t_ = r9; PR = 0x0C07BA98u; W8(r10, r12); /* slot mov.b Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C07BA98u); }  /* 0C07BA94 jsr @Rn */
L_0C07BA98: BLKS(0x0C07BA98u);
	r6 = R32(r8 + 0x2Cu); UPD(0x0C07BA9Au, 1);  /* 0C07BA98 mov.l @(disp,Rm),Rn */
	r6 += r0;  /* 0C07BA9A add Rm,Rn */
	W32(r8 + 0x2Cu, r6); UPD(0x0C07BA9Eu, 2);  /* 0C07BA9C mov.l Rm,@(disp,Rn) */
L_0C07BA9E: BLKS(0x0C07BA9Eu);
	r0 = 0x60u;  /* 0C07BA9E mov #imm,Rn */
	IF(0x0C07BAA0u); MACL = r11 * r0;  /* 0C07BAA0 mul.l Rm,Rn */
	r2 = 0xC3BC7CCu; UPD(0x0C07BAA4u, 4);  /* 0C07BAA2 mov.l @(disp,pc),Rn */
	IF(0x0C07BAA4u); r8 = MACL;  /* 0C07BAA4 sts macl,Rn */
	r8 += r2;  /* 0C07BAA6 add Rm,Rn */
	r12 = R32(r8 + 0x28u); UPD(0x0C07BAAAu, 3);  /* 0C07BAA8 mov.l @(disp,Rm),Rn */
	r3 = 0xFFF00000u; UPD(0x0C07BAACu, 1);  /* 0C07BAAA mov.l @(disp,pc),Rn */
	T = (s32)r12 >= (s32)r3;  /* 0C07BAAC cmp/ge Rm,Rn */
	if (!T) { UPD(0x0C07BB40u, 4); goto L_0C07BB40; }  /* 0C07BAAE bf */
L_0C07BAB0: BLKS(0x0C07BAB0u);
	r3 = r8;  /* 0C07BAB0 mov Rm,Rn */
	UPD(0x0C07BAB2u, 1);
L_0C07BAB2: BLKS(0x0C07BAB2u);
	r3 += 0x50u;  /* 0C07BAB2 add #imm,Rn */
	r10 = (u32)(s32)(s8)R8(r3); UPD(0x0C07BAB6u, 2);  /* 0C07BAB4 mov.b @Rm,Rn */
	r4 = 0x3u;  /* 0C07BAB6 mov #imm,Rn */
	r10 += 0x1u;  /* 0C07BAB8 add #imm,Rn */
	r6 = r10 & 0xFF;  /* 0C07BABA extu.b Rm,Rn */
	T = r6 > r4;  /* 0C07BABC cmp/hi Rm,Rn */
	{ u32 c_ = T; W8(r3, r10); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C07BB20u, 7); goto L_0C07BB20; } UPD(0x0C07BAC2u, 1); goto L_0C07BAC2; }  /* 0C07BABE bt/s */
L_0C07BAC2: BLKS(0x0C07BAC2u);
	r3 = r8;  /* 0C07BAC2 mov Rm,Rn */
	UPD(0x0C07BAC4u, 1);
L_0C07BAC4: BLKS(0x0C07BAC4u);
	r3 += 0x44u;  /* 0C07BAC4 add #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r3); UPD(0x0C07BAC8u, 2);  /* 0C07BAC6 mov.b @Rm,Rn */
	r7 = 0x13u;  /* 0C07BAC8 mov #imm,Rn */
	T = r2 > r7;  /* 0C07BACA cmp/hi Rm,Rn */
	{ u32 c_ = T; r12 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07BAD4u, 5); goto L_0C07BAD4; } goto L_0C07BAD0; }  /* 0C07BACC bt/s */
L_0C07BAD0: BLKS(0x0C07BAD0u);
	r12 += 0x1u;  /* 0C07BAD0 add #imm,Rn */
	W8(r3, r12); UPD(0x0C07BAD4u, 3);  /* 0C07BAD2 mov.b Rm,@Rn */
L_0C07BAD4: BLKS(0x0C07BAD4u);
	r1 = R32(r8 + 0x8u); UPD(0x0C07BAD6u, 1);  /* 0C07BAD4 mov.l @(disp,Rm),Rn */
	r3 = 0x2u;  /* 0C07BAD6 mov #imm,Rn */
	T = (s32)r1 > (s32)r3;  /* 0C07BAD8 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C07BB10u, 5); goto L_0C07BB10; }  /* 0C07BADA bf */
L_0C07BADC: BLKS(0x0C07BADCu);
	r3 = r8;  /* 0C07BADC mov Rm,Rn */
	UPD(0x0C07BADEu, 1);
L_0C07BADE: BLKS(0x0C07BADEu);
	r3 += 0x4Eu;  /* 0C07BADE add #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r3); UPD(0x0C07BAE2u, 2);  /* 0C07BAE0 mov.b @Rm,Rn */
	r8 = 0x1Fu;  /* 0C07BAE2 mov #imm,Rn */
	T = r2 > r8;  /* 0C07BAE4 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C07BAEEu, 5); goto L_0C07BAEE; }  /* 0C07BAE6 bt */
L_0C07BAE8: BLKS(0x0C07BAE8u);
	r0 = r2;  /* 0C07BAE8 mov Rm,Rn */
	r0 += 0x1u;  /* 0C07BAEA add #imm,Rn */
	W8(r3, r0); UPD(0x0C07BAEEu, 3);  /* 0C07BAEC mov.b Rm,@Rn */
L_0C07BAEE: BLKS(0x0C07BAEEu);
	r15 = r14;  /* 0C07BAEE mov Rm,Rn */
	IF(0x0C07BAF0u); PR = R32(r15); r15 += 4; UPD(0x0C07BAF2u, 2);  /* 0C07BAF0 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07BAF4u, 1);  /* 0C07BAF2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07BAF6u, 1);  /* 0C07BAF4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07BAF8u, 1);  /* 0C07BAF6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07BAFAu, 1);  /* 0C07BAF8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07BAFCu, 1);  /* 0C07BAFA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07BAFEu, 1);  /* 0C07BAFC mov.l @Rm+,Rn */
	IF(0x0C07BAFEu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07BAFE rts */
L_0C07BB10: BLKS(0x0C07BB10u);
	r4 = r11;  /* 0C07BB10 mov Rm,Rn */
	r11 = 0xC07D400u; UPD(0x0C07BB14u, 2);  /* 0C07BB12 mov.l @(disp,pc),Rn */
	IF(0x0C07BB14u); { u32 t_ = r11; PR = 0x0C07BB18u; IF(0x0C07BB16u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C07D400, 0x0C07D400u, 0x0C07BB18u); }  /* 0C07BB14 jsr @Rn */
L_0C07BB18: BLKS(0x0C07BB18u);
	{ r3 = r8; /* slot mov Rm,Rn */ UPD(0x0C07BADEu, 3); goto L_0C07BADE; }  /* 0C07BB18 bra */
L_0C07BB20: BLKS(0x0C07BB20u);
	r0 = R32(r8 + 0xCu); UPD(0x0C07BB22u, 1);  /* 0C07BB20 mov.l @(disp,Rm),Rn */
	r13 = 0x0u;  /* 0C07BB22 mov #imm,Rn */
	r9 = 0xC07BFE0u; UPD(0x0C07BB26u, 2);  /* 0C07BB24 mov.l @(disp,pc),Rn */
	r0 += 0x1u;  /* 0C07BB26 add #imm,Rn */
	r0 &= 0xFu;  /* 0C07BB28 and #imm,r0 */
	W8(r3, r13); UPD(0x0C07BB2Cu, 3);  /* 0C07BB2A mov.b Rm,@Rn */
	r4 = r11;  /* 0C07BB2C mov Rm,Rn */
	IF(0x0C07BB2Eu); { u32 t_ = r9; PR = 0x0C07BB32u; W32(r8 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C07BFE0, 0x0C07BFE0u, 0x0C07BB32u); }  /* 0C07BB2E jsr @Rn */
L_0C07BB32: BLKS(0x0C07BB32u);
	{ r3 = r8; /* slot mov Rm,Rn */ UPD(0x0C07BAC4u, 3); goto L_0C07BAC4; }  /* 0C07BB32 bra */
L_0C07BB40: BLKS(0x0C07BB40u);
	r5 = 0xC07C910u; UPD(0x0C07BB42u, 1);  /* 0C07BB40 mov.l @(disp,pc),Rn */
	IF(0x0C07BB42u); { u32 t_ = r5; PR = 0x0C07BB46u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07C910, 0x0C07C910u, 0x0C07BB46u); }  /* 0C07BB42 jsr @Rn */
L_0C07BB46: BLKS(0x0C07BB46u);
	{ r3 = r8; /* slot mov Rm,Rn */ UPD(0x0C07BAB2u, 3); goto L_0C07BAB2; }  /* 0C07BB46 bra */
L_0C07BB50: BLKS(0x0C07BB50u);
	r8 = 0x60u;  /* 0C07BB50 mov #imm,Rn */
	IF(0x0C07BB52u); MACL = r11 * r8;  /* 0C07BB52 mul.l Rm,Rn */
	r1 = 0xC3BC7CCu; UPD(0x0C07BB56u, 4);  /* 0C07BB54 mov.l @(disp,pc),Rn */
	IF(0x0C07BB56u); r6 = MACL;  /* 0C07BB56 sts macl,Rn */
	r6 += r1;  /* 0C07BB58 add Rm,Rn */
	r2 = r6;  /* 0C07BB5A mov Rm,Rn */
	r2 += 0x5Cu;  /* 0C07BB5C add #imm,Rn */
	r1 = R32(r2); UPD(0x0C07BB60u, 5);  /* 0C07BB5E mov.l @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C07BB60 tst Rm,Rn */
	{ u32 c_ = T; r1 += 0xFFFFFFFFu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C07BB90u, 4); goto L_0C07BB90; } goto L_0C07BB66; }  /* 0C07BB62 bt/s */
L_0C07BB66: BLKS(0x0C07BB66u);
	T = (r1 & r1) == 0;  /* 0C07BB66 tst Rm,Rn */
	{ u32 c_ = !T; W32(r2, r1); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C07BAEEu, 5); goto L_0C07BAEE; } UPD(0x0C07BB6Cu, 1); goto L_0C07BB6C; }  /* 0C07BB68 bf/s */
L_0C07BB6C: BLKS(0x0C07BB6Cu);
	r4 = R32(r6 + 0x28u); UPD(0x0C07BB6Eu, 1);  /* 0C07BB6C mov.l @(disp,Rm),Rn */
	r5 = R32(r6 + 0x2Cu); UPD(0x0C07BB70u, 1);  /* 0C07BB6E mov.l @(disp,Rm),Rn */
	r6 += 0x54u;  /* 0C07BB70 add #imm,Rn */
	r6 = R32(r6); UPD(0x0C07BB74u, 2);  /* 0C07BB72 mov.l @Rm,Rn */
	r2 = 0xC0715D0u; UPD(0x0C07BB76u, 1);  /* 0C07BB74 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C07BB76 mov Rm,Rn */
	IF(0x0C07BB78u); PR = R32(r15); r15 += 4; UPD(0x0C07BB7Au, 2);  /* 0C07BB78 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07BB7Cu, 1);  /* 0C07BB7A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07BB7Eu, 1);  /* 0C07BB7C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07BB80u, 1);  /* 0C07BB7E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07BB82u, 1);  /* 0C07BB80 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07BB84u, 1);  /* 0C07BB82 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07BB86u, 1);  /* 0C07BB84 mov.l @Rm+,Rn */
	IF(0x0C07BB86u); { u32 tv_ = r2; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0715D0u: goto L_0C0715D0; default: JUMPD(tv_); } }  /* 0C07BB86 jmp @Rn */
L_0C07BB90: BLKS(0x0C07BB90u);
	r6 += 0x4Eu;  /* 0C07BB90 add #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r6); UPD(0x0C07BB94u, 2);  /* 0C07BB92 mov.b @Rm,Rn */
	r9 = 0xC29D1D8u; UPD(0x0C07BB96u, 1);  /* 0C07BB94 mov.l @(disp,pc),Rn */
	r0 = r3 & 0xFF;  /* 0C07BB96 extu.b Rm,Rn */
	r12 = 0xFFFFFFFu; UPD(0x0C07BB9Au, 2);  /* 0C07BB98 mov.l @(disp,pc),Rn */
	T = r0 == 0x20u;  /* 0C07BB9A cmp/eq #imm,r0 */
	{ u32 c_ = T; T = r0 == 0x23u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C07BBA2u, 4); goto L_0C07BBA2; } goto L_0C07BBA0; }  /* 0C07BB9C bt/s */
L_0C07BBA0: BLKS(0x0C07BBA0u);
	if (!T) { UPD(0x0C07BBA6u, 4); goto L_0C07BBA6; }  /* 0C07BBA0 bf */
L_0C07BBA2: BLKS(0x0C07BBA2u);
	{ r10 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C07BCF0u, 3); goto L_0C07BCF0; }  /* 0C07BBA2 bra */
L_0C07BBA6: BLKS(0x0C07BBA6u);
	r12 = 0x60u;  /* 0C07BBA6 mov #imm,Rn */
	UPD(0x0C07BBA8u, 1);
L_0C07BBA8: BLKS(0x0C07BBA8u);
	IF(0x0C07BBA8u); MACL = r11 * r12;  /* 0C07BBA8 mul.l Rm,Rn */
	r3 = 0xC3BC7CCu; UPD(0x0C07BBACu, 3);  /* 0C07BBAA mov.l @(disp,pc),Rn */
	r9 = 0x1u;  /* 0C07BBAC mov #imm,Rn */
	IF(0x0C07BBAEu); r12 = MACL;  /* 0C07BBAE sts macl,Rn */
	r12 += r3;  /* 0C07BBB0 add Rm,Rn */
	r7 = r12;  /* 0C07BBB2 mov Rm,Rn */
	r7 += 0x4Eu;  /* 0C07BBB4 add #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r7); UPD(0x0C07BBB8u, 6);  /* 0C07BBB6 mov.b @Rm,Rn */
	r13 = r3;  /* 0C07BBB8 mov Rm,Rn */
	r13 += 0xFFFFFFDFu;  /* 0C07BBBA add #imm,Rn */
	r10 = r13 & 0xFF;  /* 0C07BBBC extu.b Rm,Rn */
	T = r10 > r9;  /* 0C07BBBE cmp/hi Rm,Rn */
	{ u32 c_ = T; r2 = 0x60u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07BBE8u, 7); goto L_0C07BBE8; } goto L_0C07BBC4; }  /* 0C07BBC0 bt/s */
L_0C07BBC4: BLKS(0x0C07BBC4u);
	r5 = 0x2A0u; UPD(0x0C07BBC6u, 2);  /* 0C07BBC4 mov.w @(disp,pc),Rn */
	r6 = r3 & 0xFF;  /* 0C07BBC6 extu.b Rm,Rn */
	IF(0x0C07BBC8u); MACL = r6 * r5;  /* 0C07BBC8 mul.l Rm,Rn */
	r4 = 0xFFFFA960u; UPD(0x0C07BBCCu, 4);  /* 0C07BBCA mov.w @(disp,pc),Rn */
	r1 = 0xC29D1D8u; UPD(0x0C07BBCEu, 1);  /* 0C07BBCC mov.l @(disp,pc),Rn */
	IF(0x0C07BBCEu); r9 = MACL;  /* 0C07BBCE sts macl,Rn */
	r4 += r1;  /* 0C07BBD0 add Rm,Rn */
	r9 += r4;  /* 0C07BBD2 add Rm,Rn */
	r2 = R32(r9); UPD(0x0C07BBD6u, 4);  /* 0C07BBD4 mov.l @Rm,Rn */
	r0 = 0x10000000u; UPD(0x0C07BBD8u, 1);  /* 0C07BBD6 mov.l @(disp,pc),Rn */
	r2 &= r0;  /* 0C07BBD8 and Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C07BBDA tst Rm,Rn */
	{ u32 c_ = !T; r8 = 0x23u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07BC80u, 5); goto L_0C07BC80; } goto L_0C07BBE0; }  /* 0C07BBDC bf/s */
L_0C07BBE0: BLKS(0x0C07BBE0u);
	W32(r12 + 0x34u, r2); UPD(0x0C07BBE2u, 2);  /* 0C07BBE0 mov.l Rm,@(disp,Rn) */
	W32(r12 + 0x30u, r2); UPD(0x0C07BBE4u, 1);  /* 0C07BBE2 mov.l Rm,@(disp,Rn) */
	W8(r7, r8); UPD(0x0C07BBE6u, 1);  /* 0C07BBE4 mov.b Rm,@Rn */
L_0C07BBE6: BLKS(0x0C07BBE6u);
	r2 = 0x60u;  /* 0C07BBE6 mov #imm,Rn */
	UPD(0x0C07BBE8u, 1);
L_0C07BBE8: BLKS(0x0C07BBE8u);
	IF(0x0C07BBE8u); MACL = r11 * r2;  /* 0C07BBE8 mul.l Rm,Rn */
	r12 = 0xC3BC7CCu; UPD(0x0C07BBECu, 3);  /* 0C07BBEA mov.l @(disp,pc),Rn */
	r7 = 0x1Fu;  /* 0C07BBEC mov #imm,Rn */
	IF(0x0C07BBEEu); r2 = MACL;  /* 0C07BBEE sts macl,Rn */
	r2 += r12;  /* 0C07BBF0 add Rm,Rn */
	r2 += 0x4Eu;  /* 0C07BBF2 add #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r2); UPD(0x0C07BBF6u, 5);  /* 0C07BBF4 mov.b @Rm,Rn */
	r0 = r3 & 0xFF;  /* 0C07BBF6 extu.b Rm,Rn */
	T = r0 > r7;  /* 0C07BBF8 cmp/hi Rm,Rn */
	{ u32 c_ = !T; r2 += 0xFFFFFFB2u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C07BC60u, 5); goto L_0C07BC60; } goto L_0C07BBFE; }  /* 0C07BBFA bf/s */
L_0C07BBFE: BLKS(0x0C07BBFEu);
	T = r0 == 0x23u;  /* 0C07BBFE cmp/eq #imm,r0 */
	if (T) { UPD(0x0C07BC60u, 5); goto L_0C07BC60; }  /* 0C07BC00 bt */
L_0C07BC02: BLKS(0x0C07BC02u);
	r7 = 0x60u;  /* 0C07BC02 mov #imm,Rn */
	IF(0x0C07BC04u); MACL = r11 * r7;  /* 0C07BC04 mul.l Rm,Rn */
	r13 = 0xC3BC7CCu; UPD(0x0C07BC08u, 4);  /* 0C07BC06 mov.l @(disp,pc),Rn */
	IF(0x0C07BC08u); r6 = MACL;  /* 0C07BC08 sts macl,Rn */
	r6 += r13;  /* 0C07BC0A add Rm,Rn */
	r9 = R32(r6 + 0x28u); UPD(0x0C07BC0Eu, 3);  /* 0C07BC0C mov.l @(disp,Rm),Rn */
	r1 = R32(r6 + 0x2Cu); UPD(0x0C07BC10u, 1);  /* 0C07BC0E mov.l @(disp,Rm),Rn */
	r8 = R32(r6 + 0x30u); UPD(0x0C07BC12u, 1);  /* 0C07BC10 mov.l @(disp,Rm),Rn */
	r10 = R32(r6 + 0x34u); UPD(0x0C07BC14u, 1);  /* 0C07BC12 mov.l @(disp,Rm),Rn */
	r9 += r8;  /* 0C07BC14 add Rm,Rn */
	r1 += r10;  /* 0C07BC16 add Rm,Rn */
	W32(r6 + 0x28u, r9); UPD(0x0C07BC1Au, 3);  /* 0C07BC18 mov.l Rm,@(disp,Rn) */
	{ W32(r6 + 0x2Cu, r1); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C07BA9Eu, 3); goto L_0C07BA9E; }  /* 0C07BC1A bra */
L_0C07BC60: BLKS(0x0C07BC60u);
	r3 = R32(r2 + 0x30u); UPD(0x0C07BC62u, 1);  /* 0C07BC60 mov.l @(disp,Rm),Rn */
	r0 = 0xFFFD0000u; UPD(0x0C07BC64u, 1);  /* 0C07BC62 mov.l @(disp,pc),Rn */
	T = (s32)r3 > (s32)r0;  /* 0C07BC64 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C07BC70u, 4); goto L_0C07BC70; }  /* 0C07BC66 bf */
L_0C07BC68: BLKS(0x0C07BC68u);
	r4 = 0xFFFFF800u; UPD(0x0C07BC6Au, 1);  /* 0C07BC68 mov.w @(disp,pc),Rn */
	r4 += r3;  /* 0C07BC6A add Rm,Rn */
	W32(r2 + 0x30u, r4); UPD(0x0C07BC6Eu, 2);  /* 0C07BC6C mov.l Rm,@(disp,Rn) */
	r3 = r4;  /* 0C07BC6E mov Rm,Rn */
	UPD(0x0C07BC70u, 1);
L_0C07BC70: BLKS(0x0C07BC70u);
	r5 = R32(r2 + 0x28u); UPD(0x0C07BC72u, 1);  /* 0C07BC70 mov.l @(disp,Rm),Rn */
	r5 += r3;  /* 0C07BC72 add Rm,Rn */
	{ W32(r2 + 0x28u, r5); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C07BC02u, 4); goto L_0C07BC02; }  /* 0C07BC74 bra */
L_0C07BC80: BLKS(0x0C07BC80u);
	r13 = 0xC068E60u; UPD(0x0C07BC82u, 1);  /* 0C07BC80 mov.l @(disp,pc),Rn */
	r8 = 0xC069B20u; UPD(0x0C07BC84u, 1);  /* 0C07BC82 mov.l @(disp,pc),Rn */
	r6 = R32(r9 + 0x10u); UPD(0x0C07BC86u, 1);  /* 0C07BC84 mov.l @(disp,Rm),Rn */
	r7 = R32(r9 + 0x14u); UPD(0x0C07BC88u, 1);  /* 0C07BC86 mov.l @(disp,Rm),Rn */
	r4 = R32(r12 + 0x28u); UPD(0x0C07BC8Au, 1);  /* 0C07BC88 mov.l @(disp,Rm),Rn */
	IF(0x0C07BC8Au); { u32 t_ = r13; PR = 0x0C07BC8Eu; r5 = R32(r12 + 0x2Cu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C068E60, 0x0C068E60u, 0x0C07BC8Eu); }  /* 0C07BC8A jsr @Rn */
L_0C07BC8E: BLKS(0x0C07BC8Eu);
	r10 = 0x70000u; UPD(0x0C07BC90u, 1);  /* 0C07BC8E mov.l @(disp,pc),Rn */
	r9 = r0;  /* 0C07BC90 mov Rm,Rn */
	r4 = r0;  /* 0C07BC92 mov Rm,Rn */
	IF(0x0C07BC94u); { u32 t_ = r8; PR = 0x0C07BC98u; r5 = r10; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C07BC98u); }  /* 0C07BC94 jsr @Rn */
L_0C07BC98: BLKS(0x0C07BC98u);
	r4 = r9;  /* 0C07BC98 mov Rm,Rn */
	r9 = 0xC069AF0u; UPD(0x0C07BC9Cu, 2);  /* 0C07BC9A mov.l @(disp,pc),Rn */
	r13 = r0;  /* 0C07BC9C mov Rm,Rn */
	IF(0x0C07BC9Eu); { u32 t_ = r9; PR = 0x0C07BCA2u; r5 = r10; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C07BCA2u); }  /* 0C07BC9E jsr @Rn */
L_0C07BCA2: BLKS(0x0C07BCA2u);
	r2 = r0;  /* 0C07BCA2 mov Rm,Rn */
	r1 = R32(r12 + 0x30u); UPD(0x0C07BCA6u, 2);  /* 0C07BCA4 mov.l @(disp,Rm),Rn */
	r0 = r13;  /* 0C07BCA6 mov Rm,Rn */
	r0 -= r1;  /* 0C07BCA8 sub Rm,Rn */
	IF(0x0C07BCAAu); T = (s32)r0 >= 0;  /* 0C07BCAA cmp/pz Rn */
	if (!T) { UPD(0x0C07BCE0u, 6); goto L_0C07BCE0; }  /* 0C07BCAC bf */
L_0C07BCAE: BLKS(0x0C07BCAEu);
	IF(0x0C07BCAEu); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C07BCAE shar Rn */
	IF(0x0C07BCB0u); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C07BCB0 shar Rn */
	r0 |= 0x1u;  /* 0C07BCB2 or #imm,r0 */
	r1 += r0;  /* 0C07BCB4 add Rm,Rn */
	W32(r12 + 0x30u, r1); UPD(0x0C07BCB8u, 5);  /* 0C07BCB6 mov.l Rm,@(disp,Rn) */
	r0 = r2;  /* 0C07BCB8 mov Rm,Rn */
	r1 = R32(r12 + 0x34u); UPD(0x0C07BCBCu, 2);  /* 0C07BCBA mov.l @(disp,Rm),Rn */
	r0 -= r1;  /* 0C07BCBC sub Rm,Rn */
	IF(0x0C07BCBEu); T = (s32)r0 >= 0;  /* 0C07BCBE cmp/pz Rn */
	if (!T) { UPD(0x0C07BCD0u, 5); goto L_0C07BCD0; }  /* 0C07BCC0 bf */
L_0C07BCC2: BLKS(0x0C07BCC2u);
	IF(0x0C07BCC2u); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C07BCC2 shar Rn */
	IF(0x0C07BCC4u); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C07BCC4 shar Rn */
	r0 |= 0x1u;  /* 0C07BCC6 or #imm,r0 */
	r1 += r0;  /* 0C07BCC8 add Rm,Rn */
	{ W32(r12 + 0x34u, r1); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C07BBE6u, 7); goto L_0C07BBE6; }  /* 0C07BCCA bra */
L_0C07BCD0: BLKS(0x0C07BCD0u);
	{ r0 += 0x3u; /* slot add #imm,Rn */ UPD(0x0C07BCC2u, 3); goto L_0C07BCC2; }  /* 0C07BCD0 bra */
L_0C07BCE0: BLKS(0x0C07BCE0u);
	{ r0 += 0x3u; /* slot add #imm,Rn */ UPD(0x0C07BCAEu, 3); goto L_0C07BCAE; }  /* 0C07BCE0 bra */
L_0C07BCF0: BLKS(0x0C07BCF0u);
	r13 = 0xC06A380u; UPD(0x0C07BCF2u, 1);  /* 0C07BCF0 mov.l @(disp,pc),Rn */
	IF(0x0C07BCF2u); ;  /* 0C07BCF2 nop */
	UPD(0x0C07BCF4u, 1);
L_0C07BCF4: BLKS(0x0C07BCF4u);
	r4 = R32(r9); UPD(0x0C07BCF6u, 1);  /* 0C07BCF4 mov.l @Rm,Rn */
	r0 = 0x10000000u; UPD(0x0C07BCF8u, 1);  /* 0C07BCF6 mov.l @(disp,pc),Rn */
	T = (r4 & r0) == 0;  /* 0C07BCF8 tst Rm,Rn */
	{ u32 c_ = !T; r6 = 0x60u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07BD10u, 4); goto L_0C07BD10; } UPD(0x0C07BCFEu, 1); goto L_0C07BCFE; }  /* 0C07BCFA bf/s */
L_0C07BCFE: BLKS(0x0C07BCFEu);
	r2 = 0x2A0u; UPD(0x0C07BD00u, 1);  /* 0C07BCFE mov.w @(disp,pc),Rn */
	r10 += 0x1u;  /* 0C07BD00 add #imm,Rn */
	r8 = 0x1u;  /* 0C07BD02 mov #imm,Rn */
	T = (s32)r10 > (s32)r8;  /* 0C07BD04 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r9 += r2; /* slot add Rm,Rn */ if (c_) { UPD(0x0C07BCF4u, 6); goto L_0C07BCF4; } goto L_0C07BD0A; }  /* 0C07BD06 bf/s */
L_0C07BD0A: BLKS(0x0C07BD0Au);
	{ r12 = 0x60u; /* slot mov #imm,Rn */ UPD(0x0C07BBA8u, 4); goto L_0C07BBA8; }  /* 0C07BD0A bra */
L_0C07BD10: BLKS(0x0C07BD10u);
	IF(0x0C07BD10u); MACL = r11 * r6;  /* 0C07BD10 mul.l Rm,Rn */
	r5 = 0xC3BC7CCu; UPD(0x0C07BD14u, 3);  /* 0C07BD12 mov.l @(disp,pc),Rn */
	IF(0x0C07BD14u); r8 = MACL;  /* 0C07BD14 sts macl,Rn */
	r8 += r5;  /* 0C07BD16 add Rm,Rn */
	r6 = R32(r9 + 0x10u); UPD(0x0C07BD1Au, 3);  /* 0C07BD18 mov.l @(disp,Rm),Rn */
	r7 = R32(r9 + 0x14u); UPD(0x0C07BD1Cu, 1);  /* 0C07BD1A mov.l @(disp,Rm),Rn */
	r4 = R32(r8 + 0x28u); UPD(0x0C07BD1Eu, 1);  /* 0C07BD1C mov.l @(disp,Rm),Rn */
	IF(0x0C07BD1Eu); { u32 t_ = r13; PR = 0x0C07BD22u; r5 = R32(r8 + 0x2Cu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C06A380, 0x0C06A380u, 0x0C07BD22u); }  /* 0C07BD1E jsr @Rn */
L_0C07BD22: BLKS(0x0C07BD22u);
	T = (s32)r0 >= (s32)r12;  /* 0C07BD22 cmp/ge Rm,Rn */
	{ u32 c_ = T; r7 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07BCFEu, 4); goto L_0C07BCFE; } goto L_0C07BD28; }  /* 0C07BD24 bt/s */
L_0C07BD28: BLKS(0x0C07BD28u);
	IF(0x0C07BD28u); ARG0(0x47ADu); { s32 s_ = (s32)r10; if (s_ >= 0) r7 <<= (s_ & 31); else if ((s_ & 31) == 0) r7 = 0; else r7 >>= ((~s_ & 31) + 1); }  /* 0C07BD28 shld Rm,Rn */
	r8 += 0x4Eu;  /* 0C07BD2A add #imm,Rn */
	r7 += 0x20u;  /* 0C07BD2C add #imm,Rn */
	W8(r8, r7); UPD(0x0C07BD30u, 5);  /* 0C07BD2E mov.b Rm,@Rn */
	{ r12 = r0; /* slot mov Rm,Rn */ UPD(0x0C07BCFEu, 3); goto L_0C07BCFE; }  /* 0C07BD30 bra */
}

void blk_f_0C07BD60(sh3_t *c)
{
	LOCALS;
L_0C07BD60: BLKS(0x0C07BD60u);
	r7 = 0x60u;  /* 0C07BD60 mov #imm,Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C07BD62 exts.w Rm,Rn */
	IF(0x0C07BD64u); MACL = r4 * r7;  /* 0C07BD64 mul.l Rm,Rn */
	r6 = 0xC3BC7CCu; UPD(0x0C07BD68u, 5);  /* 0C07BD66 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07BD6Au, 1);  /* 0C07BD68 mov.l Rm,@-Rn */
	IF(0x0C07BD6Au); r7 = MACL;  /* 0C07BD6A sts macl,Rn */
	r7 += r6;  /* 0C07BD6C add Rm,Rn */
	r5 = R32(r7 + 0x30u); UPD(0x0C07BD70u, 3);  /* 0C07BD6E mov.l @(disp,Rm),Rn */
	W32(r7 + 0x28u, r5); UPD(0x0C07BD72u, 1);  /* 0C07BD70 mov.l Rm,@(disp,Rn) */
	r2 = 0xC3C4048u; UPD(0x0C07BD74u, 1);  /* 0C07BD72 mov.l @(disp,pc),Rn */
	r3 = R32(r7 + 0x34u); UPD(0x0C07BD76u, 1);  /* 0C07BD74 mov.l @(disp,Rm),Rn */
	r0 = R32(r2); UPD(0x0C07BD78u, 1);  /* 0C07BD76 mov.l @Rm,Rn */
	r0 += r3;  /* 0C07BD78 add Rm,Rn */
	W32(r7 + 0x2Cu, r0); UPD(0x0C07BD7Cu, 2);  /* 0C07BD7A mov.l Rm,@(disp,Rn) */
	r1 = R32(r7 + 0x3Cu); UPD(0x0C07BD7Eu, 1);  /* 0C07BD7C mov.l @(disp,Rm),Rn */
	r0 = 0xFF000000u; UPD(0x0C07BD80u, 1);  /* 0C07BD7E mov.l @(disp,pc),Rn */
	T = (r1 & r0) == 0;  /* 0C07BD80 tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07BDC2u, 4); goto L_0C07BDC2; } goto L_0C07BD86; }  /* 0C07BD82 bt/s */
L_0C07BD86: BLKS(0x0C07BD86u);
	r2 = R32(r7 + 0x24u); UPD(0x0C07BD88u, 2);  /* 0C07BD86 mov.l @(disp,Rm),Rn */
	r3 = 0x0u;  /* 0C07BD88 mov #imm,Rn */
	r6 = 0x8Fu; UPD(0x0C07BD8Cu, 2);  /* 0C07BD8A mov.w @(disp,pc),Rn */
	r7 += 0x4Fu;  /* 0C07BD8C add #imm,Rn */
	IF(0x0C07BD8Eu); ;  /* 0C07BD8E nop */
	UPD(0x0C07BD90u, 2);
L_0C07BD90: BLKS(0x0C07BD90u);
	r0 = (u32)(s32)(s8)R8(r7); UPD(0x0C07BD92u, 1);  /* 0C07BD90 mov.b @Rm,Rn */
	r1 = r0 & 0xFF;  /* 0C07BD92 extu.b Rm,Rn */
	T = (s32)r3 > (s32)r1;  /* 0C07BD94 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C07BDF0u, 5); goto L_0C07BDF0; }  /* 0C07BD96 bf */
L_0C07BD98: BLKS(0x0C07BD98u);
	W32(r2, r1); UPD(0x0C07BD9Au, 1);  /* 0C07BD98 mov.l Rm,@Rn */
L_0C07BD9A: BLKS(0x0C07BD9Au);
	r5 = r3;  /* 0C07BD9A mov Rm,Rn */
	r5 += 0x1u;  /* 0C07BD9C add #imm,Rn */
	r3 = (u32)(s32)(s16)r5;  /* 0C07BD9E exts.w Rm,Rn */
	T = (s32)r3 > (s32)r6;  /* 0C07BDA0 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r2 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C07BD90u, 7); goto L_0C07BD90; } goto L_0C07BDA6; }  /* 0C07BDA2 bf/s */
L_0C07BDA6: BLKS(0x0C07BDA6u);
	r7 = 0x60u;  /* 0C07BDA6 mov #imm,Rn */
	IF(0x0C07BDA8u); MACL = r4 * r7;  /* 0C07BDA8 mul.l Rm,Rn */
	r2 = 0xC3BC7CCu; UPD(0x0C07BDACu, 5);  /* 0C07BDAA mov.l @(disp,pc),Rn */
	IF(0x0C07BDACu); r0 = MACL;  /* 0C07BDAC sts macl,Rn */
	r0 += r2;  /* 0C07BDAE add Rm,Rn */
	r1 = r0;  /* 0C07BDB0 mov Rm,Rn */
	r1 += 0x4Fu;  /* 0C07BDB2 add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r1); UPD(0x0C07BDB6u, 5);  /* 0C07BDB4 mov.b @Rm,Rn */
	r4 = 0x90u; UPD(0x0C07BDB8u, 1);  /* 0C07BDB6 mov.w @(disp,pc),Rn */
	r6 += 0x1u;  /* 0C07BDB8 add #imm,Rn */
	r3 = r6 & 0xFF;  /* 0C07BDBA extu.b Rm,Rn */
	T = r3 == r4;  /* 0C07BDBC cmp/eq Rm,Rn */
	{ u32 c_ = T; W8(r1, r6); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C07BDD0u, 6); goto L_0C07BDD0; } UPD(0x0C07BDC2u, 1); goto L_0C07BDC2; }  /* 0C07BDBE bt/s */
L_0C07BDC2: BLKS(0x0C07BDC2u);
	r15 = r14;  /* 0C07BDC2 mov Rm,Rn */
	IF(0x0C07BDC4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C07BDC4 rts */
L_0C07BDD0: BLKS(0x0C07BDD0u);
	r6 = R32(r0 + 0x3Cu); UPD(0x0C07BDD2u, 1);  /* 0C07BDD0 mov.l @(disp,Rm),Rn */
	r4 = 0x0u;  /* 0C07BDD2 mov #imm,Rn */
	r1 = 0xFFFFFFu; UPD(0x0C07BDD6u, 2);  /* 0C07BDD4 mov.l @(disp,pc),Rn */
	r6 &= r1;  /* 0C07BDD6 and Rm,Rn */
	W32(r0 + 0x3Cu, r6); UPD(0x0C07BDDAu, 2);  /* 0C07BDD8 mov.l Rm,@(disp,Rn) */
	r0 += 0x4Au;  /* 0C07BDDA add #imm,Rn */
	r3 = (u32)(s32)(s16)R16(r0); UPD(0x0C07BDDEu, 2);  /* 0C07BDDC mov.w @Rm,Rn */
	r5 = 0xC3C86B4u; UPD(0x0C07BDE0u, 1);  /* 0C07BDDE mov.l @(disp,pc),Rn */
	r0 = r3 & 0xFFFF;  /* 0C07BDE0 extu.w Rm,Rn */
	{ IF(0x0C07BDE4u); W8(r0 + r5, r4); /* slot mov.b Rm,@(r0,Rn) */ UPD(0x0C07BDC2u, 4); goto L_0C07BDC2; }  /* 0C07BDE2 bra */
L_0C07BDF0: BLKS(0x0C07BDF0u);
	{ W32(r2, r3); /* slot mov.l Rm,@Rn */ UPD(0x0C07BD9Au, 3); goto L_0C07BD9A; }  /* 0C07BDF0 bra */
}

/* FUN_0c07be10 */
void blk_f_0C07BE10(sh3_t *c)
{
	LOCALS;
L_0C07BE10: BLKS(0x0C07BE10u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07BE12u, 1);  /* 0C07BE10 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07BE14u, 1);  /* 0C07BE12 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07BE16u, 1);  /* 0C07BE14 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07BE18u, 1);  /* 0C07BE16 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07BE1Au, 1);  /* 0C07BE18 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C07BE1Cu, 1);  /* 0C07BE1A mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07BE1Eu, 1);  /* 0C07BE1C mov.l Rm,@-Rn */
	r2 = 0xC22E015u; UPD(0x0C07BE20u, 1);  /* 0C07BE1E mov.l @(disp,pc),Rn */
	IF(0x0C07BE20u); r15 -= 4; W32(r15, PR); UPD(0x0C07BE22u, 1);  /* 0C07BE20 sts.l pr,@-Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C07BE24u, 1);  /* 0C07BE22 mov.b @Rm,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C07BE24 add #imm,Rn */
	T = (r0 & r0) == 0;  /* 0C07BE26 tst Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07BE50u, 5); goto L_0C07BE50; } UPD(0x0C07BE2Cu, 1); goto L_0C07BE2C; }  /* 0C07BE28 bf/s */
L_0C07BE2C: BLKS(0x0C07BE2Cu);
	r14 += 0x8u;  /* 0C07BE2C add #imm,Rn */
	UPD(0x0C07BE2Eu, 1);
L_0C07BE2E: BLKS(0x0C07BE2Eu);
	r15 = r14;  /* 0C07BE2E mov Rm,Rn */
	IF(0x0C07BE30u); PR = R32(r15); r15 += 4; UPD(0x0C07BE32u, 2);  /* 0C07BE30 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07BE34u, 1);  /* 0C07BE32 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07BE36u, 1);  /* 0C07BE34 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07BE38u, 1);  /* 0C07BE36 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07BE3Au, 1);  /* 0C07BE38 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07BE3Cu, 1);  /* 0C07BE3A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07BE3Eu, 1);  /* 0C07BE3C mov.l @Rm+,Rn */
	IF(0x0C07BE3Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07BE3E rts */
L_0C07BE50: BLKS(0x0C07BE50u);
	r8 = 0xC07C010u; UPD(0x0C07BE52u, 1);  /* 0C07BE50 mov.l @(disp,pc),Rn */
	IF(0x0C07BE52u); { u32 t_ = r8; PR = 0x0C07BE56u; r4 = 0x3u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07C010, 0x0C07C010u, 0x0C07BE56u); }  /* 0C07BE52 jsr @Rn */
L_0C07BE56: BLKS(0x0C07BE56u);
	T = (r0 & r0) == 0;  /* 0C07BE56 tst Rm,Rn */
	if (T) { UPD(0x0C07BE2Cu, 4); goto L_0C07BE2C; }  /* 0C07BE58 bt */
L_0C07BE5A: BLKS(0x0C07BE5Au);
	r0 = r14;  /* 0C07BE5A mov Rm,Rn */
	r13 = 0xC28EDFCu; UPD(0x0C07BE5Eu, 2);  /* 0C07BE5C mov.l @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)R16(r13); UPD(0x0C07BE60u, 1);  /* 0C07BE5E mov.w @Rm,Rn */
	r0 += 0x2u;  /* 0C07BE60 add #imm,Rn */
	W16(r14, r4); UPD(0x0C07BE64u, 2);  /* 0C07BE62 mov.w Rm,@Rn */
	r9 = 0x0u;  /* 0C07BE64 mov #imm,Rn */
	r4 += 0x1u;  /* 0C07BE66 add #imm,Rn */
	W16(r0, r4); UPD(0x0C07BE6Au, 3);  /* 0C07BE68 mov.w Rm,@Rn */
	r11 = 0x60u;  /* 0C07BE6A mov #imm,Rn */
	r3 = (u32)(s32)(s16)R16(r13); UPD(0x0C07BE6Eu, 2);  /* 0C07BE6C mov.w @Rm,Rn */
	r0 += 0x2u;  /* 0C07BE6E add #imm,Rn */
	r3 += 0x2u;  /* 0C07BE70 add #imm,Rn */
	W16(r0, r3); UPD(0x0C07BE74u, 3);  /* 0C07BE72 mov.w Rm,@Rn */
	r12 = 0x60u;  /* 0C07BE74 mov #imm,Rn */
	r10 = r14;  /* 0C07BE76 mov Rm,Rn */
	UPD(0x0C07BE78u, 2);
L_0C07BE78: BLKS(0x0C07BE78u);
	{ u32 v_ = (u32)(s32)(s16)R16(r10); r10 += 2; r8 = v_; } UPD(0x0C07BE7Au, 1);  /* 0C07BE78 mov.w @Rm+,Rn */
	r5 = 0xDu;  /* 0C07BE7A mov #imm,Rn */
	IF(0x0C07BE7Cu); MACL = r8 * r11;  /* 0C07BE7C mul.l Rm,Rn */
	r7 = 0xC3BC7CCu; UPD(0x0C07BE80u, 4);  /* 0C07BE7E mov.l @(disp,pc),Rn */
	r0 = r9;  /* 0C07BE80 mov Rm,Rn */
	IF(0x0C07BE82u); r2 = MACL;  /* 0C07BE82 sts macl,Rn */
	r6 = 0xC0000000u; UPD(0x0C07BE86u, 3);  /* 0C07BE84 mov.l @(disp,pc),Rn */
	r2 += r7;  /* 0C07BE86 add Rm,Rn */
	W32(r2, r6); UPD(0x0C07BE8Au, 2);  /* 0C07BE88 mov.l Rm,@Rn */
	T = r0 == 0x2u;  /* 0C07BE8A cmp/eq #imm,r0 */
	W32(r2 + 0x4u, r5); UPD(0x0C07BE8Eu, 2);  /* 0C07BE8C mov.l Rm,@(disp,Rn) */
	{ u32 c_ = T; W32(r2 + 0x8u, r9); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C07BF30u, 3); goto L_0C07BF30; } UPD(0x0C07BE92u, 1); goto L_0C07BE92; }  /* 0C07BE8E bt/s */
L_0C07BE92: BLKS(0x0C07BE92u);
	r1 = 0x0u;  /* 0C07BE92 mov #imm,Rn */
	UPD(0x0C07BE94u, 1);
L_0C07BE94: BLKS(0x0C07BE94u);
	r7 = 0xC07BF80u; UPD(0x0C07BE96u, 1);  /* 0C07BE94 mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C07BE96 mov Rm,Rn */
	IF(0x0C07BE98u); { u32 t_ = r7; PR = 0x0C07BE9Cu; W32(r2 + 0xCu, r1); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C07BF80, 0x0C07BF80u, 0x0C07BE9Cu); }  /* 0C07BE98 jsr @Rn */
L_0C07BE9C: BLKS(0x0C07BE9Cu);
	r5 = 0x3u;  /* 0C07BE9C mov #imm,Rn */
	r3 = r9;  /* 0C07BE9E mov Rm,Rn */
	IF(0x0C07BEA0u); ARG0(0x435Du); { s32 s_ = (s32)r5; if (s_ >= 0) r3 <<= (s_ & 31); else if ((s_ & 31) == 0) r3 = 0; else r3 >>= ((~s_ & 31) + 1); }  /* 0C07BEA0 shld Rm,Rn */
	r4 = 0xC189AFCu; UPD(0x0C07BEA4u, 4);  /* 0C07BEA2 mov.l @(disp,pc),Rn */
	IF(0x0C07BEA4u); MACL = r8 * r12;  /* 0C07BEA4 mul.l Rm,Rn */
	r3 += r4;  /* 0C07BEA6 add Rm,Rn */
	r6 = 0xC3BC7CCu; UPD(0x0C07BEAAu, 4);  /* 0C07BEA8 mov.l @(disp,pc),Rn */
	IF(0x0C07BEAAu); r8 = MACL;  /* 0C07BEAA sts macl,Rn */
	r2 = R32(r3); UPD(0x0C07BEAEu, 2);  /* 0C07BEAC mov.l @Rm,Rn */
	r8 += r6;  /* 0C07BEAE add Rm,Rn */
	W32(r8 + 0x30u, r2); UPD(0x0C07BEB2u, 2);  /* 0C07BEB0 mov.l Rm,@(disp,Rn) */
	r7 = 0x17u;  /* 0C07BEB2 mov #imm,Rn */
	W32(r8 + 0x28u, r2); UPD(0x0C07BEB6u, 2);  /* 0C07BEB4 mov.l Rm,@(disp,Rn) */
	r0 = R32(r3 + 0x4u); UPD(0x0C07BEB8u, 1);  /* 0C07BEB6 mov.l @(disp,Rm),Rn */
	r2 = 0x0u;  /* 0C07BEB8 mov #imm,Rn */
	W32(r8 + 0x34u, r0); UPD(0x0C07BEBCu, 2);  /* 0C07BEBA mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x2Cu, r0); UPD(0x0C07BEBEu, 1);  /* 0C07BEBC mov.l Rm,@(disp,Rn) */
	r8 += 0x44u;  /* 0C07BEBE add #imm,Rn */
	W8(r8, r7); UPD(0x0C07BEC2u, 2);  /* 0C07BEC0 mov.b Rm,@Rn */
	r0 = r9;  /* 0C07BEC2 mov Rm,Rn */
	r6 = 0xC189B14u; UPD(0x0C07BEC6u, 2);  /* 0C07BEC4 mov.l @(disp,pc),Rn */
	IF(0x0C07BEC6u); r0 <<= 2;  /* 0C07BEC6 shll2 Rn */
	IF(0x0C07BEC8u); r5 = R32(r0 + r6); UPD(0x0C07BECAu, 2);  /* 0C07BEC8 mov.l @(r0,Rm),Rn */
	r8 += 0xFFFFFFBCu;  /* 0C07BECA add #imm,Rn */
	r4 = 0x808080u; UPD(0x0C07BECEu, 2);  /* 0C07BECC mov.l @(disp,pc),Rn */
	r0 = r9;  /* 0C07BECE mov Rm,Rn */
	W32(r8 + 0x38u, r5); UPD(0x0C07BED2u, 2);  /* 0C07BED0 mov.l Rm,@(disp,Rn) */
	T = r0 == 0x2u;  /* 0C07BED2 cmp/eq #imm,r0 */
	W32(r8 + 0x3Cu, r4); UPD(0x0C07BED6u, 2);  /* 0C07BED4 mov.l Rm,@(disp,Rn) */
	r8 += 0x4Fu;  /* 0C07BED6 add #imm,Rn */
	W8(r8, r2); UPD(0x0C07BEDAu, 2);  /* 0C07BED8 mov.b Rm,@Rn */
	{ u32 c_ = T; r8 += 0xFFFFFFB1u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C07BEF0u, 3); goto L_0C07BEF0; } UPD(0x0C07BEDEu, 1); goto L_0C07BEDE; }  /* 0C07BEDA bt/s */
L_0C07BEDE: BLKS(0x0C07BEDEu);
	r0 = r9;  /* 0C07BEDE mov Rm,Rn */
	UPD(0x0C07BEE0u, 1);
L_0C07BEE0: BLKS(0x0C07BEE0u);
	r0 += 0x1u;  /* 0C07BEE0 add #imm,Rn */
	r9 = (u32)(s32)(s16)r0;  /* 0C07BEE2 exts.w Rm,Rn */
	r8 = 0x2u;  /* 0C07BEE4 mov #imm,Rn */
	T = (s32)r9 > (s32)r8;  /* 0C07BEE6 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C07BE78u, 7); goto L_0C07BE78; }  /* 0C07BEE8 bf */
L_0C07BEEA: BLKS(0x0C07BEEAu);
	r14 += 0x8u;  /* 0C07BEEA add #imm,Rn */
	{ IF(0x0C07BEEEu); ; /* slot nop */ UPD(0x0C07BE2Eu, 4); goto L_0C07BE2E; }  /* 0C07BEEC bra */
L_0C07BEF0: BLKS(0x0C07BEF0u);
	r0 = 0xC071950u; UPD(0x0C07BEF2u, 1);  /* 0C07BEF0 mov.l @(disp,pc),Rn */
	IF(0x0C07BEF2u); { u32 t_ = r0; PR = 0x0C07BEF6u; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C071950, 0x0C071950u, 0x0C07BEF6u); }  /* 0C07BEF2 jsr @Rn */
L_0C07BEF6: BLKS(0x0C07BEF6u);
	T = (r0 & r0) == 0;  /* 0C07BEF6 tst Rm,Rn */
	if (T) { UPD(0x0C07BEDEu, 4); goto L_0C07BEDE; }  /* 0C07BEF8 bt */
L_0C07BEFA: BLKS(0x0C07BEFAu);
	r0 = (u32)(s32)(s16)R16(r13); UPD(0x0C07BEFCu, 1);  /* 0C07BEFA mov.w @Rm,Rn */
	r8 += 0x4Au;  /* 0C07BEFC add #imm,Rn */
	W16(r8, r0); UPD(0x0C07BF00u, 2);  /* 0C07BEFE mov.w Rm,@Rn */
	r6 = 0x1u;  /* 0C07BF00 mov #imm,Rn */
	r5 = 0xC3C86B4u; UPD(0x0C07BF04u, 2);  /* 0C07BF02 mov.l @(disp,pc),Rn */
	r4 = 0xAu;  /* 0C07BF04 mov #imm,Rn */
	IF(0x0C07BF06u); W8(r0 + r5, r6); UPD(0x0C07BF08u, 2);  /* 0C07BF06 mov.b Rm,@(r0,Rn) */
	r8 += 0xFFFFFFB6u;  /* 0C07BF08 add #imm,Rn */
	r2 = 0xC23E0A8u; UPD(0x0C07BF0Cu, 2);  /* 0C07BF0A mov.l @(disp,pc),Rn */
	IF(0x0C07BF0Cu); ARG0(0x404Du); { s32 s_ = (s32)r4; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C07BF0C shld Rm,Rn */
	r3 = R32(r8 + 0x3Cu); UPD(0x0C07BF10u, 2);  /* 0C07BF0E mov.l @(disp,Rm),Rn */
	r0 += r2;  /* 0C07BF10 add Rm,Rn */
	r1 = 0x2000000u; UPD(0x0C07BF14u, 2);  /* 0C07BF12 mov.l @(disp,pc),Rn */
	r2 = 0xFFu; UPD(0x0C07BF16u, 1);  /* 0C07BF14 mov.w @(disp,pc),Rn */
	r3 |= r1;  /* 0C07BF16 or Rm,Rn */
	W32(r8 + 0x24u, r0); UPD(0x0C07BF1Au, 2);  /* 0C07BF18 mov.l Rm,@(disp,Rn) */
	r1 = 0x0u;  /* 0C07BF1A mov #imm,Rn */
	W32(r8 + 0x3Cu, r3); UPD(0x0C07BF1Eu, 2);  /* 0C07BF1C mov.l Rm,@(disp,Rn) */
	IF(0x0C07BF1Eu); ;  /* 0C07BF1E nop */
	UPD(0x0C07BF20u, 1);
L_0C07BF20: BLKS(0x0C07BF20u);
	W32(r0, r1); UPD(0x0C07BF22u, 1);  /* 0C07BF20 mov.l Rm,@Rn */
	r1 += 0x1u;  /* 0C07BF22 add #imm,Rn */
	r1 = (u32)(s32)(s16)r1;  /* 0C07BF24 exts.w Rm,Rn */
	T = (s32)r1 > (s32)r2;  /* 0C07BF26 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r0 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C07BF20u, 6); goto L_0C07BF20; } goto L_0C07BF2C; }  /* 0C07BF28 bf/s */
L_0C07BF2C: BLKS(0x0C07BF2Cu);
	{ r0 = r9; /* slot mov Rm,Rn */ UPD(0x0C07BEE0u, 4); goto L_0C07BEE0; }  /* 0C07BF2C bra */
L_0C07BF30: BLKS(0x0C07BF30u);
	r3 = 0xC28F611u; UPD(0x0C07BF32u, 1);  /* 0C07BF30 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r3); UPD(0x0C07BF34u, 1);  /* 0C07BF32 mov.b @Rm,Rn */
	{ r1 = r0 & 0xFF; /* slot extu.b Rm,Rn */ UPD(0x0C07BE94u, 3); goto L_0C07BE94; }  /* 0C07BF34 bra */
}

/* FUN_0c07bf80 */
void blk_f_0C07BF80(sh3_t *c)
{
	LOCALS;
L_0C07BF80: BLKS(0x0C07BF80u);
	r1 = (u32)(s32)(s16)r4;  /* 0C07BF80 exts.w Rm,Rn */
	r2 = 0x60u;  /* 0C07BF82 mov #imm,Rn */
	IF(0x0C07BF84u); MACL = r1 * r2;  /* 0C07BF84 mul.l Rm,Rn */
	r7 = 0xC3BC7CCu; UPD(0x0C07BF88u, 5);  /* 0C07BF86 mov.l @(disp,pc),Rn */
	r0 = 0x3u;  /* 0C07BF88 mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07BF8Cu, 2);  /* 0C07BF8A mov.l Rm,@-Rn */
	IF(0x0C07BF8Cu); r4 = MACL;  /* 0C07BF8C sts macl,Rn */
	r4 += r7;  /* 0C07BF8E add Rm,Rn */
	r5 = R32(r4 + 0x4u); UPD(0x0C07BF92u, 3);  /* 0C07BF90 mov.l @(disp,Rm),Rn */
	r1 = 0x4u;  /* 0C07BF92 mov #imm,Rn */
	IF(0x0C07BF94u); ARG0(0x450Du); { s32 s_ = (s32)r0; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = 0; else r5 >>= ((~s_ & 31) + 1); }  /* 0C07BF94 shld Rm,Rn */
	r6 = 0xC189B20u; UPD(0x0C07BF98u, 3);  /* 0C07BF96 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C07BF98 mov Rm,Rn */
	r5 += r6;  /* 0C07BF9A add Rm,Rn */
	r3 = R32(r5 + 0x4u); UPD(0x0C07BF9Eu, 3);  /* 0C07BF9C mov.l @(disp,Rm),Rn */
	W32(r4 + 0x20u, r3); UPD(0x0C07BFA0u, 1);  /* 0C07BF9E mov.l Rm,@(disp,Rn) */
	r0 = R32(r4 + 0x8u); UPD(0x0C07BFA2u, 1);  /* 0C07BFA0 mov.l @(disp,Rm),Rn */
	r7 = R32(r5); UPD(0x0C07BFA4u, 1);  /* 0C07BFA2 mov.l @Rm,Rn */
	IF(0x0C07BFA4u); ARG0(0x401Du); { s32 s_ = (s32)r1; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C07BFA4 shld Rm,Rn */
	W32(r4 + 0x10u, r7); UPD(0x0C07BFA8u, 2);  /* 0C07BFA6 mov.l Rm,@(disp,Rn) */
	r1 = 0x40u;  /* 0C07BFA8 mov #imm,Rn */
	IF(0x0C07BFAAu); r6 = R32(r0 + r7); UPD(0x0C07BFACu, 2);  /* 0C07BFAA mov.l @(r0,Rm),Rn */
	r5 = R32(r4 + 0xCu); UPD(0x0C07BFAEu, 1);  /* 0C07BFAC mov.l @(disp,Rm),Rn */
	r0 = 0x3u;  /* 0C07BFAE mov #imm,Rn */
	IF(0x0C07BFB0u); ARG0(0x450Du); { s32 s_ = (s32)r0; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = 0; else r5 >>= ((~s_ & 31) + 1); }  /* 0C07BFB0 shld Rm,Rn */
	W32(r4 + 0x14u, r6); UPD(0x0C07BFB4u, 3);  /* 0C07BFB2 mov.l Rm,@(disp,Rn) */
	r5 += r6;  /* 0C07BFB4 add Rm,Rn */
	r2 = R32(r5); UPD(0x0C07BFB8u, 2);  /* 0C07BFB6 mov.l @Rm,Rn */
	r0 = 0x0u;  /* 0C07BFB8 mov #imm,Rn */
	W32(r4 + 0x18u, r2); UPD(0x0C07BFBCu, 2);  /* 0C07BFBA mov.l Rm,@(disp,Rn) */
	r3 = R32(r5 + 0x4u); UPD(0x0C07BFBEu, 1);  /* 0C07BFBC mov.l @(disp,Rm),Rn */
	W32(r4 + 0x1Cu, r3); UPD(0x0C07BFC0u, 1);  /* 0C07BFBE mov.l Rm,@(disp,Rn) */
	r4 += 0x46u;  /* 0C07BFC0 add #imm,Rn */
	W8(r4, r0); UPD(0x0C07BFC4u, 2);  /* 0C07BFC2 mov.b Rm,@Rn */
	r4 += 0x1u;  /* 0C07BFC4 add #imm,Rn */
	W8(r4, r1); UPD(0x0C07BFC8u, 2);  /* 0C07BFC6 mov.b Rm,@Rn */
	r4 += 0x9u;  /* 0C07BFC8 add #imm,Rn */
	W8(r4, r0); UPD(0x0C07BFCCu, 2);  /* 0C07BFCA mov.b Rm,@Rn */
	r15 = r14;  /* 0C07BFCC mov Rm,Rn */
	IF(0x0C07BFCEu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C07BFCE rts */
}

/* FUN_0c07bfe0 */
void blk_f_0C07BFE0(sh3_t *c)
{
	LOCALS;
L_0C07BFE0: BLKS(0x0C07BFE0u);
	r7 = (u32)(s32)(s16)r4;  /* 0C07BFE0 exts.w Rm,Rn */
	r0 = 0x60u;  /* 0C07BFE2 mov #imm,Rn */
	IF(0x0C07BFE4u); MACL = r7 * r0;  /* 0C07BFE4 mul.l Rm,Rn */
	r6 = 0xC3BC7CCu; UPD(0x0C07BFE8u, 5);  /* 0C07BFE6 mov.l @(disp,pc),Rn */
	r5 = 0x3u;  /* 0C07BFE8 mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07BFECu, 2);  /* 0C07BFEA mov.l Rm,@-Rn */
	IF(0x0C07BFECu); r0 = MACL;  /* 0C07BFEC sts macl,Rn */
	r0 += r6;  /* 0C07BFEE add Rm,Rn */
	r3 = R32(r0 + 0xCu); UPD(0x0C07BFF2u, 3);  /* 0C07BFF0 mov.l @(disp,Rm),Rn */
	r14 = r15;  /* 0C07BFF2 mov Rm,Rn */
	r4 = R32(r0 + 0x14u); UPD(0x0C07BFF6u, 2);  /* 0C07BFF4 mov.l @(disp,Rm),Rn */
	IF(0x0C07BFF6u); ARG0(0x435Du); { s32 s_ = (s32)r5; if (s_ >= 0) r3 <<= (s_ & 31); else if ((s_ & 31) == 0) r3 = 0; else r3 >>= ((~s_ & 31) + 1); }  /* 0C07BFF6 shld Rm,Rn */
	r3 += r4;  /* 0C07BFF8 add Rm,Rn */
	r1 = R32(r3); UPD(0x0C07BFFCu, 3);  /* 0C07BFFA mov.l @Rm,Rn */
	W32(r0 + 0x18u, r1); UPD(0x0C07BFFEu, 1);  /* 0C07BFFC mov.l Rm,@(disp,Rn) */
	r2 = R32(r3 + 0x4u); UPD(0x0C07C000u, 1);  /* 0C07BFFE mov.l @(disp,Rm),Rn */
	W32(r0 + 0x1Cu, r2); UPD(0x0C07C002u, 1);  /* 0C07C000 mov.l Rm,@(disp,Rn) */
	r15 = r14;  /* 0C07C002 mov Rm,Rn */
	IF(0x0C07C004u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C07C004 rts */
}

/* FUN_0c07c010 */
void blk_f_0C07C010(sh3_t *c)
{
	LOCALS;
L_0C07C010: BLKS(0x0C07C010u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07C012u, 1);  /* 0C07C010 mov.l Rm,@-Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C07C012 exts.w Rm,Rn */
	r0 = 0x100u; UPD(0x0C07C016u, 2);  /* 0C07C014 mov.w @(disp,pc),Rn */
	r7 = 0xC28EDFCu; UPD(0x0C07C018u, 1);  /* 0C07C016 mov.l @(disp,pc),Rn */
	T = (s32)r4 > (s32)r0;  /* 0C07C018 cmp/gt Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07C042u, 4); goto L_0C07C042; } goto L_0C07C01E; }  /* 0C07C01A bt/s */
L_0C07C01E: BLKS(0x0C07C01Eu);
	r6 = 0xFFu; UPD(0x0C07C020u, 2);  /* 0C07C01E mov.w @(disp,pc),Rn */
	r2 = 0x0u;  /* 0C07C020 mov #imm,Rn */
	r3 = 0xC3BC7CCu; UPD(0x0C07C024u, 2);  /* 0C07C022 mov.l @(disp,pc),Rn */
L_0C07C024: BLKS(0x0C07C024u);
	r0 = R32(r3); UPD(0x0C07C026u, 1);  /* 0C07C024 mov.l @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C07C026 tst Rm,Rn */
	{ u32 c_ = !T; r3 += 0x60u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C07C03Cu, 4); goto L_0C07C03C; } goto L_0C07C02C; }  /* 0C07C028 bf/s */
L_0C07C02C: BLKS(0x0C07C02Cu);
	r5 = r4;  /* 0C07C02C mov Rm,Rn */
	W16(r7, r2); UPD(0x0C07C030u, 3);  /* 0C07C02E mov.w Rm,@Rn */
	r5 += 0xFFFFFFFFu;  /* 0C07C030 add #imm,Rn */
	r4 = (u32)(s32)(s16)r5;  /* 0C07C032 exts.w Rm,Rn */
	r7 += 0x2u;  /* 0C07C034 add #imm,Rn */
	T = (r4 & r4) == 0;  /* 0C07C036 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07C044u, 7); goto L_0C07C044; } UPD(0x0C07C03Cu, 1); goto L_0C07C03C; }  /* 0C07C038 bt/s */
L_0C07C03C: BLKS(0x0C07C03Cu);
	r2 += 0x1u;  /* 0C07C03C add #imm,Rn */
	T = (s32)r2 > (s32)r6;  /* 0C07C03E cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C07C024u, 5); goto L_0C07C024; }  /* 0C07C040 bf */
L_0C07C042: BLKS(0x0C07C042u);
	r0 = 0x0u;  /* 0C07C042 mov #imm,Rn */
	UPD(0x0C07C044u, 1);
L_0C07C044: BLKS(0x0C07C044u);
	r15 = r14;  /* 0C07C044 mov Rm,Rn */
	IF(0x0C07C046u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C07C046 rts */
}

/* FUN_0c07c060 */
void blk_f_0C07C060(sh3_t *c)
{
	LOCALS;
L_0C07C060: BLKS(0x0C07C060u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07C062u, 1);  /* 0C07C060 mov.l Rm,@-Rn */
	r3 = 0x0u;  /* 0C07C062 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07C066u, 2);  /* 0C07C064 mov.l Rm,@-Rn */
	r8 = 0x0u;  /* 0C07C066 mov #imm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07C06Au, 2);  /* 0C07C068 mov.l Rm,@-Rn */
	r9 = 0x0u;  /* 0C07C06A mov #imm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07C06Eu, 2);  /* 0C07C06C mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07C070u, 1);  /* 0C07C06E mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07C072u, 1);  /* 0C07C070 mov.l Rm,@-Rn */
	r0 = 0xC23989Cu; UPD(0x0C07C074u, 1);  /* 0C07C072 mov.l @(disp,pc),Rn */
	IF(0x0C07C074u); r15 -= 4; W32(r15, PR); UPD(0x0C07C076u, 1);  /* 0C07C074 sts.l pr,@-Rn */
	r11 = r0;  /* 0C07C076 mov Rm,Rn */
	r2 = 0xC2A693Eu; UPD(0x0C07C07Au, 2);  /* 0C07C078 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C07C07A mov Rm,Rn */
	r10 = 0xC3BC7CCu; UPD(0x0C07C07Eu, 2);  /* 0C07C07C mov.l @(disp,pc),Rn */
	r12 = 0xC189B94u; UPD(0x0C07C080u, 1);  /* 0C07C07E mov.l @(disp,pc),Rn */
	W16(r2, r3); UPD(0x0C07C082u, 1);  /* 0C07C080 mov.w Rm,@Rn */
	W16(r0, r3); UPD(0x0C07C084u, 1);  /* 0C07C082 mov.w Rm,@Rn */
L_0C07C084: BLKS(0x0C07C084u);
	r2 = r8;  /* 0C07C084 mov Rm,Rn */
	r2 += r10;  /* 0C07C086 add Rm,Rn */
	r0 = R32(r2); UPD(0x0C07C08Au, 3);  /* 0C07C088 mov.l @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C07C08A tst Rm,Rn */
	if (!T) { UPD(0x0C07C120u, 4); goto L_0C07C120; }  /* 0C07C08C bf */
L_0C07C08E: BLKS(0x0C07C08Eu);
	r6 = 0xFFu; UPD(0x0C07C090u, 1);  /* 0C07C08E mov.w @(disp,pc),Rn */
	r9 += 0x1u;  /* 0C07C090 add #imm,Rn */
	T = (s32)r9 > (s32)r6;  /* 0C07C092 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r8 += 0x60u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C07C084u, 5); goto L_0C07C084; } goto L_0C07C098; }  /* 0C07C094 bf/s */
L_0C07C098: BLKS(0x0C07C098u);
	r9 = 0x100u; UPD(0x0C07C09Au, 2);  /* 0C07C098 mov.w @(disp,pc),Rn */
	r10 = 0xC3BC7CCu; UPD(0x0C07C09Cu, 1);  /* 0C07C09A mov.l @(disp,pc),Rn */
	r12 = 0xC286318u; UPD(0x0C07C09Eu, 1);  /* 0C07C09C mov.l @(disp,pc),Rn */
	r8 = 0x6000u; UPD(0x0C07C0A0u, 1);  /* 0C07C09E mov.w @(disp,pc),Rn */
	r11 = 0xC189B94u; UPD(0x0C07C0A2u, 1);  /* 0C07C0A0 mov.l @(disp,pc),Rn */
	IF(0x0C07C0A2u); ;  /* 0C07C0A2 nop */
	UPD(0x0C07C0A4u, 1);
L_0C07C0A4: BLKS(0x0C07C0A4u);
	r3 = r8;  /* 0C07C0A4 mov Rm,Rn */
	r3 += r10;  /* 0C07C0A6 add Rm,Rn */
	r0 = R32(r3); UPD(0x0C07C0AAu, 3);  /* 0C07C0A8 mov.l @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C07C0AA tst Rm,Rn */
	if (T) { UPD(0x0C07C0E2u, 4); goto L_0C07C0E2; }  /* 0C07C0AC bt */
L_0C07C0AE: BLKS(0x0C07C0AEu);
	r1 = R32(r3 + 0x28u); UPD(0x0C07C0B0u, 1);  /* 0C07C0AE mov.l @(disp,Rm),Rn */
	r5 = 0xC2A693Eu; UPD(0x0C07C0B2u, 1);  /* 0C07C0B0 mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s16)R16(r5); UPD(0x0C07C0B4u, 1);  /* 0C07C0B2 mov.w @Rm,Rn */
	r2 += 0x1u;  /* 0C07C0B4 add #imm,Rn */
	r7 = 0xFFF00000u; UPD(0x0C07C0B8u, 2);  /* 0C07C0B6 mov.l @(disp,pc),Rn */
	T = (s32)r1 >= (s32)r7;  /* 0C07C0B8 cmp/ge Rm,Rn */
	{ u32 c_ = !T; W16(r5, r2); /* slot mov.w Rm,@Rn */ if (c_) { UPD(0x0C07C100u, 4); goto L_0C07C100; } UPD(0x0C07C0BEu, 1); goto L_0C07C0BE; }  /* 0C07C0BA bf/s */
L_0C07C0BE: BLKS(0x0C07C0BEu);
	r0 &= 0x10u;  /* 0C07C0BE and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C07C0C0 tst Rm,Rn */
	{ u32 c_ = T; r3 += 0x48u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C07C0E2u, 5); goto L_0C07C0E2; } goto L_0C07C0C6; }  /* 0C07C0C2 bt/s */
L_0C07C0C6: BLKS(0x0C07C0C6u);
	r7 = (u32)(s32)(s8)R8(r3); UPD(0x0C07C0C8u, 2);  /* 0C07C0C6 mov.b @Rm,Rn */
	r0 = 0x4Cu;  /* 0C07C0C8 mov #imm,Rn */
	r6 = r7 & 0xFF;  /* 0C07C0CA extu.b Rm,Rn */
	IF(0x0C07C0CCu); MACL = r6 * r0;  /* 0C07C0CC mul.l Rm,Rn */
	IF(0x0C07C0CEu); r0 = MACL;  /* 0C07C0CE sts macl,Rn */
	IF(0x0C07C0D0u); r4 = R32(r0 + r12); UPD(0x0C07C0D2u, 6);  /* 0C07C0D0 mov.l @(r0,Rm),Rn */
	T = (r4 & r4) == 0;  /* 0C07C0D2 tst Rm,Rn */
	{ u32 c_ = T; r3 += 0xFFFFFFB8u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C07C100u, 4); goto L_0C07C100; } goto L_0C07C0D8; }  /* 0C07C0D4 bt/s */
L_0C07C0D8: BLKS(0x0C07C0D8u);
	r0 = R32(r3 + 0x4u); UPD(0x0C07C0DAu, 2);  /* 0C07C0D8 mov.l @(disp,Rm),Rn */
	IF(0x0C07C0DAu); r0 <<= 2;  /* 0C07C0DA shll2 Rn */
	IF(0x0C07C0DCu); r5 = R32(r0 + r11); UPD(0x0C07C0DEu, 2);  /* 0C07C0DC mov.l @(r0,Rm),Rn */
	IF(0x0C07C0DEu); { u32 t_ = r5; PR = 0x0C07C0E2u; r4 = (u32)(s32)(s16)r9; /* slot exts.w Rm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C07C0E2u); }  /* 0C07C0DE jsr @Rn */
L_0C07C0E2: BLKS(0x0C07C0E2u);
	r2 = 0x13Fu; UPD(0x0C07C0E4u, 1);  /* 0C07C0E2 mov.w @(disp,pc),Rn */
	r9 += 0x1u;  /* 0C07C0E4 add #imm,Rn */
	T = (s32)r9 > (s32)r2;  /* 0C07C0E6 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r8 += 0x60u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C07C0A4u, 5); goto L_0C07C0A4; } goto L_0C07C0EC; }  /* 0C07C0E8 bf/s */
L_0C07C0EC: BLKS(0x0C07C0ECu);
	r15 = r14;  /* 0C07C0EC mov Rm,Rn */
	IF(0x0C07C0EEu); PR = R32(r15); r15 += 4; UPD(0x0C07C0F0u, 3);  /* 0C07C0EE lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07C0F2u, 1);  /* 0C07C0F0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07C0F4u, 1);  /* 0C07C0F2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07C0F6u, 1);  /* 0C07C0F4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07C0F8u, 1);  /* 0C07C0F6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07C0FAu, 1);  /* 0C07C0F8 mov.l @Rm+,Rn */
	IF(0x0C07C0FAu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07C0FA rts */
L_0C07C100: BLKS(0x0C07C100u);
	r3 = 0xC07C910u; UPD(0x0C07C102u, 1);  /* 0C07C100 mov.l @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r9;  /* 0C07C102 exts.w Rm,Rn */
	r15 = r14;  /* 0C07C104 mov Rm,Rn */
	IF(0x0C07C106u); PR = R32(r15); r15 += 4; UPD(0x0C07C108u, 3);  /* 0C07C106 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07C10Au, 1);  /* 0C07C108 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07C10Cu, 1);  /* 0C07C10A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07C10Eu, 1);  /* 0C07C10C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07C110u, 1);  /* 0C07C10E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07C112u, 1);  /* 0C07C110 mov.l @Rm+,Rn */
	IF(0x0C07C112u); { u32 tv_ = r3; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C07C910u: TAIL(blk_f_0C07C910); default: JUMPD(tv_); } }  /* 0C07C112 jmp @Rn */
L_0C07C120: BLKS(0x0C07C120u);
	r0 = R32(r2 + 0x4u); UPD(0x0C07C122u, 1);  /* 0C07C120 mov.l @(disp,Rm),Rn */
	r4 = (u32)(s32)(s16)R16(r11); UPD(0x0C07C124u, 1);  /* 0C07C122 mov.w @Rm,Rn */
	IF(0x0C07C124u); r0 <<= 2;  /* 0C07C124 shll2 Rn */
	r4 += 0x1u;  /* 0C07C126 add #imm,Rn */
	IF(0x0C07C128u); r5 = R32(r0 + r12); UPD(0x0C07C12Au, 3);  /* 0C07C128 mov.l @(r0,Rm),Rn */
	W16(r11, r4); UPD(0x0C07C12Cu, 1);  /* 0C07C12A mov.w Rm,@Rn */
	IF(0x0C07C12Cu); { u32 t_ = r5; PR = 0x0C07C130u; r4 = (u32)(s32)(s16)r9; /* slot exts.w Rm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C07C130u); }  /* 0C07C12C jsr @Rn */
L_0C07C130: BLKS(0x0C07C130u);
	{ IF(0x0C07C132u); ; /* slot nop */ UPD(0x0C07C08Eu, 3); goto L_0C07C08E; }  /* 0C07C130 bra */
}

void blk_f_0C07C160(sh3_t *c)
{
	LOCALS;
L_0C07C160: BLKS(0x0C07C160u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07C162u, 1);  /* 0C07C160 mov.l Rm,@-Rn */
	r0 = 0x60u;  /* 0C07C162 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07C166u, 2);  /* 0C07C164 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07C168u, 1);  /* 0C07C166 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07C16Au, 1);  /* 0C07C168 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07C16Cu, 1);  /* 0C07C16A mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C07C16Eu, 1);  /* 0C07C16C mov.l Rm,@-Rn */
	r13 = (u32)(s32)(s16)r4;  /* 0C07C16E exts.w Rm,Rn */
	IF(0x0C07C170u); MACL = r13 * r0;  /* 0C07C170 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07C174u, 4);  /* 0C07C172 mov.l Rm,@-Rn */
	r0 = 0xC3BC81Au; UPD(0x0C07C176u, 1);  /* 0C07C174 mov.l @(disp,pc),Rn */
	IF(0x0C07C176u); r3 = MACL;  /* 0C07C176 sts macl,Rn */
	IF(0x0C07C178u); r15 -= 4; W32(r15, PR); UPD(0x0C07C17Au, 2);  /* 0C07C178 sts.l pr,@-Rn */
	IF(0x0C07C17Au); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C07C17Cu, 1);  /* 0C07C17A mov.b @(r0,Rm),Rn */
	r8 = 0xC29D1D8u; UPD(0x0C07C17Eu, 1);  /* 0C07C17C mov.l @(disp,pc),Rn */
	T = (r2 & r2) == 0;  /* 0C07C17E tst Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07C1B2u, 4); goto L_0C07C1B2; } goto L_0C07C184; }  /* 0C07C180 bf/s */
L_0C07C184: BLKS(0x0C07C184u);
	r10 = r8;  /* 0C07C184 mov Rm,Rn */
	r9 = 0x0u;  /* 0C07C186 mov #imm,Rn */
	r10 += 0x18u;  /* 0C07C188 add #imm,Rn */
	IF(0x0C07C18Au); ;  /* 0C07C18A nop */
	UPD(0x0C07C18Cu, 5);
L_0C07C18C: BLKS(0x0C07C18Cu);
	r1 = R32(r8); UPD(0x0C07C18Eu, 1);  /* 0C07C18C mov.l @Rm,Rn */
	r4 = 0x10000000u; UPD(0x0C07C190u, 1);  /* 0C07C18E mov.l @(disp,pc),Rn */
	T = (r1 & r4) == 0;  /* 0C07C190 tst Rm,Rn */
	if (T) { UPD(0x0C07C1A4u, 4); goto L_0C07C1A4; }  /* 0C07C192 bt */
L_0C07C194: BLKS(0x0C07C194u);
	r0 = 0x270u; UPD(0x0C07C196u, 1);  /* 0C07C194 mov.w @(disp,pc),Rn */
	IF(0x0C07C196u); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C07C198u, 1);  /* 0C07C196 mov.b @(r0,Rm),Rn */
	r11 = r2 & 0xFF;  /* 0C07C198 extu.b Rm,Rn */
	T = (r11 & r11) == 0;  /* 0C07C19A tst Rm,Rn */
	{ u32 c_ = !T; r12 = 0x60u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07C1A4u, 5); goto L_0C07C1A4; } goto L_0C07C1A0; }  /* 0C07C19C bf/s */
L_0C07C1A0: BLKS(0x0C07C1A0u);
	{ IF(0x0C07C1A2u); MACL = r13 * r12; /* slot mul.l Rm,Rn */ UPD(0x0C07C410u, 5); goto L_0C07C410; }  /* 0C07C1A0 bra */
L_0C07C1A4: BLKS(0x0C07C1A4u);
	r5 = 0x2A0u; UPD(0x0C07C1A6u, 1);  /* 0C07C1A4 mov.w @(disp,pc),Rn */
	r9 += 0x1u;  /* 0C07C1A6 add #imm,Rn */
	r11 = 0x1u;  /* 0C07C1A8 mov #imm,Rn */
	r10 += r5;  /* 0C07C1AA add Rm,Rn */
	T = (s32)r9 > (s32)r11;  /* 0C07C1AC cmp/gt Rm,Rn */
	{ u32 c_ = !T; r8 += r5; /* slot add Rm,Rn */ if (c_) { UPD(0x0C07C18Cu, 7); goto L_0C07C18C; } UPD(0x0C07C1B2u, 1); goto L_0C07C1B2; }  /* 0C07C1AE bf/s */
L_0C07C1B2: BLKS(0x0C07C1B2u);
	r3 = 0x60u;  /* 0C07C1B2 mov #imm,Rn */
	UPD(0x0C07C1B4u, 1);
L_0C07C1B4: BLKS(0x0C07C1B4u);
	IF(0x0C07C1B4u); MACL = r13 * r3;  /* 0C07C1B4 mul.l Rm,Rn */
	r7 = 0xC3BC7CCu; UPD(0x0C07C1B8u, 3);  /* 0C07C1B6 mov.l @(disp,pc),Rn */
	IF(0x0C07C1B8u); r11 = MACL;  /* 0C07C1B8 sts macl,Rn */
	r11 += r7;  /* 0C07C1BA add Rm,Rn */
	r3 = r11;  /* 0C07C1BC mov Rm,Rn */
	r3 += 0x4Eu;  /* 0C07C1BE add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r3); UPD(0x0C07C1C2u, 5);  /* 0C07C1C0 mov.b @Rm,Rn */
	r2 = r6 & 0xFF;  /* 0C07C1C2 extu.b Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C07C1C4 tst Rm,Rn */
	if (T) { UPD(0x0C07C1EAu, 5); goto L_0C07C1EA; }  /* 0C07C1C6 bt */
L_0C07C1C8: BLKS(0x0C07C1C8u);
	r4 = 0x2A0u; UPD(0x0C07C1CAu, 1);  /* 0C07C1C8 mov.w @(disp,pc),Rn */
	IF(0x0C07C1CAu); MACL = r2 * r4;  /* 0C07C1CA mul.l Rm,Rn */
	r12 = 0xC29D1D8u; UPD(0x0C07C1CEu, 3);  /* 0C07C1CC mov.l @(disp,pc),Rn */
	IF(0x0C07C1CEu); r8 = MACL;  /* 0C07C1CE sts macl,Rn */
	r12 -= r4;  /* 0C07C1D0 sub Rm,Rn */
	r8 += r12;  /* 0C07C1D2 add Rm,Rn */
	r2 = R32(r8); UPD(0x0C07C1D6u, 4);  /* 0C07C1D4 mov.l @Rm,Rn */
	r0 = 0x10000000u; UPD(0x0C07C1D8u, 1);  /* 0C07C1D6 mov.l @(disp,pc),Rn */
	r2 &= r0;  /* 0C07C1D8 and Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C07C1DA tst Rm,Rn */
	if (T) { UPD(0x0C07C1E4u, 5); goto L_0C07C1E4; }  /* 0C07C1DC bt */
L_0C07C1DE: BLKS(0x0C07C1DEu);
	r6 = R32(r8 + 0x10u); UPD(0x0C07C1E0u, 1);  /* 0C07C1DE mov.l @(disp,Rm),Rn */
	{ r7 = R32(r8 + 0x14u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C07C390u, 3); goto L_0C07C390; }  /* 0C07C1E0 bra */
L_0C07C1E4: BLKS(0x0C07C1E4u);
	W32(r11 + 0x34u, r2); UPD(0x0C07C1E6u, 1);  /* 0C07C1E4 mov.l Rm,@(disp,Rn) */
	W32(r11 + 0x30u, r2); UPD(0x0C07C1E8u, 1);  /* 0C07C1E6 mov.l Rm,@(disp,Rn) */
	W8(r3, r2); UPD(0x0C07C1EAu, 1);  /* 0C07C1E8 mov.b Rm,@Rn */
L_0C07C1EA: BLKS(0x0C07C1EAu);
	r3 = 0x60u;  /* 0C07C1EA mov #imm,Rn */
	IF(0x0C07C1ECu); MACL = r13 * r3;  /* 0C07C1EC mul.l Rm,Rn */
	r7 = 0xC3BC7CCu; UPD(0x0C07C1F0u, 4);  /* 0C07C1EE mov.l @(disp,pc),Rn */
	IF(0x0C07C1F0u); r8 = MACL;  /* 0C07C1F0 sts macl,Rn */
	r8 += r7;  /* 0C07C1F2 add Rm,Rn */
	r8 += 0x4Eu;  /* 0C07C1F4 add #imm,Rn */
	r11 = (u32)(s32)(s8)R8(r8); UPD(0x0C07C1F8u, 4);  /* 0C07C1F6 mov.b @Rm,Rn */
	T = (r11 & r11) == 0;  /* 0C07C1F8 tst Rm,Rn */
	{ u32 c_ = !T; r8 += 0xFFFFFFB2u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C07C214u, 4); goto L_0C07C214; } goto L_0C07C1FE; }  /* 0C07C1FA bf/s */
L_0C07C1FE: BLKS(0x0C07C1FEu);
	r0 = R32(r8); UPD(0x0C07C200u, 2);  /* 0C07C1FE mov.l @Rm,Rn */
	r4 = 0x4010u; UPD(0x0C07C202u, 1);  /* 0C07C200 mov.w @(disp,pc),Rn */
	r0 &= r4;  /* 0C07C202 and Rm,Rn */
	T = r0 == 0x10u;  /* 0C07C204 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C07C214u, 5); goto L_0C07C214; }  /* 0C07C206 bt */
L_0C07C208: BLKS(0x0C07C208u);
	r12 = 0x10u;  /* 0C07C208 mov #imm,Rn */
	T = r0 > r12;  /* 0C07C20A cmp/hi Rm,Rn */
	{ u32 c_ = T; T = (r0 & r0) == 0; /* slot tst Rm,Rn */ if (c_) { UPD(0x0C07C2C0u, 5); goto L_0C07C2C0; } goto L_0C07C210; }  /* 0C07C20C bt/s */
L_0C07C210: BLKS(0x0C07C210u);
	if (T) { UPD(0x0C07C230u, 4); goto L_0C07C230; }  /* 0C07C210 bt */
L_0C07C212: BLKS(0x0C07C212u);
	IF(0x0C07C212u); ;  /* 0C07C212 nop */
	UPD(0x0C07C214u, 1);
L_0C07C214: BLKS(0x0C07C214u);
	r15 = r14;  /* 0C07C214 mov Rm,Rn */
	IF(0x0C07C216u); PR = R32(r15); r15 += 4; UPD(0x0C07C218u, 2);  /* 0C07C216 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07C21Au, 1);  /* 0C07C218 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07C21Cu, 1);  /* 0C07C21A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07C21Eu, 1);  /* 0C07C21C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07C220u, 1);  /* 0C07C21E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07C222u, 1);  /* 0C07C220 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07C224u, 1);  /* 0C07C222 mov.l @Rm+,Rn */
	IF(0x0C07C224u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07C224 rts */
L_0C07C230: BLKS(0x0C07C230u);
	r2 = R32(r8 + 0x30u); UPD(0x0C07C232u, 1);  /* 0C07C230 mov.l @(disp,Rm),Rn */
	r8 += 0x40u;  /* 0C07C232 add #imm,Rn */
	r0 = R32(r8); UPD(0x0C07C236u, 2);  /* 0C07C234 mov.l @Rm,Rn */
	T = (s32)r2 > (s32)r0;  /* 0C07C236 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r8 += 0xFFFFFFC0u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C07C244u, 4); goto L_0C07C244; } goto L_0C07C23C; }  /* 0C07C238 bf/s */
L_0C07C23C: BLKS(0x0C07C23Cu);
	r10 = 0xFFFFF000u; UPD(0x0C07C23Eu, 2);  /* 0C07C23C mov.w @(disp,pc),Rn */
	r10 += r2;  /* 0C07C23E add Rm,Rn */
	W32(r8 + 0x30u, r10); UPD(0x0C07C242u, 2);  /* 0C07C240 mov.l Rm,@(disp,Rn) */
	r2 = r10;  /* 0C07C242 mov Rm,Rn */
	UPD(0x0C07C244u, 1);
L_0C07C244: BLKS(0x0C07C244u);
	r6 = R32(r8 + 0x28u); UPD(0x0C07C246u, 1);  /* 0C07C244 mov.l @(disp,Rm),Rn */
	r3 = R32(r8 + 0x2Cu); UPD(0x0C07C248u, 1);  /* 0C07C246 mov.l @(disp,Rm),Rn */
	r6 += r2;  /* 0C07C248 add Rm,Rn */
	r7 = R32(r8 + 0x34u); UPD(0x0C07C24Cu, 2);  /* 0C07C24A mov.l @(disp,Rm),Rn */
	W32(r8 + 0x28u, r6); UPD(0x0C07C24Eu, 1);  /* 0C07C24C mov.l Rm,@(disp,Rn) */
	r3 += r7;  /* 0C07C24E add Rm,Rn */
	r1 = 0xC0000u; UPD(0x0C07C252u, 2);  /* 0C07C250 mov.l @(disp,pc),Rn */
	r5 = 0x30C0000u; UPD(0x0C07C254u, 1);  /* 0C07C252 mov.l @(disp,pc),Rn */
	r6 += r1;  /* 0C07C254 add Rm,Rn */
	T = r6 > r5;  /* 0C07C256 cmp/hi Rm,Rn */
	{ u32 c_ = T; W32(r8 + 0x2Cu, r3); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C07C2A0u, 5); goto L_0C07C2A0; } UPD(0x0C07C25Cu, 1); goto L_0C07C25C; }  /* 0C07C258 bt/s */
L_0C07C25C: BLKS(0x0C07C25Cu);
	r2 = 0xFE8C0000u; UPD(0x0C07C25Eu, 1);  /* 0C07C25C mov.l @(disp,pc),Rn */
	r13 = 0x1180000u; UPD(0x0C07C260u, 1);  /* 0C07C25E mov.l @(disp,pc),Rn */
	r2 += r3;  /* 0C07C260 add Rm,Rn */
	T = r2 > r13;  /* 0C07C262 cmp/hi Rm,Rn */
	{ u32 c_ = !T; r6 = r8; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07C272u, 5); goto L_0C07C272; } goto L_0C07C268; }  /* 0C07C264 bf/s */
L_0C07C268: BLKS(0x0C07C268u);
	r11 = 0u - r7;  /* 0C07C268 neg Rm,Rn */
	r3 += r11;  /* 0C07C26A add Rm,Rn */
	W32(r8 + 0x34u, r11); UPD(0x0C07C26Eu, 4);  /* 0C07C26C mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x2Cu, r3); UPD(0x0C07C270u, 1);  /* 0C07C26E mov.l Rm,@(disp,Rn) */
	r6 = r8;  /* 0C07C270 mov Rm,Rn */
	UPD(0x0C07C272u, 1);
L_0C07C272: BLKS(0x0C07C272u);
	r6 += 0x44u;  /* 0C07C272 add #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r6); UPD(0x0C07C276u, 2);  /* 0C07C274 mov.b @Rm,Rn */
	r9 = 0x13u;  /* 0C07C276 mov #imm,Rn */
	r4 = 0xC2B039Cu; UPD(0x0C07C27Au, 2);  /* 0C07C278 mov.l @(disp,pc),Rn */
	r12 = r3 & 0xFF;  /* 0C07C27A extu.b Rm,Rn */
	r0 = R32(r4); UPD(0x0C07C27Eu, 2);  /* 0C07C27C mov.l @Rm,Rn */
	T = r9 >= r12;  /* 0C07C27E cmp/hs Rm,Rn */
	IF(0x0C07C280u); r8 = T;  /* 0C07C280 movt Rn */
	r0 &= 0x3u;  /* 0C07C282 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C07C284 tst Rm,Rn */
	IF(0x0C07C286u); r7 = T;  /* 0C07C286 movt Rn */
	r8 &= r7;  /* 0C07C288 and Rm,Rn */
	T = (r8 & r8) == 0;  /* 0C07C28A tst Rm,Rn */
	if (T) { UPD(0x0C07C214u, 10); goto L_0C07C214; }  /* 0C07C28C bt */
L_0C07C28E: BLKS(0x0C07C28Eu);
	r0 = r3;  /* 0C07C28E mov Rm,Rn */
	r0 += 0x1u;  /* 0C07C290 add #imm,Rn */
	{ W8(r6, r0); /* slot mov.b Rm,@Rn */ UPD(0x0C07C214u, 5); goto L_0C07C214; }  /* 0C07C292 bra */
L_0C07C2A0: BLKS(0x0C07C2A0u);
	r0 = 0xC07C910u; UPD(0x0C07C2A2u, 1);  /* 0C07C2A0 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C07C2A2 mov Rm,Rn */
	r15 = r14;  /* 0C07C2A4 mov Rm,Rn */
	IF(0x0C07C2A6u); PR = R32(r15); r15 += 4; UPD(0x0C07C2A8u, 3);  /* 0C07C2A6 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07C2AAu, 1);  /* 0C07C2A8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07C2ACu, 1);  /* 0C07C2AA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07C2AEu, 1);  /* 0C07C2AC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07C2B0u, 1);  /* 0C07C2AE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07C2B2u, 1);  /* 0C07C2B0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07C2B4u, 1);  /* 0C07C2B2 mov.l @Rm+,Rn */
	IF(0x0C07C2B4u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C07C910u: TAIL(blk_f_0C07C910); default: JUMPD(tv_); } }  /* 0C07C2B4 jmp @Rn */
L_0C07C2C0: BLKS(0x0C07C2C0u);
	r9 = 0x4000u; UPD(0x0C07C2C2u, 1);  /* 0C07C2C0 mov.w @(disp,pc),Rn */
	T = r0 == r9;  /* 0C07C2C2 cmp/eq Rm,Rn */
	if (!T) { UPD(0x0C07C214u, 4); goto L_0C07C214; }  /* 0C07C2C4 bf */
L_0C07C2C6: BLKS(0x0C07C2C6u);
	r10 = 0xC07D3B0u; UPD(0x0C07C2C8u, 1);  /* 0C07C2C6 mov.l @(disp,pc),Rn */
	IF(0x0C07C2C8u); { u32 t_ = r10; PR = 0x0C07C2CCu; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07D3B0, 0x0C07D3B0u, 0x0C07C2CCu); }  /* 0C07C2C8 jsr @Rn */
L_0C07C2CC: BLKS(0x0C07C2CCu);
	IF(0x0C07C2CCu); T = (s32)r0 >= 0;  /* 0C07C2CC cmp/pz Rn */
	if (!T) { UPD(0x0C07C300u, 4); goto L_0C07C300; }  /* 0C07C2CE bf */
L_0C07C2D0: BLKS(0x0C07C2D0u);
	r8 += 0x4Au;  /* 0C07C2D0 add #imm,Rn */
	r7 = (u32)(s32)(s16)R16(r8); UPD(0x0C07C2D4u, 2);  /* 0C07C2D2 mov.w @Rm,Rn */
	r11 = 0xB4u; UPD(0x0C07C2D6u, 1);  /* 0C07C2D4 mov.w @(disp,pc),Rn */
	r8 += 0xFFFFFFB6u;  /* 0C07C2D6 add #imm,Rn */
	IF(0x0C07C2D8u); MACL = r7 * r11;  /* 0C07C2D8 mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C07C2DCu, 4);  /* 0C07C2DA mov.l @(disp,pc),Rn */
	IF(0x0C07C2DCu); r10 = MACL;  /* 0C07C2DC sts macl,Rn */
	r10 += r2;  /* 0C07C2DE add Rm,Rn */
	r5 = R32(r10 + 0x24u); UPD(0x0C07C2E2u, 3);  /* 0C07C2E0 mov.l @(disp,Rm),Rn */
	r6 = R32(r8 + 0x30u); UPD(0x0C07C2E4u, 1);  /* 0C07C2E2 mov.l @(disp,Rm),Rn */
	r5 += r6;  /* 0C07C2E4 add Rm,Rn */
	W32(r8 + 0x28u, r5); UPD(0x0C07C2E8u, 2);  /* 0C07C2E6 mov.l Rm,@(disp,Rn) */
	r1 = R32(r8 + 0x34u); UPD(0x0C07C2EAu, 1);  /* 0C07C2E8 mov.l @(disp,Rm),Rn */
	r9 = R32(r10 + 0x28u); UPD(0x0C07C2ECu, 1);  /* 0C07C2EA mov.l @(disp,Rm),Rn */
	r9 += r1;  /* 0C07C2EC add Rm,Rn */
	{ W32(r8 + 0x2Cu, r9); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C07C214u, 4); goto L_0C07C214; }  /* 0C07C2EE bra */
L_0C07C300: BLKS(0x0C07C300u);
	r8 += 0x44u;  /* 0C07C300 add #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r8); UPD(0x0C07C304u, 2);  /* 0C07C302 mov.b @Rm,Rn */
	r12 = 0xC0BC0B0u; UPD(0x0C07C306u, 1);  /* 0C07C304 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFBCu;  /* 0C07C306 add #imm,Rn */
	r6 = r3 & 0xFF;  /* 0C07C308 extu.b Rm,Rn */
	r5 = R32(r8 + 0x2Cu); UPD(0x0C07C30Cu, 3);  /* 0C07C30A mov.l @(disp,Rm),Rn */
	IF(0x0C07C30Cu); { u32 t_ = r12; PR = 0x0C07C310u; r4 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BC0B0, 0x0C0BC0B0u, 0x0C07C310u); }  /* 0C07C30C jsr @Rn */
L_0C07C310: BLKS(0x0C07C310u);
	T = (r0 & r0) == 0;  /* 0C07C310 tst Rm,Rn */
	r6 = R32(r8 + 0x28u); UPD(0x0C07C314u, 2);  /* 0C07C312 mov.l @(disp,Rm),Rn */
	IF(0x0C07C314u); r3 = T;  /* 0C07C314 movt Rn */
	r7 = 0x1500000u; UPD(0x0C07C318u, 2);  /* 0C07C316 mov.l @(disp,pc),Rn */
	r2 = 0xFFF00000u; UPD(0x0C07C31Au, 1);  /* 0C07C318 mov.l @(disp,pc),Rn */
	T = (s32)r6 > (s32)r7;  /* 0C07C31A cmp/gt Rm,Rn */
	IF(0x0C07C31Cu); r11 = T;  /* 0C07C31C movt Rn */
	T = (s32)r2 > (s32)r6;  /* 0C07C31E cmp/gt Rm,Rn */
	IF(0x0C07C320u); r5 = T;  /* 0C07C320 movt Rn */
	r3 |= r11;  /* 0C07C322 or Rm,Rn */
	r3 |= r5;  /* 0C07C324 or Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C07C326 tst Rm,Rn */
	if (!T) { UPD(0x0C07C2A0u, 10); goto L_0C07C2A0; }  /* 0C07C328 bf */
L_0C07C32A: BLKS(0x0C07C32Au);
	r0 = R32(r8); UPD(0x0C07C32Cu, 1);  /* 0C07C32A mov.l @Rm,Rn */
	r4 = 0xFFFFBFFFu; UPD(0x0C07C32Eu, 1);  /* 0C07C32C mov.w @(disp,pc),Rn */
	r13 = 0x20000u; UPD(0x0C07C330u, 1);  /* 0C07C32E mov.l @(disp,pc),Rn */
	r0 &= r4;  /* 0C07C330 and Rm,Rn */
	r0 |= 0x4u;  /* 0C07C332 or #imm,r0 */
	W32(r8, r0); UPD(0x0C07C336u, 3);  /* 0C07C334 mov.l Rm,@Rn */
	W32(r8 + 0x30u, r13); UPD(0x0C07C338u, 1);  /* 0C07C336 mov.l Rm,@(disp,Rn) */
	{ W32(r8 + 0x34u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C07C214u, 3); goto L_0C07C214; }  /* 0C07C338 bra */
L_0C07C390: BLKS(0x0C07C390u);
	r8 = 0xC068E60u; UPD(0x0C07C392u, 1);  /* 0C07C390 mov.l @(disp,pc),Rn */
	r4 = R32(r11 + 0x28u); UPD(0x0C07C394u, 1);  /* 0C07C392 mov.l @(disp,Rm),Rn */
	IF(0x0C07C394u); { u32 t_ = r8; PR = 0x0C07C398u; r5 = R32(r11 + 0x2Cu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C068E60, 0x0C068E60u, 0x0C07C398u); }  /* 0C07C394 jsr @Rn */
L_0C07C398: BLKS(0x0C07C398u);
	r10 = 0xC069B20u; UPD(0x0C07C39Au, 1);  /* 0C07C398 mov.l @(disp,pc),Rn */
	r9 = r0;  /* 0C07C39A mov Rm,Rn */
	r12 = 0x50000u; UPD(0x0C07C39Eu, 2);  /* 0C07C39C mov.l @(disp,pc),Rn */
	r4 = r0;  /* 0C07C39E mov Rm,Rn */
	r8 = 0xC069AF0u; UPD(0x0C07C3A2u, 2);  /* 0C07C3A0 mov.l @(disp,pc),Rn */
	IF(0x0C07C3A2u); { u32 t_ = r10; PR = 0x0C07C3A6u; r5 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C07C3A6u); }  /* 0C07C3A2 jsr @Rn */
L_0C07C3A6: BLKS(0x0C07C3A6u);
	r10 = r0;  /* 0C07C3A6 mov Rm,Rn */
	r4 = r9;  /* 0C07C3A8 mov Rm,Rn */
	IF(0x0C07C3AAu); { u32 t_ = r8; PR = 0x0C07C3AEu; r5 = r12; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C07C3AEu); }  /* 0C07C3AA jsr @Rn */
L_0C07C3AE: BLKS(0x0C07C3AEu);
	r1 = R32(r11 + 0x30u); UPD(0x0C07C3B0u, 1);  /* 0C07C3AE mov.l @(disp,Rm),Rn */
	r10 -= r1;  /* 0C07C3B0 sub Rm,Rn */
	IF(0x0C07C3B2u); T = (s32)r10 >= 0;  /* 0C07C3B2 cmp/pz Rn */
	if (!T) { UPD(0x0C07C400u, 5); goto L_0C07C400; }  /* 0C07C3B4 bf */
L_0C07C3B6: BLKS(0x0C07C3B6u);
	r2 = r10;  /* 0C07C3B6 mov Rm,Rn */
	IF(0x0C07C3B8u); T = r2 & 1; r2 = (u32)((s32)r2 >> 1);  /* 0C07C3B8 shar Rn */
	IF(0x0C07C3BAu); T = r2 & 1; r2 = (u32)((s32)r2 >> 1);  /* 0C07C3BA shar Rn */
	r5 = 0x1u;  /* 0C07C3BC mov #imm,Rn */
	r2 |= r5;  /* 0C07C3BE or Rm,Rn */
	r2 += r1;  /* 0C07C3C0 add Rm,Rn */
	r1 = R32(r11 + 0x34u); UPD(0x0C07C3C4u, 7);  /* 0C07C3C2 mov.l @(disp,Rm),Rn */
	r0 -= r1;  /* 0C07C3C4 sub Rm,Rn */
	IF(0x0C07C3C6u); T = (s32)r0 >= 0;  /* 0C07C3C6 cmp/pz Rn */
	{ u32 c_ = !T; W32(r11 + 0x30u, r2); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C07C3F0u, 5); goto L_0C07C3F0; } UPD(0x0C07C3CCu, 1); goto L_0C07C3CC; }  /* 0C07C3C8 bf/s */
L_0C07C3CC: BLKS(0x0C07C3CCu);
	r6 = R32(r11 + 0x28u); UPD(0x0C07C3CEu, 1);  /* 0C07C3CC mov.l @(disp,Rm),Rn */
	IF(0x0C07C3CEu); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C07C3CE shar Rn */
	r6 += r2;  /* 0C07C3D0 add Rm,Rn */
	IF(0x0C07C3D2u); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C07C3D2 shar Rn */
	r2 = R32(r11 + 0x2Cu); UPD(0x0C07C3D6u, 4);  /* 0C07C3D4 mov.l @(disp,Rm),Rn */
	r0 |= 0x1u;  /* 0C07C3D6 or #imm,r0 */
	r0 += r1;  /* 0C07C3D8 add Rm,Rn */
	r2 += r0;  /* 0C07C3DA add Rm,Rn */
	W32(r11 + 0x34u, r0); UPD(0x0C07C3DEu, 4);  /* 0C07C3DC mov.l Rm,@(disp,Rn) */
	W32(r11 + 0x28u, r6); UPD(0x0C07C3E0u, 1);  /* 0C07C3DE mov.l Rm,@(disp,Rn) */
	{ W32(r11 + 0x2Cu, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C07C1EAu, 3); goto L_0C07C1EA; }  /* 0C07C3E0 bra */
L_0C07C3F0: BLKS(0x0C07C3F0u);
	{ r0 += 0x3u; /* slot add #imm,Rn */ UPD(0x0C07C3CCu, 3); goto L_0C07C3CC; }  /* 0C07C3F0 bra */
L_0C07C400: BLKS(0x0C07C400u);
	{ r10 += 0x3u; /* slot add #imm,Rn */ UPD(0x0C07C3B6u, 3); goto L_0C07C3B6; }  /* 0C07C400 bra */
L_0C07C410: BLKS(0x0C07C410u);
	r0 = 0xC3BC7CCu; UPD(0x0C07C412u, 1);  /* 0C07C410 mov.l @(disp,pc),Rn */
	r2 = 0xC06A380u; UPD(0x0C07C414u, 1);  /* 0C07C412 mov.l @(disp,pc),Rn */
	IF(0x0C07C414u); r12 = MACL;  /* 0C07C414 sts macl,Rn */
	r12 += r0;  /* 0C07C416 add Rm,Rn */
	r7 = R32(r8 + 0x14u); UPD(0x0C07C41Au, 3);  /* 0C07C418 mov.l @(disp,Rm),Rn */
	r6 = R32(r8 + 0x10u); UPD(0x0C07C41Cu, 1);  /* 0C07C41A mov.l @(disp,Rm),Rn */
	r5 = R32(r12 + 0x2Cu); UPD(0x0C07C41Eu, 1);  /* 0C07C41C mov.l @(disp,Rm),Rn */
	IF(0x0C07C41Eu); { u32 t_ = r2; PR = 0x0C07C422u; r4 = R32(r12 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C06A380, 0x0C06A380u, 0x0C07C422u); }  /* 0C07C41E jsr @Rn */
L_0C07C422: BLKS(0x0C07C422u);
	r7 = R32(r10); UPD(0x0C07C424u, 1);  /* 0C07C422 mov.l @Rm,Rn */
	r3 = 0xFFFFFFF4u;  /* 0C07C424 mov #imm,Rn */
	IF(0x0C07C426u); ARG0(0x473Cu); { s32 s_ = (s32)r3; if (s_ >= 0) r7 <<= (s_ & 31); else if ((s_ & 31) == 0) r7 = (u32)((s32)r7 >> 31); else r7 = (u32)((s32)r7 >> ((~s_ & 31) + 1)); }  /* 0C07C426 shad Rm,Rn */
	r5 = 0u - r7;  /* 0C07C428 neg Rm,Rn */
	r5 += 0x60u;  /* 0C07C42A add #imm,Rn */
	r6 = 0x11u;  /* 0C07C42C mov #imm,Rn */
	IF(0x0C07C42Eu); ARG0(0x456Du); { s32 s_ = (s32)r6; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = 0; else r5 >>= ((~s_ & 31) + 1); }  /* 0C07C42E shld Rm,Rn */
	T = (s32)r0 >= (s32)r5;  /* 0C07C430 cmp/ge Rm,Rn */
	if (T) { UPD(0x0C07C43Au, 10); goto L_0C07C43A; }  /* 0C07C432 bt */
L_0C07C434: BLKS(0x0C07C434u);
	r4 = 0xFFFFFFFu; UPD(0x0C07C436u, 1);  /* 0C07C434 mov.l @(disp,pc),Rn */
	T = (s32)r0 >= (s32)r4;  /* 0C07C436 cmp/ge Rm,Rn */
	if (!T) { UPD(0x0C07C43Eu, 4); goto L_0C07C43E; }  /* 0C07C438 bf */
L_0C07C43A: BLKS(0x0C07C43Au);
	{ IF(0x0C07C43Cu); ; /* slot nop */ UPD(0x0C07C1A4u, 3); goto L_0C07C1A4; }  /* 0C07C43A bra */
L_0C07C43E: BLKS(0x0C07C43Eu);
	r10 = 0x1u;  /* 0C07C43E mov #imm,Rn */
	IF(0x0C07C440u); ARG0(0x4A9Du); { s32 s_ = (s32)r9; if (s_ >= 0) r10 <<= (s_ & 31); else if ((s_ & 31) == 0) r10 = 0; else r10 >>= ((~s_ & 31) + 1); }  /* 0C07C440 shld Rm,Rn */
	r12 += 0x4Eu;  /* 0C07C442 add #imm,Rn */
	W8(r12, r10); UPD(0x0C07C446u, 4);  /* 0C07C444 mov.b Rm,@Rn */
	r12 += 0xFFFFFFB2u;  /* 0C07C446 add #imm,Rn */
	r2 = R32(r12); UPD(0x0C07C44Au, 2);  /* 0C07C448 mov.l @Rm,Rn */
	r8 = 0x4000u; UPD(0x0C07C44Cu, 1);  /* 0C07C44A mov.w @(disp,pc),Rn */
	T = (r2 & r8) == 0;  /* 0C07C44C tst Rm,Rn */
	if (T) { UPD(0x0C07C45Au, 4); goto L_0C07C45A; }  /* 0C07C44E bt */
L_0C07C450: BLKS(0x0C07C450u);
	r9 = 0xFFFFBFFFu; UPD(0x0C07C452u, 1);  /* 0C07C450 mov.w @(disp,pc),Rn */
	r2 &= r9;  /* 0C07C452 and Rm,Rn */
	W32(r12, r2); UPD(0x0C07C456u, 2);  /* 0C07C454 mov.l Rm,@Rn */
	W32(r12 + 0x34u, r11); UPD(0x0C07C458u, 1);  /* 0C07C456 mov.l Rm,@(disp,Rn) */
	W32(r12 + 0x30u, r11); UPD(0x0C07C45Au, 1);  /* 0C07C458 mov.l Rm,@(disp,Rn) */
L_0C07C45A: BLKS(0x0C07C45Au);
	{ r3 = 0x60u; /* slot mov #imm,Rn */ UPD(0x0C07C1B4u, 3); goto L_0C07C1B4; }  /* 0C07C45A bra */
}

void blk_f_0C07C480(sh3_t *c)
{
	LOCALS;
L_0C07C480: BLKS(0x0C07C480u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07C482u, 1);  /* 0C07C480 mov.l Rm,@-Rn */
	r0 = 0x60u;  /* 0C07C482 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07C486u, 2);  /* 0C07C484 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07C488u, 1);  /* 0C07C486 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07C48Au, 1);  /* 0C07C488 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07C48Cu, 1);  /* 0C07C48A mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C07C48C exts.w Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C07C490u, 2);  /* 0C07C48E mov.l Rm,@-Rn */
	IF(0x0C07C490u); MACL = r11 * r0;  /* 0C07C490 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07C494u, 3);  /* 0C07C492 mov.l Rm,@-Rn */
	r0 = 0xC3BC7CCu; UPD(0x0C07C496u, 1);  /* 0C07C494 mov.l @(disp,pc),Rn */
	IF(0x0C07C496u); r8 = MACL;  /* 0C07C496 sts macl,Rn */
	IF(0x0C07C498u); r15 -= 4; W32(r15, PR); UPD(0x0C07C49Au, 2);  /* 0C07C498 sts.l pr,@-Rn */
	r8 += r0;  /* 0C07C49A add Rm,Rn */
	r0 = R32(r8); UPD(0x0C07C49Eu, 2);  /* 0C07C49C mov.l @Rm,Rn */
	r0 &= 0x10u;  /* 0C07C49E and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C07C4A0 tst Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07C4AEu, 5); goto L_0C07C4AE; } goto L_0C07C4A6; }  /* 0C07C4A2 bf/s */
L_0C07C4A6: BLKS(0x0C07C4A6u);
	r3 = R32(r8 + 0x28u); UPD(0x0C07C4A8u, 2);  /* 0C07C4A6 mov.l @(disp,Rm),Rn */
	r1 = 0x2000u; UPD(0x0C07C4AAu, 1);  /* 0C07C4A8 mov.w @(disp,pc),Rn */
	r3 += r1;  /* 0C07C4AA add Rm,Rn */
	W32(r8 + 0x28u, r3); UPD(0x0C07C4AEu, 2);  /* 0C07C4AC mov.l Rm,@(disp,Rn) */
L_0C07C4AE: BLKS(0x0C07C4AEu);
	r5 = R32(r8 + 0x38u); UPD(0x0C07C4B0u, 1);  /* 0C07C4AE mov.l @(disp,Rm),Rn */
	r4 = 0x2000000u; UPD(0x0C07C4B2u, 1);  /* 0C07C4B0 mov.l @(disp,pc),Rn */
	T = (r5 & r4) == 0;  /* 0C07C4B2 tst Rm,Rn */
	{ u32 c_ = !T; r2 = 0x60u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07C530u, 4); goto L_0C07C530; } goto L_0C07C4B8; }  /* 0C07C4B4 bf/s */
L_0C07C4B8: BLKS(0x0C07C4B8u);
	r7 = r8;  /* 0C07C4B8 mov Rm,Rn */
	r7 += 0x4Fu;  /* 0C07C4BA add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C07C4BEu, 4);  /* 0C07C4BC mov.b @Rm,Rn */
	r6 += 0xFFFFFFFFu;  /* 0C07C4BE add #imm,Rn */
	r2 = r6 & 0xFF;  /* 0C07C4C0 extu.b Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C07C4C2 tst Rm,Rn */
	{ u32 c_ = T; W8(r7, r6); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C07C4E0u, 6); goto L_0C07C4E0; } UPD(0x0C07C4C8u, 1); goto L_0C07C4C8; }  /* 0C07C4C4 bt/s */
L_0C07C4C8: BLKS(0x0C07C4C8u);
	r15 = r14;  /* 0C07C4C8 mov Rm,Rn */
	IF(0x0C07C4CAu); PR = R32(r15); r15 += 4; UPD(0x0C07C4CCu, 2);  /* 0C07C4CA lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07C4CEu, 1);  /* 0C07C4CC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07C4D0u, 1);  /* 0C07C4CE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07C4D2u, 1);  /* 0C07C4D0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07C4D4u, 1);  /* 0C07C4D2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07C4D6u, 1);  /* 0C07C4D4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07C4D8u, 1);  /* 0C07C4D6 mov.l @Rm+,Rn */
	IF(0x0C07C4D8u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07C4D8 rts */
L_0C07C4E0: BLKS(0x0C07C4E0u);
	r9 = 0xC071950u; UPD(0x0C07C4E2u, 1);  /* 0C07C4E0 mov.l @(disp,pc),Rn */
	r4 = 0x1u;  /* 0C07C4E2 mov #imm,Rn */
	r10 = 0x204FFFFu; UPD(0x0C07C4E6u, 2);  /* 0C07C4E4 mov.l @(disp,pc),Rn */
	IF(0x0C07C4E6u); { u32 t_ = r9; PR = 0x0C07C4EAu; W32(r8 + 0x38u, r10); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C071950, 0x0C071950u, 0x0C07C4EAu); }  /* 0C07C4E6 jsr @Rn */
L_0C07C4EA: BLKS(0x0C07C4EAu);
	T = (r0 & r0) == 0;  /* 0C07C4EA tst Rm,Rn */
	if (T) { UPD(0x0C07C4C8u, 4); goto L_0C07C4C8; }  /* 0C07C4EC bt */
L_0C07C4EE: BLKS(0x0C07C4EEu);
	r8 += 0x4Au;  /* 0C07C4EE add #imm,Rn */
	r0 = 0xC28EDFCu; UPD(0x0C07C4F2u, 2);  /* 0C07C4F0 mov.l @(disp,pc),Rn */
	r5 = (u32)(s32)(s16)R16(r0); UPD(0x0C07C4F4u, 1);  /* 0C07C4F2 mov.w @Rm,Rn */
	r1 = 0x1u;  /* 0C07C4F4 mov #imm,Rn */
	W16(r8, r5); UPD(0x0C07C4F8u, 2);  /* 0C07C4F6 mov.w Rm,@Rn */
	r0 = (u32)(s32)(s16)r5;  /* 0C07C4F8 exts.w Rm,Rn */
	r4 = 0xC3C86B4u; UPD(0x0C07C4FCu, 2);  /* 0C07C4FA mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFB6u;  /* 0C07C4FC add #imm,Rn */
	IF(0x0C07C4FEu); W8(r0 + r4, r1); UPD(0x0C07C500u, 2);  /* 0C07C4FE mov.b Rm,@(r0,Rn) */
	r3 = 0xAu;  /* 0C07C500 mov #imm,Rn */
	IF(0x0C07C502u); ARG0(0x403Du); { s32 s_ = (s32)r3; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C07C502 shld Rm,Rn */
	r11 = R32(r8 + 0x3Cu); UPD(0x0C07C506u, 3);  /* 0C07C504 mov.l @(disp,Rm),Rn */
	r10 = 0x0u;  /* 0C07C506 mov #imm,Rn */
	r13 = 0xC23E0A8u; UPD(0x0C07C50Au, 2);  /* 0C07C508 mov.l @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C07C50A mov #imm,Rn */
	r12 = 0x1000000u; UPD(0x0C07C50Eu, 2);  /* 0C07C50C mov.l @(disp,pc),Rn */
	r0 += r13;  /* 0C07C50E add Rm,Rn */
	r11 |= r12;  /* 0C07C510 or Rm,Rn */
	W32(r8 + 0x24u, r0); UPD(0x0C07C514u, 3);  /* 0C07C512 mov.l Rm,@(disp,Rn) */
	r9 = r0;  /* 0C07C514 mov Rm,Rn */
	W32(r8 + 0x3Cu, r11); UPD(0x0C07C518u, 2);  /* 0C07C516 mov.l Rm,@(disp,Rn) */
	r2 = 0x37u;  /* 0C07C518 mov #imm,Rn */
	IF(0x0C07C51Au); ;  /* 0C07C51A nop */
	UPD(0x0C07C51Cu, 2);
L_0C07C51C: BLKS(0x0C07C51Cu);
	r8 = r10;  /* 0C07C51C mov Rm,Rn */
	W32(r9, r3); UPD(0x0C07C520u, 2);  /* 0C07C51E mov.l Rm,@Rn */
	r8 += 0x1u;  /* 0C07C520 add #imm,Rn */
	r10 = (u32)(s32)(s16)r8;  /* 0C07C522 exts.w Rm,Rn */
	T = (s32)r10 > (s32)r2;  /* 0C07C524 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r9 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C07C51Cu, 6); goto L_0C07C51C; } goto L_0C07C52A; }  /* 0C07C526 bf/s */
L_0C07C52A: BLKS(0x0C07C52Au);
	{ IF(0x0C07C52Cu); ; /* slot nop */ UPD(0x0C07C4C8u, 4); goto L_0C07C4C8; }  /* 0C07C52A bra */
L_0C07C530: BLKS(0x0C07C530u);
	IF(0x0C07C530u); MACL = r11 * r2;  /* 0C07C530 mul.l Rm,Rn */
	r6 = 0xC3BC7CCu; UPD(0x0C07C534u, 3);  /* 0C07C532 mov.l @(disp,pc),Rn */
	IF(0x0C07C534u); r7 = MACL;  /* 0C07C534 sts macl,Rn */
	r7 += r6;  /* 0C07C536 add Rm,Rn */
	r3 = R32(r7 + 0x38u); UPD(0x0C07C53Au, 3);  /* 0C07C538 mov.l @(disp,Rm),Rn */
	r9 = 0x403u; UPD(0x0C07C53Cu, 1);  /* 0C07C53A mov.w @(disp,pc),Rn */
	r10 = r3 & 0xFFFF;  /* 0C07C53C extu.w Rm,Rn */
	T = r10 > r9;  /* 0C07C53E cmp/hi Rm,Rn */
	if (T) { UPD(0x0C07C560u, 5); goto L_0C07C560; }  /* 0C07C540 bt */
L_0C07C542: BLKS(0x0C07C542u);
	r11 = R32(r7 + 0x3Cu); UPD(0x0C07C544u, 1);  /* 0C07C542 mov.l @(disp,Rm),Rn */
	r6 = 0xFF000000u; UPD(0x0C07C546u, 1);  /* 0C07C544 mov.l @(disp,pc),Rn */
	T = (r11 & r6) == 0;  /* 0C07C546 tst Rm,Rn */
	if (T) { UPD(0x0C07C558u, 4); goto L_0C07C558; }  /* 0C07C548 bt */
L_0C07C54A: BLKS(0x0C07C54Au);
	r7 += 0x4Au;  /* 0C07C54A add #imm,Rn */
	r3 = (u32)(s32)(s16)R16(r7); UPD(0x0C07C54Eu, 2);  /* 0C07C54C mov.w @Rm,Rn */
	r13 = 0x0u;  /* 0C07C54E mov #imm,Rn */
	r12 = 0xC3C86B4u; UPD(0x0C07C552u, 2);  /* 0C07C550 mov.l @(disp,pc),Rn */
	r0 = r3 & 0xFFFF;  /* 0C07C552 extu.w Rm,Rn */
	IF(0x0C07C554u); W8(r0 + r12, r13); UPD(0x0C07C556u, 2);  /* 0C07C554 mov.b Rm,@(r0,Rn) */
	r7 += 0xFFFFFFB6u;  /* 0C07C556 add #imm,Rn */
	UPD(0x0C07C558u, 1);
L_0C07C558: BLKS(0x0C07C558u);
	r4 = 0x0u;  /* 0C07C558 mov #imm,Rn */
	{ W32(r7, r4); /* slot mov.l Rm,@Rn */ UPD(0x0C07C4C8u, 4); goto L_0C07C4C8; }  /* 0C07C55A bra */
L_0C07C560: BLKS(0x0C07C560u);
	r0 = 0xFFFFFBFCu; UPD(0x0C07C562u, 1);  /* 0C07C560 mov.w @(disp,pc),Rn */
	r1 = R32(r7 + 0x3Cu); UPD(0x0C07C564u, 1);  /* 0C07C562 mov.l @(disp,Rm),Rn */
	r3 += r0;  /* 0C07C564 add Rm,Rn */
	r5 = 0xFF000000u; UPD(0x0C07C568u, 2);  /* 0C07C566 mov.l @(disp,pc),Rn */
	T = (r1 & r5) == 0;  /* 0C07C568 tst Rm,Rn */
	{ u32 c_ = T; W32(r7 + 0x38u, r3); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C07C4C8u, 4); goto L_0C07C4C8; } UPD(0x0C07C56Eu, 1); goto L_0C07C56E; }  /* 0C07C56A bt/s */
L_0C07C56E: BLKS(0x0C07C56Eu);
	r8 = r7;  /* 0C07C56E mov Rm,Rn */
	r9 = R32(r7 + 0x24u); UPD(0x0C07C572u, 2);  /* 0C07C570 mov.l @(disp,Rm),Rn */
	r8 += 0x4Fu;  /* 0C07C572 add #imm,Rn */
	r7 = (u32)(s32)(s8)R8(r8); UPD(0x0C07C576u, 2);  /* 0C07C574 mov.b @Rm,Rn */
	r10 = 0x0u;  /* 0C07C576 mov #imm,Rn */
	r7 += 0x1u;  /* 0C07C578 add #imm,Rn */
	r12 = 0xC069AF0u; UPD(0x0C07C57Cu, 3);  /* 0C07C57A mov.l @(disp,pc),Rn */
	r13 = r6;  /* 0C07C57C mov Rm,Rn */
	W8(r8, r7); UPD(0x0C07C580u, 2);  /* 0C07C57E mov.b Rm,@Rn */
L_0C07C580: BLKS(0x0C07C580u);
	r7 = 0x60u;  /* 0C07C580 mov #imm,Rn */
	IF(0x0C07C582u); MACL = r11 * r7;  /* 0C07C582 mul.l Rm,Rn */
	r6 = 0xC2380B0u; UPD(0x0C07C586u, 4);  /* 0C07C584 mov.l @(disp,pc),Rn */
	r2 = 0x5u;  /* 0C07C586 mov #imm,Rn */
	IF(0x0C07C588u); r5 = MACL;  /* 0C07C588 sts macl,Rn */
	r5 += r13;  /* 0C07C58A add Rm,Rn */
	r5 += 0x4Fu;  /* 0C07C58C add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r5); UPD(0x0C07C590u, 5);  /* 0C07C58E mov.b @Rm,Rn */
	r8 = r9;  /* 0C07C590 mov Rm,Rn */
	r4 = R32(r6); UPD(0x0C07C594u, 2);  /* 0C07C592 mov.l @Rm,Rn */
	r5 = r0 & 0xFF;  /* 0C07C594 extu.b Rm,Rn */
	r4 += r10;  /* 0C07C596 add Rm,Rn */
	IF(0x0C07C598u); r5 <<= 16;  /* 0C07C598 shll16 Rn */
	IF(0x0C07C59Au); ARG0(0x442Du); { s32 s_ = (s32)r2; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = 0; else r4 >>= ((~s_ & 31) + 1); }  /* 0C07C59A shld Rm,Rn */
	IF(0x0C07C59Cu); { u32 t_ = r12; PR = 0x0C07C5A0u; IF(0x0C07C59Eu); r5 >>= 2; /* slot shlr2 Rn */ UPD(t_, 6); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C07C5A0u); }  /* 0C07C59C jsr @Rn */
L_0C07C5A0: BLKS(0x0C07C5A0u);
	r3 = 0xFFFF0000u; UPD(0x0C07C5A2u, 1);  /* 0C07C5A0 mov.l @(disp,pc),Rn */
	r6 = r10;  /* 0C07C5A2 mov Rm,Rn */
	r3 &= r0;  /* 0C07C5A4 and Rm,Rn */
	r6 += 0x1u;  /* 0C07C5A6 add #imm,Rn */
	r10 = (u32)(s32)(s16)r6;  /* 0C07C5A8 exts.w Rm,Rn */
	r2 = 0x37u;  /* 0C07C5AA mov #imm,Rn */
	W32(r8, r3); UPD(0x0C07C5AEu, 6);  /* 0C07C5AC mov.l Rm,@Rn */
	T = (s32)r10 > (s32)r2;  /* 0C07C5AE cmp/gt Rm,Rn */
	{ u32 c_ = !T; r9 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C07C580u, 4); goto L_0C07C580; } goto L_0C07C5B4; }  /* 0C07C5B0 bf/s */
L_0C07C5B4: BLKS(0x0C07C5B4u);
	{ IF(0x0C07C5B6u); ; /* slot nop */ UPD(0x0C07C4C8u, 4); goto L_0C07C4C8; }  /* 0C07C5B4 bra */
}

void blk_f_0C07C5F0(sh3_t *c)
{
	LOCALS;
L_0C07C5F0: BLKS(0x0C07C5F0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07C5F2u, 1);  /* 0C07C5F0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07C5F4u, 1);  /* 0C07C5F2 mov.l Rm,@-Rn */
	r8 = 0x60u;  /* 0C07C5F4 mov #imm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07C5F8u, 2);  /* 0C07C5F6 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07C5FAu, 1);  /* 0C07C5F8 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07C5FCu, 1);  /* 0C07C5FA mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C07C5FC exts.w Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C07C600u, 2);  /* 0C07C5FE mov.l Rm,@-Rn */
	IF(0x0C07C600u); MACL = r11 * r8;  /* 0C07C600 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07C604u, 3);  /* 0C07C602 mov.l Rm,@-Rn */
	r7 = 0xC3BC7CCu; UPD(0x0C07C606u, 1);  /* 0C07C604 mov.l @(disp,pc),Rn */
	IF(0x0C07C606u); r8 = MACL;  /* 0C07C606 sts macl,Rn */
	IF(0x0C07C608u); r15 -= 4; W32(r15, PR); UPD(0x0C07C60Au, 2);  /* 0C07C608 sts.l pr,@-Rn */
	r8 += r7;  /* 0C07C60A add Rm,Rn */
	r8 += 0x4Cu;  /* 0C07C60C add #imm,Rn */
	r6 = (u32)(s32)(s16)R16(r8); UPD(0x0C07C610u, 3);  /* 0C07C60E mov.w @Rm,Rn */
	r5 = 0x2A0u; UPD(0x0C07C612u, 1);  /* 0C07C610 mov.w @(disp,pc),Rn */
	r8 += 0xFFFFFFB4u;  /* 0C07C612 add #imm,Rn */
	IF(0x0C07C614u); MACL = r6 * r5;  /* 0C07C614 mul.l Rm,Rn */
	r2 = 0xC29D1D8u; UPD(0x0C07C618u, 4);  /* 0C07C616 mov.l @(disp,pc),Rn */
	IF(0x0C07C618u); r4 = MACL;  /* 0C07C618 sts macl,Rn */
	r4 += r2;  /* 0C07C61A add Rm,Rn */
	r0 = R32(r4 + 0x10u); UPD(0x0C07C61Eu, 3);  /* 0C07C61C mov.l @(disp,Rm),Rn */
	r3 = R32(r8 + 0x30u); UPD(0x0C07C620u, 1);  /* 0C07C61E mov.l @(disp,Rm),Rn */
	r0 += r3;  /* 0C07C620 add Rm,Rn */
	W32(r8 + 0x28u, r0); UPD(0x0C07C624u, 2);  /* 0C07C622 mov.l Rm,@(disp,Rn) */
	r1 = R32(r8 + 0x34u); UPD(0x0C07C626u, 1);  /* 0C07C624 mov.l @(disp,Rm),Rn */
	r0 = R32(r4 + 0x14u); UPD(0x0C07C628u, 1);  /* 0C07C626 mov.l @(disp,Rm),Rn */
	r0 += r1;  /* 0C07C628 add Rm,Rn */
	W32(r8 + 0x2Cu, r0); UPD(0x0C07C62Cu, 2);  /* 0C07C62A mov.l Rm,@(disp,Rn) */
	r0 = R32(r8 + 0xCu); UPD(0x0C07C62Eu, 1);  /* 0C07C62C mov.l @(disp,Rm),Rn */
	T = r0 == 0xFu;  /* 0C07C62E cmp/eq #imm,r0 */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07C63Eu, 4); goto L_0C07C63E; } goto L_0C07C634; }  /* 0C07C630 bt/s */
L_0C07C634: BLKS(0x0C07C634u);
	r9 = 0xC07BFE0u; UPD(0x0C07C636u, 2);  /* 0C07C634 mov.l @(disp,pc),Rn */
	r0 += 0x1u;  /* 0C07C636 add #imm,Rn */
	W32(r8 + 0xCu, r0); UPD(0x0C07C63Au, 2);  /* 0C07C638 mov.l Rm,@(disp,Rn) */
	IF(0x0C07C63Au); { u32 t_ = r9; PR = 0x0C07C63Eu; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07BFE0, 0x0C07BFE0u, 0x0C07C63Eu); }  /* 0C07C63A jsr @Rn */
L_0C07C63E: BLKS(0x0C07C63Eu);
	r12 = R32(r8 + 0x38u); UPD(0x0C07C640u, 1);  /* 0C07C63E mov.l @(disp,Rm),Rn */
	r10 = 0x2000000u; UPD(0x0C07C642u, 1);  /* 0C07C640 mov.l @(disp,pc),Rn */
	T = (r12 & r10) == 0;  /* 0C07C642 tst Rm,Rn */
	{ u32 c_ = !T; r9 = 0x60u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07C6C0u, 4); goto L_0C07C6C0; } goto L_0C07C648; }  /* 0C07C644 bf/s */
L_0C07C648: BLKS(0x0C07C648u);
	r1 = r8;  /* 0C07C648 mov Rm,Rn */
	r1 += 0x4Fu;  /* 0C07C64A add #imm,Rn */
	r13 = (u32)(s32)(s8)R8(r1); UPD(0x0C07C64Eu, 4);  /* 0C07C64C mov.b @Rm,Rn */
	r13 += 0xFFFFFFFFu;  /* 0C07C64E add #imm,Rn */
	r11 = r13 & 0xFF;  /* 0C07C650 extu.b Rm,Rn */
	T = (r11 & r11) == 0;  /* 0C07C652 tst Rm,Rn */
	{ u32 c_ = T; W8(r1, r13); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C07C670u, 6); goto L_0C07C670; } UPD(0x0C07C658u, 1); goto L_0C07C658; }  /* 0C07C654 bt/s */
L_0C07C658: BLKS(0x0C07C658u);
	r15 = r14;  /* 0C07C658 mov Rm,Rn */
	IF(0x0C07C65Au); PR = R32(r15); r15 += 4; UPD(0x0C07C65Cu, 2);  /* 0C07C65A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07C65Eu, 1);  /* 0C07C65C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C07C660u, 1);  /* 0C07C65E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07C662u, 1);  /* 0C07C660 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07C664u, 1);  /* 0C07C662 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07C666u, 1);  /* 0C07C664 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07C668u, 1);  /* 0C07C666 mov.l @Rm+,Rn */
	IF(0x0C07C668u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07C668 rts */
L_0C07C670: BLKS(0x0C07C670u);
	r4 = 0x204FFFFu; UPD(0x0C07C672u, 1);  /* 0C07C670 mov.l @(disp,pc),Rn */
	r9 = 0xC071950u; UPD(0x0C07C674u, 1);  /* 0C07C672 mov.l @(disp,pc),Rn */
	W32(r8 + 0x38u, r4); UPD(0x0C07C676u, 1);  /* 0C07C674 mov.l Rm,@(disp,Rn) */
	IF(0x0C07C676u); { u32 t_ = r9; PR = 0x0C07C67Au; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C071950, 0x0C071950u, 0x0C07C67Au); }  /* 0C07C676 jsr @Rn */
L_0C07C67A: BLKS(0x0C07C67Au);
	T = (r0 & r0) == 0;  /* 0C07C67A tst Rm,Rn */
	if (T) { UPD(0x0C07C658u, 4); goto L_0C07C658; }  /* 0C07C67C bt */
L_0C07C67E: BLKS(0x0C07C67Eu);
	r8 += 0x4Au;  /* 0C07C67E add #imm,Rn */
	r12 = 0xC28EDFCu; UPD(0x0C07C682u, 2);  /* 0C07C680 mov.l @(disp,pc),Rn */
	r10 = (u32)(s32)(s16)R16(r12); UPD(0x0C07C684u, 1);  /* 0C07C682 mov.w @Rm,Rn */
	r7 = 0x1u;  /* 0C07C684 mov #imm,Rn */
	W16(r8, r10); UPD(0x0C07C688u, 2);  /* 0C07C686 mov.w Rm,@Rn */
	r0 = (u32)(s32)(s16)r10;  /* 0C07C688 exts.w Rm,Rn */
	r6 = 0xC3C86B4u; UPD(0x0C07C68Cu, 2);  /* 0C07C68A mov.l @(disp,pc),Rn */
	r5 = 0xAu;  /* 0C07C68C mov #imm,Rn */
	IF(0x0C07C68Eu); W8(r0 + r6, r7); UPD(0x0C07C690u, 2);  /* 0C07C68E mov.b Rm,@(r0,Rn) */
	r8 += 0xFFFFFFB6u;  /* 0C07C690 add #imm,Rn */
	r2 = 0xC23E0A8u; UPD(0x0C07C694u, 2);  /* 0C07C692 mov.l @(disp,pc),Rn */
	IF(0x0C07C694u); ARG0(0x405Du); { s32 s_ = (s32)r5; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C07C694 shld Rm,Rn */
	r0 += r2;  /* 0C07C696 add Rm,Rn */
	W32(r8 + 0x24u, r0); UPD(0x0C07C69Au, 3);  /* 0C07C698 mov.l Rm,@(disp,Rn) */
	r9 = r0;  /* 0C07C69A mov Rm,Rn */
	r0 = R32(r8 + 0x3Cu); UPD(0x0C07C69Eu, 2);  /* 0C07C69C mov.l @(disp,Rm),Rn */
	r10 = 0x0u;  /* 0C07C69E mov #imm,Rn */
	r3 = 0x3000000u; UPD(0x0C07C6A2u, 2);  /* 0C07C6A0 mov.l @(disp,pc),Rn */
	r2 = 0x27u;  /* 0C07C6A2 mov #imm,Rn */
	r0 |= r3;  /* 0C07C6A4 or Rm,Rn */
	W32(r8 + 0x3Cu, r0); UPD(0x0C07C6A8u, 3);  /* 0C07C6A6 mov.l Rm,@(disp,Rn) */
	r3 = 0x0u;  /* 0C07C6A8 mov #imm,Rn */
	IF(0x0C07C6AAu); ;  /* 0C07C6AA nop */
	UPD(0x0C07C6ACu, 2);
L_0C07C6AC: BLKS(0x0C07C6ACu);
	r8 = r10;  /* 0C07C6AC mov Rm,Rn */
	W32(r9, r3); UPD(0x0C07C6B0u, 2);  /* 0C07C6AE mov.l Rm,@Rn */
	r8 += 0x1u;  /* 0C07C6B0 add #imm,Rn */
	r10 = (u32)(s32)(s16)r8;  /* 0C07C6B2 exts.w Rm,Rn */
	T = (s32)r10 > (s32)r2;  /* 0C07C6B4 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r9 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C07C6ACu, 6); goto L_0C07C6AC; } goto L_0C07C6BA; }  /* 0C07C6B6 bf/s */
L_0C07C6BA: BLKS(0x0C07C6BAu);
	{ IF(0x0C07C6BCu); ; /* slot nop */ UPD(0x0C07C658u, 4); goto L_0C07C658; }  /* 0C07C6BA bra */
L_0C07C6C0: BLKS(0x0C07C6C0u);
	IF(0x0C07C6C0u); MACL = r11 * r9;  /* 0C07C6C0 mul.l Rm,Rn */
	r6 = 0xC3BC7CCu; UPD(0x0C07C6C4u, 3);  /* 0C07C6C2 mov.l @(disp,pc),Rn */
	IF(0x0C07C6C4u); r7 = MACL;  /* 0C07C6C4 sts macl,Rn */
	r7 += r6;  /* 0C07C6C6 add Rm,Rn */
	r3 = R32(r7 + 0x38u); UPD(0x0C07C6CAu, 3);  /* 0C07C6C8 mov.l @(disp,Rm),Rn */
	r13 = 0x403u; UPD(0x0C07C6CCu, 1);  /* 0C07C6CA mov.w @(disp,pc),Rn */
	r1 = r3 & 0xFFFF;  /* 0C07C6CC extu.w Rm,Rn */
	T = r1 > r13;  /* 0C07C6CE cmp/hi Rm,Rn */
	if (T) { UPD(0x0C07C6F0u, 5); goto L_0C07C6F0; }  /* 0C07C6D0 bt */
L_0C07C6D2: BLKS(0x0C07C6D2u);
	r4 = R32(r7 + 0x3Cu); UPD(0x0C07C6D4u, 1);  /* 0C07C6D2 mov.l @(disp,Rm),Rn */
	r11 = 0xFF000000u; UPD(0x0C07C6D6u, 1);  /* 0C07C6D4 mov.l @(disp,pc),Rn */
	T = (r4 & r11) == 0;  /* 0C07C6D6 tst Rm,Rn */
	if (T) { UPD(0x0C07C6E8u, 4); goto L_0C07C6E8; }  /* 0C07C6D8 bt */
L_0C07C6DA: BLKS(0x0C07C6DAu);
	r7 += 0x4Au;  /* 0C07C6DA add #imm,Rn */
	r2 = (u32)(s32)(s16)R16(r7); UPD(0x0C07C6DEu, 2);  /* 0C07C6DC mov.w @Rm,Rn */
	r5 = 0x0u;  /* 0C07C6DE mov #imm,Rn */
	r3 = 0xC3C86B4u; UPD(0x0C07C6E2u, 2);  /* 0C07C6E0 mov.l @(disp,pc),Rn */
	r0 = r2 & 0xFFFF;  /* 0C07C6E2 extu.w Rm,Rn */
	IF(0x0C07C6E4u); W8(r0 + r3, r5); UPD(0x0C07C6E6u, 2);  /* 0C07C6E4 mov.b Rm,@(r0,Rn) */
	r7 += 0xFFFFFFB6u;  /* 0C07C6E6 add #imm,Rn */
	UPD(0x0C07C6E8u, 1);
L_0C07C6E8: BLKS(0x0C07C6E8u);
	r0 = 0x0u;  /* 0C07C6E8 mov #imm,Rn */
	{ W32(r7, r0); /* slot mov.l Rm,@Rn */ UPD(0x0C07C658u, 4); goto L_0C07C658; }  /* 0C07C6EA bra */
L_0C07C6F0: BLKS(0x0C07C6F0u);
	r8 = 0xFFFFFBFCu; UPD(0x0C07C6F2u, 1);  /* 0C07C6F0 mov.w @(disp,pc),Rn */
	r12 = R32(r7 + 0x3Cu); UPD(0x0C07C6F4u, 1);  /* 0C07C6F2 mov.l @(disp,Rm),Rn */
	r3 += r8;  /* 0C07C6F4 add Rm,Rn */
	r10 = 0xFF000000u; UPD(0x0C07C6F8u, 2);  /* 0C07C6F6 mov.l @(disp,pc),Rn */
	T = (r12 & r10) == 0;  /* 0C07C6F8 tst Rm,Rn */
	{ u32 c_ = T; W32(r7 + 0x38u, r3); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C07C658u, 4); goto L_0C07C658; } UPD(0x0C07C6FEu, 1); goto L_0C07C6FE; }  /* 0C07C6FA bt/s */
L_0C07C6FE: BLKS(0x0C07C6FEu);
	r13 = r7;  /* 0C07C6FE mov Rm,Rn */
	r9 = R32(r7 + 0x24u); UPD(0x0C07C702u, 2);  /* 0C07C700 mov.l @(disp,Rm),Rn */
	r13 += 0x4Fu;  /* 0C07C702 add #imm,Rn */
	r7 = (u32)(s32)(s8)R8(r13); UPD(0x0C07C706u, 2);  /* 0C07C704 mov.b @Rm,Rn */
	r10 = 0x0u;  /* 0C07C706 mov #imm,Rn */
	r7 += 0x1u;  /* 0C07C708 add #imm,Rn */
	W8(r13, r7); UPD(0x0C07C70Cu, 3);  /* 0C07C70A mov.b Rm,@Rn */
	r12 = 0xC069AF0u; UPD(0x0C07C70Eu, 1);  /* 0C07C70C mov.l @(disp,pc),Rn */
	r13 = r6;  /* 0C07C70E mov Rm,Rn */
	UPD(0x0C07C710u, 1);
L_0C07C710: BLKS(0x0C07C710u);
	r0 = 0x60u;  /* 0C07C710 mov #imm,Rn */
	IF(0x0C07C712u); MACL = r11 * r0;  /* 0C07C712 mul.l Rm,Rn */
	r6 = 0xC2380B0u; UPD(0x0C07C716u, 4);  /* 0C07C714 mov.l @(disp,pc),Rn */
	r7 = 0x5u;  /* 0C07C716 mov #imm,Rn */
	IF(0x0C07C718u); r5 = MACL;  /* 0C07C718 sts macl,Rn */
	r5 += r13;  /* 0C07C71A add Rm,Rn */
	r5 += 0x4Fu;  /* 0C07C71C add #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r5); UPD(0x0C07C720u, 5);  /* 0C07C71E mov.b @Rm,Rn */
	r8 = r9;  /* 0C07C720 mov Rm,Rn */
	r4 = R32(r6); UPD(0x0C07C724u, 2);  /* 0C07C722 mov.l @Rm,Rn */
	r5 = r2 & 0xFF;  /* 0C07C724 extu.b Rm,Rn */
	r4 += r10;  /* 0C07C726 add Rm,Rn */
	IF(0x0C07C728u); r5 <<= 16;  /* 0C07C728 shll16 Rn */
	IF(0x0C07C72Au); ARG0(0x447Du); { s32 s_ = (s32)r7; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = 0; else r4 >>= ((~s_ & 31) + 1); }  /* 0C07C72A shld Rm,Rn */
	IF(0x0C07C72Cu); { u32 t_ = r12; PR = 0x0C07C730u; IF(0x0C07C72Eu); r5 >>= 2; /* slot shlr2 Rn */ UPD(t_, 6); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C07C730u); }  /* 0C07C72C jsr @Rn */
L_0C07C730: BLKS(0x0C07C730u);
	r3 = 0xFFFF0000u; UPD(0x0C07C732u, 1);  /* 0C07C730 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C07C732 mov Rm,Rn */
	r3 &= r0;  /* 0C07C734 and Rm,Rn */
	r4 += 0x1u;  /* 0C07C736 add #imm,Rn */
	r10 = (u32)(s32)(s16)r4;  /* 0C07C738 exts.w Rm,Rn */
	r6 = 0x27u;  /* 0C07C73A mov #imm,Rn */
	W32(r8, r3); UPD(0x0C07C73Eu, 6);  /* 0C07C73C mov.l Rm,@Rn */
	T = (s32)r10 > (s32)r6;  /* 0C07C73E cmp/gt Rm,Rn */
	{ u32 c_ = !T; r9 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C07C710u, 4); goto L_0C07C710; } goto L_0C07C744; }  /* 0C07C740 bf/s */
L_0C07C744: BLKS(0x0C07C744u);
	{ IF(0x0C07C746u); ; /* slot nop */ UPD(0x0C07C658u, 4); goto L_0C07C658; }  /* 0C07C744 bra */
}

void blk_f_0C07C790(sh3_t *c)
{
	LOCALS;
L_0C07C790: BLKS(0x0C07C790u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07C792u, 1);  /* 0C07C790 mov.l Rm,@-Rn */
	r5 = 0x60u;  /* 0C07C792 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07C796u, 2);  /* 0C07C794 mov.l Rm,@-Rn */
	r1 = 0x1u;  /* 0C07C796 mov #imm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07C79Au, 2);  /* 0C07C798 mov.l Rm,@-Rn */
	r3 = 0xFFFFFFFFu;  /* 0C07C79A mov #imm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07C79Eu, 2);  /* 0C07C79C mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C07C79E exts.w Rm,Rn */
	IF(0x0C07C7A0u); MACL = r11 * r5;  /* 0C07C7A0 mul.l Rm,Rn */
	r4 = 0xC3BC7CCu; UPD(0x0C07C7A4u, 4);  /* 0C07C7A2 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07C7A6u, 1);  /* 0C07C7A4 mov.l Rm,@-Rn */
	IF(0x0C07C7A6u); r8 = MACL;  /* 0C07C7A6 sts macl,Rn */
	r8 += r4;  /* 0C07C7A8 add Rm,Rn */
	IF(0x0C07C7AAu); r15 -= 4; W32(r15, PR); UPD(0x0C07C7ACu, 3);  /* 0C07C7AA sts.l pr,@-Rn */
	r9 = r8;  /* 0C07C7AC mov Rm,Rn */
	r9 += 0x4Fu;  /* 0C07C7AE add #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r9); UPD(0x0C07C7B2u, 3);  /* 0C07C7B0 mov.b @Rm,Rn */
	r4 = 0x1u;  /* 0C07C7B2 mov #imm,Rn */
	r4 ^= r2;  /* 0C07C7B4 xor Rm,Rn */
	r2 = R32(r8 + 0xCu); UPD(0x0C07C7B8u, 3);  /* 0C07C7B6 mov.l @(disp,Rm),Rn */
	r4 &= r1;  /* 0C07C7B8 and Rm,Rn */
	r0 = r2;  /* 0C07C7BA mov Rm,Rn */
	T = r0 == 0x8u;  /* 0C07C7BC cmp/eq #imm,r0 */
	{ u32 t_ = 0u - r3, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r0 = r_; }  /* 0C07C7BE negc Rm,Rn */
	r4 &= r0;  /* 0C07C7C0 and Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C07C7C2 tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07C7CCu, 9); goto L_0C07C7CC; } goto L_0C07C7C8; }  /* 0C07C7C4 bt/s */
L_0C07C7C8: BLKS(0x0C07C7C8u);
	{ r2 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C07C8D0u, 4); goto L_0C07C8D0; }  /* 0C07C7C8 bra */
L_0C07C7CC: BLKS(0x0C07C7CCu);
	r7 = R32(r8 + 0x28u); UPD(0x0C07C7CEu, 1);  /* 0C07C7CC mov.l @(disp,Rm),Rn */
L_0C07C7CE: BLKS(0x0C07C7CEu);
	r10 = 0x2000u; UPD(0x0C07C7D0u, 1);  /* 0C07C7CE mov.w @(disp,pc),Rn */
	r7 += r10;  /* 0C07C7D0 add Rm,Rn */
	r3 = R32(r8 + 0x38u); UPD(0x0C07C7D4u, 2);  /* 0C07C7D2 mov.l @(disp,Rm),Rn */
	r10 = 0x2000000u; UPD(0x0C07C7D6u, 1);  /* 0C07C7D4 mov.l @(disp,pc),Rn */
	T = (r3 & r10) == 0;  /* 0C07C7D6 tst Rm,Rn */
	{ u32 c_ = !T; W32(r8 + 0x28u, r7); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C07C850u, 4); goto L_0C07C850; } UPD(0x0C07C7DCu, 1); goto L_0C07C7DC; }  /* 0C07C7D8 bf/s */
L_0C07C7DC: BLKS(0x0C07C7DCu);
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C07C7DEu, 1);  /* 0C07C7DC mov.b @Rm,Rn */
	r0 += 0xFFFFFFFFu;  /* 0C07C7DE add #imm,Rn */
	W8(r9, r0); UPD(0x0C07C7E2u, 2);  /* 0C07C7E0 mov.b Rm,@Rn */
	r9 = r0 & 0xFF;  /* 0C07C7E2 extu.b Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C07C7E4 tst Rm,Rn */
	if (T) { UPD(0x0C07C800u, 5); goto L_0C07C800; }  /* 0C07C7E6 bt */
L_0C07C7E8: BLKS(0x0C07C7E8u);
	r15 = r14;  /* 0C07C7E8 mov Rm,Rn */
	IF(0x0C07C7EAu); PR = R32(r15); r15 += 4; UPD(0x0C07C7ECu, 2);  /* 0C07C7EA lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07C7EEu, 1);  /* 0C07C7EC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07C7F0u, 1);  /* 0C07C7EE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07C7F2u, 1);  /* 0C07C7F0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07C7F4u, 1);  /* 0C07C7F2 mov.l @Rm+,Rn */
	IF(0x0C07C7F4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07C7F4 rts */
L_0C07C800: BLKS(0x0C07C800u);
	r9 = 0xC071950u; UPD(0x0C07C802u, 1);  /* 0C07C800 mov.l @(disp,pc),Rn */
	r3 |= r10;  /* 0C07C802 or Rm,Rn */
	W32(r8 + 0x38u, r3); UPD(0x0C07C806u, 2);  /* 0C07C804 mov.l Rm,@(disp,Rn) */
	IF(0x0C07C806u); { u32 t_ = r9; PR = 0x0C07C80Au; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C071950, 0x0C071950u, 0x0C07C80Au); }  /* 0C07C806 jsr @Rn */
L_0C07C80A: BLKS(0x0C07C80Au);
	T = (r0 & r0) == 0;  /* 0C07C80A tst Rm,Rn */
	if (T) { UPD(0x0C07C7E8u, 4); goto L_0C07C7E8; }  /* 0C07C80C bt */
L_0C07C80E: BLKS(0x0C07C80Eu);
	r8 += 0x4Au;  /* 0C07C80E add #imm,Rn */
	r6 = 0xC28EDFCu; UPD(0x0C07C812u, 2);  /* 0C07C810 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s16)R16(r6); UPD(0x0C07C814u, 1);  /* 0C07C812 mov.w @Rm,Rn */
	r1 = 0x1u;  /* 0C07C814 mov #imm,Rn */
	W16(r8, r0); UPD(0x0C07C818u, 2);  /* 0C07C816 mov.w Rm,@Rn */
	r4 = 0xAu;  /* 0C07C818 mov #imm,Rn */
	r5 = 0xC3C86B4u; UPD(0x0C07C81Cu, 2);  /* 0C07C81A mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFB6u;  /* 0C07C81C add #imm,Rn */
	IF(0x0C07C81Eu); W8(r0 + r5, r1); UPD(0x0C07C820u, 2);  /* 0C07C81E mov.b Rm,@(r0,Rn) */
	r3 = R32(r8 + 0x3Cu); UPD(0x0C07C822u, 1);  /* 0C07C820 mov.l @(disp,Rm),Rn */
	IF(0x0C07C822u); ARG0(0x404Du); { s32 s_ = (s32)r4; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C07C822 shld Rm,Rn */
	r2 = 0xC23E0A8u; UPD(0x0C07C826u, 2);  /* 0C07C824 mov.l @(disp,pc),Rn */
	r3 |= r10;  /* 0C07C826 or Rm,Rn */
	r0 += r2;  /* 0C07C828 add Rm,Rn */
	W32(r8 + 0x3Cu, r3); UPD(0x0C07C82Cu, 3);  /* 0C07C82A mov.l Rm,@(disp,Rn) */
	r2 = 0x0u;  /* 0C07C82C mov #imm,Rn */
	W32(r8 + 0x24u, r0); UPD(0x0C07C830u, 2);  /* 0C07C82E mov.l Rm,@(disp,Rn) */
	r3 = 0x3Fu;  /* 0C07C830 mov #imm,Rn */
	IF(0x0C07C832u); ;  /* 0C07C832 nop */
	UPD(0x0C07C834u, 2);
L_0C07C834: BLKS(0x0C07C834u);
	W32(r0, r2); UPD(0x0C07C836u, 1);  /* 0C07C834 mov.l Rm,@Rn */
	r8 = r2;  /* 0C07C836 mov Rm,Rn */
	r8 += 0x1u;  /* 0C07C838 add #imm,Rn */
	r2 = (u32)(s32)(s16)r8;  /* 0C07C83A exts.w Rm,Rn */
	T = (s32)r2 > (s32)r3;  /* 0C07C83C cmp/gt Rm,Rn */
	{ u32 c_ = !T; r0 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C07C834u, 7); goto L_0C07C834; } goto L_0C07C842; }  /* 0C07C83E bf/s */
L_0C07C842: BLKS(0x0C07C842u);
	r10 = 0x60u;  /* 0C07C842 mov #imm,Rn */
	IF(0x0C07C844u); MACL = r11 * r10;  /* 0C07C844 mul.l Rm,Rn */
	r0 = 0xC3BC81Bu; UPD(0x0C07C848u, 5);  /* 0C07C846 mov.l @(disp,pc),Rn */
	r7 = 0x40u;  /* 0C07C848 mov #imm,Rn */
	IF(0x0C07C84Au); r11 = MACL;  /* 0C07C84A sts macl,Rn */
	{ IF(0x0C07C84Eu); W8(r0 + r11, r7); /* slot mov.b Rm,@(r0,Rn) */ UPD(0x0C07C7E8u, 5); goto L_0C07C7E8; }  /* 0C07C84C bra */
L_0C07C850: BLKS(0x0C07C850u);
	r0 = 0x403u; UPD(0x0C07C852u, 1);  /* 0C07C850 mov.w @(disp,pc),Rn */
	r4 = r3 & 0xFFFF;  /* 0C07C852 extu.w Rm,Rn */
	T = r4 > r0;  /* 0C07C854 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C07C870u, 5); goto L_0C07C870; }  /* 0C07C856 bt */
L_0C07C858: BLKS(0x0C07C858u);
	r3 = 0x0u;  /* 0C07C858 mov #imm,Rn */
	r5 = R32(r8 + 0x3Cu); UPD(0x0C07C85Cu, 2);  /* 0C07C85A mov.l @(disp,Rm),Rn */
	r9 = 0xFF000000u; UPD(0x0C07C85Eu, 1);  /* 0C07C85C mov.l @(disp,pc),Rn */
	T = (r5 & r9) == 0;  /* 0C07C85E tst Rm,Rn */
	{ u32 c_ = T; W32(r8, r3); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C07C7E8u, 4); goto L_0C07C7E8; } UPD(0x0C07C864u, 1); goto L_0C07C864; }  /* 0C07C860 bt/s */
L_0C07C864: BLKS(0x0C07C864u);
	r8 += 0x4Au;  /* 0C07C864 add #imm,Rn */
	r1 = (u32)(s32)(s16)R16(r8); UPD(0x0C07C868u, 2);  /* 0C07C866 mov.w @Rm,Rn */
	r2 = 0xC3C86B4u; UPD(0x0C07C86Au, 1);  /* 0C07C868 mov.l @(disp,pc),Rn */
	r0 = r1 & 0xFFFF;  /* 0C07C86A extu.w Rm,Rn */
	{ IF(0x0C07C86Eu); W8(r0 + r2, r3); /* slot mov.b Rm,@(r0,Rn) */ UPD(0x0C07C7E8u, 4); goto L_0C07C7E8; }  /* 0C07C86C bra */
L_0C07C870: BLKS(0x0C07C870u);
	r7 = 0xFFFFFBFCu; UPD(0x0C07C872u, 1);  /* 0C07C870 mov.w @(disp,pc),Rn */
	r3 += r7;  /* 0C07C872 add Rm,Rn */
	W32(r8 + 0x38u, r3); UPD(0x0C07C876u, 2);  /* 0C07C874 mov.l Rm,@(disp,Rn) */
	r6 = R32(r8 + 0x3Cu); UPD(0x0C07C878u, 1);  /* 0C07C876 mov.l @(disp,Rm),Rn */
	r3 = 0xFF000000u; UPD(0x0C07C87Au, 1);  /* 0C07C878 mov.l @(disp,pc),Rn */
	T = (r6 & r3) == 0;  /* 0C07C87A tst Rm,Rn */
	if (T) { UPD(0x0C07C7E8u, 4); goto L_0C07C7E8; }  /* 0C07C87C bt */
L_0C07C87E: BLKS(0x0C07C87Eu);
	r0 = R32(r8 + 0x24u); UPD(0x0C07C880u, 1);  /* 0C07C87E mov.l @(disp,Rm),Rn */
	r2 = 0x0u;  /* 0C07C880 mov #imm,Rn */
	r3 = r9;  /* 0C07C882 mov Rm,Rn */
	r7 = 0x3Fu;  /* 0C07C884 mov #imm,Rn */
	IF(0x0C07C886u); ;  /* 0C07C886 nop */
	UPD(0x0C07C888u, 4);
L_0C07C888: BLKS(0x0C07C888u);
	r8 = (u32)(s32)(s8)R8(r3); UPD(0x0C07C88Au, 1);  /* 0C07C888 mov.b @Rm,Rn */
	r1 = r8 & 0xFF;  /* 0C07C88A extu.b Rm,Rn */
	T = (s32)r2 > (s32)r1;  /* 0C07C88C cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C07C8C0u, 5); goto L_0C07C8C0; }  /* 0C07C88E bf */
L_0C07C890: BLKS(0x0C07C890u);
	W32(r0, r1); UPD(0x0C07C892u, 1);  /* 0C07C890 mov.l Rm,@Rn */
L_0C07C892: BLKS(0x0C07C892u);
	r10 = r2;  /* 0C07C892 mov Rm,Rn */
	r10 += 0x1u;  /* 0C07C894 add #imm,Rn */
	r2 = (u32)(s32)(s16)r10;  /* 0C07C896 exts.w Rm,Rn */
	T = (s32)r2 > (s32)r7;  /* 0C07C898 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r0 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C07C888u, 7); goto L_0C07C888; } goto L_0C07C89E; }  /* 0C07C89A bf/s */
L_0C07C89E: BLKS(0x0C07C89Eu);
	r0 = 0x60u;  /* 0C07C89E mov #imm,Rn */
	IF(0x0C07C8A0u); MACL = r11 * r0;  /* 0C07C8A0 mul.l Rm,Rn */
	r11 = 0xC3BC81Bu; UPD(0x0C07C8A4u, 5);  /* 0C07C8A2 mov.l @(disp,pc),Rn */
	IF(0x0C07C8A4u); r2 = MACL;  /* 0C07C8A4 sts macl,Rn */
	r2 += r11;  /* 0C07C8A6 add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C07C8AAu, 3);  /* 0C07C8A8 mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C07C8AA tst Rm,Rn */
	if (T) { UPD(0x0C07C7E8u, 4); goto L_0C07C7E8; }  /* 0C07C8AC bt */
L_0C07C8AE: BLKS(0x0C07C8AEu);
	r1 += 0xFFFFFFFFu;  /* 0C07C8AE add #imm,Rn */
	{ W8(r2, r1); /* slot mov.b Rm,@Rn */ UPD(0x0C07C7E8u, 4); goto L_0C07C7E8; }  /* 0C07C8B0 bra */
L_0C07C8C0: BLKS(0x0C07C8C0u);
	{ W32(r0, r2); /* slot mov.l Rm,@Rn */ UPD(0x0C07C892u, 3); goto L_0C07C892; }  /* 0C07C8C0 bra */
L_0C07C8D0: BLKS(0x0C07C8D0u);
	r6 = 0xC07BFE0u; UPD(0x0C07C8D2u, 1);  /* 0C07C8D0 mov.l @(disp,pc),Rn */
	W32(r8 + 0xCu, r2); UPD(0x0C07C8D4u, 1);  /* 0C07C8D2 mov.l Rm,@(disp,Rn) */
	IF(0x0C07C8D4u); { u32 t_ = r6; PR = 0x0C07C8D8u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07BFE0, 0x0C07BFE0u, 0x0C07C8D8u); }  /* 0C07C8D4 jsr @Rn */
L_0C07C8D8: BLKS(0x0C07C8D8u);
	{ r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C07C7CEu, 3); goto L_0C07C7CE; }  /* 0C07C8D8 bra */
}

/* FUN_0c07c910 */
void blk_f_0C07C910(sh3_t *c)
{
	LOCALS;
L_0C07C910: BLKS(0x0C07C910u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07C912u, 1);  /* 0C07C910 mov.l Rm,@-Rn */
	r0 = 0x60u;  /* 0C07C912 mov #imm,Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C07C914 exts.w Rm,Rn */
	IF(0x0C07C916u); MACL = r8 * r0;  /* 0C07C916 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07C91Au, 5);  /* 0C07C918 mov.l Rm,@-Rn */
	r5 = 0x0u;  /* 0C07C91A mov #imm,Rn */
	r2 = 0xC3BC7CCu; UPD(0x0C07C91Eu, 2);  /* 0C07C91C mov.l @(disp,pc),Rn */
	IF(0x0C07C91Eu); r3 = MACL;  /* 0C07C91E sts macl,Rn */
	IF(0x0C07C920u); r15 -= 4; W32(r15, PR); UPD(0x0C07C922u, 2);  /* 0C07C920 sts.l pr,@-Rn */
	r3 += r2;  /* 0C07C922 add Rm,Rn */
	r0 = R32(r3 + 0x4u); UPD(0x0C07C926u, 2);  /* 0C07C924 mov.l @(disp,Rm),Rn */
	T = r0 == 0x3u;  /* 0C07C926 cmp/eq #imm,r0 */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07C970u, 4); goto L_0C07C970; } UPD(0x0C07C92Cu, 1); goto L_0C07C92C; }  /* 0C07C928 bt/s */
L_0C07C92C: BLKS(0x0C07C92Cu);
	r4 = 0x60u;  /* 0C07C92C mov #imm,Rn */
	UPD(0x0C07C92Eu, 1);
L_0C07C92E: BLKS(0x0C07C92Eu);
	IF(0x0C07C92Eu); MACL = r8 * r4;  /* 0C07C92E mul.l Rm,Rn */
	r2 = 0xC3BC7CCu; UPD(0x0C07C932u, 3);  /* 0C07C930 mov.l @(disp,pc),Rn */
	IF(0x0C07C932u); r3 = MACL;  /* 0C07C932 sts macl,Rn */
	r3 += r2;  /* 0C07C934 add Rm,Rn */
	r7 = R32(r3 + 0x4u); UPD(0x0C07C938u, 3);  /* 0C07C936 mov.l @(disp,Rm),Rn */
	r8 = 0x7u;  /* 0C07C938 mov #imm,Rn */
	T = (s32)r7 > (s32)r8;  /* 0C07C93A cmp/gt Rm,Rn */
	if (T) { UPD(0x0C07C954u, 5); goto L_0C07C954; }  /* 0C07C93C bt */
L_0C07C93E: BLKS(0x0C07C93Eu);
	r2 = 0xC22E015u; UPD(0x0C07C940u, 1);  /* 0C07C93E mov.l @(disp,pc),Rn */
	r8 = (u32)(s32)(s8)R8(r2); UPD(0x0C07C942u, 1);  /* 0C07C940 mov.b @Rm,Rn */
	r5 = r8 & 0xFF;  /* 0C07C942 extu.b Rm,Rn */
	IF(0x0C07C944u); r5 <<= 2;  /* 0C07C944 shll2 Rn */
	r0 = 0xC3C847Cu; UPD(0x0C07C948u, 3);  /* 0C07C946 mov.l @(disp,pc),Rn */
	r5 += r5;  /* 0C07C948 add Rm,Rn */
	r5 += r0;  /* 0C07C94A add Rm,Rn */
	r5 += r7;  /* 0C07C94C add Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r5); UPD(0x0C07C950u, 4);  /* 0C07C94E mov.b @Rm,Rn */
	r6 += 0x1u;  /* 0C07C950 add #imm,Rn */
	W8(r5, r6); UPD(0x0C07C954u, 2);  /* 0C07C952 mov.b Rm,@Rn */
L_0C07C954: BLKS(0x0C07C954u);
	r7 = 0x0u;  /* 0C07C954 mov #imm,Rn */
	W32(r3, r7); UPD(0x0C07C958u, 2);  /* 0C07C956 mov.l Rm,@Rn */
	r15 = r14;  /* 0C07C958 mov Rm,Rn */
	IF(0x0C07C95Au); PR = R32(r15); r15 += 4; UPD(0x0C07C95Cu, 2);  /* 0C07C95A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07C95Eu, 1);  /* 0C07C95C mov.l @Rm+,Rn */
	IF(0x0C07C95Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07C95E rts */
L_0C07C970: BLKS(0x0C07C970u);
	r4 = 0x13Fu; UPD(0x0C07C972u, 1);  /* 0C07C970 mov.w @(disp,pc),Rn */
	r7 = 0x0u;  /* 0C07C972 mov #imm,Rn */
	r6 = 0xFFFFFFFFu;  /* 0C07C974 mov #imm,Rn */
	r3 = r2;  /* 0C07C976 mov Rm,Rn */
	UPD(0x0C07C978u, 3);
L_0C07C978: BLKS(0x0C07C978u);
	r0 = R32(r3); UPD(0x0C07C97Au, 1);  /* 0C07C978 mov.l @Rm,Rn */
	T = r8 == r7;  /* 0C07C97A cmp/eq Rm,Rn */
	{ u32 t_ = 0u - r6, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r2 = r_; }  /* 0C07C97C negc Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C07C97E tst Rm,Rn */
	{ u32 t_ = 0u - r6, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r0 = r_; }  /* 0C07C980 negc Rm,Rn */
	r2 &= r0;  /* 0C07C982 and Rm,Rn */
	r0 = R32(r3 + 0x4u); UPD(0x0C07C986u, 6);  /* 0C07C984 mov.l @(disp,Rm),Rn */
	T = r0 == 0x3u;  /* 0C07C986 cmp/eq #imm,r0 */
	IF(0x0C07C988u); r0 = T;  /* 0C07C988 movt Rn */
	T = (r2 & r0) == 0;  /* 0C07C98A tst Rm,Rn */
	{ u32 c_ = T; r0 = r7; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07C998u, 6); goto L_0C07C998; } goto L_0C07C990; }  /* 0C07C98C bt/s */
L_0C07C990: BLKS(0x0C07C990u);
	r2 = r5;  /* 0C07C990 mov Rm,Rn */
	r2 += 0x1u;  /* 0C07C992 add #imm,Rn */
	r5 = (u32)(s32)(s16)r2;  /* 0C07C994 exts.w Rm,Rn */
	r0 = r7;  /* 0C07C996 mov Rm,Rn */
	UPD(0x0C07C998u, 5);
L_0C07C998: BLKS(0x0C07C998u);
	r0 += 0x1u;  /* 0C07C998 add #imm,Rn */
	r7 = (u32)(s32)(s16)r0;  /* 0C07C99A exts.w Rm,Rn */
	T = (s32)r7 > (s32)r4;  /* 0C07C99C cmp/gt Rm,Rn */
	{ u32 c_ = !T; r3 += 0x60u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C07C978u, 6); goto L_0C07C978; } goto L_0C07C9A2; }  /* 0C07C99E bf/s */
L_0C07C9A2: BLKS(0x0C07C9A2u);
	T = (r5 & r5) == 0;  /* 0C07C9A2 tst Rm,Rn */
	{ u32 c_ = !T; r4 = 0x60u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07C92Eu, 5); goto L_0C07C92E; } goto L_0C07C9A8; }  /* 0C07C9A4 bf/s */
L_0C07C9A8: BLKS(0x0C07C9A8u);
	r3 = 0xC3C53E0u; UPD(0x0C07C9AAu, 2);  /* 0C07C9A8 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r3); UPD(0x0C07C9ACu, 1);  /* 0C07C9AA mov.b @Rm,Rn */
	T = r0 == 0x12u;  /* 0C07C9AC cmp/eq #imm,r0 */
	if (T) { UPD(0x0C07C9C0u, 4); goto L_0C07C9C0; }  /* 0C07C9AE bt */
L_0C07C9B0: BLKS(0x0C07C9B0u);
	r0 = 0xC3C53E0u; UPD(0x0C07C9B2u, 1);  /* 0C07C9B0 mov.l @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C07C9B2 mov #imm,Rn */
	{ W8(r0, r3); /* slot mov.b Rm,@Rn */ UPD(0x0C07C92Cu, 4); goto L_0C07C92C; }  /* 0C07C9B4 bra */
L_0C07C9C0: BLKS(0x0C07C9C0u);
	r3 = 0xC29D1D8u; UPD(0x0C07C9C2u, 1);  /* 0C07C9C0 mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C07C9C4u, 1);  /* 0C07C9C2 mov.l @Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C07C9C4 tst Rm,Rn */
	{ u32 c_ = T; r2 = 0xFFFFFFFFu; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07C9CCu, 4); goto L_0C07C9CC; } goto L_0C07C9CA; }  /* 0C07C9C6 bt/s */
L_0C07C9CA: BLKS(0x0C07C9CAu);
	r2 = 0x0u;  /* 0C07C9CA mov #imm,Rn */
	UPD(0x0C07C9CCu, 2);
L_0C07C9CC: BLKS(0x0C07C9CCu);
	r0 = 0x2A0u; UPD(0x0C07C9CEu, 1);  /* 0C07C9CC mov.w @(disp,pc),Rn */
	IF(0x0C07C9CEu); r5 = R32(r0 + r3); UPD(0x0C07C9D0u, 1);  /* 0C07C9CE mov.l @(r0,Rm),Rn */
	T = (r5 & r5) == 0;  /* 0C07C9D0 tst Rm,Rn */
	if (T) { UPD(0x0C07C9D6u, 4); goto L_0C07C9D6; }  /* 0C07C9D2 bt */
L_0C07C9D4: BLKS(0x0C07C9D4u);
	r2 += 0x2u;  /* 0C07C9D4 add #imm,Rn */
	UPD(0x0C07C9D6u, 1);
L_0C07C9D6: BLKS(0x0C07C9D6u);
	r0 = r2;  /* 0C07C9D6 mov Rm,Rn */
	T = r0 == 0xFFFFFFFFu;  /* 0C07C9D8 cmp/eq #imm,r0 */
	{ u32 c_ = T; T = r0 == 0x2u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C07C9F0u, 5); goto L_0C07C9F0; } goto L_0C07C9DE; }  /* 0C07C9DA bt/s */
L_0C07C9DE: BLKS(0x0C07C9DEu);
	if (T) { UPD(0x0C07C9F0u, 4); goto L_0C07C9F0; }  /* 0C07C9DE bt */
L_0C07C9E0: BLKS(0x0C07C9E0u);
	r7 = 0xC189BCCu; UPD(0x0C07C9E2u, 1);  /* 0C07C9E0 mov.l @(disp,pc),Rn */
	r0 = r7;  /* 0C07C9E2 mov Rm,Rn */
	IF(0x0C07C9E4u); r1 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C07C9E6u, 2);  /* 0C07C9E4 mov.b @(r0,Rm),Rn */
	r0 = 0xC0C2110u; UPD(0x0C07C9E8u, 1);  /* 0C07C9E6 mov.l @(disp,pc),Rn */
	IF(0x0C07C9E8u); { u32 t_ = r0; PR = 0x0C07C9ECu; r4 = r1 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2110, 0x0C0C2110u, 0x0C07C9ECu); }  /* 0C07C9E8 jsr @Rn */
L_0C07C9EC: BLKS(0x0C07C9ECu);
	{ IF(0x0C07C9EEu); ; /* slot nop */ UPD(0x0C07C9B0u, 3); goto L_0C07C9B0; }  /* 0C07C9EC bra */
L_0C07C9F0: BLKS(0x0C07C9F0u);
	r0 = 0xC0C2360u; UPD(0x0C07C9F2u, 1);  /* 0C07C9F0 mov.l @(disp,pc),Rn */
	IF(0x0C07C9F2u); { u32 t_ = r0; PR = 0x0C07C9F6u; IF(0x0C07C9F4u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C07C9F6u); }  /* 0C07C9F2 jsr @Rn */
L_0C07C9F6: BLKS(0x0C07C9F6u);
	r2 = r0;  /* 0C07C9F6 mov Rm,Rn */
	r6 = 0x1u;  /* 0C07C9F8 mov #imm,Rn */
	{ r2 &= r6; /* slot and Rm,Rn */ UPD(0x0C07C9E0u, 5); goto L_0C07C9E0; }  /* 0C07C9FA bra */
}

/* FUN_0c07ca30 */
void blk_f_0C07CA30(sh3_t *c)
{
	LOCALS;
L_0C07CA30: BLKS(0x0C07CA30u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07CA32u, 1);  /* 0C07CA30 mov.l Rm,@-Rn */
	r4 = (u32)(s32)(s8)r4;  /* 0C07CA32 exts.b Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07CA36u, 2);  /* 0C07CA34 mov.l Rm,@-Rn */
	T = (r4 & r4) == 0;  /* 0C07CA36 tst Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07CA3Au, 2);  /* 0C07CA38 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07CA3Cu, 1);  /* 0C07CA3A mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07CA3Eu, 1);  /* 0C07CA3C mov.l Rm,@-Rn */
	IF(0x0C07CA3Eu); r15 -= 4; W32(r15, PR); UPD(0x0C07CA40u, 1);  /* 0C07CA3E sts.l pr,@-Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07CAD4u, 3); goto L_0C07CAD4; } goto L_0C07CA44; }  /* 0C07CA40 bt/s */
L_0C07CA44: BLKS(0x0C07CA44u);
	r10 = r4;  /* 0C07CA44 mov Rm,Rn */
	r10 += r10;  /* 0C07CA46 add Rm,Rn */
	r3 = 0xC29CF40u; UPD(0x0C07CA4Au, 4);  /* 0C07CA48 mov.l @(disp,pc),Rn */
	r0 = r10;  /* 0C07CA4A mov Rm,Rn */
	IF(0x0C07CA4Cu); r2 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C07CA4Eu, 2);  /* 0C07CA4C mov.w @(r0,Rm),Rn */
	r9 = 0x0u;  /* 0C07CA4E mov #imm,Rn */
	r0 = r2 & 0xFFFF;  /* 0C07CA50 extu.w Rm,Rn */
	T = (s32)r9 >= (s32)r0;  /* 0C07CA52 cmp/ge Rm,Rn */
	if (T) { UPD(0x0C07CAD4u, 6); goto L_0C07CAD4; }  /* 0C07CA54 bt */
L_0C07CA56: BLKS(0x0C07CA56u);
	r8 = r4;  /* 0C07CA56 mov Rm,Rn */
	r0 = 0x9u;  /* 0C07CA58 mov #imm,Rn */
	r11 = 0xC074C30u; UPD(0x0C07CA5Cu, 3);  /* 0C07CA5A mov.l @(disp,pc),Rn */
	IF(0x0C07CA5Cu); ARG0(0x480Du); { s32 s_ = (s32)r0; if (s_ >= 0) r8 <<= (s_ & 31); else if ((s_ & 31) == 0) r8 = 0; else r8 >>= ((~s_ & 31) + 1); }  /* 0C07CA5C shld Rm,Rn */
	IF(0x0C07CA5Eu); ;  /* 0C07CA5E nop */
	UPD(0x0C07CA60u, 2);
L_0C07CA60: BLKS(0x0C07CA60u);
	r7 = 0xC2A7A9Cu; UPD(0x0C07CA62u, 1);  /* 0C07CA60 mov.l @(disp,pc),Rn */
	r0 = r8;  /* 0C07CA62 mov Rm,Rn */
	IF(0x0C07CA64u); r6 = (u32)(s32)(s16)R16(r0 + r7); UPD(0x0C07CA66u, 2);  /* 0C07CA64 mov.w @(r0,Rm),Rn */
	r5 = 0x60u;  /* 0C07CA66 mov #imm,Rn */
	MACL = (u32)(u16)r6 * (u32)(u16)r5;  /* 0C07CA68 mulu.w Rm,Rn */
	r4 = 0xC3BC7CCu; UPD(0x0C07CA6Cu, 4);  /* 0C07CA6A mov.l @(disp,pc),Rn */
	IF(0x0C07CA6Cu); r6 = MACL;  /* 0C07CA6C sts macl,Rn */
	r6 += r4;  /* 0C07CA6E add Rm,Rn */
	r0 = R32(r6); UPD(0x0C07CA72u, 3);  /* 0C07CA70 mov.l @Rm,Rn */
	r0 &= 0x10u;  /* 0C07CA72 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C07CA74 tst Rm,Rn */
	{ u32 c_ = !T; r5 = r6; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07CAC4u, 5); goto L_0C07CAC4; } goto L_0C07CA7A; }  /* 0C07CA76 bf/s */
L_0C07CA7A: BLKS(0x0C07CA7Au);
	r3 = r6;  /* 0C07CA7A mov Rm,Rn */
	r5 += 0x46u;  /* 0C07CA7C add #imm,Rn */
	r3 += 0x45u;  /* 0C07CA7E add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r3); UPD(0x0C07CA82u, 5);  /* 0C07CA80 mov.b @Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r5); UPD(0x0C07CA84u, 1);  /* 0C07CA82 mov.b @Rm,Rn */
	r7 = r0 & 0xFF;  /* 0C07CA84 extu.b Rm,Rn */
	r4 = r2 & 0xFF;  /* 0C07CA86 extu.b Rm,Rn */
	r4 -= r7;  /* 0C07CA88 sub Rm,Rn */
	r4 += 0x1u;  /* 0C07CA8A add #imm,Rn */
	r0 = 0x2u;  /* 0C07CA8C mov #imm,Rn */
	T = r4 > r0;  /* 0C07CA8E cmp/hi Rm,Rn */
	{ u32 c_ = T; r7 = r6; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07CB00u, 9); goto L_0C07CB00; } goto L_0C07CA94; }  /* 0C07CA90 bt/s */
L_0C07CA94: BLKS(0x0C07CA94u);
	r7 = r6;  /* 0C07CA94 mov Rm,Rn */
	r7 += 0x47u;  /* 0C07CA96 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r7); UPD(0x0C07CA9Au, 4);  /* 0C07CA98 mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C07CA9A tst Rm,Rn */
	{ u32 c_ = !T; r1 += 0xFFFFFFFFu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C07CAF0u, 4); goto L_0C07CAF0; } UPD(0x0C07CAA0u, 1); goto L_0C07CAA0; }  /* 0C07CA9C bf/s */
L_0C07CAA0: BLKS(0x0C07CAA0u);
	r3 = (u32)(s32)(s8)R8(r3); UPD(0x0C07CAA2u, 1);  /* 0C07CAA0 mov.b @Rm,Rn */
	r1 = R32(r6 + 0x18u); UPD(0x0C07CAA4u, 1);  /* 0C07CAA2 mov.l @(disp,Rm),Rn */
	W8(r5, r3); UPD(0x0C07CAA6u, 1);  /* 0C07CAA4 mov.b Rm,@Rn */
	r0 = 0xC2289E8u; UPD(0x0C07CAA8u, 1);  /* 0C07CAA6 mov.l @(disp,pc),Rn */
	W32(r0, r1); UPD(0x0C07CAAAu, 1);  /* 0C07CAA8 mov.l Rm,@Rn */
	r5 = 0xC3C86B0u; UPD(0x0C07CAACu, 1);  /* 0C07CAAA mov.l @(disp,pc),Rn */
	r0 = r3 & 0xFF;  /* 0C07CAAC extu.b Rm,Rn */
	r4 = R32(r6 + 0x20u); UPD(0x0C07CAB0u, 2);  /* 0C07CAAE mov.l @(disp,Rm),Rn */
	W32(r5, r4); UPD(0x0C07CAB2u, 1);  /* 0C07CAB0 mov.l Rm,@Rn */
	r4 = R32(r6 + 0x28u); UPD(0x0C07CAB4u, 1);  /* 0C07CAB2 mov.l @(disp,Rm),Rn */
	r5 = R32(r6 + 0x2Cu); UPD(0x0C07CAB6u, 1);  /* 0C07CAB4 mov.l @(disp,Rm),Rn */
	r6 += 0x44u;  /* 0C07CAB6 add #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r6); UPD(0x0C07CABAu, 2);  /* 0C07CAB8 mov.b @Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r7); UPD(0x0C07CABCu, 1);  /* 0C07CABA mov.b @Rm,Rn */
	r6 = r2 & 0xFF;  /* 0C07CABC extu.b Rm,Rn */
	r6 -= r0;  /* 0C07CABE sub Rm,Rn */
	IF(0x0C07CAC0u); { u32 t_ = r11; PR = 0x0C07CAC4u; r7 = r1 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C074C30, 0x0C074C30u, 0x0C07CAC4u); }  /* 0C07CAC0 jsr @Rn */
L_0C07CAC4: BLKS(0x0C07CAC4u);
	r7 = 0xC29CF40u; UPD(0x0C07CAC6u, 1);  /* 0C07CAC4 mov.l @(disp,pc),Rn */
	r0 = r10;  /* 0C07CAC6 mov Rm,Rn */
	IF(0x0C07CAC8u); r6 = (u32)(s32)(s16)R16(r0 + r7); UPD(0x0C07CACAu, 2);  /* 0C07CAC8 mov.w @(r0,Rm),Rn */
	r9 += 0x1u;  /* 0C07CACA add #imm,Rn */
	r3 = r6 & 0xFFFF;  /* 0C07CACC extu.w Rm,Rn */
	T = (s32)r9 >= (s32)r3;  /* 0C07CACE cmp/ge Rm,Rn */
	{ u32 c_ = !T; r8 += 0x2u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C07CA60u, 6); goto L_0C07CA60; } UPD(0x0C07CAD4u, 1); goto L_0C07CAD4; }  /* 0C07CAD0 bf/s */
L_0C07CAD4: BLKS(0x0C07CAD4u);
	r15 = r14;  /* 0C07CAD4 mov Rm,Rn */
	IF(0x0C07CAD6u); PR = R32(r15); r15 += 4; UPD(0x0C07CAD8u, 2);  /* 0C07CAD6 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07CADAu, 1);  /* 0C07CAD8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07CADCu, 1);  /* 0C07CADA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07CADEu, 1);  /* 0C07CADC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07CAE0u, 1);  /* 0C07CADE mov.l @Rm+,Rn */
	IF(0x0C07CAE0u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07CAE0 rts */
L_0C07CAF0: BLKS(0x0C07CAF0u);
	{ W8(r7, r1); /* slot mov.b Rm,@Rn */ UPD(0x0C07CAA0u, 3); goto L_0C07CAA0; }  /* 0C07CAF0 bra */
L_0C07CB00: BLKS(0x0C07CB00u);
	r7 += 0x47u;  /* 0C07CB00 add #imm,Rn */
	{ r1 = 0x40u; /* slot mov #imm,Rn */ UPD(0x0C07CAF0u, 4); goto L_0C07CAF0; }  /* 0C07CB02 bra */
}

/* FUN_0c07cb20 */
void blk_f_0C07CB20(sh3_t *c)
{
	LOCALS;
L_0C07CB20: BLKS(0x0C07CB20u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07CB22u, 1);  /* 0C07CB20 mov.l Rm,@-Rn */
	r4 = (u32)(s32)(s8)r4;  /* 0C07CB22 exts.b Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07CB26u, 2);  /* 0C07CB24 mov.l Rm,@-Rn */
	T = (r4 & r4) == 0;  /* 0C07CB26 tst Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07CB2Au, 2);  /* 0C07CB28 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07CB2Cu, 1);  /* 0C07CB2A mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07CB2Eu, 1);  /* 0C07CB2C mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07CB30u, 1);  /* 0C07CB2E mov.l Rm,@-Rn */
	IF(0x0C07CB30u); r15 -= 4; W32(r15, PR); UPD(0x0C07CB32u, 1);  /* 0C07CB30 sts.l pr,@-Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07CBCAu, 3); goto L_0C07CBCA; } goto L_0C07CB36; }  /* 0C07CB32 bt/s */
L_0C07CB36: BLKS(0x0C07CB36u);
	r10 = r4;  /* 0C07CB36 mov Rm,Rn */
	r10 += r10;  /* 0C07CB38 add Rm,Rn */
	r3 = 0xC22E260u; UPD(0x0C07CB3Cu, 4);  /* 0C07CB3A mov.l @(disp,pc),Rn */
	r0 = r10;  /* 0C07CB3C mov Rm,Rn */
	IF(0x0C07CB3Eu); r2 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C07CB40u, 2);  /* 0C07CB3E mov.w @(r0,Rm),Rn */
	r9 = 0x0u;  /* 0C07CB40 mov #imm,Rn */
	r0 = r2 & 0xFFFF;  /* 0C07CB42 extu.w Rm,Rn */
	T = (s32)r9 >= (s32)r0;  /* 0C07CB44 cmp/ge Rm,Rn */
	if (T) { UPD(0x0C07CBCAu, 6); goto L_0C07CBCA; }  /* 0C07CB46 bt */
L_0C07CB48: BLKS(0x0C07CB48u);
	r8 = r4;  /* 0C07CB48 mov Rm,Rn */
	r0 = 0x7u;  /* 0C07CB4A mov #imm,Rn */
	r11 = 0xC074C30u; UPD(0x0C07CB4Eu, 3);  /* 0C07CB4C mov.l @(disp,pc),Rn */
	IF(0x0C07CB4Eu); ARG0(0x480Du); { s32 s_ = (s32)r0; if (s_ >= 0) r8 <<= (s_ & 31); else if ((s_ & 31) == 0) r8 = 0; else r8 >>= ((~s_ & 31) + 1); }  /* 0C07CB4E shld Rm,Rn */
	r12 = 0x40u;  /* 0C07CB50 mov #imm,Rn */
	IF(0x0C07CB52u); ;  /* 0C07CB52 nop */
	UPD(0x0C07CB54u, 3);
L_0C07CB54: BLKS(0x0C07CB54u);
	r7 = 0xC23B8A0u; UPD(0x0C07CB56u, 1);  /* 0C07CB54 mov.l @(disp,pc),Rn */
	r0 = r8;  /* 0C07CB56 mov Rm,Rn */
	IF(0x0C07CB58u); r6 = (u32)(s32)(s16)R16(r0 + r7); UPD(0x0C07CB5Au, 2);  /* 0C07CB58 mov.w @(r0,Rm),Rn */
	r5 = 0x60u;  /* 0C07CB5A mov #imm,Rn */
	MACL = (u32)(u16)r6 * (u32)(u16)r5;  /* 0C07CB5C mulu.w Rm,Rn */
	r4 = 0xC3C27CCu; UPD(0x0C07CB60u, 4);  /* 0C07CB5E mov.l @(disp,pc),Rn */
	IF(0x0C07CB60u); r6 = MACL;  /* 0C07CB60 sts macl,Rn */
	r6 += r4;  /* 0C07CB62 add Rm,Rn */
	r0 = R32(r6); UPD(0x0C07CB66u, 3);  /* 0C07CB64 mov.l @Rm,Rn */
	r0 &= 0x10u;  /* 0C07CB66 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C07CB68 tst Rm,Rn */
	{ u32 c_ = !T; r5 = r6; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07CBBAu, 5); goto L_0C07CBBA; } goto L_0C07CB6E; }  /* 0C07CB6A bf/s */
L_0C07CB6E: BLKS(0x0C07CB6Eu);
	r3 = r6;  /* 0C07CB6E mov Rm,Rn */
	r5 += 0x46u;  /* 0C07CB70 add #imm,Rn */
	r3 += 0x45u;  /* 0C07CB72 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r3); UPD(0x0C07CB76u, 5);  /* 0C07CB74 mov.b @Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r5); UPD(0x0C07CB78u, 1);  /* 0C07CB76 mov.b @Rm,Rn */
	r7 = r0 & 0xFF;  /* 0C07CB78 extu.b Rm,Rn */
	r4 = r2 & 0xFF;  /* 0C07CB7A extu.b Rm,Rn */
	r4 -= r7;  /* 0C07CB7C sub Rm,Rn */
	r4 += 0x1u;  /* 0C07CB7E add #imm,Rn */
	r0 = 0x2u;  /* 0C07CB80 mov #imm,Rn */
	T = r4 > r0;  /* 0C07CB82 cmp/hi Rm,Rn */
	{ u32 c_ = T; r7 = r6; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07CBE0u, 9); goto L_0C07CBE0; } goto L_0C07CB88; }  /* 0C07CB84 bt/s */
L_0C07CB88: BLKS(0x0C07CB88u);
	r7 = r6;  /* 0C07CB88 mov Rm,Rn */
	r7 += 0x47u;  /* 0C07CB8A add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r7); UPD(0x0C07CB8Eu, 4);  /* 0C07CB8C mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C07CB8E tst Rm,Rn */
	{ u32 c_ = T; r1 += 0xFFFFFFFFu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C07CB96u, 4); goto L_0C07CB96; } goto L_0C07CB94; }  /* 0C07CB90 bt/s */
L_0C07CB94: BLKS(0x0C07CB94u);
	W8(r7, r1); UPD(0x0C07CB96u, 2);  /* 0C07CB94 mov.b Rm,@Rn */
L_0C07CB96: BLKS(0x0C07CB96u);
	r3 = (u32)(s32)(s8)R8(r3); UPD(0x0C07CB98u, 1);  /* 0C07CB96 mov.b @Rm,Rn */
	r1 = R32(r6 + 0x18u); UPD(0x0C07CB9Au, 1);  /* 0C07CB98 mov.l @(disp,Rm),Rn */
	W8(r5, r3); UPD(0x0C07CB9Cu, 1);  /* 0C07CB9A mov.b Rm,@Rn */
	r0 = 0xC2289E8u; UPD(0x0C07CB9Eu, 1);  /* 0C07CB9C mov.l @(disp,pc),Rn */
	W32(r0, r1); UPD(0x0C07CBA0u, 1);  /* 0C07CB9E mov.l Rm,@Rn */
	r5 = 0xC3C86B0u; UPD(0x0C07CBA2u, 1);  /* 0C07CBA0 mov.l @(disp,pc),Rn */
	r0 = r3 & 0xFF;  /* 0C07CBA2 extu.b Rm,Rn */
	r4 = R32(r6 + 0x20u); UPD(0x0C07CBA6u, 2);  /* 0C07CBA4 mov.l @(disp,Rm),Rn */
	W32(r5, r4); UPD(0x0C07CBA8u, 1);  /* 0C07CBA6 mov.l Rm,@Rn */
	r4 = R32(r6 + 0x28u); UPD(0x0C07CBAAu, 1);  /* 0C07CBA8 mov.l @(disp,Rm),Rn */
	r5 = R32(r6 + 0x2Cu); UPD(0x0C07CBACu, 1);  /* 0C07CBAA mov.l @(disp,Rm),Rn */
	r6 += 0x44u;  /* 0C07CBAC add #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r6); UPD(0x0C07CBB0u, 2);  /* 0C07CBAE mov.b @Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r7); UPD(0x0C07CBB2u, 1);  /* 0C07CBB0 mov.b @Rm,Rn */
	r6 = r2 & 0xFF;  /* 0C07CBB2 extu.b Rm,Rn */
	r6 -= r0;  /* 0C07CBB4 sub Rm,Rn */
	IF(0x0C07CBB6u); { u32 t_ = r11; PR = 0x0C07CBBAu; r7 = r1 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C074C30, 0x0C074C30u, 0x0C07CBBAu); }  /* 0C07CBB6 jsr @Rn */
L_0C07CBBA: BLKS(0x0C07CBBAu);
	r7 = 0xC22E260u; UPD(0x0C07CBBCu, 1);  /* 0C07CBBA mov.l @(disp,pc),Rn */
	r0 = r10;  /* 0C07CBBC mov Rm,Rn */
	IF(0x0C07CBBEu); r6 = (u32)(s32)(s16)R16(r0 + r7); UPD(0x0C07CBC0u, 2);  /* 0C07CBBE mov.w @(r0,Rm),Rn */
	r9 += 0x1u;  /* 0C07CBC0 add #imm,Rn */
	r3 = r6 & 0xFFFF;  /* 0C07CBC2 extu.w Rm,Rn */
	T = (s32)r9 >= (s32)r3;  /* 0C07CBC4 cmp/ge Rm,Rn */
	{ u32 c_ = !T; r8 += 0x2u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C07CB54u, 6); goto L_0C07CB54; } UPD(0x0C07CBCAu, 1); goto L_0C07CBCA; }  /* 0C07CBC6 bf/s */
L_0C07CBCA: BLKS(0x0C07CBCAu);
	r15 = r14;  /* 0C07CBCA mov Rm,Rn */
	IF(0x0C07CBCCu); PR = R32(r15); r15 += 4; UPD(0x0C07CBCEu, 2);  /* 0C07CBCC lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07CBD0u, 1);  /* 0C07CBCE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07CBD2u, 1);  /* 0C07CBD0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07CBD4u, 1);  /* 0C07CBD2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07CBD6u, 1);  /* 0C07CBD4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07CBD8u, 1);  /* 0C07CBD6 mov.l @Rm+,Rn */
	IF(0x0C07CBD8u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07CBD8 rts */
L_0C07CBE0: BLKS(0x0C07CBE0u);
	r7 += 0x47u;  /* 0C07CBE0 add #imm,Rn */
	{ W8(r7, r12); /* slot mov.b Rm,@Rn */ UPD(0x0C07CB96u, 4); goto L_0C07CB96; }  /* 0C07CBE2 bra */
}

/* FUN_0c07cc00 */
void blk_f_0C07CC00(sh3_t *c)
{
	LOCALS;
L_0C07CC00: BLKS(0x0C07CC00u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07CC02u, 1);  /* 0C07CC00 mov.l Rm,@-Rn */
	T = (r5 & r5) == 0;  /* 0C07CC02 tst Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07CC06u, 2);  /* 0C07CC04 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07CC08u, 1);  /* 0C07CC06 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07CC0Au, 1);  /* 0C07CC08 mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s16)r4;  /* 0C07CC0A exts.w Rm,Rn */
	IF(0x0C07CC0Cu); r15 -= 4; W32(r15, PR); UPD(0x0C07CC0Eu, 2);  /* 0C07CC0C sts.l pr,@-Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C07CC38u, 3); goto L_0C07CC38; } goto L_0C07CC12; }  /* 0C07CC0E bf/s */
L_0C07CC12: BLKS(0x0C07CC12u);
	r5 = 0xC22E015u; UPD(0x0C07CC14u, 2);  /* 0C07CC12 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r5); UPD(0x0C07CC16u, 1);  /* 0C07CC14 mov.b @Rm,Rn */
	r2 = 0xC28F608u; UPD(0x0C07CC18u, 1);  /* 0C07CC16 mov.l @(disp,pc),Rn */
	r6 = r0 & 0xFF;  /* 0C07CC18 extu.b Rm,Rn */
	r0 = r2;  /* 0C07CC1A mov Rm,Rn */
	IF(0x0C07CC1Cu); r3 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C07CC1Eu, 3);  /* 0C07CC1C mov.b @(r0,Rm),Rn */
	r2 += r6;  /* 0C07CC1E add Rm,Rn */
	r4 = 0xC189BD0u; UPD(0x0C07CC22u, 2);  /* 0C07CC20 mov.l @(disp,pc),Rn */
	r0 = r3 & 0xFF;  /* 0C07CC22 extu.b Rm,Rn */
	IF(0x0C07CC24u); r5 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C07CC26u, 2);  /* 0C07CC24 mov.b @(r0,Rm),Rn */
	r1 = r3;  /* 0C07CC26 mov Rm,Rn */
	r1 += 0x1u;  /* 0C07CC28 add #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C07CC2A extu.b Rm,Rn */
	IF(0x0C07CC2Cu); r0 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C07CC2Eu, 4);  /* 0C07CC2C mov.b @(r0,Rm),Rn */
	T = r0 == 0xFFFFFFFFu;  /* 0C07CC2E cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r2, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C07CC38u, 4); goto L_0C07CC38; } UPD(0x0C07CC34u, 1); goto L_0C07CC34; }  /* 0C07CC30 bf/s */
L_0C07CC34: BLKS(0x0C07CC34u);
	{ r4 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C07CD60u, 3); goto L_0C07CD60; }  /* 0C07CC34 bra */
L_0C07CC38: BLKS(0x0C07CC38u);
	r2 = 0xEu;  /* 0C07CC38 mov #imm,Rn */
	T = r5 > r2;  /* 0C07CC3A cmp/hi Rm,Rn */
	{ u32 c_ = T; r6 = 0x60u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07CC82u, 5); goto L_0C07CC82; } goto L_0C07CC40; }  /* 0C07CC3C bt/s */
L_0C07CC40: BLKS(0x0C07CC40u);
	r8 = r5;  /* 0C07CC40 mov Rm,Rn */
	r0 = 0xC07CC58u;  /* 0C07CC42 mova @(disp,pc),r0 */
	r8 += r8;  /* 0C07CC44 add Rm,Rn */
	IF(0x0C07CC46u); r7 = (u32)(s32)(s16)R16(r0 + r8); UPD(0x0C07CC48u, 5);  /* 0C07CC46 mov.w @(r0,Rm),Rn */
	IF(0x0C07CC48u); { u32 tv_ = (r7 + 0x0C07CC4Cu); u32 t_ = PHYS(tv_); IF(0x0C07CC4Au); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C07CC80u: goto L_0C07CC80; case 0x0C07CCC0u: goto L_0C07CCC0; case 0x0C07CD20u: goto L_0C07CD20; case 0x0C07CD40u: goto L_0C07CD40; default: JUMPD(tv_); } }  /* 0C07CC48 braf Rn */
L_0C07CC80: BLKS(0x0C07CC80u);
	r6 = 0x60u;  /* 0C07CC80 mov #imm,Rn */
	UPD(0x0C07CC82u, 1);
L_0C07CC82: BLKS(0x0C07CC82u);
	IF(0x0C07CC82u); MACL = r10 * r6;  /* 0C07CC82 mul.l Rm,Rn */
	r9 = 0xC3BC7CCu; UPD(0x0C07CC86u, 3);  /* 0C07CC84 mov.l @(disp,pc),Rn */
	r1 = 0x0u;  /* 0C07CC86 mov #imm,Rn */
	IF(0x0C07CC88u); r3 = MACL;  /* 0C07CC88 sts macl,Rn */
	r3 += r9;  /* 0C07CC8A add Rm,Rn */
	W32(r3 + 0x4u, r5); UPD(0x0C07CC8Eu, 4);  /* 0C07CC8C mov.l Rm,@(disp,Rn) */
	W32(r3 + 0x8u, r1); UPD(0x0C07CC90u, 1);  /* 0C07CC8E mov.l Rm,@(disp,Rn) */
L_0C07CC90: BLKS(0x0C07CC90u);
	r8 = 0x60u;  /* 0C07CC90 mov #imm,Rn */
	IF(0x0C07CC92u); MACL = r10 * r8;  /* 0C07CC92 mul.l Rm,Rn */
	UPD(0x0C07CC94u, 3);
L_0C07CC94: BLKS(0x0C07CC94u);
	r4 = r10;  /* 0C07CC94 mov Rm,Rn */
	IF(0x0C07CC96u); r8 = MACL;  /* 0C07CC96 sts macl,Rn */
	r8 += r9;  /* 0C07CC98 add Rm,Rn */
	r9 = 0x0u;  /* 0C07CC9A mov #imm,Rn */
	r10 = 0xC07BF80u; UPD(0x0C07CC9Eu, 5);  /* 0C07CC9C mov.l @(disp,pc),Rn */
	IF(0x0C07CC9Eu); { u32 t_ = r10; PR = 0x0C07CCA2u; W32(r8 + 0xCu, r9); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C07BF80, 0x0C07BF80u, 0x0C07CCA2u); }  /* 0C07CC9E jsr @Rn */
L_0C07CCA2: BLKS(0x0C07CCA2u);
	r8 += 0x4Eu;  /* 0C07CCA2 add #imm,Rn */
	W8(r8, r9); UPD(0x0C07CCA6u, 2);  /* 0C07CCA4 mov.b Rm,@Rn */
	r15 = r14;  /* 0C07CCA6 mov Rm,Rn */
	IF(0x0C07CCA8u); PR = R32(r15); r15 += 4; UPD(0x0C07CCAAu, 2);  /* 0C07CCA8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07CCACu, 1);  /* 0C07CCAA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07CCAEu, 1);  /* 0C07CCAC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07CCB0u, 1);  /* 0C07CCAE mov.l @Rm+,Rn */
	IF(0x0C07CCB0u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07CCB0 rts */
L_0C07CCC0: BLKS(0x0C07CCC0u);
	r8 = 0x60u;  /* 0C07CCC0 mov #imm,Rn */
	IF(0x0C07CCC2u); MACL = r10 * r8;  /* 0C07CCC2 mul.l Rm,Rn */
	r9 = 0xC3BC7CCu; UPD(0x0C07CCC6u, 4);  /* 0C07CCC4 mov.l @(disp,pc),Rn */
	r3 = 0xC297498u; UPD(0x0C07CCC8u, 1);  /* 0C07CCC6 mov.l @(disp,pc),Rn */
	IF(0x0C07CCC8u); r8 = MACL;  /* 0C07CCC8 sts macl,Rn */
	r8 += r9;  /* 0C07CCCA add Rm,Rn */
	r0 = R32(r3); UPD(0x0C07CCCEu, 3);  /* 0C07CCCC mov.l @Rm,Rn */
	T = r0 == 0x7u;  /* 0C07CCCE cmp/eq #imm,r0 */
	{ u32 c_ = T; W32(r8 + 0x4u, r5); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C07CD10u, 4); goto L_0C07CD10; } UPD(0x0C07CCD4u, 1); goto L_0C07CCD4; }  /* 0C07CCD0 bt/s */
L_0C07CCD4: BLKS(0x0C07CCD4u);
	r5 = 0x0u;  /* 0C07CCD4 mov #imm,Rn */
	W32(r8 + 0x8u, r5); UPD(0x0C07CCD8u, 2);  /* 0C07CCD6 mov.l Rm,@(disp,Rn) */
	r2 = 0x0u;  /* 0C07CCD8 mov #imm,Rn */
	r5 = 0xC22E028u; UPD(0x0C07CCDCu, 2);  /* 0C07CCDA mov.l @(disp,pc),Rn */
	r6 = 0x6u;  /* 0C07CCDC mov #imm,Rn */
	r7 = 0xC186870u; UPD(0x0C07CCE0u, 2);  /* 0C07CCDE mov.l @(disp,pc),Rn */
L_0C07CCE0: BLKS(0x0C07CCE0u);
	{ u32 v_ = R32(r7); r7 += 4; r3 = v_; } UPD(0x0C07CCE2u, 1);  /* 0C07CCE0 mov.l @Rm+,Rn */
	r0 = r3;  /* 0C07CCE2 mov Rm,Rn */
	IF(0x0C07CCE4u); r0 <<= 2;  /* 0C07CCE4 shll2 Rn */
	IF(0x0C07CCE6u); r4 = R32(r0 + r5); UPD(0x0C07CCE8u, 3);  /* 0C07CCE6 mov.l @(r0,Rm),Rn */
	T = (r4 & r4) == 0;  /* 0C07CCE8 tst Rm,Rn */
	if (T) { UPD(0x0C07CD00u, 4); goto L_0C07CD00; }  /* 0C07CCEA bt */
L_0C07CCEC: BLKS(0x0C07CCECu);
	r2 += 0x1u;  /* 0C07CCEC add #imm,Rn */
	T = (s32)r2 > (s32)r6;  /* 0C07CCEE cmp/gt Rm,Rn */
	{ u32 c_ = !T; r8 = 0x60u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C07CCE0u, 5); goto L_0C07CCE0; } goto L_0C07CCF4; }  /* 0C07CCF0 bf/s */
L_0C07CCF4: BLKS(0x0C07CCF4u);
	{ IF(0x0C07CCF6u); MACL = r10 * r8; /* slot mul.l Rm,Rn */ UPD(0x0C07CC94u, 5); goto L_0C07CC94; }  /* 0C07CCF4 bra */
L_0C07CD00: BLKS(0x0C07CD00u);
	r0 = 0x60u;  /* 0C07CD00 mov #imm,Rn */
	IF(0x0C07CD02u); MACL = r10 * r0;  /* 0C07CD02 mul.l Rm,Rn */
	r6 = 0xC3BC7CCu; UPD(0x0C07CD06u, 4);  /* 0C07CD04 mov.l @(disp,pc),Rn */
	IF(0x0C07CD06u); r1 = MACL;  /* 0C07CD06 sts macl,Rn */
	r6 += r1;  /* 0C07CD08 add Rm,Rn */
	{ W32(r6 + 0x8u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C07CC90u, 5); goto L_0C07CC90; }  /* 0C07CD0A bra */
L_0C07CD10: BLKS(0x0C07CD10u);
	r0 = 0xC062780u; UPD(0x0C07CD12u, 1);  /* 0C07CD10 mov.l @(disp,pc),Rn */
	IF(0x0C07CD12u); { u32 t_ = r0; PR = 0x0C07CD16u; r4 = 0x7u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C07CD16u); }  /* 0C07CD12 jsr @Rn */
L_0C07CD16: BLKS(0x0C07CD16u);
	{ W32(r8 + 0x8u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C07CC90u, 3); goto L_0C07CC90; }  /* 0C07CD16 bra */
L_0C07CD20: BLKS(0x0C07CD20u);
	r7 = 0x60u;  /* 0C07CD20 mov #imm,Rn */
	IF(0x0C07CD22u); MACL = r10 * r7;  /* 0C07CD22 mul.l Rm,Rn */
	r9 = 0xC3BC7CCu; UPD(0x0C07CD26u, 4);  /* 0C07CD24 mov.l @(disp,pc),Rn */
	IF(0x0C07CD26u); r0 = MACL;  /* 0C07CD26 sts macl,Rn */
	r0 += r9;  /* 0C07CD28 add Rm,Rn */
	W32(r0 + 0x4u, r5); UPD(0x0C07CD2Cu, 3);  /* 0C07CD2A mov.l Rm,@(disp,Rn) */
	r2 = 0xC3C53E0u; UPD(0x0C07CD2Eu, 1);  /* 0C07CD2C mov.l @(disp,pc),Rn */
	r4 = (u32)(s32)(s8)R8(r2); UPD(0x0C07CD30u, 1);  /* 0C07CD2E mov.b @Rm,Rn */
	r5 = r4 & 0xFF;  /* 0C07CD30 extu.b Rm,Rn */
	{ W32(r0 + 0x8u, r5); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C07CC90u, 4); goto L_0C07CC90; }  /* 0C07CD32 bra */
L_0C07CD40: BLKS(0x0C07CD40u);
	r3 = 0x60u;  /* 0C07CD40 mov #imm,Rn */
	IF(0x0C07CD42u); MACL = r10 * r3;  /* 0C07CD42 mul.l Rm,Rn */
	r9 = 0xC3BC7CCu; UPD(0x0C07CD46u, 4);  /* 0C07CD44 mov.l @(disp,pc),Rn */
	r2 = 0x1u;  /* 0C07CD46 mov #imm,Rn */
	IF(0x0C07CD48u); r7 = MACL;  /* 0C07CD48 sts macl,Rn */
	r7 += r9;  /* 0C07CD4A add Rm,Rn */
	r5 += 0xFFFFFFF8u;  /* 0C07CD4C add #imm,Rn */
	W32(r7 + 0x4u, r2); UPD(0x0C07CD50u, 5);  /* 0C07CD4E mov.l Rm,@(disp,Rn) */
	{ W32(r7 + 0x8u, r5); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C07CC90u, 3); goto L_0C07CC90; }  /* 0C07CD50 bra */
L_0C07CD60: BLKS(0x0C07CD60u);
	{ W8(r2, r4); /* slot mov.b Rm,@Rn */ UPD(0x0C07CC38u, 3); goto L_0C07CC38; }  /* 0C07CD60 bra */
}

/* FUN_0c07cd80 */
void blk_f_0C07CD80(sh3_t *c)
{
	LOCALS;
L_0C07CD80: BLKS(0x0C07CD80u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C07CD82u, 1);  /* 0C07CD80 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C07CD84u, 1);  /* 0C07CD82 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C07CD86u, 1);  /* 0C07CD84 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s8)r7;  /* 0C07CD86 exts.b Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C07CD8Au, 2);  /* 0C07CD88 mov.l Rm,@-Rn */
	r10 = r5;  /* 0C07CD8A mov Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C07CD8Eu, 2);  /* 0C07CD8C mov.l Rm,@-Rn */
	r11 = r6;  /* 0C07CD8E mov Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C07CD92u, 2);  /* 0C07CD90 mov.l Rm,@-Rn */
	r12 = r4;  /* 0C07CD92 mov Rm,Rn */
	r8 = 0xC07C010u; UPD(0x0C07CD96u, 2);  /* 0C07CD94 mov.l @(disp,pc),Rn */
	r4 = 0x1u;  /* 0C07CD96 mov #imm,Rn */
	IF(0x0C07CD98u); r15 -= 4; W32(r15, PR); UPD(0x0C07CD9Au, 2);  /* 0C07CD98 sts.l pr,@-Rn */
	IF(0x0C07CD9Au); { u32 t_ = r8; PR = 0x0C07CD9Eu; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07C010, 0x0C07C010u, 0x0C07CD9Eu); }  /* 0C07CD9A jsr @Rn */
L_0C07CD9E: BLKS(0x0C07CD9Eu);
	T = (r0 & r0) == 0;  /* 0C07CD9E tst Rm,Rn */
	if (!T) { UPD(0x0C07CDC0u, 4); goto L_0C07CDC0; }  /* 0C07CDA0 bf */
L_0C07CDA2: BLKS(0x0C07CDA2u);
	r15 = r14;  /* 0C07CDA2 mov Rm,Rn */
	IF(0x0C07CDA4u); PR = R32(r15); r15 += 4; UPD(0x0C07CDA6u, 2);  /* 0C07CDA4 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C07CDA8u, 1);  /* 0C07CDA6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C07CDAAu, 1);  /* 0C07CDA8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C07CDACu, 1);  /* 0C07CDAA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C07CDAEu, 1);  /* 0C07CDAC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C07CDB0u, 1);  /* 0C07CDAE mov.l @Rm+,Rn */
	IF(0x0C07CDB0u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C07CDB0 rts */
L_0C07CDC0: BLKS(0x0C07CDC0u);
	r0 = 0xC28EDFCu; UPD(0x0C07CDC2u, 1);  /* 0C07CDC0 mov.l @(disp,pc),Rn */
	r8 = 0x60u;  /* 0C07CDC2 mov #imm,Rn */
	r4 = (u32)(s32)(s16)R16(r0); UPD(0x0C07CDC6u, 2);  /* 0C07CDC4 mov.w @Rm,Rn */
	IF(0x0C07CDC6u); MACL = r4 * r8;  /* 0C07CDC6 mul.l Rm,Rn */
	r7 = 0xC3BC7CCu; UPD(0x0C07CDCAu, 3);  /* 0C07CDC8 mov.l @(disp,pc),Rn */
	IF(0x0C07CDCAu); r8 = MACL;  /* 0C07CDCA sts macl,Rn */
	r5 = 0xD0000004u; UPD(0x0C07CDCEu, 2);  /* 0C07CDCC mov.l @(disp,pc),Rn */
	r8 += r7;  /* 0C07CDCE add Rm,Rn */
	r6 = 0xC07CC00u; UPD(0x0C07CDD2u, 2);  /* 0C07CDD0 mov.l @(disp,pc),Rn */
	W32(r8, r5); UPD(0x0C07CDD4u, 1);  /* 0C07CDD2 mov.l Rm,@Rn */
	IF(0x0C07CDD4u); { u32 t_ = r6; PR = 0x0C07CDD8u; r5 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07CC00, 0x0C07CC00u, 0x0C07CDD8u); }  /* 0C07CDD4 jsr @Rn */
L_0C07CDD8: BLKS(0x0C07CDD8u);
	W32(r8 + 0x28u, r10); UPD(0x0C07CDDAu, 1);  /* 0C07CDD8 mov.l Rm,@(disp,Rn) */
	r7 = 0x0u;  /* 0C07CDDA mov #imm,Rn */
	W32(r8 + 0x2Cu, r11); UPD(0x0C07CDDEu, 2);  /* 0C07CDDC mov.l Rm,@(disp,Rn) */
	r8 += 0x44u;  /* 0C07CDDE add #imm,Rn */
	W8(r8, r9); UPD(0x0C07CDE2u, 2);  /* 0C07CDE0 mov.b Rm,@Rn */
	r4 = R32(r14 + 0x1Cu); UPD(0x0C07CDE4u, 1);  /* 0C07CDE2 mov.l @(disp,Rm),Rn */
	r8 += 0xFFFFFFBCu;  /* 0C07CDE4 add #imm,Rn */
	r3 = R32(r14 + 0x20u); UPD(0x0C07CDE8u, 2);  /* 0C07CDE6 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x30u, r4); UPD(0x0C07CDEAu, 1);  /* 0C07CDE8 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x34u, r3); UPD(0x0C07CDECu, 1);  /* 0C07CDEA mov.l Rm,@(disp,Rn) */
	r2 = 0xFFFD0000u; UPD(0x0C07CDEEu, 1);  /* 0C07CDEC mov.l @(disp,pc),Rn */
	r8 += 0x40u;  /* 0C07CDEE add #imm,Rn */
	W32(r8, r2); UPD(0x0C07CDF2u, 2);  /* 0C07CDF0 mov.l Rm,@Rn */
	r0 = 0x808080u; UPD(0x0C07CDF4u, 1);  /* 0C07CDF2 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFC0u;  /* 0C07CDF4 add #imm,Rn */
	W32(r8 + 0x3Cu, r0); UPD(0x0C07CDF8u, 2);  /* 0C07CDF6 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x38u, r7); UPD(0x0C07CDFAu, 1);  /* 0C07CDF8 mov.l Rm,@(disp,Rn) */
	r0 = r12;  /* 0C07CDFA mov Rm,Rn */
	r8 += 0x4Fu;  /* 0C07CDFC add #imm,Rn */
	W8(r8, r7); UPD(0x0C07CE00u, 3);  /* 0C07CDFE mov.b Rm,@Rn */
	T = r0 == 0x7u;  /* 0C07CE00 cmp/eq #imm,r0 */
	{ u32 c_ = !T; r8 += 0xFFFFFFB1u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C07CDA2u, 4); goto L_0C07CDA2; } goto L_0C07CE06; }  /* 0C07CE02 bf/s */
L_0C07CE06: BLKS(0x0C07CE06u);
	r4 = 0xC2974C6u; UPD(0x0C07CE08u, 2);  /* 0C07CE06 mov.l @(disp,pc),Rn */
	r8 += 0x5Cu;  /* 0C07CE08 add #imm,Rn */
	r3 = (u32)(s32)(s16)R16(r4); UPD(0x0C07CE0Cu, 2);  /* 0C07CE0A mov.w @Rm,Rn */
	r0 = r3 & 0xFFFF;  /* 0C07CE0C extu.w Rm,Rn */
	IF(0x0C07CE0Eu); r0 >>= 2;  /* 0C07CE0E shlr2 Rn */
	r12 = 0xC0C2494u; UPD(0x0C07CE12u, 3);  /* 0C07CE10 mov.l @(disp,pc),Rn */
	IF(0x0C07CE12u); r0 >>= 2;  /* 0C07CE12 shlr2 Rn */
	r2 = 0xC239484u; UPD(0x0C07CE16u, 2);  /* 0C07CE14 mov.l @(disp,pc),Rn */
	r0 |= 0x1u;  /* 0C07CE16 or #imm,r0 */
	r4 = R32(r2); UPD(0x0C07CE1Au, 2);  /* 0C07CE18 mov.l @Rm,Rn */
	IF(0x0C07CE1Au); { u32 t_ = r12; PR = 0x0C07CE1Eu; r5 = r0; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2494, 0x0C0C2494u, 0x0C07CE1Eu); }  /* 0C07CE1A jsr @Rn */
L_0C07CE1E: BLKS(0x0C07CE1Eu);
	r0 += 0x1u;  /* 0C07CE1E add #imm,Rn */
	r11 = 0xC297A3Cu; UPD(0x0C07CE22u, 2);  /* 0C07CE20 mov.l @(disp,pc),Rn */
	W32(r8, r0); UPD(0x0C07CE24u, 1);  /* 0C07CE22 mov.l Rm,@Rn */
	r10 = R32(r11); UPD(0x0C07CE26u, 1);  /* 0C07CE24 mov.l @Rm,Rn */
	r8 += 0xFFFFFFA4u;  /* 0C07CE26 add #imm,Rn */
	r9 = 0x1000000u; UPD(0x0C07CE2Au, 2);  /* 0C07CE28 mov.l @(disp,pc),Rn */
	r3 = r8;  /* 0C07CE2A mov Rm,Rn */
	r9 -= r10;  /* 0C07CE2C sub Rm,Rn */
	IF(0x0C07CE2Eu); r9 >>= 16;  /* 0C07CE2E shlr16 Rn */
	r3 += 0x54u;  /* 0C07CE30 add #imm,Rn */
	T = (r9 & r9) == 0;  /* 0C07CE32 tst Rm,Rn */
	{ u32 c_ = !T; W32(r3, r9); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C07CE3Cu, 8); goto L_0C07CE3C; } UPD(0x0C07CE38u, 1); goto L_0C07CE38; }  /* 0C07CE34 bf/s */
L_0C07CE38: BLKS(0x0C07CE38u);
	r6 = 0x1u;  /* 0C07CE38 mov #imm,Rn */
	W32(r3, r6); UPD(0x0C07CE3Cu, 2);  /* 0C07CE3A mov.l Rm,@Rn */
L_0C07CE3C: BLKS(0x0C07CE3Cu);
	r5 = R32(r3); UPD(0x0C07CE3Eu, 1);  /* 0C07CE3C mov.l @Rm,Rn */
	r1 = 0xFFu; UPD(0x0C07CE40u, 1);  /* 0C07CE3E mov.w @(disp,pc),Rn */
	T = (s32)r5 > (s32)r1;  /* 0C07CE40 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r1 += 0x2Du; /* slot add #imm,Rn */ if (c_) { UPD(0x0C07CE48u, 4); goto L_0C07CE48; } goto L_0C07CE46; }  /* 0C07CE42 bf/s */
L_0C07CE46: BLKS(0x0C07CE46u);
	W32(r3, r1); UPD(0x0C07CE48u, 2);  /* 0C07CE46 mov.l Rm,@Rn */
L_0C07CE48: BLKS(0x0C07CE48u);
	r3 = r8;  /* 0C07CE48 mov Rm,Rn */
	r3 += 0x58u;  /* 0C07CE4A add #imm,Rn */
	W32(r3, r7); UPD(0x0C07CE4Eu, 3);  /* 0C07CE4C mov.l Rm,@Rn */
	r2 = 0xC29D1D8u; UPD(0x0C07CE50u, 1);  /* 0C07CE4E mov.l @(disp,pc),Rn */
	r7 = R32(r2); UPD(0x0C07CE52u, 1);  /* 0C07CE50 mov.l @Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C07CE52 tst Rm,Rn */
	if (T) { UPD(0x0C07CE62u, 4); goto L_0C07CE62; }  /* 0C07CE54 bt */
L_0C07CE56: BLKS(0x0C07CE56u);
	r0 = 0x280u; UPD(0x0C07CE58u, 1);  /* 0C07CE56 mov.w @(disp,pc),Rn */
	IF(0x0C07CE58u); r8 = R32(r0 + r2); UPD(0x0C07CE5Au, 1);  /* 0C07CE58 mov.l @(r0,Rm),Rn */
	IF(0x0C07CE5Au); T = r8 & 1; r8 = (u32)((s32)r8 >> 1);  /* 0C07CE5A shar Rn */
	IF(0x0C07CE5Cu); T = r8 & 1; r8 = (u32)((s32)r8 >> 1);  /* 0C07CE5C shar Rn */
	IF(0x0C07CE5Eu); T = r8 & 1; r8 = (u32)((s32)r8 >> 1);  /* 0C07CE5E shar Rn */
	W32(r3, r8); UPD(0x0C07CE62u, 4);  /* 0C07CE60 mov.l Rm,@Rn */
L_0C07CE62: BLKS(0x0C07CE62u);
	r0 = 0x2A0u; UPD(0x0C07CE64u, 1);  /* 0C07CE62 mov.w @(disp,pc),Rn */
	IF(0x0C07CE64u); r9 = R32(r0 + r2); UPD(0x0C07CE66u, 1);  /* 0C07CE64 mov.l @(r0,Rm),Rn */
	T = (r9 & r9) == 0;  /* 0C07CE66 tst Rm,Rn */
	if (T) { UPD(0x0C07CDA2u, 4); goto L_0C07CDA2; }  /* 0C07CE68 bt */
L_0C07CE6A: BLKS(0x0C07CE6Au);
	r0 = 0x520u; UPD(0x0C07CE6Cu, 1);  /* 0C07CE6A mov.w @(disp,pc),Rn */
	IF(0x0C07CE6Cu); r2 = R32(r0 + r2); UPD(0x0C07CE6Eu, 1);  /* 0C07CE6C mov.l @(r0,Rm),Rn */
	IF(0x0C07CE6Eu); T = r2 & 1; r2 = (u32)((s32)r2 >> 1);  /* 0C07CE6E shar Rn */
	IF(0x0C07CE70u); T = r2 & 1; r2 = (u32)((s32)r2 >> 1);  /* 0C07CE70 shar Rn */
	r0 = R32(r3); UPD(0x0C07CE74u, 3);  /* 0C07CE72 mov.l @Rm,Rn */
	IF(0x0C07CE74u); T = r2 & 1; r2 = (u32)((s32)r2 >> 1);  /* 0C07CE74 shar Rn */
	T = (s32)r0 >= (s32)r2;  /* 0C07CE76 cmp/ge Rm,Rn */
	if (T) { UPD(0x0C07CDA2u, 5); goto L_0C07CDA2; }  /* 0C07CE78 bt */
L_0C07CE7A: BLKS(0x0C07CE7Au);
	W32(r3, r2); UPD(0x0C07CE7Cu, 1);  /* 0C07CE7A mov.l Rm,@Rn */
	{ IF(0x0C07CE7Eu); ; /* slot nop */ UPD(0x0C07CDA2u, 3); goto L_0C07CDA2; }  /* 0C07CE7C bra */
}


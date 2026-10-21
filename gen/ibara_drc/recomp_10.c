#include "recomp.h"
#include "recomp_funcs.h"

void f_0C06A8A0(sh3_t *c)
{
	LOCALS;
L_0C06A8A0: BLKS(0x0C06A8A0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06A8A2u, 1);  /* 0C06A8A0 mov.l Rm,@-Rn */
	r5 = (u32)(s32)(s16)r5;  /* 0C06A8A2 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C06A8A6u, 2);  /* 0C06A8A4 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C06A8A8u, 1);  /* 0C06A8A6 mov.l Rm,@-Rn */
	r6 = 0x2800u; UPD(0x0C06A8AAu, 1);  /* 0C06A8A8 mov.w @(disp,pc),Rn */
	r10 = (u32)(s32)(s16)r4;  /* 0C06A8AA exts.w Rm,Rn */
	IF(0x0C06A8ACu); MACL = r10 * r6;  /* 0C06A8AC mul.l Rm,Rn */
	r4 = 0x50u;  /* 0C06A8AE mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06A8B2u, 5);  /* 0C06A8B0 mov.l Rm,@-Rn */
	IF(0x0C06A8B2u); r9 = MACL;  /* 0C06A8B2 sts macl,Rn */
	IF(0x0C06A8B4u); MACL = r5 * r4;  /* 0C06A8B4 mul.l Rm,Rn */
	r0 = 0xC217A04u; UPD(0x0C06A8B8u, 4);  /* 0C06A8B6 mov.l @(disp,pc),Rn */
	IF(0x0C06A8B8u); r3 = MACL;  /* 0C06A8B8 sts macl,Rn */
	IF(0x0C06A8BAu); r15 -= 4; W32(r15, PR); UPD(0x0C06A8BCu, 2);  /* 0C06A8BA sts.l pr,@-Rn */
	r9 += r3;  /* 0C06A8BC add Rm,Rn */
	r9 += r0;  /* 0C06A8BE add Rm,Rn */
	r2 = R32(r9 + 0x8u); UPD(0x0C06A8C2u, 3);  /* 0C06A8C0 mov.l @(disp,Rm),Rn */
	r0 = 0x1u;  /* 0C06A8C2 mov #imm,Rn */
	r2 += 0xFFFFFFC0u;  /* 0C06A8C4 add #imm,Rn */
	T = r2 > r0;  /* 0C06A8C6 cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06A8E0u, 6); goto L_0C06A8E0; } goto L_0C06A8CC; }  /* 0C06A8C8 bt/s */
L_0C06A8CC: BLKS(0x0C06A8CCu);
	r15 = r14;  /* 0C06A8CC mov Rm,Rn */
	IF(0x0C06A8CEu); PR = R32(r15); r15 += 4; UPD(0x0C06A8D0u, 3);  /* 0C06A8CE lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06A8D2u, 1);  /* 0C06A8D0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06A8D4u, 1);  /* 0C06A8D2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06A8D6u, 1);  /* 0C06A8D4 mov.l @Rm+,Rn */
	IF(0x0C06A8D6u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06A8D6 rts */
L_0C06A8E0: BLKS(0x0C06A8E0u);
	r10 += 0x40u;  /* 0C06A8E0 add #imm,Rn */
	r8 = 0x0u;  /* 0C06A8E2 mov #imm,Rn */
	W32(r9 + 0x8u, r10); UPD(0x0C06A8E6u, 3);  /* 0C06A8E4 mov.l Rm,@(disp,Rn) */
	r2 = 0xC068DE0u; UPD(0x0C06A8E8u, 1);  /* 0C06A8E6 mov.l @(disp,pc),Rn */
	r10 += 0xFFFFFFC0u;  /* 0C06A8E8 add #imm,Rn */
	W32(r9 + 0x4u, r8); UPD(0x0C06A8ECu, 2);  /* 0C06A8EA mov.l Rm,@(disp,Rn) */
	r4 = r10;  /* 0C06A8EC mov Rm,Rn */
	IF(0x0C06A8EEu); { u32 t_ = r2; PR = 0x0C06A8F2u; W32(r9 + 0xCu, r8); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C068DE0, 0x0C068DE0u, 0x0C06A8F2u); }  /* 0C06A8EE jsr @Rn */
L_0C06A8F2: BLKS(0x0C06A8F2u);
	r9 += 0x48u;  /* 0C06A8F2 add #imm,Rn */
	W8(r9, r8); UPD(0x0C06A8F6u, 2);  /* 0C06A8F4 mov.b Rm,@Rn */
	r4 = r10;  /* 0C06A8F6 mov Rm,Rn */
	r5 = 0x204B0B0u; UPD(0x0C06A8FAu, 2);  /* 0C06A8F8 mov.l @(disp,pc),Rn */
	r9 += 0xFFFFFFB8u;  /* 0C06A8FA add #imm,Rn */
	W32(r9 + 0x3Cu, r5); UPD(0x0C06A8FEu, 2);  /* 0C06A8FC mov.l Rm,@(disp,Rn) */
	r7 = 0xC0AFB20u; UPD(0x0C06A900u, 1);  /* 0C06A8FE mov.l @(disp,pc),Rn */
	r5 = 0x54u;  /* 0C06A900 mov #imm,Rn */
	r15 = r14;  /* 0C06A902 mov Rm,Rn */
	IF(0x0C06A904u); PR = R32(r15); r15 += 4; UPD(0x0C06A906u, 3);  /* 0C06A904 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06A908u, 1);  /* 0C06A906 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06A90Au, 1);  /* 0C06A908 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06A90Cu, 1);  /* 0C06A90A mov.l @Rm+,Rn */
	IF(0x0C06A90Cu); { u32 tv_ = r7; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0AFB20u: TAIL(f_0C0AFB20); default: JUMPD(tv_); } }  /* 0C06A90C jmp @Rn */
}

void f_0C06A930(sh3_t *c)
{
	LOCALS;
L_0C06A930: BLKS(0x0C06A930u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06A932u, 1);  /* 0C06A930 mov.l Rm,@-Rn */
	r14 = r15;  /* 0C06A932 mov Rm,Rn */
	r15 = r14;  /* 0C06A934 mov Rm,Rn */
	IF(0x0C06A936u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C06A936 rts */
}

void f_0C06A940(sh3_t *c)
{
	LOCALS;
L_0C06A940: BLKS(0x0C06A940u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06A942u, 1);  /* 0C06A940 mov.l Rm,@-Rn */
	r14 = r15;  /* 0C06A942 mov Rm,Rn */
	r15 = r14;  /* 0C06A944 mov Rm,Rn */
	IF(0x0C06A946u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C06A946 rts */
}

void f_0C06A950(sh3_t *c)
{
	LOCALS;
L_0C06A950: BLKS(0x0C06A950u);
	r6 = 0x2800u; UPD(0x0C06A952u, 1);  /* 0C06A950 mov.w @(disp,pc),Rn */
	r1 = (u32)(s32)(s16)r4;  /* 0C06A952 exts.w Rm,Rn */
	IF(0x0C06A954u); MACL = r1 * r6;  /* 0C06A954 mul.l Rm,Rn */
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06A958u, 4);  /* 0C06A956 mov.l Rm,@-Rn */
	r3 = (u32)(s32)(s16)r5;  /* 0C06A958 exts.w Rm,Rn */
	r2 = 0x50u;  /* 0C06A95A mov #imm,Rn */
	IF(0x0C06A95Cu); r8 = MACL;  /* 0C06A95C sts macl,Rn */
	IF(0x0C06A95Eu); MACL = r3 * r2;  /* 0C06A95E mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06A962u, 6);  /* 0C06A960 mov.l Rm,@-Rn */
	IF(0x0C06A962u); r0 = MACL;  /* 0C06A962 sts macl,Rn */
	r8 += r0;  /* 0C06A964 add Rm,Rn */
	r0 = 0xC217A4Au; UPD(0x0C06A968u, 3);  /* 0C06A966 mov.l @(disp,pc),Rn */
	r8 += r0;  /* 0C06A968 add Rm,Rn */
	r0 = 0xC065950u; UPD(0x0C06A96Cu, 2);  /* 0C06A96A mov.l @(disp,pc),Rn */
	IF(0x0C06A96Cu); r15 -= 4; W32(r15, PR); UPD(0x0C06A96Eu, 1);  /* 0C06A96C sts.l pr,@-Rn */
	r4 = 0xC0u; UPD(0x0C06A970u, 1);  /* 0C06A96E mov.w @(disp,pc),Rn */
	IF(0x0C06A970u); { u32 t_ = r0; PR = 0x0C06A974u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C065950, 0x0C065950u, 0x0C06A974u); }  /* 0C06A970 jsr @Rn */
L_0C06A974: BLKS(0x0C06A974u);
	W16(r8, r0); UPD(0x0C06A976u, 1);  /* 0C06A974 mov.w Rm,@Rn */
	r15 = r14;  /* 0C06A976 mov Rm,Rn */
	IF(0x0C06A978u); PR = R32(r15); r15 += 4; UPD(0x0C06A97Au, 2);  /* 0C06A978 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06A97Cu, 1);  /* 0C06A97A mov.l @Rm+,Rn */
	IF(0x0C06A97Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06A97C rts */
}

void f_0C06A990(sh3_t *c)
{
	LOCALS;
L_0C06A990: BLKS(0x0C06A990u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06A992u, 1);  /* 0C06A990 mov.l Rm,@-Rn */
	r2 = 0x54u;  /* 0C06A992 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C06A996u, 2);  /* 0C06A994 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C06A996 exts.w Rm,Rn */
	IF(0x0C06A998u); MACL = r9 * r2;  /* 0C06A998 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06A99Cu, 4);  /* 0C06A99A mov.l Rm,@-Rn */
	r0 = 0xC38C064u; UPD(0x0C06A99Eu, 1);  /* 0C06A99C mov.l @(disp,pc),Rn */
	IF(0x0C06A99Eu); r8 = MACL;  /* 0C06A99E sts macl,Rn */
	IF(0x0C06A9A0u); r15 -= 4; W32(r15, PR); UPD(0x0C06A9A2u, 2);  /* 0C06A9A0 sts.l pr,@-Rn */
	r8 += r0;  /* 0C06A9A2 add Rm,Rn */
	r2 = R32(r8 + 0x30u); UPD(0x0C06A9A6u, 2);  /* 0C06A9A4 mov.l @(disp,Rm),Rn */
	r14 = r15;  /* 0C06A9A6 mov Rm,Rn */
	r8 += 0x40u;  /* 0C06A9A8 add #imm,Rn */
	r0 = R32(r8); UPD(0x0C06A9ACu, 3);  /* 0C06A9AA mov.l @Rm,Rn */
	T = (s32)r2 > (s32)r0;  /* 0C06A9AC cmp/gt Rm,Rn */
	{ u32 c_ = !T; r8 += 0xFFFFFFC0u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06A9BAu, 4); goto L_0C06A9BA; } goto L_0C06A9B2; }  /* 0C06A9AE bf/s */
L_0C06A9B2: BLKS(0x0C06A9B2u);
	r3 = 0xFFFFF000u; UPD(0x0C06A9B4u, 2);  /* 0C06A9B2 mov.w @(disp,pc),Rn */
	r3 += r2;  /* 0C06A9B4 add Rm,Rn */
	W32(r8 + 0x30u, r3); UPD(0x0C06A9B8u, 2);  /* 0C06A9B6 mov.l Rm,@(disp,Rn) */
	r2 = r3;  /* 0C06A9B8 mov Rm,Rn */
	UPD(0x0C06A9BAu, 1);
L_0C06A9BA: BLKS(0x0C06A9BAu);
	r7 = r8;  /* 0C06A9BA mov Rm,Rn */
	r7 += 0x4Fu;  /* 0C06A9BC add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C06A9C0u, 3);  /* 0C06A9BE mov.b @Rm,Rn */
	r0 = r6;  /* 0C06A9C0 mov Rm,Rn */
	r0 += 0x1u;  /* 0C06A9C2 add #imm,Rn */
	W8(r7, r0); UPD(0x0C06A9C6u, 3);  /* 0C06A9C4 mov.b Rm,@Rn */
	r4 = r6 & 0xFF;  /* 0C06A9C6 extu.b Rm,Rn */
	r3 = R32(r8 + 0x28u); UPD(0x0C06A9CAu, 2);  /* 0C06A9C8 mov.l @(disp,Rm),Rn */
	r4 += r9;  /* 0C06A9CA add Rm,Rn */
	r0 = 0xC058030u; UPD(0x0C06A9CEu, 2);  /* 0C06A9CC mov.l @(disp,pc),Rn */
	r3 += r2;  /* 0C06A9CE add Rm,Rn */
	r5 = 0xC000u; UPD(0x0C06A9D2u, 2);  /* 0C06A9D0 mov.l @(disp,pc),Rn */
	IF(0x0C06A9D2u); r4 <<= 2;  /* 0C06A9D2 shll2 Rn */
	IF(0x0C06A9D4u); { u32 t_ = r0; PR = 0x0C06A9D8u; W32(r8 + 0x28u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C06A9D8u); }  /* 0C06A9D4 jsr @Rn */
L_0C06A9D8: BLKS(0x0C06A9D8u);
	r5 = R32(r8 + 0x2Cu); UPD(0x0C06A9DAu, 1);  /* 0C06A9D8 mov.l @(disp,Rm),Rn */
	r1 = R32(r8 + 0x28u); UPD(0x0C06A9DCu, 1);  /* 0C06A9DA mov.l @(disp,Rm),Rn */
	r5 += r0;  /* 0C06A9DC add Rm,Rn */
	r4 = 0xFFF00000u; UPD(0x0C06A9E0u, 2);  /* 0C06A9DE mov.l @(disp,pc),Rn */
	T = (s32)r1 >= (s32)r4;  /* 0C06A9E0 cmp/ge Rm,Rn */
	{ u32 c_ = !T; W32(r8 + 0x2Cu, r5); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C06AA50u, 4); goto L_0C06AA50; } UPD(0x0C06A9E6u, 1); goto L_0C06A9E6; }  /* 0C06A9E2 bf/s */
L_0C06A9E6: BLKS(0x0C06A9E6u);
	r3 = r8;  /* 0C06A9E6 mov Rm,Rn */
	UPD(0x0C06A9E8u, 1);
L_0C06A9E8: BLKS(0x0C06A9E8u);
	r3 += 0x50u;  /* 0C06A9E8 add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r3); UPD(0x0C06A9ECu, 2);  /* 0C06A9EA mov.b @Rm,Rn */
	r4 = 0x3u;  /* 0C06A9EC mov #imm,Rn */
	r6 += 0x1u;  /* 0C06A9EE add #imm,Rn */
	r5 = r6 & 0xFF;  /* 0C06A9F0 extu.b Rm,Rn */
	T = r5 > r4;  /* 0C06A9F2 cmp/hi Rm,Rn */
	{ u32 c_ = T; W8(r3, r6); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C06AA30u, 7); goto L_0C06AA30; } UPD(0x0C06A9F8u, 1); goto L_0C06A9F8; }  /* 0C06A9F4 bt/s */
L_0C06A9F8: BLKS(0x0C06A9F8u);
	r3 = r8;  /* 0C06A9F8 mov Rm,Rn */
	UPD(0x0C06A9FAu, 1);
L_0C06A9FA: BLKS(0x0C06A9FAu);
	r3 += 0x44u;  /* 0C06A9FA add #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r3); UPD(0x0C06A9FEu, 2);  /* 0C06A9FC mov.b @Rm,Rn */
	r4 = 0x13u;  /* 0C06A9FE mov #imm,Rn */
	T = r2 > r4;  /* 0C06AA00 cmp/hi Rm,Rn */
	{ u32 c_ = T; r5 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06AA0Au, 5); goto L_0C06AA0A; } goto L_0C06AA06; }  /* 0C06AA02 bt/s */
L_0C06AA06: BLKS(0x0C06AA06u);
	r5 += 0x1u;  /* 0C06AA06 add #imm,Rn */
	W8(r3, r5); UPD(0x0C06AA0Au, 3);  /* 0C06AA08 mov.b Rm,@Rn */
L_0C06AA0A: BLKS(0x0C06AA0Au);
	r1 = R32(r8 + 0x8u); UPD(0x0C06AA0Cu, 1);  /* 0C06AA0A mov.l @(disp,Rm),Rn */
	r8 = 0x2u;  /* 0C06AA0C mov #imm,Rn */
	T = (s32)r1 > (s32)r8;  /* 0C06AA0E cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C06AA20u, 5); goto L_0C06AA20; }  /* 0C06AA10 bf */
L_0C06AA12: BLKS(0x0C06AA12u);
	r15 = r14;  /* 0C06AA12 mov Rm,Rn */
	IF(0x0C06AA14u); PR = R32(r15); r15 += 4; UPD(0x0C06AA16u, 2);  /* 0C06AA14 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06AA18u, 1);  /* 0C06AA16 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06AA1Au, 1);  /* 0C06AA18 mov.l @Rm+,Rn */
	IF(0x0C06AA1Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06AA1A rts */
L_0C06AA20: BLKS(0x0C06AA20u);
	r3 = 0xC06C3D0u; UPD(0x0C06AA22u, 1);  /* 0C06AA20 mov.l @(disp,pc),Rn */
	r4 = r9;  /* 0C06AA22 mov Rm,Rn */
	r15 = r14;  /* 0C06AA24 mov Rm,Rn */
	IF(0x0C06AA26u); PR = R32(r15); r15 += 4; UPD(0x0C06AA28u, 3);  /* 0C06AA26 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06AA2Au, 1);  /* 0C06AA28 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06AA2Cu, 1);  /* 0C06AA2A mov.l @Rm+,Rn */
	IF(0x0C06AA2Cu); { u32 tv_ = r3; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C06C3D0u: goto L_0C06C3D0; default: JUMPD(tv_); } }  /* 0C06AA2C jmp @Rn */
L_0C06AA30: BLKS(0x0C06AA30u);
	r0 = 0x0u;  /* 0C06AA30 mov #imm,Rn */
	W8(r3, r0); UPD(0x0C06AA34u, 2);  /* 0C06AA32 mov.b Rm,@Rn */
	r4 = r9;  /* 0C06AA34 mov Rm,Rn */
	r0 = R32(r8 + 0xCu); UPD(0x0C06AA38u, 2);  /* 0C06AA36 mov.l @(disp,Rm),Rn */
	r7 = 0xC06AD00u; UPD(0x0C06AA3Au, 1);  /* 0C06AA38 mov.l @(disp,pc),Rn */
	r0 += 0x1u;  /* 0C06AA3A add #imm,Rn */
	r0 &= 0xFu;  /* 0C06AA3C and #imm,r0 */
	IF(0x0C06AA3Eu); { u32 t_ = r7; PR = 0x0C06AA42u; W32(r8 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 4); CALLP(t_, f_0C06AD00, 0x0C06AD00u, 0x0C06AA42u); }  /* 0C06AA3E jsr @Rn */
L_0C06AA42: BLKS(0x0C06AA42u);
	{ r3 = r8; /* slot mov Rm,Rn */ UPD(0x0C06A9FAu, 3); goto L_0C06A9FA; }  /* 0C06AA42 bra */
L_0C06AA50: BLKS(0x0C06AA50u);
	r2 = 0xC06B480u; UPD(0x0C06AA52u, 1);  /* 0C06AA50 mov.l @(disp,pc),Rn */
	IF(0x0C06AA52u); { u32 t_ = r2; PR = 0x0C06AA56u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C06B480, 0x0C06B480u, 0x0C06AA56u); }  /* 0C06AA52 jsr @Rn */
L_0C06AA56: BLKS(0x0C06AA56u);
	{ r3 = r8; /* slot mov Rm,Rn */ UPD(0x0C06A9E8u, 3); goto L_0C06A9E8; }  /* 0C06AA56 bra */
L_0C06C3D0: BLKS(0x0C06C3D0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06C3D2u, 1);  /* 0C06C3D0 mov.l Rm,@-Rn */
	r2 = 0x54u;  /* 0C06C3D2 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C06C3D6u, 2);  /* 0C06C3D4 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C06C3D6 exts.w Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C06C3DAu, 2);  /* 0C06C3D8 mov.l Rm,@-Rn */
	IF(0x0C06C3DAu); MACL = r8 * r2;  /* 0C06C3DA mul.l Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06C3DEu, 3);  /* 0C06C3DC mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C06C3E0u, 1);  /* 0C06C3DE mov.l Rm,@-Rn */
	IF(0x0C06C3E0u); r2 = MACL;  /* 0C06C3E0 sts macl,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C06C3E4u, 2);  /* 0C06C3E2 mov.l Rm,@-Rn */
	r0 = 0xC38C064u; UPD(0x0C06C3E6u, 1);  /* 0C06C3E4 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06C3E8u, 1);  /* 0C06C3E6 mov.l Rm,@-Rn */
	r2 += r0;  /* 0C06C3E8 add Rm,Rn */
	r0 = R32(r2 + 0x1Cu); UPD(0x0C06C3ECu, 2);  /* 0C06C3EA mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFF0u;  /* 0C06C3EC add #imm,Rn */
	{ u32 v_ = R32(r0); r0 += 4; r10 = v_; } UPD(0x0C06C3F0u, 2);  /* 0C06C3EE mov.l @Rm+,Rn */
	r3 = 0xFFFFFFFu; UPD(0x0C06C3F2u, 1);  /* 0C06C3F0 mov.l @(disp,pc),Rn */
	r10 &= r3;  /* 0C06C3F2 and Rm,Rn */
	T = (r10 & r10) == 0;  /* 0C06C3F4 tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06C452u, 5); goto L_0C06C452; } goto L_0C06C3FA; }  /* 0C06C3F6 bt/s */
L_0C06C3FA: BLKS(0x0C06C3FAu);
	r3 = R32(r2 + 0x2Cu); UPD(0x0C06C3FCu, 2);  /* 0C06C3FA mov.l @(disp,Rm),Rn */
	W32(r14 + 0x4u, r2); UPD(0x0C06C3FEu, 1);  /* 0C06C3FC mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x8u, r3); UPD(0x0C06C400u, 1);  /* 0C06C3FE mov.l Rm,@(disp,Rn) */
L_0C06C400: BLKS(0x0C06C400u);
	{ u32 v_ = R32(r0); r0 += 4; r6 = v_; } UPD(0x0C06C402u, 1);  /* 0C06C400 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r0); r0 += 4; r5 = v_; } UPD(0x0C06C404u, 1);  /* 0C06C402 mov.l @Rm+,Rn */
	r1 = R32(r14 + 0x4u); UPD(0x0C06C406u, 1);  /* 0C06C404 mov.l @(disp,Rm),Rn */
	r4 = R32(r14 + 0x8u); UPD(0x0C06C408u, 1);  /* 0C06C406 mov.l @(disp,Rm),Rn */
	{ u32 v_ = R32(r0); r0 += 4; r13 = v_; } UPD(0x0C06C40Au, 1);  /* 0C06C408 mov.l @Rm+,Rn */
	W32(r14, r6); UPD(0x0C06C40Cu, 1);  /* 0C06C40A mov.l Rm,@Rn */
	r13 += r4;  /* 0C06C40C add Rm,Rn */
	r12 = R32(r1 + 0x28u); UPD(0x0C06C410u, 2);  /* 0C06C40E mov.l @(disp,Rm),Rn */
	r6 = 0x0u;  /* 0C06C410 mov #imm,Rn */
	r12 += r5;  /* 0C06C412 add Rm,Rn */
	r4 = 0x0u;  /* 0C06C414 mov #imm,Rn */
	IF(0x0C06C416u); ;  /* 0C06C416 nop */
	UPD(0x0C06C418u, 4);
L_0C06C418: BLKS(0x0C06C418u);
	T = r8 == r6;  /* 0C06C418 cmp/eq Rm,Rn */
	if (T) { UPD(0x0C06C43Au, 4); goto L_0C06C43A; }  /* 0C06C41A bt */
L_0C06C41C: BLKS(0x0C06C41Cu);
	r3 = r4;  /* 0C06C41C mov Rm,Rn */
	r2 = 0xC38C064u; UPD(0x0C06C420u, 2);  /* 0C06C41E mov.l @(disp,pc),Rn */
	r3 += r2;  /* 0C06C420 add Rm,Rn */
	r7 = R32(r3); UPD(0x0C06C424u, 2);  /* 0C06C422 mov.l @Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C06C424 tst Rm,Rn */
	{ u32 c_ = T; r7 = r6; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06C43Cu, 4); goto L_0C06C43C; } goto L_0C06C42A; }  /* 0C06C426 bt/s */
L_0C06C42A: BLKS(0x0C06C42Au);
	r5 = 0x54u;  /* 0C06C42A mov #imm,Rn */
	IF(0x0C06C42Cu); MACL = r8 * r5;  /* 0C06C42C mul.l Rm,Rn */
	r11 = R32(r3 + 0x4u); UPD(0x0C06C430u, 5);  /* 0C06C42E mov.l @(disp,Rm),Rn */
	IF(0x0C06C430u); r7 = MACL;  /* 0C06C430 sts macl,Rn */
	r7 += r2;  /* 0C06C432 add Rm,Rn */
	r9 = R32(r7 + 0x4u); UPD(0x0C06C436u, 3);  /* 0C06C434 mov.l @(disp,Rm),Rn */
	T = r11 == r9;  /* 0C06C436 cmp/eq Rm,Rn */
	if (T) { UPD(0x0C06C470u, 4); goto L_0C06C470; }  /* 0C06C438 bt */
L_0C06C43A: BLKS(0x0C06C43Au);
	r7 = r6;  /* 0C06C43A mov Rm,Rn */
	UPD(0x0C06C43Cu, 1);
L_0C06C43C: BLKS(0x0C06C43Cu);
	r7 += 0x1u;  /* 0C06C43C add #imm,Rn */
	UPD(0x0C06C43Eu, 1);
L_0C06C43E: BLKS(0x0C06C43Eu);
	r11 = 0xFFu; UPD(0x0C06C440u, 1);  /* 0C06C43E mov.w @(disp,pc),Rn */
	r6 = (u32)(s32)(s16)r7;  /* 0C06C440 exts.w Rm,Rn */
	T = (s32)r6 > (s32)r11;  /* 0C06C442 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r4 += 0x54u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06C418u, 5); goto L_0C06C418; } goto L_0C06C448; }  /* 0C06C444 bf/s */
L_0C06C448: BLKS(0x0C06C448u);
	{ u32 v_ = R32(r0); r0 += 4; r10 = v_; } UPD(0x0C06C44Au, 2);  /* 0C06C448 mov.l @Rm+,Rn */
	r5 = 0xFFFFFFFu; UPD(0x0C06C44Cu, 1);  /* 0C06C44A mov.l @(disp,pc),Rn */
	r10 &= r5;  /* 0C06C44C and Rm,Rn */
	T = (r10 & r10) == 0;  /* 0C06C44E tst Rm,Rn */
	if (!T) { UPD(0x0C06C400u, 5); goto L_0C06C400; }  /* 0C06C450 bf */
L_0C06C452: BLKS(0x0C06C452u);
	r14 += 0x10u;  /* 0C06C452 add #imm,Rn */
	r15 = r14;  /* 0C06C454 mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06C458u, 3);  /* 0C06C456 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C06C45Au, 1);  /* 0C06C458 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06C45Cu, 1);  /* 0C06C45A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06C45Eu, 1);  /* 0C06C45C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06C460u, 1);  /* 0C06C45E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06C462u, 1);  /* 0C06C460 mov.l @Rm+,Rn */
	IF(0x0C06C462u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06C462 rts */
L_0C06C470: BLKS(0x0C06C470u);
	r1 = R32(r3 + 0x8u); UPD(0x0C06C472u, 1);  /* 0C06C470 mov.l @(disp,Rm),Rn */
	r9 = R32(r7 + 0x8u); UPD(0x0C06C474u, 1);  /* 0C06C472 mov.l @(disp,Rm),Rn */
	T = r1 == r9;  /* 0C06C474 cmp/eq Rm,Rn */
	if (!T) { UPD(0x0C06C43Au, 4); goto L_0C06C43A; }  /* 0C06C476 bf */
L_0C06C478: BLKS(0x0C06C478u);
	r3 = R32(r3 + 0x1Cu); UPD(0x0C06C47Au, 1);  /* 0C06C478 mov.l @(disp,Rm),Rn */
	{ u32 v_ = R32(r3); r3 += 4; r5 = v_; } UPD(0x0C06C47Cu, 1);  /* 0C06C47A mov.l @Rm+,Rn */
	T = (r5 & r5) == 0;  /* 0C06C47C tst Rm,Rn */
	if (T) { UPD(0x0C06C43Au, 4); goto L_0C06C43A; }  /* 0C06C47E bt */
L_0C06C480: BLKS(0x0C06C480u);
	W32(r14 + 0xCu, r7); UPD(0x0C06C482u, 1);  /* 0C06C480 mov.l Rm,@(disp,Rn) */
	r11 = 0xC38C064u; UPD(0x0C06C484u, 1);  /* 0C06C482 mov.l @(disp,pc),Rn */
	r11 += r4;  /* 0C06C484 add Rm,Rn */
	IF(0x0C06C486u); ;  /* 0C06C486 nop */
	UPD(0x0C06C488u, 2);
L_0C06C488: BLKS(0x0C06C488u);
	{ u32 v_ = R32(r3); r3 += 4; r9 = v_; } UPD(0x0C06C48Au, 1);  /* 0C06C488 mov.l @Rm+,Rn */
	r1 = R32(r11 + 0x28u); UPD(0x0C06C48Cu, 1);  /* 0C06C48A mov.l @(disp,Rm),Rn */
	{ u32 v_ = R32(r3); r3 += 4; r7 = v_; } UPD(0x0C06C48Eu, 1);  /* 0C06C48C mov.l @Rm+,Rn */
	r1 += r7;  /* 0C06C48E add Rm,Rn */
	{ u32 v_ = R32(r3); r3 += 4; r2 = v_; } UPD(0x0C06C492u, 2);  /* 0C06C490 mov.l @Rm+,Rn */
	r7 = R32(r11 + 0x2Cu); UPD(0x0C06C494u, 1);  /* 0C06C492 mov.l @(disp,Rm),Rn */
	r7 += r2;  /* 0C06C494 add Rm,Rn */
	r2 = r12;  /* 0C06C496 mov Rm,Rn */
	r2 -= r1;  /* 0C06C498 sub Rm,Rn */
	IF(0x0C06C49Au); T = (s32)r2 >= 0;  /* 0C06C49A cmp/pz Rn */
	{ u32 c_ = !T; r1 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06C510u, 7); goto L_0C06C510; } UPD(0x0C06C4A0u, 1); goto L_0C06C4A0; }  /* 0C06C49C bf/s */
L_0C06C4A0: BLKS(0x0C06C4A0u);
	r5 += r10;  /* 0C06C4A0 add Rm,Rn */
	T = (s32)r1 >= (s32)r5;  /* 0C06C4A2 cmp/ge Rm,Rn */
	{ u32 c_ = T; r1 = r13; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06C4B8u, 5); goto L_0C06C4B8; } goto L_0C06C4A8; }  /* 0C06C4A4 bt/s */
L_0C06C4A8: BLKS(0x0C06C4A8u);
	r1 -= r7;  /* 0C06C4A8 sub Rm,Rn */
	IF(0x0C06C4AAu); T = (s32)r1 >= 0;  /* 0C06C4AA cmp/pz Rn */
	if (!T) { UPD(0x0C06C500u, 6); goto L_0C06C500; }  /* 0C06C4AC bf */
L_0C06C4AE: BLKS(0x0C06C4AEu);
	r5 = R32(r14); UPD(0x0C06C4B0u, 1);  /* 0C06C4AE mov.l @Rm,Rn */
	r9 += r5;  /* 0C06C4B0 add Rm,Rn */
	T = (s32)r1 >= (s32)r9;  /* 0C06C4B2 cmp/ge Rm,Rn */
	{ u32 c_ = !T; r1 = 0x4u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C06C4D0u, 5); goto L_0C06C4D0; } UPD(0x0C06C4B8u, 1); goto L_0C06C4B8; }  /* 0C06C4B4 bf/s */
L_0C06C4B8: BLKS(0x0C06C4B8u);
	{ u32 v_ = R32(r3); r3 += 4; r5 = v_; } UPD(0x0C06C4BAu, 1);  /* 0C06C4B8 mov.l @Rm+,Rn */
	T = (r5 & r5) == 0;  /* 0C06C4BA tst Rm,Rn */
	{ u32 c_ = !T; r7 = r6; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06C488u, 4); goto L_0C06C488; } goto L_0C06C4C0; }  /* 0C06C4BC bf/s */
L_0C06C4C0: BLKS(0x0C06C4C0u);
	{ r7 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C06C43Eu, 4); goto L_0C06C43E; }  /* 0C06C4C0 bra */
L_0C06C4D0: BLKS(0x0C06C4D0u);
	r6 = R32(r14 + 0xCu); UPD(0x0C06C4D2u, 1);  /* 0C06C4D0 mov.l @(disp,Rm),Rn */
	r0 = R32(r6 + 0x8u); UPD(0x0C06C4D4u, 1);  /* 0C06C4D2 mov.l @(disp,Rm),Rn */
	r2 = 0x3u;  /* 0C06C4D4 mov #imm,Rn */
	r0 += 0x1u;  /* 0C06C4D6 add #imm,Rn */
	W32(r6 + 0x8u, r0); UPD(0x0C06C4DAu, 3);  /* 0C06C4D8 mov.l Rm,@(disp,Rn) */
	r8 = 0x0u;  /* 0C06C4DA mov #imm,Rn */
	IF(0x0C06C4DCu); ARG0(0x401Du); { s32 s_ = (s32)r1; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C06C4DC shld Rm,Rn */
	r9 = R32(r6 + 0x10u); UPD(0x0C06C4E0u, 3);  /* 0C06C4DE mov.l @(disp,Rm),Rn */
	IF(0x0C06C4E0u); r4 = R32(r0 + r9); UPD(0x0C06C4E2u, 1);  /* 0C06C4E0 mov.l @(r0,Rm),Rn */
	r0 = R32(r6 + 0xCu); UPD(0x0C06C4E4u, 1);  /* 0C06C4E2 mov.l @(disp,Rm),Rn */
	IF(0x0C06C4E4u); ARG0(0x402Du); { s32 s_ = (s32)r2; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C06C4E4 shld Rm,Rn */
	W32(r6 + 0x14u, r4); UPD(0x0C06C4E8u, 2);  /* 0C06C4E6 mov.l Rm,@(disp,Rn) */
	r0 += r4;  /* 0C06C4E8 add Rm,Rn */
	r3 = R32(r0); UPD(0x0C06C4ECu, 2);  /* 0C06C4EA mov.l @Rm,Rn */
	r10 = R32(r14 + 0xCu); UPD(0x0C06C4EEu, 1);  /* 0C06C4EC mov.l @(disp,Rm),Rn */
	W32(r10 + 0x18u, r3); UPD(0x0C06C4F0u, 1);  /* 0C06C4EE mov.l Rm,@(disp,Rn) */
	r12 = 0x20000u; UPD(0x0C06C4F2u, 1);  /* 0C06C4F0 mov.l @(disp,pc),Rn */
	r13 = R32(r0 + 0x4u); UPD(0x0C06C4F4u, 1);  /* 0C06C4F2 mov.l @(disp,Rm),Rn */
	W32(r10 + 0x30u, r12); UPD(0x0C06C4F6u, 1);  /* 0C06C4F4 mov.l Rm,@(disp,Rn) */
	W32(r10 + 0x1Cu, r13); UPD(0x0C06C4F8u, 1);  /* 0C06C4F6 mov.l Rm,@(disp,Rn) */
	{ W32(r11, r8); /* slot mov.l Rm,@Rn */ UPD(0x0C06C452u, 3); goto L_0C06C452; }  /* 0C06C4F8 bra */
L_0C06C500: BLKS(0x0C06C500u);
	{ r1 = 0u - r1; /* slot neg Rm,Rn */ UPD(0x0C06C4AEu, 3); goto L_0C06C4AE; }  /* 0C06C500 bra */
L_0C06C510: BLKS(0x0C06C510u);
	{ r1 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C06C4A0u, 3); goto L_0C06C4A0; }  /* 0C06C510 bra */
}

void f_0C06AA80(sh3_t *c)
{
	LOCALS;
L_0C06AA80: BLKS(0x0C06AA80u);
	r7 = 0x54u;  /* 0C06AA80 mov #imm,Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C06AA82 exts.w Rm,Rn */
	IF(0x0C06AA84u); MACL = r4 * r7;  /* 0C06AA84 mul.l Rm,Rn */
	r6 = 0xC38C064u; UPD(0x0C06AA88u, 5);  /* 0C06AA86 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06AA8Au, 1);  /* 0C06AA88 mov.l Rm,@-Rn */
	IF(0x0C06AA8Au); r7 = MACL;  /* 0C06AA8A sts macl,Rn */
	r7 += r6;  /* 0C06AA8C add Rm,Rn */
	r5 = R32(r7 + 0x30u); UPD(0x0C06AA90u, 3);  /* 0C06AA8E mov.l @(disp,Rm),Rn */
	W32(r7 + 0x28u, r5); UPD(0x0C06AA92u, 1);  /* 0C06AA90 mov.l Rm,@(disp,Rn) */
	r2 = 0xC3929E0u; UPD(0x0C06AA94u, 1);  /* 0C06AA92 mov.l @(disp,pc),Rn */
	r3 = R32(r7 + 0x34u); UPD(0x0C06AA96u, 1);  /* 0C06AA94 mov.l @(disp,Rm),Rn */
	r0 = R32(r2); UPD(0x0C06AA98u, 1);  /* 0C06AA96 mov.l @Rm,Rn */
	r0 += r3;  /* 0C06AA98 add Rm,Rn */
	W32(r7 + 0x2Cu, r0); UPD(0x0C06AA9Cu, 2);  /* 0C06AA9A mov.l Rm,@(disp,Rn) */
	r1 = R32(r7 + 0x3Cu); UPD(0x0C06AA9Eu, 1);  /* 0C06AA9C mov.l @(disp,Rm),Rn */
	r0 = 0xFF000000u; UPD(0x0C06AAA0u, 1);  /* 0C06AA9E mov.l @(disp,pc),Rn */
	T = (r1 & r0) == 0;  /* 0C06AAA0 tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06AAE2u, 4); goto L_0C06AAE2; } goto L_0C06AAA6; }  /* 0C06AAA2 bt/s */
L_0C06AAA6: BLKS(0x0C06AAA6u);
	r2 = R32(r7 + 0x24u); UPD(0x0C06AAA8u, 2);  /* 0C06AAA6 mov.l @(disp,Rm),Rn */
	r3 = 0x0u;  /* 0C06AAA8 mov #imm,Rn */
	r6 = 0x8Fu; UPD(0x0C06AAACu, 2);  /* 0C06AAAA mov.w @(disp,pc),Rn */
	r7 += 0x4Fu;  /* 0C06AAAC add #imm,Rn */
	IF(0x0C06AAAEu); ;  /* 0C06AAAE nop */
	UPD(0x0C06AAB0u, 2);
L_0C06AAB0: BLKS(0x0C06AAB0u);
	r0 = (u32)(s32)(s8)R8(r7); UPD(0x0C06AAB2u, 1);  /* 0C06AAB0 mov.b @Rm,Rn */
	r1 = r0 & 0xFF;  /* 0C06AAB2 extu.b Rm,Rn */
	T = (s32)r3 > (s32)r1;  /* 0C06AAB4 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C06AB10u, 5); goto L_0C06AB10; }  /* 0C06AAB6 bf */
L_0C06AAB8: BLKS(0x0C06AAB8u);
	W32(r2, r1); UPD(0x0C06AABAu, 1);  /* 0C06AAB8 mov.l Rm,@Rn */
L_0C06AABA: BLKS(0x0C06AABAu);
	r5 = r3;  /* 0C06AABA mov Rm,Rn */
	r5 += 0x1u;  /* 0C06AABC add #imm,Rn */
	r3 = (u32)(s32)(s16)r5;  /* 0C06AABE exts.w Rm,Rn */
	T = (s32)r3 > (s32)r6;  /* 0C06AAC0 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r2 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06AAB0u, 7); goto L_0C06AAB0; } goto L_0C06AAC6; }  /* 0C06AAC2 bf/s */
L_0C06AAC6: BLKS(0x0C06AAC6u);
	r7 = 0x54u;  /* 0C06AAC6 mov #imm,Rn */
	IF(0x0C06AAC8u); MACL = r4 * r7;  /* 0C06AAC8 mul.l Rm,Rn */
	r2 = 0xC38C064u; UPD(0x0C06AACCu, 5);  /* 0C06AACA mov.l @(disp,pc),Rn */
	IF(0x0C06AACCu); r0 = MACL;  /* 0C06AACC sts macl,Rn */
	r0 += r2;  /* 0C06AACE add Rm,Rn */
	r1 = r0;  /* 0C06AAD0 mov Rm,Rn */
	r1 += 0x4Fu;  /* 0C06AAD2 add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r1); UPD(0x0C06AAD6u, 5);  /* 0C06AAD4 mov.b @Rm,Rn */
	r4 = 0x90u; UPD(0x0C06AAD8u, 1);  /* 0C06AAD6 mov.w @(disp,pc),Rn */
	r6 += 0x1u;  /* 0C06AAD8 add #imm,Rn */
	r3 = r6 & 0xFF;  /* 0C06AADA extu.b Rm,Rn */
	T = r3 == r4;  /* 0C06AADC cmp/eq Rm,Rn */
	{ u32 c_ = T; W8(r1, r6); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C06AAF0u, 6); goto L_0C06AAF0; } UPD(0x0C06AAE2u, 1); goto L_0C06AAE2; }  /* 0C06AADE bt/s */
L_0C06AAE2: BLKS(0x0C06AAE2u);
	r15 = r14;  /* 0C06AAE2 mov Rm,Rn */
	IF(0x0C06AAE4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C06AAE4 rts */
L_0C06AAF0: BLKS(0x0C06AAF0u);
	r6 = R32(r0 + 0x3Cu); UPD(0x0C06AAF2u, 1);  /* 0C06AAF0 mov.l @(disp,Rm),Rn */
	r4 = 0x0u;  /* 0C06AAF2 mov #imm,Rn */
	r1 = 0xFFFFFFu; UPD(0x0C06AAF6u, 2);  /* 0C06AAF4 mov.l @(disp,pc),Rn */
	r6 &= r1;  /* 0C06AAF6 and Rm,Rn */
	W32(r0 + 0x3Cu, r6); UPD(0x0C06AAFAu, 2);  /* 0C06AAF8 mov.l Rm,@(disp,Rn) */
	r0 += 0x4Au;  /* 0C06AAFA add #imm,Rn */
	r3 = (u32)(s32)(s16)R16(r0); UPD(0x0C06AAFEu, 2);  /* 0C06AAFC mov.w @Rm,Rn */
	r5 = 0xC393048u; UPD(0x0C06AB00u, 1);  /* 0C06AAFE mov.l @(disp,pc),Rn */
	r0 = r3 & 0xFFFF;  /* 0C06AB00 extu.w Rm,Rn */
	{ IF(0x0C06AB04u); W8(r0 + r5, r4); /* slot mov.b Rm,@(r0,Rn) */ UPD(0x0C06AAE2u, 4); goto L_0C06AAE2; }  /* 0C06AB02 bra */
L_0C06AB10: BLKS(0x0C06AB10u);
	{ W32(r2, r3); /* slot mov.l Rm,@Rn */ UPD(0x0C06AABAu, 3); goto L_0C06AABA; }  /* 0C06AB10 bra */
}

/* FUN_0c06ab30 */
void f_0C06AB30(sh3_t *c)
{
	LOCALS;
L_0C06AB30: BLKS(0x0C06AB30u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06AB32u, 1);  /* 0C06AB30 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C06AB34u, 1);  /* 0C06AB32 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C06AB36u, 1);  /* 0C06AB34 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06AB38u, 1);  /* 0C06AB36 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C06AB3Au, 1);  /* 0C06AB38 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C06AB3Cu, 1);  /* 0C06AB3A mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06AB3Eu, 1);  /* 0C06AB3C mov.l Rm,@-Rn */
	r2 = 0xC21CA15u; UPD(0x0C06AB40u, 1);  /* 0C06AB3E mov.l @(disp,pc),Rn */
	IF(0x0C06AB40u); r15 -= 4; W32(r15, PR); UPD(0x0C06AB42u, 1);  /* 0C06AB40 sts.l pr,@-Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C06AB44u, 1);  /* 0C06AB42 mov.b @Rm,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C06AB44 add #imm,Rn */
	T = (r0 & r0) == 0;  /* 0C06AB46 tst Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06AB70u, 5); goto L_0C06AB70; } UPD(0x0C06AB4Cu, 1); goto L_0C06AB4C; }  /* 0C06AB48 bf/s */
L_0C06AB4C: BLKS(0x0C06AB4Cu);
	r14 += 0x8u;  /* 0C06AB4C add #imm,Rn */
	UPD(0x0C06AB4Eu, 1);
L_0C06AB4E: BLKS(0x0C06AB4Eu);
	r15 = r14;  /* 0C06AB4E mov Rm,Rn */
	IF(0x0C06AB50u); PR = R32(r15); r15 += 4; UPD(0x0C06AB52u, 2);  /* 0C06AB50 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06AB54u, 1);  /* 0C06AB52 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C06AB56u, 1);  /* 0C06AB54 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06AB58u, 1);  /* 0C06AB56 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06AB5Au, 1);  /* 0C06AB58 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06AB5Cu, 1);  /* 0C06AB5A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06AB5Eu, 1);  /* 0C06AB5C mov.l @Rm+,Rn */
	IF(0x0C06AB5Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06AB5E rts */
L_0C06AB70: BLKS(0x0C06AB70u);
	r8 = 0xC06AD30u; UPD(0x0C06AB72u, 1);  /* 0C06AB70 mov.l @(disp,pc),Rn */
	IF(0x0C06AB72u); { u32 t_ = r8; PR = 0x0C06AB76u; r4 = 0x3u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C06AD30, 0x0C06AD30u, 0x0C06AB76u); }  /* 0C06AB72 jsr @Rn */
L_0C06AB76: BLKS(0x0C06AB76u);
	T = (r0 & r0) == 0;  /* 0C06AB76 tst Rm,Rn */
	if (T) { UPD(0x0C06AB4Cu, 4); goto L_0C06AB4C; }  /* 0C06AB78 bt */
L_0C06AB7A: BLKS(0x0C06AB7Au);
	r0 = r14;  /* 0C06AB7A mov Rm,Rn */
	r13 = 0xC2755BCu; UPD(0x0C06AB7Eu, 2);  /* 0C06AB7C mov.l @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)R16(r13); UPD(0x0C06AB80u, 1);  /* 0C06AB7E mov.w @Rm,Rn */
	r0 += 0x2u;  /* 0C06AB80 add #imm,Rn */
	W16(r14, r4); UPD(0x0C06AB84u, 2);  /* 0C06AB82 mov.w Rm,@Rn */
	r9 = 0x0u;  /* 0C06AB84 mov #imm,Rn */
	r4 += 0x1u;  /* 0C06AB86 add #imm,Rn */
	W16(r0, r4); UPD(0x0C06AB8Au, 3);  /* 0C06AB88 mov.w Rm,@Rn */
	r11 = 0x54u;  /* 0C06AB8A mov #imm,Rn */
	r3 = (u32)(s32)(s16)R16(r13); UPD(0x0C06AB8Eu, 2);  /* 0C06AB8C mov.w @Rm,Rn */
	r0 += 0x2u;  /* 0C06AB8E add #imm,Rn */
	r3 += 0x2u;  /* 0C06AB90 add #imm,Rn */
	W16(r0, r3); UPD(0x0C06AB94u, 3);  /* 0C06AB92 mov.w Rm,@Rn */
	r12 = 0x54u;  /* 0C06AB94 mov #imm,Rn */
	r10 = r14;  /* 0C06AB96 mov Rm,Rn */
	UPD(0x0C06AB98u, 2);
L_0C06AB98: BLKS(0x0C06AB98u);
	{ u32 v_ = (u32)(s32)(s16)R16(r10); r10 += 2; r8 = v_; } UPD(0x0C06AB9Au, 1);  /* 0C06AB98 mov.w @Rm+,Rn */
	r5 = 0xDu;  /* 0C06AB9A mov #imm,Rn */
	IF(0x0C06AB9Cu); MACL = r8 * r11;  /* 0C06AB9C mul.l Rm,Rn */
	r7 = 0xC38C064u; UPD(0x0C06ABA0u, 4);  /* 0C06AB9E mov.l @(disp,pc),Rn */
	r0 = r9;  /* 0C06ABA0 mov Rm,Rn */
	IF(0x0C06ABA2u); r2 = MACL;  /* 0C06ABA2 sts macl,Rn */
	r6 = 0xC0000000u; UPD(0x0C06ABA6u, 3);  /* 0C06ABA4 mov.l @(disp,pc),Rn */
	r2 += r7;  /* 0C06ABA6 add Rm,Rn */
	W32(r2, r6); UPD(0x0C06ABAAu, 2);  /* 0C06ABA8 mov.l Rm,@Rn */
	T = r0 == 0x2u;  /* 0C06ABAA cmp/eq #imm,r0 */
	W32(r2 + 0x4u, r5); UPD(0x0C06ABAEu, 2);  /* 0C06ABAC mov.l Rm,@(disp,Rn) */
	{ u32 c_ = T; W32(r2 + 0x8u, r9); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C06AC50u, 3); goto L_0C06AC50; } UPD(0x0C06ABB2u, 1); goto L_0C06ABB2; }  /* 0C06ABAE bt/s */
L_0C06ABB2: BLKS(0x0C06ABB2u);
	r1 = 0x0u;  /* 0C06ABB2 mov #imm,Rn */
	UPD(0x0C06ABB4u, 1);
L_0C06ABB4: BLKS(0x0C06ABB4u);
	r7 = 0xC06ACA0u; UPD(0x0C06ABB6u, 1);  /* 0C06ABB4 mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C06ABB6 mov Rm,Rn */
	IF(0x0C06ABB8u); { u32 t_ = r7; PR = 0x0C06ABBCu; W32(r2 + 0xCu, r1); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C06ACA0, 0x0C06ACA0u, 0x0C06ABBCu); }  /* 0C06ABB8 jsr @Rn */
L_0C06ABBC: BLKS(0x0C06ABBCu);
	r5 = 0x3u;  /* 0C06ABBC mov #imm,Rn */
	r3 = r9;  /* 0C06ABBE mov Rm,Rn */
	IF(0x0C06ABC0u); ARG0(0x435Du); { s32 s_ = (s32)r5; if (s_ >= 0) r3 <<= (s_ & 31); else if ((s_ & 31) == 0) r3 = 0; else r3 >>= ((~s_ & 31) + 1); }  /* 0C06ABC0 shld Rm,Rn */
	r4 = 0xC17776Cu; UPD(0x0C06ABC4u, 4);  /* 0C06ABC2 mov.l @(disp,pc),Rn */
	IF(0x0C06ABC4u); MACL = r8 * r12;  /* 0C06ABC4 mul.l Rm,Rn */
	r3 += r4;  /* 0C06ABC6 add Rm,Rn */
	r6 = 0xC38C064u; UPD(0x0C06ABCAu, 4);  /* 0C06ABC8 mov.l @(disp,pc),Rn */
	IF(0x0C06ABCAu); r8 = MACL;  /* 0C06ABCA sts macl,Rn */
	r2 = R32(r3); UPD(0x0C06ABCEu, 2);  /* 0C06ABCC mov.l @Rm,Rn */
	r8 += r6;  /* 0C06ABCE add Rm,Rn */
	W32(r8 + 0x30u, r2); UPD(0x0C06ABD2u, 2);  /* 0C06ABD0 mov.l Rm,@(disp,Rn) */
	r7 = 0x17u;  /* 0C06ABD2 mov #imm,Rn */
	W32(r8 + 0x28u, r2); UPD(0x0C06ABD6u, 2);  /* 0C06ABD4 mov.l Rm,@(disp,Rn) */
	r0 = R32(r3 + 0x4u); UPD(0x0C06ABD8u, 1);  /* 0C06ABD6 mov.l @(disp,Rm),Rn */
	r2 = 0x0u;  /* 0C06ABD8 mov #imm,Rn */
	W32(r8 + 0x34u, r0); UPD(0x0C06ABDCu, 2);  /* 0C06ABDA mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x2Cu, r0); UPD(0x0C06ABDEu, 1);  /* 0C06ABDC mov.l Rm,@(disp,Rn) */
	r8 += 0x44u;  /* 0C06ABDE add #imm,Rn */
	W8(r8, r7); UPD(0x0C06ABE2u, 2);  /* 0C06ABE0 mov.b Rm,@Rn */
	r0 = r9;  /* 0C06ABE2 mov Rm,Rn */
	r6 = 0xC177784u; UPD(0x0C06ABE6u, 2);  /* 0C06ABE4 mov.l @(disp,pc),Rn */
	IF(0x0C06ABE6u); r0 <<= 2;  /* 0C06ABE6 shll2 Rn */
	IF(0x0C06ABE8u); r5 = R32(r0 + r6); UPD(0x0C06ABEAu, 2);  /* 0C06ABE8 mov.l @(r0,Rm),Rn */
	r8 += 0xFFFFFFBCu;  /* 0C06ABEA add #imm,Rn */
	r4 = 0x808080u; UPD(0x0C06ABEEu, 2);  /* 0C06ABEC mov.l @(disp,pc),Rn */
	r0 = r9;  /* 0C06ABEE mov Rm,Rn */
	W32(r8 + 0x38u, r5); UPD(0x0C06ABF2u, 2);  /* 0C06ABF0 mov.l Rm,@(disp,Rn) */
	T = r0 == 0x2u;  /* 0C06ABF2 cmp/eq #imm,r0 */
	W32(r8 + 0x3Cu, r4); UPD(0x0C06ABF6u, 2);  /* 0C06ABF4 mov.l Rm,@(disp,Rn) */
	r8 += 0x4Fu;  /* 0C06ABF6 add #imm,Rn */
	W8(r8, r2); UPD(0x0C06ABFAu, 2);  /* 0C06ABF8 mov.b Rm,@Rn */
	{ u32 c_ = T; r8 += 0xFFFFFFB1u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06AC10u, 3); goto L_0C06AC10; } UPD(0x0C06ABFEu, 1); goto L_0C06ABFE; }  /* 0C06ABFA bt/s */
L_0C06ABFE: BLKS(0x0C06ABFEu);
	r0 = r9;  /* 0C06ABFE mov Rm,Rn */
	UPD(0x0C06AC00u, 1);
L_0C06AC00: BLKS(0x0C06AC00u);
	r0 += 0x1u;  /* 0C06AC00 add #imm,Rn */
	r9 = (u32)(s32)(s16)r0;  /* 0C06AC02 exts.w Rm,Rn */
	r8 = 0x2u;  /* 0C06AC04 mov #imm,Rn */
	T = (s32)r9 > (s32)r8;  /* 0C06AC06 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C06AB98u, 7); goto L_0C06AB98; }  /* 0C06AC08 bf */
L_0C06AC0A: BLKS(0x0C06AC0Au);
	r14 += 0x8u;  /* 0C06AC0A add #imm,Rn */
	{ IF(0x0C06AC0Eu); ; /* slot nop */ UPD(0x0C06AB4Eu, 4); goto L_0C06AB4E; }  /* 0C06AC0C bra */
L_0C06AC10: BLKS(0x0C06AC10u);
	r0 = 0xC0608D0u; UPD(0x0C06AC12u, 1);  /* 0C06AC10 mov.l @(disp,pc),Rn */
	IF(0x0C06AC12u); { u32 t_ = r0; PR = 0x0C06AC16u; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0608D0, 0x0C0608D0u, 0x0C06AC16u); }  /* 0C06AC12 jsr @Rn */
L_0C06AC16: BLKS(0x0C06AC16u);
	T = (r0 & r0) == 0;  /* 0C06AC16 tst Rm,Rn */
	if (T) { UPD(0x0C06ABFEu, 4); goto L_0C06ABFE; }  /* 0C06AC18 bt */
L_0C06AC1A: BLKS(0x0C06AC1Au);
	r0 = (u32)(s32)(s16)R16(r13); UPD(0x0C06AC1Cu, 1);  /* 0C06AC1A mov.w @Rm,Rn */
	r8 += 0x4Au;  /* 0C06AC1C add #imm,Rn */
	W16(r8, r0); UPD(0x0C06AC20u, 2);  /* 0C06AC1E mov.w Rm,@Rn */
	r6 = 0x1u;  /* 0C06AC20 mov #imm,Rn */
	r5 = 0xC393048u; UPD(0x0C06AC24u, 2);  /* 0C06AC22 mov.l @(disp,pc),Rn */
	r4 = 0xAu;  /* 0C06AC24 mov #imm,Rn */
	IF(0x0C06AC26u); W8(r0 + r5, r6); UPD(0x0C06AC28u, 2);  /* 0C06AC26 mov.b Rm,@(r0,Rn) */
	r8 += 0xFFFFFFB6u;  /* 0C06AC28 add #imm,Rn */
	r2 = 0xC224870u; UPD(0x0C06AC2Cu, 2);  /* 0C06AC2A mov.l @(disp,pc),Rn */
	IF(0x0C06AC2Cu); ARG0(0x404Du); { s32 s_ = (s32)r4; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C06AC2C shld Rm,Rn */
	r3 = R32(r8 + 0x3Cu); UPD(0x0C06AC30u, 2);  /* 0C06AC2E mov.l @(disp,Rm),Rn */
	r0 += r2;  /* 0C06AC30 add Rm,Rn */
	r1 = 0x2000000u; UPD(0x0C06AC34u, 2);  /* 0C06AC32 mov.l @(disp,pc),Rn */
	r2 = 0xFFu; UPD(0x0C06AC36u, 1);  /* 0C06AC34 mov.w @(disp,pc),Rn */
	r3 |= r1;  /* 0C06AC36 or Rm,Rn */
	W32(r8 + 0x24u, r0); UPD(0x0C06AC3Au, 2);  /* 0C06AC38 mov.l Rm,@(disp,Rn) */
	r1 = 0x0u;  /* 0C06AC3A mov #imm,Rn */
	W32(r8 + 0x3Cu, r3); UPD(0x0C06AC3Eu, 2);  /* 0C06AC3C mov.l Rm,@(disp,Rn) */
	IF(0x0C06AC3Eu); ;  /* 0C06AC3E nop */
	UPD(0x0C06AC40u, 1);
L_0C06AC40: BLKS(0x0C06AC40u);
	W32(r0, r1); UPD(0x0C06AC42u, 1);  /* 0C06AC40 mov.l Rm,@Rn */
	r1 += 0x1u;  /* 0C06AC42 add #imm,Rn */
	r1 = (u32)(s32)(s16)r1;  /* 0C06AC44 exts.w Rm,Rn */
	T = (s32)r1 > (s32)r2;  /* 0C06AC46 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r0 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06AC40u, 6); goto L_0C06AC40; } goto L_0C06AC4C; }  /* 0C06AC48 bf/s */
L_0C06AC4C: BLKS(0x0C06AC4Cu);
	{ r0 = r9; /* slot mov Rm,Rn */ UPD(0x0C06AC00u, 4); goto L_0C06AC00; }  /* 0C06AC4C bra */
L_0C06AC50: BLKS(0x0C06AC50u);
	r3 = 0xC275DD1u; UPD(0x0C06AC52u, 1);  /* 0C06AC50 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r3); UPD(0x0C06AC54u, 1);  /* 0C06AC52 mov.b @Rm,Rn */
	{ r1 = r0 & 0xFF; /* slot extu.b Rm,Rn */ UPD(0x0C06ABB4u, 3); goto L_0C06ABB4; }  /* 0C06AC54 bra */
}

/* FUN_0c06aca0 */
void f_0C06ACA0(sh3_t *c)
{
	LOCALS;
L_0C06ACA0: BLKS(0x0C06ACA0u);
	r1 = (u32)(s32)(s16)r4;  /* 0C06ACA0 exts.w Rm,Rn */
	r2 = 0x54u;  /* 0C06ACA2 mov #imm,Rn */
	IF(0x0C06ACA4u); MACL = r1 * r2;  /* 0C06ACA4 mul.l Rm,Rn */
	r7 = 0xC38C064u; UPD(0x0C06ACA8u, 5);  /* 0C06ACA6 mov.l @(disp,pc),Rn */
	r0 = 0x3u;  /* 0C06ACA8 mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06ACACu, 2);  /* 0C06ACAA mov.l Rm,@-Rn */
	IF(0x0C06ACACu); r4 = MACL;  /* 0C06ACAC sts macl,Rn */
	r4 += r7;  /* 0C06ACAE add Rm,Rn */
	r5 = R32(r4 + 0x4u); UPD(0x0C06ACB2u, 3);  /* 0C06ACB0 mov.l @(disp,Rm),Rn */
	r1 = 0x4u;  /* 0C06ACB2 mov #imm,Rn */
	IF(0x0C06ACB4u); ARG0(0x450Du); { s32 s_ = (s32)r0; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = 0; else r5 >>= ((~s_ & 31) + 1); }  /* 0C06ACB4 shld Rm,Rn */
	r6 = 0xC177790u; UPD(0x0C06ACB8u, 3);  /* 0C06ACB6 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C06ACB8 mov Rm,Rn */
	r5 += r6;  /* 0C06ACBA add Rm,Rn */
	r3 = R32(r5 + 0x4u); UPD(0x0C06ACBEu, 3);  /* 0C06ACBC mov.l @(disp,Rm),Rn */
	W32(r4 + 0x20u, r3); UPD(0x0C06ACC0u, 1);  /* 0C06ACBE mov.l Rm,@(disp,Rn) */
	r0 = R32(r4 + 0x8u); UPD(0x0C06ACC2u, 1);  /* 0C06ACC0 mov.l @(disp,Rm),Rn */
	r7 = R32(r5); UPD(0x0C06ACC4u, 1);  /* 0C06ACC2 mov.l @Rm,Rn */
	IF(0x0C06ACC4u); ARG0(0x401Du); { s32 s_ = (s32)r1; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C06ACC4 shld Rm,Rn */
	W32(r4 + 0x10u, r7); UPD(0x0C06ACC8u, 2);  /* 0C06ACC6 mov.l Rm,@(disp,Rn) */
	r1 = 0x40u;  /* 0C06ACC8 mov #imm,Rn */
	IF(0x0C06ACCAu); r6 = R32(r0 + r7); UPD(0x0C06ACCCu, 2);  /* 0C06ACCA mov.l @(r0,Rm),Rn */
	r5 = R32(r4 + 0xCu); UPD(0x0C06ACCEu, 1);  /* 0C06ACCC mov.l @(disp,Rm),Rn */
	r0 = 0x3u;  /* 0C06ACCE mov #imm,Rn */
	IF(0x0C06ACD0u); ARG0(0x450Du); { s32 s_ = (s32)r0; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = 0; else r5 >>= ((~s_ & 31) + 1); }  /* 0C06ACD0 shld Rm,Rn */
	W32(r4 + 0x14u, r6); UPD(0x0C06ACD4u, 3);  /* 0C06ACD2 mov.l Rm,@(disp,Rn) */
	r5 += r6;  /* 0C06ACD4 add Rm,Rn */
	r2 = R32(r5); UPD(0x0C06ACD8u, 2);  /* 0C06ACD6 mov.l @Rm,Rn */
	r0 = 0x0u;  /* 0C06ACD8 mov #imm,Rn */
	W32(r4 + 0x18u, r2); UPD(0x0C06ACDCu, 2);  /* 0C06ACDA mov.l Rm,@(disp,Rn) */
	r3 = R32(r5 + 0x4u); UPD(0x0C06ACDEu, 1);  /* 0C06ACDC mov.l @(disp,Rm),Rn */
	W32(r4 + 0x1Cu, r3); UPD(0x0C06ACE0u, 1);  /* 0C06ACDE mov.l Rm,@(disp,Rn) */
	r4 += 0x46u;  /* 0C06ACE0 add #imm,Rn */
	W8(r4, r0); UPD(0x0C06ACE4u, 2);  /* 0C06ACE2 mov.b Rm,@Rn */
	r4 += 0x1u;  /* 0C06ACE4 add #imm,Rn */
	W8(r4, r1); UPD(0x0C06ACE8u, 2);  /* 0C06ACE6 mov.b Rm,@Rn */
	r4 += 0x7u;  /* 0C06ACE8 add #imm,Rn */
	W8(r4, r0); UPD(0x0C06ACECu, 2);  /* 0C06ACEA mov.b Rm,@Rn */
	r4 += 0x2u;  /* 0C06ACEC add #imm,Rn */
	W8(r4, r0); UPD(0x0C06ACF0u, 2);  /* 0C06ACEE mov.b Rm,@Rn */
	r15 = r14;  /* 0C06ACF0 mov Rm,Rn */
	IF(0x0C06ACF2u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C06ACF2 rts */
}

/* FUN_0c06ad00 */
void f_0C06AD00(sh3_t *c)
{
	LOCALS;
L_0C06AD00: BLKS(0x0C06AD00u);
	r7 = (u32)(s32)(s16)r4;  /* 0C06AD00 exts.w Rm,Rn */
	r0 = 0x54u;  /* 0C06AD02 mov #imm,Rn */
	IF(0x0C06AD04u); MACL = r7 * r0;  /* 0C06AD04 mul.l Rm,Rn */
	r6 = 0xC38C064u; UPD(0x0C06AD08u, 5);  /* 0C06AD06 mov.l @(disp,pc),Rn */
	r5 = 0x3u;  /* 0C06AD08 mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06AD0Cu, 2);  /* 0C06AD0A mov.l Rm,@-Rn */
	IF(0x0C06AD0Cu); r0 = MACL;  /* 0C06AD0C sts macl,Rn */
	r0 += r6;  /* 0C06AD0E add Rm,Rn */
	r3 = R32(r0 + 0xCu); UPD(0x0C06AD12u, 3);  /* 0C06AD10 mov.l @(disp,Rm),Rn */
	r14 = r15;  /* 0C06AD12 mov Rm,Rn */
	r4 = R32(r0 + 0x14u); UPD(0x0C06AD16u, 2);  /* 0C06AD14 mov.l @(disp,Rm),Rn */
	IF(0x0C06AD16u); ARG0(0x435Du); { s32 s_ = (s32)r5; if (s_ >= 0) r3 <<= (s_ & 31); else if ((s_ & 31) == 0) r3 = 0; else r3 >>= ((~s_ & 31) + 1); }  /* 0C06AD16 shld Rm,Rn */
	r3 += r4;  /* 0C06AD18 add Rm,Rn */
	r1 = R32(r3); UPD(0x0C06AD1Cu, 3);  /* 0C06AD1A mov.l @Rm,Rn */
	W32(r0 + 0x18u, r1); UPD(0x0C06AD1Eu, 1);  /* 0C06AD1C mov.l Rm,@(disp,Rn) */
	r2 = R32(r3 + 0x4u); UPD(0x0C06AD20u, 1);  /* 0C06AD1E mov.l @(disp,Rm),Rn */
	W32(r0 + 0x1Cu, r2); UPD(0x0C06AD22u, 1);  /* 0C06AD20 mov.l Rm,@(disp,Rn) */
	r15 = r14;  /* 0C06AD22 mov Rm,Rn */
	IF(0x0C06AD24u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C06AD24 rts */
}

/* FUN_0c06ad30 */
void f_0C06AD30(sh3_t *c)
{
	LOCALS;
L_0C06AD30: BLKS(0x0C06AD30u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06AD32u, 1);  /* 0C06AD30 mov.l Rm,@-Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C06AD32 exts.w Rm,Rn */
	r0 = 0x100u; UPD(0x0C06AD36u, 2);  /* 0C06AD34 mov.w @(disp,pc),Rn */
	r7 = 0xC2755BCu; UPD(0x0C06AD38u, 1);  /* 0C06AD36 mov.l @(disp,pc),Rn */
	T = (s32)r4 > (s32)r0;  /* 0C06AD38 cmp/gt Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06AD62u, 4); goto L_0C06AD62; } goto L_0C06AD3E; }  /* 0C06AD3A bt/s */
L_0C06AD3E: BLKS(0x0C06AD3Eu);
	r6 = 0xFFu; UPD(0x0C06AD40u, 2);  /* 0C06AD3E mov.w @(disp,pc),Rn */
	r2 = 0x0u;  /* 0C06AD40 mov #imm,Rn */
	r3 = 0xC38C064u; UPD(0x0C06AD44u, 2);  /* 0C06AD42 mov.l @(disp,pc),Rn */
L_0C06AD44: BLKS(0x0C06AD44u);
	r0 = R32(r3); UPD(0x0C06AD46u, 1);  /* 0C06AD44 mov.l @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C06AD46 tst Rm,Rn */
	{ u32 c_ = !T; r3 += 0x54u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06AD5Cu, 4); goto L_0C06AD5C; } goto L_0C06AD4C; }  /* 0C06AD48 bf/s */
L_0C06AD4C: BLKS(0x0C06AD4Cu);
	r5 = r4;  /* 0C06AD4C mov Rm,Rn */
	W16(r7, r2); UPD(0x0C06AD50u, 3);  /* 0C06AD4E mov.w Rm,@Rn */
	r5 += 0xFFFFFFFFu;  /* 0C06AD50 add #imm,Rn */
	r4 = (u32)(s32)(s16)r5;  /* 0C06AD52 exts.w Rm,Rn */
	r7 += 0x2u;  /* 0C06AD54 add #imm,Rn */
	T = (r4 & r4) == 0;  /* 0C06AD56 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C06AD64u, 7); goto L_0C06AD64; } UPD(0x0C06AD5Cu, 1); goto L_0C06AD5C; }  /* 0C06AD58 bt/s */
L_0C06AD5C: BLKS(0x0C06AD5Cu);
	r2 += 0x1u;  /* 0C06AD5C add #imm,Rn */
	T = (s32)r2 > (s32)r6;  /* 0C06AD5E cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C06AD44u, 5); goto L_0C06AD44; }  /* 0C06AD60 bf */
L_0C06AD62: BLKS(0x0C06AD62u);
	r0 = 0x0u;  /* 0C06AD62 mov #imm,Rn */
	UPD(0x0C06AD64u, 1);
L_0C06AD64: BLKS(0x0C06AD64u);
	r15 = r14;  /* 0C06AD64 mov Rm,Rn */
	IF(0x0C06AD66u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C06AD66 rts */
}

/* FUN_0c06ad80 */
void f_0C06AD80(sh3_t *c)
{
	LOCALS;
L_0C06AD80: BLKS(0x0C06AD80u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06AD82u, 1);  /* 0C06AD80 mov.l Rm,@-Rn */
	r3 = 0x0u;  /* 0C06AD82 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C06AD86u, 2);  /* 0C06AD84 mov.l Rm,@-Rn */
	r8 = 0x0u;  /* 0C06AD86 mov #imm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C06AD8Au, 2);  /* 0C06AD88 mov.l Rm,@-Rn */
	r9 = 0x0u;  /* 0C06AD8A mov #imm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06AD8Eu, 2);  /* 0C06AD8C mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C06AD90u, 1);  /* 0C06AD8E mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06AD92u, 1);  /* 0C06AD90 mov.l Rm,@-Rn */
	r0 = 0xC221064u; UPD(0x0C06AD94u, 1);  /* 0C06AD92 mov.l @(disp,pc),Rn */
	IF(0x0C06AD94u); r15 -= 4; W32(r15, PR); UPD(0x0C06AD96u, 1);  /* 0C06AD94 sts.l pr,@-Rn */
	r11 = r0;  /* 0C06AD96 mov Rm,Rn */
	r2 = 0xC284EBAu; UPD(0x0C06AD9Au, 2);  /* 0C06AD98 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C06AD9A mov Rm,Rn */
	r10 = 0xC38C064u; UPD(0x0C06AD9Eu, 2);  /* 0C06AD9C mov.l @(disp,pc),Rn */
	r12 = 0xC177804u; UPD(0x0C06ADA0u, 1);  /* 0C06AD9E mov.l @(disp,pc),Rn */
	W16(r2, r3); UPD(0x0C06ADA2u, 1);  /* 0C06ADA0 mov.w Rm,@Rn */
	W16(r0, r3); UPD(0x0C06ADA4u, 1);  /* 0C06ADA2 mov.w Rm,@Rn */
L_0C06ADA4: BLKS(0x0C06ADA4u);
	r2 = r8;  /* 0C06ADA4 mov Rm,Rn */
	r2 += r10;  /* 0C06ADA6 add Rm,Rn */
	r0 = R32(r2); UPD(0x0C06ADAAu, 3);  /* 0C06ADA8 mov.l @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C06ADAA tst Rm,Rn */
	if (!T) { UPD(0x0C06AE40u, 4); goto L_0C06AE40; }  /* 0C06ADAC bf */
L_0C06ADAE: BLKS(0x0C06ADAEu);
	r6 = 0xFFu; UPD(0x0C06ADB0u, 1);  /* 0C06ADAE mov.w @(disp,pc),Rn */
	r9 += 0x1u;  /* 0C06ADB0 add #imm,Rn */
	T = (s32)r9 > (s32)r6;  /* 0C06ADB2 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r8 += 0x54u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06ADA4u, 5); goto L_0C06ADA4; } goto L_0C06ADB8; }  /* 0C06ADB4 bf/s */
L_0C06ADB8: BLKS(0x0C06ADB8u);
	r9 = 0x100u; UPD(0x0C06ADBAu, 2);  /* 0C06ADB8 mov.w @(disp,pc),Rn */
	r10 = 0xC38C064u; UPD(0x0C06ADBCu, 1);  /* 0C06ADBA mov.l @(disp,pc),Rn */
	r12 = 0xC26CAE0u; UPD(0x0C06ADBEu, 1);  /* 0C06ADBC mov.l @(disp,pc),Rn */
	r8 = 0x5400u; UPD(0x0C06ADC0u, 1);  /* 0C06ADBE mov.w @(disp,pc),Rn */
	r11 = 0xC177804u; UPD(0x0C06ADC2u, 1);  /* 0C06ADC0 mov.l @(disp,pc),Rn */
	IF(0x0C06ADC2u); ;  /* 0C06ADC2 nop */
	UPD(0x0C06ADC4u, 1);
L_0C06ADC4: BLKS(0x0C06ADC4u);
	r3 = r8;  /* 0C06ADC4 mov Rm,Rn */
	r3 += r10;  /* 0C06ADC6 add Rm,Rn */
	r0 = R32(r3); UPD(0x0C06ADCAu, 3);  /* 0C06ADC8 mov.l @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C06ADCA tst Rm,Rn */
	if (T) { UPD(0x0C06AE02u, 4); goto L_0C06AE02; }  /* 0C06ADCC bt */
L_0C06ADCE: BLKS(0x0C06ADCEu);
	r1 = R32(r3 + 0x28u); UPD(0x0C06ADD0u, 1);  /* 0C06ADCE mov.l @(disp,Rm),Rn */
	r5 = 0xC284EBAu; UPD(0x0C06ADD2u, 1);  /* 0C06ADD0 mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s16)R16(r5); UPD(0x0C06ADD4u, 1);  /* 0C06ADD2 mov.w @Rm,Rn */
	r2 += 0x1u;  /* 0C06ADD4 add #imm,Rn */
	r7 = 0xFFF00000u; UPD(0x0C06ADD8u, 2);  /* 0C06ADD6 mov.l @(disp,pc),Rn */
	T = (s32)r1 >= (s32)r7;  /* 0C06ADD8 cmp/ge Rm,Rn */
	{ u32 c_ = !T; W16(r5, r2); /* slot mov.w Rm,@Rn */ if (c_) { UPD(0x0C06AE20u, 4); goto L_0C06AE20; } UPD(0x0C06ADDEu, 1); goto L_0C06ADDE; }  /* 0C06ADDA bf/s */
L_0C06ADDE: BLKS(0x0C06ADDEu);
	r0 &= 0x10u;  /* 0C06ADDE and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C06ADE0 tst Rm,Rn */
	{ u32 c_ = T; r3 += 0x48u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06AE02u, 5); goto L_0C06AE02; } goto L_0C06ADE6; }  /* 0C06ADE2 bt/s */
L_0C06ADE6: BLKS(0x0C06ADE6u);
	r7 = (u32)(s32)(s8)R8(r3); UPD(0x0C06ADE8u, 2);  /* 0C06ADE6 mov.b @Rm,Rn */
	r0 = 0x4Cu;  /* 0C06ADE8 mov #imm,Rn */
	r6 = r7 & 0xFF;  /* 0C06ADEA extu.b Rm,Rn */
	IF(0x0C06ADECu); MACL = r6 * r0;  /* 0C06ADEC mul.l Rm,Rn */
	IF(0x0C06ADEEu); r0 = MACL;  /* 0C06ADEE sts macl,Rn */
	IF(0x0C06ADF0u); r4 = R32(r0 + r12); UPD(0x0C06ADF2u, 6);  /* 0C06ADF0 mov.l @(r0,Rm),Rn */
	T = (r4 & r4) == 0;  /* 0C06ADF2 tst Rm,Rn */
	{ u32 c_ = T; r3 += 0xFFFFFFB8u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06AE20u, 4); goto L_0C06AE20; } goto L_0C06ADF8; }  /* 0C06ADF4 bt/s */
L_0C06ADF8: BLKS(0x0C06ADF8u);
	r0 = R32(r3 + 0x4u); UPD(0x0C06ADFAu, 2);  /* 0C06ADF8 mov.l @(disp,Rm),Rn */
	IF(0x0C06ADFAu); r0 <<= 2;  /* 0C06ADFA shll2 Rn */
	IF(0x0C06ADFCu); r5 = R32(r0 + r11); UPD(0x0C06ADFEu, 2);  /* 0C06ADFC mov.l @(r0,Rm),Rn */
	IF(0x0C06ADFEu); { u32 t_ = r5; PR = 0x0C06AE02u; r4 = (u32)(s32)(s16)r9; /* slot exts.w Rm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C06AE02u); }  /* 0C06ADFE jsr @Rn */
L_0C06AE02: BLKS(0x0C06AE02u);
	r2 = 0x13Fu; UPD(0x0C06AE04u, 1);  /* 0C06AE02 mov.w @(disp,pc),Rn */
	r9 += 0x1u;  /* 0C06AE04 add #imm,Rn */
	T = (s32)r9 > (s32)r2;  /* 0C06AE06 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r8 += 0x54u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06ADC4u, 5); goto L_0C06ADC4; } goto L_0C06AE0C; }  /* 0C06AE08 bf/s */
L_0C06AE0C: BLKS(0x0C06AE0Cu);
	r15 = r14;  /* 0C06AE0C mov Rm,Rn */
	IF(0x0C06AE0Eu); PR = R32(r15); r15 += 4; UPD(0x0C06AE10u, 3);  /* 0C06AE0E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06AE12u, 1);  /* 0C06AE10 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06AE14u, 1);  /* 0C06AE12 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06AE16u, 1);  /* 0C06AE14 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06AE18u, 1);  /* 0C06AE16 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06AE1Au, 1);  /* 0C06AE18 mov.l @Rm+,Rn */
	IF(0x0C06AE1Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06AE1A rts */
L_0C06AE20: BLKS(0x0C06AE20u);
	r3 = 0xC06B480u; UPD(0x0C06AE22u, 1);  /* 0C06AE20 mov.l @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r9;  /* 0C06AE22 exts.w Rm,Rn */
	r15 = r14;  /* 0C06AE24 mov Rm,Rn */
	IF(0x0C06AE26u); PR = R32(r15); r15 += 4; UPD(0x0C06AE28u, 3);  /* 0C06AE26 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06AE2Au, 1);  /* 0C06AE28 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06AE2Cu, 1);  /* 0C06AE2A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06AE2Eu, 1);  /* 0C06AE2C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06AE30u, 1);  /* 0C06AE2E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06AE32u, 1);  /* 0C06AE30 mov.l @Rm+,Rn */
	IF(0x0C06AE32u); { u32 tv_ = r3; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C06B480u: TAIL(f_0C06B480); default: JUMPD(tv_); } }  /* 0C06AE32 jmp @Rn */
L_0C06AE40: BLKS(0x0C06AE40u);
	r0 = R32(r2 + 0x4u); UPD(0x0C06AE42u, 1);  /* 0C06AE40 mov.l @(disp,Rm),Rn */
	r4 = (u32)(s32)(s16)R16(r11); UPD(0x0C06AE44u, 1);  /* 0C06AE42 mov.w @Rm,Rn */
	IF(0x0C06AE44u); r0 <<= 2;  /* 0C06AE44 shll2 Rn */
	r4 += 0x1u;  /* 0C06AE46 add #imm,Rn */
	IF(0x0C06AE48u); r5 = R32(r0 + r12); UPD(0x0C06AE4Au, 3);  /* 0C06AE48 mov.l @(r0,Rm),Rn */
	W16(r11, r4); UPD(0x0C06AE4Cu, 1);  /* 0C06AE4A mov.w Rm,@Rn */
	IF(0x0C06AE4Cu); { u32 t_ = r5; PR = 0x0C06AE50u; r4 = (u32)(s32)(s16)r9; /* slot exts.w Rm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C06AE50u); }  /* 0C06AE4C jsr @Rn */
L_0C06AE50: BLKS(0x0C06AE50u);
	{ IF(0x0C06AE52u); ; /* slot nop */ UPD(0x0C06ADAEu, 3); goto L_0C06ADAE; }  /* 0C06AE50 bra */
}

void f_0C06AE80(sh3_t *c)
{
	LOCALS;
L_0C06AE80: BLKS(0x0C06AE80u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06AE82u, 1);  /* 0C06AE80 mov.l Rm,@-Rn */
	r2 = 0x54u;  /* 0C06AE82 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C06AE86u, 2);  /* 0C06AE84 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C06AE86 exts.w Rm,Rn */
	IF(0x0C06AE88u); MACL = r9 * r2;  /* 0C06AE88 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06AE8Cu, 4);  /* 0C06AE8A mov.l Rm,@-Rn */
	r0 = 0xC38C064u; UPD(0x0C06AE8Eu, 1);  /* 0C06AE8C mov.l @(disp,pc),Rn */
	IF(0x0C06AE8Eu); r8 = MACL;  /* 0C06AE8E sts macl,Rn */
	IF(0x0C06AE90u); r15 -= 4; W32(r15, PR); UPD(0x0C06AE92u, 2);  /* 0C06AE90 sts.l pr,@-Rn */
	r8 += r0;  /* 0C06AE92 add Rm,Rn */
	r0 = R32(r8); UPD(0x0C06AE96u, 2);  /* 0C06AE94 mov.l @Rm,Rn */
	r2 = 0x4010u; UPD(0x0C06AE98u, 1);  /* 0C06AE96 mov.w @(disp,pc),Rn */
	r0 &= r2;  /* 0C06AE98 and Rm,Rn */
	T = r0 == 0x10u;  /* 0C06AE9A cmp/eq #imm,r0 */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06AEAAu, 5); goto L_0C06AEAA; } goto L_0C06AEA0; }  /* 0C06AE9C bt/s */
L_0C06AEA0: BLKS(0x0C06AEA0u);
	r3 = 0x10u;  /* 0C06AEA0 mov #imm,Rn */
	T = r0 > r3;  /* 0C06AEA2 cmp/hi Rm,Rn */
	{ u32 c_ = T; T = (r0 & r0) == 0; /* slot tst Rm,Rn */ if (c_) { UPD(0x0C06AF30u, 6); goto L_0C06AF30; } goto L_0C06AEA8; }  /* 0C06AEA4 bt/s */
L_0C06AEA8: BLKS(0x0C06AEA8u);
	if (T) { UPD(0x0C06AEC0u, 4); goto L_0C06AEC0; }  /* 0C06AEA8 bt */
L_0C06AEAA: BLKS(0x0C06AEAAu);
	r15 = r14;  /* 0C06AEAA mov Rm,Rn */
	IF(0x0C06AEACu); PR = R32(r15); r15 += 4; UPD(0x0C06AEAEu, 2);  /* 0C06AEAC lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06AEB0u, 1);  /* 0C06AEAE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06AEB2u, 1);  /* 0C06AEB0 mov.l @Rm+,Rn */
	IF(0x0C06AEB2u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06AEB2 rts */
L_0C06AEC0: BLKS(0x0C06AEC0u);
	r2 = R32(r8 + 0x30u); UPD(0x0C06AEC2u, 1);  /* 0C06AEC0 mov.l @(disp,Rm),Rn */
	r8 += 0x40u;  /* 0C06AEC2 add #imm,Rn */
	r5 = R32(r8); UPD(0x0C06AEC6u, 2);  /* 0C06AEC4 mov.l @Rm,Rn */
	T = (s32)r2 > (s32)r5;  /* 0C06AEC6 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r8 += 0xFFFFFFC0u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06AED4u, 4); goto L_0C06AED4; } goto L_0C06AECC; }  /* 0C06AEC8 bf/s */
L_0C06AECC: BLKS(0x0C06AECCu);
	r6 = 0xFFFFF000u; UPD(0x0C06AECEu, 2);  /* 0C06AECC mov.w @(disp,pc),Rn */
	r6 += r2;  /* 0C06AECE add Rm,Rn */
	W32(r8 + 0x30u, r6); UPD(0x0C06AED2u, 2);  /* 0C06AED0 mov.l Rm,@(disp,Rn) */
	r2 = r6;  /* 0C06AED2 mov Rm,Rn */
	UPD(0x0C06AED4u, 1);
L_0C06AED4: BLKS(0x0C06AED4u);
	r3 = R32(r8 + 0x28u); UPD(0x0C06AED6u, 1);  /* 0C06AED4 mov.l @(disp,Rm),Rn */
	r3 += r2;  /* 0C06AED6 add Rm,Rn */
	r2 = R32(r8 + 0x2Cu); UPD(0x0C06AEDAu, 2);  /* 0C06AED8 mov.l @(disp,Rm),Rn */
	r0 = R32(r8 + 0x34u); UPD(0x0C06AEDCu, 1);  /* 0C06AEDA mov.l @(disp,Rm),Rn */
	r7 = 0xFFF40000u; UPD(0x0C06AEDEu, 1);  /* 0C06AEDC mov.l @(disp,pc),Rn */
	r2 += r0;  /* 0C06AEDE add Rm,Rn */
	W32(r8 + 0x28u, r3); UPD(0x0C06AEE2u, 2);  /* 0C06AEE0 mov.l Rm,@(disp,Rn) */
	T = (s32)r3 >= (s32)r7;  /* 0C06AEE2 cmp/ge Rm,Rn */
	{ u32 c_ = !T; W32(r8 + 0x2Cu, r2); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C06AF20u, 4); goto L_0C06AF20; } UPD(0x0C06AEE8u, 1); goto L_0C06AEE8; }  /* 0C06AEE4 bf/s */
L_0C06AEE8: BLKS(0x0C06AEE8u);
	r4 = 0x3000000u; UPD(0x0C06AEEAu, 1);  /* 0C06AEE8 mov.l @(disp,pc),Rn */
	T = (s32)r3 > (s32)r4;  /* 0C06AEEA cmp/gt Rm,Rn */
	if (T) { UPD(0x0C06AF20u, 4); goto L_0C06AF20; }  /* 0C06AEEC bt */
L_0C06AEEE: BLKS(0x0C06AEEEu);
	r3 = 0x153FFFFu; UPD(0x0C06AEF0u, 1);  /* 0C06AEEE mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r3;  /* 0C06AEF0 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C06AF20u, 4); goto L_0C06AF20; }  /* 0C06AEF2 bf */
L_0C06AEF4: BLKS(0x0C06AEF4u);
	r5 = 0x2AC0000u; UPD(0x0C06AEF6u, 1);  /* 0C06AEF4 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r5;  /* 0C06AEF6 cmp/gt Rm,Rn */
	{ u32 c_ = T; r6 = r8; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06AF20u, 4); goto L_0C06AF20; } goto L_0C06AEFC; }  /* 0C06AEF8 bt/s */
L_0C06AEFC: BLKS(0x0C06AEFCu);
	r6 += 0x44u;  /* 0C06AEFC add #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r6); UPD(0x0C06AF00u, 3);  /* 0C06AEFE mov.b @Rm,Rn */
	r0 = 0x13u;  /* 0C06AF00 mov #imm,Rn */
	r7 = r3 & 0xFF;  /* 0C06AF02 extu.b Rm,Rn */
	r2 = 0xC286298u; UPD(0x0C06AF06u, 3);  /* 0C06AF04 mov.l @(disp,pc),Rn */
	T = r0 >= r7;  /* 0C06AF06 cmp/hs Rm,Rn */
	r0 = R32(r2); UPD(0x0C06AF0Au, 2);  /* 0C06AF08 mov.l @Rm,Rn */
	IF(0x0C06AF0Au); r8 = T;  /* 0C06AF0A movt Rn */
	r0 &= 0x3u;  /* 0C06AF0C and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C06AF0E tst Rm,Rn */
	IF(0x0C06AF10u); r9 = T;  /* 0C06AF10 movt Rn */
	r8 &= r9;  /* 0C06AF12 and Rm,Rn */
	T = (r8 & r8) == 0;  /* 0C06AF14 tst Rm,Rn */
	if (T) { UPD(0x0C06AEAAu, 9); goto L_0C06AEAA; }  /* 0C06AF16 bt */
L_0C06AF18: BLKS(0x0C06AF18u);
	r4 = r3;  /* 0C06AF18 mov Rm,Rn */
	r4 += 0x1u;  /* 0C06AF1A add #imm,Rn */
	{ W8(r6, r4); /* slot mov.b Rm,@Rn */ UPD(0x0C06AEAAu, 5); goto L_0C06AEAA; }  /* 0C06AF1C bra */
L_0C06AF20: BLKS(0x0C06AF20u);
	r5 = 0xC06B480u; UPD(0x0C06AF22u, 1);  /* 0C06AF20 mov.l @(disp,pc),Rn */
	r4 = r9;  /* 0C06AF22 mov Rm,Rn */
	r15 = r14;  /* 0C06AF24 mov Rm,Rn */
	IF(0x0C06AF26u); PR = R32(r15); r15 += 4; UPD(0x0C06AF28u, 3);  /* 0C06AF26 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06AF2Au, 1);  /* 0C06AF28 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06AF2Cu, 1);  /* 0C06AF2A mov.l @Rm+,Rn */
	IF(0x0C06AF2Cu); { u32 tv_ = r5; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C06B480u: TAIL(f_0C06B480); default: JUMPD(tv_); } }  /* 0C06AF2C jmp @Rn */
L_0C06AF30: BLKS(0x0C06AF30u);
	r4 = 0x4000u; UPD(0x0C06AF32u, 1);  /* 0C06AF30 mov.w @(disp,pc),Rn */
	T = r0 == r4;  /* 0C06AF32 cmp/eq Rm,Rn */
	if (!T) { UPD(0x0C06AEAAu, 4); goto L_0C06AEAA; }  /* 0C06AF34 bf */
L_0C06AF36: BLKS(0x0C06AF36u);
	r0 = 0xC06C380u; UPD(0x0C06AF38u, 1);  /* 0C06AF36 mov.l @(disp,pc),Rn */
	IF(0x0C06AF38u); { u32 t_ = r0; PR = 0x0C06AF3Cu; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C06C380, 0x0C06C380u, 0x0C06AF3Cu); }  /* 0C06AF38 jsr @Rn */
L_0C06AF3C: BLKS(0x0C06AF3Cu);
	IF(0x0C06AF3Cu); T = (s32)r0 >= 0;  /* 0C06AF3C cmp/pz Rn */
	if (!T) { UPD(0x0C06AF70u, 4); goto L_0C06AF70; }  /* 0C06AF3E bf */
L_0C06AF40: BLKS(0x0C06AF40u);
	r8 += 0x4Au;  /* 0C06AF40 add #imm,Rn */
	r2 = (u32)(s32)(s16)R16(r8); UPD(0x0C06AF44u, 2);  /* 0C06AF42 mov.w @Rm,Rn */
	r9 = 0xB4u; UPD(0x0C06AF46u, 1);  /* 0C06AF44 mov.w @(disp,pc),Rn */
	r8 += 0xFFFFFFB6u;  /* 0C06AF46 add #imm,Rn */
	IF(0x0C06AF48u); MACL = r2 * r9;  /* 0C06AF48 mul.l Rm,Rn */
	r5 = 0xC26CD40u; UPD(0x0C06AF4Cu, 4);  /* 0C06AF4A mov.l @(disp,pc),Rn */
	IF(0x0C06AF4Cu); r6 = MACL;  /* 0C06AF4C sts macl,Rn */
	r6 += r5;  /* 0C06AF4E add Rm,Rn */
	r3 = R32(r6 + 0x24u); UPD(0x0C06AF52u, 3);  /* 0C06AF50 mov.l @(disp,Rm),Rn */
	r1 = R32(r8 + 0x30u); UPD(0x0C06AF54u, 1);  /* 0C06AF52 mov.l @(disp,Rm),Rn */
	r3 += r1;  /* 0C06AF54 add Rm,Rn */
	W32(r8 + 0x28u, r3); UPD(0x0C06AF58u, 2);  /* 0C06AF56 mov.l Rm,@(disp,Rn) */
	r4 = R32(r8 + 0x34u); UPD(0x0C06AF5Au, 1);  /* 0C06AF58 mov.l @(disp,Rm),Rn */
	r0 = R32(r6 + 0x28u); UPD(0x0C06AF5Cu, 1);  /* 0C06AF5A mov.l @(disp,Rm),Rn */
	r0 += r4;  /* 0C06AF5C add Rm,Rn */
	{ W32(r8 + 0x2Cu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C06AEAAu, 4); goto L_0C06AEAA; }  /* 0C06AF5E bra */
L_0C06AF70: BLKS(0x0C06AF70u);
	r8 += 0x44u;  /* 0C06AF70 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r8); UPD(0x0C06AF74u, 2);  /* 0C06AF72 mov.b @Rm,Rn */
	r0 = 0xC0A9D50u; UPD(0x0C06AF76u, 1);  /* 0C06AF74 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFBCu;  /* 0C06AF76 add #imm,Rn */
	r6 = r1 & 0xFF;  /* 0C06AF78 extu.b Rm,Rn */
	r4 = R32(r8 + 0x28u); UPD(0x0C06AF7Cu, 3);  /* 0C06AF7A mov.l @(disp,Rm),Rn */
	IF(0x0C06AF7Cu); { u32 t_ = r0; PR = 0x0C06AF80u; r5 = R32(r8 + 0x2Cu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0A9D50, 0x0C0A9D50u, 0x0C06AF80u); }  /* 0C06AF7C jsr @Rn */
L_0C06AF80: BLKS(0x0C06AF80u);
	T = (r0 & r0) == 0;  /* 0C06AF80 tst Rm,Rn */
	if (T) { UPD(0x0C06AF20u, 4); goto L_0C06AF20; }  /* 0C06AF82 bt */
L_0C06AF84: BLKS(0x0C06AF84u);
	r2 = R32(r8 + 0x28u); UPD(0x0C06AF86u, 1);  /* 0C06AF84 mov.l @(disp,Rm),Rn */
	r6 = 0x1500000u; UPD(0x0C06AF88u, 1);  /* 0C06AF86 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r6;  /* 0C06AF88 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C06AF20u, 4); goto L_0C06AF20; }  /* 0C06AF8A bt */
L_0C06AF8C: BLKS(0x0C06AF8Cu);
	r3 = 0xFFF00000u; UPD(0x0C06AF8Eu, 1);  /* 0C06AF8C mov.l @(disp,pc),Rn */
	T = (s32)r2 >= (s32)r3;  /* 0C06AF8E cmp/ge Rm,Rn */
	if (!T) { UPD(0x0C06AF20u, 4); goto L_0C06AF20; }  /* 0C06AF90 bf */
L_0C06AF92: BLKS(0x0C06AF92u);
	r0 = R32(r8); UPD(0x0C06AF94u, 1);  /* 0C06AF92 mov.l @Rm,Rn */
	r9 = 0x0u;  /* 0C06AF94 mov #imm,Rn */
	r7 = 0xFFFFBFFFu; UPD(0x0C06AF98u, 2);  /* 0C06AF96 mov.w @(disp,pc),Rn */
	r2 = 0x20000u; UPD(0x0C06AF9Au, 1);  /* 0C06AF98 mov.l @(disp,pc),Rn */
	r0 &= r7;  /* 0C06AF9A and Rm,Rn */
	r0 |= 0x4u;  /* 0C06AF9C or #imm,r0 */
	W32(r8, r0); UPD(0x0C06AFA0u, 3);  /* 0C06AF9E mov.l Rm,@Rn */
	W32(r8 + 0x30u, r2); UPD(0x0C06AFA2u, 1);  /* 0C06AFA0 mov.l Rm,@(disp,Rn) */
	{ W32(r8 + 0x34u, r9); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C06AEAAu, 3); goto L_0C06AEAA; }  /* 0C06AFA2 bra */
}

void f_0C06AFF0(sh3_t *c)
{
	LOCALS;
L_0C06AFF0: BLKS(0x0C06AFF0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06AFF2u, 1);  /* 0C06AFF0 mov.l Rm,@-Rn */
	r0 = 0x54u;  /* 0C06AFF2 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C06AFF6u, 2);  /* 0C06AFF4 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C06AFF8u, 1);  /* 0C06AFF6 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06AFFAu, 1);  /* 0C06AFF8 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C06AFFCu, 1);  /* 0C06AFFA mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C06AFFC exts.w Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C06B000u, 2);  /* 0C06AFFE mov.l Rm,@-Rn */
	IF(0x0C06B000u); MACL = r11 * r0;  /* 0C06B000 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06B004u, 3);  /* 0C06B002 mov.l Rm,@-Rn */
	r0 = 0xC38C064u; UPD(0x0C06B006u, 1);  /* 0C06B004 mov.l @(disp,pc),Rn */
	IF(0x0C06B006u); r8 = MACL;  /* 0C06B006 sts macl,Rn */
	IF(0x0C06B008u); r15 -= 4; W32(r15, PR); UPD(0x0C06B00Au, 2);  /* 0C06B008 sts.l pr,@-Rn */
	r8 += r0;  /* 0C06B00A add Rm,Rn */
	r0 = R32(r8); UPD(0x0C06B00Eu, 2);  /* 0C06B00C mov.l @Rm,Rn */
	r0 &= 0x10u;  /* 0C06B00E and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C06B010 tst Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06B01Eu, 5); goto L_0C06B01E; } goto L_0C06B016; }  /* 0C06B012 bf/s */
L_0C06B016: BLKS(0x0C06B016u);
	r3 = R32(r8 + 0x28u); UPD(0x0C06B018u, 2);  /* 0C06B016 mov.l @(disp,Rm),Rn */
	r1 = 0x2000u; UPD(0x0C06B01Au, 1);  /* 0C06B018 mov.w @(disp,pc),Rn */
	r3 += r1;  /* 0C06B01A add Rm,Rn */
	W32(r8 + 0x28u, r3); UPD(0x0C06B01Eu, 2);  /* 0C06B01C mov.l Rm,@(disp,Rn) */
L_0C06B01E: BLKS(0x0C06B01Eu);
	r5 = R32(r8 + 0x38u); UPD(0x0C06B020u, 1);  /* 0C06B01E mov.l @(disp,Rm),Rn */
	r4 = 0x2000000u; UPD(0x0C06B022u, 1);  /* 0C06B020 mov.l @(disp,pc),Rn */
	T = (r5 & r4) == 0;  /* 0C06B022 tst Rm,Rn */
	{ u32 c_ = !T; r2 = 0x54u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C06B0A0u, 4); goto L_0C06B0A0; } goto L_0C06B028; }  /* 0C06B024 bf/s */
L_0C06B028: BLKS(0x0C06B028u);
	r7 = r8;  /* 0C06B028 mov Rm,Rn */
	r7 += 0x4Fu;  /* 0C06B02A add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C06B02Eu, 4);  /* 0C06B02C mov.b @Rm,Rn */
	r6 += 0xFFFFFFFFu;  /* 0C06B02E add #imm,Rn */
	r2 = r6 & 0xFF;  /* 0C06B030 extu.b Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C06B032 tst Rm,Rn */
	{ u32 c_ = T; W8(r7, r6); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C06B050u, 6); goto L_0C06B050; } UPD(0x0C06B038u, 1); goto L_0C06B038; }  /* 0C06B034 bt/s */
L_0C06B038: BLKS(0x0C06B038u);
	r15 = r14;  /* 0C06B038 mov Rm,Rn */
	IF(0x0C06B03Au); PR = R32(r15); r15 += 4; UPD(0x0C06B03Cu, 2);  /* 0C06B03A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06B03Eu, 1);  /* 0C06B03C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C06B040u, 1);  /* 0C06B03E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06B042u, 1);  /* 0C06B040 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06B044u, 1);  /* 0C06B042 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06B046u, 1);  /* 0C06B044 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06B048u, 1);  /* 0C06B046 mov.l @Rm+,Rn */
	IF(0x0C06B048u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06B048 rts */
L_0C06B050: BLKS(0x0C06B050u);
	r9 = 0xC0608D0u; UPD(0x0C06B052u, 1);  /* 0C06B050 mov.l @(disp,pc),Rn */
	r4 = 0x1u;  /* 0C06B052 mov #imm,Rn */
	r10 = 0x204FFFFu; UPD(0x0C06B056u, 2);  /* 0C06B054 mov.l @(disp,pc),Rn */
	IF(0x0C06B056u); { u32 t_ = r9; PR = 0x0C06B05Au; W32(r8 + 0x38u, r10); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0608D0, 0x0C0608D0u, 0x0C06B05Au); }  /* 0C06B056 jsr @Rn */
L_0C06B05A: BLKS(0x0C06B05Au);
	T = (r0 & r0) == 0;  /* 0C06B05A tst Rm,Rn */
	if (T) { UPD(0x0C06B038u, 4); goto L_0C06B038; }  /* 0C06B05C bt */
L_0C06B05E: BLKS(0x0C06B05Eu);
	r8 += 0x4Au;  /* 0C06B05E add #imm,Rn */
	r0 = 0xC2755BCu; UPD(0x0C06B062u, 2);  /* 0C06B060 mov.l @(disp,pc),Rn */
	r5 = (u32)(s32)(s16)R16(r0); UPD(0x0C06B064u, 1);  /* 0C06B062 mov.w @Rm,Rn */
	r1 = 0x1u;  /* 0C06B064 mov #imm,Rn */
	W16(r8, r5); UPD(0x0C06B068u, 2);  /* 0C06B066 mov.w Rm,@Rn */
	r0 = (u32)(s32)(s16)r5;  /* 0C06B068 exts.w Rm,Rn */
	r4 = 0xC393048u; UPD(0x0C06B06Cu, 2);  /* 0C06B06A mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFB6u;  /* 0C06B06C add #imm,Rn */
	IF(0x0C06B06Eu); W8(r0 + r4, r1); UPD(0x0C06B070u, 2);  /* 0C06B06E mov.b Rm,@(r0,Rn) */
	r3 = 0xAu;  /* 0C06B070 mov #imm,Rn */
	IF(0x0C06B072u); ARG0(0x403Du); { s32 s_ = (s32)r3; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C06B072 shld Rm,Rn */
	r11 = R32(r8 + 0x3Cu); UPD(0x0C06B076u, 3);  /* 0C06B074 mov.l @(disp,Rm),Rn */
	r10 = 0x0u;  /* 0C06B076 mov #imm,Rn */
	r13 = 0xC224870u; UPD(0x0C06B07Au, 2);  /* 0C06B078 mov.l @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C06B07A mov #imm,Rn */
	r12 = 0x1000000u; UPD(0x0C06B07Eu, 2);  /* 0C06B07C mov.l @(disp,pc),Rn */
	r0 += r13;  /* 0C06B07E add Rm,Rn */
	r11 |= r12;  /* 0C06B080 or Rm,Rn */
	W32(r8 + 0x24u, r0); UPD(0x0C06B084u, 3);  /* 0C06B082 mov.l Rm,@(disp,Rn) */
	r9 = r0;  /* 0C06B084 mov Rm,Rn */
	W32(r8 + 0x3Cu, r11); UPD(0x0C06B088u, 2);  /* 0C06B086 mov.l Rm,@(disp,Rn) */
	r2 = 0x37u;  /* 0C06B088 mov #imm,Rn */
	IF(0x0C06B08Au); ;  /* 0C06B08A nop */
	UPD(0x0C06B08Cu, 2);
L_0C06B08C: BLKS(0x0C06B08Cu);
	r8 = r10;  /* 0C06B08C mov Rm,Rn */
	W32(r9, r3); UPD(0x0C06B090u, 2);  /* 0C06B08E mov.l Rm,@Rn */
	r8 += 0x1u;  /* 0C06B090 add #imm,Rn */
	r10 = (u32)(s32)(s16)r8;  /* 0C06B092 exts.w Rm,Rn */
	T = (s32)r10 > (s32)r2;  /* 0C06B094 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r9 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06B08Cu, 6); goto L_0C06B08C; } goto L_0C06B09A; }  /* 0C06B096 bf/s */
L_0C06B09A: BLKS(0x0C06B09Au);
	{ IF(0x0C06B09Cu); ; /* slot nop */ UPD(0x0C06B038u, 4); goto L_0C06B038; }  /* 0C06B09A bra */
L_0C06B0A0: BLKS(0x0C06B0A0u);
	IF(0x0C06B0A0u); MACL = r11 * r2;  /* 0C06B0A0 mul.l Rm,Rn */
	r6 = 0xC38C064u; UPD(0x0C06B0A4u, 3);  /* 0C06B0A2 mov.l @(disp,pc),Rn */
	IF(0x0C06B0A4u); r7 = MACL;  /* 0C06B0A4 sts macl,Rn */
	r7 += r6;  /* 0C06B0A6 add Rm,Rn */
	r3 = R32(r7 + 0x38u); UPD(0x0C06B0AAu, 3);  /* 0C06B0A8 mov.l @(disp,Rm),Rn */
	r9 = 0x403u; UPD(0x0C06B0ACu, 1);  /* 0C06B0AA mov.w @(disp,pc),Rn */
	r10 = r3 & 0xFFFF;  /* 0C06B0AC extu.w Rm,Rn */
	T = r10 > r9;  /* 0C06B0AE cmp/hi Rm,Rn */
	if (T) { UPD(0x0C06B0D0u, 5); goto L_0C06B0D0; }  /* 0C06B0B0 bt */
L_0C06B0B2: BLKS(0x0C06B0B2u);
	r11 = R32(r7 + 0x3Cu); UPD(0x0C06B0B4u, 1);  /* 0C06B0B2 mov.l @(disp,Rm),Rn */
	r6 = 0xFF000000u; UPD(0x0C06B0B6u, 1);  /* 0C06B0B4 mov.l @(disp,pc),Rn */
	T = (r11 & r6) == 0;  /* 0C06B0B6 tst Rm,Rn */
	if (T) { UPD(0x0C06B0C8u, 4); goto L_0C06B0C8; }  /* 0C06B0B8 bt */
L_0C06B0BA: BLKS(0x0C06B0BAu);
	r7 += 0x4Au;  /* 0C06B0BA add #imm,Rn */
	r3 = (u32)(s32)(s16)R16(r7); UPD(0x0C06B0BEu, 2);  /* 0C06B0BC mov.w @Rm,Rn */
	r13 = 0x0u;  /* 0C06B0BE mov #imm,Rn */
	r12 = 0xC393048u; UPD(0x0C06B0C2u, 2);  /* 0C06B0C0 mov.l @(disp,pc),Rn */
	r0 = r3 & 0xFFFF;  /* 0C06B0C2 extu.w Rm,Rn */
	IF(0x0C06B0C4u); W8(r0 + r12, r13); UPD(0x0C06B0C6u, 2);  /* 0C06B0C4 mov.b Rm,@(r0,Rn) */
	r7 += 0xFFFFFFB6u;  /* 0C06B0C6 add #imm,Rn */
	UPD(0x0C06B0C8u, 1);
L_0C06B0C8: BLKS(0x0C06B0C8u);
	r4 = 0x0u;  /* 0C06B0C8 mov #imm,Rn */
	{ W32(r7, r4); /* slot mov.l Rm,@Rn */ UPD(0x0C06B038u, 4); goto L_0C06B038; }  /* 0C06B0CA bra */
L_0C06B0D0: BLKS(0x0C06B0D0u);
	r0 = 0xFFFFFBFCu; UPD(0x0C06B0D2u, 1);  /* 0C06B0D0 mov.w @(disp,pc),Rn */
	r1 = R32(r7 + 0x3Cu); UPD(0x0C06B0D4u, 1);  /* 0C06B0D2 mov.l @(disp,Rm),Rn */
	r3 += r0;  /* 0C06B0D4 add Rm,Rn */
	r5 = 0xFF000000u; UPD(0x0C06B0D8u, 2);  /* 0C06B0D6 mov.l @(disp,pc),Rn */
	T = (r1 & r5) == 0;  /* 0C06B0D8 tst Rm,Rn */
	{ u32 c_ = T; W32(r7 + 0x38u, r3); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C06B038u, 4); goto L_0C06B038; } UPD(0x0C06B0DEu, 1); goto L_0C06B0DE; }  /* 0C06B0DA bt/s */
L_0C06B0DE: BLKS(0x0C06B0DEu);
	r8 = r7;  /* 0C06B0DE mov Rm,Rn */
	r9 = R32(r7 + 0x24u); UPD(0x0C06B0E2u, 2);  /* 0C06B0E0 mov.l @(disp,Rm),Rn */
	r8 += 0x4Fu;  /* 0C06B0E2 add #imm,Rn */
	r7 = (u32)(s32)(s8)R8(r8); UPD(0x0C06B0E6u, 2);  /* 0C06B0E4 mov.b @Rm,Rn */
	r10 = 0x0u;  /* 0C06B0E6 mov #imm,Rn */
	r7 += 0x1u;  /* 0C06B0E8 add #imm,Rn */
	r12 = 0xC058030u; UPD(0x0C06B0ECu, 3);  /* 0C06B0EA mov.l @(disp,pc),Rn */
	r13 = r6;  /* 0C06B0EC mov Rm,Rn */
	W8(r8, r7); UPD(0x0C06B0F0u, 2);  /* 0C06B0EE mov.b Rm,@Rn */
L_0C06B0F0: BLKS(0x0C06B0F0u);
	r7 = 0x54u;  /* 0C06B0F0 mov #imm,Rn */
	IF(0x0C06B0F2u); MACL = r11 * r7;  /* 0C06B0F2 mul.l Rm,Rn */
	r6 = 0xC21F880u; UPD(0x0C06B0F6u, 4);  /* 0C06B0F4 mov.l @(disp,pc),Rn */
	r2 = 0x5u;  /* 0C06B0F6 mov #imm,Rn */
	IF(0x0C06B0F8u); r5 = MACL;  /* 0C06B0F8 sts macl,Rn */
	r5 += r13;  /* 0C06B0FA add Rm,Rn */
	r5 += 0x4Fu;  /* 0C06B0FC add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r5); UPD(0x0C06B100u, 5);  /* 0C06B0FE mov.b @Rm,Rn */
	r8 = r9;  /* 0C06B100 mov Rm,Rn */
	r4 = R32(r6); UPD(0x0C06B104u, 2);  /* 0C06B102 mov.l @Rm,Rn */
	r5 = r0 & 0xFF;  /* 0C06B104 extu.b Rm,Rn */
	r4 += r10;  /* 0C06B106 add Rm,Rn */
	IF(0x0C06B108u); r5 <<= 16;  /* 0C06B108 shll16 Rn */
	IF(0x0C06B10Au); ARG0(0x442Du); { s32 s_ = (s32)r2; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = 0; else r4 >>= ((~s_ & 31) + 1); }  /* 0C06B10A shld Rm,Rn */
	IF(0x0C06B10Cu); { u32 t_ = r12; PR = 0x0C06B110u; IF(0x0C06B10Eu); r5 >>= 2; /* slot shlr2 Rn */ UPD(t_, 6); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C06B110u); }  /* 0C06B10C jsr @Rn */
L_0C06B110: BLKS(0x0C06B110u);
	r3 = 0xFFFF0000u; UPD(0x0C06B112u, 1);  /* 0C06B110 mov.l @(disp,pc),Rn */
	r6 = r10;  /* 0C06B112 mov Rm,Rn */
	r3 &= r0;  /* 0C06B114 and Rm,Rn */
	r6 += 0x1u;  /* 0C06B116 add #imm,Rn */
	r10 = (u32)(s32)(s16)r6;  /* 0C06B118 exts.w Rm,Rn */
	r2 = 0x37u;  /* 0C06B11A mov #imm,Rn */
	W32(r8, r3); UPD(0x0C06B11Eu, 6);  /* 0C06B11C mov.l Rm,@Rn */
	T = (s32)r10 > (s32)r2;  /* 0C06B11E cmp/gt Rm,Rn */
	{ u32 c_ = !T; r9 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06B0F0u, 4); goto L_0C06B0F0; } goto L_0C06B124; }  /* 0C06B120 bf/s */
L_0C06B124: BLKS(0x0C06B124u);
	{ IF(0x0C06B126u); ; /* slot nop */ UPD(0x0C06B038u, 4); goto L_0C06B038; }  /* 0C06B124 bra */
}

void f_0C06B160(sh3_t *c)
{
	LOCALS;
L_0C06B160: BLKS(0x0C06B160u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06B162u, 1);  /* 0C06B160 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C06B164u, 1);  /* 0C06B162 mov.l Rm,@-Rn */
	r8 = 0x54u;  /* 0C06B164 mov #imm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C06B168u, 2);  /* 0C06B166 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06B16Au, 1);  /* 0C06B168 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C06B16Cu, 1);  /* 0C06B16A mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C06B16C exts.w Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C06B170u, 2);  /* 0C06B16E mov.l Rm,@-Rn */
	IF(0x0C06B170u); MACL = r11 * r8;  /* 0C06B170 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06B174u, 3);  /* 0C06B172 mov.l Rm,@-Rn */
	r7 = 0xC38C064u; UPD(0x0C06B176u, 1);  /* 0C06B174 mov.l @(disp,pc),Rn */
	IF(0x0C06B176u); r8 = MACL;  /* 0C06B176 sts macl,Rn */
	IF(0x0C06B178u); r15 -= 4; W32(r15, PR); UPD(0x0C06B17Au, 2);  /* 0C06B178 sts.l pr,@-Rn */
	r8 += r7;  /* 0C06B17A add Rm,Rn */
	r8 += 0x4Cu;  /* 0C06B17C add #imm,Rn */
	r6 = (u32)(s32)(s16)R16(r8); UPD(0x0C06B180u, 3);  /* 0C06B17E mov.w @Rm,Rn */
	r5 = 0x280u; UPD(0x0C06B182u, 1);  /* 0C06B180 mov.w @(disp,pc),Rn */
	r8 += 0xFFFFFFB4u;  /* 0C06B182 add #imm,Rn */
	IF(0x0C06B184u); MACL = r6 * r5;  /* 0C06B184 mul.l Rm,Rn */
	r2 = 0xC283794u; UPD(0x0C06B188u, 4);  /* 0C06B186 mov.l @(disp,pc),Rn */
	IF(0x0C06B188u); r4 = MACL;  /* 0C06B188 sts macl,Rn */
	r4 += r2;  /* 0C06B18A add Rm,Rn */
	r0 = R32(r4 + 0x10u); UPD(0x0C06B18Eu, 3);  /* 0C06B18C mov.l @(disp,Rm),Rn */
	r3 = R32(r8 + 0x30u); UPD(0x0C06B190u, 1);  /* 0C06B18E mov.l @(disp,Rm),Rn */
	r0 += r3;  /* 0C06B190 add Rm,Rn */
	W32(r8 + 0x28u, r0); UPD(0x0C06B194u, 2);  /* 0C06B192 mov.l Rm,@(disp,Rn) */
	r1 = R32(r8 + 0x34u); UPD(0x0C06B196u, 1);  /* 0C06B194 mov.l @(disp,Rm),Rn */
	r0 = R32(r4 + 0x14u); UPD(0x0C06B198u, 1);  /* 0C06B196 mov.l @(disp,Rm),Rn */
	r0 += r1;  /* 0C06B198 add Rm,Rn */
	W32(r8 + 0x2Cu, r0); UPD(0x0C06B19Cu, 2);  /* 0C06B19A mov.l Rm,@(disp,Rn) */
	r0 = R32(r8 + 0xCu); UPD(0x0C06B19Eu, 1);  /* 0C06B19C mov.l @(disp,Rm),Rn */
	T = r0 == 0xFu;  /* 0C06B19E cmp/eq #imm,r0 */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06B1AEu, 4); goto L_0C06B1AE; } goto L_0C06B1A4; }  /* 0C06B1A0 bt/s */
L_0C06B1A4: BLKS(0x0C06B1A4u);
	r9 = 0xC06AD00u; UPD(0x0C06B1A6u, 2);  /* 0C06B1A4 mov.l @(disp,pc),Rn */
	r0 += 0x1u;  /* 0C06B1A6 add #imm,Rn */
	W32(r8 + 0xCu, r0); UPD(0x0C06B1AAu, 2);  /* 0C06B1A8 mov.l Rm,@(disp,Rn) */
	IF(0x0C06B1AAu); { u32 t_ = r9; PR = 0x0C06B1AEu; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C06AD00, 0x0C06AD00u, 0x0C06B1AEu); }  /* 0C06B1AA jsr @Rn */
L_0C06B1AE: BLKS(0x0C06B1AEu);
	r12 = R32(r8 + 0x38u); UPD(0x0C06B1B0u, 1);  /* 0C06B1AE mov.l @(disp,Rm),Rn */
	r10 = 0x2000000u; UPD(0x0C06B1B2u, 1);  /* 0C06B1B0 mov.l @(disp,pc),Rn */
	T = (r12 & r10) == 0;  /* 0C06B1B2 tst Rm,Rn */
	{ u32 c_ = !T; r9 = 0x54u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C06B230u, 4); goto L_0C06B230; } goto L_0C06B1B8; }  /* 0C06B1B4 bf/s */
L_0C06B1B8: BLKS(0x0C06B1B8u);
	r1 = r8;  /* 0C06B1B8 mov Rm,Rn */
	r1 += 0x4Fu;  /* 0C06B1BA add #imm,Rn */
	r13 = (u32)(s32)(s8)R8(r1); UPD(0x0C06B1BEu, 4);  /* 0C06B1BC mov.b @Rm,Rn */
	r13 += 0xFFFFFFFFu;  /* 0C06B1BE add #imm,Rn */
	r11 = r13 & 0xFF;  /* 0C06B1C0 extu.b Rm,Rn */
	T = (r11 & r11) == 0;  /* 0C06B1C2 tst Rm,Rn */
	{ u32 c_ = T; W8(r1, r13); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C06B1E0u, 6); goto L_0C06B1E0; } UPD(0x0C06B1C8u, 1); goto L_0C06B1C8; }  /* 0C06B1C4 bt/s */
L_0C06B1C8: BLKS(0x0C06B1C8u);
	r15 = r14;  /* 0C06B1C8 mov Rm,Rn */
	IF(0x0C06B1CAu); PR = R32(r15); r15 += 4; UPD(0x0C06B1CCu, 2);  /* 0C06B1CA lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06B1CEu, 1);  /* 0C06B1CC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C06B1D0u, 1);  /* 0C06B1CE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06B1D2u, 1);  /* 0C06B1D0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06B1D4u, 1);  /* 0C06B1D2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06B1D6u, 1);  /* 0C06B1D4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06B1D8u, 1);  /* 0C06B1D6 mov.l @Rm+,Rn */
	IF(0x0C06B1D8u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06B1D8 rts */
L_0C06B1E0: BLKS(0x0C06B1E0u);
	r4 = 0x204FFFFu; UPD(0x0C06B1E2u, 1);  /* 0C06B1E0 mov.l @(disp,pc),Rn */
	r9 = 0xC0608D0u; UPD(0x0C06B1E4u, 1);  /* 0C06B1E2 mov.l @(disp,pc),Rn */
	W32(r8 + 0x38u, r4); UPD(0x0C06B1E6u, 1);  /* 0C06B1E4 mov.l Rm,@(disp,Rn) */
	IF(0x0C06B1E6u); { u32 t_ = r9; PR = 0x0C06B1EAu; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0608D0, 0x0C0608D0u, 0x0C06B1EAu); }  /* 0C06B1E6 jsr @Rn */
L_0C06B1EA: BLKS(0x0C06B1EAu);
	T = (r0 & r0) == 0;  /* 0C06B1EA tst Rm,Rn */
	if (T) { UPD(0x0C06B1C8u, 4); goto L_0C06B1C8; }  /* 0C06B1EC bt */
L_0C06B1EE: BLKS(0x0C06B1EEu);
	r8 += 0x4Au;  /* 0C06B1EE add #imm,Rn */
	r12 = 0xC2755BCu; UPD(0x0C06B1F2u, 2);  /* 0C06B1F0 mov.l @(disp,pc),Rn */
	r10 = (u32)(s32)(s16)R16(r12); UPD(0x0C06B1F4u, 1);  /* 0C06B1F2 mov.w @Rm,Rn */
	r7 = 0x1u;  /* 0C06B1F4 mov #imm,Rn */
	W16(r8, r10); UPD(0x0C06B1F8u, 2);  /* 0C06B1F6 mov.w Rm,@Rn */
	r0 = (u32)(s32)(s16)r10;  /* 0C06B1F8 exts.w Rm,Rn */
	r6 = 0xC393048u; UPD(0x0C06B1FCu, 2);  /* 0C06B1FA mov.l @(disp,pc),Rn */
	r5 = 0xAu;  /* 0C06B1FC mov #imm,Rn */
	IF(0x0C06B1FEu); W8(r0 + r6, r7); UPD(0x0C06B200u, 2);  /* 0C06B1FE mov.b Rm,@(r0,Rn) */
	r8 += 0xFFFFFFB6u;  /* 0C06B200 add #imm,Rn */
	r2 = 0xC224870u; UPD(0x0C06B204u, 2);  /* 0C06B202 mov.l @(disp,pc),Rn */
	IF(0x0C06B204u); ARG0(0x405Du); { s32 s_ = (s32)r5; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C06B204 shld Rm,Rn */
	r0 += r2;  /* 0C06B206 add Rm,Rn */
	W32(r8 + 0x24u, r0); UPD(0x0C06B20Au, 3);  /* 0C06B208 mov.l Rm,@(disp,Rn) */
	r9 = r0;  /* 0C06B20A mov Rm,Rn */
	r0 = R32(r8 + 0x3Cu); UPD(0x0C06B20Eu, 2);  /* 0C06B20C mov.l @(disp,Rm),Rn */
	r10 = 0x0u;  /* 0C06B20E mov #imm,Rn */
	r3 = 0x3000000u; UPD(0x0C06B212u, 2);  /* 0C06B210 mov.l @(disp,pc),Rn */
	r2 = 0x27u;  /* 0C06B212 mov #imm,Rn */
	r0 |= r3;  /* 0C06B214 or Rm,Rn */
	W32(r8 + 0x3Cu, r0); UPD(0x0C06B218u, 3);  /* 0C06B216 mov.l Rm,@(disp,Rn) */
	r3 = 0x0u;  /* 0C06B218 mov #imm,Rn */
	IF(0x0C06B21Au); ;  /* 0C06B21A nop */
	UPD(0x0C06B21Cu, 2);
L_0C06B21C: BLKS(0x0C06B21Cu);
	r8 = r10;  /* 0C06B21C mov Rm,Rn */
	W32(r9, r3); UPD(0x0C06B220u, 2);  /* 0C06B21E mov.l Rm,@Rn */
	r8 += 0x1u;  /* 0C06B220 add #imm,Rn */
	r10 = (u32)(s32)(s16)r8;  /* 0C06B222 exts.w Rm,Rn */
	T = (s32)r10 > (s32)r2;  /* 0C06B224 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r9 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06B21Cu, 6); goto L_0C06B21C; } goto L_0C06B22A; }  /* 0C06B226 bf/s */
L_0C06B22A: BLKS(0x0C06B22Au);
	{ IF(0x0C06B22Cu); ; /* slot nop */ UPD(0x0C06B1C8u, 4); goto L_0C06B1C8; }  /* 0C06B22A bra */
L_0C06B230: BLKS(0x0C06B230u);
	IF(0x0C06B230u); MACL = r11 * r9;  /* 0C06B230 mul.l Rm,Rn */
	r6 = 0xC38C064u; UPD(0x0C06B234u, 3);  /* 0C06B232 mov.l @(disp,pc),Rn */
	IF(0x0C06B234u); r7 = MACL;  /* 0C06B234 sts macl,Rn */
	r7 += r6;  /* 0C06B236 add Rm,Rn */
	r3 = R32(r7 + 0x38u); UPD(0x0C06B23Au, 3);  /* 0C06B238 mov.l @(disp,Rm),Rn */
	r13 = 0x403u; UPD(0x0C06B23Cu, 1);  /* 0C06B23A mov.w @(disp,pc),Rn */
	r1 = r3 & 0xFFFF;  /* 0C06B23C extu.w Rm,Rn */
	T = r1 > r13;  /* 0C06B23E cmp/hi Rm,Rn */
	if (T) { UPD(0x0C06B260u, 5); goto L_0C06B260; }  /* 0C06B240 bt */
L_0C06B242: BLKS(0x0C06B242u);
	r4 = R32(r7 + 0x3Cu); UPD(0x0C06B244u, 1);  /* 0C06B242 mov.l @(disp,Rm),Rn */
	r11 = 0xFF000000u; UPD(0x0C06B246u, 1);  /* 0C06B244 mov.l @(disp,pc),Rn */
	T = (r4 & r11) == 0;  /* 0C06B246 tst Rm,Rn */
	if (T) { UPD(0x0C06B258u, 4); goto L_0C06B258; }  /* 0C06B248 bt */
L_0C06B24A: BLKS(0x0C06B24Au);
	r7 += 0x4Au;  /* 0C06B24A add #imm,Rn */
	r2 = (u32)(s32)(s16)R16(r7); UPD(0x0C06B24Eu, 2);  /* 0C06B24C mov.w @Rm,Rn */
	r5 = 0x0u;  /* 0C06B24E mov #imm,Rn */
	r3 = 0xC393048u; UPD(0x0C06B252u, 2);  /* 0C06B250 mov.l @(disp,pc),Rn */
	r0 = r2 & 0xFFFF;  /* 0C06B252 extu.w Rm,Rn */
	IF(0x0C06B254u); W8(r0 + r3, r5); UPD(0x0C06B256u, 2);  /* 0C06B254 mov.b Rm,@(r0,Rn) */
	r7 += 0xFFFFFFB6u;  /* 0C06B256 add #imm,Rn */
	UPD(0x0C06B258u, 1);
L_0C06B258: BLKS(0x0C06B258u);
	r0 = 0x0u;  /* 0C06B258 mov #imm,Rn */
	{ W32(r7, r0); /* slot mov.l Rm,@Rn */ UPD(0x0C06B1C8u, 4); goto L_0C06B1C8; }  /* 0C06B25A bra */
L_0C06B260: BLKS(0x0C06B260u);
	r8 = 0xFFFFFBFCu; UPD(0x0C06B262u, 1);  /* 0C06B260 mov.w @(disp,pc),Rn */
	r12 = R32(r7 + 0x3Cu); UPD(0x0C06B264u, 1);  /* 0C06B262 mov.l @(disp,Rm),Rn */
	r3 += r8;  /* 0C06B264 add Rm,Rn */
	r10 = 0xFF000000u; UPD(0x0C06B268u, 2);  /* 0C06B266 mov.l @(disp,pc),Rn */
	T = (r12 & r10) == 0;  /* 0C06B268 tst Rm,Rn */
	{ u32 c_ = T; W32(r7 + 0x38u, r3); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C06B1C8u, 4); goto L_0C06B1C8; } UPD(0x0C06B26Eu, 1); goto L_0C06B26E; }  /* 0C06B26A bt/s */
L_0C06B26E: BLKS(0x0C06B26Eu);
	r13 = r7;  /* 0C06B26E mov Rm,Rn */
	r9 = R32(r7 + 0x24u); UPD(0x0C06B272u, 2);  /* 0C06B270 mov.l @(disp,Rm),Rn */
	r13 += 0x4Fu;  /* 0C06B272 add #imm,Rn */
	r7 = (u32)(s32)(s8)R8(r13); UPD(0x0C06B276u, 2);  /* 0C06B274 mov.b @Rm,Rn */
	r10 = 0x0u;  /* 0C06B276 mov #imm,Rn */
	r7 += 0x1u;  /* 0C06B278 add #imm,Rn */
	W8(r13, r7); UPD(0x0C06B27Cu, 3);  /* 0C06B27A mov.b Rm,@Rn */
	r12 = 0xC058030u; UPD(0x0C06B27Eu, 1);  /* 0C06B27C mov.l @(disp,pc),Rn */
	r13 = r6;  /* 0C06B27E mov Rm,Rn */
	UPD(0x0C06B280u, 1);
L_0C06B280: BLKS(0x0C06B280u);
	r0 = 0x54u;  /* 0C06B280 mov #imm,Rn */
	IF(0x0C06B282u); MACL = r11 * r0;  /* 0C06B282 mul.l Rm,Rn */
	r6 = 0xC21F880u; UPD(0x0C06B286u, 4);  /* 0C06B284 mov.l @(disp,pc),Rn */
	r7 = 0x5u;  /* 0C06B286 mov #imm,Rn */
	IF(0x0C06B288u); r5 = MACL;  /* 0C06B288 sts macl,Rn */
	r5 += r13;  /* 0C06B28A add Rm,Rn */
	r5 += 0x4Fu;  /* 0C06B28C add #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r5); UPD(0x0C06B290u, 5);  /* 0C06B28E mov.b @Rm,Rn */
	r8 = r9;  /* 0C06B290 mov Rm,Rn */
	r4 = R32(r6); UPD(0x0C06B294u, 2);  /* 0C06B292 mov.l @Rm,Rn */
	r5 = r2 & 0xFF;  /* 0C06B294 extu.b Rm,Rn */
	r4 += r10;  /* 0C06B296 add Rm,Rn */
	IF(0x0C06B298u); r5 <<= 16;  /* 0C06B298 shll16 Rn */
	IF(0x0C06B29Au); ARG0(0x447Du); { s32 s_ = (s32)r7; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = 0; else r4 >>= ((~s_ & 31) + 1); }  /* 0C06B29A shld Rm,Rn */
	IF(0x0C06B29Cu); { u32 t_ = r12; PR = 0x0C06B2A0u; IF(0x0C06B29Eu); r5 >>= 2; /* slot shlr2 Rn */ UPD(t_, 6); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C06B2A0u); }  /* 0C06B29C jsr @Rn */
L_0C06B2A0: BLKS(0x0C06B2A0u);
	r3 = 0xFFFF0000u; UPD(0x0C06B2A2u, 1);  /* 0C06B2A0 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C06B2A2 mov Rm,Rn */
	r3 &= r0;  /* 0C06B2A4 and Rm,Rn */
	r4 += 0x1u;  /* 0C06B2A6 add #imm,Rn */
	r10 = (u32)(s32)(s16)r4;  /* 0C06B2A8 exts.w Rm,Rn */
	r6 = 0x27u;  /* 0C06B2AA mov #imm,Rn */
	W32(r8, r3); UPD(0x0C06B2AEu, 6);  /* 0C06B2AC mov.l Rm,@Rn */
	T = (s32)r10 > (s32)r6;  /* 0C06B2AE cmp/gt Rm,Rn */
	{ u32 c_ = !T; r9 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06B280u, 4); goto L_0C06B280; } goto L_0C06B2B4; }  /* 0C06B2B0 bf/s */
L_0C06B2B4: BLKS(0x0C06B2B4u);
	{ IF(0x0C06B2B6u); ; /* slot nop */ UPD(0x0C06B1C8u, 4); goto L_0C06B1C8; }  /* 0C06B2B4 bra */
}

void f_0C06B300(sh3_t *c)
{
	LOCALS;
L_0C06B300: BLKS(0x0C06B300u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06B302u, 1);  /* 0C06B300 mov.l Rm,@-Rn */
	r5 = 0x54u;  /* 0C06B302 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C06B306u, 2);  /* 0C06B304 mov.l Rm,@-Rn */
	r1 = 0x1u;  /* 0C06B306 mov #imm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C06B30Au, 2);  /* 0C06B308 mov.l Rm,@-Rn */
	r3 = 0xFFFFFFFFu;  /* 0C06B30A mov #imm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06B30Eu, 2);  /* 0C06B30C mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C06B30E exts.w Rm,Rn */
	IF(0x0C06B310u); MACL = r11 * r5;  /* 0C06B310 mul.l Rm,Rn */
	r4 = 0xC38C064u; UPD(0x0C06B314u, 4);  /* 0C06B312 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06B316u, 1);  /* 0C06B314 mov.l Rm,@-Rn */
	IF(0x0C06B316u); r8 = MACL;  /* 0C06B316 sts macl,Rn */
	r8 += r4;  /* 0C06B318 add Rm,Rn */
	IF(0x0C06B31Au); r15 -= 4; W32(r15, PR); UPD(0x0C06B31Cu, 3);  /* 0C06B31A sts.l pr,@-Rn */
	r9 = r8;  /* 0C06B31C mov Rm,Rn */
	r9 += 0x4Fu;  /* 0C06B31E add #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r9); UPD(0x0C06B322u, 3);  /* 0C06B320 mov.b @Rm,Rn */
	r4 = 0x1u;  /* 0C06B322 mov #imm,Rn */
	r4 ^= r2;  /* 0C06B324 xor Rm,Rn */
	r2 = R32(r8 + 0xCu); UPD(0x0C06B328u, 3);  /* 0C06B326 mov.l @(disp,Rm),Rn */
	r4 &= r1;  /* 0C06B328 and Rm,Rn */
	r0 = r2;  /* 0C06B32A mov Rm,Rn */
	T = r0 == 0x8u;  /* 0C06B32C cmp/eq #imm,r0 */
	{ u32 t_ = 0u - r3, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r0 = r_; }  /* 0C06B32E negc Rm,Rn */
	r4 &= r0;  /* 0C06B330 and Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C06B332 tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06B33Cu, 9); goto L_0C06B33C; } goto L_0C06B338; }  /* 0C06B334 bt/s */
L_0C06B338: BLKS(0x0C06B338u);
	{ r2 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C06B440u, 4); goto L_0C06B440; }  /* 0C06B338 bra */
L_0C06B33C: BLKS(0x0C06B33Cu);
	r7 = R32(r8 + 0x28u); UPD(0x0C06B33Eu, 1);  /* 0C06B33C mov.l @(disp,Rm),Rn */
L_0C06B33E: BLKS(0x0C06B33Eu);
	r10 = 0x2000u; UPD(0x0C06B340u, 1);  /* 0C06B33E mov.w @(disp,pc),Rn */
	r7 += r10;  /* 0C06B340 add Rm,Rn */
	r3 = R32(r8 + 0x38u); UPD(0x0C06B344u, 2);  /* 0C06B342 mov.l @(disp,Rm),Rn */
	r10 = 0x2000000u; UPD(0x0C06B346u, 1);  /* 0C06B344 mov.l @(disp,pc),Rn */
	T = (r3 & r10) == 0;  /* 0C06B346 tst Rm,Rn */
	{ u32 c_ = !T; W32(r8 + 0x28u, r7); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C06B3C0u, 4); goto L_0C06B3C0; } UPD(0x0C06B34Cu, 1); goto L_0C06B34C; }  /* 0C06B348 bf/s */
L_0C06B34C: BLKS(0x0C06B34Cu);
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C06B34Eu, 1);  /* 0C06B34C mov.b @Rm,Rn */
	r0 += 0xFFFFFFFFu;  /* 0C06B34E add #imm,Rn */
	W8(r9, r0); UPD(0x0C06B352u, 2);  /* 0C06B350 mov.b Rm,@Rn */
	r9 = r0 & 0xFF;  /* 0C06B352 extu.b Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C06B354 tst Rm,Rn */
	if (T) { UPD(0x0C06B370u, 5); goto L_0C06B370; }  /* 0C06B356 bt */
L_0C06B358: BLKS(0x0C06B358u);
	r15 = r14;  /* 0C06B358 mov Rm,Rn */
	IF(0x0C06B35Au); PR = R32(r15); r15 += 4; UPD(0x0C06B35Cu, 2);  /* 0C06B35A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06B35Eu, 1);  /* 0C06B35C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06B360u, 1);  /* 0C06B35E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06B362u, 1);  /* 0C06B360 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06B364u, 1);  /* 0C06B362 mov.l @Rm+,Rn */
	IF(0x0C06B364u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06B364 rts */
L_0C06B370: BLKS(0x0C06B370u);
	r9 = 0xC0608D0u; UPD(0x0C06B372u, 1);  /* 0C06B370 mov.l @(disp,pc),Rn */
	r3 |= r10;  /* 0C06B372 or Rm,Rn */
	W32(r8 + 0x38u, r3); UPD(0x0C06B376u, 2);  /* 0C06B374 mov.l Rm,@(disp,Rn) */
	IF(0x0C06B376u); { u32 t_ = r9; PR = 0x0C06B37Au; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0608D0, 0x0C0608D0u, 0x0C06B37Au); }  /* 0C06B376 jsr @Rn */
L_0C06B37A: BLKS(0x0C06B37Au);
	T = (r0 & r0) == 0;  /* 0C06B37A tst Rm,Rn */
	if (T) { UPD(0x0C06B358u, 4); goto L_0C06B358; }  /* 0C06B37C bt */
L_0C06B37E: BLKS(0x0C06B37Eu);
	r8 += 0x4Au;  /* 0C06B37E add #imm,Rn */
	r6 = 0xC2755BCu; UPD(0x0C06B382u, 2);  /* 0C06B380 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s16)R16(r6); UPD(0x0C06B384u, 1);  /* 0C06B382 mov.w @Rm,Rn */
	r1 = 0x1u;  /* 0C06B384 mov #imm,Rn */
	W16(r8, r0); UPD(0x0C06B388u, 2);  /* 0C06B386 mov.w Rm,@Rn */
	r4 = 0xAu;  /* 0C06B388 mov #imm,Rn */
	r5 = 0xC393048u; UPD(0x0C06B38Cu, 2);  /* 0C06B38A mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFB6u;  /* 0C06B38C add #imm,Rn */
	IF(0x0C06B38Eu); W8(r0 + r5, r1); UPD(0x0C06B390u, 2);  /* 0C06B38E mov.b Rm,@(r0,Rn) */
	r3 = R32(r8 + 0x3Cu); UPD(0x0C06B392u, 1);  /* 0C06B390 mov.l @(disp,Rm),Rn */
	IF(0x0C06B392u); ARG0(0x404Du); { s32 s_ = (s32)r4; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C06B392 shld Rm,Rn */
	r2 = 0xC224870u; UPD(0x0C06B396u, 2);  /* 0C06B394 mov.l @(disp,pc),Rn */
	r3 |= r10;  /* 0C06B396 or Rm,Rn */
	r0 += r2;  /* 0C06B398 add Rm,Rn */
	W32(r8 + 0x3Cu, r3); UPD(0x0C06B39Cu, 3);  /* 0C06B39A mov.l Rm,@(disp,Rn) */
	r2 = 0x0u;  /* 0C06B39C mov #imm,Rn */
	W32(r8 + 0x24u, r0); UPD(0x0C06B3A0u, 2);  /* 0C06B39E mov.l Rm,@(disp,Rn) */
	r3 = 0x3Fu;  /* 0C06B3A0 mov #imm,Rn */
	IF(0x0C06B3A2u); ;  /* 0C06B3A2 nop */
	UPD(0x0C06B3A4u, 2);
L_0C06B3A4: BLKS(0x0C06B3A4u);
	W32(r0, r2); UPD(0x0C06B3A6u, 1);  /* 0C06B3A4 mov.l Rm,@Rn */
	r8 = r2;  /* 0C06B3A6 mov Rm,Rn */
	r8 += 0x1u;  /* 0C06B3A8 add #imm,Rn */
	r2 = (u32)(s32)(s16)r8;  /* 0C06B3AA exts.w Rm,Rn */
	T = (s32)r2 > (s32)r3;  /* 0C06B3AC cmp/gt Rm,Rn */
	{ u32 c_ = !T; r0 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06B3A4u, 7); goto L_0C06B3A4; } goto L_0C06B3B2; }  /* 0C06B3AE bf/s */
L_0C06B3B2: BLKS(0x0C06B3B2u);
	r10 = 0x54u;  /* 0C06B3B2 mov #imm,Rn */
	IF(0x0C06B3B4u); MACL = r11 * r10;  /* 0C06B3B4 mul.l Rm,Rn */
	r0 = 0xC38C0B3u; UPD(0x0C06B3B8u, 5);  /* 0C06B3B6 mov.l @(disp,pc),Rn */
	r7 = 0x40u;  /* 0C06B3B8 mov #imm,Rn */
	IF(0x0C06B3BAu); r11 = MACL;  /* 0C06B3BA sts macl,Rn */
	{ IF(0x0C06B3BEu); W8(r0 + r11, r7); /* slot mov.b Rm,@(r0,Rn) */ UPD(0x0C06B358u, 5); goto L_0C06B358; }  /* 0C06B3BC bra */
L_0C06B3C0: BLKS(0x0C06B3C0u);
	r0 = 0x403u; UPD(0x0C06B3C2u, 1);  /* 0C06B3C0 mov.w @(disp,pc),Rn */
	r4 = r3 & 0xFFFF;  /* 0C06B3C2 extu.w Rm,Rn */
	T = r4 > r0;  /* 0C06B3C4 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C06B3E0u, 5); goto L_0C06B3E0; }  /* 0C06B3C6 bt */
L_0C06B3C8: BLKS(0x0C06B3C8u);
	r3 = 0x0u;  /* 0C06B3C8 mov #imm,Rn */
	r5 = R32(r8 + 0x3Cu); UPD(0x0C06B3CCu, 2);  /* 0C06B3CA mov.l @(disp,Rm),Rn */
	r9 = 0xFF000000u; UPD(0x0C06B3CEu, 1);  /* 0C06B3CC mov.l @(disp,pc),Rn */
	T = (r5 & r9) == 0;  /* 0C06B3CE tst Rm,Rn */
	{ u32 c_ = T; W32(r8, r3); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C06B358u, 4); goto L_0C06B358; } UPD(0x0C06B3D4u, 1); goto L_0C06B3D4; }  /* 0C06B3D0 bt/s */
L_0C06B3D4: BLKS(0x0C06B3D4u);
	r8 += 0x4Au;  /* 0C06B3D4 add #imm,Rn */
	r1 = (u32)(s32)(s16)R16(r8); UPD(0x0C06B3D8u, 2);  /* 0C06B3D6 mov.w @Rm,Rn */
	r2 = 0xC393048u; UPD(0x0C06B3DAu, 1);  /* 0C06B3D8 mov.l @(disp,pc),Rn */
	r0 = r1 & 0xFFFF;  /* 0C06B3DA extu.w Rm,Rn */
	{ IF(0x0C06B3DEu); W8(r0 + r2, r3); /* slot mov.b Rm,@(r0,Rn) */ UPD(0x0C06B358u, 4); goto L_0C06B358; }  /* 0C06B3DC bra */
L_0C06B3E0: BLKS(0x0C06B3E0u);
	r7 = 0xFFFFFBFCu; UPD(0x0C06B3E2u, 1);  /* 0C06B3E0 mov.w @(disp,pc),Rn */
	r3 += r7;  /* 0C06B3E2 add Rm,Rn */
	W32(r8 + 0x38u, r3); UPD(0x0C06B3E6u, 2);  /* 0C06B3E4 mov.l Rm,@(disp,Rn) */
	r6 = R32(r8 + 0x3Cu); UPD(0x0C06B3E8u, 1);  /* 0C06B3E6 mov.l @(disp,Rm),Rn */
	r3 = 0xFF000000u; UPD(0x0C06B3EAu, 1);  /* 0C06B3E8 mov.l @(disp,pc),Rn */
	T = (r6 & r3) == 0;  /* 0C06B3EA tst Rm,Rn */
	if (T) { UPD(0x0C06B358u, 4); goto L_0C06B358; }  /* 0C06B3EC bt */
L_0C06B3EE: BLKS(0x0C06B3EEu);
	r0 = R32(r8 + 0x24u); UPD(0x0C06B3F0u, 1);  /* 0C06B3EE mov.l @(disp,Rm),Rn */
	r2 = 0x0u;  /* 0C06B3F0 mov #imm,Rn */
	r3 = r9;  /* 0C06B3F2 mov Rm,Rn */
	r7 = 0x3Fu;  /* 0C06B3F4 mov #imm,Rn */
	IF(0x0C06B3F6u); ;  /* 0C06B3F6 nop */
	UPD(0x0C06B3F8u, 4);
L_0C06B3F8: BLKS(0x0C06B3F8u);
	r8 = (u32)(s32)(s8)R8(r3); UPD(0x0C06B3FAu, 1);  /* 0C06B3F8 mov.b @Rm,Rn */
	r1 = r8 & 0xFF;  /* 0C06B3FA extu.b Rm,Rn */
	T = (s32)r2 > (s32)r1;  /* 0C06B3FC cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C06B430u, 5); goto L_0C06B430; }  /* 0C06B3FE bf */
L_0C06B400: BLKS(0x0C06B400u);
	W32(r0, r1); UPD(0x0C06B402u, 1);  /* 0C06B400 mov.l Rm,@Rn */
L_0C06B402: BLKS(0x0C06B402u);
	r10 = r2;  /* 0C06B402 mov Rm,Rn */
	r10 += 0x1u;  /* 0C06B404 add #imm,Rn */
	r2 = (u32)(s32)(s16)r10;  /* 0C06B406 exts.w Rm,Rn */
	T = (s32)r2 > (s32)r7;  /* 0C06B408 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r0 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06B3F8u, 7); goto L_0C06B3F8; } goto L_0C06B40E; }  /* 0C06B40A bf/s */
L_0C06B40E: BLKS(0x0C06B40Eu);
	r0 = 0x54u;  /* 0C06B40E mov #imm,Rn */
	IF(0x0C06B410u); MACL = r11 * r0;  /* 0C06B410 mul.l Rm,Rn */
	r11 = 0xC38C0B3u; UPD(0x0C06B414u, 5);  /* 0C06B412 mov.l @(disp,pc),Rn */
	IF(0x0C06B414u); r2 = MACL;  /* 0C06B414 sts macl,Rn */
	r2 += r11;  /* 0C06B416 add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C06B41Au, 3);  /* 0C06B418 mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C06B41A tst Rm,Rn */
	if (T) { UPD(0x0C06B358u, 4); goto L_0C06B358; }  /* 0C06B41C bt */
L_0C06B41E: BLKS(0x0C06B41Eu);
	r1 += 0xFFFFFFFFu;  /* 0C06B41E add #imm,Rn */
	{ W8(r2, r1); /* slot mov.b Rm,@Rn */ UPD(0x0C06B358u, 4); goto L_0C06B358; }  /* 0C06B420 bra */
L_0C06B430: BLKS(0x0C06B430u);
	{ W32(r0, r2); /* slot mov.l Rm,@Rn */ UPD(0x0C06B402u, 3); goto L_0C06B402; }  /* 0C06B430 bra */
L_0C06B440: BLKS(0x0C06B440u);
	r6 = 0xC06AD00u; UPD(0x0C06B442u, 1);  /* 0C06B440 mov.l @(disp,pc),Rn */
	W32(r8 + 0xCu, r2); UPD(0x0C06B444u, 1);  /* 0C06B442 mov.l Rm,@(disp,Rn) */
	IF(0x0C06B444u); { u32 t_ = r6; PR = 0x0C06B448u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C06AD00, 0x0C06AD00u, 0x0C06B448u); }  /* 0C06B444 jsr @Rn */
L_0C06B448: BLKS(0x0C06B448u);
	{ r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C06B33Eu, 3); goto L_0C06B33E; }  /* 0C06B448 bra */
}

/* FUN_0c06b480 */
void f_0C06B480(sh3_t *c)
{
	LOCALS;
L_0C06B480: BLKS(0x0C06B480u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06B482u, 1);  /* 0C06B480 mov.l Rm,@-Rn */
	r0 = 0x54u;  /* 0C06B482 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C06B486u, 2);  /* 0C06B484 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C06B486 exts.w Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C06B48Au, 2);  /* 0C06B488 mov.l Rm,@-Rn */
	IF(0x0C06B48Au); MACL = r8 * r0;  /* 0C06B48A mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06B48Eu, 3);  /* 0C06B48C mov.l Rm,@-Rn */
	r9 = 0x0u;  /* 0C06B48E mov #imm,Rn */
	r2 = 0xC38C064u; UPD(0x0C06B492u, 2);  /* 0C06B490 mov.l @(disp,pc),Rn */
	IF(0x0C06B492u); r3 = MACL;  /* 0C06B492 sts macl,Rn */
	IF(0x0C06B494u); r15 -= 4; W32(r15, PR); UPD(0x0C06B496u, 2);  /* 0C06B494 sts.l pr,@-Rn */
	r3 += r2;  /* 0C06B496 add Rm,Rn */
	r0 = R32(r3 + 0x4u); UPD(0x0C06B49Au, 2);  /* 0C06B498 mov.l @(disp,Rm),Rn */
	T = r0 == 0x3u;  /* 0C06B49A cmp/eq #imm,r0 */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06B4E0u, 4); goto L_0C06B4E0; } UPD(0x0C06B4A0u, 1); goto L_0C06B4A0; }  /* 0C06B49C bt/s */
L_0C06B4A0: BLKS(0x0C06B4A0u);
	r9 = 0x54u;  /* 0C06B4A0 mov #imm,Rn */
	IF(0x0C06B4A2u); MACL = r8 * r9;  /* 0C06B4A2 mul.l Rm,Rn */
	r7 = 0xC38C064u; UPD(0x0C06B4A6u, 4);  /* 0C06B4A4 mov.l @(disp,pc),Rn */
	r6 = 0x7u;  /* 0C06B4A6 mov #imm,Rn */
	IF(0x0C06B4A8u); r3 = MACL;  /* 0C06B4A8 sts macl,Rn */
	r3 += r7;  /* 0C06B4AA add Rm,Rn */
	r7 = R32(r3 + 0x4u); UPD(0x0C06B4AEu, 4);  /* 0C06B4AC mov.l @(disp,Rm),Rn */
	T = (s32)r7 > (s32)r6;  /* 0C06B4AE cmp/gt Rm,Rn */
	if (T) { UPD(0x0C06B4C8u, 4); goto L_0C06B4C8; }  /* 0C06B4B0 bt */
L_0C06B4B2: BLKS(0x0C06B4B2u);
	r2 = 0xC21CA15u; UPD(0x0C06B4B4u, 1);  /* 0C06B4B2 mov.l @(disp,pc),Rn */
	r10 = (u32)(s32)(s8)R8(r2); UPD(0x0C06B4B6u, 1);  /* 0C06B4B4 mov.b @Rm,Rn */
	r8 = r10 & 0xFF;  /* 0C06B4B6 extu.b Rm,Rn */
	IF(0x0C06B4B8u); r8 <<= 2;  /* 0C06B4B8 shll2 Rn */
	r4 = 0xC392E14u; UPD(0x0C06B4BCu, 3);  /* 0C06B4BA mov.l @(disp,pc),Rn */
	r8 += r8;  /* 0C06B4BC add Rm,Rn */
	r8 += r4;  /* 0C06B4BE add Rm,Rn */
	r8 += r7;  /* 0C06B4C0 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r8); UPD(0x0C06B4C4u, 4);  /* 0C06B4C2 mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C06B4C4 add #imm,Rn */
	W8(r8, r0); UPD(0x0C06B4C8u, 2);  /* 0C06B4C6 mov.b Rm,@Rn */
L_0C06B4C8: BLKS(0x0C06B4C8u);
	r5 = 0x0u;  /* 0C06B4C8 mov #imm,Rn */
	W32(r3, r5); UPD(0x0C06B4CCu, 2);  /* 0C06B4CA mov.l Rm,@Rn */
	r15 = r14;  /* 0C06B4CC mov Rm,Rn */
	IF(0x0C06B4CEu); PR = R32(r15); r15 += 4; UPD(0x0C06B4D0u, 2);  /* 0C06B4CE lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06B4D2u, 1);  /* 0C06B4D0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06B4D4u, 1);  /* 0C06B4D2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06B4D6u, 1);  /* 0C06B4D4 mov.l @Rm+,Rn */
	IF(0x0C06B4D6u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06B4D6 rts */
L_0C06B4E0: BLKS(0x0C06B4E0u);
	r5 = 0x13Fu; UPD(0x0C06B4E2u, 1);  /* 0C06B4E0 mov.w @(disp,pc),Rn */
	r7 = 0x0u;  /* 0C06B4E2 mov #imm,Rn */
	r6 = 0xFFFFFFFFu;  /* 0C06B4E4 mov #imm,Rn */
	r3 = r2;  /* 0C06B4E6 mov Rm,Rn */
	UPD(0x0C06B4E8u, 3);
L_0C06B4E8: BLKS(0x0C06B4E8u);
	r0 = R32(r3); UPD(0x0C06B4EAu, 1);  /* 0C06B4E8 mov.l @Rm,Rn */
	T = r8 == r7;  /* 0C06B4EA cmp/eq Rm,Rn */
	{ u32 t_ = 0u - r6, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r10 = r_; }  /* 0C06B4EC negc Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C06B4EE tst Rm,Rn */
	r0 = R32(r3 + 0x4u); UPD(0x0C06B4F2u, 4);  /* 0C06B4F0 mov.l @(disp,Rm),Rn */
	{ u32 t_ = 0u - r6, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r2 = r_; }  /* 0C06B4F2 negc Rm,Rn */
	T = r0 == 0x3u;  /* 0C06B4F4 cmp/eq #imm,r0 */
	r10 &= r2;  /* 0C06B4F6 and Rm,Rn */
	IF(0x0C06B4F8u); r4 = T;  /* 0C06B4F8 movt Rn */
	T = (r10 & r4) == 0;  /* 0C06B4FA tst Rm,Rn */
	{ u32 c_ = T; r10 = r7; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06B508u, 8); goto L_0C06B508; } goto L_0C06B500; }  /* 0C06B4FC bt/s */
L_0C06B500: BLKS(0x0C06B500u);
	r4 = r9;  /* 0C06B500 mov Rm,Rn */
	r4 += 0x1u;  /* 0C06B502 add #imm,Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C06B504 exts.w Rm,Rn */
	r10 = r7;  /* 0C06B506 mov Rm,Rn */
	UPD(0x0C06B508u, 5);
L_0C06B508: BLKS(0x0C06B508u);
	r10 += 0x1u;  /* 0C06B508 add #imm,Rn */
	r7 = (u32)(s32)(s16)r10;  /* 0C06B50A exts.w Rm,Rn */
	T = (s32)r7 > (s32)r5;  /* 0C06B50C cmp/gt Rm,Rn */
	{ u32 c_ = !T; r3 += 0x54u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06B4E8u, 6); goto L_0C06B4E8; } goto L_0C06B512; }  /* 0C06B50E bf/s */
L_0C06B512: BLKS(0x0C06B512u);
	T = (r9 & r9) == 0;  /* 0C06B512 tst Rm,Rn */
	if (!T) { UPD(0x0C06B4A0u, 5); goto L_0C06B4A0; }  /* 0C06B514 bf */
L_0C06B516: BLKS(0x0C06B516u);
	r10 = 0xC392D78u; UPD(0x0C06B518u, 1);  /* 0C06B516 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r10); UPD(0x0C06B51Au, 1);  /* 0C06B518 mov.b @Rm,Rn */
	T = r0 == 0x12u;  /* 0C06B51A cmp/eq #imm,r0 */
	if (T) { UPD(0x0C06B530u, 4); goto L_0C06B530; }  /* 0C06B51C bt */
L_0C06B51E: BLKS(0x0C06B51Eu);
	{ W8(r10, r9); /* slot mov.b Rm,@Rn */ UPD(0x0C06B4A0u, 3); goto L_0C06B4A0; }  /* 0C06B51E bra */
L_0C06B530: BLKS(0x0C06B530u);
	r0 = 0xC0AFE40u; UPD(0x0C06B532u, 1);  /* 0C06B530 mov.l @(disp,pc),Rn */
	IF(0x0C06B532u); { u32 t_ = r0; PR = 0x0C06B536u; IF(0x0C06B534u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C06B536u); }  /* 0C06B532 jsr @Rn */
L_0C06B536: BLKS(0x0C06B536u);
	r5 = 0xC17783Cu; UPD(0x0C06B538u, 1);  /* 0C06B536 mov.l @(disp,pc),Rn */
	r0 &= 0x1u;  /* 0C06B538 and #imm,r0 */
	IF(0x0C06B53Au); r3 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C06B53Cu, 2);  /* 0C06B53A mov.b @(r0,Rm),Rn */
	r0 = 0xC0AFC10u; UPD(0x0C06B53Eu, 1);  /* 0C06B53C mov.l @(disp,pc),Rn */
	IF(0x0C06B53Eu); { u32 t_ = r0; PR = 0x0C06B542u; r4 = r3 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFC10, 0x0C0AFC10u, 0x0C06B542u); }  /* 0C06B53E jsr @Rn */
L_0C06B542: BLKS(0x0C06B542u);
	{ IF(0x0C06B544u); ; /* slot nop */ UPD(0x0C06B51Eu, 3); goto L_0C06B51E; }  /* 0C06B542 bra */
}

/* FUN_0c06b570 */
void f_0C06B570(sh3_t *c)
{
	LOCALS;
L_0C06B570: BLKS(0x0C06B570u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06B572u, 1);  /* 0C06B570 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C06B574u, 1);  /* 0C06B572 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C06B576u, 1);  /* 0C06B574 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06B578u, 1);  /* 0C06B576 mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s8)r4;  /* 0C06B578 exts.b Rm,Rn */
	IF(0x0C06B57Au); r15 -= 4; W32(r15, PR); UPD(0x0C06B57Cu, 2);  /* 0C06B57A sts.l pr,@-Rn */
	T = (r10 & r10) == 0;  /* 0C06B57C tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06B5B2u, 4); goto L_0C06B5B2; } goto L_0C06B582; }  /* 0C06B57E bt/s */
L_0C06B582: BLKS(0x0C06B582u);
	r9 = 0x0u;  /* 0C06B582 mov #imm,Rn */
	r8 = 0x0u;  /* 0C06B584 mov #imm,Rn */
	IF(0x0C06B586u); ;  /* 0C06B586 nop */
	UPD(0x0C06B588u, 4);
L_0C06B588: BLKS(0x0C06B588u);
	r3 = 0xC38C064u; UPD(0x0C06B58Au, 1);  /* 0C06B588 mov.l @(disp,pc),Rn */
	r3 += r8;  /* 0C06B58A add Rm,Rn */
	r2 = R32(r3); UPD(0x0C06B58Eu, 2);  /* 0C06B58C mov.l @Rm,Rn */
	r0 = r2;  /* 0C06B58E mov Rm,Rn */
	r0 &= 0x4u;  /* 0C06B590 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C06B592 tst Rm,Rn */
	{ u32 c_ = T; r4 = r9; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06B5A6u, 6); goto L_0C06B5A6; } goto L_0C06B598; }  /* 0C06B594 bt/s */
L_0C06B598: BLKS(0x0C06B598u);
	r3 += 0x45u;  /* 0C06B598 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r3); UPD(0x0C06B59Cu, 3);  /* 0C06B59A mov.b @Rm,Rn */
	r7 = r0 & 0xFF;  /* 0C06B59C extu.b Rm,Rn */
	T = r7 == r10;  /* 0C06B59E cmp/eq Rm,Rn */
	{ u32 c_ = T; r3 += 0xFFFFFFBBu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06B5C0u, 5); goto L_0C06B5C0; } goto L_0C06B5A4; }  /* 0C06B5A0 bt/s */
L_0C06B5A4: BLKS(0x0C06B5A4u);
	r4 = r9;  /* 0C06B5A4 mov Rm,Rn */
	UPD(0x0C06B5A6u, 2);
L_0C06B5A6: BLKS(0x0C06B5A6u);
	r4 += 0x1u;  /* 0C06B5A6 add #imm,Rn */
	r0 = 0xFFu; UPD(0x0C06B5AAu, 2);  /* 0C06B5A8 mov.w @(disp,pc),Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C06B5AA exts.w Rm,Rn */
	T = (s32)r9 > (s32)r0;  /* 0C06B5AC cmp/gt Rm,Rn */
	{ u32 c_ = !T; r8 += 0x54u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06B588u, 5); goto L_0C06B588; } UPD(0x0C06B5B2u, 1); goto L_0C06B5B2; }  /* 0C06B5AE bf/s */
L_0C06B5B2: BLKS(0x0C06B5B2u);
	r15 = r14;  /* 0C06B5B2 mov Rm,Rn */
	IF(0x0C06B5B4u); PR = R32(r15); r15 += 4; UPD(0x0C06B5B6u, 2);  /* 0C06B5B4 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06B5B8u, 1);  /* 0C06B5B6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06B5BAu, 1);  /* 0C06B5B8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06B5BCu, 1);  /* 0C06B5BA mov.l @Rm+,Rn */
	IF(0x0C06B5BCu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06B5BC rts */
L_0C06B5C0: BLKS(0x0C06B5C0u);
	r0 = 0x10u;  /* 0C06B5C0 mov #imm,Rn */
	r2 &= r0;  /* 0C06B5C2 and Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C06B5C4 tst Rm,Rn */
	{ u32 c_ = !T; r4 = r9; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06B5A6u, 6); goto L_0C06B5A6; } goto L_0C06B5CA; }  /* 0C06B5C6 bf/s */
L_0C06B5CA: BLKS(0x0C06B5CAu);
	r3 += 0x46u;  /* 0C06B5CA add #imm,Rn */
	r5 = (u32)(s32)(s8)R8(r3); UPD(0x0C06B5CEu, 3);  /* 0C06B5CC mov.b @Rm,Rn */
	r4 = 0x2u;  /* 0C06B5CE mov #imm,Rn */
	r2 = r5 & 0xFF;  /* 0C06B5D0 extu.b Rm,Rn */
	r2 -= r7;  /* 0C06B5D2 sub Rm,Rn */
	r2 += 0x1u;  /* 0C06B5D4 add #imm,Rn */
	T = r2 > r4;  /* 0C06B5D6 cmp/hi Rm,Rn */
	{ u32 c_ = T; r3 += 0xFFFFFFBAu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06B630u, 8); goto L_0C06B630; } goto L_0C06B5DC; }  /* 0C06B5D8 bt/s */
L_0C06B5DC: BLKS(0x0C06B5DCu);
	r2 = r3;  /* 0C06B5DC mov Rm,Rn */
	r2 += 0x47u;  /* 0C06B5DE add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C06B5E2u, 4);  /* 0C06B5E0 mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C06B5E2 tst Rm,Rn */
	{ u32 c_ = T; r1 += 0xFFFFFFFFu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06B5EAu, 4); goto L_0C06B5EA; } goto L_0C06B5E8; }  /* 0C06B5E4 bt/s */
L_0C06B5E8: BLKS(0x0C06B5E8u);
	W8(r2, r1); UPD(0x0C06B5EAu, 2);  /* 0C06B5E8 mov.b Rm,@Rn */
L_0C06B5EA: BLKS(0x0C06B5EAu);
	r0 = 0xC38C064u; UPD(0x0C06B5ECu, 1);  /* 0C06B5EA mov.l @(disp,pc),Rn */
	r0 += r8;  /* 0C06B5EC add Rm,Rn */
	r5 = r0;  /* 0C06B5EE mov Rm,Rn */
	r3 = r0;  /* 0C06B5F0 mov Rm,Rn */
	r0 += 0x45u;  /* 0C06B5F2 add #imm,Rn */
	r4 = (u32)(s32)(s8)R8(r0); UPD(0x0C06B5F6u, 5);  /* 0C06B5F4 mov.b @Rm,Rn */
	r3 += 0x46u;  /* 0C06B5F6 add #imm,Rn */
	r0 += 0xFFFFFFBBu;  /* 0C06B5F8 add #imm,Rn */
	W8(r3, r4); UPD(0x0C06B5FCu, 3);  /* 0C06B5FA mov.b Rm,@Rn */
	r5 += 0x44u;  /* 0C06B5FC add #imm,Rn */
	r7 = R32(r0 + 0x18u); UPD(0x0C06B600u, 2);  /* 0C06B5FE mov.l @(disp,Rm),Rn */
	r3 = r4 & 0xFF;  /* 0C06B600 extu.b Rm,Rn */
	r1 = 0xC2175E8u; UPD(0x0C06B604u, 2);  /* 0C06B602 mov.l @(disp,pc),Rn */
	W32(r1, r7); UPD(0x0C06B606u, 1);  /* 0C06B604 mov.l Rm,@Rn */
	r6 = 0xC393044u; UPD(0x0C06B608u, 1);  /* 0C06B606 mov.l @(disp,pc),Rn */
	r2 = R32(r0 + 0x20u); UPD(0x0C06B60Au, 1);  /* 0C06B608 mov.l @(disp,Rm),Rn */
	W32(r6, r2); UPD(0x0C06B60Cu, 1);  /* 0C06B60A mov.l Rm,@Rn */
	r0 += 0x47u;  /* 0C06B60C add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r0); UPD(0x0C06B610u, 2);  /* 0C06B60E mov.b @Rm,Rn */
	r7 = (u32)(s32)(s8)R8(r5); UPD(0x0C06B612u, 1);  /* 0C06B610 mov.b @Rm,Rn */
	r0 += 0xFFFFFFB9u;  /* 0C06B612 add #imm,Rn */
	r4 = R32(r0 + 0x28u); UPD(0x0C06B616u, 2);  /* 0C06B614 mov.l @(disp,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C06B616 extu.b Rm,Rn */
	r5 = R32(r0 + 0x2Cu); UPD(0x0C06B61Au, 2);  /* 0C06B618 mov.l @(disp,Rm),Rn */
	r6 -= r3;  /* 0C06B61A sub Rm,Rn */
	r0 = 0xC063B90u; UPD(0x0C06B61Eu, 2);  /* 0C06B61C mov.l @(disp,pc),Rn */
	IF(0x0C06B61Eu); { u32 t_ = r0; PR = 0x0C06B622u; r7 = r1 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C063B90, 0x0C063B90u, 0x0C06B622u); }  /* 0C06B61E jsr @Rn */
L_0C06B622: BLKS(0x0C06B622u);
	{ r4 = r9; /* slot mov Rm,Rn */ UPD(0x0C06B5A6u, 3); goto L_0C06B5A6; }  /* 0C06B622 bra */
L_0C06B630: BLKS(0x0C06B630u);
	r3 += 0x47u;  /* 0C06B630 add #imm,Rn */
	r6 = 0x40u;  /* 0C06B632 mov #imm,Rn */
	{ W8(r3, r6); /* slot mov.b Rm,@Rn */ UPD(0x0C06B5EAu, 5); goto L_0C06B5EA; }  /* 0C06B634 bra */
}

/* FUN_0c06b650 */
void f_0C06B650(sh3_t *c)
{
	LOCALS;
L_0C06B650: BLKS(0x0C06B650u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06B652u, 1);  /* 0C06B650 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C06B654u, 1);  /* 0C06B652 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C06B656u, 1);  /* 0C06B654 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06B658u, 1);  /* 0C06B656 mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s8)r4;  /* 0C06B658 exts.b Rm,Rn */
	IF(0x0C06B65Au); r15 -= 4; W32(r15, PR); UPD(0x0C06B65Cu, 2);  /* 0C06B65A sts.l pr,@-Rn */
	T = (r10 & r10) == 0;  /* 0C06B65C tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06B692u, 4); goto L_0C06B692; } goto L_0C06B662; }  /* 0C06B65E bt/s */
L_0C06B662: BLKS(0x0C06B662u);
	r9 = 0x100u; UPD(0x0C06B664u, 2);  /* 0C06B662 mov.w @(disp,pc),Rn */
	r8 = 0x5400u; UPD(0x0C06B666u, 1);  /* 0C06B664 mov.w @(disp,pc),Rn */
	IF(0x0C06B666u); ;  /* 0C06B666 nop */
	UPD(0x0C06B668u, 1);
L_0C06B668: BLKS(0x0C06B668u);
	r3 = 0xC38C064u; UPD(0x0C06B66Au, 1);  /* 0C06B668 mov.l @(disp,pc),Rn */
	r3 += r8;  /* 0C06B66A add Rm,Rn */
	r2 = R32(r3); UPD(0x0C06B66Eu, 2);  /* 0C06B66C mov.l @Rm,Rn */
	r0 = r2;  /* 0C06B66E mov Rm,Rn */
	r0 &= 0x4u;  /* 0C06B670 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C06B672 tst Rm,Rn */
	{ u32 c_ = T; r4 = r9; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06B686u, 6); goto L_0C06B686; } goto L_0C06B678; }  /* 0C06B674 bt/s */
L_0C06B678: BLKS(0x0C06B678u);
	r3 += 0x45u;  /* 0C06B678 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r3); UPD(0x0C06B67Cu, 3);  /* 0C06B67A mov.b @Rm,Rn */
	r7 = r0 & 0xFF;  /* 0C06B67C extu.b Rm,Rn */
	T = r7 == r10;  /* 0C06B67E cmp/eq Rm,Rn */
	{ u32 c_ = T; r3 += 0xFFFFFFBBu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06B6A0u, 5); goto L_0C06B6A0; } goto L_0C06B684; }  /* 0C06B680 bt/s */
L_0C06B684: BLKS(0x0C06B684u);
	r4 = r9;  /* 0C06B684 mov Rm,Rn */
	UPD(0x0C06B686u, 2);
L_0C06B686: BLKS(0x0C06B686u);
	r4 += 0x1u;  /* 0C06B686 add #imm,Rn */
	r0 = 0x13Fu; UPD(0x0C06B68Au, 2);  /* 0C06B688 mov.w @(disp,pc),Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C06B68A exts.w Rm,Rn */
	T = (s32)r9 > (s32)r0;  /* 0C06B68C cmp/gt Rm,Rn */
	{ u32 c_ = !T; r8 += 0x54u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06B668u, 5); goto L_0C06B668; } UPD(0x0C06B692u, 1); goto L_0C06B692; }  /* 0C06B68E bf/s */
L_0C06B692: BLKS(0x0C06B692u);
	r15 = r14;  /* 0C06B692 mov Rm,Rn */
	IF(0x0C06B694u); PR = R32(r15); r15 += 4; UPD(0x0C06B696u, 2);  /* 0C06B694 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06B698u, 1);  /* 0C06B696 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06B69Au, 1);  /* 0C06B698 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06B69Cu, 1);  /* 0C06B69A mov.l @Rm+,Rn */
	IF(0x0C06B69Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06B69C rts */
L_0C06B6A0: BLKS(0x0C06B6A0u);
	r0 = 0x10u;  /* 0C06B6A0 mov #imm,Rn */
	r2 &= r0;  /* 0C06B6A2 and Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C06B6A4 tst Rm,Rn */
	{ u32 c_ = !T; r4 = r9; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06B686u, 6); goto L_0C06B686; } goto L_0C06B6AA; }  /* 0C06B6A6 bf/s */
L_0C06B6AA: BLKS(0x0C06B6AAu);
	r3 += 0x46u;  /* 0C06B6AA add #imm,Rn */
	r5 = (u32)(s32)(s8)R8(r3); UPD(0x0C06B6AEu, 3);  /* 0C06B6AC mov.b @Rm,Rn */
	r4 = 0x2u;  /* 0C06B6AE mov #imm,Rn */
	r2 = r5 & 0xFF;  /* 0C06B6B0 extu.b Rm,Rn */
	r2 -= r7;  /* 0C06B6B2 sub Rm,Rn */
	r2 += 0x1u;  /* 0C06B6B4 add #imm,Rn */
	T = r2 > r4;  /* 0C06B6B6 cmp/hi Rm,Rn */
	{ u32 c_ = T; r3 += 0xFFFFFFBAu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06B710u, 8); goto L_0C06B710; } goto L_0C06B6BC; }  /* 0C06B6B8 bt/s */
L_0C06B6BC: BLKS(0x0C06B6BCu);
	r2 = r3;  /* 0C06B6BC mov Rm,Rn */
	r2 += 0x47u;  /* 0C06B6BE add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C06B6C2u, 4);  /* 0C06B6C0 mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C06B6C2 tst Rm,Rn */
	{ u32 c_ = T; r1 += 0xFFFFFFFFu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06B6CAu, 4); goto L_0C06B6CA; } goto L_0C06B6C8; }  /* 0C06B6C4 bt/s */
L_0C06B6C8: BLKS(0x0C06B6C8u);
	W8(r2, r1); UPD(0x0C06B6CAu, 2);  /* 0C06B6C8 mov.b Rm,@Rn */
L_0C06B6CA: BLKS(0x0C06B6CAu);
	r0 = 0xC38C064u; UPD(0x0C06B6CCu, 1);  /* 0C06B6CA mov.l @(disp,pc),Rn */
	r0 += r8;  /* 0C06B6CC add Rm,Rn */
	r5 = r0;  /* 0C06B6CE mov Rm,Rn */
	r3 = r0;  /* 0C06B6D0 mov Rm,Rn */
	r0 += 0x45u;  /* 0C06B6D2 add #imm,Rn */
	r4 = (u32)(s32)(s8)R8(r0); UPD(0x0C06B6D6u, 5);  /* 0C06B6D4 mov.b @Rm,Rn */
	r3 += 0x46u;  /* 0C06B6D6 add #imm,Rn */
	r0 += 0xFFFFFFBBu;  /* 0C06B6D8 add #imm,Rn */
	W8(r3, r4); UPD(0x0C06B6DCu, 3);  /* 0C06B6DA mov.b Rm,@Rn */
	r5 += 0x44u;  /* 0C06B6DC add #imm,Rn */
	r7 = R32(r0 + 0x18u); UPD(0x0C06B6E0u, 2);  /* 0C06B6DE mov.l @(disp,Rm),Rn */
	r3 = r4 & 0xFF;  /* 0C06B6E0 extu.b Rm,Rn */
	r1 = 0xC2175E8u; UPD(0x0C06B6E4u, 2);  /* 0C06B6E2 mov.l @(disp,pc),Rn */
	W32(r1, r7); UPD(0x0C06B6E6u, 1);  /* 0C06B6E4 mov.l Rm,@Rn */
	r6 = 0xC393044u; UPD(0x0C06B6E8u, 1);  /* 0C06B6E6 mov.l @(disp,pc),Rn */
	r2 = R32(r0 + 0x20u); UPD(0x0C06B6EAu, 1);  /* 0C06B6E8 mov.l @(disp,Rm),Rn */
	W32(r6, r2); UPD(0x0C06B6ECu, 1);  /* 0C06B6EA mov.l Rm,@Rn */
	r0 += 0x47u;  /* 0C06B6EC add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r0); UPD(0x0C06B6F0u, 2);  /* 0C06B6EE mov.b @Rm,Rn */
	r7 = (u32)(s32)(s8)R8(r5); UPD(0x0C06B6F2u, 1);  /* 0C06B6F0 mov.b @Rm,Rn */
	r0 += 0xFFFFFFB9u;  /* 0C06B6F2 add #imm,Rn */
	r4 = R32(r0 + 0x28u); UPD(0x0C06B6F6u, 2);  /* 0C06B6F4 mov.l @(disp,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C06B6F6 extu.b Rm,Rn */
	r5 = R32(r0 + 0x2Cu); UPD(0x0C06B6FAu, 2);  /* 0C06B6F8 mov.l @(disp,Rm),Rn */
	r6 -= r3;  /* 0C06B6FA sub Rm,Rn */
	r0 = 0xC063B90u; UPD(0x0C06B6FEu, 2);  /* 0C06B6FC mov.l @(disp,pc),Rn */
	IF(0x0C06B6FEu); { u32 t_ = r0; PR = 0x0C06B702u; r7 = r1 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C063B90, 0x0C063B90u, 0x0C06B702u); }  /* 0C06B6FE jsr @Rn */
L_0C06B702: BLKS(0x0C06B702u);
	{ r4 = r9; /* slot mov Rm,Rn */ UPD(0x0C06B686u, 3); goto L_0C06B686; }  /* 0C06B702 bra */
L_0C06B710: BLKS(0x0C06B710u);
	r3 += 0x47u;  /* 0C06B710 add #imm,Rn */
	r6 = 0x40u;  /* 0C06B712 mov #imm,Rn */
	{ W8(r3, r6); /* slot mov.b Rm,@Rn */ UPD(0x0C06B6CAu, 5); goto L_0C06B6CA; }  /* 0C06B714 bra */
}

/* FUN_0c06b730 */
void f_0C06B730(sh3_t *c)
{
	LOCALS;
L_0C06B730: BLKS(0x0C06B730u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06B732u, 1);  /* 0C06B730 mov.l Rm,@-Rn */
	T = (r5 & r5) == 0;  /* 0C06B732 tst Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C06B736u, 2);  /* 0C06B734 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C06B738u, 1);  /* 0C06B736 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C06B738 exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06B73Cu, 2);  /* 0C06B73A mov.l Rm,@-Rn */
	IF(0x0C06B73Cu); r15 -= 4; W32(r15, PR); UPD(0x0C06B73Eu, 1);  /* 0C06B73C sts.l pr,@-Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06B764u, 3); goto L_0C06B764; } goto L_0C06B742; }  /* 0C06B73E bf/s */
L_0C06B742: BLKS(0x0C06B742u);
	r5 = 0xC21CA15u; UPD(0x0C06B744u, 2);  /* 0C06B742 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r5); UPD(0x0C06B746u, 1);  /* 0C06B744 mov.b @Rm,Rn */
	r2 = 0xC275DC8u; UPD(0x0C06B748u, 1);  /* 0C06B746 mov.l @(disp,pc),Rn */
	r6 = r0 & 0xFF;  /* 0C06B748 extu.b Rm,Rn */
	r0 = r2;  /* 0C06B74A mov Rm,Rn */
	IF(0x0C06B74Cu); r3 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C06B74Eu, 3);  /* 0C06B74C mov.b @(r0,Rm),Rn */
	r2 += r6;  /* 0C06B74E add Rm,Rn */
	r4 = 0xC177840u; UPD(0x0C06B752u, 2);  /* 0C06B750 mov.l @(disp,pc),Rn */
	r0 = r3 & 0xFF;  /* 0C06B752 extu.b Rm,Rn */
	IF(0x0C06B754u); r5 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C06B756u, 2);  /* 0C06B754 mov.b @(r0,Rm),Rn */
	r1 = r3;  /* 0C06B756 mov Rm,Rn */
	r1 += 0x1u;  /* 0C06B758 add #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C06B75A extu.b Rm,Rn */
	IF(0x0C06B75Cu); r0 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C06B75Eu, 4);  /* 0C06B75C mov.b @(r0,Rm),Rn */
	T = r0 == 0xFFFFFFFFu;  /* 0C06B75E cmp/eq #imm,r0 */
	{ u32 c_ = T; W8(r2, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C06B830u, 4); goto L_0C06B830; } UPD(0x0C06B764u, 1); goto L_0C06B764; }  /* 0C06B760 bt/s */
L_0C06B764: BLKS(0x0C06B764u);
	r2 = 0xEu;  /* 0C06B764 mov #imm,Rn */
	T = r5 > r2;  /* 0C06B766 cmp/hi Rm,Rn */
	{ u32 c_ = T; r6 = 0x54u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C06B7A2u, 5); goto L_0C06B7A2; } goto L_0C06B76C; }  /* 0C06B768 bt/s */
L_0C06B76C: BLKS(0x0C06B76Cu);
	r8 = r5;  /* 0C06B76C mov Rm,Rn */
	r0 = 0xC06B784u;  /* 0C06B76E mova @(disp,pc),r0 */
	IF(0x0C06B770u); r7 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C06B772u, 4);  /* 0C06B770 mov.b @(r0,Rm),Rn */
	r7 = r7 & 0xFF;  /* 0C06B772 extu.b Rm,Rn */
	IF(0x0C06B774u); { u32 tv_ = (r7 + 0x0C06B778u); u32 t_ = PHYS(tv_); IF(0x0C06B776u); ; /* slot nop */ JRGN(tv_); UPD(t_, 4); switch (t_) { case 0x0C06B7A0u: goto L_0C06B7A0; case 0x0C06B7D0u: goto L_0C06B7D0; case 0x0C06B7F0u: goto L_0C06B7F0; case 0x0C06B810u: goto L_0C06B810; default: JUMPD(tv_); } }  /* 0C06B774 braf Rn */
L_0C06B7A0: BLKS(0x0C06B7A0u);
	r6 = 0x54u;  /* 0C06B7A0 mov #imm,Rn */
	UPD(0x0C06B7A2u, 1);
L_0C06B7A2: BLKS(0x0C06B7A2u);
	IF(0x0C06B7A2u); MACL = r9 * r6;  /* 0C06B7A2 mul.l Rm,Rn */
	r10 = 0xC38C064u; UPD(0x0C06B7A6u, 3);  /* 0C06B7A4 mov.l @(disp,pc),Rn */
	r1 = 0x0u;  /* 0C06B7A6 mov #imm,Rn */
	IF(0x0C06B7A8u); r3 = MACL;  /* 0C06B7A8 sts macl,Rn */
	r3 += r10;  /* 0C06B7AA add Rm,Rn */
	W32(r3 + 0x4u, r5); UPD(0x0C06B7AEu, 4);  /* 0C06B7AC mov.l Rm,@(disp,Rn) */
	W32(r3 + 0x8u, r1); UPD(0x0C06B7B0u, 1);  /* 0C06B7AE mov.l Rm,@(disp,Rn) */
L_0C06B7B0: BLKS(0x0C06B7B0u);
	r7 = 0x54u;  /* 0C06B7B0 mov #imm,Rn */
	IF(0x0C06B7B2u); MACL = r9 * r7;  /* 0C06B7B2 mul.l Rm,Rn */
	UPD(0x0C06B7B4u, 3);
L_0C06B7B4: BLKS(0x0C06B7B4u);
	r4 = 0x0u;  /* 0C06B7B4 mov #imm,Rn */
	r5 = 0xC06ACA0u; UPD(0x0C06B7B8u, 2);  /* 0C06B7B6 mov.l @(disp,pc),Rn */
	IF(0x0C06B7B8u); r2 = MACL;  /* 0C06B7B8 sts macl,Rn */
	r10 += r2;  /* 0C06B7BA add Rm,Rn */
	W32(r10 + 0xCu, r4); UPD(0x0C06B7BEu, 3);  /* 0C06B7BC mov.l Rm,@(disp,Rn) */
	r4 = r9;  /* 0C06B7BE mov Rm,Rn */
	r15 = r14;  /* 0C06B7C0 mov Rm,Rn */
	IF(0x0C06B7C2u); PR = R32(r15); r15 += 4; UPD(0x0C06B7C4u, 3);  /* 0C06B7C2 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06B7C6u, 1);  /* 0C06B7C4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06B7C8u, 1);  /* 0C06B7C6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06B7CAu, 1);  /* 0C06B7C8 mov.l @Rm+,Rn */
	IF(0x0C06B7CAu); { u32 tv_ = r5; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C06ACA0u: TAIL(f_0C06ACA0); default: JUMPD(tv_); } }  /* 0C06B7CA jmp @Rn */
L_0C06B7D0: BLKS(0x0C06B7D0u);
	r8 = 0x54u;  /* 0C06B7D0 mov #imm,Rn */
	IF(0x0C06B7D2u); MACL = r9 * r8;  /* 0C06B7D2 mul.l Rm,Rn */
	r10 = 0xC38C064u; UPD(0x0C06B7D6u, 4);  /* 0C06B7D4 mov.l @(disp,pc),Rn */
	r4 = 0x7u;  /* 0C06B7D6 mov #imm,Rn */
	r0 = 0xC050D70u; UPD(0x0C06B7DAu, 2);  /* 0C06B7D8 mov.l @(disp,pc),Rn */
	IF(0x0C06B7DAu); r8 = MACL;  /* 0C06B7DA sts macl,Rn */
	r8 += r10;  /* 0C06B7DC add Rm,Rn */
	IF(0x0C06B7DEu); { u32 t_ = r0; PR = 0x0C06B7E2u; W32(r8 + 0x4u, r5); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 4); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C06B7E2u); }  /* 0C06B7DE jsr @Rn */
L_0C06B7E2: BLKS(0x0C06B7E2u);
	{ W32(r8 + 0x8u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C06B7B0u, 3); goto L_0C06B7B0; }  /* 0C06B7E2 bra */
L_0C06B7F0: BLKS(0x0C06B7F0u);
	r7 = 0x54u;  /* 0C06B7F0 mov #imm,Rn */
	IF(0x0C06B7F2u); MACL = r9 * r7;  /* 0C06B7F2 mul.l Rm,Rn */
	r10 = 0xC38C064u; UPD(0x0C06B7F6u, 4);  /* 0C06B7F4 mov.l @(disp,pc),Rn */
	IF(0x0C06B7F6u); r0 = MACL;  /* 0C06B7F6 sts macl,Rn */
	r0 += r10;  /* 0C06B7F8 add Rm,Rn */
	W32(r0 + 0x4u, r5); UPD(0x0C06B7FCu, 3);  /* 0C06B7FA mov.l Rm,@(disp,Rn) */
	r2 = 0xC392D78u; UPD(0x0C06B7FEu, 1);  /* 0C06B7FC mov.l @(disp,pc),Rn */
	r4 = (u32)(s32)(s8)R8(r2); UPD(0x0C06B800u, 1);  /* 0C06B7FE mov.b @Rm,Rn */
	r5 = r4 & 0xFF;  /* 0C06B800 extu.b Rm,Rn */
	{ W32(r0 + 0x8u, r5); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C06B7B4u, 4); goto L_0C06B7B4; }  /* 0C06B802 bra */
L_0C06B810: BLKS(0x0C06B810u);
	r0 = 0x54u;  /* 0C06B810 mov #imm,Rn */
	IF(0x0C06B812u); MACL = r9 * r0;  /* 0C06B812 mul.l Rm,Rn */
	r10 = 0xC38C064u; UPD(0x0C06B816u, 4);  /* 0C06B814 mov.l @(disp,pc),Rn */
	r6 = 0x1u;  /* 0C06B816 mov #imm,Rn */
	IF(0x0C06B818u); r3 = MACL;  /* 0C06B818 sts macl,Rn */
	r3 += r10;  /* 0C06B81A add Rm,Rn */
	r5 += 0xFFFFFFF8u;  /* 0C06B81C add #imm,Rn */
	W32(r3 + 0x4u, r6); UPD(0x0C06B820u, 5);  /* 0C06B81E mov.l Rm,@(disp,Rn) */
	{ W32(r3 + 0x8u, r5); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C06B7B0u, 3); goto L_0C06B7B0; }  /* 0C06B820 bra */
L_0C06B830: BLKS(0x0C06B830u);
	r4 = 0x0u;  /* 0C06B830 mov #imm,Rn */
	{ W8(r2, r4); /* slot mov.b Rm,@Rn */ UPD(0x0C06B764u, 4); goto L_0C06B764; }  /* 0C06B832 bra */
}

void f_0C06B850(sh3_t *c)
{
	LOCALS;
L_0C06B850: BLKS(0x0C06B850u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06B852u, 1);  /* 0C06B850 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C06B854u, 1);  /* 0C06B852 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C06B856u, 1);  /* 0C06B854 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06B858u, 1);  /* 0C06B856 mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s16)r4;  /* 0C06B858 exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06B85Cu, 2);  /* 0C06B85A mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s16)r5;  /* 0C06B85C exts.w Rm,Rn */
	r9 = 0xC060350u; UPD(0x0C06B860u, 2);  /* 0C06B85E mov.l @(disp,pc),Rn */
	IF(0x0C06B860u); r15 -= 4; W32(r15, PR); UPD(0x0C06B862u, 1);  /* 0C06B860 sts.l pr,@-Rn */
	r4 = 0x1000u; UPD(0x0C06B864u, 1);  /* 0C06B862 mov.w @(disp,pc),Rn */
	IF(0x0C06B864u); { u32 t_ = r9; PR = 0x0C06B868u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C060350, 0x0C060350u, 0x0C06B868u); }  /* 0C06B864 jsr @Rn */
L_0C06B868: BLKS(0x0C06B868u);
	r8 = 0xC21CA15u; UPD(0x0C06B86Au, 1);  /* 0C06B868 mov.l @(disp,pc),Rn */
	r2 = 0xFFFFFFFFu;  /* 0C06B86A mov #imm,Rn */
	r5 = 0x280u; UPD(0x0C06B86Eu, 2);  /* 0C06B86C mov.w @(disp,pc),Rn */
	r7 = (u32)(s32)(s8)R8(r8); UPD(0x0C06B870u, 1);  /* 0C06B86E mov.b @Rm,Rn */
	IF(0x0C06B870u); MACL = r10 * r5;  /* 0C06B870 mul.l Rm,Rn */
	r0 = r7 & 0xFF;  /* 0C06B872 extu.b Rm,Rn */
	r3 = 0xC283794u; UPD(0x0C06B876u, 4);  /* 0C06B874 mov.l @(disp,pc),Rn */
	IF(0x0C06B876u); r0 <<= 2;  /* 0C06B876 shll2 Rn */
	r6 = 0xC21CC8Cu; UPD(0x0C06B87Au, 2);  /* 0C06B878 mov.l @(disp,pc),Rn */
	IF(0x0C06B87Au); r9 = MACL;  /* 0C06B87A sts macl,Rn */
	r9 += r3;  /* 0C06B87C add Rm,Rn */
	r0 += r0;  /* 0C06B87E add Rm,Rn */
	IF(0x0C06B880u); r0 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C06B882u, 4);  /* 0C06B880 mov.b @(r0,Rm),Rn */
	r3 = 0x254u; UPD(0x0C06B884u, 1);  /* 0C06B882 mov.w @(disp,pc),Rn */
	T = r0 == 0x5u;  /* 0C06B884 cmp/eq #imm,r0 */
	r3 += r9;  /* 0C06B886 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r3); UPD(0x0C06B88Au, 3);  /* 0C06B888 mov.b @Rm,Rn */
	IF(0x0C06B88Au); r4 = T;  /* 0C06B88A movt Rn */
	r7 = r0 & 0xFF;  /* 0C06B88C extu.b Rm,Rn */
	r0 = r7;  /* 0C06B88E mov Rm,Rn */
	T = r0 == 0x6u;  /* 0C06B890 cmp/eq #imm,r0 */
	{ u32 t_ = 0u - r2, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r0 = r_; }  /* 0C06B892 negc Rm,Rn */
	r0 &= r4;  /* 0C06B894 and Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C06B896 tst Rm,Rn */
	if (T) { UPD(0x0C06B8A0u, 10); goto L_0C06B8A0; }  /* 0C06B898 bt */
L_0C06B89A: BLKS(0x0C06B89Au);
	r7 = 0x6u;  /* 0C06B89A mov #imm,Rn */
	{ r8 = 0x54u; /* slot mov #imm,Rn */ UPD(0x0C06B9C0u, 4); goto L_0C06B9C0; }  /* 0C06B89C bra */
L_0C06B8A0: BLKS(0x0C06B8A0u);
	r9 = 0x6u;  /* 0C06B8A0 mov #imm,Rn */
	T = r7 > r9;  /* 0C06B8A2 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C06B91Au, 5); goto L_0C06B91A; }  /* 0C06B8A4 bt */
L_0C06B8A6: BLKS(0x0C06B8A6u);
	r0 = 0xC06B8C8u;  /* 0C06B8A6 mova @(disp,pc),r0 */
	r7 += r7;  /* 0C06B8A8 add Rm,Rn */
	IF(0x0C06B8AAu); r4 = (u32)(s32)(s16)R16(r0 + r7); UPD(0x0C06B8ACu, 3);  /* 0C06B8AA mov.w @(r0,Rm),Rn */
	IF(0x0C06B8ACu); { u32 tv_ = (r4 + 0x0C06B8B0u); u32 t_ = PHYS(tv_); IF(0x0C06B8AEu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C06B8E0u: goto L_0C06B8E0; case 0x0C06B9B0u: goto L_0C06B9B0; default: JUMPD(tv_); } }  /* 0C06B8AC braf Rn */
L_0C06B8E0: BLKS(0x0C06B8E0u);
	r2 = 0x280u; UPD(0x0C06B8E2u, 1);  /* 0C06B8E0 mov.w @(disp,pc),Rn */
	IF(0x0C06B8E2u); MACL = r10 * r2;  /* 0C06B8E2 mul.l Rm,Rn */
	r3 = 0xC283794u; UPD(0x0C06B8E6u, 3);  /* 0C06B8E4 mov.l @(disp,pc),Rn */
	IF(0x0C06B8E6u); r9 = MACL;  /* 0C06B8E6 sts macl,Rn */
	r6 = 0x254u; UPD(0x0C06B8EAu, 2);  /* 0C06B8E8 mov.w @(disp,pc),Rn */
	r9 += r3;  /* 0C06B8EA add Rm,Rn */
	r6 += r9;  /* 0C06B8EC add Rm,Rn */
	r3 = r6;  /* 0C06B8EE mov Rm,Rn */
	r3 += 0x1u;  /* 0C06B8F0 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r3); UPD(0x0C06B8F4u, 5);  /* 0C06B8F2 mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C06B8F4 add #imm,Rn */
	W8(r3, r0); UPD(0x0C06B8F8u, 2);  /* 0C06B8F6 mov.b Rm,@Rn */
	r8 = r0 & 0xFF;  /* 0C06B8F8 extu.b Rm,Rn */
	r7 = (u32)(s32)(s8)R8(r6); UPD(0x0C06B8FCu, 2);  /* 0C06B8FA mov.b @Rm,Rn */
	r4 = 0xC17785Cu; UPD(0x0C06B8FEu, 1);  /* 0C06B8FC mov.l @(disp,pc),Rn */
	r0 = r7 & 0xFF;  /* 0C06B8FE extu.b Rm,Rn */
	IF(0x0C06B900u); r5 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C06B902u, 2);  /* 0C06B900 mov.b @(r0,Rm),Rn */
	T = r8 == r5;  /* 0C06B902 cmp/eq Rm,Rn */
	{ u32 c_ = T; r4 = r10; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06B930u, 4); goto L_0C06B930; } goto L_0C06B908; }  /* 0C06B904 bt/s */
L_0C06B908: BLKS(0x0C06B908u);
	r8 = 0xC0AFBA0u; UPD(0x0C06B90Au, 2);  /* 0C06B908 mov.l @(disp,pc),Rn */
	IF(0x0C06B90Au); { u32 t_ = r8; PR = 0x0C06B90Eu; r5 = 0x5Du; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFBA0, 0x0C0AFBA0u, 0x0C06B90Eu); }  /* 0C06B90A jsr @Rn */
L_0C06B90E: BLKS(0x0C06B90Eu);
	r3 = 0x54u;  /* 0C06B90E mov #imm,Rn */
	IF(0x0C06B910u); MACL = r11 * r3;  /* 0C06B910 mul.l Rm,Rn */
	r10 = 0xC38C064u; UPD(0x0C06B914u, 4);  /* 0C06B912 mov.l @(disp,pc),Rn */
	r9 = 0x0u;  /* 0C06B914 mov #imm,Rn */
	IF(0x0C06B916u); r0 = MACL;  /* 0C06B916 sts macl,Rn */
	IF(0x0C06B918u); W32(r0 + r10, r9); UPD(0x0C06B91Au, 3);  /* 0C06B918 mov.l Rm,@(r0,Rn) */
L_0C06B91A: BLKS(0x0C06B91Au);
	r15 = r14;  /* 0C06B91A mov Rm,Rn */
	IF(0x0C06B91Cu); PR = R32(r15); r15 += 4; UPD(0x0C06B91Eu, 2);  /* 0C06B91C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06B920u, 1);  /* 0C06B91E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06B922u, 1);  /* 0C06B920 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06B924u, 1);  /* 0C06B922 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06B926u, 1);  /* 0C06B924 mov.l @Rm+,Rn */
	IF(0x0C06B926u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06B926 rts */
L_0C06B930: BLKS(0x0C06B930u);
	r8 = 0x54u;  /* 0C06B930 mov #imm,Rn */
	IF(0x0C06B932u); MACL = r11 * r8;  /* 0C06B932 mul.l Rm,Rn */
	r2 = r7;  /* 0C06B934 mov Rm,Rn */
	r2 += 0x1u;  /* 0C06B936 add #imm,Rn */
	r0 = 0x0u;  /* 0C06B938 mov #imm,Rn */
	r4 = 0xC38C064u; UPD(0x0C06B93Cu, 7);  /* 0C06B93A mov.l @(disp,pc),Rn */
	IF(0x0C06B93Cu); r8 = MACL;  /* 0C06B93C sts macl,Rn */
	W8(r6, r2); UPD(0x0C06B940u, 2);  /* 0C06B93E mov.b Rm,@Rn */
	r8 += r4;  /* 0C06B940 add Rm,Rn */
	W8(r3, r0); UPD(0x0C06B944u, 2);  /* 0C06B942 mov.b Rm,@Rn */
	r4 = r11;  /* 0C06B944 mov Rm,Rn */
	r5 = R32(r8); UPD(0x0C06B948u, 2);  /* 0C06B946 mov.l @Rm,Rn */
	r6 = 0x0u;  /* 0C06B948 mov #imm,Rn */
	r1 = 0xEFFFFFFBu; UPD(0x0C06B94Cu, 2);  /* 0C06B94A mov.l @(disp,pc),Rn */
	r7 = 0x8u;  /* 0C06B94C mov #imm,Rn */
	r11 = 0xC06ACA0u; UPD(0x0C06B950u, 2);  /* 0C06B94E mov.l @(disp,pc),Rn */
	r5 &= r1;  /* 0C06B950 and Rm,Rn */
	W32(r8, r5); UPD(0x0C06B954u, 2);  /* 0C06B952 mov.l Rm,@Rn */
	W32(r8 + 0x4u, r7); UPD(0x0C06B956u, 1);  /* 0C06B954 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x8u, r6); UPD(0x0C06B958u, 1);  /* 0C06B956 mov.l Rm,@(disp,Rn) */
	IF(0x0C06B958u); { u32 t_ = r11; PR = 0x0C06B95Cu; W32(r8 + 0xCu, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C06ACA0, 0x0C06ACA0u, 0x0C06B95Cu); }  /* 0C06B958 jsr @Rn */
L_0C06B95C: BLKS(0x0C06B95Cu);
	r2 = 0x3Cu;  /* 0C06B95C mov #imm,Rn */
	r8 += 0x4Fu;  /* 0C06B95E add #imm,Rn */
	W8(r8, r2); UPD(0x0C06B962u, 3);  /* 0C06B960 mov.b Rm,@Rn */
	r3 = 0x14u;  /* 0C06B962 mov #imm,Rn */
	r8 += 0xFFFFFFF5u;  /* 0C06B964 add #imm,Rn */
	W8(r8, r3); UPD(0x0C06B968u, 3);  /* 0C06B966 mov.b Rm,@Rn */
	r0 = 0x4FFFFu; UPD(0x0C06B96Au, 1);  /* 0C06B968 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFBCu;  /* 0C06B96A add #imm,Rn */
	r4 = 0x808080u; UPD(0x0C06B96Eu, 2);  /* 0C06B96C mov.l @(disp,pc),Rn */
	W32(r8 + 0x38u, r0); UPD(0x0C06B970u, 1);  /* 0C06B96E mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x3Cu, r4); UPD(0x0C06B972u, 1);  /* 0C06B970 mov.l Rm,@(disp,Rn) */
	r5 = 0x180000u; UPD(0x0C06B974u, 1);  /* 0C06B972 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C06B974 mov Rm,Rn */
	r7 = R32(r9 + 0x10u); UPD(0x0C06B978u, 2);  /* 0C06B976 mov.l @(disp,Rm),Rn */
	r7 += r5;  /* 0C06B978 add Rm,Rn */
	W32(r8 + 0x28u, r7); UPD(0x0C06B97Cu, 2);  /* 0C06B97A mov.l Rm,@(disp,Rn) */
	r6 = R32(r9 + 0x14u); UPD(0x0C06B97Eu, 1);  /* 0C06B97C mov.l @(disp,Rm),Rn */
	r1 = 0x100000u; UPD(0x0C06B980u, 1);  /* 0C06B97E mov.l @(disp,pc),Rn */
	r9 = 0xC06A560u; UPD(0x0C06B982u, 1);  /* 0C06B980 mov.l @(disp,pc),Rn */
	r6 += r1;  /* 0C06B982 add Rm,Rn */
	r11 = 0xC0AFBA0u; UPD(0x0C06B986u, 2);  /* 0C06B984 mov.l @(disp,pc),Rn */
	IF(0x0C06B986u); { u32 t_ = r9; PR = 0x0C06B98Au; W32(r8 + 0x2Cu, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C06A560, 0x0C06A560u, 0x0C06B98Au); }  /* 0C06B986 jsr @Rn */
L_0C06B98A: BLKS(0x0C06B98Au);
	r4 = r10;  /* 0C06B98A mov Rm,Rn */
	IF(0x0C06B98Cu); { u32 t_ = r11; PR = 0x0C06B990u; r5 = 0x5Eu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0AFBA0, 0x0C0AFBA0u, 0x0C06B990u); }  /* 0C06B98C jsr @Rn */
L_0C06B990: BLKS(0x0C06B990u);
	r5 = 0x9Cu; UPD(0x0C06B992u, 1);  /* 0C06B990 mov.w @(disp,pc),Rn */
	r4 = r10;  /* 0C06B992 mov Rm,Rn */
	UPD(0x0C06B994u, 1);
L_0C06B994: BLKS(0x0C06B994u);
	r1 = 0xC0AFB20u; UPD(0x0C06B996u, 1);  /* 0C06B994 mov.l @(disp,pc),Rn */
L_0C06B996: BLKS(0x0C06B996u);
	r15 = r14;  /* 0C06B996 mov Rm,Rn */
	IF(0x0C06B998u); PR = R32(r15); r15 += 4; UPD(0x0C06B99Au, 2);  /* 0C06B998 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06B99Cu, 1);  /* 0C06B99A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06B99Eu, 1);  /* 0C06B99C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06B9A0u, 1);  /* 0C06B99E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06B9A2u, 1);  /* 0C06B9A0 mov.l @Rm+,Rn */
	IF(0x0C06B9A2u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C06C2B0u: TAIL(f_0C06C2B0); case 0x0C0AFB20u: TAIL(f_0C0AFB20); default: JUMPD(tv_); } }  /* 0C06B9A2 jmp @Rn */
L_0C06B9B0: BLKS(0x0C06B9B0u);
	r1 = 0xC06C2B0u; UPD(0x0C06B9B2u, 1);  /* 0C06B9B0 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C06B9B2 mov Rm,Rn */
	{ r5 = r11; /* slot mov Rm,Rn */ UPD(0x0C06B996u, 4); goto L_0C06B996; }  /* 0C06B9B4 bra */
L_0C06B9C0: BLKS(0x0C06B9C0u);
	W8(r3, r7); UPD(0x0C06B9C2u, 1);  /* 0C06B9C0 mov.b Rm,@Rn */
	IF(0x0C06B9C2u); MACL = r11 * r8;  /* 0C06B9C2 mul.l Rm,Rn */
	r6 = 0x0u;  /* 0C06B9C4 mov #imm,Rn */
	r2 = 0xC38C064u; UPD(0x0C06B9C8u, 4);  /* 0C06B9C6 mov.l @(disp,pc),Rn */
	r3 += 0x1u;  /* 0C06B9C8 add #imm,Rn */
	W8(r3, r6); UPD(0x0C06B9CCu, 2);  /* 0C06B9CA mov.b Rm,@Rn */
	IF(0x0C06B9CCu); r8 = MACL;  /* 0C06B9CC sts macl,Rn */
	r8 += r2;  /* 0C06B9CE add Rm,Rn */
	r4 = 0x0u;  /* 0C06B9D0 mov #imm,Rn */
	W32(r8 + 0xCu, r4); UPD(0x0C06B9D4u, 4);  /* 0C06B9D2 mov.l Rm,@(disp,Rn) */
	r3 = 0x8u;  /* 0C06B9D4 mov #imm,Rn */
	r5 = R32(r8); UPD(0x0C06B9D8u, 2);  /* 0C06B9D6 mov.l @Rm,Rn */
	r4 = r11;  /* 0C06B9D8 mov Rm,Rn */
	r1 = 0xEFFFFFFBu; UPD(0x0C06B9DCu, 2);  /* 0C06B9DA mov.l @(disp,pc),Rn */
	r0 = 0xAu;  /* 0C06B9DC mov #imm,Rn */
	r11 = 0xC06ACA0u; UPD(0x0C06B9E0u, 2);  /* 0C06B9DE mov.l @(disp,pc),Rn */
	r5 &= r1;  /* 0C06B9E0 and Rm,Rn */
	W32(r8, r5); UPD(0x0C06B9E4u, 2);  /* 0C06B9E2 mov.l Rm,@Rn */
	W32(r8 + 0x4u, r3); UPD(0x0C06B9E6u, 1);  /* 0C06B9E4 mov.l Rm,@(disp,Rn) */
	IF(0x0C06B9E6u); { u32 t_ = r11; PR = 0x0C06B9EAu; W32(r8 + 0x8u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C06ACA0, 0x0C06ACA0u, 0x0C06B9EAu); }  /* 0C06B9E6 jsr @Rn */
L_0C06B9EA: BLKS(0x0C06B9EAu);
	r7 = 0x3Cu;  /* 0C06B9EA mov #imm,Rn */
	r8 += 0x4Fu;  /* 0C06B9EC add #imm,Rn */
	W8(r8, r7); UPD(0x0C06B9F0u, 3);  /* 0C06B9EE mov.b Rm,@Rn */
	r6 = 0x14u;  /* 0C06B9F0 mov #imm,Rn */
	r8 += 0xFFFFFFF5u;  /* 0C06B9F2 add #imm,Rn */
	W8(r8, r6); UPD(0x0C06B9F6u, 3);  /* 0C06B9F4 mov.b Rm,@Rn */
	r5 = 0x4FFFFu; UPD(0x0C06B9F8u, 1);  /* 0C06B9F6 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFBCu;  /* 0C06B9F8 add #imm,Rn */
	r2 = 0x808080u; UPD(0x0C06B9FCu, 2);  /* 0C06B9FA mov.l @(disp,pc),Rn */
	W32(r8 + 0x38u, r5); UPD(0x0C06B9FEu, 1);  /* 0C06B9FC mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x3Cu, r2); UPD(0x0C06BA00u, 1);  /* 0C06B9FE mov.l Rm,@(disp,Rn) */
	r3 = 0x180000u; UPD(0x0C06BA02u, 1);  /* 0C06BA00 mov.l @(disp,pc),Rn */
	r0 = R32(r9 + 0x10u); UPD(0x0C06BA04u, 1);  /* 0C06BA02 mov.l @(disp,Rm),Rn */
	r0 += r3;  /* 0C06BA04 add Rm,Rn */
	W32(r8 + 0x28u, r0); UPD(0x0C06BA08u, 2);  /* 0C06BA06 mov.l Rm,@(disp,Rn) */
	r1 = 0x100000u; UPD(0x0C06BA0Au, 1);  /* 0C06BA08 mov.l @(disp,pc),Rn */
	r4 = R32(r9 + 0x14u); UPD(0x0C06BA0Cu, 1);  /* 0C06BA0A mov.l @(disp,Rm),Rn */
	r4 += r1;  /* 0C06BA0C add Rm,Rn */
	W32(r8 + 0x2Cu, r4); UPD(0x0C06BA10u, 2);  /* 0C06BA0E mov.l Rm,@(disp,Rn) */
	r8 = 0xC06A560u; UPD(0x0C06BA12u, 1);  /* 0C06BA10 mov.l @(disp,pc),Rn */
	r11 = 0xC0AFBA0u; UPD(0x0C06BA14u, 1);  /* 0C06BA12 mov.l @(disp,pc),Rn */
	IF(0x0C06BA14u); { u32 t_ = r8; PR = 0x0C06BA18u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C06A560, 0x0C06A560u, 0x0C06BA18u); }  /* 0C06BA14 jsr @Rn */
L_0C06BA18: BLKS(0x0C06BA18u);
	r4 = r10;  /* 0C06BA18 mov Rm,Rn */
	IF(0x0C06BA1Au); { u32 t_ = r11; PR = 0x0C06BA1Eu; r5 = 0x5Eu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0AFBA0, 0x0C0AFBA0u, 0x0C06BA1Eu); }  /* 0C06BA1A jsr @Rn */
L_0C06BA1E: BLKS(0x0C06BA1Eu);
	r5 = 0x9Du; UPD(0x0C06BA20u, 1);  /* 0C06BA1E mov.w @(disp,pc),Rn */
	{ r4 = r10; /* slot mov Rm,Rn */ UPD(0x0C06B994u, 3); goto L_0C06B994; }  /* 0C06BA20 bra */
}

void f_0C06BA60(sh3_t *c)
{
	LOCALS;
L_0C06BA60: BLKS(0x0C06BA60u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06BA62u, 1);  /* 0C06BA60 mov.l Rm,@-Rn */
	r3 = 0x54u;  /* 0C06BA62 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C06BA66u, 2);  /* 0C06BA64 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C06BA68u, 1);  /* 0C06BA66 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s16)r5;  /* 0C06BA68 exts.w Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06BA6Cu, 2);  /* 0C06BA6A mov.l Rm,@-Rn */
	IF(0x0C06BA6Cu); MACL = r9 * r3;  /* 0C06BA6C mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06BA70u, 3);  /* 0C06BA6E mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C06BA70 exts.w Rm,Rn */
	r10 = 0xC38C064u; UPD(0x0C06BA74u, 2);  /* 0C06BA72 mov.l @(disp,pc),Rn */
	IF(0x0C06BA74u); r8 = MACL;  /* 0C06BA74 sts macl,Rn */
	IF(0x0C06BA76u); r15 -= 4; W32(r15, PR); UPD(0x0C06BA78u, 2);  /* 0C06BA76 sts.l pr,@-Rn */
	r8 += r10;  /* 0C06BA78 add Rm,Rn */
	r8 += 0xAu;  /* 0C06BA7A add #imm,Rn */
	r4 = (u32)(s32)(s16)R16(r8); UPD(0x0C06BA7Eu, 3);  /* 0C06BA7C mov.w @Rm,Rn */
	r14 = r15;  /* 0C06BA7E mov Rm,Rn */
	r2 = 0xC177868u; UPD(0x0C06BA82u, 2);  /* 0C06BA80 mov.l @(disp,pc),Rn */
	IF(0x0C06BA82u); r4 <<= 2;  /* 0C06BA82 shll2 Rn */
	r0 = r4;  /* 0C06BA84 mov Rm,Rn */
	IF(0x0C06BA86u); r4 = R32(r0 + r2); UPD(0x0C06BA88u, 3);  /* 0C06BA86 mov.l @(r0,Rm),Rn */
	r0 = 0xC060350u; UPD(0x0C06BA8Au, 1);  /* 0C06BA88 mov.l @(disp,pc),Rn */
	IF(0x0C06BA8Au); { u32 t_ = r0; PR = 0x0C06BA8Eu; r8 += 0xFFFFFFF6u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C060350, 0x0C060350u, 0x0C06BA8Eu); }  /* 0C06BA8A jsr @Rn */
L_0C06BA8E: BLKS(0x0C06BA8Eu);
	r0 = 0xC06C2B0u; UPD(0x0C06BA90u, 1);  /* 0C06BA8E mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C06BA90 mov Rm,Rn */
	IF(0x0C06BA92u); { u32 t_ = r0; PR = 0x0C06BA96u; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C06C2B0, 0x0C06C2B0u, 0x0C06BA96u); }  /* 0C06BA92 jsr @Rn */
L_0C06BA96: BLKS(0x0C06BA96u);
	r1 = R32(r8 + 0x8u); UPD(0x0C06BA98u, 1);  /* 0C06BA96 mov.l @(disp,Rm),Rn */
	r0 = 0x11u;  /* 0C06BA98 mov #imm,Rn */
	T = (s32)r1 > (s32)r0;  /* 0C06BA9A cmp/gt Rm,Rn */
	if (T) { UPD(0x0C06BB02u, 5); goto L_0C06BB02; }  /* 0C06BA9C bt */
L_0C06BA9E: BLKS(0x0C06BA9Eu);
	r5 = 0x0u;  /* 0C06BA9E mov #imm,Rn */
	r4 = 0x13Fu; UPD(0x0C06BAA2u, 2);  /* 0C06BAA0 mov.w @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C06BAA2 mov #imm,Rn */
	r6 = 0xFFFFFFFFu;  /* 0C06BAA4 mov #imm,Rn */
	r7 = r10;  /* 0C06BAA6 mov Rm,Rn */
	UPD(0x0C06BAA8u, 3);
L_0C06BAA8: BLKS(0x0C06BAA8u);
	T = r9 == r3;  /* 0C06BAA8 cmp/eq Rm,Rn */
	r2 = R32(r7); UPD(0x0C06BAACu, 2);  /* 0C06BAAA mov.l @Rm,Rn */
	{ u32 t_ = 0u - r6, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r10 = r_; }  /* 0C06BAAC negc Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C06BAAE tst Rm,Rn */
	{ u32 t_ = 0u - r6, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r0 = r_; }  /* 0C06BAB0 negc Rm,Rn */
	r10 &= r0;  /* 0C06BAB2 and Rm,Rn */
	r0 = R32(r7 + 0x4u); UPD(0x0C06BAB6u, 5);  /* 0C06BAB4 mov.l @(disp,Rm),Rn */
	T = r0 == 0x3u;  /* 0C06BAB6 cmp/eq #imm,r0 */
	IF(0x0C06BAB8u); r8 = T;  /* 0C06BAB8 movt Rn */
	T = (r10 & r8) == 0;  /* 0C06BABA tst Rm,Rn */
	{ u32 c_ = T; r10 = r3; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06BAC8u, 6); goto L_0C06BAC8; } goto L_0C06BAC0; }  /* 0C06BABC bt/s */
L_0C06BAC0: BLKS(0x0C06BAC0u);
	r8 = r5;  /* 0C06BAC0 mov Rm,Rn */
	r8 += 0x1u;  /* 0C06BAC2 add #imm,Rn */
	r5 = (u32)(s32)(s16)r8;  /* 0C06BAC4 exts.w Rm,Rn */
	r10 = r3;  /* 0C06BAC6 mov Rm,Rn */
	UPD(0x0C06BAC8u, 5);
L_0C06BAC8: BLKS(0x0C06BAC8u);
	r10 += 0x1u;  /* 0C06BAC8 add #imm,Rn */
	r3 = (u32)(s32)(s16)r10;  /* 0C06BACA exts.w Rm,Rn */
	T = (s32)r3 > (s32)r4;  /* 0C06BACC cmp/gt Rm,Rn */
	{ u32 c_ = !T; r7 += 0x54u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06BAA8u, 6); goto L_0C06BAA8; } goto L_0C06BAD2; }  /* 0C06BACE bf/s */
L_0C06BAD2: BLKS(0x0C06BAD2u);
	r0 = 0x54u;  /* 0C06BAD2 mov #imm,Rn */
	IF(0x0C06BAD4u); MACL = r9 * r0;  /* 0C06BAD4 mul.l Rm,Rn */
	r4 = 0xC38C064u; UPD(0x0C06BAD8u, 5);  /* 0C06BAD6 mov.l @(disp,pc),Rn */
	r3 = 0xC392D78u; UPD(0x0C06BADAu, 1);  /* 0C06BAD8 mov.l @(disp,pc),Rn */
	IF(0x0C06BADAu); r0 = MACL;  /* 0C06BADA sts macl,Rn */
	r0 += r4;  /* 0C06BADC add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r3); UPD(0x0C06BAE0u, 3);  /* 0C06BADE mov.b @Rm,Rn */
	r9 = R32(r0 + 0x8u); UPD(0x0C06BAE2u, 1);  /* 0C06BAE0 mov.l @(disp,Rm),Rn */
	r7 = r1 & 0xFF;  /* 0C06BAE2 extu.b Rm,Rn */
	r9 += 0x1u;  /* 0C06BAE4 add #imm,Rn */
	T = (s32)r9 > (s32)r7;  /* 0C06BAE6 cmp/gt Rm,Rn */
	IF(0x0C06BAE8u); r6 = T;  /* 0C06BAE8 movt Rn */
	T = (r5 & r5) == 0;  /* 0C06BAEA tst Rm,Rn */
	IF(0x0C06BAECu); r5 = T;  /* 0C06BAEC movt Rn */
	r6 &= r5;  /* 0C06BAEE and Rm,Rn */
	T = (r6 & r6) == 0;  /* 0C06BAF0 tst Rm,Rn */
	if (T) { UPD(0x0C06BB02u, 11); goto L_0C06BB02; }  /* 0C06BAF2 bt */
L_0C06BAF4: BLKS(0x0C06BAF4u);
	r0 += 0xBu;  /* 0C06BAF4 add #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r0); UPD(0x0C06BAF8u, 2);  /* 0C06BAF6 mov.b @Rm,Rn */
	r2 += 0x1u;  /* 0C06BAF8 add #imm,Rn */
	r0 = r2 & 0xFF;  /* 0C06BAFA extu.b Rm,Rn */
	T = r0 == 0x12u;  /* 0C06BAFC cmp/eq #imm,r0 */
	{ u32 c_ = T; W8(r3, r2); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C06BB20u, 6); goto L_0C06BB20; } UPD(0x0C06BB02u, 1); goto L_0C06BB02; }  /* 0C06BAFE bt/s */
L_0C06BB02: BLKS(0x0C06BB02u);
	r15 = r14;  /* 0C06BB02 mov Rm,Rn */
	IF(0x0C06BB04u); PR = R32(r15); r15 += 4; UPD(0x0C06BB06u, 2);  /* 0C06BB04 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06BB08u, 1);  /* 0C06BB06 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06BB0Au, 1);  /* 0C06BB08 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06BB0Cu, 1);  /* 0C06BB0A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06BB0Eu, 1);  /* 0C06BB0C mov.l @Rm+,Rn */
	IF(0x0C06BB0Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06BB0E rts */
L_0C06BB20: BLKS(0x0C06BB20u);
	r10 = 0xC177864u; UPD(0x0C06BB22u, 1);  /* 0C06BB20 mov.l @(disp,pc),Rn */
	r0 = r10;  /* 0C06BB22 mov Rm,Rn */
	IF(0x0C06BB24u); r8 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C06BB26u, 2);  /* 0C06BB24 mov.b @(r0,Rm),Rn */
	r3 = 0xC0AFC10u; UPD(0x0C06BB28u, 1);  /* 0C06BB26 mov.l @(disp,pc),Rn */
	r4 = r8 & 0xFF;  /* 0C06BB28 extu.b Rm,Rn */
	r15 = r14;  /* 0C06BB2A mov Rm,Rn */
	IF(0x0C06BB2Cu); PR = R32(r15); r15 += 4; UPD(0x0C06BB2Eu, 3);  /* 0C06BB2C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06BB30u, 1);  /* 0C06BB2E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06BB32u, 1);  /* 0C06BB30 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06BB34u, 1);  /* 0C06BB32 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06BB36u, 1);  /* 0C06BB34 mov.l @Rm+,Rn */
	IF(0x0C06BB36u); { u32 tv_ = r3; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0AFC10u: TAIL(f_0C0AFC10); default: JUMPD(tv_); } }  /* 0C06BB36 jmp @Rn */
}

void f_0C06BB60(sh3_t *c)
{
	LOCALS;
L_0C06BB60: BLKS(0x0C06BB60u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06BB62u, 1);  /* 0C06BB60 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C06BB64u, 1);  /* 0C06BB62 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C06BB66u, 1);  /* 0C06BB64 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06BB68u, 1);  /* 0C06BB66 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C06BB6Au, 1);  /* 0C06BB68 mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C06BB6A exts.w Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C06BB6Eu, 2);  /* 0C06BB6C mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06BB70u, 1);  /* 0C06BB6E mov.l Rm,@-Rn */
	r13 = (u32)(s32)(s16)r5;  /* 0C06BB70 exts.w Rm,Rn */
	IF(0x0C06BB72u); r15 -= 4; W32(r15, PR); UPD(0x0C06BB74u, 2);  /* 0C06BB72 sts.l pr,@-Rn */
	r10 = 0xC060350u; UPD(0x0C06BB76u, 1);  /* 0C06BB74 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFC4u;  /* 0C06BB76 add #imm,Rn */
	r4 = 0x10000u; UPD(0x0C06BB7Au, 2);  /* 0C06BB78 mov.l @(disp,pc),Rn */
	IF(0x0C06BB7Au); { u32 t_ = r10; PR = 0x0C06BB7Eu; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C060350, 0x0C060350u, 0x0C06BB7Eu); }  /* 0C06BB7A jsr @Rn */
L_0C06BB7E: BLKS(0x0C06BB7Eu);
	r7 = 0x54u;  /* 0C06BB7E mov #imm,Rn */
	IF(0x0C06BB80u); MACL = r13 * r7;  /* 0C06BB80 mul.l Rm,Rn */
	r9 = 0xC38C064u; UPD(0x0C06BB84u, 4);  /* 0C06BB82 mov.l @(disp,pc),Rn */
	IF(0x0C06BB84u); r7 = MACL;  /* 0C06BB84 sts macl,Rn */
	r7 += r9;  /* 0C06BB86 add Rm,Rn */
	r5 = R32(r7 + 0x8u); UPD(0x0C06BB8Au, 3);  /* 0C06BB88 mov.l @(disp,Rm),Rn */
	r5 += r5;  /* 0C06BB8A add Rm,Rn */
	r10 = r5;  /* 0C06BB8C mov Rm,Rn */
	r8 = 0xC1778CCu; UPD(0x0C06BB90u, 3);  /* 0C06BB8E mov.l @(disp,pc),Rn */
	r5 += r5;  /* 0C06BB90 add Rm,Rn */
	r5 += r8;  /* 0C06BB92 add Rm,Rn */
	r6 = (u32)(s32)(s16)R16(r5); UPD(0x0C06BB96u, 3);  /* 0C06BB94 mov.w @Rm,Rn */
	r10 += r11;  /* 0C06BB96 add Rm,Rn */
	r5 += 0x3u;  /* 0C06BB98 add #imm,Rn */
	r2 = 0x280u; UPD(0x0C06BB9Cu, 3);  /* 0C06BB9A mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s8)R8(r5); UPD(0x0C06BB9Eu, 1);  /* 0C06BB9C mov.b @Rm,Rn */
	IF(0x0C06BB9Eu); MACL = r11 * r2;  /* 0C06BB9E mul.l Rm,Rn */
	r3 = r4 & 0xFF;  /* 0C06BBA0 extu.b Rm,Rn */
	W32(r14 + 0x4u, r3); UPD(0x0C06BBA4u, 4);  /* 0C06BBA2 mov.l Rm,@(disp,Rn) */
	r0 = 0xC283794u; UPD(0x0C06BBA6u, 1);  /* 0C06BBA4 mov.l @(disp,pc),Rn */
	IF(0x0C06BBA6u); r3 = MACL;  /* 0C06BBA6 sts macl,Rn */
	r3 += r0;  /* 0C06BBA8 add Rm,Rn */
	r1 = R32(r3 + 0x10u); UPD(0x0C06BBACu, 3);  /* 0C06BBAA mov.l @(disp,Rm),Rn */
	r0 = R32(r7 + 0x28u); UPD(0x0C06BBAEu, 1);  /* 0C06BBAC mov.l @(disp,Rm),Rn */
	T = (s32)r1 > (s32)r0;  /* 0C06BBAE cmp/gt Rm,Rn */
	r2 = 0xC1778C4u; UPD(0x0C06BBB2u, 2);  /* 0C06BBB0 mov.l @(disp,pc),Rn */
	{ u32 c_ = T; W32(r14, r6); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C06BBC2u, 3); goto L_0C06BBC2; } UPD(0x0C06BBB6u, 1); goto L_0C06BBB6; }  /* 0C06BBB2 bt/s */
L_0C06BBB6: BLKS(0x0C06BBB6u);
	r1 = R32(r3 + 0x14u); UPD(0x0C06BBB8u, 1);  /* 0C06BBB6 mov.l @(disp,Rm),Rn */
	r12 = R32(r7 + 0x2Cu); UPD(0x0C06BBBAu, 1);  /* 0C06BBB8 mov.l @(disp,Rm),Rn */
	r2 = 0xC1778B4u; UPD(0x0C06BBBCu, 1);  /* 0C06BBBA mov.l @(disp,pc),Rn */
	T = (s32)r1 > (s32)r12;  /* 0C06BBBC cmp/gt Rm,Rn */
	if (T) { UPD(0x0C06BBC2u, 4); goto L_0C06BBC2; }  /* 0C06BBBE bt */
L_0C06BBC0: BLKS(0x0C06BBC0u);
	r2 = 0xC1778BCu; UPD(0x0C06BBC2u, 1);  /* 0C06BBC0 mov.l @(disp,pc),Rn */
L_0C06BBC2: BLKS(0x0C06BBC2u);
	r3 = 0x90u; UPD(0x0C06BBC4u, 1);  /* 0C06BBC2 mov.w @(disp,pc),Rn */
	r0 = 0x0u;  /* 0C06BBC4 mov #imm,Rn */
	IF(0x0C06BBC6u); MACL = r11 * r3;  /* 0C06BBC6 mul.l Rm,Rn */
	r9 = 0xC27DC84u; UPD(0x0C06BBCAu, 4);  /* 0C06BBC8 mov.l @(disp,pc),Rn */
	r8 = 0x30u;  /* 0C06BBCA mov #imm,Rn */
	IF(0x0C06BBCCu); r5 = MACL;  /* 0C06BBCC sts macl,Rn */
	r4 = 0x3u;  /* 0C06BBCE mov #imm,Rn */
	UPD(0x0C06BBD0u, 3);
L_0C06BBD0: BLKS(0x0C06BBD0u);
	{ u32 v_ = (u32)(s32)(s16)R16(r2); r2 += 2; r6 = v_; } UPD(0x0C06BBD2u, 1);  /* 0C06BBD0 mov.w @Rm+,Rn */
	T = r0 == 0x3u;  /* 0C06BBD2 cmp/eq #imm,r0 */
	r12 = r6 & 0xFFFF;  /* 0C06BBD4 extu.w Rm,Rn */
	IF(0x0C06BBD6u); MACL = r12 * r8;  /* 0C06BBD6 mul.l Rm,Rn */
	IF(0x0C06BBD8u); r1 = T;  /* 0C06BBD8 movt Rn */
	IF(0x0C06BBDAu); r3 = MACL;  /* 0C06BBDA sts macl,Rn */
	r3 += r5;  /* 0C06BBDC add Rm,Rn */
	r3 += r9;  /* 0C06BBDE add Rm,Rn */
	r6 = R32(r3); UPD(0x0C06BBE2u, 9);  /* 0C06BBE0 mov.l @Rm,Rn */
	T = (r6 & r6) == 0;  /* 0C06BBE2 tst Rm,Rn */
	IF(0x0C06BBE4u); r7 = T;  /* 0C06BBE4 movt Rn */
	r1 |= r7;  /* 0C06BBE6 or Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C06BBE8 tst Rm,Rn */
	{ u32 c_ = !T; r1 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06BBF6u, 7); goto L_0C06BBF6; } goto L_0C06BBEE; }  /* 0C06BBEA bf/s */
L_0C06BBEE: BLKS(0x0C06BBEEu);
	r1 += 0x1u;  /* 0C06BBEE add #imm,Rn */
	r0 = r1 & 0xFFFF;  /* 0C06BBF0 extu.w Rm,Rn */
	T = r0 > r4;  /* 0C06BBF2 cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C06BBD0u, 7); goto L_0C06BBD0; }  /* 0C06BBF4 bf */
L_0C06BBF6: BLKS(0x0C06BBF6u);
	IF(0x0C06BBF6u); T = (s32)r7 > 0;  /* 0C06BBF6 cmp/pl Rn */
	if (!T) { UPD(0x0C06BC00u, 4); goto L_0C06BC00; }  /* 0C06BBF8 bf */
L_0C06BBFA: BLKS(0x0C06BBFAu);
	r7 = r3;  /* 0C06BBFA mov Rm,Rn */
	{ r5 = 0x40u; /* slot mov #imm,Rn */ UPD(0x0C06C1C0u, 4); goto L_0C06C1C0; }  /* 0C06BBFC bra */
L_0C06BC00: BLKS(0x0C06BC00u);
	r6 = R32(r3 + 0x10u); UPD(0x0C06BC02u, 1);  /* 0C06BC00 mov.l @(disp,Rm),Rn */
	T = r6 == r10;  /* 0C06BC02 cmp/eq Rm,Rn */
	{ u32 c_ = !T; r5 = 0x8u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C06BC0Cu, 4); goto L_0C06BC0C; } goto L_0C06BC08; }  /* 0C06BC04 bf/s */
L_0C06BC08: BLKS(0x0C06BC08u);
	{ r4 = r11; /* slot mov Rm,Rn */ UPD(0x0C06C170u, 4); goto L_0C06C170; }  /* 0C06BC08 bra */
L_0C06BC0C: BLKS(0x0C06BC0Cu);
	r8 = 0x280u; UPD(0x0C06BC0Eu, 1);  /* 0C06BC0C mov.w @(disp,pc),Rn */
	IF(0x0C06BC0Eu); MACL = r11 * r8;  /* 0C06BC0E mul.l Rm,Rn */
	r0 = 0xC283794u; UPD(0x0C06BC12u, 3);  /* 0C06BC10 mov.l @(disp,pc),Rn */
	IF(0x0C06BC12u); r8 = MACL;  /* 0C06BC12 sts macl,Rn */
	r8 += r0;  /* 0C06BC14 add Rm,Rn */
	W32(r3 + 0x10u, r10); UPD(0x0C06BC18u, 3);  /* 0C06BC16 mov.l Rm,@(disp,Rn) */
	r0 = r8;  /* 0C06BC18 mov Rm,Rn */
	r6 = 0x265u; UPD(0x0C06BC1Cu, 2);  /* 0C06BC1A mov.w @(disp,pc),Rn */
	r0 += r12;  /* 0C06BC1C add Rm,Rn */
	IF(0x0C06BC1Eu); W8(r0 + r6, r10); UPD(0x0C06BC20u, 2);  /* 0C06BC1E mov.b Rm,@(r0,Rn) */
	r10 = 0x54u;  /* 0C06BC20 mov #imm,Rn */
	IF(0x0C06BC22u); MACL = r13 * r10;  /* 0C06BC22 mul.l Rm,Rn */
	r2 = 0xC38C064u; UPD(0x0C06BC26u, 4);  /* 0C06BC24 mov.l @(disp,pc),Rn */
	IF(0x0C06BC26u); r10 = MACL;  /* 0C06BC26 sts macl,Rn */
	r10 += r2;  /* 0C06BC28 add Rm,Rn */
	r4 = R32(r10); UPD(0x0C06BC2Cu, 3);  /* 0C06BC2A mov.l @Rm,Rn */
	r1 = 0xEFFFFFFBu; UPD(0x0C06BC2Eu, 1);  /* 0C06BC2C mov.l @(disp,pc),Rn */
	r3 = R32(r14); UPD(0x0C06BC30u, 1);  /* 0C06BC2E mov.l @Rm,Rn */
	r4 &= r1;  /* 0C06BC30 and Rm,Rn */
	r9 = 0xC06ACA0u; UPD(0x0C06BC34u, 2);  /* 0C06BC32 mov.l @(disp,pc),Rn */
	W32(r10, r4); UPD(0x0C06BC36u, 1);  /* 0C06BC34 mov.l Rm,@Rn */
	W32(r10 + 0x4u, r5); UPD(0x0C06BC38u, 1);  /* 0C06BC36 mov.l Rm,@(disp,Rn) */
	r4 = r13;  /* 0C06BC38 mov Rm,Rn */
	W32(r10 + 0x8u, r3); UPD(0x0C06BC3Cu, 2);  /* 0C06BC3A mov.l Rm,@(disp,Rn) */
	IF(0x0C06BC3Cu); { u32 t_ = r9; PR = 0x0C06BC40u; W32(r10 + 0xCu, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C06ACA0, 0x0C06ACA0u, 0x0C06BC40u); }  /* 0C06BC3C jsr @Rn */
L_0C06BC40: BLKS(0x0C06BC40u);
	r6 = 0x3Cu;  /* 0C06BC40 mov #imm,Rn */
	r10 += 0x4Fu;  /* 0C06BC42 add #imm,Rn */
	W8(r10, r6); UPD(0x0C06BC46u, 3);  /* 0C06BC44 mov.b Rm,@Rn */
	r0 = 0x14u;  /* 0C06BC46 mov #imm,Rn */
	r10 += 0xFFFFFFF5u;  /* 0C06BC48 add #imm,Rn */
	W8(r10, r0); UPD(0x0C06BC4Cu, 3);  /* 0C06BC4A mov.b Rm,@Rn */
	r2 = 0x808080u; UPD(0x0C06BC4Eu, 1);  /* 0C06BC4C mov.l @(disp,pc),Rn */
	r10 += 0xFFFFFFBCu;  /* 0C06BC4E add #imm,Rn */
	r4 = 0x4FFFFu; UPD(0x0C06BC52u, 2);  /* 0C06BC50 mov.l @(disp,pc),Rn */
	W32(r10 + 0x3Cu, r2); UPD(0x0C06BC54u, 1);  /* 0C06BC52 mov.l Rm,@(disp,Rn) */
	W32(r10 + 0x38u, r4); UPD(0x0C06BC56u, 1);  /* 0C06BC54 mov.l Rm,@(disp,Rn) */
	r7 = 0x180000u; UPD(0x0C06BC58u, 1);  /* 0C06BC56 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C06BC58 mov Rm,Rn */
	r5 = R32(r8 + 0x10u); UPD(0x0C06BC5Cu, 2);  /* 0C06BC5A mov.l @(disp,Rm),Rn */
	r5 += r7;  /* 0C06BC5C add Rm,Rn */
	W32(r10 + 0x28u, r5); UPD(0x0C06BC60u, 2);  /* 0C06BC5E mov.l Rm,@(disp,Rn) */
	r1 = 0x100000u; UPD(0x0C06BC62u, 1);  /* 0C06BC60 mov.l @(disp,pc),Rn */
	r3 = R32(r8 + 0x14u); UPD(0x0C06BC64u, 1);  /* 0C06BC62 mov.l @(disp,Rm),Rn */
	r9 = 0xC06A560u; UPD(0x0C06BC66u, 1);  /* 0C06BC64 mov.l @(disp,pc),Rn */
	r3 += r1;  /* 0C06BC66 add Rm,Rn */
	IF(0x0C06BC68u); { u32 t_ = r9; PR = 0x0C06BC6Cu; W32(r10 + 0x2Cu, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C06A560, 0x0C06A560u, 0x0C06BC6Cu); }  /* 0C06BC68 jsr @Rn */
L_0C06BC6C: BLKS(0x0C06BC6Cu);
	r8 = 0xC0AFBA0u; UPD(0x0C06BC6Eu, 1);  /* 0C06BC6C mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C06BC6E mov Rm,Rn */
	r10 = 0xC0AFB20u; UPD(0x0C06BC72u, 2);  /* 0C06BC70 mov.l @(disp,pc),Rn */
	IF(0x0C06BC72u); { u32 t_ = r8; PR = 0x0C06BC76u; r5 = 0x5Fu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFBA0, 0x0C0AFBA0u, 0x0C06BC76u); }  /* 0C06BC72 jsr @Rn */
L_0C06BC76: BLKS(0x0C06BC76u);
	r5 = R32(r14 + 0x4u); UPD(0x0C06BC78u, 1);  /* 0C06BC76 mov.l @(disp,Rm),Rn */
	IF(0x0C06BC78u); { u32 t_ = r10; PR = 0x0C06BC7Cu; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFB20, 0x0C0AFB20u, 0x0C06BC7Cu); }  /* 0C06BC78 jsr @Rn */
L_0C06BC7C: BLKS(0x0C06BC7Cu);
	r4 = 0xC21CA15u; UPD(0x0C06BC7Eu, 1);  /* 0C06BC7C mov.l @(disp,pc),Rn */
	r3 = (u32)(s32)(s8)R8(r4); UPD(0x0C06BC80u, 1);  /* 0C06BC7E mov.b @Rm,Rn */
	r9 = r3 & 0xFF;  /* 0C06BC80 extu.b Rm,Rn */
	IF(0x0C06BC82u); r9 <<= 2;  /* 0C06BC82 shll2 Rn */
	r5 = 0xC21CC8Cu; UPD(0x0C06BC86u, 3);  /* 0C06BC84 mov.l @(disp,pc),Rn */
	r9 += r9;  /* 0C06BC86 add Rm,Rn */
	r9 += r5;  /* 0C06BC88 add Rm,Rn */
	r9 += 0x2u;  /* 0C06BC8A add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C06BC8Eu, 4);  /* 0C06BC8C mov.b @Rm,Rn */
	T = r0 == 0x5u;  /* 0C06BC8E cmp/eq #imm,r0 */
	{ u32 c_ = !T; r1 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C06BC98u, 4); goto L_0C06BC98; } goto L_0C06BC94; }  /* 0C06BC90 bf/s */
L_0C06BC94: BLKS(0x0C06BC94u);
	{ IF(0x0C06BC96u); ; /* slot nop */ UPD(0x0C06C080u, 4); goto L_0C06C080; }  /* 0C06BC94 bra */
L_0C06BC98: BLKS(0x0C06BC98u);
	r10 = (u32)(s32)(s16)r1;  /* 0C06BC98 exts.w Rm,Rn */
	T = (r10 & r10) == 0;  /* 0C06BC9A tst Rm,Rn */
	if (!T) { UPD(0x0C06BD14u, 5); goto L_0C06BD14; }  /* 0C06BC9C bf */
L_0C06BC9E: BLKS(0x0C06BC9Eu);
	r3 = 0xC21CA15u; UPD(0x0C06BCA0u, 1);  /* 0C06BC9E mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s8)R8(r3); UPD(0x0C06BCA2u, 1);  /* 0C06BCA0 mov.b @Rm,Rn */
	r5 = r2 & 0xFF;  /* 0C06BCA2 extu.b Rm,Rn */
	r0 = 0xC21CC8Cu; UPD(0x0C06BCA6u, 2);  /* 0C06BCA4 mov.l @(disp,pc),Rn */
	IF(0x0C06BCA6u); r5 <<= 2;  /* 0C06BCA6 shll2 Rn */
	r5 += r5;  /* 0C06BCA8 add Rm,Rn */
	r5 += r0;  /* 0C06BCAA add Rm,Rn */
	r5 += 0x1u;  /* 0C06BCAC add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r5); UPD(0x0C06BCB0u, 5);  /* 0C06BCAE mov.b @Rm,Rn */
	T = r0 == 0x5u;  /* 0C06BCB0 cmp/eq #imm,r0 */
	{ u32 c_ = !T; r1 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C06BCBAu, 4); goto L_0C06BCBA; } goto L_0C06BCB6; }  /* 0C06BCB2 bf/s */
L_0C06BCB6: BLKS(0x0C06BCB6u);
	{ IF(0x0C06BCB8u); ; /* slot nop */ UPD(0x0C06BFA0u, 4); goto L_0C06BFA0; }  /* 0C06BCB6 bra */
L_0C06BCBA: BLKS(0x0C06BCBAu);
	r9 = (u32)(s32)(s16)r1;  /* 0C06BCBA exts.w Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C06BCBC tst Rm,Rn */
	if (!T) { UPD(0x0C06BD14u, 5); goto L_0C06BD14; }  /* 0C06BCBE bf */
L_0C06BCC0: BLKS(0x0C06BCC0u);
	r6 = 0xC21CA15u; UPD(0x0C06BCC2u, 1);  /* 0C06BCC0 mov.l @(disp,pc),Rn */
	r4 = (u32)(s32)(s8)R8(r6); UPD(0x0C06BCC4u, 1);  /* 0C06BCC2 mov.b @Rm,Rn */
	r10 = r4 & 0xFF;  /* 0C06BCC4 extu.b Rm,Rn */
	r0 = 0xC21CC8Cu; UPD(0x0C06BCC8u, 2);  /* 0C06BCC6 mov.l @(disp,pc),Rn */
	IF(0x0C06BCC8u); r10 <<= 2;  /* 0C06BCC8 shll2 Rn */
	r10 += r10;  /* 0C06BCCA add Rm,Rn */
	r10 += r0;  /* 0C06BCCC add Rm,Rn */
	r10 += 0x3u;  /* 0C06BCCE add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r10); UPD(0x0C06BCD2u, 5);  /* 0C06BCD0 mov.b @Rm,Rn */
	T = r0 == 0x5u;  /* 0C06BCD2 cmp/eq #imm,r0 */
	{ u32 c_ = !T; r1 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C06BCDCu, 4); goto L_0C06BCDC; } goto L_0C06BCD8; }  /* 0C06BCD4 bf/s */
L_0C06BCD8: BLKS(0x0C06BCD8u);
	{ IF(0x0C06BCDAu); ; /* slot nop */ UPD(0x0C06BE80u, 4); goto L_0C06BE80; }  /* 0C06BCD8 bra */
L_0C06BCDC: BLKS(0x0C06BCDCu);
	r9 = (u32)(s32)(s16)r1;  /* 0C06BCDC exts.w Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C06BCDE tst Rm,Rn */
	if (!T) { UPD(0x0C06BD14u, 5); goto L_0C06BD14; }  /* 0C06BCE0 bf */
L_0C06BCE2: BLKS(0x0C06BCE2u);
	r1 = 0x0u;  /* 0C06BCE2 mov #imm,Rn */
	r0 = 0xC21CA15u; UPD(0x0C06BCE6u, 2);  /* 0C06BCE4 mov.l @(disp,pc),Rn */
	r3 = (u32)(s32)(s8)R8(r0); UPD(0x0C06BCE8u, 1);  /* 0C06BCE6 mov.b @Rm,Rn */
	r6 = r3 & 0xFF;  /* 0C06BCE8 extu.b Rm,Rn */
	r0 = 0xC21CC8Cu; UPD(0x0C06BCECu, 2);  /* 0C06BCEA mov.l @(disp,pc),Rn */
	IF(0x0C06BCECu); r6 <<= 2;  /* 0C06BCEC shll2 Rn */
	r6 += r6;  /* 0C06BCEE add Rm,Rn */
	IF(0x0C06BCF0u); r4 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C06BCF2u, 3);  /* 0C06BCF0 mov.b @(r0,Rm),Rn */
	r10 = r4 & 0xFF;  /* 0C06BCF2 extu.b Rm,Rn */
	r0 = r10;  /* 0C06BCF4 mov Rm,Rn */
	T = r0 == 0x5u;  /* 0C06BCF6 cmp/eq #imm,r0 */
	{ u32 c_ = T; W32(r14 + 0x2Cu, r10); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C06BD90u, 6); goto L_0C06BD90; } UPD(0x0C06BCFCu, 1); goto L_0C06BCFC; }  /* 0C06BCF8 bt/s */
L_0C06BCFC: BLKS(0x0C06BCFCu);
	r3 = (u32)(s32)(s16)r1;  /* 0C06BCFC exts.w Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C06BCFE tst Rm,Rn */
	if (!T) { UPD(0x0C06BD14u, 5); goto L_0C06BD14; }  /* 0C06BD00 bf */
L_0C06BD02: BLKS(0x0C06BD02u);
	r13 = 0x280u; UPD(0x0C06BD04u, 1);  /* 0C06BD02 mov.w @(disp,pc),Rn */
	IF(0x0C06BD04u); MACL = r11 * r13;  /* 0C06BD04 mul.l Rm,Rn */
	r9 = 0xC283794u; UPD(0x0C06BD08u, 3);  /* 0C06BD06 mov.l @(disp,pc),Rn */
	IF(0x0C06BD08u); r10 = MACL;  /* 0C06BD08 sts macl,Rn */
	r9 += r10;  /* 0C06BD0A add Rm,Rn */
	r12 += r9;  /* 0C06BD0C add Rm,Rn */
	r11 = 0x262u; UPD(0x0C06BD10u, 4);  /* 0C06BD0E mov.w @(disp,pc),Rn */
	r0 = r12;  /* 0C06BD10 mov Rm,Rn */
	IF(0x0C06BD12u); W8(r0 + r11, r3); UPD(0x0C06BD14u, 2);  /* 0C06BD12 mov.b Rm,@(r0,Rn) */
L_0C06BD14: BLKS(0x0C06BD14u);
	r14 += 0x3Cu;  /* 0C06BD14 add #imm,Rn */
	r15 = r14;  /* 0C06BD16 mov Rm,Rn */
	IF(0x0C06BD18u); PR = R32(r15); r15 += 4; UPD(0x0C06BD1Au, 3);  /* 0C06BD18 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06BD1Cu, 1);  /* 0C06BD1A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C06BD1Eu, 1);  /* 0C06BD1C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06BD20u, 1);  /* 0C06BD1E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06BD22u, 1);  /* 0C06BD20 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06BD24u, 1);  /* 0C06BD22 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06BD26u, 1);  /* 0C06BD24 mov.l @Rm+,Rn */
	IF(0x0C06BD26u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06BD26 rts */
L_0C06BD90: BLKS(0x0C06BD90u);
	r6 = 0x90u; UPD(0x0C06BD92u, 1);  /* 0C06BD90 mov.w @(disp,pc),Rn */
	IF(0x0C06BD92u); MACL = r11 * r6;  /* 0C06BD92 mul.l Rm,Rn */
	r10 = 0x280u; UPD(0x0C06BD96u, 3);  /* 0C06BD94 mov.w @(disp,pc),Rn */
	IF(0x0C06BD96u); r6 = MACL;  /* 0C06BD96 sts macl,Rn */
	IF(0x0C06BD98u); MACL = r11 * r10;  /* 0C06BD98 mul.l Rm,Rn */
	r7 = 0xC283794u; UPD(0x0C06BD9Cu, 4);  /* 0C06BD9A mov.l @(disp,pc),Rn */
	r8 = 0xC27DC84u; UPD(0x0C06BD9Eu, 1);  /* 0C06BD9C mov.l @(disp,pc),Rn */
	IF(0x0C06BD9Eu); r10 = MACL;  /* 0C06BD9E sts macl,Rn */
	r4 = 0x262u; UPD(0x0C06BDA2u, 2);  /* 0C06BDA0 mov.w @(disp,pc),Rn */
	r10 += r7;  /* 0C06BDA2 add Rm,Rn */
	r6 += r8;  /* 0C06BDA4 add Rm,Rn */
	r4 += r10;  /* 0C06BDA6 add Rm,Rn */
	W32(r14 + 0x30u, r4); UPD(0x0C06BDAAu, 4);  /* 0C06BDA8 mov.l Rm,@(disp,Rn) */
	r8 = 0xFFFFFFFFu;  /* 0C06BDAA mov #imm,Rn */
	r5 = R32(r6); UPD(0x0C06BDAEu, 2);  /* 0C06BDAC mov.l @Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r4); UPD(0x0C06BDB0u, 1);  /* 0C06BDAE mov.b @Rm,Rn */
	T = (r5 & r5) == 0;  /* 0C06BDB0 tst Rm,Rn */
	{ u32 t_ = 0u - r8, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r5 = r_; }  /* 0C06BDB2 negc Rm,Rn */
	r1 = 0x263u; UPD(0x0C06BDB6u, 3);  /* 0C06BDB4 mov.w @(disp,pc),Rn */
	T = r0 == 0x5u;  /* 0C06BDB6 cmp/eq #imm,r0 */
	r0 = R32(r6 + 0x30u); UPD(0x0C06BDBAu, 2);  /* 0C06BDB8 mov.l @(disp,Rm),Rn */
	r1 += r10;  /* 0C06BDBA add Rm,Rn */
	{ u32 t_ = 0u - r8, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r2 = r_; }  /* 0C06BDBC negc Rm,Rn */
	W32(r14 + 0x34u, r1); UPD(0x0C06BDC0u, 3);  /* 0C06BDBE mov.l Rm,@(disp,Rn) */
	r5 &= r2;  /* 0C06BDC0 and Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C06BDC2 tst Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r1); UPD(0x0C06BDC6u, 3);  /* 0C06BDC4 mov.b @Rm,Rn */
	{ u32 t_ = 0u - r8, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r7 = r_; }  /* 0C06BDC6 negc Rm,Rn */
	r2 = 0x264u; UPD(0x0C06BDCAu, 2);  /* 0C06BDC8 mov.w @(disp,pc),Rn */
	T = r0 == 0x5u;  /* 0C06BDCA cmp/eq #imm,r0 */
	r2 += r10;  /* 0C06BDCC add Rm,Rn */
	r6 += 0x60u;  /* 0C06BDCE add #imm,Rn */
	{ u32 t_ = 0u - r8, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r3 = r_; }  /* 0C06BDD0 negc Rm,Rn */
	r4 = R32(r6); UPD(0x0C06BDD4u, 5);  /* 0C06BDD2 mov.l @Rm,Rn */
	r7 &= r3;  /* 0C06BDD4 and Rm,Rn */
	W32(r14 + 0x38u, r2); UPD(0x0C06BDD8u, 2);  /* 0C06BDD6 mov.l Rm,@(disp,Rn) */
	r5 |= r7;  /* 0C06BDD8 or Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C06BDDA tst Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C06BDDEu, 3);  /* 0C06BDDC mov.b @Rm,Rn */
	{ u32 t_ = 0u - r8, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r7 = r_; }  /* 0C06BDDE negc Rm,Rn */
	T = r0 == 0x5u;  /* 0C06BDE0 cmp/eq #imm,r0 */
	{ u32 t_ = 0u - r8, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r1 = r_; }  /* 0C06BDE2 negc Rm,Rn */
	r7 &= r1;  /* 0C06BDE4 and Rm,Rn */
	r5 |= r7;  /* 0C06BDE6 or Rm,Rn */
	T = (r5 & r5) == 0;  /* 0C06BDE8 tst Rm,Rn */
	{ u32 c_ = !T; r8 = 0x54u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C06BE00u, 9); goto L_0C06BE00; } UPD(0x0C06BDEEu, 1); goto L_0C06BDEE; }  /* 0C06BDEA bf/s */
L_0C06BDEE: BLKS(0x0C06BDEEu);
	{ r1 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C06BCFCu, 3); goto L_0C06BCFC; }  /* 0C06BDEE bra */
L_0C06BE00: BLKS(0x0C06BE00u);
	IF(0x0C06BE00u); MACL = r13 * r8;  /* 0C06BE00 mul.l Rm,Rn */
	r4 = 0xC38C064u; UPD(0x0C06BE04u, 3);  /* 0C06BE02 mov.l @(disp,pc),Rn */
	r6 = 0x8u;  /* 0C06BE04 mov #imm,Rn */
	IF(0x0C06BE06u); r8 = MACL;  /* 0C06BE06 sts macl,Rn */
	r8 += r4;  /* 0C06BE08 add Rm,Rn */
	r3 = R32(r8); UPD(0x0C06BE0Cu, 4);  /* 0C06BE0A mov.l @Rm,Rn */
	r5 = 0xAu;  /* 0C06BE0C mov #imm,Rn */
	r1 = 0xEFFFFFFBu; UPD(0x0C06BE10u, 2);  /* 0C06BE0E mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C06BE10 mov Rm,Rn */
	r0 = 0xC06ACA0u; UPD(0x0C06BE14u, 2);  /* 0C06BE12 mov.l @(disp,pc),Rn */
	r3 &= r1;  /* 0C06BE14 and Rm,Rn */
	W32(r8, r3); UPD(0x0C06BE18u, 2);  /* 0C06BE16 mov.l Rm,@Rn */
	W32(r8 + 0x4u, r6); UPD(0x0C06BE1Au, 1);  /* 0C06BE18 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x8u, r5); UPD(0x0C06BE1Cu, 1);  /* 0C06BE1A mov.l Rm,@(disp,Rn) */
	IF(0x0C06BE1Cu); { u32 t_ = r0; PR = 0x0C06BE20u; W32(r8 + 0xCu, r9); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C06ACA0, 0x0C06ACA0u, 0x0C06BE20u); }  /* 0C06BE1C jsr @Rn */
L_0C06BE20: BLKS(0x0C06BE20u);
	r2 = 0x3Cu;  /* 0C06BE20 mov #imm,Rn */
	r8 += 0x4Fu;  /* 0C06BE22 add #imm,Rn */
	W8(r8, r2); UPD(0x0C06BE26u, 3);  /* 0C06BE24 mov.b Rm,@Rn */
	r7 = 0x14u;  /* 0C06BE26 mov #imm,Rn */
	r8 += 0xFFFFFFF5u;  /* 0C06BE28 add #imm,Rn */
	W8(r8, r7); UPD(0x0C06BE2Cu, 3);  /* 0C06BE2A mov.b Rm,@Rn */
	r3 = 0x808080u; UPD(0x0C06BE2Eu, 1);  /* 0C06BE2C mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFBCu;  /* 0C06BE2E add #imm,Rn */
	r4 = 0x4FFFFu; UPD(0x0C06BE32u, 2);  /* 0C06BE30 mov.l @(disp,pc),Rn */
	W32(r8 + 0x3Cu, r3); UPD(0x0C06BE34u, 1);  /* 0C06BE32 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x38u, r4); UPD(0x0C06BE36u, 1);  /* 0C06BE34 mov.l Rm,@(disp,Rn) */
	r1 = 0x180000u; UPD(0x0C06BE38u, 1);  /* 0C06BE36 mov.l @(disp,pc),Rn */
	r13 = R32(r10 + 0x10u); UPD(0x0C06BE3Au, 1);  /* 0C06BE38 mov.l @(disp,Rm),Rn */
	r13 += r1;  /* 0C06BE3A add Rm,Rn */
	W32(r8 + 0x28u, r13); UPD(0x0C06BE3Eu, 2);  /* 0C06BE3C mov.l Rm,@(disp,Rn) */
	r6 = 0x100000u; UPD(0x0C06BE40u, 1);  /* 0C06BE3E mov.l @(disp,pc),Rn */
	r5 = R32(r10 + 0x14u); UPD(0x0C06BE42u, 1);  /* 0C06BE40 mov.l @(disp,Rm),Rn */
	r5 += r6;  /* 0C06BE42 add Rm,Rn */
	W32(r8 + 0x2Cu, r5); UPD(0x0C06BE46u, 2);  /* 0C06BE44 mov.l Rm,@(disp,Rn) */
	r8 = 0xC0AFB20u; UPD(0x0C06BE48u, 1);  /* 0C06BE46 mov.l @(disp,pc),Rn */
	r5 = 0x9Du; UPD(0x0C06BE4Au, 1);  /* 0C06BE48 mov.w @(disp,pc),Rn */
	IF(0x0C06BE4Au); { u32 t_ = r8; PR = 0x0C06BE4Eu; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFB20, 0x0C0AFB20u, 0x0C06BE4Eu); }  /* 0C06BE4A jsr @Rn */
L_0C06BE4E: BLKS(0x0C06BE4Eu);
	r0 = 0xC21CA15u; UPD(0x0C06BE50u, 1);  /* 0C06BE4E mov.l @(disp,pc),Rn */
	r10 = (u32)(s32)(s8)R8(r0); UPD(0x0C06BE52u, 1);  /* 0C06BE50 mov.b @Rm,Rn */
	r2 = r10 & 0xFF;  /* 0C06BE52 extu.b Rm,Rn */
	r0 = 0xC21CC8Cu; UPD(0x0C06BE56u, 2);  /* 0C06BE54 mov.l @(disp,pc),Rn */
	IF(0x0C06BE56u); r2 <<= 2;  /* 0C06BE56 shll2 Rn */
	r2 += r2;  /* 0C06BE58 add Rm,Rn */
	IF(0x0C06BE5Au); W8(r0 + r2, r9); UPD(0x0C06BE5Cu, 3);  /* 0C06BE5A mov.b Rm,@(r0,Rn) */
	r0 = 0x2Fu;  /* 0C06BE5C mov #imm,Rn */
	IF(0x0C06BE5Eu); r7 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C06BE60u, 2);  /* 0C06BE5E mov.b @(r0,Rm),Rn */
	r4 = R32(r14 + 0x30u); UPD(0x0C06BE62u, 1);  /* 0C06BE60 mov.l @(disp,Rm),Rn */
	W8(r4, r7); UPD(0x0C06BE64u, 1);  /* 0C06BE62 mov.b Rm,@Rn */
	IF(0x0C06BE64u); r3 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C06BE66u, 1);  /* 0C06BE64 mov.b @(r0,Rm),Rn */
	r1 = R32(r14 + 0x34u); UPD(0x0C06BE68u, 1);  /* 0C06BE66 mov.l @(disp,Rm),Rn */
	W8(r1, r3); UPD(0x0C06BE6Au, 1);  /* 0C06BE68 mov.b Rm,@Rn */
	IF(0x0C06BE6Au); r9 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C06BE6Cu, 1);  /* 0C06BE6A mov.b @(r0,Rm),Rn */
	r13 = R32(r14 + 0x38u); UPD(0x0C06BE6Eu, 1);  /* 0C06BE6C mov.l @(disp,Rm),Rn */
	{ W8(r13, r9); /* slot mov.b Rm,@Rn */ UPD(0x0C06BDEEu, 3); goto L_0C06BDEE; }  /* 0C06BE6E bra */
L_0C06BE80: BLKS(0x0C06BE80u);
	r6 = 0x90u; UPD(0x0C06BE82u, 1);  /* 0C06BE80 mov.w @(disp,pc),Rn */
	IF(0x0C06BE82u); MACL = r11 * r6;  /* 0C06BE82 mul.l Rm,Rn */
	r10 = 0x280u; UPD(0x0C06BE86u, 3);  /* 0C06BE84 mov.w @(disp,pc),Rn */
	IF(0x0C06BE86u); r6 = MACL;  /* 0C06BE86 sts macl,Rn */
	IF(0x0C06BE88u); MACL = r11 * r10;  /* 0C06BE88 mul.l Rm,Rn */
	r7 = 0xC283794u; UPD(0x0C06BE8Cu, 4);  /* 0C06BE8A mov.l @(disp,pc),Rn */
	r4 = 0xC27DC84u; UPD(0x0C06BE8Eu, 1);  /* 0C06BE8C mov.l @(disp,pc),Rn */
	IF(0x0C06BE8Eu); r10 = MACL;  /* 0C06BE8E sts macl,Rn */
	r1 = 0x262u; UPD(0x0C06BE92u, 2);  /* 0C06BE90 mov.w @(disp,pc),Rn */
	r10 += r7;  /* 0C06BE92 add Rm,Rn */
	r6 += r4;  /* 0C06BE94 add Rm,Rn */
	r1 += r10;  /* 0C06BE96 add Rm,Rn */
	W32(r14 + 0x20u, r1); UPD(0x0C06BE9Au, 4);  /* 0C06BE98 mov.l Rm,@(disp,Rn) */
	r4 = 0xFFFFFFFFu;  /* 0C06BE9A mov #imm,Rn */
	r5 = R32(r6); UPD(0x0C06BE9Eu, 2);  /* 0C06BE9C mov.l @Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r1); UPD(0x0C06BEA0u, 1);  /* 0C06BE9E mov.b @Rm,Rn */
	T = (r5 & r5) == 0;  /* 0C06BEA0 tst Rm,Rn */
	r3 = 0x263u; UPD(0x0C06BEA4u, 2);  /* 0C06BEA2 mov.w @(disp,pc),Rn */
	{ u32 t_ = 0u - r4, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r5 = r_; }  /* 0C06BEA4 negc Rm,Rn */
	r3 += r10;  /* 0C06BEA6 add Rm,Rn */
	T = r0 == 0x3u;  /* 0C06BEA8 cmp/eq #imm,r0 */
	{ u32 t_ = 0u - r4, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r0 = r_; }  /* 0C06BEAA negc Rm,Rn */
	r2 = R32(r6 + 0x30u); UPD(0x0C06BEAEu, 5);  /* 0C06BEAC mov.l @(disp,Rm),Rn */
	r5 &= r0;  /* 0C06BEAE and Rm,Rn */
	W32(r14 + 0x24u, r3); UPD(0x0C06BEB2u, 2);  /* 0C06BEB0 mov.l Rm,@(disp,Rn) */
	T = (r2 & r2) == 0;  /* 0C06BEB2 tst Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r3); UPD(0x0C06BEB6u, 2);  /* 0C06BEB4 mov.b @Rm,Rn */
	{ u32 t_ = 0u - r4, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r7 = r_; }  /* 0C06BEB6 negc Rm,Rn */
	r1 = 0x264u; UPD(0x0C06BEBAu, 2);  /* 0C06BEB8 mov.w @(disp,pc),Rn */
	T = r0 == 0x4u;  /* 0C06BEBA cmp/eq #imm,r0 */
	r1 += r10;  /* 0C06BEBC add Rm,Rn */
	r6 += 0x60u;  /* 0C06BEBE add #imm,Rn */
	r0 = R32(r6); UPD(0x0C06BEC2u, 4);  /* 0C06BEC0 mov.l @Rm,Rn */
	{ u32 t_ = 0u - r4, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r8 = r_; }  /* 0C06BEC2 negc Rm,Rn */
	W32(r14 + 0x28u, r1); UPD(0x0C06BEC6u, 2);  /* 0C06BEC4 mov.l Rm,@(disp,Rn) */
	r7 &= r8;  /* 0C06BEC6 and Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C06BEC8 tst Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r1); UPD(0x0C06BECCu, 3);  /* 0C06BECA mov.b @Rm,Rn */
	{ u32 t_ = 0u - r4, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r8 = r_; }  /* 0C06BECC negc Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C06BECE tst Rm,Rn */
	{ u32 t_ = 0u - r4, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r3 = r_; }  /* 0C06BED0 negc Rm,Rn */
	r5 |= r7;  /* 0C06BED2 or Rm,Rn */
	r8 &= r3;  /* 0C06BED4 and Rm,Rn */
	r5 |= r8;  /* 0C06BED6 or Rm,Rn */
	T = (r5 & r5) == 0;  /* 0C06BED8 tst Rm,Rn */
	{ u32 c_ = !T; r8 = 0x54u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C06BEF0u, 10); goto L_0C06BEF0; } UPD(0x0C06BEDEu, 1); goto L_0C06BEDE; }  /* 0C06BEDA bf/s */
L_0C06BEDE: BLKS(0x0C06BEDEu);
	{ r1 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C06BCDCu, 3); goto L_0C06BCDC; }  /* 0C06BEDE bra */
L_0C06BEF0: BLKS(0x0C06BEF0u);
	IF(0x0C06BEF0u); MACL = r13 * r8;  /* 0C06BEF0 mul.l Rm,Rn */
	r2 = 0xC38C064u; UPD(0x0C06BEF4u, 3);  /* 0C06BEF2 mov.l @(disp,pc),Rn */
	r7 = 0x8u;  /* 0C06BEF4 mov #imm,Rn */
	IF(0x0C06BEF6u); r8 = MACL;  /* 0C06BEF6 sts macl,Rn */
	r8 += r2;  /* 0C06BEF8 add Rm,Rn */
	r5 = R32(r8); UPD(0x0C06BEFCu, 4);  /* 0C06BEFA mov.l @Rm,Rn */
	r0 = 0xAu;  /* 0C06BEFC mov #imm,Rn */
	r1 = 0xEFFFFFFBu; UPD(0x0C06BF00u, 2);  /* 0C06BEFE mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C06BF00 mov Rm,Rn */
	r3 = 0xC06ACA0u; UPD(0x0C06BF04u, 2);  /* 0C06BF02 mov.l @(disp,pc),Rn */
	r5 &= r1;  /* 0C06BF04 and Rm,Rn */
	W32(r8, r5); UPD(0x0C06BF08u, 2);  /* 0C06BF06 mov.l Rm,@Rn */
	W32(r8 + 0x4u, r7); UPD(0x0C06BF0Au, 1);  /* 0C06BF08 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x8u, r0); UPD(0x0C06BF0Cu, 1);  /* 0C06BF0A mov.l Rm,@(disp,Rn) */
	IF(0x0C06BF0Cu); { u32 t_ = r3; PR = 0x0C06BF10u; W32(r8 + 0xCu, r9); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C06ACA0, 0x0C06ACA0u, 0x0C06BF10u); }  /* 0C06BF0C jsr @Rn */
L_0C06BF10: BLKS(0x0C06BF10u);
	r8 += 0x4Fu;  /* 0C06BF10 add #imm,Rn */
	r6 = 0x3Cu;  /* 0C06BF12 mov #imm,Rn */
	W8(r8, r6); UPD(0x0C06BF16u, 3);  /* 0C06BF14 mov.b Rm,@Rn */
	r4 = 0x14u;  /* 0C06BF16 mov #imm,Rn */
	r8 += 0xFFFFFFF5u;  /* 0C06BF18 add #imm,Rn */
	W8(r8, r4); UPD(0x0C06BF1Cu, 3);  /* 0C06BF1A mov.b Rm,@Rn */
	r2 = 0x808080u; UPD(0x0C06BF1Eu, 1);  /* 0C06BF1C mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFBCu;  /* 0C06BF1E add #imm,Rn */
	r5 = 0x4FFFFu; UPD(0x0C06BF22u, 2);  /* 0C06BF20 mov.l @(disp,pc),Rn */
	W32(r8 + 0x38u, r5); UPD(0x0C06BF24u, 1);  /* 0C06BF22 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x3Cu, r2); UPD(0x0C06BF26u, 1);  /* 0C06BF24 mov.l Rm,@(disp,Rn) */
	r7 = 0x180000u; UPD(0x0C06BF28u, 1);  /* 0C06BF26 mov.l @(disp,pc),Rn */
	r0 = R32(r10 + 0x10u); UPD(0x0C06BF2Au, 1);  /* 0C06BF28 mov.l @(disp,Rm),Rn */
	r0 += r7;  /* 0C06BF2A add Rm,Rn */
	W32(r8 + 0x28u, r0); UPD(0x0C06BF2Eu, 2);  /* 0C06BF2C mov.l Rm,@(disp,Rn) */
	r3 = 0x100000u; UPD(0x0C06BF30u, 1);  /* 0C06BF2E mov.l @(disp,pc),Rn */
	r6 = R32(r10 + 0x14u); UPD(0x0C06BF32u, 1);  /* 0C06BF30 mov.l @(disp,Rm),Rn */
	r6 += r3;  /* 0C06BF32 add Rm,Rn */
	W32(r8 + 0x2Cu, r6); UPD(0x0C06BF36u, 2);  /* 0C06BF34 mov.l Rm,@(disp,Rn) */
	r8 = 0xC0AFB20u; UPD(0x0C06BF38u, 1);  /* 0C06BF36 mov.l @(disp,pc),Rn */
	r5 = 0x9Du; UPD(0x0C06BF3Au, 1);  /* 0C06BF38 mov.w @(disp,pc),Rn */
	IF(0x0C06BF3Au); { u32 t_ = r8; PR = 0x0C06BF3Eu; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFB20, 0x0C0AFB20u, 0x0C06BF3Eu); }  /* 0C06BF3A jsr @Rn */
L_0C06BF3E: BLKS(0x0C06BF3Eu);
	r1 = 0xC21CA15u; UPD(0x0C06BF40u, 1);  /* 0C06BF3E mov.l @(disp,pc),Rn */
	r7 = 0x3u;  /* 0C06BF40 mov #imm,Rn */
	r4 = (u32)(s32)(s8)R8(r1); UPD(0x0C06BF44u, 2);  /* 0C06BF42 mov.b @Rm,Rn */
	r2 = 0x4u;  /* 0C06BF44 mov #imm,Rn */
	r10 = r4 & 0xFF;  /* 0C06BF46 extu.b Rm,Rn */
	IF(0x0C06BF48u); r10 <<= 2;  /* 0C06BF48 shll2 Rn */
	r5 = 0xC21CC8Cu; UPD(0x0C06BF4Cu, 4);  /* 0C06BF4A mov.l @(disp,pc),Rn */
	r10 += r10;  /* 0C06BF4C add Rm,Rn */
	r10 += r5;  /* 0C06BF4E add Rm,Rn */
	r10 += 0x3u;  /* 0C06BF50 add #imm,Rn */
	W8(r10, r9); UPD(0x0C06BF54u, 4);  /* 0C06BF52 mov.b Rm,@Rn */
	r0 = R32(r14 + 0x20u); UPD(0x0C06BF56u, 1);  /* 0C06BF54 mov.l @(disp,Rm),Rn */
	W8(r0, r7); UPD(0x0C06BF58u, 1);  /* 0C06BF56 mov.b Rm,@Rn */
	r3 = R32(r14 + 0x24u); UPD(0x0C06BF5Au, 1);  /* 0C06BF58 mov.l @(disp,Rm),Rn */
	W8(r3, r2); UPD(0x0C06BF5Cu, 1);  /* 0C06BF5A mov.b Rm,@Rn */
	r8 = R32(r14 + 0x28u); UPD(0x0C06BF5Eu, 1);  /* 0C06BF5C mov.l @(disp,Rm),Rn */
	{ W8(r8, r9); /* slot mov.b Rm,@Rn */ UPD(0x0C06BEDEu, 3); goto L_0C06BEDE; }  /* 0C06BF5E bra */
L_0C06BFA0: BLKS(0x0C06BFA0u);
	r2 = 0x90u; UPD(0x0C06BFA2u, 1);  /* 0C06BFA0 mov.w @(disp,pc),Rn */
	IF(0x0C06BFA2u); MACL = r11 * r2;  /* 0C06BFA2 mul.l Rm,Rn */
	r9 = 0x280u; UPD(0x0C06BFA6u, 3);  /* 0C06BFA4 mov.w @(disp,pc),Rn */
	IF(0x0C06BFA6u); r2 = MACL;  /* 0C06BFA6 sts macl,Rn */
	IF(0x0C06BFA8u); MACL = r11 * r9;  /* 0C06BFA8 mul.l Rm,Rn */
	r0 = 0xC283794u; UPD(0x0C06BFACu, 4);  /* 0C06BFAA mov.l @(disp,pc),Rn */
	r6 = 0xC27DC84u; UPD(0x0C06BFAEu, 1);  /* 0C06BFAC mov.l @(disp,pc),Rn */
	IF(0x0C06BFAEu); r9 = MACL;  /* 0C06BFAE sts macl,Rn */
	r7 = 0x262u; UPD(0x0C06BFB2u, 2);  /* 0C06BFB0 mov.w @(disp,pc),Rn */
	r9 += r0;  /* 0C06BFB2 add Rm,Rn */
	r2 += r6;  /* 0C06BFB4 add Rm,Rn */
	r7 += r9;  /* 0C06BFB6 add Rm,Rn */
	W32(r14 + 0x14u, r7); UPD(0x0C06BFBAu, 4);  /* 0C06BFB8 mov.l Rm,@(disp,Rn) */
	r6 = 0xFFFFFFFFu;  /* 0C06BFBA mov #imm,Rn */
	r4 = R32(r2); UPD(0x0C06BFBEu, 2);  /* 0C06BFBC mov.l @Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r7); UPD(0x0C06BFC0u, 1);  /* 0C06BFBE mov.b @Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C06BFC0 tst Rm,Rn */
	r1 = 0x263u; UPD(0x0C06BFC4u, 2);  /* 0C06BFC2 mov.w @(disp,pc),Rn */
	{ u32 t_ = 0u - r6, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r4 = r_; }  /* 0C06BFC4 negc Rm,Rn */
	r1 += r9;  /* 0C06BFC6 add Rm,Rn */
	T = r0 == 0x2u;  /* 0C06BFC8 cmp/eq #imm,r0 */
	{ u32 t_ = 0u - r6, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r5 = r_; }  /* 0C06BFCA negc Rm,Rn */
	r8 = R32(r2 + 0x30u); UPD(0x0C06BFCEu, 5);  /* 0C06BFCC mov.l @(disp,Rm),Rn */
	r4 &= r5;  /* 0C06BFCE and Rm,Rn */
	W32(r14 + 0x18u, r1); UPD(0x0C06BFD2u, 2);  /* 0C06BFD0 mov.l Rm,@(disp,Rn) */
	T = (r8 & r8) == 0;  /* 0C06BFD2 tst Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r1); UPD(0x0C06BFD6u, 2);  /* 0C06BFD4 mov.b @Rm,Rn */
	{ u32 t_ = 0u - r6, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r7 = r_; }  /* 0C06BFD6 negc Rm,Rn */
	r5 = 0x264u; UPD(0x0C06BFDAu, 2);  /* 0C06BFD8 mov.w @(disp,pc),Rn */
	T = r0 == 0x2u;  /* 0C06BFDA cmp/eq #imm,r0 */
	r5 += r9;  /* 0C06BFDC add Rm,Rn */
	r2 += 0x60u;  /* 0C06BFDE add #imm,Rn */
	{ u32 t_ = 0u - r6, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r3 = r_; }  /* 0C06BFE0 negc Rm,Rn */
	r0 = R32(r2); UPD(0x0C06BFE4u, 5);  /* 0C06BFE2 mov.l @Rm,Rn */
	r7 &= r3;  /* 0C06BFE4 and Rm,Rn */
	W32(r14 + 0x1Cu, r5); UPD(0x0C06BFE8u, 2);  /* 0C06BFE6 mov.l Rm,@(disp,Rn) */
	r4 |= r7;  /* 0C06BFE8 or Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C06BFEA tst Rm,Rn */
	r8 = (u32)(s32)(s8)R8(r5); UPD(0x0C06BFEEu, 3);  /* 0C06BFEC mov.b @Rm,Rn */
	{ u32 t_ = 0u - r6, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r7 = r_; }  /* 0C06BFEE negc Rm,Rn */
	T = (r8 & r8) == 0;  /* 0C06BFF0 tst Rm,Rn */
	{ u32 t_ = 0u - r6, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r1 = r_; }  /* 0C06BFF2 negc Rm,Rn */
	r7 &= r1;  /* 0C06BFF4 and Rm,Rn */
	r4 |= r7;  /* 0C06BFF6 or Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C06BFF8 tst Rm,Rn */
	{ u32 c_ = !T; r8 = 0x54u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C06C010u, 9); goto L_0C06C010; } UPD(0x0C06BFFEu, 1); goto L_0C06BFFE; }  /* 0C06BFFA bf/s */
L_0C06BFFE: BLKS(0x0C06BFFEu);
	{ r1 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C06BCBAu, 3); goto L_0C06BCBA; }  /* 0C06BFFE bra */
L_0C06C010: BLKS(0x0C06C010u);
	IF(0x0C06C010u); MACL = r13 * r8;  /* 0C06C010 mul.l Rm,Rn */
	r2 = 0xC38C064u; UPD(0x0C06C014u, 3);  /* 0C06C012 mov.l @(disp,pc),Rn */
	r5 = 0x8u;  /* 0C06C014 mov #imm,Rn */
	IF(0x0C06C016u); r8 = MACL;  /* 0C06C016 sts macl,Rn */
	r8 += r2;  /* 0C06C018 add Rm,Rn */
	r7 = R32(r8); UPD(0x0C06C01Cu, 4);  /* 0C06C01A mov.l @Rm,Rn */
	r3 = 0xAu;  /* 0C06C01C mov #imm,Rn */
	r1 = 0xEFFFFFFBu; UPD(0x0C06C020u, 2);  /* 0C06C01E mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C06C020 mov Rm,Rn */
	r6 = 0xC06ACA0u; UPD(0x0C06C024u, 2);  /* 0C06C022 mov.l @(disp,pc),Rn */
	r7 &= r1;  /* 0C06C024 and Rm,Rn */
	W32(r8, r7); UPD(0x0C06C028u, 2);  /* 0C06C026 mov.l Rm,@Rn */
	W32(r8 + 0x4u, r5); UPD(0x0C06C02Au, 1);  /* 0C06C028 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x8u, r3); UPD(0x0C06C02Cu, 1);  /* 0C06C02A mov.l Rm,@(disp,Rn) */
	IF(0x0C06C02Cu); { u32 t_ = r6; PR = 0x0C06C030u; W32(r8 + 0xCu, r10); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C06ACA0, 0x0C06ACA0u, 0x0C06C030u); }  /* 0C06C02C jsr @Rn */
L_0C06C030: BLKS(0x0C06C030u);
	r8 += 0x4Fu;  /* 0C06C030 add #imm,Rn */
	r4 = 0x3Cu;  /* 0C06C032 mov #imm,Rn */
	W8(r8, r4); UPD(0x0C06C036u, 3);  /* 0C06C034 mov.b Rm,@Rn */
	r0 = 0x14u;  /* 0C06C036 mov #imm,Rn */
	r8 += 0xFFFFFFF5u;  /* 0C06C038 add #imm,Rn */
	W8(r8, r0); UPD(0x0C06C03Cu, 3);  /* 0C06C03A mov.b Rm,@Rn */
	r7 = 0x4FFFFu; UPD(0x0C06C03Eu, 1);  /* 0C06C03C mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFBCu;  /* 0C06C03E add #imm,Rn */
	r2 = 0x808080u; UPD(0x0C06C042u, 2);  /* 0C06C040 mov.l @(disp,pc),Rn */
	W32(r8 + 0x38u, r7); UPD(0x0C06C044u, 1);  /* 0C06C042 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x3Cu, r2); UPD(0x0C06C046u, 1);  /* 0C06C044 mov.l Rm,@(disp,Rn) */
	r1 = 0x180000u; UPD(0x0C06C048u, 1);  /* 0C06C046 mov.l @(disp,pc),Rn */
	r5 = R32(r9 + 0x10u); UPD(0x0C06C04Au, 1);  /* 0C06C048 mov.l @(disp,Rm),Rn */
	r5 += r1;  /* 0C06C04A add Rm,Rn */
	W32(r8 + 0x28u, r5); UPD(0x0C06C04Eu, 2);  /* 0C06C04C mov.l Rm,@(disp,Rn) */
	r3 = 0x100000u; UPD(0x0C06C050u, 1);  /* 0C06C04E mov.l @(disp,pc),Rn */
	r6 = R32(r9 + 0x14u); UPD(0x0C06C052u, 1);  /* 0C06C050 mov.l @(disp,Rm),Rn */
	r6 += r3;  /* 0C06C052 add Rm,Rn */
	W32(r8 + 0x2Cu, r6); UPD(0x0C06C056u, 2);  /* 0C06C054 mov.l Rm,@(disp,Rn) */
	r8 = 0xC0AFB20u; UPD(0x0C06C058u, 1);  /* 0C06C056 mov.l @(disp,pc),Rn */
	r5 = 0x9Du; UPD(0x0C06C05Au, 1);  /* 0C06C058 mov.w @(disp,pc),Rn */
	IF(0x0C06C05Au); { u32 t_ = r8; PR = 0x0C06C05Eu; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFB20, 0x0C0AFB20u, 0x0C06C05Eu); }  /* 0C06C05A jsr @Rn */
L_0C06C05E: BLKS(0x0C06C05Eu);
	r4 = 0xC21CA15u; UPD(0x0C06C060u, 1);  /* 0C06C05E mov.l @(disp,pc),Rn */
	r1 = 0x2u;  /* 0C06C060 mov #imm,Rn */
	r9 = (u32)(s32)(s8)R8(r4); UPD(0x0C06C064u, 2);  /* 0C06C062 mov.b @Rm,Rn */
	r7 = r9 & 0xFF;  /* 0C06C064 extu.b Rm,Rn */
	IF(0x0C06C066u); r7 <<= 2;  /* 0C06C066 shll2 Rn */
	r0 = 0xC21CC8Cu; UPD(0x0C06C06Au, 3);  /* 0C06C068 mov.l @(disp,pc),Rn */
	r7 += r7;  /* 0C06C06A add Rm,Rn */
	r7 += r0;  /* 0C06C06C add Rm,Rn */
	r7 += 0x1u;  /* 0C06C06E add #imm,Rn */
	W8(r7, r10); UPD(0x0C06C072u, 4);  /* 0C06C070 mov.b Rm,@Rn */
	r5 = R32(r14 + 0x14u); UPD(0x0C06C074u, 1);  /* 0C06C072 mov.l @(disp,Rm),Rn */
	W8(r5, r1); UPD(0x0C06C076u, 1);  /* 0C06C074 mov.b Rm,@Rn */
	r8 = R32(r14 + 0x18u); UPD(0x0C06C078u, 1);  /* 0C06C076 mov.l @(disp,Rm),Rn */
	W8(r8, r1); UPD(0x0C06C07Au, 1);  /* 0C06C078 mov.b Rm,@Rn */
	r3 = R32(r14 + 0x1Cu); UPD(0x0C06C07Cu, 1);  /* 0C06C07A mov.l @(disp,Rm),Rn */
	{ W8(r3, r10); /* slot mov.b Rm,@Rn */ UPD(0x0C06BFFEu, 3); goto L_0C06BFFE; }  /* 0C06C07C bra */
L_0C06C080: BLKS(0x0C06C080u);
	r5 = 0x90u; UPD(0x0C06C082u, 1);  /* 0C06C080 mov.w @(disp,pc),Rn */
	IF(0x0C06C082u); MACL = r11 * r5;  /* 0C06C082 mul.l Rm,Rn */
	r10 = 0x280u; UPD(0x0C06C086u, 3);  /* 0C06C084 mov.w @(disp,pc),Rn */
	IF(0x0C06C086u); r5 = MACL;  /* 0C06C086 sts macl,Rn */
	IF(0x0C06C088u); MACL = r11 * r10;  /* 0C06C088 mul.l Rm,Rn */
	r0 = 0xC283794u; UPD(0x0C06C08Cu, 4);  /* 0C06C08A mov.l @(disp,pc),Rn */
	r9 = 0xC27DC84u; UPD(0x0C06C08Eu, 1);  /* 0C06C08C mov.l @(disp,pc),Rn */
	IF(0x0C06C08Eu); r10 = MACL;  /* 0C06C08E sts macl,Rn */
	r1 = 0x262u; UPD(0x0C06C092u, 2);  /* 0C06C090 mov.w @(disp,pc),Rn */
	r10 += r0;  /* 0C06C092 add Rm,Rn */
	r5 += r9;  /* 0C06C094 add Rm,Rn */
	r1 += r10;  /* 0C06C096 add Rm,Rn */
	W32(r14 + 0x8u, r1); UPD(0x0C06C09Au, 4);  /* 0C06C098 mov.l Rm,@(disp,Rn) */
	r9 = 0xFFFFFFFFu;  /* 0C06C09A mov #imm,Rn */
	r8 = R32(r5); UPD(0x0C06C09Eu, 2);  /* 0C06C09C mov.l @Rm,Rn */
	r4 = 0x263u; UPD(0x0C06C0A0u, 1);  /* 0C06C09E mov.w @(disp,pc),Rn */
	T = (r8 & r8) == 0;  /* 0C06C0A0 tst Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r1); UPD(0x0C06C0A4u, 2);  /* 0C06C0A2 mov.b @Rm,Rn */
	{ u32 t_ = 0u - r9, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r8 = r_; }  /* 0C06C0A4 negc Rm,Rn */
	r4 += r10;  /* 0C06C0A6 add Rm,Rn */
	r6 = R32(r5 + 0x30u); UPD(0x0C06C0AAu, 3);  /* 0C06C0A8 mov.l @(disp,Rm),Rn */
	T = r0 == 0x1u;  /* 0C06C0AA cmp/eq #imm,r0 */
	W32(r14 + 0xCu, r4); UPD(0x0C06C0AEu, 2);  /* 0C06C0AC mov.l Rm,@(disp,Rn) */
	{ u32 t_ = 0u - r9, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r2 = r_; }  /* 0C06C0AE negc Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r4); UPD(0x0C06C0B2u, 2);  /* 0C06C0B0 mov.b @Rm,Rn */
	r8 &= r2;  /* 0C06C0B2 and Rm,Rn */
	T = (r6 & r6) == 0;  /* 0C06C0B4 tst Rm,Rn */
	{ u32 t_ = 0u - r9, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r7 = r_; }  /* 0C06C0B6 negc Rm,Rn */
	r2 = 0x264u; UPD(0x0C06C0BAu, 4);  /* 0C06C0B8 mov.w @(disp,pc),Rn */
	T = r0 == 0x1u;  /* 0C06C0BA cmp/eq #imm,r0 */
	r5 += 0x60u;  /* 0C06C0BC add #imm,Rn */
	r0 = R32(r5); UPD(0x0C06C0C0u, 3);  /* 0C06C0BE mov.l @Rm,Rn */
	r2 += r10;  /* 0C06C0C0 add Rm,Rn */
	{ u32 t_ = 0u - r9, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r3 = r_; }  /* 0C06C0C2 negc Rm,Rn */
	W32(r14 + 0x10u, r2); UPD(0x0C06C0C6u, 3);  /* 0C06C0C4 mov.l Rm,@(disp,Rn) */
	T = (r0 & r0) == 0;  /* 0C06C0C6 tst Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C06C0CAu, 2);  /* 0C06C0C8 mov.b @Rm,Rn */
	{ u32 t_ = 0u - r9, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r6 = r_; }  /* 0C06C0CA negc Rm,Rn */
	T = r0 == 0x1u;  /* 0C06C0CC cmp/eq #imm,r0 */
	{ u32 t_ = 0u - r9, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r1 = r_; }  /* 0C06C0CE negc Rm,Rn */
	r7 &= r3;  /* 0C06C0D0 and Rm,Rn */
	r8 |= r7;  /* 0C06C0D2 or Rm,Rn */
	r6 &= r1;  /* 0C06C0D4 and Rm,Rn */
	r8 |= r6;  /* 0C06C0D6 or Rm,Rn */
	T = (r8 & r8) == 0;  /* 0C06C0D8 tst Rm,Rn */
	{ u32 c_ = !T; r8 = 0x54u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C06C0F0u, 11); goto L_0C06C0F0; } UPD(0x0C06C0DEu, 1); goto L_0C06C0DE; }  /* 0C06C0DA bf/s */
L_0C06C0DE: BLKS(0x0C06C0DEu);
	{ r1 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C06BC98u, 3); goto L_0C06BC98; }  /* 0C06C0DE bra */
L_0C06C0F0: BLKS(0x0C06C0F0u);
	IF(0x0C06C0F0u); MACL = r13 * r8;  /* 0C06C0F0 mul.l Rm,Rn */
	r6 = 0xC38C064u; UPD(0x0C06C0F4u, 3);  /* 0C06C0F2 mov.l @(disp,pc),Rn */
	r9 = 0xAu;  /* 0C06C0F4 mov #imm,Rn */
	IF(0x0C06C0F6u); r8 = MACL;  /* 0C06C0F6 sts macl,Rn */
	r8 += r6;  /* 0C06C0F8 add Rm,Rn */
	r4 = R32(r8); UPD(0x0C06C0FCu, 4);  /* 0C06C0FA mov.l @Rm,Rn */
	r7 = 0x8u;  /* 0C06C0FC mov #imm,Rn */
	r1 = 0xEFFFFFFBu; UPD(0x0C06C100u, 2);  /* 0C06C0FE mov.l @(disp,pc),Rn */
	W32(r8 + 0x8u, r9); UPD(0x0C06C102u, 1);  /* 0C06C100 mov.l Rm,@(disp,Rn) */
	r4 &= r1;  /* 0C06C102 and Rm,Rn */
	r3 = 0xC06ACA0u; UPD(0x0C06C106u, 2);  /* 0C06C104 mov.l @(disp,pc),Rn */
	r9 = 0x0u;  /* 0C06C106 mov #imm,Rn */
	W32(r8, r4); UPD(0x0C06C10Au, 2);  /* 0C06C108 mov.l Rm,@Rn */
	W32(r8 + 0x4u, r7); UPD(0x0C06C10Cu, 1);  /* 0C06C10A mov.l Rm,@(disp,Rn) */
	r4 = r13;  /* 0C06C10C mov Rm,Rn */
	IF(0x0C06C10Eu); { u32 t_ = r3; PR = 0x0C06C112u; W32(r8 + 0xCu, r9); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C06ACA0, 0x0C06ACA0u, 0x0C06C112u); }  /* 0C06C10E jsr @Rn */
L_0C06C112: BLKS(0x0C06C112u);
	r8 += 0x4Fu;  /* 0C06C112 add #imm,Rn */
	r5 = 0x3Cu;  /* 0C06C114 mov #imm,Rn */
	W8(r8, r5); UPD(0x0C06C118u, 3);  /* 0C06C116 mov.b Rm,@Rn */
	r0 = 0x14u;  /* 0C06C118 mov #imm,Rn */
	r8 += 0xFFFFFFF5u;  /* 0C06C11A add #imm,Rn */
	W8(r8, r0); UPD(0x0C06C11Eu, 3);  /* 0C06C11C mov.b Rm,@Rn */
	r2 = 0x4FFFFu; UPD(0x0C06C120u, 1);  /* 0C06C11E mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFBCu;  /* 0C06C120 add #imm,Rn */
	r6 = 0x808080u; UPD(0x0C06C124u, 2);  /* 0C06C122 mov.l @(disp,pc),Rn */
	W32(r8 + 0x38u, r2); UPD(0x0C06C126u, 1);  /* 0C06C124 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x3Cu, r6); UPD(0x0C06C128u, 1);  /* 0C06C126 mov.l Rm,@(disp,Rn) */
	r4 = 0x180000u; UPD(0x0C06C12Au, 1);  /* 0C06C128 mov.l @(disp,pc),Rn */
	r7 = R32(r10 + 0x10u); UPD(0x0C06C12Cu, 1);  /* 0C06C12A mov.l @(disp,Rm),Rn */
	r7 += r4;  /* 0C06C12C add Rm,Rn */
	W32(r8 + 0x28u, r7); UPD(0x0C06C130u, 2);  /* 0C06C12E mov.l Rm,@(disp,Rn) */
	r5 = R32(r10 + 0x14u); UPD(0x0C06C132u, 1);  /* 0C06C130 mov.l @(disp,Rm),Rn */
	r3 = 0x100000u; UPD(0x0C06C134u, 1);  /* 0C06C132 mov.l @(disp,pc),Rn */
	r5 += r3;  /* 0C06C134 add Rm,Rn */
	W32(r8 + 0x2Cu, r5); UPD(0x0C06C138u, 2);  /* 0C06C136 mov.l Rm,@(disp,Rn) */
	r8 = 0xC0AFB20u; UPD(0x0C06C13Au, 1);  /* 0C06C138 mov.l @(disp,pc),Rn */
	r5 = 0x9Du; UPD(0x0C06C13Cu, 1);  /* 0C06C13A mov.w @(disp,pc),Rn */
	IF(0x0C06C13Cu); { u32 t_ = r8; PR = 0x0C06C140u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFB20, 0x0C0AFB20u, 0x0C06C140u); }  /* 0C06C13C jsr @Rn */
L_0C06C140: BLKS(0x0C06C140u);
	r1 = 0xC21CA15u; UPD(0x0C06C142u, 1);  /* 0C06C140 mov.l @(disp,pc),Rn */
	r7 = 0x1u;  /* 0C06C142 mov #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r1); UPD(0x0C06C146u, 2);  /* 0C06C144 mov.b @Rm,Rn */
	r2 = r0 & 0xFF;  /* 0C06C146 extu.b Rm,Rn */
	IF(0x0C06C148u); r2 <<= 2;  /* 0C06C148 shll2 Rn */
	r10 = 0xC21CC8Cu; UPD(0x0C06C14Cu, 3);  /* 0C06C14A mov.l @(disp,pc),Rn */
	r2 += r2;  /* 0C06C14C add Rm,Rn */
	r2 += r10;  /* 0C06C14E add Rm,Rn */
	r2 += 0x2u;  /* 0C06C150 add #imm,Rn */
	W8(r2, r9); UPD(0x0C06C154u, 4);  /* 0C06C152 mov.b Rm,@Rn */
	r6 = R32(r14 + 0x8u); UPD(0x0C06C156u, 1);  /* 0C06C154 mov.l @(disp,Rm),Rn */
	W8(r6, r7); UPD(0x0C06C158u, 1);  /* 0C06C156 mov.b Rm,@Rn */
	r4 = R32(r14 + 0xCu); UPD(0x0C06C15Au, 1);  /* 0C06C158 mov.l @(disp,Rm),Rn */
	W8(r4, r7); UPD(0x0C06C15Cu, 1);  /* 0C06C15A mov.b Rm,@Rn */
	r3 = R32(r14 + 0x10u); UPD(0x0C06C15Eu, 1);  /* 0C06C15C mov.l @(disp,Rm),Rn */
	{ W8(r3, r7); /* slot mov.b Rm,@Rn */ UPD(0x0C06C0DEu, 3); goto L_0C06C0DE; }  /* 0C06C15E bra */
L_0C06C170: BLKS(0x0C06C170u);
	r7 = 0xC06C2B0u; UPD(0x0C06C172u, 1);  /* 0C06C170 mov.l @(disp,pc),Rn */
	IF(0x0C06C172u); { u32 t_ = r7; PR = 0x0C06C176u; r5 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C06C2B0, 0x0C06C2B0u, 0x0C06C176u); }  /* 0C06C172 jsr @Rn */
L_0C06C176: BLKS(0x0C06C176u);
	{ IF(0x0C06C178u); ; /* slot nop */ UPD(0x0C06BC7Cu, 3); goto L_0C06BC7C; }  /* 0C06C176 bra */
L_0C06C1C0: BLKS(0x0C06C1C0u);
	r9 = 0x280u; UPD(0x0C06C1C2u, 1);  /* 0C06C1C0 mov.w @(disp,pc),Rn */
	IF(0x0C06C1C2u); MACL = r11 * r9;  /* 0C06C1C2 mul.l Rm,Rn */
	r0 = 0xC0000000u; UPD(0x0C06C1C6u, 3);  /* 0C06C1C4 mov.l @(disp,pc),Rn */
	r4 = 0xC283794u; UPD(0x0C06C1C8u, 1);  /* 0C06C1C6 mov.l @(disp,pc),Rn */
	IF(0x0C06C1C8u); r9 = MACL;  /* 0C06C1C8 sts macl,Rn */
	W32(r3, r0); UPD(0x0C06C1CCu, 2);  /* 0C06C1CA mov.l Rm,@Rn */
	r9 += r4;  /* 0C06C1CC add Rm,Rn */
	W32(r3 + 0xCu, r6); UPD(0x0C06C1D0u, 2);  /* 0C06C1CE mov.l Rm,@(disp,Rn) */
	r0 = 0x0u;  /* 0C06C1D0 mov #imm,Rn */
	W32(r3 + 0x8u, r6); UPD(0x0C06C1D4u, 2);  /* 0C06C1D2 mov.l Rm,@(disp,Rn) */
	r7 += 0x2Au;  /* 0C06C1D4 add #imm,Rn */
	W32(r3 + 0x10u, r10); UPD(0x0C06C1D8u, 2);  /* 0C06C1D6 mov.l Rm,@(disp,Rn) */
	W32(r3 + 0x4u, r10); UPD(0x0C06C1DAu, 1);  /* 0C06C1D8 mov.l Rm,@(disp,Rn) */
	r8 = R32(r9 + 0x10u); UPD(0x0C06C1DCu, 1);  /* 0C06C1DA mov.l @(disp,Rm),Rn */
	W32(r3 + 0x14u, r8); UPD(0x0C06C1DEu, 1);  /* 0C06C1DC mov.l Rm,@(disp,Rn) */
	r2 = R32(r9 + 0x14u); UPD(0x0C06C1E0u, 1);  /* 0C06C1DE mov.l @(disp,Rm),Rn */
	r8 = 0x54u;  /* 0C06C1E0 mov #imm,Rn */
	W32(r3 + 0x18u, r2); UPD(0x0C06C1E4u, 2);  /* 0C06C1E2 mov.l Rm,@(disp,Rn) */
	IF(0x0C06C1E4u); MACL = r13 * r8;  /* 0C06C1E4 mul.l Rm,Rn */
	W32(r3 + 0x20u, r6); UPD(0x0C06C1E8u, 3);  /* 0C06C1E6 mov.l Rm,@(disp,Rn) */
	W32(r3 + 0x1Cu, r6); UPD(0x0C06C1EAu, 1);  /* 0C06C1E8 mov.l Rm,@(disp,Rn) */
	IF(0x0C06C1EAu); r8 = MACL;  /* 0C06C1EA sts macl,Rn */
	r3 += 0x2Bu;  /* 0C06C1EC add #imm,Rn */
	W8(r3, r6); UPD(0x0C06C1F0u, 3);  /* 0C06C1EE mov.b Rm,@Rn */
	r3 += 0xFFFFFFD5u;  /* 0C06C1F0 add #imm,Rn */
	r3 += 0x26u;  /* 0C06C1F2 add #imm,Rn */
	W16(r3, r6); UPD(0x0C06C1F6u, 3);  /* 0C06C1F4 mov.w Rm,@Rn */
	r3 += 0x9u;  /* 0C06C1F6 add #imm,Rn */
	W8(r3, r0); UPD(0x0C06C1FAu, 2);  /* 0C06C1F8 mov.b Rm,@Rn */
	{ u32 v_ = r5; r3 -= 1; W8(r3, v_); } UPD(0x0C06C1FCu, 1);  /* 0C06C1FA mov.b Rm,@-Rn */
	W8(r7, r6); UPD(0x0C06C1FEu, 1);  /* 0C06C1FC mov.b Rm,@Rn */
	r4 = r3;  /* 0C06C1FE mov Rm,Rn */
	r2 = 0xC38C064u; UPD(0x0C06C202u, 2);  /* 0C06C200 mov.l @(disp,pc),Rn */
	r7 += 0xFFFFFFFAu;  /* 0C06C202 add #imm,Rn */
	{ u32 v_ = r0; r4 -= 1; W8(r4, v_); } UPD(0x0C06C206u, 2);  /* 0C06C204 mov.b Rm,@-Rn */
	r8 += r2;  /* 0C06C206 add Rm,Rn */
	r3 = R32(r8); UPD(0x0C06C20Au, 2);  /* 0C06C208 mov.l @Rm,Rn */
	r4 = r13;  /* 0C06C20A mov Rm,Rn */
	W16(r7, r6); UPD(0x0C06C20Eu, 2);  /* 0C06C20C mov.w Rm,@Rn */
	r1 = 0xEFFFFFFBu; UPD(0x0C06C210u, 1);  /* 0C06C20E mov.l @(disp,pc),Rn */
	r7 = 0x8u;  /* 0C06C210 mov #imm,Rn */
	r5 = R32(r14); UPD(0x0C06C214u, 2);  /* 0C06C212 mov.l @Rm,Rn */
	r3 &= r1;  /* 0C06C214 and Rm,Rn */
	r0 = 0xC06ACA0u; UPD(0x0C06C218u, 2);  /* 0C06C216 mov.l @(disp,pc),Rn */
	W32(r8, r3); UPD(0x0C06C21Au, 1);  /* 0C06C218 mov.l Rm,@Rn */
	W32(r8 + 0x4u, r7); UPD(0x0C06C21Cu, 1);  /* 0C06C21A mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x8u, r5); UPD(0x0C06C21Eu, 1);  /* 0C06C21C mov.l Rm,@(disp,Rn) */
	IF(0x0C06C21Eu); { u32 t_ = r0; PR = 0x0C06C222u; W32(r8 + 0xCu, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C06ACA0, 0x0C06ACA0u, 0x0C06C222u); }  /* 0C06C21E jsr @Rn */
L_0C06C222: BLKS(0x0C06C222u);
	r8 += 0x4Fu;  /* 0C06C222 add #imm,Rn */
	r4 = 0x3Cu;  /* 0C06C224 mov #imm,Rn */
	W8(r8, r4); UPD(0x0C06C228u, 3);  /* 0C06C226 mov.b Rm,@Rn */
	r2 = 0x14u;  /* 0C06C228 mov #imm,Rn */
	r8 += 0xFFFFFFF5u;  /* 0C06C22A add #imm,Rn */
	W8(r8, r2); UPD(0x0C06C22Eu, 3);  /* 0C06C22C mov.b Rm,@Rn */
	r6 = 0x4FFFFu; UPD(0x0C06C230u, 1);  /* 0C06C22E mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFBCu;  /* 0C06C230 add #imm,Rn */
	r3 = 0x808080u; UPD(0x0C06C234u, 2);  /* 0C06C232 mov.l @(disp,pc),Rn */
	W32(r8 + 0x38u, r6); UPD(0x0C06C236u, 1);  /* 0C06C234 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x3Cu, r3); UPD(0x0C06C238u, 1);  /* 0C06C236 mov.l Rm,@(disp,Rn) */
	r1 = 0x180000u; UPD(0x0C06C23Au, 1);  /* 0C06C238 mov.l @(disp,pc),Rn */
	r7 = R32(r9 + 0x10u); UPD(0x0C06C23Cu, 1);  /* 0C06C23A mov.l @(disp,Rm),Rn */
	r7 += r1;  /* 0C06C23C add Rm,Rn */
	W32(r8 + 0x28u, r7); UPD(0x0C06C240u, 2);  /* 0C06C23E mov.l Rm,@(disp,Rn) */
	r5 = 0x100000u; UPD(0x0C06C242u, 1);  /* 0C06C240 mov.l @(disp,pc),Rn */
	r0 = R32(r9 + 0x14u); UPD(0x0C06C244u, 1);  /* 0C06C242 mov.l @(disp,Rm),Rn */
	r0 += r5;  /* 0C06C244 add Rm,Rn */
	W32(r8 + 0x2Cu, r0); UPD(0x0C06C248u, 2);  /* 0C06C246 mov.l Rm,@(disp,Rn) */
	r8 = 0xC06A560u; UPD(0x0C06C24Au, 1);  /* 0C06C248 mov.l @(disp,pc),Rn */
	IF(0x0C06C24Au); { u32 t_ = r8; PR = 0x0C06C24Eu; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C06A560, 0x0C06A560u, 0x0C06C24Eu); }  /* 0C06C24A jsr @Rn */
L_0C06C24E: BLKS(0x0C06C24Eu);
	r8 = 0xC0AFBA0u; UPD(0x0C06C250u, 1);  /* 0C06C24E mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C06C250 mov Rm,Rn */
	IF(0x0C06C252u); { u32 t_ = r8; PR = 0x0C06C256u; r5 = 0x5Fu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0AFBA0, 0x0C0AFBA0u, 0x0C06C256u); }  /* 0C06C252 jsr @Rn */
L_0C06C256: BLKS(0x0C06C256u);
	r8 = 0xC0AFB20u; UPD(0x0C06C258u, 1);  /* 0C06C256 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C06C258 mov Rm,Rn */
	IF(0x0C06C25Au); { u32 t_ = r8; PR = 0x0C06C25Eu; r5 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, f_0C0AFB20, 0x0C0AFB20u, 0x0C06C25Eu); }  /* 0C06C25A jsr @Rn */
L_0C06C25E: BLKS(0x0C06C25Eu);
	r0 = 0x26Au; UPD(0x0C06C260u, 1);  /* 0C06C25E mov.w @(disp,pc),Rn */
	IF(0x0C06C260u); r4 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C06C262u, 1);  /* 0C06C260 mov.b @(r0,Rm),Rn */
	r4 += 0x1u;  /* 0C06C262 add #imm,Rn */
	IF(0x0C06C264u); W8(r0 + r9, r4); UPD(0x0C06C266u, 2);  /* 0C06C264 mov.b Rm,@(r0,Rn) */
	r2 = 0x265u; UPD(0x0C06C268u, 1);  /* 0C06C266 mov.w @(disp,pc),Rn */
	r9 += r12;  /* 0C06C268 add Rm,Rn */
	r0 = r9;  /* 0C06C26A mov Rm,Rn */
	{ IF(0x0C06C26Eu); W8(r0 + r2, r10); /* slot mov.b Rm,@(r0,Rn) */ UPD(0x0C06BC7Cu, 5); goto L_0C06BC7C; }  /* 0C06C26C bra */
}

/* FUN_0c06c2b0 */
void f_0C06C2B0(sh3_t *c)
{
	LOCALS;
	SPIN_VARS(0C06C310);
L_0C06C2B0: BLKS(0x0C06C2B0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06C2B2u, 1);  /* 0C06C2B0 mov.l Rm,@-Rn */
	r7 = 0x54u;  /* 0C06C2B2 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C06C2B6u, 2);  /* 0C06C2B4 mov.l Rm,@-Rn */
	r6 = 0x3u;  /* 0C06C2B6 mov #imm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C06C2BAu, 2);  /* 0C06C2B8 mov.l Rm,@-Rn */
	r2 = 0x4u;  /* 0C06C2BA mov #imm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06C2BEu, 2);  /* 0C06C2BC mov.l Rm,@-Rn */
	r10 = 0x0u;  /* 0C06C2BE mov #imm,Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C06C2C0 exts.w Rm,Rn */
	r4 = (u32)(s32)(s16)r5;  /* 0C06C2C2 exts.w Rm,Rn */
	IF(0x0C06C2C4u); MACL = r4 * r7;  /* 0C06C2C4 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06C2C8u, 6);  /* 0C06C2C6 mov.l Rm,@-Rn */
	r8 = 0xC38C064u; UPD(0x0C06C2CAu, 1);  /* 0C06C2C8 mov.l @(disp,pc),Rn */
	IF(0x0C06C2CAu); r7 = MACL;  /* 0C06C2CA sts macl,Rn */
	IF(0x0C06C2CCu); r15 -= 4; W32(r15, PR); UPD(0x0C06C2CEu, 2);  /* 0C06C2CC sts.l pr,@-Rn */
	r7 += r8;  /* 0C06C2CE add Rm,Rn */
	r0 = R32(r7 + 0x4u); UPD(0x0C06C2D2u, 2);  /* 0C06C2D0 mov.l @(disp,Rm),Rn */
	r14 = r15;  /* 0C06C2D2 mov Rm,Rn */
	IF(0x0C06C2D4u); ARG0(0x406Du); { s32 s_ = (s32)r6; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C06C2D4 shld Rm,Rn */
	r5 = 0xC177790u; UPD(0x0C06C2D8u, 3);  /* 0C06C2D6 mov.l @(disp,pc),Rn */
	r3 = R32(r7 + 0x8u); UPD(0x0C06C2DAu, 1);  /* 0C06C2D8 mov.l @(disp,Rm),Rn */
	IF(0x0C06C2DAu); r1 = R32(r0 + r5); UPD(0x0C06C2DCu, 1);  /* 0C06C2DA mov.l @(r0,Rm),Rn */
	IF(0x0C06C2DCu); ARG0(0x432Du); { s32 s_ = (s32)r2; if (s_ >= 0) r3 <<= (s_ & 31); else if ((s_ & 31) == 0) r3 = 0; else r3 >>= ((~s_ & 31) + 1); }  /* 0C06C2DC shld Rm,Rn */
	r0 = 0x280u; UPD(0x0C06C2E0u, 2);  /* 0C06C2DE mov.w @(disp,pc),Rn */
	r3 += r1;  /* 0C06C2E0 add Rm,Rn */
	IF(0x0C06C2E2u); MACL = r11 * r0;  /* 0C06C2E2 mul.l Rm,Rn */
	r6 = R32(r3 + 0x4u); UPD(0x0C06C2E6u, 4);  /* 0C06C2E4 mov.l @(disp,Rm),Rn */
	r5 += 0x40u;  /* 0C06C2E6 add #imm,Rn */
	r9 = 0xC283794u; UPD(0x0C06C2EAu, 2);  /* 0C06C2E8 mov.l @(disp,pc),Rn */
	IF(0x0C06C2EAu); r3 = MACL;  /* 0C06C2EA sts macl,Rn */
	r8 = 0x270u; UPD(0x0C06C2EEu, 2);  /* 0C06C2EC mov.w @(disp,pc),Rn */
	r3 += r9;  /* 0C06C2EE add Rm,Rn */
	r3 += r8;  /* 0C06C2F0 add Rm,Rn */
	r2 = R32(r3); UPD(0x0C06C2F4u, 3);  /* 0C06C2F2 mov.l @Rm,Rn */
	r11 += 0xBu;  /* 0C06C2F4 add #imm,Rn */
	r2 += r6;  /* 0C06C2F6 add Rm,Rn */
	W32(r3, r2); UPD(0x0C06C2FAu, 3);  /* 0C06C2F8 mov.l Rm,@Rn */
	r1 = 0xEFFFFFFBu; UPD(0x0C06C2FCu, 1);  /* 0C06C2FA mov.l @(disp,pc),Rn */
	r0 = R32(r7); UPD(0x0C06C2FEu, 1);  /* 0C06C2FC mov.l @Rm,Rn */
	r0 &= r1;  /* 0C06C2FE and Rm,Rn */
	W32(r7 + 0x4u, r11); UPD(0x0C06C302u, 2);  /* 0C06C300 mov.l Rm,@(disp,Rn) */
	W32(r7, r0); UPD(0x0C06C304u, 1);  /* 0C06C302 mov.l Rm,@Rn */
	r2 = R32(r5 + 0x18u); UPD(0x0C06C306u, 1);  /* 0C06C304 mov.l @(disp,Rm),Rn */
	r0 = R32(r2 + 0x4u); UPD(0x0C06C308u, 1);  /* 0C06C306 mov.l @(disp,Rm),Rn */
	T = r6 == r0;  /* 0C06C308 cmp/eq Rm,Rn */
	{ u32 c_ = T; r11 += 0xFFFFFFF5u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06C31Au, 4); goto L_0C06C31A; } goto L_0C06C30E; }  /* 0C06C30A bt/s */
L_0C06C30E: BLKS(0x0C06C30Eu);
	r2 += 0x4u;  /* 0C06C30E add #imm,Rn */
	UPD(0x0C06C310u, 2);
L_0C06C310: BLKS(0x0C06C310u);
	SPIN_SAVE(0C06C310);
	r2 += 0x10u;  /* 0C06C310 add #imm,Rn */
	r5 = RS32(0C06C310, r2); UPD(0x0C06C314u, 2);  /* 0C06C312 mov.l @Rm,Rn */
	T = r6 == r5;  /* 0C06C314 cmp/eq Rm,Rn */
	{ u32 c_ = !T; r10 += 0x1u; /* slot add #imm,Rn */ if (c_) { SPIN_FFD(0C06C310, 6); UPD(0x0C06C310u, 4); goto L_0C06C310; } UPD(0x0C06C31Au, 1); goto L_0C06C31A; }  /* 0C06C316 bf/s */
L_0C06C31A: BLKS(0x0C06C31Au);
	r8 = 0x54u;  /* 0C06C31A mov #imm,Rn */
	IF(0x0C06C31Cu); MACL = r4 * r8;  /* 0C06C31C mul.l Rm,Rn */
	r6 = 0xC38C064u; UPD(0x0C06C320u, 4);  /* 0C06C31E mov.l @(disp,pc),Rn */
	r9 = 0x0u;  /* 0C06C320 mov #imm,Rn */
	IF(0x0C06C322u); r8 = MACL;  /* 0C06C322 sts macl,Rn */
	r2 = 0xC06ACA0u; UPD(0x0C06C326u, 3);  /* 0C06C324 mov.l @(disp,pc),Rn */
	r8 += r6;  /* 0C06C326 add Rm,Rn */
	W32(r8 + 0x8u, r10); UPD(0x0C06C32Au, 2);  /* 0C06C328 mov.l Rm,@(disp,Rn) */
	IF(0x0C06C32Au); { u32 t_ = r2; PR = 0x0C06C32Eu; W32(r8 + 0xCu, r9); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C06ACA0, 0x0C06ACA0u, 0x0C06C32Eu); }  /* 0C06C32A jsr @Rn */
L_0C06C32E: BLKS(0x0C06C32Eu);
	r8 += 0x4Fu;  /* 0C06C32E add #imm,Rn */
	r3 = 0x3Cu;  /* 0C06C330 mov #imm,Rn */
	W8(r8, r3); UPD(0x0C06C334u, 3);  /* 0C06C332 mov.b Rm,@Rn */
	r8 += 0xFFFFFFB1u;  /* 0C06C334 add #imm,Rn */
	W32(r8 + 0x38u, r9); UPD(0x0C06C338u, 2);  /* 0C06C336 mov.l Rm,@(disp,Rn) */
	r9 = 0x808080u; UPD(0x0C06C33Au, 1);  /* 0C06C338 mov.l @(disp,pc),Rn */
	r4 = 0xC1778E8u; UPD(0x0C06C33Cu, 1);  /* 0C06C33A mov.l @(disp,pc),Rn */
	W32(r8 + 0x3Cu, r9); UPD(0x0C06C33Eu, 1);  /* 0C06C33C mov.l Rm,@(disp,Rn) */
	r0 = r4;  /* 0C06C33E mov Rm,Rn */
	IF(0x0C06C340u); r5 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C06C342u, 2);  /* 0C06C340 mov.b @(r0,Rm),Rn */
	r4 = r11;  /* 0C06C342 mov Rm,Rn */
	r0 = 0xC0AFBA0u; UPD(0x0C06C346u, 2);  /* 0C06C344 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C06C346 mov Rm,Rn */
	IF(0x0C06C348u); PR = R32(r15); r15 += 4; UPD(0x0C06C34Au, 2);  /* 0C06C348 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06C34Cu, 1);  /* 0C06C34A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06C34Eu, 1);  /* 0C06C34C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06C350u, 1);  /* 0C06C34E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06C352u, 1);  /* 0C06C350 mov.l @Rm+,Rn */
	IF(0x0C06C352u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0AFBA0u: TAIL(f_0C0AFBA0); default: JUMPD(tv_); } }  /* 0C06C352 jmp @Rn */
}

/* FUN_0c06c380 */
void f_0C06C380(sh3_t *c)
{
	LOCALS;
L_0C06C380: BLKS(0x0C06C380u);
	r1 = (u32)(s32)(s16)r4;  /* 0C06C380 exts.w Rm,Rn */
	r3 = 0x54u;  /* 0C06C382 mov #imm,Rn */
	IF(0x0C06C384u); MACL = r1 * r3;  /* 0C06C384 mul.l Rm,Rn */
	r4 = 0xC38C064u; UPD(0x0C06C388u, 5);  /* 0C06C386 mov.l @(disp,pc),Rn */
	IF(0x0C06C388u); r3 = MACL;  /* 0C06C388 sts macl,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06C38Cu, 2);  /* 0C06C38A mov.l Rm,@-Rn */
	r3 += r4;  /* 0C06C38C add Rm,Rn */
	r3 += 0x4Au;  /* 0C06C38E add #imm,Rn */
	r7 = (u32)(s32)(s16)R16(r3); UPD(0x0C06C392u, 3);  /* 0C06C390 mov.w @Rm,Rn */
	r14 = r15;  /* 0C06C392 mov Rm,Rn */
	r2 = 0xB4u; UPD(0x0C06C396u, 2);  /* 0C06C394 mov.w @(disp,pc),Rn */
	r3 += 0xFFFFFFB6u;  /* 0C06C396 add #imm,Rn */
	IF(0x0C06C398u); MACL = r7 * r2;  /* 0C06C398 mul.l Rm,Rn */
	r0 = 0xC26CD40u; UPD(0x0C06C39Cu, 4);  /* 0C06C39A mov.l @(disp,pc),Rn */
	IF(0x0C06C39Cu); r2 = MACL;  /* 0C06C39C sts macl,Rn */
	r2 += r0;  /* 0C06C39E add Rm,Rn */
	r0 = R32(r2); UPD(0x0C06C3A2u, 3);  /* 0C06C3A0 mov.l @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C06C3A2 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0xFFFFFFFFu; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C06C3B6u, 4); goto L_0C06C3B6; } goto L_0C06C3A8; }  /* 0C06C3A4 bt/s */
L_0C06C3A8: BLKS(0x0C06C3A8u);
	r0 = 0x82u; UPD(0x0C06C3AAu, 2);  /* 0C06C3A8 mov.w @(disp,pc),Rn */
	r3 += 0x4Cu;  /* 0C06C3AA add #imm,Rn */
	IF(0x0C06C3ACu); r5 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C06C3AEu, 2);  /* 0C06C3AC mov.w @(r0,Rm),Rn */
	r6 = (u32)(s32)(s16)R16(r3); UPD(0x0C06C3B0u, 1);  /* 0C06C3AE mov.w @Rm,Rn */
	T = r6 == r5;  /* 0C06C3B0 cmp/eq Rm,Rn */
	{ u32 c_ = T; r0 = 0xFFFFFFFFu; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C06C3C0u, 4); goto L_0C06C3C0; } UPD(0x0C06C3B6u, 1); goto L_0C06C3B6; }  /* 0C06C3B2 bt/s */
L_0C06C3B6: BLKS(0x0C06C3B6u);
	r15 = r14;  /* 0C06C3B6 mov Rm,Rn */
	IF(0x0C06C3B8u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C06C3B8 rts */
L_0C06C3C0: BLKS(0x0C06C3C0u);
	{ r0 = r7; /* slot mov Rm,Rn */ UPD(0x0C06C3B6u, 3); goto L_0C06C3B6; }  /* 0C06C3C0 bra */
}

/* FUN_0c06c5d0 */
void f_0C06C5D0(sh3_t *c)
{
	LOCALS;
L_0C06C5D0: BLKS(0x0C06C5D0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06C5D2u, 1);  /* 0C06C5D0 mov.l Rm,@-Rn */
	r1 = 0x0u;  /* 0C06C5D2 mov #imm,Rn */
	r3 = 0x13Fu; UPD(0x0C06C5D6u, 2);  /* 0C06C5D4 mov.w @(disp,pc),Rn */
	r14 = r15;  /* 0C06C5D6 mov Rm,Rn */
	r2 = 0xC38C064u; UPD(0x0C06C5DAu, 2);  /* 0C06C5D8 mov.l @(disp,pc),Rn */
	r7 = 0x0u;  /* 0C06C5DA mov #imm,Rn */
	UPD(0x0C06C5DCu, 1);
L_0C06C5DC: BLKS(0x0C06C5DCu);
	W32(r2, r7); UPD(0x0C06C5DEu, 1);  /* 0C06C5DC mov.l Rm,@Rn */
	r1 += 0x1u;  /* 0C06C5DE add #imm,Rn */
	r1 = (u32)(s32)(s16)r1;  /* 0C06C5E0 exts.w Rm,Rn */
	T = (s32)r1 > (s32)r3;  /* 0C06C5E2 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r2 += 0x54u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06C5DCu, 6); goto L_0C06C5DC; } goto L_0C06C5E8; }  /* 0C06C5E4 bf/s */
L_0C06C5E8: BLKS(0x0C06C5E8u);
	r3 = 0xC21CC94u; UPD(0x0C06C5EAu, 2);  /* 0C06C5E8 mov.l @(disp,pc),Rn */
	r1 = 0x0u;  /* 0C06C5EA mov #imm,Rn */
	r2 = 0xC392E1Cu; UPD(0x0C06C5EEu, 2);  /* 0C06C5EC mov.l @(disp,pc),Rn */
	r7 = 0x0u;  /* 0C06C5EE mov #imm,Rn */
	r6 = 0x7u;  /* 0C06C5F0 mov #imm,Rn */
	UPD(0x0C06C5F2u, 2);
L_0C06C5F2: BLKS(0x0C06C5F2u);
	W8(r2, r7); UPD(0x0C06C5F4u, 1);  /* 0C06C5F2 mov.b Rm,@Rn */
	r1 += 0x1u;  /* 0C06C5F4 add #imm,Rn */
	W8(r3, r7); UPD(0x0C06C5F8u, 2);  /* 0C06C5F6 mov.b Rm,@Rn */
	r1 = (u32)(s32)(s16)r1;  /* 0C06C5F8 exts.w Rm,Rn */
	r2 += 0x1u;  /* 0C06C5FA add #imm,Rn */
	T = (s32)r1 > (s32)r6;  /* 0C06C5FC cmp/gt Rm,Rn */
	{ u32 c_ = !T; r3 += 0x1u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06C5F2u, 6); goto L_0C06C5F2; } goto L_0C06C602; }  /* 0C06C5FE bf/s */
L_0C06C602: BLKS(0x0C06C602u);
	r0 = 0xC27DFF5u; UPD(0x0C06C604u, 2);  /* 0C06C602 mov.l @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C06C604 mov #imm,Rn */
	W8(r0, r3); UPD(0x0C06C608u, 2);  /* 0C06C606 mov.b Rm,@Rn */
	r2 = 0xC392D78u; UPD(0x0C06C60Au, 1);  /* 0C06C608 mov.l @(disp,pc),Rn */
	r0 = 0xC275DC9u; UPD(0x0C06C60Cu, 1);  /* 0C06C60A mov.l @(disp,pc),Rn */
	W8(r2, r3); UPD(0x0C06C60Eu, 1);  /* 0C06C60C mov.b Rm,@Rn */
	W8(r0, r3); UPD(0x0C06C610u, 1);  /* 0C06C60E mov.b Rm,@Rn */
	r15 = r14;  /* 0C06C610 mov Rm,Rn */
	IF(0x0C06C612u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C06C612 rts */
}

/* FUN_0c06c630 */
void f_0C06C630(sh3_t *c)
{
	LOCALS;
L_0C06C630: BLKS(0x0C06C630u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06C632u, 1);  /* 0C06C630 mov.l Rm,@-Rn */
	r0 = 0x0u;  /* 0C06C632 mov #imm,Rn */
	r6 = 0xC21CC8Cu; UPD(0x0C06C636u, 2);  /* 0C06C634 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C06C636 mov Rm,Rn */
	r7 = 0xC392E14u; UPD(0x0C06C63Au, 2);  /* 0C06C638 mov.l @(disp,pc),Rn */
	r2 = 0x0u;  /* 0C06C63A mov #imm,Rn */
	r3 = 0x7u;  /* 0C06C63C mov #imm,Rn */
	IF(0x0C06C63Eu); ;  /* 0C06C63E nop */
	UPD(0x0C06C640u, 3);
L_0C06C640: BLKS(0x0C06C640u);
	r4 = r0;  /* 0C06C640 mov Rm,Rn */
	r4 += r7;  /* 0C06C642 add Rm,Rn */
	W8(r4, r2); UPD(0x0C06C646u, 3);  /* 0C06C644 mov.b Rm,@Rn */
	IF(0x0C06C646u); W8(r0 + r6, r2); UPD(0x0C06C648u, 1);  /* 0C06C646 mov.b Rm,@(r0,Rn) */
	r4 = r0;  /* 0C06C648 mov Rm,Rn */
	r4 += 0x1u;  /* 0C06C64A add #imm,Rn */
	r0 = (u32)(s32)(s16)r4;  /* 0C06C64C exts.w Rm,Rn */
	T = (s32)r0 > (s32)r3;  /* 0C06C64E cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C06C640u, 7); goto L_0C06C640; }  /* 0C06C650 bf */
L_0C06C652: BLKS(0x0C06C652u);
	r3 = 0x0u;  /* 0C06C652 mov #imm,Rn */
	r1 = 0xC27DFF4u; UPD(0x0C06C656u, 2);  /* 0C06C654 mov.l @(disp,pc),Rn */
	r0 = 0xC275DC8u; UPD(0x0C06C658u, 1);  /* 0C06C656 mov.l @(disp,pc),Rn */
	W8(r1, r3); UPD(0x0C06C65Au, 1);  /* 0C06C658 mov.b Rm,@Rn */
	W8(r0, r3); UPD(0x0C06C65Cu, 1);  /* 0C06C65A mov.b Rm,@Rn */
	r15 = r14;  /* 0C06C65C mov Rm,Rn */
	IF(0x0C06C65Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C06C65E rts */
}

void f_0C06C6D0(sh3_t *c)
{
	LOCALS;
	goto L_0C06C6D0;
L_0C06AE80: BLKS(0x0C06AE80u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06AE82u, 1);  /* 0C06AE80 mov.l Rm,@-Rn */
	r2 = 0x54u;  /* 0C06AE82 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C06AE86u, 2);  /* 0C06AE84 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C06AE86 exts.w Rm,Rn */
	IF(0x0C06AE88u); MACL = r9 * r2;  /* 0C06AE88 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06AE8Cu, 4);  /* 0C06AE8A mov.l Rm,@-Rn */
	r0 = 0xC38C064u; UPD(0x0C06AE8Eu, 1);  /* 0C06AE8C mov.l @(disp,pc),Rn */
	IF(0x0C06AE8Eu); r8 = MACL;  /* 0C06AE8E sts macl,Rn */
	IF(0x0C06AE90u); r15 -= 4; W32(r15, PR); UPD(0x0C06AE92u, 2);  /* 0C06AE90 sts.l pr,@-Rn */
	r8 += r0;  /* 0C06AE92 add Rm,Rn */
	r0 = R32(r8); UPD(0x0C06AE96u, 2);  /* 0C06AE94 mov.l @Rm,Rn */
	r2 = 0x4010u; UPD(0x0C06AE98u, 1);  /* 0C06AE96 mov.w @(disp,pc),Rn */
	r0 &= r2;  /* 0C06AE98 and Rm,Rn */
	T = r0 == 0x10u;  /* 0C06AE9A cmp/eq #imm,r0 */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06AEAAu, 5); goto L_0C06AEAA; } goto L_0C06AEA0; }  /* 0C06AE9C bt/s */
L_0C06AEA0: BLKS(0x0C06AEA0u);
	r3 = 0x10u;  /* 0C06AEA0 mov #imm,Rn */
	T = r0 > r3;  /* 0C06AEA2 cmp/hi Rm,Rn */
	{ u32 c_ = T; T = (r0 & r0) == 0; /* slot tst Rm,Rn */ if (c_) { UPD(0x0C06AF30u, 6); goto L_0C06AF30; } goto L_0C06AEA8; }  /* 0C06AEA4 bt/s */
L_0C06AEA8: BLKS(0x0C06AEA8u);
	if (T) { UPD(0x0C06AEC0u, 4); goto L_0C06AEC0; }  /* 0C06AEA8 bt */
L_0C06AEAA: BLKS(0x0C06AEAAu);
	r15 = r14;  /* 0C06AEAA mov Rm,Rn */
	IF(0x0C06AEACu); PR = R32(r15); r15 += 4; UPD(0x0C06AEAEu, 2);  /* 0C06AEAC lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06AEB0u, 1);  /* 0C06AEAE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06AEB2u, 1);  /* 0C06AEB0 mov.l @Rm+,Rn */
	IF(0x0C06AEB2u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06AEB2 rts */
L_0C06AEC0: BLKS(0x0C06AEC0u);
	r2 = R32(r8 + 0x30u); UPD(0x0C06AEC2u, 1);  /* 0C06AEC0 mov.l @(disp,Rm),Rn */
	r8 += 0x40u;  /* 0C06AEC2 add #imm,Rn */
	r5 = R32(r8); UPD(0x0C06AEC6u, 2);  /* 0C06AEC4 mov.l @Rm,Rn */
	T = (s32)r2 > (s32)r5;  /* 0C06AEC6 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r8 += 0xFFFFFFC0u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06AED4u, 4); goto L_0C06AED4; } goto L_0C06AECC; }  /* 0C06AEC8 bf/s */
L_0C06AECC: BLKS(0x0C06AECCu);
	r6 = 0xFFFFF000u; UPD(0x0C06AECEu, 2);  /* 0C06AECC mov.w @(disp,pc),Rn */
	r6 += r2;  /* 0C06AECE add Rm,Rn */
	W32(r8 + 0x30u, r6); UPD(0x0C06AED2u, 2);  /* 0C06AED0 mov.l Rm,@(disp,Rn) */
	r2 = r6;  /* 0C06AED2 mov Rm,Rn */
	UPD(0x0C06AED4u, 1);
L_0C06AED4: BLKS(0x0C06AED4u);
	r3 = R32(r8 + 0x28u); UPD(0x0C06AED6u, 1);  /* 0C06AED4 mov.l @(disp,Rm),Rn */
	r3 += r2;  /* 0C06AED6 add Rm,Rn */
	r2 = R32(r8 + 0x2Cu); UPD(0x0C06AEDAu, 2);  /* 0C06AED8 mov.l @(disp,Rm),Rn */
	r0 = R32(r8 + 0x34u); UPD(0x0C06AEDCu, 1);  /* 0C06AEDA mov.l @(disp,Rm),Rn */
	r7 = 0xFFF40000u; UPD(0x0C06AEDEu, 1);  /* 0C06AEDC mov.l @(disp,pc),Rn */
	r2 += r0;  /* 0C06AEDE add Rm,Rn */
	W32(r8 + 0x28u, r3); UPD(0x0C06AEE2u, 2);  /* 0C06AEE0 mov.l Rm,@(disp,Rn) */
	T = (s32)r3 >= (s32)r7;  /* 0C06AEE2 cmp/ge Rm,Rn */
	{ u32 c_ = !T; W32(r8 + 0x2Cu, r2); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C06AF20u, 4); goto L_0C06AF20; } UPD(0x0C06AEE8u, 1); goto L_0C06AEE8; }  /* 0C06AEE4 bf/s */
L_0C06AEE8: BLKS(0x0C06AEE8u);
	r4 = 0x3000000u; UPD(0x0C06AEEAu, 1);  /* 0C06AEE8 mov.l @(disp,pc),Rn */
	T = (s32)r3 > (s32)r4;  /* 0C06AEEA cmp/gt Rm,Rn */
	if (T) { UPD(0x0C06AF20u, 4); goto L_0C06AF20; }  /* 0C06AEEC bt */
L_0C06AEEE: BLKS(0x0C06AEEEu);
	r3 = 0x153FFFFu; UPD(0x0C06AEF0u, 1);  /* 0C06AEEE mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r3;  /* 0C06AEF0 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C06AF20u, 4); goto L_0C06AF20; }  /* 0C06AEF2 bf */
L_0C06AEF4: BLKS(0x0C06AEF4u);
	r5 = 0x2AC0000u; UPD(0x0C06AEF6u, 1);  /* 0C06AEF4 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r5;  /* 0C06AEF6 cmp/gt Rm,Rn */
	{ u32 c_ = T; r6 = r8; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06AF20u, 4); goto L_0C06AF20; } goto L_0C06AEFC; }  /* 0C06AEF8 bt/s */
L_0C06AEFC: BLKS(0x0C06AEFCu);
	r6 += 0x44u;  /* 0C06AEFC add #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r6); UPD(0x0C06AF00u, 3);  /* 0C06AEFE mov.b @Rm,Rn */
	r0 = 0x13u;  /* 0C06AF00 mov #imm,Rn */
	r7 = r3 & 0xFF;  /* 0C06AF02 extu.b Rm,Rn */
	r2 = 0xC286298u; UPD(0x0C06AF06u, 3);  /* 0C06AF04 mov.l @(disp,pc),Rn */
	T = r0 >= r7;  /* 0C06AF06 cmp/hs Rm,Rn */
	r0 = R32(r2); UPD(0x0C06AF0Au, 2);  /* 0C06AF08 mov.l @Rm,Rn */
	IF(0x0C06AF0Au); r8 = T;  /* 0C06AF0A movt Rn */
	r0 &= 0x3u;  /* 0C06AF0C and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C06AF0E tst Rm,Rn */
	IF(0x0C06AF10u); r9 = T;  /* 0C06AF10 movt Rn */
	r8 &= r9;  /* 0C06AF12 and Rm,Rn */
	T = (r8 & r8) == 0;  /* 0C06AF14 tst Rm,Rn */
	if (T) { UPD(0x0C06AEAAu, 9); goto L_0C06AEAA; }  /* 0C06AF16 bt */
L_0C06AF18: BLKS(0x0C06AF18u);
	r4 = r3;  /* 0C06AF18 mov Rm,Rn */
	r4 += 0x1u;  /* 0C06AF1A add #imm,Rn */
	{ W8(r6, r4); /* slot mov.b Rm,@Rn */ UPD(0x0C06AEAAu, 5); goto L_0C06AEAA; }  /* 0C06AF1C bra */
L_0C06AF20: BLKS(0x0C06AF20u);
	r5 = 0xC06B480u; UPD(0x0C06AF22u, 1);  /* 0C06AF20 mov.l @(disp,pc),Rn */
	r4 = r9;  /* 0C06AF22 mov Rm,Rn */
	r15 = r14;  /* 0C06AF24 mov Rm,Rn */
	IF(0x0C06AF26u); PR = R32(r15); r15 += 4; UPD(0x0C06AF28u, 3);  /* 0C06AF26 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06AF2Au, 1);  /* 0C06AF28 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06AF2Cu, 1);  /* 0C06AF2A mov.l @Rm+,Rn */
	IF(0x0C06AF2Cu); { u32 tv_ = r5; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C06B480u: TAIL(f_0C06B480); default: JUMPD(tv_); } }  /* 0C06AF2C jmp @Rn */
L_0C06AF30: BLKS(0x0C06AF30u);
	r4 = 0x4000u; UPD(0x0C06AF32u, 1);  /* 0C06AF30 mov.w @(disp,pc),Rn */
	T = r0 == r4;  /* 0C06AF32 cmp/eq Rm,Rn */
	if (!T) { UPD(0x0C06AEAAu, 4); goto L_0C06AEAA; }  /* 0C06AF34 bf */
L_0C06AF36: BLKS(0x0C06AF36u);
	r0 = 0xC06C380u; UPD(0x0C06AF38u, 1);  /* 0C06AF36 mov.l @(disp,pc),Rn */
	IF(0x0C06AF38u); { u32 t_ = r0; PR = 0x0C06AF3Cu; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C06C380, 0x0C06C380u, 0x0C06AF3Cu); }  /* 0C06AF38 jsr @Rn */
L_0C06AF3C: BLKS(0x0C06AF3Cu);
	IF(0x0C06AF3Cu); T = (s32)r0 >= 0;  /* 0C06AF3C cmp/pz Rn */
	if (!T) { UPD(0x0C06AF70u, 4); goto L_0C06AF70; }  /* 0C06AF3E bf */
L_0C06AF40: BLKS(0x0C06AF40u);
	r8 += 0x4Au;  /* 0C06AF40 add #imm,Rn */
	r2 = (u32)(s32)(s16)R16(r8); UPD(0x0C06AF44u, 2);  /* 0C06AF42 mov.w @Rm,Rn */
	r9 = 0xB4u; UPD(0x0C06AF46u, 1);  /* 0C06AF44 mov.w @(disp,pc),Rn */
	r8 += 0xFFFFFFB6u;  /* 0C06AF46 add #imm,Rn */
	IF(0x0C06AF48u); MACL = r2 * r9;  /* 0C06AF48 mul.l Rm,Rn */
	r5 = 0xC26CD40u; UPD(0x0C06AF4Cu, 4);  /* 0C06AF4A mov.l @(disp,pc),Rn */
	IF(0x0C06AF4Cu); r6 = MACL;  /* 0C06AF4C sts macl,Rn */
	r6 += r5;  /* 0C06AF4E add Rm,Rn */
	r3 = R32(r6 + 0x24u); UPD(0x0C06AF52u, 3);  /* 0C06AF50 mov.l @(disp,Rm),Rn */
	r1 = R32(r8 + 0x30u); UPD(0x0C06AF54u, 1);  /* 0C06AF52 mov.l @(disp,Rm),Rn */
	r3 += r1;  /* 0C06AF54 add Rm,Rn */
	W32(r8 + 0x28u, r3); UPD(0x0C06AF58u, 2);  /* 0C06AF56 mov.l Rm,@(disp,Rn) */
	r4 = R32(r8 + 0x34u); UPD(0x0C06AF5Au, 1);  /* 0C06AF58 mov.l @(disp,Rm),Rn */
	r0 = R32(r6 + 0x28u); UPD(0x0C06AF5Cu, 1);  /* 0C06AF5A mov.l @(disp,Rm),Rn */
	r0 += r4;  /* 0C06AF5C add Rm,Rn */
	{ W32(r8 + 0x2Cu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C06AEAAu, 4); goto L_0C06AEAA; }  /* 0C06AF5E bra */
L_0C06AF70: BLKS(0x0C06AF70u);
	r8 += 0x44u;  /* 0C06AF70 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r8); UPD(0x0C06AF74u, 2);  /* 0C06AF72 mov.b @Rm,Rn */
	r0 = 0xC0A9D50u; UPD(0x0C06AF76u, 1);  /* 0C06AF74 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFBCu;  /* 0C06AF76 add #imm,Rn */
	r6 = r1 & 0xFF;  /* 0C06AF78 extu.b Rm,Rn */
	r4 = R32(r8 + 0x28u); UPD(0x0C06AF7Cu, 3);  /* 0C06AF7A mov.l @(disp,Rm),Rn */
	IF(0x0C06AF7Cu); { u32 t_ = r0; PR = 0x0C06AF80u; r5 = R32(r8 + 0x2Cu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0A9D50, 0x0C0A9D50u, 0x0C06AF80u); }  /* 0C06AF7C jsr @Rn */
L_0C06AF80: BLKS(0x0C06AF80u);
	T = (r0 & r0) == 0;  /* 0C06AF80 tst Rm,Rn */
	if (T) { UPD(0x0C06AF20u, 4); goto L_0C06AF20; }  /* 0C06AF82 bt */
L_0C06AF84: BLKS(0x0C06AF84u);
	r2 = R32(r8 + 0x28u); UPD(0x0C06AF86u, 1);  /* 0C06AF84 mov.l @(disp,Rm),Rn */
	r6 = 0x1500000u; UPD(0x0C06AF88u, 1);  /* 0C06AF86 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r6;  /* 0C06AF88 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C06AF20u, 4); goto L_0C06AF20; }  /* 0C06AF8A bt */
L_0C06AF8C: BLKS(0x0C06AF8Cu);
	r3 = 0xFFF00000u; UPD(0x0C06AF8Eu, 1);  /* 0C06AF8C mov.l @(disp,pc),Rn */
	T = (s32)r2 >= (s32)r3;  /* 0C06AF8E cmp/ge Rm,Rn */
	if (!T) { UPD(0x0C06AF20u, 4); goto L_0C06AF20; }  /* 0C06AF90 bf */
L_0C06AF92: BLKS(0x0C06AF92u);
	r0 = R32(r8); UPD(0x0C06AF94u, 1);  /* 0C06AF92 mov.l @Rm,Rn */
	r9 = 0x0u;  /* 0C06AF94 mov #imm,Rn */
	r7 = 0xFFFFBFFFu; UPD(0x0C06AF98u, 2);  /* 0C06AF96 mov.w @(disp,pc),Rn */
	r2 = 0x20000u; UPD(0x0C06AF9Au, 1);  /* 0C06AF98 mov.l @(disp,pc),Rn */
	r0 &= r7;  /* 0C06AF9A and Rm,Rn */
	r0 |= 0x4u;  /* 0C06AF9C or #imm,r0 */
	W32(r8, r0); UPD(0x0C06AFA0u, 3);  /* 0C06AF9E mov.l Rm,@Rn */
	W32(r8 + 0x30u, r2); UPD(0x0C06AFA2u, 1);  /* 0C06AFA0 mov.l Rm,@(disp,Rn) */
	{ W32(r8 + 0x34u, r9); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C06AEAAu, 3); goto L_0C06AEAA; }  /* 0C06AFA2 bra */
L_0C06C6D0: BLKS(0x0C06C6D0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06C6D2u, 1);  /* 0C06C6D0 mov.l Rm,@-Rn */
	r2 = 0x54u;  /* 0C06C6D2 mov #imm,Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C06C6D4 exts.w Rm,Rn */
	IF(0x0C06C6D6u); MACL = r8 * r2;  /* 0C06C6D6 mul.l Rm,Rn */
	r0 = 0xC38C064u; UPD(0x0C06C6DAu, 5);  /* 0C06C6D8 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06C6DCu, 1);  /* 0C06C6DA mov.l Rm,@-Rn */
	IF(0x0C06C6DCu); r2 = MACL;  /* 0C06C6DC sts macl,Rn */
	r2 += r0;  /* 0C06C6DE add Rm,Rn */
	IF(0x0C06C6E0u); r15 -= 4; W32(r15, PR); UPD(0x0C06C6E2u, 3);  /* 0C06C6E0 sts.l pr,@-Rn */
	r3 = r2;  /* 0C06C6E2 mov Rm,Rn */
	r3 += 0x4Fu;  /* 0C06C6E4 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r3); UPD(0x0C06C6E8u, 3);  /* 0C06C6E6 mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C06C6E8 add #imm,Rn */
	W8(r3, r0); UPD(0x0C06C6ECu, 2);  /* 0C06C6EA mov.b Rm,@Rn */
	r0 &= 0x1u;  /* 0C06C6EC and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C06C6EE tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06C710u, 5); goto L_0C06C710; } UPD(0x0C06C6F4u, 1); goto L_0C06C6F4; }  /* 0C06C6F0 bt/s */
L_0C06C6F4: BLKS(0x0C06C6F4u);
	r5 = 0xC06AE80u; UPD(0x0C06C6F6u, 1);  /* 0C06C6F4 mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C06C6F6 mov Rm,Rn */
	r15 = r14;  /* 0C06C6F8 mov Rm,Rn */
	IF(0x0C06C6FAu); PR = R32(r15); r15 += 4; UPD(0x0C06C6FCu, 3);  /* 0C06C6FA lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06C6FEu, 1);  /* 0C06C6FC mov.l @Rm+,Rn */
	IF(0x0C06C6FEu); { u32 tv_ = r5; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C06AE80u: goto L_0C06AE80; default: JUMPD(tv_); } }  /* 0C06C6FE jmp @Rn */
L_0C06C710: BLKS(0x0C06C710u);
	r0 = R32(r2 + 0xCu); UPD(0x0C06C712u, 1);  /* 0C06C710 mov.l @(disp,Rm),Rn */
	r4 = r8;  /* 0C06C712 mov Rm,Rn */
	r3 = 0xC06AD00u; UPD(0x0C06C716u, 2);  /* 0C06C714 mov.l @(disp,pc),Rn */
	r0 += 0x1u;  /* 0C06C716 add #imm,Rn */
	r0 &= 0x7u;  /* 0C06C718 and #imm,r0 */
	IF(0x0C06C71Au); { u32 t_ = r3; PR = 0x0C06C71Eu; W32(r2 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 4); CALLP(t_, f_0C06AD00, 0x0C06AD00u, 0x0C06C71Eu); }  /* 0C06C71A jsr @Rn */
L_0C06C71E: BLKS(0x0C06C71Eu);
	{ IF(0x0C06C720u); ; /* slot nop */ UPD(0x0C06C6F4u, 3); goto L_0C06C6F4; }  /* 0C06C71E bra */
}

void f_0C06C730(sh3_t *c)
{
	LOCALS;
	goto L_0C06C730;
L_0C06AE80: BLKS(0x0C06AE80u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06AE82u, 1);  /* 0C06AE80 mov.l Rm,@-Rn */
	r2 = 0x54u;  /* 0C06AE82 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C06AE86u, 2);  /* 0C06AE84 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C06AE86 exts.w Rm,Rn */
	IF(0x0C06AE88u); MACL = r9 * r2;  /* 0C06AE88 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06AE8Cu, 4);  /* 0C06AE8A mov.l Rm,@-Rn */
	r0 = 0xC38C064u; UPD(0x0C06AE8Eu, 1);  /* 0C06AE8C mov.l @(disp,pc),Rn */
	IF(0x0C06AE8Eu); r8 = MACL;  /* 0C06AE8E sts macl,Rn */
	IF(0x0C06AE90u); r15 -= 4; W32(r15, PR); UPD(0x0C06AE92u, 2);  /* 0C06AE90 sts.l pr,@-Rn */
	r8 += r0;  /* 0C06AE92 add Rm,Rn */
	r0 = R32(r8); UPD(0x0C06AE96u, 2);  /* 0C06AE94 mov.l @Rm,Rn */
	r2 = 0x4010u; UPD(0x0C06AE98u, 1);  /* 0C06AE96 mov.w @(disp,pc),Rn */
	r0 &= r2;  /* 0C06AE98 and Rm,Rn */
	T = r0 == 0x10u;  /* 0C06AE9A cmp/eq #imm,r0 */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06AEAAu, 5); goto L_0C06AEAA; } goto L_0C06AEA0; }  /* 0C06AE9C bt/s */
L_0C06AEA0: BLKS(0x0C06AEA0u);
	r3 = 0x10u;  /* 0C06AEA0 mov #imm,Rn */
	T = r0 > r3;  /* 0C06AEA2 cmp/hi Rm,Rn */
	{ u32 c_ = T; T = (r0 & r0) == 0; /* slot tst Rm,Rn */ if (c_) { UPD(0x0C06AF30u, 6); goto L_0C06AF30; } goto L_0C06AEA8; }  /* 0C06AEA4 bt/s */
L_0C06AEA8: BLKS(0x0C06AEA8u);
	if (T) { UPD(0x0C06AEC0u, 4); goto L_0C06AEC0; }  /* 0C06AEA8 bt */
L_0C06AEAA: BLKS(0x0C06AEAAu);
	r15 = r14;  /* 0C06AEAA mov Rm,Rn */
	IF(0x0C06AEACu); PR = R32(r15); r15 += 4; UPD(0x0C06AEAEu, 2);  /* 0C06AEAC lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06AEB0u, 1);  /* 0C06AEAE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06AEB2u, 1);  /* 0C06AEB0 mov.l @Rm+,Rn */
	IF(0x0C06AEB2u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06AEB2 rts */
L_0C06AEC0: BLKS(0x0C06AEC0u);
	r2 = R32(r8 + 0x30u); UPD(0x0C06AEC2u, 1);  /* 0C06AEC0 mov.l @(disp,Rm),Rn */
	r8 += 0x40u;  /* 0C06AEC2 add #imm,Rn */
	r5 = R32(r8); UPD(0x0C06AEC6u, 2);  /* 0C06AEC4 mov.l @Rm,Rn */
	T = (s32)r2 > (s32)r5;  /* 0C06AEC6 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r8 += 0xFFFFFFC0u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06AED4u, 4); goto L_0C06AED4; } goto L_0C06AECC; }  /* 0C06AEC8 bf/s */
L_0C06AECC: BLKS(0x0C06AECCu);
	r6 = 0xFFFFF000u; UPD(0x0C06AECEu, 2);  /* 0C06AECC mov.w @(disp,pc),Rn */
	r6 += r2;  /* 0C06AECE add Rm,Rn */
	W32(r8 + 0x30u, r6); UPD(0x0C06AED2u, 2);  /* 0C06AED0 mov.l Rm,@(disp,Rn) */
	r2 = r6;  /* 0C06AED2 mov Rm,Rn */
	UPD(0x0C06AED4u, 1);
L_0C06AED4: BLKS(0x0C06AED4u);
	r3 = R32(r8 + 0x28u); UPD(0x0C06AED6u, 1);  /* 0C06AED4 mov.l @(disp,Rm),Rn */
	r3 += r2;  /* 0C06AED6 add Rm,Rn */
	r2 = R32(r8 + 0x2Cu); UPD(0x0C06AEDAu, 2);  /* 0C06AED8 mov.l @(disp,Rm),Rn */
	r0 = R32(r8 + 0x34u); UPD(0x0C06AEDCu, 1);  /* 0C06AEDA mov.l @(disp,Rm),Rn */
	r7 = 0xFFF40000u; UPD(0x0C06AEDEu, 1);  /* 0C06AEDC mov.l @(disp,pc),Rn */
	r2 += r0;  /* 0C06AEDE add Rm,Rn */
	W32(r8 + 0x28u, r3); UPD(0x0C06AEE2u, 2);  /* 0C06AEE0 mov.l Rm,@(disp,Rn) */
	T = (s32)r3 >= (s32)r7;  /* 0C06AEE2 cmp/ge Rm,Rn */
	{ u32 c_ = !T; W32(r8 + 0x2Cu, r2); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C06AF20u, 4); goto L_0C06AF20; } UPD(0x0C06AEE8u, 1); goto L_0C06AEE8; }  /* 0C06AEE4 bf/s */
L_0C06AEE8: BLKS(0x0C06AEE8u);
	r4 = 0x3000000u; UPD(0x0C06AEEAu, 1);  /* 0C06AEE8 mov.l @(disp,pc),Rn */
	T = (s32)r3 > (s32)r4;  /* 0C06AEEA cmp/gt Rm,Rn */
	if (T) { UPD(0x0C06AF20u, 4); goto L_0C06AF20; }  /* 0C06AEEC bt */
L_0C06AEEE: BLKS(0x0C06AEEEu);
	r3 = 0x153FFFFu; UPD(0x0C06AEF0u, 1);  /* 0C06AEEE mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r3;  /* 0C06AEF0 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C06AF20u, 4); goto L_0C06AF20; }  /* 0C06AEF2 bf */
L_0C06AEF4: BLKS(0x0C06AEF4u);
	r5 = 0x2AC0000u; UPD(0x0C06AEF6u, 1);  /* 0C06AEF4 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r5;  /* 0C06AEF6 cmp/gt Rm,Rn */
	{ u32 c_ = T; r6 = r8; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06AF20u, 4); goto L_0C06AF20; } goto L_0C06AEFC; }  /* 0C06AEF8 bt/s */
L_0C06AEFC: BLKS(0x0C06AEFCu);
	r6 += 0x44u;  /* 0C06AEFC add #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r6); UPD(0x0C06AF00u, 3);  /* 0C06AEFE mov.b @Rm,Rn */
	r0 = 0x13u;  /* 0C06AF00 mov #imm,Rn */
	r7 = r3 & 0xFF;  /* 0C06AF02 extu.b Rm,Rn */
	r2 = 0xC286298u; UPD(0x0C06AF06u, 3);  /* 0C06AF04 mov.l @(disp,pc),Rn */
	T = r0 >= r7;  /* 0C06AF06 cmp/hs Rm,Rn */
	r0 = R32(r2); UPD(0x0C06AF0Au, 2);  /* 0C06AF08 mov.l @Rm,Rn */
	IF(0x0C06AF0Au); r8 = T;  /* 0C06AF0A movt Rn */
	r0 &= 0x3u;  /* 0C06AF0C and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C06AF0E tst Rm,Rn */
	IF(0x0C06AF10u); r9 = T;  /* 0C06AF10 movt Rn */
	r8 &= r9;  /* 0C06AF12 and Rm,Rn */
	T = (r8 & r8) == 0;  /* 0C06AF14 tst Rm,Rn */
	if (T) { UPD(0x0C06AEAAu, 9); goto L_0C06AEAA; }  /* 0C06AF16 bt */
L_0C06AF18: BLKS(0x0C06AF18u);
	r4 = r3;  /* 0C06AF18 mov Rm,Rn */
	r4 += 0x1u;  /* 0C06AF1A add #imm,Rn */
	{ W8(r6, r4); /* slot mov.b Rm,@Rn */ UPD(0x0C06AEAAu, 5); goto L_0C06AEAA; }  /* 0C06AF1C bra */
L_0C06AF20: BLKS(0x0C06AF20u);
	r5 = 0xC06B480u; UPD(0x0C06AF22u, 1);  /* 0C06AF20 mov.l @(disp,pc),Rn */
	r4 = r9;  /* 0C06AF22 mov Rm,Rn */
	r15 = r14;  /* 0C06AF24 mov Rm,Rn */
	IF(0x0C06AF26u); PR = R32(r15); r15 += 4; UPD(0x0C06AF28u, 3);  /* 0C06AF26 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06AF2Au, 1);  /* 0C06AF28 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06AF2Cu, 1);  /* 0C06AF2A mov.l @Rm+,Rn */
	IF(0x0C06AF2Cu); { u32 tv_ = r5; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C06B480u: TAIL(f_0C06B480); default: JUMPD(tv_); } }  /* 0C06AF2C jmp @Rn */
L_0C06AF30: BLKS(0x0C06AF30u);
	r4 = 0x4000u; UPD(0x0C06AF32u, 1);  /* 0C06AF30 mov.w @(disp,pc),Rn */
	T = r0 == r4;  /* 0C06AF32 cmp/eq Rm,Rn */
	if (!T) { UPD(0x0C06AEAAu, 4); goto L_0C06AEAA; }  /* 0C06AF34 bf */
L_0C06AF36: BLKS(0x0C06AF36u);
	r0 = 0xC06C380u; UPD(0x0C06AF38u, 1);  /* 0C06AF36 mov.l @(disp,pc),Rn */
	IF(0x0C06AF38u); { u32 t_ = r0; PR = 0x0C06AF3Cu; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C06C380, 0x0C06C380u, 0x0C06AF3Cu); }  /* 0C06AF38 jsr @Rn */
L_0C06AF3C: BLKS(0x0C06AF3Cu);
	IF(0x0C06AF3Cu); T = (s32)r0 >= 0;  /* 0C06AF3C cmp/pz Rn */
	if (!T) { UPD(0x0C06AF70u, 4); goto L_0C06AF70; }  /* 0C06AF3E bf */
L_0C06AF40: BLKS(0x0C06AF40u);
	r8 += 0x4Au;  /* 0C06AF40 add #imm,Rn */
	r2 = (u32)(s32)(s16)R16(r8); UPD(0x0C06AF44u, 2);  /* 0C06AF42 mov.w @Rm,Rn */
	r9 = 0xB4u; UPD(0x0C06AF46u, 1);  /* 0C06AF44 mov.w @(disp,pc),Rn */
	r8 += 0xFFFFFFB6u;  /* 0C06AF46 add #imm,Rn */
	IF(0x0C06AF48u); MACL = r2 * r9;  /* 0C06AF48 mul.l Rm,Rn */
	r5 = 0xC26CD40u; UPD(0x0C06AF4Cu, 4);  /* 0C06AF4A mov.l @(disp,pc),Rn */
	IF(0x0C06AF4Cu); r6 = MACL;  /* 0C06AF4C sts macl,Rn */
	r6 += r5;  /* 0C06AF4E add Rm,Rn */
	r3 = R32(r6 + 0x24u); UPD(0x0C06AF52u, 3);  /* 0C06AF50 mov.l @(disp,Rm),Rn */
	r1 = R32(r8 + 0x30u); UPD(0x0C06AF54u, 1);  /* 0C06AF52 mov.l @(disp,Rm),Rn */
	r3 += r1;  /* 0C06AF54 add Rm,Rn */
	W32(r8 + 0x28u, r3); UPD(0x0C06AF58u, 2);  /* 0C06AF56 mov.l Rm,@(disp,Rn) */
	r4 = R32(r8 + 0x34u); UPD(0x0C06AF5Au, 1);  /* 0C06AF58 mov.l @(disp,Rm),Rn */
	r0 = R32(r6 + 0x28u); UPD(0x0C06AF5Cu, 1);  /* 0C06AF5A mov.l @(disp,Rm),Rn */
	r0 += r4;  /* 0C06AF5C add Rm,Rn */
	{ W32(r8 + 0x2Cu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C06AEAAu, 4); goto L_0C06AEAA; }  /* 0C06AF5E bra */
L_0C06AF70: BLKS(0x0C06AF70u);
	r8 += 0x44u;  /* 0C06AF70 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r8); UPD(0x0C06AF74u, 2);  /* 0C06AF72 mov.b @Rm,Rn */
	r0 = 0xC0A9D50u; UPD(0x0C06AF76u, 1);  /* 0C06AF74 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFBCu;  /* 0C06AF76 add #imm,Rn */
	r6 = r1 & 0xFF;  /* 0C06AF78 extu.b Rm,Rn */
	r4 = R32(r8 + 0x28u); UPD(0x0C06AF7Cu, 3);  /* 0C06AF7A mov.l @(disp,Rm),Rn */
	IF(0x0C06AF7Cu); { u32 t_ = r0; PR = 0x0C06AF80u; r5 = R32(r8 + 0x2Cu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C0A9D50, 0x0C0A9D50u, 0x0C06AF80u); }  /* 0C06AF7C jsr @Rn */
L_0C06AF80: BLKS(0x0C06AF80u);
	T = (r0 & r0) == 0;  /* 0C06AF80 tst Rm,Rn */
	if (T) { UPD(0x0C06AF20u, 4); goto L_0C06AF20; }  /* 0C06AF82 bt */
L_0C06AF84: BLKS(0x0C06AF84u);
	r2 = R32(r8 + 0x28u); UPD(0x0C06AF86u, 1);  /* 0C06AF84 mov.l @(disp,Rm),Rn */
	r6 = 0x1500000u; UPD(0x0C06AF88u, 1);  /* 0C06AF86 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r6;  /* 0C06AF88 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C06AF20u, 4); goto L_0C06AF20; }  /* 0C06AF8A bt */
L_0C06AF8C: BLKS(0x0C06AF8Cu);
	r3 = 0xFFF00000u; UPD(0x0C06AF8Eu, 1);  /* 0C06AF8C mov.l @(disp,pc),Rn */
	T = (s32)r2 >= (s32)r3;  /* 0C06AF8E cmp/ge Rm,Rn */
	if (!T) { UPD(0x0C06AF20u, 4); goto L_0C06AF20; }  /* 0C06AF90 bf */
L_0C06AF92: BLKS(0x0C06AF92u);
	r0 = R32(r8); UPD(0x0C06AF94u, 1);  /* 0C06AF92 mov.l @Rm,Rn */
	r9 = 0x0u;  /* 0C06AF94 mov #imm,Rn */
	r7 = 0xFFFFBFFFu; UPD(0x0C06AF98u, 2);  /* 0C06AF96 mov.w @(disp,pc),Rn */
	r2 = 0x20000u; UPD(0x0C06AF9Au, 1);  /* 0C06AF98 mov.l @(disp,pc),Rn */
	r0 &= r7;  /* 0C06AF9A and Rm,Rn */
	r0 |= 0x4u;  /* 0C06AF9C or #imm,r0 */
	W32(r8, r0); UPD(0x0C06AFA0u, 3);  /* 0C06AF9E mov.l Rm,@Rn */
	W32(r8 + 0x30u, r2); UPD(0x0C06AFA2u, 1);  /* 0C06AFA0 mov.l Rm,@(disp,Rn) */
	{ W32(r8 + 0x34u, r9); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C06AEAAu, 3); goto L_0C06AEAA; }  /* 0C06AFA2 bra */
L_0C06C730: BLKS(0x0C06C730u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06C732u, 1);  /* 0C06C730 mov.l Rm,@-Rn */
	r5 = 0x0u;  /* 0C06C732 mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06C736u, 2);  /* 0C06C734 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C06C736 exts.w Rm,Rn */
	IF(0x0C06C738u); r15 -= 4; W32(r15, PR); UPD(0x0C06C73Au, 2);  /* 0C06C738 sts.l pr,@-Rn */
	r7 = 0x0u;  /* 0C06C73A mov #imm,Rn */
	r4 = 0x13Fu; UPD(0x0C06C73Eu, 2);  /* 0C06C73C mov.w @(disp,pc),Rn */
	r14 = r15;  /* 0C06C73E mov Rm,Rn */
	r3 = 0xC38C064u; UPD(0x0C06C742u, 2);  /* 0C06C740 mov.l @(disp,pc),Rn */
	r6 = 0xFFFFFFFFu;  /* 0C06C742 mov #imm,Rn */
	UPD(0x0C06C744u, 1);
L_0C06C744: BLKS(0x0C06C744u);
	r0 = R32(r3); UPD(0x0C06C746u, 1);  /* 0C06C744 mov.l @Rm,Rn */
	T = r8 == r7;  /* 0C06C746 cmp/eq Rm,Rn */
	{ u32 t_ = 0u - r6, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r2 = r_; }  /* 0C06C748 negc Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C06C74A tst Rm,Rn */
	{ u32 t_ = 0u - r6, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r0 = r_; }  /* 0C06C74C negc Rm,Rn */
	r2 &= r0;  /* 0C06C74E and Rm,Rn */
	r0 = R32(r3 + 0x4u); UPD(0x0C06C752u, 6);  /* 0C06C750 mov.l @(disp,Rm),Rn */
	T = r0 == 0x3u;  /* 0C06C752 cmp/eq #imm,r0 */
	IF(0x0C06C754u); r0 = T;  /* 0C06C754 movt Rn */
	T = (r2 & r0) == 0;  /* 0C06C756 tst Rm,Rn */
	{ u32 c_ = T; r0 = r7; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06C764u, 6); goto L_0C06C764; } goto L_0C06C75C; }  /* 0C06C758 bt/s */
L_0C06C75C: BLKS(0x0C06C75Cu);
	r2 = r5;  /* 0C06C75C mov Rm,Rn */
	r2 += 0x1u;  /* 0C06C75E add #imm,Rn */
	r5 = (u32)(s32)(s16)r2;  /* 0C06C760 exts.w Rm,Rn */
	r0 = r7;  /* 0C06C762 mov Rm,Rn */
	UPD(0x0C06C764u, 5);
L_0C06C764: BLKS(0x0C06C764u);
	r0 += 0x1u;  /* 0C06C764 add #imm,Rn */
	r7 = (u32)(s32)(s16)r0;  /* 0C06C766 exts.w Rm,Rn */
	T = (s32)r7 > (s32)r4;  /* 0C06C768 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r3 += 0x54u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06C744u, 6); goto L_0C06C744; } goto L_0C06C76E; }  /* 0C06C76A bf/s */
L_0C06C76E: BLKS(0x0C06C76Eu);
	r3 = 0x54u;  /* 0C06C76E mov #imm,Rn */
	IF(0x0C06C770u); MACL = r8 * r3;  /* 0C06C770 mul.l Rm,Rn */
	r7 = 0xC38C064u; UPD(0x0C06C774u, 5);  /* 0C06C772 mov.l @(disp,pc),Rn */
	IF(0x0C06C774u); r3 = MACL;  /* 0C06C774 sts macl,Rn */
	r3 += r7;  /* 0C06C776 add Rm,Rn */
	r6 = r3;  /* 0C06C778 mov Rm,Rn */
	r6 += 0x4Fu;  /* 0C06C77A add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r6); UPD(0x0C06C77Eu, 5);  /* 0C06C77C mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C06C77E add #imm,Rn */
	W8(r6, r0); UPD(0x0C06C782u, 2);  /* 0C06C780 mov.b Rm,@Rn */
	r0 &= 0x3u;  /* 0C06C782 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C06C784 tst Rm,Rn */
	IF(0x0C06C786u); r4 = T;  /* 0C06C786 movt Rn */
	T = (r5 & r5) == 0;  /* 0C06C788 tst Rm,Rn */
	IF(0x0C06C78Au); r5 = T;  /* 0C06C78A movt Rn */
	r4 |= r5;  /* 0C06C78C or Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C06C78E tst Rm,Rn */
	{ u32 c_ = !T; r4 = r8; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06C7B0u, 10); goto L_0C06C7B0; } UPD(0x0C06C794u, 1); goto L_0C06C794; }  /* 0C06C790 bf/s */
L_0C06C794: BLKS(0x0C06C794u);
	r0 = 0xC06AE80u; UPD(0x0C06C796u, 1);  /* 0C06C794 mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C06C796 mov Rm,Rn */
	r15 = r14;  /* 0C06C798 mov Rm,Rn */
	IF(0x0C06C79Au); PR = R32(r15); r15 += 4; UPD(0x0C06C79Cu, 3);  /* 0C06C79A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06C79Eu, 1);  /* 0C06C79C mov.l @Rm+,Rn */
	IF(0x0C06C79Eu); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C06AE80u: goto L_0C06AE80; default: JUMPD(tv_); } }  /* 0C06C79E jmp @Rn */
L_0C06C7B0: BLKS(0x0C06C7B0u);
	r0 = R32(r3 + 0xCu); UPD(0x0C06C7B2u, 1);  /* 0C06C7B0 mov.l @(disp,Rm),Rn */
	r2 = 0xC06AD00u; UPD(0x0C06C7B4u, 1);  /* 0C06C7B2 mov.l @(disp,pc),Rn */
	r0 += 0x1u;  /* 0C06C7B4 add #imm,Rn */
	r0 &= 0x7u;  /* 0C06C7B6 and #imm,r0 */
	IF(0x0C06C7B8u); { u32 t_ = r2; PR = 0x0C06C7BCu; W32(r3 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 4); CALLP(t_, f_0C06AD00, 0x0C06AD00u, 0x0C06C7BCu); }  /* 0C06C7B8 jsr @Rn */
L_0C06C7BC: BLKS(0x0C06C7BCu);
	{ IF(0x0C06C7BEu); ; /* slot nop */ UPD(0x0C06C794u, 3); goto L_0C06C794; }  /* 0C06C7BC bra */
}

/* FUN_0c06c850 */
void f_0C06C850(sh3_t *c)
{
	LOCALS;
L_0C06C850: BLKS(0x0C06C850u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06C852u, 1);  /* 0C06C850 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C06C854u, 1);  /* 0C06C852 mov.l Rm,@-Rn */
	r8 = 0x0u;  /* 0C06C854 mov #imm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C06C858u, 2);  /* 0C06C856 mov.l Rm,@-Rn */
	r9 = 0x0u;  /* 0C06C858 mov #imm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06C85Cu, 2);  /* 0C06C85A mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s8)r4;  /* 0C06C85C exts.b Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C06C860u, 2);  /* 0C06C85E mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C06C862u, 1);  /* 0C06C860 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06C864u, 1);  /* 0C06C862 mov.l Rm,@-Rn */
	r11 = 0xC38C064u; UPD(0x0C06C866u, 1);  /* 0C06C864 mov.l @(disp,pc),Rn */
	IF(0x0C06C866u); r15 -= 4; W32(r15, PR); UPD(0x0C06C868u, 1);  /* 0C06C866 sts.l pr,@-Rn */
	r13 = 0xC2175E8u; UPD(0x0C06C86Au, 1);  /* 0C06C868 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C06C86A mov Rm,Rn */
	r12 = 0xC062A70u; UPD(0x0C06C86Eu, 2);  /* 0C06C86C mov.l @(disp,pc),Rn */
	IF(0x0C06C86Eu); ;  /* 0C06C86E nop */
	UPD(0x0C06C870u, 1);
L_0C06C870: BLKS(0x0C06C870u);
	r3 = r9;  /* 0C06C870 mov Rm,Rn */
	r3 += r11;  /* 0C06C872 add Rm,Rn */
	r0 = R32(r3); UPD(0x0C06C876u, 3);  /* 0C06C874 mov.l @Rm,Rn */
	r3 += 0x44u;  /* 0C06C876 add #imm,Rn */
	r4 = (u32)(s32)(s8)R8(r3); UPD(0x0C06C87Au, 2);  /* 0C06C878 mov.b @Rm,Rn */
	IF(0x0C06C87Au); r0 >>= 16;  /* 0C06C87A shlr16 Rn */
	r2 = r4 & 0xFF;  /* 0C06C87C extu.b Rm,Rn */
	IF(0x0C06C87Eu); r0 <<= 2;  /* 0C06C87E shll2 Rn */
	T = r2 == r10;  /* 0C06C880 cmp/eq Rm,Rn */
	IF(0x0C06C882u); r0 >>= 16;  /* 0C06C882 shlr16 Rn */
	IF(0x0C06C884u); r2 = T;  /* 0C06C884 movt Rn */
	r0 &= 0x1u;  /* 0C06C886 and #imm,r0 */
	r0 &= r2;  /* 0C06C888 and Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C06C88A tst Rm,Rn */
	{ u32 c_ = !T; r3 += 0xFFFFFFBCu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06C8C0u, 12); goto L_0C06C8C0; } UPD(0x0C06C890u, 1); goto L_0C06C890; }  /* 0C06C88C bf/s */
L_0C06C890: BLKS(0x0C06C890u);
	r7 = r8;  /* 0C06C890 mov Rm,Rn */
	r7 += 0x1u;  /* 0C06C892 add #imm,Rn */
	r3 = 0xFFu; UPD(0x0C06C896u, 3);  /* 0C06C894 mov.w @(disp,pc),Rn */
	r8 = (u32)(s32)(s16)r7;  /* 0C06C896 exts.w Rm,Rn */
	T = (s32)r8 > (s32)r3;  /* 0C06C898 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r9 += 0x54u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06C870u, 5); goto L_0C06C870; } goto L_0C06C89E; }  /* 0C06C89A bf/s */
L_0C06C89E: BLKS(0x0C06C89Eu);
	r15 = r14;  /* 0C06C89E mov Rm,Rn */
	IF(0x0C06C8A0u); PR = R32(r15); r15 += 4; UPD(0x0C06C8A2u, 3);  /* 0C06C8A0 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06C8A4u, 1);  /* 0C06C8A2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C06C8A6u, 1);  /* 0C06C8A4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06C8A8u, 1);  /* 0C06C8A6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06C8AAu, 1);  /* 0C06C8A8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06C8ACu, 1);  /* 0C06C8AA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06C8AEu, 1);  /* 0C06C8AC mov.l @Rm+,Rn */
	IF(0x0C06C8AEu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06C8AE rts */
L_0C06C8C0: BLKS(0x0C06C8C0u);
	r6 = R32(r3 + 0x18u); UPD(0x0C06C8C2u, 1);  /* 0C06C8C0 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C06C8C2 add #imm,Rn */
	W32(r13, r6); UPD(0x0C06C8C6u, 2);  /* 0C06C8C4 mov.l Rm,@Rn */
	r5 = 0xC393044u; UPD(0x0C06C8C8u, 1);  /* 0C06C8C6 mov.l @(disp,pc),Rn */
	r1 = R32(r3 + 0x20u); UPD(0x0C06C8CAu, 1);  /* 0C06C8C8 mov.l @(disp,Rm),Rn */
	W32(r5, r1); UPD(0x0C06C8CCu, 1);  /* 0C06C8CA mov.l Rm,@Rn */
	r0 = R32(r3 + 0x24u); UPD(0x0C06C8CEu, 1);  /* 0C06C8CC mov.l @(disp,Rm),Rn */
	W32(r15, r0); UPD(0x0C06C8D0u, 1);  /* 0C06C8CE mov.l Rm,@Rn */
	r4 = R32(r3 + 0x38u); UPD(0x0C06C8D2u, 1);  /* 0C06C8D0 mov.l @(disp,Rm),Rn */
	r5 = R32(r3 + 0x28u); UPD(0x0C06C8D4u, 1);  /* 0C06C8D2 mov.l @(disp,Rm),Rn */
	r6 = R32(r3 + 0x2Cu); UPD(0x0C06C8D6u, 1);  /* 0C06C8D4 mov.l @(disp,Rm),Rn */
	IF(0x0C06C8D6u); { u32 t_ = r12; PR = 0x0C06C8DAu; r7 = R32(r3 + 0x3Cu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C062A70, 0x0C062A70u, 0x0C06C8DAu); }  /* 0C06C8D6 jsr @Rn */
L_0C06C8DA: BLKS(0x0C06C8DAu);
	{ r15 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C06C890u, 3); goto L_0C06C890; }  /* 0C06C8DA bra */
}

/* FUN_0c06c8f0 */
void f_0C06C8F0(sh3_t *c)
{
	LOCALS;
L_0C06C8F0: BLKS(0x0C06C8F0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06C8F2u, 1);  /* 0C06C8F0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C06C8F4u, 1);  /* 0C06C8F2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C06C8F6u, 1);  /* 0C06C8F4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06C8F8u, 1);  /* 0C06C8F6 mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s8)r4;  /* 0C06C8F8 exts.b Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C06C8FCu, 2);  /* 0C06C8FA mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C06C8FEu, 1);  /* 0C06C8FC mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06C900u, 1);  /* 0C06C8FE mov.l Rm,@-Rn */
	r9 = 0x100u; UPD(0x0C06C902u, 1);  /* 0C06C900 mov.w @(disp,pc),Rn */
	IF(0x0C06C902u); r15 -= 4; W32(r15, PR); UPD(0x0C06C904u, 1);  /* 0C06C902 sts.l pr,@-Rn */
	r11 = 0xC38C064u; UPD(0x0C06C906u, 1);  /* 0C06C904 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C06C906 mov Rm,Rn */
	r8 = 0x5400u; UPD(0x0C06C90Au, 2);  /* 0C06C908 mov.w @(disp,pc),Rn */
	r13 = 0xC2175E8u; UPD(0x0C06C90Cu, 1);  /* 0C06C90A mov.l @(disp,pc),Rn */
	r12 = 0xC393044u; UPD(0x0C06C90Eu, 1);  /* 0C06C90C mov.l @(disp,pc),Rn */
	IF(0x0C06C90Eu); ;  /* 0C06C90E nop */
	UPD(0x0C06C910u, 1);
L_0C06C910: BLKS(0x0C06C910u);
	r3 = r8;  /* 0C06C910 mov Rm,Rn */
	r3 += r11;  /* 0C06C912 add Rm,Rn */
	r1 = R32(r3); UPD(0x0C06C916u, 3);  /* 0C06C914 mov.l @Rm,Rn */
	r0 = 0x40000000u; UPD(0x0C06C918u, 1);  /* 0C06C916 mov.l @(disp,pc),Rn */
	T = (r1 & r0) == 0;  /* 0C06C918 tst Rm,Rn */
	{ u32 c_ = T; r0 = r9; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06C92Cu, 4); goto L_0C06C92C; } goto L_0C06C91E; }  /* 0C06C91A bt/s */
L_0C06C91E: BLKS(0x0C06C91Eu);
	r3 += 0x44u;  /* 0C06C91E add #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r3); UPD(0x0C06C922u, 3);  /* 0C06C920 mov.b @Rm,Rn */
	r0 = r2 & 0xFF;  /* 0C06C922 extu.b Rm,Rn */
	T = r0 == r10;  /* 0C06C924 cmp/eq Rm,Rn */
	{ u32 c_ = T; r3 += 0xFFFFFFBCu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06C950u, 5); goto L_0C06C950; } UPD(0x0C06C92Au, 1); goto L_0C06C92A; }  /* 0C06C926 bt/s */
L_0C06C92A: BLKS(0x0C06C92Au);
	r0 = r9;  /* 0C06C92A mov Rm,Rn */
	UPD(0x0C06C92Cu, 1);
L_0C06C92C: BLKS(0x0C06C92Cu);
	r0 += 0x1u;  /* 0C06C92C add #imm,Rn */
	r7 = 0x13Fu; UPD(0x0C06C930u, 2);  /* 0C06C92E mov.w @(disp,pc),Rn */
	r9 = (u32)(s32)(s16)r0;  /* 0C06C930 exts.w Rm,Rn */
	T = (s32)r9 > (s32)r7;  /* 0C06C932 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r8 += 0x54u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06C910u, 5); goto L_0C06C910; } goto L_0C06C938; }  /* 0C06C934 bf/s */
L_0C06C938: BLKS(0x0C06C938u);
	r15 = r14;  /* 0C06C938 mov Rm,Rn */
	IF(0x0C06C93Au); PR = R32(r15); r15 += 4; UPD(0x0C06C93Cu, 3);  /* 0C06C93A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06C93Eu, 1);  /* 0C06C93C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C06C940u, 1);  /* 0C06C93E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06C942u, 1);  /* 0C06C940 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06C944u, 1);  /* 0C06C942 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06C946u, 1);  /* 0C06C944 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06C948u, 1);  /* 0C06C946 mov.l @Rm+,Rn */
	IF(0x0C06C948u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06C948 rts */
L_0C06C950: BLKS(0x0C06C950u);
	r6 = R32(r3 + 0x18u); UPD(0x0C06C952u, 1);  /* 0C06C950 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C06C952 add #imm,Rn */
	W32(r13, r6); UPD(0x0C06C956u, 2);  /* 0C06C954 mov.l Rm,@Rn */
	r5 = R32(r3 + 0x20u); UPD(0x0C06C958u, 1);  /* 0C06C956 mov.l @(disp,Rm),Rn */
	W32(r12, r5); UPD(0x0C06C95Au, 1);  /* 0C06C958 mov.l Rm,@Rn */
	r4 = R32(r3 + 0x24u); UPD(0x0C06C95Cu, 1);  /* 0C06C95A mov.l @(disp,Rm),Rn */
	W32(r15, r4); UPD(0x0C06C95Eu, 1);  /* 0C06C95C mov.l Rm,@Rn */
	r4 = R32(r3 + 0x38u); UPD(0x0C06C960u, 1);  /* 0C06C95E mov.l @(disp,Rm),Rn */
	r5 = R32(r3 + 0x28u); UPD(0x0C06C962u, 1);  /* 0C06C960 mov.l @(disp,Rm),Rn */
	r6 = R32(r3 + 0x2Cu); UPD(0x0C06C964u, 1);  /* 0C06C962 mov.l @(disp,Rm),Rn */
	r7 = R32(r3 + 0x3Cu); UPD(0x0C06C966u, 1);  /* 0C06C964 mov.l @(disp,Rm),Rn */
	r3 = 0xC062A70u; UPD(0x0C06C968u, 1);  /* 0C06C966 mov.l @(disp,pc),Rn */
	IF(0x0C06C968u); { u32 t_ = r3; PR = 0x0C06C96Cu; IF(0x0C06C96Au); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C062A70, 0x0C062A70u, 0x0C06C96Cu); }  /* 0C06C968 jsr @Rn */
L_0C06C96C: BLKS(0x0C06C96Cu);
	{ r15 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C06C92Au, 3); goto L_0C06C92A; }  /* 0C06C96C bra */
}

/* FUN_0c06c990 */
void f_0C06C990(sh3_t *c)
{
	LOCALS;
L_0C06C990: BLKS(0x0C06C990u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06C992u, 1);  /* 0C06C990 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C06C994u, 1);  /* 0C06C992 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C06C996u, 1);  /* 0C06C994 mov.l Rm,@-Rn */
	r9 = 0x0u;  /* 0C06C996 mov #imm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06C99Au, 2);  /* 0C06C998 mov.l Rm,@-Rn */
	r10 = 0x0u;  /* 0C06C99A mov #imm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C06C99Eu, 2);  /* 0C06C99C mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06C9A0u, 1);  /* 0C06C99E mov.l Rm,@-Rn */
	r11 = 0xC392D82u; UPD(0x0C06C9A2u, 1);  /* 0C06C9A0 mov.l @(disp,pc),Rn */
	IF(0x0C06C9A2u); r15 -= 4; W32(r15, PR); UPD(0x0C06C9A4u, 1);  /* 0C06C9A2 sts.l pr,@-Rn */
	r12 = 0xC2834FCu; UPD(0x0C06C9A6u, 1);  /* 0C06C9A4 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C06C9A6 mov Rm,Rn */
	UPD(0x0C06C9A8u, 1);
L_0C06C9A8: BLKS(0x0C06C9A8u);
	r7 = 0xC38C064u; UPD(0x0C06C9AAu, 1);  /* 0C06C9A8 mov.l @(disp,pc),Rn */
	r7 += r9;  /* 0C06C9AA add Rm,Rn */
	r3 = R32(r7); UPD(0x0C06C9AEu, 2);  /* 0C06C9AC mov.l @Rm,Rn */
	r0 = 0x40000000u; UPD(0x0C06C9B0u, 1);  /* 0C06C9AE mov.l @(disp,pc),Rn */
	T = (r3 & r0) == 0;  /* 0C06C9B0 tst Rm,Rn */
	{ u32 c_ = T; r8 = r10; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06C9F4u, 4); goto L_0C06C9F4; } goto L_0C06C9B6; }  /* 0C06C9B2 bt/s */
L_0C06C9B6: BLKS(0x0C06C9B6u);
	r7 += 0x44u;  /* 0C06C9B6 add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C06C9BAu, 3);  /* 0C06C9B8 mov.b @Rm,Rn */
	r0 = 0x1Fu;  /* 0C06C9BA mov #imm,Rn */
	r0 &= r6;  /* 0C06C9BC and Rm,Rn */
	r0 += r0;  /* 0C06C9BE add Rm,Rn */
	r0 += r11;  /* 0C06C9C0 add Rm,Rn */
	r1 = (u32)(s32)(s16)R16(r0); UPD(0x0C06C9C4u, 5);  /* 0C06C9C2 mov.w @Rm,Rn */
	r1 += 0x1u;  /* 0C06C9C4 add #imm,Rn */
	W16(r0, r1); UPD(0x0C06C9C8u, 2);  /* 0C06C9C6 mov.w Rm,@Rn */
	r0 = r3;  /* 0C06C9C8 mov Rm,Rn */
	r0 &= 0x4u;  /* 0C06C9CA and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C06C9CC tst Rm,Rn */
	{ u32 c_ = T; r7 += 0xFFFFFFBCu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06C9F2u, 6); goto L_0C06C9F2; } goto L_0C06C9D2; }  /* 0C06C9CE bt/s */
L_0C06C9D2: BLKS(0x0C06C9D2u);
	r2 = 0x10u;  /* 0C06C9D2 mov #imm,Rn */
	r3 &= r2;  /* 0C06C9D4 and Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C06C9D6 tst Rm,Rn */
	if (T) { UPD(0x0C06CA20u, 7); goto L_0C06CA20; }  /* 0C06C9D8 bt */
L_0C06C9DA: BLKS(0x0C06C9DAu);
	r7 += 0x45u;  /* 0C06C9DA add #imm,Rn */
	W8(r7, r6); UPD(0x0C06C9DEu, 2);  /* 0C06C9DC mov.b Rm,@Rn */
L_0C06C9DE: BLKS(0x0C06C9DEu);
	r0 = 0xC38C0A9u; UPD(0x0C06C9E0u, 1);  /* 0C06C9DE mov.l @(disp,pc),Rn */
	r5 = 0x1Fu;  /* 0C06C9E0 mov #imm,Rn */
	IF(0x0C06C9E2u); r6 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C06C9E4u, 2);  /* 0C06C9E2 mov.b @(r0,Rm),Rn */
	r5 &= r6;  /* 0C06C9E4 and Rm,Rn */
	r5 += r5;  /* 0C06C9E6 add Rm,Rn */
	r3 = r5;  /* 0C06C9E8 mov Rm,Rn */
	r3 += r12;  /* 0C06C9EA add Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r3); UPD(0x0C06C9EEu, 5);  /* 0C06C9EC mov.w @Rm,Rn */
	r4 += 0x1u;  /* 0C06C9EE add #imm,Rn */
	W16(r3, r4); UPD(0x0C06C9F2u, 2);  /* 0C06C9F0 mov.w Rm,@Rn */
L_0C06C9F2: BLKS(0x0C06C9F2u);
	r8 = r10;  /* 0C06C9F2 mov Rm,Rn */
	UPD(0x0C06C9F4u, 1);
L_0C06C9F4: BLKS(0x0C06C9F4u);
	r8 += 0x1u;  /* 0C06C9F4 add #imm,Rn */
	r7 = 0xFFu; UPD(0x0C06C9F8u, 2);  /* 0C06C9F6 mov.w @(disp,pc),Rn */
	r10 = (u32)(s32)(s16)r8;  /* 0C06C9F8 exts.w Rm,Rn */
	T = (s32)r10 > (s32)r7;  /* 0C06C9FA cmp/gt Rm,Rn */
	{ u32 c_ = !T; r9 += 0x54u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06C9A8u, 5); goto L_0C06C9A8; } goto L_0C06CA00; }  /* 0C06C9FC bf/s */
L_0C06CA00: BLKS(0x0C06CA00u);
	r15 = r14;  /* 0C06CA00 mov Rm,Rn */
	IF(0x0C06CA02u); PR = R32(r15); r15 += 4; UPD(0x0C06CA04u, 3);  /* 0C06CA02 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06CA06u, 1);  /* 0C06CA04 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06CA08u, 1);  /* 0C06CA06 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06CA0Au, 1);  /* 0C06CA08 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06CA0Cu, 1);  /* 0C06CA0A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06CA0Eu, 1);  /* 0C06CA0C mov.l @Rm+,Rn */
	IF(0x0C06CA0Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06CA0E rts */
L_0C06CA20: BLKS(0x0C06CA20u);
	r0 = 0xC065A70u; UPD(0x0C06CA22u, 1);  /* 0C06CA20 mov.l @(disp,pc),Rn */
	r8 = r7;  /* 0C06CA22 mov Rm,Rn */
	r8 += 0x45u;  /* 0C06CA24 add #imm,Rn */
	r6 = r6 & 0xFF;  /* 0C06CA26 extu.b Rm,Rn */
	r4 = R32(r7 + 0x28u); UPD(0x0C06CA2Au, 4);  /* 0C06CA28 mov.l @(disp,Rm),Rn */
	IF(0x0C06CA2Au); { u32 t_ = r0; PR = 0x0C06CA2Eu; r5 = R32(r7 + 0x2Cu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C065A70, 0x0C065A70u, 0x0C06CA2Eu); }  /* 0C06CA2A jsr @Rn */
L_0C06CA2E: BLKS(0x0C06CA2Eu);
	{ W8(r8, r0); /* slot mov.b Rm,@Rn */ UPD(0x0C06C9DEu, 3); goto L_0C06C9DE; }  /* 0C06CA2E bra */
}

/* FUN_0c06ca50 */
void f_0C06CA50(sh3_t *c)
{
	LOCALS;
L_0C06CA50: BLKS(0x0C06CA50u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06CA52u, 1);  /* 0C06CA50 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C06CA54u, 1);  /* 0C06CA52 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C06CA56u, 1);  /* 0C06CA54 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06CA58u, 1);  /* 0C06CA56 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C06CA5Au, 1);  /* 0C06CA58 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06CA5Cu, 1);  /* 0C06CA5A mov.l Rm,@-Rn */
	r10 = 0x100u; UPD(0x0C06CA5Eu, 1);  /* 0C06CA5C mov.w @(disp,pc),Rn */
	IF(0x0C06CA5Eu); r15 -= 4; W32(r15, PR); UPD(0x0C06CA60u, 1);  /* 0C06CA5E sts.l pr,@-Rn */
	r11 = 0xC26C87Au; UPD(0x0C06CA62u, 1);  /* 0C06CA60 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C06CA62 mov Rm,Rn */
	r12 = 0xC21CC40u; UPD(0x0C06CA66u, 2);  /* 0C06CA64 mov.l @(disp,pc),Rn */
	r9 = 0x5400u; UPD(0x0C06CA68u, 1);  /* 0C06CA66 mov.w @(disp,pc),Rn */
L_0C06CA68: BLKS(0x0C06CA68u);
	r7 = 0xC38C064u; UPD(0x0C06CA6Au, 1);  /* 0C06CA68 mov.l @(disp,pc),Rn */
	r7 += r9;  /* 0C06CA6A add Rm,Rn */
	r3 = R32(r7); UPD(0x0C06CA6Eu, 2);  /* 0C06CA6C mov.l @Rm,Rn */
	r0 = 0x40000000u; UPD(0x0C06CA70u, 1);  /* 0C06CA6E mov.l @(disp,pc),Rn */
	T = (r3 & r0) == 0;  /* 0C06CA70 tst Rm,Rn */
	{ u32 c_ = T; r8 = r10; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06CAB4u, 4); goto L_0C06CAB4; } goto L_0C06CA76; }  /* 0C06CA72 bt/s */
L_0C06CA76: BLKS(0x0C06CA76u);
	r7 += 0x44u;  /* 0C06CA76 add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C06CA7Au, 3);  /* 0C06CA78 mov.b @Rm,Rn */
	r0 = 0x1Fu;  /* 0C06CA7A mov #imm,Rn */
	r0 &= r6;  /* 0C06CA7C and Rm,Rn */
	r0 += r0;  /* 0C06CA7E add Rm,Rn */
	r0 += r11;  /* 0C06CA80 add Rm,Rn */
	r1 = (u32)(s32)(s16)R16(r0); UPD(0x0C06CA84u, 5);  /* 0C06CA82 mov.w @Rm,Rn */
	r1 += 0x1u;  /* 0C06CA84 add #imm,Rn */
	W16(r0, r1); UPD(0x0C06CA88u, 2);  /* 0C06CA86 mov.w Rm,@Rn */
	r0 = r3;  /* 0C06CA88 mov Rm,Rn */
	r0 &= 0x4u;  /* 0C06CA8A and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C06CA8C tst Rm,Rn */
	{ u32 c_ = T; r7 += 0xFFFFFFBCu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06CAB2u, 6); goto L_0C06CAB2; } goto L_0C06CA92; }  /* 0C06CA8E bt/s */
L_0C06CA92: BLKS(0x0C06CA92u);
	r2 = 0x10u;  /* 0C06CA92 mov #imm,Rn */
	r3 &= r2;  /* 0C06CA94 and Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C06CA96 tst Rm,Rn */
	if (T) { UPD(0x0C06CAE0u, 7); goto L_0C06CAE0; }  /* 0C06CA98 bt */
L_0C06CA9A: BLKS(0x0C06CA9Au);
	r7 += 0x45u;  /* 0C06CA9A add #imm,Rn */
	W8(r7, r6); UPD(0x0C06CA9Eu, 2);  /* 0C06CA9C mov.b Rm,@Rn */
L_0C06CA9E: BLKS(0x0C06CA9Eu);
	r0 = 0xC38C0A9u; UPD(0x0C06CAA0u, 1);  /* 0C06CA9E mov.l @(disp,pc),Rn */
	r5 = 0x1Fu;  /* 0C06CAA0 mov #imm,Rn */
	IF(0x0C06CAA2u); r6 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C06CAA4u, 2);  /* 0C06CAA2 mov.b @(r0,Rm),Rn */
	r5 &= r6;  /* 0C06CAA4 and Rm,Rn */
	r5 += r5;  /* 0C06CAA6 add Rm,Rn */
	r3 = r5;  /* 0C06CAA8 mov Rm,Rn */
	r3 += r12;  /* 0C06CAAA add Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r3); UPD(0x0C06CAAEu, 5);  /* 0C06CAAC mov.w @Rm,Rn */
	r4 += 0x1u;  /* 0C06CAAE add #imm,Rn */
	W16(r3, r4); UPD(0x0C06CAB2u, 2);  /* 0C06CAB0 mov.w Rm,@Rn */
L_0C06CAB2: BLKS(0x0C06CAB2u);
	r8 = r10;  /* 0C06CAB2 mov Rm,Rn */
	UPD(0x0C06CAB4u, 1);
L_0C06CAB4: BLKS(0x0C06CAB4u);
	r8 += 0x1u;  /* 0C06CAB4 add #imm,Rn */
	r7 = 0x13Fu; UPD(0x0C06CAB8u, 2);  /* 0C06CAB6 mov.w @(disp,pc),Rn */
	r10 = (u32)(s32)(s16)r8;  /* 0C06CAB8 exts.w Rm,Rn */
	T = (s32)r10 > (s32)r7;  /* 0C06CABA cmp/gt Rm,Rn */
	{ u32 c_ = !T; r9 += 0x54u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06CA68u, 5); goto L_0C06CA68; } goto L_0C06CAC0; }  /* 0C06CABC bf/s */
L_0C06CAC0: BLKS(0x0C06CAC0u);
	r15 = r14;  /* 0C06CAC0 mov Rm,Rn */
	IF(0x0C06CAC2u); PR = R32(r15); r15 += 4; UPD(0x0C06CAC4u, 3);  /* 0C06CAC2 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06CAC6u, 1);  /* 0C06CAC4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06CAC8u, 1);  /* 0C06CAC6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06CACAu, 1);  /* 0C06CAC8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06CACCu, 1);  /* 0C06CACA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06CACEu, 1);  /* 0C06CACC mov.l @Rm+,Rn */
	IF(0x0C06CACEu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06CACE rts */
L_0C06CAE0: BLKS(0x0C06CAE0u);
	r0 = 0xC065A70u; UPD(0x0C06CAE2u, 1);  /* 0C06CAE0 mov.l @(disp,pc),Rn */
	r8 = r7;  /* 0C06CAE2 mov Rm,Rn */
	r8 += 0x45u;  /* 0C06CAE4 add #imm,Rn */
	r6 = r6 & 0xFF;  /* 0C06CAE6 extu.b Rm,Rn */
	r4 = R32(r7 + 0x28u); UPD(0x0C06CAEAu, 4);  /* 0C06CAE8 mov.l @(disp,Rm),Rn */
	IF(0x0C06CAEAu); { u32 t_ = r0; PR = 0x0C06CAEEu; r5 = R32(r7 + 0x2Cu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C065A70, 0x0C065A70u, 0x0C06CAEEu); }  /* 0C06CAEA jsr @Rn */
L_0C06CAEE: BLKS(0x0C06CAEEu);
	{ W8(r8, r0); /* slot mov.b Rm,@Rn */ UPD(0x0C06CA9Eu, 3); goto L_0C06CA9E; }  /* 0C06CAEE bra */
}

/* FUN_0c06cb10 */
void f_0C06CB10(sh3_t *c)
{
	LOCALS;
L_0C06CB10: BLKS(0x0C06CB10u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06CB12u, 1);  /* 0C06CB10 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C06CB14u, 1);  /* 0C06CB12 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C06CB16u, 1);  /* 0C06CB14 mov.l Rm,@-Rn */
	r9 = r6;  /* 0C06CB16 mov Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06CB1Au, 2);  /* 0C06CB18 mov.l Rm,@-Rn */
	r10 = r5;  /* 0C06CB1A mov Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C06CB1Eu, 2);  /* 0C06CB1C mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s8)r7;  /* 0C06CB1E exts.b Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06CB22u, 2);  /* 0C06CB20 mov.l Rm,@-Rn */
	r2 = 0xFE000000u; UPD(0x0C06CB24u, 1);  /* 0C06CB22 mov.l @(disp,pc),Rn */
	IF(0x0C06CB24u); r15 -= 4; W32(r15, PR); UPD(0x0C06CB26u, 1);  /* 0C06CB24 sts.l pr,@-Rn */
	r2 += r6;  /* 0C06CB26 add Rm,Rn */
	IF(0x0C06CB28u); T = (s32)r2 >= 0;  /* 0C06CB28 cmp/pz Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06CBE0u, 5); goto L_0C06CBE0; } UPD(0x0C06CB2Eu, 1); goto L_0C06CB2E; }  /* 0C06CB2A bf/s */
L_0C06CB2E: BLKS(0x0C06CB2Eu);
	r0 = 0x680000u; UPD(0x0C06CB30u, 1);  /* 0C06CB2E mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r0;  /* 0C06CB30 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C06CB6Cu, 4); goto L_0C06CB6C; }  /* 0C06CB32 bt */
L_0C06CB34: BLKS(0x0C06CB34u);
	r0 = 0x3FFFFFu; UPD(0x0C06CB36u, 1);  /* 0C06CB34 mov.l @(disp,pc),Rn */
	T = (s32)r10 > (s32)r0;  /* 0C06CB36 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C06CB6Cu, 4); goto L_0C06CB6C; }  /* 0C06CB38 bf */
L_0C06CB3A: BLKS(0x0C06CB3Au);
	r2 = 0x4000000u; UPD(0x0C06CB3Cu, 1);  /* 0C06CB3A mov.l @(disp,pc),Rn */
	T = (r4 & r2) == 0;  /* 0C06CB3C tst Rm,Rn */
	{ u32 c_ = !T; r4 = 0x4u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C06CBD0u, 4); goto L_0C06CBD0; } goto L_0C06CB42; }  /* 0C06CB3E bf/s */
L_0C06CB42: BLKS(0x0C06CB42u);
	r0 = 0xC21CA15u; UPD(0x0C06CB44u, 2);  /* 0C06CB42 mov.l @(disp,pc),Rn */
	r7 = (u32)(s32)(s8)R8(r0); UPD(0x0C06CB46u, 1);  /* 0C06CB44 mov.b @Rm,Rn */
	r3 = 0xC27DFF4u; UPD(0x0C06CB48u, 1);  /* 0C06CB46 mov.l @(disp,pc),Rn */
	r6 = r7 & 0xFF;  /* 0C06CB48 extu.b Rm,Rn */
	r6 += r3;  /* 0C06CB4A add Rm,Rn */
	r5 = (u32)(s32)(s8)R8(r6); UPD(0x0C06CB4Eu, 3);  /* 0C06CB4C mov.b @Rm,Rn */
	r5 += 0x1u;  /* 0C06CB4E add #imm,Rn */
	r1 = r5 & 0xFF;  /* 0C06CB50 extu.b Rm,Rn */
	T = r1 > r4;  /* 0C06CB52 cmp/hi Rm,Rn */
	{ u32 c_ = !T; W8(r6, r5); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C06CB6Cu, 6); goto L_0C06CB6C; } UPD(0x0C06CB58u, 1); goto L_0C06CB58; }  /* 0C06CB54 bf/s */
L_0C06CB58: BLKS(0x0C06CB58u);
	r2 = (u32)(s32)(s8)R8(r0); UPD(0x0C06CB5Au, 1);  /* 0C06CB58 mov.b @Rm,Rn */
L_0C06CB5A: BLKS(0x0C06CB5Au);
	r12 = 0x0u;  /* 0C06CB5A mov #imm,Rn */
	r8 = 0xC06AD30u; UPD(0x0C06CB5Eu, 2);  /* 0C06CB5C mov.l @(disp,pc),Rn */
	r0 = r2 & 0xFF;  /* 0C06CB5E extu.b Rm,Rn */
	IF(0x0C06CB60u); W8(r0 + r3, r12); UPD(0x0C06CB62u, 2);  /* 0C06CB60 mov.b Rm,@(r0,Rn) */
	IF(0x0C06CB62u); { u32 t_ = r8; PR = 0x0C06CB66u; r4 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C06AD30, 0x0C06AD30u, 0x0C06CB66u); }  /* 0C06CB62 jsr @Rn */
L_0C06CB66: BLKS(0x0C06CB66u);
	T = (r0 & r0) == 0;  /* 0C06CB66 tst Rm,Rn */
	{ u32 c_ = !T; r12 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C06CB80u, 4); goto L_0C06CB80; } UPD(0x0C06CB6Cu, 1); goto L_0C06CB6C; }  /* 0C06CB68 bf/s */
L_0C06CB6C: BLKS(0x0C06CB6Cu);
	r15 = r14;  /* 0C06CB6C mov Rm,Rn */
	IF(0x0C06CB6Eu); PR = R32(r15); r15 += 4; UPD(0x0C06CB70u, 2);  /* 0C06CB6E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06CB72u, 1);  /* 0C06CB70 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06CB74u, 1);  /* 0C06CB72 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06CB76u, 1);  /* 0C06CB74 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06CB78u, 1);  /* 0C06CB76 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06CB7Au, 1);  /* 0C06CB78 mov.l @Rm+,Rn */
	IF(0x0C06CB7Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06CB7A rts */
L_0C06CB80: BLKS(0x0C06CB80u);
	r2 = 0xC2755BCu; UPD(0x0C06CB82u, 1);  /* 0C06CB80 mov.l @(disp,pc),Rn */
	r8 = 0x54u;  /* 0C06CB82 mov #imm,Rn */
	r4 = (u32)(s32)(s16)R16(r2); UPD(0x0C06CB86u, 2);  /* 0C06CB84 mov.w @Rm,Rn */
	IF(0x0C06CB86u); MACL = r4 * r8;  /* 0C06CB86 mul.l Rm,Rn */
	r7 = 0xC38C064u; UPD(0x0C06CB8Au, 3);  /* 0C06CB88 mov.l @(disp,pc),Rn */
	IF(0x0C06CB8Au); r8 = MACL;  /* 0C06CB8A sts macl,Rn */
	r5 = 0xD0000004u; UPD(0x0C06CB8Eu, 2);  /* 0C06CB8C mov.l @(disp,pc),Rn */
	r8 += r7;  /* 0C06CB8E add Rm,Rn */
	r6 = 0xC06B730u; UPD(0x0C06CB92u, 2);  /* 0C06CB90 mov.l @(disp,pc),Rn */
	W32(r8, r5); UPD(0x0C06CB94u, 1);  /* 0C06CB92 mov.l Rm,@Rn */
	IF(0x0C06CB94u); { u32 t_ = r6; PR = 0x0C06CB98u; r5 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C06B730, 0x0C06B730u, 0x0C06CB98u); }  /* 0C06CB94 jsr @Rn */
L_0C06CB98: BLKS(0x0C06CB98u);
	W32(r8 + 0x28u, r10); UPD(0x0C06CB9Au, 1);  /* 0C06CB98 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x2Cu, r9); UPD(0x0C06CB9Cu, 1);  /* 0C06CB9A mov.l Rm,@(disp,Rn) */
	r8 += 0x44u;  /* 0C06CB9C add #imm,Rn */
	W8(r8, r11); UPD(0x0C06CBA0u, 2);  /* 0C06CB9E mov.b Rm,@Rn */
	r0 = 0x20000u; UPD(0x0C06CBA2u, 1);  /* 0C06CBA0 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFBCu;  /* 0C06CBA2 add #imm,Rn */
	W32(r8 + 0x30u, r0); UPD(0x0C06CBA6u, 2);  /* 0C06CBA4 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x34u, r12); UPD(0x0C06CBA8u, 1);  /* 0C06CBA6 mov.l Rm,@(disp,Rn) */
	r11 = 0xC27DFF8u; UPD(0x0C06CBAAu, 1);  /* 0C06CBA8 mov.l @(disp,pc),Rn */
	r8 += 0x40u;  /* 0C06CBAA add #imm,Rn */
	r9 = R32(r11); UPD(0x0C06CBAEu, 2);  /* 0C06CBAC mov.l @Rm,Rn */
	IF(0x0C06CBAEu); r9 >>= 2;  /* 0C06CBAE shlr2 Rn */
	IF(0x0C06CBB0u); T = r9 & 1; r9 >>= 1;  /* 0C06CBB0 shlr Rn */
	r10 = 0xFFF70000u; UPD(0x0C06CBB4u, 3);  /* 0C06CBB2 mov.l @(disp,pc),Rn */
	IF(0x0C06CBB4u); r9 >>= 2;  /* 0C06CBB4 shlr2 Rn */
	r9 += r10;  /* 0C06CBB6 add Rm,Rn */
	W32(r8, r9); UPD(0x0C06CBBAu, 3);  /* 0C06CBB8 mov.l Rm,@Rn */
	r3 = 0x808080u; UPD(0x0C06CBBCu, 1);  /* 0C06CBBA mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFC0u;  /* 0C06CBBC add #imm,Rn */
	W32(r8 + 0x38u, r12); UPD(0x0C06CBC0u, 2);  /* 0C06CBBE mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x3Cu, r3); UPD(0x0C06CBC2u, 1);  /* 0C06CBC0 mov.l Rm,@(disp,Rn) */
	r8 += 0x4Fu;  /* 0C06CBC2 add #imm,Rn */
	{ W8(r8, r12); /* slot mov.b Rm,@Rn */ UPD(0x0C06CB6Cu, 4); goto L_0C06CB6C; }  /* 0C06CBC4 bra */
L_0C06CBD0: BLKS(0x0C06CBD0u);
	r3 = 0xC27DFF4u; UPD(0x0C06CBD2u, 1);  /* 0C06CBD0 mov.l @(disp,pc),Rn */
	r0 = 0xC21CA15u; UPD(0x0C06CBD4u, 1);  /* 0C06CBD2 mov.l @(disp,pc),Rn */
	{ r2 = (u32)(s32)(s8)R8(r0); /* slot mov.b @Rm,Rn */ UPD(0x0C06CB5Au, 3); goto L_0C06CB5A; }  /* 0C06CBD4 bra */
L_0C06CBE0: BLKS(0x0C06CBE0u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C06CB2Eu, 3); goto L_0C06CB2E; }  /* 0C06CBE0 bra */
}

/* FUN_0c06cc20 */
void f_0C06CC20(sh3_t *c)
{
	LOCALS;
L_0C06CC20: BLKS(0x0C06CC20u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06CC22u, 1);  /* 0C06CC20 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C06CC24u, 1);  /* 0C06CC22 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C06CC26u, 1);  /* 0C06CC24 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s8)r7;  /* 0C06CC26 exts.b Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06CC2Au, 2);  /* 0C06CC28 mov.l Rm,@-Rn */
	r10 = r4;  /* 0C06CC2A mov Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C06CC2Eu, 2);  /* 0C06CC2C mov.l Rm,@-Rn */
	r11 = r5;  /* 0C06CC2E mov Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06CC32u, 2);  /* 0C06CC30 mov.l Rm,@-Rn */
	r12 = r6;  /* 0C06CC32 mov Rm,Rn */
	r8 = 0xC06AD30u; UPD(0x0C06CC36u, 2);  /* 0C06CC34 mov.l @(disp,pc),Rn */
	r4 = 0x1u;  /* 0C06CC36 mov #imm,Rn */
	IF(0x0C06CC38u); r15 -= 4; W32(r15, PR); UPD(0x0C06CC3Au, 2);  /* 0C06CC38 sts.l pr,@-Rn */
	IF(0x0C06CC3Au); { u32 t_ = r8; PR = 0x0C06CC3Eu; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C06AD30, 0x0C06AD30u, 0x0C06CC3Eu); }  /* 0C06CC3A jsr @Rn */
L_0C06CC3E: BLKS(0x0C06CC3Eu);
	T = (r0 & r0) == 0;  /* 0C06CC3E tst Rm,Rn */
	if (!T) { UPD(0x0C06CC60u, 4); goto L_0C06CC60; }  /* 0C06CC40 bf */
L_0C06CC42: BLKS(0x0C06CC42u);
	r15 = r14;  /* 0C06CC42 mov Rm,Rn */
	IF(0x0C06CC44u); PR = R32(r15); r15 += 4; UPD(0x0C06CC46u, 2);  /* 0C06CC44 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06CC48u, 1);  /* 0C06CC46 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06CC4Au, 1);  /* 0C06CC48 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06CC4Cu, 1);  /* 0C06CC4A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06CC4Eu, 1);  /* 0C06CC4C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06CC50u, 1);  /* 0C06CC4E mov.l @Rm+,Rn */
	IF(0x0C06CC50u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06CC50 rts */
L_0C06CC60: BLKS(0x0C06CC60u);
	r3 = 0xC2755BCu; UPD(0x0C06CC62u, 1);  /* 0C06CC60 mov.l @(disp,pc),Rn */
	r8 = 0x54u;  /* 0C06CC62 mov #imm,Rn */
	r4 = (u32)(s32)(s16)R16(r3); UPD(0x0C06CC66u, 2);  /* 0C06CC64 mov.w @Rm,Rn */
	r5 = r10;  /* 0C06CC66 mov Rm,Rn */
	IF(0x0C06CC68u); MACL = r4 * r8;  /* 0C06CC68 mul.l Rm,Rn */
	r2 = 0xC38C064u; UPD(0x0C06CC6Cu, 4);  /* 0C06CC6A mov.l @(disp,pc),Rn */
	r10 = 0xC06B730u; UPD(0x0C06CC6Eu, 1);  /* 0C06CC6C mov.l @(disp,pc),Rn */
	IF(0x0C06CC6Eu); r8 = MACL;  /* 0C06CC6E sts macl,Rn */
	r0 = 0xD0000004u; UPD(0x0C06CC72u, 2);  /* 0C06CC70 mov.l @(disp,pc),Rn */
	r8 += r2;  /* 0C06CC72 add Rm,Rn */
	IF(0x0C06CC74u); { u32 t_ = r10; PR = 0x0C06CC78u; W32(r8, r0); /* slot mov.l Rm,@Rn */ UPD(t_, 3); CALLP(t_, f_0C06B730, 0x0C06B730u, 0x0C06CC78u); }  /* 0C06CC74 jsr @Rn */
L_0C06CC78: BLKS(0x0C06CC78u);
	W32(r8 + 0x28u, r11); UPD(0x0C06CC7Au, 1);  /* 0C06CC78 mov.l Rm,@(disp,Rn) */
	r0 = 0x0u;  /* 0C06CC7A mov #imm,Rn */
	W32(r8 + 0x2Cu, r12); UPD(0x0C06CC7Eu, 2);  /* 0C06CC7C mov.l Rm,@(disp,Rn) */
	r8 += 0x44u;  /* 0C06CC7E add #imm,Rn */
	W8(r8, r9); UPD(0x0C06CC82u, 2);  /* 0C06CC80 mov.b Rm,@Rn */
	r7 = R32(r14 + 0x1Cu); UPD(0x0C06CC84u, 1);  /* 0C06CC82 mov.l @(disp,Rm),Rn */
	r8 += 0xFFFFFFBCu;  /* 0C06CC84 add #imm,Rn */
	r6 = R32(r14 + 0x20u); UPD(0x0C06CC88u, 2);  /* 0C06CC86 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x30u, r7); UPD(0x0C06CC8Au, 1);  /* 0C06CC88 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x34u, r6); UPD(0x0C06CC8Cu, 1);  /* 0C06CC8A mov.l Rm,@(disp,Rn) */
	r5 = 0xC27DFF8u; UPD(0x0C06CC8Eu, 1);  /* 0C06CC8C mov.l @(disp,pc),Rn */
	r8 += 0x40u;  /* 0C06CC8E add #imm,Rn */
	r3 = R32(r5); UPD(0x0C06CC92u, 2);  /* 0C06CC90 mov.l @Rm,Rn */
	IF(0x0C06CC92u); r3 >>= 2;  /* 0C06CC92 shlr2 Rn */
	IF(0x0C06CC94u); T = r3 & 1; r3 >>= 1;  /* 0C06CC94 shlr Rn */
	r4 = 0xFFF70000u; UPD(0x0C06CC98u, 3);  /* 0C06CC96 mov.l @(disp,pc),Rn */
	IF(0x0C06CC98u); r3 >>= 2;  /* 0C06CC98 shlr2 Rn */
	r3 += r4;  /* 0C06CC9A add Rm,Rn */
	W32(r8, r3); UPD(0x0C06CC9Eu, 3);  /* 0C06CC9C mov.l Rm,@Rn */
	r2 = 0x808080u; UPD(0x0C06CCA0u, 1);  /* 0C06CC9E mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFC0u;  /* 0C06CCA0 add #imm,Rn */
	W32(r8 + 0x38u, r0); UPD(0x0C06CCA4u, 2);  /* 0C06CCA2 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x3Cu, r2); UPD(0x0C06CCA6u, 1);  /* 0C06CCA4 mov.l Rm,@(disp,Rn) */
	r8 += 0x4Fu;  /* 0C06CCA6 add #imm,Rn */
	{ W8(r8, r0); /* slot mov.b Rm,@Rn */ UPD(0x0C06CC42u, 4); goto L_0C06CC42; }  /* 0C06CCA8 bra */
}

/* FUN_0c06ccd0 */
void f_0C06CCD0(sh3_t *c)
{
	LOCALS;
L_0C06CCD0: BLKS(0x0C06CCD0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06CCD2u, 1);  /* 0C06CCD0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C06CCD4u, 1);  /* 0C06CCD2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C06CCD6u, 1);  /* 0C06CCD4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06CCD8u, 1);  /* 0C06CCD6 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C06CCDAu, 1);  /* 0C06CCD8 mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s8)r6;  /* 0C06CCDA exts.b Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C06CCDEu, 2);  /* 0C06CCDC mov.l Rm,@-Rn */
	r12 = r4;  /* 0C06CCDE mov Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06CCE2u, 2);  /* 0C06CCE0 mov.l Rm,@-Rn */
	r13 = r5;  /* 0C06CCE2 mov Rm,Rn */
	IF(0x0C06CCE4u); r15 -= 4; W32(r15, PR); UPD(0x0C06CCE6u, 2);  /* 0C06CCE4 sts.l pr,@-Rn */
	r4 = 0x1u;  /* 0C06CCE6 mov #imm,Rn */
	r8 = 0xC06AD30u; UPD(0x0C06CCEAu, 2);  /* 0C06CCE8 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C06CCEA add #imm,Rn */
	r14 = r15;  /* 0C06CCEC mov Rm,Rn */
	IF(0x0C06CCEEu); { u32 t_ = r8; PR = 0x0C06CCF2u; W32(r14, r7); /* slot mov.l Rm,@Rn */ UPD(t_, 4); CALLP(t_, f_0C06AD30, 0x0C06AD30u, 0x0C06CCF2u); }  /* 0C06CCEE jsr @Rn */
L_0C06CCF2: BLKS(0x0C06CCF2u);
	T = (r0 & r0) == 0;  /* 0C06CCF2 tst Rm,Rn */
	if (!T) { UPD(0x0C06CD10u, 4); goto L_0C06CD10; }  /* 0C06CCF4 bf */
L_0C06CCF6: BLKS(0x0C06CCF6u);
	r14 += 0x4u;  /* 0C06CCF6 add #imm,Rn */
	r15 = r14;  /* 0C06CCF8 mov Rm,Rn */
	IF(0x0C06CCFAu); PR = R32(r15); r15 += 4; UPD(0x0C06CCFCu, 3);  /* 0C06CCFA lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06CCFEu, 1);  /* 0C06CCFC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C06CD00u, 1);  /* 0C06CCFE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06CD02u, 1);  /* 0C06CD00 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06CD04u, 1);  /* 0C06CD02 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06CD06u, 1);  /* 0C06CD04 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06CD08u, 1);  /* 0C06CD06 mov.l @Rm+,Rn */
	IF(0x0C06CD08u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06CD08 rts */
L_0C06CD10: BLKS(0x0C06CD10u);
	r2 = 0xC2755BCu; UPD(0x0C06CD12u, 1);  /* 0C06CD10 mov.l @(disp,pc),Rn */
	r8 = 0x54u;  /* 0C06CD12 mov #imm,Rn */
	r10 = (u32)(s32)(s16)R16(r2); UPD(0x0C06CD16u, 2);  /* 0C06CD14 mov.w @Rm,Rn */
	r6 = 0x7u;  /* 0C06CD16 mov #imm,Rn */
	IF(0x0C06CD18u); MACL = r10 * r8;  /* 0C06CD18 mul.l Rm,Rn */
	r0 = 0xC38C064u; UPD(0x0C06CD1Cu, 4);  /* 0C06CD1A mov.l @(disp,pc),Rn */
	r4 = 0x4u;  /* 0C06CD1C mov #imm,Rn */
	r9 = 0xC050D70u; UPD(0x0C06CD20u, 2);  /* 0C06CD1E mov.l @(disp,pc),Rn */
	IF(0x0C06CD20u); r8 = MACL;  /* 0C06CD20 sts macl,Rn */
	r7 = 0xC0000000u; UPD(0x0C06CD24u, 2);  /* 0C06CD22 mov.l @(disp,pc),Rn */
	r8 += r0;  /* 0C06CD24 add Rm,Rn */
	W32(r8, r7); UPD(0x0C06CD28u, 2);  /* 0C06CD26 mov.l Rm,@Rn */
	IF(0x0C06CD28u); { u32 t_ = r9; PR = 0x0C06CD2Cu; W32(r8 + 0x4u, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C06CD2Cu); }  /* 0C06CD28 jsr @Rn */
L_0C06CD2C: BLKS(0x0C06CD2Cu);
	r5 = 0xC06ACA0u; UPD(0x0C06CD2Eu, 1);  /* 0C06CD2C mov.l @(disp,pc),Rn */
	r0 += 0x4u;  /* 0C06CD2E add #imm,Rn */
	r9 = 0x0u;  /* 0C06CD30 mov #imm,Rn */
	W32(r8 + 0x8u, r0); UPD(0x0C06CD34u, 3);  /* 0C06CD32 mov.l Rm,@(disp,Rn) */
	r4 = r10;  /* 0C06CD34 mov Rm,Rn */
	IF(0x0C06CD36u); { u32 t_ = r5; PR = 0x0C06CD3Au; W32(r8 + 0xCu, r9); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C06ACA0, 0x0C06ACA0u, 0x0C06CD3Au); }  /* 0C06CD36 jsr @Rn */
L_0C06CD3A: BLKS(0x0C06CD3Au);
	W32(r8 + 0x28u, r12); UPD(0x0C06CD3Cu, 1);  /* 0C06CD3A mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x2Cu, r13); UPD(0x0C06CD3Eu, 1);  /* 0C06CD3C mov.l Rm,@(disp,Rn) */
	r8 += 0x44u;  /* 0C06CD3E add #imm,Rn */
	W8(r8, r11); UPD(0x0C06CD42u, 2);  /* 0C06CD40 mov.b Rm,@Rn */
	r3 = R32(r14 + 0x24u); UPD(0x0C06CD44u, 1);  /* 0C06CD42 mov.l @(disp,Rm),Rn */
	r8 += 0xFFFFFFBCu;  /* 0C06CD44 add #imm,Rn */
	r4 = R32(r14); UPD(0x0C06CD48u, 2);  /* 0C06CD46 mov.l @Rm,Rn */
	W32(r8 + 0x34u, r3); UPD(0x0C06CD4Au, 1);  /* 0C06CD48 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x30u, r4); UPD(0x0C06CD4Cu, 1);  /* 0C06CD4A mov.l Rm,@(disp,Rn) */
	r2 = 0xFFFF4000u; UPD(0x0C06CD4Eu, 1);  /* 0C06CD4C mov.l @(disp,pc),Rn */
	r8 += 0x40u;  /* 0C06CD4E add #imm,Rn */
	W32(r8, r2); UPD(0x0C06CD52u, 2);  /* 0C06CD50 mov.l Rm,@Rn */
	r0 = 0x505050u; UPD(0x0C06CD54u, 1);  /* 0C06CD52 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFC0u;  /* 0C06CD54 add #imm,Rn */
	r10 = 0xC0AFE40u; UPD(0x0C06CD58u, 2);  /* 0C06CD56 mov.l @(disp,pc),Rn */
	W32(r8 + 0x38u, r9); UPD(0x0C06CD5Au, 1);  /* 0C06CD58 mov.l Rm,@(disp,Rn) */
	IF(0x0C06CD5Au); { u32 t_ = r10; PR = 0x0C06CD5Eu; W32(r8 + 0x3Cu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C06CD5Eu); }  /* 0C06CD5A jsr @Rn */
L_0C06CD5E: BLKS(0x0C06CD5Eu);
	r8 += 0x4Fu;  /* 0C06CD5E add #imm,Rn */
	IF(0x0C06CD60u); { u32 t_ = r10; PR = 0x0C06CD64u; W8(r8, r0); /* slot mov.b Rm,@Rn */ UPD(t_, 3); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C06CD64u); }  /* 0C06CD60 jsr @Rn */
L_0C06CD64: BLKS(0x0C06CD64u);
	r8 += 0x1u;  /* 0C06CD64 add #imm,Rn */
	{ W8(r8, r0); /* slot mov.b Rm,@Rn */ UPD(0x0C06CCF6u, 4); goto L_0C06CCF6; }  /* 0C06CD66 bra */
}

/* FUN_0c06cd90 */
void f_0C06CD90(sh3_t *c)
{
	LOCALS;
L_0C06CD90: BLKS(0x0C06CD90u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06CD92u, 1);  /* 0C06CD90 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C06CD94u, 1);  /* 0C06CD92 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C06CD96u, 1);  /* 0C06CD94 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s16)r5;  /* 0C06CD96 exts.w Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06CD9Au, 2);  /* 0C06CD98 mov.l Rm,@-Rn */
	r10 = r4;  /* 0C06CD9A mov Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C06CD9Eu, 2);  /* 0C06CD9C mov.l Rm,@-Rn */
	r11 = r6;  /* 0C06CD9E mov Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06CDA2u, 2);  /* 0C06CDA0 mov.l Rm,@-Rn */
	r12 = r7;  /* 0C06CDA2 mov Rm,Rn */
	r8 = 0xC06AD30u; UPD(0x0C06CDA6u, 2);  /* 0C06CDA4 mov.l @(disp,pc),Rn */
	r4 = 0x1u;  /* 0C06CDA6 mov #imm,Rn */
	IF(0x0C06CDA8u); r15 -= 4; W32(r15, PR); UPD(0x0C06CDAAu, 2);  /* 0C06CDA8 sts.l pr,@-Rn */
	IF(0x0C06CDAAu); { u32 t_ = r8; PR = 0x0C06CDAEu; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C06AD30, 0x0C06AD30u, 0x0C06CDAEu); }  /* 0C06CDAA jsr @Rn */
L_0C06CDAE: BLKS(0x0C06CDAEu);
	T = (r0 & r0) == 0;  /* 0C06CDAE tst Rm,Rn */
	if (!T) { UPD(0x0C06CDD0u, 4); goto L_0C06CDD0; }  /* 0C06CDB0 bf */
L_0C06CDB2: BLKS(0x0C06CDB2u);
	r15 = r14;  /* 0C06CDB2 mov Rm,Rn */
	IF(0x0C06CDB4u); PR = R32(r15); r15 += 4; UPD(0x0C06CDB6u, 2);  /* 0C06CDB4 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06CDB8u, 1);  /* 0C06CDB6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06CDBAu, 1);  /* 0C06CDB8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06CDBCu, 1);  /* 0C06CDBA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06CDBEu, 1);  /* 0C06CDBC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06CDC0u, 1);  /* 0C06CDBE mov.l @Rm+,Rn */
	IF(0x0C06CDC0u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06CDC0 rts */
L_0C06CDD0: BLKS(0x0C06CDD0u);
	r2 = 0xC2755BCu; UPD(0x0C06CDD2u, 1);  /* 0C06CDD0 mov.l @(disp,pc),Rn */
	r8 = 0x54u;  /* 0C06CDD2 mov #imm,Rn */
	r4 = (u32)(s32)(s16)R16(r2); UPD(0x0C06CDD6u, 2);  /* 0C06CDD4 mov.w @Rm,Rn */
	IF(0x0C06CDD6u); MACL = r4 * r8;  /* 0C06CDD6 mul.l Rm,Rn */
	r7 = 0xC38C064u; UPD(0x0C06CDDAu, 3);  /* 0C06CDD8 mov.l @(disp,pc),Rn */
	IF(0x0C06CDDAu); r8 = MACL;  /* 0C06CDDA sts macl,Rn */
	r5 = 0xD0004000u; UPD(0x0C06CDDEu, 2);  /* 0C06CDDC mov.l @(disp,pc),Rn */
	r8 += r7;  /* 0C06CDDE add Rm,Rn */
	r6 = 0xC06B730u; UPD(0x0C06CDE2u, 2);  /* 0C06CDE0 mov.l @(disp,pc),Rn */
	W32(r8, r5); UPD(0x0C06CDE4u, 1);  /* 0C06CDE2 mov.l Rm,@Rn */
	IF(0x0C06CDE4u); { u32 t_ = r6; PR = 0x0C06CDE8u; r5 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C06B730, 0x0C06B730u, 0x0C06CDE8u); }  /* 0C06CDE4 jsr @Rn */
L_0C06CDE8: BLKS(0x0C06CDE8u);
	r0 = 0xB4u; UPD(0x0C06CDEAu, 1);  /* 0C06CDE8 mov.w @(disp,pc),Rn */
	r8 += 0x4Au;  /* 0C06CDEA add #imm,Rn */
	IF(0x0C06CDECu); MACL = r9 * r0;  /* 0C06CDEC mul.l Rm,Rn */
	r4 = 0xC26CD40u; UPD(0x0C06CDF0u, 4);  /* 0C06CDEE mov.l @(disp,pc),Rn */
	IF(0x0C06CDF0u); r0 = MACL;  /* 0C06CDF0 sts macl,Rn */
	r0 += r4;  /* 0C06CDF2 add Rm,Rn */
	r3 = R32(r0 + 0x24u); UPD(0x0C06CDF6u, 3);  /* 0C06CDF4 mov.l @(disp,Rm),Rn */
	W16(r8, r9); UPD(0x0C06CDF8u, 1);  /* 0C06CDF6 mov.w Rm,@Rn */
	r3 += r11;  /* 0C06CDF8 add Rm,Rn */
	r8 += 0xFFFFFFB6u;  /* 0C06CDFA add #imm,Rn */
	W32(r8 + 0x28u, r3); UPD(0x0C06CDFEu, 3);  /* 0C06CDFC mov.l Rm,@(disp,Rn) */
	r2 = R32(r0 + 0x28u); UPD(0x0C06CE00u, 1);  /* 0C06CDFE mov.l @(disp,Rm),Rn */
	r10 = 0x82u; UPD(0x0C06CE02u, 1);  /* 0C06CE00 mov.w @(disp,pc),Rn */
	r2 += r12;  /* 0C06CE02 add Rm,Rn */
	W32(r8 + 0x2Cu, r2); UPD(0x0C06CE06u, 2);  /* 0C06CE04 mov.l Rm,@(disp,Rn) */
	IF(0x0C06CE06u); r9 = (u32)(s32)(s16)R16(r0 + r10); UPD(0x0C06CE08u, 1);  /* 0C06CE06 mov.w @(r0,Rm),Rn */
	r8 += 0x4Cu;  /* 0C06CE08 add #imm,Rn */
	W16(r8, r9); UPD(0x0C06CE0Cu, 2);  /* 0C06CE0A mov.w Rm,@Rn */
	r7 = 0xA9u; UPD(0x0C06CE0Eu, 1);  /* 0C06CE0C mov.w @(disp,pc),Rn */
	r8 += 0xFFFFFFF8u;  /* 0C06CE0E add #imm,Rn */
	IF(0x0C06CE10u); r6 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C06CE12u, 2);  /* 0C06CE10 mov.b @(r0,Rm),Rn */
	W8(r8, r6); UPD(0x0C06CE14u, 1);  /* 0C06CE12 mov.b Rm,@Rn */
	r0 = 0x0u;  /* 0C06CE14 mov #imm,Rn */
	r8 += 0xFFFFFFBCu;  /* 0C06CE16 add #imm,Rn */
	W32(r8 + 0x30u, r11); UPD(0x0C06CE1Au, 3);  /* 0C06CE18 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x34u, r12); UPD(0x0C06CE1Cu, 1);  /* 0C06CE1A mov.l Rm,@(disp,Rn) */
	r5 = 0xC27DFF8u; UPD(0x0C06CE1Eu, 1);  /* 0C06CE1C mov.l @(disp,pc),Rn */
	r8 += 0x40u;  /* 0C06CE1E add #imm,Rn */
	r3 = R32(r5); UPD(0x0C06CE22u, 2);  /* 0C06CE20 mov.l @Rm,Rn */
	IF(0x0C06CE22u); r3 >>= 2;  /* 0C06CE22 shlr2 Rn */
	IF(0x0C06CE24u); T = r3 & 1; r3 >>= 1;  /* 0C06CE24 shlr Rn */
	r4 = 0xFFF70000u; UPD(0x0C06CE28u, 3);  /* 0C06CE26 mov.l @(disp,pc),Rn */
	IF(0x0C06CE28u); r3 >>= 2;  /* 0C06CE28 shlr2 Rn */
	r3 += r4;  /* 0C06CE2A add Rm,Rn */
	W32(r8, r3); UPD(0x0C06CE2Eu, 3);  /* 0C06CE2C mov.l Rm,@Rn */
	r2 = 0x808080u; UPD(0x0C06CE30u, 1);  /* 0C06CE2E mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFC0u;  /* 0C06CE30 add #imm,Rn */
	W32(r8 + 0x38u, r0); UPD(0x0C06CE34u, 2);  /* 0C06CE32 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x3Cu, r2); UPD(0x0C06CE36u, 1);  /* 0C06CE34 mov.l Rm,@(disp,Rn) */
	r8 += 0x4Fu;  /* 0C06CE36 add #imm,Rn */
	{ W8(r8, r0); /* slot mov.b Rm,@Rn */ UPD(0x0C06CDB2u, 4); goto L_0C06CDB2; }  /* 0C06CE38 bra */
}

/* FUN_0c06ce70 */
void f_0C06CE70(sh3_t *c)
{
	LOCALS;
L_0C06CE70: BLKS(0x0C06CE70u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06CE72u, 1);  /* 0C06CE70 mov.l Rm,@-Rn */
	r0 = 0x4Cu;  /* 0C06CE72 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C06CE76u, 2);  /* 0C06CE74 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C06CE78u, 1);  /* 0C06CE76 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s8)r7;  /* 0C06CE78 exts.b Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06CE7Cu, 2);  /* 0C06CE7A mov.l Rm,@-Rn */
	IF(0x0C06CE7Cu); MACL = r9 * r0;  /* 0C06CE7C mul.l Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C06CE80u, 3);  /* 0C06CE7E mov.l Rm,@-Rn */
	r10 = r4;  /* 0C06CE80 mov Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06CE84u, 2);  /* 0C06CE82 mov.l Rm,@-Rn */
	IF(0x0C06CE84u); r0 = MACL;  /* 0C06CE84 sts macl,Rn */
	IF(0x0C06CE86u); r15 -= 4; W32(r15, PR); UPD(0x0C06CE88u, 2);  /* 0C06CE86 sts.l pr,@-Rn */
	r11 = r5;  /* 0C06CE88 mov Rm,Rn */
	r2 = 0xC26CAE0u; UPD(0x0C06CE8Cu, 2);  /* 0C06CE8A mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C06CE8C mov Rm,Rn */
	IF(0x0C06CE8Eu); r0 = R32(r0 + r2); UPD(0x0C06CE90u, 2);  /* 0C06CE8E mov.l @(r0,Rm),Rn */
	r0 &= 0x10u;  /* 0C06CE90 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C06CE92 tst Rm,Rn */
	{ u32 c_ = T; r12 = r6; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06CEC8u, 5); goto L_0C06CEC8; } goto L_0C06CE98; }  /* 0C06CE94 bt/s */
L_0C06CE98: BLKS(0x0C06CE98u);
	r4 = 0xC2755BCu; UPD(0x0C06CE9Au, 2);  /* 0C06CE98 mov.l @(disp,pc),Rn */
	r6 = 0x1u;  /* 0C06CE9A mov #imm,Rn */
	r2 = 0x100u; UPD(0x0C06CE9Eu, 2);  /* 0C06CE9C mov.w @(disp,pc),Rn */
	r7 = r4;  /* 0C06CE9E mov Rm,Rn */
	r5 = 0x13Fu; UPD(0x0C06CEA2u, 2);  /* 0C06CEA0 mov.w @(disp,pc),Rn */
	r3 = 0xC391464u; UPD(0x0C06CEA4u, 1);  /* 0C06CEA2 mov.l @(disp,pc),Rn */
L_0C06CEA4: BLKS(0x0C06CEA4u);
	r8 = R32(r3); UPD(0x0C06CEA6u, 1);  /* 0C06CEA4 mov.l @Rm,Rn */
	T = (r8 & r8) == 0;  /* 0C06CEA6 tst Rm,Rn */
	{ u32 c_ = !T; r3 += 0x54u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06CEBCu, 4); goto L_0C06CEBC; } goto L_0C06CEAC; }  /* 0C06CEA8 bf/s */
L_0C06CEAC: BLKS(0x0C06CEACu);
	r0 = r6;  /* 0C06CEAC mov Rm,Rn */
	W16(r7, r2); UPD(0x0C06CEB0u, 3);  /* 0C06CEAE mov.w Rm,@Rn */
	r0 += 0xFFFFFFFFu;  /* 0C06CEB0 add #imm,Rn */
	r6 = (u32)(s32)(s16)r0;  /* 0C06CEB2 exts.w Rm,Rn */
	r7 += 0x2u;  /* 0C06CEB4 add #imm,Rn */
	T = (r6 & r6) == 0;  /* 0C06CEB6 tst Rm,Rn */
	{ u32 c_ = T; r1 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C06CEC4u, 7); goto L_0C06CEC4; } UPD(0x0C06CEBCu, 1); goto L_0C06CEBC; }  /* 0C06CEB8 bt/s */
L_0C06CEBC: BLKS(0x0C06CEBCu);
	r2 += 0x1u;  /* 0C06CEBC add #imm,Rn */
	T = (s32)r2 > (s32)r5;  /* 0C06CEBE cmp/gt Rm,Rn */
	{ u32 c_ = !T; r1 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C06CEA4u, 5); goto L_0C06CEA4; } UPD(0x0C06CEC4u, 1); goto L_0C06CEC4; }  /* 0C06CEC0 bf/s */
L_0C06CEC4: BLKS(0x0C06CEC4u);
	T = (r1 & r1) == 0;  /* 0C06CEC4 tst Rm,Rn */
	if (!T) { UPD(0x0C06CEE0u, 4); goto L_0C06CEE0; }  /* 0C06CEC6 bf */
L_0C06CEC8: BLKS(0x0C06CEC8u);
	r15 = r14;  /* 0C06CEC8 mov Rm,Rn */
	IF(0x0C06CECAu); PR = R32(r15); r15 += 4; UPD(0x0C06CECCu, 2);  /* 0C06CECA lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06CECEu, 1);  /* 0C06CECC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06CED0u, 1);  /* 0C06CECE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06CED2u, 1);  /* 0C06CED0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06CED4u, 1);  /* 0C06CED2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06CED6u, 1);  /* 0C06CED4 mov.l @Rm+,Rn */
	IF(0x0C06CED6u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06CED6 rts */
L_0C06CEE0: BLKS(0x0C06CEE0u);
	r4 = (u32)(s32)(s16)R16(r4); UPD(0x0C06CEE2u, 1);  /* 0C06CEE0 mov.w @Rm,Rn */
	r8 = 0x54u;  /* 0C06CEE2 mov #imm,Rn */
	IF(0x0C06CEE4u); MACL = r4 * r8;  /* 0C06CEE4 mul.l Rm,Rn */
	r2 = 0xC38C064u; UPD(0x0C06CEE8u, 4);  /* 0C06CEE6 mov.l @(disp,pc),Rn */
	r5 = r10;  /* 0C06CEE8 mov Rm,Rn */
	r0 = 0xC06B730u; UPD(0x0C06CEECu, 2);  /* 0C06CEEA mov.l @(disp,pc),Rn */
	IF(0x0C06CEECu); r8 = MACL;  /* 0C06CEEC sts macl,Rn */
	r3 = 0xD0000010u; UPD(0x0C06CEF0u, 2);  /* 0C06CEEE mov.l @(disp,pc),Rn */
	r8 += r2;  /* 0C06CEF0 add Rm,Rn */
	IF(0x0C06CEF2u); { u32 t_ = r0; PR = 0x0C06CEF6u; W32(r8, r3); /* slot mov.l Rm,@Rn */ UPD(t_, 3); CALLP(t_, f_0C06B730, 0x0C06B730u, 0x0C06CEF6u); }  /* 0C06CEF2 jsr @Rn */
L_0C06CEF6: BLKS(0x0C06CEF6u);
	W32(r8 + 0x28u, r11); UPD(0x0C06CEF8u, 1);  /* 0C06CEF6 mov.l Rm,@(disp,Rn) */
	r10 = 0x4Cu;  /* 0C06CEF8 mov #imm,Rn */
	W32(r8 + 0x2Cu, r12); UPD(0x0C06CEFCu, 2);  /* 0C06CEFA mov.l Rm,@(disp,Rn) */
	IF(0x0C06CEFCu); MACL = r9 * r10;  /* 0C06CEFC mul.l Rm,Rn */
	r8 += 0x48u;  /* 0C06CEFE add #imm,Rn */
	W8(r8, r9); UPD(0x0C06CF02u, 4);  /* 0C06CF00 mov.b Rm,@Rn */
	r3 = 0x0u;  /* 0C06CF02 mov #imm,Rn */
	r0 = 0xC26CB22u; UPD(0x0C06CF06u, 2);  /* 0C06CF04 mov.l @(disp,pc),Rn */
	IF(0x0C06CF06u); r9 = MACL;  /* 0C06CF06 sts macl,Rn */
	IF(0x0C06CF08u); r7 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C06CF0Au, 2);  /* 0C06CF08 mov.b @(r0,Rm),Rn */
	r8 += 0xFFFFFFFCu;  /* 0C06CF0A add #imm,Rn */
	W8(r8, r7); UPD(0x0C06CF0Eu, 2);  /* 0C06CF0C mov.b Rm,@Rn */
	r6 = 0xC27DFF8u; UPD(0x0C06CF10u, 1);  /* 0C06CF0E mov.l @(disp,pc),Rn */
	r4 = R32(r6); UPD(0x0C06CF12u, 1);  /* 0C06CF10 mov.l @Rm,Rn */
	IF(0x0C06CF12u); r4 >>= 2;  /* 0C06CF12 shlr2 Rn */
	IF(0x0C06CF14u); T = r4 & 1; r4 >>= 1;  /* 0C06CF14 shlr Rn */
	r5 = 0xFFF70000u; UPD(0x0C06CF18u, 3);  /* 0C06CF16 mov.l @(disp,pc),Rn */
	IF(0x0C06CF18u); r4 >>= 2;  /* 0C06CF18 shlr2 Rn */
	r4 += r5;  /* 0C06CF1A add Rm,Rn */
	{ u32 v_ = r4; r8 -= 4; W32(r8, v_); } UPD(0x0C06CF1Eu, 3);  /* 0C06CF1C mov.l Rm,@-Rn */
	r2 = 0x808080u; UPD(0x0C06CF20u, 1);  /* 0C06CF1E mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFC0u;  /* 0C06CF20 add #imm,Rn */
	W32(r8 + 0x38u, r3); UPD(0x0C06CF24u, 2);  /* 0C06CF22 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x3Cu, r2); UPD(0x0C06CF26u, 1);  /* 0C06CF24 mov.l Rm,@(disp,Rn) */
	r8 += 0x4Fu;  /* 0C06CF26 add #imm,Rn */
	{ W8(r8, r3); /* slot mov.b Rm,@Rn */ UPD(0x0C06CEC8u, 4); goto L_0C06CEC8; }  /* 0C06CF28 bra */
}

/* FUN_0c06cff0 */
void f_0C06CFF0(sh3_t *c)
{
	LOCALS;
L_0C06CFF0: BLKS(0x0C06CFF0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06CFF2u, 1);  /* 0C06CFF0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C06CFF4u, 1);  /* 0C06CFF2 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06CFF6u, 1);  /* 0C06CFF4 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C06CFF6 exts.w Rm,Rn */
	r8 = 0xC06AD30u; UPD(0x0C06CFFAu, 2);  /* 0C06CFF8 mov.l @(disp,pc),Rn */
	r4 = 0x1u;  /* 0C06CFFA mov #imm,Rn */
	IF(0x0C06CFFCu); r15 -= 4; W32(r15, PR); UPD(0x0C06CFFEu, 2);  /* 0C06CFFC sts.l pr,@-Rn */
	IF(0x0C06CFFEu); { u32 t_ = r8; PR = 0x0C06D002u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C06AD30, 0x0C06AD30u, 0x0C06D002u); }  /* 0C06CFFE jsr @Rn */
L_0C06D002: BLKS(0x0C06D002u);
	T = (r0 & r0) == 0;  /* 0C06D002 tst Rm,Rn */
	if (!T) { UPD(0x0C06D020u, 4); goto L_0C06D020; }  /* 0C06D004 bf */
L_0C06D006: BLKS(0x0C06D006u);
	r15 = r14;  /* 0C06D006 mov Rm,Rn */
	IF(0x0C06D008u); PR = R32(r15); r15 += 4; UPD(0x0C06D00Au, 2);  /* 0C06D008 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06D00Cu, 1);  /* 0C06D00A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06D00Eu, 1);  /* 0C06D00C mov.l @Rm+,Rn */
	IF(0x0C06D00Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06D00E rts */
L_0C06D020: BLKS(0x0C06D020u);
	r5 = 0xC2755BCu; UPD(0x0C06D022u, 1);  /* 0C06D020 mov.l @(disp,pc),Rn */
	r8 = 0x54u;  /* 0C06D022 mov #imm,Rn */
	r4 = (u32)(s32)(s16)R16(r5); UPD(0x0C06D026u, 2);  /* 0C06D024 mov.w @Rm,Rn */
	r9 += 0x9u;  /* 0C06D026 add #imm,Rn */
	IF(0x0C06D028u); MACL = r4 * r8;  /* 0C06D028 mul.l Rm,Rn */
	r0 = 0xC38C064u; UPD(0x0C06D02Cu, 4);  /* 0C06D02A mov.l @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C06D02C mov #imm,Rn */
	IF(0x0C06D02Eu); r8 = MACL;  /* 0C06D02E sts macl,Rn */
	r7 = 0xC0000000u; UPD(0x0C06D032u, 3);  /* 0C06D030 mov.l @(disp,pc),Rn */
	r8 += r0;  /* 0C06D032 add Rm,Rn */
	W32(r8, r7); UPD(0x0C06D036u, 2);  /* 0C06D034 mov.l Rm,@Rn */
	W32(r8 + 0x4u, r9); UPD(0x0C06D038u, 1);  /* 0C06D036 mov.l Rm,@(disp,Rn) */
	r9 += 0xFFFFFFF7u;  /* 0C06D038 add #imm,Rn */
	r8 += 0x4Cu;  /* 0C06D03A add #imm,Rn */
	W16(r8, r9); UPD(0x0C06D03Eu, 3);  /* 0C06D03C mov.w Rm,@Rn */
	r6 = 0xC06ACA0u; UPD(0x0C06D040u, 1);  /* 0C06D03E mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFB4u;  /* 0C06D040 add #imm,Rn */
	W32(r8 + 0xCu, r3); UPD(0x0C06D044u, 2);  /* 0C06D042 mov.l Rm,@(disp,Rn) */
	IF(0x0C06D044u); { u32 t_ = r6; PR = 0x0C06D048u; W32(r8 + 0x8u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C06ACA0, 0x0C06ACA0u, 0x0C06D048u); }  /* 0C06D044 jsr @Rn */
L_0C06D048: BLKS(0x0C06D048u);
	r8 += 0x4Fu;  /* 0C06D048 add #imm,Rn */
	r2 = 0x3Cu;  /* 0C06D04A mov #imm,Rn */
	W8(r8, r2); UPD(0x0C06D04Eu, 3);  /* 0C06D04C mov.b Rm,@Rn */
	r5 = 0x16u;  /* 0C06D04E mov #imm,Rn */
	r8 += 0xFFFFFFF5u;  /* 0C06D050 add #imm,Rn */
	W8(r8, r5); UPD(0x0C06D054u, 3);  /* 0C06D052 mov.b Rm,@Rn */
	r4 = 0x4FFFFu; UPD(0x0C06D056u, 1);  /* 0C06D054 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFBCu;  /* 0C06D056 add #imm,Rn */
	r7 = 0x280u; UPD(0x0C06D05Au, 2);  /* 0C06D058 mov.w @(disp,pc),Rn */
	W32(r8 + 0x38u, r4); UPD(0x0C06D05Cu, 1);  /* 0C06D05A mov.l Rm,@(disp,Rn) */
	IF(0x0C06D05Cu); MACL = r9 * r7;  /* 0C06D05C mul.l Rm,Rn */
	r0 = 0x808080u; UPD(0x0C06D060u, 3);  /* 0C06D05E mov.l @(disp,pc),Rn */
	r6 = 0x280000u; UPD(0x0C06D062u, 1);  /* 0C06D060 mov.l @(disp,pc),Rn */
	IF(0x0C06D062u); r5 = MACL;  /* 0C06D062 sts macl,Rn */
	r4 = 0x8000u; UPD(0x0C06D066u, 2);  /* 0C06D064 mov.l @(disp,pc),Rn */
	r3 = 0xC283794u; UPD(0x0C06D068u, 1);  /* 0C06D066 mov.l @(disp,pc),Rn */
	W32(r8 + 0x3Cu, r0); UPD(0x0C06D06Au, 1);  /* 0C06D068 mov.l Rm,@(disp,Rn) */
	r5 += r3;  /* 0C06D06A add Rm,Rn */
	W32(r8 + 0x30u, r6); UPD(0x0C06D06Eu, 2);  /* 0C06D06C mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x34u, r4); UPD(0x0C06D070u, 1);  /* 0C06D06E mov.l Rm,@(disp,Rn) */
	r2 = R32(r5 + 0x10u); UPD(0x0C06D072u, 1);  /* 0C06D070 mov.l @(disp,Rm),Rn */
	r2 += r6;  /* 0C06D072 add Rm,Rn */
	W32(r8 + 0x28u, r2); UPD(0x0C06D076u, 2);  /* 0C06D074 mov.l Rm,@(disp,Rn) */
	r0 = R32(r5 + 0x14u); UPD(0x0C06D078u, 1);  /* 0C06D076 mov.l @(disp,Rm),Rn */
	r0 += r4;  /* 0C06D078 add Rm,Rn */
	{ W32(r8 + 0x2Cu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C06D006u, 4); goto L_0C06D006; }  /* 0C06D07A bra */
}

/* FUN_0c06d0b0 */
void f_0C06D0B0(sh3_t *c)
{
	LOCALS;
L_0C06D0B0: BLKS(0x0C06D0B0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06D0B2u, 1);  /* 0C06D0B0 mov.l Rm,@-Rn */
	r5 = (u32)(s32)(s16)r5;  /* 0C06D0B2 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C06D0B6u, 2);  /* 0C06D0B4 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06D0B8u, 1);  /* 0C06D0B6 mov.l Rm,@-Rn */
	IF(0x0C06D0B8u); r15 -= 4; W32(r15, PR); UPD(0x0C06D0BAu, 1);  /* 0C06D0B8 sts.l pr,@-Rn */
	r3 = 0xC06D4C0u; UPD(0x0C06D0BCu, 1);  /* 0C06D0BA mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFDCu;  /* 0C06D0BC add #imm,Rn */
	r14 = r15;  /* 0C06D0BE mov Rm,Rn */
	W32(r14 + 0x8u, r3); UPD(0x0C06D0C2u, 3);  /* 0C06D0C0 mov.l Rm,@(disp,Rn) */
	r7 = 0xC06D1A0u; UPD(0x0C06D0C4u, 1);  /* 0C06D0C2 mov.l @(disp,pc),Rn */
	r3 = 0x54u;  /* 0C06D0C4 mov #imm,Rn */
	r0 = 0xC06BB60u; UPD(0x0C06D0C8u, 2);  /* 0C06D0C6 mov.l @(disp,pc),Rn */
	IF(0x0C06D0C8u); MACL = r5 * r3;  /* 0C06D0C8 mul.l Rm,Rn */
	r8 = 0xC06BA60u; UPD(0x0C06D0CCu, 3);  /* 0C06D0CA mov.l @(disp,pc),Rn */
	W32(r14 + 0x10u, r7); UPD(0x0C06D0CEu, 1);  /* 0C06D0CC mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x4u, r0); UPD(0x0C06D0D0u, 1);  /* 0C06D0CE mov.l Rm,@(disp,Rn) */
	W32(r14 + 0xCu, r8); UPD(0x0C06D0D2u, 1);  /* 0C06D0D0 mov.l Rm,@(disp,Rn) */
	r2 = 0xC06B850u; UPD(0x0C06D0D4u, 1);  /* 0C06D0D2 mov.l @(disp,pc),Rn */
	IF(0x0C06D0D4u); r8 = MACL;  /* 0C06D0D4 sts macl,Rn */
	r7 = 0xC38C064u; UPD(0x0C06D0D8u, 2);  /* 0C06D0D6 mov.l @(disp,pc),Rn */
	W32(r14, r2); UPD(0x0C06D0DAu, 1);  /* 0C06D0D8 mov.l Rm,@Rn */
	r7 += r8;  /* 0C06D0DA add Rm,Rn */
	r0 = 0xC06D370u; UPD(0x0C06D0DEu, 2);  /* 0C06D0DC mov.l @(disp,pc),Rn */
	r8 = R32(r7 + 0x4u); UPD(0x0C06D0E0u, 1);  /* 0C06D0DE mov.l @(disp,Rm),Rn */
	r2 = 0xC06D290u; UPD(0x0C06D0E2u, 1);  /* 0C06D0E0 mov.l @(disp,pc),Rn */
	W32(r14 + 0x1Cu, r0); UPD(0x0C06D0E4u, 1);  /* 0C06D0E2 mov.l Rm,@(disp,Rn) */
	r6 = 0xC06D3C0u; UPD(0x0C06D0E6u, 1);  /* 0C06D0E4 mov.l @(disp,pc),Rn */
	r0 = r8;  /* 0C06D0E6 mov Rm,Rn */
	W32(r14 + 0x18u, r2); UPD(0x0C06D0EAu, 2);  /* 0C06D0E8 mov.l Rm,@(disp,Rn) */
	IF(0x0C06D0EAu); r0 <<= 2;  /* 0C06D0EA shll2 Rn */
	W32(r14 + 0x14u, r6); UPD(0x0C06D0EEu, 2);  /* 0C06D0EC mov.l Rm,@(disp,Rn) */
	IF(0x0C06D0EEu); r6 = R32(r0 + r14); UPD(0x0C06D0F0u, 1);  /* 0C06D0EE mov.l @(r0,Rm),Rn */
	IF(0x0C06D0F0u); { u32 t_ = r6; PR = 0x0C06D0F4u; r4 = (u32)(s32)(s16)r4; /* slot exts.w Rm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C06D0F4u); }  /* 0C06D0F0 jsr @Rn */
L_0C06D0F4: BLKS(0x0C06D0F4u);
	r2 = 0xC21CA15u; UPD(0x0C06D0F6u, 1);  /* 0C06D0F4 mov.l @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C06D0F6 mov #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C06D0FAu, 2);  /* 0C06D0F8 mov.b @Rm,Rn */
	r1 = r8;  /* 0C06D0FA mov Rm,Rn */
	r7 = r0 & 0xFF;  /* 0C06D0FC extu.b Rm,Rn */
	r4 = 0xC392E14u; UPD(0x0C06D100u, 3);  /* 0C06D0FE mov.l @(disp,pc),Rn */
	IF(0x0C06D100u); r7 <<= 2;  /* 0C06D100 shll2 Rn */
	r7 += r7;  /* 0C06D102 add Rm,Rn */
	r4 += r7;  /* 0C06D104 add Rm,Rn */
	r0 = r4;  /* 0C06D106 mov Rm,Rn */
	IF(0x0C06D108u); W8(r0 + r8, r3); UPD(0x0C06D10Au, 5);  /* 0C06D108 mov.b Rm,@(r0,Rn) */
	r1 += 0xFFFFFFFAu;  /* 0C06D10A add #imm,Rn */
	r0 = 0x1u;  /* 0C06D10C mov #imm,Rn */
	T = r1 > r0;  /* 0C06D10E cmp/hi Rm,Rn */
	{ u32 c_ = !T; r9 += 0x1u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06D160u, 6); goto L_0C06D160; } goto L_0C06D114; }  /* 0C06D110 bf/s */
L_0C06D114: BLKS(0x0C06D114u);
	r9 = 0xC21CC8Cu; UPD(0x0C06D116u, 2);  /* 0C06D114 mov.l @(disp,pc),Rn */
	r2 = 0x0u;  /* 0C06D116 mov #imm,Rn */
	r9 += r7;  /* 0C06D118 add Rm,Rn */
	r0 = r9;  /* 0C06D11A mov Rm,Rn */
	IF(0x0C06D11Cu); r5 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C06D11Eu, 4);  /* 0C06D11C mov.b @(r0,Rm),Rn */
	r7 = 0x0u;  /* 0C06D11E mov #imm,Rn */
	r9 = r5 & 0xFF;  /* 0C06D120 extu.b Rm,Rn */
	r3 = 0x7u;  /* 0C06D122 mov #imm,Rn */
	UPD(0x0C06D124u, 3);
L_0C06D124: BLKS(0x0C06D124u);
	r4 = r2;  /* 0C06D124 mov Rm,Rn */
	r6 = r0;  /* 0C06D126 mov Rm,Rn */
	r6 += r2;  /* 0C06D128 add Rm,Rn */
	r4 += 0x1u;  /* 0C06D12A add #imm,Rn */
	r2 = (u32)(s32)(s16)r4;  /* 0C06D12C exts.w Rm,Rn */
	T = (s32)r2 > (s32)r3;  /* 0C06D12E cmp/gt Rm,Rn */
	{ u32 c_ = !T; W8(r6, r7); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C06D124u, 9); goto L_0C06D124; } UPD(0x0C06D134u, 1); goto L_0C06D134; }  /* 0C06D130 bf/s */
L_0C06D134: BLKS(0x0C06D134u);
	r2 = 0xC21CA15u; UPD(0x0C06D136u, 1);  /* 0C06D134 mov.l @(disp,pc),Rn */
	r9 += 0x1u;  /* 0C06D136 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C06D13Au, 2);  /* 0C06D138 mov.b @Rm,Rn */
	r7 = r0 & 0xFF;  /* 0C06D13A extu.b Rm,Rn */
	IF(0x0C06D13Cu); r7 <<= 2;  /* 0C06D13C shll2 Rn */
	r3 = 0xC21CC8Cu; UPD(0x0C06D140u, 3);  /* 0C06D13E mov.l @(disp,pc),Rn */
	r7 += r7;  /* 0C06D140 add Rm,Rn */
	r7 += r3;  /* 0C06D142 add Rm,Rn */
	r0 = r7;  /* 0C06D144 mov Rm,Rn */
	UPD(0x0C06D146u, 3);
L_0C06D146: BLKS(0x0C06D146u);
	IF(0x0C06D146u); W8(r0 + r8, r9); UPD(0x0C06D148u, 1);  /* 0C06D146 mov.b Rm,@(r0,Rn) */
	r14 += 0x24u;  /* 0C06D148 add #imm,Rn */
	r15 = r14;  /* 0C06D14A mov Rm,Rn */
	IF(0x0C06D14Cu); PR = R32(r15); r15 += 4; UPD(0x0C06D14Eu, 3);  /* 0C06D14C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06D150u, 1);  /* 0C06D14E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06D152u, 1);  /* 0C06D150 mov.l @Rm+,Rn */
	IF(0x0C06D152u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06D152 rts */
L_0C06D160: BLKS(0x0C06D160u);
	r5 = 0xC21CC8Cu; UPD(0x0C06D162u, 1);  /* 0C06D160 mov.l @(disp,pc),Rn */
	r7 += r5;  /* 0C06D162 add Rm,Rn */
	{ r0 = r7; /* slot mov Rm,Rn */ UPD(0x0C06D146u, 4); goto L_0C06D146; }  /* 0C06D164 bra */
}

void f_0C06D1A0(sh3_t *c)
{
	LOCALS;
L_0C06D1A0: BLKS(0x0C06D1A0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C06D1A2u, 1);  /* 0C06D1A0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C06D1A4u, 1);  /* 0C06D1A2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C06D1A6u, 1);  /* 0C06D1A4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06D1A8u, 1);  /* 0C06D1A6 mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s16)r5;  /* 0C06D1A8 exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06D1ACu, 2);  /* 0C06D1AA mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C06D1AC exts.w Rm,Rn */
	r8 = 0xC060350u; UPD(0x0C06D1B0u, 2);  /* 0C06D1AE mov.l @(disp,pc),Rn */
	IF(0x0C06D1B0u); r15 -= 4; W32(r15, PR); UPD(0x0C06D1B2u, 1);  /* 0C06D1B0 sts.l pr,@-Rn */
	r4 = 0x10000u; UPD(0x0C06D1B4u, 1);  /* 0C06D1B2 mov.l @(disp,pc),Rn */
	IF(0x0C06D1B4u); { u32 t_ = r8; PR = 0x0C06D1B8u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C060350, 0x0C060350u, 0x0C06D1B8u); }  /* 0C06D1B4 jsr @Rn */
L_0C06D1B8: BLKS(0x0C06D1B8u);
	r2 = 0x280u; UPD(0x0C06D1BAu, 1);  /* 0C06D1B8 mov.w @(disp,pc),Rn */
	r3 = 0x4u;  /* 0C06D1BA mov #imm,Rn */
	IF(0x0C06D1BCu); MACL = r11 * r2;  /* 0C06D1BC mul.l Rm,Rn */
	r0 = 0xC283794u; UPD(0x0C06D1C0u, 4);  /* 0C06D1BE mov.l @(disp,pc),Rn */
	IF(0x0C06D1C0u); r9 = MACL;  /* 0C06D1C0 sts macl,Rn */
	r9 += r0;  /* 0C06D1C2 add Rm,Rn */
	r0 = 0x254u; UPD(0x0C06D1C6u, 3);  /* 0C06D1C4 mov.w @(disp,pc),Rn */
	IF(0x0C06D1C6u); r2 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C06D1C8u, 1);  /* 0C06D1C6 mov.b @(r0,Rm),Rn */
	T = r2 > r3;  /* 0C06D1C8 cmp/hi Rm,Rn */
	{ u32 c_ = T; r4 = r11; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06D240u, 4); goto L_0C06D240; } goto L_0C06D1CE; }  /* 0C06D1CA bt/s */
L_0C06D1CE: BLKS(0x0C06D1CEu);
	r8 = 0x54u;  /* 0C06D1CE mov #imm,Rn */
	IF(0x0C06D1D0u); MACL = r10 * r8;  /* 0C06D1D0 mul.l Rm,Rn */
	r7 = r2;  /* 0C06D1D2 mov Rm,Rn */
	r7 += 0x1u;  /* 0C06D1D4 add #imm,Rn */
	r6 = 0xC38C064u; UPD(0x0C06D1D8u, 7);  /* 0C06D1D6 mov.l @(disp,pc),Rn */
	IF(0x0C06D1D8u); r8 = MACL;  /* 0C06D1D8 sts macl,Rn */
	IF(0x0C06D1DAu); W8(r0 + r9, r7); UPD(0x0C06D1DCu, 2);  /* 0C06D1DA mov.b Rm,@(r0,Rn) */
	r8 += r6;  /* 0C06D1DC add Rm,Rn */
	r4 = 0x0u;  /* 0C06D1DE mov #imm,Rn */
	W32(r8 + 0x8u, r4); UPD(0x0C06D1E2u, 3);  /* 0C06D1E0 mov.l Rm,@(disp,Rn) */
	r3 = 0x8u;  /* 0C06D1E2 mov #imm,Rn */
	W32(r8 + 0xCu, r4); UPD(0x0C06D1E6u, 2);  /* 0C06D1E4 mov.l Rm,@(disp,Rn) */
	r5 = R32(r8); UPD(0x0C06D1E8u, 1);  /* 0C06D1E6 mov.l @Rm,Rn */
	r4 = r10;  /* 0C06D1E8 mov Rm,Rn */
	r1 = 0xEFFFFFFBu; UPD(0x0C06D1ECu, 2);  /* 0C06D1EA mov.l @(disp,pc),Rn */
	r10 = 0xC06ACA0u; UPD(0x0C06D1EEu, 1);  /* 0C06D1EC mov.l @(disp,pc),Rn */
	r5 &= r1;  /* 0C06D1EE and Rm,Rn */
	W32(r8, r5); UPD(0x0C06D1F2u, 2);  /* 0C06D1F0 mov.l Rm,@Rn */
	IF(0x0C06D1F2u); { u32 t_ = r10; PR = 0x0C06D1F6u; W32(r8 + 0x4u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C06ACA0, 0x0C06ACA0u, 0x0C06D1F6u); }  /* 0C06D1F2 jsr @Rn */
L_0C06D1F6: BLKS(0x0C06D1F6u);
	r2 = 0x3Cu;  /* 0C06D1F6 mov #imm,Rn */
	r8 += 0x4Fu;  /* 0C06D1F8 add #imm,Rn */
	W8(r8, r2); UPD(0x0C06D1FCu, 3);  /* 0C06D1FA mov.b Rm,@Rn */
	r0 = 0x14u;  /* 0C06D1FC mov #imm,Rn */
	r8 += 0xFFFFFFF5u;  /* 0C06D1FE add #imm,Rn */
	W8(r8, r0); UPD(0x0C06D202u, 3);  /* 0C06D200 mov.b Rm,@Rn */
	r7 = 0x4FFFFu; UPD(0x0C06D204u, 1);  /* 0C06D202 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFBCu;  /* 0C06D204 add #imm,Rn */
	r6 = 0x808080u; UPD(0x0C06D208u, 2);  /* 0C06D206 mov.l @(disp,pc),Rn */
	W32(r8 + 0x38u, r7); UPD(0x0C06D20Au, 1);  /* 0C06D208 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x3Cu, r6); UPD(0x0C06D20Cu, 1);  /* 0C06D20A mov.l Rm,@(disp,Rn) */
	r5 = 0x180000u; UPD(0x0C06D20Eu, 1);  /* 0C06D20C mov.l @(disp,pc),Rn */
	r4 = R32(r9 + 0x10u); UPD(0x0C06D210u, 1);  /* 0C06D20E mov.l @(disp,Rm),Rn */
	r4 += r5;  /* 0C06D210 add Rm,Rn */
	W32(r8 + 0x28u, r4); UPD(0x0C06D214u, 2);  /* 0C06D212 mov.l Rm,@(disp,Rn) */
	r3 = R32(r9 + 0x14u); UPD(0x0C06D216u, 1);  /* 0C06D214 mov.l @(disp,Rm),Rn */
	r4 = r11;  /* 0C06D216 mov Rm,Rn */
	r1 = 0x100000u; UPD(0x0C06D21Au, 2);  /* 0C06D218 mov.l @(disp,pc),Rn */
	r10 = 0xC06A560u; UPD(0x0C06D21Cu, 1);  /* 0C06D21A mov.l @(disp,pc),Rn */
	r3 += r1;  /* 0C06D21C add Rm,Rn */
	r9 = 0xC0AFBA0u; UPD(0x0C06D220u, 2);  /* 0C06D21E mov.l @(disp,pc),Rn */
	IF(0x0C06D220u); { u32 t_ = r10; PR = 0x0C06D224u; W32(r8 + 0x2Cu, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C06A560, 0x0C06A560u, 0x0C06D224u); }  /* 0C06D220 jsr @Rn */
L_0C06D224: BLKS(0x0C06D224u);
	r4 = r11;  /* 0C06D224 mov Rm,Rn */
	IF(0x0C06D226u); { u32 t_ = r9; PR = 0x0C06D22Au; r5 = 0x5Eu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0AFBA0, 0x0C0AFBA0u, 0x0C06D22Au); }  /* 0C06D226 jsr @Rn */
L_0C06D22A: BLKS(0x0C06D22Au);
	r5 = 0x9Cu; UPD(0x0C06D22Cu, 1);  /* 0C06D22A mov.w @(disp,pc),Rn */
	r4 = r11;  /* 0C06D22C mov Rm,Rn */
	r1 = 0xC0AFB20u; UPD(0x0C06D230u, 2);  /* 0C06D22E mov.l @(disp,pc),Rn */
L_0C06D230: BLKS(0x0C06D230u);
	r15 = r14;  /* 0C06D230 mov Rm,Rn */
	IF(0x0C06D232u); PR = R32(r15); r15 += 4; UPD(0x0C06D234u, 2);  /* 0C06D232 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06D236u, 1);  /* 0C06D234 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06D238u, 1);  /* 0C06D236 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06D23Au, 1);  /* 0C06D238 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06D23Cu, 1);  /* 0C06D23A mov.l @Rm+,Rn */
	IF(0x0C06D23Cu); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C06C2B0u: TAIL(f_0C06C2B0); case 0x0C0AFB20u: TAIL(f_0C0AFB20); default: JUMPD(tv_); } }  /* 0C06D23C jmp @Rn */
L_0C06D240: BLKS(0x0C06D240u);
	r1 = 0xC06C2B0u; UPD(0x0C06D242u, 1);  /* 0C06D240 mov.l @(disp,pc),Rn */
	{ r5 = r10; /* slot mov Rm,Rn */ UPD(0x0C06D230u, 3); goto L_0C06D230; }  /* 0C06D242 bra */
}


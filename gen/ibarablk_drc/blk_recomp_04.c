#include "recomp.h"
#include "blk_recomp_funcs.h"

/* FUN_0c065ac0 */
void blk_f_0C065AC0(sh3_t *c)
{
	LOCALS;
L_0C065AC0: BLKS(0x0C065AC0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C065AC2u, 1);  /* 0C065AC0 mov.l Rm,@-Rn */
	r7 = 0x0u;  /* 0C065AC2 mov #imm,Rn */
	r0 = 0xC234BB8u; UPD(0x0C065AC6u, 2);  /* 0C065AC4 mov.l @(disp,pc),Rn */
	r6 = 0x1u;  /* 0C065AC6 mov #imm,Rn */
	W8(r0, r7); UPD(0x0C065ACAu, 2);  /* 0C065AC8 mov.b Rm,@Rn */
	r3 = 0xAu;  /* 0C065ACA mov #imm,Rn */
	r0 += 0xFFFFFFF4u;  /* 0C065ACC add #imm,Rn */
	r0 += 0x3u;  /* 0C065ACE add #imm,Rn */
	W8(r0, r6); UPD(0x0C065AD2u, 4);  /* 0C065AD0 mov.b Rm,@Rn */
	r1 = 0x2u;  /* 0C065AD2 mov #imm,Rn */
	r0 += 0xFFFFFFFDu;  /* 0C065AD4 add #imm,Rn */
	W8(r0, r6); UPD(0x0C065AD8u, 3);  /* 0C065AD6 mov.b Rm,@Rn */
	r4 = r0;  /* 0C065AD8 mov Rm,Rn */
	r0 += 0x4u;  /* 0C065ADA add #imm,Rn */
	W8(r0, r6); UPD(0x0C065ADEu, 3);  /* 0C065ADC mov.b Rm,@Rn */
	r4 += 0x1u;  /* 0C065ADE add #imm,Rn */
	r0 += 0xFFFFFFFCu;  /* 0C065AE0 add #imm,Rn */
	r0 += 0x5u;  /* 0C065AE2 add #imm,Rn */
	W8(r0, r6); UPD(0x0C065AE6u, 4);  /* 0C065AE4 mov.b Rm,@Rn */
	r5 = 0x10u;  /* 0C065AE6 mov #imm,Rn */
	r0 += 0x1u;  /* 0C065AE8 add #imm,Rn */
	W8(r0, r3); UPD(0x0C065AECu, 3);  /* 0C065AEA mov.b Rm,@Rn */
	r14 = r15;  /* 0C065AEC mov Rm,Rn */
	W8(r4, r6); UPD(0x0C065AF0u, 2);  /* 0C065AEE mov.b Rm,@Rn */
	r0 += 0x1u;  /* 0C065AF0 add #imm,Rn */
	r4 += 0x1u;  /* 0C065AF2 add #imm,Rn */
	W8(r0, r6); UPD(0x0C065AF6u, 3);  /* 0C065AF4 mov.b Rm,@Rn */
	r3 = 0x1Fu;  /* 0C065AF6 mov #imm,Rn */
	W8(r4, r6); UPD(0x0C065AFAu, 2);  /* 0C065AF8 mov.b Rm,@Rn */
	r0 += 0x1u;  /* 0C065AFA add #imm,Rn */
	r4 = 0x3u;  /* 0C065AFC mov #imm,Rn */
	W8(r0, r4); UPD(0x0C065B00u, 3);  /* 0C065AFE mov.b Rm,@Rn */
	r0 += 0x1u;  /* 0C065B00 add #imm,Rn */
	W8(r0, r4); UPD(0x0C065B04u, 2);  /* 0C065B02 mov.b Rm,@Rn */
	r0 += 0x1u;  /* 0C065B04 add #imm,Rn */
	W8(r0, r6); UPD(0x0C065B08u, 2);  /* 0C065B06 mov.b Rm,@Rn */
	r0 += 0x1u;  /* 0C065B08 add #imm,Rn */
	W8(r0, r1); UPD(0x0C065B0Cu, 2);  /* 0C065B0A mov.b Rm,@Rn */
	r0 += 0x2u;  /* 0C065B0C add #imm,Rn */
	W8(r0, r6); UPD(0x0C065B10u, 2);  /* 0C065B0E mov.b Rm,@Rn */
	r1 = 0xFu;  /* 0C065B10 mov #imm,Rn */
	r0 += 0x1u;  /* 0C065B12 add #imm,Rn */
	W8(r0, r6); UPD(0x0C065B16u, 3);  /* 0C065B14 mov.b Rm,@Rn */
	r0 += 0x1u;  /* 0C065B16 add #imm,Rn */
	W8(r0, r7); UPD(0x0C065B1Au, 2);  /* 0C065B18 mov.b Rm,@Rn */
	r0 += 0x1u;  /* 0C065B1A add #imm,Rn */
	W8(r0, r5); UPD(0x0C065B1Eu, 2);  /* 0C065B1C mov.b Rm,@Rn */
	r0 += 0x1u;  /* 0C065B1E add #imm,Rn */
	W8(r0, r4); UPD(0x0C065B22u, 2);  /* 0C065B20 mov.b Rm,@Rn */
	r0 += 0x1u;  /* 0C065B22 add #imm,Rn */
	W8(r0, r3); UPD(0x0C065B26u, 2);  /* 0C065B24 mov.b Rm,@Rn */
	r0 += 0x1u;  /* 0C065B26 add #imm,Rn */
	W8(r0, r1); UPD(0x0C065B2Au, 2);  /* 0C065B28 mov.b Rm,@Rn */
	r15 = r14;  /* 0C065B2A mov Rm,Rn */
	IF(0x0C065B2Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C065B2C rts */
}

/* FUN_0c065b40 */
void blk_f_0C065B40(sh3_t *c)
{
	LOCALS;
L_0C065B40: BLKS(0x0C065B40u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C065B42u, 1);  /* 0C065B40 mov.l Rm,@-Rn */
	r3 = 0x0u;  /* 0C065B42 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C065B46u, 2);  /* 0C065B44 mov.l Rm,@-Rn */
	r6 = 0x1Fu;  /* 0C065B46 mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C065B4Au, 2);  /* 0C065B48 mov.l Rm,@-Rn */
	r7 = 0xC172A08u; UPD(0x0C065B4Cu, 1);  /* 0C065B4A mov.l @(disp,pc),Rn */
	IF(0x0C065B4Cu); r15 -= 4; W32(r15, PR); UPD(0x0C065B4Eu, 1);  /* 0C065B4C sts.l pr,@-Rn */
	r2 = 0xC2322E0u; UPD(0x0C065B50u, 1);  /* 0C065B4E mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C065B50 mov Rm,Rn */
	IF(0x0C065B52u); ;  /* 0C065B52 nop */
	UPD(0x0C065B54u, 2);
L_0C065B54: BLKS(0x0C065B54u);
	{ u32 v_ = (u32)(s32)(s8)R8(r7); r7 += 1; r0 = v_; } UPD(0x0C065B56u, 1);  /* 0C065B54 mov.b @Rm+,Rn */
	W8(r2, r0); UPD(0x0C065B58u, 1);  /* 0C065B56 mov.b Rm,@Rn */
	r0 = r3;  /* 0C065B58 mov Rm,Rn */
	r0 += 0x1u;  /* 0C065B5A add #imm,Rn */
	r3 = (u32)(s32)(s16)r0;  /* 0C065B5C exts.w Rm,Rn */
	T = (s32)r3 > (s32)r6;  /* 0C065B5E cmp/gt Rm,Rn */
	{ u32 c_ = !T; r2 += 0x1u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C065B54u, 7); goto L_0C065B54; } goto L_0C065B64; }  /* 0C065B60 bf/s */
L_0C065B64: BLKS(0x0C065B64u);
	r2 = 0xC065AC0u; UPD(0x0C065B66u, 2);  /* 0C065B64 mov.l @(disp,pc),Rn */
	IF(0x0C065B66u); { u32 t_ = r2; PR = 0x0C065B6Au; IF(0x0C065B68u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C065AC0, 0x0C065AC0u, 0x0C065B6Au); }  /* 0C065B66 jsr @Rn */
L_0C065B6A: BLKS(0x0C065B6Au);
	r7 = 0xC2322C0u; UPD(0x0C065B6Cu, 1);  /* 0C065B6A mov.l @(disp,pc),Rn */
	r0 = 0x0u;  /* 0C065B6C mov #imm,Rn */
	r3 = 0xC234BACu; UPD(0x0C065B70u, 2);  /* 0C065B6E mov.l @(disp,pc),Rn */
	r2 = 0xFu;  /* 0C065B70 mov #imm,Rn */
	IF(0x0C065B72u); ;  /* 0C065B72 nop */
	UPD(0x0C065B74u, 2);
L_0C065B74: BLKS(0x0C065B74u);
	IF(0x0C065B74u); r5 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C065B76u, 1);  /* 0C065B74 mov.b @(r0,Rm),Rn */
	r4 = r0;  /* 0C065B76 mov Rm,Rn */
	IF(0x0C065B78u); W8(r0 + r7, r5); UPD(0x0C065B7Au, 2);  /* 0C065B78 mov.b Rm,@(r0,Rn) */
	r4 += 0x1u;  /* 0C065B7A add #imm,Rn */
	r0 = (u32)(s32)(s16)r4;  /* 0C065B7C exts.w Rm,Rn */
	T = (s32)r0 > (s32)r2;  /* 0C065B7E cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C065B74u, 6); goto L_0C065B74; }  /* 0C065B80 bf */
L_0C065B82: BLKS(0x0C065B82u);
	r0 = 0x10u;  /* 0C065B82 mov #imm,Rn */
	r7 = 0xC2322C0u; UPD(0x0C065B86u, 2);  /* 0C065B84 mov.l @(disp,pc),Rn */
	r3 = 0xC234BACu; UPD(0x0C065B88u, 1);  /* 0C065B86 mov.l @(disp,pc),Rn */
	r2 = 0x1Fu;  /* 0C065B88 mov #imm,Rn */
	IF(0x0C065B8Au); ;  /* 0C065B8A nop */
	UPD(0x0C065B8Cu, 2);
L_0C065B8C: BLKS(0x0C065B8Cu);
	IF(0x0C065B8Cu); r8 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C065B8Eu, 1);  /* 0C065B8C mov.b @(r0,Rm),Rn */
	r6 = r0;  /* 0C065B8E mov Rm,Rn */
	IF(0x0C065B90u); W8(r0 + r7, r8); UPD(0x0C065B92u, 2);  /* 0C065B90 mov.b Rm,@(r0,Rn) */
	r6 += 0x1u;  /* 0C065B92 add #imm,Rn */
	r0 = (u32)(s32)(s16)r6;  /* 0C065B94 exts.w Rm,Rn */
	T = (s32)r0 > (s32)r2;  /* 0C065B96 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r5 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C065B8Cu, 6); goto L_0C065B8C; } goto L_0C065B9C; }  /* 0C065B98 bf/s */
L_0C065B9C: BLKS(0x0C065B9Cu);
	r9 = 0xC05DAA8u; UPD(0x0C065B9Eu, 2);  /* 0C065B9C mov.l @(disp,pc),Rn */
	r8 = 0xC2322C0u; UPD(0x0C065BA0u, 1);  /* 0C065B9E mov.l @(disp,pc),Rn */
	r6 = 0x40u;  /* 0C065BA0 mov #imm,Rn */
	IF(0x0C065BA2u); { u32 t_ = r9; PR = 0x0C065BA6u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C05DAA8, 0x0C05DAA8u, 0x0C065BA6u); }  /* 0C065BA2 jsr @Rn */
L_0C065BA6: BLKS(0x0C065BA6u);
	r2 = r8;  /* 0C065BA6 mov Rm,Rn */
	r2 += 0xCu;  /* 0C065BA8 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C065BACu, 3);  /* 0C065BAA mov.b @Rm,Rn */
	r5 = r8;  /* 0C065BAC mov Rm,Rn */
	r6 = 0xC3C542Au; UPD(0x0C065BB0u, 2);  /* 0C065BAE mov.l @(disp,pc),Rn */
	r7 = r8;  /* 0C065BB0 mov Rm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r5); r5 += 1; r1 = v_; } UPD(0x0C065BB4u, 2);  /* 0C065BB2 mov.b @Rm+,Rn */
	r7 += 0x2u;  /* 0C065BB4 add #imm,Rn */
	W8(r6, r0); UPD(0x0C065BB8u, 2);  /* 0C065BB6 mov.b Rm,@Rn */
	r4 = (u32)(s32)(s8)R8(r5); UPD(0x0C065BBAu, 1);  /* 0C065BB8 mov.b @Rm,Rn */
	r6 = 0xC2B1A58u; UPD(0x0C065BBCu, 1);  /* 0C065BBA mov.l @(disp,pc),Rn */
	r5 = r8;  /* 0C065BBC mov Rm,Rn */
	W8(r6, r4); UPD(0x0C065BC0u, 2);  /* 0C065BBE mov.b Rm,@Rn */
	r5 += 0x3u;  /* 0C065BC0 add #imm,Rn */
	r0 = 0xC3C414Cu; UPD(0x0C065BC4u, 2);  /* 0C065BC2 mov.l @(disp,pc),Rn */
	r6 += 0x1u;  /* 0C065BC4 add #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r7); UPD(0x0C065BC8u, 2);  /* 0C065BC6 mov.b @Rm,Rn */
	r4 = 0xC3C8690u; UPD(0x0C065BCAu, 1);  /* 0C065BC8 mov.l @(disp,pc),Rn */
	r7 = r8;  /* 0C065BCA mov Rm,Rn */
	W8(r0, r1); UPD(0x0C065BCEu, 2);  /* 0C065BCC mov.b Rm,@Rn */
	r7 += 0x4u;  /* 0C065BCE add #imm,Rn */
	W8(r4, r3); UPD(0x0C065BD2u, 2);  /* 0C065BD0 mov.b Rm,@Rn */
	r0 += 0x1u;  /* 0C065BD2 add #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r5); UPD(0x0C065BD6u, 2);  /* 0C065BD4 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C065BD6 add #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r7); UPD(0x0C065BDAu, 2);  /* 0C065BD8 mov.b @Rm,Rn */
	r5 = r8;  /* 0C065BDA mov Rm,Rn */
	W8(r0, r2); UPD(0x0C065BDEu, 2);  /* 0C065BDC mov.b Rm,@Rn */
	r5 += 0x5u;  /* 0C065BDE add #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r5); UPD(0x0C065BE2u, 2);  /* 0C065BE0 mov.b @Rm,Rn */
	r0 = r8;  /* 0C065BE2 mov Rm,Rn */
	W8(r6, r3); UPD(0x0C065BE6u, 2);  /* 0C065BE4 mov.b Rm,@Rn */
	r0 += 0x6u;  /* 0C065BE6 add #imm,Rn */
	r7 = (u32)(s32)(s8)R8(r0); UPD(0x0C065BEAu, 2);  /* 0C065BE8 mov.b @Rm,Rn */
	r6 = r8;  /* 0C065BEA mov Rm,Rn */
	W8(r4, r2); UPD(0x0C065BEEu, 2);  /* 0C065BEC mov.b Rm,@Rn */
	r6 += 0x7u;  /* 0C065BEE add #imm,Rn */
	r3 = 0xC3CA6F8u; UPD(0x0C065BF2u, 2);  /* 0C065BF0 mov.l @(disp,pc),Rn */
	r2 = r8;  /* 0C065BF2 mov Rm,Rn */
	r5 = (u32)(s32)(s8)R8(r6); UPD(0x0C065BF6u, 2);  /* 0C065BF4 mov.b @Rm,Rn */
	r2 += 0x8u;  /* 0C065BF6 add #imm,Rn */
	W8(r3, r7); UPD(0x0C065BFAu, 2);  /* 0C065BF8 mov.b Rm,@Rn */
	r4 = 0xC2860FCu; UPD(0x0C065BFCu, 1);  /* 0C065BFA mov.l @(disp,pc),Rn */
	r3 = r8;  /* 0C065BFC mov Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C065C00u, 2);  /* 0C065BFE mov.b @Rm,Rn */
	r3 += 0x9u;  /* 0C065C00 add #imm,Rn */
	W8(r4, r5); UPD(0x0C065C04u, 2);  /* 0C065C02 mov.b Rm,@Rn */
	r2 = r8;  /* 0C065C04 mov Rm,Rn */
	r7 = 0xC234C04u; UPD(0x0C065C08u, 2);  /* 0C065C06 mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C065C08 mov Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r3); UPD(0x0C065C0Cu, 2);  /* 0C065C0A mov.b @Rm,Rn */
	r4 += 0xAu;  /* 0C065C0C add #imm,Rn */
	W8(r7, r0); UPD(0x0C065C10u, 2);  /* 0C065C0E mov.b Rm,@Rn */
	r2 += 0xBu;  /* 0C065C10 add #imm,Rn */
	r5 = 0xC23DEA4u; UPD(0x0C065C14u, 2);  /* 0C065C12 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r4); UPD(0x0C065C16u, 1);  /* 0C065C14 mov.b @Rm,Rn */
	W8(r5, r6); UPD(0x0C065C18u, 1);  /* 0C065C16 mov.b Rm,@Rn */
	r7 = 0xC234BA8u; UPD(0x0C065C1Au, 1);  /* 0C065C18 mov.l @(disp,pc),Rn */
	r5 = r8;  /* 0C065C1A mov Rm,Rn */
	W8(r7, r0); UPD(0x0C065C1Eu, 2);  /* 0C065C1C mov.b Rm,@Rn */
	r5 += 0xFu;  /* 0C065C1E add #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r2); UPD(0x0C065C22u, 2);  /* 0C065C20 mov.b @Rm,Rn */
	r7 = r8;  /* 0C065C22 mov Rm,Rn */
	r6 = 0xC239483u; UPD(0x0C065C26u, 2);  /* 0C065C24 mov.l @(disp,pc),Rn */
	r7 += 0xDu;  /* 0C065C26 add #imm,Rn */
	r4 = (u32)(s32)(s8)R8(r5); UPD(0x0C065C2Au, 2);  /* 0C065C28 mov.b @Rm,Rn */
	r2 = r8;  /* 0C065C2A mov Rm,Rn */
	r0 = 0xC2B037Au; UPD(0x0C065C2Eu, 2);  /* 0C065C2C mov.l @(disp,pc),Rn */
	r2 += 0xEu;  /* 0C065C2E add #imm,Rn */
	W8(r6, r3); UPD(0x0C065C32u, 2);  /* 0C065C30 mov.b Rm,@Rn */
	W8(r0, r4); UPD(0x0C065C34u, 1);  /* 0C065C32 mov.b Rm,@Rn */
	r3 = (u32)(s32)(s8)R8(r7); UPD(0x0C065C36u, 1);  /* 0C065C34 mov.b @Rm,Rn */
	r0 = r8;  /* 0C065C36 mov Rm,Rn */
	r6 = 0xC3C43B8u; UPD(0x0C065C3Au, 2);  /* 0C065C38 mov.l @(disp,pc),Rn */
	r0 += 0x10u;  /* 0C065C3A add #imm,Rn */
	r5 = (u32)(s32)(s8)R8(r2); UPD(0x0C065C3Eu, 2);  /* 0C065C3C mov.b @Rm,Rn */
	W8(r6, r3); UPD(0x0C065C40u, 1);  /* 0C065C3E mov.b Rm,@Rn */
	r4 = 0xC3C848Cu; UPD(0x0C065C42u, 1);  /* 0C065C40 mov.l @(disp,pc),Rn */
	r7 = (u32)(s32)(s8)R8(r0); UPD(0x0C065C44u, 1);  /* 0C065C42 mov.b @Rm,Rn */
	W8(r4, r5); UPD(0x0C065C46u, 1);  /* 0C065C44 mov.b Rm,@Rn */
	r3 = r7 & 0xFF;  /* 0C065C46 extu.b Rm,Rn */
	r6 = 0xC2380C8u; UPD(0x0C065C4Au, 2);  /* 0C065C48 mov.l @(disp,pc),Rn */
	r5 = r8;  /* 0C065C4A mov Rm,Rn */
	W32(r6, r3); UPD(0x0C065C4Eu, 2);  /* 0C065C4C mov.l Rm,@Rn */
	r5 += 0x11u;  /* 0C065C4E add #imm,Rn */
	r4 = (u32)(s32)(s8)R8(r5); UPD(0x0C065C52u, 2);  /* 0C065C50 mov.b @Rm,Rn */
	r7 = r8;  /* 0C065C52 mov Rm,Rn */
	r2 = r4 & 0xFF;  /* 0C065C54 extu.b Rm,Rn */
	r0 = 0xC2289E4u; UPD(0x0C065C58u, 3);  /* 0C065C56 mov.l @(disp,pc),Rn */
	r8 += 0x13u;  /* 0C065C58 add #imm,Rn */
	r4 = (u32)(s32)(s8)R8(r8); UPD(0x0C065C5Cu, 2);  /* 0C065C5A mov.b @Rm,Rn */
	r7 += 0x12u;  /* 0C065C5C add #imm,Rn */
	W32(r0, r2); UPD(0x0C065C60u, 2);  /* 0C065C5E mov.l Rm,@Rn */
	r3 = (u32)(s32)(s8)R8(r7); UPD(0x0C065C62u, 1);  /* 0C065C60 mov.b @Rm,Rn */
	r2 = r4 & 0xFF;  /* 0C065C62 extu.b Rm,Rn */
	r8 = 0xC06C140u; UPD(0x0C065C66u, 2);  /* 0C065C64 mov.l @(disp,pc),Rn */
	r6 = r3 & 0xFF;  /* 0C065C66 extu.b Rm,Rn */
	r5 = 0xC233720u; UPD(0x0C065C6Au, 2);  /* 0C065C68 mov.l @(disp,pc),Rn */
	r0 = 0xC286310u; UPD(0x0C065C6Cu, 1);  /* 0C065C6A mov.l @(disp,pc),Rn */
	W32(r5, r6); UPD(0x0C065C6Eu, 1);  /* 0C065C6C mov.l Rm,@Rn */
	IF(0x0C065C6Eu); { u32 t_ = r8; PR = 0x0C065C72u; W32(r0, r2); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C06C140, 0x0C06C140u, 0x0C065C72u); }  /* 0C065C6E jsr @Rn */
L_0C065C72: BLKS(0x0C065C72u);
	r7 = 0xC067580u; UPD(0x0C065C74u, 1);  /* 0C065C72 mov.l @(disp,pc),Rn */
	IF(0x0C065C74u); { u32 t_ = r7; PR = 0x0C065C78u; IF(0x0C065C76u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C067580, 0x0C067580u, 0x0C065C78u); }  /* 0C065C74 jsr @Rn */
L_0C065C78: BLKS(0x0C065C78u);
	r4 = 0xC286150u; UPD(0x0C065C7Au, 1);  /* 0C065C78 mov.l @(disp,pc),Rn */
	r5 = 0x20u;  /* 0C065C7A mov #imm,Rn */
	r6 = 0x194u; UPD(0x0C065C7Eu, 2);  /* 0C065C7C mov.w @(disp,pc),Rn */
	r3 = r9;  /* 0C065C7E mov Rm,Rn */
	r15 = r14;  /* 0C065C80 mov Rm,Rn */
	IF(0x0C065C82u); PR = R32(r15); r15 += 4; UPD(0x0C065C84u, 3);  /* 0C065C82 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C065C86u, 1);  /* 0C065C84 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C065C88u, 1);  /* 0C065C86 mov.l @Rm+,Rn */
	IF(0x0C065C88u); { u32 tv_ = r3; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C05DAA8u: TAIL(blk_f_0C05DAA8); default: JUMPD(tv_); } }  /* 0C065C88 jmp @Rn */
}

/* FUN_0c065d00 */
void blk_f_0C065D00(sh3_t *c)
{
	LOCALS;
L_0C065D00: BLKS(0x0C065D00u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C065D02u, 1);  /* 0C065D00 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C065D04u, 1);  /* 0C065D02 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s8)r5;  /* 0C065D04 exts.b Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C065D08u, 2);  /* 0C065D06 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s8)r4;  /* 0C065D08 exts.b Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C065D0Cu, 2);  /* 0C065D0A mov.l Rm,@-Rn */
	r5 = r9;  /* 0C065D0C mov Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C065D10u, 2);  /* 0C065D0E mov.l Rm,@-Rn */
	r6 = r8;  /* 0C065D10 mov Rm,Rn */
	IF(0x0C065D12u); r15 -= 4; W32(r15, PR); UPD(0x0C065D14u, 2);  /* 0C065D12 sts.l pr,@-Rn */
	r8 += 0xBu;  /* 0C065D14 add #imm,Rn */
	r0 = 0xC3C542Au; UPD(0x0C065D18u, 2);  /* 0C065D16 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C065D18 mov Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r0); UPD(0x0C065D1Cu, 2);  /* 0C065D1A mov.b @Rm,Rn */
	r10 = 0xC0626E0u; UPD(0x0C065D1Eu, 1);  /* 0C065D1C mov.l @(disp,pc),Rn */
	r0 = r3 & 0xFF;  /* 0C065D1E extu.b Rm,Rn */
	r2 = 0xC1734FCu; UPD(0x0C065D22u, 2);  /* 0C065D20 mov.l @(disp,pc),Rn */
	IF(0x0C065D22u); r0 <<= 2;  /* 0C065D22 shll2 Rn */
	r7 = 0x80808000u; UPD(0x0C065D26u, 2);  /* 0C065D24 mov.l @(disp,pc),Rn */
	r4 = 0xC1734B0u; UPD(0x0C065D28u, 1);  /* 0C065D26 mov.l @(disp,pc),Rn */
	IF(0x0C065D28u); { u32 t_ = r10; PR = 0x0C065D2Cu; IF(0x0C065D2Au); r11 = R32(r0 + r2); /* slot mov.l @(r0,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C065D2Cu); }  /* 0C065D28 jsr @Rn */
L_0C065D2C: BLKS(0x0C065D2Cu);
	r7 = 0x40C04000u; UPD(0x0C065D2Eu, 1);  /* 0C065D2C mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C065D2E mov Rm,Rn */
	r5 = r9;  /* 0C065D30 mov Rm,Rn */
	r6 = r8;  /* 0C065D32 mov Rm,Rn */
	r0 = r10;  /* 0C065D34 mov Rm,Rn */
	r15 = r14;  /* 0C065D36 mov Rm,Rn */
	IF(0x0C065D38u); PR = R32(r15); r15 += 4; UPD(0x0C065D3Au, 6);  /* 0C065D38 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C065D3Cu, 1);  /* 0C065D3A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C065D3Eu, 1);  /* 0C065D3C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C065D40u, 1);  /* 0C065D3E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C065D42u, 1);  /* 0C065D40 mov.l @Rm+,Rn */
	IF(0x0C065D42u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0626E0u: TAIL(blk_f_0C0626E0); default: JUMPD(tv_); } }  /* 0C065D42 jmp @Rn */
}

/* FUN_0c065d60 */
void blk_f_0C065D60(sh3_t *c)
{
	LOCALS;
L_0C065D60: BLKS(0x0C065D60u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C065D62u, 1);  /* 0C065D60 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C065D64u, 1);  /* 0C065D62 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s8)r5;  /* 0C065D64 exts.b Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C065D68u, 2);  /* 0C065D66 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s8)r4;  /* 0C065D68 exts.b Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C065D6Cu, 2);  /* 0C065D6A mov.l Rm,@-Rn */
	r6 = r8;  /* 0C065D6C mov Rm,Rn */
	IF(0x0C065D6Eu); r15 -= 4; W32(r15, PR); UPD(0x0C065D70u, 2);  /* 0C065D6E sts.l pr,@-Rn */
	r8 += 0x11u;  /* 0C065D70 add #imm,Rn */
	r5 = 0xC173590u; UPD(0x0C065D74u, 2);  /* 0C065D72 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C065D74 mov Rm,Rn */
	r10 = 0xC0626E0u; UPD(0x0C065D78u, 2);  /* 0C065D76 mov.l @(disp,pc),Rn */
	r4 = R32(r5); UPD(0x0C065D7Au, 1);  /* 0C065D78 mov.l @Rm,Rn */
	r7 = 0x80808000u; UPD(0x0C065D7Cu, 1);  /* 0C065D7A mov.l @(disp,pc),Rn */
	IF(0x0C065D7Cu); { u32 t_ = r10; PR = 0x0C065D80u; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C065D80u); }  /* 0C065D7C jsr @Rn */
L_0C065D80: BLKS(0x0C065D80u);
	r0 = 0xC3CA6F8u; UPD(0x0C065D82u, 1);  /* 0C065D80 mov.l @(disp,pc),Rn */
	r5 = r9;  /* 0C065D82 mov Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r0); UPD(0x0C065D86u, 2);  /* 0C065D84 mov.b @Rm,Rn */
	r6 = r8;  /* 0C065D86 mov Rm,Rn */
	r0 = r3 & 0xFF;  /* 0C065D88 extu.b Rm,Rn */
	r2 = 0xC173564u; UPD(0x0C065D8Cu, 3);  /* 0C065D8A mov.l @(disp,pc),Rn */
	IF(0x0C065D8Cu); r0 <<= 2;  /* 0C065D8C shll2 Rn */
	IF(0x0C065D8Eu); r4 = R32(r0 + r2); UPD(0x0C065D90u, 2);  /* 0C065D8E mov.l @(r0,Rm),Rn */
	r7 = 0x40C04000u; UPD(0x0C065D92u, 1);  /* 0C065D90 mov.l @(disp,pc),Rn */
	r0 = r10;  /* 0C065D92 mov Rm,Rn */
	r15 = r14;  /* 0C065D94 mov Rm,Rn */
	IF(0x0C065D96u); PR = R32(r15); r15 += 4; UPD(0x0C065D98u, 3);  /* 0C065D96 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C065D9Au, 1);  /* 0C065D98 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C065D9Cu, 1);  /* 0C065D9A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C065D9Eu, 1);  /* 0C065D9C mov.l @Rm+,Rn */
	IF(0x0C065D9Eu); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0626E0u: TAIL(blk_f_0C0626E0); default: JUMPD(tv_); } }  /* 0C065D9E jmp @Rn */
}

/* FUN_0c065dc0 */
void blk_f_0C065DC0(sh3_t *c)
{
	LOCALS;
L_0C065DC0: BLKS(0x0C065DC0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C065DC2u, 1);  /* 0C065DC0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C065DC4u, 1);  /* 0C065DC2 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s8)r5;  /* 0C065DC4 exts.b Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C065DC8u, 2);  /* 0C065DC6 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s8)r4;  /* 0C065DC8 exts.b Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C065DCCu, 2);  /* 0C065DCA mov.l Rm,@-Rn */
	r5 = r9;  /* 0C065DCC mov Rm,Rn */
	r10 = 0xC0626E0u; UPD(0x0C065DD0u, 2);  /* 0C065DCE mov.l @(disp,pc),Rn */
	r6 = r8;  /* 0C065DD0 mov Rm,Rn */
	IF(0x0C065DD2u); r15 -= 4; W32(r15, PR); UPD(0x0C065DD4u, 2);  /* 0C065DD2 sts.l pr,@-Rn */
	r8 += 0xCu;  /* 0C065DD4 add #imm,Rn */
	r4 = 0xC173594u; UPD(0x0C065DD8u, 2);  /* 0C065DD6 mov.l @(disp,pc),Rn */
	r7 = 0x80808000u; UPD(0x0C065DDAu, 1);  /* 0C065DD8 mov.l @(disp,pc),Rn */
	IF(0x0C065DDAu); { u32 t_ = r10; PR = 0x0C065DDEu; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C065DDEu); }  /* 0C065DDA jsr @Rn */
L_0C065DDE: BLKS(0x0C065DDEu);
	r0 = 0xC234C04u; UPD(0x0C065DE0u, 1);  /* 0C065DDE mov.l @(disp,pc),Rn */
	r5 = r9;  /* 0C065DE0 mov Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r0); UPD(0x0C065DE4u, 2);  /* 0C065DE2 mov.b @Rm,Rn */
	r6 = r8;  /* 0C065DE4 mov Rm,Rn */
	r0 = r3 & 0xFF;  /* 0C065DE6 extu.b Rm,Rn */
	r2 = 0xC1735F8u; UPD(0x0C065DEAu, 3);  /* 0C065DE8 mov.l @(disp,pc),Rn */
	IF(0x0C065DEAu); r0 <<= 2;  /* 0C065DEA shll2 Rn */
	IF(0x0C065DECu); r4 = R32(r0 + r2); UPD(0x0C065DEEu, 2);  /* 0C065DEC mov.l @(r0,Rm),Rn */
	r7 = 0x40C04000u; UPD(0x0C065DF0u, 1);  /* 0C065DEE mov.l @(disp,pc),Rn */
	r0 = r10;  /* 0C065DF0 mov Rm,Rn */
	r15 = r14;  /* 0C065DF2 mov Rm,Rn */
	IF(0x0C065DF4u); PR = R32(r15); r15 += 4; UPD(0x0C065DF6u, 3);  /* 0C065DF4 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C065DF8u, 1);  /* 0C065DF6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C065DFAu, 1);  /* 0C065DF8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C065DFCu, 1);  /* 0C065DFA mov.l @Rm+,Rn */
	IF(0x0C065DFCu); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0626E0u: TAIL(blk_f_0C0626E0); default: JUMPD(tv_); } }  /* 0C065DFC jmp @Rn */
}

/* dipmenu_draw_item_c */
void blk_f_0C065E20(sh3_t *c)
{
	LOCALS;
L_0C065E20: BLKS(0x0C065E20u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C065E22u, 1);  /* 0C065E20 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C065E24u, 1);  /* 0C065E22 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s8)r5;  /* 0C065E24 exts.b Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C065E28u, 2);  /* 0C065E26 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s8)r4;  /* 0C065E28 exts.b Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C065E2Cu, 2);  /* 0C065E2A mov.l Rm,@-Rn */
	r5 = r9;  /* 0C065E2C mov Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C065E30u, 2);  /* 0C065E2E mov.l Rm,@-Rn */
	r6 = r8;  /* 0C065E30 mov Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C065E34u, 2);  /* 0C065E32 mov.l Rm,@-Rn */
	r10 = 0xC0626E0u; UPD(0x0C065E36u, 1);  /* 0C065E34 mov.l @(disp,pc),Rn */
	IF(0x0C065E36u); r15 -= 4; W32(r15, PR); UPD(0x0C065E38u, 1);  /* 0C065E36 sts.l pr,@-Rn */
	r12 = 0x80808000u; UPD(0x0C065E3Au, 1);  /* 0C065E38 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C065E3A mov Rm,Rn */
	r11 = 0xC239483u; UPD(0x0C065E3Eu, 2);  /* 0C065E3C mov.l @(disp,pc),Rn */
	r4 = 0xC173618u; UPD(0x0C065E40u, 1);  /* 0C065E3E mov.l @(disp,pc),Rn */
	IF(0x0C065E40u); { u32 t_ = r10; PR = 0x0C065E44u; r7 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C065E44u); }  /* 0C065E40 jsr @Rn */
L_0C065E44: BLKS(0x0C065E44u);
	r0 = (u32)(s32)(s8)R8(r11); UPD(0x0C065E46u, 1);  /* 0C065E44 mov.b @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C065E46 tst Rm,Rn */
	{ u32 c_ = !T; r6 = r8; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C065E70u, 4); goto L_0C065E70; } UPD(0x0C065E4Cu, 1); goto L_0C065E4C; }  /* 0C065E48 bf/s */
L_0C065E4C: BLKS(0x0C065E4Cu);
	r2 = 0xC172AECu; UPD(0x0C065E4Eu, 1);  /* 0C065E4C mov.l @(disp,pc),Rn */
	r0 = r0 & 0xFF;  /* 0C065E4E extu.b Rm,Rn */
	IF(0x0C065E50u); r0 <<= 2;  /* 0C065E50 shll2 Rn */
	IF(0x0C065E52u); r4 = R32(r0 + r2); UPD(0x0C065E54u, 3);  /* 0C065E52 mov.l @(r0,Rm),Rn */
	r8 += 0xEu;  /* 0C065E54 add #imm,Rn */
	r7 = 0x40C04000u; UPD(0x0C065E58u, 2);  /* 0C065E56 mov.l @(disp,pc),Rn */
	r5 = r9;  /* 0C065E58 mov Rm,Rn */
	r6 = r8;  /* 0C065E5A mov Rm,Rn */
	r0 = r10;  /* 0C065E5C mov Rm,Rn */
	r15 = r14;  /* 0C065E5E mov Rm,Rn */
	IF(0x0C065E60u); PR = R32(r15); r15 += 4; UPD(0x0C065E62u, 5);  /* 0C065E60 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C065E64u, 1);  /* 0C065E62 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C065E66u, 1);  /* 0C065E64 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C065E68u, 1);  /* 0C065E66 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C065E6Au, 1);  /* 0C065E68 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C065E6Cu, 1);  /* 0C065E6A mov.l @Rm+,Rn */
	IF(0x0C065E6Cu); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0626E0u: TAIL(blk_f_0C0626E0); default: JUMPD(tv_); } }  /* 0C065E6C jmp @Rn */
L_0C065E70: BLKS(0x0C065E70u);
	r6 += 0xCu;  /* 0C065E70 add #imm,Rn */
	r4 = 0xC173628u; UPD(0x0C065E74u, 2);  /* 0C065E72 mov.l @(disp,pc),Rn */
	r5 = r9;  /* 0C065E74 mov Rm,Rn */
	IF(0x0C065E76u); { u32 t_ = r10; PR = 0x0C065E7Au; r7 = r12; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C065E7Au); }  /* 0C065E76 jsr @Rn */
L_0C065E7A: BLKS(0x0C065E7Au);
	{ r0 = (u32)(s32)(s8)R8(r11); /* slot mov.b @Rm,Rn */ UPD(0x0C065E4Cu, 3); goto L_0C065E4C; }  /* 0C065E7A bra */
}

/* FUN_0c065ea0 */
void blk_f_0C065EA0(sh3_t *c)
{
	LOCALS;
L_0C065EA0: BLKS(0x0C065EA0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C065EA2u, 1);  /* 0C065EA0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C065EA4u, 1);  /* 0C065EA2 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s8)r5;  /* 0C065EA4 exts.b Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C065EA8u, 2);  /* 0C065EA6 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s8)r4;  /* 0C065EA8 exts.b Rm,Rn */
	r0 = 0xC0626E0u; UPD(0x0C065EACu, 2);  /* 0C065EAA mov.l @(disp,pc),Rn */
	r5 = r9;  /* 0C065EAC mov Rm,Rn */
	IF(0x0C065EAEu); r15 -= 4; W32(r15, PR); UPD(0x0C065EB0u, 2);  /* 0C065EAE sts.l pr,@-Rn */
	r6 = r8;  /* 0C065EB0 mov Rm,Rn */
	r14 = r15;  /* 0C065EB2 mov Rm,Rn */
	r4 = 0xC17362Cu; UPD(0x0C065EB6u, 3);  /* 0C065EB4 mov.l @(disp,pc),Rn */
	r7 = 0x80808000u; UPD(0x0C065EB8u, 1);  /* 0C065EB6 mov.l @(disp,pc),Rn */
	IF(0x0C065EB8u); { u32 t_ = r0; PR = 0x0C065EBCu; r8 += 0x11u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C065EBCu); }  /* 0C065EB8 jsr @Rn */
L_0C065EBC: BLKS(0x0C065EBCu);
	r0 = 0xC2B037Au; UPD(0x0C065EBEu, 1);  /* 0C065EBC mov.l @(disp,pc),Rn */
	r5 = r9;  /* 0C065EBE mov Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r0); UPD(0x0C065EC2u, 2);  /* 0C065EC0 mov.b @Rm,Rn */
	r6 = r8;  /* 0C065EC2 mov Rm,Rn */
	r0 = 0xC062F50u; UPD(0x0C065EC6u, 2);  /* 0C065EC4 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C065EC6 mov Rm,Rn */
	IF(0x0C065EC8u); PR = R32(r15); r15 += 4; UPD(0x0C065ECAu, 2);  /* 0C065EC8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C065ECCu, 1);  /* 0C065ECA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C065ECEu, 1);  /* 0C065ECC mov.l @Rm+,Rn */
	IF(0x0C065ECEu); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C062F50u: TAIL(blk_f_0C062F50); default: JUMPD(tv_); } }  /* 0C065ECE jmp @Rn */
}

/* dipmenu_draw_item_d */
void blk_f_0C065EF0(sh3_t *c)
{
	LOCALS;
L_0C065EF0: BLKS(0x0C065EF0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C065EF2u, 1);  /* 0C065EF0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C065EF4u, 1);  /* 0C065EF2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C065EF6u, 1);  /* 0C065EF4 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s8)r5;  /* 0C065EF6 exts.b Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C065EFAu, 2);  /* 0C065EF8 mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s8)r4;  /* 0C065EFA exts.b Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C065EFEu, 2);  /* 0C065EFC mov.l Rm,@-Rn */
	r5 = r10;  /* 0C065EFE mov Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C065F02u, 2);  /* 0C065F00 mov.l Rm,@-Rn */
	r6 = r9;  /* 0C065F02 mov Rm,Rn */
	r11 = 0xC0626E0u; UPD(0x0C065F06u, 2);  /* 0C065F04 mov.l @(disp,pc),Rn */
	IF(0x0C065F06u); r15 -= 4; W32(r15, PR); UPD(0x0C065F08u, 1);  /* 0C065F06 sts.l pr,@-Rn */
	r12 = 0xC234BA8u; UPD(0x0C065F0Au, 1);  /* 0C065F08 mov.l @(disp,pc),Rn */
	r4 = 0xC17363Cu; UPD(0x0C065F0Cu, 1);  /* 0C065F0A mov.l @(disp,pc),Rn */
	r7 = 0x80808000u; UPD(0x0C065F0Eu, 1);  /* 0C065F0C mov.l @(disp,pc),Rn */
	IF(0x0C065F0Eu); { u32 t_ = r11; PR = 0x0C065F12u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C065F12u); }  /* 0C065F0E jsr @Rn */
L_0C065F12: BLKS(0x0C065F12u);
	r2 = (u32)(s32)(s8)R8(r12); UPD(0x0C065F14u, 1);  /* 0C065F12 mov.b @Rm,Rn */
	r0 = r2 & 0xFF;  /* 0C065F14 extu.b Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C065F16 tst Rm,Rn */
	{ u32 c_ = !T; IF(0x0C065F1Au); r0 <<= 2; /* slot shll2 Rn */ if (c_) { UPD(0x0C065F40u, 5); goto L_0C065F40; } goto L_0C065F1C; }  /* 0C065F18 bf/s */
L_0C065F1C: BLKS(0x0C065F1Cu);
	r4 = 0xC17365Cu; UPD(0x0C065F1Eu, 2);  /* 0C065F1C mov.l @(disp,pc),Rn */
	r9 += 0xCu;  /* 0C065F1E add #imm,Rn */
	UPD(0x0C065F20u, 1);
L_0C065F20: BLKS(0x0C065F20u);
	r7 = 0x40C04000u; UPD(0x0C065F22u, 1);  /* 0C065F20 mov.l @(disp,pc),Rn */
	r5 = r10;  /* 0C065F22 mov Rm,Rn */
	r6 = r9;  /* 0C065F24 mov Rm,Rn */
	r0 = r11;  /* 0C065F26 mov Rm,Rn */
	r15 = r14;  /* 0C065F28 mov Rm,Rn */
	IF(0x0C065F2Au); PR = R32(r15); r15 += 4; UPD(0x0C065F2Cu, 5);  /* 0C065F2A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C065F2Eu, 1);  /* 0C065F2C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C065F30u, 1);  /* 0C065F2E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C065F32u, 1);  /* 0C065F30 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C065F34u, 1);  /* 0C065F32 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C065F36u, 1);  /* 0C065F34 mov.l @Rm+,Rn */
	IF(0x0C065F36u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0626E0u: TAIL(blk_f_0C0626E0); default: JUMPD(tv_); } }  /* 0C065F36 jmp @Rn */
L_0C065F40: BLKS(0x0C065F40u);
	r5 = 0xC172BCCu; UPD(0x0C065F42u, 1);  /* 0C065F40 mov.l @(disp,pc),Rn */
	r8 = 0xC06E0E0u; UPD(0x0C065F44u, 1);  /* 0C065F42 mov.l @(disp,pc),Rn */
	r9 += 0xAu;  /* 0C065F44 add #imm,Rn */
	r2 = 0x40C04000u; UPD(0x0C065F48u, 2);  /* 0C065F46 mov.l @(disp,pc),Rn */
	r6 = r9;  /* 0C065F48 mov Rm,Rn */
	IF(0x0C065F4Au); r4 = R32(r0 + r5); UPD(0x0C065F4Cu, 2);  /* 0C065F4A mov.l @(r0,Rm),Rn */
	r7 = r2;  /* 0C065F4C mov Rm,Rn */
	IF(0x0C065F4Eu); { u32 t_ = r8; PR = 0x0C065F52u; r5 = r10; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C06E0E0, 0x0C06E0E0u, 0x0C065F52u); }  /* 0C065F4E jsr @Rn */
L_0C065F52: BLKS(0x0C065F52u);
	r1 = (u32)(s32)(s8)R8(r12); UPD(0x0C065F54u, 1);  /* 0C065F52 mov.b @Rm,Rn */
	r9 += 0x9u;  /* 0C065F54 add #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C065F56 extu.b Rm,Rn */
	r3 = 0xC172C18u; UPD(0x0C065F5Au, 3);  /* 0C065F58 mov.l @(disp,pc),Rn */
	IF(0x0C065F5Au); r0 <<= 2;  /* 0C065F5A shll2 Rn */
	IF(0x0C065F5Cu); r0 = R32(r0 + r3); UPD(0x0C065F5Eu, 2);  /* 0C065F5C mov.l @(r0,Rm),Rn */
	r2 = 0xC173668u; UPD(0x0C065F60u, 1);  /* 0C065F5E mov.l @(disp,pc),Rn */
	IF(0x0C065F60u); r0 <<= 2;  /* 0C065F60 shll2 Rn */
	{ IF(0x0C065F64u); r4 = R32(r0 + r2); /* slot mov.l @(r0,Rm),Rn */ UPD(0x0C065F20u, 4); goto L_0C065F20; }  /* 0C065F62 bra */
}

void blk_f_0C065F90(sh3_t *c)
{
	LOCALS;
L_0C065F90: BLKS(0x0C065F90u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C065F92u, 1);  /* 0C065F90 mov.l Rm,@-Rn */
	r7 = 0x40u;  /* 0C065F92 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C065F96u, 2);  /* 0C065F94 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C065F98u, 1);  /* 0C065F96 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C065F9Au, 1);  /* 0C065F98 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C065F9Cu, 1);  /* 0C065F9A mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C065F9Eu, 1);  /* 0C065F9C mov.l Rm,@-Rn */
	r12 = (u32)(s32)(s8)r4;  /* 0C065F9E exts.b Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C065FA2u, 2);  /* 0C065FA0 mov.l Rm,@-Rn */
	r9 = 0xC173670u; UPD(0x0C065FA4u, 1);  /* 0C065FA2 mov.l @(disp,pc),Rn */
	IF(0x0C065FA4u); r15 -= 4; W32(r15, PR); UPD(0x0C065FA6u, 1);  /* 0C065FA4 sts.l pr,@-Rn */
	r3 = R32(r9); UPD(0x0C065FA8u, 1);  /* 0C065FA6 mov.l @Rm,Rn */
	r15 += 0xFFFFFF88u;  /* 0C065FA8 add #imm,Rn */
	r14 = r15;  /* 0C065FAA mov Rm,Rn */
	r9 = r14;  /* 0C065FAC mov Rm,Rn */
	r9 += 0x40u;  /* 0C065FAE add #imm,Rn */
	W32(r9 + 0xCu, r3); UPD(0x0C065FB2u, 5);  /* 0C065FB0 mov.l Rm,@(disp,Rn) */
	r7 += r14;  /* 0C065FB2 add Rm,Rn */
	r11 = 0xC173674u; UPD(0x0C065FB6u, 2);  /* 0C065FB4 mov.l @(disp,pc),Rn */
	r3 = r14;  /* 0C065FB6 mov Rm,Rn */
	r8 = R32(r11); UPD(0x0C065FBAu, 2);  /* 0C065FB8 mov.l @Rm,Rn */
	r3 += 0x4Cu;  /* 0C065FBA add #imm,Rn */
	r4 = 0xC17367Cu; UPD(0x0C065FBEu, 2);  /* 0C065FBC mov.l @(disp,pc),Rn */
	W32(r3 + 0x4u, r8); UPD(0x0C065FC0u, 1);  /* 0C065FBE mov.l Rm,@(disp,Rn) */
	r10 = R32(r4); UPD(0x0C065FC2u, 1);  /* 0C065FC0 mov.l @Rm,Rn */
	r2 = 0xC173680u; UPD(0x0C065FC4u, 1);  /* 0C065FC2 mov.l @(disp,pc),Rn */
	W32(r9 + 0x14u, r10); UPD(0x0C065FC6u, 1);  /* 0C065FC4 mov.l Rm,@(disp,Rn) */
	r0 = R32(r2); UPD(0x0C065FC8u, 1);  /* 0C065FC6 mov.l @Rm,Rn */
	r10 = r14;  /* 0C065FC8 mov Rm,Rn */
	r13 = 0xC173684u; UPD(0x0C065FCCu, 2);  /* 0C065FCA mov.l @(disp,pc),Rn */
	r10 += 0x54u;  /* 0C065FCC add #imm,Rn */
	W32(r10 + 0x4u, r0); UPD(0x0C065FD0u, 2);  /* 0C065FCE mov.l Rm,@(disp,Rn) */
	r11 = R32(r13); UPD(0x0C065FD2u, 1);  /* 0C065FD0 mov.l @Rm,Rn */
	r8 = 0xC173688u; UPD(0x0C065FD4u, 1);  /* 0C065FD2 mov.l @(disp,pc),Rn */
	W32(r9 + 0x1Cu, r11); UPD(0x0C065FD6u, 1);  /* 0C065FD4 mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C065FD8u, 1);  /* 0C065FD6 mov.l @Rm,Rn */
	r9 = 0x1u;  /* 0C065FD8 mov #imm,Rn */
	W32(r7 + 0x20u, r4); UPD(0x0C065FDCu, 2);  /* 0C065FDA mov.l Rm,@(disp,Rn) */
	r2 = 0xC3C542Au; UPD(0x0C065FDEu, 1);  /* 0C065FDC mov.l @(disp,pc),Rn */
	W32(r7 + 0x24u, r5); UPD(0x0C065FE0u, 1);  /* 0C065FDE mov.l Rm,@(disp,Rn) */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C065FE2u, 1);  /* 0C065FE0 mov.b @Rm,Rn */
	W32(r7 + 0x28u, r6); UPD(0x0C065FE4u, 1);  /* 0C065FE2 mov.l Rm,@(disp,Rn) */
	r7 = r0 & 0xFF;  /* 0C065FE4 extu.b Rm,Rn */
	T = r9 >= r7;  /* 0C065FE6 cmp/hs Rm,Rn */
	IF(0x0C065FE8u); r4 = T;  /* 0C065FE8 movt Rn */
	r0 = r12;  /* 0C065FEA mov Rm,Rn */
	T = r0 == 0x1u;  /* 0C065FEC cmp/eq #imm,r0 */
	IF(0x0C065FEEu); r2 = T;  /* 0C065FEE movt Rn */
	r4 &= r2;  /* 0C065FF0 and Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C065FF2 tst Rm,Rn */
	if (!T) { UPD(0x0C06600Au, 11); goto L_0C06600A; }  /* 0C065FF4 bf */
L_0C065FF6: BLKS(0x0C065FF6u);
	r0 = r7;  /* 0C065FF6 mov Rm,Rn */
	r8 = 0xC3C414Cu; UPD(0x0C065FFAu, 2);  /* 0C065FF8 mov.l @(disp,pc),Rn */
	T = r0 == 0x2u;  /* 0C065FFA cmp/eq #imm,r0 */
	r1 = (u32)(s32)(s8)R8(r8); UPD(0x0C065FFEu, 2);  /* 0C065FFC mov.b @Rm,Rn */
	IF(0x0C065FFEu); r13 = T;  /* 0C065FFE movt Rn */
	T = (r1 & r1) == 0;  /* 0C066000 tst Rm,Rn */
	r13 &= r2;  /* 0C066002 and Rm,Rn */
	IF(0x0C066004u); r7 = T;  /* 0C066004 movt Rn */
	T = (r13 & r7) == 0;  /* 0C066006 tst Rm,Rn */
	if (T) { UPD(0x0C066020u, 8); goto L_0C066020; }  /* 0C066008 bt */
L_0C06600A: BLKS(0x0C06600Au);
	r14 += 0x78u;  /* 0C06600A add #imm,Rn */
	UPD(0x0C06600Cu, 1);
L_0C06600C: BLKS(0x0C06600Cu);
	r15 = r14;  /* 0C06600C mov Rm,Rn */
	IF(0x0C06600Eu); PR = R32(r15); r15 += 4; UPD(0x0C066010u, 2);  /* 0C06600E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C066012u, 1);  /* 0C066010 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C066014u, 1);  /* 0C066012 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C066016u, 1);  /* 0C066014 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C066018u, 1);  /* 0C066016 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06601Au, 1);  /* 0C066018 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06601Cu, 1);  /* 0C06601A mov.l @Rm+,Rn */
	IF(0x0C06601Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06601C rts */
L_0C066020: BLKS(0x0C066020u);
	r11 = 0xC0626E0u; UPD(0x0C066022u, 1);  /* 0C066020 mov.l @(disp,pc),Rn */
	r0 = r12;  /* 0C066022 mov Rm,Rn */
	r13 = 0x80808000u; UPD(0x0C066026u, 2);  /* 0C066024 mov.l @(disp,pc),Rn */
	IF(0x0C066026u); r0 <<= 2;  /* 0C066026 shll2 Rn */
	IF(0x0C066028u); r4 = R32(r0 + r3); UPD(0x0C06602Au, 2);  /* 0C066028 mov.l @(r0,Rm),Rn */
	IF(0x0C06602Au); { u32 t_ = r11; PR = 0x0C06602Eu; r7 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C06602Eu); }  /* 0C06602A jsr @Rn */
L_0C06602E: BLKS(0x0C06602Eu);
	r0 = r8;  /* 0C06602E mov Rm,Rn */
	IF(0x0C066030u); r5 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C066032u, 2);  /* 0C066030 mov.b @(r0,Rm),Rn */
	r1 = r5 & 0xFF;  /* 0C066032 extu.b Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C066034 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x68u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C066050u, 5); goto L_0C066050; } goto L_0C06603A; }  /* 0C066036 bf/s */
L_0C06603A: BLKS(0x0C06603Au);
	IF(0x0C06603Au); r12 = R32(r0 + r14); UPD(0x0C06603Cu, 2);  /* 0C06603A mov.l @(r0,Rm),Rn */
	r6 = 0xC173678u; UPD(0x0C06603Eu, 1);  /* 0C06603C mov.l @(disp,pc),Rn */
	r0 = 0x64u;  /* 0C06603E mov #imm,Rn */
	r4 = R32(r6); UPD(0x0C066042u, 2);  /* 0C066040 mov.l @Rm,Rn */
	r12 += 0x7u;  /* 0C066042 add #imm,Rn */
	IF(0x0C066044u); r5 = R32(r0 + r14); UPD(0x0C066046u, 2);  /* 0C066044 mov.l @(r0,Rm),Rn */
	r7 = 0x40C04000u; UPD(0x0C066048u, 1);  /* 0C066046 mov.l @(disp,pc),Rn */
	IF(0x0C066048u); { u32 t_ = r11; PR = 0x0C06604Cu; r6 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C06604Cu); }  /* 0C066048 jsr @Rn */
L_0C06604C: BLKS(0x0C06604Cu);
	{ r14 += 0x78u; /* slot add #imm,Rn */ UPD(0x0C06600Cu, 3); goto L_0C06600C; }  /* 0C06604C bra */
L_0C066050: BLKS(0x0C066050u);
	r6 = 0x40u;  /* 0C066050 mov #imm,Rn */
	r6 += r14;  /* 0C066052 add Rm,Rn */
	r2 = R32(r6 + 0x28u); UPD(0x0C066056u, 3);  /* 0C066054 mov.l @(disp,Rm),Rn */
	T = r1 > r9;  /* 0C066056 cmp/hi Rm,Rn */
	r2 += 0x8u;  /* 0C066058 add #imm,Rn */
	IF(0x0C06605Au); r0 = T;  /* 0C06605A movt Rn */
	W32(r6 + 0x2Cu, r2); UPD(0x0C06605Eu, 4);  /* 0C06605C mov.l Rm,@(disp,Rn) */
	IF(0x0C06605Eu); r0 <<= 2;  /* 0C06605E shll2 Rn */
	r5 = R32(r6 + 0x24u); UPD(0x0C066062u, 2);  /* 0C066060 mov.l @(disp,Rm),Rn */
	r7 = r13;  /* 0C066062 mov Rm,Rn */
	r6 = r2;  /* 0C066064 mov Rm,Rn */
	IF(0x0C066066u); { u32 t_ = r11; PR = 0x0C06606Au; IF(0x0C066068u); r4 = R32(r0 + r10); /* slot mov.l @(r0,Rm),Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C06606Au); }  /* 0C066066 jsr @Rn */
L_0C06606A: BLKS(0x0C06606Au);
	r7 = 0x40u;  /* 0C06606A mov #imm,Rn */
	r7 += r14;  /* 0C06606C add Rm,Rn */
	r0 = r8;  /* 0C06606E mov Rm,Rn */
	r1 = R32(r7 + 0x28u); UPD(0x0C066072u, 4);  /* 0C066070 mov.l @(disp,Rm),Rn */
	r4 = r14;  /* 0C066072 mov Rm,Rn */
	IF(0x0C066074u); r5 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C066076u, 2);  /* 0C066074 mov.b @(r0,Rm),Rn */
	r1 += 0x5u;  /* 0C066076 add #imm,Rn */
	r10 = 0xC0C23D0u; UPD(0x0C06607Au, 2);  /* 0C066078 mov.l @(disp,pc),Rn */
	r13 = r5 & 0xFF;  /* 0C06607A extu.b Rm,Rn */
	W32(r7 + 0x30u, r1); UPD(0x0C06607Eu, 2);  /* 0C06607C mov.l Rm,@(disp,Rn) */
	r5 = 0xC0C42E2u; UPD(0x0C066080u, 1);  /* 0C06607E mov.l @(disp,pc),Rn */
	IF(0x0C066080u); { u32 t_ = r10; PR = 0x0C066084u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C23D0, 0x0C0C23D0u, 0x0C066084u); }  /* 0C066080 jsr @Rn */
L_0C066084: BLKS(0x0C066084u);
	r4 = 0xCu;  /* 0C066084 mov #imm,Rn */
	r6 = 0x40u;  /* 0C066086 mov #imm,Rn */
	r5 = 0xC0C42ECu; UPD(0x0C06608Au, 3);  /* 0C066088 mov.l @(disp,pc),Rn */
	IF(0x0C06608Au); { u32 t_ = r10; PR = 0x0C06608Eu; r4 += r14; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C23D0, 0x0C0C23D0u, 0x0C06608Eu); }  /* 0C06608A jsr @Rn */
L_0C06608E: BLKS(0x0C06608Eu);
	r10 = 0xC0C2310u; UPD(0x0C066090u, 1);  /* 0C06608E mov.l @(disp,pc),Rn */
	r4 = r13 & 0xFF;  /* 0C066090 extu.b Rm,Rn */
	IF(0x0C066092u); { u32 t_ = r10; PR = 0x0C066096u; r5 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0C2310, 0x0C0C2310u, 0x0C066096u); }  /* 0C066092 jsr @Rn */
L_0C066096: BLKS(0x0C066096u);
	r8 = r0;  /* 0C066096 mov Rm,Rn */
	r0 = 0x64u;  /* 0C066098 mov #imm,Rn */
	IF(0x0C06609Au); r13 = R32(r0 + r14); UPD(0x0C06609Cu, 3);  /* 0C06609A mov.l @(r0,Rm),Rn */
	r3 = 0x5u;  /* 0C06609C mov #imm,Rn */
	r0 = 0x70u;  /* 0C06609E mov #imm,Rn */
	IF(0x0C0660A0u); r9 = R32(r0 + r14); UPD(0x0C0660A2u, 3);  /* 0C0660A0 mov.l @(r0,Rm),Rn */
	IF(0x0C0660A2u); ARG0(0x4D3Du); { s32 s_ = (s32)r3; if (s_ >= 0) r13 <<= (s_ & 31); else if ((s_ & 31) == 0) r13 = 0; else r13 >>= ((~s_ & 31) + 1); }  /* 0C0660A2 shld Rm,Rn */
	r0 = r14;  /* 0C0660A4 mov Rm,Rn */
	IF(0x0C0660A6u); r4 = (u32)(s32)(s8)R8(r0 + r1); UPD(0x0C0660A8u, 3);  /* 0C0660A6 mov.b @(r0,Rm),Rn */
	r9 += r13;  /* 0C0660A8 add Rm,Rn */
	r2 = 0xC233728u; UPD(0x0C0660ACu, 2);  /* 0C0660AA mov.l @(disp,pc),Rn */
	IF(0x0C0660ACu); r9 <<= 2;  /* 0C0660AC shll2 Rn */
	r0 = 0x40C04000u; UPD(0x0C0660B0u, 2);  /* 0C0660AE mov.l @(disp,pc),Rn */
	r9 += r2;  /* 0C0660B0 add Rm,Rn */
	r4 |= r0;  /* 0C0660B2 or Rm,Rn */
	W32(r9 + 0x8u, r4); UPD(0x0C0660B6u, 3);  /* 0C0660B4 mov.l Rm,@(disp,Rn) */
	r5 = 0xAu;  /* 0C0660B6 mov #imm,Rn */
	IF(0x0C0660B8u); { u32 t_ = r10; PR = 0x0C0660BCu; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0C2310, 0x0C0C2310u, 0x0C0660BCu); }  /* 0C0660B8 jsr @Rn */
L_0C0660BC: BLKS(0x0C0660BCu);
	T = (r0 & r0) == 0;  /* 0C0660BC tst Rm,Rn */
	{ u32 c_ = T; r11 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0660C6u, 4); goto L_0C0660C6; } goto L_0C0660C2; }  /* 0C0660BE bt/s */
L_0C0660C2: BLKS(0x0C0660C2u);
	{ r0 = r14; /* slot mov Rm,Rn */ UPD(0x0C066290u, 4); goto L_0C066290; }  /* 0C0660C2 bra */
L_0C0660C6: BLKS(0x0C0660C6u);
	r4 = 0xCu;  /* 0C0660C6 mov #imm,Rn */
	r4 += r14;  /* 0C0660C8 add Rm,Rn */
	r0 = r1;  /* 0C0660CA mov Rm,Rn */
	IF(0x0C0660CCu); r1 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C0660CEu, 4);  /* 0C0660CC mov.b @(r0,Rm),Rn */
	r8 = 0x40C04000u; UPD(0x0C0660D0u, 1);  /* 0C0660CE mov.l @(disp,pc),Rn */
	r1 |= r8;  /* 0C0660D0 or Rm,Rn */
	UPD(0x0C0660D2u, 1);
L_0C0660D2: BLKS(0x0C0660D2u);
	r0 = 0x70u;  /* 0C0660D2 mov #imm,Rn */
	IF(0x0C0660D4u); r2 = R32(r0 + r14); UPD(0x0C0660D6u, 2);  /* 0C0660D4 mov.l @(r0,Rm),Rn */
	r6 = r13;  /* 0C0660D6 mov Rm,Rn */
	r13 = 0xCu;  /* 0C0660D8 mov #imm,Rn */
	r0 = r11;  /* 0C0660DA mov Rm,Rn */
	r13 += r14;  /* 0C0660DC add Rm,Rn */
	r6 += r2;  /* 0C0660DE add Rm,Rn */
	r3 = 0x40C04000u; UPD(0x0C0660E2u, 6);  /* 0C0660E0 mov.l @(disp,pc),Rn */
	IF(0x0C0660E2u); r6 <<= 2;  /* 0C0660E2 shll2 Rn */
	IF(0x0C0660E4u); r5 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C0660E6u, 2);  /* 0C0660E4 mov.b @(r0,Rm),Rn */
	r7 = 0x40u;  /* 0C0660E6 mov #imm,Rn */
	W32(r9 + 0x4u, r1); UPD(0x0C0660EAu, 2);  /* 0C0660E8 mov.l Rm,@(disp,Rn) */
	r5 |= r3;  /* 0C0660EA or Rm,Rn */
	r10 = 0xC233728u; UPD(0x0C0660EEu, 2);  /* 0C0660EC mov.l @(disp,pc),Rn */
	r0 = r6;  /* 0C0660EE mov Rm,Rn */
	IF(0x0C0660F0u); W32(r0 + r10, r5); UPD(0x0C0660F2u, 2);  /* 0C0660F0 mov.l Rm,@(r0,Rn) */
	r9 = 0xFFFFFFFFu;  /* 0C0660F2 mov #imm,Rn */
	r11 = 0xC2B1A58u; UPD(0x0C0660F6u, 2);  /* 0C0660F4 mov.l @(disp,pc),Rn */
	r7 += r14;  /* 0C0660F6 add Rm,Rn */
	r0 = r11;  /* 0C0660F8 mov Rm,Rn */
	IF(0x0C0660FAu); r4 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C0660FCu, 3);  /* 0C0660FA mov.b @(r0,Rm),Rn */
	r1 = 0x5Cu;  /* 0C0660FC mov #imm,Rn */
	r0 = 0x1u;  /* 0C0660FE mov #imm,Rn */
	T = r0 >= r4;  /* 0C066100 cmp/hs Rm,Rn */
	{ u32 t_ = 0u - r9, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r0 = r_; }  /* 0C066102 negc Rm,Rn */
	r9 = R32(r7 + 0x24u); UPD(0x0C066106u, 5);  /* 0C066104 mov.l @(disp,Rm),Rn */
	r1 += r14;  /* 0C066106 add Rm,Rn */
	r8 = 0xC0626E0u; UPD(0x0C06610Au, 2);  /* 0C066108 mov.l @(disp,pc),Rn */
	IF(0x0C06610Au); r0 <<= 2;  /* 0C06610A shll2 Rn */
	r6 = R32(r7 + 0x2Cu); UPD(0x0C06610Eu, 2);  /* 0C06610C mov.l @(disp,Rm),Rn */
	r9 += 0xFFFFFFFFu;  /* 0C06610E add #imm,Rn */
	IF(0x0C066110u); r4 = R32(r0 + r1); UPD(0x0C066112u, 2);  /* 0C066110 mov.l @(r0,Rm),Rn */
	r7 = 0x80808000u; UPD(0x0C066114u, 1);  /* 0C066112 mov.l @(disp,pc),Rn */
	IF(0x0C066114u); { u32 t_ = r8; PR = 0x0C066118u; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C066118u); }  /* 0C066114 jsr @Rn */
L_0C066118: BLKS(0x0C066118u);
	r0 = r11;  /* 0C066118 mov Rm,Rn */
	IF(0x0C06611Au); r6 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C06611Cu, 2);  /* 0C06611A mov.b @(r0,Rm),Rn */
	r4 = r14;  /* 0C06611C mov Rm,Rn */
	r13 = 0xC0C23D0u; UPD(0x0C066120u, 2);  /* 0C06611E mov.l @(disp,pc),Rn */
	r11 = r6 & 0xFF;  /* 0C066120 extu.b Rm,Rn */
	r5 = 0xC0C432Cu; UPD(0x0C066124u, 2);  /* 0C066122 mov.l @(disp,pc),Rn */
	IF(0x0C066124u); { u32 t_ = r13; PR = 0x0C066128u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C23D0, 0x0C0C23D0u, 0x0C066128u); }  /* 0C066124 jsr @Rn */
L_0C066128: BLKS(0x0C066128u);
	r8 = 0xC0C2310u; UPD(0x0C06612Au, 1);  /* 0C066128 mov.l @(disp,pc),Rn */
	r4 = 0xCu;  /* 0C06612A mov #imm,Rn */
	r6 = 0x40u;  /* 0C06612C mov #imm,Rn */
	r5 = 0xC0C4336u; UPD(0x0C066130u, 3);  /* 0C06612E mov.l @(disp,pc),Rn */
	IF(0x0C066130u); { u32 t_ = r13; PR = 0x0C066134u; r4 += r14; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C23D0, 0x0C0C23D0u, 0x0C066134u); }  /* 0C066130 jsr @Rn */
L_0C066134: BLKS(0x0C066134u);
	r4 = r11 & 0xFF;  /* 0C066134 extu.b Rm,Rn */
	r5 = 0xAu;  /* 0C066136 mov #imm,Rn */
	IF(0x0C066138u); { u32 t_ = r8; PR = 0x0C06613Cu; r11 = 0x5u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0C2310, 0x0C0C2310u, 0x0C06613Cu); }  /* 0C066138 jsr @Rn */
L_0C06613C: BLKS(0x0C06613Cu);
	r2 = r0;  /* 0C06613C mov Rm,Rn */
	IF(0x0C06613Eu); ARG0(0x49BDu); { s32 s_ = (s32)r11; if (s_ >= 0) r9 <<= (s_ & 31); else if ((s_ & 31) == 0) r9 = 0; else r9 >>= ((~s_ & 31) + 1); }  /* 0C06613E shld Rm,Rn */
	r0 = 0x70u;  /* 0C066140 mov #imm,Rn */
	IF(0x0C066142u); r11 = R32(r0 + r14); UPD(0x0C066144u, 4);  /* 0C066142 mov.l @(r0,Rm),Rn */
	r4 = r2;  /* 0C066144 mov Rm,Rn */
	r0 = r14;  /* 0C066146 mov Rm,Rn */
	IF(0x0C066148u); r3 = (u32)(s32)(s8)R8(r0 + r1); UPD(0x0C06614Au, 3);  /* 0C066148 mov.b @(r0,Rm),Rn */
	r11 += r9;  /* 0C06614A add Rm,Rn */
	r13 = 0x40C04000u; UPD(0x0C06614Eu, 2);  /* 0C06614C mov.l @(disp,pc),Rn */
	IF(0x0C06614Eu); r11 <<= 2;  /* 0C06614E shll2 Rn */
	r3 |= r13;  /* 0C066150 or Rm,Rn */
	r11 += r10;  /* 0C066152 add Rm,Rn */
	W32(r11 + 0x8u, r3); UPD(0x0C066156u, 4);  /* 0C066154 mov.l Rm,@(disp,Rn) */
	IF(0x0C066156u); { u32 t_ = r8; PR = 0x0C06615Au; r5 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2310, 0x0C0C2310u, 0x0C06615Au); }  /* 0C066156 jsr @Rn */
L_0C06615A: BLKS(0x0C06615Au);
	T = (r0 & r0) == 0;  /* 0C06615A tst Rm,Rn */
	{ u32 c_ = T; r13 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C066164u, 4); goto L_0C066164; } goto L_0C066160; }  /* 0C06615C bt/s */
L_0C066160: BLKS(0x0C066160u);
	{ r0 = r14; /* slot mov Rm,Rn */ UPD(0x0C066280u, 4); goto L_0C066280; }  /* 0C066160 bra */
L_0C066164: BLKS(0x0C066164u);
	r8 = 0xCu;  /* 0C066164 mov #imm,Rn */
	r8 += r14;  /* 0C066166 add Rm,Rn */
	r0 = r1;  /* 0C066168 mov Rm,Rn */
	IF(0x0C06616Au); r1 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C06616Cu, 4);  /* 0C06616A mov.b @(r0,Rm),Rn */
	r10 = 0x40C04000u; UPD(0x0C06616Eu, 1);  /* 0C06616C mov.l @(disp,pc),Rn */
	r1 |= r10;  /* 0C06616E or Rm,Rn */
	UPD(0x0C066170u, 1);
L_0C066170: BLKS(0x0C066170u);
	r0 = 0x70u;  /* 0C066170 mov #imm,Rn */
	IF(0x0C066172u); r2 = R32(r0 + r14); UPD(0x0C066174u, 2);  /* 0C066172 mov.l @(r0,Rm),Rn */
	r3 = 0xCu;  /* 0C066174 mov #imm,Rn */
	W32(r11 + 0x4u, r1); UPD(0x0C066178u, 2);  /* 0C066176 mov.l Rm,@(disp,Rn) */
	r0 = r13;  /* 0C066178 mov Rm,Rn */
	r3 += r14;  /* 0C06617A add Rm,Rn */
	IF(0x0C06617Cu); r6 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C06617Eu, 3);  /* 0C06617C mov.b @(r0,Rm),Rn */
	r9 += r2;  /* 0C06617E add Rm,Rn */
	r1 = 0x40C04000u; UPD(0x0C066182u, 2);  /* 0C066180 mov.l @(disp,pc),Rn */
	IF(0x0C066182u); r9 <<= 2;  /* 0C066182 shll2 Rn */
	r0 = 0xC233728u; UPD(0x0C066186u, 2);  /* 0C066184 mov.l @(disp,pc),Rn */
	r6 |= r1;  /* 0C066186 or Rm,Rn */
	IF(0x0C066188u); W32(r0 + r9, r6); UPD(0x0C06618Au, 2);  /* 0C066188 mov.l Rm,@(r0,Rn) */
	r4 = 0xFFFFFFFFu;  /* 0C06618A mov #imm,Rn */
	r5 = 0xC3C542Au; UPD(0x0C06618Eu, 2);  /* 0C06618C mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r5); UPD(0x0C066190u, 1);  /* 0C06618E mov.b @Rm,Rn */
	T = r0 == 0x2u;  /* 0C066190 cmp/eq #imm,r0 */
	{ u32 t_ = 0u - r4, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r11 = r_; }  /* 0C066192 negc Rm,Rn */
	r0 = r12;  /* 0C066194 mov Rm,Rn */
	T = r0 == 0x1u;  /* 0C066196 cmp/eq #imm,r0 */
	{ u32 t_ = 0u - r4, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r9 = r_; }  /* 0C066198 negc Rm,Rn */
	r11 |= r9;  /* 0C06619A or Rm,Rn */
	T = (r11 & r11) == 0;  /* 0C06619C tst Rm,Rn */
	if (T) { UPD(0x0C066262u, 10); goto L_0C066262; }  /* 0C06619E bt */
L_0C0661A0: BLKS(0x0C0661A0u);
	r0 = 0x40u;  /* 0C0661A0 mov #imm,Rn */
	r0 += r14;  /* 0C0661A2 add Rm,Rn */
	r5 = 0xC17368Cu; UPD(0x0C0661A6u, 3);  /* 0C0661A4 mov.l @(disp,pc),Rn */
	r9 = R32(r0 + 0x24u); UPD(0x0C0661A8u, 1);  /* 0C0661A6 mov.l @(disp,Rm),Rn */
	r10 = 0xC0626E0u; UPD(0x0C0661AAu, 1);  /* 0C0661A8 mov.l @(disp,pc),Rn */
	r9 += 0xFFFFFFFEu;  /* 0C0661AA add #imm,Rn */
	r4 = R32(r5); UPD(0x0C0661AEu, 2);  /* 0C0661AC mov.l @Rm,Rn */
	r6 = R32(r0 + 0x28u); UPD(0x0C0661B0u, 1);  /* 0C0661AE mov.l @(disp,Rm),Rn */
	r5 = r9;  /* 0C0661B0 mov Rm,Rn */
	r7 = 0x80808000u; UPD(0x0C0661B4u, 2);  /* 0C0661B2 mov.l @(disp,pc),Rn */
	IF(0x0C0661B4u); { u32 t_ = r10; PR = 0x0C0661B8u; r6 += 0x3u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C0661B8u); }  /* 0C0661B4 jsr @Rn */
L_0C0661B8: BLKS(0x0C0661B8u);
	r8 = 0xC3C8690u; UPD(0x0C0661BAu, 1);  /* 0C0661B8 mov.l @(disp,pc),Rn */
	r3 = 0x40u;  /* 0C0661BA mov #imm,Rn */
	r3 += r14;  /* 0C0661BC add Rm,Rn */
	r1 = R32(r3 + 0x28u); UPD(0x0C0661C0u, 3);  /* 0C0661BE mov.l @(disp,Rm),Rn */
	r0 = r8;  /* 0C0661C0 mov Rm,Rn */
	r11 = 0xC0C23D0u; UPD(0x0C0661C4u, 2);  /* 0C0661C2 mov.l @(disp,pc),Rn */
	r1 += 0x10u;  /* 0C0661C4 add #imm,Rn */
	IF(0x0C0661C6u); r2 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C0661C8u, 2);  /* 0C0661C6 mov.b @(r0,Rm),Rn */
	r4 = r14;  /* 0C0661C8 mov Rm,Rn */
	r5 = 0xC0C4376u; UPD(0x0C0661CCu, 2);  /* 0C0661CA mov.l @(disp,pc),Rn */
	r13 = r2 & 0xFF;  /* 0C0661CC extu.b Rm,Rn */
	W32(r3 + 0x34u, r1); UPD(0x0C0661D0u, 2);  /* 0C0661CE mov.l Rm,@(disp,Rn) */
	r8 = 0xC0C2310u; UPD(0x0C0661D2u, 1);  /* 0C0661D0 mov.l @(disp,pc),Rn */
	IF(0x0C0661D2u); { u32 t_ = r11; PR = 0x0C0661D6u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C23D0, 0x0C0C23D0u, 0x0C0661D6u); }  /* 0C0661D2 jsr @Rn */
L_0C0661D6: BLKS(0x0C0661D6u);
	r5 = 0xC0C4380u; UPD(0x0C0661D8u, 1);  /* 0C0661D6 mov.l @(disp,pc),Rn */
	r4 = 0xCu;  /* 0C0661D8 mov #imm,Rn */
	r6 = 0x40u;  /* 0C0661DA mov #imm,Rn */
	IF(0x0C0661DCu); { u32 t_ = r11; PR = 0x0C0661E0u; r4 += r14; /* slot add Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0C23D0, 0x0C0C23D0u, 0x0C0661E0u); }  /* 0C0661DC jsr @Rn */
L_0C0661E0: BLKS(0x0C0661E0u);
	r4 = r13 & 0xFF;  /* 0C0661E0 extu.b Rm,Rn */
	r5 = 0xAu;  /* 0C0661E2 mov #imm,Rn */
	IF(0x0C0661E4u); { u32 t_ = r8; PR = 0x0C0661E8u; r10 = 0x5u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0C2310, 0x0C0C2310u, 0x0C0661E8u); }  /* 0C0661E4 jsr @Rn */
L_0C0661E8: BLKS(0x0C0661E8u);
	r11 = r9;  /* 0C0661E8 mov Rm,Rn */
	IF(0x0C0661EAu); ARG0(0x4BADu); { s32 s_ = (s32)r10; if (s_ >= 0) r11 <<= (s_ & 31); else if ((s_ & 31) == 0) r11 = 0; else r11 >>= ((~s_ & 31) + 1); }  /* 0C0661EA shld Rm,Rn */
	r6 = r0;  /* 0C0661EC mov Rm,Rn */
	r0 = 0x74u;  /* 0C0661EE mov #imm,Rn */
	IF(0x0C0661F0u); r10 = R32(r0 + r14); UPD(0x0C0661F2u, 5);  /* 0C0661F0 mov.l @(r0,Rm),Rn */
	r5 = 0xAu;  /* 0C0661F2 mov #imm,Rn */
	r0 = r14;  /* 0C0661F4 mov Rm,Rn */
	IF(0x0C0661F6u); r13 = (u32)(s32)(s8)R8(r0 + r1); UPD(0x0C0661F8u, 3);  /* 0C0661F6 mov.b @(r0,Rm),Rn */
	r10 += r11;  /* 0C0661F8 add Rm,Rn */
	r4 = 0xC233728u; UPD(0x0C0661FCu, 2);  /* 0C0661FA mov.l @(disp,pc),Rn */
	IF(0x0C0661FCu); r10 <<= 2;  /* 0C0661FC shll2 Rn */
	r0 = 0x40C04000u; UPD(0x0C066200u, 2);  /* 0C0661FE mov.l @(disp,pc),Rn */
	r10 += r4;  /* 0C066200 add Rm,Rn */
	r13 |= r0;  /* 0C066202 or Rm,Rn */
	W32(r10 + 0x8u, r13); UPD(0x0C066206u, 3);  /* 0C066204 mov.l Rm,@(disp,Rn) */
	r4 = r6;  /* 0C066206 mov Rm,Rn */
	IF(0x0C066208u); { u32 t_ = r8; PR = 0x0C06620Cu; r13 = r11; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0C2310, 0x0C0C2310u, 0x0C06620Cu); }  /* 0C066208 jsr @Rn */
L_0C06620C: BLKS(0x0C06620Cu);
	T = (r0 & r0) == 0;  /* 0C06620C tst Rm,Rn */
	{ u32 c_ = !T; r11 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C066270u, 4); goto L_0C066270; } goto L_0C066212; }  /* 0C06620E bf/s */
L_0C066212: BLKS(0x0C066212u);
	r7 = 0xCu;  /* 0C066212 mov #imm,Rn */
	r7 += r14;  /* 0C066214 add Rm,Rn */
	r0 = r1;  /* 0C066216 mov Rm,Rn */
	IF(0x0C066218u); r1 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C06621Au, 5);  /* 0C066218 mov.b @(r0,Rm),Rn */
	r4 = 0x40C04000u; UPD(0x0C06621Cu, 1);  /* 0C06621A mov.l @(disp,pc),Rn */
	r1 |= r4;  /* 0C06621C or Rm,Rn */
	UPD(0x0C06621Eu, 1);
L_0C06621E: BLKS(0x0C06621Eu);
	r0 = 0x74u;  /* 0C06621E mov #imm,Rn */
	IF(0x0C066220u); r6 = R32(r0 + r14); UPD(0x0C066222u, 2);  /* 0C066220 mov.l @(r0,Rm),Rn */
	r7 = 0xCu;  /* 0C066222 mov #imm,Rn */
	r0 = r11;  /* 0C066224 mov Rm,Rn */
	r7 += r14;  /* 0C066226 add Rm,Rn */
	IF(0x0C066228u); r4 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C06622Au, 4);  /* 0C066228 mov.b @(r0,Rm),Rn */
	r13 += r6;  /* 0C06622A add Rm,Rn */
	r0 = 0x40C04000u; UPD(0x0C06622Eu, 2);  /* 0C06622C mov.l @(disp,pc),Rn */
	IF(0x0C06622Eu); r13 <<= 2;  /* 0C06622E shll2 Rn */
	W32(r10 + 0x4u, r1); UPD(0x0C066232u, 2);  /* 0C066230 mov.l Rm,@(disp,Rn) */
	r4 |= r0;  /* 0C066232 or Rm,Rn */
	r5 = 0xC233728u; UPD(0x0C066236u, 2);  /* 0C066234 mov.l @(disp,pc),Rn */
	r0 = r13;  /* 0C066236 mov Rm,Rn */
	IF(0x0C066238u); W32(r0 + r5, r4); UPD(0x0C06623Au, 2);  /* 0C066238 mov.l Rm,@(r0,Rn) */
	r3 = 0x40u;  /* 0C06623A mov #imm,Rn */
	r10 = 0xC3C8690u; UPD(0x0C06623Eu, 2);  /* 0C06623C mov.l @(disp,pc),Rn */
	r2 = 0x1u;  /* 0C06623E mov #imm,Rn */
	r0 = r10;  /* 0C066240 mov Rm,Rn */
	IF(0x0C066242u); r8 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C066244u, 3);  /* 0C066242 mov.b @(r0,Rm),Rn */
	r3 += r14;  /* 0C066244 add Rm,Rn */
	T = r2 >= r8;  /* 0C066246 cmp/hs Rm,Rn */
	r1 = 0xFFFFFFFFu;  /* 0C066248 mov #imm,Rn */
	r13 = R32(r3 + 0x28u); UPD(0x0C06624Cu, 4);  /* 0C06624A mov.l @(disp,Rm),Rn */
	{ u32 t_ = 0u - r1, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r0 = r_; }  /* 0C06624C negc Rm,Rn */
	r12 = 0xC0626E0u; UPD(0x0C066250u, 2);  /* 0C06624E mov.l @(disp,pc),Rn */
	r11 = 0x5Cu;  /* 0C066250 mov #imm,Rn */
	IF(0x0C066252u); r0 <<= 2;  /* 0C066252 shll2 Rn */
	r13 += 0x13u;  /* 0C066254 add #imm,Rn */
	r11 += r14;  /* 0C066256 add Rm,Rn */
	IF(0x0C066258u); r4 = R32(r0 + r11); UPD(0x0C06625Au, 5);  /* 0C066258 mov.l @(r0,Rm),Rn */
	r5 = r9;  /* 0C06625A mov Rm,Rn */
	r7 = 0x80808000u; UPD(0x0C06625Eu, 2);  /* 0C06625C mov.l @(disp,pc),Rn */
	IF(0x0C06625Eu); { u32 t_ = r12; PR = 0x0C066262u; r6 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C066262u); }  /* 0C06625E jsr @Rn */
L_0C066262: BLKS(0x0C066262u);
	{ r14 += 0x78u; /* slot add #imm,Rn */ UPD(0x0C06600Cu, 3); goto L_0C06600C; }  /* 0C066262 bra */
L_0C066270: BLKS(0x0C066270u);
	r0 = r14;  /* 0C066270 mov Rm,Rn */
	IF(0x0C066272u); r1 = (u32)(s32)(s8)R8(r0 + r1); UPD(0x0C066274u, 2);  /* 0C066272 mov.b @(r0,Rm),Rn */
	r6 = 0x40C04000u; UPD(0x0C066276u, 1);  /* 0C066274 mov.l @(disp,pc),Rn */
	{ r1 |= r6; /* slot or Rm,Rn */ UPD(0x0C06621Eu, 3); goto L_0C06621E; }  /* 0C066276 bra */
L_0C066280: BLKS(0x0C066280u);
	IF(0x0C066280u); r1 = (u32)(s32)(s8)R8(r0 + r1); UPD(0x0C066282u, 1);  /* 0C066280 mov.b @(r0,Rm),Rn */
	r7 = 0x40C04000u; UPD(0x0C066284u, 1);  /* 0C066282 mov.l @(disp,pc),Rn */
	{ r1 |= r7; /* slot or Rm,Rn */ UPD(0x0C066170u, 3); goto L_0C066170; }  /* 0C066284 bra */
L_0C066290: BLKS(0x0C066290u);
	IF(0x0C066290u); r1 = (u32)(s32)(s8)R8(r0 + r1); UPD(0x0C066292u, 1);  /* 0C066290 mov.b @(r0,Rm),Rn */
	r0 = 0x40C04000u; UPD(0x0C066294u, 1);  /* 0C066292 mov.l @(disp,pc),Rn */
	{ r1 |= r0; /* slot or Rm,Rn */ UPD(0x0C0660D2u, 3); goto L_0C0660D2; }  /* 0C066294 bra */
}

void blk_f_0C066300(sh3_t *c)
{
	LOCALS;
L_0C066300: BLKS(0x0C066300u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C066302u, 1);  /* 0C066300 mov.l Rm,@-Rn */
	r0 = 0x2u;  /* 0C066302 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C066306u, 2);  /* 0C066304 mov.l Rm,@-Rn */
	r7 = 0x1u;  /* 0C066306 mov #imm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C06630Au, 2);  /* 0C066308 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06630Cu, 1);  /* 0C06630A mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06630Eu, 1);  /* 0C06630C mov.l Rm,@-Rn */
	r11 = 0xC3C542Au; UPD(0x0C066310u, 1);  /* 0C06630E mov.l @(disp,pc),Rn */
	IF(0x0C066310u); r15 -= 4; W32(r15, PR); UPD(0x0C066312u, 1);  /* 0C066310 sts.l pr,@-Rn */
	r10 = (u32)(s32)(s8)R8(r11); UPD(0x0C066314u, 1);  /* 0C066312 mov.b @Rm,Rn */
	r6 = 0xC3C414Cu; UPD(0x0C066316u, 1);  /* 0C066314 mov.l @(disp,pc),Rn */
	r8 = r10 & 0xFF;  /* 0C066316 extu.b Rm,Rn */
	T = r0 >= r8;  /* 0C066318 cmp/hs Rm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r6); r6 += 1; r9 = v_; } UPD(0x0C06631Cu, 3);  /* 0C06631A mov.b @Rm+,Rn */
	IF(0x0C06631Cu); r0 = T;  /* 0C06631C movt Rn */
	T = (r9 & r9) == 0;  /* 0C06631E tst Rm,Rn */
	IF(0x0C066320u); r3 = T;  /* 0C066320 movt Rn */
	T = r8 > r7;  /* 0C066322 cmp/hi Rm,Rn */
	r5 = (u32)(s32)(s8)R8(r6); UPD(0x0C066326u, 5);  /* 0C066324 mov.b @Rm,Rn */
	IF(0x0C066326u); r4 = T;  /* 0C066326 movt Rn */
	T = (r5 & r5) == 0;  /* 0C066328 tst Rm,Rn */
	IF(0x0C06632Au); r2 = T;  /* 0C06632A movt Rn */
	r4 &= r3;  /* 0C06632C and Rm,Rn */
	r0 &= r3;  /* 0C06632E and Rm,Rn */
	r4 &= r2;  /* 0C066330 and Rm,Rn */
	r0 |= r4;  /* 0C066332 or Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C066334 tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0663A0u, 11); goto L_0C0663A0; } goto L_0C06633A; }  /* 0C066336 bt/s */
L_0C06633A: BLKS(0x0C06633Au);
	r5 = 0xC238029u; UPD(0x0C06633Cu, 2);  /* 0C06633A mov.l @(disp,pc),Rn */
	r10 = 0xC3C43B8u; UPD(0x0C06633Eu, 1);  /* 0C06633C mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s8)R8(r5); UPD(0x0C066340u, 1);  /* 0C06633E mov.b @Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r10); UPD(0x0C066342u, 1);  /* 0C066340 mov.b @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C066342 tst Rm,Rn */
	IF(0x0C066344u); r1 = T;  /* 0C066344 movt Rn */
	T = r0 == 0x1u;  /* 0C066346 cmp/eq #imm,r0 */
	IF(0x0C066348u); r4 = T;  /* 0C066348 movt Rn */
	T = (r1 & r4) == 0;  /* 0C06634A tst Rm,Rn */
	if (T) { UPD(0x0C066390u, 8); goto L_0C066390; }  /* 0C06634C bt */
L_0C06634E: BLKS(0x0C06634Eu);
	r11 = 0xC3C848Cu; UPD(0x0C066350u, 1);  /* 0C06634E mov.l @(disp,pc),Rn */
	W8(r11, r0); UPD(0x0C066352u, 1);  /* 0C066350 mov.b Rm,@Rn */
L_0C066352: BLKS(0x0C066352u);
	r7 = 0xC173690u; UPD(0x0C066354u, 1);  /* 0C066352 mov.l @(disp,pc),Rn */
	r5 = 0x1Au;  /* 0C066354 mov #imm,Rn */
	r9 = 0xC0626E0u; UPD(0x0C066358u, 2);  /* 0C066356 mov.l @(disp,pc),Rn */
	r6 = 0x5u;  /* 0C066358 mov #imm,Rn */
	r8 = 0x80808000u; UPD(0x0C06635Cu, 2);  /* 0C06635A mov.l @(disp,pc),Rn */
	r4 = R32(r7); UPD(0x0C06635Eu, 1);  /* 0C06635C mov.l @Rm,Rn */
	IF(0x0C06635Eu); { u32 t_ = r9; PR = 0x0C066362u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C066362u); }  /* 0C06635E jsr @Rn */
L_0C066362: BLKS(0x0C066362u);
	r6 = 0xC173694u; UPD(0x0C066364u, 1);  /* 0C066362 mov.l @(disp,pc),Rn */
	r7 = r8;  /* 0C066364 mov Rm,Rn */
	r4 = R32(r6); UPD(0x0C066368u, 2);  /* 0C066366 mov.l @Rm,Rn */
	r5 = 0x19u;  /* 0C066368 mov #imm,Rn */
	IF(0x0C06636Au); { u32 t_ = r9; PR = 0x0C06636Eu; r6 = 0x5u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C06636Eu); }  /* 0C06636A jsr @Rn */
L_0C06636E: BLKS(0x0C06636Eu);
	r9 = 0xC062F50u; UPD(0x0C066370u, 1);  /* 0C06636E mov.l @(disp,pc),Rn */
	r5 = 0x1Au;  /* 0C066370 mov #imm,Rn */
	r4 = (u32)(s32)(s8)R8(r10); UPD(0x0C066374u, 2);  /* 0C066372 mov.b @Rm,Rn */
	IF(0x0C066374u); { u32 t_ = r9; PR = 0x0C066378u; r6 = 0x14u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062F50, 0x0C062F50u, 0x0C066378u); }  /* 0C066374 jsr @Rn */
L_0C066378: BLKS(0x0C066378u);
	r4 = (u32)(s32)(s8)R8(r11); UPD(0x0C06637Au, 1);  /* 0C066378 mov.b @Rm,Rn */
	r5 = 0x19u;  /* 0C06637A mov #imm,Rn */
	r6 = 0x14u;  /* 0C06637C mov #imm,Rn */
	r3 = r9;  /* 0C06637E mov Rm,Rn */
	r15 = r14;  /* 0C066380 mov Rm,Rn */
	IF(0x0C066382u); PR = R32(r15); r15 += 4; UPD(0x0C066384u, 5);  /* 0C066382 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C066386u, 1);  /* 0C066384 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C066388u, 1);  /* 0C066386 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06638Au, 1);  /* 0C066388 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06638Cu, 1);  /* 0C06638A mov.l @Rm+,Rn */
	IF(0x0C06638Cu); { u32 tv_ = r3; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C062F50u: TAIL(blk_f_0C062F50); default: JUMPD(tv_); } }  /* 0C06638C jmp @Rn */
L_0C066390: BLKS(0x0C066390u);
	r11 = 0xC3C848Cu; UPD(0x0C066392u, 1);  /* 0C066390 mov.l @(disp,pc),Rn */
	{ IF(0x0C066394u); ; /* slot nop */ UPD(0x0C066352u, 3); goto L_0C066352; }  /* 0C066392 bra */
L_0C0663A0: BLKS(0x0C0663A0u);
	r15 = r14;  /* 0C0663A0 mov Rm,Rn */
	IF(0x0C0663A2u); PR = R32(r15); r15 += 4; UPD(0x0C0663A4u, 2);  /* 0C0663A2 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0663A6u, 1);  /* 0C0663A4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0663A8u, 1);  /* 0C0663A6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0663AAu, 1);  /* 0C0663A8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0663ACu, 1);  /* 0C0663AA mov.l @Rm+,Rn */
	IF(0x0C0663ACu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0663AC rts */
}

/* FUN_0c0663e0 */
void blk_f_0C0663E0(sh3_t *c)
{
	LOCALS;
L_0C0663E0: BLKS(0x0C0663E0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0663E2u, 1);  /* 0C0663E0 mov.l Rm,@-Rn */
	r0 = (u32)(s32)(s8)r4;  /* 0C0663E2 exts.b Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0663E6u, 2);  /* 0C0663E4 mov.l Rm,@-Rn */
	T = r0 == 0x4u;  /* 0C0663E6 cmp/eq #imm,r0 */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0663EAu, 2);  /* 0C0663E8 mov.l Rm,@-Rn */
	r0 = 0x0u;  /* 0C0663EA mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0663EEu, 2);  /* 0C0663EC mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s8)r5;  /* 0C0663EE exts.b Rm,Rn */
	IF(0x0C0663F0u); r15 -= 4; W32(r15, PR); UPD(0x0C0663F2u, 2);  /* 0C0663F0 sts.l pr,@-Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C066410u, 3); goto L_0C066410; } UPD(0x0C0663F6u, 1); goto L_0C0663F6; }  /* 0C0663F2 bt/s */
L_0C0663F6: BLKS(0x0C0663F6u);
	r15 = r14;  /* 0C0663F6 mov Rm,Rn */
	IF(0x0C0663F8u); PR = R32(r15); r15 += 4; UPD(0x0C0663FAu, 2);  /* 0C0663F8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0663FCu, 1);  /* 0C0663FA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0663FEu, 1);  /* 0C0663FC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C066400u, 1);  /* 0C0663FE mov.l @Rm+,Rn */
	IF(0x0C066400u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C066400 rts */
L_0C066410: BLKS(0x0C066410u);
	r0 = 0x3u;  /* 0C066410 mov #imm,Rn */
	T = r10 > r0;  /* 0C066412 cmp/hi Rm,Rn */
	{ u32 c_ = T; r0 = r10; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0663F6u, 5); goto L_0C0663F6; } goto L_0C066418; }  /* 0C066414 bt/s */
L_0C066418: BLKS(0x0C066418u);
	r1 = r10;  /* 0C066418 mov Rm,Rn */
	r0 = 0xC066424u;  /* 0C06641A mova @(disp,pc),r0 */
	IF(0x0C06641Cu); r3 = (u32)(s32)(s8)R8(r0 + r1); UPD(0x0C06641Eu, 4);  /* 0C06641C mov.b @(r0,Rm),Rn */
	IF(0x0C06641Eu); { u32 tv_ = (r3 + 0x0C066422u); u32 t_ = PHYS(tv_); IF(0x0C066420u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C066430u: goto L_0C066430; case 0x0C066450u: goto L_0C066450; case 0x0C066480u: goto L_0C066480; case 0x0C066490u: goto L_0C066490; default: JUMPD(tv_); } }  /* 0C06641E braf Rn */
L_0C066430: BLKS(0x0C066430u);
	r8 = 0xC067170u; UPD(0x0C066432u, 1);  /* 0C066430 mov.l @(disp,pc),Rn */
	IF(0x0C066432u); { u32 t_ = r8; PR = 0x0C066436u; IF(0x0C066434u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C067170, 0x0C067170u, 0x0C066436u); }  /* 0C066432 jsr @Rn */
L_0C066436: BLKS(0x0C066436u);
	T = (r0 & r0) == 0;  /* 0C066436 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0663F6u, 4); goto L_0C0663F6; } goto L_0C06643C; }  /* 0C066438 bf/s */
L_0C06643C: BLKS(0x0C06643Cu);
	r7 = r10;  /* 0C06643C mov Rm,Rn */
	r7 += 0x1u;  /* 0C06643E add #imm,Rn */
	UPD(0x0C066440u, 3);
L_0C066440: BLKS(0x0C066440u);
	r10 = (u32)(s32)(s8)r7;  /* 0C066440 exts.b Rm,Rn */
	UPD(0x0C066442u, 1);
L_0C066442: BLKS(0x0C066442u);
	{ r0 = r10; /* slot mov Rm,Rn */ UPD(0x0C0663F6u, 3); goto L_0C0663F6; }  /* 0C066442 bra */
L_0C066450: BLKS(0x0C066450u);
	r2 = 0xC172B60u; UPD(0x0C066452u, 1);  /* 0C066450 mov.l @(disp,pc),Rn */
	r5 = 0x7u;  /* 0C066452 mov #imm,Rn */
	r9 = 0xC0626E0u; UPD(0x0C066456u, 2);  /* 0C066454 mov.l @(disp,pc),Rn */
	r6 = 0x6u;  /* 0C066456 mov #imm,Rn */
	r8 = 0xC0404000u; UPD(0x0C06645Au, 2);  /* 0C066458 mov.l @(disp,pc),Rn */
	r4 = R32(r2); UPD(0x0C06645Cu, 1);  /* 0C06645A mov.l @Rm,Rn */
	IF(0x0C06645Cu); { u32 t_ = r9; PR = 0x0C066460u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C066460u); }  /* 0C06645C jsr @Rn */
L_0C066460: BLKS(0x0C066460u);
	r4 = 0xC172B40u; UPD(0x0C066462u, 1);  /* 0C066460 mov.l @(disp,pc),Rn */
	r5 = 0x6u;  /* 0C066462 mov #imm,Rn */
	r6 = 0x6u;  /* 0C066464 mov #imm,Rn */
	IF(0x0C066466u); { u32 t_ = r9; PR = 0x0C06646Au; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C06646Au); }  /* 0C066466 jsr @Rn */
L_0C06646A: BLKS(0x0C06646Au);
	r6 = 0xC297738u; UPD(0x0C06646Cu, 1);  /* 0C06646A mov.l @(disp,pc),Rn */
	r5 = 0x100u; UPD(0x0C06646Eu, 1);  /* 0C06646C mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)R16(r6); UPD(0x0C066470u, 1);  /* 0C06646E mov.w @Rm,Rn */
	T = (r5 & r4) == 0;  /* 0C066470 tst Rm,Rn */
	if (T) { UPD(0x0C066442u, 4); goto L_0C066442; }  /* 0C066472 bt */
L_0C066474: BLKS(0x0C066474u);
	r7 = r10;  /* 0C066474 mov Rm,Rn */
	{ r7 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C066440u, 4); goto L_0C066440; }  /* 0C066476 bra */
L_0C066480: BLKS(0x0C066480u);
	r9 = 0xC0626E0u; UPD(0x0C066482u, 1);  /* 0C066480 mov.l @(disp,pc),Rn */
	r5 = 0x7u;  /* 0C066482 mov #imm,Rn */
	r4 = 0xC172B74u; UPD(0x0C066486u, 2);  /* 0C066484 mov.l @(disp,pc),Rn */
	r7 = 0xC0404000u; UPD(0x0C066488u, 1);  /* 0C066486 mov.l @(disp,pc),Rn */
	IF(0x0C066488u); { u32 t_ = r9; PR = 0x0C06648Cu; r6 = 0x6u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C06648Cu); }  /* 0C066488 jsr @Rn */
L_0C06648C: BLKS(0x0C06648Cu);
	{ IF(0x0C06648Eu); ; /* slot nop */ UPD(0x0C06646Au, 3); goto L_0C06646A; }  /* 0C06648C bra */
L_0C066490: BLKS(0x0C066490u);
	r7 = 0xC2322C0u; UPD(0x0C066492u, 1);  /* 0C066490 mov.l @(disp,pc),Rn */
	r0 = 0x10u;  /* 0C066492 mov #imm,Rn */
	r3 = 0xC234BACu; UPD(0x0C066496u, 2);  /* 0C066494 mov.l @(disp,pc),Rn */
	r2 = 0x1Fu;  /* 0C066496 mov #imm,Rn */
	UPD(0x0C066498u, 1);
L_0C066498: BLKS(0x0C066498u);
	IF(0x0C066498u); r8 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C06649Au, 1);  /* 0C066498 mov.b @(r0,Rm),Rn */
	r10 = r0;  /* 0C06649A mov Rm,Rn */
	IF(0x0C06649Cu); W8(r0 + r7, r8); UPD(0x0C06649Eu, 2);  /* 0C06649C mov.b Rm,@(r0,Rn) */
	r10 += 0x1u;  /* 0C06649E add #imm,Rn */
	r0 = (u32)(s32)(s16)r10;  /* 0C0664A0 exts.w Rm,Rn */
	T = (s32)r0 > (s32)r2;  /* 0C0664A2 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C066498u, 6); goto L_0C066498; }  /* 0C0664A4 bf */
L_0C0664A6: BLKS(0x0C0664A6u);
	r9 = 0xC2322D0u; UPD(0x0C0664A8u, 1);  /* 0C0664A6 mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s8)R8(r9); UPD(0x0C0664AAu, 1);  /* 0C0664A8 mov.b @Rm,Rn */
	r9 += 0xFFFFFFF0u;  /* 0C0664AA add #imm,Rn */
	r9 += 0x11u;  /* 0C0664AC add #imm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r9); r9 += 1; r8 = v_; } UPD(0x0C0664B0u, 3);  /* 0C0664AE mov.b @Rm+,Rn */
	r3 = r2 & 0xFF;  /* 0C0664B0 extu.b Rm,Rn */
	r0 = 0xC2380C8u; UPD(0x0C0664B4u, 2);  /* 0C0664B2 mov.l @(disp,pc),Rn */
	r10 = r8 & 0xFF;  /* 0C0664B4 extu.b Rm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r9); r9 += 1; r6 = v_; } UPD(0x0C0664B8u, 2);  /* 0C0664B6 mov.b @Rm+,Rn */
	W32(r0, r3); UPD(0x0C0664BAu, 1);  /* 0C0664B8 mov.l Rm,@Rn */
	r5 = r6 & 0xFF;  /* 0C0664BA extu.b Rm,Rn */
	r7 = 0xC2289E4u; UPD(0x0C0664BEu, 2);  /* 0C0664BC mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s8)R8(r9); UPD(0x0C0664C0u, 1);  /* 0C0664BE mov.b @Rm,Rn */
	r4 = 0xC233720u; UPD(0x0C0664C2u, 1);  /* 0C0664C0 mov.l @(disp,pc),Rn */
	r3 = r2 & 0xFF;  /* 0C0664C2 extu.b Rm,Rn */
	r0 = 0xC286310u; UPD(0x0C0664C6u, 2);  /* 0C0664C4 mov.l @(disp,pc),Rn */
	W32(r7, r10); UPD(0x0C0664C8u, 1);  /* 0C0664C6 mov.l Rm,@Rn */
	W32(r4, r5); UPD(0x0C0664CAu, 1);  /* 0C0664C8 mov.l Rm,@Rn */
	r10 = 0x0u;  /* 0C0664CA mov #imm,Rn */
	{ W32(r0, r3); /* slot mov.l Rm,@Rn */ UPD(0x0C066442u, 4); goto L_0C066442; }  /* 0C0664CC bra */
}

/* FUN_0c066510 */
void blk_f_0C066510(sh3_t *c)
{
	LOCALS;
L_0C066510: BLKS(0x0C066510u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C066512u, 1);  /* 0C066510 mov.l Rm,@-Rn */
	r0 = (u32)(s32)(s8)r4;  /* 0C066512 exts.b Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C066516u, 2);  /* 0C066514 mov.l Rm,@-Rn */
	T = r0 == 0x9u;  /* 0C066516 cmp/eq #imm,r0 */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C06651Au, 2);  /* 0C066518 mov.l Rm,@-Rn */
	r0 = 0x0u;  /* 0C06651A mov #imm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06651Eu, 2);  /* 0C06651C mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C066520u, 1);  /* 0C06651E mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C066522u, 1);  /* 0C066520 mov.l Rm,@-Rn */
	r12 = (u32)(s32)(s8)r5;  /* 0C066522 exts.b Rm,Rn */
	IF(0x0C066524u); r15 -= 4; W32(r15, PR); UPD(0x0C066526u, 2);  /* 0C066524 sts.l pr,@-Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C066540u, 3); goto L_0C066540; } UPD(0x0C06652Au, 1); goto L_0C06652A; }  /* 0C066526 bt/s */
L_0C06652A: BLKS(0x0C06652Au);
	r15 = r14;  /* 0C06652A mov Rm,Rn */
	IF(0x0C06652Cu); PR = R32(r15); r15 += 4; UPD(0x0C06652Eu, 2);  /* 0C06652C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C066530u, 1);  /* 0C06652E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C066532u, 1);  /* 0C066530 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C066534u, 1);  /* 0C066532 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C066536u, 1);  /* 0C066534 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C066538u, 1);  /* 0C066536 mov.l @Rm+,Rn */
	IF(0x0C066538u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C066538 rts */
L_0C066540: BLKS(0x0C066540u);
	r0 = 0x4u;  /* 0C066540 mov #imm,Rn */
	T = r12 > r0;  /* 0C066542 cmp/hi Rm,Rn */
	{ u32 c_ = T; r0 = r12; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06652Au, 5); goto L_0C06652A; } goto L_0C066548; }  /* 0C066544 bt/s */
L_0C066548: BLKS(0x0C066548u);
	r1 = r12;  /* 0C066548 mov Rm,Rn */
	r0 = 0xC066554u;  /* 0C06654A mova @(disp,pc),r0 */
	r1 += r1;  /* 0C06654C add Rm,Rn */
	IF(0x0C06654Eu); r3 = (u32)(s32)(s16)R16(r0 + r1); UPD(0x0C066550u, 5);  /* 0C06654E mov.w @(r0,Rm),Rn */
	IF(0x0C066550u); { u32 tv_ = (r3 + 0x0C066554u); u32 t_ = PHYS(tv_); IF(0x0C066552u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C066560u: goto L_0C066560; case 0x0C0665D0u: goto L_0C0665D0; case 0x0C066620u: goto L_0C066620; case 0x0C066680u: goto L_0C066680; default: JUMPD(tv_); } }  /* 0C066550 braf Rn */
L_0C066560: BLKS(0x0C066560u);
	r9 = 0xC0626E0u; UPD(0x0C066562u, 1);  /* 0C066560 mov.l @(disp,pc),Rn */
	r5 = 0x9u;  /* 0C066562 mov #imm,Rn */
	r11 = 0xC1736C0u; UPD(0x0C066566u, 2);  /* 0C066564 mov.l @(disp,pc),Rn */
	r6 = 0x4u;  /* 0C066566 mov #imm,Rn */
	r8 = 0xC0404000u; UPD(0x0C06656Au, 2);  /* 0C066568 mov.l @(disp,pc),Rn */
	r10 = 0xC1736C4u; UPD(0x0C06656Cu, 1);  /* 0C06656A mov.l @(disp,pc),Rn */
	r7 = r8;  /* 0C06656C mov Rm,Rn */
	IF(0x0C06656Eu); { u32 t_ = r9; PR = 0x0C066572u; r4 = R32(r11); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C066572u); }  /* 0C06656E jsr @Rn */
L_0C066572: BLKS(0x0C066572u);
	r4 = R32(r10); UPD(0x0C066574u, 1);  /* 0C066572 mov.l @Rm,Rn */
	r5 = 0x8u;  /* 0C066574 mov #imm,Rn */
	r6 = 0x4u;  /* 0C066576 mov #imm,Rn */
	IF(0x0C066578u); { u32 t_ = r9; PR = 0x0C06657Cu; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C06657Cu); }  /* 0C066578 jsr @Rn */
L_0C06657C: BLKS(0x0C06657Cu);
	r4 = R32(r10); UPD(0x0C06657Eu, 1);  /* 0C06657C mov.l @Rm,Rn */
	r5 = 0x7u;  /* 0C06657E mov #imm,Rn */
	r6 = 0x4u;  /* 0C066580 mov #imm,Rn */
	IF(0x0C066582u); { u32 t_ = r9; PR = 0x0C066586u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C066586u); }  /* 0C066582 jsr @Rn */
L_0C066586: BLKS(0x0C066586u);
	r4 = R32(r10); UPD(0x0C066588u, 1);  /* 0C066586 mov.l @Rm,Rn */
	r5 = 0x6u;  /* 0C066588 mov #imm,Rn */
	r6 = 0x4u;  /* 0C06658A mov #imm,Rn */
	IF(0x0C06658Cu); { u32 t_ = r9; PR = 0x0C066590u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C066590u); }  /* 0C06658C jsr @Rn */
L_0C066590: BLKS(0x0C066590u);
	r4 = R32(r10); UPD(0x0C066592u, 1);  /* 0C066590 mov.l @Rm,Rn */
	r5 = 0x5u;  /* 0C066592 mov #imm,Rn */
	r6 = 0x4u;  /* 0C066594 mov #imm,Rn */
	IF(0x0C066596u); { u32 t_ = r9; PR = 0x0C06659Au; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C06659Au); }  /* 0C066596 jsr @Rn */
L_0C06659A: BLKS(0x0C06659Au);
	r4 = R32(r11); UPD(0x0C06659Cu, 1);  /* 0C06659A mov.l @Rm,Rn */
	r5 = 0x4u;  /* 0C06659C mov #imm,Rn */
	r6 = 0x4u;  /* 0C06659E mov #imm,Rn */
	IF(0x0C0665A0u); { u32 t_ = r9; PR = 0x0C0665A4u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C0665A4u); }  /* 0C0665A0 jsr @Rn */
L_0C0665A4: BLKS(0x0C0665A4u);
	r2 = 0xC172B60u; UPD(0x0C0665A6u, 1);  /* 0C0665A4 mov.l @(disp,pc),Rn */
	r5 = 0x7u;  /* 0C0665A6 mov #imm,Rn */
	r4 = R32(r2); UPD(0x0C0665AAu, 2);  /* 0C0665A8 mov.l @Rm,Rn */
	r6 = 0x6u;  /* 0C0665AA mov #imm,Rn */
	IF(0x0C0665ACu); { u32 t_ = r9; PR = 0x0C0665B0u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C0665B0u); }  /* 0C0665AC jsr @Rn */
L_0C0665B0: BLKS(0x0C0665B0u);
	r4 = 0xC173698u; UPD(0x0C0665B2u, 1);  /* 0C0665B0 mov.l @(disp,pc),Rn */
	r5 = 0x6u;  /* 0C0665B2 mov #imm,Rn */
	UPD(0x0C0665B4u, 1);
L_0C0665B4: BLKS(0x0C0665B4u);
	r6 = 0x6u;  /* 0C0665B4 mov #imm,Rn */
	IF(0x0C0665B6u); { u32 t_ = r9; PR = 0x0C0665BAu; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C0665BAu); }  /* 0C0665B6 jsr @Rn */
L_0C0665BA: BLKS(0x0C0665BAu);
	r6 = 0xC297738u; UPD(0x0C0665BCu, 1);  /* 0C0665BA mov.l @(disp,pc),Rn */
	r5 = 0x100u; UPD(0x0C0665BEu, 1);  /* 0C0665BC mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)R16(r6); UPD(0x0C0665C0u, 1);  /* 0C0665BE mov.w @Rm,Rn */
	T = (r5 & r4) == 0;  /* 0C0665C0 tst Rm,Rn */
	if (T) { UPD(0x0C0665CAu, 4); goto L_0C0665CA; }  /* 0C0665C2 bt */
L_0C0665C4: BLKS(0x0C0665C4u);
	r7 = r12;  /* 0C0665C4 mov Rm,Rn */
	UPD(0x0C0665C6u, 1);
L_0C0665C6: BLKS(0x0C0665C6u);
	r7 += 0x1u;  /* 0C0665C6 add #imm,Rn */
	r12 = (u32)(s32)(s8)r7;  /* 0C0665C8 exts.b Rm,Rn */
	UPD(0x0C0665CAu, 2);
L_0C0665CA: BLKS(0x0C0665CAu);
	{ r0 = r12; /* slot mov Rm,Rn */ UPD(0x0C06652Au, 3); goto L_0C06652A; }  /* 0C0665CA bra */
L_0C0665D0: BLKS(0x0C0665D0u);
	r9 = 0xC0626E0u; UPD(0x0C0665D2u, 1);  /* 0C0665D0 mov.l @(disp,pc),Rn */
	r5 = 0x9u;  /* 0C0665D2 mov #imm,Rn */
	r11 = 0xC1736C0u; UPD(0x0C0665D6u, 2);  /* 0C0665D4 mov.l @(disp,pc),Rn */
	r6 = 0x4u;  /* 0C0665D6 mov #imm,Rn */
	r8 = 0xC0404000u; UPD(0x0C0665DAu, 2);  /* 0C0665D8 mov.l @(disp,pc),Rn */
	r10 = 0xC1736C4u; UPD(0x0C0665DCu, 1);  /* 0C0665DA mov.l @(disp,pc),Rn */
	r7 = r8;  /* 0C0665DC mov Rm,Rn */
	IF(0x0C0665DEu); { u32 t_ = r9; PR = 0x0C0665E2u; r4 = R32(r11); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C0665E2u); }  /* 0C0665DE jsr @Rn */
L_0C0665E2: BLKS(0x0C0665E2u);
	r4 = R32(r10); UPD(0x0C0665E4u, 1);  /* 0C0665E2 mov.l @Rm,Rn */
	r5 = 0x8u;  /* 0C0665E4 mov #imm,Rn */
	r6 = 0x4u;  /* 0C0665E6 mov #imm,Rn */
	IF(0x0C0665E8u); { u32 t_ = r9; PR = 0x0C0665ECu; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C0665ECu); }  /* 0C0665E8 jsr @Rn */
L_0C0665EC: BLKS(0x0C0665ECu);
	r4 = R32(r10); UPD(0x0C0665EEu, 1);  /* 0C0665EC mov.l @Rm,Rn */
	r5 = 0x7u;  /* 0C0665EE mov #imm,Rn */
	r6 = 0x4u;  /* 0C0665F0 mov #imm,Rn */
	IF(0x0C0665F2u); { u32 t_ = r9; PR = 0x0C0665F6u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C0665F6u); }  /* 0C0665F2 jsr @Rn */
L_0C0665F6: BLKS(0x0C0665F6u);
	r4 = R32(r10); UPD(0x0C0665F8u, 1);  /* 0C0665F6 mov.l @Rm,Rn */
	r5 = 0x6u;  /* 0C0665F8 mov #imm,Rn */
	r6 = 0x4u;  /* 0C0665FA mov #imm,Rn */
	IF(0x0C0665FCu); { u32 t_ = r9; PR = 0x0C066600u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C066600u); }  /* 0C0665FC jsr @Rn */
L_0C066600: BLKS(0x0C066600u);
	r4 = R32(r10); UPD(0x0C066602u, 1);  /* 0C066600 mov.l @Rm,Rn */
	r5 = 0x5u;  /* 0C066602 mov #imm,Rn */
	r6 = 0x4u;  /* 0C066604 mov #imm,Rn */
	IF(0x0C066606u); { u32 t_ = r9; PR = 0x0C06660Au; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C06660Au); }  /* 0C066606 jsr @Rn */
L_0C06660A: BLKS(0x0C06660Au);
	r4 = R32(r11); UPD(0x0C06660Cu, 1);  /* 0C06660A mov.l @Rm,Rn */
	r5 = 0x4u;  /* 0C06660C mov #imm,Rn */
	r6 = 0x4u;  /* 0C06660E mov #imm,Rn */
	IF(0x0C066610u); { u32 t_ = r9; PR = 0x0C066614u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C066614u); }  /* 0C066610 jsr @Rn */
L_0C066614: BLKS(0x0C066614u);
	r4 = 0xC172B74u; UPD(0x0C066616u, 1);  /* 0C066614 mov.l @(disp,pc),Rn */
	{ r5 = 0x7u; /* slot mov #imm,Rn */ UPD(0x0C0665B4u, 3); goto L_0C0665B4; }  /* 0C066616 bra */
L_0C066620: BLKS(0x0C066620u);
	r9 = 0xC0626E0u; UPD(0x0C066622u, 1);  /* 0C066620 mov.l @(disp,pc),Rn */
	r5 = 0x9u;  /* 0C066622 mov #imm,Rn */
	r11 = 0xC1736C0u; UPD(0x0C066626u, 2);  /* 0C066624 mov.l @(disp,pc),Rn */
	r6 = 0x4u;  /* 0C066626 mov #imm,Rn */
	r8 = 0xC0404000u; UPD(0x0C06662Au, 2);  /* 0C066628 mov.l @(disp,pc),Rn */
	r10 = 0xC1736C4u; UPD(0x0C06662Cu, 1);  /* 0C06662A mov.l @(disp,pc),Rn */
	r7 = r8;  /* 0C06662C mov Rm,Rn */
	IF(0x0C06662Eu); { u32 t_ = r9; PR = 0x0C066632u; r4 = R32(r11); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C066632u); }  /* 0C06662E jsr @Rn */
L_0C066632: BLKS(0x0C066632u);
	r4 = R32(r10); UPD(0x0C066634u, 1);  /* 0C066632 mov.l @Rm,Rn */
	r5 = 0x8u;  /* 0C066634 mov #imm,Rn */
	r6 = 0x4u;  /* 0C066636 mov #imm,Rn */
	IF(0x0C066638u); { u32 t_ = r9; PR = 0x0C06663Cu; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C06663Cu); }  /* 0C066638 jsr @Rn */
L_0C06663C: BLKS(0x0C06663Cu);
	r4 = R32(r10); UPD(0x0C06663Eu, 1);  /* 0C06663C mov.l @Rm,Rn */
	r5 = 0x7u;  /* 0C06663E mov #imm,Rn */
	r6 = 0x4u;  /* 0C066640 mov #imm,Rn */
	IF(0x0C066642u); { u32 t_ = r9; PR = 0x0C066646u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C066646u); }  /* 0C066642 jsr @Rn */
L_0C066646: BLKS(0x0C066646u);
	r4 = R32(r10); UPD(0x0C066648u, 1);  /* 0C066646 mov.l @Rm,Rn */
	r5 = 0x6u;  /* 0C066648 mov #imm,Rn */
	r6 = 0x4u;  /* 0C06664A mov #imm,Rn */
	IF(0x0C06664Cu); { u32 t_ = r9; PR = 0x0C066650u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C066650u); }  /* 0C06664C jsr @Rn */
L_0C066650: BLKS(0x0C066650u);
	r4 = R32(r10); UPD(0x0C066652u, 1);  /* 0C066650 mov.l @Rm,Rn */
	r5 = 0x5u;  /* 0C066652 mov #imm,Rn */
	r6 = 0x4u;  /* 0C066654 mov #imm,Rn */
	IF(0x0C066656u); { u32 t_ = r9; PR = 0x0C06665Au; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C06665Au); }  /* 0C066656 jsr @Rn */
L_0C06665A: BLKS(0x0C06665Au);
	r4 = R32(r11); UPD(0x0C06665Cu, 1);  /* 0C06665A mov.l @Rm,Rn */
	r5 = 0x4u;  /* 0C06665C mov #imm,Rn */
	r6 = 0x4u;  /* 0C06665E mov #imm,Rn */
	IF(0x0C066660u); { u32 t_ = r9; PR = 0x0C066664u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C066664u); }  /* 0C066660 jsr @Rn */
L_0C066664: BLKS(0x0C066664u);
	r4 = 0xC1736ACu; UPD(0x0C066666u, 1);  /* 0C066664 mov.l @(disp,pc),Rn */
	r5 = 0x7u;  /* 0C066666 mov #imm,Rn */
	r6 = 0x6u;  /* 0C066668 mov #imm,Rn */
	IF(0x0C06666Au); { u32 t_ = r9; PR = 0x0C06666Eu; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C06666Eu); }  /* 0C06666A jsr @Rn */
L_0C06666E: BLKS(0x0C06666Eu);
	{ r7 = r12; /* slot mov Rm,Rn */ UPD(0x0C0665C6u, 3); goto L_0C0665C6; }  /* 0C06666E bra */
L_0C066680: BLKS(0x0C066680u);
	r10 = 0xC06C140u; UPD(0x0C066682u, 1);  /* 0C066680 mov.l @(disp,pc),Rn */
	r9 = 0xC067580u; UPD(0x0C066684u, 1);  /* 0C066682 mov.l @(disp,pc),Rn */
	IF(0x0C066684u); { u32 t_ = r10; PR = 0x0C066688u; r12 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C06C140, 0x0C06C140u, 0x0C066688u); }  /* 0C066684 jsr @Rn */
L_0C066688: BLKS(0x0C066688u);
	r8 = 0xC05DAA8u; UPD(0x0C06668Au, 1);  /* 0C066688 mov.l @(disp,pc),Rn */
	IF(0x0C06668Au); { u32 t_ = r9; PR = 0x0C06668Eu; IF(0x0C06668Cu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C067580, 0x0C067580u, 0x0C06668Eu); }  /* 0C06668A jsr @Rn */
L_0C06668E: BLKS(0x0C06668Eu);
	r4 = 0xC286150u; UPD(0x0C066690u, 1);  /* 0C06668E mov.l @(disp,pc),Rn */
	r6 = 0x194u; UPD(0x0C066692u, 1);  /* 0C066690 mov.w @(disp,pc),Rn */
	IF(0x0C066692u); { u32 t_ = r8; PR = 0x0C066696u; r5 = 0x20u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C05DAA8, 0x0C05DAA8u, 0x0C066696u); }  /* 0C066692 jsr @Rn */
L_0C066696: BLKS(0x0C066696u);
	{ IF(0x0C066698u); ; /* slot nop */ UPD(0x0C0665CAu, 3); goto L_0C0665CA; }  /* 0C066696 bra */
}

void blk_f_0C0666E0(sh3_t *c)
{
	LOCALS;
L_0C0666E0: BLKS(0x0C0666E0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0666E2u, 1);  /* 0C0666E0 mov.l Rm,@-Rn */
	r0 = (u32)(s32)(s8)r4;  /* 0C0666E2 exts.b Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0666E6u, 2);  /* 0C0666E4 mov.l Rm,@-Rn */
	T = r0 == 0x10u;  /* 0C0666E6 cmp/eq #imm,r0 */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0666EAu, 2);  /* 0C0666E8 mov.l Rm,@-Rn */
	r0 = 0x0u;  /* 0C0666EA mov #imm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0666EEu, 2);  /* 0C0666EC mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0666F0u, 1);  /* 0C0666EE mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0666F2u, 1);  /* 0C0666F0 mov.l Rm,@-Rn */
	r12 = (u32)(s32)(s8)r5;  /* 0C0666F2 exts.b Rm,Rn */
	IF(0x0C0666F4u); r15 -= 4; W32(r15, PR); UPD(0x0C0666F6u, 2);  /* 0C0666F4 sts.l pr,@-Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C066710u, 3); goto L_0C066710; } UPD(0x0C0666FAu, 1); goto L_0C0666FA; }  /* 0C0666F6 bt/s */
L_0C0666FA: BLKS(0x0C0666FAu);
	r15 = r14;  /* 0C0666FA mov Rm,Rn */
	IF(0x0C0666FCu); PR = R32(r15); r15 += 4; UPD(0x0C0666FEu, 2);  /* 0C0666FC lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C066700u, 1);  /* 0C0666FE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C066702u, 1);  /* 0C066700 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C066704u, 1);  /* 0C066702 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C066706u, 1);  /* 0C066704 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C066708u, 1);  /* 0C066706 mov.l @Rm+,Rn */
	IF(0x0C066708u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C066708 rts */
L_0C066710: BLKS(0x0C066710u);
	r8 = 0xC067050u; UPD(0x0C066712u, 1);  /* 0C066710 mov.l @(disp,pc),Rn */
	IF(0x0C066712u); { u32 t_ = r8; PR = 0x0C066716u; IF(0x0C066714u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C067050, 0x0C067050u, 0x0C066716u); }  /* 0C066712 jsr @Rn */
L_0C066716: BLKS(0x0C066716u);
	T = (r0 & r0) == 0;  /* 0C066716 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0666FAu, 4); goto L_0C0666FA; } goto L_0C06671C; }  /* 0C066718 bf/s */
L_0C06671C: BLKS(0x0C06671Cu);
	r0 = r12;  /* 0C06671C mov Rm,Rn */
	T = r0 == 0x1u;  /* 0C06671E cmp/eq #imm,r0 */
	{ u32 c_ = !T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C066728u, 6); goto L_0C066728; } goto L_0C066724; }  /* 0C066720 bf/s */
L_0C066724: BLKS(0x0C066724u);
	{ r5 = 0x9u; /* slot mov #imm,Rn */ UPD(0x0C066840u, 4); goto L_0C066840; }  /* 0C066724 bra */
L_0C066728: BLKS(0x0C066728u);
	T = (s32)r12 > (s32)r0;  /* 0C066728 cmp/gt Rm,Rn */
	{ u32 c_ = T; r0 = r12; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0667B0u, 4); goto L_0C0667B0; } goto L_0C06672E; }  /* 0C06672A bt/s */
L_0C06672E: BLKS(0x0C06672Eu);
	T = (r12 & r12) == 0;  /* 0C06672E tst Rm,Rn */
	if (T) { UPD(0x0C066740u, 5); goto L_0C066740; }  /* 0C066730 bt */
L_0C066732: BLKS(0x0C066732u);
	{ r0 = r12; /* slot mov Rm,Rn */ UPD(0x0C0666FAu, 3); goto L_0C0666FA; }  /* 0C066732 bra */
L_0C066740: BLKS(0x0C066740u);
	r9 = 0xC0626E0u; UPD(0x0C066742u, 1);  /* 0C066740 mov.l @(disp,pc),Rn */
	r5 = 0x9u;  /* 0C066742 mov #imm,Rn */
	r11 = 0xC1736C0u; UPD(0x0C066746u, 2);  /* 0C066744 mov.l @(disp,pc),Rn */
	r6 = 0x4u;  /* 0C066746 mov #imm,Rn */
	r8 = 0xC0404000u; UPD(0x0C06674Au, 2);  /* 0C066748 mov.l @(disp,pc),Rn */
	r10 = 0xC1736C4u; UPD(0x0C06674Cu, 1);  /* 0C06674A mov.l @(disp,pc),Rn */
	r7 = r8;  /* 0C06674C mov Rm,Rn */
	IF(0x0C06674Eu); { u32 t_ = r9; PR = 0x0C066752u; r4 = R32(r11); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C066752u); }  /* 0C06674E jsr @Rn */
L_0C066752: BLKS(0x0C066752u);
	r4 = R32(r10); UPD(0x0C066754u, 1);  /* 0C066752 mov.l @Rm,Rn */
	r5 = 0x8u;  /* 0C066754 mov #imm,Rn */
	r6 = 0x4u;  /* 0C066756 mov #imm,Rn */
	IF(0x0C066758u); { u32 t_ = r9; PR = 0x0C06675Cu; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C06675Cu); }  /* 0C066758 jsr @Rn */
L_0C06675C: BLKS(0x0C06675Cu);
	r4 = R32(r10); UPD(0x0C06675Eu, 1);  /* 0C06675C mov.l @Rm,Rn */
	r5 = 0x7u;  /* 0C06675E mov #imm,Rn */
	r6 = 0x4u;  /* 0C066760 mov #imm,Rn */
	IF(0x0C066762u); { u32 t_ = r9; PR = 0x0C066766u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C066766u); }  /* 0C066762 jsr @Rn */
L_0C066766: BLKS(0x0C066766u);
	r4 = R32(r10); UPD(0x0C066768u, 1);  /* 0C066766 mov.l @Rm,Rn */
	r5 = 0x6u;  /* 0C066768 mov #imm,Rn */
	r6 = 0x4u;  /* 0C06676A mov #imm,Rn */
	IF(0x0C06676Cu); { u32 t_ = r9; PR = 0x0C066770u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C066770u); }  /* 0C06676C jsr @Rn */
L_0C066770: BLKS(0x0C066770u);
	r4 = R32(r10); UPD(0x0C066772u, 1);  /* 0C066770 mov.l @Rm,Rn */
	r5 = 0x5u;  /* 0C066772 mov #imm,Rn */
	r6 = 0x4u;  /* 0C066774 mov #imm,Rn */
	IF(0x0C066776u); { u32 t_ = r9; PR = 0x0C06677Au; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C06677Au); }  /* 0C066776 jsr @Rn */
L_0C06677A: BLKS(0x0C06677Au);
	r4 = R32(r11); UPD(0x0C06677Cu, 1);  /* 0C06677A mov.l @Rm,Rn */
	r5 = 0x4u;  /* 0C06677C mov #imm,Rn */
	r6 = 0x4u;  /* 0C06677E mov #imm,Rn */
	IF(0x0C066780u); { u32 t_ = r9; PR = 0x0C066784u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C066784u); }  /* 0C066780 jsr @Rn */
L_0C066784: BLKS(0x0C066784u);
	r5 = 0xC172B60u; UPD(0x0C066786u, 1);  /* 0C066784 mov.l @(disp,pc),Rn */
	r6 = 0x6u;  /* 0C066786 mov #imm,Rn */
	r4 = R32(r5); UPD(0x0C06678Au, 2);  /* 0C066788 mov.l @Rm,Rn */
	r7 = r8;  /* 0C06678A mov Rm,Rn */
	IF(0x0C06678Cu); { u32 t_ = r9; PR = 0x0C066790u; r5 = 0x7u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C066790u); }  /* 0C06678C jsr @Rn */
L_0C066790: BLKS(0x0C066790u);
	r4 = 0xC172B40u; UPD(0x0C066792u, 1);  /* 0C066790 mov.l @(disp,pc),Rn */
	r5 = 0x6u;  /* 0C066792 mov #imm,Rn */
	r6 = 0x6u;  /* 0C066794 mov #imm,Rn */
	IF(0x0C066796u); { u32 t_ = r9; PR = 0x0C06679Au; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C06679Au); }  /* 0C066796 jsr @Rn */
L_0C06679A: BLKS(0x0C06679Au);
	r4 = 0xC297738u; UPD(0x0C06679Cu, 1);  /* 0C06679A mov.l @(disp,pc),Rn */
	r2 = 0x100u; UPD(0x0C06679Eu, 1);  /* 0C06679C mov.w @(disp,pc),Rn */
	r3 = (u32)(s32)(s16)R16(r4); UPD(0x0C0667A0u, 1);  /* 0C06679E mov.w @Rm,Rn */
	T = (r2 & r3) == 0;  /* 0C0667A0 tst Rm,Rn */
	if (T) { UPD(0x0C066732u, 4); goto L_0C066732; }  /* 0C0667A2 bt */
L_0C0667A4: BLKS(0x0C0667A4u);
	r12 = 0x1u;  /* 0C0667A4 mov #imm,Rn */
	{ IF(0x0C0667A8u); ; /* slot nop */ UPD(0x0C066732u, 4); goto L_0C066732; }  /* 0C0667A6 bra */
L_0C0667B0: BLKS(0x0C0667B0u);
	T = r0 == 0x2u;  /* 0C0667B0 cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C066732u, 4); goto L_0C066732; }  /* 0C0667B2 bf */
L_0C0667B4: BLKS(0x0C0667B4u);
	r0 = 0x0u;  /* 0C0667B4 mov #imm,Rn */
	r7 = 0xC2322C0u; UPD(0x0C0667B8u, 2);  /* 0C0667B6 mov.l @(disp,pc),Rn */
	r3 = 0xC234BACu; UPD(0x0C0667BAu, 1);  /* 0C0667B8 mov.l @(disp,pc),Rn */
	r2 = 0xFu;  /* 0C0667BA mov #imm,Rn */
	UPD(0x0C0667BCu, 1);
L_0C0667BC: BLKS(0x0C0667BCu);
	IF(0x0C0667BCu); r11 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0667BEu, 1);  /* 0C0667BC mov.b @(r0,Rm),Rn */
	r10 = r0;  /* 0C0667BE mov Rm,Rn */
	IF(0x0C0667C0u); W8(r0 + r7, r11); UPD(0x0C0667C2u, 2);  /* 0C0667C0 mov.b Rm,@(r0,Rn) */
	r10 += 0x1u;  /* 0C0667C2 add #imm,Rn */
	r0 = (u32)(s32)(s16)r10;  /* 0C0667C4 exts.w Rm,Rn */
	T = (s32)r0 > (s32)r2;  /* 0C0667C6 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0667BCu, 6); goto L_0C0667BC; }  /* 0C0667C8 bf */
L_0C0667CA: BLKS(0x0C0667CAu);
	r4 = 0xC2322CCu; UPD(0x0C0667CCu, 1);  /* 0C0667CA mov.l @(disp,pc),Rn */
	r10 = (u32)(s32)(s8)R8(r4); UPD(0x0C0667CEu, 1);  /* 0C0667CC mov.b @Rm,Rn */
	r4 += 0xFFFFFFF4u;  /* 0C0667CE add #imm,Rn */
	r7 = r4;  /* 0C0667D0 mov Rm,Rn */
	r4 += 0x2u;  /* 0C0667D2 add #imm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r4); r4 += 1; r5 = v_; } UPD(0x0C0667D6u, 4);  /* 0C0667D4 mov.b @Rm+,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r4); r4 += 1; r1 = v_; } UPD(0x0C0667D8u, 1);  /* 0C0667D6 mov.b @Rm+,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r7); r7 += 1; r2 = v_; } UPD(0x0C0667DAu, 1);  /* 0C0667D8 mov.b @Rm+,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r4); r4 += 1; r8 = v_; } UPD(0x0C0667DCu, 1);  /* 0C0667DA mov.b @Rm+,Rn */
	r9 = 0xC3C542Au; UPD(0x0C0667DEu, 1);  /* 0C0667DC mov.l @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r4); r4 += 1; r3 = v_; } UPD(0x0C0667E0u, 1);  /* 0C0667DE mov.b @Rm+,Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C0667E2u, 1);  /* 0C0667E0 mov.b @Rm,Rn */
	W8(r9, r10); UPD(0x0C0667E4u, 1);  /* 0C0667E2 mov.b Rm,@Rn */
	r11 = 0xC2B1A58u; UPD(0x0C0667E6u, 1);  /* 0C0667E4 mov.l @(disp,pc),Rn */
	r0 = 0xC3C414Cu; UPD(0x0C0667E8u, 1);  /* 0C0667E6 mov.l @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r4); r4 += 1; r9 = v_; } UPD(0x0C0667EAu, 1);  /* 0C0667E8 mov.b @Rm+,Rn */
	W8(r11, r6); UPD(0x0C0667ECu, 1);  /* 0C0667EA mov.b Rm,@Rn */
	W8(r0, r2); UPD(0x0C0667EEu, 1);  /* 0C0667EC mov.b Rm,@Rn */
	r11 += 0x1u;  /* 0C0667EE add #imm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r4); r4 += 1; r6 = v_; } UPD(0x0C0667F2u, 2);  /* 0C0667F0 mov.b @Rm+,Rn */
	r0 += 0x1u;  /* 0C0667F2 add #imm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r4); r4 += 1; r2 = v_; } UPD(0x0C0667F6u, 2);  /* 0C0667F4 mov.b @Rm+,Rn */
	W8(r0, r1); UPD(0x0C0667F8u, 1);  /* 0C0667F6 mov.b Rm,@Rn */
	r10 = 0xC3C8690u; UPD(0x0C0667FAu, 1);  /* 0C0667F8 mov.l @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r4); r4 += 1; r0 = v_; } UPD(0x0C0667FCu, 1);  /* 0C0667FA mov.b @Rm+,Rn */
	W8(r11, r8); UPD(0x0C0667FEu, 1);  /* 0C0667FC mov.b Rm,@Rn */
	r7 = 0xC3CA6F8u; UPD(0x0C066800u, 1);  /* 0C0667FE mov.l @(disp,pc),Rn */
	W8(r10, r5); UPD(0x0C066802u, 1);  /* 0C066800 mov.b Rm,@Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r4); r4 += 1; r11 = v_; } UPD(0x0C066804u, 1);  /* 0C066802 mov.b @Rm+,Rn */
	r10 += 0x1u;  /* 0C066804 add #imm,Rn */
	W8(r7, r9); UPD(0x0C066808u, 2);  /* 0C066806 mov.b Rm,@Rn */
	r5 = 0xC2860FCu; UPD(0x0C06680Au, 1);  /* 0C066808 mov.l @(disp,pc),Rn */
	r9 = (u32)(s32)(s8)R8(r4); UPD(0x0C06680Cu, 1);  /* 0C06680A mov.b @Rm,Rn */
	W8(r5, r6); UPD(0x0C06680Eu, 1);  /* 0C06680C mov.b Rm,@Rn */
	r4 += 0x4u;  /* 0C06680E add #imm,Rn */
	r1 = 0xC234C04u; UPD(0x0C066812u, 2);  /* 0C066810 mov.l @(disp,pc),Rn */
	r6 = (u32)(s32)(s8)R8(r4); UPD(0x0C066814u, 1);  /* 0C066812 mov.b @Rm,Rn */
	W8(r1, r2); UPD(0x0C066816u, 1);  /* 0C066814 mov.b Rm,@Rn */
	r4 += 0xFFFFFFFEu;  /* 0C066816 add #imm,Rn */
	r8 = 0xC23DEA4u; UPD(0x0C06681Au, 2);  /* 0C066818 mov.l @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r4); r4 += 1; r2 = v_; } UPD(0x0C06681Cu, 1);  /* 0C06681A mov.b @Rm+,Rn */
	W8(r8, r0); UPD(0x0C06681Eu, 1);  /* 0C06681C mov.b Rm,@Rn */
	W8(r10, r3); UPD(0x0C066820u, 1);  /* 0C06681E mov.b Rm,@Rn */
	r7 = 0xC239483u; UPD(0x0C066822u, 1);  /* 0C066820 mov.l @(disp,pc),Rn */
	r10 = 0xC234BA8u; UPD(0x0C066824u, 1);  /* 0C066822 mov.l @(disp,pc),Rn */
	r5 = 0xC2B037Au; UPD(0x0C066826u, 1);  /* 0C066824 mov.l @(disp,pc),Rn */
	r1 = 0xC3C43B8u; UPD(0x0C066828u, 1);  /* 0C066826 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r4); UPD(0x0C06682Au, 1);  /* 0C066828 mov.b @Rm,Rn */
	r8 = 0xC3C848Cu; UPD(0x0C06682Cu, 1);  /* 0C06682A mov.l @(disp,pc),Rn */
	W8(r10, r11); UPD(0x0C06682Eu, 1);  /* 0C06682C mov.b Rm,@Rn */
	W8(r7, r9); UPD(0x0C066830u, 1);  /* 0C06682E mov.b Rm,@Rn */
	W8(r5, r6); UPD(0x0C066832u, 1);  /* 0C066830 mov.b Rm,@Rn */
	W8(r1, r2); UPD(0x0C066834u, 1);  /* 0C066832 mov.b Rm,@Rn */
	W8(r8, r0); UPD(0x0C066836u, 1);  /* 0C066834 mov.b Rm,@Rn */
L_0C066836: BLKS(0x0C066836u);
	{ IF(0x0C066838u); ; /* slot nop */ UPD(0x0C066732u, 3); goto L_0C066732; }  /* 0C066836 bra */
L_0C066840: BLKS(0x0C066840u);
	r9 = 0xC0626E0u; UPD(0x0C066842u, 1);  /* 0C066840 mov.l @(disp,pc),Rn */
	r11 = 0xC1736C0u; UPD(0x0C066844u, 1);  /* 0C066842 mov.l @(disp,pc),Rn */
	r6 = 0x4u;  /* 0C066844 mov #imm,Rn */
	r8 = 0xC0404000u; UPD(0x0C066848u, 2);  /* 0C066846 mov.l @(disp,pc),Rn */
	r10 = 0xC1736C4u; UPD(0x0C06684Au, 1);  /* 0C066848 mov.l @(disp,pc),Rn */
	r7 = r8;  /* 0C06684A mov Rm,Rn */
	IF(0x0C06684Cu); { u32 t_ = r9; PR = 0x0C066850u; r4 = R32(r11); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C066850u); }  /* 0C06684C jsr @Rn */
L_0C066850: BLKS(0x0C066850u);
	r4 = R32(r10); UPD(0x0C066852u, 1);  /* 0C066850 mov.l @Rm,Rn */
	r5 = 0x8u;  /* 0C066852 mov #imm,Rn */
	r6 = 0x4u;  /* 0C066854 mov #imm,Rn */
	IF(0x0C066856u); { u32 t_ = r9; PR = 0x0C06685Au; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C06685Au); }  /* 0C066856 jsr @Rn */
L_0C06685A: BLKS(0x0C06685Au);
	r4 = R32(r10); UPD(0x0C06685Cu, 1);  /* 0C06685A mov.l @Rm,Rn */
	r5 = 0x7u;  /* 0C06685C mov #imm,Rn */
	r6 = 0x4u;  /* 0C06685E mov #imm,Rn */
	IF(0x0C066860u); { u32 t_ = r9; PR = 0x0C066864u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C066864u); }  /* 0C066860 jsr @Rn */
L_0C066864: BLKS(0x0C066864u);
	r4 = R32(r10); UPD(0x0C066866u, 1);  /* 0C066864 mov.l @Rm,Rn */
	r5 = 0x6u;  /* 0C066866 mov #imm,Rn */
	r6 = 0x4u;  /* 0C066868 mov #imm,Rn */
	IF(0x0C06686Au); { u32 t_ = r9; PR = 0x0C06686Eu; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C06686Eu); }  /* 0C06686A jsr @Rn */
L_0C06686E: BLKS(0x0C06686Eu);
	r4 = R32(r10); UPD(0x0C066870u, 1);  /* 0C06686E mov.l @Rm,Rn */
	r5 = 0x5u;  /* 0C066870 mov #imm,Rn */
	r6 = 0x4u;  /* 0C066872 mov #imm,Rn */
	IF(0x0C066874u); { u32 t_ = r9; PR = 0x0C066878u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C066878u); }  /* 0C066874 jsr @Rn */
L_0C066878: BLKS(0x0C066878u);
	r4 = R32(r11); UPD(0x0C06687Au, 1);  /* 0C066878 mov.l @Rm,Rn */
	r5 = 0x4u;  /* 0C06687A mov #imm,Rn */
	r6 = 0x4u;  /* 0C06687C mov #imm,Rn */
	IF(0x0C06687Eu); { u32 t_ = r9; PR = 0x0C066882u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C066882u); }  /* 0C06687E jsr @Rn */
L_0C066882: BLKS(0x0C066882u);
	r6 = 0x6u;  /* 0C066882 mov #imm,Rn */
	r7 = r8;  /* 0C066884 mov Rm,Rn */
	r4 = 0xC172B74u; UPD(0x0C066888u, 3);  /* 0C066886 mov.l @(disp,pc),Rn */
	IF(0x0C066888u); { u32 t_ = r9; PR = 0x0C06688Cu; r5 = 0x7u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C06688Cu); }  /* 0C066888 jsr @Rn */
L_0C06688C: BLKS(0x0C06688Cu);
	r9 = 0xC297738u; UPD(0x0C06688Eu, 1);  /* 0C06688C mov.l @(disp,pc),Rn */
	r7 = 0x100u; UPD(0x0C066890u, 1);  /* 0C06688E mov.w @(disp,pc),Rn */
	r6 = (u32)(s32)(s16)R16(r9); UPD(0x0C066892u, 1);  /* 0C066890 mov.w @Rm,Rn */
	T = (r7 & r6) == 0;  /* 0C066892 tst Rm,Rn */
	if (T) { UPD(0x0C066836u, 4); goto L_0C066836; }  /* 0C066894 bt */
L_0C066896: BLKS(0x0C066896u);
	r12 = 0x2u;  /* 0C066896 mov #imm,Rn */
	{ IF(0x0C06689Au); ; /* slot nop */ UPD(0x0C066732u, 4); goto L_0C066732; }  /* 0C066898 bra */
}

/* FUN_0c066910 */
void blk_f_0C066910(sh3_t *c)
{
	LOCALS;
L_0C066910: BLKS(0x0C066910u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C066912u, 1);  /* 0C066910 mov.l Rm,@-Rn */
	r0 = (u32)(s32)(s8)r4;  /* 0C066912 exts.b Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C066916u, 2);  /* 0C066914 mov.l Rm,@-Rn */
	T = r0 == 0x5u;  /* 0C066916 cmp/eq #imm,r0 */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C06691Au, 2);  /* 0C066918 mov.l Rm,@-Rn */
	r1 = 0x0u;  /* 0C06691A mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06691Eu, 2);  /* 0C06691C mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s8)r5;  /* 0C06691E exts.b Rm,Rn */
	IF(0x0C066920u); r15 -= 4; W32(r15, PR); UPD(0x0C066922u, 2);  /* 0C066920 sts.l pr,@-Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C066940u, 3); goto L_0C066940; } UPD(0x0C066926u, 1); goto L_0C066926; }  /* 0C066922 bt/s */
L_0C066926: BLKS(0x0C066926u);
	r0 = r1;  /* 0C066926 mov Rm,Rn */
	r15 = r14;  /* 0C066928 mov Rm,Rn */
	IF(0x0C06692Au); PR = R32(r15); r15 += 4; UPD(0x0C06692Cu, 3);  /* 0C06692A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06692Eu, 1);  /* 0C06692C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C066930u, 1);  /* 0C06692E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C066932u, 1);  /* 0C066930 mov.l @Rm+,Rn */
	IF(0x0C066932u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C066932 rts */
L_0C066940: BLKS(0x0C066940u);
	T = r10 > r0;  /* 0C066940 cmp/hi Rm,Rn */
	{ u32 c_ = T; r1 = r10; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C066926u, 4); goto L_0C066926; } goto L_0C066946; }  /* 0C066942 bt/s */
L_0C066946: BLKS(0x0C066946u);
	r1 = r10;  /* 0C066946 mov Rm,Rn */
	r0 = 0xC066954u;  /* 0C066948 mova @(disp,pc),r0 */
	IF(0x0C06694Au); r3 = (u32)(s32)(s8)R8(r0 + r1); UPD(0x0C06694Cu, 4);  /* 0C06694A mov.b @(r0,Rm),Rn */
	r3 = r3 & 0xFF;  /* 0C06694C extu.b Rm,Rn */
	IF(0x0C06694Eu); { u32 tv_ = (r3 + 0x0C066952u); u32 t_ = PHYS(tv_); IF(0x0C066950u); ; /* slot nop */ JRGN(tv_); UPD(t_, 4); switch (t_) { case 0x0C066960u: goto L_0C066960; case 0x0C066980u: goto L_0C066980; case 0x0C0669B0u: goto L_0C0669B0; case 0x0C0669C0u: goto L_0C0669C0; case 0x0C0669D0u: goto L_0C0669D0; default: JUMPD(tv_); } }  /* 0C06694E braf Rn */
L_0C066960: BLKS(0x0C066960u);
	r8 = 0xC067290u; UPD(0x0C066962u, 1);  /* 0C066960 mov.l @(disp,pc),Rn */
	IF(0x0C066962u); { u32 t_ = r8; PR = 0x0C066966u; IF(0x0C066964u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C067290, 0x0C067290u, 0x0C066966u); }  /* 0C066962 jsr @Rn */
L_0C066966: BLKS(0x0C066966u);
	T = (r0 & r0) == 0;  /* 0C066966 tst Rm,Rn */
	{ u32 c_ = !T; r1 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C066926u, 4); goto L_0C066926; } goto L_0C06696C; }  /* 0C066968 bf/s */
L_0C06696C: BLKS(0x0C06696Cu);
	r5 = r10;  /* 0C06696C mov Rm,Rn */
	UPD(0x0C06696Eu, 2);
L_0C06696E: BLKS(0x0C06696Eu);
	r5 += 0x1u;  /* 0C06696E add #imm,Rn */
	UPD(0x0C066970u, 1);
L_0C066970: BLKS(0x0C066970u);
	r10 = (u32)(s32)(s8)r5;  /* 0C066970 exts.b Rm,Rn */
	UPD(0x0C066972u, 1);
L_0C066972: BLKS(0x0C066972u);
	{ r1 = r10; /* slot mov Rm,Rn */ UPD(0x0C066926u, 3); goto L_0C066926; }  /* 0C066972 bra */
L_0C066980: BLKS(0x0C066980u);
	r9 = 0xC0626E0u; UPD(0x0C066982u, 1);  /* 0C066980 mov.l @(disp,pc),Rn */
	r5 = 0x7u;  /* 0C066982 mov #imm,Rn */
	r0 = 0xC172B60u; UPD(0x0C066986u, 2);  /* 0C066984 mov.l @(disp,pc),Rn */
	r6 = 0x6u;  /* 0C066986 mov #imm,Rn */
	r8 = 0xC0404000u; UPD(0x0C06698Au, 2);  /* 0C066988 mov.l @(disp,pc),Rn */
	r4 = R32(r0); UPD(0x0C06698Cu, 1);  /* 0C06698A mov.l @Rm,Rn */
	IF(0x0C06698Cu); { u32 t_ = r9; PR = 0x0C066990u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C066990u); }  /* 0C06698C jsr @Rn */
L_0C066990: BLKS(0x0C066990u);
	r4 = 0xC172B64u; UPD(0x0C066992u, 1);  /* 0C066990 mov.l @(disp,pc),Rn */
	r5 = 0x6u;  /* 0C066992 mov #imm,Rn */
	r6 = 0x6u;  /* 0C066994 mov #imm,Rn */
	IF(0x0C066996u); { u32 t_ = r9; PR = 0x0C06699Au; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C06699Au); }  /* 0C066996 jsr @Rn */
L_0C06699A: BLKS(0x0C06699Au);
	r4 = 0xC297738u; UPD(0x0C06699Cu, 1);  /* 0C06699A mov.l @(disp,pc),Rn */
	r2 = 0x100u; UPD(0x0C06699Eu, 1);  /* 0C06699C mov.w @(disp,pc),Rn */
	r3 = (u32)(s32)(s16)R16(r4); UPD(0x0C0669A0u, 1);  /* 0C06699E mov.w @Rm,Rn */
	T = (r2 & r3) == 0;  /* 0C0669A0 tst Rm,Rn */
	if (T) { UPD(0x0C066972u, 4); goto L_0C066972; }  /* 0C0669A2 bt */
L_0C0669A4: BLKS(0x0C0669A4u);
	r5 = r10;  /* 0C0669A4 mov Rm,Rn */
	{ r5 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C066970u, 4); goto L_0C066970; }  /* 0C0669A6 bra */
L_0C0669B0: BLKS(0x0C0669B0u);
	r9 = 0xC0626E0u; UPD(0x0C0669B2u, 1);  /* 0C0669B0 mov.l @(disp,pc),Rn */
	r5 = 0x7u;  /* 0C0669B2 mov #imm,Rn */
	r4 = 0xC172B74u; UPD(0x0C0669B6u, 2);  /* 0C0669B4 mov.l @(disp,pc),Rn */
	r7 = 0xC0404000u; UPD(0x0C0669B8u, 1);  /* 0C0669B6 mov.l @(disp,pc),Rn */
	IF(0x0C0669B8u); { u32 t_ = r9; PR = 0x0C0669BCu; r6 = 0x6u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C0669BCu); }  /* 0C0669B8 jsr @Rn */
L_0C0669BC: BLKS(0x0C0669BCu);
	{ IF(0x0C0669BEu); ; /* slot nop */ UPD(0x0C06699Au, 3); goto L_0C06699A; }  /* 0C0669BC bra */
L_0C0669C0: BLKS(0x0C0669C0u);
	r8 = 0xC0626E0u; UPD(0x0C0669C2u, 1);  /* 0C0669C0 mov.l @(disp,pc),Rn */
	r5 = 0x7u;  /* 0C0669C2 mov #imm,Rn */
	r4 = 0xC172B84u; UPD(0x0C0669C6u, 2);  /* 0C0669C4 mov.l @(disp,pc),Rn */
	r7 = 0xC0404000u; UPD(0x0C0669C8u, 1);  /* 0C0669C6 mov.l @(disp,pc),Rn */
	IF(0x0C0669C8u); { u32 t_ = r8; PR = 0x0C0669CCu; r6 = 0x6u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C0669CCu); }  /* 0C0669C8 jsr @Rn */
L_0C0669CC: BLKS(0x0C0669CCu);
	{ r5 = r10; /* slot mov Rm,Rn */ UPD(0x0C06696Eu, 3); goto L_0C06696E; }  /* 0C0669CC bra */
L_0C0669D0: BLKS(0x0C0669D0u);
	r6 = 0xC3C542Au; UPD(0x0C0669D2u, 1);  /* 0C0669D0 mov.l @(disp,pc),Rn */
	r8 = 0xC2322CCu; UPD(0x0C0669D4u, 1);  /* 0C0669D2 mov.l @(disp,pc),Rn */
	r10 = (u32)(s32)(s8)R8(r6); UPD(0x0C0669D6u, 1);  /* 0C0669D4 mov.b @Rm,Rn */
	r3 = 0xC3C414Cu; UPD(0x0C0669D8u, 1);  /* 0C0669D6 mov.l @(disp,pc),Rn */
	W8(r8, r10); UPD(0x0C0669DAu, 1);  /* 0C0669D8 mov.b Rm,@Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r3); r3 += 1; r5 = v_; } UPD(0x0C0669DCu, 1);  /* 0C0669DA mov.b @Rm+,Rn */
	r8 += 0xFFFFFFF4u;  /* 0C0669DC add #imm,Rn */
	r0 = 0xC2B1A58u; UPD(0x0C0669E0u, 2);  /* 0C0669DE mov.l @(disp,pc),Rn */
	W8(r8, r5); UPD(0x0C0669E2u, 1);  /* 0C0669E0 mov.b Rm,@Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r0); r0 += 1; r4 = v_; } UPD(0x0C0669E4u, 1);  /* 0C0669E2 mov.b @Rm+,Rn */
	r8 += 0x1u;  /* 0C0669E4 add #imm,Rn */
	r6 = 0xC3C8690u; UPD(0x0C0669E8u, 2);  /* 0C0669E6 mov.l @(disp,pc),Rn */
	W8(r8, r4); UPD(0x0C0669EAu, 1);  /* 0C0669E8 mov.b Rm,@Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r6); r6 += 1; r2 = v_; } UPD(0x0C0669ECu, 1);  /* 0C0669EA mov.b @Rm+,Rn */
	r8 += 0x1u;  /* 0C0669EC add #imm,Rn */
	W8(r8, r2); UPD(0x0C0669F0u, 2);  /* 0C0669EE mov.b Rm,@Rn */
	r9 = (u32)(s32)(s8)R8(r3); UPD(0x0C0669F2u, 1);  /* 0C0669F0 mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C0669F2 add #imm,Rn */
	W8(r8, r9); UPD(0x0C0669F6u, 2);  /* 0C0669F4 mov.b Rm,@Rn */
	r7 = (u32)(s32)(s8)R8(r0); UPD(0x0C0669F8u, 1);  /* 0C0669F6 mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C0669F8 add #imm,Rn */
	W8(r8, r7); UPD(0x0C0669FCu, 2);  /* 0C0669FA mov.b Rm,@Rn */
	r10 = (u32)(s32)(s8)R8(r6); UPD(0x0C0669FEu, 1);  /* 0C0669FC mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C0669FE add #imm,Rn */
	r5 = 0xC3CA6F8u; UPD(0x0C066A02u, 2);  /* 0C066A00 mov.l @(disp,pc),Rn */
	W8(r8, r10); UPD(0x0C066A04u, 1);  /* 0C066A02 mov.b Rm,@Rn */
	r4 = (u32)(s32)(s8)R8(r5); UPD(0x0C066A06u, 1);  /* 0C066A04 mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C066A06 add #imm,Rn */
	r2 = 0xC2860FCu; UPD(0x0C066A0Au, 2);  /* 0C066A08 mov.l @(disp,pc),Rn */
	W8(r8, r4); UPD(0x0C066A0Cu, 1);  /* 0C066A0A mov.b Rm,@Rn */
	r3 = (u32)(s32)(s8)R8(r2); UPD(0x0C066A0Eu, 1);  /* 0C066A0C mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C066A0E add #imm,Rn */
	r9 = 0xC234C04u; UPD(0x0C066A12u, 2);  /* 0C066A10 mov.l @(disp,pc),Rn */
	W8(r8, r3); UPD(0x0C066A14u, 1);  /* 0C066A12 mov.b Rm,@Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C066A16u, 1);  /* 0C066A14 mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C066A16 add #imm,Rn */
	r7 = 0xC23DEA4u; UPD(0x0C066A1Au, 2);  /* 0C066A18 mov.l @(disp,pc),Rn */
	W8(r8, r0); UPD(0x0C066A1Cu, 1);  /* 0C066A1A mov.b Rm,@Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C066A1Eu, 1);  /* 0C066A1C mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C066A1E add #imm,Rn */
	r10 = 0xC234BA8u; UPD(0x0C066A22u, 2);  /* 0C066A20 mov.l @(disp,pc),Rn */
	W8(r8, r6); UPD(0x0C066A24u, 1);  /* 0C066A22 mov.b Rm,@Rn */
	r5 = (u32)(s32)(s8)R8(r10); UPD(0x0C066A26u, 1);  /* 0C066A24 mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C066A26 add #imm,Rn */
	r4 = 0xC239483u; UPD(0x0C066A2Au, 2);  /* 0C066A28 mov.l @(disp,pc),Rn */
	W8(r8, r5); UPD(0x0C066A2Cu, 1);  /* 0C066A2A mov.b Rm,@Rn */
	r2 = (u32)(s32)(s8)R8(r4); UPD(0x0C066A2Eu, 1);  /* 0C066A2C mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C066A2E add #imm,Rn */
	r3 = 0xC3C43B8u; UPD(0x0C066A32u, 2);  /* 0C066A30 mov.l @(disp,pc),Rn */
	W8(r8, r2); UPD(0x0C066A34u, 1);  /* 0C066A32 mov.b Rm,@Rn */
	r9 = (u32)(s32)(s8)R8(r3); UPD(0x0C066A36u, 1);  /* 0C066A34 mov.b @Rm,Rn */
	r8 += 0x2u;  /* 0C066A36 add #imm,Rn */
	r0 = 0xC3C848Cu; UPD(0x0C066A3Au, 2);  /* 0C066A38 mov.l @(disp,pc),Rn */
	W8(r8, r9); UPD(0x0C066A3Cu, 1);  /* 0C066A3A mov.b Rm,@Rn */
	r7 = (u32)(s32)(s8)R8(r0); UPD(0x0C066A3Eu, 1);  /* 0C066A3C mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C066A3E add #imm,Rn */
	r6 = 0xC2B037Au; UPD(0x0C066A42u, 2);  /* 0C066A40 mov.l @(disp,pc),Rn */
	W8(r8, r7); UPD(0x0C066A44u, 1);  /* 0C066A42 mov.b Rm,@Rn */
	r10 = (u32)(s32)(s8)R8(r6); UPD(0x0C066A46u, 1);  /* 0C066A44 mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C066A46 add #imm,Rn */
	r5 = 0xC2380CBu; UPD(0x0C066A4Au, 2);  /* 0C066A48 mov.l @(disp,pc),Rn */
	W8(r8, r10); UPD(0x0C066A4Cu, 1);  /* 0C066A4A mov.b Rm,@Rn */
	r4 = (u32)(s32)(s8)R8(r5); UPD(0x0C066A4Eu, 1);  /* 0C066A4C mov.b @Rm,Rn */
	r8 += 0x1u; UPD(0x0C066A50u, 1);  /* 0C066A4E add #imm,Rn */
	W8(r8, r4); UPD(0x0C066A52u, 1);  /* 0C066A50 mov.b Rm,@Rn */
	r5 = 0x0u;  /* 0C066A52 mov #imm,Rn */
	r2 = 0xC2289E7u; UPD(0x0C066A56u, 2);  /* 0C066A54 mov.l @(disp,pc),Rn */
	r8 += 0x1u;  /* 0C066A56 add #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r2); UPD(0x0C066A5Au, 2);  /* 0C066A58 mov.b @Rm,Rn */
	r9 = 0xC233723u; UPD(0x0C066A5Cu, 1);  /* 0C066A5A mov.l @(disp,pc),Rn */
	W8(r8, r3); UPD(0x0C066A5Eu, 1);  /* 0C066A5C mov.b Rm,@Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C066A60u, 1);  /* 0C066A5E mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C066A60 add #imm,Rn */
	r7 = 0xC286313u; UPD(0x0C066A64u, 2);  /* 0C066A62 mov.l @(disp,pc),Rn */
	W8(r8, r0); UPD(0x0C066A66u, 1);  /* 0C066A64 mov.b Rm,@Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C066A68u, 1);  /* 0C066A66 mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C066A68 add #imm,Rn */
	W8(r8, r6); UPD(0x0C066A6Cu, 2);  /* 0C066A6A mov.b Rm,@Rn */
	r10 = 0xC05DAA8u; UPD(0x0C066A6Eu, 1);  /* 0C066A6C mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFEDu;  /* 0C066A6E add #imm,Rn */
	r4 = r8;  /* 0C066A70 mov Rm,Rn */
	IF(0x0C066A72u); { u32 t_ = r10; PR = 0x0C066A76u; r6 = 0x40u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C05DAA8, 0x0C05DAA8u, 0x0C066A76u); }  /* 0C066A72 jsr @Rn */
L_0C066A76: BLKS(0x0C066A76u);
	r3 = 0xC2B1824u; UPD(0x0C066A78u, 1);  /* 0C066A76 mov.l @(disp,pc),Rn */
	r0 = 0x0u;  /* 0C066A78 mov #imm,Rn */
	r2 = 0x3Fu;  /* 0C066A7A mov #imm,Rn */
	UPD(0x0C066A7Cu, 2);
L_0C066A7C: BLKS(0x0C066A7Cu);
	IF(0x0C066A7Cu); r9 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C066A7Eu, 1);  /* 0C066A7C mov.b @(r0,Rm),Rn */
	r7 = r0;  /* 0C066A7E mov Rm,Rn */
	IF(0x0C066A80u); W8(r0 + r3, r9); UPD(0x0C066A82u, 2);  /* 0C066A80 mov.b Rm,@(r0,Rn) */
	r7 += 0x1u;  /* 0C066A82 add #imm,Rn */
	r0 = (u32)(s32)(s16)r7;  /* 0C066A84 exts.w Rm,Rn */
	T = (s32)r0 > (s32)r2;  /* 0C066A86 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r10 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C066A7Cu, 6); goto L_0C066A7C; } goto L_0C066A8C; }  /* 0C066A88 bf/s */
L_0C066A8C: BLKS(0x0C066A8Cu);
	{ IF(0x0C066A8Eu); ; /* slot nop */ UPD(0x0C066972u, 4); goto L_0C066972; }  /* 0C066A8C bra */
}

void blk_f_0C066B10(sh3_t *c)
{
	LOCALS;
L_0C066B10: BLKS(0x0C066B10u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C066B12u, 1);  /* 0C066B10 mov.l Rm,@-Rn */
	r0 = (u32)(s32)(s8)r4;  /* 0C066B12 exts.b Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C066B16u, 2);  /* 0C066B14 mov.l Rm,@-Rn */
	T = r0 == 0x11u;  /* 0C066B16 cmp/eq #imm,r0 */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C066B1Au, 2);  /* 0C066B18 mov.l Rm,@-Rn */
	r0 = 0x0u;  /* 0C066B1A mov #imm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C066B1Eu, 2);  /* 0C066B1C mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C066B20u, 1);  /* 0C066B1E mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C066B22u, 1);  /* 0C066B20 mov.l Rm,@-Rn */
	r12 = (u32)(s32)(s8)r5;  /* 0C066B22 exts.b Rm,Rn */
	IF(0x0C066B24u); r15 -= 4; W32(r15, PR); UPD(0x0C066B26u, 2);  /* 0C066B24 sts.l pr,@-Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C066B40u, 3); goto L_0C066B40; } UPD(0x0C066B2Au, 1); goto L_0C066B2A; }  /* 0C066B26 bt/s */
L_0C066B2A: BLKS(0x0C066B2Au);
	r15 = r14;  /* 0C066B2A mov Rm,Rn */
	IF(0x0C066B2Cu); PR = R32(r15); r15 += 4; UPD(0x0C066B2Eu, 2);  /* 0C066B2C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C066B30u, 1);  /* 0C066B2E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C066B32u, 1);  /* 0C066B30 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C066B34u, 1);  /* 0C066B32 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C066B36u, 1);  /* 0C066B34 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C066B38u, 1);  /* 0C066B36 mov.l @Rm+,Rn */
	IF(0x0C066B38u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C066B38 rts */
L_0C066B40: BLKS(0x0C066B40u);
	r8 = 0xC067290u; UPD(0x0C066B42u, 1);  /* 0C066B40 mov.l @(disp,pc),Rn */
	IF(0x0C066B42u); { u32 t_ = r8; PR = 0x0C066B46u; IF(0x0C066B44u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C067290, 0x0C067290u, 0x0C066B46u); }  /* 0C066B42 jsr @Rn */
L_0C066B46: BLKS(0x0C066B46u);
	T = (r0 & r0) == 0;  /* 0C066B46 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C066B2Au, 4); goto L_0C066B2A; } goto L_0C066B4C; }  /* 0C066B48 bf/s */
L_0C066B4C: BLKS(0x0C066B4Cu);
	r0 = 0x4u;  /* 0C066B4C mov #imm,Rn */
	T = r12 > r0;  /* 0C066B4E cmp/hi Rm,Rn */
	{ u32 c_ = T; r0 = r12; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C066B2Au, 6); goto L_0C066B2A; } goto L_0C066B54; }  /* 0C066B50 bt/s */
L_0C066B54: BLKS(0x0C066B54u);
	r1 = r12;  /* 0C066B54 mov Rm,Rn */
	r0 = 0xC066B64u;  /* 0C066B56 mova @(disp,pc),r0 */
	r1 += r1;  /* 0C066B58 add Rm,Rn */
	IF(0x0C066B5Au); r3 = (u32)(s32)(s16)R16(r0 + r1); UPD(0x0C066B5Cu, 5);  /* 0C066B5A mov.w @(r0,Rm),Rn */
	IF(0x0C066B5Cu); { u32 tv_ = (r3 + 0x0C066B60u); u32 t_ = PHYS(tv_); IF(0x0C066B5Eu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C066B70u: goto L_0C066B70; case 0x0C066BE0u: goto L_0C066BE0; case 0x0C066C30u: goto L_0C066C30; case 0x0C066C90u: goto L_0C066C90; default: JUMPD(tv_); } }  /* 0C066B5C braf Rn */
L_0C066B70: BLKS(0x0C066B70u);
	r9 = 0xC0626E0u; UPD(0x0C066B72u, 1);  /* 0C066B70 mov.l @(disp,pc),Rn */
	r5 = 0x9u;  /* 0C066B72 mov #imm,Rn */
	r11 = 0xC1736C0u; UPD(0x0C066B76u, 2);  /* 0C066B74 mov.l @(disp,pc),Rn */
	r6 = 0x4u;  /* 0C066B76 mov #imm,Rn */
	r8 = 0xC0404000u; UPD(0x0C066B7Au, 2);  /* 0C066B78 mov.l @(disp,pc),Rn */
	r10 = 0xC1736C4u; UPD(0x0C066B7Cu, 1);  /* 0C066B7A mov.l @(disp,pc),Rn */
	r7 = r8;  /* 0C066B7C mov Rm,Rn */
	IF(0x0C066B7Eu); { u32 t_ = r9; PR = 0x0C066B82u; r4 = R32(r11); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C066B82u); }  /* 0C066B7E jsr @Rn */
L_0C066B82: BLKS(0x0C066B82u);
	r4 = R32(r10); UPD(0x0C066B84u, 1);  /* 0C066B82 mov.l @Rm,Rn */
	r5 = 0x8u;  /* 0C066B84 mov #imm,Rn */
	r6 = 0x4u;  /* 0C066B86 mov #imm,Rn */
	IF(0x0C066B88u); { u32 t_ = r9; PR = 0x0C066B8Cu; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C066B8Cu); }  /* 0C066B88 jsr @Rn */
L_0C066B8C: BLKS(0x0C066B8Cu);
	r4 = R32(r10); UPD(0x0C066B8Eu, 1);  /* 0C066B8C mov.l @Rm,Rn */
	r5 = 0x7u;  /* 0C066B8E mov #imm,Rn */
	r6 = 0x4u;  /* 0C066B90 mov #imm,Rn */
	IF(0x0C066B92u); { u32 t_ = r9; PR = 0x0C066B96u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C066B96u); }  /* 0C066B92 jsr @Rn */
L_0C066B96: BLKS(0x0C066B96u);
	r4 = R32(r10); UPD(0x0C066B98u, 1);  /* 0C066B96 mov.l @Rm,Rn */
	r5 = 0x6u;  /* 0C066B98 mov #imm,Rn */
	r6 = 0x4u;  /* 0C066B9A mov #imm,Rn */
	IF(0x0C066B9Cu); { u32 t_ = r9; PR = 0x0C066BA0u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C066BA0u); }  /* 0C066B9C jsr @Rn */
L_0C066BA0: BLKS(0x0C066BA0u);
	r4 = R32(r10); UPD(0x0C066BA2u, 1);  /* 0C066BA0 mov.l @Rm,Rn */
	r5 = 0x5u;  /* 0C066BA2 mov #imm,Rn */
	r6 = 0x4u;  /* 0C066BA4 mov #imm,Rn */
	IF(0x0C066BA6u); { u32 t_ = r9; PR = 0x0C066BAAu; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C066BAAu); }  /* 0C066BA6 jsr @Rn */
L_0C066BAA: BLKS(0x0C066BAAu);
	r4 = R32(r11); UPD(0x0C066BACu, 1);  /* 0C066BAA mov.l @Rm,Rn */
	r5 = 0x4u;  /* 0C066BAC mov #imm,Rn */
	r6 = 0x4u;  /* 0C066BAE mov #imm,Rn */
	IF(0x0C066BB0u); { u32 t_ = r9; PR = 0x0C066BB4u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C066BB4u); }  /* 0C066BB0 jsr @Rn */
L_0C066BB4: BLKS(0x0C066BB4u);
	r2 = 0xC172B60u; UPD(0x0C066BB6u, 1);  /* 0C066BB4 mov.l @(disp,pc),Rn */
	r5 = 0x7u;  /* 0C066BB6 mov #imm,Rn */
	r4 = R32(r2); UPD(0x0C066BBAu, 2);  /* 0C066BB8 mov.l @Rm,Rn */
	r6 = 0x6u;  /* 0C066BBA mov #imm,Rn */
	IF(0x0C066BBCu); { u32 t_ = r9; PR = 0x0C066BC0u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C066BC0u); }  /* 0C066BBC jsr @Rn */
L_0C066BC0: BLKS(0x0C066BC0u);
	r4 = 0xC172B64u; UPD(0x0C066BC2u, 1);  /* 0C066BC0 mov.l @(disp,pc),Rn */
	r5 = 0x6u;  /* 0C066BC2 mov #imm,Rn */
	UPD(0x0C066BC4u, 1);
L_0C066BC4: BLKS(0x0C066BC4u);
	r6 = 0x6u;  /* 0C066BC4 mov #imm,Rn */
	IF(0x0C066BC6u); { u32 t_ = r9; PR = 0x0C066BCAu; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C066BCAu); }  /* 0C066BC6 jsr @Rn */
L_0C066BCA: BLKS(0x0C066BCAu);
	r6 = 0xC297738u; UPD(0x0C066BCCu, 1);  /* 0C066BCA mov.l @(disp,pc),Rn */
	r5 = 0x100u; UPD(0x0C066BCEu, 1);  /* 0C066BCC mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)R16(r6); UPD(0x0C066BD0u, 1);  /* 0C066BCE mov.w @Rm,Rn */
	T = (r5 & r4) == 0;  /* 0C066BD0 tst Rm,Rn */
	if (T) { UPD(0x0C066BDAu, 4); goto L_0C066BDA; }  /* 0C066BD2 bt */
L_0C066BD4: BLKS(0x0C066BD4u);
	r7 = r12;  /* 0C066BD4 mov Rm,Rn */
	UPD(0x0C066BD6u, 1);
L_0C066BD6: BLKS(0x0C066BD6u);
	r7 += 0x1u;  /* 0C066BD6 add #imm,Rn */
	r12 = (u32)(s32)(s8)r7;  /* 0C066BD8 exts.b Rm,Rn */
	UPD(0x0C066BDAu, 2);
L_0C066BDA: BLKS(0x0C066BDAu);
	{ r0 = r12; /* slot mov Rm,Rn */ UPD(0x0C066B2Au, 3); goto L_0C066B2A; }  /* 0C066BDA bra */
L_0C066BE0: BLKS(0x0C066BE0u);
	r9 = 0xC0626E0u; UPD(0x0C066BE2u, 1);  /* 0C066BE0 mov.l @(disp,pc),Rn */
	r5 = 0x9u;  /* 0C066BE2 mov #imm,Rn */
	r11 = 0xC1736C0u; UPD(0x0C066BE6u, 2);  /* 0C066BE4 mov.l @(disp,pc),Rn */
	r6 = 0x4u;  /* 0C066BE6 mov #imm,Rn */
	r8 = 0xC0404000u; UPD(0x0C066BEAu, 2);  /* 0C066BE8 mov.l @(disp,pc),Rn */
	r10 = 0xC1736C4u; UPD(0x0C066BECu, 1);  /* 0C066BEA mov.l @(disp,pc),Rn */
	r7 = r8;  /* 0C066BEC mov Rm,Rn */
	IF(0x0C066BEEu); { u32 t_ = r9; PR = 0x0C066BF2u; r4 = R32(r11); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C066BF2u); }  /* 0C066BEE jsr @Rn */
L_0C066BF2: BLKS(0x0C066BF2u);
	r4 = R32(r10); UPD(0x0C066BF4u, 1);  /* 0C066BF2 mov.l @Rm,Rn */
	r5 = 0x8u;  /* 0C066BF4 mov #imm,Rn */
	r6 = 0x4u;  /* 0C066BF6 mov #imm,Rn */
	IF(0x0C066BF8u); { u32 t_ = r9; PR = 0x0C066BFCu; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C066BFCu); }  /* 0C066BF8 jsr @Rn */
L_0C066BFC: BLKS(0x0C066BFCu);
	r4 = R32(r10); UPD(0x0C066BFEu, 1);  /* 0C066BFC mov.l @Rm,Rn */
	r5 = 0x7u;  /* 0C066BFE mov #imm,Rn */
	r6 = 0x4u;  /* 0C066C00 mov #imm,Rn */
	IF(0x0C066C02u); { u32 t_ = r9; PR = 0x0C066C06u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C066C06u); }  /* 0C066C02 jsr @Rn */
L_0C066C06: BLKS(0x0C066C06u);
	r4 = R32(r10); UPD(0x0C066C08u, 1);  /* 0C066C06 mov.l @Rm,Rn */
	r5 = 0x6u;  /* 0C066C08 mov #imm,Rn */
	r6 = 0x4u;  /* 0C066C0A mov #imm,Rn */
	IF(0x0C066C0Cu); { u32 t_ = r9; PR = 0x0C066C10u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C066C10u); }  /* 0C066C0C jsr @Rn */
L_0C066C10: BLKS(0x0C066C10u);
	r4 = R32(r10); UPD(0x0C066C12u, 1);  /* 0C066C10 mov.l @Rm,Rn */
	r5 = 0x5u;  /* 0C066C12 mov #imm,Rn */
	r6 = 0x4u;  /* 0C066C14 mov #imm,Rn */
	IF(0x0C066C16u); { u32 t_ = r9; PR = 0x0C066C1Au; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C066C1Au); }  /* 0C066C16 jsr @Rn */
L_0C066C1A: BLKS(0x0C066C1Au);
	r4 = R32(r11); UPD(0x0C066C1Cu, 1);  /* 0C066C1A mov.l @Rm,Rn */
	r5 = 0x4u;  /* 0C066C1C mov #imm,Rn */
	r6 = 0x4u;  /* 0C066C1E mov #imm,Rn */
	IF(0x0C066C20u); { u32 t_ = r9; PR = 0x0C066C24u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C066C24u); }  /* 0C066C20 jsr @Rn */
L_0C066C24: BLKS(0x0C066C24u);
	r4 = 0xC172B74u; UPD(0x0C066C26u, 1);  /* 0C066C24 mov.l @(disp,pc),Rn */
	{ r5 = 0x7u; /* slot mov #imm,Rn */ UPD(0x0C066BC4u, 3); goto L_0C066BC4; }  /* 0C066C26 bra */
L_0C066C30: BLKS(0x0C066C30u);
	r9 = 0xC0626E0u; UPD(0x0C066C32u, 1);  /* 0C066C30 mov.l @(disp,pc),Rn */
	r5 = 0x9u;  /* 0C066C32 mov #imm,Rn */
	r11 = 0xC1736C0u; UPD(0x0C066C36u, 2);  /* 0C066C34 mov.l @(disp,pc),Rn */
	r6 = 0x4u;  /* 0C066C36 mov #imm,Rn */
	r8 = 0xC0404000u; UPD(0x0C066C3Au, 2);  /* 0C066C38 mov.l @(disp,pc),Rn */
	r10 = 0xC1736C4u; UPD(0x0C066C3Cu, 1);  /* 0C066C3A mov.l @(disp,pc),Rn */
	r7 = r8;  /* 0C066C3C mov Rm,Rn */
	IF(0x0C066C3Eu); { u32 t_ = r9; PR = 0x0C066C42u; r4 = R32(r11); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C066C42u); }  /* 0C066C3E jsr @Rn */
L_0C066C42: BLKS(0x0C066C42u);
	r4 = R32(r10); UPD(0x0C066C44u, 1);  /* 0C066C42 mov.l @Rm,Rn */
	r5 = 0x8u;  /* 0C066C44 mov #imm,Rn */
	r6 = 0x4u;  /* 0C066C46 mov #imm,Rn */
	IF(0x0C066C48u); { u32 t_ = r9; PR = 0x0C066C4Cu; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C066C4Cu); }  /* 0C066C48 jsr @Rn */
L_0C066C4C: BLKS(0x0C066C4Cu);
	r4 = R32(r10); UPD(0x0C066C4Eu, 1);  /* 0C066C4C mov.l @Rm,Rn */
	r5 = 0x7u;  /* 0C066C4E mov #imm,Rn */
	r6 = 0x4u;  /* 0C066C50 mov #imm,Rn */
	IF(0x0C066C52u); { u32 t_ = r9; PR = 0x0C066C56u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C066C56u); }  /* 0C066C52 jsr @Rn */
L_0C066C56: BLKS(0x0C066C56u);
	r4 = R32(r10); UPD(0x0C066C58u, 1);  /* 0C066C56 mov.l @Rm,Rn */
	r5 = 0x6u;  /* 0C066C58 mov #imm,Rn */
	r6 = 0x4u;  /* 0C066C5A mov #imm,Rn */
	IF(0x0C066C5Cu); { u32 t_ = r9; PR = 0x0C066C60u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C066C60u); }  /* 0C066C5C jsr @Rn */
L_0C066C60: BLKS(0x0C066C60u);
	r4 = R32(r10); UPD(0x0C066C62u, 1);  /* 0C066C60 mov.l @Rm,Rn */
	r5 = 0x5u;  /* 0C066C62 mov #imm,Rn */
	r6 = 0x4u;  /* 0C066C64 mov #imm,Rn */
	IF(0x0C066C66u); { u32 t_ = r9; PR = 0x0C066C6Au; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C066C6Au); }  /* 0C066C66 jsr @Rn */
L_0C066C6A: BLKS(0x0C066C6Au);
	r4 = R32(r11); UPD(0x0C066C6Cu, 1);  /* 0C066C6A mov.l @Rm,Rn */
	r5 = 0x4u;  /* 0C066C6C mov #imm,Rn */
	r6 = 0x4u;  /* 0C066C6E mov #imm,Rn */
	IF(0x0C066C70u); { u32 t_ = r9; PR = 0x0C066C74u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C066C74u); }  /* 0C066C70 jsr @Rn */
L_0C066C74: BLKS(0x0C066C74u);
	r4 = 0xC172B84u; UPD(0x0C066C76u, 1);  /* 0C066C74 mov.l @(disp,pc),Rn */
	r5 = 0x7u;  /* 0C066C76 mov #imm,Rn */
	r6 = 0x6u;  /* 0C066C78 mov #imm,Rn */
	IF(0x0C066C7Au); { u32 t_ = r9; PR = 0x0C066C7Eu; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C066C7Eu); }  /* 0C066C7A jsr @Rn */
L_0C066C7E: BLKS(0x0C066C7Eu);
	{ r7 = r12; /* slot mov Rm,Rn */ UPD(0x0C066BD6u, 3); goto L_0C066BD6; }  /* 0C066C7E bra */
L_0C066C90: BLKS(0x0C066C90u);
	r0 = 0xC3C542Au; UPD(0x0C066C92u, 1);  /* 0C066C90 mov.l @(disp,pc),Rn */
	r8 = 0xC2322CCu; UPD(0x0C066C94u, 1);  /* 0C066C92 mov.l @(disp,pc),Rn */
	r12 = (u32)(s32)(s8)R8(r0); UPD(0x0C066C96u, 1);  /* 0C066C94 mov.b @Rm,Rn */
	r9 = 0xC3C414Cu; UPD(0x0C066C98u, 1);  /* 0C066C96 mov.l @(disp,pc),Rn */
	W8(r8, r12); UPD(0x0C066C9Au, 1);  /* 0C066C98 mov.b Rm,@Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r9); r9 += 1; r11 = v_; } UPD(0x0C066C9Cu, 1);  /* 0C066C9A mov.b @Rm+,Rn */
	r8 += 0xFFFFFFF4u;  /* 0C066C9C add #imm,Rn */
	r5 = 0xC2B1A58u; UPD(0x0C066CA0u, 2);  /* 0C066C9E mov.l @(disp,pc),Rn */
	W8(r8, r11); UPD(0x0C066CA2u, 1);  /* 0C066CA0 mov.b Rm,@Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r5); r5 += 1; r10 = v_; } UPD(0x0C066CA4u, 1);  /* 0C066CA2 mov.b @Rm+,Rn */
	r8 += 0x1u;  /* 0C066CA4 add #imm,Rn */
	r4 = 0xC3C8690u; UPD(0x0C066CA8u, 2);  /* 0C066CA6 mov.l @(disp,pc),Rn */
	W8(r8, r10); UPD(0x0C066CAAu, 1);  /* 0C066CA8 mov.b Rm,@Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r4); r4 += 1; r7 = v_; } UPD(0x0C066CACu, 1);  /* 0C066CAA mov.b @Rm+,Rn */
	r8 += 0x1u;  /* 0C066CAC add #imm,Rn */
	W8(r8, r7); UPD(0x0C066CB0u, 2);  /* 0C066CAE mov.b Rm,@Rn */
	r6 = (u32)(s32)(s8)R8(r9); UPD(0x0C066CB2u, 1);  /* 0C066CB0 mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C066CB2 add #imm,Rn */
	W8(r8, r6); UPD(0x0C066CB6u, 2);  /* 0C066CB4 mov.b Rm,@Rn */
	r2 = (u32)(s32)(s8)R8(r5); UPD(0x0C066CB8u, 1);  /* 0C066CB6 mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C066CB8 add #imm,Rn */
	W8(r8, r2); UPD(0x0C066CBCu, 2);  /* 0C066CBA mov.b Rm,@Rn */
	r3 = (u32)(s32)(s8)R8(r4); UPD(0x0C066CBEu, 1);  /* 0C066CBC mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C066CBE add #imm,Rn */
	r0 = 0xC3CA6F8u; UPD(0x0C066CC2u, 2);  /* 0C066CC0 mov.l @(disp,pc),Rn */
	W8(r8, r3); UPD(0x0C066CC4u, 1);  /* 0C066CC2 mov.b Rm,@Rn */
	r12 = (u32)(s32)(s8)R8(r0); UPD(0x0C066CC6u, 1);  /* 0C066CC4 mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C066CC6 add #imm,Rn */
	r11 = 0xC2860FCu; UPD(0x0C066CCAu, 2);  /* 0C066CC8 mov.l @(disp,pc),Rn */
	W8(r8, r12); UPD(0x0C066CCCu, 1);  /* 0C066CCA mov.b Rm,@Rn */
	r10 = (u32)(s32)(s8)R8(r11); UPD(0x0C066CCEu, 1);  /* 0C066CCC mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C066CCE add #imm,Rn */
	r9 = 0xC234C04u; UPD(0x0C066CD2u, 2);  /* 0C066CD0 mov.l @(disp,pc),Rn */
	W8(r8, r10); UPD(0x0C066CD4u, 1);  /* 0C066CD2 mov.b Rm,@Rn */
	r7 = (u32)(s32)(s8)R8(r9); UPD(0x0C066CD6u, 1);  /* 0C066CD4 mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C066CD6 add #imm,Rn */
	r6 = 0xC23DEA4u; UPD(0x0C066CDAu, 2);  /* 0C066CD8 mov.l @(disp,pc),Rn */
	W8(r8, r7); UPD(0x0C066CDCu, 1);  /* 0C066CDA mov.b Rm,@Rn */
	r5 = (u32)(s32)(s8)R8(r6); UPD(0x0C066CDEu, 1);  /* 0C066CDC mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C066CDE add #imm,Rn */
	r4 = 0xC234BA8u; UPD(0x0C066CE2u, 2);  /* 0C066CE0 mov.l @(disp,pc),Rn */
	W8(r8, r5); UPD(0x0C066CE4u, 1);  /* 0C066CE2 mov.b Rm,@Rn */
	r2 = (u32)(s32)(s8)R8(r4); UPD(0x0C066CE6u, 1);  /* 0C066CE4 mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C066CE6 add #imm,Rn */
	r3 = 0xC239483u; UPD(0x0C066CEAu, 2);  /* 0C066CE8 mov.l @(disp,pc),Rn */
	W8(r8, r2); UPD(0x0C066CECu, 1);  /* 0C066CEA mov.b Rm,@Rn */
	r0 = (u32)(s32)(s8)R8(r3); UPD(0x0C066CEEu, 1);  /* 0C066CEC mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C066CEE add #imm,Rn */
	r12 = 0xC3C43B8u; UPD(0x0C066CF2u, 2);  /* 0C066CF0 mov.l @(disp,pc),Rn */
	W8(r8, r0); UPD(0x0C066CF4u, 1);  /* 0C066CF2 mov.b Rm,@Rn */
	r11 = (u32)(s32)(s8)R8(r12); UPD(0x0C066CF6u, 1);  /* 0C066CF4 mov.b @Rm,Rn */
	r8 += 0x2u;  /* 0C066CF6 add #imm,Rn */
	r10 = 0xC3C848Cu; UPD(0x0C066CFAu, 2);  /* 0C066CF8 mov.l @(disp,pc),Rn */
	W8(r8, r11); UPD(0x0C066CFCu, 1);  /* 0C066CFA mov.b Rm,@Rn */
	r9 = (u32)(s32)(s8)R8(r10); UPD(0x0C066CFEu, 1);  /* 0C066CFC mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C066CFE add #imm,Rn */
	r7 = 0xC2B037Au; UPD(0x0C066D02u, 2);  /* 0C066D00 mov.l @(disp,pc),Rn */
	W8(r8, r9); UPD(0x0C066D04u, 1);  /* 0C066D02 mov.b Rm,@Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C066D06u, 1);  /* 0C066D04 mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C066D06 add #imm,Rn */
	r5 = 0xC2380CBu; UPD(0x0C066D0Au, 2);  /* 0C066D08 mov.l @(disp,pc),Rn */
	W8(r8, r6); UPD(0x0C066D0Cu, 1);  /* 0C066D0A mov.b Rm,@Rn */
	r4 = (u32)(s32)(s8)R8(r5); UPD(0x0C066D0Eu, 1);  /* 0C066D0C mov.b @Rm,Rn */
	r8 += 0x1u; UPD(0x0C066D10u, 1);  /* 0C066D0E add #imm,Rn */
	W8(r8, r4); UPD(0x0C066D12u, 1);  /* 0C066D10 mov.b Rm,@Rn */
	r5 = 0x0u;  /* 0C066D12 mov #imm,Rn */
	r2 = 0xC2289E7u; UPD(0x0C066D16u, 2);  /* 0C066D14 mov.l @(disp,pc),Rn */
	r8 += 0x1u;  /* 0C066D16 add #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r2); UPD(0x0C066D1Au, 2);  /* 0C066D18 mov.b @Rm,Rn */
	r6 = 0x40u;  /* 0C066D1A mov #imm,Rn */
	r0 = 0xC233723u; UPD(0x0C066D1Eu, 2);  /* 0C066D1C mov.l @(disp,pc),Rn */
	W8(r8, r3); UPD(0x0C066D20u, 1);  /* 0C066D1E mov.b Rm,@Rn */
	r12 = (u32)(s32)(s8)R8(r0); UPD(0x0C066D22u, 1);  /* 0C066D20 mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C066D22 add #imm,Rn */
	r11 = 0xC286313u; UPD(0x0C066D26u, 2);  /* 0C066D24 mov.l @(disp,pc),Rn */
	W8(r8, r12); UPD(0x0C066D28u, 1);  /* 0C066D26 mov.b Rm,@Rn */
	r10 = (u32)(s32)(s8)R8(r11); UPD(0x0C066D2Au, 1);  /* 0C066D28 mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C066D2A add #imm,Rn */
	W8(r8, r10); UPD(0x0C066D2Eu, 2);  /* 0C066D2C mov.b Rm,@Rn */
	r9 = 0xC05DAA8u; UPD(0x0C066D30u, 1);  /* 0C066D2E mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFEDu;  /* 0C066D30 add #imm,Rn */
	IF(0x0C066D32u); { u32 t_ = r9; PR = 0x0C066D36u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C05DAA8, 0x0C05DAA8u, 0x0C066D36u); }  /* 0C066D32 jsr @Rn */
L_0C066D36: BLKS(0x0C066D36u);
	r3 = 0xC2B1824u; UPD(0x0C066D38u, 1);  /* 0C066D36 mov.l @(disp,pc),Rn */
	r0 = 0x0u;  /* 0C066D38 mov #imm,Rn */
	r2 = 0x3Fu;  /* 0C066D3A mov #imm,Rn */
	UPD(0x0C066D3Cu, 2);
L_0C066D3C: BLKS(0x0C066D3Cu);
	IF(0x0C066D3Cu); r5 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C066D3Eu, 1);  /* 0C066D3C mov.b @(r0,Rm),Rn */
	r4 = r0;  /* 0C066D3E mov Rm,Rn */
	IF(0x0C066D40u); W8(r0 + r3, r5); UPD(0x0C066D42u, 2);  /* 0C066D40 mov.b Rm,@(r0,Rn) */
	r4 += 0x1u;  /* 0C066D42 add #imm,Rn */
	r0 = (u32)(s32)(s16)r4;  /* 0C066D44 exts.w Rm,Rn */
	T = (s32)r0 > (s32)r2;  /* 0C066D46 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r12 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C066D3Cu, 6); goto L_0C066D3C; } goto L_0C066D4C; }  /* 0C066D48 bf/s */
L_0C066D4C: BLKS(0x0C066D4Cu);
	{ IF(0x0C066D4Eu); ; /* slot nop */ UPD(0x0C066BDAu, 4); goto L_0C066BDA; }  /* 0C066D4C bra */
}

/* FUN_0c066dd0 */
void blk_f_0C066DD0(sh3_t *c)
{
	LOCALS;
L_0C066DD0: BLKS(0x0C066DD0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C066DD2u, 1);  /* 0C066DD0 mov.l Rm,@-Rn */
	r0 = (u32)(s32)(s8)r4;  /* 0C066DD2 exts.b Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C066DD6u, 2);  /* 0C066DD4 mov.l Rm,@-Rn */
	T = r0 == 0x6u;  /* 0C066DD6 cmp/eq #imm,r0 */
	IF(0x0C066DD8u); r15 -= 4; W32(r15, PR); UPD(0x0C066DDAu, 2);  /* 0C066DD8 sts.l pr,@-Rn */
	r8 = (u32)(s32)(s8)r5;  /* 0C066DDA exts.b Rm,Rn */
	r14 = r15;  /* 0C066DDC mov Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C066DF0u, 5); goto L_0C066DF0; } UPD(0x0C066DE2u, 1); goto L_0C066DE2; }  /* 0C066DDE bt/s */
L_0C066DE2: BLKS(0x0C066DE2u);
	r15 = r14;  /* 0C066DE2 mov Rm,Rn */
	IF(0x0C066DE4u); PR = R32(r15); r15 += 4; UPD(0x0C066DE6u, 2);  /* 0C066DE4 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C066DE8u, 1);  /* 0C066DE6 mov.l @Rm+,Rn */
	IF(0x0C066DE8u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C066DE8 rts */
L_0C066DF0: BLKS(0x0C066DF0u);
	r0 = 0x3u;  /* 0C066DF0 mov #imm,Rn */
	T = r8 > r0;  /* 0C066DF2 cmp/hi Rm,Rn */
	{ u32 c_ = T; r0 = r8; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C066DE2u, 5); goto L_0C066DE2; } goto L_0C066DF8; }  /* 0C066DF4 bt/s */
L_0C066DF8: BLKS(0x0C066DF8u);
	r1 = r8;  /* 0C066DF8 mov Rm,Rn */
	r0 = 0xC066E04u;  /* 0C066DFA mova @(disp,pc),r0 */
	IF(0x0C066DFCu); r3 = (u32)(s32)(s8)R8(r0 + r1); UPD(0x0C066DFEu, 4);  /* 0C066DFC mov.b @(r0,Rm),Rn */
	IF(0x0C066DFEu); { u32 tv_ = (r3 + 0x0C066E02u); u32 t_ = PHYS(tv_); IF(0x0C066E00u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C066E10u: goto L_0C066E10; case 0x0C066E2Cu: goto L_0C066E2C; case 0x0C066E30u: goto L_0C066E30; case 0x0C066E50u: goto L_0C066E50; default: JUMPD(tv_); } }  /* 0C066DFE braf Rn */
L_0C066E10: BLKS(0x0C066E10u);
	r4 = 0xC172B90u; UPD(0x0C066E12u, 1);  /* 0C066E10 mov.l @(disp,pc),Rn */
L_0C066E12: BLKS(0x0C066E12u);
	r0 = 0xC0626E0u; UPD(0x0C066E14u, 1);  /* 0C066E12 mov.l @(disp,pc),Rn */
	r5 = 0x7u;  /* 0C066E14 mov #imm,Rn */
	r7 = 0xC0404000u; UPD(0x0C066E18u, 2);  /* 0C066E16 mov.l @(disp,pc),Rn */
	IF(0x0C066E18u); { u32 t_ = r0; PR = 0x0C066E1Cu; r6 = 0x6u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C066E1Cu); }  /* 0C066E18 jsr @Rn */
L_0C066E1C: BLKS(0x0C066E1Cu);
	r5 = 0xC297738u; UPD(0x0C066E1Eu, 1);  /* 0C066E1C mov.l @(disp,pc),Rn */
	r2 = 0x100u; UPD(0x0C066E20u, 1);  /* 0C066E1E mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)R16(r5); UPD(0x0C066E22u, 1);  /* 0C066E20 mov.w @Rm,Rn */
	T = (r2 & r4) == 0;  /* 0C066E22 tst Rm,Rn */
	if (T) { UPD(0x0C066E2Cu, 4); goto L_0C066E2C; }  /* 0C066E24 bt */
L_0C066E26: BLKS(0x0C066E26u);
	r4 = r8;  /* 0C066E26 mov Rm,Rn */
	UPD(0x0C066E28u, 1);
L_0C066E28: BLKS(0x0C066E28u);
	r4 += 0x1u;  /* 0C066E28 add #imm,Rn */
	r8 = (u32)(s32)(s8)r4;  /* 0C066E2A exts.b Rm,Rn */
	UPD(0x0C066E2Cu, 2);
L_0C066E2C: BLKS(0x0C066E2Cu);
	{ r0 = r8; /* slot mov Rm,Rn */ UPD(0x0C066DE2u, 3); goto L_0C066DE2; }  /* 0C066E2C bra */
L_0C066E30: BLKS(0x0C066E30u);
	r0 = 0xC067290u; UPD(0x0C066E32u, 1);  /* 0C066E30 mov.l @(disp,pc),Rn */
	IF(0x0C066E32u); { u32 t_ = r0; PR = 0x0C066E36u; IF(0x0C066E34u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C067290, 0x0C067290u, 0x0C066E36u); }  /* 0C066E32 jsr @Rn */
L_0C066E36: BLKS(0x0C066E36u);
	T = (r0 & r0) == 0;  /* 0C066E36 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x3u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C066DE2u, 4); goto L_0C066DE2; } goto L_0C066E3C; }  /* 0C066E38 bf/s */
L_0C066E3C: BLKS(0x0C066E3Cu);
	r4 = 0xC172BA8u; UPD(0x0C066E3Eu, 2);  /* 0C066E3C mov.l @(disp,pc),Rn */
	{ IF(0x0C066E40u); ; /* slot nop */ UPD(0x0C066E12u, 3); goto L_0C066E12; }  /* 0C066E3E bra */
L_0C066E50: BLKS(0x0C066E50u);
	r0 = 0xC0626E0u; UPD(0x0C066E52u, 1);  /* 0C066E50 mov.l @(disp,pc),Rn */
	r6 = 0x6u;  /* 0C066E52 mov #imm,Rn */
	r7 = 0xC0404000u; UPD(0x0C066E56u, 2);  /* 0C066E54 mov.l @(disp,pc),Rn */
	r4 = 0xC172B74u; UPD(0x0C066E58u, 1);  /* 0C066E56 mov.l @(disp,pc),Rn */
	IF(0x0C066E58u); { u32 t_ = r0; PR = 0x0C066E5Cu; r5 = 0x7u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C066E5Cu); }  /* 0C066E58 jsr @Rn */
L_0C066E5C: BLKS(0x0C066E5Cu);
	r0 = 0xC297738u; UPD(0x0C066E5Eu, 1);  /* 0C066E5C mov.l @(disp,pc),Rn */
	r7 = 0x100u; UPD(0x0C066E60u, 1);  /* 0C066E5E mov.w @(disp,pc),Rn */
	r6 = (u32)(s32)(s16)R16(r0); UPD(0x0C066E62u, 1);  /* 0C066E60 mov.w @Rm,Rn */
	T = (r7 & r6) == 0;  /* 0C066E62 tst Rm,Rn */
	if (T) { UPD(0x0C066E2Cu, 4); goto L_0C066E2C; }  /* 0C066E64 bt */
L_0C066E66: BLKS(0x0C066E66u);
	r3 = 0xC0654D0u; UPD(0x0C066E68u, 1);  /* 0C066E66 mov.l @(disp,pc),Rn */
	IF(0x0C066E68u); { u32 t_ = r3; PR = 0x0C066E6Cu; IF(0x0C066E6Au); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0654D0, 0x0C0654D0u, 0x0C066E6Cu); }  /* 0C066E68 jsr @Rn */
L_0C066E6C: BLKS(0x0C066E6Cu);
	{ r4 = r8; /* slot mov Rm,Rn */ UPD(0x0C066E28u, 3); goto L_0C066E28; }  /* 0C066E6C bra */
}

void blk_f_0C066EA0(sh3_t *c)
{
	LOCALS;
L_0C066EA0: BLKS(0x0C066EA0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C066EA2u, 1);  /* 0C066EA0 mov.l Rm,@-Rn */
	r0 = (u32)(s32)(s8)r4;  /* 0C066EA2 exts.b Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C066EA6u, 2);  /* 0C066EA4 mov.l Rm,@-Rn */
	T = r0 == 0x12u;  /* 0C066EA6 cmp/eq #imm,r0 */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C066EAAu, 2);  /* 0C066EA8 mov.l Rm,@-Rn */
	r0 = 0x0u;  /* 0C066EAA mov #imm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C066EAEu, 2);  /* 0C066EAC mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C066EB0u, 1);  /* 0C066EAE mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C066EB2u, 1);  /* 0C066EB0 mov.l Rm,@-Rn */
	r12 = (u32)(s32)(s8)r5;  /* 0C066EB2 exts.b Rm,Rn */
	IF(0x0C066EB4u); r15 -= 4; W32(r15, PR); UPD(0x0C066EB6u, 2);  /* 0C066EB4 sts.l pr,@-Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C066ED0u, 3); goto L_0C066ED0; } UPD(0x0C066EBAu, 1); goto L_0C066EBA; }  /* 0C066EB6 bt/s */
L_0C066EBA: BLKS(0x0C066EBAu);
	r15 = r14;  /* 0C066EBA mov Rm,Rn */
	IF(0x0C066EBCu); PR = R32(r15); r15 += 4; UPD(0x0C066EBEu, 2);  /* 0C066EBC lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C066EC0u, 1);  /* 0C066EBE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C066EC2u, 1);  /* 0C066EC0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C066EC4u, 1);  /* 0C066EC2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C066EC6u, 1);  /* 0C066EC4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C066EC8u, 1);  /* 0C066EC6 mov.l @Rm+,Rn */
	IF(0x0C066EC8u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C066EC8 rts */
L_0C066ED0: BLKS(0x0C066ED0u);
	r0 = 0x3u;  /* 0C066ED0 mov #imm,Rn */
	T = r12 > r0;  /* 0C066ED2 cmp/hi Rm,Rn */
	{ u32 c_ = T; r0 = r12; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C066EBAu, 5); goto L_0C066EBA; } goto L_0C066ED8; }  /* 0C066ED4 bt/s */
L_0C066ED8: BLKS(0x0C066ED8u);
	r1 = r12;  /* 0C066ED8 mov Rm,Rn */
	r0 = 0xC066EE4u;  /* 0C066EDA mova @(disp,pc),r0 */
	IF(0x0C066EDCu); r3 = (u32)(s32)(s8)R8(r0 + r1); UPD(0x0C066EDEu, 4);  /* 0C066EDC mov.b @(r0,Rm),Rn */
	r3 = r3 & 0xFF;  /* 0C066EDE extu.b Rm,Rn */
	IF(0x0C066EE0u); { u32 tv_ = (r3 + 0x0C066EE4u); u32 t_ = PHYS(tv_); IF(0x0C066EE2u); ; /* slot nop */ JRGN(tv_); UPD(t_, 4); switch (t_) { case 0x0C066EF0u: goto L_0C066EF0; case 0x0C066F50u: goto L_0C066F50; case 0x0C066F60u: goto L_0C066F60; case 0x0C066FC0u: goto L_0C066FC0; default: JUMPD(tv_); } }  /* 0C066EE0 braf Rn */
L_0C066EF0: BLKS(0x0C066EF0u);
	r9 = 0xC0626E0u; UPD(0x0C066EF2u, 1);  /* 0C066EF0 mov.l @(disp,pc),Rn */
	r5 = 0x9u;  /* 0C066EF2 mov #imm,Rn */
	r11 = 0xC1736C0u; UPD(0x0C066EF6u, 2);  /* 0C066EF4 mov.l @(disp,pc),Rn */
	r6 = 0x4u;  /* 0C066EF6 mov #imm,Rn */
	r8 = 0xC0404000u; UPD(0x0C066EFAu, 2);  /* 0C066EF8 mov.l @(disp,pc),Rn */
	r10 = 0xC1736C4u; UPD(0x0C066EFCu, 1);  /* 0C066EFA mov.l @(disp,pc),Rn */
	r7 = r8;  /* 0C066EFC mov Rm,Rn */
	IF(0x0C066EFEu); { u32 t_ = r9; PR = 0x0C066F02u; r4 = R32(r11); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C066F02u); }  /* 0C066EFE jsr @Rn */
L_0C066F02: BLKS(0x0C066F02u);
	r4 = R32(r10); UPD(0x0C066F04u, 1);  /* 0C066F02 mov.l @Rm,Rn */
	r5 = 0x8u;  /* 0C066F04 mov #imm,Rn */
	r6 = 0x4u;  /* 0C066F06 mov #imm,Rn */
	IF(0x0C066F08u); { u32 t_ = r9; PR = 0x0C066F0Cu; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C066F0Cu); }  /* 0C066F08 jsr @Rn */
L_0C066F0C: BLKS(0x0C066F0Cu);
	r4 = R32(r10); UPD(0x0C066F0Eu, 1);  /* 0C066F0C mov.l @Rm,Rn */
	r5 = 0x7u;  /* 0C066F0E mov #imm,Rn */
	r6 = 0x4u;  /* 0C066F10 mov #imm,Rn */
	IF(0x0C066F12u); { u32 t_ = r9; PR = 0x0C066F16u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C066F16u); }  /* 0C066F12 jsr @Rn */
L_0C066F16: BLKS(0x0C066F16u);
	r4 = R32(r10); UPD(0x0C066F18u, 1);  /* 0C066F16 mov.l @Rm,Rn */
	r5 = 0x6u;  /* 0C066F18 mov #imm,Rn */
	r6 = 0x4u;  /* 0C066F1A mov #imm,Rn */
	IF(0x0C066F1Cu); { u32 t_ = r9; PR = 0x0C066F20u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C066F20u); }  /* 0C066F1C jsr @Rn */
L_0C066F20: BLKS(0x0C066F20u);
	r4 = R32(r10); UPD(0x0C066F22u, 1);  /* 0C066F20 mov.l @Rm,Rn */
	r5 = 0x5u;  /* 0C066F22 mov #imm,Rn */
	r6 = 0x4u;  /* 0C066F24 mov #imm,Rn */
	IF(0x0C066F26u); { u32 t_ = r9; PR = 0x0C066F2Au; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C066F2Au); }  /* 0C066F26 jsr @Rn */
L_0C066F2A: BLKS(0x0C066F2Au);
	r4 = R32(r11); UPD(0x0C066F2Cu, 1);  /* 0C066F2A mov.l @Rm,Rn */
	r5 = 0x4u;  /* 0C066F2C mov #imm,Rn */
	r6 = 0x4u;  /* 0C066F2E mov #imm,Rn */
	IF(0x0C066F30u); { u32 t_ = r9; PR = 0x0C066F34u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C066F34u); }  /* 0C066F30 jsr @Rn */
L_0C066F34: BLKS(0x0C066F34u);
	r4 = 0xC172B90u; UPD(0x0C066F36u, 1);  /* 0C066F34 mov.l @(disp,pc),Rn */
	r5 = 0x7u;  /* 0C066F36 mov #imm,Rn */
	UPD(0x0C066F38u, 1);
L_0C066F38: BLKS(0x0C066F38u);
	r6 = 0x6u;  /* 0C066F38 mov #imm,Rn */
	IF(0x0C066F3Au); { u32 t_ = r9; PR = 0x0C066F3Eu; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C066F3Eu); }  /* 0C066F3A jsr @Rn */
L_0C066F3E: BLKS(0x0C066F3Eu);
	r5 = 0xC297738u; UPD(0x0C066F40u, 1);  /* 0C066F3E mov.l @(disp,pc),Rn */
	r2 = 0x100u; UPD(0x0C066F42u, 1);  /* 0C066F40 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)R16(r5); UPD(0x0C066F44u, 1);  /* 0C066F42 mov.w @Rm,Rn */
	T = (r2 & r4) == 0;  /* 0C066F44 tst Rm,Rn */
	if (T) { UPD(0x0C066F50u, 4); goto L_0C066F50; }  /* 0C066F46 bt */
L_0C066F48: BLKS(0x0C066F48u);
	r11 = r12;  /* 0C066F48 mov Rm,Rn */
	r11 += 0x1u;  /* 0C066F4A add #imm,Rn */
	UPD(0x0C066F4Cu, 2);
L_0C066F4C: BLKS(0x0C066F4Cu);
	r12 = (u32)(s32)(s8)r11;  /* 0C066F4C exts.b Rm,Rn */
	IF(0x0C066F4Eu); ;  /* 0C066F4E nop */
	UPD(0x0C066F50u, 2);
L_0C066F50: BLKS(0x0C066F50u);
	{ r0 = r12; /* slot mov Rm,Rn */ UPD(0x0C066EBAu, 3); goto L_0C066EBA; }  /* 0C066F50 bra */
L_0C066F60: BLKS(0x0C066F60u);
	r8 = 0xC067290u; UPD(0x0C066F62u, 1);  /* 0C066F60 mov.l @(disp,pc),Rn */
	IF(0x0C066F62u); { u32 t_ = r8; PR = 0x0C066F66u; IF(0x0C066F64u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C067290, 0x0C067290u, 0x0C066F66u); }  /* 0C066F62 jsr @Rn */
L_0C066F66: BLKS(0x0C066F66u);
	T = (r0 & r0) == 0;  /* 0C066F66 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x3u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C066EBAu, 4); goto L_0C066EBA; } goto L_0C066F6C; }  /* 0C066F68 bf/s */
L_0C066F6C: BLKS(0x0C066F6Cu);
	r9 = 0xC0626E0u; UPD(0x0C066F6Eu, 2);  /* 0C066F6C mov.l @(disp,pc),Rn */
	r5 = 0x9u;  /* 0C066F6E mov #imm,Rn */
	r11 = 0xC1736C0u; UPD(0x0C066F72u, 2);  /* 0C066F70 mov.l @(disp,pc),Rn */
	r6 = 0x4u;  /* 0C066F72 mov #imm,Rn */
	r8 = 0xC0404000u; UPD(0x0C066F76u, 2);  /* 0C066F74 mov.l @(disp,pc),Rn */
	r10 = 0xC1736C4u; UPD(0x0C066F78u, 1);  /* 0C066F76 mov.l @(disp,pc),Rn */
	r7 = r8;  /* 0C066F78 mov Rm,Rn */
	IF(0x0C066F7Au); { u32 t_ = r9; PR = 0x0C066F7Eu; r4 = R32(r11); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C066F7Eu); }  /* 0C066F7A jsr @Rn */
L_0C066F7E: BLKS(0x0C066F7Eu);
	r4 = R32(r10); UPD(0x0C066F80u, 1);  /* 0C066F7E mov.l @Rm,Rn */
	r5 = 0x8u;  /* 0C066F80 mov #imm,Rn */
	r6 = 0x4u;  /* 0C066F82 mov #imm,Rn */
	IF(0x0C066F84u); { u32 t_ = r9; PR = 0x0C066F88u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C066F88u); }  /* 0C066F84 jsr @Rn */
L_0C066F88: BLKS(0x0C066F88u);
	r4 = R32(r10); UPD(0x0C066F8Au, 1);  /* 0C066F88 mov.l @Rm,Rn */
	r5 = 0x7u;  /* 0C066F8A mov #imm,Rn */
	r6 = 0x4u;  /* 0C066F8C mov #imm,Rn */
	IF(0x0C066F8Eu); { u32 t_ = r9; PR = 0x0C066F92u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C066F92u); }  /* 0C066F8E jsr @Rn */
L_0C066F92: BLKS(0x0C066F92u);
	r4 = R32(r10); UPD(0x0C066F94u, 1);  /* 0C066F92 mov.l @Rm,Rn */
	r5 = 0x6u;  /* 0C066F94 mov #imm,Rn */
	r6 = 0x4u;  /* 0C066F96 mov #imm,Rn */
	IF(0x0C066F98u); { u32 t_ = r9; PR = 0x0C066F9Cu; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C066F9Cu); }  /* 0C066F98 jsr @Rn */
L_0C066F9C: BLKS(0x0C066F9Cu);
	r4 = R32(r10); UPD(0x0C066F9Eu, 1);  /* 0C066F9C mov.l @Rm,Rn */
	r5 = 0x5u;  /* 0C066F9E mov #imm,Rn */
	r6 = 0x4u;  /* 0C066FA0 mov #imm,Rn */
	IF(0x0C066FA2u); { u32 t_ = r9; PR = 0x0C066FA6u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C066FA6u); }  /* 0C066FA2 jsr @Rn */
L_0C066FA6: BLKS(0x0C066FA6u);
	r4 = R32(r11); UPD(0x0C066FA8u, 1);  /* 0C066FA6 mov.l @Rm,Rn */
	r5 = 0x4u;  /* 0C066FA8 mov #imm,Rn */
	r6 = 0x4u;  /* 0C066FAA mov #imm,Rn */
	IF(0x0C066FACu); { u32 t_ = r9; PR = 0x0C066FB0u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C066FB0u); }  /* 0C066FAC jsr @Rn */
L_0C066FB0: BLKS(0x0C066FB0u);
	r4 = 0xC172BA8u; UPD(0x0C066FB2u, 1);  /* 0C066FB0 mov.l @(disp,pc),Rn */
	{ r5 = 0x7u; /* slot mov #imm,Rn */ UPD(0x0C066F38u, 3); goto L_0C066F38; }  /* 0C066FB2 bra */
L_0C066FC0: BLKS(0x0C066FC0u);
	r9 = 0xC0626E0u; UPD(0x0C066FC2u, 1);  /* 0C066FC0 mov.l @(disp,pc),Rn */
	r5 = 0x9u;  /* 0C066FC2 mov #imm,Rn */
	r11 = 0xC1736C0u; UPD(0x0C066FC6u, 2);  /* 0C066FC4 mov.l @(disp,pc),Rn */
	r6 = 0x4u;  /* 0C066FC6 mov #imm,Rn */
	r8 = 0xC0404000u; UPD(0x0C066FCAu, 2);  /* 0C066FC8 mov.l @(disp,pc),Rn */
	r10 = 0xC1736C4u; UPD(0x0C066FCCu, 1);  /* 0C066FCA mov.l @(disp,pc),Rn */
	r7 = r8;  /* 0C066FCC mov Rm,Rn */
	IF(0x0C066FCEu); { u32 t_ = r9; PR = 0x0C066FD2u; r4 = R32(r11); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C066FD2u); }  /* 0C066FCE jsr @Rn */
L_0C066FD2: BLKS(0x0C066FD2u);
	r4 = R32(r10); UPD(0x0C066FD4u, 1);  /* 0C066FD2 mov.l @Rm,Rn */
	r5 = 0x8u;  /* 0C066FD4 mov #imm,Rn */
	r6 = 0x4u;  /* 0C066FD6 mov #imm,Rn */
	IF(0x0C066FD8u); { u32 t_ = r9; PR = 0x0C066FDCu; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C066FDCu); }  /* 0C066FD8 jsr @Rn */
L_0C066FDC: BLKS(0x0C066FDCu);
	r4 = R32(r10); UPD(0x0C066FDEu, 1);  /* 0C066FDC mov.l @Rm,Rn */
	r5 = 0x7u;  /* 0C066FDE mov #imm,Rn */
	r6 = 0x4u;  /* 0C066FE0 mov #imm,Rn */
	IF(0x0C066FE2u); { u32 t_ = r9; PR = 0x0C066FE6u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C066FE6u); }  /* 0C066FE2 jsr @Rn */
L_0C066FE6: BLKS(0x0C066FE6u);
	r4 = R32(r10); UPD(0x0C066FE8u, 1);  /* 0C066FE6 mov.l @Rm,Rn */
	r5 = 0x6u;  /* 0C066FE8 mov #imm,Rn */
	r6 = 0x4u;  /* 0C066FEA mov #imm,Rn */
	IF(0x0C066FECu); { u32 t_ = r9; PR = 0x0C066FF0u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C066FF0u); }  /* 0C066FEC jsr @Rn */
L_0C066FF0: BLKS(0x0C066FF0u);
	r4 = R32(r10); UPD(0x0C066FF2u, 1);  /* 0C066FF0 mov.l @Rm,Rn */
	r5 = 0x5u;  /* 0C066FF2 mov #imm,Rn */
	r6 = 0x4u;  /* 0C066FF4 mov #imm,Rn */
	IF(0x0C066FF6u); { u32 t_ = r9; PR = 0x0C066FFAu; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C066FFAu); }  /* 0C066FF6 jsr @Rn */
L_0C066FFA: BLKS(0x0C066FFAu);
	r4 = R32(r11); UPD(0x0C066FFCu, 1);  /* 0C066FFA mov.l @Rm,Rn */
	r5 = 0x4u;  /* 0C066FFC mov #imm,Rn */
	r6 = 0x4u;  /* 0C066FFE mov #imm,Rn */
	IF(0x0C067000u); { u32 t_ = r9; PR = 0x0C067004u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C067004u); }  /* 0C067000 jsr @Rn */
L_0C067004: BLKS(0x0C067004u);
	r6 = 0x6u;  /* 0C067004 mov #imm,Rn */
	r7 = r8;  /* 0C067006 mov Rm,Rn */
	r4 = 0xC172B74u; UPD(0x0C06700Au, 3);  /* 0C067008 mov.l @(disp,pc),Rn */
	IF(0x0C06700Au); { u32 t_ = r9; PR = 0x0C06700Eu; r5 = 0x7u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C06700Eu); }  /* 0C06700A jsr @Rn */
L_0C06700E: BLKS(0x0C06700Eu);
	r9 = 0xC297738u; UPD(0x0C067010u, 1);  /* 0C06700E mov.l @(disp,pc),Rn */
	r7 = 0x100u; UPD(0x0C067012u, 1);  /* 0C067010 mov.w @(disp,pc),Rn */
	r6 = (u32)(s32)(s16)R16(r9); UPD(0x0C067014u, 1);  /* 0C067012 mov.w @Rm,Rn */
	T = (r7 & r6) == 0;  /* 0C067014 tst Rm,Rn */
	if (T) { UPD(0x0C066F50u, 4); goto L_0C066F50; }  /* 0C067016 bt */
L_0C067018: BLKS(0x0C067018u);
	r10 = 0xC0654D0u; UPD(0x0C06701Au, 1);  /* 0C067018 mov.l @(disp,pc),Rn */
	IF(0x0C06701Au); { u32 t_ = r10; PR = 0x0C06701Eu; r11 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0654D0, 0x0C0654D0u, 0x0C06701Eu); }  /* 0C06701A jsr @Rn */
L_0C06701E: BLKS(0x0C06701Eu);
	{ r11 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C066F4Cu, 3); goto L_0C066F4C; }  /* 0C06701E bra */
}

/* FUN_0c067050 */
void blk_f_0C067050(sh3_t *c)
{
	LOCALS;
L_0C067050: BLKS(0x0C067050u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C067052u, 1);  /* 0C067050 mov.l Rm,@-Rn */
	r7 = 0xC3C542Au; UPD(0x0C067054u, 1);  /* 0C067052 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C067054 mov Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r7); UPD(0x0C067058u, 2);  /* 0C067056 mov.b @Rm,Rn */
	r4 = 0xC2322CCu; UPD(0x0C06705Au, 1);  /* 0C067058 mov.l @(disp,pc),Rn */
	r5 = 0xC3C414Cu; UPD(0x0C06705Cu, 1);  /* 0C06705A mov.l @(disp,pc),Rn */
	W8(r4, r1); UPD(0x0C06705Eu, 1);  /* 0C06705C mov.b Rm,@Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r5); r5 += 1; r3 = v_; } UPD(0x0C067060u, 1);  /* 0C06705E mov.b @Rm+,Rn */
	r4 += 0xFFFFFFF4u;  /* 0C067060 add #imm,Rn */
	r1 = 0xC2B1A58u; UPD(0x0C067064u, 2);  /* 0C067062 mov.l @(disp,pc),Rn */
	W8(r4, r3); UPD(0x0C067066u, 1);  /* 0C067064 mov.b Rm,@Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r1); r1 += 1; r0 = v_; } UPD(0x0C067068u, 1);  /* 0C067066 mov.b @Rm+,Rn */
	r4 += 0x1u;  /* 0C067068 add #imm,Rn */
	W8(r4, r0); UPD(0x0C06706Cu, 2);  /* 0C06706A mov.b Rm,@Rn */
	r0 = 0xC3C8690u; UPD(0x0C06706Eu, 1);  /* 0C06706C mov.l @(disp,pc),Rn */
	r4 += 0x1u;  /* 0C06706E add #imm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r0); r0 += 1; r6 = v_; } UPD(0x0C067072u, 2);  /* 0C067070 mov.b @Rm+,Rn */
	W8(r4, r6); UPD(0x0C067074u, 1);  /* 0C067072 mov.b Rm,@Rn */
	r7 = (u32)(s32)(s8)R8(r5); UPD(0x0C067076u, 1);  /* 0C067074 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C067076 add #imm,Rn */
	W8(r4, r7); UPD(0x0C06707Au, 2);  /* 0C067078 mov.b Rm,@Rn */
	r3 = (u32)(s32)(s8)R8(r1); UPD(0x0C06707Cu, 1);  /* 0C06707A mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C06707C add #imm,Rn */
	W8(r4, r3); UPD(0x0C067080u, 2);  /* 0C06707E mov.b Rm,@Rn */
	r5 = (u32)(s32)(s8)R8(r0); UPD(0x0C067082u, 1);  /* 0C067080 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C067082 add #imm,Rn */
	r1 = 0xC3CA6F8u; UPD(0x0C067086u, 2);  /* 0C067084 mov.l @(disp,pc),Rn */
	W8(r4, r5); UPD(0x0C067088u, 1);  /* 0C067086 mov.b Rm,@Rn */
	r0 = (u32)(s32)(s8)R8(r1); UPD(0x0C06708Au, 1);  /* 0C067088 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C06708A add #imm,Rn */
	r7 = 0xC2860FCu; UPD(0x0C06708Eu, 2);  /* 0C06708C mov.l @(disp,pc),Rn */
	W8(r4, r0); UPD(0x0C067090u, 1);  /* 0C06708E mov.b Rm,@Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C067092u, 1);  /* 0C067090 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C067092 add #imm,Rn */
	r5 = 0xC234C04u; UPD(0x0C067096u, 2);  /* 0C067094 mov.l @(disp,pc),Rn */
	W8(r4, r6); UPD(0x0C067098u, 1);  /* 0C067096 mov.b Rm,@Rn */
	r3 = (u32)(s32)(s8)R8(r5); UPD(0x0C06709Au, 1);  /* 0C067098 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C06709A add #imm,Rn */
	r1 = 0xC23DEA4u; UPD(0x0C06709Eu, 2);  /* 0C06709C mov.l @(disp,pc),Rn */
	W8(r4, r3); UPD(0x0C0670A0u, 1);  /* 0C06709E mov.b Rm,@Rn */
	r0 = (u32)(s32)(s8)R8(r1); UPD(0x0C0670A2u, 1);  /* 0C0670A0 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C0670A2 add #imm,Rn */
	r7 = 0xC234BA8u; UPD(0x0C0670A6u, 2);  /* 0C0670A4 mov.l @(disp,pc),Rn */
	W8(r4, r0); UPD(0x0C0670A8u, 1);  /* 0C0670A6 mov.b Rm,@Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C0670AAu, 1);  /* 0C0670A8 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C0670AA add #imm,Rn */
	r5 = 0xC239483u; UPD(0x0C0670AEu, 2);  /* 0C0670AC mov.l @(disp,pc),Rn */
	W8(r4, r6); UPD(0x0C0670B0u, 1);  /* 0C0670AE mov.b Rm,@Rn */
	r3 = (u32)(s32)(s8)R8(r5); UPD(0x0C0670B2u, 1);  /* 0C0670B0 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C0670B2 add #imm,Rn */
	r1 = 0xC3C43B8u; UPD(0x0C0670B6u, 2);  /* 0C0670B4 mov.l @(disp,pc),Rn */
	W8(r4, r3); UPD(0x0C0670B8u, 1);  /* 0C0670B6 mov.b Rm,@Rn */
	r0 = (u32)(s32)(s8)R8(r1); UPD(0x0C0670BAu, 1);  /* 0C0670B8 mov.b @Rm,Rn */
	r4 += 0x2u;  /* 0C0670BA add #imm,Rn */
	r7 = 0xC3C848Cu; UPD(0x0C0670BEu, 2);  /* 0C0670BC mov.l @(disp,pc),Rn */
	W8(r4, r0); UPD(0x0C0670C0u, 1);  /* 0C0670BE mov.b Rm,@Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C0670C2u, 1);  /* 0C0670C0 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C0670C2 add #imm,Rn */
	r5 = 0xC2B037Au; UPD(0x0C0670C6u, 2);  /* 0C0670C4 mov.l @(disp,pc),Rn */
	W8(r4, r6); UPD(0x0C0670C8u, 1);  /* 0C0670C6 mov.b Rm,@Rn */
	r3 = (u32)(s32)(s8)R8(r5); UPD(0x0C0670CAu, 1);  /* 0C0670C8 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C0670CA add #imm,Rn */
	r1 = 0xC2380CBu; UPD(0x0C0670CEu, 2);  /* 0C0670CC mov.l @(disp,pc),Rn */
	W8(r4, r3); UPD(0x0C0670D0u, 1);  /* 0C0670CE mov.b Rm,@Rn */
	r0 = (u32)(s32)(s8)R8(r1); UPD(0x0C0670D2u, 1);  /* 0C0670D0 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C0670D2 add #imm,Rn */
	W8(r4, r0); UPD(0x0C0670D6u, 2);  /* 0C0670D4 mov.b Rm,@Rn */
	r7 = 0xC2289E7u; UPD(0x0C0670D8u, 1);  /* 0C0670D6 mov.l @(disp,pc),Rn */
	r4 += 0x1u;  /* 0C0670D8 add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C0670DCu, 2);  /* 0C0670DA mov.b @Rm,Rn */
	r5 = 0xC233723u; UPD(0x0C0670DEu, 1);  /* 0C0670DC mov.l @(disp,pc),Rn */
	W8(r4, r6); UPD(0x0C0670E0u, 1);  /* 0C0670DE mov.b Rm,@Rn */
	r3 = (u32)(s32)(s8)R8(r5); UPD(0x0C0670E2u, 1);  /* 0C0670E0 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C0670E2 add #imm,Rn */
	r1 = 0xC286313u; UPD(0x0C0670E6u, 2);  /* 0C0670E4 mov.l @(disp,pc),Rn */
	W8(r4, r3); UPD(0x0C0670E8u, 1);  /* 0C0670E6 mov.b Rm,@Rn */
	r0 = (u32)(s32)(s8)R8(r1); UPD(0x0C0670EAu, 1);  /* 0C0670E8 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C0670EA add #imm,Rn */
	W8(r4, r0); UPD(0x0C0670EEu, 2);  /* 0C0670EC mov.b Rm,@Rn */
	r3 = 0xFu;  /* 0C0670EE mov #imm,Rn */
	r6 = 0xC234BACu; UPD(0x0C0670F2u, 2);  /* 0C0670F0 mov.l @(disp,pc),Rn */
	r4 += 0xFFFFFFEDu;  /* 0C0670F2 add #imm,Rn */
	r0 = 0x0u;  /* 0C0670F4 mov #imm,Rn */
	r7 = r4;  /* 0C0670F6 mov Rm,Rn */
	UPD(0x0C0670F8u, 3);
L_0C0670F8: BLKS(0x0C0670F8u);
	IF(0x0C0670F8u); r4 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C0670FAu, 1);  /* 0C0670F8 mov.b @(r0,Rm),Rn */
	IF(0x0C0670FAu); r2 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C0670FCu, 1);  /* 0C0670FA mov.b @(r0,Rm),Rn */
	T = r2 == r4;  /* 0C0670FC cmp/eq Rm,Rn */
	{ u32 c_ = !T; r1 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C06710Eu, 4); goto L_0C06710E; } goto L_0C067102; }  /* 0C0670FE bf/s */
L_0C067102: BLKS(0x0C067102u);
	r5 = r0;  /* 0C067102 mov Rm,Rn */
	r5 += 0x1u;  /* 0C067104 add #imm,Rn */
	r0 = (u32)(s32)(s16)r5;  /* 0C067106 exts.w Rm,Rn */
	T = (s32)r0 > (s32)r3;  /* 0C067108 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r1 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0670F8u, 8); goto L_0C0670F8; } UPD(0x0C06710Eu, 1); goto L_0C06710E; }  /* 0C06710A bf/s */
L_0C06710E: BLKS(0x0C06710Eu);
	r0 = r1;  /* 0C06710E mov Rm,Rn */
	r15 = r14;  /* 0C067110 mov Rm,Rn */
	IF(0x0C067112u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C067112 rts */
}

/* FUN_0c067170 */
void blk_f_0C067170(sh3_t *c)
{
	LOCALS;
L_0C067170: BLKS(0x0C067170u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C067172u, 1);  /* 0C067170 mov.l Rm,@-Rn */
	r7 = 0xC3C542Au; UPD(0x0C067174u, 1);  /* 0C067172 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C067174 mov Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r7); UPD(0x0C067178u, 2);  /* 0C067176 mov.b @Rm,Rn */
	r4 = 0xC2322CCu; UPD(0x0C06717Au, 1);  /* 0C067178 mov.l @(disp,pc),Rn */
	r5 = 0xC3C414Cu; UPD(0x0C06717Cu, 1);  /* 0C06717A mov.l @(disp,pc),Rn */
	W8(r4, r1); UPD(0x0C06717Eu, 1);  /* 0C06717C mov.b Rm,@Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r5); r5 += 1; r3 = v_; } UPD(0x0C067180u, 1);  /* 0C06717E mov.b @Rm+,Rn */
	r4 += 0xFFFFFFF4u;  /* 0C067180 add #imm,Rn */
	r1 = 0xC2B1A58u; UPD(0x0C067184u, 2);  /* 0C067182 mov.l @(disp,pc),Rn */
	W8(r4, r3); UPD(0x0C067186u, 1);  /* 0C067184 mov.b Rm,@Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r1); r1 += 1; r0 = v_; } UPD(0x0C067188u, 1);  /* 0C067186 mov.b @Rm+,Rn */
	r4 += 0x1u;  /* 0C067188 add #imm,Rn */
	W8(r4, r0); UPD(0x0C06718Cu, 2);  /* 0C06718A mov.b Rm,@Rn */
	r0 = 0xC3C8690u; UPD(0x0C06718Eu, 1);  /* 0C06718C mov.l @(disp,pc),Rn */
	r4 += 0x1u;  /* 0C06718E add #imm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r0); r0 += 1; r6 = v_; } UPD(0x0C067192u, 2);  /* 0C067190 mov.b @Rm+,Rn */
	W8(r4, r6); UPD(0x0C067194u, 1);  /* 0C067192 mov.b Rm,@Rn */
	r7 = (u32)(s32)(s8)R8(r5); UPD(0x0C067196u, 1);  /* 0C067194 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C067196 add #imm,Rn */
	W8(r4, r7); UPD(0x0C06719Au, 2);  /* 0C067198 mov.b Rm,@Rn */
	r3 = (u32)(s32)(s8)R8(r1); UPD(0x0C06719Cu, 1);  /* 0C06719A mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C06719C add #imm,Rn */
	W8(r4, r3); UPD(0x0C0671A0u, 2);  /* 0C06719E mov.b Rm,@Rn */
	r5 = (u32)(s32)(s8)R8(r0); UPD(0x0C0671A2u, 1);  /* 0C0671A0 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C0671A2 add #imm,Rn */
	r1 = 0xC3CA6F8u; UPD(0x0C0671A6u, 2);  /* 0C0671A4 mov.l @(disp,pc),Rn */
	W8(r4, r5); UPD(0x0C0671A8u, 1);  /* 0C0671A6 mov.b Rm,@Rn */
	r0 = (u32)(s32)(s8)R8(r1); UPD(0x0C0671AAu, 1);  /* 0C0671A8 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C0671AA add #imm,Rn */
	r7 = 0xC2860FCu; UPD(0x0C0671AEu, 2);  /* 0C0671AC mov.l @(disp,pc),Rn */
	W8(r4, r0); UPD(0x0C0671B0u, 1);  /* 0C0671AE mov.b Rm,@Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C0671B2u, 1);  /* 0C0671B0 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C0671B2 add #imm,Rn */
	r5 = 0xC234C04u; UPD(0x0C0671B6u, 2);  /* 0C0671B4 mov.l @(disp,pc),Rn */
	W8(r4, r6); UPD(0x0C0671B8u, 1);  /* 0C0671B6 mov.b Rm,@Rn */
	r3 = (u32)(s32)(s8)R8(r5); UPD(0x0C0671BAu, 1);  /* 0C0671B8 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C0671BA add #imm,Rn */
	r1 = 0xC23DEA4u; UPD(0x0C0671BEu, 2);  /* 0C0671BC mov.l @(disp,pc),Rn */
	W8(r4, r3); UPD(0x0C0671C0u, 1);  /* 0C0671BE mov.b Rm,@Rn */
	r0 = (u32)(s32)(s8)R8(r1); UPD(0x0C0671C2u, 1);  /* 0C0671C0 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C0671C2 add #imm,Rn */
	r7 = 0xC234BA8u; UPD(0x0C0671C6u, 2);  /* 0C0671C4 mov.l @(disp,pc),Rn */
	W8(r4, r0); UPD(0x0C0671C8u, 1);  /* 0C0671C6 mov.b Rm,@Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C0671CAu, 1);  /* 0C0671C8 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C0671CA add #imm,Rn */
	r5 = 0xC239483u; UPD(0x0C0671CEu, 2);  /* 0C0671CC mov.l @(disp,pc),Rn */
	W8(r4, r6); UPD(0x0C0671D0u, 1);  /* 0C0671CE mov.b Rm,@Rn */
	r3 = (u32)(s32)(s8)R8(r5); UPD(0x0C0671D2u, 1);  /* 0C0671D0 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C0671D2 add #imm,Rn */
	r1 = 0xC3C43B8u; UPD(0x0C0671D6u, 2);  /* 0C0671D4 mov.l @(disp,pc),Rn */
	W8(r4, r3); UPD(0x0C0671D8u, 1);  /* 0C0671D6 mov.b Rm,@Rn */
	r0 = (u32)(s32)(s8)R8(r1); UPD(0x0C0671DAu, 1);  /* 0C0671D8 mov.b @Rm,Rn */
	r4 += 0x2u;  /* 0C0671DA add #imm,Rn */
	r7 = 0xC3C848Cu; UPD(0x0C0671DEu, 2);  /* 0C0671DC mov.l @(disp,pc),Rn */
	W8(r4, r0); UPD(0x0C0671E0u, 1);  /* 0C0671DE mov.b Rm,@Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C0671E2u, 1);  /* 0C0671E0 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C0671E2 add #imm,Rn */
	r5 = 0xC2B037Au; UPD(0x0C0671E6u, 2);  /* 0C0671E4 mov.l @(disp,pc),Rn */
	W8(r4, r6); UPD(0x0C0671E8u, 1);  /* 0C0671E6 mov.b Rm,@Rn */
	r3 = (u32)(s32)(s8)R8(r5); UPD(0x0C0671EAu, 1);  /* 0C0671E8 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C0671EA add #imm,Rn */
	r1 = 0xC2380CBu; UPD(0x0C0671EEu, 2);  /* 0C0671EC mov.l @(disp,pc),Rn */
	W8(r4, r3); UPD(0x0C0671F0u, 1);  /* 0C0671EE mov.b Rm,@Rn */
	r0 = (u32)(s32)(s8)R8(r1); UPD(0x0C0671F2u, 1);  /* 0C0671F0 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C0671F2 add #imm,Rn */
	W8(r4, r0); UPD(0x0C0671F6u, 2);  /* 0C0671F4 mov.b Rm,@Rn */
	r7 = 0xC2289E7u; UPD(0x0C0671F8u, 1);  /* 0C0671F6 mov.l @(disp,pc),Rn */
	r4 += 0x1u;  /* 0C0671F8 add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C0671FCu, 2);  /* 0C0671FA mov.b @Rm,Rn */
	r5 = 0xC233723u; UPD(0x0C0671FEu, 1);  /* 0C0671FC mov.l @(disp,pc),Rn */
	W8(r4, r6); UPD(0x0C067200u, 1);  /* 0C0671FE mov.b Rm,@Rn */
	r3 = (u32)(s32)(s8)R8(r5); UPD(0x0C067202u, 1);  /* 0C067200 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C067202 add #imm,Rn */
	r1 = 0xC286313u; UPD(0x0C067206u, 2);  /* 0C067204 mov.l @(disp,pc),Rn */
	W8(r4, r3); UPD(0x0C067208u, 1);  /* 0C067206 mov.b Rm,@Rn */
	r0 = (u32)(s32)(s8)R8(r1); UPD(0x0C06720Au, 1);  /* 0C067208 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C06720A add #imm,Rn */
	W8(r4, r0); UPD(0x0C06720Eu, 2);  /* 0C06720C mov.b Rm,@Rn */
	r3 = 0x1Fu;  /* 0C06720E mov #imm,Rn */
	r6 = 0xC234BACu; UPD(0x0C067212u, 2);  /* 0C067210 mov.l @(disp,pc),Rn */
	r4 += 0xFFFFFFEDu;  /* 0C067212 add #imm,Rn */
	r0 = 0x10u;  /* 0C067214 mov #imm,Rn */
	r7 = r4;  /* 0C067216 mov Rm,Rn */
	UPD(0x0C067218u, 3);
L_0C067218: BLKS(0x0C067218u);
	IF(0x0C067218u); r4 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C06721Au, 1);  /* 0C067218 mov.b @(r0,Rm),Rn */
	IF(0x0C06721Au); r2 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C06721Cu, 1);  /* 0C06721A mov.b @(r0,Rm),Rn */
	T = r2 == r4;  /* 0C06721C cmp/eq Rm,Rn */
	{ u32 c_ = !T; r1 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C06722Eu, 4); goto L_0C06722E; } goto L_0C067222; }  /* 0C06721E bf/s */
L_0C067222: BLKS(0x0C067222u);
	r5 = r0;  /* 0C067222 mov Rm,Rn */
	r5 += 0x1u;  /* 0C067224 add #imm,Rn */
	r0 = (u32)(s32)(s16)r5;  /* 0C067226 exts.w Rm,Rn */
	T = (s32)r0 > (s32)r3;  /* 0C067228 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r1 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C067218u, 8); goto L_0C067218; } UPD(0x0C06722Eu, 1); goto L_0C06722E; }  /* 0C06722A bf/s */
L_0C06722E: BLKS(0x0C06722Eu);
	r0 = r1;  /* 0C06722E mov Rm,Rn */
	r15 = r14;  /* 0C067230 mov Rm,Rn */
	IF(0x0C067232u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C067232 rts */
}

/* FUN_0c067290 */
void blk_f_0C067290(sh3_t *c)
{
	LOCALS;
L_0C067290: BLKS(0x0C067290u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C067292u, 1);  /* 0C067290 mov.l Rm,@-Rn */
	r7 = 0xC3C542Au; UPD(0x0C067294u, 1);  /* 0C067292 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C067294 mov Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r7); UPD(0x0C067298u, 2);  /* 0C067296 mov.b @Rm,Rn */
	r4 = 0xC2322CCu; UPD(0x0C06729Au, 1);  /* 0C067298 mov.l @(disp,pc),Rn */
	r5 = 0xC3C414Cu; UPD(0x0C06729Cu, 1);  /* 0C06729A mov.l @(disp,pc),Rn */
	W8(r4, r1); UPD(0x0C06729Eu, 1);  /* 0C06729C mov.b Rm,@Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r5); r5 += 1; r3 = v_; } UPD(0x0C0672A0u, 1);  /* 0C06729E mov.b @Rm+,Rn */
	r4 += 0xFFFFFFF4u;  /* 0C0672A0 add #imm,Rn */
	r1 = 0xC2B1A58u; UPD(0x0C0672A4u, 2);  /* 0C0672A2 mov.l @(disp,pc),Rn */
	W8(r4, r3); UPD(0x0C0672A6u, 1);  /* 0C0672A4 mov.b Rm,@Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r1); r1 += 1; r0 = v_; } UPD(0x0C0672A8u, 1);  /* 0C0672A6 mov.b @Rm+,Rn */
	r4 += 0x1u;  /* 0C0672A8 add #imm,Rn */
	W8(r4, r0); UPD(0x0C0672ACu, 2);  /* 0C0672AA mov.b Rm,@Rn */
	r0 = 0xC3C8690u; UPD(0x0C0672AEu, 1);  /* 0C0672AC mov.l @(disp,pc),Rn */
	r4 += 0x1u;  /* 0C0672AE add #imm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r0); r0 += 1; r6 = v_; } UPD(0x0C0672B2u, 2);  /* 0C0672B0 mov.b @Rm+,Rn */
	W8(r4, r6); UPD(0x0C0672B4u, 1);  /* 0C0672B2 mov.b Rm,@Rn */
	r7 = (u32)(s32)(s8)R8(r5); UPD(0x0C0672B6u, 1);  /* 0C0672B4 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C0672B6 add #imm,Rn */
	W8(r4, r7); UPD(0x0C0672BAu, 2);  /* 0C0672B8 mov.b Rm,@Rn */
	r3 = (u32)(s32)(s8)R8(r1); UPD(0x0C0672BCu, 1);  /* 0C0672BA mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C0672BC add #imm,Rn */
	W8(r4, r3); UPD(0x0C0672C0u, 2);  /* 0C0672BE mov.b Rm,@Rn */
	r5 = (u32)(s32)(s8)R8(r0); UPD(0x0C0672C2u, 1);  /* 0C0672C0 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C0672C2 add #imm,Rn */
	r1 = 0xC3CA6F8u; UPD(0x0C0672C6u, 2);  /* 0C0672C4 mov.l @(disp,pc),Rn */
	W8(r4, r5); UPD(0x0C0672C8u, 1);  /* 0C0672C6 mov.b Rm,@Rn */
	r0 = (u32)(s32)(s8)R8(r1); UPD(0x0C0672CAu, 1);  /* 0C0672C8 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C0672CA add #imm,Rn */
	r7 = 0xC2860FCu; UPD(0x0C0672CEu, 2);  /* 0C0672CC mov.l @(disp,pc),Rn */
	W8(r4, r0); UPD(0x0C0672D0u, 1);  /* 0C0672CE mov.b Rm,@Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C0672D2u, 1);  /* 0C0672D0 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C0672D2 add #imm,Rn */
	r5 = 0xC234C04u; UPD(0x0C0672D6u, 2);  /* 0C0672D4 mov.l @(disp,pc),Rn */
	W8(r4, r6); UPD(0x0C0672D8u, 1);  /* 0C0672D6 mov.b Rm,@Rn */
	r3 = (u32)(s32)(s8)R8(r5); UPD(0x0C0672DAu, 1);  /* 0C0672D8 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C0672DA add #imm,Rn */
	r1 = 0xC23DEA4u; UPD(0x0C0672DEu, 2);  /* 0C0672DC mov.l @(disp,pc),Rn */
	W8(r4, r3); UPD(0x0C0672E0u, 1);  /* 0C0672DE mov.b Rm,@Rn */
	r0 = (u32)(s32)(s8)R8(r1); UPD(0x0C0672E2u, 1);  /* 0C0672E0 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C0672E2 add #imm,Rn */
	r7 = 0xC234BA8u; UPD(0x0C0672E6u, 2);  /* 0C0672E4 mov.l @(disp,pc),Rn */
	W8(r4, r0); UPD(0x0C0672E8u, 1);  /* 0C0672E6 mov.b Rm,@Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C0672EAu, 1);  /* 0C0672E8 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C0672EA add #imm,Rn */
	r5 = 0xC239483u; UPD(0x0C0672EEu, 2);  /* 0C0672EC mov.l @(disp,pc),Rn */
	W8(r4, r6); UPD(0x0C0672F0u, 1);  /* 0C0672EE mov.b Rm,@Rn */
	r3 = (u32)(s32)(s8)R8(r5); UPD(0x0C0672F2u, 1);  /* 0C0672F0 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C0672F2 add #imm,Rn */
	r1 = 0xC3C43B8u; UPD(0x0C0672F6u, 2);  /* 0C0672F4 mov.l @(disp,pc),Rn */
	W8(r4, r3); UPD(0x0C0672F8u, 1);  /* 0C0672F6 mov.b Rm,@Rn */
	r0 = (u32)(s32)(s8)R8(r1); UPD(0x0C0672FAu, 1);  /* 0C0672F8 mov.b @Rm,Rn */
	r4 += 0x2u;  /* 0C0672FA add #imm,Rn */
	r7 = 0xC3C848Cu; UPD(0x0C0672FEu, 2);  /* 0C0672FC mov.l @(disp,pc),Rn */
	W8(r4, r0); UPD(0x0C067300u, 1);  /* 0C0672FE mov.b Rm,@Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C067302u, 1);  /* 0C067300 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C067302 add #imm,Rn */
	r5 = 0xC2B037Au; UPD(0x0C067306u, 2);  /* 0C067304 mov.l @(disp,pc),Rn */
	W8(r4, r6); UPD(0x0C067308u, 1);  /* 0C067306 mov.b Rm,@Rn */
	r3 = (u32)(s32)(s8)R8(r5); UPD(0x0C06730Au, 1);  /* 0C067308 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C06730A add #imm,Rn */
	r1 = 0xC2380CBu; UPD(0x0C06730Eu, 2);  /* 0C06730C mov.l @(disp,pc),Rn */
	W8(r4, r3); UPD(0x0C067310u, 1);  /* 0C06730E mov.b Rm,@Rn */
	r0 = (u32)(s32)(s8)R8(r1); UPD(0x0C067312u, 1);  /* 0C067310 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C067312 add #imm,Rn */
	W8(r4, r0); UPD(0x0C067316u, 2);  /* 0C067314 mov.b Rm,@Rn */
	r7 = 0xC2289E7u; UPD(0x0C067318u, 1);  /* 0C067316 mov.l @(disp,pc),Rn */
	r4 += 0x1u;  /* 0C067318 add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C06731Cu, 2);  /* 0C06731A mov.b @Rm,Rn */
	r5 = 0xC233723u; UPD(0x0C06731Eu, 1);  /* 0C06731C mov.l @(disp,pc),Rn */
	W8(r4, r6); UPD(0x0C067320u, 1);  /* 0C06731E mov.b Rm,@Rn */
	r3 = (u32)(s32)(s8)R8(r5); UPD(0x0C067322u, 1);  /* 0C067320 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C067322 add #imm,Rn */
	r1 = 0xC286313u; UPD(0x0C067326u, 2);  /* 0C067324 mov.l @(disp,pc),Rn */
	W8(r4, r3); UPD(0x0C067328u, 1);  /* 0C067326 mov.b Rm,@Rn */
	r0 = (u32)(s32)(s8)R8(r1); UPD(0x0C06732Au, 1);  /* 0C067328 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C06732A add #imm,Rn */
	W8(r4, r0); UPD(0x0C06732Eu, 2);  /* 0C06732C mov.b Rm,@Rn */
	r3 = 0x3Fu;  /* 0C06732E mov #imm,Rn */
	r6 = 0xC2B1824u; UPD(0x0C067332u, 2);  /* 0C067330 mov.l @(disp,pc),Rn */
	r4 += 0xFFFFFFEDu;  /* 0C067332 add #imm,Rn */
	r0 = 0x0u;  /* 0C067334 mov #imm,Rn */
	r7 = r4;  /* 0C067336 mov Rm,Rn */
	UPD(0x0C067338u, 3);
L_0C067338: BLKS(0x0C067338u);
	IF(0x0C067338u); r4 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C06733Au, 1);  /* 0C067338 mov.b @(r0,Rm),Rn */
	IF(0x0C06733Au); r2 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C06733Cu, 1);  /* 0C06733A mov.b @(r0,Rm),Rn */
	T = r2 == r4;  /* 0C06733C cmp/eq Rm,Rn */
	{ u32 c_ = !T; r1 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C06734Eu, 4); goto L_0C06734E; } goto L_0C067342; }  /* 0C06733E bf/s */
L_0C067342: BLKS(0x0C067342u);
	r5 = r0;  /* 0C067342 mov Rm,Rn */
	r5 += 0x1u;  /* 0C067344 add #imm,Rn */
	r0 = (u32)(s32)(s16)r5;  /* 0C067346 exts.w Rm,Rn */
	T = (s32)r0 > (s32)r3;  /* 0C067348 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r1 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C067338u, 8); goto L_0C067338; } UPD(0x0C06734Eu, 1); goto L_0C06734E; }  /* 0C06734A bf/s */
L_0C06734E: BLKS(0x0C06734Eu);
	r0 = r1;  /* 0C06734E mov Rm,Rn */
	r15 = r14;  /* 0C067350 mov Rm,Rn */
	IF(0x0C067352u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C067352 rts */
}

/* FUN_0c0673b0 */
void blk_f_0C0673B0(sh3_t *c)
{
	LOCALS;
L_0C0673B0: BLKS(0x0C0673B0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0673B2u, 1);  /* 0C0673B0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0673B4u, 1);  /* 0C0673B2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0673B6u, 1);  /* 0C0673B4 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s8)r4;  /* 0C0673B6 exts.b Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0673BAu, 2);  /* 0C0673B8 mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s8)r5;  /* 0C0673BA exts.b Rm,Rn */
	IF(0x0C0673BCu); r15 -= 4; W32(r15, PR); UPD(0x0C0673BEu, 2);  /* 0C0673BC sts.l pr,@-Rn */
	r2 = 0xC2B037Au; UPD(0x0C0673C0u, 1);  /* 0C0673BE mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C0673C2u, 1);  /* 0C0673C0 mov.b @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0673C2 tst Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0673CCu, 4); goto L_0C0673CC; } goto L_0C0673C8; }  /* 0C0673C4 bf/s */
L_0C0673C8: BLKS(0x0C0673C8u);
	{ IF(0x0C0673CAu); ; /* slot nop */ UPD(0x0C067520u, 4); goto L_0C067520; }  /* 0C0673C8 bra */
L_0C0673CC: BLKS(0x0C0673CCu);
	r4 = 0xC3C43C8u; UPD(0x0C0673CEu, 1);  /* 0C0673CC mov.l @(disp,pc),Rn */
	r0 = 0x23456789u; UPD(0x0C0673D0u, 1);  /* 0C0673CE mov.l @(disp,pc),Rn */
	r3 = R32(r4); UPD(0x0C0673D2u, 1);  /* 0C0673D0 mov.l @Rm,Rn */
	T = r3 == r0;  /* 0C0673D2 cmp/eq Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C067426u, 4); goto L_0C067426; } goto L_0C0673D8; }  /* 0C0673D4 bt/s */
L_0C0673D8: BLKS(0x0C0673D8u);
	r6 = 0xC1736CAu; UPD(0x0C0673DAu, 2);  /* 0C0673D8 mov.l @(disp,pc),Rn */
	r5 = 0x5u;  /* 0C0673DA mov #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r6); UPD(0x0C0673DEu, 2);  /* 0C0673DC mov.b @Rm,Rn */
	T = r2 > r5;  /* 0C0673DE cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C0673E6u, 4); goto L_0C0673E6; }  /* 0C0673E0 bf */
L_0C0673E2: BLKS(0x0C0673E2u);
	{ IF(0x0C0673E4u); ; /* slot nop */ UPD(0x0C0674D0u, 3); goto L_0C0674D0; }  /* 0C0673E2 bra */
L_0C0673E6: BLKS(0x0C0673E6u);
	r0 = 0xC067400u;  /* 0C0673E6 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C0673E8 add Rm,Rn */
	IF(0x0C0673EAu); r7 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C0673ECu, 3);  /* 0C0673EA mov.w @(r0,Rm),Rn */
	IF(0x0C0673ECu); { u32 tv_ = (r7 + 0x0C0673F0u); u32 t_ = PHYS(tv_); IF(0x0C0673EEu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C067410u: goto L_0C067410; case 0x0C06741Cu: goto L_0C06741C; case 0x0C067440u: goto L_0C067440; case 0x0C067480u: goto L_0C067480; case 0x0C0674D0u: goto L_0C0674D0; case 0x0C0674E0u: goto L_0C0674E0; default: JUMPD(tv_); } }  /* 0C0673EC braf Rn */
L_0C067410: BLKS(0x0C067410u);
	r10 = 0xC06C140u; UPD(0x0C067412u, 1);  /* 0C067410 mov.l @(disp,pc),Rn */
	r9 = 0xC2074F0u; UPD(0x0C067414u, 1);  /* 0C067412 mov.l @(disp,pc),Rn */
	IF(0x0C067414u); { u32 t_ = r10; PR = 0x0C067418u; IF(0x0C067416u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C06C140, 0x0C06C140u, 0x0C067418u); }  /* 0C067414 jsr @Rn */
L_0C067418: BLKS(0x0C067418u);
	r1 = 0x40u;  /* 0C067418 mov #imm,Rn */
	W16(r9, r1); UPD(0x0C06741Cu, 2);  /* 0C06741A mov.w Rm,@Rn */
L_0C06741C: BLKS(0x0C06741Cu);
	r6 = 0xC1736CAu; UPD(0x0C06741Eu, 1);  /* 0C06741C mov.l @(disp,pc),Rn */
	r5 = (u32)(s32)(s8)R8(r6); UPD(0x0C067420u, 1);  /* 0C06741E mov.b @Rm,Rn */
	r5 += 0x1u;  /* 0C067420 add #imm,Rn */
	W8(r6, r5); UPD(0x0C067424u, 2);  /* 0C067422 mov.b Rm,@Rn */
L_0C067424: BLKS(0x0C067424u);
	r0 = 0x1u;  /* 0C067424 mov #imm,Rn */
	UPD(0x0C067426u, 1);
L_0C067426: BLKS(0x0C067426u);
	r15 = r14;  /* 0C067426 mov Rm,Rn */
	IF(0x0C067428u); PR = R32(r15); r15 += 4; UPD(0x0C06742Au, 2);  /* 0C067428 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06742Cu, 1);  /* 0C06742A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06742Eu, 1);  /* 0C06742C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C067430u, 1);  /* 0C06742E mov.l @Rm+,Rn */
	IF(0x0C067430u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C067430 rts */
L_0C067440: BLKS(0x0C067440u);
	r8 = 0xC2074F0u; UPD(0x0C067442u, 1);  /* 0C067440 mov.l @(disp,pc),Rn */
	r5 = r9;  /* 0C067442 mov Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r8); UPD(0x0C067446u, 2);  /* 0C067444 mov.w @Rm,Rn */
	r6 = r10;  /* 0C067446 mov Rm,Rn */
	r0 = r4;  /* 0C067448 mov Rm,Rn */
	IF(0x0C06744Au); T = r0 >> 31; r0 = (r0 << 1) | T;  /* 0C06744A rotl Rn */
	r9 = 0xC062490u; UPD(0x0C06744Eu, 4);  /* 0C06744C mov.l @(disp,pc),Rn */
	IF(0x0C06744Eu); r2 = T;  /* 0C06744E movt Rn */
	r4 += r2;  /* 0C067450 add Rm,Rn */
	IF(0x0C067452u); { u32 t_ = r9; PR = 0x0C067456u; IF(0x0C067454u); T = r4 & 1; r4 = (u32)((s32)r4 >> 1); /* slot shar Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C062490, 0x0C062490u, 0x0C067456u); }  /* 0C067452 jsr @Rn */
L_0C067456: BLKS(0x0C067456u);
	r6 = (u32)(s32)(s16)R16(r8); UPD(0x0C067458u, 1);  /* 0C067456 mov.w @Rm,Rn */
	r4 = 0xC286110u; UPD(0x0C06745Au, 1);  /* 0C067458 mov.l @(disp,pc),Rn */
	r7 = r6;  /* 0C06745A mov Rm,Rn */
	IF(0x0C06745Cu); T = r7 >> 31; r7 = (r7 << 1) | T;  /* 0C06745C rotl Rn */
	IF(0x0C06745Eu); r5 = T;  /* 0C06745E movt Rn */
	r4 += r6;  /* 0C067460 add Rm,Rn */
	r6 += r5;  /* 0C067462 add Rm,Rn */
	r3 = 0xC05DADCu; UPD(0x0C067466u, 6);  /* 0C067464 mov.l @(disp,pc),Rn */
	IF(0x0C067466u); T = r6 & 1; r6 >>= 1;  /* 0C067466 shlr Rn */
	r5 = r6 & 0xFF;  /* 0C067468 extu.b Rm,Rn */
	IF(0x0C06746Au); { u32 t_ = r3; PR = 0x0C06746Eu; r6 = 0x2u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C05DADC, 0x0C05DADCu, 0x0C06746Eu); }  /* 0C06746A jsr @Rn */
L_0C06746E: BLKS(0x0C06746Eu);
	r0 = (u32)(s32)(s16)R16(r8); UPD(0x0C067470u, 1);  /* 0C06746E mov.w @Rm,Rn */
	r0 += 0x2u;  /* 0C067470 add #imm,Rn */
	W16(r8, r0); UPD(0x0C067474u, 2);  /* 0C067472 mov.w Rm,@Rn */
	r2 = (u32)(s32)(s16)r0;  /* 0C067474 exts.w Rm,Rn */
	r8 = 0x1D3u; UPD(0x0C067478u, 2);  /* 0C067476 mov.w @(disp,pc),Rn */
	T = (s32)r2 > (s32)r8;  /* 0C067478 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C067424u, 4); goto L_0C067424; }  /* 0C06747A bf */
L_0C06747C: BLKS(0x0C06747Cu);
	{ IF(0x0C06747Eu); ; /* slot nop */ UPD(0x0C06741Cu, 3); goto L_0C06741C; }  /* 0C06747C bra */
L_0C067480: BLKS(0x0C067480u);
	r4 = 0xC2074F0u; UPD(0x0C067482u, 1);  /* 0C067480 mov.l @(disp,pc),Rn */
	r8 = 0x40u;  /* 0C067482 mov #imm,Rn */
	r5 = 0xC2B1824u; UPD(0x0C067486u, 2);  /* 0C067484 mov.l @(disp,pc),Rn */
	r2 = 0x40u;  /* 0C067486 mov #imm,Rn */
	r6 = 0xC286110u; UPD(0x0C06748Au, 2);  /* 0C067488 mov.l @(disp,pc),Rn */
	r7 = 0x1D3u; UPD(0x0C06748Cu, 1);  /* 0C06748A mov.w @(disp,pc),Rn */
	W16(r4, r8); UPD(0x0C06748Eu, 1);  /* 0C06748C mov.w Rm,@Rn */
	IF(0x0C06748Eu); ;  /* 0C06748E nop */
	UPD(0x0C067490u, 1);
L_0C067490: BLKS(0x0C067490u);
	r0 = (u32)(s32)(s16)r2;  /* 0C067490 exts.w Rm,Rn */
	IF(0x0C067492u); r3 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C067494u, 2);  /* 0C067492 mov.b @(r0,Rm),Rn */
	IF(0x0C067494u); W8(r0 + r5, r3); UPD(0x0C067496u, 1);  /* 0C067494 mov.b Rm,@(r0,Rn) */
	r3 = r2;  /* 0C067496 mov Rm,Rn */
	r3 += 0x1u;  /* 0C067498 add #imm,Rn */
	r0 = (u32)(s32)(s16)r3;  /* 0C06749A exts.w Rm,Rn */
	T = (s32)r0 > (s32)r7;  /* 0C06749C cmp/gt Rm,Rn */
	{ u32 c_ = !T; r2 = r3; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C067490u, 7); goto L_0C067490; } goto L_0C0674A2; }  /* 0C06749E bf/s */
L_0C0674A2: BLKS(0x0C0674A2u);
	r8 = 0xC065890u; UPD(0x0C0674A4u, 2);  /* 0C0674A2 mov.l @(disp,pc),Rn */
	IF(0x0C0674A4u); { u32 t_ = r8; PR = 0x0C0674A8u; W16(r4, r3); /* slot mov.w Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C065890, 0x0C065890u, 0x0C0674A8u); }  /* 0C0674A4 jsr @Rn */
L_0C0674A8: BLKS(0x0C0674A8u);
	T = (r0 & r0) == 0;  /* 0C0674A8 tst Rm,Rn */
	if (T) { UPD(0x0C06741Cu, 4); goto L_0C06741C; }  /* 0C0674AA bt */
L_0C0674AC: BLKS(0x0C0674ACu);
	r6 = r10;  /* 0C0674AC mov Rm,Rn */
	r10 = 0xC0626E0u; UPD(0x0C0674B0u, 2);  /* 0C0674AE mov.l @(disp,pc),Rn */
	r4 = 0xC1736CCu; UPD(0x0C0674B2u, 1);  /* 0C0674B0 mov.l @(disp,pc),Rn */
	r7 = 0xC0404000u; UPD(0x0C0674B4u, 1);  /* 0C0674B2 mov.l @(disp,pc),Rn */
	IF(0x0C0674B4u); { u32 t_ = r10; PR = 0x0C0674B8u; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C0674B8u); }  /* 0C0674B4 jsr @Rn */
L_0C0674B8: BLKS(0x0C0674B8u);
	r2 = 0x4u;  /* 0C0674B8 mov #imm,Rn */
	IF(0x0C0674BAu); ;  /* 0C0674BA nop */
	UPD(0x0C0674BCu, 2);
L_0C0674BC: BLKS(0x0C0674BCu);
	r8 = 0xC1736CAu; UPD(0x0C0674BEu, 1);  /* 0C0674BC mov.l @(disp,pc),Rn */
	{ W8(r8, r2); /* slot mov.b Rm,@Rn */ UPD(0x0C067424u, 3); goto L_0C067424; }  /* 0C0674BE bra */
L_0C0674D0: BLKS(0x0C0674D0u);
	r1 = 0x23456789u; UPD(0x0C0674D2u, 1);  /* 0C0674D0 mov.l @(disp,pc),Rn */
	r4 = 0xC3C43C8u; UPD(0x0C0674D4u, 1);  /* 0C0674D2 mov.l @(disp,pc),Rn */
	W32(r4, r1); UPD(0x0C0674D6u, 1);  /* 0C0674D4 mov.l Rm,@Rn */
L_0C0674D6: BLKS(0x0C0674D6u);
	{ r2 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C0674BCu, 3); goto L_0C0674BC; }  /* 0C0674D6 bra */
L_0C0674E0: BLKS(0x0C0674E0u);
	r8 = 0xC06C140u; UPD(0x0C0674E2u, 1);  /* 0C0674E0 mov.l @(disp,pc),Rn */
	r10 = 0xC05DAA8u; UPD(0x0C0674E4u, 1);  /* 0C0674E2 mov.l @(disp,pc),Rn */
	IF(0x0C0674E4u); { u32 t_ = r8; PR = 0x0C0674E8u; IF(0x0C0674E6u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C06C140, 0x0C06C140u, 0x0C0674E8u); }  /* 0C0674E4 jsr @Rn */
L_0C0674E8: BLKS(0x0C0674E8u);
	r2 = 0xC067580u; UPD(0x0C0674EAu, 1);  /* 0C0674E8 mov.l @(disp,pc),Rn */
	IF(0x0C0674EAu); { u32 t_ = r2; PR = 0x0C0674EEu; IF(0x0C0674ECu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C067580, 0x0C067580u, 0x0C0674EEu); }  /* 0C0674EA jsr @Rn */
L_0C0674EE: BLKS(0x0C0674EEu);
	r4 = 0xC286150u; UPD(0x0C0674F0u, 1);  /* 0C0674EE mov.l @(disp,pc),Rn */
	r6 = 0x194u; UPD(0x0C0674F2u, 1);  /* 0C0674F0 mov.w @(disp,pc),Rn */
	IF(0x0C0674F2u); { u32 t_ = r10; PR = 0x0C0674F6u; r5 = 0x20u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C05DAA8, 0x0C05DAA8u, 0x0C0674F6u); }  /* 0C0674F2 jsr @Rn */
L_0C0674F6: BLKS(0x0C0674F6u);
	r3 = 0xC1736C8u; UPD(0x0C0674F8u, 1);  /* 0C0674F6 mov.l @(disp,pc),Rn */
	r7 = 0x4u;  /* 0C0674F8 mov #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r3); UPD(0x0C0674FCu, 2);  /* 0C0674FA mov.w @Rm,Rn */
	r0 += 0x1u;  /* 0C0674FC add #imm,Rn */
	r9 = (u32)(s32)(s16)r0;  /* 0C0674FE exts.w Rm,Rn */
	T = (s32)r9 > (s32)r7;  /* 0C067500 cmp/gt Rm,Rn */
	{ u32 c_ = !T; W16(r3, r0); /* slot mov.w Rm,@Rn */ if (c_) { UPD(0x0C0674D6u, 6); goto L_0C0674D6; } UPD(0x0C067506u, 1); goto L_0C067506; }  /* 0C067502 bf/s */
L_0C067506: BLKS(0x0C067506u);
	r4 = 0xC2B037Au; UPD(0x0C067508u, 1);  /* 0C067506 mov.l @(disp,pc),Rn */
	r1 = 0x0u;  /* 0C067508 mov #imm,Rn */
	IF(0x0C06750Au); { u32 t_ = r8; PR = 0x0C06750Eu; W8(r4, r1); /* slot mov.b Rm,@Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C06C140, 0x0C06C140u, 0x0C06750Eu); }  /* 0C06750A jsr @Rn */
L_0C06750E: BLKS(0x0C06750Eu);
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C067426u, 3); goto L_0C067426; }  /* 0C06750E bra */
L_0C067520: BLKS(0x0C067520u);
	r8 = 0xC06C140u; UPD(0x0C067522u, 1);  /* 0C067520 mov.l @(disp,pc),Rn */
	IF(0x0C067522u); { u32 t_ = r8; PR = 0x0C067526u; IF(0x0C067524u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C06C140, 0x0C06C140u, 0x0C067526u); }  /* 0C067522 jsr @Rn */
L_0C067526: BLKS(0x0C067526u);
	{ r0 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C067426u, 3); goto L_0C067426; }  /* 0C067526 bra */
}

/* FUN_0c067580 */
void blk_f_0C067580(sh3_t *c)
{
	LOCALS;
L_0C067580: BLKS(0x0C067580u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C067582u, 1);  /* 0C067580 mov.l Rm,@-Rn */
	r5 = 0x0u;  /* 0C067582 mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C067586u, 2);  /* 0C067584 mov.l Rm,@-Rn */
	r0 = 0x0u;  /* 0C067586 mov #imm,Rn */
	r8 = 0xC286110u; UPD(0x0C06758Au, 2);  /* 0C067588 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C06758A mov Rm,Rn */
	r4 = 0x0u;  /* 0C06758C mov #imm,Rn */
	IF(0x0C06758Eu); ;  /* 0C06758E nop */
	UPD(0x0C067590u, 3);
L_0C067590: BLKS(0x0C067590u);
	r2 = 0xAu;  /* 0C067590 mov #imm,Rn */
	IF(0x0C067592u); MACL = r0 * r2;  /* 0C067592 mul.l Rm,Rn */
	r7 = 0xC2ABAACu; UPD(0x0C067596u, 4);  /* 0C067594 mov.l @(disp,pc),Rn */
	r6 = 0x0u;  /* 0C067596 mov #imm,Rn */
	IF(0x0C067598u); r3 = MACL;  /* 0C067598 sts macl,Rn */
	r7 += r4;  /* 0C06759A add Rm,Rn */
	r3 += r8;  /* 0C06759C add Rm,Rn */
	IF(0x0C06759Eu); ;  /* 0C06759E nop */
	UPD(0x0C0675A0u, 5);
L_0C0675A0: BLKS(0x0C0675A0u);
	r2 = R32(r7); UPD(0x0C0675A2u, 1);  /* 0C0675A0 mov.l @Rm,Rn */
	r3 += 0x40u;  /* 0C0675A2 add #imm,Rn */
	r1 = r2;  /* 0C0675A4 mov Rm,Rn */
	IF(0x0C0675A6u); r1 >>= 16;  /* 0C0675A6 shlr16 Rn */
	IF(0x0C0675A8u); r1 >>= 8;  /* 0C0675A8 shlr8 Rn */
	W8(r3, r1); UPD(0x0C0675ACu, 5);  /* 0C0675AA mov.b Rm,@Rn */
	r7 += 0x3u;  /* 0C0675AC add #imm,Rn */
	r1 = r2;  /* 0C0675AE mov Rm,Rn */
	r3 += 0x1u;  /* 0C0675B0 add #imm,Rn */
	IF(0x0C0675B2u); r1 >>= 16;  /* 0C0675B2 shlr16 Rn */
	W8(r3, r1); UPD(0x0C0675B6u, 5);  /* 0C0675B4 mov.b Rm,@Rn */
	IF(0x0C0675B6u); r2 >>= 8;  /* 0C0675B6 shlr8 Rn */
	r3 += 0x1u;  /* 0C0675B8 add #imm,Rn */
	W8(r3, r2); UPD(0x0C0675BCu, 3);  /* 0C0675BA mov.b Rm,@Rn */
	r2 = (u32)(s32)(s8)R8(r7); UPD(0x0C0675BEu, 1);  /* 0C0675BC mov.b @Rm,Rn */
	r3 += 0x1u;  /* 0C0675BE add #imm,Rn */
	W8(r3, r2); UPD(0x0C0675C2u, 2);  /* 0C0675C0 mov.b Rm,@Rn */
	r7 += 0x8u;  /* 0C0675C2 add #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r7); UPD(0x0C0675C6u, 2);  /* 0C0675C4 mov.b @Rm,Rn */
	r3 += 0x1u;  /* 0C0675C6 add #imm,Rn */
	W8(r3, r2); UPD(0x0C0675CAu, 2);  /* 0C0675C8 mov.b Rm,@Rn */
	r7 += 0x4u;  /* 0C0675CA add #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r7); UPD(0x0C0675CEu, 2);  /* 0C0675CC mov.b @Rm,Rn */
	r3 += 0x1u;  /* 0C0675CE add #imm,Rn */
	W8(r3, r2); UPD(0x0C0675D2u, 2);  /* 0C0675D0 mov.b Rm,@Rn */
	r7 += 0x4u;  /* 0C0675D2 add #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r7); UPD(0x0C0675D6u, 2);  /* 0C0675D4 mov.b @Rm,Rn */
	r3 += 0x1u;  /* 0C0675D6 add #imm,Rn */
	W8(r3, r2); UPD(0x0C0675DAu, 2);  /* 0C0675D8 mov.b Rm,@Rn */
	r7 += 0x6u;  /* 0C0675DA add #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r7); UPD(0x0C0675DEu, 2);  /* 0C0675DC mov.b @Rm,Rn */
	r3 += 0x1u;  /* 0C0675DE add #imm,Rn */
	W8(r3, r2); UPD(0x0C0675E2u, 2);  /* 0C0675E0 mov.b Rm,@Rn */
	r7 += 0xFFFFFFEEu;  /* 0C0675E2 add #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r7); UPD(0x0C0675E6u, 2);  /* 0C0675E4 mov.b @Rm,Rn */
	r3 += 0x1u;  /* 0C0675E6 add #imm,Rn */
	W8(r3, r2); UPD(0x0C0675EAu, 2);  /* 0C0675E8 mov.b Rm,@Rn */
	r7 += 0x11u;  /* 0C0675EA add #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r7); UPD(0x0C0675EEu, 2);  /* 0C0675EC mov.b @Rm,Rn */
	r3 += 0x1u;  /* 0C0675EE add #imm,Rn */
	W8(r3, r2); UPD(0x0C0675F2u, 2);  /* 0C0675F0 mov.b Rm,@Rn */
	r7 += 0x4u;  /* 0C0675F2 add #imm,Rn */
	r2 = r6;  /* 0C0675F4 mov Rm,Rn */
	r2 += 0x1u;  /* 0C0675F6 add #imm,Rn */
	r6 = (u32)(s32)(s16)r2;  /* 0C0675F8 exts.w Rm,Rn */
	r2 = 0x9u;  /* 0C0675FA mov #imm,Rn */
	T = (s32)r6 > (s32)r2;  /* 0C0675FC cmp/gt Rm,Rn */
	{ u32 c_ = !T; r3 += 0xFFFFFFC1u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0675A0u, 9); goto L_0C0675A0; } goto L_0C067602; }  /* 0C0675FE bf/s */
L_0C067602: BLKS(0x0C067602u);
	r6 = r5;  /* 0C067602 mov Rm,Rn */
	r6 += 0x1u;  /* 0C067604 add #imm,Rn */
	r1 = 0x16Cu; UPD(0x0C067608u, 4);  /* 0C067606 mov.w @(disp,pc),Rn */
	r5 = (u32)(s32)(s16)r6;  /* 0C067608 exts.w Rm,Rn */
	r3 = 0x3u;  /* 0C06760A mov #imm,Rn */
	r0 += 0xAu;  /* 0C06760C add #imm,Rn */
	T = (s32)r5 > (s32)r3;  /* 0C06760E cmp/gt Rm,Rn */
	{ u32 c_ = !T; r4 += r1; /* slot add Rm,Rn */ if (c_) { UPD(0x0C067590u, 7); goto L_0C067590; } goto L_0C067614; }  /* 0C067610 bf/s */
L_0C067614: BLKS(0x0C067614u);
	r5 = 0xC3C43BCu; UPD(0x0C067616u, 2);  /* 0C067614 mov.l @(disp,pc),Rn */
	r0 = r5;  /* 0C067616 mov Rm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r0); r0 += 1; r4 = v_; } UPD(0x0C06761Au, 2);  /* 0C067618 mov.b @Rm+,Rn */
	r2 = r5;  /* 0C06761A mov Rm,Rn */
	r1 = 0xC2862E0u; UPD(0x0C06761Eu, 2);  /* 0C06761C mov.l @(disp,pc),Rn */
	r2 += 0x2u; UPD(0x0C067620u, 1);  /* 0C06761E add #imm,Rn */
	W8(r1, r4); UPD(0x0C067622u, 1);  /* 0C067620 mov.b Rm,@Rn */
	r5 += 0x3u;  /* 0C067622 add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r0); UPD(0x0C067626u, 2);  /* 0C067624 mov.b @Rm,Rn */
	r3 = 0xC2862E1u; UPD(0x0C067628u, 1);  /* 0C067626 mov.l @(disp,pc),Rn */
	r8 = (u32)(s32)(s8)R8(r2); UPD(0x0C06762Au, 1);  /* 0C067628 mov.b @Rm,Rn */
	W8(r3, r6); UPD(0x0C06762Cu, 1);  /* 0C06762A mov.b Rm,@Rn */
	r7 = 0xC2862E2u; UPD(0x0C06762Eu, 1);  /* 0C06762C mov.l @(disp,pc),Rn */
	r4 = (u32)(s32)(s8)R8(r5); UPD(0x0C067630u, 1);  /* 0C06762E mov.b @Rm,Rn */
	W8(r7, r8); UPD(0x0C067632u, 1);  /* 0C067630 mov.b Rm,@Rn */
	r0 = 0xC2862E3u; UPD(0x0C067634u, 1);  /* 0C067632 mov.l @(disp,pc),Rn */
	W8(r0, r4); UPD(0x0C067636u, 1);  /* 0C067634 mov.b Rm,@Rn */
	r15 = r14;  /* 0C067636 mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06763Au, 2);  /* 0C067638 mov.l @Rm+,Rn */
	IF(0x0C06763Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06763A rts */
}

void blk_f_0C067660(sh3_t *c)
{
	LOCALS;
L_0C067660: BLKS(0x0C067660u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C067662u, 1);  /* 0C067660 mov.l Rm,@-Rn */
	r6 = 0x9u;  /* 0C067662 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C067666u, 2);  /* 0C067664 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C067668u, 1);  /* 0C067666 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06766Au, 1);  /* 0C067668 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C06766Cu, 1);  /* 0C06766A mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C06766Eu, 1);  /* 0C06766C mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C067670u, 1);  /* 0C06766E mov.l Rm,@-Rn */
	IF(0x0C067670u); r15 -= 4; W32(r15, PR); UPD(0x0C067672u, 1);  /* 0C067670 sts.l pr,@-Rn */
	r8 = 0xC0C23D0u; UPD(0x0C067674u, 1);  /* 0C067672 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFE0u;  /* 0C067674 add #imm,Rn */
	r14 = r15;  /* 0C067676 mov Rm,Rn */
	r5 = 0xC0C43FCu; UPD(0x0C06767Au, 3);  /* 0C067678 mov.l @(disp,pc),Rn */
	IF(0x0C06767Au); { u32 t_ = r8; PR = 0x0C06767Eu; r4 = r14; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C23D0, 0x0C0C23D0u, 0x0C06767Eu); }  /* 0C06767A jsr @Rn */
L_0C06767E: BLKS(0x0C06767Eu);
	r2 = 0xC238029u; UPD(0x0C067680u, 1);  /* 0C06767E mov.l @(disp,pc),Rn */
	r1 = 0x0u;  /* 0C067680 mov #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C067684u, 2);  /* 0C067682 mov.b @Rm,Rn */
	W32(r14 + 0x18u, r1); UPD(0x0C067686u, 1);  /* 0C067684 mov.l Rm,@(disp,Rn) */
	T = (r0 & r0) == 0;  /* 0C067686 tst Rm,Rn */
	{ u32 c_ = !T; W32(r14 + 0x1Cu, r1); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C067690u, 4); goto L_0C067690; } UPD(0x0C06768Cu, 1); goto L_0C06768C; }  /* 0C067688 bf/s */
L_0C06768C: BLKS(0x0C06768Cu);
	{ r10 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C067BB0u, 3); goto L_0C067BB0; }  /* 0C06768C bra */
L_0C067690: BLKS(0x0C067690u);
	r3 = 0xC173710u; UPD(0x0C067692u, 1);  /* 0C067690 mov.l @(disp,pc),Rn */
	r10 = 0x0u;  /* 0C067692 mov #imm,Rn */
	r2 = 0x8u;  /* 0C067694 mov #imm,Rn */
	r0 = r3;  /* 0C067696 mov Rm,Rn */
	UPD(0x0C067698u, 3);
L_0C067698: BLKS(0x0C067698u);
	IF(0x0C067698u); r5 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C06769Au, 1);  /* 0C067698 mov.b @(r0,Rm),Rn */
	r4 = 0xCu;  /* 0C06769A mov #imm,Rn */
	r0 = r10;  /* 0C06769C mov Rm,Rn */
	r4 += r14;  /* 0C06769E add Rm,Rn */
	IF(0x0C0676A0u); W8(r0 + r4, r5); UPD(0x0C0676A2u, 4);  /* 0C0676A0 mov.b Rm,@(r0,Rn) */
	r0 = r10;  /* 0C0676A2 mov Rm,Rn */
	r0 += 0x1u;  /* 0C0676A4 add #imm,Rn */
	r10 = (u32)(s32)(s8)r0;  /* 0C0676A6 exts.b Rm,Rn */
	T = (s32)r10 > (s32)r2;  /* 0C0676A8 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r0 = r3; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C067698u, 7); goto L_0C067698; } UPD(0x0C0676AEu, 1); goto L_0C0676AE; }  /* 0C0676AA bf/s */
L_0C0676AE: BLKS(0x0C0676AEu);
	r13 = 0xC0626E0u; UPD(0x0C0676B0u, 1);  /* 0C0676AE mov.l @(disp,pc),Rn */
L_0C0676B0: BLKS(0x0C0676B0u);
	r8 = 0xC060BC0u; UPD(0x0C0676B2u, 1);  /* 0C0676B0 mov.l @(disp,pc),Rn */
	r12 = 0xC061200u; UPD(0x0C0676B4u, 1);  /* 0C0676B2 mov.l @(disp,pc),Rn */
	IF(0x0C0676B4u); { u32 t_ = r8; PR = 0x0C0676B8u; IF(0x0C0676B6u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C060BC0, 0x0C060BC0u, 0x0C0676B8u); }  /* 0C0676B4 jsr @Rn */
L_0C0676B8: BLKS(0x0C0676B8u);
	r11 = 0xC062060u; UPD(0x0C0676BAu, 1);  /* 0C0676B8 mov.l @(disp,pc),Rn */
	IF(0x0C0676BAu); { u32 t_ = r12; PR = 0x0C0676BEu; IF(0x0C0676BCu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C061200, 0x0C061200u, 0x0C0676BEu); }  /* 0C0676BA jsr @Rn */
L_0C0676BE: BLKS(0x0C0676BEu);
	r10 = 0xC062000u; UPD(0x0C0676C0u, 1);  /* 0C0676BE mov.l @(disp,pc),Rn */
	IF(0x0C0676C0u); { u32 t_ = r11; PR = 0x0C0676C4u; r4 = 0x40u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062060, 0x0C062060u, 0x0C0676C4u); }  /* 0C0676C0 jsr @Rn */
L_0C0676C4: BLKS(0x0C0676C4u);
	IF(0x0C0676C4u); { u32 t_ = r10; PR = 0x0C0676C8u; IF(0x0C0676C6u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C062000, 0x0C062000u, 0x0C0676C8u); }  /* 0C0676C4 jsr @Rn */
L_0C0676C8: BLKS(0x0C0676C8u);
	r1 = 0xC297638u; UPD(0x0C0676CAu, 1);  /* 0C0676C8 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s16)R16(r1); UPD(0x0C0676CCu, 1);  /* 0C0676CA mov.w @Rm,Rn */
	T = (r0 & 0x70u) == 0;  /* 0C0676CC tst #imm,r0 */
	if (!T) { UPD(0x0C06773Cu, 4); goto L_0C06773C; }  /* 0C0676CE bf */
L_0C0676D0: BLKS(0x0C0676D0u);
	r0 = 0x200u; UPD(0x0C0676D2u, 1);  /* 0C0676D0 mov.w @(disp,pc),Rn */
	IF(0x0C0676D2u); r2 = (u32)(s32)(s16)R16(r0 + r1); UPD(0x0C0676D4u, 1);  /* 0C0676D2 mov.w @(r0,Rm),Rn */
	r0 = r2;  /* 0C0676D4 mov Rm,Rn */
	r0 &= 0x1u;  /* 0C0676D6 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0676D8 tst Rm,Rn */
	{ u32 c_ = T; r0 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0676E8u, 6); goto L_0C0676E8; } goto L_0C0676DE; }  /* 0C0676DA bt/s */
L_0C0676DE: BLKS(0x0C0676DEu);
	r0 = R32(r14 + 0x18u); UPD(0x0C0676E0u, 2);  /* 0C0676DE mov.l @(disp,Rm),Rn */
	r4 = 0xC1736E0u; UPD(0x0C0676E2u, 1);  /* 0C0676E0 mov.l @(disp,pc),Rn */
	IF(0x0C0676E2u); r3 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C0676E4u, 1);  /* 0C0676E2 mov.b @(r0,Rm),Rn */
	W32(r14 + 0x18u, r3); UPD(0x0C0676E6u, 1);  /* 0C0676E4 mov.l Rm,@(disp,Rn) */
	r0 = r2;  /* 0C0676E6 mov Rm,Rn */
	UPD(0x0C0676E8u, 1);
L_0C0676E8: BLKS(0x0C0676E8u);
	r0 &= 0x2u;  /* 0C0676E8 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0676EA tst Rm,Rn */
	{ u32 c_ = T; r0 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0676FAu, 5); goto L_0C0676FA; } goto L_0C0676F0; }  /* 0C0676EC bt/s */
L_0C0676F0: BLKS(0x0C0676F0u);
	r0 = R32(r14 + 0x18u); UPD(0x0C0676F2u, 2);  /* 0C0676F0 mov.l @(disp,Rm),Rn */
	r6 = 0xC1736ECu; UPD(0x0C0676F4u, 1);  /* 0C0676F2 mov.l @(disp,pc),Rn */
	IF(0x0C0676F4u); r5 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C0676F6u, 1);  /* 0C0676F4 mov.b @(r0,Rm),Rn */
	W32(r14 + 0x18u, r5); UPD(0x0C0676F8u, 1);  /* 0C0676F6 mov.l Rm,@(disp,Rn) */
	r0 = r2;  /* 0C0676F8 mov Rm,Rn */
	UPD(0x0C0676FAu, 1);
L_0C0676FA: BLKS(0x0C0676FAu);
	r0 &= 0x8u;  /* 0C0676FA and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0676FC tst Rm,Rn */
	{ u32 c_ = T; r0 = R32(r14 + 0x18u); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C067718u, 5); goto L_0C067718; } UPD(0x0C067702u, 1); goto L_0C067702; }  /* 0C0676FE bt/s */
L_0C067702: BLKS(0x0C067702u);
	r1 = 0xCu;  /* 0C067702 mov #imm,Rn */
	r1 += r14;  /* 0C067704 add Rm,Rn */
	IF(0x0C067706u); r2 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C067708u, 3);  /* 0C067706 mov.b @(r0,Rm),Rn */
	IF(0x0C067708u); r9 = (u32)(s32)(s8)R8(r0 + r1); UPD(0x0C06770Au, 1);  /* 0C067708 mov.b @(r0,Rm),Rn */
	T = r9 == r2;  /* 0C06770A cmp/eq Rm,Rn */
	if (!T) { UPD(0x0C067712u, 4); goto L_0C067712; }  /* 0C06770C bf */
L_0C06770E: BLKS(0x0C06770Eu);
	{ IF(0x0C067710u); ; /* slot nop */ UPD(0x0C067BA0u, 3); goto L_0C067BA0; }  /* 0C06770E bra */
L_0C067712: BLKS(0x0C067712u);
	r1 = r2;  /* 0C067712 mov Rm,Rn */
	r1 += 0x1u;  /* 0C067714 add #imm,Rn */
	UPD(0x0C067716u, 2);
L_0C067716: BLKS(0x0C067716u);
	IF(0x0C067716u); W8(r0 + r14, r1); UPD(0x0C067718u, 1);  /* 0C067716 mov.b Rm,@(r0,Rn) */
L_0C067718: BLKS(0x0C067718u);
	r7 = 0xC297638u; UPD(0x0C06771Au, 1);  /* 0C067718 mov.l @(disp,pc),Rn */
	r0 = 0x200u; UPD(0x0C06771Cu, 1);  /* 0C06771A mov.w @(disp,pc),Rn */
	IF(0x0C06771Cu); r0 = (u32)(s32)(s16)R16(r0 + r7); UPD(0x0C06771Eu, 1);  /* 0C06771C mov.w @(r0,Rm),Rn */
	r0 &= 0x4u;  /* 0C06771E and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C067720 tst Rm,Rn */
	{ u32 c_ = T; r0 = R32(r14 + 0x18u); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C06773Cu, 5); goto L_0C06773C; } UPD(0x0C067726u, 1); goto L_0C067726; }  /* 0C067722 bt/s */
L_0C067726: BLKS(0x0C067726u);
	r11 = 0xC1736F8u; UPD(0x0C067728u, 1);  /* 0C067726 mov.l @(disp,pc),Rn */
	IF(0x0C067728u); r2 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C06772Au, 1);  /* 0C067728 mov.b @(r0,Rm),Rn */
	IF(0x0C06772Au); r10 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C06772Cu, 1);  /* 0C06772A mov.b @(r0,Rm),Rn */
	T = r10 == r2;  /* 0C06772C cmp/eq Rm,Rn */
	if (!T) { UPD(0x0C067736u, 4); goto L_0C067736; }  /* 0C06772E bf */
L_0C067730: BLKS(0x0C067730u);
	r12 = 0xCu;  /* 0C067730 mov #imm,Rn */
	{ r12 += r14; /* slot add Rm,Rn */ UPD(0x0C067B90u, 4); goto L_0C067B90; }  /* 0C067732 bra */
L_0C067736: BLKS(0x0C067736u);
	r1 = r2;  /* 0C067736 mov Rm,Rn */
	r1 += 0xFFFFFFFFu;  /* 0C067738 add #imm,Rn */
	UPD(0x0C06773Au, 2);
L_0C06773A: BLKS(0x0C06773Au);
	IF(0x0C06773Au); W8(r0 + r14, r1); UPD(0x0C06773Cu, 1);  /* 0C06773A mov.b Rm,@(r0,Rn) */
L_0C06773C: BLKS(0x0C06773Cu);
	r2 = 0xC297638u; UPD(0x0C06773Eu, 1);  /* 0C06773C mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s16)R16(r2); UPD(0x0C067740u, 1);  /* 0C06773E mov.w @Rm,Rn */
	r0 &= 0x60u;  /* 0C067740 and #imm,r0 */
	T = r0 == 0x40u;  /* 0C067742 cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C06774Au, 5); goto L_0C06774A; }  /* 0C067744 bf */
L_0C067746: BLKS(0x0C067746u);
	{ IF(0x0C067748u); ; /* slot nop */ UPD(0x0C067AE0u, 3); goto L_0C067AE0; }  /* 0C067746 bra */
L_0C06774A: BLKS(0x0C06774Au);
	r8 = 0x40u;  /* 0C06774A mov #imm,Rn */
	T = (s32)r0 > (s32)r8;  /* 0C06774C cmp/gt Rm,Rn */
	{ u32 c_ = !T; T = r0 == 0x60u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C067756u, 5); goto L_0C067756; } goto L_0C067752; }  /* 0C06774E bf/s */
L_0C067752: BLKS(0x0C067752u);
	{ IF(0x0C067754u); ; /* slot nop */ UPD(0x0C067AA0u, 4); goto L_0C067AA0; }  /* 0C067752 bra */
L_0C067756: BLKS(0x0C067756u);
	T = r0 == 0x20u;  /* 0C067756 cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C06775Eu, 4); goto L_0C06775E; }  /* 0C067758 bf */
L_0C06775A: BLKS(0x0C06775Au);
	{ IF(0x0C06775Cu); ; /* slot nop */ UPD(0x0C067A30u, 3); goto L_0C067A30; }  /* 0C06775A bra */
L_0C06775E: BLKS(0x0C06775Eu);
	r8 = 0xC297638u; UPD(0x0C067760u, 1);  /* 0C06775E mov.l @(disp,pc),Rn */
	r0 = 0x200u; UPD(0x0C067762u, 1);  /* 0C067760 mov.w @(disp,pc),Rn */
	IF(0x0C067762u); r0 = (u32)(s32)(s16)R16(r0 + r8); UPD(0x0C067764u, 1);  /* 0C067762 mov.w @(r0,Rm),Rn */
	r0 &= 0x10u;  /* 0C067764 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C067766 tst Rm,Rn */
	{ u32 c_ = T; r1 = R32(r14 + 0x1Cu); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C06778Eu, 5); goto L_0C06778E; } UPD(0x0C06776Cu, 1); goto L_0C06776C; }  /* 0C067768 bt/s */
L_0C06776C: BLKS(0x0C06776Cu);
	r1 = R32(r14 + 0x18u); UPD(0x0C06776Eu, 1);  /* 0C06776C mov.l @(disp,Rm),Rn */
	T = (r1 & r1) == 0;  /* 0C06776E tst Rm,Rn */
	{ u32 c_ = !T; r0 = r1; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C067778u, 4); goto L_0C067778; } goto L_0C067774; }  /* 0C067770 bf/s */
L_0C067774: BLKS(0x0C067774u);
	{ r1 = (u32)(s32)(s8)R8(r14); /* slot mov.b @Rm,Rn */ UPD(0x0C067A10u, 4); goto L_0C067A10; }  /* 0C067774 bra */
L_0C067778: BLKS(0x0C067778u);
	T = r0 == 0x8u;  /* 0C067778 cmp/eq #imm,r0 */
	{ u32 c_ = !T; r0 = R32(r14 + 0x18u); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C067782u, 4); goto L_0C067782; } UPD(0x0C06777Eu, 1); goto L_0C06777E; }  /* 0C06777A bf/s */
L_0C06777E: BLKS(0x0C06777Eu);
	{ r10 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C0679D0u, 3); goto L_0C0679D0; }  /* 0C06777E bra */
L_0C067782: BLKS(0x0C067782u);
	r10 = 0xC0C1FE0u; UPD(0x0C067784u, 1);  /* 0C067782 mov.l @(disp,pc),Rn */
	r5 = r0;  /* 0C067784 mov Rm,Rn */
	IF(0x0C067786u); r11 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C067788u, 2);  /* 0C067786 mov.b @(r0,Rm),Rn */
	IF(0x0C067788u); { u32 t_ = r10; PR = 0x0C06778Cu; r4 = r11 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C1FE0, 0x0C0C1FE0u, 0x0C06778Cu); }  /* 0C067788 jsr @Rn */
L_0C06778C: BLKS(0x0C06778Cu);
	r1 = R32(r14 + 0x1Cu); UPD(0x0C06778Eu, 1);  /* 0C06778C mov.l @(disp,Rm),Rn */
L_0C06778E: BLKS(0x0C06778Eu);
	T = (r1 & r1) == 0;  /* 0C06778E tst Rm,Rn */
	UPD(0x0C067790u, 1);
L_0C067790: BLKS(0x0C067790u);
	{ u32 c_ = T; r1 += 0xFFFFFFFFu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0677A0u, 3); goto L_0C0677A0; } goto L_0C067794; }  /* 0C067790 bt/s */
L_0C067794: BLKS(0x0C067794u);
	r12 = (u32)(s32)(s16)r1;  /* 0C067794 exts.w Rm,Rn */
	T = (r12 & r12) == 0;  /* 0C067796 tst Rm,Rn */
	{ u32 c_ = !T; W32(r14 + 0x1Cu, r12); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0677A0u, 6); goto L_0C0677A0; } UPD(0x0C06779Cu, 1); goto L_0C06779C; }  /* 0C067798 bf/s */
L_0C06779C: BLKS(0x0C06779Cu);
	{ r4 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C0679C0u, 3); goto L_0C0679C0; }  /* 0C06779C bra */
L_0C0677A0: BLKS(0x0C0677A0u);
	r4 = 0xC297638u; UPD(0x0C0677A2u, 1);  /* 0C0677A0 mov.l @(disp,pc),Rn */
	r0 = 0x100u; UPD(0x0C0677A4u, 1);  /* 0C0677A2 mov.w @(disp,pc),Rn */
	IF(0x0C0677A4u); r0 = (u32)(s32)(s16)R16(r0 + r4); UPD(0x0C0677A6u, 1);  /* 0C0677A4 mov.w @(r0,Rm),Rn */
	r0 &= 0x20u;  /* 0C0677A6 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0677A8 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x1Bu; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0677B2u, 5); goto L_0C0677B2; } goto L_0C0677AE; }  /* 0C0677AA bt/s */
L_0C0677AE: BLKS(0x0C0677AEu);
	{ IF(0x0C0677B0u); r9 = (u32)(s32)(s8)R8(r0 + r14); /* slot mov.b @(r0,Rm),Rn */ UPD(0x0C0679B0u, 4); goto L_0C0679B0; }  /* 0C0677AE bra */
L_0C0677B2: BLKS(0x0C0677B2u);
	r3 = 0xC1736D4u; UPD(0x0C0677B4u, 1);  /* 0C0677B2 mov.l @(disp,pc),Rn */
	r6 = 0x2u;  /* 0C0677B4 mov #imm,Rn */
	r0 = R32(r14 + 0x18u); UPD(0x0C0677B8u, 2);  /* 0C0677B6 mov.l @(disp,Rm),Rn */
	r10 = 0x0u;  /* 0C0677B8 mov #imm,Rn */
	r4 = 0xC172BC8u; UPD(0x0C0677BCu, 2);  /* 0C0677BA mov.l @(disp,pc),Rn */
	r7 = 0x40C04000u; UPD(0x0C0677BEu, 1);  /* 0C0677BC mov.l @(disp,pc),Rn */
	IF(0x0C0677BEu); { u32 t_ = r13; PR = 0x0C0677C2u; IF(0x0C0677C0u); r5 = (u32)(s32)(s8)R8(r0 + r3); /* slot mov.b @(r0,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C0677C2u); }  /* 0C0677BE jsr @Rn */
L_0C0677C2: BLKS(0x0C0677C2u);
	r4 = 0xC172A90u; UPD(0x0C0677C4u, 1);  /* 0C0677C2 mov.l @(disp,pc),Rn */
	r5 = 0x1Eu;  /* 0C0677C4 mov #imm,Rn */
	r7 = 0x80808000u; UPD(0x0C0677C8u, 2);  /* 0C0677C6 mov.l @(disp,pc),Rn */
	IF(0x0C0677C8u); { u32 t_ = r13; PR = 0x0C0677CCu; r6 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C0677CCu); }  /* 0C0677C8 jsr @Rn */
L_0C0677CC: BLKS(0x0C0677CCu);
	r4 = 0xC17371Cu; UPD(0x0C0677CEu, 1);  /* 0C0677CC mov.l @(disp,pc),Rn */
	r5 = 0x1Cu;  /* 0C0677CE mov #imm,Rn */
	r7 = 0x80808000u; UPD(0x0C0677D2u, 2);  /* 0C0677D0 mov.l @(disp,pc),Rn */
	IF(0x0C0677D2u); { u32 t_ = r13; PR = 0x0C0677D6u; r6 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C0677D6u); }  /* 0C0677D2 jsr @Rn */
L_0C0677D6: BLKS(0x0C0677D6u);
	r4 = 0xC173720u; UPD(0x0C0677D8u, 1);  /* 0C0677D6 mov.l @(disp,pc),Rn */
	r5 = 0x18u;  /* 0C0677D8 mov #imm,Rn */
	r7 = 0x80808000u; UPD(0x0C0677DCu, 2);  /* 0C0677DA mov.l @(disp,pc),Rn */
	IF(0x0C0677DCu); { u32 t_ = r13; PR = 0x0C0677E0u; r6 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C0677E0u); }  /* 0C0677DC jsr @Rn */
L_0C0677E0: BLKS(0x0C0677E0u);
	r4 = 0xC17372Cu; UPD(0x0C0677E2u, 1);  /* 0C0677E0 mov.l @(disp,pc),Rn */
	r5 = 0x17u;  /* 0C0677E2 mov #imm,Rn */
	r7 = 0x80808000u; UPD(0x0C0677E6u, 2);  /* 0C0677E4 mov.l @(disp,pc),Rn */
	IF(0x0C0677E6u); { u32 t_ = r13; PR = 0x0C0677EAu; r6 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C0677EAu); }  /* 0C0677E6 jsr @Rn */
L_0C0677EA: BLKS(0x0C0677EAu);
	r4 = 0xC173738u; UPD(0x0C0677ECu, 1);  /* 0C0677EA mov.l @(disp,pc),Rn */
	r5 = 0x16u;  /* 0C0677EC mov #imm,Rn */
	r7 = 0x80808000u; UPD(0x0C0677F0u, 2);  /* 0C0677EE mov.l @(disp,pc),Rn */
	IF(0x0C0677F0u); { u32 t_ = r13; PR = 0x0C0677F4u; r6 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C0677F4u); }  /* 0C0677F0 jsr @Rn */
L_0C0677F4: BLKS(0x0C0677F4u);
	r4 = 0xC173744u; UPD(0x0C0677F6u, 1);  /* 0C0677F4 mov.l @(disp,pc),Rn */
	r5 = 0x15u;  /* 0C0677F6 mov #imm,Rn */
	r7 = 0x80808000u; UPD(0x0C0677FAu, 2);  /* 0C0677F8 mov.l @(disp,pc),Rn */
	IF(0x0C0677FAu); { u32 t_ = r13; PR = 0x0C0677FEu; r6 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C0677FEu); }  /* 0C0677FA jsr @Rn */
L_0C0677FE: BLKS(0x0C0677FEu);
	r4 = 0xC173750u; UPD(0x0C067800u, 1);  /* 0C0677FE mov.l @(disp,pc),Rn */
	r5 = 0x14u;  /* 0C067800 mov #imm,Rn */
	r7 = 0x80808000u; UPD(0x0C067804u, 2);  /* 0C067802 mov.l @(disp,pc),Rn */
	IF(0x0C067804u); { u32 t_ = r13; PR = 0x0C067808u; r6 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C067808u); }  /* 0C067804 jsr @Rn */
L_0C067808: BLKS(0x0C067808u);
	r4 = 0xC17375Cu; UPD(0x0C06780Au, 1);  /* 0C067808 mov.l @(disp,pc),Rn */
	r5 = 0x13u;  /* 0C06780A mov #imm,Rn */
	r7 = 0x80808000u; UPD(0x0C06780Eu, 2);  /* 0C06780C mov.l @(disp,pc),Rn */
	IF(0x0C06780Eu); { u32 t_ = r13; PR = 0x0C067812u; r6 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C067812u); }  /* 0C06780E jsr @Rn */
L_0C067812: BLKS(0x0C067812u);
	r4 = 0xC173768u; UPD(0x0C067814u, 1);  /* 0C067812 mov.l @(disp,pc),Rn */
	r5 = 0x12u;  /* 0C067814 mov #imm,Rn */
	r7 = 0x80808000u; UPD(0x0C067818u, 2);  /* 0C067816 mov.l @(disp,pc),Rn */
	r12 = 0xC05FD00u; UPD(0x0C06781Au, 1);  /* 0C067818 mov.l @(disp,pc),Rn */
	IF(0x0C06781Au); { u32 t_ = r13; PR = 0x0C06781Eu; r6 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C06781Eu); }  /* 0C06781A jsr @Rn */
L_0C06781E: BLKS(0x0C06781Eu);
	r11 = 0xC062300u; UPD(0x0C067820u, 1);  /* 0C06781E mov.l @(disp,pc),Rn */
	r5 = 0x11u;  /* 0C067820 mov #imm,Rn */
	r4 = 0xC173774u; UPD(0x0C067824u, 2);  /* 0C067822 mov.l @(disp,pc),Rn */
	r7 = 0x80808000u; UPD(0x0C067826u, 1);  /* 0C067824 mov.l @(disp,pc),Rn */
	IF(0x0C067826u); { u32 t_ = r13; PR = 0x0C06782Au; r6 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C06782Au); }  /* 0C067826 jsr @Rn */
L_0C06782A: BLKS(0x0C06782Au);
	IF(0x0C06782Au); ;  /* 0C06782A nop */
	UPD(0x0C06782Cu, 1);
L_0C06782C: BLKS(0x0C06782Cu);
	r4 = r10 & 0xFF;  /* 0C06782C extu.b Rm,Rn */
	IF(0x0C06782Eu); { u32 t_ = r12; PR = 0x0C067832u; r8 = 0u - r10; /* slot neg Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C05FD00, 0x0C05FD00u, 0x0C067832u); }  /* 0C06782E jsr @Rn */
L_0C067832: BLKS(0x0C067832u);
	r8 += 0xCu;  /* 0C067832 add #imm,Rn */
	r4 = R32(r0 + 0x8u); UPD(0x0C067836u, 2);  /* 0C067834 mov.l @(disp,Rm),Rn */
	r9 = r0;  /* 0C067836 mov Rm,Rn */
	r5 = r8;  /* 0C067838 mov Rm,Rn */
	IF(0x0C06783Au); { u32 t_ = r11; PR = 0x0C06783Eu; r6 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C062300, 0x0C062300u, 0x0C06783Eu); }  /* 0C06783A jsr @Rn */
L_0C06783E: BLKS(0x0C06783Eu);
	r4 = R32(r9 + 0x4u); UPD(0x0C067840u, 1);  /* 0C06783E mov.l @(disp,Rm),Rn */
	r5 = r8;  /* 0C067840 mov Rm,Rn */
	IF(0x0C067842u); { u32 t_ = r11; PR = 0x0C067846u; r6 = 0xDu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C062300, 0x0C062300u, 0x0C067846u); }  /* 0C067842 jsr @Rn */
L_0C067846: BLKS(0x0C067846u);
	r5 = r8;  /* 0C067846 mov Rm,Rn */
	r6 = 0x16u;  /* 0C067848 mov #imm,Rn */
	IF(0x0C06784Au); { u32 t_ = r11; PR = 0x0C06784Eu; r4 = R32(r9); /* slot mov.l @Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C062300, 0x0C062300u, 0x0C06784Eu); }  /* 0C06784A jsr @Rn */
L_0C06784E: BLKS(0x0C06784Eu);
	r6 = r10;  /* 0C06784E mov Rm,Rn */
	r6 += 0x1u;  /* 0C067850 add #imm,Rn */
	r10 = (u32)(s32)(s8)r6;  /* 0C067852 exts.b Rm,Rn */
	r5 = 0x7u;  /* 0C067854 mov #imm,Rn */
	T = (s32)r10 > (s32)r5;  /* 0C067856 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r5 = 0x1Cu; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C06782Cu, 8); goto L_0C06782C; } goto L_0C06785C; }  /* 0C067858 bf/s */
L_0C06785C: BLKS(0x0C06785Cu);
	r12 = 0xC062490u; UPD(0x0C06785Eu, 2);  /* 0C06785C mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s8)R8(r14); UPD(0x0C067860u, 1);  /* 0C06785E mov.b @Rm,Rn */
	r6 = 0xAu;  /* 0C067860 mov #imm,Rn */
	IF(0x0C067862u); { u32 t_ = r12; PR = 0x0C067866u; r4 = r2 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C062490, 0x0C062490u, 0x0C067866u); }  /* 0C067862 jsr @Rn */
L_0C067866: BLKS(0x0C067866u);
	r0 = R32(r14 + 0x18u); UPD(0x0C067868u, 1);  /* 0C067866 mov.l @(disp,Rm),Rn */
	r5 = 0x1Au;  /* 0C067868 mov #imm,Rn */
	r10 = 0xC0C2250u; UPD(0x0C06786Cu, 2);  /* 0C06786A mov.l @(disp,pc),Rn */
	r6 = 0x5u;  /* 0C06786C mov #imm,Rn */
	IF(0x0C06786Eu); r1 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C067870u, 2);  /* 0C06786E mov.b @(r0,Rm),Rn */
	r9 = r14;  /* 0C067870 mov Rm,Rn */
	IF(0x0C067872u); { u32 t_ = r10; PR = 0x0C067876u; r4 = r1 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0C2250, 0x0C0C2250u, 0x0C067876u); }  /* 0C067872 jsr @Rn */
L_0C067876: BLKS(0x0C067876u);
	r11 = 0x1u;  /* 0C067876 mov #imm,Rn */
	r10 = r12;  /* 0C067878 mov Rm,Rn */
	r9 += 0x1u;  /* 0C06787A add #imm,Rn */
	UPD(0x0C06787Cu, 3);
L_0C06787C: BLKS(0x0C06787Cu);
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C06787Eu, 1);  /* 0C06787C mov.b @Rm,Rn */
	r12 = 0u - r11;  /* 0C06787E neg Rm,Rn */
	r12 += 0x19u;  /* 0C067880 add #imm,Rn */
	r4 = r0 & 0xFF;  /* 0C067882 extu.b Rm,Rn */
	r5 = r12;  /* 0C067884 mov Rm,Rn */
	{ r6 = 0xFu; /* slot mov #imm,Rn */ UPD(0x0C067910u, 7); goto L_0C067910; }  /* 0C067886 bra */
L_0C067910: BLKS(0x0C067910u);
	IF(0x0C067910u); { u32 t_ = r10; PR = 0x0C067914u; IF(0x0C067912u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C062490, 0x0C062490u, 0x0C067914u); }  /* 0C067910 jsr @Rn */
L_0C067914: BLKS(0x0C067914u);
	r6 = (u32)(s32)(s8)R8(r9); UPD(0x0C067916u, 1);  /* 0C067914 mov.b @Rm,Rn */
	r4 = 0xC3C404Cu; UPD(0x0C067918u, 1);  /* 0C067916 mov.l @(disp,pc),Rn */
	r0 = r6 & 0xFF;  /* 0C067918 extu.b Rm,Rn */
	IF(0x0C06791Au); r5 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C06791Cu, 2);  /* 0C06791A mov.b @(r0,Rm),Rn */
	r6 = 0x12u;  /* 0C06791C mov #imm,Rn */
	r4 = r5 & 0xFF;  /* 0C06791E extu.b Rm,Rn */
	IF(0x0C067920u); { u32 t_ = r10; PR = 0x0C067924u; r5 = r12; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C062490, 0x0C062490u, 0x0C067924u); }  /* 0C067920 jsr @Rn */
L_0C067924: BLKS(0x0C067924u);
	r3 = (u32)(s32)(s8)R8(r9); UPD(0x0C067926u, 1);  /* 0C067924 mov.b @Rm,Rn */
	r5 = r12;  /* 0C067926 mov Rm,Rn */
	r8 = 0xC2AC05Cu; UPD(0x0C06792Au, 2);  /* 0C067928 mov.l @(disp,pc),Rn */
	r0 = r3 & 0xFF;  /* 0C06792A extu.b Rm,Rn */
	IF(0x0C06792Cu); r7 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C06792Eu, 2);  /* 0C06792C mov.b @(r0,Rm),Rn */
	r6 = 0x15u;  /* 0C06792E mov #imm,Rn */
	IF(0x0C067930u); { u32 t_ = r10; PR = 0x0C067934u; r4 = r7 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C062490, 0x0C062490u, 0x0C067934u); }  /* 0C067930 jsr @Rn */
L_0C067934: BLKS(0x0C067934u);
	r1 = (u32)(s32)(s8)R8(r9); UPD(0x0C067936u, 1);  /* 0C067934 mov.b @Rm,Rn */
	r5 = r12;  /* 0C067936 mov Rm,Rn */
	r2 = 0xC29CF88u; UPD(0x0C06793Au, 2);  /* 0C067938 mov.l @(disp,pc),Rn */
	r0 = r1 & 0xFF;  /* 0C06793A extu.b Rm,Rn */
	IF(0x0C06793Cu); r6 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C06793Eu, 2);  /* 0C06793C mov.b @(r0,Rm),Rn */
	r8 = r11;  /* 0C06793E mov Rm,Rn */
	r4 = r6 & 0xFF;  /* 0C067940 extu.b Rm,Rn */
	IF(0x0C067942u); { u32 t_ = r10; PR = 0x0C067946u; r6 = 0x18u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C062490, 0x0C062490u, 0x0C067946u); }  /* 0C067942 jsr @Rn */
L_0C067946: BLKS(0x0C067946u);
	{ u32 v_ = (u32)(s32)(s8)R8(r9); r9 += 1; r5 = v_; } UPD(0x0C067948u, 1);  /* 0C067946 mov.b @Rm+,Rn */
	r6 = 0x1Bu;  /* 0C067948 mov #imm,Rn */
	r4 = 0xC29D08Cu; UPD(0x0C06794Cu, 2);  /* 0C06794A mov.l @(disp,pc),Rn */
	r0 = r5 & 0xFF;  /* 0C06794C extu.b Rm,Rn */
	IF(0x0C06794Eu); r3 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C067950u, 2);  /* 0C06794E mov.b @(r0,Rm),Rn */
	r5 = r12;  /* 0C067950 mov Rm,Rn */
	r4 = r3 & 0xFF;  /* 0C067952 extu.b Rm,Rn */
	IF(0x0C067954u); { u32 t_ = r10; PR = 0x0C067958u; r8 += 0x1u; /* slot add #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C062490, 0x0C062490u, 0x0C067958u); }  /* 0C067954 jsr @Rn */
L_0C067958: BLKS(0x0C067958u);
	r11 = (u32)(s32)(s8)r8;  /* 0C067958 exts.b Rm,Rn */
	r7 = 0x8u;  /* 0C06795A mov #imm,Rn */
	T = (s32)r11 > (s32)r7;  /* 0C06795C cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C06787Cu, 6); goto L_0C06787C; }  /* 0C06795E bf */
L_0C067960: BLKS(0x0C067960u);
	r5 = 0x2u;  /* 0C067960 mov #imm,Rn */
	r11 = 0xC0626E0u; UPD(0x0C067964u, 2);  /* 0C067962 mov.l @(disp,pc),Rn */
	r9 = 0x80808000u; UPD(0x0C067966u, 1);  /* 0C067964 mov.l @(disp,pc),Rn */
	r6 = 0x3u;  /* 0C067966 mov #imm,Rn */
	r4 = 0xC172B0Cu; UPD(0x0C06796Au, 2);  /* 0C067968 mov.l @(disp,pc),Rn */
	r8 = 0xC061010u; UPD(0x0C06796Cu, 1);  /* 0C06796A mov.l @(disp,pc),Rn */
	IF(0x0C06796Cu); { u32 t_ = r11; PR = 0x0C067970u; r7 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C067970u); }  /* 0C06796C jsr @Rn */
L_0C067970: BLKS(0x0C067970u);
	r4 = 0xC172B28u; UPD(0x0C067972u, 1);  /* 0C067970 mov.l @(disp,pc),Rn */
	r7 = r9;  /* 0C067972 mov Rm,Rn */
	r12 = 0xC062250u; UPD(0x0C067976u, 2);  /* 0C067974 mov.l @(disp,pc),Rn */
	r6 = 0x5u;  /* 0C067976 mov #imm,Rn */
	IF(0x0C067978u); { u32 t_ = r11; PR = 0x0C06797Cu; r5 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C06797Cu); }  /* 0C067978 jsr @Rn */
L_0C06797C: BLKS(0x0C06797Cu);
	r4 = 0x7u;  /* 0C06797C mov #imm,Rn */
	r10 = 0xC2B03A6u; UPD(0x0C067980u, 2);  /* 0C06797E mov.l @(disp,pc),Rn */
	IF(0x0C067980u); { u32 t_ = r8; PR = 0x0C067984u; r5 = 0x7u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C061010, 0x0C061010u, 0x0C067984u); }  /* 0C067980 jsr @Rn */
L_0C067984: BLKS(0x0C067984u);
	IF(0x0C067984u); { u32 t_ = r12; PR = 0x0C067988u; IF(0x0C067986u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C062250, 0x0C062250u, 0x0C067988u); }  /* 0C067984 jsr @Rn */
L_0C067988: BLKS(0x0C067988u);
	r9 = (u32)(s32)(s16)R16(r10); UPD(0x0C06798Au, 1);  /* 0C067988 mov.w @Rm,Rn */
	r11 = 0x100u; UPD(0x0C06798Cu, 1);  /* 0C06798A mov.w @(disp,pc),Rn */
	T = (r9 & r11) == 0;  /* 0C06798C tst Rm,Rn */
	if (!T) { UPD(0x0C067994u, 4); goto L_0C067994; }  /* 0C06798E bf */
L_0C067990: BLKS(0x0C067990u);
	{ IF(0x0C067992u); ; /* slot nop */ UPD(0x0C0676B0u, 3); goto L_0C0676B0; }  /* 0C067990 bra */
L_0C067994: BLKS(0x0C067994u);
	r13 = 0xC0C21A0u; UPD(0x0C067996u, 1);  /* 0C067994 mov.l @(disp,pc),Rn */
	IF(0x0C067996u); { u32 t_ = r13; PR = 0x0C06799Au; r4 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C21A0, 0x0C0C21A0u, 0x0C06799Au); }  /* 0C067996 jsr @Rn */
L_0C06799A: BLKS(0x0C06799Au);
	r14 += 0x20u;  /* 0C06799A add #imm,Rn */
	r15 = r14;  /* 0C06799C mov Rm,Rn */
	IF(0x0C06799Eu); PR = R32(r15); r15 += 4; UPD(0x0C0679A0u, 3);  /* 0C06799E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0679A2u, 1);  /* 0C0679A0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0679A4u, 1);  /* 0C0679A2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0679A6u, 1);  /* 0C0679A4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0679A8u, 1);  /* 0C0679A6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0679AAu, 1);  /* 0C0679A8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0679ACu, 1);  /* 0C0679AA mov.l @Rm+,Rn */
	IF(0x0C0679ACu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0679AC rts */
L_0C0679B0: BLKS(0x0C0679B0u);
	r0 = 0xC05FED8u; UPD(0x0C0679B2u, 1);  /* 0C0679B0 mov.l @(disp,pc),Rn */
	IF(0x0C0679B2u); { u32 t_ = r0; PR = 0x0C0679B6u; r4 = r9 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C05FED8, 0x0C05FED8u, 0x0C0679B6u); }  /* 0C0679B2 jsr @Rn */
L_0C0679B6: BLKS(0x0C0679B6u);
	{ IF(0x0C0679B8u); ; /* slot nop */ UPD(0x0C0677B2u, 3); goto L_0C0677B2; }  /* 0C0679B6 bra */
L_0C0679C0: BLKS(0x0C0679C0u);
	r8 = 0xC060078u; UPD(0x0C0679C2u, 1);  /* 0C0679C0 mov.l @(disp,pc),Rn */
	IF(0x0C0679C2u); { u32 t_ = r8; PR = 0x0C0679C6u; r5 = 0x10u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C060078, 0x0C060078u, 0x0C0679C6u); }  /* 0C0679C2 jsr @Rn */
L_0C0679C6: BLKS(0x0C0679C6u);
	{ IF(0x0C0679C8u); ; /* slot nop */ UPD(0x0C0677A0u, 3); goto L_0C0677A0; }  /* 0C0679C6 bra */
L_0C0679D0: BLKS(0x0C0679D0u);
	r11 = 0xC05FD00u; UPD(0x0C0679D2u, 1);  /* 0C0679D0 mov.l @(disp,pc),Rn */
	r9 = 0x7u;  /* 0C0679D2 mov #imm,Rn */
	UPD(0x0C0679D4u, 1);
L_0C0679D4: BLKS(0x0C0679D4u);
	r8 = r10 & 0xFF;  /* 0C0679D4 extu.b Rm,Rn */
	IF(0x0C0679D6u); { u32 t_ = r11; PR = 0x0C0679DAu; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C05FD00, 0x0C05FD00u, 0x0C0679DAu); }  /* 0C0679D6 jsr @Rn */
L_0C0679DA: BLKS(0x0C0679DAu);
	r2 = R32(r0); UPD(0x0C0679DCu, 1);  /* 0C0679DA mov.l @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C0679DC tst Rm,Rn */
	if (T) { UPD(0x0C0679F0u, 4); goto L_0C0679F0; }  /* 0C0679DE bt */
L_0C0679E0: BLKS(0x0C0679E0u);
	r7 = r10;  /* 0C0679E0 mov Rm,Rn */
	r7 += 0x1u;  /* 0C0679E2 add #imm,Rn */
	r10 = (u32)(s32)(s8)r7;  /* 0C0679E4 exts.b Rm,Rn */
	T = (s32)r10 > (s32)r9;  /* 0C0679E6 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r1 = R32(r14 + 0x1Cu); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C0679D4u, 7); goto L_0C0679D4; } UPD(0x0C0679ECu, 1); goto L_0C0679EC; }  /* 0C0679E8 bf/s */
L_0C0679EC: BLKS(0x0C0679ECu);
	{ T = (r1 & r1) == 0; /* slot tst Rm,Rn */ UPD(0x0C067790u, 3); goto L_0C067790; }  /* 0C0679EC bra */
L_0C0679F0: BLKS(0x0C0679F0u);
	r0 = R32(r14 + 0x18u); UPD(0x0C0679F2u, 1);  /* 0C0679F0 mov.l @(disp,Rm),Rn */
	r4 = r8;  /* 0C0679F2 mov Rm,Rn */
	IF(0x0C0679F4u); r6 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C0679F6u, 2);  /* 0C0679F4 mov.b @(r0,Rm),Rn */
	r7 = 0x0u;  /* 0C0679F6 mov #imm,Rn */
	r3 = 0xC05FD2Cu; UPD(0x0C0679FAu, 2);  /* 0C0679F8 mov.l @(disp,pc),Rn */
	r5 = r6 & 0xFF;  /* 0C0679FA extu.b Rm,Rn */
	IF(0x0C0679FCu); { u32 t_ = r3; PR = 0x0C067A00u; r6 = 0x40u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C05FD2C, 0x0C05FD2Cu, 0x0C067A00u); }  /* 0C0679FC jsr @Rn */
L_0C067A00: BLKS(0x0C067A00u);
	{ r1 = R32(r14 + 0x1Cu); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C06778Eu, 3); goto L_0C06778E; }  /* 0C067A00 bra */
L_0C067A10: BLKS(0x0C067A10u);
	r9 = 0xC0C21A0u; UPD(0x0C067A12u, 1);  /* 0C067A10 mov.l @(disp,pc),Rn */
	IF(0x0C067A12u); { u32 t_ = r9; PR = 0x0C067A16u; r4 = r1 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C21A0, 0x0C0C21A0u, 0x0C067A16u); }  /* 0C067A12 jsr @Rn */
L_0C067A16: BLKS(0x0C067A16u);
	r4 = 0xC238029u; UPD(0x0C067A18u, 1);  /* 0C067A16 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r4); UPD(0x0C067A1Au, 1);  /* 0C067A18 mov.b @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C067A1A tst Rm,Rn */
	if (!T) { UPD(0x0C067A00u, 4); goto L_0C067A00; }  /* 0C067A1C bf */
L_0C067A1E: BLKS(0x0C067A1Eu);
	r5 = 0x258u; UPD(0x0C067A20u, 1);  /* 0C067A1E mov.w @(disp,pc),Rn */
	{ W32(r14 + 0x1Cu, r5); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C06778Cu, 3); goto L_0C06778C; }  /* 0C067A20 bra */
L_0C067A30: BLKS(0x0C067A30u);
	r0 = 0x200u; UPD(0x0C067A32u, 1);  /* 0C067A30 mov.w @(disp,pc),Rn */
	IF(0x0C067A32u); r0 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C067A34u, 1);  /* 0C067A32 mov.w @(r0,Rm),Rn */
	r0 &= 0x8u;  /* 0C067A34 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C067A36 tst Rm,Rn */
	{ u32 c_ = T; r0 = R32(r14 + 0x18u); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C067A52u, 5); goto L_0C067A52; } UPD(0x0C067A3Cu, 1); goto L_0C067A3C; }  /* 0C067A38 bt/s */
L_0C067A3C: BLKS(0x0C067A3Cu);
	r2 = 0xC3C404Cu; UPD(0x0C067A3Eu, 1);  /* 0C067A3C mov.l @(disp,pc),Rn */
	IF(0x0C067A3Eu); r9 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C067A40u, 1);  /* 0C067A3E mov.b @(r0,Rm),Rn */
	r0 = r2;  /* 0C067A40 mov Rm,Rn */
	r3 = r9 & 0xFF;  /* 0C067A42 extu.b Rm,Rn */
	IF(0x0C067A44u); r1 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C067A46u, 3);  /* 0C067A44 mov.b @(r0,Rm),Rn */
	r0 = r1;  /* 0C067A46 mov Rm,Rn */
	T = r0 == 0x7Fu;  /* 0C067A48 cmp/eq #imm,r0 */
	{ u32 c_ = T; r1 += 0x1u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C067A90u, 5); goto L_0C067A90; } UPD(0x0C067A4Eu, 1); goto L_0C067A4E; }  /* 0C067A4A bt/s */
L_0C067A4E: BLKS(0x0C067A4Eu);
	r0 = r2;  /* 0C067A4E mov Rm,Rn */
	IF(0x0C067A50u); W8(r0 + r3, r1); UPD(0x0C067A52u, 2);  /* 0C067A50 mov.b Rm,@(r0,Rn) */
L_0C067A52: BLKS(0x0C067A52u);
	r2 = 0xC297638u; UPD(0x0C067A54u, 1);  /* 0C067A52 mov.l @(disp,pc),Rn */
	r0 = 0x200u; UPD(0x0C067A56u, 1);  /* 0C067A54 mov.w @(disp,pc),Rn */
	IF(0x0C067A56u); r0 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C067A58u, 1);  /* 0C067A56 mov.w @(r0,Rm),Rn */
	r0 &= 0x4u;  /* 0C067A58 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C067A5A tst Rm,Rn */
	{ u32 c_ = T; r0 = R32(r14 + 0x18u); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C067A72u, 5); goto L_0C067A72; } UPD(0x0C067A60u, 1); goto L_0C067A60; }  /* 0C067A5C bt/s */
L_0C067A60: BLKS(0x0C067A60u);
	IF(0x0C067A60u); r7 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C067A62u, 1);  /* 0C067A60 mov.b @(r0,Rm),Rn */
	r2 = 0xC3C404Cu; UPD(0x0C067A64u, 1);  /* 0C067A62 mov.l @(disp,pc),Rn */
	r0 = r7 & 0xFF;  /* 0C067A64 extu.b Rm,Rn */
	IF(0x0C067A66u); r1 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C067A68u, 2);  /* 0C067A66 mov.b @(r0,Rm),Rn */
	T = (r1 & r1) == 0;  /* 0C067A68 tst Rm,Rn */
	{ u32 c_ = !T; r1 += 0xFFFFFFFFu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C067A70u, 4); goto L_0C067A70; } goto L_0C067A6E; }  /* 0C067A6A bf/s */
L_0C067A6E: BLKS(0x0C067A6Eu);
	r1 = 0x7Fu;  /* 0C067A6E mov #imm,Rn */
	UPD(0x0C067A70u, 2);
L_0C067A70: BLKS(0x0C067A70u);
	IF(0x0C067A70u); W8(r0 + r2, r1); UPD(0x0C067A72u, 1);  /* 0C067A70 mov.b Rm,@(r0,Rn) */
L_0C067A72: BLKS(0x0C067A72u);
	{ IF(0x0C067A74u); ; /* slot nop */ UPD(0x0C06775Eu, 3); goto L_0C06775E; }  /* 0C067A72 bra */
L_0C067A80: BLKS(0x0C067A80u);
	{ r1 += 0xFFFFFFFFu; /* slot add #imm,Rn */ UPD(0x0C067A70u, 3); goto L_0C067A70; }  /* 0C067A80 bra */
L_0C067A90: BLKS(0x0C067A90u);
	{ r1 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C067A4Eu, 3); goto L_0C067A4E; }  /* 0C067A90 bra */
L_0C067AA0: BLKS(0x0C067AA0u);
	if (!T) { UPD(0x0C067A72u, 3); goto L_0C067A72; }  /* 0C067AA0 bf */
L_0C067AA2: BLKS(0x0C067AA2u);
	r0 = 0x200u; UPD(0x0C067AA4u, 1);  /* 0C067AA2 mov.w @(disp,pc),Rn */
	IF(0x0C067AA4u); r3 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C067AA6u, 1);  /* 0C067AA4 mov.w @(r0,Rm),Rn */
	r0 = r3;  /* 0C067AA6 mov Rm,Rn */
	r0 &= 0x8u;  /* 0C067AA8 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C067AAA tst Rm,Rn */
	{ u32 c_ = T; r0 = r3; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C067AC0u, 6); goto L_0C067AC0; } goto L_0C067AB0; }  /* 0C067AAC bt/s */
L_0C067AB0: BLKS(0x0C067AB0u);
	r0 = R32(r14 + 0x18u); UPD(0x0C067AB2u, 2);  /* 0C067AB0 mov.l @(disp,Rm),Rn */
	IF(0x0C067AB2u); r6 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C067AB4u, 1);  /* 0C067AB2 mov.b @(r0,Rm),Rn */
	r4 = 0xC29D08Cu; UPD(0x0C067AB6u, 1);  /* 0C067AB4 mov.l @(disp,pc),Rn */
	r0 = r6 & 0xFF;  /* 0C067AB6 extu.b Rm,Rn */
	IF(0x0C067AB8u); r5 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C067ABAu, 2);  /* 0C067AB8 mov.b @(r0,Rm),Rn */
	r5 += 0x1u;  /* 0C067ABA add #imm,Rn */
	IF(0x0C067ABCu); W8(r0 + r4, r5); UPD(0x0C067ABEu, 2);  /* 0C067ABC mov.b Rm,@(r0,Rn) */
	r0 = r3;  /* 0C067ABE mov Rm,Rn */
	UPD(0x0C067AC0u, 1);
L_0C067AC0: BLKS(0x0C067AC0u);
	r0 &= 0x4u;  /* 0C067AC0 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C067AC2 tst Rm,Rn */
	{ u32 c_ = T; r0 = R32(r14 + 0x18u); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C067A72u, 5); goto L_0C067A72; } UPD(0x0C067AC8u, 1); goto L_0C067AC8; }  /* 0C067AC4 bt/s */
L_0C067AC8: BLKS(0x0C067AC8u);
	IF(0x0C067AC8u); r3 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C067ACAu, 1);  /* 0C067AC8 mov.b @(r0,Rm),Rn */
	r2 = 0xC29D08Cu; UPD(0x0C067ACCu, 1);  /* 0C067ACA mov.l @(disp,pc),Rn */
	r0 = r3 & 0xFF;  /* 0C067ACC extu.b Rm,Rn */
	{ IF(0x0C067AD0u); r1 = (u32)(s32)(s8)R8(r0 + r2); /* slot mov.b @(r0,Rm),Rn */ UPD(0x0C067A80u, 4); goto L_0C067A80; }  /* 0C067ACE bra */
L_0C067AE0: BLKS(0x0C067AE0u);
	r0 = 0x200u; UPD(0x0C067AE2u, 1);  /* 0C067AE0 mov.w @(disp,pc),Rn */
	IF(0x0C067AE2u); r0 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C067AE4u, 1);  /* 0C067AE2 mov.w @(r0,Rm),Rn */
	r0 &= 0x8u;  /* 0C067AE4 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C067AE6 tst Rm,Rn */
	{ u32 c_ = T; r0 = R32(r14 + 0x18u); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C067B02u, 5); goto L_0C067B02; } UPD(0x0C067AECu, 1); goto L_0C067AEC; }  /* 0C067AE8 bt/s */
L_0C067AEC: BLKS(0x0C067AECu);
	r2 = 0xC2AC05Cu; UPD(0x0C067AEEu, 1);  /* 0C067AEC mov.l @(disp,pc),Rn */
	IF(0x0C067AEEu); r10 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C067AF0u, 1);  /* 0C067AEE mov.b @(r0,Rm),Rn */
	r0 = r2;  /* 0C067AF0 mov Rm,Rn */
	r3 = r10 & 0xFF;  /* 0C067AF2 extu.b Rm,Rn */
	IF(0x0C067AF4u); r1 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C067AF6u, 3);  /* 0C067AF4 mov.b @(r0,Rm),Rn */
	r0 = r1;  /* 0C067AF6 mov Rm,Rn */
	T = r0 == 0x3Fu;  /* 0C067AF8 cmp/eq #imm,r0 */
	{ u32 c_ = T; r1 += 0x1u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C067B30u, 5); goto L_0C067B30; } UPD(0x0C067AFEu, 1); goto L_0C067AFE; }  /* 0C067AFA bt/s */
L_0C067AFE: BLKS(0x0C067AFEu);
	r0 = r2;  /* 0C067AFE mov Rm,Rn */
	IF(0x0C067B00u); W8(r0 + r3, r1); UPD(0x0C067B02u, 2);  /* 0C067B00 mov.b Rm,@(r0,Rn) */
L_0C067B02: BLKS(0x0C067B02u);
	r11 = 0xC297638u; UPD(0x0C067B04u, 1);  /* 0C067B02 mov.l @(disp,pc),Rn */
	r0 = 0x200u; UPD(0x0C067B06u, 1);  /* 0C067B04 mov.w @(disp,pc),Rn */
	IF(0x0C067B06u); r0 = (u32)(s32)(s16)R16(r0 + r11); UPD(0x0C067B08u, 1);  /* 0C067B06 mov.w @(r0,Rm),Rn */
	r0 &= 0x4u;  /* 0C067B08 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C067B0A tst Rm,Rn */
	{ u32 c_ = T; r0 = R32(r14 + 0x18u); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C067A72u, 5); goto L_0C067A72; } UPD(0x0C067B10u, 1); goto L_0C067B10; }  /* 0C067B0C bt/s */
L_0C067B10: BLKS(0x0C067B10u);
	IF(0x0C067B10u); r12 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C067B12u, 1);  /* 0C067B10 mov.b @(r0,Rm),Rn */
	r2 = 0xC2AC05Cu; UPD(0x0C067B14u, 1);  /* 0C067B12 mov.l @(disp,pc),Rn */
	r0 = r12 & 0xFF;  /* 0C067B14 extu.b Rm,Rn */
	IF(0x0C067B16u); r1 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C067B18u, 2);  /* 0C067B16 mov.b @(r0,Rm),Rn */
	T = (r1 & r1) == 0;  /* 0C067B18 tst Rm,Rn */
	if (!T) { UPD(0x0C067A80u, 4); goto L_0C067A80; }  /* 0C067B1A bf */
L_0C067B1C: BLKS(0x0C067B1Cu);
	r1 = 0x3Fu;  /* 0C067B1C mov #imm,Rn */
	{ IF(0x0C067B20u); W8(r0 + r2, r1); /* slot mov.b Rm,@(r0,Rn) */ UPD(0x0C067A72u, 4); goto L_0C067A72; }  /* 0C067B1E bra */
L_0C067B30: BLKS(0x0C067B30u);
	{ r1 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C067AFEu, 3); goto L_0C067AFE; }  /* 0C067B30 bra */
L_0C067B90: BLKS(0x0C067B90u);
	{ IF(0x0C067B92u); r1 = (u32)(s32)(s8)R8(r0 + r12); /* slot mov.b @(r0,Rm),Rn */ UPD(0x0C06773Au, 3); goto L_0C06773A; }  /* 0C067B90 bra */
L_0C067BA0: BLKS(0x0C067BA0u);
	r2 = 0xC1736F8u; UPD(0x0C067BA2u, 1);  /* 0C067BA0 mov.l @(disp,pc),Rn */
	{ IF(0x0C067BA4u); r1 = (u32)(s32)(s8)R8(r0 + r2); /* slot mov.b @(r0,Rm),Rn */ UPD(0x0C067716u, 3); goto L_0C067716; }  /* 0C067BA2 bra */
L_0C067BB0: BLKS(0x0C067BB0u);
	r3 = 0xC173704u; UPD(0x0C067BB2u, 1);  /* 0C067BB0 mov.l @(disp,pc),Rn */
	r2 = 0x8u;  /* 0C067BB2 mov #imm,Rn */
	UPD(0x0C067BB4u, 1);
L_0C067BB4: BLKS(0x0C067BB4u);
	r0 = r3;  /* 0C067BB4 mov Rm,Rn */
	IF(0x0C067BB6u); r7 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C067BB8u, 2);  /* 0C067BB6 mov.b @(r0,Rm),Rn */
	r6 = r10;  /* 0C067BB8 mov Rm,Rn */
	r9 = 0xCu;  /* 0C067BBA mov #imm,Rn */
	r0 = r10;  /* 0C067BBC mov Rm,Rn */
	r9 += r14;  /* 0C067BBE add Rm,Rn */
	r6 += 0x1u;  /* 0C067BC0 add #imm,Rn */
	r10 = (u32)(s32)(s8)r6;  /* 0C067BC2 exts.b Rm,Rn */
	T = (s32)r10 > (s32)r2;  /* 0C067BC4 cmp/gt Rm,Rn */
	{ u32 c_ = !T; IF(0x0C067BC8u); W8(r0 + r9, r7); /* slot mov.b Rm,@(r0,Rn) */ if (c_) { UPD(0x0C067BB4u, 10); goto L_0C067BB4; } UPD(0x0C067BCAu, 1); goto L_0C067BCA; }  /* 0C067BC6 bf/s */
L_0C067BCA: BLKS(0x0C067BCAu);
	{ IF(0x0C067BCCu); ; /* slot nop */ UPD(0x0C0676AEu, 3); goto L_0C0676AE; }  /* 0C067BCA bra */
}

/* FUN_0c067be0 */
void blk_f_0C067BE0(sh3_t *c)
{
	LOCALS;
L_0C067BE0: BLKS(0x0C067BE0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C067BE2u, 1);  /* 0C067BE0 mov.l Rm,@-Rn */
	r1 = r4;  /* 0C067BE2 mov Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C067BE6u, 2);  /* 0C067BE4 mov.l Rm,@-Rn */
	r0 = (u32)(s32)(s8)r1;  /* 0C067BE6 exts.b Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C067BEAu, 2);  /* 0C067BE8 mov.l Rm,@-Rn */
	T = r0 == 0x6u;  /* 0C067BEA cmp/eq #imm,r0 */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C067BEEu, 2);  /* 0C067BEC mov.l Rm,@-Rn */
	r4 = r6;  /* 0C067BEE mov Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C067BF2u, 2);  /* 0C067BF0 mov.l Rm,@-Rn */
	r0 = 0x0u;  /* 0C067BF2 mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C067BF6u, 2);  /* 0C067BF4 mov.l Rm,@-Rn */
	r12 = (u32)(s32)(s8)r5;  /* 0C067BF6 exts.b Rm,Rn */
	IF(0x0C067BF8u); r15 -= 4; W32(r15, PR); UPD(0x0C067BFAu, 2);  /* 0C067BF8 sts.l pr,@-Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C067C10u, 3); goto L_0C067C10; } UPD(0x0C067BFEu, 1); goto L_0C067BFE; }  /* 0C067BFA bt/s */
L_0C067BFE: BLKS(0x0C067BFEu);
	r15 = r14;  /* 0C067BFE mov Rm,Rn */
	IF(0x0C067C00u); PR = R32(r15); r15 += 4; UPD(0x0C067C02u, 2);  /* 0C067C00 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C067C04u, 1);  /* 0C067C02 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C067C06u, 1);  /* 0C067C04 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C067C08u, 1);  /* 0C067C06 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C067C0Au, 1);  /* 0C067C08 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C067C0Cu, 1);  /* 0C067C0A mov.l @Rm+,Rn */
	IF(0x0C067C0Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C067C0C rts */
L_0C067C10: BLKS(0x0C067C10u);
	r0 = 0x4u;  /* 0C067C10 mov #imm,Rn */
	T = r12 > r0;  /* 0C067C12 cmp/hi Rm,Rn */
	{ u32 c_ = T; r0 = r12; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C067BFEu, 5); goto L_0C067BFE; } goto L_0C067C18; }  /* 0C067C14 bt/s */
L_0C067C18: BLKS(0x0C067C18u);
	r1 = r12;  /* 0C067C18 mov Rm,Rn */
	r0 = 0xC067C24u;  /* 0C067C1A mova @(disp,pc),r0 */
	r1 += r1;  /* 0C067C1C add Rm,Rn */
	IF(0x0C067C1Eu); r3 = (u32)(s32)(s16)R16(r0 + r1); UPD(0x0C067C20u, 5);  /* 0C067C1E mov.w @(r0,Rm),Rn */
	IF(0x0C067C20u); { u32 tv_ = (r3 + 0x0C067C24u); u32 t_ = PHYS(tv_); IF(0x0C067C22u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C067C30u: goto L_0C067C30; case 0x0C067CA0u: goto L_0C067CA0; case 0x0C067CF0u: goto L_0C067CF0; case 0x0C067D50u: goto L_0C067D50; default: JUMPD(tv_); } }  /* 0C067C20 braf Rn */
L_0C067C30: BLKS(0x0C067C30u);
	r9 = 0xC0626E0u; UPD(0x0C067C32u, 1);  /* 0C067C30 mov.l @(disp,pc),Rn */
	r5 = 0x9u;  /* 0C067C32 mov #imm,Rn */
	r11 = 0xC1736C0u; UPD(0x0C067C36u, 2);  /* 0C067C34 mov.l @(disp,pc),Rn */
	r6 = 0x4u;  /* 0C067C36 mov #imm,Rn */
	r8 = 0xC0404000u; UPD(0x0C067C3Au, 2);  /* 0C067C38 mov.l @(disp,pc),Rn */
	r10 = 0xC1736C4u; UPD(0x0C067C3Cu, 1);  /* 0C067C3A mov.l @(disp,pc),Rn */
	r7 = r8;  /* 0C067C3C mov Rm,Rn */
	IF(0x0C067C3Eu); { u32 t_ = r9; PR = 0x0C067C42u; r4 = R32(r11); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C067C42u); }  /* 0C067C3E jsr @Rn */
L_0C067C42: BLKS(0x0C067C42u);
	r4 = R32(r10); UPD(0x0C067C44u, 1);  /* 0C067C42 mov.l @Rm,Rn */
	r5 = 0x8u;  /* 0C067C44 mov #imm,Rn */
	r6 = 0x4u;  /* 0C067C46 mov #imm,Rn */
	IF(0x0C067C48u); { u32 t_ = r9; PR = 0x0C067C4Cu; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C067C4Cu); }  /* 0C067C48 jsr @Rn */
L_0C067C4C: BLKS(0x0C067C4Cu);
	r4 = R32(r10); UPD(0x0C067C4Eu, 1);  /* 0C067C4C mov.l @Rm,Rn */
	r5 = 0x7u;  /* 0C067C4E mov #imm,Rn */
	r6 = 0x4u;  /* 0C067C50 mov #imm,Rn */
	IF(0x0C067C52u); { u32 t_ = r9; PR = 0x0C067C56u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C067C56u); }  /* 0C067C52 jsr @Rn */
L_0C067C56: BLKS(0x0C067C56u);
	r4 = R32(r10); UPD(0x0C067C58u, 1);  /* 0C067C56 mov.l @Rm,Rn */
	r5 = 0x6u;  /* 0C067C58 mov #imm,Rn */
	r6 = 0x4u;  /* 0C067C5A mov #imm,Rn */
	IF(0x0C067C5Cu); { u32 t_ = r9; PR = 0x0C067C60u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C067C60u); }  /* 0C067C5C jsr @Rn */
L_0C067C60: BLKS(0x0C067C60u);
	r4 = R32(r10); UPD(0x0C067C62u, 1);  /* 0C067C60 mov.l @Rm,Rn */
	r5 = 0x5u;  /* 0C067C62 mov #imm,Rn */
	r6 = 0x4u;  /* 0C067C64 mov #imm,Rn */
	IF(0x0C067C66u); { u32 t_ = r9; PR = 0x0C067C6Au; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C067C6Au); }  /* 0C067C66 jsr @Rn */
L_0C067C6A: BLKS(0x0C067C6Au);
	r4 = R32(r11); UPD(0x0C067C6Cu, 1);  /* 0C067C6A mov.l @Rm,Rn */
	r5 = 0x4u;  /* 0C067C6C mov #imm,Rn */
	r6 = 0x4u;  /* 0C067C6E mov #imm,Rn */
	IF(0x0C067C70u); { u32 t_ = r9; PR = 0x0C067C74u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C067C74u); }  /* 0C067C70 jsr @Rn */
L_0C067C74: BLKS(0x0C067C74u);
	r2 = 0xC172B60u; UPD(0x0C067C76u, 1);  /* 0C067C74 mov.l @(disp,pc),Rn */
	r5 = 0x7u;  /* 0C067C76 mov #imm,Rn */
	r4 = R32(r2); UPD(0x0C067C7Au, 2);  /* 0C067C78 mov.l @Rm,Rn */
	r6 = 0x6u;  /* 0C067C7A mov #imm,Rn */
	IF(0x0C067C7Cu); { u32 t_ = r9; PR = 0x0C067C80u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C067C80u); }  /* 0C067C7C jsr @Rn */
L_0C067C80: BLKS(0x0C067C80u);
	r4 = 0xC173780u; UPD(0x0C067C82u, 1);  /* 0C067C80 mov.l @(disp,pc),Rn */
	r5 = 0x6u;  /* 0C067C82 mov #imm,Rn */
	UPD(0x0C067C84u, 1);
L_0C067C84: BLKS(0x0C067C84u);
	r6 = 0x6u;  /* 0C067C84 mov #imm,Rn */
	IF(0x0C067C86u); { u32 t_ = r9; PR = 0x0C067C8Au; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C067C8Au); }  /* 0C067C86 jsr @Rn */
L_0C067C8A: BLKS(0x0C067C8Au);
	r6 = 0xC297738u; UPD(0x0C067C8Cu, 1);  /* 0C067C8A mov.l @(disp,pc),Rn */
	r5 = 0x100u; UPD(0x0C067C8Eu, 1);  /* 0C067C8C mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)R16(r6); UPD(0x0C067C90u, 1);  /* 0C067C8E mov.w @Rm,Rn */
	T = (r5 & r4) == 0;  /* 0C067C90 tst Rm,Rn */
	if (T) { UPD(0x0C067C9Au, 4); goto L_0C067C9A; }  /* 0C067C92 bt */
L_0C067C94: BLKS(0x0C067C94u);
	r7 = r12;  /* 0C067C94 mov Rm,Rn */
	UPD(0x0C067C96u, 1);
L_0C067C96: BLKS(0x0C067C96u);
	r7 += 0x1u;  /* 0C067C96 add #imm,Rn */
	r12 = (u32)(s32)(s8)r7;  /* 0C067C98 exts.b Rm,Rn */
	UPD(0x0C067C9Au, 2);
L_0C067C9A: BLKS(0x0C067C9Au);
	{ r0 = r12; /* slot mov Rm,Rn */ UPD(0x0C067BFEu, 3); goto L_0C067BFE; }  /* 0C067C9A bra */
L_0C067CA0: BLKS(0x0C067CA0u);
	r9 = 0xC0626E0u; UPD(0x0C067CA2u, 1);  /* 0C067CA0 mov.l @(disp,pc),Rn */
	r5 = 0x9u;  /* 0C067CA2 mov #imm,Rn */
	r11 = 0xC1736C0u; UPD(0x0C067CA6u, 2);  /* 0C067CA4 mov.l @(disp,pc),Rn */
	r6 = 0x4u;  /* 0C067CA6 mov #imm,Rn */
	r8 = 0xC0404000u; UPD(0x0C067CAAu, 2);  /* 0C067CA8 mov.l @(disp,pc),Rn */
	r10 = 0xC1736C4u; UPD(0x0C067CACu, 1);  /* 0C067CAA mov.l @(disp,pc),Rn */
	r7 = r8;  /* 0C067CAC mov Rm,Rn */
	IF(0x0C067CAEu); { u32 t_ = r9; PR = 0x0C067CB2u; r4 = R32(r11); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C067CB2u); }  /* 0C067CAE jsr @Rn */
L_0C067CB2: BLKS(0x0C067CB2u);
	r4 = R32(r10); UPD(0x0C067CB4u, 1);  /* 0C067CB2 mov.l @Rm,Rn */
	r5 = 0x8u;  /* 0C067CB4 mov #imm,Rn */
	r6 = 0x4u;  /* 0C067CB6 mov #imm,Rn */
	IF(0x0C067CB8u); { u32 t_ = r9; PR = 0x0C067CBCu; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C067CBCu); }  /* 0C067CB8 jsr @Rn */
L_0C067CBC: BLKS(0x0C067CBCu);
	r4 = R32(r10); UPD(0x0C067CBEu, 1);  /* 0C067CBC mov.l @Rm,Rn */
	r5 = 0x7u;  /* 0C067CBE mov #imm,Rn */
	r6 = 0x4u;  /* 0C067CC0 mov #imm,Rn */
	IF(0x0C067CC2u); { u32 t_ = r9; PR = 0x0C067CC6u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C067CC6u); }  /* 0C067CC2 jsr @Rn */
L_0C067CC6: BLKS(0x0C067CC6u);
	r4 = R32(r10); UPD(0x0C067CC8u, 1);  /* 0C067CC6 mov.l @Rm,Rn */
	r5 = 0x6u;  /* 0C067CC8 mov #imm,Rn */
	r6 = 0x4u;  /* 0C067CCA mov #imm,Rn */
	IF(0x0C067CCCu); { u32 t_ = r9; PR = 0x0C067CD0u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C067CD0u); }  /* 0C067CCC jsr @Rn */
L_0C067CD0: BLKS(0x0C067CD0u);
	r4 = R32(r10); UPD(0x0C067CD2u, 1);  /* 0C067CD0 mov.l @Rm,Rn */
	r5 = 0x5u;  /* 0C067CD2 mov #imm,Rn */
	r6 = 0x4u;  /* 0C067CD4 mov #imm,Rn */
	IF(0x0C067CD6u); { u32 t_ = r9; PR = 0x0C067CDAu; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C067CDAu); }  /* 0C067CD6 jsr @Rn */
L_0C067CDA: BLKS(0x0C067CDAu);
	r4 = R32(r11); UPD(0x0C067CDCu, 1);  /* 0C067CDA mov.l @Rm,Rn */
	r5 = 0x4u;  /* 0C067CDC mov #imm,Rn */
	r6 = 0x4u;  /* 0C067CDE mov #imm,Rn */
	IF(0x0C067CE0u); { u32 t_ = r9; PR = 0x0C067CE4u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C067CE4u); }  /* 0C067CE0 jsr @Rn */
L_0C067CE4: BLKS(0x0C067CE4u);
	r4 = 0xC172B74u; UPD(0x0C067CE6u, 1);  /* 0C067CE4 mov.l @(disp,pc),Rn */
	{ r5 = 0x7u; /* slot mov #imm,Rn */ UPD(0x0C067C84u, 3); goto L_0C067C84; }  /* 0C067CE6 bra */
L_0C067CF0: BLKS(0x0C067CF0u);
	r9 = 0xC0626E0u; UPD(0x0C067CF2u, 1);  /* 0C067CF0 mov.l @(disp,pc),Rn */
	r5 = 0x9u;  /* 0C067CF2 mov #imm,Rn */
	r11 = 0xC1736C0u; UPD(0x0C067CF6u, 2);  /* 0C067CF4 mov.l @(disp,pc),Rn */
	r6 = 0x4u;  /* 0C067CF6 mov #imm,Rn */
	r8 = 0xC0404000u; UPD(0x0C067CFAu, 2);  /* 0C067CF8 mov.l @(disp,pc),Rn */
	r10 = 0xC1736C4u; UPD(0x0C067CFCu, 1);  /* 0C067CFA mov.l @(disp,pc),Rn */
	r7 = r8;  /* 0C067CFC mov Rm,Rn */
	IF(0x0C067CFEu); { u32 t_ = r9; PR = 0x0C067D02u; r4 = R32(r11); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C067D02u); }  /* 0C067CFE jsr @Rn */
L_0C067D02: BLKS(0x0C067D02u);
	r4 = R32(r10); UPD(0x0C067D04u, 1);  /* 0C067D02 mov.l @Rm,Rn */
	r5 = 0x8u;  /* 0C067D04 mov #imm,Rn */
	r6 = 0x4u;  /* 0C067D06 mov #imm,Rn */
	IF(0x0C067D08u); { u32 t_ = r9; PR = 0x0C067D0Cu; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C067D0Cu); }  /* 0C067D08 jsr @Rn */
L_0C067D0C: BLKS(0x0C067D0Cu);
	r4 = R32(r10); UPD(0x0C067D0Eu, 1);  /* 0C067D0C mov.l @Rm,Rn */
	r5 = 0x7u;  /* 0C067D0E mov #imm,Rn */
	r6 = 0x4u;  /* 0C067D10 mov #imm,Rn */
	IF(0x0C067D12u); { u32 t_ = r9; PR = 0x0C067D16u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C067D16u); }  /* 0C067D12 jsr @Rn */
L_0C067D16: BLKS(0x0C067D16u);
	r4 = R32(r10); UPD(0x0C067D18u, 1);  /* 0C067D16 mov.l @Rm,Rn */
	r5 = 0x6u;  /* 0C067D18 mov #imm,Rn */
	r6 = 0x4u;  /* 0C067D1A mov #imm,Rn */
	IF(0x0C067D1Cu); { u32 t_ = r9; PR = 0x0C067D20u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C067D20u); }  /* 0C067D1C jsr @Rn */
L_0C067D20: BLKS(0x0C067D20u);
	r4 = R32(r10); UPD(0x0C067D22u, 1);  /* 0C067D20 mov.l @Rm,Rn */
	r5 = 0x5u;  /* 0C067D22 mov #imm,Rn */
	r6 = 0x4u;  /* 0C067D24 mov #imm,Rn */
	IF(0x0C067D26u); { u32 t_ = r9; PR = 0x0C067D2Au; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C067D2Au); }  /* 0C067D26 jsr @Rn */
L_0C067D2A: BLKS(0x0C067D2Au);
	r4 = R32(r11); UPD(0x0C067D2Cu, 1);  /* 0C067D2A mov.l @Rm,Rn */
	r5 = 0x4u;  /* 0C067D2C mov #imm,Rn */
	r6 = 0x4u;  /* 0C067D2E mov #imm,Rn */
	IF(0x0C067D30u); { u32 t_ = r9; PR = 0x0C067D34u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C067D34u); }  /* 0C067D30 jsr @Rn */
L_0C067D34: BLKS(0x0C067D34u);
	r4 = 0xC173790u; UPD(0x0C067D36u, 1);  /* 0C067D34 mov.l @(disp,pc),Rn */
	r5 = 0x7u;  /* 0C067D36 mov #imm,Rn */
	r6 = 0x6u;  /* 0C067D38 mov #imm,Rn */
	IF(0x0C067D3Au); { u32 t_ = r9; PR = 0x0C067D3Eu; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C067D3Eu); }  /* 0C067D3A jsr @Rn */
L_0C067D3E: BLKS(0x0C067D3Eu);
	{ r7 = r12; /* slot mov Rm,Rn */ UPD(0x0C067C96u, 3); goto L_0C067C96; }  /* 0C067D3E bra */
L_0C067D50: BLKS(0x0C067D50u);
	r8 = 0xC05D944u; UPD(0x0C067D52u, 1);  /* 0C067D50 mov.l @(disp,pc),Rn */
	IF(0x0C067D52u); { u32 t_ = r8; PR = 0x0C067D56u; r12 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C05D944, 0x0C05D944u, 0x0C067D56u); }  /* 0C067D52 jsr @Rn */
L_0C067D56: BLKS(0x0C067D56u);
	{ IF(0x0C067D58u); ; /* slot nop */ UPD(0x0C067C9Au, 3); goto L_0C067C9A; }  /* 0C067D56 bra */
}

void blk_f_0C067D90(sh3_t *c)
{
	LOCALS;
L_0C067D90: BLKS(0x0C067D90u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C067D92u, 1);  /* 0C067D90 mov.l Rm,@-Rn */
	r6 = 0x9u;  /* 0C067D92 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C067D96u, 2);  /* 0C067D94 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C067D98u, 1);  /* 0C067D96 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C067D9Au, 1);  /* 0C067D98 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C067D9Cu, 1);  /* 0C067D9A mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C067D9Eu, 1);  /* 0C067D9C mov.l Rm,@-Rn */
	r12 = 0x0u;  /* 0C067D9E mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C067DA2u, 2);  /* 0C067DA0 mov.l Rm,@-Rn */
	IF(0x0C067DA2u); r15 -= 4; W32(r15, PR); UPD(0x0C067DA4u, 1);  /* 0C067DA2 sts.l pr,@-Rn */
	r8 = 0xC0C23D0u; UPD(0x0C067DA6u, 1);  /* 0C067DA4 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFE8u;  /* 0C067DA6 add #imm,Rn */
	r14 = r15;  /* 0C067DA8 mov Rm,Rn */
	r5 = 0xC0C4405u; UPD(0x0C067DACu, 3);  /* 0C067DAA mov.l @(disp,pc),Rn */
	IF(0x0C067DACu); { u32 t_ = r8; PR = 0x0C067DB0u; r4 = r14; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C23D0, 0x0C0C23D0u, 0x0C067DB0u); }  /* 0C067DAC jsr @Rn */
L_0C067DB0: BLKS(0x0C067DB0u);
	r8 = 0xC05D7CCu; UPD(0x0C067DB2u, 1);  /* 0C067DB0 mov.l @(disp,pc),Rn */
	r13 = r14;  /* 0C067DB2 mov Rm,Rn */
	r13 += 0xCu;  /* 0C067DB4 add #imm,Rn */
	IF(0x0C067DB6u); { u32 t_ = r8; PR = 0x0C067DBAu; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C05D7CC, 0x0C05D7CCu, 0x0C067DBAu); }  /* 0C067DB6 jsr @Rn */
L_0C067DBA: BLKS(0x0C067DBAu);
	IF(0x0C067DBAu); ;  /* 0C067DBA nop */
	UPD(0x0C067DBCu, 1);
L_0C067DBC: BLKS(0x0C067DBCu);
	r9 = 0xC060BC0u; UPD(0x0C067DBEu, 1);  /* 0C067DBC mov.l @(disp,pc),Rn */
	r10 = 0xC061200u; UPD(0x0C067DC0u, 1);  /* 0C067DBE mov.l @(disp,pc),Rn */
	IF(0x0C067DC0u); { u32 t_ = r9; PR = 0x0C067DC4u; IF(0x0C067DC2u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C060BC0, 0x0C060BC0u, 0x0C067DC4u); }  /* 0C067DC0 jsr @Rn */
L_0C067DC4: BLKS(0x0C067DC4u);
	r8 = 0xC062060u; UPD(0x0C067DC6u, 1);  /* 0C067DC4 mov.l @(disp,pc),Rn */
	IF(0x0C067DC6u); { u32 t_ = r10; PR = 0x0C067DCAu; IF(0x0C067DC8u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C061200, 0x0C061200u, 0x0C067DCAu); }  /* 0C067DC6 jsr @Rn */
L_0C067DCA: BLKS(0x0C067DCAu);
	r11 = 0xC062000u; UPD(0x0C067DCCu, 1);  /* 0C067DCA mov.l @(disp,pc),Rn */
	r10 = 0xC0626E0u; UPD(0x0C067DCEu, 1);  /* 0C067DCC mov.l @(disp,pc),Rn */
	IF(0x0C067DCEu); { u32 t_ = r8; PR = 0x0C067DD2u; r4 = 0x40u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062060, 0x0C062060u, 0x0C067DD2u); }  /* 0C067DCE jsr @Rn */
L_0C067DD2: BLKS(0x0C067DD2u);
	IF(0x0C067DD2u); { u32 t_ = r11; PR = 0x0C067DD6u; IF(0x0C067DD4u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C062000, 0x0C062000u, 0x0C067DD6u); }  /* 0C067DD2 jsr @Rn */
L_0C067DD6: BLKS(0x0C067DD6u);
	r9 = 0x80808000u; UPD(0x0C067DD8u, 1);  /* 0C067DD6 mov.l @(disp,pc),Rn */
	r5 = 0x1Eu;  /* 0C067DD8 mov #imm,Rn */
	r4 = 0xC172A9Cu; UPD(0x0C067DDCu, 2);  /* 0C067DDA mov.l @(disp,pc),Rn */
	r6 = 0x4u;  /* 0C067DDC mov #imm,Rn */
	IF(0x0C067DDEu); { u32 t_ = r10; PR = 0x0C067DE2u; r7 = r9; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C067DE2u); }  /* 0C067DDE jsr @Rn */
L_0C067DE2: BLKS(0x0C067DE2u);
	r4 = 0xC1737B8u; UPD(0x0C067DE4u, 1);  /* 0C067DE2 mov.l @(disp,pc),Rn */
	r5 = 0x18u;  /* 0C067DE4 mov #imm,Rn */
	r6 = 0x6u;  /* 0C067DE6 mov #imm,Rn */
	IF(0x0C067DE8u); { u32 t_ = r10; PR = 0x0C067DECu; r7 = r9; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C067DECu); }  /* 0C067DE8 jsr @Rn */
L_0C067DEC: BLKS(0x0C067DECu);
	r4 = 0xC1737C0u; UPD(0x0C067DEEu, 1);  /* 0C067DEC mov.l @(disp,pc),Rn */
	r5 = 0x16u;  /* 0C067DEE mov #imm,Rn */
	r6 = 0x6u;  /* 0C067DF0 mov #imm,Rn */
	IF(0x0C067DF2u); { u32 t_ = r10; PR = 0x0C067DF6u; r7 = r9; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C067DF6u); }  /* 0C067DF2 jsr @Rn */
L_0C067DF6: BLKS(0x0C067DF6u);
	r4 = 0xC1737C8u; UPD(0x0C067DF8u, 1);  /* 0C067DF6 mov.l @(disp,pc),Rn */
	r5 = 0x14u;  /* 0C067DF8 mov #imm,Rn */
	r6 = 0x6u;  /* 0C067DFA mov #imm,Rn */
	IF(0x0C067DFCu); { u32 t_ = r10; PR = 0x0C067E00u; r7 = r9; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C067E00u); }  /* 0C067DFC jsr @Rn */
L_0C067E00: BLKS(0x0C067E00u);
	r4 = 0xC1737CCu; UPD(0x0C067E02u, 1);  /* 0C067E00 mov.l @(disp,pc),Rn */
	r5 = 0x12u;  /* 0C067E02 mov #imm,Rn */
	r6 = 0x6u;  /* 0C067E04 mov #imm,Rn */
	IF(0x0C067E06u); { u32 t_ = r10; PR = 0x0C067E0Au; r7 = r9; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C067E0Au); }  /* 0C067E06 jsr @Rn */
L_0C067E0A: BLKS(0x0C067E0Au);
	r4 = 0xC1737D4u; UPD(0x0C067E0Cu, 1);  /* 0C067E0A mov.l @(disp,pc),Rn */
	r5 = 0x10u;  /* 0C067E0C mov #imm,Rn */
	r6 = 0x6u;  /* 0C067E0E mov #imm,Rn */
	IF(0x0C067E10u); { u32 t_ = r10; PR = 0x0C067E14u; r7 = r9; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C067E14u); }  /* 0C067E10 jsr @Rn */
L_0C067E14: BLKS(0x0C067E14u);
	r4 = 0xC1737DCu; UPD(0x0C067E16u, 1);  /* 0C067E14 mov.l @(disp,pc),Rn */
	r5 = 0xEu;  /* 0C067E16 mov #imm,Rn */
	r6 = 0x6u;  /* 0C067E18 mov #imm,Rn */
	IF(0x0C067E1Au); { u32 t_ = r10; PR = 0x0C067E1Eu; r7 = r9; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C067E1Eu); }  /* 0C067E1A jsr @Rn */
L_0C067E1E: BLKS(0x0C067E1Eu);
	r4 = 0xC1737E4u; UPD(0x0C067E20u, 1);  /* 0C067E1E mov.l @(disp,pc),Rn */
	r5 = 0xAu;  /* 0C067E20 mov #imm,Rn */
	r6 = 0x6u;  /* 0C067E22 mov #imm,Rn */
	IF(0x0C067E24u); { u32 t_ = r10; PR = 0x0C067E28u; r7 = r9; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C067E28u); }  /* 0C067E24 jsr @Rn */
L_0C067E28: BLKS(0x0C067E28u);
	r0 = 0xC297838u; UPD(0x0C067E2Au, 1);  /* 0C067E28 mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s16)R16(r0); UPD(0x0C067E2Cu, 1);  /* 0C067E2A mov.w @Rm,Rn */
	r0 = r2;  /* 0C067E2C mov Rm,Rn */
	r0 &= 0x1u;  /* 0C067E2E and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C067E30 tst Rm,Rn */
	{ u32 c_ = T; r0 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C067E3Eu, 6); goto L_0C067E3E; } goto L_0C067E36; }  /* 0C067E32 bt/s */
L_0C067E36: BLKS(0x0C067E36u);
	r3 = 0xC1737A8u; UPD(0x0C067E38u, 2);  /* 0C067E36 mov.l @(disp,pc),Rn */
	r0 = r3;  /* 0C067E38 mov Rm,Rn */
	IF(0x0C067E3Au); r12 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C067E3Cu, 2);  /* 0C067E3A mov.b @(r0,Rm),Rn */
	r0 = r2;  /* 0C067E3C mov Rm,Rn */
	UPD(0x0C067E3Eu, 1);
L_0C067E3E: BLKS(0x0C067E3Eu);
	r0 &= 0x2u;  /* 0C067E3E and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C067E40 tst Rm,Rn */
	{ u32 c_ = T; r4 = 0x5u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C067E4Eu, 5); goto L_0C067E4E; } goto L_0C067E46; }  /* 0C067E42 bt/s */
L_0C067E46: BLKS(0x0C067E46u);
	r2 = 0xC1737B0u; UPD(0x0C067E48u, 2);  /* 0C067E46 mov.l @(disp,pc),Rn */
	r0 = r2;  /* 0C067E48 mov Rm,Rn */
	IF(0x0C067E4Au); r12 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C067E4Cu, 2);  /* 0C067E4A mov.b @(r0,Rm),Rn */
	r4 = 0x5u;  /* 0C067E4C mov #imm,Rn */
	UPD(0x0C067E4Eu, 1);
L_0C067E4E: BLKS(0x0C067E4Eu);
	T = r12 > r4;  /* 0C067E4E cmp/hi Rm,Rn */
	{ u32 c_ = T; r1 = r12; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C067F20u, 4); goto L_0C067F20; } goto L_0C067E54; }  /* 0C067E50 bt/s */
L_0C067E54: BLKS(0x0C067E54u);
	r0 = 0xC067EB0u;  /* 0C067E54 mova @(disp,pc),r0 */
	r1 += r1;  /* 0C067E56 add Rm,Rn */
	IF(0x0C067E58u); r5 = (u32)(s32)(s16)R16(r0 + r1); UPD(0x0C067E5Au, 4);  /* 0C067E58 mov.w @(r0,Rm),Rn */
	IF(0x0C067E5Au); { u32 tv_ = (r5 + 0x0C067E5Eu); u32 t_ = PHYS(tv_); IF(0x0C067E5Cu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C067E67u: goto L_0C067E67; case 0x0C068060u: goto L_0C068060; default: JUMPD(tv_); } }  /* 0C067E5A braf Rn */
L_0C067E67: BLKS(0x0C067E67u);
	IF(0x0C067E67u); r5 = (u32)(s32)(s8)R8(r0 + r0); UPD(0x0C067E69u, 1);  /* 0C067E67 mov.b @(r0,Rm),Rn */
	IF(0x0C067E69u); MACL = r5 * r13;  /* 0C067E69 mul.l Rm,Rn */
	T = (R8(c->gbr + r0) & 0xCu) == 0;  /* 0C067E6B tst.b #imm,@(r0,gbr) */
	IF(0x0C067E6Du); rt_illegal(c, 0x0C067E6Du);  /* 0C067E6D illegal 060B */
L_0C067F20: BLKS(0x0C067F20u);
	r11 = 0xC067BE0u; UPD(0x0C067F22u, 1);  /* 0C067F20 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C067F22 mov Rm,Rn */
	r5 = R32(r14 + 0x14u); UPD(0x0C067F26u, 2);  /* 0C067F24 mov.l @(disp,Rm),Rn */
	IF(0x0C067F26u); { u32 t_ = r11; PR = 0x0C067F2Au; r6 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C067BE0, 0x0C067BE0u, 0x0C067F2Au); }  /* 0C067F26 jsr @Rn */
L_0C067F2A: BLKS(0x0C067F2Au);
	r11 = 0xC0626E0u; UPD(0x0C067F2Cu, 1);  /* 0C067F2A mov.l @(disp,pc),Rn */
	r6 = 0x4u;  /* 0C067F2C mov #imm,Rn */
	W32(r14 + 0x14u, r0); UPD(0x0C067F30u, 2);  /* 0C067F2E mov.l Rm,@(disp,Rn) */
	r4 = 0xC1737A0u; UPD(0x0C067F32u, 1);  /* 0C067F30 mov.l @(disp,pc),Rn */
	r0 = r4;  /* 0C067F32 mov Rm,Rn */
	r7 = 0x40C04000u; UPD(0x0C067F36u, 2);  /* 0C067F34 mov.l @(disp,pc),Rn */
	r4 = 0xC172BC8u; UPD(0x0C067F38u, 1);  /* 0C067F36 mov.l @(disp,pc),Rn */
	IF(0x0C067F38u); { u32 t_ = r11; PR = 0x0C067F3Cu; IF(0x0C067F3Au); r5 = (u32)(s32)(s8)R8(r0 + r12); /* slot mov.b @(r0,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C067F3Cu); }  /* 0C067F38 jsr @Rn */
L_0C067F3C: BLKS(0x0C067F3Cu);
	r0 = 0x12u;  /* 0C067F3C mov #imm,Rn */
	IF(0x0C067F3Eu); r9 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C067F40u, 2);  /* 0C067F3E mov.b @(r0,Rm),Rn */
	r5 = 0x18u;  /* 0C067F40 mov #imm,Rn */
	r4 = r9 & 0xFF;  /* 0C067F42 extu.b Rm,Rn */
	r9 = 0xC062490u; UPD(0x0C067F46u, 3);  /* 0C067F44 mov.l @(disp,pc),Rn */
	IF(0x0C067F46u); { u32 t_ = r9; PR = 0x0C067F4Au; r6 = 0x10u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062490, 0x0C062490u, 0x0C067F4Au); }  /* 0C067F46 jsr @Rn */
L_0C067F4A: BLKS(0x0C067F4Au);
	r0 = 0x11u;  /* 0C067F4A mov #imm,Rn */
	IF(0x0C067F4Cu); r5 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C067F4Eu, 2);  /* 0C067F4C mov.b @(r0,Rm),Rn */
	r6 = 0x10u;  /* 0C067F4E mov #imm,Rn */
	r4 = r5 & 0xFF;  /* 0C067F50 extu.b Rm,Rn */
	IF(0x0C067F52u); { u32 t_ = r9; PR = 0x0C067F56u; r5 = 0x16u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C062490, 0x0C062490u, 0x0C067F56u); }  /* 0C067F52 jsr @Rn */
L_0C067F56: BLKS(0x0C067F56u);
	r0 = 0x10u;  /* 0C067F56 mov #imm,Rn */
	IF(0x0C067F58u); r1 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C067F5Au, 2);  /* 0C067F58 mov.b @(r0,Rm),Rn */
	r5 = 0x14u;  /* 0C067F5A mov #imm,Rn */
	r4 = r1 & 0xFF;  /* 0C067F5C extu.b Rm,Rn */
	IF(0x0C067F5Eu); { u32 t_ = r9; PR = 0x0C067F62u; r6 = 0x10u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C062490, 0x0C062490u, 0x0C067F62u); }  /* 0C067F5E jsr @Rn */
L_0C067F62: BLKS(0x0C067F62u);
	r0 = 0xEu;  /* 0C067F62 mov #imm,Rn */
	IF(0x0C067F64u); r8 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C067F66u, 2);  /* 0C067F64 mov.b @(r0,Rm),Rn */
	r5 = 0x12u;  /* 0C067F66 mov #imm,Rn */
	r4 = r8 & 0xFF;  /* 0C067F68 extu.b Rm,Rn */
	IF(0x0C067F6Au); { u32 t_ = r9; PR = 0x0C067F6Eu; r6 = 0x10u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C062490, 0x0C062490u, 0x0C067F6Eu); }  /* 0C067F6A jsr @Rn */
L_0C067F6E: BLKS(0x0C067F6Eu);
	r0 = 0xDu;  /* 0C067F6E mov #imm,Rn */
	IF(0x0C067F70u); r7 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C067F72u, 2);  /* 0C067F70 mov.b @(r0,Rm),Rn */
	r5 = 0x10u;  /* 0C067F72 mov #imm,Rn */
	r4 = r7 & 0xFF;  /* 0C067F74 extu.b Rm,Rn */
	IF(0x0C067F76u); { u32 t_ = r9; PR = 0x0C067F7Au; r6 = 0x10u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C062490, 0x0C062490u, 0x0C067F7Au); }  /* 0C067F76 jsr @Rn */
L_0C067F7A: BLKS(0x0C067F7Au);
	r10 = (u32)(s32)(s8)R8(r13); UPD(0x0C067F7Cu, 1);  /* 0C067F7A mov.b @Rm,Rn */
	r5 = 0xEu;  /* 0C067F7C mov #imm,Rn */
	r4 = r10 & 0xFF;  /* 0C067F7E extu.b Rm,Rn */
	r10 = 0x80808000u; UPD(0x0C067F82u, 3);  /* 0C067F80 mov.l @(disp,pc),Rn */
	r8 = 0xC2B080Eu; UPD(0x0C067F84u, 1);  /* 0C067F82 mov.l @(disp,pc),Rn */
	IF(0x0C067F84u); { u32 t_ = r9; PR = 0x0C067F88u; r6 = 0x10u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062490, 0x0C062490u, 0x0C067F88u); }  /* 0C067F84 jsr @Rn */
L_0C067F88: BLKS(0x0C067F88u);
	r7 = r10;  /* 0C067F88 mov Rm,Rn */
	r4 = 0xC172C64u; UPD(0x0C067F8Cu, 2);  /* 0C067F8A mov.l @(disp,pc),Rn */
	r5 = 0x1Cu;  /* 0C067F8C mov #imm,Rn */
	IF(0x0C067F8Eu); { u32 t_ = r11; PR = 0x0C067F92u; r6 = 0xBu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C067F92u); }  /* 0C067F8E jsr @Rn */
L_0C067F92: BLKS(0x0C067F92u);
	r6 = (u32)(s32)(s8)R8(r8); UPD(0x0C067F94u, 1);  /* 0C067F92 mov.b @Rm,Rn */
	r5 = 0x1Cu;  /* 0C067F94 mov #imm,Rn */
	r4 = r6 & 0xFF;  /* 0C067F96 extu.b Rm,Rn */
	r8 += 0xFFFFFFFAu;  /* 0C067F98 add #imm,Rn */
	r6 = 0xCu;  /* 0C067F9A mov #imm,Rn */
	IF(0x0C067F9Cu); { u32 t_ = r9; PR = 0x0C067FA0u; r8 += 0x5u; /* slot add #imm,Rn */ UPD(t_, 6); CALLP(t_, blk_f_0C062490, 0x0C062490u, 0x0C067FA0u); }  /* 0C067F9C jsr @Rn */
L_0C067FA0: BLKS(0x0C067FA0u);
	r0 = (u32)(s32)(s8)R8(r8); UPD(0x0C067FA2u, 1);  /* 0C067FA0 mov.b @Rm,Rn */
	r5 = 0x1Cu;  /* 0C067FA2 mov #imm,Rn */
	r4 = r0 & 0xFF;  /* 0C067FA4 extu.b Rm,Rn */
	r6 = 0xFu;  /* 0C067FA6 mov #imm,Rn */
	IF(0x0C067FA8u); { u32 t_ = r9; PR = 0x0C067FACu; r8 += 0xFFFFFFFFu; /* slot add #imm,Rn */ UPD(t_, 5); CALLP(t_, blk_f_0C062490, 0x0C062490u, 0x0C067FACu); }  /* 0C067FA8 jsr @Rn */
L_0C067FAC: BLKS(0x0C067FACu);
	r3 = (u32)(s32)(s8)R8(r8); UPD(0x0C067FAEu, 1);  /* 0C067FAC mov.b @Rm,Rn */
	r5 = 0x1Cu;  /* 0C067FAE mov #imm,Rn */
	r4 = r3 & 0xFF;  /* 0C067FB0 extu.b Rm,Rn */
	r6 = 0x12u;  /* 0C067FB2 mov #imm,Rn */
	IF(0x0C067FB4u); { u32 t_ = r9; PR = 0x0C067FB8u; r8 += 0xFFFFFFFEu; /* slot add #imm,Rn */ UPD(t_, 5); CALLP(t_, blk_f_0C062490, 0x0C062490u, 0x0C067FB8u); }  /* 0C067FB4 jsr @Rn */
L_0C067FB8: BLKS(0x0C067FB8u);
	r2 = (u32)(s32)(s8)R8(r8); UPD(0x0C067FBAu, 1);  /* 0C067FB8 mov.b @Rm,Rn */
	r5 = 0x1Cu;  /* 0C067FBA mov #imm,Rn */
	r4 = r2 & 0xFF;  /* 0C067FBC extu.b Rm,Rn */
	r6 = 0x15u;  /* 0C067FBE mov #imm,Rn */
	IF(0x0C067FC0u); { u32 t_ = r9; PR = 0x0C067FC4u; r8 += 0xFFFFFFFFu; /* slot add #imm,Rn */ UPD(t_, 5); CALLP(t_, blk_f_0C062490, 0x0C062490u, 0x0C067FC4u); }  /* 0C067FC0 jsr @Rn */
L_0C067FC4: BLKS(0x0C067FC4u);
	r5 = (u32)(s32)(s8)R8(r8); UPD(0x0C067FC6u, 1);  /* 0C067FC4 mov.b @Rm,Rn */
	r6 = 0x18u;  /* 0C067FC6 mov #imm,Rn */
	r4 = r5 & 0xFF;  /* 0C067FC8 extu.b Rm,Rn */
	r8 += 0xFFFFFFFFu;  /* 0C067FCA add #imm,Rn */
	IF(0x0C067FCCu); { u32 t_ = r9; PR = 0x0C067FD0u; r5 = 0x1Cu; /* slot mov #imm,Rn */ UPD(t_, 5); CALLP(t_, blk_f_0C062490, 0x0C062490u, 0x0C067FD0u); }  /* 0C067FCC jsr @Rn */
L_0C067FD0: BLKS(0x0C067FD0u);
	r1 = (u32)(s32)(s8)R8(r8); UPD(0x0C067FD2u, 1);  /* 0C067FD0 mov.b @Rm,Rn */
	r5 = 0x1Cu;  /* 0C067FD2 mov #imm,Rn */
	r4 = r1 & 0xFF;  /* 0C067FD4 extu.b Rm,Rn */
	IF(0x0C067FD6u); { u32 t_ = r9; PR = 0x0C067FDAu; r6 = 0x1Bu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C062490, 0x0C062490u, 0x0C067FDAu); }  /* 0C067FD6 jsr @Rn */
L_0C067FDA: BLKS(0x0C067FDAu);
	r4 = 0xC172B0Cu; UPD(0x0C067FDCu, 1);  /* 0C067FDA mov.l @(disp,pc),Rn */
	r5 = 0x2u;  /* 0C067FDC mov #imm,Rn */
	r6 = 0x3u;  /* 0C067FDE mov #imm,Rn */
	IF(0x0C067FE0u); { u32 t_ = r11; PR = 0x0C067FE4u; r7 = r10; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C067FE4u); }  /* 0C067FE0 jsr @Rn */
L_0C067FE4: BLKS(0x0C067FE4u);
	r6 = 0x5u;  /* 0C067FE4 mov #imm,Rn */
	r7 = r10;  /* 0C067FE6 mov Rm,Rn */
	r4 = 0xC172B28u; UPD(0x0C067FEAu, 3);  /* 0C067FE8 mov.l @(disp,pc),Rn */
	r8 = 0xC061010u; UPD(0x0C067FECu, 1);  /* 0C067FEA mov.l @(disp,pc),Rn */
	IF(0x0C067FECu); { u32 t_ = r11; PR = 0x0C067FF0u; r5 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C067FF0u); }  /* 0C067FEC jsr @Rn */
L_0C067FF0: BLKS(0x0C067FF0u);
	r11 = 0xC062250u; UPD(0x0C067FF2u, 1);  /* 0C067FF0 mov.l @(disp,pc),Rn */
	r4 = 0x7u;  /* 0C067FF2 mov #imm,Rn */
	IF(0x0C067FF4u); { u32 t_ = r8; PR = 0x0C067FF8u; r5 = 0x7u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C061010, 0x0C061010u, 0x0C067FF8u); }  /* 0C067FF4 jsr @Rn */
L_0C067FF8: BLKS(0x0C067FF8u);
	IF(0x0C067FF8u); { u32 t_ = r11; PR = 0x0C067FFCu; IF(0x0C067FFAu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C062250, 0x0C062250u, 0x0C067FFCu); }  /* 0C067FF8 jsr @Rn */
L_0C067FFC: BLKS(0x0C067FFCu);
	r7 = 0xC2B03A6u; UPD(0x0C067FFEu, 1);  /* 0C067FFC mov.l @(disp,pc),Rn */
	r0 = 0x100u; UPD(0x0C068000u, 1);  /* 0C067FFE mov.w @(disp,pc),Rn */
	r6 = (u32)(s32)(s16)R16(r7); UPD(0x0C068002u, 1);  /* 0C068000 mov.w @Rm,Rn */
	T = (r6 & r0) == 0;  /* 0C068002 tst Rm,Rn */
	if (!T) { UPD(0x0C06800Au, 4); goto L_0C06800A; }  /* 0C068004 bf */
L_0C068006: BLKS(0x0C068006u);
	{ IF(0x0C068008u); ; /* slot nop */ UPD(0x0C067DBCu, 3); goto L_0C067DBC; }  /* 0C068006 bra */
L_0C06800A: BLKS(0x0C06800Au);
	r14 += 0x18u;  /* 0C06800A add #imm,Rn */
	r15 = r14;  /* 0C06800C mov Rm,Rn */
	IF(0x0C06800Eu); PR = R32(r15); r15 += 4; UPD(0x0C068010u, 3);  /* 0C06800E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C068012u, 1);  /* 0C068010 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C068014u, 1);  /* 0C068012 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C068016u, 1);  /* 0C068014 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C068018u, 1);  /* 0C068016 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06801Au, 1);  /* 0C068018 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06801Cu, 1);  /* 0C06801A mov.l @Rm+,Rn */
	IF(0x0C06801Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06801C rts */
L_0C068060: BLKS(0x0C068060u);
	r3 = 0xC297838u; UPD(0x0C068062u, 1);  /* 0C068060 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s16)R16(r3); UPD(0x0C068064u, 1);  /* 0C068062 mov.w @Rm,Rn */
	r0 &= 0x8u;  /* 0C068064 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C068066 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x11u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C068094u, 5); goto L_0C068094; } goto L_0C06806C; }  /* 0C068068 bt/s */
L_0C06806C: BLKS(0x0C06806Cu);
	IF(0x0C06806Cu); r4 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C06806Eu, 2);  /* 0C06806C mov.b @(r0,Rm),Rn */
	r1 = 0xFu;  /* 0C06806E mov #imm,Rn */
	r2 = r4 & 0xFF;  /* 0C068070 extu.b Rm,Rn */
	r1 &= r2;  /* 0C068072 and Rm,Rn */
	r3 = r2;  /* 0C068074 mov Rm,Rn */
	r1 += 0x1u;  /* 0C068076 add #imm,Rn */
	IF(0x0C068078u); r3 >>= 2;  /* 0C068078 shlr2 Rn */
	r0 = r1;  /* 0C06807A mov Rm,Rn */
	T = r0 == 0xAu;  /* 0C06807C cmp/eq #imm,r0 */
	{ u32 c_ = T; IF(0x0C068080u); r3 >>= 2; /* slot shlr2 Rn */ if (c_) { UPD(0x0C068120u, 11); goto L_0C068120; } UPD(0x0C068082u, 1); goto L_0C068082; }  /* 0C06807E bt/s */
L_0C068082: BLKS(0x0C068082u);
	r5 = 0x4u;  /* 0C068082 mov #imm,Rn */
	IF(0x0C068084u); ARG0(0x435Du); { s32 s_ = (s32)r5; if (s_ >= 0) r3 <<= (s_ & 31); else if ((s_ & 31) == 0) r3 = 0; else r3 >>= ((~s_ & 31) + 1); }  /* 0C068084 shld Rm,Rn */
	r3 |= r1;  /* 0C068086 or Rm,Rn */
	r0 = r3 & 0xFF;  /* 0C068088 extu.b Rm,Rn */
	r3 = 0x11u;  /* 0C06808A mov #imm,Rn */
	r3 += r14;  /* 0C06808C add Rm,Rn */
	T = r0 == 0x13u;  /* 0C06808E cmp/eq #imm,r0 */
	{ u32 c_ = T; W8(r3, r0); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C068110u, 10); goto L_0C068110; } UPD(0x0C068094u, 1); goto L_0C068094; }  /* 0C068090 bt/s */
L_0C068094: BLKS(0x0C068094u);
	r7 = 0xC297838u; UPD(0x0C068096u, 1);  /* 0C068094 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s16)R16(r7); UPD(0x0C068098u, 1);  /* 0C068096 mov.w @Rm,Rn */
	r0 &= 0x4u;  /* 0C068098 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C06809A tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x11u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0680CCu, 5); goto L_0C0680CC; } goto L_0C0680A0; }  /* 0C06809C bt/s */
L_0C0680A0: BLKS(0x0C0680A0u);
	r0 = 0x11u;  /* 0C0680A0 mov #imm,Rn */
	IF(0x0C0680A2u); r1 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C0680A4u, 3);  /* 0C0680A2 mov.b @(r0,Rm),Rn */
	r0 = r1 & 0xFF;  /* 0C0680A4 extu.b Rm,Rn */
	r1 = r0;  /* 0C0680A6 mov Rm,Rn */
	r0 &= 0xFu;  /* 0C0680A8 and #imm,r0 */
	r0 += 0xFFFFFFFFu;  /* 0C0680AA add #imm,Rn */
	IF(0x0C0680ACu); r1 >>= 2;  /* 0C0680AC shlr2 Rn */
	IF(0x0C0680AEu); r1 >>= 2;  /* 0C0680AE shlr2 Rn */
	T = r0 == 0xFFFFFFFFu;  /* 0C0680B0 cmp/eq #imm,r0 */
	{ u32 c_ = T; r2 = r0 & 0xFF; /* slot extu.b Rm,Rn */ if (c_) { UPD(0x0C0680F0u, 10); goto L_0C0680F0; } UPD(0x0C0680B6u, 1); goto L_0C0680B6; }  /* 0C0680B2 bt/s */
L_0C0680B6: BLKS(0x0C0680B6u);
	r0 = 0x4u;  /* 0C0680B6 mov #imm,Rn */
	IF(0x0C0680B8u); ARG0(0x410Du); { s32 s_ = (s32)r0; if (s_ >= 0) r1 <<= (s_ & 31); else if ((s_ & 31) == 0) r1 = 0; else r1 >>= ((~s_ & 31) + 1); }  /* 0C0680B8 shld Rm,Rn */
	r1 |= r2;  /* 0C0680BA or Rm,Rn */
	r11 = r1 & 0xFF;  /* 0C0680BC extu.b Rm,Rn */
	r0 = 0x11u;  /* 0C0680BE mov #imm,Rn */
	T = (r11 & r11) == 0;  /* 0C0680C0 tst Rm,Rn */
	{ u32 c_ = !T; IF(0x0C0680C4u); W8(r0 + r14, r11); /* slot mov.b Rm,@(r0,Rn) */ if (c_) { UPD(0x0C0680CAu, 9); goto L_0C0680CA; } UPD(0x0C0680C6u, 1); goto L_0C0680C6; }  /* 0C0680C2 bf/s */
L_0C0680C6: BLKS(0x0C0680C6u);
	r8 = 0x12u;  /* 0C0680C6 mov #imm,Rn */
	IF(0x0C0680C8u); W8(r0 + r14, r8); UPD(0x0C0680CAu, 2);  /* 0C0680C8 mov.b Rm,@(r0,Rn) */
L_0C0680CA: BLKS(0x0C0680CAu);
	r0 = 0x11u;  /* 0C0680CA mov #imm,Rn */
	UPD(0x0C0680CCu, 1);
L_0C0680CC: BLKS(0x0C0680CCu);
	IF(0x0C0680CCu); r3 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C0680CEu, 1);  /* 0C0680CC mov.b @(r0,Rm),Rn */
	r5 = 0x10u;  /* 0C0680CE mov #imm,Rn */
	r2 = 0xC1737ECu; UPD(0x0C0680D2u, 2);  /* 0C0680D0 mov.l @(disp,pc),Rn */
	r0 = r3 & 0xFF;  /* 0C0680D2 extu.b Rm,Rn */
	r5 += r14;  /* 0C0680D4 add Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r5); UPD(0x0C0680D8u, 3);  /* 0C0680D6 mov.b @Rm,Rn */
	IF(0x0C0680D8u); r3 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C0680DAu, 1);  /* 0C0680D8 mov.b @(r0,Rm),Rn */
	r9 = r4 & 0xFF;  /* 0C0680DA extu.b Rm,Rn */
	r10 = r3 & 0xFF;  /* 0C0680DC extu.b Rm,Rn */
	T = r9 > r10;  /* 0C0680DE cmp/hi Rm,Rn */
	{ u32 c_ = !T; r0 = 0x10u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0680E6u, 6); goto L_0C0680E6; } goto L_0C0680E4; }  /* 0C0680E0 bf/s */
L_0C0680E4: BLKS(0x0C0680E4u);
	IF(0x0C0680E4u); W8(r0 + r14, r3); UPD(0x0C0680E6u, 2);  /* 0C0680E4 mov.b Rm,@(r0,Rn) */
L_0C0680E6: BLKS(0x0C0680E6u);
	{ IF(0x0C0680E8u); ; /* slot nop */ UPD(0x0C067F20u, 3); goto L_0C067F20; }  /* 0C0680E6 bra */
L_0C0680F0: BLKS(0x0C0680F0u);
	r1 += 0xFFFFFFFFu;  /* 0C0680F0 add #imm,Rn */
	r1 = r1 & 0xFF;  /* 0C0680F2 extu.b Rm,Rn */
	T = r1 == r2;  /* 0C0680F4 cmp/eq Rm,Rn */
	if (T) { UPD(0x0C068100u, 6); goto L_0C068100; }  /* 0C0680F6 bt */
L_0C0680F8: BLKS(0x0C0680F8u);
	{ r2 = 0x9u; /* slot mov #imm,Rn */ UPD(0x0C0680B6u, 3); goto L_0C0680B6; }  /* 0C0680F8 bra */
L_0C068100: BLKS(0x0C068100u);
	{ r1 = 0x9u; /* slot mov #imm,Rn */ UPD(0x0C0680F8u, 3); goto L_0C0680F8; }  /* 0C068100 bra */
L_0C068110: BLKS(0x0C068110u);
	r6 = 0x1u;  /* 0C068110 mov #imm,Rn */
	{ W8(r3, r6); /* slot mov.b Rm,@Rn */ UPD(0x0C068094u, 4); goto L_0C068094; }  /* 0C068112 bra */
L_0C068120: BLKS(0x0C068120u);
	r3 += 0x1u;  /* 0C068120 add #imm,Rn */
	r0 = r3;  /* 0C068122 mov Rm,Rn */
	T = r0 == 0xAu;  /* 0C068124 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C068130u, 6); goto L_0C068130; }  /* 0C068126 bt */
L_0C068128: BLKS(0x0C068128u);
	{ r1 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C068082u, 3); goto L_0C068082; }  /* 0C068128 bra */
L_0C068130: BLKS(0x0C068130u);
	{ r3 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C068128u, 3); goto L_0C068128; }  /* 0C068130 bra */
}

void blk_f_0C0687B0(sh3_t *c)
{
	LOCALS;
L_0C0687B0: BLKS(0x0C0687B0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0687B2u, 1);  /* 0C0687B0 mov.l Rm,@-Rn */
	r0 = 0xC06C140u; UPD(0x0C0687B4u, 1);  /* 0C0687B2 mov.l @(disp,pc),Rn */
	IF(0x0C0687B4u); r15 -= 4; W32(r15, PR); UPD(0x0C0687B6u, 1);  /* 0C0687B4 sts.l pr,@-Rn */
	IF(0x0C0687B6u); { u32 t_ = r0; PR = 0x0C0687BAu; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C06C140, 0x0C06C140u, 0x0C0687BAu); }  /* 0C0687B6 jsr @Rn */
L_0C0687BA: BLKS(0x0C0687BAu);
	r0 = 0xC067580u; UPD(0x0C0687BCu, 1);  /* 0C0687BA mov.l @(disp,pc),Rn */
	IF(0x0C0687BCu); { u32 t_ = r0; PR = 0x0C0687C0u; IF(0x0C0687BEu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C067580, 0x0C067580u, 0x0C0687C0u); }  /* 0C0687BC jsr @Rn */
L_0C0687C0: BLKS(0x0C0687C0u);
	r4 = 0xC286150u; UPD(0x0C0687C2u, 1);  /* 0C0687C0 mov.l @(disp,pc),Rn */
	r5 = 0x20u;  /* 0C0687C2 mov #imm,Rn */
	r6 = 0x194u; UPD(0x0C0687C6u, 2);  /* 0C0687C4 mov.w @(disp,pc),Rn */
	r0 = 0xC05DAA8u; UPD(0x0C0687C8u, 1);  /* 0C0687C6 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C0687C8 mov Rm,Rn */
	IF(0x0C0687CAu); PR = R32(r15); r15 += 4; UPD(0x0C0687CCu, 2);  /* 0C0687CA lds.l @Rn+,pr */
	IF(0x0C0687CCu); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C05DAA8u: TAIL(blk_f_0C05DAA8); default: JUMPD(tv_); } }  /* 0C0687CC jmp @Rn */
}

void blk_f_0C0688B0(sh3_t *c)
{
	LOCALS;
L_0C0688B0: BLKS(0x0C0688B0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0688B2u, 1);  /* 0C0688B0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0688B4u, 1);  /* 0C0688B2 mov.l Rm,@-Rn */
	r8 = r5;  /* 0C0688B4 mov Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0688B8u, 2);  /* 0C0688B6 mov.l Rm,@-Rn */
	r9 = r6;  /* 0C0688B8 mov Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0688BCu, 2);  /* 0C0688BA mov.l Rm,@-Rn */
	r10 = r4;  /* 0C0688BC mov Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0688C0u, 2);  /* 0C0688BE mov.l Rm,@-Rn */
	r11 = r7;  /* 0C0688C0 mov Rm,Rn */
	IF(0x0C0688C2u); r15 -= 4; W32(r15, PR); UPD(0x0C0688C4u, 2);  /* 0C0688C2 sts.l pr,@-Rn */
	r6 = 0x10u;  /* 0C0688C4 mov #imm,Rn */
	r0 = 0xC0C23D0u; UPD(0x0C0688C8u, 2);  /* 0C0688C6 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF0u;  /* 0C0688C8 add #imm,Rn */
	r14 = r15;  /* 0C0688CA mov Rm,Rn */
	r5 = 0xC0C4458u; UPD(0x0C0688CEu, 3);  /* 0C0688CC mov.l @(disp,pc),Rn */
	IF(0x0C0688CEu); { u32 t_ = r0; PR = 0x0C0688D2u; r4 = r14; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C23D0, 0x0C0C23D0u, 0x0C0688D2u); }  /* 0C0688CE jsr @Rn */
L_0C0688D2: BLKS(0x0C0688D2u);
	r2 = 0x5u;  /* 0C0688D2 mov #imm,Rn */
	IF(0x0C0688D4u); ARG0(0x482Du); { s32 s_ = (s32)r2; if (s_ >= 0) r8 <<= (s_ & 31); else if ((s_ & 31) == 0) r8 = 0; else r8 >>= ((~s_ & 31) + 1); }  /* 0C0688D4 shld Rm,Rn */
	r0 = 0xC233728u; UPD(0x0C0688D8u, 3);  /* 0C0688D6 mov.l @(disp,pc),Rn */
	r8 += r9;  /* 0C0688D8 add Rm,Rn */
	IF(0x0C0688DAu); r8 <<= 2;  /* 0C0688DA shll2 Rn */
	r8 += r0;  /* 0C0688DC add Rm,Rn */
	r0 = r10;  /* 0C0688DE mov Rm,Rn */
	r0 &= 0xFu;  /* 0C0688E0 and #imm,r0 */
	IF(0x0C0688E2u); r2 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C0688E4u, 6);  /* 0C0688E2 mov.b @(r0,Rm),Rn */
	r2 |= r11;  /* 0C0688E4 or Rm,Rn */
	W32(r8 + 0x1Cu, r2); UPD(0x0C0688E8u, 2);  /* 0C0688E6 mov.l Rm,@(disp,Rn) */
	r2 = 0x6u;  /* 0C0688E8 mov #imm,Rn */
	r8 += 0x18u;  /* 0C0688EA add #imm,Rn */
	UPD(0x0C0688ECu, 2);
L_0C0688EC: BLKS(0x0C0688ECu);
	IF(0x0C0688ECu); r10 >>= 2;  /* 0C0688EC shlr2 Rn */
	IF(0x0C0688EEu); r10 >>= 2;  /* 0C0688EE shlr2 Rn */
	r0 = r10;  /* 0C0688F0 mov Rm,Rn */
	r0 &= 0xFu;  /* 0C0688F2 and #imm,r0 */
	IF(0x0C0688F4u); r3 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C0688F6u, 5);  /* 0C0688F4 mov.b @(r0,Rm),Rn */
	r2 += 0xFFFFFFFFu;  /* 0C0688F6 add #imm,Rn */
	r3 |= r11;  /* 0C0688F8 or Rm,Rn */
	W32(r8, r3); UPD(0x0C0688FCu, 3);  /* 0C0688FA mov.l Rm,@Rn */
	IF(0x0C0688FCu); T = (s32)r2 >= 0;  /* 0C0688FC cmp/pz Rn */
	{ u32 c_ = T; r8 += 0xFFFFFFFCu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0688ECu, 4); goto L_0C0688EC; } goto L_0C068902; }  /* 0C0688FE bt/s */
L_0C068902: BLKS(0x0C068902u);
	r14 += 0x10u;  /* 0C068902 add #imm,Rn */
	r15 = r14;  /* 0C068904 mov Rm,Rn */
	IF(0x0C068906u); PR = R32(r15); r15 += 4; UPD(0x0C068908u, 4);  /* 0C068906 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06890Au, 1);  /* 0C068908 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06890Cu, 1);  /* 0C06890A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06890Eu, 1);  /* 0C06890C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C068910u, 1);  /* 0C06890E mov.l @Rm+,Rn */
	IF(0x0C068910u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C068910 rts */
}

/* FUN_0c068920 */
void blk_f_0C068920(sh3_t *c)
{
	LOCALS;
L_0C068920: BLKS(0x0C068920u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C068922u, 1);  /* 0C068920 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C068924u, 1);  /* 0C068922 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s8)r5;  /* 0C068924 exts.b Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C068928u, 2);  /* 0C068926 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s8)r4;  /* 0C068928 exts.b Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06892Cu, 2);  /* 0C06892A mov.l Rm,@-Rn */
	r5 = r9;  /* 0C06892C mov Rm,Rn */
	r10 = 0xC0626E0u; UPD(0x0C068930u, 2);  /* 0C06892E mov.l @(disp,pc),Rn */
	r6 = r8;  /* 0C068930 mov Rm,Rn */
	IF(0x0C068932u); r15 -= 4; W32(r15, PR); UPD(0x0C068934u, 2);  /* 0C068932 sts.l pr,@-Rn */
	r8 += 0xCu;  /* 0C068934 add #imm,Rn */
	r4 = 0xC173800u; UPD(0x0C068938u, 2);  /* 0C068936 mov.l @(disp,pc),Rn */
	r7 = 0x80808000u; UPD(0x0C06893Au, 1);  /* 0C068938 mov.l @(disp,pc),Rn */
	IF(0x0C06893Au); { u32 t_ = r10; PR = 0x0C06893Eu; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C06893Eu); }  /* 0C06893A jsr @Rn */
L_0C06893E: BLKS(0x0C06893Eu);
	r0 = 0xC23DEA4u; UPD(0x0C068940u, 1);  /* 0C06893E mov.l @(disp,pc),Rn */
	r5 = r9;  /* 0C068940 mov Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r0); UPD(0x0C068944u, 2);  /* 0C068942 mov.b @Rm,Rn */
	r6 = r8;  /* 0C068944 mov Rm,Rn */
	r0 = r3 & 0xFF;  /* 0C068946 extu.b Rm,Rn */
	r2 = 0xC17386Cu; UPD(0x0C06894Au, 3);  /* 0C068948 mov.l @(disp,pc),Rn */
	IF(0x0C06894Au); r0 <<= 2;  /* 0C06894A shll2 Rn */
	IF(0x0C06894Cu); r4 = R32(r0 + r2); UPD(0x0C06894Eu, 2);  /* 0C06894C mov.l @(r0,Rm),Rn */
	r7 = 0x40C04000u; UPD(0x0C068950u, 1);  /* 0C06894E mov.l @(disp,pc),Rn */
	r0 = r10;  /* 0C068950 mov Rm,Rn */
	r15 = r14;  /* 0C068952 mov Rm,Rn */
	IF(0x0C068954u); PR = R32(r15); r15 += 4; UPD(0x0C068956u, 3);  /* 0C068954 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C068958u, 1);  /* 0C068956 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06895Au, 1);  /* 0C068958 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06895Cu, 1);  /* 0C06895A mov.l @Rm+,Rn */
	IF(0x0C06895Cu); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0626E0u: TAIL(blk_f_0C0626E0); default: JUMPD(tv_); } }  /* 0C06895C jmp @Rn */
}

/* FUN_0c068ad0 */
void blk_f_0C068AD0(sh3_t *c)
{
	LOCALS;
L_0C068AD0: BLKS(0x0C068AD0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C068AD2u, 1);  /* 0C068AD0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C068AD4u, 1);  /* 0C068AD2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C068AD6u, 1);  /* 0C068AD4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C068AD8u, 1);  /* 0C068AD6 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C068ADAu, 1);  /* 0C068AD8 mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s8)r5;  /* 0C068ADA exts.b Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C068ADEu, 2);  /* 0C068ADC mov.l Rm,@-Rn */
	r12 = (u32)(s32)(s8)r4;  /* 0C068ADE exts.b Rm,Rn */
	IF(0x0C068AE0u); r15 -= 4; W32(r15, PR); UPD(0x0C068AE2u, 2);  /* 0C068AE0 sts.l pr,@-Rn */
	r2 = 0xC2380CCu; UPD(0x0C068AE4u, 1);  /* 0C068AE2 mov.l @(disp,pc),Rn */
	r0 = R32(r2); UPD(0x0C068AE6u, 1);  /* 0C068AE4 mov.l @Rm,Rn */
	r0 &= 0x4u;  /* 0C068AE6 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C068AE8 tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C068B60u, 5); goto L_0C068B60; } goto L_0C068AEE; }  /* 0C068AEA bt/s */
L_0C068AEE: BLKS(0x0C068AEEu);
	r6 = r11;  /* 0C068AEE mov Rm,Rn */
	r8 = 0xC0626E0u; UPD(0x0C068AF2u, 3);  /* 0C068AF0 mov.l @(disp,pc),Rn */
	r6 += 0x2u;  /* 0C068AF2 add #imm,Rn */
	r4 = 0xC1738B8u; UPD(0x0C068AF6u, 2);  /* 0C068AF4 mov.l @(disp,pc),Rn */
	r5 = r12;  /* 0C068AF6 mov Rm,Rn */
	r7 = 0x80808000u; UPD(0x0C068AFAu, 2);  /* 0C068AF8 mov.l @(disp,pc),Rn */
L_0C068AFA: BLKS(0x0C068AFAu);
	IF(0x0C068AFAu); { u32 t_ = r8; PR = 0x0C068AFEu; IF(0x0C068AFCu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C068AFEu); }  /* 0C068AFA jsr @Rn */
L_0C068AFE: BLKS(0x0C068AFEu);
	r2 = 0xC2380CCu; UPD(0x0C068B00u, 1);  /* 0C068AFE mov.l @(disp,pc),Rn */
	r0 = R32(r2); UPD(0x0C068B02u, 1);  /* 0C068B00 mov.l @Rm,Rn */
	r0 &= 0x8u;  /* 0C068B02 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C068B04 tst Rm,Rn */
	{ u32 c_ = T; r6 = r11; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C068B50u, 5); goto L_0C068B50; } goto L_0C068B0A; }  /* 0C068B06 bt/s */
L_0C068B0A: BLKS(0x0C068B0Au);
	r6 = r11;  /* 0C068B0A mov Rm,Rn */
	r4 = 0xC1738B8u; UPD(0x0C068B0Eu, 3);  /* 0C068B0C mov.l @(disp,pc),Rn */
	r6 += 0x3u;  /* 0C068B0E add #imm,Rn */
	r7 = 0x80808000u; UPD(0x0C068B12u, 2);  /* 0C068B10 mov.l @(disp,pc),Rn */
	r5 = r12;  /* 0C068B12 mov Rm,Rn */
	UPD(0x0C068B14u, 1);
L_0C068B14: BLKS(0x0C068B14u);
	IF(0x0C068B14u); { u32 t_ = r8; PR = 0x0C068B18u; IF(0x0C068B16u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C068B18u); }  /* 0C068B14 jsr @Rn */
L_0C068B18: BLKS(0x0C068B18u);
	r8 = 0xC2B037Cu; UPD(0x0C068B1Au, 1);  /* 0C068B18 mov.l @(disp,pc),Rn */
	r5 = r12;  /* 0C068B1A mov Rm,Rn */
	r10 = 0xC062490u; UPD(0x0C068B1Eu, 2);  /* 0C068B1C mov.l @(disp,pc),Rn */
	r6 = r11;  /* 0C068B1E mov Rm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r8); r8 += 1; r3 = v_; } UPD(0x0C068B22u, 2);  /* 0C068B20 mov.b @Rm+,Rn */
	r11 += 0x4u;  /* 0C068B22 add #imm,Rn */
	r9 = 0x80808000u; UPD(0x0C068B26u, 2);  /* 0C068B24 mov.l @(disp,pc),Rn */
	r4 = r3 & 0xFF;  /* 0C068B26 extu.b Rm,Rn */
	IF(0x0C068B28u); { u32 t_ = r10; PR = 0x0C068B2Cu; r7 = r9; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C062490, 0x0C062490u, 0x0C068B2Cu); }  /* 0C068B28 jsr @Rn */
L_0C068B2C: BLKS(0x0C068B2Cu);
	r1 = (u32)(s32)(s8)R8(r8); UPD(0x0C068B2Eu, 1);  /* 0C068B2C mov.b @Rm,Rn */
	r5 = r12;  /* 0C068B2E mov Rm,Rn */
	r4 = r1 & 0xFF;  /* 0C068B30 extu.b Rm,Rn */
	r6 = r11;  /* 0C068B32 mov Rm,Rn */
	r7 = r9;  /* 0C068B34 mov Rm,Rn */
	r0 = r10;  /* 0C068B36 mov Rm,Rn */
	r15 = r14;  /* 0C068B38 mov Rm,Rn */
	IF(0x0C068B3Au); PR = R32(r15); r15 += 4; UPD(0x0C068B3Cu, 7);  /* 0C068B3A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C068B3Eu, 1);  /* 0C068B3C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C068B40u, 1);  /* 0C068B3E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C068B42u, 1);  /* 0C068B40 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C068B44u, 1);  /* 0C068B42 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C068B46u, 1);  /* 0C068B44 mov.l @Rm+,Rn */
	IF(0x0C068B46u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C062490u: TAIL(blk_f_0C062490); default: JUMPD(tv_); } }  /* 0C068B46 jmp @Rn */
L_0C068B50: BLKS(0x0C068B50u);
	r4 = 0xC1738BCu; UPD(0x0C068B52u, 1);  /* 0C068B50 mov.l @(disp,pc),Rn */
	r7 = 0x40C04000u; UPD(0x0C068B54u, 1);  /* 0C068B52 mov.l @(disp,pc),Rn */
	r6 += 0x3u;  /* 0C068B54 add #imm,Rn */
	{ r5 = r12; /* slot mov Rm,Rn */ UPD(0x0C068B14u, 4); goto L_0C068B14; }  /* 0C068B56 bra */
L_0C068B60: BLKS(0x0C068B60u);
	r8 = 0xC0626E0u; UPD(0x0C068B62u, 1);  /* 0C068B60 mov.l @(disp,pc),Rn */
	r6 = r11;  /* 0C068B62 mov Rm,Rn */
	r4 = 0xC1738BCu; UPD(0x0C068B66u, 2);  /* 0C068B64 mov.l @(disp,pc),Rn */
	r6 += 0x2u;  /* 0C068B66 add #imm,Rn */
	r7 = 0x40C04000u; UPD(0x0C068B6Au, 2);  /* 0C068B68 mov.l @(disp,pc),Rn */
	{ r5 = r12; /* slot mov Rm,Rn */ UPD(0x0C068AFAu, 3); goto L_0C068AFA; }  /* 0C068B6A bra */
}

/* FUN_0c068b90 */
void blk_f_0C068B90(sh3_t *c)
{
	LOCALS;
L_0C068B90: BLKS(0x0C068B90u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C068B92u, 1);  /* 0C068B90 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C068B94u, 1);  /* 0C068B92 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C068B96u, 1);  /* 0C068B94 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C068B98u, 1);  /* 0C068B96 mov.l Rm,@-Rn */
	r10 = 0xFFFFFFFFu;  /* 0C068B98 mov #imm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C068B9Cu, 2);  /* 0C068B9A mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C068B9Eu, 1);  /* 0C068B9C mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C068BA0u, 1);  /* 0C068B9E mov.l Rm,@-Rn */
	r8 = 0xC06F3D0u; UPD(0x0C068BA2u, 1);  /* 0C068BA0 mov.l @(disp,pc),Rn */
	IF(0x0C068BA2u); r15 -= 4; W32(r15, PR); UPD(0x0C068BA4u, 1);  /* 0C068BA2 sts.l pr,@-Rn */
	r12 = 0xC0626E0u; UPD(0x0C068BA6u, 1);  /* 0C068BA4 mov.l @(disp,pc),Rn */
	r11 = 0x400u; UPD(0x0C068BA8u, 1);  /* 0C068BA6 mov.w @(disp,pc),Rn */
	IF(0x0C068BA8u); { u32 t_ = r8; PR = 0x0C068BACu; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C06F3D0, 0x0C06F3D0u, 0x0C068BACu); }  /* 0C068BA8 jsr @Rn */
L_0C068BAC: BLKS(0x0C068BACu);
	r13 = r12;  /* 0C068BAC mov Rm,Rn */
	IF(0x0C068BAEu); ;  /* 0C068BAE nop */
	UPD(0x0C068BB0u, 2);
L_0C068BB0: BLKS(0x0C068BB0u);
	r8 = 0xC060BC0u; UPD(0x0C068BB2u, 1);  /* 0C068BB0 mov.l @(disp,pc),Rn */
	r9 = 0xC061200u; UPD(0x0C068BB4u, 1);  /* 0C068BB2 mov.l @(disp,pc),Rn */
	IF(0x0C068BB4u); { u32 t_ = r8; PR = 0x0C068BB8u; IF(0x0C068BB6u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C060BC0, 0x0C060BC0u, 0x0C068BB8u); }  /* 0C068BB4 jsr @Rn */
L_0C068BB8: BLKS(0x0C068BB8u);
	r8 = 0xC062060u; UPD(0x0C068BBAu, 1);  /* 0C068BB8 mov.l @(disp,pc),Rn */
	IF(0x0C068BBAu); { u32 t_ = r9; PR = 0x0C068BBEu; IF(0x0C068BBCu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C061200, 0x0C061200u, 0x0C068BBEu); }  /* 0C068BBA jsr @Rn */
L_0C068BBE: BLKS(0x0C068BBEu);
	r9 = 0xC062000u; UPD(0x0C068BC0u, 1);  /* 0C068BBE mov.l @(disp,pc),Rn */
	IF(0x0C068BC0u); { u32 t_ = r8; PR = 0x0C068BC4u; r4 = 0x40u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062060, 0x0C062060u, 0x0C068BC4u); }  /* 0C068BC0 jsr @Rn */
L_0C068BC4: BLKS(0x0C068BC4u);
	r8 = 0xC06F5B0u; UPD(0x0C068BC6u, 1);  /* 0C068BC4 mov.l @(disp,pc),Rn */
	IF(0x0C068BC6u); { u32 t_ = r9; PR = 0x0C068BCAu; IF(0x0C068BC8u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C062000, 0x0C062000u, 0x0C068BCAu); }  /* 0C068BC6 jsr @Rn */
L_0C068BCA: BLKS(0x0C068BCAu);
	r9 = 0xC0673B0u; UPD(0x0C068BCCu, 1);  /* 0C068BCA mov.l @(disp,pc),Rn */
	IF(0x0C068BCCu); { u32 t_ = r8; PR = 0x0C068BD0u; IF(0x0C068BCEu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C06F5B0, 0x0C06F5B0u, 0x0C068BD0u); }  /* 0C068BCC jsr @Rn */
L_0C068BD0: BLKS(0x0C068BD0u);
	r7 = 0xC2B016Cu; UPD(0x0C068BD2u, 1);  /* 0C068BD0 mov.l @(disp,pc),Rn */
	r4 = 0xC2A6D4Cu; UPD(0x0C068BD4u, 1);  /* 0C068BD2 mov.l @(disp,pc),Rn */
	r6 = (u32)(s32)(s16)R16(r7); UPD(0x0C068BD6u, 1);  /* 0C068BD4 mov.w @Rm,Rn */
	r3 = (u32)(s32)(s16)R16(r4); UPD(0x0C068BD8u, 1);  /* 0C068BD6 mov.w @Rm,Rn */
	r5 = r6 & 0xFFFF;  /* 0C068BD8 extu.w Rm,Rn */
	T = r5 == r11;  /* 0C068BDA cmp/eq Rm,Rn */
	{ u32 t_ = 0u - r10, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r8 = r_; }  /* 0C068BDC negc Rm,Rn */
	r2 = r3 & 0xFFFF;  /* 0C068BDE extu.w Rm,Rn */
	T = r2 == r11;  /* 0C068BE0 cmp/eq Rm,Rn */
	{ u32 t_ = 0u - r10, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r0 = r_; }  /* 0C068BE2 negc Rm,Rn */
	r8 |= r0;  /* 0C068BE4 or Rm,Rn */
	r4 = 0x25u;  /* 0C068BE6 mov #imm,Rn */
	IF(0x0C068BE8u); { u32 t_ = r9; PR = 0x0C068BECu; r5 = 0x17u; /* slot mov #imm,Rn */ UPD(t_, 10); CALLP(t_, blk_f_0C0673B0, 0x0C0673B0u, 0x0C068BECu); }  /* 0C068BE8 jsr @Rn */
L_0C068BEC: BLKS(0x0C068BECu);
	T = (r8 & r8) == 0;  /* 0C068BEC tst Rm,Rn */
	{ u32 c_ = !T; r9 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C068C30u, 4); goto L_0C068C30; } goto L_0C068BF2; }  /* 0C068BEE bf/s */
L_0C068BF2: BLKS(0x0C068BF2u);
	T = (r9 & r9) == 0;  /* 0C068BF2 tst Rm,Rn */
	UPD(0x0C068BF4u, 2);
L_0C068BF4: BLKS(0x0C068BF4u);
	{ u32 c_ = !T; r5 = 0x25u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C068C20u, 3); goto L_0C068C20; } UPD(0x0C068BF8u, 1); goto L_0C068BF8; }  /* 0C068BF4 bf/s */
L_0C068BF8: BLKS(0x0C068BF8u);
	r0 = 0xC061010u; UPD(0x0C068BFAu, 1);  /* 0C068BF8 mov.l @(disp,pc),Rn */
	r4 = 0x7u;  /* 0C068BFA mov #imm,Rn */
	IF(0x0C068BFCu); { u32 t_ = r0; PR = 0x0C068C00u; r5 = 0x7u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C061010, 0x0C061010u, 0x0C068C00u); }  /* 0C068BFC jsr @Rn */
L_0C068C00: BLKS(0x0C068C00u);
	r0 = 0xC062250u; UPD(0x0C068C02u, 1);  /* 0C068C00 mov.l @(disp,pc),Rn */
	IF(0x0C068C02u); { u32 t_ = r0; PR = 0x0C068C06u; r8 |= r9; /* slot or Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062250, 0x0C062250u, 0x0C068C06u); }  /* 0C068C02 jsr @Rn */
L_0C068C06: BLKS(0x0C068C06u);
	r0 = (u32)(s32)(s8)r8;  /* 0C068C06 exts.b Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C068C08 tst Rm,Rn */
	if (!T) { UPD(0x0C068BB0u, 5); goto L_0C068BB0; }  /* 0C068C0A bf */
L_0C068C0C: BLKS(0x0C068C0Cu);
	r15 = r14;  /* 0C068C0C mov Rm,Rn */
	IF(0x0C068C0Eu); PR = R32(r15); r15 += 4; UPD(0x0C068C10u, 2);  /* 0C068C0E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C068C12u, 1);  /* 0C068C10 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C068C14u, 1);  /* 0C068C12 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C068C16u, 1);  /* 0C068C14 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C068C18u, 1);  /* 0C068C16 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C068C1Au, 1);  /* 0C068C18 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C068C1Cu, 1);  /* 0C068C1A mov.l @Rm+,Rn */
	IF(0x0C068C1Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C068C1C rts */
L_0C068C20: BLKS(0x0C068C20u);
	r4 = 0xC172C78u; UPD(0x0C068C22u, 1);  /* 0C068C20 mov.l @(disp,pc),Rn */
	r7 = 0x80808000u; UPD(0x0C068C24u, 1);  /* 0C068C22 mov.l @(disp,pc),Rn */
	IF(0x0C068C24u); { u32 t_ = r12; PR = 0x0C068C28u; r6 = 0xBu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C068C28u); }  /* 0C068C24 jsr @Rn */
L_0C068C28: BLKS(0x0C068C28u);
	{ IF(0x0C068C2Au); ; /* slot nop */ UPD(0x0C068BF8u, 3); goto L_0C068BF8; }  /* 0C068C28 bra */
L_0C068C30: BLKS(0x0C068C30u);
	r4 = 0xC172C84u; UPD(0x0C068C32u, 1);  /* 0C068C30 mov.l @(disp,pc),Rn */
	r5 = 0x26u;  /* 0C068C32 mov #imm,Rn */
	r7 = 0x80808000u; UPD(0x0C068C36u, 2);  /* 0C068C34 mov.l @(disp,pc),Rn */
	IF(0x0C068C36u); { u32 t_ = r13; PR = 0x0C068C3Au; r6 = 0xBu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C068C3Au); }  /* 0C068C36 jsr @Rn */
L_0C068C3A: BLKS(0x0C068C3Au);
	{ T = (r9 & r9) == 0; /* slot tst Rm,Rn */ UPD(0x0C068BF4u, 3); goto L_0C068BF4; }  /* 0C068C3A bra */
}

/* FUN_0c068da0 */
void blk_f_0C068DA0(sh3_t *c)
{
	LOCALS;
L_0C068DA0: BLKS(0x0C068DA0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C068DA2u, 1);  /* 0C068DA0 mov.l Rm,@-Rn */
	r3 = 0xFFFFFFFFu;  /* 0C068DA2 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C068DA6u, 2);  /* 0C068DA4 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C068DA8u, 1);  /* 0C068DA6 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C068DAAu, 1);  /* 0C068DA8 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C068DACu, 1);  /* 0C068DAA mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C068DAEu, 1);  /* 0C068DAC mov.l Rm,@-Rn */
	r1 = 0xC2460B0u; UPD(0x0C068DB0u, 1);  /* 0C068DAE mov.l @(disp,pc),Rn */
	IF(0x0C068DB0u); r15 -= 4; W32(r15, PR); UPD(0x0C068DB2u, 1);  /* 0C068DB0 sts.l pr,@-Rn */
	r2 = 0x10000u; UPD(0x0C068DB4u, 1);  /* 0C068DB2 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C068DB4 mov Rm,Rn */
	IF(0x0C068DB6u); ;  /* 0C068DB6 nop */
	UPD(0x0C068DB8u, 2);
L_0C068DB8: BLKS(0x0C068DB8u);
	W32(r1, r3); UPD(0x0C068DBAu, 1);  /* 0C068DB8 mov.l Rm,@Rn */
	IF(0x0C068DBAu); r2 -= 1; T = r2 == 0;  /* 0C068DBA dt Rn */
	{ u32 c_ = !T; r1 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C068DB8u, 4); goto L_0C068DB8; } goto L_0C068DC0; }  /* 0C068DBC bf/s */
L_0C068DC0: BLKS(0x0C068DC0u);
	r9 = 0xC3C4178u; UPD(0x0C068DC2u, 2);  /* 0C068DC0 mov.l @(disp,pc),Rn */
	r7 = 0x0u;  /* 0C068DC2 mov #imm,Rn */
	r10 = 0xC0C4468u; UPD(0x0C068DC6u, 2);  /* 0C068DC4 mov.l @(disp,pc),Rn */
	r8 = 0x7Fu;  /* 0C068DC6 mov #imm,Rn */
	r11 = 0x80u; UPD(0x0C068DCAu, 2);  /* 0C068DC8 mov.w @(disp,pc),Rn */
	r6 = 0x0u;  /* 0C068DCA mov #imm,Rn */
	r12 = 0xC0C2494u; UPD(0x0C068DCEu, 2);  /* 0C068DCC mov.l @(disp,pc),Rn */
L_0C068DCE: BLKS(0x0C068DCEu);
	r0 = r6;  /* 0C068DCE mov Rm,Rn */
	IF(0x0C068DD0u); r4 = R32(r0 + r10); UPD(0x0C068DD2u, 2);  /* 0C068DD0 mov.l @(r0,Rm),Rn */
	r1 = r7;  /* 0C068DD2 mov Rm,Rn */
	r1 += r11;  /* 0C068DD4 add Rm,Rn */
	r0 = r1 & 0xFF;  /* 0C068DD6 extu.b Rm,Rn */
	IF(0x0C068DD8u); r0 <<= 2;  /* 0C068DD8 shll2 Rn */
	IF(0x0C068DDAu); r4 <<= 8;  /* 0C068DDA shll8 Rn */
	IF(0x0C068DDCu); { u32 t_ = r12; PR = 0x0C068DE0u; IF(0x0C068DDEu); r5 = R32(r0 + r10); /* slot mov.l @(r0,Rm),Rn */ UPD(t_, 7); CALLP(t_, blk_f_0C0C2494, 0x0C0C2494u, 0x0C068DE0u); }  /* 0C068DDC jsr @Rn */
L_0C068DE0: BLKS(0x0C068DE0u);
	r1 = r0;  /* 0C068DE0 mov Rm,Rn */
	r0 = r6;  /* 0C068DE2 mov Rm,Rn */
	r7 += 0x1u;  /* 0C068DE4 add #imm,Rn */
	IF(0x0C068DE6u); W32(r0 + r9, r1); UPD(0x0C068DE8u, 4);  /* 0C068DE6 mov.l Rm,@(r0,Rn) */
	T = (s32)r7 > (s32)r8;  /* 0C068DE8 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r6 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C068DCEu, 4); goto L_0C068DCE; } goto L_0C068DEE; }  /* 0C068DEA bf/s */
L_0C068DEE: BLKS(0x0C068DEEu);
	r6 = 0xC3C417Cu; UPD(0x0C068DF0u, 2);  /* 0C068DEE mov.l @(disp,pc),Rn */
	r2 = 0x0u;  /* 0C068DF0 mov #imm,Rn */
	r4 = 0xC2460B0u; UPD(0x0C068DF4u, 2);  /* 0C068DF2 mov.l @(disp,pc),Rn */
	r7 = r2;  /* 0C068DF4 mov Rm,Rn */
	r5 = 0x7Eu;  /* 0C068DF6 mov #imm,Rn */
	UPD(0x0C068DF8u, 2);
L_0C068DF8: BLKS(0x0C068DF8u);
	r1 = r2;  /* 0C068DF8 mov Rm,Rn */
	r3 = R32(r6); UPD(0x0C068DFCu, 2);  /* 0C068DFA mov.l @Rm,Rn */
	IF(0x0C068DFCu); r1 <<= 2;  /* 0C068DFC shll2 Rn */
	r1 += r4;  /* 0C068DFE add Rm,Rn */
	UPD(0x0C068E00u, 2);
L_0C068E00: BLKS(0x0C068E00u);
	W32(r1, r7); UPD(0x0C068E02u, 1);  /* 0C068E00 mov.l Rm,@Rn */
	r2 += 0x1u;  /* 0C068E02 add #imm,Rn */
	T = (s32)r2 > (s32)r3;  /* 0C068E04 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r1 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C068E00u, 5); goto L_0C068E00; } goto L_0C068E0A; }  /* 0C068E06 bf/s */
L_0C068E0A: BLKS(0x0C068E0Au);
	r7 += 0x1u;  /* 0C068E0A add #imm,Rn */
	T = (s32)r7 > (s32)r5;  /* 0C068E0C cmp/gt Rm,Rn */
	{ u32 c_ = !T; r6 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C068DF8u, 6); goto L_0C068DF8; } goto L_0C068E12; }  /* 0C068E0E bf/s */
L_0C068E12: BLKS(0x0C068E12u);
	r3 = r2;  /* 0C068E12 mov Rm,Rn */
	r0 = 0xC2460B0u; UPD(0x0C068E16u, 3);  /* 0C068E14 mov.l @(disp,pc),Rn */
	IF(0x0C068E16u); r3 <<= 2;  /* 0C068E16 shll2 Rn */
	r6 = 0xFFFFu; UPD(0x0C068E1Au, 2);  /* 0C068E18 mov.l @(disp,pc),Rn */
	r3 += r0;  /* 0C068E1A add Rm,Rn */
	UPD(0x0C068E1Cu, 1);
L_0C068E1C: BLKS(0x0C068E1Cu);
	W32(r3, r7); UPD(0x0C068E1Eu, 1);  /* 0C068E1C mov.l Rm,@Rn */
	r2 += 0x1u;  /* 0C068E1E add #imm,Rn */
	T = (s32)r2 > (s32)r6;  /* 0C068E20 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r3 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C068E1Cu, 5); goto L_0C068E1C; } goto L_0C068E26; }  /* 0C068E22 bf/s */
L_0C068E26: BLKS(0x0C068E26u);
	r15 = r14;  /* 0C068E26 mov Rm,Rn */
	IF(0x0C068E28u); PR = R32(r15); r15 += 4; UPD(0x0C068E2Au, 3);  /* 0C068E28 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C068E2Cu, 1);  /* 0C068E2A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C068E2Eu, 1);  /* 0C068E2C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C068E30u, 1);  /* 0C068E2E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C068E32u, 1);  /* 0C068E30 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C068E34u, 1);  /* 0C068E32 mov.l @Rm+,Rn */
	IF(0x0C068E34u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C068E34 rts */
}

/* FUN_0c068e60 */
void blk_f_0C068E60(sh3_t *c)
{
	LOCALS;
L_0C068E60: BLKS(0x0C068E60u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C068E62u, 1);  /* 0C068E60 mov.l Rm,@-Rn */
	r6 -= r4;  /* 0C068E62 sub Rm,Rn */
	r0 = 0xFFFFFFF8u;  /* 0C068E64 mov #imm,Rn */
	IF(0x0C068E66u); r15 -= 4; W32(r15, PR); UPD(0x0C068E68u, 3);  /* 0C068E66 sts.l pr,@-Rn */
	IF(0x0C068E68u); ARG0(0x460Cu); { s32 s_ = (s32)r0; if (s_ >= 0) r6 <<= (s_ & 31); else if ((s_ & 31) == 0) r6 = (u32)((s32)r6 >> 31); else r6 = (u32)((s32)r6 >> ((~s_ & 31) + 1)); }  /* 0C068E68 shad Rm,Rn */
	T = (r6 & r6) == 0;  /* 0C068E6A tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C068EE0u, 5); goto L_0C068EE0; } goto L_0C068E70; }  /* 0C068E6C bt/s */
L_0C068E70: BLKS(0x0C068E70u);
	r7 -= r5;  /* 0C068E70 sub Rm,Rn */
	IF(0x0C068E72u); T = (s32)r7 >= 0;  /* 0C068E72 cmp/pz Rn */
	{ u32 c_ = !T; r4 = r7; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C068ED0u, 6); goto L_0C068ED0; } UPD(0x0C068E78u, 1); goto L_0C068E78; }  /* 0C068E74 bf/s */
L_0C068E78: BLKS(0x0C068E78u);
	IF(0x0C068E78u); T = (s32)r6 >= 0;  /* 0C068E78 cmp/pz Rn */
	{ u32 c_ = !T; r5 = r6; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C068EC0u, 4); goto L_0C068EC0; } UPD(0x0C068E7Eu, 1); goto L_0C068E7E; }  /* 0C068E7A bf/s */
L_0C068E7E: BLKS(0x0C068E7Eu);
	r0 = 0xC0C2494u; UPD(0x0C068E80u, 1);  /* 0C068E7E mov.l @(disp,pc),Rn */
	IF(0x0C068E80u); { u32 t_ = r0; PR = 0x0C068E84u; IF(0x0C068E82u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2494, 0x0C0C2494u, 0x0C068E84u); }  /* 0C068E80 jsr @Rn */
L_0C068E84: BLKS(0x0C068E84u);
	r0 = r0 & 0xFFFF;  /* 0C068E84 extu.w Rm,Rn */
	r2 = 0xC2460B0u; UPD(0x0C068E88u, 2);  /* 0C068E86 mov.l @(disp,pc),Rn */
	IF(0x0C068E88u); r0 <<= 2;  /* 0C068E88 shll2 Rn */
	IF(0x0C068E8Au); T = (s32)r7 >= 0;  /* 0C068E8A cmp/pz Rn */
	{ u32 c_ = !T; IF(0x0C068E8Eu); r0 = R32(r0 + r2); /* slot mov.l @(r0,Rm),Rn */ if (c_) { UPD(0x0C068EB0u, 5); goto L_0C068EB0; } UPD(0x0C068E90u, 1); goto L_0C068E90; }  /* 0C068E8C bf/s */
L_0C068E90: BLKS(0x0C068E90u);
	IF(0x0C068E90u); T = (s32)r6 >= 0;  /* 0C068E90 cmp/pz Rn */
	if (!T) { UPD(0x0C068EA0u, 4); goto L_0C068EA0; }  /* 0C068E92 bf */
L_0C068E94: BLKS(0x0C068E94u);
	r15 = r14;  /* 0C068E94 mov Rm,Rn */
	IF(0x0C068E96u); PR = R32(r15); r15 += 4; UPD(0x0C068E98u, 2);  /* 0C068E96 lds.l @Rn+,pr */
	IF(0x0C068E98u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C068E98 rts */
L_0C068EA0: BLKS(0x0C068EA0u);
	r6 = 0x100u; UPD(0x0C068EA2u, 1);  /* 0C068EA0 mov.w @(disp,pc),Rn */
	r5 = 0x1FFu; UPD(0x0C068EA4u, 1);  /* 0C068EA2 mov.w @(disp,pc),Rn */
	r6 -= r0;  /* 0C068EA4 sub Rm,Rn */
	r0 = r6;  /* 0C068EA6 mov Rm,Rn */
	{ r0 &= r5; /* slot and Rm,Rn */ UPD(0x0C068E94u, 5); goto L_0C068E94; }  /* 0C068EA8 bra */
L_0C068EB0: BLKS(0x0C068EB0u);
	r4 = 0x200u; UPD(0x0C068EB2u, 1);  /* 0C068EB0 mov.w @(disp,pc),Rn */
	r3 = 0x1FFu; UPD(0x0C068EB4u, 1);  /* 0C068EB2 mov.w @(disp,pc),Rn */
	r4 -= r0;  /* 0C068EB4 sub Rm,Rn */
	r0 = r4;  /* 0C068EB6 mov Rm,Rn */
	{ r0 &= r3; /* slot and Rm,Rn */ UPD(0x0C068E90u, 5); goto L_0C068E90; }  /* 0C068EB8 bra */
L_0C068EC0: BLKS(0x0C068EC0u);
	{ r5 = 0u - r6; /* slot neg Rm,Rn */ UPD(0x0C068E7Eu, 3); goto L_0C068E7E; }  /* 0C068EC0 bra */
L_0C068ED0: BLKS(0x0C068ED0u);
	{ r4 = 0u - r7; /* slot neg Rm,Rn */ UPD(0x0C068E78u, 3); goto L_0C068E78; }  /* 0C068ED0 bra */
L_0C068EE0: BLKS(0x0C068EE0u);
	r0 = 0x80u; UPD(0x0C068EE2u, 1);  /* 0C068EE0 mov.w @(disp,pc),Rn */
	T = (s32)r7 > (s32)r5;  /* 0C068EE2 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C068E94u, 4); goto L_0C068E94; }  /* 0C068EE4 bt */
L_0C068EE6: BLKS(0x0C068EE6u);
	r0 = 0x180u; UPD(0x0C068EE8u, 1);  /* 0C068EE6 mov.w @(disp,pc),Rn */
	{ IF(0x0C068EEAu); ; /* slot nop */ UPD(0x0C068E94u, 3); goto L_0C068E94; }  /* 0C068EE8 bra */
}

/* FUN_0c068f00 */
void blk_f_0C068F00(sh3_t *c)
{
	LOCALS;
L_0C068F00: BLKS(0x0C068F00u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C068F02u, 1);  /* 0C068F00 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C068F04u, 1);  /* 0C068F02 mov.l Rm,@-Rn */
	r3 = 0xB4u; UPD(0x0C068F06u, 1);  /* 0C068F04 mov.w @(disp,pc),Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C068F06 exts.w Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C068F0Au, 2);  /* 0C068F08 mov.l Rm,@-Rn */
	IF(0x0C068F0Au); MACL = r9 * r3;  /* 0C068F0A mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C068F0Eu, 3);  /* 0C068F0C mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s16)r5;  /* 0C068F0E exts.w Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C068F12u, 2);  /* 0C068F10 mov.l @(disp,pc),Rn */
	IF(0x0C068F12u); r8 = MACL;  /* 0C068F12 sts macl,Rn */
	r7 = 0x9Eu; UPD(0x0C068F16u, 2);  /* 0C068F14 mov.w @(disp,pc),Rn */
	r8 += r0;  /* 0C068F16 add Rm,Rn */
	IF(0x0C068F18u); r15 -= 4; W32(r15, PR); UPD(0x0C068F1Au, 2);  /* 0C068F18 sts.l pr,@-Rn */
	r7 += r8;  /* 0C068F1A add Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r7); UPD(0x0C068F1Eu, 2);  /* 0C068F1C mov.b @Rm,Rn */
	r3 = 0x1u;  /* 0C068F1E mov #imm,Rn */
	r6 = 0x2A0u; UPD(0x0C068F22u, 2);  /* 0C068F20 mov.w @(disp,pc),Rn */
	r3 &= r2;  /* 0C068F22 and Rm,Rn */
	IF(0x0C068F24u); MACL = r3 * r6;  /* 0C068F24 mul.l Rm,Rn */
	r5 = 0xC29D1D8u; UPD(0x0C068F28u, 4);  /* 0C068F26 mov.l @(disp,pc),Rn */
	IF(0x0C068F28u); r0 = MACL;  /* 0C068F28 sts macl,Rn */
	IF(0x0C068F2Au); r1 = R32(r0 + r5); UPD(0x0C068F2Cu, 2);  /* 0C068F2A mov.l @(r0,Rm),Rn */
	r0 = 0x4000000u; UPD(0x0C068F2Eu, 1);  /* 0C068F2C mov.l @(disp,pc),Rn */
	T = (r1 & r0) == 0;  /* 0C068F2E tst Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C068F38u, 4); goto L_0C068F38; } goto L_0C068F34; }  /* 0C068F30 bf/s */
L_0C068F34: BLKS(0x0C068F34u);
	r4 = 0x1u;  /* 0C068F34 mov #imm,Rn */
	r3 ^= r4;  /* 0C068F36 xor Rm,Rn */
	UPD(0x0C068F38u, 3);
L_0C068F38: BLKS(0x0C068F38u);
	r0 = r3 & 0xFF;  /* 0C068F38 extu.b Rm,Rn */
	IF(0x0C068F3Au); MACL = r0 * r6;  /* 0C068F3A mul.l Rm,Rn */
	W8(r7, r3); UPD(0x0C068F3Eu, 4);  /* 0C068F3C mov.b Rm,@Rn */
	IF(0x0C068F3Eu); r2 = MACL;  /* 0C068F3E sts macl,Rn */
	r0 = 0xC068E60u; UPD(0x0C068F42u, 2);  /* 0C068F40 mov.l @(disp,pc),Rn */
	r2 += r5;  /* 0C068F42 add Rm,Rn */
	r7 = R32(r2 + 0x14u); UPD(0x0C068F46u, 2);  /* 0C068F44 mov.l @(disp,Rm),Rn */
	r6 = R32(r2 + 0x10u); UPD(0x0C068F48u, 1);  /* 0C068F46 mov.l @(disp,Rm),Rn */
	r5 = R32(r8 + 0x28u); UPD(0x0C068F4Au, 1);  /* 0C068F48 mov.l @(disp,Rm),Rn */
	IF(0x0C068F4Au); { u32 t_ = r0; PR = 0x0C068F4Eu; r4 = R32(r8 + 0x24u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C068E60, 0x0C068E60u, 0x0C068F4Eu); }  /* 0C068F4A jsr @Rn */
L_0C068F4E: BLKS(0x0C068F4Eu);
	r3 = (u32)(s32)(s16)r0;  /* 0C068F4E exts.w Rm,Rn */
	r7 = 0x86u; UPD(0x0C068F52u, 2);  /* 0C068F50 mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C068F52 mov Rm,Rn */
	IF(0x0C068F54u); r6 = (u32)(s32)(s16)R16(r0 + r7); UPD(0x0C068F56u, 2);  /* 0C068F54 mov.w @(r0,Rm),Rn */
	r5 = 0x1FFu; UPD(0x0C068F58u, 1);  /* 0C068F56 mov.w @(disp,pc),Rn */
	r2 = r6;  /* 0C068F58 mov Rm,Rn */
	r2 -= r3;  /* 0C068F5A sub Rm,Rn */
	r2 &= r5;  /* 0C068F5C and Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C068F5E tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C068F86u, 7); goto L_0C068F86; } goto L_0C068F64; }  /* 0C068F60 bt/s */
L_0C068F64: BLKS(0x0C068F64u);
	r8 = 0x100u; UPD(0x0C068F66u, 2);  /* 0C068F64 mov.w @(disp,pc),Rn */
	T = (s32)r2 > (s32)r8;  /* 0C068F66 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r1 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C068F72u, 4); goto L_0C068F72; } goto L_0C068F6C; }  /* 0C068F68 bf/s */
L_0C068F6C: BLKS(0x0C068F6Cu);
	r4 = 0x200u; UPD(0x0C068F6Eu, 2);  /* 0C068F6C mov.w @(disp,pc),Rn */
	r4 -= r2;  /* 0C068F6E sub Rm,Rn */
	r1 = (u32)(s32)(s16)r4;  /* 0C068F70 exts.w Rm,Rn */
	UPD(0x0C068F72u, 2);
L_0C068F72: BLKS(0x0C068F72u);
	T = (s32)r1 >= (s32)r10;  /* 0C068F72 cmp/ge Rm,Rn */
	if (T) { UPD(0x0C068FA0u, 4); goto L_0C068FA0; }  /* 0C068F74 bt */
L_0C068F76: BLKS(0x0C068F76u);
	r5 = 0xB4u; UPD(0x0C068F78u, 1);  /* 0C068F76 mov.w @(disp,pc),Rn */
	IF(0x0C068F78u); MACL = r9 * r5;  /* 0C068F78 mul.l Rm,Rn */
	r10 = 0xC286578u; UPD(0x0C068F7Cu, 3);  /* 0C068F7A mov.l @(disp,pc),Rn */
	r0 = 0x86u; UPD(0x0C068F7Eu, 1);  /* 0C068F7C mov.w @(disp,pc),Rn */
	IF(0x0C068F7Eu); r9 = MACL;  /* 0C068F7E sts macl,Rn */
	r10 += r9;  /* 0C068F80 add Rm,Rn */
	IF(0x0C068F82u); W16(r0 + r10, r3); UPD(0x0C068F84u, 3);  /* 0C068F82 mov.w Rm,@(r0,Rn) */
	r0 = 0x1u;  /* 0C068F84 mov #imm,Rn */
	UPD(0x0C068F86u, 1);
L_0C068F86: BLKS(0x0C068F86u);
	r15 = r14;  /* 0C068F86 mov Rm,Rn */
	IF(0x0C068F88u); PR = R32(r15); r15 += 4; UPD(0x0C068F8Au, 2);  /* 0C068F88 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C068F8Cu, 1);  /* 0C068F8A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C068F8Eu, 1);  /* 0C068F8C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C068F90u, 1);  /* 0C068F8E mov.l @Rm+,Rn */
	IF(0x0C068F90u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C068F90 rts */
L_0C068FA0: BLKS(0x0C068FA0u);
	r1 = 0x100u; UPD(0x0C068FA2u, 1);  /* 0C068FA0 mov.w @(disp,pc),Rn */
	T = (s32)r2 > (s32)r1;  /* 0C068FA2 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C068FC0u, 4); goto L_0C068FC0; }  /* 0C068FA4 bf */
L_0C068FA6: BLKS(0x0C068FA6u);
	r1 += 0xFFFFFFB4u;  /* 0C068FA6 add #imm,Rn */
	IF(0x0C068FA8u); MACL = r9 * r1;  /* 0C068FA8 mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C068FACu, 4);  /* 0C068FAA mov.l @(disp,pc),Rn */
	IF(0x0C068FACu); r3 = MACL;  /* 0C068FAC sts macl,Rn */
	r7 = 0x86u; UPD(0x0C068FB0u, 2);  /* 0C068FAE mov.w @(disp,pc),Rn */
	r3 += r2;  /* 0C068FB0 add Rm,Rn */
	r3 += r7;  /* 0C068FB2 add Rm,Rn */
	r6 = (u32)(s32)(s16)R16(r3); UPD(0x0C068FB6u, 3);  /* 0C068FB4 mov.w @Rm,Rn */
	r10 += r6;  /* 0C068FB6 add Rm,Rn */
	W16(r3, r10); UPD(0x0C068FBAu, 2);  /* 0C068FB8 mov.w Rm,@Rn */
L_0C068FBA: BLKS(0x0C068FBAu);
	{ r0 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C068F86u, 3); goto L_0C068F86; }  /* 0C068FBA bra */
L_0C068FC0: BLKS(0x0C068FC0u);
	r5 = 0xB4u; UPD(0x0C068FC2u, 1);  /* 0C068FC0 mov.w @(disp,pc),Rn */
	IF(0x0C068FC2u); MACL = r9 * r5;  /* 0C068FC2 mul.l Rm,Rn */
	r4 = 0x86u; UPD(0x0C068FC6u, 3);  /* 0C068FC4 mov.w @(disp,pc),Rn */
	r9 = 0xC286578u; UPD(0x0C068FC8u, 1);  /* 0C068FC6 mov.l @(disp,pc),Rn */
	IF(0x0C068FC8u); r0 = MACL;  /* 0C068FC8 sts macl,Rn */
	r0 += r9;  /* 0C068FCA add Rm,Rn */
	r0 += r4;  /* 0C068FCC add Rm,Rn */
	r8 = (u32)(s32)(s16)R16(r0); UPD(0x0C068FD0u, 4);  /* 0C068FCE mov.w @Rm,Rn */
	r8 -= r10;  /* 0C068FD0 sub Rm,Rn */
	{ W16(r0, r8); /* slot mov.w Rm,@Rn */ UPD(0x0C068FBAu, 4); goto L_0C068FBA; }  /* 0C068FD2 bra */
}

/* FUN_0c069000 */
void blk_f_0C069000(sh3_t *c)
{
	LOCALS;
L_0C069000: BLKS(0x0C069000u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C069002u, 1);  /* 0C069000 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C069004u, 1);  /* 0C069002 mov.l Rm,@-Rn */
	r3 = 0xB4u; UPD(0x0C069006u, 1);  /* 0C069004 mov.w @(disp,pc),Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C069006 exts.w Rm,Rn */
	IF(0x0C069008u); MACL = r9 * r3;  /* 0C069008 mul.l Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C06900Cu, 4);  /* 0C06900A mov.l Rm,@-Rn */
	r0 = 0xC286578u; UPD(0x0C06900Eu, 1);  /* 0C06900C mov.l @(disp,pc),Rn */
	IF(0x0C06900Eu); r8 = MACL;  /* 0C06900E sts macl,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C069012u, 2);  /* 0C069010 mov.l Rm,@-Rn */
	r8 += r0;  /* 0C069012 add Rm,Rn */
	r0 = 0xC068E60u; UPD(0x0C069016u, 2);  /* 0C069014 mov.l @(disp,pc),Rn */
	r10 = (u32)(s32)(s16)r5;  /* 0C069016 exts.w Rm,Rn */
	IF(0x0C069018u); r15 -= 4; W32(r15, PR); UPD(0x0C06901Au, 2);  /* 0C069018 sts.l pr,@-Rn */
	r4 = R32(r8 + 0x24u); UPD(0x0C06901Cu, 1);  /* 0C06901A mov.l @(disp,Rm),Rn */
	r14 = r15;  /* 0C06901C mov Rm,Rn */
	IF(0x0C06901Eu); { u32 t_ = r0; PR = 0x0C069022u; r5 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C068E60, 0x0C068E60u, 0x0C069022u); }  /* 0C06901E jsr @Rn */
L_0C069022: BLKS(0x0C069022u);
	r3 = (u32)(s32)(s16)r0;  /* 0C069022 exts.w Rm,Rn */
	r2 = 0x86u; UPD(0x0C069026u, 2);  /* 0C069024 mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C069026 mov Rm,Rn */
	IF(0x0C069028u); r4 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C06902Au, 2);  /* 0C069028 mov.w @(r0,Rm),Rn */
	r0 = 0x1FFu; UPD(0x0C06902Cu, 1);  /* 0C06902A mov.w @(disp,pc),Rn */
	r2 = r4;  /* 0C06902C mov Rm,Rn */
	r2 -= r3;  /* 0C06902E sub Rm,Rn */
	r2 &= r0;  /* 0C069030 and Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C069032 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C06905Au, 7); goto L_0C06905A; } goto L_0C069038; }  /* 0C069034 bt/s */
L_0C069038: BLKS(0x0C069038u);
	r5 = 0x100u; UPD(0x0C06903Au, 2);  /* 0C069038 mov.w @(disp,pc),Rn */
	T = (s32)r2 > (s32)r5;  /* 0C06903A cmp/gt Rm,Rn */
	{ u32 c_ = !T; r1 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C069046u, 4); goto L_0C069046; } goto L_0C069040; }  /* 0C06903C bf/s */
L_0C069040: BLKS(0x0C069040u);
	r6 = 0x200u; UPD(0x0C069042u, 2);  /* 0C069040 mov.w @(disp,pc),Rn */
	r6 -= r2;  /* 0C069042 sub Rm,Rn */
	r1 = (u32)(s32)(s16)r6;  /* 0C069044 exts.w Rm,Rn */
	UPD(0x0C069046u, 2);
L_0C069046: BLKS(0x0C069046u);
	T = (s32)r1 >= (s32)r10;  /* 0C069046 cmp/ge Rm,Rn */
	if (T) { UPD(0x0C069070u, 4); goto L_0C069070; }  /* 0C069048 bt */
L_0C06904A: BLKS(0x0C06904Au);
	r10 = 0xB4u; UPD(0x0C06904Cu, 1);  /* 0C06904A mov.w @(disp,pc),Rn */
	IF(0x0C06904Cu); MACL = r9 * r10;  /* 0C06904C mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C069050u, 3);  /* 0C06904E mov.l @(disp,pc),Rn */
	r0 = 0x86u; UPD(0x0C069052u, 1);  /* 0C069050 mov.w @(disp,pc),Rn */
	IF(0x0C069052u); r8 = MACL;  /* 0C069052 sts macl,Rn */
	r7 += r8;  /* 0C069054 add Rm,Rn */
	IF(0x0C069056u); W16(r0 + r7, r3); UPD(0x0C069058u, 3);  /* 0C069056 mov.w Rm,@(r0,Rn) */
	r0 = 0x1u;  /* 0C069058 mov #imm,Rn */
	UPD(0x0C06905Au, 1);
L_0C06905A: BLKS(0x0C06905Au);
	r15 = r14;  /* 0C06905A mov Rm,Rn */
	IF(0x0C06905Cu); PR = R32(r15); r15 += 4; UPD(0x0C06905Eu, 2);  /* 0C06905C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C069060u, 1);  /* 0C06905E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C069062u, 1);  /* 0C069060 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C069064u, 1);  /* 0C069062 mov.l @Rm+,Rn */
	IF(0x0C069064u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C069064 rts */
L_0C069070: BLKS(0x0C069070u);
	r1 = 0x100u; UPD(0x0C069072u, 1);  /* 0C069070 mov.w @(disp,pc),Rn */
	T = (s32)r2 > (s32)r1;  /* 0C069072 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C069090u, 4); goto L_0C069090; }  /* 0C069074 bf */
L_0C069076: BLKS(0x0C069076u);
	r1 += 0xFFFFFFB4u;  /* 0C069076 add #imm,Rn */
	IF(0x0C069078u); MACL = r9 * r1;  /* 0C069078 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C06907Cu, 4);  /* 0C06907A mov.l @(disp,pc),Rn */
	IF(0x0C06907Cu); r9 = MACL;  /* 0C06907C sts macl,Rn */
	r2 = 0x86u; UPD(0x0C069080u, 2);  /* 0C06907E mov.w @(disp,pc),Rn */
	r9 += r0;  /* 0C069080 add Rm,Rn */
	r9 += r2;  /* 0C069082 add Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r9); UPD(0x0C069086u, 3);  /* 0C069084 mov.w @Rm,Rn */
	r10 += r4;  /* 0C069086 add Rm,Rn */
	W16(r9, r10); UPD(0x0C06908Au, 2);  /* 0C069088 mov.w Rm,@Rn */
L_0C06908A: BLKS(0x0C06908Au);
	{ r0 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C06905Au, 3); goto L_0C06905A; }  /* 0C06908A bra */
L_0C069090: BLKS(0x0C069090u);
	r8 = 0xB4u; UPD(0x0C069092u, 1);  /* 0C069090 mov.w @(disp,pc),Rn */
	IF(0x0C069092u); MACL = r9 * r8;  /* 0C069092 mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C069096u, 3);  /* 0C069094 mov.l @(disp,pc),Rn */
	IF(0x0C069096u); r3 = MACL;  /* 0C069096 sts macl,Rn */
	r6 = 0x86u; UPD(0x0C06909Au, 2);  /* 0C069098 mov.w @(disp,pc),Rn */
	r3 += r7;  /* 0C06909A add Rm,Rn */
	r3 += r6;  /* 0C06909C add Rm,Rn */
	r5 = (u32)(s32)(s16)R16(r3); UPD(0x0C0690A0u, 3);  /* 0C06909E mov.w @Rm,Rn */
	r5 -= r10;  /* 0C0690A0 sub Rm,Rn */
	{ W16(r3, r5); /* slot mov.w Rm,@Rn */ UPD(0x0C06908Au, 4); goto L_0C06908A; }  /* 0C0690A2 bra */
}

/* FUN_0c0690d0 */
void blk_f_0C0690D0(sh3_t *c)
{
	LOCALS;
L_0C0690D0: BLKS(0x0C0690D0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0690D2u, 1);  /* 0C0690D0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0690D4u, 1);  /* 0C0690D2 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C0690D4 exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0690D8u, 2);  /* 0C0690D6 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s16)r5;  /* 0C0690D8 exts.w Rm,Rn */
	r0 = 0xC0A8B50u; UPD(0x0C0690DCu, 2);  /* 0C0690DA mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C0690DC mov Rm,Rn */
	IF(0x0C0690DEu); r15 -= 4; W32(r15, PR); UPD(0x0C0690E0u, 2);  /* 0C0690DE sts.l pr,@-Rn */
	IF(0x0C0690E0u); { u32 t_ = r0; PR = 0x0C0690E4u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C0690E4u); }  /* 0C0690E0 jsr @Rn */
L_0C0690E4: BLKS(0x0C0690E4u);
	r0 = (u32)(s32)(s16)r0;  /* 0C0690E4 exts.w Rm,Rn */
	IF(0x0C0690E6u); T = (s32)r0 >= 0;  /* 0C0690E6 cmp/pz Rn */
	{ u32 c_ = !T; r1 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C06913Eu, 5); goto L_0C06913E; } goto L_0C0690EC; }  /* 0C0690E8 bf/s */
L_0C0690EC: BLKS(0x0C0690ECu);
	r5 = 0xB4u; UPD(0x0C0690EEu, 2);  /* 0C0690EC mov.w @(disp,pc),Rn */
	r7 = 0xFFFFFFFAu;  /* 0C0690EE mov #imm,Rn */
	IF(0x0C0690F0u); MACL = r0 * r5;  /* 0C0690F0 mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C0690F4u, 4);  /* 0C0690F2 mov.l @(disp,pc),Rn */
	IF(0x0C0690F4u); r0 = MACL;  /* 0C0690F4 sts macl,Rn */
	IF(0x0C0690F6u); MACL = r8 * r5;  /* 0C0690F6 mul.l Rm,Rn */
	r4 = 0x84u; UPD(0x0C0690FAu, 4);  /* 0C0690F8 mov.w @(disp,pc),Rn */
	r0 += r2;  /* 0C0690FA add Rm,Rn */
	r0 += r4;  /* 0C0690FC add Rm,Rn */
	IF(0x0C0690FEu); r3 = MACL;  /* 0C0690FE sts macl,Rn */
	r0 += 0x2u;  /* 0C069100 add #imm,Rn */
	r3 += r2;  /* 0C069102 add Rm,Rn */
	r6 = (u32)(s32)(s16)R16(r0); UPD(0x0C069106u, 6);  /* 0C069104 mov.w @Rm,Rn */
	r3 += r4;  /* 0C069106 add Rm,Rn */
	r3 += 0x2u;  /* 0C069108 add #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r3); UPD(0x0C06910Cu, 3);  /* 0C06910A mov.w @Rm,Rn */
	IF(0x0C06910Cu); ARG0(0x467Cu); { s32 s_ = (s32)r7; if (s_ >= 0) r6 <<= (s_ & 31); else if ((s_ & 31) == 0) r6 = (u32)((s32)r6 >> 31); else r6 = (u32)((s32)r6 >> ((~s_ & 31) + 1)); }  /* 0C06910C shad Rm,Rn */
	r2 = r0;  /* 0C06910E mov Rm,Rn */
	r0 = 0x1FFu; UPD(0x0C069112u, 3);  /* 0C069110 mov.w @(disp,pc),Rn */
	r2 -= r6;  /* 0C069112 sub Rm,Rn */
	r2 &= r0;  /* 0C069114 and Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C069116 tst Rm,Rn */
	{ u32 c_ = T; r1 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C06913Eu, 6); goto L_0C06913E; } goto L_0C06911C; }  /* 0C069118 bt/s */
L_0C06911C: BLKS(0x0C06911Cu);
	r3 = 0x100u; UPD(0x0C06911Eu, 2);  /* 0C06911C mov.w @(disp,pc),Rn */
	T = (s32)r2 > (s32)r3;  /* 0C06911E cmp/gt Rm,Rn */
	{ u32 c_ = !T; r1 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06912Au, 4); goto L_0C06912A; } goto L_0C069124; }  /* 0C069120 bf/s */
L_0C069124: BLKS(0x0C069124u);
	r4 = 0x200u; UPD(0x0C069126u, 2);  /* 0C069124 mov.w @(disp,pc),Rn */
	r4 -= r2;  /* 0C069126 sub Rm,Rn */
	r1 = (u32)(s32)(s16)r4;  /* 0C069128 exts.w Rm,Rn */
	UPD(0x0C06912Au, 2);
L_0C06912A: BLKS(0x0C06912Au);
	T = (s32)r1 >= (s32)r9;  /* 0C06912A cmp/ge Rm,Rn */
	{ u32 c_ = T; r1 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C069150u, 4); goto L_0C069150; } goto L_0C069130; }  /* 0C06912C bt/s */
L_0C069130: BLKS(0x0C069130u);
	r2 = 0xB4u; UPD(0x0C069132u, 2);  /* 0C069130 mov.w @(disp,pc),Rn */
	IF(0x0C069132u); MACL = r8 * r2;  /* 0C069132 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C069136u, 3);  /* 0C069134 mov.l @(disp,pc),Rn */
	IF(0x0C069136u); r8 = MACL;  /* 0C069136 sts macl,Rn */
	r0 = 0x86u; UPD(0x0C06913Au, 2);  /* 0C069138 mov.w @(disp,pc),Rn */
	r9 += r8;  /* 0C06913A add Rm,Rn */
	IF(0x0C06913Cu); W16(r0 + r9, r6); UPD(0x0C06913Eu, 2);  /* 0C06913C mov.w Rm,@(r0,Rn) */
L_0C06913E: BLKS(0x0C06913Eu);
	r0 = r1;  /* 0C06913E mov Rm,Rn */
	r15 = r14;  /* 0C069140 mov Rm,Rn */
	IF(0x0C069142u); PR = R32(r15); r15 += 4; UPD(0x0C069144u, 3);  /* 0C069142 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C069146u, 1);  /* 0C069144 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C069148u, 1);  /* 0C069146 mov.l @Rm+,Rn */
	IF(0x0C069148u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C069148 rts */
L_0C069150: BLKS(0x0C069150u);
	r1 = 0x100u; UPD(0x0C069152u, 1);  /* 0C069150 mov.w @(disp,pc),Rn */
	T = (s32)r2 > (s32)r1;  /* 0C069152 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C069170u, 4); goto L_0C069170; }  /* 0C069154 bf */
L_0C069156: BLKS(0x0C069156u);
	r1 += 0xFFFFFFB4u;  /* 0C069156 add #imm,Rn */
	IF(0x0C069158u); MACL = r8 * r1;  /* 0C069158 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C06915Cu, 4);  /* 0C06915A mov.l @(disp,pc),Rn */
	IF(0x0C06915Cu); r6 = MACL;  /* 0C06915C sts macl,Rn */
	r7 = 0x86u; UPD(0x0C069160u, 2);  /* 0C06915E mov.w @(disp,pc),Rn */
	r6 += r0;  /* 0C069160 add Rm,Rn */
	r6 += r7;  /* 0C069162 add Rm,Rn */
	r5 = (u32)(s32)(s16)R16(r6); UPD(0x0C069166u, 3);  /* 0C069164 mov.w @Rm,Rn */
	r9 += r5;  /* 0C069166 add Rm,Rn */
	W16(r6, r9); UPD(0x0C06916Au, 2);  /* 0C069168 mov.w Rm,@Rn */
L_0C06916A: BLKS(0x0C06916Au);
	{ r1 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C06913Eu, 3); goto L_0C06913E; }  /* 0C06916A bra */
L_0C069170: BLKS(0x0C069170u);
	r6 = 0xB4u; UPD(0x0C069172u, 1);  /* 0C069170 mov.w @(disp,pc),Rn */
	IF(0x0C069172u); MACL = r8 * r6;  /* 0C069172 mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C069176u, 3);  /* 0C069174 mov.l @(disp,pc),Rn */
	IF(0x0C069176u); r3 = MACL;  /* 0C069176 sts macl,Rn */
	r8 = 0x86u; UPD(0x0C06917Au, 2);  /* 0C069178 mov.w @(disp,pc),Rn */
	r3 += r2;  /* 0C06917A add Rm,Rn */
	r3 += r8;  /* 0C06917C add Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r3); UPD(0x0C069180u, 3);  /* 0C06917E mov.w @Rm,Rn */
	r4 -= r9;  /* 0C069180 sub Rm,Rn */
	{ W16(r3, r4); /* slot mov.w Rm,@Rn */ UPD(0x0C06916Au, 4); goto L_0C06916A; }  /* 0C069182 bra */
}

/* FUN_0c0691b0 */
void blk_f_0C0691B0(sh3_t *c)
{
	LOCALS;
L_0C0691B0: BLKS(0x0C0691B0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0691B2u, 1);  /* 0C0691B0 mov.l Rm,@-Rn */
	r4 = 0x0u;  /* 0C0691B2 mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0691B6u, 2);  /* 0C0691B4 mov.l Rm,@-Rn */
	r8 = 0x20u;  /* 0C0691B6 mov #imm,Rn */
	r0 = 0xC3C4020u; UPD(0x0C0691BAu, 2);  /* 0C0691B8 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0691BA mov Rm,Rn */
	r2 = 0xC28F610u; UPD(0x0C0691BEu, 2);  /* 0C0691BC mov.l @(disp,pc),Rn */
	W8(r0, r4); UPD(0x0C0691C0u, 1);  /* 0C0691BE mov.b Rm,@Rn */
	W8(r2, r4); UPD(0x0C0691C2u, 1);  /* 0C0691C0 mov.b Rm,@Rn */
	r0 = 0xC3C402Cu; UPD(0x0C0691C4u, 1);  /* 0C0691C2 mov.l @(disp,pc),Rn */
	r5 = 0xC228BF4u; UPD(0x0C0691C6u, 1);  /* 0C0691C4 mov.l @(disp,pc),Rn */
	r6 = 0xC22E014u; UPD(0x0C0691C8u, 1);  /* 0C0691C6 mov.l @(disp,pc),Rn */
	r2 = 0xC239458u; UPD(0x0C0691CAu, 1);  /* 0C0691C8 mov.l @(disp,pc),Rn */
	W8(r0, r4); UPD(0x0C0691CCu, 1);  /* 0C0691CA mov.b Rm,@Rn */
	W8(r5, r4); UPD(0x0C0691CEu, 1);  /* 0C0691CC mov.b Rm,@Rn */
	r3 = 0xC228FF8u; UPD(0x0C0691D0u, 1);  /* 0C0691CE mov.l @(disp,pc),Rn */
	r7 = 0xC2B037Bu; UPD(0x0C0691D2u, 1);  /* 0C0691D0 mov.l @(disp,pc),Rn */
	r1 = 0x400u; UPD(0x0C0691D4u, 1);  /* 0C0691D2 mov.w @(disp,pc),Rn */
	W8(r6, r4); UPD(0x0C0691D6u, 1);  /* 0C0691D4 mov.b Rm,@Rn */
	W8(r2, r4); UPD(0x0C0691D8u, 1);  /* 0C0691D6 mov.b Rm,@Rn */
	r6 = 0x5u;  /* 0C0691D8 mov #imm,Rn */
	r0 = 0xC29E93Cu; UPD(0x0C0691DCu, 2);  /* 0C0691DA mov.l @(disp,pc),Rn */
	r5 = 0xC3C847Au; UPD(0x0C0691DEu, 1);  /* 0C0691DC mov.l @(disp,pc),Rn */
	W8(r3, r4); UPD(0x0C0691E0u, 1);  /* 0C0691DE mov.b Rm,@Rn */
	W8(r7, r8); UPD(0x0C0691E2u, 1);  /* 0C0691E0 mov.b Rm,@Rn */
	r3 = 0x7u;  /* 0C0691E2 mov #imm,Rn */
	W16(r0, r1); UPD(0x0C0691E6u, 2);  /* 0C0691E4 mov.w Rm,@Rn */
	r7 = 0x0u;  /* 0C0691E6 mov #imm,Rn */
	r2 = 0xC286318u; UPD(0x0C0691EAu, 2);  /* 0C0691E8 mov.l @(disp,pc),Rn */
	r1 = 0x0u;  /* 0C0691EA mov #imm,Rn */
	W16(r5, r6); UPD(0x0C0691EEu, 2);  /* 0C0691EC mov.w Rm,@Rn */
L_0C0691EE: BLKS(0x0C0691EEu);
	W32(r2, r7); UPD(0x0C0691F0u, 1);  /* 0C0691EE mov.l Rm,@Rn */
	r1 += 0x1u;  /* 0C0691F0 add #imm,Rn */
	r1 = (u32)(s32)(s16)r1;  /* 0C0691F2 exts.w Rm,Rn */
	T = (s32)r1 > (s32)r3;  /* 0C0691F4 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r2 += 0x4Cu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0691EEu, 6); goto L_0C0691EE; } goto L_0C0691FA; }  /* 0C0691F6 bf/s */
L_0C0691FA: BLKS(0x0C0691FAu);
	r5 = 0xC2B016Cu; UPD(0x0C0691FCu, 2);  /* 0C0691FA mov.l @(disp,pc),Rn */
	r1 = 0x0u;  /* 0C0691FC mov #imm,Rn */
	r6 = 0xC22E04Cu; UPD(0x0C069200u, 2);  /* 0C0691FE mov.l @(disp,pc),Rn */
	r2 = 0x0u;  /* 0C069200 mov #imm,Rn */
	r7 = 0xFFu; UPD(0x0C069204u, 2);  /* 0C069202 mov.w @(disp,pc),Rn */
	r3 = 0x400u; UPD(0x0C069206u, 1);  /* 0C069204 mov.w @(disp,pc),Rn */
	IF(0x0C069206u); ;  /* 0C069206 nop */
	UPD(0x0C069208u, 1);
L_0C069208: BLKS(0x0C069208u);
	r0 = r2;  /* 0C069208 mov Rm,Rn */
	r1 += 0x1u;  /* 0C06920A add #imm,Rn */
	r1 = (u32)(s32)(s16)r1;  /* 0C06920C exts.w Rm,Rn */
	IF(0x0C06920Eu); W16(r0 + r6, r3); UPD(0x0C069210u, 4);  /* 0C06920E mov.w Rm,@(r0,Rn) */
	r2 += 0x2u;  /* 0C069210 add #imm,Rn */
	T = (s32)r1 > (s32)r7;  /* 0C069212 cmp/gt Rm,Rn */
	{ u32 c_ = !T; IF(0x0C069216u); W16(r0 + r5, r3); /* slot mov.w Rm,@(r0,Rn) */ if (c_) { UPD(0x0C069208u, 5); goto L_0C069208; } UPD(0x0C069218u, 1); goto L_0C069218; }  /* 0C069214 bf/s */
L_0C069218: BLKS(0x0C069218u);
	r2 = 0xC2A6D4Cu; UPD(0x0C06921Au, 1);  /* 0C069218 mov.l @(disp,pc),Rn */
	r1 = 0x0u;  /* 0C06921A mov #imm,Rn */
	r7 = 0x400u; UPD(0x0C06921Eu, 2);  /* 0C06921C mov.w @(disp,pc),Rn */
	r3 = 0x7u;  /* 0C06921E mov #imm,Rn */
	UPD(0x0C069220u, 1);
L_0C069220: BLKS(0x0C069220u);
	W16(r2, r7); UPD(0x0C069222u, 1);  /* 0C069220 mov.w Rm,@Rn */
	r1 += 0x1u;  /* 0C069222 add #imm,Rn */
	r1 = (u32)(s32)(s16)r1;  /* 0C069224 exts.w Rm,Rn */
	T = (s32)r1 > (s32)r3;  /* 0C069226 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r2 += 0x2u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C069220u, 6); goto L_0C069220; } goto L_0C06922C; }  /* 0C069228 bf/s */
L_0C06922C: BLKS(0x0C06922Cu);
	r7 = 0xC3C86DCu; UPD(0x0C06922Eu, 2);  /* 0C06922C mov.l @(disp,pc),Rn */
	r1 = 0x0u;  /* 0C06922E mov #imm,Rn */
	r3 = 0x0u;  /* 0C069230 mov #imm,Rn */
	r2 = 0x7u;  /* 0C069232 mov #imm,Rn */
	r0 = r7;  /* 0C069234 mov Rm,Rn */
	UPD(0x0C069236u, 4);
L_0C069236: BLKS(0x0C069236u);
	IF(0x0C069236u); W8(r0 + r1, r3); UPD(0x0C069238u, 1);  /* 0C069236 mov.b Rm,@(r0,Rn) */
	r1 += 0x1u;  /* 0C069238 add #imm,Rn */
	r1 = (u32)(s32)(s16)r1;  /* 0C06923A exts.w Rm,Rn */
	T = (s32)r1 > (s32)r2;  /* 0C06923C cmp/gt Rm,Rn */
	{ u32 c_ = !T; r8 = 0xFFFFFFFFu; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C069236u, 6); goto L_0C069236; } goto L_0C069242; }  /* 0C06923E bf/s */
L_0C069242: BLKS(0x0C069242u);
	r2 = 0xC3C53E4u; UPD(0x0C069244u, 2);  /* 0C069242 mov.l @(disp,pc),Rn */
	r6 = R32(r2); UPD(0x0C069246u, 1);  /* 0C069244 mov.l @Rm,Rn */
	r5 = 0x12345678u; UPD(0x0C069248u, 1);  /* 0C069246 mov.l @(disp,pc),Rn */
	r3 = 0xC3C4014u; UPD(0x0C06924Au, 1);  /* 0C069248 mov.l @(disp,pc),Rn */
	T = r6 == r5;  /* 0C06924A cmp/eq Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r3); UPD(0x0C06924Eu, 2);  /* 0C06924C mov.w @Rm,Rn */
	{ u32 t_ = 0u - r8, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r4 = r_; }  /* 0C06924E negc Rm,Rn */
	r1 = 0x368u; UPD(0x0C069252u, 2);  /* 0C069250 mov.w @(disp,pc),Rn */
	T = r0 == r1;  /* 0C069252 cmp/eq Rm,Rn */
	{ u32 t_ = 0u - r8, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r7 = r_; }  /* 0C069254 negc Rm,Rn */
	r4 |= r7;  /* 0C069256 or Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C069258 tst Rm,Rn */
	{ u32 c_ = T; r5 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C069300u, 7); goto L_0C069300; } goto L_0C06925E; }  /* 0C06925A bt/s */
L_0C06925E: BLKS(0x0C06925Eu);
	r8 = 0xC3BC3CCu; UPD(0x0C069260u, 2);  /* 0C06925E mov.l @(disp,pc),Rn */
	r5 = 0x0u;  /* 0C069260 mov #imm,Rn */
	r6 = 0x400u; UPD(0x0C069264u, 2);  /* 0C069262 mov.w @(disp,pc),Rn */
	r7 = 0xFu;  /* 0C069264 mov #imm,Rn */
	r4 = 0x0u;  /* 0C069266 mov #imm,Rn */
	r0 = 0x1Fu;  /* 0C069268 mov #imm,Rn */
	UPD(0x0C06926Au, 3);
L_0C06926A: BLKS(0x0C06926Au);
	r2 = r4;  /* 0C06926A mov Rm,Rn */
	r2 += r2;  /* 0C06926C add Rm,Rn */
	r3 = 0x0u;  /* 0C06926E mov #imm,Rn */
	r2 += r8;  /* 0C069270 add Rm,Rn */
	UPD(0x0C069272u, 4);
L_0C069272: BLKS(0x0C069272u);
	r1 = r3;  /* 0C069272 mov Rm,Rn */
	W16(r2, r6); UPD(0x0C069276u, 2);  /* 0C069274 mov.w Rm,@Rn */
	r1 += 0x1u;  /* 0C069276 add #imm,Rn */
	r3 = (u32)(s32)(s16)r1;  /* 0C069278 exts.w Rm,Rn */
	T = (s32)r3 > (s32)r7;  /* 0C06927A cmp/gt Rm,Rn */
	{ u32 c_ = !T; r2 += 0x2u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C069272u, 6); goto L_0C069272; } goto L_0C069280; }  /* 0C06927C bf/s */
L_0C069280: BLKS(0x0C069280u);
	r3 = r5;  /* 0C069280 mov Rm,Rn */
	r3 += 0x1u;  /* 0C069282 add #imm,Rn */
	r5 = (u32)(s32)(s16)r3;  /* 0C069284 exts.w Rm,Rn */
	T = (s32)r5 > (s32)r0;  /* 0C069286 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r4 += 0x10u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06926Au, 8); goto L_0C06926A; } goto L_0C06928C; }  /* 0C069288 bf/s */
L_0C06928C: BLKS(0x0C06928Cu);
	r5 = 0xC2A6944u; UPD(0x0C06928Eu, 2);  /* 0C06928C mov.l @(disp,pc),Rn */
	r1 = 0x0u;  /* 0C06928E mov #imm,Rn */
	r7 = 0xC23949Cu; UPD(0x0C069292u, 2);  /* 0C069290 mov.l @(disp,pc),Rn */
	r6 = 0x20u;  /* 0C069292 mov #imm,Rn */
	r2 = 0x3FFu; UPD(0x0C069296u, 2);  /* 0C069294 mov.w @(disp,pc),Rn */
	r3 = 0x10u;  /* 0C069296 mov #imm,Rn */
	UPD(0x0C069298u, 1);
L_0C069298: BLKS(0x0C069298u);
	r0 = r5;  /* 0C069298 mov Rm,Rn */
	IF(0x0C06929Au); W8(r0 + r1, r6); UPD(0x0C06929Cu, 2);  /* 0C06929A mov.b Rm,@(r0,Rn) */
	r0 = r7;  /* 0C06929C mov Rm,Rn */
	IF(0x0C06929Eu); W8(r0 + r1, r3); UPD(0x0C0692A0u, 2);  /* 0C06929E mov.b Rm,@(r0,Rn) */
	r1 += 0x1u;  /* 0C0692A0 add #imm,Rn */
	r1 = (u32)(s32)(s16)r1;  /* 0C0692A2 exts.w Rm,Rn */
	T = (s32)r1 > (s32)r2;  /* 0C0692A4 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C069298u, 6); goto L_0C069298; }  /* 0C0692A6 bf */
L_0C0692A8: BLKS(0x0C0692A8u);
	r1 = 0x12345678u; UPD(0x0C0692AAu, 1);  /* 0C0692A8 mov.l @(disp,pc),Rn */
	r8 = 0xC3C53E4u; UPD(0x0C0692ACu, 1);  /* 0C0692AA mov.l @(disp,pc),Rn */
	r7 = 0x368u; UPD(0x0C0692AEu, 1);  /* 0C0692AC mov.w @(disp,pc),Rn */
	r4 = 0xC3C4014u; UPD(0x0C0692B0u, 1);  /* 0C0692AE mov.l @(disp,pc),Rn */
	W32(r8, r1); UPD(0x0C0692B2u, 1);  /* 0C0692B0 mov.l Rm,@Rn */
	W16(r4, r7); UPD(0x0C0692B4u, 1);  /* 0C0692B2 mov.w Rm,@Rn */
L_0C0692B4: BLKS(0x0C0692B4u);
	r6 = 0x401u; UPD(0x0C0692B6u, 1);  /* 0C0692B4 mov.w @(disp,pc),Rn */
	r5 = 0xC3BC40Cu; UPD(0x0C0692B8u, 1);  /* 0C0692B6 mov.l @(disp,pc),Rn */
	W16(r5, r6); UPD(0x0C0692BAu, 1);  /* 0C0692B8 mov.w Rm,@Rn */
	r5 += 0xFFFFFFE0u;  /* 0C0692BA add #imm,Rn */
	W16(r5, r6); UPD(0x0C0692BEu, 2);  /* 0C0692BC mov.w Rm,@Rn */
	r5 += 0xFFFFFFE0u;  /* 0C0692BE add #imm,Rn */
	W16(r5, r6); UPD(0x0C0692C2u, 2);  /* 0C0692C0 mov.w Rm,@Rn */
	r0 = r5;  /* 0C0692C2 mov Rm,Rn */
	r0 += 0x2u;  /* 0C0692C4 add #imm,Rn */
	r4 = r5;  /* 0C0692C6 mov Rm,Rn */
	r5 += 0x42u;  /* 0C0692C8 add #imm,Rn */
	W16(r0, r6); UPD(0x0C0692CCu, 5);  /* 0C0692CA mov.w Rm,@Rn */
	r4 += 0x22u;  /* 0C0692CC add #imm,Rn */
	W16(r5, r6); UPD(0x0C0692D0u, 2);  /* 0C0692CE mov.w Rm,@Rn */
	r0 = 0xA0u; UPD(0x0C0692D2u, 1);  /* 0C0692D0 mov.w @(disp,pc),Rn */
	r5 += 0xFFFFFFBEu;  /* 0C0692D2 add #imm,Rn */
	IF(0x0C0692D4u); W16(r0 + r5, r6); UPD(0x0C0692D6u, 2);  /* 0C0692D4 mov.w Rm,@(r0,Rn) */
	r0 += 0xFFFFFFE0u;  /* 0C0692D6 add #imm,Rn */
	IF(0x0C0692D8u); W16(r0 + r5, r6); UPD(0x0C0692DAu, 2);  /* 0C0692D8 mov.w Rm,@(r0,Rn) */
	r5 += 0x60u;  /* 0C0692DA add #imm,Rn */
	W16(r5, r6); UPD(0x0C0692DEu, 2);  /* 0C0692DC mov.w Rm,@Rn */
	r0 += 0x22u;  /* 0C0692DE add #imm,Rn */
	r5 += 0xFFFFFFA0u;  /* 0C0692E0 add #imm,Rn */
	IF(0x0C0692E2u); W16(r0 + r5, r6); UPD(0x0C0692E4u, 3);  /* 0C0692E2 mov.w Rm,@(r0,Rn) */
	r0 += 0xFFFFFFE0u;  /* 0C0692E4 add #imm,Rn */
	IF(0x0C0692E6u); W16(r0 + r5, r6); UPD(0x0C0692E8u, 2);  /* 0C0692E6 mov.w Rm,@(r0,Rn) */
	r5 += 0x62u;  /* 0C0692E8 add #imm,Rn */
	W16(r4, r6); UPD(0x0C0692ECu, 2);  /* 0C0692EA mov.w Rm,@Rn */
	W16(r5, r6); UPD(0x0C0692EEu, 1);  /* 0C0692EC mov.w Rm,@Rn */
	r15 = r14;  /* 0C0692EE mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0692F2u, 2);  /* 0C0692F0 mov.l @Rm+,Rn */
	IF(0x0C0692F2u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0692F2 rts */
L_0C069300: BLKS(0x0C069300u);
	r6 = 0xC000u; UPD(0x0C069302u, 1);  /* 0C069300 mov.l @(disp,pc),Rn */
	r8 = 0xC3BC3CCu; UPD(0x0C069304u, 1);  /* 0C069302 mov.l @(disp,pc),Rn */
	r7 = 0xFu;  /* 0C069304 mov #imm,Rn */
	r0 = 0x400u; UPD(0x0C069308u, 2);  /* 0C069306 mov.w @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C069308 mov #imm,Rn */
	UPD(0x0C06930Au, 1);
L_0C06930A: BLKS(0x0C06930Au);
	r2 = r4;  /* 0C06930A mov Rm,Rn */
	r2 += r2;  /* 0C06930C add Rm,Rn */
	r3 = 0x0u;  /* 0C06930E mov #imm,Rn */
	r2 += r8;  /* 0C069310 add Rm,Rn */
	UPD(0x0C069312u, 4);
L_0C069312: BLKS(0x0C069312u);
	r1 = (u32)(s32)(s16)R16(r2); UPD(0x0C069314u, 1);  /* 0C069312 mov.w @Rm,Rn */
	T = (r1 & r6) == 0;  /* 0C069314 tst Rm,Rn */
	if (T) { UPD(0x0C06931Au, 4); goto L_0C06931A; }  /* 0C069316 bt */
L_0C069318: BLKS(0x0C069318u);
	W16(r2, r0); UPD(0x0C06931Au, 1);  /* 0C069318 mov.w Rm,@Rn */
L_0C06931A: BLKS(0x0C06931Au);
	r1 = r3;  /* 0C06931A mov Rm,Rn */
	r1 += 0x1u;  /* 0C06931C add #imm,Rn */
	r3 = (u32)(s32)(s16)r1;  /* 0C06931E exts.w Rm,Rn */
	T = (s32)r3 > (s32)r7;  /* 0C069320 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r2 += 0x2u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C069312u, 7); goto L_0C069312; } goto L_0C069326; }  /* 0C069322 bf/s */
L_0C069326: BLKS(0x0C069326u);
	r3 = r5;  /* 0C069326 mov Rm,Rn */
	r3 += 0x1u;  /* 0C069328 add #imm,Rn */
	r5 = (u32)(s32)(s16)r3;  /* 0C06932A exts.w Rm,Rn */
	r2 = 0x1Fu;  /* 0C06932C mov #imm,Rn */
	T = (s32)r5 > (s32)r2;  /* 0C06932E cmp/gt Rm,Rn */
	{ u32 c_ = !T; r4 += 0x10u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06930Au, 9); goto L_0C06930A; } goto L_0C069334; }  /* 0C069330 bf/s */
L_0C069334: BLKS(0x0C069334u);
	{ IF(0x0C069336u); ; /* slot nop */ UPD(0x0C0692B4u, 4); goto L_0C0692B4; }  /* 0C069334 bra */
}

/* FUN_0c0693a0 */
void blk_f_0C0693A0(sh3_t *c)
{
	LOCALS;
L_0C0693A0: BLKS(0x0C0693A0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0693A2u, 1);  /* 0C0693A0 mov.l Rm,@-Rn */
	r0 = 0x3FFu; UPD(0x0C0693A4u, 1);  /* 0C0693A2 mov.w @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0693A6u, 1);  /* 0C0693A4 mov.l Rm,@-Rn */
	T = (s32)r4 > (s32)r0;  /* 0C0693A6 cmp/gt Rm,Rn */
	r14 = r15;  /* 0C0693A8 mov Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0693E2u, 5); goto L_0C0693E2; } goto L_0C0693AE; }  /* 0C0693AA bt/s */
L_0C0693AE: BLKS(0x0C0693AEu);
	r7 = 0xC28EDFCu; UPD(0x0C0693B0u, 2);  /* 0C0693AE mov.l @(disp,pc),Rn */
	r6 = 0x0u;  /* 0C0693B0 mov #imm,Rn */
	r0 = 0x400u; UPD(0x0C0693B4u, 2);  /* 0C0693B2 mov.w @(disp,pc),Rn */
	r5 = 0x1Fu;  /* 0C0693B4 mov #imm,Rn */
	r8 = 0xC3BC3CCu; UPD(0x0C0693B8u, 2);  /* 0C0693B6 mov.l @(disp,pc),Rn */
	r2 = r6;  /* 0C0693B8 mov Rm,Rn */
	UPD(0x0C0693BAu, 1);
L_0C0693BA: BLKS(0x0C0693BAu);
	r2 += r2;  /* 0C0693BA add Rm,Rn */
	r3 = 0x0u;  /* 0C0693BC mov #imm,Rn */
	r2 += r8;  /* 0C0693BE add Rm,Rn */
	UPD(0x0C0693C0u, 3);
L_0C0693C0: BLKS(0x0C0693C0u);
	r1 = (u32)(s32)(s16)R16(r2); UPD(0x0C0693C2u, 1);  /* 0C0693C0 mov.w @Rm,Rn */
	T = r0 == r1;  /* 0C0693C2 cmp/eq Rm,Rn */
	{ u32 c_ = T; r2 += 0x20u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0693F0u, 4); goto L_0C0693F0; } UPD(0x0C0693C8u, 1); goto L_0C0693C8; }  /* 0C0693C4 bt/s */
L_0C0693C8: BLKS(0x0C0693C8u);
	r1 = r3;  /* 0C0693C8 mov Rm,Rn */
	r1 += 0x1u;  /* 0C0693CA add #imm,Rn */
	r3 = (u32)(s32)(s16)r1;  /* 0C0693CC exts.w Rm,Rn */
	T = (s32)r3 > (s32)r5;  /* 0C0693CE cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0693C0u, 7); goto L_0C0693C0; }  /* 0C0693D0 bf */
L_0C0693D2: BLKS(0x0C0693D2u);
	r3 = r6;  /* 0C0693D2 mov Rm,Rn */
	r3 += 0x1u;  /* 0C0693D4 add #imm,Rn */
	r6 = (u32)(s32)(s16)r3;  /* 0C0693D6 exts.w Rm,Rn */
	r2 = 0xFu;  /* 0C0693D8 mov #imm,Rn */
	T = (s32)r6 > (s32)r2;  /* 0C0693DA cmp/gt Rm,Rn */
	{ u32 c_ = !T; r2 = r6; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0693BAu, 8); goto L_0C0693BA; } goto L_0C0693E0; }  /* 0C0693DC bf/s */
L_0C0693E0: BLKS(0x0C0693E0u);
	r0 = 0x0u;  /* 0C0693E0 mov #imm,Rn */
	UPD(0x0C0693E2u, 2);
L_0C0693E2: BLKS(0x0C0693E2u);
	r15 = r14;  /* 0C0693E2 mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0693E6u, 2);  /* 0C0693E4 mov.l @Rm+,Rn */
	IF(0x0C0693E6u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0693E6 rts */
L_0C0693F0: BLKS(0x0C0693F0u);
	W16(r7, r3); UPD(0x0C0693F2u, 1);  /* 0C0693F0 mov.w Rm,@Rn */
	IF(0x0C0693F2u); r4 -= 1; T = r4 == 0;  /* 0C0693F2 dt Rn */
	r7 += 0x2u;  /* 0C0693F4 add #imm,Rn */
	W16(r7, r6); UPD(0x0C0693F8u, 3);  /* 0C0693F6 mov.w Rm,@Rn */
	{ u32 c_ = !T; r7 += 0x2u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0693C8u, 3); goto L_0C0693C8; } goto L_0C0693FC; }  /* 0C0693F8 bf/s */
L_0C0693FC: BLKS(0x0C0693FCu);
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C0693E2u, 4); goto L_0C0693E2; }  /* 0C0693FC bra */
}

/* FUN_0c069410 */
void blk_f_0C069410(sh3_t *c)
{
	LOCALS;
L_0C069410: BLKS(0x0C069410u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C069412u, 1);  /* 0C069410 mov.l Rm,@-Rn */
	r0 = 0x3FFu; UPD(0x0C069414u, 1);  /* 0C069412 mov.w @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C069416u, 1);  /* 0C069414 mov.l Rm,@-Rn */
	T = (s32)r4 > (s32)r0;  /* 0C069416 cmp/gt Rm,Rn */
	r7 = 0xC28EDFCu; UPD(0x0C06941Au, 2);  /* 0C069418 mov.l @(disp,pc),Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C069450u, 3); goto L_0C069450; } goto L_0C06941E; }  /* 0C06941A bt/s */
L_0C06941E: BLKS(0x0C06941Eu);
	r5 = 0x400u; UPD(0x0C069420u, 2);  /* 0C06941E mov.w @(disp,pc),Rn */
	r8 = 0x8u;  /* 0C069420 mov #imm,Rn */
	r6 = 0x1Fu;  /* 0C069422 mov #imm,Rn */
	r2 = r8;  /* 0C069424 mov Rm,Rn */
	UPD(0x0C069426u, 3);
L_0C069426: BLKS(0x0C069426u);
	r0 = 0xC3BC3CCu; UPD(0x0C069428u, 1);  /* 0C069426 mov.l @(disp,pc),Rn */
	r2 += r2;  /* 0C069428 add Rm,Rn */
	r3 = 0x0u;  /* 0C06942A mov #imm,Rn */
	r2 += r0;  /* 0C06942C add Rm,Rn */
	IF(0x0C06942Eu); ;  /* 0C06942E nop */
	UPD(0x0C069430u, 4);
L_0C069430: BLKS(0x0C069430u);
	r0 = (u32)(s32)(s16)R16(r2); UPD(0x0C069432u, 1);  /* 0C069430 mov.w @Rm,Rn */
	T = r5 == r0;  /* 0C069432 cmp/eq Rm,Rn */
	{ u32 c_ = T; r2 += 0x20u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C069460u, 4); goto L_0C069460; } UPD(0x0C069438u, 1); goto L_0C069438; }  /* 0C069434 bt/s */
L_0C069438: BLKS(0x0C069438u);
	r0 = r3;  /* 0C069438 mov Rm,Rn */
	r0 += 0x1u;  /* 0C06943A add #imm,Rn */
	r3 = (u32)(s32)(s16)r0;  /* 0C06943C exts.w Rm,Rn */
	T = (s32)r3 > (s32)r6;  /* 0C06943E cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C069430u, 7); goto L_0C069430; }  /* 0C069440 bf */
L_0C069442: BLKS(0x0C069442u);
	r3 = r8;  /* 0C069442 mov Rm,Rn */
	r3 += 0x1u;  /* 0C069444 add #imm,Rn */
	r8 = (u32)(s32)(s16)r3;  /* 0C069446 exts.w Rm,Rn */
	r2 = 0xFu;  /* 0C069448 mov #imm,Rn */
	T = (s32)r8 > (s32)r2;  /* 0C06944A cmp/gt Rm,Rn */
	{ u32 c_ = !T; r2 = r8; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C069426u, 8); goto L_0C069426; } UPD(0x0C069450u, 1); goto L_0C069450; }  /* 0C06944C bf/s */
L_0C069450: BLKS(0x0C069450u);
	r0 = 0x0u;  /* 0C069450 mov #imm,Rn */
	UPD(0x0C069452u, 1);
L_0C069452: BLKS(0x0C069452u);
	r15 = r14;  /* 0C069452 mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C069456u, 2);  /* 0C069454 mov.l @Rm+,Rn */
	IF(0x0C069456u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C069456 rts */
L_0C069460: BLKS(0x0C069460u);
	W16(r7, r3); UPD(0x0C069462u, 1);  /* 0C069460 mov.w Rm,@Rn */
	IF(0x0C069462u); r4 -= 1; T = r4 == 0;  /* 0C069462 dt Rn */
	r7 += 0x2u;  /* 0C069464 add #imm,Rn */
	W16(r7, r8); UPD(0x0C069468u, 3);  /* 0C069466 mov.w Rm,@Rn */
	r0 = 0x1u;  /* 0C069468 mov #imm,Rn */
	{ u32 c_ = !T; r7 += 0x2u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C069438u, 4); goto L_0C069438; } goto L_0C06946E; }  /* 0C06946A bf/s */
L_0C06946E: BLKS(0x0C06946Eu);
	{ IF(0x0C069470u); ; /* slot nop */ UPD(0x0C069452u, 4); goto L_0C069452; }  /* 0C06946E bra */
}

/* FUN_0c069480 */
void blk_f_0C069480(sh3_t *c)
{
	LOCALS;
L_0C069480: BLKS(0x0C069480u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C069482u, 1);  /* 0C069480 mov.l Rm,@-Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C069482 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C069486u, 2);  /* 0C069484 mov.l Rm,@-Rn */
	r8 = 0x0u;  /* 0C069486 mov #imm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C06948Au, 2);  /* 0C069488 mov.l Rm,@-Rn */
	r6 = 0xFu;  /* 0C06948A mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06948Eu, 2);  /* 0C06948C mov.l Rm,@-Rn */
	r5 = 0x0u;  /* 0C06948E mov #imm,Rn */
	r9 = 0xC3BC3CCu; UPD(0x0C069492u, 2);  /* 0C069490 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C069492 mov Rm,Rn */
	r7 = 0x3FFFu; UPD(0x0C069496u, 2);  /* 0C069494 mov.w @(disp,pc),Rn */
	r10 = 0x1Fu;  /* 0C069496 mov #imm,Rn */
	UPD(0x0C069498u, 1);
L_0C069498: BLKS(0x0C069498u);
	r2 = r5;  /* 0C069498 mov Rm,Rn */
	r2 += r2;  /* 0C06949A add Rm,Rn */
	r3 = 0x0u;  /* 0C06949C mov #imm,Rn */
	r2 += r9;  /* 0C06949E add Rm,Rn */
	UPD(0x0C0694A0u, 4);
L_0C0694A0: BLKS(0x0C0694A0u);
	{ u32 v_ = (u32)(s32)(s16)R16(r2); r2 += 2; r0 = v_; } UPD(0x0C0694A2u, 1);  /* 0C0694A0 mov.w @Rm+,Rn */
	r0 &= r7;  /* 0C0694A2 and Rm,Rn */
	T = r0 == r4;  /* 0C0694A4 cmp/eq Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0694F4u, 5); goto L_0C0694F4; } goto L_0C0694AA; }  /* 0C0694A6 bt/s */
L_0C0694AA: BLKS(0x0C0694AAu);
	r0 = r3;  /* 0C0694AA mov Rm,Rn */
	r0 += 0x1u;  /* 0C0694AC add #imm,Rn */
	r3 = (u32)(s32)(s16)r0;  /* 0C0694AE exts.w Rm,Rn */
	T = (s32)r3 > (s32)r6;  /* 0C0694B0 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0694A0u, 8); goto L_0C0694A0; }  /* 0C0694B2 bf */
L_0C0694B4: BLKS(0x0C0694B4u);
	r2 = r8;  /* 0C0694B4 mov Rm,Rn */
	r2 += 0x1u;  /* 0C0694B6 add #imm,Rn */
	r8 = (u32)(s32)(s16)r2;  /* 0C0694B8 exts.w Rm,Rn */
	T = (s32)r8 > (s32)r10;  /* 0C0694BA cmp/gt Rm,Rn */
	{ u32 c_ = !T; r5 += 0x10u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C069498u, 7); goto L_0C069498; } goto L_0C0694C0; }  /* 0C0694BC bf/s */
L_0C0694C0: BLKS(0x0C0694C0u);
	r9 = 0xC2B016Cu; UPD(0x0C0694C2u, 2);  /* 0C0694C0 mov.l @(disp,pc),Rn */
	r7 = 0x0u;  /* 0C0694C2 mov #imm,Rn */
	r8 = 0xFFu; UPD(0x0C0694C6u, 2);  /* 0C0694C4 mov.w @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C0694C6 mov #imm,Rn */
	r5 = 0xC22E04Cu; UPD(0x0C0694CAu, 2);  /* 0C0694C8 mov.l @(disp,pc),Rn */
	r6 = 0x3FFFu; UPD(0x0C0694CCu, 1);  /* 0C0694CA mov.w @(disp,pc),Rn */
L_0C0694CC: BLKS(0x0C0694CCu);
	r0 = r3;  /* 0C0694CC mov Rm,Rn */
	IF(0x0C0694CEu); r10 = (u32)(s32)(s16)R16(r0 + r9); UPD(0x0C0694D0u, 2);  /* 0C0694CE mov.w @(r0,Rm),Rn */
	IF(0x0C0694D0u); r2 = (u32)(s32)(s16)R16(r0 + r5); UPD(0x0C0694D2u, 1);  /* 0C0694D0 mov.w @(r0,Rm),Rn */
	r10 &= r6;  /* 0C0694D2 and Rm,Rn */
	T = r10 == r4;  /* 0C0694D4 cmp/eq Rm,Rn */
	IF(0x0C0694D6u); r10 = T;  /* 0C0694D6 movt Rn */
	r2 &= r6;  /* 0C0694D8 and Rm,Rn */
	T = r2 == r4;  /* 0C0694DA cmp/eq Rm,Rn */
	IF(0x0C0694DCu); r0 = T;  /* 0C0694DC movt Rn */
	r10 |= r0;  /* 0C0694DE or Rm,Rn */
	T = (r10 & r10) == 0;  /* 0C0694E0 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0694F4u, 11); goto L_0C0694F4; } goto L_0C0694E6; }  /* 0C0694E2 bf/s */
L_0C0694E6: BLKS(0x0C0694E6u);
	r0 = r7;  /* 0C0694E6 mov Rm,Rn */
	r0 += 0x1u;  /* 0C0694E8 add #imm,Rn */
	r7 = (u32)(s32)(s16)r0;  /* 0C0694EA exts.w Rm,Rn */
	T = (s32)r7 > (s32)r8;  /* 0C0694EC cmp/gt Rm,Rn */
	{ u32 c_ = !T; r3 += 0x2u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0694CCu, 8); goto L_0C0694CC; } goto L_0C0694F2; }  /* 0C0694EE bf/s */
L_0C0694F2: BLKS(0x0C0694F2u);
	r0 = 0x0u;  /* 0C0694F2 mov #imm,Rn */
	UPD(0x0C0694F4u, 2);
L_0C0694F4: BLKS(0x0C0694F4u);
	r15 = r14;  /* 0C0694F4 mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0694F8u, 2);  /* 0C0694F6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0694FAu, 1);  /* 0C0694F8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0694FCu, 1);  /* 0C0694FA mov.l @Rm+,Rn */
	IF(0x0C0694FCu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0694FC rts */
}

/* FUN_0c069510 */
void blk_f_0C069510(sh3_t *c)
{
	LOCALS;
L_0C069510: BLKS(0x0C069510u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C069512u, 1);  /* 0C069510 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C069514u, 1);  /* 0C069512 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C069516u, 1);  /* 0C069514 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C069518u, 1);  /* 0C069516 mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s16)r4;  /* 0C069518 exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06951Cu, 2);  /* 0C06951A mov.l Rm,@-Rn */
	IF(0x0C06951Cu); r10 <<= 2;  /* 0C06951C shll2 Rn */
	r0 = 0xC1DD458u; UPD(0x0C069520u, 2);  /* 0C06951E mov.l @(disp,pc),Rn */
	r10 += r10;  /* 0C069520 add Rm,Rn */
	IF(0x0C069522u); r15 -= 4; W32(r15, PR); UPD(0x0C069524u, 2);  /* 0C069522 sts.l pr,@-Rn */
	r0 += r10;  /* 0C069524 add Rm,Rn */
	r8 = R32(r0 + 0x4u); UPD(0x0C069528u, 2);  /* 0C069526 mov.l @(disp,Rm),Rn */
	r14 = r15;  /* 0C069528 mov Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r8); r8 += 2; r4 = v_; } UPD(0x0C06952Cu, 2);  /* 0C06952A mov.w @Rm+,Rn */
	T = (r4 & r4) == 0;  /* 0C06952C tst Rm,Rn */
	{ u32 c_ = T; r11 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C069572u, 4); goto L_0C069572; } goto L_0C069532; }  /* 0C06952E bt/s */
L_0C069532: BLKS(0x0C069532u);
	r0 = 0xC3BC3CCu; UPD(0x0C069534u, 2);  /* 0C069532 mov.l @(disp,pc),Rn */
	r5 = 0xFu;  /* 0C069534 mov #imm,Rn */
	r9 = 0x1Fu;  /* 0C069536 mov #imm,Rn */
	UPD(0x0C069538u, 2);
L_0C069538: BLKS(0x0C069538u);
	r6 = 0x0u;  /* 0C069538 mov #imm,Rn */
	r7 = 0x0u;  /* 0C06953A mov #imm,Rn */
	UPD(0x0C06953Cu, 2);
L_0C06953C: BLKS(0x0C06953Cu);
	r2 = r7;  /* 0C06953C mov Rm,Rn */
	r2 += r2;  /* 0C06953E add Rm,Rn */
	r3 = 0x0u;  /* 0C069540 mov #imm,Rn */
	r2 += r0;  /* 0C069542 add Rm,Rn */
	UPD(0x0C069544u, 4);
L_0C069544: BLKS(0x0C069544u);
	{ u32 v_ = (u32)(s32)(s16)R16(r2); r2 += 2; r1 = v_; } UPD(0x0C069546u, 1);  /* 0C069544 mov.w @Rm+,Rn */
	T = r1 == r4;  /* 0C069546 cmp/eq Rm,Rn */
	{ u32 c_ = T; r1 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C069564u, 4); goto L_0C069564; } goto L_0C06954C; }  /* 0C069548 bt/s */
L_0C06954C: BLKS(0x0C06954Cu);
	r1 = r3;  /* 0C06954C mov Rm,Rn */
	r1 += 0x1u;  /* 0C06954E add #imm,Rn */
	r3 = (u32)(s32)(s16)r1;  /* 0C069550 exts.w Rm,Rn */
	T = (s32)r3 > (s32)r5;  /* 0C069552 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C069544u, 8); goto L_0C069544; }  /* 0C069554 bf */
L_0C069556: BLKS(0x0C069556u);
	r2 = r6;  /* 0C069556 mov Rm,Rn */
	r2 += 0x1u;  /* 0C069558 add #imm,Rn */
	r6 = (u32)(s32)(s16)r2;  /* 0C06955A exts.w Rm,Rn */
	T = (s32)r6 > (s32)r9;  /* 0C06955C cmp/gt Rm,Rn */
	{ u32 c_ = !T; r7 += 0x10u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06953Cu, 7); goto L_0C06953C; } goto L_0C069562; }  /* 0C06955E bf/s */
L_0C069562: BLKS(0x0C069562u);
	r1 = 0x0u;  /* 0C069562 mov #imm,Rn */
	UPD(0x0C069564u, 2);
L_0C069564: BLKS(0x0C069564u);
	r3 = (u32)(s32)(s16)r1;  /* 0C069564 exts.w Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C069566 tst Rm,Rn */
	if (!T) { UPD(0x0C06956Cu, 5); goto L_0C06956C; }  /* 0C069568 bf */
L_0C06956A: BLKS(0x0C06956Au);
	r11 = 0x1u;  /* 0C06956A mov #imm,Rn */
	UPD(0x0C06956Cu, 1);
L_0C06956C: BLKS(0x0C06956Cu);
	{ u32 v_ = (u32)(s32)(s16)R16(r8); r8 += 2; r4 = v_; } UPD(0x0C06956Eu, 1);  /* 0C06956C mov.w @Rm+,Rn */
	T = (r4 & r4) == 0;  /* 0C06956E tst Rm,Rn */
	if (!T) { UPD(0x0C069538u, 4); goto L_0C069538; }  /* 0C069570 bf */
L_0C069572: BLKS(0x0C069572u);
	T = (r11 & r11) == 0;  /* 0C069572 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C069594u, 4); goto L_0C069594; } goto L_0C069578; }  /* 0C069574 bt/s */
L_0C069578: BLKS(0x0C069578u);
	r0 = 0xC1DD458u; UPD(0x0C06957Au, 2);  /* 0C069578 mov.l @(disp,pc),Rn */
	r10 += r0;  /* 0C06957A add Rm,Rn */
	r8 = R32(r10 + 0x4u); UPD(0x0C06957Eu, 2);  /* 0C06957C mov.l @(disp,Rm),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r8); r8 += 2; r4 = v_; } UPD(0x0C069580u, 1);  /* 0C06957E mov.w @Rm+,Rn */
	T = (r4 & r4) == 0;  /* 0C069580 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C069594u, 4); goto L_0C069594; } goto L_0C069586; }  /* 0C069582 bt/s */
L_0C069586: BLKS(0x0C069586u);
	r9 = 0xC0695B0u; UPD(0x0C069588u, 2);  /* 0C069586 mov.l @(disp,pc),Rn */
L_0C069588: BLKS(0x0C069588u);
	IF(0x0C069588u); { u32 t_ = r9; PR = 0x0C06958Cu; r5 = 0x20u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0695B0, 0x0C0695B0u, 0x0C06958Cu); }  /* 0C069588 jsr @Rn */
L_0C06958C: BLKS(0x0C06958Cu);
	{ u32 v_ = (u32)(s32)(s16)R16(r8); r8 += 2; r4 = v_; } UPD(0x0C06958Eu, 1);  /* 0C06958C mov.w @Rm+,Rn */
	T = (r4 & r4) == 0;  /* 0C06958E tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C069588u, 4); goto L_0C069588; } UPD(0x0C069594u, 1); goto L_0C069594; }  /* 0C069590 bf/s */
L_0C069594: BLKS(0x0C069594u);
	r15 = r14;  /* 0C069594 mov Rm,Rn */
	IF(0x0C069596u); PR = R32(r15); r15 += 4; UPD(0x0C069598u, 2);  /* 0C069596 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06959Au, 1);  /* 0C069598 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06959Cu, 1);  /* 0C06959A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C06959Eu, 1);  /* 0C06959C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0695A0u, 1);  /* 0C06959E mov.l @Rm+,Rn */
	IF(0x0C0695A0u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0695A0 rts */
}


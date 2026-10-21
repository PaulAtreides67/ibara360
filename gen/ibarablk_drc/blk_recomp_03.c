#include "recomp.h"
#include "blk_recomp_funcs.h"

/* FUN_0c0612d0 */
void blk_f_0C0612D0(sh3_t *c)
{
	LOCALS;
L_0C0612D0: BLKS(0x0C0612D0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0612D2u, 1);  /* 0C0612D0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0612D4u, 1);  /* 0C0612D2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0612D6u, 1);  /* 0C0612D4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0612D8u, 1);  /* 0C0612D6 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0612DAu, 1);  /* 0C0612D8 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0612DCu, 1);  /* 0C0612DA mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0612DEu, 1);  /* 0C0612DC mov.l Rm,@-Rn */
	r2 = 0xC3C4020u; UPD(0x0C0612E0u, 1);  /* 0C0612DE mov.l @(disp,pc),Rn */
	IF(0x0C0612E0u); r15 -= 4; W32(r15, PR); UPD(0x0C0612E2u, 1);  /* 0C0612E0 sts.l pr,@-Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C0612E4u, 1);  /* 0C0612E2 mov.b @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0612E4 tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C061302u, 4); goto L_0C061302; } goto L_0C0612EA; }  /* 0C0612E6 bt/s */
L_0C0612EA: BLKS(0x0C0612EAu);
	r3 = 0xC28F610u; UPD(0x0C0612ECu, 2);  /* 0C0612EA mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r3); UPD(0x0C0612EEu, 1);  /* 0C0612EC mov.b @Rm,Rn */
	T = r0 == 0x1u;  /* 0C0612EE cmp/eq #imm,r0 */
	if (T) { UPD(0x0C061302u, 4); goto L_0C061302; }  /* 0C0612F0 bt */
L_0C0612F2: BLKS(0x0C0612F2u);
	r4 = 0x1u;  /* 0C0612F2 mov #imm,Rn */
	T = (s32)r0 > (s32)r4;  /* 0C0612F4 cmp/gt Rm,Rn */
	{ u32 c_ = !T; T = r0 == 0x2u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C0612FEu, 5); goto L_0C0612FE; } goto L_0C0612FA; }  /* 0C0612F6 bf/s */
L_0C0612FA: BLKS(0x0C0612FAu);
	{ IF(0x0C0612FCu); ; /* slot nop */ UPD(0x0C061600u, 4); goto L_0C061600; }  /* 0C0612FA bra */
L_0C0612FE: BLKS(0x0C0612FEu);
	T = (r0 & r0) == 0;  /* 0C0612FE tst Rm,Rn */
	if (T) { UPD(0x0C061320u, 4); goto L_0C061320; }  /* 0C061300 bt */
L_0C061302: BLKS(0x0C061302u);
	r15 = r14;  /* 0C061302 mov Rm,Rn */
	IF(0x0C061304u); PR = R32(r15); r15 += 4; UPD(0x0C061306u, 2);  /* 0C061304 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C061308u, 1);  /* 0C061306 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C06130Au, 1);  /* 0C061308 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06130Cu, 1);  /* 0C06130A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06130Eu, 1);  /* 0C06130C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C061310u, 1);  /* 0C06130E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C061312u, 1);  /* 0C061310 mov.l @Rm+,Rn */
	IF(0x0C061312u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C061312 rts */
L_0C061320: BLKS(0x0C061320u);
	r5 = 0xC228FF8u; UPD(0x0C061322u, 1);  /* 0C061320 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r5); UPD(0x0C061324u, 1);  /* 0C061322 mov.b @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C061324 tst Rm,Rn */
	{ u32 c_ = T; r7 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C061380u, 4); goto L_0C061380; } goto L_0C06132A; }  /* 0C061326 bt/s */
L_0C06132A: BLKS(0x0C06132Au);
	r8 = 0xC2B016Cu; UPD(0x0C06132Cu, 2);  /* 0C06132A mov.l @(disp,pc),Rn */
	r4 = 0x3FFu; UPD(0x0C06132Eu, 1);  /* 0C06132C mov.w @(disp,pc),Rn */
	r9 = 0xC3BC3CCu; UPD(0x0C061330u, 1);  /* 0C06132E mov.l @(disp,pc),Rn */
	r5 = 0xFFu; UPD(0x0C061332u, 1);  /* 0C061330 mov.w @(disp,pc),Rn */
	r6 = 0x3FFFu; UPD(0x0C061334u, 1);  /* 0C061332 mov.w @(disp,pc),Rn */
L_0C061334: BLKS(0x0C061334u);
	r2 = r7;  /* 0C061334 mov Rm,Rn */
	r2 += r2;  /* 0C061336 add Rm,Rn */
	r3 = r2;  /* 0C061338 mov Rm,Rn */
	r3 += r8;  /* 0C06133A add Rm,Rn */
	r10 = (u32)(s32)(s16)R16(r3); UPD(0x0C06133Eu, 5);  /* 0C06133C mov.w @Rm,Rn */
	r10 &= r6;  /* 0C06133E and Rm,Rn */
	T = (s32)r10 > (s32)r4;  /* 0C061340 cmp/gt Rm,Rn */
	{ u32 c_ = T; r12 = r7; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06136Cu, 5); goto L_0C06136C; } goto L_0C061346; }  /* 0C061342 bt/s */
L_0C061346: BLKS(0x0C061346u);
	r0 = 0xFFFF8400u; UPD(0x0C061348u, 2);  /* 0C061346 mov.w @(disp,pc),Rn */
	W16(r3, r0); UPD(0x0C06134Au, 1);  /* 0C061348 mov.w Rm,@Rn */
	r11 = 0xC2289F4u; UPD(0x0C06134Cu, 1);  /* 0C06134A mov.l @(disp,pc),Rn */
	r0 = r2;  /* 0C06134C mov Rm,Rn */
	IF(0x0C06134Eu); r10 = (u32)(s32)(s16)R16(r0 + r11); UPD(0x0C061350u, 2);  /* 0C06134E mov.w @(r0,Rm),Rn */
	r3 = 0xFu;  /* 0C061350 mov #imm,Rn */
	r2 = 0xC23C8A0u; UPD(0x0C061354u, 2);  /* 0C061352 mov.l @(disp,pc),Rn */
	r13 = r10;  /* 0C061354 mov Rm,Rn */
	IF(0x0C061356u); r12 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C061358u, 2);  /* 0C061356 mov.w @(r0,Rm),Rn */
	IF(0x0C061358u); r13 <<= 2;  /* 0C061358 shll2 Rn */
	r13 += r13;  /* 0C06135A add Rm,Rn */
	r0 = r13 & 0xFF;  /* 0C06135C extu.b Rm,Rn */
	r12 &= r3;  /* 0C06135E and Rm,Rn */
	r0 += r0;  /* 0C061360 add Rm,Rn */
	r0 += r12;  /* 0C061362 add Rm,Rn */
	r11 = 0x400u; UPD(0x0C061366u, 7);  /* 0C061364 mov.w @(disp,pc),Rn */
	r0 += r0;  /* 0C061366 add Rm,Rn */
	IF(0x0C061368u); W16(r0 + r9, r11); UPD(0x0C06136Au, 2);  /* 0C061368 mov.w Rm,@(r0,Rn) */
	r12 = r7;  /* 0C06136A mov Rm,Rn */
	UPD(0x0C06136Cu, 1);
L_0C06136C: BLKS(0x0C06136Cu);
	r12 += 0x1u;  /* 0C06136C add #imm,Rn */
	r7 = (u32)(s32)(s16)r12;  /* 0C06136E exts.w Rm,Rn */
	T = (s32)r7 > (s32)r5;  /* 0C061370 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r2 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C061334u, 6); goto L_0C061334; } goto L_0C061376; }  /* 0C061372 bf/s */
L_0C061376: BLKS(0x0C061376u);
	r1 = 0xC228FF8u; UPD(0x0C061378u, 2);  /* 0C061376 mov.l @(disp,pc),Rn */
L_0C061378: BLKS(0x0C061378u);
	{ W8(r1, r2); /* slot mov.b Rm,@Rn */ UPD(0x0C061302u, 3); goto L_0C061302; }  /* 0C061378 bra */
L_0C061380: BLKS(0x0C061380u);
	r10 = 0xC0562D0u; UPD(0x0C061382u, 1);  /* 0C061380 mov.l @(disp,pc),Rn */
	IF(0x0C061382u); { u32 t_ = r10; PR = 0x0C061386u; r4 = 0x5u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0562D0, 0x0C0562D0u, 0x0C061386u); }  /* 0C061382 jsr @Rn */
L_0C061386: BLKS(0x0C061386u);
	r4 = 0xC3C4028u; UPD(0x0C061388u, 1);  /* 0C061386 mov.l @(disp,pc),Rn */
	r13 = R32(r4); UPD(0x0C06138Au, 1);  /* 0C061388 mov.l @Rm,Rn */
	r6 = 0xC2B036Cu; UPD(0x0C06138Cu, 1);  /* 0C06138A mov.l @(disp,pc),Rn */
	r0 -= r13;  /* 0C06138C sub Rm,Rn */
	W8(r6, r0); UPD(0x0C061390u, 2);  /* 0C06138E mov.b Rm,@Rn */
	r3 = 0xC2B016Cu; UPD(0x0C061392u, 1);  /* 0C061390 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s16)R16(r3); UPD(0x0C061394u, 1);  /* 0C061392 mov.w @Rm,Rn */
	r2 = 0x400u; UPD(0x0C061396u, 1);  /* 0C061394 mov.w @(disp,pc),Rn */
	r7 = r0 & 0xFFFF;  /* 0C061396 extu.w Rm,Rn */
	T = r7 > r2;  /* 0C061398 cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C0613EAu, 5); goto L_0C0613EA; }  /* 0C06139A bf */
L_0C06139C: BLKS(0x0C06139Cu);
	r4 = r3;  /* 0C06139C mov Rm,Rn */
	r8 = 0xFEu; UPD(0x0C0613A0u, 2);  /* 0C06139E mov.w @(disp,pc),Rn */
	r6 = 0xC2289F4u; UPD(0x0C0613A2u, 1);  /* 0C0613A0 mov.l @(disp,pc),Rn */
	r10 = r3;  /* 0C0613A2 mov Rm,Rn */
	r5 = 0xC23C8A0u; UPD(0x0C0613A6u, 2);  /* 0C0613A4 mov.l @(disp,pc),Rn */
	r12 = r2;  /* 0C0613A6 mov Rm,Rn */
	r11 = 0xC2B036Au; UPD(0x0C0613AAu, 2);  /* 0C0613A8 mov.l @(disp,pc),Rn */
	r9 = r2;  /* 0C0613AA mov Rm,Rn */
	r7 = 0xC2287D8u; UPD(0x0C0613AEu, 2);  /* 0C0613AC mov.l @(disp,pc),Rn */
L_0C0613AE: BLKS(0x0C0613AEu);
	r13 = 0x0u;  /* 0C0613AE mov #imm,Rn */
	UPD(0x0C0613B0u, 1);
L_0C0613B0: BLKS(0x0C0613B0u);
	r0 = r13;  /* 0C0613B0 mov Rm,Rn */
	r0 += r0;  /* 0C0613B2 add Rm,Rn */
	r3 = r0;  /* 0C0613B4 mov Rm,Rn */
	r3 += r4;  /* 0C0613B6 add Rm,Rn */
	r3 += 0x2u;  /* 0C0613B8 add #imm,Rn */
	r1 = (u32)(s32)(s16)R16(r3); UPD(0x0C0613BCu, 6);  /* 0C0613BA mov.w @Rm,Rn */
	r13 += 0x1u;  /* 0C0613BC add #imm,Rn */
	{ u32 v_ = r1; r3 -= 2; W16(r3, v_); } UPD(0x0C0613C0u, 2);  /* 0C0613BE mov.w Rm,@-Rn */
	T = r13 > r8;  /* 0C0613C0 cmp/hi Rm,Rn */
	r3 = r0;  /* 0C0613C2 mov Rm,Rn */
	r3 += r6;  /* 0C0613C4 add Rm,Rn */
	r3 += 0x2u;  /* 0C0613C6 add #imm,Rn */
	r1 = (u32)(s32)(s16)R16(r3); UPD(0x0C0613CAu, 5);  /* 0C0613C8 mov.w @Rm,Rn */
	{ u32 v_ = r1; r3 -= 2; W16(r3, v_); } UPD(0x0C0613CCu, 1);  /* 0C0613CA mov.w Rm,@-Rn */
	r3 = r0;  /* 0C0613CC mov Rm,Rn */
	r3 += r5;  /* 0C0613CE add Rm,Rn */
	r3 += 0x2u;  /* 0C0613D0 add #imm,Rn */
	r1 = (u32)(s32)(s16)R16(r3); UPD(0x0C0613D4u, 4);  /* 0C0613D2 mov.w @Rm,Rn */
	r0 += r7;  /* 0C0613D4 add Rm,Rn */
	{ u32 v_ = r1; r3 -= 2; W16(r3, v_); } UPD(0x0C0613D8u, 2);  /* 0C0613D6 mov.w Rm,@-Rn */
	r0 += 0x2u;  /* 0C0613D8 add #imm,Rn */
	r3 = (u32)(s32)(s16)R16(r0); UPD(0x0C0613DCu, 2);  /* 0C0613DA mov.w @Rm,Rn */
	{ u32 c_ = !T; { u32 v_ = r3; r0 -= 2; W16(r0, v_); } /* slot mov.w Rm,@-Rn */ if (c_) { UPD(0x0C0613B0u, 3); goto L_0C0613B0; } UPD(0x0C0613E0u, 1); goto L_0C0613E0; }  /* 0C0613DC bf/s */
L_0C0613E0: BLKS(0x0C0613E0u);
	r13 = (u32)(s32)(s16)R16(r10); UPD(0x0C0613E2u, 1);  /* 0C0613E0 mov.w @Rm,Rn */
	r2 = r13 & 0xFFFF;  /* 0C0613E2 extu.w Rm,Rn */
	T = r2 > r9;  /* 0C0613E4 cmp/hi Rm,Rn */
	{ u32 c_ = T; W16(r11, r12); /* slot mov.w Rm,@Rn */ if (c_) { UPD(0x0C0613AEu, 5); goto L_0C0613AE; } UPD(0x0C0613EAu, 1); goto L_0C0613EA; }  /* 0C0613E6 bt/s */
L_0C0613EA: BLKS(0x0C0613EAu);
	r3 = 0xC22E04Cu; UPD(0x0C0613ECu, 1);  /* 0C0613EA mov.l @(disp,pc),Rn */
	r12 = (u32)(s32)(s16)R16(r3); UPD(0x0C0613EEu, 1);  /* 0C0613EC mov.w @Rm,Rn */
	r2 = 0x400u; UPD(0x0C0613F0u, 1);  /* 0C0613EE mov.w @(disp,pc),Rn */
	r11 = r12 & 0xFFFF;  /* 0C0613F0 extu.w Rm,Rn */
	T = r11 > r2;  /* 0C0613F2 cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C061444u, 5); goto L_0C061444; }  /* 0C0613F4 bf */
L_0C0613F6: BLKS(0x0C0613F6u);
	r4 = r3;  /* 0C0613F6 mov Rm,Rn */
	r8 = 0xFEu; UPD(0x0C0613FAu, 2);  /* 0C0613F8 mov.w @(disp,pc),Rn */
	r6 = 0xC29D73Cu; UPD(0x0C0613FCu, 1);  /* 0C0613FA mov.l @(disp,pc),Rn */
	r10 = r3;  /* 0C0613FC mov Rm,Rn */
	r5 = 0xC23DEA6u; UPD(0x0C061400u, 2);  /* 0C0613FE mov.l @(disp,pc),Rn */
	r12 = r2;  /* 0C061400 mov Rm,Rn */
	r11 = 0xC22E24Au; UPD(0x0C061404u, 2);  /* 0C061402 mov.l @(disp,pc),Rn */
	r9 = r2;  /* 0C061404 mov Rm,Rn */
	r7 = 0xC3C848Eu; UPD(0x0C061408u, 2);  /* 0C061406 mov.l @(disp,pc),Rn */
L_0C061408: BLKS(0x0C061408u);
	r13 = 0x0u;  /* 0C061408 mov #imm,Rn */
	UPD(0x0C06140Au, 1);
L_0C06140A: BLKS(0x0C06140Au);
	r0 = r13;  /* 0C06140A mov Rm,Rn */
	r0 += r0;  /* 0C06140C add Rm,Rn */
	r3 = r0;  /* 0C06140E mov Rm,Rn */
	r3 += r4;  /* 0C061410 add Rm,Rn */
	r3 += 0x2u;  /* 0C061412 add #imm,Rn */
	r1 = (u32)(s32)(s16)R16(r3); UPD(0x0C061416u, 6);  /* 0C061414 mov.w @Rm,Rn */
	r13 += 0x1u;  /* 0C061416 add #imm,Rn */
	{ u32 v_ = r1; r3 -= 2; W16(r3, v_); } UPD(0x0C06141Au, 2);  /* 0C061418 mov.w Rm,@-Rn */
	T = r13 > r8;  /* 0C06141A cmp/hi Rm,Rn */
	r3 = r0;  /* 0C06141C mov Rm,Rn */
	r3 += r6;  /* 0C06141E add Rm,Rn */
	r3 += 0x2u;  /* 0C061420 add #imm,Rn */
	r1 = (u32)(s32)(s16)R16(r3); UPD(0x0C061424u, 5);  /* 0C061422 mov.w @Rm,Rn */
	{ u32 v_ = r1; r3 -= 2; W16(r3, v_); } UPD(0x0C061426u, 1);  /* 0C061424 mov.w Rm,@-Rn */
	r3 = r0;  /* 0C061426 mov Rm,Rn */
	r3 += r5;  /* 0C061428 add Rm,Rn */
	r3 += 0x2u;  /* 0C06142A add #imm,Rn */
	r1 = (u32)(s32)(s16)R16(r3); UPD(0x0C06142Eu, 4);  /* 0C06142C mov.w @Rm,Rn */
	r0 += r7;  /* 0C06142E add Rm,Rn */
	{ u32 v_ = r1; r3 -= 2; W16(r3, v_); } UPD(0x0C061432u, 2);  /* 0C061430 mov.w Rm,@-Rn */
	r0 += 0x2u;  /* 0C061432 add #imm,Rn */
	r3 = (u32)(s32)(s16)R16(r0); UPD(0x0C061436u, 2);  /* 0C061434 mov.w @Rm,Rn */
	{ u32 c_ = !T; { u32 v_ = r3; r0 -= 2; W16(r0, v_); } /* slot mov.w Rm,@-Rn */ if (c_) { UPD(0x0C06140Au, 3); goto L_0C06140A; } UPD(0x0C06143Au, 1); goto L_0C06143A; }  /* 0C061436 bf/s */
L_0C06143A: BLKS(0x0C06143Au);
	r13 = (u32)(s32)(s16)R16(r10); UPD(0x0C06143Cu, 1);  /* 0C06143A mov.w @Rm,Rn */
	r2 = r13 & 0xFFFF;  /* 0C06143C extu.w Rm,Rn */
	T = r2 > r9;  /* 0C06143E cmp/hi Rm,Rn */
	{ u32 c_ = T; W16(r11, r12); /* slot mov.w Rm,@Rn */ if (c_) { UPD(0x0C061408u, 5); goto L_0C061408; } UPD(0x0C061444u, 1); goto L_0C061444; }  /* 0C061440 bt/s */
L_0C061444: BLKS(0x0C061444u);
	r9 = 0xC22E04Cu; UPD(0x0C061446u, 1);  /* 0C061444 mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s16)R16(r9); UPD(0x0C061448u, 1);  /* 0C061446 mov.w @Rm,Rn */
	r8 = 0x400u; UPD(0x0C06144Au, 1);  /* 0C061448 mov.w @(disp,pc),Rn */
	r3 = r2 & 0xFFFF;  /* 0C06144A extu.w Rm,Rn */
	T = r3 == r8;  /* 0C06144C cmp/eq Rm,Rn */
	if (!T) { UPD(0x0C061454u, 5); goto L_0C061454; }  /* 0C06144E bf */
L_0C061450: BLKS(0x0C061450u);
	{ IF(0x0C061452u); ; /* slot nop */ UPD(0x0C061570u, 3); goto L_0C061570; }  /* 0C061450 bra */
L_0C061454: BLKS(0x0C061454u);
	r6 = 0xC3C848Eu; UPD(0x0C061456u, 1);  /* 0C061454 mov.l @(disp,pc),Rn */
	r3 = 0xC29D73Cu; UPD(0x0C061458u, 1);  /* 0C061456 mov.l @(disp,pc),Rn */
	r11 = 0xC23DEA6u; UPD(0x0C06145Au, 1);  /* 0C061458 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s16)R16(r3); UPD(0x0C06145Cu, 1);  /* 0C06145A mov.w @Rm,Rn */
	r7 = (u32)(s32)(s16)R16(r6); UPD(0x0C06145Eu, 1);  /* 0C06145C mov.w @Rm,Rn */
	r13 = 0xC29E93Cu; UPD(0x0C061460u, 1);  /* 0C06145E mov.l @(disp,pc),Rn */
	r12 = 0xC22E258u; UPD(0x0C061462u, 1);  /* 0C061460 mov.l @(disp,pc),Rn */
	r10 = (u32)(s32)(s16)R16(r11); UPD(0x0C061464u, 1);  /* 0C061462 mov.w @Rm,Rn */
	r4 = 0xC3C5438u; UPD(0x0C061466u, 1);  /* 0C061464 mov.l @(disp,pc),Rn */
	r5 = 0xC3C8478u; UPD(0x0C061468u, 1);  /* 0C061466 mov.l @(disp,pc),Rn */
	W16(r13, r2); UPD(0x0C06146Au, 1);  /* 0C061468 mov.w Rm,@Rn */
	W16(r12, r0); UPD(0x0C06146Cu, 1);  /* 0C06146A mov.w Rm,@Rn */
	r2 = 0x7u;  /* 0C06146C mov #imm,Rn */
	r6 = 0xC3C86DCu; UPD(0x0C061470u, 2);  /* 0C06146E mov.l @(disp,pc),Rn */
	r0 = 0x0u;  /* 0C061470 mov #imm,Rn */
	W16(r4, r10); UPD(0x0C061474u, 2);  /* 0C061472 mov.w Rm,@Rn */
	W16(r5, r7); UPD(0x0C061476u, 1);  /* 0C061474 mov.w Rm,@Rn */
L_0C061476: BLKS(0x0C061476u);
	IF(0x0C061476u); r8 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C061478u, 1);  /* 0C061476 mov.b @(r0,Rm),Rn */
	r7 = r8 & 0xFF;  /* 0C061478 extu.b Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C06147A tst Rm,Rn */
	{ u32 c_ = T; r9 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0614A0u, 5); goto L_0C0614A0; } goto L_0C061480; }  /* 0C06147C bt/s */
L_0C061480: BLKS(0x0C061480u);
	r9 += 0x1u;  /* 0C061480 add #imm,Rn */
	r0 = (u32)(s32)(s16)r9;  /* 0C061482 exts.w Rm,Rn */
	T = (s32)r0 > (s32)r2;  /* 0C061484 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C061476u, 7); goto L_0C061476; }  /* 0C061486 bf */
L_0C061488: BLKS(0x0C061488u);
	r1 = 0x1u;  /* 0C061488 mov #imm,Rn */
	UPD(0x0C06148Au, 1);
L_0C06148A: BLKS(0x0C06148Au);
	r2 = (u32)(s32)(s16)r1;  /* 0C06148A exts.w Rm,Rn */
	r1 = 0xC22E04Cu; UPD(0x0C06148Eu, 2);  /* 0C06148C mov.l @(disp,pc),Rn */
	T = (r2 & r2) == 0;  /* 0C06148E tst Rm,Rn */
	if (!T) { UPD(0x0C06149Au, 4); goto L_0C06149A; }  /* 0C061490 bf */
L_0C061492: BLKS(0x0C061492u);
	r6 = (u32)(s32)(s16)R16(r1); UPD(0x0C061494u, 1);  /* 0C061492 mov.w @Rm,Rn */
L_0C061494: BLKS(0x0C061494u);
	r11 = 0xFFFF8000u; UPD(0x0C061496u, 1);  /* 0C061494 mov.w @(disp,pc),Rn */
	r6 |= r11;  /* 0C061496 or Rm,Rn */
	W16(r1, r6); UPD(0x0C06149Au, 2);  /* 0C061498 mov.w Rm,@Rn */
L_0C06149A: BLKS(0x0C06149Au);
	{ IF(0x0C06149Cu); ; /* slot nop */ UPD(0x0C061302u, 3); goto L_0C061302; }  /* 0C06149A bra */
L_0C0614A0: BLKS(0x0C0614A0u);
	r5 = 0x20014u; UPD(0x0C0614A2u, 1);  /* 0C0614A0 mov.l @(disp,pc),Rn */
	r11 = 0x1u;  /* 0C0614A2 mov #imm,Rn */
	IF(0x0C0614A4u); MACL = r0 * r5;  /* 0C0614A4 mul.l Rm,Rn */
	r3 = 0xC28F610u; UPD(0x0C0614A8u, 4);  /* 0C0614A6 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0614A8 add #imm,Rn */
	IF(0x0C0614AAu); W8(r0 + r6, r11); UPD(0x0C0614ACu, 2);  /* 0C0614AA mov.b Rm,@(r0,Rn) */
	IF(0x0C0614ACu); r5 = MACL;  /* 0C0614AC sts macl,Rn */
	r9 = 0xC2B1A5Cu; UPD(0x0C0614B0u, 2);  /* 0C0614AE mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s8)R8(r3); UPD(0x0C0614B2u, 1);  /* 0C0614B0 mov.b @Rm,Rn */
	r5 += r9;  /* 0C0614B2 add Rm,Rn */
	r8 = 0xC2B0804u; UPD(0x0C0614B6u, 2);  /* 0C0614B4 mov.l @(disp,pc),Rn */
	r2 += 0x1u;  /* 0C0614B6 add #imm,Rn */
	r4 = 0xC29E93Cu; UPD(0x0C0614BAu, 2);  /* 0C0614B8 mov.l @(disp,pc),Rn */
	r6 = 0xC2B037Bu; UPD(0x0C0614BCu, 1);  /* 0C0614BA mov.l @(disp,pc),Rn */
	r12 = 0xC29CF85u; UPD(0x0C0614BEu, 1);  /* 0C0614BC mov.l @(disp,pc),Rn */
	r10 = 0xC228BF4u; UPD(0x0C0614C0u, 1);  /* 0C0614BE mov.l @(disp,pc),Rn */
	W32(r8, r5); UPD(0x0C0614C2u, 1);  /* 0C0614C0 mov.l Rm,@Rn */
	r13 = (u32)(s32)(s16)R16(r4); UPD(0x0C0614C4u, 1);  /* 0C0614C2 mov.w @Rm,Rn */
	r9 = (u32)(s32)(s8)R8(r6); UPD(0x0C0614C6u, 1);  /* 0C0614C4 mov.b @Rm,Rn */
	r4 = r13 & 0xFFFF;  /* 0C0614C6 extu.w Rm,Rn */
	W8(r12, r0); UPD(0x0C0614CAu, 2);  /* 0C0614C8 mov.b Rm,@Rn */
	W8(r3, r2); UPD(0x0C0614CCu, 1);  /* 0C0614CA mov.b Rm,@Rn */
	W8(r10, r11); UPD(0x0C0614CEu, 1);  /* 0C0614CC mov.b Rm,@Rn */
	r8 = 0xC0C2E50u; UPD(0x0C0614D0u, 1);  /* 0C0614CE mov.l @(disp,pc),Rn */
	W32(r15, r7); UPD(0x0C0614D2u, 1);  /* 0C0614D0 mov.l Rm,@Rn */
	r7 = 0xC0627B0u; UPD(0x0C0614D4u, 1);  /* 0C0614D2 mov.l @(disp,pc),Rn */
	IF(0x0C0614D4u); { u32 t_ = r8; PR = 0x0C0614D8u; r6 = r9 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2E50, 0x0C0C2E50u, 0x0C0614D8u); }  /* 0C0614D4 jsr @Rn */
L_0C0614D8: BLKS(0x0C0614D8u);
	r15 += 0x4u;  /* 0C0614D8 add #imm,Rn */
	{ r1 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C06148Au, 4); goto L_0C06148A; }  /* 0C0614DA bra */
L_0C061570: BLKS(0x0C061570u);
	r7 = 0xC2B016Cu; UPD(0x0C061572u, 1);  /* 0C061570 mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s16)R16(r7); UPD(0x0C061574u, 1);  /* 0C061572 mov.w @Rm,Rn */
	r8 = r2 & 0xFFFF;  /* 0C061574 extu.w Rm,Rn */
	T = r8 == r3;  /* 0C061576 cmp/eq Rm,Rn */
	if (T) { UPD(0x0C06149Au, 5); goto L_0C06149A; }  /* 0C061578 bt */
L_0C06157A: BLKS(0x0C06157Au);
	r10 = 0xC29E93Cu; UPD(0x0C06157Cu, 1);  /* 0C06157A mov.l @(disp,pc),Rn */
	W16(r10, r2); UPD(0x0C06157Eu, 1);  /* 0C06157C mov.w Rm,@Rn */
	r0 = 0xC23C8A0u; UPD(0x0C061580u, 1);  /* 0C06157E mov.l @(disp,pc),Rn */
	r2 = 0xC2289F4u; UPD(0x0C061582u, 1);  /* 0C061580 mov.l @(disp,pc),Rn */
	r4 = 0xC2287D8u; UPD(0x0C061584u, 1);  /* 0C061582 mov.l @(disp,pc),Rn */
	r9 = (u32)(s32)(s16)R16(r2); UPD(0x0C061586u, 1);  /* 0C061584 mov.w @Rm,Rn */
	r13 = (u32)(s32)(s16)R16(r0); UPD(0x0C061588u, 1);  /* 0C061586 mov.w @Rm,Rn */
	r2 = 0x7u;  /* 0C061588 mov #imm,Rn */
	r3 = 0xC22E258u; UPD(0x0C06158Cu, 2);  /* 0C06158A mov.l @(disp,pc),Rn */
	r0 = 0x0u;  /* 0C06158C mov #imm,Rn */
	r12 = 0xC3C5438u; UPD(0x0C061590u, 2);  /* 0C06158E mov.l @(disp,pc),Rn */
	r11 = (u32)(s32)(s16)R16(r4); UPD(0x0C061592u, 1);  /* 0C061590 mov.w @Rm,Rn */
	r6 = 0xC3C8478u; UPD(0x0C061594u, 1);  /* 0C061592 mov.l @(disp,pc),Rn */
	r7 = 0xC3C86DCu; UPD(0x0C061596u, 1);  /* 0C061594 mov.l @(disp,pc),Rn */
	W16(r3, r9); UPD(0x0C061598u, 1);  /* 0C061596 mov.w Rm,@Rn */
	W16(r12, r13); UPD(0x0C06159Au, 1);  /* 0C061598 mov.w Rm,@Rn */
	W16(r6, r11); UPD(0x0C06159Cu, 1);  /* 0C06159A mov.w Rm,@Rn */
L_0C06159C: BLKS(0x0C06159Cu);
	IF(0x0C06159Cu); r5 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C06159Eu, 1);  /* 0C06159C mov.b @(r0,Rm),Rn */
	r8 = r5 & 0xFF;  /* 0C06159E extu.b Rm,Rn */
	T = (r8 & r8) == 0;  /* 0C0615A0 tst Rm,Rn */
	if (T) { UPD(0x0C0615C0u, 5); goto L_0C0615C0; }  /* 0C0615A2 bt */
L_0C0615A4: BLKS(0x0C0615A4u);
	r8 = r0;  /* 0C0615A4 mov Rm,Rn */
	r8 += 0x1u;  /* 0C0615A6 add #imm,Rn */
	r0 = (u32)(s32)(s16)r8;  /* 0C0615A8 exts.w Rm,Rn */
	T = (s32)r0 > (s32)r2;  /* 0C0615AA cmp/gt Rm,Rn */
	{ u32 c_ = !T; r1 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C06159Cu, 7); goto L_0C06159C; } UPD(0x0C0615B0u, 1); goto L_0C0615B0; }  /* 0C0615AC bf/s */
L_0C0615B0: BLKS(0x0C0615B0u);
	r7 = (u32)(s32)(s16)r1;  /* 0C0615B0 exts.w Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C0615B2 tst Rm,Rn */
	if (!T) { UPD(0x0C061620u, 5); goto L_0C061620; }  /* 0C0615B4 bf */
L_0C0615B6: BLKS(0x0C0615B6u);
	r1 = 0xC2B016Cu; UPD(0x0C0615B8u, 1);  /* 0C0615B6 mov.l @(disp,pc),Rn */
	{ r6 = (u32)(s32)(s16)R16(r1); /* slot mov.w @Rm,Rn */ UPD(0x0C061494u, 3); goto L_0C061494; }  /* 0C0615B8 bra */
L_0C0615C0: BLKS(0x0C0615C0u);
	r5 = 0x20014u; UPD(0x0C0615C2u, 1);  /* 0C0615C0 mov.l @(disp,pc),Rn */
	r13 = 0x1u;  /* 0C0615C2 mov #imm,Rn */
	r9 = 0xC29CF85u; UPD(0x0C0615C6u, 2);  /* 0C0615C4 mov.l @(disp,pc),Rn */
	IF(0x0C0615C6u); MACL = r0 * r5;  /* 0C0615C6 mul.l Rm,Rn */
	IF(0x0C0615C8u); W8(r0 + r7, r13); UPD(0x0C0615CAu, 3);  /* 0C0615C8 mov.b Rm,@(r0,Rn) */
	r15 += 0xFFFFFFFCu;  /* 0C0615CA add #imm,Rn */
	W8(r9, r0); UPD(0x0C0615CEu, 2);  /* 0C0615CC mov.b Rm,@Rn */
	IF(0x0C0615CEu); r5 = MACL;  /* 0C0615CE sts macl,Rn */
	r0 = 0xC28F610u; UPD(0x0C0615D2u, 2);  /* 0C0615D0 mov.l @(disp,pc),Rn */
	r10 = 0xC2B1A5Cu; UPD(0x0C0615D4u, 1);  /* 0C0615D2 mov.l @(disp,pc),Rn */
	r3 = (u32)(s32)(s8)R8(r0); UPD(0x0C0615D6u, 1);  /* 0C0615D4 mov.b @Rm,Rn */
	r5 += r10;  /* 0C0615D6 add Rm,Rn */
	r2 = 0xC2B0804u; UPD(0x0C0615DAu, 2);  /* 0C0615D8 mov.l @(disp,pc),Rn */
	r3 += 0x1u;  /* 0C0615DA add #imm,Rn */
	r4 = 0xC29E93Cu; UPD(0x0C0615DEu, 2);  /* 0C0615DC mov.l @(disp,pc),Rn */
	r6 = 0xC2B037Bu; UPD(0x0C0615E0u, 1);  /* 0C0615DE mov.l @(disp,pc),Rn */
	r12 = 0xC228BF4u; UPD(0x0C0615E2u, 1);  /* 0C0615E0 mov.l @(disp,pc),Rn */
	r7 = (u32)(s32)(s8)R8(r6); UPD(0x0C0615E4u, 1);  /* 0C0615E2 mov.b @Rm,Rn */
	r11 = (u32)(s32)(s16)R16(r4); UPD(0x0C0615E6u, 1);  /* 0C0615E4 mov.w @Rm,Rn */
	r6 = r7 & 0xFF;  /* 0C0615E6 extu.b Rm,Rn */
	W32(r2, r5); UPD(0x0C0615EAu, 2);  /* 0C0615E8 mov.l Rm,@Rn */
	r4 = r11 & 0xFFFF;  /* 0C0615EA extu.w Rm,Rn */
	W8(r0, r3); UPD(0x0C0615EEu, 2);  /* 0C0615EC mov.b Rm,@Rn */
	W8(r12, r13); UPD(0x0C0615F0u, 1);  /* 0C0615EE mov.b Rm,@Rn */
	r10 = 0xC0C2E50u; UPD(0x0C0615F2u, 1);  /* 0C0615F0 mov.l @(disp,pc),Rn */
	r7 = 0xC0627B0u; UPD(0x0C0615F4u, 1);  /* 0C0615F2 mov.l @(disp,pc),Rn */
	IF(0x0C0615F4u); { u32 t_ = r10; PR = 0x0C0615F8u; W32(r15, r8); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2E50, 0x0C0C2E50u, 0x0C0615F8u); }  /* 0C0615F4 jsr @Rn */
L_0C0615F8: BLKS(0x0C0615F8u);
	r15 += 0x4u;  /* 0C0615F8 add #imm,Rn */
	{ r1 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C0615B0u, 4); goto L_0C0615B0; }  /* 0C0615FA bra */
L_0C061600: BLKS(0x0C061600u);
	if (!T) { UPD(0x0C061620u, 3); goto L_0C061620; }  /* 0C061600 bf */
L_0C061602: BLKS(0x0C061602u);
	r13 = 0x0u;  /* 0C061602 mov #imm,Rn */
	r2 = 0xC2A6D4Cu; UPD(0x0C061606u, 2);  /* 0C061604 mov.l @(disp,pc),Rn */
	r4 = 0x400u; UPD(0x0C061608u, 1);  /* 0C061606 mov.w @(disp,pc),Rn */
	r5 = 0x7u;  /* 0C061608 mov #imm,Rn */
	r3 = r2;  /* 0C06160A mov Rm,Rn */
	UPD(0x0C06160Cu, 2);
L_0C06160C: BLKS(0x0C06160Cu);
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r11 = v_; } UPD(0x0C06160Eu, 1);  /* 0C06160C mov.w @Rm+,Rn */
	r7 = r13;  /* 0C06160E mov Rm,Rn */
	r6 = r11 & 0xFFFF;  /* 0C061610 extu.w Rm,Rn */
	T = r6 == r4;  /* 0C061612 cmp/eq Rm,Rn */
	{ u32 c_ = T; r7 += r7; /* slot add Rm,Rn */ if (c_) { UPD(0x0C061630u, 6); goto L_0C061630; } goto L_0C061618; }  /* 0C061614 bt/s */
L_0C061618: BLKS(0x0C061618u);
	r13 += 0x1u;  /* 0C061618 add #imm,Rn */
	T = r13 > r5;  /* 0C06161A cmp/hi Rm,Rn */
	{ u32 c_ = !T; r2 += 0x2u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06160Cu, 6); goto L_0C06160C; } UPD(0x0C061620u, 1); goto L_0C061620; }  /* 0C06161C bf/s */
L_0C061620: BLKS(0x0C061620u);
	{ IF(0x0C061622u); ; /* slot nop */ UPD(0x0C061302u, 3); goto L_0C061302; }  /* 0C061620 bra */
L_0C061630: BLKS(0x0C061630u);
	r4 = 0xC29E93Cu; UPD(0x0C061632u, 1);  /* 0C061630 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s16)R16(r4); UPD(0x0C061634u, 1);  /* 0C061632 mov.w @Rm,Rn */
	W16(r2, r0); UPD(0x0C061636u, 1);  /* 0C061634 mov.w Rm,@Rn */
	r10 = 0xC3C5438u; UPD(0x0C061638u, 1);  /* 0C061636 mov.l @(disp,pc),Rn */
	r0 = r7;  /* 0C061638 mov Rm,Rn */
	r2 = 0xC22E258u; UPD(0x0C06163Cu, 2);  /* 0C06163A mov.l @(disp,pc),Rn */
	r12 = 0xC3C8478u; UPD(0x0C06163Eu, 1);  /* 0C06163C mov.l @(disp,pc),Rn */
	r8 = (u32)(s32)(s16)R16(r2); UPD(0x0C061640u, 1);  /* 0C06163E mov.w @Rm,Rn */
	r9 = (u32)(s32)(s16)R16(r10); UPD(0x0C061642u, 1);  /* 0C061640 mov.w @Rm,Rn */
	r5 = 0xC3C5454u; UPD(0x0C061644u, 1);  /* 0C061642 mov.l @(disp,pc),Rn */
	r3 = 0xC2380B4u; UPD(0x0C061646u, 1);  /* 0C061644 mov.l @(disp,pc),Rn */
	r11 = (u32)(s32)(s16)R16(r12); UPD(0x0C061648u, 1);  /* 0C061646 mov.w @Rm,Rn */
	r7 = 0xC3C4038u; UPD(0x0C06164Au, 1);  /* 0C061648 mov.l @(disp,pc),Rn */
	IF(0x0C06164Au); W16(r0 + r5, r8); UPD(0x0C06164Cu, 1);  /* 0C06164A mov.w Rm,@(r0,Rn) */
	IF(0x0C06164Cu); W16(r0 + r3, r9); UPD(0x0C06164Eu, 1);  /* 0C06164C mov.w Rm,@(r0,Rn) */
	IF(0x0C06164Eu); W16(r0 + r7, r11); UPD(0x0C061650u, 1);  /* 0C06164E mov.w Rm,@(r0,Rn) */
	r0 = 0xC29CF85u; UPD(0x0C061652u, 1);  /* 0C061650 mov.l @(disp,pc),Rn */
	r8 = 0xC2860F4u; UPD(0x0C061654u, 1);  /* 0C061652 mov.l @(disp,pc),Rn */
	r5 = (u32)(s32)(s8)R8(r0); UPD(0x0C061656u, 1);  /* 0C061654 mov.b @Rm,Rn */
	r2 = 0xC2B0804u; UPD(0x0C061658u, 1);  /* 0C061656 mov.l @(disp,pc),Rn */
	r0 = r8;  /* 0C061658 mov Rm,Rn */
	IF(0x0C06165Au); W8(r0 + r13, r5); UPD(0x0C06165Cu, 2);  /* 0C06165A mov.b Rm,@(r0,Rn) */
	r9 = R32(r2); UPD(0x0C06165Eu, 1);  /* 0C06165C mov.l @Rm,Rn */
	r0 = r13;  /* 0C06165E mov Rm,Rn */
	r10 = 0xC28ED88u; UPD(0x0C061662u, 2);  /* 0C061660 mov.l @(disp,pc),Rn */
	IF(0x0C061662u); r0 <<= 2;  /* 0C061662 shll2 Rn */
	r9 += 0x10u;  /* 0C061664 add #imm,Rn */
	IF(0x0C061666u); W32(r0 + r10, r9); UPD(0x0C061668u, 3);  /* 0C061666 mov.l Rm,@(r0,Rn) */
	r2 = 0x0u;  /* 0C061668 mov #imm,Rn */
	r9 += 0xFFFFFFF0u;  /* 0C06166A add #imm,Rn */
	r13 = R32(r9 + 0xCu); UPD(0x0C06166Eu, 3);  /* 0C06166C mov.l @(disp,Rm),Rn */
	r3 = 0xFF00FFu; UPD(0x0C061670u, 1);  /* 0C06166E mov.l @(disp,pc),Rn */
	r12 = 0xC2A6D6Cu; UPD(0x0C061672u, 1);  /* 0C061670 mov.l @(disp,pc),Rn */
	r13 &= r3;  /* 0C061672 and Rm,Rn */
	r1 = 0xC28F610u; UPD(0x0C061676u, 2);  /* 0C061674 mov.l @(disp,pc),Rn */
	IF(0x0C061676u); W32(r0 + r12, r13); UPD(0x0C061678u, 1);  /* 0C061676 mov.l Rm,@(r0,Rn) */
	{ W16(r4, r6); /* slot mov.w Rm,@Rn */ UPD(0x0C061378u, 3); goto L_0C061378; }  /* 0C061678 bra */
}

/* FUN_0c0616f0 */
void blk_f_0C0616F0(sh3_t *c)
{
	LOCALS;
L_0C0616F0: BLKS(0x0C0616F0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0616F2u, 1);  /* 0C0616F0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0616F4u, 1);  /* 0C0616F2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0616F6u, 1);  /* 0C0616F4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0616F8u, 1);  /* 0C0616F6 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0616FAu, 1);  /* 0C0616F8 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0616FCu, 1);  /* 0C0616FA mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0616FEu, 1);  /* 0C0616FC mov.l Rm,@-Rn */
	r2 = 0xC22E014u; UPD(0x0C061700u, 1);  /* 0C0616FE mov.l @(disp,pc),Rn */
	IF(0x0C061700u); r15 -= 4; W32(r15, PR); UPD(0x0C061702u, 1);  /* 0C061700 sts.l pr,@-Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C061704u, 1);  /* 0C061702 mov.b @Rm,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C061704 add #imm,Rn */
	T = r0 == 0x1u;  /* 0C061706 cmp/eq #imm,r0 */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C061710u, 5); goto L_0C061710; } goto L_0C06170C; }  /* 0C061708 bf/s */
L_0C06170C: BLKS(0x0C06170Cu);
	{ IF(0x0C06170Eu); ; /* slot nop */ UPD(0x0C061A40u, 4); goto L_0C061A40; }  /* 0C06170C bra */
L_0C061710: BLKS(0x0C061710u);
	r2 = 0x1u;  /* 0C061710 mov #imm,Rn */
	T = (s32)r0 > (s32)r2;  /* 0C061712 cmp/gt Rm,Rn */
	{ u32 c_ = !T; T = r0 == 0x2u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C06171Cu, 5); goto L_0C06171C; } goto L_0C061718; }  /* 0C061714 bf/s */
L_0C061718: BLKS(0x0C061718u);
	{ IF(0x0C06171Au); ; /* slot nop */ UPD(0x0C061980u, 4); goto L_0C061980; }  /* 0C061718 bra */
L_0C06171C: BLKS(0x0C06171Cu);
	r8 = 0xC2A6D4Cu; UPD(0x0C06171Eu, 1);  /* 0C06171C mov.l @(disp,pc),Rn */
	T = (r0 & r0) == 0;  /* 0C06171E tst Rm,Rn */
	if (T) { UPD(0x0C061740u, 4); goto L_0C061740; }  /* 0C061720 bt */
L_0C061722: BLKS(0x0C061722u);
	r14 += 0x8u;  /* 0C061722 add #imm,Rn */
	UPD(0x0C061724u, 1);
L_0C061724: BLKS(0x0C061724u);
	r15 = r14;  /* 0C061724 mov Rm,Rn */
	IF(0x0C061726u); PR = R32(r15); r15 += 4; UPD(0x0C061728u, 2);  /* 0C061726 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06172Au, 1);  /* 0C061728 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C06172Cu, 1);  /* 0C06172A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06172Eu, 1);  /* 0C06172C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C061730u, 1);  /* 0C06172E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C061732u, 1);  /* 0C061730 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C061734u, 1);  /* 0C061732 mov.l @Rm+,Rn */
	IF(0x0C061734u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C061734 rts */
L_0C061740: BLKS(0x0C061740u);
	r2 = (u32)(s32)(s16)R16(r8); UPD(0x0C061742u, 1);  /* 0C061740 mov.w @Rm,Rn */
	r8 = 0x400u; UPD(0x0C061744u, 1);  /* 0C061742 mov.w @(disp,pc),Rn */
	T = r2 == r8;  /* 0C061744 cmp/eq Rm,Rn */
	if (T) { UPD(0x0C061722u, 4); goto L_0C061722; }  /* 0C061746 bt */
L_0C061748: BLKS(0x0C061748u);
	r4 = 0x0u;  /* 0C061748 mov #imm,Rn */
	r0 = 0xC2380B4u; UPD(0x0C06174Cu, 2);  /* 0C06174A mov.l @(disp,pc),Rn */
	r3 = 0xC3C5454u; UPD(0x0C06174Eu, 1);  /* 0C06174C mov.l @(disp,pc),Rn */
	r13 = (u32)(s32)(s16)R16(r0); UPD(0x0C061750u, 1);  /* 0C06174E mov.w @Rm,Rn */
	r7 = (u32)(s32)(s16)R16(r3); UPD(0x0C061752u, 1);  /* 0C061750 mov.w @Rm,Rn */
	r11 = r13 & 0xFFFF;  /* 0C061752 extu.w Rm,Rn */
	r0 = r7 & 0xFFFF;  /* 0C061754 extu.w Rm,Rn */
	IF(0x0C061756u); r0 <<= 2;  /* 0C061756 shll2 Rn */
	IF(0x0C061758u); r0 <<= 2;  /* 0C061758 shll2 Rn */
	r10 = 0x4000u; UPD(0x0C06175Cu, 5);  /* 0C06175A mov.w @(disp,pc),Rn */
	r0 += r11;  /* 0C06175C add Rm,Rn */
	r9 = 0xC3BC3CCu; UPD(0x0C061760u, 2);  /* 0C06175E mov.l @(disp,pc),Rn */
	r2 |= r10;  /* 0C061760 or Rm,Rn */
	r0 += r0;  /* 0C061762 add Rm,Rn */
	r12 = 0xC22E014u; UPD(0x0C061766u, 3);  /* 0C061764 mov.l @(disp,pc),Rn */
	IF(0x0C061766u); W16(r0 + r9, r2); UPD(0x0C061768u, 1);  /* 0C061766 mov.w Rm,@(r0,Rn) */
	r2 = (u32)(s32)(s8)R8(r12); UPD(0x0C06176Au, 1);  /* 0C061768 mov.b @Rm,Rn */
	r6 = 0xC2A6D98u; UPD(0x0C06176Cu, 1);  /* 0C06176A mov.l @(disp,pc),Rn */
	r2 += 0x1u;  /* 0C06176C add #imm,Rn */
	W16(r6, r4); UPD(0x0C061770u, 2);  /* 0C06176E mov.w Rm,@Rn */
	W8(r12, r2); UPD(0x0C061772u, 1);  /* 0C061770 mov.b Rm,@Rn */
L_0C061772: BLKS(0x0C061772u);
	r12 = 0xC28ED88u; UPD(0x0C061774u, 1);  /* 0C061772 mov.l @(disp,pc),Rn */
	r1 = 0x0u;  /* 0C061774 mov #imm,Rn */
	r8 = 0xC3C4038u; UPD(0x0C061778u, 2);  /* 0C061776 mov.l @(disp,pc),Rn */
	r5 = 0xC3C415Cu; UPD(0x0C06177Au, 1);  /* 0C061778 mov.l @(disp,pc),Rn */
	r11 = R32(r12); UPD(0x0C06177Cu, 1);  /* 0C06177A mov.l @Rm,Rn */
	r13 = (u32)(s32)(s16)R16(r8); UPD(0x0C06177Eu, 1);  /* 0C06177C mov.w @Rm,Rn */
	r10 = R32(r5); UPD(0x0C061780u, 1);  /* 0C06177E mov.l @Rm,Rn */
	W32(r14, r1); UPD(0x0C061782u, 1);  /* 0C061780 mov.l Rm,@Rn */
	IF(0x0C061782u); ;  /* 0C061782 nop */
	UPD(0x0C061784u, 1);
L_0C061784: BLKS(0x0C061784u);
	r12 = (u32)(s32)(s16)R16(r6); UPD(0x0C061786u, 1);  /* 0C061784 mov.w @Rm,Rn */
	r4 = 0x3u;  /* 0C061786 mov #imm,Rn */
	r8 = r12 & 0xFFFF;  /* 0C061788 extu.w Rm,Rn */
	r12 = 0xC2A6D6Cu; UPD(0x0C06178Cu, 3);  /* 0C06178A mov.l @(disp,pc),Rn */
	r1 = 0xFFFFu; UPD(0x0C06178Eu, 1);  /* 0C06178C mov.l @(disp,pc),Rn */
	r9 = R32(r12); UPD(0x0C061790u, 1);  /* 0C06178E mov.l @Rm,Rn */
	r9 &= r1;  /* 0C061790 and Rm,Rn */
	r9 += 0x1u;  /* 0C061792 add #imm,Rn */
	T = r9 > r8;  /* 0C061794 cmp/hi Rm,Rn */
	IF(0x0C061796u); r9 = T;  /* 0C061796 movt Rn */
	r0 = R32(r14); UPD(0x0C06179Au, 5);  /* 0C061798 mov.l @Rm,Rn */
	IF(0x0C06179Au); T = (s32)r13 > 0;  /* 0C06179A cmp/pl Rn */
	IF(0x0C06179Cu); r7 = T;  /* 0C06179C movt Rn */
	T = (s32)r4 >= (s32)r0;  /* 0C06179E cmp/ge Rm,Rn */
	r0 = 0xC0562D0u; UPD(0x0C0617A2u, 4);  /* 0C0617A0 mov.l @(disp,pc),Rn */
	IF(0x0C0617A2u); r8 = T;  /* 0C0617A2 movt Rn */
	r9 &= r7;  /* 0C0617A4 and Rm,Rn */
	W32(r14 + 0x4u, r6); UPD(0x0C0617A8u, 3);  /* 0C0617A6 mov.l Rm,@(disp,Rn) */
	IF(0x0C0617A8u); { u32 t_ = r0; PR = 0x0C0617ACu; r4 = 0x5u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0562D0, 0x0C0562D0u, 0x0C0617ACu); }  /* 0C0617A8 jsr @Rn */
L_0C0617AC: BLKS(0x0C0617ACu);
	r2 = 0xC3C4028u; UPD(0x0C0617AEu, 1);  /* 0C0617AC mov.l @(disp,pc),Rn */
	r5 = 0x11u;  /* 0C0617AE mov #imm,Rn */
	r3 = R32(r2); UPD(0x0C0617B2u, 2);  /* 0C0617B0 mov.l @Rm,Rn */
	r0 -= r3;  /* 0C0617B2 sub Rm,Rn */
	T = (s32)r5 >= (s32)r0;  /* 0C0617B4 cmp/ge Rm,Rn */
	IF(0x0C0617B6u); r6 = T;  /* 0C0617B6 movt Rn */
	r8 |= r6;  /* 0C0617B8 or Rm,Rn */
	r9 &= r8;  /* 0C0617BA and Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C0617BC tst Rm,Rn */
	{ u32 c_ = !T; r6 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C0617C6u, 9); goto L_0C0617C6; } UPD(0x0C0617C2u, 1); goto L_0C0617C2; }  /* 0C0617BE bf/s */
L_0C0617C2: BLKS(0x0C0617C2u);
	{ IF(0x0C0617C4u); ; /* slot nop */ UPD(0x0C061900u, 3); goto L_0C061900; }  /* 0C0617C2 bra */
L_0C0617C6: BLKS(0x0C0617C6u);
	r5 = 0xC2A6D98u; UPD(0x0C0617C8u, 1);  /* 0C0617C6 mov.l @(disp,pc),Rn */
	r12 += 0x2u;  /* 0C0617C8 add #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r12); UPD(0x0C0617CCu, 2);  /* 0C0617CA mov.w @Rm,Rn */
	r1 = (u32)(s32)(s16)R16(r5); UPD(0x0C0617CEu, 1);  /* 0C0617CC mov.w @Rm,Rn */
	r4 = 0xC3C847Au; UPD(0x0C0617D0u, 1);  /* 0C0617CE mov.l @(disp,pc),Rn */
	r0 -= r1;  /* 0C0617D0 sub Rm,Rn */
	r7 = 0xC3C53DEu; UPD(0x0C0617D4u, 2);  /* 0C0617D2 mov.l @(disp,pc),Rn */
	r0 += 0x1u;  /* 0C0617D4 add #imm,Rn */
	r3 = (u32)(s32)(s16)R16(r4); UPD(0x0C0617D8u, 2);  /* 0C0617D6 mov.w @Rm,Rn */
	r2 = r0 & 0xFFFF;  /* 0C0617D8 extu.w Rm,Rn */
	r9 = r3 & 0xFFFF;  /* 0C0617DA extu.w Rm,Rn */
	T = r2 > r9;  /* 0C0617DC cmp/hi Rm,Rn */
	{ u32 c_ = !T; W16(r7, r0); /* slot mov.w Rm,@Rn */ if (c_) { UPD(0x0C0617E4u, 6); goto L_0C0617E4; } UPD(0x0C0617E2u, 1); goto L_0C0617E2; }  /* 0C0617DE bf/s */
L_0C0617E2: BLKS(0x0C0617E2u);
	W16(r7, r3); UPD(0x0C0617E4u, 1);  /* 0C0617E2 mov.w Rm,@Rn */
L_0C0617E4: BLKS(0x0C0617E4u);
	r2 = (u32)(s32)(s16)R16(r7); UPD(0x0C0617E6u, 1);  /* 0C0617E4 mov.w @Rm,Rn */
	r3 = r2 & 0xFFFF;  /* 0C0617E6 extu.w Rm,Rn */
	T = (s32)r3 > (s32)r13;  /* 0C0617E8 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C0617F2u, 5); goto L_0C0617F2; }  /* 0C0617EA bt */
L_0C0617EC: BLKS(0x0C0617ECu);
	r7 = r13;  /* 0C0617EC mov Rm,Rn */
	{ r7 -= r2; /* slot sub Rm,Rn */ UPD(0x0C0618F0u, 4); goto L_0C0618F0; }  /* 0C0617EE bra */
L_0C0617F2: BLKS(0x0C0617F2u);
	W16(r7, r13); UPD(0x0C0617F4u, 1);  /* 0C0617F2 mov.w Rm,@Rn */
	r13 = 0x0u;  /* 0C0617F4 mov #imm,Rn */
	UPD(0x0C0617F6u, 1);
L_0C0617F6: BLKS(0x0C0617F6u);
	r4 = 0x20000000u; UPD(0x0C0617F8u, 1);  /* 0C0617F6 mov.l @(disp,pc),Rn */
	r1 = 0x18u;  /* 0C0617F8 mov #imm,Rn */
	r9 = 0xC2380B4u; UPD(0x0C0617FCu, 2);  /* 0C0617FA mov.l @(disp,pc),Rn */
	r2 = 0xC3C5454u; UPD(0x0C0617FEu, 1);  /* 0C0617FC mov.l @(disp,pc),Rn */
	W32(r10, r4); UPD(0x0C061800u, 1);  /* 0C0617FE mov.l Rm,@Rn */
	r12 = (u32)(s32)(s16)R16(r9); UPD(0x0C061802u, 1);  /* 0C061800 mov.w @Rm,Rn */
	r10 += 0x4u;  /* 0C061802 add #imm,Rn */
	r0 = 0x99999999u; UPD(0x0C061806u, 2);  /* 0C061804 mov.l @(disp,pc),Rn */
	r3 = r12 & 0xFFFF;  /* 0C061806 extu.w Rm,Rn */
	r5 = (u32)(s32)(s16)R16(r2); UPD(0x0C06180Au, 2);  /* 0C061808 mov.w @Rm,Rn */
	IF(0x0C06180Au); r3 <<= 8;  /* 0C06180A shll8 Rn */
	r8 = (u32)(s32)(s16)R16(r6); UPD(0x0C06180Eu, 2);  /* 0C06180C mov.w @Rm,Rn */
	IF(0x0C06180Eu); ARG0(0x451Du); { s32 s_ = (s32)r1; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = 0; else r5 >>= ((~s_ & 31) + 1); }  /* 0C06180E shld Rm,Rn */
	W32(r10, r0); UPD(0x0C061812u, 2);  /* 0C061810 mov.l Rm,@Rn */
	r7 = r8 & 0xFFFF;  /* 0C061812 extu.w Rm,Rn */
	r3 += r7;  /* 0C061814 add Rm,Rn */
	r5 |= r3;  /* 0C061816 or Rm,Rn */
	r10 += 0x4u;  /* 0C061818 add #imm,Rn */
	r2 = 0xC3C53DEu; UPD(0x0C06181Cu, 5);  /* 0C06181A mov.l @(disp,pc),Rn */
	W32(r10, r5); UPD(0x0C06181Eu, 1);  /* 0C06181C mov.l Rm,@Rn */
	r4 = 0xC2A6D6Cu; UPD(0x0C061820u, 1);  /* 0C06181E mov.l @(disp,pc),Rn */
	r10 += 0x4u;  /* 0C061820 add #imm,Rn */
	r9 = (u32)(s32)(s16)R16(r2); UPD(0x0C061824u, 2);  /* 0C061822 mov.w @Rm,Rn */
	r5 = 0x0u;  /* 0C061824 mov #imm,Rn */
	r12 = R32(r4); UPD(0x0C061828u, 2);  /* 0C061826 mov.l @Rm,Rn */
	r8 = r9 & 0xFFFF;  /* 0C061828 extu.w Rm,Rn */
	r0 = 0xFFFF0000u; UPD(0x0C06182Cu, 2);  /* 0C06182A mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFFFu;  /* 0C06182C add #imm,Rn */
	r12 &= r0;  /* 0C06182E and Rm,Rn */
	r12 |= r8;  /* 0C061830 or Rm,Rn */
	W32(r10, r12); UPD(0x0C061834u, 4);  /* 0C061832 mov.l Rm,@Rn */
	r8 += 0x1u;  /* 0C061834 add #imm,Rn */
	r10 += 0x4u;  /* 0C061836 add #imm,Rn */
	r3 = r8;  /* 0C061838 mov Rm,Rn */
	IF(0x0C06183Au); ;  /* 0C06183A nop */
	UPD(0x0C06183Cu, 4);
L_0C06183C: BLKS(0x0C06183Cu);
	r0 = 0xC2A6D6Cu; UPD(0x0C06183Eu, 1);  /* 0C06183C mov.l @(disp,pc),Rn */
	r2 = R32(r0); UPD(0x0C061840u, 1);  /* 0C06183E mov.l @Rm,Rn */
	IF(0x0C061840u); r2 >>= 16;  /* 0C061840 shlr16 Rn */
	r9 = r2;  /* 0C061842 mov Rm,Rn */
	r9 += 0x1u;  /* 0C061844 add #imm,Rn */
	IF(0x0C061846u); MACL = r3 * r9;  /* 0C061846 mul.l Rm,Rn */
	IF(0x0C061848u); r12 = MACL;  /* 0C061848 sts macl,Rn */
	IF(0x0C06184Au); r12 >>= 2;  /* 0C06184A shlr2 Rn */
	IF(0x0C06184Cu); T = r12 & 1; r12 >>= 1;  /* 0C06184C shlr Rn */
	IF(0x0C06184Eu); r12 >>= 2;  /* 0C06184E shlr2 Rn */
	T = r5 >= r12;  /* 0C061850 cmp/hs Rm,Rn */
	if (T) { UPD(0x0C0618C0u, 13); goto L_0C0618C0; }  /* 0C061852 bt */
L_0C061854: BLKS(0x0C061854u);
	{ u32 v_ = R32(r11); r11 += 4; r8 = v_; } UPD(0x0C061856u, 1);  /* 0C061854 mov.l @Rm+,Rn */
	r5 += 0x1u;  /* 0C061856 add #imm,Rn */
	W32(r10, r8); UPD(0x0C06185Au, 2);  /* 0C061858 mov.l Rm,@Rn */
	{ u32 v_ = R32(r11); r11 += 4; r7 = v_; } UPD(0x0C06185Cu, 1);  /* 0C06185A mov.l @Rm+,Rn */
	r10 += 0x4u;  /* 0C06185C add #imm,Rn */
	W32(r10, r7); UPD(0x0C061860u, 2);  /* 0C06185E mov.l Rm,@Rn */
	{ u32 v_ = R32(r11); r11 += 4; r4 = v_; } UPD(0x0C061862u, 1);  /* 0C061860 mov.l @Rm+,Rn */
	r10 += 0x4u;  /* 0C061862 add #imm,Rn */
	W32(r10, r4); UPD(0x0C061866u, 2);  /* 0C061864 mov.l Rm,@Rn */
	{ u32 v_ = R32(r11); r11 += 4; r0 = v_; } UPD(0x0C061868u, 1);  /* 0C061866 mov.l @Rm+,Rn */
	r10 += 0x4u;  /* 0C061868 add #imm,Rn */
	W32(r10, r0); UPD(0x0C06186Cu, 2);  /* 0C06186A mov.l Rm,@Rn */
	{ u32 v_ = R32(r11); r11 += 4; r2 = v_; } UPD(0x0C06186Eu, 1);  /* 0C06186C mov.l @Rm+,Rn */
	r10 += 0x4u;  /* 0C06186E add #imm,Rn */
	W32(r10, r2); UPD(0x0C061872u, 2);  /* 0C061870 mov.l Rm,@Rn */
	{ u32 v_ = R32(r11); r11 += 4; r9 = v_; } UPD(0x0C061874u, 1);  /* 0C061872 mov.l @Rm+,Rn */
	r10 += 0x4u;  /* 0C061874 add #imm,Rn */
	W32(r10, r9); UPD(0x0C061878u, 2);  /* 0C061876 mov.l Rm,@Rn */
	{ u32 v_ = R32(r11); r11 += 4; r12 = v_; } UPD(0x0C06187Au, 1);  /* 0C061878 mov.l @Rm+,Rn */
	r10 += 0x4u;  /* 0C06187A add #imm,Rn */
	W32(r10, r12); UPD(0x0C06187Eu, 2);  /* 0C06187C mov.l Rm,@Rn */
	{ u32 v_ = R32(r11); r11 += 4; r8 = v_; } UPD(0x0C061880u, 1);  /* 0C06187E mov.l @Rm+,Rn */
	r10 += 0x4u;  /* 0C061880 add #imm,Rn */
	W32(r10, r8); UPD(0x0C061884u, 2);  /* 0C061882 mov.l Rm,@Rn */
	{ u32 v_ = R32(r11); r11 += 4; r7 = v_; } UPD(0x0C061886u, 1);  /* 0C061884 mov.l @Rm+,Rn */
	r10 += 0x4u;  /* 0C061886 add #imm,Rn */
	W32(r10, r7); UPD(0x0C06188Au, 2);  /* 0C061888 mov.l Rm,@Rn */
	{ u32 v_ = R32(r11); r11 += 4; r4 = v_; } UPD(0x0C06188Cu, 1);  /* 0C06188A mov.l @Rm+,Rn */
	r10 += 0x4u;  /* 0C06188C add #imm,Rn */
	W32(r10, r4); UPD(0x0C061890u, 2);  /* 0C06188E mov.l Rm,@Rn */
	{ u32 v_ = R32(r11); r11 += 4; r0 = v_; } UPD(0x0C061892u, 1);  /* 0C061890 mov.l @Rm+,Rn */
	r10 += 0x4u;  /* 0C061892 add #imm,Rn */
	W32(r10, r0); UPD(0x0C061896u, 2);  /* 0C061894 mov.l Rm,@Rn */
	{ u32 v_ = R32(r11); r11 += 4; r2 = v_; } UPD(0x0C061898u, 1);  /* 0C061896 mov.l @Rm+,Rn */
	r10 += 0x4u;  /* 0C061898 add #imm,Rn */
	W32(r10, r2); UPD(0x0C06189Cu, 2);  /* 0C06189A mov.l Rm,@Rn */
	{ u32 v_ = R32(r11); r11 += 4; r9 = v_; } UPD(0x0C06189Eu, 1);  /* 0C06189C mov.l @Rm+,Rn */
	r10 += 0x4u;  /* 0C06189E add #imm,Rn */
	W32(r10, r9); UPD(0x0C0618A2u, 2);  /* 0C0618A0 mov.l Rm,@Rn */
	{ u32 v_ = R32(r11); r11 += 4; r12 = v_; } UPD(0x0C0618A4u, 1);  /* 0C0618A2 mov.l @Rm+,Rn */
	r10 += 0x4u;  /* 0C0618A4 add #imm,Rn */
	W32(r10, r12); UPD(0x0C0618A8u, 2);  /* 0C0618A6 mov.l Rm,@Rn */
	{ u32 v_ = R32(r11); r11 += 4; r8 = v_; } UPD(0x0C0618AAu, 1);  /* 0C0618A8 mov.l @Rm+,Rn */
	r10 += 0x4u;  /* 0C0618AA add #imm,Rn */
	W32(r10, r8); UPD(0x0C0618AEu, 2);  /* 0C0618AC mov.l Rm,@Rn */
	{ u32 v_ = R32(r11); r11 += 4; r7 = v_; } UPD(0x0C0618B0u, 1);  /* 0C0618AE mov.l @Rm+,Rn */
	r10 += 0x4u;  /* 0C0618B0 add #imm,Rn */
	W32(r10, r7); UPD(0x0C0618B4u, 2);  /* 0C0618B2 mov.l Rm,@Rn */
	{ r10 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C06183Cu, 3); goto L_0C06183C; }  /* 0C0618B4 bra */
L_0C0618C0: BLKS(0x0C0618C0u);
	r9 = 0xC3C53DEu; UPD(0x0C0618C2u, 1);  /* 0C0618C0 mov.l @(disp,pc),Rn */
	r2 += r2;  /* 0C0618C2 add Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r9); UPD(0x0C0618C6u, 2);  /* 0C0618C4 mov.w @Rm,Rn */
	r2 += 0x2u;  /* 0C0618C6 add #imm,Rn */
	r12 = r4 & 0xFFFF;  /* 0C0618C8 extu.w Rm,Rn */
	IF(0x0C0618CAu); MACL = r2 * r12;  /* 0C0618CA mul.l Rm,Rn */
	r7 = 0xC28ED88u; UPD(0x0C0618CEu, 5);  /* 0C0618CC mov.l @(disp,pc),Rn */
	r3 = R32(r14); UPD(0x0C0618D0u, 1);  /* 0C0618CE mov.l @Rm,Rn */
	IF(0x0C0618D0u); r1 = MACL;  /* 0C0618D0 sts macl,Rn */
	r8 = R32(r7); UPD(0x0C0618D4u, 2);  /* 0C0618D2 mov.l @Rm,Rn */
	r3 += 0x1u;  /* 0C0618D4 add #imm,Rn */
	r2 = (u32)(s32)(s16)R16(r6); UPD(0x0C0618D8u, 2);  /* 0C0618D6 mov.w @Rm,Rn */
	r8 += r1;  /* 0C0618D8 add Rm,Rn */
	r2 += r4;  /* 0C0618DA add Rm,Rn */
	r5 = (u32)(s32)(s16)r3;  /* 0C0618DC exts.w Rm,Rn */
	W32(r7, r8); UPD(0x0C0618E0u, 4);  /* 0C0618DE mov.l Rm,@Rn */
	W16(r6, r2); UPD(0x0C0618E2u, 1);  /* 0C0618E0 mov.w Rm,@Rn */
	{ W32(r14, r5); /* slot mov.l Rm,@Rn */ UPD(0x0C061784u, 3); goto L_0C061784; }  /* 0C0618E2 bra */
L_0C0618F0: BLKS(0x0C0618F0u);
	{ r13 = (u32)(s32)(s16)r7; /* slot exts.w Rm,Rn */ UPD(0x0C0617F6u, 3); goto L_0C0617F6; }  /* 0C0618F0 bra */
L_0C061900: BLKS(0x0C061900u);
	r2 = 0xF0000000u; UPD(0x0C061902u, 1);  /* 0C061900 mov.l @(disp,pc),Rn */
	r3 = 0xC3C415Cu; UPD(0x0C061904u, 1);  /* 0C061902 mov.l @(disp,pc),Rn */
	W32(r10, r2); UPD(0x0C061906u, 1);  /* 0C061904 mov.l Rm,@Rn */
	W32(r3, r10); UPD(0x0C061908u, 1);  /* 0C061906 mov.l Rm,@Rn */
	r13 = 0xFFFFu; UPD(0x0C06190Au, 1);  /* 0C061908 mov.l @(disp,pc),Rn */
	r10 = R32(r12); UPD(0x0C06190Cu, 1);  /* 0C06190A mov.l @Rm,Rn */
	r5 = (u32)(s32)(s16)R16(r6); UPD(0x0C06190Eu, 1);  /* 0C06190C mov.w @Rm,Rn */
	r10 &= r13;  /* 0C06190E and Rm,Rn */
	r11 = r5 & 0xFFFF;  /* 0C061910 extu.w Rm,Rn */
	r10 += 0x1u;  /* 0C061912 add #imm,Rn */
	T = r11 >= r10;  /* 0C061914 cmp/hs Rm,Rn */
	if (!T) { UPD(0x0C061920u, 7); goto L_0C061920; }  /* 0C061916 bf */
L_0C061918: BLKS(0x0C061918u);
	r6 = 0xC22E014u; UPD(0x0C06191Au, 1);  /* 0C061918 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r6); UPD(0x0C06191Cu, 1);  /* 0C06191A mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C06191C add #imm,Rn */
	W8(r6, r0); UPD(0x0C061920u, 2);  /* 0C06191E mov.b Rm,@Rn */
L_0C061920: BLKS(0x0C061920u);
	{ r14 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C061724u, 3); goto L_0C061724; }  /* 0C061920 bra */
L_0C061980: BLKS(0x0C061980u);
	if (!T) { UPD(0x0C061920u, 3); goto L_0C061920; }  /* 0C061980 bf */
L_0C061982: BLKS(0x0C061982u);
	r1 = 0x4u;  /* 0C061982 mov #imm,Rn */
	r8 = 0xC2A6D4Cu; UPD(0x0C061986u, 2);  /* 0C061984 mov.l @(disp,pc),Rn */
	r12 = 0xC3C5454u; UPD(0x0C061988u, 1);  /* 0C061986 mov.l @(disp,pc),Rn */
	r9 = (u32)(s32)(s16)R16(r8); UPD(0x0C06198Au, 1);  /* 0C061988 mov.w @Rm,Rn */
	r6 = (u32)(s32)(s16)R16(r12); UPD(0x0C06198Cu, 1);  /* 0C06198A mov.w @Rm,Rn */
	r10 = r9;  /* 0C06198C mov Rm,Rn */
	r4 = 0xC2380B4u; UPD(0x0C061990u, 2);  /* 0C06198E mov.l @(disp,pc),Rn */
	r9 = r6 & 0xFFFF;  /* 0C061990 extu.w Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r4); UPD(0x0C061994u, 2);  /* 0C061992 mov.w @Rm,Rn */
	IF(0x0C061994u); ARG0(0x491Du); { s32 s_ = (s32)r1; if (s_ >= 0) r9 <<= (s_ & 31); else if ((s_ & 31) == 0) r9 = 0; else r9 >>= ((~s_ & 31) + 1); }  /* 0C061994 shld Rm,Rn */
	r11 = r0 & 0xFFFF;  /* 0C061996 extu.w Rm,Rn */
	r3 = 0x3FFFu; UPD(0x0C06199Au, 3);  /* 0C061998 mov.w @(disp,pc),Rn */
	r0 = r9;  /* 0C06199A mov Rm,Rn */
	r0 += r11;  /* 0C06199C add Rm,Rn */
	r13 = 0xC3BC3CCu; UPD(0x0C0619A0u, 3);  /* 0C06199E mov.l @(disp,pc),Rn */
	r10 &= r3;  /* 0C0619A0 and Rm,Rn */
	r0 += r0;  /* 0C0619A2 add Rm,Rn */
	IF(0x0C0619A4u); W16(r0 + r13, r10); UPD(0x0C0619A6u, 3);  /* 0C0619A4 mov.w Rm,@(r0,Rn) */
	r12 += 0x1u;  /* 0C0619A6 add #imm,Rn */
	r7 = 0xC2A6944u; UPD(0x0C0619AAu, 2);  /* 0C0619A8 mov.l @(disp,pc),Rn */
	r4 += 0x1u;  /* 0C0619AA add #imm,Rn */
	r5 = (u32)(s32)(s8)R8(r12); UPD(0x0C0619AEu, 2);  /* 0C0619AC mov.b @Rm,Rn */
	r0 = r7;  /* 0C0619AE mov Rm,Rn */
	IF(0x0C0619B0u); W8(r0 + r10, r5); UPD(0x0C0619B2u, 2);  /* 0C0619B0 mov.b Rm,@(r0,Rn) */
	r12 = 0x14u;  /* 0C0619B2 mov #imm,Rn */
	r2 = 0xC23949Cu; UPD(0x0C0619B6u, 2);  /* 0C0619B4 mov.l @(disp,pc),Rn */
	IF(0x0C0619B6u); ARG0(0x49CDu); { s32 s_ = (s32)r12; if (s_ >= 0) r9 <<= (s_ & 31); else if ((s_ & 31) == 0) r9 = 0; else r9 >>= ((~s_ & 31) + 1); }  /* 0C0619B6 shld Rm,Rn */
	r13 = (u32)(s32)(s8)R8(r4); UPD(0x0C0619BAu, 2);  /* 0C0619B8 mov.b @Rm,Rn */
	r0 = r2;  /* 0C0619BA mov Rm,Rn */
	IF(0x0C0619BCu); W8(r0 + r10, r13); UPD(0x0C0619BEu, 2);  /* 0C0619BC mov.b Rm,@(r0,Rn) */
	IF(0x0C0619BEu); r11 <<= 8;  /* 0C0619BE shll8 Rn */
	IF(0x0C0619C0u); r10 <<= 2;  /* 0C0619C0 shll2 Rn */
	r7 = 0xC29D93Cu; UPD(0x0C0619C4u, 3);  /* 0C0619C2 mov.l @(disp,pc),Rn */
	r0 = r10;  /* 0C0619C4 mov Rm,Rn */
	r9 |= r11;  /* 0C0619C6 or Rm,Rn */
	r6 = 0xC2860F4u; UPD(0x0C0619CAu, 3);  /* 0C0619C8 mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C0619CA mov #imm,Rn */
	IF(0x0C0619CCu); W32(r0 + r7, r9); UPD(0x0C0619CEu, 2);  /* 0C0619CC mov.l Rm,@(r0,Rn) */
	r0 = (u32)(s32)(s8)R8(r6); UPD(0x0C0619D0u, 1);  /* 0C0619CE mov.b @Rm,Rn */
	r5 = 0xC3C86DCu; UPD(0x0C0619D2u, 1);  /* 0C0619D0 mov.l @(disp,pc),Rn */
	r3 = r0 & 0xFF;  /* 0C0619D2 extu.b Rm,Rn */
	r0 = r5;  /* 0C0619D4 mov Rm,Rn */
	IF(0x0C0619D6u); W8(r0 + r3, r4); UPD(0x0C0619D8u, 3);  /* 0C0619D6 mov.b Rm,@(r0,Rn) */
	r5 = 0x0u;  /* 0C0619D8 mov #imm,Rn */
	r4 = 0xC28ED88u; UPD(0x0C0619DCu, 2);  /* 0C0619DA mov.l @(disp,pc),Rn */
	r6 = r8;  /* 0C0619DC mov Rm,Rn */
	UPD(0x0C0619DEu, 1);
L_0C0619DE: BLKS(0x0C0619DEu);
	r12 = r5;  /* 0C0619DE mov Rm,Rn */
	r12 += r12;  /* 0C0619E0 add Rm,Rn */
	r11 = 0xC2380B4u; UPD(0x0C0619E4u, 3);  /* 0C0619E2 mov.l @(disp,pc),Rn */
	r0 = r12;  /* 0C0619E4 mov Rm,Rn */
	r13 = 0xC3C5454u; UPD(0x0C0619E8u, 2);  /* 0C0619E6 mov.l @(disp,pc),Rn */
	r0 += r6;  /* 0C0619E8 add Rm,Rn */
	r11 += r12;  /* 0C0619EA add Rm,Rn */
	r0 += 0x2u;  /* 0C0619EC add #imm,Rn */
	r11 += 0x2u;  /* 0C0619EE add #imm,Rn */
	r13 += r12;  /* 0C0619F0 add Rm,Rn */
	r3 = (u32)(s32)(s16)R16(r0); UPD(0x0C0619F4u, 6);  /* 0C0619F2 mov.w @Rm,Rn */
	r13 += 0x2u;  /* 0C0619F4 add #imm,Rn */
	r7 = (u32)(s32)(s16)R16(r11); UPD(0x0C0619F8u, 2);  /* 0C0619F6 mov.w @Rm,Rn */
	r1 = (u32)(s32)(s16)R16(r13); UPD(0x0C0619FAu, 1);  /* 0C0619F8 mov.w @Rm,Rn */
	{ u32 v_ = r3; r0 -= 2; W16(r0, v_); } UPD(0x0C0619FCu, 1);  /* 0C0619FA mov.w Rm,@-Rn */
	{ u32 v_ = r7; r11 -= 2; W16(r11, v_); } UPD(0x0C0619FEu, 1);  /* 0C0619FC mov.w Rm,@-Rn */
	r0 = r5;  /* 0C0619FE mov Rm,Rn */
	r9 = 0xC2860F4u; UPD(0x0C061A02u, 2);  /* 0C061A00 mov.l @(disp,pc),Rn */
	IF(0x0C061A02u); r0 <<= 2;  /* 0C061A02 shll2 Rn */
	{ u32 v_ = r1; r13 -= 2; W16(r13, v_); } UPD(0x0C061A06u, 2);  /* 0C061A04 mov.w Rm,@-Rn */
	r9 += r5;  /* 0C061A06 add Rm,Rn */
	r11 = 0xC3C4038u; UPD(0x0C061A0Au, 2);  /* 0C061A08 mov.l @(disp,pc),Rn */
	r9 += 0x1u;  /* 0C061A0A add #imm,Rn */
	r13 = 0xC2A6D6Cu; UPD(0x0C061A0Eu, 2);  /* 0C061A0C mov.l @(disp,pc),Rn */
	r3 = r0;  /* 0C061A0E mov Rm,Rn */
	r10 = (u32)(s32)(s8)R8(r9); UPD(0x0C061A12u, 2);  /* 0C061A10 mov.b @Rm,Rn */
	r11 += r12;  /* 0C061A12 add Rm,Rn */
	r3 += r4;  /* 0C061A14 add Rm,Rn */
	r13 += r0;  /* 0C061A16 add Rm,Rn */
	r11 += 0x2u;  /* 0C061A18 add #imm,Rn */
	{ u32 v_ = r10; r9 -= 1; W8(r9, v_); } UPD(0x0C061A1Cu, 5);  /* 0C061A1A mov.b Rm,@-Rn */
	r5 += 0x1u;  /* 0C061A1C add #imm,Rn */
	r2 = R32(r3 + 0x4u); UPD(0x0C061A20u, 2);  /* 0C061A1E mov.l @(disp,Rm),Rn */
	r10 = 0x6u;  /* 0C061A20 mov #imm,Rn */
	r1 = R32(r13 + 0x4u); UPD(0x0C061A24u, 2);  /* 0C061A22 mov.l @(disp,Rm),Rn */
	T = r5 > r10;  /* 0C061A24 cmp/hi Rm,Rn */
	r7 = (u32)(s32)(s16)R16(r11); UPD(0x0C061A28u, 2);  /* 0C061A26 mov.w @Rm,Rn */
	W32(r3, r2); UPD(0x0C061A2Au, 1);  /* 0C061A28 mov.l Rm,@Rn */
	W32(r13, r1); UPD(0x0C061A2Cu, 1);  /* 0C061A2A mov.l Rm,@Rn */
	{ u32 c_ = !T; { u32 v_ = r7; r11 -= 2; W16(r11, v_); } /* slot mov.w Rm,@-Rn */ if (c_) { UPD(0x0C0619DEu, 3); goto L_0C0619DE; } UPD(0x0C061A30u, 1); goto L_0C061A30; }  /* 0C061A2C bf/s */
L_0C061A30: BLKS(0x0C061A30u);
	r5 = 0x400u; UPD(0x0C061A32u, 1);  /* 0C061A30 mov.w @(disp,pc),Rn */
	r6 = 0xC2A6D5Au; UPD(0x0C061A34u, 1);  /* 0C061A32 mov.l @(disp,pc),Rn */
	r4 = 0xC22E014u; UPD(0x0C061A36u, 1);  /* 0C061A34 mov.l @(disp,pc),Rn */
	W16(r6, r5); UPD(0x0C061A38u, 1);  /* 0C061A36 mov.w Rm,@Rn */
	{ W8(r4, r5); /* slot mov.b Rm,@Rn */ UPD(0x0C061740u, 3); goto L_0C061740; }  /* 0C061A38 bra */
L_0C061A40: BLKS(0x0C061A40u);
	r6 = 0xC2A6D98u; UPD(0x0C061A42u, 1);  /* 0C061A40 mov.l @(disp,pc),Rn */
	{ IF(0x0C061A44u); ; /* slot nop */ UPD(0x0C061772u, 3); goto L_0C061772; }  /* 0C061A42 bra */
}

/* FUN_0c061a90 */
void blk_f_0C061A90(sh3_t *c)
{
	LOCALS;
L_0C061A90: BLKS(0x0C061A90u);
	r3 = 0xC29D718u; UPD(0x0C061A92u, 1);  /* 0C061A90 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C061A94u, 1);  /* 0C061A92 mov.l Rm,@-Rn */
	r2 = R32(r3); UPD(0x0C061A96u, 1);  /* 0C061A94 mov.l @Rm,Rn */
	r0 = 0x19671010u; UPD(0x0C061A98u, 1);  /* 0C061A96 mov.l @(disp,pc),Rn */
	T = r2 == r0;  /* 0C061A98 cmp/eq Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C061AC0u, 4); goto L_0C061AC0; } goto L_0C061A9E; }  /* 0C061A9A bt/s */
L_0C061A9E: BLKS(0x0C061A9Eu);
	T = (r2 & r2) == 0;  /* 0C061A9E tst Rm,Rn */
	if (T) { UPD(0x0C061AAEu, 5); goto L_0C061AAE; }  /* 0C061AA0 bt */
L_0C061AA2: BLKS(0x0C061AA2u);
	r4 = 0x0u;  /* 0C061AA2 mov #imm,Rn */
	r0 = 0xC22E01Cu; UPD(0x0C061AA6u, 2);  /* 0C061AA4 mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s8)R8(r0); UPD(0x0C061AA8u, 1);  /* 0C061AA6 mov.b @Rm,Rn */
	r2 += 0x1u;  /* 0C061AA8 add #imm,Rn */
	W32(r3, r4); UPD(0x0C061AACu, 2);  /* 0C061AAA mov.l Rm,@Rn */
	W8(r0, r2); UPD(0x0C061AAEu, 1);  /* 0C061AAC mov.b Rm,@Rn */
L_0C061AAE: BLKS(0x0C061AAEu);
	r15 = r14;  /* 0C061AAE mov Rm,Rn */
	IF(0x0C061AB0u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C061AB0 rts */
L_0C061AC0: BLKS(0x0C061AC0u);
	r0 = 0xC3C415Cu; UPD(0x0C061AC2u, 1);  /* 0C061AC0 mov.l @(disp,pc),Rn */
	r7 = R32(r0); UPD(0x0C061AC4u, 1);  /* 0C061AC2 mov.l @Rm,Rn */
	r5 = 0xF0000000u; UPD(0x0C061AC6u, 1);  /* 0C061AC4 mov.l @(disp,pc),Rn */
	r6 = R32(r7); UPD(0x0C061AC8u, 1);  /* 0C061AC6 mov.l @Rm,Rn */
	T = r6 == r5;  /* 0C061AC8 cmp/eq Rm,Rn */
	{ u32 c_ = T; r2 = 0x2u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C061AE0u, 4); goto L_0C061AE0; } goto L_0C061ACE; }  /* 0C061ACA bt/s */
L_0C061ACE: BLKS(0x0C061ACEu);
	r4 = 0xC29D18Cu; UPD(0x0C061AD0u, 2);  /* 0C061ACE mov.l @(disp,pc),Rn */
	W8(r4, r2); UPD(0x0C061AD2u, 1);  /* 0C061AD0 mov.b Rm,@Rn */
	r6 = 0x0u;  /* 0C061AD2 mov #imm,Rn */
	UPD(0x0C061AD4u, 1);
L_0C061AD4: BLKS(0x0C061AD4u);
	{ W32(r3, r6); /* slot mov.l Rm,@Rn */ UPD(0x0C061AAEu, 3); goto L_0C061AAE; }  /* 0C061AD4 bra */
L_0C061AE0: BLKS(0x0C061AE0u);
	r5 = 0xB8000010u; UPD(0x0C061AE2u, 1);  /* 0C061AE0 mov.l @(disp,pc),Rn */
	r0 = R32(r5); UPD(0x0C061AE4u, 1);  /* 0C061AE2 mov.l @Rm,Rn */
	r0 &= 0x10u;  /* 0C061AE4 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C061AE6 tst Rm,Rn */
	if (T) { UPD(0x0C061AAEu, 5); goto L_0C061AAE; }  /* 0C061AE8 bt */
L_0C061AEA: BLKS(0x0C061AEAu);
	r1 = 0x1u;  /* 0C061AEA mov #imm,Rn */
	r2 = 0xC3C4160u; UPD(0x0C061AEEu, 2);  /* 0C061AEC mov.l @(disp,pc),Rn */
	r5 = R32(r2); UPD(0x0C061AF0u, 1);  /* 0C061AEE mov.l @Rm,Rn */
	r4 = 0xB8000014u; UPD(0x0C061AF2u, 1);  /* 0C061AF0 mov.l @(disp,pc),Rn */
	r0 = 0xC22E008u; UPD(0x0C061AF4u, 1);  /* 0C061AF2 mov.l @(disp,pc),Rn */
	W32(r4, r5); UPD(0x0C061AF6u, 1);  /* 0C061AF4 mov.l Rm,@Rn */
	r6 = 0xB8000018u; UPD(0x0C061AF8u, 1);  /* 0C061AF6 mov.l @(disp,pc),Rn */
	r7 = R32(r0); UPD(0x0C061AFAu, 1);  /* 0C061AF8 mov.l @Rm,Rn */
	r2 = 0xC2380C8u; UPD(0x0C061AFCu, 1);  /* 0C061AFA mov.l @(disp,pc),Rn */
	W32(r6, r7); UPD(0x0C061AFEu, 1);  /* 0C061AFC mov.l Rm,@Rn */
	r4 = 0xB8000038u; UPD(0x0C061B00u, 1);  /* 0C061AFE mov.l @(disp,pc),Rn */
	r5 = R32(r2); UPD(0x0C061B02u, 1);  /* 0C061B00 mov.l @Rm,Rn */
	r0 = 0xC2289E4u; UPD(0x0C061B04u, 1);  /* 0C061B02 mov.l @(disp,pc),Rn */
	W32(r4, r5); UPD(0x0C061B06u, 1);  /* 0C061B04 mov.l Rm,@Rn */
	r6 = 0xB800003Cu; UPD(0x0C061B08u, 1);  /* 0C061B06 mov.l @(disp,pc),Rn */
	r7 = R32(r0); UPD(0x0C061B0Au, 1);  /* 0C061B08 mov.l @Rm,Rn */
	r2 = 0xC2B0394u; UPD(0x0C061B0Cu, 1);  /* 0C061B0A mov.l @(disp,pc),Rn */
	W32(r6, r7); UPD(0x0C061B0Eu, 1);  /* 0C061B0C mov.l Rm,@Rn */
	r4 = 0xB8000048u; UPD(0x0C061B10u, 1);  /* 0C061B0E mov.l @(disp,pc),Rn */
	r5 = R32(r2); UPD(0x0C061B12u, 1);  /* 0C061B10 mov.l @Rm,Rn */
	r0 = 0xC22E250u; UPD(0x0C061B14u, 1);  /* 0C061B12 mov.l @(disp,pc),Rn */
	W32(r4, r5); UPD(0x0C061B16u, 1);  /* 0C061B14 mov.l Rm,@Rn */
	r6 = 0xB8000040u; UPD(0x0C061B18u, 1);  /* 0C061B16 mov.l @(disp,pc),Rn */
	r7 = R32(r0); UPD(0x0C061B1Au, 1);  /* 0C061B18 mov.l @Rm,Rn */
	r2 = 0xC286100u; UPD(0x0C061B1Cu, 1);  /* 0C061B1A mov.l @(disp,pc),Rn */
	W32(r6, r7); UPD(0x0C061B1Eu, 1);  /* 0C061B1C mov.l Rm,@Rn */
	r4 = 0xB8000044u; UPD(0x0C061B20u, 1);  /* 0C061B1E mov.l @(disp,pc),Rn */
	r5 = R32(r2); UPD(0x0C061B22u, 1);  /* 0C061B20 mov.l @Rm,Rn */
	r0 = 0xC3C5440u; UPD(0x0C061B24u, 1);  /* 0C061B22 mov.l @(disp,pc),Rn */
	W32(r4, r5); UPD(0x0C061B26u, 1);  /* 0C061B24 mov.l Rm,@Rn */
	r6 = 0xB8000008u; UPD(0x0C061B28u, 1);  /* 0C061B26 mov.l @(disp,pc),Rn */
	r7 = R32(r0); UPD(0x0C061B2Au, 1);  /* 0C061B28 mov.l @Rm,Rn */
	W32(r6, r7); UPD(0x0C061B2Cu, 1);  /* 0C061B2A mov.l Rm,@Rn */
	r6 += 0xFFFFFFFCu;  /* 0C061B2C add #imm,Rn */
	W32(r6, r1); UPD(0x0C061B30u, 2);  /* 0C061B2E mov.l Rm,@Rn */
	{ r6 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C061AD4u, 3); goto L_0C061AD4; }  /* 0C061B30 bra */
}

/* FUN_0c061b90 */
void blk_f_0C061B90(sh3_t *c)
{
	LOCALS;
L_0C061B90: BLKS(0x0C061B90u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C061B92u, 1);  /* 0C061B90 mov.l Rm,@-Rn */
	r5 = 0x5u;  /* 0C061B92 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C061B96u, 2);  /* 0C061B94 mov.l Rm,@-Rn */
	r4 = 0x2u;  /* 0C061B96 mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C061B9Au, 2);  /* 0C061B98 mov.l Rm,@-Rn */
	r1 = 0x6u;  /* 0C061B9A mov #imm,Rn */
	IF(0x0C061B9Cu); r15 -= 4; W32(r15, PR); UPD(0x0C061B9Eu, 2);  /* 0C061B9C sts.l pr,@-Rn */
	r9 = 0x0u;  /* 0C061B9E mov #imm,Rn */
	r3 = 0xC2975F2u; UPD(0x0C061BA2u, 2);  /* 0C061BA0 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C061BA2 mov Rm,Rn */
	W8(r3, r5); UPD(0x0C061BA6u, 2);  /* 0C061BA4 mov.b Rm,@Rn */
	r3 += 0xFFFFFFFAu;  /* 0C061BA6 add #imm,Rn */
	r3 += 0x5u;  /* 0C061BA8 add #imm,Rn */
	W8(r3, r4); UPD(0x0C061BACu, 3);  /* 0C061BAA mov.b Rm,@Rn */
	{ u32 v_ = r1; r3 -= 1; W8(r3, v_); } UPD(0x0C061BAEu, 1);  /* 0C061BAC mov.b Rm,@-Rn */
	r3 += 0xFFFFFFFCu;  /* 0C061BAE add #imm,Rn */
	W8(r3, r9); UPD(0x0C061BB2u, 2);  /* 0C061BB0 mov.b Rm,@Rn */
	r0 = r3;  /* 0C061BB2 mov Rm,Rn */
	r8 = 0xC05D7CCu; UPD(0x0C061BB6u, 2);  /* 0C061BB4 mov.l @(disp,pc),Rn */
	r3 += 0x1u;  /* 0C061BB6 add #imm,Rn */
	r0 += 0x2u;  /* 0C061BB8 add #imm,Rn */
	W8(r3, r9); UPD(0x0C061BBCu, 3);  /* 0C061BBA mov.b Rm,@Rn */
	r4 = 0xC2B0808u; UPD(0x0C061BBEu, 1);  /* 0C061BBC mov.l @(disp,pc),Rn */
	IF(0x0C061BBEu); { u32 t_ = r8; PR = 0x0C061BC2u; W8(r0, r9); /* slot mov.b Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C05D7CC, 0x0C05D7CCu, 0x0C061BC2u); }  /* 0C061BBE jsr @Rn */
L_0C061BC2: BLKS(0x0C061BC2u);
	r7 = 0xC1729DCu; UPD(0x0C061BC4u, 1);  /* 0C061BC2 mov.l @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C061BC4 mov #imm,Rn */
	r6 = 0x9u;  /* 0C061BC6 mov #imm,Rn */
	r4 = 0xFFFFFFFCu;  /* 0C061BC8 mov #imm,Rn */
	r5 = 0x5u;  /* 0C061BCA mov #imm,Rn */
	UPD(0x0C061BCCu, 4);
L_0C061BCC: BLKS(0x0C061BCCu);
	{ u32 v_ = R32(r7); r7 += 4; r0 = v_; } UPD(0x0C061BCEu, 1);  /* 0C061BCC mov.l @Rm+,Rn */
	r2 = (u32)(s32)(s8)R8(r0); UPD(0x0C061BD0u, 1);  /* 0C061BCE mov.b @Rm,Rn */
	r0 = r2;  /* 0C061BD0 mov Rm,Rn */
	r0 &= 0xFu;  /* 0C061BD2 and #imm,r0 */
	T = (s32)r0 > (s32)r6;  /* 0C061BD4 cmp/gt Rm,Rn */
	r0 = 0xF0u; UPD(0x0C061BD8u, 4);  /* 0C061BD6 mov.w @(disp,pc),Rn */
	IF(0x0C061BD8u); r8 = T;  /* 0C061BD8 movt Rn */
	r2 &= r0;  /* 0C061BDA and Rm,Rn */
	IF(0x0C061BDCu); ARG0(0x424Cu); { s32 s_ = (s32)r4; if (s_ >= 0) r2 <<= (s_ & 31); else if ((s_ & 31) == 0) r2 = (u32)((s32)r2 >> 31); else r2 = (u32)((s32)r2 >> ((~s_ & 31) + 1)); }  /* 0C061BDC shad Rm,Rn */
	T = (s32)r2 > (s32)r6;  /* 0C061BDE cmp/gt Rm,Rn */
	IF(0x0C061BE0u); r2 = T;  /* 0C061BE0 movt Rn */
	r8 |= r2;  /* 0C061BE2 or Rm,Rn */
	T = (r8 & r8) == 0;  /* 0C061BE4 tst Rm,Rn */
	if (T) { UPD(0x0C061BEAu, 10); goto L_0C061BEA; }  /* 0C061BE6 bt */
L_0C061BE8: BLKS(0x0C061BE8u);
	r9 = 0x1u;  /* 0C061BE8 mov #imm,Rn */
	UPD(0x0C061BEAu, 1);
L_0C061BEA: BLKS(0x0C061BEAu);
	r8 = r3;  /* 0C061BEA mov Rm,Rn */
	r8 += 0x1u;  /* 0C061BEC add #imm,Rn */
	r3 = (u32)(s32)(s8)r8;  /* 0C061BEE exts.b Rm,Rn */
	T = (s32)r3 > (s32)r5;  /* 0C061BF0 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C061BCCu, 7); goto L_0C061BCC; }  /* 0C061BF2 bf */
L_0C061BF4: BLKS(0x0C061BF4u);
	r6 = 0x11u;  /* 0C061BF4 mov #imm,Rn */
	r8 = 0xC2B080Du; UPD(0x0C061BF8u, 2);  /* 0C061BF6 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r8); UPD(0x0C061BFAu, 1);  /* 0C061BF8 mov.b @Rm,Rn */
	r3 = r0;  /* 0C061BFA mov Rm,Rn */
	r3 += 0xFFFFFFFFu;  /* 0C061BFC add #imm,Rn */
	r7 = r3 & 0xFF;  /* 0C061BFE extu.b Rm,Rn */
	T = r7 > r6;  /* 0C061C00 cmp/hi Rm,Rn */
	{ u32 c_ = !T; r8 += 0xFFFFFFFBu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C061C08u, 7); goto L_0C061C08; } goto L_0C061C06; }  /* 0C061C02 bf/s */
L_0C061C06: BLKS(0x0C061C06u);
	r9 = 0x1u;  /* 0C061C06 mov #imm,Rn */
	UPD(0x0C061C08u, 2);
L_0C061C08: BLKS(0x0C061C08u);
	r8 += 0x4u;  /* 0C061C08 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r8); UPD(0x0C061C0Cu, 2);  /* 0C061C0A mov.b @Rm,Rn */
	r0 = r0 & 0xFF;  /* 0C061C0C extu.b Rm,Rn */
	r3 = 0xC1729F4u; UPD(0x0C061C10u, 2);  /* 0C061C0E mov.l @(disp,pc),Rn */
	r6 = r1 & 0xFF;  /* 0C061C10 extu.b Rm,Rn */
	IF(0x0C061C12u); r7 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C061C14u, 2);  /* 0C061C12 mov.b @(r0,Rm),Rn */
	T = (r6 & r6) == 0;  /* 0C061C14 tst Rm,Rn */
	IF(0x0C061C16u); r4 = T;  /* 0C061C16 movt Rn */
	r0 = r7 & 0xFF;  /* 0C061C18 extu.b Rm,Rn */
	T = r6 > r0;  /* 0C061C1A cmp/hi Rm,Rn */
	IF(0x0C061C1Cu); r5 = T;  /* 0C061C1C movt Rn */
	r4 |= r5;  /* 0C061C1E or Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C061C20 tst Rm,Rn */
	{ u32 c_ = T; r8 += 0xFFFFFFFCu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C061C28u, 10); goto L_0C061C28; } goto L_0C061C26; }  /* 0C061C22 bt/s */
L_0C061C26: BLKS(0x0C061C26u);
	r9 = 0x1u;  /* 0C061C26 mov #imm,Rn */
	UPD(0x0C061C28u, 2);
L_0C061C28: BLKS(0x0C061C28u);
	r8 += 0x2u;  /* 0C061C28 add #imm,Rn */
	r5 = (u32)(s32)(s8)R8(r8); UPD(0x0C061C2Cu, 2);  /* 0C061C2A mov.b @Rm,Rn */
	r4 = 0x23u;  /* 0C061C2C mov #imm,Rn */
	T = r5 > r4;  /* 0C061C2E cmp/hi Rm,Rn */
	{ u32 c_ = !T; r8 += 0xFFFFFFFEu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C061C36u, 5); goto L_0C061C36; } goto L_0C061C34; }  /* 0C061C30 bf/s */
L_0C061C34: BLKS(0x0C061C34u);
	r9 = 0x1u;  /* 0C061C34 mov #imm,Rn */
	UPD(0x0C061C36u, 2);
L_0C061C36: BLKS(0x0C061C36u);
	r8 += 0x1u;  /* 0C061C36 add #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r8); UPD(0x0C061C3Au, 2);  /* 0C061C38 mov.b @Rm,Rn */
	r0 = r2 & 0xFF;  /* 0C061C3A extu.b Rm,Rn */
	r2 = 0x59u;  /* 0C061C3C mov #imm,Rn */
	T = r0 > r2;  /* 0C061C3E cmp/hi Rm,Rn */
	{ u32 c_ = !T; r8 += 0xFFFFFFFFu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C061C46u, 6); goto L_0C061C46; } goto L_0C061C44; }  /* 0C061C40 bf/s */
L_0C061C44: BLKS(0x0C061C44u);
	r9 = 0x1u;  /* 0C061C44 mov #imm,Rn */
	UPD(0x0C061C46u, 2);
L_0C061C46: BLKS(0x0C061C46u);
	r7 = (u32)(s32)(s8)R8(r8); UPD(0x0C061C48u, 1);  /* 0C061C46 mov.b @Rm,Rn */
	r6 = r7 & 0xFF;  /* 0C061C48 extu.b Rm,Rn */
	T = r6 > r2;  /* 0C061C4A cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C061C50u, 5); goto L_0C061C50; }  /* 0C061C4C bf */
L_0C061C4E: BLKS(0x0C061C4Eu);
	r9 = 0x1u;  /* 0C061C4E mov #imm,Rn */
	UPD(0x0C061C50u, 1);
L_0C061C50: BLKS(0x0C061C50u);
	T = (r9 & r9) == 0;  /* 0C061C50 tst Rm,Rn */
	if (!T) { UPD(0x0C061C60u, 4); goto L_0C061C60; }  /* 0C061C52 bf */
L_0C061C54: BLKS(0x0C061C54u);
	r15 = r14;  /* 0C061C54 mov Rm,Rn */
	IF(0x0C061C56u); PR = R32(r15); r15 += 4; UPD(0x0C061C58u, 2);  /* 0C061C56 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C061C5Au, 1);  /* 0C061C58 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C061C5Cu, 1);  /* 0C061C5A mov.l @Rm+,Rn */
	IF(0x0C061C5Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C061C5C rts */
L_0C061C60: BLKS(0x0C061C60u);
	r9 = 0xC0C23D0u; UPD(0x0C061C62u, 1);  /* 0C061C60 mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C061C62 mov Rm,Rn */
	r5 = 0xC2975ECu; UPD(0x0C061C66u, 2);  /* 0C061C64 mov.l @(disp,pc),Rn */
	IF(0x0C061C66u); { u32 t_ = r9; PR = 0x0C061C6Au; r6 = 0x8u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C23D0, 0x0C0C23D0u, 0x0C061C6Au); }  /* 0C061C66 jsr @Rn */
L_0C061C6A: BLKS(0x0C061C6Au);
	r3 = 0xC05D944u; UPD(0x0C061C6Cu, 1);  /* 0C061C6A mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C061C6C mov Rm,Rn */
	r15 = r14;  /* 0C061C6E mov Rm,Rn */
	IF(0x0C061C70u); PR = R32(r15); r15 += 4; UPD(0x0C061C72u, 3);  /* 0C061C70 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C061C74u, 1);  /* 0C061C72 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C061C76u, 1);  /* 0C061C74 mov.l @Rm+,Rn */
	IF(0x0C061C76u); { u32 tv_ = r3; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C05D944u: TAIL(blk_f_0C05D944); default: JUMPD(tv_); } }  /* 0C061C76 jmp @Rn */
}

void blk_f_0C061CA0(sh3_t *c)
{
	LOCALS;
L_0C061CA0: BLKS(0x0C061CA0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C061CA2u, 1);  /* 0C061CA0 mov.l Rm,@-Rn */
	r4 = 0x5u;  /* 0C061CA2 mov #imm,Rn */
	r0 = 0xC0562D0u; UPD(0x0C061CA6u, 2);  /* 0C061CA4 mov.l @(disp,pc),Rn */
	IF(0x0C061CA6u); r15 -= 4; W32(r15, PR); UPD(0x0C061CA8u, 1);  /* 0C061CA6 sts.l pr,@-Rn */
	IF(0x0C061CA8u); { u32 t_ = r0; PR = 0x0C061CACu; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0562D0, 0x0C0562D0u, 0x0C061CACu); }  /* 0C061CA8 jsr @Rn */
L_0C061CAC: BLKS(0x0C061CACu);
	r3 = 0xC172978u; UPD(0x0C061CAEu, 1);  /* 0C061CAC mov.l @(disp,pc),Rn */
	r2 = R32(r3); UPD(0x0C061CB0u, 1);  /* 0C061CAE mov.l @Rm,Rn */
	r0 -= r2;  /* 0C061CB0 sub Rm,Rn */
	r2 = 0xC17297Cu; UPD(0x0C061CB4u, 2);  /* 0C061CB2 mov.l @(disp,pc),Rn */
	W32(r2, r0); UPD(0x0C061CB6u, 1);  /* 0C061CB4 mov.l Rm,@Rn */
	r15 = r14;  /* 0C061CB6 mov Rm,Rn */
	IF(0x0C061CB8u); PR = R32(r15); r15 += 4; UPD(0x0C061CBAu, 2);  /* 0C061CB8 lds.l @Rn+,pr */
	IF(0x0C061CBAu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C061CBA rts */
}

void blk_f_0C061CD0(sh3_t *c)
{
	LOCALS;
L_0C061CD0: BLKS(0x0C061CD0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C061CD2u, 1);  /* 0C061CD0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C061CD4u, 1);  /* 0C061CD2 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C061CD6u, 1);  /* 0C061CD4 mov.l Rm,@-Rn */
	r7 = 0xC3C5448u; UPD(0x0C061CD8u, 1);  /* 0C061CD6 mov.l @(disp,pc),Rn */
	IF(0x0C061CD8u); r15 -= 4; W32(r15, PR); UPD(0x0C061CDAu, 1);  /* 0C061CD8 sts.l pr,@-Rn */
	r6 = 0xB8000030u; UPD(0x0C061CDCu, 1);  /* 0C061CDA mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C061CDC mov Rm,Rn */
	r8 = R32(r7); UPD(0x0C061CE0u, 2);  /* 0C061CDE mov.l @Rm,Rn */
	r2 = 0xC286310u; UPD(0x0C061CE2u, 1);  /* 0C061CE0 mov.l @(disp,pc),Rn */
	W32(r6, r8); UPD(0x0C061CE4u, 1);  /* 0C061CE2 mov.l Rm,@Rn */
	r4 = 0xB8000034u; UPD(0x0C061CE6u, 1);  /* 0C061CE4 mov.l @(disp,pc),Rn */
	r5 = R32(r2); UPD(0x0C061CE8u, 1);  /* 0C061CE6 mov.l @Rm,Rn */
	r3 = 0xC2380CCu; UPD(0x0C061CEAu, 1);  /* 0C061CE8 mov.l @(disp,pc),Rn */
	W32(r4, r5); UPD(0x0C061CECu, 1);  /* 0C061CEA mov.l Rm,@Rn */
	r7 = 0xC061A90u; UPD(0x0C061CEEu, 1);  /* 0C061CEC mov.l @(disp,pc),Rn */
	r0 = R32(r3); UPD(0x0C061CF0u, 1);  /* 0C061CEE mov.l @Rm,Rn */
	r9 = 0xB8000028u; UPD(0x0C061CF2u, 1);  /* 0C061CF0 mov.l @(disp,pc),Rn */
	r8 = 0xC0C1D50u; UPD(0x0C061CF4u, 1);  /* 0C061CF2 mov.l @(disp,pc),Rn */
	W32(r9, r0); UPD(0x0C061CF6u, 1);  /* 0C061CF4 mov.l Rm,@Rn */
	IF(0x0C061CF6u); { u32 t_ = r7; PR = 0x0C061CFAu; IF(0x0C061CF8u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C061A90, 0x0C061A90u, 0x0C061CFAu); }  /* 0C061CF6 jsr @Rn */
L_0C061CFA: BLKS(0x0C061CFAu);
	IF(0x0C061CFAu); { u32 t_ = r8; PR = 0x0C061CFEu; IF(0x0C061CFCu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0C1D50, 0x0C0C1D50u, 0x0C061CFEu); }  /* 0C061CFA jsr @Rn */
L_0C061CFE: BLKS(0x0C061CFEu);
	r3 = 0xC3C3FCCu; UPD(0x0C061D00u, 1);  /* 0C061CFE mov.l @(disp,pc),Rn */
	r5 = 0x1u;  /* 0C061D00 mov #imm,Rn */
	r2 = R32(r3); UPD(0x0C061D04u, 2);  /* 0C061D02 mov.l @Rm,Rn */
	r0 = 0xC060890u; UPD(0x0C061D06u, 1);  /* 0C061D04 mov.l @(disp,pc),Rn */
	r2 += 0x1u;  /* 0C061D06 add #imm,Rn */
	r6 = 0xC23946Cu; UPD(0x0C061D0Au, 2);  /* 0C061D08 mov.l @(disp,pc),Rn */
	r4 = 0xC233726u; UPD(0x0C061D0Cu, 1);  /* 0C061D0A mov.l @(disp,pc),Rn */
	W32(r3, r2); UPD(0x0C061D0Eu, 1);  /* 0C061D0C mov.l Rm,@Rn */
	W8(r4, r5); UPD(0x0C061D10u, 1);  /* 0C061D0E mov.b Rm,@Rn */
	IF(0x0C061D10u); { u32 t_ = r0; PR = 0x0C061D14u; W8(r6, r5); /* slot mov.b Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C060890, 0x0C060890u, 0x0C061D14u); }  /* 0C061D10 jsr @Rn */
L_0C061D14: BLKS(0x0C061D14u);
	r0 = 0xC0562D0u; UPD(0x0C061D16u, 1);  /* 0C061D14 mov.l @(disp,pc),Rn */
	r4 = 0x5u;  /* 0C061D16 mov #imm,Rn */
	r8 = 0xC3C4028u; UPD(0x0C061D1Au, 2);  /* 0C061D18 mov.l @(disp,pc),Rn */
	IF(0x0C061D1Au); { u32 t_ = r0; PR = 0x0C061D1Eu; r9 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0562D0, 0x0C0562D0u, 0x0C061D1Eu); }  /* 0C061D1A jsr @Rn */
L_0C061D1E: BLKS(0x0C061D1Eu);
	W32(r8, r0); UPD(0x0C061D20u, 1);  /* 0C061D1E mov.l Rm,@Rn */
	r2 = 0xC2B1818u; UPD(0x0C061D22u, 1);  /* 0C061D20 mov.l @(disp,pc),Rn */
	r0 -= r9;  /* 0C061D22 sub Rm,Rn */
	W32(r2, r0); UPD(0x0C061D26u, 2);  /* 0C061D24 mov.l Rm,@Rn */
	r15 = r14;  /* 0C061D26 mov Rm,Rn */
	IF(0x0C061D28u); PR = R32(r15); r15 += 4; UPD(0x0C061D2Au, 2);  /* 0C061D28 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C061D2Cu, 1);  /* 0C061D2A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C061D2Eu, 1);  /* 0C061D2C mov.l @Rm+,Rn */
	IF(0x0C061D2Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C061D2E rts */
}

/* FUN_0c061f70 */
void blk_f_0C061F70(sh3_t *c)
{
	LOCALS;
L_0C061F70: BLKS(0x0C061F70u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C061F72u, 1);  /* 0C061F70 mov.l Rm,@-Rn */
	r4 = 0x5u;  /* 0C061F72 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C061F76u, 2);  /* 0C061F74 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C061F78u, 1);  /* 0C061F76 mov.l Rm,@-Rn */
	r0 = 0xC0562D0u; UPD(0x0C061F7Au, 1);  /* 0C061F78 mov.l @(disp,pc),Rn */
	IF(0x0C061F7Au); r15 -= 4; W32(r15, PR); UPD(0x0C061F7Cu, 1);  /* 0C061F7A sts.l pr,@-Rn */
	r8 = 0xC22E018u; UPD(0x0C061F7Eu, 1);  /* 0C061F7C mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C061F7E mov Rm,Rn */
	IF(0x0C061F80u); { u32 t_ = r0; PR = 0x0C061F84u; r9 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0562D0, 0x0C0562D0u, 0x0C061F84u); }  /* 0C061F80 jsr @Rn */
L_0C061F84: BLKS(0x0C061F84u);
	W32(r8, r0); UPD(0x0C061F86u, 1);  /* 0C061F84 mov.l Rm,@Rn */
	r0 -= r9;  /* 0C061F86 sub Rm,Rn */
	r15 = r14;  /* 0C061F88 mov Rm,Rn */
	IF(0x0C061F8Au); PR = R32(r15); r15 += 4; UPD(0x0C061F8Cu, 3);  /* 0C061F8A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C061F8Eu, 1);  /* 0C061F8C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C061F90u, 1);  /* 0C061F8E mov.l @Rm+,Rn */
	IF(0x0C061F90u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C061F90 rts */
}

/* FUN_0c061fa0 */
void blk_f_0C061FA0(sh3_t *c)
{
	LOCALS;
L_0C061FA0: BLKS(0x0C061FA0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C061FA2u, 1);  /* 0C061FA0 mov.l Rm,@-Rn */
	r4 = 0x5u;  /* 0C061FA2 mov #imm,Rn */
	r0 = 0xC0562D0u; UPD(0x0C061FA6u, 2);  /* 0C061FA4 mov.l @(disp,pc),Rn */
	IF(0x0C061FA6u); r15 -= 4; W32(r15, PR); UPD(0x0C061FA8u, 1);  /* 0C061FA6 sts.l pr,@-Rn */
	IF(0x0C061FA8u); { u32 t_ = r0; PR = 0x0C061FACu; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0562D0, 0x0C0562D0u, 0x0C061FACu); }  /* 0C061FA8 jsr @Rn */
L_0C061FAC: BLKS(0x0C061FACu);
	r3 = 0xC3C4028u; UPD(0x0C061FAEu, 1);  /* 0C061FAC mov.l @(disp,pc),Rn */
	r2 = R32(r3); UPD(0x0C061FB0u, 1);  /* 0C061FAE mov.l @Rm,Rn */
	r0 -= r2;  /* 0C061FB0 sub Rm,Rn */
	r15 = r14;  /* 0C061FB2 mov Rm,Rn */
	IF(0x0C061FB4u); PR = R32(r15); r15 += 4; UPD(0x0C061FB6u, 3);  /* 0C061FB4 lds.l @Rn+,pr */
	IF(0x0C061FB6u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C061FB6 rts */
}

/* FUN_0c062000 */
void blk_f_0C062000(sh3_t *c)
{
	LOCALS;
L_0C062000: BLKS(0x0C062000u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C062002u, 1);  /* 0C062000 mov.l Rm,@-Rn */
	r5 = 0x0u;  /* 0C062002 mov #imm,Rn */
	r0 = 0xC233728u; UPD(0x0C062006u, 2);  /* 0C062004 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C062006 mov Rm,Rn */
	r7 = 0x0u;  /* 0C062008 mov #imm,Rn */
	r3 = 0x1Fu;  /* 0C06200A mov #imm,Rn */
	r6 = 0x0u;  /* 0C06200C mov #imm,Rn */
	r4 = 0x28u;  /* 0C06200E mov #imm,Rn */
	UPD(0x0C062010u, 5);
L_0C062010: BLKS(0x0C062010u);
	r2 = r6;  /* 0C062010 mov Rm,Rn */
	IF(0x0C062012u); r2 <<= 2;  /* 0C062012 shll2 Rn */
	r1 = 0x0u;  /* 0C062014 mov #imm,Rn */
	r2 += r0;  /* 0C062016 add Rm,Rn */
	UPD(0x0C062018u, 4);
L_0C062018: BLKS(0x0C062018u);
	W32(r2, r7); UPD(0x0C06201Au, 1);  /* 0C062018 mov.l Rm,@Rn */
	r1 += 0x1u;  /* 0C06201A add #imm,Rn */
	r1 = (u32)(s32)(s8)r1;  /* 0C06201C exts.b Rm,Rn */
	T = (s32)r1 > (s32)r3;  /* 0C06201E cmp/gt Rm,Rn */
	{ u32 c_ = !T; r2 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C062018u, 6); goto L_0C062018; } goto L_0C062024; }  /* 0C062020 bf/s */
L_0C062024: BLKS(0x0C062024u);
	r2 = r5;  /* 0C062024 mov Rm,Rn */
	r2 += 0x1u;  /* 0C062026 add #imm,Rn */
	r5 = (u32)(s32)(s8)r2;  /* 0C062028 exts.b Rm,Rn */
	T = (s32)r5 > (s32)r4;  /* 0C06202A cmp/gt Rm,Rn */
	{ u32 c_ = !T; r6 += 0x20u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C062010u, 8); goto L_0C062010; } goto L_0C062030; }  /* 0C06202C bf/s */
L_0C062030: BLKS(0x0C062030u);
	r5 = 0xC23802Cu; UPD(0x0C062032u, 2);  /* 0C062030 mov.l @(disp,pc),Rn */
	r6 = 0x4u;  /* 0C062032 mov #imm,Rn */
	r3 = 0xC234BF8u; UPD(0x0C062036u, 2);  /* 0C062034 mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C062036 mov #imm,Rn */
	r1 = 0x11000000u; UPD(0x0C06203Au, 2);  /* 0C062038 mov.l @(disp,pc),Rn */
	r0 = 0xC3C8470u; UPD(0x0C06203Cu, 1);  /* 0C06203A mov.l @(disp,pc),Rn */
	W32(r5, r6); UPD(0x0C06203Eu, 1);  /* 0C06203C mov.l Rm,@Rn */
	W32(r3, r4); UPD(0x0C062040u, 1);  /* 0C06203E mov.l Rm,@Rn */
	W32(r0, r1); UPD(0x0C062042u, 1);  /* 0C062040 mov.l Rm,@Rn */
	r15 = r14;  /* 0C062042 mov Rm,Rn */
	IF(0x0C062044u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C062044 rts */
}

/* FUN_0c062060 */
void blk_f_0C062060(sh3_t *c)
{
	LOCALS;
L_0C062060: BLKS(0x0C062060u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C062062u, 1);  /* 0C062060 mov.l Rm,@-Rn */
	r5 = 0x0u;  /* 0C062062 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C062066u, 2);  /* 0C062064 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C062068u, 1);  /* 0C062066 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06206Au, 1);  /* 0C062068 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C06206Cu, 1);  /* 0C06206A mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C06206Eu, 1);  /* 0C06206C mov.l Rm,@-Rn */
	r0 = 0xC3C415Cu; UPD(0x0C062070u, 1);  /* 0C06206E mov.l @(disp,pc),Rn */
	r13 = 0x0u;  /* 0C062070 mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C062074u, 2);  /* 0C062072 mov.l Rm,@-Rn */
	r3 = R32(r0); UPD(0x0C062076u, 1);  /* 0C062074 mov.l @Rm,Rn */
	r14 = r15;  /* 0C062076 mov Rm,Rn */
	r12 = 0x10000000u; UPD(0x0C06207Au, 2);  /* 0C062078 mov.l @(disp,pc),Rn */
	r11 = 0xC29D088u; UPD(0x0C06207Cu, 1);  /* 0C06207A mov.l @(disp,pc),Rn */
	r10 = 0xC29D72Cu; UPD(0x0C06207Eu, 1);  /* 0C06207C mov.l @(disp,pc),Rn */
	r9 = 0xF80008u; UPD(0x0C062080u, 1);  /* 0C06207E mov.l @(disp,pc),Rn */
	r8 = 0xC232314u; UPD(0x0C062082u, 1);  /* 0C062080 mov.l @(disp,pc),Rn */
	r0 = 0x70007u; UPD(0x0C062084u, 1);  /* 0C062082 mov.l @(disp,pc),Rn */
L_0C062084: BLKS(0x0C062084u);
	r6 = 0x0u;  /* 0C062084 mov #imm,Rn */
	r7 = 0x0u;  /* 0C062086 mov #imm,Rn */
	UPD(0x0C062088u, 2);
L_0C062088: BLKS(0x0C062088u);
	W32(r3, r12); UPD(0x0C06208Au, 1);  /* 0C062088 mov.l Rm,@Rn */
	r6 += 0x1u;  /* 0C06208A add #imm,Rn */
	r2 = R32(r11); UPD(0x0C06208Eu, 2);  /* 0C06208C mov.l @Rm,Rn */
	r3 += 0x4u;  /* 0C06208E add #imm,Rn */
	r2 |= r9;  /* 0C062090 or Rm,Rn */
	W32(r3, r2); UPD(0x0C062094u, 3);  /* 0C062092 mov.l Rm,@Rn */
	r2 = R32(r8); UPD(0x0C062096u, 1);  /* 0C062094 mov.l @Rm,Rn */
	r3 += 0x4u;  /* 0C062096 add #imm,Rn */
	r1 = R32(r10); UPD(0x0C06209Au, 2);  /* 0C062098 mov.l @Rm,Rn */
	r2 += r5;  /* 0C06209A add Rm,Rn */
	r1 += r7;  /* 0C06209C add Rm,Rn */
	IF(0x0C06209Eu); r2 <<= 16;  /* 0C06209E shll16 Rn */
	r2 |= r1;  /* 0C0620A0 or Rm,Rn */
	W32(r3, r2); UPD(0x0C0620A4u, 5);  /* 0C0620A2 mov.l Rm,@Rn */
	r7 += 0x8u;  /* 0C0620A4 add #imm,Rn */
	r3 += 0x4u;  /* 0C0620A6 add #imm,Rn */
	W32(r3, r0); UPD(0x0C0620AAu, 3);  /* 0C0620A8 mov.l Rm,@Rn */
	r2 = 0x1Du;  /* 0C0620AA mov #imm,Rn */
	r3 += 0x4u;  /* 0C0620AC add #imm,Rn */
	W32(r3, r4); UPD(0x0C0620B0u, 3);  /* 0C0620AE mov.l Rm,@Rn */
	T = (s32)r6 > (s32)r2;  /* 0C0620B0 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r3 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C062088u, 4); goto L_0C062088; } goto L_0C0620B6; }  /* 0C0620B2 bf/s */
L_0C0620B6: BLKS(0x0C0620B6u);
	r13 += 0x1u;  /* 0C0620B6 add #imm,Rn */
	r6 = 0x27u;  /* 0C0620B8 mov #imm,Rn */
	T = (s32)r13 > (s32)r6;  /* 0C0620BA cmp/gt Rm,Rn */
	{ u32 c_ = !T; r5 += 0x8u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C062084u, 7); goto L_0C062084; } goto L_0C0620C0; }  /* 0C0620BC bf/s */
L_0C0620C0: BLKS(0x0C0620C0u);
	r0 = 0xC3C415Cu; UPD(0x0C0620C2u, 2);  /* 0C0620C0 mov.l @(disp,pc),Rn */
	W32(r0, r3); UPD(0x0C0620C4u, 1);  /* 0C0620C2 mov.l Rm,@Rn */
	r15 = r14;  /* 0C0620C4 mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0620C8u, 2);  /* 0C0620C6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0620CAu, 1);  /* 0C0620C8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0620CCu, 1);  /* 0C0620CA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0620CEu, 1);  /* 0C0620CC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0620D0u, 1);  /* 0C0620CE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0620D2u, 1);  /* 0C0620D0 mov.l @Rm+,Rn */
	IF(0x0C0620D2u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0620D2 rts */
}

/* FUN_0c062250 */
void blk_f_0C062250(sh3_t *c)
{
	LOCALS;
L_0C062250: BLKS(0x0C062250u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C062252u, 1);  /* 0C062250 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C062254u, 1);  /* 0C062252 mov.l Rm,@-Rn */
	r8 = 0x0u;  /* 0C062254 mov #imm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C062258u, 2);  /* 0C062256 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06225Au, 1);  /* 0C062258 mov.l Rm,@-Rn */
	r11 = 0xC29D718u; UPD(0x0C06225Cu, 1);  /* 0C06225A mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06225Eu, 1);  /* 0C06225C mov.l Rm,@-Rn */
	W32(r11, r8); UPD(0x0C062260u, 1);  /* 0C06225E mov.l Rm,@Rn */
	IF(0x0C062260u); r15 -= 4; W32(r15, PR); UPD(0x0C062262u, 1);  /* 0C062260 sts.l pr,@-Rn */
	r8 = 0xC3C415Cu; UPD(0x0C062264u, 1);  /* 0C062262 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C062264 mov Rm,Rn */
	r9 = 0xC3C5440u; UPD(0x0C062268u, 2);  /* 0C062266 mov.l @(disp,pc),Rn */
	r7 = R32(r8); UPD(0x0C06226Au, 1);  /* 0C062268 mov.l @Rm,Rn */
	r3 = R32(r9); UPD(0x0C06226Cu, 1);  /* 0C06226A mov.l @Rm,Rn */
	r0 = 0x66666667u; UPD(0x0C06226Eu, 1);  /* 0C06226C mov.l @(disp,pc),Rn */
	r7 -= r3;  /* 0C06226E sub Rm,Rn */
	{ s64 r_ = (s64)(s32)r7 * (s64)(s32)r0; MACH = (u32)((u64)r_ >> 32); MACL = (u32)r_; }  /* 0C062270 dmuls.l Rm,Rn */
	r5 = 0xC0612D0u; UPD(0x0C062274u, 4);  /* 0C062272 mov.l @(disp,pc),Rn */
	IF(0x0C062274u); r6 = MACH;  /* 0C062274 sts mach,Rn */
	IF(0x0C062276u); T = r6 & 1; r6 = (u32)((s32)r6 >> 1);  /* 0C062276 shar Rn */
	IF(0x0C062278u); T = r6 & 1; r6 = (u32)((s32)r6 >> 1);  /* 0C062278 shar Rn */
	IF(0x0C06227Au); T = r6 & 1; r6 = (u32)((s32)r6 >> 1);  /* 0C06227A shar Rn */
	IF(0x0C06227Cu); T = r7 >> 31; r7 <<= 1;  /* 0C06227C shll Rn */
	{ u32 a_ = r7, t_ = a_ - r7, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r7 = r_; }  /* 0C06227E subc Rm,Rn */
	r10 = 0xC2B1A34u; UPD(0x0C062282u, 7);  /* 0C062280 mov.l @(disp,pc),Rn */
	r6 -= r7;  /* 0C062282 sub Rm,Rn */
	IF(0x0C062284u); { u32 t_ = r5; PR = 0x0C062288u; W32(r10, r6); /* slot mov.l Rm,@Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0612D0, 0x0C0612D0u, 0x0C062288u); }  /* 0C062284 jsr @Rn */
L_0C062288: BLKS(0x0C062288u);
	r2 = 0xC0616F0u; UPD(0x0C06228Au, 1);  /* 0C062288 mov.l @(disp,pc),Rn */
	IF(0x0C06228Au); { u32 t_ = r2; PR = 0x0C06228Eu; IF(0x0C06228Cu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0616F0, 0x0C0616F0u, 0x0C06228Eu); }  /* 0C06228A jsr @Rn */
L_0C06228E: BLKS(0x0C06228Eu);
	r2 = R32(r8); UPD(0x0C062290u, 1);  /* 0C06228E mov.l @Rm,Rn */
	r4 = 0xF0000000u; UPD(0x0C062292u, 1);  /* 0C062290 mov.l @(disp,pc),Rn */
	r3 = R32(r9); UPD(0x0C062294u, 1);  /* 0C062292 mov.l @Rm,Rn */
	W32(r2, r4); UPD(0x0C062296u, 1);  /* 0C062294 mov.l Rm,@Rn */
	r0 = 0xC22E24Cu; UPD(0x0C062298u, 1);  /* 0C062296 mov.l @(disp,pc),Rn */
	r2 -= r3;  /* 0C062298 sub Rm,Rn */
	W32(r0, r2); UPD(0x0C06229Cu, 2);  /* 0C06229A mov.l Rm,@Rn */
	r3 = 0xC2975E8u; UPD(0x0C06229Eu, 1);  /* 0C06229C mov.l @(disp,pc),Rn */
	r10 = R32(r10); UPD(0x0C0622A0u, 1);  /* 0C06229E mov.l @Rm,Rn */
	r0 = R32(r3); UPD(0x0C0622A2u, 1);  /* 0C0622A0 mov.l @Rm,Rn */
	T = (s32)r10 > (s32)r0;  /* 0C0622A2 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0622A8u, 4); goto L_0C0622A8; }  /* 0C0622A4 bf */
L_0C0622A6: BLKS(0x0C0622A6u);
	W32(r3, r10); UPD(0x0C0622A8u, 1);  /* 0C0622A6 mov.l Rm,@Rn */
L_0C0622A8: BLKS(0x0C0622A8u);
	r3 = 0xC3C43C0u; UPD(0x0C0622AAu, 1);  /* 0C0622A8 mov.l @(disp,pc),Rn */
	r9 = R32(r3); UPD(0x0C0622ACu, 1);  /* 0C0622AA mov.l @Rm,Rn */
	T = (s32)r2 > (s32)r9;  /* 0C0622AC cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0622B2u, 4); goto L_0C0622B2; }  /* 0C0622AE bf */
L_0C0622B0: BLKS(0x0C0622B0u);
	W32(r3, r2); UPD(0x0C0622B2u, 1);  /* 0C0622B0 mov.l Rm,@Rn */
L_0C0622B2: BLKS(0x0C0622B2u);
	r10 = 0x19671010u; UPD(0x0C0622B4u, 1);  /* 0C0622B2 mov.l @(disp,pc),Rn */
	W32(r11, r10); UPD(0x0C0622B6u, 1);  /* 0C0622B4 mov.l Rm,@Rn */
	r15 = r14;  /* 0C0622B6 mov Rm,Rn */
	IF(0x0C0622B8u); PR = R32(r15); r15 += 4; UPD(0x0C0622BAu, 2);  /* 0C0622B8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0622BCu, 1);  /* 0C0622BA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0622BEu, 1);  /* 0C0622BC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0622C0u, 1);  /* 0C0622BE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0622C2u, 1);  /* 0C0622C0 mov.l @Rm+,Rn */
	IF(0x0C0622C2u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0622C2 rts */
}

/* FUN_0c062300 */
void blk_f_0C062300(sh3_t *c)
{
	LOCALS;
L_0C062300: BLKS(0x0C062300u);
	r0 = 0x5u;  /* 0C062300 mov #imm,Rn */
	IF(0x0C062302u); ARG0(0x450Du); { s32 s_ = (s32)r0; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = 0; else r5 >>= ((~s_ & 31) + 1); }  /* 0C062302 shld Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C062306u, 3);  /* 0C062304 mov.l Rm,@-Rn */
	r6 += r5;  /* 0C062306 add Rm,Rn */
	r0 = 0xC233744u; UPD(0x0C06230Au, 2);  /* 0C062308 mov.l @(disp,pc),Rn */
	IF(0x0C06230Au); r6 <<= 2;  /* 0C06230A shll2 Rn */
	r3 = 0xC17299Cu; UPD(0x0C06230Eu, 2);  /* 0C06230C mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C06230E mov Rm,Rn */
	r2 = 0x7u;  /* 0C062310 mov #imm,Rn */
	r6 += r0;  /* 0C062312 add Rm,Rn */
	UPD(0x0C062314u, 3);
L_0C062314: BLKS(0x0C062314u);
	r0 = 0xFu;  /* 0C062314 mov #imm,Rn */
	r0 &= r4;  /* 0C062316 and Rm,Rn */
	IF(0x0C062318u); r0 <<= 2;  /* 0C062318 shll2 Rn */
	IF(0x0C06231Au); r5 = R32(r0 + r3); UPD(0x0C06231Cu, 4);  /* 0C06231A mov.l @(r0,Rm),Rn */
	IF(0x0C06231Cu); r4 >>= 2;  /* 0C06231C shlr2 Rn */
	W32(r6, r5); UPD(0x0C062320u, 2);  /* 0C06231E mov.l Rm,@Rn */
	r2 += 0xFFFFFFFFu;  /* 0C062320 add #imm,Rn */
	r6 += 0xFFFFFFFCu;  /* 0C062322 add #imm,Rn */
	IF(0x0C062324u); T = (s32)r2 >= 0;  /* 0C062324 cmp/pz Rn */
	{ u32 c_ = T; IF(0x0C062328u); r4 >>= 2; /* slot shlr2 Rn */ if (c_) { UPD(0x0C062314u, 6); goto L_0C062314; } goto L_0C06232A; }  /* 0C062326 bt/s */
L_0C06232A: BLKS(0x0C06232Au);
	r15 = r14;  /* 0C06232A mov Rm,Rn */
	IF(0x0C06232Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C06232C rts */
}

/* FUN_0c0623c0 */
void blk_f_0C0623C0(sh3_t *c)
{
	LOCALS;
L_0C0623C0: BLKS(0x0C0623C0u);
	r0 = 0x5u;  /* 0C0623C0 mov #imm,Rn */
	IF(0x0C0623C2u); ARG0(0x450Du); { s32 s_ = (s32)r0; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = 0; else r5 >>= ((~s_ & 31) + 1); }  /* 0C0623C2 shld Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0623C6u, 3);  /* 0C0623C4 mov.l Rm,@-Rn */
	r6 += r5;  /* 0C0623C6 add Rm,Rn */
	r0 = 0xC233734u; UPD(0x0C0623CAu, 2);  /* 0C0623C8 mov.l @(disp,pc),Rn */
	IF(0x0C0623CAu); r6 <<= 2;  /* 0C0623CA shll2 Rn */
	r3 = 0xC17299Cu; UPD(0x0C0623CEu, 2);  /* 0C0623CC mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0623CE mov Rm,Rn */
	r4 = r4 & 0xFFFF;  /* 0C0623D0 extu.w Rm,Rn */
	r2 = 0x3u;  /* 0C0623D2 mov #imm,Rn */
	r6 += r0;  /* 0C0623D4 add Rm,Rn */
	UPD(0x0C0623D6u, 4);
L_0C0623D6: BLKS(0x0C0623D6u);
	r0 = 0xFu;  /* 0C0623D6 mov #imm,Rn */
	r0 &= r4;  /* 0C0623D8 and Rm,Rn */
	IF(0x0C0623DAu); r0 <<= 2;  /* 0C0623DA shll2 Rn */
	IF(0x0C0623DCu); r5 = R32(r0 + r3); UPD(0x0C0623DEu, 4);  /* 0C0623DC mov.l @(r0,Rm),Rn */
	IF(0x0C0623DEu); r4 >>= 2;  /* 0C0623DE shlr2 Rn */
	W32(r6, r5); UPD(0x0C0623E2u, 2);  /* 0C0623E0 mov.l Rm,@Rn */
	r2 += 0xFFFFFFFFu;  /* 0C0623E2 add #imm,Rn */
	r6 += 0xFFFFFFFCu;  /* 0C0623E4 add #imm,Rn */
	IF(0x0C0623E6u); T = (s32)r2 >= 0;  /* 0C0623E6 cmp/pz Rn */
	{ u32 c_ = T; IF(0x0C0623EAu); r4 >>= 2; /* slot shlr2 Rn */ if (c_) { UPD(0x0C0623D6u, 6); goto L_0C0623D6; } goto L_0C0623EC; }  /* 0C0623E8 bt/s */
L_0C0623EC: BLKS(0x0C0623ECu);
	r15 = r14;  /* 0C0623EC mov Rm,Rn */
	IF(0x0C0623EEu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C0623EE rts */
}

/* FUN_0c062400 */
void blk_f_0C062400(sh3_t *c)
{
	LOCALS;
L_0C062400: BLKS(0x0C062400u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C062402u, 1);  /* 0C062400 mov.l Rm,@-Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C062402 exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C062406u, 2);  /* 0C062404 mov.l Rm,@-Rn */
	IF(0x0C062406u); T = (s32)r4 >= 0;  /* 0C062406 cmp/pz Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C062460u, 4); goto L_0C062460; } goto L_0C06240C; }  /* 0C062408 bf/s */
L_0C06240C: BLKS(0x0C06240Cu);
	r3 = 0x5u;  /* 0C06240C mov #imm,Rn */
	r8 = 0xC233728u; UPD(0x0C062410u, 3);  /* 0C06240E mov.l @(disp,pc),Rn */
	IF(0x0C062410u); ARG0(0x453Du); { s32 s_ = (s32)r3; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = 0; else r5 >>= ((~s_ & 31) + 1); }  /* 0C062410 shld Rm,Rn */
	UPD(0x0C062412u, 1);
L_0C062412: BLKS(0x0C062412u);
	r5 += r6;  /* 0C062412 add Rm,Rn */
	IF(0x0C062414u); r5 <<= 2;  /* 0C062414 shll2 Rn */
	r7 = 0xC17299Cu; UPD(0x0C062418u, 3);  /* 0C062416 mov.l @(disp,pc),Rn */
	r5 += r8;  /* 0C062418 add Rm,Rn */
	r2 = 0x4u;  /* 0C06241A mov #imm,Rn */
	r3 = 0xFFFFFFFCu;  /* 0C06241C mov #imm,Rn */
	r5 += 0x10u;  /* 0C06241E add #imm,Rn */
	UPD(0x0C062420u, 4);
L_0C062420: BLKS(0x0C062420u);
	r0 = 0xFu;  /* 0C062420 mov #imm,Rn */
	r0 &= r4;  /* 0C062422 and Rm,Rn */
	IF(0x0C062424u); r0 <<= 2;  /* 0C062424 shll2 Rn */
	IF(0x0C062426u); r6 = R32(r0 + r7); UPD(0x0C062428u, 4);  /* 0C062426 mov.l @(r0,Rm),Rn */
	r1 = r4;  /* 0C062428 mov Rm,Rn */
	W32(r5, r6); UPD(0x0C06242Cu, 2);  /* 0C06242A mov.l Rm,@Rn */
	IF(0x0C06242Cu); T = (s32)r4 >= 0;  /* 0C06242C cmp/pz Rn */
	{ u32 c_ = !T; r5 += 0xFFFFFFFCu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C062450u, 4); goto L_0C062450; } UPD(0x0C062432u, 1); goto L_0C062432; }  /* 0C06242E bf/s */
L_0C062432: BLKS(0x0C062432u);
	IF(0x0C062432u); ARG0(0x413Cu); { s32 s_ = (s32)r3; if (s_ >= 0) r1 <<= (s_ & 31); else if ((s_ & 31) == 0) r1 = (u32)((s32)r1 >> 31); else r1 = (u32)((s32)r1 >> ((~s_ & 31) + 1)); }  /* 0C062432 shad Rm,Rn */
	r2 += 0xFFFFFFFFu;  /* 0C062434 add #imm,Rn */
	IF(0x0C062436u); T = (s32)r2 > 0;  /* 0C062436 cmp/pl Rn */
	{ u32 c_ = T; r4 = (u32)(s32)(s16)r1; /* slot exts.w Rm,Rn */ if (c_) { UPD(0x0C062420u, 6); goto L_0C062420; } goto L_0C06243C; }  /* 0C062438 bt/s */
L_0C06243C: BLKS(0x0C06243Cu);
	r15 = r14;  /* 0C06243C mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C062440u, 3);  /* 0C06243E mov.l @Rm+,Rn */
	IF(0x0C062440u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C062440 rts */
L_0C062450: BLKS(0x0C062450u);
	{ r1 += 0xFu; /* slot add #imm,Rn */ UPD(0x0C062432u, 3); goto L_0C062432; }  /* 0C062450 bra */
L_0C062460: BLKS(0x0C062460u);
	r0 = 0x5u;  /* 0C062460 mov #imm,Rn */
	IF(0x0C062462u); ARG0(0x450Du); { s32 s_ = (s32)r0; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = 0; else r5 >>= ((~s_ & 31) + 1); }  /* 0C062462 shld Rm,Rn */
	r0 = r5;  /* 0C062464 mov Rm,Rn */
	r8 = 0xC233728u; UPD(0x0C062468u, 4);  /* 0C062466 mov.l @(disp,pc),Rn */
	r0 += r6;  /* 0C062468 add Rm,Rn */
	r2 = 0x8080802Du; UPD(0x0C06246Cu, 2);  /* 0C06246A mov.l @(disp,pc),Rn */
	IF(0x0C06246Cu); r0 <<= 2;  /* 0C06246C shll2 Rn */
	IF(0x0C06246Eu); W32(r0 + r8, r2); UPD(0x0C062470u, 2);  /* 0C06246E mov.l Rm,@(r0,Rn) */
	r0 = 0u - r4;  /* 0C062470 neg Rm,Rn */
	{ r4 = (u32)(s32)(s16)r0; /* slot exts.w Rm,Rn */ UPD(0x0C062412u, 4); goto L_0C062412; }  /* 0C062472 bra */
}

/* FUN_0c062490 */
void blk_f_0C062490(sh3_t *c)
{
	LOCALS;
L_0C062490: BLKS(0x0C062490u);
	r7 = 0x5u;  /* 0C062490 mov #imm,Rn */
	IF(0x0C062492u); ARG0(0x457Du); { s32 s_ = (s32)r7; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = 0; else r5 >>= ((~s_ & 31) + 1); }  /* 0C062492 shld Rm,Rn */
	r0 = 0xC233728u; UPD(0x0C062496u, 3);  /* 0C062494 mov.l @(disp,pc),Rn */
	r5 += r6;  /* 0C062496 add Rm,Rn */
	IF(0x0C062498u); r5 <<= 2;  /* 0C062498 shll2 Rn */
	r5 += r0;  /* 0C06249A add Rm,Rn */
	r2 = r4 & 0xFF;  /* 0C06249C extu.b Rm,Rn */
	r0 = r2;  /* 0C06249E mov Rm,Rn */
	IF(0x0C0624A0u); r0 >>= 2;  /* 0C0624A0 shlr2 Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0624A4u, 7);  /* 0C0624A2 mov.l Rm,@-Rn */
	IF(0x0C0624A4u); r0 >>= 2;  /* 0C0624A4 shlr2 Rn */
	r6 = 0xC17299Cu; UPD(0x0C0624A8u, 2);  /* 0C0624A6 mov.l @(disp,pc),Rn */
	IF(0x0C0624A8u); r0 <<= 2;  /* 0C0624A8 shll2 Rn */
	IF(0x0C0624AAu); r3 = R32(r0 + r6); UPD(0x0C0624ACu, 2);  /* 0C0624AA mov.l @(r0,Rm),Rn */
	r14 = r15;  /* 0C0624AC mov Rm,Rn */
	r0 = 0xFu;  /* 0C0624AE mov #imm,Rn */
	W32(r5, r3); UPD(0x0C0624B2u, 3);  /* 0C0624B0 mov.l Rm,@Rn */
	r0 &= r2;  /* 0C0624B2 and Rm,Rn */
	IF(0x0C0624B4u); r0 <<= 2;  /* 0C0624B4 shll2 Rn */
	IF(0x0C0624B6u); r3 = R32(r0 + r6); UPD(0x0C0624B8u, 3);  /* 0C0624B6 mov.l @(r0,Rm),Rn */
	W32(r5 + 0x4u, r3); UPD(0x0C0624BAu, 1);  /* 0C0624B8 mov.l Rm,@(disp,Rn) */
	r15 = r14;  /* 0C0624BA mov Rm,Rn */
	IF(0x0C0624BCu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0624BC rts */
}

/* FUN_0c0624d0 */
void blk_f_0C0624D0(sh3_t *c)
{
	LOCALS;
L_0C0624D0: BLKS(0x0C0624D0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0624D2u, 1);  /* 0C0624D0 mov.l Rm,@-Rn */
	r2 = R32(r4); UPD(0x0C0624D4u, 1);  /* 0C0624D2 mov.l @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C0624D4 tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0624F6u, 4); goto L_0C0624F6; } goto L_0C0624DA; }  /* 0C0624D6 bt/s */
L_0C0624DA: BLKS(0x0C0624DAu);
	r0 = 0x5u;  /* 0C0624DA mov #imm,Rn */
	IF(0x0C0624DCu); ARG0(0x450Du); { s32 s_ = (s32)r0; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = 0; else r5 >>= ((~s_ & 31) + 1); }  /* 0C0624DC shld Rm,Rn */
	r0 = 0xC233728u; UPD(0x0C0624E0u, 4);  /* 0C0624DE mov.l @(disp,pc),Rn */
	r5 += r6;  /* 0C0624E0 add Rm,Rn */
	IF(0x0C0624E2u); r5 <<= 2;  /* 0C0624E2 shll2 Rn */
	r5 += r0;  /* 0C0624E4 add Rm,Rn */
	IF(0x0C0624E6u); ;  /* 0C0624E6 nop */
	UPD(0x0C0624E8u, 4);
L_0C0624E8: BLKS(0x0C0624E8u);
	W32(r5, r2); UPD(0x0C0624EAu, 1);  /* 0C0624E8 mov.l Rm,@Rn */
	r4 += 0x4u;  /* 0C0624EA add #imm,Rn */
	r3 = R32(r4); UPD(0x0C0624EEu, 2);  /* 0C0624EC mov.l @Rm,Rn */
	r5 += 0x4u;  /* 0C0624EE add #imm,Rn */
	T = (r3 & r3) == 0;  /* 0C0624F0 tst Rm,Rn */
	{ u32 c_ = !T; r2 = r3; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0624E8u, 5); goto L_0C0624E8; } UPD(0x0C0624F6u, 1); goto L_0C0624F6; }  /* 0C0624F2 bf/s */
L_0C0624F6: BLKS(0x0C0624F6u);
	r15 = r14;  /* 0C0624F6 mov Rm,Rn */
	IF(0x0C0624F8u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0624F8 rts */
}

/* FUN_0c062500 */
void blk_f_0C062500(sh3_t *c)
{
	LOCALS;
L_0C062500: BLKS(0x0C062500u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C062502u, 1);  /* 0C062500 mov.l Rm,@-Rn */
	r2 = R32(r4); UPD(0x0C062504u, 1);  /* 0C062502 mov.l @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C062504 tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06254Eu, 4); goto L_0C06254E; } goto L_0C06250A; }  /* 0C062506 bt/s */
L_0C06250A: BLKS(0x0C06250Au);
	r0 = 0x5u;  /* 0C06250A mov #imm,Rn */
	IF(0x0C06250Cu); ARG0(0x450Du); { s32 s_ = (s32)r0; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = 0; else r5 >>= ((~s_ & 31) + 1); }  /* 0C06250C shld Rm,Rn */
	r0 = 0xC233728u; UPD(0x0C062510u, 4);  /* 0C06250E mov.l @(disp,pc),Rn */
	r5 += r6;  /* 0C062510 add Rm,Rn */
	IF(0x0C062512u); r5 <<= 2;  /* 0C062512 shll2 Rn */
	r5 += r0;  /* 0C062514 add Rm,Rn */
	IF(0x0C062516u); ;  /* 0C062516 nop */
	UPD(0x0C062518u, 4);
L_0C062518: BLKS(0x0C062518u);
	r7 = 0x1F0u; UPD(0x0C06251Au, 1);  /* 0C062518 mov.w @(disp,pc),Rn */
	r0 = 0xFu;  /* 0C06251A mov #imm,Rn */
	r7 &= r2;  /* 0C06251C and Rm,Rn */
	r1 = 0xC0u; UPD(0x0C062520u, 3);  /* 0C06251E mov.w @(disp,pc),Rn */
	r0 &= r2;  /* 0C062520 and Rm,Rn */
	r6 = 0xFFFFFC00u; UPD(0x0C062524u, 2);  /* 0C062522 mov.w @(disp,pc),Rn */
	IF(0x0C062524u); r7 <<= 2;  /* 0C062524 shll2 Rn */
	r0 += r0;  /* 0C062526 add Rm,Rn */
	r7 += r1;  /* 0C062528 add Rm,Rn */
	r6 &= r2;  /* 0C06252A and Rm,Rn */
	r0 |= r7;  /* 0C06252C or Rm,Rn */
	r6 += r0;  /* 0C06252E add Rm,Rn */
	r0 = 0x80u; UPD(0x0C062532u, 7);  /* 0C062530 mov.w @(disp,pc),Rn */
	r4 += 0x4u;  /* 0C062532 add #imm,Rn */
	IF(0x0C062534u); W32(r0 + r5, r6); UPD(0x0C062536u, 2);  /* 0C062534 mov.l Rm,@(r0,Rn) */
	r6 += 0x1u;  /* 0C062536 add #imm,Rn */
	r0 += 0x4u;  /* 0C062538 add #imm,Rn */
	IF(0x0C06253Au); W32(r0 + r5, r6); UPD(0x0C06253Cu, 3);  /* 0C06253A mov.l Rm,@(r0,Rn) */
	r6 += 0x1Fu;  /* 0C06253C add #imm,Rn */
	W32(r5, r6); UPD(0x0C062540u, 2);  /* 0C06253E mov.l Rm,@Rn */
	r6 += 0x1u;  /* 0C062540 add #imm,Rn */
	W32(r5 + 0x4u, r6); UPD(0x0C062544u, 2);  /* 0C062542 mov.l Rm,@(disp,Rn) */
	r3 = R32(r4); UPD(0x0C062546u, 1);  /* 0C062544 mov.l @Rm,Rn */
	r5 += 0x8u;  /* 0C062546 add #imm,Rn */
	T = (r3 & r3) == 0;  /* 0C062548 tst Rm,Rn */
	{ u32 c_ = !T; r2 = r3; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C062518u, 5); goto L_0C062518; } UPD(0x0C06254Eu, 1); goto L_0C06254E; }  /* 0C06254A bf/s */
L_0C06254E: BLKS(0x0C06254Eu);
	r15 = r14;  /* 0C06254E mov Rm,Rn */
	IF(0x0C062550u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C062550 rts */
}

/* FUN_0c062560 */
void blk_f_0C062560(sh3_t *c)
{
	LOCALS;
L_0C062560: BLKS(0x0C062560u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C062562u, 1);  /* 0C062560 mov.l Rm,@-Rn */
	r5 = (u32)(s32)(s16)r5;  /* 0C062562 exts.w Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C062566u, 2);  /* 0C062564 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r6;  /* 0C062566 exts.w Rm,Rn */
	r14 = r15;  /* 0C062568 mov Rm,Rn */
	r6 = (u32)(s32)(s16)r7;  /* 0C06256A exts.w Rm,Rn */
	r2 = R32(r14 + 0x8u); UPD(0x0C06256Eu, 4);  /* 0C06256C mov.l @(disp,Rm),Rn */
	r7 = 0x0u;  /* 0C06256E mov #imm,Rn */
	T = (s32)r7 >= (s32)r6;  /* 0C062570 cmp/ge Rm,Rn */
	{ u32 c_ = T; r0 = (u32)(s32)(s16)r2; /* slot exts.w Rm,Rn */ if (c_) { UPD(0x0C0625A8u, 5); goto L_0C0625A8; } goto L_0C062576; }  /* 0C062572 bt/s */
L_0C062576: BLKS(0x0C062576u);
	r5 += r6;  /* 0C062576 add Rm,Rn */
	UPD(0x0C062578u, 2);
L_0C062578: BLKS(0x0C062578u);
	r3 = 0x0u;  /* 0C062578 mov #imm,Rn */
	T = (s32)r3 >= (s32)r0;  /* 0C06257A cmp/ge Rm,Rn */
	{ u32 c_ = T; r1 = 0x5u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C06259Cu, 5); goto L_0C06259C; } goto L_0C062580; }  /* 0C06257C bt/s */
L_0C062580: BLKS(0x0C062580u);
	r2 = r5;  /* 0C062580 mov Rm,Rn */
	IF(0x0C062582u); ARG0(0x421Du); { s32 s_ = (s32)r1; if (s_ >= 0) r2 <<= (s_ & 31); else if ((s_ & 31) == 0) r2 = 0; else r2 >>= ((~s_ & 31) + 1); }  /* 0C062582 shld Rm,Rn */
	r1 = 0xC2336A8u; UPD(0x0C062586u, 4);  /* 0C062584 mov.l @(disp,pc),Rn */
	r2 += r8;  /* 0C062586 add Rm,Rn */
	IF(0x0C062588u); r2 <<= 2;  /* 0C062588 shll2 Rn */
	r2 += r1;  /* 0C06258A add Rm,Rn */
	UPD(0x0C06258Cu, 3);
L_0C06258C: BLKS(0x0C06258Cu);
	{ u32 v_ = R32(r4); r4 += 4; r1 = v_; } UPD(0x0C06258Eu, 1);  /* 0C06258C mov.l @Rm+,Rn */
	W32(r2, r1); UPD(0x0C062590u, 1);  /* 0C06258E mov.l Rm,@Rn */
	r1 = r3;  /* 0C062590 mov Rm,Rn */
	r1 += 0x1u;  /* 0C062592 add #imm,Rn */
	r3 = (u32)(s32)(s16)r1;  /* 0C062594 exts.w Rm,Rn */
	T = (s32)r3 >= (s32)r0;  /* 0C062596 cmp/ge Rm,Rn */
	{ u32 c_ = !T; r2 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06258Cu, 7); goto L_0C06258C; } UPD(0x0C06259Cu, 1); goto L_0C06259C; }  /* 0C062598 bf/s */
L_0C06259C: BLKS(0x0C06259Cu);
	r2 = r7;  /* 0C06259C mov Rm,Rn */
	r2 += 0x1u;  /* 0C06259E add #imm,Rn */
	r7 = (u32)(s32)(s16)r2;  /* 0C0625A0 exts.w Rm,Rn */
	T = (s32)r7 >= (s32)r6;  /* 0C0625A2 cmp/ge Rm,Rn */
	{ u32 c_ = !T; r5 += 0xFFFFFFFFu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C062578u, 7); goto L_0C062578; } UPD(0x0C0625A8u, 1); goto L_0C0625A8; }  /* 0C0625A4 bf/s */
L_0C0625A8: BLKS(0x0C0625A8u);
	r15 = r14;  /* 0C0625A8 mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0625ACu, 2);  /* 0C0625AA mov.l @Rm+,Rn */
	IF(0x0C0625ACu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0625AC rts */
}

/* FUN_0c0626e0 */
void blk_f_0C0626E0(sh3_t *c)
{
	LOCALS;
L_0C0626E0: BLKS(0x0C0626E0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0626E2u, 1);  /* 0C0626E0 mov.l Rm,@-Rn */
	r5 = (u32)(s32)(s8)r5;  /* 0C0626E2 exts.b Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r4); UPD(0x0C0626E6u, 2);  /* 0C0626E4 mov.b @Rm,Rn */
	r14 = r15;  /* 0C0626E6 mov Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C0626E8 tst Rm,Rn */
	{ u32 c_ = T; r6 = (u32)(s32)(s8)r6; /* slot exts.b Rm,Rn */ if (c_) { UPD(0x0C06270Cu, 5); goto L_0C06270C; } goto L_0C0626EE; }  /* 0C0626EA bt/s */
L_0C0626EE: BLKS(0x0C0626EEu);
	r0 = 0x5u;  /* 0C0626EE mov #imm,Rn */
	IF(0x0C0626F0u); ARG0(0x450Du); { s32 s_ = (s32)r0; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = 0; else r5 >>= ((~s_ & 31) + 1); }  /* 0C0626F0 shld Rm,Rn */
	r0 = 0xC233724u; UPD(0x0C0626F4u, 4);  /* 0C0626F2 mov.l @(disp,pc),Rn */
	r5 += r6;  /* 0C0626F4 add Rm,Rn */
	IF(0x0C0626F6u); r5 <<= 2;  /* 0C0626F6 shll2 Rn */
	r5 += r0;  /* 0C0626F8 add Rm,Rn */
	r3 = (u32)(s32)(s8)r2;  /* 0C0626FA exts.b Rm,Rn */
	UPD(0x0C0626FCu, 4);
L_0C0626FC: BLKS(0x0C0626FCu);
	r3 += r7;  /* 0C0626FC add Rm,Rn */
	r5 += 0x4u;  /* 0C0626FE add #imm,Rn */
	W32(r5, r3); UPD(0x0C062702u, 3);  /* 0C062700 mov.l Rm,@Rn */
	r4 += 0x1u;  /* 0C062702 add #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r4); UPD(0x0C062706u, 2);  /* 0C062704 mov.b @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C062706 tst Rm,Rn */
	{ u32 c_ = !T; r3 = (u32)(s32)(s8)r2; /* slot exts.b Rm,Rn */ if (c_) { UPD(0x0C0626FCu, 4); goto L_0C0626FC; } UPD(0x0C06270Cu, 1); goto L_0C06270C; }  /* 0C062708 bf/s */
L_0C06270C: BLKS(0x0C06270Cu);
	r15 = r14;  /* 0C06270C mov Rm,Rn */
	IF(0x0C06270Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C06270E rts */
}

/* FUN_0c062720 */
void blk_f_0C062720(sh3_t *c)
{
	LOCALS;
L_0C062720: BLKS(0x0C062720u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C062722u, 1);  /* 0C062720 mov.l Rm,@-Rn */
	r5 = (u32)(s32)(s8)r5;  /* 0C062722 exts.b Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r4); UPD(0x0C062726u, 2);  /* 0C062724 mov.b @Rm,Rn */
	r14 = r15;  /* 0C062726 mov Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C062728 tst Rm,Rn */
	{ u32 c_ = T; r6 = (u32)(s32)(s8)r6; /* slot exts.b Rm,Rn */ if (c_) { UPD(0x0C06276Cu, 5); goto L_0C06276C; } goto L_0C06272E; }  /* 0C06272A bt/s */
L_0C06272E: BLKS(0x0C06272Eu);
	r0 = 0x5u;  /* 0C06272E mov #imm,Rn */
	IF(0x0C062730u); ARG0(0x450Du); { s32 s_ = (s32)r0; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = 0; else r5 >>= ((~s_ & 31) + 1); }  /* 0C062730 shld Rm,Rn */
	r5 += r6;  /* 0C062732 add Rm,Rn */
	r0 = 0xC233728u; UPD(0x0C062736u, 5);  /* 0C062734 mov.l @(disp,pc),Rn */
	IF(0x0C062736u); r5 <<= 2;  /* 0C062736 shll2 Rn */
	r6 = 0x1F0u; UPD(0x0C06273Au, 2);  /* 0C062738 mov.w @(disp,pc),Rn */
	r5 += r0;  /* 0C06273A add Rm,Rn */
	UPD(0x0C06273Cu, 1);
L_0C06273C: BLKS(0x0C06273Cu);
	r1 = (u32)(s32)(s8)r3;  /* 0C06273C exts.b Rm,Rn */
	r2 = 0xFu;  /* 0C06273E mov #imm,Rn */
	r2 &= r1;  /* 0C062740 and Rm,Rn */
	r1 &= r6;  /* 0C062742 and Rm,Rn */
	r0 = 0xC0u; UPD(0x0C062746u, 5);  /* 0C062744 mov.w @(disp,pc),Rn */
	IF(0x0C062746u); r1 <<= 2;  /* 0C062746 shll2 Rn */
	r0 += r1;  /* 0C062748 add Rm,Rn */
	r2 += r2;  /* 0C06274A add Rm,Rn */
	r2 |= r0;  /* 0C06274C or Rm,Rn */
	r0 = 0x80u; UPD(0x0C062750u, 5);  /* 0C06274E mov.w @(disp,pc),Rn */
	r2 += r7;  /* 0C062750 add Rm,Rn */
	IF(0x0C062752u); W32(r0 + r5, r2); UPD(0x0C062754u, 2);  /* 0C062752 mov.l Rm,@(r0,Rn) */
	r4 += 0x1u;  /* 0C062754 add #imm,Rn */
	r2 += 0x1u;  /* 0C062756 add #imm,Rn */
	r0 += 0x4u;  /* 0C062758 add #imm,Rn */
	IF(0x0C06275Au); W32(r0 + r5, r2); UPD(0x0C06275Cu, 4);  /* 0C06275A mov.l Rm,@(r0,Rn) */
	r2 += 0x1Fu;  /* 0C06275C add #imm,Rn */
	W32(r5, r2); UPD(0x0C062760u, 2);  /* 0C06275E mov.l Rm,@Rn */
	r2 += 0x1u;  /* 0C062760 add #imm,Rn */
	W32(r5 + 0x4u, r2); UPD(0x0C062764u, 2);  /* 0C062762 mov.l Rm,@(disp,Rn) */
	r3 = (u32)(s32)(s8)R8(r4); UPD(0x0C062766u, 1);  /* 0C062764 mov.b @Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C062766 tst Rm,Rn */
	{ u32 c_ = !T; r5 += 0x8u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06273Cu, 4); goto L_0C06273C; } UPD(0x0C06276Cu, 1); goto L_0C06276C; }  /* 0C062768 bf/s */
L_0C06276C: BLKS(0x0C06276Cu);
	r15 = r14;  /* 0C06276C mov Rm,Rn */
	IF(0x0C06276Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C06276E rts */
}

/* FUN_0c062780 */
void blk_f_0C062780(sh3_t *c)
{
	LOCALS;
L_0C062780: BLKS(0x0C062780u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C062782u, 1);  /* 0C062780 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C062784u, 1);  /* 0C062782 mov.l Rm,@-Rn */
	r8 = r4;  /* 0C062784 mov Rm,Rn */
	r0 = 0xC0C2360u; UPD(0x0C062788u, 2);  /* 0C062786 mov.l @(disp,pc),Rn */
	IF(0x0C062788u); r15 -= 4; W32(r15, PR); UPD(0x0C06278Au, 1);  /* 0C062788 sts.l pr,@-Rn */
	IF(0x0C06278Au); { u32 t_ = r0; PR = 0x0C06278Eu; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C06278Eu); }  /* 0C06278A jsr @Rn */
L_0C06278E: BLKS(0x0C06278Eu);
	IF(0x0C06278Eu); MACL = r8 * r0;  /* 0C06278E mul.l Rm,Rn */
	IF(0x0C062790u); r1 = MACL;  /* 0C062790 sts macl,Rn */
	IF(0x0C062792u); r1 >>= 8;  /* 0C062792 shlr8 Rn */
	r1 += r1;  /* 0C062794 add Rm,Rn */
	IF(0x0C062796u); r1 >>= 8;  /* 0C062796 shlr8 Rn */
	r0 = r1 & 0xFFFF;  /* 0C062798 extu.w Rm,Rn */
	r15 = r14;  /* 0C06279A mov Rm,Rn */
	IF(0x0C06279Cu); PR = R32(r15); r15 += 4; UPD(0x0C06279Eu, 9);  /* 0C06279C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0627A0u, 1);  /* 0C06279E mov.l @Rm+,Rn */
	IF(0x0C0627A0u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0627A0 rts */
}

void blk_f_0C0627B0(sh3_t *c)
{
	LOCALS;
L_0C0627B0: BLKS(0x0C0627B0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0627B2u, 1);  /* 0C0627B0 mov.l Rm,@-Rn */
	r2 = 0xC228BF4u; UPD(0x0C0627B4u, 1);  /* 0C0627B2 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0627B4 mov Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C0627B8u, 2);  /* 0C0627B6 mov.b @Rm,Rn */
	T = r0 == 0x1u;  /* 0C0627B8 cmp/eq #imm,r0 */
	{ u32 c_ = T; r2 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0627D0u, 4); goto L_0C0627D0; } UPD(0x0C0627BEu, 1); goto L_0C0627BE; }  /* 0C0627BA bt/s */
L_0C0627BE: BLKS(0x0C0627BEu);
	r3 = 0xC28F610u; UPD(0x0C0627C0u, 1);  /* 0C0627BE mov.l @(disp,pc),Rn */
	r1 = 0x0u;  /* 0C0627C0 mov #imm,Rn */
	r0 = 0xC228BF4u; UPD(0x0C0627C4u, 2);  /* 0C0627C2 mov.l @(disp,pc),Rn */
	W8(r3, r2); UPD(0x0C0627C6u, 1);  /* 0C0627C4 mov.b Rm,@Rn */
	W8(r0, r1); UPD(0x0C0627C8u, 1);  /* 0C0627C6 mov.b Rm,@Rn */
	r15 = r14;  /* 0C0627C8 mov Rm,Rn */
	IF(0x0C0627CAu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0627CA rts */
L_0C0627D0: BLKS(0x0C0627D0u);
	{ r2 = 0x2u; /* slot mov #imm,Rn */ UPD(0x0C0627BEu, 3); goto L_0C0627BE; }  /* 0C0627D0 bra */
}

/* FUN_0c0627e0 */
void blk_f_0C0627E0(sh3_t *c)
{
	LOCALS;
L_0C0627E0: BLKS(0x0C0627E0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0627E2u, 1);  /* 0C0627E0 mov.l Rm,@-Rn */
	r2 = 0x0u;  /* 0C0627E2 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0627E6u, 2);  /* 0C0627E4 mov.l Rm,@-Rn */
	r4 = 0x0u;  /* 0C0627E6 mov #imm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0627EAu, 2);  /* 0C0627E8 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0627ECu, 1);  /* 0C0627EA mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0627EEu, 1);  /* 0C0627EC mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0627F0u, 1);  /* 0C0627EE mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0627F2u, 1);  /* 0C0627F0 mov.l Rm,@-Rn */
	r8 = 0xC0C21A0u; UPD(0x0C0627F4u, 1);  /* 0C0627F2 mov.l @(disp,pc),Rn */
	IF(0x0C0627F4u); r15 -= 4; W32(r15, PR); UPD(0x0C0627F6u, 1);  /* 0C0627F4 sts.l pr,@-Rn */
	r0 = 0xC28F5FCu; UPD(0x0C0627F8u, 1);  /* 0C0627F6 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0627F8 add #imm,Rn */
	r13 = 0xC062490u; UPD(0x0C0627FCu, 2);  /* 0C0627FA mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0627FC mov Rm,Rn */
	IF(0x0C0627FEu); { u32 t_ = r8; PR = 0x0C062802u; W8(r0, r2); /* slot mov.b Rm,@Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0C21A0, 0x0C0C21A0u, 0x0C062802u); }  /* 0C0627FE jsr @Rn */
L_0C062802: BLKS(0x0C062802u);
	r12 = 0x0u;  /* 0C062802 mov #imm,Rn */
	UPD(0x0C062804u, 1);
L_0C062804: BLKS(0x0C062804u);
	W32(r14, r12); UPD(0x0C062806u, 1);  /* 0C062804 mov.l Rm,@Rn */
	IF(0x0C062806u); ;  /* 0C062806 nop */
	UPD(0x0C062808u, 1);
L_0C062808: BLKS(0x0C062808u);
	r8 = 0xC060BC0u; UPD(0x0C06280Au, 1);  /* 0C062808 mov.l @(disp,pc),Rn */
	r11 = 0xC061200u; UPD(0x0C06280Cu, 1);  /* 0C06280A mov.l @(disp,pc),Rn */
	IF(0x0C06280Cu); { u32 t_ = r8; PR = 0x0C062810u; IF(0x0C06280Eu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C060BC0, 0x0C060BC0u, 0x0C062810u); }  /* 0C06280C jsr @Rn */
L_0C062810: BLKS(0x0C062810u);
	r10 = 0xC062060u; UPD(0x0C062812u, 1);  /* 0C062810 mov.l @(disp,pc),Rn */
	IF(0x0C062812u); { u32 t_ = r11; PR = 0x0C062816u; IF(0x0C062814u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C061200, 0x0C061200u, 0x0C062816u); }  /* 0C062812 jsr @Rn */
L_0C062816: BLKS(0x0C062816u);
	r9 = 0xC062000u; UPD(0x0C062818u, 1);  /* 0C062816 mov.l @(disp,pc),Rn */
	r8 = 0xC066510u; UPD(0x0C06281Au, 1);  /* 0C062818 mov.l @(disp,pc),Rn */
	IF(0x0C06281Au); { u32 t_ = r10; PR = 0x0C06281Eu; r4 = 0x40u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062060, 0x0C062060u, 0x0C06281Eu); }  /* 0C06281A jsr @Rn */
L_0C06281E: BLKS(0x0C06281Eu);
	IF(0x0C06281Eu); { u32 t_ = r9; PR = 0x0C062822u; IF(0x0C062820u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C062000, 0x0C062000u, 0x0C062822u); }  /* 0C06281E jsr @Rn */
L_0C062822: BLKS(0x0C062822u);
	r4 = r12;  /* 0C062822 mov Rm,Rn */
	IF(0x0C062824u); { u32 t_ = r8; PR = 0x0C062828u; r5 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C066510, 0x0C066510u, 0x0C062828u); }  /* 0C062824 jsr @Rn */
L_0C062828: BLKS(0x0C062828u);
	W32(r14, r0); UPD(0x0C06282Au, 1);  /* 0C062828 mov.l Rm,@Rn */
	r3 = 0x200u; UPD(0x0C06282Cu, 1);  /* 0C06282A mov.w @(disp,pc),Rn */
	r0 = 0xC297638u; UPD(0x0C06282Eu, 1);  /* 0C06282C mov.l @(disp,pc),Rn */
	IF(0x0C06282Eu); r2 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C062830u, 1);  /* 0C06282E mov.w @(r0,Rm),Rn */
	r0 = r2;  /* 0C062830 mov Rm,Rn */
	r0 &= 0x1u;  /* 0C062832 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C062834 tst Rm,Rn */
	{ u32 c_ = T; r0 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C062842u, 6); goto L_0C062842; } goto L_0C06283A; }  /* 0C062836 bt/s */
L_0C06283A: BLKS(0x0C06283Au);
	r4 = 0xC172CC8u; UPD(0x0C06283Cu, 2);  /* 0C06283A mov.l @(disp,pc),Rn */
	r0 = r4;  /* 0C06283C mov Rm,Rn */
	IF(0x0C06283Eu); r12 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C062840u, 2);  /* 0C06283E mov.b @(r0,Rm),Rn */
	r0 = r2;  /* 0C062840 mov Rm,Rn */
	UPD(0x0C062842u, 1);
L_0C062842: BLKS(0x0C062842u);
	r0 &= 0x2u;  /* 0C062842 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C062844 tst Rm,Rn */
	if (T) { UPD(0x0C06284Eu, 5); goto L_0C06284E; }  /* 0C062846 bt */
L_0C062848: BLKS(0x0C062848u);
	r5 = 0xC172CD4u; UPD(0x0C06284Au, 1);  /* 0C062848 mov.l @(disp,pc),Rn */
	r0 = r5;  /* 0C06284A mov Rm,Rn */
	IF(0x0C06284Cu); r12 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C06284Eu, 2);  /* 0C06284C mov.b @(r0,Rm),Rn */
L_0C06284E: BLKS(0x0C06284Eu);
	r2 = 0xC172CBCu; UPD(0x0C062850u, 1);  /* 0C06284E mov.l @(disp,pc),Rn */
	r6 = 0x9u;  /* 0C062850 mov #imm,Rn */
	r9 = 0xC0626E0u; UPD(0x0C062854u, 2);  /* 0C062852 mov.l @(disp,pc),Rn */
	r0 = r2;  /* 0C062854 mov Rm,Rn */
	r7 = 0x40C04000u; UPD(0x0C062858u, 2);  /* 0C062856 mov.l @(disp,pc),Rn */
	r4 = 0xC172BC8u; UPD(0x0C06285Au, 1);  /* 0C062858 mov.l @(disp,pc),Rn */
	IF(0x0C06285Au); { u32 t_ = r9; PR = 0x0C06285Eu; IF(0x0C06285Cu); r5 = (u32)(s32)(s8)R8(r0 + r12); /* slot mov.b @(r0,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C06285Eu); }  /* 0C06285A jsr @Rn */
L_0C06285E: BLKS(0x0C06285Eu);
	r10 = 0x100u; UPD(0x0C062860u, 1);  /* 0C06285E mov.w @(disp,pc),Rn */
	T = (r12 & r12) == 0;  /* 0C062860 tst Rm,Rn */
	r0 = 0xC297638u; UPD(0x0C062864u, 2);  /* 0C062862 mov.l @(disp,pc),Rn */
	IF(0x0C062864u); r3 = T;  /* 0C062864 movt Rn */
	IF(0x0C062866u); r1 = (u32)(s32)(s16)R16(r0 + r10); UPD(0x0C062868u, 2);  /* 0C062866 mov.w @(r0,Rm),Rn */
	r11 = 0xC238029u; UPD(0x0C06286Au, 1);  /* 0C062868 mov.l @(disp,pc),Rn */
	r0 = r1;  /* 0C06286A mov Rm,Rn */
	T = (r0 & 0xCu) == 0;  /* 0C06286C tst #imm,r0 */
	r10 = 0xFFFFFFFFu;  /* 0C06286E mov #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r11); UPD(0x0C062872u, 4);  /* 0C062870 mov.b @Rm,Rn */
	{ u32 t_ = 0u - r10, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r7 = r_; }  /* 0C062872 negc Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C062874 tst Rm,Rn */
	{ u32 t_ = 0u - r10, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r6 = r_; }  /* 0C062876 negc Rm,Rn */
	r7 &= r3;  /* 0C062878 and Rm,Rn */
	r6 &= r7;  /* 0C06287A and Rm,Rn */
	T = (r6 & r6) == 0;  /* 0C06287C tst Rm,Rn */
	{ u32 c_ = T; r0 ^= 0x1u; /* slot xor #imm,r0 */ if (c_) { UPD(0x0C062884u, 9); goto L_0C062884; } goto L_0C062882; }  /* 0C06287E bt/s */
L_0C062882: BLKS(0x0C062882u);
	W8(r11, r0); UPD(0x0C062884u, 2);  /* 0C062882 mov.b Rm,@Rn */
L_0C062884: BLKS(0x0C062884u);
	r8 = 0x80808000u; UPD(0x0C062886u, 1);  /* 0C062884 mov.l @(disp,pc),Rn */
	r5 = 0x20u;  /* 0C062886 mov #imm,Rn */
	r4 = 0xC172A30u; UPD(0x0C06288Au, 2);  /* 0C062888 mov.l @(disp,pc),Rn */
	r6 = 0xBu;  /* 0C06288A mov #imm,Rn */
	IF(0x0C06288Cu); { u32 t_ = r9; PR = 0x0C062890u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C062890u); }  /* 0C06288C jsr @Rn */
L_0C062890: BLKS(0x0C062890u);
	r0 = (u32)(s32)(s8)R8(r11); UPD(0x0C062892u, 1);  /* 0C062890 mov.b @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C062892 tst Rm,Rn */
	if (T) { UPD(0x0C06289Cu, 4); goto L_0C06289C; }  /* 0C062894 bt */
L_0C062896: BLKS(0x0C062896u);
	r5 = 0x5u;  /* 0C062896 mov #imm,Rn */
	{ r6 = 0xBu; /* slot mov #imm,Rn */ UPD(0x0C062A80u, 4); goto L_0C062A80; }  /* 0C062898 bra */
L_0C06289C: BLKS(0x0C06289Cu);
	r4 = 0xC172A24u; UPD(0x0C06289Eu, 1);  /* 0C06289C mov.l @(disp,pc),Rn */
	r5 = 0x1Cu;  /* 0C06289E mov #imm,Rn */
	r6 = 0xBu;  /* 0C0628A0 mov #imm,Rn */
	IF(0x0C0628A2u); { u32 t_ = r9; PR = 0x0C0628A6u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C0628A6u); }  /* 0C0628A2 jsr @Rn */
L_0C0628A6: BLKS(0x0C0628A6u);
	r0 = (u32)(s32)(s8)R8(r11); UPD(0x0C0628A8u, 1);  /* 0C0628A6 mov.b @Rm,Rn */
	r6 = 0xEu;  /* 0C0628A8 mov #imm,Rn */
	T = (r0 & r0) == 0;  /* 0C0628AA tst Rm,Rn */
	IF(0x0C0628ACu); r0 = T;  /* 0C0628AC movt Rn */
	r5 = 0xC172D00u; UPD(0x0C0628B0u, 4);  /* 0C0628AE mov.l @(disp,pc),Rn */
	r0 ^= 0x1u;  /* 0C0628B0 xor #imm,r0 */
	IF(0x0C0628B2u); r0 <<= 2;  /* 0C0628B2 shll2 Rn */
	IF(0x0C0628B4u); r4 = R32(r0 + r5); UPD(0x0C0628B6u, 3);  /* 0C0628B4 mov.l @(r0,Rm),Rn */
	r7 = r8;  /* 0C0628B6 mov Rm,Rn */
	IF(0x0C0628B8u); { u32 t_ = r9; PR = 0x0C0628BCu; r5 = 0x1Eu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C0628BCu); }  /* 0C0628B8 jsr @Rn */
L_0C0628BC: BLKS(0x0C0628BCu);
	r4 = 0xC172A3Cu; UPD(0x0C0628BEu, 1);  /* 0C0628BC mov.l @(disp,pc),Rn */
	r5 = 0x1Au;  /* 0C0628BE mov #imm,Rn */
	r6 = 0xBu;  /* 0C0628C0 mov #imm,Rn */
	IF(0x0C0628C2u); { u32 t_ = r9; PR = 0x0C0628C6u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C0628C6u); }  /* 0C0628C2 jsr @Rn */
L_0C0628C6: BLKS(0x0C0628C6u);
	r4 = 0xC172A48u; UPD(0x0C0628C8u, 1);  /* 0C0628C6 mov.l @(disp,pc),Rn */
	r5 = 0x18u;  /* 0C0628C8 mov #imm,Rn */
	r6 = 0xBu;  /* 0C0628CA mov #imm,Rn */
	IF(0x0C0628CCu); { u32 t_ = r9; PR = 0x0C0628D0u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C0628D0u); }  /* 0C0628CC jsr @Rn */
L_0C0628D0: BLKS(0x0C0628D0u);
	r4 = 0xC172A64u; UPD(0x0C0628D2u, 1);  /* 0C0628D0 mov.l @(disp,pc),Rn */
	r5 = 0x16u;  /* 0C0628D2 mov #imm,Rn */
	r6 = 0xBu;  /* 0C0628D4 mov #imm,Rn */
	IF(0x0C0628D6u); { u32 t_ = r9; PR = 0x0C0628DAu; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C0628DAu); }  /* 0C0628D6 jsr @Rn */
L_0C0628DA: BLKS(0x0C0628DAu);
	r4 = 0xC172A70u; UPD(0x0C0628DCu, 1);  /* 0C0628DA mov.l @(disp,pc),Rn */
	r5 = 0x14u;  /* 0C0628DC mov #imm,Rn */
	r6 = 0xBu;  /* 0C0628DE mov #imm,Rn */
	IF(0x0C0628E0u); { u32 t_ = r9; PR = 0x0C0628E4u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C0628E4u); }  /* 0C0628E0 jsr @Rn */
L_0C0628E4: BLKS(0x0C0628E4u);
	r4 = 0xC172A84u; UPD(0x0C0628E6u, 1);  /* 0C0628E4 mov.l @(disp,pc),Rn */
	r5 = 0x12u;  /* 0C0628E6 mov #imm,Rn */
	r6 = 0xBu;  /* 0C0628E8 mov #imm,Rn */
	IF(0x0C0628EAu); { u32 t_ = r9; PR = 0x0C0628EEu; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C0628EEu); }  /* 0C0628EA jsr @Rn */
L_0C0628EE: BLKS(0x0C0628EEu);
	r4 = 0xC172A58u; UPD(0x0C0628F0u, 1);  /* 0C0628EE mov.l @(disp,pc),Rn */
	r5 = 0x10u;  /* 0C0628F0 mov #imm,Rn */
	r6 = 0xBu;  /* 0C0628F2 mov #imm,Rn */
	IF(0x0C0628F4u); { u32 t_ = r9; PR = 0x0C0628F8u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C0628F8u); }  /* 0C0628F4 jsr @Rn */
L_0C0628F8: BLKS(0x0C0628F8u);
	r4 = 0xC172A90u; UPD(0x0C0628FAu, 1);  /* 0C0628F8 mov.l @(disp,pc),Rn */
	r5 = 0xEu;  /* 0C0628FA mov #imm,Rn */
	r6 = 0xBu;  /* 0C0628FC mov #imm,Rn */
	IF(0x0C0628FEu); { u32 t_ = r9; PR = 0x0C062902u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C062902u); }  /* 0C0628FE jsr @Rn */
L_0C062902: BLKS(0x0C062902u);
	r4 = 0xC172A9Cu; UPD(0x0C062904u, 1);  /* 0C062902 mov.l @(disp,pc),Rn */
	r5 = 0xCu;  /* 0C062904 mov #imm,Rn */
	r6 = 0xBu;  /* 0C062906 mov #imm,Rn */
	IF(0x0C062908u); { u32 t_ = r9; PR = 0x0C06290Cu; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C06290Cu); }  /* 0C062908 jsr @Rn */
L_0C06290C: BLKS(0x0C06290Cu);
	r4 = 0xC172AA8u; UPD(0x0C06290Eu, 1);  /* 0C06290C mov.l @(disp,pc),Rn */
	r5 = 0xAu;  /* 0C06290E mov #imm,Rn */
	r6 = 0xBu;  /* 0C062910 mov #imm,Rn */
	IF(0x0C062912u); { u32 t_ = r9; PR = 0x0C062916u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C062916u); }  /* 0C062912 jsr @Rn */
L_0C062916: BLKS(0x0C062916u);
	r2 = (u32)(s32)(s8)R8(r11); UPD(0x0C062918u, 1);  /* 0C062916 mov.b @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C062918 tst Rm,Rn */
	{ u32 c_ = !T; r4 = 0x2u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C062980u, 4); goto L_0C062980; } UPD(0x0C06291Eu, 1); goto L_0C06291E; }  /* 0C06291A bf/s */
L_0C06291E: BLKS(0x0C06291Eu);
	r9 = 0xC061010u; UPD(0x0C062920u, 1);  /* 0C06291E mov.l @(disp,pc),Rn */
	r4 = 0x7u;  /* 0C062920 mov #imm,Rn */
	r11 = 0xC062250u; UPD(0x0C062924u, 2);  /* 0C062922 mov.l @(disp,pc),Rn */
	IF(0x0C062924u); { u32 t_ = r9; PR = 0x0C062928u; r5 = 0x7u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C061010, 0x0C061010u, 0x0C062928u); }  /* 0C062924 jsr @Rn */
L_0C062928: BLKS(0x0C062928u);
	IF(0x0C062928u); { u32 t_ = r11; PR = 0x0C06292Cu; IF(0x0C06292Au); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C062250, 0x0C062250u, 0x0C06292Cu); }  /* 0C062928 jsr @Rn */
L_0C06292C: BLKS(0x0C06292Cu);
	r0 = 0x100u; UPD(0x0C06292Eu, 1);  /* 0C06292C mov.w @(disp,pc),Rn */
	r3 = 0xC297638u; UPD(0x0C062930u, 1);  /* 0C06292E mov.l @(disp,pc),Rn */
	r4 = 0x110u; UPD(0x0C062932u, 1);  /* 0C062930 mov.w @(disp,pc),Rn */
	IF(0x0C062932u); r7 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C062934u, 1);  /* 0C062932 mov.w @(r0,Rm),Rn */
	T = (r7 & r4) == 0;  /* 0C062934 tst Rm,Rn */
	IF(0x0C062936u); r8 = T;  /* 0C062936 movt Rn */
	r0 = r12;  /* 0C062938 mov Rm,Rn */
	T = r0 == 0x9u;  /* 0C06293A cmp/eq #imm,r0 */
	IF(0x0C06293Cu); r10 = T;  /* 0C06293C movt Rn */
	r8 |= r10;  /* 0C06293E or Rm,Rn */
	T = (r8 & r8) == 0;  /* 0C062940 tst Rm,Rn */
	{ u32 c_ = T; T = (r12 & r12) == 0; /* slot tst Rm,Rn */ if (c_) { UPD(0x0C06294Au, 10); goto L_0C06294A; } goto L_0C062946; }  /* 0C062942 bt/s */
L_0C062946: BLKS(0x0C062946u);
	{ IF(0x0C062948u); ; /* slot nop */ UPD(0x0C062808u, 4); goto L_0C062808; }  /* 0C062946 bra */
L_0C06294A: BLKS(0x0C06294Au);
	if (T) { UPD(0x0C062960u, 3); goto L_0C062960; }  /* 0C06294A bt */
L_0C06294C: BLKS(0x0C06294Cu);
	IF(0x0C06294Cu); r12 <<= 2;  /* 0C06294C shll2 Rn */
	r2 = 0xC172C90u; UPD(0x0C062950u, 2);  /* 0C06294E mov.l @(disp,pc),Rn */
	r0 = r12;  /* 0C062950 mov Rm,Rn */
	IF(0x0C062952u); r12 = R32(r0 + r2); UPD(0x0C062954u, 2);  /* 0C062952 mov.l @(r0,Rm),Rn */
	IF(0x0C062954u); { u32 t_ = r12; PR = 0x0C062958u; IF(0x0C062956u); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C062958u); }  /* 0C062954 jsr @Rn */
L_0C062958: BLKS(0x0C062958u);
	{ r12 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C062804u, 3); goto L_0C062804; }  /* 0C062958 bra */
L_0C062960: BLKS(0x0C062960u);
	r14 += 0x4u;  /* 0C062960 add #imm,Rn */
	r15 = r14;  /* 0C062962 mov Rm,Rn */
	IF(0x0C062964u); PR = R32(r15); r15 += 4; UPD(0x0C062966u, 3);  /* 0C062964 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C062968u, 1);  /* 0C062966 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C06296Au, 1);  /* 0C062968 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06296Cu, 1);  /* 0C06296A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06296Eu, 1);  /* 0C06296C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C062970u, 1);  /* 0C06296E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C062972u, 1);  /* 0C062970 mov.l @Rm+,Rn */
	IF(0x0C062972u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C062972 rts */
L_0C062980: BLKS(0x0C062980u);
	r11 = 0xC0673B0u; UPD(0x0C062982u, 1);  /* 0C062980 mov.l @(disp,pc),Rn */
	IF(0x0C062982u); { u32 t_ = r11; PR = 0x0C062986u; r5 = 0x17u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0673B0, 0x0C0673B0u, 0x0C062986u); }  /* 0C062982 jsr @Rn */
L_0C062986: BLKS(0x0C062986u);
	T = (r0 & r0) == 0;  /* 0C062986 tst Rm,Rn */
	{ u32 c_ = !T; r5 = 0x2u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0629D0u, 4); goto L_0C0629D0; } UPD(0x0C06298Cu, 1); goto L_0C06298C; }  /* 0C062988 bf/s */
L_0C06298C: BLKS(0x0C06298Cu);
	r6 = 0xC2B016Cu; UPD(0x0C06298Eu, 1);  /* 0C06298C mov.l @(disp,pc),Rn */
	r5 = 0xC2A6D4Cu; UPD(0x0C062990u, 1);  /* 0C06298E mov.l @(disp,pc),Rn */
	r11 = (u32)(s32)(s16)R16(r6); UPD(0x0C062992u, 1);  /* 0C062990 mov.w @Rm,Rn */
	r7 = 0x400u; UPD(0x0C062994u, 1);  /* 0C062992 mov.w @(disp,pc),Rn */
	r0 = r11 & 0xFFFF;  /* 0C062994 extu.w Rm,Rn */
	r2 = (u32)(s32)(s16)R16(r5); UPD(0x0C062998u, 2);  /* 0C062996 mov.w @Rm,Rn */
	T = r0 == r7;  /* 0C062998 cmp/eq Rm,Rn */
	{ u32 t_ = 0u - r10, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r6 = r_; }  /* 0C06299A negc Rm,Rn */
	r3 = r2 & 0xFFFF;  /* 0C06299C extu.w Rm,Rn */
	T = r3 == r7;  /* 0C06299E cmp/eq Rm,Rn */
	{ u32 t_ = 0u - r10, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r4 = r_; }  /* 0C0629A0 negc Rm,Rn */
	r6 |= r4;  /* 0C0629A2 or Rm,Rn */
	T = (r6 & r6) == 0;  /* 0C0629A4 tst Rm,Rn */
	{ u32 c_ = !T; r5 = 0x3u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0629C0u, 10); goto L_0C0629C0; } UPD(0x0C0629AAu, 1); goto L_0C0629AA; }  /* 0C0629A6 bf/s */
L_0C0629AA: BLKS(0x0C0629AAu);
	r9 = 0xC06D730u; UPD(0x0C0629ACu, 1);  /* 0C0629AA mov.l @(disp,pc),Rn */
	IF(0x0C0629ACu); { u32 t_ = r9; PR = 0x0C0629B0u; IF(0x0C0629AEu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C06D730, 0x0C06D730u, 0x0C0629B0u); }  /* 0C0629AC jsr @Rn */
L_0C0629B0: BLKS(0x0C0629B0u);
	{ IF(0x0C0629B2u); ; /* slot nop */ UPD(0x0C06291Eu, 3); goto L_0C06291E; }  /* 0C0629B0 bra */
L_0C0629C0: BLKS(0x0C0629C0u);
	r4 = 0xC172C84u; UPD(0x0C0629C2u, 1);  /* 0C0629C0 mov.l @(disp,pc),Rn */
	r6 = 0xBu;  /* 0C0629C2 mov #imm,Rn */
	IF(0x0C0629C4u); { u32 t_ = r9; PR = 0x0C0629C8u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C0629C8u); }  /* 0C0629C4 jsr @Rn */
L_0C0629C8: BLKS(0x0C0629C8u);
	{ IF(0x0C0629CAu); ; /* slot nop */ UPD(0x0C0629AAu, 3); goto L_0C0629AA; }  /* 0C0629C8 bra */
L_0C0629D0: BLKS(0x0C0629D0u);
	r4 = 0xC172C78u; UPD(0x0C0629D2u, 1);  /* 0C0629D0 mov.l @(disp,pc),Rn */
	r6 = 0xBu;  /* 0C0629D2 mov #imm,Rn */
	IF(0x0C0629D4u); { u32 t_ = r9; PR = 0x0C0629D8u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C0629D8u); }  /* 0C0629D4 jsr @Rn */
L_0C0629D8: BLKS(0x0C0629D8u);
	{ IF(0x0C0629DAu); ; /* slot nop */ UPD(0x0C06298Cu, 3); goto L_0C06298C; }  /* 0C0629D8 bra */
L_0C062A80: BLKS(0x0C062A80u);
	r4 = 0xC172C64u; UPD(0x0C062A82u, 1);  /* 0C062A80 mov.l @(disp,pc),Rn */
	IF(0x0C062A82u); { u32 t_ = r9; PR = 0x0C062A86u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C062A86u); }  /* 0C062A82 jsr @Rn */
L_0C062A86: BLKS(0x0C062A86u);
	r3 = 0xC2B0808u; UPD(0x0C062A88u, 1);  /* 0C062A86 mov.l @(disp,pc),Rn */
	r5 = 0x5u;  /* 0C062A88 mov #imm,Rn */
	r3 += 0x6u;  /* 0C062A8A add #imm,Rn */
	r7 = (u32)(s32)(s8)R8(r3); UPD(0x0C062A8Eu, 3);  /* 0C062A8C mov.b @Rm,Rn */
	r6 = 0xCu;  /* 0C062A8E mov #imm,Rn */
	IF(0x0C062A90u); { u32 t_ = r13; PR = 0x0C062A94u; r4 = r7 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C062490, 0x0C062490u, 0x0C062A94u); }  /* 0C062A90 jsr @Rn */
L_0C062A94: BLKS(0x0C062A94u);
	r4 = 0xC2B0808u; UPD(0x0C062A96u, 1);  /* 0C062A94 mov.l @(disp,pc),Rn */
	r5 = 0x5u;  /* 0C062A96 mov #imm,Rn */
	r4 += 0x5u;  /* 0C062A98 add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r4); UPD(0x0C062A9Cu, 3);  /* 0C062A9A mov.b @Rm,Rn */
	r4 = r6 & 0xFF;  /* 0C062A9C extu.b Rm,Rn */
	IF(0x0C062A9Eu); { u32 t_ = r13; PR = 0x0C062AA2u; r6 = 0xFu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C062490, 0x0C062490u, 0x0C062AA2u); }  /* 0C062A9E jsr @Rn */
L_0C062AA2: BLKS(0x0C062AA2u);
	r5 = 0xC2B0808u; UPD(0x0C062AA4u, 1);  /* 0C062AA2 mov.l @(disp,pc),Rn */
	r6 = 0x12u;  /* 0C062AA4 mov #imm,Rn */
	r5 += 0x4u;  /* 0C062AA6 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r5); UPD(0x0C062AAAu, 3);  /* 0C062AA8 mov.b @Rm,Rn */
	r5 = 0x5u;  /* 0C062AAA mov #imm,Rn */
	IF(0x0C062AACu); { u32 t_ = r13; PR = 0x0C062AB0u; r4 = r0 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C062490, 0x0C062490u, 0x0C062AB0u); }  /* 0C062AAC jsr @Rn */
L_0C062AB0: BLKS(0x0C062AB0u);
	r2 = 0xC2B0808u; UPD(0x0C062AB2u, 1);  /* 0C062AB0 mov.l @(disp,pc),Rn */
	r5 = 0x5u;  /* 0C062AB2 mov #imm,Rn */
	r2 += 0x2u;  /* 0C062AB4 add #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r2); UPD(0x0C062AB8u, 3);  /* 0C062AB6 mov.b @Rm,Rn */
	r6 = 0x15u;  /* 0C062AB8 mov #imm,Rn */
	IF(0x0C062ABAu); { u32 t_ = r13; PR = 0x0C062ABEu; r4 = r3 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C062490, 0x0C062490u, 0x0C062ABEu); }  /* 0C062ABA jsr @Rn */
L_0C062ABE: BLKS(0x0C062ABEu);
	r7 = 0xC2B0808u; UPD(0x0C062AC0u, 1);  /* 0C062ABE mov.l @(disp,pc),Rn */
	r5 = 0x5u;  /* 0C062AC0 mov #imm,Rn */
	r7 += 0x1u;  /* 0C062AC2 add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C062AC6u, 3);  /* 0C062AC4 mov.b @Rm,Rn */
	r4 = r6 & 0xFF;  /* 0C062AC6 extu.b Rm,Rn */
	IF(0x0C062AC8u); { u32 t_ = r13; PR = 0x0C062ACCu; r6 = 0x18u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C062490, 0x0C062490u, 0x0C062ACCu); }  /* 0C062AC8 jsr @Rn */
L_0C062ACC: BLKS(0x0C062ACCu);
	r4 = 0xC2B0808u; UPD(0x0C062ACEu, 1);  /* 0C062ACC mov.l @(disp,pc),Rn */
	r6 = 0x1Bu;  /* 0C062ACE mov #imm,Rn */
	r5 = (u32)(s32)(s8)R8(r4); UPD(0x0C062AD2u, 2);  /* 0C062AD0 mov.b @Rm,Rn */
	r4 = r5 & 0xFF;  /* 0C062AD2 extu.b Rm,Rn */
	IF(0x0C062AD4u); { u32 t_ = r13; PR = 0x0C062AD8u; r5 = 0x5u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C062490, 0x0C062490u, 0x0C062AD8u); }  /* 0C062AD4 jsr @Rn */
L_0C062AD8: BLKS(0x0C062AD8u);
	{ IF(0x0C062ADAu); ; /* slot nop */ UPD(0x0C06289Cu, 3); goto L_0C06289C; }  /* 0C062AD8 bra */
}

void blk_f_0C062AF0(sh3_t *c)
{
	LOCALS;
	SPIN_VARS(0C062C18);
L_0C062AF0: BLKS(0x0C062AF0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C062AF2u, 1);  /* 0C062AF0 mov.l Rm,@-Rn */
	r1 = 0x1u;  /* 0C062AF2 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C062AF6u, 2);  /* 0C062AF4 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C062AF8u, 1);  /* 0C062AF6 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C062AFAu, 1);  /* 0C062AF8 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C062AFCu, 1);  /* 0C062AFA mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C062AFEu, 1);  /* 0C062AFC mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C062B00u, 1);  /* 0C062AFE mov.l Rm,@-Rn */
	r2 = 0xC0659C0u; UPD(0x0C062B02u, 1);  /* 0C062B00 mov.l @(disp,pc),Rn */
	IF(0x0C062B02u); r15 -= 4; W32(r15, PR); UPD(0x0C062B04u, 1);  /* 0C062B02 sts.l pr,@-Rn */
	r4 = 0xC237C06u; UPD(0x0C062B06u, 1);  /* 0C062B04 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C062B06 mov Rm,Rn */
	r8 = 0xC062000u; UPD(0x0C062B0Au, 2);  /* 0C062B08 mov.l @(disp,pc),Rn */
	IF(0x0C062B0Au); { u32 t_ = r2; PR = 0x0C062B0Eu; W8(r4, r1); /* slot mov.b Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0659C0, 0x0C0659C0u, 0x0C062B0Eu); }  /* 0C062B0A jsr @Rn */
L_0C062B0E: BLKS(0x0C062B0Eu);
	r10 = 0xC0626E0u; UPD(0x0C062B10u, 1);  /* 0C062B0E mov.l @(disp,pc),Rn */
	IF(0x0C062B10u); { u32 t_ = r8; PR = 0x0C062B14u; IF(0x0C062B12u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C062000, 0x0C062000u, 0x0C062B14u); }  /* 0C062B10 jsr @Rn */
L_0C062B14: BLKS(0x0C062B14u);
	r9 = 0x80808000u; UPD(0x0C062B16u, 1);  /* 0C062B14 mov.l @(disp,pc),Rn */
	r5 = 0x1Fu;  /* 0C062B16 mov #imm,Rn */
	r4 = 0xC172A58u; UPD(0x0C062B1Au, 2);  /* 0C062B18 mov.l @(disp,pc),Rn */
	r6 = 0xBu;  /* 0C062B1A mov #imm,Rn */
	IF(0x0C062B1Cu); { u32 t_ = r10; PR = 0x0C062B20u; r7 = r9; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C062B20u); }  /* 0C062B1C jsr @Rn */
L_0C062B20: BLKS(0x0C062B20u);
	r4 = 0xC172D38u; UPD(0x0C062B22u, 1);  /* 0C062B20 mov.l @(disp,pc),Rn */
	r5 = 0x1Du;  /* 0C062B22 mov #imm,Rn */
	r6 = 0xCu;  /* 0C062B24 mov #imm,Rn */
	IF(0x0C062B26u); { u32 t_ = r10; PR = 0x0C062B2Au; r7 = r9; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C062B2Au); }  /* 0C062B26 jsr @Rn */
L_0C062B2A: BLKS(0x0C062B2Au);
	r4 = 0xC172D08u; UPD(0x0C062B2Cu, 1);  /* 0C062B2A mov.l @(disp,pc),Rn */
	r5 = 0x1Cu;  /* 0C062B2C mov #imm,Rn */
	r6 = 0x7u;  /* 0C062B2E mov #imm,Rn */
	IF(0x0C062B30u); { u32 t_ = r10; PR = 0x0C062B34u; r7 = r9; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C062B34u); }  /* 0C062B30 jsr @Rn */
L_0C062B34: BLKS(0x0C062B34u);
	r4 = 0xC172D10u; UPD(0x0C062B36u, 1);  /* 0C062B34 mov.l @(disp,pc),Rn */
	r5 = 0x1Bu;  /* 0C062B36 mov #imm,Rn */
	r6 = 0x7u;  /* 0C062B38 mov #imm,Rn */
	IF(0x0C062B3Au); { u32 t_ = r10; PR = 0x0C062B3Eu; r7 = r9; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C062B3Eu); }  /* 0C062B3A jsr @Rn */
L_0C062B3E: BLKS(0x0C062B3Eu);
	r4 = 0xC172D18u; UPD(0x0C062B40u, 1);  /* 0C062B3E mov.l @(disp,pc),Rn */
	r5 = 0x1Au;  /* 0C062B40 mov #imm,Rn */
	r6 = 0x7u;  /* 0C062B42 mov #imm,Rn */
	IF(0x0C062B44u); { u32 t_ = r10; PR = 0x0C062B48u; r7 = r9; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C062B48u); }  /* 0C062B44 jsr @Rn */
L_0C062B48: BLKS(0x0C062B48u);
	r4 = 0xC172D28u; UPD(0x0C062B4Au, 1);  /* 0C062B48 mov.l @(disp,pc),Rn */
	r5 = 0x19u;  /* 0C062B4A mov #imm,Rn */
	r6 = 0x7u;  /* 0C062B4C mov #imm,Rn */
	IF(0x0C062B4Eu); { u32 t_ = r10; PR = 0x0C062B52u; r7 = r9; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C062B52u); }  /* 0C062B4E jsr @Rn */
L_0C062B52: BLKS(0x0C062B52u);
	r4 = 0xC172D20u; UPD(0x0C062B54u, 1);  /* 0C062B52 mov.l @(disp,pc),Rn */
	r5 = 0x18u;  /* 0C062B54 mov #imm,Rn */
	r6 = 0x7u;  /* 0C062B56 mov #imm,Rn */
	IF(0x0C062B58u); { u32 t_ = r10; PR = 0x0C062B5Cu; r7 = r9; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C062B5Cu); }  /* 0C062B58 jsr @Rn */
L_0C062B5C: BLKS(0x0C062B5Cu);
	r4 = 0xC172D30u; UPD(0x0C062B5Eu, 1);  /* 0C062B5C mov.l @(disp,pc),Rn */
	r5 = 0x17u;  /* 0C062B5E mov #imm,Rn */
	r6 = 0x7u;  /* 0C062B60 mov #imm,Rn */
	IF(0x0C062B62u); { u32 t_ = r10; PR = 0x0C062B66u; r7 = r9; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C062B66u); }  /* 0C062B62 jsr @Rn */
L_0C062B66: BLKS(0x0C062B66u);
	r4 = 0xC172D44u; UPD(0x0C062B68u, 1);  /* 0C062B66 mov.l @(disp,pc),Rn */
	r5 = 0x13u;  /* 0C062B68 mov #imm,Rn */
	r6 = 0x1u;  /* 0C062B6A mov #imm,Rn */
	IF(0x0C062B6Cu); { u32 t_ = r10; PR = 0x0C062B70u; r7 = r9; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C062B70u); }  /* 0C062B6C jsr @Rn */
L_0C062B70: BLKS(0x0C062B70u);
	r4 = 0xC172D4Cu; UPD(0x0C062B72u, 1);  /* 0C062B70 mov.l @(disp,pc),Rn */
	r5 = 0x12u;  /* 0C062B72 mov #imm,Rn */
	r6 = 0x1u;  /* 0C062B74 mov #imm,Rn */
	IF(0x0C062B76u); { u32 t_ = r10; PR = 0x0C062B7Au; r7 = r9; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C062B7Au); }  /* 0C062B76 jsr @Rn */
L_0C062B7A: BLKS(0x0C062B7Au);
	r4 = 0xC172D54u; UPD(0x0C062B7Cu, 1);  /* 0C062B7A mov.l @(disp,pc),Rn */
	r5 = 0x11u;  /* 0C062B7C mov #imm,Rn */
	r6 = 0x1u;  /* 0C062B7E mov #imm,Rn */
	IF(0x0C062B80u); { u32 t_ = r10; PR = 0x0C062B84u; r7 = r9; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C062B84u); }  /* 0C062B80 jsr @Rn */
L_0C062B84: BLKS(0x0C062B84u);
	r4 = 0xC172D5Cu; UPD(0x0C062B86u, 1);  /* 0C062B84 mov.l @(disp,pc),Rn */
	r5 = 0x10u;  /* 0C062B86 mov #imm,Rn */
	r6 = 0x1u;  /* 0C062B88 mov #imm,Rn */
	IF(0x0C062B8Au); { u32 t_ = r10; PR = 0x0C062B8Eu; r7 = r9; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C062B8Eu); }  /* 0C062B8A jsr @Rn */
L_0C062B8E: BLKS(0x0C062B8Eu);
	r4 = 0xC172D98u; UPD(0x0C062B90u, 1);  /* 0C062B8E mov.l @(disp,pc),Rn */
	r5 = 0x14u;  /* 0C062B90 mov #imm,Rn */
	r6 = 0x10u;  /* 0C062B92 mov #imm,Rn */
	IF(0x0C062B94u); { u32 t_ = r10; PR = 0x0C062B98u; r7 = r9; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C062B98u); }  /* 0C062B94 jsr @Rn */
L_0C062B98: BLKS(0x0C062B98u);
	r4 = 0xC172D9Cu; UPD(0x0C062B9Au, 1);  /* 0C062B98 mov.l @(disp,pc),Rn */
	r5 = 0x14u;  /* 0C062B9A mov #imm,Rn */
	r6 = 0x15u;  /* 0C062B9C mov #imm,Rn */
	IF(0x0C062B9Eu); { u32 t_ = r10; PR = 0x0C062BA2u; r7 = r9; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C062BA2u); }  /* 0C062B9E jsr @Rn */
L_0C062BA2: BLKS(0x0C062BA2u);
	r4 = 0xC172D64u; UPD(0x0C062BA4u, 1);  /* 0C062BA2 mov.l @(disp,pc),Rn */
	r5 = 0x13u;  /* 0C062BA4 mov #imm,Rn */
	r6 = 0xBu;  /* 0C062BA6 mov #imm,Rn */
	IF(0x0C062BA8u); { u32 t_ = r10; PR = 0x0C062BACu; r7 = r9; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C062BACu); }  /* 0C062BA8 jsr @Rn */
L_0C062BAC: BLKS(0x0C062BACu);
	r4 = 0xC172D68u; UPD(0x0C062BAEu, 1);  /* 0C062BAC mov.l @(disp,pc),Rn */
	r5 = 0x12u;  /* 0C062BAE mov #imm,Rn */
	r6 = 0xBu;  /* 0C062BB0 mov #imm,Rn */
	IF(0x0C062BB2u); { u32 t_ = r10; PR = 0x0C062BB6u; r7 = r9; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C062BB6u); }  /* 0C062BB2 jsr @Rn */
L_0C062BB6: BLKS(0x0C062BB6u);
	r4 = 0xC172D70u; UPD(0x0C062BB8u, 1);  /* 0C062BB6 mov.l @(disp,pc),Rn */
	r5 = 0x11u;  /* 0C062BB8 mov #imm,Rn */
	r6 = 0xBu;  /* 0C062BBA mov #imm,Rn */
	IF(0x0C062BBCu); { u32 t_ = r10; PR = 0x0C062BC0u; r7 = r9; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C062BC0u); }  /* 0C062BBC jsr @Rn */
L_0C062BC0: BLKS(0x0C062BC0u);
	r4 = 0xC172D78u; UPD(0x0C062BC2u, 1);  /* 0C062BC0 mov.l @(disp,pc),Rn */
	r5 = 0x10u;  /* 0C062BC2 mov #imm,Rn */
	r6 = 0xBu;  /* 0C062BC4 mov #imm,Rn */
	IF(0x0C062BC6u); { u32 t_ = r10; PR = 0x0C062BCAu; r7 = r9; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C062BCAu); }  /* 0C062BC6 jsr @Rn */
L_0C062BCA: BLKS(0x0C062BCAu);
	r4 = 0xC172D80u; UPD(0x0C062BCCu, 1);  /* 0C062BCA mov.l @(disp,pc),Rn */
	r5 = 0xFu;  /* 0C062BCC mov #imm,Rn */
	r6 = 0xBu;  /* 0C062BCE mov #imm,Rn */
	IF(0x0C062BD0u); { u32 t_ = r10; PR = 0x0C062BD4u; r7 = r9; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C062BD4u); }  /* 0C062BD0 jsr @Rn */
L_0C062BD4: BLKS(0x0C062BD4u);
	r4 = 0xC172D84u; UPD(0x0C062BD6u, 1);  /* 0C062BD4 mov.l @(disp,pc),Rn */
	r5 = 0xEu;  /* 0C062BD6 mov #imm,Rn */
	r6 = 0xBu;  /* 0C062BD8 mov #imm,Rn */
	IF(0x0C062BDAu); { u32 t_ = r10; PR = 0x0C062BDEu; r7 = r9; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C062BDEu); }  /* 0C062BDA jsr @Rn */
L_0C062BDE: BLKS(0x0C062BDEu);
	r4 = 0xC172D88u; UPD(0x0C062BE0u, 1);  /* 0C062BDE mov.l @(disp,pc),Rn */
	r5 = 0xDu;  /* 0C062BE0 mov #imm,Rn */
	r6 = 0xBu;  /* 0C062BE2 mov #imm,Rn */
	IF(0x0C062BE4u); { u32 t_ = r10; PR = 0x0C062BE8u; r7 = r9; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C062BE8u); }  /* 0C062BE4 jsr @Rn */
L_0C062BE8: BLKS(0x0C062BE8u);
	r4 = 0xC172D8Cu; UPD(0x0C062BEAu, 1);  /* 0C062BE8 mov.l @(disp,pc),Rn */
	r5 = 0xCu;  /* 0C062BEA mov #imm,Rn */
	r6 = 0xBu;  /* 0C062BEC mov #imm,Rn */
	IF(0x0C062BEEu); { u32 t_ = r10; PR = 0x0C062BF2u; r7 = r9; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C062BF2u); }  /* 0C062BEE jsr @Rn */
L_0C062BF2: BLKS(0x0C062BF2u);
	r4 = 0xC172D90u; UPD(0x0C062BF4u, 1);  /* 0C062BF2 mov.l @(disp,pc),Rn */
	r5 = 0xBu;  /* 0C062BF4 mov #imm,Rn */
	r6 = 0xBu;  /* 0C062BF6 mov #imm,Rn */
	IF(0x0C062BF8u); { u32 t_ = r10; PR = 0x0C062BFCu; r7 = r9; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C062BFCu); }  /* 0C062BF8 jsr @Rn */
L_0C062BFC: BLKS(0x0C062BFCu);
	r4 = 0xC172B0Cu; UPD(0x0C062BFEu, 1);  /* 0C062BFC mov.l @(disp,pc),Rn */
	r5 = 0x2u;  /* 0C062BFE mov #imm,Rn */
	r6 = 0x3u;  /* 0C062C00 mov #imm,Rn */
	IF(0x0C062C02u); { u32 t_ = r10; PR = 0x0C062C06u; r7 = r9; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C062C06u); }  /* 0C062C02 jsr @Rn */
L_0C062C06: BLKS(0x0C062C06u);
	r4 = 0xC172B28u; UPD(0x0C062C08u, 1);  /* 0C062C06 mov.l @(disp,pc),Rn */
	r5 = 0x1u;  /* 0C062C08 mov #imm,Rn */
	r6 = 0x5u;  /* 0C062C0A mov #imm,Rn */
	IF(0x0C062C0Cu); { u32 t_ = r10; PR = 0x0C062C10u; r7 = r9; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C062C10u); }  /* 0C062C0C jsr @Rn */
L_0C062C10: BLKS(0x0C062C10u);
	r0 = 0xC2B03A6u; UPD(0x0C062C12u, 1);  /* 0C062C10 mov.l @(disp,pc),Rn */
	r3 = (u32)(s32)(s16)R16(r0); UPD(0x0C062C14u, 1);  /* 0C062C12 mov.w @Rm,Rn */
	r0 = 0x100u; UPD(0x0C062C16u, 1);  /* 0C062C14 mov.w @(disp,pc),Rn */
	T = (r3 & r0) == 0;  /* 0C062C16 tst Rm,Rn */
	UPD(0x0C062C18u, 1);
L_0C062C18: BLKS(0x0C062C18u);
	SPIN_SAVE(0C062C18);
	if (!T) { SPIN_FFD(0C062C18, 3); UPD(0x0C062C18u, 3); goto L_0C062C18; }  /* 0C062C18 bf */
L_0C062C1A: BLKS(0x0C062C1Au);
	r9 = 0xC062EA0u; UPD(0x0C062C1Cu, 1);  /* 0C062C1A mov.l @(disp,pc),Rn */
	r11 = 0xC062F00u; UPD(0x0C062C1Eu, 1);  /* 0C062C1C mov.l @(disp,pc),Rn */
	r13 = 0xC0404000u; UPD(0x0C062C20u, 1);  /* 0C062C1E mov.l @(disp,pc),Rn */
	r12 = 0xC0626E0u; UPD(0x0C062C22u, 1);  /* 0C062C20 mov.l @(disp,pc),Rn */
	r10 = 0xC062490u; UPD(0x0C062C24u, 1);  /* 0C062C22 mov.l @(disp,pc),Rn */
L_0C062C24: BLKS(0x0C062C24u);
	r8 = 0xC060BC0u; UPD(0x0C062C26u, 1);  /* 0C062C24 mov.l @(disp,pc),Rn */
	IF(0x0C062C26u); { u32 t_ = r8; PR = 0x0C062C2Au; IF(0x0C062C28u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C060BC0, 0x0C060BC0u, 0x0C062C2Au); }  /* 0C062C26 jsr @Rn */
L_0C062C2A: BLKS(0x0C062C2Au);
	r8 = 0xC061200u; UPD(0x0C062C2Cu, 1);  /* 0C062C2A mov.l @(disp,pc),Rn */
	IF(0x0C062C2Cu); { u32 t_ = r8; PR = 0x0C062C30u; IF(0x0C062C2Eu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C061200, 0x0C061200u, 0x0C062C30u); }  /* 0C062C2C jsr @Rn */
L_0C062C30: BLKS(0x0C062C30u);
	r8 = 0xC062060u; UPD(0x0C062C32u, 1);  /* 0C062C30 mov.l @(disp,pc),Rn */
	IF(0x0C062C32u); { u32 t_ = r8; PR = 0x0C062C36u; r4 = 0x40u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062060, 0x0C062060u, 0x0C062C36u); }  /* 0C062C32 jsr @Rn */
L_0C062C36: BLKS(0x0C062C36u);
	r6 = 0xA4000124u; UPD(0x0C062C38u, 1);  /* 0C062C36 mov.l @(disp,pc),Rn */
	r5 = (u32)(s32)(s8)R8(r6); UPD(0x0C062C3Au, 1);  /* 0C062C38 mov.b @Rm,Rn */
	r4 = (u32)(s32)(s8)r5;  /* 0C062C3A exts.b Rm,Rn */
	r5 = 0x1Cu;  /* 0C062C3C mov #imm,Rn */
	IF(0x0C062C3Eu); { u32 t_ = r9; PR = 0x0C062C42u; r6 = 0xCu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C062EA0, 0x0C062EA0u, 0x0C062C42u); }  /* 0C062C3E jsr @Rn */
L_0C062C42: BLKS(0x0C062C42u);
	r4 = 0xA4000126u; UPD(0x0C062C44u, 1);  /* 0C062C42 mov.l @(disp,pc),Rn */
	r5 = 0x1Bu;  /* 0C062C44 mov #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r4); UPD(0x0C062C48u, 2);  /* 0C062C46 mov.b @Rm,Rn */
	r6 = 0xCu;  /* 0C062C48 mov #imm,Rn */
	r8 = 0xA4000134u; UPD(0x0C062C4Cu, 2);  /* 0C062C4A mov.l @(disp,pc),Rn */
	IF(0x0C062C4Cu); { u32 t_ = r9; PR = 0x0C062C50u; r4 = (u32)(s32)(s8)r2; /* slot exts.b Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062EA0, 0x0C062EA0u, 0x0C062C50u); }  /* 0C062C4C jsr @Rn */
L_0C062C50: BLKS(0x0C062C50u);
	r0 = (u32)(s32)(s8)R8(r8); UPD(0x0C062C52u, 1);  /* 0C062C50 mov.b @Rm,Rn */
	r5 = 0x1Au;  /* 0C062C52 mov #imm,Rn */
	r4 = (u32)(s32)(s8)r0;  /* 0C062C54 exts.b Rm,Rn */
	IF(0x0C062C56u); { u32 t_ = r9; PR = 0x0C062C5Au; r6 = 0xCu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C062EA0, 0x0C062EA0u, 0x0C062C5Au); }  /* 0C062C56 jsr @Rn */
L_0C062C5A: BLKS(0x0C062C5Au);
	r3 = 0xA400012Au; UPD(0x0C062C5Cu, 1);  /* 0C062C5A mov.l @(disp,pc),Rn */
	r5 = 0x19u;  /* 0C062C5C mov #imm,Rn */
	r7 = (u32)(s32)(s8)R8(r3); UPD(0x0C062C60u, 2);  /* 0C062C5E mov.b @Rm,Rn */
	r6 = 0xCu;  /* 0C062C60 mov #imm,Rn */
	IF(0x0C062C62u); { u32 t_ = r9; PR = 0x0C062C66u; r4 = (u32)(s32)(s8)r7; /* slot exts.b Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C062EA0, 0x0C062EA0u, 0x0C062C66u); }  /* 0C062C62 jsr @Rn */
L_0C062C66: BLKS(0x0C062C66u);
	r6 = 0xA4000130u; UPD(0x0C062C68u, 1);  /* 0C062C66 mov.l @(disp,pc),Rn */
	r5 = (u32)(s32)(s8)R8(r6); UPD(0x0C062C6Au, 1);  /* 0C062C68 mov.b @Rm,Rn */
	r4 = (u32)(s32)(s8)r5;  /* 0C062C6A exts.b Rm,Rn */
	r5 = 0x18u;  /* 0C062C6C mov #imm,Rn */
	IF(0x0C062C6Eu); { u32 t_ = r9; PR = 0x0C062C72u; r6 = 0xCu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C062EA0, 0x0C062EA0u, 0x0C062C72u); }  /* 0C062C6E jsr @Rn */
L_0C062C72: BLKS(0x0C062C72u);
	r4 = 0xB8000050u; UPD(0x0C062C74u, 1);  /* 0C062C72 mov.l @(disp,pc),Rn */
	r5 = 0x17u;  /* 0C062C74 mov #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r4); UPD(0x0C062C78u, 2);  /* 0C062C76 mov.b @Rm,Rn */
	r6 = 0xCu;  /* 0C062C78 mov #imm,Rn */
	r2 += 0x3u;  /* 0C062C7A add #imm,Rn */
	r8 = 0xC2380CFu; UPD(0x0C062C7Eu, 3);  /* 0C062C7C mov.l @(disp,pc),Rn */
	IF(0x0C062C7Eu); { u32 t_ = r9; PR = 0x0C062C82u; r4 = (u32)(s32)(s8)r2; /* slot exts.b Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062EA0, 0x0C062EA0u, 0x0C062C82u); }  /* 0C062C7E jsr @Rn */
L_0C062C82: BLKS(0x0C062C82u);
	r4 = (u32)(s32)(s8)R8(r8); UPD(0x0C062C84u, 1);  /* 0C062C82 mov.b @Rm,Rn */
	r5 = 0x16u;  /* 0C062C84 mov #imm,Rn */
	IF(0x0C062C86u); { u32 t_ = r9; PR = 0x0C062C8Au; r6 = 0xCu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C062EA0, 0x0C062EA0u, 0x0C062C8Au); }  /* 0C062C86 jsr @Rn */
L_0C062C8A: BLKS(0x0C062C8Au);
	r0 = 0xC239450u; UPD(0x0C062C8Cu, 1);  /* 0C062C8A mov.l @(disp,pc),Rn */
	r5 = 0x13u;  /* 0C062C8C mov #imm,Rn */
	r4 = (u32)(s32)(s8)R8(r0); UPD(0x0C062C90u, 2);  /* 0C062C8E mov.b @Rm,Rn */
	r6 = 0x8u;  /* 0C062C90 mov #imm,Rn */
	IF(0x0C062C92u); { u32 t_ = r11; PR = 0x0C062C96u; r7 = 0x3u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C062F00, 0x0C062F00u, 0x0C062C96u); }  /* 0C062C92 jsr @Rn */
L_0C062C96: BLKS(0x0C062C96u);
	r3 = 0xC237C12u; UPD(0x0C062C98u, 1);  /* 0C062C96 mov.l @(disp,pc),Rn */
	r5 = 0x13u;  /* 0C062C98 mov #imm,Rn */
	r4 = (u32)(s32)(s16)R16(r3); UPD(0x0C062C9Cu, 2);  /* 0C062C9A mov.w @Rm,Rn */
	r6 = 0x10u;  /* 0C062C9C mov #imm,Rn */
	IF(0x0C062C9Eu); { u32 t_ = r11; PR = 0x0C062CA2u; r7 = 0x8u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C062F00, 0x0C062F00u, 0x0C062CA2u); }  /* 0C062C9E jsr @Rn */
L_0C062CA2: BLKS(0x0C062CA2u);
	r7 = 0xC228BF8u; UPD(0x0C062CA4u, 1);  /* 0C062CA2 mov.l @(disp,pc),Rn */
	r5 = 0x13u;  /* 0C062CA4 mov #imm,Rn */
	r4 = (u32)(s32)(s16)R16(r7); UPD(0x0C062CA8u, 2);  /* 0C062CA6 mov.w @Rm,Rn */
	r6 = 0x15u;  /* 0C062CA8 mov #imm,Rn */
	IF(0x0C062CAAu); { u32 t_ = r11; PR = 0x0C062CAEu; r7 = 0x8u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C062F00, 0x0C062F00u, 0x0C062CAEu); }  /* 0C062CAA jsr @Rn */
L_0C062CAE: BLKS(0x0C062CAEu);
	r6 = 0xC238029u; UPD(0x0C062CB0u, 1);  /* 0C062CAE mov.l @(disp,pc),Rn */
	r5 = (u32)(s32)(s8)R8(r6); UPD(0x0C062CB2u, 1);  /* 0C062CB0 mov.b @Rm,Rn */
	T = (r5 & r5) == 0;  /* 0C062CB2 tst Rm,Rn */
	{ u32 c_ = !T; r5 = 0xAu; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C062CF0u, 4); goto L_0C062CF0; } UPD(0x0C062CB8u, 1); goto L_0C062CB8; }  /* 0C062CB4 bf/s */
L_0C062CB8: BLKS(0x0C062CB8u);
	r8 = 0xC061010u; UPD(0x0C062CBAu, 1);  /* 0C062CB8 mov.l @(disp,pc),Rn */
	r5 = 0x7u;  /* 0C062CBA mov #imm,Rn */
	IF(0x0C062CBCu); { u32 t_ = r8; PR = 0x0C062CC0u; r4 = 0x7u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C061010, 0x0C061010u, 0x0C062CC0u); }  /* 0C062CBC jsr @Rn */
L_0C062CC0: BLKS(0x0C062CC0u);
	r8 = 0xC062250u; UPD(0x0C062CC2u, 1);  /* 0C062CC0 mov.l @(disp,pc),Rn */
	IF(0x0C062CC2u); { u32 t_ = r8; PR = 0x0C062CC6u; IF(0x0C062CC4u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C062250, 0x0C062250u, 0x0C062CC6u); }  /* 0C062CC2 jsr @Rn */
L_0C062CC6: BLKS(0x0C062CC6u);
	r2 = 0xC2B03A6u; UPD(0x0C062CC8u, 1);  /* 0C062CC6 mov.l @(disp,pc),Rn */
	r0 = 0x100u; UPD(0x0C062CCAu, 1);  /* 0C062CC8 mov.w @(disp,pc),Rn */
	r5 = (u32)(s32)(s16)R16(r2); UPD(0x0C062CCCu, 1);  /* 0C062CCA mov.w @Rm,Rn */
	T = (r5 & r0) == 0;  /* 0C062CCC tst Rm,Rn */
	if (T) { UPD(0x0C062C24u, 4); goto L_0C062C24; }  /* 0C062CCE bt */
L_0C062CD0: BLKS(0x0C062CD0u);
	r12 = 0x0u;  /* 0C062CD0 mov #imm,Rn */
	r11 = 0xC237C06u; UPD(0x0C062CD4u, 2);  /* 0C062CD2 mov.l @(disp,pc),Rn */
	W8(r11, r12); UPD(0x0C062CD6u, 1);  /* 0C062CD4 mov.b Rm,@Rn */
	r15 = r14;  /* 0C062CD6 mov Rm,Rn */
	IF(0x0C062CD8u); PR = R32(r15); r15 += 4; UPD(0x0C062CDAu, 2);  /* 0C062CD8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C062CDCu, 1);  /* 0C062CDA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C062CDEu, 1);  /* 0C062CDC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C062CE0u, 1);  /* 0C062CDE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C062CE2u, 1);  /* 0C062CE0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C062CE4u, 1);  /* 0C062CE2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C062CE6u, 1);  /* 0C062CE4 mov.l @Rm+,Rn */
	IF(0x0C062CE6u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C062CE6 rts */
L_0C062CF0: BLKS(0x0C062CF0u);
	r4 = 0xC172D98u; UPD(0x0C062CF2u, 1);  /* 0C062CF0 mov.l @(disp,pc),Rn */
	r6 = 0x14u;  /* 0C062CF2 mov #imm,Rn */
	IF(0x0C062CF4u); { u32 t_ = r12; PR = 0x0C062CF8u; r7 = r13; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C062CF8u); }  /* 0C062CF4 jsr @Rn */
L_0C062CF8: BLKS(0x0C062CF8u);
	r4 = 0xC172D9Cu; UPD(0x0C062CFAu, 1);  /* 0C062CF8 mov.l @(disp,pc),Rn */
	r5 = 0xAu;  /* 0C062CFA mov #imm,Rn */
	r6 = 0x19u;  /* 0C062CFC mov #imm,Rn */
	IF(0x0C062CFEu); { u32 t_ = r12; PR = 0x0C062D02u; r7 = r13; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C062D02u); }  /* 0C062CFE jsr @Rn */
L_0C062D02: BLKS(0x0C062D02u);
	r4 = 0xC172DA0u; UPD(0x0C062D04u, 1);  /* 0C062D02 mov.l @(disp,pc),Rn */
	r5 = 0x9u;  /* 0C062D04 mov #imm,Rn */
	r6 = 0xCu;  /* 0C062D06 mov #imm,Rn */
	IF(0x0C062D08u); { u32 t_ = r12; PR = 0x0C062D0Cu; r7 = r13; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C062D0Cu); }  /* 0C062D08 jsr @Rn */
L_0C062D0C: BLKS(0x0C062D0Cu);
	r4 = 0xC172DACu; UPD(0x0C062D0Eu, 1);  /* 0C062D0C mov.l @(disp,pc),Rn */
	r5 = 0x8u;  /* 0C062D0E mov #imm,Rn */
	r6 = 0xCu;  /* 0C062D10 mov #imm,Rn */
	IF(0x0C062D12u); { u32 t_ = r12; PR = 0x0C062D16u; r7 = r13; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C062D16u); }  /* 0C062D12 jsr @Rn */
L_0C062D16: BLKS(0x0C062D16u);
	r4 = 0xC172DB8u; UPD(0x0C062D18u, 1);  /* 0C062D16 mov.l @(disp,pc),Rn */
	r5 = 0x6u;  /* 0C062D18 mov #imm,Rn */
	r6 = 0xCu;  /* 0C062D1A mov #imm,Rn */
	IF(0x0C062D1Cu); { u32 t_ = r12; PR = 0x0C062D20u; r7 = r13; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C062D20u); }  /* 0C062D1C jsr @Rn */
L_0C062D20: BLKS(0x0C062D20u);
	r4 = 0xC172DC4u; UPD(0x0C062D22u, 1);  /* 0C062D20 mov.l @(disp,pc),Rn */
	r5 = 0x5u;  /* 0C062D22 mov #imm,Rn */
	r6 = 0xCu;  /* 0C062D24 mov #imm,Rn */
	IF(0x0C062D26u); { u32 t_ = r12; PR = 0x0C062D2Au; r7 = r13; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C062D2Au); }  /* 0C062D26 jsr @Rn */
L_0C062D2A: BLKS(0x0C062D2Au);
	r3 = 0xC3C5468u; UPD(0x0C062D2Cu, 1);  /* 0C062D2A mov.l @(disp,pc),Rn */
	r5 = 0x9u;  /* 0C062D2C mov #imm,Rn */
	r7 = (u32)(s32)(s8)R8(r3); UPD(0x0C062D30u, 2);  /* 0C062D2E mov.b @Rm,Rn */
	r6 = 0x14u;  /* 0C062D30 mov #imm,Rn */
	IF(0x0C062D32u); { u32 t_ = r10; PR = 0x0C062D36u; r4 = r7 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C062490, 0x0C062490u, 0x0C062D36u); }  /* 0C062D32 jsr @Rn */
L_0C062D36: BLKS(0x0C062D36u);
	r4 = 0xC3C5469u; UPD(0x0C062D38u, 1);  /* 0C062D36 mov.l @(disp,pc),Rn */
	r5 = 0x9u;  /* 0C062D38 mov #imm,Rn */
	r8 = (u32)(s32)(s8)R8(r4); UPD(0x0C062D3Cu, 2);  /* 0C062D3A mov.b @Rm,Rn */
	r4 = r8 & 0xFF;  /* 0C062D3C extu.b Rm,Rn */
	r8 = 0xC3CA6F0u; UPD(0x0C062D40u, 2);  /* 0C062D3E mov.l @(disp,pc),Rn */
	IF(0x0C062D40u); { u32 t_ = r10; PR = 0x0C062D44u; r6 = 0x19u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062490, 0x0C062490u, 0x0C062D44u); }  /* 0C062D40 jsr @Rn */
L_0C062D44: BLKS(0x0C062D44u);
	{ u32 v_ = (u32)(s32)(s8)R8(r8); r8 += 1; r1 = v_; } UPD(0x0C062D46u, 1);  /* 0C062D44 mov.b @Rm+,Rn */
	r5 = 0x8u;  /* 0C062D46 mov #imm,Rn */
	r4 = r1 & 0xFF;  /* 0C062D48 extu.b Rm,Rn */
	IF(0x0C062D4Au); { u32 t_ = r10; PR = 0x0C062D4Eu; r6 = 0x14u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C062490, 0x0C062490u, 0x0C062D4Eu); }  /* 0C062D4A jsr @Rn */
L_0C062D4E: BLKS(0x0C062D4Eu);
	r6 = (u32)(s32)(s8)R8(r8); UPD(0x0C062D50u, 1);  /* 0C062D4E mov.b @Rm,Rn */
	r5 = 0x8u;  /* 0C062D50 mov #imm,Rn */
	r4 = r6 & 0xFF;  /* 0C062D52 extu.b Rm,Rn */
	r8 = 0xC2B037Cu; UPD(0x0C062D56u, 3);  /* 0C062D54 mov.l @(disp,pc),Rn */
	IF(0x0C062D56u); { u32 t_ = r10; PR = 0x0C062D5Au; r6 = 0x19u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062490, 0x0C062490u, 0x0C062D5Au); }  /* 0C062D56 jsr @Rn */
L_0C062D5A: BLKS(0x0C062D5Au);
	{ u32 v_ = (u32)(s32)(s8)R8(r8); r8 += 1; r5 = v_; } UPD(0x0C062D5Cu, 1);  /* 0C062D5A mov.b @Rm+,Rn */
	r6 = 0x14u;  /* 0C062D5C mov #imm,Rn */
	r4 = r5 & 0xFF;  /* 0C062D5E extu.b Rm,Rn */
	IF(0x0C062D60u); { u32 t_ = r10; PR = 0x0C062D64u; r5 = 0x6u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C062490, 0x0C062490u, 0x0C062D64u); }  /* 0C062D60 jsr @Rn */
L_0C062D64: BLKS(0x0C062D64u);
	r2 = (u32)(s32)(s8)R8(r8); UPD(0x0C062D66u, 1);  /* 0C062D64 mov.b @Rm,Rn */
	r5 = 0x6u;  /* 0C062D66 mov #imm,Rn */
	r8 = 0xC2A6D44u; UPD(0x0C062D6Au, 2);  /* 0C062D68 mov.l @(disp,pc),Rn */
	r4 = r2 & 0xFF;  /* 0C062D6A extu.b Rm,Rn */
	IF(0x0C062D6Cu); { u32 t_ = r10; PR = 0x0C062D70u; r6 = 0x19u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C062490, 0x0C062490u, 0x0C062D70u); }  /* 0C062D6C jsr @Rn */
L_0C062D70: BLKS(0x0C062D70u);
	{ u32 v_ = (u32)(s32)(s8)R8(r8); r8 += 1; r0 = v_; } UPD(0x0C062D72u, 1);  /* 0C062D70 mov.b @Rm+,Rn */
	r5 = 0x5u;  /* 0C062D72 mov #imm,Rn */
	r4 = r0 & 0xFF;  /* 0C062D74 extu.b Rm,Rn */
	IF(0x0C062D76u); { u32 t_ = r10; PR = 0x0C062D7Au; r6 = 0x14u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C062490, 0x0C062490u, 0x0C062D7Au); }  /* 0C062D76 jsr @Rn */
L_0C062D7A: BLKS(0x0C062D7Au);
	r3 = (u32)(s32)(s8)R8(r8); UPD(0x0C062D7Cu, 1);  /* 0C062D7A mov.b @Rm,Rn */
	r5 = 0x5u;  /* 0C062D7C mov #imm,Rn */
	r8 = 0xC28EDA8u; UPD(0x0C062D80u, 2);  /* 0C062D7E mov.l @(disp,pc),Rn */
	r4 = r3 & 0xFF;  /* 0C062D80 extu.b Rm,Rn */
	IF(0x0C062D82u); { u32 t_ = r10; PR = 0x0C062D86u; r6 = 0x19u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C062490, 0x0C062490u, 0x0C062D86u); }  /* 0C062D82 jsr @Rn */
L_0C062D86: BLKS(0x0C062D86u);
	{ u32 v_ = (u32)(s32)(s8)R8(r8); r8 += 1; r7 = v_; } UPD(0x0C062D88u, 1);  /* 0C062D86 mov.b @Rm+,Rn */
	r5 = 0x4u;  /* 0C062D88 mov #imm,Rn */
	r4 = r7 & 0xFF;  /* 0C062D8A extu.b Rm,Rn */
	IF(0x0C062D8Cu); { u32 t_ = r10; PR = 0x0C062D90u; r6 = 0x14u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C062490, 0x0C062490u, 0x0C062D90u); }  /* 0C062D8C jsr @Rn */
L_0C062D90: BLKS(0x0C062D90u);
	r1 = (u32)(s32)(s8)R8(r8); UPD(0x0C062D92u, 1);  /* 0C062D90 mov.b @Rm,Rn */
	r5 = 0x4u;  /* 0C062D92 mov #imm,Rn */
	r4 = r1 & 0xFF;  /* 0C062D94 extu.b Rm,Rn */
	IF(0x0C062D96u); { u32 t_ = r10; PR = 0x0C062D9Au; r6 = 0x19u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C062490, 0x0C062490u, 0x0C062D9Au); }  /* 0C062D96 jsr @Rn */
L_0C062D9A: BLKS(0x0C062D9Au);
	{ IF(0x0C062D9Cu); ; /* slot nop */ UPD(0x0C062CB8u, 3); goto L_0C062CB8; }  /* 0C062D9A bra */
}

/* FUN_0c062ea0 */
void blk_f_0C062EA0(sh3_t *c)
{
	LOCALS;
L_0C062EA0: BLKS(0x0C062EA0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C062EA2u, 1);  /* 0C062EA0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C062EA4u, 1);  /* 0C062EA2 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s8)r4;  /* 0C062EA4 exts.b Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C062EA8u, 2);  /* 0C062EA6 mov.l Rm,@-Rn */
	r9 = 0x7u;  /* 0C062EA8 mov #imm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C062EACu, 2);  /* 0C062EAA mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s8)r6;  /* 0C062EAC exts.b Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C062EB0u, 2);  /* 0C062EAE mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s8)r5;  /* 0C062EB0 exts.b Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C062EB4u, 2);  /* 0C062EB2 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C062EB6u, 1);  /* 0C062EB4 mov.l Rm,@-Rn */
	r13 = 0xC172DE0u; UPD(0x0C062EB8u, 1);  /* 0C062EB6 mov.l @(disp,pc),Rn */
	IF(0x0C062EB8u); r15 -= 4; W32(r15, PR); UPD(0x0C062EBAu, 1);  /* 0C062EB8 sts.l pr,@-Rn */
	r12 = 0xC0624D0u; UPD(0x0C062EBCu, 1);  /* 0C062EBA mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C062EBC mov Rm,Rn */
	r0 = r8;  /* 0C062EBE mov Rm,Rn */
	UPD(0x0C062EC0u, 2);
L_0C062EC0: BLKS(0x0C062EC0u);
	r0 &= 0x1u;  /* 0C062EC0 and #imm,r0 */
	r6 = r10;  /* 0C062EC2 mov Rm,Rn */
	IF(0x0C062EC4u); r0 <<= 2;  /* 0C062EC4 shll2 Rn */
	r6 += r9;  /* 0C062EC6 add Rm,Rn */
	IF(0x0C062EC8u); r4 = R32(r0 + r13); UPD(0x0C062ECAu, 5);  /* 0C062EC8 mov.l @(r0,Rm),Rn */
	r5 = r11;  /* 0C062ECA mov Rm,Rn */
	IF(0x0C062ECCu); { u32 t_ = r12; PR = 0x0C062ED0u; IF(0x0C062ECEu); T = r8 & 1; r8 = (u32)((s32)r8 >> 1); /* slot shar Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0624D0, 0x0C0624D0u, 0x0C062ED0u); }  /* 0C062ECC jsr @Rn */
L_0C062ED0: BLKS(0x0C062ED0u);
	r9 += 0xFFFFFFFFu;  /* 0C062ED0 add #imm,Rn */
	IF(0x0C062ED2u); T = (s32)r9 >= 0;  /* 0C062ED2 cmp/pz Rn */
	{ u32 c_ = T; r0 = r8; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C062EC0u, 5); goto L_0C062EC0; } goto L_0C062ED8; }  /* 0C062ED4 bt/s */
L_0C062ED8: BLKS(0x0C062ED8u);
	r15 = r14;  /* 0C062ED8 mov Rm,Rn */
	IF(0x0C062EDAu); PR = R32(r15); r15 += 4; UPD(0x0C062EDCu, 3);  /* 0C062EDA lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C062EDEu, 1);  /* 0C062EDC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C062EE0u, 1);  /* 0C062EDE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C062EE2u, 1);  /* 0C062EE0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C062EE4u, 1);  /* 0C062EE2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C062EE6u, 1);  /* 0C062EE4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C062EE8u, 1);  /* 0C062EE6 mov.l @Rm+,Rn */
	IF(0x0C062EE8u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C062EE8 rts */
}

/* FUN_0c062f00 */
void blk_f_0C062F00(sh3_t *c)
{
	LOCALS;
L_0C062F00: BLKS(0x0C062F00u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C062F02u, 1);  /* 0C062F00 mov.l Rm,@-Rn */
	IF(0x0C062F02u); T = (s32)r7 >= 0;  /* 0C062F02 cmp/pz Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C062F06u, 2);  /* 0C062F04 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C062F08u, 1);  /* 0C062F06 mov.l Rm,@-Rn */
	r9 = r7;  /* 0C062F08 mov Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C062F0Cu, 2);  /* 0C062F0A mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s16)r4;  /* 0C062F0C exts.w Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C062F10u, 2);  /* 0C062F0E mov.l Rm,@-Rn */
	r11 = r6;  /* 0C062F10 mov Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C062F14u, 2);  /* 0C062F12 mov.l Rm,@-Rn */
	IF(0x0C062F14u); r15 -= 4; W32(r15, PR); UPD(0x0C062F16u, 1);  /* 0C062F14 sts.l pr,@-Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C062F36u, 3); goto L_0C062F36; } goto L_0C062F1A; }  /* 0C062F16 bf/s */
L_0C062F1A: BLKS(0x0C062F1Au);
	r12 = 0xC062F50u; UPD(0x0C062F1Cu, 2);  /* 0C062F1A mov.l @(disp,pc),Rn */
	r8 = r5;  /* 0C062F1C mov Rm,Rn */
	IF(0x0C062F1Eu); ;  /* 0C062F1E nop */
	UPD(0x0C062F20u, 2);
L_0C062F20: BLKS(0x0C062F20u);
	r0 = r10;  /* 0C062F20 mov Rm,Rn */
	r0 &= 0x1u;  /* 0C062F22 and #imm,r0 */
	r5 = r8;  /* 0C062F24 mov Rm,Rn */
	r4 = r0;  /* 0C062F26 mov Rm,Rn */
	r6 = r11;  /* 0C062F28 mov Rm,Rn */
	IF(0x0C062F2Au); { u32 t_ = r12; PR = 0x0C062F2Eu; IF(0x0C062F2Cu); T = r10 & 1; r10 = (u32)((s32)r10 >> 1); /* slot shar Rn */ UPD(t_, 7); CALLP(t_, blk_f_0C062F50, 0x0C062F50u, 0x0C062F2Eu); }  /* 0C062F2A jsr @Rn */
L_0C062F2E: BLKS(0x0C062F2Eu);
	r9 += 0xFFFFFFFFu;  /* 0C062F2E add #imm,Rn */
	IF(0x0C062F30u); T = (s32)r9 >= 0;  /* 0C062F30 cmp/pz Rn */
	{ u32 c_ = T; r8 += 0xFFFFFFFFu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C062F20u, 5); goto L_0C062F20; } UPD(0x0C062F36u, 1); goto L_0C062F36; }  /* 0C062F32 bt/s */
L_0C062F36: BLKS(0x0C062F36u);
	r15 = r14;  /* 0C062F36 mov Rm,Rn */
	IF(0x0C062F38u); PR = R32(r15); r15 += 4; UPD(0x0C062F3Au, 2);  /* 0C062F38 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C062F3Cu, 1);  /* 0C062F3A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C062F3Eu, 1);  /* 0C062F3C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C062F40u, 1);  /* 0C062F3E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C062F42u, 1);  /* 0C062F40 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C062F44u, 1);  /* 0C062F42 mov.l @Rm+,Rn */
	IF(0x0C062F44u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C062F44 rts */
}

/* FUN_0c062f50 */
void blk_f_0C062F50(sh3_t *c)
{
	LOCALS;
L_0C062F50: BLKS(0x0C062F50u);
	r0 = (u32)(s32)(s8)r4;  /* 0C062F50 exts.b Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C062F52 tst Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C062F56u, 3);  /* 0C062F54 mov.l Rm,@-Rn */
	IF(0x0C062F56u); r0 = T;  /* 0C062F56 movt Rn */
	r2 = 0xC172E08u; UPD(0x0C062F5Au, 2);  /* 0C062F58 mov.l @(disp,pc),Rn */
	IF(0x0C062F5Au); r0 <<= 2;  /* 0C062F5A shll2 Rn */
	IF(0x0C062F5Cu); r4 = R32(r0 + r2); UPD(0x0C062F5Eu, 2);  /* 0C062F5C mov.l @(r0,Rm),Rn */
	r14 = r15;  /* 0C062F5E mov Rm,Rn */
	r0 = 0xC0624D0u; UPD(0x0C062F62u, 2);  /* 0C062F60 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C062F62 mov Rm,Rn */
	IF(0x0C062F64u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0624D0u: TAIL(blk_f_0C0624D0); default: JUMPD(tv_); } }  /* 0C062F64 jmp @Rn */
}

void blk_f_0C062F70(sh3_t *c)
{
	LOCALS;
L_0C062F70: BLKS(0x0C062F70u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C062F72u, 1);  /* 0C062F70 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C062F74u, 1);  /* 0C062F72 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C062F76u, 1);  /* 0C062F74 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C062F78u, 1);  /* 0C062F76 mov.l Rm,@-Rn */
	r10 = 0x0u;  /* 0C062F78 mov #imm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C062F7Cu, 2);  /* 0C062F7A mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C062F7Eu, 1);  /* 0C062F7C mov.l Rm,@-Rn */
	r12 = 0x0u;  /* 0C062F7E mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C062F82u, 2);  /* 0C062F80 mov.l Rm,@-Rn */
	r0 = 0xC0654D0u; UPD(0x0C062F84u, 1);  /* 0C062F82 mov.l @(disp,pc),Rn */
	IF(0x0C062F84u); r15 -= 4; W32(r15, PR); UPD(0x0C062F86u, 1);  /* 0C062F84 sts.l pr,@-Rn */
	r15 += 0xFFFFFFF4u;  /* 0C062F86 add #imm,Rn */
	r13 = 0xC0624D0u; UPD(0x0C062F8Au, 2);  /* 0C062F88 mov.l @(disp,pc),Rn */
	IF(0x0C062F8Au); { u32 t_ = r0; PR = 0x0C062F8Eu; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0654D0, 0x0C0654D0u, 0x0C062F8Eu); }  /* 0C062F8A jsr @Rn */
L_0C062F8E: BLKS(0x0C062F8Eu);
	W32(r14, r12); UPD(0x0C062F90u, 1);  /* 0C062F8E mov.l Rm,@Rn */
	W32(r14 + 0x4u, r12); UPD(0x0C062F92u, 1);  /* 0C062F90 mov.l Rm,@(disp,Rn) */
L_0C062F92: BLKS(0x0C062F92u);
	r8 = 0xC060BC0u; UPD(0x0C062F94u, 1);  /* 0C062F92 mov.l @(disp,pc),Rn */
	r11 = 0xC061200u; UPD(0x0C062F96u, 1);  /* 0C062F94 mov.l @(disp,pc),Rn */
	IF(0x0C062F96u); { u32 t_ = r8; PR = 0x0C062F9Au; IF(0x0C062F98u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C060BC0, 0x0C060BC0u, 0x0C062F9Au); }  /* 0C062F96 jsr @Rn */
L_0C062F9A: BLKS(0x0C062F9Au);
	r9 = 0xC062060u; UPD(0x0C062F9Cu, 1);  /* 0C062F9A mov.l @(disp,pc),Rn */
	IF(0x0C062F9Cu); { u32 t_ = r11; PR = 0x0C062FA0u; IF(0x0C062F9Eu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C061200, 0x0C061200u, 0x0C062FA0u); }  /* 0C062F9C jsr @Rn */
L_0C062FA0: BLKS(0x0C062FA0u);
	r8 = 0xC062000u; UPD(0x0C062FA2u, 1);  /* 0C062FA0 mov.l @(disp,pc),Rn */
	r11 = 0xC172E10u; UPD(0x0C062FA4u, 1);  /* 0C062FA2 mov.l @(disp,pc),Rn */
	IF(0x0C062FA4u); { u32 t_ = r9; PR = 0x0C062FA8u; r4 = 0x40u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062060, 0x0C062060u, 0x0C062FA8u); }  /* 0C062FA4 jsr @Rn */
L_0C062FA8: BLKS(0x0C062FA8u);
	IF(0x0C062FA8u); { u32 t_ = r8; PR = 0x0C062FACu; IF(0x0C062FAAu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C062000, 0x0C062000u, 0x0C062FACu); }  /* 0C062FA8 jsr @Rn */
L_0C062FAC: BLKS(0x0C062FACu);
	r4 = r11;  /* 0C062FAC mov Rm,Rn */
	r5 = 0xCu;  /* 0C062FAE mov #imm,Rn */
	IF(0x0C062FB0u); { u32 t_ = r13; PR = 0x0C062FB4u; r6 = 0x7u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0624D0, 0x0C0624D0u, 0x0C062FB4u); }  /* 0C062FB0 jsr @Rn */
L_0C062FB4: BLKS(0x0C062FB4u);
	r4 = r11;  /* 0C062FB4 mov Rm,Rn */
	r5 = 0xDu;  /* 0C062FB6 mov #imm,Rn */
	IF(0x0C062FB8u); { u32 t_ = r13; PR = 0x0C062FBCu; r6 = 0x7u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0624D0, 0x0C0624D0u, 0x0C062FBCu); }  /* 0C062FB8 jsr @Rn */
L_0C062FBC: BLKS(0x0C062FBCu);
	r9 = 0xC172E58u; UPD(0x0C062FBEu, 1);  /* 0C062FBC mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C062FBE mov Rm,Rn */
	r5 = 0xEu;  /* 0C062FC0 mov #imm,Rn */
	IF(0x0C062FC2u); { u32 t_ = r13; PR = 0x0C062FC6u; r6 = 0x7u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0624D0, 0x0C0624D0u, 0x0C062FC6u); }  /* 0C062FC2 jsr @Rn */
L_0C062FC6: BLKS(0x0C062FC6u);
	r4 = r11;  /* 0C062FC6 mov Rm,Rn */
	r5 = 0xFu;  /* 0C062FC8 mov #imm,Rn */
	IF(0x0C062FCAu); { u32 t_ = r13; PR = 0x0C062FCEu; r6 = 0x7u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0624D0, 0x0C0624D0u, 0x0C062FCEu); }  /* 0C062FCA jsr @Rn */
L_0C062FCE: BLKS(0x0C062FCEu);
	r4 = r9;  /* 0C062FCE mov Rm,Rn */
	r5 = 0x10u;  /* 0C062FD0 mov #imm,Rn */
	IF(0x0C062FD2u); { u32 t_ = r13; PR = 0x0C062FD6u; r6 = 0x7u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0624D0, 0x0C0624D0u, 0x0C062FD6u); }  /* 0C062FD2 jsr @Rn */
L_0C062FD6: BLKS(0x0C062FD6u);
	r4 = r9;  /* 0C062FD6 mov Rm,Rn */
	r5 = 0x11u;  /* 0C062FD8 mov #imm,Rn */
	IF(0x0C062FDAu); { u32 t_ = r13; PR = 0x0C062FDEu; r6 = 0x7u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0624D0, 0x0C0624D0u, 0x0C062FDEu); }  /* 0C062FDA jsr @Rn */
L_0C062FDE: BLKS(0x0C062FDEu);
	r11 = 0xC172EA0u; UPD(0x0C062FE0u, 1);  /* 0C062FDE mov.l @(disp,pc),Rn */
	r4 = r9;  /* 0C062FE0 mov Rm,Rn */
	r5 = 0x12u;  /* 0C062FE2 mov #imm,Rn */
	IF(0x0C062FE4u); { u32 t_ = r13; PR = 0x0C062FE8u; r6 = 0x7u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0624D0, 0x0C0624D0u, 0x0C062FE8u); }  /* 0C062FE4 jsr @Rn */
L_0C062FE8: BLKS(0x0C062FE8u);
	r4 = r9;  /* 0C062FE8 mov Rm,Rn */
	r5 = 0x13u;  /* 0C062FEA mov #imm,Rn */
	IF(0x0C062FECu); { u32 t_ = r13; PR = 0x0C062FF0u; r6 = 0x7u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0624D0, 0x0C0624D0u, 0x0C062FF0u); }  /* 0C062FEC jsr @Rn */
L_0C062FF0: BLKS(0x0C062FF0u);
	r4 = r11;  /* 0C062FF0 mov Rm,Rn */
	r5 = 0x14u;  /* 0C062FF2 mov #imm,Rn */
	IF(0x0C062FF4u); { u32 t_ = r13; PR = 0x0C062FF8u; r6 = 0x7u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0624D0, 0x0C0624D0u, 0x0C062FF8u); }  /* 0C062FF4 jsr @Rn */
L_0C062FF8: BLKS(0x0C062FF8u);
	r4 = r11;  /* 0C062FF8 mov Rm,Rn */
	r5 = 0x15u;  /* 0C062FFA mov #imm,Rn */
	IF(0x0C062FFCu); { u32 t_ = r13; PR = 0x0C063000u; r6 = 0x7u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0624D0, 0x0C0624D0u, 0x0C063000u); }  /* 0C062FFC jsr @Rn */
L_0C063000: BLKS(0x0C063000u);
	r9 = 0xC172EE8u; UPD(0x0C063002u, 1);  /* 0C063000 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C063002 mov Rm,Rn */
	r5 = 0x16u;  /* 0C063004 mov #imm,Rn */
	IF(0x0C063006u); { u32 t_ = r13; PR = 0x0C06300Au; r6 = 0x7u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0624D0, 0x0C0624D0u, 0x0C06300Au); }  /* 0C063006 jsr @Rn */
L_0C06300A: BLKS(0x0C06300Au);
	r4 = r11;  /* 0C06300A mov Rm,Rn */
	r5 = 0x17u;  /* 0C06300C mov #imm,Rn */
	IF(0x0C06300Eu); { u32 t_ = r13; PR = 0x0C063012u; r6 = 0x7u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0624D0, 0x0C0624D0u, 0x0C063012u); }  /* 0C06300E jsr @Rn */
L_0C063012: BLKS(0x0C063012u);
	r4 = r9;  /* 0C063012 mov Rm,Rn */
	r5 = 0x18u;  /* 0C063014 mov #imm,Rn */
	IF(0x0C063016u); { u32 t_ = r13; PR = 0x0C06301Au; r6 = 0x7u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0624D0, 0x0C0624D0u, 0x0C06301Au); }  /* 0C063016 jsr @Rn */
L_0C06301A: BLKS(0x0C06301Au);
	r4 = r9;  /* 0C06301A mov Rm,Rn */
	r5 = 0x19u;  /* 0C06301C mov #imm,Rn */
	IF(0x0C06301Eu); { u32 t_ = r13; PR = 0x0C063022u; r6 = 0x7u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0624D0, 0x0C0624D0u, 0x0C063022u); }  /* 0C06301E jsr @Rn */
L_0C063022: BLKS(0x0C063022u);
	r4 = r9;  /* 0C063022 mov Rm,Rn */
	r5 = 0x1Au;  /* 0C063024 mov #imm,Rn */
	r11 = 0xC0626E0u; UPD(0x0C063028u, 3);  /* 0C063026 mov.l @(disp,pc),Rn */
	IF(0x0C063028u); { u32 t_ = r13; PR = 0x0C06302Cu; r6 = 0x7u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0624D0, 0x0C0624D0u, 0x0C06302Cu); }  /* 0C063028 jsr @Rn */
L_0C06302C: BLKS(0x0C06302Cu);
	r4 = r9;  /* 0C06302C mov Rm,Rn */
	r5 = 0x1Bu;  /* 0C06302E mov #imm,Rn */
	r8 = 0xC0626E0u; UPD(0x0C063032u, 3);  /* 0C063030 mov.l @(disp,pc),Rn */
	IF(0x0C063032u); { u32 t_ = r13; PR = 0x0C063036u; r6 = 0x7u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0624D0, 0x0C0624D0u, 0x0C063036u); }  /* 0C063032 jsr @Rn */
L_0C063036: BLKS(0x0C063036u);
	r4 = 0xC172F30u; UPD(0x0C063038u, 1);  /* 0C063036 mov.l @(disp,pc),Rn */
	r5 = 0x23u;  /* 0C063038 mov #imm,Rn */
	r7 = 0x80808000u; UPD(0x0C06303Cu, 2);  /* 0C06303A mov.l @(disp,pc),Rn */
	IF(0x0C06303Cu); { u32 t_ = r11; PR = 0x0C063040u; r6 = 0x6u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C063040u); }  /* 0C06303C jsr @Rn */
L_0C063040: BLKS(0x0C063040u);
	r4 = 0xC172F3Cu; UPD(0x0C063042u, 1);  /* 0C063040 mov.l @(disp,pc),Rn */
	r5 = 0x22u;  /* 0C063042 mov #imm,Rn */
	r7 = 0x80808000u; UPD(0x0C063046u, 2);  /* 0C063044 mov.l @(disp,pc),Rn */
	IF(0x0C063046u); { u32 t_ = r8; PR = 0x0C06304Au; r6 = 0x6u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C06304Au); }  /* 0C063046 jsr @Rn */
L_0C06304A: BLKS(0x0C06304Au);
	r3 = 0xC0626E0u; UPD(0x0C06304Cu, 1);  /* 0C06304A mov.l @(disp,pc),Rn */
	r5 = 0x21u;  /* 0C06304C mov #imm,Rn */
	r4 = 0xC172F48u; UPD(0x0C063050u, 2);  /* 0C06304E mov.l @(disp,pc),Rn */
	r7 = 0x80808000u; UPD(0x0C063052u, 1);  /* 0C063050 mov.l @(disp,pc),Rn */
	IF(0x0C063052u); { u32 t_ = r3; PR = 0x0C063056u; r6 = 0x6u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C063056u); }  /* 0C063052 jsr @Rn */
L_0C063056: BLKS(0x0C063056u);
	r2 = 0xC0626E0u; UPD(0x0C063058u, 1);  /* 0C063056 mov.l @(disp,pc),Rn */
	r5 = 0x20u;  /* 0C063058 mov #imm,Rn */
	r4 = 0xC172F54u; UPD(0x0C06305Cu, 2);  /* 0C06305A mov.l @(disp,pc),Rn */
	r7 = 0x80808000u; UPD(0x0C06305Eu, 1);  /* 0C06305C mov.l @(disp,pc),Rn */
	IF(0x0C06305Eu); { u32 t_ = r2; PR = 0x0C063062u; r6 = 0x6u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C063062u); }  /* 0C06305E jsr @Rn */
L_0C063062: BLKS(0x0C063062u);
	r9 = 0xC0626E0u; UPD(0x0C063064u, 1);  /* 0C063062 mov.l @(disp,pc),Rn */
	r5 = 0x1Fu;  /* 0C063064 mov #imm,Rn */
	r4 = 0xC172B40u; UPD(0x0C063068u, 2);  /* 0C063066 mov.l @(disp,pc),Rn */
	r7 = 0x80808000u; UPD(0x0C06306Au, 1);  /* 0C063068 mov.l @(disp,pc),Rn */
	IF(0x0C06306Au); { u32 t_ = r9; PR = 0x0C06306Eu; r6 = 0x6u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C06306Eu); }  /* 0C06306A jsr @Rn */
L_0C06306E: BLKS(0x0C06306Eu);
	r11 = 0xC0626E0u; UPD(0x0C063070u, 1);  /* 0C06306E mov.l @(disp,pc),Rn */
	r5 = 0x1Eu;  /* 0C063070 mov #imm,Rn */
	r8 = 0xC0626E0u; UPD(0x0C063074u, 2);  /* 0C063072 mov.l @(disp,pc),Rn */
	r4 = 0xC172B58u; UPD(0x0C063076u, 1);  /* 0C063074 mov.l @(disp,pc),Rn */
	r7 = 0x80808000u; UPD(0x0C063078u, 1);  /* 0C063076 mov.l @(disp,pc),Rn */
	IF(0x0C063078u); { u32 t_ = r11; PR = 0x0C06307Cu; r6 = 0x6u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C06307Cu); }  /* 0C063078 jsr @Rn */
L_0C06307C: BLKS(0x0C06307Cu);
	r7 = 0x80808000u; UPD(0x0C06307Eu, 1);  /* 0C06307C mov.l @(disp,pc),Rn */
	r5 = 0x1Du;  /* 0C06307E mov #imm,Rn */
	r4 = 0xC172BC0u; UPD(0x0C063082u, 2);  /* 0C063080 mov.l @(disp,pc),Rn */
	IF(0x0C063082u); { u32 t_ = r8; PR = 0x0C063086u; r6 = 0x6u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C063086u); }  /* 0C063082 jsr @Rn */
L_0C063086: BLKS(0x0C063086u);
	r5 = 0xC2380C8u; UPD(0x0C063088u, 1);  /* 0C063086 mov.l @(disp,pc),Rn */
	r6 = 0x12u;  /* 0C063088 mov #imm,Rn */
	r9 = 0xC062490u; UPD(0x0C06308Cu, 2);  /* 0C06308A mov.l @(disp,pc),Rn */
	r4 = R32(r5); UPD(0x0C06308Eu, 1);  /* 0C06308C mov.l @Rm,Rn */
	IF(0x0C06308Eu); { u32 t_ = r9; PR = 0x0C063092u; r5 = 0x23u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062490, 0x0C062490u, 0x0C063092u); }  /* 0C06308E jsr @Rn */
L_0C063092: BLKS(0x0C063092u);
	r3 = 0xC2289E4u; UPD(0x0C063094u, 1);  /* 0C063092 mov.l @(disp,pc),Rn */
	r5 = 0x22u;  /* 0C063094 mov #imm,Rn */
	r4 = R32(r3); UPD(0x0C063098u, 2);  /* 0C063096 mov.l @Rm,Rn */
	IF(0x0C063098u); { u32 t_ = r9; PR = 0x0C06309Cu; r6 = 0x12u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062490, 0x0C062490u, 0x0C06309Cu); }  /* 0C063098 jsr @Rn */
L_0C06309C: BLKS(0x0C06309Cu);
	r2 = 0xC233720u; UPD(0x0C06309Eu, 1);  /* 0C06309C mov.l @(disp,pc),Rn */
	r5 = 0x21u;  /* 0C06309E mov #imm,Rn */
	r4 = R32(r2); UPD(0x0C0630A2u, 2);  /* 0C0630A0 mov.l @Rm,Rn */
	IF(0x0C0630A2u); { u32 t_ = r9; PR = 0x0C0630A6u; r6 = 0x12u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062490, 0x0C062490u, 0x0C0630A6u); }  /* 0C0630A2 jsr @Rn */
L_0C0630A6: BLKS(0x0C0630A6u);
	r0 = 0xC286310u; UPD(0x0C0630A8u, 1);  /* 0C0630A6 mov.l @(disp,pc),Rn */
	r5 = 0x20u;  /* 0C0630A8 mov #imm,Rn */
	r4 = R32(r0); UPD(0x0C0630ACu, 2);  /* 0C0630AA mov.l @Rm,Rn */
	IF(0x0C0630ACu); { u32 t_ = r9; PR = 0x0C0630B0u; r6 = 0x12u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062490, 0x0C062490u, 0x0C0630B0u); }  /* 0C0630AC jsr @Rn */
L_0C0630B0: BLKS(0x0C0630B0u);
	r1 = 0xC297838u; UPD(0x0C0630B2u, 1);  /* 0C0630B0 mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s16)R16(r1); UPD(0x0C0630B4u, 1);  /* 0C0630B2 mov.w @Rm,Rn */
	r0 = r2;  /* 0C0630B4 mov Rm,Rn */
	r0 &= 0x1u;  /* 0C0630B6 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0630B8 tst Rm,Rn */
	{ u32 c_ = T; r0 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0630C6u, 6); goto L_0C0630C6; } goto L_0C0630BE; }  /* 0C0630BA bt/s */
L_0C0630BE: BLKS(0x0C0630BEu);
	r4 = 0xC172F80u; UPD(0x0C0630C0u, 2);  /* 0C0630BE mov.l @(disp,pc),Rn */
	r0 = r4;  /* 0C0630C0 mov Rm,Rn */
	IF(0x0C0630C2u); r10 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C0630C4u, 2);  /* 0C0630C2 mov.b @(r0,Rm),Rn */
	r0 = r2;  /* 0C0630C4 mov Rm,Rn */
	UPD(0x0C0630C6u, 1);
L_0C0630C6: BLKS(0x0C0630C6u);
	r0 &= 0x2u;  /* 0C0630C6 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0630C8 tst Rm,Rn */
	if (T) { UPD(0x0C0630D2u, 5); goto L_0C0630D2; }  /* 0C0630CA bt */
L_0C0630CC: BLKS(0x0C0630CCu);
	r6 = 0xC172F88u; UPD(0x0C0630CEu, 1);  /* 0C0630CC mov.l @(disp,pc),Rn */
	r0 = r6;  /* 0C0630CE mov Rm,Rn */
	IF(0x0C0630D0u); r10 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C0630D2u, 2);  /* 0C0630D0 mov.b @(r0,Rm),Rn */
L_0C0630D2: BLKS(0x0C0630D2u);
	r5 = 0xC172F90u; UPD(0x0C0630D4u, 1);  /* 0C0630D2 mov.l @(disp,pc),Rn */
	r6 = 0x5u;  /* 0C0630D4 mov #imm,Rn */
	r2 = 0xC0626E0u; UPD(0x0C0630D8u, 2);  /* 0C0630D6 mov.l @(disp,pc),Rn */
	r0 = r5;  /* 0C0630D8 mov Rm,Rn */
	r7 = 0x40C04000u; UPD(0x0C0630DCu, 2);  /* 0C0630DA mov.l @(disp,pc),Rn */
	r4 = 0xC172BC8u; UPD(0x0C0630DEu, 1);  /* 0C0630DC mov.l @(disp,pc),Rn */
	IF(0x0C0630DEu); { u32 t_ = r2; PR = 0x0C0630E2u; IF(0x0C0630E0u); r5 = (u32)(s32)(s8)R8(r0 + r10); /* slot mov.b @(r0,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C0630E2u); }  /* 0C0630DE jsr @Rn */
L_0C0630E2: BLKS(0x0C0630E2u);
	r7 = 0xC297838u; UPD(0x0C0630E4u, 1);  /* 0C0630E2 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s16)R16(r7); UPD(0x0C0630E6u, 1);  /* 0C0630E4 mov.w @Rm,Rn */
	r0 &= 0x8u;  /* 0C0630E6 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0630E8 tst Rm,Rn */
	{ u32 c_ = T; r0 = r10; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C063104u, 5); goto L_0C063104; } goto L_0C0630EE; }  /* 0C0630EA bt/s */
L_0C0630EE: BLKS(0x0C0630EEu);
	r11 = 0xC172F64u; UPD(0x0C0630F0u, 2);  /* 0C0630EE mov.l @(disp,pc),Rn */
	IF(0x0C0630F0u); r0 <<= 2;  /* 0C0630F0 shll2 Rn */
	IF(0x0C0630F2u); r5 = R32(r0 + r11); UPD(0x0C0630F4u, 2);  /* 0C0630F2 mov.l @(r0,Rm),Rn */
	r9 = 0xC172F5Cu; UPD(0x0C0630F6u, 1);  /* 0C0630F4 mov.l @(disp,pc),Rn */
	r0 = r9;  /* 0C0630F6 mov Rm,Rn */
	IF(0x0C0630F8u); r3 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C0630FAu, 2);  /* 0C0630F8 mov.b @(r0,Rm),Rn */
	r2 = R32(r5); UPD(0x0C0630FCu, 1);  /* 0C0630FA mov.l @Rm,Rn */
	T = r2 == r3;  /* 0C0630FC cmp/eq Rm,Rn */
	{ u32 c_ = T; r2 += 0x1u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C063104u, 4); goto L_0C063104; } goto L_0C063102; }  /* 0C0630FE bt/s */
L_0C063102: BLKS(0x0C063102u);
	W32(r5, r2); UPD(0x0C063104u, 2);  /* 0C063102 mov.l Rm,@Rn */
L_0C063104: BLKS(0x0C063104u);
	r8 = 0xC297638u; UPD(0x0C063106u, 1);  /* 0C063104 mov.l @(disp,pc),Rn */
	r0 = 0x200u; UPD(0x0C063108u, 1);  /* 0C063106 mov.w @(disp,pc),Rn */
	IF(0x0C063108u); r0 = (u32)(s32)(s16)R16(r0 + r8); UPD(0x0C06310Au, 1);  /* 0C063108 mov.w @(r0,Rm),Rn */
	r0 &= 0x4u;  /* 0C06310A and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C06310C tst Rm,Rn */
	{ u32 c_ = T; r0 = r10; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C063128u, 5); goto L_0C063128; } goto L_0C063112; }  /* 0C06310E bt/s */
L_0C063112: BLKS(0x0C063112u);
	r7 = 0xC172F64u; UPD(0x0C063114u, 2);  /* 0C063112 mov.l @(disp,pc),Rn */
	IF(0x0C063114u); r0 <<= 2;  /* 0C063114 shll2 Rn */
	IF(0x0C063116u); r5 = R32(r0 + r7); UPD(0x0C063118u, 2);  /* 0C063116 mov.l @(r0,Rm),Rn */
	r6 = 0xC172F60u; UPD(0x0C06311Au, 1);  /* 0C063118 mov.l @(disp,pc),Rn */
	r0 = r6;  /* 0C06311A mov Rm,Rn */
	IF(0x0C06311Cu); r4 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C06311Eu, 2);  /* 0C06311C mov.b @(r0,Rm),Rn */
	r2 = R32(r5); UPD(0x0C063120u, 1);  /* 0C06311E mov.l @Rm,Rn */
	T = r2 == r4;  /* 0C063120 cmp/eq Rm,Rn */
	{ u32 c_ = T; r2 += 0xFFFFFFFFu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C063128u, 4); goto L_0C063128; } goto L_0C063126; }  /* 0C063122 bt/s */
L_0C063126: BLKS(0x0C063126u);
	W32(r5, r2); UPD(0x0C063128u, 2);  /* 0C063126 mov.l Rm,@Rn */
L_0C063128: BLKS(0x0C063128u);
	r2 = 0xC233720u; UPD(0x0C06312Au, 1);  /* 0C063128 mov.l @(disp,pc),Rn */
	r11 = (u32)(s32)(s8)r10;  /* 0C06312A exts.b Rm,Rn */
	r3 = R32(r2); UPD(0x0C06312Eu, 2);  /* 0C06312C mov.l @Rm,Rn */
	r5 = 0xC239468u; UPD(0x0C063130u, 1);  /* 0C06312E mov.l @(disp,pc),Rn */
	W32(r5, r3); UPD(0x0C063132u, 1);  /* 0C063130 mov.l Rm,@Rn */
	r5 = r12;  /* 0C063132 mov Rm,Rn */
	r12 = 0xC0663E0u; UPD(0x0C063136u, 2);  /* 0C063134 mov.l @(disp,pc),Rn */
	r8 = 0xC066910u; UPD(0x0C063138u, 1);  /* 0C063136 mov.l @(disp,pc),Rn */
	IF(0x0C063138u); { u32 t_ = r12; PR = 0x0C06313Cu; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0663E0, 0x0C0663E0u, 0x0C06313Cu); }  /* 0C063138 jsr @Rn */
L_0C06313C: BLKS(0x0C06313Cu);
	r9 = 0xC066DD0u; UPD(0x0C06313Eu, 1);  /* 0C06313C mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C06313E mov Rm,Rn */
	r5 = R32(r14); UPD(0x0C063142u, 2);  /* 0C063140 mov.l @Rm,Rn */
	IF(0x0C063142u); { u32 t_ = r8; PR = 0x0C063146u; r12 = r0; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C066910, 0x0C066910u, 0x0C063146u); }  /* 0C063142 jsr @Rn */
L_0C063146: BLKS(0x0C063146u);
	r4 = r11;  /* 0C063146 mov Rm,Rn */
	r5 = R32(r14 + 0x4u); UPD(0x0C06314Au, 2);  /* 0C063148 mov.l @(disp,Rm),Rn */
	r8 = 0x0u;  /* 0C06314A mov #imm,Rn */
	IF(0x0C06314Cu); { u32 t_ = r9; PR = 0x0C063150u; W32(r14, r0); /* slot mov.l Rm,@Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C066DD0, 0x0C066DD0u, 0x0C063150u); }  /* 0C06314C jsr @Rn */
L_0C063150: BLKS(0x0C063150u);
	W32(r14 + 0x4u, r0); UPD(0x0C063152u, 1);  /* 0C063150 mov.l Rm,@(disp,Rn) */
	r11 = 0x0u;  /* 0C063152 mov #imm,Rn */
	r0 = 0xC3C415Cu; UPD(0x0C063156u, 2);  /* 0C063154 mov.l @(disp,pc),Rn */
	r5 = R32(r0); UPD(0x0C063158u, 1);  /* 0C063156 mov.l @Rm,Rn */
L_0C063158: BLKS(0x0C063158u);
	r4 = r8;  /* 0C063158 mov Rm,Rn */
	r4 += 0xFFFFFFF2u;  /* 0C06315A add #imm,Rn */
	r8 += 0xFFFFFFFEu;  /* 0C06315C add #imm,Rn */
	W32(r14 + 0x8u, r4); UPD(0x0C063160u, 4);  /* 0C06315E mov.l Rm,@(disp,Rn) */
	r9 = r8 & 0xFF;  /* 0C063160 extu.b Rm,Rn */
	r6 = 0x0u;  /* 0C063162 mov #imm,Rn */
	r8 += 0x2u;  /* 0C063164 add #imm,Rn */
	r4 = 0x0u;  /* 0C063166 mov #imm,Rn */
	UPD(0x0C063168u, 4);
L_0C063168: BLKS(0x0C063168u);
	r0 = 0xBu;  /* 0C063168 mov #imm,Rn */
	IF(0x0C06316Au); r1 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C06316Cu, 2);  /* 0C06316A mov.b @(r0,Rm),Rn */
	r2 = 0x3u;  /* 0C06316C mov #imm,Rn */
	r7 = r1 & 0xFF;  /* 0C06316E extu.b Rm,Rn */
	T = r2 >= r7;  /* 0C063170 cmp/hs Rm,Rn */
	r6 += 0xFFFFFFFEu;  /* 0C063172 add #imm,Rn */
	IF(0x0C063174u); r7 = T;  /* 0C063174 movt Rn */
	r0 = r6 & 0xFF;  /* 0C063176 extu.b Rm,Rn */
	r3 = 0xAu;  /* 0C063178 mov #imm,Rn */
	T = r3 >= r0;  /* 0C06317A cmp/hs Rm,Rn */
	IF(0x0C06317Cu); r3 = T;  /* 0C06317C movt Rn */
	r7 &= r3;  /* 0C06317E and Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C063180 tst Rm,Rn */
	{ u32 c_ = !T; r6 += 0x2u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0631F0u, 14); goto L_0C0631F0; } goto L_0C063186; }  /* 0C063182 bf/s */
L_0C063186: BLKS(0x0C063186u);
	r0 = 0x1u;  /* 0C063186 mov #imm,Rn */
	T = r0 >= r9;  /* 0C063188 cmp/hs Rm,Rn */
	IF(0x0C06318Au); r7 = T;  /* 0C06318A movt Rn */
	r0 = r10;  /* 0C06318C mov Rm,Rn */
	T = r0 == 0x4u;  /* 0C06318E cmp/eq #imm,r0 */
	r7 &= r3;  /* 0C063190 and Rm,Rn */
	IF(0x0C063192u); r2 = T;  /* 0C063192 movt Rn */
	T = (r12 & r12) == 0;  /* 0C063194 tst Rm,Rn */
	r3 = 0xFFFFFFFFu;  /* 0C063196 mov #imm,Rn */
	{ u32 t_ = 0u - r3, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r1 = r_; }  /* 0C063198 negc Rm,Rn */
	r1 &= r2;  /* 0C06319A and Rm,Rn */
	T = (r7 & r1) == 0;  /* 0C06319C tst Rm,Rn */
	{ u32 c_ = !T; T = r0 == 0x5u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C0631F0u, 16); goto L_0C0631F0; } goto L_0C0631A2; }  /* 0C06319E bf/s */
L_0C0631A2: BLKS(0x0C0631A2u);
	r1 = R32(r14); UPD(0x0C0631A4u, 2);  /* 0C0631A2 mov.l @Rm,Rn */
	IF(0x0C0631A4u); r2 = T;  /* 0C0631A4 movt Rn */
	T = (r1 & r1) == 0;  /* 0C0631A6 tst Rm,Rn */
	{ u32 t_ = 0u - r3, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r1 = r_; }  /* 0C0631A8 negc Rm,Rn */
	r1 &= r2;  /* 0C0631AA and Rm,Rn */
	T = (r7 & r1) == 0;  /* 0C0631AC tst Rm,Rn */
	{ u32 c_ = !T; r3 = r6; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0631F2u, 8); goto L_0C0631F2; } goto L_0C0631B2; }  /* 0C0631AE bf/s */
L_0C0631B2: BLKS(0x0C0631B2u);
	T = r0 == 0x6u;  /* 0C0631B2 cmp/eq #imm,r0 */
	IF(0x0C0631B4u); r3 = T;  /* 0C0631B4 movt Rn */
	T = (r7 & r3) == 0;  /* 0C0631B6 tst Rm,Rn */
	{ u32 c_ = !T; r3 = r6; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0631F2u, 7); goto L_0C0631F2; } goto L_0C0631BC; }  /* 0C0631B8 bf/s */
L_0C0631BC: BLKS(0x0C0631BCu);
	r2 = 0x10000000u; UPD(0x0C0631BEu, 2);  /* 0C0631BC mov.l @(disp,pc),Rn */
	r7 = 0xC29D088u; UPD(0x0C0631C0u, 1);  /* 0C0631BE mov.l @(disp,pc),Rn */
	W32(r5, r2); UPD(0x0C0631C2u, 1);  /* 0C0631C0 mov.l Rm,@Rn */
	r3 = 0x400000u; UPD(0x0C0631C4u, 1);  /* 0C0631C2 mov.l @(disp,pc),Rn */
	r5 += 0x4u;  /* 0C0631C4 add #imm,Rn */
	r0 = R32(r7); UPD(0x0C0631C8u, 2);  /* 0C0631C6 mov.l @Rm,Rn */
	r0 += r3;  /* 0C0631C8 add Rm,Rn */
	W32(r5, r0); UPD(0x0C0631CCu, 2);  /* 0C0631CA mov.l Rm,@Rn */
	r2 = 0xC232314u; UPD(0x0C0631CEu, 1);  /* 0C0631CC mov.l @(disp,pc),Rn */
	r5 += 0x4u;  /* 0C0631CE add #imm,Rn */
	r7 = 0xC29D72Cu; UPD(0x0C0631D2u, 2);  /* 0C0631D0 mov.l @(disp,pc),Rn */
	r0 = R32(r2); UPD(0x0C0631D4u, 1);  /* 0C0631D2 mov.l @Rm,Rn */
	r3 = R32(r7); UPD(0x0C0631D6u, 1);  /* 0C0631D4 mov.l @Rm,Rn */
	r0 += r11;  /* 0C0631D6 add Rm,Rn */
	IF(0x0C0631D8u); r0 <<= 16;  /* 0C0631D8 shll16 Rn */
	r3 += r4;  /* 0C0631DA add Rm,Rn */
	r0 |= r3;  /* 0C0631DC or Rm,Rn */
	W32(r5, r0); UPD(0x0C0631E0u, 5);  /* 0C0631DE mov.l Rm,@Rn */
	r2 = 0xF000Fu; UPD(0x0C0631E2u, 1);  /* 0C0631E0 mov.l @(disp,pc),Rn */
	r5 += 0x4u;  /* 0C0631E2 add #imm,Rn */
	W32(r5, r2); UPD(0x0C0631E6u, 2);  /* 0C0631E4 mov.l Rm,@Rn */
	r7 = 0x808080u; UPD(0x0C0631E8u, 1);  /* 0C0631E6 mov.l @(disp,pc),Rn */
	r5 += 0x4u;  /* 0C0631E8 add #imm,Rn */
	W32(r5, r7); UPD(0x0C0631ECu, 2);  /* 0C0631EA mov.l Rm,@Rn */
	r5 += 0x4u;  /* 0C0631EC add #imm,Rn */
	IF(0x0C0631EEu); ;  /* 0C0631EE nop */
	UPD(0x0C0631F0u, 2);
L_0C0631F0: BLKS(0x0C0631F0u);
	r3 = r6;  /* 0C0631F0 mov Rm,Rn */
	UPD(0x0C0631F2u, 1);
L_0C0631F2: BLKS(0x0C0631F2u);
	r3 += 0x1u;  /* 0C0631F2 add #imm,Rn */
	r6 = (u32)(s32)(s8)r3;  /* 0C0631F4 exts.b Rm,Rn */
	r0 = 0xEu;  /* 0C0631F6 mov #imm,Rn */
	T = (s32)r6 > (s32)r0;  /* 0C0631F8 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r4 += 0x10u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C063168u, 7); goto L_0C063168; } goto L_0C0631FE; }  /* 0C0631FA bf/s */
L_0C0631FE: BLKS(0x0C0631FEu);
	r9 = r8;  /* 0C0631FE mov Rm,Rn */
	r9 += 0x1u;  /* 0C063200 add #imm,Rn */
	r8 = (u32)(s32)(s8)r9;  /* 0C063202 exts.b Rm,Rn */
	r6 = 0x13u;  /* 0C063204 mov #imm,Rn */
	T = (s32)r8 > (s32)r6;  /* 0C063206 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r11 += 0x10u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C063158u, 9); goto L_0C063158; } goto L_0C06320C; }  /* 0C063208 bf/s */
L_0C06320C: BLKS(0x0C06320Cu);
	r4 = 0xC3C415Cu; UPD(0x0C06320Eu, 2);  /* 0C06320C mov.l @(disp,pc),Rn */
	r11 = 0xC061010u; UPD(0x0C063210u, 1);  /* 0C06320E mov.l @(disp,pc),Rn */
	W32(r4, r5); UPD(0x0C063212u, 1);  /* 0C063210 mov.l Rm,@Rn */
	r9 = 0xC062250u; UPD(0x0C063214u, 1);  /* 0C063212 mov.l @(disp,pc),Rn */
	r5 = 0x7u;  /* 0C063214 mov #imm,Rn */
	IF(0x0C063216u); { u32 t_ = r11; PR = 0x0C06321Au; r4 = 0x7u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C061010, 0x0C061010u, 0x0C06321Au); }  /* 0C063216 jsr @Rn */
L_0C06321A: BLKS(0x0C06321Au);
	IF(0x0C06321Au); { u32 t_ = r9; PR = 0x0C06321Eu; IF(0x0C06321Cu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C062250, 0x0C062250u, 0x0C06321Eu); }  /* 0C06321A jsr @Rn */
L_0C06321E: BLKS(0x0C06321Eu);
	r0 = r10;  /* 0C06321E mov Rm,Rn */
	T = r0 == 0x6u;  /* 0C063220 cmp/eq #imm,r0 */
	r5 = 0xFFFFFFFFu;  /* 0C063222 mov #imm,Rn */
	r0 = R32(r14 + 0x4u); UPD(0x0C063226u, 4);  /* 0C063224 mov.l @(disp,Rm),Rn */
	{ u32 t_ = 0u - r5, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r11 = r_; }  /* 0C063226 negc Rm,Rn */
	T = r0 == 0x3u;  /* 0C063228 cmp/eq #imm,r0 */
	{ u32 t_ = 0u - r5, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r8 = r_; }  /* 0C06322A negc Rm,Rn */
	r11 |= r8;  /* 0C06322C or Rm,Rn */
	T = (r11 & r11) == 0;  /* 0C06322E tst Rm,Rn */
	if (T) { UPD(0x0C063236u, 8); goto L_0C063236; }  /* 0C063230 bt */
L_0C063232: BLKS(0x0C063232u);
	{ IF(0x0C063234u); ; /* slot nop */ UPD(0x0C062F92u, 3); goto L_0C062F92; }  /* 0C063232 bra */
L_0C063236: BLKS(0x0C063236u);
	r14 += 0xCu;  /* 0C063236 add #imm,Rn */
	r15 = r14;  /* 0C063238 mov Rm,Rn */
	IF(0x0C06323Au); PR = R32(r15); r15 += 4; UPD(0x0C06323Cu, 3);  /* 0C06323A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06323Eu, 1);  /* 0C06323C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C063240u, 1);  /* 0C06323E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C063242u, 1);  /* 0C063240 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C063244u, 1);  /* 0C063242 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C063246u, 1);  /* 0C063244 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C063248u, 1);  /* 0C063246 mov.l @Rm+,Rn */
	IF(0x0C063248u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C063248 rts */
}

void blk_f_0C063310(sh3_t *c)
{
	LOCALS;
	SPIN_VARS(0C063380);
L_0C063310: BLKS(0x0C063310u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C063312u, 1);  /* 0C063310 mov.l Rm,@-Rn */
	r3 = 0x0u;  /* 0C063312 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C063316u, 2);  /* 0C063314 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C063318u, 1);  /* 0C063316 mov.l Rm,@-Rn */
	r9 = 0x0u;  /* 0C063318 mov #imm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06331Cu, 2);  /* 0C06331A mov.l Rm,@-Rn */
	r10 = 0x0u;  /* 0C06331C mov #imm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C063320u, 2);  /* 0C06331E mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C063322u, 1);  /* 0C063320 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C063324u, 1);  /* 0C063322 mov.l Rm,@-Rn */
	r0 = 0xC29D728u; UPD(0x0C063326u, 1);  /* 0C063324 mov.l @(disp,pc),Rn */
	IF(0x0C063326u); r15 -= 4; W32(r15, PR); UPD(0x0C063328u, 1);  /* 0C063326 sts.l pr,@-Rn */
	W32(r0, r3); UPD(0x0C06332Au, 1);  /* 0C063328 mov.l Rm,@Rn */
	r14 = r15;  /* 0C06332A mov Rm,Rn */
	r0 = 0xC3C4048u; UPD(0x0C06332Eu, 2);  /* 0C06332C mov.l @(disp,pc),Rn */
	r8 = 0xC29D1D8u; UPD(0x0C063330u, 1);  /* 0C06332E mov.l @(disp,pc),Rn */
	W32(r0, r3); UPD(0x0C063332u, 1);  /* 0C063330 mov.l Rm,@Rn */
	IF(0x0C063332u); ;  /* 0C063332 nop */
	UPD(0x0C063334u, 1);
L_0C063334: BLKS(0x0C063334u);
	r0 = 0xC0000000u; UPD(0x0C063336u, 1);  /* 0C063334 mov.l @(disp,pc),Rn */
	r11 = r10;  /* 0C063336 mov Rm,Rn */
	W32(r8, r0); UPD(0x0C06333Au, 2);  /* 0C063338 mov.l Rm,@Rn */
	IF(0x0C06333Au); r11 <<= 2;  /* 0C06333A shll2 Rn */
	r5 = 0xC172FA8u; UPD(0x0C06333Eu, 2);  /* 0C06333C mov.l @(disp,pc),Rn */
	r0 = r11;  /* 0C06333E mov Rm,Rn */
	IF(0x0C063340u); r4 = R32(r0 + r5); UPD(0x0C063342u, 2);  /* 0C063340 mov.l @(r0,Rm),Rn */
	r2 = 0xC172F98u; UPD(0x0C063344u, 1);  /* 0C063342 mov.l @(disp,pc),Rn */
	W32(r8 + 0x4u, r4); UPD(0x0C063346u, 1);  /* 0C063344 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0xCu, r9); UPD(0x0C063348u, 1);  /* 0C063346 mov.l Rm,@(disp,Rn) */
	r4 = (u32)(s32)(s16)r10;  /* 0C063348 exts.w Rm,Rn */
	W32(r8 + 0x8u, r9); UPD(0x0C06334Cu, 2);  /* 0C06334A mov.l Rm,@(disp,Rn) */
	r10 += 0x1u;  /* 0C06334C add #imm,Rn */
	IF(0x0C06334Eu); r3 = R32(r0 + r2); UPD(0x0C063350u, 2);  /* 0C06334E mov.l @(r0,Rm),Rn */
	r12 = 0x808080u; UPD(0x0C063352u, 1);  /* 0C063350 mov.l @(disp,pc),Rn */
	r0 = 0x29Cu; UPD(0x0C063354u, 1);  /* 0C063352 mov.w @(disp,pc),Rn */
	r13 = 0x980000u; UPD(0x0C063356u, 1);  /* 0C063354 mov.l @(disp,pc),Rn */
	IF(0x0C063356u); W32(r0 + r8, r12); UPD(0x0C063358u, 1);  /* 0C063356 mov.l Rm,@(r0,Rn) */
	W32(r8 + 0x10u, r3); UPD(0x0C06335Au, 1);  /* 0C063358 mov.l Rm,@(disp,Rn) */
	r0 = r11;  /* 0C06335A mov Rm,Rn */
	W32(r8 + 0x14u, r13); UPD(0x0C06335Eu, 2);  /* 0C06335C mov.l Rm,@(disp,Rn) */
	r7 = 0xC172FA0u; UPD(0x0C063360u, 1);  /* 0C06335E mov.l @(disp,pc),Rn */
	IF(0x0C063360u); r6 = R32(r0 + r7); UPD(0x0C063362u, 1);  /* 0C063360 mov.l @(r0,Rm),Rn */
	r0 = 0x224u; UPD(0x0C063364u, 1);  /* 0C063362 mov.w @(disp,pc),Rn */
	r5 = 0xC064550u; UPD(0x0C063366u, 1);  /* 0C063364 mov.l @(disp,pc),Rn */
	IF(0x0C063366u); W32(r0 + r8, r6); UPD(0x0C063368u, 1);  /* 0C063366 mov.l Rm,@(r0,Rn) */
	r0 += 0x63u;  /* 0C063368 add #imm,Rn */
	IF(0x0C06336Au); { u32 t_ = r5; PR = 0x0C06336Eu; IF(0x0C06336Cu); W8(r0 + r8, r9); /* slot mov.b Rm,@(r0,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C064550, 0x0C064550u, 0x0C06336Eu); }  /* 0C06336A jsr @Rn */
L_0C06336E: BLKS(0x0C06336Eu);
	r4 = 0x2A0u; UPD(0x0C063370u, 1);  /* 0C06336E mov.w @(disp,pc),Rn */
	r2 = 0x1u;  /* 0C063370 mov #imm,Rn */
	T = (s32)r10 > (s32)r2;  /* 0C063372 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r8 += r4; /* slot add Rm,Rn */ if (c_) { UPD(0x0C063334u, 5); goto L_0C063334; } goto L_0C063378; }  /* 0C063374 bf/s */
L_0C063378: BLKS(0x0C063378u);
	r10 = 0xC2B03A6u; UPD(0x0C06337Au, 2);  /* 0C063378 mov.l @(disp,pc),Rn */
	r8 = 0x100u; UPD(0x0C06337Cu, 1);  /* 0C06337A mov.w @(disp,pc),Rn */
	r9 = (u32)(s32)(s16)R16(r10); UPD(0x0C06337Eu, 1);  /* 0C06337C mov.w @Rm,Rn */
	T = (r9 & r8) == 0;  /* 0C06337E tst Rm,Rn */
	UPD(0x0C063380u, 1);
L_0C063380: BLKS(0x0C063380u);
	SPIN_SAVE(0C063380);
	if (!T) { SPIN_FFD(0C063380, 3); UPD(0x0C063380u, 3); goto L_0C063380; }  /* 0C063380 bf */
L_0C063382: BLKS(0x0C063382u);
	r13 = 0x80808000u; UPD(0x0C063384u, 1);  /* 0C063382 mov.l @(disp,pc),Rn */
	r12 = 0xC3C869Cu; UPD(0x0C063386u, 1);  /* 0C063384 mov.l @(disp,pc),Rn */
	IF(0x0C063386u); ;  /* 0C063386 nop */
	UPD(0x0C063388u, 1);
L_0C063388: BLKS(0x0C063388u);
	r11 = 0xC060BC0u; UPD(0x0C06338Au, 1);  /* 0C063388 mov.l @(disp,pc),Rn */
	r10 = 0xC061200u; UPD(0x0C06338Cu, 1);  /* 0C06338A mov.l @(disp,pc),Rn */
	IF(0x0C06338Cu); { u32 t_ = r11; PR = 0x0C063390u; IF(0x0C06338Eu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C060BC0, 0x0C060BC0u, 0x0C063390u); }  /* 0C06338C jsr @Rn */
L_0C063390: BLKS(0x0C063390u);
	r9 = 0xC062060u; UPD(0x0C063392u, 1);  /* 0C063390 mov.l @(disp,pc),Rn */
	IF(0x0C063392u); { u32 t_ = r10; PR = 0x0C063396u; IF(0x0C063394u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C061200, 0x0C061200u, 0x0C063396u); }  /* 0C063392 jsr @Rn */
L_0C063396: BLKS(0x0C063396u);
	r8 = 0xC062000u; UPD(0x0C063398u, 1);  /* 0C063396 mov.l @(disp,pc),Rn */
	IF(0x0C063398u); { u32 t_ = r9; PR = 0x0C06339Cu; r4 = 0x40u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062060, 0x0C062060u, 0x0C06339Cu); }  /* 0C063398 jsr @Rn */
L_0C06339C: BLKS(0x0C06339Cu);
	IF(0x0C06339Cu); { u32 t_ = r8; PR = 0x0C0633A0u; r10 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062000, 0x0C062000u, 0x0C0633A0u); }  /* 0C06339C jsr @Rn */
L_0C0633A0: BLKS(0x0C0633A0u);
	r3 = 0xC0626E0u; UPD(0x0C0633A2u, 1);  /* 0C0633A0 mov.l @(disp,pc),Rn */
	r5 = 0x26u;  /* 0C0633A2 mov #imm,Rn */
	r11 = 0xC0626E0u; UPD(0x0C0633A6u, 2);  /* 0C0633A4 mov.l @(disp,pc),Rn */
	r6 = 0xBu;  /* 0C0633A6 mov #imm,Rn */
	r4 = 0xC172A48u; UPD(0x0C0633AAu, 2);  /* 0C0633A8 mov.l @(disp,pc),Rn */
	IF(0x0C0633AAu); { u32 t_ = r3; PR = 0x0C0633AEu; r7 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C0633AEu); }  /* 0C0633AA jsr @Rn */
L_0C0633AE: BLKS(0x0C0633AEu);
	r4 = 0xC172B0Cu; UPD(0x0C0633B0u, 1);  /* 0C0633AE mov.l @(disp,pc),Rn */
	r5 = 0x2u;  /* 0C0633B0 mov #imm,Rn */
	r6 = 0x3u;  /* 0C0633B2 mov #imm,Rn */
	IF(0x0C0633B4u); { u32 t_ = r11; PR = 0x0C0633B8u; r7 = r13; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C0633B8u); }  /* 0C0633B4 jsr @Rn */
L_0C0633B8: BLKS(0x0C0633B8u);
	r1 = 0xC0626E0u; UPD(0x0C0633BAu, 1);  /* 0C0633B8 mov.l @(disp,pc),Rn */
	r5 = 0x1u;  /* 0C0633BA mov #imm,Rn */
	r4 = 0xC172B28u; UPD(0x0C0633BEu, 2);  /* 0C0633BC mov.l @(disp,pc),Rn */
	r6 = 0x5u;  /* 0C0633BE mov #imm,Rn */
	IF(0x0C0633C0u); { u32 t_ = r1; PR = 0x0C0633C4u; r7 = r13; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C0633C4u); }  /* 0C0633C0 jsr @Rn */
L_0C0633C4: BLKS(0x0C0633C4u);
	r11 = 0x0u;  /* 0C0633C4 mov #imm,Rn */
	IF(0x0C0633C6u); ;  /* 0C0633C6 nop */
	UPD(0x0C0633C8u, 2);
L_0C0633C8: BLKS(0x0C0633C8u);
	r9 = 0xC29D1D8u; UPD(0x0C0633CAu, 1);  /* 0C0633C8 mov.l @(disp,pc),Rn */
	r9 += r11;  /* 0C0633CA add Rm,Rn */
	r7 = R32(r9); UPD(0x0C0633CEu, 2);  /* 0C0633CC mov.l @Rm,Rn */
	r6 = 0x40000000u; UPD(0x0C0633D0u, 1);  /* 0C0633CE mov.l @(disp,pc),Rn */
	T = (r7 & r6) == 0;  /* 0C0633D0 tst Rm,Rn */
	{ u32 c_ = T; r7 = 0xFFFFFFFFu; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0633DAu, 4); goto L_0C0633DA; } goto L_0C0633D6; }  /* 0C0633D2 bt/s */
L_0C0633D6: BLKS(0x0C0633D6u);
	{ W8(r12, r7); /* slot mov.b Rm,@Rn */ UPD(0x0C063520u, 4); goto L_0C063520; }  /* 0C0633D6 bra */
L_0C0633DA: BLKS(0x0C0633DAu);
	r4 = 0x2A0u; UPD(0x0C0633DCu, 1);  /* 0C0633DA mov.w @(disp,pc),Rn */
	r10 += 0x1u;  /* 0C0633DC add #imm,Rn */
	r9 = 0x1u;  /* 0C0633DE mov #imm,Rn */
	T = (s32)r10 > (s32)r9;  /* 0C0633E0 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r11 += r4; /* slot add Rm,Rn */ if (c_) { UPD(0x0C0633C8u, 6); goto L_0C0633C8; } goto L_0C0633E6; }  /* 0C0633E2 bf/s */
L_0C0633E6: BLKS(0x0C0633E6u);
	r2 = 0xC063CE0u; UPD(0x0C0633E8u, 2);  /* 0C0633E6 mov.l @(disp,pc),Rn */
	r8 = 0xC0635D0u; UPD(0x0C0633EAu, 1);  /* 0C0633E8 mov.l @(disp,pc),Rn */
	IF(0x0C0633EAu); { u32 t_ = r2; PR = 0x0C0633EEu; IF(0x0C0633ECu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C063CE0, 0x0C063CE0u, 0x0C0633EEu); }  /* 0C0633EA jsr @Rn */
L_0C0633EE: BLKS(0x0C0633EEu);
	r0 = 0xC0637F0u; UPD(0x0C0633F0u, 1);  /* 0C0633EE mov.l @(disp,pc),Rn */
	IF(0x0C0633F0u); { u32 t_ = r0; PR = 0x0C0633F4u; IF(0x0C0633F2u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0637F0, 0x0C0637F0u, 0x0C0633F4u); }  /* 0C0633F0 jsr @Rn */
L_0C0633F4: BLKS(0x0C0633F4u);
	IF(0x0C0633F4u); { u32 t_ = r8; PR = 0x0C0633F8u; IF(0x0C0633F6u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0635D0, 0x0C0635D0u, 0x0C0633F8u); }  /* 0C0633F4 jsr @Rn */
L_0C0633F8: BLKS(0x0C0633F8u);
	r5 = 0xC2B016Cu; UPD(0x0C0633FAu, 1);  /* 0C0633F8 mov.l @(disp,pc),Rn */
	r4 = 0xC22E04Cu; UPD(0x0C0633FCu, 1);  /* 0C0633FA mov.l @(disp,pc),Rn */
	r11 = (u32)(s32)(s16)R16(r5); UPD(0x0C0633FEu, 1);  /* 0C0633FC mov.w @Rm,Rn */
	r8 = 0x400u; UPD(0x0C063400u, 1);  /* 0C0633FE mov.w @(disp,pc),Rn */
	r10 = r11 & 0xFFFF;  /* 0C063400 extu.w Rm,Rn */
	r9 = (u32)(s32)(s16)R16(r4); UPD(0x0C063404u, 2);  /* 0C063402 mov.w @Rm,Rn */
	r5 = 0xFFFFFFFFu;  /* 0C063404 mov #imm,Rn */
	r6 = 0xC2A6D4Cu; UPD(0x0C063408u, 2);  /* 0C063406 mov.l @(disp,pc),Rn */
	T = r10 == r8;  /* 0C063408 cmp/eq Rm,Rn */
	{ u32 t_ = 0u - r5, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r10 = r_; }  /* 0C06340A negc Rm,Rn */
	r7 = r9 & 0xFFFF;  /* 0C06340C extu.w Rm,Rn */
	r2 = (u32)(s32)(s16)R16(r6); UPD(0x0C063410u, 4);  /* 0C06340E mov.w @Rm,Rn */
	T = r7 == r8;  /* 0C063410 cmp/eq Rm,Rn */
	{ u32 t_ = 0u - r5, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r3 = r_; }  /* 0C063412 negc Rm,Rn */
	r0 = r2 & 0xFFFF;  /* 0C063414 extu.w Rm,Rn */
	T = r0 == r8;  /* 0C063416 cmp/eq Rm,Rn */
	{ u32 t_ = 0u - r5, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r11 = r_; }  /* 0C063418 negc Rm,Rn */
	r10 |= r3;  /* 0C06341A or Rm,Rn */
	r10 |= r11;  /* 0C06341C or Rm,Rn */
	T = (r10 & r10) == 0;  /* 0C06341E tst Rm,Rn */
	{ u32 c_ = !T; r5 = 0x3u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C063480u, 11); goto L_0C063480; } UPD(0x0C063424u, 1); goto L_0C063424; }  /* 0C063420 bf/s */
L_0C063424: BLKS(0x0C063424u);
	r8 = 0xC2B03A6u; UPD(0x0C063426u, 1);  /* 0C063424 mov.l @(disp,pc),Rn */
	r9 = 0x100u; UPD(0x0C063428u, 1);  /* 0C063426 mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C063428 mov Rm,Rn */
	IF(0x0C06342Au); r6 = (u32)(s32)(s16)R16(r0 + r9); UPD(0x0C06342Cu, 2);  /* 0C06342A mov.w @(r0,Rm),Rn */
	r0 = r6;  /* 0C06342C mov Rm,Rn */
	r0 &= 0x40u;  /* 0C06342E and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C063430 tst Rm,Rn */
	if (T) { UPD(0x0C06343Cu, 6); goto L_0C06343C; }  /* 0C063432 bt */
L_0C063434: BLKS(0x0C063434u);
	r3 = 0xC172FBCu; UPD(0x0C063436u, 1);  /* 0C063434 mov.l @(disp,pc),Rn */
	r7 = (u32)(s32)(s8)R8(r3); UPD(0x0C063438u, 1);  /* 0C063436 mov.b @Rm,Rn */
	r7 += 0xFFFFFF80u;  /* 0C063438 add #imm,Rn */
	W8(r3, r7); UPD(0x0C06343Cu, 2);  /* 0C06343A mov.b Rm,@Rn */
L_0C06343C: BLKS(0x0C06343Cu);
	r10 = 0xC172FBCu; UPD(0x0C06343Eu, 1);  /* 0C06343C mov.l @(disp,pc),Rn */
	r4 = (u32)(s32)(s8)R8(r10); UPD(0x0C063440u, 1);  /* 0C06343E mov.b @Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C063440 tst Rm,Rn */
	if (!T) { UPD(0x0C063470u, 4); goto L_0C063470; }  /* 0C063442 bf */
L_0C063444: BLKS(0x0C063444u);
	r11 = 0xC061010u; UPD(0x0C063446u, 1);  /* 0C063444 mov.l @(disp,pc),Rn */
	r5 = 0x7u;  /* 0C063446 mov #imm,Rn */
	r10 = 0xC062250u; UPD(0x0C06344Au, 2);  /* 0C063448 mov.l @(disp,pc),Rn */
	IF(0x0C06344Au); { u32 t_ = r11; PR = 0x0C06344Eu; r4 = 0x7u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C061010, 0x0C061010u, 0x0C06344Eu); }  /* 0C06344A jsr @Rn */
L_0C06344E: BLKS(0x0C06344Eu);
	IF(0x0C06344Eu); { u32 t_ = r10; PR = 0x0C063452u; IF(0x0C063450u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C062250, 0x0C062250u, 0x0C063452u); }  /* 0C06344E jsr @Rn */
L_0C063452: BLKS(0x0C063452u);
	r5 = (u32)(s32)(s16)R16(r8); UPD(0x0C063454u, 1);  /* 0C063452 mov.w @Rm,Rn */
	T = (r9 & r5) == 0;  /* 0C063454 tst Rm,Rn */
	if (T) { UPD(0x0C063388u, 4); goto L_0C063388; }  /* 0C063456 bt */
L_0C063458: BLKS(0x0C063458u);
	r15 = r14;  /* 0C063458 mov Rm,Rn */
	IF(0x0C06345Au); PR = R32(r15); r15 += 4; UPD(0x0C06345Cu, 2);  /* 0C06345A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06345Eu, 1);  /* 0C06345C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C063460u, 1);  /* 0C06345E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C063462u, 1);  /* 0C063460 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C063464u, 1);  /* 0C063462 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C063466u, 1);  /* 0C063464 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C063468u, 1);  /* 0C063466 mov.l @Rm+,Rn */
	IF(0x0C063468u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C063468 rts */
L_0C063470: BLKS(0x0C063470u);
	r11 = 0xC06F5B0u; UPD(0x0C063472u, 1);  /* 0C063470 mov.l @(disp,pc),Rn */
	IF(0x0C063472u); { u32 t_ = r11; PR = 0x0C063476u; IF(0x0C063474u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C06F5B0, 0x0C06F5B0u, 0x0C063476u); }  /* 0C063472 jsr @Rn */
L_0C063476: BLKS(0x0C063476u);
	{ IF(0x0C063478u); ; /* slot nop */ UPD(0x0C063444u, 3); goto L_0C063444; }  /* 0C063476 bra */
L_0C063480: BLKS(0x0C063480u);
	r9 = 0xC0626E0u; UPD(0x0C063482u, 1);  /* 0C063480 mov.l @(disp,pc),Rn */
	r4 = 0xC172FB0u; UPD(0x0C063484u, 1);  /* 0C063482 mov.l @(disp,pc),Rn */
	r7 = 0x80808000u; UPD(0x0C063486u, 1);  /* 0C063484 mov.l @(disp,pc),Rn */
	IF(0x0C063486u); { u32 t_ = r9; PR = 0x0C06348Au; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C06348Au); }  /* 0C063486 jsr @Rn */
L_0C06348A: BLKS(0x0C06348Au);
	{ IF(0x0C06348Cu); ; /* slot nop */ UPD(0x0C063424u, 3); goto L_0C063424; }  /* 0C06348A bra */
L_0C063520: BLKS(0x0C063520u);
	r5 = 0x3u;  /* 0C063520 mov #imm,Rn */
	r0 = 0x224u; UPD(0x0C063524u, 2);  /* 0C063522 mov.w @(disp,pc),Rn */
	r1 = 0x4u;  /* 0C063524 mov #imm,Rn */
	IF(0x0C063526u); r3 = R32(r0 + r9); UPD(0x0C063528u, 2);  /* 0C063526 mov.l @(r0,Rm),Rn */
	r0 = R32(r9 + 0x4u); UPD(0x0C06352Au, 1);  /* 0C063528 mov.l @(disp,Rm),Rn */
	IF(0x0C06352Au); ARG0(0x405Du); { s32 s_ = (s32)r5; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C06352A shld Rm,Rn */
	r0 += r3;  /* 0C06352C add Rm,Rn */
	r6 = R32(r0 + 0x4u); UPD(0x0C063530u, 3);  /* 0C06352E mov.l @(disp,Rm),Rn */
	r2 = 0xC3C86B0u; UPD(0x0C063532u, 1);  /* 0C063530 mov.l @(disp,pc),Rn */
	W32(r2, r6); UPD(0x0C063534u, 1);  /* 0C063532 mov.l Rm,@Rn */
	r8 = R32(r0); UPD(0x0C063536u, 1);  /* 0C063534 mov.l @Rm,Rn */
	r0 = R32(r9 + 0x8u); UPD(0x0C063538u, 1);  /* 0C063536 mov.l @(disp,Rm),Rn */
	IF(0x0C063538u); ARG0(0x401Du); { s32 s_ = (s32)r1; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C063538 shld Rm,Rn */
	IF(0x0C06353Au); r4 = R32(r0 + r8); UPD(0x0C06353Cu, 2);  /* 0C06353A mov.l @(r0,Rm),Rn */
	r0 = R32(r9 + 0xCu); UPD(0x0C06353Eu, 1);  /* 0C06353C mov.l @(disp,Rm),Rn */
	IF(0x0C06353Eu); ARG0(0x405Du); { s32 s_ = (s32)r5; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C06353E shld Rm,Rn */
	r8 = 0x228u; UPD(0x0C063542u, 2);  /* 0C063540 mov.w @(disp,pc),Rn */
	IF(0x0C063542u); r7 = R32(r0 + r4); UPD(0x0C063544u, 1);  /* 0C063542 mov.l @(r0,Rm),Rn */
	r8 += r9;  /* 0C063544 add Rm,Rn */
	W32(r8, r7); UPD(0x0C063548u, 2);  /* 0C063546 mov.l Rm,@Rn */
	r6 = 0xC2289E8u; UPD(0x0C06354Au, 1);  /* 0C063548 mov.l @(disp,pc),Rn */
	r2 = 0xC074C30u; UPD(0x0C06354Cu, 1);  /* 0C06354A mov.l @(disp,pc),Rn */
	W32(r6, r7); UPD(0x0C06354Eu, 1);  /* 0C06354C mov.l Rm,@Rn */
	r6 = 0xCu;  /* 0C06354E mov #imm,Rn */
	r4 = R32(r9 + 0x10u); UPD(0x0C063552u, 2);  /* 0C063550 mov.l @(disp,Rm),Rn */
	r7 = 0x0u;  /* 0C063552 mov #imm,Rn */
	IF(0x0C063554u); { u32 t_ = r2; PR = 0x0C063558u; r5 = R32(r9 + 0x14u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C074C30, 0x0C074C30u, 0x0C063558u); }  /* 0C063554 jsr @Rn */
L_0C063558: BLKS(0x0C063558u);
	r3 = 0xC074C30u; UPD(0x0C06355Au, 1);  /* 0C063558 mov.l @(disp,pc),Rn */
	r6 = 0x0u;  /* 0C06355A mov #imm,Rn */
	r5 = R32(r9 + 0x14u); UPD(0x0C06355Eu, 2);  /* 0C06355C mov.l @(disp,Rm),Rn */
	r7 = 0x0u;  /* 0C06355E mov #imm,Rn */
	IF(0x0C063560u); { u32 t_ = r3; PR = 0x0C063564u; r4 = R32(r9 + 0x10u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C074C30, 0x0C074C30u, 0x0C063564u); }  /* 0C063560 jsr @Rn */
L_0C063564: BLKS(0x0C063564u);
	r5 = (u32)(s32)(s8)R8(r12); UPD(0x0C063566u, 1);  /* 0C063564 mov.b @Rm,Rn */
	r1 = 0xFFFFFFFCu;  /* 0C063566 mov #imm,Rn */
	r0 = r5;  /* 0C063568 mov Rm,Rn */
	r4 = 0x260u; UPD(0x0C06356Cu, 3);  /* 0C06356A mov.w @(disp,pc),Rn */
	IF(0x0C06356Cu); ARG0(0x401Cu); { s32 s_ = (s32)r1; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = (u32)((s32)r0 >> 31); else r0 = (u32)((s32)r0 >> ((~s_ & 31) + 1)); }  /* 0C06356C shad Rm,Rn */
	r4 += r9;  /* 0C06356E add Rm,Rn */
	W8(r4, r0); UPD(0x0C063572u, 3);  /* 0C063570 mov.b Rm,@Rn */
	r15 += 0xFFFFFFFCu;  /* 0C063572 add #imm,Rn */
	r4 += 0x1u;  /* 0C063574 add #imm,Rn */
	W8(r4, r5); UPD(0x0C063578u, 3);  /* 0C063576 mov.b Rm,@Rn */
	r3 = 0x0u;  /* 0C063578 mov #imm,Rn */
	r7 = R32(r8); UPD(0x0C06357Cu, 2);  /* 0C06357A mov.l @Rm,Rn */
	r4 = 0x0u;  /* 0C06357C mov #imm,Rn */
	r6 = 0xC2289E8u; UPD(0x0C063580u, 2);  /* 0C06357E mov.l @(disp,pc),Rn */
	W32(r6, r7); UPD(0x0C063582u, 1);  /* 0C063580 mov.l Rm,@Rn */
	r8 = 0xC073B10u; UPD(0x0C063584u, 1);  /* 0C063582 mov.l @(disp,pc),Rn */
	W32(r15, r3); UPD(0x0C063586u, 1);  /* 0C063584 mov.l Rm,@Rn */
	r0 = 0x29Cu; UPD(0x0C063588u, 1);  /* 0C063586 mov.w @(disp,pc),Rn */
	r5 = R32(r9 + 0x10u); UPD(0x0C06358Au, 1);  /* 0C063588 mov.l @(disp,Rm),Rn */
	r6 = R32(r9 + 0x14u); UPD(0x0C06358Cu, 1);  /* 0C06358A mov.l @(disp,Rm),Rn */
	IF(0x0C06358Cu); { u32 t_ = r8; PR = 0x0C063590u; IF(0x0C06358Eu); r7 = R32(r0 + r9); /* slot mov.l @(r0,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C073B10, 0x0C073B10u, 0x0C063590u); }  /* 0C06358C jsr @Rn */
L_0C063590: BLKS(0x0C063590u);
	r5 = (u32)(s32)(s8)R8(r12); UPD(0x0C063592u, 1);  /* 0C063590 mov.b @Rm,Rn */
	r2 = 0xFFFFFFFCu;  /* 0C063592 mov #imm,Rn */
	r4 = 0x264u; UPD(0x0C063596u, 2);  /* 0C063594 mov.w @(disp,pc),Rn */
	r0 = r5;  /* 0C063596 mov Rm,Rn */
	r4 += r9;  /* 0C063598 add Rm,Rn */
	IF(0x0C06359Au); ARG0(0x402Cu); { s32 s_ = (s32)r2; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = (u32)((s32)r0 >> 31); else r0 = (u32)((s32)r0 >> ((~s_ & 31) + 1)); }  /* 0C06359A shad Rm,Rn */
	r4 += 0x2u;  /* 0C06359C add #imm,Rn */
	W8(r4, r0); UPD(0x0C0635A0u, 5);  /* 0C06359E mov.b Rm,@Rn */
	r15 += 0x4u;  /* 0C0635A0 add #imm,Rn */
	r4 += 0x1u;  /* 0C0635A2 add #imm,Rn */
	{ W8(r4, r5); /* slot mov.b Rm,@Rn */ UPD(0x0C0633DAu, 5); goto L_0C0633DA; }  /* 0C0635A4 bra */
}

/* FUN_0c0635d0 */
void blk_f_0C0635D0(sh3_t *c)
{
	LOCALS;
L_0C0635D0: BLKS(0x0C0635D0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0635D2u, 1);  /* 0C0635D0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0635D4u, 1);  /* 0C0635D2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0635D6u, 1);  /* 0C0635D4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0635D8u, 1);  /* 0C0635D6 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0635DAu, 1);  /* 0C0635D8 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0635DCu, 1);  /* 0C0635DA mov.l Rm,@-Rn */
	r0 = 0xC3C415Cu; UPD(0x0C0635DEu, 1);  /* 0C0635DC mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0635E0u, 1);  /* 0C0635DE mov.l Rm,@-Rn */
	r6 = R32(r0); UPD(0x0C0635E2u, 1);  /* 0C0635E0 mov.l @Rm,Rn */
	r15 += 0xFFFFFFF0u;  /* 0C0635E2 add #imm,Rn */
	r14 = r15;  /* 0C0635E4 mov Rm,Rn */
	r0 = 0x0u;  /* 0C0635E6 mov #imm,Rn */
	r13 = 0x70007u; UPD(0x0C0635EAu, 4);  /* 0C0635E8 mov.l @(disp,pc),Rn */
	W32(r14, r0); UPD(0x0C0635ECu, 1);  /* 0C0635EA mov.l Rm,@Rn */
	W32(r14 + 0x8u, r0); UPD(0x0C0635EEu, 1);  /* 0C0635EC mov.l Rm,@(disp,Rn) */
	IF(0x0C0635EEu); ;  /* 0C0635EE nop */
	UPD(0x0C0635F0u, 1);
L_0C0635F0: BLKS(0x0C0635F0u);
	r1 = 0xC29D1D8u; UPD(0x0C0635F2u, 1);  /* 0C0635F0 mov.l @(disp,pc),Rn */
	r7 = R32(r14 + 0x8u); UPD(0x0C0635F4u, 1);  /* 0C0635F2 mov.l @(disp,Rm),Rn */
	r5 = 0x287u; UPD(0x0C0635F6u, 1);  /* 0C0635F4 mov.w @(disp,pc),Rn */
	r7 += r1;  /* 0C0635F6 add Rm,Rn */
	r5 += r7;  /* 0C0635F8 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r5); UPD(0x0C0635FCu, 3);  /* 0C0635FA mov.b @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0635FC tst Rm,Rn */
	{ u32 c_ = T; r3 = r7; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06364Au, 4); goto L_0C06364A; } goto L_0C063602; }  /* 0C0635FE bt/s */
L_0C063602: BLKS(0x0C063602u);
	r12 = 0xC3C8470u; UPD(0x0C063604u, 2);  /* 0C063602 mov.l @(disp,pc),Rn */
	r11 = R32(r12); UPD(0x0C063606u, 1);  /* 0C063604 mov.l @Rm,Rn */
	r10 = 0xC29D088u; UPD(0x0C063608u, 1);  /* 0C063606 mov.l @(disp,pc),Rn */
	W32(r6, r11); UPD(0x0C06360Au, 1);  /* 0C063608 mov.l Rm,@Rn */
	r9 = 0xF00058u; UPD(0x0C06360Cu, 1);  /* 0C06360A mov.l @(disp,pc),Rn */
	r6 += 0x4u;  /* 0C06360C add #imm,Rn */
	r8 = R32(r10); UPD(0x0C063610u, 2);  /* 0C06360E mov.l @Rm,Rn */
	r8 += r9;  /* 0C063610 add Rm,Rn */
	W32(r6, r8); UPD(0x0C063614u, 2);  /* 0C063612 mov.l Rm,@Rn */
	r4 = R32(r7 + 0x10u); UPD(0x0C063616u, 1);  /* 0C063614 mov.l @(disp,Rm),Rn */
	r6 += 0x4u;  /* 0C063616 add #imm,Rn */
	r3 = 0xC232314u; UPD(0x0C06361Au, 2);  /* 0C063618 mov.l @(disp,pc),Rn */
	r2 = (r4 >> 16) | (r4 << 16);  /* 0C06361A swap.w Rm,Rn */
	r12 = R32(r7 + 0x14u); UPD(0x0C06361Eu, 2);  /* 0C06361C mov.l @(disp,Rm),Rn */
	r0 = (u32)(s32)(s16)r2;  /* 0C06361E exts.w Rm,Rn */
	r10 = 0xC29D72Cu; UPD(0x0C063622u, 2);  /* 0C063620 mov.l @(disp,pc),Rn */
	r11 = (r12 >> 16) | (r12 << 16);  /* 0C063622 swap.w Rm,Rn */
	r4 = R32(r3); UPD(0x0C063626u, 2);  /* 0C063624 mov.l @Rm,Rn */
	r9 = (u32)(s32)(s16)r11;  /* 0C063626 exts.w Rm,Rn */
	r8 = R32(r10); UPD(0x0C06362Au, 2);  /* 0C063628 mov.l @Rm,Rn */
	r4 += r0;  /* 0C06362A add Rm,Rn */
	r4 += 0xFFFFFFFCu;  /* 0C06362C add #imm,Rn */
	r8 += r9;  /* 0C06362E add Rm,Rn */
	IF(0x0C063630u); r4 <<= 16;  /* 0C063630 shll16 Rn */
	r8 += 0xFFFFFFFCu;  /* 0C063632 add #imm,Rn */
	r4 |= r8;  /* 0C063634 or Rm,Rn */
	W32(r6, r4); UPD(0x0C063638u, 7);  /* 0C063636 mov.l Rm,@Rn */
	r3 = 0x70007u; UPD(0x0C06363Au, 1);  /* 0C063638 mov.l @(disp,pc),Rn */
	r6 += 0x4u;  /* 0C06363A add #imm,Rn */
	W32(r6, r3); UPD(0x0C06363Eu, 2);  /* 0C06363C mov.l Rm,@Rn */
	r2 = 0x808080u; UPD(0x0C063640u, 1);  /* 0C06363E mov.l @(disp,pc),Rn */
	r6 += 0x4u;  /* 0C063640 add #imm,Rn */
	W32(r6, r2); UPD(0x0C063644u, 2);  /* 0C063642 mov.l Rm,@Rn */
	r0 = (u32)(s32)(s8)R8(r5); UPD(0x0C063646u, 1);  /* 0C063644 mov.b @Rm,Rn */
	r6 += 0x4u;  /* 0C063646 add #imm,Rn */
	r3 = r7;  /* 0C063648 mov Rm,Rn */
	UPD(0x0C06364Au, 2);
L_0C06364A: BLKS(0x0C06364Au);
	r3 += 0x20u;  /* 0C06364A add #imm,Rn */
	r8 = (u32)(s32)(s8)R8(r3); UPD(0x0C06364Eu, 2);  /* 0C06364C mov.b @Rm,Rn */
	r4 = 0xFFFFFFFFu;  /* 0C06364E mov #imm,Rn */
	T = (r8 & r8) == 0;  /* 0C063650 tst Rm,Rn */
	{ u32 t_ = 0u - r4, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r2 = r_; }  /* 0C063652 negc Rm,Rn */
	r0 = r0 & 0xFF;  /* 0C063654 extu.b Rm,Rn */
	T = r0 == 0x2u;  /* 0C063656 cmp/eq #imm,r0 */
	IF(0x0C063658u); r5 = T;  /* 0C063658 movt Rn */
	T = (r2 & r5) == 0;  /* 0C06365A tst Rm,Rn */
	if (T) { UPD(0x0C063674u, 10); goto L_0C063674; }  /* 0C06365C bt */
L_0C06365E: BLKS(0x0C06365Eu);
	W32(r14 + 0x4u, r3); UPD(0x0C063660u, 1);  /* 0C06365E mov.l Rm,@(disp,Rn) */
	r9 = 0x0u;  /* 0C063660 mov #imm,Rn */
	r12 = 0xC3C8470u; UPD(0x0C063664u, 2);  /* 0C063662 mov.l @(disp,pc),Rn */
	r4 = r7;  /* 0C063664 mov Rm,Rn */
	r11 = 0xC29D088u; UPD(0x0C063668u, 2);  /* 0C063666 mov.l @(disp,pc),Rn */
	r10 = 0xC232314u; UPD(0x0C06366Au, 1);  /* 0C063668 mov.l @(disp,pc),Rn */
	IF(0x0C06366Au); ;  /* 0C06366A nop */
	UPD(0x0C06366Cu, 1);
L_0C06366C: BLKS(0x0C06366Cu);
	r7 = R32(r14 + 0x4u); UPD(0x0C06366Eu, 1);  /* 0C06366C mov.l @(disp,Rm),Rn */
	r0 = (u32)(s32)(s8)R8(r7); UPD(0x0C063670u, 1);  /* 0C06366E mov.b @Rm,Rn */
	T = (s32)r9 >= (s32)r0;  /* 0C063670 cmp/ge Rm,Rn */
	if (!T) { UPD(0x0C063678u, 4); goto L_0C063678; }  /* 0C063672 bf */
L_0C063674: BLKS(0x0C063674u);
	{ r11 = R32(r14 + 0x8u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C063780u, 3); goto L_0C063780; }  /* 0C063674 bra */
L_0C063678: BLKS(0x0C063678u);
	r3 = R32(r14); UPD(0x0C06367Au, 1);  /* 0C063678 mov.l @Rm,Rn */
	r8 = 0xA8u; UPD(0x0C06367Cu, 1);  /* 0C06367A mov.w @(disp,pc),Rn */
	IF(0x0C06367Cu); MACL = r3 * r8;  /* 0C06367C mul.l Rm,Rn */
	r1 = 0xC29D1D8u; UPD(0x0C063680u, 3);  /* 0C06367E mov.l @(disp,pc),Rn */
	IF(0x0C063680u); r2 = MACL;  /* 0C063680 sts macl,Rn */
	r2 += r9;  /* 0C063682 add Rm,Rn */
	r0 = 0x124u; UPD(0x0C063686u, 3);  /* 0C063684 mov.w @(disp,pc),Rn */
	IF(0x0C063686u); r2 <<= 2;  /* 0C063686 shll2 Rn */
	r2 += r1;  /* 0C063688 add Rm,Rn */
	r3 = R32(r4 + 0x10u); UPD(0x0C06368Cu, 3);  /* 0C06368A mov.l @(disp,Rm),Rn */
	IF(0x0C06368Cu); r5 = R32(r0 + r2); UPD(0x0C06368Eu, 1);  /* 0C06368C mov.l @(r0,Rm),Rn */
	r5 += r3;  /* 0C06368E add Rm,Rn */
	r7 = (r5 >> 16) | (r5 << 16);  /* 0C063690 swap.w Rm,Rn */
	r0 += 0x40u;  /* 0C063692 add #imm,Rn */
	r8 = (u32)(s32)(s16)r7;  /* 0C063694 exts.w Rm,Rn */
	r7 = R32(r4 + 0x14u); UPD(0x0C063698u, 5);  /* 0C063696 mov.l @(disp,Rm),Rn */
	IF(0x0C063698u); r1 = R32(r0 + r2); UPD(0x0C06369Au, 1);  /* 0C063698 mov.l @(r0,Rm),Rn */
	r4 += 0x21u;  /* 0C06369A add #imm,Rn */
	r1 += r7;  /* 0C06369C add Rm,Rn */
	r5 = (r1 >> 16) | (r1 << 16);  /* 0C06369E swap.w Rm,Rn */
	r0 += 0x40u;  /* 0C0636A0 add #imm,Rn */
	IF(0x0C0636A2u); r1 = R32(r0 + r2); UPD(0x0C0636A4u, 5);  /* 0C0636A2 mov.l @(r0,Rm),Rn */
	r5 = (u32)(s32)(s16)r5;  /* 0C0636A4 exts.w Rm,Rn */
	r1 += r3;  /* 0C0636A6 add Rm,Rn */
	r3 = (r1 >> 16) | (r1 << 16);  /* 0C0636A8 swap.w Rm,Rn */
	r0 += 0x40u;  /* 0C0636AA add #imm,Rn */
	IF(0x0C0636ACu); r1 = R32(r0 + r2); UPD(0x0C0636AEu, 5);  /* 0C0636AC mov.l @(r0,Rm),Rn */
	r3 = (u32)(s32)(s16)r3;  /* 0C0636AE exts.w Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r4); UPD(0x0C0636B2u, 2);  /* 0C0636B0 mov.b @Rm,Rn */
	r1 += r7;  /* 0C0636B2 add Rm,Rn */
	T = r9 == r0;  /* 0C0636B4 cmp/eq Rm,Rn */
	r2 = (r1 >> 16) | (r1 << 16);  /* 0C0636B6 swap.w Rm,Rn */
	r0 = 0xE02020u; UPD(0x0C0636BAu, 4);  /* 0C0636B8 mov.l @(disp,pc),Rn */
	r5 += 0xFFFFFFFFu;  /* 0C0636BA add #imm,Rn */
	r3 += 0xFFFFFFFFu;  /* 0C0636BC add #imm,Rn */
	r7 = (u32)(s32)(s16)r2;  /* 0C0636BE exts.w Rm,Rn */
	{ u32 c_ = T; r4 += 0xFFFFFFDFu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0636C6u, 6); goto L_0C0636C6; } goto L_0C0636C4; }  /* 0C0636C0 bt/s */
L_0C0636C4: BLKS(0x0C0636C4u);
	r0 = 0x808080u; UPD(0x0C0636C6u, 2);  /* 0C0636C4 mov.l @(disp,pc),Rn */
L_0C0636C6: BLKS(0x0C0636C6u);
	r2 = R32(r12); UPD(0x0C0636C8u, 1);  /* 0C0636C6 mov.l @Rm,Rn */
	r9 += 0x1u;  /* 0C0636C8 add #imm,Rn */
	W32(r6, r2); UPD(0x0C0636CCu, 2);  /* 0C0636CA mov.l Rm,@Rn */
	r2 = 0xF800D0u; UPD(0x0C0636CEu, 1);  /* 0C0636CC mov.l @(disp,pc),Rn */
	r6 += 0x4u;  /* 0C0636CE add #imm,Rn */
	r1 = R32(r11); UPD(0x0C0636D2u, 2);  /* 0C0636D0 mov.l @Rm,Rn */
	r1 += r2;  /* 0C0636D2 add Rm,Rn */
	W32(r6, r1); UPD(0x0C0636D6u, 2);  /* 0C0636D4 mov.l Rm,@Rn */
	r1 = 0xC29D72Cu; UPD(0x0C0636D8u, 1);  /* 0C0636D6 mov.l @(disp,pc),Rn */
	r6 += 0x4u;  /* 0C0636D8 add #imm,Rn */
	r2 = R32(r10); UPD(0x0C0636DCu, 2);  /* 0C0636DA mov.l @Rm,Rn */
	r1 = R32(r1); UPD(0x0C0636DEu, 1);  /* 0C0636DC mov.l @Rm,Rn */
	r2 += r8;  /* 0C0636DE add Rm,Rn */
	r2 += 0xFFFFFFF8u;  /* 0C0636E0 add #imm,Rn */
	r1 += r5;  /* 0C0636E2 add Rm,Rn */
	IF(0x0C0636E4u); r2 <<= 16;  /* 0C0636E4 shll16 Rn */
	r2 |= r1;  /* 0C0636E6 or Rm,Rn */
	W32(r6, r2); UPD(0x0C0636EAu, 6);  /* 0C0636E8 mov.l Rm,@Rn */
	r6 += 0x4u;  /* 0C0636EA add #imm,Rn */
	W32(r6, r13); UPD(0x0C0636EEu, 2);  /* 0C0636EC mov.l Rm,@Rn */
	r6 += 0x4u;  /* 0C0636EE add #imm,Rn */
	W32(r6, r0); UPD(0x0C0636F2u, 2);  /* 0C0636F0 mov.l Rm,@Rn */
	r2 = R32(r12); UPD(0x0C0636F4u, 1);  /* 0C0636F2 mov.l @Rm,Rn */
	r6 += 0x4u;  /* 0C0636F4 add #imm,Rn */
	W32(r6, r2); UPD(0x0C0636F8u, 2);  /* 0C0636F6 mov.l Rm,@Rn */
	r2 = 0xF800C8u; UPD(0x0C0636FAu, 1);  /* 0C0636F8 mov.l @(disp,pc),Rn */
	r6 += 0x4u;  /* 0C0636FA add #imm,Rn */
	r1 = R32(r11); UPD(0x0C0636FEu, 2);  /* 0C0636FC mov.l @Rm,Rn */
	r1 += r2;  /* 0C0636FE add Rm,Rn */
	W32(r6, r1); UPD(0x0C063702u, 2);  /* 0C063700 mov.l Rm,@Rn */
	r1 = 0xC29D72Cu; UPD(0x0C063704u, 1);  /* 0C063702 mov.l @(disp,pc),Rn */
	r6 += 0x4u;  /* 0C063704 add #imm,Rn */
	r2 = R32(r10); UPD(0x0C063708u, 2);  /* 0C063706 mov.l @Rm,Rn */
	r1 = R32(r1); UPD(0x0C06370Au, 1);  /* 0C063708 mov.l @Rm,Rn */
	r2 += r3;  /* 0C06370A add Rm,Rn */
	r1 += r5;  /* 0C06370C add Rm,Rn */
	IF(0x0C06370Eu); r2 <<= 16;  /* 0C06370E shll16 Rn */
	r2 |= r1;  /* 0C063710 or Rm,Rn */
	W32(r6, r2); UPD(0x0C063714u, 5);  /* 0C063712 mov.l Rm,@Rn */
	r6 += 0x4u;  /* 0C063714 add #imm,Rn */
	W32(r6, r13); UPD(0x0C063718u, 2);  /* 0C063716 mov.l Rm,@Rn */
	r6 += 0x4u;  /* 0C063718 add #imm,Rn */
	W32(r6, r0); UPD(0x0C06371Cu, 2);  /* 0C06371A mov.l Rm,@Rn */
	r2 = R32(r12); UPD(0x0C06371Eu, 1);  /* 0C06371C mov.l @Rm,Rn */
	r6 += 0x4u;  /* 0C06371E add #imm,Rn */
	W32(r6, r2); UPD(0x0C063722u, 2);  /* 0C063720 mov.l Rm,@Rn */
	r1 = 0xF800D8u; UPD(0x0C063724u, 1);  /* 0C063722 mov.l @(disp,pc),Rn */
	r6 += 0x4u;  /* 0C063724 add #imm,Rn */
	r5 = R32(r11); UPD(0x0C063728u, 2);  /* 0C063726 mov.l @Rm,Rn */
	r5 += r1;  /* 0C063728 add Rm,Rn */
	W32(r6, r5); UPD(0x0C06372Cu, 2);  /* 0C06372A mov.l Rm,@Rn */
	r2 = R32(r10); UPD(0x0C06372Eu, 1);  /* 0C06372C mov.l @Rm,Rn */
	r6 += 0x4u;  /* 0C06372E add #imm,Rn */
	r5 = 0xC29D72Cu; UPD(0x0C063732u, 2);  /* 0C063730 mov.l @(disp,pc),Rn */
	r2 += r8;  /* 0C063732 add Rm,Rn */
	r8 = R32(r5); UPD(0x0C063736u, 2);  /* 0C063734 mov.l @Rm,Rn */
	r2 += 0xFFFFFFF8u;  /* 0C063736 add #imm,Rn */
	r8 += r7;  /* 0C063738 add Rm,Rn */
	r8 += 0xFFFFFFF8u;  /* 0C06373A add #imm,Rn */
	IF(0x0C06373Cu); r2 <<= 16;  /* 0C06373C shll16 Rn */
	r2 |= r8;  /* 0C06373E or Rm,Rn */
	W32(r6, r2); UPD(0x0C063742u, 6);  /* 0C063740 mov.l Rm,@Rn */
	r6 += 0x4u;  /* 0C063742 add #imm,Rn */
	W32(r6, r13); UPD(0x0C063746u, 2);  /* 0C063744 mov.l Rm,@Rn */
	r6 += 0x4u;  /* 0C063746 add #imm,Rn */
	W32(r6, r0); UPD(0x0C06374Au, 2);  /* 0C063748 mov.l Rm,@Rn */
	r2 = R32(r12); UPD(0x0C06374Cu, 1);  /* 0C06374A mov.l @Rm,Rn */
	r6 += 0x4u;  /* 0C06374C add #imm,Rn */
	W32(r6, r2); UPD(0x0C063750u, 2);  /* 0C06374E mov.l Rm,@Rn */
	r1 = 0xF800C0u; UPD(0x0C063752u, 1);  /* 0C063750 mov.l @(disp,pc),Rn */
	r6 += 0x4u;  /* 0C063752 add #imm,Rn */
	r8 = R32(r11); UPD(0x0C063756u, 2);  /* 0C063754 mov.l @Rm,Rn */
	r8 += r1;  /* 0C063756 add Rm,Rn */
	W32(r6, r8); UPD(0x0C06375Au, 2);  /* 0C063758 mov.l Rm,@Rn */
	r8 = R32(r10); UPD(0x0C06375Cu, 1);  /* 0C06375A mov.l @Rm,Rn */
	r6 += 0x4u;  /* 0C06375C add #imm,Rn */
	r2 = R32(r5); UPD(0x0C063760u, 2);  /* 0C06375E mov.l @Rm,Rn */
	r8 += r3;  /* 0C063760 add Rm,Rn */
	r2 += r7;  /* 0C063762 add Rm,Rn */
	IF(0x0C063764u); r8 <<= 16;  /* 0C063764 shll16 Rn */
	r2 += 0xFFFFFFF8u;  /* 0C063766 add #imm,Rn */
	r8 |= r2;  /* 0C063768 or Rm,Rn */
	W32(r6, r8); UPD(0x0C06376Cu, 6);  /* 0C06376A mov.l Rm,@Rn */
	r6 += 0x4u;  /* 0C06376C add #imm,Rn */
	W32(r6, r13); UPD(0x0C063770u, 2);  /* 0C06376E mov.l Rm,@Rn */
	r6 += 0x4u;  /* 0C063770 add #imm,Rn */
	W32(r6, r0); UPD(0x0C063774u, 2);  /* 0C063772 mov.l Rm,@Rn */
	{ r6 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C06366Cu, 3); goto L_0C06366C; }  /* 0C063774 bra */
L_0C063780: BLKS(0x0C063780u);
	r9 = 0x1u;  /* 0C063780 mov #imm,Rn */
	r10 = R32(r14); UPD(0x0C063784u, 2);  /* 0C063782 mov.l @Rm,Rn */
	r12 = 0x2A0u; UPD(0x0C063786u, 1);  /* 0C063784 mov.w @(disp,pc),Rn */
	r10 += 0x1u;  /* 0C063786 add #imm,Rn */
	r11 += r12;  /* 0C063788 add Rm,Rn */
	W32(r14 + 0x8u, r11); UPD(0x0C06378Cu, 3);  /* 0C06378A mov.l Rm,@(disp,Rn) */
	T = (s32)r10 > (s32)r9;  /* 0C06378C cmp/gt Rm,Rn */
	{ u32 c_ = T; W32(r14, r10); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C063796u, 4); goto L_0C063796; } UPD(0x0C063792u, 1); goto L_0C063792; }  /* 0C06378E bt/s */
L_0C063792: BLKS(0x0C063792u);
	{ IF(0x0C063794u); ; /* slot nop */ UPD(0x0C0635F0u, 3); goto L_0C0635F0; }  /* 0C063792 bra */
L_0C063796: BLKS(0x0C063796u);
	r13 = 0xC3C415Cu; UPD(0x0C063798u, 1);  /* 0C063796 mov.l @(disp,pc),Rn */
	r14 += 0x10u;  /* 0C063798 add #imm,Rn */
	W32(r13, r6); UPD(0x0C06379Cu, 2);  /* 0C06379A mov.l Rm,@Rn */
	r15 = r14;  /* 0C06379C mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0637A0u, 2);  /* 0C06379E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0637A2u, 1);  /* 0C0637A0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0637A4u, 1);  /* 0C0637A2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0637A6u, 1);  /* 0C0637A4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0637A8u, 1);  /* 0C0637A6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0637AAu, 1);  /* 0C0637A8 mov.l @Rm+,Rn */
	IF(0x0C0637AAu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0637AA rts */
}

/* FUN_0c0637f0 */
void blk_f_0C0637F0(sh3_t *c)
{
	LOCALS;
	SPIN_VARS(0C063C64);
L_0C0637F0: BLKS(0x0C0637F0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0637F2u, 1);  /* 0C0637F0 mov.l Rm,@-Rn */
	r1 = 0x0u;  /* 0C0637F2 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0637F6u, 2);  /* 0C0637F4 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0637F8u, 1);  /* 0C0637F6 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0637FAu, 1);  /* 0C0637F8 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0637FCu, 1);  /* 0C0637FA mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0637FEu, 1);  /* 0C0637FC mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C063800u, 1);  /* 0C0637FE mov.l Rm,@-Rn */
	IF(0x0C063800u); r15 -= 4; W32(r15, PR); UPD(0x0C063802u, 1);  /* 0C063800 sts.l pr,@-Rn */
	r15 += 0xFFFFFFE4u;  /* 0C063802 add #imm,Rn */
	r14 = r15;  /* 0C063804 mov Rm,Rn */
	W32(r14, r1); UPD(0x0C063808u, 3);  /* 0C063806 mov.l Rm,@Rn */
	W32(r14 + 0x18u, r1); UPD(0x0C06380Au, 1);  /* 0C063808 mov.l Rm,@(disp,Rn) */
	IF(0x0C06380Au); ;  /* 0C06380A nop */
	UPD(0x0C06380Cu, 1);
L_0C06380C: BLKS(0x0C06380Cu);
	r5 = 0xC17301Cu; UPD(0x0C06380Eu, 1);  /* 0C06380C mov.l @(disp,pc),Rn */
	r6 = 0x1u;  /* 0C06380E mov #imm,Rn */
	r0 = R32(r14); UPD(0x0C063812u, 2);  /* 0C063810 mov.l @Rm,Rn */
	IF(0x0C063812u); r13 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C063814u, 1);  /* 0C063812 mov.b @(r0,Rm),Rn */
	r2 = 0xC0626E0u; UPD(0x0C063816u, 1);  /* 0C063814 mov.l @(disp,pc),Rn */
	r8 = r13;  /* 0C063816 mov Rm,Rn */
	r8 += 0x13u;  /* 0C063818 add #imm,Rn */
	r4 = 0xC172FC0u; UPD(0x0C06381Cu, 3);  /* 0C06381A mov.l @(disp,pc),Rn */
	r7 = 0xC0404000u; UPD(0x0C06381Eu, 1);  /* 0C06381C mov.l @(disp,pc),Rn */
	IF(0x0C06381Eu); { u32 t_ = r2; PR = 0x0C063822u; r5 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C063822u); }  /* 0C06381E jsr @Rn */
L_0C063822: BLKS(0x0C063822u);
	r4 = R32(r14 + 0x18u); UPD(0x0C063824u, 1);  /* 0C063822 mov.l @(disp,Rm),Rn */
	r5 = r8;  /* 0C063824 mov Rm,Rn */
	r10 = 0xC29D1D8u; UPD(0x0C063828u, 2);  /* 0C063826 mov.l @(disp,pc),Rn */
	r6 = 0x6u;  /* 0C063828 mov #imm,Rn */
	r1 = 0xC062490u; UPD(0x0C06382Cu, 2);  /* 0C06382A mov.l @(disp,pc),Rn */
	r10 += r4;  /* 0C06382C add Rm,Rn */
	IF(0x0C06382Eu); { u32 t_ = r1; PR = 0x0C063832u; r4 = R32(r10 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C062490, 0x0C062490u, 0x0C063832u); }  /* 0C06382E jsr @Rn */
L_0C063832: BLKS(0x0C063832u);
	r12 = 0xC0626E0u; UPD(0x0C063834u, 1);  /* 0C063832 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFFFu;  /* 0C063834 add #imm,Rn */
	r11 = 0xC062490u; UPD(0x0C063838u, 2);  /* 0C063836 mov.l @(disp,pc),Rn */
	r5 = r8;  /* 0C063838 mov Rm,Rn */
	r4 = 0xC172FC4u; UPD(0x0C06383Cu, 2);  /* 0C06383A mov.l @(disp,pc),Rn */
	r7 = 0xC0404000u; UPD(0x0C06383Eu, 1);  /* 0C06383C mov.l @(disp,pc),Rn */
	IF(0x0C06383Eu); { u32 t_ = r12; PR = 0x0C063842u; r6 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C063842u); }  /* 0C06383E jsr @Rn */
L_0C063842: BLKS(0x0C063842u);
	r9 = 0xC0626E0u; UPD(0x0C063844u, 1);  /* 0C063842 mov.l @(disp,pc),Rn */
	r5 = r8;  /* 0C063844 mov Rm,Rn */
	r4 = R32(r10 + 0x8u); UPD(0x0C063848u, 2);  /* 0C063846 mov.l @(disp,Rm),Rn */
	IF(0x0C063848u); { u32 t_ = r11; PR = 0x0C06384Cu; r6 = 0x6u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062490, 0x0C062490u, 0x0C06384Cu); }  /* 0C063848 jsr @Rn */
L_0C06384C: BLKS(0x0C06384Cu);
	r8 += 0xFFFFFFFFu;  /* 0C06384C add #imm,Rn */
	r7 = 0xC0404000u; UPD(0x0C063850u, 2);  /* 0C06384E mov.l @(disp,pc),Rn */
	r5 = r8;  /* 0C063850 mov Rm,Rn */
	r4 = 0xC172FC8u; UPD(0x0C063854u, 2);  /* 0C063852 mov.l @(disp,pc),Rn */
	IF(0x0C063854u); { u32 t_ = r9; PR = 0x0C063858u; r6 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C063858u); }  /* 0C063854 jsr @Rn */
L_0C063858: BLKS(0x0C063858u);
	r7 = 0xC062490u; UPD(0x0C06385Au, 1);  /* 0C063858 mov.l @(disp,pc),Rn */
	r5 = r8;  /* 0C06385A mov Rm,Rn */
	r4 = R32(r10 + 0xCu); UPD(0x0C06385Eu, 2);  /* 0C06385C mov.l @(disp,Rm),Rn */
	IF(0x0C06385Eu); { u32 t_ = r7; PR = 0x0C063862u; r6 = 0x6u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062490, 0x0C062490u, 0x0C063862u); }  /* 0C06385E jsr @Rn */
L_0C063862: BLKS(0x0C063862u);
	r3 = 0xC0626E0u; UPD(0x0C063864u, 1);  /* 0C063862 mov.l @(disp,pc),Rn */
	r5 = r13;  /* 0C063864 mov Rm,Rn */
	r5 += 0x10u;  /* 0C063866 add #imm,Rn */
	r4 = 0xC172FCCu; UPD(0x0C06386Au, 3);  /* 0C063868 mov.l @(disp,pc),Rn */
	r7 = 0xC0404000u; UPD(0x0C06386Cu, 1);  /* 0C06386A mov.l @(disp,pc),Rn */
	IF(0x0C06386Cu); { u32 t_ = r3; PR = 0x0C063870u; r6 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C063870u); }  /* 0C06386C jsr @Rn */
L_0C063870: BLKS(0x0C063870u);
	r0 = 0x224u; UPD(0x0C063872u, 1);  /* 0C063870 mov.w @(disp,pc),Rn */
	r2 = 0x3u;  /* 0C063872 mov #imm,Rn */
	IF(0x0C063874u); r1 = R32(r0 + r10); UPD(0x0C063876u, 2);  /* 0C063874 mov.l @(r0,Rm),Rn */
	r0 = R32(r10 + 0x4u); UPD(0x0C063878u, 1);  /* 0C063876 mov.l @(disp,Rm),Rn */
	IF(0x0C063878u); ARG0(0x402Du); { s32 s_ = (s32)r2; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C063878 shld Rm,Rn */
	r0 += r1;  /* 0C06387A add Rm,Rn */
	r10 = R32(r0 + 0x4u); UPD(0x0C06387Eu, 3);  /* 0C06387C mov.l @(disp,Rm),Rn */
	r2 = (u32)(s32)(s16)R16(r10); UPD(0x0C063880u, 1);  /* 0C06387E mov.w @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C063880 tst Rm,Rn */
	{ u32 c_ = T; r11 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0638C8u, 4); goto L_0C0638C8; } goto L_0C063886; }  /* 0C063882 bt/s */
L_0C063886: BLKS(0x0C063886u);
	r6 = 0x5u;  /* 0C063886 mov #imm,Rn */
	W32(r14 + 0xCu, r6); UPD(0x0C06388Au, 3);  /* 0C063888 mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x10u, r11); UPD(0x0C06388Cu, 1);  /* 0C06388A mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x14u, r6); UPD(0x0C06388Eu, 1);  /* 0C06388C mov.l Rm,@(disp,Rn) */
	r9 = r10;  /* 0C06388E mov Rm,Rn */
	UPD(0x0C063890u, 1);
L_0C063890: BLKS(0x0C063890u);
	r4 = (u32)(s32)(s16)r2;  /* 0C063890 exts.w Rm,Rn */
	r9 += 0x2u;  /* 0C063892 add #imm,Rn */
	r3 = r4;  /* 0C063894 mov Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r9); UPD(0x0C063898u, 4);  /* 0C063896 mov.w @Rm,Rn */
	r3 += 0x1u;  /* 0C063898 add #imm,Rn */
	T = r3 == r0;  /* 0C06389A cmp/eq Rm,Rn */
	{ u32 c_ = !T; r5 = r13; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0638A4u, 5); goto L_0C0638A4; } goto L_0C0638A0; }  /* 0C06389C bf/s */
L_0C0638A0: BLKS(0x0C0638A0u);
	{ r8 = r13; /* slot mov Rm,Rn */ UPD(0x0C063BD0u, 4); goto L_0C063BD0; }  /* 0C0638A0 bra */
L_0C0638A4: BLKS(0x0C0638A4u);
	r8 = 0xC0623C0u; UPD(0x0C0638A6u, 1);  /* 0C0638A4 mov.l @(disp,pc),Rn */
	r5 -= r11;  /* 0C0638A6 sub Rm,Rn */
	r5 += 0x10u;  /* 0C0638A8 add #imm,Rn */
	IF(0x0C0638AAu); { u32 t_ = r8; PR = 0x0C0638AEu; r6 = R32(r14 + 0x14u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0623C0, 0x0C0623C0u, 0x0C0638AEu); }  /* 0C0638AA jsr @Rn */
L_0C0638AE: BLKS(0x0C0638AEu);
	r7 = r11;  /* 0C0638AE mov Rm,Rn */
	r7 += 0x1u;  /* 0C0638B0 add #imm,Rn */
	r11 = (u32)(s32)(s8)r7;  /* 0C0638B2 exts.b Rm,Rn */
	r0 = r11;  /* 0C0638B4 mov Rm,Rn */
	T = r0 == 0x3u;  /* 0C0638B6 cmp/eq #imm,r0 */
	{ u32 c_ = !T; r10 = r9; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0638C0u, 8); goto L_0C0638C0; } goto L_0C0638BC; }  /* 0C0638B8 bf/s */
L_0C0638BC: BLKS(0x0C0638BCu);
	{ r4 = R32(r14 + 0xCu); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C063BB0u, 4); goto L_0C063BB0; }  /* 0C0638BC bra */
L_0C0638C0: BLKS(0x0C0638C0u);
	r2 = (u32)(s32)(s16)R16(r10); UPD(0x0C0638C2u, 1);  /* 0C0638C0 mov.w @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C0638C2 tst Rm,Rn */
	{ u32 c_ = !T; r9 = r10; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C063890u, 4); goto L_0C063890; } UPD(0x0C0638C8u, 1); goto L_0C0638C8; }  /* 0C0638C4 bf/s */
L_0C0638C8: BLKS(0x0C0638C8u);
	r11 = 0xC29D1D8u; UPD(0x0C0638CAu, 1);  /* 0C0638C8 mov.l @(disp,pc),Rn */
	r9 = R32(r14 + 0x18u); UPD(0x0C0638CCu, 1);  /* 0C0638CA mov.l @(disp,Rm),Rn */
	r9 += r11;  /* 0C0638CC add Rm,Rn */
	W32(r14 + 0x4u, r9); UPD(0x0C0638D0u, 2);  /* 0C0638CE mov.l Rm,@(disp,Rn) */
	r11 = r9;  /* 0C0638D0 mov Rm,Rn */
	r11 += 0x20u;  /* 0C0638D2 add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r11); UPD(0x0C0638D6u, 3);  /* 0C0638D4 mov.b @Rm,Rn */
	T = (r6 & r6) == 0;  /* 0C0638D6 tst Rm,Rn */
	{ u32 c_ = T; r9 = r13; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0638E0u, 4); goto L_0C0638E0; } goto L_0C0638DC; }  /* 0C0638D8 bt/s */
L_0C0638DC: BLKS(0x0C0638DCu);
	{ r9 += 0xDu; /* slot add #imm,Rn */ UPD(0x0C063AF0u, 4); goto L_0C063AF0; }  /* 0C0638DC bra */
L_0C0638E0: BLKS(0x0C0638E0u);
	r0 = R32(r14 + 0x4u); UPD(0x0C0638E2u, 1);  /* 0C0638E0 mov.l @(disp,Rm),Rn */
L_0C0638E2: BLKS(0x0C0638E2u);
	r1 = 0x3u;  /* 0C0638E2 mov #imm,Rn */
	r2 = 0x224u; UPD(0x0C0638E6u, 2);  /* 0C0638E4 mov.w @(disp,pc),Rn */
	r4 = r0;  /* 0C0638E6 mov Rm,Rn */
	IF(0x0C0638E8u); r7 = R32(r0 + r2); UPD(0x0C0638EAu, 2);  /* 0C0638E8 mov.l @(r0,Rm),Rn */
	r0 = R32(r0 + 0x4u); UPD(0x0C0638ECu, 1);  /* 0C0638EA mov.l @(disp,Rm),Rn */
	IF(0x0C0638ECu); ARG0(0x401Du); { s32 s_ = (s32)r1; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C0638EC shld Rm,Rn */
	r2 = R32(r4 + 0x8u); UPD(0x0C0638F0u, 2);  /* 0C0638EE mov.l @(disp,Rm),Rn */
	IF(0x0C0638F0u); r9 = R32(r0 + r7); UPD(0x0C0638F2u, 1);  /* 0C0638F0 mov.l @(r0,Rm),Rn */
	r6 = r2;  /* 0C0638F2 mov Rm,Rn */
	r0 = 0x4u;  /* 0C0638F4 mov #imm,Rn */
	IF(0x0C0638F6u); ARG0(0x460Du); { s32 s_ = (s32)r0; if (s_ >= 0) r6 <<= (s_ & 31); else if ((s_ & 31) == 0) r6 = 0; else r6 >>= ((~s_ & 31) + 1); }  /* 0C0638F6 shld Rm,Rn */
	r6 += r9;  /* 0C0638F8 add Rm,Rn */
	r5 = R32(r6 + 0x4u); UPD(0x0C0638FCu, 5);  /* 0C0638FA mov.l @(disp,Rm),Rn */
	T = (r5 & r5) == 0;  /* 0C0638FC tst Rm,Rn */
	{ u32 c_ = T; r4 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C063908u, 4); goto L_0C063908; } goto L_0C063902; }  /* 0C0638FE bt/s */
L_0C063902: BLKS(0x0C063902u);
	{ r10 = r13; /* slot mov Rm,Rn */ UPD(0x0C063AC0u, 4); goto L_0C063AC0; }  /* 0C063902 bra */
L_0C063906: BLKS(0x0C063906u);
	r4 = r2;  /* 0C063906 mov Rm,Rn */
	UPD(0x0C063908u, 1);
L_0C063908: BLKS(0x0C063908u);
	r7 = 0x4u;  /* 0C063908 mov #imm,Rn */
	IF(0x0C06390Au); ARG0(0x447Du); { s32 s_ = (s32)r7; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = 0; else r4 >>= ((~s_ & 31) + 1); }  /* 0C06390A shld Rm,Rn */
	r4 += r9;  /* 0C06390C add Rm,Rn */
	r6 = R32(r4 + 0x8u); UPD(0x0C063910u, 4);  /* 0C06390E mov.l @(disp,Rm),Rn */
	T = (r6 & r6) == 0;  /* 0C063910 tst Rm,Rn */
	{ u32 c_ = T; r5 = 0x4u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C06391Cu, 4); goto L_0C06391C; } goto L_0C063916; }  /* 0C063912 bt/s */
L_0C063916: BLKS(0x0C063916u);
	{ r10 = r13; /* slot mov Rm,Rn */ UPD(0x0C063A90u, 4); goto L_0C063A90; }  /* 0C063916 bra */
L_0C06391A: BLKS(0x0C06391Au);
	r5 = 0x4u;  /* 0C06391A mov #imm,Rn */
	UPD(0x0C06391Cu, 1);
L_0C06391C: BLKS(0x0C06391Cu);
	IF(0x0C06391Cu); ARG0(0x425Du); { s32 s_ = (s32)r5; if (s_ >= 0) r2 <<= (s_ & 31); else if ((s_ & 31) == 0) r2 = 0; else r2 >>= ((~s_ & 31) + 1); }  /* 0C06391C shld Rm,Rn */
	r2 += r9;  /* 0C06391E add Rm,Rn */
	r3 = R32(r2 + 0xCu); UPD(0x0C063922u, 3);  /* 0C063920 mov.l @(disp,Rm),Rn */
	T = (r3 & r3) == 0;  /* 0C063922 tst Rm,Rn */
	{ u32 c_ = !T; r12 = r13; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C063A10u, 4); goto L_0C063A10; } UPD(0x0C063928u, 1); goto L_0C063928; }  /* 0C063924 bf/s */
L_0C063928: BLKS(0x0C063928u);
	r12 = 0xC0626E0u; UPD(0x0C06392Au, 1);  /* 0C063928 mov.l @(disp,pc),Rn */
	r10 = r13;  /* 0C06392A mov Rm,Rn */
	r9 = 0xC0404000u; UPD(0x0C06392Eu, 2);  /* 0C06392C mov.l @(disp,pc),Rn */
	r10 += 0x5u;  /* 0C06392E add #imm,Rn */
	r4 = 0xC173014u; UPD(0x0C063932u, 2);  /* 0C063930 mov.l @(disp,pc),Rn */
	r5 = r10;  /* 0C063932 mov Rm,Rn */
	r6 = 0x1u;  /* 0C063934 mov #imm,Rn */
	IF(0x0C063936u); { u32 t_ = r12; PR = 0x0C06393Au; r7 = r9; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C06393Au); }  /* 0C063936 jsr @Rn */
L_0C06393A: BLKS(0x0C06393Au);
	r5 = r10;  /* 0C06393A mov Rm,Rn */
	r4 = 0xC173018u; UPD(0x0C06393Eu, 2);  /* 0C06393C mov.l @(disp,pc),Rn */
	r6 = 0x5u;  /* 0C06393E mov #imm,Rn */
	IF(0x0C063940u); { u32 t_ = r12; PR = 0x0C063944u; r7 = r9; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C063944u); }  /* 0C063940 jsr @Rn */
L_0C063944: BLKS(0x0C063944u);
	r3 = R32(r14 + 0x4u); UPD(0x0C063946u, 1);  /* 0C063944 mov.l @(disp,Rm),Rn */
	r11 = (u32)(s32)(s16)r10;  /* 0C063946 exts.w Rm,Rn */
	r8 = 0x264u; UPD(0x0C06394Au, 2);  /* 0C063948 mov.w @(disp,pc),Rn */
	r5 = r11;  /* 0C06394A mov Rm,Rn */
	r8 += r3;  /* 0C06394C add Rm,Rn */
	r8 += 0x2u;  /* 0C06394E add #imm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r8); r8 += 1; r0 = v_; } UPD(0x0C063952u, 4);  /* 0C063950 mov.b @Rm+,Rn */
	r6 = 0x4u;  /* 0C063952 mov #imm,Rn */
	r13 = 0x80808000u; UPD(0x0C063956u, 2);  /* 0C063954 mov.l @(disp,pc),Rn */
	r0 &= 0x3u;  /* 0C063956 and #imm,r0 */
	r10 = 0xC17303Cu; UPD(0x0C06395Au, 2);  /* 0C063958 mov.l @(disp,pc),Rn */
	IF(0x0C06395Au); r0 <<= 2;  /* 0C06395A shll2 Rn */
	r7 = r13;  /* 0C06395C mov Rm,Rn */
	IF(0x0C06395Eu); { u32 t_ = r12; PR = 0x0C063962u; IF(0x0C063960u); r4 = R32(r0 + r10); /* slot mov.l @(r0,Rm),Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C063962u); }  /* 0C06395E jsr @Rn */
L_0C063962: BLKS(0x0C063962u);
	r0 = (u32)(s32)(s8)R8(r8); UPD(0x0C063964u, 1);  /* 0C063962 mov.b @Rm,Rn */
	r7 = r13;  /* 0C063964 mov Rm,Rn */
	r0 &= 0x3u;  /* 0C063966 and #imm,r0 */
	IF(0x0C063968u); r0 <<= 2;  /* 0C063968 shll2 Rn */
	IF(0x0C06396Au); r4 = R32(r0 + r10); UPD(0x0C06396Cu, 4);  /* 0C06396A mov.l @(r0,Rm),Rn */
	r5 = r11;  /* 0C06396C mov Rm,Rn */
	IF(0x0C06396Eu); { u32 t_ = r12; PR = 0x0C063972u; r6 = 0x8u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C063972u); }  /* 0C06396E jsr @Rn */
L_0C063972: BLKS(0x0C063972u);
	r0 = R32(r14 + 0x18u); UPD(0x0C063974u, 1);  /* 0C063972 mov.l @(disp,Rm),Rn */
	r13 = 0x1u;  /* 0C063974 mov #imm,Rn */
	r1 = R32(r14); UPD(0x0C063978u, 2);  /* 0C063976 mov.l @Rm,Rn */
	r2 = 0x2A0u; UPD(0x0C06397Au, 1);  /* 0C063978 mov.w @(disp,pc),Rn */
	r1 += 0x1u;  /* 0C06397A add #imm,Rn */
	r0 += r2;  /* 0C06397C add Rm,Rn */
	W32(r14 + 0x18u, r0); UPD(0x0C063980u, 3);  /* 0C06397E mov.l Rm,@(disp,Rn) */
	T = (s32)r1 > (s32)r13;  /* 0C063980 cmp/gt Rm,Rn */
	{ u32 c_ = T; W32(r14, r1); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C06398Au, 4); goto L_0C06398A; } UPD(0x0C063986u, 1); goto L_0C063986; }  /* 0C063982 bt/s */
L_0C063986: BLKS(0x0C063986u);
	{ IF(0x0C063988u); ; /* slot nop */ UPD(0x0C06380Cu, 3); goto L_0C06380C; }  /* 0C063986 bra */
L_0C06398A: BLKS(0x0C06398Au);
	r13 = 0x4040C000u; UPD(0x0C06398Cu, 1);  /* 0C06398A mov.l @(disp,pc),Rn */
	r5 = 0x15u;  /* 0C06398C mov #imm,Rn */
	r4 = 0xC173024u; UPD(0x0C063990u, 2);  /* 0C06398E mov.l @(disp,pc),Rn */
	r6 = 0x1u;  /* 0C063990 mov #imm,Rn */
	IF(0x0C063992u); { u32 t_ = r12; PR = 0x0C063996u; r7 = r13; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C063996u); }  /* 0C063992 jsr @Rn */
L_0C063996: BLKS(0x0C063996u);
	r4 = 0xC173028u; UPD(0x0C063998u, 1);  /* 0C063996 mov.l @(disp,pc),Rn */
	r5 = 0x14u;  /* 0C063998 mov #imm,Rn */
	r6 = 0x1u;  /* 0C06399A mov #imm,Rn */
	IF(0x0C06399Cu); { u32 t_ = r12; PR = 0x0C0639A0u; r7 = r13; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C0639A0u); }  /* 0C06399C jsr @Rn */
L_0C0639A0: BLKS(0x0C0639A0u);
	r4 = 0xC29D1D8u; UPD(0x0C0639A2u, 1);  /* 0C0639A0 mov.l @(disp,pc),Rn */
	r8 = 0x27Cu; UPD(0x0C0639A4u, 1);  /* 0C0639A2 mov.w @(disp,pc),Rn */
	r8 += r4;  /* 0C0639A4 add Rm,Rn */
	r12 = R32(r4 + 0x10u); UPD(0x0C0639A8u, 2);  /* 0C0639A6 mov.l @(disp,Rm),Rn */
	r6 = R32(r8 + 0x34u); UPD(0x0C0639AAu, 1);  /* 0C0639A8 mov.l @(disp,Rm),Rn */
	r12 -= r6;  /* 0C0639AA sub Rm,Rn */
	r5 = (r12 >> 16) | (r12 << 16);  /* 0C0639AC swap.w Rm,Rn */
	r4 = (u32)(s32)(s16)r5;  /* 0C0639AE exts.w Rm,Rn */
	IF(0x0C0639B0u); T = (s32)r4 >= 0;  /* 0C0639B0 cmp/pz Rn */
	if (!T) { UPD(0x0C063A00u, 7); goto L_0C063A00; }  /* 0C0639B2 bf */
L_0C0639B4: BLKS(0x0C0639B4u);
	r9 = 0xC0623C0u; UPD(0x0C0639B6u, 1);  /* 0C0639B4 mov.l @(disp,pc),Rn */
	r5 = 0x15u;  /* 0C0639B6 mov #imm,Rn */
	IF(0x0C0639B8u); { u32 t_ = r9; PR = 0x0C0639BCu; r6 = 0x3u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0623C0, 0x0C0623C0u, 0x0C0639BCu); }  /* 0C0639B8 jsr @Rn */
L_0C0639BC: BLKS(0x0C0639BCu);
	r2 = 0xC29D1D8u; UPD(0x0C0639BEu, 1);  /* 0C0639BC mov.l @(disp,pc),Rn */
	r1 = R32(r8 + 0x38u); UPD(0x0C0639C0u, 1);  /* 0C0639BE mov.l @(disp,Rm),Rn */
	r7 = R32(r2 + 0x14u); UPD(0x0C0639C2u, 1);  /* 0C0639C0 mov.l @(disp,Rm),Rn */
	r7 -= r1;  /* 0C0639C2 sub Rm,Rn */
	r8 = (r7 >> 16) | (r7 << 16);  /* 0C0639C4 swap.w Rm,Rn */
	r4 = (u32)(s32)(s16)r8;  /* 0C0639C6 exts.w Rm,Rn */
	IF(0x0C0639C8u); T = (s32)r4 >= 0;  /* 0C0639C8 cmp/pz Rn */
	if (!T) { UPD(0x0C0639F0u, 7); goto L_0C0639F0; }  /* 0C0639CA bf */
L_0C0639CC: BLKS(0x0C0639CCu);
	r5 = 0x14u;  /* 0C0639CC mov #imm,Rn */
	r6 = 0x3u;  /* 0C0639CE mov #imm,Rn */
	r0 = r9;  /* 0C0639D0 mov Rm,Rn */
	r14 += 0x1Cu;  /* 0C0639D2 add #imm,Rn */
	r15 = r14;  /* 0C0639D4 mov Rm,Rn */
	IF(0x0C0639D6u); PR = R32(r15); r15 += 4; UPD(0x0C0639D8u, 6);  /* 0C0639D6 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0639DAu, 1);  /* 0C0639D8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0639DCu, 1);  /* 0C0639DA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0639DEu, 1);  /* 0C0639DC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0639E0u, 1);  /* 0C0639DE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0639E2u, 1);  /* 0C0639E0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0639E4u, 1);  /* 0C0639E2 mov.l @Rm+,Rn */
	IF(0x0C0639E4u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0623C0u: TAIL(blk_f_0C0623C0); default: JUMPD(tv_); } }  /* 0C0639E4 jmp @Rn */
L_0C0639F0: BLKS(0x0C0639F0u);
	{ r4 = 0u - r4; /* slot neg Rm,Rn */ UPD(0x0C0639CCu, 3); goto L_0C0639CC; }  /* 0C0639F0 bra */
L_0C063A00: BLKS(0x0C063A00u);
	{ r4 = 0u - r4; /* slot neg Rm,Rn */ UPD(0x0C0639B4u, 3); goto L_0C0639B4; }  /* 0C063A00 bra */
L_0C063A10: BLKS(0x0C063A10u);
	r10 = 0xC0626E0u; UPD(0x0C063A12u, 1);  /* 0C063A10 mov.l @(disp,pc),Rn */
	r12 += 0x6u;  /* 0C063A12 add #imm,Rn */
	r7 = 0xC0404000u; UPD(0x0C063A16u, 2);  /* 0C063A14 mov.l @(disp,pc),Rn */
	r5 = r12;  /* 0C063A16 mov Rm,Rn */
	r4 = 0xC172FF8u; UPD(0x0C063A1Au, 2);  /* 0C063A18 mov.l @(disp,pc),Rn */
	IF(0x0C063A1Au); { u32 t_ = r10; PR = 0x0C063A1Eu; r6 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C063A1Eu); }  /* 0C063A1A jsr @Rn */
L_0C063A1E: BLKS(0x0C063A1Eu);
	r7 = R32(r14 + 0x4u); UPD(0x0C063A20u, 1);  /* 0C063A1E mov.l @(disp,Rm),Rn */
	r4 = 0x4u;  /* 0C063A20 mov #imm,Rn */
	r6 = R32(r7 + 0x8u); UPD(0x0C063A24u, 2);  /* 0C063A22 mov.l @(disp,Rm),Rn */
	r5 = r12;  /* 0C063A24 mov Rm,Rn */
	IF(0x0C063A26u); ARG0(0x464Du); { s32 s_ = (s32)r4; if (s_ >= 0) r6 <<= (s_ & 31); else if ((s_ & 31) == 0) r6 = 0; else r6 >>= ((~s_ & 31) + 1); }  /* 0C063A26 shld Rm,Rn */
	r6 += r9;  /* 0C063A28 add Rm,Rn */
	r9 = 0xC06E0E0u; UPD(0x0C063A2Cu, 4);  /* 0C063A2A mov.l @(disp,pc),Rn */
	r4 = R32(r6 + 0xCu); UPD(0x0C063A2Eu, 1);  /* 0C063A2C mov.l @(disp,Rm),Rn */
	r7 = 0x80808000u; UPD(0x0C063A30u, 1);  /* 0C063A2E mov.l @(disp,pc),Rn */
	IF(0x0C063A30u); { u32 t_ = r9; PR = 0x0C063A34u; r6 = 0x6u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C06E0E0, 0x0C06E0E0u, 0x0C063A34u); }  /* 0C063A30 jsr @Rn */
L_0C063A34: BLKS(0x0C063A34u);
	{ IF(0x0C063A36u); ; /* slot nop */ UPD(0x0C063928u, 3); goto L_0C063928; }  /* 0C063A34 bra */
L_0C063A90: BLKS(0x0C063A90u);
	r11 = 0xC0626E0u; UPD(0x0C063A92u, 1);  /* 0C063A90 mov.l @(disp,pc),Rn */
	r10 += 0x7u;  /* 0C063A92 add #imm,Rn */
	r4 = 0xC173008u; UPD(0x0C063A96u, 2);  /* 0C063A94 mov.l @(disp,pc),Rn */
	r5 = r10;  /* 0C063A96 mov Rm,Rn */
	r7 = 0xC0404000u; UPD(0x0C063A9Au, 2);  /* 0C063A98 mov.l @(disp,pc),Rn */
	IF(0x0C063A9Au); { u32 t_ = r11; PR = 0x0C063A9Eu; r6 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C063A9Eu); }  /* 0C063A9A jsr @Rn */
L_0C063A9E: BLKS(0x0C063A9Eu);
	r8 = R32(r14 + 0x4u); UPD(0x0C063AA0u, 1);  /* 0C063A9E mov.l @(disp,Rm),Rn */
	r2 = 0x4u;  /* 0C063AA0 mov #imm,Rn */
	r0 = R32(r8 + 0x8u); UPD(0x0C063AA4u, 2);  /* 0C063AA2 mov.l @(disp,Rm),Rn */
	r5 = r10;  /* 0C063AA4 mov Rm,Rn */
	IF(0x0C063AA6u); ARG0(0x402Du); { s32 s_ = (s32)r2; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C063AA6 shld Rm,Rn */
	r12 = 0xC06E0E0u; UPD(0x0C063AAAu, 3);  /* 0C063AA8 mov.l @(disp,pc),Rn */
	r0 += r9;  /* 0C063AAA add Rm,Rn */
	r4 = R32(r0 + 0x8u); UPD(0x0C063AAEu, 2);  /* 0C063AAC mov.l @(disp,Rm),Rn */
	r7 = 0x80808000u; UPD(0x0C063AB0u, 1);  /* 0C063AAE mov.l @(disp,pc),Rn */
	IF(0x0C063AB0u); { u32 t_ = r12; PR = 0x0C063AB4u; r6 = 0x6u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C06E0E0, 0x0C06E0E0u, 0x0C063AB4u); }  /* 0C063AB0 jsr @Rn */
L_0C063AB4: BLKS(0x0C063AB4u);
	r1 = R32(r14 + 0x4u); UPD(0x0C063AB6u, 1);  /* 0C063AB4 mov.l @(disp,Rm),Rn */
	{ r2 = R32(r1 + 0x8u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C06391Au, 3); goto L_0C06391A; }  /* 0C063AB6 bra */
L_0C063AC0: BLKS(0x0C063AC0u);
	r11 = 0xC0626E0u; UPD(0x0C063AC2u, 1);  /* 0C063AC0 mov.l @(disp,pc),Rn */
	r10 += 0x8u;  /* 0C063AC2 add #imm,Rn */
	r4 = 0xC173000u; UPD(0x0C063AC6u, 2);  /* 0C063AC4 mov.l @(disp,pc),Rn */
	r5 = r10;  /* 0C063AC6 mov Rm,Rn */
	r7 = 0xC0404000u; UPD(0x0C063ACAu, 2);  /* 0C063AC8 mov.l @(disp,pc),Rn */
	IF(0x0C063ACAu); { u32 t_ = r11; PR = 0x0C063ACEu; r6 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C063ACEu); }  /* 0C063ACA jsr @Rn */
L_0C063ACE: BLKS(0x0C063ACEu);
	r5 = R32(r14 + 0x4u); UPD(0x0C063AD0u, 1);  /* 0C063ACE mov.l @(disp,Rm),Rn */
	r3 = 0x4u;  /* 0C063AD0 mov #imm,Rn */
	r8 = R32(r5 + 0x8u); UPD(0x0C063AD4u, 2);  /* 0C063AD2 mov.l @(disp,Rm),Rn */
	r6 = 0x6u;  /* 0C063AD4 mov #imm,Rn */
	IF(0x0C063AD6u); ARG0(0x483Du); { s32 s_ = (s32)r3; if (s_ >= 0) r8 <<= (s_ & 31); else if ((s_ & 31) == 0) r8 = 0; else r8 >>= ((~s_ & 31) + 1); }  /* 0C063AD6 shld Rm,Rn */
	r12 = 0xC06E0E0u; UPD(0x0C063ADAu, 3);  /* 0C063AD8 mov.l @(disp,pc),Rn */
	r8 += r9;  /* 0C063ADA add Rm,Rn */
	r4 = R32(r8 + 0x4u); UPD(0x0C063ADEu, 2);  /* 0C063ADC mov.l @(disp,Rm),Rn */
	r7 = 0x80808000u; UPD(0x0C063AE0u, 1);  /* 0C063ADE mov.l @(disp,pc),Rn */
	IF(0x0C063AE0u); { u32 t_ = r12; PR = 0x0C063AE4u; r5 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C06E0E0, 0x0C06E0E0u, 0x0C063AE4u); }  /* 0C063AE0 jsr @Rn */
L_0C063AE4: BLKS(0x0C063AE4u);
	r11 = R32(r14 + 0x4u); UPD(0x0C063AE6u, 1);  /* 0C063AE4 mov.l @(disp,Rm),Rn */
	{ r2 = R32(r11 + 0x8u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C063906u, 3); goto L_0C063906; }  /* 0C063AE6 bra */
L_0C063AF0: BLKS(0x0C063AF0u);
	r3 = 0xC0626E0u; UPD(0x0C063AF2u, 1);  /* 0C063AF0 mov.l @(disp,pc),Rn */
	r5 = r9;  /* 0C063AF2 mov Rm,Rn */
	r7 = 0xC0404000u; UPD(0x0C063AF6u, 2);  /* 0C063AF4 mov.l @(disp,pc),Rn */
	r4 = 0xC172FD0u; UPD(0x0C063AF8u, 1);  /* 0C063AF6 mov.l @(disp,pc),Rn */
	IF(0x0C063AF8u); { u32 t_ = r3; PR = 0x0C063AFCu; r6 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C063AFCu); }  /* 0C063AF8 jsr @Rn */
L_0C063AFC: BLKS(0x0C063AFCu);
	r12 = R32(r14 + 0x4u); UPD(0x0C063AFEu, 1);  /* 0C063AFC mov.l @(disp,Rm),Rn */
	r5 = r9;  /* 0C063AFE mov Rm,Rn */
	r12 += 0x21u;  /* 0C063B00 add #imm,Rn */
	r10 = 0xC062490u; UPD(0x0C063B04u, 3);  /* 0C063B02 mov.l @(disp,pc),Rn */
	r6 = 0x7u;  /* 0C063B04 mov #imm,Rn */
	r4 = (u32)(s32)(s8)R8(r12); UPD(0x0C063B08u, 2);  /* 0C063B06 mov.b @Rm,Rn */
	r8 = 0xC0626E0u; UPD(0x0C063B0Au, 1);  /* 0C063B08 mov.l @(disp,pc),Rn */
	IF(0x0C063B0Au); { u32 t_ = r10; PR = 0x0C063B0Eu; r4 += 0x1u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062490, 0x0C062490u, 0x0C063B0Eu); }  /* 0C063B0A jsr @Rn */
L_0C063B0E: BLKS(0x0C063B0Eu);
	r4 = 0xC173010u; UPD(0x0C063B10u, 1);  /* 0C063B0E mov.l @(disp,pc),Rn */
	r5 = r9;  /* 0C063B10 mov Rm,Rn */
	r7 = 0xC0404000u; UPD(0x0C063B14u, 2);  /* 0C063B12 mov.l @(disp,pc),Rn */
	IF(0x0C063B14u); { u32 t_ = r8; PR = 0x0C063B18u; r6 = 0x9u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C063B18u); }  /* 0C063B14 jsr @Rn */
L_0C063B18: BLKS(0x0C063B18u);
	r4 = (u32)(s32)(s8)R8(r11); UPD(0x0C063B1Au, 1);  /* 0C063B18 mov.b @Rm,Rn */
	r5 = r9;  /* 0C063B1A mov Rm,Rn */
	r11 = 0xC0626E0u; UPD(0x0C063B1Eu, 2);  /* 0C063B1C mov.l @(disp,pc),Rn */
	IF(0x0C063B1Eu); { u32 t_ = r10; PR = 0x0C063B22u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062490, 0x0C062490u, 0x0C063B22u); }  /* 0C063B1E jsr @Rn */
L_0C063B22: BLKS(0x0C063B22u);
	r9 = (u32)(s32)(s8)R8(r12); UPD(0x0C063B24u, 1);  /* 0C063B22 mov.b @Rm,Rn */
	r10 = r13;  /* 0C063B24 mov Rm,Rn */
	r10 += 0xCu;  /* 0C063B26 add #imm,Rn */
	r4 = 0xC172FE8u; UPD(0x0C063B2Au, 3);  /* 0C063B28 mov.l @(disp,pc),Rn */
	r5 = r10;  /* 0C063B2A mov Rm,Rn */
	r7 = 0xC0404000u; UPD(0x0C063B2Eu, 2);  /* 0C063B2C mov.l @(disp,pc),Rn */
	IF(0x0C063B2Eu); { u32 t_ = r11; PR = 0x0C063B32u; r6 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C063B32u); }  /* 0C063B2E jsr @Rn */
L_0C063B32: BLKS(0x0C063B32u);
	r12 = 0xC0626E0u; UPD(0x0C063B34u, 1);  /* 0C063B32 mov.l @(disp,pc),Rn */
	r11 = r13;  /* 0C063B34 mov Rm,Rn */
	r11 += 0xBu;  /* 0C063B36 add #imm,Rn */
	r4 = 0xC172FF0u; UPD(0x0C063B3Au, 3);  /* 0C063B38 mov.l @(disp,pc),Rn */
	r5 = r11;  /* 0C063B3A mov Rm,Rn */
	r7 = 0xC0404000u; UPD(0x0C063B3Eu, 2);  /* 0C063B3C mov.l @(disp,pc),Rn */
	IF(0x0C063B3Eu); { u32 t_ = r12; PR = 0x0C063B42u; r6 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C063B42u); }  /* 0C063B3E jsr @Rn */
L_0C063B42: BLKS(0x0C063B42u);
	r1 = 0xC0626E0u; UPD(0x0C063B44u, 1);  /* 0C063B42 mov.l @(disp,pc),Rn */
	r12 = r13;  /* 0C063B44 mov Rm,Rn */
	r12 += 0xAu;  /* 0C063B46 add #imm,Rn */
	r4 = 0xC172FD8u; UPD(0x0C063B4Au, 3);  /* 0C063B48 mov.l @(disp,pc),Rn */
	r5 = r12;  /* 0C063B4A mov Rm,Rn */
	r7 = 0xC0404000u; UPD(0x0C063B4Eu, 2);  /* 0C063B4C mov.l @(disp,pc),Rn */
	IF(0x0C063B4Eu); { u32 t_ = r1; PR = 0x0C063B52u; r6 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C063B52u); }  /* 0C063B4E jsr @Rn */
L_0C063B52: BLKS(0x0C063B52u);
	r2 = 0xC0626E0u; UPD(0x0C063B54u, 1);  /* 0C063B52 mov.l @(disp,pc),Rn */
	r3 = r13;  /* 0C063B54 mov Rm,Rn */
	r3 += 0x9u;  /* 0C063B56 add #imm,Rn */
	r7 = 0xC0404000u; UPD(0x0C063B5Au, 3);  /* 0C063B58 mov.l @(disp,pc),Rn */
	r5 = r3;  /* 0C063B5A mov Rm,Rn */
	W32(r14 + 0x8u, r3); UPD(0x0C063B5Eu, 2);  /* 0C063B5C mov.l Rm,@(disp,Rn) */
	r4 = 0xC172FE0u; UPD(0x0C063B60u, 1);  /* 0C063B5E mov.l @(disp,pc),Rn */
	IF(0x0C063B60u); { u32 t_ = r2; PR = 0x0C063B64u; r6 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C063B64u); }  /* 0C063B60 jsr @Rn */
L_0C063B64: BLKS(0x0C063B64u);
	r7 = R32(r14); UPD(0x0C063B66u, 1);  /* 0C063B64 mov.l @Rm,Rn */
	r5 = r10;  /* 0C063B66 mov Rm,Rn */
	r8 = 0xA8u; UPD(0x0C063B6Au, 2);  /* 0C063B68 mov.w @(disp,pc),Rn */
	r6 = 0x6u;  /* 0C063B6A mov #imm,Rn */
	IF(0x0C063B6Cu); MACL = r7 * r8;  /* 0C063B6C mul.l Rm,Rn */
	r4 = 0xC29D1D8u; UPD(0x0C063B70u, 4);  /* 0C063B6E mov.l @(disp,pc),Rn */
	IF(0x0C063B70u); r8 = MACL;  /* 0C063B70 sts macl,Rn */
	r8 += r9;  /* 0C063B72 add Rm,Rn */
	r9 = 0xC062400u; UPD(0x0C063B76u, 3);  /* 0C063B74 mov.l @(disp,pc),Rn */
	IF(0x0C063B76u); r8 <<= 2;  /* 0C063B76 shll2 Rn */
	r0 = 0xA4u; UPD(0x0C063B7Au, 2);  /* 0C063B78 mov.w @(disp,pc),Rn */
	r8 += r4;  /* 0C063B7A add Rm,Rn */
	IF(0x0C063B7Cu); { u32 t_ = r9; PR = 0x0C063B80u; IF(0x0C063B7Eu); r4 = (u32)(s32)(s16)R16(r0 + r8); /* slot mov.w @(r0,Rm),Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C062400, 0x0C062400u, 0x0C063B80u); }  /* 0C063B7C jsr @Rn */
L_0C063B80: BLKS(0x0C063B80u);
	r0 = 0xE4u; UPD(0x0C063B82u, 1);  /* 0C063B80 mov.w @(disp,pc),Rn */
	r5 = r11;  /* 0C063B82 mov Rm,Rn */
	IF(0x0C063B84u); r4 = (u32)(s32)(s16)R16(r0 + r8); UPD(0x0C063B86u, 2);  /* 0C063B84 mov.w @(r0,Rm),Rn */
	IF(0x0C063B86u); { u32 t_ = r9; PR = 0x0C063B8Au; r6 = 0x6u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062400, 0x0C062400u, 0x0C063B8Au); }  /* 0C063B86 jsr @Rn */
L_0C063B8A: BLKS(0x0C063B8Au);
	r0 = R32(r8 + 0x24u); UPD(0x0C063B8Cu, 1);  /* 0C063B8A mov.l @(disp,Rm),Rn */
	r5 = r12;  /* 0C063B8C mov Rm,Rn */
	r1 = (r0 >> 16) | (r0 << 16);  /* 0C063B8E swap.w Rm,Rn */
	r4 = (u32)(s32)(s16)r1;  /* 0C063B90 exts.w Rm,Rn */
	r6 = 0x6u;  /* 0C063B92 mov #imm,Rn */
	IF(0x0C063B94u); { u32 t_ = r9; PR = 0x0C063B98u; r8 += 0x64u; /* slot add #imm,Rn */ UPD(t_, 6); CALLP(t_, blk_f_0C062400, 0x0C062400u, 0x0C063B98u); }  /* 0C063B94 jsr @Rn */
L_0C063B98: BLKS(0x0C063B98u);
	r4 = (u32)(s32)(s16)R16(r8); UPD(0x0C063B9Au, 1);  /* 0C063B98 mov.w @Rm,Rn */
	r6 = 0x6u;  /* 0C063B9A mov #imm,Rn */
	IF(0x0C063B9Cu); { u32 t_ = r9; PR = 0x0C063BA0u; r5 = R32(r14 + 0x8u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C062400, 0x0C062400u, 0x0C063BA0u); }  /* 0C063B9C jsr @Rn */
L_0C063BA0: BLKS(0x0C063BA0u);
	{ r0 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0638E2u, 3); goto L_0C0638E2; }  /* 0C063BA0 bra */
L_0C063BB0: BLKS(0x0C063BB0u);
	r11 = 0x0u;  /* 0C063BB0 mov #imm,Rn */
	r12 = R32(r14 + 0x10u); UPD(0x0C063BB4u, 2);  /* 0C063BB2 mov.l @(disp,Rm),Rn */
	r4 += 0x5u;  /* 0C063BB4 add #imm,Rn */
	r9 = R32(r14 + 0x14u); UPD(0x0C063BB8u, 2);  /* 0C063BB6 mov.l @(disp,Rm),Rn */
	r12 += 0x5u;  /* 0C063BB8 add #imm,Rn */
	r9 += 0x5u;  /* 0C063BBA add #imm,Rn */
	W32(r14 + 0xCu, r4); UPD(0x0C063BBEu, 3);  /* 0C063BBC mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x10u, r12); UPD(0x0C063BC0u, 1);  /* 0C063BBE mov.l Rm,@(disp,Rn) */
	{ W32(r14 + 0x14u, r9); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0638C0u, 3); goto L_0C0638C0; }  /* 0C063BC0 bra */
L_0C063BD0: BLKS(0x0C063BD0u);
	r12 = 0xC0626E0u; UPD(0x0C063BD2u, 1);  /* 0C063BD0 mov.l @(disp,pc),Rn */
	r8 -= r11;  /* 0C063BD2 sub Rm,Rn */
	r6 = R32(r14 + 0x10u); UPD(0x0C063BD6u, 2);  /* 0C063BD4 mov.l @(disp,Rm),Rn */
	r8 += 0x10u;  /* 0C063BD6 add #imm,Rn */
	r5 = r8;  /* 0C063BD8 mov Rm,Rn */
	r4 = 0xC173020u; UPD(0x0C063BDCu, 3);  /* 0C063BDA mov.l @(disp,pc),Rn */
	r7 = 0x80808000u; UPD(0x0C063BDEu, 1);  /* 0C063BDC mov.l @(disp,pc),Rn */
	IF(0x0C063BDEu); { u32 t_ = r12; PR = 0x0C063BE2u; r6 += 0x9u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C063BE2u); }  /* 0C063BDE jsr @Rn */
L_0C063BE2: BLKS(0x0C063BE2u);
	r5 = r8;  /* 0C063BE2 mov Rm,Rn */
	r12 = R32(r14 + 0x10u); UPD(0x0C063BE6u, 2);  /* 0C063BE4 mov.l @(disp,Rm),Rn */
	r8 = 0xC0623C0u; UPD(0x0C063BE8u, 1);  /* 0C063BE6 mov.l @(disp,pc),Rn */
	r12 += 0x5u;  /* 0C063BE8 add #imm,Rn */
	r4 = (u32)(s32)(s16)R16(r10); UPD(0x0C063BECu, 2);  /* 0C063BEA mov.w @Rm,Rn */
	IF(0x0C063BECu); { u32 t_ = r8; PR = 0x0C063BF0u; r6 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0623C0, 0x0C0623C0u, 0x0C063BF0u); }  /* 0C063BEC jsr @Rn */
L_0C063BF0: BLKS(0x0C063BF0u);
	r2 = r11;  /* 0C063BF0 mov Rm,Rn */
	r2 += 0x1u;  /* 0C063BF2 add #imm,Rn */
	r11 = (u32)(s32)(s8)r2;  /* 0C063BF4 exts.b Rm,Rn */
	r0 = r11;  /* 0C063BF6 mov Rm,Rn */
	T = r0 == 0x3u;  /* 0C063BF8 cmp/eq #imm,r0 */
	{ u32 c_ = T; r5 = R32(r14 + 0xCu); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C063C80u, 8); goto L_0C063C80; } UPD(0x0C063BFEu, 1); goto L_0C063BFE; }  /* 0C063BFA bt/s */
L_0C063BFE: BLKS(0x0C063BFEu);
	r0 = (u32)(s32)(s16)R16(r10); UPD(0x0C063C00u, 1);  /* 0C063BFE mov.w @Rm,Rn */
	r7 = 0x0u;  /* 0C063C00 mov #imm,Rn */
	r6 = (u32)(s32)(s16)R16(r9); UPD(0x0C063C04u, 2);  /* 0C063C02 mov.w @Rm,Rn */
	r0 += 0x1u;  /* 0C063C04 add #imm,Rn */
	T = r0 == r6;  /* 0C063C06 cmp/eq Rm,Rn */
	{ u32 c_ = T; r6 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C063C60u, 5); goto L_0C063C60; } goto L_0C063C0C; }  /* 0C063C08 bt/s */
L_0C063C0C: BLKS(0x0C063C0Cu);
	r8 = r6;  /* 0C063C0C mov Rm,Rn */
	UPD(0x0C063C0Eu, 2);
L_0C063C0E: BLKS(0x0C063C0Eu);
	r8 += r10;  /* 0C063C0E add Rm,Rn */
	r12 = 0xC0623C0u; UPD(0x0C063C12u, 2);  /* 0C063C10 mov.l @(disp,pc),Rn */
	r10 = r11;  /* 0C063C12 mov Rm,Rn */
	r5 = r13;  /* 0C063C14 mov Rm,Rn */
	r5 -= r11;  /* 0C063C16 sub Rm,Rn */
	r10 += 0x1u;  /* 0C063C18 add #imm,Rn */
	r4 = (u32)(s32)(s16)R16(r8); UPD(0x0C063C1Cu, 5);  /* 0C063C1A mov.w @Rm,Rn */
	r5 += 0x10u;  /* 0C063C1C add #imm,Rn */
	r6 = R32(r14 + 0xCu); UPD(0x0C063C20u, 2);  /* 0C063C1E mov.l @(disp,Rm),Rn */
	IF(0x0C063C20u); { u32 t_ = r12; PR = 0x0C063C24u; r11 = (u32)(s32)(s8)r10; /* slot exts.b Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0623C0, 0x0C0623C0u, 0x0C063C24u); }  /* 0C063C20 jsr @Rn */
L_0C063C24: BLKS(0x0C063C24u);
	r0 = r11;  /* 0C063C24 mov Rm,Rn */
	T = r0 == 0x3u;  /* 0C063C26 cmp/eq #imm,r0 */
	{ u32 c_ = T; r5 = R32(r14 + 0xCu); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C063C40u, 5); goto L_0C063C40; } UPD(0x0C063C2Cu, 1); goto L_0C063C2C; }  /* 0C063C28 bt/s */
L_0C063C2C: BLKS(0x0C063C2Cu);
	r10 = r8;  /* 0C063C2C mov Rm,Rn */
	{ r10 += 0x2u; /* slot add #imm,Rn */ UPD(0x0C0638C0u, 4); goto L_0C0638C0; }  /* 0C063C2E bra */
L_0C063C40: BLKS(0x0C063C40u);
	r11 = 0x0u;  /* 0C063C40 mov #imm,Rn */
	r3 = R32(r14 + 0x10u); UPD(0x0C063C44u, 2);  /* 0C063C42 mov.l @(disp,Rm),Rn */
	r5 += 0x5u;  /* 0C063C44 add #imm,Rn */
	r7 = R32(r14 + 0x14u); UPD(0x0C063C48u, 2);  /* 0C063C46 mov.l @(disp,Rm),Rn */
	r3 += 0x5u;  /* 0C063C48 add #imm,Rn */
	r7 += 0x5u;  /* 0C063C4A add #imm,Rn */
	W32(r14 + 0xCu, r5); UPD(0x0C063C4Eu, 3);  /* 0C063C4C mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x10u, r3); UPD(0x0C063C50u, 1);  /* 0C063C4E mov.l Rm,@(disp,Rn) */
	{ W32(r14 + 0x14u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C063C2Cu, 3); goto L_0C063C2C; }  /* 0C063C50 bra */
L_0C063C60: BLKS(0x0C063C60u);
	r3 = r10;  /* 0C063C60 mov Rm,Rn */
	IF(0x0C063C62u); ;  /* 0C063C62 nop */
	UPD(0x0C063C64u, 2);
L_0C063C64: BLKS(0x0C063C64u);
	SPIN_SAVE(0C063C64);
	r3 += 0x2u;  /* 0C063C64 add #imm,Rn */
	r2 = r3;  /* 0C063C66 mov Rm,Rn */
	r8 = r7;  /* 0C063C68 mov Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)RS16(0C063C64, r2); r2 += 2; r4 = v_; } UPD(0x0C063C6Cu, 4);  /* 0C063C6A mov.w @Rm+,Rn */
	r8 += 0x1u;  /* 0C063C6C add #imm,Rn */
	r7 = (u32)(s32)(s16)r8;  /* 0C063C6E exts.w Rm,Rn */
	r9 = (u32)(s32)(s16)RS16(0C063C64, r2); UPD(0x0C063C72u, 3);  /* 0C063C70 mov.w @Rm,Rn */
	r6 = r7;  /* 0C063C72 mov Rm,Rn */
	r4 += 0x1u;  /* 0C063C74 add #imm,Rn */
	T = r4 == r9;  /* 0C063C76 cmp/eq Rm,Rn */
	{ u32 c_ = T; r6 += r6; /* slot add Rm,Rn */ if (c_) { SPIN_FFD(0C063C64, 13); UPD(0x0C063C64u, 6); goto L_0C063C64; } goto L_0C063C7C; }  /* 0C063C78 bt/s */
L_0C063C7C: BLKS(0x0C063C7Cu);
	{ r8 = r6; /* slot mov Rm,Rn */ UPD(0x0C063C0Eu, 4); goto L_0C063C0E; }  /* 0C063C7C bra */
L_0C063C80: BLKS(0x0C063C80u);
	r11 = 0x0u;  /* 0C063C80 mov #imm,Rn */
	r1 = R32(r14 + 0x14u); UPD(0x0C063C84u, 2);  /* 0C063C82 mov.l @(disp,Rm),Rn */
	r5 += 0x5u;  /* 0C063C84 add #imm,Rn */
	r1 += 0x5u;  /* 0C063C86 add #imm,Rn */
	W32(r14 + 0xCu, r5); UPD(0x0C063C8Au, 3);  /* 0C063C88 mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x10u, r12); UPD(0x0C063C8Cu, 1);  /* 0C063C8A mov.l Rm,@(disp,Rn) */
	{ W32(r14 + 0x14u, r1); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C063BFEu, 3); goto L_0C063BFE; }  /* 0C063C8C bra */
}

void blk_f_0C063C36(sh3_t *c)
{
	LOCALS;
	SPIN_VARS(0C063C64);
	goto L_0C063C36;
L_0C06380C: BLKS(0x0C06380Cu);
	r5 = 0xC17301Cu; UPD(0x0C06380Eu, 1);  /* 0C06380C mov.l @(disp,pc),Rn */
	r6 = 0x1u;  /* 0C06380E mov #imm,Rn */
	r0 = R32(r14); UPD(0x0C063812u, 2);  /* 0C063810 mov.l @Rm,Rn */
	IF(0x0C063812u); r13 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C063814u, 1);  /* 0C063812 mov.b @(r0,Rm),Rn */
	r2 = 0xC0626E0u; UPD(0x0C063816u, 1);  /* 0C063814 mov.l @(disp,pc),Rn */
	r8 = r13;  /* 0C063816 mov Rm,Rn */
	r8 += 0x13u;  /* 0C063818 add #imm,Rn */
	r4 = 0xC172FC0u; UPD(0x0C06381Cu, 3);  /* 0C06381A mov.l @(disp,pc),Rn */
	r7 = 0xC0404000u; UPD(0x0C06381Eu, 1);  /* 0C06381C mov.l @(disp,pc),Rn */
	IF(0x0C06381Eu); { u32 t_ = r2; PR = 0x0C063822u; r5 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C063822u); }  /* 0C06381E jsr @Rn */
L_0C063822: BLKS(0x0C063822u);
	r4 = R32(r14 + 0x18u); UPD(0x0C063824u, 1);  /* 0C063822 mov.l @(disp,Rm),Rn */
	r5 = r8;  /* 0C063824 mov Rm,Rn */
	r10 = 0xC29D1D8u; UPD(0x0C063828u, 2);  /* 0C063826 mov.l @(disp,pc),Rn */
	r6 = 0x6u;  /* 0C063828 mov #imm,Rn */
	r1 = 0xC062490u; UPD(0x0C06382Cu, 2);  /* 0C06382A mov.l @(disp,pc),Rn */
	r10 += r4;  /* 0C06382C add Rm,Rn */
	IF(0x0C06382Eu); { u32 t_ = r1; PR = 0x0C063832u; r4 = R32(r10 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C062490, 0x0C062490u, 0x0C063832u); }  /* 0C06382E jsr @Rn */
L_0C063832: BLKS(0x0C063832u);
	r12 = 0xC0626E0u; UPD(0x0C063834u, 1);  /* 0C063832 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFFFu;  /* 0C063834 add #imm,Rn */
	r11 = 0xC062490u; UPD(0x0C063838u, 2);  /* 0C063836 mov.l @(disp,pc),Rn */
	r5 = r8;  /* 0C063838 mov Rm,Rn */
	r4 = 0xC172FC4u; UPD(0x0C06383Cu, 2);  /* 0C06383A mov.l @(disp,pc),Rn */
	r7 = 0xC0404000u; UPD(0x0C06383Eu, 1);  /* 0C06383C mov.l @(disp,pc),Rn */
	IF(0x0C06383Eu); { u32 t_ = r12; PR = 0x0C063842u; r6 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C063842u); }  /* 0C06383E jsr @Rn */
L_0C063842: BLKS(0x0C063842u);
	r9 = 0xC0626E0u; UPD(0x0C063844u, 1);  /* 0C063842 mov.l @(disp,pc),Rn */
	r5 = r8;  /* 0C063844 mov Rm,Rn */
	r4 = R32(r10 + 0x8u); UPD(0x0C063848u, 2);  /* 0C063846 mov.l @(disp,Rm),Rn */
	IF(0x0C063848u); { u32 t_ = r11; PR = 0x0C06384Cu; r6 = 0x6u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062490, 0x0C062490u, 0x0C06384Cu); }  /* 0C063848 jsr @Rn */
L_0C06384C: BLKS(0x0C06384Cu);
	r8 += 0xFFFFFFFFu;  /* 0C06384C add #imm,Rn */
	r7 = 0xC0404000u; UPD(0x0C063850u, 2);  /* 0C06384E mov.l @(disp,pc),Rn */
	r5 = r8;  /* 0C063850 mov Rm,Rn */
	r4 = 0xC172FC8u; UPD(0x0C063854u, 2);  /* 0C063852 mov.l @(disp,pc),Rn */
	IF(0x0C063854u); { u32 t_ = r9; PR = 0x0C063858u; r6 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C063858u); }  /* 0C063854 jsr @Rn */
L_0C063858: BLKS(0x0C063858u);
	r7 = 0xC062490u; UPD(0x0C06385Au, 1);  /* 0C063858 mov.l @(disp,pc),Rn */
	r5 = r8;  /* 0C06385A mov Rm,Rn */
	r4 = R32(r10 + 0xCu); UPD(0x0C06385Eu, 2);  /* 0C06385C mov.l @(disp,Rm),Rn */
	IF(0x0C06385Eu); { u32 t_ = r7; PR = 0x0C063862u; r6 = 0x6u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062490, 0x0C062490u, 0x0C063862u); }  /* 0C06385E jsr @Rn */
L_0C063862: BLKS(0x0C063862u);
	r3 = 0xC0626E0u; UPD(0x0C063864u, 1);  /* 0C063862 mov.l @(disp,pc),Rn */
	r5 = r13;  /* 0C063864 mov Rm,Rn */
	r5 += 0x10u;  /* 0C063866 add #imm,Rn */
	r4 = 0xC172FCCu; UPD(0x0C06386Au, 3);  /* 0C063868 mov.l @(disp,pc),Rn */
	r7 = 0xC0404000u; UPD(0x0C06386Cu, 1);  /* 0C06386A mov.l @(disp,pc),Rn */
	IF(0x0C06386Cu); { u32 t_ = r3; PR = 0x0C063870u; r6 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C063870u); }  /* 0C06386C jsr @Rn */
L_0C063870: BLKS(0x0C063870u);
	r0 = 0x224u; UPD(0x0C063872u, 1);  /* 0C063870 mov.w @(disp,pc),Rn */
	r2 = 0x3u;  /* 0C063872 mov #imm,Rn */
	IF(0x0C063874u); r1 = R32(r0 + r10); UPD(0x0C063876u, 2);  /* 0C063874 mov.l @(r0,Rm),Rn */
	r0 = R32(r10 + 0x4u); UPD(0x0C063878u, 1);  /* 0C063876 mov.l @(disp,Rm),Rn */
	IF(0x0C063878u); ARG0(0x402Du); { s32 s_ = (s32)r2; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C063878 shld Rm,Rn */
	r0 += r1;  /* 0C06387A add Rm,Rn */
	r10 = R32(r0 + 0x4u); UPD(0x0C06387Eu, 3);  /* 0C06387C mov.l @(disp,Rm),Rn */
	r2 = (u32)(s32)(s16)R16(r10); UPD(0x0C063880u, 1);  /* 0C06387E mov.w @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C063880 tst Rm,Rn */
	{ u32 c_ = T; r11 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0638C8u, 4); goto L_0C0638C8; } goto L_0C063886; }  /* 0C063882 bt/s */
L_0C063886: BLKS(0x0C063886u);
	r6 = 0x5u;  /* 0C063886 mov #imm,Rn */
	W32(r14 + 0xCu, r6); UPD(0x0C06388Au, 3);  /* 0C063888 mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x10u, r11); UPD(0x0C06388Cu, 1);  /* 0C06388A mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x14u, r6); UPD(0x0C06388Eu, 1);  /* 0C06388C mov.l Rm,@(disp,Rn) */
	r9 = r10;  /* 0C06388E mov Rm,Rn */
	UPD(0x0C063890u, 1);
L_0C063890: BLKS(0x0C063890u);
	r4 = (u32)(s32)(s16)r2;  /* 0C063890 exts.w Rm,Rn */
	r9 += 0x2u;  /* 0C063892 add #imm,Rn */
	r3 = r4;  /* 0C063894 mov Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r9); UPD(0x0C063898u, 4);  /* 0C063896 mov.w @Rm,Rn */
	r3 += 0x1u;  /* 0C063898 add #imm,Rn */
	T = r3 == r0;  /* 0C06389A cmp/eq Rm,Rn */
	{ u32 c_ = !T; r5 = r13; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0638A4u, 5); goto L_0C0638A4; } goto L_0C0638A0; }  /* 0C06389C bf/s */
L_0C0638A0: BLKS(0x0C0638A0u);
	{ r8 = r13; /* slot mov Rm,Rn */ UPD(0x0C063BD0u, 4); goto L_0C063BD0; }  /* 0C0638A0 bra */
L_0C0638A4: BLKS(0x0C0638A4u);
	r8 = 0xC0623C0u; UPD(0x0C0638A6u, 1);  /* 0C0638A4 mov.l @(disp,pc),Rn */
	r5 -= r11;  /* 0C0638A6 sub Rm,Rn */
	r5 += 0x10u;  /* 0C0638A8 add #imm,Rn */
	IF(0x0C0638AAu); { u32 t_ = r8; PR = 0x0C0638AEu; r6 = R32(r14 + 0x14u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0623C0, 0x0C0623C0u, 0x0C0638AEu); }  /* 0C0638AA jsr @Rn */
L_0C0638AE: BLKS(0x0C0638AEu);
	r7 = r11;  /* 0C0638AE mov Rm,Rn */
	r7 += 0x1u;  /* 0C0638B0 add #imm,Rn */
	r11 = (u32)(s32)(s8)r7;  /* 0C0638B2 exts.b Rm,Rn */
	r0 = r11;  /* 0C0638B4 mov Rm,Rn */
	T = r0 == 0x3u;  /* 0C0638B6 cmp/eq #imm,r0 */
	{ u32 c_ = !T; r10 = r9; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0638C0u, 8); goto L_0C0638C0; } goto L_0C0638BC; }  /* 0C0638B8 bf/s */
L_0C0638BC: BLKS(0x0C0638BCu);
	{ r4 = R32(r14 + 0xCu); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C063BB0u, 4); goto L_0C063BB0; }  /* 0C0638BC bra */
L_0C0638C0: BLKS(0x0C0638C0u);
	r2 = (u32)(s32)(s16)R16(r10); UPD(0x0C0638C2u, 1);  /* 0C0638C0 mov.w @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C0638C2 tst Rm,Rn */
	{ u32 c_ = !T; r9 = r10; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C063890u, 4); goto L_0C063890; } UPD(0x0C0638C8u, 1); goto L_0C0638C8; }  /* 0C0638C4 bf/s */
L_0C0638C8: BLKS(0x0C0638C8u);
	r11 = 0xC29D1D8u; UPD(0x0C0638CAu, 1);  /* 0C0638C8 mov.l @(disp,pc),Rn */
	r9 = R32(r14 + 0x18u); UPD(0x0C0638CCu, 1);  /* 0C0638CA mov.l @(disp,Rm),Rn */
	r9 += r11;  /* 0C0638CC add Rm,Rn */
	W32(r14 + 0x4u, r9); UPD(0x0C0638D0u, 2);  /* 0C0638CE mov.l Rm,@(disp,Rn) */
	r11 = r9;  /* 0C0638D0 mov Rm,Rn */
	r11 += 0x20u;  /* 0C0638D2 add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r11); UPD(0x0C0638D6u, 3);  /* 0C0638D4 mov.b @Rm,Rn */
	T = (r6 & r6) == 0;  /* 0C0638D6 tst Rm,Rn */
	{ u32 c_ = T; r9 = r13; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0638E0u, 4); goto L_0C0638E0; } goto L_0C0638DC; }  /* 0C0638D8 bt/s */
L_0C0638DC: BLKS(0x0C0638DCu);
	{ r9 += 0xDu; /* slot add #imm,Rn */ UPD(0x0C063AF0u, 4); goto L_0C063AF0; }  /* 0C0638DC bra */
L_0C0638E0: BLKS(0x0C0638E0u);
	r0 = R32(r14 + 0x4u); UPD(0x0C0638E2u, 1);  /* 0C0638E0 mov.l @(disp,Rm),Rn */
L_0C0638E2: BLKS(0x0C0638E2u);
	r1 = 0x3u;  /* 0C0638E2 mov #imm,Rn */
	r2 = 0x224u; UPD(0x0C0638E6u, 2);  /* 0C0638E4 mov.w @(disp,pc),Rn */
	r4 = r0;  /* 0C0638E6 mov Rm,Rn */
	IF(0x0C0638E8u); r7 = R32(r0 + r2); UPD(0x0C0638EAu, 2);  /* 0C0638E8 mov.l @(r0,Rm),Rn */
	r0 = R32(r0 + 0x4u); UPD(0x0C0638ECu, 1);  /* 0C0638EA mov.l @(disp,Rm),Rn */
	IF(0x0C0638ECu); ARG0(0x401Du); { s32 s_ = (s32)r1; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C0638EC shld Rm,Rn */
	r2 = R32(r4 + 0x8u); UPD(0x0C0638F0u, 2);  /* 0C0638EE mov.l @(disp,Rm),Rn */
	IF(0x0C0638F0u); r9 = R32(r0 + r7); UPD(0x0C0638F2u, 1);  /* 0C0638F0 mov.l @(r0,Rm),Rn */
	r6 = r2;  /* 0C0638F2 mov Rm,Rn */
	r0 = 0x4u;  /* 0C0638F4 mov #imm,Rn */
	IF(0x0C0638F6u); ARG0(0x460Du); { s32 s_ = (s32)r0; if (s_ >= 0) r6 <<= (s_ & 31); else if ((s_ & 31) == 0) r6 = 0; else r6 >>= ((~s_ & 31) + 1); }  /* 0C0638F6 shld Rm,Rn */
	r6 += r9;  /* 0C0638F8 add Rm,Rn */
	r5 = R32(r6 + 0x4u); UPD(0x0C0638FCu, 5);  /* 0C0638FA mov.l @(disp,Rm),Rn */
	T = (r5 & r5) == 0;  /* 0C0638FC tst Rm,Rn */
	{ u32 c_ = T; r4 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C063908u, 4); goto L_0C063908; } goto L_0C063902; }  /* 0C0638FE bt/s */
L_0C063902: BLKS(0x0C063902u);
	{ r10 = r13; /* slot mov Rm,Rn */ UPD(0x0C063AC0u, 4); goto L_0C063AC0; }  /* 0C063902 bra */
L_0C063906: BLKS(0x0C063906u);
	r4 = r2;  /* 0C063906 mov Rm,Rn */
	UPD(0x0C063908u, 1);
L_0C063908: BLKS(0x0C063908u);
	r7 = 0x4u;  /* 0C063908 mov #imm,Rn */
	IF(0x0C06390Au); ARG0(0x447Du); { s32 s_ = (s32)r7; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = 0; else r4 >>= ((~s_ & 31) + 1); }  /* 0C06390A shld Rm,Rn */
	r4 += r9;  /* 0C06390C add Rm,Rn */
	r6 = R32(r4 + 0x8u); UPD(0x0C063910u, 4);  /* 0C06390E mov.l @(disp,Rm),Rn */
	T = (r6 & r6) == 0;  /* 0C063910 tst Rm,Rn */
	{ u32 c_ = T; r5 = 0x4u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C06391Cu, 4); goto L_0C06391C; } goto L_0C063916; }  /* 0C063912 bt/s */
L_0C063916: BLKS(0x0C063916u);
	{ r10 = r13; /* slot mov Rm,Rn */ UPD(0x0C063A90u, 4); goto L_0C063A90; }  /* 0C063916 bra */
L_0C06391A: BLKS(0x0C06391Au);
	r5 = 0x4u;  /* 0C06391A mov #imm,Rn */
	UPD(0x0C06391Cu, 1);
L_0C06391C: BLKS(0x0C06391Cu);
	IF(0x0C06391Cu); ARG0(0x425Du); { s32 s_ = (s32)r5; if (s_ >= 0) r2 <<= (s_ & 31); else if ((s_ & 31) == 0) r2 = 0; else r2 >>= ((~s_ & 31) + 1); }  /* 0C06391C shld Rm,Rn */
	r2 += r9;  /* 0C06391E add Rm,Rn */
	r3 = R32(r2 + 0xCu); UPD(0x0C063922u, 3);  /* 0C063920 mov.l @(disp,Rm),Rn */
	T = (r3 & r3) == 0;  /* 0C063922 tst Rm,Rn */
	{ u32 c_ = !T; r12 = r13; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C063A10u, 4); goto L_0C063A10; } UPD(0x0C063928u, 1); goto L_0C063928; }  /* 0C063924 bf/s */
L_0C063928: BLKS(0x0C063928u);
	r12 = 0xC0626E0u; UPD(0x0C06392Au, 1);  /* 0C063928 mov.l @(disp,pc),Rn */
	r10 = r13;  /* 0C06392A mov Rm,Rn */
	r9 = 0xC0404000u; UPD(0x0C06392Eu, 2);  /* 0C06392C mov.l @(disp,pc),Rn */
	r10 += 0x5u;  /* 0C06392E add #imm,Rn */
	r4 = 0xC173014u; UPD(0x0C063932u, 2);  /* 0C063930 mov.l @(disp,pc),Rn */
	r5 = r10;  /* 0C063932 mov Rm,Rn */
	r6 = 0x1u;  /* 0C063934 mov #imm,Rn */
	IF(0x0C063936u); { u32 t_ = r12; PR = 0x0C06393Au; r7 = r9; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C06393Au); }  /* 0C063936 jsr @Rn */
L_0C06393A: BLKS(0x0C06393Au);
	r5 = r10;  /* 0C06393A mov Rm,Rn */
	r4 = 0xC173018u; UPD(0x0C06393Eu, 2);  /* 0C06393C mov.l @(disp,pc),Rn */
	r6 = 0x5u;  /* 0C06393E mov #imm,Rn */
	IF(0x0C063940u); { u32 t_ = r12; PR = 0x0C063944u; r7 = r9; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C063944u); }  /* 0C063940 jsr @Rn */
L_0C063944: BLKS(0x0C063944u);
	r3 = R32(r14 + 0x4u); UPD(0x0C063946u, 1);  /* 0C063944 mov.l @(disp,Rm),Rn */
	r11 = (u32)(s32)(s16)r10;  /* 0C063946 exts.w Rm,Rn */
	r8 = 0x264u; UPD(0x0C06394Au, 2);  /* 0C063948 mov.w @(disp,pc),Rn */
	r5 = r11;  /* 0C06394A mov Rm,Rn */
	r8 += r3;  /* 0C06394C add Rm,Rn */
	r8 += 0x2u;  /* 0C06394E add #imm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r8); r8 += 1; r0 = v_; } UPD(0x0C063952u, 4);  /* 0C063950 mov.b @Rm+,Rn */
	r6 = 0x4u;  /* 0C063952 mov #imm,Rn */
	r13 = 0x80808000u; UPD(0x0C063956u, 2);  /* 0C063954 mov.l @(disp,pc),Rn */
	r0 &= 0x3u;  /* 0C063956 and #imm,r0 */
	r10 = 0xC17303Cu; UPD(0x0C06395Au, 2);  /* 0C063958 mov.l @(disp,pc),Rn */
	IF(0x0C06395Au); r0 <<= 2;  /* 0C06395A shll2 Rn */
	r7 = r13;  /* 0C06395C mov Rm,Rn */
	IF(0x0C06395Eu); { u32 t_ = r12; PR = 0x0C063962u; IF(0x0C063960u); r4 = R32(r0 + r10); /* slot mov.l @(r0,Rm),Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C063962u); }  /* 0C06395E jsr @Rn */
L_0C063962: BLKS(0x0C063962u);
	r0 = (u32)(s32)(s8)R8(r8); UPD(0x0C063964u, 1);  /* 0C063962 mov.b @Rm,Rn */
	r7 = r13;  /* 0C063964 mov Rm,Rn */
	r0 &= 0x3u;  /* 0C063966 and #imm,r0 */
	IF(0x0C063968u); r0 <<= 2;  /* 0C063968 shll2 Rn */
	IF(0x0C06396Au); r4 = R32(r0 + r10); UPD(0x0C06396Cu, 4);  /* 0C06396A mov.l @(r0,Rm),Rn */
	r5 = r11;  /* 0C06396C mov Rm,Rn */
	IF(0x0C06396Eu); { u32 t_ = r12; PR = 0x0C063972u; r6 = 0x8u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C063972u); }  /* 0C06396E jsr @Rn */
L_0C063972: BLKS(0x0C063972u);
	r0 = R32(r14 + 0x18u); UPD(0x0C063974u, 1);  /* 0C063972 mov.l @(disp,Rm),Rn */
	r13 = 0x1u;  /* 0C063974 mov #imm,Rn */
	r1 = R32(r14); UPD(0x0C063978u, 2);  /* 0C063976 mov.l @Rm,Rn */
	r2 = 0x2A0u; UPD(0x0C06397Au, 1);  /* 0C063978 mov.w @(disp,pc),Rn */
	r1 += 0x1u;  /* 0C06397A add #imm,Rn */
	r0 += r2;  /* 0C06397C add Rm,Rn */
	W32(r14 + 0x18u, r0); UPD(0x0C063980u, 3);  /* 0C06397E mov.l Rm,@(disp,Rn) */
	T = (s32)r1 > (s32)r13;  /* 0C063980 cmp/gt Rm,Rn */
	{ u32 c_ = T; W32(r14, r1); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C06398Au, 4); goto L_0C06398A; } UPD(0x0C063986u, 1); goto L_0C063986; }  /* 0C063982 bt/s */
L_0C063986: BLKS(0x0C063986u);
	{ IF(0x0C063988u); ; /* slot nop */ UPD(0x0C06380Cu, 3); goto L_0C06380C; }  /* 0C063986 bra */
L_0C06398A: BLKS(0x0C06398Au);
	r13 = 0x4040C000u; UPD(0x0C06398Cu, 1);  /* 0C06398A mov.l @(disp,pc),Rn */
	r5 = 0x15u;  /* 0C06398C mov #imm,Rn */
	r4 = 0xC173024u; UPD(0x0C063990u, 2);  /* 0C06398E mov.l @(disp,pc),Rn */
	r6 = 0x1u;  /* 0C063990 mov #imm,Rn */
	IF(0x0C063992u); { u32 t_ = r12; PR = 0x0C063996u; r7 = r13; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C063996u); }  /* 0C063992 jsr @Rn */
L_0C063996: BLKS(0x0C063996u);
	r4 = 0xC173028u; UPD(0x0C063998u, 1);  /* 0C063996 mov.l @(disp,pc),Rn */
	r5 = 0x14u;  /* 0C063998 mov #imm,Rn */
	r6 = 0x1u;  /* 0C06399A mov #imm,Rn */
	IF(0x0C06399Cu); { u32 t_ = r12; PR = 0x0C0639A0u; r7 = r13; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C0639A0u); }  /* 0C06399C jsr @Rn */
L_0C0639A0: BLKS(0x0C0639A0u);
	r4 = 0xC29D1D8u; UPD(0x0C0639A2u, 1);  /* 0C0639A0 mov.l @(disp,pc),Rn */
	r8 = 0x27Cu; UPD(0x0C0639A4u, 1);  /* 0C0639A2 mov.w @(disp,pc),Rn */
	r8 += r4;  /* 0C0639A4 add Rm,Rn */
	r12 = R32(r4 + 0x10u); UPD(0x0C0639A8u, 2);  /* 0C0639A6 mov.l @(disp,Rm),Rn */
	r6 = R32(r8 + 0x34u); UPD(0x0C0639AAu, 1);  /* 0C0639A8 mov.l @(disp,Rm),Rn */
	r12 -= r6;  /* 0C0639AA sub Rm,Rn */
	r5 = (r12 >> 16) | (r12 << 16);  /* 0C0639AC swap.w Rm,Rn */
	r4 = (u32)(s32)(s16)r5;  /* 0C0639AE exts.w Rm,Rn */
	IF(0x0C0639B0u); T = (s32)r4 >= 0;  /* 0C0639B0 cmp/pz Rn */
	if (!T) { UPD(0x0C063A00u, 7); goto L_0C063A00; }  /* 0C0639B2 bf */
L_0C0639B4: BLKS(0x0C0639B4u);
	r9 = 0xC0623C0u; UPD(0x0C0639B6u, 1);  /* 0C0639B4 mov.l @(disp,pc),Rn */
	r5 = 0x15u;  /* 0C0639B6 mov #imm,Rn */
	IF(0x0C0639B8u); { u32 t_ = r9; PR = 0x0C0639BCu; r6 = 0x3u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0623C0, 0x0C0623C0u, 0x0C0639BCu); }  /* 0C0639B8 jsr @Rn */
L_0C0639BC: BLKS(0x0C0639BCu);
	r2 = 0xC29D1D8u; UPD(0x0C0639BEu, 1);  /* 0C0639BC mov.l @(disp,pc),Rn */
	r1 = R32(r8 + 0x38u); UPD(0x0C0639C0u, 1);  /* 0C0639BE mov.l @(disp,Rm),Rn */
	r7 = R32(r2 + 0x14u); UPD(0x0C0639C2u, 1);  /* 0C0639C0 mov.l @(disp,Rm),Rn */
	r7 -= r1;  /* 0C0639C2 sub Rm,Rn */
	r8 = (r7 >> 16) | (r7 << 16);  /* 0C0639C4 swap.w Rm,Rn */
	r4 = (u32)(s32)(s16)r8;  /* 0C0639C6 exts.w Rm,Rn */
	IF(0x0C0639C8u); T = (s32)r4 >= 0;  /* 0C0639C8 cmp/pz Rn */
	if (!T) { UPD(0x0C0639F0u, 7); goto L_0C0639F0; }  /* 0C0639CA bf */
L_0C0639CC: BLKS(0x0C0639CCu);
	r5 = 0x14u;  /* 0C0639CC mov #imm,Rn */
	r6 = 0x3u;  /* 0C0639CE mov #imm,Rn */
	r0 = r9;  /* 0C0639D0 mov Rm,Rn */
	r14 += 0x1Cu;  /* 0C0639D2 add #imm,Rn */
	r15 = r14;  /* 0C0639D4 mov Rm,Rn */
	IF(0x0C0639D6u); PR = R32(r15); r15 += 4; UPD(0x0C0639D8u, 6);  /* 0C0639D6 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0639DAu, 1);  /* 0C0639D8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0639DCu, 1);  /* 0C0639DA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0639DEu, 1);  /* 0C0639DC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0639E0u, 1);  /* 0C0639DE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0639E2u, 1);  /* 0C0639E0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0639E4u, 1);  /* 0C0639E2 mov.l @Rm+,Rn */
	IF(0x0C0639E4u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0623C0u: TAIL(blk_f_0C0623C0); default: JUMPD(tv_); } }  /* 0C0639E4 jmp @Rn */
L_0C0639F0: BLKS(0x0C0639F0u);
	{ r4 = 0u - r4; /* slot neg Rm,Rn */ UPD(0x0C0639CCu, 3); goto L_0C0639CC; }  /* 0C0639F0 bra */
L_0C063A00: BLKS(0x0C063A00u);
	{ r4 = 0u - r4; /* slot neg Rm,Rn */ UPD(0x0C0639B4u, 3); goto L_0C0639B4; }  /* 0C063A00 bra */
L_0C063A10: BLKS(0x0C063A10u);
	r10 = 0xC0626E0u; UPD(0x0C063A12u, 1);  /* 0C063A10 mov.l @(disp,pc),Rn */
	r12 += 0x6u;  /* 0C063A12 add #imm,Rn */
	r7 = 0xC0404000u; UPD(0x0C063A16u, 2);  /* 0C063A14 mov.l @(disp,pc),Rn */
	r5 = r12;  /* 0C063A16 mov Rm,Rn */
	r4 = 0xC172FF8u; UPD(0x0C063A1Au, 2);  /* 0C063A18 mov.l @(disp,pc),Rn */
	IF(0x0C063A1Au); { u32 t_ = r10; PR = 0x0C063A1Eu; r6 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C063A1Eu); }  /* 0C063A1A jsr @Rn */
L_0C063A1E: BLKS(0x0C063A1Eu);
	r7 = R32(r14 + 0x4u); UPD(0x0C063A20u, 1);  /* 0C063A1E mov.l @(disp,Rm),Rn */
	r4 = 0x4u;  /* 0C063A20 mov #imm,Rn */
	r6 = R32(r7 + 0x8u); UPD(0x0C063A24u, 2);  /* 0C063A22 mov.l @(disp,Rm),Rn */
	r5 = r12;  /* 0C063A24 mov Rm,Rn */
	IF(0x0C063A26u); ARG0(0x464Du); { s32 s_ = (s32)r4; if (s_ >= 0) r6 <<= (s_ & 31); else if ((s_ & 31) == 0) r6 = 0; else r6 >>= ((~s_ & 31) + 1); }  /* 0C063A26 shld Rm,Rn */
	r6 += r9;  /* 0C063A28 add Rm,Rn */
	r9 = 0xC06E0E0u; UPD(0x0C063A2Cu, 4);  /* 0C063A2A mov.l @(disp,pc),Rn */
	r4 = R32(r6 + 0xCu); UPD(0x0C063A2Eu, 1);  /* 0C063A2C mov.l @(disp,Rm),Rn */
	r7 = 0x80808000u; UPD(0x0C063A30u, 1);  /* 0C063A2E mov.l @(disp,pc),Rn */
	IF(0x0C063A30u); { u32 t_ = r9; PR = 0x0C063A34u; r6 = 0x6u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C06E0E0, 0x0C06E0E0u, 0x0C063A34u); }  /* 0C063A30 jsr @Rn */
L_0C063A34: BLKS(0x0C063A34u);
	{ IF(0x0C063A36u); ; /* slot nop */ UPD(0x0C063928u, 3); goto L_0C063928; }  /* 0C063A34 bra */
L_0C063A90: BLKS(0x0C063A90u);
	r11 = 0xC0626E0u; UPD(0x0C063A92u, 1);  /* 0C063A90 mov.l @(disp,pc),Rn */
	r10 += 0x7u;  /* 0C063A92 add #imm,Rn */
	r4 = 0xC173008u; UPD(0x0C063A96u, 2);  /* 0C063A94 mov.l @(disp,pc),Rn */
	r5 = r10;  /* 0C063A96 mov Rm,Rn */
	r7 = 0xC0404000u; UPD(0x0C063A9Au, 2);  /* 0C063A98 mov.l @(disp,pc),Rn */
	IF(0x0C063A9Au); { u32 t_ = r11; PR = 0x0C063A9Eu; r6 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C063A9Eu); }  /* 0C063A9A jsr @Rn */
L_0C063A9E: BLKS(0x0C063A9Eu);
	r8 = R32(r14 + 0x4u); UPD(0x0C063AA0u, 1);  /* 0C063A9E mov.l @(disp,Rm),Rn */
	r2 = 0x4u;  /* 0C063AA0 mov #imm,Rn */
	r0 = R32(r8 + 0x8u); UPD(0x0C063AA4u, 2);  /* 0C063AA2 mov.l @(disp,Rm),Rn */
	r5 = r10;  /* 0C063AA4 mov Rm,Rn */
	IF(0x0C063AA6u); ARG0(0x402Du); { s32 s_ = (s32)r2; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C063AA6 shld Rm,Rn */
	r12 = 0xC06E0E0u; UPD(0x0C063AAAu, 3);  /* 0C063AA8 mov.l @(disp,pc),Rn */
	r0 += r9;  /* 0C063AAA add Rm,Rn */
	r4 = R32(r0 + 0x8u); UPD(0x0C063AAEu, 2);  /* 0C063AAC mov.l @(disp,Rm),Rn */
	r7 = 0x80808000u; UPD(0x0C063AB0u, 1);  /* 0C063AAE mov.l @(disp,pc),Rn */
	IF(0x0C063AB0u); { u32 t_ = r12; PR = 0x0C063AB4u; r6 = 0x6u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C06E0E0, 0x0C06E0E0u, 0x0C063AB4u); }  /* 0C063AB0 jsr @Rn */
L_0C063AB4: BLKS(0x0C063AB4u);
	r1 = R32(r14 + 0x4u); UPD(0x0C063AB6u, 1);  /* 0C063AB4 mov.l @(disp,Rm),Rn */
	{ r2 = R32(r1 + 0x8u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C06391Au, 3); goto L_0C06391A; }  /* 0C063AB6 bra */
L_0C063AC0: BLKS(0x0C063AC0u);
	r11 = 0xC0626E0u; UPD(0x0C063AC2u, 1);  /* 0C063AC0 mov.l @(disp,pc),Rn */
	r10 += 0x8u;  /* 0C063AC2 add #imm,Rn */
	r4 = 0xC173000u; UPD(0x0C063AC6u, 2);  /* 0C063AC4 mov.l @(disp,pc),Rn */
	r5 = r10;  /* 0C063AC6 mov Rm,Rn */
	r7 = 0xC0404000u; UPD(0x0C063ACAu, 2);  /* 0C063AC8 mov.l @(disp,pc),Rn */
	IF(0x0C063ACAu); { u32 t_ = r11; PR = 0x0C063ACEu; r6 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C063ACEu); }  /* 0C063ACA jsr @Rn */
L_0C063ACE: BLKS(0x0C063ACEu);
	r5 = R32(r14 + 0x4u); UPD(0x0C063AD0u, 1);  /* 0C063ACE mov.l @(disp,Rm),Rn */
	r3 = 0x4u;  /* 0C063AD0 mov #imm,Rn */
	r8 = R32(r5 + 0x8u); UPD(0x0C063AD4u, 2);  /* 0C063AD2 mov.l @(disp,Rm),Rn */
	r6 = 0x6u;  /* 0C063AD4 mov #imm,Rn */
	IF(0x0C063AD6u); ARG0(0x483Du); { s32 s_ = (s32)r3; if (s_ >= 0) r8 <<= (s_ & 31); else if ((s_ & 31) == 0) r8 = 0; else r8 >>= ((~s_ & 31) + 1); }  /* 0C063AD6 shld Rm,Rn */
	r12 = 0xC06E0E0u; UPD(0x0C063ADAu, 3);  /* 0C063AD8 mov.l @(disp,pc),Rn */
	r8 += r9;  /* 0C063ADA add Rm,Rn */
	r4 = R32(r8 + 0x4u); UPD(0x0C063ADEu, 2);  /* 0C063ADC mov.l @(disp,Rm),Rn */
	r7 = 0x80808000u; UPD(0x0C063AE0u, 1);  /* 0C063ADE mov.l @(disp,pc),Rn */
	IF(0x0C063AE0u); { u32 t_ = r12; PR = 0x0C063AE4u; r5 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C06E0E0, 0x0C06E0E0u, 0x0C063AE4u); }  /* 0C063AE0 jsr @Rn */
L_0C063AE4: BLKS(0x0C063AE4u);
	r11 = R32(r14 + 0x4u); UPD(0x0C063AE6u, 1);  /* 0C063AE4 mov.l @(disp,Rm),Rn */
	{ r2 = R32(r11 + 0x8u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C063906u, 3); goto L_0C063906; }  /* 0C063AE6 bra */
L_0C063AF0: BLKS(0x0C063AF0u);
	r3 = 0xC0626E0u; UPD(0x0C063AF2u, 1);  /* 0C063AF0 mov.l @(disp,pc),Rn */
	r5 = r9;  /* 0C063AF2 mov Rm,Rn */
	r7 = 0xC0404000u; UPD(0x0C063AF6u, 2);  /* 0C063AF4 mov.l @(disp,pc),Rn */
	r4 = 0xC172FD0u; UPD(0x0C063AF8u, 1);  /* 0C063AF6 mov.l @(disp,pc),Rn */
	IF(0x0C063AF8u); { u32 t_ = r3; PR = 0x0C063AFCu; r6 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C063AFCu); }  /* 0C063AF8 jsr @Rn */
L_0C063AFC: BLKS(0x0C063AFCu);
	r12 = R32(r14 + 0x4u); UPD(0x0C063AFEu, 1);  /* 0C063AFC mov.l @(disp,Rm),Rn */
	r5 = r9;  /* 0C063AFE mov Rm,Rn */
	r12 += 0x21u;  /* 0C063B00 add #imm,Rn */
	r10 = 0xC062490u; UPD(0x0C063B04u, 3);  /* 0C063B02 mov.l @(disp,pc),Rn */
	r6 = 0x7u;  /* 0C063B04 mov #imm,Rn */
	r4 = (u32)(s32)(s8)R8(r12); UPD(0x0C063B08u, 2);  /* 0C063B06 mov.b @Rm,Rn */
	r8 = 0xC0626E0u; UPD(0x0C063B0Au, 1);  /* 0C063B08 mov.l @(disp,pc),Rn */
	IF(0x0C063B0Au); { u32 t_ = r10; PR = 0x0C063B0Eu; r4 += 0x1u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062490, 0x0C062490u, 0x0C063B0Eu); }  /* 0C063B0A jsr @Rn */
L_0C063B0E: BLKS(0x0C063B0Eu);
	r4 = 0xC173010u; UPD(0x0C063B10u, 1);  /* 0C063B0E mov.l @(disp,pc),Rn */
	r5 = r9;  /* 0C063B10 mov Rm,Rn */
	r7 = 0xC0404000u; UPD(0x0C063B14u, 2);  /* 0C063B12 mov.l @(disp,pc),Rn */
	IF(0x0C063B14u); { u32 t_ = r8; PR = 0x0C063B18u; r6 = 0x9u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C063B18u); }  /* 0C063B14 jsr @Rn */
L_0C063B18: BLKS(0x0C063B18u);
	r4 = (u32)(s32)(s8)R8(r11); UPD(0x0C063B1Au, 1);  /* 0C063B18 mov.b @Rm,Rn */
	r5 = r9;  /* 0C063B1A mov Rm,Rn */
	r11 = 0xC0626E0u; UPD(0x0C063B1Eu, 2);  /* 0C063B1C mov.l @(disp,pc),Rn */
	IF(0x0C063B1Eu); { u32 t_ = r10; PR = 0x0C063B22u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062490, 0x0C062490u, 0x0C063B22u); }  /* 0C063B1E jsr @Rn */
L_0C063B22: BLKS(0x0C063B22u);
	r9 = (u32)(s32)(s8)R8(r12); UPD(0x0C063B24u, 1);  /* 0C063B22 mov.b @Rm,Rn */
	r10 = r13;  /* 0C063B24 mov Rm,Rn */
	r10 += 0xCu;  /* 0C063B26 add #imm,Rn */
	r4 = 0xC172FE8u; UPD(0x0C063B2Au, 3);  /* 0C063B28 mov.l @(disp,pc),Rn */
	r5 = r10;  /* 0C063B2A mov Rm,Rn */
	r7 = 0xC0404000u; UPD(0x0C063B2Eu, 2);  /* 0C063B2C mov.l @(disp,pc),Rn */
	IF(0x0C063B2Eu); { u32 t_ = r11; PR = 0x0C063B32u; r6 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C063B32u); }  /* 0C063B2E jsr @Rn */
L_0C063B32: BLKS(0x0C063B32u);
	r12 = 0xC0626E0u; UPD(0x0C063B34u, 1);  /* 0C063B32 mov.l @(disp,pc),Rn */
	r11 = r13;  /* 0C063B34 mov Rm,Rn */
	r11 += 0xBu;  /* 0C063B36 add #imm,Rn */
	r4 = 0xC172FF0u; UPD(0x0C063B3Au, 3);  /* 0C063B38 mov.l @(disp,pc),Rn */
	r5 = r11;  /* 0C063B3A mov Rm,Rn */
	r7 = 0xC0404000u; UPD(0x0C063B3Eu, 2);  /* 0C063B3C mov.l @(disp,pc),Rn */
	IF(0x0C063B3Eu); { u32 t_ = r12; PR = 0x0C063B42u; r6 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C063B42u); }  /* 0C063B3E jsr @Rn */
L_0C063B42: BLKS(0x0C063B42u);
	r1 = 0xC0626E0u; UPD(0x0C063B44u, 1);  /* 0C063B42 mov.l @(disp,pc),Rn */
	r12 = r13;  /* 0C063B44 mov Rm,Rn */
	r12 += 0xAu;  /* 0C063B46 add #imm,Rn */
	r4 = 0xC172FD8u; UPD(0x0C063B4Au, 3);  /* 0C063B48 mov.l @(disp,pc),Rn */
	r5 = r12;  /* 0C063B4A mov Rm,Rn */
	r7 = 0xC0404000u; UPD(0x0C063B4Eu, 2);  /* 0C063B4C mov.l @(disp,pc),Rn */
	IF(0x0C063B4Eu); { u32 t_ = r1; PR = 0x0C063B52u; r6 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C063B52u); }  /* 0C063B4E jsr @Rn */
L_0C063B52: BLKS(0x0C063B52u);
	r2 = 0xC0626E0u; UPD(0x0C063B54u, 1);  /* 0C063B52 mov.l @(disp,pc),Rn */
	r3 = r13;  /* 0C063B54 mov Rm,Rn */
	r3 += 0x9u;  /* 0C063B56 add #imm,Rn */
	r7 = 0xC0404000u; UPD(0x0C063B5Au, 3);  /* 0C063B58 mov.l @(disp,pc),Rn */
	r5 = r3;  /* 0C063B5A mov Rm,Rn */
	W32(r14 + 0x8u, r3); UPD(0x0C063B5Eu, 2);  /* 0C063B5C mov.l Rm,@(disp,Rn) */
	r4 = 0xC172FE0u; UPD(0x0C063B60u, 1);  /* 0C063B5E mov.l @(disp,pc),Rn */
	IF(0x0C063B60u); { u32 t_ = r2; PR = 0x0C063B64u; r6 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C063B64u); }  /* 0C063B60 jsr @Rn */
L_0C063B64: BLKS(0x0C063B64u);
	r7 = R32(r14); UPD(0x0C063B66u, 1);  /* 0C063B64 mov.l @Rm,Rn */
	r5 = r10;  /* 0C063B66 mov Rm,Rn */
	r8 = 0xA8u; UPD(0x0C063B6Au, 2);  /* 0C063B68 mov.w @(disp,pc),Rn */
	r6 = 0x6u;  /* 0C063B6A mov #imm,Rn */
	IF(0x0C063B6Cu); MACL = r7 * r8;  /* 0C063B6C mul.l Rm,Rn */
	r4 = 0xC29D1D8u; UPD(0x0C063B70u, 4);  /* 0C063B6E mov.l @(disp,pc),Rn */
	IF(0x0C063B70u); r8 = MACL;  /* 0C063B70 sts macl,Rn */
	r8 += r9;  /* 0C063B72 add Rm,Rn */
	r9 = 0xC062400u; UPD(0x0C063B76u, 3);  /* 0C063B74 mov.l @(disp,pc),Rn */
	IF(0x0C063B76u); r8 <<= 2;  /* 0C063B76 shll2 Rn */
	r0 = 0xA4u; UPD(0x0C063B7Au, 2);  /* 0C063B78 mov.w @(disp,pc),Rn */
	r8 += r4;  /* 0C063B7A add Rm,Rn */
	IF(0x0C063B7Cu); { u32 t_ = r9; PR = 0x0C063B80u; IF(0x0C063B7Eu); r4 = (u32)(s32)(s16)R16(r0 + r8); /* slot mov.w @(r0,Rm),Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C062400, 0x0C062400u, 0x0C063B80u); }  /* 0C063B7C jsr @Rn */
L_0C063B80: BLKS(0x0C063B80u);
	r0 = 0xE4u; UPD(0x0C063B82u, 1);  /* 0C063B80 mov.w @(disp,pc),Rn */
	r5 = r11;  /* 0C063B82 mov Rm,Rn */
	IF(0x0C063B84u); r4 = (u32)(s32)(s16)R16(r0 + r8); UPD(0x0C063B86u, 2);  /* 0C063B84 mov.w @(r0,Rm),Rn */
	IF(0x0C063B86u); { u32 t_ = r9; PR = 0x0C063B8Au; r6 = 0x6u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062400, 0x0C062400u, 0x0C063B8Au); }  /* 0C063B86 jsr @Rn */
L_0C063B8A: BLKS(0x0C063B8Au);
	r0 = R32(r8 + 0x24u); UPD(0x0C063B8Cu, 1);  /* 0C063B8A mov.l @(disp,Rm),Rn */
	r5 = r12;  /* 0C063B8C mov Rm,Rn */
	r1 = (r0 >> 16) | (r0 << 16);  /* 0C063B8E swap.w Rm,Rn */
	r4 = (u32)(s32)(s16)r1;  /* 0C063B90 exts.w Rm,Rn */
	r6 = 0x6u;  /* 0C063B92 mov #imm,Rn */
	IF(0x0C063B94u); { u32 t_ = r9; PR = 0x0C063B98u; r8 += 0x64u; /* slot add #imm,Rn */ UPD(t_, 6); CALLP(t_, blk_f_0C062400, 0x0C062400u, 0x0C063B98u); }  /* 0C063B94 jsr @Rn */
L_0C063B98: BLKS(0x0C063B98u);
	r4 = (u32)(s32)(s16)R16(r8); UPD(0x0C063B9Au, 1);  /* 0C063B98 mov.w @Rm,Rn */
	r6 = 0x6u;  /* 0C063B9A mov #imm,Rn */
	IF(0x0C063B9Cu); { u32 t_ = r9; PR = 0x0C063BA0u; r5 = R32(r14 + 0x8u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C062400, 0x0C062400u, 0x0C063BA0u); }  /* 0C063B9C jsr @Rn */
L_0C063BA0: BLKS(0x0C063BA0u);
	{ r0 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0638E2u, 3); goto L_0C0638E2; }  /* 0C063BA0 bra */
L_0C063BB0: BLKS(0x0C063BB0u);
	r11 = 0x0u;  /* 0C063BB0 mov #imm,Rn */
	r12 = R32(r14 + 0x10u); UPD(0x0C063BB4u, 2);  /* 0C063BB2 mov.l @(disp,Rm),Rn */
	r4 += 0x5u;  /* 0C063BB4 add #imm,Rn */
	r9 = R32(r14 + 0x14u); UPD(0x0C063BB8u, 2);  /* 0C063BB6 mov.l @(disp,Rm),Rn */
	r12 += 0x5u;  /* 0C063BB8 add #imm,Rn */
	r9 += 0x5u;  /* 0C063BBA add #imm,Rn */
	W32(r14 + 0xCu, r4); UPD(0x0C063BBEu, 3);  /* 0C063BBC mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x10u, r12); UPD(0x0C063BC0u, 1);  /* 0C063BBE mov.l Rm,@(disp,Rn) */
	{ W32(r14 + 0x14u, r9); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0638C0u, 3); goto L_0C0638C0; }  /* 0C063BC0 bra */
L_0C063BD0: BLKS(0x0C063BD0u);
	r12 = 0xC0626E0u; UPD(0x0C063BD2u, 1);  /* 0C063BD0 mov.l @(disp,pc),Rn */
	r8 -= r11;  /* 0C063BD2 sub Rm,Rn */
	r6 = R32(r14 + 0x10u); UPD(0x0C063BD6u, 2);  /* 0C063BD4 mov.l @(disp,Rm),Rn */
	r8 += 0x10u;  /* 0C063BD6 add #imm,Rn */
	r5 = r8;  /* 0C063BD8 mov Rm,Rn */
	r4 = 0xC173020u; UPD(0x0C063BDCu, 3);  /* 0C063BDA mov.l @(disp,pc),Rn */
	r7 = 0x80808000u; UPD(0x0C063BDEu, 1);  /* 0C063BDC mov.l @(disp,pc),Rn */
	IF(0x0C063BDEu); { u32 t_ = r12; PR = 0x0C063BE2u; r6 += 0x9u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C063BE2u); }  /* 0C063BDE jsr @Rn */
L_0C063BE2: BLKS(0x0C063BE2u);
	r5 = r8;  /* 0C063BE2 mov Rm,Rn */
	r12 = R32(r14 + 0x10u); UPD(0x0C063BE6u, 2);  /* 0C063BE4 mov.l @(disp,Rm),Rn */
	r8 = 0xC0623C0u; UPD(0x0C063BE8u, 1);  /* 0C063BE6 mov.l @(disp,pc),Rn */
	r12 += 0x5u;  /* 0C063BE8 add #imm,Rn */
	r4 = (u32)(s32)(s16)R16(r10); UPD(0x0C063BECu, 2);  /* 0C063BEA mov.w @Rm,Rn */
	IF(0x0C063BECu); { u32 t_ = r8; PR = 0x0C063BF0u; r6 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0623C0, 0x0C0623C0u, 0x0C063BF0u); }  /* 0C063BEC jsr @Rn */
L_0C063BF0: BLKS(0x0C063BF0u);
	r2 = r11;  /* 0C063BF0 mov Rm,Rn */
	r2 += 0x1u;  /* 0C063BF2 add #imm,Rn */
	r11 = (u32)(s32)(s8)r2;  /* 0C063BF4 exts.b Rm,Rn */
	r0 = r11;  /* 0C063BF6 mov Rm,Rn */
	T = r0 == 0x3u;  /* 0C063BF8 cmp/eq #imm,r0 */
	{ u32 c_ = T; r5 = R32(r14 + 0xCu); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C063C80u, 8); goto L_0C063C80; } UPD(0x0C063BFEu, 1); goto L_0C063BFE; }  /* 0C063BFA bt/s */
L_0C063BFE: BLKS(0x0C063BFEu);
	r0 = (u32)(s32)(s16)R16(r10); UPD(0x0C063C00u, 1);  /* 0C063BFE mov.w @Rm,Rn */
	r7 = 0x0u;  /* 0C063C00 mov #imm,Rn */
	r6 = (u32)(s32)(s16)R16(r9); UPD(0x0C063C04u, 2);  /* 0C063C02 mov.w @Rm,Rn */
	r0 += 0x1u;  /* 0C063C04 add #imm,Rn */
	T = r0 == r6;  /* 0C063C06 cmp/eq Rm,Rn */
	{ u32 c_ = T; r6 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C063C60u, 5); goto L_0C063C60; } goto L_0C063C0C; }  /* 0C063C08 bt/s */
L_0C063C0C: BLKS(0x0C063C0Cu);
	r8 = r6;  /* 0C063C0C mov Rm,Rn */
	UPD(0x0C063C0Eu, 2);
L_0C063C0E: BLKS(0x0C063C0Eu);
	r8 += r10;  /* 0C063C0E add Rm,Rn */
	r12 = 0xC0623C0u; UPD(0x0C063C12u, 2);  /* 0C063C10 mov.l @(disp,pc),Rn */
	r10 = r11;  /* 0C063C12 mov Rm,Rn */
	r5 = r13;  /* 0C063C14 mov Rm,Rn */
	r5 -= r11;  /* 0C063C16 sub Rm,Rn */
	r10 += 0x1u;  /* 0C063C18 add #imm,Rn */
	r4 = (u32)(s32)(s16)R16(r8); UPD(0x0C063C1Cu, 5);  /* 0C063C1A mov.w @Rm,Rn */
	r5 += 0x10u;  /* 0C063C1C add #imm,Rn */
	r6 = R32(r14 + 0xCu); UPD(0x0C063C20u, 2);  /* 0C063C1E mov.l @(disp,Rm),Rn */
	IF(0x0C063C20u); { u32 t_ = r12; PR = 0x0C063C24u; r11 = (u32)(s32)(s8)r10; /* slot exts.b Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0623C0, 0x0C0623C0u, 0x0C063C24u); }  /* 0C063C20 jsr @Rn */
L_0C063C24: BLKS(0x0C063C24u);
	r0 = r11;  /* 0C063C24 mov Rm,Rn */
	T = r0 == 0x3u;  /* 0C063C26 cmp/eq #imm,r0 */
	{ u32 c_ = T; r5 = R32(r14 + 0xCu); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C063C40u, 5); goto L_0C063C40; } UPD(0x0C063C2Cu, 1); goto L_0C063C2C; }  /* 0C063C28 bt/s */
L_0C063C2C: BLKS(0x0C063C2Cu);
	r10 = r8;  /* 0C063C2C mov Rm,Rn */
	{ r10 += 0x2u; /* slot add #imm,Rn */ UPD(0x0C0638C0u, 4); goto L_0C0638C0; }  /* 0C063C2E bra */
L_0C063C36: BLKS(0x0C063C36u);
	IF(0x0C063C36u); ;  /* 0C063C36 nop */
	IF(0x0C063C38u); ;  /* 0C063C38 nop */
	IF(0x0C063C3Au); ;  /* 0C063C3A nop */
	IF(0x0C063C3Cu); ;  /* 0C063C3C nop */
	IF(0x0C063C3Eu); ;  /* 0C063C3E nop */
	UPD(0x0C063C40u, 5);
L_0C063C40: BLKS(0x0C063C40u);
	r11 = 0x0u;  /* 0C063C40 mov #imm,Rn */
	r3 = R32(r14 + 0x10u); UPD(0x0C063C44u, 2);  /* 0C063C42 mov.l @(disp,Rm),Rn */
	r5 += 0x5u;  /* 0C063C44 add #imm,Rn */
	r7 = R32(r14 + 0x14u); UPD(0x0C063C48u, 2);  /* 0C063C46 mov.l @(disp,Rm),Rn */
	r3 += 0x5u;  /* 0C063C48 add #imm,Rn */
	r7 += 0x5u;  /* 0C063C4A add #imm,Rn */
	W32(r14 + 0xCu, r5); UPD(0x0C063C4Eu, 3);  /* 0C063C4C mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x10u, r3); UPD(0x0C063C50u, 1);  /* 0C063C4E mov.l Rm,@(disp,Rn) */
	{ W32(r14 + 0x14u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C063C2Cu, 3); goto L_0C063C2C; }  /* 0C063C50 bra */
L_0C063C60: BLKS(0x0C063C60u);
	r3 = r10;  /* 0C063C60 mov Rm,Rn */
	IF(0x0C063C62u); ;  /* 0C063C62 nop */
	UPD(0x0C063C64u, 2);
L_0C063C64: BLKS(0x0C063C64u);
	SPIN_SAVE(0C063C64);
	r3 += 0x2u;  /* 0C063C64 add #imm,Rn */
	r2 = r3;  /* 0C063C66 mov Rm,Rn */
	r8 = r7;  /* 0C063C68 mov Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)RS16(0C063C64, r2); r2 += 2; r4 = v_; } UPD(0x0C063C6Cu, 4);  /* 0C063C6A mov.w @Rm+,Rn */
	r8 += 0x1u;  /* 0C063C6C add #imm,Rn */
	r7 = (u32)(s32)(s16)r8;  /* 0C063C6E exts.w Rm,Rn */
	r9 = (u32)(s32)(s16)RS16(0C063C64, r2); UPD(0x0C063C72u, 3);  /* 0C063C70 mov.w @Rm,Rn */
	r6 = r7;  /* 0C063C72 mov Rm,Rn */
	r4 += 0x1u;  /* 0C063C74 add #imm,Rn */
	T = r4 == r9;  /* 0C063C76 cmp/eq Rm,Rn */
	{ u32 c_ = T; r6 += r6; /* slot add Rm,Rn */ if (c_) { SPIN_FFD(0C063C64, 13); UPD(0x0C063C64u, 6); goto L_0C063C64; } goto L_0C063C7C; }  /* 0C063C78 bt/s */
L_0C063C7C: BLKS(0x0C063C7Cu);
	{ r8 = r6; /* slot mov Rm,Rn */ UPD(0x0C063C0Eu, 4); goto L_0C063C0E; }  /* 0C063C7C bra */
L_0C063C80: BLKS(0x0C063C80u);
	r11 = 0x0u;  /* 0C063C80 mov #imm,Rn */
	r1 = R32(r14 + 0x14u); UPD(0x0C063C84u, 2);  /* 0C063C82 mov.l @(disp,Rm),Rn */
	r5 += 0x5u;  /* 0C063C84 add #imm,Rn */
	r1 += 0x5u;  /* 0C063C86 add #imm,Rn */
	W32(r14 + 0xCu, r5); UPD(0x0C063C8Au, 3);  /* 0C063C88 mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x10u, r12); UPD(0x0C063C8Cu, 1);  /* 0C063C8A mov.l Rm,@(disp,Rn) */
	{ W32(r14 + 0x14u, r1); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C063BFEu, 3); goto L_0C063BFE; }  /* 0C063C8C bra */
}

/* FUN_0c063ce0 */
void blk_f_0C063CE0(sh3_t *c)
{
	LOCALS;
	SPIN_VARS(0C0643DC);
L_0C063CE0: BLKS(0x0C063CE0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C063CE2u, 1);  /* 0C063CE0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C063CE4u, 1);  /* 0C063CE2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C063CE6u, 1);  /* 0C063CE4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C063CE8u, 1);  /* 0C063CE6 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C063CEAu, 1);  /* 0C063CE8 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C063CECu, 1);  /* 0C063CEA mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C063CEEu, 1);  /* 0C063CEC mov.l Rm,@-Rn */
	r12 = 0xC237C12u; UPD(0x0C063CF0u, 1);  /* 0C063CEE mov.l @(disp,pc),Rn */
	IF(0x0C063CF0u); r15 -= 4; W32(r15, PR); UPD(0x0C063CF2u, 1);  /* 0C063CF0 sts.l pr,@-Rn */
	r0 = r12;  /* 0C063CF2 mov Rm,Rn */
	r1 = (u32)(s32)(s16)R16(r12); UPD(0x0C063CF6u, 2);  /* 0C063CF4 mov.w @Rm,Rn */
	r14 = r15;  /* 0C063CF6 mov Rm,Rn */
	r13 = 0xC29D424u; UPD(0x0C063CFAu, 2);  /* 0C063CF8 mov.l @(disp,pc),Rn */
	r6 = 0x100u; UPD(0x0C063CFCu, 1);  /* 0C063CFA mov.w @(disp,pc),Rn */
	W16(r13, r1); UPD(0x0C063CFEu, 1);  /* 0C063CFC mov.w Rm,@Rn */
	r10 = 0xC29D426u; UPD(0x0C063D00u, 1);  /* 0C063CFE mov.l @(disp,pc),Rn */
	IF(0x0C063D00u); r11 = (u32)(s32)(s16)R16(r0 + r6); UPD(0x0C063D02u, 1);  /* 0C063D00 mov.w @(r0,Rm),Rn */
	r4 = 0x200u; UPD(0x0C063D04u, 1);  /* 0C063D02 mov.w @(disp,pc),Rn */
	W16(r10, r11); UPD(0x0C063D06u, 1);  /* 0C063D04 mov.w Rm,@Rn */
	r3 = 0xC29D428u; UPD(0x0C063D08u, 1);  /* 0C063D06 mov.l @(disp,pc),Rn */
	r10 = 0x0u;  /* 0C063D08 mov #imm,Rn */
	IF(0x0C063D0Au); r9 = (u32)(s32)(s16)R16(r0 + r4); UPD(0x0C063D0Cu, 2);  /* 0C063D0A mov.w @(r0,Rm),Rn */
	r7 = 0xC228BF8u; UPD(0x0C063D0Eu, 1);  /* 0C063D0C mov.l @(disp,pc),Rn */
	W16(r3, r9); UPD(0x0C063D10u, 1);  /* 0C063D0E mov.w Rm,@Rn */
	r0 = 0xC29D6C4u; UPD(0x0C063D12u, 1);  /* 0C063D10 mov.l @(disp,pc),Rn */
	r8 = (u32)(s32)(s16)R16(r7); UPD(0x0C063D14u, 1);  /* 0C063D12 mov.w @Rm,Rn */
	W16(r0, r8); UPD(0x0C063D16u, 1);  /* 0C063D14 mov.w Rm,@Rn */
	r0 = r7;  /* 0C063D16 mov Rm,Rn */
	IF(0x0C063D18u); r5 = (u32)(s32)(s16)R16(r0 + r6); UPD(0x0C063D1Au, 2);  /* 0C063D18 mov.w @(r0,Rm),Rn */
	r2 = 0xC29D6C6u; UPD(0x0C063D1Cu, 1);  /* 0C063D1A mov.l @(disp,pc),Rn */
	W16(r2, r5); UPD(0x0C063D1Eu, 1);  /* 0C063D1C mov.w Rm,@Rn */
	IF(0x0C063D1Eu); r1 = (u32)(s32)(s16)R16(r0 + r4); UPD(0x0C063D20u, 1);  /* 0C063D1E mov.w @(r0,Rm),Rn */
	r0 = 0xC29D6C8u; UPD(0x0C063D22u, 1);  /* 0C063D20 mov.l @(disp,pc),Rn */
	r11 = 0xC29D1D8u; UPD(0x0C063D24u, 1);  /* 0C063D22 mov.l @(disp,pc),Rn */
	r12 = 0x2A0u; UPD(0x0C063D26u, 1);  /* 0C063D24 mov.w @(disp,pc),Rn */
	W16(r0, r1); UPD(0x0C063D28u, 1);  /* 0C063D26 mov.w Rm,@Rn */
L_0C063D28: BLKS(0x0C063D28u);
	IF(0x0C063D28u); MACL = r10 * r12;  /* 0C063D28 mul.l Rm,Rn */
	r6 = 0x224u; UPD(0x0C063D2Cu, 3);  /* 0C063D2A mov.w @(disp,pc),Rn */
	IF(0x0C063D2Cu); r7 = MACL;  /* 0C063D2C sts macl,Rn */
	r7 += r11;  /* 0C063D2E add Rm,Rn */
	r0 = r7;  /* 0C063D30 mov Rm,Rn */
	IF(0x0C063D32u); r9 = R32(r0 + r6); UPD(0x0C063D34u, 4);  /* 0C063D32 mov.l @(r0,Rm),Rn */
	r0 = 0x24Cu; UPD(0x0C063D36u, 1);  /* 0C063D34 mov.w @(disp,pc),Rn */
	IF(0x0C063D36u); r0 = (u32)(s32)(s16)R16(r0 + r7); UPD(0x0C063D38u, 1);  /* 0C063D36 mov.w @(r0,Rm),Rn */
	r0 &= 0x70u;  /* 0C063D38 and #imm,r0 */
	T = r0 == 0x20u;  /* 0C063D3A cmp/eq #imm,r0 */
	{ u32 c_ = !T; IF(0x0C063D3Eu); r2 = MACL; /* slot sts macl,Rn */ if (c_) { UPD(0x0C063D44u, 5); goto L_0C063D44; } goto L_0C063D40; }  /* 0C063D3C bf/s */
L_0C063D40: BLKS(0x0C063D40u);
	{ r7 += 0x20u; /* slot add #imm,Rn */ UPD(0x0C064440u, 4); goto L_0C064440; }  /* 0C063D40 bra */
L_0C063D44: BLKS(0x0C063D44u);
	r4 = 0x20u;  /* 0C063D44 mov #imm,Rn */
	T = (s32)r0 > (s32)r4;  /* 0C063D46 cmp/gt Rm,Rn */
	{ u32 c_ = !T; T = r0 == 0x50u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C063D50u, 5); goto L_0C063D50; } goto L_0C063D4C; }  /* 0C063D48 bf/s */
L_0C063D4C: BLKS(0x0C063D4Cu);
	{ IF(0x0C063D4Eu); ; /* slot nop */ UPD(0x0C064130u, 4); goto L_0C064130; }  /* 0C063D4C bra */
L_0C063D50: BLKS(0x0C063D50u);
	T = (r0 & r0) == 0;  /* 0C063D50 tst Rm,Rn */
	{ u32 c_ = !T; T = r0 == 0x10u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C063D5Au, 4); goto L_0C063D5A; } goto L_0C063D56; }  /* 0C063D52 bf/s */
L_0C063D56: BLKS(0x0C063D56u);
	{ r0 = R32(r7 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C063FE0u, 4); goto L_0C063FE0; }  /* 0C063D56 bra */
L_0C063D5A: BLKS(0x0C063D5Au);
	r8 = r10;  /* 0C063D5A mov Rm,Rn */
	{ u32 c_ = T; r8 += 0x1u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C063D80u, 4); goto L_0C063D80; } goto L_0C063D60; }  /* 0C063D5C bt/s */
L_0C063D60: BLKS(0x0C063D60u);
	r0 = 0x1u;  /* 0C063D60 mov #imm,Rn */
	UPD(0x0C063D62u, 2);
L_0C063D62: BLKS(0x0C063D62u);
	T = (s32)r8 > (s32)r0;  /* 0C063D62 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r10 = r8; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C063D28u, 4); goto L_0C063D28; } goto L_0C063D68; }  /* 0C063D64 bf/s */
L_0C063D68: BLKS(0x0C063D68u);
	r15 = r14;  /* 0C063D68 mov Rm,Rn */
	IF(0x0C063D6Au); PR = R32(r15); r15 += 4; UPD(0x0C063D6Cu, 3);  /* 0C063D6A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C063D6Eu, 1);  /* 0C063D6C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C063D70u, 1);  /* 0C063D6E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C063D72u, 1);  /* 0C063D70 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C063D74u, 1);  /* 0C063D72 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C063D76u, 1);  /* 0C063D74 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C063D78u, 1);  /* 0C063D76 mov.l @Rm+,Rn */
	IF(0x0C063D78u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C063D78 rts */
L_0C063D80: BLKS(0x0C063D80u);
	r0 = 0x250u; UPD(0x0C063D82u, 1);  /* 0C063D80 mov.w @(disp,pc),Rn */
	IF(0x0C063D82u); r0 = (u32)(s32)(s16)R16(r0 + r7); UPD(0x0C063D84u, 1);  /* 0C063D82 mov.w @(r0,Rm),Rn */
	r0 &= 0x8u;  /* 0C063D84 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C063D86 tst Rm,Rn */
	if (!T) { UPD(0x0C063D90u, 5); goto L_0C063D90; }  /* 0C063D88 bf */
L_0C063D8A: BLKS(0x0C063D8Au);
	r8 = r10;  /* 0C063D8A mov Rm,Rn */
	{ r8 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C063DD8u, 4); goto L_0C063DD8; }  /* 0C063D8C bra */
L_0C063D90: BLKS(0x0C063D90u);
	r6 = 0xC1DD458u; UPD(0x0C063D92u, 1);  /* 0C063D90 mov.l @(disp,pc),Rn */
	T = r9 == r6;  /* 0C063D92 cmp/eq Rm,Rn */
	{ u32 c_ = !T; r6 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C063D9Cu, 4); goto L_0C063D9C; } goto L_0C063D98; }  /* 0C063D94 bf/s */
L_0C063D98: BLKS(0x0C063D98u);
	{ IF(0x0C063D9Au); ; /* slot nop */ UPD(0x0C063F80u, 4); goto L_0C063F80; }  /* 0C063D98 bra */
L_0C063D9C: BLKS(0x0C063D9Cu);
	r13 = 0xC064550u; UPD(0x0C063D9Eu, 1);  /* 0C063D9C mov.l @(disp,pc),Rn */
	r8 = r10;  /* 0C063D9E mov Rm,Rn */
	r8 += 0x1u;  /* 0C063DA0 add #imm,Rn */
	UPD(0x0C063DA2u, 2);
L_0C063DA2: BLKS(0x0C063DA2u);
	r0 = 0x2A0u; UPD(0x0C063DA4u, 1);  /* 0C063DA2 mov.w @(disp,pc),Rn */
	r1 = 0x3u;  /* 0C063DA4 mov #imm,Rn */
	IF(0x0C063DA6u); MACL = r10 * r0;  /* 0C063DA6 mul.l Rm,Rn */
	r6 = 0xC29D1D8u; UPD(0x0C063DAAu, 4);  /* 0C063DA8 mov.l @(disp,pc),Rn */
	IF(0x0C063DAAu); r2 = MACL;  /* 0C063DAA sts macl,Rn */
	r2 += r6;  /* 0C063DAC add Rm,Rn */
	r3 = R32(r2 + 0x4u); UPD(0x0C063DB0u, 3);  /* 0C063DAE mov.l @(disp,Rm),Rn */
	r5 = r3;  /* 0C063DB0 mov Rm,Rn */
	IF(0x0C063DB2u); ARG0(0x451Du); { s32 s_ = (s32)r1; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = 0; else r5 >>= ((~s_ & 31) + 1); }  /* 0C063DB2 shld Rm,Rn */
	r5 += r9;  /* 0C063DB4 add Rm,Rn */
	r1 = R32(r5 + 0x8u); UPD(0x0C063DB8u, 4);  /* 0C063DB6 mov.l @(disp,Rm),Rn */
	T = (r1 & r1) == 0;  /* 0C063DB8 tst Rm,Rn */
	{ u32 c_ = !T; r3 += 0x1u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C063DC2u, 4); goto L_0C063DC2; } goto L_0C063DBE; }  /* 0C063DBA bf/s */
L_0C063DBE: BLKS(0x0C063DBEu);
	{ W32(r2 + 0x4u, r1); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C063F70u, 4); goto L_0C063F70; }  /* 0C063DBE bra */
L_0C063DC2: BLKS(0x0C063DC2u);
	W32(r2 + 0x4u, r3); UPD(0x0C063DC4u, 1);  /* 0C063DC2 mov.l Rm,@(disp,Rn) */
L_0C063DC4: BLKS(0x0C063DC4u);
	r4 = 0x2A0u; UPD(0x0C063DC6u, 1);  /* 0C063DC4 mov.w @(disp,pc),Rn */
	r7 = 0x0u;  /* 0C063DC6 mov #imm,Rn */
	IF(0x0C063DC8u); MACL = r10 * r4;  /* 0C063DC8 mul.l Rm,Rn */
	r2 = 0xC29D1D8u; UPD(0x0C063DCCu, 4);  /* 0C063DCA mov.l @(disp,pc),Rn */
	IF(0x0C063DCCu); r3 = MACL;  /* 0C063DCC sts macl,Rn */
	r3 += r2;  /* 0C063DCE add Rm,Rn */
	W32(r3 + 0xCu, r7); UPD(0x0C063DD2u, 3);  /* 0C063DD0 mov.l Rm,@(disp,Rn) */
	r4 = (u32)(s32)(s16)r10;  /* 0C063DD2 exts.w Rm,Rn */
	IF(0x0C063DD4u); { u32 t_ = r13; PR = 0x0C063DD8u; W32(r3 + 0x8u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C064550, 0x0C064550u, 0x0C063DD8u); }  /* 0C063DD4 jsr @Rn */
L_0C063DD8: BLKS(0x0C063DD8u);
	r5 = 0x2A0u; UPD(0x0C063DDAu, 1);  /* 0C063DD8 mov.w @(disp,pc),Rn */
	IF(0x0C063DDAu); MACL = r10 * r5;  /* 0C063DDA mul.l Rm,Rn */
	r13 = 0xC29D1D8u; UPD(0x0C063DDEu, 3);  /* 0C063DDC mov.l @(disp,pc),Rn */
	IF(0x0C063DDEu); r3 = MACL;  /* 0C063DDE sts macl,Rn */
	r0 = 0x250u; UPD(0x0C063DE2u, 2);  /* 0C063DE0 mov.w @(disp,pc),Rn */
	r3 += r13;  /* 0C063DE2 add Rm,Rn */
	IF(0x0C063DE4u); r0 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C063DE6u, 2);  /* 0C063DE4 mov.w @(r0,Rm),Rn */
	r0 &= 0x4u;  /* 0C063DE6 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C063DE8 tst Rm,Rn */
	if (T) { UPD(0x0C063E28u, 5); goto L_0C063E28; }  /* 0C063DEA bt */
L_0C063DEC: BLKS(0x0C063DECu);
	r0 = 0x224u; UPD(0x0C063DEEu, 1);  /* 0C063DEC mov.w @(disp,pc),Rn */
	r6 = 0xC1DD458u; UPD(0x0C063DF0u, 1);  /* 0C063DEE mov.l @(disp,pc),Rn */
	IF(0x0C063DF0u); r1 = R32(r0 + r3); UPD(0x0C063DF2u, 1);  /* 0C063DF0 mov.l @(r0,Rm),Rn */
	T = r1 == r6;  /* 0C063DF2 cmp/eq Rm,Rn */
	{ u32 c_ = !T; r6 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C063DFCu, 4); goto L_0C063DFC; } goto L_0C063DF8; }  /* 0C063DF4 bf/s */
L_0C063DF8: BLKS(0x0C063DF8u);
	{ IF(0x0C063DFAu); ; /* slot nop */ UPD(0x0C063F10u, 4); goto L_0C063F10; }  /* 0C063DF8 bra */
L_0C063DFC: BLKS(0x0C063DFCu);
	r13 = 0xC064550u; UPD(0x0C063DFEu, 1);  /* 0C063DFC mov.l @(disp,pc),Rn */
L_0C063DFE: BLKS(0x0C063DFEu);
	r6 = 0x2A0u; UPD(0x0C063E00u, 1);  /* 0C063DFE mov.w @(disp,pc),Rn */
	IF(0x0C063E00u); MACL = r10 * r6;  /* 0C063E00 mul.l Rm,Rn */
	r5 = 0xC29D1D8u; UPD(0x0C063E04u, 3);  /* 0C063E02 mov.l @(disp,pc),Rn */
	IF(0x0C063E04u); r2 = MACL;  /* 0C063E04 sts macl,Rn */
	r2 += r5;  /* 0C063E06 add Rm,Rn */
	r1 = R32(r2 + 0x4u); UPD(0x0C063E0Au, 3);  /* 0C063E08 mov.l @(disp,Rm),Rn */
	T = (r1 & r1) == 0;  /* 0C063E0A tst Rm,Rn */
	{ u32 c_ = T; r3 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C063EF0u, 4); goto L_0C063EF0; } goto L_0C063E10; }  /* 0C063E0C bt/s */
L_0C063E10: BLKS(0x0C063E10u);
	r1 += 0xFFFFFFFFu;  /* 0C063E10 add #imm,Rn */
	W32(r2 + 0x4u, r1); UPD(0x0C063E14u, 3);  /* 0C063E12 mov.l Rm,@(disp,Rn) */
L_0C063E14: BLKS(0x0C063E14u);
	r2 = 0x2A0u; UPD(0x0C063E16u, 1);  /* 0C063E14 mov.w @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C063E16 mov #imm,Rn */
	IF(0x0C063E18u); MACL = r10 * r2;  /* 0C063E18 mul.l Rm,Rn */
	r7 = 0xC29D1D8u; UPD(0x0C063E1Cu, 4);  /* 0C063E1A mov.l @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r10;  /* 0C063E1C exts.w Rm,Rn */
	IF(0x0C063E1Eu); r9 = MACL;  /* 0C063E1E sts macl,Rn */
	r9 += r7;  /* 0C063E20 add Rm,Rn */
	W32(r9 + 0xCu, r3); UPD(0x0C063E24u, 4);  /* 0C063E22 mov.l Rm,@(disp,Rn) */
	IF(0x0C063E24u); { u32 t_ = r13; PR = 0x0C063E28u; W32(r9 + 0x8u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C064550, 0x0C064550u, 0x0C063E28u); }  /* 0C063E24 jsr @Rn */
L_0C063E28: BLKS(0x0C063E28u);
	r5 = 0x2A0u; UPD(0x0C063E2Au, 1);  /* 0C063E28 mov.w @(disp,pc),Rn */
	IF(0x0C063E2Au); MACL = r10 * r5;  /* 0C063E2A mul.l Rm,Rn */
	r13 = 0xC29D1D8u; UPD(0x0C063E2Eu, 3);  /* 0C063E2C mov.l @(disp,pc),Rn */
	IF(0x0C063E2Eu); r2 = MACL;  /* 0C063E2E sts macl,Rn */
	r2 += r13;  /* 0C063E30 add Rm,Rn */
	r2 += 0x20u;  /* 0C063E32 add #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r2); UPD(0x0C063E36u, 4);  /* 0C063E34 mov.b @Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C063E36 tst Rm,Rn */
	{ u32 c_ = T; r2 += 0xFFFFFFE0u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C063E80u, 4); goto L_0C063E80; } goto L_0C063E3C; }  /* 0C063E38 bt/s */
L_0C063E3C: BLKS(0x0C063E3Cu);
	r0 = 0x250u; UPD(0x0C063E3Eu, 2);  /* 0C063E3C mov.w @(disp,pc),Rn */
	IF(0x0C063E3Eu); r0 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C063E40u, 1);  /* 0C063E3E mov.w @(r0,Rm),Rn */
	r0 &= 0x2u;  /* 0C063E40 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C063E42 tst Rm,Rn */
	{ u32 c_ = T; r2 += 0x21u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C063E5Au, 5); goto L_0C063E5A; } goto L_0C063E48; }  /* 0C063E44 bt/s */
L_0C063E48: BLKS(0x0C063E48u);
	r7 = (u32)(s32)(s8)R8(r2); UPD(0x0C063E4Au, 2);  /* 0C063E48 mov.b @Rm,Rn */
	r3 += 0xFFFFFFFFu;  /* 0C063E4A add #imm,Rn */
	r6 = (u32)(s32)(s8)r7;  /* 0C063E4C exts.b Rm,Rn */
	T = (s32)r6 >= (s32)r3;  /* 0C063E4E cmp/ge Rm,Rn */
	{ u32 c_ = T; r1 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C063E58u, 6); goto L_0C063E58; } goto L_0C063E54; }  /* 0C063E50 bt/s */
L_0C063E54: BLKS(0x0C063E54u);
	r1 = r7;  /* 0C063E54 mov Rm,Rn */
	r1 += 0x1u;  /* 0C063E56 add #imm,Rn */
	UPD(0x0C063E58u, 3);
L_0C063E58: BLKS(0x0C063E58u);
	W8(r2, r1); UPD(0x0C063E5Au, 1);  /* 0C063E58 mov.b Rm,@Rn */
L_0C063E5A: BLKS(0x0C063E5Au);
	r4 = 0x2A0u; UPD(0x0C063E5Cu, 1);  /* 0C063E5A mov.w @(disp,pc),Rn */
	IF(0x0C063E5Cu); MACL = r10 * r4;  /* 0C063E5C mul.l Rm,Rn */
	r0 = 0xC29D1D8u; UPD(0x0C063E60u, 3);  /* 0C063E5E mov.l @(disp,pc),Rn */
	IF(0x0C063E60u); r2 = MACL;  /* 0C063E60 sts macl,Rn */
	r2 += r0;  /* 0C063E62 add Rm,Rn */
	r0 = 0x250u; UPD(0x0C063E66u, 3);  /* 0C063E64 mov.w @(disp,pc),Rn */
	IF(0x0C063E66u); r0 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C063E68u, 1);  /* 0C063E66 mov.w @(r0,Rm),Rn */
	r0 &= 0x1u;  /* 0C063E68 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C063E6A tst Rm,Rn */
	{ u32 c_ = T; r3 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C063E80u, 5); goto L_0C063E80; } goto L_0C063E70; }  /* 0C063E6C bt/s */
L_0C063E70: BLKS(0x0C063E70u);
	r2 += 0x21u;  /* 0C063E70 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C063E74u, 3);  /* 0C063E72 mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C063E74 tst Rm,Rn */
	{ u32 c_ = !T; r3 += 0x20u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C063E7Cu, 4); goto L_0C063E7C; } goto L_0C063E7A; }  /* 0C063E76 bf/s */
L_0C063E7A: BLKS(0x0C063E7Au);
	r1 = (u32)(s32)(s8)R8(r3); UPD(0x0C063E7Cu, 2);  /* 0C063E7A mov.b @Rm,Rn */
L_0C063E7C: BLKS(0x0C063E7Cu);
	r1 += 0xFFFFFFFFu;  /* 0C063E7C add #imm,Rn */
	W8(r2, r1); UPD(0x0C063E80u, 2);  /* 0C063E7E mov.b Rm,@Rn */
L_0C063E80: BLKS(0x0C063E80u);
	r3 = 0x2A0u; UPD(0x0C063E82u, 1);  /* 0C063E80 mov.w @(disp,pc),Rn */
	IF(0x0C063E82u); MACL = r10 * r3;  /* 0C063E82 mul.l Rm,Rn */
	r9 = 0xC29D1D8u; UPD(0x0C063E86u, 3);  /* 0C063E84 mov.l @(disp,pc),Rn */
	IF(0x0C063E86u); r3 = MACL;  /* 0C063E86 sts macl,Rn */
	r0 = 0x250u; UPD(0x0C063E8Au, 2);  /* 0C063E88 mov.w @(disp,pc),Rn */
	r3 += r9;  /* 0C063E8A add Rm,Rn */
	IF(0x0C063E8Cu); r10 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C063E8Eu, 2);  /* 0C063E8C mov.w @(r0,Rm),Rn */
	r1 = 0x100u; UPD(0x0C063E90u, 1);  /* 0C063E8E mov.w @(disp,pc),Rn */
	T = (r10 & r1) == 0;  /* 0C063E90 tst Rm,Rn */
	if (T) { UPD(0x0C063EA6u, 4); goto L_0C063EA6; }  /* 0C063E92 bt */
L_0C063E94: BLKS(0x0C063E94u);
	r2 = 0x287u; UPD(0x0C063E96u, 1);  /* 0C063E94 mov.w @(disp,pc),Rn */
	r2 += r3;  /* 0C063E96 add Rm,Rn */
	r7 = (u32)(s32)(s8)R8(r2); UPD(0x0C063E9Au, 2);  /* 0C063E98 mov.b @Rm,Rn */
	r7 += 0x1u;  /* 0C063E9A add #imm,Rn */
	r0 = r7 & 0xFF;  /* 0C063E9C extu.b Rm,Rn */
	T = r0 == 0x3u;  /* 0C063E9E cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r2, r7); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C063EA6u, 6); goto L_0C063EA6; } UPD(0x0C063EA4u, 1); goto L_0C063EA4; }  /* 0C063EA0 bf/s */
L_0C063EA4: BLKS(0x0C063EA4u);
	W8(r2, r1); UPD(0x0C063EA6u, 1);  /* 0C063EA4 mov.b Rm,@Rn */
L_0C063EA6: BLKS(0x0C063EA6u);
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C063D62u, 3); goto L_0C063D62; }  /* 0C063EA6 bra */
L_0C063EF0: BLKS(0x0C063EF0u);
	r2 = R32(r3 + 0x4u); UPD(0x0C063EF2u, 1);  /* 0C063EF0 mov.l @(disp,Rm),Rn */
	r1 = 0x3u;  /* 0C063EF2 mov #imm,Rn */
	r4 = r2;  /* 0C063EF4 mov Rm,Rn */
	IF(0x0C063EF6u); ARG0(0x441Du); { s32 s_ = (s32)r1; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = 0; else r4 >>= ((~s_ & 31) + 1); }  /* 0C063EF6 shld Rm,Rn */
	r4 += r9;  /* 0C063EF8 add Rm,Rn */
	r0 = R32(r4 + 0x8u); UPD(0x0C063EFCu, 5);  /* 0C063EFA mov.l @(disp,Rm),Rn */
	T = (r0 & r0) == 0;  /* 0C063EFC tst Rm,Rn */
	{ u32 c_ = !T; r2 += 0x1u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C063F06u, 4); goto L_0C063F06; } goto L_0C063F02; }  /* 0C063EFE bf/s */
L_0C063F02: BLKS(0x0C063F02u);
	{ r2 += 0xFFFFFFFFu; /* slot add #imm,Rn */ UPD(0x0C063E14u, 4); goto L_0C063E14; }  /* 0C063F02 bra */
L_0C063F06: BLKS(0x0C063F06u);
	{ W32(r3 + 0x4u, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C063EF0u, 3); goto L_0C063EF0; }  /* 0C063F06 bra */
L_0C063F10: BLKS(0x0C063F10u);
	r7 = 0xC173070u; UPD(0x0C063F12u, 1);  /* 0C063F10 mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s16)R16(r7); UPD(0x0C063F14u, 1);  /* 0C063F12 mov.w @Rm,Rn */
	r5 = 0x400u; UPD(0x0C063F16u, 1);  /* 0C063F14 mov.w @(disp,pc),Rn */
	T = r5 == r1;  /* 0C063F16 cmp/eq Rm,Rn */
	if (T) { UPD(0x0C063F2Eu, 4); goto L_0C063F2E; }  /* 0C063F18 bt */
L_0C063F1A: BLKS(0x0C063F1Au);
	r2 = R32(r3 + 0x4u); UPD(0x0C063F1Cu, 1);  /* 0C063F1A mov.l @(disp,Rm),Rn */
	r3 = r5;  /* 0C063F1C mov Rm,Rn */
	r0 = (u32)(s32)(s16)r1;  /* 0C063F1E exts.w Rm,Rn */
	UPD(0x0C063F20u, 2);
L_0C063F20: BLKS(0x0C063F20u);
	T = r2 == r0;  /* 0C063F20 cmp/eq Rm,Rn */
	{ u32 c_ = T; r7 += 0x2u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C063F60u, 4); goto L_0C063F60; } UPD(0x0C063F26u, 1); goto L_0C063F26; }  /* 0C063F22 bt/s */
L_0C063F26: BLKS(0x0C063F26u);
	r1 = (u32)(s32)(s16)R16(r7); UPD(0x0C063F28u, 1);  /* 0C063F26 mov.w @Rm,Rn */
	T = r3 == r1;  /* 0C063F28 cmp/eq Rm,Rn */
	{ u32 c_ = !T; r0 = (u32)(s32)(s16)r1; /* slot exts.w Rm,Rn */ if (c_) { UPD(0x0C063F20u, 4); goto L_0C063F20; } UPD(0x0C063F2Eu, 1); goto L_0C063F2E; }  /* 0C063F2A bf/s */
L_0C063F2E: BLKS(0x0C063F2Eu);
	T = (r6 & r6) == 0;  /* 0C063F2E tst Rm,Rn */
	if (T) { UPD(0x0C063F36u, 4); goto L_0C063F36; }  /* 0C063F30 bt */
L_0C063F32: BLKS(0x0C063F32u);
	{ IF(0x0C063F34u); ; /* slot nop */ UPD(0x0C063DFCu, 3); goto L_0C063DFC; }  /* 0C063F32 bra */
L_0C063F36: BLKS(0x0C063F36u);
	r2 = 0x2A0u; UPD(0x0C063F38u, 1);  /* 0C063F36 mov.w @(disp,pc),Rn */
	IF(0x0C063F38u); MACL = r10 * r2;  /* 0C063F38 mul.l Rm,Rn */
	r13 = 0xC06A070u; UPD(0x0C063F3Cu, 3);  /* 0C063F3A mov.l @(disp,pc),Rn */
	r3 = 0xC29D1D8u; UPD(0x0C063F3Eu, 1);  /* 0C063F3C mov.l @(disp,pc),Rn */
	IF(0x0C063F3Eu); r7 = MACL;  /* 0C063F3E sts macl,Rn */
	r3 += r7;  /* 0C063F40 add Rm,Rn */
	IF(0x0C063F42u); { u32 t_ = r13; PR = 0x0C063F46u; r4 = R32(r3 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C06A070, 0x0C06A070u, 0x0C063F46u); }  /* 0C063F42 jsr @Rn */
L_0C063F46: BLKS(0x0C063F46u);
	r13 = 0xC064550u; UPD(0x0C063F48u, 1);  /* 0C063F46 mov.l @(disp,pc),Rn */
	r0 = r8;  /* 0C063F48 mov Rm,Rn */
	r0 &= 0x1u;  /* 0C063F4A and #imm,r0 */
	IF(0x0C063F4Cu); { u32 t_ = r13; PR = 0x0C063F50u; r4 = r0; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C064550, 0x0C064550u, 0x0C063F50u); }  /* 0C063F4C jsr @Rn */
L_0C063F50: BLKS(0x0C063F50u);
	{ IF(0x0C063F52u); ; /* slot nop */ UPD(0x0C063DFEu, 3); goto L_0C063DFE; }  /* 0C063F50 bra */
L_0C063F60: BLKS(0x0C063F60u);
	r4 = r6;  /* 0C063F60 mov Rm,Rn */
	r4 += 0x1u;  /* 0C063F62 add #imm,Rn */
	{ r6 = (u32)(s32)(s16)r4; /* slot exts.w Rm,Rn */ UPD(0x0C063F26u, 5); goto L_0C063F26; }  /* 0C063F64 bra */
L_0C063F70: BLKS(0x0C063F70u);
	{ IF(0x0C063F72u); ; /* slot nop */ UPD(0x0C063DC4u, 3); goto L_0C063DC4; }  /* 0C063F70 bra */
L_0C063F80: BLKS(0x0C063F80u);
	r7 = 0xC173070u; UPD(0x0C063F82u, 1);  /* 0C063F80 mov.l @(disp,pc),Rn */
	r3 = (u32)(s32)(s16)R16(r7); UPD(0x0C063F84u, 1);  /* 0C063F82 mov.w @Rm,Rn */
	r5 = 0x400u; UPD(0x0C063F86u, 1);  /* 0C063F84 mov.w @(disp,pc),Rn */
	T = r5 == r3;  /* 0C063F86 cmp/eq Rm,Rn */
	{ u32 c_ = T; T = (r6 & r6) == 0; /* slot tst Rm,Rn */ if (c_) { UPD(0x0C063FA4u, 4); goto L_0C063FA4; } goto L_0C063F8C; }  /* 0C063F88 bt/s */
L_0C063F8C: BLKS(0x0C063F8Cu);
	r8 = 0xC29D1D8u; UPD(0x0C063F8Eu, 2);  /* 0C063F8C mov.l @(disp,pc),Rn */
	r8 += r2;  /* 0C063F8E add Rm,Rn */
	r2 = R32(r8 + 0x4u); UPD(0x0C063F92u, 2);  /* 0C063F90 mov.l @(disp,Rm),Rn */
	r0 = (u32)(s32)(s16)r3;  /* 0C063F92 exts.w Rm,Rn */
	UPD(0x0C063F94u, 1);
L_0C063F94: BLKS(0x0C063F94u);
	T = r2 == r0;  /* 0C063F94 cmp/eq Rm,Rn */
	{ u32 c_ = T; r7 += 0x2u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C063FD0u, 4); goto L_0C063FD0; } UPD(0x0C063F9Au, 1); goto L_0C063F9A; }  /* 0C063F96 bt/s */
L_0C063F9A: BLKS(0x0C063F9Au);
	r3 = (u32)(s32)(s16)R16(r7); UPD(0x0C063F9Cu, 1);  /* 0C063F9A mov.w @Rm,Rn */
	T = r5 == r3;  /* 0C063F9C cmp/eq Rm,Rn */
	{ u32 c_ = !T; r0 = (u32)(s32)(s16)r3; /* slot exts.w Rm,Rn */ if (c_) { UPD(0x0C063F94u, 4); goto L_0C063F94; } goto L_0C063FA2; }  /* 0C063F9E bf/s */
L_0C063FA2: BLKS(0x0C063FA2u);
	T = (r6 & r6) == 0;  /* 0C063FA2 tst Rm,Rn */
	UPD(0x0C063FA4u, 2);
L_0C063FA4: BLKS(0x0C063FA4u);
	{ u32 c_ = T; r8 = r10; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C063FACu, 3); goto L_0C063FAC; } goto L_0C063FA8; }  /* 0C063FA4 bt/s */
L_0C063FA8: BLKS(0x0C063FA8u);
	{ IF(0x0C063FAAu); ; /* slot nop */ UPD(0x0C063D9Cu, 4); goto L_0C063D9C; }  /* 0C063FA8 bra */
L_0C063FAC: BLKS(0x0C063FACu);
	r4 = 0x2A0u; UPD(0x0C063FAEu, 1);  /* 0C063FAC mov.w @(disp,pc),Rn */
	IF(0x0C063FAEu); MACL = r10 * r4;  /* 0C063FAE mul.l Rm,Rn */
	r13 = 0xC06A070u; UPD(0x0C063FB2u, 3);  /* 0C063FB0 mov.l @(disp,pc),Rn */
	r8 += 0x1u;  /* 0C063FB2 add #imm,Rn */
	r7 = 0xC29D1D8u; UPD(0x0C063FB6u, 2);  /* 0C063FB4 mov.l @(disp,pc),Rn */
	IF(0x0C063FB6u); r2 = MACL;  /* 0C063FB6 sts macl,Rn */
	r7 += r2;  /* 0C063FB8 add Rm,Rn */
	IF(0x0C063FBAu); { u32 t_ = r13; PR = 0x0C063FBEu; r4 = R32(r7 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C06A070, 0x0C06A070u, 0x0C063FBEu); }  /* 0C063FBA jsr @Rn */
L_0C063FBE: BLKS(0x0C063FBEu);
	r13 = 0xC064550u; UPD(0x0C063FC0u, 1);  /* 0C063FBE mov.l @(disp,pc),Rn */
	r0 = r8;  /* 0C063FC0 mov Rm,Rn */
	r0 &= 0x1u;  /* 0C063FC2 and #imm,r0 */
	IF(0x0C063FC4u); { u32 t_ = r13; PR = 0x0C063FC8u; r4 = r0; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C064550, 0x0C064550u, 0x0C063FC8u); }  /* 0C063FC4 jsr @Rn */
L_0C063FC8: BLKS(0x0C063FC8u);
	{ IF(0x0C063FCAu); ; /* slot nop */ UPD(0x0C063DA2u, 3); goto L_0C063DA2; }  /* 0C063FC8 bra */
L_0C063FD0: BLKS(0x0C063FD0u);
	r3 = r6;  /* 0C063FD0 mov Rm,Rn */
	r3 += 0x1u;  /* 0C063FD2 add #imm,Rn */
	{ r6 = (u32)(s32)(s16)r3; /* slot exts.w Rm,Rn */ UPD(0x0C063F9Au, 5); goto L_0C063F9A; }  /* 0C063FD4 bra */
L_0C063FE0: BLKS(0x0C063FE0u);
	r5 = 0x3u;  /* 0C063FE0 mov #imm,Rn */
	IF(0x0C063FE2u); ARG0(0x405Du); { s32 s_ = (s32)r5; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C063FE2 shld Rm,Rn */
	IF(0x0C063FE4u); r9 = R32(r0 + r9); UPD(0x0C063FE6u, 3);  /* 0C063FE4 mov.l @(r0,Rm),Rn */
	r0 = 0x250u; UPD(0x0C063FE8u, 1);  /* 0C063FE6 mov.w @(disp,pc),Rn */
	IF(0x0C063FE8u); r0 = (u32)(s32)(s16)R16(r0 + r7); UPD(0x0C063FEAu, 1);  /* 0C063FE8 mov.w @(r0,Rm),Rn */
	r0 &= 0x2u;  /* 0C063FEA and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C063FEC tst Rm,Rn */
	if (T) { UPD(0x0C06401Cu, 5); goto L_0C06401C; }  /* 0C063FEE bt */
L_0C063FF0: BLKS(0x0C063FF0u);
	r2 = R32(r7 + 0x8u); UPD(0x0C063FF2u, 1);  /* 0C063FF0 mov.l @(disp,Rm),Rn */
	r0 = 0x4u;  /* 0C063FF2 mov #imm,Rn */
	r6 = r2;  /* 0C063FF4 mov Rm,Rn */
	IF(0x0C063FF6u); ARG0(0x460Du); { s32 s_ = (s32)r0; if (s_ >= 0) r6 <<= (s_ & 31); else if ((s_ & 31) == 0) r6 = 0; else r6 >>= ((~s_ & 31) + 1); }  /* 0C063FF6 shld Rm,Rn */
	r6 += r9;  /* 0C063FF8 add Rm,Rn */
	r1 = R32(r6 + 0x10u); UPD(0x0C063FFCu, 5);  /* 0C063FFA mov.l @(disp,Rm),Rn */
	T = (r1 & r1) == 0;  /* 0C063FFC tst Rm,Rn */
	{ u32 c_ = !T; r2 += 0x1u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C064006u, 4); goto L_0C064006; } goto L_0C064002; }  /* 0C063FFE bf/s */
L_0C064002: BLKS(0x0C064002u);
	{ W32(r7 + 0x8u, r1); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C064120u, 4); goto L_0C064120; }  /* 0C064002 bra */
L_0C064006: BLKS(0x0C064006u);
	W32(r7 + 0x8u, r2); UPD(0x0C064008u, 1);  /* 0C064006 mov.l Rm,@(disp,Rn) */
L_0C064008: BLKS(0x0C064008u);
	r4 = 0x2A0u; UPD(0x0C06400Au, 1);  /* 0C064008 mov.w @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C06400A mov #imm,Rn */
	IF(0x0C06400Cu); MACL = r10 * r4;  /* 0C06400C mul.l Rm,Rn */
	r8 = 0xC29D1D8u; UPD(0x0C064010u, 4);  /* 0C06400E mov.l @(disp,pc),Rn */
	r7 = 0xC064550u; UPD(0x0C064012u, 1);  /* 0C064010 mov.l @(disp,pc),Rn */
	IF(0x0C064012u); r13 = MACL;  /* 0C064012 sts macl,Rn */
	r8 += r13;  /* 0C064014 add Rm,Rn */
	W32(r8 + 0xCu, r3); UPD(0x0C064018u, 3);  /* 0C064016 mov.l Rm,@(disp,Rn) */
	IF(0x0C064018u); { u32 t_ = r7; PR = 0x0C06401Cu; r4 = (u32)(s32)(s16)r10; /* slot exts.w Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C064550, 0x0C064550u, 0x0C06401Cu); }  /* 0C064018 jsr @Rn */
L_0C06401C: BLKS(0x0C06401Cu);
	r2 = 0x2A0u; UPD(0x0C06401Eu, 1);  /* 0C06401C mov.w @(disp,pc),Rn */
	IF(0x0C06401Eu); MACL = r10 * r2;  /* 0C06401E mul.l Rm,Rn */
	r5 = 0xC29D1D8u; UPD(0x0C064022u, 3);  /* 0C064020 mov.l @(disp,pc),Rn */
	IF(0x0C064022u); r2 = MACL;  /* 0C064022 sts macl,Rn */
	r0 = 0x250u; UPD(0x0C064026u, 2);  /* 0C064024 mov.w @(disp,pc),Rn */
	r2 += r5;  /* 0C064026 add Rm,Rn */
	IF(0x0C064028u); r0 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C06402Au, 2);  /* 0C064028 mov.w @(r0,Rm),Rn */
	r0 &= 0x1u;  /* 0C06402A and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C06402C tst Rm,Rn */
	if (T) { UPD(0x0C064050u, 5); goto L_0C064050; }  /* 0C06402E bt */
L_0C064030: BLKS(0x0C064030u);
	r1 = R32(r2 + 0x8u); UPD(0x0C064032u, 1);  /* 0C064030 mov.l @(disp,Rm),Rn */
	T = (r1 & r1) == 0;  /* 0C064032 tst Rm,Rn */
	{ u32 c_ = T; r0 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C064100u, 4); goto L_0C064100; } goto L_0C064038; }  /* 0C064034 bt/s */
L_0C064038: BLKS(0x0C064038u);
	r1 += 0xFFFFFFFFu;  /* 0C064038 add #imm,Rn */
	W32(r2 + 0x8u, r1); UPD(0x0C06403Cu, 3);  /* 0C06403A mov.l Rm,@(disp,Rn) */
L_0C06403C: BLKS(0x0C06403Cu);
	r4 = 0x2A0u; UPD(0x0C06403Eu, 1);  /* 0C06403C mov.w @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C06403E mov #imm,Rn */
	IF(0x0C064040u); MACL = r10 * r4;  /* 0C064040 mul.l Rm,Rn */
	r7 = 0xC29D1D8u; UPD(0x0C064044u, 4);  /* 0C064042 mov.l @(disp,pc),Rn */
	r0 = 0xC064550u; UPD(0x0C064046u, 1);  /* 0C064044 mov.l @(disp,pc),Rn */
	IF(0x0C064046u); r13 = MACL;  /* 0C064046 sts macl,Rn */
	r7 += r13;  /* 0C064048 add Rm,Rn */
	W32(r7 + 0xCu, r3); UPD(0x0C06404Cu, 3);  /* 0C06404A mov.l Rm,@(disp,Rn) */
	IF(0x0C06404Cu); { u32 t_ = r0; PR = 0x0C064050u; r4 = (u32)(s32)(s16)r10; /* slot exts.w Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C064550, 0x0C064550u, 0x0C064050u); }  /* 0C06404C jsr @Rn */
L_0C064050: BLKS(0x0C064050u);
	r2 = 0x2A0u; UPD(0x0C064052u, 1);  /* 0C064050 mov.w @(disp,pc),Rn */
	r5 = 0x4u;  /* 0C064052 mov #imm,Rn */
	IF(0x0C064054u); MACL = r10 * r2;  /* 0C064054 mul.l Rm,Rn */
	r6 = 0xC29D1D8u; UPD(0x0C064058u, 4);  /* 0C064056 mov.l @(disp,pc),Rn */
	IF(0x0C064058u); r2 = MACL;  /* 0C064058 sts macl,Rn */
	r2 += r6;  /* 0C06405A add Rm,Rn */
	r0 = R32(r2 + 0x8u); UPD(0x0C06405Eu, 3);  /* 0C06405C mov.l @(disp,Rm),Rn */
	IF(0x0C06405Eu); ARG0(0x405Du); { s32 s_ = (s32)r5; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C06405E shld Rm,Rn */
	IF(0x0C064060u); r9 = R32(r0 + r9); UPD(0x0C064062u, 2);  /* 0C064060 mov.l @(r0,Rm),Rn */
	r0 = 0x250u; UPD(0x0C064064u, 1);  /* 0C064062 mov.w @(disp,pc),Rn */
	IF(0x0C064064u); r0 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C064066u, 1);  /* 0C064064 mov.w @(r0,Rm),Rn */
	r0 &= 0x8u;  /* 0C064066 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C064068 tst Rm,Rn */
	if (T) { UPD(0x0C064086u, 5); goto L_0C064086; }  /* 0C06406A bt */
L_0C06406C: BLKS(0x0C06406Cu);
	r3 = R32(r2 + 0xCu); UPD(0x0C06406Eu, 1);  /* 0C06406C mov.l @(disp,Rm),Rn */
	r1 = 0x3u;  /* 0C06406E mov #imm,Rn */
	r8 = r3;  /* 0C064070 mov Rm,Rn */
	IF(0x0C064072u); ARG0(0x481Du); { s32 s_ = (s32)r1; if (s_ >= 0) r8 <<= (s_ & 31); else if ((s_ & 31) == 0) r8 = 0; else r8 >>= ((~s_ & 31) + 1); }  /* 0C064072 shld Rm,Rn */
	r8 += r9;  /* 0C064074 add Rm,Rn */
	r1 = R32(r8 + 0x8u); UPD(0x0C064078u, 5);  /* 0C064076 mov.l @(disp,Rm),Rn */
	T = (r1 & r1) == 0;  /* 0C064078 tst Rm,Rn */
	{ u32 c_ = T; r3 += 0x1u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0640F0u, 4); goto L_0C0640F0; } goto L_0C06407E; }  /* 0C06407A bt/s */
L_0C06407E: BLKS(0x0C06407Eu);
	W32(r2 + 0xCu, r3); UPD(0x0C064080u, 2);  /* 0C06407E mov.l Rm,@(disp,Rn) */
L_0C064080: BLKS(0x0C064080u);
	r0 = 0xC064550u; UPD(0x0C064082u, 1);  /* 0C064080 mov.l @(disp,pc),Rn */
	IF(0x0C064082u); { u32 t_ = r0; PR = 0x0C064086u; r4 = (u32)(s32)(s16)r10; /* slot exts.w Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C064550, 0x0C064550u, 0x0C064086u); }  /* 0C064082 jsr @Rn */
L_0C064086: BLKS(0x0C064086u);
	r3 = 0x2A0u; UPD(0x0C064088u, 1);  /* 0C064086 mov.w @(disp,pc),Rn */
	IF(0x0C064088u); MACL = r10 * r3;  /* 0C064088 mul.l Rm,Rn */
	r7 = 0xC29D1D8u; UPD(0x0C06408Cu, 3);  /* 0C06408A mov.l @(disp,pc),Rn */
	IF(0x0C06408Cu); r2 = MACL;  /* 0C06408C sts macl,Rn */
	r0 = 0x250u; UPD(0x0C064090u, 2);  /* 0C06408E mov.w @(disp,pc),Rn */
	r2 += r7;  /* 0C064090 add Rm,Rn */
	IF(0x0C064092u); r0 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C064094u, 2);  /* 0C064092 mov.w @(r0,Rm),Rn */
	r0 &= 0x4u;  /* 0C064094 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C064096 tst Rm,Rn */
	if (T) { UPD(0x0C0640ACu, 5); goto L_0C0640AC; }  /* 0C064098 bt */
L_0C06409A: BLKS(0x0C06409Au);
	r1 = R32(r2 + 0xCu); UPD(0x0C06409Cu, 1);  /* 0C06409A mov.l @(disp,Rm),Rn */
	T = (r1 & r1) == 0;  /* 0C06409C tst Rm,Rn */
	{ u32 c_ = T; r1 += 0xFFFFFFFFu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0640D0u, 4); goto L_0C0640D0; } goto L_0C0640A2; }  /* 0C06409E bt/s */
L_0C0640A2: BLKS(0x0C0640A2u);
	W32(r2 + 0xCu, r1); UPD(0x0C0640A4u, 2);  /* 0C0640A2 mov.l Rm,@(disp,Rn) */
L_0C0640A4: BLKS(0x0C0640A4u);
	r9 = 0xC064550u; UPD(0x0C0640A6u, 1);  /* 0C0640A4 mov.l @(disp,pc),Rn */
	IF(0x0C0640A6u); { u32 t_ = r9; PR = 0x0C0640AAu; r4 = (u32)(s32)(s16)r10; /* slot exts.w Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C064550, 0x0C064550u, 0x0C0640AAu); }  /* 0C0640A6 jsr @Rn */
L_0C0640AA: BLKS(0x0C0640AAu);
	IF(0x0C0640AAu); ;  /* 0C0640AA nop */
	UPD(0x0C0640ACu, 1);
L_0C0640AC: BLKS(0x0C0640ACu);
	r8 = r10;  /* 0C0640AC mov Rm,Rn */
	UPD(0x0C0640AEu, 1);
L_0C0640AE: BLKS(0x0C0640AEu);
	r8 += 0x1u;  /* 0C0640AE add #imm,Rn */
	UPD(0x0C0640B0u, 1);
L_0C0640B0: BLKS(0x0C0640B0u);
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C063D62u, 3); goto L_0C063D62; }  /* 0C0640B0 bra */
L_0C0640D0: BLKS(0x0C0640D0u);
	r0 = r2;  /* 0C0640D0 mov Rm,Rn */
	IF(0x0C0640D2u); ;  /* 0C0640D2 nop */
	UPD(0x0C0640D4u, 2);
L_0C0640D4: BLKS(0x0C0640D4u);
	r2 = R32(r0 + 0xCu); UPD(0x0C0640D6u, 1);  /* 0C0640D4 mov.l @(disp,Rm),Rn */
	r5 = 0x3u;  /* 0C0640D6 mov #imm,Rn */
	r4 = r2;  /* 0C0640D8 mov Rm,Rn */
	IF(0x0C0640DAu); ARG0(0x445Du); { s32 s_ = (s32)r5; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = 0; else r4 >>= ((~s_ & 31) + 1); }  /* 0C0640DA shld Rm,Rn */
	r4 += r9;  /* 0C0640DC add Rm,Rn */
	r13 = R32(r4 + 0x8u); UPD(0x0C0640E0u, 5);  /* 0C0640DE mov.l @(disp,Rm),Rn */
	T = (r13 & r13) == 0;  /* 0C0640E0 tst Rm,Rn */
	if (T) { UPD(0x0C0640A4u, 4); goto L_0C0640A4; }  /* 0C0640E2 bt */
L_0C0640E4: BLKS(0x0C0640E4u);
	r2 += 0x1u;  /* 0C0640E4 add #imm,Rn */
	{ W32(r0 + 0xCu, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0640D4u, 4); goto L_0C0640D4; }  /* 0C0640E6 bra */
L_0C0640F0: BLKS(0x0C0640F0u);
	{ W32(r2 + 0xCu, r1); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C064080u, 3); goto L_0C064080; }  /* 0C0640F0 bra */
L_0C064100: BLKS(0x0C064100u);
	r2 = R32(r0 + 0x8u); UPD(0x0C064102u, 1);  /* 0C064100 mov.l @(disp,Rm),Rn */
	r1 = 0x4u;  /* 0C064102 mov #imm,Rn */
	r8 = r2;  /* 0C064104 mov Rm,Rn */
	IF(0x0C064106u); ARG0(0x481Du); { s32 s_ = (s32)r1; if (s_ >= 0) r8 <<= (s_ & 31); else if ((s_ & 31) == 0) r8 = 0; else r8 >>= ((~s_ & 31) + 1); }  /* 0C064106 shld Rm,Rn */
	r8 += r9;  /* 0C064108 add Rm,Rn */
	r6 = R32(r8 + 0x10u); UPD(0x0C06410Cu, 5);  /* 0C06410A mov.l @(disp,Rm),Rn */
	T = (r6 & r6) == 0;  /* 0C06410C tst Rm,Rn */
	{ u32 c_ = T; r2 += 0x1u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C06403Cu, 4); goto L_0C06403C; } goto L_0C064112; }  /* 0C06410E bt/s */
L_0C064112: BLKS(0x0C064112u);
	{ W32(r0 + 0x8u, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C064100u, 4); goto L_0C064100; }  /* 0C064112 bra */
L_0C064120: BLKS(0x0C064120u);
	{ IF(0x0C064122u); ; /* slot nop */ UPD(0x0C064008u, 3); goto L_0C064008; }  /* 0C064120 bra */
L_0C064130: BLKS(0x0C064130u);
	if (!T) { UPD(0x0C064136u, 3); goto L_0C064136; }  /* 0C064130 bf */
L_0C064132: BLKS(0x0C064132u);
	{ IF(0x0C064134u); ; /* slot nop */ UPD(0x0C064340u, 3); goto L_0C064340; }  /* 0C064132 bra */
L_0C064136: BLKS(0x0C064136u);
	r2 = 0x50u;  /* 0C064136 mov #imm,Rn */
	T = (s32)r0 > (s32)r2;  /* 0C064138 cmp/gt Rm,Rn */
	{ u32 c_ = !T; T = r0 == 0x40u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C064142u, 5); goto L_0C064142; } goto L_0C06413E; }  /* 0C06413A bf/s */
L_0C06413E: BLKS(0x0C06413Eu);
	{ r8 = r10; /* slot mov Rm,Rn */ UPD(0x0C0642C0u, 4); goto L_0C0642C0; }  /* 0C06413E bra */
L_0C064142: BLKS(0x0C064142u);
	r8 = r10;  /* 0C064142 mov Rm,Rn */
	{ u32 c_ = !T; r8 += 0x1u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0640B0u, 4); goto L_0C0640B0; } goto L_0C064148; }  /* 0C064144 bf/s */
L_0C064148: BLKS(0x0C064148u);
	r7 += 0x20u;  /* 0C064148 add #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r7); UPD(0x0C06414Cu, 3);  /* 0C06414A mov.b @Rm,Rn */
	r5 = 0xFFFFFFFFu;  /* 0C06414C mov #imm,Rn */
	r7 += 0xFFFFFFE0u;  /* 0C06414E add #imm,Rn */
	r9 = 0x287u; UPD(0x0C064152u, 3);  /* 0C064150 mov.w @(disp,pc),Rn */
	r0 = r7;  /* 0C064152 mov Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C064154 tst Rm,Rn */
	IF(0x0C064156u); r6 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C064158u, 3);  /* 0C064156 mov.b @(r0,Rm),Rn */
	{ u32 t_ = 0u - r5, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r8 = r_; }  /* 0C064158 negc Rm,Rn */
	T = (r6 & r6) == 0;  /* 0C06415A tst Rm,Rn */
	{ u32 t_ = 0u - r5, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r4 = r_; }  /* 0C06415C negc Rm,Rn */
	T = (r8 & r4) == 0;  /* 0C06415E tst Rm,Rn */
	if (T) { UPD(0x0C0640ACu, 7); goto L_0C0640AC; }  /* 0C064160 bt */
L_0C064162: BLKS(0x0C064162u);
	r7 += 0x21u;  /* 0C064162 add #imm,Rn */
	r4 = 0xA8u; UPD(0x0C064166u, 2);  /* 0C064164 mov.w @(disp,pc),Rn */
	IF(0x0C064166u); MACL = r10 * r4;  /* 0C064166 mul.l Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C06416Au, 3);  /* 0C064168 mov.b @Rm,Rn */
	IF(0x0C06416Au); r0 = MACL;  /* 0C06416A sts macl,Rn */
	r0 += r6;  /* 0C06416C add Rm,Rn */
	IF(0x0C06416Eu); r0 <<= 2;  /* 0C06416E shll2 Rn */
	r3 = 0x1A4u; UPD(0x0C064172u, 4);  /* 0C064170 mov.w @(disp,pc),Rn */
	r0 += r11;  /* 0C064172 add Rm,Rn */
	r3 += r0;  /* 0C064174 add Rm,Rn */
	r4 += 0x7Cu;  /* 0C064176 add #imm,Rn */
	r2 = R32(r3); UPD(0x0C06417Au, 4);  /* 0C064178 mov.l @Rm,Rn */
	IF(0x0C06417Au); r13 = R32(r0 + r4); UPD(0x0C06417Cu, 1);  /* 0C06417A mov.l @(r0,Rm),Rn */
	T = (s32)r2 >= (s32)r13;  /* 0C06417C cmp/ge Rm,Rn */
	{ u32 c_ = T; r7 += 0xFFFFFFDFu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C064192u, 4); goto L_0C064192; } goto L_0C064182; }  /* 0C06417E bt/s */
L_0C064182: BLKS(0x0C064182u);
	r0 = 0x250u; UPD(0x0C064184u, 2);  /* 0C064182 mov.w @(disp,pc),Rn */
	IF(0x0C064184u); r0 = (u32)(s32)(s16)R16(r0 + r7); UPD(0x0C064186u, 1);  /* 0C064184 mov.w @(r0,Rm),Rn */
	r0 &= 0x1u;  /* 0C064186 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C064188 tst Rm,Rn */
	if (T) { UPD(0x0C064192u, 5); goto L_0C064192; }  /* 0C06418A bt */
L_0C06418C: BLKS(0x0C06418Cu);
	r7 = 0x10000u; UPD(0x0C06418Eu, 1);  /* 0C06418C mov.l @(disp,pc),Rn */
	r2 += r7;  /* 0C06418E add Rm,Rn */
	W32(r3, r2); UPD(0x0C064192u, 2);  /* 0C064190 mov.l Rm,@Rn */
L_0C064192: BLKS(0x0C064192u);
	r3 = 0x2A0u; UPD(0x0C064194u, 1);  /* 0C064192 mov.w @(disp,pc),Rn */
	IF(0x0C064194u); MACL = r10 * r3;  /* 0C064194 mul.l Rm,Rn */
	r4 = 0xC29D1D8u; UPD(0x0C064198u, 3);  /* 0C064196 mov.l @(disp,pc),Rn */
	IF(0x0C064198u); r0 = MACL;  /* 0C064198 sts macl,Rn */
	r0 += r4;  /* 0C06419A add Rm,Rn */
	r3 += 0xFFFFFFB0u;  /* 0C06419C add #imm,Rn */
	IF(0x0C06419Eu); r7 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C0641A0u, 4);  /* 0C06419E mov.w @(r0,Rm),Rn */
	r0 = r7;  /* 0C0641A0 mov Rm,Rn */
	r0 &= 0x2u;  /* 0C0641A2 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0641A4 tst Rm,Rn */
	{ u32 c_ = T; r0 = r7; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0641C4u, 6); goto L_0C0641C4; } goto L_0C0641AA; }  /* 0C0641A6 bt/s */
L_0C0641AA: BLKS(0x0C0641AAu);
	r9 = 0xA8u; UPD(0x0C0641ACu, 2);  /* 0C0641AA mov.w @(disp,pc),Rn */
	IF(0x0C0641ACu); MACL = r10 * r9;  /* 0C0641AC mul.l Rm,Rn */
	r5 = 0x1A4u; UPD(0x0C0641B0u, 3);  /* 0C0641AE mov.w @(disp,pc),Rn */
	IF(0x0C0641B0u); r0 = MACL;  /* 0C0641B0 sts macl,Rn */
	r0 += r6;  /* 0C0641B2 add Rm,Rn */
	IF(0x0C0641B4u); r0 <<= 2;  /* 0C0641B4 shll2 Rn */
	r0 += r4;  /* 0C0641B6 add Rm,Rn */
	r0 += r5;  /* 0C0641B8 add Rm,Rn */
	r1 = R32(r0); UPD(0x0C0641BCu, 6);  /* 0C0641BA mov.l @Rm,Rn */
	r8 = 0xFFFF0000u; UPD(0x0C0641BEu, 1);  /* 0C0641BC mov.l @(disp,pc),Rn */
	r1 += r8;  /* 0C0641BE add Rm,Rn */
	W32(r0, r1); UPD(0x0C0641C2u, 2);  /* 0C0641C0 mov.l Rm,@Rn */
	r0 = r7;  /* 0C0641C2 mov Rm,Rn */
	UPD(0x0C0641C4u, 1);
L_0C0641C4: BLKS(0x0C0641C4u);
	r0 &= 0x8u;  /* 0C0641C4 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0641C6 tst Rm,Rn */
	{ u32 c_ = T; r9 = r7; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0641E6u, 5); goto L_0C0641E6; } goto L_0C0641CC; }  /* 0C0641C8 bt/s */
L_0C0641CC: BLKS(0x0C0641CCu);
	r8 = 0xA8u; UPD(0x0C0641CEu, 2);  /* 0C0641CC mov.w @(disp,pc),Rn */
	IF(0x0C0641CEu); MACL = r10 * r8;  /* 0C0641CE mul.l Rm,Rn */
	r3 = 0x1E4u; UPD(0x0C0641D2u, 3);  /* 0C0641D0 mov.w @(disp,pc),Rn */
	IF(0x0C0641D2u); r13 = MACL;  /* 0C0641D2 sts macl,Rn */
	r13 += r6;  /* 0C0641D4 add Rm,Rn */
	IF(0x0C0641D6u); r13 <<= 2;  /* 0C0641D6 shll2 Rn */
	r13 += r4;  /* 0C0641D8 add Rm,Rn */
	r13 += r3;  /* 0C0641DA add Rm,Rn */
	r0 = R32(r13); UPD(0x0C0641DEu, 6);  /* 0C0641DC mov.l @Rm,Rn */
	r2 = 0x10000u; UPD(0x0C0641E0u, 1);  /* 0C0641DE mov.l @(disp,pc),Rn */
	r0 += r2;  /* 0C0641E0 add Rm,Rn */
	W32(r13, r0); UPD(0x0C0641E4u, 2);  /* 0C0641E2 mov.l Rm,@Rn */
	r9 = r7;  /* 0C0641E4 mov Rm,Rn */
	UPD(0x0C0641E6u, 1);
L_0C0641E6: BLKS(0x0C0641E6u);
	r7 = 0xA8u; UPD(0x0C0641E8u, 1);  /* 0C0641E6 mov.w @(disp,pc),Rn */
	r5 = 0x1u;  /* 0C0641E8 mov #imm,Rn */
	IF(0x0C0641EAu); MACL = r10 * r7;  /* 0C0641EA mul.l Rm,Rn */
	IF(0x0C0641ECu); r9 >>= 2;  /* 0C0641EC shlr2 Rn */
	r9 &= r5;  /* 0C0641EE and Rm,Rn */
	IF(0x0C0641F0u); r5 = MACL;  /* 0C0641F0 sts macl,Rn */
	r5 += r6;  /* 0C0641F2 add Rm,Rn */
	IF(0x0C0641F4u); r5 <<= 2;  /* 0C0641F4 shll2 Rn */
	r3 = 0x1E4u; UPD(0x0C0641F8u, 9);  /* 0C0641F6 mov.w @(disp,pc),Rn */
	r5 += r4;  /* 0C0641F8 add Rm,Rn */
	r0 = 0x164u; UPD(0x0C0641FCu, 2);  /* 0C0641FA mov.w @(disp,pc),Rn */
	r3 += r5;  /* 0C0641FC add Rm,Rn */
	r4 = R32(r3); UPD(0x0C064200u, 2);  /* 0C0641FE mov.l @Rm,Rn */
	IF(0x0C064200u); r8 = R32(r0 + r5); UPD(0x0C064202u, 1);  /* 0C064200 mov.l @(r0,Rm),Rn */
	T = (s32)r4 > (s32)r8;  /* 0C064202 cmp/gt Rm,Rn */
	IF(0x0C064204u); r6 = T;  /* 0C064204 movt Rn */
	r9 &= r6;  /* 0C064206 and Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C064208 tst Rm,Rn */
	if (T) { UPD(0x0C064214u, 7); goto L_0C064214; }  /* 0C06420A bt */
L_0C06420C: BLKS(0x0C06420Cu);
	r13 = 0xFFFF0000u; UPD(0x0C06420Eu, 1);  /* 0C06420C mov.l @(disp,pc),Rn */
	r13 += r4;  /* 0C06420E add Rm,Rn */
	W32(r3, r13); UPD(0x0C064212u, 2);  /* 0C064210 mov.l Rm,@Rn */
	r4 = r13;  /* 0C064212 mov Rm,Rn */
	UPD(0x0C064214u, 1);
L_0C064214: BLKS(0x0C064214u);
	r0 = 0x124u; UPD(0x0C064216u, 1);  /* 0C064214 mov.w @(disp,pc),Rn */
	IF(0x0C064216u); r9 = R32(r0 + r5); UPD(0x0C064218u, 1);  /* 0C064216 mov.l @(r0,Rm),Rn */
	r0 = 0x1A4u; UPD(0x0C06421Au, 1);  /* 0C064218 mov.w @(disp,pc),Rn */
	IF(0x0C06421Au); r3 = R32(r0 + r5); UPD(0x0C06421Cu, 1);  /* 0C06421A mov.l @(r0,Rm),Rn */
	r0 = r9;  /* 0C06421C mov Rm,Rn */
	r0 += r3;  /* 0C06421E add Rm,Rn */
	r7 = r0;  /* 0C064220 mov Rm,Rn */
	IF(0x0C064222u); T = r7 >> 31; r7 = (r7 << 1) | T;  /* 0C064222 rotl Rn */
	IF(0x0C064224u); r6 = T;  /* 0C064224 movt Rn */
	r7 = r8;  /* 0C064226 mov Rm,Rn */
	r0 += r6;  /* 0C064228 add Rm,Rn */
	r7 += r4;  /* 0C06422A add Rm,Rn */
	IF(0x0C06422Cu); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C06422C shar Rn */
	r13 = r7;  /* 0C06422E mov Rm,Rn */
	IF(0x0C064230u); T = r13 >> 31; r13 = (r13 << 1) | T;  /* 0C064230 rotl Rn */
	IF(0x0C064232u); r1 = T;  /* 0C064232 movt Rn */
	W32(r5 + 0x24u, r0); UPD(0x0C064236u, 13);  /* 0C064234 mov.l Rm,@(disp,Rn) */
	r7 += r1;  /* 0C064236 add Rm,Rn */
	r9 -= r3;  /* 0C064238 sub Rm,Rn */
	IF(0x0C06423Au); T = r7 & 1; r7 = (u32)((s32)r7 >> 1);  /* 0C06423A shar Rn */
	r0 = r9;  /* 0C06423C mov Rm,Rn */
	IF(0x0C06423Eu); T = r0 >> 31; r0 = (r0 << 1) | T;  /* 0C06423E rotl Rn */
	IF(0x0C064240u); r1 = T;  /* 0C064240 movt Rn */
	r6 = r5;  /* 0C064242 mov Rm,Rn */
	r6 += 0x64u;  /* 0C064244 add #imm,Rn */
	r2 = 0xA4u; UPD(0x0C064248u, 9);  /* 0C064246 mov.w @(disp,pc),Rn */
	r1 += r9;  /* 0C064248 add Rm,Rn */
	IF(0x0C06424Au); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C06424A shar Rn */
	W32(r6, r7); UPD(0x0C06424Eu, 3);  /* 0C06424C mov.l Rm,@Rn */
	IF(0x0C06424Eu); T = (s32)r1 >= 0;  /* 0C06424E cmp/pz Rn */
	{ u32 c_ = !T; r2 += r5; /* slot add Rm,Rn */ if (c_) { UPD(0x0C064290u, 4); goto L_0C064290; } UPD(0x0C064254u, 1); goto L_0C064254; }  /* 0C064250 bf/s */
L_0C064254: BLKS(0x0C064254u);
	W32(r2, r1); UPD(0x0C064256u, 1);  /* 0C064254 mov.l Rm,@Rn */
	r3 = 0xE4u; UPD(0x0C064258u, 1);  /* 0C064256 mov.w @(disp,pc),Rn */
	r1 = r8;  /* 0C064258 mov Rm,Rn */
	r3 += r5;  /* 0C06425A add Rm,Rn */
	UPD(0x0C06425Cu, 2);
L_0C06425C: BLKS(0x0C06425Cu);
	r1 -= r4;  /* 0C06425C sub Rm,Rn */
	r4 = r1;  /* 0C06425E mov Rm,Rn */
	IF(0x0C064260u); T = r4 >> 31; r4 = (r4 << 1) | T;  /* 0C064260 rotl Rn */
	IF(0x0C064262u); r2 = T;  /* 0C064262 movt Rn */
	r2 += r1;  /* 0C064264 add Rm,Rn */
	IF(0x0C064266u); T = r2 & 1; r2 = (u32)((s32)r2 >> 1);  /* 0C064266 shar Rn */
	IF(0x0C064268u); T = (s32)r2 >= 0;  /* 0C064268 cmp/pz Rn */
	if (!T) { UPD(0x0C064280u, 10); goto L_0C064280; }  /* 0C06426A bf */
L_0C06426C: BLKS(0x0C06426Cu);
	W32(r3, r2); UPD(0x0C06426Eu, 1);  /* 0C06426C mov.l Rm,@Rn */
L_0C06426E: BLKS(0x0C06426Eu);
	{ r8 = r10; /* slot mov Rm,Rn */ UPD(0x0C0640AEu, 3); goto L_0C0640AE; }  /* 0C06426E bra */
L_0C064280: BLKS(0x0C064280u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C06426Cu, 3); goto L_0C06426C; }  /* 0C064280 bra */
L_0C064290: BLKS(0x0C064290u);
	{ r1 = 0u - r1; /* slot neg Rm,Rn */ UPD(0x0C064254u, 3); goto L_0C064254; }  /* 0C064290 bra */
L_0C0642C0: BLKS(0x0C0642C0u);
	T = r0 == 0x60u;  /* 0C0642C0 cmp/eq #imm,r0 */
	{ u32 c_ = T; r8 += 0x1u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0642CAu, 4); goto L_0C0642CA; } goto L_0C0642C6; }  /* 0C0642C2 bt/s */
L_0C0642C6: BLKS(0x0C0642C6u);
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C063D62u, 4); goto L_0C063D62; }  /* 0C0642C6 bra */
L_0C0642CA: BLKS(0x0C0642CAu);
	r2 = R32(r7 + 0x10u); UPD(0x0C0642CCu, 1);  /* 0C0642CA mov.l @(disp,Rm),Rn */
	r8 = 0x13FFFFFu; UPD(0x0C0642CEu, 1);  /* 0C0642CC mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r8;  /* 0C0642CE cmp/gt Rm,Rn */
	if (T) { UPD(0x0C0642E2u, 4); goto L_0C0642E2; }  /* 0C0642D0 bt */
L_0C0642D2: BLKS(0x0C0642D2u);
	r0 = 0x250u; UPD(0x0C0642D4u, 1);  /* 0C0642D2 mov.w @(disp,pc),Rn */
	IF(0x0C0642D4u); r0 = (u32)(s32)(s16)R16(r0 + r7); UPD(0x0C0642D6u, 1);  /* 0C0642D4 mov.w @(r0,Rm),Rn */
	r0 &= 0x1u;  /* 0C0642D6 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0642D8 tst Rm,Rn */
	if (T) { UPD(0x0C0642E2u, 5); goto L_0C0642E2; }  /* 0C0642DA bt */
L_0C0642DC: BLKS(0x0C0642DCu);
	r5 = 0x10000u; UPD(0x0C0642DEu, 1);  /* 0C0642DC mov.l @(disp,pc),Rn */
	r2 += r5;  /* 0C0642DE add Rm,Rn */
	W32(r7 + 0x10u, r2); UPD(0x0C0642E2u, 2);  /* 0C0642E0 mov.l Rm,@(disp,Rn) */
L_0C0642E2: BLKS(0x0C0642E2u);
	r3 = 0x2A0u; UPD(0x0C0642E4u, 1);  /* 0C0642E2 mov.w @(disp,pc),Rn */
	IF(0x0C0642E4u); MACL = r10 * r3;  /* 0C0642E4 mul.l Rm,Rn */
	r2 = 0xC29D1D8u; UPD(0x0C0642E8u, 3);  /* 0C0642E6 mov.l @(disp,pc),Rn */
	r0 = 0x250u; UPD(0x0C0642EAu, 1);  /* 0C0642E8 mov.w @(disp,pc),Rn */
	IF(0x0C0642EAu); r7 = MACL;  /* 0C0642EA sts macl,Rn */
	r7 += r2;  /* 0C0642EC add Rm,Rn */
	IF(0x0C0642EEu); r2 = (u32)(s32)(s16)R16(r0 + r7); UPD(0x0C0642F0u, 3);  /* 0C0642EE mov.w @(r0,Rm),Rn */
	r3 = R32(r7 + 0x10u); UPD(0x0C0642F2u, 1);  /* 0C0642F0 mov.l @(disp,Rm),Rn */
	IF(0x0C0642F2u); T = r2 & 1; r2 = (u32)((s32)r2 >> 1);  /* 0C0642F2 shar Rn */
	IF(0x0C0642F4u); T = (s32)r3 > 0;  /* 0C0642F4 cmp/pl Rn */
	r0 = r2;  /* 0C0642F6 mov Rm,Rn */
	IF(0x0C0642F8u); r9 = T;  /* 0C0642F8 movt Rn */
	r0 &= 0x1u;  /* 0C0642FA and #imm,r0 */
	r0 &= r9;  /* 0C0642FC and Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0642FE tst Rm,Rn */
	if (T) { UPD(0x0C064308u, 10); goto L_0C064308; }  /* 0C064300 bt */
L_0C064302: BLKS(0x0C064302u);
	r13 = 0xFFFF0000u; UPD(0x0C064304u, 1);  /* 0C064302 mov.l @(disp,pc),Rn */
	r3 += r13;  /* 0C064304 add Rm,Rn */
	W32(r7 + 0x10u, r3); UPD(0x0C064308u, 2);  /* 0C064306 mov.l Rm,@(disp,Rn) */
L_0C064308: BLKS(0x0C064308u);
	r3 = R32(r7 + 0x14u); UPD(0x0C06430Au, 1);  /* 0C064308 mov.l @(disp,Rm),Rn */
	r0 = r2;  /* 0C06430A mov Rm,Rn */
	r4 = 0xEFFFFFu; UPD(0x0C06430Eu, 2);  /* 0C06430C mov.l @(disp,pc),Rn */
	IF(0x0C06430Eu); r0 >>= 2;  /* 0C06430E shlr2 Rn */
	T = (s32)r4 >= (s32)r3;  /* 0C064310 cmp/ge Rm,Rn */
	IF(0x0C064312u); r6 = T;  /* 0C064312 movt Rn */
	r0 &= 0x1u;  /* 0C064314 and #imm,r0 */
	r0 &= r6;  /* 0C064316 and Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C064318 tst Rm,Rn */
	if (T) { UPD(0x0C064324u, 9); goto L_0C064324; }  /* 0C06431A bt */
L_0C06431C: BLKS(0x0C06431Cu);
	r0 = 0x10000u; UPD(0x0C06431Eu, 1);  /* 0C06431C mov.l @(disp,pc),Rn */
	r0 += r3;  /* 0C06431E add Rm,Rn */
	W32(r7 + 0x14u, r0); UPD(0x0C064322u, 2);  /* 0C064320 mov.l Rm,@(disp,Rn) */
	r3 = r0;  /* 0C064322 mov Rm,Rn */
	UPD(0x0C064324u, 1);
L_0C064324: BLKS(0x0C064324u);
	IF(0x0C064324u); T = r2 & 1; r2 = (u32)((s32)r2 >> 1);  /* 0C064324 shar Rn */
	IF(0x0C064326u); T = (s32)r3 > 0;  /* 0C064326 cmp/pl Rn */
	r1 = 0x1u;  /* 0C064328 mov #imm,Rn */
	IF(0x0C06432Au); r8 = T;  /* 0C06432A movt Rn */
	r2 &= r1;  /* 0C06432C and Rm,Rn */
	r2 &= r8;  /* 0C06432E and Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C064330 tst Rm,Rn */
	if (T) { UPD(0x0C06426Eu, 10); goto L_0C06426E; }  /* 0C064332 bt */
L_0C064334: BLKS(0x0C064334u);
	r5 = 0xFFFF0000u; UPD(0x0C064336u, 1);  /* 0C064334 mov.l @(disp,pc),Rn */
	r5 += r3;  /* 0C064336 add Rm,Rn */
	W32(r7 + 0x14u, r5); UPD(0x0C06433Au, 2);  /* 0C064338 mov.l Rm,@(disp,Rn) */
L_0C06433A: BLKS(0x0C06433Au);
	{ r8 = r10; /* slot mov Rm,Rn */ UPD(0x0C0640AEu, 3); goto L_0C0640AE; }  /* 0C06433A bra */
L_0C064340: BLKS(0x0C064340u);
	r0 = 0x250u; UPD(0x0C064342u, 1);  /* 0C064340 mov.w @(disp,pc),Rn */
	IF(0x0C064342u); r0 = (u32)(s32)(s16)R16(r0 + r7); UPD(0x0C064344u, 1);  /* 0C064342 mov.w @(r0,Rm),Rn */
	r0 &= 0x8u;  /* 0C064344 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C064346 tst Rm,Rn */
	{ u32 c_ = T; r3 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0643A0u, 5); goto L_0C0643A0; } goto L_0C06434C; }  /* 0C064348 bt/s */
L_0C06434C: BLKS(0x0C06434Cu);
	r7 = 0xC29D1D8u; UPD(0x0C06434Eu, 2);  /* 0C06434C mov.l @(disp,pc),Rn */
	r7 += r2;  /* 0C06434E add Rm,Rn */
	r0 = r7;  /* 0C064350 mov Rm,Rn */
	IF(0x0C064352u); r7 = R32(r0 + r6); UPD(0x0C064354u, 3);  /* 0C064352 mov.l @(r0,Rm),Rn */
	r2 = 0xC17304Cu; UPD(0x0C064356u, 1);  /* 0C064354 mov.l @(disp,pc),Rn */
	IF(0x0C064356u); ;  /* 0C064356 nop */
	UPD(0x0C064358u, 1);
L_0C064358: BLKS(0x0C064358u);
	{ u32 v_ = R32(r2); r2 += 4; r13 = v_; } UPD(0x0C06435Au, 1);  /* 0C064358 mov.l @Rm+,Rn */
	T = r7 == r13;  /* 0C06435A cmp/eq Rm,Rn */
	{ u32 c_ = T; r9 = r3; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C064370u, 4); goto L_0C064370; } goto L_0C064360; }  /* 0C06435C bt/s */
L_0C064360: BLKS(0x0C064360u);
	r9 += 0x1u;  /* 0C064360 add #imm,Rn */
	{ r3 = (u32)(s32)(s16)r9; /* slot exts.w Rm,Rn */ UPD(0x0C064358u, 5); goto L_0C064358; }  /* 0C064362 bra */
L_0C064370: BLKS(0x0C064370u);
	r6 = r3;  /* 0C064370 mov Rm,Rn */
	r6 += 0x1u;  /* 0C064372 add #imm,Rn */
	r3 = 0xC17304Cu; UPD(0x0C064376u, 3);  /* 0C064374 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s16)r6;  /* 0C064376 exts.w Rm,Rn */
	IF(0x0C064378u); r0 <<= 2;  /* 0C064378 shll2 Rn */
	IF(0x0C06437Au); r2 = R32(r0 + r3); UPD(0x0C06437Cu, 3);  /* 0C06437A mov.l @(r0,Rm),Rn */
	T = (r2 & r2) == 0;  /* 0C06437C tst Rm,Rn */
	if (!T) { UPD(0x0C064382u, 4); goto L_0C064382; }  /* 0C06437E bf */
L_0C064380: BLKS(0x0C064380u);
	r0 = 0x0u;  /* 0C064380 mov #imm,Rn */
	UPD(0x0C064382u, 1);
L_0C064382: BLKS(0x0C064382u);
	r7 = 0x2A0u; UPD(0x0C064384u, 1);  /* 0C064382 mov.w @(disp,pc),Rn */
	IF(0x0C064384u); MACL = r10 * r7;  /* 0C064384 mul.l Rm,Rn */
	IF(0x0C064386u); r8 = R32(r0 + r3); UPD(0x0C064388u, 3);  /* 0C064386 mov.l @(r0,Rm),Rn */
	r5 = 0xC29D1D8u; UPD(0x0C06438Au, 1);  /* 0C064388 mov.l @(disp,pc),Rn */
	IF(0x0C06438Au); r4 = MACL;  /* 0C06438A sts macl,Rn */
	r0 = 0x224u; UPD(0x0C06438Eu, 2);  /* 0C06438C mov.w @(disp,pc),Rn */
	r4 += r5;  /* 0C06438E add Rm,Rn */
	IF(0x0C064390u); W32(r0 + r4, r8); UPD(0x0C064392u, 2);  /* 0C064390 mov.l Rm,@(r0,Rn) */
	r3 = 0xC064550u; UPD(0x0C064394u, 1);  /* 0C064392 mov.l @(disp,pc),Rn */
	r0 = 0x0u;  /* 0C064394 mov #imm,Rn */
	W32(r4 + 0xCu, r0); UPD(0x0C064398u, 2);  /* 0C064396 mov.l Rm,@(disp,Rn) */
	W32(r4 + 0x8u, r0); UPD(0x0C06439Au, 1);  /* 0C064398 mov.l Rm,@(disp,Rn) */
	W32(r4 + 0x4u, r0); UPD(0x0C06439Cu, 1);  /* 0C06439A mov.l Rm,@(disp,Rn) */
	IF(0x0C06439Cu); { u32 t_ = r3; PR = 0x0C0643A0u; r4 = (u32)(s32)(s16)r10; /* slot exts.w Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C064550, 0x0C064550u, 0x0C0643A0u); }  /* 0C06439C jsr @Rn */
L_0C0643A0: BLKS(0x0C0643A0u);
	r13 = 0x2A0u; UPD(0x0C0643A2u, 1);  /* 0C0643A0 mov.w @(disp,pc),Rn */
	IF(0x0C0643A2u); MACL = r10 * r13;  /* 0C0643A2 mul.l Rm,Rn */
	r9 = 0xC29D1D8u; UPD(0x0C0643A6u, 3);  /* 0C0643A4 mov.l @(disp,pc),Rn */
	IF(0x0C0643A6u); r2 = MACL;  /* 0C0643A6 sts macl,Rn */
	r0 = 0x250u; UPD(0x0C0643AAu, 2);  /* 0C0643A8 mov.w @(disp,pc),Rn */
	r2 += r9;  /* 0C0643AA add Rm,Rn */
	IF(0x0C0643ACu); r0 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C0643AEu, 2);  /* 0C0643AC mov.w @(r0,Rm),Rn */
	r0 &= 0x4u;  /* 0C0643AE and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0643B0 tst Rm,Rn */
	if (T) { UPD(0x0C06433Au, 5); goto L_0C06433A; }  /* 0C0643B2 bt */
L_0C0643B4: BLKS(0x0C0643B4u);
	r3 = 0x0u;  /* 0C0643B4 mov #imm,Rn */
	r0 = 0x224u; UPD(0x0C0643B8u, 2);  /* 0C0643B6 mov.w @(disp,pc),Rn */
	IF(0x0C0643B8u); r7 = R32(r0 + r2); UPD(0x0C0643BAu, 1);  /* 0C0643B8 mov.l @(r0,Rm),Rn */
	r2 = 0xC17304Cu; UPD(0x0C0643BCu, 1);  /* 0C0643BA mov.l @(disp,pc),Rn */
L_0C0643BC: BLKS(0x0C0643BCu);
	{ u32 v_ = R32(r2); r2 += 4; r4 = v_; } UPD(0x0C0643BEu, 1);  /* 0C0643BC mov.l @Rm+,Rn */
	T = r7 == r4;  /* 0C0643BE cmp/eq Rm,Rn */
	{ u32 c_ = T; r6 = r3; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0643D0u, 4); goto L_0C0643D0; } goto L_0C0643C4; }  /* 0C0643C0 bt/s */
L_0C0643C4: BLKS(0x0C0643C4u);
	r6 += 0x1u;  /* 0C0643C4 add #imm,Rn */
	{ r3 = (u32)(s32)(s16)r6; /* slot exts.w Rm,Rn */ UPD(0x0C0643BCu, 5); goto L_0C0643BC; }  /* 0C0643C6 bra */
L_0C0643D0: BLKS(0x0C0643D0u);
	T = (r3 & r3) == 0;  /* 0C0643D0 tst Rm,Rn */
	if (!T) { UPD(0x0C0643EAu, 4); goto L_0C0643EA; }  /* 0C0643D2 bf */
L_0C0643D4: BLKS(0x0C0643D4u);
	r2 = 0xC17304Cu; UPD(0x0C0643D6u, 1);  /* 0C0643D4 mov.l @(disp,pc),Rn */
	r0 = R32(r2); UPD(0x0C0643D8u, 1);  /* 0C0643D6 mov.l @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0643D8 tst Rm,Rn */
	if (T) { UPD(0x0C0643EAu, 4); goto L_0C0643EA; }  /* 0C0643DA bt */
L_0C0643DC: BLKS(0x0C0643DCu);
	SPIN_SAVE(0C0643DC);
	r2 += 0x4u;  /* 0C0643DC add #imm,Rn */
	r5 = r3;  /* 0C0643DE mov Rm,Rn */
	r8 = RS32(0C0643DC, r2); UPD(0x0C0643E2u, 3);  /* 0C0643E0 mov.l @Rm,Rn */
	r5 += 0x1u;  /* 0C0643E2 add #imm,Rn */
	T = (r8 & r8) == 0;  /* 0C0643E4 tst Rm,Rn */
	{ u32 c_ = !T; r3 = (u32)(s32)(s16)r5; /* slot exts.w Rm,Rn */ if (c_) { SPIN_FFD(0C0643DC, 8); UPD(0x0C0643DCu, 5); goto L_0C0643DC; } UPD(0x0C0643EAu, 1); goto L_0C0643EA; }  /* 0C0643E6 bf/s */
L_0C0643EA: BLKS(0x0C0643EAu);
	r3 += 0xFFFFFFFFu;  /* 0C0643EA add #imm,Rn */
	r4 = 0x2A0u; UPD(0x0C0643EEu, 2);  /* 0C0643EC mov.w @(disp,pc),Rn */
	r1 = (u32)(s32)(s16)r3;  /* 0C0643EE exts.w Rm,Rn */
	IF(0x0C0643F0u); r1 <<= 2;  /* 0C0643F0 shll2 Rn */
	r13 = 0xC17304Cu; UPD(0x0C0643F4u, 3);  /* 0C0643F2 mov.l @(disp,pc),Rn */
	IF(0x0C0643F4u); MACL = r10 * r4;  /* 0C0643F4 mul.l Rm,Rn */
	r0 = r1;  /* 0C0643F6 mov Rm,Rn */
	IF(0x0C0643F8u); r9 = R32(r0 + r13); UPD(0x0C0643FAu, 4);  /* 0C0643F8 mov.l @(r0,Rm),Rn */
	IF(0x0C0643FAu); r7 = MACL;  /* 0C0643FA sts macl,Rn */
	r6 = 0xC29D1D8u; UPD(0x0C0643FEu, 2);  /* 0C0643FC mov.l @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C0643FE mov #imm,Rn */
	r2 = 0xC064550u; UPD(0x0C064402u, 2);  /* 0C064400 mov.l @(disp,pc),Rn */
	r7 += r6;  /* 0C064402 add Rm,Rn */
	r0 = 0x224u; UPD(0x0C064406u, 2);  /* 0C064404 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r10;  /* 0C064406 exts.w Rm,Rn */
	IF(0x0C064408u); W32(r0 + r7, r9); UPD(0x0C06440Au, 2);  /* 0C064408 mov.l Rm,@(r0,Rn) */
	W32(r7 + 0xCu, r3); UPD(0x0C06440Cu, 1);  /* 0C06440A mov.l Rm,@(disp,Rn) */
	W32(r7 + 0x8u, r3); UPD(0x0C06440Eu, 1);  /* 0C06440C mov.l Rm,@(disp,Rn) */
	IF(0x0C06440Eu); { u32 t_ = r2; PR = 0x0C064412u; W32(r7 + 0x4u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C064550, 0x0C064550u, 0x0C064412u); }  /* 0C06440E jsr @Rn */
L_0C064412: BLKS(0x0C064412u);
	{ r8 = r10; /* slot mov Rm,Rn */ UPD(0x0C0640AEu, 3); goto L_0C0640AE; }  /* 0C064412 bra */
L_0C064440: BLKS(0x0C064440u);
	r2 = (u32)(s32)(s8)R8(r7); UPD(0x0C064442u, 1);  /* 0C064440 mov.b @Rm,Rn */
	r1 = 0xFFFFFFFFu;  /* 0C064442 mov #imm,Rn */
	r7 += 0xFFFFFFE0u;  /* 0C064444 add #imm,Rn */
	r6 = 0x287u; UPD(0x0C064448u, 3);  /* 0C064446 mov.w @(disp,pc),Rn */
	r0 = r7;  /* 0C064448 mov Rm,Rn */
	IF(0x0C06444Au); r5 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C06444Cu, 2);  /* 0C06444A mov.b @(r0,Rm),Rn */
	T = (r2 & r2) == 0;  /* 0C06444C tst Rm,Rn */
	{ u32 t_ = 0u - r1, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r13 = r_; }  /* 0C06444E negc Rm,Rn */
	r0 = r5;  /* 0C064450 mov Rm,Rn */
	T = r0 == 0x2u;  /* 0C064452 cmp/eq #imm,r0 */
	IF(0x0C064454u); r8 = T;  /* 0C064454 movt Rn */
	T = (r13 & r8) == 0;  /* 0C064456 tst Rm,Rn */
	if (T) { UPD(0x0C064412u, 9); goto L_0C064412; }  /* 0C064458 bt */
L_0C06445A: BLKS(0x0C06445Au);
	r7 += 0x21u;  /* 0C06445A add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C06445Eu, 2);  /* 0C06445C mov.b @Rm,Rn */
	r0 = 0x250u; UPD(0x0C064460u, 1);  /* 0C06445E mov.w @(disp,pc),Rn */
	r7 += 0xFFFFFFDFu;  /* 0C064460 add #imm,Rn */
	IF(0x0C064462u); r9 = (u32)(s32)(s16)R16(r0 + r7); UPD(0x0C064464u, 2);  /* 0C064462 mov.w @(r0,Rm),Rn */
	r0 = r9;  /* 0C064464 mov Rm,Rn */
	r0 &= 0x1u;  /* 0C064466 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C064468 tst Rm,Rn */
	if (T) { UPD(0x0C064484u, 6); goto L_0C064484; }  /* 0C06446A bt */
L_0C06446C: BLKS(0x0C06446Cu);
	r8 = 0xA8u; UPD(0x0C06446Eu, 1);  /* 0C06446C mov.w @(disp,pc),Rn */
	IF(0x0C06446Eu); MACL = r10 * r8;  /* 0C06446E mul.l Rm,Rn */
	r3 = 0x124u; UPD(0x0C064472u, 3);  /* 0C064470 mov.w @(disp,pc),Rn */
	IF(0x0C064472u); r0 = MACL;  /* 0C064472 sts macl,Rn */
	r0 += r6;  /* 0C064474 add Rm,Rn */
	IF(0x0C064476u); r0 <<= 2;  /* 0C064476 shll2 Rn */
	r0 += r11;  /* 0C064478 add Rm,Rn */
	r0 += r3;  /* 0C06447A add Rm,Rn */
	r4 = R32(r0); UPD(0x0C06447Eu, 6);  /* 0C06447C mov.l @Rm,Rn */
	r7 = 0x10000u; UPD(0x0C064480u, 1);  /* 0C06447E mov.l @(disp,pc),Rn */
	r4 += r7;  /* 0C064480 add Rm,Rn */
	W32(r0, r4); UPD(0x0C064484u, 2);  /* 0C064482 mov.l Rm,@Rn */
L_0C064484: BLKS(0x0C064484u);
	r5 = 0xA8u; UPD(0x0C064486u, 1);  /* 0C064484 mov.w @(disp,pc),Rn */
	r3 = (u32)(s32)(s16)r9;  /* 0C064486 exts.w Rm,Rn */
	IF(0x0C064488u); MACL = r10 * r5;  /* 0C064488 mul.l Rm,Rn */
	r0 = 0x1A4u; UPD(0x0C06448Cu, 4);  /* 0C06448A mov.w @(disp,pc),Rn */
	IF(0x0C06448Cu); T = r3 & 1; r3 = (u32)((s32)r3 >> 1);  /* 0C06448C shar Rn */
	IF(0x0C06448Eu); r7 = MACL;  /* 0C06448E sts macl,Rn */
	r7 += r6;  /* 0C064490 add Rm,Rn */
	IF(0x0C064492u); r7 <<= 2;  /* 0C064492 shll2 Rn */
	r6 = 0x124u; UPD(0x0C064496u, 5);  /* 0C064494 mov.w @(disp,pc),Rn */
	r7 += r11;  /* 0C064496 add Rm,Rn */
	r6 += r7;  /* 0C064498 add Rm,Rn */
	r5 = R32(r6); UPD(0x0C06449Cu, 3);  /* 0C06449A mov.l @Rm,Rn */
	r13 = 0x1u;  /* 0C06449C mov #imm,Rn */
	IF(0x0C06449Eu); r8 = R32(r0 + r7); UPD(0x0C0644A0u, 2);  /* 0C06449E mov.l @(r0,Rm),Rn */
	r13 &= r3;  /* 0C0644A0 and Rm,Rn */
	T = (s32)r5 > (s32)r8;  /* 0C0644A2 cmp/gt Rm,Rn */
	IF(0x0C0644A4u); r2 = T;  /* 0C0644A4 movt Rn */
	r13 &= r2;  /* 0C0644A6 and Rm,Rn */
	T = (r13 & r13) == 0;  /* 0C0644A8 tst Rm,Rn */
	if (T) { UPD(0x0C0644B4u, 8); goto L_0C0644B4; }  /* 0C0644AA bt */
L_0C0644AC: BLKS(0x0C0644ACu);
	r0 = 0xFFFF0000u; UPD(0x0C0644AEu, 1);  /* 0C0644AC mov.l @(disp,pc),Rn */
	r0 += r5;  /* 0C0644AE add Rm,Rn */
	W32(r6, r0); UPD(0x0C0644B2u, 2);  /* 0C0644B0 mov.l Rm,@Rn */
	r5 = r0;  /* 0C0644B2 mov Rm,Rn */
	UPD(0x0C0644B4u, 1);
L_0C0644B4: BLKS(0x0C0644B4u);
	r2 = 0x164u; UPD(0x0C0644B6u, 1);  /* 0C0644B4 mov.w @(disp,pc),Rn */
	r6 = 0x1u;  /* 0C0644B6 mov #imm,Rn */
	IF(0x0C0644B8u); r3 >>= 2;  /* 0C0644B8 shlr2 Rn */
	r0 = 0x1E4u; UPD(0x0C0644BCu, 3);  /* 0C0644BA mov.w @(disp,pc),Rn */
	r3 &= r6;  /* 0C0644BC and Rm,Rn */
	r2 += r7;  /* 0C0644BE add Rm,Rn */
	r6 = R32(r2); UPD(0x0C0644C2u, 3);  /* 0C0644C0 mov.l @Rm,Rn */
	IF(0x0C0644C2u); r4 = R32(r0 + r7); UPD(0x0C0644C4u, 1);  /* 0C0644C2 mov.l @(r0,Rm),Rn */
	T = (s32)r4 > (s32)r6;  /* 0C0644C4 cmp/gt Rm,Rn */
	IF(0x0C0644C6u); r13 = T;  /* 0C0644C6 movt Rn */
	r3 &= r13;  /* 0C0644C8 and Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C0644CA tst Rm,Rn */
	{ u32 c_ = T; r0 = r9; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0644DAu, 7); goto L_0C0644DA; } goto L_0C0644D0; }  /* 0C0644CC bt/s */
L_0C0644D0: BLKS(0x0C0644D0u);
	r3 = 0x10000u; UPD(0x0C0644D2u, 2);  /* 0C0644D0 mov.l @(disp,pc),Rn */
	r3 += r6;  /* 0C0644D2 add Rm,Rn */
	W32(r2, r3); UPD(0x0C0644D6u, 2);  /* 0C0644D4 mov.l Rm,@Rn */
	r6 = r3;  /* 0C0644D6 mov Rm,Rn */
	r0 = r9;  /* 0C0644D8 mov Rm,Rn */
	UPD(0x0C0644DAu, 2);
L_0C0644DA: BLKS(0x0C0644DAu);
	r0 &= 0x4u;  /* 0C0644DA and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0644DC tst Rm,Rn */
	{ u32 c_ = T; r13 = r5; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0644ECu, 5); goto L_0C0644EC; } goto L_0C0644E2; }  /* 0C0644DE bt/s */
L_0C0644E2: BLKS(0x0C0644E2u);
	r9 = 0xFFFF0000u; UPD(0x0C0644E4u, 2);  /* 0C0644E2 mov.l @(disp,pc),Rn */
	r9 += r6;  /* 0C0644E4 add Rm,Rn */
	W32(r2, r9); UPD(0x0C0644E8u, 2);  /* 0C0644E6 mov.l Rm,@Rn */
	r6 = r9;  /* 0C0644E8 mov Rm,Rn */
	r13 = r5;  /* 0C0644EA mov Rm,Rn */
	UPD(0x0C0644ECu, 2);
L_0C0644EC: BLKS(0x0C0644ECu);
	r13 += r8;  /* 0C0644EC add Rm,Rn */
	r3 = r13;  /* 0C0644EE mov Rm,Rn */
	IF(0x0C0644F0u); T = r3 >> 31; r3 = (r3 << 1) | T;  /* 0C0644F0 rotl Rn */
	IF(0x0C0644F2u); r1 = T;  /* 0C0644F2 movt Rn */
	r3 = r6;  /* 0C0644F4 mov Rm,Rn */
	r13 += r1;  /* 0C0644F6 add Rm,Rn */
	r3 += r4;  /* 0C0644F8 add Rm,Rn */
	IF(0x0C0644FAu); T = r13 & 1; r13 = (u32)((s32)r13 >> 1);  /* 0C0644FA shar Rn */
	r0 = r3;  /* 0C0644FC mov Rm,Rn */
	IF(0x0C0644FEu); T = r0 >> 31; r0 = (r0 << 1) | T;  /* 0C0644FE rotl Rn */
	W32(r7 + 0x24u, r13); UPD(0x0C064502u, 11);  /* 0C064500 mov.l Rm,@(disp,Rn) */
	IF(0x0C064502u); r9 = T;  /* 0C064502 movt Rn */
	r0 = r5;  /* 0C064504 mov Rm,Rn */
	r0 -= r8;  /* 0C064506 sub Rm,Rn */
	r13 = r7;  /* 0C064508 mov Rm,Rn */
	r3 += r9;  /* 0C06450A add Rm,Rn */
	IF(0x0C06450Cu); T = r3 & 1; r3 = (u32)((s32)r3 >> 1);  /* 0C06450C shar Rn */
	r13 += 0x64u;  /* 0C06450E add #imm,Rn */
	r1 = r0;  /* 0C064510 mov Rm,Rn */
	IF(0x0C064512u); T = r1 >> 31; r1 = (r1 << 1) | T;  /* 0C064512 rotl Rn */
	W32(r13, r3); UPD(0x0C064516u, 10);  /* 0C064514 mov.l Rm,@Rn */
	IF(0x0C064516u); r2 = T;  /* 0C064516 movt Rn */
	r3 = 0xA4u; UPD(0x0C06451Au, 2);  /* 0C064518 mov.w @(disp,pc),Rn */
	r2 += r0;  /* 0C06451A add Rm,Rn */
	IF(0x0C06451Cu); T = r2 & 1; r2 = (u32)((s32)r2 >> 1);  /* 0C06451C shar Rn */
	IF(0x0C06451Eu); T = (s32)r2 >= 0;  /* 0C06451E cmp/pz Rn */
	{ u32 c_ = !T; r3 += r7; /* slot add Rm,Rn */ if (c_) { UPD(0x0C064530u, 6); goto L_0C064530; } UPD(0x0C064524u, 1); goto L_0C064524; }  /* 0C064520 bf/s */
L_0C064524: BLKS(0x0C064524u);
	W32(r3, r2); UPD(0x0C064526u, 1);  /* 0C064524 mov.l Rm,@Rn */
	r1 = r6;  /* 0C064526 mov Rm,Rn */
	r3 = 0xE4u; UPD(0x0C06452Au, 2);  /* 0C064528 mov.w @(disp,pc),Rn */
	{ r3 += r7; /* slot add Rm,Rn */ UPD(0x0C06425Cu, 3); goto L_0C06425C; }  /* 0C06452A bra */
L_0C064530: BLKS(0x0C064530u);
	{ r2 = 0u - r2; /* slot neg Rm,Rn */ UPD(0x0C064524u, 3); goto L_0C064524; }  /* 0C064530 bra */
}

/* FUN_0c064550 */
void blk_f_0C064550(sh3_t *c)
{
	LOCALS;
L_0C064550: BLKS(0x0C064550u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C064552u, 1);  /* 0C064550 mov.l Rm,@-Rn */
	r6 = 0x3u;  /* 0C064552 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C064556u, 2);  /* 0C064554 mov.l Rm,@-Rn */
	r8 = 0x4u;  /* 0C064556 mov #imm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C06455Au, 2);  /* 0C064558 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C06455A exts.w Rm,Rn */
	r0 = 0x2A0u; UPD(0x0C06455Eu, 2);  /* 0C06455C mov.w @(disp,pc),Rn */
	r4 = 0x3u;  /* 0C06455E mov #imm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C064562u, 2);  /* 0C064560 mov.l Rm,@-Rn */
	IF(0x0C064562u); MACL = r9 * r0;  /* 0C064562 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C064566u, 3);  /* 0C064564 mov.l Rm,@-Rn */
	r3 = 0xC29D1D8u; UPD(0x0C064568u, 1);  /* 0C064566 mov.l @(disp,pc),Rn */
	IF(0x0C064568u); r7 = MACL;  /* 0C064568 sts macl,Rn */
	IF(0x0C06456Au); r15 -= 4; W32(r15, PR); UPD(0x0C06456Cu, 2);  /* 0C06456A sts.l pr,@-Rn */
	r7 += r3;  /* 0C06456C add Rm,Rn */
	r0 = 0x224u; UPD(0x0C064570u, 2);  /* 0C06456E mov.w @(disp,pc),Rn */
	r14 = r15;  /* 0C064570 mov Rm,Rn */
	IF(0x0C064572u); r10 = R32(r0 + r7); UPD(0x0C064574u, 2);  /* 0C064572 mov.l @(r0,Rm),Rn */
	r0 = R32(r7 + 0x4u); UPD(0x0C064576u, 1);  /* 0C064574 mov.l @(disp,Rm),Rn */
	IF(0x0C064576u); ARG0(0x404Du); { s32 s_ = (s32)r4; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C064576 shld Rm,Rn */
	IF(0x0C064578u); r1 = R32(r0 + r10); UPD(0x0C06457Au, 2);  /* 0C064578 mov.l @(r0,Rm),Rn */
	r0 = R32(r7 + 0x8u); UPD(0x0C06457Cu, 1);  /* 0C06457A mov.l @(disp,Rm),Rn */
	IF(0x0C06457Cu); ARG0(0x408Du); { s32 s_ = (s32)r8; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C06457C shld Rm,Rn */
	IF(0x0C06457Eu); r5 = R32(r0 + r1); UPD(0x0C064580u, 2);  /* 0C06457E mov.l @(r0,Rm),Rn */
	r0 = R32(r7 + 0xCu); UPD(0x0C064582u, 1);  /* 0C064580 mov.l @(disp,Rm),Rn */
	IF(0x0C064582u); ARG0(0x406Du); { s32 s_ = (s32)r6; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C064582 shld Rm,Rn */
	r0 += r5;  /* 0C064584 add Rm,Rn */
	r4 = R32(r0 + 0x4u); UPD(0x0C064588u, 3);  /* 0C064586 mov.l @(disp,Rm),Rn */
	r2 = R32(r4); UPD(0x0C06458Au, 1);  /* 0C064588 mov.l @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C06458A tst Rm,Rn */
	{ u32 c_ = T; r8 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0645E4u, 4); goto L_0C0645E4; } goto L_0C064590; }  /* 0C06458C bt/s */
L_0C064590: BLKS(0x0C064590u);
	r10 = 0xA8u; UPD(0x0C064592u, 2);  /* 0C064590 mov.w @(disp,pc),Rn */
	r11 = r3;  /* 0C064592 mov Rm,Rn */
	UPD(0x0C064594u, 1);
L_0C064594: BLKS(0x0C064594u);
	IF(0x0C064594u); MACL = r9 * r10;  /* 0C064594 mul.l Rm,Rn */
	r6 = 0xFFFFFFFu; UPD(0x0C064598u, 3);  /* 0C064596 mov.l @(disp,pc),Rn */
	r4 += 0x4u;  /* 0C064598 add #imm,Rn */
	IF(0x0C06459Au); r1 = MACL;  /* 0C06459A sts macl,Rn */
	r1 += r8;  /* 0C06459C add Rm,Rn */
	r0 = 0xA4u; UPD(0x0C0645A0u, 4);  /* 0C06459E mov.w @(disp,pc),Rn */
	IF(0x0C0645A0u); r1 <<= 2;  /* 0C0645A0 shll2 Rn */
	r1 += r11;  /* 0C0645A2 add Rm,Rn */
	r6 &= r2;  /* 0C0645A4 and Rm,Rn */
	IF(0x0C0645A6u); W32(r0 + r1, r6); UPD(0x0C0645A8u, 4);  /* 0C0645A6 mov.l Rm,@(r0,Rn) */
	{ u32 v_ = R32(r4); r4 += 4; r5 = v_; } UPD(0x0C0645AAu, 1);  /* 0C0645A8 mov.l @Rm+,Rn */
	r0 += 0x40u;  /* 0C0645AA add #imm,Rn */
	IF(0x0C0645ACu); W32(r0 + r1, r5); UPD(0x0C0645AEu, 2);  /* 0C0645AC mov.l Rm,@(r0,Rn) */
	{ u32 v_ = R32(r4); r4 += 4; r3 = v_; } UPD(0x0C0645B0u, 1);  /* 0C0645AE mov.l @Rm+,Rn */
	r0 += 0x40u;  /* 0C0645B0 add #imm,Rn */
	W32(r1 + 0x24u, r3); UPD(0x0C0645B4u, 2);  /* 0C0645B2 mov.l Rm,@(disp,Rn) */
	r2 = r3;  /* 0C0645B4 mov Rm,Rn */
	{ u32 v_ = R32(r4); r4 += 4; r7 = v_; } UPD(0x0C0645B8u, 2);  /* 0C0645B6 mov.l @Rm+,Rn */
	r1 += 0x64u;  /* 0C0645B8 add #imm,Rn */
	W32(r1, r7); UPD(0x0C0645BCu, 2);  /* 0C0645BA mov.l Rm,@Rn */
	r2 += r6;  /* 0C0645BC add Rm,Rn */
	r1 += 0xFFFFFF9Cu;  /* 0C0645BE add #imm,Rn */
	IF(0x0C0645C0u); W32(r0 + r1, r2); UPD(0x0C0645C2u, 3);  /* 0C0645C0 mov.l Rm,@(r0,Rn) */
	r3 -= r6;  /* 0C0645C2 sub Rm,Rn */
	r2 = r7;  /* 0C0645C4 mov Rm,Rn */
	r2 -= r5;  /* 0C0645C6 sub Rm,Rn */
	r0 += 0x40u;  /* 0C0645C8 add #imm,Rn */
	IF(0x0C0645CAu); W32(r0 + r1, r2); UPD(0x0C0645CCu, 5);  /* 0C0645CA mov.l Rm,@(r0,Rn) */
	r7 += r5;  /* 0C0645CC add Rm,Rn */
	r0 += 0x40u;  /* 0C0645CE add #imm,Rn */
	IF(0x0C0645D0u); W32(r0 + r1, r3); UPD(0x0C0645D2u, 3);  /* 0C0645D0 mov.l Rm,@(r0,Rn) */
	r2 = r8;  /* 0C0645D2 mov Rm,Rn */
	r0 += 0x40u;  /* 0C0645D4 add #imm,Rn */
	IF(0x0C0645D6u); W32(r0 + r1, r7); UPD(0x0C0645D8u, 3);  /* 0C0645D6 mov.l Rm,@(r0,Rn) */
	r2 += 0x1u;  /* 0C0645D8 add #imm,Rn */
	r3 = R32(r4); UPD(0x0C0645DCu, 2);  /* 0C0645DA mov.l @Rm,Rn */
	r8 = (u32)(s32)(s16)r2;  /* 0C0645DC exts.w Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C0645DE tst Rm,Rn */
	{ u32 c_ = !T; r2 = r3; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C064594u, 5); goto L_0C064594; } UPD(0x0C0645E4u, 1); goto L_0C0645E4; }  /* 0C0645E0 bf/s */
L_0C0645E4: BLKS(0x0C0645E4u);
	r4 = 0x2A0u; UPD(0x0C0645E6u, 1);  /* 0C0645E4 mov.w @(disp,pc),Rn */
	r7 = 0x0u;  /* 0C0645E6 mov #imm,Rn */
	IF(0x0C0645E8u); MACL = r9 * r4;  /* 0C0645E8 mul.l Rm,Rn */
	r10 = 0xC29D1D8u; UPD(0x0C0645ECu, 4);  /* 0C0645EA mov.l @(disp,pc),Rn */
	r5 = 0x3u;  /* 0C0645EC mov #imm,Rn */
	IF(0x0C0645EEu); r0 = MACL;  /* 0C0645EE sts macl,Rn */
	r0 += r10;  /* 0C0645F0 add Rm,Rn */
	r0 += 0x20u;  /* 0C0645F2 add #imm,Rn */
	W8(r0, r8); UPD(0x0C0645F6u, 5);  /* 0C0645F4 mov.b Rm,@Rn */
	r0 += 0x1u;  /* 0C0645F6 add #imm,Rn */
	W8(r0, r7); UPD(0x0C0645FAu, 2);  /* 0C0645F8 mov.b Rm,@Rn */
	r0 += 0xFFFFFFDFu;  /* 0C0645FA add #imm,Rn */
	r6 = 0x224u; UPD(0x0C0645FEu, 2);  /* 0C0645FC mov.w @(disp,pc),Rn */
	r9 = R32(r0 + 0x4u); UPD(0x0C064600u, 1);  /* 0C0645FE mov.l @(disp,Rm),Rn */
	IF(0x0C064600u); r11 = R32(r0 + r6); UPD(0x0C064602u, 1);  /* 0C064600 mov.l @(r0,Rm),Rn */
	IF(0x0C064602u); ARG0(0x495Du); { s32 s_ = (s32)r5; if (s_ >= 0) r9 <<= (s_ & 31); else if ((s_ & 31) == 0) r9 = 0; else r9 >>= ((~s_ & 31) + 1); }  /* 0C064602 shld Rm,Rn */
	r9 += r11;  /* 0C064604 add Rm,Rn */
	r8 = R32(r9 + 0x4u); UPD(0x0C064608u, 3);  /* 0C064606 mov.l @(disp,Rm),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r8); r8 += 2; r4 = v_; } UPD(0x0C06460Au, 1);  /* 0C064608 mov.w @Rm+,Rn */
	T = (r4 & r4) == 0;  /* 0C06460A tst Rm,Rn */
	if (T) { UPD(0x0C06461Cu, 4); goto L_0C06461C; }  /* 0C06460C bt */
L_0C06460E: BLKS(0x0C06460Eu);
	r9 = 0xC0695B0u; UPD(0x0C064610u, 1);  /* 0C06460E mov.l @(disp,pc),Rn */
L_0C064610: BLKS(0x0C064610u);
	r5 = 0x100u; UPD(0x0C064612u, 1);  /* 0C064610 mov.w @(disp,pc),Rn */
	IF(0x0C064612u); { u32 t_ = r9; PR = 0x0C064616u; IF(0x0C064614u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0695B0, 0x0C0695B0u, 0x0C064616u); }  /* 0C064612 jsr @Rn */
L_0C064616: BLKS(0x0C064616u);
	{ u32 v_ = (u32)(s32)(s16)R16(r8); r8 += 2; r4 = v_; } UPD(0x0C064618u, 1);  /* 0C064616 mov.w @Rm+,Rn */
	T = (r4 & r4) == 0;  /* 0C064618 tst Rm,Rn */
	if (!T) { UPD(0x0C064610u, 4); goto L_0C064610; }  /* 0C06461A bf */
L_0C06461C: BLKS(0x0C06461Cu);
	r15 = r14;  /* 0C06461C mov Rm,Rn */
	IF(0x0C06461Eu); PR = R32(r15); r15 += 4; UPD(0x0C064620u, 2);  /* 0C06461E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C064622u, 1);  /* 0C064620 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C064624u, 1);  /* 0C064622 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C064626u, 1);  /* 0C064624 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C064628u, 1);  /* 0C064626 mov.l @Rm+,Rn */
	IF(0x0C064628u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C064628 rts */
}

void blk_f_0C064650(sh3_t *c)
{
	LOCALS;
L_0C064650: BLKS(0x0C064650u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C064652u, 1);  /* 0C064650 mov.l Rm,@-Rn */
	r6 = 0x0u;  /* 0C064652 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C064656u, 2);  /* 0C064654 mov.l Rm,@-Rn */
	r1 = 0x0u;  /* 0C064656 mov #imm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C06465Au, 2);  /* 0C064658 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06465Cu, 1);  /* 0C06465A mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C06465Eu, 1);  /* 0C06465C mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C064660u, 1);  /* 0C06465E mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C064662u, 1);  /* 0C064660 mov.l Rm,@-Rn */
	IF(0x0C064662u); r15 -= 4; W32(r15, PR); UPD(0x0C064664u, 1);  /* 0C064662 sts.l pr,@-Rn */
	r10 = 0xC072340u; UPD(0x0C064666u, 1);  /* 0C064664 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C064666 add #imm,Rn */
	r5 = 0xC23E0A6u; UPD(0x0C06466Au, 2);  /* 0C064668 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C06466A mov Rm,Rn */
	r9 = 0xC0C0910u; UPD(0x0C06466Eu, 2);  /* 0C06466C mov.l @(disp,pc),Rn */
	r8 = 0xC0C1270u; UPD(0x0C064670u, 1);  /* 0C06466E mov.l @(disp,pc),Rn */
	W8(r5, r6); UPD(0x0C064672u, 1);  /* 0C064670 mov.b Rm,@Rn */
	IF(0x0C064672u); { u32 t_ = r10; PR = 0x0C064676u; W32(r14, r1); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C072340, 0x0C072340u, 0x0C064676u); }  /* 0C064672 jsr @Rn */
L_0C064676: BLKS(0x0C064676u);
	IF(0x0C064676u); { u32 t_ = r9; PR = 0x0C06467Au; IF(0x0C064678u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0C0910, 0x0C0C0910u, 0x0C06467Au); }  /* 0C064676 jsr @Rn */
L_0C06467A: BLKS(0x0C06467Au);
	IF(0x0C06467Au); { u32 t_ = r8; PR = 0x0C06467Eu; IF(0x0C06467Cu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0C1270, 0x0C0C1270u, 0x0C06467Eu); }  /* 0C06467A jsr @Rn */
L_0C06467E: BLKS(0x0C06467Eu);
	r0 = 0xC2B038Cu; UPD(0x0C064680u, 1);  /* 0C06467E mov.l @(disp,pc),Rn */
	r3 = 0xFFFFFF80u;  /* 0C064680 mov #imm,Rn */
	W8(r0, r3); UPD(0x0C064684u, 2);  /* 0C064682 mov.b Rm,@Rn */
	r4 = 0xC239482u; UPD(0x0C064686u, 1);  /* 0C064684 mov.l @(disp,pc),Rn */
	r0 = 0x0u;  /* 0C064686 mov #imm,Rn */
	r2 = 0xC28F60Au; UPD(0x0C06468Au, 2);  /* 0C064688 mov.l @(disp,pc),Rn */
	W8(r4, r3); UPD(0x0C06468Cu, 1);  /* 0C06468A mov.b Rm,@Rn */
	W8(r2, r3); UPD(0x0C06468Eu, 1);  /* 0C06468C mov.b Rm,@Rn */
	W32(r14 + 0x4u, r0); UPD(0x0C064690u, 1);  /* 0C06468E mov.l Rm,@(disp,Rn) */
L_0C064690: BLKS(0x0C064690u);
	r10 = 0xC060BC0u; UPD(0x0C064692u, 1);  /* 0C064690 mov.l @(disp,pc),Rn */
	r9 = 0xC061200u; UPD(0x0C064694u, 1);  /* 0C064692 mov.l @(disp,pc),Rn */
	IF(0x0C064694u); { u32 t_ = r10; PR = 0x0C064698u; IF(0x0C064696u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C060BC0, 0x0C060BC0u, 0x0C064698u); }  /* 0C064694 jsr @Rn */
L_0C064698: BLKS(0x0C064698u);
	r8 = 0xC062060u; UPD(0x0C06469Au, 1);  /* 0C064698 mov.l @(disp,pc),Rn */
	IF(0x0C06469Au); { u32 t_ = r9; PR = 0x0C06469Eu; IF(0x0C06469Cu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C061200, 0x0C061200u, 0x0C06469Eu); }  /* 0C06469A jsr @Rn */
L_0C06469E: BLKS(0x0C06469Eu);
	IF(0x0C06469Eu); { u32 t_ = r8; PR = 0x0C0646A2u; r4 = 0x40u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062060, 0x0C062060u, 0x0C0646A2u); }  /* 0C06469E jsr @Rn */
L_0C0646A2: BLKS(0x0C0646A2u);
	r8 = 0xC062000u; UPD(0x0C0646A4u, 1);  /* 0C0646A2 mov.l @(disp,pc),Rn */
	r12 = 0xC0626E0u; UPD(0x0C0646A6u, 1);  /* 0C0646A4 mov.l @(disp,pc),Rn */
	IF(0x0C0646A6u); { u32 t_ = r8; PR = 0x0C0646AAu; IF(0x0C0646A8u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C062000, 0x0C062000u, 0x0C0646AAu); }  /* 0C0646A6 jsr @Rn */
L_0C0646AA: BLKS(0x0C0646AAu);
	r13 = 0xC23945Cu; UPD(0x0C0646ACu, 1);  /* 0C0646AA mov.l @(disp,pc),Rn */
	r0 = 0x0u;  /* 0C0646AC mov #imm,Rn */
	r7 = 0x80808000u; UPD(0x0C0646B0u, 2);  /* 0C0646AE mov.l @(disp,pc),Rn */
	r5 = 0x26u;  /* 0C0646B0 mov #imm,Rn */
	W32(r13, r0); UPD(0x0C0646B4u, 2);  /* 0C0646B2 mov.l Rm,@Rn */
	r4 = 0xC172A64u; UPD(0x0C0646B6u, 1);  /* 0C0646B4 mov.l @(disp,pc),Rn */
	IF(0x0C0646B6u); { u32 t_ = r12; PR = 0x0C0646BAu; r6 = 0xBu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C0646BAu); }  /* 0C0646B6 jsr @Rn */
L_0C0646BA: BLKS(0x0C0646BAu);
	r0 = 0x100u; UPD(0x0C0646BCu, 1);  /* 0C0646BA mov.w @(disp,pc),Rn */
	r11 = 0xC297638u; UPD(0x0C0646BEu, 1);  /* 0C0646BC mov.l @(disp,pc),Rn */
	IF(0x0C0646BEu); r7 = (u32)(s32)(s16)R16(r0 + r11); UPD(0x0C0646C0u, 1);  /* 0C0646BE mov.w @(r0,Rm),Rn */
	T = (r0 & r7) == 0;  /* 0C0646C0 tst Rm,Rn */
	{ u32 c_ = T; r2 = R32(r14); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C0646DEu, 4); goto L_0C0646DE; } UPD(0x0C0646C6u, 1); goto L_0C0646C6; }  /* 0C0646C2 bt/s */
L_0C0646C6: BLKS(0x0C0646C6u);
	r2 = R32(r14); UPD(0x0C0646C8u, 1);  /* 0C0646C6 mov.l @Rm,Rn */
	r2 += 0x1u;  /* 0C0646C8 add #imm,Rn */
	r3 = (u32)(s32)(s8)r2;  /* 0C0646CA exts.b Rm,Rn */
	r0 = r3;  /* 0C0646CC mov Rm,Rn */
	T = r0 == 0x2u;  /* 0C0646CE cmp/eq #imm,r0 */
	{ u32 c_ = !T; W32(r14, r3); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C0646D8u, 7); goto L_0C0646D8; } UPD(0x0C0646D4u, 1); goto L_0C0646D4; }  /* 0C0646D0 bf/s */
L_0C0646D4: BLKS(0x0C0646D4u);
	{ r4 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C064B30u, 3); goto L_0C064B30; }  /* 0C0646D4 bra */
L_0C0646D8: BLKS(0x0C0646D8u);
	IF(0x0C0646D8u); { u32 t_ = r8; PR = 0x0C0646DCu; IF(0x0C0646DAu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C062000, 0x0C062000u, 0x0C0646DCu); }  /* 0C0646D8 jsr @Rn */
L_0C0646DC: BLKS(0x0C0646DCu);
	r2 = R32(r14); UPD(0x0C0646DEu, 1);  /* 0C0646DC mov.l @Rm,Rn */
L_0C0646DE: BLKS(0x0C0646DEu);
	T = (r2 & r2) == 0;  /* 0C0646DE tst Rm,Rn */
	{ u32 c_ = !T; r0 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0646E8u, 4); goto L_0C0646E8; } goto L_0C0646E4; }  /* 0C0646E0 bf/s */
L_0C0646E4: BLKS(0x0C0646E4u);
	{ r8 = 0xCu; /* slot mov #imm,Rn */ UPD(0x0C064A70u, 4); goto L_0C064A70; }  /* 0C0646E4 bra */
L_0C0646E8: BLKS(0x0C0646E8u);
	T = r0 == 0x1u;  /* 0C0646E8 cmp/eq #imm,r0 */
	{ u32 c_ = T; r9 = 0x4u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0647A0u, 4); goto L_0C0647A0; } UPD(0x0C0646EEu, 1); goto L_0C0646EE; }  /* 0C0646EA bt/s */
L_0C0646EE: BLKS(0x0C0646EEu);
	r13 = 0xC0C0A40u; UPD(0x0C0646F0u, 1);  /* 0C0646EE mov.l @(disp,pc),Rn */
	r10 = 0xC0C1B50u; UPD(0x0C0646F2u, 1);  /* 0C0646F0 mov.l @(disp,pc),Rn */
	IF(0x0C0646F2u); { u32 t_ = r13; PR = 0x0C0646F6u; r8 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C0A40, 0x0C0C0A40u, 0x0C0646F6u); }  /* 0C0646F2 jsr @Rn */
L_0C0646F6: BLKS(0x0C0646F6u);
	r9 = 0x17u;  /* 0C0646F6 mov #imm,Rn */
	r11 = r8;  /* 0C0646F8 mov Rm,Rn */
	UPD(0x0C0646FAu, 2);
L_0C0646FA: BLKS(0x0C0646FAu);
	r4 = r8;  /* 0C0646FA mov Rm,Rn */
	IF(0x0C0646FCu); { u32 t_ = r10; PR = 0x0C064700u; r11 += 0x1u; /* slot add #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0C1B50, 0x0C0C1B50u, 0x0C064700u); }  /* 0C0646FC jsr @Rn */
L_0C064700: BLKS(0x0C064700u);
	r8 = (u32)(s32)(s16)r11;  /* 0C064700 exts.w Rm,Rn */
	T = (s32)r8 > (s32)r9;  /* 0C064702 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r11 = r8; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0646FAu, 5); goto L_0C0646FA; } goto L_0C064708; }  /* 0C064704 bf/s */
L_0C064708: BLKS(0x0C064708u);
	r13 = 0xC061010u; UPD(0x0C06470Au, 2);  /* 0C064708 mov.l @(disp,pc),Rn */
	r4 = 0x7u;  /* 0C06470A mov #imm,Rn */
	r8 = 0xC062250u; UPD(0x0C06470Eu, 2);  /* 0C06470C mov.l @(disp,pc),Rn */
	r9 = 0xC2380B0u; UPD(0x0C064710u, 1);  /* 0C06470E mov.l @(disp,pc),Rn */
	IF(0x0C064710u); { u32 t_ = r13; PR = 0x0C064714u; r5 = 0x7u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C061010, 0x0C061010u, 0x0C064714u); }  /* 0C064710 jsr @Rn */
L_0C064714: BLKS(0x0C064714u);
	IF(0x0C064714u); { u32 t_ = r8; PR = 0x0C064718u; IF(0x0C064716u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C062250, 0x0C062250u, 0x0C064718u); }  /* 0C064714 jsr @Rn */
L_0C064718: BLKS(0x0C064718u);
	r7 = R32(r9); UPD(0x0C06471Au, 1);  /* 0C064718 mov.l @Rm,Rn */
	r4 = 0xC2B03A6u; UPD(0x0C06471Cu, 1);  /* 0C06471A mov.l @(disp,pc),Rn */
	r7 += 0x1u;  /* 0C06471C add #imm,Rn */
	r12 = (u32)(s32)(s16)R16(r4); UPD(0x0C064720u, 2);  /* 0C06471E mov.w @Rm,Rn */
	r10 = 0x100u; UPD(0x0C064722u, 1);  /* 0C064720 mov.w @(disp,pc),Rn */
	T = (r12 & r10) == 0;  /* 0C064722 tst Rm,Rn */
	{ u32 c_ = T; W32(r9, r7); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C064690u, 4); goto L_0C064690; } UPD(0x0C064728u, 1); goto L_0C064728; }  /* 0C064724 bt/s */
L_0C064728: BLKS(0x0C064728u);
	r14 += 0x8u;  /* 0C064728 add #imm,Rn */
	r15 = r14;  /* 0C06472A mov Rm,Rn */
	IF(0x0C06472Cu); PR = R32(r15); r15 += 4; UPD(0x0C06472Eu, 3);  /* 0C06472C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C064730u, 1);  /* 0C06472E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C064732u, 1);  /* 0C064730 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C064734u, 1);  /* 0C064732 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C064736u, 1);  /* 0C064734 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C064738u, 1);  /* 0C064736 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06473Au, 1);  /* 0C064738 mov.l @Rm+,Rn */
	IF(0x0C06473Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06473A rts */
L_0C0647A0: BLKS(0x0C0647A0u);
	r11 = 0xC0626E0u; UPD(0x0C0647A2u, 1);  /* 0C0647A0 mov.l @(disp,pc),Rn */
	r10 = 0x27u;  /* 0C0647A2 mov #imm,Rn */
	UPD(0x0C0647A4u, 1);
L_0C0647A4: BLKS(0x0C0647A4u);
	r8 = 0x4u;  /* 0C0647A4 mov #imm,Rn */
	IF(0x0C0647A6u); ;  /* 0C0647A6 nop */
	UPD(0x0C0647A8u, 2);
L_0C0647A8: BLKS(0x0C0647A8u);
	r7 = 0x80808000u; UPD(0x0C0647AAu, 1);  /* 0C0647A8 mov.l @(disp,pc),Rn */
	r5 = r8;  /* 0C0647AA mov Rm,Rn */
	r4 = 0xC1730A4u; UPD(0x0C0647AEu, 2);  /* 0C0647AC mov.l @(disp,pc),Rn */
	IF(0x0C0647AEu); { u32 t_ = r11; PR = 0x0C0647B2u; r6 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C0647B2u); }  /* 0C0647AE jsr @Rn */
L_0C0647B2: BLKS(0x0C0647B2u);
	r7 = r8;  /* 0C0647B2 mov Rm,Rn */
	r7 += 0x4u;  /* 0C0647B4 add #imm,Rn */
	r8 = (u32)(s32)(s16)r7;  /* 0C0647B6 exts.w Rm,Rn */
	T = (s32)r8 > (s32)r10;  /* 0C0647B8 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r3 = r9; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0647A8u, 7); goto L_0C0647A8; } goto L_0C0647BE; }  /* 0C0647BA bf/s */
L_0C0647BE: BLKS(0x0C0647BEu);
	r3 += 0x4u;  /* 0C0647BE add #imm,Rn */
	r9 = (u32)(s32)(s16)r3;  /* 0C0647C0 exts.w Rm,Rn */
	r0 = 0x1Du;  /* 0C0647C2 mov #imm,Rn */
	T = (s32)r9 > (s32)r0;  /* 0C0647C4 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0647A4u, 8); goto L_0C0647A4; }  /* 0C0647C6 bf */
L_0C0647C8: BLKS(0x0C0647C8u);
	r1 = 0xC297638u; UPD(0x0C0647CAu, 1);  /* 0C0647C8 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s16)R16(r1); UPD(0x0C0647CCu, 1);  /* 0C0647CA mov.w @Rm,Rn */
	r0 &= 0x10u;  /* 0C0647CC and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0647CE tst Rm,Rn */
	if (!T) { UPD(0x0C0647D6u, 5); goto L_0C0647D6; }  /* 0C0647D0 bf */
L_0C0647D2: BLKS(0x0C0647D2u);
	{ IF(0x0C0647D4u); ; /* slot nop */ UPD(0x0C0649C0u, 3); goto L_0C0649C0; }  /* 0C0647D2 bra */
L_0C0647D6: BLKS(0x0C0647D6u);
	r0 = 0x200u; UPD(0x0C0647D8u, 1);  /* 0C0647D6 mov.w @(disp,pc),Rn */
	IF(0x0C0647D8u); r3 = (u32)(s32)(s16)R16(r0 + r1); UPD(0x0C0647DAu, 1);  /* 0C0647D8 mov.w @(r0,Rm),Rn */
	r0 = r3;  /* 0C0647DA mov Rm,Rn */
	r0 &= 0x1u;  /* 0C0647DC and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0647DE tst Rm,Rn */
	if (T) { UPD(0x0C0647E8u, 6); goto L_0C0647E8; }  /* 0C0647E0 bt */
L_0C0647E2: BLKS(0x0C0647E2u);
	r1 = 0x80000u; UPD(0x0C0647E4u, 1);  /* 0C0647E2 mov.l @(disp,pc),Rn */
	r4 = 0xC23945Cu; UPD(0x0C0647E6u, 1);  /* 0C0647E4 mov.l @(disp,pc),Rn */
	W32(r4, r1); UPD(0x0C0647E8u, 1);  /* 0C0647E6 mov.l Rm,@Rn */
L_0C0647E8: BLKS(0x0C0647E8u);
	r8 = 0xC29D728u; UPD(0x0C0647EAu, 1);  /* 0C0647E8 mov.l @(disp,pc),Rn */
	r3 = (u32)(s32)(s16)r3;  /* 0C0647EA exts.w Rm,Rn */
	r11 = R32(r8); UPD(0x0C0647EEu, 2);  /* 0C0647EC mov.l @Rm,Rn */
	IF(0x0C0647EEu); T = r3 & 1; r3 = (u32)((s32)r3 >> 1);  /* 0C0647EE shar Rn */
	IF(0x0C0647F0u); T = (s32)r11 > 0;  /* 0C0647F0 cmp/pl Rn */
	r0 = r3;  /* 0C0647F2 mov Rm,Rn */
	IF(0x0C0647F4u); r2 = T;  /* 0C0647F4 movt Rn */
	r0 &= 0x1u;  /* 0C0647F6 and #imm,r0 */
	r0 &= r2;  /* 0C0647F8 and Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0647FA tst Rm,Rn */
	if (T) { UPD(0x0C064804u, 10); goto L_0C064804; }  /* 0C0647FC bt */
L_0C0647FE: BLKS(0x0C0647FEu);
	r13 = 0xFFF80000u; UPD(0x0C064800u, 1);  /* 0C0647FE mov.l @(disp,pc),Rn */
	r12 = 0xC23945Cu; UPD(0x0C064802u, 1);  /* 0C064800 mov.l @(disp,pc),Rn */
	W32(r12, r13); UPD(0x0C064804u, 1);  /* 0C064802 mov.l Rm,@Rn */
L_0C064804: BLKS(0x0C064804u);
	r9 = 0xC3C4048u; UPD(0x0C064806u, 1);  /* 0C064804 mov.l @(disp,pc),Rn */
	r0 = r3;  /* 0C064806 mov Rm,Rn */
	r2 = R32(r9); UPD(0x0C06480Au, 2);  /* 0C064808 mov.l @Rm,Rn */
	IF(0x0C06480Au); r0 >>= 2;  /* 0C06480A shlr2 Rn */
	r6 = 0x1AFFFFFu; UPD(0x0C06480Eu, 2);  /* 0C06480C mov.l @(disp,pc),Rn */
	r0 &= 0x1u;  /* 0C06480E and #imm,r0 */
	T = (s32)r6 >= (s32)r2;  /* 0C064810 cmp/ge Rm,Rn */
	IF(0x0C064812u); r5 = T;  /* 0C064812 movt Rn */
	r0 &= r5;  /* 0C064814 and Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C064816 tst Rm,Rn */
	if (T) { UPD(0x0C064822u, 8); goto L_0C064822; }  /* 0C064818 bt */
L_0C06481A: BLKS(0x0C06481Au);
	r10 = 0x80000u; UPD(0x0C06481Cu, 1);  /* 0C06481A mov.l @(disp,pc),Rn */
	r10 += r2;  /* 0C06481C add Rm,Rn */
	W32(r9, r10); UPD(0x0C064820u, 2);  /* 0C06481E mov.l Rm,@Rn */
	r2 = r10;  /* 0C064820 mov Rm,Rn */
	UPD(0x0C064822u, 1);
L_0C064822: BLKS(0x0C064822u);
	r0 = 0x1600000u; UPD(0x0C064824u, 1);  /* 0C064822 mov.l @(disp,pc),Rn */
	IF(0x0C064824u); T = r3 & 1; r3 = (u32)((s32)r3 >> 1);  /* 0C064824 shar Rn */
	T = (s32)r2 > (s32)r0;  /* 0C064826 cmp/gt Rm,Rn */
	r4 = 0x1u;  /* 0C064828 mov #imm,Rn */
	IF(0x0C06482Au); r7 = T;  /* 0C06482A movt Rn */
	r3 &= r4;  /* 0C06482C and Rm,Rn */
	r3 &= r7;  /* 0C06482E and Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C064830 tst Rm,Rn */
	if (T) { UPD(0x0C06483Au, 10); goto L_0C06483A; }  /* 0C064832 bt */
L_0C064834: BLKS(0x0C064834u);
	r3 = 0xFFF80000u; UPD(0x0C064836u, 1);  /* 0C064834 mov.l @(disp,pc),Rn */
	r3 += r2;  /* 0C064836 add Rm,Rn */
	W32(r9, r3); UPD(0x0C06483Au, 2);  /* 0C064838 mov.l Rm,@Rn */
L_0C06483A: BLKS(0x0C06483Au);
	r12 = 0xC0626E0u; UPD(0x0C06483Cu, 1);  /* 0C06483A mov.l @(disp,pc),Rn */
	r5 = 0x24u;  /* 0C06483C mov #imm,Rn */
	r4 = 0xC1730C0u; UPD(0x0C064840u, 2);  /* 0C06483E mov.l @(disp,pc),Rn */
	r7 = 0x4040C000u; UPD(0x0C064842u, 1);  /* 0C064840 mov.l @(disp,pc),Rn */
	IF(0x0C064842u); { u32 t_ = r12; PR = 0x0C064846u; r6 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C064846u); }  /* 0C064842 jsr @Rn */
L_0C064846: BLKS(0x0C064846u);
	r1 = 0xC0626E0u; UPD(0x0C064848u, 1);  /* 0C064846 mov.l @(disp,pc),Rn */
	r5 = 0x23u;  /* 0C064848 mov #imm,Rn */
	r11 = 0xC0623C0u; UPD(0x0C06484Cu, 2);  /* 0C06484A mov.l @(disp,pc),Rn */
	r4 = 0xC1730C8u; UPD(0x0C06484Eu, 1);  /* 0C06484C mov.l @(disp,pc),Rn */
	r7 = 0x4040C000u; UPD(0x0C064850u, 1);  /* 0C06484E mov.l @(disp,pc),Rn */
	IF(0x0C064850u); { u32 t_ = r1; PR = 0x0C064854u; r6 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C064854u); }  /* 0C064850 jsr @Rn */
L_0C064854: BLKS(0x0C064854u);
	r4 = (u32)(s32)(s16)R16(r8); UPD(0x0C064856u, 1);  /* 0C064854 mov.w @Rm,Rn */
	r5 = 0x24u;  /* 0C064856 mov #imm,Rn */
	IF(0x0C064858u); { u32 t_ = r11; PR = 0x0C06485Cu; r6 = 0x8u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0623C0, 0x0C0623C0u, 0x0C06485Cu); }  /* 0C064858 jsr @Rn */
L_0C06485C: BLKS(0x0C06485Cu);
	r4 = (u32)(s32)(s16)R16(r9); UPD(0x0C06485Eu, 1);  /* 0C06485C mov.w @Rm,Rn */
	r5 = 0x23u;  /* 0C06485E mov #imm,Rn */
	IF(0x0C064860u); { u32 t_ = r11; PR = 0x0C064864u; r6 = 0x8u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0623C0, 0x0C0623C0u, 0x0C064864u); }  /* 0C064860 jsr @Rn */
L_0C064864: BLKS(0x0C064864u);
	r3 = 0xC0626E0u; UPD(0x0C064866u, 1);  /* 0C064864 mov.l @(disp,pc),Rn */
	r5 = 0x1Eu;  /* 0C064866 mov #imm,Rn */
	r4 = 0xC1730D0u; UPD(0x0C06486Au, 2);  /* 0C064868 mov.l @(disp,pc),Rn */
	r7 = 0x4040C000u; UPD(0x0C06486Cu, 1);  /* 0C06486A mov.l @(disp,pc),Rn */
	IF(0x0C06486Cu); { u32 t_ = r3; PR = 0x0C064870u; r6 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C064870u); }  /* 0C06486C jsr @Rn */
L_0C064870: BLKS(0x0C064870u);
	r8 = 0xC0626E0u; UPD(0x0C064872u, 1);  /* 0C064870 mov.l @(disp,pc),Rn */
	r5 = 0x1Eu;  /* 0C064872 mov #imm,Rn */
	r4 = 0xC1730D4u; UPD(0x0C064876u, 2);  /* 0C064874 mov.l @(disp,pc),Rn */
	r7 = 0x4040C000u; UPD(0x0C064878u, 1);  /* 0C064876 mov.l @(disp,pc),Rn */
	IF(0x0C064878u); { u32 t_ = r8; PR = 0x0C06487Cu; r6 = 0x5u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C06487Cu); }  /* 0C064878 jsr @Rn */
L_0C06487C: BLKS(0x0C06487Cu);
	r10 = 0xC0626E0u; UPD(0x0C06487Eu, 1);  /* 0C06487C mov.l @(disp,pc),Rn */
	r5 = 0x1Eu;  /* 0C06487E mov #imm,Rn */
	r13 = 0xC0626E0u; UPD(0x0C064882u, 2);  /* 0C064880 mov.l @(disp,pc),Rn */
	r6 = 0x8u;  /* 0C064882 mov #imm,Rn */
	r4 = 0xC1730D8u; UPD(0x0C064886u, 2);  /* 0C064884 mov.l @(disp,pc),Rn */
	r7 = 0x4040C000u; UPD(0x0C064888u, 1);  /* 0C064886 mov.l @(disp,pc),Rn */
	IF(0x0C064888u); { u32 t_ = r10; PR = 0x0C06488Cu; r11 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C06488Cu); }  /* 0C064888 jsr @Rn */
L_0C06488C: BLKS(0x0C06488Cu);
	r4 = 0xC1730DCu; UPD(0x0C06488Eu, 1);  /* 0C06488C mov.l @(disp,pc),Rn */
	r5 = 0x1Eu;  /* 0C06488E mov #imm,Rn */
	r7 = 0x4040C000u; UPD(0x0C064892u, 2);  /* 0C064890 mov.l @(disp,pc),Rn */
	IF(0x0C064892u); { u32 t_ = r13; PR = 0x0C064896u; r6 = 0xCu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C064896u); }  /* 0C064892 jsr @Rn */
L_0C064896: BLKS(0x0C064896u);
	r2 = 0xC0626E0u; UPD(0x0C064898u, 1);  /* 0C064896 mov.l @(disp,pc),Rn */
	r5 = 0x1Eu;  /* 0C064898 mov #imm,Rn */
	r12 = 0xC0626E0u; UPD(0x0C06489Cu, 2);  /* 0C06489A mov.l @(disp,pc),Rn */
	r6 = 0x11u;  /* 0C06489C mov #imm,Rn */
	r4 = 0xC1730E4u; UPD(0x0C0648A0u, 2);  /* 0C06489E mov.l @(disp,pc),Rn */
	r7 = 0x4040C000u; UPD(0x0C0648A2u, 1);  /* 0C0648A0 mov.l @(disp,pc),Rn */
	IF(0x0C0648A2u); { u32 t_ = r2; PR = 0x0C0648A6u; r10 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C0648A6u); }  /* 0C0648A2 jsr @Rn */
L_0C0648A6: BLKS(0x0C0648A6u);
	r4 = 0xC1730ECu; UPD(0x0C0648A8u, 1);  /* 0C0648A6 mov.l @(disp,pc),Rn */
	r5 = 0x1Eu;  /* 0C0648A8 mov #imm,Rn */
	r7 = 0x4040C000u; UPD(0x0C0648ACu, 2);  /* 0C0648AA mov.l @(disp,pc),Rn */
	IF(0x0C0648ACu); { u32 t_ = r12; PR = 0x0C0648B0u; r6 = 0x16u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C0648B0u); }  /* 0C0648AC jsr @Rn */
L_0C0648B0: BLKS(0x0C0648B0u);
	r12 = 0x0u;  /* 0C0648B0 mov #imm,Rn */
	r13 = 0x0u;  /* 0C0648B2 mov #imm,Rn */
	UPD(0x0C0648B4u, 2);
L_0C0648B4: BLKS(0x0C0648B4u);
	r9 = 0u - r10;  /* 0C0648B4 neg Rm,Rn */
	r0 = 0xC062490u; UPD(0x0C0648B8u, 2);  /* 0C0648B6 mov.l @(disp,pc),Rn */
	r8 = r9;  /* 0C0648B8 mov Rm,Rn */
	r8 += 0x1Du;  /* 0C0648BA add #imm,Rn */
	r5 = r8;  /* 0C0648BC mov Rm,Rn */
	r6 = 0x1u;  /* 0C0648BE mov #imm,Rn */
	IF(0x0C0648C0u); { u32 t_ = r0; PR = 0x0C0648C4u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 6); CALLP(t_, blk_f_0C062490, 0x0C062490u, 0x0C0648C4u); }  /* 0C0648C0 jsr @Rn */
L_0C0648C4: BLKS(0x0C0648C4u);
	r5 = 0xC286318u; UPD(0x0C0648C6u, 1);  /* 0C0648C4 mov.l @(disp,pc),Rn */
	r0 = r11;  /* 0C0648C6 mov Rm,Rn */
	IF(0x0C0648C8u); r7 = R32(r0 + r5); UPD(0x0C0648CAu, 2);  /* 0C0648C8 mov.l @(r0,Rm),Rn */
	r6 = 0x40000000u; UPD(0x0C0648CCu, 1);  /* 0C0648CA mov.l @(disp,pc),Rn */
	r1 = 0xC1730F4u; UPD(0x0C0648CEu, 1);  /* 0C0648CC mov.l @(disp,pc),Rn */
	T = (r7 & r6) == 0;  /* 0C0648CE tst Rm,Rn */
	{ u32 c_ = !T; r5 = (u32)(s32)(s8)r8; /* slot exts.b Rm,Rn */ if (c_) { UPD(0x0C0648D6u, 4); goto L_0C0648D6; } goto L_0C0648D4; }  /* 0C0648D0 bf/s */
L_0C0648D4: BLKS(0x0C0648D4u);
	r1 = 0xC1730F8u; UPD(0x0C0648D6u, 2);  /* 0C0648D4 mov.l @(disp,pc),Rn */
L_0C0648D6: BLKS(0x0C0648D6u);
	r8 = 0xC0626E0u; UPD(0x0C0648D8u, 1);  /* 0C0648D6 mov.l @(disp,pc),Rn */
	r6 = 0x6u;  /* 0C0648D8 mov #imm,Rn */
	r4 = R32(r1); UPD(0x0C0648DCu, 2);  /* 0C0648DA mov.l @Rm,Rn */
	r7 = 0xC0404000u; UPD(0x0C0648DEu, 1);  /* 0C0648DC mov.l @(disp,pc),Rn */
	IF(0x0C0648DEu); { u32 t_ = r8; PR = 0x0C0648E2u; r9 += 0x1Du; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C0648E2u); }  /* 0C0648DE jsr @Rn */
L_0C0648E2: BLKS(0x0C0648E2u);
	r2 = 0xC286318u; UPD(0x0C0648E4u, 1);  /* 0C0648E2 mov.l @(disp,pc),Rn */
	r0 = r13;  /* 0C0648E4 mov Rm,Rn */
	IF(0x0C0648E6u); r4 = R32(r0 + r2); UPD(0x0C0648E8u, 2);  /* 0C0648E6 mov.l @(r0,Rm),Rn */
	r5 = (u32)(s32)(s8)r9;  /* 0C0648E8 exts.b Rm,Rn */
	r0 = 0x10000000u; UPD(0x0C0648ECu, 2);  /* 0C0648EA mov.l @(disp,pc),Rn */
	r1 = 0xC1730F4u; UPD(0x0C0648EEu, 1);  /* 0C0648EC mov.l @(disp,pc),Rn */
	T = (r4 & r0) == 0;  /* 0C0648EE tst Rm,Rn */
	{ u32 c_ = !T; r9 += 0xFFFFFFE3u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0648F6u, 4); goto L_0C0648F6; } goto L_0C0648F4; }  /* 0C0648F0 bf/s */
L_0C0648F4: BLKS(0x0C0648F4u);
	r1 = 0xC1730F8u; UPD(0x0C0648F6u, 2);  /* 0C0648F4 mov.l @(disp,pc),Rn */
L_0C0648F6: BLKS(0x0C0648F6u);
	r8 = 0xC0626E0u; UPD(0x0C0648F8u, 1);  /* 0C0648F6 mov.l @(disp,pc),Rn */
	r6 = 0x9u;  /* 0C0648F8 mov #imm,Rn */
	r4 = R32(r1); UPD(0x0C0648FCu, 2);  /* 0C0648FA mov.l @Rm,Rn */
	r7 = 0xC0404000u; UPD(0x0C0648FEu, 1);  /* 0C0648FC mov.l @(disp,pc),Rn */
	IF(0x0C0648FEu); { u32 t_ = r8; PR = 0x0C064902u; r9 += 0x1Du; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C064902u); }  /* 0C0648FE jsr @Rn */
L_0C064902: BLKS(0x0C064902u);
	r8 = 0xC286318u; UPD(0x0C064904u, 1);  /* 0C064902 mov.l @(disp,pc),Rn */
	r5 = r9;  /* 0C064904 mov Rm,Rn */
	r8 += r12;  /* 0C064906 add Rm,Rn */
	r3 = R32(r8 + 0x8u); UPD(0x0C06490Au, 3);  /* 0C064908 mov.l @(disp,Rm),Rn */
	r6 = 0xCu;  /* 0C06490A mov #imm,Rn */
	r2 = 0xC0623C0u; UPD(0x0C06490Eu, 2);  /* 0C06490C mov.l @(disp,pc),Rn */
	r0 = (r3 >> 16) | (r3 << 16);  /* 0C06490E swap.w Rm,Rn */
	IF(0x0C064910u); { u32 t_ = r2; PR = 0x0C064914u; r4 = (u32)(s32)(s16)r0; /* slot exts.w Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0623C0, 0x0C0623C0u, 0x0C064914u); }  /* 0C064910 jsr @Rn */
L_0C064914: BLKS(0x0C064914u);
	r5 = R32(r8 + 0xCu); UPD(0x0C064916u, 1);  /* 0C064914 mov.l @(disp,Rm),Rn */
	r12 += 0x4Cu;  /* 0C064916 add #imm,Rn */
	r7 = 0xC0623C0u; UPD(0x0C06491Au, 2);  /* 0C064918 mov.l @(disp,pc),Rn */
	r6 = (r5 >> 16) | (r5 << 16);  /* 0C06491A swap.w Rm,Rn */
	r4 = (u32)(s32)(s16)r6;  /* 0C06491C exts.w Rm,Rn */
	r5 = r9;  /* 0C06491E mov Rm,Rn */
	r6 = 0x11u;  /* 0C064920 mov #imm,Rn */
	IF(0x0C064922u); { u32 t_ = r7; PR = 0x0C064926u; r8 += 0x42u; /* slot add #imm,Rn */ UPD(t_, 6); CALLP(t_, blk_f_0C0623C0, 0x0C0623C0u, 0x0C064926u); }  /* 0C064922 jsr @Rn */
L_0C064926: BLKS(0x0C064926u);
	r1 = (u32)(s32)(s8)R8(r8); UPD(0x0C064928u, 1);  /* 0C064926 mov.b @Rm,Rn */
	r5 = r9;  /* 0C064928 mov Rm,Rn */
	r8 = 0xC062490u; UPD(0x0C06492Cu, 2);  /* 0C06492A mov.l @(disp,pc),Rn */
	r4 = r1 & 0xFF;  /* 0C06492C extu.b Rm,Rn */
	IF(0x0C06492Eu); { u32 t_ = r8; PR = 0x0C064932u; r6 = 0x16u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C062490, 0x0C062490u, 0x0C064932u); }  /* 0C06492E jsr @Rn */
L_0C064932: BLKS(0x0C064932u);
	r3 = r10;  /* 0C064932 mov Rm,Rn */
	r3 += 0x1u;  /* 0C064934 add #imm,Rn */
	r10 = (u32)(s32)(s16)r3;  /* 0C064936 exts.w Rm,Rn */
	r9 = 0x7u;  /* 0C064938 mov #imm,Rn */
	r13 += 0x4Cu;  /* 0C06493A add #imm,Rn */
	T = (s32)r10 > (s32)r9;  /* 0C06493C cmp/gt Rm,Rn */
	{ u32 c_ = !T; r11 += 0x4Cu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0648B4u, 9); goto L_0C0648B4; } goto L_0C064942; }  /* 0C06493E bf/s */
L_0C064942: BLKS(0x0C064942u);
	{ IF(0x0C064944u); ; /* slot nop */ UPD(0x0C0646EEu, 4); goto L_0C0646EE; }  /* 0C064942 bra */
L_0C0649C0: BLKS(0x0C0649C0u);
	r0 = 0x200u; UPD(0x0C0649C2u, 1);  /* 0C0649C0 mov.w @(disp,pc),Rn */
	IF(0x0C0649C2u); r0 = (u32)(s32)(s16)R16(r0 + r1); UPD(0x0C0649C4u, 1);  /* 0C0649C2 mov.w @(r0,Rm),Rn */
	r0 &= 0x2u;  /* 0C0649C4 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0649C6 tst Rm,Rn */
	{ u32 c_ = !T; r9 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C064A40u, 5); goto L_0C064A40; } UPD(0x0C0649CCu, 1); goto L_0C0649CC; }  /* 0C0649C8 bf/s */
L_0C0649CC: BLKS(0x0C0649CCu);
	r2 = 0xC297638u; UPD(0x0C0649CEu, 1);  /* 0C0649CC mov.l @(disp,pc),Rn */
	r0 = 0x200u; UPD(0x0C0649D0u, 1);  /* 0C0649CE mov.w @(disp,pc),Rn */
	IF(0x0C0649D0u); r0 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C0649D2u, 1);  /* 0C0649D0 mov.w @(r0,Rm),Rn */
	r0 &= 0x1u;  /* 0C0649D2 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0649D4 tst Rm,Rn */
	{ u32 c_ = !T; r7 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C064A10u, 5); goto L_0C064A10; } UPD(0x0C0649DAu, 1); goto L_0C0649DA; }  /* 0C0649D6 bf/s */
L_0C0649DA: BLKS(0x0C0649DAu);
	r6 = 0x4u;  /* 0C0649DA mov #imm,Rn */
	r8 = 0xC0626E0u; UPD(0x0C0649DEu, 2);  /* 0C0649DC mov.l @(disp,pc),Rn */
	r5 = 0u - r7;  /* 0C0649DE neg Rm,Rn */
	r4 = 0xC172BC8u; UPD(0x0C0649E2u, 2);  /* 0C0649E0 mov.l @(disp,pc),Rn */
	r7 = 0x40C04000u; UPD(0x0C0649E4u, 1);  /* 0C0649E2 mov.l @(disp,pc),Rn */
	IF(0x0C0649E4u); { u32 t_ = r8; PR = 0x0C0649E8u; r5 += 0x1Du; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C0649E8u); }  /* 0C0649E4 jsr @Rn */
L_0C0649E8: BLKS(0x0C0649E8u);
	r10 = 0xC297638u; UPD(0x0C0649EAu, 1);  /* 0C0649E8 mov.l @(disp,pc),Rn */
	r0 = 0x200u; UPD(0x0C0649ECu, 1);  /* 0C0649EA mov.w @(disp,pc),Rn */
	IF(0x0C0649ECu); r0 = (u32)(s32)(s16)R16(r0 + r10); UPD(0x0C0649EEu, 1);  /* 0C0649EC mov.w @(r0,Rm),Rn */
	T = (r0 & 0xCu) == 0;  /* 0C0649EE tst #imm,r0 */
	{ u32 c_ = T; r1 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C064A06u, 4); goto L_0C064A06; } UPD(0x0C0649F4u, 1); goto L_0C0649F4; }  /* 0C0649F0 bt/s */
L_0C0649F4: BLKS(0x0C0649F4u);
	r11 = 0x4Cu;  /* 0C0649F4 mov #imm,Rn */
	IF(0x0C0649F6u); MACL = r1 * r11;  /* 0C0649F6 mul.l Rm,Rn */
	r9 = 0xC286318u; UPD(0x0C0649FAu, 4);  /* 0C0649F8 mov.l @(disp,pc),Rn */
	IF(0x0C0649FAu); r0 = MACL;  /* 0C0649FA sts macl,Rn */
	r0 += r9;  /* 0C0649FC add Rm,Rn */
	r4 = R32(r0); UPD(0x0C064A00u, 3);  /* 0C0649FE mov.l @Rm,Rn */
	r3 = 0x40000000u; UPD(0x0C064A02u, 1);  /* 0C064A00 mov.l @(disp,pc),Rn */
	r4 ^= r3;  /* 0C064A02 xor Rm,Rn */
	W32(r0, r4); UPD(0x0C064A06u, 2);  /* 0C064A04 mov.l Rm,@Rn */
L_0C064A06: BLKS(0x0C064A06u);
	r8 = 0xC29D728u; UPD(0x0C064A08u, 1);  /* 0C064A06 mov.l @(disp,pc),Rn */
	r9 = 0xC3C4048u; UPD(0x0C064A0Au, 1);  /* 0C064A08 mov.l @(disp,pc),Rn */
	{ IF(0x0C064A0Cu); ; /* slot nop */ UPD(0x0C06483Au, 3); goto L_0C06483A; }  /* 0C064A0A bra */
L_0C064A10: BLKS(0x0C064A10u);
	r13 = R32(r14 + 0x4u); UPD(0x0C064A12u, 1);  /* 0C064A10 mov.l @(disp,Rm),Rn */
	r6 = 0x4u;  /* 0C064A12 mov #imm,Rn */
	r12 = 0xC0626E0u; UPD(0x0C064A16u, 2);  /* 0C064A14 mov.l @(disp,pc),Rn */
	r5 = 0u - r13;  /* 0C064A16 neg Rm,Rn */
	r7 = 0x80808000u; UPD(0x0C064A1Au, 2);  /* 0C064A18 mov.l @(disp,pc),Rn */
	r4 = 0xC1730A0u; UPD(0x0C064A1Cu, 1);  /* 0C064A1A mov.l @(disp,pc),Rn */
	IF(0x0C064A1Cu); { u32 t_ = r12; PR = 0x0C064A20u; r5 += 0x1Du; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C064A20u); }  /* 0C064A1C jsr @Rn */
L_0C064A20: BLKS(0x0C064A20u);
	r7 = 0xC1730A8u; UPD(0x0C064A22u, 1);  /* 0C064A20 mov.l @(disp,pc),Rn */
	r2 = 0x4Cu;  /* 0C064A22 mov #imm,Rn */
	r3 = 0xC286318u; UPD(0x0C064A26u, 2);  /* 0C064A24 mov.l @(disp,pc),Rn */
	r0 = R32(r14 + 0x4u); UPD(0x0C064A28u, 1);  /* 0C064A26 mov.l @(disp,Rm),Rn */
L_0C064A28: BLKS(0x0C064A28u);
	IF(0x0C064A28u); r6 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C064A2Au, 1);  /* 0C064A28 mov.b @(r0,Rm),Rn */
	IF(0x0C064A2Au); MACL = r6 * r2;  /* 0C064A2A mul.l Rm,Rn */
	W32(r14 + 0x4u, r6); UPD(0x0C064A2Eu, 3);  /* 0C064A2C mov.l Rm,@(disp,Rn) */
	IF(0x0C064A2Eu); r0 = MACL;  /* 0C064A2E sts macl,Rn */
	IF(0x0C064A30u); r5 = R32(r0 + r3); UPD(0x0C064A32u, 2);  /* 0C064A30 mov.l @(r0,Rm),Rn */
	T = (r5 & r5) == 0;  /* 0C064A32 tst Rm,Rn */
	{ u32 c_ = T; r0 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C064A28u, 4); goto L_0C064A28; } UPD(0x0C064A38u, 1); goto L_0C064A38; }  /* 0C064A34 bt/s */
L_0C064A38: BLKS(0x0C064A38u);
	{ r7 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0649DAu, 3); goto L_0C0649DA; }  /* 0C064A38 bra */
L_0C064A40: BLKS(0x0C064A40u);
	r6 = 0x4u;  /* 0C064A40 mov #imm,Rn */
	r8 = 0xC0626E0u; UPD(0x0C064A44u, 2);  /* 0C064A42 mov.l @(disp,pc),Rn */
	r5 = 0u - r9;  /* 0C064A44 neg Rm,Rn */
	r7 = 0x80808000u; UPD(0x0C064A48u, 2);  /* 0C064A46 mov.l @(disp,pc),Rn */
	r4 = 0xC1730A0u; UPD(0x0C064A4Au, 1);  /* 0C064A48 mov.l @(disp,pc),Rn */
	IF(0x0C064A4Au); { u32 t_ = r8; PR = 0x0C064A4Eu; r5 += 0x1Du; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C064A4Eu); }  /* 0C064A4A jsr @Rn */
L_0C064A4E: BLKS(0x0C064A4Eu);
	r7 = 0xC1730B0u; UPD(0x0C064A50u, 1);  /* 0C064A4E mov.l @(disp,pc),Rn */
	r2 = 0x4Cu;  /* 0C064A50 mov #imm,Rn */
	r3 = 0xC286318u; UPD(0x0C064A54u, 2);  /* 0C064A52 mov.l @(disp,pc),Rn */
	r0 = R32(r14 + 0x4u); UPD(0x0C064A56u, 1);  /* 0C064A54 mov.l @(disp,Rm),Rn */
L_0C064A56: BLKS(0x0C064A56u);
	IF(0x0C064A56u); r1 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C064A58u, 1);  /* 0C064A56 mov.b @(r0,Rm),Rn */
	IF(0x0C064A58u); MACL = r1 * r2;  /* 0C064A58 mul.l Rm,Rn */
	W32(r14 + 0x4u, r1); UPD(0x0C064A5Cu, 3);  /* 0C064A5A mov.l Rm,@(disp,Rn) */
	IF(0x0C064A5Cu); r0 = MACL;  /* 0C064A5C sts macl,Rn */
	IF(0x0C064A5Eu); r11 = R32(r0 + r3); UPD(0x0C064A60u, 2);  /* 0C064A5E mov.l @(r0,Rm),Rn */
	T = (r11 & r11) == 0;  /* 0C064A60 tst Rm,Rn */
	{ u32 c_ = T; r0 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C064A56u, 4); goto L_0C064A56; } UPD(0x0C064A66u, 1); goto L_0C064A66; }  /* 0C064A62 bt/s */
L_0C064A66: BLKS(0x0C064A66u);
	{ IF(0x0C064A68u); ; /* slot nop */ UPD(0x0C0649CCu, 3); goto L_0C0649CC; }  /* 0C064A66 bra */
L_0C064A70: BLKS(0x0C064A70u);
	r6 = 0xC297638u; UPD(0x0C064A72u, 1);  /* 0C064A70 mov.l @(disp,pc),Rn */
	r0 = 0x100u; UPD(0x0C064A74u, 1);  /* 0C064A72 mov.w @(disp,pc),Rn */
	IF(0x0C064A74u); r5 = (u32)(s32)(s16)R16(r0 + r6); UPD(0x0C064A76u, 1);  /* 0C064A74 mov.w @(r0,Rm),Rn */
	r3 = 0xC2065A0u; UPD(0x0C064A78u, 1);  /* 0C064A76 mov.l @(disp,pc),Rn */
	r8 &= r5;  /* 0C064A78 and Rm,Rn */
	T = (r8 & r8) == 0;  /* 0C064A7A tst Rm,Rn */
	{ u32 c_ = T; r0 = r8; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C064AAAu, 5); goto L_0C064AAA; } goto L_0C064A80; }  /* 0C064A7C bt/s */
L_0C064A80: BLKS(0x0C064A80u);
	T = r0 == 0x8u;  /* 0C064A80 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C064B10u, 5); goto L_0C064B10; }  /* 0C064A82 bt */
L_0C064A84: BLKS(0x0C064A84u);
	r0 = r8;  /* 0C064A84 mov Rm,Rn */
	UPD(0x0C064A86u, 1);
L_0C064A86: BLKS(0x0C064A86u);
	T = r0 == 0x4u;  /* 0C064A86 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C064AD0u, 4); goto L_0C064AD0; }  /* 0C064A88 bt */
L_0C064A8A: BLKS(0x0C064A8Au);
	r13 = 0xC072340u; UPD(0x0C064A8Cu, 1);  /* 0C064A8A mov.l @(disp,pc),Rn */
	r12 = 0xC0C0910u; UPD(0x0C064A8Eu, 1);  /* 0C064A8C mov.l @(disp,pc),Rn */
	IF(0x0C064A8Eu); { u32 t_ = r13; PR = 0x0C064A92u; IF(0x0C064A90u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C072340, 0x0C072340u, 0x0C064A92u); }  /* 0C064A8E jsr @Rn */
L_0C064A92: BLKS(0x0C064A92u);
	r11 = 0xC0C1270u; UPD(0x0C064A94u, 1);  /* 0C064A92 mov.l @(disp,pc),Rn */
	IF(0x0C064A94u); { u32 t_ = r12; PR = 0x0C064A98u; IF(0x0C064A96u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0C0910, 0x0C0C0910u, 0x0C064A98u); }  /* 0C064A94 jsr @Rn */
L_0C064A98: BLKS(0x0C064A98u);
	r10 = 0xC2B038Cu; UPD(0x0C064A9Au, 1);  /* 0C064A98 mov.l @(disp,pc),Rn */
	IF(0x0C064A9Au); { u32 t_ = r11; PR = 0x0C064A9Eu; IF(0x0C064A9Cu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0C1270, 0x0C0C1270u, 0x0C064A9Eu); }  /* 0C064A9A jsr @Rn */
L_0C064A9E: BLKS(0x0C064A9Eu);
	r4 = 0xC239482u; UPD(0x0C064AA0u, 1);  /* 0C064A9E mov.l @(disp,pc),Rn */
	r3 = 0xFFFFFF80u;  /* 0C064AA0 mov #imm,Rn */
	r2 = 0xC28F60Au; UPD(0x0C064AA4u, 2);  /* 0C064AA2 mov.l @(disp,pc),Rn */
	W8(r4, r3); UPD(0x0C064AA6u, 1);  /* 0C064AA4 mov.b Rm,@Rn */
	W8(r2, r3); UPD(0x0C064AA8u, 1);  /* 0C064AA6 mov.b Rm,@Rn */
	W8(r10, r3); UPD(0x0C064AAAu, 1);  /* 0C064AA8 mov.b Rm,@Rn */
L_0C064AAA: BLKS(0x0C064AAAu);
	r10 = 0xC0626E0u; UPD(0x0C064AACu, 1);  /* 0C064AAA mov.l @(disp,pc),Rn */
	r5 = 0x25u;  /* 0C064AAC mov #imm,Rn */
	r7 = 0x4040C000u; UPD(0x0C064AB0u, 2);  /* 0C064AAE mov.l @(disp,pc),Rn */
	r4 = 0xC1730B8u; UPD(0x0C064AB2u, 1);  /* 0C064AB0 mov.l @(disp,pc),Rn */
	IF(0x0C064AB2u); { u32 t_ = r10; PR = 0x0C064AB6u; r6 = 0x1u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C064AB6u); }  /* 0C064AB2 jsr @Rn */
L_0C064AB6: BLKS(0x0C064AB6u);
	r6 = 0xC23E0A6u; UPD(0x0C064AB8u, 1);  /* 0C064AB6 mov.l @(disp,pc),Rn */
	r9 = 0xC062490u; UPD(0x0C064ABAu, 1);  /* 0C064AB8 mov.l @(disp,pc),Rn */
	r5 = (u32)(s32)(s8)R8(r6); UPD(0x0C064ABCu, 1);  /* 0C064ABA mov.b @Rm,Rn */
	r8 = 0xC06F5B0u; UPD(0x0C064ABEu, 1);  /* 0C064ABC mov.l @(disp,pc),Rn */
	r4 = r5 & 0xFF;  /* 0C064ABE extu.b Rm,Rn */
	r5 = 0x25u;  /* 0C064AC0 mov #imm,Rn */
	IF(0x0C064AC2u); { u32 t_ = r9; PR = 0x0C064AC6u; r6 = 0x8u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C062490, 0x0C062490u, 0x0C064AC6u); }  /* 0C064AC2 jsr @Rn */
L_0C064AC6: BLKS(0x0C064AC6u);
	IF(0x0C064AC6u); { u32 t_ = r8; PR = 0x0C064ACAu; IF(0x0C064AC8u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C06F5B0, 0x0C06F5B0u, 0x0C064ACAu); }  /* 0C064AC6 jsr @Rn */
L_0C064ACA: BLKS(0x0C064ACAu);
	{ IF(0x0C064ACCu); ; /* slot nop */ UPD(0x0C0646EEu, 3); goto L_0C0646EE; }  /* 0C064ACA bra */
L_0C064AD0: BLKS(0x0C064AD0u);
	r2 = 0xC23E0A6u; UPD(0x0C064AD2u, 1);  /* 0C064AD0 mov.l @(disp,pc),Rn */
	r7 = (u32)(s32)(s8)R8(r2); UPD(0x0C064AD4u, 1);  /* 0C064AD2 mov.b @Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C064AD4 tst Rm,Rn */
	if (!T) { UPD(0x0C064B00u, 4); goto L_0C064B00; }  /* 0C064AD6 bf */
L_0C064AD8: BLKS(0x0C064AD8u);
	r11 = R32(r3 + 0x4u); UPD(0x0C064ADAu, 1);  /* 0C064AD8 mov.l @(disp,Rm),Rn */
	T = (r11 & r11) == 0;  /* 0C064ADA tst Rm,Rn */
	if (T) { UPD(0x0C064A8Au, 4); goto L_0C064A8A; }  /* 0C064ADC bt */
L_0C064ADE: BLKS(0x0C064ADEu);
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C064AE0u, 1);  /* 0C064ADE mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C064AE0 add #imm,Rn */
	r13 = r0 & 0xFF;  /* 0C064AE2 extu.b Rm,Rn */
	W8(r2, r0); UPD(0x0C064AE6u, 3);  /* 0C064AE4 mov.b Rm,@Rn */
	IF(0x0C064AE6u); r13 <<= 2;  /* 0C064AE6 shll2 Rn */
	r13 += r3;  /* 0C064AE8 add Rm,Rn */
	r12 = R32(r13 + 0x4u); UPD(0x0C064AECu, 3);  /* 0C064AEA mov.l @(disp,Rm),Rn */
	T = (r12 & r12) == 0;  /* 0C064AEC tst Rm,Rn */
	if (!T) { UPD(0x0C064ADEu, 4); goto L_0C064ADE; }  /* 0C064AEE bf */
L_0C064AF0: BLKS(0x0C064AF0u);
	{ IF(0x0C064AF2u); ; /* slot nop */ UPD(0x0C064A8Au, 3); goto L_0C064A8A; }  /* 0C064AF0 bra */
L_0C064B00: BLKS(0x0C064B00u);
	r8 = 0xC23E0A6u; UPD(0x0C064B02u, 1);  /* 0C064B00 mov.l @(disp,pc),Rn */
	r9 = (u32)(s32)(s8)R8(r8); UPD(0x0C064B04u, 1);  /* 0C064B02 mov.b @Rm,Rn */
	r9 += 0xFFFFFFFFu;  /* 0C064B04 add #imm,Rn */
	{ W8(r8, r9); /* slot mov.b Rm,@Rn */ UPD(0x0C064A8Au, 4); goto L_0C064A8A; }  /* 0C064B06 bra */
L_0C064B10: BLKS(0x0C064B10u);
	r2 = 0xC23E0A6u; UPD(0x0C064B12u, 1);  /* 0C064B10 mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C064B14u, 1);  /* 0C064B12 mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C064B14 add #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C064B16 extu.b Rm,Rn */
	W8(r2, r1); UPD(0x0C064B1Au, 3);  /* 0C064B18 mov.b Rm,@Rn */
	IF(0x0C064B1Au); r0 <<= 2;  /* 0C064B1A shll2 Rn */
	IF(0x0C064B1Cu); r1 = R32(r0 + r3); UPD(0x0C064B1Eu, 2);  /* 0C064B1C mov.l @(r0,Rm),Rn */
	T = (r1 & r1) == 0;  /* 0C064B1E tst Rm,Rn */
	if (!T) { UPD(0x0C064A84u, 4); goto L_0C064A84; }  /* 0C064B20 bf */
L_0C064B22: BLKS(0x0C064B22u);
	W8(r2, r1); UPD(0x0C064B24u, 1);  /* 0C064B22 mov.b Rm,@Rn */
	{ r0 = r8; /* slot mov Rm,Rn */ UPD(0x0C064A86u, 3); goto L_0C064A86; }  /* 0C064B24 bra */
L_0C064B30: BLKS(0x0C064B30u);
	{ W32(r14, r4); /* slot mov.l Rm,@Rn */ UPD(0x0C0646D8u, 3); goto L_0C0646D8; }  /* 0C064B30 bra */
}

void blk_f_0C064BA0(sh3_t *c)
{
	LOCALS;
L_0C064BA0: BLKS(0x0C064BA0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C064BA2u, 1);  /* 0C064BA0 mov.l Rm,@-Rn */
	r2 = 0x0u;  /* 0C064BA2 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C064BA6u, 2);  /* 0C064BA4 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C064BA8u, 1);  /* 0C064BA6 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C064BAAu, 1);  /* 0C064BA8 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C064BACu, 1);  /* 0C064BAA mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C064BAEu, 1);  /* 0C064BAC mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C064BB0u, 1);  /* 0C064BAE mov.l Rm,@-Rn */
	r7 = 0xC29CF80u; UPD(0x0C064BB2u, 1);  /* 0C064BB0 mov.l @(disp,pc),Rn */
	IF(0x0C064BB2u); r15 -= 4; W32(r15, PR); UPD(0x0C064BB4u, 1);  /* 0C064BB2 sts.l pr,@-Rn */
	r4 = 0xC22E25Eu; UPD(0x0C064BB6u, 1);  /* 0C064BB4 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFE0u;  /* 0C064BB6 add #imm,Rn */
	r6 = (u32)(s32)(s16)R16(r7); UPD(0x0C064BBAu, 2);  /* 0C064BB8 mov.w @Rm,Rn */
	r14 = r15;  /* 0C064BBA mov Rm,Rn */
	r3 = (u32)(s32)(s16)R16(r4); UPD(0x0C064BBEu, 2);  /* 0C064BBC mov.w @Rm,Rn */
	IF(0x0C064BBEu); r6 <<= 8;  /* 0C064BBE shll8 Rn */
	r5 = (u32)(s32)(s16)r6;  /* 0C064BC0 exts.w Rm,Rn */
	r8 = 0xC0C23D0u; UPD(0x0C064BC4u, 3);  /* 0C064BC2 mov.l @(disp,pc),Rn */
	IF(0x0C064BC4u); r3 <<= 8;  /* 0C064BC4 shll8 Rn */
	W32(r14 + 0xCu, r5); UPD(0x0C064BC8u, 2);  /* 0C064BC6 mov.l Rm,@(disp,Rn) */
	r0 = (u32)(s32)(s16)r3;  /* 0C064BC8 exts.w Rm,Rn */
	W32(r14 + 0x10u, r0); UPD(0x0C064BCCu, 2);  /* 0C064BCA mov.l Rm,@(disp,Rn) */
	r4 = r14;  /* 0C064BCC mov Rm,Rn */
	W32(r14 + 0x14u, r2); UPD(0x0C064BD0u, 2);  /* 0C064BCE mov.l Rm,@(disp,Rn) */
	r6 = 0xBu;  /* 0C064BD0 mov #imm,Rn */
	W32(r14 + 0x18u, r2); UPD(0x0C064BD4u, 2);  /* 0C064BD2 mov.l Rm,@(disp,Rn) */
	r5 = 0xC0C426Eu; UPD(0x0C064BD6u, 1);  /* 0C064BD4 mov.l @(disp,pc),Rn */
	IF(0x0C064BD6u); { u32 t_ = r8; PR = 0x0C064BDAu; W32(r14 + 0x1Cu, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0C23D0, 0x0C0C23D0u, 0x0C064BDAu); }  /* 0C064BD6 jsr @Rn */
L_0C064BDA: BLKS(0x0C064BDAu);
	r0 = 0xC3C4048u; UPD(0x0C064BDCu, 1);  /* 0C064BDA mov.l @(disp,pc),Rn */
	r1 = R32(r14 + 0x18u); UPD(0x0C064BDEu, 1);  /* 0C064BDC mov.l @(disp,Rm),Rn */
	W32(r0, r1); UPD(0x0C064BE0u, 1);  /* 0C064BDE mov.l Rm,@Rn */
L_0C064BE0: BLKS(0x0C064BE0u);
	r11 = 0xC060BC0u; UPD(0x0C064BE2u, 1);  /* 0C064BE0 mov.l @(disp,pc),Rn */
	r8 = 0xC061200u; UPD(0x0C064BE4u, 1);  /* 0C064BE2 mov.l @(disp,pc),Rn */
	IF(0x0C064BE4u); { u32 t_ = r11; PR = 0x0C064BE8u; IF(0x0C064BE6u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C060BC0, 0x0C060BC0u, 0x0C064BE8u); }  /* 0C064BE4 jsr @Rn */
L_0C064BE8: BLKS(0x0C064BE8u);
	r13 = 0xC062060u; UPD(0x0C064BEAu, 1);  /* 0C064BE8 mov.l @(disp,pc),Rn */
	IF(0x0C064BEAu); { u32 t_ = r8; PR = 0x0C064BEEu; IF(0x0C064BECu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C061200, 0x0C061200u, 0x0C064BEEu); }  /* 0C064BEA jsr @Rn */
L_0C064BEE: BLKS(0x0C064BEEu);
	r9 = 0xC062000u; UPD(0x0C064BF0u, 1);  /* 0C064BEE mov.l @(disp,pc),Rn */
	r11 = 0xC0626E0u; UPD(0x0C064BF2u, 1);  /* 0C064BF0 mov.l @(disp,pc),Rn */
	IF(0x0C064BF2u); { u32 t_ = r13; PR = 0x0C064BF6u; r4 = 0x40u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062060, 0x0C062060u, 0x0C064BF6u); }  /* 0C064BF2 jsr @Rn */
L_0C064BF6: BLKS(0x0C064BF6u);
	IF(0x0C064BF6u); { u32 t_ = r9; PR = 0x0C064BFAu; IF(0x0C064BF8u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C062000, 0x0C062000u, 0x0C064BFAu); }  /* 0C064BF6 jsr @Rn */
L_0C064BFA: BLKS(0x0C064BFAu);
	r12 = 0x80808000u; UPD(0x0C064BFCu, 1);  /* 0C064BFA mov.l @(disp,pc),Rn */
	r5 = 0x24u;  /* 0C064BFC mov #imm,Rn */
	r4 = 0xC172A3Cu; UPD(0x0C064C00u, 2);  /* 0C064BFE mov.l @(disp,pc),Rn */
	r6 = 0xBu;  /* 0C064C00 mov #imm,Rn */
	r10 = 0x40C04000u; UPD(0x0C064C04u, 2);  /* 0C064C02 mov.l @(disp,pc),Rn */
	IF(0x0C064C04u); { u32 t_ = r11; PR = 0x0C064C08u; r7 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C064C08u); }  /* 0C064C04 jsr @Rn */
L_0C064C08: BLKS(0x0C064C08u);
	r4 = 0xC173130u; UPD(0x0C064C0Au, 1);  /* 0C064C08 mov.l @(disp,pc),Rn */
	r5 = 0x4u;  /* 0C064C0A mov #imm,Rn */
	r6 = 0x1u;  /* 0C064C0C mov #imm,Rn */
	IF(0x0C064C0Eu); { u32 t_ = r11; PR = 0x0C064C12u; r7 = r10; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C064C12u); }  /* 0C064C0E jsr @Rn */
L_0C064C12: BLKS(0x0C064C12u);
	r4 = 0xC173134u; UPD(0x0C064C14u, 1);  /* 0C064C12 mov.l @(disp,pc),Rn */
	r5 = 0xCu;  /* 0C064C14 mov #imm,Rn */
	r6 = 0x1u;  /* 0C064C16 mov #imm,Rn */
	IF(0x0C064C18u); { u32 t_ = r11; PR = 0x0C064C1Cu; r7 = r10; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C064C1Cu); }  /* 0C064C18 jsr @Rn */
L_0C064C1C: BLKS(0x0C064C1Cu);
	r4 = 0xC173138u; UPD(0x0C064C1Eu, 1);  /* 0C064C1C mov.l @(disp,pc),Rn */
	r5 = 0x14u;  /* 0C064C1E mov #imm,Rn */
	r6 = 0x1u;  /* 0C064C20 mov #imm,Rn */
	IF(0x0C064C22u); { u32 t_ = r11; PR = 0x0C064C26u; r7 = r10; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C064C26u); }  /* 0C064C22 jsr @Rn */
L_0C064C26: BLKS(0x0C064C26u);
	r4 = 0xC17313Cu; UPD(0x0C064C28u, 1);  /* 0C064C26 mov.l @(disp,pc),Rn */
	r5 = 0x1Cu;  /* 0C064C28 mov #imm,Rn */
	r6 = 0x1u;  /* 0C064C2A mov #imm,Rn */
	IF(0x0C064C2Cu); { u32 t_ = r11; PR = 0x0C064C30u; r7 = r10; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C064C30u); }  /* 0C064C2C jsr @Rn */
L_0C064C30: BLKS(0x0C064C30u);
	r4 = 0xC172B0Cu; UPD(0x0C064C32u, 1);  /* 0C064C30 mov.l @(disp,pc),Rn */
	r5 = 0x2u;  /* 0C064C32 mov #imm,Rn */
	r6 = 0x3u;  /* 0C064C34 mov #imm,Rn */
	IF(0x0C064C36u); { u32 t_ = r11; PR = 0x0C064C3Au; r7 = r12; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C064C3Au); }  /* 0C064C36 jsr @Rn */
L_0C064C3A: BLKS(0x0C064C3Au);
	r4 = 0xC172B28u; UPD(0x0C064C3Cu, 1);  /* 0C064C3A mov.l @(disp,pc),Rn */
	r5 = 0x1u;  /* 0C064C3C mov #imm,Rn */
	r6 = 0x5u;  /* 0C064C3E mov #imm,Rn */
	IF(0x0C064C40u); { u32 t_ = r11; PR = 0x0C064C44u; r7 = r12; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C064C44u); }  /* 0C064C40 jsr @Rn */
L_0C064C44: BLKS(0x0C064C44u);
	r2 = 0xC297638u; UPD(0x0C064C46u, 1);  /* 0C064C44 mov.l @(disp,pc),Rn */
	r3 = (u32)(s32)(s16)R16(r2); UPD(0x0C064C48u, 1);  /* 0C064C46 mov.w @Rm,Rn */
	r0 = r3;  /* 0C064C48 mov Rm,Rn */
	r0 &= 0x10u;  /* 0C064C4A and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C064C4C tst Rm,Rn */
	{ u32 c_ = !T; r0 = r3; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C064C56u, 6); goto L_0C064C56; } goto L_0C064C52; }  /* 0C064C4E bf/s */
L_0C064C52: BLKS(0x0C064C52u);
	{ r0 &= 0x20u; /* slot and #imm,r0 */ UPD(0x0C065010u, 4); goto L_0C065010; }  /* 0C064C52 bra */
L_0C064C56: BLKS(0x0C064C56u);
	r0 = 0x200u; UPD(0x0C064C58u, 1);  /* 0C064C56 mov.w @(disp,pc),Rn */
	IF(0x0C064C58u); r2 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C064C5Au, 1);  /* 0C064C58 mov.w @(r0,Rm),Rn */
	r0 = r2;  /* 0C064C5A mov Rm,Rn */
	r0 &= 0x1u;  /* 0C064C5C and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C064C5E tst Rm,Rn */
	{ u32 c_ = T; r0 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C064C70u, 6); goto L_0C064C70; } goto L_0C064C64; }  /* 0C064C60 bt/s */
L_0C064C64: BLKS(0x0C064C64u);
	r0 = R32(r14 + 0xCu); UPD(0x0C064C66u, 2);  /* 0C064C64 mov.l @(disp,Rm),Rn */
	r3 = 0x1FFFu; UPD(0x0C064C68u, 1);  /* 0C064C66 mov.w @(disp,pc),Rn */
	r0 += 0xFFFFFFE0u;  /* 0C064C68 add #imm,Rn */
	r0 &= r3;  /* 0C064C6A and Rm,Rn */
	W32(r14 + 0xCu, r0); UPD(0x0C064C6Eu, 3);  /* 0C064C6C mov.l Rm,@(disp,Rn) */
	r0 = r2;  /* 0C064C6E mov Rm,Rn */
	UPD(0x0C064C70u, 1);
L_0C064C70: BLKS(0x0C064C70u);
	r0 &= 0x2u;  /* 0C064C70 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C064C72 tst Rm,Rn */
	{ u32 c_ = T; r0 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C064C84u, 5); goto L_0C064C84; } goto L_0C064C78; }  /* 0C064C74 bt/s */
L_0C064C78: BLKS(0x0C064C78u);
	r4 = R32(r14 + 0xCu); UPD(0x0C064C7Au, 2);  /* 0C064C78 mov.l @(disp,Rm),Rn */
	r5 = 0x1FFFu; UPD(0x0C064C7Cu, 1);  /* 0C064C7A mov.w @(disp,pc),Rn */
	r4 += 0x20u;  /* 0C064C7C add #imm,Rn */
	r4 &= r5;  /* 0C064C7E and Rm,Rn */
	W32(r14 + 0xCu, r4); UPD(0x0C064C82u, 3);  /* 0C064C80 mov.l Rm,@(disp,Rn) */
	r0 = r2;  /* 0C064C82 mov Rm,Rn */
	UPD(0x0C064C84u, 1);
L_0C064C84: BLKS(0x0C064C84u);
	r0 &= 0x4u;  /* 0C064C84 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C064C86 tst Rm,Rn */
	{ u32 c_ = T; r0 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C064C98u, 5); goto L_0C064C98; } goto L_0C064C8C; }  /* 0C064C88 bt/s */
L_0C064C8C: BLKS(0x0C064C8Cu);
	r6 = R32(r14 + 0x10u); UPD(0x0C064C8Eu, 2);  /* 0C064C8C mov.l @(disp,Rm),Rn */
	r7 = 0xFFFu; UPD(0x0C064C90u, 1);  /* 0C064C8E mov.w @(disp,pc),Rn */
	r6 += 0x20u;  /* 0C064C90 add #imm,Rn */
	r6 &= r7;  /* 0C064C92 and Rm,Rn */
	W32(r14 + 0x10u, r6); UPD(0x0C064C96u, 3);  /* 0C064C94 mov.l Rm,@(disp,Rn) */
	r0 = r2;  /* 0C064C96 mov Rm,Rn */
	UPD(0x0C064C98u, 1);
L_0C064C98: BLKS(0x0C064C98u);
	r0 &= 0x8u;  /* 0C064C98 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C064C9A tst Rm,Rn */
	{ u32 c_ = T; r2 = R32(r14 + 0x10u); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C064CA8u, 5); goto L_0C064CA8; } UPD(0x0C064CA0u, 1); goto L_0C064CA0; }  /* 0C064C9C bt/s */
L_0C064CA0: BLKS(0x0C064CA0u);
	r12 = 0xFFFu; UPD(0x0C064CA2u, 1);  /* 0C064CA0 mov.w @(disp,pc),Rn */
	r2 += 0xFFFFFFE0u;  /* 0C064CA2 add #imm,Rn */
	r2 &= r12;  /* 0C064CA4 and Rm,Rn */
	W32(r14 + 0x10u, r2); UPD(0x0C064CA8u, 3);  /* 0C064CA6 mov.l Rm,@(disp,Rn) */
L_0C064CA8: BLKS(0x0C064CA8u);
	r9 = 0xC1730FCu; UPD(0x0C064CAAu, 1);  /* 0C064CA8 mov.l @(disp,pc),Rn */
	r6 = 0x3u;  /* 0C064CAA mov #imm,Rn */
	r0 = R32(r14 + 0x1Cu); UPD(0x0C064CAEu, 2);  /* 0C064CAC mov.l @(disp,Rm),Rn */
	IF(0x0C064CAEu); r5 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C064CB0u, 1);  /* 0C064CAE mov.b @(r0,Rm),Rn */
	r9 = 0xC0626E0u; UPD(0x0C064CB2u, 1);  /* 0C064CB0 mov.l @(disp,pc),Rn */
	r13 = 0x4040C000u; UPD(0x0C064CB4u, 1);  /* 0C064CB2 mov.l @(disp,pc),Rn */
	r4 = 0xC172BC8u; UPD(0x0C064CB6u, 1);  /* 0C064CB4 mov.l @(disp,pc),Rn */
	IF(0x0C064CB6u); { u32 t_ = r9; PR = 0x0C064CBAu; r7 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C064CBAu); }  /* 0C064CB6 jsr @Rn */
L_0C064CBA: BLKS(0x0C064CBAu);
	r0 = 0x1u;  /* 0C064CBA mov #imm,Rn */
	IF(0x0C064CBCu); r4 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C064CBEu, 2);  /* 0C064CBC mov.b @(r0,Rm),Rn */
	r5 = 0x1Bu;  /* 0C064CBE mov #imm,Rn */
	r0 = 0x2u;  /* 0C064CC0 mov #imm,Rn */
	IF(0x0C064CC2u); r7 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C064CC4u, 3);  /* 0C064CC2 mov.b @(r0,Rm),Rn */
	r6 = 0x1Au;  /* 0C064CC4 mov #imm,Rn */
	r0 = 0x3u;  /* 0C064CC6 mov #imm,Rn */
	IF(0x0C064CC8u); r8 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C064CCAu, 3);  /* 0C064CC8 mov.b @(r0,Rm),Rn */
	IF(0x0C064CCAu); ARG0(0x446Du); { s32 s_ = (s32)r6; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = 0; else r4 >>= ((~s_ & 31) + 1); }  /* 0C064CCA shld Rm,Rn */
	r11 = (u32)(s32)(s8)R8(r14); UPD(0x0C064CCEu, 2);  /* 0C064CCC mov.b @Rm,Rn */
	r0 = 0x4u;  /* 0C064CCE mov #imm,Rn */
	IF(0x0C064CD0u); r3 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C064CD2u, 2);  /* 0C064CD0 mov.b @(r0,Rm),Rn */
	IF(0x0C064CD2u); ARG0(0x4B5Du); { s32 s_ = (s32)r5; if (s_ >= 0) r11 <<= (s_ & 31); else if ((s_ & 31) == 0) r11 = 0; else r11 >>= ((~s_ & 31) + 1); }  /* 0C064CD2 shld Rm,Rn */
	r2 = 0x19u;  /* 0C064CD4 mov #imm,Rn */
	IF(0x0C064CD6u); ARG0(0x472Du); { s32 s_ = (s32)r2; if (s_ >= 0) r7 <<= (s_ & 31); else if ((s_ & 31) == 0) r7 = 0; else r7 >>= ((~s_ & 31) + 1); }  /* 0C064CD6 shld Rm,Rn */
	r1 = 0x18u;  /* 0C064CD8 mov #imm,Rn */
	r0 = r3 & 0xFF;  /* 0C064CDA extu.b Rm,Rn */
	IF(0x0C064CDCu); ARG0(0x481Du); { s32 s_ = (s32)r1; if (s_ >= 0) r8 <<= (s_ & 31); else if ((s_ & 31) == 0) r8 = 0; else r8 >>= ((~s_ & 31) + 1); }  /* 0C064CDC shld Rm,Rn */
	r11 |= r4;  /* 0C064CDE or Rm,Rn */
	IF(0x0C064CE0u); r0 <<= 16;  /* 0C064CE0 shll16 Rn */
	r11 |= r7;  /* 0C064CE2 or Rm,Rn */
	IF(0x0C064CE4u); r0 <<= 2;  /* 0C064CE4 shll2 Rn */
	r11 |= r8;  /* 0C064CE6 or Rm,Rn */
	IF(0x0C064CE8u); r0 <<= 2;  /* 0C064CE8 shll2 Rn */
	r11 |= r0;  /* 0C064CEA or Rm,Rn */
	r0 = 0x5u;  /* 0C064CEC mov #imm,Rn */
	IF(0x0C064CEEu); r10 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C064CF0u, 15);  /* 0C064CEE mov.b @(r0,Rm),Rn */
	r0 = 0x6u;  /* 0C064CF0 mov #imm,Rn */
	IF(0x0C064CF2u); r5 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C064CF4u, 2);  /* 0C064CF2 mov.b @(r0,Rm),Rn */
	r12 = r10 & 0xFF;  /* 0C064CF4 extu.b Rm,Rn */
	r0 = 0x7u;  /* 0C064CF6 mov #imm,Rn */
	IF(0x0C064CF8u); r4 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C064CFAu, 3);  /* 0C064CF8 mov.b @(r0,Rm),Rn */
	IF(0x0C064CFAu); r12 <<= 16;  /* 0C064CFA shll16 Rn */
	r0 = 0x8u;  /* 0C064CFC mov #imm,Rn */
	IF(0x0C064CFEu); r1 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C064D00u, 3);  /* 0C064CFE mov.b @(r0,Rm),Rn */
	r11 |= r12;  /* 0C064D00 or Rm,Rn */
	r0 = 0x9u;  /* 0C064D02 mov #imm,Rn */
	IF(0x0C064D04u); r8 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C064D06u, 3);  /* 0C064D04 mov.b @(r0,Rm),Rn */
	r10 = r1 & 0xFF;  /* 0C064D06 extu.b Rm,Rn */
	r0 = 0xAu;  /* 0C064D08 mov #imm,Rn */
	IF(0x0C064D0Au); r3 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C064D0Cu, 3);  /* 0C064D0A mov.b @(r0,Rm),Rn */
	r7 = r8 & 0xFF;  /* 0C064D0C extu.b Rm,Rn */
	IF(0x0C064D0Eu); r7 <<= 8;  /* 0C064D0E shll8 Rn */
	IF(0x0C064D10u); r10 <<= 16;  /* 0C064D10 shll16 Rn */
	r0 = r3 & 0xFF;  /* 0C064D12 extu.b Rm,Rn */
	r6 = r5 & 0xFF;  /* 0C064D14 extu.b Rm,Rn */
	r10 |= r7;  /* 0C064D16 or Rm,Rn */
	r12 = 0xC29D71Cu; UPD(0x0C064D1Au, 7);  /* 0C064D18 mov.l @(disp,pc),Rn */
	r10 |= r0;  /* 0C064D1A or Rm,Rn */
	IF(0x0C064D1Cu); r6 <<= 8;  /* 0C064D1C shll8 Rn */
	W32(r12, r10); UPD(0x0C064D20u, 3);  /* 0C064D1E mov.l Rm,@Rn */
	r2 = r4 & 0xFF;  /* 0C064D20 extu.b Rm,Rn */
	r5 = 0x10000000u; UPD(0x0C064D24u, 2);  /* 0C064D22 mov.l @(disp,pc),Rn */
	r11 |= r6;  /* 0C064D24 or Rm,Rn */
	r4 = 0xC2289D8u; UPD(0x0C064D28u, 2);  /* 0C064D26 mov.l @(disp,pc),Rn */
	r11 |= r2;  /* 0C064D28 or Rm,Rn */
	r11 |= r5;  /* 0C064D2A or Rm,Rn */
	r12 = 0xC3C415Cu; UPD(0x0C064D2Eu, 3);  /* 0C064D2C mov.l @(disp,pc),Rn */
	W32(r4, r11); UPD(0x0C064D30u, 1);  /* 0C064D2E mov.l Rm,@Rn */
	r0 = R32(r12); UPD(0x0C064D32u, 1);  /* 0C064D30 mov.l @Rm,Rn */
	r11 = R32(r14 + 0x14u); UPD(0x0C064D34u, 1);  /* 0C064D32 mov.l @(disp,Rm),Rn */
	W32(r0, r5); UPD(0x0C064D36u, 1);  /* 0C064D34 mov.l Rm,@Rn */
	IF(0x0C064D36u); r11 <<= 16;  /* 0C064D36 shll16 Rn */
	r6 = R32(r14 + 0x18u); UPD(0x0C064D3Au, 2);  /* 0C064D38 mov.l @(disp,Rm),Rn */
	r0 += 0x4u;  /* 0C064D3A add #imm,Rn */
	r11 |= r6;  /* 0C064D3C or Rm,Rn */
	W32(r0, r11); UPD(0x0C064D40u, 3);  /* 0C064D3E mov.l Rm,@Rn */
	r5 = 0xC232314u; UPD(0x0C064D42u, 1);  /* 0C064D40 mov.l @(disp,pc),Rn */
	r0 += 0x4u;  /* 0C064D42 add #imm,Rn */
	r6 = 0xC29D72Cu; UPD(0x0C064D46u, 2);  /* 0C064D44 mov.l @(disp,pc),Rn */
	r1 = R32(r5); UPD(0x0C064D48u, 1);  /* 0C064D46 mov.l @Rm,Rn */
	r8 = R32(r6); UPD(0x0C064D4Au, 1);  /* 0C064D48 mov.l @Rm,Rn */
	r1 += 0x1Cu;  /* 0C064D4A add #imm,Rn */
	r11 = 0xFFFFu; UPD(0x0C064D4Eu, 2);  /* 0C064D4C mov.l @(disp,pc),Rn */
	r8 += 0x34u;  /* 0C064D4E add #imm,Rn */
	r8 &= r11;  /* 0C064D50 and Rm,Rn */
	r7 = 0xFFE00000u; UPD(0x0C064D54u, 3);  /* 0C064D52 mov.l @(disp,pc),Rn */
	IF(0x0C064D54u); r1 <<= 16;  /* 0C064D54 shll16 Rn */
	r1 += r8;  /* 0C064D56 add Rm,Rn */
	r1 += r7;  /* 0C064D58 add Rm,Rn */
	W32(r0, r1); UPD(0x0C064D5Cu, 4);  /* 0C064D5A mov.l Rm,@Rn */
	r1 = 0xFF00C3u; UPD(0x0C064D5Eu, 1);  /* 0C064D5C mov.l @(disp,pc),Rn */
	r0 += 0x4u;  /* 0C064D5E add #imm,Rn */
	W32(r0, r1); UPD(0x0C064D62u, 2);  /* 0C064D60 mov.l Rm,@Rn */
	r3 = 0x808080u; UPD(0x0C064D64u, 1);  /* 0C064D62 mov.l @(disp,pc),Rn */
	r0 += 0x4u;  /* 0C064D64 add #imm,Rn */
	W32(r0, r3); UPD(0x0C064D68u, 2);  /* 0C064D66 mov.l Rm,@Rn */
	r10 = R32(r4); UPD(0x0C064D6Au, 1);  /* 0C064D68 mov.l @Rm,Rn */
	r0 += 0x4u;  /* 0C064D6A add #imm,Rn */
	r8 = R32(r14 + 0xCu); UPD(0x0C064D6Eu, 2);  /* 0C064D6C mov.l @(disp,Rm),Rn */
	r4 = 0x1FFFu; UPD(0x0C064D70u, 1);  /* 0C064D6E mov.w @(disp,pc),Rn */
	r2 = R32(r14 + 0x10u); UPD(0x0C064D72u, 1);  /* 0C064D70 mov.l @(disp,Rm),Rn */
	r4 &= r8;  /* 0C064D72 and Rm,Rn */
	r7 = 0xFFFu; UPD(0x0C064D76u, 2);  /* 0C064D74 mov.w @(disp,pc),Rn */
	IF(0x0C064D76u); r4 <<= 16;  /* 0C064D76 shll16 Rn */
	W32(r0, r10); UPD(0x0C064D7Au, 2);  /* 0C064D78 mov.l Rm,@Rn */
	r7 &= r2;  /* 0C064D7A and Rm,Rn */
	r4 += r7;  /* 0C064D7C add Rm,Rn */
	r0 += 0x4u;  /* 0C064D7E add #imm,Rn */
	W32(r0, r4); UPD(0x0C064D82u, 4);  /* 0C064D80 mov.l Rm,@Rn */
	r10 = R32(r5); UPD(0x0C064D84u, 1);  /* 0C064D82 mov.l @Rm,Rn */
	r0 += 0x4u;  /* 0C064D84 add #imm,Rn */
	r3 = R32(r6); UPD(0x0C064D88u, 2);  /* 0C064D86 mov.l @Rm,Rn */
	r10 += 0x1Cu;  /* 0C064D88 add #imm,Rn */
	r3 += 0x14u;  /* 0C064D8A add #imm,Rn */
	r3 &= r11;  /* 0C064D8C and Rm,Rn */
	IF(0x0C064D8Eu); r10 <<= 16;  /* 0C064D8E shll16 Rn */
	r10 += r3;  /* 0C064D90 add Rm,Rn */
	W32(r0, r10); UPD(0x0C064D94u, 6);  /* 0C064D92 mov.l Rm,@Rn */
	r5 = 0x14u;  /* 0C064D94 mov #imm,Rn */
	r0 += 0x4u;  /* 0C064D96 add #imm,Rn */
	W32(r0, r1); UPD(0x0C064D9Au, 3);  /* 0C064D98 mov.l Rm,@Rn */
	r6 = 0x4u;  /* 0C064D9A mov #imm,Rn */
	r8 = 0xC29D71Cu; UPD(0x0C064D9Eu, 2);  /* 0C064D9C mov.l @(disp,pc),Rn */
	r0 += 0x4u;  /* 0C064D9E add #imm,Rn */
	r7 = R32(r8); UPD(0x0C064DA2u, 2);  /* 0C064DA0 mov.l @Rm,Rn */
	W32(r0, r7); UPD(0x0C064DA4u, 1);  /* 0C064DA2 mov.l Rm,@Rn */
	r0 += 0x4u;  /* 0C064DA4 add #imm,Rn */
	W32(r12, r0); UPD(0x0C064DA8u, 2);  /* 0C064DA6 mov.l Rm,@Rn */
	r11 = 0xC173120u; UPD(0x0C064DAAu, 1);  /* 0C064DA8 mov.l @(disp,pc),Rn */
	r12 = 0xC0404000u; UPD(0x0C064DACu, 1);  /* 0C064DAA mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C064DAC mov Rm,Rn */
	r10 = 0xC173128u; UPD(0x0C064DB0u, 2);  /* 0C064DAE mov.l @(disp,pc),Rn */
	r8 = 0xC0623C0u; UPD(0x0C064DB2u, 1);  /* 0C064DB0 mov.l @(disp,pc),Rn */
	IF(0x0C064DB2u); { u32 t_ = r9; PR = 0x0C064DB6u; r7 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C064DB6u); }  /* 0C064DB2 jsr @Rn */
L_0C064DB6: BLKS(0x0C064DB6u);
	r7 = r12;  /* 0C064DB6 mov Rm,Rn */
	r4 = r10;  /* 0C064DB8 mov Rm,Rn */
	r5 = 0x12u;  /* 0C064DBA mov #imm,Rn */
	IF(0x0C064DBCu); { u32 t_ = r9; PR = 0x0C064DC0u; r6 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 5); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C064DC0u); }  /* 0C064DBC jsr @Rn */
L_0C064DC0: BLKS(0x0C064DC0u);
	r4 = R32(r14 + 0xCu); UPD(0x0C064DC2u, 1);  /* 0C064DC0 mov.l @(disp,Rm),Rn */
	r5 = 0x13u;  /* 0C064DC2 mov #imm,Rn */
	IF(0x0C064DC4u); { u32 t_ = r8; PR = 0x0C064DC8u; r6 = 0x7u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0623C0, 0x0C0623C0u, 0x0C064DC8u); }  /* 0C064DC4 jsr @Rn */
L_0C064DC8: BLKS(0x0C064DC8u);
	r4 = R32(r14 + 0x10u); UPD(0x0C064DCAu, 1);  /* 0C064DC8 mov.l @(disp,Rm),Rn */
	r5 = 0x11u;  /* 0C064DCA mov #imm,Rn */
	IF(0x0C064DCCu); { u32 t_ = r8; PR = 0x0C064DD0u; r6 = 0x7u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0623C0, 0x0C0623C0u, 0x0C064DD0u); }  /* 0C064DCC jsr @Rn */
L_0C064DD0: BLKS(0x0C064DD0u);
	r4 = r11;  /* 0C064DD0 mov Rm,Rn */
	r7 = r13;  /* 0C064DD2 mov Rm,Rn */
	r5 = 0x14u;  /* 0C064DD4 mov #imm,Rn */
	IF(0x0C064DD6u); { u32 t_ = r9; PR = 0x0C064DDAu; r6 = 0x14u; /* slot mov #imm,Rn */ UPD(t_, 5); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C064DDAu); }  /* 0C064DD6 jsr @Rn */
L_0C064DDA: BLKS(0x0C064DDAu);
	r7 = r13;  /* 0C064DDA mov Rm,Rn */
	r4 = r10;  /* 0C064DDC mov Rm,Rn */
	r5 = 0x12u;  /* 0C064DDE mov #imm,Rn */
	IF(0x0C064DE0u); { u32 t_ = r9; PR = 0x0C064DE4u; r6 = 0x14u; /* slot mov #imm,Rn */ UPD(t_, 5); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C064DE4u); }  /* 0C064DE0 jsr @Rn */
L_0C064DE4: BLKS(0x0C064DE4u);
	r4 = R32(r14 + 0x14u); UPD(0x0C064DE6u, 1);  /* 0C064DE4 mov.l @(disp,Rm),Rn */
	r5 = 0x13u;  /* 0C064DE6 mov #imm,Rn */
	IF(0x0C064DE8u); { u32 t_ = r8; PR = 0x0C064DECu; r6 = 0x18u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0623C0, 0x0C0623C0u, 0x0C064DECu); }  /* 0C064DE8 jsr @Rn */
L_0C064DEC: BLKS(0x0C064DECu);
	r4 = R32(r14 + 0x18u); UPD(0x0C064DEEu, 1);  /* 0C064DEC mov.l @(disp,Rm),Rn */
	r5 = 0x11u;  /* 0C064DEE mov #imm,Rn */
	r11 = 0x80808000u; UPD(0x0C064DF2u, 2);  /* 0C064DF0 mov.l @(disp,pc),Rn */
	IF(0x0C064DF2u); { u32 t_ = r8; PR = 0x0C064DF6u; r6 = 0x18u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0623C0, 0x0C0623C0u, 0x0C064DF6u); }  /* 0C064DF2 jsr @Rn */
L_0C064DF6: BLKS(0x0C064DF6u);
	r4 = 0xC173140u; UPD(0x0C064DF8u, 1);  /* 0C064DF6 mov.l @(disp,pc),Rn */
	r7 = r11;  /* 0C064DF8 mov Rm,Rn */
	r5 = 0xFu;  /* 0C064DFA mov #imm,Rn */
	IF(0x0C064DFCu); { u32 t_ = r9; PR = 0x0C064E00u; r6 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C064E00u); }  /* 0C064DFC jsr @Rn */
L_0C064E00: BLKS(0x0C064E00u);
	r4 = 0xC173144u; UPD(0x0C064E02u, 1);  /* 0C064E00 mov.l @(disp,pc),Rn */
	r7 = r11;  /* 0C064E02 mov Rm,Rn */
	r5 = 0xEu;  /* 0C064E04 mov #imm,Rn */
	IF(0x0C064E06u); { u32 t_ = r9; PR = 0x0C064E0Au; r6 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C064E0Au); }  /* 0C064E06 jsr @Rn */
L_0C064E0A: BLKS(0x0C064E0Au);
	r4 = 0xC173148u; UPD(0x0C064E0Cu, 1);  /* 0C064E0A mov.l @(disp,pc),Rn */
	r7 = r11;  /* 0C064E0C mov Rm,Rn */
	r5 = 0xDu;  /* 0C064E0E mov #imm,Rn */
	IF(0x0C064E10u); { u32 t_ = r9; PR = 0x0C064E14u; r6 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C064E14u); }  /* 0C064E10 jsr @Rn */
L_0C064E14: BLKS(0x0C064E14u);
	r4 = 0xC17314Cu; UPD(0x0C064E16u, 1);  /* 0C064E14 mov.l @(disp,pc),Rn */
	r7 = r11;  /* 0C064E16 mov Rm,Rn */
	r5 = 0xCu;  /* 0C064E18 mov #imm,Rn */
	IF(0x0C064E1Au); { u32 t_ = r9; PR = 0x0C064E1Eu; r6 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C064E1Eu); }  /* 0C064E1A jsr @Rn */
L_0C064E1E: BLKS(0x0C064E1Eu);
	r4 = 0xC173150u; UPD(0x0C064E20u, 1);  /* 0C064E1E mov.l @(disp,pc),Rn */
	r7 = r11;  /* 0C064E20 mov Rm,Rn */
	r5 = 0xBu;  /* 0C064E22 mov #imm,Rn */
	IF(0x0C064E24u); { u32 t_ = r9; PR = 0x0C064E28u; r6 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C064E28u); }  /* 0C064E24 jsr @Rn */
L_0C064E28: BLKS(0x0C064E28u);
	r4 = 0xC173154u; UPD(0x0C064E2Au, 1);  /* 0C064E28 mov.l @(disp,pc),Rn */
	r7 = r11;  /* 0C064E2A mov Rm,Rn */
	{ r5 = 0xAu; /* slot mov #imm,Rn */ UPD(0x0C064EF0u, 4); goto L_0C064EF0; }  /* 0C064E2C bra */
L_0C064EF0: BLKS(0x0C064EF0u);
	IF(0x0C064EF0u); { u32 t_ = r9; PR = 0x0C064EF4u; r6 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C064EF4u); }  /* 0C064EF0 jsr @Rn */
L_0C064EF4: BLKS(0x0C064EF4u);
	r4 = 0xC173158u; UPD(0x0C064EF6u, 1);  /* 0C064EF4 mov.l @(disp,pc),Rn */
	r7 = r11;  /* 0C064EF6 mov Rm,Rn */
	r5 = 0x9u;  /* 0C064EF8 mov #imm,Rn */
	IF(0x0C064EFAu); { u32 t_ = r9; PR = 0x0C064EFEu; r6 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C064EFEu); }  /* 0C064EFA jsr @Rn */
L_0C064EFE: BLKS(0x0C064EFEu);
	r4 = 0xC17315Cu; UPD(0x0C064F00u, 1);  /* 0C064EFE mov.l @(disp,pc),Rn */
	r7 = r11;  /* 0C064F00 mov Rm,Rn */
	r5 = 0x8u;  /* 0C064F02 mov #imm,Rn */
	IF(0x0C064F04u); { u32 t_ = r9; PR = 0x0C064F08u; r6 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C064F08u); }  /* 0C064F04 jsr @Rn */
L_0C064F08: BLKS(0x0C064F08u);
	r7 = r12;  /* 0C064F08 mov Rm,Rn */
	r4 = 0xC1731A0u; UPD(0x0C064F0Cu, 2);  /* 0C064F0A mov.l @(disp,pc),Rn */
	r5 = 0x7u;  /* 0C064F0C mov #imm,Rn */
	IF(0x0C064F0Eu); { u32 t_ = r9; PR = 0x0C064F12u; r6 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C064F12u); }  /* 0C064F0E jsr @Rn */
L_0C064F12: BLKS(0x0C064F12u);
	r7 = 0x40C04000u; UPD(0x0C064F14u, 1);  /* 0C064F12 mov.l @(disp,pc),Rn */
	r5 = 0x6u;  /* 0C064F14 mov #imm,Rn */
	r4 = 0xC1731A4u; UPD(0x0C064F18u, 2);  /* 0C064F16 mov.l @(disp,pc),Rn */
	IF(0x0C064F18u); { u32 t_ = r9; PR = 0x0C064F1Cu; r6 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C064F1Cu); }  /* 0C064F18 jsr @Rn */
L_0C064F1C: BLKS(0x0C064F1Cu);
	r7 = r13;  /* 0C064F1C mov Rm,Rn */
	r13 = 0xC062F50u; UPD(0x0C064F20u, 2);  /* 0C064F1E mov.l @(disp,pc),Rn */
	r5 = 0x5u;  /* 0C064F20 mov #imm,Rn */
	r4 = 0xC1731ACu; UPD(0x0C064F24u, 2);  /* 0C064F22 mov.l @(disp,pc),Rn */
	IF(0x0C064F24u); { u32 t_ = r9; PR = 0x0C064F28u; r6 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C064F28u); }  /* 0C064F24 jsr @Rn */
L_0C064F28: BLKS(0x0C064F28u);
	r4 = (u32)(s32)(s8)R8(r14); UPD(0x0C064F2Au, 1);  /* 0C064F28 mov.b @Rm,Rn */
	r5 = 0xFu;  /* 0C064F2A mov #imm,Rn */
	IF(0x0C064F2Cu); { u32 t_ = r13; PR = 0x0C064F30u; r6 = 0x9u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C062F50, 0x0C062F50u, 0x0C064F30u); }  /* 0C064F2C jsr @Rn */
L_0C064F30: BLKS(0x0C064F30u);
	r0 = 0x1u;  /* 0C064F30 mov #imm,Rn */
	IF(0x0C064F32u); r4 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C064F34u, 2);  /* 0C064F32 mov.b @(r0,Rm),Rn */
	r5 = 0xEu;  /* 0C064F34 mov #imm,Rn */
	IF(0x0C064F36u); { u32 t_ = r13; PR = 0x0C064F3Au; r6 = 0x9u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C062F50, 0x0C062F50u, 0x0C064F3Au); }  /* 0C064F36 jsr @Rn */
L_0C064F3A: BLKS(0x0C064F3Au);
	r0 = 0x2u;  /* 0C064F3A mov #imm,Rn */
	IF(0x0C064F3Cu); r4 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C064F3Eu, 2);  /* 0C064F3C mov.b @(r0,Rm),Rn */
	r5 = 0xDu;  /* 0C064F3E mov #imm,Rn */
	IF(0x0C064F40u); { u32 t_ = r13; PR = 0x0C064F44u; r6 = 0x9u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C062F50, 0x0C062F50u, 0x0C064F44u); }  /* 0C064F40 jsr @Rn */
L_0C064F44: BLKS(0x0C064F44u);
	r0 = 0x3u;  /* 0C064F44 mov #imm,Rn */
	IF(0x0C064F46u); r4 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C064F48u, 2);  /* 0C064F46 mov.b @(r0,Rm),Rn */
	r5 = 0xCu;  /* 0C064F48 mov #imm,Rn */
	IF(0x0C064F4Au); { u32 t_ = r13; PR = 0x0C064F4Eu; r6 = 0x9u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C062F50, 0x0C062F50u, 0x0C064F4Eu); }  /* 0C064F4A jsr @Rn */
L_0C064F4E: BLKS(0x0C064F4Eu);
	r0 = 0x4u;  /* 0C064F4E mov #imm,Rn */
	IF(0x0C064F50u); r6 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C064F52u, 2);  /* 0C064F50 mov.b @(r0,Rm),Rn */
	r5 = 0xBu;  /* 0C064F52 mov #imm,Rn */
	r10 = r6 & 0xFF;  /* 0C064F54 extu.b Rm,Rn */
	r12 = 0xC1731B4u; UPD(0x0C064F58u, 3);  /* 0C064F56 mov.l @(disp,pc),Rn */
	IF(0x0C064F58u); r10 <<= 2;  /* 0C064F58 shll2 Rn */
	r10 += r10;  /* 0C064F5A add Rm,Rn */
	r10 += r12;  /* 0C064F5C add Rm,Rn */
	r4 = R32(r10); UPD(0x0C064F60u, 4);  /* 0C064F5E mov.l @Rm,Rn */
	r6 = 0x8u;  /* 0C064F60 mov #imm,Rn */
	IF(0x0C064F62u); { u32 t_ = r9; PR = 0x0C064F66u; r7 = R32(r10 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C064F66u); }  /* 0C064F62 jsr @Rn */
L_0C064F66: BLKS(0x0C064F66u);
	r0 = 0x5u;  /* 0C064F66 mov #imm,Rn */
	IF(0x0C064F68u); r4 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C064F6Au, 2);  /* 0C064F68 mov.b @(r0,Rm),Rn */
	r5 = 0xAu;  /* 0C064F6A mov #imm,Rn */
	r0 = r4 & 0xFF;  /* 0C064F6C extu.b Rm,Rn */
	IF(0x0C064F6Eu); r0 <<= 2;  /* 0C064F6E shll2 Rn */
	r0 += r0;  /* 0C064F70 add Rm,Rn */
	r0 += r12;  /* 0C064F72 add Rm,Rn */
	r7 = R32(r0 + 0x4u); UPD(0x0C064F76u, 6);  /* 0C064F74 mov.l @(disp,Rm),Rn */
	r6 = 0x8u;  /* 0C064F76 mov #imm,Rn */
	IF(0x0C064F78u); { u32 t_ = r9; PR = 0x0C064F7Cu; r4 = R32(r0); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0626E0, 0x0C0626E0u, 0x0C064F7Cu); }  /* 0C064F78 jsr @Rn */
L_0C064F7C: BLKS(0x0C064F7Cu);
	r0 = 0x6u;  /* 0C064F7C mov #imm,Rn */
	r11 = 0xC062490u; UPD(0x0C064F80u, 2);  /* 0C064F7E mov.l @(disp,pc),Rn */
	r6 = 0x9u;  /* 0C064F80 mov #imm,Rn */
	IF(0x0C064F82u); r5 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C064F84u, 2);  /* 0C064F82 mov.b @(r0,Rm),Rn */
	r4 = r5 & 0xFF;  /* 0C064F84 extu.b Rm,Rn */
	IF(0x0C064F86u); { u32 t_ = r11; PR = 0x0C064F8Au; r5 = 0x9u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C062490, 0x0C062490u, 0x0C064F8Au); }  /* 0C064F86 jsr @Rn */
L_0C064F8A: BLKS(0x0C064F8Au);
	r0 = 0x7u;  /* 0C064F8A mov #imm,Rn */
	IF(0x0C064F8Cu); r2 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C064F8Eu, 2);  /* 0C064F8C mov.b @(r0,Rm),Rn */
	r5 = 0x8u;  /* 0C064F8E mov #imm,Rn */
	r4 = r2 & 0xFF;  /* 0C064F90 extu.b Rm,Rn */
	IF(0x0C064F92u); { u32 t_ = r11; PR = 0x0C064F96u; r6 = 0x9u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C062490, 0x0C062490u, 0x0C064F96u); }  /* 0C064F92 jsr @Rn */
L_0C064F96: BLKS(0x0C064F96u);
	r0 = 0x8u;  /* 0C064F96 mov #imm,Rn */
	IF(0x0C064F98u); r3 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C064F9Au, 2);  /* 0C064F98 mov.b @(r0,Rm),Rn */
	r5 = 0x7u;  /* 0C064F9A mov #imm,Rn */
	r4 = r3 & 0xFF;  /* 0C064F9C extu.b Rm,Rn */
	IF(0x0C064F9Eu); { u32 t_ = r11; PR = 0x0C064FA2u; r6 = 0x9u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C062490, 0x0C062490u, 0x0C064FA2u); }  /* 0C064F9E jsr @Rn */
L_0C064FA2: BLKS(0x0C064FA2u);
	r0 = 0x9u;  /* 0C064FA2 mov #imm,Rn */
	IF(0x0C064FA4u); r1 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C064FA6u, 2);  /* 0C064FA4 mov.b @(r0,Rm),Rn */
	r5 = 0x6u;  /* 0C064FA6 mov #imm,Rn */
	r4 = r1 & 0xFF;  /* 0C064FA8 extu.b Rm,Rn */
	IF(0x0C064FAAu); { u32 t_ = r11; PR = 0x0C064FAEu; r6 = 0x9u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C062490, 0x0C062490u, 0x0C064FAEu); }  /* 0C064FAA jsr @Rn */
L_0C064FAE: BLKS(0x0C064FAEu);
	r0 = 0xAu;  /* 0C064FAE mov #imm,Rn */
	IF(0x0C064FB0u); r8 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C064FB2u, 2);  /* 0C064FB0 mov.b @(r0,Rm),Rn */
	r5 = 0x5u;  /* 0C064FB2 mov #imm,Rn */
	r9 = 0xC062300u; UPD(0x0C064FB6u, 2);  /* 0C064FB4 mov.l @(disp,pc),Rn */
	r4 = r8 & 0xFF;  /* 0C064FB6 extu.b Rm,Rn */
	r13 = 0xC2289D8u; UPD(0x0C064FBAu, 2);  /* 0C064FB8 mov.l @(disp,pc),Rn */
	IF(0x0C064FBAu); { u32 t_ = r11; PR = 0x0C064FBEu; r6 = 0x9u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062490, 0x0C062490u, 0x0C064FBEu); }  /* 0C064FBA jsr @Rn */
L_0C064FBE: BLKS(0x0C064FBEu);
	r4 = R32(r13); UPD(0x0C064FC0u, 1);  /* 0C064FBE mov.l @Rm,Rn */
	r5 = 0x7u;  /* 0C064FC0 mov #imm,Rn */
	IF(0x0C064FC2u); { u32 t_ = r9; PR = 0x0C064FC6u; r6 = 0xCu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C062300, 0x0C062300u, 0x0C064FC6u); }  /* 0C064FC2 jsr @Rn */
L_0C064FC6: BLKS(0x0C064FC6u);
	r7 = 0xC29D71Cu; UPD(0x0C064FC8u, 1);  /* 0C064FC6 mov.l @(disp,pc),Rn */
	r6 = 0xCu;  /* 0C064FC8 mov #imm,Rn */
	r10 = 0xC061010u; UPD(0x0C064FCCu, 2);  /* 0C064FCA mov.l @(disp,pc),Rn */
	r5 = 0x6u;  /* 0C064FCC mov #imm,Rn */
	IF(0x0C064FCEu); { u32 t_ = r9; PR = 0x0C064FD2u; r4 = R32(r7); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C062300, 0x0C062300u, 0x0C064FD2u); }  /* 0C064FCE jsr @Rn */
L_0C064FD2: BLKS(0x0C064FD2u);
	r12 = 0xC062250u; UPD(0x0C064FD4u, 1);  /* 0C064FD2 mov.l @(disp,pc),Rn */
	r5 = 0x7u;  /* 0C064FD4 mov #imm,Rn */
	IF(0x0C064FD6u); { u32 t_ = r10; PR = 0x0C064FDAu; r4 = 0x7u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C061010, 0x0C061010u, 0x0C064FDAu); }  /* 0C064FD6 jsr @Rn */
L_0C064FDA: BLKS(0x0C064FDAu);
	IF(0x0C064FDAu); { u32 t_ = r12; PR = 0x0C064FDEu; IF(0x0C064FDCu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C062250, 0x0C062250u, 0x0C064FDEu); }  /* 0C064FDA jsr @Rn */
L_0C064FDE: BLKS(0x0C064FDEu);
	r6 = 0xC2B03A6u; UPD(0x0C064FE0u, 1);  /* 0C064FDE mov.l @(disp,pc),Rn */
	r0 = 0x100u; UPD(0x0C064FE2u, 1);  /* 0C064FE0 mov.w @(disp,pc),Rn */
	r5 = (u32)(s32)(s16)R16(r6); UPD(0x0C064FE4u, 1);  /* 0C064FE2 mov.w @Rm,Rn */
	T = (r5 & r0) == 0;  /* 0C064FE4 tst Rm,Rn */
	if (!T) { UPD(0x0C064FECu, 4); goto L_0C064FEC; }  /* 0C064FE6 bf */
L_0C064FE8: BLKS(0x0C064FE8u);
	{ IF(0x0C064FEAu); ; /* slot nop */ UPD(0x0C064BE0u, 3); goto L_0C064BE0; }  /* 0C064FE8 bra */
L_0C064FEC: BLKS(0x0C064FECu);
	r14 += 0x20u;  /* 0C064FEC add #imm,Rn */
	r15 = r14;  /* 0C064FEE mov Rm,Rn */
	IF(0x0C064FF0u); PR = R32(r15); r15 += 4; UPD(0x0C064FF2u, 3);  /* 0C064FF0 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C064FF4u, 1);  /* 0C064FF2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C064FF6u, 1);  /* 0C064FF4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C064FF8u, 1);  /* 0C064FF6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C064FFAu, 1);  /* 0C064FF8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C064FFCu, 1);  /* 0C064FFA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C064FFEu, 1);  /* 0C064FFC mov.l @Rm+,Rn */
	IF(0x0C064FFEu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C064FFE rts */
L_0C065010: BLKS(0x0C065010u);
	T = (r0 & r0) == 0;  /* 0C065010 tst Rm,Rn */
	if (T) { UPD(0x0C065070u, 4); goto L_0C065070; }  /* 0C065012 bt */
L_0C065014: BLKS(0x0C065014u);
	r0 = 0x200u; UPD(0x0C065016u, 1);  /* 0C065014 mov.w @(disp,pc),Rn */
	IF(0x0C065016u); r2 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C065018u, 1);  /* 0C065016 mov.w @(r0,Rm),Rn */
	r0 = r2;  /* 0C065018 mov Rm,Rn */
	r0 &= 0x1u;  /* 0C06501A and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C06501C tst Rm,Rn */
	{ u32 c_ = T; r0 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C065032u, 6); goto L_0C065032; } goto L_0C065022; }  /* 0C06501E bt/s */
L_0C065022: BLKS(0x0C065022u);
	r13 = R32(r14 + 0x14u); UPD(0x0C065024u, 2);  /* 0C065022 mov.l @(disp,Rm),Rn */
	r13 += 0xFFFFFFE0u;  /* 0C065024 add #imm,Rn */
	W32(r14 + 0x14u, r13); UPD(0x0C065028u, 2);  /* 0C065026 mov.l Rm,@(disp,Rn) */
	r9 = 0x1FFFu; UPD(0x0C06502Au, 1);  /* 0C065028 mov.w @(disp,pc),Rn */
	r10 = R32(r14 + 0x14u); UPD(0x0C06502Cu, 1);  /* 0C06502A mov.l @(disp,Rm),Rn */
	r10 &= r9;  /* 0C06502C and Rm,Rn */
	W32(r14 + 0x14u, r10); UPD(0x0C065030u, 2);  /* 0C06502E mov.l Rm,@(disp,Rn) */
	r0 = r2;  /* 0C065030 mov Rm,Rn */
	UPD(0x0C065032u, 1);
L_0C065032: BLKS(0x0C065032u);
	r0 &= 0x2u;  /* 0C065032 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C065034 tst Rm,Rn */
	{ u32 c_ = T; r0 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C065046u, 5); goto L_0C065046; } goto L_0C06503A; }  /* 0C065036 bt/s */
L_0C06503A: BLKS(0x0C06503Au);
	r8 = R32(r14 + 0x14u); UPD(0x0C06503Cu, 2);  /* 0C06503A mov.l @(disp,Rm),Rn */
	r11 = 0x1FFFu; UPD(0x0C06503Eu, 1);  /* 0C06503C mov.w @(disp,pc),Rn */
	r8 += 0x20u;  /* 0C06503E add #imm,Rn */
	r8 &= r11;  /* 0C065040 and Rm,Rn */
	W32(r14 + 0x14u, r8); UPD(0x0C065044u, 3);  /* 0C065042 mov.l Rm,@(disp,Rn) */
	r0 = r2;  /* 0C065044 mov Rm,Rn */
	UPD(0x0C065046u, 1);
L_0C065046: BLKS(0x0C065046u);
	r0 &= 0x4u;  /* 0C065046 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C065048 tst Rm,Rn */
	{ u32 c_ = T; r0 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06505Au, 5); goto L_0C06505A; } goto L_0C06504E; }  /* 0C06504A bt/s */
L_0C06504E: BLKS(0x0C06504Eu);
	r0 = R32(r14 + 0x18u); UPD(0x0C065050u, 2);  /* 0C06504E mov.l @(disp,Rm),Rn */
	r3 = 0xFFFu; UPD(0x0C065052u, 1);  /* 0C065050 mov.w @(disp,pc),Rn */
	r0 += 0x20u;  /* 0C065052 add #imm,Rn */
	r0 &= r3;  /* 0C065054 and Rm,Rn */
	W32(r14 + 0x18u, r0); UPD(0x0C065058u, 3);  /* 0C065056 mov.l Rm,@(disp,Rn) */
	r0 = r2;  /* 0C065058 mov Rm,Rn */
	UPD(0x0C06505Au, 1);
L_0C06505A: BLKS(0x0C06505Au);
	r0 &= 0x8u;  /* 0C06505A and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C06505C tst Rm,Rn */
	if (T) { UPD(0x0C06506Au, 5); goto L_0C06506A; }  /* 0C06505E bt */
L_0C065060: BLKS(0x0C065060u);
	r4 = R32(r14 + 0x18u); UPD(0x0C065062u, 1);  /* 0C065060 mov.l @(disp,Rm),Rn */
	r5 = 0xFFFu; UPD(0x0C065064u, 1);  /* 0C065062 mov.w @(disp,pc),Rn */
	r4 += 0xFFFFFFE0u;  /* 0C065064 add #imm,Rn */
	r4 &= r5;  /* 0C065066 and Rm,Rn */
	W32(r14 + 0x18u, r4); UPD(0x0C06506Au, 3);  /* 0C065068 mov.l Rm,@(disp,Rn) */
L_0C06506A: BLKS(0x0C06506Au);
	{ IF(0x0C06506Cu); ; /* slot nop */ UPD(0x0C064CA8u, 3); goto L_0C064CA8; }  /* 0C06506A bra */
L_0C065070: BLKS(0x0C065070u);
	r0 = 0x100u; UPD(0x0C065072u, 1);  /* 0C065070 mov.w @(disp,pc),Rn */
	IF(0x0C065072u); r7 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C065074u, 1);  /* 0C065072 mov.w @(r0,Rm),Rn */
	r0 = r7;  /* 0C065074 mov Rm,Rn */
	r0 &= 0x1u;  /* 0C065076 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C065078 tst Rm,Rn */
	{ u32 c_ = T; r0 = r7; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06508Au, 6); goto L_0C06508A; } goto L_0C06507E; }  /* 0C06507A bt/s */
L_0C06507E: BLKS(0x0C06507Eu);
	r0 = R32(r14 + 0x1Cu); UPD(0x0C065080u, 2);  /* 0C06507E mov.l @(disp,Rm),Rn */
	r10 = 0xC173108u; UPD(0x0C065082u, 1);  /* 0C065080 mov.l @(disp,pc),Rn */
	IF(0x0C065082u); r12 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C065084u, 1);  /* 0C065082 mov.b @(r0,Rm),Rn */
	r6 = r12 & 0xFF;  /* 0C065084 extu.b Rm,Rn */
	W32(r14 + 0x1Cu, r6); UPD(0x0C065088u, 2);  /* 0C065086 mov.l Rm,@(disp,Rn) */
	r0 = r7;  /* 0C065088 mov Rm,Rn */
	UPD(0x0C06508Au, 1);
L_0C06508A: BLKS(0x0C06508Au);
	r0 &= 0x2u;  /* 0C06508A and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C06508C tst Rm,Rn */
	{ u32 c_ = T; r0 = R32(r14 + 0x1Cu); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C06509Au, 5); goto L_0C06509A; } UPD(0x0C065092u, 1); goto L_0C065092; }  /* 0C06508E bt/s */
L_0C065092: BLKS(0x0C065092u);
	r13 = 0xC173114u; UPD(0x0C065094u, 1);  /* 0C065092 mov.l @(disp,pc),Rn */
	IF(0x0C065094u); r9 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C065096u, 1);  /* 0C065094 mov.b @(r0,Rm),Rn */
	r7 = r9 & 0xFF;  /* 0C065096 extu.b Rm,Rn */
	W32(r14 + 0x1Cu, r7); UPD(0x0C06509Au, 2);  /* 0C065098 mov.l Rm,@(disp,Rn) */
L_0C06509A: BLKS(0x0C06509Au);
	r0 = 0x200u; UPD(0x0C06509Cu, 1);  /* 0C06509A mov.w @(disp,pc),Rn */
	IF(0x0C06509Cu); r0 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C06509Eu, 1);  /* 0C06509C mov.w @(r0,Rm),Rn */
	r0 &= 0x4u;  /* 0C06509E and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0650A0 tst Rm,Rn */
	{ u32 c_ = T; r0 = R32(r14 + 0x1Cu); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C065140u, 5); goto L_0C065140; } UPD(0x0C0650A6u, 1); goto L_0C0650A6; }  /* 0C0650A2 bt/s */
L_0C0650A6: BLKS(0x0C0650A6u);
	r11 = 0xC173160u; UPD(0x0C0650A8u, 1);  /* 0C0650A6 mov.l @(disp,pc),Rn */
	IF(0x0C0650A8u); r8 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C0650AAu, 1);  /* 0C0650A8 mov.b @(r0,Rm),Rn */
	IF(0x0C0650AAu); r1 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C0650ACu, 1);  /* 0C0650AA mov.b @(r0,Rm),Rn */
	r8 += 0xFFFFFFFFu;  /* 0C0650AC add #imm,Rn */
	r8 &= r1;  /* 0C0650AE and Rm,Rn */
	IF(0x0C0650B0u); W8(r0 + r14, r8); UPD(0x0C0650B2u, 3);  /* 0C0650B0 mov.b Rm,@(r0,Rn) */
	r0 = r3;  /* 0C0650B2 mov Rm,Rn */
	r0 &= 0x40u;  /* 0C0650B4 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0650B6 tst Rm,Rn */
	{ u32 c_ = T; r2 = R32(r14 + 0x1Cu); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C065140u, 6); goto L_0C065140; } UPD(0x0C0650BCu, 1); goto L_0C0650BC; }  /* 0C0650B8 bt/s */
L_0C0650BC: BLKS(0x0C0650BCu);
	r0 = 0x4u;  /* 0C0650BC mov #imm,Rn */
	r2 += 0xFFFFFFFAu;  /* 0C0650BE add #imm,Rn */
	T = r2 > r0;  /* 0C0650C0 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C065140u, 6); goto L_0C065140; }  /* 0C0650C2 bt */
L_0C0650C4: BLKS(0x0C0650C4u);
	r0 = 0xC065120u;  /* 0C0650C4 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C0650C6 add Rm,Rn */
	IF(0x0C0650C8u); r3 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C0650CAu, 3);  /* 0C0650C8 mov.w @(r0,Rm),Rn */
	IF(0x0C0650CAu); { u32 tv_ = (r3 + 0x0C0650CEu); u32 t_ = PHYS(tv_); IF(0x0C0650CCu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C065130u: goto L_0C065130; case 0x0C0651D0u: goto L_0C0651D0; default: JUMPD(tv_); } }  /* 0C0650CA braf Rn */
L_0C065130: BLKS(0x0C065130u);
	r0 = R32(r14 + 0x1Cu); UPD(0x0C065132u, 1);  /* 0C065130 mov.l @(disp,Rm),Rn */
	IF(0x0C065132u); r4 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C065134u, 1);  /* 0C065132 mov.b @(r0,Rm),Rn */
	r0 = 0x7u;  /* 0C065134 mov #imm,Rn */
	r2 = r4 & 0xFF;  /* 0C065136 extu.b Rm,Rn */
	IF(0x0C065138u); W8(r0 + r14, r2); UPD(0x0C06513Au, 3);  /* 0C065138 mov.b Rm,@(r0,Rn) */
	r0 = 0x6u;  /* 0C06513A mov #imm,Rn */
	IF(0x0C06513Cu); W8(r0 + r14, r2); UPD(0x0C06513Eu, 2);  /* 0C06513C mov.b Rm,@(r0,Rn) */
	IF(0x0C06513Eu); ;  /* 0C06513E nop */
	UPD(0x0C065140u, 1);
L_0C065140: BLKS(0x0C065140u);
	r7 = 0xC297838u; UPD(0x0C065142u, 1);  /* 0C065140 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s16)R16(r7); UPD(0x0C065144u, 1);  /* 0C065142 mov.w @Rm,Rn */
	r0 &= 0x8u;  /* 0C065144 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C065146 tst Rm,Rn */
	{ u32 c_ = T; r0 = R32(r14 + 0x1Cu); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C06506Au, 5); goto L_0C06506A; } UPD(0x0C06514Cu, 1); goto L_0C06514C; }  /* 0C065148 bt/s */
L_0C06514C: BLKS(0x0C06514Cu);
	r1 = 0xC173160u; UPD(0x0C06514Eu, 1);  /* 0C06514C mov.l @(disp,pc),Rn */
	IF(0x0C06514Eu); r13 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C065150u, 1);  /* 0C06514E mov.b @(r0,Rm),Rn */
	IF(0x0C065150u); r8 = (u32)(s32)(s8)R8(r0 + r1); UPD(0x0C065152u, 1);  /* 0C065150 mov.b @(r0,Rm),Rn */
	r13 += 0x1u;  /* 0C065152 add #imm,Rn */
	r13 &= r8;  /* 0C065154 and Rm,Rn */
	IF(0x0C065156u); W8(r0 + r14, r13); UPD(0x0C065158u, 3);  /* 0C065156 mov.b Rm,@(r0,Rn) */
	r9 = 0xC297638u; UPD(0x0C06515Au, 1);  /* 0C065158 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s16)R16(r9); UPD(0x0C06515Cu, 1);  /* 0C06515A mov.w @Rm,Rn */
	r0 &= 0x40u;  /* 0C06515C and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C06515E tst Rm,Rn */
	{ u32 c_ = !T; r2 = R32(r14 + 0x1Cu); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C065168u, 5); goto L_0C065168; } UPD(0x0C065164u, 1); goto L_0C065164; }  /* 0C065160 bf/s */
L_0C065164: BLKS(0x0C065164u);
	{ IF(0x0C065166u); ; /* slot nop */ UPD(0x0C06506Au, 3); goto L_0C06506A; }  /* 0C065164 bra */
L_0C065168: BLKS(0x0C065168u);
	r11 = 0x4u;  /* 0C065168 mov #imm,Rn */
	r2 += 0xFFFFFFFAu;  /* 0C06516A add #imm,Rn */
	T = r2 > r11;  /* 0C06516C cmp/hi Rm,Rn */
	if (T) { UPD(0x0C06519Eu, 6); goto L_0C06519E; }  /* 0C06516E bt */
L_0C065170: BLKS(0x0C065170u);
	r0 = 0xC065184u;  /* 0C065170 mova @(disp,pc),r0 */
	IF(0x0C065172u); r3 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C065174u, 2);  /* 0C065172 mov.b @(r0,Rm),Rn */
	IF(0x0C065174u); { u32 tv_ = (r3 + 0x0C065178u); u32 t_ = PHYS(tv_); IF(0x0C065176u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C065190u: goto L_0C065190; case 0x0C0651B0u: goto L_0C0651B0; default: JUMPD(tv_); } }  /* 0C065174 braf Rn */
L_0C065190: BLKS(0x0C065190u);
	r0 = R32(r14 + 0x1Cu); UPD(0x0C065192u, 1);  /* 0C065190 mov.l @(disp,Rm),Rn */
	IF(0x0C065192u); r2 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C065194u, 1);  /* 0C065192 mov.b @(r0,Rm),Rn */
	r0 = 0x7u;  /* 0C065194 mov #imm,Rn */
	r1 = r2 & 0xFF;  /* 0C065196 extu.b Rm,Rn */
	IF(0x0C065198u); W8(r0 + r14, r1); UPD(0x0C06519Au, 3);  /* 0C065198 mov.b Rm,@(r0,Rn) */
	r0 = 0x6u;  /* 0C06519A mov #imm,Rn */
	UPD(0x0C06519Cu, 1);
L_0C06519C: BLKS(0x0C06519Cu);
	IF(0x0C06519Cu); W8(r0 + r14, r1); UPD(0x0C06519Eu, 1);  /* 0C06519C mov.b Rm,@(r0,Rn) */
L_0C06519E: BLKS(0x0C06519Eu);
	{ IF(0x0C0651A0u); ; /* slot nop */ UPD(0x0C064CA8u, 3); goto L_0C064CA8; }  /* 0C06519E bra */
L_0C0651B0: BLKS(0x0C0651B0u);
	r0 = R32(r14 + 0x1Cu); UPD(0x0C0651B2u, 1);  /* 0C0651B0 mov.l @(disp,Rm),Rn */
	IF(0x0C0651B2u); r4 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C0651B4u, 1);  /* 0C0651B2 mov.b @(r0,Rm),Rn */
	r0 = 0xAu;  /* 0C0651B4 mov #imm,Rn */
	r1 = r4 & 0xFF;  /* 0C0651B6 extu.b Rm,Rn */
	IF(0x0C0651B8u); W8(r0 + r14, r1); UPD(0x0C0651BAu, 3);  /* 0C0651B8 mov.b Rm,@(r0,Rn) */
	r0 = 0x9u;  /* 0C0651BA mov #imm,Rn */
	IF(0x0C0651BCu); W8(r0 + r14, r1); UPD(0x0C0651BEu, 2);  /* 0C0651BC mov.b Rm,@(r0,Rn) */
	{ r0 = 0x8u; /* slot mov #imm,Rn */ UPD(0x0C06519Cu, 3); goto L_0C06519C; }  /* 0C0651BE bra */
L_0C0651D0: BLKS(0x0C0651D0u);
	r0 = R32(r14 + 0x1Cu); UPD(0x0C0651D2u, 1);  /* 0C0651D0 mov.l @(disp,Rm),Rn */
	r12 = 0x9u;  /* 0C0651D2 mov #imm,Rn */
	IF(0x0C0651D4u); r10 = (u32)(s32)(s8)R8(r0 + r14); UPD(0x0C0651D6u, 2);  /* 0C0651D4 mov.b @(r0,Rm),Rn */
	r12 += r14;  /* 0C0651D6 add Rm,Rn */
	r6 = r10 & 0xFF;  /* 0C0651D8 extu.b Rm,Rn */
	r0 = 0xAu;  /* 0C0651DA mov #imm,Rn */
	IF(0x0C0651DCu); W8(r0 + r14, r6); UPD(0x0C0651DEu, 4);  /* 0C0651DC mov.b Rm,@(r0,Rn) */
	r5 = 0x8u;  /* 0C0651DE mov #imm,Rn */
	W8(r12, r6); UPD(0x0C0651E2u, 2);  /* 0C0651E0 mov.b Rm,@Rn */
	r5 += r14;  /* 0C0651E2 add Rm,Rn */
	{ W8(r5, r6); /* slot mov.b Rm,@Rn */ UPD(0x0C065140u, 4); goto L_0C065140; }  /* 0C0651E4 bra */
}

/* FUN_0c0654d0 */
void blk_f_0C0654D0(sh3_t *c)
{
	LOCALS;
L_0C0654D0: BLKS(0x0C0654D0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0654D2u, 1);  /* 0C0654D0 mov.l Rm,@-Rn */
	r5 = 0x0u;  /* 0C0654D2 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0654D6u, 2);  /* 0C0654D4 mov.l Rm,@-Rn */
	r6 = 0x40u;  /* 0C0654D6 mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0654DAu, 2);  /* 0C0654D8 mov.l Rm,@-Rn */
	r3 = 0xC05DADCu; UPD(0x0C0654DCu, 1);  /* 0C0654DA mov.l @(disp,pc),Rn */
	r9 = 0xC2322C0u; UPD(0x0C0654DEu, 1);  /* 0C0654DC mov.l @(disp,pc),Rn */
	IF(0x0C0654DEu); r15 -= 4; W32(r15, PR); UPD(0x0C0654E0u, 1);  /* 0C0654DE sts.l pr,@-Rn */
	r4 = r9;  /* 0C0654E0 mov Rm,Rn */
	IF(0x0C0654E2u); { u32 t_ = r3; PR = 0x0C0654E6u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C05DADC, 0x0C05DADCu, 0x0C0654E6u); }  /* 0C0654E2 jsr @Rn */
L_0C0654E6: BLKS(0x0C0654E6u);
	r0 = r9;  /* 0C0654E6 mov Rm,Rn */
	r0 += 0xCu;  /* 0C0654E8 add #imm,Rn */
	r8 = (u32)(s32)(s8)R8(r0); UPD(0x0C0654ECu, 3);  /* 0C0654EA mov.b @Rm,Rn */
	r7 = r9;  /* 0C0654EC mov Rm,Rn */
	r5 = 0xC3C542Au; UPD(0x0C0654F0u, 2);  /* 0C0654EE mov.l @(disp,pc),Rn */
	r6 = r9;  /* 0C0654F0 mov Rm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r7); r7 += 1; r1 = v_; } UPD(0x0C0654F4u, 2);  /* 0C0654F2 mov.b @Rm+,Rn */
	r6 += 0x2u;  /* 0C0654F4 add #imm,Rn */
	W8(r5, r8); UPD(0x0C0654F8u, 2);  /* 0C0654F6 mov.b Rm,@Rn */
	r3 = r9;  /* 0C0654F8 mov Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r7); UPD(0x0C0654FCu, 2);  /* 0C0654FA mov.b @Rm,Rn */
	r3 += 0x3u;  /* 0C0654FC add #imm,Rn */
	r5 = 0xC2B1A58u; UPD(0x0C065500u, 2);  /* 0C0654FE mov.l @(disp,pc),Rn */
	r7 = r9;  /* 0C065500 mov Rm,Rn */
	W8(r5, r4); UPD(0x0C065504u, 2);  /* 0C065502 mov.b Rm,@Rn */
	r7 += 0x4u;  /* 0C065504 add #imm,Rn */
	r8 = 0xC3C414Cu; UPD(0x0C065508u, 2);  /* 0C065506 mov.l @(disp,pc),Rn */
	r5 += 0x1u;  /* 0C065508 add #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r6); UPD(0x0C06550Cu, 2);  /* 0C06550A mov.b @Rm,Rn */
	W8(r8, r1); UPD(0x0C06550Eu, 1);  /* 0C06550C mov.b Rm,@Rn */
	r4 = 0xC3C8690u; UPD(0x0C065510u, 1);  /* 0C06550E mov.l @(disp,pc),Rn */
	r8 += 0x1u;  /* 0C065510 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r3); UPD(0x0C065514u, 2);  /* 0C065512 mov.b @Rm,Rn */
	W8(r4, r2); UPD(0x0C065516u, 1);  /* 0C065514 mov.b Rm,@Rn */
	W8(r8, r0); UPD(0x0C065518u, 1);  /* 0C065516 mov.b Rm,@Rn */
	r2 = r9;  /* 0C065518 mov Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C06551Cu, 2);  /* 0C06551A mov.b @Rm,Rn */
	r2 += 0x5u;  /* 0C06551C add #imm,Rn */
	r0 = r9;  /* 0C06551E mov Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r2); UPD(0x0C065522u, 3);  /* 0C065520 mov.b @Rm,Rn */
	r0 += 0x6u;  /* 0C065522 add #imm,Rn */
	W8(r5, r6); UPD(0x0C065526u, 2);  /* 0C065524 mov.b Rm,@Rn */
	r4 += 0x1u;  /* 0C065526 add #imm,Rn */
	r8 = (u32)(s32)(s8)R8(r0); UPD(0x0C06552Au, 2);  /* 0C065528 mov.b @Rm,Rn */
	r6 = r9;  /* 0C06552A mov Rm,Rn */
	r7 = 0xC3CA6F8u; UPD(0x0C06552Eu, 2);  /* 0C06552C mov.l @(disp,pc),Rn */
	r6 += 0x7u;  /* 0C06552E add #imm,Rn */
	W8(r4, r3); UPD(0x0C065532u, 2);  /* 0C065530 mov.b Rm,@Rn */
	r2 = r9;  /* 0C065532 mov Rm,Rn */
	W8(r7, r8); UPD(0x0C065536u, 2);  /* 0C065534 mov.b Rm,@Rn */
	r2 += 0x8u;  /* 0C065536 add #imm,Rn */
	r5 = (u32)(s32)(s8)R8(r6); UPD(0x0C06553Au, 2);  /* 0C065538 mov.b @Rm,Rn */
	r8 = r9;  /* 0C06553A mov Rm,Rn */
	r4 = 0xC2860FCu; UPD(0x0C06553Eu, 2);  /* 0C06553C mov.l @(disp,pc),Rn */
	r8 += 0x9u;  /* 0C06553E add #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r2); UPD(0x0C065542u, 2);  /* 0C065540 mov.b @Rm,Rn */
	W8(r4, r5); UPD(0x0C065544u, 1);  /* 0C065542 mov.b Rm,@Rn */
	r2 = r9;  /* 0C065544 mov Rm,Rn */
	r0 = 0xC234C04u; UPD(0x0C065548u, 2);  /* 0C065546 mov.l @(disp,pc),Rn */
	r5 = r9;  /* 0C065548 mov Rm,Rn */
	r7 = (u32)(s32)(s8)R8(r8); UPD(0x0C06554Cu, 2);  /* 0C06554A mov.b @Rm,Rn */
	r5 += 0xAu;  /* 0C06554C add #imm,Rn */
	r6 = 0xC23DEA4u; UPD(0x0C065550u, 2);  /* 0C06554E mov.l @(disp,pc),Rn */
	r2 += 0xBu;  /* 0C065550 add #imm,Rn */
	W8(r0, r3); UPD(0x0C065554u, 2);  /* 0C065552 mov.b Rm,@Rn */
	W8(r6, r7); UPD(0x0C065556u, 1);  /* 0C065554 mov.b Rm,@Rn */
	r4 = (u32)(s32)(s8)R8(r5); UPD(0x0C065558u, 1);  /* 0C065556 mov.b @Rm,Rn */
	r7 = r9;  /* 0C065558 mov Rm,Rn */
	r3 = 0xC234BA8u; UPD(0x0C06555Cu, 2);  /* 0C06555A mov.l @(disp,pc),Rn */
	r7 += 0xFu;  /* 0C06555C add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C065560u, 2);  /* 0C06555E mov.b @Rm,Rn */
	W8(r3, r4); UPD(0x0C065562u, 1);  /* 0C065560 mov.b Rm,@Rn */
	r2 = r9;  /* 0C065562 mov Rm,Rn */
	r8 = 0xC239483u; UPD(0x0C065566u, 2);  /* 0C065564 mov.l @(disp,pc),Rn */
	r4 = r9;  /* 0C065566 mov Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C06556Au, 2);  /* 0C065568 mov.b @Rm,Rn */
	r4 += 0xDu;  /* 0C06556A add #imm,Rn */
	r5 = 0xC2B037Au; UPD(0x0C06556Eu, 2);  /* 0C06556C mov.l @(disp,pc),Rn */
	r2 += 0xEu;  /* 0C06556E add #imm,Rn */
	W8(r8, r0); UPD(0x0C065572u, 2);  /* 0C065570 mov.b Rm,@Rn */
	W8(r5, r6); UPD(0x0C065574u, 1);  /* 0C065572 mov.b Rm,@Rn */
	r3 = (u32)(s32)(s8)R8(r4); UPD(0x0C065576u, 1);  /* 0C065574 mov.b @Rm,Rn */
	r6 = r9;  /* 0C065576 mov Rm,Rn */
	r0 = 0xC3C43B8u; UPD(0x0C06557Au, 2);  /* 0C065578 mov.l @(disp,pc),Rn */
	r6 += 0x10u;  /* 0C06557A add #imm,Rn */
	r8 = (u32)(s32)(s8)R8(r2); UPD(0x0C06557Eu, 2);  /* 0C06557C mov.b @Rm,Rn */
	W8(r0, r3); UPD(0x0C065580u, 1);  /* 0C06557E mov.b Rm,@Rn */
	r7 = 0xC3C848Cu; UPD(0x0C065582u, 1);  /* 0C065580 mov.l @(disp,pc),Rn */
	r0 = r9;  /* 0C065582 mov Rm,Rn */
	r5 = (u32)(s32)(s8)R8(r6); UPD(0x0C065586u, 2);  /* 0C065584 mov.b @Rm,Rn */
	r0 += 0x11u;  /* 0C065586 add #imm,Rn */
	W8(r7, r8); UPD(0x0C06558Au, 2);  /* 0C065588 mov.b Rm,@Rn */
	r4 = r5 & 0xFF;  /* 0C06558A extu.b Rm,Rn */
	r3 = 0xC2380C8u; UPD(0x0C06558Eu, 2);  /* 0C06558C mov.l @(disp,pc),Rn */
	r6 = r9;  /* 0C06558E mov Rm,Rn */
	W32(r3, r4); UPD(0x0C065592u, 2);  /* 0C065590 mov.l Rm,@Rn */
	r9 += 0x13u;  /* 0C065592 add #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r0); UPD(0x0C065596u, 2);  /* 0C065594 mov.b @Rm,Rn */
	r6 += 0x12u;  /* 0C065596 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C06559Au, 2);  /* 0C065598 mov.b @Rm,Rn */
	r8 = r2 & 0xFF;  /* 0C06559A extu.b Rm,Rn */
	r2 = r0 & 0xFF;  /* 0C06559C extu.b Rm,Rn */
	r7 = 0xC2289E4u; UPD(0x0C0655A0u, 3);  /* 0C06559E mov.l @(disp,pc),Rn */
	r5 = (u32)(s32)(s8)R8(r6); UPD(0x0C0655A2u, 1);  /* 0C0655A0 mov.b @Rm,Rn */
	r3 = 0xC233720u; UPD(0x0C0655A4u, 1);  /* 0C0655A2 mov.l @(disp,pc),Rn */
	r4 = r5 & 0xFF;  /* 0C0655A4 extu.b Rm,Rn */
	r0 = 0xC286310u; UPD(0x0C0655A8u, 2);  /* 0C0655A6 mov.l @(disp,pc),Rn */
	W32(r7, r8); UPD(0x0C0655AAu, 1);  /* 0C0655A8 mov.l Rm,@Rn */
	r9 = 0xC172A08u; UPD(0x0C0655ACu, 1);  /* 0C0655AA mov.l @(disp,pc),Rn */
	r8 = 0x0u;  /* 0C0655AC mov #imm,Rn */
	W32(r3, r4); UPD(0x0C0655B0u, 2);  /* 0C0655AE mov.l Rm,@Rn */
	W32(r0, r2); UPD(0x0C0655B2u, 1);  /* 0C0655B0 mov.l Rm,@Rn */
	IF(0x0C0655B2u); ;  /* 0C0655B2 nop */
	UPD(0x0C0655B4u, 1);
L_0C0655B4: BLKS(0x0C0655B4u);
	r0 = 0xC2322E0u; UPD(0x0C0655B6u, 1);  /* 0C0655B4 mov.l @(disp,pc),Rn */
	IF(0x0C0655B6u); r4 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0655B8u, 1);  /* 0C0655B6 mov.b @(r0,Rm),Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r9); r9 += 1; r6 = v_; } UPD(0x0C0655BAu, 1);  /* 0C0655B8 mov.b @Rm+,Rn */
	r2 = r4 & 0xFF;  /* 0C0655BA extu.b Rm,Rn */
	T = r2 == r6;  /* 0C0655BC cmp/eq Rm,Rn */
	{ u32 c_ = T; r5 = r8; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0655CAu, 5); goto L_0C0655CA; } goto L_0C0655C2; }  /* 0C0655BE bt/s */
L_0C0655C2: BLKS(0x0C0655C2u);
	r7 = 0xC065B40u; UPD(0x0C0655C4u, 2);  /* 0C0655C2 mov.l @(disp,pc),Rn */
	IF(0x0C0655C4u); { u32 t_ = r7; PR = 0x0C0655C8u; IF(0x0C0655C6u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C065B40, 0x0C065B40u, 0x0C0655C8u); }  /* 0C0655C4 jsr @Rn */
L_0C0655C8: BLKS(0x0C0655C8u);
	r5 = r8;  /* 0C0655C8 mov Rm,Rn */
	UPD(0x0C0655CAu, 1);
L_0C0655CA: BLKS(0x0C0655CAu);
	r5 += 0x1u;  /* 0C0655CA add #imm,Rn */
	r8 = (u32)(s32)(s16)r5;  /* 0C0655CC exts.w Rm,Rn */
	r2 = 0x1Fu;  /* 0C0655CE mov #imm,Rn */
	T = (s32)r8 > (s32)r2;  /* 0C0655D0 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0655B4u, 7); goto L_0C0655B4; }  /* 0C0655D2 bf */
L_0C0655D4: BLKS(0x0C0655D4u);
	r8 = 0xC2380C8u; UPD(0x0C0655D6u, 1);  /* 0C0655D4 mov.l @(disp,pc),Rn */
	r9 = R32(r8); UPD(0x0C0655D8u, 1);  /* 0C0655D6 mov.l @Rm,Rn */
	T = (s32)r9 > (s32)r2;  /* 0C0655D8 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0655E0u, 4); goto L_0C0655E0; }  /* 0C0655DA bf */
L_0C0655DC: BLKS(0x0C0655DCu);
	{ IF(0x0C0655DEu); ; /* slot nop */ UPD(0x0C065810u, 3); goto L_0C065810; }  /* 0C0655DC bra */
L_0C0655E0: BLKS(0x0C0655E0u);
	r6 = 0xC2289E4u; UPD(0x0C0655E2u, 1);  /* 0C0655E0 mov.l @(disp,pc),Rn */
	r8 = 0xFu;  /* 0C0655E2 mov #imm,Rn */
	r3 = R32(r6); UPD(0x0C0655E6u, 2);  /* 0C0655E4 mov.l @Rm,Rn */
	T = (s32)r3 > (s32)r8;  /* 0C0655E6 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0655EEu, 4); goto L_0C0655EE; }  /* 0C0655E8 bf */
L_0C0655EA: BLKS(0x0C0655EAu);
	{ IF(0x0C0655ECu); ; /* slot nop */ UPD(0x0C065800u, 3); goto L_0C065800; }  /* 0C0655EA bra */
L_0C0655EE: BLKS(0x0C0655EEu);
	r5 = 0xC233720u; UPD(0x0C0655F0u, 1);  /* 0C0655EE mov.l @(disp,pc),Rn */
	r4 = 0x17u;  /* 0C0655F0 mov #imm,Rn */
	r7 = R32(r5); UPD(0x0C0655F4u, 2);  /* 0C0655F2 mov.l @Rm,Rn */
	r7 += 0xFFFFFFF8u;  /* 0C0655F4 add #imm,Rn */
	T = r7 > r4;  /* 0C0655F6 cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C0655FEu, 5); goto L_0C0655FE; }  /* 0C0655F8 bf */
L_0C0655FA: BLKS(0x0C0655FAu);
	{ IF(0x0C0655FCu); ; /* slot nop */ UPD(0x0C0657F0u, 3); goto L_0C0657F0; }  /* 0C0655FA bra */
L_0C0655FE: BLKS(0x0C0655FEu);
	r3 = 0xC286310u; UPD(0x0C065600u, 1);  /* 0C0655FE mov.l @(disp,pc),Rn */
	r0 = R32(r3); UPD(0x0C065602u, 1);  /* 0C065600 mov.l @Rm,Rn */
	T = (s32)r0 > (s32)r8;  /* 0C065602 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C06560Au, 4); goto L_0C06560A; }  /* 0C065604 bf */
L_0C065606: BLKS(0x0C065606u);
	{ IF(0x0C065608u); ; /* slot nop */ UPD(0x0C0657E0u, 3); goto L_0C0657E0; }  /* 0C065606 bra */
L_0C06560A: BLKS(0x0C06560Au);
	r2 = 0xC3C542Au; UPD(0x0C06560Cu, 1);  /* 0C06560A mov.l @(disp,pc),Rn */
	r6 = 0x4u;  /* 0C06560C mov #imm,Rn */
	r4 = (u32)(s32)(s8)R8(r2); UPD(0x0C065610u, 2);  /* 0C06560E mov.b @Rm,Rn */
	T = r4 > r6;  /* 0C065610 cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C065618u, 4); goto L_0C065618; }  /* 0C065612 bf */
L_0C065614: BLKS(0x0C065614u);
	{ IF(0x0C065616u); ; /* slot nop */ UPD(0x0C0657D0u, 3); goto L_0C0657D0; }  /* 0C065614 bra */
L_0C065618: BLKS(0x0C065618u);
	r8 = 0x0u;  /* 0C065618 mov #imm,Rn */
	IF(0x0C06561Au); ;  /* 0C06561A nop */
	UPD(0x0C06561Cu, 2);
L_0C06561C: BLKS(0x0C06561Cu);
	r9 = 0xC3C414Cu; UPD(0x0C06561Eu, 1);  /* 0C06561C mov.l @(disp,pc),Rn */
	r5 = 0x9u;  /* 0C06561E mov #imm,Rn */
	r0 = r9;  /* 0C065620 mov Rm,Rn */
	IF(0x0C065622u); r1 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C065624u, 3);  /* 0C065622 mov.b @(r0,Rm),Rn */
	T = r1 > r5;  /* 0C065624 cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C06562Cu, 4); goto L_0C06562C; }  /* 0C065626 bf */
L_0C065628: BLKS(0x0C065628u);
	{ IF(0x0C06562Au); ; /* slot nop */ UPD(0x0C0657C0u, 3); goto L_0C0657C0; }  /* 0C065628 bra */
L_0C06562C: BLKS(0x0C06562Cu);
	r2 = 0xC2B1A58u; UPD(0x0C06562Eu, 1);  /* 0C06562C mov.l @(disp,pc),Rn */
	r3 = 0x8u;  /* 0C06562E mov #imm,Rn */
	r0 = r2;  /* 0C065630 mov Rm,Rn */
	IF(0x0C065632u); r4 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C065634u, 3);  /* 0C065632 mov.b @(r0,Rm),Rn */
	r4 += 0xFFFFFFFFu;  /* 0C065634 add #imm,Rn */
	r6 = r4 & 0xFF;  /* 0C065636 extu.b Rm,Rn */
	T = r6 > r3;  /* 0C065638 cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C065640u, 6); goto L_0C065640; }  /* 0C06563A bf */
L_0C06563C: BLKS(0x0C06563Cu);
	{ IF(0x0C06563Eu); ; /* slot nop */ UPD(0x0C0657B0u, 3); goto L_0C0657B0; }  /* 0C06563C bra */
L_0C065640: BLKS(0x0C065640u);
	r9 = 0xC3C8690u; UPD(0x0C065642u, 1);  /* 0C065640 mov.l @(disp,pc),Rn */
	r5 = 0x4u;  /* 0C065642 mov #imm,Rn */
	r0 = r9;  /* 0C065644 mov Rm,Rn */
	IF(0x0C065646u); r1 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C065648u, 3);  /* 0C065646 mov.b @(r0,Rm),Rn */
	T = r1 > r5;  /* 0C065648 cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C065650u, 4); goto L_0C065650; }  /* 0C06564A bf */
L_0C06564C: BLKS(0x0C06564Cu);
	{ IF(0x0C06564Eu); ; /* slot nop */ UPD(0x0C0657A0u, 3); goto L_0C0657A0; }  /* 0C06564C bra */
L_0C065650: BLKS(0x0C065650u);
	r3 = r8;  /* 0C065650 mov Rm,Rn */
	UPD(0x0C065652u, 1);
L_0C065652: BLKS(0x0C065652u);
	r3 += 0x1u;  /* 0C065652 add #imm,Rn */
	r8 = (u32)(s32)(s16)r3;  /* 0C065654 exts.w Rm,Rn */
	r9 = 0x1u;  /* 0C065656 mov #imm,Rn */
	T = (s32)r8 > (s32)r9;  /* 0C065658 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C06561Cu, 7); goto L_0C06561C; }  /* 0C06565A bf */
L_0C06565C: BLKS(0x0C06565Cu);
	r4 = 0xC3C43B8u; UPD(0x0C06565Eu, 1);  /* 0C06565C mov.l @(disp,pc),Rn */
	r8 = (u32)(s32)(s8)R8(r4); UPD(0x0C065660u, 1);  /* 0C06565E mov.b @Rm,Rn */
	r6 = r8 & 0xFF;  /* 0C065660 extu.b Rm,Rn */
	r8 = 0x2u;  /* 0C065662 mov #imm,Rn */
	T = r6 > r8;  /* 0C065664 cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C06566Cu, 6); goto L_0C06566C; }  /* 0C065666 bf */
L_0C065668: BLKS(0x0C065668u);
	{ IF(0x0C06566Au); ; /* slot nop */ UPD(0x0C065790u, 3); goto L_0C065790; }  /* 0C065668 bra */
L_0C06566C: BLKS(0x0C06566Cu);
	r0 = 0xC3C848Cu; UPD(0x0C06566Eu, 1);  /* 0C06566C mov.l @(disp,pc),Rn */
	r5 = (u32)(s32)(s8)R8(r0); UPD(0x0C065670u, 1);  /* 0C06566E mov.b @Rm,Rn */
	r7 = r5 & 0xFF;  /* 0C065670 extu.b Rm,Rn */
	T = r7 > r8;  /* 0C065672 cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C06567Au, 5); goto L_0C06567A; }  /* 0C065674 bf */
L_0C065676: BLKS(0x0C065676u);
	{ IF(0x0C065678u); ; /* slot nop */ UPD(0x0C065780u, 3); goto L_0C065780; }  /* 0C065676 bra */
L_0C06567A: BLKS(0x0C06567Au);
	r4 = 0xC234C04u; UPD(0x0C06567Cu, 1);  /* 0C06567A mov.l @(disp,pc),Rn */
	r8 = (u32)(s32)(s8)R8(r4); UPD(0x0C06567Eu, 1);  /* 0C06567C mov.b @Rm,Rn */
	r6 = r8 & 0xFF;  /* 0C06567E extu.b Rm,Rn */
	r8 = 0x7u;  /* 0C065680 mov #imm,Rn */
	T = r6 > r8;  /* 0C065682 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C065770u, 6); goto L_0C065770; }  /* 0C065684 bt */
L_0C065686: BLKS(0x0C065686u);
	r0 = 0xC23DEA4u; UPD(0x0C065688u, 1);  /* 0C065686 mov.l @(disp,pc),Rn */
	r5 = (u32)(s32)(s8)R8(r0); UPD(0x0C06568Au, 1);  /* 0C065688 mov.b @Rm,Rn */
	r7 = r5 & 0xFF;  /* 0C06568A extu.b Rm,Rn */
	T = r7 > r8;  /* 0C06568C cmp/hi Rm,Rn */
	if (T) { UPD(0x0C065760u, 5); goto L_0C065760; }  /* 0C06568E bt */
L_0C065690: BLKS(0x0C065690u);
	r2 = 0xC234BA8u; UPD(0x0C065692u, 1);  /* 0C065690 mov.l @(disp,pc),Rn */
	r6 = 0x12u;  /* 0C065692 mov #imm,Rn */
	r4 = (u32)(s32)(s8)R8(r2); UPD(0x0C065696u, 2);  /* 0C065694 mov.b @Rm,Rn */
	T = r4 > r6;  /* 0C065696 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C065750u, 4); goto L_0C065750; }  /* 0C065698 bt */
L_0C06569A: BLKS(0x0C06569Au);
	r3 = 0xC239483u; UPD(0x0C06569Cu, 1);  /* 0C06569A mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r3); UPD(0x0C06569Eu, 1);  /* 0C06569C mov.b @Rm,Rn */
	r5 = r0 & 0xFF;  /* 0C06569E extu.b Rm,Rn */
	T = r5 > r8;  /* 0C0656A0 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C065740u, 5); goto L_0C065740; }  /* 0C0656A2 bt */
L_0C0656A4: BLKS(0x0C0656A4u);
	r2 = 0xC2B037Au; UPD(0x0C0656A6u, 1);  /* 0C0656A4 mov.l @(disp,pc),Rn */
	r4 = (u32)(s32)(s8)R8(r2); UPD(0x0C0656A8u, 1);  /* 0C0656A6 mov.b @Rm,Rn */
	r6 = r4 & 0xFF;  /* 0C0656A8 extu.b Rm,Rn */
	T = r6 > r9;  /* 0C0656AA cmp/hi Rm,Rn */
	if (T) { UPD(0x0C065730u, 5); goto L_0C065730; }  /* 0C0656AC bt */
L_0C0656AE: BLKS(0x0C0656AEu);
	r0 = 0xC3CA6F8u; UPD(0x0C0656B0u, 1);  /* 0C0656AE mov.l @(disp,pc),Rn */
	r7 = 0xAu;  /* 0C0656B0 mov #imm,Rn */
	r5 = (u32)(s32)(s8)R8(r0); UPD(0x0C0656B4u, 2);  /* 0C0656B2 mov.b @Rm,Rn */
	T = r5 > r7;  /* 0C0656B4 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C065720u, 4); goto L_0C065720; }  /* 0C0656B6 bt */
L_0C0656B8: BLKS(0x0C0656B8u);
	r7 = 0xC2B1824u; UPD(0x0C0656BAu, 1);  /* 0C0656B8 mov.l @(disp,pc),Rn */
	r0 = 0x0u;  /* 0C0656BA mov #imm,Rn */
	r3 = 0xC2322C0u; UPD(0x0C0656BEu, 2);  /* 0C0656BC mov.l @(disp,pc),Rn */
	r2 = 0x3Fu;  /* 0C0656BE mov #imm,Rn */
	UPD(0x0C0656C0u, 1);
L_0C0656C0: BLKS(0x0C0656C0u);
	IF(0x0C0656C0u); r6 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0656C2u, 1);  /* 0C0656C0 mov.b @(r0,Rm),Rn */
	r8 = r0;  /* 0C0656C2 mov Rm,Rn */
	IF(0x0C0656C4u); W8(r0 + r7, r6); UPD(0x0C0656C6u, 2);  /* 0C0656C4 mov.b Rm,@(r0,Rn) */
	r8 += 0x1u;  /* 0C0656C6 add #imm,Rn */
	r0 = (u32)(s32)(s16)r8;  /* 0C0656C8 exts.w Rm,Rn */
	T = (s32)r0 > (s32)r2;  /* 0C0656CA cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0656C0u, 6); goto L_0C0656C0; }  /* 0C0656CC bf */
L_0C0656CE: BLKS(0x0C0656CEu);
	r9 = 0xC065AC0u; UPD(0x0C0656D0u, 1);  /* 0C0656CE mov.l @(disp,pc),Rn */
	r8 = 0xC3C5448u; UPD(0x0C0656D2u, 1);  /* 0C0656D0 mov.l @(disp,pc),Rn */
	IF(0x0C0656D2u); { u32 t_ = r9; PR = 0x0C0656D6u; IF(0x0C0656D4u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C065AC0, 0x0C065AC0u, 0x0C0656D6u); }  /* 0C0656D2 jsr @Rn */
L_0C0656D6: BLKS(0x0C0656D6u);
	r2 = 0xC233720u; UPD(0x0C0656D8u, 1);  /* 0C0656D6 mov.l @(disp,pc),Rn */
	r7 = 0xFFFFFFFFu;  /* 0C0656D8 mov #imm,Rn */
	r5 = 0xC3C414Cu; UPD(0x0C0656DCu, 2);  /* 0C0656DA mov.l @(disp,pc),Rn */
	r6 = R32(r2); UPD(0x0C0656DEu, 1);  /* 0C0656DC mov.l @Rm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r5); r5 += 1; r0 = v_; } UPD(0x0C0656E0u, 1);  /* 0C0656DE mov.b @Rm+,Rn */
	r4 = 0xC239468u; UPD(0x0C0656E2u, 1);  /* 0C0656E0 mov.l @(disp,pc),Rn */
	T = (r0 & r0) == 0;  /* 0C0656E2 tst Rm,Rn */
	r3 = 0xC3C542Au; UPD(0x0C0656E6u, 2);  /* 0C0656E4 mov.l @(disp,pc),Rn */
	W32(r4, r6); UPD(0x0C0656E8u, 1);  /* 0C0656E6 mov.l Rm,@Rn */
	r0 = (u32)(s32)(s8)R8(r3); UPD(0x0C0656EAu, 1);  /* 0C0656E8 mov.b @Rm,Rn */
	{ u32 t_ = 0u - r7, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r4 = r_; }  /* 0C0656EA negc Rm,Rn */
	T = r0 == 0x3u;  /* 0C0656EC cmp/eq #imm,r0 */
	r1 = (u32)(s32)(s8)R8(r5); UPD(0x0C0656F0u, 3);  /* 0C0656EE mov.b @Rm,Rn */
	IF(0x0C0656F0u); r9 = T;  /* 0C0656F0 movt Rn */
	T = (r1 & r1) == 0;  /* 0C0656F2 tst Rm,Rn */
	{ u32 t_ = 0u - r7, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r2 = r_; }  /* 0C0656F4 negc Rm,Rn */
	r2 &= r9;  /* 0C0656F6 and Rm,Rn */
	r4 |= r2;  /* 0C0656F8 or Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C0656FA tst Rm,Rn */
	{ u32 c_ = T; W32(r8, r6); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C06570Au, 9); goto L_0C06570A; } UPD(0x0C065700u, 1); goto L_0C065700; }  /* 0C0656FC bt/s */
L_0C065700: BLKS(0x0C065700u);
	r1 = 0xC3C848Cu; UPD(0x0C065702u, 1);  /* 0C065700 mov.l @(disp,pc),Rn */
	r5 = 0x1u;  /* 0C065702 mov #imm,Rn */
	r7 = 0xC3C43B8u; UPD(0x0C065706u, 2);  /* 0C065704 mov.l @(disp,pc),Rn */
	W8(r1, r5); UPD(0x0C065708u, 1);  /* 0C065706 mov.b Rm,@Rn */
	W8(r7, r5); UPD(0x0C06570Au, 1);  /* 0C065708 mov.b Rm,@Rn */
L_0C06570A: BLKS(0x0C06570Au);
	r15 = r14;  /* 0C06570A mov Rm,Rn */
	IF(0x0C06570Cu); PR = R32(r15); r15 += 4; UPD(0x0C06570Eu, 2);  /* 0C06570C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C065710u, 1);  /* 0C06570E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C065712u, 1);  /* 0C065710 mov.l @Rm+,Rn */
	IF(0x0C065712u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C065712 rts */
L_0C065720: BLKS(0x0C065720u);
	r3 = 0xC065B40u; UPD(0x0C065722u, 1);  /* 0C065720 mov.l @(disp,pc),Rn */
	IF(0x0C065722u); { u32 t_ = r3; PR = 0x0C065726u; IF(0x0C065724u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C065B40, 0x0C065B40u, 0x0C065726u); }  /* 0C065722 jsr @Rn */
L_0C065726: BLKS(0x0C065726u);
	{ IF(0x0C065728u); ; /* slot nop */ UPD(0x0C0656B8u, 3); goto L_0C0656B8; }  /* 0C065726 bra */
L_0C065730: BLKS(0x0C065730u);
	r9 = 0xC065B40u; UPD(0x0C065732u, 1);  /* 0C065730 mov.l @(disp,pc),Rn */
	IF(0x0C065732u); { u32 t_ = r9; PR = 0x0C065736u; IF(0x0C065734u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C065B40, 0x0C065B40u, 0x0C065736u); }  /* 0C065732 jsr @Rn */
L_0C065736: BLKS(0x0C065736u);
	{ IF(0x0C065738u); ; /* slot nop */ UPD(0x0C0656AEu, 3); goto L_0C0656AE; }  /* 0C065736 bra */
L_0C065740: BLKS(0x0C065740u);
	r8 = 0xC065B40u; UPD(0x0C065742u, 1);  /* 0C065740 mov.l @(disp,pc),Rn */
	IF(0x0C065742u); { u32 t_ = r8; PR = 0x0C065746u; IF(0x0C065744u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C065B40, 0x0C065B40u, 0x0C065746u); }  /* 0C065742 jsr @Rn */
L_0C065746: BLKS(0x0C065746u);
	{ IF(0x0C065748u); ; /* slot nop */ UPD(0x0C0656A4u, 3); goto L_0C0656A4; }  /* 0C065746 bra */
L_0C065750: BLKS(0x0C065750u);
	r7 = 0xC065B40u; UPD(0x0C065752u, 1);  /* 0C065750 mov.l @(disp,pc),Rn */
	IF(0x0C065752u); { u32 t_ = r7; PR = 0x0C065756u; IF(0x0C065754u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C065B40, 0x0C065B40u, 0x0C065756u); }  /* 0C065752 jsr @Rn */
L_0C065756: BLKS(0x0C065756u);
	{ IF(0x0C065758u); ; /* slot nop */ UPD(0x0C06569Au, 3); goto L_0C06569A; }  /* 0C065756 bra */
L_0C065760: BLKS(0x0C065760u);
	r3 = 0xC065B40u; UPD(0x0C065762u, 1);  /* 0C065760 mov.l @(disp,pc),Rn */
	IF(0x0C065762u); { u32 t_ = r3; PR = 0x0C065766u; IF(0x0C065764u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C065B40, 0x0C065B40u, 0x0C065766u); }  /* 0C065762 jsr @Rn */
L_0C065766: BLKS(0x0C065766u);
	{ IF(0x0C065768u); ; /* slot nop */ UPD(0x0C065690u, 3); goto L_0C065690; }  /* 0C065766 bra */
L_0C065770: BLKS(0x0C065770u);
	r2 = 0xC065B40u; UPD(0x0C065772u, 1);  /* 0C065770 mov.l @(disp,pc),Rn */
	IF(0x0C065772u); { u32 t_ = r2; PR = 0x0C065776u; IF(0x0C065774u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C065B40, 0x0C065B40u, 0x0C065776u); }  /* 0C065772 jsr @Rn */
L_0C065776: BLKS(0x0C065776u);
	{ IF(0x0C065778u); ; /* slot nop */ UPD(0x0C065686u, 3); goto L_0C065686; }  /* 0C065776 bra */
L_0C065780: BLKS(0x0C065780u);
	r3 = 0xC065B40u; UPD(0x0C065782u, 1);  /* 0C065780 mov.l @(disp,pc),Rn */
	IF(0x0C065782u); { u32 t_ = r3; PR = 0x0C065786u; IF(0x0C065784u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C065B40, 0x0C065B40u, 0x0C065786u); }  /* 0C065782 jsr @Rn */
L_0C065786: BLKS(0x0C065786u);
	{ IF(0x0C065788u); ; /* slot nop */ UPD(0x0C06567Au, 3); goto L_0C06567A; }  /* 0C065786 bra */
L_0C065790: BLKS(0x0C065790u);
	r2 = 0xC065B40u; UPD(0x0C065792u, 1);  /* 0C065790 mov.l @(disp,pc),Rn */
	IF(0x0C065792u); { u32 t_ = r2; PR = 0x0C065796u; IF(0x0C065794u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C065B40, 0x0C065B40u, 0x0C065796u); }  /* 0C065792 jsr @Rn */
L_0C065796: BLKS(0x0C065796u);
	{ IF(0x0C065798u); ; /* slot nop */ UPD(0x0C06566Cu, 3); goto L_0C06566C; }  /* 0C065796 bra */
L_0C0657A0: BLKS(0x0C0657A0u);
	r0 = 0xC065B40u; UPD(0x0C0657A2u, 1);  /* 0C0657A0 mov.l @(disp,pc),Rn */
	IF(0x0C0657A2u); { u32 t_ = r0; PR = 0x0C0657A6u; IF(0x0C0657A4u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C065B40, 0x0C065B40u, 0x0C0657A6u); }  /* 0C0657A2 jsr @Rn */
L_0C0657A6: BLKS(0x0C0657A6u);
	{ r3 = r8; /* slot mov Rm,Rn */ UPD(0x0C065652u, 3); goto L_0C065652; }  /* 0C0657A6 bra */
L_0C0657B0: BLKS(0x0C0657B0u);
	r7 = 0xC065B40u; UPD(0x0C0657B2u, 1);  /* 0C0657B0 mov.l @(disp,pc),Rn */
	IF(0x0C0657B2u); { u32 t_ = r7; PR = 0x0C0657B6u; IF(0x0C0657B4u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C065B40, 0x0C065B40u, 0x0C0657B6u); }  /* 0C0657B2 jsr @Rn */
L_0C0657B6: BLKS(0x0C0657B6u);
	{ IF(0x0C0657B8u); ; /* slot nop */ UPD(0x0C065640u, 3); goto L_0C065640; }  /* 0C0657B6 bra */
L_0C0657C0: BLKS(0x0C0657C0u);
	r0 = 0xC065B40u; UPD(0x0C0657C2u, 1);  /* 0C0657C0 mov.l @(disp,pc),Rn */
	IF(0x0C0657C2u); { u32 t_ = r0; PR = 0x0C0657C6u; IF(0x0C0657C4u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C065B40, 0x0C065B40u, 0x0C0657C6u); }  /* 0C0657C2 jsr @Rn */
L_0C0657C6: BLKS(0x0C0657C6u);
	{ IF(0x0C0657C8u); ; /* slot nop */ UPD(0x0C06562Cu, 3); goto L_0C06562C; }  /* 0C0657C6 bra */
L_0C0657D0: BLKS(0x0C0657D0u);
	r7 = 0xC065B40u; UPD(0x0C0657D2u, 1);  /* 0C0657D0 mov.l @(disp,pc),Rn */
	IF(0x0C0657D2u); { u32 t_ = r7; PR = 0x0C0657D6u; r8 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C065B40, 0x0C065B40u, 0x0C0657D6u); }  /* 0C0657D2 jsr @Rn */
L_0C0657D6: BLKS(0x0C0657D6u);
	{ IF(0x0C0657D8u); ; /* slot nop */ UPD(0x0C06561Cu, 3); goto L_0C06561C; }  /* 0C0657D6 bra */
L_0C0657E0: BLKS(0x0C0657E0u);
	r8 = 0xC065B40u; UPD(0x0C0657E2u, 1);  /* 0C0657E0 mov.l @(disp,pc),Rn */
	IF(0x0C0657E2u); { u32 t_ = r8; PR = 0x0C0657E6u; IF(0x0C0657E4u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C065B40, 0x0C065B40u, 0x0C0657E6u); }  /* 0C0657E2 jsr @Rn */
L_0C0657E6: BLKS(0x0C0657E6u);
	{ IF(0x0C0657E8u); ; /* slot nop */ UPD(0x0C06560Au, 3); goto L_0C06560A; }  /* 0C0657E6 bra */
L_0C0657F0: BLKS(0x0C0657F0u);
	r9 = 0xC065B40u; UPD(0x0C0657F2u, 1);  /* 0C0657F0 mov.l @(disp,pc),Rn */
	IF(0x0C0657F2u); { u32 t_ = r9; PR = 0x0C0657F6u; IF(0x0C0657F4u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C065B40, 0x0C065B40u, 0x0C0657F6u); }  /* 0C0657F2 jsr @Rn */
L_0C0657F6: BLKS(0x0C0657F6u);
	{ IF(0x0C0657F8u); ; /* slot nop */ UPD(0x0C0655FEu, 3); goto L_0C0655FE; }  /* 0C0657F6 bra */
L_0C065800: BLKS(0x0C065800u);
	r2 = 0xC065B40u; UPD(0x0C065802u, 1);  /* 0C065800 mov.l @(disp,pc),Rn */
	IF(0x0C065802u); { u32 t_ = r2; PR = 0x0C065806u; IF(0x0C065804u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C065B40, 0x0C065B40u, 0x0C065806u); }  /* 0C065802 jsr @Rn */
L_0C065806: BLKS(0x0C065806u);
	{ IF(0x0C065808u); ; /* slot nop */ UPD(0x0C0655EEu, 3); goto L_0C0655EE; }  /* 0C065806 bra */
L_0C065810: BLKS(0x0C065810u);
	r0 = 0xC065B40u; UPD(0x0C065812u, 1);  /* 0C065810 mov.l @(disp,pc),Rn */
	IF(0x0C065812u); { u32 t_ = r0; PR = 0x0C065816u; IF(0x0C065814u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C065B40, 0x0C065B40u, 0x0C065816u); }  /* 0C065812 jsr @Rn */
L_0C065816: BLKS(0x0C065816u);
	{ IF(0x0C065818u); ; /* slot nop */ UPD(0x0C0655E0u, 3); goto L_0C0655E0; }  /* 0C065816 bra */
}

/* FUN_0c065890 */
void blk_f_0C065890(sh3_t *c)
{
	LOCALS;
L_0C065890: BLKS(0x0C065890u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C065892u, 1);  /* 0C065890 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C065894u, 1);  /* 0C065892 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C065896u, 1);  /* 0C065894 mov.l Rm,@-Rn */
	r9 = 0x0u;  /* 0C065896 mov #imm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06589Au, 2);  /* 0C065898 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C06589Cu, 1);  /* 0C06589A mov.l Rm,@-Rn */
	r11 = 0x0u;  /* 0C06589C mov #imm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0658A0u, 2);  /* 0C06589E mov.l Rm,@-Rn */
	r12 = 0x0u;  /* 0C0658A0 mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0658A4u, 2);  /* 0C0658A2 mov.l Rm,@-Rn */
	r13 = 0x0u;  /* 0C0658A4 mov #imm,Rn */
	r10 = 0xC173490u; UPD(0x0C0658A8u, 2);  /* 0C0658A6 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0658A8 mov Rm,Rn */
	IF(0x0C0658AAu); ;  /* 0C0658AA nop */
	UPD(0x0C0658ACu, 2);
L_0C0658AC: BLKS(0x0C0658ACu);
	r0 = 0xAu;  /* 0C0658AC mov #imm,Rn */
	IF(0x0C0658AEu); MACL = r13 * r0;  /* 0C0658AE mul.l Rm,Rn */
	r5 = 0xC2ABAACu; UPD(0x0C0658B2u, 4);  /* 0C0658B0 mov.l @(disp,pc),Rn */
	r8 = 0x0u;  /* 0C0658B2 mov #imm,Rn */
	r0 = 0xC286110u; UPD(0x0C0658B6u, 2);  /* 0C0658B4 mov.l @(disp,pc),Rn */
	IF(0x0C0658B6u); r6 = MACL;  /* 0C0658B6 sts macl,Rn */
	r6 += r0;  /* 0C0658B8 add Rm,Rn */
	r5 += r11;  /* 0C0658BA add Rm,Rn */
	UPD(0x0C0658BCu, 3);
L_0C0658BC: BLKS(0x0C0658BCu);
	r6 += 0x40u;  /* 0C0658BC add #imm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r6); r6 += 1; r7 = v_; } UPD(0x0C0658C0u, 2);  /* 0C0658BE mov.b @Rm+,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r6); r6 += 1; r1 = v_; } UPD(0x0C0658C2u, 1);  /* 0C0658C0 mov.b @Rm+,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r6); r6 += 1; r3 = v_; } UPD(0x0C0658C4u, 1);  /* 0C0658C2 mov.b @Rm+,Rn */
	r4 = (u32)(s32)(s8)R8(r6); UPD(0x0C0658C6u, 1);  /* 0C0658C4 mov.b @Rm,Rn */
	r2 = r3 & 0xFF;  /* 0C0658C6 extu.b Rm,Rn */
	r0 = r4 & 0xFF;  /* 0C0658C8 extu.b Rm,Rn */
	r4 = 0x18u;  /* 0C0658CA mov #imm,Rn */
	IF(0x0C0658CCu); ARG0(0x474Du); { s32 s_ = (s32)r4; if (s_ >= 0) r7 <<= (s_ & 31); else if ((s_ & 31) == 0) r7 = 0; else r7 >>= ((~s_ & 31) + 1); }  /* 0C0658CC shld Rm,Rn */
	r4 = r1 & 0xFF;  /* 0C0658CE extu.b Rm,Rn */
	IF(0x0C0658D0u); r4 <<= 16;  /* 0C0658D0 shll16 Rn */
	r7 |= r4;  /* 0C0658D2 or Rm,Rn */
	IF(0x0C0658D4u); r2 <<= 8;  /* 0C0658D4 shll8 Rn */
	r7 |= r2;  /* 0C0658D6 or Rm,Rn */
	r7 |= r0;  /* 0C0658D8 or Rm,Rn */
	W32(r5, r7); UPD(0x0C0658DCu, 11);  /* 0C0658DA mov.l Rm,@Rn */
	r6 += 0x4u;  /* 0C0658DC add #imm,Rn */
	r4 = (u32)(s32)(s8)R8(r6); UPD(0x0C0658E0u, 2);  /* 0C0658DE mov.b @Rm,Rn */
	r0 = r4;  /* 0C0658E0 mov Rm,Rn */
	r0 &= 0x3u;  /* 0C0658E2 and #imm,r0 */
	IF(0x0C0658E4u); r0 <<= 2;  /* 0C0658E4 shll2 Rn */
	IF(0x0C0658E6u); r3 = R32(r0 + r10); UPD(0x0C0658E8u, 4);  /* 0C0658E6 mov.l @(r0,Rm),Rn */
	r6 += 0xFFFFFFFDu;  /* 0C0658E8 add #imm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r6); r6 += 1; r0 = v_; } UPD(0x0C0658ECu, 2);  /* 0C0658EA mov.b @Rm+,Rn */
	r2 = r0 & 0xFF;  /* 0C0658EC extu.b Rm,Rn */
	r2 += r3;  /* 0C0658EE add Rm,Rn */
	W32(r5 + 0x8u, r2); UPD(0x0C0658F2u, 3);  /* 0C0658F0 mov.l Rm,@(disp,Rn) */
	{ u32 v_ = (u32)(s32)(s8)R8(r6); r6 += 1; r0 = v_; } UPD(0x0C0658F4u, 1);  /* 0C0658F2 mov.b @Rm+,Rn */
	r2 = r0 & 0xFF;  /* 0C0658F4 extu.b Rm,Rn */
	r2 += r3;  /* 0C0658F6 add Rm,Rn */
	W32(r5 + 0xCu, r2); UPD(0x0C0658FAu, 3);  /* 0C0658F8 mov.l Rm,@(disp,Rn) */
	r0 = (u32)(s32)(s8)R8(r6); UPD(0x0C0658FCu, 1);  /* 0C0658FA mov.b @Rm,Rn */
	r2 = r0 & 0xFF;  /* 0C0658FC extu.b Rm,Rn */
	r3 += r2;  /* 0C0658FE add Rm,Rn */
	W32(r5 + 0x10u, r3); UPD(0x0C065902u, 3);  /* 0C065900 mov.l Rm,@(disp,Rn) */
	r2 = r5;  /* 0C065902 mov Rm,Rn */
	r3 = 0x0u;  /* 0C065904 mov #imm,Rn */
	W32(r5 + 0x14u, r3); UPD(0x0C065908u, 3);  /* 0C065906 mov.l Rm,@(disp,Rn) */
	r6 += 0x2u;  /* 0C065908 add #imm,Rn */
	r5 += 0x19u;  /* 0C06590A add #imm,Rn */
	W8(r5, r4); UPD(0x0C06590Eu, 3);  /* 0C06590C mov.b Rm,@Rn */
	r2 += 0x18u;  /* 0C06590E add #imm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r6); r6 += 1; r0 = v_; } UPD(0x0C065912u, 2);  /* 0C065910 mov.b @Rm+,Rn */
	r5 += 0xFFFFFFE7u;  /* 0C065912 add #imm,Rn */
	r3 = r0 & 0xFF;  /* 0C065914 extu.b Rm,Rn */
	W32(r5 + 0x4u, r3); UPD(0x0C065918u, 3);  /* 0C065916 mov.l Rm,@(disp,Rn) */
	r0 = (u32)(s32)(s8)R8(r6); UPD(0x0C06591Au, 1);  /* 0C065918 mov.b @Rm,Rn */
	W8(r2, r0); UPD(0x0C06591Cu, 1);  /* 0C06591A mov.b Rm,@Rn */
	r2 = 0x3B9AC9FFu; UPD(0x0C06591Eu, 1);  /* 0C06591C mov.l @(disp,pc),Rn */
	T = r7 > r2;  /* 0C06591E cmp/hi Rm,Rn */
	{ u32 c_ = !T; r6 += 0xFFFFFFB7u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C065926u, 4); goto L_0C065926; } goto L_0C065924; }  /* 0C065920 bf/s */
L_0C065924: BLKS(0x0C065924u);
	r9 = 0x1u;  /* 0C065924 mov #imm,Rn */
	UPD(0x0C065926u, 2);
L_0C065926: BLKS(0x0C065926u);
	r7 = 0xFu;  /* 0C065926 mov #imm,Rn */
	T = r3 > r7;  /* 0C065928 cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C06592Eu, 5); goto L_0C06592E; }  /* 0C06592A bf */
L_0C06592C: BLKS(0x0C06592Cu);
	r9 = 0x1u;  /* 0C06592C mov #imm,Rn */
	UPD(0x0C06592Eu, 1);
L_0C06592E: BLKS(0x0C06592Eu);
	r1 = r4 & 0xFF;  /* 0C06592E extu.b Rm,Rn */
	r4 = 0x2u;  /* 0C065930 mov #imm,Rn */
	T = r1 > r4;  /* 0C065932 cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C065938u, 6); goto L_0C065938; }  /* 0C065934 bf */
L_0C065936: BLKS(0x0C065936u);
	r9 = 0x1u;  /* 0C065936 mov #imm,Rn */
	UPD(0x0C065938u, 1);
L_0C065938: BLKS(0x0C065938u);
	r3 = r0 & 0xFF;  /* 0C065938 extu.b Rm,Rn */
	r0 = 0x1u;  /* 0C06593A mov #imm,Rn */
	T = r3 > r0;  /* 0C06593C cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C065942u, 6); goto L_0C065942; }  /* 0C06593E bf */
L_0C065940: BLKS(0x0C065940u);
	r9 = 0x1u;  /* 0C065940 mov #imm,Rn */
	UPD(0x0C065942u, 1);
L_0C065942: BLKS(0x0C065942u);
	r7 = r8;  /* 0C065942 mov Rm,Rn */
	r7 += 0x1u;  /* 0C065944 add #imm,Rn */
	r8 = (u32)(s32)(s16)r7;  /* 0C065946 exts.w Rm,Rn */
	r2 = 0x9u;  /* 0C065948 mov #imm,Rn */
	r5 += 0x1Cu;  /* 0C06594A add #imm,Rn */
	T = (s32)r8 > (s32)r2;  /* 0C06594C cmp/gt Rm,Rn */
	{ u32 c_ = !T; r6 += 0xAu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0658BCu, 9); goto L_0C0658BC; } goto L_0C065952; }  /* 0C06594E bf/s */
L_0C065952: BLKS(0x0C065952u);
	r6 = r12;  /* 0C065952 mov Rm,Rn */
	r6 += 0x1u;  /* 0C065954 add #imm,Rn */
	r8 = 0x16Cu; UPD(0x0C065958u, 4);  /* 0C065956 mov.w @(disp,pc),Rn */
	r12 = (u32)(s32)(s16)r6;  /* 0C065958 exts.w Rm,Rn */
	r5 = 0x3u;  /* 0C06595A mov #imm,Rn */
	r13 += 0xAu;  /* 0C06595C add #imm,Rn */
	T = (s32)r12 > (s32)r5;  /* 0C06595E cmp/gt Rm,Rn */
	{ u32 c_ = !T; r11 += r8; /* slot add Rm,Rn */ if (c_) { UPD(0x0C0658ACu, 7); goto L_0C0658AC; } goto L_0C065964; }  /* 0C065960 bf/s */
L_0C065964: BLKS(0x0C065964u);
	r5 = 0xC2862E0u; UPD(0x0C065966u, 2);  /* 0C065964 mov.l @(disp,pc),Rn */
	r10 = 0xC3C43BCu; UPD(0x0C065968u, 1);  /* 0C065966 mov.l @(disp,pc),Rn */
	r7 = (u32)(s32)(s8)R8(r5); UPD(0x0C06596Au, 1);  /* 0C065968 mov.b @Rm,Rn */
	r13 = r10;  /* 0C06596A mov Rm,Rn */
	r2 = 0xC2862E1u; UPD(0x0C06596Eu, 2);  /* 0C06596C mov.l @(disp,pc),Rn */
	r13 += 0x1u;  /* 0C06596E add #imm,Rn */
	W8(r10, r7); UPD(0x0C065972u, 2);  /* 0C065970 mov.b Rm,@Rn */
	r3 = (u32)(s32)(s8)R8(r2); UPD(0x0C065974u, 1);  /* 0C065972 mov.b @Rm,Rn */
	r10 += 0x3u;  /* 0C065974 add #imm,Rn */
	r0 = 0xC2862E2u; UPD(0x0C065978u, 2);  /* 0C065976 mov.l @(disp,pc),Rn */
	W8(r13, r3); UPD(0x0C06597Au, 1);  /* 0C065978 mov.b Rm,@Rn */
	r4 = (u32)(s32)(s8)R8(r0); UPD(0x0C06597Cu, 1);  /* 0C06597A mov.b @Rm,Rn */
	r13 += 0x1u;  /* 0C06597C add #imm,Rn */
	r12 = 0xC2862E3u; UPD(0x0C065980u, 2);  /* 0C06597E mov.l @(disp,pc),Rn */
	r0 = r9;  /* 0C065980 mov Rm,Rn */
	W8(r13, r4); UPD(0x0C065984u, 2);  /* 0C065982 mov.b Rm,@Rn */
	r11 = (u32)(s32)(s8)R8(r12); UPD(0x0C065986u, 1);  /* 0C065984 mov.b @Rm,Rn */
	W8(r10, r11); UPD(0x0C065988u, 1);  /* 0C065986 mov.b Rm,@Rn */
	r15 = r14;  /* 0C065988 mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06598Cu, 2);  /* 0C06598A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C06598Eu, 1);  /* 0C06598C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C065990u, 1);  /* 0C06598E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C065992u, 1);  /* 0C065990 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C065994u, 1);  /* 0C065992 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C065996u, 1);  /* 0C065994 mov.l @Rm+,Rn */
	IF(0x0C065996u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C065996 rts */
}

/* FUN_0c0659c0 */
void blk_f_0C0659C0(sh3_t *c)
{
	LOCALS;
L_0C0659C0: BLKS(0x0C0659C0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0659C2u, 1);  /* 0C0659C0 mov.l Rm,@-Rn */
	r5 = 0x0u;  /* 0C0659C2 mov #imm,Rn */
	r0 = 0xC3C542Au; UPD(0x0C0659C6u, 2);  /* 0C0659C4 mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s8)R8(r0); UPD(0x0C0659C8u, 1);  /* 0C0659C6 mov.b @Rm,Rn */
	r3 = 0xC1734A0u; UPD(0x0C0659CAu, 1);  /* 0C0659C8 mov.l @(disp,pc),Rn */
	r0 = r2 & 0xFF;  /* 0C0659CA extu.b Rm,Rn */
	IF(0x0C0659CCu); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0659CEu, 2);  /* 0C0659CC mov.b @(r0,Rm),Rn */
	T = r0 == 0x2u;  /* 0C0659CE cmp/eq #imm,r0 */
	r3 = 0xC2B1810u; UPD(0x0C0659D2u, 2);  /* 0C0659D0 mov.l @(disp,pc),Rn */
	W8(r3, r2); UPD(0x0C0659D4u, 1);  /* 0C0659D2 mov.b Rm,@Rn */
	r7 = 0xC3C43D4u; UPD(0x0C0659D6u, 1);  /* 0C0659D4 mov.l @(disp,pc),Rn */
	r2 = 0xC1734A4u; UPD(0x0C0659D8u, 1);  /* 0C0659D6 mov.l @(disp,pc),Rn */
	W8(r7, r5); UPD(0x0C0659DAu, 1);  /* 0C0659D8 mov.b Rm,@Rn */
	IF(0x0C0659DAu); r3 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C0659DCu, 1);  /* 0C0659DA mov.b @(r0,Rm),Rn */
	r7 += 0x1u;  /* 0C0659DC add #imm,Rn */
	r6 = 0xC2A6D68u; UPD(0x0C0659E0u, 2);  /* 0C0659DE mov.l @(disp,pc),Rn */
	W8(r7, r3); UPD(0x0C0659E2u, 1);  /* 0C0659E0 mov.b Rm,@Rn */
	r2 = 0xC1734A8u; UPD(0x0C0659E4u, 1);  /* 0C0659E2 mov.l @(disp,pc),Rn */
	W8(r6, r5); UPD(0x0C0659E6u, 1);  /* 0C0659E4 mov.b Rm,@Rn */
	IF(0x0C0659E6u); r7 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C0659E8u, 1);  /* 0C0659E6 mov.b @(r0,Rm),Rn */
	r6 += 0x1u;  /* 0C0659E8 add #imm,Rn */
	W8(r6, r7); UPD(0x0C0659ECu, 2);  /* 0C0659EA mov.b Rm,@Rn */
	r4 = 0xC297488u; UPD(0x0C0659EEu, 1);  /* 0C0659EC mov.l @(disp,pc),Rn */
	r6 = 0xC1734ACu; UPD(0x0C0659F0u, 1);  /* 0C0659EE mov.l @(disp,pc),Rn */
	W8(r4, r5); UPD(0x0C0659F2u, 1);  /* 0C0659F0 mov.b Rm,@Rn */
	IF(0x0C0659F2u); r3 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C0659F4u, 1);  /* 0C0659F2 mov.b @(r0,Rm),Rn */
	r4 += 0x1u;  /* 0C0659F4 add #imm,Rn */
	W8(r4, r3); UPD(0x0C0659F8u, 2);  /* 0C0659F6 mov.b Rm,@Rn */
	IF(0x0C0659F8u); r0 = T;  /* 0C0659F8 movt Rn */
	r3 = 0xC3C414Cu; UPD(0x0C0659FCu, 2);  /* 0C0659FA mov.l @(disp,pc),Rn */
	r7 = (u32)(s32)(s8)R8(r3); UPD(0x0C0659FEu, 1);  /* 0C0659FC mov.b @Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C0659FE tst Rm,Rn */
	IF(0x0C065A00u); r2 = T;  /* 0C065A00 movt Rn */
	r0 &= r2;  /* 0C065A02 and Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C065A04 tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C065A60u, 7); goto L_0C065A60; } goto L_0C065A0A; }  /* 0C065A06 bt/s */
L_0C065A0A: BLKS(0x0C065A0Au);
	r2 = r3;  /* 0C065A0A mov Rm,Rn */
	r2 += 0x1u;  /* 0C065A0C add #imm,Rn */
	W8(r2, r5); UPD(0x0C065A10u, 4);  /* 0C065A0E mov.b Rm,@Rn */
L_0C065A10: BLKS(0x0C065A10u);
	r6 = 0xC2860B1u; UPD(0x0C065A12u, 1);  /* 0C065A10 mov.l @(disp,pc),Rn */
	r3 = r7 & 0xFF;  /* 0C065A12 extu.b Rm,Rn */
	r4 = 0xC239481u; UPD(0x0C065A16u, 2);  /* 0C065A14 mov.l @(disp,pc),Rn */
	T = (r3 & r3) == 0;  /* 0C065A16 tst Rm,Rn */
	W8(r6, r5); UPD(0x0C065A1Au, 2);  /* 0C065A18 mov.b Rm,@Rn */
	W8(r4, r5); UPD(0x0C065A1Cu, 1);  /* 0C065A1A mov.b Rm,@Rn */
	{ u32 v_ = r5; r6 -= 1; W8(r6, v_); } UPD(0x0C065A1Eu, 1);  /* 0C065A1C mov.b Rm,@-Rn */
	{ u32 c_ = !T; { u32 v_ = r5; r4 -= 1; W8(r4, v_); } /* slot mov.b Rm,@-Rn */ if (c_) { UPD(0x0C065A26u, 3); goto L_0C065A26; } UPD(0x0C065A22u, 1); goto L_0C065A22; }  /* 0C065A1E bf/s */
L_0C065A22: BLKS(0x0C065A22u);
	r5 = 0xC3C8690u; UPD(0x0C065A24u, 1);  /* 0C065A22 mov.l @(disp,pc),Rn */
	W8(r5, r3); UPD(0x0C065A26u, 1);  /* 0C065A24 mov.b Rm,@Rn */
L_0C065A26: BLKS(0x0C065A26u);
	r7 = (u32)(s32)(s8)R8(r2); UPD(0x0C065A28u, 1);  /* 0C065A26 mov.b @Rm,Rn */
	r2 = r7 & 0xFF;  /* 0C065A28 extu.b Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C065A2A tst Rm,Rn */
	if (!T) { UPD(0x0C065A32u, 5); goto L_0C065A32; }  /* 0C065A2C bf */
L_0C065A2E: BLKS(0x0C065A2Eu);
	r3 = 0xC3C8691u; UPD(0x0C065A30u, 1);  /* 0C065A2E mov.l @(disp,pc),Rn */
	W8(r3, r2); UPD(0x0C065A32u, 1);  /* 0C065A30 mov.b Rm,@Rn */
L_0C065A32: BLKS(0x0C065A32u);
	r0 = 0xC234BA8u; UPD(0x0C065A34u, 1);  /* 0C065A32 mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s8)R8(r0); UPD(0x0C065A36u, 1);  /* 0C065A34 mov.b @Rm,Rn */
	r7 = 0xC172BCCu; UPD(0x0C065A38u, 1);  /* 0C065A36 mov.l @(disp,pc),Rn */
	r0 = r2 & 0xFF;  /* 0C065A38 extu.b Rm,Rn */
	IF(0x0C065A3Au); r0 <<= 2;  /* 0C065A3A shll2 Rn */
	r6 = 0xC172C18u; UPD(0x0C065A3Eu, 3);  /* 0C065A3C mov.l @(disp,pc),Rn */
	IF(0x0C065A3Eu); r2 = R32(r0 + r7); UPD(0x0C065A40u, 1);  /* 0C065A3E mov.l @(r0,Rm),Rn */
	r5 = 0xC3C4150u; UPD(0x0C065A42u, 1);  /* 0C065A40 mov.l @(disp,pc),Rn */
	IF(0x0C065A42u); r4 = R32(r0 + r6); UPD(0x0C065A44u, 1);  /* 0C065A42 mov.l @(r0,Rm),Rn */
	T = (r4 & r4) == 0;  /* 0C065A44 tst Rm,Rn */
	{ u32 c_ = !T; W32(r5, r2); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C065A4Cu, 4); goto L_0C065A4C; } UPD(0x0C065A4Au, 1); goto L_0C065A4A; }  /* 0C065A46 bf/s */
L_0C065A4A: BLKS(0x0C065A4Au);
	r2 = 0x3B9ACA00u; UPD(0x0C065A4Cu, 1);  /* 0C065A4A mov.l @(disp,pc),Rn */
L_0C065A4C: BLKS(0x0C065A4Cu);
	r3 = 0xC2B181Cu; UPD(0x0C065A4Eu, 1);  /* 0C065A4C mov.l @(disp,pc),Rn */
	W32(r3, r2); UPD(0x0C065A50u, 1);  /* 0C065A4E mov.l Rm,@Rn */
	r15 = r14;  /* 0C065A50 mov Rm,Rn */
	IF(0x0C065A52u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C065A52 rts */
L_0C065A60: BLKS(0x0C065A60u);
	r2 = r3;  /* 0C065A60 mov Rm,Rn */
	{ r2 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C065A10u, 4); goto L_0C065A10; }  /* 0C065A62 bra */
}

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


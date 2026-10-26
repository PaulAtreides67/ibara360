#include "recomp.h"
#include "blk_recomp_funcs.h"

void blk_f_0C085F70(sh3_t *c)
{
	LOCALS;
	goto L_0C085F70;
L_0C0834A0: BLKS(0x0C0834A0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0834A2u, 1);  /* 0C0834A0 mov.l Rm,@-Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C0834A2 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0834A6u, 2);  /* 0C0834A4 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r5;  /* 0C0834A6 exts.w Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0834AAu, 2);  /* 0C0834A8 mov.l Rm,@-Rn */
	r6 = 0xB4u; UPD(0x0C0834ACu, 1);  /* 0C0834AA mov.w @(disp,pc),Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0834AEu, 1);  /* 0C0834AC mov.l Rm,@-Rn */
	IF(0x0C0834AEu); MACL = r4 * r6;  /* 0C0834AE mul.l Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0834B2u, 3);  /* 0C0834B0 mov.l Rm,@-Rn */
	IF(0x0C0834B2u); r10 = MACL;  /* 0C0834B2 sts macl,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0834B6u, 2);  /* 0C0834B4 mov.l Rm,@-Rn */
	IF(0x0C0834B6u); MACL = r8 * r6;  /* 0C0834B6 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0834BAu, 3);  /* 0C0834B8 mov.l Rm,@-Rn */
	r2 = 0xC286578u; UPD(0x0C0834BCu, 1);  /* 0C0834BA mov.l @(disp,pc),Rn */
	IF(0x0C0834BCu); r8 = MACL;  /* 0C0834BC sts macl,Rn */
	IF(0x0C0834BEu); r15 -= 4; W32(r15, PR); UPD(0x0C0834C0u, 2);  /* 0C0834BE sts.l pr,@-Rn */
	r10 += r2;  /* 0C0834C0 add Rm,Rn */
	r8 += r2;  /* 0C0834C2 add Rm,Rn */
	r11 = R32(r10); UPD(0x0C0834C6u, 3);  /* 0C0834C4 mov.l @Rm,Rn */
	r6 += 0x4Cu;  /* 0C0834C6 add #imm,Rn */
	r3 = R32(r8); UPD(0x0C0834CAu, 2);  /* 0C0834C8 mov.l @Rm,Rn */
	r14 = r15;  /* 0C0834CA mov Rm,Rn */
	r0 = 0xFFFFFEFFu; UPD(0x0C0834CEu, 2);  /* 0C0834CC mov.w @(disp,pc),Rn */
	r3 &= r6;  /* 0C0834CE and Rm,Rn */
	r11 &= r0;  /* 0C0834D0 and Rm,Rn */
	r11 |= r3;  /* 0C0834D2 or Rm,Rn */
	W32(r10, r11); UPD(0x0C0834D6u, 4);  /* 0C0834D4 mov.l Rm,@Rn */
	r13 = 0x84u; UPD(0x0C0834D8u, 1);  /* 0C0834D6 mov.w @(disp,pc),Rn */
	r11 = r10;  /* 0C0834D8 mov Rm,Rn */
	r11 += r13;  /* 0C0834DA add Rm,Rn */
	r13 += r8;  /* 0C0834DC add Rm,Rn */
	r13 += 0x2u;  /* 0C0834DE add #imm,Rn */
	r9 = (u32)(s32)(s16)R16(r13); UPD(0x0C0834E2u, 5);  /* 0C0834E0 mov.w @Rm,Rn */
	r11 += 0x2u;  /* 0C0834E2 add #imm,Rn */
	W16(r11, r9); UPD(0x0C0834E6u, 2);  /* 0C0834E4 mov.w Rm,@Rn */
	r12 = 0x98u; UPD(0x0C0834E8u, 1);  /* 0C0834E6 mov.w @(disp,pc),Rn */
	r9 = r10;  /* 0C0834E8 mov Rm,Rn */
	r9 += r12;  /* 0C0834EA add Rm,Rn */
	r12 += r8;  /* 0C0834EC add Rm,Rn */
	r12 += 0x2u;  /* 0C0834EE add #imm,Rn */
	r0 = 0xC0A8AE0u; UPD(0x0C0834F2u, 5);  /* 0C0834F0 mov.l @(disp,pc),Rn */
	r9 += 0x2u;  /* 0C0834F2 add #imm,Rn */
	r7 = (u32)(s32)(s8)R8(r12); UPD(0x0C0834F6u, 2);  /* 0C0834F4 mov.b @Rm,Rn */
	r5 = R32(r8 + 0xCu); UPD(0x0C0834F8u, 1);  /* 0C0834F6 mov.l @(disp,Rm),Rn */
	W8(r9, r7); UPD(0x0C0834FAu, 1);  /* 0C0834F8 mov.b Rm,@Rn */
	IF(0x0C0834FAu); { u32 t_ = r0; PR = 0x0C0834FEu; W32(r10 + 0xCu, r5); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C0834FEu); }  /* 0C0834FA jsr @Rn */
L_0C0834FE: BLKS(0x0C0834FEu);
	r0 = 0x88u; UPD(0x0C083500u, 1);  /* 0C0834FE mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)R16(r11); UPD(0x0C083502u, 1);  /* 0C083500 mov.w @Rm,Rn */
	IF(0x0C083502u); r1 = (u32)(s32)(s16)R16(r0 + r10); UPD(0x0C083504u, 1);  /* 0C083502 mov.w @(r0,Rm),Rn */
	r6 = 0xC069B20u; UPD(0x0C083506u, 1);  /* 0C083504 mov.l @(disp,pc),Rn */
	r4 += r1;  /* 0C083506 add Rm,Rn */
	r12 = (u32)(s32)(s16)r4;  /* 0C083508 exts.w Rm,Rn */
	r4 = r12;  /* 0C08350A mov Rm,Rn */
	IF(0x0C08350Cu); { u32 t_ = r6; PR = 0x0C083510u; r5 = R32(r10 + 0x2Cu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 5); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C083510u); }  /* 0C08350C jsr @Rn */
L_0C083510: BLKS(0x0C083510u);
	r3 = R32(r8 + 0x24u); UPD(0x0C083512u, 1);  /* 0C083510 mov.l @(disp,Rm),Rn */
	r4 = r12;  /* 0C083512 mov Rm,Rn */
	r13 = 0xC069AF0u; UPD(0x0C083516u, 2);  /* 0C083514 mov.l @(disp,pc),Rn */
	r3 += r0;  /* 0C083516 add Rm,Rn */
	W32(r10 + 0x24u, r3); UPD(0x0C08351Au, 2);  /* 0C083518 mov.l Rm,@(disp,Rn) */
	IF(0x0C08351Au); { u32 t_ = r13; PR = 0x0C08351Eu; r5 = R32(r10 + 0x2Cu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C08351Eu); }  /* 0C08351A jsr @Rn */
L_0C08351E: BLKS(0x0C08351Eu);
	r2 = R32(r8 + 0x28u); UPD(0x0C083520u, 1);  /* 0C08351E mov.l @(disp,Rm),Rn */
	r2 += r0;  /* 0C083520 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C083524u, 2);  /* 0C083522 mov.b @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C083524 tst Rm,Rn */
	{ u32 c_ = T; W32(r10 + 0x28u, r2); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C08353Au, 4); goto L_0C08353A; } UPD(0x0C08352Au, 1); goto L_0C08352A; }  /* 0C083526 bt/s */
L_0C08352A: BLKS(0x0C08352Au);
	r2 = 0x9Du; UPD(0x0C08352Cu, 1);  /* 0C08352A mov.w @(disp,pc),Rn */
	r2 += r10;  /* 0C08352C add Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r2); UPD(0x0C083530u, 2);  /* 0C08352E mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C083530 add #imm,Rn */
	r0 = r4 & 0xFF;  /* 0C083532 extu.b Rm,Rn */
	T = r0 == 0x4u;  /* 0C083534 cmp/eq #imm,r0 */
	{ u32 c_ = T; W8(r2, r4); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C083550u, 6); goto L_0C083550; } UPD(0x0C08353Au, 1); goto L_0C08353A; }  /* 0C083536 bt/s */
L_0C08353A: BLKS(0x0C08353Au);
	r15 = r14;  /* 0C08353A mov Rm,Rn */
	IF(0x0C08353Cu); PR = R32(r15); r15 += 4; UPD(0x0C08353Eu, 2);  /* 0C08353C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C083540u, 1);  /* 0C08353E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C083542u, 1);  /* 0C083540 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C083544u, 1);  /* 0C083542 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C083546u, 1);  /* 0C083544 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C083548u, 1);  /* 0C083546 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08354Au, 1);  /* 0C083548 mov.l @Rm+,Rn */
	IF(0x0C08354Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08354A rts */
L_0C083550: BLKS(0x0C083550u);
	r12 = (u32)(s32)(s16)R16(r11); UPD(0x0C083552u, 1);  /* 0C083550 mov.w @Rm,Rn */
	r5 = 0x0u;  /* 0C083552 mov #imm,Rn */
	r7 = 0xC069B20u; UPD(0x0C083556u, 2);  /* 0C083554 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C083556 mov Rm,Rn */
	W8(r2, r5); UPD(0x0C08355Au, 2);  /* 0C083558 mov.b Rm,@Rn */
	r11 = 0xC0000u; UPD(0x0C08355Cu, 1);  /* 0C08355A mov.l @(disp,pc),Rn */
	IF(0x0C08355Cu); { u32 t_ = r7; PR = 0x0C083560u; r5 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C083560u); }  /* 0C08355C jsr @Rn */
L_0C083560: BLKS(0x0C083560u);
	r9 = R32(r10 + 0x24u); UPD(0x0C083562u, 1);  /* 0C083560 mov.l @(disp,Rm),Rn */
	r4 = r12;  /* 0C083562 mov Rm,Rn */
	r9 += r0;  /* 0C083564 add Rm,Rn */
	IF(0x0C083566u); { u32 t_ = r13; PR = 0x0C08356Au; r5 = r11; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C08356Au); }  /* 0C083566 jsr @Rn */
L_0C08356A: BLKS(0x0C08356Au);
	r8 = R32(r10 + 0x28u); UPD(0x0C08356Cu, 1);  /* 0C08356A mov.l @(disp,Rm),Rn */
	r4 = r9;  /* 0C08356C mov Rm,Rn */
	r8 += r0;  /* 0C08356E add Rm,Rn */
	r0 = 0xA9u; UPD(0x0C083572u, 3);  /* 0C083570 mov.w @(disp,pc),Rn */
	r5 = r8;  /* 0C083572 mov Rm,Rn */
	r13 = 0xC0BBF10u; UPD(0x0C083576u, 2);  /* 0C083574 mov.l @(disp,pc),Rn */
	IF(0x0C083576u); r1 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C083578u, 1);  /* 0C083576 mov.b @(r0,Rm),Rn */
	IF(0x0C083578u); { u32 t_ = r13; PR = 0x0C08357Cu; r6 = r1 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BBF10, 0x0C0BBF10u, 0x0C08357Cu); }  /* 0C083578 jsr @Rn */
L_0C08357C: BLKS(0x0C08357Cu);
	T = (r0 & r0) == 0;  /* 0C08357C tst Rm,Rn */
	if (T) { UPD(0x0C08353Au, 4); goto L_0C08353A; }  /* 0C08357E bt */
L_0C083580: BLKS(0x0C083580u);
	r15 += 0xFFFFFFFCu;  /* 0C083580 add #imm,Rn */
	r0 = 0xA1u; UPD(0x0C083584u, 2);  /* 0C083582 mov.w @(disp,pc),Rn */
	IF(0x0C083584u); r4 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C083586u, 1);  /* 0C083584 mov.b @(r0,Rm),Rn */
	r5 = r9;  /* 0C083586 mov Rm,Rn */
	r3 = R32(r10 + 0x30u); UPD(0x0C08358Au, 2);  /* 0C083588 mov.l @(disp,Rm),Rn */
	r6 = r8;  /* 0C08358A mov Rm,Rn */
	r10 = 0xC0BB7B0u; UPD(0x0C08358Eu, 2);  /* 0C08358C mov.l @(disp,pc),Rn */
	r7 = r12;  /* 0C08358E mov Rm,Rn */
	IF(0x0C083590u); { u32 t_ = r10; PR = 0x0C083594u; W32(r15, r3); /* slot mov.l Rm,@Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BB7B0, 0x0C0BB7B0u, 0x0C083594u); }  /* 0C083590 jsr @Rn */
L_0C083594: BLKS(0x0C083594u);
	{ IF(0x0C083596u); ; /* slot nop */ UPD(0x0C08353Au, 3); goto L_0C08353A; }  /* 0C083594 bra */
L_0C0835D0: BLKS(0x0C0835D0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0835D2u, 1);  /* 0C0835D0 mov.l Rm,@-Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C0835D2 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0835D6u, 2);  /* 0C0835D4 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r5;  /* 0C0835D6 exts.w Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0835DAu, 2);  /* 0C0835D8 mov.l Rm,@-Rn */
	r6 = 0xB4u; UPD(0x0C0835DCu, 1);  /* 0C0835DA mov.w @(disp,pc),Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0835DEu, 1);  /* 0C0835DC mov.l Rm,@-Rn */
	IF(0x0C0835DEu); MACL = r4 * r6;  /* 0C0835DE mul.l Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0835E2u, 3);  /* 0C0835E0 mov.l Rm,@-Rn */
	IF(0x0C0835E2u); r10 = MACL;  /* 0C0835E2 sts macl,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0835E6u, 2);  /* 0C0835E4 mov.l Rm,@-Rn */
	IF(0x0C0835E6u); MACL = r8 * r6;  /* 0C0835E6 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0835EAu, 3);  /* 0C0835E8 mov.l Rm,@-Rn */
	r3 = 0xC286578u; UPD(0x0C0835ECu, 1);  /* 0C0835EA mov.l @(disp,pc),Rn */
	IF(0x0C0835ECu); r8 = MACL;  /* 0C0835EC sts macl,Rn */
	IF(0x0C0835EEu); r15 -= 4; W32(r15, PR); UPD(0x0C0835F0u, 2);  /* 0C0835EE sts.l pr,@-Rn */
	r10 += r3;  /* 0C0835F0 add Rm,Rn */
	r8 += r3;  /* 0C0835F2 add Rm,Rn */
	r11 = R32(r10); UPD(0x0C0835F6u, 3);  /* 0C0835F4 mov.l @Rm,Rn */
	r6 += 0x4Cu;  /* 0C0835F6 add #imm,Rn */
	r2 = R32(r8); UPD(0x0C0835FAu, 2);  /* 0C0835F8 mov.l @Rm,Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0835FA add #imm,Rn */
	r0 = 0xFFFFFEFFu; UPD(0x0C0835FEu, 2);  /* 0C0835FC mov.w @(disp,pc),Rn */
	r2 &= r6;  /* 0C0835FE and Rm,Rn */
	r11 &= r0;  /* 0C083600 and Rm,Rn */
	r11 |= r2;  /* 0C083602 or Rm,Rn */
	W32(r10, r11); UPD(0x0C083606u, 4);  /* 0C083604 mov.l Rm,@Rn */
	r14 = r15;  /* 0C083606 mov Rm,Rn */
	r13 = 0x84u; UPD(0x0C08360Au, 2);  /* 0C083608 mov.w @(disp,pc),Rn */
	r11 = r10;  /* 0C08360A mov Rm,Rn */
	r11 += r13;  /* 0C08360C add Rm,Rn */
	r13 += r8;  /* 0C08360E add Rm,Rn */
	r13 += 0x2u;  /* 0C083610 add #imm,Rn */
	r9 = (u32)(s32)(s16)R16(r13); UPD(0x0C083614u, 5);  /* 0C083612 mov.w @Rm,Rn */
	r11 += 0x2u;  /* 0C083614 add #imm,Rn */
	W16(r11, r9); UPD(0x0C083618u, 2);  /* 0C083616 mov.w Rm,@Rn */
	r12 = 0x98u; UPD(0x0C08361Au, 1);  /* 0C083618 mov.w @(disp,pc),Rn */
	r9 = r10;  /* 0C08361A mov Rm,Rn */
	r9 += r12;  /* 0C08361C add Rm,Rn */
	r12 += r8;  /* 0C08361E add Rm,Rn */
	r12 += 0x2u;  /* 0C083620 add #imm,Rn */
	r0 = 0xC0A8AE0u; UPD(0x0C083624u, 5);  /* 0C083622 mov.l @(disp,pc),Rn */
	r9 += 0x2u;  /* 0C083624 add #imm,Rn */
	r7 = (u32)(s32)(s8)R8(r12); UPD(0x0C083628u, 2);  /* 0C083626 mov.b @Rm,Rn */
	r5 = R32(r8 + 0xCu); UPD(0x0C08362Au, 1);  /* 0C083628 mov.l @(disp,Rm),Rn */
	W8(r9, r7); UPD(0x0C08362Cu, 1);  /* 0C08362A mov.b Rm,@Rn */
	IF(0x0C08362Cu); { u32 t_ = r0; PR = 0x0C083630u; W32(r10 + 0xCu, r5); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C083630u); }  /* 0C08362C jsr @Rn */
L_0C083630: BLKS(0x0C083630u);
	r0 = 0x88u; UPD(0x0C083632u, 1);  /* 0C083630 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)R16(r11); UPD(0x0C083634u, 1);  /* 0C083632 mov.w @Rm,Rn */
	IF(0x0C083634u); r1 = (u32)(s32)(s16)R16(r0 + r10); UPD(0x0C083636u, 1);  /* 0C083634 mov.w @(r0,Rm),Rn */
	r6 = 0xC069B20u; UPD(0x0C083638u, 1);  /* 0C083636 mov.l @(disp,pc),Rn */
	r4 += r1;  /* 0C083638 add Rm,Rn */
	r12 = (u32)(s32)(s16)r4;  /* 0C08363A exts.w Rm,Rn */
	r4 = r12;  /* 0C08363C mov Rm,Rn */
	IF(0x0C08363Eu); { u32 t_ = r6; PR = 0x0C083642u; r5 = R32(r10 + 0x2Cu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 5); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C083642u); }  /* 0C08363E jsr @Rn */
L_0C083642: BLKS(0x0C083642u);
	r3 = R32(r8 + 0x24u); UPD(0x0C083644u, 1);  /* 0C083642 mov.l @(disp,Rm),Rn */
	r4 = r12;  /* 0C083644 mov Rm,Rn */
	r13 = 0xC069AF0u; UPD(0x0C083648u, 2);  /* 0C083646 mov.l @(disp,pc),Rn */
	r3 += r0;  /* 0C083648 add Rm,Rn */
	W32(r10 + 0x24u, r3); UPD(0x0C08364Cu, 2);  /* 0C08364A mov.l Rm,@(disp,Rn) */
	IF(0x0C08364Cu); { u32 t_ = r13; PR = 0x0C083650u; r5 = R32(r10 + 0x2Cu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C083650u); }  /* 0C08364C jsr @Rn */
L_0C083650: BLKS(0x0C083650u);
	r2 = R32(r8 + 0x28u); UPD(0x0C083652u, 1);  /* 0C083650 mov.l @(disp,Rm),Rn */
	r2 += r0;  /* 0C083652 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C083656u, 2);  /* 0C083654 mov.b @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C083656 tst Rm,Rn */
	{ u32 c_ = !T; W32(r10 + 0x28u, r2); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C083680u, 4); goto L_0C083680; } UPD(0x0C08365Cu, 1); goto L_0C08365C; }  /* 0C083658 bf/s */
L_0C08365C: BLKS(0x0C08365Cu);
	r14 += 0x4u;  /* 0C08365C add #imm,Rn */
	UPD(0x0C08365Eu, 1);
L_0C08365E: BLKS(0x0C08365Eu);
	r15 = r14;  /* 0C08365E mov Rm,Rn */
	IF(0x0C083660u); PR = R32(r15); r15 += 4; UPD(0x0C083662u, 2);  /* 0C083660 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C083664u, 1);  /* 0C083662 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C083666u, 1);  /* 0C083664 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C083668u, 1);  /* 0C083666 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08366Au, 1);  /* 0C083668 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08366Cu, 1);  /* 0C08366A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08366Eu, 1);  /* 0C08366C mov.l @Rm+,Rn */
	IF(0x0C08366Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08366E rts */
L_0C083680: BLKS(0x0C083680u);
	r7 = 0xC069B20u; UPD(0x0C083682u, 1);  /* 0C083680 mov.l @(disp,pc),Rn */
	r12 = (u32)(s32)(s16)R16(r11); UPD(0x0C083684u, 1);  /* 0C083682 mov.w @Rm,Rn */
	r9 = 0xC0000u; UPD(0x0C083686u, 1);  /* 0C083684 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C083686 mov Rm,Rn */
	IF(0x0C083688u); { u32 t_ = r7; PR = 0x0C08368Cu; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C08368Cu); }  /* 0C083688 jsr @Rn */
L_0C08368C: BLKS(0x0C08368Cu);
	r11 = R32(r10 + 0x24u); UPD(0x0C08368Eu, 1);  /* 0C08368C mov.l @(disp,Rm),Rn */
	r5 = r9;  /* 0C08368E mov Rm,Rn */
	r11 += r0;  /* 0C083690 add Rm,Rn */
	IF(0x0C083692u); { u32 t_ = r13; PR = 0x0C083696u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C083696u); }  /* 0C083692 jsr @Rn */
L_0C083696: BLKS(0x0C083696u);
	r1 = 0xA9u; UPD(0x0C083698u, 1);  /* 0C083696 mov.w @(disp,pc),Rn */
	r1 += r10;  /* 0C083698 add Rm,Rn */
	W32(r14, r1); UPD(0x0C08369Cu, 2);  /* 0C08369A mov.l Rm,@Rn */
	r9 = R32(r10 + 0x28u); UPD(0x0C08369Eu, 1);  /* 0C08369C mov.l @(disp,Rm),Rn */
	r4 = (u32)(s32)(s8)R8(r1); UPD(0x0C0836A0u, 1);  /* 0C08369E mov.b @Rm,Rn */
	r9 += r0;  /* 0C0836A0 add Rm,Rn */
	r8 = 0xC0BBF10u; UPD(0x0C0836A4u, 2);  /* 0C0836A2 mov.l @(disp,pc),Rn */
	r6 = r4 & 0xFF;  /* 0C0836A4 extu.b Rm,Rn */
	r4 = r11;  /* 0C0836A6 mov Rm,Rn */
	IF(0x0C0836A8u); { u32 t_ = r8; PR = 0x0C0836ACu; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0BBF10, 0x0C0BBF10u, 0x0C0836ACu); }  /* 0C0836A8 jsr @Rn */
L_0C0836AC: BLKS(0x0C0836ACu);
	T = (r0 & r0) == 0;  /* 0C0836AC tst Rm,Rn */
	if (T) { UPD(0x0C08365Cu, 4); goto L_0C08365C; }  /* 0C0836AE bt */
L_0C0836B0: BLKS(0x0C0836B0u);
	r5 = R32(r10 + 0x30u); UPD(0x0C0836B2u, 1);  /* 0C0836B0 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0836B2 add #imm,Rn */
	r8 = 0xC0BAD60u; UPD(0x0C0836B6u, 2);  /* 0C0836B4 mov.l @(disp,pc),Rn */
	r6 = r9;  /* 0C0836B6 mov Rm,Rn */
	W32(r15, r5); UPD(0x0C0836BAu, 2);  /* 0C0836B8 mov.l Rm,@Rn */
	r7 = r12;  /* 0C0836BA mov Rm,Rn */
	r5 = r11;  /* 0C0836BC mov Rm,Rn */
	IF(0x0C0836BEu); { u32 t_ = r8; PR = 0x0C0836C2u; r4 = 0x6u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0BAD60, 0x0C0BAD60u, 0x0C0836C2u); }  /* 0C0836BE jsr @Rn */
L_0C0836C2: BLKS(0x0C0836C2u);
	r7 = 0x100u; UPD(0x0C0836C4u, 1);  /* 0C0836C2 mov.w @(disp,pc),Rn */
	r15 += 0x4u;  /* 0C0836C4 add #imm,Rn */
	r11 = 0xC069B20u; UPD(0x0C0836C8u, 2);  /* 0C0836C6 mov.l @(disp,pc),Rn */
	r7 += r12;  /* 0C0836C8 add Rm,Rn */
	r9 = 0x80000u; UPD(0x0C0836CCu, 2);  /* 0C0836CA mov.l @(disp,pc),Rn */
	r12 = (u32)(s32)(s16)r7;  /* 0C0836CC exts.w Rm,Rn */
	r4 = r12;  /* 0C0836CE mov Rm,Rn */
	IF(0x0C0836D0u); { u32 t_ = r11; PR = 0x0C0836D4u; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0836D4u); }  /* 0C0836D0 jsr @Rn */
L_0C0836D4: BLKS(0x0C0836D4u);
	r11 = R32(r10 + 0x24u); UPD(0x0C0836D6u, 1);  /* 0C0836D4 mov.l @(disp,Rm),Rn */
	r5 = r9;  /* 0C0836D6 mov Rm,Rn */
	r4 = r12;  /* 0C0836D8 mov Rm,Rn */
	r8 = 0xC062780u; UPD(0x0C0836DCu, 3);  /* 0C0836DA mov.l @(disp,pc),Rn */
	IF(0x0C0836DCu); { u32 t_ = r13; PR = 0x0C0836E0u; r11 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0836E0u); }  /* 0C0836DC jsr @Rn */
L_0C0836E0: BLKS(0x0C0836E0u);
	r9 = R32(r10 + 0x28u); UPD(0x0C0836E2u, 1);  /* 0C0836E0 mov.l @(disp,Rm),Rn */
	r4 = 0xFu;  /* 0C0836E2 mov #imm,Rn */
	IF(0x0C0836E4u); { u32 t_ = r8; PR = 0x0C0836E8u; r9 += r0; /* slot add Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0836E8u); }  /* 0C0836E4 jsr @Rn */
L_0C0836E8: BLKS(0x0C0836E8u);
	r0 += r12;  /* 0C0836E8 add Rm,Rn */
	r0 += 0xFFFFFFF8u;  /* 0C0836EA add #imm,Rn */
	r12 = (u32)(s32)(s16)r0;  /* 0C0836EC exts.w Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0836F0u, 4);  /* 0C0836EE mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFECu;  /* 0C0836F0 add #imm,Rn */
	IF(0x0C0836F2u); r4 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C0836F4u, 2);  /* 0C0836F2 mov.b @(r0,Rm),Rn */
	r8 = r4 & 0xFF;  /* 0C0836F4 extu.b Rm,Rn */
	W32(r15, r8); UPD(0x0C0836F8u, 2);  /* 0C0836F6 mov.l Rm,@Rn */
	r4 = r12;  /* 0C0836F8 mov Rm,Rn */
	r0 = R32(r14); UPD(0x0C0836FCu, 2);  /* 0C0836FA mov.l @Rm,Rn */
	r2 = 0xC069B20u; UPD(0x0C0836FEu, 1);  /* 0C0836FC mov.l @(disp,pc),Rn */
	r3 = (u32)(s32)(s8)R8(r0); UPD(0x0C083700u, 1);  /* 0C0836FE mov.b @Rm,Rn */
	r8 = 0x20000u; UPD(0x0C083702u, 1);  /* 0C083700 mov.l @(disp,pc),Rn */
	r6 = r3 & 0xFF;  /* 0C083702 extu.b Rm,Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C083706u, 2);  /* 0C083704 mov.l Rm,@(disp,Rn) */
	IF(0x0C083706u); { u32 t_ = r2; PR = 0x0C08370Au; r5 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C08370Au); }  /* 0C083706 jsr @Rn */
L_0C08370A: BLKS(0x0C08370Au);
	r4 = r12;  /* 0C08370A mov Rm,Rn */
	r5 = r8;  /* 0C08370C mov Rm,Rn */
	IF(0x0C08370Eu); { u32 t_ = r13; PR = 0x0C083712u; W32(r15 + 0x8u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 4); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C083712u); }  /* 0C08370E jsr @Rn */
L_0C083712: BLKS(0x0C083712u);
	r5 = 0x808080u; UPD(0x0C083714u, 1);  /* 0C083712 mov.l @(disp,pc),Rn */
	r6 = r11;  /* 0C083714 mov Rm,Rn */
	W32(r15 + 0x10u, r5); UPD(0x0C083718u, 2);  /* 0C083716 mov.l Rm,@(disp,Rn) */
	r7 = r9;  /* 0C083718 mov Rm,Rn */
	W32(r15 + 0xCu, r0); UPD(0x0C08371Cu, 2);  /* 0C08371A mov.l Rm,@(disp,Rn) */
	r4 = R32(r10); UPD(0x0C08371Eu, 1);  /* 0C08371C mov.l @Rm,Rn */
	r10 = 0xC0BEEF0u; UPD(0x0C083720u, 1);  /* 0C08371E mov.l @(disp,pc),Rn */
	IF(0x0C083720u); { u32 t_ = r10; PR = 0x0C083724u; r5 = 0x7u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BEEF0, 0x0C0BEEF0u, 0x0C083724u); }  /* 0C083720 jsr @Rn */
L_0C083724: BLKS(0x0C083724u);
	{ r14 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C08365Eu, 3); goto L_0C08365E; }  /* 0C083724 bra */
L_0C085C90: BLKS(0x0C085C90u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C085C92u, 1);  /* 0C085C90 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C085C94u, 1);  /* 0C085C92 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C085C94 exts.w Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C085C98u, 2);  /* 0C085C96 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C085C9Au, 1);  /* 0C085C98 mov.l Rm,@-Rn */
	r3 = 0xB4u; UPD(0x0C085C9Cu, 1);  /* 0C085C9A mov.w @(disp,pc),Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C085C9Eu, 1);  /* 0C085C9C mov.l Rm,@-Rn */
	IF(0x0C085C9Eu); MACL = r8 * r3;  /* 0C085C9E mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C085CA2u, 3);  /* 0C085CA0 mov.l Rm,@-Rn */
	r0 = 0xC286578u; UPD(0x0C085CA4u, 1);  /* 0C085CA2 mov.l @(disp,pc),Rn */
	IF(0x0C085CA4u); r2 = MACL;  /* 0C085CA4 sts macl,Rn */
	IF(0x0C085CA6u); r15 -= 4; W32(r15, PR); UPD(0x0C085CA8u, 2);  /* 0C085CA6 sts.l pr,@-Rn */
	r0 += r2;  /* 0C085CA8 add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C085CACu, 2);  /* 0C085CAA mov.l @(disp,Rm),Rn */
	r0 = 0x16u;  /* 0C085CAC mov #imm,Rn */
	T = r2 > r0;  /* 0C085CAE cmp/hi Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C085CB8u, 5); goto L_0C085CB8; } goto L_0C085CB4; }  /* 0C085CB0 bf/s */
L_0C085CB4: BLKS(0x0C085CB4u);
	{ IF(0x0C085CB6u); ; /* slot nop */ UPD(0x0C085DD8u, 4); goto L_0C085DD8; }  /* 0C085CB4 bra */
L_0C085CB8: BLKS(0x0C085CB8u);
	r0 = 0xC085CC8u;  /* 0C085CB8 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C085CBA add Rm,Rn */
	IF(0x0C085CBCu); r4 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C085CBEu, 3);  /* 0C085CBC mov.w @(r0,Rm),Rn */
	IF(0x0C085CBEu); { u32 tv_ = (r4 + 0x0C085CC2u); u32 t_ = PHYS(tv_); IF(0x0C085CC0u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C085D00u: goto L_0C085D00; case 0x0C085E80u: goto L_0C085E80; case 0x0C085EC0u: goto L_0C085EC0; case 0x0C085F10u: goto L_0C085F10; default: JUMPD(tv_); } }  /* 0C085CBE braf Rn */
L_0C085D00: BLKS(0x0C085D00u);
	r9 = 0xC0A8B50u; UPD(0x0C085D02u, 1);  /* 0C085D00 mov.l @(disp,pc),Rn */
	IF(0x0C085D02u); { u32 t_ = r9; PR = 0x0C085D06u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C085D06u); }  /* 0C085D02 jsr @Rn */
L_0C085D06: BLKS(0x0C085D06u);
	IF(0x0C085D06u); T = (s32)r0 >= 0;  /* 0C085D06 cmp/pz Rn */
	{ u32 c_ = T; r10 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C085D10u, 4); goto L_0C085D10; } goto L_0C085D0C; }  /* 0C085D08 bt/s */
L_0C085D0C: BLKS(0x0C085D0Cu);
	{ IF(0x0C085D0Eu); ; /* slot nop */ UPD(0x0C085E80u, 4); goto L_0C085E80; }  /* 0C085D0C bra */
L_0C085D10: BLKS(0x0C085D10u);
	r0 = 0xB4u; UPD(0x0C085D12u, 1);  /* 0C085D10 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C085D12 add #imm,Rn */
	IF(0x0C085D14u); MACL = r8 * r0;  /* 0C085D14 mul.l Rm,Rn */
	r11 = 0xC286578u; UPD(0x0C085D18u, 4);  /* 0C085D16 mov.l @(disp,pc),Rn */
	IF(0x0C085D18u); r9 = MACL;  /* 0C085D18 sts macl,Rn */
	IF(0x0C085D1Au); MACL = r10 * r0;  /* 0C085D1A mul.l Rm,Rn */
	r9 += r11;  /* 0C085D1C add Rm,Rn */
	IF(0x0C085D1Eu); r0 = MACL;  /* 0C085D1E sts macl,Rn */
	r0 += r11;  /* 0C085D20 add Rm,Rn */
	r11 = 0xB0u; UPD(0x0C085D24u, 7);  /* 0C085D22 mov.w @(disp,pc),Rn */
	r4 = r0;  /* 0C085D24 mov Rm,Rn */
	IF(0x0C085D26u); r5 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C085D28u, 2);  /* 0C085D26 mov.b @(r0,Rm),Rn */
	r12 = r5 & 0xFF;  /* 0C085D28 extu.b Rm,Rn */
	W32(r15, r12); UPD(0x0C085D2Cu, 2);  /* 0C085D2A mov.l Rm,@Rn */
	r5 = 0xCu;  /* 0C085D2C mov #imm,Rn */
	r12 = 0xA8u; UPD(0x0C085D30u, 2);  /* 0C085D2E mov.w @(disp,pc),Rn */
	r4 += r12;  /* 0C085D30 add Rm,Rn */
	r4 += 0x1u;  /* 0C085D32 add #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r4); UPD(0x0C085D36u, 3);  /* 0C085D34 mov.b @Rm,Rn */
	r2 = r3 & 0xFF;  /* 0C085D36 extu.b Rm,Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C085D3Au, 2);  /* 0C085D38 mov.l Rm,@(disp,Rn) */
	r6 = R32(r0 + 0x24u); UPD(0x0C085D3Cu, 1);  /* 0C085D3A mov.l @(disp,Rm),Rn */
	r7 = R32(r0 + 0x28u); UPD(0x0C085D3Eu, 1);  /* 0C085D3C mov.l @(disp,Rm),Rn */
	r0 = 0xC0BD6F0u; UPD(0x0C085D40u, 1);  /* 0C085D3E mov.l @(disp,pc),Rn */
	IF(0x0C085D40u); { u32 t_ = r0; PR = 0x0C085D44u; r4 = R32(r9); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C085D44u); }  /* 0C085D40 jsr @Rn */
L_0C085D44: BLKS(0x0C085D44u);
	r0 = 0xC0C2360u; UPD(0x0C085D46u, 1);  /* 0C085D44 mov.l @(disp,pc),Rn */
	IF(0x0C085D46u); { u32 t_ = r0; PR = 0x0C085D4Au; r15 += 0x8u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C085D4Au); }  /* 0C085D46 jsr @Rn */
L_0C085D4A: BLKS(0x0C085D4Au);
	r0 &= 0x3u;  /* 0C085D4A and #imm,r0 */
	T = r0 == 0x1u;  /* 0C085D4C cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C085D56u, 5); goto L_0C085D56; }  /* 0C085D4E bf */
L_0C085D50: BLKS(0x0C085D50u);
	r0 = r9;  /* 0C085D50 mov Rm,Rn */
	{ IF(0x0C085D54u); r7 = (u32)(s32)(s8)R8(r0 + r11); /* slot mov.b @(r0,Rm),Rn */ UPD(0x0C085E60u, 4); goto L_0C085E60; }  /* 0C085D52 bra */
L_0C085D56: BLKS(0x0C085D56u);
	r6 = 0x1u;  /* 0C085D56 mov #imm,Rn */
	T = (s32)r0 > (s32)r6;  /* 0C085D58 cmp/gt Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x2u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C085E30u, 5); goto L_0C085E30; } goto L_0C085D5E; }  /* 0C085D5A bt/s */
L_0C085D5E: BLKS(0x0C085D5Eu);
	T = (r0 & r0) == 0;  /* 0C085D5E tst Rm,Rn */
	{ u32 c_ = T; r0 = r9; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C085E10u, 5); goto L_0C085E10; } UPD(0x0C085D64u, 1); goto L_0C085D64; }  /* 0C085D60 bt/s */
L_0C085D64: BLKS(0x0C085D64u);
	r3 = 0xB4u; UPD(0x0C085D66u, 1);  /* 0C085D64 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C085D66 add #imm,Rn */
	IF(0x0C085D68u); MACL = r8 * r3;  /* 0C085D68 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C085D6Cu, 4);  /* 0C085D6A mov.l @(disp,pc),Rn */
	r5 = 0xDu;  /* 0C085D6C mov #imm,Rn */
	IF(0x0C085D6Eu); r9 = MACL;  /* 0C085D6E sts macl,Rn */
	r9 += r0;  /* 0C085D70 add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C085D74u, 4);  /* 0C085D72 mov.w @(disp,pc),Rn */
	IF(0x0C085D74u); r2 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C085D76u, 1);  /* 0C085D74 mov.b @(r0,Rm),Rn */
	r7 = r2 & 0xFF;  /* 0C085D76 extu.b Rm,Rn */
	W32(r15, r7); UPD(0x0C085D7Au, 2);  /* 0C085D78 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C085D7A add #imm,Rn */
	IF(0x0C085D7Cu); r11 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C085D7Eu, 2);  /* 0C085D7C mov.b @(r0,Rm),Rn */
	r12 = r11 & 0xFF;  /* 0C085D7E extu.b Rm,Rn */
	W32(r15 + 0x4u, r12); UPD(0x0C085D82u, 2);  /* 0C085D80 mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BD6F0u; UPD(0x0C085D84u, 1);  /* 0C085D82 mov.l @(disp,pc),Rn */
	r4 = R32(r9); UPD(0x0C085D86u, 1);  /* 0C085D84 mov.l @Rm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C085D88u, 1);  /* 0C085D86 mov.l @(disp,Rm),Rn */
	r7 = R32(r9 + 0x28u); UPD(0x0C085D8Au, 1);  /* 0C085D88 mov.l @(disp,Rm),Rn */
L_0C085D8A: BLKS(0x0C085D8Au);
	IF(0x0C085D8Au); { u32 t_ = r0; PR = 0x0C085D8Eu; IF(0x0C085D8Cu); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C085D8Eu); }  /* 0C085D8A jsr @Rn */
L_0C085D8E: BLKS(0x0C085D8Eu);
	r7 = 0xB4u; UPD(0x0C085D90u, 1);  /* 0C085D8E mov.w @(disp,pc),Rn */
	IF(0x0C085D90u); MACL = r8 * r7;  /* 0C085D90 mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C085D94u, 3);  /* 0C085D92 mov.l @(disp,pc),Rn */
	IF(0x0C085D94u); r2 = MACL;  /* 0C085D94 sts macl,Rn */
	r2 += r6;  /* 0C085D96 add Rm,Rn */
	r0 = R32(r2 + 0x8u); UPD(0x0C085D9Au, 3);  /* 0C085D98 mov.l @(disp,Rm),Rn */
	T = r0 == 0x4u;  /* 0C085D9A cmp/eq #imm,r0 */
	{ u32 c_ = T; r15 += 0x8u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C085DF0u, 4); goto L_0C085DF0; } goto L_0C085DA0; }  /* 0C085D9C bt/s */
L_0C085DA0: BLKS(0x0C085DA0u);
	r12 = 0xA5u; UPD(0x0C085DA2u, 2);  /* 0C085DA0 mov.w @(disp,pc),Rn */
	r0 = r2;  /* 0C085DA2 mov Rm,Rn */
	IF(0x0C085DA4u); MACL = r10 * r7;  /* 0C085DA4 mul.l Rm,Rn */
	IF(0x0C085DA6u); r4 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C085DA8u, 4);  /* 0C085DA6 mov.b @(r0,Rm),Rn */
	IF(0x0C085DA8u); r9 = MACL;  /* 0C085DA8 sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C085DACu, 2);  /* 0C085DAA mov.w @(disp,pc),Rn */
	r9 += r6;  /* 0C085DAC add Rm,Rn */
	IF(0x0C085DAEu); r1 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C085DB0u, 2);  /* 0C085DAE mov.b @(r0,Rm),Rn */
	IF(0x0C085DB0u); r4 <<= 2;  /* 0C085DB0 shll2 Rn */
	r5 = 0xC199984u; UPD(0x0C085DB4u, 2);  /* 0C085DB2 mov.l @(disp,pc),Rn */
	r0 = r4;  /* 0C085DB4 mov Rm,Rn */
	IF(0x0C085DB6u); r4 = R32(r0 + r5); UPD(0x0C085DB8u, 2);  /* 0C085DB6 mov.l @(r0,Rm),Rn */
	r7 = r1 & 0xFF;  /* 0C085DB8 extu.b Rm,Rn */
	r5 = R32(r9 + 0x24u); UPD(0x0C085DBCu, 2);  /* 0C085DBA mov.l @(disp,Rm),Rn */
	r6 = R32(r9 + 0x28u); UPD(0x0C085DBEu, 1);  /* 0C085DBC mov.l @(disp,Rm),Rn */
L_0C085DBE: BLKS(0x0C085DBEu);
	r9 = 0xC07DF30u; UPD(0x0C085DC0u, 1);  /* 0C085DBE mov.l @(disp,pc),Rn */
	IF(0x0C085DC0u); { u32 t_ = r9; PR = 0x0C085DC4u; IF(0x0C085DC2u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C07DF30, 0x0C07DF30u, 0x0C085DC4u); }  /* 0C085DC0 jsr @Rn */
L_0C085DC4: BLKS(0x0C085DC4u);
	r2 = 0xB4u; UPD(0x0C085DC6u, 1);  /* 0C085DC4 mov.w @(disp,pc),Rn */
	IF(0x0C085DC6u); MACL = r10 * r2;  /* 0C085DC6 mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C085DCAu, 3);  /* 0C085DC8 mov.l @(disp,pc),Rn */
	IF(0x0C085DCAu); r10 = MACL;  /* 0C085DCA sts macl,Rn */
	IF(0x0C085DCCu); MACL = r8 * r2;  /* 0C085DCC mul.l Rm,Rn */
	r8 = 0x0u;  /* 0C085DCE mov #imm,Rn */
	IF(0x0C085DD0u); r0 = MACL;  /* 0C085DD0 sts macl,Rn */
	IF(0x0C085DD2u); W32(r0 + r7, r8); UPD(0x0C085DD4u, 6);  /* 0C085DD2 mov.l Rm,@(r0,Rn) */
	r0 = r10;  /* 0C085DD4 mov Rm,Rn */
	IF(0x0C085DD6u); W32(r0 + r7, r8); UPD(0x0C085DD8u, 2);  /* 0C085DD6 mov.l Rm,@(r0,Rn) */
L_0C085DD8: BLKS(0x0C085DD8u);
	r15 = r14;  /* 0C085DD8 mov Rm,Rn */
	IF(0x0C085DDAu); PR = R32(r15); r15 += 4; UPD(0x0C085DDCu, 2);  /* 0C085DDA lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C085DDEu, 1);  /* 0C085DDC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C085DE0u, 1);  /* 0C085DDE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C085DE2u, 1);  /* 0C085DE0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C085DE4u, 1);  /* 0C085DE2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C085DE6u, 1);  /* 0C085DE4 mov.l @Rm+,Rn */
	IF(0x0C085DE6u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C085DE6 rts */
L_0C085DF0: BLKS(0x0C085DF0u);
	IF(0x0C085DF0u); MACL = r10 * r7;  /* 0C085DF0 mul.l Rm,Rn */
	r0 = 0xB0u; UPD(0x0C085DF4u, 3);  /* 0C085DF2 mov.w @(disp,pc),Rn */
	r4 = 0x9u;  /* 0C085DF4 mov #imm,Rn */
	IF(0x0C085DF6u); r11 = MACL;  /* 0C085DF6 sts macl,Rn */
	r11 += r6;  /* 0C085DF8 add Rm,Rn */
	IF(0x0C085DFAu); r6 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C085DFCu, 4);  /* 0C085DFA mov.b @(r0,Rm),Rn */
	r7 = r6 & 0xFF;  /* 0C085DFC extu.b Rm,Rn */
	r5 = R32(r11 + 0x24u); UPD(0x0C085E00u, 2);  /* 0C085DFE mov.l @(disp,Rm),Rn */
	{ r6 = R32(r11 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C085DBEu, 3); goto L_0C085DBE; }  /* 0C085E00 bra */
L_0C085E10: BLKS(0x0C085E10u);
	IF(0x0C085E10u); r5 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C085E12u, 1);  /* 0C085E10 mov.b @(r0,Rm),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C085E12 add #imm,Rn */
	r4 = r5 & 0xFF;  /* 0C085E14 extu.b Rm,Rn */
	r3 = r12;  /* 0C085E16 mov Rm,Rn */
	W32(r15, r4); UPD(0x0C085E1Au, 4);  /* 0C085E18 mov.l Rm,@Rn */
	r3 += r9;  /* 0C085E1A add Rm,Rn */
	r3 += 0x1u;  /* 0C085E1C add #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r3); UPD(0x0C085E20u, 3);  /* 0C085E1E mov.b @Rm,Rn */
	r5 = 0xCu;  /* 0C085E20 mov #imm,Rn */
	r7 = r2 & 0xFF;  /* 0C085E22 extu.b Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C085E26u, 3);  /* 0C085E24 mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BECB0u; UPD(0x0C085E28u, 1);  /* 0C085E26 mov.l @(disp,pc),Rn */
	r4 = R32(r9); UPD(0x0C085E2Au, 1);  /* 0C085E28 mov.l @Rm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C085E2Cu, 1);  /* 0C085E2A mov.l @(disp,Rm),Rn */
	{ r7 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C085D8Au, 3); goto L_0C085D8A; }  /* 0C085E2C bra */
L_0C085E30: BLKS(0x0C085E30u);
	{ u32 c_ = !T; r0 = r9; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C085D64u, 3); goto L_0C085D64; } goto L_0C085E34; }  /* 0C085E30 bf/s */
L_0C085E34: BLKS(0x0C085E34u);
	IF(0x0C085E34u); r6 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C085E36u, 2);  /* 0C085E34 mov.b @(r0,Rm),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C085E36 add #imm,Rn */
	r5 = r6 & 0xFF;  /* 0C085E38 extu.b Rm,Rn */
	r4 = r12;  /* 0C085E3A mov Rm,Rn */
	W32(r15, r5); UPD(0x0C085E3Eu, 4);  /* 0C085E3C mov.l Rm,@Rn */
	r4 += r9;  /* 0C085E3E add Rm,Rn */
	r4 += 0x1u;  /* 0C085E40 add #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r4); UPD(0x0C085E44u, 3);  /* 0C085E42 mov.b @Rm,Rn */
	r5 = 0xCu;  /* 0C085E44 mov #imm,Rn */
	r2 = r3 & 0xFF;  /* 0C085E46 extu.b Rm,Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C085E4Au, 3);  /* 0C085E48 mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BFE70u; UPD(0x0C085E4Cu, 1);  /* 0C085E4A mov.l @(disp,pc),Rn */
	r4 = R32(r9); UPD(0x0C085E4Eu, 1);  /* 0C085E4C mov.l @Rm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C085E50u, 1);  /* 0C085E4E mov.l @(disp,Rm),Rn */
	{ r7 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C085D8Au, 3); goto L_0C085D8A; }  /* 0C085E50 bra */
L_0C085E60: BLKS(0x0C085E60u);
	r15 += 0xFFFFFFF8u;  /* 0C085E60 add #imm,Rn */
	r6 = r7 & 0xFF;  /* 0C085E62 extu.b Rm,Rn */
	r0 = r12;  /* 0C085E64 mov Rm,Rn */
	W32(r15, r6); UPD(0x0C085E68u, 4);  /* 0C085E66 mov.l Rm,@Rn */
	r0 += r9;  /* 0C085E68 add Rm,Rn */
	r0 += 0x1u;  /* 0C085E6A add #imm,Rn */
	r11 = (u32)(s32)(s8)R8(r0); UPD(0x0C085E6Eu, 3);  /* 0C085E6C mov.b @Rm,Rn */
	r5 = 0xCu;  /* 0C085E6E mov #imm,Rn */
	r12 = r11 & 0xFF;  /* 0C085E70 extu.b Rm,Rn */
	W32(r15 + 0x4u, r12); UPD(0x0C085E74u, 3);  /* 0C085E72 mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BFD30u; UPD(0x0C085E76u, 1);  /* 0C085E74 mov.l @(disp,pc),Rn */
	r4 = R32(r9); UPD(0x0C085E78u, 1);  /* 0C085E76 mov.l @Rm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C085E7Au, 1);  /* 0C085E78 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C085D8Au, 3); goto L_0C085D8A; }  /* 0C085E7A bra */
L_0C085E80: BLKS(0x0C085E80u);
	r7 = 0xB4u; UPD(0x0C085E82u, 1);  /* 0C085E80 mov.w @(disp,pc),Rn */
	r6 = 0x0u;  /* 0C085E82 mov #imm,Rn */
	IF(0x0C085E84u); MACL = r8 * r7;  /* 0C085E84 mul.l Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C085E88u, 4);  /* 0C085E86 mov.l @(disp,pc),Rn */
	IF(0x0C085E88u); r0 = MACL;  /* 0C085E88 sts macl,Rn */
	{ IF(0x0C085E8Cu); W32(r0 + r5, r6); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C085DD8u, 4); goto L_0C085DD8; }  /* 0C085E8A bra */
L_0C085EC0: BLKS(0x0C085EC0u);
	r9 = 0xC0A8B50u; UPD(0x0C085EC2u, 1);  /* 0C085EC0 mov.l @(disp,pc),Rn */
	IF(0x0C085EC2u); { u32 t_ = r9; PR = 0x0C085EC6u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C085EC6u); }  /* 0C085EC2 jsr @Rn */
L_0C085EC6: BLKS(0x0C085EC6u);
	IF(0x0C085EC6u); T = (s32)r0 >= 0;  /* 0C085EC6 cmp/pz Rn */
	if (!T) { UPD(0x0C085EDEu, 4); goto L_0C085EDE; }  /* 0C085EC8 bf */
L_0C085ECA: BLKS(0x0C085ECAu);
	r12 = 0xB4u; UPD(0x0C085ECCu, 1);  /* 0C085ECA mov.w @(disp,pc),Rn */
	IF(0x0C085ECCu); MACL = r0 * r12;  /* 0C085ECC mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C085ED0u, 3);  /* 0C085ECE mov.l @(disp,pc),Rn */
	IF(0x0C085ED0u); r4 = MACL;  /* 0C085ED0 sts macl,Rn */
	r0 = 0xA5u; UPD(0x0C085ED4u, 2);  /* 0C085ED2 mov.w @(disp,pc),Rn */
	r4 += r3;  /* 0C085ED4 add Rm,Rn */
	r4 += r0;  /* 0C085ED6 add Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r4); UPD(0x0C085EDAu, 3);  /* 0C085ED8 mov.b @Rm,Rn */
	r2 += 0x1u;  /* 0C085EDA add #imm,Rn */
	W8(r4, r2); UPD(0x0C085EDEu, 2);  /* 0C085EDC mov.b Rm,@Rn */
L_0C085EDE: BLKS(0x0C085EDEu);
	r2 = 0xB4u; UPD(0x0C085EE0u, 1);  /* 0C085EDE mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C085EE0 add #imm,Rn */
	IF(0x0C085EE2u); MACL = r8 * r2;  /* 0C085EE2 mul.l Rm,Rn */
	r4 = 0xC286578u; UPD(0x0C085EE6u, 4);  /* 0C085EE4 mov.l @(disp,pc),Rn */
	IF(0x0C085EE6u); r11 = MACL;  /* 0C085EE6 sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C085EEAu, 2);  /* 0C085EE8 mov.w @(disp,pc),Rn */
	r11 += r4;  /* 0C085EEA add Rm,Rn */
	IF(0x0C085EECu); r9 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C085EEEu, 2);  /* 0C085EEC mov.b @(r0,Rm),Rn */
	r8 = 0x0u;  /* 0C085EEE mov #imm,Rn */
	r7 = r9 & 0xFF;  /* 0C085EF0 extu.b Rm,Rn */
	W32(r15, r7); UPD(0x0C085EF4u, 3);  /* 0C085EF2 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C085EF4 add #imm,Rn */
	IF(0x0C085EF6u); r6 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C085EF8u, 2);  /* 0C085EF6 mov.b @(r0,Rm),Rn */
	r10 = 0xC0BD6F0u; UPD(0x0C085EFAu, 1);  /* 0C085EF8 mov.l @(disp,pc),Rn */
	r5 = r6 & 0xFF;  /* 0C085EFA extu.b Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C085EFEu, 2);  /* 0C085EFC mov.l Rm,@(disp,Rn) */
	r5 = 0xCu;  /* 0C085EFE mov #imm,Rn */
	r4 = R32(r11); UPD(0x0C085F02u, 2);  /* 0C085F00 mov.l @Rm,Rn */
	r6 = R32(r11 + 0x24u); UPD(0x0C085F04u, 1);  /* 0C085F02 mov.l @(disp,Rm),Rn */
	IF(0x0C085F04u); { u32 t_ = r10; PR = 0x0C085F08u; r7 = R32(r11 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C085F08u); }  /* 0C085F04 jsr @Rn */
L_0C085F08: BLKS(0x0C085F08u);
	W32(r11, r8); UPD(0x0C085F0Au, 1);  /* 0C085F08 mov.l Rm,@Rn */
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C085DD8u, 3); goto L_0C085DD8; }  /* 0C085F0A bra */
L_0C085F10: BLKS(0x0C085F10u);
	r3 = 0xB4u; UPD(0x0C085F12u, 1);  /* 0C085F10 mov.w @(disp,pc),Rn */
	IF(0x0C085F12u); MACL = r8 * r3;  /* 0C085F12 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C085F16u, 3);  /* 0C085F14 mov.l @(disp,pc),Rn */
	IF(0x0C085F16u); r8 = MACL;  /* 0C085F16 sts macl,Rn */
	r8 += r0;  /* 0C085F18 add Rm,Rn */
	r4 = R32(r8); UPD(0x0C085F1Cu, 3);  /* 0C085F1A mov.l @Rm,Rn */
	r9 = 0x4000u; UPD(0x0C085F1Eu, 1);  /* 0C085F1C mov.w @(disp,pc),Rn */
	r9 &= r4;  /* 0C085F1E and Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C085F20 tst Rm,Rn */
	if (T) { UPD(0x0C085F30u, 5); goto L_0C085F30; }  /* 0C085F22 bt */
L_0C085F24: BLKS(0x0C085F24u);
	r10 = 0xFFFFBFFFu; UPD(0x0C085F26u, 1);  /* 0C085F24 mov.w @(disp,pc),Rn */
	r4 &= r10;  /* 0C085F26 and Rm,Rn */
	{ W32(r8, r4); /* slot mov.l Rm,@Rn */ UPD(0x0C085DD8u, 4); goto L_0C085DD8; }  /* 0C085F28 bra */
L_0C085F30: BLKS(0x0C085F30u);
	r0 = 0xB0u; UPD(0x0C085F32u, 1);  /* 0C085F30 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C085F32 add #imm,Rn */
	IF(0x0C085F34u); r7 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C085F36u, 2);  /* 0C085F34 mov.b @(r0,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C085F36 extu.b Rm,Rn */
	W32(r15, r6); UPD(0x0C085F3Au, 2);  /* 0C085F38 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C085F3A add #imm,Rn */
	IF(0x0C085F3Cu); r11 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C085F3Eu, 2);  /* 0C085F3C mov.b @(r0,Rm),Rn */
	r12 = 0xC0BD6F0u; UPD(0x0C085F40u, 1);  /* 0C085F3E mov.l @(disp,pc),Rn */
	r5 = r11 & 0xFF;  /* 0C085F40 extu.b Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C085F44u, 2);  /* 0C085F42 mov.l Rm,@(disp,Rn) */
	r5 = 0x2u;  /* 0C085F44 mov #imm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C085F48u, 2);  /* 0C085F46 mov.l @(disp,Rm),Rn */
	IF(0x0C085F48u); { u32 t_ = r12; PR = 0x0C085F4Cu; r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C085F4Cu); }  /* 0C085F48 jsr @Rn */
L_0C085F4C: BLKS(0x0C085F4Cu);
	W32(r8, r9); UPD(0x0C085F4Eu, 1);  /* 0C085F4C mov.l Rm,@Rn */
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C085DD8u, 3); goto L_0C085DD8; }  /* 0C085F4E bra */
L_0C085F70: BLKS(0x0C085F70u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C085F72u, 1);  /* 0C085F70 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C085F74u, 1);  /* 0C085F72 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C085F76u, 1);  /* 0C085F74 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C085F78u, 1);  /* 0C085F76 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C085F7Au, 1);  /* 0C085F78 mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C085F7A exts.w Rm,Rn */
	r3 = 0xB4u; UPD(0x0C085F7Eu, 2);  /* 0C085F7C mov.w @(disp,pc),Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C085F80u, 1);  /* 0C085F7E mov.l Rm,@-Rn */
	IF(0x0C085F80u); MACL = r11 * r3;  /* 0C085F80 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C085F84u, 3);  /* 0C085F82 mov.l Rm,@-Rn */
	r0 = 0xC286578u; UPD(0x0C085F86u, 1);  /* 0C085F84 mov.l @(disp,pc),Rn */
	IF(0x0C085F86u); r2 = MACL;  /* 0C085F86 sts macl,Rn */
	IF(0x0C085F88u); r15 -= 4; W32(r15, PR); UPD(0x0C085F8Au, 2);  /* 0C085F88 sts.l pr,@-Rn */
	r0 += r2;  /* 0C085F8A add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C085F8Eu, 2);  /* 0C085F8C mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C085F8E add #imm,Rn */
	r0 = 0x16u;  /* 0C085F90 mov #imm,Rn */
	T = r2 > r0;  /* 0C085F92 cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C085FFCu, 6); goto L_0C085FFC; } goto L_0C085F98; }  /* 0C085F94 bt/s */
L_0C085F98: BLKS(0x0C085F98u);
	r0 = 0xC085FA8u;  /* 0C085F98 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C085F9A add Rm,Rn */
	IF(0x0C085F9Cu); r4 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C085F9Eu, 4);  /* 0C085F9C mov.w @(r0,Rm),Rn */
	IF(0x0C085F9Eu); { u32 tv_ = (r4 + 0x0C085FA2u); u32 t_ = PHYS(tv_); IF(0x0C085FA0u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C085FE0u: goto L_0C085FE0; case 0x0C086020u: goto L_0C086020; case 0x0C086070u: goto L_0C086070; case 0x0C086090u: goto L_0C086090; case 0x0C0860B0u: goto L_0C0860B0; case 0x0C0860D0u: goto L_0C0860D0; case 0x0C0860F0u: goto L_0C0860F0; case 0x0C086210u: goto L_0C086210; case 0x0C0862E0u: goto L_0C0862E0; case 0x0C086430u: goto L_0C086430; case 0x0C086450u: goto L_0C086450; case 0x0C086580u: goto L_0C086580; case 0x0C086650u: goto L_0C086650; case 0x0C0866E0u: goto L_0C0866E0; default: JUMPD(tv_); } }  /* 0C085F9E braf Rn */
L_0C085FE0: BLKS(0x0C085FE0u);
	r7 = 0xB4u; UPD(0x0C085FE2u, 1);  /* 0C085FE0 mov.w @(disp,pc),Rn */
	IF(0x0C085FE2u); MACL = r11 * r7;  /* 0C085FE2 mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C085FE6u, 3);  /* 0C085FE4 mov.l @(disp,pc),Rn */
	IF(0x0C085FE6u); r3 = MACL;  /* 0C085FE6 sts macl,Rn */
	r3 += r6;  /* 0C085FE8 add Rm,Rn */
	r1 = R32(r3 + 0x24u); UPD(0x0C085FECu, 3);  /* 0C085FEA mov.l @(disp,Rm),Rn */
	r5 = 0x3FFFFFu; UPD(0x0C085FEEu, 1);  /* 0C085FEC mov.l @(disp,pc),Rn */
	T = (s32)r1 > (s32)r5;  /* 0C085FEE cmp/gt Rm,Rn */
	if (T) { UPD(0x0C085FFCu, 4); goto L_0C085FFC; }  /* 0C085FF0 bt */
L_0C085FF2: BLKS(0x0C085FF2u);
	r8 = R32(r3); UPD(0x0C085FF4u, 1);  /* 0C085FF2 mov.l @Rm,Rn */
	r9 = 0xFFFFFEFFu; UPD(0x0C085FF6u, 1);  /* 0C085FF4 mov.w @(disp,pc),Rn */
	r8 &= r9;  /* 0C085FF6 and Rm,Rn */
	W32(r3, r8); UPD(0x0C085FFAu, 2);  /* 0C085FF8 mov.l Rm,@Rn */
	IF(0x0C085FFAu); ;  /* 0C085FFA nop */
	UPD(0x0C085FFCu, 1);
L_0C085FFC: BLKS(0x0C085FFCu);
	r14 += 0x4u;  /* 0C085FFC add #imm,Rn */
	UPD(0x0C085FFEu, 1);
L_0C085FFE: BLKS(0x0C085FFEu);
	r15 = r14;  /* 0C085FFE mov Rm,Rn */
	IF(0x0C086000u); PR = R32(r15); r15 += 4; UPD(0x0C086002u, 2);  /* 0C086000 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C086004u, 1);  /* 0C086002 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C086006u, 1);  /* 0C086004 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C086008u, 1);  /* 0C086006 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08600Au, 1);  /* 0C086008 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08600Cu, 1);  /* 0C08600A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08600Eu, 1);  /* 0C08600C mov.l @Rm+,Rn */
	IF(0x0C08600Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08600E rts */
L_0C086020: BLKS(0x0C086020u);
	r13 = 0xC0A8B50u; UPD(0x0C086022u, 1);  /* 0C086020 mov.l @(disp,pc),Rn */
	IF(0x0C086022u); { u32 t_ = r13; PR = 0x0C086026u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C086026u); }  /* 0C086022 jsr @Rn */
L_0C086026: BLKS(0x0C086026u);
	IF(0x0C086026u); T = (s32)r0 >= 0;  /* 0C086026 cmp/pz Rn */
	{ u32 c_ = !T; r5 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C086050u, 4); goto L_0C086050; } goto L_0C08602C; }  /* 0C086028 bf/s */
L_0C08602C: BLKS(0x0C08602Cu);
	r1 = 0xC083080u; UPD(0x0C08602Eu, 2);  /* 0C08602C mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C08602E mov Rm,Rn */
	UPD(0x0C086030u, 1);
L_0C086030: BLKS(0x0C086030u);
	r14 += 0x4u;  /* 0C086030 add #imm,Rn */
	r15 = r14;  /* 0C086032 mov Rm,Rn */
	IF(0x0C086034u); PR = R32(r15); r15 += 4; UPD(0x0C086036u, 3);  /* 0C086034 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C086038u, 1);  /* 0C086036 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08603Au, 1);  /* 0C086038 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08603Cu, 1);  /* 0C08603A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08603Eu, 1);  /* 0C08603C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C086040u, 1);  /* 0C08603E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C086042u, 1);  /* 0C086040 mov.l @Rm+,Rn */
	IF(0x0C086042u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0834A0u: goto L_0C0834A0; case 0x0C0835D0u: goto L_0C0835D0; default: JUMPD(tv_); } }  /* 0C086042 jmp @Rn */
L_0C086050: BLKS(0x0C086050u);
	r2 = 0xC085C90u; UPD(0x0C086052u, 1);  /* 0C086050 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C086052 mov Rm,Rn */
	r14 += 0x4u;  /* 0C086054 add #imm,Rn */
	r15 = r14;  /* 0C086056 mov Rm,Rn */
	IF(0x0C086058u); PR = R32(r15); r15 += 4; UPD(0x0C08605Au, 4);  /* 0C086058 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08605Cu, 1);  /* 0C08605A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08605Eu, 1);  /* 0C08605C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C086060u, 1);  /* 0C08605E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C086062u, 1);  /* 0C086060 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C086064u, 1);  /* 0C086062 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C086066u, 1);  /* 0C086064 mov.l @Rm+,Rn */
	IF(0x0C086066u); { u32 tv_ = r2; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C085C90u: goto L_0C085C90; default: JUMPD(tv_); } }  /* 0C086066 jmp @Rn */
L_0C086070: BLKS(0x0C086070u);
	r8 = 0xC0A8B50u; UPD(0x0C086072u, 1);  /* 0C086070 mov.l @(disp,pc),Rn */
	IF(0x0C086072u); { u32 t_ = r8; PR = 0x0C086076u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C086076u); }  /* 0C086072 jsr @Rn */
L_0C086076: BLKS(0x0C086076u);
	IF(0x0C086076u); T = (s32)r0 >= 0;  /* 0C086076 cmp/pz Rn */
	{ u32 c_ = !T; r5 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C086050u, 4); goto L_0C086050; } goto L_0C08607C; }  /* 0C086078 bf/s */
L_0C08607C: BLKS(0x0C08607Cu);
	r1 = 0xC083240u; UPD(0x0C08607Eu, 2);  /* 0C08607C mov.l @(disp,pc),Rn */
	{ r4 = r11; /* slot mov Rm,Rn */ UPD(0x0C086030u, 3); goto L_0C086030; }  /* 0C08607E bra */
L_0C086090: BLKS(0x0C086090u);
	r12 = 0xC0A8B50u; UPD(0x0C086092u, 1);  /* 0C086090 mov.l @(disp,pc),Rn */
	IF(0x0C086092u); { u32 t_ = r12; PR = 0x0C086096u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C086096u); }  /* 0C086092 jsr @Rn */
L_0C086096: BLKS(0x0C086096u);
	IF(0x0C086096u); T = (s32)r0 >= 0;  /* 0C086096 cmp/pz Rn */
	{ u32 c_ = !T; r5 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C086050u, 4); goto L_0C086050; } goto L_0C08609C; }  /* 0C086098 bf/s */
L_0C08609C: BLKS(0x0C08609Cu);
	r1 = 0xC082C90u; UPD(0x0C08609Eu, 2);  /* 0C08609C mov.l @(disp,pc),Rn */
	{ r4 = r11; /* slot mov Rm,Rn */ UPD(0x0C086030u, 3); goto L_0C086030; }  /* 0C08609E bra */
L_0C0860B0: BLKS(0x0C0860B0u);
	r9 = 0xC0A8B50u; UPD(0x0C0860B2u, 1);  /* 0C0860B0 mov.l @(disp,pc),Rn */
	IF(0x0C0860B2u); { u32 t_ = r9; PR = 0x0C0860B6u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C0860B6u); }  /* 0C0860B2 jsr @Rn */
L_0C0860B6: BLKS(0x0C0860B6u);
	IF(0x0C0860B6u); T = (s32)r0 >= 0;  /* 0C0860B6 cmp/pz Rn */
	{ u32 c_ = !T; r5 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C086050u, 4); goto L_0C086050; } goto L_0C0860BC; }  /* 0C0860B8 bf/s */
L_0C0860BC: BLKS(0x0C0860BCu);
	r1 = 0xC082EB0u; UPD(0x0C0860BEu, 2);  /* 0C0860BC mov.l @(disp,pc),Rn */
	{ r4 = r11; /* slot mov Rm,Rn */ UPD(0x0C086030u, 3); goto L_0C086030; }  /* 0C0860BE bra */
L_0C0860D0: BLKS(0x0C0860D0u);
	r10 = 0xC0A8B50u; UPD(0x0C0860D2u, 1);  /* 0C0860D0 mov.l @(disp,pc),Rn */
	IF(0x0C0860D2u); { u32 t_ = r10; PR = 0x0C0860D6u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C0860D6u); }  /* 0C0860D2 jsr @Rn */
L_0C0860D6: BLKS(0x0C0860D6u);
	IF(0x0C0860D6u); T = (s32)r0 >= 0;  /* 0C0860D6 cmp/pz Rn */
	{ u32 c_ = !T; r5 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C086050u, 4); goto L_0C086050; } goto L_0C0860DC; }  /* 0C0860D8 bf/s */
L_0C0860DC: BLKS(0x0C0860DCu);
	r1 = 0xC082A80u; UPD(0x0C0860DEu, 2);  /* 0C0860DC mov.l @(disp,pc),Rn */
	{ r4 = r11; /* slot mov Rm,Rn */ UPD(0x0C086030u, 3); goto L_0C086030; }  /* 0C0860DE bra */
L_0C0860F0: BLKS(0x0C0860F0u);
	r13 = 0xC0A8B50u; UPD(0x0C0860F2u, 1);  /* 0C0860F0 mov.l @(disp,pc),Rn */
	IF(0x0C0860F2u); { u32 t_ = r13; PR = 0x0C0860F6u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C0860F6u); }  /* 0C0860F2 jsr @Rn */
L_0C0860F6: BLKS(0x0C0860F6u);
	IF(0x0C0860F6u); T = (s32)r0 >= 0;  /* 0C0860F6 cmp/pz Rn */
	{ u32 c_ = !T; r5 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C086050u, 4); goto L_0C086050; } goto L_0C0860FC; }  /* 0C0860F8 bf/s */
L_0C0860FC: BLKS(0x0C0860FCu);
	r0 = 0xB4u; UPD(0x0C0860FEu, 2);  /* 0C0860FC mov.w @(disp,pc),Rn */
	IF(0x0C0860FEu); MACL = r11 * r0;  /* 0C0860FE mul.l Rm,Rn */
	r4 = 0xC286578u; UPD(0x0C086102u, 3);  /* 0C086100 mov.l @(disp,pc),Rn */
	IF(0x0C086102u); r10 = MACL;  /* 0C086102 sts macl,Rn */
	r10 += r4;  /* 0C086104 add Rm,Rn */
	IF(0x0C086106u); MACL = r5 * r0;  /* 0C086106 mul.l Rm,Rn */
	r12 = R32(r10); UPD(0x0C08610Au, 5);  /* 0C086108 mov.l @Rm,Rn */
	r8 = 0xFFFFFEFFu; UPD(0x0C08610Cu, 1);  /* 0C08610A mov.w @(disp,pc),Rn */
	r0 += 0x4Cu;  /* 0C08610C add #imm,Rn */
	r12 &= r8;  /* 0C08610E and Rm,Rn */
	IF(0x0C086110u); r8 = MACL;  /* 0C086110 sts macl,Rn */
	r8 += r4;  /* 0C086112 add Rm,Rn */
	r6 = R32(r8); UPD(0x0C086116u, 5);  /* 0C086114 mov.l @Rm,Rn */
	r6 &= r0;  /* 0C086116 and Rm,Rn */
	r12 |= r6;  /* 0C086118 or Rm,Rn */
	W32(r10, r12); UPD(0x0C08611Cu, 3);  /* 0C08611A mov.l Rm,@Rn */
	r3 = 0x84u; UPD(0x0C08611Eu, 1);  /* 0C08611C mov.w @(disp,pc),Rn */
	r12 = r10;  /* 0C08611E mov Rm,Rn */
	r12 += r3;  /* 0C086120 add Rm,Rn */
	r3 += r8;  /* 0C086122 add Rm,Rn */
	r3 += 0x2u;  /* 0C086124 add #imm,Rn */
	r9 = (u32)(s32)(s16)R16(r3); UPD(0x0C086128u, 5);  /* 0C086126 mov.w @Rm,Rn */
	r12 += 0x2u;  /* 0C086128 add #imm,Rn */
	W16(r12, r9); UPD(0x0C08612Cu, 2);  /* 0C08612A mov.w Rm,@Rn */
	r13 = 0x98u; UPD(0x0C08612Eu, 1);  /* 0C08612C mov.w @(disp,pc),Rn */
	r9 = r10;  /* 0C08612E mov Rm,Rn */
	r9 += r13;  /* 0C086130 add Rm,Rn */
	r4 = R32(r8 + 0xCu); UPD(0x0C086134u, 3);  /* 0C086132 mov.l @(disp,Rm),Rn */
	r13 += r8;  /* 0C086134 add Rm,Rn */
	r13 += 0x2u;  /* 0C086136 add #imm,Rn */
	r0 = 0xC0A8AE0u; UPD(0x0C08613Au, 3);  /* 0C086138 mov.l @(disp,pc),Rn */
	r9 += 0x2u;  /* 0C08613A add #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r13); UPD(0x0C08613Eu, 2);  /* 0C08613C mov.b @Rm,Rn */
	W32(r10 + 0xCu, r4); UPD(0x0C086140u, 1);  /* 0C08613E mov.l Rm,@(disp,Rn) */
	W8(r9, r2); UPD(0x0C086142u, 1);  /* 0C086140 mov.b Rm,@Rn */
	IF(0x0C086142u); { u32 t_ = r0; PR = 0x0C086146u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C086146u); }  /* 0C086142 jsr @Rn */
L_0C086146: BLKS(0x0C086146u);
	r0 = 0x88u; UPD(0x0C086148u, 1);  /* 0C086146 mov.w @(disp,pc),Rn */
	r5 = (u32)(s32)(s16)R16(r12); UPD(0x0C08614Au, 1);  /* 0C086148 mov.w @Rm,Rn */
	IF(0x0C08614Au); r1 = (u32)(s32)(s16)R16(r0 + r10); UPD(0x0C08614Cu, 1);  /* 0C08614A mov.w @(r0,Rm),Rn */
	r7 = 0xC069B20u; UPD(0x0C08614Eu, 1);  /* 0C08614C mov.l @(disp,pc),Rn */
	r5 += r1;  /* 0C08614E add Rm,Rn */
	r11 = (u32)(s32)(s16)r5;  /* 0C086150 exts.w Rm,Rn */
	r4 = r11;  /* 0C086152 mov Rm,Rn */
	IF(0x0C086154u); { u32 t_ = r7; PR = 0x0C086158u; r5 = R32(r10 + 0x2Cu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 5); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C086158u); }  /* 0C086154 jsr @Rn */
L_0C086158: BLKS(0x0C086158u);
	r6 = R32(r8 + 0x24u); UPD(0x0C08615Au, 1);  /* 0C086158 mov.l @(disp,Rm),Rn */
	r4 = r11;  /* 0C08615A mov Rm,Rn */
	r13 = 0xC069AF0u; UPD(0x0C08615Eu, 2);  /* 0C08615C mov.l @(disp,pc),Rn */
	r6 += r0;  /* 0C08615E add Rm,Rn */
	W32(r10 + 0x24u, r6); UPD(0x0C086162u, 2);  /* 0C086160 mov.l Rm,@(disp,Rn) */
	IF(0x0C086162u); { u32 t_ = r13; PR = 0x0C086166u; r5 = R32(r10 + 0x2Cu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C086166u); }  /* 0C086162 jsr @Rn */
L_0C086166: BLKS(0x0C086166u);
	r3 = R32(r8 + 0x28u); UPD(0x0C086168u, 1);  /* 0C086166 mov.l @(disp,Rm),Rn */
	r11 = (u32)(s32)(s8)R8(r9); UPD(0x0C08616Au, 1);  /* 0C086168 mov.b @Rm,Rn */
	r3 += r0;  /* 0C08616A add Rm,Rn */
	T = (r11 & r11) == 0;  /* 0C08616C tst Rm,Rn */
	{ u32 c_ = T; W32(r10 + 0x28u, r3); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0861B4u, 5); goto L_0C0861B4; } UPD(0x0C086172u, 1); goto L_0C086172; }  /* 0C08616E bt/s */
L_0C086172: BLKS(0x0C086172u);
	r11 = (u32)(s32)(s16)R16(r12); UPD(0x0C086174u, 1);  /* 0C086172 mov.w @Rm,Rn */
	r1 = 0xC069B20u; UPD(0x0C086176u, 1);  /* 0C086174 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C086176 mov Rm,Rn */
	r12 = 0xC0000u; UPD(0x0C08617Au, 2);  /* 0C086178 mov.l @(disp,pc),Rn */
	IF(0x0C08617Au); { u32 t_ = r1; PR = 0x0C08617Eu; r5 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C08617Eu); }  /* 0C08617A jsr @Rn */
L_0C08617E: BLKS(0x0C08617Eu);
	r9 = R32(r10 + 0x24u); UPD(0x0C086180u, 1);  /* 0C08617E mov.l @(disp,Rm),Rn */
	r4 = r11;  /* 0C086180 mov Rm,Rn */
	r9 += r0;  /* 0C086182 add Rm,Rn */
	IF(0x0C086184u); { u32 t_ = r13; PR = 0x0C086188u; r5 = r12; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C086188u); }  /* 0C086184 jsr @Rn */
L_0C086188: BLKS(0x0C086188u);
	r8 = R32(r10 + 0x28u); UPD(0x0C08618Au, 1);  /* 0C086188 mov.l @(disp,Rm),Rn */
	r4 = r9;  /* 0C08618A mov Rm,Rn */
	r8 += r0;  /* 0C08618C add Rm,Rn */
	r0 = 0xA9u; UPD(0x0C086190u, 3);  /* 0C08618E mov.w @(disp,pc),Rn */
	r5 = r8;  /* 0C086190 mov Rm,Rn */
	r13 = 0xC0BBF10u; UPD(0x0C086194u, 2);  /* 0C086192 mov.l @(disp,pc),Rn */
	IF(0x0C086194u); r7 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C086196u, 1);  /* 0C086194 mov.b @(r0,Rm),Rn */
	IF(0x0C086196u); { u32 t_ = r13; PR = 0x0C08619Au; r6 = r7 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BBF10, 0x0C0BBF10u, 0x0C08619Au); }  /* 0C086196 jsr @Rn */
L_0C08619A: BLKS(0x0C08619Au);
	T = (r0 & r0) == 0;  /* 0C08619A tst Rm,Rn */
	if (T) { UPD(0x0C0861B4u, 4); goto L_0C0861B4; }  /* 0C08619C bt */
L_0C08619E: BLKS(0x0C08619Eu);
	r15 += 0xFFFFFFFCu;  /* 0C08619E add #imm,Rn */
	r0 = 0xA1u; UPD(0x0C0861A2u, 2);  /* 0C0861A0 mov.w @(disp,pc),Rn */
	r5 = R32(r10 + 0x30u); UPD(0x0C0861A4u, 1);  /* 0C0861A2 mov.l @(disp,Rm),Rn */
	r6 = r8;  /* 0C0861A4 mov Rm,Rn */
	IF(0x0C0861A6u); r4 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C0861A8u, 2);  /* 0C0861A6 mov.b @(r0,Rm),Rn */
	r7 = r11;  /* 0C0861A8 mov Rm,Rn */
	r10 = 0xC0BB1A0u; UPD(0x0C0861ACu, 2);  /* 0C0861AA mov.l @(disp,pc),Rn */
	W32(r15, r5); UPD(0x0C0861AEu, 1);  /* 0C0861AC mov.l Rm,@Rn */
	IF(0x0C0861AEu); { u32 t_ = r10; PR = 0x0C0861B2u; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BB1A0, 0x0C0BB1A0u, 0x0C0861B2u); }  /* 0C0861AE jsr @Rn */
L_0C0861B2: BLKS(0x0C0861B2u);
	r15 += 0x4u;  /* 0C0861B2 add #imm,Rn */
	UPD(0x0C0861B4u, 1);
L_0C0861B4: BLKS(0x0C0861B4u);
	{ r14 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C085FFEu, 3); goto L_0C085FFE; }  /* 0C0861B4 bra */
L_0C086210: BLKS(0x0C086210u);
	r8 = 0xC0A8B50u; UPD(0x0C086212u, 1);  /* 0C086210 mov.l @(disp,pc),Rn */
	IF(0x0C086212u); { u32 t_ = r8; PR = 0x0C086216u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C086216u); }  /* 0C086212 jsr @Rn */
L_0C086216: BLKS(0x0C086216u);
	IF(0x0C086216u); T = (s32)r0 >= 0;  /* 0C086216 cmp/pz Rn */
	if (!T) { UPD(0x0C0862ECu, 4); goto L_0C0862EC; }  /* 0C086218 bf */
L_0C08621A: BLKS(0x0C08621Au);
	r4 = 0xB4u; UPD(0x0C08621Cu, 1);  /* 0C08621A mov.w @(disp,pc),Rn */
	IF(0x0C08621Cu); MACL = r11 * r4;  /* 0C08621C mul.l Rm,Rn */
	r13 = 0xC286578u; UPD(0x0C086220u, 3);  /* 0C08621E mov.l @(disp,pc),Rn */
	IF(0x0C086220u); r10 = MACL;  /* 0C086220 sts macl,Rn */
	r10 += r13;  /* 0C086222 add Rm,Rn */
	IF(0x0C086224u); MACL = r0 * r4;  /* 0C086224 mul.l Rm,Rn */
	r12 = R32(r10); UPD(0x0C086228u, 5);  /* 0C086226 mov.l @Rm,Rn */
	r8 = 0xFFFFFEFFu; UPD(0x0C08622Au, 1);  /* 0C086228 mov.w @(disp,pc),Rn */
	r4 += 0x4Cu;  /* 0C08622A add #imm,Rn */
	r12 &= r8;  /* 0C08622C and Rm,Rn */
	IF(0x0C08622Eu); r8 = MACL;  /* 0C08622E sts macl,Rn */
	r8 += r13;  /* 0C086230 add Rm,Rn */
	r6 = R32(r8); UPD(0x0C086234u, 5);  /* 0C086232 mov.l @Rm,Rn */
	r6 &= r4;  /* 0C086234 and Rm,Rn */
	r12 |= r6;  /* 0C086236 or Rm,Rn */
	W32(r10, r12); UPD(0x0C08623Au, 3);  /* 0C086238 mov.l Rm,@Rn */
	r4 = r11;  /* 0C08623A mov Rm,Rn */
	r3 = 0x84u; UPD(0x0C08623Eu, 2);  /* 0C08623C mov.w @(disp,pc),Rn */
	r12 = r10;  /* 0C08623E mov Rm,Rn */
	r12 += r3;  /* 0C086240 add Rm,Rn */
	r3 += r8;  /* 0C086242 add Rm,Rn */
	r3 += 0x2u;  /* 0C086244 add #imm,Rn */
	r9 = (u32)(s32)(s16)R16(r3); UPD(0x0C086248u, 5);  /* 0C086246 mov.w @Rm,Rn */
	r12 += 0x2u;  /* 0C086248 add #imm,Rn */
	W16(r12, r9); UPD(0x0C08624Cu, 2);  /* 0C08624A mov.w Rm,@Rn */
	r2 = 0x98u; UPD(0x0C08624Eu, 1);  /* 0C08624C mov.w @(disp,pc),Rn */
	r9 = r10;  /* 0C08624E mov Rm,Rn */
	r9 += r2;  /* 0C086250 add Rm,Rn */
	r2 += r8;  /* 0C086252 add Rm,Rn */
	r2 += 0x2u;  /* 0C086254 add #imm,Rn */
	r0 = 0xC0A8AE0u; UPD(0x0C086258u, 5);  /* 0C086256 mov.l @(disp,pc),Rn */
	r9 += 0x2u;  /* 0C086258 add #imm,Rn */
	r5 = (u32)(s32)(s8)R8(r2); UPD(0x0C08625Cu, 2);  /* 0C08625A mov.b @Rm,Rn */
	r7 = R32(r8 + 0xCu); UPD(0x0C08625Eu, 1);  /* 0C08625C mov.l @(disp,Rm),Rn */
	W8(r9, r5); UPD(0x0C086260u, 1);  /* 0C08625E mov.b Rm,@Rn */
	IF(0x0C086260u); { u32 t_ = r0; PR = 0x0C086264u; W32(r10 + 0xCu, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C086264u); }  /* 0C086260 jsr @Rn */
L_0C086264: BLKS(0x0C086264u);
	r0 = 0x88u; UPD(0x0C086266u, 1);  /* 0C086264 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)R16(r12); UPD(0x0C086268u, 1);  /* 0C086266 mov.w @Rm,Rn */
	IF(0x0C086268u); r13 = (u32)(s32)(s16)R16(r0 + r10); UPD(0x0C08626Au, 1);  /* 0C086268 mov.w @(r0,Rm),Rn */
	r6 = 0xC069B20u; UPD(0x0C08626Cu, 1);  /* 0C08626A mov.l @(disp,pc),Rn */
	r4 += r13;  /* 0C08626C add Rm,Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C08626E exts.w Rm,Rn */
	r4 = r11;  /* 0C086270 mov Rm,Rn */
	IF(0x0C086272u); { u32 t_ = r6; PR = 0x0C086276u; r5 = R32(r10 + 0x2Cu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 5); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C086276u); }  /* 0C086272 jsr @Rn */
L_0C086276: BLKS(0x0C086276u);
	r3 = R32(r8 + 0x24u); UPD(0x0C086278u, 1);  /* 0C086276 mov.l @(disp,Rm),Rn */
	r4 = r11;  /* 0C086278 mov Rm,Rn */
	r13 = 0xC069AF0u; UPD(0x0C08627Cu, 2);  /* 0C08627A mov.l @(disp,pc),Rn */
	r3 += r0;  /* 0C08627C add Rm,Rn */
	W32(r10 + 0x24u, r3); UPD(0x0C086280u, 2);  /* 0C08627E mov.l Rm,@(disp,Rn) */
	IF(0x0C086280u); { u32 t_ = r13; PR = 0x0C086284u; r5 = R32(r10 + 0x2Cu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C086284u); }  /* 0C086280 jsr @Rn */
L_0C086284: BLKS(0x0C086284u);
	r2 = R32(r8 + 0x28u); UPD(0x0C086286u, 1);  /* 0C086284 mov.l @(disp,Rm),Rn */
	r11 = (u32)(s32)(s8)R8(r9); UPD(0x0C086288u, 1);  /* 0C086286 mov.b @Rm,Rn */
	r2 += r0;  /* 0C086288 add Rm,Rn */
	T = (r11 & r11) == 0;  /* 0C08628A tst Rm,Rn */
	{ u32 c_ = T; W32(r10 + 0x28u, r2); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0861B4u, 5); goto L_0C0861B4; } UPD(0x0C086290u, 1); goto L_0C086290; }  /* 0C08628C bt/s */
L_0C086290: BLKS(0x0C086290u);
	r11 = (u32)(s32)(s16)R16(r12); UPD(0x0C086292u, 1);  /* 0C086290 mov.w @Rm,Rn */
	r7 = 0xC069B20u; UPD(0x0C086294u, 1);  /* 0C086292 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C086294 mov Rm,Rn */
	r12 = 0xC0000u; UPD(0x0C086298u, 2);  /* 0C086296 mov.l @(disp,pc),Rn */
	IF(0x0C086298u); { u32 t_ = r7; PR = 0x0C08629Cu; r5 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C08629Cu); }  /* 0C086298 jsr @Rn */
L_0C08629C: BLKS(0x0C08629Cu);
	r9 = R32(r10 + 0x24u); UPD(0x0C08629Eu, 1);  /* 0C08629C mov.l @(disp,Rm),Rn */
	r4 = r11;  /* 0C08629E mov Rm,Rn */
	r9 += r0;  /* 0C0862A0 add Rm,Rn */
	IF(0x0C0862A2u); { u32 t_ = r13; PR = 0x0C0862A6u; r5 = r12; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0862A6u); }  /* 0C0862A2 jsr @Rn */
L_0C0862A6: BLKS(0x0C0862A6u);
	r8 = R32(r10 + 0x28u); UPD(0x0C0862A8u, 1);  /* 0C0862A6 mov.l @(disp,Rm),Rn */
	r4 = r9;  /* 0C0862A8 mov Rm,Rn */
	r8 += r0;  /* 0C0862AA add Rm,Rn */
	r0 = 0xA9u; UPD(0x0C0862AEu, 3);  /* 0C0862AC mov.w @(disp,pc),Rn */
	r5 = r8;  /* 0C0862AE mov Rm,Rn */
	IF(0x0C0862B0u); r1 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C0862B2u, 2);  /* 0C0862B0 mov.b @(r0,Rm),Rn */
	r10 = 0xC0BBF10u; UPD(0x0C0862B4u, 1);  /* 0C0862B2 mov.l @(disp,pc),Rn */
	IF(0x0C0862B4u); { u32 t_ = r10; PR = 0x0C0862B8u; r6 = r1 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BBF10, 0x0C0BBF10u, 0x0C0862B8u); }  /* 0C0862B4 jsr @Rn */
L_0C0862B8: BLKS(0x0C0862B8u);
	T = (r0 & r0) == 0;  /* 0C0862B8 tst Rm,Rn */
	if (T) { UPD(0x0C0862D4u, 4); goto L_0C0862D4; }  /* 0C0862BA bt */
L_0C0862BC: BLKS(0x0C0862BCu);
	r7 = r11;  /* 0C0862BC mov Rm,Rn */
	r5 = 0x30000u; UPD(0x0C0862C0u, 2);  /* 0C0862BE mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0862C0 add #imm,Rn */
	r0 = 0xC198F9Eu; UPD(0x0C0862C4u, 2);  /* 0C0862C2 mov.l @(disp,pc),Rn */
	r4 = 0x2u;  /* 0C0862C4 mov #imm,Rn */
	r11 = 0xC0BAB50u; UPD(0x0C0862C8u, 2);  /* 0C0862C6 mov.l @(disp,pc),Rn */
	r6 = r8;  /* 0C0862C8 mov Rm,Rn */
	W32(r15, r5); UPD(0x0C0862CCu, 2);  /* 0C0862CA mov.l Rm,@Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0862CEu, 1);  /* 0C0862CC mov.l Rm,@(disp,Rn) */
	IF(0x0C0862CEu); { u32 t_ = r11; PR = 0x0C0862D2u; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BAB50, 0x0C0BAB50u, 0x0C0862D2u); }  /* 0C0862CE jsr @Rn */
L_0C0862D2: BLKS(0x0C0862D2u);
	r15 += 0x8u;  /* 0C0862D2 add #imm,Rn */
	UPD(0x0C0862D4u, 1);
L_0C0862D4: BLKS(0x0C0862D4u);
	{ r14 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C085FFEu, 3); goto L_0C085FFE; }  /* 0C0862D4 bra */
L_0C0862E0: BLKS(0x0C0862E0u);
	r9 = 0xC0A8B50u; UPD(0x0C0862E2u, 1);  /* 0C0862E0 mov.l @(disp,pc),Rn */
	IF(0x0C0862E2u); { u32 t_ = r9; PR = 0x0C0862E6u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C0862E6u); }  /* 0C0862E2 jsr @Rn */
L_0C0862E6: BLKS(0x0C0862E6u);
	IF(0x0C0862E6u); T = (s32)r0 >= 0;  /* 0C0862E6 cmp/pz Rn */
	{ u32 c_ = T; r5 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0862F0u, 4); goto L_0C0862F0; } UPD(0x0C0862ECu, 1); goto L_0C0862EC; }  /* 0C0862E8 bt/s */
L_0C0862EC: BLKS(0x0C0862ECu);
	{ IF(0x0C0862EEu); ; /* slot nop */ UPD(0x0C086050u, 3); goto L_0C086050; }  /* 0C0862EC bra */
L_0C0862F0: BLKS(0x0C0862F0u);
	r7 = 0xB4u; UPD(0x0C0862F2u, 1);  /* 0C0862F0 mov.w @(disp,pc),Rn */
	IF(0x0C0862F2u); MACL = r11 * r7;  /* 0C0862F2 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C0862F6u, 3);  /* 0C0862F4 mov.l @(disp,pc),Rn */
	IF(0x0C0862F6u); r13 = MACL;  /* 0C0862F6 sts macl,Rn */
	r13 += r0;  /* 0C0862F8 add Rm,Rn */
	r10 = R32(r13); UPD(0x0C0862FCu, 3);  /* 0C0862FA mov.l @Rm,Rn */
	IF(0x0C0862FCu); MACL = r5 * r7;  /* 0C0862FC mul.l Rm,Rn */
	r4 = 0xFFFFFEFFu; UPD(0x0C086300u, 3);  /* 0C0862FE mov.w @(disp,pc),Rn */
	r3 = r13;  /* 0C086300 mov Rm,Rn */
	r10 &= r4;  /* 0C086302 and Rm,Rn */
	r8 = 0x84u; UPD(0x0C086306u, 3);  /* 0C086304 mov.w @(disp,pc),Rn */
	IF(0x0C086306u); r4 = MACL;  /* 0C086306 sts macl,Rn */
	r4 += r0;  /* 0C086308 add Rm,Rn */
	r3 += r8;  /* 0C08630A add Rm,Rn */
	r0 = 0xA1u; UPD(0x0C08630Eu, 4);  /* 0C08630C mov.w @(disp,pc),Rn */
	r8 += r4;  /* 0C08630E add Rm,Rn */
	r8 += 0x2u;  /* 0C086310 add #imm,Rn */
	r12 = R32(r4); UPD(0x0C086314u, 3);  /* 0C086312 mov.l @Rm,Rn */
	r7 += 0x4Cu;  /* 0C086314 add #imm,Rn */
	r2 = (u32)(s32)(s16)R16(r8); UPD(0x0C086318u, 2);  /* 0C086316 mov.w @Rm,Rn */
	r3 += 0x2u;  /* 0C086318 add #imm,Rn */
	IF(0x0C08631Au); r6 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C08631Cu, 2);  /* 0C08631A mov.b @(r0,Rm),Rn */
	r12 &= r7;  /* 0C08631C and Rm,Rn */
	W16(r3, r2); UPD(0x0C086320u, 2);  /* 0C08631E mov.w Rm,@Rn */
	r0 += 0xFFFFFFFBu;  /* 0C086320 add #imm,Rn */
	r7 = 0x98u; UPD(0x0C086324u, 2);  /* 0C086322 mov.w @(disp,pc),Rn */
	r10 |= r12;  /* 0C086324 or Rm,Rn */
	IF(0x0C086326u); r0 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C086328u, 2);  /* 0C086326 mov.b @(r0,Rm),Rn */
	r2 = r13;  /* 0C086328 mov Rm,Rn */
	r2 += r7;  /* 0C08632A add Rm,Rn */
	r0 &= 0x1u;  /* 0C08632C and #imm,r0 */
	W32(r13, r10); UPD(0x0C086330u, 4);  /* 0C08632E mov.l Rm,@Rn */
	T = r6 == r0;  /* 0C086330 cmp/eq Rm,Rn */
	{ u32 c_ = !T; r2 += 0x2u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C08633Au, 4); goto L_0C08633A; } goto L_0C086336; }  /* 0C086332 bf/s */
L_0C086336: BLKS(0x0C086336u);
	{ r4 += r7; /* slot add Rm,Rn */ UPD(0x0C086420u, 4); goto L_0C086420; }  /* 0C086336 bra */
L_0C08633A: BLKS(0x0C08633Au);
	r0 = 0x0u;  /* 0C08633A mov #imm,Rn */
	UPD(0x0C08633Cu, 1);
L_0C08633C: BLKS(0x0C08633Cu);
	r13 = 0xB4u; UPD(0x0C08633Eu, 1);  /* 0C08633C mov.w @(disp,pc),Rn */
	r4 = r11;  /* 0C08633E mov Rm,Rn */
	IF(0x0C086340u); MACL = r11 * r13;  /* 0C086340 mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C086344u, 4);  /* 0C086342 mov.l @(disp,pc),Rn */
	IF(0x0C086344u); r12 = MACL;  /* 0C086344 sts macl,Rn */
	IF(0x0C086346u); MACL = r5 * r13;  /* 0C086346 mul.l Rm,Rn */
	r11 = 0xC0A8AE0u; UPD(0x0C08634Au, 4);  /* 0C086348 mov.l @(disp,pc),Rn */
	r12 += r3;  /* 0C08634A add Rm,Rn */
	IF(0x0C08634Cu); r13 = MACL;  /* 0C08634C sts macl,Rn */
	r13 += r3;  /* 0C08634E add Rm,Rn */
	r6 = R32(r13 + 0xCu); UPD(0x0C086352u, 4);  /* 0C086350 mov.l @(disp,Rm),Rn */
	W8(r2, r0); UPD(0x0C086354u, 1);  /* 0C086352 mov.b Rm,@Rn */
	r9 = 0x86u; UPD(0x0C086356u, 1);  /* 0C086354 mov.w @(disp,pc),Rn */
	IF(0x0C086356u); { u32 t_ = r11; PR = 0x0C08635Au; W32(r12 + 0xCu, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C08635Au); }  /* 0C086356 jsr @Rn */
L_0C08635A: BLKS(0x0C08635Au);
	r0 = r12;  /* 0C08635A mov Rm,Rn */
	IF(0x0C08635Cu); r11 = (u32)(s32)(s16)R16(r0 + r9); UPD(0x0C08635Eu, 2);  /* 0C08635C mov.w @(r0,Rm),Rn */
	r9 += 0x14u;  /* 0C08635E add #imm,Rn */
	IF(0x0C086360u); r5 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C086362u, 2);  /* 0C086360 mov.b @(r0,Rm),Rn */
	T = (r5 & r5) == 0;  /* 0C086362 tst Rm,Rn */
	if (!T) { UPD(0x0C0863E0u, 4); goto L_0C0863E0; }  /* 0C086364 bf */
L_0C086366: BLKS(0x0C086366u);
	r10 = 0xC069B20u; UPD(0x0C086368u, 1);  /* 0C086366 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C086368 mov Rm,Rn */
	r9 = 0xC069AF0u; UPD(0x0C08636Cu, 2);  /* 0C08636A mov.l @(disp,pc),Rn */
	IF(0x0C08636Cu); { u32 t_ = r10; PR = 0x0C086370u; r5 = R32(r12 + 0x2Cu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C086370u); }  /* 0C08636C jsr @Rn */
L_0C086370: BLKS(0x0C086370u);
	r8 = R32(r13 + 0x24u); UPD(0x0C086372u, 1);  /* 0C086370 mov.l @(disp,Rm),Rn */
	r4 = r11;  /* 0C086372 mov Rm,Rn */
	r8 += r0;  /* 0C086374 add Rm,Rn */
	IF(0x0C086376u); { u32 t_ = r9; PR = 0x0C08637Au; r5 = R32(r12 + 0x30u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C08637Au); }  /* 0C086376 jsr @Rn */
L_0C08637A: BLKS(0x0C08637Au);
	r8 -= r0;  /* 0C08637A sub Rm,Rn */
	r4 = r11;  /* 0C08637C mov Rm,Rn */
	r5 = R32(r12 + 0x2Cu); UPD(0x0C086380u, 3);  /* 0C08637E mov.l @(disp,Rm),Rn */
	IF(0x0C086380u); { u32 t_ = r9; PR = 0x0C086384u; W32(r12 + 0x24u, r8); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C086384u); }  /* 0C086380 jsr @Rn */
L_0C086384: BLKS(0x0C086384u);
	r9 = R32(r13 + 0x28u); UPD(0x0C086386u, 1);  /* 0C086384 mov.l @(disp,Rm),Rn */
	r4 = r11;  /* 0C086386 mov Rm,Rn */
	r9 += r0;  /* 0C086388 add Rm,Rn */
	IF(0x0C08638Au); { u32 t_ = r10; PR = 0x0C08638Eu; r5 = R32(r12 + 0x30u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C08638Eu); }  /* 0C08638A jsr @Rn */
L_0C08638E: BLKS(0x0C08638Eu);
	r9 += r0;  /* 0C08638E add Rm,Rn */
	r2 = R32(r12 + 0x2Cu); UPD(0x0C086392u, 2);  /* 0C086390 mov.l @(disp,Rm),Rn */
	T = (r2 & r2) == 0;  /* 0C086392 tst Rm,Rn */
	{ u32 c_ = T; W32(r12 + 0x28u, r9); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0862D4u, 4); goto L_0C0862D4; } UPD(0x0C086398u, 1); goto L_0C086398; }  /* 0C086394 bt/s */
L_0C086398: BLKS(0x0C086398u);
	r11 = 0x8000u; UPD(0x0C08639Au, 1);  /* 0C086398 mov.l @(disp,pc),Rn */
	r2 += r11;  /* 0C08639A add Rm,Rn */
	{ W32(r12 + 0x2Cu, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C085FFCu, 4); goto L_0C085FFC; }  /* 0C08639C bra */
L_0C0863E0: BLKS(0x0C0863E0u);
	r0 = 0xB0u; UPD(0x0C0863E2u, 1);  /* 0C0863E0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFECu;  /* 0C0863E2 add #imm,Rn */
	r3 = 0xFFF80000u; UPD(0x0C0863E6u, 2);  /* 0C0863E4 mov.l @(disp,pc),Rn */
	IF(0x0C0863E6u); r6 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C0863E8u, 1);  /* 0C0863E6 mov.b @(r0,Rm),Rn */
	W32(r12 + 0x2Cu, r3); UPD(0x0C0863EAu, 1);  /* 0C0863E8 mov.l Rm,@(disp,Rn) */
	r9 = r6 & 0xFF;  /* 0C0863EA extu.b Rm,Rn */
	W32(r15, r9); UPD(0x0C0863EEu, 2);  /* 0C0863EC mov.l Rm,@Rn */
	r0 = r12;  /* 0C0863EE mov Rm,Rn */
	r5 = 0xA9u; UPD(0x0C0863F2u, 2);  /* 0C0863F0 mov.w @(disp,pc),Rn */
	r10 = 0xC062780u; UPD(0x0C0863F4u, 1);  /* 0C0863F2 mov.l @(disp,pc),Rn */
	IF(0x0C0863F4u); r4 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C0863F6u, 1);  /* 0C0863F4 mov.b @(r0,Rm),Rn */
	r7 = 0x8000u; UPD(0x0C0863F8u, 1);  /* 0C0863F6 mov.l @(disp,pc),Rn */
	r0 = r4 & 0xFF;  /* 0C0863F8 extu.b Rm,Rn */
	W32(r15 + 0x8u, r7); UPD(0x0C0863FCu, 2);  /* 0C0863FA mov.l Rm,@(disp,Rn) */
	r4 = 0x2000u; UPD(0x0C0863FEu, 1);  /* 0C0863FC mov.w @(disp,pc),Rn */
	IF(0x0C0863FEu); { u32 t_ = r10; PR = 0x0C086402u; W32(r15 + 0x4u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C086402u); }  /* 0C0863FE jsr @Rn */
L_0C086402: BLKS(0x0C086402u);
	r2 = 0x808080u; UPD(0x0C086404u, 1);  /* 0C086402 mov.l @(disp,pc),Rn */
	r5 = 0x7u;  /* 0C086404 mov #imm,Rn */
	r8 = 0xC0BEEF0u; UPD(0x0C086408u, 2);  /* 0C086406 mov.l @(disp,pc),Rn */
	W32(r15 + 0xCu, r0); UPD(0x0C08640Au, 1);  /* 0C086408 mov.l Rm,@(disp,Rn) */
	W32(r15 + 0x10u, r2); UPD(0x0C08640Cu, 1);  /* 0C08640A mov.l Rm,@(disp,Rn) */
	r4 = R32(r12); UPD(0x0C08640Eu, 1);  /* 0C08640C mov.l @Rm,Rn */
	r6 = R32(r12 + 0x24u); UPD(0x0C086410u, 1);  /* 0C08640E mov.l @(disp,Rm),Rn */
	IF(0x0C086410u); { u32 t_ = r8; PR = 0x0C086414u; r7 = R32(r12 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BEEF0, 0x0C0BEEF0u, 0x0C086414u); }  /* 0C086410 jsr @Rn */
L_0C086414: BLKS(0x0C086414u);
	{ r15 += 0x14u; /* slot add #imm,Rn */ UPD(0x0C086366u, 3); goto L_0C086366; }  /* 0C086414 bra */
L_0C086420: BLKS(0x0C086420u);
	r4 += 0x2u;  /* 0C086420 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r4); UPD(0x0C086424u, 2);  /* 0C086422 mov.b @Rm,Rn */
	{ r0 &= 0x1u; /* slot and #imm,r0 */ UPD(0x0C08633Cu, 3); goto L_0C08633C; }  /* 0C086424 bra */
L_0C086430: BLKS(0x0C086430u);
	r12 = 0xC0A8B50u; UPD(0x0C086432u, 1);  /* 0C086430 mov.l @(disp,pc),Rn */
	IF(0x0C086432u); { u32 t_ = r12; PR = 0x0C086436u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C086436u); }  /* 0C086432 jsr @Rn */
L_0C086436: BLKS(0x0C086436u);
	IF(0x0C086436u); T = (s32)r0 >= 0;  /* 0C086436 cmp/pz Rn */
	{ u32 c_ = !T; r5 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C08645Au, 4); goto L_0C08645A; } goto L_0C08643C; }  /* 0C086438 bf/s */
L_0C08643C: BLKS(0x0C08643Cu);
	r1 = 0xC0835D0u; UPD(0x0C08643Eu, 2);  /* 0C08643C mov.l @(disp,pc),Rn */
	{ r4 = r11; /* slot mov Rm,Rn */ UPD(0x0C086030u, 3); goto L_0C086030; }  /* 0C08643E bra */
L_0C086450: BLKS(0x0C086450u);
	r10 = 0xC0A8B50u; UPD(0x0C086452u, 1);  /* 0C086450 mov.l @(disp,pc),Rn */
	IF(0x0C086452u); { u32 t_ = r10; PR = 0x0C086456u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C086456u); }  /* 0C086452 jsr @Rn */
L_0C086456: BLKS(0x0C086456u);
	IF(0x0C086456u); T = (s32)r0 >= 0;  /* 0C086456 cmp/pz Rn */
	if (T) { UPD(0x0C08645Eu, 4); goto L_0C08645E; }  /* 0C086458 bt */
L_0C08645A: BLKS(0x0C08645Au);
	{ IF(0x0C08645Cu); ; /* slot nop */ UPD(0x0C086050u, 3); goto L_0C086050; }  /* 0C08645A bra */
L_0C08645E: BLKS(0x0C08645Eu);
	r13 = 0xB4u; UPD(0x0C086460u, 1);  /* 0C08645E mov.w @(disp,pc),Rn */
	IF(0x0C086460u); MACL = r11 * r13;  /* 0C086460 mul.l Rm,Rn */
	r8 = 0xC286578u; UPD(0x0C086464u, 3);  /* 0C086462 mov.l @(disp,pc),Rn */
	IF(0x0C086464u); r12 = MACL;  /* 0C086464 sts macl,Rn */
	r12 += r8;  /* 0C086466 add Rm,Rn */
	IF(0x0C086468u); MACL = r0 * r13;  /* 0C086468 mul.l Rm,Rn */
	r6 = R32(r12); UPD(0x0C08646Cu, 5);  /* 0C08646A mov.l @Rm,Rn */
	r10 = 0xFFFFFEFFu; UPD(0x0C08646Eu, 1);  /* 0C08646C mov.w @(disp,pc),Rn */
	r13 += 0x4Cu;  /* 0C08646E add #imm,Rn */
	r6 &= r10;  /* 0C086470 and Rm,Rn */
	IF(0x0C086472u); r10 = MACL;  /* 0C086472 sts macl,Rn */
	r10 += r8;  /* 0C086474 add Rm,Rn */
	r4 = R32(r10); UPD(0x0C086478u, 5);  /* 0C086476 mov.l @Rm,Rn */
	r8 = r12;  /* 0C086478 mov Rm,Rn */
	r4 &= r13;  /* 0C08647A and Rm,Rn */
	r3 = 0x84u; UPD(0x0C08647Eu, 3);  /* 0C08647C mov.w @(disp,pc),Rn */
	r13 = r12;  /* 0C08647E mov Rm,Rn */
	r0 = 0x98u; UPD(0x0C086482u, 2);  /* 0C086480 mov.w @(disp,pc),Rn */
	r13 += r3;  /* 0C086482 add Rm,Rn */
	r8 += r0;  /* 0C086484 add Rm,Rn */
	r3 += r10;  /* 0C086486 add Rm,Rn */
	r0 += r10;  /* 0C086488 add Rm,Rn */
	r3 += 0x2u;  /* 0C08648A add #imm,Rn */
	r0 += 0x2u;  /* 0C08648C add #imm,Rn */
	r5 = 0xC0A8AE0u; UPD(0x0C086490u, 7);  /* 0C08648E mov.l @(disp,pc),Rn */
	r6 |= r4;  /* 0C086490 or Rm,Rn */
	r2 = (u32)(s32)(s16)R16(r3); UPD(0x0C086494u, 2);  /* 0C086492 mov.w @Rm,Rn */
	r13 += 0x2u;  /* 0C086494 add #imm,Rn */
	r7 = R32(r10 + 0xCu); UPD(0x0C086498u, 2);  /* 0C086496 mov.l @(disp,Rm),Rn */
	r8 += 0x2u;  /* 0C086498 add #imm,Rn */
	r9 = (u32)(s32)(s8)R8(r0); UPD(0x0C08649Cu, 2);  /* 0C08649A mov.b @Rm,Rn */
	r4 = r11;  /* 0C08649C mov Rm,Rn */
	W16(r13, r2); UPD(0x0C0864A0u, 2);  /* 0C08649E mov.w Rm,@Rn */
	W32(r12 + 0xCu, r7); UPD(0x0C0864A2u, 1);  /* 0C0864A0 mov.l Rm,@(disp,Rn) */
	W32(r12, r6); UPD(0x0C0864A4u, 1);  /* 0C0864A2 mov.l Rm,@Rn */
	IF(0x0C0864A4u); { u32 t_ = r5; PR = 0x0C0864A8u; W8(r8, r9); /* slot mov.b Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C0864A8u); }  /* 0C0864A4 jsr @Rn */
L_0C0864A8: BLKS(0x0C0864A8u);
	r0 = 0x88u; UPD(0x0C0864AAu, 1);  /* 0C0864A8 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)R16(r13); UPD(0x0C0864ACu, 1);  /* 0C0864AA mov.w @Rm,Rn */
	IF(0x0C0864ACu); r11 = (u32)(s32)(s16)R16(r0 + r12); UPD(0x0C0864AEu, 1);  /* 0C0864AC mov.w @(r0,Rm),Rn */
	r6 = 0xC069B20u; UPD(0x0C0864B0u, 1);  /* 0C0864AE mov.l @(disp,pc),Rn */
	r4 += r11;  /* 0C0864B0 add Rm,Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C0864B2 exts.w Rm,Rn */
	r4 = r11;  /* 0C0864B4 mov Rm,Rn */
	IF(0x0C0864B6u); { u32 t_ = r6; PR = 0x0C0864BAu; r5 = R32(r12 + 0x2Cu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 5); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0864BAu); }  /* 0C0864B6 jsr @Rn */
L_0C0864BA: BLKS(0x0C0864BAu);
	r3 = R32(r10 + 0x24u); UPD(0x0C0864BCu, 1);  /* 0C0864BA mov.l @(disp,Rm),Rn */
	r4 = r11;  /* 0C0864BC mov Rm,Rn */
	r13 = 0xC069AF0u; UPD(0x0C0864C0u, 2);  /* 0C0864BE mov.l @(disp,pc),Rn */
	r3 += r0;  /* 0C0864C0 add Rm,Rn */
	W32(r12 + 0x24u, r3); UPD(0x0C0864C4u, 2);  /* 0C0864C2 mov.l Rm,@(disp,Rn) */
	IF(0x0C0864C4u); { u32 t_ = r13; PR = 0x0C0864C8u; r5 = R32(r12 + 0x2Cu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0864C8u); }  /* 0C0864C4 jsr @Rn */
L_0C0864C8: BLKS(0x0C0864C8u);
	r2 = R32(r10 + 0x28u); UPD(0x0C0864CAu, 1);  /* 0C0864C8 mov.l @(disp,Rm),Rn */
	r10 += 0x50u;  /* 0C0864CA add #imm,Rn */
	r2 += r0;  /* 0C0864CC add Rm,Rn */
	r0 = R32(r10); UPD(0x0C0864D0u, 3);  /* 0C0864CE mov.l @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0864D0 tst Rm,Rn */
	{ u32 c_ = T; W32(r12 + 0x28u, r2); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C086532u, 4); goto L_0C086532; } UPD(0x0C0864D6u, 1); goto L_0C0864D6; }  /* 0C0864D2 bt/s */
L_0C0864D6: BLKS(0x0C0864D6u);
	r1 = 0xC069B20u; UPD(0x0C0864D8u, 1);  /* 0C0864D6 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C0864D8 mov Rm,Rn */
	r9 = 0x60000u; UPD(0x0C0864DCu, 2);  /* 0C0864DA mov.l @(disp,pc),Rn */
	IF(0x0C0864DCu); { u32 t_ = r1; PR = 0x0C0864E0u; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0864E0u); }  /* 0C0864DC jsr @Rn */
L_0C0864E0: BLKS(0x0C0864E0u);
	r10 = R32(r12 + 0x24u); UPD(0x0C0864E2u, 1);  /* 0C0864E0 mov.l @(disp,Rm),Rn */
	r5 = r9;  /* 0C0864E2 mov Rm,Rn */
	r4 = r11;  /* 0C0864E4 mov Rm,Rn */
	r8 = 0xC062780u; UPD(0x0C0864E8u, 3);  /* 0C0864E6 mov.l @(disp,pc),Rn */
	IF(0x0C0864E8u); { u32 t_ = r13; PR = 0x0C0864ECu; r10 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0864ECu); }  /* 0C0864E8 jsr @Rn */
L_0C0864EC: BLKS(0x0C0864ECu);
	r9 = R32(r12 + 0x28u); UPD(0x0C0864EEu, 1);  /* 0C0864EC mov.l @(disp,Rm),Rn */
	r4 = 0xFu;  /* 0C0864EE mov #imm,Rn */
	IF(0x0C0864F0u); { u32 t_ = r8; PR = 0x0C0864F4u; r9 += r0; /* slot add Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0864F4u); }  /* 0C0864F0 jsr @Rn */
L_0C0864F4: BLKS(0x0C0864F4u);
	r0 += r11;  /* 0C0864F4 add Rm,Rn */
	r0 += 0xFFFFFFF8u;  /* 0C0864F6 add #imm,Rn */
	r11 = (u32)(s32)(s16)r0;  /* 0C0864F8 exts.w Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0864FCu, 4);  /* 0C0864FA mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFECu;  /* 0C0864FC add #imm,Rn */
	IF(0x0C0864FEu); r6 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C086500u, 2);  /* 0C0864FE mov.b @(r0,Rm),Rn */
	r4 = r11;  /* 0C086500 mov Rm,Rn */
	r3 = r6 & 0xFF;  /* 0C086502 extu.b Rm,Rn */
	W32(r15, r3); UPD(0x0C086506u, 3);  /* 0C086504 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C086506 add #imm,Rn */
	IF(0x0C086508u); r2 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C08650Au, 2);  /* 0C086508 mov.b @(r0,Rm),Rn */
	r7 = 0xC069B20u; UPD(0x0C08650Cu, 1);  /* 0C08650A mov.l @(disp,pc),Rn */
	r5 = r2 & 0xFF;  /* 0C08650C extu.b Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C086510u, 2);  /* 0C08650E mov.l Rm,@(disp,Rn) */
	r8 = 0x10000u; UPD(0x0C086512u, 1);  /* 0C086510 mov.l @(disp,pc),Rn */
	IF(0x0C086512u); { u32 t_ = r7; PR = 0x0C086516u; r5 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C086516u); }  /* 0C086512 jsr @Rn */
L_0C086516: BLKS(0x0C086516u);
	r4 = r11;  /* 0C086516 mov Rm,Rn */
	r11 = 0x808080u; UPD(0x0C08651Au, 2);  /* 0C086518 mov.l @(disp,pc),Rn */
	r5 = r8;  /* 0C08651A mov Rm,Rn */
	IF(0x0C08651Cu); { u32 t_ = r13; PR = 0x0C086520u; W32(r15 + 0x8u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C086520u); }  /* 0C08651C jsr @Rn */
L_0C086520: BLKS(0x0C086520u);
	W32(r15 + 0xCu, r0); UPD(0x0C086522u, 1);  /* 0C086520 mov.l Rm,@(disp,Rn) */
	r5 = 0x7u;  /* 0C086522 mov #imm,Rn */
	W32(r15 + 0x10u, r11); UPD(0x0C086526u, 2);  /* 0C086524 mov.l Rm,@(disp,Rn) */
	r6 = r10;  /* 0C086526 mov Rm,Rn */
	r4 = R32(r12); UPD(0x0C08652Au, 2);  /* 0C086528 mov.l @Rm,Rn */
	r12 = 0xC0BEEF0u; UPD(0x0C08652Cu, 1);  /* 0C08652A mov.l @(disp,pc),Rn */
	IF(0x0C08652Cu); { u32 t_ = r12; PR = 0x0C086530u; r7 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BEEF0, 0x0C0BEEF0u, 0x0C086530u); }  /* 0C08652C jsr @Rn */
L_0C086530: BLKS(0x0C086530u);
	r15 += 0x14u;  /* 0C086530 add #imm,Rn */
	UPD(0x0C086532u, 1);
L_0C086532: BLKS(0x0C086532u);
	{ r14 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C085FFEu, 3); goto L_0C085FFE; }  /* 0C086532 bra */
L_0C086580: BLKS(0x0C086580u);
	r13 = 0xC0A8B50u; UPD(0x0C086582u, 1);  /* 0C086580 mov.l @(disp,pc),Rn */
	IF(0x0C086582u); { u32 t_ = r13; PR = 0x0C086586u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C086586u); }  /* 0C086582 jsr @Rn */
L_0C086586: BLKS(0x0C086586u);
	IF(0x0C086586u); T = (s32)r0 >= 0;  /* 0C086586 cmp/pz Rn */
	{ u32 c_ = !T; r5 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C08665Cu, 4); goto L_0C08665C; } goto L_0C08658C; }  /* 0C086588 bf/s */
L_0C08658C: BLKS(0x0C08658Cu);
	r0 = 0xB4u; UPD(0x0C08658Eu, 2);  /* 0C08658C mov.w @(disp,pc),Rn */
	IF(0x0C08658Eu); MACL = r11 * r0;  /* 0C08658E mul.l Rm,Rn */
	r10 = 0xC286578u; UPD(0x0C086592u, 3);  /* 0C086590 mov.l @(disp,pc),Rn */
	IF(0x0C086592u); r12 = MACL;  /* 0C086592 sts macl,Rn */
	r12 += r10;  /* 0C086594 add Rm,Rn */
	IF(0x0C086596u); MACL = r5 * r0;  /* 0C086596 mul.l Rm,Rn */
	r6 = R32(r12); UPD(0x0C08659Au, 5);  /* 0C086598 mov.l @Rm,Rn */
	r8 = r12;  /* 0C08659A mov Rm,Rn */
	r13 = 0xFFFFFEFFu; UPD(0x0C08659Eu, 2);  /* 0C08659C mov.w @(disp,pc),Rn */
	r0 += 0x4Cu;  /* 0C08659E add #imm,Rn */
	r6 &= r13;  /* 0C0865A0 and Rm,Rn */
	IF(0x0C0865A2u); r13 = MACL;  /* 0C0865A2 sts macl,Rn */
	r13 += r10;  /* 0C0865A4 add Rm,Rn */
	r4 = R32(r13 + 0xCu); UPD(0x0C0865A8u, 5);  /* 0C0865A6 mov.l @(disp,Rm),Rn */
	r10 = r12;  /* 0C0865A8 mov Rm,Rn */
	r3 = 0x84u; UPD(0x0C0865ACu, 2);  /* 0C0865AA mov.w @(disp,pc),Rn */
	r5 = 0x98u; UPD(0x0C0865AEu, 1);  /* 0C0865AC mov.w @(disp,pc),Rn */
	r8 += r3;  /* 0C0865AE add Rm,Rn */
	W32(r12 + 0xCu, r4); UPD(0x0C0865B2u, 2);  /* 0C0865B0 mov.l Rm,@(disp,Rn) */
	r10 += r5;  /* 0C0865B2 add Rm,Rn */
	r9 = R32(r13); UPD(0x0C0865B6u, 2);  /* 0C0865B4 mov.l @Rm,Rn */
	r4 = r11;  /* 0C0865B6 mov Rm,Rn */
	r3 += r13;  /* 0C0865B8 add Rm,Rn */
	r5 += r13;  /* 0C0865BA add Rm,Rn */
	r3 += 0x2u;  /* 0C0865BC add #imm,Rn */
	r5 += 0x2u;  /* 0C0865BE add #imm,Rn */
	r11 = 0xC0A8AE0u; UPD(0x0C0865C2u, 6);  /* 0C0865C0 mov.l @(disp,pc),Rn */
	r9 &= r0;  /* 0C0865C2 and Rm,Rn */
	r2 = (u32)(s32)(s16)R16(r3); UPD(0x0C0865C6u, 2);  /* 0C0865C4 mov.w @Rm,Rn */
	r6 |= r9;  /* 0C0865C6 or Rm,Rn */
	r7 = (u32)(s32)(s8)R8(r5); UPD(0x0C0865CAu, 2);  /* 0C0865C8 mov.b @Rm,Rn */
	r8 += 0x2u;  /* 0C0865CA add #imm,Rn */
	r10 += 0x2u;  /* 0C0865CC add #imm,Rn */
	W32(r12, r6); UPD(0x0C0865D0u, 3);  /* 0C0865CE mov.l Rm,@Rn */
	W16(r8, r2); UPD(0x0C0865D2u, 1);  /* 0C0865D0 mov.w Rm,@Rn */
	IF(0x0C0865D2u); { u32 t_ = r11; PR = 0x0C0865D6u; W8(r10, r7); /* slot mov.b Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C0865D6u); }  /* 0C0865D2 jsr @Rn */
L_0C0865D6: BLKS(0x0C0865D6u);
	r0 = (u32)(s32)(s8)R8(r10); UPD(0x0C0865D8u, 1);  /* 0C0865D6 mov.b @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0865D8 tst Rm,Rn */
	{ u32 c_ = T; r11 = (u32)(s32)(s16)R16(r8); /* slot mov.w @Rm,Rn */ if (c_) { UPD(0x0C086640u, 4); goto L_0C086640; } UPD(0x0C0865DEu, 1); goto L_0C0865DE; }  /* 0C0865DA bt/s */
L_0C0865DE: BLKS(0x0C0865DEu);
	r8 = r12;  /* 0C0865DE mov Rm,Rn */
	r4 = 0xFFF80000u; UPD(0x0C0865E2u, 2);  /* 0C0865E0 mov.l @(disp,pc),Rn */
	r8 += 0x50u;  /* 0C0865E2 add #imm,Rn */
	W32(r14, r8); UPD(0x0C0865E6u, 2);  /* 0C0865E4 mov.l Rm,@Rn */
	W32(r8, r4); UPD(0x0C0865E8u, 1);  /* 0C0865E6 mov.l Rm,@Rn */
L_0C0865E8: BLKS(0x0C0865E8u);
	r6 = R32(r14); UPD(0x0C0865EAu, 1);  /* 0C0865E8 mov.l @Rm,Rn */
	r4 = r11;  /* 0C0865EA mov Rm,Rn */
	r10 = 0xC069B20u; UPD(0x0C0865EEu, 2);  /* 0C0865EC mov.l @(disp,pc),Rn */
	r3 = R32(r6); UPD(0x0C0865F0u, 1);  /* 0C0865EE mov.l @Rm,Rn */
	r5 = R32(r12 + 0x2Cu); UPD(0x0C0865F2u, 1);  /* 0C0865F0 mov.l @(disp,Rm),Rn */
	r9 = 0xC069AF0u; UPD(0x0C0865F4u, 1);  /* 0C0865F2 mov.l @(disp,pc),Rn */
	IF(0x0C0865F4u); { u32 t_ = r10; PR = 0x0C0865F8u; r5 += r3; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0865F8u); }  /* 0C0865F4 jsr @Rn */
L_0C0865F8: BLKS(0x0C0865F8u);
	r8 = R32(r13 + 0x24u); UPD(0x0C0865FAu, 1);  /* 0C0865F8 mov.l @(disp,Rm),Rn */
	r4 = r11;  /* 0C0865FA mov Rm,Rn */
	r5 = R32(r12 + 0x30u); UPD(0x0C0865FEu, 2);  /* 0C0865FC mov.l @(disp,Rm),Rn */
	IF(0x0C0865FEu); { u32 t_ = r9; PR = 0x0C086602u; r8 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C086602u); }  /* 0C0865FE jsr @Rn */
L_0C086602: BLKS(0x0C086602u);
	r2 = R32(r14); UPD(0x0C086604u, 1);  /* 0C086602 mov.l @Rm,Rn */
	r8 -= r0;  /* 0C086604 sub Rm,Rn */
	r7 = R32(r2); UPD(0x0C086608u, 2);  /* 0C086606 mov.l @Rm,Rn */
	r4 = r11;  /* 0C086608 mov Rm,Rn */
	r5 = R32(r12 + 0x2Cu); UPD(0x0C08660Cu, 2);  /* 0C08660A mov.l @(disp,Rm),Rn */
	W32(r12 + 0x24u, r8); UPD(0x0C08660Eu, 1);  /* 0C08660C mov.l Rm,@(disp,Rn) */
	IF(0x0C08660Eu); { u32 t_ = r9; PR = 0x0C086612u; r5 += r7; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C086612u); }  /* 0C08660E jsr @Rn */
L_0C086612: BLKS(0x0C086612u);
	r9 = R32(r13 + 0x28u); UPD(0x0C086614u, 1);  /* 0C086612 mov.l @(disp,Rm),Rn */
	r4 = r11;  /* 0C086614 mov Rm,Rn */
	r9 += r0;  /* 0C086616 add Rm,Rn */
	IF(0x0C086618u); { u32 t_ = r10; PR = 0x0C08661Cu; r5 = R32(r12 + 0x30u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C08661Cu); }  /* 0C086618 jsr @Rn */
L_0C08661C: BLKS(0x0C08661Cu);
	r9 += r0;  /* 0C08661C add Rm,Rn */
	W32(r12 + 0x28u, r9); UPD(0x0C086620u, 2);  /* 0C08661E mov.l Rm,@(disp,Rn) */
	r12 = R32(r14); UPD(0x0C086622u, 1);  /* 0C086620 mov.l @Rm,Rn */
	r2 = R32(r12); UPD(0x0C086624u, 1);  /* 0C086622 mov.l @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C086624 tst Rm,Rn */
	if (T) { UPD(0x0C086630u, 4); goto L_0C086630; }  /* 0C086626 bt */
L_0C086628: BLKS(0x0C086628u);
	r11 = R32(r14); UPD(0x0C08662Au, 1);  /* 0C086628 mov.l @Rm,Rn */
	r5 = 0x8000u; UPD(0x0C08662Cu, 1);  /* 0C08662A mov.l @(disp,pc),Rn */
	r2 += r5;  /* 0C08662C add Rm,Rn */
	W32(r11, r2); UPD(0x0C086630u, 2);  /* 0C08662E mov.l Rm,@Rn */
L_0C086630: BLKS(0x0C086630u);
	{ r14 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C085FFEu, 3); goto L_0C085FFE; }  /* 0C086630 bra */
L_0C086640: BLKS(0x0C086640u);
	r1 = r12;  /* 0C086640 mov Rm,Rn */
	r1 += 0x50u;  /* 0C086642 add #imm,Rn */
	{ W32(r14, r1); /* slot mov.l Rm,@Rn */ UPD(0x0C0865E8u, 5); goto L_0C0865E8; }  /* 0C086644 bra */
L_0C086650: BLKS(0x0C086650u);
	r10 = 0xC0A8B50u; UPD(0x0C086652u, 1);  /* 0C086650 mov.l @(disp,pc),Rn */
	IF(0x0C086652u); { u32 t_ = r10; PR = 0x0C086656u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C086656u); }  /* 0C086652 jsr @Rn */
L_0C086656: BLKS(0x0C086656u);
	IF(0x0C086656u); T = (s32)r0 >= 0;  /* 0C086656 cmp/pz Rn */
	{ u32 c_ = T; r5 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C086660u, 4); goto L_0C086660; } UPD(0x0C08665Cu, 1); goto L_0C08665C; }  /* 0C086658 bt/s */
L_0C08665C: BLKS(0x0C08665Cu);
	{ IF(0x0C08665Eu); ; /* slot nop */ UPD(0x0C086050u, 3); goto L_0C086050; }  /* 0C08665C bra */
L_0C086660: BLKS(0x0C086660u);
	r0 = 0xB4u; UPD(0x0C086662u, 1);  /* 0C086660 mov.w @(disp,pc),Rn */
	IF(0x0C086662u); MACL = r11 * r0;  /* 0C086662 mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C086666u, 3);  /* 0C086664 mov.l @(disp,pc),Rn */
	IF(0x0C086666u); r13 = MACL;  /* 0C086666 sts macl,Rn */
	r13 += r2;  /* 0C086668 add Rm,Rn */
	IF(0x0C08666Au); MACL = r5 * r0;  /* 0C08666A mul.l Rm,Rn */
	r9 = R32(r13); UPD(0x0C08666Eu, 5);  /* 0C08666C mov.l @Rm,Rn */
	r6 = r13;  /* 0C08666E mov Rm,Rn */
	r12 = 0xFFFFFEFFu; UPD(0x0C086672u, 2);  /* 0C086670 mov.w @(disp,pc),Rn */
	r0 += 0x4Cu;  /* 0C086672 add #imm,Rn */
	r9 &= r12;  /* 0C086674 and Rm,Rn */
	IF(0x0C086676u); r12 = MACL;  /* 0C086676 sts macl,Rn */
	r12 += r2;  /* 0C086678 add Rm,Rn */
	r7 = R32(r12); UPD(0x0C08667Cu, 5);  /* 0C08667A mov.l @Rm,Rn */
	r7 &= r0;  /* 0C08667C and Rm,Rn */
	r9 |= r7;  /* 0C08667E or Rm,Rn */
	W32(r13, r9); UPD(0x0C086682u, 3);  /* 0C086680 mov.l Rm,@Rn */
	r10 = 0x84u; UPD(0x0C086684u, 1);  /* 0C086682 mov.w @(disp,pc),Rn */
	r9 = r13;  /* 0C086684 mov Rm,Rn */
	r9 += r10;  /* 0C086686 add Rm,Rn */
	r8 = 0x98u; UPD(0x0C08668Au, 3);  /* 0C086688 mov.w @(disp,pc),Rn */
	r10 += r12;  /* 0C08668A add Rm,Rn */
	r10 += 0x2u;  /* 0C08668C add #imm,Rn */
	r6 += r8;  /* 0C08668E add Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r10); UPD(0x0C086692u, 4);  /* 0C086690 mov.w @Rm,Rn */
	r8 += r12;  /* 0C086692 add Rm,Rn */
	r9 += 0x2u;  /* 0C086694 add #imm,Rn */
	r8 += 0x2u;  /* 0C086696 add #imm,Rn */
	r0 = 0xC0A8AE0u; UPD(0x0C08669Au, 4);  /* 0C086698 mov.l @(disp,pc),Rn */
	r6 += 0x2u;  /* 0C08669A add #imm,Rn */
	r5 = (u32)(s32)(s8)R8(r8); UPD(0x0C08669Eu, 2);  /* 0C08669C mov.b @Rm,Rn */
	r3 = R32(r12 + 0xCu); UPD(0x0C0866A0u, 1);  /* 0C08669E mov.l @(disp,Rm),Rn */
	W16(r9, r4); UPD(0x0C0866A2u, 1);  /* 0C0866A0 mov.w Rm,@Rn */
	W8(r6, r5); UPD(0x0C0866A4u, 1);  /* 0C0866A2 mov.b Rm,@Rn */
	r4 = r11;  /* 0C0866A4 mov Rm,Rn */
	IF(0x0C0866A6u); { u32 t_ = r0; PR = 0x0C0866AAu; W32(r13 + 0xCu, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C0866AAu); }  /* 0C0866A6 jsr @Rn */
L_0C0866AA: BLKS(0x0C0866AAu);
	r0 = 0x88u; UPD(0x0C0866ACu, 1);  /* 0C0866AA mov.w @(disp,pc),Rn */
	r7 = (u32)(s32)(s16)R16(r9); UPD(0x0C0866AEu, 1);  /* 0C0866AC mov.w @Rm,Rn */
	IF(0x0C0866AEu); r2 = (u32)(s32)(s16)R16(r0 + r13); UPD(0x0C0866B0u, 1);  /* 0C0866AE mov.w @(r0,Rm),Rn */
	r10 = 0xC069B20u; UPD(0x0C0866B2u, 1);  /* 0C0866B0 mov.l @(disp,pc),Rn */
	r7 += r2;  /* 0C0866B2 add Rm,Rn */
	r11 = (u32)(s32)(s16)r7;  /* 0C0866B4 exts.w Rm,Rn */
	r4 = r11;  /* 0C0866B6 mov Rm,Rn */
	IF(0x0C0866B8u); { u32 t_ = r10; PR = 0x0C0866BCu; r5 = R32(r13 + 0x2Cu); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 5); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0866BCu); }  /* 0C0866B8 jsr @Rn */
L_0C0866BC: BLKS(0x0C0866BCu);
	r4 = R32(r12 + 0x24u); UPD(0x0C0866BEu, 1);  /* 0C0866BC mov.l @(disp,Rm),Rn */
	r9 = 0xC069AF0u; UPD(0x0C0866C0u, 1);  /* 0C0866BE mov.l @(disp,pc),Rn */
	r4 += r0;  /* 0C0866C0 add Rm,Rn */
	W32(r13 + 0x24u, r4); UPD(0x0C0866C4u, 2);  /* 0C0866C2 mov.l Rm,@(disp,Rn) */
	r5 = R32(r13 + 0x2Cu); UPD(0x0C0866C6u, 1);  /* 0C0866C4 mov.l @(disp,Rm),Rn */
	IF(0x0C0866C6u); { u32 t_ = r9; PR = 0x0C0866CAu; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0866CAu); }  /* 0C0866C6 jsr @Rn */
L_0C0866CA: BLKS(0x0C0866CAu);
	r8 = R32(r12 + 0x28u); UPD(0x0C0866CCu, 1);  /* 0C0866CA mov.l @(disp,Rm),Rn */
	r8 += r0;  /* 0C0866CC add Rm,Rn */
	{ W32(r13 + 0x28u, r8); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C085FFCu, 4); goto L_0C085FFC; }  /* 0C0866CE bra */
L_0C0866E0: BLKS(0x0C0866E0u);
	r9 = 0xC0A8B50u; UPD(0x0C0866E2u, 1);  /* 0C0866E0 mov.l @(disp,pc),Rn */
	IF(0x0C0866E2u); { u32 t_ = r9; PR = 0x0C0866E6u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C0866E6u); }  /* 0C0866E2 jsr @Rn */
L_0C0866E6: BLKS(0x0C0866E6u);
	IF(0x0C0866E6u); T = (s32)r0 >= 0;  /* 0C0866E6 cmp/pz Rn */
	{ u32 c_ = T; r5 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0866F0u, 4); goto L_0C0866F0; } goto L_0C0866EC; }  /* 0C0866E8 bt/s */
L_0C0866EC: BLKS(0x0C0866ECu);
	{ IF(0x0C0866EEu); ; /* slot nop */ UPD(0x0C086050u, 4); goto L_0C086050; }  /* 0C0866EC bra */
L_0C0866F0: BLKS(0x0C0866F0u);
	r1 = 0xC0834A0u; UPD(0x0C0866F2u, 1);  /* 0C0866F0 mov.l @(disp,pc),Rn */
	{ r4 = r11; /* slot mov Rm,Rn */ UPD(0x0C086030u, 3); goto L_0C086030; }  /* 0C0866F2 bra */
}

void blk_f_0C086720(sh3_t *c)
{
	LOCALS;
L_0C086720: BLKS(0x0C086720u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C086722u, 1);  /* 0C086720 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C086724u, 1);  /* 0C086722 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C086726u, 1);  /* 0C086724 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C086728u, 1);  /* 0C086726 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C08672Au, 1);  /* 0C086728 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C08672Cu, 1);  /* 0C08672A mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C08672Eu, 1);  /* 0C08672C mov.l Rm,@-Rn */
	r11 = 0xC2460ACu; UPD(0x0C086730u, 1);  /* 0C08672E mov.l @(disp,pc),Rn */
	IF(0x0C086730u); r15 -= 4; W32(r15, PR); UPD(0x0C086732u, 1);  /* 0C086730 sts.l pr,@-Rn */
	r8 = 0xC069510u; UPD(0x0C086734u, 1);  /* 0C086732 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF0u;  /* 0C086734 add #imm,Rn */
	r2 = 0xC2B1811u; UPD(0x0C086738u, 2);  /* 0C086736 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C086738 mov Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r11); UPD(0x0C08673Cu, 2);  /* 0C08673A mov.w @Rm,Rn */
	r10 = (u32)(s32)(s8)R8(r2); UPD(0x0C08673Eu, 1);  /* 0C08673C mov.b @Rm,Rn */
	r5 = 0x8000u; UPD(0x0C086740u, 1);  /* 0C08673E mov.l @(disp,pc),Rn */
	IF(0x0C086740u); { u32 t_ = r8; PR = 0x0C086744u; r4 = r0 & 0xFFFF; /* slot extu.w Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069510, 0x0C069510u, 0x0C086744u); }  /* 0C086740 jsr @Rn */
L_0C086744: BLKS(0x0C086744u);
	T = (r0 & r0) == 0;  /* 0C086744 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C086760u, 4); goto L_0C086760; } UPD(0x0C08674Au, 1); goto L_0C08674A; }  /* 0C086746 bf/s */
L_0C08674A: BLKS(0x0C08674Au);
	r14 += 0x10u;  /* 0C08674A add #imm,Rn */
	r15 = r14;  /* 0C08674C mov Rm,Rn */
	IF(0x0C08674Eu); PR = R32(r15); r15 += 4; UPD(0x0C086750u, 3);  /* 0C08674E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C086752u, 1);  /* 0C086750 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C086754u, 1);  /* 0C086752 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C086756u, 1);  /* 0C086754 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C086758u, 1);  /* 0C086756 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08675Au, 1);  /* 0C086758 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08675Cu, 1);  /* 0C08675A mov.l @Rm+,Rn */
	IF(0x0C08675Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08675C rts */
L_0C086760: BLKS(0x0C086760u);
	r8 = 0xC071740u; UPD(0x0C086762u, 1);  /* 0C086760 mov.l @(disp,pc),Rn */
	IF(0x0C086762u); { u32 t_ = r8; PR = 0x0C086766u; r4 = 0x3u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C071740, 0x0C071740u, 0x0C086766u); }  /* 0C086762 jsr @Rn */
L_0C086766: BLKS(0x0C086766u);
	T = (r0 & r0) == 0;  /* 0C086766 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C08674Au, 4); goto L_0C08674A; } goto L_0C08676C; }  /* 0C086768 bt/s */
L_0C08676C: BLKS(0x0C08676Cu);
	r8 = 0xC28EDFCu; UPD(0x0C08676Eu, 2);  /* 0C08676C mov.l @(disp,pc),Rn */
	r9 = 0xB4u; UPD(0x0C086770u, 1);  /* 0C08676E mov.w @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r8); r8 += 2; r13 = v_; } UPD(0x0C086772u, 1);  /* 0C086770 mov.w @Rm+,Rn */
	IF(0x0C086772u); MACL = r13 * r9;  /* 0C086772 mul.l Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C086776u, 3);  /* 0C086774 mov.l @(disp,pc),Rn */
	IF(0x0C086776u); r9 = MACL;  /* 0C086776 sts macl,Rn */
	r0 = 0xC2B03A2u; UPD(0x0C08677Au, 2);  /* 0C086778 mov.l @(disp,pc),Rn */
	r9 += r5;  /* 0C08677A add Rm,Rn */
	r12 = 0x84u; UPD(0x0C08677Eu, 2);  /* 0C08677C mov.w @(disp,pc),Rn */
	r3 = (u32)(s32)(s16)R16(r11); UPD(0x0C086780u, 1);  /* 0C08677E mov.w @Rm,Rn */
	r12 += r9;  /* 0C086780 add Rm,Rn */
	r6 = (u32)(s32)(s16)R16(r0); UPD(0x0C086784u, 2);  /* 0C086782 mov.w @Rm,Rn */
	r12 += 0x2u;  /* 0C086784 add #imm,Rn */
	r4 = 0xC0000014u; UPD(0x0C086788u, 2);  /* 0C086786 mov.l @(disp,pc),Rn */
	r2 = r3 & 0xFFFF;  /* 0C086788 extu.w Rm,Rn */
	W16(r12, r6); UPD(0x0C08678Cu, 2);  /* 0C08678A mov.w Rm,@Rn */
	r1 = 0xC0A8A30u; UPD(0x0C08678Eu, 1);  /* 0C08678C mov.l @(disp,pc),Rn */
	r12 = 0x0u;  /* 0C08678E mov #imm,Rn */
	r0 = 0x8Au; UPD(0x0C086792u, 2);  /* 0C086790 mov.w @(disp,pc),Rn */
	W32(r14, r8); UPD(0x0C086794u, 1);  /* 0C086792 mov.l Rm,@Rn */
	W32(r9, r4); UPD(0x0C086796u, 1);  /* 0C086794 mov.l Rm,@Rn */
	r8 = 0x4Cu;  /* 0C086796 mov #imm,Rn */
	IF(0x0C086798u); W16(r0 + r9, r6); UPD(0x0C08679Au, 2);  /* 0C086798 mov.w Rm,@(r0,Rn) */
	r4 = r13;  /* 0C08679A mov Rm,Rn */
	W32(r9 + 0x4u, r2); UPD(0x0C08679Eu, 2);  /* 0C08679C mov.l Rm,@(disp,Rn) */
	W32(r9 + 0xCu, r12); UPD(0x0C0867A0u, 1);  /* 0C08679E mov.l Rm,@(disp,Rn) */
	IF(0x0C0867A0u); { u32 t_ = r1; PR = 0x0C0867A4u; W32(r9 + 0x8u, r12); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C0867A4u); }  /* 0C0867A0 jsr @Rn */
L_0C0867A4: BLKS(0x0C0867A4u);
	IF(0x0C0867A4u); MACL = r10 * r8;  /* 0C0867A4 mul.l Rm,Rn */
	r7 = 0xC237C08u; UPD(0x0C0867A8u, 3);  /* 0C0867A6 mov.l @(disp,pc),Rn */
	r5 = 0xC286318u; UPD(0x0C0867AAu, 1);  /* 0C0867A8 mov.l @(disp,pc),Rn */
	IF(0x0C0867AAu); r8 = MACL;  /* 0C0867AA sts macl,Rn */
	r3 = 0xC3C43C6u; UPD(0x0C0867AEu, 2);  /* 0C0867AC mov.l @(disp,pc),Rn */
	r8 += r5;  /* 0C0867AE add Rm,Rn */
	r6 = (u32)(s32)(s16)R16(r7); UPD(0x0C0867B2u, 2);  /* 0C0867B0 mov.w @Rm,Rn */
	r4 = R32(r8 + 0x8u); UPD(0x0C0867B4u, 1);  /* 0C0867B2 mov.l @(disp,Rm),Rn */
	IF(0x0C0867B4u); r6 <<= 16;  /* 0C0867B4 shll16 Rn */
	r2 = (u32)(s32)(s16)R16(r3); UPD(0x0C0867B8u, 2);  /* 0C0867B6 mov.w @Rm,Rn */
	r6 -= r4;  /* 0C0867B8 sub Rm,Rn */
	r0 = 0xC0A9AE0u; UPD(0x0C0867BCu, 2);  /* 0C0867BA mov.l @(disp,pc),Rn */
	IF(0x0C0867BCu); r2 <<= 16;  /* 0C0867BC shll16 Rn */
	W32(r9 + 0x28u, r2); UPD(0x0C0867C0u, 2);  /* 0C0867BE mov.l Rm,@(disp,Rn) */
	r4 = r13;  /* 0C0867C0 mov Rm,Rn */
	IF(0x0C0867C2u); { u32 t_ = r0; PR = 0x0C0867C6u; W32(r9 + 0x24u, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C0867C6u); }  /* 0C0867C2 jsr @Rn */
L_0C0867C6: BLKS(0x0C0867C6u);
	r7 = 0xB0u; UPD(0x0C0867C8u, 1);  /* 0C0867C6 mov.w @(disp,pc),Rn */
	r8 += 0x42u;  /* 0C0867C8 add #imm,Rn */
	r7 += r9;  /* 0C0867CA add Rm,Rn */
	W32(r14 + 0x4u, r7); UPD(0x0C0867CEu, 3);  /* 0C0867CC mov.l Rm,@(disp,Rn) */
	r4 = 0xA8u; UPD(0x0C0867D0u, 1);  /* 0C0867CE mov.w @(disp,pc),Rn */
	r1 = 0xADu; UPD(0x0C0867D2u, 1);  /* 0C0867D0 mov.w @(disp,pc),Rn */
	r4 += r9;  /* 0C0867D2 add Rm,Rn */
	W8(r7, r10); UPD(0x0C0867D6u, 2);  /* 0C0867D4 mov.b Rm,@Rn */
	r1 += r9;  /* 0C0867D6 add Rm,Rn */
	r4 += 0x1u;  /* 0C0867D8 add #imm,Rn */
	W32(r14 + 0x8u, r4); UPD(0x0C0867DCu, 3);  /* 0C0867DA mov.l Rm,@(disp,Rn) */
	W32(r14 + 0xCu, r1); UPD(0x0C0867DEu, 1);  /* 0C0867DC mov.l Rm,@(disp,Rn) */
	r5 = (u32)(s32)(s8)R8(r8); UPD(0x0C0867E0u, 1);  /* 0C0867DE mov.b @Rm,Rn */
	r3 = 0xC0A9D30u; UPD(0x0C0867E2u, 1);  /* 0C0867E0 mov.l @(disp,pc),Rn */
	W8(r1, r5); UPD(0x0C0867E4u, 1);  /* 0C0867E2 mov.b Rm,@Rn */
	W8(r4, r5); UPD(0x0C0867E6u, 1);  /* 0C0867E4 mov.b Rm,@Rn */
	r6 = 0xC297460u; UPD(0x0C0867E8u, 1);  /* 0C0867E6 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C0867E8 mov Rm,Rn */
	IF(0x0C0867EAu); { u32 t_ = r3; PR = 0x0C0867EEu; r5 = R32(r6); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0A9D30, 0x0C0A9D30u, 0x0C0867EEu); }  /* 0C0867EA jsr @Rn */
L_0C0867EE: BLKS(0x0C0867EEu);
	r10 = 0x8Cu; UPD(0x0C0867F0u, 1);  /* 0C0867EE mov.w @(disp,pc),Rn */
	r3 = 0x8u;  /* 0C0867F0 mov #imm,Rn */
	r0 = 0x90u; UPD(0x0C0867F4u, 2);  /* 0C0867F2 mov.w @(disp,pc),Rn */
	r10 += r9;  /* 0C0867F4 add Rm,Rn */
	r2 = R32(r14); UPD(0x0C0867F8u, 2);  /* 0C0867F6 mov.l @Rm,Rn */
	IF(0x0C0867F8u); W32(r0 + r9, r12); UPD(0x0C0867FAu, 1);  /* 0C0867F8 mov.l Rm,@(r0,Rn) */
	W32(r10, r12); UPD(0x0C0867FCu, 1);  /* 0C0867FA mov.l Rm,@Rn */
	r0 = 0xB4u; UPD(0x0C0867FEu, 1);  /* 0C0867FC mov.w @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r2); r2 += 2; r10 = v_; } UPD(0x0C086800u, 1);  /* 0C0867FE mov.w @Rm+,Rn */
	r8 = 0x94u; UPD(0x0C086802u, 1);  /* 0C086800 mov.w @(disp,pc),Rn */
	IF(0x0C086802u); MACL = r10 * r0;  /* 0C086802 mul.l Rm,Rn */
	r8 += r9;  /* 0C086804 add Rm,Rn */
	W32(r8, r12); UPD(0x0C086808u, 4);  /* 0C086806 mov.l Rm,@Rn */
	r7 = 0xC286578u; UPD(0x0C08680Au, 1);  /* 0C086808 mov.l @(disp,pc),Rn */
	IF(0x0C08680Au); r8 = MACL;  /* 0C08680A sts macl,Rn */
	r8 += r7;  /* 0C08680C add Rm,Rn */
	r8 += 0x7Cu;  /* 0C08680E add #imm,Rn */
	W16(r8, r13); UPD(0x0C086812u, 4);  /* 0C086810 mov.w Rm,@Rn */
	r4 = 0xC2B0378u; UPD(0x0C086814u, 1);  /* 0C086812 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFF84u;  /* 0C086814 add #imm,Rn */
	r6 = (u32)(s32)(s16)R16(r11); UPD(0x0C086818u, 2);  /* 0C086816 mov.w @Rm,Rn */
	r1 = 0xC3000010u; UPD(0x0C08681Au, 1);  /* 0C086818 mov.l @(disp,pc),Rn */
	r5 = r6 & 0xFFFF;  /* 0C08681A extu.w Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r4); UPD(0x0C08681Eu, 2);  /* 0C08681C mov.w @Rm,Rn */
	W32(r14, r2); UPD(0x0C086820u, 1);  /* 0C08681E mov.l Rm,@Rn */
	T = r0 > r3;  /* 0C086820 cmp/hi Rm,Rn */
	W32(r8, r1); UPD(0x0C086824u, 2);  /* 0C086822 mov.l Rm,@Rn */
	{ u32 c_ = !T; W32(r8 + 0x4u, r5); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C08682Cu, 3); goto L_0C08682C; } UPD(0x0C086828u, 1); goto L_0C086828; }  /* 0C086824 bf/s */
L_0C086828: BLKS(0x0C086828u);
	{ IF(0x0C08682Au); ; /* slot nop */ UPD(0x0C086920u, 3); goto L_0C086920; }  /* 0C086828 bra */
L_0C08682C: BLKS(0x0C08682Cu);
	r7 = 0xC2B03A2u; UPD(0x0C08682Eu, 1);  /* 0C08682C mov.l @(disp,pc),Rn */
	r1 = 0xFFFFFFFAu;  /* 0C08682E mov #imm,Rn */
	r5 = (u32)(s32)(s16)R16(r7); UPD(0x0C086832u, 2);  /* 0C086830 mov.w @Rm,Rn */
	r3 = r0 & 0xFFFF;  /* 0C086832 extu.w Rm,Rn */
	r4 = 0x84u; UPD(0x0C086836u, 2);  /* 0C086834 mov.w @(disp,pc),Rn */
	IF(0x0C086836u); ARG0(0x451Cu); { s32 s_ = (s32)r1; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = (u32)((s32)r5 >> 31); else r5 = (u32)((s32)r5 >> ((~s_ & 31) + 1)); }  /* 0C086836 shad Rm,Rn */
	r4 += r8;  /* 0C086838 add Rm,Rn */
	r2 = 0xC0A8A30u; UPD(0x0C08683Cu, 3);  /* 0C08683A mov.l @(disp,pc),Rn */
	r4 += 0x2u;  /* 0C08683C add #imm,Rn */
	W16(r4, r5); UPD(0x0C086840u, 2);  /* 0C08683E mov.w Rm,@Rn */
	r3 += 0x3u;  /* 0C086840 add #imm,Rn */
	W32(r8 + 0x8u, r3); UPD(0x0C086844u, 2);  /* 0C086842 mov.l Rm,@(disp,Rn) */
	r4 = r10;  /* 0C086844 mov Rm,Rn */
	IF(0x0C086846u); { u32 t_ = r2; PR = 0x0C08684Au; W32(r8 + 0xCu, r12); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C08684Au); }  /* 0C086846 jsr @Rn */
L_0C08684A: BLKS(0x0C08684Au);
	r0 = 0xC0A9AE0u; UPD(0x0C08684Cu, 1);  /* 0C08684A mov.l @(disp,pc),Rn */
	IF(0x0C08684Cu); { u32 t_ = r0; PR = 0x0C086850u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C086850u); }  /* 0C08684C jsr @Rn */
L_0C086850: BLKS(0x0C086850u);
	r10 = R32(r14 + 0x4u); UPD(0x0C086852u, 1);  /* 0C086850 mov.l @(disp,Rm),Rn */
	r0 = 0xB0u; UPD(0x0C086854u, 1);  /* 0C086852 mov.w @(disp,pc),Rn */
	r5 = (u32)(s32)(s8)R8(r10); UPD(0x0C086856u, 1);  /* 0C086854 mov.b @Rm,Rn */
	IF(0x0C086856u); W8(r0 + r8, r5); UPD(0x0C086858u, 1);  /* 0C086856 mov.b Rm,@(r0,Rn) */
	r0 = 0xA8u; UPD(0x0C08685Au, 1);  /* 0C086858 mov.w @(disp,pc),Rn */
	r4 = R32(r14 + 0x8u); UPD(0x0C08685Cu, 1);  /* 0C08685A mov.l @(disp,Rm),Rn */
	r0 += r8;  /* 0C08685C add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r4); UPD(0x0C086860u, 2);  /* 0C08685E mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C086860 add #imm,Rn */
	r7 = R32(r9 + 0x28u); UPD(0x0C086864u, 2);  /* 0C086862 mov.l @(disp,Rm),Rn */
	W8(r0, r1); UPD(0x0C086866u, 1);  /* 0C086864 mov.b Rm,@Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C086868u, 1);  /* 0C086866 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x28u, r7); UPD(0x0C08686Au, 1);  /* 0C086868 mov.l Rm,@(disp,Rn) */
	r10 = 0x9Cu; UPD(0x0C08686Cu, 1);  /* 0C08686A mov.w @(disp,pc),Rn */
	r2 = R32(r14 + 0xCu); UPD(0x0C08686Eu, 1);  /* 0C08686C mov.l @(disp,Rm),Rn */
	r10 += r8;  /* 0C08686E add Rm,Rn */
	W32(r8 + 0x24u, r6); UPD(0x0C086872u, 2);  /* 0C086870 mov.l Rm,@(disp,Rn) */
	r10 += 0x1u;  /* 0C086872 add #imm,Rn */
	r7 = 0xACu; UPD(0x0C086876u, 2);  /* 0C086874 mov.w @(disp,pc),Rn */
	W8(r10, r12); UPD(0x0C086878u, 1);  /* 0C086876 mov.b Rm,@Rn */
	r7 += r8;  /* 0C086878 add Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r2); UPD(0x0C08687Cu, 2);  /* 0C08687A mov.b @Rm,Rn */
	r7 += 0x1u;  /* 0C08687C add #imm,Rn */
	W8(r7, r6); UPD(0x0C086880u, 2);  /* 0C08687E mov.b Rm,@Rn */
	{ u32 v_ = r12; r10 -= 1; W8(r10, v_); } UPD(0x0C086882u, 1);  /* 0C086880 mov.b Rm,@-Rn */
	r3 = 0x140000u; UPD(0x0C086884u, 1);  /* 0C086882 mov.l @(disp,pc),Rn */
	r5 = R32(r14); UPD(0x0C086886u, 1);  /* 0C086884 mov.l @Rm,Rn */
	W32(r8 + 0x2Cu, r3); UPD(0x0C086888u, 1);  /* 0C086886 mov.l Rm,@(disp,Rn) */
	r10 = (u32)(s32)(s16)R16(r5); UPD(0x0C08688Au, 1);  /* 0C086888 mov.w @Rm,Rn */
	r3 = 0xB4u; UPD(0x0C08688Cu, 1);  /* 0C08688A mov.w @(disp,pc),Rn */
	IF(0x0C08688Cu); MACL = r10 * r3;  /* 0C08688C mul.l Rm,Rn */
	W32(r8 + 0x30u, r12); UPD(0x0C086890u, 3);  /* 0C08688E mov.l Rm,@(disp,Rn) */
	r4 = 0xC286578u; UPD(0x0C086892u, 1);  /* 0C086890 mov.l @(disp,pc),Rn */
	IF(0x0C086892u); r8 = MACL;  /* 0C086892 sts macl,Rn */
	r8 += r4;  /* 0C086894 add Rm,Rn */
	r8 += 0x7Cu;  /* 0C086896 add #imm,Rn */
	W16(r8, r13); UPD(0x0C08689Au, 4);  /* 0C086898 mov.w Rm,@Rn */
	r6 = 0xC2B0378u; UPD(0x0C08689Cu, 1);  /* 0C08689A mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFF84u;  /* 0C08689C add #imm,Rn */
	r2 = (u32)(s32)(s16)R16(r11); UPD(0x0C0868A0u, 2);  /* 0C08689E mov.w @Rm,Rn */
	r1 = 0xC3000010u; UPD(0x0C0868A2u, 1);  /* 0C0868A0 mov.l @(disp,pc),Rn */
	r0 = r2 & 0xFFFF;  /* 0C0868A2 extu.w Rm,Rn */
	r13 = (u32)(s32)(s16)R16(r6); UPD(0x0C0868A6u, 2);  /* 0C0868A4 mov.w @Rm,Rn */
	r11 = 0x9u;  /* 0C0868A6 mov #imm,Rn */
	W32(r8, r1); UPD(0x0C0868AAu, 2);  /* 0C0868A8 mov.l Rm,@Rn */
	T = r13 > r11;  /* 0C0868AA cmp/hi Rm,Rn */
	{ u32 c_ = T; W32(r8 + 0x4u, r0); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C086910u, 4); goto L_0C086910; } UPD(0x0C0868B0u, 1); goto L_0C0868B0; }  /* 0C0868AC bt/s */
L_0C0868B0: BLKS(0x0C0868B0u);
	r0 = 0xC2B03A2u; UPD(0x0C0868B2u, 1);  /* 0C0868B0 mov.l @(disp,pc),Rn */
	r5 = 0xFFFFFFFAu;  /* 0C0868B2 mov #imm,Rn */
	r2 = (u32)(s32)(s16)R16(r0); UPD(0x0C0868B6u, 2);  /* 0C0868B4 mov.w @Rm,Rn */
	r7 = 0x2u;  /* 0C0868B6 mov #imm,Rn */
	r4 = 0x84u; UPD(0x0C0868BAu, 2);  /* 0C0868B8 mov.w @(disp,pc),Rn */
	IF(0x0C0868BAu); ARG0(0x425Cu); { s32 s_ = (s32)r5; if (s_ >= 0) r2 <<= (s_ & 31); else if ((s_ & 31) == 0) r2 = (u32)((s32)r2 >> 31); else r2 = (u32)((s32)r2 >> ((~s_ & 31) + 1)); }  /* 0C0868BA shad Rm,Rn */
	r4 += r8;  /* 0C0868BC add Rm,Rn */
	r6 = 0xC0A8A30u; UPD(0x0C0868C0u, 3);  /* 0C0868BE mov.l @(disp,pc),Rn */
	r4 += 0x2u;  /* 0C0868C0 add #imm,Rn */
	W16(r4, r2); UPD(0x0C0868C4u, 2);  /* 0C0868C2 mov.w Rm,@Rn */
	W32(r8 + 0x8u, r7); UPD(0x0C0868C6u, 1);  /* 0C0868C4 mov.l Rm,@(disp,Rn) */
	r4 = r10;  /* 0C0868C6 mov Rm,Rn */
	IF(0x0C0868C8u); { u32 t_ = r6; PR = 0x0C0868CCu; W32(r8 + 0xCu, r12); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C0868CCu); }  /* 0C0868C8 jsr @Rn */
L_0C0868CC: BLKS(0x0C0868CCu);
	r4 = r10;  /* 0C0868CC mov Rm,Rn */
	r10 = 0xC0A9AE0u; UPD(0x0C0868D0u, 2);  /* 0C0868CE mov.l @(disp,pc),Rn */
	IF(0x0C0868D0u); { u32 t_ = r10; PR = 0x0C0868D4u; IF(0x0C0868D2u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C0868D4u); }  /* 0C0868D0 jsr @Rn */
L_0C0868D4: BLKS(0x0C0868D4u);
	r1 = R32(r14 + 0x4u); UPD(0x0C0868D6u, 1);  /* 0C0868D4 mov.l @(disp,Rm),Rn */
	r0 = 0xB0u; UPD(0x0C0868D8u, 1);  /* 0C0868D6 mov.w @(disp,pc),Rn */
	r7 = (u32)(s32)(s8)R8(r1); UPD(0x0C0868DAu, 1);  /* 0C0868D8 mov.b @Rm,Rn */
	IF(0x0C0868DAu); W8(r0 + r8, r7); UPD(0x0C0868DCu, 1);  /* 0C0868DA mov.b Rm,@(r0,Rn) */
	r0 = 0xA8u; UPD(0x0C0868DEu, 1);  /* 0C0868DC mov.w @(disp,pc),Rn */
	r5 = R32(r14 + 0x8u); UPD(0x0C0868E0u, 1);  /* 0C0868DE mov.l @(disp,Rm),Rn */
	r0 += r8;  /* 0C0868E0 add Rm,Rn */
	r13 = R32(r9 + 0x24u); UPD(0x0C0868E4u, 2);  /* 0C0868E2 mov.l @(disp,Rm),Rn */
	r0 += 0x1u;  /* 0C0868E4 add #imm,Rn */
	r11 = R32(r9 + 0x28u); UPD(0x0C0868E8u, 2);  /* 0C0868E6 mov.l @(disp,Rm),Rn */
	r4 = (u32)(s32)(s8)R8(r5); UPD(0x0C0868EAu, 1);  /* 0C0868E8 mov.b @Rm,Rn */
	r9 = 0x9Cu; UPD(0x0C0868ECu, 1);  /* 0C0868EA mov.w @(disp,pc),Rn */
	W8(r0, r4); UPD(0x0C0868EEu, 1);  /* 0C0868EC mov.b Rm,@Rn */
	r9 += r8;  /* 0C0868EE add Rm,Rn */
	r2 = R32(r14 + 0xCu); UPD(0x0C0868F2u, 2);  /* 0C0868F0 mov.l @(disp,Rm),Rn */
	r9 += 0x1u;  /* 0C0868F2 add #imm,Rn */
	r10 = 0xACu; UPD(0x0C0868F6u, 2);  /* 0C0868F4 mov.w @(disp,pc),Rn */
	r0 = 0x1u;  /* 0C0868F6 mov #imm,Rn */
	r3 = 0xB0000u; UPD(0x0C0868FAu, 2);  /* 0C0868F8 mov.l @(disp,pc),Rn */
	r10 += r8;  /* 0C0868FA add Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r2); UPD(0x0C0868FEu, 2);  /* 0C0868FC mov.b @Rm,Rn */
	r10 += 0x1u;  /* 0C0868FE add #imm,Rn */
	W8(r9, r12); UPD(0x0C086902u, 2);  /* 0C086900 mov.b Rm,@Rn */
	W32(r8 + 0x24u, r13); UPD(0x0C086904u, 1);  /* 0C086902 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x28u, r11); UPD(0x0C086906u, 1);  /* 0C086904 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x2Cu, r3); UPD(0x0C086908u, 1);  /* 0C086906 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x30u, r12); UPD(0x0C08690Au, 1);  /* 0C086908 mov.l Rm,@(disp,Rn) */
	W8(r10, r6); UPD(0x0C08690Cu, 1);  /* 0C08690A mov.b Rm,@Rn */
	{ { u32 v_ = r12; r9 -= 1; W8(r9, v_); } /* slot mov.b Rm,@-Rn */ UPD(0x0C08674Au, 3); goto L_0C08674A; }  /* 0C08690C bra */
L_0C086910: BLKS(0x0C086910u);
	r13 = 0xC062780u; UPD(0x0C086912u, 1);  /* 0C086910 mov.l @(disp,pc),Rn */
	r11 = 0xC2B0378u; UPD(0x0C086914u, 1);  /* 0C086912 mov.l @(disp,pc),Rn */
	IF(0x0C086914u); { u32 t_ = r13; PR = 0x0C086918u; r4 = 0x9u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C086918u); }  /* 0C086914 jsr @Rn */
L_0C086918: BLKS(0x0C086918u);
	{ W16(r11, r0); /* slot mov.w Rm,@Rn */ UPD(0x0C0868B0u, 3); goto L_0C0868B0; }  /* 0C086918 bra */
L_0C086920: BLKS(0x0C086920u);
	r0 = 0xC062780u; UPD(0x0C086922u, 1);  /* 0C086920 mov.l @(disp,pc),Rn */
	IF(0x0C086922u); { u32 t_ = r0; PR = 0x0C086926u; r4 = 0x9u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C086926u); }  /* 0C086922 jsr @Rn */
L_0C086926: BLKS(0x0C086926u);
	r7 = 0xC2B0378u; UPD(0x0C086928u, 1);  /* 0C086926 mov.l @(disp,pc),Rn */
	{ W16(r7, r0); /* slot mov.w Rm,@Rn */ UPD(0x0C08682Cu, 3); goto L_0C08682C; }  /* 0C086928 bra */
}

void blk_f_0C0869A0(sh3_t *c)
{
	LOCALS;
L_0C0869A0: BLKS(0x0C0869A0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0869A2u, 1);  /* 0C0869A0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0869A4u, 1);  /* 0C0869A2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0869A6u, 1);  /* 0C0869A4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0869A8u, 1);  /* 0C0869A6 mov.l Rm,@-Rn */
	r8 = 0xB4u; UPD(0x0C0869AAu, 1);  /* 0C0869A8 mov.w @(disp,pc),Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C0869AA exts.w Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0869AEu, 2);  /* 0C0869AC mov.l Rm,@-Rn */
	IF(0x0C0869AEu); MACL = r11 * r8;  /* 0C0869AE mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0869B2u, 3);  /* 0C0869B0 mov.l Rm,@-Rn */
	r9 = 0xC286578u; UPD(0x0C0869B4u, 1);  /* 0C0869B2 mov.l @(disp,pc),Rn */
	IF(0x0C0869B4u); r10 = MACL;  /* 0C0869B4 sts macl,Rn */
	IF(0x0C0869B6u); r15 -= 4; W32(r15, PR); UPD(0x0C0869B8u, 2);  /* 0C0869B6 sts.l pr,@-Rn */
	r10 += r9;  /* 0C0869B8 add Rm,Rn */
	r0 = R32(r10 + 0x8u); UPD(0x0C0869BCu, 2);  /* 0C0869BA mov.l @(disp,Rm),Rn */
	T = r0 == 0x1u;  /* 0C0869BC cmp/eq #imm,r0 */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0869C6u, 4); goto L_0C0869C6; } goto L_0C0869C2; }  /* 0C0869BE bf/s */
L_0C0869C2: BLKS(0x0C0869C2u);
	{ r1 = R32(r10); /* slot mov.l @Rm,Rn */ UPD(0x0C086C10u, 4); goto L_0C086C10; }  /* 0C0869C2 bra */
L_0C0869C6: BLKS(0x0C0869C6u);
	r12 = 0x1u;  /* 0C0869C6 mov #imm,Rn */
	T = (s32)r0 > (s32)r12;  /* 0C0869C8 cmp/gt Rm,Rn */
	{ u32 c_ = !T; T = r0 == 0x2u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C0869D2u, 5); goto L_0C0869D2; } goto L_0C0869CE; }  /* 0C0869CA bf/s */
L_0C0869CE: BLKS(0x0C0869CEu);
	{ IF(0x0C0869D0u); ; /* slot nop */ UPD(0x0C086BB0u, 4); goto L_0C086BB0; }  /* 0C0869CE bra */
L_0C0869D2: BLKS(0x0C0869D2u);
	T = (r0 & r0) == 0;  /* 0C0869D2 tst Rm,Rn */
	if (!T) { UPD(0x0C0869DCu, 4); goto L_0C0869DC; }  /* 0C0869D4 bf */
L_0C0869D6: BLKS(0x0C0869D6u);
	r15 += 0xFFFFFFF8u;  /* 0C0869D6 add #imm,Rn */
	{ r5 = 0xEu; /* slot mov #imm,Rn */ UPD(0x0C086B00u, 4); goto L_0C086B00; }  /* 0C0869D8 bra */
L_0C0869DC: BLKS(0x0C0869DCu);
	r10 = 0xC0A8B50u; UPD(0x0C0869DEu, 1);  /* 0C0869DC mov.l @(disp,pc),Rn */
	IF(0x0C0869DEu); { u32 t_ = r10; PR = 0x0C0869E2u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C0869E2u); }  /* 0C0869DE jsr @Rn */
L_0C0869E2: BLKS(0x0C0869E2u);
	IF(0x0C0869E2u); T = (s32)r0 >= 0;  /* 0C0869E2 cmp/pz Rn */
	{ u32 c_ = T; r12 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0869ECu, 4); goto L_0C0869EC; } goto L_0C0869E8; }  /* 0C0869E4 bt/s */
L_0C0869E8: BLKS(0x0C0869E8u);
	{ r3 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C086AF0u, 4); goto L_0C086AF0; }  /* 0C0869E8 bra */
L_0C0869EC: BLKS(0x0C0869ECu);
	r10 = 0xC062780u; UPD(0x0C0869EEu, 1);  /* 0C0869EC mov.l @(disp,pc),Rn */
	IF(0x0C0869EEu); { u32 t_ = r10; PR = 0x0C0869F2u; r4 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0869F2u); }  /* 0C0869EE jsr @Rn */
L_0C0869F2: BLKS(0x0C0869F2u);
	T = r0 == 0x2u;  /* 0C0869F2 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C086AC0u, 4); goto L_0C086AC0; }  /* 0C0869F4 bt */
L_0C0869F6: BLKS(0x0C0869F6u);
	r4 = 0x2u;  /* 0C0869F6 mov #imm,Rn */
	T = (s32)r0 > (s32)r4;  /* 0C0869F8 cmp/gt Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x3u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C086A90u, 5); goto L_0C086A90; } goto L_0C0869FE; }  /* 0C0869FA bt/s */
L_0C0869FE: BLKS(0x0C0869FEu);
	T = r0 == 0x1u;  /* 0C0869FE cmp/eq #imm,r0 */
	if (T) { UPD(0x0C086A60u, 5); goto L_0C086A60; }  /* 0C086A00 bt */
L_0C086A02: BLKS(0x0C086A02u);
	r3 = 0xB4u; UPD(0x0C086A04u, 1);  /* 0C086A02 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C086A04 add #imm,Rn */
	IF(0x0C086A06u); MACL = r11 * r3;  /* 0C086A06 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C086A0Au, 4);  /* 0C086A08 mov.l @(disp,pc),Rn */
	IF(0x0C086A0Au); r8 = MACL;  /* 0C086A0A sts macl,Rn */
	r8 += r0;  /* 0C086A0C add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C086A10u, 3);  /* 0C086A0E mov.w @(disp,pc),Rn */
	IF(0x0C086A10u); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C086A12u, 1);  /* 0C086A10 mov.b @(r0,Rm),Rn */
	r7 = r2 & 0xFF;  /* 0C086A12 extu.b Rm,Rn */
	W32(r15, r7); UPD(0x0C086A16u, 2);  /* 0C086A14 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C086A16 add #imm,Rn */
	IF(0x0C086A18u); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C086A1Au, 2);  /* 0C086A18 mov.b @(r0,Rm),Rn */
	r5 = r6 & 0xFF;  /* 0C086A1A extu.b Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C086A1Eu, 2);  /* 0C086A1C mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BD6F0u; UPD(0x0C086A20u, 1);  /* 0C086A1E mov.l @(disp,pc),Rn */
	r5 = 0x2u;  /* 0C086A20 mov #imm,Rn */
	r4 = R32(r8); UPD(0x0C086A24u, 2);  /* 0C086A22 mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C086A26u, 1);  /* 0C086A24 mov.l @(disp,Rm),Rn */
	r7 = R32(r8 + 0x28u); UPD(0x0C086A28u, 1);  /* 0C086A26 mov.l @(disp,Rm),Rn */
L_0C086A28: BLKS(0x0C086A28u);
	IF(0x0C086A28u); { u32 t_ = r0; PR = 0x0C086A2Cu; IF(0x0C086A2Au); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C086A2Cu); }  /* 0C086A28 jsr @Rn */
L_0C086A2C: BLKS(0x0C086A2Cu);
	r0 = 0xB4u; UPD(0x0C086A2Eu, 1);  /* 0C086A2C mov.w @(disp,pc),Rn */
	r15 += 0x8u;  /* 0C086A2E add #imm,Rn */
	IF(0x0C086A30u); MACL = r12 * r0;  /* 0C086A30 mul.l Rm,Rn */
	r4 = 0xC286578u; UPD(0x0C086A34u, 4);  /* 0C086A32 mov.l @(disp,pc),Rn */
	IF(0x0C086A34u); r8 = MACL;  /* 0C086A34 sts macl,Rn */
	r8 += r4;  /* 0C086A36 add Rm,Rn */
	r3 = R32(r8); UPD(0x0C086A3Au, 3);  /* 0C086A38 mov.l @Rm,Rn */
	IF(0x0C086A3Au); MACL = r11 * r0;  /* 0C086A3A mul.l Rm,Rn */
	r1 = 0x3000000u; UPD(0x0C086A3Eu, 3);  /* 0C086A3C mov.l @(disp,pc),Rn */
	r12 = 0x0u;  /* 0C086A3E mov #imm,Rn */
	r3 |= r1;  /* 0C086A40 or Rm,Rn */
	W32(r8, r3); UPD(0x0C086A44u, 3);  /* 0C086A42 mov.l Rm,@Rn */
	IF(0x0C086A44u); r0 = MACL;  /* 0C086A44 sts macl,Rn */
	IF(0x0C086A46u); W32(r0 + r4, r12); UPD(0x0C086A48u, 2);  /* 0C086A46 mov.l Rm,@(r0,Rn) */
L_0C086A48: BLKS(0x0C086A48u);
	r15 = r14;  /* 0C086A48 mov Rm,Rn */
	IF(0x0C086A4Au); PR = R32(r15); r15 += 4; UPD(0x0C086A4Cu, 2);  /* 0C086A4A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C086A4Eu, 1);  /* 0C086A4C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C086A50u, 1);  /* 0C086A4E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C086A52u, 1);  /* 0C086A50 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C086A54u, 1);  /* 0C086A52 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C086A56u, 1);  /* 0C086A54 mov.l @Rm+,Rn */
	IF(0x0C086A56u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C086A56 rts */
L_0C086A60: BLKS(0x0C086A60u);
	r7 = 0xB4u; UPD(0x0C086A62u, 1);  /* 0C086A60 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C086A62 add #imm,Rn */
	IF(0x0C086A64u); MACL = r11 * r7;  /* 0C086A64 mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C086A68u, 4);  /* 0C086A66 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C086A6Au, 1);  /* 0C086A68 mov.w @(disp,pc),Rn */
	IF(0x0C086A6Au); r9 = MACL;  /* 0C086A6A sts macl,Rn */
	r9 += r6;  /* 0C086A6C add Rm,Rn */
	IF(0x0C086A6Eu); r5 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C086A70u, 3);  /* 0C086A6E mov.b @(r0,Rm),Rn */
	r8 = r5 & 0xFF;  /* 0C086A70 extu.b Rm,Rn */
	W32(r15, r8); UPD(0x0C086A74u, 2);  /* 0C086A72 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C086A74 add #imm,Rn */
	IF(0x0C086A76u); r4 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C086A78u, 2);  /* 0C086A76 mov.b @(r0,Rm),Rn */
	r5 = 0x2u;  /* 0C086A78 mov #imm,Rn */
	r10 = r4 & 0xFF;  /* 0C086A7A extu.b Rm,Rn */
	W32(r15 + 0x4u, r10); UPD(0x0C086A7Eu, 3);  /* 0C086A7C mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BECB0u; UPD(0x0C086A80u, 1);  /* 0C086A7E mov.l @(disp,pc),Rn */
	r4 = R32(r9); UPD(0x0C086A82u, 1);  /* 0C086A80 mov.l @Rm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C086A84u, 1);  /* 0C086A82 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C086A28u, 3); goto L_0C086A28; }  /* 0C086A84 bra */
L_0C086A90: BLKS(0x0C086A90u);
	if (!T) { UPD(0x0C086A02u, 3); goto L_0C086A02; }  /* 0C086A90 bf */
L_0C086A92: BLKS(0x0C086A92u);
	r15 += 0xFFFFFFF8u;  /* 0C086A92 add #imm,Rn */
	r10 = 0xB4u; UPD(0x0C086A96u, 2);  /* 0C086A94 mov.w @(disp,pc),Rn */
	IF(0x0C086A96u); MACL = r11 * r10;  /* 0C086A96 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C086A9Au, 3);  /* 0C086A98 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C086A9Cu, 1);  /* 0C086A9A mov.w @(disp,pc),Rn */
	IF(0x0C086A9Cu); r3 = MACL;  /* 0C086A9C sts macl,Rn */
	r3 += r9;  /* 0C086A9E add Rm,Rn */
	IF(0x0C086AA0u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C086AA2u, 3);  /* 0C086AA0 mov.b @(r0,Rm),Rn */
	r7 = r2 & 0xFF;  /* 0C086AA2 extu.b Rm,Rn */
	W32(r15, r7); UPD(0x0C086AA6u, 2);  /* 0C086AA4 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C086AA6 add #imm,Rn */
	IF(0x0C086AA8u); r6 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C086AAAu, 2);  /* 0C086AA8 mov.b @(r0,Rm),Rn */
	r5 = r6 & 0xFF;  /* 0C086AAA extu.b Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C086AAEu, 2);  /* 0C086AAC mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BFD30u; UPD(0x0C086AB0u, 1);  /* 0C086AAE mov.l @(disp,pc),Rn */
	r5 = 0x2u;  /* 0C086AB0 mov #imm,Rn */
	r4 = R32(r3); UPD(0x0C086AB4u, 2);  /* 0C086AB2 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C086AB6u, 1);  /* 0C086AB4 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C086A28u, 3); goto L_0C086A28; }  /* 0C086AB6 bra */
L_0C086AC0: BLKS(0x0C086AC0u);
	r8 = 0xB4u; UPD(0x0C086AC2u, 1);  /* 0C086AC0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C086AC2 add #imm,Rn */
	IF(0x0C086AC4u); MACL = r11 * r8;  /* 0C086AC4 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C086AC8u, 4);  /* 0C086AC6 mov.l @(disp,pc),Rn */
	r5 = 0x2u;  /* 0C086AC8 mov #imm,Rn */
	IF(0x0C086ACAu); r3 = MACL;  /* 0C086ACA sts macl,Rn */
	r3 += r0;  /* 0C086ACC add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C086AD0u, 4);  /* 0C086ACE mov.w @(disp,pc),Rn */
	IF(0x0C086AD0u); r4 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C086AD2u, 1);  /* 0C086AD0 mov.b @(r0,Rm),Rn */
	r10 = r4 & 0xFF;  /* 0C086AD2 extu.b Rm,Rn */
	W32(r15, r10); UPD(0x0C086AD6u, 2);  /* 0C086AD4 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C086AD6 add #imm,Rn */
	IF(0x0C086AD8u); r9 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C086ADAu, 2);  /* 0C086AD8 mov.b @(r0,Rm),Rn */
	r2 = r9 & 0xFF;  /* 0C086ADA extu.b Rm,Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C086ADEu, 2);  /* 0C086ADC mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BFE70u; UPD(0x0C086AE0u, 1);  /* 0C086ADE mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C086AE2u, 1);  /* 0C086AE0 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C086AE4u, 1);  /* 0C086AE2 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C086A28u, 3); goto L_0C086A28; }  /* 0C086AE4 bra */
L_0C086AF0: BLKS(0x0C086AF0u);
	r9 = 0xB4u; UPD(0x0C086AF2u, 1);  /* 0C086AF0 mov.w @(disp,pc),Rn */
	IF(0x0C086AF2u); MACL = r11 * r9;  /* 0C086AF2 mul.l Rm,Rn */
	r8 = 0xC286578u; UPD(0x0C086AF6u, 3);  /* 0C086AF4 mov.l @(disp,pc),Rn */
	IF(0x0C086AF6u); r0 = MACL;  /* 0C086AF6 sts macl,Rn */
	{ IF(0x0C086AFAu); W32(r0 + r8, r3); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C086A48u, 4); goto L_0C086A48; }  /* 0C086AF8 bra */
L_0C086B00: BLKS(0x0C086B00u);
	r9 = 0xB0u; UPD(0x0C086B02u, 1);  /* 0C086B00 mov.w @(disp,pc),Rn */
	r9 += r10;  /* 0C086B02 add Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r9); UPD(0x0C086B06u, 2);  /* 0C086B04 mov.b @Rm,Rn */
	r8 = r3 & 0xFF;  /* 0C086B06 extu.b Rm,Rn */
	W32(r15, r8); UPD(0x0C086B0Au, 2);  /* 0C086B08 mov.l Rm,@Rn */
	r8 = 0xA9u; UPD(0x0C086B0Cu, 1);  /* 0C086B0A mov.w @(disp,pc),Rn */
	r8 += r10;  /* 0C086B0C add Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r8); UPD(0x0C086B10u, 2);  /* 0C086B0E mov.b @Rm,Rn */
	r0 = 0xC0BFA40u; UPD(0x0C086B12u, 1);  /* 0C086B10 mov.l @(disp,pc),Rn */
	r7 = r2 & 0xFF;  /* 0C086B12 extu.b Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C086B16u, 2);  /* 0C086B14 mov.l Rm,@(disp,Rn) */
	r4 = R32(r10); UPD(0x0C086B18u, 1);  /* 0C086B16 mov.l @Rm,Rn */
	r6 = R32(r10 + 0x24u); UPD(0x0C086B1Au, 1);  /* 0C086B18 mov.l @(disp,Rm),Rn */
	IF(0x0C086B1Au); { u32 t_ = r0; PR = 0x0C086B1Eu; r7 = R32(r10 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BFA40, 0x0C0BFA40u, 0x0C086B1Eu); }  /* 0C086B1A jsr @Rn */
L_0C086B1E: BLKS(0x0C086B1Eu);
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C086B20u, 1);  /* 0C086B1E mov.b @Rm,Rn */
	r4 = 0x30u;  /* 0C086B20 mov #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r8); UPD(0x0C086B24u, 2);  /* 0C086B22 mov.b @Rm,Rn */
	r7 = r0 & 0xFF;  /* 0C086B24 extu.b Rm,Rn */
	r5 = r6 & 0xFF;  /* 0C086B26 extu.b Rm,Rn */
	r0 = 0xC0BD330u; UPD(0x0C086B2Au, 3);  /* 0C086B28 mov.l @(disp,pc),Rn */
	W32(r15, r5); UPD(0x0C086B2Cu, 1);  /* 0C086B2A mov.l Rm,@Rn */
	W32(r15 + 0x4u, r4); UPD(0x0C086B2Eu, 1);  /* 0C086B2C mov.l Rm,@(disp,Rn) */
	r4 = R32(r10); UPD(0x0C086B30u, 1);  /* 0C086B2E mov.l @Rm,Rn */
	r5 = R32(r10 + 0x24u); UPD(0x0C086B32u, 1);  /* 0C086B30 mov.l @(disp,Rm),Rn */
	IF(0x0C086B32u); { u32 t_ = r0; PR = 0x0C086B36u; r6 = R32(r10 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD330, 0x0C0BD330u, 0x0C086B36u); }  /* 0C086B32 jsr @Rn */
L_0C086B36: BLKS(0x0C086B36u);
	r1 = (u32)(s32)(s8)R8(r8); UPD(0x0C086B38u, 1);  /* 0C086B36 mov.b @Rm,Rn */
	r2 = 0xCu;  /* 0C086B38 mov #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r9); UPD(0x0C086B3Cu, 2);  /* 0C086B3A mov.b @Rm,Rn */
	r15 += 0x4u;  /* 0C086B3C add #imm,Rn */
	r8 = 0xC0BD490u; UPD(0x0C086B40u, 2);  /* 0C086B3E mov.l @(disp,pc),Rn */
	r7 = r1 & 0xFF;  /* 0C086B40 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C086B44u, 2);  /* 0C086B42 mov.l Rm,@Rn */
	r6 = r3 & 0xFF;  /* 0C086B44 extu.b Rm,Rn */
	r5 = R32(r10 + 0x28u); UPD(0x0C086B48u, 2);  /* 0C086B46 mov.l @(disp,Rm),Rn */
	IF(0x0C086B48u); { u32 t_ = r8; PR = 0x0C086B4Cu; r4 = R32(r10 + 0x24u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD490, 0x0C0BD490u, 0x0C086B4Cu); }  /* 0C086B48 jsr @Rn */
L_0C086B4C: BLKS(0x0C086B4Cu);
	r0 = 0xC0A8B10u; UPD(0x0C086B4Eu, 1);  /* 0C086B4C mov.l @(disp,pc),Rn */
	r15 += 0x4u;  /* 0C086B4E add #imm,Rn */
	r4 = r11;  /* 0C086B50 mov Rm,Rn */
	IF(0x0C086B52u); { u32 t_ = r0; PR = 0x0C086B56u; W32(r10 + 0x8u, r12); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 4); CALLP(t_, blk_f_0C0A8B10, 0x0C0A8B10u, 0x0C086B56u); }  /* 0C086B52 jsr @Rn */
L_0C086B56: BLKS(0x0C086B56u);
	r0 = 0xC0A9AE0u; UPD(0x0C086B58u, 1);  /* 0C086B56 mov.l @(disp,pc),Rn */
	IF(0x0C086B58u); { u32 t_ = r0; PR = 0x0C086B5Cu; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C086B5Cu); }  /* 0C086B58 jsr @Rn */
L_0C086B5C: BLKS(0x0C086B5Cu);
	r1 = R32(r10); UPD(0x0C086B5Eu, 1);  /* 0C086B5C mov.l @Rm,Rn */
	r2 = 0xFCFFFFFFu; UPD(0x0C086B60u, 1);  /* 0C086B5E mov.l @(disp,pc),Rn */
	r1 &= r2;  /* 0C086B60 and Rm,Rn */
	UPD(0x0C086B62u, 1);
L_0C086B62: BLKS(0x0C086B62u);
	{ W32(r10, r1); /* slot mov.l Rm,@Rn */ UPD(0x0C086A48u, 3); goto L_0C086A48; }  /* 0C086B62 bra */
L_0C086BB0: BLKS(0x0C086BB0u);
	{ u32 c_ = T; r4 = r11; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C086BB8u, 3); goto L_0C086BB8; } goto L_0C086BB4; }  /* 0C086BB0 bt/s */
L_0C086BB4: BLKS(0x0C086BB4u);
	{ IF(0x0C086BB6u); ; /* slot nop */ UPD(0x0C0869DCu, 4); goto L_0C0869DC; }  /* 0C086BB4 bra */
L_0C086BB8: BLKS(0x0C086BB8u);
	r11 = 0xC0A8B50u; UPD(0x0C086BBAu, 1);  /* 0C086BB8 mov.l @(disp,pc),Rn */
	IF(0x0C086BBAu); { u32 t_ = r11; PR = 0x0C086BBEu; IF(0x0C086BBCu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C086BBEu); }  /* 0C086BBA jsr @Rn */
L_0C086BBE: BLKS(0x0C086BBEu);
	IF(0x0C086BBEu); T = (s32)r0 >= 0;  /* 0C086BBE cmp/pz Rn */
	{ u32 c_ = !T; r12 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C086C00u, 4); goto L_0C086C00; } goto L_0C086BC4; }  /* 0C086BC0 bf/s */
L_0C086BC4: BLKS(0x0C086BC4u);
	r0 = 0xB0u; UPD(0x0C086BC6u, 2);  /* 0C086BC4 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C086BC6 add #imm,Rn */
	IF(0x0C086BC8u); r2 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C086BCAu, 2);  /* 0C086BC8 mov.b @(r0,Rm),Rn */
	r0 = r2 & 0xFF;  /* 0C086BCA extu.b Rm,Rn */
	W32(r15, r0); UPD(0x0C086BCEu, 2);  /* 0C086BCC mov.l Rm,@Rn */
	r7 = 0xA9u; UPD(0x0C086BD0u, 1);  /* 0C086BCE mov.w @(disp,pc),Rn */
	r0 = r10;  /* 0C086BD0 mov Rm,Rn */
	IF(0x0C086BD2u); r6 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C086BD4u, 2);  /* 0C086BD2 mov.b @(r0,Rm),Rn */
	r11 = 0xC0BECB0u; UPD(0x0C086BD6u, 1);  /* 0C086BD4 mov.l @(disp,pc),Rn */
	r5 = r6 & 0xFF;  /* 0C086BD6 extu.b Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C086BDAu, 2);  /* 0C086BD8 mov.l Rm,@(disp,Rn) */
	r5 = 0x4u;  /* 0C086BDA mov #imm,Rn */
	r4 = R32(r10); UPD(0x0C086BDEu, 2);  /* 0C086BDC mov.l @Rm,Rn */
	r6 = R32(r10 + 0x24u); UPD(0x0C086BE0u, 1);  /* 0C086BDE mov.l @(disp,Rm),Rn */
	IF(0x0C086BE0u); { u32 t_ = r11; PR = 0x0C086BE4u; r7 = R32(r10 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BECB0, 0x0C0BECB0u, 0x0C086BE4u); }  /* 0C086BE0 jsr @Rn */
L_0C086BE4: BLKS(0x0C086BE4u);
	IF(0x0C086BE4u); MACL = r12 * r8;  /* 0C086BE4 mul.l Rm,Rn */
	r1 = 0x3000000u; UPD(0x0C086BE8u, 3);  /* 0C086BE6 mov.l @(disp,pc),Rn */
	r15 += 0x8u;  /* 0C086BE8 add #imm,Rn */
	IF(0x0C086BEAu); r12 = MACL;  /* 0C086BEA sts macl,Rn */
	r12 += r9;  /* 0C086BEC add Rm,Rn */
	r4 = R32(r12); UPD(0x0C086BF0u, 4);  /* 0C086BEE mov.l @Rm,Rn */
	r9 = 0x0u;  /* 0C086BF0 mov #imm,Rn */
	r4 |= r1;  /* 0C086BF2 or Rm,Rn */
	W32(r12, r4); UPD(0x0C086BF6u, 3);  /* 0C086BF4 mov.l Rm,@Rn */
	{ W32(r10, r9); /* slot mov.l Rm,@Rn */ UPD(0x0C086A48u, 3); goto L_0C086A48; }  /* 0C086BF6 bra */
L_0C086C00: BLKS(0x0C086C00u);
	{ r1 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C086B62u, 3); goto L_0C086B62; }  /* 0C086C00 bra */
L_0C086C10: BLKS(0x0C086C10u);
	r2 = 0xECFFFFFFu; UPD(0x0C086C12u, 1);  /* 0C086C10 mov.l @(disp,pc),Rn */
	{ r1 &= r2; /* slot and Rm,Rn */ UPD(0x0C086B62u, 3); goto L_0C086B62; }  /* 0C086C12 bra */
}

void blk_f_0C086C30(sh3_t *c)
{
	LOCALS;
	goto L_0C086C30;
L_0C0809E0: BLKS(0x0C0809E0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0809E2u, 1);  /* 0C0809E0 mov.l Rm,@-Rn */
	r5 = (u32)(s32)(s16)r5;  /* 0C0809E2 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0809E6u, 2);  /* 0C0809E4 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0809E8u, 1);  /* 0C0809E6 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0809EAu, 1);  /* 0C0809E8 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0809ECu, 1);  /* 0C0809EA mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0809EEu, 1);  /* 0C0809EC mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0809F0u, 1);  /* 0C0809EE mov.l Rm,@-Rn */
	r13 = (u32)(s32)(s16)r4;  /* 0C0809F0 exts.w Rm,Rn */
	IF(0x0C0809F2u); r15 -= 4; W32(r15, PR); UPD(0x0C0809F4u, 2);  /* 0C0809F2 sts.l pr,@-Rn */
	r4 = r13;  /* 0C0809F4 mov Rm,Rn */
	r8 = 0xC0A8DD0u; UPD(0x0C0809F8u, 2);  /* 0C0809F6 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0809F8 add #imm,Rn */
	IF(0x0C0809FAu); { u32 t_ = r8; PR = 0x0C0809FEu; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8DD0, 0x0C0A8DD0u, 0x0C0809FEu); }  /* 0C0809FA jsr @Rn */
L_0C0809FE: BLKS(0x0C0809FEu);
	T = (r0 & r0) == 0;  /* 0C0809FE tst Rm,Rn */
	if (!T) { UPD(0x0C080A20u, 4); goto L_0C080A20; }  /* 0C080A00 bf */
L_0C080A02: BLKS(0x0C080A02u);
	r14 += 0x8u;  /* 0C080A02 add #imm,Rn */
	r15 = r14;  /* 0C080A04 mov Rm,Rn */
	IF(0x0C080A06u); PR = R32(r15); r15 += 4; UPD(0x0C080A08u, 3);  /* 0C080A06 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C080A0Au, 1);  /* 0C080A08 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C080A0Cu, 1);  /* 0C080A0A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C080A0Eu, 1);  /* 0C080A0C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C080A10u, 1);  /* 0C080A0E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C080A12u, 1);  /* 0C080A10 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C080A14u, 1);  /* 0C080A12 mov.l @Rm+,Rn */
	IF(0x0C080A14u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C080A14 rts */
L_0C080A20: BLKS(0x0C080A20u);
	r8 = 0xC0BC1B0u; UPD(0x0C080A22u, 1);  /* 0C080A20 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C080A22 mov Rm,Rn */
	r5 = 0x5Au;  /* 0C080A24 mov #imm,Rn */
	IF(0x0C080A26u); { u32 t_ = r8; PR = 0x0C080A2Au; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C080A2Au); }  /* 0C080A26 jsr @Rn */
L_0C080A2A: BLKS(0x0C080A2Au);
	T = (r0 & r0) == 0;  /* 0C080A2A tst Rm,Rn */
	if (T) { UPD(0x0C080A02u, 4); goto L_0C080A02; }  /* 0C080A2C bt */
L_0C080A2E: BLKS(0x0C080A2Eu);
	r4 = 0xB4u; UPD(0x0C080A30u, 1);  /* 0C080A2E mov.w @(disp,pc),Rn */
	IF(0x0C080A30u); MACL = r13 * r4;  /* 0C080A30 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C080A34u, 3);  /* 0C080A32 mov.l @(disp,pc),Rn */
	IF(0x0C080A34u); r8 = MACL;  /* 0C080A34 sts macl,Rn */
	r8 += r0;  /* 0C080A36 add Rm,Rn */
	r3 = 0xA9u; UPD(0x0C080A3Au, 3);  /* 0C080A38 mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C080A3A mov Rm,Rn */
	r9 = 0xC0BBF10u; UPD(0x0C080A3Eu, 2);  /* 0C080A3C mov.l @(disp,pc),Rn */
	IF(0x0C080A3Eu); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C080A40u, 1);  /* 0C080A3E mov.b @(r0,Rm),Rn */
	r4 = R32(r8 + 0x24u); UPD(0x0C080A42u, 1);  /* 0C080A40 mov.l @(disp,Rm),Rn */
	r6 = r2 & 0xFF;  /* 0C080A42 extu.b Rm,Rn */
	IF(0x0C080A44u); { u32 t_ = r9; PR = 0x0C080A48u; r5 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BBF10, 0x0C0BBF10u, 0x0C080A48u); }  /* 0C080A44 jsr @Rn */
L_0C080A48: BLKS(0x0C080A48u);
	T = (r0 & r0) == 0;  /* 0C080A48 tst Rm,Rn */
	if (T) { UPD(0x0C080A02u, 4); goto L_0C080A02; }  /* 0C080A4A bt */
L_0C080A4C: BLKS(0x0C080A4Cu);
	r5 = 0x0u;  /* 0C080A4C mov #imm,Rn */
	W32(r14, r5); UPD(0x0C080A50u, 2);  /* 0C080A4E mov.l Rm,@Rn */
	W32(r14 + 0x4u, r8); UPD(0x0C080A52u, 1);  /* 0C080A50 mov.l Rm,@(disp,Rn) */
	IF(0x0C080A52u); ;  /* 0C080A52 nop */
	UPD(0x0C080A54u, 1);
L_0C080A54: BLKS(0x0C080A54u);
	r0 = R32(r14 + 0x4u); UPD(0x0C080A56u, 1);  /* 0C080A54 mov.l @(disp,Rm),Rn */
	r12 = 0x86u; UPD(0x0C080A58u, 1);  /* 0C080A56 mov.w @(disp,pc),Rn */
	r9 = R32(r14); UPD(0x0C080A5Au, 1);  /* 0C080A58 mov.l @Rm,Rn */
	IF(0x0C080A5Au); r7 = (u32)(s32)(s16)R16(r0 + r12); UPD(0x0C080A5Cu, 1);  /* 0C080A5A mov.w @(r0,Rm),Rn */
	IF(0x0C080A5Cu); r9 <<= 2;  /* 0C080A5C shll2 Rn */
	r11 = 0xC19146Au; UPD(0x0C080A60u, 2);  /* 0C080A5E mov.l @(disp,pc),Rn */
	r0 = r9;  /* 0C080A60 mov Rm,Rn */
	IF(0x0C080A62u); r10 = (u32)(s32)(s16)R16(r0 + r11); UPD(0x0C080A64u, 2);  /* 0C080A62 mov.w @(r0,Rm),Rn */
	r6 = 0xC069B20u; UPD(0x0C080A66u, 1);  /* 0C080A64 mov.l @(disp,pc),Rn */
	r7 += r10;  /* 0C080A66 add Rm,Rn */
	r11 = 0xC191448u; UPD(0x0C080A6Au, 2);  /* 0C080A68 mov.l @(disp,pc),Rn */
	r10 = (u32)(s32)(s16)r7;  /* 0C080A6A exts.w Rm,Rn */
	r11 += r9;  /* 0C080A6C add Rm,Rn */
	r4 = r10;  /* 0C080A6E mov Rm,Rn */
	IF(0x0C080A70u); { u32 t_ = r6; PR = 0x0C080A74u; r5 = R32(r11); /* slot mov.l @Rm,Rn */ UPD(t_, 5); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C080A74u); }  /* 0C080A70 jsr @Rn */
L_0C080A74: BLKS(0x0C080A74u);
	r1 = 0xC069AF0u; UPD(0x0C080A76u, 1);  /* 0C080A74 mov.l @(disp,pc),Rn */
	r8 = r0;  /* 0C080A76 mov Rm,Rn */
	r12 = 0xC191458u; UPD(0x0C080A7Au, 2);  /* 0C080A78 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C080A7A mov Rm,Rn */
	r12 += r9;  /* 0C080A7C add Rm,Rn */
	IF(0x0C080A7Eu); { u32 t_ = r1; PR = 0x0C080A82u; r5 = R32(r12); /* slot mov.l @Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C080A82u); }  /* 0C080A7E jsr @Rn */
L_0C080A82: BLKS(0x0C080A82u);
	r8 -= r0;  /* 0C080A82 sub Rm,Rn */
	r1 = r8;  /* 0C080A84 mov Rm,Rn */
	r1 += r1;  /* 0C080A86 add Rm,Rn */
	r1 += r8;  /* 0C080A88 add Rm,Rn */
	IF(0x0C080A8Au); T = (s32)r1 >= 0;  /* 0C080A8A cmp/pz Rn */
	if (!T) { UPD(0x0C080B00u, 8); goto L_0C080B00; }  /* 0C080A8C bf */
L_0C080A8E: BLKS(0x0C080A8Eu);
	r9 = R32(r14 + 0x4u); UPD(0x0C080A90u, 1);  /* 0C080A8E mov.l @(disp,Rm),Rn */
	IF(0x0C080A90u); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C080A90 shar Rn */
	r8 = R32(r9 + 0x24u); UPD(0x0C080A94u, 2);  /* 0C080A92 mov.l @(disp,Rm),Rn */
	IF(0x0C080A94u); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C080A94 shar Rn */
	r7 = 0xC069AF0u; UPD(0x0C080A98u, 2);  /* 0C080A96 mov.l @(disp,pc),Rn */
	r8 += r1;  /* 0C080A98 add Rm,Rn */
	r5 = 0x10000u; UPD(0x0C080A9Cu, 2);  /* 0C080A9A mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C080A9C mov Rm,Rn */
	r8 += r5;  /* 0C080A9E add Rm,Rn */
	IF(0x0C080AA0u); { u32 t_ = r7; PR = 0x0C080AA4u; r5 = R32(r11); /* slot mov.l @Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C080AA4u); }  /* 0C080AA0 jsr @Rn */
L_0C080AA4: BLKS(0x0C080AA4u);
	r4 = R32(r14 + 0x4u); UPD(0x0C080AA6u, 1);  /* 0C080AA4 mov.l @(disp,Rm),Rn */
	r6 = 0xC069B20u; UPD(0x0C080AA8u, 1);  /* 0C080AA6 mov.l @(disp,pc),Rn */
	r11 = R32(r4 + 0x28u); UPD(0x0C080AAAu, 1);  /* 0C080AA8 mov.l @(disp,Rm),Rn */
	r5 = R32(r12); UPD(0x0C080AACu, 1);  /* 0C080AAA mov.l @Rm,Rn */
	r4 = r10;  /* 0C080AAC mov Rm,Rn */
	IF(0x0C080AAEu); { u32 t_ = r6; PR = 0x0C080AB2u; r11 += r0; /* slot add Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C080AB2u); }  /* 0C080AAE jsr @Rn */
L_0C080AB2: BLKS(0x0C080AB2u);
	r7 = r10;  /* 0C080AB2 mov Rm,Rn */
	r11 += r0;  /* 0C080AB4 add Rm,Rn */
	r10 = 0xC0BA7F0u; UPD(0x0C080AB8u, 3);  /* 0C080AB6 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C080AB8 add #imm,Rn */
	r0 = 0x28000u; UPD(0x0C080ABCu, 2);  /* 0C080ABA mov.l @(disp,pc),Rn */
	r5 = r8;  /* 0C080ABC mov Rm,Rn */
	W32(r15, r0); UPD(0x0C080AC0u, 2);  /* 0C080ABE mov.l Rm,@Rn */
	r4 = 0x1u;  /* 0C080AC0 mov #imm,Rn */
	IF(0x0C080AC2u); { u32 t_ = r10; PR = 0x0C080AC6u; r6 = r11; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BA7F0, 0x0C0BA7F0u, 0x0C080AC6u); }  /* 0C080AC2 jsr @Rn */
L_0C080AC6: BLKS(0x0C080AC6u);
	r3 = R32(r14); UPD(0x0C080AC8u, 1);  /* 0C080AC6 mov.l @Rm,Rn */
	r8 = 0x3u;  /* 0C080AC8 mov #imm,Rn */
	r3 += 0x1u;  /* 0C080ACA add #imm,Rn */
	r2 = (u32)(s32)(s16)r3;  /* 0C080ACC exts.w Rm,Rn */
	W32(r14, r2); UPD(0x0C080AD0u, 4);  /* 0C080ACE mov.l Rm,@Rn */
	r9 = R32(r14); UPD(0x0C080AD2u, 1);  /* 0C080AD0 mov.l @Rm,Rn */
	T = (s32)r9 > (s32)r8;  /* 0C080AD2 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C080A54u, 4); goto L_0C080A54; } goto L_0C080AD8; }  /* 0C080AD4 bf/s */
L_0C080AD8: BLKS(0x0C080AD8u);
	r2 = 0xC069B90u; UPD(0x0C080ADAu, 2);  /* 0C080AD8 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C080ADA mov Rm,Rn */
	r14 += 0x8u;  /* 0C080ADC add #imm,Rn */
	r15 = r14;  /* 0C080ADE mov Rm,Rn */
	IF(0x0C080AE0u); PR = R32(r15); r15 += 4; UPD(0x0C080AE2u, 4);  /* 0C080AE0 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C080AE4u, 1);  /* 0C080AE2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C080AE6u, 1);  /* 0C080AE4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C080AE8u, 1);  /* 0C080AE6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C080AEAu, 1);  /* 0C080AE8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C080AECu, 1);  /* 0C080AEA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C080AEEu, 1);  /* 0C080AEC mov.l @Rm+,Rn */
	IF(0x0C080AEEu); { u32 tv_ = r2; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C069B90u: TAIL(blk_f_0C069B90); default: JUMPD(tv_); } }  /* 0C080AEE jmp @Rn */
L_0C080B00: BLKS(0x0C080B00u);
	{ r1 += 0x3u; /* slot add #imm,Rn */ UPD(0x0C080A8Eu, 3); goto L_0C080A8E; }  /* 0C080B00 bra */
L_0C0869A0: BLKS(0x0C0869A0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0869A2u, 1);  /* 0C0869A0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0869A4u, 1);  /* 0C0869A2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0869A6u, 1);  /* 0C0869A4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0869A8u, 1);  /* 0C0869A6 mov.l Rm,@-Rn */
	r8 = 0xB4u; UPD(0x0C0869AAu, 1);  /* 0C0869A8 mov.w @(disp,pc),Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C0869AA exts.w Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0869AEu, 2);  /* 0C0869AC mov.l Rm,@-Rn */
	IF(0x0C0869AEu); MACL = r11 * r8;  /* 0C0869AE mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0869B2u, 3);  /* 0C0869B0 mov.l Rm,@-Rn */
	r9 = 0xC286578u; UPD(0x0C0869B4u, 1);  /* 0C0869B2 mov.l @(disp,pc),Rn */
	IF(0x0C0869B4u); r10 = MACL;  /* 0C0869B4 sts macl,Rn */
	IF(0x0C0869B6u); r15 -= 4; W32(r15, PR); UPD(0x0C0869B8u, 2);  /* 0C0869B6 sts.l pr,@-Rn */
	r10 += r9;  /* 0C0869B8 add Rm,Rn */
	r0 = R32(r10 + 0x8u); UPD(0x0C0869BCu, 2);  /* 0C0869BA mov.l @(disp,Rm),Rn */
	T = r0 == 0x1u;  /* 0C0869BC cmp/eq #imm,r0 */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0869C6u, 4); goto L_0C0869C6; } goto L_0C0869C2; }  /* 0C0869BE bf/s */
L_0C0869C2: BLKS(0x0C0869C2u);
	{ r1 = R32(r10); /* slot mov.l @Rm,Rn */ UPD(0x0C086C10u, 4); goto L_0C086C10; }  /* 0C0869C2 bra */
L_0C0869C6: BLKS(0x0C0869C6u);
	r12 = 0x1u;  /* 0C0869C6 mov #imm,Rn */
	T = (s32)r0 > (s32)r12;  /* 0C0869C8 cmp/gt Rm,Rn */
	{ u32 c_ = !T; T = r0 == 0x2u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C0869D2u, 5); goto L_0C0869D2; } goto L_0C0869CE; }  /* 0C0869CA bf/s */
L_0C0869CE: BLKS(0x0C0869CEu);
	{ IF(0x0C0869D0u); ; /* slot nop */ UPD(0x0C086BB0u, 4); goto L_0C086BB0; }  /* 0C0869CE bra */
L_0C0869D2: BLKS(0x0C0869D2u);
	T = (r0 & r0) == 0;  /* 0C0869D2 tst Rm,Rn */
	if (!T) { UPD(0x0C0869DCu, 4); goto L_0C0869DC; }  /* 0C0869D4 bf */
L_0C0869D6: BLKS(0x0C0869D6u);
	r15 += 0xFFFFFFF8u;  /* 0C0869D6 add #imm,Rn */
	{ r5 = 0xEu; /* slot mov #imm,Rn */ UPD(0x0C086B00u, 4); goto L_0C086B00; }  /* 0C0869D8 bra */
L_0C0869DC: BLKS(0x0C0869DCu);
	r10 = 0xC0A8B50u; UPD(0x0C0869DEu, 1);  /* 0C0869DC mov.l @(disp,pc),Rn */
	IF(0x0C0869DEu); { u32 t_ = r10; PR = 0x0C0869E2u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C0869E2u); }  /* 0C0869DE jsr @Rn */
L_0C0869E2: BLKS(0x0C0869E2u);
	IF(0x0C0869E2u); T = (s32)r0 >= 0;  /* 0C0869E2 cmp/pz Rn */
	{ u32 c_ = T; r12 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0869ECu, 4); goto L_0C0869EC; } goto L_0C0869E8; }  /* 0C0869E4 bt/s */
L_0C0869E8: BLKS(0x0C0869E8u);
	{ r3 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C086AF0u, 4); goto L_0C086AF0; }  /* 0C0869E8 bra */
L_0C0869EC: BLKS(0x0C0869ECu);
	r10 = 0xC062780u; UPD(0x0C0869EEu, 1);  /* 0C0869EC mov.l @(disp,pc),Rn */
	IF(0x0C0869EEu); { u32 t_ = r10; PR = 0x0C0869F2u; r4 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0869F2u); }  /* 0C0869EE jsr @Rn */
L_0C0869F2: BLKS(0x0C0869F2u);
	T = r0 == 0x2u;  /* 0C0869F2 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C086AC0u, 4); goto L_0C086AC0; }  /* 0C0869F4 bt */
L_0C0869F6: BLKS(0x0C0869F6u);
	r4 = 0x2u;  /* 0C0869F6 mov #imm,Rn */
	T = (s32)r0 > (s32)r4;  /* 0C0869F8 cmp/gt Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x3u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C086A90u, 5); goto L_0C086A90; } goto L_0C0869FE; }  /* 0C0869FA bt/s */
L_0C0869FE: BLKS(0x0C0869FEu);
	T = r0 == 0x1u;  /* 0C0869FE cmp/eq #imm,r0 */
	if (T) { UPD(0x0C086A60u, 5); goto L_0C086A60; }  /* 0C086A00 bt */
L_0C086A02: BLKS(0x0C086A02u);
	r3 = 0xB4u; UPD(0x0C086A04u, 1);  /* 0C086A02 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C086A04 add #imm,Rn */
	IF(0x0C086A06u); MACL = r11 * r3;  /* 0C086A06 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C086A0Au, 4);  /* 0C086A08 mov.l @(disp,pc),Rn */
	IF(0x0C086A0Au); r8 = MACL;  /* 0C086A0A sts macl,Rn */
	r8 += r0;  /* 0C086A0C add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C086A10u, 3);  /* 0C086A0E mov.w @(disp,pc),Rn */
	IF(0x0C086A10u); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C086A12u, 1);  /* 0C086A10 mov.b @(r0,Rm),Rn */
	r7 = r2 & 0xFF;  /* 0C086A12 extu.b Rm,Rn */
	W32(r15, r7); UPD(0x0C086A16u, 2);  /* 0C086A14 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C086A16 add #imm,Rn */
	IF(0x0C086A18u); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C086A1Au, 2);  /* 0C086A18 mov.b @(r0,Rm),Rn */
	r5 = r6 & 0xFF;  /* 0C086A1A extu.b Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C086A1Eu, 2);  /* 0C086A1C mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BD6F0u; UPD(0x0C086A20u, 1);  /* 0C086A1E mov.l @(disp,pc),Rn */
	r5 = 0x2u;  /* 0C086A20 mov #imm,Rn */
	r4 = R32(r8); UPD(0x0C086A24u, 2);  /* 0C086A22 mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C086A26u, 1);  /* 0C086A24 mov.l @(disp,Rm),Rn */
	r7 = R32(r8 + 0x28u); UPD(0x0C086A28u, 1);  /* 0C086A26 mov.l @(disp,Rm),Rn */
L_0C086A28: BLKS(0x0C086A28u);
	IF(0x0C086A28u); { u32 t_ = r0; PR = 0x0C086A2Cu; IF(0x0C086A2Au); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C086A2Cu); }  /* 0C086A28 jsr @Rn */
L_0C086A2C: BLKS(0x0C086A2Cu);
	r0 = 0xB4u; UPD(0x0C086A2Eu, 1);  /* 0C086A2C mov.w @(disp,pc),Rn */
	r15 += 0x8u;  /* 0C086A2E add #imm,Rn */
	IF(0x0C086A30u); MACL = r12 * r0;  /* 0C086A30 mul.l Rm,Rn */
	r4 = 0xC286578u; UPD(0x0C086A34u, 4);  /* 0C086A32 mov.l @(disp,pc),Rn */
	IF(0x0C086A34u); r8 = MACL;  /* 0C086A34 sts macl,Rn */
	r8 += r4;  /* 0C086A36 add Rm,Rn */
	r3 = R32(r8); UPD(0x0C086A3Au, 3);  /* 0C086A38 mov.l @Rm,Rn */
	IF(0x0C086A3Au); MACL = r11 * r0;  /* 0C086A3A mul.l Rm,Rn */
	r1 = 0x3000000u; UPD(0x0C086A3Eu, 3);  /* 0C086A3C mov.l @(disp,pc),Rn */
	r12 = 0x0u;  /* 0C086A3E mov #imm,Rn */
	r3 |= r1;  /* 0C086A40 or Rm,Rn */
	W32(r8, r3); UPD(0x0C086A44u, 3);  /* 0C086A42 mov.l Rm,@Rn */
	IF(0x0C086A44u); r0 = MACL;  /* 0C086A44 sts macl,Rn */
	IF(0x0C086A46u); W32(r0 + r4, r12); UPD(0x0C086A48u, 2);  /* 0C086A46 mov.l Rm,@(r0,Rn) */
L_0C086A48: BLKS(0x0C086A48u);
	r15 = r14;  /* 0C086A48 mov Rm,Rn */
	IF(0x0C086A4Au); PR = R32(r15); r15 += 4; UPD(0x0C086A4Cu, 2);  /* 0C086A4A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C086A4Eu, 1);  /* 0C086A4C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C086A50u, 1);  /* 0C086A4E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C086A52u, 1);  /* 0C086A50 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C086A54u, 1);  /* 0C086A52 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C086A56u, 1);  /* 0C086A54 mov.l @Rm+,Rn */
	IF(0x0C086A56u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C086A56 rts */
L_0C086A60: BLKS(0x0C086A60u);
	r7 = 0xB4u; UPD(0x0C086A62u, 1);  /* 0C086A60 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C086A62 add #imm,Rn */
	IF(0x0C086A64u); MACL = r11 * r7;  /* 0C086A64 mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C086A68u, 4);  /* 0C086A66 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C086A6Au, 1);  /* 0C086A68 mov.w @(disp,pc),Rn */
	IF(0x0C086A6Au); r9 = MACL;  /* 0C086A6A sts macl,Rn */
	r9 += r6;  /* 0C086A6C add Rm,Rn */
	IF(0x0C086A6Eu); r5 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C086A70u, 3);  /* 0C086A6E mov.b @(r0,Rm),Rn */
	r8 = r5 & 0xFF;  /* 0C086A70 extu.b Rm,Rn */
	W32(r15, r8); UPD(0x0C086A74u, 2);  /* 0C086A72 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C086A74 add #imm,Rn */
	IF(0x0C086A76u); r4 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C086A78u, 2);  /* 0C086A76 mov.b @(r0,Rm),Rn */
	r5 = 0x2u;  /* 0C086A78 mov #imm,Rn */
	r10 = r4 & 0xFF;  /* 0C086A7A extu.b Rm,Rn */
	W32(r15 + 0x4u, r10); UPD(0x0C086A7Eu, 3);  /* 0C086A7C mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BECB0u; UPD(0x0C086A80u, 1);  /* 0C086A7E mov.l @(disp,pc),Rn */
	r4 = R32(r9); UPD(0x0C086A82u, 1);  /* 0C086A80 mov.l @Rm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C086A84u, 1);  /* 0C086A82 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C086A28u, 3); goto L_0C086A28; }  /* 0C086A84 bra */
L_0C086A90: BLKS(0x0C086A90u);
	if (!T) { UPD(0x0C086A02u, 3); goto L_0C086A02; }  /* 0C086A90 bf */
L_0C086A92: BLKS(0x0C086A92u);
	r15 += 0xFFFFFFF8u;  /* 0C086A92 add #imm,Rn */
	r10 = 0xB4u; UPD(0x0C086A96u, 2);  /* 0C086A94 mov.w @(disp,pc),Rn */
	IF(0x0C086A96u); MACL = r11 * r10;  /* 0C086A96 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C086A9Au, 3);  /* 0C086A98 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C086A9Cu, 1);  /* 0C086A9A mov.w @(disp,pc),Rn */
	IF(0x0C086A9Cu); r3 = MACL;  /* 0C086A9C sts macl,Rn */
	r3 += r9;  /* 0C086A9E add Rm,Rn */
	IF(0x0C086AA0u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C086AA2u, 3);  /* 0C086AA0 mov.b @(r0,Rm),Rn */
	r7 = r2 & 0xFF;  /* 0C086AA2 extu.b Rm,Rn */
	W32(r15, r7); UPD(0x0C086AA6u, 2);  /* 0C086AA4 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C086AA6 add #imm,Rn */
	IF(0x0C086AA8u); r6 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C086AAAu, 2);  /* 0C086AA8 mov.b @(r0,Rm),Rn */
	r5 = r6 & 0xFF;  /* 0C086AAA extu.b Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C086AAEu, 2);  /* 0C086AAC mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BFD30u; UPD(0x0C086AB0u, 1);  /* 0C086AAE mov.l @(disp,pc),Rn */
	r5 = 0x2u;  /* 0C086AB0 mov #imm,Rn */
	r4 = R32(r3); UPD(0x0C086AB4u, 2);  /* 0C086AB2 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C086AB6u, 1);  /* 0C086AB4 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C086A28u, 3); goto L_0C086A28; }  /* 0C086AB6 bra */
L_0C086AC0: BLKS(0x0C086AC0u);
	r8 = 0xB4u; UPD(0x0C086AC2u, 1);  /* 0C086AC0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C086AC2 add #imm,Rn */
	IF(0x0C086AC4u); MACL = r11 * r8;  /* 0C086AC4 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C086AC8u, 4);  /* 0C086AC6 mov.l @(disp,pc),Rn */
	r5 = 0x2u;  /* 0C086AC8 mov #imm,Rn */
	IF(0x0C086ACAu); r3 = MACL;  /* 0C086ACA sts macl,Rn */
	r3 += r0;  /* 0C086ACC add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C086AD0u, 4);  /* 0C086ACE mov.w @(disp,pc),Rn */
	IF(0x0C086AD0u); r4 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C086AD2u, 1);  /* 0C086AD0 mov.b @(r0,Rm),Rn */
	r10 = r4 & 0xFF;  /* 0C086AD2 extu.b Rm,Rn */
	W32(r15, r10); UPD(0x0C086AD6u, 2);  /* 0C086AD4 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C086AD6 add #imm,Rn */
	IF(0x0C086AD8u); r9 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C086ADAu, 2);  /* 0C086AD8 mov.b @(r0,Rm),Rn */
	r2 = r9 & 0xFF;  /* 0C086ADA extu.b Rm,Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C086ADEu, 2);  /* 0C086ADC mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BFE70u; UPD(0x0C086AE0u, 1);  /* 0C086ADE mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C086AE2u, 1);  /* 0C086AE0 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C086AE4u, 1);  /* 0C086AE2 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C086A28u, 3); goto L_0C086A28; }  /* 0C086AE4 bra */
L_0C086AF0: BLKS(0x0C086AF0u);
	r9 = 0xB4u; UPD(0x0C086AF2u, 1);  /* 0C086AF0 mov.w @(disp,pc),Rn */
	IF(0x0C086AF2u); MACL = r11 * r9;  /* 0C086AF2 mul.l Rm,Rn */
	r8 = 0xC286578u; UPD(0x0C086AF6u, 3);  /* 0C086AF4 mov.l @(disp,pc),Rn */
	IF(0x0C086AF6u); r0 = MACL;  /* 0C086AF6 sts macl,Rn */
	{ IF(0x0C086AFAu); W32(r0 + r8, r3); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C086A48u, 4); goto L_0C086A48; }  /* 0C086AF8 bra */
L_0C086B00: BLKS(0x0C086B00u);
	r9 = 0xB0u; UPD(0x0C086B02u, 1);  /* 0C086B00 mov.w @(disp,pc),Rn */
	r9 += r10;  /* 0C086B02 add Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r9); UPD(0x0C086B06u, 2);  /* 0C086B04 mov.b @Rm,Rn */
	r8 = r3 & 0xFF;  /* 0C086B06 extu.b Rm,Rn */
	W32(r15, r8); UPD(0x0C086B0Au, 2);  /* 0C086B08 mov.l Rm,@Rn */
	r8 = 0xA9u; UPD(0x0C086B0Cu, 1);  /* 0C086B0A mov.w @(disp,pc),Rn */
	r8 += r10;  /* 0C086B0C add Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r8); UPD(0x0C086B10u, 2);  /* 0C086B0E mov.b @Rm,Rn */
	r0 = 0xC0BFA40u; UPD(0x0C086B12u, 1);  /* 0C086B10 mov.l @(disp,pc),Rn */
	r7 = r2 & 0xFF;  /* 0C086B12 extu.b Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C086B16u, 2);  /* 0C086B14 mov.l Rm,@(disp,Rn) */
	r4 = R32(r10); UPD(0x0C086B18u, 1);  /* 0C086B16 mov.l @Rm,Rn */
	r6 = R32(r10 + 0x24u); UPD(0x0C086B1Au, 1);  /* 0C086B18 mov.l @(disp,Rm),Rn */
	IF(0x0C086B1Au); { u32 t_ = r0; PR = 0x0C086B1Eu; r7 = R32(r10 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BFA40, 0x0C0BFA40u, 0x0C086B1Eu); }  /* 0C086B1A jsr @Rn */
L_0C086B1E: BLKS(0x0C086B1Eu);
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C086B20u, 1);  /* 0C086B1E mov.b @Rm,Rn */
	r4 = 0x30u;  /* 0C086B20 mov #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r8); UPD(0x0C086B24u, 2);  /* 0C086B22 mov.b @Rm,Rn */
	r7 = r0 & 0xFF;  /* 0C086B24 extu.b Rm,Rn */
	r5 = r6 & 0xFF;  /* 0C086B26 extu.b Rm,Rn */
	r0 = 0xC0BD330u; UPD(0x0C086B2Au, 3);  /* 0C086B28 mov.l @(disp,pc),Rn */
	W32(r15, r5); UPD(0x0C086B2Cu, 1);  /* 0C086B2A mov.l Rm,@Rn */
	W32(r15 + 0x4u, r4); UPD(0x0C086B2Eu, 1);  /* 0C086B2C mov.l Rm,@(disp,Rn) */
	r4 = R32(r10); UPD(0x0C086B30u, 1);  /* 0C086B2E mov.l @Rm,Rn */
	r5 = R32(r10 + 0x24u); UPD(0x0C086B32u, 1);  /* 0C086B30 mov.l @(disp,Rm),Rn */
	IF(0x0C086B32u); { u32 t_ = r0; PR = 0x0C086B36u; r6 = R32(r10 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD330, 0x0C0BD330u, 0x0C086B36u); }  /* 0C086B32 jsr @Rn */
L_0C086B36: BLKS(0x0C086B36u);
	r1 = (u32)(s32)(s8)R8(r8); UPD(0x0C086B38u, 1);  /* 0C086B36 mov.b @Rm,Rn */
	r2 = 0xCu;  /* 0C086B38 mov #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r9); UPD(0x0C086B3Cu, 2);  /* 0C086B3A mov.b @Rm,Rn */
	r15 += 0x4u;  /* 0C086B3C add #imm,Rn */
	r8 = 0xC0BD490u; UPD(0x0C086B40u, 2);  /* 0C086B3E mov.l @(disp,pc),Rn */
	r7 = r1 & 0xFF;  /* 0C086B40 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C086B44u, 2);  /* 0C086B42 mov.l Rm,@Rn */
	r6 = r3 & 0xFF;  /* 0C086B44 extu.b Rm,Rn */
	r5 = R32(r10 + 0x28u); UPD(0x0C086B48u, 2);  /* 0C086B46 mov.l @(disp,Rm),Rn */
	IF(0x0C086B48u); { u32 t_ = r8; PR = 0x0C086B4Cu; r4 = R32(r10 + 0x24u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD490, 0x0C0BD490u, 0x0C086B4Cu); }  /* 0C086B48 jsr @Rn */
L_0C086B4C: BLKS(0x0C086B4Cu);
	r0 = 0xC0A8B10u; UPD(0x0C086B4Eu, 1);  /* 0C086B4C mov.l @(disp,pc),Rn */
	r15 += 0x4u;  /* 0C086B4E add #imm,Rn */
	r4 = r11;  /* 0C086B50 mov Rm,Rn */
	IF(0x0C086B52u); { u32 t_ = r0; PR = 0x0C086B56u; W32(r10 + 0x8u, r12); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 4); CALLP(t_, blk_f_0C0A8B10, 0x0C0A8B10u, 0x0C086B56u); }  /* 0C086B52 jsr @Rn */
L_0C086B56: BLKS(0x0C086B56u);
	r0 = 0xC0A9AE0u; UPD(0x0C086B58u, 1);  /* 0C086B56 mov.l @(disp,pc),Rn */
	IF(0x0C086B58u); { u32 t_ = r0; PR = 0x0C086B5Cu; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C086B5Cu); }  /* 0C086B58 jsr @Rn */
L_0C086B5C: BLKS(0x0C086B5Cu);
	r1 = R32(r10); UPD(0x0C086B5Eu, 1);  /* 0C086B5C mov.l @Rm,Rn */
	r2 = 0xFCFFFFFFu; UPD(0x0C086B60u, 1);  /* 0C086B5E mov.l @(disp,pc),Rn */
	r1 &= r2;  /* 0C086B60 and Rm,Rn */
	UPD(0x0C086B62u, 1);
L_0C086B62: BLKS(0x0C086B62u);
	{ W32(r10, r1); /* slot mov.l Rm,@Rn */ UPD(0x0C086A48u, 3); goto L_0C086A48; }  /* 0C086B62 bra */
L_0C086BB0: BLKS(0x0C086BB0u);
	{ u32 c_ = T; r4 = r11; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C086BB8u, 3); goto L_0C086BB8; } goto L_0C086BB4; }  /* 0C086BB0 bt/s */
L_0C086BB4: BLKS(0x0C086BB4u);
	{ IF(0x0C086BB6u); ; /* slot nop */ UPD(0x0C0869DCu, 4); goto L_0C0869DC; }  /* 0C086BB4 bra */
L_0C086BB8: BLKS(0x0C086BB8u);
	r11 = 0xC0A8B50u; UPD(0x0C086BBAu, 1);  /* 0C086BB8 mov.l @(disp,pc),Rn */
	IF(0x0C086BBAu); { u32 t_ = r11; PR = 0x0C086BBEu; IF(0x0C086BBCu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C086BBEu); }  /* 0C086BBA jsr @Rn */
L_0C086BBE: BLKS(0x0C086BBEu);
	IF(0x0C086BBEu); T = (s32)r0 >= 0;  /* 0C086BBE cmp/pz Rn */
	{ u32 c_ = !T; r12 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C086C00u, 4); goto L_0C086C00; } goto L_0C086BC4; }  /* 0C086BC0 bf/s */
L_0C086BC4: BLKS(0x0C086BC4u);
	r0 = 0xB0u; UPD(0x0C086BC6u, 2);  /* 0C086BC4 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C086BC6 add #imm,Rn */
	IF(0x0C086BC8u); r2 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C086BCAu, 2);  /* 0C086BC8 mov.b @(r0,Rm),Rn */
	r0 = r2 & 0xFF;  /* 0C086BCA extu.b Rm,Rn */
	W32(r15, r0); UPD(0x0C086BCEu, 2);  /* 0C086BCC mov.l Rm,@Rn */
	r7 = 0xA9u; UPD(0x0C086BD0u, 1);  /* 0C086BCE mov.w @(disp,pc),Rn */
	r0 = r10;  /* 0C086BD0 mov Rm,Rn */
	IF(0x0C086BD2u); r6 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C086BD4u, 2);  /* 0C086BD2 mov.b @(r0,Rm),Rn */
	r11 = 0xC0BECB0u; UPD(0x0C086BD6u, 1);  /* 0C086BD4 mov.l @(disp,pc),Rn */
	r5 = r6 & 0xFF;  /* 0C086BD6 extu.b Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C086BDAu, 2);  /* 0C086BD8 mov.l Rm,@(disp,Rn) */
	r5 = 0x4u;  /* 0C086BDA mov #imm,Rn */
	r4 = R32(r10); UPD(0x0C086BDEu, 2);  /* 0C086BDC mov.l @Rm,Rn */
	r6 = R32(r10 + 0x24u); UPD(0x0C086BE0u, 1);  /* 0C086BDE mov.l @(disp,Rm),Rn */
	IF(0x0C086BE0u); { u32 t_ = r11; PR = 0x0C086BE4u; r7 = R32(r10 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BECB0, 0x0C0BECB0u, 0x0C086BE4u); }  /* 0C086BE0 jsr @Rn */
L_0C086BE4: BLKS(0x0C086BE4u);
	IF(0x0C086BE4u); MACL = r12 * r8;  /* 0C086BE4 mul.l Rm,Rn */
	r1 = 0x3000000u; UPD(0x0C086BE8u, 3);  /* 0C086BE6 mov.l @(disp,pc),Rn */
	r15 += 0x8u;  /* 0C086BE8 add #imm,Rn */
	IF(0x0C086BEAu); r12 = MACL;  /* 0C086BEA sts macl,Rn */
	r12 += r9;  /* 0C086BEC add Rm,Rn */
	r4 = R32(r12); UPD(0x0C086BF0u, 4);  /* 0C086BEE mov.l @Rm,Rn */
	r9 = 0x0u;  /* 0C086BF0 mov #imm,Rn */
	r4 |= r1;  /* 0C086BF2 or Rm,Rn */
	W32(r12, r4); UPD(0x0C086BF6u, 3);  /* 0C086BF4 mov.l Rm,@Rn */
	{ W32(r10, r9); /* slot mov.l Rm,@Rn */ UPD(0x0C086A48u, 3); goto L_0C086A48; }  /* 0C086BF6 bra */
L_0C086C00: BLKS(0x0C086C00u);
	{ r1 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C086B62u, 3); goto L_0C086B62; }  /* 0C086C00 bra */
L_0C086C10: BLKS(0x0C086C10u);
	r2 = 0xECFFFFFFu; UPD(0x0C086C12u, 1);  /* 0C086C10 mov.l @(disp,pc),Rn */
	{ r1 &= r2; /* slot and Rm,Rn */ UPD(0x0C086B62u, 3); goto L_0C086B62; }  /* 0C086C12 bra */
L_0C086C30: BLKS(0x0C086C30u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C086C32u, 1);  /* 0C086C30 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C086C34u, 1);  /* 0C086C32 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C086C36u, 1);  /* 0C086C34 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C086C38u, 1);  /* 0C086C36 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C086C3Au, 1);  /* 0C086C38 mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C086C3A exts.w Rm,Rn */
	r9 = 0xB4u; UPD(0x0C086C3Eu, 2);  /* 0C086C3C mov.w @(disp,pc),Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C086C40u, 1);  /* 0C086C3E mov.l Rm,@-Rn */
	IF(0x0C086C40u); MACL = r11 * r9;  /* 0C086C40 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C086C44u, 3);  /* 0C086C42 mov.l Rm,@-Rn */
	r8 = 0xC286578u; UPD(0x0C086C46u, 1);  /* 0C086C44 mov.l @(disp,pc),Rn */
	IF(0x0C086C46u); r13 = MACL;  /* 0C086C46 sts macl,Rn */
	IF(0x0C086C48u); r15 -= 4; W32(r15, PR); UPD(0x0C086C4Au, 2);  /* 0C086C48 sts.l pr,@-Rn */
	r13 += r8;  /* 0C086C4A add Rm,Rn */
	r0 = R32(r13 + 0x8u); UPD(0x0C086C4Eu, 2);  /* 0C086C4C mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFF4u;  /* 0C086C4E add #imm,Rn */
	IF(0x0C086C50u); T = (s32)r0 >= 0;  /* 0C086C50 cmp/pz Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C086C68u, 5); goto L_0C086C68; } goto L_0C086C56; }  /* 0C086C52 bf/s */
L_0C086C56: BLKS(0x0C086C56u);
	r2 = 0x1u;  /* 0C086C56 mov #imm,Rn */
	T = (s32)r0 > (s32)r2;  /* 0C086C58 cmp/gt Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x2u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C086C62u, 6); goto L_0C086C62; } goto L_0C086C5E; }  /* 0C086C5A bt/s */
L_0C086C5E: BLKS(0x0C086C5Eu);
	{ r13 += 0x3Cu; /* slot add #imm,Rn */ UPD(0x0C087150u, 4); goto L_0C087150; }  /* 0C086C5E bra */
L_0C086C62: BLKS(0x0C086C62u);
	if (!T) { UPD(0x0C086C68u, 3); goto L_0C086C68; }  /* 0C086C62 bf */
L_0C086C64: BLKS(0x0C086C64u);
	{ IF(0x0C086C66u); ; /* slot nop */ UPD(0x0C086FF0u, 3); goto L_0C086FF0; }  /* 0C086C64 bra */
L_0C086C68: BLKS(0x0C086C68u);
	r8 = 0xC0A8B50u; UPD(0x0C086C6Au, 1);  /* 0C086C68 mov.l @(disp,pc),Rn */
	IF(0x0C086C6Au); { u32 t_ = r8; PR = 0x0C086C6Eu; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C086C6Eu); }  /* 0C086C6A jsr @Rn */
L_0C086C6E: BLKS(0x0C086C6Eu);
	IF(0x0C086C6Eu); T = (s32)r0 >= 0;  /* 0C086C6E cmp/pz Rn */
	{ u32 c_ = T; r6 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C086C78u, 4); goto L_0C086C78; } goto L_0C086C74; }  /* 0C086C70 bt/s */
L_0C086C74: BLKS(0x0C086C74u);
	{ IF(0x0C086C76u); ; /* slot nop */ UPD(0x0C086FE0u, 4); goto L_0C086FE0; }  /* 0C086C74 bra */
L_0C086C78: BLKS(0x0C086C78u);
	r2 = 0xB4u; UPD(0x0C086C7Au, 1);  /* 0C086C78 mov.w @(disp,pc),Rn */
	r4 = 0x8u;  /* 0C086C7A mov #imm,Rn */
	IF(0x0C086C7Cu); MACL = r11 * r2;  /* 0C086C7C mul.l Rm,Rn */
	r10 = 0xC286578u; UPD(0x0C086C80u, 4);  /* 0C086C7E mov.l @(disp,pc),Rn */
	IF(0x0C086C80u); r5 = MACL;  /* 0C086C80 sts macl,Rn */
	IF(0x0C086C82u); MACL = r0 * r2;  /* 0C086C82 mul.l Rm,Rn */
	r5 += r10;  /* 0C086C84 add Rm,Rn */
	r12 = R32(r5 + 0x2Cu); UPD(0x0C086C88u, 5);  /* 0C086C86 mov.l @(disp,Rm),Rn */
	IF(0x0C086C88u); r0 = MACL;  /* 0C086C88 sts macl,Rn */
	r0 += r10;  /* 0C086C8A add Rm,Rn */
	r7 = R32(r0 + 0x24u); UPD(0x0C086C8Eu, 3);  /* 0C086C8C mov.l @(disp,Rm),Rn */
	r9 = R32(r0 + 0x28u); UPD(0x0C086C90u, 1);  /* 0C086C8E mov.l @(disp,Rm),Rn */
	r7 += r12;  /* 0C086C90 add Rm,Rn */
	r1 = R32(r5 + 0x30u); UPD(0x0C086C94u, 2);  /* 0C086C92 mov.l @(disp,Rm),Rn */
	r2 = R32(r5 + 0x8u); UPD(0x0C086C96u, 1);  /* 0C086C94 mov.l @(disp,Rm),Rn */
	r9 += r1;  /* 0C086C96 add Rm,Rn */
	r2 += 0xFFFFFFFDu;  /* 0C086C98 add #imm,Rn */
	W32(r5 + 0x24u, r7); UPD(0x0C086C9Cu, 3);  /* 0C086C9A mov.l Rm,@(disp,Rn) */
	T = r2 > r4;  /* 0C086C9C cmp/hi Rm,Rn */
	{ u32 c_ = T; W32(r5 + 0x28u, r9); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C086CFCu, 4); goto L_0C086CFC; } UPD(0x0C086CA2u, 1); goto L_0C086CA2; }  /* 0C086C9E bt/s */
L_0C086CA2: BLKS(0x0C086CA2u);
	r0 = 0xC086CB8u;  /* 0C086CA2 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C086CA4 add Rm,Rn */
	IF(0x0C086CA6u); r13 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C086CA8u, 3);  /* 0C086CA6 mov.w @(r0,Rm),Rn */
	IF(0x0C086CA8u); { u32 tv_ = (r13 + 0x0C086CACu); u32 t_ = PHYS(tv_); IF(0x0C086CAAu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C086CD0u: goto L_0C086CD0; case 0x0C086CF0u: goto L_0C086CF0; case 0x0C086DA0u: goto L_0C086DA0; case 0x0C086E10u: goto L_0C086E10; case 0x0C086E80u: goto L_0C086E80; case 0x0C086ED0u: goto L_0C086ED0; case 0x0C086F40u: goto L_0C086F40; case 0x0C086F50u: goto L_0C086F50; case 0x0C086F60u: goto L_0C086F60; default: JUMPD(tv_); } }  /* 0C086CA8 braf Rn */
L_0C086CD0: BLKS(0x0C086CD0u);
	r1 = 0xC0808A0u; UPD(0x0C086CD2u, 1);  /* 0C086CD0 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C086CD2 mov Rm,Rn */
	r5 = r6;  /* 0C086CD4 mov Rm,Rn */
	UPD(0x0C086CD6u, 2);
L_0C086CD6: BLKS(0x0C086CD6u);
	r14 += 0xCu;  /* 0C086CD6 add #imm,Rn */
	r15 = r14;  /* 0C086CD8 mov Rm,Rn */
	IF(0x0C086CDAu); PR = R32(r15); r15 += 4; UPD(0x0C086CDCu, 3);  /* 0C086CDA lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C086CDEu, 1);  /* 0C086CDC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C086CE0u, 1);  /* 0C086CDE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C086CE2u, 1);  /* 0C086CE0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C086CE4u, 1);  /* 0C086CE2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C086CE6u, 1);  /* 0C086CE4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C086CE8u, 1);  /* 0C086CE6 mov.l @Rm+,Rn */
	IF(0x0C086CE8u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0808A0u: TAIL(blk_f_0C0808A0); case 0x0C0809E0u: goto L_0C0809E0; default: JUMPD(tv_); } }  /* 0C086CE8 jmp @Rn */
L_0C086CF0: BLKS(0x0C086CF0u);
	r8 = 0xC0A8DD0u; UPD(0x0C086CF2u, 1);  /* 0C086CF0 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C086CF2 mov Rm,Rn */
	IF(0x0C086CF4u); { u32 t_ = r8; PR = 0x0C086CF8u; r5 = r6; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8DD0, 0x0C0A8DD0u, 0x0C086CF8u); }  /* 0C086CF4 jsr @Rn */
L_0C086CF8: BLKS(0x0C086CF8u);
	T = (r0 & r0) == 0;  /* 0C086CF8 tst Rm,Rn */
	if (!T) { UPD(0x0C086D20u, 4); goto L_0C086D20; }  /* 0C086CFA bf */
L_0C086CFC: BLKS(0x0C086CFCu);
	r14 += 0xCu;  /* 0C086CFC add #imm,Rn */
	UPD(0x0C086CFEu, 1);
L_0C086CFE: BLKS(0x0C086CFEu);
	r15 = r14;  /* 0C086CFE mov Rm,Rn */
	IF(0x0C086D00u); PR = R32(r15); r15 += 4; UPD(0x0C086D02u, 2);  /* 0C086D00 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C086D04u, 1);  /* 0C086D02 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C086D06u, 1);  /* 0C086D04 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C086D08u, 1);  /* 0C086D06 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C086D0Au, 1);  /* 0C086D08 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C086D0Cu, 1);  /* 0C086D0A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C086D0Eu, 1);  /* 0C086D0C mov.l @Rm+,Rn */
	IF(0x0C086D0Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C086D0E rts */
L_0C086D20: BLKS(0x0C086D20u);
	r9 = 0xC0BC1B0u; UPD(0x0C086D22u, 1);  /* 0C086D20 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C086D22 mov Rm,Rn */
	r5 = 0x5Au;  /* 0C086D24 mov #imm,Rn */
	IF(0x0C086D26u); { u32 t_ = r9; PR = 0x0C086D2Au; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C086D2Au); }  /* 0C086D26 jsr @Rn */
L_0C086D2A: BLKS(0x0C086D2Au);
	T = (r0 & r0) == 0;  /* 0C086D2A tst Rm,Rn */
	if (T) { UPD(0x0C086CFCu, 4); goto L_0C086CFC; }  /* 0C086D2C bt */
L_0C086D2E: BLKS(0x0C086D2Eu);
	r5 = 0xB4u; UPD(0x0C086D30u, 1);  /* 0C086D2E mov.w @(disp,pc),Rn */
	IF(0x0C086D30u); MACL = r11 * r5;  /* 0C086D30 mul.l Rm,Rn */
	r4 = 0xC286578u; UPD(0x0C086D34u, 3);  /* 0C086D32 mov.l @(disp,pc),Rn */
	IF(0x0C086D34u); r10 = MACL;  /* 0C086D34 sts macl,Rn */
	r10 += r4;  /* 0C086D36 add Rm,Rn */
	r6 = 0xA9u; UPD(0x0C086D3Au, 3);  /* 0C086D38 mov.w @(disp,pc),Rn */
	r0 = r10;  /* 0C086D3A mov Rm,Rn */
	r12 = 0xC0BBF10u; UPD(0x0C086D3Eu, 2);  /* 0C086D3C mov.l @(disp,pc),Rn */
	IF(0x0C086D3Eu); r3 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C086D40u, 1);  /* 0C086D3E mov.b @(r0,Rm),Rn */
	r4 = R32(r10 + 0x24u); UPD(0x0C086D42u, 1);  /* 0C086D40 mov.l @(disp,Rm),Rn */
	r6 = r3 & 0xFF;  /* 0C086D42 extu.b Rm,Rn */
	IF(0x0C086D44u); { u32 t_ = r12; PR = 0x0C086D48u; r5 = R32(r10 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BBF10, 0x0C0BBF10u, 0x0C086D48u); }  /* 0C086D44 jsr @Rn */
L_0C086D48: BLKS(0x0C086D48u);
	T = (r0 & r0) == 0;  /* 0C086D48 tst Rm,Rn */
	if (T) { UPD(0x0C086CFCu, 4); goto L_0C086CFC; }  /* 0C086D4A bt */
L_0C086D4C: BLKS(0x0C086D4Cu);
	r0 = r10;  /* 0C086D4C mov Rm,Rn */
	r2 = 0x86u; UPD(0x0C086D50u, 2);  /* 0C086D4E mov.w @(disp,pc),Rn */
	r8 = 0xC069B20u; UPD(0x0C086D52u, 1);  /* 0C086D50 mov.l @(disp,pc),Rn */
	IF(0x0C086D52u); r9 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C086D54u, 1);  /* 0C086D52 mov.w @(r0,Rm),Rn */
	r5 = 0x100000u; UPD(0x0C086D56u, 1);  /* 0C086D54 mov.l @(disp,pc),Rn */
	IF(0x0C086D56u); { u32 t_ = r8; PR = 0x0C086D5Au; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C086D5Au); }  /* 0C086D56 jsr @Rn */
L_0C086D5A: BLKS(0x0C086D5Au);
	r8 = R32(r10 + 0x24u); UPD(0x0C086D5Cu, 1);  /* 0C086D5A mov.l @(disp,Rm),Rn */
	r4 = r9;  /* 0C086D5C mov Rm,Rn */
	r13 = 0xC069AF0u; UPD(0x0C086D60u, 2);  /* 0C086D5E mov.l @(disp,pc),Rn */
	r8 += r0;  /* 0C086D60 add Rm,Rn */
	r7 = 0x20000u; UPD(0x0C086D64u, 2);  /* 0C086D62 mov.l @(disp,pc),Rn */
	r5 = 0x140000u; UPD(0x0C086D66u, 1);  /* 0C086D64 mov.l @(disp,pc),Rn */
	IF(0x0C086D66u); { u32 t_ = r13; PR = 0x0C086D6Au; r8 += r7; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C086D6Au); }  /* 0C086D66 jsr @Rn */
L_0C086D6A: BLKS(0x0C086D6Au);
	r6 = R32(r10 + 0x28u); UPD(0x0C086D6Cu, 1);  /* 0C086D6A mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C086D6C add #imm,Rn */
	r6 += r0;  /* 0C086D6E add Rm,Rn */
	r0 = 0x30000u; UPD(0x0C086D72u, 3);  /* 0C086D70 mov.l @(disp,pc),Rn */
	r4 = 0x3u;  /* 0C086D72 mov #imm,Rn */
	W32(r15, r0); UPD(0x0C086D76u, 2);  /* 0C086D74 mov.l Rm,@Rn */
L_0C086D76: BLKS(0x0C086D76u);
	r0 = 0xC0BAD60u; UPD(0x0C086D78u, 1);  /* 0C086D76 mov.l @(disp,pc),Rn */
	r5 = r8;  /* 0C086D78 mov Rm,Rn */
	r7 = r9;  /* 0C086D7A mov Rm,Rn */
	UPD(0x0C086D7Cu, 2);
L_0C086D7C: BLKS(0x0C086D7Cu);
	IF(0x0C086D7Cu); { u32 t_ = r0; PR = 0x0C086D80u; IF(0x0C086D7Eu); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C086D80u); }  /* 0C086D7C jsr @Rn */
L_0C086D80: BLKS(0x0C086D80u);
	r1 = 0xC069B90u; UPD(0x0C086D82u, 1);  /* 0C086D80 mov.l @(disp,pc),Rn */
	r15 += 0x4u;  /* 0C086D82 add #imm,Rn */
	r4 = r11;  /* 0C086D84 mov Rm,Rn */
	UPD(0x0C086D86u, 2);
L_0C086D86: BLKS(0x0C086D86u);
	r14 += 0xCu;  /* 0C086D86 add #imm,Rn */
	r15 = r14;  /* 0C086D88 mov Rm,Rn */
	IF(0x0C086D8Au); PR = R32(r15); r15 += 4; UPD(0x0C086D8Cu, 3);  /* 0C086D8A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C086D8Eu, 1);  /* 0C086D8C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C086D90u, 1);  /* 0C086D8E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C086D92u, 1);  /* 0C086D90 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C086D94u, 1);  /* 0C086D92 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C086D96u, 1);  /* 0C086D94 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C086D98u, 1);  /* 0C086D96 mov.l @Rm+,Rn */
	IF(0x0C086D98u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0869A0u: goto L_0C0869A0; case 0x0C0A8AE0u: TAIL(blk_f_0C0A8AE0); default: JUMPD(tv_); } }  /* 0C086D98 jmp @Rn */
L_0C086DA0: BLKS(0x0C086DA0u);
	r10 = 0xC0A8DD0u; UPD(0x0C086DA2u, 1);  /* 0C086DA0 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C086DA2 mov Rm,Rn */
	IF(0x0C086DA4u); { u32 t_ = r10; PR = 0x0C086DA8u; r5 = r6; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8DD0, 0x0C0A8DD0u, 0x0C086DA8u); }  /* 0C086DA4 jsr @Rn */
L_0C086DA8: BLKS(0x0C086DA8u);
	T = (r0 & r0) == 0;  /* 0C086DA8 tst Rm,Rn */
	if (T) { UPD(0x0C086CFCu, 4); goto L_0C086CFC; }  /* 0C086DAA bt */
L_0C086DAC: BLKS(0x0C086DACu);
	r4 = r11;  /* 0C086DAC mov Rm,Rn */
	r9 = 0xC0BC1B0u; UPD(0x0C086DB0u, 2);  /* 0C086DAE mov.l @(disp,pc),Rn */
	r5 = 0x5Au;  /* 0C086DB0 mov #imm,Rn */
	IF(0x0C086DB2u); { u32 t_ = r9; PR = 0x0C086DB6u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C086DB6u); }  /* 0C086DB2 jsr @Rn */
L_0C086DB6: BLKS(0x0C086DB6u);
	T = (r0 & r0) == 0;  /* 0C086DB6 tst Rm,Rn */
	if (T) { UPD(0x0C086CFCu, 4); goto L_0C086CFC; }  /* 0C086DB8 bt */
L_0C086DBA: BLKS(0x0C086DBAu);
	r5 = 0xB4u; UPD(0x0C086DBCu, 1);  /* 0C086DBA mov.w @(disp,pc),Rn */
	IF(0x0C086DBCu); MACL = r11 * r5;  /* 0C086DBC mul.l Rm,Rn */
	r4 = 0xC286578u; UPD(0x0C086DC0u, 3);  /* 0C086DBE mov.l @(disp,pc),Rn */
	IF(0x0C086DC0u); r10 = MACL;  /* 0C086DC0 sts macl,Rn */
	r10 += r4;  /* 0C086DC2 add Rm,Rn */
	r6 = 0xA9u; UPD(0x0C086DC6u, 3);  /* 0C086DC4 mov.w @(disp,pc),Rn */
	r0 = r10;  /* 0C086DC6 mov Rm,Rn */
	r12 = 0xC0BBF10u; UPD(0x0C086DCAu, 2);  /* 0C086DC8 mov.l @(disp,pc),Rn */
	IF(0x0C086DCAu); r3 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C086DCCu, 1);  /* 0C086DCA mov.b @(r0,Rm),Rn */
	r4 = R32(r10 + 0x24u); UPD(0x0C086DCEu, 1);  /* 0C086DCC mov.l @(disp,Rm),Rn */
	r6 = r3 & 0xFF;  /* 0C086DCE extu.b Rm,Rn */
	IF(0x0C086DD0u); { u32 t_ = r12; PR = 0x0C086DD4u; r5 = R32(r10 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BBF10, 0x0C0BBF10u, 0x0C086DD4u); }  /* 0C086DD0 jsr @Rn */
L_0C086DD4: BLKS(0x0C086DD4u);
	T = (r0 & r0) == 0;  /* 0C086DD4 tst Rm,Rn */
	if (T) { UPD(0x0C086CFCu, 4); goto L_0C086CFC; }  /* 0C086DD6 bt */
L_0C086DD8: BLKS(0x0C086DD8u);
	r0 = r10;  /* 0C086DD8 mov Rm,Rn */
	r2 = 0x86u; UPD(0x0C086DDCu, 2);  /* 0C086DDA mov.w @(disp,pc),Rn */
	r8 = 0xC069B20u; UPD(0x0C086DDEu, 1);  /* 0C086DDC mov.l @(disp,pc),Rn */
	IF(0x0C086DDEu); r9 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C086DE0u, 1);  /* 0C086DDE mov.w @(r0,Rm),Rn */
	r5 = 0x100000u; UPD(0x0C086DE2u, 1);  /* 0C086DE0 mov.l @(disp,pc),Rn */
	IF(0x0C086DE2u); { u32 t_ = r8; PR = 0x0C086DE6u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C086DE6u); }  /* 0C086DE2 jsr @Rn */
L_0C086DE6: BLKS(0x0C086DE6u);
	r8 = R32(r10 + 0x24u); UPD(0x0C086DE8u, 1);  /* 0C086DE6 mov.l @(disp,Rm),Rn */
	r4 = r9;  /* 0C086DE8 mov Rm,Rn */
	r13 = 0xC069AF0u; UPD(0x0C086DECu, 2);  /* 0C086DEA mov.l @(disp,pc),Rn */
	r8 += r0;  /* 0C086DEC add Rm,Rn */
	r7 = 0x10000u; UPD(0x0C086DF0u, 2);  /* 0C086DEE mov.l @(disp,pc),Rn */
	r5 = 0x140000u; UPD(0x0C086DF2u, 1);  /* 0C086DF0 mov.l @(disp,pc),Rn */
	IF(0x0C086DF2u); { u32 t_ = r13; PR = 0x0C086DF6u; r8 += r7; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C086DF6u); }  /* 0C086DF2 jsr @Rn */
L_0C086DF6: BLKS(0x0C086DF6u);
	r6 = R32(r10 + 0x28u); UPD(0x0C086DF8u, 1);  /* 0C086DF6 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C086DF8 add #imm,Rn */
	r6 += r0;  /* 0C086DFA add Rm,Rn */
	r0 = 0x30000u; UPD(0x0C086DFEu, 3);  /* 0C086DFC mov.l @(disp,pc),Rn */
	r4 = 0x2u;  /* 0C086DFE mov #imm,Rn */
	{ W32(r15, r0); /* slot mov.l Rm,@Rn */ UPD(0x0C086D76u, 4); goto L_0C086D76; }  /* 0C086E00 bra */
L_0C086E10: BLKS(0x0C086E10u);
	r10 = 0xC0A8DD0u; UPD(0x0C086E12u, 1);  /* 0C086E10 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C086E12 mov Rm,Rn */
	IF(0x0C086E14u); { u32 t_ = r10; PR = 0x0C086E18u; r5 = r6; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8DD0, 0x0C0A8DD0u, 0x0C086E18u); }  /* 0C086E14 jsr @Rn */
L_0C086E18: BLKS(0x0C086E18u);
	T = (r0 & r0) == 0;  /* 0C086E18 tst Rm,Rn */
	if (T) { UPD(0x0C086EEAu, 4); goto L_0C086EEA; }  /* 0C086E1A bt */
L_0C086E1C: BLKS(0x0C086E1Cu);
	r4 = r11;  /* 0C086E1C mov Rm,Rn */
	r9 = 0xC0BC1B0u; UPD(0x0C086E20u, 2);  /* 0C086E1E mov.l @(disp,pc),Rn */
	r5 = 0x5Au;  /* 0C086E20 mov #imm,Rn */
	IF(0x0C086E22u); { u32 t_ = r9; PR = 0x0C086E26u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C086E26u); }  /* 0C086E22 jsr @Rn */
L_0C086E26: BLKS(0x0C086E26u);
	T = (r0 & r0) == 0;  /* 0C086E26 tst Rm,Rn */
	if (T) { UPD(0x0C086EEAu, 4); goto L_0C086EEA; }  /* 0C086E28 bt */
L_0C086E2A: BLKS(0x0C086E2Au);
	r12 = 0xB4u; UPD(0x0C086E2Cu, 1);  /* 0C086E2A mov.w @(disp,pc),Rn */
	IF(0x0C086E2Cu); MACL = r11 * r12;  /* 0C086E2C mul.l Rm,Rn */
	r4 = 0xC286578u; UPD(0x0C086E30u, 3);  /* 0C086E2E mov.l @(disp,pc),Rn */
	IF(0x0C086E30u); r12 = MACL;  /* 0C086E30 sts macl,Rn */
	r12 += r4;  /* 0C086E32 add Rm,Rn */
	r6 = 0xA9u; UPD(0x0C086E36u, 3);  /* 0C086E34 mov.w @(disp,pc),Rn */
	r0 = r12;  /* 0C086E36 mov Rm,Rn */
	r13 = 0xC0BBF10u; UPD(0x0C086E3Au, 2);  /* 0C086E38 mov.l @(disp,pc),Rn */
	IF(0x0C086E3Au); r3 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C086E3Cu, 1);  /* 0C086E3A mov.b @(r0,Rm),Rn */
	r4 = R32(r12 + 0x24u); UPD(0x0C086E3Eu, 1);  /* 0C086E3C mov.l @(disp,Rm),Rn */
	r6 = r3 & 0xFF;  /* 0C086E3E extu.b Rm,Rn */
	IF(0x0C086E40u); { u32 t_ = r13; PR = 0x0C086E44u; r5 = R32(r12 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BBF10, 0x0C0BBF10u, 0x0C086E44u); }  /* 0C086E40 jsr @Rn */
L_0C086E44: BLKS(0x0C086E44u);
	T = (r0 & r0) == 0;  /* 0C086E44 tst Rm,Rn */
	if (T) { UPD(0x0C086EEAu, 4); goto L_0C086EEA; }  /* 0C086E46 bt */
L_0C086E48: BLKS(0x0C086E48u);
	r0 = r12;  /* 0C086E48 mov Rm,Rn */
	r5 = 0x86u; UPD(0x0C086E4Cu, 2);  /* 0C086E4A mov.w @(disp,pc),Rn */
	r8 = 0xC069B20u; UPD(0x0C086E4Eu, 1);  /* 0C086E4C mov.l @(disp,pc),Rn */
	IF(0x0C086E4Eu); r9 = (u32)(s32)(s16)R16(r0 + r5); UPD(0x0C086E50u, 1);  /* 0C086E4E mov.w @(r0,Rm),Rn */
	r10 = 0xC069AF0u; UPD(0x0C086E52u, 1);  /* 0C086E50 mov.l @(disp,pc),Rn */
	r5 = 0xC0000u; UPD(0x0C086E54u, 1);  /* 0C086E52 mov.l @(disp,pc),Rn */
	IF(0x0C086E54u); { u32 t_ = r8; PR = 0x0C086E58u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C086E58u); }  /* 0C086E54 jsr @Rn */
L_0C086E58: BLKS(0x0C086E58u);
	r8 = R32(r12 + 0x24u); UPD(0x0C086E5Au, 1);  /* 0C086E58 mov.l @(disp,Rm),Rn */
	r4 = r9;  /* 0C086E5A mov Rm,Rn */
	r5 = 0x100000u; UPD(0x0C086E5Eu, 2);  /* 0C086E5C mov.l @(disp,pc),Rn */
	IF(0x0C086E5Eu); { u32 t_ = r10; PR = 0x0C086E62u; r8 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C086E62u); }  /* 0C086E5E jsr @Rn */
L_0C086E62: BLKS(0x0C086E62u);
	r13 = 0x20000u; UPD(0x0C086E64u, 1);  /* 0C086E62 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C086E64 add #imm,Rn */
	r6 = R32(r12 + 0x28u); UPD(0x0C086E68u, 2);  /* 0C086E66 mov.l @(disp,Rm),Rn */
	r8 += r13;  /* 0C086E68 add Rm,Rn */
	W32(r15, r13); UPD(0x0C086E6Cu, 2);  /* 0C086E6A mov.l Rm,@Rn */
	r6 += r0;  /* 0C086E6C add Rm,Rn */
	{ r4 = 0x7u; /* slot mov #imm,Rn */ UPD(0x0C086D76u, 4); goto L_0C086D76; }  /* 0C086E6E bra */
L_0C086E80: BLKS(0x0C086E80u);
	r1 = 0xC0809E0u; UPD(0x0C086E82u, 1);  /* 0C086E80 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C086E82 mov Rm,Rn */
	{ r5 = r6; /* slot mov Rm,Rn */ UPD(0x0C086CD6u, 4); goto L_0C086CD6; }  /* 0C086E84 bra */
L_0C086ED0: BLKS(0x0C086ED0u);
	r9 = 0xC0A8DD0u; UPD(0x0C086ED2u, 1);  /* 0C086ED0 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C086ED2 mov Rm,Rn */
	IF(0x0C086ED4u); { u32 t_ = r9; PR = 0x0C086ED8u; r5 = r6; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8DD0, 0x0C0A8DD0u, 0x0C086ED8u); }  /* 0C086ED4 jsr @Rn */
L_0C086ED8: BLKS(0x0C086ED8u);
	T = (r0 & r0) == 0;  /* 0C086ED8 tst Rm,Rn */
	if (T) { UPD(0x0C086EEAu, 4); goto L_0C086EEA; }  /* 0C086EDA bt */
L_0C086EDC: BLKS(0x0C086EDCu);
	r4 = r11;  /* 0C086EDC mov Rm,Rn */
	r12 = 0xC0BC1B0u; UPD(0x0C086EE0u, 2);  /* 0C086EDE mov.l @(disp,pc),Rn */
	r5 = 0x5Au;  /* 0C086EE0 mov #imm,Rn */
	IF(0x0C086EE2u); { u32 t_ = r12; PR = 0x0C086EE6u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C086EE6u); }  /* 0C086EE2 jsr @Rn */
L_0C086EE6: BLKS(0x0C086EE6u);
	T = (r0 & r0) == 0;  /* 0C086EE6 tst Rm,Rn */
	if (!T) { UPD(0x0C086EEEu, 4); goto L_0C086EEE; }  /* 0C086EE8 bf */
L_0C086EEA: BLKS(0x0C086EEAu);
	{ r14 += 0xCu; /* slot add #imm,Rn */ UPD(0x0C086CFEu, 3); goto L_0C086CFE; }  /* 0C086EEA bra */
L_0C086EEE: BLKS(0x0C086EEEu);
	r3 = 0xB4u; UPD(0x0C086EF0u, 1);  /* 0C086EEE mov.w @(disp,pc),Rn */
	IF(0x0C086EF0u); MACL = r11 * r3;  /* 0C086EF0 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C086EF4u, 3);  /* 0C086EF2 mov.l @(disp,pc),Rn */
	IF(0x0C086EF4u); r10 = MACL;  /* 0C086EF4 sts macl,Rn */
	r10 += r0;  /* 0C086EF6 add Rm,Rn */
	r2 = 0xA9u; UPD(0x0C086EFAu, 3);  /* 0C086EF8 mov.w @(disp,pc),Rn */
	r0 = r10;  /* 0C086EFA mov Rm,Rn */
	r13 = 0xC0BBF10u; UPD(0x0C086EFEu, 2);  /* 0C086EFC mov.l @(disp,pc),Rn */
	IF(0x0C086EFEu); r7 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C086F00u, 1);  /* 0C086EFE mov.b @(r0,Rm),Rn */
	r4 = R32(r10 + 0x24u); UPD(0x0C086F02u, 1);  /* 0C086F00 mov.l @(disp,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C086F02 extu.b Rm,Rn */
	IF(0x0C086F04u); { u32 t_ = r13; PR = 0x0C086F08u; r5 = R32(r10 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BBF10, 0x0C0BBF10u, 0x0C086F08u); }  /* 0C086F04 jsr @Rn */
L_0C086F08: BLKS(0x0C086F08u);
	T = (r0 & r0) == 0;  /* 0C086F08 tst Rm,Rn */
	if (T) { UPD(0x0C086FCEu, 4); goto L_0C086FCE; }  /* 0C086F0A bt */
L_0C086F0C: BLKS(0x0C086F0Cu);
	r0 = r10;  /* 0C086F0C mov Rm,Rn */
	r5 = 0x86u; UPD(0x0C086F10u, 2);  /* 0C086F0E mov.w @(disp,pc),Rn */
	r13 = 0xC069B20u; UPD(0x0C086F12u, 1);  /* 0C086F10 mov.l @(disp,pc),Rn */
	IF(0x0C086F12u); r12 = (u32)(s32)(s16)R16(r0 + r5); UPD(0x0C086F14u, 1);  /* 0C086F12 mov.w @(r0,Rm),Rn */
	r5 = 0x80000u; UPD(0x0C086F16u, 1);  /* 0C086F14 mov.l @(disp,pc),Rn */
	IF(0x0C086F16u); { u32 t_ = r13; PR = 0x0C086F1Au; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C086F1Au); }  /* 0C086F16 jsr @Rn */
L_0C086F1A: BLKS(0x0C086F1Au);
	r9 = R32(r10 + 0x24u); UPD(0x0C086F1Cu, 1);  /* 0C086F1A mov.l @(disp,Rm),Rn */
	r4 = r12;  /* 0C086F1C mov Rm,Rn */
	r8 = 0xC069AF0u; UPD(0x0C086F20u, 2);  /* 0C086F1E mov.l @(disp,pc),Rn */
	r9 += r0;  /* 0C086F20 add Rm,Rn */
	r6 = 0x10000u; UPD(0x0C086F24u, 2);  /* 0C086F22 mov.l @(disp,pc),Rn */
	r5 = 0xA0000u; UPD(0x0C086F26u, 1);  /* 0C086F24 mov.l @(disp,pc),Rn */
	IF(0x0C086F26u); { u32 t_ = r8; PR = 0x0C086F2Au; r9 += r6; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C086F2Au); }  /* 0C086F26 jsr @Rn */
L_0C086F2A: BLKS(0x0C086F2Au);
	r6 = R32(r10 + 0x28u); UPD(0x0C086F2Cu, 1);  /* 0C086F2A mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C086F2C add #imm,Rn */
	r4 = 0x28000u; UPD(0x0C086F30u, 2);  /* 0C086F2E mov.l @(disp,pc),Rn */
	r6 += r0;  /* 0C086F30 add Rm,Rn */
	W32(r15, r4); UPD(0x0C086F34u, 2);  /* 0C086F32 mov.l Rm,@Rn */
	r5 = r9;  /* 0C086F34 mov Rm,Rn */
	r0 = 0xC0BA480u; UPD(0x0C086F38u, 2);  /* 0C086F36 mov.l @(disp,pc),Rn */
	r4 = 0x2u;  /* 0C086F38 mov #imm,Rn */
	{ r7 = r12; /* slot mov Rm,Rn */ UPD(0x0C086D7Cu, 4); goto L_0C086D7C; }  /* 0C086F3A bra */
L_0C086F40: BLKS(0x0C086F40u);
	r1 = 0xC0807A0u; UPD(0x0C086F42u, 1);  /* 0C086F40 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C086F42 mov Rm,Rn */
	{ r5 = r6; /* slot mov Rm,Rn */ UPD(0x0C086CD6u, 4); goto L_0C086CD6; }  /* 0C086F44 bra */
L_0C086F50: BLKS(0x0C086F50u);
	r1 = 0xC080B40u; UPD(0x0C086F52u, 1);  /* 0C086F50 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C086F52 mov Rm,Rn */
	{ r5 = r6; /* slot mov Rm,Rn */ UPD(0x0C086CD6u, 4); goto L_0C086CD6; }  /* 0C086F54 bra */
L_0C086F60: BLKS(0x0C086F60u);
	r10 = 0xC0A8DD0u; UPD(0x0C086F62u, 1);  /* 0C086F60 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C086F62 mov Rm,Rn */
	IF(0x0C086F64u); { u32 t_ = r10; PR = 0x0C086F68u; r5 = r6; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8DD0, 0x0C0A8DD0u, 0x0C086F68u); }  /* 0C086F64 jsr @Rn */
L_0C086F68: BLKS(0x0C086F68u);
	T = (r0 & r0) == 0;  /* 0C086F68 tst Rm,Rn */
	if (T) { UPD(0x0C086FCEu, 4); goto L_0C086FCE; }  /* 0C086F6A bt */
L_0C086F6C: BLKS(0x0C086F6Cu);
	r4 = r11;  /* 0C086F6C mov Rm,Rn */
	r12 = 0xC0BC1B0u; UPD(0x0C086F70u, 2);  /* 0C086F6E mov.l @(disp,pc),Rn */
	r5 = 0x5Au;  /* 0C086F70 mov #imm,Rn */
	IF(0x0C086F72u); { u32 t_ = r12; PR = 0x0C086F76u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C086F76u); }  /* 0C086F72 jsr @Rn */
L_0C086F76: BLKS(0x0C086F76u);
	T = (r0 & r0) == 0;  /* 0C086F76 tst Rm,Rn */
	if (T) { UPD(0x0C086FCEu, 4); goto L_0C086FCE; }  /* 0C086F78 bt */
L_0C086F7A: BLKS(0x0C086F7Au);
	r3 = 0xB4u; UPD(0x0C086F7Cu, 1);  /* 0C086F7A mov.w @(disp,pc),Rn */
	IF(0x0C086F7Cu); MACL = r11 * r3;  /* 0C086F7C mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C086F80u, 3);  /* 0C086F7E mov.l @(disp,pc),Rn */
	IF(0x0C086F80u); r10 = MACL;  /* 0C086F80 sts macl,Rn */
	r10 += r0;  /* 0C086F82 add Rm,Rn */
	r2 = 0xA9u; UPD(0x0C086F86u, 3);  /* 0C086F84 mov.w @(disp,pc),Rn */
	r0 = r10;  /* 0C086F86 mov Rm,Rn */
	r9 = 0xC0BBF10u; UPD(0x0C086F8Au, 2);  /* 0C086F88 mov.l @(disp,pc),Rn */
	IF(0x0C086F8Au); r7 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C086F8Cu, 1);  /* 0C086F8A mov.b @(r0,Rm),Rn */
	r4 = R32(r10 + 0x24u); UPD(0x0C086F8Eu, 1);  /* 0C086F8C mov.l @(disp,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C086F8E extu.b Rm,Rn */
	IF(0x0C086F90u); { u32 t_ = r9; PR = 0x0C086F94u; r5 = R32(r10 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BBF10, 0x0C0BBF10u, 0x0C086F94u); }  /* 0C086F90 jsr @Rn */
L_0C086F94: BLKS(0x0C086F94u);
	T = (r0 & r0) == 0;  /* 0C086F94 tst Rm,Rn */
	if (T) { UPD(0x0C086FCEu, 4); goto L_0C086FCE; }  /* 0C086F96 bt */
L_0C086F98: BLKS(0x0C086F98u);
	r0 = r10;  /* 0C086F98 mov Rm,Rn */
	r6 = 0x86u; UPD(0x0C086F9Cu, 2);  /* 0C086F9A mov.w @(disp,pc),Rn */
	r8 = 0xC069B20u; UPD(0x0C086F9Eu, 1);  /* 0C086F9C mov.l @(disp,pc),Rn */
	IF(0x0C086F9Eu); r13 = (u32)(s32)(s16)R16(r0 + r6); UPD(0x0C086FA0u, 1);  /* 0C086F9E mov.w @(r0,Rm),Rn */
	r5 = 0xF0000u; UPD(0x0C086FA2u, 1);  /* 0C086FA0 mov.l @(disp,pc),Rn */
	r9 = 0xC069AF0u; UPD(0x0C086FA4u, 1);  /* 0C086FA2 mov.l @(disp,pc),Rn */
	IF(0x0C086FA4u); { u32 t_ = r8; PR = 0x0C086FA8u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C086FA8u); }  /* 0C086FA4 jsr @Rn */
L_0C086FA8: BLKS(0x0C086FA8u);
	r12 = R32(r10 + 0x24u); UPD(0x0C086FAAu, 1);  /* 0C086FA8 mov.l @(disp,Rm),Rn */
	r4 = r13;  /* 0C086FAA mov Rm,Rn */
	r5 = 0x140000u; UPD(0x0C086FAEu, 2);  /* 0C086FAC mov.l @(disp,pc),Rn */
	IF(0x0C086FAEu); { u32 t_ = r9; PR = 0x0C086FB2u; r12 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C086FB2u); }  /* 0C086FAE jsr @Rn */
L_0C086FB2: BLKS(0x0C086FB2u);
	r6 = R32(r10 + 0x28u); UPD(0x0C086FB4u, 1);  /* 0C086FB2 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C086FB4 add #imm,Rn */
	r4 = 0x20000u; UPD(0x0C086FB8u, 2);  /* 0C086FB6 mov.l @(disp,pc),Rn */
	r6 += r0;  /* 0C086FB8 add Rm,Rn */
	r8 = 0xC0BA480u; UPD(0x0C086FBCu, 2);  /* 0C086FBA mov.l @(disp,pc),Rn */
	r5 = r12;  /* 0C086FBC mov Rm,Rn */
	W32(r15, r4); UPD(0x0C086FC0u, 2);  /* 0C086FBE mov.l Rm,@Rn */
	r7 = r13;  /* 0C086FC0 mov Rm,Rn */
	IF(0x0C086FC2u); { u32 t_ = r8; PR = 0x0C086FC6u; r4 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BA480, 0x0C0BA480u, 0x0C086FC6u); }  /* 0C086FC2 jsr @Rn */
L_0C086FC6: BLKS(0x0C086FC6u);
	r4 = r11;  /* 0C086FC6 mov Rm,Rn */
	r11 = 0xC069B90u; UPD(0x0C086FCAu, 2);  /* 0C086FC8 mov.l @(disp,pc),Rn */
	IF(0x0C086FCAu); { u32 t_ = r11; PR = 0x0C086FCEu; r15 += 0x4u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B90, 0x0C069B90u, 0x0C086FCEu); }  /* 0C086FCA jsr @Rn */
L_0C086FCE: BLKS(0x0C086FCEu);
	{ r14 += 0xCu; /* slot add #imm,Rn */ UPD(0x0C086CFEu, 3); goto L_0C086CFE; }  /* 0C086FCE bra */
L_0C086FE0: BLKS(0x0C086FE0u);
	r1 = 0xC0869A0u; UPD(0x0C086FE2u, 1);  /* 0C086FE0 mov.l @(disp,pc),Rn */
	{ r4 = r11; /* slot mov Rm,Rn */ UPD(0x0C086D86u, 3); goto L_0C086D86; }  /* 0C086FE2 bra */
L_0C086FF0: BLKS(0x0C086FF0u);
	r10 = 0xC0A8B50u; UPD(0x0C086FF2u, 1);  /* 0C086FF0 mov.l @(disp,pc),Rn */
	IF(0x0C086FF2u); { u32 t_ = r10; PR = 0x0C086FF6u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C086FF6u); }  /* 0C086FF2 jsr @Rn */
L_0C086FF6: BLKS(0x0C086FF6u);
	IF(0x0C086FF6u); T = (s32)r0 >= 0;  /* 0C086FF6 cmp/pz Rn */
	{ u32 c_ = !T; IF(0x0C086FFAu); MACL = r0 * r9; /* slot mul.l Rm,Rn */ if (c_) { UPD(0x0C086FE0u, 5); goto L_0C086FE0; } goto L_0C086FFC; }  /* 0C086FF8 bf/s */
L_0C086FFC: BLKS(0x0C086FFCu);
	IF(0x0C086FFCu); r7 = MACL;  /* 0C086FFC sts macl,Rn */
	r7 += r8;  /* 0C086FFE add Rm,Rn */
	r0 = R32(r7 + 0x8u); UPD(0x0C087002u, 5);  /* 0C087000 mov.l @(disp,Rm),Rn */
	T = r0 == 0x1u;  /* 0C087002 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C087070u, 4); goto L_0C087070; }  /* 0C087004 bt */
L_0C087006: BLKS(0x0C087006u);
	r0 = 0x2000000u; UPD(0x0C087008u, 1);  /* 0C087006 mov.l @(disp,pc),Rn */
	{ W32(r13 + 0x24u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C086CFCu, 3); goto L_0C086CFC; }  /* 0C087008 bra */
L_0C087070: BLKS(0x0C087070u);
	r12 = R32(r13); UPD(0x0C087072u, 1);  /* 0C087070 mov.l @Rm,Rn */
	r2 = 0xFFFFFEFFu; UPD(0x0C087074u, 1);  /* 0C087072 mov.w @(disp,pc),Rn */
	r12 &= r2;  /* 0C087074 and Rm,Rn */
	W32(r13, r12); UPD(0x0C087078u, 2);  /* 0C087076 mov.l Rm,@Rn */
	r4 = R32(r7 + 0x28u); UPD(0x0C08707Au, 1);  /* 0C087078 mov.l @(disp,Rm),Rn */
	r5 = R32(r13 + 0x30u); UPD(0x0C08707Cu, 1);  /* 0C08707A mov.l @(disp,Rm),Rn */
	r3 = R32(r7); UPD(0x0C08707Eu, 1);  /* 0C08707C mov.l @Rm,Rn */
	r4 += r5;  /* 0C08707E add Rm,Rn */
	r0 = R32(r13 + 0xCu); UPD(0x0C087082u, 2);  /* 0C087080 mov.l @(disp,Rm),Rn */
	r1 = 0x100u; UPD(0x0C087084u, 1);  /* 0C087082 mov.w @(disp,pc),Rn */
	r0 += 0x1u;  /* 0C087084 add #imm,Rn */
	r6 = R32(r7 + 0x24u); UPD(0x0C087088u, 2);  /* 0C087086 mov.l @(disp,Rm),Rn */
	r3 &= r1;  /* 0C087088 and Rm,Rn */
	r10 = R32(r13 + 0x2Cu); UPD(0x0C08708Cu, 2);  /* 0C08708A mov.l @(disp,Rm),Rn */
	r12 |= r3;  /* 0C08708C or Rm,Rn */
	r8 = 0xC0A8AE0u; UPD(0x0C087090u, 2);  /* 0C08708E mov.l @(disp,pc),Rn */
	r6 += r10;  /* 0C087090 add Rm,Rn */
	W32(r13 + 0x28u, r4); UPD(0x0C087094u, 2);  /* 0C087092 mov.l Rm,@(disp,Rn) */
	r0 &= 0x7u;  /* 0C087094 and #imm,r0 */
	W32(r13 + 0x24u, r6); UPD(0x0C087098u, 2);  /* 0C087096 mov.l Rm,@(disp,Rn) */
	r4 = r11;  /* 0C087098 mov Rm,Rn */
	W32(r13, r12); UPD(0x0C08709Cu, 2);  /* 0C08709A mov.l Rm,@Rn */
	IF(0x0C08709Cu); { u32 t_ = r8; PR = 0x0C0870A0u; W32(r13 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C0870A0u); }  /* 0C08709C jsr @Rn */
L_0C0870A0: BLKS(0x0C0870A0u);
	r8 = 0x9Cu; UPD(0x0C0870A2u, 1);  /* 0C0870A0 mov.w @(disp,pc),Rn */
	r8 += r13;  /* 0C0870A2 add Rm,Rn */
	r9 = (u32)(s32)(s8)R8(r8); UPD(0x0C0870A6u, 2);  /* 0C0870A4 mov.b @Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C0870A6 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C087130u, 4); goto L_0C087130; } goto L_0C0870AC; }  /* 0C0870A8 bt/s */
L_0C0870AC: BLKS(0x0C0870ACu);
	r10 = r13;  /* 0C0870AC mov Rm,Rn */
	W32(r14, r0); UPD(0x0C0870B0u, 3);  /* 0C0870AE mov.l Rm,@Rn */
	r13 = 0x0u;  /* 0C0870B0 mov #imm,Rn */
	UPD(0x0C0870B2u, 1);
L_0C0870B2: BLKS(0x0C0870B2u);
	r0 = R32(r10 + 0xCu); UPD(0x0C0870B4u, 1);  /* 0C0870B2 mov.l @(disp,Rm),Rn */
	r12 = 0x3u;  /* 0C0870B4 mov #imm,Rn */
	r9 = 0xB4u; UPD(0x0C0870B8u, 2);  /* 0C0870B6 mov.w @(disp,pc),Rn */
	r0 += r13;  /* 0C0870B8 add Rm,Rn */
	IF(0x0C0870BAu); MACL = r11 * r9;  /* 0C0870BA mul.l Rm,Rn */
	r6 = 0xC069B20u; UPD(0x0C0870BEu, 4);  /* 0C0870BC mov.l @(disp,pc),Rn */
	IF(0x0C0870BEu); ARG0(0x40CDu); { s32 s_ = (s32)r12; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C0870BE shld Rm,Rn */
	IF(0x0C0870C0u); r7 = MACL;  /* 0C0870C0 sts macl,Rn */
	r12 = (u32)(s32)(s16)r0;  /* 0C0870C2 exts.w Rm,Rn */
	r5 = 0xC0000u; UPD(0x0C0870C6u, 4);  /* 0C0870C4 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C0870C6 mov Rm,Rn */
	IF(0x0C0870C8u); { u32 t_ = r6; PR = 0x0C0870CCu; W32(r14 + 0x8u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0870CCu); }  /* 0C0870C8 jsr @Rn */
L_0C0870CC: BLKS(0x0C0870CCu);
	r5 = 0x66666667u; UPD(0x0C0870CEu, 1);  /* 0C0870CC mov.l @(disp,pc),Rn */
	IF(0x0C0870CEu); r0 <<= 2;  /* 0C0870CE shll2 Rn */
	{ s64 r_ = (s64)(s32)r0 * (s64)(s32)r5; MACH = (u32)((u64)r_ >> 32); MACL = (u32)r_; }  /* 0C0870D0 dmuls.l Rm,Rn */
	r8 = 0xC069AF0u; UPD(0x0C0870D4u, 4);  /* 0C0870D2 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C0870D4 mov Rm,Rn */
	IF(0x0C0870D6u); r1 = MACH;  /* 0C0870D6 sts mach,Rn */
	IF(0x0C0870D8u); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C0870D8 shar Rn */
	IF(0x0C0870DAu); T = r0 >> 31; r0 <<= 1;  /* 0C0870DA shll Rn */
	{ u32 a_ = r0, t_ = a_ - r0, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r0 = r_; }  /* 0C0870DC subc Rm,Rn */
	r9 = R32(r10 + 0x24u); UPD(0x0C0870E0u, 6);  /* 0C0870DE mov.l @(disp,Rm),Rn */
	r1 -= r0;  /* 0C0870E0 sub Rm,Rn */
	r5 = 0xC0000u; UPD(0x0C0870E4u, 2);  /* 0C0870E2 mov.l @(disp,pc),Rn */
	IF(0x0C0870E4u); { u32 t_ = r8; PR = 0x0C0870E8u; r9 += r1; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0870E8u); }  /* 0C0870E4 jsr @Rn */
L_0C0870E8: BLKS(0x0C0870E8u);
	r6 = R32(r10 + 0x28u); UPD(0x0C0870EAu, 1);  /* 0C0870E8 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0870EA add #imm,Rn */
	r4 = 0x28000u; UPD(0x0C0870EEu, 2);  /* 0C0870EC mov.l @(disp,pc),Rn */
	r5 = r9;  /* 0C0870EE mov Rm,Rn */
	r2 = 0xC0BA7F0u; UPD(0x0C0870F2u, 2);  /* 0C0870F0 mov.l @(disp,pc),Rn */
	r7 = r12;  /* 0C0870F2 mov Rm,Rn */
	W32(r15, r4); UPD(0x0C0870F6u, 2);  /* 0C0870F4 mov.l Rm,@Rn */
	r6 += r0;  /* 0C0870F6 add Rm,Rn */
	IF(0x0C0870F8u); { u32 t_ = r2; PR = 0x0C0870FCu; r4 = 0x2u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BA7F0, 0x0C0BA7F0u, 0x0C0870FCu); }  /* 0C0870F8 jsr @Rn */
L_0C0870FC: BLKS(0x0C0870FCu);
	r3 = R32(r14); UPD(0x0C0870FEu, 1);  /* 0C0870FC mov.l @Rm,Rn */
	r9 = 0x7u;  /* 0C0870FE mov #imm,Rn */
	r3 += 0x1u;  /* 0C087100 add #imm,Rn */
	r12 = (u32)(s32)(s16)r3;  /* 0C087102 exts.w Rm,Rn */
	W32(r14, r12); UPD(0x0C087106u, 4);  /* 0C087104 mov.l Rm,@Rn */
	r15 += 0x4u;  /* 0C087106 add #imm,Rn */
	r8 = R32(r14); UPD(0x0C08710Au, 2);  /* 0C087108 mov.l @Rm,Rn */
	T = (s32)r8 > (s32)r9;  /* 0C08710A cmp/gt Rm,Rn */
	{ u32 c_ = !T; r13 += 0x8u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0870B2u, 4); goto L_0C0870B2; } goto L_0C087110; }  /* 0C08710C bf/s */
L_0C087110: BLKS(0x0C087110u);
	r3 = R32(r14 + 0x8u); UPD(0x0C087112u, 2);  /* 0C087110 mov.l @(disp,Rm),Rn */
	r11 = 0xC286578u; UPD(0x0C087114u, 1);  /* 0C087112 mov.l @(disp,pc),Rn */
	r13 = 0x9Cu; UPD(0x0C087116u, 1);  /* 0C087114 mov.w @(disp,pc),Rn */
	r11 += r3;  /* 0C087116 add Rm,Rn */
	r11 += r13;  /* 0C087118 add Rm,Rn */
	r10 = (u32)(s32)(s8)R8(r11); UPD(0x0C08711Cu, 3);  /* 0C08711A mov.b @Rm,Rn */
	r10 += 0xFFFFFFFFu;  /* 0C08711C add #imm,Rn */
	W8(r11, r10); UPD(0x0C087120u, 2);  /* 0C08711E mov.b Rm,@Rn */
L_0C087120: BLKS(0x0C087120u);
	{ r14 += 0xCu; /* slot add #imm,Rn */ UPD(0x0C086CFEu, 3); goto L_0C086CFE; }  /* 0C087120 bra */
L_0C087130: BLKS(0x0C087130u);
	r13 = 0xC0BC1B0u; UPD(0x0C087132u, 1);  /* 0C087130 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C087132 mov Rm,Rn */
	r5 = 0x3Cu;  /* 0C087134 mov #imm,Rn */
	IF(0x0C087136u); { u32 t_ = r13; PR = 0x0C08713Au; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C08713Au); }  /* 0C087136 jsr @Rn */
L_0C08713A: BLKS(0x0C08713Au);
	T = (r0 & r0) == 0;  /* 0C08713A tst Rm,Rn */
	if (T) { UPD(0x0C087120u, 4); goto L_0C087120; }  /* 0C08713C bt */
L_0C08713E: BLKS(0x0C08713Eu);
	r7 = 0x4u;  /* 0C08713E mov #imm,Rn */
	W8(r8, r7); UPD(0x0C087142u, 2);  /* 0C087140 mov.b Rm,@Rn */
L_0C087142: BLKS(0x0C087142u);
	{ r14 += 0xCu; /* slot add #imm,Rn */ UPD(0x0C086CFEu, 3); goto L_0C086CFE; }  /* 0C087142 bra */
L_0C087150: BLKS(0x0C087150u);
	r0 = (u32)(s32)(s16)R16(r13); UPD(0x0C087152u, 1);  /* 0C087150 mov.w @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C087152 tst Rm,Rn */
	{ u32 c_ = T; r13 += 0xFFFFFFC4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C08715Cu, 4); goto L_0C08715C; } goto L_0C087158; }  /* 0C087154 bt/s */
L_0C087158: BLKS(0x0C087158u);
	{ IF(0x0C08715Au); ; /* slot nop */ UPD(0x0C0872D0u, 4); goto L_0C0872D0; }  /* 0C087158 bra */
L_0C08715C: BLKS(0x0C08715Cu);
	r5 = 0x99u; UPD(0x0C08715Eu, 1);  /* 0C08715C mov.w @(disp,pc),Rn */
	r10 = 0x1u;  /* 0C08715E mov #imm,Rn */
	r5 += r13;  /* 0C087160 add Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r5); UPD(0x0C087164u, 3);  /* 0C087162 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C087164 add #imm,Rn */
	r10 &= r4;  /* 0C087166 and Rm,Rn */
	T = (r10 & r10) == 0;  /* 0C087168 tst Rm,Rn */
	{ u32 c_ = !T; W8(r5, r4); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C087142u, 6); goto L_0C087142; } UPD(0x0C08716Eu, 1); goto L_0C08716E; }  /* 0C08716A bf/s */
L_0C08716E: BLKS(0x0C08716Eu);
	r0 = 0x9Cu; UPD(0x0C087170u, 1);  /* 0C08716E mov.w @(disp,pc),Rn */
	r6 = 0x7u;  /* 0C087170 mov #imm,Rn */
	IF(0x0C087172u); r7 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C087174u, 2);  /* 0C087172 mov.b @(r0,Rm),Rn */
	r9 = r7;  /* 0C087174 mov Rm,Rn */
	r9 += 0x1u;  /* 0C087176 add #imm,Rn */
	IF(0x0C087178u); W8(r0 + r13, r9); UPD(0x0C08717Au, 3);  /* 0C087178 mov.b Rm,@(r0,Rn) */
	r0 = r7 & 0xFF;  /* 0C08717A extu.b Rm,Rn */
	T = (s32)r0 > (s32)r6;  /* 0C08717C cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C087210u, 5); goto L_0C087210; }  /* 0C08717E bf */
L_0C087180: BLKS(0x0C087180u);
	T = r0 == 0x18u;  /* 0C087180 cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C087142u, 4); goto L_0C087142; }  /* 0C087182 bf */
L_0C087184: BLKS(0x0C087184u);
	r15 += 0xFFFFFFF8u;  /* 0C087184 add #imm,Rn */
	r9 = 0xB0u; UPD(0x0C087188u, 2);  /* 0C087186 mov.w @(disp,pc),Rn */
	r9 += r13;  /* 0C087188 add Rm,Rn */
	r11 = (u32)(s32)(s8)R8(r9); UPD(0x0C08718Cu, 2);  /* 0C08718A mov.b @Rm,Rn */
	r0 = r13;  /* 0C08718C mov Rm,Rn */
	r7 = r11 & 0xFF;  /* 0C08718E extu.b Rm,Rn */
	W32(r15, r7); UPD(0x0C087192u, 3);  /* 0C087190 mov.l Rm,@Rn */
	r6 = 0xA9u; UPD(0x0C087194u, 1);  /* 0C087192 mov.w @(disp,pc),Rn */
	IF(0x0C087194u); r5 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C087196u, 1);  /* 0C087194 mov.b @(r0,Rm),Rn */
	r12 = 0xC0BD6F0u; UPD(0x0C087198u, 1);  /* 0C087196 mov.l @(disp,pc),Rn */
	r4 = r5 & 0xFF;  /* 0C087198 extu.b Rm,Rn */
	W32(r15 + 0x4u, r4); UPD(0x0C08719Cu, 2);  /* 0C08719A mov.l Rm,@(disp,Rn) */
	r5 = 0xFu;  /* 0C08719C mov #imm,Rn */
	r4 = R32(r13); UPD(0x0C0871A0u, 2);  /* 0C08719E mov.l @Rm,Rn */
	r6 = R32(r13 + 0x24u); UPD(0x0C0871A2u, 1);  /* 0C0871A0 mov.l @(disp,Rm),Rn */
	IF(0x0C0871A2u); { u32 t_ = r12; PR = 0x0C0871A6u; r7 = R32(r13 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C0871A6u); }  /* 0C0871A2 jsr @Rn */
L_0C0871A6: BLKS(0x0C0871A6u);
	r2 = 0xFFFA0000u; UPD(0x0C0871A8u, 1);  /* 0C0871A6 mov.l @(disp,pc),Rn */
	r15 += 0x8u;  /* 0C0871A8 add #imm,Rn */
	r11 = R32(r13 + 0x24u); UPD(0x0C0871ACu, 2);  /* 0C0871AA mov.l @(disp,Rm),Rn */
	r4 = 0x14u;  /* 0C0871AC mov #imm,Rn */
	r8 = 0xC0BEE10u; UPD(0x0C0871B0u, 2);  /* 0C0871AE mov.l @(disp,pc),Rn */
	r11 += r2;  /* 0C0871B0 add Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r9); UPD(0x0C0871B4u, 2);  /* 0C0871B2 mov.b @Rm,Rn */
	r5 = r11;  /* 0C0871B4 mov Rm,Rn */
	r7 = r3 & 0xFF;  /* 0C0871B6 extu.b Rm,Rn */
	IF(0x0C0871B8u); { u32 t_ = r8; PR = 0x0C0871BCu; r6 = R32(r13 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0BEE10, 0x0C0BEE10u, 0x0C0871BCu); }  /* 0C0871B8 jsr @Rn */
L_0C0871BC: BLKS(0x0C0871BCu);
	r12 = 0xC07DF30u; UPD(0x0C0871BEu, 1);  /* 0C0871BC mov.l @(disp,pc),Rn */
	r4 = 0xEu;  /* 0C0871BE mov #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C0871C2u, 2);  /* 0C0871C0 mov.b @Rm,Rn */
	r5 = r11;  /* 0C0871C2 mov Rm,Rn */
	r7 = r0 & 0xFF;  /* 0C0871C4 extu.b Rm,Rn */
	IF(0x0C0871C6u); { u32 t_ = r12; PR = 0x0C0871CAu; r6 = R32(r13 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C07DF30, 0x0C07DF30u, 0x0C0871CAu); }  /* 0C0871C6 jsr @Rn */
L_0C0871CA: BLKS(0x0C0871CAu);
	{ W32(r13, r10); /* slot mov.l Rm,@Rn */ UPD(0x0C086CFCu, 3); goto L_0C086CFC; }  /* 0C0871CA bra */
L_0C087210: BLKS(0x0C087210u);
	r10 = 0x86u; UPD(0x0C087212u, 1);  /* 0C087210 mov.w @(disp,pc),Rn */
	r10 += r13;  /* 0C087212 add Rm,Rn */
	r9 = (u32)(s32)(s16)R16(r10); UPD(0x0C087216u, 2);  /* 0C087214 mov.w @Rm,Rn */
	r7 = 0xC069B20u; UPD(0x0C087218u, 1);  /* 0C087216 mov.l @(disp,pc),Rn */
	r9 += 0x40u;  /* 0C087218 add #imm,Rn */
	r11 = 0x180000u; UPD(0x0C08721Cu, 2);  /* 0C08721A mov.l @(disp,pc),Rn */
	r12 = (u32)(s32)(s16)r9;  /* 0C08721C exts.w Rm,Rn */
	W16(r10, r9); UPD(0x0C087220u, 2);  /* 0C08721E mov.w Rm,@Rn */
	r4 = r12;  /* 0C087220 mov Rm,Rn */
	IF(0x0C087222u); { u32 t_ = r7; PR = 0x0C087226u; r5 = r11; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C087226u); }  /* 0C087222 jsr @Rn */
L_0C087226: BLKS(0x0C087226u);
	r6 = 0x66666667u; UPD(0x0C087228u, 1);  /* 0C087226 mov.l @(disp,pc),Rn */
	IF(0x0C087228u); r0 <<= 2;  /* 0C087228 shll2 Rn */
	{ s64 r_ = (s64)(s32)r0 * (s64)(s32)r6; MACH = (u32)((u64)r_ >> 32); MACL = (u32)r_; }  /* 0C08722A dmuls.l Rm,Rn */
	r9 = R32(r13 + 0x24u); UPD(0x0C08722Eu, 4);  /* 0C08722C mov.l @(disp,Rm),Rn */
	IF(0x0C08722Eu); r5 = MACH;  /* 0C08722E sts mach,Rn */
	IF(0x0C087230u); T = r5 & 1; r5 = (u32)((s32)r5 >> 1);  /* 0C087230 shar Rn */
	IF(0x0C087232u); T = r0 >> 31; r0 <<= 1;  /* 0C087232 shll Rn */
	{ u32 a_ = r0, t_ = a_ - r0, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r0 = r_; }  /* 0C087234 subc Rm,Rn */
	r2 = 0xC069AF0u; UPD(0x0C087238u, 5);  /* 0C087236 mov.l @(disp,pc),Rn */
	r5 -= r0;  /* 0C087238 sub Rm,Rn */
	r4 = 0x80000u; UPD(0x0C08723Cu, 2);  /* 0C08723A mov.l @(disp,pc),Rn */
	r9 += r5;  /* 0C08723C add Rm,Rn */
	r9 += r4;  /* 0C08723E add Rm,Rn */
	r4 = r12;  /* 0C087240 mov Rm,Rn */
	IF(0x0C087242u); { u32 t_ = r2; PR = 0x0C087246u; r5 = r11; /* slot mov Rm,Rn */ UPD(t_, 5); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C087246u); }  /* 0C087242 jsr @Rn */
L_0C087246: BLKS(0x0C087246u);
	r1 = 0xB0u; UPD(0x0C087248u, 1);  /* 0C087246 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C087248 add #imm,Rn */
	r1 += r13;  /* 0C08724A add Rm,Rn */
	W32(r14 + 0x4u, r1); UPD(0x0C08724Eu, 3);  /* 0C08724C mov.l Rm,@(disp,Rn) */
	r6 = r9;  /* 0C08724E mov Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r1); UPD(0x0C087252u, 2);  /* 0C087250 mov.b @Rm,Rn */
	r5 = 0xDu;  /* 0C087252 mov #imm,Rn */
	r7 = R32(r13 + 0x28u); UPD(0x0C087256u, 2);  /* 0C087254 mov.l @(disp,Rm),Rn */
	r11 = r3 & 0xFF;  /* 0C087256 extu.b Rm,Rn */
	W32(r15, r11); UPD(0x0C08725Au, 2);  /* 0C087258 mov.l Rm,@Rn */
	r7 += r0;  /* 0C08725A add Rm,Rn */
	r11 = 0xA9u; UPD(0x0C08725Eu, 2);  /* 0C08725C mov.w @(disp,pc),Rn */
	r11 += r13;  /* 0C08725E add Rm,Rn */
	r8 = (u32)(s32)(s8)R8(r11); UPD(0x0C087262u, 2);  /* 0C087260 mov.b @Rm,Rn */
	r12 = 0xC0BD6F0u; UPD(0x0C087264u, 1);  /* 0C087262 mov.l @(disp,pc),Rn */
	r0 = r8 & 0xFF;  /* 0C087264 extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C087268u, 2);  /* 0C087266 mov.l Rm,@(disp,Rn) */
	IF(0x0C087268u); { u32 t_ = r12; PR = 0x0C08726Cu; r4 = R32(r13); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C08726Cu); }  /* 0C087268 jsr @Rn */
L_0C08726C: BLKS(0x0C08726Cu);
	r7 = (u32)(s32)(s16)R16(r10); UPD(0x0C08726Eu, 1);  /* 0C08726C mov.w @Rm,Rn */
	r15 += 0x8u;  /* 0C08726E add #imm,Rn */
	r9 = 0x100u; UPD(0x0C087272u, 2);  /* 0C087270 mov.w @(disp,pc),Rn */
	r6 = 0xC069B20u; UPD(0x0C087274u, 1);  /* 0C087272 mov.l @(disp,pc),Rn */
	r7 += r9;  /* 0C087274 add Rm,Rn */
	r10 = 0x280000u; UPD(0x0C087278u, 2);  /* 0C087276 mov.l @(disp,pc),Rn */
	r12 = (u32)(s32)(s16)r7;  /* 0C087278 exts.w Rm,Rn */
	r4 = r12;  /* 0C08727A mov Rm,Rn */
	IF(0x0C08727Cu); { u32 t_ = r6; PR = 0x0C087280u; r5 = r10; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C087280u); }  /* 0C08727C jsr @Rn */
L_0C087280: BLKS(0x0C087280u);
	r5 = 0x66666667u; UPD(0x0C087282u, 1);  /* 0C087280 mov.l @(disp,pc),Rn */
	IF(0x0C087282u); r0 <<= 2;  /* 0C087282 shll2 Rn */
	{ s64 r_ = (s64)(s32)r0 * (s64)(s32)r5; MACH = (u32)((u64)r_ >> 32); MACL = (u32)r_; }  /* 0C087284 dmuls.l Rm,Rn */
	r9 = R32(r13 + 0x24u); UPD(0x0C087288u, 4);  /* 0C087286 mov.l @(disp,Rm),Rn */
	IF(0x0C087288u); r4 = MACH;  /* 0C087288 sts mach,Rn */
	IF(0x0C08728Au); T = r4 & 1; r4 = (u32)((s32)r4 >> 1);  /* 0C08728A shar Rn */
	IF(0x0C08728Cu); T = r0 >> 31; r0 <<= 1;  /* 0C08728C shll Rn */
	{ u32 a_ = r0, t_ = a_ - r0, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r0 = r_; }  /* 0C08728E subc Rm,Rn */
	r2 = 0xC069AF0u; UPD(0x0C087292u, 5);  /* 0C087290 mov.l @(disp,pc),Rn */
	r4 -= r0;  /* 0C087292 sub Rm,Rn */
	r3 = 0x80000u; UPD(0x0C087296u, 2);  /* 0C087294 mov.l @(disp,pc),Rn */
	r9 += r4;  /* 0C087296 add Rm,Rn */
	r9 += r3;  /* 0C087298 add Rm,Rn */
	r4 = r12;  /* 0C08729A mov Rm,Rn */
	IF(0x0C08729Cu); { u32 t_ = r2; PR = 0x0C0872A0u; r5 = r10; /* slot mov Rm,Rn */ UPD(t_, 5); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0872A0u); }  /* 0C08729C jsr @Rn */
L_0C0872A0: BLKS(0x0C0872A0u);
	r1 = R32(r14 + 0x4u); UPD(0x0C0872A2u, 1);  /* 0C0872A0 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0872A2 add #imm,Rn */
	r7 = R32(r13 + 0x28u); UPD(0x0C0872A6u, 2);  /* 0C0872A4 mov.l @(disp,Rm),Rn */
	r5 = 0x9u;  /* 0C0872A6 mov #imm,Rn */
	r8 = (u32)(s32)(s8)R8(r1); UPD(0x0C0872AAu, 2);  /* 0C0872A8 mov.b @Rm,Rn */
	r7 += r0;  /* 0C0872AA add Rm,Rn */
	r0 = r8 & 0xFF;  /* 0C0872AC extu.b Rm,Rn */
	W32(r15, r0); UPD(0x0C0872B0u, 3);  /* 0C0872AE mov.l Rm,@Rn */
	r6 = r9;  /* 0C0872B0 mov Rm,Rn */
	r12 = (u32)(s32)(s8)R8(r11); UPD(0x0C0872B4u, 2);  /* 0C0872B2 mov.b @Rm,Rn */
	r10 = 0xC0BD6F0u; UPD(0x0C0872B6u, 1);  /* 0C0872B4 mov.l @(disp,pc),Rn */
	r11 = r12 & 0xFF;  /* 0C0872B6 extu.b Rm,Rn */
	W32(r15 + 0x4u, r11); UPD(0x0C0872BAu, 2);  /* 0C0872B8 mov.l Rm,@(disp,Rn) */
	IF(0x0C0872BAu); { u32 t_ = r10; PR = 0x0C0872BEu; r4 = R32(r13); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C0872BEu); }  /* 0C0872BA jsr @Rn */
L_0C0872BE: BLKS(0x0C0872BEu);
	r15 += 0x8u;  /* 0C0872BE add #imm,Rn */
	UPD(0x0C0872C0u, 1);
L_0C0872C0: BLKS(0x0C0872C0u);
	{ r14 += 0xCu; /* slot add #imm,Rn */ UPD(0x0C086CFEu, 3); goto L_0C086CFE; }  /* 0C0872C0 bra */
L_0C0872D0: BLKS(0x0C0872D0u);
	r8 = 0xC0A9CB0u; UPD(0x0C0872D2u, 1);  /* 0C0872D0 mov.l @(disp,pc),Rn */
	IF(0x0C0872D2u); { u32 t_ = r8; PR = 0x0C0872D6u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9CB0, 0x0C0A9CB0u, 0x0C0872D6u); }  /* 0C0872D2 jsr @Rn */
L_0C0872D6: BLKS(0x0C0872D6u);
	r2 = 0xC0A9B40u; UPD(0x0C0872D8u, 1);  /* 0C0872D6 mov.l @(disp,pc),Rn */
	IF(0x0C0872D8u); { u32 t_ = r2; PR = 0x0C0872DCu; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9B40, 0x0C0A9B40u, 0x0C0872DCu); }  /* 0C0872D8 jsr @Rn */
L_0C0872DC: BLKS(0x0C0872DCu);
	r2 = 0x99u; UPD(0x0C0872DEu, 1);  /* 0C0872DC mov.w @(disp,pc),Rn */
	r2 += r13;  /* 0C0872DE add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C0872E2u, 2);  /* 0C0872E0 mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C0872E2 add #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C0872E4 extu.b Rm,Rn */
	T = r0 == 0x3u;  /* 0C0872E6 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r2, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0872C0u, 6); goto L_0C0872C0; } UPD(0x0C0872ECu, 1); goto L_0C0872EC; }  /* 0C0872E8 bf/s */
L_0C0872EC: BLKS(0x0C0872ECu);
	r0 = R32(r13 + 0xCu); UPD(0x0C0872EEu, 1);  /* 0C0872EC mov.l @(disp,Rm),Rn */
	r3 = 0x0u;  /* 0C0872EE mov #imm,Rn */
	r0 += 0x1u;  /* 0C0872F0 add #imm,Rn */
	r0 &= 0x7u;  /* 0C0872F2 and #imm,r0 */
	W8(r2, r3); UPD(0x0C0872F6u, 4);  /* 0C0872F4 mov.b Rm,@Rn */
	r4 = r11;  /* 0C0872F6 mov Rm,Rn */
	r1 = 0xC0A8AE0u; UPD(0x0C0872FAu, 2);  /* 0C0872F8 mov.l @(disp,pc),Rn */
	{ W32(r13 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C086D86u, 3); goto L_0C086D86; }  /* 0C0872FA bra */
}

/* FUN_0c087330 */
void blk_f_0C087330(sh3_t *c)
{
	LOCALS;
L_0C087330: BLKS(0x0C087330u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C087332u, 1);  /* 0C087330 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C087334u, 1);  /* 0C087332 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C087336u, 1);  /* 0C087334 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C087338u, 1);  /* 0C087336 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C08733Au, 1);  /* 0C087338 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C08733Cu, 1);  /* 0C08733A mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C08733Eu, 1);  /* 0C08733C mov.l Rm,@-Rn */
	r9 = 0xC2460ACu; UPD(0x0C087340u, 1);  /* 0C08733E mov.l @(disp,pc),Rn */
	IF(0x0C087340u); r15 -= 4; W32(r15, PR); UPD(0x0C087342u, 1);  /* 0C087340 sts.l pr,@-Rn */
	r8 = 0xC069510u; UPD(0x0C087344u, 1);  /* 0C087342 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFE8u;  /* 0C087344 add #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r9); UPD(0x0C087348u, 2);  /* 0C087346 mov.w @Rm,Rn */
	r14 = r15;  /* 0C087348 mov Rm,Rn */
	r5 = 0x8000u; UPD(0x0C08734Cu, 2);  /* 0C08734A mov.l @(disp,pc),Rn */
	IF(0x0C08734Cu); { u32 t_ = r8; PR = 0x0C087350u; r4 = r0 & 0xFFFF; /* slot extu.w Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069510, 0x0C069510u, 0x0C087350u); }  /* 0C08734C jsr @Rn */
L_0C087350: BLKS(0x0C087350u);
	T = (r0 & r0) == 0;  /* 0C087350 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C087380u, 4); goto L_0C087380; } UPD(0x0C087356u, 1); goto L_0C087356; }  /* 0C087352 bf/s */
L_0C087356: BLKS(0x0C087356u);
	r14 += 0x18u;  /* 0C087356 add #imm,Rn */
	r15 = r14;  /* 0C087358 mov Rm,Rn */
	IF(0x0C08735Au); PR = R32(r15); r15 += 4; UPD(0x0C08735Cu, 3);  /* 0C08735A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08735Eu, 1);  /* 0C08735C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C087360u, 1);  /* 0C08735E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C087362u, 1);  /* 0C087360 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C087364u, 1);  /* 0C087362 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C087366u, 1);  /* 0C087364 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C087368u, 1);  /* 0C087366 mov.l @Rm+,Rn */
	IF(0x0C087368u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C087368 rts */
L_0C087380: BLKS(0x0C087380u);
	r8 = 0xC071740u; UPD(0x0C087382u, 1);  /* 0C087380 mov.l @(disp,pc),Rn */
	IF(0x0C087382u); { u32 t_ = r8; PR = 0x0C087386u; r4 = 0xBu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C071740, 0x0C071740u, 0x0C087386u); }  /* 0C087382 jsr @Rn */
L_0C087386: BLKS(0x0C087386u);
	T = (r0 & r0) == 0;  /* 0C087386 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C087356u, 4); goto L_0C087356; } goto L_0C08738C; }  /* 0C087388 bt/s */
L_0C08738C: BLKS(0x0C08738Cu);
	r12 = 0xC28EDFCu; UPD(0x0C08738Eu, 2);  /* 0C08738C mov.l @(disp,pc),Rn */
	r11 = 0xB4u; UPD(0x0C087390u, 1);  /* 0C08738E mov.w @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r12); r12 += 2; r2 = v_; } UPD(0x0C087392u, 1);  /* 0C087390 mov.w @Rm+,Rn */
	IF(0x0C087392u); MACL = r2 * r11;  /* 0C087392 mul.l Rm,Rn */
	r5 = 0xC2B1811u; UPD(0x0C087396u, 3);  /* 0C087394 mov.l @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)R16(r9); UPD(0x0C087398u, 1);  /* 0C087396 mov.w @Rm,Rn */
	IF(0x0C087398u); r11 = MACL;  /* 0C087398 sts macl,Rn */
	r6 = 0xC286578u; UPD(0x0C08739Cu, 2);  /* 0C08739A mov.l @(disp,pc),Rn */
	r0 = r4 & 0xFFFF;  /* 0C08739C extu.w Rm,Rn */
	r7 = (u32)(s32)(s8)R8(r5); UPD(0x0C0873A0u, 2);  /* 0C08739E mov.b @Rm,Rn */
	r11 += r6;  /* 0C0873A0 add Rm,Rn */
	W32(r11 + 0x4u, r0); UPD(0x0C0873A4u, 2);  /* 0C0873A2 mov.l Rm,@(disp,Rn) */
	r8 = 0xC2B03A2u; UPD(0x0C0873A6u, 1);  /* 0C0873A4 mov.l @(disp,pc),Rn */
	r0 = 0x8Au; UPD(0x0C0873A8u, 1);  /* 0C0873A6 mov.w @(disp,pc),Rn */
	r13 = (u32)(s32)(s16)R16(r8); UPD(0x0C0873AAu, 1);  /* 0C0873A8 mov.w @Rm,Rn */
	IF(0x0C0873AAu); W16(r0 + r11, r13); UPD(0x0C0873ACu, 1);  /* 0C0873AA mov.w Rm,@(r0,Rn) */
	r8 = 0x7u;  /* 0C0873AC mov #imm,Rn */
	r0 += 0xFFFFFFFCu;  /* 0C0873AE add #imm,Rn */
	IF(0x0C0873B0u); W16(r0 + r11, r13); UPD(0x0C0873B2u, 3);  /* 0C0873B0 mov.w Rm,@(r0,Rn) */
	r8 += r14;  /* 0C0873B2 add Rm,Rn */
	r9 = 0xC0A8A30u; UPD(0x0C0873B6u, 2);  /* 0C0873B4 mov.l @(disp,pc),Rn */
	r13 = 0x0u;  /* 0C0873B6 mov #imm,Rn */
	W32(r14, r2); UPD(0x0C0873BAu, 2);  /* 0C0873B8 mov.l Rm,@Rn */
	r3 = 0xC0000014u; UPD(0x0C0873BCu, 1);  /* 0C0873BA mov.l @(disp,pc),Rn */
	W32(r11 + 0xCu, r13); UPD(0x0C0873BEu, 1);  /* 0C0873BC mov.l Rm,@(disp,Rn) */
	W32(r11, r3); UPD(0x0C0873C0u, 1);  /* 0C0873BE mov.l Rm,@Rn */
	W32(r11 + 0x8u, r13); UPD(0x0C0873C2u, 1);  /* 0C0873C0 mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x4u, r7); UPD(0x0C0873C4u, 1);  /* 0C0873C2 mov.l Rm,@(disp,Rn) */
	IF(0x0C0873C4u); { u32 t_ = r9; PR = 0x0C0873C8u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C0873C8u); }  /* 0C0873C4 jsr @Rn */
L_0C0873C8: BLKS(0x0C0873C8u);
	r1 = R32(r14 + 0x4u); UPD(0x0C0873CAu, 1);  /* 0C0873C8 mov.l @(disp,Rm),Rn */
	r5 = 0x4Cu;  /* 0C0873CA mov #imm,Rn */
	r10 = 0xC237C08u; UPD(0x0C0873CEu, 2);  /* 0C0873CC mov.l @(disp,pc),Rn */
	IF(0x0C0873CEu); MACL = r1 * r5;  /* 0C0873CE mul.l Rm,Rn */
	r6 = (u32)(s32)(s16)R16(r10); UPD(0x0C0873D2u, 3);  /* 0C0873D0 mov.w @Rm,Rn */
	r3 = 0xC3C43C6u; UPD(0x0C0873D4u, 1);  /* 0C0873D2 mov.l @(disp,pc),Rn */
	IF(0x0C0873D4u); r10 = MACL;  /* 0C0873D4 sts macl,Rn */
	r7 = 0xC286318u; UPD(0x0C0873D8u, 2);  /* 0C0873D6 mov.l @(disp,pc),Rn */
	IF(0x0C0873D8u); r6 <<= 16;  /* 0C0873D8 shll16 Rn */
	r10 += r7;  /* 0C0873DA add Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r3); UPD(0x0C0873DEu, 3);  /* 0C0873DC mov.w @Rm,Rn */
	r2 = R32(r10 + 0x8u); UPD(0x0C0873E0u, 1);  /* 0C0873DE mov.l @(disp,Rm),Rn */
	IF(0x0C0873E0u); r4 <<= 16;  /* 0C0873E0 shll16 Rn */
	r0 = 0xC0A9AE0u; UPD(0x0C0873E4u, 2);  /* 0C0873E2 mov.l @(disp,pc),Rn */
	r6 -= r2;  /* 0C0873E4 sub Rm,Rn */
	W32(r11 + 0x28u, r4); UPD(0x0C0873E8u, 2);  /* 0C0873E6 mov.l Rm,@(disp,Rn) */
	r10 += 0x42u;  /* 0C0873E8 add #imm,Rn */
	W32(r11 + 0x24u, r6); UPD(0x0C0873ECu, 2);  /* 0C0873EA mov.l Rm,@(disp,Rn) */
	IF(0x0C0873ECu); { u32 t_ = r0; PR = 0x0C0873F0u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C0873F0u); }  /* 0C0873EC jsr @Rn */
L_0C0873F0: BLKS(0x0C0873F0u);
	r9 = (u32)(s32)(s8)R8(r8); UPD(0x0C0873F2u, 1);  /* 0C0873F0 mov.b @Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0873F4u, 1);  /* 0C0873F2 mov.w @(disp,pc),Rn */
	IF(0x0C0873F4u); W8(r0 + r11, r9); UPD(0x0C0873F6u, 1);  /* 0C0873F4 mov.b Rm,@(r0,Rn) */
	r6 = 0xA8u; UPD(0x0C0873F8u, 1);  /* 0C0873F6 mov.w @(disp,pc),Rn */
	r0 += 0xFFFFFFFDu;  /* 0C0873F8 add #imm,Rn */
	r5 = (u32)(s32)(s8)R8(r10); UPD(0x0C0873FCu, 2);  /* 0C0873FA mov.b @Rm,Rn */
	r6 += r11;  /* 0C0873FC add Rm,Rn */
	r6 += 0x1u;  /* 0C0873FE add #imm,Rn */
	r5 += 0x1u;  /* 0C087400 add #imm,Rn */
	IF(0x0C087402u); W8(r0 + r11, r5); UPD(0x0C087404u, 4);  /* 0C087402 mov.b Rm,@(r0,Rn) */
	W8(r6, r5); UPD(0x0C087406u, 1);  /* 0C087404 mov.b Rm,@Rn */
	r2 = 0xC0A9D30u; UPD(0x0C087408u, 1);  /* 0C087406 mov.l @(disp,pc),Rn */
	r7 = 0xC297460u; UPD(0x0C08740Au, 1);  /* 0C087408 mov.l @(disp,pc),Rn */
	r4 = R32(r14); UPD(0x0C08740Cu, 1);  /* 0C08740A mov.l @Rm,Rn */
	r5 = R32(r7); UPD(0x0C08740Eu, 1);  /* 0C08740C mov.l @Rm,Rn */
	IF(0x0C08740Eu); { u32 t_ = r2; PR = 0x0C087412u; W32(r14 + 0x14u, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9D30, 0x0C0A9D30u, 0x0C087412u); }  /* 0C08740E jsr @Rn */
L_0C087412: BLKS(0x0C087412u);
	r4 = 0x8Cu; UPD(0x0C087414u, 1);  /* 0C087412 mov.w @(disp,pc),Rn */
	r3 = 0x94u; UPD(0x0C087416u, 1);  /* 0C087414 mov.w @(disp,pc),Rn */
	r4 += r11;  /* 0C087416 add Rm,Rn */
	r0 = 0x90u; UPD(0x0C08741Au, 2);  /* 0C087418 mov.w @(disp,pc),Rn */
	r3 += r11;  /* 0C08741A add Rm,Rn */
	IF(0x0C08741Cu); W32(r0 + r11, r13); UPD(0x0C08741Eu, 2);  /* 0C08741C mov.l Rm,@(r0,Rn) */
	W32(r11 + 0x30u, r13); UPD(0x0C087420u, 1);  /* 0C08741E mov.l Rm,@(disp,Rn) */
	W32(r11 + 0x2Cu, r13); UPD(0x0C087422u, 1);  /* 0C087420 mov.l Rm,@(disp,Rn) */
	W32(r3, r13); UPD(0x0C087424u, 1);  /* 0C087422 mov.l Rm,@Rn */
	W32(r4, r13); UPD(0x0C087426u, 1);  /* 0C087424 mov.l Rm,@Rn */
	W32(r14 + 0x8u, r13); UPD(0x0C087428u, 1);  /* 0C087426 mov.l Rm,@(disp,Rn) */
	r1 = R32(r14 + 0x14u); UPD(0x0C08742Au, 1);  /* 0C087428 mov.l @(disp,Rm),Rn */
	r13 = r11;  /* 0C08742A mov Rm,Rn */
	W32(r14 + 0x10u, r1); UPD(0x0C08742Eu, 2);  /* 0C08742C mov.l Rm,@(disp,Rn) */
	r11 = 0x0u;  /* 0C08742E mov #imm,Rn */
	UPD(0x0C087430u, 1);
L_0C087430: BLKS(0x0C087430u);
	{ u32 v_ = (u32)(s32)(s16)R16(r12); r12 += 2; r10 = v_; } UPD(0x0C087432u, 1);  /* 0C087430 mov.w @Rm+,Rn */
	r0 = 0x2u;  /* 0C087432 mov #imm,Rn */
	r8 = 0xB4u; UPD(0x0C087436u, 2);  /* 0C087434 mov.w @(disp,pc),Rn */
	IF(0x0C087436u); MACL = r10 * r8;  /* 0C087436 mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C08743Au, 3);  /* 0C087438 mov.l @(disp,pc),Rn */
	IF(0x0C08743Au); r8 = MACL;  /* 0C08743A sts macl,Rn */
	IF(0x0C08743Cu); r9 = (u32)(s32)(s16)R16(r0 + r14); UPD(0x0C08743Eu, 2);  /* 0C08743C mov.w @(r0,Rm),Rn */
	r8 += r6;  /* 0C08743E add Rm,Rn */
	r8 += 0x7Cu;  /* 0C087440 add #imm,Rn */
	W16(r8, r9); UPD(0x0C087444u, 3);  /* 0C087442 mov.w Rm,@Rn */
	r6 = 0x0u;  /* 0C087444 mov #imm,Rn */
	r9 = 0xC19A2ECu; UPD(0x0C087448u, 2);  /* 0C087446 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFF84u;  /* 0C087448 add #imm,Rn */
	r4 = 0xC2460ACu; UPD(0x0C08744Cu, 2);  /* 0C08744A mov.l @(disp,pc),Rn */
	r9 += r11;  /* 0C08744C add Rm,Rn */
	r0 = R32(r9); UPD(0x0C087450u, 2);  /* 0C08744E mov.l @Rm,Rn */
	r11 += 0x14u;  /* 0C087450 add #imm,Rn */
	r5 = (u32)(s32)(s16)R16(r4); UPD(0x0C087454u, 2);  /* 0C087452 mov.w @Rm,Rn */
	r1 = 0xC0000100u; UPD(0x0C087456u, 1);  /* 0C087454 mov.l @(disp,pc),Rn */
	r7 = r5 & 0xFFFF;  /* 0C087456 extu.w Rm,Rn */
	r0 |= r1;  /* 0C087458 or Rm,Rn */
	W32(r8, r0); UPD(0x0C08745Cu, 3);  /* 0C08745A mov.l Rm,@Rn */
	r4 = r10;  /* 0C08745C mov Rm,Rn */
	W32(r8 + 0x4u, r7); UPD(0x0C087460u, 2);  /* 0C08745E mov.l Rm,@(disp,Rn) */
	r3 = 0xC0A8A30u; UPD(0x0C087462u, 1);  /* 0C087460 mov.l @(disp,pc),Rn */
	r2 = R32(r9 + 0x4u); UPD(0x0C087464u, 1);  /* 0C087462 mov.l @(disp,Rm),Rn */
	W32(r8 + 0xCu, r6); UPD(0x0C087466u, 1);  /* 0C087464 mov.l Rm,@(disp,Rn) */
	IF(0x0C087466u); { u32 t_ = r3; PR = 0x0C08746Au; W32(r8 + 0x8u, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C08746Au); }  /* 0C087466 jsr @Rn */
L_0C08746A: BLKS(0x0C08746Au);
	r4 = R32(r13 + 0x24u); UPD(0x0C08746Cu, 1);  /* 0C08746A mov.l @(disp,Rm),Rn */
	r6 = R32(r13 + 0x28u); UPD(0x0C08746Eu, 1);  /* 0C08746C mov.l @(disp,Rm),Rn */
	W32(r8 + 0x24u, r4); UPD(0x0C087470u, 1);  /* 0C08746E mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x28u, r6); UPD(0x0C087472u, 1);  /* 0C087470 mov.l Rm,@(disp,Rn) */
	r0 = 0x84u; UPD(0x0C087474u, 1);  /* 0C087472 mov.w @(disp,pc),Rn */
	r3 = R32(r9 + 0x8u); UPD(0x0C087476u, 1);  /* 0C087474 mov.l @(disp,Rm),Rn */
	r0 += r8;  /* 0C087476 add Rm,Rn */
	r5 = R32(r14); UPD(0x0C08747Au, 2);  /* 0C087478 mov.l @Rm,Rn */
	r0 += 0x2u;  /* 0C08747A add #imm,Rn */
	r7 = 0xB4u; UPD(0x0C08747Eu, 2);  /* 0C08747C mov.w @(disp,pc),Rn */
	r1 = 0x4000u; UPD(0x0C087480u, 1);  /* 0C08747E mov.w @(disp,pc),Rn */
	IF(0x0C087480u); MACL = r5 * r7;  /* 0C087480 mul.l Rm,Rn */
	W32(r8 + 0x2Cu, r3); UPD(0x0C087484u, 3);  /* 0C087482 mov.l Rm,@(disp,Rn) */
	W16(r0, r1); UPD(0x0C087486u, 1);  /* 0C087484 mov.w Rm,@Rn */
	IF(0x0C087486u); r2 = MACL;  /* 0C087486 sts macl,Rn */
	r0 = R32(r9 + 0xCu); UPD(0x0C08748Au, 2);  /* 0C087488 mov.l @(disp,Rm),Rn */
	W32(r14 + 0xCu, r2); UPD(0x0C08748Cu, 1);  /* 0C08748A mov.l Rm,@(disp,Rn) */
	r9 += 0x10u;  /* 0C08748C add #imm,Rn */
	W32(r8 + 0x30u, r0); UPD(0x0C087490u, 2);  /* 0C08748E mov.l Rm,@(disp,Rn) */
	r4 = 0xA1u; UPD(0x0C087492u, 1);  /* 0C087490 mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C087492 mov Rm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r9); r9 += 1; r1 = v_; } UPD(0x0C087496u, 2);  /* 0C087494 mov.b @Rm+,Rn */
	r5 = 0xC0A9AE0u; UPD(0x0C087498u, 1);  /* 0C087496 mov.l @(disp,pc),Rn */
	IF(0x0C087498u); W8(r0 + r4, r1); UPD(0x0C08749Au, 1);  /* 0C087498 mov.b Rm,@(r0,Rn) */
	IF(0x0C08749Au); { u32 t_ = r5; PR = 0x0C08749Eu; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C08749Eu); }  /* 0C08749A jsr @Rn */
L_0C08749E: BLKS(0x0C08749Eu);
	r0 = 0xB0u; UPD(0x0C0874A0u, 1);  /* 0C08749E mov.w @(disp,pc),Rn */
	r10 = 0x5u;  /* 0C0874A0 mov #imm,Rn */
	IF(0x0C0874A2u); r7 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C0874A4u, 2);  /* 0C0874A2 mov.b @(r0,Rm),Rn */
	IF(0x0C0874A4u); W8(r0 + r8, r7); UPD(0x0C0874A6u, 1);  /* 0C0874A4 mov.b Rm,@(r0,Rn) */
	r0 = 0xA8u; UPD(0x0C0874A8u, 1);  /* 0C0874A6 mov.w @(disp,pc),Rn */
	r6 = R32(r14 + 0x10u); UPD(0x0C0874AAu, 1);  /* 0C0874A8 mov.l @(disp,Rm),Rn */
	r0 += r8;  /* 0C0874AA add Rm,Rn */
	r2 = 0xACu; UPD(0x0C0874AEu, 2);  /* 0C0874AC mov.w @(disp,pc),Rn */
	r0 += 0x1u;  /* 0C0874AE add #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r9); UPD(0x0C0874B2u, 2);  /* 0C0874B0 mov.b @Rm,Rn */
	r8 += r2;  /* 0C0874B2 add Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r6); UPD(0x0C0874B6u, 2);  /* 0C0874B4 mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C0874B6 add #imm,Rn */
	r4 += r3;  /* 0C0874B8 add Rm,Rn */
	W8(r8, r4); UPD(0x0C0874BCu, 3);  /* 0C0874BA mov.b Rm,@Rn */
	W8(r0, r4); UPD(0x0C0874BEu, 1);  /* 0C0874BC mov.b Rm,@Rn */
	r8 = R32(r14 + 0x8u); UPD(0x0C0874C0u, 1);  /* 0C0874BE mov.l @(disp,Rm),Rn */
	r8 += 0x1u;  /* 0C0874C0 add #imm,Rn */
	r9 = (u32)(s32)(s16)r8;  /* 0C0874C2 exts.w Rm,Rn */
	W32(r14 + 0x8u, r9); UPD(0x0C0874C6u, 3);  /* 0C0874C4 mov.l Rm,@(disp,Rn) */
	r1 = R32(r14 + 0x8u); UPD(0x0C0874C8u, 1);  /* 0C0874C6 mov.l @(disp,Rm),Rn */
	T = (s32)r1 > (s32)r10;  /* 0C0874C8 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C087430u, 4); goto L_0C087430; }  /* 0C0874CA bf */
L_0C0874CC: BLKS(0x0C0874CCu);
	r12 = 0x8u;  /* 0C0874CC mov #imm,Rn */
	r11 = 0xC2B0378u; UPD(0x0C0874D0u, 2);  /* 0C0874CE mov.l @(disp,pc),Rn */
	r13 = (u32)(s32)(s16)R16(r11); UPD(0x0C0874D2u, 1);  /* 0C0874D0 mov.w @Rm,Rn */
	r0 = r13 & 0xFF;  /* 0C0874D2 extu.b Rm,Rn */
	T = (s32)r0 > (s32)r12;  /* 0C0874D4 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0874DCu, 5); goto L_0C0874DC; }  /* 0C0874D6 bf */
L_0C0874D8: BLKS(0x0C0874D8u);
	{ IF(0x0C0874DAu); ; /* slot nop */ UPD(0x0C087770u, 3); goto L_0C087770; }  /* 0C0874D8 bra */
L_0C0874DC: BLKS(0x0C0874DCu);
	r3 = 0xC28EE0Au; UPD(0x0C0874DEu, 1);  /* 0C0874DC mov.l @(disp,pc),Rn */
	r0 += 0x26u;  /* 0C0874DE add #imm,Rn */
	r13 = (u32)(s32)(s16)R16(r3); UPD(0x0C0874E2u, 2);  /* 0C0874E0 mov.w @Rm,Rn */
	r4 = 0x0u;  /* 0C0874E2 mov #imm,Rn */
	r8 = 0xB4u; UPD(0x0C0874E6u, 2);  /* 0C0874E4 mov.w @(disp,pc),Rn */
	IF(0x0C0874E6u); MACL = r13 * r8;  /* 0C0874E6 mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C0874EAu, 3);  /* 0C0874E8 mov.l @(disp,pc),Rn */
	r11 = 0xC28EDFCu; UPD(0x0C0874ECu, 1);  /* 0C0874EA mov.l @(disp,pc),Rn */
	IF(0x0C0874ECu); r8 = MACL;  /* 0C0874EC sts macl,Rn */
	r12 = (u32)(s32)(s16)R16(r11); UPD(0x0C0874F0u, 2);  /* 0C0874EE mov.w @Rm,Rn */
	r8 += r2;  /* 0C0874F0 add Rm,Rn */
	r8 += 0x7Cu;  /* 0C0874F2 add #imm,Rn */
	W16(r8, r12); UPD(0x0C0874F6u, 3);  /* 0C0874F4 mov.w Rm,@Rn */
	r10 = 0xC3000010u; UPD(0x0C0874F8u, 1);  /* 0C0874F6 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFF84u;  /* 0C0874F8 add #imm,Rn */
	W32(r8, r10); UPD(0x0C0874FCu, 2);  /* 0C0874FA mov.l Rm,@Rn */
	r6 = 0xC286578u; UPD(0x0C0874FEu, 1);  /* 0C0874FC mov.l @(disp,pc),Rn */
	W32(r8 + 0x8u, r0); UPD(0x0C087500u, 1);  /* 0C0874FE mov.l Rm,@(disp,Rn) */
	r10 = R32(r14 + 0xCu); UPD(0x0C087502u, 1);  /* 0C087500 mov.l @(disp,Rm),Rn */
	r0 = 0xC0A8A30u; UPD(0x0C087504u, 1);  /* 0C087502 mov.l @(disp,pc),Rn */
	r10 += r6;  /* 0C087504 add Rm,Rn */
	r9 = R32(r10 + 0x4u); UPD(0x0C087508u, 2);  /* 0C087506 mov.l @(disp,Rm),Rn */
	W32(r8 + 0xCu, r4); UPD(0x0C08750Au, 1);  /* 0C087508 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x4u, r9); UPD(0x0C08750Cu, 1);  /* 0C08750A mov.l Rm,@(disp,Rn) */
	IF(0x0C08750Cu); { u32 t_ = r0; PR = 0x0C087510u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C087510u); }  /* 0C08750C jsr @Rn */
L_0C087510: BLKS(0x0C087510u);
	r5 = 0x84u; UPD(0x0C087512u, 1);  /* 0C087510 mov.w @(disp,pc),Rn */
	r4 = r13;  /* 0C087512 mov Rm,Rn */
	r12 = 0xC0A9AE0u; UPD(0x0C087516u, 2);  /* 0C087514 mov.l @(disp,pc),Rn */
	r5 += r8;  /* 0C087516 add Rm,Rn */
	r7 = R32(r10 + 0x24u); UPD(0x0C08751Au, 2);  /* 0C087518 mov.l @(disp,Rm),Rn */
	r5 += 0x2u;  /* 0C08751A add #imm,Rn */
	r3 = R32(r10 + 0x28u); UPD(0x0C08751Eu, 2);  /* 0C08751C mov.l @(disp,Rm),Rn */
	r2 = 0xFFDE0000u; UPD(0x0C087520u, 1);  /* 0C08751E mov.l @(disp,pc),Rn */
	r1 = 0x100u; UPD(0x0C087522u, 1);  /* 0C087520 mov.w @(disp,pc),Rn */
	r11 = 0x1D0000u; UPD(0x0C087524u, 1);  /* 0C087522 mov.l @(disp,pc),Rn */
	r13 = 0xB0u; UPD(0x0C087526u, 1);  /* 0C087524 mov.w @(disp,pc),Rn */
	W32(r8 + 0x24u, r7); UPD(0x0C087528u, 1);  /* 0C087526 mov.l Rm,@(disp,Rn) */
	r13 += r10;  /* 0C087528 add Rm,Rn */
	W32(r8 + 0x28u, r3); UPD(0x0C08752Cu, 2);  /* 0C08752A mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x2Cu, r2); UPD(0x0C08752Eu, 1);  /* 0C08752C mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x30u, r11); UPD(0x0C087530u, 1);  /* 0C08752E mov.l Rm,@(disp,Rn) */
	IF(0x0C087530u); { u32 t_ = r12; PR = 0x0C087534u; W16(r5, r1); /* slot mov.w Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C087534u); }  /* 0C087530 jsr @Rn */
L_0C087534: BLKS(0x0C087534u);
	r0 = 0xB0u; UPD(0x0C087536u, 1);  /* 0C087534 mov.w @(disp,pc),Rn */
	r2 = 0x8u;  /* 0C087536 mov #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r13); UPD(0x0C08753Au, 2);  /* 0C087538 mov.b @Rm,Rn */
	r4 = 0xACu; UPD(0x0C08753Cu, 1);  /* 0C08753A mov.w @(disp,pc),Rn */
	IF(0x0C08753Cu); W8(r0 + r8, r6); UPD(0x0C08753Eu, 1);  /* 0C08753C mov.b Rm,@(r0,Rn) */
	r11 = r4;  /* 0C08753E mov Rm,Rn */
	r12 = 0xA8u; UPD(0x0C087542u, 2);  /* 0C087540 mov.w @(disp,pc),Rn */
	r11 += r10;  /* 0C087542 add Rm,Rn */
	r0 = 0xA8u; UPD(0x0C087546u, 2);  /* 0C087544 mov.w @(disp,pc),Rn */
	r12 += r10;  /* 0C087546 add Rm,Rn */
	r0 += r8;  /* 0C087548 add Rm,Rn */
	r12 += 0x1u;  /* 0C08754A add #imm,Rn */
	r11 += 0x1u;  /* 0C08754C add #imm,Rn */
	r9 = (u32)(s32)(s8)R8(r12); UPD(0x0C087550u, 5);  /* 0C08754E mov.b @Rm,Rn */
	r8 += r4;  /* 0C087550 add Rm,Rn */
	r5 = (u32)(s32)(s8)R8(r11); UPD(0x0C087554u, 2);  /* 0C087552 mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C087554 add #imm,Rn */
	r8 += 0x1u;  /* 0C087556 add #imm,Rn */
	W8(r0, r9); UPD(0x0C08755Au, 3);  /* 0C087558 mov.b Rm,@Rn */
	W8(r8, r5); UPD(0x0C08755Cu, 1);  /* 0C08755A mov.b Rm,@Rn */
	r7 = 0xC2B0378u; UPD(0x0C08755Eu, 1);  /* 0C08755C mov.l @(disp,pc),Rn */
	r3 = (u32)(s32)(s16)R16(r7); UPD(0x0C087560u, 1);  /* 0C08755E mov.w @Rm,Rn */
	r0 = r3 & 0xFF;  /* 0C087560 extu.b Rm,Rn */
	T = (s32)r0 > (s32)r2;  /* 0C087562 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C08756Au, 5); goto L_0C08756A; }  /* 0C087564 bf */
L_0C087566: BLKS(0x0C087566u);
	{ IF(0x0C087568u); ; /* slot nop */ UPD(0x0C087760u, 3); goto L_0C087760; }  /* 0C087566 bra */
L_0C08756A: BLKS(0x0C08756Au);
	r2 = 0xC28EE0Au; UPD(0x0C08756Cu, 1);  /* 0C08756A mov.l @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C08756C mov #imm,Rn */
	r2 += 0x2u;  /* 0C08756E add #imm,Rn */
	r9 = (u32)(s32)(s16)R16(r2); UPD(0x0C087572u, 3);  /* 0C087570 mov.w @Rm,Rn */
	r0 += 0x26u;  /* 0C087572 add #imm,Rn */
	r8 = 0xB4u; UPD(0x0C087576u, 2);  /* 0C087574 mov.w @(disp,pc),Rn */
	{ IF(0x0C087578u); MACL = r9 * r8; /* slot mul.l Rm,Rn */ UPD(0x0C0875F0u, 4); goto L_0C0875F0; }  /* 0C087576 bra */
L_0C0875F0: BLKS(0x0C0875F0u);
	r1 = 0xC286578u; UPD(0x0C0875F2u, 1);  /* 0C0875F0 mov.l @(disp,pc),Rn */
	r6 = 0xC28EDFCu; UPD(0x0C0875F4u, 1);  /* 0C0875F2 mov.l @(disp,pc),Rn */
	IF(0x0C0875F4u); r8 = MACL;  /* 0C0875F4 sts macl,Rn */
	r4 = (u32)(s32)(s16)R16(r6); UPD(0x0C0875F8u, 2);  /* 0C0875F6 mov.w @Rm,Rn */
	r8 += r1;  /* 0C0875F8 add Rm,Rn */
	r8 += 0x7Cu;  /* 0C0875FA add #imm,Rn */
	W16(r8, r4); UPD(0x0C0875FEu, 3);  /* 0C0875FC mov.w Rm,@Rn */
	r2 = 0xC0A8A30u; UPD(0x0C087600u, 1);  /* 0C0875FE mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFF84u;  /* 0C087600 add #imm,Rn */
	r5 = 0xC3000010u; UPD(0x0C087604u, 2);  /* 0C087602 mov.l @(disp,pc),Rn */
	r4 = r9;  /* 0C087604 mov Rm,Rn */
	r7 = R32(r10 + 0x4u); UPD(0x0C087608u, 2);  /* 0C087606 mov.l @(disp,Rm),Rn */
	W32(r8 + 0xCu, r3); UPD(0x0C08760Au, 1);  /* 0C087608 mov.l Rm,@(disp,Rn) */
	W32(r8, r5); UPD(0x0C08760Cu, 1);  /* 0C08760A mov.l Rm,@Rn */
	W32(r8 + 0x4u, r7); UPD(0x0C08760Eu, 1);  /* 0C08760C mov.l Rm,@(disp,Rn) */
	IF(0x0C08760Eu); { u32 t_ = r2; PR = 0x0C087612u; W32(r8 + 0x8u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C087612u); }  /* 0C08760E jsr @Rn */
L_0C087612: BLKS(0x0C087612u);
	r4 = R32(r10 + 0x24u); UPD(0x0C087614u, 1);  /* 0C087612 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x24u, r4); UPD(0x0C087616u, 1);  /* 0C087614 mov.l Rm,@(disp,Rn) */
	r6 = 0x84u; UPD(0x0C087618u, 1);  /* 0C087616 mov.w @(disp,pc),Rn */
	r4 = r9;  /* 0C087618 mov Rm,Rn */
	r0 = R32(r10 + 0x28u); UPD(0x0C08761Cu, 2);  /* 0C08761A mov.l @(disp,Rm),Rn */
	r6 += r8;  /* 0C08761C add Rm,Rn */
	r9 = 0xC0A9AE0u; UPD(0x0C087620u, 2);  /* 0C08761E mov.l @(disp,pc),Rn */
	r6 += 0x2u;  /* 0C087620 add #imm,Rn */
	r1 = 0x100u; UPD(0x0C087624u, 2);  /* 0C087622 mov.w @(disp,pc),Rn */
	r5 = 0xFFF60000u; UPD(0x0C087626u, 1);  /* 0C087624 mov.l @(disp,pc),Rn */
	r7 = 0x340000u; UPD(0x0C087628u, 1);  /* 0C087626 mov.l @(disp,pc),Rn */
	W32(r8 + 0x28u, r0); UPD(0x0C08762Au, 1);  /* 0C087628 mov.l Rm,@(disp,Rn) */
	W16(r6, r1); UPD(0x0C08762Cu, 1);  /* 0C08762A mov.w Rm,@Rn */
	W32(r8 + 0x2Cu, r5); UPD(0x0C08762Eu, 1);  /* 0C08762C mov.l Rm,@(disp,Rn) */
	IF(0x0C08762Eu); { u32 t_ = r9; PR = 0x0C087632u; W32(r8 + 0x30u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C087632u); }  /* 0C08762E jsr @Rn */
L_0C087632: BLKS(0x0C087632u);
	r0 = 0xB0u; UPD(0x0C087634u, 1);  /* 0C087632 mov.w @(disp,pc),Rn */
	r7 = 0x8u;  /* 0C087634 mov #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r13); UPD(0x0C087638u, 2);  /* 0C087636 mov.b @Rm,Rn */
	r6 = 0xA8u; UPD(0x0C08763Au, 1);  /* 0C087638 mov.w @(disp,pc),Rn */
	IF(0x0C08763Au); W8(r0 + r8, r2); UPD(0x0C08763Cu, 1);  /* 0C08763A mov.b Rm,@(r0,Rn) */
	r6 += r8;  /* 0C08763C add Rm,Rn */
	r4 = 0xACu; UPD(0x0C087640u, 2);  /* 0C08763E mov.w @(disp,pc),Rn */
	r6 += 0x1u;  /* 0C087640 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r11); UPD(0x0C087644u, 2);  /* 0C087642 mov.b @Rm,Rn */
	r8 += r4;  /* 0C087644 add Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r12); UPD(0x0C087648u, 2);  /* 0C087646 mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C087648 add #imm,Rn */
	W8(r8, r0); UPD(0x0C08764Cu, 2);  /* 0C08764A mov.b Rm,@Rn */
	W8(r6, r3); UPD(0x0C08764Eu, 1);  /* 0C08764C mov.b Rm,@Rn */
	r1 = 0xC2B0378u; UPD(0x0C087650u, 1);  /* 0C08764E mov.l @(disp,pc),Rn */
	r5 = (u32)(s32)(s16)R16(r1); UPD(0x0C087652u, 1);  /* 0C087650 mov.w @Rm,Rn */
	r0 = r5 & 0xFF;  /* 0C087652 extu.b Rm,Rn */
	T = (s32)r0 > (s32)r7;  /* 0C087654 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C08765Cu, 5); goto L_0C08765C; }  /* 0C087656 bf */
L_0C087658: BLKS(0x0C087658u);
	{ IF(0x0C08765Au); ; /* slot nop */ UPD(0x0C087750u, 3); goto L_0C087750; }  /* 0C087658 bra */
L_0C08765C: BLKS(0x0C08765Cu);
	r7 = 0xC28EE0Au; UPD(0x0C08765Eu, 1);  /* 0C08765C mov.l @(disp,pc),Rn */
	r0 += 0x26u;  /* 0C08765E add #imm,Rn */
	r7 += 0x4u;  /* 0C087660 add #imm,Rn */
	r9 = (u32)(s32)(s16)R16(r7); UPD(0x0C087664u, 3);  /* 0C087662 mov.w @Rm,Rn */
	r8 = 0xB4u; UPD(0x0C087666u, 1);  /* 0C087664 mov.w @(disp,pc),Rn */
	r7 = 0x0u;  /* 0C087666 mov #imm,Rn */
	IF(0x0C087668u); MACL = r9 * r8;  /* 0C087668 mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C08766Cu, 4);  /* 0C08766A mov.l @(disp,pc),Rn */
	r4 = 0xC28EDFCu; UPD(0x0C08766Eu, 1);  /* 0C08766C mov.l @(disp,pc),Rn */
	IF(0x0C08766Eu); r8 = MACL;  /* 0C08766E sts macl,Rn */
	r5 = (u32)(s32)(s16)R16(r4); UPD(0x0C087672u, 2);  /* 0C087670 mov.w @Rm,Rn */
	r8 += r6;  /* 0C087672 add Rm,Rn */
	r8 += 0x7Cu;  /* 0C087674 add #imm,Rn */
	W16(r8, r5); UPD(0x0C087678u, 3);  /* 0C087676 mov.w Rm,@Rn */
	r4 = r9;  /* 0C087678 mov Rm,Rn */
	r1 = 0xC0A8A30u; UPD(0x0C08767Cu, 2);  /* 0C08767A mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFF84u;  /* 0C08767C add #imm,Rn */
	r2 = R32(r10 + 0x4u); UPD(0x0C087680u, 2);  /* 0C08767E mov.l @(disp,Rm),Rn */
	r3 = 0xC3000010u; UPD(0x0C087682u, 1);  /* 0C087680 mov.l @(disp,pc),Rn */
	W32(r8 + 0x4u, r2); UPD(0x0C087684u, 1);  /* 0C087682 mov.l Rm,@(disp,Rn) */
	W32(r8, r3); UPD(0x0C087686u, 1);  /* 0C087684 mov.l Rm,@Rn */
	W32(r8 + 0x8u, r0); UPD(0x0C087688u, 1);  /* 0C087686 mov.l Rm,@(disp,Rn) */
	IF(0x0C087688u); { u32 t_ = r1; PR = 0x0C08768Cu; W32(r8 + 0xCu, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C08768Cu); }  /* 0C087688 jsr @Rn */
L_0C08768C: BLKS(0x0C08768Cu);
	r4 = 0x84u; UPD(0x0C08768Eu, 1);  /* 0C08768C mov.w @(disp,pc),Rn */
	r6 = 0x100u; UPD(0x0C087690u, 1);  /* 0C08768E mov.w @(disp,pc),Rn */
	r4 += r8;  /* 0C087690 add Rm,Rn */
	r4 += 0x2u;  /* 0C087692 add #imm,Rn */
	W16(r4, r6); UPD(0x0C087696u, 3);  /* 0C087694 mov.w Rm,@Rn */
	r4 = r9;  /* 0C087696 mov Rm,Rn */
	r5 = R32(r10 + 0x24u); UPD(0x0C08769Au, 2);  /* 0C087698 mov.l @(disp,Rm),Rn */
	r0 = R32(r10 + 0x28u); UPD(0x0C08769Cu, 1);  /* 0C08769A mov.l @(disp,Rm),Rn */
	r9 = 0xC0A9AE0u; UPD(0x0C08769Eu, 1);  /* 0C08769C mov.l @(disp,pc),Rn */
	r3 = 0x1C0000u; UPD(0x0C0876A0u, 1);  /* 0C08769E mov.l @(disp,pc),Rn */
	r7 = 0xFFCC0000u; UPD(0x0C0876A2u, 1);  /* 0C0876A0 mov.l @(disp,pc),Rn */
	W32(r8 + 0x24u, r5); UPD(0x0C0876A4u, 1);  /* 0C0876A2 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x28u, r0); UPD(0x0C0876A6u, 1);  /* 0C0876A4 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x2Cu, r3); UPD(0x0C0876A8u, 1);  /* 0C0876A6 mov.l Rm,@(disp,Rn) */
	IF(0x0C0876A8u); { u32 t_ = r9; PR = 0x0C0876ACu; W32(r8 + 0x30u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C0876ACu); }  /* 0C0876A8 jsr @Rn */
L_0C0876AC: BLKS(0x0C0876ACu);
	r0 = 0xB0u; UPD(0x0C0876AEu, 1);  /* 0C0876AC mov.w @(disp,pc),Rn */
	r7 = 0x8u;  /* 0C0876AE mov #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r13); UPD(0x0C0876B2u, 2);  /* 0C0876B0 mov.b @Rm,Rn */
	r6 = 0xA8u; UPD(0x0C0876B4u, 1);  /* 0C0876B2 mov.w @(disp,pc),Rn */
	r5 = 0xACu; UPD(0x0C0876B6u, 1);  /* 0C0876B4 mov.w @(disp,pc),Rn */
	r6 += r8;  /* 0C0876B6 add Rm,Rn */
	IF(0x0C0876B8u); W8(r0 + r8, r2); UPD(0x0C0876BAu, 2);  /* 0C0876B8 mov.b Rm,@(r0,Rn) */
	r5 += r8;  /* 0C0876BA add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r12); UPD(0x0C0876BEu, 2);  /* 0C0876BC mov.b @Rm,Rn */
	r6 += 0x1u;  /* 0C0876BE add #imm,Rn */
	r4 = (u32)(s32)(s8)R8(r11); UPD(0x0C0876C2u, 2);  /* 0C0876C0 mov.b @Rm,Rn */
	r5 += 0x1u;  /* 0C0876C2 add #imm,Rn */
	r0 = 0xC2B0378u; UPD(0x0C0876C6u, 2);  /* 0C0876C4 mov.l @(disp,pc),Rn */
	W8(r6, r1); UPD(0x0C0876C8u, 1);  /* 0C0876C6 mov.b Rm,@Rn */
	W8(r5, r4); UPD(0x0C0876CAu, 1);  /* 0C0876C8 mov.b Rm,@Rn */
	r3 = (u32)(s32)(s16)R16(r0); UPD(0x0C0876CCu, 1);  /* 0C0876CA mov.w @Rm,Rn */
	r0 = r3 & 0xFF;  /* 0C0876CC extu.b Rm,Rn */
	T = (s32)r0 > (s32)r7;  /* 0C0876CE cmp/gt Rm,Rn */
	if (T) { UPD(0x0C087740u, 5); goto L_0C087740; }  /* 0C0876D0 bt */
L_0C0876D2: BLKS(0x0C0876D2u);
	r2 = 0xC28EE0Au; UPD(0x0C0876D4u, 1);  /* 0C0876D2 mov.l @(disp,pc),Rn */
	r0 += 0x26u;  /* 0C0876D4 add #imm,Rn */
	r2 += 0x6u;  /* 0C0876D6 add #imm,Rn */
	r9 = (u32)(s32)(s16)R16(r2); UPD(0x0C0876DAu, 3);  /* 0C0876D8 mov.w @Rm,Rn */
	r3 = 0x0u;  /* 0C0876DA mov #imm,Rn */
	r8 = 0xB4u; UPD(0x0C0876DEu, 2);  /* 0C0876DC mov.w @(disp,pc),Rn */
	IF(0x0C0876DEu); MACL = r9 * r8;  /* 0C0876DE mul.l Rm,Rn */
	r1 = 0xC286578u; UPD(0x0C0876E2u, 3);  /* 0C0876E0 mov.l @(disp,pc),Rn */
	r7 = 0xC28EDFCu; UPD(0x0C0876E4u, 1);  /* 0C0876E2 mov.l @(disp,pc),Rn */
	IF(0x0C0876E4u); r8 = MACL;  /* 0C0876E4 sts macl,Rn */
	r6 = (u32)(s32)(s16)R16(r7); UPD(0x0C0876E8u, 2);  /* 0C0876E6 mov.w @Rm,Rn */
	r8 += r1;  /* 0C0876E8 add Rm,Rn */
	r8 += 0x7Cu;  /* 0C0876EA add #imm,Rn */
	W16(r8, r6); UPD(0x0C0876EEu, 3);  /* 0C0876EC mov.w Rm,@Rn */
	r8 += 0xFFFFFF84u;  /* 0C0876EE add #imm,Rn */
	W32(r8 + 0x8u, r0); UPD(0x0C0876F2u, 2);  /* 0C0876F0 mov.l Rm,@(disp,Rn) */
	r4 = 0xC3000010u; UPD(0x0C0876F4u, 1);  /* 0C0876F2 mov.l @(disp,pc),Rn */
	r0 = 0xC0A8A30u; UPD(0x0C0876F6u, 1);  /* 0C0876F4 mov.l @(disp,pc),Rn */
	r5 = R32(r10 + 0x4u); UPD(0x0C0876F8u, 1);  /* 0C0876F6 mov.l @(disp,Rm),Rn */
	W32(r8, r4); UPD(0x0C0876FAu, 1);  /* 0C0876F8 mov.l Rm,@Rn */
	W32(r8 + 0x4u, r5); UPD(0x0C0876FCu, 1);  /* 0C0876FA mov.l Rm,@(disp,Rn) */
	r4 = r9;  /* 0C0876FC mov Rm,Rn */
	IF(0x0C0876FEu); { u32 t_ = r0; PR = 0x0C087702u; W32(r8 + 0xCu, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C087702u); }  /* 0C0876FE jsr @Rn */
L_0C087702: BLKS(0x0C087702u);
	r2 = 0x84u; UPD(0x0C087704u, 1);  /* 0C087702 mov.w @(disp,pc),Rn */
	r4 = 0x340000u; UPD(0x0C087706u, 1);  /* 0C087704 mov.l @(disp,pc),Rn */
	r2 += r8;  /* 0C087706 add Rm,Rn */
	r1 = 0x100u; UPD(0x0C08770Au, 2);  /* 0C087708 mov.w @(disp,pc),Rn */
	r2 += 0x2u;  /* 0C08770A add #imm,Rn */
	r3 = 0xC0A9AE0u; UPD(0x0C08770Eu, 2);  /* 0C08770C mov.l @(disp,pc),Rn */
	r7 = R32(r10 + 0x24u); UPD(0x0C087710u, 1);  /* 0C08770E mov.l @(disp,Rm),Rn */
	r6 = R32(r10 + 0x28u); UPD(0x0C087712u, 1);  /* 0C087710 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x2Cu, r4); UPD(0x0C087714u, 1);  /* 0C087712 mov.l Rm,@(disp,Rn) */
	r5 = 0xFFE30000u; UPD(0x0C087716u, 1);  /* 0C087714 mov.l @(disp,pc),Rn */
	r4 = r9;  /* 0C087716 mov Rm,Rn */
	W16(r2, r1); UPD(0x0C08771Au, 2);  /* 0C087718 mov.w Rm,@Rn */
	W32(r8 + 0x24u, r7); UPD(0x0C08771Cu, 1);  /* 0C08771A mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x28u, r6); UPD(0x0C08771Eu, 1);  /* 0C08771C mov.l Rm,@(disp,Rn) */
	IF(0x0C08771Eu); { u32 t_ = r3; PR = 0x0C087722u; W32(r8 + 0x30u, r5); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C087722u); }  /* 0C08771E jsr @Rn */
L_0C087722: BLKS(0x0C087722u);
	r2 = (u32)(s32)(s8)R8(r13); UPD(0x0C087724u, 1);  /* 0C087722 mov.b @Rm,Rn */
	r0 = 0xB0u; UPD(0x0C087726u, 1);  /* 0C087724 mov.w @(disp,pc),Rn */
	IF(0x0C087726u); W8(r0 + r8, r2); UPD(0x0C087728u, 1);  /* 0C087726 mov.b Rm,@(r0,Rn) */
	r0 = 0xA8u; UPD(0x0C08772Au, 1);  /* 0C087728 mov.w @(disp,pc),Rn */
	r13 = 0xACu; UPD(0x0C08772Cu, 1);  /* 0C08772A mov.w @(disp,pc),Rn */
	r0 += r8;  /* 0C08772C add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r12); UPD(0x0C087730u, 2);  /* 0C08772E mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C087730 add #imm,Rn */
	r13 += r8;  /* 0C087732 add Rm,Rn */
	r10 = (u32)(s32)(s8)R8(r11); UPD(0x0C087736u, 3);  /* 0C087734 mov.b @Rm,Rn */
	r13 += 0x1u;  /* 0C087736 add #imm,Rn */
	W8(r0, r1); UPD(0x0C08773Au, 2);  /* 0C087738 mov.b Rm,@Rn */
	W8(r13, r10); UPD(0x0C08773Cu, 1);  /* 0C08773A mov.b Rm,@Rn */
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C087356u, 3); goto L_0C087356; }  /* 0C08773C bra */
L_0C087740: BLKS(0x0C087740u);
	r9 = 0xC062780u; UPD(0x0C087742u, 1);  /* 0C087740 mov.l @(disp,pc),Rn */
	IF(0x0C087742u); { u32 t_ = r9; PR = 0x0C087746u; r4 = 0x9u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C087746u); }  /* 0C087742 jsr @Rn */
L_0C087746: BLKS(0x0C087746u);
	{ r0 = (u32)(s32)(s16)r0; /* slot exts.w Rm,Rn */ UPD(0x0C0876D2u, 3); goto L_0C0876D2; }  /* 0C087746 bra */
L_0C087750: BLKS(0x0C087750u);
	r9 = 0xC062780u; UPD(0x0C087752u, 1);  /* 0C087750 mov.l @(disp,pc),Rn */
	IF(0x0C087752u); { u32 t_ = r9; PR = 0x0C087756u; r4 = 0x9u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C087756u); }  /* 0C087752 jsr @Rn */
L_0C087756: BLKS(0x0C087756u);
	{ r0 = (u32)(s32)(s16)r0; /* slot exts.w Rm,Rn */ UPD(0x0C08765Cu, 3); goto L_0C08765C; }  /* 0C087756 bra */
L_0C087760: BLKS(0x0C087760u);
	r9 = 0xC062780u; UPD(0x0C087762u, 1);  /* 0C087760 mov.l @(disp,pc),Rn */
	IF(0x0C087762u); { u32 t_ = r9; PR = 0x0C087766u; r4 = 0x9u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C087766u); }  /* 0C087762 jsr @Rn */
L_0C087766: BLKS(0x0C087766u);
	{ r0 = (u32)(s32)(s16)r0; /* slot exts.w Rm,Rn */ UPD(0x0C08756Au, 3); goto L_0C08756A; }  /* 0C087766 bra */
L_0C087770: BLKS(0x0C087770u);
	r10 = 0xC062780u; UPD(0x0C087772u, 1);  /* 0C087770 mov.l @(disp,pc),Rn */
	IF(0x0C087772u); { u32 t_ = r10; PR = 0x0C087776u; r4 = 0x9u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C087776u); }  /* 0C087772 jsr @Rn */
L_0C087776: BLKS(0x0C087776u);
	{ r0 = (u32)(s32)(s16)r0; /* slot exts.w Rm,Rn */ UPD(0x0C0874DCu, 3); goto L_0C0874DC; }  /* 0C087776 bra */
}

/* FUN_0c0877c0 */
void blk_f_0C0877C0(sh3_t *c)
{
	LOCALS;
L_0C0877C0: BLKS(0x0C0877C0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0877C2u, 1);  /* 0C0877C0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0877C4u, 1);  /* 0C0877C2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0877C6u, 1);  /* 0C0877C4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0877C8u, 1);  /* 0C0877C6 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0877CAu, 1);  /* 0C0877C8 mov.l Rm,@-Rn */
	r3 = 0xB4u; UPD(0x0C0877CCu, 1);  /* 0C0877CA mov.w @(disp,pc),Rn */
	r12 = (u32)(s32)(s16)r4;  /* 0C0877CC exts.w Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0877D0u, 2);  /* 0C0877CE mov.l Rm,@-Rn */
	IF(0x0C0877D0u); MACL = r12 * r3;  /* 0C0877D0 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0877D4u, 3);  /* 0C0877D2 mov.l Rm,@-Rn */
	r0 = 0xC286578u; UPD(0x0C0877D6u, 1);  /* 0C0877D4 mov.l @(disp,pc),Rn */
	IF(0x0C0877D6u); r2 = MACL;  /* 0C0877D6 sts macl,Rn */
	IF(0x0C0877D8u); r15 -= 4; W32(r15, PR); UPD(0x0C0877DAu, 2);  /* 0C0877D8 sts.l pr,@-Rn */
	r0 += r2;  /* 0C0877DA add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C0877DEu, 2);  /* 0C0877DC mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFF4u;  /* 0C0877DE add #imm,Rn */
	r0 = 0x2Eu;  /* 0C0877E0 mov #imm,Rn */
	T = r2 > r0;  /* 0C0877E2 cmp/hi Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0877ECu, 6); goto L_0C0877EC; } goto L_0C0877E8; }  /* 0C0877E4 bf/s */
L_0C0877E8: BLKS(0x0C0877E8u);
	{ IF(0x0C0877EAu); ; /* slot nop */ UPD(0x0C087930u, 4); goto L_0C087930; }  /* 0C0877E8 bra */
L_0C0877EC: BLKS(0x0C0877ECu);
	r0 = 0xC0877FCu;  /* 0C0877EC mova @(disp,pc),r0 */
	r2 += r2;  /* 0C0877EE add Rm,Rn */
	IF(0x0C0877F0u); r4 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C0877F2u, 3);  /* 0C0877F0 mov.w @(r0,Rm),Rn */
	IF(0x0C0877F2u); { u32 tv_ = (r4 + 0x0C0877F6u); u32 t_ = PHYS(tv_); IF(0x0C0877F4u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C087860u: goto L_0C087860; case 0x0C087930u: goto L_0C087930; case 0x0C087A40u: goto L_0C087A40; case 0x0C087AA0u: goto L_0C087AA0; case 0x0C087AB0u: goto L_0C087AB0; default: JUMPD(tv_); } }  /* 0C0877F2 braf Rn */
L_0C087860: BLKS(0x0C087860u);
	r7 = 0xB4u; UPD(0x0C087862u, 1);  /* 0C087860 mov.w @(disp,pc),Rn */
	r13 = 0x0u;  /* 0C087862 mov #imm,Rn */
	IF(0x0C087864u); MACL = r12 * r7;  /* 0C087864 mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C087868u, 4);  /* 0C087866 mov.l @(disp,pc),Rn */
	IF(0x0C087868u); r11 = MACL;  /* 0C087868 sts macl,Rn */
	r5 = 0xB0u; UPD(0x0C08786Cu, 2);  /* 0C08786A mov.w @(disp,pc),Rn */
	r11 += r6;  /* 0C08786C add Rm,Rn */
	r1 = 0xA9u; UPD(0x0C087870u, 2);  /* 0C08786E mov.w @(disp,pc),Rn */
	r5 += r11;  /* 0C087870 add Rm,Rn */
	r1 += r11;  /* 0C087872 add Rm,Rn */
	W32(r14 + 0x4u, r5); UPD(0x0C087876u, 3);  /* 0C087874 mov.l Rm,@(disp,Rn) */
	W32(r14 + 0x8u, r1); UPD(0x0C087878u, 1);  /* 0C087876 mov.l Rm,@(disp,Rn) */
L_0C087878: BLKS(0x0C087878u);
	r9 = 0xC0C2360u; UPD(0x0C08787Au, 1);  /* 0C087878 mov.l @(disp,pc),Rn */
	r8 = 0xC062780u; UPD(0x0C08787Cu, 1);  /* 0C08787A mov.l @(disp,pc),Rn */
	IF(0x0C08787Cu); { u32 t_ = r9; PR = 0x0C087880u; IF(0x0C08787Eu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C087880u); }  /* 0C08787C jsr @Rn */
L_0C087880: BLKS(0x0C087880u);
	r9 = (u32)(s32)(s16)r0;  /* 0C087880 exts.w Rm,Rn */
	r10 = 0xC069B20u; UPD(0x0C087884u, 2);  /* 0C087882 mov.l @(disp,pc),Rn */
	IF(0x0C087884u); { u32 t_ = r8; PR = 0x0C087888u; r4 = 0x28u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C087888u); }  /* 0C087884 jsr @Rn */
L_0C087888: BLKS(0x0C087888u);
	r8 = r0;  /* 0C087888 mov Rm,Rn */
	IF(0x0C08788Au); r8 <<= 16;  /* 0C08788A shll16 Rn */
	r4 = r9;  /* 0C08788C mov Rm,Rn */
	IF(0x0C08788Eu); { u32 t_ = r10; PR = 0x0C087892u; r5 = r8; /* slot mov Rm,Rn */ UPD(t_, 5); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C087892u); }  /* 0C08788E jsr @Rn */
L_0C087892: BLKS(0x0C087892u);
	r2 = 0xB4u; UPD(0x0C087894u, 1);  /* 0C087892 mov.w @(disp,pc),Rn */
	r4 = r9;  /* 0C087894 mov Rm,Rn */
	IF(0x0C087896u); MACL = r12 * r2;  /* 0C087896 mul.l Rm,Rn */
	r9 = 0xC069AF0u; UPD(0x0C08789Au, 4);  /* 0C087898 mov.l @(disp,pc),Rn */
	r5 = r8;  /* 0C08789A mov Rm,Rn */
	r10 = R32(r11 + 0x24u); UPD(0x0C08789Eu, 2);  /* 0C08789C mov.l @(disp,Rm),Rn */
	IF(0x0C08789Eu); r3 = MACL;  /* 0C08789E sts macl,Rn */
	r10 += r0;  /* 0C0878A0 add Rm,Rn */
	IF(0x0C0878A2u); { u32 t_ = r9; PR = 0x0C0878A6u; W32(r14, r3); /* slot mov.l Rm,@Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0878A6u); }  /* 0C0878A2 jsr @Rn */
L_0C0878A6: BLKS(0x0C0878A6u);
	r7 = R32(r14 + 0x4u); UPD(0x0C0878A8u, 1);  /* 0C0878A6 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0878A8 add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C0878ACu, 2);  /* 0C0878AA mov.b @Rm,Rn */
	r9 = R32(r11 + 0x28u); UPD(0x0C0878AEu, 1);  /* 0C0878AC mov.l @(disp,Rm),Rn */
	r5 = r6 & 0xFF;  /* 0C0878AE extu.b Rm,Rn */
	W32(r15, r5); UPD(0x0C0878B2u, 2);  /* 0C0878B0 mov.l Rm,@Rn */
	r9 += r0;  /* 0C0878B2 add Rm,Rn */
	r1 = R32(r14 + 0x8u); UPD(0x0C0878B6u, 2);  /* 0C0878B4 mov.l @(disp,Rm),Rn */
	r6 = r10;  /* 0C0878B6 mov Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r1); UPD(0x0C0878BAu, 2);  /* 0C0878B8 mov.b @Rm,Rn */
	r7 = r9;  /* 0C0878BA mov Rm,Rn */
	r0 = r4 & 0xFF;  /* 0C0878BC extu.b Rm,Rn */
	r8 = 0xC0BD6F0u; UPD(0x0C0878C0u, 3);  /* 0C0878BE mov.l @(disp,pc),Rn */
	r5 = 0xDu;  /* 0C0878C0 mov #imm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C0878C4u, 2);  /* 0C0878C2 mov.l Rm,@(disp,Rn) */
	IF(0x0C0878C4u); { u32 t_ = r8; PR = 0x0C0878C8u; r4 = R32(r11); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C0878C8u); }  /* 0C0878C4 jsr @Rn */
L_0C0878C8: BLKS(0x0C0878C8u);
	r3 = R32(r14 + 0x4u); UPD(0x0C0878CAu, 1);  /* 0C0878C8 mov.l @(disp,Rm),Rn */
	r5 = r10;  /* 0C0878CA mov Rm,Rn */
	r6 = r9;  /* 0C0878CC mov Rm,Rn */
	r10 = 0xC0BEE10u; UPD(0x0C0878D0u, 3);  /* 0C0878CE mov.l @(disp,pc),Rn */
	r9 = r13;  /* 0C0878D0 mov Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r3); UPD(0x0C0878D4u, 2);  /* 0C0878D2 mov.b @Rm,Rn */
	r9 += 0x1u;  /* 0C0878D4 add #imm,Rn */
	r15 += 0x8u;  /* 0C0878D6 add #imm,Rn */
	r7 = r2 & 0xFF;  /* 0C0878D8 extu.b Rm,Rn */
	r4 = 0x10u;  /* 0C0878DA mov #imm,Rn */
	IF(0x0C0878DCu); { u32 t_ = r10; PR = 0x0C0878E0u; r13 = (u32)(s32)(s16)r9; /* slot exts.w Rm,Rn */ UPD(t_, 6); CALLP(t_, blk_f_0C0BEE10, 0x0C0BEE10u, 0x0C0878E0u); }  /* 0C0878DC jsr @Rn */
L_0C0878E0: BLKS(0x0C0878E0u);
	r8 = 0x7u;  /* 0C0878E0 mov #imm,Rn */
	T = (s32)r13 > (s32)r8;  /* 0C0878E2 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r0 = R32(r14); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C087878u, 5); goto L_0C087878; } UPD(0x0C0878E8u, 1); goto L_0C0878E8; }  /* 0C0878E4 bf/s */
L_0C0878E8: BLKS(0x0C0878E8u);
	r12 = 0x0u;  /* 0C0878E8 mov #imm,Rn */
	r11 = 0xC286578u; UPD(0x0C0878ECu, 2);  /* 0C0878EA mov.l @(disp,pc),Rn */
	r7 = 0xA6u; UPD(0x0C0878EEu, 1);  /* 0C0878EC mov.w @(disp,pc),Rn */
	r11 += r0;  /* 0C0878EE add Rm,Rn */
	r0 = r11;  /* 0C0878F0 mov Rm,Rn */
	IF(0x0C0878F2u); r6 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C0878F4u, 3);  /* 0C0878F2 mov.b @(r0,Rm),Rn */
	r0 = 0xB0u; UPD(0x0C0878F6u, 1);  /* 0C0878F4 mov.w @(disp,pc),Rn */
	IF(0x0C0878F6u); r6 <<= 2;  /* 0C0878F6 shll2 Rn */
	IF(0x0C0878F8u); r1 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C0878FAu, 2);  /* 0C0878F8 mov.b @(r0,Rm),Rn */
	r5 = 0xC19A364u; UPD(0x0C0878FCu, 1);  /* 0C0878FA mov.l @(disp,pc),Rn */
	r0 = r6;  /* 0C0878FC mov Rm,Rn */
	r13 = 0xC07DF30u; UPD(0x0C087900u, 2);  /* 0C0878FE mov.l @(disp,pc),Rn */
	r7 = r1 & 0xFF;  /* 0C087900 extu.b Rm,Rn */
	IF(0x0C087902u); r4 = R32(r0 + r5); UPD(0x0C087904u, 2);  /* 0C087902 mov.l @(r0,Rm),Rn */
	r6 = R32(r11 + 0x28u); UPD(0x0C087906u, 1);  /* 0C087904 mov.l @(disp,Rm),Rn */
	IF(0x0C087906u); { u32 t_ = r13; PR = 0x0C08790Au; r5 = R32(r11 + 0x24u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07DF30, 0x0C07DF30u, 0x0C08790Au); }  /* 0C087906 jsr @Rn */
L_0C08790A: BLKS(0x0C08790Au);
	W32(r11, r12); UPD(0x0C08790Cu, 1);  /* 0C08790A mov.l Rm,@Rn */
L_0C08790C: BLKS(0x0C08790Cu);
	r14 += 0xCu;  /* 0C08790C add #imm,Rn */
	r15 = r14;  /* 0C08790E mov Rm,Rn */
	IF(0x0C087910u); PR = R32(r15); r15 += 4; UPD(0x0C087912u, 3);  /* 0C087910 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C087914u, 1);  /* 0C087912 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C087916u, 1);  /* 0C087914 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C087918u, 1);  /* 0C087916 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08791Au, 1);  /* 0C087918 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08791Cu, 1);  /* 0C08791A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08791Eu, 1);  /* 0C08791C mov.l @Rm+,Rn */
	IF(0x0C08791Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08791E rts */
L_0C087930: BLKS(0x0C087930u);
	r10 = 0xC0A8B50u; UPD(0x0C087932u, 1);  /* 0C087930 mov.l @(disp,pc),Rn */
	IF(0x0C087932u); { u32 t_ = r10; PR = 0x0C087936u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C087936u); }  /* 0C087932 jsr @Rn */
L_0C087936: BLKS(0x0C087936u);
	IF(0x0C087936u); T = (s32)r0 >= 0;  /* 0C087936 cmp/pz Rn */
	{ u32 c_ = !T; r9 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0879B0u, 4); goto L_0C0879B0; } goto L_0C08793C; }  /* 0C087938 bf/s */
L_0C08793C: BLKS(0x0C08793Cu);
	r10 = 0xB4u; UPD(0x0C08793Eu, 2);  /* 0C08793C mov.w @(disp,pc),Rn */
	IF(0x0C08793Eu); MACL = r12 * r10;  /* 0C08793E mul.l Rm,Rn */
	r11 = 0xC286578u; UPD(0x0C087942u, 3);  /* 0C087940 mov.l @(disp,pc),Rn */
	IF(0x0C087942u); r8 = MACL;  /* 0C087942 sts macl,Rn */
	r8 += r11;  /* 0C087944 add Rm,Rn */
	r0 = R32(r8 + 0xCu); UPD(0x0C087948u, 3);  /* 0C087946 mov.l @(disp,Rm),Rn */
	T = r0 == 0x4u;  /* 0C087948 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C08790Cu, 4); goto L_0C08790C; }  /* 0C08794A bt */
L_0C08794C: BLKS(0x0C08794Cu);
	r15 += 0xFFFFFFF8u;  /* 0C08794C add #imm,Rn */
	r0 = 0xB0u; UPD(0x0C087950u, 2);  /* 0C08794E mov.w @(disp,pc),Rn */
	IF(0x0C087950u); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C087952u, 1);  /* 0C087950 mov.b @(r0,Rm),Rn */
	r5 = 0xDu;  /* 0C087952 mov #imm,Rn */
	r0 = r2 & 0xFF;  /* 0C087954 extu.b Rm,Rn */
	W32(r15, r0); UPD(0x0C087958u, 3);  /* 0C087956 mov.l Rm,@Rn */
	r4 = 0xA9u; UPD(0x0C08795Au, 1);  /* 0C087958 mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C08795A mov Rm,Rn */
	IF(0x0C08795Cu); r3 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C08795Eu, 2);  /* 0C08795C mov.b @(r0,Rm),Rn */
	r13 = 0xC0BECB0u; UPD(0x0C087960u, 1);  /* 0C08795E mov.l @(disp,pc),Rn */
	r7 = r3 & 0xFF;  /* 0C087960 extu.b Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C087964u, 2);  /* 0C087962 mov.l Rm,@(disp,Rn) */
	r7 = R32(r8 + 0x28u); UPD(0x0C087966u, 1);  /* 0C087964 mov.l @(disp,Rm),Rn */
	r4 = R32(r8); UPD(0x0C087968u, 1);  /* 0C087966 mov.l @Rm,Rn */
	IF(0x0C087968u); { u32 t_ = r13; PR = 0x0C08796Cu; r6 = R32(r8 + 0x24u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BECB0, 0x0C0BECB0u, 0x0C08796Cu); }  /* 0C087968 jsr @Rn */
L_0C08796C: BLKS(0x0C08796Cu);
	r5 = 0xC0A8AE0u; UPD(0x0C08796Eu, 1);  /* 0C08796C mov.l @(disp,pc),Rn */
	r6 = 0x4u;  /* 0C08796E mov #imm,Rn */
	r4 = r12;  /* 0C087970 mov Rm,Rn */
	W32(r8 + 0xCu, r6); UPD(0x0C087974u, 3);  /* 0C087972 mov.l Rm,@(disp,Rn) */
	IF(0x0C087974u); { u32 t_ = r5; PR = 0x0C087978u; r15 += 0x8u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C087978u); }  /* 0C087974 jsr @Rn */
L_0C087978: BLKS(0x0C087978u);
	IF(0x0C087978u); MACL = r9 * r10;  /* 0C087978 mul.l Rm,Rn */
	r0 = 0xA4u; UPD(0x0C08797Cu, 3);  /* 0C08797A mov.w @(disp,pc),Rn */
	IF(0x0C08797Cu); r12 = MACL;  /* 0C08797C sts macl,Rn */
	r12 += r11;  /* 0C08797E add Rm,Rn */
	r12 += r0;  /* 0C087980 add Rm,Rn */
	r10 = r12;  /* 0C087982 mov Rm,Rn */
	r3 = 0xA1u; UPD(0x0C087986u, 5);  /* 0C087984 mov.w @(disp,pc),Rn */
	r10 += 0x1u;  /* 0C087986 add #imm,Rn */
	r4 = R32(r8); UPD(0x0C08798Au, 2);  /* 0C087988 mov.l @Rm,Rn */
	r12 += 0x2u;  /* 0C08798A add #imm,Rn */
	r13 = 0xFCFFFFFFu; UPD(0x0C08798Eu, 2);  /* 0C08798C mov.l @(disp,pc),Rn */
	r0 = r8;  /* 0C08798E mov Rm,Rn */
	r7 = (u32)(s32)(s8)R8(r10); UPD(0x0C087992u, 2);  /* 0C087990 mov.b @Rm,Rn */
	r4 &= r13;  /* 0C087992 and Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r12); UPD(0x0C087996u, 2);  /* 0C087994 mov.b @Rm,Rn */
	r2 = 0x4000u; UPD(0x0C087998u, 1);  /* 0C087996 mov.w @(disp,pc),Rn */
	r6 += 0x1u;  /* 0C087998 add #imm,Rn */
	IF(0x0C08799Au); r1 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C08799Cu, 2);  /* 0C08799A mov.b @(r0,Rm),Rn */
	r4 |= r2;  /* 0C08799C or Rm,Rn */
	r7 |= r1;  /* 0C08799E or Rm,Rn */
	W32(r8, r4); UPD(0x0C0879A2u, 3);  /* 0C0879A0 mov.l Rm,@Rn */
	W8(r10, r7); UPD(0x0C0879A4u, 1);  /* 0C0879A2 mov.b Rm,@Rn */
	{ W8(r12, r6); /* slot mov.b Rm,@Rn */ UPD(0x0C08790Cu, 3); goto L_0C08790C; }  /* 0C0879A4 bra */
L_0C0879B0: BLKS(0x0C0879B0u);
	r5 = 0xB4u; UPD(0x0C0879B2u, 1);  /* 0C0879B0 mov.w @(disp,pc),Rn */
	IF(0x0C0879B2u); MACL = r12 * r5;  /* 0C0879B2 mul.l Rm,Rn */
	r13 = 0xC286578u; UPD(0x0C0879B6u, 3);  /* 0C0879B4 mov.l @(disp,pc),Rn */
	IF(0x0C0879B6u); r9 = MACL;  /* 0C0879B6 sts macl,Rn */
	r9 += r13;  /* 0C0879B8 add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C0879BCu, 3);  /* 0C0879BA mov.w @(disp,pc),Rn */
	r4 = R32(r9 + 0xCu); UPD(0x0C0879BEu, 1);  /* 0C0879BC mov.l @(disp,Rm),Rn */
	IF(0x0C0879BEu); r11 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0879C0u, 1);  /* 0C0879BE mov.b @(r0,Rm),Rn */
	IF(0x0C0879C0u); r4 <<= 2;  /* 0C0879C0 shll2 Rn */
	r8 = 0xC07DF30u; UPD(0x0C0879C4u, 2);  /* 0C0879C2 mov.l @(disp,pc),Rn */
	r0 = r4;  /* 0C0879C4 mov Rm,Rn */
	r2 = 0xC19A378u; UPD(0x0C0879C8u, 2);  /* 0C0879C6 mov.l @(disp,pc),Rn */
	r7 = r11 & 0xFF;  /* 0C0879C8 extu.b Rm,Rn */
	IF(0x0C0879CAu); r4 = R32(r0 + r2); UPD(0x0C0879CCu, 2);  /* 0C0879CA mov.l @(r0,Rm),Rn */
	r5 = R32(r9 + 0x24u); UPD(0x0C0879CEu, 1);  /* 0C0879CC mov.l @(disp,Rm),Rn */
	IF(0x0C0879CEu); { u32 t_ = r8; PR = 0x0C0879D2u; r6 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07DF30, 0x0C07DF30u, 0x0C0879D2u); }  /* 0C0879CE jsr @Rn */
L_0C0879D2: BLKS(0x0C0879D2u);
	r3 = 0xC0A9240u; UPD(0x0C0879D4u, 1);  /* 0C0879D2 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C0879D4 mov Rm,Rn */
	r14 += 0xCu;  /* 0C0879D6 add #imm,Rn */
	r15 = r14;  /* 0C0879D8 mov Rm,Rn */
	IF(0x0C0879DAu); PR = R32(r15); r15 += 4; UPD(0x0C0879DCu, 4);  /* 0C0879DA lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0879DEu, 1);  /* 0C0879DC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0879E0u, 1);  /* 0C0879DE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0879E2u, 1);  /* 0C0879E0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0879E4u, 1);  /* 0C0879E2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0879E6u, 1);  /* 0C0879E4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0879E8u, 1);  /* 0C0879E6 mov.l @Rm+,Rn */
	IF(0x0C0879E8u); { u32 tv_ = r3; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A9240u: TAIL(blk_f_0C0A9240); default: JUMPD(tv_); } }  /* 0C0879E8 jmp @Rn */
L_0C087A40: BLKS(0x0C087A40u);
	r8 = 0xC0A8B50u; UPD(0x0C087A42u, 1);  /* 0C087A40 mov.l @(disp,pc),Rn */
	IF(0x0C087A42u); { u32 t_ = r8; PR = 0x0C087A46u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C087A46u); }  /* 0C087A42 jsr @Rn */
L_0C087A46: BLKS(0x0C087A46u);
	IF(0x0C087A46u); T = (s32)r0 >= 0;  /* 0C087A46 cmp/pz Rn */
	if (!T) { UPD(0x0C087A90u, 4); goto L_0C087A90; }  /* 0C087A48 bf */
L_0C087A4A: BLKS(0x0C087A4Au);
	r15 += 0xFFFFFFF8u;  /* 0C087A4A add #imm,Rn */
	r10 = 0xB4u; UPD(0x0C087A4Eu, 2);  /* 0C087A4C mov.w @(disp,pc),Rn */
	IF(0x0C087A4Eu); MACL = r0 * r10;  /* 0C087A4E mul.l Rm,Rn */
	r11 = 0xC286578u; UPD(0x0C087A52u, 3);  /* 0C087A50 mov.l @(disp,pc),Rn */
	IF(0x0C087A52u); r9 = MACL;  /* 0C087A52 sts macl,Rn */
	r9 += r11;  /* 0C087A54 add Rm,Rn */
	r5 = R32(r9); UPD(0x0C087A58u, 3);  /* 0C087A56 mov.l @Rm,Rn */
	IF(0x0C087A58u); MACL = r12 * r10;  /* 0C087A58 mul.l Rm,Rn */
	r1 = 0x3000000u; UPD(0x0C087A5Cu, 3);  /* 0C087A5A mov.l @(disp,pc),Rn */
	r5 |= r1;  /* 0C087A5C or Rm,Rn */
	IF(0x0C087A5Eu); r8 = MACL;  /* 0C087A5E sts macl,Rn */
	W32(r9, r5); UPD(0x0C087A62u, 3);  /* 0C087A60 mov.l Rm,@Rn */
	r8 += r11;  /* 0C087A62 add Rm,Rn */
	UPD(0x0C087A64u, 1);
L_0C087A64: BLKS(0x0C087A64u);
	r0 = 0xB0u; UPD(0x0C087A66u, 1);  /* 0C087A64 mov.w @(disp,pc),Rn */
	r5 = 0xDu;  /* 0C087A66 mov #imm,Rn */
	IF(0x0C087A68u); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C087A6Au, 2);  /* 0C087A68 mov.b @(r0,Rm),Rn */
	r13 = 0x0u;  /* 0C087A6A mov #imm,Rn */
	r4 = r2 & 0xFF;  /* 0C087A6C extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C087A70u, 3);  /* 0C087A6E mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C087A70 add #imm,Rn */
	IF(0x0C087A72u); r3 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C087A74u, 2);  /* 0C087A72 mov.b @(r0,Rm),Rn */
	r11 = 0xC0BECB0u; UPD(0x0C087A76u, 1);  /* 0C087A74 mov.l @(disp,pc),Rn */
	r7 = r3 & 0xFF;  /* 0C087A76 extu.b Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C087A7Au, 2);  /* 0C087A78 mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C087A7Cu, 1);  /* 0C087A7A mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C087A7Eu, 1);  /* 0C087A7C mov.l @(disp,Rm),Rn */
	IF(0x0C087A7Eu); { u32 t_ = r11; PR = 0x0C087A82u; r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BECB0, 0x0C0BECB0u, 0x0C087A82u); }  /* 0C087A7E jsr @Rn */
L_0C087A82: BLKS(0x0C087A82u);
	W32(r8, r13); UPD(0x0C087A84u, 1);  /* 0C087A82 mov.l Rm,@Rn */
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C08790Cu, 3); goto L_0C08790C; }  /* 0C087A84 bra */
L_0C087A90: BLKS(0x0C087A90u);
	r11 = 0xB4u; UPD(0x0C087A92u, 1);  /* 0C087A90 mov.w @(disp,pc),Rn */
	r6 = 0x0u;  /* 0C087A92 mov #imm,Rn */
	IF(0x0C087A94u); MACL = r12 * r11;  /* 0C087A94 mul.l Rm,Rn */
	r12 = 0xC286578u; UPD(0x0C087A98u, 4);  /* 0C087A96 mov.l @(disp,pc),Rn */
	IF(0x0C087A98u); r0 = MACL;  /* 0C087A98 sts macl,Rn */
	{ IF(0x0C087A9Cu); W32(r0 + r12, r6); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C08790Cu, 4); goto L_0C08790C; }  /* 0C087A9A bra */
L_0C087AA0: BLKS(0x0C087AA0u);
	r6 = 0xB4u; UPD(0x0C087AA2u, 1);  /* 0C087AA0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C087AA2 add #imm,Rn */
	IF(0x0C087AA4u); MACL = r12 * r6;  /* 0C087AA4 mul.l Rm,Rn */
	r12 = 0xC286578u; UPD(0x0C087AA8u, 4);  /* 0C087AA6 mov.l @(disp,pc),Rn */
	IF(0x0C087AA8u); r8 = MACL;  /* 0C087AA8 sts macl,Rn */
	{ r8 += r12; /* slot add Rm,Rn */ UPD(0x0C087A64u, 4); goto L_0C087A64; }  /* 0C087AAA bra */
L_0C087AB0: BLKS(0x0C087AB0u);
	r8 = 0xC062780u; UPD(0x0C087AB2u, 1);  /* 0C087AB0 mov.l @(disp,pc),Rn */
	IF(0x0C087AB2u); { u32 t_ = r8; PR = 0x0C087AB6u; r4 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C087AB6u); }  /* 0C087AB2 jsr @Rn */
L_0C087AB6: BLKS(0x0C087AB6u);
	T = r0 == 0x2u;  /* 0C087AB6 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C087B60u, 4); goto L_0C087B60; }  /* 0C087AB8 bt */
L_0C087ABA: BLKS(0x0C087ABAu);
	r10 = 0x2u;  /* 0C087ABA mov #imm,Rn */
	T = (s32)r0 > (s32)r10;  /* 0C087ABC cmp/gt Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x3u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C087B30u, 5); goto L_0C087B30; } goto L_0C087AC2; }  /* 0C087ABE bt/s */
L_0C087AC2: BLKS(0x0C087AC2u);
	T = r0 == 0x1u;  /* 0C087AC2 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C087B00u, 5); goto L_0C087B00; }  /* 0C087AC4 bt */
L_0C087AC6: BLKS(0x0C087AC6u);
	r7 = 0xB4u; UPD(0x0C087AC8u, 1);  /* 0C087AC6 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C087AC8 add #imm,Rn */
	IF(0x0C087ACAu); MACL = r12 * r7;  /* 0C087ACA mul.l Rm,Rn */
	r11 = 0xC286578u; UPD(0x0C087ACEu, 4);  /* 0C087ACC mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C087AD0u, 1);  /* 0C087ACE mov.w @(disp,pc),Rn */
	IF(0x0C087AD0u); r9 = MACL;  /* 0C087AD0 sts macl,Rn */
	r9 += r11;  /* 0C087AD2 add Rm,Rn */
	IF(0x0C087AD4u); r13 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C087AD6u, 3);  /* 0C087AD4 mov.b @(r0,Rm),Rn */
	r6 = r13 & 0xFF;  /* 0C087AD6 extu.b Rm,Rn */
	W32(r15, r6); UPD(0x0C087ADAu, 2);  /* 0C087AD8 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C087ADA add #imm,Rn */
	IF(0x0C087ADCu); r5 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C087ADEu, 2);  /* 0C087ADC mov.b @(r0,Rm),Rn */
	r0 = r5 & 0xFF;  /* 0C087ADE extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C087AE2u, 2);  /* 0C087AE0 mov.l Rm,@(disp,Rn) */
	r5 = 0x2u;  /* 0C087AE2 mov #imm,Rn */
	r4 = R32(r9); UPD(0x0C087AE6u, 2);  /* 0C087AE4 mov.l @Rm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C087AE8u, 1);  /* 0C087AE6 mov.l @(disp,Rm),Rn */
	r7 = R32(r9 + 0x28u); UPD(0x0C087AEAu, 1);  /* 0C087AE8 mov.l @(disp,Rm),Rn */
	r0 = 0xC0BD6F0u; UPD(0x0C087AECu, 1);  /* 0C087AEA mov.l @(disp,pc),Rn */
L_0C087AEC: BLKS(0x0C087AECu);
	IF(0x0C087AECu); { u32 t_ = r0; PR = 0x0C087AF0u; IF(0x0C087AEEu); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C087AF0u); }  /* 0C087AEC jsr @Rn */
L_0C087AF0: BLKS(0x0C087AF0u);
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C087A90u, 3); goto L_0C087A90; }  /* 0C087AF0 bra */
L_0C087B00: BLKS(0x0C087B00u);
	r0 = 0xB4u; UPD(0x0C087B02u, 1);  /* 0C087B00 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C087B02 add #imm,Rn */
	IF(0x0C087B04u); MACL = r12 * r0;  /* 0C087B04 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C087B08u, 4);  /* 0C087B06 mov.l @(disp,pc),Rn */
	r5 = 0x2u;  /* 0C087B08 mov #imm,Rn */
	r0 = 0xB0u; UPD(0x0C087B0Cu, 2);  /* 0C087B0A mov.w @(disp,pc),Rn */
	IF(0x0C087B0Cu); r3 = MACL;  /* 0C087B0C sts macl,Rn */
	r3 += r9;  /* 0C087B0E add Rm,Rn */
	IF(0x0C087B10u); r10 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C087B12u, 3);  /* 0C087B10 mov.b @(r0,Rm),Rn */
	r8 = r10 & 0xFF;  /* 0C087B12 extu.b Rm,Rn */
	W32(r15, r8); UPD(0x0C087B16u, 2);  /* 0C087B14 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C087B16 add #imm,Rn */
	IF(0x0C087B18u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C087B1Au, 2);  /* 0C087B18 mov.b @(r0,Rm),Rn */
	r4 = r2 & 0xFF;  /* 0C087B1A extu.b Rm,Rn */
	W32(r15 + 0x4u, r4); UPD(0x0C087B1Eu, 2);  /* 0C087B1C mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BECB0u; UPD(0x0C087B20u, 1);  /* 0C087B1E mov.l @(disp,pc),Rn */
	r4 = R32(r3); UPD(0x0C087B22u, 1);  /* 0C087B20 mov.l @Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C087B24u, 1);  /* 0C087B22 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r3 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C087AECu, 3); goto L_0C087AEC; }  /* 0C087B24 bra */
L_0C087B30: BLKS(0x0C087B30u);
	if (!T) { UPD(0x0C087AC6u, 3); goto L_0C087AC6; }  /* 0C087B30 bf */
L_0C087B32: BLKS(0x0C087B32u);
	r15 += 0xFFFFFFF8u;  /* 0C087B32 add #imm,Rn */
	r5 = 0xB4u; UPD(0x0C087B36u, 2);  /* 0C087B34 mov.w @(disp,pc),Rn */
	IF(0x0C087B36u); MACL = r12 * r5;  /* 0C087B36 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C087B3Au, 3);  /* 0C087B38 mov.l @(disp,pc),Rn */
	IF(0x0C087B3Au); r8 = MACL;  /* 0C087B3A sts macl,Rn */
	r8 += r0;  /* 0C087B3C add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C087B40u, 3);  /* 0C087B3E mov.w @(disp,pc),Rn */
	r5 = 0x2u;  /* 0C087B40 mov #imm,Rn */
	IF(0x0C087B42u); r13 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C087B44u, 2);  /* 0C087B42 mov.b @(r0,Rm),Rn */
	r9 = r13 & 0xFF;  /* 0C087B44 extu.b Rm,Rn */
	W32(r15, r9); UPD(0x0C087B48u, 2);  /* 0C087B46 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C087B48 add #imm,Rn */
	IF(0x0C087B4Au); r10 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C087B4Cu, 2);  /* 0C087B4A mov.b @(r0,Rm),Rn */
	r2 = r10 & 0xFF;  /* 0C087B4C extu.b Rm,Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C087B50u, 2);  /* 0C087B4E mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BFD30u; UPD(0x0C087B52u, 1);  /* 0C087B50 mov.l @(disp,pc),Rn */
	r4 = R32(r8); UPD(0x0C087B54u, 1);  /* 0C087B52 mov.l @Rm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C087B56u, 1);  /* 0C087B54 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C087AECu, 3); goto L_0C087AEC; }  /* 0C087B56 bra */
L_0C087B60: BLKS(0x0C087B60u);
	r4 = 0xB4u; UPD(0x0C087B62u, 1);  /* 0C087B60 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C087B62 add #imm,Rn */
	IF(0x0C087B64u); MACL = r12 * r4;  /* 0C087B64 mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C087B68u, 4);  /* 0C087B66 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C087B6Au, 1);  /* 0C087B68 mov.w @(disp,pc),Rn */
	IF(0x0C087B6Au); r13 = MACL;  /* 0C087B6A sts macl,Rn */
	r13 += r3;  /* 0C087B6C add Rm,Rn */
	IF(0x0C087B6Eu); r7 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C087B70u, 3);  /* 0C087B6E mov.b @(r0,Rm),Rn */
	r11 = r7 & 0xFF;  /* 0C087B70 extu.b Rm,Rn */
	W32(r15, r11); UPD(0x0C087B74u, 2);  /* 0C087B72 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C087B74 add #imm,Rn */
	IF(0x0C087B76u); r6 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C087B78u, 2);  /* 0C087B76 mov.b @(r0,Rm),Rn */
	r5 = r6 & 0xFF;  /* 0C087B78 extu.b Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C087B7Cu, 2);  /* 0C087B7A mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BFE70u; UPD(0x0C087B7Eu, 1);  /* 0C087B7C mov.l @(disp,pc),Rn */
	r5 = 0x2u;  /* 0C087B7E mov #imm,Rn */
	r4 = R32(r13); UPD(0x0C087B82u, 2);  /* 0C087B80 mov.l @Rm,Rn */
	r6 = R32(r13 + 0x24u); UPD(0x0C087B84u, 1);  /* 0C087B82 mov.l @(disp,Rm),Rn */
	{ r7 = R32(r13 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C087AECu, 3); goto L_0C087AEC; }  /* 0C087B84 bra */
}

void blk_f_0C087BB0(sh3_t *c)
{
	LOCALS;
	goto L_0C087BB0;
L_0C0807A0: BLKS(0x0C0807A0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0807A2u, 1);  /* 0C0807A0 mov.l Rm,@-Rn */
	r5 = (u32)(s32)(s16)r5;  /* 0C0807A2 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0807A6u, 2);  /* 0C0807A4 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0807A8u, 1);  /* 0C0807A6 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0807AAu, 1);  /* 0C0807A8 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0807ACu, 1);  /* 0C0807AA mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C0807AC exts.w Rm,Rn */
	r8 = 0xC0A8DD0u; UPD(0x0C0807B0u, 2);  /* 0C0807AE mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C0807B0 mov Rm,Rn */
	IF(0x0C0807B2u); r15 -= 4; W32(r15, PR); UPD(0x0C0807B4u, 2);  /* 0C0807B2 sts.l pr,@-Rn */
	IF(0x0C0807B4u); { u32 t_ = r8; PR = 0x0C0807B8u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8DD0, 0x0C0A8DD0u, 0x0C0807B8u); }  /* 0C0807B4 jsr @Rn */
L_0C0807B8: BLKS(0x0C0807B8u);
	T = (r0 & r0) == 0;  /* 0C0807B8 tst Rm,Rn */
	if (T) { UPD(0x0C0807E0u, 4); goto L_0C0807E0; }  /* 0C0807BA bt */
L_0C0807BC: BLKS(0x0C0807BCu);
	r2 = 0xB4u; UPD(0x0C0807BEu, 1);  /* 0C0807BC mov.w @(disp,pc),Rn */
	IF(0x0C0807BEu); MACL = r11 * r2;  /* 0C0807BE mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C0807C2u, 3);  /* 0C0807C0 mov.l @(disp,pc),Rn */
	IF(0x0C0807C2u); r10 = MACL;  /* 0C0807C2 sts macl,Rn */
	r8 = 0x9Cu; UPD(0x0C0807C6u, 2);  /* 0C0807C4 mov.w @(disp,pc),Rn */
	r10 += r0;  /* 0C0807C6 add Rm,Rn */
	r8 += r10;  /* 0C0807C8 add Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r8); UPD(0x0C0807CCu, 3);  /* 0C0807CA mov.b @Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C0807CC tst Rm,Rn */
	{ u32 c_ = T; r2 = r8; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C080840u, 4); goto L_0C080840; } goto L_0C0807D2; }  /* 0C0807CE bt/s */
L_0C0807D2: BLKS(0x0C0807D2u);
	r2 += 0x1u;  /* 0C0807D2 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C0807D6u, 3);  /* 0C0807D4 mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C0807D6 add #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C0807D8 extu.b Rm,Rn */
	T = r0 == 0x8u;  /* 0C0807DA cmp/eq #imm,r0 */
	{ u32 c_ = T; W8(r2, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0807F0u, 6); goto L_0C0807F0; } UPD(0x0C0807E0u, 1); goto L_0C0807E0; }  /* 0C0807DC bt/s */
L_0C0807E0: BLKS(0x0C0807E0u);
	r15 = r14;  /* 0C0807E0 mov Rm,Rn */
	IF(0x0C0807E2u); PR = R32(r15); r15 += 4; UPD(0x0C0807E4u, 2);  /* 0C0807E2 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0807E6u, 1);  /* 0C0807E4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0807E8u, 1);  /* 0C0807E6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0807EAu, 1);  /* 0C0807E8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0807ECu, 1);  /* 0C0807EA mov.l @Rm+,Rn */
	IF(0x0C0807ECu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0807EC rts */
L_0C0807F0: BLKS(0x0C0807F0u);
	r0 = r3;  /* 0C0807F0 mov Rm,Rn */
	r4 = 0x0u;  /* 0C0807F2 mov #imm,Rn */
	W8(r2, r4); UPD(0x0C0807F6u, 3);  /* 0C0807F4 mov.b Rm,@Rn */
	r0 += 0xFFFFFFFFu;  /* 0C0807F6 add #imm,Rn */
	W8(r8, r0); UPD(0x0C0807FAu, 2);  /* 0C0807F8 mov.b Rm,@Rn */
	r2 = 0x86u; UPD(0x0C0807FCu, 1);  /* 0C0807FA mov.w @(disp,pc),Rn */
	r0 = r10;  /* 0C0807FC mov Rm,Rn */
	r8 = 0xC069B20u; UPD(0x0C080800u, 2);  /* 0C0807FE mov.l @(disp,pc),Rn */
	IF(0x0C080800u); r9 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C080802u, 1);  /* 0C080800 mov.w @(r0,Rm),Rn */
	r5 = 0x80000u; UPD(0x0C080804u, 1);  /* 0C080802 mov.l @(disp,pc),Rn */
	IF(0x0C080804u); { u32 t_ = r8; PR = 0x0C080808u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C080808u); }  /* 0C080804 jsr @Rn */
L_0C080808: BLKS(0x0C080808u);
	r8 = R32(r10 + 0x24u); UPD(0x0C08080Au, 1);  /* 0C080808 mov.l @(disp,Rm),Rn */
	r4 = r9;  /* 0C08080A mov Rm,Rn */
	r8 += r0;  /* 0C08080C add Rm,Rn */
	r0 = 0xC069AF0u; UPD(0x0C080810u, 3);  /* 0C08080E mov.l @(disp,pc),Rn */
	r6 = 0x10000u; UPD(0x0C080812u, 1);  /* 0C080810 mov.l @(disp,pc),Rn */
	r5 = 0xA0000u; UPD(0x0C080814u, 1);  /* 0C080812 mov.l @(disp,pc),Rn */
	IF(0x0C080814u); { u32 t_ = r0; PR = 0x0C080818u; r8 += r6; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C080818u); }  /* 0C080814 jsr @Rn */
L_0C080818: BLKS(0x0C080818u);
	r6 = R32(r10 + 0x28u); UPD(0x0C08081Au, 1);  /* 0C080818 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C08081A add #imm,Rn */
	r7 = 0x30000u; UPD(0x0C08081Eu, 2);  /* 0C08081C mov.l @(disp,pc),Rn */
	r5 = r8;  /* 0C08081E mov Rm,Rn */
	W32(r15, r7); UPD(0x0C080822u, 2);  /* 0C080820 mov.l Rm,@Rn */
	r4 = 0x1u;  /* 0C080822 mov #imm,Rn */
	r7 = r9;  /* 0C080824 mov Rm,Rn */
	r9 = 0xC0BA7F0u; UPD(0x0C080828u, 3);  /* 0C080826 mov.l @(disp,pc),Rn */
	r8 = 0xC069B90u; UPD(0x0C08082Au, 1);  /* 0C080828 mov.l @(disp,pc),Rn */
	IF(0x0C08082Au); { u32 t_ = r9; PR = 0x0C08082Eu; r6 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BA7F0, 0x0C0BA7F0u, 0x0C08082Eu); }  /* 0C08082A jsr @Rn */
L_0C08082E: BLKS(0x0C08082Eu);
	r15 += 0x4u;  /* 0C08082E add #imm,Rn */
	IF(0x0C080830u); { u32 t_ = r8; PR = 0x0C080834u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C069B90, 0x0C069B90u, 0x0C080834u); }  /* 0C080830 jsr @Rn */
L_0C080834: BLKS(0x0C080834u);
	{ IF(0x0C080836u); ; /* slot nop */ UPD(0x0C0807E0u, 3); goto L_0C0807E0; }  /* 0C080834 bra */
L_0C080840: BLKS(0x0C080840u);
	r9 = 0xC0BC1B0u; UPD(0x0C080842u, 1);  /* 0C080840 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C080842 mov Rm,Rn */
	r5 = 0x5Au;  /* 0C080844 mov #imm,Rn */
	IF(0x0C080846u); { u32 t_ = r9; PR = 0x0C08084Au; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C08084Au); }  /* 0C080846 jsr @Rn */
L_0C08084A: BLKS(0x0C08084Au);
	T = (r0 & r0) == 0;  /* 0C08084A tst Rm,Rn */
	if (T) { UPD(0x0C0807E0u, 4); goto L_0C0807E0; }  /* 0C08084C bt */
L_0C08084E: BLKS(0x0C08084Eu);
	r0 = r10;  /* 0C08084E mov Rm,Rn */
	r4 = 0xA9u; UPD(0x0C080852u, 2);  /* 0C080850 mov.w @(disp,pc),Rn */
	IF(0x0C080852u); r3 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C080854u, 1);  /* 0C080852 mov.b @(r0,Rm),Rn */
	r5 = R32(r10 + 0x28u); UPD(0x0C080856u, 1);  /* 0C080854 mov.l @(disp,Rm),Rn */
	r4 = R32(r10 + 0x24u); UPD(0x0C080858u, 1);  /* 0C080856 mov.l @(disp,Rm),Rn */
	r10 = 0xC0BBF10u; UPD(0x0C08085Au, 1);  /* 0C080858 mov.l @(disp,pc),Rn */
	IF(0x0C08085Au); { u32 t_ = r10; PR = 0x0C08085Eu; r6 = r3 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BBF10, 0x0C0BBF10u, 0x0C08085Eu); }  /* 0C08085A jsr @Rn */
L_0C08085E: BLKS(0x0C08085Eu);
	T = (r0 & r0) == 0;  /* 0C08085E tst Rm,Rn */
	if (T) { UPD(0x0C0807E0u, 4); goto L_0C0807E0; }  /* 0C080860 bt */
L_0C080862: BLKS(0x0C080862u);
	r5 = 0x3u;  /* 0C080862 mov #imm,Rn */
	{ W8(r8, r5); /* slot mov.b Rm,@Rn */ UPD(0x0C0807E0u, 4); goto L_0C0807E0; }  /* 0C080864 bra */
L_0C0809E0: BLKS(0x0C0809E0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0809E2u, 1);  /* 0C0809E0 mov.l Rm,@-Rn */
	r5 = (u32)(s32)(s16)r5;  /* 0C0809E2 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0809E6u, 2);  /* 0C0809E4 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0809E8u, 1);  /* 0C0809E6 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0809EAu, 1);  /* 0C0809E8 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0809ECu, 1);  /* 0C0809EA mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0809EEu, 1);  /* 0C0809EC mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0809F0u, 1);  /* 0C0809EE mov.l Rm,@-Rn */
	r13 = (u32)(s32)(s16)r4;  /* 0C0809F0 exts.w Rm,Rn */
	IF(0x0C0809F2u); r15 -= 4; W32(r15, PR); UPD(0x0C0809F4u, 2);  /* 0C0809F2 sts.l pr,@-Rn */
	r4 = r13;  /* 0C0809F4 mov Rm,Rn */
	r8 = 0xC0A8DD0u; UPD(0x0C0809F8u, 2);  /* 0C0809F6 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0809F8 add #imm,Rn */
	IF(0x0C0809FAu); { u32 t_ = r8; PR = 0x0C0809FEu; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8DD0, 0x0C0A8DD0u, 0x0C0809FEu); }  /* 0C0809FA jsr @Rn */
L_0C0809FE: BLKS(0x0C0809FEu);
	T = (r0 & r0) == 0;  /* 0C0809FE tst Rm,Rn */
	if (!T) { UPD(0x0C080A20u, 4); goto L_0C080A20; }  /* 0C080A00 bf */
L_0C080A02: BLKS(0x0C080A02u);
	r14 += 0x8u;  /* 0C080A02 add #imm,Rn */
	r15 = r14;  /* 0C080A04 mov Rm,Rn */
	IF(0x0C080A06u); PR = R32(r15); r15 += 4; UPD(0x0C080A08u, 3);  /* 0C080A06 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C080A0Au, 1);  /* 0C080A08 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C080A0Cu, 1);  /* 0C080A0A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C080A0Eu, 1);  /* 0C080A0C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C080A10u, 1);  /* 0C080A0E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C080A12u, 1);  /* 0C080A10 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C080A14u, 1);  /* 0C080A12 mov.l @Rm+,Rn */
	IF(0x0C080A14u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C080A14 rts */
L_0C080A20: BLKS(0x0C080A20u);
	r8 = 0xC0BC1B0u; UPD(0x0C080A22u, 1);  /* 0C080A20 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C080A22 mov Rm,Rn */
	r5 = 0x5Au;  /* 0C080A24 mov #imm,Rn */
	IF(0x0C080A26u); { u32 t_ = r8; PR = 0x0C080A2Au; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C080A2Au); }  /* 0C080A26 jsr @Rn */
L_0C080A2A: BLKS(0x0C080A2Au);
	T = (r0 & r0) == 0;  /* 0C080A2A tst Rm,Rn */
	if (T) { UPD(0x0C080A02u, 4); goto L_0C080A02; }  /* 0C080A2C bt */
L_0C080A2E: BLKS(0x0C080A2Eu);
	r4 = 0xB4u; UPD(0x0C080A30u, 1);  /* 0C080A2E mov.w @(disp,pc),Rn */
	IF(0x0C080A30u); MACL = r13 * r4;  /* 0C080A30 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C080A34u, 3);  /* 0C080A32 mov.l @(disp,pc),Rn */
	IF(0x0C080A34u); r8 = MACL;  /* 0C080A34 sts macl,Rn */
	r8 += r0;  /* 0C080A36 add Rm,Rn */
	r3 = 0xA9u; UPD(0x0C080A3Au, 3);  /* 0C080A38 mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C080A3A mov Rm,Rn */
	r9 = 0xC0BBF10u; UPD(0x0C080A3Eu, 2);  /* 0C080A3C mov.l @(disp,pc),Rn */
	IF(0x0C080A3Eu); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C080A40u, 1);  /* 0C080A3E mov.b @(r0,Rm),Rn */
	r4 = R32(r8 + 0x24u); UPD(0x0C080A42u, 1);  /* 0C080A40 mov.l @(disp,Rm),Rn */
	r6 = r2 & 0xFF;  /* 0C080A42 extu.b Rm,Rn */
	IF(0x0C080A44u); { u32 t_ = r9; PR = 0x0C080A48u; r5 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BBF10, 0x0C0BBF10u, 0x0C080A48u); }  /* 0C080A44 jsr @Rn */
L_0C080A48: BLKS(0x0C080A48u);
	T = (r0 & r0) == 0;  /* 0C080A48 tst Rm,Rn */
	if (T) { UPD(0x0C080A02u, 4); goto L_0C080A02; }  /* 0C080A4A bt */
L_0C080A4C: BLKS(0x0C080A4Cu);
	r5 = 0x0u;  /* 0C080A4C mov #imm,Rn */
	W32(r14, r5); UPD(0x0C080A50u, 2);  /* 0C080A4E mov.l Rm,@Rn */
	W32(r14 + 0x4u, r8); UPD(0x0C080A52u, 1);  /* 0C080A50 mov.l Rm,@(disp,Rn) */
	IF(0x0C080A52u); ;  /* 0C080A52 nop */
	UPD(0x0C080A54u, 1);
L_0C080A54: BLKS(0x0C080A54u);
	r0 = R32(r14 + 0x4u); UPD(0x0C080A56u, 1);  /* 0C080A54 mov.l @(disp,Rm),Rn */
	r12 = 0x86u; UPD(0x0C080A58u, 1);  /* 0C080A56 mov.w @(disp,pc),Rn */
	r9 = R32(r14); UPD(0x0C080A5Au, 1);  /* 0C080A58 mov.l @Rm,Rn */
	IF(0x0C080A5Au); r7 = (u32)(s32)(s16)R16(r0 + r12); UPD(0x0C080A5Cu, 1);  /* 0C080A5A mov.w @(r0,Rm),Rn */
	IF(0x0C080A5Cu); r9 <<= 2;  /* 0C080A5C shll2 Rn */
	r11 = 0xC19146Au; UPD(0x0C080A60u, 2);  /* 0C080A5E mov.l @(disp,pc),Rn */
	r0 = r9;  /* 0C080A60 mov Rm,Rn */
	IF(0x0C080A62u); r10 = (u32)(s32)(s16)R16(r0 + r11); UPD(0x0C080A64u, 2);  /* 0C080A62 mov.w @(r0,Rm),Rn */
	r6 = 0xC069B20u; UPD(0x0C080A66u, 1);  /* 0C080A64 mov.l @(disp,pc),Rn */
	r7 += r10;  /* 0C080A66 add Rm,Rn */
	r11 = 0xC191448u; UPD(0x0C080A6Au, 2);  /* 0C080A68 mov.l @(disp,pc),Rn */
	r10 = (u32)(s32)(s16)r7;  /* 0C080A6A exts.w Rm,Rn */
	r11 += r9;  /* 0C080A6C add Rm,Rn */
	r4 = r10;  /* 0C080A6E mov Rm,Rn */
	IF(0x0C080A70u); { u32 t_ = r6; PR = 0x0C080A74u; r5 = R32(r11); /* slot mov.l @Rm,Rn */ UPD(t_, 5); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C080A74u); }  /* 0C080A70 jsr @Rn */
L_0C080A74: BLKS(0x0C080A74u);
	r1 = 0xC069AF0u; UPD(0x0C080A76u, 1);  /* 0C080A74 mov.l @(disp,pc),Rn */
	r8 = r0;  /* 0C080A76 mov Rm,Rn */
	r12 = 0xC191458u; UPD(0x0C080A7Au, 2);  /* 0C080A78 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C080A7A mov Rm,Rn */
	r12 += r9;  /* 0C080A7C add Rm,Rn */
	IF(0x0C080A7Eu); { u32 t_ = r1; PR = 0x0C080A82u; r5 = R32(r12); /* slot mov.l @Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C080A82u); }  /* 0C080A7E jsr @Rn */
L_0C080A82: BLKS(0x0C080A82u);
	r8 -= r0;  /* 0C080A82 sub Rm,Rn */
	r1 = r8;  /* 0C080A84 mov Rm,Rn */
	r1 += r1;  /* 0C080A86 add Rm,Rn */
	r1 += r8;  /* 0C080A88 add Rm,Rn */
	IF(0x0C080A8Au); T = (s32)r1 >= 0;  /* 0C080A8A cmp/pz Rn */
	if (!T) { UPD(0x0C080B00u, 8); goto L_0C080B00; }  /* 0C080A8C bf */
L_0C080A8E: BLKS(0x0C080A8Eu);
	r9 = R32(r14 + 0x4u); UPD(0x0C080A90u, 1);  /* 0C080A8E mov.l @(disp,Rm),Rn */
	IF(0x0C080A90u); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C080A90 shar Rn */
	r8 = R32(r9 + 0x24u); UPD(0x0C080A94u, 2);  /* 0C080A92 mov.l @(disp,Rm),Rn */
	IF(0x0C080A94u); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C080A94 shar Rn */
	r7 = 0xC069AF0u; UPD(0x0C080A98u, 2);  /* 0C080A96 mov.l @(disp,pc),Rn */
	r8 += r1;  /* 0C080A98 add Rm,Rn */
	r5 = 0x10000u; UPD(0x0C080A9Cu, 2);  /* 0C080A9A mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C080A9C mov Rm,Rn */
	r8 += r5;  /* 0C080A9E add Rm,Rn */
	IF(0x0C080AA0u); { u32 t_ = r7; PR = 0x0C080AA4u; r5 = R32(r11); /* slot mov.l @Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C080AA4u); }  /* 0C080AA0 jsr @Rn */
L_0C080AA4: BLKS(0x0C080AA4u);
	r4 = R32(r14 + 0x4u); UPD(0x0C080AA6u, 1);  /* 0C080AA4 mov.l @(disp,Rm),Rn */
	r6 = 0xC069B20u; UPD(0x0C080AA8u, 1);  /* 0C080AA6 mov.l @(disp,pc),Rn */
	r11 = R32(r4 + 0x28u); UPD(0x0C080AAAu, 1);  /* 0C080AA8 mov.l @(disp,Rm),Rn */
	r5 = R32(r12); UPD(0x0C080AACu, 1);  /* 0C080AAA mov.l @Rm,Rn */
	r4 = r10;  /* 0C080AAC mov Rm,Rn */
	IF(0x0C080AAEu); { u32 t_ = r6; PR = 0x0C080AB2u; r11 += r0; /* slot add Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C080AB2u); }  /* 0C080AAE jsr @Rn */
L_0C080AB2: BLKS(0x0C080AB2u);
	r7 = r10;  /* 0C080AB2 mov Rm,Rn */
	r11 += r0;  /* 0C080AB4 add Rm,Rn */
	r10 = 0xC0BA7F0u; UPD(0x0C080AB8u, 3);  /* 0C080AB6 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C080AB8 add #imm,Rn */
	r0 = 0x28000u; UPD(0x0C080ABCu, 2);  /* 0C080ABA mov.l @(disp,pc),Rn */
	r5 = r8;  /* 0C080ABC mov Rm,Rn */
	W32(r15, r0); UPD(0x0C080AC0u, 2);  /* 0C080ABE mov.l Rm,@Rn */
	r4 = 0x1u;  /* 0C080AC0 mov #imm,Rn */
	IF(0x0C080AC2u); { u32 t_ = r10; PR = 0x0C080AC6u; r6 = r11; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BA7F0, 0x0C0BA7F0u, 0x0C080AC6u); }  /* 0C080AC2 jsr @Rn */
L_0C080AC6: BLKS(0x0C080AC6u);
	r3 = R32(r14); UPD(0x0C080AC8u, 1);  /* 0C080AC6 mov.l @Rm,Rn */
	r8 = 0x3u;  /* 0C080AC8 mov #imm,Rn */
	r3 += 0x1u;  /* 0C080ACA add #imm,Rn */
	r2 = (u32)(s32)(s16)r3;  /* 0C080ACC exts.w Rm,Rn */
	W32(r14, r2); UPD(0x0C080AD0u, 4);  /* 0C080ACE mov.l Rm,@Rn */
	r9 = R32(r14); UPD(0x0C080AD2u, 1);  /* 0C080AD0 mov.l @Rm,Rn */
	T = (s32)r9 > (s32)r8;  /* 0C080AD2 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C080A54u, 4); goto L_0C080A54; } goto L_0C080AD8; }  /* 0C080AD4 bf/s */
L_0C080AD8: BLKS(0x0C080AD8u);
	r2 = 0xC069B90u; UPD(0x0C080ADAu, 2);  /* 0C080AD8 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C080ADA mov Rm,Rn */
	r14 += 0x8u;  /* 0C080ADC add #imm,Rn */
	r15 = r14;  /* 0C080ADE mov Rm,Rn */
	IF(0x0C080AE0u); PR = R32(r15); r15 += 4; UPD(0x0C080AE2u, 4);  /* 0C080AE0 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C080AE4u, 1);  /* 0C080AE2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C080AE6u, 1);  /* 0C080AE4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C080AE8u, 1);  /* 0C080AE6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C080AEAu, 1);  /* 0C080AE8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C080AECu, 1);  /* 0C080AEA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C080AEEu, 1);  /* 0C080AEC mov.l @Rm+,Rn */
	IF(0x0C080AEEu); { u32 tv_ = r2; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C069B90u: TAIL(blk_f_0C069B90); default: JUMPD(tv_); } }  /* 0C080AEE jmp @Rn */
L_0C080B00: BLKS(0x0C080B00u);
	{ r1 += 0x3u; /* slot add #imm,Rn */ UPD(0x0C080A8Eu, 3); goto L_0C080A8E; }  /* 0C080B00 bra */
L_0C080B40: BLKS(0x0C080B40u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C080B42u, 1);  /* 0C080B40 mov.l Rm,@-Rn */
	r5 = (u32)(s32)(s16)r5;  /* 0C080B42 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C080B46u, 2);  /* 0C080B44 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C080B48u, 1);  /* 0C080B46 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C080B4Au, 1);  /* 0C080B48 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C080B4Cu, 1);  /* 0C080B4A mov.l Rm,@-Rn */
	r0 = 0xB4u; UPD(0x0C080B4Eu, 1);  /* 0C080B4C mov.w @(disp,pc),Rn */
	r12 = (u32)(s32)(s16)r4;  /* 0C080B4E exts.w Rm,Rn */
	IF(0x0C080B50u); MACL = r12 * r0;  /* 0C080B50 mul.l Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C080B54u, 4);  /* 0C080B52 mov.l Rm,@-Rn */
	r0 = 0xC286578u; UPD(0x0C080B56u, 1);  /* 0C080B54 mov.l @(disp,pc),Rn */
	IF(0x0C080B56u); r10 = MACL;  /* 0C080B56 sts macl,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C080B5Au, 2);  /* 0C080B58 mov.l Rm,@-Rn */
	r10 += r0;  /* 0C080B5A add Rm,Rn */
	r11 = 0x9Cu; UPD(0x0C080B5Eu, 2);  /* 0C080B5C mov.w @(disp,pc),Rn */
	IF(0x0C080B5Eu); r15 -= 4; W32(r15, PR); UPD(0x0C080B60u, 1);  /* 0C080B5E sts.l pr,@-Rn */
	r11 += r10;  /* 0C080B60 add Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r11); UPD(0x0C080B64u, 2);  /* 0C080B62 mov.b @Rm,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C080B64 add #imm,Rn */
	T = (r3 & r3) == 0;  /* 0C080B66 tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C080C40u, 5); goto L_0C080C40; } goto L_0C080B6C; }  /* 0C080B68 bt/s */
L_0C080B6C: BLKS(0x0C080B6Cu);
	r2 = r11;  /* 0C080B6C mov Rm,Rn */
	r2 += 0x1u;  /* 0C080B6E add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C080B72u, 4);  /* 0C080B70 mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C080B72 add #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C080B74 extu.b Rm,Rn */
	T = r0 == 0x4u;  /* 0C080B76 cmp/eq #imm,r0 */
	{ u32 c_ = T; W8(r2, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C080BA0u, 6); goto L_0C080BA0; } UPD(0x0C080B7Cu, 1); goto L_0C080B7C; }  /* 0C080B78 bt/s */
L_0C080B7C: BLKS(0x0C080B7Cu);
	r14 += 0x8u;  /* 0C080B7C add #imm,Rn */
	UPD(0x0C080B7Eu, 1);
L_0C080B7E: BLKS(0x0C080B7Eu);
	r15 = r14;  /* 0C080B7E mov Rm,Rn */
	IF(0x0C080B80u); PR = R32(r15); r15 += 4; UPD(0x0C080B82u, 2);  /* 0C080B80 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C080B84u, 1);  /* 0C080B82 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C080B86u, 1);  /* 0C080B84 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C080B88u, 1);  /* 0C080B86 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C080B8Au, 1);  /* 0C080B88 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C080B8Cu, 1);  /* 0C080B8A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C080B8Eu, 1);  /* 0C080B8C mov.l @Rm+,Rn */
	IF(0x0C080B8Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C080B8E rts */
L_0C080BA0: BLKS(0x0C080BA0u);
	r13 = r3;  /* 0C080BA0 mov Rm,Rn */
	r13 += 0xFFFFFFFFu;  /* 0C080BA2 add #imm,Rn */
	W8(r11, r13); UPD(0x0C080BA6u, 3);  /* 0C080BA4 mov.b Rm,@Rn */
	r9 = 0x0u;  /* 0C080BA6 mov #imm,Rn */
	r5 = 0x86u; UPD(0x0C080BAAu, 2);  /* 0C080BA8 mov.w @(disp,pc),Rn */
	r0 = r10;  /* 0C080BAA mov Rm,Rn */
	W8(r2, r9); UPD(0x0C080BAEu, 2);  /* 0C080BAC mov.b Rm,@Rn */
	IF(0x0C080BAEu); r13 = (u32)(s32)(s16)R16(r0 + r5); UPD(0x0C080BB0u, 1);  /* 0C080BAE mov.w @(r0,Rm),Rn */
	r9 = 0x3u;  /* 0C080BB0 mov #imm,Rn */
	r9 &= r3;  /* 0C080BB2 and Rm,Rn */
	r8 = 0xC069B20u; UPD(0x0C080BB6u, 3);  /* 0C080BB4 mov.l @(disp,pc),Rn */
	IF(0x0C080BB6u); r9 <<= 2;  /* 0C080BB6 shll2 Rn */
	r0 = 0xC191478u; UPD(0x0C080BBAu, 2);  /* 0C080BB8 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C080BBA mov Rm,Rn */
	r0 += r9;  /* 0C080BBC add Rm,Rn */
	r5 = R32(r0); UPD(0x0C080BC0u, 3);  /* 0C080BBE mov.l @Rm,Rn */
	IF(0x0C080BC0u); { u32 t_ = r8; PR = 0x0C080BC4u; W32(r14, r0); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C080BC4u); }  /* 0C080BC0 jsr @Rn */
L_0C080BC4: BLKS(0x0C080BC4u);
	r7 = 0xC191488u; UPD(0x0C080BC6u, 1);  /* 0C080BC4 mov.l @(disp,pc),Rn */
	r8 = r0;  /* 0C080BC6 mov Rm,Rn */
	r6 = 0xC069AF0u; UPD(0x0C080BCAu, 2);  /* 0C080BC8 mov.l @(disp,pc),Rn */
	r7 += r9;  /* 0C080BCA add Rm,Rn */
	W32(r14 + 0x4u, r7); UPD(0x0C080BCEu, 2);  /* 0C080BCC mov.l Rm,@(disp,Rn) */
	r4 = r13;  /* 0C080BCE mov Rm,Rn */
	IF(0x0C080BD0u); { u32 t_ = r6; PR = 0x0C080BD4u; r5 = R32(r7); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C080BD4u); }  /* 0C080BD0 jsr @Rn */
L_0C080BD4: BLKS(0x0C080BD4u);
	r8 -= r0;  /* 0C080BD4 sub Rm,Rn */
	r1 = r8;  /* 0C080BD6 mov Rm,Rn */
	r1 += r1;  /* 0C080BD8 add Rm,Rn */
	r1 += r8;  /* 0C080BDA add Rm,Rn */
	IF(0x0C080BDCu); T = (s32)r1 >= 0;  /* 0C080BDC cmp/pz Rn */
	if (!T) { UPD(0x0C080C30u, 8); goto L_0C080C30; }  /* 0C080BDE bf */
L_0C080BE0: BLKS(0x0C080BE0u);
	r9 = R32(r10 + 0x24u); UPD(0x0C080BE2u, 1);  /* 0C080BE0 mov.l @(disp,Rm),Rn */
	IF(0x0C080BE2u); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C080BE2 shar Rn */
	IF(0x0C080BE4u); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C080BE4 shar Rn */
	r6 = 0xC069AF0u; UPD(0x0C080BE8u, 3);  /* 0C080BE6 mov.l @(disp,pc),Rn */
	r9 += r1;  /* 0C080BE8 add Rm,Rn */
	r4 = 0x10000u; UPD(0x0C080BECu, 2);  /* 0C080BEA mov.l @(disp,pc),Rn */
	r7 = R32(r14); UPD(0x0C080BEEu, 1);  /* 0C080BEC mov.l @Rm,Rn */
	r9 += r4;  /* 0C080BEE add Rm,Rn */
	r5 = R32(r7); UPD(0x0C080BF2u, 2);  /* 0C080BF0 mov.l @Rm,Rn */
	IF(0x0C080BF2u); { u32 t_ = r6; PR = 0x0C080BF6u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C080BF6u); }  /* 0C080BF2 jsr @Rn */
L_0C080BF6: BLKS(0x0C080BF6u);
	r3 = 0xC069B20u; UPD(0x0C080BF8u, 1);  /* 0C080BF6 mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C080BF8 mov Rm,Rn */
	r8 = R32(r10 + 0x28u); UPD(0x0C080BFCu, 2);  /* 0C080BFA mov.l @(disp,Rm),Rn */
	r1 = R32(r14 + 0x4u); UPD(0x0C080BFEu, 1);  /* 0C080BFC mov.l @(disp,Rm),Rn */
	r8 += r0;  /* 0C080BFE add Rm,Rn */
	IF(0x0C080C00u); { u32 t_ = r3; PR = 0x0C080C04u; r5 = R32(r1); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C080C04u); }  /* 0C080C00 jsr @Rn */
L_0C080C04: BLKS(0x0C080C04u);
	r8 += r0;  /* 0C080C04 add Rm,Rn */
	r6 = r8;  /* 0C080C06 mov Rm,Rn */
	r8 = 0xC0BA480u; UPD(0x0C080C0Au, 3);  /* 0C080C08 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C080C0A add #imm,Rn */
	r2 = 0x30000u; UPD(0x0C080C0Eu, 2);  /* 0C080C0C mov.l @(disp,pc),Rn */
	r4 = 0x1u;  /* 0C080C0E mov #imm,Rn */
	W32(r15, r2); UPD(0x0C080C12u, 2);  /* 0C080C10 mov.l Rm,@Rn */
	r5 = r9;  /* 0C080C12 mov Rm,Rn */
	IF(0x0C080C14u); { u32 t_ = r8; PR = 0x0C080C18u; r7 = r13; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BA480, 0x0C0BA480u, 0x0C080C18u); }  /* 0C080C14 jsr @Rn */
L_0C080C18: BLKS(0x0C080C18u);
	r10 = (u32)(s32)(s8)R8(r11); UPD(0x0C080C1Au, 1);  /* 0C080C18 mov.b @Rm,Rn */
	T = (r10 & r10) == 0;  /* 0C080C1A tst Rm,Rn */
	{ u32 c_ = !T; r15 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C080B7Cu, 4); goto L_0C080B7C; } goto L_0C080C20; }  /* 0C080C1C bf/s */
L_0C080C20: BLKS(0x0C080C20u);
	r11 = 0xC069B90u; UPD(0x0C080C22u, 2);  /* 0C080C20 mov.l @(disp,pc),Rn */
	IF(0x0C080C22u); { u32 t_ = r11; PR = 0x0C080C26u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B90, 0x0C069B90u, 0x0C080C26u); }  /* 0C080C22 jsr @Rn */
L_0C080C26: BLKS(0x0C080C26u);
	{ r14 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C080B7Eu, 3); goto L_0C080B7E; }  /* 0C080C26 bra */
L_0C080C30: BLKS(0x0C080C30u);
	{ r1 += 0x3u; /* slot add #imm,Rn */ UPD(0x0C080BE0u, 3); goto L_0C080BE0; }  /* 0C080C30 bra */
L_0C080C40: BLKS(0x0C080C40u);
	r8 = 0xC0A8DD0u; UPD(0x0C080C42u, 1);  /* 0C080C40 mov.l @(disp,pc),Rn */
	IF(0x0C080C42u); { u32 t_ = r8; PR = 0x0C080C46u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8DD0, 0x0C0A8DD0u, 0x0C080C46u); }  /* 0C080C42 jsr @Rn */
L_0C080C46: BLKS(0x0C080C46u);
	T = (r0 & r0) == 0;  /* 0C080C46 tst Rm,Rn */
	if (T) { UPD(0x0C080B7Cu, 4); goto L_0C080B7C; }  /* 0C080C48 bt */
L_0C080C4A: BLKS(0x0C080C4Au);
	r4 = r12;  /* 0C080C4A mov Rm,Rn */
	r9 = 0xC0BC1B0u; UPD(0x0C080C4Eu, 2);  /* 0C080C4C mov.l @(disp,pc),Rn */
	r5 = 0x5Au;  /* 0C080C4E mov #imm,Rn */
	IF(0x0C080C50u); { u32 t_ = r9; PR = 0x0C080C54u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C080C54u); }  /* 0C080C50 jsr @Rn */
L_0C080C54: BLKS(0x0C080C54u);
	T = (r0 & r0) == 0;  /* 0C080C54 tst Rm,Rn */
	if (T) { UPD(0x0C080B7Cu, 4); goto L_0C080B7C; }  /* 0C080C56 bt */
L_0C080C58: BLKS(0x0C080C58u);
	r4 = R32(r10 + 0x24u); UPD(0x0C080C5Au, 1);  /* 0C080C58 mov.l @(disp,Rm),Rn */
	r0 = r10;  /* 0C080C5A mov Rm,Rn */
	r5 = R32(r10 + 0x28u); UPD(0x0C080C5Eu, 2);  /* 0C080C5C mov.l @(disp,Rm),Rn */
	r3 = 0xA9u; UPD(0x0C080C60u, 1);  /* 0C080C5E mov.w @(disp,pc),Rn */
	r10 = 0xC0BBF10u; UPD(0x0C080C62u, 1);  /* 0C080C60 mov.l @(disp,pc),Rn */
	IF(0x0C080C62u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C080C64u, 1);  /* 0C080C62 mov.b @(r0,Rm),Rn */
	IF(0x0C080C64u); { u32 t_ = r10; PR = 0x0C080C68u; r6 = r2 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BBF10, 0x0C0BBF10u, 0x0C080C68u); }  /* 0C080C64 jsr @Rn */
L_0C080C68: BLKS(0x0C080C68u);
	T = (r0 & r0) == 0;  /* 0C080C68 tst Rm,Rn */
	if (T) { UPD(0x0C080C26u, 4); goto L_0C080C26; }  /* 0C080C6A bt */
L_0C080C6C: BLKS(0x0C080C6Cu);
	r4 = 0x8u;  /* 0C080C6C mov #imm,Rn */
	{ W8(r11, r4); /* slot mov.b Rm,@Rn */ UPD(0x0C080B7Cu, 4); goto L_0C080B7C; }  /* 0C080C6E bra */
L_0C087BB0: BLKS(0x0C087BB0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C087BB2u, 1);  /* 0C087BB0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C087BB4u, 1);  /* 0C087BB2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C087BB6u, 1);  /* 0C087BB4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C087BB8u, 1);  /* 0C087BB6 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C087BBAu, 1);  /* 0C087BB8 mov.l Rm,@-Rn */
	r3 = 0xB4u; UPD(0x0C087BBCu, 1);  /* 0C087BBA mov.w @(disp,pc),Rn */
	r12 = (u32)(s32)(s16)r4;  /* 0C087BBC exts.w Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C087BC0u, 2);  /* 0C087BBE mov.l Rm,@-Rn */
	IF(0x0C087BC0u); MACL = r12 * r3;  /* 0C087BC0 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C087BC4u, 3);  /* 0C087BC2 mov.l Rm,@-Rn */
	r0 = 0xC286578u; UPD(0x0C087BC6u, 1);  /* 0C087BC4 mov.l @(disp,pc),Rn */
	IF(0x0C087BC6u); r2 = MACL;  /* 0C087BC6 sts macl,Rn */
	IF(0x0C087BC8u); r15 -= 4; W32(r15, PR); UPD(0x0C087BCAu, 2);  /* 0C087BC8 sts.l pr,@-Rn */
	r0 += r2;  /* 0C087BCA add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C087BCEu, 2);  /* 0C087BCC mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C087BCE add #imm,Rn */
	r0 = 0x2Eu;  /* 0C087BD0 mov #imm,Rn */
	T = r2 > r0;  /* 0C087BD2 cmp/hi Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C087BDCu, 6); goto L_0C087BDC; } goto L_0C087BD8; }  /* 0C087BD4 bf/s */
L_0C087BD8: BLKS(0x0C087BD8u);
	{ IF(0x0C087BDAu); ; /* slot nop */ UPD(0x0C087E00u, 4); goto L_0C087E00; }  /* 0C087BD8 bra */
L_0C087BDC: BLKS(0x0C087BDCu);
	r0 = 0xC087BECu;  /* 0C087BDC mova @(disp,pc),r0 */
	r2 += r2;  /* 0C087BDE add Rm,Rn */
	IF(0x0C087BE0u); r4 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C087BE2u, 3);  /* 0C087BE0 mov.w @(r0,Rm),Rn */
	IF(0x0C087BE2u); { u32 tv_ = (r4 + 0x0C087BE6u); u32 t_ = PHYS(tv_); IF(0x0C087BE4u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C087C50u: goto L_0C087C50; case 0x0C087E00u: goto L_0C087E00; case 0x0C087F10u: goto L_0C087F10; case 0x0C087F40u: goto L_0C087F40; case 0x0C0880E0u: goto L_0C0880E0; default: JUMPD(tv_); } }  /* 0C087BE2 braf Rn */
L_0C087C50: BLKS(0x0C087C50u);
	r9 = 0xB4u; UPD(0x0C087C52u, 1);  /* 0C087C50 mov.w @(disp,pc),Rn */
	r5 = 0x6u;  /* 0C087C52 mov #imm,Rn */
	IF(0x0C087C54u); MACL = r12 * r9;  /* 0C087C54 mul.l Rm,Rn */
	r8 = 0xC286578u; UPD(0x0C087C58u, 4);  /* 0C087C56 mov.l @(disp,pc),Rn */
	r3 = 0x99u; UPD(0x0C087C5Au, 1);  /* 0C087C58 mov.w @(disp,pc),Rn */
	IF(0x0C087C5Au); r0 = MACL;  /* 0C087C5A sts macl,Rn */
	r0 += r8;  /* 0C087C5C add Rm,Rn */
	IF(0x0C087C5Eu); r7 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C087C60u, 3);  /* 0C087C5E mov.b @(r0,Rm),Rn */
	r7 += 0x1u;  /* 0C087C60 add #imm,Rn */
	r6 = r7 & 0xFF;  /* 0C087C62 extu.b Rm,Rn */
	T = r6 > r5;  /* 0C087C64 cmp/hi Rm,Rn */
	{ u32 c_ = !T; IF(0x0C087C68u); W8(r0 + r3, r7); /* slot mov.b Rm,@(r0,Rn) */ if (c_) { UPD(0x0C087CD0u, 6); goto L_0C087CD0; } UPD(0x0C087C6Au, 1); goto L_0C087C6A; }  /* 0C087C66 bf/s */
L_0C087C6A: BLKS(0x0C087C6Au);
	r11 = 0x0u;  /* 0C087C6A mov #imm,Rn */
	IF(0x0C087C6Cu); W8(r0 + r3, r11); UPD(0x0C087C6Eu, 2);  /* 0C087C6C mov.b Rm,@(r0,Rn) */
	r10 = 0x0u;  /* 0C087C6E mov #imm,Rn */
	W32(r14, r10); UPD(0x0C087C72u, 2);  /* 0C087C70 mov.l Rm,@Rn */
	r9 = r0;  /* 0C087C72 mov Rm,Rn */
	r13 = 0xA9u; UPD(0x0C087C76u, 2);  /* 0C087C74 mov.w @(disp,pc),Rn */
	r10 = 0x0u;  /* 0C087C76 mov #imm,Rn */
	r13 += r0;  /* 0C087C78 add Rm,Rn */
	IF(0x0C087C7Au); ;  /* 0C087C7A nop */
	UPD(0x0C087C7Cu, 3);
L_0C087C7C: BLKS(0x0C087C7Cu);
	r5 = 0xC19A398u; UPD(0x0C087C7Eu, 1);  /* 0C087C7C mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFECu;  /* 0C087C7E add #imm,Rn */
	r5 += r10;  /* 0C087C80 add Rm,Rn */
	r8 = R32(r5); UPD(0x0C087C84u, 3);  /* 0C087C82 mov.l @Rm,Rn */
	r10 += 0x8u;  /* 0C087C84 add #imm,Rn */
	r11 = R32(r9 + 0x24u); UPD(0x0C087C88u, 2);  /* 0C087C86 mov.l @(disp,Rm),Rn */
	r0 = 0xB0u; UPD(0x0C087C8Au, 1);  /* 0C087C88 mov.w @(disp,pc),Rn */
	r11 += r8;  /* 0C087C8A add Rm,Rn */
	IF(0x0C087C8Cu); r3 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C087C8Eu, 2);  /* 0C087C8C mov.b @(r0,Rm),Rn */
	r4 = R32(r5 + 0x4u); UPD(0x0C087C90u, 1);  /* 0C087C8E mov.l @(disp,Rm),Rn */
	r2 = r3 & 0xFF;  /* 0C087C90 extu.b Rm,Rn */
	r8 = R32(r9 + 0x28u); UPD(0x0C087C94u, 2);  /* 0C087C92 mov.l @(disp,Rm),Rn */
	W32(r15, r2); UPD(0x0C087C96u, 1);  /* 0C087C94 mov.l Rm,@Rn */
	r8 += r4;  /* 0C087C96 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r13); UPD(0x0C087C9Au, 2);  /* 0C087C98 mov.b @Rm,Rn */
	r7 = r0 & 0xFF;  /* 0C087C9A extu.b Rm,Rn */
	r0 = 0xC062780u; UPD(0x0C087C9Eu, 2);  /* 0C087C9C mov.l @(disp,pc),Rn */
	r7 += 0xFFFFFFFFu;  /* 0C087C9E add #imm,Rn */
	r4 = 0x2000u; UPD(0x0C087CA2u, 2);  /* 0C087CA0 mov.w @(disp,pc),Rn */
	IF(0x0C087CA2u); { u32 t_ = r0; PR = 0x0C087CA6u; W32(r15 + 0x4u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C087CA6u); }  /* 0C087CA2 jsr @Rn */
L_0C087CA6: BLKS(0x0C087CA6u);
	r4 = 0x808080u; UPD(0x0C087CA8u, 1);  /* 0C087CA6 mov.l @(disp,pc),Rn */
	r7 = r8;  /* 0C087CA8 mov Rm,Rn */
	r6 = 0u - r0;  /* 0C087CAA neg Rm,Rn */
	r5 = 0x0u;  /* 0C087CAC mov #imm,Rn */
	r8 = 0xC0BEEF0u; UPD(0x0C087CB0u, 4);  /* 0C087CAE mov.l @(disp,pc),Rn */
	W32(r15 + 0x8u, r6); UPD(0x0C087CB2u, 1);  /* 0C087CB0 mov.l Rm,@(disp,Rn) */
	W32(r15 + 0xCu, r5); UPD(0x0C087CB4u, 1);  /* 0C087CB2 mov.l Rm,@(disp,Rn) */
	r6 = r11;  /* 0C087CB4 mov Rm,Rn */
	W32(r15 + 0x10u, r4); UPD(0x0C087CB8u, 2);  /* 0C087CB6 mov.l Rm,@(disp,Rn) */
	r5 = 0x8u;  /* 0C087CB8 mov #imm,Rn */
	IF(0x0C087CBAu); { u32 t_ = r8; PR = 0x0C087CBEu; r4 = R32(r9); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BEEF0, 0x0C0BEEF0u, 0x0C087CBEu); }  /* 0C087CBA jsr @Rn */
L_0C087CBE: BLKS(0x0C087CBEu);
	r3 = R32(r14); UPD(0x0C087CC0u, 1);  /* 0C087CBE mov.l @Rm,Rn */
	r0 = 0x5u;  /* 0C087CC0 mov #imm,Rn */
	r3 += 0x1u;  /* 0C087CC2 add #imm,Rn */
	r2 = (u32)(s32)(s16)r3;  /* 0C087CC4 exts.w Rm,Rn */
	W32(r14, r2); UPD(0x0C087CC8u, 4);  /* 0C087CC6 mov.l Rm,@Rn */
	r1 = R32(r14); UPD(0x0C087CCAu, 1);  /* 0C087CC8 mov.l @Rm,Rn */
	T = (s32)r1 > (s32)r0;  /* 0C087CCA cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x14u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C087C7Cu, 4); goto L_0C087C7C; } UPD(0x0C087CD0u, 1); goto L_0C087CD0; }  /* 0C087CCC bf/s */
L_0C087CD0: BLKS(0x0C087CD0u);
	r7 = 0xB4u; UPD(0x0C087CD2u, 1);  /* 0C087CD0 mov.w @(disp,pc),Rn */
	IF(0x0C087CD2u); MACL = r12 * r7;  /* 0C087CD2 mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C087CD6u, 3);  /* 0C087CD4 mov.l @(disp,pc),Rn */
	IF(0x0C087CD6u); r8 = MACL;  /* 0C087CD6 sts macl,Rn */
	r8 += r6;  /* 0C087CD8 add Rm,Rn */
	r11 = 0xA5u; UPD(0x0C087CDCu, 3);  /* 0C087CDA mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C087CDC mov Rm,Rn */
	IF(0x0C087CDEu); r10 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C087CE0u, 2);  /* 0C087CDE mov.b @(r0,Rm),Rn */
	r0 = r10;  /* 0C087CE0 mov Rm,Rn */
	T = (r0 & 0x9u) == 0;  /* 0C087CE2 tst #imm,r0 */
	IF(0x0C087CE4u); r13 = T;  /* 0C087CE4 movt Rn */
	T = (r0 & 0x6u) == 0;  /* 0C087CE6 tst #imm,r0 */
	IF(0x0C087CE8u); r9 = T;  /* 0C087CE8 movt Rn */
	r13 |= r9;  /* 0C087CEA or Rm,Rn */
	T = (r13 & r13) == 0;  /* 0C087CEC tst Rm,Rn */
	if (!T) { UPD(0x0C087D90u, 10); goto L_0C087D90; }  /* 0C087CEE bf */
L_0C087CF0: BLKS(0x0C087CF0u);
	r13 = 0xC0A9DE0u; UPD(0x0C087CF2u, 1);  /* 0C087CF0 mov.l @(disp,pc),Rn */
	IF(0x0C087CF2u); { u32 t_ = r13; PR = 0x0C087CF6u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9DE0, 0x0C0A9DE0u, 0x0C087CF6u); }  /* 0C087CF2 jsr @Rn */
L_0C087CF6: BLKS(0x0C087CF6u);
	T = (r0 & r0) == 0;  /* 0C087CF6 tst Rm,Rn */
	if (!T) { UPD(0x0C087D10u, 4); goto L_0C087D10; }  /* 0C087CF8 bf */
L_0C087CFA: BLKS(0x0C087CFAu);
	r14 += 0x8u;  /* 0C087CFA add #imm,Rn */
	UPD(0x0C087CFCu, 1);
L_0C087CFC: BLKS(0x0C087CFCu);
	r15 = r14;  /* 0C087CFC mov Rm,Rn */
	IF(0x0C087CFEu); PR = R32(r15); r15 += 4; UPD(0x0C087D00u, 2);  /* 0C087CFE lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C087D02u, 1);  /* 0C087D00 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C087D04u, 1);  /* 0C087D02 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C087D06u, 1);  /* 0C087D04 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C087D08u, 1);  /* 0C087D06 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C087D0Au, 1);  /* 0C087D08 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C087D0Cu, 1);  /* 0C087D0A mov.l @Rm+,Rn */
	IF(0x0C087D0Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C087D0C rts */
L_0C087D10: BLKS(0x0C087D10u);
	r0 = 0xC0877C0u; UPD(0x0C087D12u, 1);  /* 0C087D10 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C087D12 mov Rm,Rn */
	IF(0x0C087D14u); { u32 t_ = r0; PR = 0x0C087D18u; r12 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0877C0, 0x0C0877C0u, 0x0C087D18u); }  /* 0C087D14 jsr @Rn */
L_0C087D18: BLKS(0x0C087D18u);
	W32(r14, r12); UPD(0x0C087D1Au, 1);  /* 0C087D18 mov.l Rm,@Rn */
	r9 = r8;  /* 0C087D1A mov Rm,Rn */
	r12 = 0xC19A38Cu; UPD(0x0C087D1Eu, 2);  /* 0C087D1C mov.l @(disp,pc),Rn */
	r10 = 0x48000u; UPD(0x0C087D20u, 1);  /* 0C087D1E mov.l @(disp,pc),Rn */
	r11 = 0xC07CD80u; UPD(0x0C087D22u, 1);  /* 0C087D20 mov.l @(disp,pc),Rn */
	IF(0x0C087D22u); ;  /* 0C087D22 nop */
	UPD(0x0C087D24u, 1);
L_0C087D24: BLKS(0x0C087D24u);
	r4 = R32(r9 + 0x28u); UPD(0x0C087D26u, 1);  /* 0C087D24 mov.l @(disp,Rm),Rn */
	r0 = 0xFFFFFFFAu;  /* 0C087D26 mov #imm,Rn */
	r1 = (r4 >> 16) | (r4 << 16);  /* 0C087D28 swap.w Rm,Rn */
	r2 = 0xFFFFFEA0u; UPD(0x0C087D2Cu, 3);  /* 0C087D2A mov.w @(disp,pc),Rn */
	r13 = (u32)(s32)(s16)r1;  /* 0C087D2C exts.w Rm,Rn */
	r13 += r2;  /* 0C087D2E add Rm,Rn */
	IF(0x0C087D30u); ARG0(0x4D0Cu); { s32 s_ = (s32)r0; if (s_ >= 0) r13 <<= (s_ & 31); else if ((s_ & 31) == 0) r13 = (u32)((s32)r13 >> 31); else r13 = (u32)((s32)r13 >> ((~s_ & 31) + 1)); }  /* 0C087D30 shad Rm,Rn */
	r0 = 0xC062780u; UPD(0x0C087D34u, 4);  /* 0C087D32 mov.l @(disp,pc),Rn */
	r13 += r13;  /* 0C087D34 add Rm,Rn */
	r13 += r12;  /* 0C087D36 add Rm,Rn */
	IF(0x0C087D38u); { u32 t_ = r0; PR = 0x0C087D3Cu; r4 = 0x40u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C087D3Cu); }  /* 0C087D38 jsr @Rn */
L_0C087D3C: BLKS(0x0C087D3Cu);
	r3 = (u32)(s32)(s16)R16(r13); UPD(0x0C087D3Eu, 1);  /* 0C087D3C mov.w @Rm,Rn */
	r5 = r10;  /* 0C087D3E mov Rm,Rn */
	r8 = 0xC069B20u; UPD(0x0C087D42u, 2);  /* 0C087D40 mov.l @(disp,pc),Rn */
	r0 += r3;  /* 0C087D42 add Rm,Rn */
	r13 = (u32)(s32)(s16)r0;  /* 0C087D44 exts.w Rm,Rn */
	IF(0x0C087D46u); { u32 t_ = r8; PR = 0x0C087D4Au; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C087D4Au); }  /* 0C087D46 jsr @Rn */
L_0C087D4A: BLKS(0x0C087D4Au);
	r4 = r13;  /* 0C087D4A mov Rm,Rn */
	r13 = 0xC069AF0u; UPD(0x0C087D4Eu, 2);  /* 0C087D4C mov.l @(disp,pc),Rn */
	r8 = r0;  /* 0C087D4E mov Rm,Rn */
	IF(0x0C087D50u); { u32 t_ = r13; PR = 0x0C087D54u; r5 = r10; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C087D54u); }  /* 0C087D50 jsr @Rn */
L_0C087D54: BLKS(0x0C087D54u);
	r5 = r0;  /* 0C087D54 mov Rm,Rn */
	r7 = 0xA9u; UPD(0x0C087D58u, 2);  /* 0C087D56 mov.w @(disp,pc),Rn */
	r0 = r9;  /* 0C087D58 mov Rm,Rn */
	IF(0x0C087D5Au); r6 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C087D5Cu, 2);  /* 0C087D5A mov.b @(r0,Rm),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C087D5C add #imm,Rn */
	W32(r15, r8); UPD(0x0C087D60u, 2);  /* 0C087D5E mov.l Rm,@Rn */
	r7 = r6 & 0xFF;  /* 0C087D60 extu.b Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C087D64u, 2);  /* 0C087D62 mov.l Rm,@(disp,Rn) */
	r4 = 0x3u;  /* 0C087D64 mov #imm,Rn */
	r5 = R32(r9 + 0x24u); UPD(0x0C087D68u, 2);  /* 0C087D66 mov.l @(disp,Rm),Rn */
	IF(0x0C087D68u); { u32 t_ = r11; PR = 0x0C087D6Cu; r6 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07CD80, 0x0C07CD80u, 0x0C087D6Cu); }  /* 0C087D68 jsr @Rn */
L_0C087D6C: BLKS(0x0C087D6Cu);
	r4 = R32(r14); UPD(0x0C087D6Eu, 1);  /* 0C087D6C mov.l @Rm,Rn */
	r3 = 0x9u;  /* 0C087D6E mov #imm,Rn */
	r4 += 0x1u;  /* 0C087D70 add #imm,Rn */
	r2 = (u32)(s32)(s16)r4;  /* 0C087D72 exts.w Rm,Rn */
	W32(r14, r2); UPD(0x0C087D76u, 4);  /* 0C087D74 mov.l Rm,@Rn */
	r1 = R32(r14); UPD(0x0C087D78u, 1);  /* 0C087D76 mov.l @Rm,Rn */
	T = (s32)r1 > (s32)r3;  /* 0C087D78 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x8u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C087D24u, 4); goto L_0C087D24; } UPD(0x0C087D7Eu, 1); goto L_0C087D7E; }  /* 0C087D7A bf/s */
L_0C087D7E: BLKS(0x0C087D7Eu);
	{ r14 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C087CFCu, 3); goto L_0C087CFC; }  /* 0C087D7E bra */
L_0C087D90: BLKS(0x0C087D90u);
	r8 = 0xC0A9CB0u; UPD(0x0C087D92u, 1);  /* 0C087D90 mov.l @(disp,pc),Rn */
	IF(0x0C087D92u); { u32 t_ = r8; PR = 0x0C087D96u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9CB0, 0x0C0A9CB0u, 0x0C087D96u); }  /* 0C087D92 jsr @Rn */
L_0C087D96: BLKS(0x0C087D96u);
	r1 = 0xC0A9B40u; UPD(0x0C087D98u, 1);  /* 0C087D96 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C087D98 mov Rm,Rn */
	UPD(0x0C087D9Au, 1);
L_0C087D9A: BLKS(0x0C087D9Au);
	r14 += 0x8u;  /* 0C087D9A add #imm,Rn */
	r15 = r14;  /* 0C087D9C mov Rm,Rn */
	IF(0x0C087D9Eu); PR = R32(r15); r15 += 4; UPD(0x0C087DA0u, 3);  /* 0C087D9E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C087DA2u, 1);  /* 0C087DA0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C087DA4u, 1);  /* 0C087DA2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C087DA6u, 1);  /* 0C087DA4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C087DA8u, 1);  /* 0C087DA6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C087DAAu, 1);  /* 0C087DA8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C087DACu, 1);  /* 0C087DAA mov.l @Rm+,Rn */
	IF(0x0C087DACu); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0877C0u: TAIL(blk_f_0C0877C0); case 0x0C0A9B40u: TAIL(blk_f_0C0A9B40); default: JUMPD(tv_); } }  /* 0C087DAC jmp @Rn */
L_0C087E00: BLKS(0x0C087E00u);
	r9 = 0xC0A8B50u; UPD(0x0C087E02u, 1);  /* 0C087E00 mov.l @(disp,pc),Rn */
	IF(0x0C087E02u); { u32 t_ = r9; PR = 0x0C087E06u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C087E06u); }  /* 0C087E02 jsr @Rn */
L_0C087E06: BLKS(0x0C087E06u);
	IF(0x0C087E06u); T = (s32)r0 >= 0;  /* 0C087E06 cmp/pz Rn */
	{ u32 c_ = T; r9 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C087E10u, 4); goto L_0C087E10; } goto L_0C087E0C; }  /* 0C087E08 bt/s */
L_0C087E0C: BLKS(0x0C087E0Cu);
	{ IF(0x0C087E0Eu); ; /* slot nop */ UPD(0x0C087F00u, 4); goto L_0C087F00; }  /* 0C087E0C bra */
L_0C087E10: BLKS(0x0C087E10u);
	r4 = 0xB4u; UPD(0x0C087E12u, 1);  /* 0C087E10 mov.w @(disp,pc),Rn */
	IF(0x0C087E12u); MACL = r12 * r4;  /* 0C087E12 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C087E16u, 3);  /* 0C087E14 mov.l @(disp,pc),Rn */
	IF(0x0C087E16u); r8 = MACL;  /* 0C087E16 sts macl,Rn */
	r8 += r0;  /* 0C087E18 add Rm,Rn */
	r13 = R32(r8); UPD(0x0C087E1Cu, 3);  /* 0C087E1A mov.l @Rm,Rn */
	IF(0x0C087E1Cu); MACL = r9 * r4;  /* 0C087E1C mul.l Rm,Rn */
	r2 = 0xFCFFFFFFu; UPD(0x0C087E20u, 3);  /* 0C087E1E mov.l @(disp,pc),Rn */
	r13 &= r2;  /* 0C087E20 and Rm,Rn */
	W32(r8, r13); UPD(0x0C087E24u, 2);  /* 0C087E22 mov.l Rm,@Rn */
	IF(0x0C087E24u); r9 = MACL;  /* 0C087E24 sts macl,Rn */
	r9 += r0;  /* 0C087E26 add Rm,Rn */
	r7 = R32(r9); UPD(0x0C087E2Au, 3);  /* 0C087E28 mov.l @Rm,Rn */
	r3 = 0x3000000u; UPD(0x0C087E2Cu, 1);  /* 0C087E2A mov.l @(disp,pc),Rn */
	r5 = R32(r9 + 0x24u); UPD(0x0C087E2Eu, 1);  /* 0C087E2C mov.l @(disp,Rm),Rn */
	r7 &= r3;  /* 0C087E2E and Rm,Rn */
	r10 = R32(r9 + 0x28u); UPD(0x0C087E32u, 2);  /* 0C087E30 mov.l @(disp,Rm),Rn */
	r13 |= r7;  /* 0C087E32 or Rm,Rn */
	r6 = R32(r8 + 0x2Cu); UPD(0x0C087E36u, 2);  /* 0C087E34 mov.l @(disp,Rm),Rn */
	r11 = R32(r8 + 0x30u); UPD(0x0C087E38u, 1);  /* 0C087E36 mov.l @(disp,Rm),Rn */
	r5 += r6;  /* 0C087E38 add Rm,Rn */
	r10 += r11;  /* 0C087E3A add Rm,Rn */
	r0 = R32(r8 + 0xCu); UPD(0x0C087E3Eu, 3);  /* 0C087E3C mov.l @(disp,Rm),Rn */
	W32(r8, r13); UPD(0x0C087E40u, 1);  /* 0C087E3E mov.l Rm,@Rn */
	T = r0 == 0x4u;  /* 0C087E40 cmp/eq #imm,r0 */
	W32(r8 + 0x24u, r5); UPD(0x0C087E44u, 2);  /* 0C087E42 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = T; W32(r8 + 0x28u, r10); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C087D7Eu, 3); goto L_0C087D7E; } UPD(0x0C087E48u, 1); goto L_0C087E48; }  /* 0C087E44 bt/s */
L_0C087E48: BLKS(0x0C087E48u);
	r13 = 0x86u; UPD(0x0C087E4Au, 1);  /* 0C087E48 mov.w @(disp,pc),Rn */
	r11 = 0x3u;  /* 0C087E4A mov #imm,Rn */
	r13 += r9;  /* 0C087E4C add Rm,Rn */
	r9 += 0x50u;  /* 0C087E4E add #imm,Rn */
	r4 = (u32)(s32)(s16)R16(r9); UPD(0x0C087E52u, 4);  /* 0C087E50 mov.w @Rm,Rn */
	r3 = 0xFFFFFFFFu;  /* 0C087E52 mov #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r13); UPD(0x0C087E56u, 2);  /* 0C087E54 mov.w @Rm,Rn */
	r4 &= r11;  /* 0C087E56 and Rm,Rn */
	r2 = 0x200u; UPD(0x0C087E5Au, 2);  /* 0C087E58 mov.w @(disp,pc),Rn */
	r9 += 0xFFFFFFB0u;  /* 0C087E5A add #imm,Rn */
	r7 = 0xA4u; UPD(0x0C087E5Eu, 2);  /* 0C087E5C mov.w @(disp,pc),Rn */
	r0 += r2;  /* 0C087E5E add Rm,Rn */
	r7 += r8;  /* 0C087E60 add Rm,Rn */
	IF(0x0C087E62u); r0 >>= 8;  /* 0C087E62 shlr8 Rn */
	r11 = r7;  /* 0C087E64 mov Rm,Rn */
	IF(0x0C087E66u); r0 >>= 2;  /* 0C087E66 shlr2 Rn */
	r11 += 0x1u;  /* 0C087E68 add #imm,Rn */
	r10 = (u32)(s32)(s8)R8(r11); UPD(0x0C087E6Cu, 7);  /* 0C087E6A mov.b @Rm,Rn */
	r0 &= 0x1Fu;  /* 0C087E6C and #imm,r0 */
	r0 += 0x2u;  /* 0C087E6E add #imm,Rn */
	T = r10 == r0;  /* 0C087E70 cmp/eq Rm,Rn */
	r10 = r7;  /* 0C087E72 mov Rm,Rn */
	r10 += 0x2u;  /* 0C087E74 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r10); UPD(0x0C087E78u, 6);  /* 0C087E76 mov.b @Rm,Rn */
	{ u32 t_ = 0u - r3, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r5 = r_; }  /* 0C087E78 negc Rm,Rn */
	T = r1 == r4;  /* 0C087E7A cmp/eq Rm,Rn */
	{ u32 t_ = 0u - r3, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r6 = r_; }  /* 0C087E7C negc Rm,Rn */
	r5 |= r6;  /* 0C087E7E or Rm,Rn */
	W32(r8 + 0x8u, r0); UPD(0x0C087E82u, 5);  /* 0C087E80 mov.l Rm,@(disp,Rn) */
	T = (r5 & r5) == 0;  /* 0C087E82 tst Rm,Rn */
	{ u32 c_ = T; W32(r8 + 0xCu, r4); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C087EF2u, 4); goto L_0C087EF2; } UPD(0x0C087E88u, 1); goto L_0C087E88; }  /* 0C087E84 bt/s */
L_0C087E88: BLKS(0x0C087E88u);
	r6 = 0xC0A8B10u; UPD(0x0C087E8Au, 1);  /* 0C087E88 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C087E8A mov Rm,Rn */
	IF(0x0C087E8Cu); { u32 t_ = r6; PR = 0x0C087E90u; r8 += 0xBu; /* slot add #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8B10, 0x0C0A8B10u, 0x0C087E90u); }  /* 0C087E8C jsr @Rn */
L_0C087E90: BLKS(0x0C087E90u);
	r5 = (u32)(s32)(s8)R8(r8); UPD(0x0C087E92u, 1);  /* 0C087E90 mov.b @Rm,Rn */
	r8 += 0x4u;  /* 0C087E92 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r8); UPD(0x0C087E96u, 2);  /* 0C087E94 mov.b @Rm,Rn */
	r8 += 0xFFFFFFF1u;  /* 0C087E96 add #imm,Rn */
	r12 = R32(r8 + 0xCu); UPD(0x0C087E9Au, 2);  /* 0C087E98 mov.l @(disp,Rm),Rn */
	W8(r11, r5); UPD(0x0C087E9Cu, 1);  /* 0C087E9A mov.b Rm,@Rn */
	T = (r12 & r12) == 0;  /* 0C087E9C tst Rm,Rn */
	{ u32 c_ = !T; W8(r10, r0); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C087EF2u, 4); goto L_0C087EF2; } UPD(0x0C087EA2u, 1); goto L_0C087EA2; }  /* 0C087E9E bf/s */
L_0C087EA2: BLKS(0x0C087EA2u);
	r0 = 0x8Cu; UPD(0x0C087EA4u, 1);  /* 0C087EA2 mov.w @(disp,pc),Rn */
	r4 = 0xFFFFFFFAu;  /* 0C087EA4 mov #imm,Rn */
	r13 = (u32)(s32)(s16)R16(r13); UPD(0x0C087EA8u, 2);  /* 0C087EA6 mov.w @Rm,Rn */
	IF(0x0C087EA8u); r3 = R32(r0 + r9); UPD(0x0C087EAAu, 1);  /* 0C087EA8 mov.l @(r0,Rm),Rn */
	IF(0x0C087EAAu); T = (s32)r3 > 0;  /* 0C087EAA cmp/pl Rn */
	{ u32 c_ = !T; IF(0x0C087EAEu); ARG0(0x4D4Cu); { s32 s_ = (s32)r4; if (s_ >= 0) r13 <<= (s_ & 31); else if ((s_ & 31) == 0) r13 = (u32)((s32)r13 >> 31); else r13 = (u32)((s32)r13 >> ((~s_ & 31) + 1)); } /* slot shad Rm,Rn */ if (c_) { UPD(0x0C087EB6u, 4); goto L_0C087EB6; } goto L_0C087EB0; }  /* 0C087EAC bf/s */
L_0C087EB0: BLKS(0x0C087EB0u);
	r9 = 0x100u; UPD(0x0C087EB2u, 2);  /* 0C087EB0 mov.w @(disp,pc),Rn */
	r9 += r13;  /* 0C087EB2 add Rm,Rn */
	r13 = (u32)(s32)(s16)r9;  /* 0C087EB4 exts.w Rm,Rn */
	UPD(0x0C087EB6u, 2);
L_0C087EB6: BLKS(0x0C087EB6u);
	r10 = 0xC069B20u; UPD(0x0C087EB8u, 1);  /* 0C087EB6 mov.l @(disp,pc),Rn */
	r5 = 0x99999u; UPD(0x0C087EBAu, 1);  /* 0C087EB8 mov.l @(disp,pc),Rn */
	IF(0x0C087EBAu); { u32 t_ = r10; PR = 0x0C087EBEu; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C087EBEu); }  /* 0C087EBA jsr @Rn */
L_0C087EBE: BLKS(0x0C087EBEu);
	r9 = 0xC069AF0u; UPD(0x0C087EC0u, 1);  /* 0C087EBE mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C087EC0 mov Rm,Rn */
	r10 = R32(r8 + 0x24u); UPD(0x0C087EC4u, 2);  /* 0C087EC2 mov.l @(disp,Rm),Rn */
	r11 = 0x3u;  /* 0C087EC4 mov #imm,Rn */
	r5 = 0xC0000u; UPD(0x0C087EC8u, 2);  /* 0C087EC6 mov.l @(disp,pc),Rn */
	IF(0x0C087EC8u); { u32 t_ = r9; PR = 0x0C087ECCu; r10 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C087ECCu); }  /* 0C087EC8 jsr @Rn */
L_0C087ECC: BLKS(0x0C087ECCu);
	r6 = R32(r8 + 0x28u); UPD(0x0C087ECEu, 1);  /* 0C087ECC mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFF0u;  /* 0C087ECE add #imm,Rn */
	r6 += r0;  /* 0C087ED0 add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C087ED4u, 3);  /* 0C087ED2 mov.w @(disp,pc),Rn */
	r5 = r10;  /* 0C087ED4 mov Rm,Rn */
	IF(0x0C087ED6u); r1 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C087ED8u, 2);  /* 0C087ED6 mov.b @(r0,Rm),Rn */
	r0 += 0xFFFFFFF9u;  /* 0C087ED8 add #imm,Rn */
	IF(0x0C087EDAu); r12 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C087EDCu, 2);  /* 0C087EDA mov.b @(r0,Rm),Rn */
	W32(r15 + 0x4u, r11); UPD(0x0C087EDEu, 1);  /* 0C087EDC mov.l Rm,@(disp,Rn) */
	r2 = r12 & 0xFF;  /* 0C087EDE extu.b Rm,Rn */
	r11 += 0x7Du;  /* 0C087EE0 add #imm,Rn */
	W32(r15, r2); UPD(0x0C087EE4u, 3);  /* 0C087EE2 mov.l Rm,@Rn */
	W32(r15 + 0x8u, r13); UPD(0x0C087EE6u, 1);  /* 0C087EE4 mov.l Rm,@(disp,Rn) */
	W32(r15 + 0xCu, r11); UPD(0x0C087EE8u, 1);  /* 0C087EE6 mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C087EEAu, 1);  /* 0C087EE8 mov.l @Rm,Rn */
	r8 = 0xC0BCE80u; UPD(0x0C087EECu, 1);  /* 0C087EEA mov.l @(disp,pc),Rn */
	IF(0x0C087EECu); { u32 t_ = r8; PR = 0x0C087EF0u; r7 = r1 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BCE80, 0x0C0BCE80u, 0x0C087EF0u); }  /* 0C087EEC jsr @Rn */
L_0C087EF0: BLKS(0x0C087EF0u);
	r15 += 0x10u;  /* 0C087EF0 add #imm,Rn */
	UPD(0x0C087EF2u, 1);
L_0C087EF2: BLKS(0x0C087EF2u);
	{ r14 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C087CFCu, 3); goto L_0C087CFC; }  /* 0C087EF2 bra */
L_0C087F00: BLKS(0x0C087F00u);
	r1 = 0xC0877C0u; UPD(0x0C087F02u, 1);  /* 0C087F00 mov.l @(disp,pc),Rn */
	{ r4 = r12; /* slot mov Rm,Rn */ UPD(0x0C087D9Au, 3); goto L_0C087D9A; }  /* 0C087F02 bra */
L_0C087F10: BLKS(0x0C087F10u);
	r13 = 0xC0A8B50u; UPD(0x0C087F12u, 1);  /* 0C087F10 mov.l @(disp,pc),Rn */
	IF(0x0C087F12u); { u32 t_ = r13; PR = 0x0C087F16u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C087F16u); }  /* 0C087F12 jsr @Rn */
L_0C087F16: BLKS(0x0C087F16u);
	IF(0x0C087F16u); T = (s32)r0 >= 0;  /* 0C087F16 cmp/pz Rn */
	{ u32 c_ = !T; r9 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C087F00u, 4); goto L_0C087F00; } goto L_0C087F1C; }  /* 0C087F18 bf/s */
L_0C087F1C: BLKS(0x0C087F1Cu);
	r11 = 0xB4u; UPD(0x0C087F1Eu, 2);  /* 0C087F1C mov.w @(disp,pc),Rn */
	IF(0x0C087F1Eu); MACL = r12 * r11;  /* 0C087F1E mul.l Rm,Rn */
	r8 = 0xC286578u; UPD(0x0C087F22u, 3);  /* 0C087F20 mov.l @(disp,pc),Rn */
	IF(0x0C087F22u); r0 = MACL;  /* 0C087F22 sts macl,Rn */
	IF(0x0C087F24u); MACL = r9 * r11;  /* 0C087F24 mul.l Rm,Rn */
	r0 += r8;  /* 0C087F26 add Rm,Rn */
	r4 = R32(r0 + 0x2Cu); UPD(0x0C087F2Au, 5);  /* 0C087F28 mov.l @(disp,Rm),Rn */
	IF(0x0C087F2Au); r6 = MACL;  /* 0C087F2A sts macl,Rn */
	r6 += r8;  /* 0C087F2C add Rm,Rn */
	r3 = R32(r6 + 0x24u); UPD(0x0C087F30u, 3);  /* 0C087F2E mov.l @(disp,Rm),Rn */
	r7 = R32(r6 + 0x28u); UPD(0x0C087F32u, 1);  /* 0C087F30 mov.l @(disp,Rm),Rn */
	r3 += r4;  /* 0C087F32 add Rm,Rn */
	r5 = R32(r0 + 0x30u); UPD(0x0C087F36u, 2);  /* 0C087F34 mov.l @(disp,Rm),Rn */
	r7 += r5;  /* 0C087F36 add Rm,Rn */
	W32(r0 + 0x24u, r3); UPD(0x0C087F3Au, 2);  /* 0C087F38 mov.l Rm,@(disp,Rn) */
	W32(r0 + 0x28u, r7); UPD(0x0C087F3Cu, 1);  /* 0C087F3A mov.l Rm,@(disp,Rn) */
L_0C087F3C: BLKS(0x0C087F3Cu);
	{ r14 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C087CFCu, 3); goto L_0C087CFC; }  /* 0C087F3C bra */
L_0C087F40: BLKS(0x0C087F40u);
	r9 = 0xC0A8B50u; UPD(0x0C087F42u, 1);  /* 0C087F40 mov.l @(disp,pc),Rn */
	IF(0x0C087F42u); { u32 t_ = r9; PR = 0x0C087F46u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C087F46u); }  /* 0C087F42 jsr @Rn */
L_0C087F46: BLKS(0x0C087F46u);
	IF(0x0C087F46u); T = (s32)r0 >= 0;  /* 0C087F46 cmp/pz Rn */
	if (!T) { UPD(0x0C087F00u, 4); goto L_0C087F00; }  /* 0C087F48 bf */
L_0C087F4A: BLKS(0x0C087F4Au);
	r11 = 0xB4u; UPD(0x0C087F4Cu, 1);  /* 0C087F4A mov.w @(disp,pc),Rn */
	IF(0x0C087F4Cu); MACL = r12 * r11;  /* 0C087F4C mul.l Rm,Rn */
	r4 = 0xC286578u; UPD(0x0C087F50u, 3);  /* 0C087F4E mov.l @(disp,pc),Rn */
	IF(0x0C087F50u); r8 = MACL;  /* 0C087F50 sts macl,Rn */
	IF(0x0C087F52u); MACL = r0 * r11;  /* 0C087F52 mul.l Rm,Rn */
	r8 += r4;  /* 0C087F54 add Rm,Rn */
	r10 = R32(r8); UPD(0x0C087F58u, 5);  /* 0C087F56 mov.l @Rm,Rn */
	IF(0x0C087F58u); r9 = MACL;  /* 0C087F58 sts macl,Rn */
	r0 = 0xFFFFFEFFu; UPD(0x0C087F5Cu, 2);  /* 0C087F5A mov.w @(disp,pc),Rn */
	r9 += r4;  /* 0C087F5C add Rm,Rn */
	r10 &= r0;  /* 0C087F5E and Rm,Rn */
	W32(r8, r10); UPD(0x0C087F62u, 3);  /* 0C087F60 mov.l Rm,@Rn */
	r4 = r12;  /* 0C087F62 mov Rm,Rn */
	r7 = R32(r9 + 0x28u); UPD(0x0C087F66u, 2);  /* 0C087F64 mov.l @(disp,Rm),Rn */
	r13 = R32(r9); UPD(0x0C087F68u, 1);  /* 0C087F66 mov.l @Rm,Rn */
	r0 = R32(r8 + 0xCu); UPD(0x0C087F6Au, 1);  /* 0C087F68 mov.l @(disp,Rm),Rn */
	r5 = R32(r8 + 0x30u); UPD(0x0C087F6Cu, 1);  /* 0C087F6A mov.l @(disp,Rm),Rn */
	r0 += 0x1u;  /* 0C087F6C add #imm,Rn */
	r1 = 0x100u; UPD(0x0C087F70u, 2);  /* 0C087F6E mov.w @(disp,pc),Rn */
	r7 += r5;  /* 0C087F70 add Rm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C087F74u, 2);  /* 0C087F72 mov.l @(disp,Rm),Rn */
	r13 &= r1;  /* 0C087F74 and Rm,Rn */
	r3 = R32(r8 + 0x2Cu); UPD(0x0C087F78u, 2);  /* 0C087F76 mov.l @(disp,Rm),Rn */
	r0 &= 0xFu;  /* 0C087F78 and #imm,r0 */
	r2 = 0xC0A8AE0u; UPD(0x0C087F7Cu, 2);  /* 0C087F7A mov.l @(disp,pc),Rn */
	r6 += r3;  /* 0C087F7C add Rm,Rn */
	W32(r8 + 0x28u, r7); UPD(0x0C087F80u, 2);  /* 0C087F7E mov.l Rm,@(disp,Rn) */
	r10 |= r13;  /* 0C087F80 or Rm,Rn */
	W32(r8 + 0xCu, r0); UPD(0x0C087F84u, 2);  /* 0C087F82 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x24u, r6); UPD(0x0C087F86u, 1);  /* 0C087F84 mov.l Rm,@(disp,Rn) */
	IF(0x0C087F86u); { u32 t_ = r2; PR = 0x0C087F8Au; W32(r8, r10); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C087F8Au); }  /* 0C087F86 jsr @Rn */
L_0C087F8A: BLKS(0x0C087F8Au);
	r7 = 0x9Fu; UPD(0x0C087F8Cu, 1);  /* 0C087F8A mov.w @(disp,pc),Rn */
	r7 += r8;  /* 0C087F8C add Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r7); UPD(0x0C087F90u, 2);  /* 0C087F8E mov.b @Rm,Rn */
	r0 = r3 & 0xFF;  /* 0C087F90 extu.b Rm,Rn */
	T = r0 == 0x1u;  /* 0C087F92 cmp/eq #imm,r0 */
	{ u32 c_ = !T; r2 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C087F9Cu, 5); goto L_0C087F9C; } goto L_0C087F98; }  /* 0C087F94 bf/s */
L_0C087F98: BLKS(0x0C087F98u);
	{ IF(0x0C087F9Au); ; /* slot nop */ UPD(0x0C0880C0u, 4); goto L_0C0880C0; }  /* 0C087F98 bra */
L_0C087F9C: BLKS(0x0C087F9Cu);
	T = (s32)r0 > (s32)r2;  /* 0C087F9C cmp/gt Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x2u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C088000u, 4); goto L_0C088000; } goto L_0C087FA2; }  /* 0C087F9E bt/s */
L_0C087FA2: BLKS(0x0C087FA2u);
	T = (r0 & r0) == 0;  /* 0C087FA2 tst Rm,Rn */
	if (!T) { UPD(0x0C087F3Cu, 5); goto L_0C087F3C; }  /* 0C087FA4 bf */
L_0C087FA6: BLKS(0x0C087FA6u);
	r8 = R32(r9); UPD(0x0C087FA8u, 1);  /* 0C087FA6 mov.l @Rm,Rn */
	r12 = 0x2000000u; UPD(0x0C087FAAu, 1);  /* 0C087FA8 mov.l @(disp,pc),Rn */
	T = (r8 & r12) == 0;  /* 0C087FAA tst Rm,Rn */
	if (T) { UPD(0x0C087F3Cu, 4); goto L_0C087F3C; }  /* 0C087FAC bt */
L_0C087FAE: BLKS(0x0C087FAEu);
	r13 = r3;  /* 0C087FAE mov Rm,Rn */
	UPD(0x0C087FB0u, 1);
L_0C087FB0: BLKS(0x0C087FB0u);
	r13 += 0x1u;  /* 0C087FB0 add #imm,Rn */
	W8(r7, r13); UPD(0x0C087FB4u, 2);  /* 0C087FB2 mov.b Rm,@Rn */
L_0C087FB4: BLKS(0x0C087FB4u);
	{ r14 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C087CFCu, 3); goto L_0C087CFC; }  /* 0C087FB4 bra */
L_0C088000: BLKS(0x0C088000u);
	if (!T) { UPD(0x0C087FB4u, 3); goto L_0C087FB4; }  /* 0C088000 bf */
L_0C088002: BLKS(0x0C088002u);
	r4 = r12;  /* 0C088002 mov Rm,Rn */
	r11 = 0xC0BC1B0u; UPD(0x0C088006u, 2);  /* 0C088004 mov.l @(disp,pc),Rn */
	r5 = 0x5Au;  /* 0C088006 mov #imm,Rn */
	IF(0x0C088008u); { u32 t_ = r11; PR = 0x0C08800Cu; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C08800Cu); }  /* 0C088008 jsr @Rn */
L_0C08800C: BLKS(0x0C08800Cu);
	T = (r0 & r0) == 0;  /* 0C08800C tst Rm,Rn */
	if (T) { UPD(0x0C087FB4u, 4); goto L_0C087FB4; }  /* 0C08800E bt */
L_0C088010: BLKS(0x0C088010u);
	r0 = r8;  /* 0C088010 mov Rm,Rn */
	r5 = 0xA9u; UPD(0x0C088014u, 2);  /* 0C088012 mov.w @(disp,pc),Rn */
	r9 = 0xC0BBF10u; UPD(0x0C088016u, 1);  /* 0C088014 mov.l @(disp,pc),Rn */
	IF(0x0C088016u); r7 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C088018u, 1);  /* 0C088016 mov.b @(r0,Rm),Rn */
	r4 = R32(r8 + 0x24u); UPD(0x0C08801Au, 1);  /* 0C088018 mov.l @(disp,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C08801A extu.b Rm,Rn */
	IF(0x0C08801Cu); { u32 t_ = r9; PR = 0x0C088020u; r5 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BBF10, 0x0C0BBF10u, 0x0C088020u); }  /* 0C08801C jsr @Rn */
L_0C088020: BLKS(0x0C088020u);
	T = (r0 & r0) == 0;  /* 0C088020 tst Rm,Rn */
	if (T) { UPD(0x0C087FB4u, 4); goto L_0C087FB4; }  /* 0C088022 bt */
L_0C088024: BLKS(0x0C088024u);
	r13 = 0xC069B50u; UPD(0x0C088026u, 1);  /* 0C088024 mov.l @(disp,pc),Rn */
	r10 = 0xC068E60u; UPD(0x0C088028u, 1);  /* 0C088026 mov.l @(disp,pc),Rn */
	IF(0x0C088028u); { u32 t_ = r13; PR = 0x0C08802Cu; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B50, 0x0C069B50u, 0x0C08802Cu); }  /* 0C088028 jsr @Rn */
L_0C08802C: BLKS(0x0C08802Cu);
	r4 = 0x2A0u; UPD(0x0C08802Eu, 1);  /* 0C08802C mov.w @(disp,pc),Rn */
	r1 = (u32)(s32)(s16)r0;  /* 0C08802E exts.w Rm,Rn */
	IF(0x0C088030u); MACL = r1 * r4;  /* 0C088030 mul.l Rm,Rn */
	r6 = 0xC29D1D8u; UPD(0x0C088034u, 4);  /* 0C088032 mov.l @(disp,pc),Rn */
	IF(0x0C088034u); r3 = MACL;  /* 0C088034 sts macl,Rn */
	r3 += r6;  /* 0C088036 add Rm,Rn */
	r4 = R32(r8 + 0x24u); UPD(0x0C08803Au, 3);  /* 0C088038 mov.l @(disp,Rm),Rn */
	r5 = R32(r8 + 0x28u); UPD(0x0C08803Cu, 1);  /* 0C08803A mov.l @(disp,Rm),Rn */
	r6 = R32(r3 + 0x10u); UPD(0x0C08803Eu, 1);  /* 0C08803C mov.l @(disp,Rm),Rn */
	IF(0x0C08803Eu); { u32 t_ = r10; PR = 0x0C088042u; r7 = R32(r3 + 0x14u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C068E60, 0x0C068E60u, 0x0C088042u); }  /* 0C08803E jsr @Rn */
L_0C088042: BLKS(0x0C088042u);
	r13 = (u32)(s32)(s16)r0;  /* 0C088042 exts.w Rm,Rn */
	r0 = 0x0u;  /* 0C088044 mov #imm,Rn */
	W32(r14, r0); UPD(0x0C088048u, 3);  /* 0C088046 mov.l Rm,@Rn */
	W32(r14 + 0x4u, r8); UPD(0x0C08804Au, 1);  /* 0C088048 mov.l Rm,@(disp,Rn) */
L_0C08804A: BLKS(0x0C08804Au);
	r7 = R32(r14 + 0x4u); UPD(0x0C08804Cu, 1);  /* 0C08804A mov.l @(disp,Rm),Rn */
	r1 = 0x4u;  /* 0C08804C mov #imm,Rn */
	r4 = R32(r7 + 0xCu); UPD(0x0C088050u, 2);  /* 0C08804E mov.l @(disp,Rm),Rn */
	r9 = R32(r14); UPD(0x0C088052u, 1);  /* 0C088050 mov.l @Rm,Rn */
	IF(0x0C088052u); ARG0(0x441Du); { s32 s_ = (s32)r1; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = 0; else r4 >>= ((~s_ & 31) + 1); }  /* 0C088052 shld Rm,Rn */
	IF(0x0C088054u); r9 <<= 8;  /* 0C088054 shll8 Rn */
	r10 = 0xC0u; UPD(0x0C088058u, 3);  /* 0C088056 mov.w @(disp,pc),Rn */
	r4 += r9;  /* 0C088058 add Rm,Rn */
	r2 = 0xC069B20u; UPD(0x0C08805Cu, 2);  /* 0C08805A mov.l @(disp,pc),Rn */
	r4 += r10;  /* 0C08805C add Rm,Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C08805E exts.w Rm,Rn */
	r5 = 0xC0000u; UPD(0x0C088062u, 3);  /* 0C088060 mov.l @(disp,pc),Rn */
	IF(0x0C088062u); { u32 t_ = r2; PR = 0x0C088066u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C088066u); }  /* 0C088062 jsr @Rn */
L_0C088066: BLKS(0x0C088066u);
	r6 = 0x66666667u; UPD(0x0C088068u, 1);  /* 0C088066 mov.l @(disp,pc),Rn */
	IF(0x0C088068u); r0 <<= 2;  /* 0C088068 shll2 Rn */
	{ s64 r_ = (s64)(s32)r0 * (s64)(s32)r6; MACH = (u32)((u64)r_ >> 32); MACL = (u32)r_; }  /* 0C08806A dmuls.l Rm,Rn */
	r8 = 0xC069AF0u; UPD(0x0C08806Eu, 4);  /* 0C08806C mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C08806E mov Rm,Rn */
	IF(0x0C088070u); r3 = MACH;  /* 0C088070 sts mach,Rn */
	IF(0x0C088072u); T = r3 & 1; r3 = (u32)((s32)r3 >> 1);  /* 0C088072 shar Rn */
	IF(0x0C088074u); T = r0 >> 31; r0 <<= 1;  /* 0C088074 shll Rn */
	{ u32 a_ = r0, t_ = a_ - r0, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r0 = r_; }  /* 0C088076 subc Rm,Rn */
	r3 -= r0;  /* 0C088078 sub Rm,Rn */
	r0 = R32(r14 + 0x4u); UPD(0x0C08807Cu, 7);  /* 0C08807A mov.l @(disp,Rm),Rn */
	r9 = R32(r0 + 0x24u); UPD(0x0C08807Eu, 1);  /* 0C08807C mov.l @(disp,Rm),Rn */
	r5 = 0xC0000u; UPD(0x0C088080u, 1);  /* 0C08807E mov.l @(disp,pc),Rn */
	IF(0x0C088080u); { u32 t_ = r8; PR = 0x0C088084u; r9 += r3; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C088084u); }  /* 0C088080 jsr @Rn */
L_0C088084: BLKS(0x0C088084u);
	r5 = R32(r14 + 0x4u); UPD(0x0C088086u, 1);  /* 0C088084 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C088086 add #imm,Rn */
	r6 = R32(r5 + 0x28u); UPD(0x0C08808Au, 2);  /* 0C088088 mov.l @(disp,Rm),Rn */
	r4 = 0x1u;  /* 0C08808A mov #imm,Rn */
	r7 = 0x28000u; UPD(0x0C08808Eu, 2);  /* 0C08808C mov.l @(disp,pc),Rn */
	r5 = r9;  /* 0C08808E mov Rm,Rn */
	r10 = 0xC0BA7F0u; UPD(0x0C088092u, 2);  /* 0C088090 mov.l @(disp,pc),Rn */
	r6 += r0;  /* 0C088092 add Rm,Rn */
	W32(r15, r7); UPD(0x0C088096u, 2);  /* 0C088094 mov.l Rm,@Rn */
	IF(0x0C088096u); { u32 t_ = r10; PR = 0x0C08809Au; r7 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BA7F0, 0x0C0BA7F0u, 0x0C08809Au); }  /* 0C088096 jsr @Rn */
L_0C08809A: BLKS(0x0C08809Au);
	r9 = R32(r14); UPD(0x0C08809Cu, 1);  /* 0C08809A mov.l @Rm,Rn */
	r2 = 0x1u;  /* 0C08809C mov #imm,Rn */
	r9 += 0x1u;  /* 0C08809E add #imm,Rn */
	r11 = (u32)(s32)(s16)r9;  /* 0C0880A0 exts.w Rm,Rn */
	W32(r14, r11); UPD(0x0C0880A4u, 4);  /* 0C0880A2 mov.l Rm,@Rn */
	r8 = R32(r14); UPD(0x0C0880A6u, 1);  /* 0C0880A4 mov.l @Rm,Rn */
	T = (s32)r8 > (s32)r2;  /* 0C0880A6 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C08804Au, 4); goto L_0C08804A; } UPD(0x0C0880ACu, 1); goto L_0C0880AC; }  /* 0C0880A8 bf/s */
L_0C0880AC: BLKS(0x0C0880ACu);
	r1 = 0xC069B90u; UPD(0x0C0880AEu, 1);  /* 0C0880AC mov.l @(disp,pc),Rn */
	{ r4 = r12; /* slot mov Rm,Rn */ UPD(0x0C087D9Au, 3); goto L_0C087D9A; }  /* 0C0880AE bra */
L_0C0880C0: BLKS(0x0C0880C0u);
	r10 = 0x99u; UPD(0x0C0880C2u, 1);  /* 0C0880C0 mov.w @(disp,pc),Rn */
	r10 += r8;  /* 0C0880C2 add Rm,Rn */
	r9 = (u32)(s32)(s8)R8(r10); UPD(0x0C0880C6u, 2);  /* 0C0880C4 mov.b @Rm,Rn */
	r9 += 0x1u;  /* 0C0880C6 add #imm,Rn */
	r0 = r9 & 0xFF;  /* 0C0880C8 extu.b Rm,Rn */
	T = r0 == 0x3Cu;  /* 0C0880CA cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r10, r9); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0881BCu, 6); goto L_0C0881BC; } UPD(0x0C0880D0u, 1); goto L_0C0880D0; }  /* 0C0880CC bf/s */
L_0C0880D0: BLKS(0x0C0880D0u);
	{ r13 = r3; /* slot mov Rm,Rn */ UPD(0x0C087FB0u, 3); goto L_0C087FB0; }  /* 0C0880D0 bra */
L_0C0880E0: BLKS(0x0C0880E0u);
	r13 = 0xC0A8B50u; UPD(0x0C0880E2u, 1);  /* 0C0880E0 mov.l @(disp,pc),Rn */
	IF(0x0C0880E2u); { u32 t_ = r13; PR = 0x0C0880E6u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C0880E6u); }  /* 0C0880E2 jsr @Rn */
L_0C0880E6: BLKS(0x0C0880E6u);
	IF(0x0C0880E6u); T = (s32)r0 >= 0;  /* 0C0880E6 cmp/pz Rn */
	{ u32 c_ = T; r9 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0880F0u, 4); goto L_0C0880F0; } goto L_0C0880EC; }  /* 0C0880E8 bt/s */
L_0C0880EC: BLKS(0x0C0880ECu);
	{ IF(0x0C0880EEu); ; /* slot nop */ UPD(0x0C087F00u, 4); goto L_0C087F00; }  /* 0C0880EC bra */
L_0C0880F0: BLKS(0x0C0880F0u);
	r13 = 0xB4u; UPD(0x0C0880F2u, 1);  /* 0C0880F0 mov.w @(disp,pc),Rn */
	IF(0x0C0880F2u); MACL = r12 * r13;  /* 0C0880F2 mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C0880F6u, 3);  /* 0C0880F4 mov.l @(disp,pc),Rn */
	IF(0x0C0880F6u); r8 = MACL;  /* 0C0880F6 sts macl,Rn */
	IF(0x0C0880F8u); MACL = r0 * r13;  /* 0C0880F8 mul.l Rm,Rn */
	r8 += r2;  /* 0C0880FA add Rm,Rn */
	r10 = R32(r8); UPD(0x0C0880FEu, 5);  /* 0C0880FC mov.l @Rm,Rn */
	IF(0x0C0880FEu); r0 = MACL;  /* 0C0880FE sts macl,Rn */
	r0 += r2;  /* 0C088100 add Rm,Rn */
	r5 = 0xFFFFFEFFu; UPD(0x0C088104u, 3);  /* 0C088102 mov.w @(disp,pc),Rn */
	r13 += 0x4Cu;  /* 0C088104 add #imm,Rn */
	r7 = R32(r0); UPD(0x0C088108u, 2);  /* 0C088106 mov.l @Rm,Rn */
	r10 &= r5;  /* 0C088108 and Rm,Rn */
	r6 = R32(r0 + 0x24u); UPD(0x0C08810Cu, 2);  /* 0C08810A mov.l @(disp,Rm),Rn */
	r7 &= r13;  /* 0C08810C and Rm,Rn */
	r11 = R32(r0 + 0x28u); UPD(0x0C088110u, 2);  /* 0C08810E mov.l @(disp,Rm),Rn */
	r10 |= r7;  /* 0C088110 or Rm,Rn */
	r4 = R32(r8 + 0x2Cu); UPD(0x0C088114u, 2);  /* 0C088112 mov.l @(disp,Rm),Rn */
	r5 = 0x8u;  /* 0C088114 mov #imm,Rn */
	r3 = R32(r8 + 0x30u); UPD(0x0C088118u, 2);  /* 0C088116 mov.l @(disp,Rm),Rn */
	r6 += r4;  /* 0C088118 add Rm,Rn */
	r2 = R32(r8 + 0x8u); UPD(0x0C08811Cu, 2);  /* 0C08811A mov.l @(disp,Rm),Rn */
	r11 += r3;  /* 0C08811C add Rm,Rn */
	r2 += 0xFFFFFFDAu;  /* 0C08811E add #imm,Rn */
	W32(r8, r10); UPD(0x0C088122u, 3);  /* 0C088120 mov.l Rm,@Rn */
	T = r2 > r5;  /* 0C088122 cmp/hi Rm,Rn */
	W32(r8 + 0x24u, r6); UPD(0x0C088126u, 2);  /* 0C088124 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = T; W32(r8 + 0x28u, r11); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0881BCu, 3); goto L_0C0881BC; } UPD(0x0C08812Au, 1); goto L_0C08812A; }  /* 0C088126 bt/s */
L_0C08812A: BLKS(0x0C08812Au);
	r0 = 0xC088178u;  /* 0C08812A mova @(disp,pc),r0 */
	r2 += r2;  /* 0C08812C add Rm,Rn */
	IF(0x0C08812Eu); r8 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C088130u, 3);  /* 0C08812E mov.w @(r0,Rm),Rn */
	IF(0x0C088130u); { u32 tv_ = (r8 + 0x0C088134u); u32 t_ = PHYS(tv_); IF(0x0C088132u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C088190u: goto L_0C088190; case 0x0C0881B0u: goto L_0C0881B0; case 0x0C088230u: goto L_0C088230; case 0x0C0882A0u: goto L_0C0882A0; case 0x0C088310u: goto L_0C088310; case 0x0C088360u: goto L_0C088360; case 0x0C0883D0u: goto L_0C0883D0; case 0x0C0883E0u: goto L_0C0883E0; case 0x0C0883F0u: goto L_0C0883F0; default: JUMPD(tv_); } }  /* 0C088130 braf Rn */
L_0C088190: BLKS(0x0C088190u);
	r1 = 0xC0808A0u; UPD(0x0C088192u, 1);  /* 0C088190 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C088192 mov Rm,Rn */
	r5 = r9;  /* 0C088194 mov Rm,Rn */
	UPD(0x0C088196u, 2);
L_0C088196: BLKS(0x0C088196u);
	r14 += 0x8u;  /* 0C088196 add #imm,Rn */
	r15 = r14;  /* 0C088198 mov Rm,Rn */
	IF(0x0C08819Au); PR = R32(r15); r15 += 4; UPD(0x0C08819Cu, 3);  /* 0C08819A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08819Eu, 1);  /* 0C08819C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0881A0u, 1);  /* 0C08819E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0881A2u, 1);  /* 0C0881A0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0881A4u, 1);  /* 0C0881A2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0881A6u, 1);  /* 0C0881A4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0881A8u, 1);  /* 0C0881A6 mov.l @Rm+,Rn */
	IF(0x0C0881A8u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0807A0u: goto L_0C0807A0; case 0x0C0808A0u: TAIL(blk_f_0C0808A0); case 0x0C0809E0u: goto L_0C0809E0; case 0x0C080B40u: goto L_0C080B40; default: JUMPD(tv_); } }  /* 0C0881A8 jmp @Rn */
L_0C0881B0: BLKS(0x0C0881B0u);
	r5 = r9;  /* 0C0881B0 mov Rm,Rn */
	r9 = 0xC0A8DD0u; UPD(0x0C0881B4u, 2);  /* 0C0881B2 mov.l @(disp,pc),Rn */
	IF(0x0C0881B4u); { u32 t_ = r9; PR = 0x0C0881B8u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8DD0, 0x0C0A8DD0u, 0x0C0881B8u); }  /* 0C0881B4 jsr @Rn */
L_0C0881B8: BLKS(0x0C0881B8u);
	T = (r0 & r0) == 0;  /* 0C0881B8 tst Rm,Rn */
	if (!T) { UPD(0x0C0881C0u, 4); goto L_0C0881C0; }  /* 0C0881BA bf */
L_0C0881BC: BLKS(0x0C0881BCu);
	{ r14 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C087CFCu, 3); goto L_0C087CFC; }  /* 0C0881BC bra */
L_0C0881C0: BLKS(0x0C0881C0u);
	r11 = 0xC0BC1B0u; UPD(0x0C0881C2u, 1);  /* 0C0881C0 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C0881C2 mov Rm,Rn */
	r5 = 0x5Au;  /* 0C0881C4 mov #imm,Rn */
	IF(0x0C0881C6u); { u32 t_ = r11; PR = 0x0C0881CAu; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C0881CAu); }  /* 0C0881C6 jsr @Rn */
L_0C0881CA: BLKS(0x0C0881CAu);
	T = (r0 & r0) == 0;  /* 0C0881CA tst Rm,Rn */
	if (T) { UPD(0x0C0882ACu, 4); goto L_0C0882AC; }  /* 0C0881CC bt */
L_0C0881CE: BLKS(0x0C0881CEu);
	r4 = 0xB4u; UPD(0x0C0881D0u, 1);  /* 0C0881CE mov.w @(disp,pc),Rn */
	IF(0x0C0881D0u); MACL = r12 * r4;  /* 0C0881D0 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C0881D4u, 3);  /* 0C0881D2 mov.l @(disp,pc),Rn */
	IF(0x0C0881D4u); r10 = MACL;  /* 0C0881D4 sts macl,Rn */
	r10 += r0;  /* 0C0881D6 add Rm,Rn */
	r6 = 0xA9u; UPD(0x0C0881DAu, 3);  /* 0C0881D8 mov.w @(disp,pc),Rn */
	r0 = r10;  /* 0C0881DA mov Rm,Rn */
	r13 = 0xC0BBF10u; UPD(0x0C0881DEu, 2);  /* 0C0881DC mov.l @(disp,pc),Rn */
	IF(0x0C0881DEu); r3 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C0881E0u, 1);  /* 0C0881DE mov.b @(r0,Rm),Rn */
	r4 = R32(r10 + 0x24u); UPD(0x0C0881E2u, 1);  /* 0C0881E0 mov.l @(disp,Rm),Rn */
	r6 = r3 & 0xFF;  /* 0C0881E2 extu.b Rm,Rn */
	IF(0x0C0881E4u); { u32 t_ = r13; PR = 0x0C0881E8u; r5 = R32(r10 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BBF10, 0x0C0BBF10u, 0x0C0881E8u); }  /* 0C0881E4 jsr @Rn */
L_0C0881E8: BLKS(0x0C0881E8u);
	T = (r0 & r0) == 0;  /* 0C0881E8 tst Rm,Rn */
	if (T) { UPD(0x0C0882ACu, 4); goto L_0C0882AC; }  /* 0C0881EA bt */
L_0C0881EC: BLKS(0x0C0881ECu);
	r0 = r10;  /* 0C0881EC mov Rm,Rn */
	r2 = 0x86u; UPD(0x0C0881F0u, 2);  /* 0C0881EE mov.w @(disp,pc),Rn */
	r8 = 0xC069B20u; UPD(0x0C0881F2u, 1);  /* 0C0881F0 mov.l @(disp,pc),Rn */
	IF(0x0C0881F2u); r9 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C0881F4u, 1);  /* 0C0881F2 mov.w @(r0,Rm),Rn */
	r5 = 0x100000u; UPD(0x0C0881F6u, 1);  /* 0C0881F4 mov.l @(disp,pc),Rn */
	IF(0x0C0881F6u); { u32 t_ = r8; PR = 0x0C0881FAu; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0881FAu); }  /* 0C0881F6 jsr @Rn */
L_0C0881FA: BLKS(0x0C0881FAu);
	r8 = R32(r10 + 0x24u); UPD(0x0C0881FCu, 1);  /* 0C0881FA mov.l @(disp,Rm),Rn */
	r4 = r9;  /* 0C0881FC mov Rm,Rn */
	r11 = 0xC069AF0u; UPD(0x0C088200u, 2);  /* 0C0881FE mov.l @(disp,pc),Rn */
	r8 += r0;  /* 0C088200 add Rm,Rn */
	r7 = 0x20000u; UPD(0x0C088204u, 2);  /* 0C088202 mov.l @(disp,pc),Rn */
	r5 = 0x140000u; UPD(0x0C088206u, 1);  /* 0C088204 mov.l @(disp,pc),Rn */
	IF(0x0C088206u); { u32 t_ = r11; PR = 0x0C08820Au; r8 += r7; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C08820Au); }  /* 0C088206 jsr @Rn */
L_0C08820A: BLKS(0x0C08820Au);
	r6 = R32(r10 + 0x28u); UPD(0x0C08820Cu, 1);  /* 0C08820A mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C08820C add #imm,Rn */
	r10 = 0x30000u; UPD(0x0C088210u, 2);  /* 0C08820E mov.l @(disp,pc),Rn */
	r6 += r0;  /* 0C088210 add Rm,Rn */
	W32(r15, r10); UPD(0x0C088214u, 2);  /* 0C088212 mov.l Rm,@Rn */
	r4 = 0x3u;  /* 0C088214 mov #imm,Rn */
	UPD(0x0C088216u, 1);
L_0C088216: BLKS(0x0C088216u);
	r0 = 0xC0BAD60u; UPD(0x0C088218u, 1);  /* 0C088216 mov.l @(disp,pc),Rn */
	r5 = r8;  /* 0C088218 mov Rm,Rn */
	r7 = r9;  /* 0C08821A mov Rm,Rn */
	UPD(0x0C08821Cu, 2);
L_0C08821C: BLKS(0x0C08821Cu);
	IF(0x0C08821Cu); { u32 t_ = r0; PR = 0x0C088220u; IF(0x0C08821Eu); ; /* slot nop */ UPD(t_, 2); CALLD(t_, 0x0C088220u); }  /* 0C08821C jsr @Rn */
L_0C088220: BLKS(0x0C088220u);
	{ r15 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C0880ACu, 3); goto L_0C0880AC; }  /* 0C088220 bra */
L_0C088230: BLKS(0x0C088230u);
	r5 = r9;  /* 0C088230 mov Rm,Rn */
	r9 = 0xC0A8DD0u; UPD(0x0C088234u, 2);  /* 0C088232 mov.l @(disp,pc),Rn */
	IF(0x0C088234u); { u32 t_ = r9; PR = 0x0C088238u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8DD0, 0x0C0A8DD0u, 0x0C088238u); }  /* 0C088234 jsr @Rn */
L_0C088238: BLKS(0x0C088238u);
	T = (r0 & r0) == 0;  /* 0C088238 tst Rm,Rn */
	if (T) { UPD(0x0C0882ACu, 4); goto L_0C0882AC; }  /* 0C08823A bt */
L_0C08823C: BLKS(0x0C08823Cu);
	r4 = r12;  /* 0C08823C mov Rm,Rn */
	r13 = 0xC0BC1B0u; UPD(0x0C088240u, 2);  /* 0C08823E mov.l @(disp,pc),Rn */
	r5 = 0x5Au;  /* 0C088240 mov #imm,Rn */
	IF(0x0C088242u); { u32 t_ = r13; PR = 0x0C088246u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C088246u); }  /* 0C088242 jsr @Rn */
L_0C088246: BLKS(0x0C088246u);
	T = (r0 & r0) == 0;  /* 0C088246 tst Rm,Rn */
	if (T) { UPD(0x0C0882ACu, 4); goto L_0C0882AC; }  /* 0C088248 bt */
L_0C08824A: BLKS(0x0C08824Au);
	r0 = 0xB4u; UPD(0x0C08824Cu, 1);  /* 0C08824A mov.w @(disp,pc),Rn */
	IF(0x0C08824Cu); MACL = r12 * r0;  /* 0C08824C mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C088250u, 3);  /* 0C08824E mov.l @(disp,pc),Rn */
	IF(0x0C088250u); r10 = MACL;  /* 0C088250 sts macl,Rn */
	r10 += r6;  /* 0C088252 add Rm,Rn */
	r3 = 0xA9u; UPD(0x0C088256u, 3);  /* 0C088254 mov.w @(disp,pc),Rn */
	r0 = r10;  /* 0C088256 mov Rm,Rn */
	IF(0x0C088258u); r5 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C08825Au, 2);  /* 0C088258 mov.b @(r0,Rm),Rn */
	r11 = 0xC0BBF10u; UPD(0x0C08825Cu, 1);  /* 0C08825A mov.l @(disp,pc),Rn */
	r6 = r5 & 0xFF;  /* 0C08825C extu.b Rm,Rn */
	r4 = R32(r10 + 0x24u); UPD(0x0C088260u, 2);  /* 0C08825E mov.l @(disp,Rm),Rn */
	IF(0x0C088260u); { u32 t_ = r11; PR = 0x0C088264u; r5 = R32(r10 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BBF10, 0x0C0BBF10u, 0x0C088264u); }  /* 0C088260 jsr @Rn */
L_0C088264: BLKS(0x0C088264u);
	T = (r0 & r0) == 0;  /* 0C088264 tst Rm,Rn */
	if (T) { UPD(0x0C0882ACu, 4); goto L_0C0882AC; }  /* 0C088266 bt */
L_0C088268: BLKS(0x0C088268u);
	r0 = r10;  /* 0C088268 mov Rm,Rn */
	r2 = 0x86u; UPD(0x0C08826Cu, 2);  /* 0C08826A mov.w @(disp,pc),Rn */
	r8 = 0xC069B20u; UPD(0x0C08826Eu, 1);  /* 0C08826C mov.l @(disp,pc),Rn */
	IF(0x0C08826Eu); r9 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C088270u, 1);  /* 0C08826E mov.w @(r0,Rm),Rn */
	r5 = 0x100000u; UPD(0x0C088272u, 1);  /* 0C088270 mov.l @(disp,pc),Rn */
	IF(0x0C088272u); { u32 t_ = r8; PR = 0x0C088276u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C088276u); }  /* 0C088272 jsr @Rn */
L_0C088276: BLKS(0x0C088276u);
	r8 = R32(r10 + 0x24u); UPD(0x0C088278u, 1);  /* 0C088276 mov.l @(disp,Rm),Rn */
	r4 = r9;  /* 0C088278 mov Rm,Rn */
	r13 = 0xC069AF0u; UPD(0x0C08827Cu, 2);  /* 0C08827A mov.l @(disp,pc),Rn */
	r8 += r0;  /* 0C08827C add Rm,Rn */
	r7 = 0x10000u; UPD(0x0C088280u, 2);  /* 0C08827E mov.l @(disp,pc),Rn */
	r5 = 0x140000u; UPD(0x0C088282u, 1);  /* 0C088280 mov.l @(disp,pc),Rn */
	IF(0x0C088282u); { u32 t_ = r13; PR = 0x0C088286u; r8 += r7; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C088286u); }  /* 0C088282 jsr @Rn */
L_0C088286: BLKS(0x0C088286u);
	r6 = R32(r10 + 0x28u); UPD(0x0C088288u, 1);  /* 0C088286 mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C088288 add #imm,Rn */
	r4 = 0x30000u; UPD(0x0C08828Cu, 2);  /* 0C08828A mov.l @(disp,pc),Rn */
	r6 += r0;  /* 0C08828C add Rm,Rn */
	W32(r15, r4); UPD(0x0C088290u, 2);  /* 0C08828E mov.l Rm,@Rn */
	{ r4 = 0x2u; /* slot mov #imm,Rn */ UPD(0x0C088216u, 3); goto L_0C088216; }  /* 0C088290 bra */
L_0C0882A0: BLKS(0x0C0882A0u);
	r10 = 0xC0A8DD0u; UPD(0x0C0882A2u, 1);  /* 0C0882A0 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C0882A2 mov Rm,Rn */
	IF(0x0C0882A4u); { u32 t_ = r10; PR = 0x0C0882A8u; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8DD0, 0x0C0A8DD0u, 0x0C0882A8u); }  /* 0C0882A4 jsr @Rn */
L_0C0882A8: BLKS(0x0C0882A8u);
	T = (r0 & r0) == 0;  /* 0C0882A8 tst Rm,Rn */
	if (!T) { UPD(0x0C0882B0u, 4); goto L_0C0882B0; }  /* 0C0882AA bf */
L_0C0882AC: BLKS(0x0C0882ACu);
	{ r14 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C087CFCu, 3); goto L_0C087CFC; }  /* 0C0882AC bra */
L_0C0882B0: BLKS(0x0C0882B0u);
	r9 = 0xC0BC1B0u; UPD(0x0C0882B2u, 1);  /* 0C0882B0 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C0882B2 mov Rm,Rn */
	r5 = 0x5Au;  /* 0C0882B4 mov #imm,Rn */
	IF(0x0C0882B6u); { u32 t_ = r9; PR = 0x0C0882BAu; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C0882BAu); }  /* 0C0882B6 jsr @Rn */
L_0C0882BA: BLKS(0x0C0882BAu);
	T = (r0 & r0) == 0;  /* 0C0882BA tst Rm,Rn */
	if (T) { UPD(0x0C088398u, 4); goto L_0C088398; }  /* 0C0882BC bt */
L_0C0882BE: BLKS(0x0C0882BEu);
	r11 = 0xB4u; UPD(0x0C0882C0u, 1);  /* 0C0882BE mov.w @(disp,pc),Rn */
	IF(0x0C0882C0u); MACL = r12 * r11;  /* 0C0882C0 mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C0882C4u, 3);  /* 0C0882C2 mov.l @(disp,pc),Rn */
	IF(0x0C0882C4u); r11 = MACL;  /* 0C0882C4 sts macl,Rn */
	r11 += r6;  /* 0C0882C6 add Rm,Rn */
	r3 = 0xA9u; UPD(0x0C0882CAu, 3);  /* 0C0882C8 mov.w @(disp,pc),Rn */
	r0 = r11;  /* 0C0882CA mov Rm,Rn */
	IF(0x0C0882CCu); r5 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0882CEu, 2);  /* 0C0882CC mov.b @(r0,Rm),Rn */
	r13 = 0xC0BBF10u; UPD(0x0C0882D0u, 1);  /* 0C0882CE mov.l @(disp,pc),Rn */
	r6 = r5 & 0xFF;  /* 0C0882D0 extu.b Rm,Rn */
	r4 = R32(r11 + 0x24u); UPD(0x0C0882D4u, 2);  /* 0C0882D2 mov.l @(disp,Rm),Rn */
	IF(0x0C0882D4u); { u32 t_ = r13; PR = 0x0C0882D8u; r5 = R32(r11 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BBF10, 0x0C0BBF10u, 0x0C0882D8u); }  /* 0C0882D4 jsr @Rn */
L_0C0882D8: BLKS(0x0C0882D8u);
	T = (r0 & r0) == 0;  /* 0C0882D8 tst Rm,Rn */
	if (T) { UPD(0x0C088398u, 4); goto L_0C088398; }  /* 0C0882DA bt */
L_0C0882DC: BLKS(0x0C0882DCu);
	r0 = r11;  /* 0C0882DC mov Rm,Rn */
	r4 = 0x86u; UPD(0x0C0882E0u, 2);  /* 0C0882DE mov.w @(disp,pc),Rn */
	r8 = 0xC069B20u; UPD(0x0C0882E2u, 1);  /* 0C0882E0 mov.l @(disp,pc),Rn */
	IF(0x0C0882E2u); r9 = (u32)(s32)(s16)R16(r0 + r4); UPD(0x0C0882E4u, 1);  /* 0C0882E2 mov.w @(r0,Rm),Rn */
	r5 = 0xC0000u; UPD(0x0C0882E6u, 1);  /* 0C0882E4 mov.l @(disp,pc),Rn */
	r10 = 0xC069AF0u; UPD(0x0C0882E8u, 1);  /* 0C0882E6 mov.l @(disp,pc),Rn */
	IF(0x0C0882E8u); { u32 t_ = r8; PR = 0x0C0882ECu; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0882ECu); }  /* 0C0882E8 jsr @Rn */
L_0C0882EC: BLKS(0x0C0882ECu);
	r8 = R32(r11 + 0x24u); UPD(0x0C0882EEu, 1);  /* 0C0882EC mov.l @(disp,Rm),Rn */
	r4 = r9;  /* 0C0882EE mov Rm,Rn */
	r5 = 0x100000u; UPD(0x0C0882F2u, 2);  /* 0C0882F0 mov.l @(disp,pc),Rn */
	IF(0x0C0882F2u); { u32 t_ = r10; PR = 0x0C0882F6u; r8 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0882F6u); }  /* 0C0882F2 jsr @Rn */
L_0C0882F6: BLKS(0x0C0882F6u);
	r13 = 0x20000u; UPD(0x0C0882F8u, 1);  /* 0C0882F6 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0882F8 add #imm,Rn */
	r6 = R32(r11 + 0x28u); UPD(0x0C0882FCu, 2);  /* 0C0882FA mov.l @(disp,Rm),Rn */
	r8 += r13;  /* 0C0882FC add Rm,Rn */
	W32(r15, r13); UPD(0x0C088300u, 2);  /* 0C0882FE mov.l Rm,@Rn */
	r6 += r0;  /* 0C088300 add Rm,Rn */
	{ r4 = 0x7u; /* slot mov #imm,Rn */ UPD(0x0C088216u, 4); goto L_0C088216; }  /* 0C088302 bra */
L_0C088310: BLKS(0x0C088310u);
	r1 = 0xC0809E0u; UPD(0x0C088312u, 1);  /* 0C088310 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C088312 mov Rm,Rn */
	{ r5 = r9; /* slot mov Rm,Rn */ UPD(0x0C088196u, 4); goto L_0C088196; }  /* 0C088314 bra */
L_0C088360: BLKS(0x0C088360u);
	r5 = r9;  /* 0C088360 mov Rm,Rn */
	r9 = 0xC0A8DD0u; UPD(0x0C088364u, 2);  /* 0C088362 mov.l @(disp,pc),Rn */
	IF(0x0C088364u); { u32 t_ = r9; PR = 0x0C088368u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8DD0, 0x0C0A8DD0u, 0x0C088368u); }  /* 0C088364 jsr @Rn */
L_0C088368: BLKS(0x0C088368u);
	T = (r0 & r0) == 0;  /* 0C088368 tst Rm,Rn */
	if (T) { UPD(0x0C088398u, 4); goto L_0C088398; }  /* 0C08836A bt */
L_0C08836C: BLKS(0x0C08836Cu);
	r4 = r12;  /* 0C08836C mov Rm,Rn */
	r11 = 0xC0BC1B0u; UPD(0x0C088370u, 2);  /* 0C08836E mov.l @(disp,pc),Rn */
	r5 = 0x5Au;  /* 0C088370 mov #imm,Rn */
	IF(0x0C088372u); { u32 t_ = r11; PR = 0x0C088376u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C088376u); }  /* 0C088372 jsr @Rn */
L_0C088376: BLKS(0x0C088376u);
	T = (r0 & r0) == 0;  /* 0C088376 tst Rm,Rn */
	if (T) { UPD(0x0C088398u, 4); goto L_0C088398; }  /* 0C088378 bt */
L_0C08837A: BLKS(0x0C08837Au);
	r5 = 0xB4u; UPD(0x0C08837Cu, 1);  /* 0C08837A mov.w @(disp,pc),Rn */
	IF(0x0C08837Cu); MACL = r12 * r5;  /* 0C08837C mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C088380u, 3);  /* 0C08837E mov.l @(disp,pc),Rn */
	IF(0x0C088380u); r10 = MACL;  /* 0C088380 sts macl,Rn */
	r10 += r0;  /* 0C088382 add Rm,Rn */
	r2 = 0xA9u; UPD(0x0C088386u, 3);  /* 0C088384 mov.w @(disp,pc),Rn */
	r0 = r10;  /* 0C088386 mov Rm,Rn */
	r13 = 0xC0BBF10u; UPD(0x0C08838Au, 2);  /* 0C088388 mov.l @(disp,pc),Rn */
	IF(0x0C08838Au); r7 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C08838Cu, 1);  /* 0C08838A mov.b @(r0,Rm),Rn */
	r4 = R32(r10 + 0x24u); UPD(0x0C08838Eu, 1);  /* 0C08838C mov.l @(disp,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C08838E extu.b Rm,Rn */
	IF(0x0C088390u); { u32 t_ = r13; PR = 0x0C088394u; r5 = R32(r10 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BBF10, 0x0C0BBF10u, 0x0C088394u); }  /* 0C088390 jsr @Rn */
L_0C088394: BLKS(0x0C088394u);
	T = (r0 & r0) == 0;  /* 0C088394 tst Rm,Rn */
	if (!T) { UPD(0x0C08839Cu, 4); goto L_0C08839C; }  /* 0C088396 bf */
L_0C088398: BLKS(0x0C088398u);
	{ r14 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C087CFCu, 3); goto L_0C087CFC; }  /* 0C088398 bra */
L_0C08839C: BLKS(0x0C08839Cu);
	r4 = 0x86u; UPD(0x0C08839Eu, 1);  /* 0C08839C mov.w @(disp,pc),Rn */
	r0 = r10;  /* 0C08839E mov Rm,Rn */
	r13 = 0xC069B20u; UPD(0x0C0883A2u, 2);  /* 0C0883A0 mov.l @(disp,pc),Rn */
	IF(0x0C0883A2u); r11 = (u32)(s32)(s16)R16(r0 + r4); UPD(0x0C0883A4u, 1);  /* 0C0883A2 mov.w @(r0,Rm),Rn */
	r5 = 0x80000u; UPD(0x0C0883A6u, 1);  /* 0C0883A4 mov.l @(disp,pc),Rn */
	IF(0x0C0883A6u); { u32 t_ = r13; PR = 0x0C0883AAu; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0883AAu); }  /* 0C0883A6 jsr @Rn */
L_0C0883AA: BLKS(0x0C0883AAu);
	r9 = R32(r10 + 0x24u); UPD(0x0C0883ACu, 1);  /* 0C0883AA mov.l @(disp,Rm),Rn */
	r4 = r11;  /* 0C0883AC mov Rm,Rn */
	r8 = 0xC069AF0u; UPD(0x0C0883B0u, 2);  /* 0C0883AE mov.l @(disp,pc),Rn */
	r9 += r0;  /* 0C0883B0 add Rm,Rn */
	r6 = 0x10000u; UPD(0x0C0883B4u, 2);  /* 0C0883B2 mov.l @(disp,pc),Rn */
	r5 = 0xA0000u; UPD(0x0C0883B6u, 1);  /* 0C0883B4 mov.l @(disp,pc),Rn */
	IF(0x0C0883B6u); { u32 t_ = r8; PR = 0x0C0883BAu; r9 += r6; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0883BAu); }  /* 0C0883B6 jsr @Rn */
L_0C0883BA: BLKS(0x0C0883BAu);
	r6 = R32(r10 + 0x28u); UPD(0x0C0883BCu, 1);  /* 0C0883BA mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0883BC add #imm,Rn */
	r6 += r0;  /* 0C0883BE add Rm,Rn */
	r3 = 0x28000u; UPD(0x0C0883C2u, 3);  /* 0C0883C0 mov.l @(disp,pc),Rn */
	r4 = 0x2u;  /* 0C0883C2 mov #imm,Rn */
	r0 = 0xC0BA480u; UPD(0x0C0883C6u, 2);  /* 0C0883C4 mov.l @(disp,pc),Rn */
	r5 = r9;  /* 0C0883C6 mov Rm,Rn */
	W32(r15, r3); UPD(0x0C0883CAu, 2);  /* 0C0883C8 mov.l Rm,@Rn */
	{ r7 = r11; /* slot mov Rm,Rn */ UPD(0x0C08821Cu, 3); goto L_0C08821C; }  /* 0C0883CA bra */
L_0C0883D0: BLKS(0x0C0883D0u);
	r1 = 0xC0807A0u; UPD(0x0C0883D2u, 1);  /* 0C0883D0 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C0883D2 mov Rm,Rn */
	{ r5 = r9; /* slot mov Rm,Rn */ UPD(0x0C088196u, 4); goto L_0C088196; }  /* 0C0883D4 bra */
L_0C0883E0: BLKS(0x0C0883E0u);
	r1 = 0xC080B40u; UPD(0x0C0883E2u, 1);  /* 0C0883E0 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C0883E2 mov Rm,Rn */
	{ r5 = r9; /* slot mov Rm,Rn */ UPD(0x0C088196u, 4); goto L_0C088196; }  /* 0C0883E4 bra */
L_0C0883F0: BLKS(0x0C0883F0u);
	r10 = 0xC0A8DD0u; UPD(0x0C0883F2u, 1);  /* 0C0883F0 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C0883F2 mov Rm,Rn */
	IF(0x0C0883F4u); { u32 t_ = r10; PR = 0x0C0883F8u; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8DD0, 0x0C0A8DD0u, 0x0C0883F8u); }  /* 0C0883F4 jsr @Rn */
L_0C0883F8: BLKS(0x0C0883F8u);
	T = (r0 & r0) == 0;  /* 0C0883F8 tst Rm,Rn */
	if (T) { UPD(0x0C08845Eu, 4); goto L_0C08845E; }  /* 0C0883FA bt */
L_0C0883FC: BLKS(0x0C0883FCu);
	r4 = r12;  /* 0C0883FC mov Rm,Rn */
	r11 = 0xC0BC1B0u; UPD(0x0C088400u, 2);  /* 0C0883FE mov.l @(disp,pc),Rn */
	r5 = 0x5Au;  /* 0C088400 mov #imm,Rn */
	IF(0x0C088402u); { u32 t_ = r11; PR = 0x0C088406u; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C088406u); }  /* 0C088402 jsr @Rn */
L_0C088406: BLKS(0x0C088406u);
	T = (r0 & r0) == 0;  /* 0C088406 tst Rm,Rn */
	if (T) { UPD(0x0C08845Eu, 4); goto L_0C08845E; }  /* 0C088408 bt */
L_0C08840A: BLKS(0x0C08840Au);
	r5 = 0xB4u; UPD(0x0C08840Cu, 1);  /* 0C08840A mov.w @(disp,pc),Rn */
	IF(0x0C08840Cu); MACL = r12 * r5;  /* 0C08840C mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C088410u, 3);  /* 0C08840E mov.l @(disp,pc),Rn */
	IF(0x0C088410u); r10 = MACL;  /* 0C088410 sts macl,Rn */
	r10 += r0;  /* 0C088412 add Rm,Rn */
	r2 = 0xA9u; UPD(0x0C088416u, 3);  /* 0C088414 mov.w @(disp,pc),Rn */
	r0 = r10;  /* 0C088416 mov Rm,Rn */
	r9 = 0xC0BBF10u; UPD(0x0C08841Au, 2);  /* 0C088418 mov.l @(disp,pc),Rn */
	IF(0x0C08841Au); r7 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C08841Cu, 1);  /* 0C08841A mov.b @(r0,Rm),Rn */
	r4 = R32(r10 + 0x24u); UPD(0x0C08841Eu, 1);  /* 0C08841C mov.l @(disp,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C08841E extu.b Rm,Rn */
	IF(0x0C088420u); { u32 t_ = r9; PR = 0x0C088424u; r5 = R32(r10 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BBF10, 0x0C0BBF10u, 0x0C088424u); }  /* 0C088420 jsr @Rn */
L_0C088424: BLKS(0x0C088424u);
	T = (r0 & r0) == 0;  /* 0C088424 tst Rm,Rn */
	if (T) { UPD(0x0C08845Eu, 4); goto L_0C08845E; }  /* 0C088426 bt */
L_0C088428: BLKS(0x0C088428u);
	r0 = r10;  /* 0C088428 mov Rm,Rn */
	r6 = 0x86u; UPD(0x0C08842Cu, 2);  /* 0C08842A mov.w @(disp,pc),Rn */
	r8 = 0xC069B20u; UPD(0x0C08842Eu, 1);  /* 0C08842C mov.l @(disp,pc),Rn */
	IF(0x0C08842Eu); r13 = (u32)(s32)(s16)R16(r0 + r6); UPD(0x0C088430u, 1);  /* 0C08842E mov.w @(r0,Rm),Rn */
	r5 = 0xF0000u; UPD(0x0C088432u, 1);  /* 0C088430 mov.l @(disp,pc),Rn */
	r9 = 0xC069AF0u; UPD(0x0C088434u, 1);  /* 0C088432 mov.l @(disp,pc),Rn */
	IF(0x0C088434u); { u32 t_ = r8; PR = 0x0C088438u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C088438u); }  /* 0C088434 jsr @Rn */
L_0C088438: BLKS(0x0C088438u);
	r11 = R32(r10 + 0x24u); UPD(0x0C08843Au, 1);  /* 0C088438 mov.l @(disp,Rm),Rn */
	r4 = r13;  /* 0C08843A mov Rm,Rn */
	r5 = 0x140000u; UPD(0x0C08843Eu, 2);  /* 0C08843C mov.l @(disp,pc),Rn */
	IF(0x0C08843Eu); { u32 t_ = r9; PR = 0x0C088442u; r11 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C088442u); }  /* 0C08843E jsr @Rn */
L_0C088442: BLKS(0x0C088442u);
	r8 = 0xC0BA480u; UPD(0x0C088444u, 1);  /* 0C088442 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C088444 add #imm,Rn */
	r6 = R32(r10 + 0x28u); UPD(0x0C088448u, 2);  /* 0C088446 mov.l @(disp,Rm),Rn */
	r4 = 0x0u;  /* 0C088448 mov #imm,Rn */
	r3 = 0x20000u; UPD(0x0C08844Cu, 2);  /* 0C08844A mov.l @(disp,pc),Rn */
	r6 += r0;  /* 0C08844C add Rm,Rn */
	W32(r15, r3); UPD(0x0C088450u, 2);  /* 0C08844E mov.l Rm,@Rn */
	r5 = r11;  /* 0C088450 mov Rm,Rn */
	IF(0x0C088452u); { u32 t_ = r8; PR = 0x0C088456u; r7 = r13; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BA480, 0x0C0BA480u, 0x0C088456u); }  /* 0C088452 jsr @Rn */
L_0C088456: BLKS(0x0C088456u);
	r4 = r12;  /* 0C088456 mov Rm,Rn */
	r12 = 0xC069B90u; UPD(0x0C08845Au, 2);  /* 0C088458 mov.l @(disp,pc),Rn */
	IF(0x0C08845Au); { u32 t_ = r12; PR = 0x0C08845Eu; r15 += 0x4u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B90, 0x0C069B90u, 0x0C08845Eu); }  /* 0C08845A jsr @Rn */
L_0C08845E: BLKS(0x0C08845Eu);
	{ r14 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C087CFCu, 3); goto L_0C087CFC; }  /* 0C08845E bra */
}

void blk_f_0C0884B0(sh3_t *c)
{
	LOCALS;
L_0C0884B0: BLKS(0x0C0884B0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0884B2u, 1);  /* 0C0884B0 mov.l Rm,@-Rn */
	r4 = 0xEu;  /* 0C0884B2 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0884B6u, 2);  /* 0C0884B4 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0884B8u, 1);  /* 0C0884B6 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0884BAu, 1);  /* 0C0884B8 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0884BCu, 1);  /* 0C0884BA mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0884BEu, 1);  /* 0C0884BC mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0884C0u, 1);  /* 0C0884BE mov.l Rm,@-Rn */
	r0 = 0xC3C43CCu; UPD(0x0C0884C2u, 1);  /* 0C0884C0 mov.l @(disp,pc),Rn */
	IF(0x0C0884C2u); r15 -= 4; W32(r15, PR); UPD(0x0C0884C4u, 1);  /* 0C0884C2 sts.l pr,@-Rn */
	r2 = R32(r0); UPD(0x0C0884C6u, 1);  /* 0C0884C4 mov.l @Rm,Rn */
	r15 += 0xFFFFFFECu;  /* 0C0884C6 add #imm,Rn */
	r8 = 0xC071740u; UPD(0x0C0884CAu, 2);  /* 0C0884C8 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0884CA mov Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r2); r2 += 2; r12 = v_; } UPD(0x0C0884CEu, 2);  /* 0C0884CC mov.w @Rm+,Rn */
	IF(0x0C0884CEu); { u32 t_ = r8; PR = 0x0C0884D2u; W32(r0, r2); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C071740, 0x0C071740u, 0x0C0884D2u); }  /* 0C0884CE jsr @Rn */
L_0C0884D2: BLKS(0x0C0884D2u);
	T = (r0 & r0) == 0;  /* 0C0884D2 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0884F0u, 4); goto L_0C0884F0; } UPD(0x0C0884D8u, 1); goto L_0C0884D8; }  /* 0C0884D4 bf/s */
L_0C0884D8: BLKS(0x0C0884D8u);
	r14 += 0x14u;  /* 0C0884D8 add #imm,Rn */
	r15 = r14;  /* 0C0884DA mov Rm,Rn */
	IF(0x0C0884DCu); PR = R32(r15); r15 += 4; UPD(0x0C0884DEu, 3);  /* 0C0884DC lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0884E0u, 1);  /* 0C0884DE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0884E2u, 1);  /* 0C0884E0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0884E4u, 1);  /* 0C0884E2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0884E6u, 1);  /* 0C0884E4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0884E8u, 1);  /* 0C0884E6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0884EAu, 1);  /* 0C0884E8 mov.l @Rm+,Rn */
	IF(0x0C0884EAu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0884EA rts */
L_0C0884F0: BLKS(0x0C0884F0u);
	r1 = 0xC28EDFCu; UPD(0x0C0884F2u, 1);  /* 0C0884F0 mov.l @(disp,pc),Rn */
	r11 = 0xB4u; UPD(0x0C0884F4u, 1);  /* 0C0884F2 mov.w @(disp,pc),Rn */
	r5 = (u32)(s32)(s16)R16(r1); UPD(0x0C0884F6u, 1);  /* 0C0884F4 mov.w @Rm,Rn */
	r6 = 0xC2460ACu; UPD(0x0C0884F8u, 1);  /* 0C0884F6 mov.l @(disp,pc),Rn */
	IF(0x0C0884F8u); MACL = r5 * r11;  /* 0C0884F8 mul.l Rm,Rn */
	r2 = 0xC2B1811u; UPD(0x0C0884FCu, 3);  /* 0C0884FA mov.l @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)R16(r6); UPD(0x0C0884FEu, 1);  /* 0C0884FC mov.w @Rm,Rn */
	IF(0x0C0884FEu); r11 = MACL;  /* 0C0884FE sts macl,Rn */
	r10 = 0xC286578u; UPD(0x0C088502u, 2);  /* 0C088500 mov.l @(disp,pc),Rn */
	r13 = r4 & 0xFFFF;  /* 0C088502 extu.w Rm,Rn */
	r8 = (u32)(s32)(s8)R8(r2); UPD(0x0C088506u, 2);  /* 0C088504 mov.b @Rm,Rn */
	r11 += r10;  /* 0C088506 add Rm,Rn */
	W32(r11 + 0x4u, r13); UPD(0x0C08850Au, 2);  /* 0C088508 mov.l Rm,@(disp,Rn) */
	r4 = r5;  /* 0C08850A mov Rm,Rn */
	r9 = 0xC0A8A30u; UPD(0x0C08850Eu, 2);  /* 0C08850C mov.l @(disp,pc),Rn */
	r13 = 0x0u;  /* 0C08850E mov #imm,Rn */
	r7 = 0xC3000110u; UPD(0x0C088512u, 2);  /* 0C088510 mov.l @(disp,pc),Rn */
	W32(r14, r5); UPD(0x0C088514u, 1);  /* 0C088512 mov.l Rm,@Rn */
	W32(r11, r7); UPD(0x0C088516u, 1);  /* 0C088514 mov.l Rm,@Rn */
	W32(r11 + 0xCu, r13); UPD(0x0C088518u, 1);  /* 0C088516 mov.l Rm,@(disp,Rn) */
	IF(0x0C088518u); { u32 t_ = r9; PR = 0x0C08851Cu; W32(r11 + 0x8u, r13); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C08851Cu); }  /* 0C088518 jsr @Rn */
L_0C08851C: BLKS(0x0C08851Cu);
	r2 = 0x4Cu;  /* 0C08851C mov #imm,Rn */
	IF(0x0C08851Eu); MACL = r8 * r2;  /* 0C08851E mul.l Rm,Rn */
	r0 = 0xC286318u; UPD(0x0C088522u, 4);  /* 0C088520 mov.l @(disp,pc),Rn */
	r6 = 0xC3C43C6u; UPD(0x0C088524u, 1);  /* 0C088522 mov.l @(disp,pc),Rn */
	IF(0x0C088524u); r9 = MACL;  /* 0C088524 sts macl,Rn */
	r3 = 0xC237C08u; UPD(0x0C088528u, 2);  /* 0C088526 mov.l @(disp,pc),Rn */
	r9 += r0;  /* 0C088528 add Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r6); UPD(0x0C08852Cu, 2);  /* 0C08852A mov.w @Rm,Rn */
	r10 = R32(r9 + 0x8u); UPD(0x0C08852Eu, 1);  /* 0C08852C mov.l @(disp,Rm),Rn */
	IF(0x0C08852Eu); r4 <<= 16;  /* 0C08852E shll16 Rn */
	r7 = (u32)(s32)(s16)R16(r3); UPD(0x0C088532u, 2);  /* 0C088530 mov.w @Rm,Rn */
	r9 += 0x42u;  /* 0C088532 add #imm,Rn */
	r5 = 0xC0A9AE0u; UPD(0x0C088536u, 2);  /* 0C088534 mov.l @(disp,pc),Rn */
	IF(0x0C088536u); r7 <<= 16;  /* 0C088536 shll16 Rn */
	W32(r11 + 0x28u, r4); UPD(0x0C08853Au, 2);  /* 0C088538 mov.l Rm,@(disp,Rn) */
	r7 -= r10;  /* 0C08853A sub Rm,Rn */
	W32(r11 + 0x24u, r7); UPD(0x0C08853Eu, 2);  /* 0C08853C mov.l Rm,@(disp,Rn) */
	IF(0x0C08853Eu); { u32 t_ = r5; PR = 0x0C088542u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C088542u); }  /* 0C08853E jsr @Rn */
L_0C088542: BLKS(0x0C088542u);
	r0 = 0xB0u; UPD(0x0C088544u, 1);  /* 0C088542 mov.w @(disp,pc),Rn */
	r2 = r11;  /* 0C088544 mov Rm,Rn */
	IF(0x0C088546u); W8(r0 + r11, r8); UPD(0x0C088548u, 2);  /* 0C088546 mov.b Rm,@(r0,Rn) */
	T = (r12 & r12) == 0;  /* 0C088548 tst Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r9); UPD(0x0C08854Cu, 2);  /* 0C08854A mov.b @Rm,Rn */
	r0 += 0xFFFFFFFDu;  /* 0C08854C add #imm,Rn */
	r1 = 0xA8u; UPD(0x0C088550u, 2);  /* 0C08854E mov.w @(disp,pc),Rn */
	IF(0x0C088550u); W8(r0 + r11, r13); UPD(0x0C088552u, 1);  /* 0C088550 mov.b Rm,@(r0,Rn) */
	r2 += r1;  /* 0C088552 add Rm,Rn */
	r2 += 0x1u;  /* 0C088554 add #imm,Rn */
	r0 += 0xFFFFFFEFu;  /* 0C088556 add #imm,Rn */
	W8(r2, r3); UPD(0x0C08855Au, 4);  /* 0C088558 mov.b Rm,@Rn */
	{ u32 c_ = T; IF(0x0C08855Cu); W8(r0 + r11, r13); /* slot mov.b Rm,@(r0,Rn) */ if (c_) { UPD(0x0C088562u, 3); goto L_0C088562; } UPD(0x0C08855Eu, 1); goto L_0C08855E; }  /* 0C08855A bt/s */
L_0C08855E: BLKS(0x0C08855Eu);
	{ r12 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C088660u, 3); goto L_0C088660; }  /* 0C08855E bra */
L_0C088562: BLKS(0x0C088562u);
	r8 = 0xC28EDFCu; UPD(0x0C088564u, 1);  /* 0C088562 mov.l @(disp,pc),Rn */
	r12 = 0x0u;  /* 0C088564 mov #imm,Rn */
	r8 += 0x2u;  /* 0C088566 add #imm,Rn */
	W32(r14 + 0x10u, r8); UPD(0x0C08856Au, 3);  /* 0C088568 mov.l Rm,@(disp,Rn) */
	r13 = 0x0u;  /* 0C08856A mov #imm,Rn */
	W32(r14 + 0x4u, r2); UPD(0x0C08856Eu, 2);  /* 0C08856C mov.l Rm,@(disp,Rn) */
	IF(0x0C08856Eu); ;  /* 0C08856E nop */
	UPD(0x0C088570u, 1);
L_0C088570: BLKS(0x0C088570u);
	r9 = R32(r14 + 0x10u); UPD(0x0C088572u, 1);  /* 0C088570 mov.l @(disp,Rm),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r9); r9 += 2; r10 = v_; } UPD(0x0C088574u, 1);  /* 0C088572 mov.w @Rm+,Rn */
	W32(r14 + 0x10u, r9); UPD(0x0C088576u, 1);  /* 0C088574 mov.l Rm,@(disp,Rn) */
	r9 = 0xC19B0D0u; UPD(0x0C088578u, 1);  /* 0C088576 mov.l @(disp,pc),Rn */
	r8 = 0xB4u; UPD(0x0C08857Au, 1);  /* 0C088578 mov.w @(disp,pc),Rn */
	r9 += r13;  /* 0C08857A add Rm,Rn */
	IF(0x0C08857Cu); MACL = r10 * r8;  /* 0C08857C mul.l Rm,Rn */
	r9 += 0x4u;  /* 0C08857E add #imm,Rn */
	r5 = (u32)(s32)(s16)R16(r9); UPD(0x0C088582u, 5);  /* 0C088580 mov.w @Rm,Rn */
	IF(0x0C088582u); r8 = MACL;  /* 0C088582 sts macl,Rn */
	r1 = 0xC286578u; UPD(0x0C088586u, 2);  /* 0C088584 mov.l @(disp,pc),Rn */
	r5 += r5;  /* 0C088586 add Rm,Rn */
	r0 = 0xC28EDFCu; UPD(0x0C08858Au, 2);  /* 0C088588 mov.l @(disp,pc),Rn */
	r8 += r1;  /* 0C08858A add Rm,Rn */
	IF(0x0C08858Cu); r2 = (u32)(s32)(s16)R16(r0 + r5); UPD(0x0C08858Eu, 2);  /* 0C08858C mov.w @(r0,Rm),Rn */
	r8 += 0x7Cu;  /* 0C08858E add #imm,Rn */
	W16(r8, r2); UPD(0x0C088592u, 2);  /* 0C088590 mov.w Rm,@Rn */
	r0 = 0x2u;  /* 0C088592 mov #imm,Rn */
	IF(0x0C088594u); r3 = (u32)(s32)(s16)R16(r0 + r14); UPD(0x0C088596u, 2);  /* 0C088594 mov.w @(r0,Rm),Rn */
	r8 += 0x2u;  /* 0C088596 add #imm,Rn */
	W16(r8, r3); UPD(0x0C08859Au, 2);  /* 0C088598 mov.w Rm,@Rn */
	r9 += 0xFFFFFFFCu;  /* 0C08859A add #imm,Rn */
	r6 = 0xC2460ACu; UPD(0x0C08859Eu, 2);  /* 0C08859C mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFF82u;  /* 0C08859E add #imm,Rn */
	r4 = (u32)(s32)(s16)R16(r6); UPD(0x0C0885A2u, 2);  /* 0C0885A0 mov.w @Rm,Rn */
	r13 += 0x1Cu;  /* 0C0885A2 add #imm,Rn */
	r7 = R32(r9); UPD(0x0C0885A6u, 2);  /* 0C0885A4 mov.l @Rm,Rn */
	r5 = r4 & 0xFFFF;  /* 0C0885A6 extu.w Rm,Rn */
	W32(r8, r7); UPD(0x0C0885AAu, 2);  /* 0C0885A8 mov.l Rm,@Rn */
	r4 = r10;  /* 0C0885AA mov Rm,Rn */
	W32(r8 + 0x4u, r5); UPD(0x0C0885AEu, 2);  /* 0C0885AC mov.l Rm,@(disp,Rn) */
	r0 = R32(r9 + 0x8u); UPD(0x0C0885B0u, 1);  /* 0C0885AE mov.l @(disp,Rm),Rn */
	r9 += 0x14u;  /* 0C0885B0 add #imm,Rn */
	W32(r8 + 0x8u, r0); UPD(0x0C0885B4u, 2);  /* 0C0885B2 mov.l Rm,@(disp,Rn) */
	r3 = (u32)(s32)(s16)R16(r9); UPD(0x0C0885B6u, 1);  /* 0C0885B4 mov.w @Rm,Rn */
	r0 = r8;  /* 0C0885B6 mov Rm,Rn */
	r2 = 0x8Au; UPD(0x0C0885BAu, 2);  /* 0C0885B8 mov.w @(disp,pc),Rn */
	r9 += 0xFFFFFFECu;  /* 0C0885BA add #imm,Rn */
	IF(0x0C0885BCu); W16(r0 + r2, r3); UPD(0x0C0885BEu, 2);  /* 0C0885BC mov.w Rm,@(r0,Rn) */
	r2 += 0xFFFFFFFCu;  /* 0C0885BE add #imm,Rn */
	IF(0x0C0885C0u); W16(r0 + r2, r3); UPD(0x0C0885C2u, 2);  /* 0C0885C0 mov.w Rm,@(r0,Rn) */
	r0 = r3;  /* 0C0885C2 mov Rm,Rn */
	r0 += 0x8u;  /* 0C0885C4 add #imm,Rn */
	r7 = 0xC0A8A30u; UPD(0x0C0885C8u, 3);  /* 0C0885C6 mov.l @(disp,pc),Rn */
	IF(0x0C0885C8u); r0 >>= 2;  /* 0C0885C8 shlr2 Rn */
	IF(0x0C0885CAu); r0 >>= 2;  /* 0C0885CA shlr2 Rn */
	r0 &= 0x1Fu;  /* 0C0885CC and #imm,r0 */
	IF(0x0C0885CEu); { u32 t_ = r7; PR = 0x0C0885D2u; W32(r8 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 5); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C0885D2u); }  /* 0C0885CE jsr @Rn */
L_0C0885D2: BLKS(0x0C0885D2u);
	r6 = R32(r11 + 0x24u); UPD(0x0C0885D4u, 1);  /* 0C0885D2 mov.l @(disp,Rm),Rn */
	r4 = R32(r11 + 0x28u); UPD(0x0C0885D6u, 1);  /* 0C0885D4 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x24u, r6); UPD(0x0C0885D8u, 1);  /* 0C0885D6 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x28u, r4); UPD(0x0C0885DAu, 1);  /* 0C0885D8 mov.l Rm,@(disp,Rn) */
	r5 = R32(r9 + 0xCu); UPD(0x0C0885DCu, 1);  /* 0C0885DA mov.l @(disp,Rm),Rn */
	r4 = r10;  /* 0C0885DC mov Rm,Rn */
	W32(r8 + 0x2Cu, r5); UPD(0x0C0885E0u, 2);  /* 0C0885DE mov.l Rm,@(disp,Rn) */
	r3 = R32(r9 + 0x10u); UPD(0x0C0885E2u, 1);  /* 0C0885E0 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x30u, r3); UPD(0x0C0885E4u, 1);  /* 0C0885E2 mov.l Rm,@(disp,Rn) */
	r2 = 0xC0A9AE0u; UPD(0x0C0885E6u, 1);  /* 0C0885E4 mov.l @(disp,pc),Rn */
	r8 += 0x50u;  /* 0C0885E6 add #imm,Rn */
	r0 = R32(r9 + 0x18u); UPD(0x0C0885EAu, 2);  /* 0C0885E8 mov.l @(disp,Rm),Rn */
	IF(0x0C0885EAu); { u32 t_ = r2; PR = 0x0C0885EEu; W32(r8, r0); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C0885EEu); }  /* 0C0885EA jsr @Rn */
L_0C0885EE: BLKS(0x0C0885EEu);
	r0 = 0xB0u; UPD(0x0C0885F0u, 1);  /* 0C0885EE mov.w @(disp,pc),Rn */
	r8 += 0xFFFFFFB0u;  /* 0C0885F0 add #imm,Rn */
	IF(0x0C0885F2u); r10 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C0885F4u, 2);  /* 0C0885F2 mov.b @(r0,Rm),Rn */
	r9 = 0x0u;  /* 0C0885F4 mov #imm,Rn */
	IF(0x0C0885F6u); W8(r0 + r8, r10); UPD(0x0C0885F8u, 2);  /* 0C0885F6 mov.b Rm,@(r0,Rn) */
	r3 = r12;  /* 0C0885F8 mov Rm,Rn */
	r7 = R32(r14 + 0x4u); UPD(0x0C0885FCu, 2);  /* 0C0885FA mov.l @(disp,Rm),Rn */
	r0 = r8;  /* 0C0885FC mov Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r7); UPD(0x0C088600u, 2);  /* 0C0885FE mov.b @Rm,Rn */
	r3 += 0x1u;  /* 0C088600 add #imm,Rn */
	r6 = 0xADu; UPD(0x0C088604u, 2);  /* 0C088602 mov.w @(disp,pc),Rn */
	r4 += 0x1u;  /* 0C088604 add #imm,Rn */
	IF(0x0C088606u); W8(r0 + r6, r4); UPD(0x0C088608u, 2);  /* 0C088606 mov.b Rm,@(r0,Rn) */
	r12 = (u32)(s32)(s16)r3;  /* 0C088608 exts.w Rm,Rn */
	r0 = 0x8Cu; UPD(0x0C08860Cu, 2);  /* 0C08860A mov.w @(disp,pc),Rn */
	r5 = 0xA8u; UPD(0x0C08860Eu, 1);  /* 0C08860C mov.w @(disp,pc),Rn */
	IF(0x0C08860Eu); W32(r0 + r8, r9); UPD(0x0C088610u, 1);  /* 0C08860E mov.l Rm,@(r0,Rn) */
	r5 += r8;  /* 0C088610 add Rm,Rn */
	r5 += 0x1u;  /* 0C088612 add #imm,Rn */
	r0 = 0xCu;  /* 0C088614 mov #imm,Rn */
	T = (s32)r12 > (s32)r0;  /* 0C088616 cmp/gt Rm,Rn */
	{ u32 c_ = !T; W8(r5, r4); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C088570u, 7); goto L_0C088570; } UPD(0x0C08861Cu, 1); goto L_0C08861C; }  /* 0C088618 bf/s */
L_0C08861C: BLKS(0x0C08861Cu);
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C0884D8u, 3); goto L_0C0884D8; }  /* 0C08861C bra */
L_0C088660: BLKS(0x0C088660u);
	r11 = 0xB4u; UPD(0x0C088662u, 1);  /* 0C088660 mov.w @(disp,pc),Rn */
	r0 = R32(r14); UPD(0x0C088664u, 1);  /* 0C088662 mov.l @Rm,Rn */
	IF(0x0C088664u); MACL = r0 * r11;  /* 0C088664 mul.l Rm,Rn */
	r13 = 0xC286578u; UPD(0x0C088668u, 3);  /* 0C088666 mov.l @(disp,pc),Rn */
	IF(0x0C088668u); r11 = MACL;  /* 0C088668 sts macl,Rn */
	r10 = 0xA8u; UPD(0x0C08866Cu, 2);  /* 0C08866A mov.w @(disp,pc),Rn */
	r11 += r13;  /* 0C08866C add Rm,Rn */
	r10 += r11;  /* 0C08866E add Rm,Rn */
	r13 = 0xC28EDFCu; UPD(0x0C088672u, 3);  /* 0C088670 mov.l @(disp,pc),Rn */
	r10 += 0x1u;  /* 0C088672 add #imm,Rn */
	W32(r14 + 0xCu, r12); UPD(0x0C088676u, 2);  /* 0C088674 mov.l Rm,@(disp,Rn) */
	r13 += 0x2u;  /* 0C088676 add #imm,Rn */
	W32(r14 + 0x8u, r10); UPD(0x0C08867Au, 2);  /* 0C088678 mov.l Rm,@(disp,Rn) */
	IF(0x0C08867Au); ;  /* 0C08867A nop */
	UPD(0x0C08867Cu, 1);
L_0C08867C: BLKS(0x0C08867Cu);
	r0 = R32(r14 + 0xCu); UPD(0x0C08867Eu, 1);  /* 0C08867C mov.l @(disp,Rm),Rn */
	r9 = 0xC19B23Cu; UPD(0x0C088680u, 1);  /* 0C08867E mov.l @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r13); r13 += 2; r10 = v_; } UPD(0x0C088682u, 1);  /* 0C088680 mov.w @Rm+,Rn */
	r9 += r0;  /* 0C088682 add Rm,Rn */
	r8 = 0xB4u; UPD(0x0C088686u, 2);  /* 0C088684 mov.w @(disp,pc),Rn */
	r9 += 0x4u;  /* 0C088686 add #imm,Rn */
	IF(0x0C088688u); MACL = r10 * r8;  /* 0C088688 mul.l Rm,Rn */
	r6 = (u32)(s32)(s16)R16(r9); UPD(0x0C08868Cu, 4);  /* 0C08868A mov.w @Rm,Rn */
	r1 = 0xC286578u; UPD(0x0C08868Eu, 1);  /* 0C08868C mov.l @(disp,pc),Rn */
	IF(0x0C08868Eu); r8 = MACL;  /* 0C08868E sts macl,Rn */
	r0 = 0xC28EDFCu; UPD(0x0C088692u, 2);  /* 0C088690 mov.l @(disp,pc),Rn */
	r6 += r6;  /* 0C088692 add Rm,Rn */
	IF(0x0C088694u); r2 = (u32)(s32)(s16)R16(r0 + r6); UPD(0x0C088696u, 2);  /* 0C088694 mov.w @(r0,Rm),Rn */
	r8 += r1;  /* 0C088696 add Rm,Rn */
	r8 += 0x7Cu;  /* 0C088698 add #imm,Rn */
	W16(r8, r2); UPD(0x0C08869Cu, 3);  /* 0C08869A mov.w Rm,@Rn */
	r0 = 0x2u;  /* 0C08869C mov #imm,Rn */
	IF(0x0C08869Eu); r4 = (u32)(s32)(s16)R16(r0 + r14); UPD(0x0C0886A0u, 2);  /* 0C08869E mov.w @(r0,Rm),Rn */
	r8 += 0x2u;  /* 0C0886A0 add #imm,Rn */
	W16(r8, r4); UPD(0x0C0886A4u, 2);  /* 0C0886A2 mov.w Rm,@Rn */
	r9 += 0xFFFFFFFCu;  /* 0C0886A4 add #imm,Rn */
	r5 = 0xC2460ACu; UPD(0x0C0886A8u, 2);  /* 0C0886A6 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFF82u;  /* 0C0886A8 add #imm,Rn */
	r7 = (u32)(s32)(s16)R16(r5); UPD(0x0C0886ACu, 2);  /* 0C0886AA mov.w @Rm,Rn */
	r3 = R32(r9); UPD(0x0C0886AEu, 1);  /* 0C0886AC mov.l @Rm,Rn */
	r6 = r7 & 0xFFFF;  /* 0C0886AE extu.w Rm,Rn */
	W32(r8, r3); UPD(0x0C0886B2u, 2);  /* 0C0886B0 mov.l Rm,@Rn */
	W32(r8 + 0x4u, r6); UPD(0x0C0886B4u, 1);  /* 0C0886B2 mov.l Rm,@(disp,Rn) */
	r0 = R32(r9 + 0x8u); UPD(0x0C0886B6u, 1);  /* 0C0886B4 mov.l @(disp,Rm),Rn */
	r9 += 0x14u;  /* 0C0886B6 add #imm,Rn */
	W32(r8 + 0x8u, r0); UPD(0x0C0886BAu, 2);  /* 0C0886B8 mov.l Rm,@(disp,Rn) */
	r4 = (u32)(s32)(s16)R16(r9); UPD(0x0C0886BCu, 1);  /* 0C0886BA mov.w @Rm,Rn */
	r0 = r8;  /* 0C0886BC mov Rm,Rn */
	r2 = 0x8Au; UPD(0x0C0886C0u, 2);  /* 0C0886BE mov.w @(disp,pc),Rn */
	r9 += 0xFFFFFFECu;  /* 0C0886C0 add #imm,Rn */
	IF(0x0C0886C2u); W16(r0 + r2, r4); UPD(0x0C0886C4u, 2);  /* 0C0886C2 mov.w Rm,@(r0,Rn) */
	r2 += 0xFFFFFFFCu;  /* 0C0886C4 add #imm,Rn */
	IF(0x0C0886C6u); W16(r0 + r2, r4); UPD(0x0C0886C8u, 2);  /* 0C0886C6 mov.w Rm,@(r0,Rn) */
	r0 = r4;  /* 0C0886C8 mov Rm,Rn */
	r0 += 0x8u;  /* 0C0886CA add #imm,Rn */
	r3 = 0xC0A8A30u; UPD(0x0C0886CEu, 3);  /* 0C0886CC mov.l @(disp,pc),Rn */
	IF(0x0C0886CEu); r0 >>= 2;  /* 0C0886CE shlr2 Rn */
	IF(0x0C0886D0u); r0 >>= 2;  /* 0C0886D0 shlr2 Rn */
	r0 &= 0x1Fu;  /* 0C0886D2 and #imm,r0 */
	W32(r8 + 0xCu, r0); UPD(0x0C0886D6u, 4);  /* 0C0886D4 mov.l Rm,@(disp,Rn) */
	IF(0x0C0886D6u); { u32 t_ = r3; PR = 0x0C0886DAu; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C0886DAu); }  /* 0C0886D6 jsr @Rn */
L_0C0886DA: BLKS(0x0C0886DAu);
	r5 = R32(r11 + 0x24u); UPD(0x0C0886DCu, 1);  /* 0C0886DA mov.l @(disp,Rm),Rn */
	r7 = R32(r11 + 0x28u); UPD(0x0C0886DEu, 1);  /* 0C0886DC mov.l @(disp,Rm),Rn */
	W32(r8 + 0x24u, r5); UPD(0x0C0886E0u, 1);  /* 0C0886DE mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x28u, r7); UPD(0x0C0886E2u, 1);  /* 0C0886E0 mov.l Rm,@(disp,Rn) */
	r6 = R32(r9 + 0xCu); UPD(0x0C0886E4u, 1);  /* 0C0886E2 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x2Cu, r6); UPD(0x0C0886E6u, 1);  /* 0C0886E4 mov.l Rm,@(disp,Rn) */
	r4 = R32(r9 + 0x10u); UPD(0x0C0886E8u, 1);  /* 0C0886E6 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x30u, r4); UPD(0x0C0886EAu, 1);  /* 0C0886E8 mov.l Rm,@(disp,Rn) */
	r4 = r10;  /* 0C0886EA mov Rm,Rn */
	r0 = R32(r9 + 0x18u); UPD(0x0C0886EEu, 2);  /* 0C0886EC mov.l @(disp,Rm),Rn */
	r8 += 0x50u;  /* 0C0886EE add #imm,Rn */
	r10 = 0xC0A9AE0u; UPD(0x0C0886F2u, 2);  /* 0C0886F0 mov.l @(disp,pc),Rn */
	IF(0x0C0886F2u); { u32 t_ = r10; PR = 0x0C0886F6u; W32(r8, r0); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C0886F6u); }  /* 0C0886F2 jsr @Rn */
L_0C0886F6: BLKS(0x0C0886F6u);
	r0 = 0xB0u; UPD(0x0C0886F8u, 1);  /* 0C0886F6 mov.w @(disp,pc),Rn */
	r8 += 0xFFFFFFB0u;  /* 0C0886F8 add #imm,Rn */
	IF(0x0C0886FAu); r2 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C0886FCu, 2);  /* 0C0886FA mov.b @(r0,Rm),Rn */
	r6 = r12;  /* 0C0886FC mov Rm,Rn */
	IF(0x0C0886FEu); W8(r0 + r8, r2); UPD(0x0C088700u, 2);  /* 0C0886FE mov.b Rm,@(r0,Rn) */
	r7 = 0x0u;  /* 0C088700 mov #imm,Rn */
	r9 = R32(r14 + 0x8u); UPD(0x0C088704u, 2);  /* 0C088702 mov.l @(disp,Rm),Rn */
	r0 = r8;  /* 0C088704 mov Rm,Rn */
	r5 = 0xA8u; UPD(0x0C088708u, 2);  /* 0C088706 mov.w @(disp,pc),Rn */
	r6 += 0x1u;  /* 0C088708 add #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r9); UPD(0x0C08870Cu, 2);  /* 0C08870A mov.b @Rm,Rn */
	r5 += r8;  /* 0C08870C add Rm,Rn */
	r1 = 0xADu; UPD(0x0C088710u, 2);  /* 0C08870E mov.w @(disp,pc),Rn */
	r3 += 0x1u;  /* 0C088710 add #imm,Rn */
	r5 += 0x1u;  /* 0C088712 add #imm,Rn */
	IF(0x0C088714u); W8(r0 + r1, r3); UPD(0x0C088716u, 3);  /* 0C088714 mov.b Rm,@(r0,Rn) */
	r4 = 0xCu;  /* 0C088716 mov #imm,Rn */
	W8(r5, r3); UPD(0x0C08871Au, 2);  /* 0C088718 mov.b Rm,@Rn */
	r12 = R32(r14 + 0xCu); UPD(0x0C08871Cu, 1);  /* 0C08871A mov.l @(disp,Rm),Rn */
	r12 += 0x1Cu;  /* 0C08871C add #imm,Rn */
	r0 = 0x8Cu; UPD(0x0C088720u, 2);  /* 0C08871E mov.w @(disp,pc),Rn */
	W32(r14 + 0xCu, r12); UPD(0x0C088722u, 1);  /* 0C088720 mov.l Rm,@(disp,Rn) */
	r12 = (u32)(s32)(s16)r6;  /* 0C088722 exts.w Rm,Rn */
	T = (s32)r12 > (s32)r4;  /* 0C088724 cmp/gt Rm,Rn */
	{ u32 c_ = !T; IF(0x0C088728u); W32(r0 + r8, r7); /* slot mov.l Rm,@(r0,Rn) */ if (c_) { UPD(0x0C08867Cu, 5); goto L_0C08867C; } UPD(0x0C08872Au, 1); goto L_0C08872A; }  /* 0C088726 bf/s */
L_0C08872A: BLKS(0x0C08872Au);
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C0884D8u, 3); goto L_0C0884D8; }  /* 0C08872A bra */
}

void blk_f_0C088760(sh3_t *c)
{
	LOCALS;
L_0C088760: BLKS(0x0C088760u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C088762u, 1);  /* 0C088760 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C088764u, 1);  /* 0C088762 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C088764 exts.w Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C088768u, 2);  /* 0C088766 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C08876Au, 1);  /* 0C088768 mov.l Rm,@-Rn */
	r2 = 0xB4u; UPD(0x0C08876Cu, 1);  /* 0C08876A mov.w @(disp,pc),Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C08876Eu, 1);  /* 0C08876C mov.l Rm,@-Rn */
	IF(0x0C08876Eu); MACL = r8 * r2;  /* 0C08876E mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C088772u, 3);  /* 0C088770 mov.l Rm,@-Rn */
	r0 = 0xC286578u; UPD(0x0C088774u, 1);  /* 0C088772 mov.l @(disp,pc),Rn */
	IF(0x0C088774u); r12 = MACL;  /* 0C088774 sts macl,Rn */
	IF(0x0C088776u); r15 -= 4; W32(r15, PR); UPD(0x0C088778u, 2);  /* 0C088776 sts.l pr,@-Rn */
	r12 += r0;  /* 0C088778 add Rm,Rn */
	r2 = R32(r12 + 0x8u); UPD(0x0C08877Cu, 2);  /* 0C08877A mov.l @(disp,Rm),Rn */
	r0 = 0x6u;  /* 0C08877C mov #imm,Rn */
	r2 += 0xFFFFFFFFu;  /* 0C08877E add #imm,Rn */
	T = r2 > r0;  /* 0C088780 cmp/hi Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C08878Au, 6); goto L_0C08878A; } goto L_0C088786; }  /* 0C088782 bf/s */
L_0C088786: BLKS(0x0C088786u);
	{ r10 = R32(r12 + 0x24u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0888F0u, 4); goto L_0C0888F0; }  /* 0C088786 bra */
L_0C08878A: BLKS(0x0C08878Au);
	r0 = 0xC08879Cu;  /* 0C08878A mova @(disp,pc),r0 */
	r2 += r2;  /* 0C08878C add Rm,Rn */
	IF(0x0C08878Eu); r3 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C088790u, 3);  /* 0C08878E mov.w @(r0,Rm),Rn */
	IF(0x0C088790u); { u32 tv_ = (r3 + 0x0C088794u); u32 t_ = PHYS(tv_); IF(0x0C088792u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C088790 braf Rn */
L_0C088806: BLKS(0x0C088806u);
	r15 = r14;  /* 0C088806 mov Rm,Rn */
	IF(0x0C088808u); PR = R32(r15); r15 += 4; UPD(0x0C08880Au, 2);  /* 0C088808 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08880Cu, 1);  /* 0C08880A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08880Eu, 1);  /* 0C08880C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C088810u, 1);  /* 0C08880E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C088812u, 1);  /* 0C088810 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C088814u, 1);  /* 0C088812 mov.l @Rm+,Rn */
	IF(0x0C088814u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C088814 rts */
L_0C0888F0: BLKS(0x0C0888F0u);
	r15 += 0xFFFFFFF8u;  /* 0C0888F0 add #imm,Rn */
	r7 = 0x80000u; UPD(0x0C0888F4u, 2);  /* 0C0888F2 mov.l @(disp,pc),Rn */
	r5 = 0xEu;  /* 0C0888F4 mov #imm,Rn */
	r10 += r7;  /* 0C0888F6 add Rm,Rn */
	r7 = R32(r12 + 0x28u); UPD(0x0C0888FAu, 3);  /* 0C0888F8 mov.l @(disp,Rm),Rn */
	r6 = r10;  /* 0C0888FA mov Rm,Rn */
	r9 = 0xFFC60000u; UPD(0x0C0888FEu, 2);  /* 0C0888FC mov.l @(disp,pc),Rn */
	r7 += r9;  /* 0C0888FE add Rm,Rn */
	r9 = 0xB0u; UPD(0x0C088902u, 2);  /* 0C088900 mov.w @(disp,pc),Rn */
	r9 += r12;  /* 0C088902 add Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r9); UPD(0x0C088906u, 2);  /* 0C088904 mov.b @Rm,Rn */
	r8 = r2 & 0xFF;  /* 0C088906 extu.b Rm,Rn */
	W32(r15, r8); UPD(0x0C08890Au, 2);  /* 0C088908 mov.l Rm,@Rn */
	r8 = 0xA9u; UPD(0x0C08890Cu, 1);  /* 0C08890A mov.w @(disp,pc),Rn */
	r8 += r12;  /* 0C08890C add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r8); UPD(0x0C088910u, 2);  /* 0C08890E mov.b @Rm,Rn */
	r11 = r0 & 0xFF;  /* 0C088910 extu.b Rm,Rn */
	W32(r15 + 0x4u, r11); UPD(0x0C088914u, 2);  /* 0C088912 mov.l Rm,@(disp,Rn) */
	r11 = 0xC0BD6F0u; UPD(0x0C088916u, 1);  /* 0C088914 mov.l @(disp,pc),Rn */
	IF(0x0C088916u); { u32 t_ = r11; PR = 0x0C08891Au; r4 = R32(r12); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C08891Au); }  /* 0C088916 jsr @Rn */
L_0C08891A: BLKS(0x0C08891Au);
	r6 = (u32)(s32)(s8)R8(r9); UPD(0x0C08891Cu, 1);  /* 0C08891A mov.b @Rm,Rn */
	r7 = R32(r12 + 0x28u); UPD(0x0C08891Eu, 1);  /* 0C08891C mov.l @(disp,Rm),Rn */
	r4 = r6 & 0xFF;  /* 0C08891E extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C088922u, 2);  /* 0C088920 mov.l Rm,@Rn */
	r6 = r10;  /* 0C088922 mov Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r8); UPD(0x0C088926u, 2);  /* 0C088924 mov.b @Rm,Rn */
	r5 = 0xFFE30000u; UPD(0x0C088928u, 1);  /* 0C088926 mov.l @(disp,pc),Rn */
	r2 = r3 & 0xFF;  /* 0C088928 extu.b Rm,Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C08892Cu, 2);  /* 0C08892A mov.l Rm,@(disp,Rn) */
	r7 += r5;  /* 0C08892C add Rm,Rn */
	r4 = R32(r12); UPD(0x0C088930u, 2);  /* 0C08892E mov.l @Rm,Rn */
	IF(0x0C088930u); { u32 t_ = r11; PR = 0x0C088934u; r5 = 0xEu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C088934u); }  /* 0C088930 jsr @Rn */
L_0C088934: BLKS(0x0C088934u);
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C088936u, 1);  /* 0C088934 mov.b @Rm,Rn */
	r5 = r0 & 0xFF;  /* 0C088936 extu.b Rm,Rn */
	W32(r15, r5); UPD(0x0C08893Au, 2);  /* 0C088938 mov.l Rm,@Rn */
	r6 = (u32)(s32)(s8)R8(r8); UPD(0x0C08893Cu, 1);  /* 0C08893A mov.b @Rm,Rn */
	r5 = 0xEu;  /* 0C08893C mov #imm,Rn */
	r7 = r6 & 0xFF;  /* 0C08893E extu.b Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C088942u, 3);  /* 0C088940 mov.l Rm,@(disp,Rn) */
	r6 = r10;  /* 0C088942 mov Rm,Rn */
	r4 = R32(r12); UPD(0x0C088946u, 2);  /* 0C088944 mov.l @Rm,Rn */
	IF(0x0C088946u); { u32 t_ = r11; PR = 0x0C08894Au; r7 = R32(r12 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C08894Au); }  /* 0C088946 jsr @Rn */
L_0C08894A: BLKS(0x0C08894Au);
	r3 = (u32)(s32)(s8)R8(r9); UPD(0x0C08894Cu, 1);  /* 0C08894A mov.b @Rm,Rn */
	r6 = r10;  /* 0C08894C mov Rm,Rn */
	r7 = R32(r12 + 0x28u); UPD(0x0C088950u, 2);  /* 0C08894E mov.l @(disp,Rm),Rn */
	r2 = r3 & 0xFF;  /* 0C088950 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C088954u, 2);  /* 0C088952 mov.l Rm,@Rn */
	r0 = (u32)(s32)(s8)R8(r8); UPD(0x0C088956u, 1);  /* 0C088954 mov.b @Rm,Rn */
	r4 = 0x1D0000u; UPD(0x0C088958u, 1);  /* 0C088956 mov.l @(disp,pc),Rn */
	r5 = r0 & 0xFF;  /* 0C088958 extu.b Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C08895Cu, 2);  /* 0C08895A mov.l Rm,@(disp,Rn) */
	r7 += r4;  /* 0C08895C add Rm,Rn */
	r4 = R32(r12); UPD(0x0C088960u, 2);  /* 0C08895E mov.l @Rm,Rn */
	IF(0x0C088960u); { u32 t_ = r11; PR = 0x0C088964u; r5 = 0xEu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C088964u); }  /* 0C088960 jsr @Rn */
L_0C088964: BLKS(0x0C088964u);
	r4 = (u32)(s32)(s8)R8(r9); UPD(0x0C088966u, 1);  /* 0C088964 mov.b @Rm,Rn */
	r5 = 0xEu;  /* 0C088966 mov #imm,Rn */
	r7 = R32(r12 + 0x28u); UPD(0x0C08896Au, 2);  /* 0C088968 mov.l @(disp,Rm),Rn */
	r3 = r4 & 0xFF;  /* 0C08896A extu.b Rm,Rn */
	W32(r15, r3); UPD(0x0C08896Eu, 2);  /* 0C08896C mov.l Rm,@Rn */
	r2 = (u32)(s32)(s8)R8(r8); UPD(0x0C088970u, 1);  /* 0C08896E mov.b @Rm,Rn */
	r6 = 0x3A0000u; UPD(0x0C088972u, 1);  /* 0C088970 mov.l @(disp,pc),Rn */
	r0 = r2 & 0xFF;  /* 0C088972 extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C088976u, 2);  /* 0C088974 mov.l Rm,@(disp,Rn) */
	r7 += r6;  /* 0C088976 add Rm,Rn */
	r6 = r10;  /* 0C088978 mov Rm,Rn */
	IF(0x0C08897Au); { u32 t_ = r11; PR = 0x0C08897Eu; r4 = R32(r12); /* slot mov.l @Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C08897Eu); }  /* 0C08897A jsr @Rn */
L_0C08897E: BLKS(0x0C08897Eu);
	r5 = 0xA5u; UPD(0x0C088980u, 1);  /* 0C08897E mov.w @(disp,pc),Rn */
	r0 = r12;  /* 0C088980 mov Rm,Rn */
	IF(0x0C088982u); r10 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C088984u, 2);  /* 0C088982 mov.b @(r0,Rm),Rn */
	r15 += 0x8u;  /* 0C088984 add #imm,Rn */
	r6 = 0xC19B3A8u; UPD(0x0C088988u, 2);  /* 0C088986 mov.l @(disp,pc),Rn */
	IF(0x0C088988u); r10 <<= 2;  /* 0C088988 shll2 Rn */
	r5 = R32(r12 + 0x24u); UPD(0x0C08898Cu, 2);  /* 0C08898A mov.l @(disp,Rm),Rn */
	r0 = r10;  /* 0C08898C mov Rm,Rn */
	r7 = 0x40000u; UPD(0x0C088990u, 2);  /* 0C08898E mov.l @(disp,pc),Rn */
	r8 = 0xC07DF30u; UPD(0x0C088992u, 1);  /* 0C088990 mov.l @(disp,pc),Rn */
	r5 += r7;  /* 0C088992 add Rm,Rn */
	IF(0x0C088994u); r4 = R32(r0 + r6); UPD(0x0C088996u, 2);  /* 0C088994 mov.l @(r0,Rm),Rn */
	r1 = (u32)(s32)(s8)R8(r9); UPD(0x0C088998u, 1);  /* 0C088996 mov.b @Rm,Rn */
	r6 = R32(r12 + 0x28u); UPD(0x0C08899Au, 1);  /* 0C088998 mov.l @(disp,Rm),Rn */
	IF(0x0C08899Au); { u32 t_ = r8; PR = 0x0C08899Eu; r7 = r1 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07DF30, 0x0C07DF30u, 0x0C08899Eu); }  /* 0C08899A jsr @Rn */
L_0C08899E: BLKS(0x0C08899Eu);
	r4 = 0x0u;  /* 0C08899E mov #imm,Rn */
	{ W32(r12, r4); /* slot mov.l Rm,@Rn */ UPD(0x0C088806u, 4); goto L_0C088806; }  /* 0C0889A0 bra */
}

void blk_f_0C0887B0(sh3_t *c)
{
	LOCALS;
L_0C0887B0: BLKS(0x0C0887B0u);
	r10 = 0xB4u; UPD(0x0C0887B2u, 1);  /* 0C0887B0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0887B2 add #imm,Rn */
	IF(0x0C0887B4u); MACL = r8 * r10;  /* 0C0887B4 mul.l Rm,Rn */
	r11 = 0xC286578u; UPD(0x0C0887B8u, 4);  /* 0C0887B6 mov.l @(disp,pc),Rn */
	IF(0x0C0887B8u); r9 = MACL;  /* 0C0887B8 sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C0887BCu, 2);  /* 0C0887BA mov.w @(disp,pc),Rn */
	r9 += r11;  /* 0C0887BC add Rm,Rn */
	IF(0x0C0887BEu); r5 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0887C0u, 2);  /* 0C0887BE mov.b @(r0,Rm),Rn */
	r6 = r5 & 0xFF;  /* 0C0887C0 extu.b Rm,Rn */
	W32(r15, r6); UPD(0x0C0887C4u, 2);  /* 0C0887C2 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0887C4 add #imm,Rn */
	IF(0x0C0887C6u); r4 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C0887C8u, 2);  /* 0C0887C6 mov.b @(r0,Rm),Rn */
	r5 = 0x5u;  /* 0C0887C8 mov #imm,Rn */
	r3 = r4 & 0xFF;  /* 0C0887CA extu.b Rm,Rn */
	r12 = 0xC0BECB0u; UPD(0x0C0887CEu, 3);  /* 0C0887CC mov.l @(disp,pc),Rn */
	W32(r15 + 0x4u, r3); UPD(0x0C0887D0u, 1);  /* 0C0887CE mov.l Rm,@(disp,Rn) */
	r4 = R32(r9); UPD(0x0C0887D2u, 1);  /* 0C0887D0 mov.l @Rm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C0887D4u, 1);  /* 0C0887D2 mov.l @(disp,Rm),Rn */
	IF(0x0C0887D4u); { u32 t_ = r12; PR = 0x0C0887D8u; r7 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BECB0, 0x0C0BECB0u, 0x0C0887D8u); }  /* 0C0887D4 jsr @Rn */
L_0C0887D8: BLKS(0x0C0887D8u);
	r12 = 0xC0A8B50u; UPD(0x0C0887DAu, 1);  /* 0C0887D8 mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C0887DA mov Rm,Rn */
	IF(0x0C0887DCu); { u32 t_ = r12; PR = 0x0C0887E0u; r15 += 0x8u; /* slot add #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C0887E0u); }  /* 0C0887DC jsr @Rn */
L_0C0887E0: BLKS(0x0C0887E0u);
	IF(0x0C0887E0u); T = (s32)r0 >= 0;  /* 0C0887E0 cmp/pz Rn */
	{ u32 c_ = !T; r8 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C088802u, 4); goto L_0C088802; } goto L_0C0887E6; }  /* 0C0887E2 bf/s */
L_0C0887E6: BLKS(0x0C0887E6u);
	r12 = 0xC07DE60u; UPD(0x0C0887E8u, 2);  /* 0C0887E6 mov.l @(disp,pc),Rn */
	r4 = 0x3u;  /* 0C0887E8 mov #imm,Rn */
	r5 = r0;  /* 0C0887EA mov Rm,Rn */
	r6 = R32(r9 + 0x2Cu); UPD(0x0C0887EEu, 3);  /* 0C0887EC mov.l @(disp,Rm),Rn */
	IF(0x0C0887EEu); { u32 t_ = r12; PR = 0x0C0887F2u; r7 = R32(r9 + 0x30u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07DE60, 0x0C07DE60u, 0x0C0887F2u); }  /* 0C0887EE jsr @Rn */
L_0C0887F2: BLKS(0x0C0887F2u);
	IF(0x0C0887F2u); MACL = r8 * r10;  /* 0C0887F2 mul.l Rm,Rn */
	r0 = 0xA5u; UPD(0x0C0887F6u, 3);  /* 0C0887F4 mov.w @(disp,pc),Rn */
	IF(0x0C0887F6u); r10 = MACL;  /* 0C0887F6 sts macl,Rn */
	r10 += r11;  /* 0C0887F8 add Rm,Rn */
	r10 += r0;  /* 0C0887FA add Rm,Rn */
	r11 = (u32)(s32)(s8)R8(r10); UPD(0x0C0887FEu, 4);  /* 0C0887FC mov.b @Rm,Rn */
	r11 += 0x1u;  /* 0C0887FE add #imm,Rn */
	W8(r10, r11); UPD(0x0C088802u, 2);  /* 0C088800 mov.b Rm,@Rn */
L_0C088802: BLKS(0x0C088802u);
	r4 = 0x0u;  /* 0C088802 mov #imm,Rn */
	W32(r9, r4); UPD(0x0C088806u, 2);  /* 0C088804 mov.l Rm,@Rn */
	r15 = r14;  /* 0C088806 mov Rm,Rn */
	IF(0x0C088808u); PR = R32(r15); r15 += 4; UPD(0x0C08880Au, 2);  /* 0C088808 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08880Cu, 1);  /* 0C08880A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08880Eu, 1);  /* 0C08880C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C088810u, 1);  /* 0C08880E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C088812u, 1);  /* 0C088810 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C088814u, 1);  /* 0C088812 mov.l @Rm+,Rn */
	IF(0x0C088814u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C088814 rts */
}

void blk_f_0C088820(sh3_t *c)
{
	LOCALS;
	goto L_0C088820;
L_0C088806: BLKS(0x0C088806u);
	r15 = r14;  /* 0C088806 mov Rm,Rn */
	IF(0x0C088808u); PR = R32(r15); r15 += 4; UPD(0x0C08880Au, 2);  /* 0C088808 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08880Cu, 1);  /* 0C08880A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08880Eu, 1);  /* 0C08880C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C088810u, 1);  /* 0C08880E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C088812u, 1);  /* 0C088810 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C088814u, 1);  /* 0C088812 mov.l @Rm+,Rn */
	IF(0x0C088814u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C088814 rts */
L_0C088820: BLKS(0x0C088820u);
	r6 = 0xB4u; UPD(0x0C088822u, 1);  /* 0C088820 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C088822 add #imm,Rn */
	IF(0x0C088824u); MACL = r8 * r6;  /* 0C088824 mul.l Rm,Rn */
	r4 = 0xC286578u; UPD(0x0C088828u, 4);  /* 0C088826 mov.l @(disp,pc),Rn */
	r5 = 0x4u;  /* 0C088828 mov #imm,Rn */
	r0 = 0xB0u; UPD(0x0C08882Cu, 2);  /* 0C08882A mov.w @(disp,pc),Rn */
	IF(0x0C08882Cu); r8 = MACL;  /* 0C08882C sts macl,Rn */
	r8 += r4;  /* 0C08882E add Rm,Rn */
	IF(0x0C088830u); r3 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C088832u, 3);  /* 0C088830 mov.b @(r0,Rm),Rn */
	r7 = r3 & 0xFF;  /* 0C088832 extu.b Rm,Rn */
	W32(r15, r7); UPD(0x0C088836u, 2);  /* 0C088834 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C088836 add #imm,Rn */
	IF(0x0C088838u); r9 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C08883Au, 2);  /* 0C088838 mov.b @(r0,Rm),Rn */
	r2 = r9 & 0xFF;  /* 0C08883A extu.b Rm,Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C08883Eu, 2);  /* 0C08883C mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C088840u, 1);  /* 0C08883E mov.l @Rm,Rn */
	r11 = 0xC0BD6F0u; UPD(0x0C088842u, 1);  /* 0C088840 mov.l @(disp,pc),Rn */
	r10 = 0x0u;  /* 0C088842 mov #imm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C088846u, 2);  /* 0C088844 mov.l @(disp,Rm),Rn */
	IF(0x0C088846u); { u32 t_ = r11; PR = 0x0C08884Au; r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C08884Au); }  /* 0C088846 jsr @Rn */
L_0C08884A: BLKS(0x0C08884Au);
	W32(r8, r10); UPD(0x0C08884Cu, 1);  /* 0C08884A mov.l Rm,@Rn */
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C088806u, 3); goto L_0C088806; }  /* 0C08884C bra */
}

void blk_f_0C088850(sh3_t *c)
{
	LOCALS;
	goto L_0C088850;
L_0C088802: BLKS(0x0C088802u);
	r4 = 0x0u;  /* 0C088802 mov #imm,Rn */
	W32(r9, r4); UPD(0x0C088806u, 2);  /* 0C088804 mov.l Rm,@Rn */
	r15 = r14;  /* 0C088806 mov Rm,Rn */
	IF(0x0C088808u); PR = R32(r15); r15 += 4; UPD(0x0C08880Au, 2);  /* 0C088808 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08880Cu, 1);  /* 0C08880A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08880Eu, 1);  /* 0C08880C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C088810u, 1);  /* 0C08880E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C088812u, 1);  /* 0C088810 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C088814u, 1);  /* 0C088812 mov.l @Rm+,Rn */
	IF(0x0C088814u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C088814 rts */
L_0C088850: BLKS(0x0C088850u);
	r10 = 0xB4u; UPD(0x0C088852u, 1);  /* 0C088850 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C088852 add #imm,Rn */
	IF(0x0C088854u); MACL = r8 * r10;  /* 0C088854 mul.l Rm,Rn */
	r11 = 0xC286578u; UPD(0x0C088858u, 4);  /* 0C088856 mov.l @(disp,pc),Rn */
	IF(0x0C088858u); r9 = MACL;  /* 0C088858 sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C08885Cu, 2);  /* 0C08885A mov.w @(disp,pc),Rn */
	r9 += r11;  /* 0C08885C add Rm,Rn */
	IF(0x0C08885Eu); r3 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C088860u, 2);  /* 0C08885E mov.b @(r0,Rm),Rn */
	r7 = r3 & 0xFF;  /* 0C088860 extu.b Rm,Rn */
	W32(r15, r7); UPD(0x0C088864u, 2);  /* 0C088862 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C088864 add #imm,Rn */
	IF(0x0C088866u); r2 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C088868u, 2);  /* 0C088866 mov.b @(r0,Rm),Rn */
	r5 = r2 & 0xFF;  /* 0C088868 extu.b Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C08886Cu, 2);  /* 0C08886A mov.l Rm,@(disp,Rn) */
	r12 = 0xC0BECB0u; UPD(0x0C08886Eu, 1);  /* 0C08886C mov.l @(disp,pc),Rn */
	r5 = 0x3u;  /* 0C08886E mov #imm,Rn */
	r4 = R32(r9); UPD(0x0C088872u, 2);  /* 0C088870 mov.l @Rm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C088874u, 1);  /* 0C088872 mov.l @(disp,Rm),Rn */
	IF(0x0C088874u); { u32 t_ = r12; PR = 0x0C088878u; r7 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BECB0, 0x0C0BECB0u, 0x0C088878u); }  /* 0C088874 jsr @Rn */
L_0C088878: BLKS(0x0C088878u);
	r4 = r8;  /* 0C088878 mov Rm,Rn */
	r8 = 0xC0A8B50u; UPD(0x0C08887Cu, 2);  /* 0C08887A mov.l @(disp,pc),Rn */
	IF(0x0C08887Cu); { u32 t_ = r8; PR = 0x0C088880u; r15 += 0x8u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C088880u); }  /* 0C08887C jsr @Rn */
L_0C088880: BLKS(0x0C088880u);
	IF(0x0C088880u); T = (s32)r0 >= 0;  /* 0C088880 cmp/pz Rn */
	{ u32 c_ = !T; r8 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C088802u, 4); goto L_0C088802; } goto L_0C088886; }  /* 0C088882 bf/s */
L_0C088886: BLKS(0x0C088886u);
	r12 = 0xC07DE60u; UPD(0x0C088888u, 2);  /* 0C088886 mov.l @(disp,pc),Rn */
	r4 = 0x8u;  /* 0C088888 mov #imm,Rn */
	r5 = r0;  /* 0C08888A mov Rm,Rn */
	r6 = R32(r9 + 0x2Cu); UPD(0x0C08888Eu, 3);  /* 0C08888C mov.l @(disp,Rm),Rn */
	IF(0x0C08888Eu); { u32 t_ = r12; PR = 0x0C088892u; r7 = R32(r9 + 0x30u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07DE60, 0x0C07DE60u, 0x0C088892u); }  /* 0C08888E jsr @Rn */
L_0C088892: BLKS(0x0C088892u);
	IF(0x0C088892u); MACL = r8 * r10;  /* 0C088892 mul.l Rm,Rn */
	r0 = 0xA5u; UPD(0x0C088896u, 3);  /* 0C088894 mov.w @(disp,pc),Rn */
	r4 = 0x8u;  /* 0C088896 mov #imm,Rn */
	IF(0x0C088898u); r10 = MACL;  /* 0C088898 sts macl,Rn */
	r10 += r11;  /* 0C08889A add Rm,Rn */
	r11 = 0xC062780u; UPD(0x0C08889Eu, 4);  /* 0C08889C mov.l @(disp,pc),Rn */
	IF(0x0C08889Eu); { u32 t_ = r11; PR = 0x0C0888A2u; r10 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0888A2u); }  /* 0C08889E jsr @Rn */
L_0C0888A2: BLKS(0x0C0888A2u);
	{ W8(r10, r0); /* slot mov.b Rm,@Rn */ UPD(0x0C088802u, 3); goto L_0C088802; }  /* 0C0888A2 bra */
}

void blk_f_0C0888B0(sh3_t *c)
{
	LOCALS;
	goto L_0C0888B0;
L_0C088806: BLKS(0x0C088806u);
	r15 = r14;  /* 0C088806 mov Rm,Rn */
	IF(0x0C088808u); PR = R32(r15); r15 += 4; UPD(0x0C08880Au, 2);  /* 0C088808 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08880Cu, 1);  /* 0C08880A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08880Eu, 1);  /* 0C08880C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C088810u, 1);  /* 0C08880E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C088812u, 1);  /* 0C088810 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C088814u, 1);  /* 0C088812 mov.l @Rm+,Rn */
	IF(0x0C088814u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C088814 rts */
L_0C088840: BLKS(0x0C088840u);
	r11 = 0xC0BD6F0u; UPD(0x0C088842u, 1);  /* 0C088840 mov.l @(disp,pc),Rn */
	r10 = 0x0u;  /* 0C088842 mov #imm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C088846u, 2);  /* 0C088844 mov.l @(disp,Rm),Rn */
	IF(0x0C088846u); { u32 t_ = r11; PR = 0x0C08884Au; r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C08884Au); }  /* 0C088846 jsr @Rn */
L_0C08884A: BLKS(0x0C08884Au);
	W32(r8, r10); UPD(0x0C08884Cu, 1);  /* 0C08884A mov.l Rm,@Rn */
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C088806u, 3); goto L_0C088806; }  /* 0C08884C bra */
L_0C0888B0: BLKS(0x0C0888B0u);
	r3 = 0xB4u; UPD(0x0C0888B2u, 1);  /* 0C0888B0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0888B2 add #imm,Rn */
	IF(0x0C0888B4u); MACL = r8 * r3;  /* 0C0888B4 mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C0888B8u, 4);  /* 0C0888B6 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C0888BAu, 1);  /* 0C0888B8 mov.w @(disp,pc),Rn */
	IF(0x0C0888BAu); r8 = MACL;  /* 0C0888BA sts macl,Rn */
	r8 += r7;  /* 0C0888BC add Rm,Rn */
	IF(0x0C0888BEu); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0888C0u, 3);  /* 0C0888BE mov.b @(r0,Rm),Rn */
	r5 = r2 & 0xFF;  /* 0C0888C0 extu.b Rm,Rn */
	W32(r15, r5); UPD(0x0C0888C4u, 2);  /* 0C0888C2 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0888C4 add #imm,Rn */
	IF(0x0C0888C6u); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0888C8u, 2);  /* 0C0888C6 mov.b @(r0,Rm),Rn */
	r5 = 0x3u;  /* 0C0888C8 mov #imm,Rn */
	r9 = r6 & 0xFF;  /* 0C0888CA extu.b Rm,Rn */
	W32(r15 + 0x4u, r9); UPD(0x0C0888CEu, 3);  /* 0C0888CC mov.l Rm,@(disp,Rn) */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C088840u, 3); goto L_0C088840; }  /* 0C0888CE bra */
}

void blk_f_0C0889D0(sh3_t *c)
{
	LOCALS;
	goto L_0C0889D0;
L_0C088760: BLKS(0x0C088760u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C088762u, 1);  /* 0C088760 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C088764u, 1);  /* 0C088762 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C088764 exts.w Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C088768u, 2);  /* 0C088766 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C08876Au, 1);  /* 0C088768 mov.l Rm,@-Rn */
	r2 = 0xB4u; UPD(0x0C08876Cu, 1);  /* 0C08876A mov.w @(disp,pc),Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C08876Eu, 1);  /* 0C08876C mov.l Rm,@-Rn */
	IF(0x0C08876Eu); MACL = r8 * r2;  /* 0C08876E mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C088772u, 3);  /* 0C088770 mov.l Rm,@-Rn */
	r0 = 0xC286578u; UPD(0x0C088774u, 1);  /* 0C088772 mov.l @(disp,pc),Rn */
	IF(0x0C088774u); r12 = MACL;  /* 0C088774 sts macl,Rn */
	IF(0x0C088776u); r15 -= 4; W32(r15, PR); UPD(0x0C088778u, 2);  /* 0C088776 sts.l pr,@-Rn */
	r12 += r0;  /* 0C088778 add Rm,Rn */
	r2 = R32(r12 + 0x8u); UPD(0x0C08877Cu, 2);  /* 0C08877A mov.l @(disp,Rm),Rn */
	r0 = 0x6u;  /* 0C08877C mov #imm,Rn */
	r2 += 0xFFFFFFFFu;  /* 0C08877E add #imm,Rn */
	T = r2 > r0;  /* 0C088780 cmp/hi Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C08878Au, 6); goto L_0C08878A; } goto L_0C088786; }  /* 0C088782 bf/s */
L_0C088786: BLKS(0x0C088786u);
	{ r10 = R32(r12 + 0x24u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C0888F0u, 4); goto L_0C0888F0; }  /* 0C088786 bra */
L_0C08878A: BLKS(0x0C08878Au);
	r0 = 0xC08879Cu;  /* 0C08878A mova @(disp,pc),r0 */
	r2 += r2;  /* 0C08878C add Rm,Rn */
	IF(0x0C08878Eu); r3 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C088790u, 3);  /* 0C08878E mov.w @(r0,Rm),Rn */
	IF(0x0C088790u); { u32 tv_ = (r3 + 0x0C088794u); u32 t_ = PHYS(tv_); IF(0x0C088792u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C088790 braf Rn */
L_0C088806: BLKS(0x0C088806u);
	r15 = r14;  /* 0C088806 mov Rm,Rn */
	IF(0x0C088808u); PR = R32(r15); r15 += 4; UPD(0x0C08880Au, 2);  /* 0C088808 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08880Cu, 1);  /* 0C08880A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08880Eu, 1);  /* 0C08880C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C088810u, 1);  /* 0C08880E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C088812u, 1);  /* 0C088810 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C088814u, 1);  /* 0C088812 mov.l @Rm+,Rn */
	IF(0x0C088814u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C088814 rts */
L_0C0888F0: BLKS(0x0C0888F0u);
	r15 += 0xFFFFFFF8u;  /* 0C0888F0 add #imm,Rn */
	r7 = 0x80000u; UPD(0x0C0888F4u, 2);  /* 0C0888F2 mov.l @(disp,pc),Rn */
	r5 = 0xEu;  /* 0C0888F4 mov #imm,Rn */
	r10 += r7;  /* 0C0888F6 add Rm,Rn */
	r7 = R32(r12 + 0x28u); UPD(0x0C0888FAu, 3);  /* 0C0888F8 mov.l @(disp,Rm),Rn */
	r6 = r10;  /* 0C0888FA mov Rm,Rn */
	r9 = 0xFFC60000u; UPD(0x0C0888FEu, 2);  /* 0C0888FC mov.l @(disp,pc),Rn */
	r7 += r9;  /* 0C0888FE add Rm,Rn */
	r9 = 0xB0u; UPD(0x0C088902u, 2);  /* 0C088900 mov.w @(disp,pc),Rn */
	r9 += r12;  /* 0C088902 add Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r9); UPD(0x0C088906u, 2);  /* 0C088904 mov.b @Rm,Rn */
	r8 = r2 & 0xFF;  /* 0C088906 extu.b Rm,Rn */
	W32(r15, r8); UPD(0x0C08890Au, 2);  /* 0C088908 mov.l Rm,@Rn */
	r8 = 0xA9u; UPD(0x0C08890Cu, 1);  /* 0C08890A mov.w @(disp,pc),Rn */
	r8 += r12;  /* 0C08890C add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r8); UPD(0x0C088910u, 2);  /* 0C08890E mov.b @Rm,Rn */
	r11 = r0 & 0xFF;  /* 0C088910 extu.b Rm,Rn */
	W32(r15 + 0x4u, r11); UPD(0x0C088914u, 2);  /* 0C088912 mov.l Rm,@(disp,Rn) */
	r11 = 0xC0BD6F0u; UPD(0x0C088916u, 1);  /* 0C088914 mov.l @(disp,pc),Rn */
	IF(0x0C088916u); { u32 t_ = r11; PR = 0x0C08891Au; r4 = R32(r12); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C08891Au); }  /* 0C088916 jsr @Rn */
L_0C08891A: BLKS(0x0C08891Au);
	r6 = (u32)(s32)(s8)R8(r9); UPD(0x0C08891Cu, 1);  /* 0C08891A mov.b @Rm,Rn */
	r7 = R32(r12 + 0x28u); UPD(0x0C08891Eu, 1);  /* 0C08891C mov.l @(disp,Rm),Rn */
	r4 = r6 & 0xFF;  /* 0C08891E extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C088922u, 2);  /* 0C088920 mov.l Rm,@Rn */
	r6 = r10;  /* 0C088922 mov Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r8); UPD(0x0C088926u, 2);  /* 0C088924 mov.b @Rm,Rn */
	r5 = 0xFFE30000u; UPD(0x0C088928u, 1);  /* 0C088926 mov.l @(disp,pc),Rn */
	r2 = r3 & 0xFF;  /* 0C088928 extu.b Rm,Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C08892Cu, 2);  /* 0C08892A mov.l Rm,@(disp,Rn) */
	r7 += r5;  /* 0C08892C add Rm,Rn */
	r4 = R32(r12); UPD(0x0C088930u, 2);  /* 0C08892E mov.l @Rm,Rn */
	IF(0x0C088930u); { u32 t_ = r11; PR = 0x0C088934u; r5 = 0xEu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C088934u); }  /* 0C088930 jsr @Rn */
L_0C088934: BLKS(0x0C088934u);
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C088936u, 1);  /* 0C088934 mov.b @Rm,Rn */
	r5 = r0 & 0xFF;  /* 0C088936 extu.b Rm,Rn */
	W32(r15, r5); UPD(0x0C08893Au, 2);  /* 0C088938 mov.l Rm,@Rn */
	r6 = (u32)(s32)(s8)R8(r8); UPD(0x0C08893Cu, 1);  /* 0C08893A mov.b @Rm,Rn */
	r5 = 0xEu;  /* 0C08893C mov #imm,Rn */
	r7 = r6 & 0xFF;  /* 0C08893E extu.b Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C088942u, 3);  /* 0C088940 mov.l Rm,@(disp,Rn) */
	r6 = r10;  /* 0C088942 mov Rm,Rn */
	r4 = R32(r12); UPD(0x0C088946u, 2);  /* 0C088944 mov.l @Rm,Rn */
	IF(0x0C088946u); { u32 t_ = r11; PR = 0x0C08894Au; r7 = R32(r12 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C08894Au); }  /* 0C088946 jsr @Rn */
L_0C08894A: BLKS(0x0C08894Au);
	r3 = (u32)(s32)(s8)R8(r9); UPD(0x0C08894Cu, 1);  /* 0C08894A mov.b @Rm,Rn */
	r6 = r10;  /* 0C08894C mov Rm,Rn */
	r7 = R32(r12 + 0x28u); UPD(0x0C088950u, 2);  /* 0C08894E mov.l @(disp,Rm),Rn */
	r2 = r3 & 0xFF;  /* 0C088950 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C088954u, 2);  /* 0C088952 mov.l Rm,@Rn */
	r0 = (u32)(s32)(s8)R8(r8); UPD(0x0C088956u, 1);  /* 0C088954 mov.b @Rm,Rn */
	r4 = 0x1D0000u; UPD(0x0C088958u, 1);  /* 0C088956 mov.l @(disp,pc),Rn */
	r5 = r0 & 0xFF;  /* 0C088958 extu.b Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C08895Cu, 2);  /* 0C08895A mov.l Rm,@(disp,Rn) */
	r7 += r4;  /* 0C08895C add Rm,Rn */
	r4 = R32(r12); UPD(0x0C088960u, 2);  /* 0C08895E mov.l @Rm,Rn */
	IF(0x0C088960u); { u32 t_ = r11; PR = 0x0C088964u; r5 = 0xEu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C088964u); }  /* 0C088960 jsr @Rn */
L_0C088964: BLKS(0x0C088964u);
	r4 = (u32)(s32)(s8)R8(r9); UPD(0x0C088966u, 1);  /* 0C088964 mov.b @Rm,Rn */
	r5 = 0xEu;  /* 0C088966 mov #imm,Rn */
	r7 = R32(r12 + 0x28u); UPD(0x0C08896Au, 2);  /* 0C088968 mov.l @(disp,Rm),Rn */
	r3 = r4 & 0xFF;  /* 0C08896A extu.b Rm,Rn */
	W32(r15, r3); UPD(0x0C08896Eu, 2);  /* 0C08896C mov.l Rm,@Rn */
	r2 = (u32)(s32)(s8)R8(r8); UPD(0x0C088970u, 1);  /* 0C08896E mov.b @Rm,Rn */
	r6 = 0x3A0000u; UPD(0x0C088972u, 1);  /* 0C088970 mov.l @(disp,pc),Rn */
	r0 = r2 & 0xFF;  /* 0C088972 extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C088976u, 2);  /* 0C088974 mov.l Rm,@(disp,Rn) */
	r7 += r6;  /* 0C088976 add Rm,Rn */
	r6 = r10;  /* 0C088978 mov Rm,Rn */
	IF(0x0C08897Au); { u32 t_ = r11; PR = 0x0C08897Eu; r4 = R32(r12); /* slot mov.l @Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C08897Eu); }  /* 0C08897A jsr @Rn */
L_0C08897E: BLKS(0x0C08897Eu);
	r5 = 0xA5u; UPD(0x0C088980u, 1);  /* 0C08897E mov.w @(disp,pc),Rn */
	r0 = r12;  /* 0C088980 mov Rm,Rn */
	IF(0x0C088982u); r10 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C088984u, 2);  /* 0C088982 mov.b @(r0,Rm),Rn */
	r15 += 0x8u;  /* 0C088984 add #imm,Rn */
	r6 = 0xC19B3A8u; UPD(0x0C088988u, 2);  /* 0C088986 mov.l @(disp,pc),Rn */
	IF(0x0C088988u); r10 <<= 2;  /* 0C088988 shll2 Rn */
	r5 = R32(r12 + 0x24u); UPD(0x0C08898Cu, 2);  /* 0C08898A mov.l @(disp,Rm),Rn */
	r0 = r10;  /* 0C08898C mov Rm,Rn */
	r7 = 0x40000u; UPD(0x0C088990u, 2);  /* 0C08898E mov.l @(disp,pc),Rn */
	r8 = 0xC07DF30u; UPD(0x0C088992u, 1);  /* 0C088990 mov.l @(disp,pc),Rn */
	r5 += r7;  /* 0C088992 add Rm,Rn */
	IF(0x0C088994u); r4 = R32(r0 + r6); UPD(0x0C088996u, 2);  /* 0C088994 mov.l @(r0,Rm),Rn */
	r1 = (u32)(s32)(s8)R8(r9); UPD(0x0C088998u, 1);  /* 0C088996 mov.b @Rm,Rn */
	r6 = R32(r12 + 0x28u); UPD(0x0C08899Au, 1);  /* 0C088998 mov.l @(disp,Rm),Rn */
	IF(0x0C08899Au); { u32 t_ = r8; PR = 0x0C08899Eu; r7 = r1 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07DF30, 0x0C07DF30u, 0x0C08899Eu); }  /* 0C08899A jsr @Rn */
L_0C08899E: BLKS(0x0C08899Eu);
	r4 = 0x0u;  /* 0C08899E mov #imm,Rn */
	{ W32(r12, r4); /* slot mov.l Rm,@Rn */ UPD(0x0C088806u, 4); goto L_0C088806; }  /* 0C0889A0 bra */
L_0C0889D0: BLKS(0x0C0889D0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0889D2u, 1);  /* 0C0889D0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0889D4u, 1);  /* 0C0889D2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0889D6u, 1);  /* 0C0889D4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0889D8u, 1);  /* 0C0889D6 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0889DAu, 1);  /* 0C0889D8 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0889DCu, 1);  /* 0C0889DA mov.l Rm,@-Rn */
	r3 = 0xB4u; UPD(0x0C0889DEu, 1);  /* 0C0889DC mov.w @(disp,pc),Rn */
	r13 = (u32)(s32)(s16)r4;  /* 0C0889DE exts.w Rm,Rn */
	IF(0x0C0889E0u); MACL = r13 * r3;  /* 0C0889E0 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0889E4u, 4);  /* 0C0889E2 mov.l Rm,@-Rn */
	r0 = 0xC286578u; UPD(0x0C0889E6u, 1);  /* 0C0889E4 mov.l @(disp,pc),Rn */
	IF(0x0C0889E6u); r2 = MACL;  /* 0C0889E6 sts macl,Rn */
	IF(0x0C0889E8u); r15 -= 4; W32(r15, PR); UPD(0x0C0889EAu, 2);  /* 0C0889E8 sts.l pr,@-Rn */
	r0 += r2;  /* 0C0889EA add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C0889EEu, 2);  /* 0C0889EC mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0889EE add #imm,Rn */
	r2 += 0xFFFFFFFFu;  /* 0C0889F0 add #imm,Rn */
	r0 = 0x6u;  /* 0C0889F2 mov #imm,Rn */
	T = r2 > r0;  /* 0C0889F4 cmp/hi Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0889FEu, 7); goto L_0C0889FE; } goto L_0C0889FA; }  /* 0C0889F6 bf/s */
L_0C0889FA: BLKS(0x0C0889FAu);
	{ r14 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C088B06u, 4); goto L_0C088B06; }  /* 0C0889FA bra */
L_0C0889FE: BLKS(0x0C0889FEu);
	r0 = 0xC088A10u;  /* 0C0889FE mova @(disp,pc),r0 */
	r2 += r2;  /* 0C088A00 add Rm,Rn */
	IF(0x0C088A02u); r4 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C088A04u, 3);  /* 0C088A02 mov.w @(r0,Rm),Rn */
	IF(0x0C088A04u); { u32 tv_ = (r4 + 0x0C088A08u); u32 t_ = PHYS(tv_); IF(0x0C088A06u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C088A20u: goto L_0C088A20; case 0x0C088BD0u: goto L_0C088BD0; case 0x0C088DC0u: goto L_0C088DC0; case 0x0C088E40u: goto L_0C088E40; default: JUMPD(tv_); } }  /* 0C088A04 braf Rn */
L_0C088A20: BLKS(0x0C088A20u);
	r8 = 0xC0A8CA0u; UPD(0x0C088A22u, 1);  /* 0C088A20 mov.l @(disp,pc),Rn */
	IF(0x0C088A22u); { u32 t_ = r8; PR = 0x0C088A26u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C088A26u); }  /* 0C088A22 jsr @Rn */
L_0C088A26: BLKS(0x0C088A26u);
	IF(0x0C088A26u); T = (s32)r0 >= 0;  /* 0C088A26 cmp/pz Rn */
	if (T) { UPD(0x0C088A2Eu, 4); goto L_0C088A2E; }  /* 0C088A28 bt */
L_0C088A2A: BLKS(0x0C088A2Au);
	{ IF(0x0C088A2Cu); ; /* slot nop */ UPD(0x0C088B90u, 3); goto L_0C088B90; }  /* 0C088A2A bra */
L_0C088A2E: BLKS(0x0C088A2Eu);
	r7 = 0xB4u; UPD(0x0C088A30u, 1);  /* 0C088A2E mov.w @(disp,pc),Rn */
	IF(0x0C088A30u); MACL = r13 * r7;  /* 0C088A30 mul.l Rm,Rn */
	r12 = 0xC286578u; UPD(0x0C088A34u, 3);  /* 0C088A32 mov.l @(disp,pc),Rn */
	IF(0x0C088A34u); r3 = MACL;  /* 0C088A34 sts macl,Rn */
	IF(0x0C088A36u); MACL = r0 * r7;  /* 0C088A36 mul.l Rm,Rn */
	r3 += r12;  /* 0C088A38 add Rm,Rn */
	r6 = 0x9Fu; UPD(0x0C088A3Cu, 5);  /* 0C088A3A mov.w @(disp,pc),Rn */
	IF(0x0C088A3Cu); r7 = MACL;  /* 0C088A3C sts macl,Rn */
	r7 += r12;  /* 0C088A3E add Rm,Rn */
	r10 = R32(r7 + 0x24u); UPD(0x0C088A42u, 3);  /* 0C088A40 mov.l @(disp,Rm),Rn */
	r0 = r3;  /* 0C088A42 mov Rm,Rn */
	r9 = R32(r7 + 0x28u); UPD(0x0C088A46u, 2);  /* 0C088A44 mov.l @(disp,Rm),Rn */
	r11 = R32(r3 + 0x2Cu); UPD(0x0C088A48u, 1);  /* 0C088A46 mov.l @(disp,Rm),Rn */
	r1 = R32(r3 + 0x30u); UPD(0x0C088A4Au, 1);  /* 0C088A48 mov.l @(disp,Rm),Rn */
	r10 += r11;  /* 0C088A4A add Rm,Rn */
	IF(0x0C088A4Cu); r5 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C088A4Eu, 2);  /* 0C088A4C mov.b @(r0,Rm),Rn */
	r9 += r1;  /* 0C088A4E add Rm,Rn */
	r0 = r5 & 0xFF;  /* 0C088A50 extu.b Rm,Rn */
	W32(r3 + 0x24u, r10); UPD(0x0C088A54u, 3);  /* 0C088A52 mov.l Rm,@(disp,Rn) */
	T = (r0 & r0) == 0;  /* 0C088A54 tst Rm,Rn */
	{ u32 c_ = T; W32(r3 + 0x28u, r9); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C088B20u, 4); goto L_0C088B20; } UPD(0x0C088A5Au, 1); goto L_0C088A5A; }  /* 0C088A56 bt/s */
L_0C088A5A: BLKS(0x0C088A5Au);
	T = r0 == 0x1u;  /* 0C088A5A cmp/eq #imm,r0 */
	{ u32 c_ = T; r6 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C088AA0u, 4); goto L_0C088AA0; } UPD(0x0C088A60u, 1); goto L_0C088A60; }  /* 0C088A5C bt/s */
L_0C088A60: BLKS(0x0C088A60u);
	r9 = 0xB4u; UPD(0x0C088A62u, 1);  /* 0C088A60 mov.w @(disp,pc),Rn */
	IF(0x0C088A62u); MACL = r13 * r9;  /* 0C088A62 mul.l Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C088A66u, 3);  /* 0C088A64 mov.l @(disp,pc),Rn */
	IF(0x0C088A66u); r8 = MACL;  /* 0C088A66 sts macl,Rn */
	r8 += r5;  /* 0C088A68 add Rm,Rn */
	r4 = 0x86u; UPD(0x0C088A6Cu, 3);  /* 0C088A6A mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C088A6C mov Rm,Rn */
	IF(0x0C088A6Eu); r7 = (u32)(s32)(s16)R16(r0 + r4); UPD(0x0C088A70u, 2);  /* 0C088A6E mov.w @(r0,Rm),Rn */
	r7 += 0x8u;  /* 0C088A70 add #imm,Rn */
	IF(0x0C088A72u); r7 >>= 2;  /* 0C088A72 shlr2 Rn */
	IF(0x0C088A74u); r7 >>= 2;  /* 0C088A74 shlr2 Rn */
	r0 = 0x1Fu;  /* 0C088A76 mov #imm,Rn */
	r7 &= r0;  /* 0C088A78 and Rm,Rn */
	W32(r8 + 0xCu, r7); UPD(0x0C088A7Cu, 6);  /* 0C088A7A mov.l Rm,@(disp,Rn) */
L_0C088A7C: BLKS(0x0C088A7Cu);
	r1 = 0xC0A8AE0u; UPD(0x0C088A7Eu, 1);  /* 0C088A7C mov.l @(disp,pc),Rn */
	r4 = r13;  /* 0C088A7E mov Rm,Rn */
	UPD(0x0C088A80u, 1);
L_0C088A80: BLKS(0x0C088A80u);
	r14 += 0x4u;  /* 0C088A80 add #imm,Rn */
	r15 = r14;  /* 0C088A82 mov Rm,Rn */
	IF(0x0C088A84u); PR = R32(r15); r15 += 4; UPD(0x0C088A86u, 3);  /* 0C088A84 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C088A88u, 1);  /* 0C088A86 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C088A8Au, 1);  /* 0C088A88 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C088A8Cu, 1);  /* 0C088A8A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C088A8Eu, 1);  /* 0C088A8C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C088A90u, 1);  /* 0C088A8E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C088A92u, 1);  /* 0C088A90 mov.l @Rm+,Rn */
	IF(0x0C088A92u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C088760u: goto L_0C088760; case 0x0C0A8AE0u: TAIL(blk_f_0C0A8AE0); default: JUMPD(tv_); } }  /* 0C088A92 jmp @Rn */
L_0C088AA0: BLKS(0x0C088AA0u);
	W32(r14, r6); UPD(0x0C088AA2u, 1);  /* 0C088AA0 mov.l Rm,@Rn */
	r0 = r3;  /* 0C088AA2 mov Rm,Rn */
	r2 = 0xA5u; UPD(0x0C088AA6u, 2);  /* 0C088AA4 mov.w @(disp,pc),Rn */
	r5 = 0x88u; UPD(0x0C088AA8u, 1);  /* 0C088AA6 mov.w @(disp,pc),Rn */
	IF(0x0C088AA8u); r7 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C088AAAu, 1);  /* 0C088AA8 mov.b @(r0,Rm),Rn */
	r5 += r3;  /* 0C088AAA add Rm,Rn */
	r6 = 0x84u; UPD(0x0C088AAEu, 2);  /* 0C088AAC mov.w @(disp,pc),Rn */
	r7 += 0x1u;  /* 0C088AAE add #imm,Rn */
	r4 = 0xFFu; UPD(0x0C088AB2u, 2);  /* 0C088AB0 mov.w @(disp,pc),Rn */
	r6 += r3;  /* 0C088AB2 add Rm,Rn */
	UPD(0x0C088AB4u, 1);
L_0C088AB4: BLKS(0x0C088AB4u);
	r1 = R32(r14); UPD(0x0C088AB6u, 1);  /* 0C088AB4 mov.l @Rm,Rn */
	T = (s32)r1 >= (s32)r7;  /* 0C088AB6 cmp/ge Rm,Rn */
	{ u32 c_ = T; r3 = r6; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C088A60u, 4); goto L_0C088A60; } goto L_0C088ABC; }  /* 0C088AB8 bt/s */
L_0C088ABC: BLKS(0x0C088ABCu);
	r3 += 0x2u;  /* 0C088ABC add #imm,Rn */
	r12 = (u32)(s32)(s16)R16(r5); UPD(0x0C088AC0u, 3);  /* 0C088ABE mov.w @Rm,Rn */
	r2 = (u32)(s32)(s16)R16(r3); UPD(0x0C088AC2u, 1);  /* 0C088AC0 mov.w @Rm,Rn */
	r11 = r12;  /* 0C088AC2 mov Rm,Rn */
	r10 = 0x1FFu; UPD(0x0C088AC6u, 2);  /* 0C088AC4 mov.w @(disp,pc),Rn */
	r11 -= r2;  /* 0C088AC6 sub Rm,Rn */
	r11 &= r10;  /* 0C088AC8 and Rm,Rn */
	T = (r11 & r11) == 0;  /* 0C088ACA tst Rm,Rn */
	if (T) { UPD(0x0C088B00u, 6); goto L_0C088B00; }  /* 0C088ACC bt */
L_0C088ACE: BLKS(0x0C088ACEu);
	T = (s32)r11 > (s32)r4;  /* 0C088ACE cmp/gt Rm,Rn */
	{ u32 c_ = T; r1 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C088AF0u, 4); goto L_0C088AF0; } goto L_0C088AD4; }  /* 0C088AD0 bt/s */
L_0C088AD4: BLKS(0x0C088AD4u);
	r1 = r2;  /* 0C088AD4 mov Rm,Rn */
	r1 += 0x1u;  /* 0C088AD6 add #imm,Rn */
	UPD(0x0C088AD8u, 3);
L_0C088AD8: BLKS(0x0C088AD8u);
	r11 = R32(r14); UPD(0x0C088ADAu, 1);  /* 0C088AD8 mov.l @Rm,Rn */
	W16(r3, r1); UPD(0x0C088ADCu, 1);  /* 0C088ADA mov.w Rm,@Rn */
	r11 += 0x1u;  /* 0C088ADC add #imm,Rn */
	r3 = (u32)(s32)(s16)r11;  /* 0C088ADE exts.w Rm,Rn */
	{ W32(r14, r3); /* slot mov.l Rm,@Rn */ UPD(0x0C088AB4u, 5); goto L_0C088AB4; }  /* 0C088AE0 bra */
L_0C088AF0: BLKS(0x0C088AF0u);
	{ r1 += 0xFFFFFFFFu; /* slot add #imm,Rn */ UPD(0x0C088AD8u, 3); goto L_0C088AD8; }  /* 0C088AF0 bra */
L_0C088B00: BLKS(0x0C088B00u);
	r13 = 0x9Fu; UPD(0x0C088B02u, 1);  /* 0C088B00 mov.w @(disp,pc),Rn */
	IF(0x0C088B02u); W8(r0 + r13, r11); UPD(0x0C088B04u, 1);  /* 0C088B02 mov.b Rm,@(r0,Rn) */
L_0C088B04: BLKS(0x0C088B04u);
	r14 += 0x4u;  /* 0C088B04 add #imm,Rn */
	UPD(0x0C088B06u, 1);
L_0C088B06: BLKS(0x0C088B06u);
	r15 = r14;  /* 0C088B06 mov Rm,Rn */
	IF(0x0C088B08u); PR = R32(r15); r15 += 4; UPD(0x0C088B0Au, 2);  /* 0C088B08 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C088B0Cu, 1);  /* 0C088B0A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C088B0Eu, 1);  /* 0C088B0C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C088B10u, 1);  /* 0C088B0E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C088B12u, 1);  /* 0C088B10 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C088B14u, 1);  /* 0C088B12 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C088B16u, 1);  /* 0C088B14 mov.l @Rm+,Rn */
	IF(0x0C088B16u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C088B16 rts */
L_0C088B20: BLKS(0x0C088B20u);
	r6 = 0x98u; UPD(0x0C088B22u, 1);  /* 0C088B20 mov.w @(disp,pc),Rn */
	r0 = r3;  /* 0C088B22 mov Rm,Rn */
	r6 += r3;  /* 0C088B24 add Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r6); UPD(0x0C088B28u, 3);  /* 0C088B26 mov.b @Rm,Rn */
	r9 = 0x1Du;  /* 0C088B28 mov #imm,Rn */
	r2 += 0x1u;  /* 0C088B2A add #imm,Rn */
	r8 = 0xA5u; UPD(0x0C088B2Eu, 3);  /* 0C088B2C mov.w @(disp,pc),Rn */
	r5 = r2 & 0xFF;  /* 0C088B2E extu.b Rm,Rn */
	W8(r6, r2); UPD(0x0C088B32u, 2);  /* 0C088B30 mov.b Rm,@Rn */
	T = r9 >= r5;  /* 0C088B32 cmp/hs Rm,Rn */
	IF(0x0C088B34u); r4 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C088B36u, 2);  /* 0C088B34 mov.b @(r0,Rm),Rn */
	IF(0x0C088B36u); r2 = T;  /* 0C088B36 movt Rn */
	T = (r4 & r4) == 0;  /* 0C088B38 tst Rm,Rn */
	IF(0x0C088B3Au); r0 = T;  /* 0C088B3A movt Rn */
	r2 &= r0;  /* 0C088B3C and Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C088B3E tst Rm,Rn */
	if (!T) { UPD(0x0C088B04u, 8); goto L_0C088B04; }  /* 0C088B40 bf */
L_0C088B42: BLKS(0x0C088B42u);
	W8(r6, r2); UPD(0x0C088B44u, 1);  /* 0C088B42 mov.b Rm,@Rn */
	r1 = R32(r7 + 0x24u); UPD(0x0C088B46u, 1);  /* 0C088B44 mov.l @(disp,Rm),Rn */
	r6 = 0x3FFFFFu; UPD(0x0C088B48u, 1);  /* 0C088B46 mov.l @(disp,pc),Rn */
	T = (s32)r1 > (s32)r6;  /* 0C088B48 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C088B70u, 4); goto L_0C088B70; }  /* 0C088B4A bt */
L_0C088B4C: BLKS(0x0C088B4Cu);
	r10 = 0x88u; UPD(0x0C088B4Eu, 1);  /* 0C088B4C mov.w @(disp,pc),Rn */
	r10 += r3;  /* 0C088B4E add Rm,Rn */
	r10 += 0x2u;  /* 0C088B50 add #imm,Rn */
	r3 = (u32)(s32)(s16)R16(r10); UPD(0x0C088B54u, 3);  /* 0C088B52 mov.w @Rm,Rn */
	{ u32 v_ = r3; r10 -= 2; W16(r10, v_); } UPD(0x0C088B56u, 1);  /* 0C088B54 mov.w Rm,@-Rn */
L_0C088B56: BLKS(0x0C088B56u);
	r9 = 0xB4u; UPD(0x0C088B58u, 1);  /* 0C088B56 mov.w @(disp,pc),Rn */
	IF(0x0C088B58u); MACL = r13 * r9;  /* 0C088B58 mul.l Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C088B5Cu, 3);  /* 0C088B5A mov.l @(disp,pc),Rn */
	IF(0x0C088B5Cu); r7 = MACL;  /* 0C088B5C sts macl,Rn */
	r4 = 0x9Fu; UPD(0x0C088B60u, 2);  /* 0C088B5E mov.w @(disp,pc),Rn */
	r7 += r5;  /* 0C088B60 add Rm,Rn */
	r7 += r4;  /* 0C088B62 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r7); UPD(0x0C088B66u, 3);  /* 0C088B64 mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C088B66 add #imm,Rn */
	{ W8(r7, r0); /* slot mov.b Rm,@Rn */ UPD(0x0C088A60u, 4); goto L_0C088A60; }  /* 0C088B68 bra */
L_0C088B70: BLKS(0x0C088B70u);
	r11 = 0x88u; UPD(0x0C088B72u, 1);  /* 0C088B70 mov.w @(disp,pc),Rn */
	r8 = 0xC062780u; UPD(0x0C088B74u, 1);  /* 0C088B72 mov.l @(disp,pc),Rn */
	r11 += r3;  /* 0C088B74 add Rm,Rn */
	r4 = 0x100u; UPD(0x0C088B78u, 2);  /* 0C088B76 mov.w @(disp,pc),Rn */
	IF(0x0C088B78u); { u32 t_ = r8; PR = 0x0C088B7Cu; r11 += 0x2u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C088B7Cu); }  /* 0C088B78 jsr @Rn */
L_0C088B7C: BLKS(0x0C088B7Cu);
	r12 = (u32)(s32)(s16)R16(r11); UPD(0x0C088B7Eu, 1);  /* 0C088B7C mov.w @Rm,Rn */
	r0 += r12;  /* 0C088B7E add Rm,Rn */
	r0 += 0xFFFFFF80u;  /* 0C088B80 add #imm,Rn */
	{ { u32 v_ = r0; r11 -= 2; W16(r11, v_); } /* slot mov.w Rm,@-Rn */ UPD(0x0C088B56u, 5); goto L_0C088B56; }  /* 0C088B82 bra */
L_0C088B90: BLKS(0x0C088B90u);
	r1 = 0xC088760u; UPD(0x0C088B92u, 1);  /* 0C088B90 mov.l @(disp,pc),Rn */
	{ r4 = r13; /* slot mov Rm,Rn */ UPD(0x0C088A80u, 3); goto L_0C088A80; }  /* 0C088B92 bra */
L_0C088BD0: BLKS(0x0C088BD0u);
	r10 = 0xC0A8CA0u; UPD(0x0C088BD2u, 1);  /* 0C088BD0 mov.l @(disp,pc),Rn */
	IF(0x0C088BD2u); { u32 t_ = r10; PR = 0x0C088BD6u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C088BD6u); }  /* 0C088BD2 jsr @Rn */
L_0C088BD6: BLKS(0x0C088BD6u);
	IF(0x0C088BD6u); T = (s32)r0 >= 0;  /* 0C088BD6 cmp/pz Rn */
	if (!T) { UPD(0x0C088B90u, 4); goto L_0C088B90; }  /* 0C088BD8 bf */
L_0C088BDA: BLKS(0x0C088BDAu);
	r5 = 0xB4u; UPD(0x0C088BDCu, 1);  /* 0C088BDA mov.w @(disp,pc),Rn */
	IF(0x0C088BDCu); MACL = r0 * r5;  /* 0C088BDC mul.l Rm,Rn */
	r4 = 0xC286578u; UPD(0x0C088BE0u, 3);  /* 0C088BDE mov.l @(disp,pc),Rn */
	IF(0x0C088BE0u); r8 = MACL;  /* 0C088BE0 sts macl,Rn */
	IF(0x0C088BE2u); MACL = r13 * r5;  /* 0C088BE2 mul.l Rm,Rn */
	r8 += r4;  /* 0C088BE4 add Rm,Rn */
	r12 = 0x84u; UPD(0x0C088BE8u, 5);  /* 0C088BE6 mov.w @(disp,pc),Rn */
	IF(0x0C088BE8u); r9 = MACL;  /* 0C088BE8 sts macl,Rn */
	r0 = r8;  /* 0C088BEA mov Rm,Rn */
	r9 += r4;  /* 0C088BEC add Rm,Rn */
	r0 += r12;  /* 0C088BEE add Rm,Rn */
	r6 = 0xC069B20u; UPD(0x0C088BF2u, 5);  /* 0C088BF0 mov.l @(disp,pc),Rn */
	r0 += 0x2u;  /* 0C088BF2 add #imm,Rn */
	r9 += 0x50u;  /* 0C088BF4 add #imm,Rn */
	r11 = (u32)(s32)(s16)R16(r0); UPD(0x0C088BF8u, 3);  /* 0C088BF6 mov.w @Rm,Rn */
	r10 = R32(r9); UPD(0x0C088BFAu, 1);  /* 0C088BF8 mov.l @Rm,Rn */
	r4 = r11;  /* 0C088BFA mov Rm,Rn */
	IF(0x0C088BFCu); { u32 t_ = r6; PR = 0x0C088C00u; r5 = r10; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C088C00u); }  /* 0C088BFC jsr @Rn */
L_0C088C00: BLKS(0x0C088C00u);
	r4 = r11;  /* 0C088C00 mov Rm,Rn */
	r7 = R32(r8 + 0x24u); UPD(0x0C088C04u, 2);  /* 0C088C02 mov.l @(disp,Rm),Rn */
	r9 += 0xFFFFFFB0u;  /* 0C088C04 add #imm,Rn */
	r11 = 0xC069AF0u; UPD(0x0C088C08u, 2);  /* 0C088C06 mov.l @(disp,pc),Rn */
	r7 += r0;  /* 0C088C08 add Rm,Rn */
	r5 = r10;  /* 0C088C0A mov Rm,Rn */
	IF(0x0C088C0Cu); { u32 t_ = r11; PR = 0x0C088C10u; W32(r9 + 0x24u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 4); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C088C10u); }  /* 0C088C0C jsr @Rn */
L_0C088C10: BLKS(0x0C088C10u);
	r3 = R32(r8 + 0x28u); UPD(0x0C088C12u, 1);  /* 0C088C10 mov.l @(disp,Rm),Rn */
	r2 = 0x0u;  /* 0C088C12 mov #imm,Rn */
	r3 += r0;  /* 0C088C14 add Rm,Rn */
	r6 = 0x9Au; UPD(0x0C088C18u, 3);  /* 0C088C16 mov.w @(disp,pc),Rn */
	r0 = r9;  /* 0C088C18 mov Rm,Rn */
	IF(0x0C088C1Au); W8(r0 + r6, r2); UPD(0x0C088C1Cu, 2);  /* 0C088C1A mov.b Rm,@(r0,Rn) */
	r0 = 0x8Cu; UPD(0x0C088C1Eu, 1);  /* 0C088C1C mov.w @(disp,pc),Rn */
	IF(0x0C088C1Eu); r5 = R32(r0 + r9); UPD(0x0C088C20u, 1);  /* 0C088C1E mov.l @(r0,Rm),Rn */
	T = (r5 & r5) == 0;  /* 0C088C20 tst Rm,Rn */
	{ u32 c_ = T; W32(r9 + 0x28u, r3); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C088D00u, 4); goto L_0C088D00; } UPD(0x0C088C26u, 1); goto L_0C088C26; }  /* 0C088C22 bt/s */
L_0C088C26: BLKS(0x0C088C26u);
	r7 = r12;  /* 0C088C26 mov Rm,Rn */
	r7 += r9;  /* 0C088C28 add Rm,Rn */
	r7 += 0x2u;  /* 0C088C2A add #imm,Rn */
	r3 = 0xC069B20u; UPD(0x0C088C2Eu, 4);  /* 0C088C2C mov.l @(disp,pc),Rn */
	r8 = r5;  /* 0C088C2E mov Rm,Rn */
	r11 = 0xFFFFC000u; UPD(0x0C088C32u, 2);  /* 0C088C30 mov.w @(disp,pc),Rn */
	r13 = 0x0u;  /* 0C088C32 mov #imm,Rn */
	r10 = (u32)(s32)(s16)R16(r7); UPD(0x0C088C36u, 2);  /* 0C088C34 mov.w @Rm,Rn */
	r11 += r5;  /* 0C088C36 add Rm,Rn */
	r4 = r10;  /* 0C088C38 mov Rm,Rn */
	IF(0x0C088C3Au); { u32 t_ = r3; PR = 0x0C088C3Eu; IF(0x0C088C3Cu); W32(r0 + r9, r11); /* slot mov.l Rm,@(r0,Rn) */ UPD(t_, 4); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C088C3Eu); }  /* 0C088C3A jsr @Rn */
L_0C088C3E: BLKS(0x0C088C3Eu);
	r2 = R32(r9 + 0x24u); UPD(0x0C088C40u, 1);  /* 0C088C3E mov.l @(disp,Rm),Rn */
	r4 = r10;  /* 0C088C40 mov Rm,Rn */
	r1 = 0xC069AF0u; UPD(0x0C088C44u, 2);  /* 0C088C42 mov.l @(disp,pc),Rn */
	r2 -= r0;  /* 0C088C44 sub Rm,Rn */
	W32(r9 + 0x24u, r2); UPD(0x0C088C48u, 2);  /* 0C088C46 mov.l Rm,@(disp,Rn) */
	IF(0x0C088C48u); { u32 t_ = r1; PR = 0x0C088C4Cu; r5 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C088C4Cu); }  /* 0C088C48 jsr @Rn */
L_0C088C4C: BLKS(0x0C088C4Cu);
	r12 = R32(r9 + 0x28u); UPD(0x0C088C4Eu, 1);  /* 0C088C4C mov.l @(disp,Rm),Rn */
	W32(r14, r13); UPD(0x0C088C50u, 1);  /* 0C088C4E mov.l Rm,@Rn */
	r12 -= r0;  /* 0C088C50 sub Rm,Rn */
	W32(r9 + 0x28u, r12); UPD(0x0C088C54u, 2);  /* 0C088C52 mov.l Rm,@(disp,Rn) */
	r13 = 0xC069AF0u; UPD(0x0C088C56u, 1);  /* 0C088C54 mov.l @(disp,pc),Rn */
	r12 = r9;  /* 0C088C56 mov Rm,Rn */
	UPD(0x0C088C58u, 1);
L_0C088C58: BLKS(0x0C088C58u);
	r7 = 0x86u; UPD(0x0C088C5Au, 1);  /* 0C088C58 mov.w @(disp,pc),Rn */
	r0 = r12;  /* 0C088C5A mov Rm,Rn */
	r10 = 0xC069B20u; UPD(0x0C088C5Eu, 2);  /* 0C088C5C mov.l @(disp,pc),Rn */
	IF(0x0C088C5Eu); r11 = (u32)(s32)(s16)R16(r0 + r7); UPD(0x0C088C60u, 1);  /* 0C088C5E mov.w @(r0,Rm),Rn */
	r5 = 0x50000u; UPD(0x0C088C62u, 1);  /* 0C088C60 mov.l @(disp,pc),Rn */
	IF(0x0C088C62u); { u32 t_ = r10; PR = 0x0C088C66u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C088C66u); }  /* 0C088C62 jsr @Rn */
L_0C088C66: BLKS(0x0C088C66u);
	r8 = R32(r14); UPD(0x0C088C68u, 1);  /* 0C088C66 mov.l @Rm,Rn */
	r4 = r11;  /* 0C088C68 mov Rm,Rn */
	r9 = 0xC19B3B4u; UPD(0x0C088C6Cu, 2);  /* 0C088C6A mov.l @(disp,pc),Rn */
	IF(0x0C088C6Cu); r8 <<= 2;  /* 0C088C6C shll2 Rn */
	r8 += r9;  /* 0C088C6E add Rm,Rn */
	r10 = R32(r12 + 0x24u); UPD(0x0C088C72u, 3);  /* 0C088C70 mov.l @(disp,Rm),Rn */
	r5 = R32(r8); UPD(0x0C088C74u, 1);  /* 0C088C72 mov.l @Rm,Rn */
	IF(0x0C088C74u); { u32 t_ = r13; PR = 0x0C088C78u; r10 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C088C78u); }  /* 0C088C74 jsr @Rn */
L_0C088C78: BLKS(0x0C088C78u);
	r4 = r11;  /* 0C088C78 mov Rm,Rn */
	r5 = 0x50000u; UPD(0x0C088C7Cu, 2);  /* 0C088C7A mov.l @(disp,pc),Rn */
	IF(0x0C088C7Cu); { u32 t_ = r13; PR = 0x0C088C80u; r10 -= r0; /* slot sub Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C088C80u); }  /* 0C088C7C jsr @Rn */
L_0C088C80: BLKS(0x0C088C80u);
	r1 = 0xC069B20u; UPD(0x0C088C82u, 1);  /* 0C088C80 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C088C82 mov Rm,Rn */
	r9 = R32(r12 + 0x28u); UPD(0x0C088C86u, 2);  /* 0C088C84 mov.l @(disp,Rm),Rn */
	r5 = R32(r8); UPD(0x0C088C88u, 1);  /* 0C088C86 mov.l @Rm,Rn */
	IF(0x0C088C88u); { u32 t_ = r1; PR = 0x0C088C8Cu; r9 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C088C8Cu); }  /* 0C088C88 jsr @Rn */
L_0C088C8C: BLKS(0x0C088C8Cu);
	r9 += r0;  /* 0C088C8C add Rm,Rn */
	r0 = R32(r14); UPD(0x0C088C90u, 2);  /* 0C088C8E mov.l @Rm,Rn */
	r4 = 0x1Fu;  /* 0C088C90 mov #imm,Rn */
	r3 = 0xC19B3BCu; UPD(0x0C088C94u, 2);  /* 0C088C92 mov.l @(disp,pc),Rn */
	r0 += r0;  /* 0C088C94 add Rm,Rn */
	r8 = 0xC062780u; UPD(0x0C088C98u, 2);  /* 0C088C96 mov.l @(disp,pc),Rn */
	IF(0x0C088C98u); r2 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C088C9Au, 1);  /* 0C088C98 mov.w @(r0,Rm),Rn */
	IF(0x0C088C9Au); { u32 t_ = r8; PR = 0x0C088C9Eu; r11 += r2; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C088C9Eu); }  /* 0C088C9A jsr @Rn */
L_0C088C9E: BLKS(0x0C088C9Eu);
	r0 += r11;  /* 0C088C9E add Rm,Rn */
	r0 += 0xFFFFFFF0u;  /* 0C088CA0 add #imm,Rn */
	r11 = (u32)(s32)(s16)r0;  /* 0C088CA2 exts.w Rm,Rn */
	r0 = 0xB0u; UPD(0x0C088CA6u, 4);  /* 0C088CA4 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFECu;  /* 0C088CA6 add #imm,Rn */
	IF(0x0C088CA8u); r5 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C088CAAu, 2);  /* 0C088CA8 mov.b @(r0,Rm),Rn */
	r4 = r5 & 0xFF;  /* 0C088CAA extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C088CAEu, 2);  /* 0C088CAC mov.l Rm,@Rn */
	r0 = r12;  /* 0C088CAE mov Rm,Rn */
	r6 = 0xA9u; UPD(0x0C088CB2u, 2);  /* 0C088CB0 mov.w @(disp,pc),Rn */
	r4 = r11;  /* 0C088CB2 mov Rm,Rn */
	IF(0x0C088CB4u); r7 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C088CB6u, 2);  /* 0C088CB4 mov.b @(r0,Rm),Rn */
	r2 = 0xC069B20u; UPD(0x0C088CB8u, 1);  /* 0C088CB6 mov.l @(disp,pc),Rn */
	r3 = r7 & 0xFF;  /* 0C088CB8 extu.b Rm,Rn */
	r8 = 0x20000u; UPD(0x0C088CBCu, 2);  /* 0C088CBA mov.l @(disp,pc),Rn */
	W32(r15 + 0x4u, r3); UPD(0x0C088CBEu, 1);  /* 0C088CBC mov.l Rm,@(disp,Rn) */
	IF(0x0C088CBEu); { u32 t_ = r2; PR = 0x0C088CC2u; r5 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C088CC2u); }  /* 0C088CBE jsr @Rn */
L_0C088CC2: BLKS(0x0C088CC2u);
	r5 = r8;  /* 0C088CC2 mov Rm,Rn */
	W32(r15 + 0x8u, r0); UPD(0x0C088CC6u, 2);  /* 0C088CC4 mov.l Rm,@(disp,Rn) */
	IF(0x0C088CC6u); { u32 t_ = r13; PR = 0x0C088CCAu; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C088CCAu); }  /* 0C088CC6 jsr @Rn */
L_0C088CCA: BLKS(0x0C088CCAu);
	W32(r15 + 0xCu, r0); UPD(0x0C088CCCu, 1);  /* 0C088CCA mov.l Rm,@(disp,Rn) */
	r5 = 0x5u;  /* 0C088CCC mov #imm,Rn */
	r0 = 0x808080u; UPD(0x0C088CD0u, 2);  /* 0C088CCE mov.l @(disp,pc),Rn */
	r6 = r10;  /* 0C088CD0 mov Rm,Rn */
	r8 = 0xC0BEEF0u; UPD(0x0C088CD4u, 2);  /* 0C088CD2 mov.l @(disp,pc),Rn */
	r7 = r9;  /* 0C088CD4 mov Rm,Rn */
	W32(r15 + 0x10u, r0); UPD(0x0C088CD8u, 2);  /* 0C088CD6 mov.l Rm,@(disp,Rn) */
	r9 = 0x1u;  /* 0C088CD8 mov #imm,Rn */
	IF(0x0C088CDAu); { u32 t_ = r8; PR = 0x0C088CDEu; r4 = R32(r12); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BEEF0, 0x0C0BEEF0u, 0x0C088CDEu); }  /* 0C088CDA jsr @Rn */
L_0C088CDE: BLKS(0x0C088CDEu);
	r5 = R32(r14); UPD(0x0C088CE0u, 1);  /* 0C088CDE mov.l @Rm,Rn */
	r5 += 0x1u;  /* 0C088CE0 add #imm,Rn */
	r4 = (u32)(s32)(s16)r5;  /* 0C088CE2 exts.w Rm,Rn */
	W32(r14, r4); UPD(0x0C088CE6u, 3);  /* 0C088CE4 mov.l Rm,@Rn */
	r6 = R32(r14); UPD(0x0C088CE8u, 1);  /* 0C088CE6 mov.l @Rm,Rn */
	T = (s32)r6 > (s32)r9;  /* 0C088CE8 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x14u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C088C58u, 4); goto L_0C088C58; } UPD(0x0C088CEEu, 1); goto L_0C088CEE; }  /* 0C088CEA bf/s */
L_0C088CEE: BLKS(0x0C088CEEu);
	{ r14 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C088B06u, 3); goto L_0C088B06; }  /* 0C088CEE bra */
L_0C088D00: BLKS(0x0C088D00u);
	r9 = 0xC069BF0u; UPD(0x0C088D02u, 1);  /* 0C088D00 mov.l @(disp,pc),Rn */
	r8 = 0xC068F00u; UPD(0x0C088D04u, 1);  /* 0C088D02 mov.l @(disp,pc),Rn */
	IF(0x0C088D04u); { u32 t_ = r9; PR = 0x0C088D08u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069BF0, 0x0C069BF0u, 0x0C088D08u); }  /* 0C088D04 jsr @Rn */
L_0C088D08: BLKS(0x0C088D08u);
	r4 = r13;  /* 0C088D08 mov Rm,Rn */
	IF(0x0C088D0Au); { u32 t_ = r8; PR = 0x0C088D0Eu; r5 = 0x2u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C068F00, 0x0C068F00u, 0x0C088D0Eu); }  /* 0C088D0A jsr @Rn */
L_0C088D0E: BLKS(0x0C088D0Eu);
	r5 = 0xB4u; UPD(0x0C088D10u, 1);  /* 0C088D0E mov.w @(disp,pc),Rn */
	IF(0x0C088D10u); MACL = r13 * r5;  /* 0C088D10 mul.l Rm,Rn */
	r4 = 0xC286578u; UPD(0x0C088D14u, 3);  /* 0C088D12 mov.l @(disp,pc),Rn */
	IF(0x0C088D14u); r8 = MACL;  /* 0C088D14 sts macl,Rn */
	r8 += r4;  /* 0C088D16 add Rm,Rn */
	r6 = 0x86u; UPD(0x0C088D1Au, 3);  /* 0C088D18 mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C088D1A mov Rm,Rn */
	IF(0x0C088D1Cu); r11 = (u32)(s32)(s16)R16(r0 + r6); UPD(0x0C088D1Eu, 2);  /* 0C088D1C mov.w @(r0,Rm),Rn */
	r4 = r13;  /* 0C088D1E mov Rm,Rn */
	r11 += 0x8u;  /* 0C088D20 add #imm,Rn */
	IF(0x0C088D22u); r11 >>= 2;  /* 0C088D22 shlr2 Rn */
	r12 = 0xC0A8AE0u; UPD(0x0C088D26u, 4);  /* 0C088D24 mov.l @(disp,pc),Rn */
	r0 = 0x1Fu;  /* 0C088D26 mov #imm,Rn */
	IF(0x0C088D28u); r11 >>= 2;  /* 0C088D28 shlr2 Rn */
	r11 &= r0;  /* 0C088D2A and Rm,Rn */
	IF(0x0C088D2Cu); { u32 t_ = r12; PR = 0x0C088D30u; W32(r8 + 0xCu, r11); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 5); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C088D30u); }  /* 0C088D2C jsr @Rn */
L_0C088D30: BLKS(0x0C088D30u);
	r4 = r13;  /* 0C088D30 mov Rm,Rn */
	r13 = 0xC0BC1B0u; UPD(0x0C088D34u, 2);  /* 0C088D32 mov.l @(disp,pc),Rn */
	r5 = 0x5Au;  /* 0C088D34 mov #imm,Rn */
	IF(0x0C088D36u); { u32 t_ = r13; PR = 0x0C088D3Au; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C088D3Au); }  /* 0C088D36 jsr @Rn */
L_0C088D3A: BLKS(0x0C088D3Au);
	T = (r0 & r0) == 0;  /* 0C088D3A tst Rm,Rn */
	if (T) { UPD(0x0C088CEEu, 4); goto L_0C088CEE; }  /* 0C088D3C bt */
L_0C088D3E: BLKS(0x0C088D3Eu);
	r0 = r8;  /* 0C088D3E mov Rm,Rn */
	r3 = 0xA9u; UPD(0x0C088D42u, 2);  /* 0C088D40 mov.w @(disp,pc),Rn */
	r10 = 0xC0BBF10u; UPD(0x0C088D44u, 1);  /* 0C088D42 mov.l @(disp,pc),Rn */
	IF(0x0C088D44u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C088D46u, 1);  /* 0C088D44 mov.b @(r0,Rm),Rn */
	r4 = R32(r8 + 0x24u); UPD(0x0C088D48u, 1);  /* 0C088D46 mov.l @(disp,Rm),Rn */
	r6 = r2 & 0xFF;  /* 0C088D48 extu.b Rm,Rn */
	IF(0x0C088D4Au); { u32 t_ = r10; PR = 0x0C088D4Eu; r5 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BBF10, 0x0C0BBF10u, 0x0C088D4Eu); }  /* 0C088D4A jsr @Rn */
L_0C088D4E: BLKS(0x0C088D4Eu);
	T = (r0 & r0) == 0;  /* 0C088D4E tst Rm,Rn */
	if (T) { UPD(0x0C088CEEu, 4); goto L_0C088CEE; }  /* 0C088D50 bt */
L_0C088D52: BLKS(0x0C088D52u);
	r13 = 0x1u;  /* 0C088D52 mov #imm,Rn */
	r0 = 0x8Cu; UPD(0x0C088D56u, 2);  /* 0C088D54 mov.w @(disp,pc),Rn */
	r12 = 0x60000u; UPD(0x0C088D58u, 1);  /* 0C088D56 mov.l @(disp,pc),Rn */
	IF(0x0C088D58u); W32(r0 + r8, r12); UPD(0x0C088D5Au, 1);  /* 0C088D58 mov.l Rm,@(r0,Rn) */
	r7 = 0x9Au; UPD(0x0C088D5Cu, 1);  /* 0C088D5A mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C088D5C mov Rm,Rn */
	{ IF(0x0C088D60u); W8(r0 + r7, r13); /* slot mov.b Rm,@(r0,Rn) */ UPD(0x0C088B04u, 4); goto L_0C088B04; }  /* 0C088D5E bra */
L_0C088DC0: BLKS(0x0C088DC0u);
	r11 = 0xC0A8B50u; UPD(0x0C088DC2u, 1);  /* 0C088DC0 mov.l @(disp,pc),Rn */
	IF(0x0C088DC2u); { u32 t_ = r11; PR = 0x0C088DC6u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C088DC6u); }  /* 0C088DC2 jsr @Rn */
L_0C088DC6: BLKS(0x0C088DC6u);
	IF(0x0C088DC6u); T = (s32)r0 >= 0;  /* 0C088DC6 cmp/pz Rn */
	if (!T) { UPD(0x0C088E4Au, 4); goto L_0C088E4A; }  /* 0C088DC8 bf */
L_0C088DCA: BLKS(0x0C088DCAu);
	r8 = 0xB4u; UPD(0x0C088DCCu, 1);  /* 0C088DCA mov.w @(disp,pc),Rn */
	IF(0x0C088DCCu); MACL = r13 * r8;  /* 0C088DCC mul.l Rm,Rn */
	r1 = 0xC286578u; UPD(0x0C088DD0u, 3);  /* 0C088DCE mov.l @(disp,pc),Rn */
	IF(0x0C088DD0u); r12 = MACL;  /* 0C088DD0 sts macl,Rn */
	IF(0x0C088DD2u); MACL = r0 * r8;  /* 0C088DD2 mul.l Rm,Rn */
	r12 += r1;  /* 0C088DD4 add Rm,Rn */
	r4 = 0x98u; UPD(0x0C088DD8u, 5);  /* 0C088DD6 mov.w @(disp,pc),Rn */
	IF(0x0C088DD8u); r8 = MACL;  /* 0C088DD8 sts macl,Rn */
	r9 = r12;  /* 0C088DDA mov Rm,Rn */
	r8 += r1;  /* 0C088DDC add Rm,Rn */
	r9 += r4;  /* 0C088DDE add Rm,Rn */
	r2 = 0x84u; UPD(0x0C088DE2u, 5);  /* 0C088DE0 mov.w @(disp,pc),Rn */
	r3 = r12;  /* 0C088DE2 mov Rm,Rn */
	r4 += r8;  /* 0C088DE4 add Rm,Rn */
	r4 += 0x2u;  /* 0C088DE6 add #imm,Rn */
	r6 = 0xA4u; UPD(0x0C088DEAu, 4);  /* 0C088DE8 mov.w @(disp,pc),Rn */
	r3 += r2;  /* 0C088DEA add Rm,Rn */
	r10 = (u32)(s32)(s8)R8(r4); UPD(0x0C088DEEu, 2);  /* 0C088DEC mov.b @Rm,Rn */
	r7 = r8;  /* 0C088DEE mov Rm,Rn */
	r2 += r8;  /* 0C088DF0 add Rm,Rn */
	r2 += 0x2u;  /* 0C088DF2 add #imm,Rn */
	r9 += 0x2u;  /* 0C088DF4 add #imm,Rn */
	r7 += r6;  /* 0C088DF6 add Rm,Rn */
	r5 = (u32)(s32)(s16)R16(r2); UPD(0x0C088DFAu, 6);  /* 0C088DF8 mov.w @Rm,Rn */
	r6 += r12;  /* 0C088DFA add Rm,Rn */
	W8(r9, r10); UPD(0x0C088DFEu, 2);  /* 0C088DFC mov.b Rm,@Rn */
	r6 += 0x1u;  /* 0C088DFE add #imm,Rn */
	r3 += 0x2u;  /* 0C088E00 add #imm,Rn */
	r12 += 0x50u;  /* 0C088E02 add #imm,Rn */
	r11 = 0xC069B20u; UPD(0x0C088E06u, 4);  /* 0C088E04 mov.l @(disp,pc),Rn */
	r7 += 0x1u;  /* 0C088E06 add #imm,Rn */
	r9 = R32(r12); UPD(0x0C088E0Au, 2);  /* 0C088E08 mov.l @Rm,Rn */
	r4 = r5;  /* 0C088E0A mov Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r6); UPD(0x0C088E0Eu, 2);  /* 0C088E0C mov.b @Rm,Rn */
	r10 = r5;  /* 0C088E0E mov Rm,Rn */
	W16(r3, r5); UPD(0x0C088E12u, 2);  /* 0C088E10 mov.w Rm,@Rn */
	r12 += 0xFFFFFFB0u;  /* 0C088E12 add #imm,Rn */
	r5 = r9;  /* 0C088E14 mov Rm,Rn */
	IF(0x0C088E16u); { u32 t_ = r11; PR = 0x0C088E1Au; W8(r7, r0); /* slot mov.b Rm,@Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C088E1Au); }  /* 0C088E16 jsr @Rn */
L_0C088E1A: BLKS(0x0C088E1Au);
	r4 = R32(r8 + 0x24u); UPD(0x0C088E1Cu, 1);  /* 0C088E1A mov.l @(disp,Rm),Rn */
	r5 = r9;  /* 0C088E1C mov Rm,Rn */
	r4 += r0;  /* 0C088E1E add Rm,Rn */
	r9 = 0xC069AF0u; UPD(0x0C088E22u, 3);  /* 0C088E20 mov.l @(disp,pc),Rn */
	W32(r12 + 0x24u, r4); UPD(0x0C088E24u, 1);  /* 0C088E22 mov.l Rm,@(disp,Rn) */
	IF(0x0C088E24u); { u32 t_ = r9; PR = 0x0C088E28u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C088E28u); }  /* 0C088E24 jsr @Rn */
L_0C088E28: BLKS(0x0C088E28u);
	r6 = R32(r8 + 0x28u); UPD(0x0C088E2Au, 1);  /* 0C088E28 mov.l @(disp,Rm),Rn */
	r6 += r0;  /* 0C088E2A add Rm,Rn */
	r0 = R32(r8 + 0xCu); UPD(0x0C088E2Eu, 2);  /* 0C088E2C mov.l @(disp,Rm),Rn */
	W32(r12 + 0x28u, r6); UPD(0x0C088E30u, 1);  /* 0C088E2E mov.l Rm,@(disp,Rn) */
	{ W32(r12 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C088A7Cu, 3); goto L_0C088A7C; }  /* 0C088E30 bra */
L_0C088E40: BLKS(0x0C088E40u);
	r12 = 0xC0A8B50u; UPD(0x0C088E42u, 1);  /* 0C088E40 mov.l @(disp,pc),Rn */
	IF(0x0C088E42u); { u32 t_ = r12; PR = 0x0C088E46u; r4 = r13; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C088E46u); }  /* 0C088E42 jsr @Rn */
L_0C088E46: BLKS(0x0C088E46u);
	IF(0x0C088E46u); T = (s32)r0 >= 0;  /* 0C088E46 cmp/pz Rn */
	if (T) { UPD(0x0C088E4Eu, 4); goto L_0C088E4E; }  /* 0C088E48 bt */
L_0C088E4A: BLKS(0x0C088E4Au);
	{ IF(0x0C088E4Cu); ; /* slot nop */ UPD(0x0C088B90u, 3); goto L_0C088B90; }  /* 0C088E4A bra */
L_0C088E4E: BLKS(0x0C088E4Eu);
	r12 = 0xB4u; UPD(0x0C088E50u, 1);  /* 0C088E4E mov.w @(disp,pc),Rn */
	IF(0x0C088E50u); MACL = r0 * r12;  /* 0C088E50 mul.l Rm,Rn */
	r4 = 0xC286578u; UPD(0x0C088E54u, 3);  /* 0C088E52 mov.l @(disp,pc),Rn */
	IF(0x0C088E54u); r9 = MACL;  /* 0C088E54 sts macl,Rn */
	IF(0x0C088E56u); MACL = r13 * r12;  /* 0C088E56 mul.l Rm,Rn */
	r9 += r4;  /* 0C088E58 add Rm,Rn */
	r5 = 0x86u; UPD(0x0C088E5Cu, 5);  /* 0C088E5A mov.w @(disp,pc),Rn */
	IF(0x0C088E5Cu); r12 = MACL;  /* 0C088E5C sts macl,Rn */
	r12 += r4;  /* 0C088E5E add Rm,Rn */
	r3 = 0xC069B20u; UPD(0x0C088E62u, 3);  /* 0C088E60 mov.l @(disp,pc),Rn */
	r0 = r9;  /* 0C088E62 mov Rm,Rn */
	r12 += 0x50u;  /* 0C088E64 add #imm,Rn */
	IF(0x0C088E66u); r11 = (u32)(s32)(s16)R16(r0 + r5); UPD(0x0C088E68u, 3);  /* 0C088E66 mov.w @(r0,Rm),Rn */
	r8 = R32(r12); UPD(0x0C088E6Au, 1);  /* 0C088E68 mov.l @Rm,Rn */
	r4 = r11;  /* 0C088E6A mov Rm,Rn */
	IF(0x0C088E6Cu); { u32 t_ = r3; PR = 0x0C088E70u; r5 = r8; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C088E70u); }  /* 0C088E6C jsr @Rn */
L_0C088E70: BLKS(0x0C088E70u);
	r10 = R32(r9 + 0x24u); UPD(0x0C088E72u, 1);  /* 0C088E70 mov.l @(disp,Rm),Rn */
	r12 += 0xFFFFFFB0u;  /* 0C088E72 add #imm,Rn */
	r6 = 0xC069AF0u; UPD(0x0C088E76u, 2);  /* 0C088E74 mov.l @(disp,pc),Rn */
	r10 += r0;  /* 0C088E76 add Rm,Rn */
	r5 = r8;  /* 0C088E78 mov Rm,Rn */
	W32(r12 + 0x24u, r10); UPD(0x0C088E7Cu, 3);  /* 0C088E7A mov.l Rm,@(disp,Rn) */
	IF(0x0C088E7Cu); { u32 t_ = r6; PR = 0x0C088E80u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C088E80u); }  /* 0C088E7C jsr @Rn */
L_0C088E80: BLKS(0x0C088E80u);
	r7 = R32(r9 + 0x28u); UPD(0x0C088E82u, 1);  /* 0C088E80 mov.l @(disp,Rm),Rn */
	r4 = r13;  /* 0C088E82 mov Rm,Rn */
	r3 = 0xC0A8AE0u; UPD(0x0C088E86u, 2);  /* 0C088E84 mov.l @(disp,pc),Rn */
	r7 += r0;  /* 0C088E86 add Rm,Rn */
	r2 = R32(r9 + 0xCu); UPD(0x0C088E8Au, 2);  /* 0C088E88 mov.l @(disp,Rm),Rn */
	r10 = 0x9Au; UPD(0x0C088E8Cu, 1);  /* 0C088E8A mov.w @(disp,pc),Rn */
	W32(r12 + 0x28u, r7); UPD(0x0C088E8Eu, 1);  /* 0C088E8C mov.l Rm,@(disp,Rn) */
	r10 += r9;  /* 0C088E8E add Rm,Rn */
	IF(0x0C088E90u); { u32 t_ = r3; PR = 0x0C088E94u; W32(r12 + 0xCu, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C088E94u); }  /* 0C088E90 jsr @Rn */
L_0C088E94: BLKS(0x0C088E94u);
	r5 = (u32)(s32)(s8)R8(r10); UPD(0x0C088E96u, 1);  /* 0C088E94 mov.b @Rm,Rn */
	T = (r5 & r5) == 0;  /* 0C088E96 tst Rm,Rn */
	if (!T) { UPD(0x0C088EA0u, 4); goto L_0C088EA0; }  /* 0C088E98 bf */
L_0C088E9A: BLKS(0x0C088E9Au);
	r14 += 0x4u;  /* 0C088E9A add #imm,Rn */
	{ IF(0x0C088E9Eu); ; /* slot nop */ UPD(0x0C088B06u, 4); goto L_0C088B06; }  /* 0C088E9C bra */
L_0C088EA0: BLKS(0x0C088EA0u);
	r1 = 0xC069B20u; UPD(0x0C088EA2u, 1);  /* 0C088EA0 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C088EA2 add #imm,Rn */
	r9 = 0xC0000u; UPD(0x0C088EA6u, 2);  /* 0C088EA4 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C088EA6 mov Rm,Rn */
	IF(0x0C088EA8u); { u32 t_ = r1; PR = 0x0C088EACu; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C088EACu); }  /* 0C088EA8 jsr @Rn */
L_0C088EAC: BLKS(0x0C088EACu);
	r2 = 0xC069AF0u; UPD(0x0C088EAEu, 1);  /* 0C088EAC mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C088EAE mov Rm,Rn */
	r8 = R32(r12 + 0x24u); UPD(0x0C088EB2u, 2);  /* 0C088EB0 mov.l @(disp,Rm),Rn */
	r5 = r9;  /* 0C088EB2 mov Rm,Rn */
	IF(0x0C088EB4u); { u32 t_ = r2; PR = 0x0C088EB8u; r8 += r0; /* slot add Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C088EB8u); }  /* 0C088EB4 jsr @Rn */
L_0C088EB8: BLKS(0x0C088EB8u);
	r6 = R32(r12 + 0x28u); UPD(0x0C088EBAu, 1);  /* 0C088EB8 mov.l @(disp,Rm),Rn */
	r4 = 0x0u;  /* 0C088EBA mov #imm,Rn */
	r6 += r0;  /* 0C088EBC add Rm,Rn */
	r9 = 0xC0BB1A0u; UPD(0x0C088EC0u, 3);  /* 0C088EBE mov.l @(disp,pc),Rn */
	r7 = r11;  /* 0C088EC0 mov Rm,Rn */
	r0 = 0x30000u; UPD(0x0C088EC4u, 2);  /* 0C088EC2 mov.l @(disp,pc),Rn */
	r5 = r8;  /* 0C088EC4 mov Rm,Rn */
	IF(0x0C088EC6u); { u32 t_ = r9; PR = 0x0C088ECAu; W32(r15, r0); /* slot mov.l Rm,@Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BB1A0, 0x0C0BB1A0u, 0x0C088ECAu); }  /* 0C088EC6 jsr @Rn */
L_0C088ECA: BLKS(0x0C088ECAu);
	r11 = 0x0u;  /* 0C088ECA mov #imm,Rn */
	r1 = 0xC069B90u; UPD(0x0C088ECEu, 2);  /* 0C088ECC mov.l @(disp,pc),Rn */
	r15 += 0x4u;  /* 0C088ECE add #imm,Rn */
	W8(r10, r11); UPD(0x0C088ED2u, 2);  /* 0C088ED0 mov.b Rm,@Rn */
	{ r4 = r13; /* slot mov Rm,Rn */ UPD(0x0C088A80u, 3); goto L_0C088A80; }  /* 0C088ED2 bra */
}

void blk_f_0C088F10(sh3_t *c)
{
	LOCALS;
L_0C088F10: BLKS(0x0C088F10u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C088F12u, 1);  /* 0C088F10 mov.l Rm,@-Rn */
	r1 = 0x3u;  /* 0C088F12 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C088F16u, 2);  /* 0C088F14 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C088F18u, 1);  /* 0C088F16 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C088F1Au, 1);  /* 0C088F18 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C088F1Cu, 1);  /* 0C088F1A mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C088F1Eu, 1);  /* 0C088F1C mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C088F20u, 1);  /* 0C088F1E mov.l Rm,@-Rn */
	r4 = 0xC3C43CCu; UPD(0x0C088F22u, 1);  /* 0C088F20 mov.l @(disp,pc),Rn */
	IF(0x0C088F22u); r15 -= 4; W32(r15, PR); UPD(0x0C088F24u, 1);  /* 0C088F22 sts.l pr,@-Rn */
	r2 = R32(r4); UPD(0x0C088F26u, 1);  /* 0C088F24 mov.l @Rm,Rn */
	r15 += 0xFFFFFFF4u;  /* 0C088F26 add #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r2); r2 += 2; r8 = v_; } UPD(0x0C088F2Au, 2);  /* 0C088F28 mov.w @Rm+,Rn */
	r14 = r15;  /* 0C088F2A mov Rm,Rn */
	r0 = r8;  /* 0C088F2C mov Rm,Rn */
	r0 &= 0x3u;  /* 0C088F2E and #imm,r0 */
	W32(r14, r0); UPD(0x0C088F32u, 4);  /* 0C088F30 mov.l Rm,@Rn */
	r3 = r0;  /* 0C088F32 mov Rm,Rn */
	IF(0x0C088F34u); ARG0(0x431Du); { s32 s_ = (s32)r1; if (s_ >= 0) r3 <<= (s_ & 31); else if ((s_ & 31) == 0) r3 = 0; else r3 >>= ((~s_ & 31) + 1); }  /* 0C088F34 shld Rm,Rn */
	r0 = 0xC19C2E0u; UPD(0x0C088F38u, 3);  /* 0C088F36 mov.l @(disp,pc),Rn */
	r3 += r0;  /* 0C088F38 add Rm,Rn */
	r10 = R32(r3 + 0x4u); UPD(0x0C088F3Cu, 2);  /* 0C088F3A mov.l @(disp,Rm),Rn */
	r9 = 0xC071740u; UPD(0x0C088F3Eu, 1);  /* 0C088F3C mov.l @(disp,pc),Rn */
	r3 += 0x2u;  /* 0C088F3E add #imm,Rn */
	W32(r4, r2); UPD(0x0C088F42u, 2);  /* 0C088F40 mov.l Rm,@Rn */
	IF(0x0C088F42u); { u32 t_ = r9; PR = 0x0C088F46u; r4 = (u32)(s32)(s16)R16(r3); /* slot mov.w @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C071740, 0x0C071740u, 0x0C088F46u); }  /* 0C088F42 jsr @Rn */
L_0C088F46: BLKS(0x0C088F46u);
	T = (r0 & r0) == 0;  /* 0C088F46 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C088F50u, 4); goto L_0C088F50; } goto L_0C088F4C; }  /* 0C088F48 bf/s */
L_0C088F4C: BLKS(0x0C088F4Cu);
	{ r14 += 0xCu; /* slot add #imm,Rn */ UPD(0x0C0890A6u, 4); goto L_0C0890A6; }  /* 0C088F4C bra */
L_0C088F50: BLKS(0x0C088F50u);
	r11 = 0xC28EDFCu; UPD(0x0C088F52u, 1);  /* 0C088F50 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFFFEu;  /* 0C088F52 add #imm,Rn */
	r4 = (u32)(s32)(s16)R16(r11); UPD(0x0C088F56u, 2);  /* 0C088F54 mov.w @Rm,Rn */
	r5 = 0x1u;  /* 0C088F56 mov #imm,Rn */
	r3 = 0xB4u; UPD(0x0C088F5Au, 2);  /* 0C088F58 mov.w @(disp,pc),Rn */
	T = r8 > r5;  /* 0C088F5A cmp/hi Rm,Rn */
	r2 = 0xC2B1811u; UPD(0x0C088F5Eu, 2);  /* 0C088F5C mov.l @(disp,pc),Rn */
	IF(0x0C088F5Eu); MACL = r4 * r3;  /* 0C088F5E mul.l Rm,Rn */
	r9 = 0xC2460ACu; UPD(0x0C088F62u, 3);  /* 0C088F60 mov.l @(disp,pc),Rn */
	r11 = (u32)(s32)(s8)R8(r2); UPD(0x0C088F64u, 1);  /* 0C088F62 mov.b @Rm,Rn */
	r13 = 0xC286578u; UPD(0x0C088F66u, 1);  /* 0C088F64 mov.l @(disp,pc),Rn */
	IF(0x0C088F66u); r2 = MACL;  /* 0C088F66 sts macl,Rn */
	r7 = (u32)(s32)(s16)R16(r9); UPD(0x0C088F6Au, 2);  /* 0C088F68 mov.w @Rm,Rn */
	r2 += r13;  /* 0C088F6A add Rm,Rn */
	r12 = 0xC3000110u; UPD(0x0C088F6Eu, 2);  /* 0C088F6C mov.l @(disp,pc),Rn */
	r6 = r7 & 0xFFFF;  /* 0C088F6E extu.w Rm,Rn */
	W32(r14 + 0x4u, r4); UPD(0x0C088F72u, 2);  /* 0C088F70 mov.l Rm,@(disp,Rn) */
	W32(r2, r12); UPD(0x0C088F74u, 1);  /* 0C088F72 mov.l Rm,@Rn */
	{ u32 c_ = T; W32(r2 + 0x4u, r6); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C088F7Cu, 3); goto L_0C088F7C; } UPD(0x0C088F78u, 1); goto L_0C088F78; }  /* 0C088F74 bt/s */
L_0C088F78: BLKS(0x0C088F78u);
	{ r5 = 0x8u; /* slot mov #imm,Rn */ UPD(0x0C0890C0u, 3); goto L_0C0890C0; }  /* 0C088F78 bra */
L_0C088F7C: BLKS(0x0C088F7Cu);
	r8 = 0x0u;  /* 0C088F7C mov #imm,Rn */
	W32(r2 + 0xCu, r8); UPD(0x0C088F80u, 2);  /* 0C088F7E mov.l Rm,@(disp,Rn) */
	W32(r2 + 0x8u, r8); UPD(0x0C088F82u, 1);  /* 0C088F80 mov.l Rm,@(disp,Rn) */
L_0C088F82: BLKS(0x0C088F82u);
	r12 = 0xC0A8A30u; UPD(0x0C088F84u, 1);  /* 0C088F82 mov.l @(disp,pc),Rn */
	r13 = 0x4Cu;  /* 0C088F84 mov #imm,Rn */
	IF(0x0C088F86u); { u32 t_ = r12; PR = 0x0C088F8Au; r4 = R32(r14 + 0x4u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C088F8Au); }  /* 0C088F86 jsr @Rn */
L_0C088F8A: BLKS(0x0C088F8Au);
	r2 = R32(r14 + 0x4u); UPD(0x0C088F8Cu, 1);  /* 0C088F8A mov.l @(disp,Rm),Rn */
	r9 = 0xB4u; UPD(0x0C088F8Eu, 1);  /* 0C088F8C mov.w @(disp,pc),Rn */
	IF(0x0C088F8Eu); MACL = r2 * r9;  /* 0C088F8E mul.l Rm,Rn */
	r7 = 0xC286318u; UPD(0x0C088F92u, 3);  /* 0C088F90 mov.l @(disp,pc),Rn */
	IF(0x0C088F92u); r9 = MACL;  /* 0C088F92 sts macl,Rn */
	IF(0x0C088F94u); MACL = r11 * r13;  /* 0C088F94 mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C088F98u, 4);  /* 0C088F96 mov.l @(disp,pc),Rn */
	r4 = 0xC237C08u; UPD(0x0C088F9Au, 1);  /* 0C088F98 mov.l @(disp,pc),Rn */
	IF(0x0C088F9Au); r12 = MACL;  /* 0C088F9A sts macl,Rn */
	r0 = 0xC3C43C6u; UPD(0x0C088F9Eu, 2);  /* 0C088F9C mov.l @(disp,pc),Rn */
	r9 += r3;  /* 0C088F9E add Rm,Rn */
	r12 += r7;  /* 0C088FA0 add Rm,Rn */
	r5 = (u32)(s32)(s16)R16(r4); UPD(0x0C088FA4u, 3);  /* 0C088FA2 mov.w @Rm,Rn */
	r13 = 0x0u;  /* 0C088FA4 mov #imm,Rn */
	r6 = R32(r12 + 0x8u); UPD(0x0C088FA8u, 2);  /* 0C088FA6 mov.l @(disp,Rm),Rn */
	IF(0x0C088FA8u); r5 <<= 16;  /* 0C088FA8 shll16 Rn */
	r8 = (u32)(s32)(s16)R16(r0); UPD(0x0C088FACu, 2);  /* 0C088FAA mov.w @Rm,Rn */
	r5 -= r6;  /* 0C088FAC sub Rm,Rn */
	r3 = 0xC0A9AE0u; UPD(0x0C088FB0u, 2);  /* 0C088FAE mov.l @(disp,pc),Rn */
	IF(0x0C088FB0u); r8 <<= 16;  /* 0C088FB0 shll16 Rn */
	r4 = R32(r14 + 0x4u); UPD(0x0C088FB4u, 2);  /* 0C088FB2 mov.l @(disp,Rm),Rn */
	r12 += 0x42u;  /* 0C088FB4 add #imm,Rn */
	W32(r9 + 0x24u, r5); UPD(0x0C088FB8u, 2);  /* 0C088FB6 mov.l Rm,@(disp,Rn) */
	IF(0x0C088FB8u); { u32 t_ = r3; PR = 0x0C088FBCu; W32(r9 + 0x28u, r8); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C088FBCu); }  /* 0C088FB8 jsr @Rn */
L_0C088FBC: BLKS(0x0C088FBCu);
	r0 = 0xB0u; UPD(0x0C088FBEu, 1);  /* 0C088FBC mov.w @(disp,pc),Rn */
	r3 = r9;  /* 0C088FBE mov Rm,Rn */
	IF(0x0C088FC0u); W8(r0 + r9, r11); UPD(0x0C088FC2u, 2);  /* 0C088FC0 mov.b Rm,@(r0,Rn) */
	r4 = 0xADu; UPD(0x0C088FC4u, 1);  /* 0C088FC2 mov.w @(disp,pc),Rn */
	r0 = r9;  /* 0C088FC4 mov Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r12); UPD(0x0C088FC8u, 2);  /* 0C088FC6 mov.b @Rm,Rn */
	r1 = 0xA8u; UPD(0x0C088FCAu, 1);  /* 0C088FC8 mov.w @(disp,pc),Rn */
	r2 += 0x1u;  /* 0C088FCA add #imm,Rn */
	IF(0x0C088FCCu); W8(r0 + r4, r13); UPD(0x0C088FCEu, 2);  /* 0C088FCC mov.b Rm,@(r0,Rn) */
	r3 += r1;  /* 0C088FCE add Rm,Rn */
	r0 = 0x9Cu; UPD(0x0C088FD2u, 2);  /* 0C088FD0 mov.w @(disp,pc),Rn */
	r3 += 0x1u;  /* 0C088FD2 add #imm,Rn */
	IF(0x0C088FD4u); W8(r0 + r9, r13); UPD(0x0C088FD6u, 2);  /* 0C088FD4 mov.b Rm,@(r0,Rn) */
	r12 = 0x3u;  /* 0C088FD6 mov #imm,Rn */
	W8(r3, r2); UPD(0x0C088FDAu, 2);  /* 0C088FD8 mov.b Rm,@Rn */
	r13 = 0x0u;  /* 0C088FDA mov #imm,Rn */
	r0 = R32(r14); UPD(0x0C088FDEu, 2);  /* 0C088FDC mov.l @Rm,Rn */
	r7 = 0xC19C2E0u; UPD(0x0C088FE0u, 1);  /* 0C088FDE mov.l @(disp,pc),Rn */
	IF(0x0C088FE0u); ARG0(0x40CDu); { s32 s_ = (s32)r12; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C088FE0 shld Rm,Rn */
	IF(0x0C088FE2u); r6 = R32(r0 + r7); UPD(0x0C088FE4u, 2);  /* 0C088FE2 mov.l @(r0,Rm),Rn */
	r6 += 0xFFFFFFFFu;  /* 0C088FE4 add #imm,Rn */
	T = (s32)r13 >= (s32)r6;  /* 0C088FE6 cmp/ge Rm,Rn */
	if (T) { UPD(0x0C0890A2u, 5); goto L_0C0890A2; }  /* 0C088FE8 bt */
L_0C088FEA: BLKS(0x0C088FEAu);
	r11 = r9;  /* 0C088FEA mov Rm,Rn */
	r12 = 0xC28EDFCu; UPD(0x0C088FEEu, 2);  /* 0C088FEC mov.l @(disp,pc),Rn */
	W32(r14 + 0x8u, r3); UPD(0x0C088FF0u, 1);  /* 0C088FEE mov.l Rm,@(disp,Rn) */
	r12 += 0x2u;  /* 0C088FF0 add #imm,Rn */
	IF(0x0C088FF2u); ;  /* 0C088FF2 nop */
	UPD(0x0C088FF4u, 2);
L_0C088FF4: BLKS(0x0C088FF4u);
	{ u32 v_ = (u32)(s32)(s16)R16(r12); r12 += 2; r9 = v_; } UPD(0x0C088FF6u, 1);  /* 0C088FF4 mov.w @Rm+,Rn */
	r10 += 0x4u;  /* 0C088FF6 add #imm,Rn */
	r8 = 0xB4u; UPD(0x0C088FFAu, 2);  /* 0C088FF8 mov.w @(disp,pc),Rn */
	IF(0x0C088FFAu); MACL = r9 * r8;  /* 0C088FFA mul.l Rm,Rn */
	r7 = (u32)(s32)(s16)R16(r10); UPD(0x0C088FFEu, 3);  /* 0C088FFC mov.w @Rm,Rn */
	r1 = 0xC286578u; UPD(0x0C089000u, 1);  /* 0C088FFE mov.l @(disp,pc),Rn */
	IF(0x0C089000u); r8 = MACL;  /* 0C089000 sts macl,Rn */
	r0 = 0xC28EDFCu; UPD(0x0C089004u, 2);  /* 0C089002 mov.l @(disp,pc),Rn */
	r7 += r7;  /* 0C089004 add Rm,Rn */
	IF(0x0C089006u); r6 = (u32)(s32)(s16)R16(r0 + r7); UPD(0x0C089008u, 2);  /* 0C089006 mov.w @(r0,Rm),Rn */
	r8 += r1;  /* 0C089008 add Rm,Rn */
	r8 += 0x7Cu;  /* 0C08900A add #imm,Rn */
	W16(r8, r6); UPD(0x0C08900Eu, 3);  /* 0C08900C mov.w Rm,@Rn */
	r0 = 0x6u;  /* 0C08900E mov #imm,Rn */
	IF(0x0C089010u); r5 = (u32)(s32)(s16)R16(r0 + r14); UPD(0x0C089012u, 2);  /* 0C089010 mov.w @(r0,Rm),Rn */
	r8 += 0x2u;  /* 0C089012 add #imm,Rn */
	W16(r8, r5); UPD(0x0C089016u, 2);  /* 0C089014 mov.w Rm,@Rn */
	r10 += 0xFFFFFFFCu;  /* 0C089016 add #imm,Rn */
	r3 = 0xC2460ACu; UPD(0x0C08901Au, 2);  /* 0C089018 mov.l @(disp,pc),Rn */
	r8 += 0xFFFFFF82u;  /* 0C08901A add #imm,Rn */
	r4 = (u32)(s32)(s16)R16(r3); UPD(0x0C08901Eu, 2);  /* 0C08901C mov.w @Rm,Rn */
	r2 = R32(r10); UPD(0x0C089020u, 1);  /* 0C08901E mov.l @Rm,Rn */
	r7 = r4 & 0xFFFF;  /* 0C089020 extu.w Rm,Rn */
	W32(r8, r2); UPD(0x0C089024u, 2);  /* 0C089022 mov.l Rm,@Rn */
	r4 = r9;  /* 0C089024 mov Rm,Rn */
	W32(r8 + 0x4u, r7); UPD(0x0C089028u, 2);  /* 0C089026 mov.l Rm,@(disp,Rn) */
	r0 = R32(r10 + 0x8u); UPD(0x0C08902Au, 1);  /* 0C089028 mov.l @(disp,Rm),Rn */
	r10 += 0x14u;  /* 0C08902A add #imm,Rn */
	W32(r8 + 0x8u, r0); UPD(0x0C08902Eu, 2);  /* 0C08902C mov.l Rm,@(disp,Rn) */
	r5 = (u32)(s32)(s16)R16(r10); UPD(0x0C089030u, 1);  /* 0C08902E mov.w @Rm,Rn */
	r0 = r8;  /* 0C089030 mov Rm,Rn */
	r6 = 0x8Au; UPD(0x0C089034u, 2);  /* 0C089032 mov.w @(disp,pc),Rn */
	r10 += 0xFFFFFFECu;  /* 0C089034 add #imm,Rn */
	IF(0x0C089036u); W16(r0 + r6, r5); UPD(0x0C089038u, 2);  /* 0C089036 mov.w Rm,@(r0,Rn) */
	r6 += 0xFFFFFFFCu;  /* 0C089038 add #imm,Rn */
	IF(0x0C08903Au); W16(r0 + r6, r5); UPD(0x0C08903Cu, 2);  /* 0C08903A mov.w Rm,@(r0,Rn) */
	r0 = r5;  /* 0C08903C mov Rm,Rn */
	r0 += 0x8u;  /* 0C08903E add #imm,Rn */
	r2 = 0xC0A8A30u; UPD(0x0C089042u, 3);  /* 0C089040 mov.l @(disp,pc),Rn */
	IF(0x0C089042u); r0 >>= 2;  /* 0C089042 shlr2 Rn */
	IF(0x0C089044u); r0 >>= 2;  /* 0C089044 shlr2 Rn */
	r0 &= 0x1Fu;  /* 0C089046 and #imm,r0 */
	IF(0x0C089048u); { u32 t_ = r2; PR = 0x0C08904Cu; W32(r8 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 5); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C08904Cu); }  /* 0C089048 jsr @Rn */
L_0C08904C: BLKS(0x0C08904Cu);
	r3 = R32(r11 + 0x24u); UPD(0x0C08904Eu, 1);  /* 0C08904C mov.l @(disp,Rm),Rn */
	r4 = R32(r11 + 0x28u); UPD(0x0C089050u, 1);  /* 0C08904E mov.l @(disp,Rm),Rn */
	W32(r8 + 0x24u, r3); UPD(0x0C089052u, 1);  /* 0C089050 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x28u, r4); UPD(0x0C089054u, 1);  /* 0C089052 mov.l Rm,@(disp,Rn) */
	r7 = R32(r10 + 0xCu); UPD(0x0C089056u, 1);  /* 0C089054 mov.l @(disp,Rm),Rn */
	r4 = r9;  /* 0C089056 mov Rm,Rn */
	W32(r8 + 0x2Cu, r7); UPD(0x0C08905Au, 2);  /* 0C089058 mov.l Rm,@(disp,Rn) */
	r0 = R32(r10 + 0x10u); UPD(0x0C08905Cu, 1);  /* 0C08905A mov.l @(disp,Rm),Rn */
	W32(r8 + 0x30u, r0); UPD(0x0C08905Eu, 1);  /* 0C08905C mov.l Rm,@(disp,Rn) */
	r5 = 0xC0A9AE0u; UPD(0x0C089060u, 1);  /* 0C08905E mov.l @(disp,pc),Rn */
	r8 += 0x50u;  /* 0C089060 add #imm,Rn */
	r6 = R32(r10 + 0x18u); UPD(0x0C089064u, 2);  /* 0C089062 mov.l @(disp,Rm),Rn */
	IF(0x0C089064u); { u32 t_ = r5; PR = 0x0C089068u; W32(r8, r6); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C089068u); }  /* 0C089064 jsr @Rn */
L_0C089068: BLKS(0x0C089068u);
	r0 = 0xB0u; UPD(0x0C08906Au, 1);  /* 0C089068 mov.w @(disp,pc),Rn */
	r8 += 0xFFFFFFB0u;  /* 0C08906A add #imm,Rn */
	IF(0x0C08906Cu); r2 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C08906Eu, 2);  /* 0C08906C mov.b @(r0,Rm),Rn */
	r7 = 0x0u;  /* 0C08906E mov #imm,Rn */
	IF(0x0C089070u); W8(r0 + r8, r2); UPD(0x0C089072u, 2);  /* 0C089070 mov.b Rm,@(r0,Rn) */
	r6 = 0x3u;  /* 0C089072 mov #imm,Rn */
	r9 = R32(r14 + 0x8u); UPD(0x0C089076u, 2);  /* 0C089074 mov.l @(disp,Rm),Rn */
	r0 = r8;  /* 0C089076 mov Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r9); UPD(0x0C08907Au, 2);  /* 0C089078 mov.b @Rm,Rn */
	r1 = 0xADu; UPD(0x0C08907Cu, 1);  /* 0C08907A mov.w @(disp,pc),Rn */
	r3 += 0x5u;  /* 0C08907C add #imm,Rn */
	IF(0x0C08907Eu); W8(r0 + r1, r3); UPD(0x0C089080u, 2);  /* 0C08907E mov.b Rm,@(r0,Rn) */
	r0 = 0x8Cu; UPD(0x0C089082u, 1);  /* 0C089080 mov.w @(disp,pc),Rn */
	r4 = 0xA8u; UPD(0x0C089084u, 1);  /* 0C089082 mov.w @(disp,pc),Rn */
	IF(0x0C089084u); W32(r0 + r8, r7); UPD(0x0C089086u, 1);  /* 0C089084 mov.l Rm,@(r0,Rn) */
	r4 += r8;  /* 0C089086 add Rm,Rn */
	r0 = r13;  /* 0C089088 mov Rm,Rn */
	r4 += 0x1u;  /* 0C08908A add #imm,Rn */
	W8(r4, r3); UPD(0x0C08908Eu, 4);  /* 0C08908C mov.b Rm,@Rn */
	r0 += 0x1u;  /* 0C08908E add #imm,Rn */
	r13 = (u32)(s32)(s16)r0;  /* 0C089090 exts.w Rm,Rn */
	r0 = R32(r14); UPD(0x0C089094u, 3);  /* 0C089092 mov.l @Rm,Rn */
	r5 = 0xC19C2E0u; UPD(0x0C089096u, 1);  /* 0C089094 mov.l @(disp,pc),Rn */
	IF(0x0C089096u); ARG0(0x406Du); { s32 s_ = (s32)r6; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C089096 shld Rm,Rn */
	IF(0x0C089098u); r8 = R32(r0 + r5); UPD(0x0C08909Au, 2);  /* 0C089098 mov.l @(r0,Rm),Rn */
	r8 += 0xFFFFFFFFu;  /* 0C08909A add #imm,Rn */
	T = (s32)r13 >= (s32)r8;  /* 0C08909C cmp/ge Rm,Rn */
	{ u32 c_ = !T; r10 += 0x1Cu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C088FF4u, 5); goto L_0C088FF4; } UPD(0x0C0890A2u, 1); goto L_0C0890A2; }  /* 0C08909E bf/s */
L_0C0890A2: BLKS(0x0C0890A2u);
	r0 = 0x1u;  /* 0C0890A2 mov #imm,Rn */
	r14 += 0xCu;  /* 0C0890A4 add #imm,Rn */
	UPD(0x0C0890A6u, 2);
L_0C0890A6: BLKS(0x0C0890A6u);
	r15 = r14;  /* 0C0890A6 mov Rm,Rn */
	IF(0x0C0890A8u); PR = R32(r15); r15 += 4; UPD(0x0C0890AAu, 2);  /* 0C0890A8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0890ACu, 1);  /* 0C0890AA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0890AEu, 1);  /* 0C0890AC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0890B0u, 1);  /* 0C0890AE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0890B2u, 1);  /* 0C0890B0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0890B4u, 1);  /* 0C0890B2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0890B6u, 1);  /* 0C0890B4 mov.l @Rm+,Rn */
	IF(0x0C0890B6u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0890B6 rts */
L_0C0890C0: BLKS(0x0C0890C0u);
	r0 = 0x3u;  /* 0C0890C0 mov #imm,Rn */
	W32(r2 + 0x8u, r5); UPD(0x0C0890C4u, 2);  /* 0C0890C2 mov.l Rm,@(disp,Rn) */
	{ W32(r2 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C088F82u, 3); goto L_0C088F82; }  /* 0C0890C4 bra */
}

void blk_f_0C089110(sh3_t *c)
{
	LOCALS;
L_0C089110: BLKS(0x0C089110u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C089112u, 1);  /* 0C089110 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C089114u, 1);  /* 0C089112 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C089114 exts.w Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C089118u, 2);  /* 0C089116 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C08911Au, 1);  /* 0C089118 mov.l Rm,@-Rn */
	r2 = 0xB4u; UPD(0x0C08911Cu, 1);  /* 0C08911A mov.w @(disp,pc),Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C08911Eu, 1);  /* 0C08911C mov.l Rm,@-Rn */
	IF(0x0C08911Eu); MACL = r8 * r2;  /* 0C08911E mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C089122u, 3);  /* 0C089120 mov.l Rm,@-Rn */
	r0 = 0xC286578u; UPD(0x0C089124u, 1);  /* 0C089122 mov.l @(disp,pc),Rn */
	IF(0x0C089124u); r12 = MACL;  /* 0C089124 sts macl,Rn */
	IF(0x0C089126u); r15 -= 4; W32(r15, PR); UPD(0x0C089128u, 2);  /* 0C089126 sts.l pr,@-Rn */
	r12 += r0;  /* 0C089128 add Rm,Rn */
	r2 = R32(r12 + 0x8u); UPD(0x0C08912Cu, 2);  /* 0C08912A mov.l @(disp,Rm),Rn */
	r0 = 0x7u;  /* 0C08912C mov #imm,Rn */
	r2 += 0xFFFFFFFFu;  /* 0C08912E add #imm,Rn */
	T = r2 > r0;  /* 0C089130 cmp/hi Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C08913Au, 6); goto L_0C08913A; } goto L_0C089136; }  /* 0C089132 bf/s */
L_0C089136: BLKS(0x0C089136u);
	{ r10 = R32(r12 + 0x24u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C089300u, 4); goto L_0C089300; }  /* 0C089136 bra */
L_0C08913A: BLKS(0x0C08913Au);
	r0 = 0xC08914Cu;  /* 0C08913A mova @(disp,pc),r0 */
	r2 += r2;  /* 0C08913C add Rm,Rn */
	IF(0x0C08913Eu); r3 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C089140u, 3);  /* 0C08913E mov.w @(r0,Rm),Rn */
	IF(0x0C089140u); { u32 tv_ = (r3 + 0x0C089144u); u32 t_ = PHYS(tv_); IF(0x0C089142u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C089140 braf Rn */
L_0C0891B6: BLKS(0x0C0891B6u);
	r15 = r14;  /* 0C0891B6 mov Rm,Rn */
	IF(0x0C0891B8u); PR = R32(r15); r15 += 4; UPD(0x0C0891BAu, 2);  /* 0C0891B8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0891BCu, 1);  /* 0C0891BA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0891BEu, 1);  /* 0C0891BC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0891C0u, 1);  /* 0C0891BE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0891C2u, 1);  /* 0C0891C0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0891C4u, 1);  /* 0C0891C2 mov.l @Rm+,Rn */
	IF(0x0C0891C4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0891C4 rts */
L_0C089300: BLKS(0x0C089300u);
	r15 += 0xFFFFFFF8u;  /* 0C089300 add #imm,Rn */
	r7 = 0x80000u; UPD(0x0C089304u, 2);  /* 0C089302 mov.l @(disp,pc),Rn */
	r5 = 0xEu;  /* 0C089304 mov #imm,Rn */
	r10 += r7;  /* 0C089306 add Rm,Rn */
	r7 = R32(r12 + 0x28u); UPD(0x0C08930Au, 3);  /* 0C089308 mov.l @(disp,Rm),Rn */
	r6 = r10;  /* 0C08930A mov Rm,Rn */
	r9 = 0xFFC60000u; UPD(0x0C08930Eu, 2);  /* 0C08930C mov.l @(disp,pc),Rn */
	r7 += r9;  /* 0C08930E add Rm,Rn */
	r9 = 0xB0u; UPD(0x0C089312u, 2);  /* 0C089310 mov.w @(disp,pc),Rn */
	r9 += r12;  /* 0C089312 add Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r9); UPD(0x0C089316u, 2);  /* 0C089314 mov.b @Rm,Rn */
	r8 = r2 & 0xFF;  /* 0C089316 extu.b Rm,Rn */
	W32(r15, r8); UPD(0x0C08931Au, 2);  /* 0C089318 mov.l Rm,@Rn */
	r8 = 0xA9u; UPD(0x0C08931Cu, 1);  /* 0C08931A mov.w @(disp,pc),Rn */
	r8 += r12;  /* 0C08931C add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r8); UPD(0x0C089320u, 2);  /* 0C08931E mov.b @Rm,Rn */
	r11 = r0 & 0xFF;  /* 0C089320 extu.b Rm,Rn */
	W32(r15 + 0x4u, r11); UPD(0x0C089324u, 2);  /* 0C089322 mov.l Rm,@(disp,Rn) */
	r11 = 0xC0BD6F0u; UPD(0x0C089326u, 1);  /* 0C089324 mov.l @(disp,pc),Rn */
	IF(0x0C089326u); { u32 t_ = r11; PR = 0x0C08932Au; r4 = R32(r12); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C08932Au); }  /* 0C089326 jsr @Rn */
L_0C08932A: BLKS(0x0C08932Au);
	r6 = (u32)(s32)(s8)R8(r9); UPD(0x0C08932Cu, 1);  /* 0C08932A mov.b @Rm,Rn */
	r7 = R32(r12 + 0x28u); UPD(0x0C08932Eu, 1);  /* 0C08932C mov.l @(disp,Rm),Rn */
	r4 = r6 & 0xFF;  /* 0C08932E extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C089332u, 2);  /* 0C089330 mov.l Rm,@Rn */
	r6 = r10;  /* 0C089332 mov Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r8); UPD(0x0C089336u, 2);  /* 0C089334 mov.b @Rm,Rn */
	r5 = 0xFFE30000u; UPD(0x0C089338u, 1);  /* 0C089336 mov.l @(disp,pc),Rn */
	r2 = r3 & 0xFF;  /* 0C089338 extu.b Rm,Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C08933Cu, 2);  /* 0C08933A mov.l Rm,@(disp,Rn) */
	r7 += r5;  /* 0C08933C add Rm,Rn */
	r4 = R32(r12); UPD(0x0C089340u, 2);  /* 0C08933E mov.l @Rm,Rn */
	IF(0x0C089340u); { u32 t_ = r11; PR = 0x0C089344u; r5 = 0xEu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C089344u); }  /* 0C089340 jsr @Rn */
L_0C089344: BLKS(0x0C089344u);
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C089346u, 1);  /* 0C089344 mov.b @Rm,Rn */
	r5 = r0 & 0xFF;  /* 0C089346 extu.b Rm,Rn */
	W32(r15, r5); UPD(0x0C08934Au, 2);  /* 0C089348 mov.l Rm,@Rn */
	r6 = (u32)(s32)(s8)R8(r8); UPD(0x0C08934Cu, 1);  /* 0C08934A mov.b @Rm,Rn */
	r5 = 0xEu;  /* 0C08934C mov #imm,Rn */
	r7 = r6 & 0xFF;  /* 0C08934E extu.b Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C089352u, 3);  /* 0C089350 mov.l Rm,@(disp,Rn) */
	r6 = r10;  /* 0C089352 mov Rm,Rn */
	r4 = R32(r12); UPD(0x0C089356u, 2);  /* 0C089354 mov.l @Rm,Rn */
	IF(0x0C089356u); { u32 t_ = r11; PR = 0x0C08935Au; r7 = R32(r12 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C08935Au); }  /* 0C089356 jsr @Rn */
L_0C08935A: BLKS(0x0C08935Au);
	r3 = (u32)(s32)(s8)R8(r9); UPD(0x0C08935Cu, 1);  /* 0C08935A mov.b @Rm,Rn */
	r6 = r10;  /* 0C08935C mov Rm,Rn */
	r7 = R32(r12 + 0x28u); UPD(0x0C089360u, 2);  /* 0C08935E mov.l @(disp,Rm),Rn */
	r2 = r3 & 0xFF;  /* 0C089360 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C089364u, 2);  /* 0C089362 mov.l Rm,@Rn */
	r0 = (u32)(s32)(s8)R8(r8); UPD(0x0C089366u, 1);  /* 0C089364 mov.b @Rm,Rn */
	r4 = 0x1D0000u; UPD(0x0C089368u, 1);  /* 0C089366 mov.l @(disp,pc),Rn */
	r5 = r0 & 0xFF;  /* 0C089368 extu.b Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C08936Cu, 2);  /* 0C08936A mov.l Rm,@(disp,Rn) */
	r7 += r4;  /* 0C08936C add Rm,Rn */
	r4 = R32(r12); UPD(0x0C089370u, 2);  /* 0C08936E mov.l @Rm,Rn */
	IF(0x0C089370u); { u32 t_ = r11; PR = 0x0C089374u; r5 = 0xEu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C089374u); }  /* 0C089370 jsr @Rn */
L_0C089374: BLKS(0x0C089374u);
	r4 = (u32)(s32)(s8)R8(r9); UPD(0x0C089376u, 1);  /* 0C089374 mov.b @Rm,Rn */
	r5 = 0xEu;  /* 0C089376 mov #imm,Rn */
	r7 = R32(r12 + 0x28u); UPD(0x0C08937Au, 2);  /* 0C089378 mov.l @(disp,Rm),Rn */
	r3 = r4 & 0xFF;  /* 0C08937A extu.b Rm,Rn */
	W32(r15, r3); UPD(0x0C08937Eu, 2);  /* 0C08937C mov.l Rm,@Rn */
	r2 = (u32)(s32)(s8)R8(r8); UPD(0x0C089380u, 1);  /* 0C08937E mov.b @Rm,Rn */
	r6 = 0x3A0000u; UPD(0x0C089382u, 1);  /* 0C089380 mov.l @(disp,pc),Rn */
	r0 = r2 & 0xFF;  /* 0C089382 extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C089386u, 2);  /* 0C089384 mov.l Rm,@(disp,Rn) */
	r7 += r6;  /* 0C089386 add Rm,Rn */
	r6 = r10;  /* 0C089388 mov Rm,Rn */
	IF(0x0C08938Au); { u32 t_ = r11; PR = 0x0C08938Eu; r4 = R32(r12); /* slot mov.l @Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C08938Eu); }  /* 0C08938A jsr @Rn */
L_0C08938E: BLKS(0x0C08938Eu);
	r5 = 0xA5u; UPD(0x0C089390u, 1);  /* 0C08938E mov.w @(disp,pc),Rn */
	r0 = r12;  /* 0C089390 mov Rm,Rn */
	IF(0x0C089392u); r10 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C089394u, 2);  /* 0C089392 mov.b @(r0,Rm),Rn */
	r15 += 0x8u;  /* 0C089394 add #imm,Rn */
	r6 = 0xC19C300u; UPD(0x0C089398u, 2);  /* 0C089396 mov.l @(disp,pc),Rn */
	IF(0x0C089398u); r10 <<= 2;  /* 0C089398 shll2 Rn */
	r5 = R32(r12 + 0x24u); UPD(0x0C08939Cu, 2);  /* 0C08939A mov.l @(disp,Rm),Rn */
	r0 = r10;  /* 0C08939C mov Rm,Rn */
	r7 = 0x40000u; UPD(0x0C0893A0u, 2);  /* 0C08939E mov.l @(disp,pc),Rn */
	r8 = 0xC07DF30u; UPD(0x0C0893A2u, 1);  /* 0C0893A0 mov.l @(disp,pc),Rn */
	r5 += r7;  /* 0C0893A2 add Rm,Rn */
	IF(0x0C0893A4u); r4 = R32(r0 + r6); UPD(0x0C0893A6u, 2);  /* 0C0893A4 mov.l @(r0,Rm),Rn */
	r1 = (u32)(s32)(s8)R8(r9); UPD(0x0C0893A8u, 1);  /* 0C0893A6 mov.b @Rm,Rn */
	r6 = R32(r12 + 0x28u); UPD(0x0C0893AAu, 1);  /* 0C0893A8 mov.l @(disp,Rm),Rn */
	IF(0x0C0893AAu); { u32 t_ = r8; PR = 0x0C0893AEu; r7 = r1 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07DF30, 0x0C07DF30u, 0x0C0893AEu); }  /* 0C0893AA jsr @Rn */
L_0C0893AE: BLKS(0x0C0893AEu);
	r4 = 0x0u;  /* 0C0893AE mov #imm,Rn */
	{ W32(r12, r4); /* slot mov.l Rm,@Rn */ UPD(0x0C0891B6u, 4); goto L_0C0891B6; }  /* 0C0893B0 bra */
}

void blk_f_0C089160(sh3_t *c)
{
	LOCALS;
L_0C089160: BLKS(0x0C089160u);
	r10 = 0xB4u; UPD(0x0C089162u, 1);  /* 0C089160 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C089162 add #imm,Rn */
	IF(0x0C089164u); MACL = r8 * r10;  /* 0C089164 mul.l Rm,Rn */
	r11 = 0xC286578u; UPD(0x0C089168u, 4);  /* 0C089166 mov.l @(disp,pc),Rn */
	IF(0x0C089168u); r9 = MACL;  /* 0C089168 sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C08916Cu, 2);  /* 0C08916A mov.w @(disp,pc),Rn */
	r9 += r11;  /* 0C08916C add Rm,Rn */
	IF(0x0C08916Eu); r5 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C089170u, 2);  /* 0C08916E mov.b @(r0,Rm),Rn */
	r6 = r5 & 0xFF;  /* 0C089170 extu.b Rm,Rn */
	W32(r15, r6); UPD(0x0C089174u, 2);  /* 0C089172 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C089174 add #imm,Rn */
	IF(0x0C089176u); r4 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C089178u, 2);  /* 0C089176 mov.b @(r0,Rm),Rn */
	r5 = 0x5u;  /* 0C089178 mov #imm,Rn */
	r3 = r4 & 0xFF;  /* 0C08917A extu.b Rm,Rn */
	r12 = 0xC0BECB0u; UPD(0x0C08917Eu, 3);  /* 0C08917C mov.l @(disp,pc),Rn */
	W32(r15 + 0x4u, r3); UPD(0x0C089180u, 1);  /* 0C08917E mov.l Rm,@(disp,Rn) */
	r4 = R32(r9); UPD(0x0C089182u, 1);  /* 0C089180 mov.l @Rm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C089184u, 1);  /* 0C089182 mov.l @(disp,Rm),Rn */
	IF(0x0C089184u); { u32 t_ = r12; PR = 0x0C089188u; r7 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BECB0, 0x0C0BECB0u, 0x0C089188u); }  /* 0C089184 jsr @Rn */
L_0C089188: BLKS(0x0C089188u);
	r12 = 0xC0A8B50u; UPD(0x0C08918Au, 1);  /* 0C089188 mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C08918A mov Rm,Rn */
	IF(0x0C08918Cu); { u32 t_ = r12; PR = 0x0C089190u; r15 += 0x8u; /* slot add #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C089190u); }  /* 0C08918C jsr @Rn */
L_0C089190: BLKS(0x0C089190u);
	IF(0x0C089190u); T = (s32)r0 >= 0;  /* 0C089190 cmp/pz Rn */
	{ u32 c_ = !T; r8 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0891B2u, 4); goto L_0C0891B2; } goto L_0C089196; }  /* 0C089192 bf/s */
L_0C089196: BLKS(0x0C089196u);
	r12 = 0xC07DE60u; UPD(0x0C089198u, 2);  /* 0C089196 mov.l @(disp,pc),Rn */
	r4 = 0x3u;  /* 0C089198 mov #imm,Rn */
	r5 = r0;  /* 0C08919A mov Rm,Rn */
	r6 = R32(r9 + 0x2Cu); UPD(0x0C08919Eu, 3);  /* 0C08919C mov.l @(disp,Rm),Rn */
	IF(0x0C08919Eu); { u32 t_ = r12; PR = 0x0C0891A2u; r7 = R32(r9 + 0x30u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07DE60, 0x0C07DE60u, 0x0C0891A2u); }  /* 0C08919E jsr @Rn */
L_0C0891A2: BLKS(0x0C0891A2u);
	IF(0x0C0891A2u); MACL = r8 * r10;  /* 0C0891A2 mul.l Rm,Rn */
	r0 = 0xA5u; UPD(0x0C0891A6u, 3);  /* 0C0891A4 mov.w @(disp,pc),Rn */
	IF(0x0C0891A6u); r10 = MACL;  /* 0C0891A6 sts macl,Rn */
	r10 += r11;  /* 0C0891A8 add Rm,Rn */
	r10 += r0;  /* 0C0891AA add Rm,Rn */
	r11 = (u32)(s32)(s8)R8(r10); UPD(0x0C0891AEu, 4);  /* 0C0891AC mov.b @Rm,Rn */
	r11 += 0x1u;  /* 0C0891AE add #imm,Rn */
	W8(r10, r11); UPD(0x0C0891B2u, 2);  /* 0C0891B0 mov.b Rm,@Rn */
L_0C0891B2: BLKS(0x0C0891B2u);
	r4 = 0x0u;  /* 0C0891B2 mov #imm,Rn */
	W32(r9, r4); UPD(0x0C0891B6u, 2);  /* 0C0891B4 mov.l Rm,@Rn */
	r15 = r14;  /* 0C0891B6 mov Rm,Rn */
	IF(0x0C0891B8u); PR = R32(r15); r15 += 4; UPD(0x0C0891BAu, 2);  /* 0C0891B8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0891BCu, 1);  /* 0C0891BA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0891BEu, 1);  /* 0C0891BC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0891C0u, 1);  /* 0C0891BE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0891C2u, 1);  /* 0C0891C0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0891C4u, 1);  /* 0C0891C2 mov.l @Rm+,Rn */
	IF(0x0C0891C4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0891C4 rts */
}

void blk_f_0C0891D0(sh3_t *c)
{
	LOCALS;
	goto L_0C0891D0;
L_0C0891B6: BLKS(0x0C0891B6u);
	r15 = r14;  /* 0C0891B6 mov Rm,Rn */
	IF(0x0C0891B8u); PR = R32(r15); r15 += 4; UPD(0x0C0891BAu, 2);  /* 0C0891B8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0891BCu, 1);  /* 0C0891BA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0891BEu, 1);  /* 0C0891BC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0891C0u, 1);  /* 0C0891BE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0891C2u, 1);  /* 0C0891C0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0891C4u, 1);  /* 0C0891C2 mov.l @Rm+,Rn */
	IF(0x0C0891C4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0891C4 rts */
L_0C0891D0: BLKS(0x0C0891D0u);
	r6 = 0xB4u; UPD(0x0C0891D2u, 1);  /* 0C0891D0 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C0891D2 add #imm,Rn */
	IF(0x0C0891D4u); MACL = r8 * r6;  /* 0C0891D4 mul.l Rm,Rn */
	r4 = 0xC286578u; UPD(0x0C0891D8u, 4);  /* 0C0891D6 mov.l @(disp,pc),Rn */
	r5 = 0x4u;  /* 0C0891D8 mov #imm,Rn */
	r0 = 0xB0u; UPD(0x0C0891DCu, 2);  /* 0C0891DA mov.w @(disp,pc),Rn */
	IF(0x0C0891DCu); r8 = MACL;  /* 0C0891DC sts macl,Rn */
	r8 += r4;  /* 0C0891DE add Rm,Rn */
	IF(0x0C0891E0u); r3 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0891E2u, 3);  /* 0C0891E0 mov.b @(r0,Rm),Rn */
	r7 = r3 & 0xFF;  /* 0C0891E2 extu.b Rm,Rn */
	W32(r15, r7); UPD(0x0C0891E6u, 2);  /* 0C0891E4 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C0891E6 add #imm,Rn */
	IF(0x0C0891E8u); r9 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C0891EAu, 2);  /* 0C0891E8 mov.b @(r0,Rm),Rn */
	r2 = r9 & 0xFF;  /* 0C0891EA extu.b Rm,Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C0891EEu, 2);  /* 0C0891EC mov.l Rm,@(disp,Rn) */
	r4 = R32(r8); UPD(0x0C0891F0u, 1);  /* 0C0891EE mov.l @Rm,Rn */
	r11 = 0xC0BD6F0u; UPD(0x0C0891F2u, 1);  /* 0C0891F0 mov.l @(disp,pc),Rn */
	r10 = 0x0u;  /* 0C0891F2 mov #imm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C0891F6u, 2);  /* 0C0891F4 mov.l @(disp,Rm),Rn */
	IF(0x0C0891F6u); { u32 t_ = r11; PR = 0x0C0891FAu; r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C0891FAu); }  /* 0C0891F6 jsr @Rn */
L_0C0891FA: BLKS(0x0C0891FAu);
	W32(r8, r10); UPD(0x0C0891FCu, 1);  /* 0C0891FA mov.l Rm,@Rn */
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C0891B6u, 3); goto L_0C0891B6; }  /* 0C0891FC bra */
}

void blk_f_0C089200(sh3_t *c)
{
	LOCALS;
	goto L_0C089200;
L_0C0891B2: BLKS(0x0C0891B2u);
	r4 = 0x0u;  /* 0C0891B2 mov #imm,Rn */
	W32(r9, r4); UPD(0x0C0891B6u, 2);  /* 0C0891B4 mov.l Rm,@Rn */
	r15 = r14;  /* 0C0891B6 mov Rm,Rn */
	IF(0x0C0891B8u); PR = R32(r15); r15 += 4; UPD(0x0C0891BAu, 2);  /* 0C0891B8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0891BCu, 1);  /* 0C0891BA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0891BEu, 1);  /* 0C0891BC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0891C0u, 1);  /* 0C0891BE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0891C2u, 1);  /* 0C0891C0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0891C4u, 1);  /* 0C0891C2 mov.l @Rm+,Rn */
	IF(0x0C0891C4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0891C4 rts */
L_0C089200: BLKS(0x0C089200u);
	r10 = 0xB4u; UPD(0x0C089202u, 1);  /* 0C089200 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C089202 add #imm,Rn */
	IF(0x0C089204u); MACL = r8 * r10;  /* 0C089204 mul.l Rm,Rn */
	r11 = 0xC286578u; UPD(0x0C089208u, 4);  /* 0C089206 mov.l @(disp,pc),Rn */
	IF(0x0C089208u); r9 = MACL;  /* 0C089208 sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C08920Cu, 2);  /* 0C08920A mov.w @(disp,pc),Rn */
	r9 += r11;  /* 0C08920C add Rm,Rn */
	IF(0x0C08920Eu); r3 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C089210u, 2);  /* 0C08920E mov.b @(r0,Rm),Rn */
	r7 = r3 & 0xFF;  /* 0C089210 extu.b Rm,Rn */
	W32(r15, r7); UPD(0x0C089214u, 2);  /* 0C089212 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C089214 add #imm,Rn */
	IF(0x0C089216u); r2 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C089218u, 2);  /* 0C089216 mov.b @(r0,Rm),Rn */
	r5 = r2 & 0xFF;  /* 0C089218 extu.b Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C08921Cu, 2);  /* 0C08921A mov.l Rm,@(disp,Rn) */
	r12 = 0xC0BECB0u; UPD(0x0C08921Eu, 1);  /* 0C08921C mov.l @(disp,pc),Rn */
	r5 = 0x3u;  /* 0C08921E mov #imm,Rn */
	r4 = R32(r9); UPD(0x0C089222u, 2);  /* 0C089220 mov.l @Rm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C089224u, 1);  /* 0C089222 mov.l @(disp,Rm),Rn */
	IF(0x0C089224u); { u32 t_ = r12; PR = 0x0C089228u; r7 = R32(r9 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BECB0, 0x0C0BECB0u, 0x0C089228u); }  /* 0C089224 jsr @Rn */
L_0C089228: BLKS(0x0C089228u);
	r4 = r8;  /* 0C089228 mov Rm,Rn */
	r8 = 0xC0A8B50u; UPD(0x0C08922Cu, 2);  /* 0C08922A mov.l @(disp,pc),Rn */
	IF(0x0C08922Cu); { u32 t_ = r8; PR = 0x0C089230u; r15 += 0x8u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C089230u); }  /* 0C08922C jsr @Rn */
L_0C089230: BLKS(0x0C089230u);
	IF(0x0C089230u); T = (s32)r0 >= 0;  /* 0C089230 cmp/pz Rn */
	{ u32 c_ = !T; r8 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0891B2u, 4); goto L_0C0891B2; } goto L_0C089236; }  /* 0C089232 bf/s */
L_0C089236: BLKS(0x0C089236u);
	r12 = 0xC07DE60u; UPD(0x0C089238u, 2);  /* 0C089236 mov.l @(disp,pc),Rn */
	r4 = 0x8u;  /* 0C089238 mov #imm,Rn */
	r5 = r0;  /* 0C08923A mov Rm,Rn */
	r6 = R32(r9 + 0x2Cu); UPD(0x0C08923Eu, 3);  /* 0C08923C mov.l @(disp,Rm),Rn */
	IF(0x0C08923Eu); { u32 t_ = r12; PR = 0x0C089242u; r7 = R32(r9 + 0x30u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07DE60, 0x0C07DE60u, 0x0C089242u); }  /* 0C08923E jsr @Rn */
L_0C089242: BLKS(0x0C089242u);
	IF(0x0C089242u); MACL = r8 * r10;  /* 0C089242 mul.l Rm,Rn */
	r0 = 0xA5u; UPD(0x0C089246u, 3);  /* 0C089244 mov.w @(disp,pc),Rn */
	r4 = 0x8u;  /* 0C089246 mov #imm,Rn */
	IF(0x0C089248u); r10 = MACL;  /* 0C089248 sts macl,Rn */
	r10 += r11;  /* 0C08924A add Rm,Rn */
	r11 = 0xC062780u; UPD(0x0C08924Eu, 4);  /* 0C08924C mov.l @(disp,pc),Rn */
	IF(0x0C08924Eu); { u32 t_ = r11; PR = 0x0C089252u; r10 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C089252u); }  /* 0C08924E jsr @Rn */
L_0C089252: BLKS(0x0C089252u);
	{ W8(r10, r0); /* slot mov.b Rm,@Rn */ UPD(0x0C0891B2u, 3); goto L_0C0891B2; }  /* 0C089252 bra */
}

void blk_f_0C089260(sh3_t *c)
{
	LOCALS;
	goto L_0C089260;
L_0C0891B6: BLKS(0x0C0891B6u);
	r15 = r14;  /* 0C0891B6 mov Rm,Rn */
	IF(0x0C0891B8u); PR = R32(r15); r15 += 4; UPD(0x0C0891BAu, 2);  /* 0C0891B8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0891BCu, 1);  /* 0C0891BA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0891BEu, 1);  /* 0C0891BC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0891C0u, 1);  /* 0C0891BE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0891C2u, 1);  /* 0C0891C0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0891C4u, 1);  /* 0C0891C2 mov.l @Rm+,Rn */
	IF(0x0C0891C4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0891C4 rts */
L_0C0891F0: BLKS(0x0C0891F0u);
	r11 = 0xC0BD6F0u; UPD(0x0C0891F2u, 1);  /* 0C0891F0 mov.l @(disp,pc),Rn */
	r10 = 0x0u;  /* 0C0891F2 mov #imm,Rn */
	r6 = R32(r8 + 0x24u); UPD(0x0C0891F6u, 2);  /* 0C0891F4 mov.l @(disp,Rm),Rn */
	IF(0x0C0891F6u); { u32 t_ = r11; PR = 0x0C0891FAu; r7 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C0891FAu); }  /* 0C0891F6 jsr @Rn */
L_0C0891FA: BLKS(0x0C0891FAu);
	W32(r8, r10); UPD(0x0C0891FCu, 1);  /* 0C0891FA mov.l Rm,@Rn */
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C0891B6u, 3); goto L_0C0891B6; }  /* 0C0891FC bra */
L_0C089260: BLKS(0x0C089260u);
	r3 = 0xB4u; UPD(0x0C089262u, 1);  /* 0C089260 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C089262 add #imm,Rn */
	IF(0x0C089264u); MACL = r8 * r3;  /* 0C089264 mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C089268u, 4);  /* 0C089266 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C08926Au, 1);  /* 0C089268 mov.w @(disp,pc),Rn */
	IF(0x0C08926Au); r8 = MACL;  /* 0C08926A sts macl,Rn */
	r8 += r7;  /* 0C08926C add Rm,Rn */
	IF(0x0C08926Eu); r2 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C089270u, 3);  /* 0C08926E mov.b @(r0,Rm),Rn */
	r5 = r2 & 0xFF;  /* 0C089270 extu.b Rm,Rn */
	W32(r15, r5); UPD(0x0C089274u, 2);  /* 0C089272 mov.l Rm,@Rn */
	r0 += 0xFFFFFFF9u;  /* 0C089274 add #imm,Rn */
	IF(0x0C089276u); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C089278u, 2);  /* 0C089276 mov.b @(r0,Rm),Rn */
	r5 = 0x3u;  /* 0C089278 mov #imm,Rn */
	r9 = r6 & 0xFF;  /* 0C08927A extu.b Rm,Rn */
	W32(r15 + 0x4u, r9); UPD(0x0C08927Eu, 3);  /* 0C08927C mov.l Rm,@(disp,Rn) */
	{ r4 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(0x0C0891F0u, 3); goto L_0C0891F0; }  /* 0C08927E bra */
}

void blk_f_0C089290(sh3_t *c)
{
	LOCALS;
	goto L_0C089290;
L_0C0891B6: BLKS(0x0C0891B6u);
	r15 = r14;  /* 0C0891B6 mov Rm,Rn */
	IF(0x0C0891B8u); PR = R32(r15); r15 += 4; UPD(0x0C0891BAu, 2);  /* 0C0891B8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0891BCu, 1);  /* 0C0891BA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0891BEu, 1);  /* 0C0891BC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0891C0u, 1);  /* 0C0891BE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0891C2u, 1);  /* 0C0891C0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0891C4u, 1);  /* 0C0891C2 mov.l @Rm+,Rn */
	IF(0x0C0891C4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0891C4 rts */
L_0C089290: BLKS(0x0C089290u);
	r3 = 0xB4u; UPD(0x0C089292u, 1);  /* 0C089290 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C089292 add #imm,Rn */
	IF(0x0C089294u); MACL = r8 * r3;  /* 0C089294 mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C089298u, 4);  /* 0C089296 mov.l @(disp,pc),Rn */
	IF(0x0C089298u); r12 = MACL;  /* 0C089298 sts macl,Rn */
	r10 = 0xB0u; UPD(0x0C08929Cu, 2);  /* 0C08929A mov.w @(disp,pc),Rn */
	r12 += r7;  /* 0C08929C add Rm,Rn */
	r10 += r12;  /* 0C08929E add Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r10); UPD(0x0C0892A2u, 3);  /* 0C0892A0 mov.b @Rm,Rn */
	r8 = 0x0u;  /* 0C0892A2 mov #imm,Rn */
	r5 = r2 & 0xFF;  /* 0C0892A4 extu.b Rm,Rn */
	W32(r15, r5); UPD(0x0C0892A8u, 3);  /* 0C0892A6 mov.l Rm,@Rn */
	r0 = 0xA9u; UPD(0x0C0892AAu, 1);  /* 0C0892A8 mov.w @(disp,pc),Rn */
	r5 = 0xCu;  /* 0C0892AA mov #imm,Rn */
	IF(0x0C0892ACu); r6 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C0892AEu, 2);  /* 0C0892AC mov.b @(r0,Rm),Rn */
	r11 = 0xC0BD6F0u; UPD(0x0C0892B0u, 1);  /* 0C0892AE mov.l @(disp,pc),Rn */
	r4 = r6 & 0xFF;  /* 0C0892B0 extu.b Rm,Rn */
	W32(r15 + 0x4u, r4); UPD(0x0C0892B4u, 2);  /* 0C0892B2 mov.l Rm,@(disp,Rn) */
	r9 = 0xC07DF30u; UPD(0x0C0892B6u, 1);  /* 0C0892B4 mov.l @(disp,pc),Rn */
	r4 = R32(r12); UPD(0x0C0892B8u, 1);  /* 0C0892B6 mov.l @Rm,Rn */
	r6 = R32(r12 + 0x24u); UPD(0x0C0892BAu, 1);  /* 0C0892B8 mov.l @(disp,Rm),Rn */
	IF(0x0C0892BAu); { u32 t_ = r11; PR = 0x0C0892BEu; r7 = R32(r12 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C0892BEu); }  /* 0C0892BA jsr @Rn */
L_0C0892BE: BLKS(0x0C0892BEu);
	r5 = R32(r12 + 0x24u); UPD(0x0C0892C0u, 1);  /* 0C0892BE mov.l @(disp,Rm),Rn */
	r15 += 0x8u;  /* 0C0892C0 add #imm,Rn */
	r0 = 0x40000u; UPD(0x0C0892C4u, 2);  /* 0C0892C2 mov.l @(disp,pc),Rn */
	r4 = 0x8u;  /* 0C0892C4 mov #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r10); UPD(0x0C0892C8u, 2);  /* 0C0892C6 mov.b @Rm,Rn */
	r5 += r0;  /* 0C0892C8 add Rm,Rn */
	r7 = r1 & 0xFF;  /* 0C0892CA extu.b Rm,Rn */
	IF(0x0C0892CCu); { u32 t_ = r9; PR = 0x0C0892D0u; r6 = R32(r12 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 4); CALLD(t_, 0x0C0892D0u); }  /* 0C0892CC jsr @Rn */
L_0C0892D0: BLKS(0x0C0892D0u);
	{ W32(r12, r8); /* slot mov.l Rm,@Rn */ UPD(0x0C0891B6u, 3); goto L_0C0891B6; }  /* 0C0892D0 bra */
}

void blk_f_0C0893E0(sh3_t *c)
{
	LOCALS;
	goto L_0C0893E0;
L_0C089110: BLKS(0x0C089110u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C089112u, 1);  /* 0C089110 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C089114u, 1);  /* 0C089112 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C089114 exts.w Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C089118u, 2);  /* 0C089116 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C08911Au, 1);  /* 0C089118 mov.l Rm,@-Rn */
	r2 = 0xB4u; UPD(0x0C08911Cu, 1);  /* 0C08911A mov.w @(disp,pc),Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C08911Eu, 1);  /* 0C08911C mov.l Rm,@-Rn */
	IF(0x0C08911Eu); MACL = r8 * r2;  /* 0C08911E mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C089122u, 3);  /* 0C089120 mov.l Rm,@-Rn */
	r0 = 0xC286578u; UPD(0x0C089124u, 1);  /* 0C089122 mov.l @(disp,pc),Rn */
	IF(0x0C089124u); r12 = MACL;  /* 0C089124 sts macl,Rn */
	IF(0x0C089126u); r15 -= 4; W32(r15, PR); UPD(0x0C089128u, 2);  /* 0C089126 sts.l pr,@-Rn */
	r12 += r0;  /* 0C089128 add Rm,Rn */
	r2 = R32(r12 + 0x8u); UPD(0x0C08912Cu, 2);  /* 0C08912A mov.l @(disp,Rm),Rn */
	r0 = 0x7u;  /* 0C08912C mov #imm,Rn */
	r2 += 0xFFFFFFFFu;  /* 0C08912E add #imm,Rn */
	T = r2 > r0;  /* 0C089130 cmp/hi Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C08913Au, 6); goto L_0C08913A; } goto L_0C089136; }  /* 0C089132 bf/s */
L_0C089136: BLKS(0x0C089136u);
	{ r10 = R32(r12 + 0x24u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C089300u, 4); goto L_0C089300; }  /* 0C089136 bra */
L_0C08913A: BLKS(0x0C08913Au);
	r0 = 0xC08914Cu;  /* 0C08913A mova @(disp,pc),r0 */
	r2 += r2;  /* 0C08913C add Rm,Rn */
	IF(0x0C08913Eu); r3 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C089140u, 3);  /* 0C08913E mov.w @(r0,Rm),Rn */
	IF(0x0C089140u); { u32 tv_ = (r3 + 0x0C089144u); u32 t_ = PHYS(tv_); IF(0x0C089142u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C089140 braf Rn */
L_0C0891B6: BLKS(0x0C0891B6u);
	r15 = r14;  /* 0C0891B6 mov Rm,Rn */
	IF(0x0C0891B8u); PR = R32(r15); r15 += 4; UPD(0x0C0891BAu, 2);  /* 0C0891B8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0891BCu, 1);  /* 0C0891BA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0891BEu, 1);  /* 0C0891BC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0891C0u, 1);  /* 0C0891BE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0891C2u, 1);  /* 0C0891C0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0891C4u, 1);  /* 0C0891C2 mov.l @Rm+,Rn */
	IF(0x0C0891C4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0891C4 rts */
L_0C089300: BLKS(0x0C089300u);
	r15 += 0xFFFFFFF8u;  /* 0C089300 add #imm,Rn */
	r7 = 0x80000u; UPD(0x0C089304u, 2);  /* 0C089302 mov.l @(disp,pc),Rn */
	r5 = 0xEu;  /* 0C089304 mov #imm,Rn */
	r10 += r7;  /* 0C089306 add Rm,Rn */
	r7 = R32(r12 + 0x28u); UPD(0x0C08930Au, 3);  /* 0C089308 mov.l @(disp,Rm),Rn */
	r6 = r10;  /* 0C08930A mov Rm,Rn */
	r9 = 0xFFC60000u; UPD(0x0C08930Eu, 2);  /* 0C08930C mov.l @(disp,pc),Rn */
	r7 += r9;  /* 0C08930E add Rm,Rn */
	r9 = 0xB0u; UPD(0x0C089312u, 2);  /* 0C089310 mov.w @(disp,pc),Rn */
	r9 += r12;  /* 0C089312 add Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r9); UPD(0x0C089316u, 2);  /* 0C089314 mov.b @Rm,Rn */
	r8 = r2 & 0xFF;  /* 0C089316 extu.b Rm,Rn */
	W32(r15, r8); UPD(0x0C08931Au, 2);  /* 0C089318 mov.l Rm,@Rn */
	r8 = 0xA9u; UPD(0x0C08931Cu, 1);  /* 0C08931A mov.w @(disp,pc),Rn */
	r8 += r12;  /* 0C08931C add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r8); UPD(0x0C089320u, 2);  /* 0C08931E mov.b @Rm,Rn */
	r11 = r0 & 0xFF;  /* 0C089320 extu.b Rm,Rn */
	W32(r15 + 0x4u, r11); UPD(0x0C089324u, 2);  /* 0C089322 mov.l Rm,@(disp,Rn) */
	r11 = 0xC0BD6F0u; UPD(0x0C089326u, 1);  /* 0C089324 mov.l @(disp,pc),Rn */
	IF(0x0C089326u); { u32 t_ = r11; PR = 0x0C08932Au; r4 = R32(r12); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C08932Au); }  /* 0C089326 jsr @Rn */
L_0C08932A: BLKS(0x0C08932Au);
	r6 = (u32)(s32)(s8)R8(r9); UPD(0x0C08932Cu, 1);  /* 0C08932A mov.b @Rm,Rn */
	r7 = R32(r12 + 0x28u); UPD(0x0C08932Eu, 1);  /* 0C08932C mov.l @(disp,Rm),Rn */
	r4 = r6 & 0xFF;  /* 0C08932E extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C089332u, 2);  /* 0C089330 mov.l Rm,@Rn */
	r6 = r10;  /* 0C089332 mov Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r8); UPD(0x0C089336u, 2);  /* 0C089334 mov.b @Rm,Rn */
	r5 = 0xFFE30000u; UPD(0x0C089338u, 1);  /* 0C089336 mov.l @(disp,pc),Rn */
	r2 = r3 & 0xFF;  /* 0C089338 extu.b Rm,Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C08933Cu, 2);  /* 0C08933A mov.l Rm,@(disp,Rn) */
	r7 += r5;  /* 0C08933C add Rm,Rn */
	r4 = R32(r12); UPD(0x0C089340u, 2);  /* 0C08933E mov.l @Rm,Rn */
	IF(0x0C089340u); { u32 t_ = r11; PR = 0x0C089344u; r5 = 0xEu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C089344u); }  /* 0C089340 jsr @Rn */
L_0C089344: BLKS(0x0C089344u);
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C089346u, 1);  /* 0C089344 mov.b @Rm,Rn */
	r5 = r0 & 0xFF;  /* 0C089346 extu.b Rm,Rn */
	W32(r15, r5); UPD(0x0C08934Au, 2);  /* 0C089348 mov.l Rm,@Rn */
	r6 = (u32)(s32)(s8)R8(r8); UPD(0x0C08934Cu, 1);  /* 0C08934A mov.b @Rm,Rn */
	r5 = 0xEu;  /* 0C08934C mov #imm,Rn */
	r7 = r6 & 0xFF;  /* 0C08934E extu.b Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C089352u, 3);  /* 0C089350 mov.l Rm,@(disp,Rn) */
	r6 = r10;  /* 0C089352 mov Rm,Rn */
	r4 = R32(r12); UPD(0x0C089356u, 2);  /* 0C089354 mov.l @Rm,Rn */
	IF(0x0C089356u); { u32 t_ = r11; PR = 0x0C08935Au; r7 = R32(r12 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C08935Au); }  /* 0C089356 jsr @Rn */
L_0C08935A: BLKS(0x0C08935Au);
	r3 = (u32)(s32)(s8)R8(r9); UPD(0x0C08935Cu, 1);  /* 0C08935A mov.b @Rm,Rn */
	r6 = r10;  /* 0C08935C mov Rm,Rn */
	r7 = R32(r12 + 0x28u); UPD(0x0C089360u, 2);  /* 0C08935E mov.l @(disp,Rm),Rn */
	r2 = r3 & 0xFF;  /* 0C089360 extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C089364u, 2);  /* 0C089362 mov.l Rm,@Rn */
	r0 = (u32)(s32)(s8)R8(r8); UPD(0x0C089366u, 1);  /* 0C089364 mov.b @Rm,Rn */
	r4 = 0x1D0000u; UPD(0x0C089368u, 1);  /* 0C089366 mov.l @(disp,pc),Rn */
	r5 = r0 & 0xFF;  /* 0C089368 extu.b Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C08936Cu, 2);  /* 0C08936A mov.l Rm,@(disp,Rn) */
	r7 += r4;  /* 0C08936C add Rm,Rn */
	r4 = R32(r12); UPD(0x0C089370u, 2);  /* 0C08936E mov.l @Rm,Rn */
	IF(0x0C089370u); { u32 t_ = r11; PR = 0x0C089374u; r5 = 0xEu; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C089374u); }  /* 0C089370 jsr @Rn */
L_0C089374: BLKS(0x0C089374u);
	r4 = (u32)(s32)(s8)R8(r9); UPD(0x0C089376u, 1);  /* 0C089374 mov.b @Rm,Rn */
	r5 = 0xEu;  /* 0C089376 mov #imm,Rn */
	r7 = R32(r12 + 0x28u); UPD(0x0C08937Au, 2);  /* 0C089378 mov.l @(disp,Rm),Rn */
	r3 = r4 & 0xFF;  /* 0C08937A extu.b Rm,Rn */
	W32(r15, r3); UPD(0x0C08937Eu, 2);  /* 0C08937C mov.l Rm,@Rn */
	r2 = (u32)(s32)(s8)R8(r8); UPD(0x0C089380u, 1);  /* 0C08937E mov.b @Rm,Rn */
	r6 = 0x3A0000u; UPD(0x0C089382u, 1);  /* 0C089380 mov.l @(disp,pc),Rn */
	r0 = r2 & 0xFF;  /* 0C089382 extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C089386u, 2);  /* 0C089384 mov.l Rm,@(disp,Rn) */
	r7 += r6;  /* 0C089386 add Rm,Rn */
	r6 = r10;  /* 0C089388 mov Rm,Rn */
	IF(0x0C08938Au); { u32 t_ = r11; PR = 0x0C08938Eu; r4 = R32(r12); /* slot mov.l @Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C08938Eu); }  /* 0C08938A jsr @Rn */
L_0C08938E: BLKS(0x0C08938Eu);
	r5 = 0xA5u; UPD(0x0C089390u, 1);  /* 0C08938E mov.w @(disp,pc),Rn */
	r0 = r12;  /* 0C089390 mov Rm,Rn */
	IF(0x0C089392u); r10 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C089394u, 2);  /* 0C089392 mov.b @(r0,Rm),Rn */
	r15 += 0x8u;  /* 0C089394 add #imm,Rn */
	r6 = 0xC19C300u; UPD(0x0C089398u, 2);  /* 0C089396 mov.l @(disp,pc),Rn */
	IF(0x0C089398u); r10 <<= 2;  /* 0C089398 shll2 Rn */
	r5 = R32(r12 + 0x24u); UPD(0x0C08939Cu, 2);  /* 0C08939A mov.l @(disp,Rm),Rn */
	r0 = r10;  /* 0C08939C mov Rm,Rn */
	r7 = 0x40000u; UPD(0x0C0893A0u, 2);  /* 0C08939E mov.l @(disp,pc),Rn */
	r8 = 0xC07DF30u; UPD(0x0C0893A2u, 1);  /* 0C0893A0 mov.l @(disp,pc),Rn */
	r5 += r7;  /* 0C0893A2 add Rm,Rn */
	IF(0x0C0893A4u); r4 = R32(r0 + r6); UPD(0x0C0893A6u, 2);  /* 0C0893A4 mov.l @(r0,Rm),Rn */
	r1 = (u32)(s32)(s8)R8(r9); UPD(0x0C0893A8u, 1);  /* 0C0893A6 mov.b @Rm,Rn */
	r6 = R32(r12 + 0x28u); UPD(0x0C0893AAu, 1);  /* 0C0893A8 mov.l @(disp,Rm),Rn */
	IF(0x0C0893AAu); { u32 t_ = r8; PR = 0x0C0893AEu; r7 = r1 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07DF30, 0x0C07DF30u, 0x0C0893AEu); }  /* 0C0893AA jsr @Rn */
L_0C0893AE: BLKS(0x0C0893AEu);
	r4 = 0x0u;  /* 0C0893AE mov #imm,Rn */
	{ W32(r12, r4); /* slot mov.l Rm,@Rn */ UPD(0x0C0891B6u, 4); goto L_0C0891B6; }  /* 0C0893B0 bra */
L_0C0893E0: BLKS(0x0C0893E0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0893E2u, 1);  /* 0C0893E0 mov.l Rm,@-Rn */
	r1 = (u32)(s32)(s16)r4;  /* 0C0893E2 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0893E6u, 2);  /* 0C0893E4 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0893E8u, 1);  /* 0C0893E6 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0893EAu, 1);  /* 0C0893E8 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0893ECu, 1);  /* 0C0893EA mov.l Rm,@-Rn */
	r3 = 0xB4u; UPD(0x0C0893EEu, 1);  /* 0C0893EC mov.w @(disp,pc),Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0893F0u, 1);  /* 0C0893EE mov.l Rm,@-Rn */
	IF(0x0C0893F0u); MACL = r1 * r3;  /* 0C0893F0 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0893F4u, 3);  /* 0C0893F2 mov.l Rm,@-Rn */
	r0 = 0xC286578u; UPD(0x0C0893F6u, 1);  /* 0C0893F4 mov.l @(disp,pc),Rn */
	IF(0x0C0893F6u); r2 = MACL;  /* 0C0893F6 sts macl,Rn */
	IF(0x0C0893F8u); r15 -= 4; W32(r15, PR); UPD(0x0C0893FAu, 2);  /* 0C0893F8 sts.l pr,@-Rn */
	r0 += r2;  /* 0C0893FA add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C0893FEu, 2);  /* 0C0893FC mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C0893FE add #imm,Rn */
	r14 = r15;  /* 0C089400 mov Rm,Rn */
	r2 += 0xFFFFFFFFu;  /* 0C089402 add #imm,Rn */
	r0 = 0x6u;  /* 0C089404 mov #imm,Rn */
	T = r2 > r0;  /* 0C089406 cmp/hi Rm,Rn */
	{ u32 c_ = !T; W32(r14, r1); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C089410u, 8); goto L_0C089410; } UPD(0x0C08940Cu, 1); goto L_0C08940C; }  /* 0C089408 bf/s */
L_0C08940C: BLKS(0x0C08940Cu);
	{ r14 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C089506u, 3); goto L_0C089506; }  /* 0C08940C bra */
L_0C089410: BLKS(0x0C089410u);
	r0 = 0xC089420u;  /* 0C089410 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C089412 add Rm,Rn */
	IF(0x0C089414u); r4 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C089416u, 3);  /* 0C089414 mov.w @(r0,Rm),Rn */
	IF(0x0C089416u); { u32 tv_ = (r4 + 0x0C08941Au); u32 t_ = PHYS(tv_); IF(0x0C089418u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C089430u: goto L_0C089430; case 0x0C0895F0u: goto L_0C0895F0; case 0x0C0896B0u: goto L_0C0896B0; case 0x0C089880u: goto L_0C089880; case 0x0C089900u: goto L_0C089900; default: JUMPD(tv_); } }  /* 0C089416 braf Rn */
L_0C089430: BLKS(0x0C089430u);
	r8 = 0xC0A8CA0u; UPD(0x0C089432u, 1);  /* 0C089430 mov.l @(disp,pc),Rn */
	IF(0x0C089432u); { u32 t_ = r8; PR = 0x0C089436u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C089436u); }  /* 0C089432 jsr @Rn */
L_0C089436: BLKS(0x0C089436u);
	IF(0x0C089436u); T = (s32)r0 >= 0;  /* 0C089436 cmp/pz Rn */
	{ u32 c_ = T; r9 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C089440u, 4); goto L_0C089440; } goto L_0C08943C; }  /* 0C089438 bt/s */
L_0C08943C: BLKS(0x0C08943Cu);
	{ r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(0x0C0895B2u, 4); goto L_0C0895B2; }  /* 0C08943C bra */
L_0C089440: BLKS(0x0C089440u);
	r7 = 0xB4u; UPD(0x0C089442u, 1);  /* 0C089440 mov.w @(disp,pc),Rn */
	r0 = R32(r14); UPD(0x0C089444u, 1);  /* 0C089442 mov.l @Rm,Rn */
	IF(0x0C089444u); MACL = r0 * r7;  /* 0C089444 mul.l Rm,Rn */
	r13 = 0xC286578u; UPD(0x0C089448u, 3);  /* 0C089446 mov.l @(disp,pc),Rn */
	IF(0x0C089448u); r3 = MACL;  /* 0C089448 sts macl,Rn */
	IF(0x0C08944Au); MACL = r9 * r7;  /* 0C08944A mul.l Rm,Rn */
	r3 += r13;  /* 0C08944C add Rm,Rn */
	r6 = 0x9Fu; UPD(0x0C089450u, 5);  /* 0C08944E mov.w @(disp,pc),Rn */
	IF(0x0C089450u); r7 = MACL;  /* 0C089450 sts macl,Rn */
	r7 += r13;  /* 0C089452 add Rm,Rn */
	r11 = R32(r7 + 0x24u); UPD(0x0C089456u, 3);  /* 0C089454 mov.l @(disp,Rm),Rn */
	r0 = r3;  /* 0C089456 mov Rm,Rn */
	r9 = R32(r7 + 0x28u); UPD(0x0C08945Au, 2);  /* 0C089458 mov.l @(disp,Rm),Rn */
	r12 = R32(r3 + 0x2Cu); UPD(0x0C08945Cu, 1);  /* 0C08945A mov.l @(disp,Rm),Rn */
	r10 = R32(r3 + 0x30u); UPD(0x0C08945Eu, 1);  /* 0C08945C mov.l @(disp,Rm),Rn */
	r11 += r12;  /* 0C08945E add Rm,Rn */
	IF(0x0C089460u); r5 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C089462u, 2);  /* 0C089460 mov.b @(r0,Rm),Rn */
	r9 += r10;  /* 0C089462 add Rm,Rn */
	r0 = r5 & 0xFF;  /* 0C089464 extu.b Rm,Rn */
	W32(r3 + 0x24u, r11); UPD(0x0C089468u, 3);  /* 0C089466 mov.l Rm,@(disp,Rn) */
	T = (r0 & r0) == 0;  /* 0C089468 tst Rm,Rn */
	{ u32 c_ = T; W32(r3 + 0x28u, r9); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C089520u, 4); goto L_0C089520; } UPD(0x0C08946Eu, 1); goto L_0C08946E; }  /* 0C08946A bt/s */
L_0C08946E: BLKS(0x0C08946Eu);
	T = r0 == 0x1u;  /* 0C08946E cmp/eq #imm,r0 */
	{ u32 c_ = T; r0 = r3; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0894B0u, 4); goto L_0C0894B0; } UPD(0x0C089474u, 1); goto L_0C089474; }  /* 0C089470 bt/s */
L_0C089474: BLKS(0x0C089474u);
	r2 = 0xB4u; UPD(0x0C089476u, 1);  /* 0C089474 mov.w @(disp,pc),Rn */
	r13 = 0x3Fu;  /* 0C089476 mov #imm,Rn */
	r0 = R32(r14); UPD(0x0C08947Au, 2);  /* 0C089478 mov.l @Rm,Rn */
	IF(0x0C08947Au); MACL = r0 * r2;  /* 0C08947A mul.l Rm,Rn */
	r8 = 0xC286578u; UPD(0x0C08947Eu, 3);  /* 0C08947C mov.l @(disp,pc),Rn */
	IF(0x0C08947Eu); r2 = MACL;  /* 0C08947E sts macl,Rn */
	r2 += r8;  /* 0C089480 add Rm,Rn */
	r7 = 0x86u; UPD(0x0C089484u, 3);  /* 0C089482 mov.w @(disp,pc),Rn */
	r0 = r2;  /* 0C089484 mov Rm,Rn */
	IF(0x0C089486u); r1 = (u32)(s32)(s16)R16(r0 + r7); UPD(0x0C089488u, 2);  /* 0C089486 mov.w @(r0,Rm),Rn */
	r1 += 0x4u;  /* 0C089488 add #imm,Rn */
	IF(0x0C08948Au); r1 >>= 2;  /* 0C08948A shlr2 Rn */
	IF(0x0C08948Cu); T = r1 & 1; r1 >>= 1;  /* 0C08948C shlr Rn */
	r1 &= r13;  /* 0C08948E and Rm,Rn */
	UPD(0x0C089490u, 4);
L_0C089490: BLKS(0x0C089490u);
	W32(r2 + 0xCu, r1); UPD(0x0C089492u, 1);  /* 0C089490 mov.l Rm,@(disp,Rn) */
L_0C089492: BLKS(0x0C089492u);
	r4 = R32(r14); UPD(0x0C089494u, 1);  /* 0C089492 mov.l @Rm,Rn */
	r1 = 0xC0A8AE0u; UPD(0x0C089496u, 1);  /* 0C089494 mov.l @(disp,pc),Rn */
L_0C089496: BLKS(0x0C089496u);
	r14 += 0x4u;  /* 0C089496 add #imm,Rn */
	UPD(0x0C089498u, 1);
L_0C089498: BLKS(0x0C089498u);
	r15 = r14;  /* 0C089498 mov Rm,Rn */
	IF(0x0C08949Au); PR = R32(r15); r15 += 4; UPD(0x0C08949Cu, 2);  /* 0C08949A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08949Eu, 1);  /* 0C08949C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0894A0u, 1);  /* 0C08949E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0894A2u, 1);  /* 0C0894A0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0894A4u, 1);  /* 0C0894A2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0894A6u, 1);  /* 0C0894A4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0894A8u, 1);  /* 0C0894A6 mov.l @Rm+,Rn */
	IF(0x0C0894A8u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C089110u: goto L_0C089110; case 0x0C0A8AE0u: TAIL(blk_f_0C0A8AE0); default: JUMPD(tv_); } }  /* 0C0894A8 jmp @Rn */
L_0C0894B0: BLKS(0x0C0894B0u);
	r11 = 0xA5u; UPD(0x0C0894B2u, 1);  /* 0C0894B0 mov.w @(disp,pc),Rn */
	IF(0x0C0894B2u); r2 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C0894B4u, 1);  /* 0C0894B2 mov.b @(r0,Rm),Rn */
	r13 = 0x0u;  /* 0C0894B4 mov #imm,Rn */
	r5 = 0x88u; UPD(0x0C0894B8u, 2);  /* 0C0894B6 mov.w @(disp,pc),Rn */
	r2 += 0x1u;  /* 0C0894B8 add #imm,Rn */
	r7 = 0x84u; UPD(0x0C0894BCu, 2);  /* 0C0894BA mov.w @(disp,pc),Rn */
	r5 += r3;  /* 0C0894BC add Rm,Rn */
	r4 = 0xFFu; UPD(0x0C0894C0u, 2);  /* 0C0894BE mov.w @(disp,pc),Rn */
	r7 += r3;  /* 0C0894C0 add Rm,Rn */
	IF(0x0C0894C2u); ;  /* 0C0894C2 nop */
	UPD(0x0C0894C4u, 2);
L_0C0894C4: BLKS(0x0C0894C4u);
	T = (s32)r13 >= (s32)r2;  /* 0C0894C4 cmp/ge Rm,Rn */
	{ u32 c_ = T; r6 = r7; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C089474u, 4); goto L_0C089474; } goto L_0C0894CA; }  /* 0C0894C6 bt/s */
L_0C0894CA: BLKS(0x0C0894CAu);
	r6 += 0x2u;  /* 0C0894CA add #imm,Rn */
	r10 = (u32)(s32)(s16)R16(r5); UPD(0x0C0894CEu, 3);  /* 0C0894CC mov.w @Rm,Rn */
	r3 = (u32)(s32)(s16)R16(r6); UPD(0x0C0894D0u, 1);  /* 0C0894CE mov.w @Rm,Rn */
	r11 = r10;  /* 0C0894D0 mov Rm,Rn */
	r12 = 0x1FFu; UPD(0x0C0894D4u, 2);  /* 0C0894D2 mov.w @(disp,pc),Rn */
	r11 -= r3;  /* 0C0894D4 sub Rm,Rn */
	r11 &= r12;  /* 0C0894D6 and Rm,Rn */
	T = (r11 & r11) == 0;  /* 0C0894D8 tst Rm,Rn */
	if (T) { UPD(0x0C089500u, 6); goto L_0C089500; }  /* 0C0894DA bt */
L_0C0894DC: BLKS(0x0C0894DCu);
	T = (s32)r11 > (s32)r4;  /* 0C0894DC cmp/gt Rm,Rn */
	{ u32 c_ = T; r1 = r3; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0894F0u, 4); goto L_0C0894F0; } goto L_0C0894E2; }  /* 0C0894DE bt/s */
L_0C0894E2: BLKS(0x0C0894E2u);
	r1 = r3;  /* 0C0894E2 mov Rm,Rn */
	r1 += 0x1u;  /* 0C0894E4 add #imm,Rn */
	UPD(0x0C0894E6u, 3);
L_0C0894E6: BLKS(0x0C0894E6u);
	r3 = r13;  /* 0C0894E6 mov Rm,Rn */
	r3 += 0x1u;  /* 0C0894E8 add #imm,Rn */
	W16(r6, r1); UPD(0x0C0894ECu, 3);  /* 0C0894EA mov.w Rm,@Rn */
	{ r13 = (u32)(s32)(s16)r3; /* slot exts.w Rm,Rn */ UPD(0x0C0894C4u, 3); goto L_0C0894C4; }  /* 0C0894EC bra */
L_0C0894F0: BLKS(0x0C0894F0u);
	{ r1 += 0xFFFFFFFFu; /* slot add #imm,Rn */ UPD(0x0C0894E6u, 3); goto L_0C0894E6; }  /* 0C0894F0 bra */
L_0C089500: BLKS(0x0C089500u);
	r6 = 0x9Fu; UPD(0x0C089502u, 1);  /* 0C089500 mov.w @(disp,pc),Rn */
	IF(0x0C089502u); W8(r0 + r6, r11); UPD(0x0C089504u, 1);  /* 0C089502 mov.b Rm,@(r0,Rn) */
L_0C089504: BLKS(0x0C089504u);
	r14 += 0x4u;  /* 0C089504 add #imm,Rn */
	UPD(0x0C089506u, 1);
L_0C089506: BLKS(0x0C089506u);
	r15 = r14;  /* 0C089506 mov Rm,Rn */
	IF(0x0C089508u); PR = R32(r15); r15 += 4; UPD(0x0C08950Au, 2);  /* 0C089508 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08950Cu, 1);  /* 0C08950A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08950Eu, 1);  /* 0C08950C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C089510u, 1);  /* 0C08950E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C089512u, 1);  /* 0C089510 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C089514u, 1);  /* 0C089512 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C089516u, 1);  /* 0C089514 mov.l @Rm+,Rn */
	IF(0x0C089516u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C089516 rts */
L_0C089520: BLKS(0x0C089520u);
	r6 = 0x98u; UPD(0x0C089522u, 1);  /* 0C089520 mov.w @(disp,pc),Rn */
	r10 = 0x1Du;  /* 0C089522 mov #imm,Rn */
	r6 += r3;  /* 0C089524 add Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r6); UPD(0x0C089528u, 3);  /* 0C089526 mov.b @Rm,Rn */
	r0 = r3;  /* 0C089528 mov Rm,Rn */
	r2 += 0x1u;  /* 0C08952A add #imm,Rn */
	r5 = 0xA5u; UPD(0x0C08952Eu, 3);  /* 0C08952C mov.w @(disp,pc),Rn */
	r9 = r2 & 0xFF;  /* 0C08952E extu.b Rm,Rn */
	W8(r6, r2); UPD(0x0C089532u, 2);  /* 0C089530 mov.b Rm,@Rn */
	T = r10 >= r9;  /* 0C089532 cmp/hs Rm,Rn */
	IF(0x0C089534u); r8 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C089536u, 2);  /* 0C089534 mov.b @(r0,Rm),Rn */
	IF(0x0C089536u); r2 = T;  /* 0C089536 movt Rn */
	T = (r8 & r8) == 0;  /* 0C089538 tst Rm,Rn */
	IF(0x0C08953Au); r4 = T;  /* 0C08953A movt Rn */
	r2 &= r4;  /* 0C08953C and Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C08953E tst Rm,Rn */
	if (!T) { UPD(0x0C089504u, 8); goto L_0C089504; }  /* 0C089540 bf */
L_0C089542: BLKS(0x0C089542u);
	W8(r6, r2); UPD(0x0C089544u, 1);  /* 0C089542 mov.b Rm,@Rn */
	r1 = R32(r7 + 0x24u); UPD(0x0C089546u, 1);  /* 0C089544 mov.l @(disp,Rm),Rn */
	r6 = 0x3FFFFFu; UPD(0x0C089548u, 1);  /* 0C089546 mov.l @(disp,pc),Rn */
	T = (s32)r1 > (s32)r6;  /* 0C089548 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C089570u, 4); goto L_0C089570; }  /* 0C08954A bt */
L_0C08954C: BLKS(0x0C08954Cu);
	r11 = 0x88u; UPD(0x0C08954Eu, 1);  /* 0C08954C mov.w @(disp,pc),Rn */
	r11 += r3;  /* 0C08954E add Rm,Rn */
	r11 += 0x2u;  /* 0C089550 add #imm,Rn */
	r3 = (u32)(s32)(s16)R16(r11); UPD(0x0C089554u, 3);  /* 0C089552 mov.w @Rm,Rn */
	{ u32 v_ = r3; r11 -= 2; W16(r11, v_); } UPD(0x0C089556u, 1);  /* 0C089554 mov.w Rm,@-Rn */
L_0C089556: BLKS(0x0C089556u);
	r1 = R32(r14); UPD(0x0C089558u, 1);  /* 0C089556 mov.l @Rm,Rn */
	r6 = 0xB4u; UPD(0x0C08955Au, 1);  /* 0C089558 mov.w @(disp,pc),Rn */
	IF(0x0C08955Au); MACL = r1 * r6;  /* 0C08955A mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C08955Eu, 3);  /* 0C08955C mov.l @(disp,pc),Rn */
	IF(0x0C08955Eu); r0 = MACL;  /* 0C08955E sts macl,Rn */
	r5 = 0x9Fu; UPD(0x0C089562u, 2);  /* 0C089560 mov.w @(disp,pc),Rn */
	r0 += r9;  /* 0C089562 add Rm,Rn */
	r0 += r5;  /* 0C089564 add Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r0); UPD(0x0C089568u, 3);  /* 0C089566 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C089568 add #imm,Rn */
	{ W8(r0, r4); /* slot mov.b Rm,@Rn */ UPD(0x0C089474u, 4); goto L_0C089474; }  /* 0C08956A bra */
L_0C089570: BLKS(0x0C089570u);
	r9 = 0x88u; UPD(0x0C089572u, 1);  /* 0C089570 mov.w @(disp,pc),Rn */
	r9 += r3;  /* 0C089572 add Rm,Rn */
	r8 = r9;  /* 0C089574 mov Rm,Rn */
	r8 += 0x2u;  /* 0C089576 add #imm,Rn */
	r13 = (u32)(s32)(s16)R16(r8); UPD(0x0C08957Au, 4);  /* 0C089578 mov.w @Rm,Rn */
	r12 = 0x100u; UPD(0x0C08957Cu, 1);  /* 0C08957A mov.w @(disp,pc),Rn */
	T = r13 == r12;  /* 0C08957C cmp/eq Rm,Rn */
	if (T) { UPD(0x0C0895A0u, 4); goto L_0C0895A0; }  /* 0C08957E bt */
L_0C089580: BLKS(0x0C089580u);
	r10 = 0xC062780u; UPD(0x0C089582u, 1);  /* 0C089580 mov.l @(disp,pc),Rn */
	r4 = 0xFFu; UPD(0x0C089584u, 1);  /* 0C089582 mov.w @(disp,pc),Rn */
	IF(0x0C089584u); { u32 t_ = r10; PR = 0x0C089588u; IF(0x0C089586u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C089588u); }  /* 0C089584 jsr @Rn */
L_0C089588: BLKS(0x0C089588u);
	r7 = (u32)(s32)(s16)R16(r8); UPD(0x0C08958Au, 1);  /* 0C089588 mov.w @Rm,Rn */
	r0 += r7;  /* 0C08958A add Rm,Rn */
	r0 += 0xFFFFFF80u;  /* 0C08958C add #imm,Rn */
	{ W16(r9, r0); /* slot mov.w Rm,@Rn */ UPD(0x0C089556u, 5); goto L_0C089556; }  /* 0C08958E bra */
L_0C0895A0: BLKS(0x0C0895A0u);
	r8 = 0xC062780u; UPD(0x0C0895A2u, 1);  /* 0C0895A0 mov.l @(disp,pc),Rn */
	r4 = 0x200u; UPD(0x0C0895A4u, 1);  /* 0C0895A2 mov.w @(disp,pc),Rn */
	IF(0x0C0895A4u); { u32 t_ = r8; PR = 0x0C0895A8u; IF(0x0C0895A6u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C0895A8u); }  /* 0C0895A4 jsr @Rn */
L_0C0895A8: BLKS(0x0C0895A8u);
	{ W16(r9, r0); /* slot mov.w Rm,@Rn */ UPD(0x0C089556u, 3); goto L_0C089556; }  /* 0C0895A8 bra */
L_0C0895B0: BLKS(0x0C0895B0u);
	r4 = R32(r14); UPD(0x0C0895B2u, 1);  /* 0C0895B0 mov.l @Rm,Rn */
L_0C0895B2: BLKS(0x0C0895B2u);
	r1 = 0xC089110u; UPD(0x0C0895B4u, 1);  /* 0C0895B2 mov.l @(disp,pc),Rn */
	{ r14 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C089498u, 3); goto L_0C089498; }  /* 0C0895B4 bra */
L_0C0895F0: BLKS(0x0C0895F0u);
	r8 = 0xC0A8B50u; UPD(0x0C0895F2u, 1);  /* 0C0895F0 mov.l @(disp,pc),Rn */
	IF(0x0C0895F2u); { u32 t_ = r8; PR = 0x0C0895F6u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C0895F6u); }  /* 0C0895F2 jsr @Rn */
L_0C0895F6: BLKS(0x0C0895F6u);
	IF(0x0C0895F6u); T = (s32)r0 >= 0;  /* 0C0895F6 cmp/pz Rn */
	{ u32 c_ = !T; r9 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0895B0u, 4); goto L_0C0895B0; } goto L_0C0895FC; }  /* 0C0895F8 bf/s */
L_0C0895FC: BLKS(0x0C0895FCu);
	r8 = R32(r14); UPD(0x0C0895FEu, 2);  /* 0C0895FC mov.l @Rm,Rn */
	r10 = 0xB4u; UPD(0x0C089600u, 1);  /* 0C0895FE mov.w @(disp,pc),Rn */
	IF(0x0C089600u); MACL = r8 * r10;  /* 0C089600 mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C089604u, 3);  /* 0C089602 mov.l @(disp,pc),Rn */
	IF(0x0C089604u); r8 = MACL;  /* 0C089604 sts macl,Rn */
	IF(0x0C089606u); MACL = r0 * r10;  /* 0C089606 mul.l Rm,Rn */
	r8 += r6;  /* 0C089608 add Rm,Rn */
	r12 = 0x98u; UPD(0x0C08960Cu, 5);  /* 0C08960A mov.w @(disp,pc),Rn */
	IF(0x0C08960Cu); r10 = MACL;  /* 0C08960C sts macl,Rn */
	r11 = r8;  /* 0C08960E mov Rm,Rn */
	r10 += r6;  /* 0C089610 add Rm,Rn */
	r11 += r12;  /* 0C089612 add Rm,Rn */
	r5 = 0xA4u; UPD(0x0C089616u, 5);  /* 0C089614 mov.w @(disp,pc),Rn */
	r12 += r10;  /* 0C089616 add Rm,Rn */
	r2 = 0x84u; UPD(0x0C08961Au, 2);  /* 0C089618 mov.w @(disp,pc),Rn */
	r0 = r10;  /* 0C08961A mov Rm,Rn */
	r12 += 0x2u;  /* 0C08961C add #imm,Rn */
	r0 += r5;  /* 0C08961E add Rm,Rn */
	r6 = r8;  /* 0C089620 mov Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r12); UPD(0x0C089624u, 5);  /* 0C089622 mov.b @Rm,Rn */
	r5 += r8;  /* 0C089624 add Rm,Rn */
	r6 += r2;  /* 0C089626 add Rm,Rn */
	r11 += 0x2u;  /* 0C089628 add #imm,Rn */
	r5 += 0x1u;  /* 0C08962A add #imm,Rn */
	r2 += r10;  /* 0C08962C add Rm,Rn */
	r13 = (u32)(s32)(s8)R8(r5); UPD(0x0C089630u, 6);  /* 0C08962E mov.b @Rm,Rn */
	r2 += 0x2u;  /* 0C089630 add #imm,Rn */
	W8(r11, r3); UPD(0x0C089634u, 2);  /* 0C089632 mov.b Rm,@Rn */
	r0 += 0x1u;  /* 0C089634 add #imm,Rn */
	r7 = (u32)(s32)(s16)R16(r2); UPD(0x0C089638u, 2);  /* 0C089636 mov.w @Rm,Rn */
	r8 += 0x50u;  /* 0C089638 add #imm,Rn */
	r4 = 0x1FFu; UPD(0x0C08963Cu, 2);  /* 0C08963A mov.w @(disp,pc),Rn */
	r6 += 0x2u;  /* 0C08963C add #imm,Rn */
	r12 = 0xC069B20u; UPD(0x0C089640u, 2);  /* 0C08963E mov.l @(disp,pc),Rn */
	r7 &= r4;  /* 0C089640 and Rm,Rn */
	r11 = R32(r8); UPD(0x0C089644u, 2);  /* 0C089642 mov.l @Rm,Rn */
	r4 = r7;  /* 0C089644 mov Rm,Rn */
	W8(r0, r13); UPD(0x0C089648u, 2);  /* 0C089646 mov.b Rm,@Rn */
	r5 = r11;  /* 0C089648 mov Rm,Rn */
	r13 = r7;  /* 0C08964A mov Rm,Rn */
	IF(0x0C08964Cu); { u32 t_ = r12; PR = 0x0C089650u; W16(r6, r7); /* slot mov.w Rm,@Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C089650u); }  /* 0C08964C jsr @Rn */
L_0C089650: BLKS(0x0C089650u);
	r3 = R32(r10 + 0x24u); UPD(0x0C089652u, 1);  /* 0C089650 mov.l @(disp,Rm),Rn */
	r8 += 0xFFFFFFB0u;  /* 0C089652 add #imm,Rn */
	r12 = 0xC069AF0u; UPD(0x0C089656u, 2);  /* 0C089654 mov.l @(disp,pc),Rn */
	r3 += r0;  /* 0C089656 add Rm,Rn */
	r4 = r13;  /* 0C089658 mov Rm,Rn */
	r5 = r11;  /* 0C08965A mov Rm,Rn */
	IF(0x0C08965Cu); { u32 t_ = r12; PR = 0x0C089660u; W32(r8 + 0x24u, r3); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 5); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C089660u); }  /* 0C08965C jsr @Rn */
L_0C089660: BLKS(0x0C089660u);
	r5 = R32(r10 + 0x28u); UPD(0x0C089662u, 1);  /* 0C089660 mov.l @(disp,Rm),Rn */
	r13 += 0xFFFFFF80u;  /* 0C089662 add #imm,Rn */
	r5 += r0;  /* 0C089664 add Rm,Rn */
	r1 = 0x100u; UPD(0x0C089668u, 3);  /* 0C089666 mov.w @(disp,pc),Rn */
	r0 = r13 & 0xFFFF;  /* 0C089668 extu.w Rm,Rn */
	T = r0 > r1;  /* 0C08966A cmp/hi Rm,Rn */
	{ u32 c_ = !T; W32(r8 + 0x28u, r5); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0896A0u, 5); goto L_0C0896A0; } UPD(0x0C089670u, 1); goto L_0C089670; }  /* 0C08966C bf/s */
L_0C089670: BLKS(0x0C089670u);
	r1 += 0xFFFFFFA8u;  /* 0C089670 add #imm,Rn */
	r10 += r1;  /* 0C089672 add Rm,Rn */
	r8 += r1;  /* 0C089674 add Rm,Rn */
	r10 += 0x1u;  /* 0C089676 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r10); UPD(0x0C08967Au, 5);  /* 0C089678 mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C08967A add #imm,Rn */
	r1 += 0xFFFFFFFFu;  /* 0C08967C add #imm,Rn */
	UPD(0x0C08967Eu, 2);
L_0C08967E: BLKS(0x0C08967Eu);
	W8(r8, r1); UPD(0x0C089680u, 1);  /* 0C08967E mov.b Rm,@Rn */
	r0 = 0xB4u; UPD(0x0C089682u, 1);  /* 0C089680 mov.w @(disp,pc),Rn */
	r1 = R32(r14); UPD(0x0C089684u, 1);  /* 0C089682 mov.l @Rm,Rn */
	IF(0x0C089684u); MACL = r1 * r0;  /* 0C089684 mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C089688u, 3);  /* 0C089686 mov.l @(disp,pc),Rn */
	IF(0x0C089688u); r4 = MACL;  /* 0C089688 sts macl,Rn */
	IF(0x0C08968Au); MACL = r9 * r0;  /* 0C08968A mul.l Rm,Rn */
	IF(0x0C08968Cu); r9 = MACL;  /* 0C08968C sts macl,Rn */
	r9 += r2;  /* 0C08968E add Rm,Rn */
	r1 = R32(r9 + 0xCu); UPD(0x0C089692u, 6);  /* 0C089690 mov.l @(disp,Rm),Rn */
	{ r2 += r4; /* slot add Rm,Rn */ UPD(0x0C089490u, 3); goto L_0C089490; }  /* 0C089692 bra */
L_0C0896A0: BLKS(0x0C0896A0u);
	r7 = 0xA8u; UPD(0x0C0896A2u, 1);  /* 0C0896A0 mov.w @(disp,pc),Rn */
	r10 += r7;  /* 0C0896A2 add Rm,Rn */
	r10 += 0x1u;  /* 0C0896A4 add #imm,Rn */
	r8 += r7;  /* 0C0896A6 add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r10); UPD(0x0C0896AAu, 4);  /* 0C0896A8 mov.b @Rm,Rn */
	{ r8 += 0x1u; /* slot add #imm,Rn */ UPD(0x0C08967Eu, 3); goto L_0C08967E; }  /* 0C0896AA bra */
L_0C0896B0: BLKS(0x0C0896B0u);
	r9 = 0xC0A8CA0u; UPD(0x0C0896B2u, 1);  /* 0C0896B0 mov.l @(disp,pc),Rn */
	IF(0x0C0896B2u); { u32 t_ = r9; PR = 0x0C0896B6u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C0896B6u); }  /* 0C0896B2 jsr @Rn */
L_0C0896B6: BLKS(0x0C0896B6u);
	IF(0x0C0896B6u); T = (s32)r0 >= 0;  /* 0C0896B6 cmp/pz Rn */
	{ u32 c_ = T; r5 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0896C0u, 4); goto L_0C0896C0; } goto L_0C0896BC; }  /* 0C0896B8 bt/s */
L_0C0896BC: BLKS(0x0C0896BCu);
	{ r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(0x0C0895B2u, 4); goto L_0C0895B2; }  /* 0C0896BC bra */
L_0C0896C0: BLKS(0x0C0896C0u);
	r10 = 0xB4u; UPD(0x0C0896C2u, 1);  /* 0C0896C0 mov.w @(disp,pc),Rn */
	IF(0x0C0896C2u); MACL = r0 * r10;  /* 0C0896C2 mul.l Rm,Rn */
	r8 = R32(r14); UPD(0x0C0896C6u, 3);  /* 0C0896C4 mov.l @Rm,Rn */
	IF(0x0C0896C6u); r11 = MACL;  /* 0C0896C6 sts macl,Rn */
	IF(0x0C0896C8u); MACL = r8 * r10;  /* 0C0896C8 mul.l Rm,Rn */
	r13 = 0xC286578u; UPD(0x0C0896CCu, 4);  /* 0C0896CA mov.l @(disp,pc),Rn */
	IF(0x0C0896CCu); r10 = MACL;  /* 0C0896CC sts macl,Rn */
	r10 += r13;  /* 0C0896CE add Rm,Rn */
	r4 = 0x9Au; UPD(0x0C0896D2u, 3);  /* 0C0896D0 mov.w @(disp,pc),Rn */
	r0 = r10;  /* 0C0896D2 mov Rm,Rn */
	IF(0x0C0896D4u); W8(r0 + r4, r5); UPD(0x0C0896D6u, 2);  /* 0C0896D4 mov.b Rm,@(r0,Rn) */
	r11 += r13;  /* 0C0896D6 add Rm,Rn */
	r12 = R32(r11 + 0x24u); UPD(0x0C0896DAu, 2);  /* 0C0896D8 mov.l @(disp,Rm),Rn */
	r6 = R32(r11 + 0x28u); UPD(0x0C0896DCu, 1);  /* 0C0896DA mov.l @(disp,Rm),Rn */
	r3 = R32(r10 + 0x2Cu); UPD(0x0C0896DEu, 1);  /* 0C0896DC mov.l @(disp,Rm),Rn */
	r1 = R32(r10 + 0x30u); UPD(0x0C0896E0u, 1);  /* 0C0896DE mov.l @(disp,Rm),Rn */
	r12 += r3;  /* 0C0896E0 add Rm,Rn */
	r0 = 0x8Cu; UPD(0x0C0896E4u, 2);  /* 0C0896E2 mov.w @(disp,pc),Rn */
	r6 += r1;  /* 0C0896E4 add Rm,Rn */
	IF(0x0C0896E6u); r5 = R32(r0 + r10); UPD(0x0C0896E8u, 2);  /* 0C0896E6 mov.l @(r0,Rm),Rn */
	W32(r10 + 0x24u, r12); UPD(0x0C0896EAu, 1);  /* 0C0896E8 mov.l Rm,@(disp,Rn) */
	T = (r5 & r5) == 0;  /* 0C0896EA tst Rm,Rn */
	{ u32 c_ = !T; W32(r10 + 0x28u, r6); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0896F4u, 4); goto L_0C0896F4; } UPD(0x0C0896F0u, 1); goto L_0C0896F0; }  /* 0C0896EC bf/s */
L_0C0896F0: BLKS(0x0C0896F0u);
	{ IF(0x0C0896F2u); ; /* slot nop */ UPD(0x0C089810u, 3); goto L_0C089810; }  /* 0C0896F0 bra */
L_0C0896F4: BLKS(0x0C0896F4u);
	r11 = 0x84u; UPD(0x0C0896F6u, 1);  /* 0C0896F4 mov.w @(disp,pc),Rn */
	r13 = r5;  /* 0C0896F6 mov Rm,Rn */
	r4 = 0xFFFFC000u; UPD(0x0C0896FAu, 2);  /* 0C0896F8 mov.w @(disp,pc),Rn */
	r11 += r10;  /* 0C0896FA add Rm,Rn */
	r4 += r5;  /* 0C0896FC add Rm,Rn */
	r6 = 0xC069B20u; UPD(0x0C089700u, 3);  /* 0C0896FE mov.l @(disp,pc),Rn */
	r11 += 0x2u;  /* 0C089700 add #imm,Rn */
	r12 = (u32)(s32)(s16)R16(r11); UPD(0x0C089704u, 2);  /* 0C089702 mov.w @Rm,Rn */
	IF(0x0C089704u); W32(r0 + r10, r4); UPD(0x0C089706u, 1);  /* 0C089704 mov.l Rm,@(r0,Rn) */
	IF(0x0C089706u); { u32 t_ = r6; PR = 0x0C08970Au; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C08970Au); }  /* 0C089706 jsr @Rn */
L_0C08970A: BLKS(0x0C08970Au);
	r9 = R32(r10 + 0x24u); UPD(0x0C08970Cu, 1);  /* 0C08970A mov.l @(disp,Rm),Rn */
	r4 = r12;  /* 0C08970C mov Rm,Rn */
	r2 = 0xC069AF0u; UPD(0x0C089710u, 2);  /* 0C08970E mov.l @(disp,pc),Rn */
	r9 -= r0;  /* 0C089710 sub Rm,Rn */
	r5 = r13;  /* 0C089712 mov Rm,Rn */
	IF(0x0C089714u); { u32 t_ = r2; PR = 0x0C089718u; W32(r10 + 0x24u, r9); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 4); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C089718u); }  /* 0C089714 jsr @Rn */
L_0C089718: BLKS(0x0C089718u);
	r7 = R32(r10 + 0x28u); UPD(0x0C08971Au, 1);  /* 0C089718 mov.l @(disp,Rm),Rn */
	r13 = 0x0u;  /* 0C08971A mov #imm,Rn */
	r7 -= r0;  /* 0C08971C sub Rm,Rn */
	W32(r10 + 0x28u, r7); UPD(0x0C089720u, 3);  /* 0C08971E mov.l Rm,@(disp,Rn) */
	r12 = r10;  /* 0C089720 mov Rm,Rn */
	IF(0x0C089722u); ;  /* 0C089722 nop */
	UPD(0x0C089724u, 2);
L_0C089724: BLKS(0x0C089724u);
	r2 = 0x86u; UPD(0x0C089726u, 1);  /* 0C089724 mov.w @(disp,pc),Rn */
	r0 = r12;  /* 0C089726 mov Rm,Rn */
	r10 = 0xC069B20u; UPD(0x0C08972Au, 2);  /* 0C089728 mov.l @(disp,pc),Rn */
	r8 = r13;  /* 0C08972A mov Rm,Rn */
	IF(0x0C08972Cu); r11 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C08972Eu, 2);  /* 0C08972C mov.w @(r0,Rm),Rn */
	IF(0x0C08972Eu); r8 <<= 2;  /* 0C08972E shll2 Rn */
	r5 = 0x50000u; UPD(0x0C089732u, 2);  /* 0C089730 mov.l @(disp,pc),Rn */
	IF(0x0C089732u); { u32 t_ = r10; PR = 0x0C089736u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C089736u); }  /* 0C089732 jsr @Rn */
L_0C089736: BLKS(0x0C089736u);
	r10 = R32(r12 + 0x24u); UPD(0x0C089738u, 1);  /* 0C089736 mov.l @(disp,Rm),Rn */
	r4 = r11;  /* 0C089738 mov Rm,Rn */
	r10 += r0;  /* 0C08973A add Rm,Rn */
	r0 = 0xC19C30Cu; UPD(0x0C08973Eu, 3);  /* 0C08973C mov.l @(disp,pc),Rn */
	r6 = 0xC069AF0u; UPD(0x0C089740u, 1);  /* 0C08973E mov.l @(disp,pc),Rn */
	r8 += r0;  /* 0C089740 add Rm,Rn */
	r9 = 0xC069AF0u; UPD(0x0C089744u, 2);  /* 0C089742 mov.l @(disp,pc),Rn */
	IF(0x0C089744u); { u32 t_ = r6; PR = 0x0C089748u; r5 = R32(r8); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C089748u); }  /* 0C089744 jsr @Rn */
L_0C089748: BLKS(0x0C089748u);
	r10 -= r0;  /* 0C089748 sub Rm,Rn */
	r5 = 0x50000u; UPD(0x0C08974Cu, 2);  /* 0C08974A mov.l @(disp,pc),Rn */
	IF(0x0C08974Cu); { u32 t_ = r9; PR = 0x0C089750u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C089750u); }  /* 0C08974C jsr @Rn */
L_0C089750: BLKS(0x0C089750u);
	r1 = 0xC069B20u; UPD(0x0C089752u, 1);  /* 0C089750 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C089752 mov Rm,Rn */
	r9 = R32(r12 + 0x28u); UPD(0x0C089756u, 2);  /* 0C089754 mov.l @(disp,Rm),Rn */
	r5 = R32(r8); UPD(0x0C089758u, 1);  /* 0C089756 mov.l @Rm,Rn */
	IF(0x0C089758u); { u32 t_ = r1; PR = 0x0C08975Cu; r9 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C08975Cu); }  /* 0C089758 jsr @Rn */
L_0C08975C: BLKS(0x0C08975Cu);
	r9 += r0;  /* 0C08975C add Rm,Rn */
	r7 = 0xC19C314u; UPD(0x0C089760u, 2);  /* 0C08975E mov.l @(disp,pc),Rn */
	r0 = r13;  /* 0C089760 mov Rm,Rn */
	r0 += r0;  /* 0C089762 add Rm,Rn */
	r8 = 0xC062780u; UPD(0x0C089766u, 3);  /* 0C089764 mov.l @(disp,pc),Rn */
	r4 = 0x1Fu;  /* 0C089766 mov #imm,Rn */
	IF(0x0C089768u); r3 = (u32)(s32)(s16)R16(r0 + r7); UPD(0x0C08976Au, 2);  /* 0C089768 mov.w @(r0,Rm),Rn */
	IF(0x0C08976Au); { u32 t_ = r8; PR = 0x0C08976Eu; r11 += r3; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C08976Eu); }  /* 0C08976A jsr @Rn */
L_0C08976E: BLKS(0x0C08976Eu);
	r0 += r11;  /* 0C08976E add Rm,Rn */
	r0 += 0xFFFFFFF0u;  /* 0C089770 add #imm,Rn */
	r11 = (u32)(s32)(s16)r0;  /* 0C089772 exts.w Rm,Rn */
	r0 = 0xB0u; UPD(0x0C089776u, 4);  /* 0C089774 mov.w @(disp,pc),Rn */
	r15 += 0xFFFFFFECu;  /* 0C089776 add #imm,Rn */
	IF(0x0C089778u); r5 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C08977Au, 2);  /* 0C089778 mov.b @(r0,Rm),Rn */
	r4 = r5 & 0xFF;  /* 0C08977A extu.b Rm,Rn */
	W32(r15, r4); UPD(0x0C08977Eu, 2);  /* 0C08977C mov.l Rm,@Rn */
	r0 = r12;  /* 0C08977E mov Rm,Rn */
	r6 = 0xA9u; UPD(0x0C089782u, 2);  /* 0C089780 mov.w @(disp,pc),Rn */
	r4 = r11;  /* 0C089782 mov Rm,Rn */
	IF(0x0C089784u); r2 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C089786u, 2);  /* 0C089784 mov.b @(r0,Rm),Rn */
	r8 = r2 & 0xFF;  /* 0C089786 extu.b Rm,Rn */
	W32(r15 + 0x4u, r8); UPD(0x0C08978Au, 2);  /* 0C089788 mov.l Rm,@(disp,Rn) */
	r7 = 0xC069B20u; UPD(0x0C08978Cu, 1);  /* 0C08978A mov.l @(disp,pc),Rn */
	r8 = 0x20000u; UPD(0x0C08978Eu, 1);  /* 0C08978C mov.l @(disp,pc),Rn */
	IF(0x0C08978Eu); { u32 t_ = r7; PR = 0x0C089792u; r5 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C089792u); }  /* 0C08978E jsr @Rn */
L_0C089792: BLKS(0x0C089792u);
	r1 = 0xC069AF0u; UPD(0x0C089794u, 1);  /* 0C089792 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C089794 mov Rm,Rn */
	W32(r15 + 0x8u, r0); UPD(0x0C089798u, 2);  /* 0C089796 mov.l Rm,@(disp,Rn) */
	IF(0x0C089798u); { u32 t_ = r1; PR = 0x0C08979Cu; r5 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C08979Cu); }  /* 0C089798 jsr @Rn */
L_0C08979C: BLKS(0x0C08979Cu);
	r3 = 0x808080u; UPD(0x0C08979Eu, 1);  /* 0C08979C mov.l @(disp,pc),Rn */
	r6 = r10;  /* 0C08979E mov Rm,Rn */
	r10 = 0xC0BEEF0u; UPD(0x0C0897A2u, 2);  /* 0C0897A0 mov.l @(disp,pc),Rn */
	r5 = 0x5u;  /* 0C0897A2 mov #imm,Rn */
	W32(r15 + 0xCu, r0); UPD(0x0C0897A6u, 2);  /* 0C0897A4 mov.l Rm,@(disp,Rn) */
	r7 = r9;  /* 0C0897A6 mov Rm,Rn */
	W32(r15 + 0x10u, r3); UPD(0x0C0897AAu, 2);  /* 0C0897A8 mov.l Rm,@(disp,Rn) */
	IF(0x0C0897AAu); { u32 t_ = r10; PR = 0x0C0897AEu; r4 = R32(r12); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BEEF0, 0x0C0BEEF0u, 0x0C0897AEu); }  /* 0C0897AA jsr @Rn */
L_0C0897AE: BLKS(0x0C0897AEu);
	r5 = r13;  /* 0C0897AE mov Rm,Rn */
	r5 += 0x1u;  /* 0C0897B0 add #imm,Rn */
	r13 = (u32)(s32)(s16)r5;  /* 0C0897B2 exts.w Rm,Rn */
	r0 = 0x1u;  /* 0C0897B4 mov #imm,Rn */
	T = (s32)r13 > (s32)r0;  /* 0C0897B6 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x14u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C089724u, 8); goto L_0C089724; } UPD(0x0C0897BCu, 1); goto L_0C0897BC; }  /* 0C0897B8 bf/s */
L_0C0897BC: BLKS(0x0C0897BCu);
	{ r14 += 0x4u; /* slot add #imm,Rn */ UPD(0x0C089506u, 3); goto L_0C089506; }  /* 0C0897BC bra */
L_0C089810: BLKS(0x0C089810u);
	r10 = 0xC069BF0u; UPD(0x0C089812u, 1);  /* 0C089810 mov.l @(disp,pc),Rn */
	r9 = 0xC068F00u; UPD(0x0C089814u, 1);  /* 0C089812 mov.l @(disp,pc),Rn */
	IF(0x0C089814u); { u32 t_ = r10; PR = 0x0C089818u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069BF0, 0x0C069BF0u, 0x0C089818u); }  /* 0C089814 jsr @Rn */
L_0C089818: BLKS(0x0C089818u);
	r4 = R32(r14); UPD(0x0C08981Au, 1);  /* 0C089818 mov.l @Rm,Rn */
	IF(0x0C08981Au); { u32 t_ = r9; PR = 0x0C08981Eu; r5 = 0x2u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C068F00, 0x0C068F00u, 0x0C08981Eu); }  /* 0C08981A jsr @Rn */
L_0C08981E: BLKS(0x0C08981Eu);
	r11 = R32(r14); UPD(0x0C089820u, 1);  /* 0C08981E mov.l @Rm,Rn */
	r5 = 0x1Fu;  /* 0C089820 mov #imm,Rn */
	r8 = 0xB4u; UPD(0x0C089824u, 2);  /* 0C089822 mov.w @(disp,pc),Rn */
	IF(0x0C089824u); MACL = r11 * r8;  /* 0C089824 mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C089828u, 3);  /* 0C089826 mov.l @(disp,pc),Rn */
	IF(0x0C089828u); r8 = MACL;  /* 0C089828 sts macl,Rn */
	r8 += r7;  /* 0C08982A add Rm,Rn */
	r3 = 0x86u; UPD(0x0C08982Eu, 3);  /* 0C08982C mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C08982E mov Rm,Rn */
	IF(0x0C089830u); r4 = (u32)(s32)(s16)R16(r0 + r3); UPD(0x0C089832u, 2);  /* 0C089830 mov.w @(r0,Rm),Rn */
	r4 += 0x8u;  /* 0C089832 add #imm,Rn */
	IF(0x0C089834u); r4 >>= 2;  /* 0C089834 shlr2 Rn */
	IF(0x0C089836u); r4 >>= 2;  /* 0C089836 shlr2 Rn */
	r4 &= r5;  /* 0C089838 and Rm,Rn */
	r12 = 0xC0A8AE0u; UPD(0x0C08983Cu, 5);  /* 0C08983A mov.l @(disp,pc),Rn */
	W32(r8 + 0xCu, r4); UPD(0x0C08983Eu, 1);  /* 0C08983C mov.l Rm,@(disp,Rn) */
	r13 = 0xC0BC1B0u; UPD(0x0C089840u, 1);  /* 0C08983E mov.l @(disp,pc),Rn */
	IF(0x0C089840u); { u32 t_ = r12; PR = 0x0C089844u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C089844u); }  /* 0C089840 jsr @Rn */
L_0C089844: BLKS(0x0C089844u);
	r4 = R32(r14); UPD(0x0C089846u, 1);  /* 0C089844 mov.l @Rm,Rn */
	r5 = 0x5Au;  /* 0C089846 mov #imm,Rn */
	IF(0x0C089848u); { u32 t_ = r13; PR = 0x0C08984Cu; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C08984Cu); }  /* 0C089848 jsr @Rn */
L_0C08984C: BLKS(0x0C08984Cu);
	T = (r0 & r0) == 0;  /* 0C08984C tst Rm,Rn */
	if (T) { UPD(0x0C0897BCu, 4); goto L_0C0897BC; }  /* 0C08984E bt */
L_0C089850: BLKS(0x0C089850u);
	r0 = r8;  /* 0C089850 mov Rm,Rn */
	r6 = 0xA9u; UPD(0x0C089854u, 2);  /* 0C089852 mov.w @(disp,pc),Rn */
	r13 = 0xC0BBF10u; UPD(0x0C089856u, 1);  /* 0C089854 mov.l @(disp,pc),Rn */
	IF(0x0C089856u); r2 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C089858u, 1);  /* 0C089856 mov.b @(r0,Rm),Rn */
	r4 = R32(r8 + 0x24u); UPD(0x0C08985Au, 1);  /* 0C089858 mov.l @(disp,Rm),Rn */
	r6 = r2 & 0xFF;  /* 0C08985A extu.b Rm,Rn */
	IF(0x0C08985Cu); { u32 t_ = r13; PR = 0x0C089860u; r5 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BBF10, 0x0C0BBF10u, 0x0C089860u); }  /* 0C08985C jsr @Rn */
L_0C089860: BLKS(0x0C089860u);
	T = (r0 & r0) == 0;  /* 0C089860 tst Rm,Rn */
	if (T) { UPD(0x0C0897BCu, 4); goto L_0C0897BC; }  /* 0C089862 bt */
L_0C089864: BLKS(0x0C089864u);
	r11 = 0x1u;  /* 0C089864 mov #imm,Rn */
	r0 = 0x8Cu; UPD(0x0C089868u, 2);  /* 0C089866 mov.w @(disp,pc),Rn */
	r4 = 0x60000u; UPD(0x0C08986Au, 1);  /* 0C089868 mov.l @(disp,pc),Rn */
	IF(0x0C08986Au); W32(r0 + r8, r4); UPD(0x0C08986Cu, 1);  /* 0C08986A mov.l Rm,@(r0,Rn) */
	r12 = 0x9Au; UPD(0x0C08986Eu, 1);  /* 0C08986C mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C08986E mov Rm,Rn */
	{ IF(0x0C089872u); W8(r0 + r12, r11); /* slot mov.b Rm,@(r0,Rn) */ UPD(0x0C089504u, 4); goto L_0C089504; }  /* 0C089870 bra */
L_0C089880: BLKS(0x0C089880u);
	r13 = 0xC0A8B50u; UPD(0x0C089882u, 1);  /* 0C089880 mov.l @(disp,pc),Rn */
	IF(0x0C089882u); { u32 t_ = r13; PR = 0x0C089886u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C089886u); }  /* 0C089882 jsr @Rn */
L_0C089886: BLKS(0x0C089886u);
	IF(0x0C089886u); T = (s32)r0 >= 0;  /* 0C089886 cmp/pz Rn */
	{ u32 c_ = !T; r10 = R32(r14); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C08990Au, 4); goto L_0C08990A; } UPD(0x0C08988Cu, 1); goto L_0C08988C; }  /* 0C089888 bf/s */
L_0C08988C: BLKS(0x0C08988Cu);
	r8 = 0xB4u; UPD(0x0C08988Eu, 1);  /* 0C08988C mov.w @(disp,pc),Rn */
	IF(0x0C08988Eu); MACL = r10 * r8;  /* 0C08988E mul.l Rm,Rn */
	r1 = 0xC286578u; UPD(0x0C089892u, 3);  /* 0C089890 mov.l @(disp,pc),Rn */
	IF(0x0C089892u); r10 = MACL;  /* 0C089892 sts macl,Rn */
	IF(0x0C089894u); MACL = r0 * r8;  /* 0C089894 mul.l Rm,Rn */
	r10 += r1;  /* 0C089896 add Rm,Rn */
	r12 = 0x98u; UPD(0x0C08989Au, 5);  /* 0C089898 mov.w @(disp,pc),Rn */
	IF(0x0C08989Au); r8 = MACL;  /* 0C08989A sts macl,Rn */
	r11 = r10;  /* 0C08989C mov Rm,Rn */
	r8 += r1;  /* 0C08989E add Rm,Rn */
	r11 += r12;  /* 0C0898A0 add Rm,Rn */
	r12 += r8;  /* 0C0898A2 add Rm,Rn */
	r12 += 0x2u;  /* 0C0898A4 add #imm,Rn */
	r5 = 0xA4u; UPD(0x0C0898A8u, 7);  /* 0C0898A6 mov.w @(disp,pc),Rn */
	r7 = r10;  /* 0C0898A8 mov Rm,Rn */
	r4 = 0x84u; UPD(0x0C0898ACu, 2);  /* 0C0898AA mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C0898AC mov Rm,Rn */
	r9 = (u32)(s32)(s8)R8(r12); UPD(0x0C0898B0u, 2);  /* 0C0898AE mov.b @Rm,Rn */
	r11 += 0x2u;  /* 0C0898B0 add #imm,Rn */
	r0 += r5;  /* 0C0898B2 add Rm,Rn */
	r7 += r4;  /* 0C0898B4 add Rm,Rn */
	W8(r11, r9); UPD(0x0C0898B8u, 4);  /* 0C0898B6 mov.b Rm,@Rn */
	r5 += r10;  /* 0C0898B8 add Rm,Rn */
	r4 += r8;  /* 0C0898BA add Rm,Rn */
	r5 += 0x1u;  /* 0C0898BC add #imm,Rn */
	r4 += 0x2u;  /* 0C0898BE add #imm,Rn */
	r10 += 0x50u;  /* 0C0898C0 add #imm,Rn */
	r13 = 0xC069B20u; UPD(0x0C0898C4u, 6);  /* 0C0898C2 mov.l @(disp,pc),Rn */
	r7 += 0x2u;  /* 0C0898C4 add #imm,Rn */
	r2 = (u32)(s32)(s8)R8(r5); UPD(0x0C0898C8u, 2);  /* 0C0898C6 mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C0898C8 add #imm,Rn */
	r6 = (u32)(s32)(s16)R16(r4); UPD(0x0C0898CCu, 2);  /* 0C0898CA mov.w @Rm,Rn */
	r9 = R32(r10); UPD(0x0C0898CEu, 1);  /* 0C0898CC mov.l @Rm,Rn */
	r12 = r6;  /* 0C0898CE mov Rm,Rn */
	W8(r0, r2); UPD(0x0C0898D2u, 2);  /* 0C0898D0 mov.b Rm,@Rn */
	r4 = r6;  /* 0C0898D2 mov Rm,Rn */
	W16(r7, r6); UPD(0x0C0898D6u, 2);  /* 0C0898D4 mov.w Rm,@Rn */
	IF(0x0C0898D6u); { u32 t_ = r13; PR = 0x0C0898DAu; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C0898DAu); }  /* 0C0898D6 jsr @Rn */
L_0C0898DA: BLKS(0x0C0898DAu);
	r3 = R32(r8 + 0x24u); UPD(0x0C0898DCu, 1);  /* 0C0898DA mov.l @(disp,Rm),Rn */
	r10 += 0xFFFFFFB0u;  /* 0C0898DC add #imm,Rn */
	r11 = 0xC069AF0u; UPD(0x0C0898E0u, 2);  /* 0C0898DE mov.l @(disp,pc),Rn */
	r3 += r0;  /* 0C0898E0 add Rm,Rn */
	r5 = r9;  /* 0C0898E2 mov Rm,Rn */
	W32(r10 + 0x24u, r3); UPD(0x0C0898E6u, 3);  /* 0C0898E4 mov.l Rm,@(disp,Rn) */
	IF(0x0C0898E6u); { u32 t_ = r11; PR = 0x0C0898EAu; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C0898EAu); }  /* 0C0898E6 jsr @Rn */
L_0C0898EA: BLKS(0x0C0898EAu);
	r5 = R32(r8 + 0x28u); UPD(0x0C0898ECu, 1);  /* 0C0898EA mov.l @(disp,Rm),Rn */
	r2 = R32(r8 + 0xCu); UPD(0x0C0898EEu, 1);  /* 0C0898EC mov.l @(disp,Rm),Rn */
	r5 += r0;  /* 0C0898EE add Rm,Rn */
	W32(r10 + 0x28u, r5); UPD(0x0C0898F2u, 2);  /* 0C0898F0 mov.l Rm,@(disp,Rn) */
	{ W32(r10 + 0xCu, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C089492u, 3); goto L_0C089492; }  /* 0C0898F2 bra */
L_0C089900: BLKS(0x0C089900u);
	r13 = 0xC0A8B50u; UPD(0x0C089902u, 1);  /* 0C089900 mov.l @(disp,pc),Rn */
	IF(0x0C089902u); { u32 t_ = r13; PR = 0x0C089906u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C089906u); }  /* 0C089902 jsr @Rn */
L_0C089906: BLKS(0x0C089906u);
	IF(0x0C089906u); T = (s32)r0 >= 0;  /* 0C089906 cmp/pz Rn */
	if (T) { UPD(0x0C08990Eu, 4); goto L_0C08990E; }  /* 0C089908 bt */
L_0C08990A: BLKS(0x0C08990Au);
	{ r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(0x0C0895B2u, 3); goto L_0C0895B2; }  /* 0C08990A bra */
L_0C08990E: BLKS(0x0C08990Eu);
	r10 = 0xB4u; UPD(0x0C089910u, 1);  /* 0C08990E mov.w @(disp,pc),Rn */
	IF(0x0C089910u); MACL = r0 * r10;  /* 0C089910 mul.l Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C089914u, 3);  /* 0C089912 mov.l @(disp,pc),Rn */
	IF(0x0C089914u); r9 = MACL;  /* 0C089914 sts macl,Rn */
	r9 += r5;  /* 0C089916 add Rm,Rn */
	r13 = 0x86u; UPD(0x0C08991Au, 3);  /* 0C089918 mov.w @(disp,pc),Rn */
	r0 = r9;  /* 0C08991A mov Rm,Rn */
	IF(0x0C08991Cu); r11 = (u32)(s32)(s16)R16(r0 + r13); UPD(0x0C08991Eu, 2);  /* 0C08991C mov.w @(r0,Rm),Rn */
	r0 = R32(r14); UPD(0x0C089920u, 1);  /* 0C08991E mov.l @Rm,Rn */
	r4 = r11;  /* 0C089920 mov Rm,Rn */
	IF(0x0C089922u); MACL = r0 * r10;  /* 0C089922 mul.l Rm,Rn */
	r12 = 0xC069B20u; UPD(0x0C089926u, 4);  /* 0C089924 mov.l @(disp,pc),Rn */
	IF(0x0C089926u); r10 = MACL;  /* 0C089926 sts macl,Rn */
	r10 += r5;  /* 0C089928 add Rm,Rn */
	r10 += 0x50u;  /* 0C08992A add #imm,Rn */
	r8 = R32(r10); UPD(0x0C08992Eu, 4);  /* 0C08992C mov.l @Rm,Rn */
	IF(0x0C08992Eu); { u32 t_ = r12; PR = 0x0C089932u; r5 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C089932u); }  /* 0C08992E jsr @Rn */
L_0C089932: BLKS(0x0C089932u);
	r2 = R32(r9 + 0x24u); UPD(0x0C089934u, 1);  /* 0C089932 mov.l @(disp,Rm),Rn */
	r10 += 0xFFFFFFB0u;  /* 0C089934 add #imm,Rn */
	r13 = 0xC069AF0u; UPD(0x0C089938u, 2);  /* 0C089936 mov.l @(disp,pc),Rn */
	r2 += r0;  /* 0C089938 add Rm,Rn */
	W32(r10 + 0x24u, r2); UPD(0x0C08993Cu, 2);  /* 0C08993A mov.l Rm,@(disp,Rn) */
	r4 = r11;  /* 0C08993C mov Rm,Rn */
	IF(0x0C08993Eu); { u32 t_ = r13; PR = 0x0C089942u; r5 = r8; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C089942u); }  /* 0C08993E jsr @Rn */
L_0C089942: BLKS(0x0C089942u);
	r4 = R32(r9 + 0x28u); UPD(0x0C089944u, 1);  /* 0C089942 mov.l @(disp,Rm),Rn */
	r6 = 0xC0A8AE0u; UPD(0x0C089946u, 1);  /* 0C089944 mov.l @(disp,pc),Rn */
	r4 += r0;  /* 0C089946 add Rm,Rn */
	W32(r10 + 0x28u, r4); UPD(0x0C08994Au, 2);  /* 0C089948 mov.l Rm,@(disp,Rn) */
	r7 = R32(r9 + 0xCu); UPD(0x0C08994Cu, 1);  /* 0C08994A mov.l @(disp,Rm),Rn */
	r12 = 0x9Au; UPD(0x0C08994Eu, 1);  /* 0C08994C mov.w @(disp,pc),Rn */
	W32(r10 + 0xCu, r7); UPD(0x0C089950u, 1);  /* 0C08994E mov.l Rm,@(disp,Rn) */
	r12 += r9;  /* 0C089950 add Rm,Rn */
	IF(0x0C089952u); { u32 t_ = r6; PR = 0x0C089956u; r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0A8AE0, 0x0C0A8AE0u, 0x0C089956u); }  /* 0C089952 jsr @Rn */
L_0C089956: BLKS(0x0C089956u);
	r3 = (u32)(s32)(s8)R8(r12); UPD(0x0C089958u, 1);  /* 0C089956 mov.b @Rm,Rn */
	T = (r3 & r3) == 0;  /* 0C089958 tst Rm,Rn */
	if (!T) { UPD(0x0C089962u, 4); goto L_0C089962; }  /* 0C08995A bf */
L_0C08995C: BLKS(0x0C08995Cu);
	r14 += 0x4u;  /* 0C08995C add #imm,Rn */
	{ IF(0x0C089960u); ; /* slot nop */ UPD(0x0C089506u, 4); goto L_0C089506; }  /* 0C08995E bra */
L_0C089962: BLKS(0x0C089962u);
	r1 = 0xC069B20u; UPD(0x0C089964u, 1);  /* 0C089962 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C089964 add #imm,Rn */
	r9 = 0xC0000u; UPD(0x0C089968u, 2);  /* 0C089966 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C089968 mov Rm,Rn */
	IF(0x0C08996Au); { u32 t_ = r1; PR = 0x0C08996Eu; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C08996Eu); }  /* 0C08996A jsr @Rn */
L_0C08996E: BLKS(0x0C08996Eu);
	r8 = R32(r10 + 0x24u); UPD(0x0C089970u, 1);  /* 0C08996E mov.l @(disp,Rm),Rn */
	r5 = r9;  /* 0C089970 mov Rm,Rn */
	r4 = r11;  /* 0C089972 mov Rm,Rn */
	r9 = 0xC0BB1A0u; UPD(0x0C089976u, 3);  /* 0C089974 mov.l @(disp,pc),Rn */
	IF(0x0C089976u); { u32 t_ = r13; PR = 0x0C08997Au; r8 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C08997Au); }  /* 0C089976 jsr @Rn */
L_0C08997A: BLKS(0x0C08997Au);
	r6 = R32(r10 + 0x28u); UPD(0x0C08997Cu, 1);  /* 0C08997A mov.l @(disp,Rm),Rn */
	r7 = r11;  /* 0C08997C mov Rm,Rn */
	r3 = 0x30000u; UPD(0x0C089980u, 2);  /* 0C08997E mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C089980 mov #imm,Rn */
	W32(r15, r3); UPD(0x0C089984u, 2);  /* 0C089982 mov.l Rm,@Rn */
	r6 += r0;  /* 0C089984 add Rm,Rn */
	r5 = r8;  /* 0C089986 mov Rm,Rn */
	IF(0x0C089988u); { u32 t_ = r9; PR = 0x0C08998Cu; r11 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0BB1A0, 0x0C0BB1A0u, 0x0C08998Cu); }  /* 0C089988 jsr @Rn */
L_0C08998C: BLKS(0x0C08998Cu);
	W8(r12, r11); UPD(0x0C08998Eu, 1);  /* 0C08998C mov.b Rm,@Rn */
	r15 += 0x4u;  /* 0C08998E add #imm,Rn */
	r1 = 0xC069B90u; UPD(0x0C089992u, 2);  /* 0C089990 mov.l @(disp,pc),Rn */
	{ r4 = R32(r14); /* slot mov.l @Rm,Rn */ UPD(0x0C089496u, 3); goto L_0C089496; }  /* 0C089992 bra */
}

void blk_f_0C0899E0(sh3_t *c)
{
	LOCALS;
L_0C0899E0: BLKS(0x0C0899E0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0899E2u, 1);  /* 0C0899E0 mov.l Rm,@-Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C0899E2 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0899E6u, 2);  /* 0C0899E4 mov.l Rm,@-Rn */
	r2 = 0xB4u; UPD(0x0C0899E8u, 1);  /* 0C0899E6 mov.w @(disp,pc),Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0899EAu, 1);  /* 0C0899E8 mov.l Rm,@-Rn */
	IF(0x0C0899EAu); MACL = r4 * r2;  /* 0C0899EA mul.l Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0899EEu, 3);  /* 0C0899EC mov.l Rm,@-Rn */
	r0 = 0xC286578u; UPD(0x0C0899F0u, 1);  /* 0C0899EE mov.l @(disp,pc),Rn */
	IF(0x0C0899F0u); r8 = MACL;  /* 0C0899F0 sts macl,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0899F4u, 2);  /* 0C0899F2 mov.l Rm,@-Rn */
	r8 += r0;  /* 0C0899F4 add Rm,Rn */
	IF(0x0C0899F6u); r15 -= 4; W32(r15, PR); UPD(0x0C0899F8u, 2);  /* 0C0899F6 sts.l pr,@-Rn */
	r8 += 0x3Cu;  /* 0C0899F8 add #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r8); UPD(0x0C0899FCu, 2);  /* 0C0899FA mov.w @Rm,Rn */
	r14 = r15;  /* 0C0899FC mov Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0899FE tst Rm,Rn */
	{ u32 c_ = !T; r8 += 0xFFFFFFC4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C089A08u, 5); goto L_0C089A08; } goto L_0C089A04; }  /* 0C089A00 bf/s */
L_0C089A04: BLKS(0x0C089A04u);
	{ IF(0x0C089A06u); ; /* slot nop */ UPD(0x0C089E70u, 4); goto L_0C089E70; }  /* 0C089A04 bra */
L_0C089A08: BLKS(0x0C089A08u);
	r2 = R32(r8 + 0x8u); UPD(0x0C089A0Au, 1);  /* 0C089A08 mov.l @(disp,Rm),Rn */
	r6 = 0x8u;  /* 0C089A0A mov #imm,Rn */
	T = r2 > r6;  /* 0C089A0C cmp/hi Rm,Rn */
	if (T) { UPD(0x0C089A5Cu, 5); goto L_0C089A5C; }  /* 0C089A0E bt */
L_0C089A10: BLKS(0x0C089A10u);
	r0 = 0xC089A20u;  /* 0C089A10 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C089A12 add Rm,Rn */
	IF(0x0C089A14u); r7 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C089A16u, 3);  /* 0C089A14 mov.w @(r0,Rm),Rn */
	IF(0x0C089A16u); { u32 tv_ = (r7 + 0x0C089A1Au); u32 t_ = PHYS(tv_); IF(0x0C089A18u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C089A40u: goto L_0C089A40; case 0x0C089A5Cu: goto L_0C089A5C; case 0x0C089AE0u: goto L_0C089AE0; case 0x0C089B60u: goto L_0C089B60; case 0x0C089C10u: goto L_0C089C10; case 0x0C089C80u: goto L_0C089C80; case 0x0C089CE0u: goto L_0C089CE0; case 0x0C089D50u: goto L_0C089D50; case 0x0C089E00u: goto L_0C089E00; default: JUMPD(tv_); } }  /* 0C089A16 braf Rn */
L_0C089A40: BLKS(0x0C089A40u);
	r11 = 0xB4u; UPD(0x0C089A42u, 1);  /* 0C089A40 mov.w @(disp,pc),Rn */
	IF(0x0C089A42u); MACL = r4 * r11;  /* 0C089A42 mul.l Rm,Rn */
	r10 = 0xC286578u; UPD(0x0C089A46u, 3);  /* 0C089A44 mov.l @(disp,pc),Rn */
	IF(0x0C089A46u); r2 = MACL;  /* 0C089A46 sts macl,Rn */
	r3 = 0x99u; UPD(0x0C089A4Au, 2);  /* 0C089A48 mov.w @(disp,pc),Rn */
	r2 += r10;  /* 0C089A4A add Rm,Rn */
	r3 += r2;  /* 0C089A4C add Rm,Rn */
	r8 = (u32)(s32)(s8)R8(r3); UPD(0x0C089A50u, 3);  /* 0C089A4E mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C089A50 add #imm,Rn */
	r0 = r8 & 0xFF;  /* 0C089A52 extu.b Rm,Rn */
	T = r0 == 0x4u;  /* 0C089A54 cmp/eq #imm,r0 */
	{ u32 c_ = T; W8(r3, r8); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C089A70u, 6); goto L_0C089A70; } UPD(0x0C089A5Au, 1); goto L_0C089A5A; }  /* 0C089A56 bt/s */
L_0C089A5A: BLKS(0x0C089A5Au);
	IF(0x0C089A5Au); ;  /* 0C089A5A nop */
	UPD(0x0C089A5Cu, 1);
L_0C089A5C: BLKS(0x0C089A5Cu);
	r15 = r14;  /* 0C089A5C mov Rm,Rn */
	IF(0x0C089A5Eu); PR = R32(r15); r15 += 4; UPD(0x0C089A60u, 2);  /* 0C089A5E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C089A62u, 1);  /* 0C089A60 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C089A64u, 1);  /* 0C089A62 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C089A66u, 1);  /* 0C089A64 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C089A68u, 1);  /* 0C089A66 mov.l @Rm+,Rn */
	IF(0x0C089A68u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C089A68 rts */
L_0C089A70: BLKS(0x0C089A70u);
	r0 = 0x0u;  /* 0C089A70 mov #imm,Rn */
	r11 = 0xC19C52Cu; UPD(0x0C089A74u, 2);  /* 0C089A72 mov.l @(disp,pc),Rn */
	r8 = 0x0u;  /* 0C089A74 mov #imm,Rn */
	r10 = 0xC19C534u; UPD(0x0C089A78u, 2);  /* 0C089A76 mov.l @(disp,pc),Rn */
	r9 = r2;  /* 0C089A78 mov Rm,Rn */
	W8(r3, r0); UPD(0x0C089A7Cu, 2);  /* 0C089A7A mov.b Rm,@Rn */
L_0C089A7C: BLKS(0x0C089A7Cu);
	r0 = r8;  /* 0C089A7C mov Rm,Rn */
	r0 &= 0x1u;  /* 0C089A7E and #imm,r0 */
	IF(0x0C089A80u); r0 <<= 2;  /* 0C089A80 shll2 Rn */
	IF(0x0C089A82u); r7 = R32(r0 + r11); UPD(0x0C089A84u, 4);  /* 0C089A82 mov.l @(r0,Rm),Rn */
	r1 = r8;  /* 0C089A84 mov Rm,Rn */
	IF(0x0C089A86u); T = r1 >> 31; r1 = (r1 << 1) | T;  /* 0C089A86 rotl Rn */
	IF(0x0C089A88u); r0 = T;  /* 0C089A88 movt Rn */
	r0 += r8;  /* 0C089A8A add Rm,Rn */
	IF(0x0C089A8Cu); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C089A8C shar Rn */
	IF(0x0C089A8Eu); r0 <<= 2;  /* 0C089A8E shll2 Rn */
	IF(0x0C089A90u); r3 = R32(r0 + r10); UPD(0x0C089A92u, 7);  /* 0C089A90 mov.l @(r0,Rm),Rn */
	r15 += 0xFFFFFFECu;  /* 0C089A92 add #imm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C089A96u, 2);  /* 0C089A94 mov.l @(disp,Rm),Rn */
	r0 = 0xB0u; UPD(0x0C089A98u, 1);  /* 0C089A96 mov.w @(disp,pc),Rn */
	r6 += r7;  /* 0C089A98 add Rm,Rn */
	IF(0x0C089A9Au); r2 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C089A9Cu, 2);  /* 0C089A9A mov.b @(r0,Rm),Rn */
	r7 = R32(r9 + 0x28u); UPD(0x0C089A9Eu, 1);  /* 0C089A9C mov.l @(disp,Rm),Rn */
	r5 = r2 & 0xFF;  /* 0C089A9E extu.b Rm,Rn */
	W32(r15, r5); UPD(0x0C089AA2u, 2);  /* 0C089AA0 mov.l Rm,@Rn */
	r7 += r3;  /* 0C089AA2 add Rm,Rn */
	r4 = 0xA9u; UPD(0x0C089AA6u, 2);  /* 0C089AA4 mov.w @(disp,pc),Rn */
	r0 = r9;  /* 0C089AA6 mov Rm,Rn */
	IF(0x0C089AA8u); r3 = (u32)(s32)(s8)R8(r0 + r4); UPD(0x0C089AAAu, 2);  /* 0C089AA8 mov.b @(r0,Rm),Rn */
	r0 = 0xC000u; UPD(0x0C089AACu, 1);  /* 0C089AAA mov.l @(disp,pc),Rn */
	r2 = r3 & 0xFF;  /* 0C089AAC extu.b Rm,Rn */
	W32(r15 + 0x8u, r0); UPD(0x0C089AB0u, 2);  /* 0C089AAE mov.l Rm,@(disp,Rn) */
	r5 = 0x6000u; UPD(0x0C089AB2u, 1);  /* 0C089AB0 mov.w @(disp,pc),Rn */
	r4 = 0x808080u; UPD(0x0C089AB4u, 1);  /* 0C089AB2 mov.l @(disp,pc),Rn */
	r0 = 0xC0BEEF0u; UPD(0x0C089AB6u, 1);  /* 0C089AB4 mov.l @(disp,pc),Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C089AB8u, 1);  /* 0C089AB6 mov.l Rm,@(disp,Rn) */
	W32(r15 + 0xCu, r5); UPD(0x0C089ABAu, 1);  /* 0C089AB8 mov.l Rm,@(disp,Rn) */
	W32(r15 + 0x10u, r4); UPD(0x0C089ABCu, 1);  /* 0C089ABA mov.l Rm,@(disp,Rn) */
	r5 = 0x7u;  /* 0C089ABC mov #imm,Rn */
	IF(0x0C089ABEu); { u32 t_ = r0; PR = 0x0C089AC2u; r4 = R32(r9); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BEEF0, 0x0C0BEEF0u, 0x0C089AC2u); }  /* 0C089ABE jsr @Rn */
L_0C089AC2: BLKS(0x0C089AC2u);
	r3 = r8;  /* 0C089AC2 mov Rm,Rn */
	r3 += 0x1u;  /* 0C089AC4 add #imm,Rn */
	r8 = (u32)(s32)(s16)r3;  /* 0C089AC6 exts.w Rm,Rn */
	r2 = 0x3u;  /* 0C089AC8 mov #imm,Rn */
	T = (s32)r8 > (s32)r2;  /* 0C089ACA cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x14u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C089A7Cu, 8); goto L_0C089A7C; } goto L_0C089AD0; }  /* 0C089ACC bf/s */
L_0C089AD0: BLKS(0x0C089AD0u);
	{ IF(0x0C089AD2u); ; /* slot nop */ UPD(0x0C089A5Cu, 4); goto L_0C089A5C; }  /* 0C089AD0 bra */
L_0C089AE0: BLKS(0x0C089AE0u);
	r8 = 0xB4u; UPD(0x0C089AE2u, 1);  /* 0C089AE0 mov.w @(disp,pc),Rn */
	IF(0x0C089AE2u); MACL = r4 * r8;  /* 0C089AE2 mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C089AE6u, 3);  /* 0C089AE4 mov.l @(disp,pc),Rn */
	IF(0x0C089AE6u); r2 = MACL;  /* 0C089AE6 sts macl,Rn */
	r3 = 0x99u; UPD(0x0C089AEAu, 2);  /* 0C089AE8 mov.w @(disp,pc),Rn */
	r2 += r6;  /* 0C089AEA add Rm,Rn */
	r3 += r2;  /* 0C089AEC add Rm,Rn */
	r9 = (u32)(s32)(s8)R8(r3); UPD(0x0C089AF0u, 3);  /* 0C089AEE mov.b @Rm,Rn */
	r9 += 0x1u;  /* 0C089AF0 add #imm,Rn */
	r0 = r9 & 0xFF;  /* 0C089AF2 extu.b Rm,Rn */
	T = r0 == 0x4u;  /* 0C089AF4 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r3, r9); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C089A5Cu, 6); goto L_0C089A5C; } UPD(0x0C089AFAu, 1); goto L_0C089AFA; }  /* 0C089AF6 bf/s */
L_0C089AFA: BLKS(0x0C089AFAu);
	r10 = 0x0u;  /* 0C089AFA mov #imm,Rn */
	W8(r3, r10); UPD(0x0C089AFEu, 2);  /* 0C089AFC mov.b Rm,@Rn */
	r8 = 0x0u;  /* 0C089AFE mov #imm,Rn */
	r11 = 0xC19C52Cu; UPD(0x0C089B02u, 2);  /* 0C089B00 mov.l @(disp,pc),Rn */
	r9 = r2;  /* 0C089B02 mov Rm,Rn */
	r10 = 0xC19C53Cu; UPD(0x0C089B06u, 2);  /* 0C089B04 mov.l @(disp,pc),Rn */
	IF(0x0C089B06u); ;  /* 0C089B06 nop */
	UPD(0x0C089B08u, 1);
L_0C089B08: BLKS(0x0C089B08u);
	r0 = r8;  /* 0C089B08 mov Rm,Rn */
	r0 &= 0x1u;  /* 0C089B0A and #imm,r0 */
	IF(0x0C089B0Cu); r0 <<= 2;  /* 0C089B0C shll2 Rn */
	IF(0x0C089B0Eu); r7 = R32(r0 + r11); UPD(0x0C089B10u, 4);  /* 0C089B0E mov.l @(r0,Rm),Rn */
	r1 = r8;  /* 0C089B10 mov Rm,Rn */
	IF(0x0C089B12u); T = r1 >> 31; r1 = (r1 << 1) | T;  /* 0C089B12 rotl Rn */
	IF(0x0C089B14u); r0 = T;  /* 0C089B14 movt Rn */
	r0 += r8;  /* 0C089B16 add Rm,Rn */
	IF(0x0C089B18u); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C089B18 shar Rn */
	IF(0x0C089B1Au); r0 <<= 2;  /* 0C089B1A shll2 Rn */
	IF(0x0C089B1Cu); r4 = R32(r0 + r10); UPD(0x0C089B1Eu, 7);  /* 0C089B1C mov.l @(r0,Rm),Rn */
	r15 += 0xFFFFFFECu;  /* 0C089B1E add #imm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C089B22u, 2);  /* 0C089B20 mov.l @(disp,Rm),Rn */
	r0 = 0xB0u; UPD(0x0C089B24u, 1);  /* 0C089B22 mov.w @(disp,pc),Rn */
	r6 += r7;  /* 0C089B24 add Rm,Rn */
	IF(0x0C089B26u); r3 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C089B28u, 2);  /* 0C089B26 mov.b @(r0,Rm),Rn */
	r7 = R32(r9 + 0x28u); UPD(0x0C089B2Au, 1);  /* 0C089B28 mov.l @(disp,Rm),Rn */
	r2 = r3 & 0xFF;  /* 0C089B2A extu.b Rm,Rn */
	W32(r15, r2); UPD(0x0C089B2Eu, 2);  /* 0C089B2C mov.l Rm,@Rn */
	r7 += r4;  /* 0C089B2E add Rm,Rn */
	r5 = 0xA9u; UPD(0x0C089B32u, 2);  /* 0C089B30 mov.w @(disp,pc),Rn */
	r0 = r9;  /* 0C089B32 mov Rm,Rn */
	IF(0x0C089B34u); r4 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C089B36u, 2);  /* 0C089B34 mov.b @(r0,Rm),Rn */
	r0 = r4 & 0xFF;  /* 0C089B36 extu.b Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C089B3Au, 2);  /* 0C089B38 mov.l Rm,@(disp,Rn) */
	r3 = 0xC000u; UPD(0x0C089B3Cu, 1);  /* 0C089B3A mov.l @(disp,pc),Rn */
	r2 = 0x6000u; UPD(0x0C089B3Eu, 1);  /* 0C089B3C mov.w @(disp,pc),Rn */
	r5 = 0x808080u; UPD(0x0C089B40u, 1);  /* 0C089B3E mov.l @(disp,pc),Rn */
	W32(r15 + 0x8u, r3); UPD(0x0C089B42u, 1);  /* 0C089B40 mov.l Rm,@(disp,Rn) */
	W32(r15 + 0x10u, r5); UPD(0x0C089B44u, 1);  /* 0C089B42 mov.l Rm,@(disp,Rn) */
	W32(r15 + 0xCu, r2); UPD(0x0C089B46u, 1);  /* 0C089B44 mov.l Rm,@(disp,Rn) */
	r5 = 0x7u;  /* 0C089B46 mov #imm,Rn */
	r0 = 0xC0BEEF0u; UPD(0x0C089B4Au, 2);  /* 0C089B48 mov.l @(disp,pc),Rn */
	IF(0x0C089B4Au); { u32 t_ = r0; PR = 0x0C089B4Eu; r4 = R32(r9); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BEEF0, 0x0C0BEEF0u, 0x0C089B4Eu); }  /* 0C089B4A jsr @Rn */
L_0C089B4E: BLKS(0x0C089B4Eu);
	r4 = r8;  /* 0C089B4E mov Rm,Rn */
	r4 += 0x1u;  /* 0C089B50 add #imm,Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C089B52 exts.w Rm,Rn */
	r0 = 0x3u;  /* 0C089B54 mov #imm,Rn */
	T = (s32)r8 > (s32)r0;  /* 0C089B56 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x14u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C089B08u, 8); goto L_0C089B08; } UPD(0x0C089B5Cu, 1); goto L_0C089B5C; }  /* 0C089B58 bf/s */
L_0C089B5C: BLKS(0x0C089B5Cu);
	{ IF(0x0C089B5Eu); ; /* slot nop */ UPD(0x0C089A5Cu, 3); goto L_0C089A5C; }  /* 0C089B5C bra */
L_0C089B60: BLKS(0x0C089B60u);
	r6 = 0xB4u; UPD(0x0C089B62u, 1);  /* 0C089B60 mov.w @(disp,pc),Rn */
	IF(0x0C089B62u); MACL = r4 * r6;  /* 0C089B62 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C089B66u, 3);  /* 0C089B64 mov.l @(disp,pc),Rn */
	IF(0x0C089B66u); r2 = MACL;  /* 0C089B66 sts macl,Rn */
	r3 = 0x99u; UPD(0x0C089B6Au, 2);  /* 0C089B68 mov.w @(disp,pc),Rn */
	r2 += r9;  /* 0C089B6A add Rm,Rn */
	r3 += r2;  /* 0C089B6C add Rm,Rn */
	r11 = (u32)(s32)(s8)R8(r3); UPD(0x0C089B70u, 3);  /* 0C089B6E mov.b @Rm,Rn */
	r11 += 0x1u;  /* 0C089B70 add #imm,Rn */
	r0 = r11 & 0xFF;  /* 0C089B72 extu.b Rm,Rn */
	T = r0 == 0x4u;  /* 0C089B74 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r3, r11); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C089B5Cu, 6); goto L_0C089B5C; } UPD(0x0C089B7Au, 1); goto L_0C089B7A; }  /* 0C089B76 bf/s */
L_0C089B7A: BLKS(0x0C089B7Au);
	r8 = 0x0u;  /* 0C089B7A mov #imm,Rn */
	W8(r3, r8); UPD(0x0C089B7Eu, 2);  /* 0C089B7C mov.b Rm,@Rn */
	r9 = r2;  /* 0C089B7E mov Rm,Rn */
	r10 = 0xA9u; UPD(0x0C089B82u, 2);  /* 0C089B80 mov.w @(disp,pc),Rn */
	r8 = 0x0u;  /* 0C089B82 mov #imm,Rn */
	r10 += r2;  /* 0C089B84 add Rm,Rn */
	IF(0x0C089B86u); ;  /* 0C089B86 nop */
	UPD(0x0C089B88u, 3);
L_0C089B88: BLKS(0x0C089B88u);
	r0 = r8;  /* 0C089B88 mov Rm,Rn */
	r4 = 0xC19C544u; UPD(0x0C089B8Cu, 2);  /* 0C089B8A mov.l @(disp,pc),Rn */
	IF(0x0C089B8Cu); r0 <<= 2;  /* 0C089B8C shll2 Rn */
	IF(0x0C089B8Eu); r7 = R32(r0 + r4); UPD(0x0C089B90u, 2);  /* 0C089B8E mov.l @(r0,Rm),Rn */
	r15 += 0xFFFFFFECu;  /* 0C089B90 add #imm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C089B94u, 2);  /* 0C089B92 mov.l @(disp,Rm),Rn */
	r0 = 0xB0u; UPD(0x0C089B96u, 1);  /* 0C089B94 mov.w @(disp,pc),Rn */
	r6 += r7;  /* 0C089B96 add Rm,Rn */
	IF(0x0C089B98u); r2 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C089B9Au, 2);  /* 0C089B98 mov.b @(r0,Rm),Rn */
	r7 = R32(r9 + 0x28u); UPD(0x0C089B9Cu, 1);  /* 0C089B9A mov.l @(disp,Rm),Rn */
	r11 = r2 & 0xFF;  /* 0C089B9C extu.b Rm,Rn */
	W32(r15, r11); UPD(0x0C089BA0u, 2);  /* 0C089B9E mov.l Rm,@Rn */
	r3 = 0xFFEC0000u; UPD(0x0C089BA2u, 1);  /* 0C089BA0 mov.l @(disp,pc),Rn */
	r5 = (u32)(s32)(s8)R8(r10); UPD(0x0C089BA4u, 1);  /* 0C089BA2 mov.b @Rm,Rn */
	r7 += r3;  /* 0C089BA4 add Rm,Rn */
	r4 = 0x8000u; UPD(0x0C089BA8u, 2);  /* 0C089BA6 mov.l @(disp,pc),Rn */
	r0 = r5 & 0xFF;  /* 0C089BA8 extu.b Rm,Rn */
	r3 = 0x4000u; UPD(0x0C089BACu, 2);  /* 0C089BAA mov.w @(disp,pc),Rn */
	r5 = 0x5u;  /* 0C089BAC mov #imm,Rn */
	r2 = 0x808080u; UPD(0x0C089BB0u, 2);  /* 0C089BAE mov.l @(disp,pc),Rn */
	r11 = 0xC0BEEF0u; UPD(0x0C089BB2u, 1);  /* 0C089BB0 mov.l @(disp,pc),Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C089BB4u, 1);  /* 0C089BB2 mov.l Rm,@(disp,Rn) */
	W32(r15 + 0x8u, r4); UPD(0x0C089BB6u, 1);  /* 0C089BB4 mov.l Rm,@(disp,Rn) */
	W32(r15 + 0xCu, r3); UPD(0x0C089BB8u, 1);  /* 0C089BB6 mov.l Rm,@(disp,Rn) */
	W32(r15 + 0x10u, r2); UPD(0x0C089BBAu, 1);  /* 0C089BB8 mov.l Rm,@(disp,Rn) */
	IF(0x0C089BBAu); { u32 t_ = r11; PR = 0x0C089BBEu; r4 = R32(r9); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BEEF0, 0x0C0BEEF0u, 0x0C089BBEu); }  /* 0C089BBA jsr @Rn */
L_0C089BBE: BLKS(0x0C089BBEu);
	r5 = r8;  /* 0C089BBE mov Rm,Rn */
	r5 += 0x1u;  /* 0C089BC0 add #imm,Rn */
	r8 = (u32)(s32)(s16)r5;  /* 0C089BC2 exts.w Rm,Rn */
	r0 = 0x5u;  /* 0C089BC4 mov #imm,Rn */
	T = (s32)r8 > (s32)r0;  /* 0C089BC6 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x14u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C089B88u, 8); goto L_0C089B88; } UPD(0x0C089BCCu, 1); goto L_0C089BCC; }  /* 0C089BC8 bf/s */
L_0C089BCC: BLKS(0x0C089BCCu);
	{ IF(0x0C089BCEu); ; /* slot nop */ UPD(0x0C089A5Cu, 3); goto L_0C089A5C; }  /* 0C089BCC bra */
L_0C089C10: BLKS(0x0C089C10u);
	r6 = 0xB4u; UPD(0x0C089C12u, 1);  /* 0C089C10 mov.w @(disp,pc),Rn */
	IF(0x0C089C12u); MACL = r4 * r6;  /* 0C089C12 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C089C16u, 3);  /* 0C089C14 mov.l @(disp,pc),Rn */
	IF(0x0C089C16u); r2 = MACL;  /* 0C089C16 sts macl,Rn */
	r3 = 0x99u; UPD(0x0C089C1Au, 2);  /* 0C089C18 mov.w @(disp,pc),Rn */
	r2 += r9;  /* 0C089C1A add Rm,Rn */
	r3 += r2;  /* 0C089C1C add Rm,Rn */
	r10 = (u32)(s32)(s8)R8(r3); UPD(0x0C089C20u, 3);  /* 0C089C1E mov.b @Rm,Rn */
	r10 += 0x1u;  /* 0C089C20 add #imm,Rn */
	r0 = r10 & 0xFF;  /* 0C089C22 extu.b Rm,Rn */
	T = r0 == 0x4u;  /* 0C089C24 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r3, r10); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C089BCCu, 6); goto L_0C089BCC; } UPD(0x0C089C2Au, 1); goto L_0C089C2A; }  /* 0C089C26 bf/s */
L_0C089C2A: BLKS(0x0C089C2Au);
	r8 = 0x0u;  /* 0C089C2A mov #imm,Rn */
	W8(r3, r8); UPD(0x0C089C2Eu, 2);  /* 0C089C2C mov.b Rm,@Rn */
	r9 = r2;  /* 0C089C2E mov Rm,Rn */
	r10 = 0xA9u; UPD(0x0C089C32u, 2);  /* 0C089C30 mov.w @(disp,pc),Rn */
	r8 = 0x0u;  /* 0C089C32 mov #imm,Rn */
	r10 += r2;  /* 0C089C34 add Rm,Rn */
	IF(0x0C089C36u); ;  /* 0C089C36 nop */
	UPD(0x0C089C38u, 3);
L_0C089C38: BLKS(0x0C089C38u);
	r0 = r8;  /* 0C089C38 mov Rm,Rn */
	r4 = 0xC19C55Cu; UPD(0x0C089C3Cu, 2);  /* 0C089C3A mov.l @(disp,pc),Rn */
	IF(0x0C089C3Cu); r0 <<= 2;  /* 0C089C3C shll2 Rn */
	IF(0x0C089C3Eu); r7 = R32(r0 + r4); UPD(0x0C089C40u, 2);  /* 0C089C3E mov.l @(r0,Rm),Rn */
	r15 += 0xFFFFFFECu;  /* 0C089C40 add #imm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C089C44u, 2);  /* 0C089C42 mov.l @(disp,Rm),Rn */
	r0 = 0xB0u; UPD(0x0C089C46u, 1);  /* 0C089C44 mov.w @(disp,pc),Rn */
	r6 += r7;  /* 0C089C46 add Rm,Rn */
	IF(0x0C089C48u); r2 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C089C4Au, 2);  /* 0C089C48 mov.b @(r0,Rm),Rn */
	r7 = R32(r9 + 0x28u); UPD(0x0C089C4Cu, 1);  /* 0C089C4A mov.l @(disp,Rm),Rn */
	r11 = r2 & 0xFF;  /* 0C089C4C extu.b Rm,Rn */
	W32(r15, r11); UPD(0x0C089C50u, 2);  /* 0C089C4E mov.l Rm,@Rn */
	r3 = 0xA0000u; UPD(0x0C089C52u, 1);  /* 0C089C50 mov.l @(disp,pc),Rn */
	r5 = (u32)(s32)(s8)R8(r10); UPD(0x0C089C54u, 1);  /* 0C089C52 mov.b @Rm,Rn */
	r7 += r3;  /* 0C089C54 add Rm,Rn */
	r4 = 0x8000u; UPD(0x0C089C58u, 2);  /* 0C089C56 mov.l @(disp,pc),Rn */
	r0 = r5 & 0xFF;  /* 0C089C58 extu.b Rm,Rn */
	r3 = 0x4000u; UPD(0x0C089C5Cu, 2);  /* 0C089C5A mov.w @(disp,pc),Rn */
	r5 = 0x5u;  /* 0C089C5C mov #imm,Rn */
	r2 = 0x808080u; UPD(0x0C089C60u, 2);  /* 0C089C5E mov.l @(disp,pc),Rn */
	r11 = 0xC0BEEF0u; UPD(0x0C089C62u, 1);  /* 0C089C60 mov.l @(disp,pc),Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C089C64u, 1);  /* 0C089C62 mov.l Rm,@(disp,Rn) */
	W32(r15 + 0x8u, r4); UPD(0x0C089C66u, 1);  /* 0C089C64 mov.l Rm,@(disp,Rn) */
	W32(r15 + 0xCu, r3); UPD(0x0C089C68u, 1);  /* 0C089C66 mov.l Rm,@(disp,Rn) */
	W32(r15 + 0x10u, r2); UPD(0x0C089C6Au, 1);  /* 0C089C68 mov.l Rm,@(disp,Rn) */
	IF(0x0C089C6Au); { u32 t_ = r11; PR = 0x0C089C6Eu; r4 = R32(r9); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BEEF0, 0x0C0BEEF0u, 0x0C089C6Eu); }  /* 0C089C6A jsr @Rn */
L_0C089C6E: BLKS(0x0C089C6Eu);
	r5 = r8;  /* 0C089C6E mov Rm,Rn */
	r5 += 0x1u;  /* 0C089C70 add #imm,Rn */
	r8 = (u32)(s32)(s16)r5;  /* 0C089C72 exts.w Rm,Rn */
	r0 = 0x2u;  /* 0C089C74 mov #imm,Rn */
	T = (s32)r8 > (s32)r0;  /* 0C089C76 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x14u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C089C38u, 8); goto L_0C089C38; } UPD(0x0C089C7Cu, 1); goto L_0C089C7C; }  /* 0C089C78 bf/s */
L_0C089C7C: BLKS(0x0C089C7Cu);
	{ IF(0x0C089C7Eu); ; /* slot nop */ UPD(0x0C089A5Cu, 3); goto L_0C089A5C; }  /* 0C089C7C bra */
L_0C089C80: BLKS(0x0C089C80u);
	r9 = 0xB4u; UPD(0x0C089C82u, 1);  /* 0C089C80 mov.w @(disp,pc),Rn */
	IF(0x0C089C82u); MACL = r4 * r9;  /* 0C089C82 mul.l Rm,Rn */
	r10 = 0xC286578u; UPD(0x0C089C86u, 3);  /* 0C089C84 mov.l @(disp,pc),Rn */
	IF(0x0C089C86u); r3 = MACL;  /* 0C089C86 sts macl,Rn */
	r2 = 0x99u; UPD(0x0C089C8Au, 2);  /* 0C089C88 mov.w @(disp,pc),Rn */
	r3 += r10;  /* 0C089C8A add Rm,Rn */
	r2 += r3;  /* 0C089C8C add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C089C90u, 3);  /* 0C089C8E mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C089C90 add #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C089C92 extu.b Rm,Rn */
	T = r0 == 0x4u;  /* 0C089C94 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r2, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C089C7Cu, 6); goto L_0C089C7C; } UPD(0x0C089C9Au, 1); goto L_0C089C9A; }  /* 0C089C96 bf/s */
L_0C089C9A: BLKS(0x0C089C9Au);
	r6 = 0x0u;  /* 0C089C9A mov #imm,Rn */
	W8(r2, r6); UPD(0x0C089C9Eu, 2);  /* 0C089C9C mov.b Rm,@Rn */
	r15 += 0xFFFFFFECu;  /* 0C089C9E add #imm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C089CA2u, 2);  /* 0C089CA0 mov.l @(disp,Rm),Rn */
	r7 = 0x180000u; UPD(0x0C089CA4u, 1);  /* 0C089CA2 mov.l @(disp,pc),Rn */
	r6 += r7;  /* 0C089CA4 add Rm,Rn */
	r7 = R32(r3 + 0x28u); UPD(0x0C089CA8u, 2);  /* 0C089CA6 mov.l @(disp,Rm),Rn */
	r0 = 0x80000u; UPD(0x0C089CAAu, 1);  /* 0C089CA8 mov.l @(disp,pc),Rn */
	r7 += r0;  /* 0C089CAA add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C089CAEu, 2);  /* 0C089CAC mov.w @(disp,pc),Rn */
	IF(0x0C089CAEu); r8 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C089CB0u, 1);  /* 0C089CAE mov.b @(r0,Rm),Rn */
	r9 = r8 & 0xFF;  /* 0C089CB0 extu.b Rm,Rn */
	W32(r15, r9); UPD(0x0C089CB4u, 2);  /* 0C089CB2 mov.l Rm,@Rn */
	r0 = r3;  /* 0C089CB4 mov Rm,Rn */
	r10 = 0xA9u; UPD(0x0C089CB8u, 2);  /* 0C089CB6 mov.w @(disp,pc),Rn */
	IF(0x0C089CB8u); r4 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C089CBAu, 1);  /* 0C089CB8 mov.b @(r0,Rm),Rn */
	r5 = 0x6000u; UPD(0x0C089CBCu, 1);  /* 0C089CBA mov.w @(disp,pc),Rn */
	r2 = r4 & 0xFF;  /* 0C089CBC extu.b Rm,Rn */
	r0 = 0x808080u; UPD(0x0C089CC0u, 2);  /* 0C089CBE mov.l @(disp,pc),Rn */
	r11 = 0xC000u; UPD(0x0C089CC2u, 1);  /* 0C089CC0 mov.l @(disp,pc),Rn */
	r8 = 0xC0BEEF0u; UPD(0x0C089CC4u, 1);  /* 0C089CC2 mov.l @(disp,pc),Rn */
	W32(r15 + 0xCu, r5); UPD(0x0C089CC6u, 1);  /* 0C089CC4 mov.l Rm,@(disp,Rn) */
	W32(r15 + 0x4u, r2); UPD(0x0C089CC8u, 1);  /* 0C089CC6 mov.l Rm,@(disp,Rn) */
	r5 = 0x7u;  /* 0C089CC8 mov #imm,Rn */
	W32(r15 + 0x8u, r11); UPD(0x0C089CCCu, 2);  /* 0C089CCA mov.l Rm,@(disp,Rn) */
	W32(r15 + 0x10u, r0); UPD(0x0C089CCEu, 1);  /* 0C089CCC mov.l Rm,@(disp,Rn) */
	IF(0x0C089CCEu); { u32 t_ = r8; PR = 0x0C089CD2u; r4 = R32(r3); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BEEF0, 0x0C0BEEF0u, 0x0C089CD2u); }  /* 0C089CCE jsr @Rn */
L_0C089CD2: BLKS(0x0C089CD2u);
	r15 += 0x14u;  /* 0C089CD2 add #imm,Rn */
	UPD(0x0C089CD4u, 1);
L_0C089CD4: BLKS(0x0C089CD4u);
	{ IF(0x0C089CD6u); ; /* slot nop */ UPD(0x0C089A5Cu, 3); goto L_0C089A5C; }  /* 0C089CD4 bra */
L_0C089CE0: BLKS(0x0C089CE0u);
	r5 = 0xB4u; UPD(0x0C089CE2u, 1);  /* 0C089CE0 mov.w @(disp,pc),Rn */
	IF(0x0C089CE2u); MACL = r4 * r5;  /* 0C089CE2 mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C089CE6u, 3);  /* 0C089CE4 mov.l @(disp,pc),Rn */
	IF(0x0C089CE6u); r2 = MACL;  /* 0C089CE6 sts macl,Rn */
	r2 += r3;  /* 0C089CE8 add Rm,Rn */
	r3 = 0x99u; UPD(0x0C089CECu, 3);  /* 0C089CEA mov.w @(disp,pc),Rn */
	r3 += r2;  /* 0C089CEC add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r3); UPD(0x0C089CF0u, 2);  /* 0C089CEE mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C089CF0 add #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C089CF2 extu.b Rm,Rn */
	T = r0 == 0x4u;  /* 0C089CF4 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r3, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C089CD4u, 6); goto L_0C089CD4; } UPD(0x0C089CFAu, 1); goto L_0C089CFA; }  /* 0C089CF6 bf/s */
L_0C089CFA: BLKS(0x0C089CFAu);
	r11 = 0x0u;  /* 0C089CFA mov #imm,Rn */
	r10 = 0xA9u; UPD(0x0C089CFEu, 2);  /* 0C089CFC mov.w @(disp,pc),Rn */
	r8 = 0x0u;  /* 0C089CFE mov #imm,Rn */
	W8(r3, r11); UPD(0x0C089D02u, 2);  /* 0C089D00 mov.b Rm,@Rn */
	r9 = r2;  /* 0C089D02 mov Rm,Rn */
	r10 += r2;  /* 0C089D04 add Rm,Rn */
	IF(0x0C089D06u); ;  /* 0C089D06 nop */
	UPD(0x0C089D08u, 3);
L_0C089D08: BLKS(0x0C089D08u);
	r0 = r8;  /* 0C089D08 mov Rm,Rn */
	r2 = 0xC19C568u; UPD(0x0C089D0Cu, 2);  /* 0C089D0A mov.l @(disp,pc),Rn */
	IF(0x0C089D0Cu); r0 <<= 2;  /* 0C089D0C shll2 Rn */
	IF(0x0C089D0Eu); r5 = R32(r0 + r2); UPD(0x0C089D10u, 2);  /* 0C089D0E mov.l @(r0,Rm),Rn */
	r15 += 0xFFFFFFECu;  /* 0C089D10 add #imm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C089D14u, 2);  /* 0C089D12 mov.l @(disp,Rm),Rn */
	r7 = 0x1A0000u; UPD(0x0C089D16u, 1);  /* 0C089D14 mov.l @(disp,pc),Rn */
	r0 = 0xB0u; UPD(0x0C089D18u, 1);  /* 0C089D16 mov.w @(disp,pc),Rn */
	r6 += r7;  /* 0C089D18 add Rm,Rn */
	IF(0x0C089D1Au); r3 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C089D1Cu, 2);  /* 0C089D1A mov.b @(r0,Rm),Rn */
	r7 = R32(r9 + 0x28u); UPD(0x0C089D1Eu, 1);  /* 0C089D1C mov.l @(disp,Rm),Rn */
	r11 = r3 & 0xFF;  /* 0C089D1E extu.b Rm,Rn */
	W32(r15, r11); UPD(0x0C089D22u, 2);  /* 0C089D20 mov.l Rm,@Rn */
	r7 += r5;  /* 0C089D22 add Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r10); UPD(0x0C089D26u, 2);  /* 0C089D24 mov.b @Rm,Rn */
	r5 = 0x8000u; UPD(0x0C089D28u, 1);  /* 0C089D26 mov.l @(disp,pc),Rn */
	r2 = r4 & 0xFF;  /* 0C089D28 extu.b Rm,Rn */
	r3 = 0x4000u; UPD(0x0C089D2Cu, 2);  /* 0C089D2A mov.w @(disp,pc),Rn */
	r0 = 0x808080u; UPD(0x0C089D2Eu, 1);  /* 0C089D2C mov.l @(disp,pc),Rn */
	W32(r15 + 0x4u, r2); UPD(0x0C089D30u, 1);  /* 0C089D2E mov.l Rm,@(disp,Rn) */
	W32(r15 + 0x8u, r5); UPD(0x0C089D32u, 1);  /* 0C089D30 mov.l Rm,@(disp,Rn) */
	W32(r15 + 0xCu, r3); UPD(0x0C089D34u, 1);  /* 0C089D32 mov.l Rm,@(disp,Rn) */
	r5 = 0x5u;  /* 0C089D34 mov #imm,Rn */
	W32(r15 + 0x10u, r0); UPD(0x0C089D38u, 2);  /* 0C089D36 mov.l Rm,@(disp,Rn) */
	r11 = 0xC0BEEF0u; UPD(0x0C089D3Au, 1);  /* 0C089D38 mov.l @(disp,pc),Rn */
	IF(0x0C089D3Au); { u32 t_ = r11; PR = 0x0C089D3Eu; r4 = R32(r9); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BEEF0, 0x0C0BEEF0u, 0x0C089D3Eu); }  /* 0C089D3A jsr @Rn */
L_0C089D3E: BLKS(0x0C089D3Eu);
	r4 = r8;  /* 0C089D3E mov Rm,Rn */
	r4 += 0x1u;  /* 0C089D40 add #imm,Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C089D42 exts.w Rm,Rn */
	r2 = 0x3u;  /* 0C089D44 mov #imm,Rn */
	T = (s32)r8 > (s32)r2;  /* 0C089D46 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x14u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C089D08u, 8); goto L_0C089D08; } UPD(0x0C089D4Cu, 1); goto L_0C089D4C; }  /* 0C089D48 bf/s */
L_0C089D4C: BLKS(0x0C089D4Cu);
	{ IF(0x0C089D4Eu); ; /* slot nop */ UPD(0x0C089A5Cu, 3); goto L_0C089A5C; }  /* 0C089D4C bra */
L_0C089D50: BLKS(0x0C089D50u);
	r8 = 0xB4u; UPD(0x0C089D52u, 1);  /* 0C089D50 mov.w @(disp,pc),Rn */
	IF(0x0C089D52u); MACL = r4 * r8;  /* 0C089D52 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C089D56u, 3);  /* 0C089D54 mov.l @(disp,pc),Rn */
	IF(0x0C089D56u); r2 = MACL;  /* 0C089D56 sts macl,Rn */
	r3 = 0x99u; UPD(0x0C089D5Au, 2);  /* 0C089D58 mov.w @(disp,pc),Rn */
	r2 += r9;  /* 0C089D5A add Rm,Rn */
	r3 += r2;  /* 0C089D5C add Rm,Rn */
	r10 = (u32)(s32)(s8)R8(r3); UPD(0x0C089D60u, 3);  /* 0C089D5E mov.b @Rm,Rn */
	r10 += 0x1u;  /* 0C089D60 add #imm,Rn */
	r0 = r10 & 0xFF;  /* 0C089D62 extu.b Rm,Rn */
	T = r0 == 0x4u;  /* 0C089D64 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r3, r10); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C089D4Cu, 6); goto L_0C089D4C; } UPD(0x0C089D6Au, 1); goto L_0C089D6A; }  /* 0C089D66 bf/s */
L_0C089D6A: BLKS(0x0C089D6Au);
	r6 = 0x0u;  /* 0C089D6A mov #imm,Rn */
	r10 = 0xA9u; UPD(0x0C089D6Eu, 2);  /* 0C089D6C mov.w @(disp,pc),Rn */
	r8 = 0x0u;  /* 0C089D6E mov #imm,Rn */
	W8(r3, r6); UPD(0x0C089D72u, 2);  /* 0C089D70 mov.b Rm,@Rn */
	r9 = r2;  /* 0C089D72 mov Rm,Rn */
	r10 += r2;  /* 0C089D74 add Rm,Rn */
	IF(0x0C089D76u); ;  /* 0C089D76 nop */
	UPD(0x0C089D78u, 3);
L_0C089D78: BLKS(0x0C089D78u);
	r0 = r8;  /* 0C089D78 mov Rm,Rn */
	r2 = 0xC19C578u; UPD(0x0C089D7Cu, 2);  /* 0C089D7A mov.l @(disp,pc),Rn */
	IF(0x0C089D7Cu); r0 <<= 2;  /* 0C089D7C shll2 Rn */
	IF(0x0C089D7Eu); r7 = R32(r0 + r2); UPD(0x0C089D80u, 2);  /* 0C089D7E mov.l @(r0,Rm),Rn */
	r15 += 0xFFFFFFECu;  /* 0C089D80 add #imm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C089D84u, 2);  /* 0C089D82 mov.l @(disp,Rm),Rn */
	r0 = 0xB0u; UPD(0x0C089D86u, 1);  /* 0C089D84 mov.w @(disp,pc),Rn */
	r6 += r7;  /* 0C089D86 add Rm,Rn */
	IF(0x0C089D88u); r3 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C089D8Au, 2);  /* 0C089D88 mov.b @(r0,Rm),Rn */
	r7 = R32(r9 + 0x28u); UPD(0x0C089D8Cu, 1);  /* 0C089D8A mov.l @(disp,Rm),Rn */
	r11 = r3 & 0xFF;  /* 0C089D8C extu.b Rm,Rn */
	W32(r15, r11); UPD(0x0C089D90u, 2);  /* 0C089D8E mov.l Rm,@Rn */
	r5 = 0xE0000u; UPD(0x0C089D92u, 1);  /* 0C089D90 mov.l @(disp,pc),Rn */
	r4 = (u32)(s32)(s8)R8(r10); UPD(0x0C089D94u, 1);  /* 0C089D92 mov.b @Rm,Rn */
	r7 += r5;  /* 0C089D94 add Rm,Rn */
	r2 = 0xC000u; UPD(0x0C089D98u, 2);  /* 0C089D96 mov.l @(disp,pc),Rn */
	r0 = r4 & 0xFF;  /* 0C089D98 extu.b Rm,Rn */
	r5 = 0x6000u; UPD(0x0C089D9Cu, 2);  /* 0C089D9A mov.w @(disp,pc),Rn */
	r3 = 0x808080u; UPD(0x0C089D9Eu, 1);  /* 0C089D9C mov.l @(disp,pc),Rn */
	W32(r15 + 0xCu, r5); UPD(0x0C089DA0u, 1);  /* 0C089D9E mov.l Rm,@(disp,Rn) */
	W32(r15 + 0x4u, r0); UPD(0x0C089DA2u, 1);  /* 0C089DA0 mov.l Rm,@(disp,Rn) */
	r5 = 0x7u;  /* 0C089DA2 mov #imm,Rn */
	W32(r15 + 0x8u, r2); UPD(0x0C089DA6u, 2);  /* 0C089DA4 mov.l Rm,@(disp,Rn) */
	W32(r15 + 0x10u, r3); UPD(0x0C089DA8u, 1);  /* 0C089DA6 mov.l Rm,@(disp,Rn) */
	r11 = 0xC0BEEF0u; UPD(0x0C089DAAu, 1);  /* 0C089DA8 mov.l @(disp,pc),Rn */
	IF(0x0C089DAAu); { u32 t_ = r11; PR = 0x0C089DAEu; r4 = R32(r9); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BEEF0, 0x0C0BEEF0u, 0x0C089DAEu); }  /* 0C089DAA jsr @Rn */
L_0C089DAE: BLKS(0x0C089DAEu);
	r4 = r8;  /* 0C089DAE mov Rm,Rn */
	r4 += 0x1u;  /* 0C089DB0 add #imm,Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C089DB2 exts.w Rm,Rn */
	r0 = 0x2u;  /* 0C089DB4 mov #imm,Rn */
	T = (s32)r8 > (s32)r0;  /* 0C089DB6 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x14u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C089D78u, 8); goto L_0C089D78; } UPD(0x0C089DBCu, 1); goto L_0C089DBC; }  /* 0C089DB8 bf/s */
L_0C089DBC: BLKS(0x0C089DBCu);
	{ IF(0x0C089DBEu); ; /* slot nop */ UPD(0x0C089A5Cu, 3); goto L_0C089A5C; }  /* 0C089DBC bra */
L_0C089E00: BLKS(0x0C089E00u);
	r9 = 0xB4u; UPD(0x0C089E02u, 1);  /* 0C089E00 mov.w @(disp,pc),Rn */
	IF(0x0C089E02u); MACL = r4 * r9;  /* 0C089E02 mul.l Rm,Rn */
	r10 = 0xC286578u; UPD(0x0C089E06u, 3);  /* 0C089E04 mov.l @(disp,pc),Rn */
	IF(0x0C089E06u); r2 = MACL;  /* 0C089E06 sts macl,Rn */
	r3 = 0x99u; UPD(0x0C089E0Au, 2);  /* 0C089E08 mov.w @(disp,pc),Rn */
	r2 += r10;  /* 0C089E0A add Rm,Rn */
	r3 += r2;  /* 0C089E0C add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r3); UPD(0x0C089E10u, 3);  /* 0C089E0E mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C089E10 add #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C089E12 extu.b Rm,Rn */
	T = r0 == 0x4u;  /* 0C089E14 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r3, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C089DBCu, 6); goto L_0C089DBC; } UPD(0x0C089E1Au, 1); goto L_0C089E1A; }  /* 0C089E16 bf/s */
L_0C089E1A: BLKS(0x0C089E1Au);
	r8 = 0x0u;  /* 0C089E1A mov #imm,Rn */
	W8(r3, r8); UPD(0x0C089E1Eu, 2);  /* 0C089E1C mov.b Rm,@Rn */
	r9 = r2;  /* 0C089E1E mov Rm,Rn */
	r10 = 0xA9u; UPD(0x0C089E22u, 2);  /* 0C089E20 mov.w @(disp,pc),Rn */
	r8 = 0x0u;  /* 0C089E22 mov #imm,Rn */
	r10 += r2;  /* 0C089E24 add Rm,Rn */
	IF(0x0C089E26u); ;  /* 0C089E26 nop */
	UPD(0x0C089E28u, 3);
L_0C089E28: BLKS(0x0C089E28u);
	r0 = r8;  /* 0C089E28 mov Rm,Rn */
	r5 = 0xC19C584u; UPD(0x0C089E2Cu, 2);  /* 0C089E2A mov.l @(disp,pc),Rn */
	IF(0x0C089E2Cu); r0 <<= 2;  /* 0C089E2C shll2 Rn */
	IF(0x0C089E2Eu); r3 = R32(r0 + r5); UPD(0x0C089E30u, 2);  /* 0C089E2E mov.l @(r0,Rm),Rn */
	r15 += 0xFFFFFFECu;  /* 0C089E30 add #imm,Rn */
	r0 = 0xB0u; UPD(0x0C089E34u, 2);  /* 0C089E32 mov.w @(disp,pc),Rn */
	IF(0x0C089E34u); r4 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C089E36u, 1);  /* 0C089E34 mov.b @(r0,Rm),Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C089E38u, 1);  /* 0C089E36 mov.l @(disp,Rm),Rn */
	r11 = r4 & 0xFF;  /* 0C089E38 extu.b Rm,Rn */
	r7 = R32(r9 + 0x28u); UPD(0x0C089E3Cu, 2);  /* 0C089E3A mov.l @(disp,Rm),Rn */
	W32(r15, r11); UPD(0x0C089E3Eu, 1);  /* 0C089E3C mov.l Rm,@Rn */
	r7 += r3;  /* 0C089E3E add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r10); UPD(0x0C089E42u, 2);  /* 0C089E40 mov.b @Rm,Rn */
	r5 = 0x8000u; UPD(0x0C089E44u, 1);  /* 0C089E42 mov.l @(disp,pc),Rn */
	r2 = r0 & 0xFF;  /* 0C089E44 extu.b Rm,Rn */
	r3 = 0x4000u; UPD(0x0C089E48u, 2);  /* 0C089E46 mov.w @(disp,pc),Rn */
	r4 = 0x808080u; UPD(0x0C089E4Au, 1);  /* 0C089E48 mov.l @(disp,pc),Rn */
	r11 = 0xC0BEEF0u; UPD(0x0C089E4Cu, 1);  /* 0C089E4A mov.l @(disp,pc),Rn */
	W32(r15 + 0x8u, r5); UPD(0x0C089E4Eu, 1);  /* 0C089E4C mov.l Rm,@(disp,Rn) */
	W32(r15 + 0x4u, r2); UPD(0x0C089E50u, 1);  /* 0C089E4E mov.l Rm,@(disp,Rn) */
	r5 = 0x5u;  /* 0C089E50 mov #imm,Rn */
	W32(r15 + 0xCu, r3); UPD(0x0C089E54u, 2);  /* 0C089E52 mov.l Rm,@(disp,Rn) */
	W32(r15 + 0x10u, r4); UPD(0x0C089E56u, 1);  /* 0C089E54 mov.l Rm,@(disp,Rn) */
	IF(0x0C089E56u); { u32 t_ = r11; PR = 0x0C089E5Au; r4 = R32(r9); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BEEF0, 0x0C0BEEF0u, 0x0C089E5Au); }  /* 0C089E56 jsr @Rn */
L_0C089E5A: BLKS(0x0C089E5Au);
	r0 = r8;  /* 0C089E5A mov Rm,Rn */
	r0 += 0x1u;  /* 0C089E5C add #imm,Rn */
	r8 = (u32)(s32)(s16)r0;  /* 0C089E5E exts.w Rm,Rn */
	r6 = 0x1u;  /* 0C089E60 mov #imm,Rn */
	T = (s32)r8 > (s32)r6;  /* 0C089E62 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x14u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C089E28u, 8); goto L_0C089E28; } UPD(0x0C089E68u, 1); goto L_0C089E68; }  /* 0C089E64 bf/s */
L_0C089E68: BLKS(0x0C089E68u);
	{ IF(0x0C089E6Au); ; /* slot nop */ UPD(0x0C089A5Cu, 3); goto L_0C089A5C; }  /* 0C089E68 bra */
L_0C089E70: BLKS(0x0C089E70u);
	r9 = 0xC0A9CB0u; UPD(0x0C089E72u, 1);  /* 0C089E70 mov.l @(disp,pc),Rn */
	IF(0x0C089E72u); { u32 t_ = r9; PR = 0x0C089E76u; IF(0x0C089E74u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9CB0, 0x0C0A9CB0u, 0x0C089E76u); }  /* 0C089E72 jsr @Rn */
L_0C089E76: BLKS(0x0C089E76u);
	r1 = R32(r8 + 0x8u); UPD(0x0C089E78u, 1);  /* 0C089E76 mov.l @(disp,Rm),Rn */
	r3 = 0x1u;  /* 0C089E78 mov #imm,Rn */
	T = r1 > r3;  /* 0C089E7A cmp/hi Rm,Rn */
	if (T) { UPD(0x0C089E68u, 5); goto L_0C089E68; }  /* 0C089E7C bt */
L_0C089E7E: BLKS(0x0C089E7Eu);
	r5 = 0x10u;  /* 0C089E7E mov #imm,Rn */
	r4 = 0xC2B07FCu; UPD(0x0C089E82u, 2);  /* 0C089E80 mov.l @(disp,pc),Rn */
	{ W32(r4, r5); /* slot mov.l Rm,@Rn */ UPD(0x0C089A5Cu, 3); goto L_0C089A5C; }  /* 0C089E82 bra */
}

void blk_f_0C089EB0(sh3_t *c)
{
	LOCALS;
L_0C089EB0: BLKS(0x0C089EB0u);
	r3 = 0xB4u; UPD(0x0C089EB2u, 1);  /* 0C089EB0 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C089EB2 exts.w Rm,Rn */
	IF(0x0C089EB4u); MACL = r4 * r3;  /* 0C089EB4 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C089EB8u, 4);  /* 0C089EB6 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C089EBAu, 1);  /* 0C089EB8 mov.l Rm,@-Rn */
	IF(0x0C089EBAu); r2 = MACL;  /* 0C089EBA sts macl,Rn */
	r0 += r2;  /* 0C089EBC add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C089EC0u, 3);  /* 0C089EBE mov.l @(disp,Rm),Rn */
	r0 = 0x8u;  /* 0C089EC0 mov #imm,Rn */
	T = r2 > r0;  /* 0C089EC2 cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C089F90u, 5); goto L_0C089F90; } goto L_0C089EC8; }  /* 0C089EC4 bt/s */
L_0C089EC8: BLKS(0x0C089EC8u);
	r0 = 0xC089ED8u;  /* 0C089EC8 mova @(disp,pc),r0 */
	IF(0x0C089ECAu); r5 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C089ECCu, 3);  /* 0C089ECA mov.b @(r0,Rm),Rn */
	r5 = r5 & 0xFF;  /* 0C089ECC extu.b Rm,Rn */
	IF(0x0C089ECEu); { u32 tv_ = (r5 + 0x0C089ED2u); u32 t_ = PHYS(tv_); IF(0x0C089ED0u); ; /* slot nop */ JRGN(tv_); UPD(t_, 4); switch (t_) { case 0x0C089EF0u: goto L_0C089EF0; case 0x0C089F20u: goto L_0C089F20; case 0x0C089F30u: goto L_0C089F30; case 0x0C089F40u: goto L_0C089F40; case 0x0C089F50u: goto L_0C089F50; case 0x0C089F70u: goto L_0C089F70; case 0x0C089F80u: goto L_0C089F80; default: JUMPD(tv_); } }  /* 0C089ECE braf Rn */
L_0C089EF0: BLKS(0x0C089EF0u);
	r7 = 0xB4u; UPD(0x0C089EF2u, 1);  /* 0C089EF0 mov.w @(disp,pc),Rn */
	IF(0x0C089EF2u); MACL = r4 * r7;  /* 0C089EF2 mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C089EF6u, 3);  /* 0C089EF4 mov.l @(disp,pc),Rn */
	IF(0x0C089EF6u); r0 = MACL;  /* 0C089EF6 sts macl,Rn */
	IF(0x0C089EF8u); r0 = R32(r0 + r6); UPD(0x0C089EFAu, 2);  /* 0C089EF8 mov.l @(r0,Rm),Rn */
	IF(0x0C089EFAu); r0 >>= 16;  /* 0C089EFA shlr16 Rn */
	IF(0x0C089EFCu); r0 >>= 8;  /* 0C089EFC shlr8 Rn */
	IF(0x0C089EFEu); r0 >>= 2;  /* 0C089EFE shlr2 Rn */
	r0 &= 0x1u;  /* 0C089F00 and #imm,r0 */
	r5 = 0xC19C58Cu; UPD(0x0C089F04u, 5);  /* 0C089F02 mov.l @(disp,pc),Rn */
	T = r0 == 0x1u;  /* 0C089F04 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C089F0Cu, 4); goto L_0C089F0C; }  /* 0C089F06 bt */
L_0C089F08: BLKS(0x0C089F08u);
	r5 = 0xC19C66Eu; UPD(0x0C089F0Au, 1);  /* 0C089F08 mov.l @(disp,pc),Rn */
	IF(0x0C089F0Au); ;  /* 0C089F0A nop */
	UPD(0x0C089F0Cu, 1);
L_0C089F0C: BLKS(0x0C089F0Cu);
	r3 = 0xC0A9D90u; UPD(0x0C089F0Eu, 1);  /* 0C089F0C mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C089F0E mov Rm,Rn */
	IF(0x0C089F10u); { u32 tv_ = r3; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0A9D90u: TAIL(blk_f_0C0A9D90); default: JUMPD(tv_); } }  /* 0C089F10 jmp @Rn */
L_0C089F20: BLKS(0x0C089F20u);
	r5 = 0xC19C6D0u; UPD(0x0C089F22u, 1);  /* 0C089F20 mov.l @(disp,pc),Rn */
	{ IF(0x0C089F24u); ; /* slot nop */ UPD(0x0C089F0Cu, 3); goto L_0C089F0C; }  /* 0C089F22 bra */
L_0C089F30: BLKS(0x0C089F30u);
	r5 = 0xC19C6FCu; UPD(0x0C089F32u, 1);  /* 0C089F30 mov.l @(disp,pc),Rn */
	{ IF(0x0C089F34u); ; /* slot nop */ UPD(0x0C089F0Cu, 3); goto L_0C089F0C; }  /* 0C089F32 bra */
L_0C089F40: BLKS(0x0C089F40u);
	r5 = 0xC19C728u; UPD(0x0C089F42u, 1);  /* 0C089F40 mov.l @(disp,pc),Rn */
	{ IF(0x0C089F44u); ; /* slot nop */ UPD(0x0C089F0Cu, 3); goto L_0C089F0C; }  /* 0C089F42 bra */
L_0C089F50: BLKS(0x0C089F50u);
	r0 = 0xB4u; UPD(0x0C089F52u, 1);  /* 0C089F50 mov.w @(disp,pc),Rn */
	IF(0x0C089F52u); MACL = r4 * r0;  /* 0C089F52 mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C089F56u, 3);  /* 0C089F54 mov.l @(disp,pc),Rn */
	IF(0x0C089F56u); r0 = MACL;  /* 0C089F56 sts macl,Rn */
	IF(0x0C089F58u); r0 = R32(r0 + r2); UPD(0x0C089F5Au, 2);  /* 0C089F58 mov.l @(r0,Rm),Rn */
	IF(0x0C089F5Au); r0 >>= 16;  /* 0C089F5A shlr16 Rn */
	IF(0x0C089F5Cu); r0 >>= 8;  /* 0C089F5C shlr8 Rn */
	IF(0x0C089F5Eu); r0 >>= 2;  /* 0C089F5E shlr2 Rn */
	r0 &= 0x1u;  /* 0C089F60 and #imm,r0 */
	r5 = 0xC19C79Eu; UPD(0x0C089F64u, 5);  /* 0C089F62 mov.l @(disp,pc),Rn */
	T = r0 == 0x1u;  /* 0C089F64 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C089F0Cu, 4); goto L_0C089F0C; }  /* 0C089F66 bt */
L_0C089F68: BLKS(0x0C089F68u);
	r5 = 0xC19C772u; UPD(0x0C089F6Au, 1);  /* 0C089F68 mov.l @(disp,pc),Rn */
	{ IF(0x0C089F6Cu); ; /* slot nop */ UPD(0x0C089F0Cu, 3); goto L_0C089F0C; }  /* 0C089F6A bra */
L_0C089F70: BLKS(0x0C089F70u);
	r5 = 0xC19C754u; UPD(0x0C089F72u, 1);  /* 0C089F70 mov.l @(disp,pc),Rn */
	{ IF(0x0C089F74u); ; /* slot nop */ UPD(0x0C089F0Cu, 3); goto L_0C089F0C; }  /* 0C089F72 bra */
L_0C089F80: BLKS(0x0C089F80u);
	r5 = 0xC19C7E2u; UPD(0x0C089F82u, 1);  /* 0C089F80 mov.l @(disp,pc),Rn */
	{ IF(0x0C089F84u); ; /* slot nop */ UPD(0x0C089F0Cu, 3); goto L_0C089F0C; }  /* 0C089F82 bra */
L_0C089F90: BLKS(0x0C089F90u);
	r15 = r14;  /* 0C089F90 mov Rm,Rn */
	IF(0x0C089F92u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C089F92 rts */
}

void blk_f_0C089FD0(sh3_t *c)
{
	LOCALS;
L_0C089FD0: BLKS(0x0C089FD0u);
	r3 = 0xB4u; UPD(0x0C089FD2u, 1);  /* 0C089FD0 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C089FD2 exts.w Rm,Rn */
	IF(0x0C089FD4u); MACL = r4 * r3;  /* 0C089FD4 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C089FD8u, 4);  /* 0C089FD6 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C089FDAu, 1);  /* 0C089FD8 mov.l Rm,@-Rn */
	IF(0x0C089FDAu); r2 = MACL;  /* 0C089FDA sts macl,Rn */
	r0 += r2;  /* 0C089FDC add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C089FE0u, 3);  /* 0C089FDE mov.l @(disp,Rm),Rn */
	r0 = 0x3u;  /* 0C089FE0 mov #imm,Rn */
	T = r2 > r0;  /* 0C089FE2 cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C08A060u, 5); goto L_0C08A060; } goto L_0C089FE8; }  /* 0C089FE4 bt/s */
L_0C089FE8: BLKS(0x0C089FE8u);
	r0 = 0xC089FF0u;  /* 0C089FE8 mova @(disp,pc),r0 */
	IF(0x0C089FEAu); r5 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C089FECu, 3);  /* 0C089FEA mov.b @(r0,Rm),Rn */
	IF(0x0C089FECu); { u32 tv_ = (r5 + 0x0C089FF0u); u32 t_ = PHYS(tv_); IF(0x0C089FEEu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C08A000u: goto L_0C08A000; case 0x0C08A010u: goto L_0C08A010; case 0x0C08A020u: goto L_0C08A020; case 0x0C08A040u: goto L_0C08A040; default: JUMPD(tv_); } }  /* 0C089FEC braf Rn */
L_0C08A000: BLKS(0x0C08A000u);
	r5 = 0xC19D6CCu; UPD(0x0C08A002u, 1);  /* 0C08A000 mov.l @(disp,pc),Rn */
L_0C08A002: BLKS(0x0C08A002u);
	r2 = 0xC0A9D90u; UPD(0x0C08A004u, 1);  /* 0C08A002 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C08A004 mov Rm,Rn */
	IF(0x0C08A006u); { u32 tv_ = r2; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0A9D90u: TAIL(blk_f_0C0A9D90); default: JUMPD(tv_); } }  /* 0C08A006 jmp @Rn */
L_0C08A010: BLKS(0x0C08A010u);
	r5 = 0xC19D70Cu; UPD(0x0C08A012u, 1);  /* 0C08A010 mov.l @(disp,pc),Rn */
	{ IF(0x0C08A014u); ; /* slot nop */ UPD(0x0C08A002u, 3); goto L_0C08A002; }  /* 0C08A012 bra */
L_0C08A020: BLKS(0x0C08A020u);
	r0 = 0xB4u; UPD(0x0C08A022u, 1);  /* 0C08A020 mov.w @(disp,pc),Rn */
	IF(0x0C08A022u); MACL = r4 * r0;  /* 0C08A022 mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C08A026u, 3);  /* 0C08A024 mov.l @(disp,pc),Rn */
	IF(0x0C08A026u); r0 = MACL;  /* 0C08A026 sts macl,Rn */
	IF(0x0C08A028u); r7 = R32(r0 + r2); UPD(0x0C08A02Au, 2);  /* 0C08A028 mov.l @(r0,Rm),Rn */
	r6 = 0x4000000u; UPD(0x0C08A02Cu, 1);  /* 0C08A02A mov.l @(disp,pc),Rn */
	r5 = 0xC19D74Cu; UPD(0x0C08A02Eu, 1);  /* 0C08A02C mov.l @(disp,pc),Rn */
	T = (r7 & r6) == 0;  /* 0C08A02E tst Rm,Rn */
	if (T) { UPD(0x0C08A002u, 4); goto L_0C08A002; }  /* 0C08A030 bt */
L_0C08A032: BLKS(0x0C08A032u);
	r5 = 0xC19D764u; UPD(0x0C08A034u, 1);  /* 0C08A032 mov.l @(disp,pc),Rn */
	{ IF(0x0C08A036u); ; /* slot nop */ UPD(0x0C08A002u, 3); goto L_0C08A002; }  /* 0C08A034 bra */
L_0C08A040: BLKS(0x0C08A040u);
	r7 = 0xB4u; UPD(0x0C08A042u, 1);  /* 0C08A040 mov.w @(disp,pc),Rn */
	IF(0x0C08A042u); MACL = r4 * r7;  /* 0C08A042 mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C08A046u, 3);  /* 0C08A044 mov.l @(disp,pc),Rn */
	IF(0x0C08A046u); r0 = MACL;  /* 0C08A046 sts macl,Rn */
	IF(0x0C08A048u); r5 = R32(r0 + r6); UPD(0x0C08A04Au, 2);  /* 0C08A048 mov.l @(r0,Rm),Rn */
	r3 = 0x4000000u; UPD(0x0C08A04Cu, 1);  /* 0C08A04A mov.l @(disp,pc),Rn */
	T = (r5 & r3) == 0;  /* 0C08A04C tst Rm,Rn */
	r5 = 0xC19D77Cu; UPD(0x0C08A050u, 2);  /* 0C08A04E mov.l @(disp,pc),Rn */
	if (T) { UPD(0x0C08A002u, 3); goto L_0C08A002; }  /* 0C08A050 bt */
L_0C08A052: BLKS(0x0C08A052u);
	r5 = 0xC19D794u; UPD(0x0C08A054u, 1);  /* 0C08A052 mov.l @(disp,pc),Rn */
	{ IF(0x0C08A056u); ; /* slot nop */ UPD(0x0C08A002u, 3); goto L_0C08A002; }  /* 0C08A054 bra */
L_0C08A060: BLKS(0x0C08A060u);
	r15 = r14;  /* 0C08A060 mov Rm,Rn */
	IF(0x0C08A062u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C08A062 rts */
}

void blk_f_0C08A090(sh3_t *c)
{
	LOCALS;
L_0C08A090: BLKS(0x0C08A090u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C08A092u, 1);  /* 0C08A090 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C08A094u, 1);  /* 0C08A092 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C08A094 exts.w Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C08A098u, 2);  /* 0C08A096 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C08A09Au, 1);  /* 0C08A098 mov.l Rm,@-Rn */
	r2 = 0xB4u; UPD(0x0C08A09Cu, 1);  /* 0C08A09A mov.w @(disp,pc),Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C08A09Eu, 1);  /* 0C08A09C mov.l Rm,@-Rn */
	IF(0x0C08A09Eu); MACL = r8 * r2;  /* 0C08A09E mul.l Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C08A0A2u, 3);  /* 0C08A0A0 mov.l Rm,@-Rn */
	r0 = 0xC286578u; UPD(0x0C08A0A4u, 1);  /* 0C08A0A2 mov.l @(disp,pc),Rn */
	IF(0x0C08A0A4u); r10 = MACL;  /* 0C08A0A4 sts macl,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C08A0A8u, 2);  /* 0C08A0A6 mov.l Rm,@-Rn */
	r10 += r0;  /* 0C08A0A8 add Rm,Rn */
	IF(0x0C08A0AAu); r15 -= 4; W32(r15, PR); UPD(0x0C08A0ACu, 2);  /* 0C08A0AA sts.l pr,@-Rn */
	r10 += 0x3Cu;  /* 0C08A0AC add #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r10); UPD(0x0C08A0B0u, 2);  /* 0C08A0AE mov.w @Rm,Rn */
	r14 = r15;  /* 0C08A0B0 mov Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C08A0B2 tst Rm,Rn */
	{ u32 c_ = !T; r10 += 0xFFFFFFC4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C08A0BCu, 5); goto L_0C08A0BC; } goto L_0C08A0B8; }  /* 0C08A0B4 bf/s */
L_0C08A0B8: BLKS(0x0C08A0B8u);
	{ IF(0x0C08A0BAu); ; /* slot nop */ UPD(0x0C08A240u, 4); goto L_0C08A240; }  /* 0C08A0B8 bra */
L_0C08A0BC: BLKS(0x0C08A0BCu);
	r9 = 0xC0A9DE0u; UPD(0x0C08A0BEu, 1);  /* 0C08A0BC mov.l @(disp,pc),Rn */
	IF(0x0C08A0BEu); { u32 t_ = r9; PR = 0x0C08A0C2u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9DE0, 0x0C0A9DE0u, 0x0C08A0C2u); }  /* 0C08A0BE jsr @Rn */
L_0C08A0C2: BLKS(0x0C08A0C2u);
	T = (r0 & r0) == 0;  /* 0C08A0C2 tst Rm,Rn */
	{ u32 c_ = T; r9 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C08A160u, 4); goto L_0C08A160; } goto L_0C08A0C8; }  /* 0C08A0C4 bt/s */
L_0C08A0C8: BLKS(0x0C08A0C8u);
	r4 = 0x9Cu; UPD(0x0C08A0CAu, 2);  /* 0C08A0C8 mov.w @(disp,pc),Rn */
	r1 = 0xAu;  /* 0C08A0CA mov #imm,Rn */
	r4 += r10;  /* 0C08A0CC add Rm,Rn */
	W8(r4, r1); UPD(0x0C08A0D0u, 3);  /* 0C08A0CE mov.b Rm,@Rn */
	r3 = 0x3u;  /* 0C08A0D0 mov #imm,Rn */
	r4 += 0x1u;  /* 0C08A0D2 add #imm,Rn */
	r2 = R32(r10 + 0x8u); UPD(0x0C08A0D6u, 3);  /* 0C08A0D4 mov.l @(disp,Rm),Rn */
	T = r2 > r3;  /* 0C08A0D6 cmp/hi Rm,Rn */
	{ u32 c_ = T; W8(r4, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C08A140u, 4); goto L_0C08A140; } UPD(0x0C08A0DCu, 1); goto L_0C08A0DC; }  /* 0C08A0D8 bt/s */
L_0C08A0DC: BLKS(0x0C08A0DCu);
	r0 = 0xC08A0E4u;  /* 0C08A0DC mova @(disp,pc),r0 */
	IF(0x0C08A0DEu); r5 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C08A0E0u, 2);  /* 0C08A0DE mov.b @(r0,Rm),Rn */
	IF(0x0C08A0E0u); { u32 tv_ = (r5 + 0x0C08A0E4u); u32 t_ = PHYS(tv_); IF(0x0C08A0E2u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C08A0F0u: goto L_0C08A0F0; case 0x0C08A110u: goto L_0C08A110; case 0x0C08A120u: goto L_0C08A120; case 0x0C08A130u: goto L_0C08A130; default: JUMPD(tv_); } }  /* 0C08A0E0 braf Rn */
L_0C08A0F0: BLKS(0x0C08A0F0u);
	r5 = 0xC19D962u; UPD(0x0C08A0F2u, 1);  /* 0C08A0F0 mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C08A0F2 mov Rm,Rn */
	UPD(0x0C08A0F4u, 1);
L_0C08A0F4: BLKS(0x0C08A0F4u);
	r6 = 0xC0A9D90u; UPD(0x0C08A0F6u, 1);  /* 0C08A0F4 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C08A0F6 mov Rm,Rn */
	IF(0x0C08A0F8u); PR = R32(r15); r15 += 4; UPD(0x0C08A0FAu, 2);  /* 0C08A0F8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08A0FCu, 1);  /* 0C08A0FA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08A0FEu, 1);  /* 0C08A0FC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08A100u, 1);  /* 0C08A0FE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08A102u, 1);  /* 0C08A100 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08A104u, 1);  /* 0C08A102 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08A106u, 1);  /* 0C08A104 mov.l @Rm+,Rn */
	IF(0x0C08A106u); { u32 tv_ = r6; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A9D90u: TAIL(blk_f_0C0A9D90); default: JUMPD(tv_); } }  /* 0C08A106 jmp @Rn */
L_0C08A110: BLKS(0x0C08A110u);
	r5 = 0xC19D9A8u; UPD(0x0C08A112u, 1);  /* 0C08A110 mov.l @(disp,pc),Rn */
	{ r4 = r8; /* slot mov Rm,Rn */ UPD(0x0C08A0F4u, 3); goto L_0C08A0F4; }  /* 0C08A112 bra */
L_0C08A120: BLKS(0x0C08A120u);
	r5 = 0xC19D9EEu; UPD(0x0C08A122u, 1);  /* 0C08A120 mov.l @(disp,pc),Rn */
	{ r4 = r8; /* slot mov Rm,Rn */ UPD(0x0C08A0F4u, 3); goto L_0C08A0F4; }  /* 0C08A122 bra */
L_0C08A130: BLKS(0x0C08A130u);
	r5 = 0xC19DA34u; UPD(0x0C08A132u, 1);  /* 0C08A130 mov.l @(disp,pc),Rn */
	{ r4 = r8; /* slot mov Rm,Rn */ UPD(0x0C08A0F4u, 3); goto L_0C08A0F4; }  /* 0C08A132 bra */
L_0C08A140: BLKS(0x0C08A140u);
	r15 = r14;  /* 0C08A140 mov Rm,Rn */
	IF(0x0C08A142u); PR = R32(r15); r15 += 4; UPD(0x0C08A144u, 2);  /* 0C08A142 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08A146u, 1);  /* 0C08A144 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08A148u, 1);  /* 0C08A146 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08A14Au, 1);  /* 0C08A148 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08A14Cu, 1);  /* 0C08A14A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08A14Eu, 1);  /* 0C08A14C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08A150u, 1);  /* 0C08A14E mov.l @Rm+,Rn */
	IF(0x0C08A150u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08A150 rts */
L_0C08A160: BLKS(0x0C08A160u);
	r8 = 0x9Cu; UPD(0x0C08A162u, 1);  /* 0C08A160 mov.w @(disp,pc),Rn */
	r8 += r10;  /* 0C08A162 add Rm,Rn */
	r11 = r8;  /* 0C08A164 mov Rm,Rn */
	r11 += 0x3u;  /* 0C08A166 add #imm,Rn */
	r7 = (u32)(s32)(s8)R8(r11); UPD(0x0C08A16Au, 4);  /* 0C08A168 mov.b @Rm,Rn */
	r0 = r7 & 0xFF;  /* 0C08A16A extu.b Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C08A16C tst Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x1u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C08A1D0u, 5); goto L_0C08A1D0; } goto L_0C08A172; }  /* 0C08A16E bt/s */
L_0C08A172: BLKS(0x0C08A172u);
	if (!T) { UPD(0x0C08A140u, 4); goto L_0C08A140; }  /* 0C08A172 bf */
L_0C08A174: BLKS(0x0C08A174u);
	r5 = R32(r10 + 0x8u); UPD(0x0C08A176u, 1);  /* 0C08A174 mov.l @(disp,Rm),Rn */
	r6 = 0x3u;  /* 0C08A176 mov #imm,Rn */
	IF(0x0C08A178u); ARG0(0x456Du); { s32 s_ = (s32)r6; if (s_ >= 0) r5 <<= (s_ & 31); else if ((s_ & 31) == 0) r5 = 0; else r5 >>= ((~s_ & 31) + 1); }  /* 0C08A178 shld Rm,Rn */
	r13 = 0xC19D938u; UPD(0x0C08A17Cu, 3);  /* 0C08A17A mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFECu;  /* 0C08A17C add #imm,Rn */
	r5 += r13;  /* 0C08A17E add Rm,Rn */
	r12 = R32(r5); UPD(0x0C08A182u, 3);  /* 0C08A180 mov.l @Rm,Rn */
	r13 = R32(r10 + 0x24u); UPD(0x0C08A184u, 1);  /* 0C08A182 mov.l @(disp,Rm),Rn */
	r0 = 0xB0u; UPD(0x0C08A186u, 1);  /* 0C08A184 mov.w @(disp,pc),Rn */
	r13 += r12;  /* 0C08A186 add Rm,Rn */
	IF(0x0C08A188u); r2 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C08A18Au, 2);  /* 0C08A188 mov.b @(r0,Rm),Rn */
	r4 = R32(r5 + 0x4u); UPD(0x0C08A18Cu, 1);  /* 0C08A18A mov.l @(disp,Rm),Rn */
	r0 = r2 & 0xFF;  /* 0C08A18C extu.b Rm,Rn */
	r12 = R32(r10 + 0x28u); UPD(0x0C08A190u, 2);  /* 0C08A18E mov.l @(disp,Rm),Rn */
	W32(r15, r0); UPD(0x0C08A192u, 1);  /* 0C08A190 mov.l Rm,@Rn */
	r12 += r4;  /* 0C08A192 add Rm,Rn */
	r3 = 0xA9u; UPD(0x0C08A196u, 2);  /* 0C08A194 mov.w @(disp,pc),Rn */
	r0 = r10;  /* 0C08A196 mov Rm,Rn */
	IF(0x0C08A198u); r7 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C08A19Au, 2);  /* 0C08A198 mov.b @(r0,Rm),Rn */
	r0 = 0xC062780u; UPD(0x0C08A19Cu, 1);  /* 0C08A19A mov.l @(disp,pc),Rn */
	r6 = r7 & 0xFF;  /* 0C08A19C extu.b Rm,Rn */
	r5 = 0x40000u; UPD(0x0C08A1A0u, 2);  /* 0C08A19E mov.l @(disp,pc),Rn */
	r4 = 0x8000u; UPD(0x0C08A1A2u, 1);  /* 0C08A1A0 mov.l @(disp,pc),Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C08A1A4u, 1);  /* 0C08A1A2 mov.l Rm,@(disp,Rn) */
	IF(0x0C08A1A4u); { u32 t_ = r0; PR = 0x0C08A1A8u; W32(r15 + 0x8u, r5); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C08A1A8u); }  /* 0C08A1A4 jsr @Rn */
L_0C08A1A8: BLKS(0x0C08A1A8u);
	r4 = 0x808080u; UPD(0x0C08A1AAu, 1);  /* 0C08A1A8 mov.l @(disp,pc),Rn */
	r5 = 0x7u;  /* 0C08A1AA mov #imm,Rn */
	W32(r15 + 0xCu, r0); UPD(0x0C08A1AEu, 2);  /* 0C08A1AC mov.l Rm,@(disp,Rn) */
	r6 = r13;  /* 0C08A1AE mov Rm,Rn */
	W32(r15 + 0x10u, r4); UPD(0x0C08A1B2u, 2);  /* 0C08A1B0 mov.l Rm,@(disp,Rn) */
	r4 = R32(r10); UPD(0x0C08A1B4u, 1);  /* 0C08A1B2 mov.l @Rm,Rn */
	r10 = 0xC0BEEF0u; UPD(0x0C08A1B6u, 1);  /* 0C08A1B4 mov.l @(disp,pc),Rn */
	IF(0x0C08A1B6u); { u32 t_ = r10; PR = 0x0C08A1BAu; r7 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BEEF0, 0x0C0BEEF0u, 0x0C08A1BAu); }  /* 0C08A1B6 jsr @Rn */
L_0C08A1BA: BLKS(0x0C08A1BAu);
	r1 = (u32)(s32)(s8)R8(r8); UPD(0x0C08A1BCu, 1);  /* 0C08A1BA mov.b @Rm,Rn */
	r15 += 0x14u;  /* 0C08A1BC add #imm,Rn */
	r1 += 0x1u;  /* 0C08A1BE add #imm,Rn */
	r0 = r1 & 0xFF;  /* 0C08A1C0 extu.b Rm,Rn */
	T = r0 == 0x78u;  /* 0C08A1C2 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r8, r1); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C08A140u, 7); goto L_0C08A140; } UPD(0x0C08A1C8u, 1); goto L_0C08A1C8; }  /* 0C08A1C4 bf/s */
L_0C08A1C8: BLKS(0x0C08A1C8u);
	W8(r8, r9); UPD(0x0C08A1CAu, 1);  /* 0C08A1C8 mov.b Rm,@Rn */
	W8(r11, r9); UPD(0x0C08A1CCu, 1);  /* 0C08A1CA mov.b Rm,@Rn */
L_0C08A1CC: BLKS(0x0C08A1CCu);
	{ IF(0x0C08A1CEu); ; /* slot nop */ UPD(0x0C08A140u, 3); goto L_0C08A140; }  /* 0C08A1CC bra */
L_0C08A1D0: BLKS(0x0C08A1D0u);
	r1 = 0x99u; UPD(0x0C08A1D2u, 1);  /* 0C08A1D0 mov.w @(disp,pc),Rn */
	r1 += r10;  /* 0C08A1D2 add Rm,Rn */
	r12 = (u32)(s32)(s8)R8(r1); UPD(0x0C08A1D6u, 2);  /* 0C08A1D4 mov.b @Rm,Rn */
	r12 += 0x1u;  /* 0C08A1D6 add #imm,Rn */
	r0 = r12 & 0xFF;  /* 0C08A1D8 extu.b Rm,Rn */
	T = r0 == 0x8u;  /* 0C08A1DA cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r1, r12); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C08A140u, 6); goto L_0C08A140; } UPD(0x0C08A1E0u, 1); goto L_0C08A1E0; }  /* 0C08A1DC bf/s */
L_0C08A1E0: BLKS(0x0C08A1E0u);
	r3 = R32(r10 + 0x8u); UPD(0x0C08A1E2u, 1);  /* 0C08A1E0 mov.l @(disp,Rm),Rn */
	r2 = 0x3u;  /* 0C08A1E2 mov #imm,Rn */
	IF(0x0C08A1E4u); ARG0(0x432Du); { s32 s_ = (s32)r2; if (s_ >= 0) r3 <<= (s_ & 31); else if ((s_ & 31) == 0) r3 = 0; else r3 >>= ((~s_ & 31) + 1); }  /* 0C08A1E4 shld Rm,Rn */
	r13 = 0xC19D938u; UPD(0x0C08A1E8u, 3);  /* 0C08A1E6 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFECu;  /* 0C08A1E8 add #imm,Rn */
	W8(r1, r9); UPD(0x0C08A1ECu, 2);  /* 0C08A1EA mov.b Rm,@Rn */
	r3 += r13;  /* 0C08A1EC add Rm,Rn */
	r12 = R32(r3); UPD(0x0C08A1F0u, 2);  /* 0C08A1EE mov.l @Rm,Rn */
	r13 = R32(r10 + 0x24u); UPD(0x0C08A1F2u, 1);  /* 0C08A1F0 mov.l @(disp,Rm),Rn */
	r13 += r12;  /* 0C08A1F2 add Rm,Rn */
	r0 = R32(r3 + 0x4u); UPD(0x0C08A1F6u, 2);  /* 0C08A1F4 mov.l @(disp,Rm),Rn */
	r12 = R32(r10 + 0x28u); UPD(0x0C08A1F8u, 1);  /* 0C08A1F6 mov.l @(disp,Rm),Rn */
	r12 += r0;  /* 0C08A1F8 add Rm,Rn */
	r0 = 0xB0u; UPD(0x0C08A1FCu, 2);  /* 0C08A1FA mov.w @(disp,pc),Rn */
	IF(0x0C08A1FCu); r7 = (u32)(s32)(s8)R8(r0 + r10); UPD(0x0C08A1FEu, 1);  /* 0C08A1FC mov.b @(r0,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C08A1FE extu.b Rm,Rn */
	W32(r15, r6); UPD(0x0C08A202u, 2);  /* 0C08A200 mov.l Rm,@Rn */
	r0 = r10;  /* 0C08A202 mov Rm,Rn */
	r5 = 0xA9u; UPD(0x0C08A206u, 2);  /* 0C08A204 mov.w @(disp,pc),Rn */
	IF(0x0C08A206u); r4 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C08A208u, 1);  /* 0C08A206 mov.b @(r0,Rm),Rn */
	r0 = 0xC062780u; UPD(0x0C08A20Au, 1);  /* 0C08A208 mov.l @(disp,pc),Rn */
	r3 = r4 & 0xFF;  /* 0C08A20A extu.b Rm,Rn */
	r2 = 0x10000u; UPD(0x0C08A20Eu, 2);  /* 0C08A20C mov.l @(disp,pc),Rn */
	W32(r15 + 0x4u, r3); UPD(0x0C08A210u, 1);  /* 0C08A20E mov.l Rm,@(disp,Rn) */
	r4 = 0x8000u; UPD(0x0C08A212u, 1);  /* 0C08A210 mov.l @(disp,pc),Rn */
	IF(0x0C08A212u); { u32 t_ = r0; PR = 0x0C08A216u; W32(r15 + 0x8u, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C08A216u); }  /* 0C08A212 jsr @Rn */
L_0C08A216: BLKS(0x0C08A216u);
	W32(r15 + 0xCu, r0); UPD(0x0C08A218u, 1);  /* 0C08A216 mov.l Rm,@(disp,Rn) */
	r6 = r13;  /* 0C08A218 mov Rm,Rn */
	r0 = 0x808080u; UPD(0x0C08A21Cu, 2);  /* 0C08A21A mov.l @(disp,pc),Rn */
	r5 = 0x7u;  /* 0C08A21C mov #imm,Rn */
	W32(r15 + 0x10u, r0); UPD(0x0C08A220u, 2);  /* 0C08A21E mov.l Rm,@(disp,Rn) */
	r7 = r12;  /* 0C08A220 mov Rm,Rn */
	r13 = 0xC0BEEF0u; UPD(0x0C08A224u, 2);  /* 0C08A222 mov.l @(disp,pc),Rn */
	IF(0x0C08A224u); { u32 t_ = r13; PR = 0x0C08A228u; r4 = R32(r10); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BEEF0, 0x0C0BEEF0u, 0x0C08A228u); }  /* 0C08A224 jsr @Rn */
L_0C08A228: BLKS(0x0C08A228u);
	r10 = (u32)(s32)(s8)R8(r8); UPD(0x0C08A22Au, 1);  /* 0C08A228 mov.b @Rm,Rn */
	r15 += 0x14u;  /* 0C08A22A add #imm,Rn */
	r10 += 0x1u;  /* 0C08A22C add #imm,Rn */
	r0 = r10 & 0xFF;  /* 0C08A22E extu.b Rm,Rn */
	T = r0 == 0x18u;  /* 0C08A230 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r8, r10); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C08A1CCu, 7); goto L_0C08A1CC; } UPD(0x0C08A236u, 1); goto L_0C08A236; }  /* 0C08A232 bf/s */
L_0C08A236: BLKS(0x0C08A236u);
	W8(r8, r9); UPD(0x0C08A238u, 1);  /* 0C08A236 mov.b Rm,@Rn */
	r8 = (u32)(s32)(s8)R8(r11); UPD(0x0C08A23Au, 1);  /* 0C08A238 mov.b @Rm,Rn */
	r8 += 0x1u;  /* 0C08A23A add #imm,Rn */
	{ W8(r11, r8); /* slot mov.b Rm,@Rn */ UPD(0x0C08A140u, 4); goto L_0C08A140; }  /* 0C08A23C bra */
L_0C08A240: BLKS(0x0C08A240u);
	r11 = 0xC0A9CB0u; UPD(0x0C08A242u, 1);  /* 0C08A240 mov.l @(disp,pc),Rn */
	IF(0x0C08A242u); { u32 t_ = r11; PR = 0x0C08A246u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9CB0, 0x0C0A9CB0u, 0x0C08A246u); }  /* 0C08A242 jsr @Rn */
L_0C08A246: BLKS(0x0C08A246u);
	r11 = 0x9Cu; UPD(0x0C08A248u, 1);  /* 0C08A246 mov.w @(disp,pc),Rn */
	r11 += r10;  /* 0C08A248 add Rm,Rn */
	r2 = r11;  /* 0C08A24A mov Rm,Rn */
	r2 += 0x1u;  /* 0C08A24C add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C08A250u, 4);  /* 0C08A24E mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C08A250 tst Rm,Rn */
	{ u32 c_ = T; r1 += 0xFFFFFFFFu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C08A2B0u, 4); goto L_0C08A2B0; } goto L_0C08A256; }  /* 0C08A252 bt/s */
L_0C08A256: BLKS(0x0C08A256u);
	W8(r2, r1); UPD(0x0C08A258u, 2);  /* 0C08A256 mov.b Rm,@Rn */
L_0C08A258: BLKS(0x0C08A258u);
	{ IF(0x0C08A25Au); ; /* slot nop */ UPD(0x0C08A140u, 3); goto L_0C08A140; }  /* 0C08A258 bra */
L_0C08A2B0: BLKS(0x0C08A2B0u);
	r9 = 0x99u; UPD(0x0C08A2B2u, 1);  /* 0C08A2B0 mov.w @(disp,pc),Rn */
	r9 += r10;  /* 0C08A2B2 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C08A2B6u, 2);  /* 0C08A2B4 mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C08A2B6 add #imm,Rn */
	W8(r9, r0); UPD(0x0C08A2BAu, 2);  /* 0C08A2B8 mov.b Rm,@Rn */
	r0 &= 0x1u;  /* 0C08A2BA and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C08A2BC tst Rm,Rn */
	if (!T) { UPD(0x0C08A258u, 5); goto L_0C08A258; }  /* 0C08A2BE bf */
L_0C08A2C0: BLKS(0x0C08A2C0u);
	r6 = R32(r10 + 0x28u); UPD(0x0C08A2C2u, 1);  /* 0C08A2C0 mov.l @(disp,Rm),Rn */
	r2 = 0xFFFFFFFAu;  /* 0C08A2C2 mov #imm,Rn */
	r5 = (r6 >> 16) | (r6 << 16);  /* 0C08A2C4 swap.w Rm,Rn */
	r4 = 0xFFFFFEA0u; UPD(0x0C08A2C8u, 3);  /* 0C08A2C6 mov.w @(disp,pc),Rn */
	r9 = (u32)(s32)(s16)r5;  /* 0C08A2C8 exts.w Rm,Rn */
	r9 += r4;  /* 0C08A2CA add Rm,Rn */
	IF(0x0C08A2CCu); ARG0(0x492Cu); { s32 s_ = (s32)r2; if (s_ >= 0) r9 <<= (s_ & 31); else if ((s_ & 31) == 0) r9 = (u32)((s32)r9 >> 31); else r9 = (u32)((s32)r9 >> ((~s_ & 31) + 1)); }  /* 0C08A2CC shad Rm,Rn */
	r13 = 0xC062780u; UPD(0x0C08A2D0u, 4);  /* 0C08A2CE mov.l @(disp,pc),Rn */
	r9 += r9;  /* 0C08A2D0 add Rm,Rn */
	r0 = 0xC19D958u; UPD(0x0C08A2D4u, 2);  /* 0C08A2D2 mov.l @(disp,pc),Rn */
	r4 = 0x40u;  /* 0C08A2D4 mov #imm,Rn */
	IF(0x0C08A2D6u); { u32 t_ = r13; PR = 0x0C08A2DAu; r9 += r0; /* slot add Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C08A2DAu); }  /* 0C08A2D6 jsr @Rn */
L_0C08A2DA: BLKS(0x0C08A2DAu);
	r3 = (u32)(s32)(s16)R16(r9); UPD(0x0C08A2DCu, 1);  /* 0C08A2DA mov.w @Rm,Rn */
	r7 = r0;  /* 0C08A2DC mov Rm,Rn */
	r12 = 0xC069B20u; UPD(0x0C08A2E0u, 2);  /* 0C08A2DE mov.l @(disp,pc),Rn */
	r7 += r3;  /* 0C08A2E0 add Rm,Rn */
	r13 = 0x48000u; UPD(0x0C08A2E4u, 2);  /* 0C08A2E2 mov.l @(disp,pc),Rn */
	r8 = (u32)(s32)(s16)r7;  /* 0C08A2E4 exts.w Rm,Rn */
	r4 = r8;  /* 0C08A2E6 mov Rm,Rn */
	IF(0x0C08A2E8u); { u32 t_ = r12; PR = 0x0C08A2ECu; r5 = r13; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C08A2ECu); }  /* 0C08A2E8 jsr @Rn */
L_0C08A2EC: BLKS(0x0C08A2ECu);
	r5 = r13;  /* 0C08A2EC mov Rm,Rn */
	r13 = 0xC069AF0u; UPD(0x0C08A2F0u, 2);  /* 0C08A2EE mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C08A2F0 mov Rm,Rn */
	IF(0x0C08A2F2u); { u32 t_ = r13; PR = 0x0C08A2F6u; r12 = r0; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C08A2F6u); }  /* 0C08A2F2 jsr @Rn */
L_0C08A2F6: BLKS(0x0C08A2F6u);
	r1 = R32(r10); UPD(0x0C08A2F8u, 1);  /* 0C08A2F6 mov.l @Rm,Rn */
	r8 = 0x4000000u; UPD(0x0C08A2FAu, 1);  /* 0C08A2F8 mov.l @(disp,pc),Rn */
	T = (r1 & r8) == 0;  /* 0C08A2FA tst Rm,Rn */
	{ u32 c_ = !T; r3 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C08A310u, 4); goto L_0C08A310; } UPD(0x0C08A300u, 1); goto L_0C08A300; }  /* 0C08A2FC bf/s */
L_0C08A300: BLKS(0x0C08A300u);
	r12 = (u32)(s32)(s8)R8(r11); UPD(0x0C08A302u, 1);  /* 0C08A300 mov.b @Rm,Rn */
	r12 += 0xFFFFFFFFu;  /* 0C08A302 add #imm,Rn */
	r1 = r12 & 0xFF;  /* 0C08A304 extu.b Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C08A306 tst Rm,Rn */
	{ u32 c_ = !T; W8(r11, r12); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C08A258u, 6); goto L_0C08A258; } UPD(0x0C08A30Cu, 1); goto L_0C08A30C; }  /* 0C08A308 bf/s */
L_0C08A30C: BLKS(0x0C08A30Cu);
	{ W32(r10, r1); /* slot mov.l Rm,@Rn */ UPD(0x0C08A140u, 3); goto L_0C08A140; }  /* 0C08A30C bra */
L_0C08A310: BLKS(0x0C08A310u);
	r7 = 0xA9u; UPD(0x0C08A312u, 1);  /* 0C08A310 mov.w @(disp,pc),Rn */
	r0 = r10;  /* 0C08A312 mov Rm,Rn */
	IF(0x0C08A314u); r9 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C08A316u, 2);  /* 0C08A314 mov.b @(r0,Rm),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C08A316 add #imm,Rn */
	r8 = 0xC07CD80u; UPD(0x0C08A31Au, 2);  /* 0C08A318 mov.l @(disp,pc),Rn */
	r7 = r9 & 0xFF;  /* 0C08A31A extu.b Rm,Rn */
	W32(r15, r12); UPD(0x0C08A31Eu, 2);  /* 0C08A31C mov.l Rm,@Rn */
	r4 = 0x3u;  /* 0C08A31E mov #imm,Rn */
	W32(r15 + 0x4u, r3); UPD(0x0C08A322u, 2);  /* 0C08A320 mov.l Rm,@(disp,Rn) */
	r5 = R32(r10 + 0x24u); UPD(0x0C08A324u, 1);  /* 0C08A322 mov.l @(disp,Rm),Rn */
	IF(0x0C08A324u); { u32 t_ = r8; PR = 0x0C08A328u; r6 = R32(r10 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C07CD80, 0x0C07CD80u, 0x0C08A328u); }  /* 0C08A324 jsr @Rn */
L_0C08A328: BLKS(0x0C08A328u);
	{ r15 += 0x8u; /* slot add #imm,Rn */ UPD(0x0C08A300u, 3); goto L_0C08A300; }  /* 0C08A328 bra */
}

void blk_f_0C08A350(sh3_t *c)
{
	LOCALS;
L_0C08A350: BLKS(0x0C08A350u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C08A352u, 1);  /* 0C08A350 mov.l Rm,@-Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C08A352 exts.w Rm,Rn */
	r0 = 0xB4u; UPD(0x0C08A356u, 2);  /* 0C08A354 mov.w @(disp,pc),Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C08A358u, 1);  /* 0C08A356 mov.l Rm,@-Rn */
	IF(0x0C08A358u); MACL = r4 * r0;  /* 0C08A358 mul.l Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C08A35Cu, 3);  /* 0C08A35A mov.l Rm,@-Rn */
	r0 = 0xC286578u; UPD(0x0C08A35Eu, 1);  /* 0C08A35C mov.l @(disp,pc),Rn */
	IF(0x0C08A35Eu); r8 = MACL;  /* 0C08A35E sts macl,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C08A362u, 2);  /* 0C08A360 mov.l Rm,@-Rn */
	r8 += r0;  /* 0C08A362 add Rm,Rn */
	r9 = 0x9Fu; UPD(0x0C08A366u, 2);  /* 0C08A364 mov.w @(disp,pc),Rn */
	IF(0x0C08A366u); r15 -= 4; W32(r15, PR); UPD(0x0C08A368u, 1);  /* 0C08A366 sts.l pr,@-Rn */
	r9 += r8;  /* 0C08A368 add Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r9); UPD(0x0C08A36Cu, 2);  /* 0C08A36A mov.b @Rm,Rn */
	r0 = r3 & 0xFF;  /* 0C08A36C extu.b Rm,Rn */
	T = r0 == 0x1u;  /* 0C08A36E cmp/eq #imm,r0 */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C08A3E0u, 5); goto L_0C08A3E0; } goto L_0C08A374; }  /* 0C08A370 bt/s */
L_0C08A374: BLKS(0x0C08A374u);
	r10 = 0x1u;  /* 0C08A374 mov #imm,Rn */
	T = (s32)r0 > (s32)r10;  /* 0C08A376 cmp/gt Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x2u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C08A3C0u, 6); goto L_0C08A3C0; } goto L_0C08A37C; }  /* 0C08A378 bt/s */
L_0C08A37C: BLKS(0x0C08A37Cu);
	T = (r0 & r0) == 0;  /* 0C08A37C tst Rm,Rn */
	if (T) { UPD(0x0C08A390u, 5); goto L_0C08A390; }  /* 0C08A37E bt */
L_0C08A380: BLKS(0x0C08A380u);
	r15 = r14;  /* 0C08A380 mov Rm,Rn */
	IF(0x0C08A382u); PR = R32(r15); r15 += 4; UPD(0x0C08A384u, 2);  /* 0C08A382 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08A386u, 1);  /* 0C08A384 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08A388u, 1);  /* 0C08A386 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08A38Au, 1);  /* 0C08A388 mov.l @Rm+,Rn */
	IF(0x0C08A38Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08A38A rts */
L_0C08A390: BLKS(0x0C08A390u);
	r0 = 0xC0A9CB0u; UPD(0x0C08A392u, 1);  /* 0C08A390 mov.l @(disp,pc),Rn */
	IF(0x0C08A392u); { u32 t_ = r0; PR = 0x0C08A396u; IF(0x0C08A394u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9CB0, 0x0C0A9CB0u, 0x0C08A396u); }  /* 0C08A392 jsr @Rn */
L_0C08A396: BLKS(0x0C08A396u);
	r1 = R32(r8); UPD(0x0C08A398u, 1);  /* 0C08A396 mov.l @Rm,Rn */
	r3 = 0x100u; UPD(0x0C08A39Au, 1);  /* 0C08A398 mov.w @(disp,pc),Rn */
	T = (r1 & r3) == 0;  /* 0C08A39A tst Rm,Rn */
	if (T) { UPD(0x0C08A380u, 4); goto L_0C08A380; }  /* 0C08A39C bt */
L_0C08A39E: BLKS(0x0C08A39Eu);
	r2 = (u32)(s32)(s8)R8(r9); UPD(0x0C08A3A0u, 1);  /* 0C08A39E mov.b @Rm,Rn */
	r4 = 0x6Du;  /* 0C08A3A0 mov #imm,Rn */
	r0 = 0x88u; UPD(0x0C08A3A4u, 2);  /* 0C08A3A2 mov.w @(disp,pc),Rn */
	r2 += 0x1u;  /* 0C08A3A4 add #imm,Rn */
	IF(0x0C08A3A6u); W16(r0 + r8, r10); UPD(0x0C08A3A8u, 2);  /* 0C08A3A6 mov.w Rm,@(r0,Rn) */
	W8(r9, r2); UPD(0x0C08A3AAu, 1);  /* 0C08A3A8 mov.b Rm,@Rn */
L_0C08A3AA: BLKS(0x0C08A3AAu);
	r5 = 0xC0C2110u; UPD(0x0C08A3ACu, 1);  /* 0C08A3AA mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C08A3AC mov Rm,Rn */
	IF(0x0C08A3AEu); PR = R32(r15); r15 += 4; UPD(0x0C08A3B0u, 2);  /* 0C08A3AE lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08A3B2u, 1);  /* 0C08A3B0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08A3B4u, 1);  /* 0C08A3B2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08A3B6u, 1);  /* 0C08A3B4 mov.l @Rm+,Rn */
	IF(0x0C08A3B6u); { u32 tv_ = r5; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0C2110u: TAIL(blk_f_0C0C2110); default: JUMPD(tv_); } }  /* 0C08A3B6 jmp @Rn */
L_0C08A3C0: BLKS(0x0C08A3C0u);
	if (!T) { UPD(0x0C08A380u, 3); goto L_0C08A380; }  /* 0C08A3C0 bf */
L_0C08A3C2: BLKS(0x0C08A3C2u);
	r10 = 0xC0A9CB0u; UPD(0x0C08A3C4u, 1);  /* 0C08A3C2 mov.l @(disp,pc),Rn */
	IF(0x0C08A3C4u); { u32 t_ = r10; PR = 0x0C08A3C8u; IF(0x0C08A3C6u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9CB0, 0x0C0A9CB0u, 0x0C08A3C8u); }  /* 0C08A3C4 jsr @Rn */
L_0C08A3C8: BLKS(0x0C08A3C8u);
	r3 = R32(r8); UPD(0x0C08A3CAu, 1);  /* 0C08A3C8 mov.l @Rm,Rn */
	r7 = 0x100u; UPD(0x0C08A3CCu, 1);  /* 0C08A3CA mov.w @(disp,pc),Rn */
	T = (r3 & r7) == 0;  /* 0C08A3CC tst Rm,Rn */
	if (!T) { UPD(0x0C08A380u, 4); goto L_0C08A380; }  /* 0C08A3CE bf */
L_0C08A3D0: BLKS(0x0C08A3D0u);
	r2 = (u32)(s32)(s8)R8(r9); UPD(0x0C08A3D2u, 1);  /* 0C08A3D0 mov.b @Rm,Rn */
	r4 = 0xFFFFFFFFu;  /* 0C08A3D2 mov #imm,Rn */
	r0 = 0x88u; UPD(0x0C08A3D6u, 2);  /* 0C08A3D4 mov.w @(disp,pc),Rn */
	r2 += 0xFFFFFFFFu;  /* 0C08A3D6 add #imm,Rn */
	IF(0x0C08A3D8u); W16(r0 + r8, r4); UPD(0x0C08A3DAu, 2);  /* 0C08A3D8 mov.w Rm,@(r0,Rn) */
	W8(r9, r2); UPD(0x0C08A3DCu, 1);  /* 0C08A3DA mov.b Rm,@Rn */
	{ r4 = 0x75u; /* slot mov #imm,Rn */ UPD(0x0C08A3AAu, 3); goto L_0C08A3AA; }  /* 0C08A3DC bra */
L_0C08A3E0: BLKS(0x0C08A3E0u);
	r7 = 0x88u; UPD(0x0C08A3E2u, 1);  /* 0C08A3E0 mov.w @(disp,pc),Rn */
	r10 = 0x11u;  /* 0C08A3E2 mov #imm,Rn */
	r7 += r8;  /* 0C08A3E4 add Rm,Rn */
	r2 = 0x99u; UPD(0x0C08A3E8u, 3);  /* 0C08A3E6 mov.w @(disp,pc),Rn */
	r6 = (u32)(s32)(s16)R16(r7); UPD(0x0C08A3EAu, 1);  /* 0C08A3E8 mov.w @Rm,Rn */
	r2 += r8;  /* 0C08A3EA add Rm,Rn */
	r5 = R32(r8 + 0x24u); UPD(0x0C08A3EEu, 2);  /* 0C08A3EC mov.l @(disp,Rm),Rn */
	IF(0x0C08A3EEu); ARG0(0x46ADu); { s32 s_ = (s32)r10; if (s_ >= 0) r6 <<= (s_ & 31); else if ((s_ & 31) == 0) r6 = 0; else r6 >>= ((~s_ & 31) + 1); }  /* 0C08A3EE shld Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r2); UPD(0x0C08A3F2u, 2);  /* 0C08A3F0 mov.b @Rm,Rn */
	r5 -= r6;  /* 0C08A3F2 sub Rm,Rn */
	r4 += 0x1u;  /* 0C08A3F4 add #imm,Rn */
	r0 = r4 & 0xFF;  /* 0C08A3F6 extu.b Rm,Rn */
	W32(r8 + 0x24u, r5); UPD(0x0C08A3FAu, 4);  /* 0C08A3F8 mov.l Rm,@(disp,Rn) */
	T = r0 == 0x20u;  /* 0C08A3FA cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r2, r4); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C08A380u, 4); goto L_0C08A380; } UPD(0x0C08A400u, 1); goto L_0C08A400; }  /* 0C08A3FC bf/s */
L_0C08A400: BLKS(0x0C08A400u);
	r7 += 0x1u;  /* 0C08A400 add #imm,Rn */
	r8 = (u32)(s32)(s8)R8(r7); UPD(0x0C08A404u, 2);  /* 0C08A402 mov.b @Rm,Rn */
	r0 = 0x0u;  /* 0C08A404 mov #imm,Rn */
	r8 += r3;  /* 0C08A406 add Rm,Rn */
	W8(r2, r0); UPD(0x0C08A40Au, 3);  /* 0C08A408 mov.b Rm,@Rn */
	{ W8(r9, r8); /* slot mov.b Rm,@Rn */ UPD(0x0C08A380u, 3); goto L_0C08A380; }  /* 0C08A40A bra */
}

void blk_f_0C08A430(sh3_t *c)
{
	LOCALS;
L_0C08A430: BLKS(0x0C08A430u);
	r3 = 0xB4u; UPD(0x0C08A432u, 1);  /* 0C08A430 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C08A432 exts.w Rm,Rn */
	IF(0x0C08A434u); MACL = r4 * r3;  /* 0C08A434 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C08A438u, 4);  /* 0C08A436 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C08A43Au, 1);  /* 0C08A438 mov.l Rm,@-Rn */
	IF(0x0C08A43Au); r2 = MACL;  /* 0C08A43A sts macl,Rn */
	r0 += r2;  /* 0C08A43C add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C08A440u, 3);  /* 0C08A43E mov.l @(disp,Rm),Rn */
	r0 = 0x3u;  /* 0C08A440 mov #imm,Rn */
	T = r2 > r0;  /* 0C08A442 cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C08A4D0u, 5); goto L_0C08A4D0; } goto L_0C08A448; }  /* 0C08A444 bt/s */
L_0C08A448: BLKS(0x0C08A448u);
	r0 = 0xC08A450u;  /* 0C08A448 mova @(disp,pc),r0 */
	IF(0x0C08A44Au); r5 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C08A44Cu, 3);  /* 0C08A44A mov.b @(r0,Rm),Rn */
	IF(0x0C08A44Cu); { u32 tv_ = (r5 + 0x0C08A450u); u32 t_ = PHYS(tv_); IF(0x0C08A44Eu); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C08A460u: goto L_0C08A460; case 0x0C08A490u: goto L_0C08A490; case 0x0C08A4B0u: goto L_0C08A4B0; default: JUMPD(tv_); } }  /* 0C08A44C braf Rn */
L_0C08A460: BLKS(0x0C08A460u);
	r7 = 0xB4u; UPD(0x0C08A462u, 1);  /* 0C08A460 mov.w @(disp,pc),Rn */
	IF(0x0C08A462u); MACL = r4 * r7;  /* 0C08A462 mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C08A466u, 3);  /* 0C08A464 mov.l @(disp,pc),Rn */
	IF(0x0C08A466u); r0 = MACL;  /* 0C08A466 sts macl,Rn */
	IF(0x0C08A468u); r0 = R32(r0 + r6); UPD(0x0C08A46Au, 2);  /* 0C08A468 mov.l @(r0,Rm),Rn */
	IF(0x0C08A46Au); r0 >>= 16;  /* 0C08A46A shlr16 Rn */
	IF(0x0C08A46Cu); r0 >>= 8;  /* 0C08A46C shlr8 Rn */
	IF(0x0C08A46Eu); r0 >>= 2;  /* 0C08A46E shlr2 Rn */
	r0 &= 0x1u;  /* 0C08A470 and #imm,r0 */
	r5 = 0xC19E71Cu; UPD(0x0C08A474u, 5);  /* 0C08A472 mov.l @(disp,pc),Rn */
	T = r0 == 0x1u;  /* 0C08A474 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C08A480u, 4); goto L_0C08A480; }  /* 0C08A476 bt */
L_0C08A478: BLKS(0x0C08A478u);
	r6 = 0xC0A9D90u; UPD(0x0C08A47Au, 1);  /* 0C08A478 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C08A47A mov Rm,Rn */
	IF(0x0C08A47Cu); { u32 tv_ = r6; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C0A9D90u: TAIL(blk_f_0C0A9D90); default: JUMPD(tv_); } }  /* 0C08A47C jmp @Rn */
L_0C08A480: BLKS(0x0C08A480u);
	r5 = 0xC19E764u; UPD(0x0C08A482u, 1);  /* 0C08A480 mov.l @(disp,pc),Rn */
	{ IF(0x0C08A484u); ; /* slot nop */ UPD(0x0C08A478u, 3); goto L_0C08A478; }  /* 0C08A482 bra */
L_0C08A490: BLKS(0x0C08A490u);
	r0 = 0xB4u; UPD(0x0C08A492u, 1);  /* 0C08A490 mov.w @(disp,pc),Rn */
	IF(0x0C08A492u); MACL = r4 * r0;  /* 0C08A492 mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C08A496u, 3);  /* 0C08A494 mov.l @(disp,pc),Rn */
	IF(0x0C08A496u); r0 = MACL;  /* 0C08A496 sts macl,Rn */
	IF(0x0C08A498u); r0 = R32(r0 + r2); UPD(0x0C08A49Au, 2);  /* 0C08A498 mov.l @(r0,Rm),Rn */
	IF(0x0C08A49Au); r0 >>= 16;  /* 0C08A49A shlr16 Rn */
	IF(0x0C08A49Cu); r0 >>= 8;  /* 0C08A49C shlr8 Rn */
	IF(0x0C08A49Eu); r0 >>= 2;  /* 0C08A49E shlr2 Rn */
	r0 &= 0x1u;  /* 0C08A4A0 and #imm,r0 */
	r5 = 0xC19E7B4u; UPD(0x0C08A4A4u, 5);  /* 0C08A4A2 mov.l @(disp,pc),Rn */
	T = r0 == 0x1u;  /* 0C08A4A4 cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C08A478u, 4); goto L_0C08A478; }  /* 0C08A4A6 bf */
L_0C08A4A8: BLKS(0x0C08A4A8u);
	r5 = 0xC19E80Au; UPD(0x0C08A4AAu, 1);  /* 0C08A4A8 mov.l @(disp,pc),Rn */
	{ IF(0x0C08A4ACu); ; /* slot nop */ UPD(0x0C08A478u, 3); goto L_0C08A478; }  /* 0C08A4AA bra */
L_0C08A4B0: BLKS(0x0C08A4B0u);
	r5 = 0xB4u; UPD(0x0C08A4B2u, 1);  /* 0C08A4B0 mov.w @(disp,pc),Rn */
	IF(0x0C08A4B2u); MACL = r4 * r5;  /* 0C08A4B2 mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C08A4B6u, 3);  /* 0C08A4B4 mov.l @(disp,pc),Rn */
	IF(0x0C08A4B6u); r0 = MACL;  /* 0C08A4B6 sts macl,Rn */
	IF(0x0C08A4B8u); r0 = R32(r0 + r3); UPD(0x0C08A4BAu, 2);  /* 0C08A4B8 mov.l @(r0,Rm),Rn */
	IF(0x0C08A4BAu); r0 >>= 16;  /* 0C08A4BA shlr16 Rn */
	IF(0x0C08A4BCu); r0 >>= 8;  /* 0C08A4BC shlr8 Rn */
	IF(0x0C08A4BEu); r0 >>= 2;  /* 0C08A4BE shlr2 Rn */
	r0 &= 0x1u;  /* 0C08A4C0 and #imm,r0 */
	r5 = 0xC19E868u; UPD(0x0C08A4C4u, 5);  /* 0C08A4C2 mov.l @(disp,pc),Rn */
	T = r0 == 0x1u;  /* 0C08A4C4 cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C08A478u, 4); goto L_0C08A478; }  /* 0C08A4C6 bf */
L_0C08A4C8: BLKS(0x0C08A4C8u);
	r5 = 0xC19E8BEu; UPD(0x0C08A4CAu, 1);  /* 0C08A4C8 mov.l @(disp,pc),Rn */
	{ IF(0x0C08A4CCu); ; /* slot nop */ UPD(0x0C08A478u, 3); goto L_0C08A478; }  /* 0C08A4CA bra */
L_0C08A4D0: BLKS(0x0C08A4D0u);
	r15 = r14;  /* 0C08A4D0 mov Rm,Rn */
	IF(0x0C08A4D2u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C08A4D2 rts */
}

void blk_f_0C08A500(sh3_t *c)
{
	LOCALS;
L_0C08A500: BLKS(0x0C08A500u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C08A502u, 1);  /* 0C08A500 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C08A504u, 1);  /* 0C08A502 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C08A506u, 1);  /* 0C08A504 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C08A508u, 1);  /* 0C08A506 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C08A50Au, 1);  /* 0C08A508 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C08A50Cu, 1);  /* 0C08A50A mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C08A50Eu, 1);  /* 0C08A50C mov.l Rm,@-Rn */
	r13 = 0xC3C43CCu; UPD(0x0C08A510u, 1);  /* 0C08A50E mov.l @(disp,pc),Rn */
	IF(0x0C08A510u); r15 -= 4; W32(r15, PR); UPD(0x0C08A512u, 1);  /* 0C08A510 sts.l pr,@-Rn */
	r3 = R32(r13); UPD(0x0C08A514u, 1);  /* 0C08A512 mov.l @Rm,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C08A514 add #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r4 = v_; } UPD(0x0C08A518u, 2);  /* 0C08A516 mov.w @Rm+,Rn */
	r14 = r15;  /* 0C08A518 mov Rm,Rn */
	r1 = 0xC2B0378u; UPD(0x0C08A51Cu, 2);  /* 0C08A51A mov.l @(disp,pc),Rn */
	r9 = 0xC2460ACu; UPD(0x0C08A51Eu, 1);  /* 0C08A51C mov.l @(disp,pc),Rn */
	r8 = 0xC069510u; UPD(0x0C08A520u, 1);  /* 0C08A51E mov.l @(disp,pc),Rn */
	W16(r1, r4); UPD(0x0C08A522u, 1);  /* 0C08A520 mov.w Rm,@Rn */
	r0 = (u32)(s32)(s16)R16(r9); UPD(0x0C08A524u, 1);  /* 0C08A522 mov.w @Rm,Rn */
	W32(r13, r3); UPD(0x0C08A526u, 1);  /* 0C08A524 mov.l Rm,@Rn */
	r5 = 0x8000u; UPD(0x0C08A528u, 1);  /* 0C08A526 mov.l @(disp,pc),Rn */
	IF(0x0C08A528u); { u32 t_ = r8; PR = 0x0C08A52Cu; r4 = r0 & 0xFFFF; /* slot extu.w Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069510, 0x0C069510u, 0x0C08A52Cu); }  /* 0C08A528 jsr @Rn */
L_0C08A52C: BLKS(0x0C08A52Cu);
	T = (r0 & r0) == 0;  /* 0C08A52C tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C08A550u, 4); goto L_0C08A550; } UPD(0x0C08A532u, 1); goto L_0C08A532; }  /* 0C08A52E bf/s */
L_0C08A532: BLKS(0x0C08A532u);
	r14 += 0x8u;  /* 0C08A532 add #imm,Rn */
	r15 = r14;  /* 0C08A534 mov Rm,Rn */
	IF(0x0C08A536u); PR = R32(r15); r15 += 4; UPD(0x0C08A538u, 3);  /* 0C08A536 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08A53Au, 1);  /* 0C08A538 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08A53Cu, 1);  /* 0C08A53A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08A53Eu, 1);  /* 0C08A53C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08A540u, 1);  /* 0C08A53E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08A542u, 1);  /* 0C08A540 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08A544u, 1);  /* 0C08A542 mov.l @Rm+,Rn */
	IF(0x0C08A544u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08A544 rts */
L_0C08A550: BLKS(0x0C08A550u);
	r8 = 0xC071740u; UPD(0x0C08A552u, 1);  /* 0C08A550 mov.l @(disp,pc),Rn */
	IF(0x0C08A552u); { u32 t_ = r8; PR = 0x0C08A556u; r4 = 0x3u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C071740, 0x0C071740u, 0x0C08A556u); }  /* 0C08A552 jsr @Rn */
L_0C08A556: BLKS(0x0C08A556u);
	T = (r0 & r0) == 0;  /* 0C08A556 tst Rm,Rn */
	if (!T) { UPD(0x0C08A570u, 4); goto L_0C08A570; }  /* 0C08A558 bf */
L_0C08A55A: BLKS(0x0C08A55Au);
	r2 = R32(r13); UPD(0x0C08A55Cu, 1);  /* 0C08A55A mov.l @Rm,Rn */
	r2 += 0x2u;  /* 0C08A55C add #imm,Rn */
	W32(r13, r2); UPD(0x0C08A560u, 2);  /* 0C08A55E mov.l Rm,@Rn */
L_0C08A560: BLKS(0x0C08A560u);
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C08A532u, 3); goto L_0C08A532; }  /* 0C08A560 bra */
L_0C08A570: BLKS(0x0C08A570u);
	r12 = 0xC28EDFCu; UPD(0x0C08A572u, 1);  /* 0C08A570 mov.l @(disp,pc),Rn */
	r2 = 0x3u;  /* 0C08A572 mov #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r12); r12 += 2; r11 = v_; } UPD(0x0C08A576u, 2);  /* 0C08A574 mov.w @Rm+,Rn */
	r8 = 0xB4u; UPD(0x0C08A578u, 1);  /* 0C08A576 mov.w @(disp,pc),Rn */
	IF(0x0C08A578u); MACL = r11 * r8;  /* 0C08A578 mul.l Rm,Rn */
	r0 = 0xC286578u; UPD(0x0C08A57Cu, 3);  /* 0C08A57A mov.l @(disp,pc),Rn */
	r5 = 0xC2B0378u; UPD(0x0C08A57Eu, 1);  /* 0C08A57C mov.l @(disp,pc),Rn */
	IF(0x0C08A57Eu); r8 = MACL;  /* 0C08A57E sts macl,Rn */
	r8 += r0;  /* 0C08A580 add Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r5); UPD(0x0C08A584u, 3);  /* 0C08A582 mov.w @Rm,Rn */
	r4 = 0xC2B1811u; UPD(0x0C08A586u, 1);  /* 0C08A584 mov.l @(disp,pc),Rn */
	r0 &= 0x3u;  /* 0C08A586 and #imm,r0 */
	r10 = (u32)(s32)(s8)R8(r4); UPD(0x0C08A58Au, 2);  /* 0C08A588 mov.b @Rm,Rn */
	MACL = (u32)(u16)r0 * (u32)(u16)r2;  /* 0C08A58A mulu.w Rm,Rn */
	r7 = (u32)(s32)(s16)R16(r9); UPD(0x0C08A58Eu, 3);  /* 0C08A58C mov.w @Rm,Rn */
	r4 = 0x0u;  /* 0C08A58E mov #imm,Rn */
	r0 = 0xC0A8A30u; UPD(0x0C08A592u, 2);  /* 0C08A590 mov.l @(disp,pc),Rn */
	IF(0x0C08A592u); r1 = MACL;  /* 0C08A592 sts macl,Rn */
	r3 = 0xC1000010u; UPD(0x0C08A596u, 2);  /* 0C08A594 mov.l @(disp,pc),Rn */
	r6 = r7 & 0xFFFF;  /* 0C08A596 extu.w Rm,Rn */
	W32(r8 + 0xCu, r4); UPD(0x0C08A59Au, 2);  /* 0C08A598 mov.l Rm,@(disp,Rn) */
	r9 = 0x4Cu;  /* 0C08A59A mov #imm,Rn */
	W32(r8 + 0x8u, r1); UPD(0x0C08A59Eu, 2);  /* 0C08A59C mov.l Rm,@(disp,Rn) */
	r4 = r11;  /* 0C08A59E mov Rm,Rn */
	W32(r8, r3); UPD(0x0C08A5A2u, 2);  /* 0C08A5A0 mov.l Rm,@Rn */
	IF(0x0C08A5A2u); { u32 t_ = r0; PR = 0x0C08A5A6u; W32(r8 + 0x4u, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C08A5A6u); }  /* 0C08A5A2 jsr @Rn */
L_0C08A5A6: BLKS(0x0C08A5A6u);
	IF(0x0C08A5A6u); MACL = r10 * r9;  /* 0C08A5A6 mul.l Rm,Rn */
	r7 = 0xC286318u; UPD(0x0C08A5AAu, 3);  /* 0C08A5A8 mov.l @(disp,pc),Rn */
	r2 = 0xC3C43C6u; UPD(0x0C08A5ACu, 1);  /* 0C08A5AA mov.l @(disp,pc),Rn */
	IF(0x0C08A5ACu); r9 = MACL;  /* 0C08A5AC sts macl,Rn */
	r3 = 0xC237C08u; UPD(0x0C08A5B0u, 2);  /* 0C08A5AE mov.l @(disp,pc),Rn */
	r9 += r7;  /* 0C08A5B0 add Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r2); UPD(0x0C08A5B4u, 2);  /* 0C08A5B2 mov.w @Rm,Rn */
	r6 = R32(r9 + 0x8u); UPD(0x0C08A5B6u, 1);  /* 0C08A5B4 mov.l @(disp,Rm),Rn */
	IF(0x0C08A5B6u); r4 <<= 16;  /* 0C08A5B6 shll16 Rn */
	r5 = (u32)(s32)(s16)R16(r3); UPD(0x0C08A5BAu, 2);  /* 0C08A5B8 mov.w @Rm,Rn */
	r9 += 0x42u;  /* 0C08A5BA add #imm,Rn */
	r0 = 0xC0A9AE0u; UPD(0x0C08A5BEu, 2);  /* 0C08A5BC mov.l @(disp,pc),Rn */
	IF(0x0C08A5BEu); r5 <<= 16;  /* 0C08A5BE shll16 Rn */
	W32(r8 + 0x28u, r4); UPD(0x0C08A5C2u, 2);  /* 0C08A5C0 mov.l Rm,@(disp,Rn) */
	r5 -= r6;  /* 0C08A5C2 sub Rm,Rn */
	W32(r8 + 0x24u, r5); UPD(0x0C08A5C6u, 2);  /* 0C08A5C4 mov.l Rm,@(disp,Rn) */
	IF(0x0C08A5C6u); { u32 t_ = r0; PR = 0x0C08A5CAu; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C08A5CAu); }  /* 0C08A5C6 jsr @Rn */
L_0C08A5CA: BLKS(0x0C08A5CAu);
	r0 = 0xB0u; UPD(0x0C08A5CCu, 1);  /* 0C08A5CA mov.w @(disp,pc),Rn */
	r4 = r11;  /* 0C08A5CC mov Rm,Rn */
	IF(0x0C08A5CEu); W8(r0 + r8, r10); UPD(0x0C08A5D0u, 2);  /* 0C08A5CE mov.b Rm,@(r0,Rn) */
	r10 = 0xA8u; UPD(0x0C08A5D2u, 1);  /* 0C08A5D0 mov.w @(disp,pc),Rn */
	r0 += 0xFFFFFFFDu;  /* 0C08A5D2 add #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r9); UPD(0x0C08A5D6u, 2);  /* 0C08A5D4 mov.b @Rm,Rn */
	r10 += r8;  /* 0C08A5D6 add Rm,Rn */
	r3 += 0x2u;  /* 0C08A5D8 add #imm,Rn */
	r10 += 0x1u;  /* 0C08A5DA add #imm,Rn */
	IF(0x0C08A5DCu); W8(r0 + r8, r3); UPD(0x0C08A5DEu, 4);  /* 0C08A5DC mov.b Rm,@(r0,Rn) */
	r9 += 0xFFFFFFBEu;  /* 0C08A5DE add #imm,Rn */
	W8(r10, r3); UPD(0x0C08A5E2u, 2);  /* 0C08A5E0 mov.b Rm,@Rn */
	r8 += 0x50u;  /* 0C08A5E2 add #imm,Rn */
	r7 = R32(r9 + 0x38u); UPD(0x0C08A5E6u, 2);  /* 0C08A5E4 mov.l @(disp,Rm),Rn */
	r9 = R32(r13); UPD(0x0C08A5E8u, 1);  /* 0C08A5E6 mov.l @Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r9); r9 += 2; r0 = v_; } UPD(0x0C08A5EAu, 1);  /* 0C08A5E8 mov.w @Rm+,Rn */
	r6 = 0xC0A9D30u; UPD(0x0C08A5ECu, 1);  /* 0C08A5EA mov.l @(disp,pc),Rn */
	IF(0x0C08A5ECu); r0 <<= 2;  /* 0C08A5EC shll2 Rn */
	IF(0x0C08A5EEu); r5 = R32(r0 + r7); UPD(0x0C08A5F0u, 2);  /* 0C08A5EE mov.l @(r0,Rm),Rn */
	IF(0x0C08A5F0u); { u32 t_ = r6; PR = 0x0C08A5F4u; W32(r13, r9); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9D30, 0x0C0A9D30u, 0x0C08A5F4u); }  /* 0C08A5F0 jsr @Rn */
L_0C08A5F4: BLKS(0x0C08A5F4u);
	r5 = 0x0u;  /* 0C08A5F4 mov #imm,Rn */
	W32(r8, r5); UPD(0x0C08A5F8u, 2);  /* 0C08A5F6 mov.l Rm,@Rn */
	r13 = 0x0u;  /* 0C08A5F8 mov #imm,Rn */
	r8 += 0xFFFFFFB0u;  /* 0C08A5FA add #imm,Rn */
	W32(r14, r5); UPD(0x0C08A5FEu, 3);  /* 0C08A5FC mov.l Rm,@Rn */
	r11 = r8;  /* 0C08A5FE mov Rm,Rn */
	W32(r14 + 0x4u, r10); UPD(0x0C08A602u, 2);  /* 0C08A600 mov.l Rm,@(disp,Rn) */
	IF(0x0C08A602u); ;  /* 0C08A602 nop */
	UPD(0x0C08A604u, 1);
L_0C08A604: BLKS(0x0C08A604u);
	{ u32 v_ = (u32)(s32)(s16)R16(r12); r12 += 2; r10 = v_; } UPD(0x0C08A606u, 1);  /* 0C08A604 mov.w @Rm+,Rn */
	r8 = 0xB4u; UPD(0x0C08A608u, 1);  /* 0C08A606 mov.w @(disp,pc),Rn */
	IF(0x0C08A608u); MACL = r10 * r8;  /* 0C08A608 mul.l Rm,Rn */
	r9 = 0xC286578u; UPD(0x0C08A60Cu, 3);  /* 0C08A60A mov.l @(disp,pc),Rn */
	IF(0x0C08A60Cu); r8 = MACL;  /* 0C08A60C sts macl,Rn */
	r8 += r9;  /* 0C08A60E add Rm,Rn */
	r9 = 0xC19E91Cu; UPD(0x0C08A612u, 3);  /* 0C08A610 mov.l @(disp,pc),Rn */
	r8 += 0x7Cu;  /* 0C08A612 add #imm,Rn */
	r9 += r13;  /* 0C08A614 add Rm,Rn */
	r9 += 0x4u;  /* 0C08A616 add #imm,Rn */
	r5 = (u32)(s32)(s16)R16(r9); UPD(0x0C08A61Au, 4);  /* 0C08A618 mov.w @Rm,Rn */
	r13 += 0x14u;  /* 0C08A61A add #imm,Rn */
	r0 = 0xC28EDFCu; UPD(0x0C08A61Eu, 2);  /* 0C08A61C mov.l @(disp,pc),Rn */
	r5 += r5;  /* 0C08A61E add Rm,Rn */
	IF(0x0C08A620u); r4 = (u32)(s32)(s16)R16(r0 + r5); UPD(0x0C08A622u, 2);  /* 0C08A620 mov.w @(r0,Rm),Rn */
	r9 += 0xFFFFFFFCu;  /* 0C08A622 add #imm,Rn */
	W16(r8, r4); UPD(0x0C08A626u, 2);  /* 0C08A624 mov.w Rm,@Rn */
	r3 = (u32)(s32)(s16)R16(r0); UPD(0x0C08A628u, 1);  /* 0C08A626 mov.w @Rm,Rn */
	r8 += 0x2u;  /* 0C08A628 add #imm,Rn */
	r6 = R32(r9); UPD(0x0C08A62Cu, 2);  /* 0C08A62A mov.l @Rm,Rn */
	r4 = 0x0u;  /* 0C08A62C mov #imm,Rn */
	r7 = 0x81000000u; UPD(0x0C08A630u, 2);  /* 0C08A62E mov.l @(disp,pc),Rn */
	W16(r8, r3); UPD(0x0C08A632u, 1);  /* 0C08A630 mov.w Rm,@Rn */
	r6 |= r7;  /* 0C08A632 or Rm,Rn */
	r2 = R32(r11 + 0x4u); UPD(0x0C08A636u, 2);  /* 0C08A634 mov.l @(disp,Rm),Rn */
	r8 += 0xFFFFFF82u;  /* 0C08A636 add #imm,Rn */
	W32(r8, r6); UPD(0x0C08A63Au, 2);  /* 0C08A638 mov.l Rm,@Rn */
	W32(r8 + 0x4u, r2); UPD(0x0C08A63Cu, 1);  /* 0C08A63A mov.l Rm,@(disp,Rn) */
	r1 = R32(r9 + 0x8u); UPD(0x0C08A63Eu, 1);  /* 0C08A63C mov.l @(disp,Rm),Rn */
	r5 = R32(r11 + 0x8u); UPD(0x0C08A640u, 1);  /* 0C08A63E mov.l @(disp,Rm),Rn */
	r3 = 0xC0A8A30u; UPD(0x0C08A642u, 1);  /* 0C08A640 mov.l @(disp,pc),Rn */
	r5 += r1;  /* 0C08A642 add Rm,Rn */
	W32(r8 + 0xCu, r4); UPD(0x0C08A646u, 2);  /* 0C08A644 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x8u, r5); UPD(0x0C08A648u, 1);  /* 0C08A646 mov.l Rm,@(disp,Rn) */
	IF(0x0C08A648u); { u32 t_ = r3; PR = 0x0C08A64Cu; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C08A64Cu); }  /* 0C08A648 jsr @Rn */
L_0C08A64C: BLKS(0x0C08A64Cu);
	r0 = 0xC0A9AE0u; UPD(0x0C08A64Eu, 1);  /* 0C08A64C mov.l @(disp,pc),Rn */
	IF(0x0C08A64Eu); { u32 t_ = r0; PR = 0x0C08A652u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C08A652u); }  /* 0C08A64E jsr @Rn */
L_0C08A652: BLKS(0x0C08A652u);
	r7 = R32(r11 + 0x24u); UPD(0x0C08A654u, 1);  /* 0C08A652 mov.l @(disp,Rm),Rn */
	r5 = 0x0u;  /* 0C08A654 mov #imm,Rn */
	r6 = R32(r11 + 0x28u); UPD(0x0C08A658u, 2);  /* 0C08A656 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x24u, r7); UPD(0x0C08A65Au, 1);  /* 0C08A658 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x28u, r6); UPD(0x0C08A65Cu, 1);  /* 0C08A65A mov.l Rm,@(disp,Rn) */
	r0 = 0xB0u; UPD(0x0C08A65Eu, 1);  /* 0C08A65C mov.w @(disp,pc),Rn */
	r2 = R32(r9 + 0xCu); UPD(0x0C08A660u, 1);  /* 0C08A65E mov.l @(disp,Rm),Rn */
	IF(0x0C08A660u); r3 = (u32)(s32)(s8)R8(r0 + r11); UPD(0x0C08A662u, 1);  /* 0C08A660 mov.b @(r0,Rm),Rn */
	r9 += 0x10u;  /* 0C08A662 add #imm,Rn */
	IF(0x0C08A664u); W8(r0 + r8, r3); UPD(0x0C08A666u, 2);  /* 0C08A664 mov.b Rm,@(r0,Rn) */
	r0 = 0xA8u; UPD(0x0C08A668u, 1);  /* 0C08A666 mov.w @(disp,pc),Rn */
	r10 = R32(r14 + 0x4u); UPD(0x0C08A66Au, 1);  /* 0C08A668 mov.l @(disp,Rm),Rn */
	r0 += r8;  /* 0C08A66A add Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r10); UPD(0x0C08A66Eu, 2);  /* 0C08A66C mov.b @Rm,Rn */
	r0 += 0x1u;  /* 0C08A66E add #imm,Rn */
	W8(r0, r4); UPD(0x0C08A672u, 2);  /* 0C08A670 mov.b Rm,@Rn */
	r10 = 0x1u;  /* 0C08A672 mov #imm,Rn */
	W32(r8 + 0x2Cu, r2); UPD(0x0C08A676u, 2);  /* 0C08A674 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x30u, r5); UPD(0x0C08A678u, 1);  /* 0C08A676 mov.l Rm,@(disp,Rn) */
	r7 = 0xACu; UPD(0x0C08A67Au, 1);  /* 0C08A678 mov.w @(disp,pc),Rn */
	r1 = (u32)(s32)(s8)R8(r9); UPD(0x0C08A67Cu, 1);  /* 0C08A67A mov.b @Rm,Rn */
	r8 += r7;  /* 0C08A67C add Rm,Rn */
	r8 += 0x3u;  /* 0C08A67E add #imm,Rn */
	r7 += r11;  /* 0C08A680 add Rm,Rn */
	W8(r8, r1); UPD(0x0C08A684u, 4);  /* 0C08A682 mov.b Rm,@Rn */
	r7 += 0x1u;  /* 0C08A684 add #imm,Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C08A688u, 2);  /* 0C08A686 mov.b @Rm,Rn */
	r8 += 0xFFFFFFFEu;  /* 0C08A688 add #imm,Rn */
	W8(r8, r6); UPD(0x0C08A68Cu, 2);  /* 0C08A68A mov.b Rm,@Rn */
	r5 = R32(r14); UPD(0x0C08A68Eu, 1);  /* 0C08A68C mov.l @Rm,Rn */
	r5 += 0x1u;  /* 0C08A68E add #imm,Rn */
	r2 = (u32)(s32)(s16)r5;  /* 0C08A690 exts.w Rm,Rn */
	W32(r14, r2); UPD(0x0C08A694u, 3);  /* 0C08A692 mov.l Rm,@Rn */
	r9 = R32(r14); UPD(0x0C08A696u, 1);  /* 0C08A694 mov.l @Rm,Rn */
	T = (s32)r9 > (s32)r10;  /* 0C08A696 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C08A604u, 4); goto L_0C08A604; }  /* 0C08A698 bf */
L_0C08A69A: BLKS(0x0C08A69Au);
	{ IF(0x0C08A69Cu); ; /* slot nop */ UPD(0x0C08A560u, 3); goto L_0C08A560; }  /* 0C08A69A bra */
}

void blk_f_0C08A6F0(sh3_t *c)
{
	LOCALS;
L_0C08A6F0: BLKS(0x0C08A6F0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C08A6F2u, 1);  /* 0C08A6F0 mov.l Rm,@-Rn */
	r3 = 0xBu;  /* 0C08A6F2 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C08A6F6u, 2);  /* 0C08A6F4 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C08A6F8u, 1);  /* 0C08A6F6 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C08A6FAu, 1);  /* 0C08A6F8 mov.l Rm,@-Rn */
	r0 = 0xB4u; UPD(0x0C08A6FCu, 1);  /* 0C08A6FA mov.w @(disp,pc),Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C08A6FC exts.w Rm,Rn */
	IF(0x0C08A6FEu); MACL = r11 * r0;  /* 0C08A6FE mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C08A702u, 4);  /* 0C08A700 mov.l Rm,@-Rn */
	r2 = 0xC286578u; UPD(0x0C08A704u, 1);  /* 0C08A702 mov.l @(disp,pc),Rn */
	IF(0x0C08A704u); r0 = MACL;  /* 0C08A704 sts macl,Rn */
	IF(0x0C08A706u); r15 -= 4; W32(r15, PR); UPD(0x0C08A708u, 2);  /* 0C08A706 sts.l pr,@-Rn */
	r0 += r2;  /* 0C08A708 add Rm,Rn */
	r1 = R32(r0 + 0x8u); UPD(0x0C08A70Cu, 2);  /* 0C08A70A mov.l @(disp,Rm),Rn */
	T = r1 > r3;  /* 0C08A70C cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C08A75Au, 4); goto L_0C08A75A; } goto L_0C08A712; }  /* 0C08A70E bt/s */
L_0C08A712: BLKS(0x0C08A712u);
	r8 = R32(r0 + 0x1Cu); UPD(0x0C08A714u, 2);  /* 0C08A712 mov.l @(disp,Rm),Rn */
	{ u32 v_ = R32(r8); r8 += 4; r3 = v_; } UPD(0x0C08A716u, 1);  /* 0C08A714 mov.l @Rm+,Rn */
	T = (r3 & r3) == 0;  /* 0C08A716 tst Rm,Rn */
	if (T) { UPD(0x0C08A74Eu, 4); goto L_0C08A74E; }  /* 0C08A718 bt */
L_0C08A71A: BLKS(0x0C08A71Au);
	r9 = r0;  /* 0C08A71A mov Rm,Rn */
	r10 = 0xA9u; UPD(0x0C08A71Eu, 2);  /* 0C08A71C mov.w @(disp,pc),Rn */
	r10 += r0;  /* 0C08A71E add Rm,Rn */
	UPD(0x0C08A720u, 1);
L_0C08A720: BLKS(0x0C08A720u);
	r8 += 0x4u;  /* 0C08A720 add #imm,Rn */
	{ u32 v_ = R32(r8); r8 += 4; r7 = v_; } UPD(0x0C08A724u, 2);  /* 0C08A722 mov.l @Rm+,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C08A724 add #imm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C08A728u, 2);  /* 0C08A726 mov.l @(disp,Rm),Rn */
	r0 = 0xB0u; UPD(0x0C08A72Au, 1);  /* 0C08A728 mov.w @(disp,pc),Rn */
	r6 += r7;  /* 0C08A72A add Rm,Rn */
	IF(0x0C08A72Cu); r3 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C08A72Eu, 2);  /* 0C08A72C mov.b @(r0,Rm),Rn */
	{ u32 v_ = R32(r8); r8 += 4; r4 = v_; } UPD(0x0C08A730u, 1);  /* 0C08A72E mov.l @Rm+,Rn */
	r0 = r3 & 0xFF;  /* 0C08A730 extu.b Rm,Rn */
	r7 = R32(r9 + 0x28u); UPD(0x0C08A734u, 2);  /* 0C08A732 mov.l @(disp,Rm),Rn */
	W32(r15, r0); UPD(0x0C08A736u, 1);  /* 0C08A734 mov.l Rm,@Rn */
	r7 += r4;  /* 0C08A736 add Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r10); UPD(0x0C08A73Au, 2);  /* 0C08A738 mov.b @Rm,Rn */
	r5 = r2 & 0xFF;  /* 0C08A73A extu.b Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C08A73Eu, 2);  /* 0C08A73C mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BD6F0u; UPD(0x0C08A740u, 1);  /* 0C08A73E mov.l @(disp,pc),Rn */
	r5 = 0x3u;  /* 0C08A740 mov #imm,Rn */
	IF(0x0C08A742u); { u32 t_ = r0; PR = 0x0C08A746u; r4 = R32(r9); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C08A746u); }  /* 0C08A742 jsr @Rn */
L_0C08A746: BLKS(0x0C08A746u);
	{ u32 v_ = R32(r8); r8 += 4; r4 = v_; } UPD(0x0C08A748u, 1);  /* 0C08A746 mov.l @Rm+,Rn */
	T = (r4 & r4) == 0;  /* 0C08A748 tst Rm,Rn */
	{ u32 c_ = !T; r15 += 0x8u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C08A720u, 4); goto L_0C08A720; } UPD(0x0C08A74Eu, 1); goto L_0C08A74E; }  /* 0C08A74A bf/s */
L_0C08A74E: BLKS(0x0C08A74Eu);
	r9 = 0xB4u; UPD(0x0C08A750u, 1);  /* 0C08A74E mov.w @(disp,pc),Rn */
	r8 = 0x0u;  /* 0C08A750 mov #imm,Rn */
	IF(0x0C08A752u); MACL = r11 * r9;  /* 0C08A752 mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C08A756u, 4);  /* 0C08A754 mov.l @(disp,pc),Rn */
	IF(0x0C08A756u); r0 = MACL;  /* 0C08A756 sts macl,Rn */
	IF(0x0C08A758u); W32(r0 + r6, r8); UPD(0x0C08A75Au, 2);  /* 0C08A758 mov.l Rm,@(r0,Rn) */
L_0C08A75A: BLKS(0x0C08A75Au);
	r15 = r14;  /* 0C08A75A mov Rm,Rn */
	IF(0x0C08A75Cu); PR = R32(r15); r15 += 4; UPD(0x0C08A75Eu, 2);  /* 0C08A75C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08A760u, 1);  /* 0C08A75E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08A762u, 1);  /* 0C08A760 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08A764u, 1);  /* 0C08A762 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08A766u, 1);  /* 0C08A764 mov.l @Rm+,Rn */
	IF(0x0C08A766u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08A766 rts */
}

void blk_f_0C08A780(sh3_t *c)
{
	LOCALS;
	goto L_0C08A780;
L_0C08A6F0: BLKS(0x0C08A6F0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C08A6F2u, 1);  /* 0C08A6F0 mov.l Rm,@-Rn */
	r3 = 0xBu;  /* 0C08A6F2 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C08A6F6u, 2);  /* 0C08A6F4 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C08A6F8u, 1);  /* 0C08A6F6 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C08A6FAu, 1);  /* 0C08A6F8 mov.l Rm,@-Rn */
	r0 = 0xB4u; UPD(0x0C08A6FCu, 1);  /* 0C08A6FA mov.w @(disp,pc),Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C08A6FC exts.w Rm,Rn */
	IF(0x0C08A6FEu); MACL = r11 * r0;  /* 0C08A6FE mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C08A702u, 4);  /* 0C08A700 mov.l Rm,@-Rn */
	r2 = 0xC286578u; UPD(0x0C08A704u, 1);  /* 0C08A702 mov.l @(disp,pc),Rn */
	IF(0x0C08A704u); r0 = MACL;  /* 0C08A704 sts macl,Rn */
	IF(0x0C08A706u); r15 -= 4; W32(r15, PR); UPD(0x0C08A708u, 2);  /* 0C08A706 sts.l pr,@-Rn */
	r0 += r2;  /* 0C08A708 add Rm,Rn */
	r1 = R32(r0 + 0x8u); UPD(0x0C08A70Cu, 2);  /* 0C08A70A mov.l @(disp,Rm),Rn */
	T = r1 > r3;  /* 0C08A70C cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C08A75Au, 4); goto L_0C08A75A; } goto L_0C08A712; }  /* 0C08A70E bt/s */
L_0C08A712: BLKS(0x0C08A712u);
	r8 = R32(r0 + 0x1Cu); UPD(0x0C08A714u, 2);  /* 0C08A712 mov.l @(disp,Rm),Rn */
	{ u32 v_ = R32(r8); r8 += 4; r3 = v_; } UPD(0x0C08A716u, 1);  /* 0C08A714 mov.l @Rm+,Rn */
	T = (r3 & r3) == 0;  /* 0C08A716 tst Rm,Rn */
	if (T) { UPD(0x0C08A74Eu, 4); goto L_0C08A74E; }  /* 0C08A718 bt */
L_0C08A71A: BLKS(0x0C08A71Au);
	r9 = r0;  /* 0C08A71A mov Rm,Rn */
	r10 = 0xA9u; UPD(0x0C08A71Eu, 2);  /* 0C08A71C mov.w @(disp,pc),Rn */
	r10 += r0;  /* 0C08A71E add Rm,Rn */
	UPD(0x0C08A720u, 1);
L_0C08A720: BLKS(0x0C08A720u);
	r8 += 0x4u;  /* 0C08A720 add #imm,Rn */
	{ u32 v_ = R32(r8); r8 += 4; r7 = v_; } UPD(0x0C08A724u, 2);  /* 0C08A722 mov.l @Rm+,Rn */
	r15 += 0xFFFFFFF8u;  /* 0C08A724 add #imm,Rn */
	r6 = R32(r9 + 0x24u); UPD(0x0C08A728u, 2);  /* 0C08A726 mov.l @(disp,Rm),Rn */
	r0 = 0xB0u; UPD(0x0C08A72Au, 1);  /* 0C08A728 mov.w @(disp,pc),Rn */
	r6 += r7;  /* 0C08A72A add Rm,Rn */
	IF(0x0C08A72Cu); r3 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C08A72Eu, 2);  /* 0C08A72C mov.b @(r0,Rm),Rn */
	{ u32 v_ = R32(r8); r8 += 4; r4 = v_; } UPD(0x0C08A730u, 1);  /* 0C08A72E mov.l @Rm+,Rn */
	r0 = r3 & 0xFF;  /* 0C08A730 extu.b Rm,Rn */
	r7 = R32(r9 + 0x28u); UPD(0x0C08A734u, 2);  /* 0C08A732 mov.l @(disp,Rm),Rn */
	W32(r15, r0); UPD(0x0C08A736u, 1);  /* 0C08A734 mov.l Rm,@Rn */
	r7 += r4;  /* 0C08A736 add Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r10); UPD(0x0C08A73Au, 2);  /* 0C08A738 mov.b @Rm,Rn */
	r5 = r2 & 0xFF;  /* 0C08A73A extu.b Rm,Rn */
	W32(r15 + 0x4u, r5); UPD(0x0C08A73Eu, 2);  /* 0C08A73C mov.l Rm,@(disp,Rn) */
	r0 = 0xC0BD6F0u; UPD(0x0C08A740u, 1);  /* 0C08A73E mov.l @(disp,pc),Rn */
	r5 = 0x3u;  /* 0C08A740 mov #imm,Rn */
	IF(0x0C08A742u); { u32 t_ = r0; PR = 0x0C08A746u; r4 = R32(r9); /* slot mov.l @Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BD6F0, 0x0C0BD6F0u, 0x0C08A746u); }  /* 0C08A742 jsr @Rn */
L_0C08A746: BLKS(0x0C08A746u);
	{ u32 v_ = R32(r8); r8 += 4; r4 = v_; } UPD(0x0C08A748u, 1);  /* 0C08A746 mov.l @Rm+,Rn */
	T = (r4 & r4) == 0;  /* 0C08A748 tst Rm,Rn */
	{ u32 c_ = !T; r15 += 0x8u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C08A720u, 4); goto L_0C08A720; } UPD(0x0C08A74Eu, 1); goto L_0C08A74E; }  /* 0C08A74A bf/s */
L_0C08A74E: BLKS(0x0C08A74Eu);
	r9 = 0xB4u; UPD(0x0C08A750u, 1);  /* 0C08A74E mov.w @(disp,pc),Rn */
	r8 = 0x0u;  /* 0C08A750 mov #imm,Rn */
	IF(0x0C08A752u); MACL = r11 * r9;  /* 0C08A752 mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C08A756u, 4);  /* 0C08A754 mov.l @(disp,pc),Rn */
	IF(0x0C08A756u); r0 = MACL;  /* 0C08A756 sts macl,Rn */
	IF(0x0C08A758u); W32(r0 + r6, r8); UPD(0x0C08A75Au, 2);  /* 0C08A758 mov.l Rm,@(r0,Rn) */
L_0C08A75A: BLKS(0x0C08A75Au);
	r15 = r14;  /* 0C08A75A mov Rm,Rn */
	IF(0x0C08A75Cu); PR = R32(r15); r15 += 4; UPD(0x0C08A75Eu, 2);  /* 0C08A75C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08A760u, 1);  /* 0C08A75E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08A762u, 1);  /* 0C08A760 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08A764u, 1);  /* 0C08A762 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08A766u, 1);  /* 0C08A764 mov.l @Rm+,Rn */
	IF(0x0C08A766u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08A766 rts */
L_0C08A780: BLKS(0x0C08A780u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C08A782u, 1);  /* 0C08A780 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C08A784u, 1);  /* 0C08A782 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C08A784 exts.w Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C08A788u, 2);  /* 0C08A786 mov.l Rm,@-Rn */
	r3 = 0xB4u; UPD(0x0C08A78Au, 1);  /* 0C08A788 mov.w @(disp,pc),Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C08A78Cu, 1);  /* 0C08A78A mov.l Rm,@-Rn */
	IF(0x0C08A78Cu); MACL = r8 * r3;  /* 0C08A78C mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C08A790u, 3);  /* 0C08A78E mov.l Rm,@-Rn */
	r0 = 0xC286578u; UPD(0x0C08A792u, 1);  /* 0C08A790 mov.l @(disp,pc),Rn */
	IF(0x0C08A792u); r2 = MACL;  /* 0C08A792 sts macl,Rn */
	IF(0x0C08A794u); r15 -= 4; W32(r15, PR); UPD(0x0C08A796u, 2);  /* 0C08A794 sts.l pr,@-Rn */
	r0 += r2;  /* 0C08A796 add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C08A79Au, 2);  /* 0C08A798 mov.l @(disp,Rm),Rn */
	r0 = 0xBu;  /* 0C08A79A mov #imm,Rn */
	T = r2 > r0;  /* 0C08A79C cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C08A7E4u, 5); goto L_0C08A7E4; } goto L_0C08A7A2; }  /* 0C08A79E bt/s */
L_0C08A7A2: BLKS(0x0C08A7A2u);
	r0 = 0xC08A7B4u;  /* 0C08A7A2 mova @(disp,pc),r0 */
	IF(0x0C08A7A4u); r4 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C08A7A6u, 3);  /* 0C08A7A4 mov.b @(r0,Rm),Rn */
	r4 = r4 & 0xFF;  /* 0C08A7A6 extu.b Rm,Rn */
	IF(0x0C08A7A8u); { u32 tv_ = (r4 + 0x0C08A7ACu); u32 t_ = PHYS(tv_); IF(0x0C08A7AAu); ; /* slot nop */ JRGN(tv_); UPD(t_, 4); switch (t_) { case 0x0C08A7C0u: goto L_0C08A7C0; case 0x0C08A880u: goto L_0C08A880; default: JUMPD(tv_); } }  /* 0C08A7A8 braf Rn */
L_0C08A7C0: BLKS(0x0C08A7C0u);
	r6 = 0xB4u; UPD(0x0C08A7C2u, 1);  /* 0C08A7C0 mov.w @(disp,pc),Rn */
	IF(0x0C08A7C2u); MACL = r8 * r6;  /* 0C08A7C2 mul.l Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C08A7C6u, 3);  /* 0C08A7C4 mov.l @(disp,pc),Rn */
	IF(0x0C08A7C6u); r9 = MACL;  /* 0C08A7C6 sts macl,Rn */
	r10 = 0x9Fu; UPD(0x0C08A7CAu, 2);  /* 0C08A7C8 mov.w @(disp,pc),Rn */
	r9 += r5;  /* 0C08A7CA add Rm,Rn */
	r10 += r9;  /* 0C08A7CC add Rm,Rn */
	r7 = (u32)(s32)(s8)R8(r10); UPD(0x0C08A7D0u, 3);  /* 0C08A7CE mov.b @Rm,Rn */
	r0 = r7 & 0xFF;  /* 0C08A7D0 extu.b Rm,Rn */
	T = r0 == 0x1u;  /* 0C08A7D2 cmp/eq #imm,r0 */
	{ u32 c_ = T; r11 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C08A840u, 5); goto L_0C08A840; } goto L_0C08A7D8; }  /* 0C08A7D4 bt/s */
L_0C08A7D8: BLKS(0x0C08A7D8u);
	T = (s32)r0 > (s32)r11;  /* 0C08A7D8 cmp/gt Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x2u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C08A820u, 5); goto L_0C08A820; } goto L_0C08A7DE; }  /* 0C08A7DA bt/s */
L_0C08A7DE: BLKS(0x0C08A7DEu);
	T = (r0 & r0) == 0;  /* 0C08A7DE tst Rm,Rn */
	if (T) { UPD(0x0C08A800u, 5); goto L_0C08A800; }  /* 0C08A7E0 bt */
L_0C08A7E2: BLKS(0x0C08A7E2u);
	IF(0x0C08A7E2u); ;  /* 0C08A7E2 nop */
	UPD(0x0C08A7E4u, 1);
L_0C08A7E4: BLKS(0x0C08A7E4u);
	r15 = r14;  /* 0C08A7E4 mov Rm,Rn */
	IF(0x0C08A7E6u); PR = R32(r15); r15 += 4; UPD(0x0C08A7E8u, 2);  /* 0C08A7E6 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08A7EAu, 1);  /* 0C08A7E8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08A7ECu, 1);  /* 0C08A7EA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08A7EEu, 1);  /* 0C08A7EC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08A7F0u, 1);  /* 0C08A7EE mov.l @Rm+,Rn */
	IF(0x0C08A7F0u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08A7F0 rts */
L_0C08A800: BLKS(0x0C08A800u);
	r4 = r8;  /* 0C08A800 mov Rm,Rn */
	r8 = 0xC0A9CB0u; UPD(0x0C08A804u, 2);  /* 0C08A802 mov.l @(disp,pc),Rn */
	IF(0x0C08A804u); { u32 t_ = r8; PR = 0x0C08A808u; IF(0x0C08A806u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9CB0, 0x0C0A9CB0u, 0x0C08A808u); }  /* 0C08A804 jsr @Rn */
L_0C08A808: BLKS(0x0C08A808u);
	r1 = R32(r9); UPD(0x0C08A80Au, 1);  /* 0C08A808 mov.l @Rm,Rn */
	r7 = 0x100u; UPD(0x0C08A80Cu, 1);  /* 0C08A80A mov.w @(disp,pc),Rn */
	T = (r1 & r7) == 0;  /* 0C08A80C tst Rm,Rn */
	if (T) { UPD(0x0C08A7E4u, 4); goto L_0C08A7E4; }  /* 0C08A80E bt */
L_0C08A810: BLKS(0x0C08A810u);
	r1 = (u32)(s32)(s8)R8(r10); UPD(0x0C08A812u, 1);  /* 0C08A810 mov.b @Rm,Rn */
	r0 = 0x88u; UPD(0x0C08A814u, 1);  /* 0C08A812 mov.w @(disp,pc),Rn */
	IF(0x0C08A814u); W16(r0 + r9, r11); UPD(0x0C08A816u, 1);  /* 0C08A814 mov.w Rm,@(r0,Rn) */
	r1 += 0x1u;  /* 0C08A816 add #imm,Rn */
	UPD(0x0C08A818u, 1);
L_0C08A818: BLKS(0x0C08A818u);
	{ W8(r10, r1); /* slot mov.b Rm,@Rn */ UPD(0x0C08A7E4u, 3); goto L_0C08A7E4; }  /* 0C08A818 bra */
L_0C08A820: BLKS(0x0C08A820u);
	if (!T) { UPD(0x0C08A7E4u, 3); goto L_0C08A7E4; }  /* 0C08A820 bf */
L_0C08A822: BLKS(0x0C08A822u);
	r4 = r8;  /* 0C08A822 mov Rm,Rn */
	r8 = 0xC0A9CB0u; UPD(0x0C08A826u, 2);  /* 0C08A824 mov.l @(disp,pc),Rn */
	IF(0x0C08A826u); { u32 t_ = r8; PR = 0x0C08A82Au; IF(0x0C08A828u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9CB0, 0x0C0A9CB0u, 0x0C08A82Au); }  /* 0C08A826 jsr @Rn */
L_0C08A82A: BLKS(0x0C08A82Au);
	r7 = R32(r9); UPD(0x0C08A82Cu, 1);  /* 0C08A82A mov.l @Rm,Rn */
	r6 = 0x100u; UPD(0x0C08A82Eu, 1);  /* 0C08A82C mov.w @(disp,pc),Rn */
	T = (r7 & r6) == 0;  /* 0C08A82E tst Rm,Rn */
	if (!T) { UPD(0x0C08A7E4u, 4); goto L_0C08A7E4; }  /* 0C08A830 bf */
L_0C08A832: BLKS(0x0C08A832u);
	r11 = 0xFFFFFFFFu;  /* 0C08A832 mov #imm,Rn */
	r0 = 0x88u; UPD(0x0C08A836u, 2);  /* 0C08A834 mov.w @(disp,pc),Rn */
	r1 = (u32)(s32)(s8)R8(r10); UPD(0x0C08A838u, 1);  /* 0C08A836 mov.b @Rm,Rn */
	IF(0x0C08A838u); W16(r0 + r9, r11); UPD(0x0C08A83Au, 1);  /* 0C08A838 mov.w Rm,@(r0,Rn) */
	{ r1 += 0xFFFFFFFFu; /* slot add #imm,Rn */ UPD(0x0C08A818u, 3); goto L_0C08A818; }  /* 0C08A83A bra */
L_0C08A840: BLKS(0x0C08A840u);
	r6 = 0x88u; UPD(0x0C08A842u, 1);  /* 0C08A840 mov.w @(disp,pc),Rn */
	r4 = 0xFu;  /* 0C08A842 mov #imm,Rn */
	r6 += r9;  /* 0C08A844 add Rm,Rn */
	r3 = (u32)(s32)(s16)R16(r6); UPD(0x0C08A848u, 3);  /* 0C08A846 mov.w @Rm,Rn */
	r11 = r9;  /* 0C08A848 mov Rm,Rn */
	r2 = R32(r9 + 0x24u); UPD(0x0C08A84Cu, 2);  /* 0C08A84A mov.l @(disp,Rm),Rn */
	IF(0x0C08A84Cu); ARG0(0x434Du); { s32 s_ = (s32)r4; if (s_ >= 0) r3 <<= (s_ & 31); else if ((s_ & 31) == 0) r3 = 0; else r3 >>= ((~s_ & 31) + 1); }  /* 0C08A84C shld Rm,Rn */
	r2 += r3;  /* 0C08A84E add Rm,Rn */
	W32(r9 + 0x24u, r2); UPD(0x0C08A852u, 3);  /* 0C08A850 mov.l Rm,@(disp,Rn) */
	r11 += 0x50u;  /* 0C08A852 add #imm,Rn */
	r2 = 0x99u; UPD(0x0C08A856u, 2);  /* 0C08A854 mov.w @(disp,pc),Rn */
	r0 = R32(r11); UPD(0x0C08A858u, 1);  /* 0C08A856 mov.l @Rm,Rn */
	r2 += r9;  /* 0C08A858 add Rm,Rn */
	r0 += r3;  /* 0C08A85A add Rm,Rn */
	r9 = (u32)(s32)(s8)R8(r2); UPD(0x0C08A85Eu, 3);  /* 0C08A85C mov.b @Rm,Rn */
	W32(r11, r0); UPD(0x0C08A860u, 1);  /* 0C08A85E mov.l Rm,@Rn */
	r9 += 0x1u;  /* 0C08A860 add #imm,Rn */
	r0 = r9 & 0xFF;  /* 0C08A862 extu.b Rm,Rn */
	T = r0 == 0x2Au;  /* 0C08A864 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r2, r9); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C08A7E4u, 6); goto L_0C08A7E4; } UPD(0x0C08A86Au, 1); goto L_0C08A86A; }  /* 0C08A866 bf/s */
L_0C08A86A: BLKS(0x0C08A86Au);
	r6 += 0x1u;  /* 0C08A86A add #imm,Rn */
	r5 = 0x0u;  /* 0C08A86C mov #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r6); UPD(0x0C08A870u, 3);  /* 0C08A86E mov.b @Rm,Rn */
	W8(r2, r5); UPD(0x0C08A872u, 1);  /* 0C08A870 mov.b Rm,@Rn */
	{ r1 += r7; /* slot add Rm,Rn */ UPD(0x0C08A818u, 3); goto L_0C08A818; }  /* 0C08A872 bra */
L_0C08A880: BLKS(0x0C08A880u);
	r10 = 0xC0A8B50u; UPD(0x0C08A882u, 1);  /* 0C08A880 mov.l @(disp,pc),Rn */
	IF(0x0C08A882u); { u32 t_ = r10; PR = 0x0C08A886u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C08A886u); }  /* 0C08A882 jsr @Rn */
L_0C08A886: BLKS(0x0C08A886u);
	IF(0x0C08A886u); T = (s32)r0 >= 0;  /* 0C08A886 cmp/pz Rn */
	if (!T) { UPD(0x0C08A8C0u, 4); goto L_0C08A8C0; }  /* 0C08A888 bf */
L_0C08A88A: BLKS(0x0C08A88Au);
	r2 = 0xB4u; UPD(0x0C08A88Cu, 1);  /* 0C08A88A mov.w @(disp,pc),Rn */
	IF(0x0C08A88Cu); MACL = r8 * r2;  /* 0C08A88C mul.l Rm,Rn */
	r11 = 0xC286578u; UPD(0x0C08A890u, 3);  /* 0C08A88E mov.l @(disp,pc),Rn */
	IF(0x0C08A890u); r9 = MACL;  /* 0C08A890 sts macl,Rn */
	IF(0x0C08A892u); MACL = r0 * r2;  /* 0C08A892 mul.l Rm,Rn */
	r9 += r11;  /* 0C08A894 add Rm,Rn */
	r9 += 0x50u;  /* 0C08A896 add #imm,Rn */
	IF(0x0C08A898u); r5 = MACL;  /* 0C08A898 sts macl,Rn */
	r5 += r11;  /* 0C08A89A add Rm,Rn */
	r5 += 0x50u;  /* 0C08A89C add #imm,Rn */
	r7 = R32(r5); UPD(0x0C08A8A0u, 9);  /* 0C08A89E mov.l @Rm,Rn */
	W32(r9, r7); UPD(0x0C08A8A2u, 1);  /* 0C08A8A0 mov.l Rm,@Rn */
	r5 += 0xFFFFFFB0u;  /* 0C08A8A2 add #imm,Rn */
	r9 += 0xFFFFFFB0u;  /* 0C08A8A4 add #imm,Rn */
	r3 = R32(r5 + 0x24u); UPD(0x0C08A8A8u, 3);  /* 0C08A8A6 mov.l @(disp,Rm),Rn */
	r6 = R32(r9 + 0x2Cu); UPD(0x0C08A8AAu, 1);  /* 0C08A8A8 mov.l @(disp,Rm),Rn */
	r4 = R32(r5 + 0x28u); UPD(0x0C08A8ACu, 1);  /* 0C08A8AA mov.l @(disp,Rm),Rn */
	r3 += r6;  /* 0C08A8AC add Rm,Rn */
	r1 = R32(r9 + 0x30u); UPD(0x0C08A8B0u, 2);  /* 0C08A8AE mov.l @(disp,Rm),Rn */
	r3 += r7;  /* 0C08A8B0 add Rm,Rn */
	r4 += r1;  /* 0C08A8B2 add Rm,Rn */
	W32(r9 + 0x24u, r3); UPD(0x0C08A8B6u, 3);  /* 0C08A8B4 mov.l Rm,@(disp,Rn) */
	{ W32(r9 + 0x28u, r4); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C08A7E4u, 3); goto L_0C08A7E4; }  /* 0C08A8B6 bra */
L_0C08A8C0: BLKS(0x0C08A8C0u);
	r0 = 0xC08A6F0u; UPD(0x0C08A8C2u, 1);  /* 0C08A8C0 mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C08A8C2 mov Rm,Rn */
	r15 = r14;  /* 0C08A8C4 mov Rm,Rn */
	IF(0x0C08A8C6u); PR = R32(r15); r15 += 4; UPD(0x0C08A8C8u, 3);  /* 0C08A8C6 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08A8CAu, 1);  /* 0C08A8C8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08A8CCu, 1);  /* 0C08A8CA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08A8CEu, 1);  /* 0C08A8CC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08A8D0u, 1);  /* 0C08A8CE mov.l @Rm+,Rn */
	IF(0x0C08A8D0u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C08A6F0u: goto L_0C08A6F0; default: JUMPD(tv_); } }  /* 0C08A8D0 jmp @Rn */
}

void blk_f_0C08A8F0(sh3_t *c)
{
	LOCALS;
L_0C08A8F0: BLKS(0x0C08A8F0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C08A8F2u, 1);  /* 0C08A8F0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C08A8F4u, 1);  /* 0C08A8F2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C08A8F6u, 1);  /* 0C08A8F4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C08A8F8u, 1);  /* 0C08A8F6 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C08A8FAu, 1);  /* 0C08A8F8 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C08A8FCu, 1);  /* 0C08A8FA mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C08A8FEu, 1);  /* 0C08A8FC mov.l Rm,@-Rn */
	r9 = 0xC2460ACu; UPD(0x0C08A900u, 1);  /* 0C08A8FE mov.l @(disp,pc),Rn */
	IF(0x0C08A900u); r15 -= 4; W32(r15, PR); UPD(0x0C08A902u, 1);  /* 0C08A900 sts.l pr,@-Rn */
	r8 = 0xC069510u; UPD(0x0C08A904u, 1);  /* 0C08A902 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C08A904 mov Rm,Rn */
	r0 = (u32)(s32)(s16)R16(r9); UPD(0x0C08A908u, 2);  /* 0C08A906 mov.w @Rm,Rn */
	r5 = 0x8000u; UPD(0x0C08A90Au, 1);  /* 0C08A908 mov.l @(disp,pc),Rn */
	IF(0x0C08A90Au); { u32 t_ = r8; PR = 0x0C08A90Eu; r4 = r0 & 0xFFFF; /* slot extu.w Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069510, 0x0C069510u, 0x0C08A90Eu); }  /* 0C08A90A jsr @Rn */
L_0C08A90E: BLKS(0x0C08A90Eu);
	T = (r0 & r0) == 0;  /* 0C08A90E tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C08A930u, 4); goto L_0C08A930; } UPD(0x0C08A914u, 1); goto L_0C08A914; }  /* 0C08A910 bf/s */
L_0C08A914: BLKS(0x0C08A914u);
	r15 = r14;  /* 0C08A914 mov Rm,Rn */
	IF(0x0C08A916u); PR = R32(r15); r15 += 4; UPD(0x0C08A918u, 2);  /* 0C08A916 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08A91Au, 1);  /* 0C08A918 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08A91Cu, 1);  /* 0C08A91A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08A91Eu, 1);  /* 0C08A91C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08A920u, 1);  /* 0C08A91E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08A922u, 1);  /* 0C08A920 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08A924u, 1);  /* 0C08A922 mov.l @Rm+,Rn */
	IF(0x0C08A924u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08A924 rts */
L_0C08A930: BLKS(0x0C08A930u);
	r8 = 0xC071740u; UPD(0x0C08A932u, 1);  /* 0C08A930 mov.l @(disp,pc),Rn */
	IF(0x0C08A932u); { u32 t_ = r8; PR = 0x0C08A936u; r4 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C071740, 0x0C071740u, 0x0C08A936u); }  /* 0C08A932 jsr @Rn */
L_0C08A936: BLKS(0x0C08A936u);
	T = (r0 & r0) == 0;  /* 0C08A936 tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C08A914u, 4); goto L_0C08A914; } goto L_0C08A93C; }  /* 0C08A938 bt/s */
L_0C08A93C: BLKS(0x0C08A93Cu);
	r11 = 0xC28EDFCu; UPD(0x0C08A93Eu, 2);  /* 0C08A93C mov.l @(disp,pc),Rn */
	r2 = 0x0u;  /* 0C08A93E mov #imm,Rn */
	r13 = (u32)(s32)(s16)R16(r11); UPD(0x0C08A942u, 2);  /* 0C08A940 mov.w @Rm,Rn */
	r8 = 0xB4u; UPD(0x0C08A944u, 1);  /* 0C08A942 mov.w @(disp,pc),Rn */
	IF(0x0C08A944u); MACL = r13 * r8;  /* 0C08A944 mul.l Rm,Rn */
	r6 = 0xC2B1811u; UPD(0x0C08A948u, 3);  /* 0C08A946 mov.l @(disp,pc),Rn */
	r5 = 0xC286578u; UPD(0x0C08A94Au, 1);  /* 0C08A948 mov.l @(disp,pc),Rn */
	IF(0x0C08A94Au); r8 = MACL;  /* 0C08A94A sts macl,Rn */
	r11 = (u32)(s32)(s8)R8(r6); UPD(0x0C08A94Eu, 2);  /* 0C08A94C mov.b @Rm,Rn */
	r8 += r5;  /* 0C08A94E add Rm,Rn */
	r4 = 0xC1008110u; UPD(0x0C08A952u, 2);  /* 0C08A950 mov.l @(disp,pc),Rn */
	r3 = (u32)(s32)(s16)R16(r9); UPD(0x0C08A954u, 1);  /* 0C08A952 mov.w @Rm,Rn */
	r0 = 0xC0A8A30u; UPD(0x0C08A956u, 1);  /* 0C08A954 mov.l @(disp,pc),Rn */
	r12 = r3 & 0xFFFF;  /* 0C08A956 extu.w Rm,Rn */
	W32(r8, r4); UPD(0x0C08A95Au, 2);  /* 0C08A958 mov.l Rm,@Rn */
	r9 = 0x4Cu;  /* 0C08A95A mov #imm,Rn */
	W32(r8 + 0xCu, r2); UPD(0x0C08A95Eu, 2);  /* 0C08A95C mov.l Rm,@(disp,Rn) */
	r4 = r13;  /* 0C08A95E mov Rm,Rn */
	W32(r8 + 0x8u, r2); UPD(0x0C08A962u, 2);  /* 0C08A960 mov.l Rm,@(disp,Rn) */
	IF(0x0C08A962u); { u32 t_ = r0; PR = 0x0C08A966u; W32(r8 + 0x4u, r12); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C08A966u); }  /* 0C08A962 jsr @Rn */
L_0C08A966: BLKS(0x0C08A966u);
	IF(0x0C08A966u); MACL = r11 * r9;  /* 0C08A966 mul.l Rm,Rn */
	r1 = 0xC286318u; UPD(0x0C08A96Au, 3);  /* 0C08A968 mov.l @(disp,pc),Rn */
	r5 = 0xC3C43C6u; UPD(0x0C08A96Cu, 1);  /* 0C08A96A mov.l @(disp,pc),Rn */
	IF(0x0C08A96Cu); r12 = MACL;  /* 0C08A96C sts macl,Rn */
	r10 = 0xC237C08u; UPD(0x0C08A970u, 2);  /* 0C08A96E mov.l @(disp,pc),Rn */
	r12 += r1;  /* 0C08A970 add Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r5); UPD(0x0C08A974u, 2);  /* 0C08A972 mov.w @Rm,Rn */
	r7 = R32(r12 + 0x8u); UPD(0x0C08A976u, 1);  /* 0C08A974 mov.l @(disp,Rm),Rn */
	IF(0x0C08A976u); r4 <<= 16;  /* 0C08A976 shll16 Rn */
	r6 = (u32)(s32)(s16)R16(r10); UPD(0x0C08A97Au, 2);  /* 0C08A978 mov.w @Rm,Rn */
	r12 += 0x42u;  /* 0C08A97A add #imm,Rn */
	r3 = 0xC0A9AE0u; UPD(0x0C08A97Eu, 2);  /* 0C08A97C mov.l @(disp,pc),Rn */
	IF(0x0C08A97Eu); r6 <<= 16;  /* 0C08A97E shll16 Rn */
	W32(r8 + 0x28u, r4); UPD(0x0C08A982u, 2);  /* 0C08A980 mov.l Rm,@(disp,Rn) */
	r6 -= r7;  /* 0C08A982 sub Rm,Rn */
	r4 = r13;  /* 0C08A984 mov Rm,Rn */
	IF(0x0C08A986u); { u32 t_ = r3; PR = 0x0C08A98Au; W32(r8 + 0x24u, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 4); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C08A98Au); }  /* 0C08A986 jsr @Rn */
L_0C08A98A: BLKS(0x0C08A98Au);
	r0 = 0xB0u; UPD(0x0C08A98Cu, 1);  /* 0C08A98A mov.w @(disp,pc),Rn */
	r13 = 0x0u;  /* 0C08A98C mov #imm,Rn */
	IF(0x0C08A98Eu); W8(r0 + r8, r11); UPD(0x0C08A990u, 2);  /* 0C08A98E mov.b Rm,@(r0,Rn) */
	r2 = (u32)(s32)(s8)R8(r12); UPD(0x0C08A992u, 1);  /* 0C08A990 mov.b @Rm,Rn */
	r0 += 0xFFFFFFFDu;  /* 0C08A992 add #imm,Rn */
	IF(0x0C08A994u); W8(r0 + r8, r2); UPD(0x0C08A996u, 2);  /* 0C08A994 mov.b Rm,@(r0,Rn) */
	r12 = r8;  /* 0C08A996 mov Rm,Rn */
	r0 += 0xFFFFFFFCu;  /* 0C08A998 add #imm,Rn */
	IF(0x0C08A99Au); W8(r0 + r8, r2); UPD(0x0C08A99Cu, 3);  /* 0C08A99A mov.b Rm,@(r0,Rn) */
L_0C08A99C: BLKS(0x0C08A99Cu);
	r6 = 0xC28EDFCu; UPD(0x0C08A99Eu, 1);  /* 0C08A99C mov.l @(disp,pc),Rn */
	r7 = r13;  /* 0C08A99E mov Rm,Rn */
	r7 += r7;  /* 0C08A9A0 add Rm,Rn */
	r7 += r6;  /* 0C08A9A2 add Rm,Rn */
	r7 += 0x2u;  /* 0C08A9A4 add #imm,Rn */
	r9 = (u32)(s32)(s16)R16(r7); UPD(0x0C08A9A8u, 5);  /* 0C08A9A6 mov.w @Rm,Rn */
	r2 = 0x0u;  /* 0C08A9A8 mov #imm,Rn */
	r8 = 0xB4u; UPD(0x0C08A9ACu, 2);  /* 0C08A9AA mov.w @(disp,pc),Rn */
	IF(0x0C08A9ACu); MACL = r9 * r8;  /* 0C08A9AC mul.l Rm,Rn */
	r1 = 0xC286578u; UPD(0x0C08A9B0u, 3);  /* 0C08A9AE mov.l @(disp,pc),Rn */
	IF(0x0C08A9B0u); r8 = MACL;  /* 0C08A9B0 sts macl,Rn */
	r8 += r1;  /* 0C08A9B2 add Rm,Rn */
	r5 = (u32)(s32)(s16)R16(r6); UPD(0x0C08A9B6u, 3);  /* 0C08A9B4 mov.w @Rm,Rn */
	r4 = r8;  /* 0C08A9B6 mov Rm,Rn */
	r8 += 0x7Eu;  /* 0C08A9B8 add #imm,Rn */
	W16(r8, r5); UPD(0x0C08A9BCu, 3);  /* 0C08A9BA mov.w Rm,@Rn */
	r4 += 0x7Cu;  /* 0C08A9BC add #imm,Rn */
	r10 = R32(r12 + 0x4u); UPD(0x0C08A9C0u, 2);  /* 0C08A9BE mov.l @(disp,Rm),Rn */
	r8 += 0xFFFFFF82u;  /* 0C08A9C0 add #imm,Rn */
	W32(r8 + 0x4u, r10); UPD(0x0C08A9C4u, 2);  /* 0C08A9C2 mov.l Rm,@(disp,Rn) */
	r0 = 0xC0A8A30u; UPD(0x0C08A9C6u, 1);  /* 0C08A9C4 mov.l @(disp,pc),Rn */
	r10 = r13;  /* 0C08A9C6 mov Rm,Rn */
	W16(r4, r5); UPD(0x0C08A9CAu, 2);  /* 0C08A9C8 mov.w Rm,@Rn */
	r10 += 0x1u;  /* 0C08A9CA add #imm,Rn */
	r3 = 0xC0000010u; UPD(0x0C08A9CEu, 2);  /* 0C08A9CC mov.l @(disp,pc),Rn */
	r4 = r9;  /* 0C08A9CE mov Rm,Rn */
	W32(r8, r3); UPD(0x0C08A9D2u, 2);  /* 0C08A9D0 mov.l Rm,@Rn */
	IF(0x0C08A9D2u); r13 <<= 2;  /* 0C08A9D2 shll2 Rn */
	W32(r8 + 0xCu, r2); UPD(0x0C08A9D6u, 2);  /* 0C08A9D4 mov.l Rm,@(disp,Rn) */
	IF(0x0C08A9D6u); { u32 t_ = r0; PR = 0x0C08A9DAu; W32(r8 + 0x8u, r10); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8A30, 0x0C0A8A30u, 0x0C08A9DAu); }  /* 0C08A9D6 jsr @Rn */
L_0C08A9DA: BLKS(0x0C08A9DAu);
	r4 = r9;  /* 0C08A9DA mov Rm,Rn */
	r9 = 0xC0A9AE0u; UPD(0x0C08A9DEu, 2);  /* 0C08A9DC mov.l @(disp,pc),Rn */
	IF(0x0C08A9DEu); { u32 t_ = r9; PR = 0x0C08A9E2u; IF(0x0C08A9E0u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, blk_f_0C0A9AE0, 0x0C0A9AE0u, 0x0C08A9E2u); }  /* 0C08A9DE jsr @Rn */
L_0C08A9E2: BLKS(0x0C08A9E2u);
	r7 = R32(r12 + 0x24u); UPD(0x0C08A9E4u, 1);  /* 0C08A9E2 mov.l @(disp,Rm),Rn */
	r0 = r13;  /* 0C08A9E4 mov Rm,Rn */
	r6 = R32(r12 + 0x28u); UPD(0x0C08A9E8u, 2);  /* 0C08A9E6 mov.l @(disp,Rm),Rn */
	r2 = 0x4Cu;  /* 0C08A9E8 mov #imm,Rn */
	W32(r8 + 0x24u, r7); UPD(0x0C08A9ECu, 2);  /* 0C08A9EA mov.l Rm,@(disp,Rn) */
	IF(0x0C08A9ECu); MACL = r11 * r2;  /* 0C08A9EC mul.l Rm,Rn */
	W32(r8 + 0x28u, r6); UPD(0x0C08A9F0u, 3);  /* 0C08A9EE mov.l Rm,@(disp,Rn) */
	r7 = 0x2u;  /* 0C08A9F0 mov #imm,Rn */
	r5 = 0xC19E944u; UPD(0x0C08A9F4u, 2);  /* 0C08A9F2 mov.l @(disp,pc),Rn */
	r8 += 0x50u;  /* 0C08A9F4 add #imm,Rn */
	IF(0x0C08A9F6u); r4 = R32(r0 + r5); UPD(0x0C08A9F8u, 2);  /* 0C08A9F6 mov.l @(r0,Rm),Rn */
	r0 = 0xB0u; UPD(0x0C08A9FAu, 1);  /* 0C08A9F8 mov.w @(disp,pc),Rn */
	W32(r8, r4); UPD(0x0C08A9FCu, 1);  /* 0C08A9FA mov.l Rm,@Rn */
	IF(0x0C08A9FCu); r3 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C08A9FEu, 1);  /* 0C08A9FC mov.b @(r0,Rm),Rn */
	r8 += 0xFFFFFFB0u;  /* 0C08A9FE add #imm,Rn */
	IF(0x0C08AA00u); W8(r0 + r8, r3); UPD(0x0C08AA02u, 2);  /* 0C08AA00 mov.b Rm,@(r0,Rn) */
	r1 = 0xC286318u; UPD(0x0C08AA04u, 1);  /* 0C08AA02 mov.l @(disp,pc),Rn */
	IF(0x0C08AA04u); r0 = MACL;  /* 0C08AA04 sts macl,Rn */
	r0 += r1;  /* 0C08AA06 add Rm,Rn */
	r0 += 0x42u;  /* 0C08AA08 add #imm,Rn */
	r9 = (u32)(s32)(s8)R8(r0); UPD(0x0C08AA0Cu, 4);  /* 0C08AA0A mov.b @Rm,Rn */
	r13 = 0xADu; UPD(0x0C08AA0Eu, 1);  /* 0C08AA0C mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C08AA0E mov Rm,Rn */
	IF(0x0C08AA10u); W8(r0 + r13, r9); UPD(0x0C08AA12u, 2);  /* 0C08AA10 mov.b Rm,@(r0,Rn) */
	r13 += 0xFFFFFFFCu;  /* 0C08AA12 add #imm,Rn */
	IF(0x0C08AA14u); W8(r0 + r13, r9); UPD(0x0C08AA16u, 2);  /* 0C08AA14 mov.b Rm,@(r0,Rn) */
	r13 = (u32)(s32)(s16)r10;  /* 0C08AA16 exts.w Rm,Rn */
	T = (s32)r13 > (s32)r7;  /* 0C08AA18 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C08A99Cu, 5); goto L_0C08A99C; } goto L_0C08AA1E; }  /* 0C08AA1A bf/s */
L_0C08AA1E: BLKS(0x0C08AA1Eu);
	{ IF(0x0C08AA20u); ; /* slot nop */ UPD(0x0C08A914u, 4); goto L_0C08A914; }  /* 0C08AA1E bra */
}

void blk_f_0C08AA70(sh3_t *c)
{
	LOCALS;
L_0C08AA70: BLKS(0x0C08AA70u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C08AA72u, 1);  /* 0C08AA70 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C08AA74u, 1);  /* 0C08AA72 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C08AA76u, 1);  /* 0C08AA74 mov.l Rm,@-Rn */
	r3 = 0xB4u; UPD(0x0C08AA78u, 1);  /* 0C08AA76 mov.w @(disp,pc),Rn */
	r10 = (u32)(s32)(s16)r4;  /* 0C08AA78 exts.w Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C08AA7Cu, 2);  /* 0C08AA7A mov.l Rm,@-Rn */
	IF(0x0C08AA7Cu); MACL = r10 * r3;  /* 0C08AA7C mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C08AA80u, 3);  /* 0C08AA7E mov.l Rm,@-Rn */
	r0 = 0xC286578u; UPD(0x0C08AA82u, 1);  /* 0C08AA80 mov.l @(disp,pc),Rn */
	IF(0x0C08AA82u); r2 = MACL;  /* 0C08AA82 sts macl,Rn */
	IF(0x0C08AA84u); r15 -= 4; W32(r15, PR); UPD(0x0C08AA86u, 2);  /* 0C08AA84 sts.l pr,@-Rn */
	r0 += r2;  /* 0C08AA86 add Rm,Rn */
	r2 = R32(r0 + 0x8u); UPD(0x0C08AA8Au, 2);  /* 0C08AA88 mov.l @(disp,Rm),Rn */
	r0 = 0x3u;  /* 0C08AA8A mov #imm,Rn */
	T = r2 > r0;  /* 0C08AA8C cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C08AAC8u, 5); goto L_0C08AAC8; } goto L_0C08AA92; }  /* 0C08AA8E bt/s */
L_0C08AA92: BLKS(0x0C08AA92u);
	r0 = 0xC08AAA4u;  /* 0C08AA92 mova @(disp,pc),r0 */
	r2 += r2;  /* 0C08AA94 add Rm,Rn */
	IF(0x0C08AA96u); r4 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C08AA98u, 4);  /* 0C08AA96 mov.w @(r0,Rm),Rn */
	IF(0x0C08AA98u); { u32 tv_ = (r4 + 0x0C08AA9Cu); u32 t_ = PHYS(tv_); IF(0x0C08AA9Au); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C08AA98 braf Rn */
L_0C08AAC8: BLKS(0x0C08AAC8u);
	r15 = r14;  /* 0C08AAC8 mov Rm,Rn */
	IF(0x0C08AACAu); PR = R32(r15); r15 += 4; UPD(0x0C08AACCu, 2);  /* 0C08AACA lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08AACEu, 1);  /* 0C08AACC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08AAD0u, 1);  /* 0C08AACE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08AAD2u, 1);  /* 0C08AAD0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08AAD4u, 1);  /* 0C08AAD2 mov.l @Rm+,Rn */
	IF(0x0C08AAD4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08AAD4 rts */
}

void blk_f_0C08AAB0(sh3_t *c)
{
	LOCALS;
L_0C08AAB0: BLKS(0x0C08AAB0u);
	r7 = 0xB4u; UPD(0x0C08AAB2u, 1);  /* 0C08AAB0 mov.w @(disp,pc),Rn */
	IF(0x0C08AAB2u); MACL = r10 * r7;  /* 0C08AAB2 mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C08AAB6u, 3);  /* 0C08AAB4 mov.l @(disp,pc),Rn */
	IF(0x0C08AAB6u); r11 = MACL;  /* 0C08AAB6 sts macl,Rn */
	r11 += r6;  /* 0C08AAB8 add Rm,Rn */
	r1 = R32(r11 + 0x24u); UPD(0x0C08AABCu, 3);  /* 0C08AABA mov.l @(disp,Rm),Rn */
	r5 = 0xFF800000u; UPD(0x0C08AABEu, 1);  /* 0C08AABC mov.l @(disp,pc),Rn */
	T = (s32)r1 >= (s32)r5;  /* 0C08AABE cmp/ge Rm,Rn */
	{ u32 c_ = T; r8 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C08AAE0u, 4); goto L_0C08AAE0; } goto L_0C08AAC4; }  /* 0C08AAC0 bt/s */
L_0C08AAC4: BLKS(0x0C08AAC4u);
	W32(r11, r8); UPD(0x0C08AAC6u, 2);  /* 0C08AAC4 mov.l Rm,@Rn */
	IF(0x0C08AAC6u); ;  /* 0C08AAC6 nop */
	UPD(0x0C08AAC8u, 1);
L_0C08AAC8: BLKS(0x0C08AAC8u);
	r15 = r14;  /* 0C08AAC8 mov Rm,Rn */
	IF(0x0C08AACAu); PR = R32(r15); r15 += 4; UPD(0x0C08AACCu, 2);  /* 0C08AACA lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08AACEu, 1);  /* 0C08AACC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08AAD0u, 1);  /* 0C08AACE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08AAD2u, 1);  /* 0C08AAD0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08AAD4u, 1);  /* 0C08AAD2 mov.l @Rm+,Rn */
	IF(0x0C08AAD4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08AAD4 rts */
L_0C08AAE0: BLKS(0x0C08AAE0u);
	r8 = 0xC2B080Au; UPD(0x0C08AAE2u, 1);  /* 0C08AAE0 mov.l @(disp,pc),Rn */
	r9 = 0xAu;  /* 0C08AAE2 mov #imm,Rn */
	r7 = (u32)(s32)(s8)R8(r8); UPD(0x0C08AAE6u, 2);  /* 0C08AAE4 mov.b @Rm,Rn */
	r4 = 0xFu;  /* 0C08AAE6 mov #imm,Rn */
	r0 = r7;  /* 0C08AAE8 mov Rm,Rn */
	r0 &= 0xF0u;  /* 0C08AAEA and #imm,r0 */
	IF(0x0C08AAECu); r0 >>= 2;  /* 0C08AAEC shlr2 Rn */
	IF(0x0C08AAEEu); r0 >>= 2;  /* 0C08AAEE shlr2 Rn */
	IF(0x0C08AAF0u); MACL = r0 * r9;  /* 0C08AAF0 mul.l Rm,Rn */
	r7 &= r4;  /* 0C08AAF2 and Rm,Rn */
	r5 = 0xCu;  /* 0C08AAF4 mov #imm,Rn */
	IF(0x0C08AAF6u); r0 = MACL;  /* 0C08AAF6 sts macl,Rn */
	r7 += r0;  /* 0C08AAF8 add Rm,Rn */
	r0 = 0xC0C2310u; UPD(0x0C08AAFCu, 12);  /* 0C08AAFA mov.l @(disp,pc),Rn */
	r4 = r7;  /* 0C08AAFC mov Rm,Rn */
	IF(0x0C08AAFEu); { u32 t_ = r0; PR = 0x0C08AB02u; r11 += 0x5Cu; /* slot add #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0C2310, 0x0C0C2310u, 0x0C08AB02u); }  /* 0C08AAFE jsr @Rn */
L_0C08AB02: BLKS(0x0C08AB02u);
	W32(r11, r1); UPD(0x0C08AB04u, 1);  /* 0C08AB02 mov.l Rm,@Rn */
	r8 += 0xFFFFFFFEu;  /* 0C08AB04 add #imm,Rn */
	r8 += 0x1u;  /* 0C08AB06 add #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r8); UPD(0x0C08AB0Au, 3);  /* 0C08AB08 mov.b @Rm,Rn */
	r6 = 0xFu;  /* 0C08AB0A mov #imm,Rn */
	r0 = r3;  /* 0C08AB0C mov Rm,Rn */
	r0 &= 0xF0u;  /* 0C08AB0E and #imm,r0 */
	IF(0x0C08AB10u); r0 >>= 2;  /* 0C08AB10 shlr2 Rn */
	IF(0x0C08AB12u); r0 >>= 2;  /* 0C08AB12 shlr2 Rn */
	IF(0x0C08AB14u); MACL = r0 * r9;  /* 0C08AB14 mul.l Rm,Rn */
	r3 &= r6;  /* 0C08AB16 and Rm,Rn */
	r11 += 0x4u;  /* 0C08AB18 add #imm,Rn */
	IF(0x0C08AB1Au); r1 = MACL;  /* 0C08AB1A sts macl,Rn */
	r3 += r1;  /* 0C08AB1C add Rm,Rn */
	W32(r11, r3); UPD(0x0C08AB20u, 12);  /* 0C08AB1E mov.l Rm,@Rn */
	r8 += 0xFFFFFFFFu;  /* 0C08AB20 add #imm,Rn */
	r4 = (u32)(s32)(s8)R8(r8); UPD(0x0C08AB24u, 2);  /* 0C08AB22 mov.b @Rm,Rn */
	r2 = 0xFu;  /* 0C08AB24 mov #imm,Rn */
	r0 = r4;  /* 0C08AB26 mov Rm,Rn */
	r0 &= 0xF0u;  /* 0C08AB28 and #imm,r0 */
	IF(0x0C08AB2Au); r0 >>= 2;  /* 0C08AB2A shlr2 Rn */
	IF(0x0C08AB2Cu); r0 >>= 2;  /* 0C08AB2C shlr2 Rn */
	IF(0x0C08AB2Eu); MACL = r0 * r9;  /* 0C08AB2E mul.l Rm,Rn */
	r4 &= r2;  /* 0C08AB30 and Rm,Rn */
	r11 += 0x4u;  /* 0C08AB32 add #imm,Rn */
	IF(0x0C08AB34u); r5 = MACL;  /* 0C08AB34 sts macl,Rn */
	r4 += r5;  /* 0C08AB36 add Rm,Rn */
	W32(r11, r4); UPD(0x0C08AB3Au, 12);  /* 0C08AB38 mov.l Rm,@Rn */
	r11 += 0xFFFFFF9Cu;  /* 0C08AB3A add #imm,Rn */
	r0 = R32(r11 + 0x24u); UPD(0x0C08AB3Eu, 2);  /* 0C08AB3C mov.l @(disp,Rm),Rn */
	r9 = 0x3FFFFFu; UPD(0x0C08AB40u, 1);  /* 0C08AB3E mov.l @(disp,pc),Rn */
	T = (s32)r0 > (s32)r9;  /* 0C08AB40 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C08AAC8u, 4); goto L_0C08AAC8; }  /* 0C08AB42 bf */
L_0C08AB44: BLKS(0x0C08AB44u);
	r0 = r11;  /* 0C08AB44 mov Rm,Rn */
	r5 = 0xA5u; UPD(0x0C08AB48u, 2);  /* 0C08AB46 mov.w @(disp,pc),Rn */
	IF(0x0C08AB48u); r8 = (u32)(s32)(s8)R8(r0 + r5); UPD(0x0C08AB4Au, 1);  /* 0C08AB48 mov.b @(r0,Rm),Rn */
	r4 = r10;  /* 0C08AB4A mov Rm,Rn */
	r9 = 0xC19E950u; UPD(0x0C08AB4Eu, 2);  /* 0C08AB4C mov.l @(disp,pc),Rn */
	r10 = 0xC0BC1B0u; UPD(0x0C08AB50u, 1);  /* 0C08AB4E mov.l @(disp,pc),Rn */
	r0 = r9;  /* 0C08AB50 mov Rm,Rn */
	IF(0x0C08AB52u); r6 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C08AB54u, 2);  /* 0C08AB52 mov.b @(r0,Rm),Rn */
	IF(0x0C08AB54u); { u32 t_ = r10; PR = 0x0C08AB58u; r5 = r6; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C08AB58u); }  /* 0C08AB54 jsr @Rn */
L_0C08AB58: BLKS(0x0C08AB58u);
	T = (r0 & r0) == 0;  /* 0C08AB58 tst Rm,Rn */
	if (T) { UPD(0x0C08AAC8u, 4); goto L_0C08AAC8; }  /* 0C08AB5A bt */
L_0C08AB5C: BLKS(0x0C08AB5Cu);
	r0 = r11;  /* 0C08AB5C mov Rm,Rn */
	r7 = 0xA9u; UPD(0x0C08AB60u, 2);  /* 0C08AB5E mov.w @(disp,pc),Rn */
	IF(0x0C08AB60u); r6 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C08AB62u, 1);  /* 0C08AB60 mov.b @(r0,Rm),Rn */
	r9 = 0xC0C2360u; UPD(0x0C08AB64u, 1);  /* 0C08AB62 mov.l @(disp,pc),Rn */
	r6 += 0xFFFFFFFFu;  /* 0C08AB64 add #imm,Rn */
	IF(0x0C08AB66u); { u32 t_ = r9; PR = 0x0C08AB6Au; r10 = (u32)(s32)(s8)r6; /* slot exts.b Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0C2360, 0x0C0C2360u, 0x0C08AB6Au); }  /* 0C08AB66 jsr @Rn */
L_0C08AB6A: BLKS(0x0C08AB6Au);
	r3 = (u32)(s32)(s16)r0;  /* 0C08AB6A exts.w Rm,Rn */
	r4 = R32(r11 + 0x24u); UPD(0x0C08AB6Eu, 2);  /* 0C08AB6C mov.l @(disp,Rm),Rn */
	r6 = r10;  /* 0C08AB6E mov Rm,Rn */
	r5 = R32(r11 + 0x28u); UPD(0x0C08AB72u, 2);  /* 0C08AB70 mov.l @(disp,Rm),Rn */
	r7 = r3;  /* 0C08AB72 mov Rm,Rn */
	r2 = 0xC098680u; UPD(0x0C08AB76u, 2);  /* 0C08AB74 mov.l @(disp,pc),Rn */
	r15 = r14;  /* 0C08AB76 mov Rm,Rn */
	IF(0x0C08AB78u); PR = R32(r15); r15 += 4; UPD(0x0C08AB7Au, 2);  /* 0C08AB78 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08AB7Cu, 1);  /* 0C08AB7A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08AB7Eu, 1);  /* 0C08AB7C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08AB80u, 1);  /* 0C08AB7E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08AB82u, 1);  /* 0C08AB80 mov.l @Rm+,Rn */
	IF(0x0C08AB82u); { u32 tv_ = r2; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C098680u: TAIL(blk_f_0C098680); default: JUMPD(tv_); } }  /* 0C08AB82 jmp @Rn */
}

void blk_f_0C08AB90(sh3_t *c)
{
	LOCALS;
	goto L_0C08AB90;
L_0C08AAC8: BLKS(0x0C08AAC8u);
	r15 = r14;  /* 0C08AAC8 mov Rm,Rn */
	IF(0x0C08AACAu); PR = R32(r15); r15 += 4; UPD(0x0C08AACCu, 2);  /* 0C08AACA lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08AACEu, 1);  /* 0C08AACC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08AAD0u, 1);  /* 0C08AACE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08AAD2u, 1);  /* 0C08AAD0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08AAD4u, 1);  /* 0C08AAD2 mov.l @Rm+,Rn */
	IF(0x0C08AAD4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08AAD4 rts */
L_0C08AB90: BLKS(0x0C08AB90u);
	r11 = 0xC0A8CA0u; UPD(0x0C08AB92u, 1);  /* 0C08AB90 mov.l @(disp,pc),Rn */
	IF(0x0C08AB92u); { u32 t_ = r11; PR = 0x0C08AB96u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C08AB96u); }  /* 0C08AB92 jsr @Rn */
L_0C08AB96: BLKS(0x0C08AB96u);
	IF(0x0C08AB96u); T = (s32)r0 >= 0;  /* 0C08AB96 cmp/pz Rn */
	if (!T) { UPD(0x0C08ABF0u, 4); goto L_0C08ABF0; }  /* 0C08AB98 bf */
L_0C08AB9A: BLKS(0x0C08AB9Au);
	r11 = 0xB4u; UPD(0x0C08AB9Cu, 1);  /* 0C08AB9A mov.w @(disp,pc),Rn */
	IF(0x0C08AB9Cu); MACL = r10 * r11;  /* 0C08AB9C mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C08ABA0u, 3);  /* 0C08AB9E mov.l @(disp,pc),Rn */
	IF(0x0C08ABA0u); r4 = MACL;  /* 0C08ABA0 sts macl,Rn */
	IF(0x0C08ABA2u); MACL = r0 * r11;  /* 0C08ABA2 mul.l Rm,Rn */
	r2 = 0x2AAAAAABu; UPD(0x0C08ABA6u, 4);  /* 0C08ABA4 mov.l @(disp,pc),Rn */
	r4 += r7;  /* 0C08ABA6 add Rm,Rn */
	IF(0x0C08ABA8u); r3 = MACL;  /* 0C08ABA8 sts macl,Rn */
	r3 += r7;  /* 0C08ABAA add Rm,Rn */
	r6 = R32(r3 + 0x24u); UPD(0x0C08ABAEu, 4);  /* 0C08ABAC mov.l @(disp,Rm),Rn */
	r9 = R32(r3 + 0x28u); UPD(0x0C08ABB0u, 1);  /* 0C08ABAE mov.l @(disp,Rm),Rn */
	r3 += 0x5Cu;  /* 0C08ABB0 add #imm,Rn */
	{ u32 v_ = R32(r3); r3 += 4; r1 = v_; } UPD(0x0C08ABB4u, 2);  /* 0C08ABB2 mov.l @Rm+,Rn */
	r5 = R32(r3); UPD(0x0C08ABB6u, 1);  /* 0C08ABB4 mov.l @Rm,Rn */
	r0 = r1;  /* 0C08ABB6 mov Rm,Rn */
	{ s64 r_ = (s64)(s32)r5 * (s64)(s32)r2; MACH = (u32)((u64)r_ >> 32); MACL = (u32)r_; }  /* 0C08ABB8 dmuls.l Rm,Rn */
	IF(0x0C08ABBAu); r0 <<= 2;  /* 0C08ABBA shll2 Rn */
	r0 += r1;  /* 0C08ABBC add Rm,Rn */
	IF(0x0C08ABBEu); r8 = MACH;  /* 0C08ABBE sts mach,Rn */
	IF(0x0C08ABC0u); T = r8 & 1; r8 = (u32)((s32)r8 >> 1);  /* 0C08ABC0 shar Rn */
	IF(0x0C08ABC2u); T = r5 >> 31; r5 <<= 1;  /* 0C08ABC2 shll Rn */
	{ u32 a_ = r5, t_ = a_ - r5, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r5 = r_; }  /* 0C08ABC4 subc Rm,Rn */
	r8 -= r5;  /* 0C08ABC6 sub Rm,Rn */
	r0 += r8;  /* 0C08ABC8 add Rm,Rn */
	W32(r4 + 0x24u, r6); UPD(0x0C08ABCCu, 12);  /* 0C08ABCA mov.l Rm,@(disp,Rn) */
	W32(r4 + 0x28u, r9); UPD(0x0C08ABCEu, 1);  /* 0C08ABCC mov.l Rm,@(disp,Rn) */
	W32(r4 + 0xCu, r0); UPD(0x0C08ABD0u, 1);  /* 0C08ABCE mov.l Rm,@(disp,Rn) */
	r5 = 0xC0A8AE0u; UPD(0x0C08ABD2u, 1);  /* 0C08ABD0 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C08ABD2 mov Rm,Rn */
	r15 = r14;  /* 0C08ABD4 mov Rm,Rn */
	IF(0x0C08ABD6u); PR = R32(r15); r15 += 4; UPD(0x0C08ABD8u, 3);  /* 0C08ABD6 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08ABDAu, 1);  /* 0C08ABD8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08ABDCu, 1);  /* 0C08ABDA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08ABDEu, 1);  /* 0C08ABDC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08ABE0u, 1);  /* 0C08ABDE mov.l @Rm+,Rn */
	IF(0x0C08ABE0u); { u32 tv_ = r5; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A8AE0u: TAIL(blk_f_0C0A8AE0); default: JUMPD(tv_); } }  /* 0C08ABE0 jmp @Rn */
L_0C08ABF0: BLKS(0x0C08ABF0u);
	r6 = 0xB4u; UPD(0x0C08ABF2u, 1);  /* 0C08ABF0 mov.w @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C08ABF2 mov #imm,Rn */
	IF(0x0C08ABF4u); MACL = r10 * r6;  /* 0C08ABF4 mul.l Rm,Rn */
	r10 = 0xC286578u; UPD(0x0C08ABF8u, 4);  /* 0C08ABF6 mov.l @(disp,pc),Rn */
	IF(0x0C08ABF8u); r0 = MACL;  /* 0C08ABF8 sts macl,Rn */
	{ IF(0x0C08ABFCu); W32(r0 + r10, r3); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C08AAC8u, 4); goto L_0C08AAC8; }  /* 0C08ABFA bra */
}

void blk_f_0C08AC00(sh3_t *c)
{
	LOCALS;
	goto L_0C08AC00;
L_0C08AAC8: BLKS(0x0C08AAC8u);
	r15 = r14;  /* 0C08AAC8 mov Rm,Rn */
	IF(0x0C08AACAu); PR = R32(r15); r15 += 4; UPD(0x0C08AACCu, 2);  /* 0C08AACA lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08AACEu, 1);  /* 0C08AACC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08AAD0u, 1);  /* 0C08AACE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08AAD2u, 1);  /* 0C08AAD0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08AAD4u, 1);  /* 0C08AAD2 mov.l @Rm+,Rn */
	IF(0x0C08AAD4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08AAD4 rts */
L_0C08ABD0: BLKS(0x0C08ABD0u);
	r5 = 0xC0A8AE0u; UPD(0x0C08ABD2u, 1);  /* 0C08ABD0 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C08ABD2 mov Rm,Rn */
	r15 = r14;  /* 0C08ABD4 mov Rm,Rn */
	IF(0x0C08ABD6u); PR = R32(r15); r15 += 4; UPD(0x0C08ABD8u, 3);  /* 0C08ABD6 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08ABDAu, 1);  /* 0C08ABD8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08ABDCu, 1);  /* 0C08ABDA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08ABDEu, 1);  /* 0C08ABDC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08ABE0u, 1);  /* 0C08ABDE mov.l @Rm+,Rn */
	IF(0x0C08ABE0u); { u32 tv_ = r5; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A8AE0u: TAIL(blk_f_0C0A8AE0); default: JUMPD(tv_); } }  /* 0C08ABE0 jmp @Rn */
L_0C08ABF0: BLKS(0x0C08ABF0u);
	r6 = 0xB4u; UPD(0x0C08ABF2u, 1);  /* 0C08ABF0 mov.w @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C08ABF2 mov #imm,Rn */
	IF(0x0C08ABF4u); MACL = r10 * r6;  /* 0C08ABF4 mul.l Rm,Rn */
	r10 = 0xC286578u; UPD(0x0C08ABF8u, 4);  /* 0C08ABF6 mov.l @(disp,pc),Rn */
	IF(0x0C08ABF8u); r0 = MACL;  /* 0C08ABF8 sts macl,Rn */
	{ IF(0x0C08ABFCu); W32(r0 + r10, r3); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C08AAC8u, 4); goto L_0C08AAC8; }  /* 0C08ABFA bra */
L_0C08AC00: BLKS(0x0C08AC00u);
	r8 = 0xC0A8CA0u; UPD(0x0C08AC02u, 1);  /* 0C08AC00 mov.l @(disp,pc),Rn */
	IF(0x0C08AC02u); { u32 t_ = r8; PR = 0x0C08AC06u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C08AC06u); }  /* 0C08AC02 jsr @Rn */
L_0C08AC06: BLKS(0x0C08AC06u);
	IF(0x0C08AC06u); T = (s32)r0 >= 0;  /* 0C08AC06 cmp/pz Rn */
	if (!T) { UPD(0x0C08ABF0u, 4); goto L_0C08ABF0; }  /* 0C08AC08 bf */
L_0C08AC0A: BLKS(0x0C08AC0Au);
	r2 = 0xB4u; UPD(0x0C08AC0Cu, 1);  /* 0C08AC0A mov.w @(disp,pc),Rn */
	IF(0x0C08AC0Cu); MACL = r10 * r2;  /* 0C08AC0C mul.l Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C08AC10u, 3);  /* 0C08AC0E mov.l @(disp,pc),Rn */
	IF(0x0C08AC10u); r3 = MACL;  /* 0C08AC10 sts macl,Rn */
	IF(0x0C08AC12u); MACL = r0 * r2;  /* 0C08AC12 mul.l Rm,Rn */
	r3 += r5;  /* 0C08AC14 add Rm,Rn */
	IF(0x0C08AC16u); r1 = MACL;  /* 0C08AC16 sts macl,Rn */
	r1 += r5;  /* 0C08AC18 add Rm,Rn */
	r0 = R32(r1 + 0x24u); UPD(0x0C08AC1Cu, 7);  /* 0C08AC1A mov.l @(disp,Rm),Rn */
	r4 = R32(r1 + 0x28u); UPD(0x0C08AC1Eu, 1);  /* 0C08AC1C mov.l @(disp,Rm),Rn */
	W32(r3 + 0x24u, r0); UPD(0x0C08AC20u, 1);  /* 0C08AC1E mov.l Rm,@(disp,Rn) */
	r1 += 0x60u;  /* 0C08AC20 add #imm,Rn */
	W32(r3 + 0x28u, r4); UPD(0x0C08AC24u, 2);  /* 0C08AC22 mov.l Rm,@(disp,Rn) */
	r0 = R32(r1); UPD(0x0C08AC26u, 1);  /* 0C08AC24 mov.l @Rm,Rn */
	{ W32(r3 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C08ABD0u, 3); goto L_0C08ABD0; }  /* 0C08AC26 bra */
}

void blk_f_0C08AC30(sh3_t *c)
{
	LOCALS;
	goto L_0C08AC30;
L_0C08AAC8: BLKS(0x0C08AAC8u);
	r15 = r14;  /* 0C08AAC8 mov Rm,Rn */
	IF(0x0C08AACAu); PR = R32(r15); r15 += 4; UPD(0x0C08AACCu, 2);  /* 0C08AACA lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08AACEu, 1);  /* 0C08AACC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08AAD0u, 1);  /* 0C08AACE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08AAD2u, 1);  /* 0C08AAD0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08AAD4u, 1);  /* 0C08AAD2 mov.l @Rm+,Rn */
	IF(0x0C08AAD4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08AAD4 rts */
L_0C08ABD0: BLKS(0x0C08ABD0u);
	r5 = 0xC0A8AE0u; UPD(0x0C08ABD2u, 1);  /* 0C08ABD0 mov.l @(disp,pc),Rn */
	r4 = r10;  /* 0C08ABD2 mov Rm,Rn */
	r15 = r14;  /* 0C08ABD4 mov Rm,Rn */
	IF(0x0C08ABD6u); PR = R32(r15); r15 += 4; UPD(0x0C08ABD8u, 3);  /* 0C08ABD6 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08ABDAu, 1);  /* 0C08ABD8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08ABDCu, 1);  /* 0C08ABDA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08ABDEu, 1);  /* 0C08ABDC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08ABE0u, 1);  /* 0C08ABDE mov.l @Rm+,Rn */
	IF(0x0C08ABE0u); { u32 tv_ = r5; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A8AE0u: TAIL(blk_f_0C0A8AE0); default: JUMPD(tv_); } }  /* 0C08ABE0 jmp @Rn */
L_0C08ABF0: BLKS(0x0C08ABF0u);
	r6 = 0xB4u; UPD(0x0C08ABF2u, 1);  /* 0C08ABF0 mov.w @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C08ABF2 mov #imm,Rn */
	IF(0x0C08ABF4u); MACL = r10 * r6;  /* 0C08ABF4 mul.l Rm,Rn */
	r10 = 0xC286578u; UPD(0x0C08ABF8u, 4);  /* 0C08ABF6 mov.l @(disp,pc),Rn */
	IF(0x0C08ABF8u); r0 = MACL;  /* 0C08ABF8 sts macl,Rn */
	{ IF(0x0C08ABFCu); W32(r0 + r10, r3); /* slot mov.l Rm,@(r0,Rn) */ UPD(0x0C08AAC8u, 4); goto L_0C08AAC8; }  /* 0C08ABFA bra */
L_0C08AC24: BLKS(0x0C08AC24u);
	r0 = R32(r1); UPD(0x0C08AC26u, 1);  /* 0C08AC24 mov.l @Rm,Rn */
	{ W32(r3 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C08ABD0u, 3); goto L_0C08ABD0; }  /* 0C08AC26 bra */
L_0C08AC30: BLKS(0x0C08AC30u);
	r9 = 0xC0A8CA0u; UPD(0x0C08AC32u, 1);  /* 0C08AC30 mov.l @(disp,pc),Rn */
	IF(0x0C08AC32u); { u32 t_ = r9; PR = 0x0C08AC36u; r4 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8CA0, 0x0C0A8CA0u, 0x0C08AC36u); }  /* 0C08AC32 jsr @Rn */
L_0C08AC36: BLKS(0x0C08AC36u);
	IF(0x0C08AC36u); T = (s32)r0 >= 0;  /* 0C08AC36 cmp/pz Rn */
	if (!T) { UPD(0x0C08ABF0u, 4); goto L_0C08ABF0; }  /* 0C08AC38 bf */
L_0C08AC3A: BLKS(0x0C08AC3Au);
	r4 = 0xB4u; UPD(0x0C08AC3Cu, 1);  /* 0C08AC3A mov.w @(disp,pc),Rn */
	IF(0x0C08AC3Cu); MACL = r10 * r4;  /* 0C08AC3C mul.l Rm,Rn */
	r8 = 0xC286578u; UPD(0x0C08AC40u, 3);  /* 0C08AC3E mov.l @(disp,pc),Rn */
	IF(0x0C08AC40u); r3 = MACL;  /* 0C08AC40 sts macl,Rn */
	IF(0x0C08AC42u); MACL = r0 * r4;  /* 0C08AC42 mul.l Rm,Rn */
	r3 += r8;  /* 0C08AC44 add Rm,Rn */
	IF(0x0C08AC46u); r1 = MACL;  /* 0C08AC46 sts macl,Rn */
	r1 += r8;  /* 0C08AC48 add Rm,Rn */
	r11 = R32(r1 + 0x24u); UPD(0x0C08AC4Cu, 7);  /* 0C08AC4A mov.l @(disp,Rm),Rn */
	r7 = R32(r1 + 0x28u); UPD(0x0C08AC4Eu, 1);  /* 0C08AC4C mov.l @(disp,Rm),Rn */
	W32(r3 + 0x24u, r11); UPD(0x0C08AC50u, 1);  /* 0C08AC4E mov.l Rm,@(disp,Rn) */
	r1 += 0x64u;  /* 0C08AC50 add #imm,Rn */
	{ W32(r3 + 0x28u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C08AC24u, 4); goto L_0C08AC24; }  /* 0C08AC52 bra */
}

void blk_f_0C08AC90(sh3_t *c)
{
	LOCALS;
L_0C08AC90: BLKS(0x0C08AC90u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C08AC92u, 1);  /* 0C08AC90 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C08AC94u, 1);  /* 0C08AC92 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C08AC96u, 1);  /* 0C08AC94 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C08AC98u, 1);  /* 0C08AC96 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C08AC9Au, 1);  /* 0C08AC98 mov.l Rm,@-Rn */
	r9 = 0xB4u; UPD(0x0C08AC9Cu, 1);  /* 0C08AC9A mov.w @(disp,pc),Rn */
	r12 = (u32)(s32)(s16)r4;  /* 0C08AC9C exts.w Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C08ACA0u, 2);  /* 0C08AC9E mov.l Rm,@-Rn */
	IF(0x0C08ACA0u); MACL = r12 * r9;  /* 0C08ACA0 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C08ACA4u, 3);  /* 0C08ACA2 mov.l Rm,@-Rn */
	r10 = 0xC286578u; UPD(0x0C08ACA6u, 1);  /* 0C08ACA4 mov.l @(disp,pc),Rn */
	IF(0x0C08ACA6u); r8 = MACL;  /* 0C08ACA6 sts macl,Rn */
	IF(0x0C08ACA8u); r15 -= 4; W32(r15, PR); UPD(0x0C08ACAAu, 2);  /* 0C08ACA8 sts.l pr,@-Rn */
	r8 += r10;  /* 0C08ACAA add Rm,Rn */
	r0 = R32(r8 + 0x8u); UPD(0x0C08ACAEu, 2);  /* 0C08ACAC mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C08ACAE add #imm,Rn */
	T = r0 == 0x20u;  /* 0C08ACB0 cmp/eq #imm,r0 */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C08ACBAu, 5); goto L_0C08ACBA; } goto L_0C08ACB6; }  /* 0C08ACB2 bf/s */
L_0C08ACB6: BLKS(0x0C08ACB6u);
	{ IF(0x0C08ACB8u); ; /* slot nop */ UPD(0x0C08AF50u, 4); goto L_0C08AF50; }  /* 0C08ACB6 bra */
L_0C08ACBA: BLKS(0x0C08ACBAu);
	r2 = 0x99u; UPD(0x0C08ACBCu, 1);  /* 0C08ACBA mov.w @(disp,pc),Rn */
	r2 += r8;  /* 0C08ACBC add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C08ACC0u, 2);  /* 0C08ACBE mov.b @Rm,Rn */
	T = r0 == 0xFFFFFFFFu;  /* 0C08ACC0 cmp/eq #imm,r0 */
	{ u32 c_ = T; r3 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C08AD44u, 4); goto L_0C08AD44; } goto L_0C08ACC6; }  /* 0C08ACC2 bt/s */
L_0C08ACC6: BLKS(0x0C08ACC6u);
	r9 = 0xC069BF0u; UPD(0x0C08ACC8u, 2);  /* 0C08ACC6 mov.l @(disp,pc),Rn */
	r3 += 0x1u;  /* 0C08ACC8 add #imm,Rn */
	W8(r2, r3); UPD(0x0C08ACCCu, 2);  /* 0C08ACCA mov.b Rm,@Rn */
	r13 = 0x9Eu; UPD(0x0C08ACCEu, 1);  /* 0C08ACCC mov.w @(disp,pc),Rn */
	IF(0x0C08ACCEu); { u32 t_ = r9; PR = 0x0C08ACD2u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069BF0, 0x0C069BF0u, 0x0C08ACD2u); }  /* 0C08ACCE jsr @Rn */
L_0C08ACD2: BLKS(0x0C08ACD2u);
	r0 = r8;  /* 0C08ACD2 mov Rm,Rn */
	IF(0x0C08ACD4u); r11 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C08ACD6u, 2);  /* 0C08ACD4 mov.b @(r0,Rm),Rn */
	r6 = 0x2A0u; UPD(0x0C08ACD8u, 1);  /* 0C08ACD6 mov.w @(disp,pc),Rn */
	r7 = r11 & 0xFF;  /* 0C08ACD8 extu.b Rm,Rn */
	IF(0x0C08ACDAu); MACL = r7 * r6;  /* 0C08ACDA mul.l Rm,Rn */
	r5 = 0xC29D1D8u; UPD(0x0C08ACDEu, 4);  /* 0C08ACDC mov.l @(disp,pc),Rn */
	IF(0x0C08ACDEu); r10 = MACL;  /* 0C08ACDE sts macl,Rn */
	r10 += r5;  /* 0C08ACE0 add Rm,Rn */
	r9 = 0x8Au; UPD(0x0C08ACE4u, 3);  /* 0C08ACE2 mov.w @(disp,pc),Rn */
	r4 = R32(r8 + 0x24u); UPD(0x0C08ACE6u, 1);  /* 0C08ACE4 mov.l @(disp,Rm),Rn */
	r9 += r8;  /* 0C08ACE6 add Rm,Rn */
	r5 = R32(r8 + 0x28u); UPD(0x0C08ACEAu, 2);  /* 0C08ACE8 mov.l @(disp,Rm),Rn */
	r8 = 0xC068E60u; UPD(0x0C08ACECu, 1);  /* 0C08ACEA mov.l @(disp,pc),Rn */
	r6 = R32(r10 + 0x10u); UPD(0x0C08ACEEu, 1);  /* 0C08ACEC mov.l @(disp,Rm),Rn */
	IF(0x0C08ACEEu); { u32 t_ = r8; PR = 0x0C08ACF2u; r7 = R32(r10 + 0x14u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C068E60, 0x0C068E60u, 0x0C08ACF2u); }  /* 0C08ACEE jsr @Rn */
L_0C08ACF2: BLKS(0x0C08ACF2u);
	r3 = (u32)(s32)(s16)R16(r9); UPD(0x0C08ACF4u, 1);  /* 0C08ACF2 mov.w @Rm,Rn */
	r4 = 0x1FFu; UPD(0x0C08ACF6u, 1);  /* 0C08ACF4 mov.w @(disp,pc),Rn */
	r2 = r3;  /* 0C08ACF6 mov Rm,Rn */
	r2 -= r0;  /* 0C08ACF8 sub Rm,Rn */
	r2 &= r4;  /* 0C08ACFA and Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C08ACFC tst Rm,Rn */
	if (T) { UPD(0x0C08AD12u, 7); goto L_0C08AD12; }  /* 0C08ACFE bt */
L_0C08AD00: BLKS(0x0C08AD00u);
	r0 = 0x100u; UPD(0x0C08AD02u, 1);  /* 0C08AD00 mov.w @(disp,pc),Rn */
	T = (s32)r2 > (s32)r0;  /* 0C08AD02 cmp/gt Rm,Rn */
	{ u32 c_ = T; r1 = r3; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C08AD0Cu, 4); goto L_0C08AD0C; } goto L_0C08AD08; }  /* 0C08AD04 bt/s */
L_0C08AD08: BLKS(0x0C08AD08u);
	{ r1 += 0xFFFFFFFEu; /* slot add #imm,Rn */ UPD(0x0C08AD10u, 4); goto L_0C08AD10; }  /* 0C08AD08 bra */
L_0C08AD0C: BLKS(0x0C08AD0Cu);
	r1 = r3;  /* 0C08AD0C mov Rm,Rn */
	r1 += 0x2u;  /* 0C08AD0E add #imm,Rn */
	UPD(0x0C08AD10u, 2);
L_0C08AD10: BLKS(0x0C08AD10u);
	W16(r9, r1); UPD(0x0C08AD12u, 1);  /* 0C08AD10 mov.w Rm,@Rn */
L_0C08AD12: BLKS(0x0C08AD12u);
	r3 = 0xFFFFFF00u; UPD(0x0C08AD14u, 1);  /* 0C08AD12 mov.w @(disp,pc),Rn */
	r3 += r2;  /* 0C08AD14 add Rm,Rn */
	IF(0x0C08AD16u); T = (s32)r3 >= 0;  /* 0C08AD16 cmp/pz Rn */
	if (T) { UPD(0x0C08AD1Cu, 5); goto L_0C08AD1C; }  /* 0C08AD18 bt */
L_0C08AD1A: BLKS(0x0C08AD1Au);
	r3 = 0u - r3;  /* 0C08AD1A neg Rm,Rn */
	UPD(0x0C08AD1Cu, 1);
L_0C08AD1C: BLKS(0x0C08AD1Cu);
	r1 = 0xF8u; UPD(0x0C08AD1Eu, 1);  /* 0C08AD1C mov.w @(disp,pc),Rn */
	T = (s32)r3 > (s32)r1;  /* 0C08AD1E cmp/gt Rm,Rn */
	{ u32 c_ = T; r1 += 0xFFFFFFBCu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C08AD28u, 4); goto L_0C08AD28; } goto L_0C08AD24; }  /* 0C08AD20 bt/s */
L_0C08AD24: BLKS(0x0C08AD24u);
	{ IF(0x0C08AD26u); ; /* slot nop */ UPD(0x0C08AF30u, 4); goto L_0C08AF30; }  /* 0C08AD24 bra */
L_0C08AD28: BLKS(0x0C08AD28u);
	IF(0x0C08AD28u); MACL = r12 * r1;  /* 0C08AD28 mul.l Rm,Rn */
	r8 = 0xC286578u; UPD(0x0C08AD2Cu, 3);  /* 0C08AD2A mov.l @(disp,pc),Rn */
	r2 = 0x8Cu; UPD(0x0C08AD2Eu, 1);  /* 0C08AD2C mov.w @(disp,pc),Rn */
	IF(0x0C08AD2Eu); r3 = MACL;  /* 0C08AD2E sts macl,Rn */
	r3 += r8;  /* 0C08AD30 add Rm,Rn */
	r3 += r2;  /* 0C08AD32 add Rm,Rn */
	r2 = R32(r3); UPD(0x0C08AD36u, 4);  /* 0C08AD34 mov.l @Rm,Rn */
	r4 = 0x1BFFFu; UPD(0x0C08AD38u, 1);  /* 0C08AD36 mov.l @(disp,pc),Rn */
	r1 = 0x1000u; UPD(0x0C08AD3Au, 1);  /* 0C08AD38 mov.w @(disp,pc),Rn */
	T = (s32)r2 > (s32)r4;  /* 0C08AD3A cmp/gt Rm,Rn */
	{ u32 c_ = T; r2 += r1; /* slot add Rm,Rn */ if (c_) { UPD(0x0C08AD44u, 4); goto L_0C08AD44; } goto L_0C08AD40; }  /* 0C08AD3C bt/s */
L_0C08AD40: BLKS(0x0C08AD40u);
	{ W32(r3, r2); /* slot mov.l Rm,@Rn */ UPD(0x0C08AF22u, 4); goto L_0C08AF22; }  /* 0C08AD40 bra */
L_0C08AD44: BLKS(0x0C08AD44u);
	r0 = 0xB4u; UPD(0x0C08AD46u, 1);  /* 0C08AD44 mov.w @(disp,pc),Rn */
	IF(0x0C08AD46u); MACL = r12 * r0;  /* 0C08AD46 mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C08AD4Au, 3);  /* 0C08AD48 mov.l @(disp,pc),Rn */
	IF(0x0C08AD4Au); r10 = MACL;  /* 0C08AD4A sts macl,Rn */
	r11 = 0x8Cu; UPD(0x0C08AD4Eu, 2);  /* 0C08AD4C mov.w @(disp,pc),Rn */
	r10 += r3;  /* 0C08AD4E add Rm,Rn */
	r13 = 0xC069B20u; UPD(0x0C08AD52u, 2);  /* 0C08AD50 mov.l @(disp,pc),Rn */
	r11 += r10;  /* 0C08AD52 add Rm,Rn */
	r8 = 0x8Au; UPD(0x0C08AD56u, 2);  /* 0C08AD54 mov.w @(disp,pc),Rn */
	r5 = R32(r11); UPD(0x0C08AD58u, 1);  /* 0C08AD56 mov.l @Rm,Rn */
	r8 += r10;  /* 0C08AD58 add Rm,Rn */
	r9 = 0xC069AF0u; UPD(0x0C08AD5Cu, 2);  /* 0C08AD5A mov.l @(disp,pc),Rn */
	IF(0x0C08AD5Cu); { u32 t_ = r13; PR = 0x0C08AD60u; r4 = (u32)(s32)(s16)R16(r8); /* slot mov.w @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C08AD60u); }  /* 0C08AD5C jsr @Rn */
L_0C08AD60: BLKS(0x0C08AD60u);
	r5 = R32(r11); UPD(0x0C08AD62u, 1);  /* 0C08AD60 mov.l @Rm,Rn */
	W32(r10 + 0x2Cu, r0); UPD(0x0C08AD64u, 1);  /* 0C08AD62 mov.l Rm,@(disp,Rn) */
	IF(0x0C08AD64u); { u32 t_ = r9; PR = 0x0C08AD68u; r4 = (u32)(s32)(s16)R16(r8); /* slot mov.w @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C08AD68u); }  /* 0C08AD64 jsr @Rn */
L_0C08AD68: BLKS(0x0C08AD68u);
	r11 = R32(r10 + 0x24u); UPD(0x0C08AD6Au, 1);  /* 0C08AD68 mov.l @(disp,Rm),Rn */
	r7 = R32(r10 + 0x28u); UPD(0x0C08AD6Cu, 1);  /* 0C08AD6A mov.l @(disp,Rm),Rn */
	r13 = R32(r10 + 0x2Cu); UPD(0x0C08AD6Eu, 1);  /* 0C08AD6C mov.l @(disp,Rm),Rn */
	r7 += r0;  /* 0C08AD6E add Rm,Rn */
	r3 = 0xFF600000u; UPD(0x0C08AD72u, 2);  /* 0C08AD70 mov.l @(disp,pc),Rn */
	r11 += r13;  /* 0C08AD72 add Rm,Rn */
	r3 += r11;  /* 0C08AD74 add Rm,Rn */
	W32(r10 + 0x30u, r0); UPD(0x0C08AD78u, 3);  /* 0C08AD76 mov.l Rm,@(disp,Rn) */
	IF(0x0C08AD78u); T = (s32)r3 >= 0;  /* 0C08AD78 cmp/pz Rn */
	W32(r10 + 0x24u, r11); UPD(0x0C08AD7Cu, 2);  /* 0C08AD7A mov.l Rm,@(disp,Rn) */
	{ u32 c_ = T; W32(r10 + 0x28u, r7); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C08AD84u, 3); goto L_0C08AD84; } UPD(0x0C08AD80u, 1); goto L_0C08AD80; }  /* 0C08AD7C bt/s */
L_0C08AD80: BLKS(0x0C08AD80u);
	{ r3 = 0u - r3; /* slot neg Rm,Rn */ UPD(0x0C08AF10u, 3); goto L_0C08AF10; }  /* 0C08AD80 bra */
L_0C08AD84: BLKS(0x0C08AD84u);
	r4 = 0xD00000u; UPD(0x0C08AD86u, 1);  /* 0C08AD84 mov.l @(disp,pc),Rn */
	T = (s32)r3 > (s32)r4;  /* 0C08AD86 cmp/gt Rm,Rn */
	{ u32 c_ = T; r9 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C08ADAAu, 4); goto L_0C08ADAA; } goto L_0C08AD8C; }  /* 0C08AD88 bt/s */
L_0C08AD8C: BLKS(0x0C08AD8Cu);
	r2 = 0xC3C4048u; UPD(0x0C08AD8Eu, 2);  /* 0C08AD8C mov.l @(disp,pc),Rn */
	r6 = R32(r2); UPD(0x0C08AD90u, 1);  /* 0C08AD8E mov.l @Rm,Rn */
	r5 = 0xFF880000u; UPD(0x0C08AD92u, 1);  /* 0C08AD90 mov.l @(disp,pc),Rn */
	r2 = r7;  /* 0C08AD92 mov Rm,Rn */
	r2 -= r6;  /* 0C08AD94 sub Rm,Rn */
	r2 += r5;  /* 0C08AD96 add Rm,Rn */
	IF(0x0C08AD98u); T = (s32)r2 >= 0;  /* 0C08AD98 cmp/pz Rn */
	if (T) { UPD(0x0C08AD9Eu, 7); goto L_0C08AD9E; }  /* 0C08AD9A bt */
L_0C08AD9C: BLKS(0x0C08AD9Cu);
	r2 = 0u - r2;  /* 0C08AD9C neg Rm,Rn */
	UPD(0x0C08AD9Eu, 1);
L_0C08AD9E: BLKS(0x0C08AD9Eu);
	r7 = 0xA80000u; UPD(0x0C08ADA0u, 1);  /* 0C08AD9E mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r7;  /* 0C08ADA0 cmp/gt Rm,Rn */
	{ u32 c_ = T; r9 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C08ADAAu, 4); goto L_0C08ADAA; } goto L_0C08ADA6; }  /* 0C08ADA2 bt/s */
L_0C08ADA6: BLKS(0x0C08ADA6u);
	{ IF(0x0C08ADA8u); ; /* slot nop */ UPD(0x0C08AED0u, 4); goto L_0C08AED0; }  /* 0C08ADA6 bra */
L_0C08ADAA: BLKS(0x0C08ADAAu);
	W32(r10, r9); UPD(0x0C08ADACu, 1);  /* 0C08ADAA mov.l Rm,@Rn */
	r1 = 0x1u;  /* 0C08ADAC mov #imm,Rn */
	UPD(0x0C08ADAEu, 1);
L_0C08ADAE: BLKS(0x0C08ADAEu);
	r0 = (u32)(s32)(s16)r1;  /* 0C08ADAE exts.w Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C08ADB0 tst Rm,Rn */
	if (T) { UPD(0x0C08AE10u, 5); goto L_0C08AE10; }  /* 0C08ADB2 bt */
L_0C08ADB4: BLKS(0x0C08ADB4u);
	r14 += 0x8u;  /* 0C08ADB4 add #imm,Rn */
	r15 = r14;  /* 0C08ADB6 mov Rm,Rn */
	IF(0x0C08ADB8u); PR = R32(r15); r15 += 4; UPD(0x0C08ADBAu, 3);  /* 0C08ADB8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08ADBCu, 1);  /* 0C08ADBA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08ADBEu, 1);  /* 0C08ADBC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08ADC0u, 1);  /* 0C08ADBE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08ADC2u, 1);  /* 0C08ADC0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08ADC4u, 1);  /* 0C08ADC2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08ADC6u, 1);  /* 0C08ADC4 mov.l @Rm+,Rn */
	IF(0x0C08ADC6u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08ADC6 rts */
L_0C08AE10: BLKS(0x0C08AE10u);
	r8 = 0xC0BC1B0u; UPD(0x0C08AE12u, 1);  /* 0C08AE10 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C08AE12 mov Rm,Rn */
	r5 = 0x5Au;  /* 0C08AE14 mov #imm,Rn */
	IF(0x0C08AE16u); { u32 t_ = r8; PR = 0x0C08AE1Au; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C08AE1Au); }  /* 0C08AE16 jsr @Rn */
L_0C08AE1A: BLKS(0x0C08AE1Au);
	T = (r0 & r0) == 0;  /* 0C08AE1A tst Rm,Rn */
	if (T) { UPD(0x0C08ADB4u, 4); goto L_0C08ADB4; }  /* 0C08AE1C bt */
L_0C08AE1E: BLKS(0x0C08AE1Eu);
	r4 = 0xB4u; UPD(0x0C08AE20u, 1);  /* 0C08AE1E mov.w @(disp,pc),Rn */
	IF(0x0C08AE20u); MACL = r12 * r4;  /* 0C08AE20 mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C08AE24u, 3);  /* 0C08AE22 mov.l @(disp,pc),Rn */
	IF(0x0C08AE24u); r8 = MACL;  /* 0C08AE24 sts macl,Rn */
	r8 += r3;  /* 0C08AE26 add Rm,Rn */
	r7 = 0xA9u; UPD(0x0C08AE2Au, 3);  /* 0C08AE28 mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C08AE2A mov Rm,Rn */
	r13 = 0xC0BBF10u; UPD(0x0C08AE2Eu, 2);  /* 0C08AE2C mov.l @(disp,pc),Rn */
	IF(0x0C08AE2Eu); r2 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C08AE30u, 1);  /* 0C08AE2E mov.b @(r0,Rm),Rn */
	r4 = R32(r8 + 0x24u); UPD(0x0C08AE32u, 1);  /* 0C08AE30 mov.l @(disp,Rm),Rn */
	r6 = r2 & 0xFF;  /* 0C08AE32 extu.b Rm,Rn */
	IF(0x0C08AE34u); { u32 t_ = r13; PR = 0x0C08AE38u; r5 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BBF10, 0x0C0BBF10u, 0x0C08AE38u); }  /* 0C08AE34 jsr @Rn */
L_0C08AE38: BLKS(0x0C08AE38u);
	T = (r0 & r0) == 0;  /* 0C08AE38 tst Rm,Rn */
	if (T) { UPD(0x0C08ADB4u, 4); goto L_0C08ADB4; }  /* 0C08AE3A bt */
L_0C08AE3C: BLKS(0x0C08AE3Cu);
	r9 = r8;  /* 0C08AE3C mov Rm,Rn */
	r11 = 0x86u; UPD(0x0C08AE40u, 2);  /* 0C08AE3E mov.w @(disp,pc),Rn */
	r9 += r11;  /* 0C08AE40 add Rm,Rn */
	W32(r14, r8); UPD(0x0C08AE44u, 2);  /* 0C08AE42 mov.l Rm,@Rn */
	r13 = 0x0u;  /* 0C08AE44 mov #imm,Rn */
	W32(r14 + 0x4u, r9); UPD(0x0C08AE48u, 2);  /* 0C08AE46 mov.l Rm,@(disp,Rn) */
L_0C08AE48: BLKS(0x0C08AE48u);
	r6 = R32(r14 + 0x4u); UPD(0x0C08AE4Au, 1);  /* 0C08AE48 mov.l @(disp,Rm),Rn */
	r0 = r13;  /* 0C08AE4A mov Rm,Rn */
	r5 = 0xC19F7F8u; UPD(0x0C08AE4Eu, 2);  /* 0C08AE4C mov.l @(disp,pc),Rn */
	r0 += r0;  /* 0C08AE4E add Rm,Rn */
	r11 = (u32)(s32)(s16)R16(r6); UPD(0x0C08AE52u, 2);  /* 0C08AE50 mov.w @Rm,Rn */
	r10 = r13;  /* 0C08AE52 mov Rm,Rn */
	IF(0x0C08AE54u); r8 = (u32)(s32)(s16)R16(r0 + r5); UPD(0x0C08AE56u, 2);  /* 0C08AE54 mov.w @(r0,Rm),Rn */
	IF(0x0C08AE56u); r10 <<= 2;  /* 0C08AE56 shll2 Rn */
	r9 = 0xC069B20u; UPD(0x0C08AE5Au, 2);  /* 0C08AE58 mov.l @(disp,pc),Rn */
	r11 += r8;  /* 0C08AE5A add Rm,Rn */
	r8 = (u32)(s32)(s16)r11;  /* 0C08AE5C exts.w Rm,Rn */
	r5 = 0x120000u; UPD(0x0C08AE60u, 3);  /* 0C08AE5E mov.l @(disp,pc),Rn */
	IF(0x0C08AE60u); { u32 t_ = r9; PR = 0x0C08AE64u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C08AE64u); }  /* 0C08AE60 jsr @Rn */
L_0C08AE64: BLKS(0x0C08AE64u);
	r9 = 0xC069AF0u; UPD(0x0C08AE66u, 1);  /* 0C08AE64 mov.l @(disp,pc),Rn */
	r11 = r0;  /* 0C08AE66 mov Rm,Rn */
	r4 = 0xC19F808u; UPD(0x0C08AE6Au, 2);  /* 0C08AE68 mov.l @(disp,pc),Rn */
	r10 += r4;  /* 0C08AE6A add Rm,Rn */
	r5 = R32(r10); UPD(0x0C08AE6Eu, 2);  /* 0C08AE6C mov.l @Rm,Rn */
	IF(0x0C08AE6Eu); { u32 t_ = r9; PR = 0x0C08AE72u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C08AE72u); }  /* 0C08AE6E jsr @Rn */
L_0C08AE72: BLKS(0x0C08AE72u);
	r3 = R32(r14); UPD(0x0C08AE74u, 1);  /* 0C08AE72 mov.l @Rm,Rn */
	r11 -= r0;  /* 0C08AE74 sub Rm,Rn */
	r7 = R32(r3 + 0x24u); UPD(0x0C08AE78u, 2);  /* 0C08AE76 mov.l @(disp,Rm),Rn */
	r4 = r8;  /* 0C08AE78 mov Rm,Rn */
	r5 = 0x120000u; UPD(0x0C08AE7Cu, 2);  /* 0C08AE7A mov.l @(disp,pc),Rn */
	IF(0x0C08AE7Cu); { u32 t_ = r9; PR = 0x0C08AE80u; r11 += r7; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C08AE80u); }  /* 0C08AE7C jsr @Rn */
L_0C08AE80: BLKS(0x0C08AE80u);
	r2 = R32(r14); UPD(0x0C08AE82u, 1);  /* 0C08AE80 mov.l @Rm,Rn */
	r4 = r8;  /* 0C08AE82 mov Rm,Rn */
	r1 = 0xC069B20u; UPD(0x0C08AE86u, 2);  /* 0C08AE84 mov.l @(disp,pc),Rn */
	r9 = R32(r2 + 0x28u); UPD(0x0C08AE88u, 1);  /* 0C08AE86 mov.l @(disp,Rm),Rn */
	r5 = R32(r10); UPD(0x0C08AE8Au, 1);  /* 0C08AE88 mov.l @Rm,Rn */
	IF(0x0C08AE8Au); { u32 t_ = r1; PR = 0x0C08AE8Eu; r9 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C08AE8Eu); }  /* 0C08AE8A jsr @Rn */
L_0C08AE8E: BLKS(0x0C08AE8Eu);
	r9 += r0;  /* 0C08AE8E add Rm,Rn */
	r10 = 0xC0BA480u; UPD(0x0C08AE92u, 2);  /* 0C08AE90 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C08AE92 add #imm,Rn */
	r0 = 0x20000u; UPD(0x0C08AE96u, 2);  /* 0C08AE94 mov.l @(disp,pc),Rn */
	r5 = r11;  /* 0C08AE96 mov Rm,Rn */
	W32(r15, r0); UPD(0x0C08AE9Au, 2);  /* 0C08AE98 mov.l Rm,@Rn */
	r6 = r9;  /* 0C08AE9A mov Rm,Rn */
	r4 = 0x3u;  /* 0C08AE9C mov #imm,Rn */
	IF(0x0C08AE9Eu); { u32 t_ = r10; PR = 0x0C08AEA2u; r7 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0BA480, 0x0C0BA480u, 0x0C08AEA2u); }  /* 0C08AE9E jsr @Rn */
L_0C08AEA2: BLKS(0x0C08AEA2u);
	r6 = r13;  /* 0C08AEA2 mov Rm,Rn */
	r6 += 0x1u;  /* 0C08AEA4 add #imm,Rn */
	r13 = (u32)(s32)(s16)r6;  /* 0C08AEA6 exts.w Rm,Rn */
	r5 = 0x1u;  /* 0C08AEA8 mov #imm,Rn */
	T = (s32)r13 > (s32)r5;  /* 0C08AEAA cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C08AE48u, 8); goto L_0C08AE48; } goto L_0C08AEB0; }  /* 0C08AEAC bf/s */
L_0C08AEB0: BLKS(0x0C08AEB0u);
	r1 = 0xC069B90u; UPD(0x0C08AEB2u, 2);  /* 0C08AEB0 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C08AEB2 mov Rm,Rn */
	UPD(0x0C08AEB4u, 1);
L_0C08AEB4: BLKS(0x0C08AEB4u);
	r14 += 0x8u;  /* 0C08AEB4 add #imm,Rn */
	r15 = r14;  /* 0C08AEB6 mov Rm,Rn */
	IF(0x0C08AEB8u); PR = R32(r15); r15 += 4; UPD(0x0C08AEBAu, 3);  /* 0C08AEB8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08AEBCu, 1);  /* 0C08AEBA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08AEBEu, 1);  /* 0C08AEBC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08AEC0u, 1);  /* 0C08AEBE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08AEC2u, 1);  /* 0C08AEC0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08AEC4u, 1);  /* 0C08AEC2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08AEC6u, 1);  /* 0C08AEC4 mov.l @Rm+,Rn */
	IF(0x0C08AEC6u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C069B90u: TAIL(blk_f_0C069B90); case 0x0C0A8AE0u: TAIL(blk_f_0C0A8AE0); default: JUMPD(tv_); } }  /* 0C08AEC6 jmp @Rn */
L_0C08AED0: BLKS(0x0C08AED0u);
	r11 = 0xC069BF0u; UPD(0x0C08AED2u, 1);  /* 0C08AED0 mov.l @(disp,pc),Rn */
	r9 = 0xC068F00u; UPD(0x0C08AED4u, 1);  /* 0C08AED2 mov.l @(disp,pc),Rn */
	IF(0x0C08AED4u); { u32 t_ = r11; PR = 0x0C08AED8u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069BF0, 0x0C069BF0u, 0x0C08AED8u); }  /* 0C08AED4 jsr @Rn */
L_0C08AED8: BLKS(0x0C08AED8u);
	r4 = r12;  /* 0C08AED8 mov Rm,Rn */
	IF(0x0C08AEDAu); { u32 t_ = r9; PR = 0x0C08AEDEu; r5 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C068F00, 0x0C068F00u, 0x0C08AEDEu); }  /* 0C08AEDA jsr @Rn */
L_0C08AEDE: BLKS(0x0C08AEDEu);
	r4 = 0x86u; UPD(0x0C08AEE0u, 1);  /* 0C08AEDE mov.w @(disp,pc),Rn */
	r0 = r10;  /* 0C08AEE0 mov Rm,Rn */
	IF(0x0C08AEE2u); r13 = (u32)(s32)(s16)R16(r0 + r4); UPD(0x0C08AEE4u, 2);  /* 0C08AEE2 mov.w @(r0,Rm),Rn */
	r3 = 0x1Fu;  /* 0C08AEE4 mov #imm,Rn */
	r8 = 0x9Du; UPD(0x0C08AEE8u, 2);  /* 0C08AEE6 mov.w @(disp,pc),Rn */
	r13 += 0x8u;  /* 0C08AEE8 add #imm,Rn */
	IF(0x0C08AEEAu); r13 >>= 2;  /* 0C08AEEA shlr2 Rn */
	IF(0x0C08AEECu); r11 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C08AEEEu, 3);  /* 0C08AEEC mov.b @(r0,Rm),Rn */
	IF(0x0C08AEEEu); r13 >>= 2;  /* 0C08AEEE shlr2 Rn */
	r13 &= r3;  /* 0C08AEF0 and Rm,Rn */
	r0 = r11;  /* 0C08AEF2 mov Rm,Rn */
	r0 &= 0x1u;  /* 0C08AEF4 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C08AEF6 tst Rm,Rn */
	{ u32 c_ = !T; W32(r10 + 0x8u, r13); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C08AF06u, 8); goto L_0C08AF06; } UPD(0x0C08AEFCu, 1); goto L_0C08AEFC; }  /* 0C08AEF8 bf/s */
L_0C08AEFC: BLKS(0x0C08AEFCu);
	r0 = R32(r10 + 0xCu); UPD(0x0C08AEFEu, 1);  /* 0C08AEFC mov.l @(disp,Rm),Rn */
	r6 = 0xC19F7FCu; UPD(0x0C08AF00u, 1);  /* 0C08AEFE mov.l @(disp,pc),Rn */
	IF(0x0C08AF00u); r0 <<= 2;  /* 0C08AF00 shll2 Rn */
	IF(0x0C08AF02u); r5 = R32(r0 + r6); UPD(0x0C08AF04u, 2);  /* 0C08AF02 mov.l @(r0,Rm),Rn */
	W32(r10 + 0xCu, r5); UPD(0x0C08AF06u, 1);  /* 0C08AF04 mov.l Rm,@(disp,Rn) */
L_0C08AF06: BLKS(0x0C08AF06u);
	r10 = 0xC0A8B10u; UPD(0x0C08AF08u, 1);  /* 0C08AF06 mov.l @(disp,pc),Rn */
	IF(0x0C08AF08u); { u32 t_ = r10; PR = 0x0C08AF0Cu; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B10, 0x0C0A8B10u, 0x0C08AF0Cu); }  /* 0C08AF08 jsr @Rn */
L_0C08AF0C: BLKS(0x0C08AF0Cu);
	{ r1 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C08ADAEu, 3); goto L_0C08ADAE; }  /* 0C08AF0C bra */
L_0C08AF10: BLKS(0x0C08AF10u);
	{ IF(0x0C08AF12u); ; /* slot nop */ UPD(0x0C08AD84u, 3); goto L_0C08AD84; }  /* 0C08AF10 bra */
L_0C08AF20: BLKS(0x0C08AF20u);
	W32(r3, r2); UPD(0x0C08AF22u, 1);  /* 0C08AF20 mov.l Rm,@Rn */
L_0C08AF22: BLKS(0x0C08AF22u);
	{ IF(0x0C08AF24u); ; /* slot nop */ UPD(0x0C08AD44u, 3); goto L_0C08AD44; }  /* 0C08AF22 bra */
L_0C08AF30: BLKS(0x0C08AF30u);
	r7 = 0xB4u; UPD(0x0C08AF32u, 1);  /* 0C08AF30 mov.w @(disp,pc),Rn */
	IF(0x0C08AF32u); MACL = r12 * r7;  /* 0C08AF32 mul.l Rm,Rn */
	r6 = 0xC286578u; UPD(0x0C08AF36u, 3);  /* 0C08AF34 mov.l @(disp,pc),Rn */
	IF(0x0C08AF36u); r3 = MACL;  /* 0C08AF36 sts macl,Rn */
	r5 = 0x8Cu; UPD(0x0C08AF3Au, 2);  /* 0C08AF38 mov.w @(disp,pc),Rn */
	r3 += r6;  /* 0C08AF3A add Rm,Rn */
	r3 += r5;  /* 0C08AF3C add Rm,Rn */
	r2 = R32(r3); UPD(0x0C08AF40u, 3);  /* 0C08AF3E mov.l @Rm,Rn */
	r10 = 0x8000u; UPD(0x0C08AF42u, 1);  /* 0C08AF40 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r10;  /* 0C08AF42 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C08AF22u, 4); goto L_0C08AF22; }  /* 0C08AF44 bf */
L_0C08AF46: BLKS(0x0C08AF46u);
	r1 = 0xFFFFF000u; UPD(0x0C08AF48u, 1);  /* 0C08AF46 mov.w @(disp,pc),Rn */
	{ r2 += r1; /* slot add Rm,Rn */ UPD(0x0C08AF20u, 3); goto L_0C08AF20; }  /* 0C08AF48 bra */
L_0C08AF50: BLKS(0x0C08AF50u);
	r11 = 0xC0A8B50u; UPD(0x0C08AF52u, 1);  /* 0C08AF50 mov.l @(disp,pc),Rn */
	IF(0x0C08AF52u); { u32 t_ = r11; PR = 0x0C08AF56u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C08AF56u); }  /* 0C08AF52 jsr @Rn */
L_0C08AF56: BLKS(0x0C08AF56u);
	IF(0x0C08AF56u); T = (s32)r0 >= 0;  /* 0C08AF56 cmp/pz Rn */
	if (!T) { UPD(0x0C08AF80u, 4); goto L_0C08AF80; }  /* 0C08AF58 bf */
L_0C08AF5A: BLKS(0x0C08AF5Au);
	IF(0x0C08AF5Au); MACL = r0 * r9;  /* 0C08AF5A mul.l Rm,Rn */
	r4 = r12;  /* 0C08AF5C mov Rm,Rn */
	IF(0x0C08AF5Eu); r3 = MACL;  /* 0C08AF5E sts macl,Rn */
	r3 += r10;  /* 0C08AF60 add Rm,Rn */
	r1 = R32(r3 + 0x24u); UPD(0x0C08AF64u, 6);  /* 0C08AF62 mov.l @(disp,Rm),Rn */
	r0 = R32(r8 + 0xCu); UPD(0x0C08AF66u, 1);  /* 0C08AF64 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x24u, r1); UPD(0x0C08AF68u, 1);  /* 0C08AF66 mov.l Rm,@(disp,Rn) */
	r0 += 0x3u;  /* 0C08AF68 add #imm,Rn */
	r2 = R32(r3 + 0x28u); UPD(0x0C08AF6Cu, 2);  /* 0C08AF6A mov.l @(disp,Rm),Rn */
	r0 &= 0x7u;  /* 0C08AF6C and #imm,r0 */
	W32(r8 + 0x28u, r2); UPD(0x0C08AF70u, 2);  /* 0C08AF6E mov.l Rm,@(disp,Rn) */
	r1 = 0xC0A8AE0u; UPD(0x0C08AF72u, 1);  /* 0C08AF70 mov.l @(disp,pc),Rn */
	{ W32(r8 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C08AEB4u, 3); goto L_0C08AEB4; }  /* 0C08AF72 bra */
L_0C08AF80: BLKS(0x0C08AF80u);
	r0 = 0x0u;  /* 0C08AF80 mov #imm,Rn */
	{ W32(r8, r0); /* slot mov.l Rm,@Rn */ UPD(0x0C08ADB4u, 4); goto L_0C08ADB4; }  /* 0C08AF82 bra */
}

void blk_f_0C08AFE0(sh3_t *c)
{
	LOCALS;
L_0C08AFE0: BLKS(0x0C08AFE0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C08AFE2u, 1);  /* 0C08AFE0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C08AFE4u, 1);  /* 0C08AFE2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C08AFE6u, 1);  /* 0C08AFE4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C08AFE8u, 1);  /* 0C08AFE6 mov.l Rm,@-Rn */
	r9 = 0xB4u; UPD(0x0C08AFEAu, 1);  /* 0C08AFE8 mov.w @(disp,pc),Rn */
	r11 = (u32)(s32)(s16)r4;  /* 0C08AFEA exts.w Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C08AFEEu, 2);  /* 0C08AFEC mov.l Rm,@-Rn */
	IF(0x0C08AFEEu); MACL = r11 * r9;  /* 0C08AFEE mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C08AFF2u, 3);  /* 0C08AFF0 mov.l Rm,@-Rn */
	r10 = 0xC286578u; UPD(0x0C08AFF4u, 1);  /* 0C08AFF2 mov.l @(disp,pc),Rn */
	IF(0x0C08AFF4u); r8 = MACL;  /* 0C08AFF4 sts macl,Rn */
	IF(0x0C08AFF6u); r15 -= 4; W32(r15, PR); UPD(0x0C08AFF8u, 2);  /* 0C08AFF6 sts.l pr,@-Rn */
	r8 += r10;  /* 0C08AFF8 add Rm,Rn */
	r0 = R32(r8 + 0x8u); UPD(0x0C08AFFCu, 2);  /* 0C08AFFA mov.l @(disp,Rm),Rn */
	T = r0 == 0x20u;  /* 0C08AFFC cmp/eq #imm,r0 */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C08B006u, 4); goto L_0C08B006; } goto L_0C08B002; }  /* 0C08AFFE bf/s */
L_0C08B002: BLKS(0x0C08B002u);
	{ IF(0x0C08B004u); ; /* slot nop */ UPD(0x0C08B270u, 4); goto L_0C08B270; }  /* 0C08B002 bra */
L_0C08B006: BLKS(0x0C08B006u);
	r7 = 0x9Fu; UPD(0x0C08B008u, 1);  /* 0C08B006 mov.w @(disp,pc),Rn */
	r7 += r8;  /* 0C08B008 add Rm,Rn */
	r5 = (u32)(s32)(s8)R8(r7); UPD(0x0C08B00Cu, 2);  /* 0C08B00A mov.b @Rm,Rn */
	r0 = r5 & 0xFF;  /* 0C08B00C extu.b Rm,Rn */
	T = r0 == 0x1u;  /* 0C08B00E cmp/eq #imm,r0 */
	{ u32 c_ = !T; r6 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C08B018u, 5); goto L_0C08B018; } goto L_0C08B014; }  /* 0C08B010 bf/s */
L_0C08B014: BLKS(0x0C08B014u);
	{ IF(0x0C08B016u); ; /* slot nop */ UPD(0x0C08B220u, 4); goto L_0C08B220; }  /* 0C08B014 bra */
L_0C08B018: BLKS(0x0C08B018u);
	T = (s32)r0 > (s32)r6;  /* 0C08B018 cmp/gt Rm,Rn */
	{ u32 c_ = !T; T = r0 == 0x2u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C08B022u, 4); goto L_0C08B022; } goto L_0C08B01E; }  /* 0C08B01A bf/s */
L_0C08B01E: BLKS(0x0C08B01Eu);
	{ IF(0x0C08B020u); ; /* slot nop */ UPD(0x0C08B1F0u, 4); goto L_0C08B1F0; }  /* 0C08B01E bra */
L_0C08B022: BLKS(0x0C08B022u);
	T = (r0 & r0) == 0;  /* 0C08B022 tst Rm,Rn */
	if (!T) { UPD(0x0C08B02Cu, 4); goto L_0C08B02C; }  /* 0C08B024 bf */
L_0C08B026: BLKS(0x0C08B026u);
	r9 = R32(r8 + 0x24u); UPD(0x0C08B028u, 1);  /* 0C08B026 mov.l @(disp,Rm),Rn */
	{ IF(0x0C08B02Au); ; /* slot nop */ UPD(0x0C08B180u, 3); goto L_0C08B180; }  /* 0C08B028 bra */
L_0C08B02C: BLKS(0x0C08B02Cu);
	r3 = 0xB4u; UPD(0x0C08B02Eu, 1);  /* 0C08B02C mov.w @(disp,pc),Rn */
	IF(0x0C08B02Eu); MACL = r11 * r3;  /* 0C08B02E mul.l Rm,Rn */
	r2 = 0xC286578u; UPD(0x0C08B032u, 3);  /* 0C08B030 mov.l @(disp,pc),Rn */
	IF(0x0C08B032u); r10 = MACL;  /* 0C08B032 sts macl,Rn */
	r8 = 0x8Au; UPD(0x0C08B036u, 2);  /* 0C08B034 mov.w @(disp,pc),Rn */
	r10 += r2;  /* 0C08B036 add Rm,Rn */
	r12 = 0x8Cu; UPD(0x0C08B03Au, 2);  /* 0C08B038 mov.w @(disp,pc),Rn */
	r8 += r10;  /* 0C08B03A add Rm,Rn */
	r9 = 0xC069B20u; UPD(0x0C08B03Eu, 2);  /* 0C08B03C mov.l @(disp,pc),Rn */
	r12 += r10;  /* 0C08B03E add Rm,Rn */
	r4 = (u32)(s32)(s16)R16(r8); UPD(0x0C08B042u, 2);  /* 0C08B040 mov.w @Rm,Rn */
	IF(0x0C08B042u); { u32 t_ = r9; PR = 0x0C08B046u; r5 = R32(r12); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C08B046u); }  /* 0C08B042 jsr @Rn */
L_0C08B046: BLKS(0x0C08B046u);
	r4 = (u32)(s32)(s16)R16(r8); UPD(0x0C08B048u, 1);  /* 0C08B046 mov.w @Rm,Rn */
	r8 = 0xC069AF0u; UPD(0x0C08B04Au, 1);  /* 0C08B048 mov.l @(disp,pc),Rn */
	W32(r10 + 0x2Cu, r0); UPD(0x0C08B04Cu, 1);  /* 0C08B04A mov.l Rm,@(disp,Rn) */
	IF(0x0C08B04Cu); { u32 t_ = r8; PR = 0x0C08B050u; r5 = R32(r12); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C08B050u); }  /* 0C08B04C jsr @Rn */
L_0C08B050: BLKS(0x0C08B050u);
	r6 = R32(r10 + 0x24u); UPD(0x0C08B052u, 1);  /* 0C08B050 mov.l @(disp,Rm),Rn */
	r7 = R32(r10 + 0x2Cu); UPD(0x0C08B054u, 1);  /* 0C08B052 mov.l @(disp,Rm),Rn */
	r6 += r7;  /* 0C08B054 add Rm,Rn */
	r7 = R32(r10 + 0x28u); UPD(0x0C08B058u, 2);  /* 0C08B056 mov.l @(disp,Rm),Rn */
	r3 = 0xFF600000u; UPD(0x0C08B05Au, 1);  /* 0C08B058 mov.l @(disp,pc),Rn */
	r7 += r0;  /* 0C08B05A add Rm,Rn */
	r3 += r6;  /* 0C08B05C add Rm,Rn */
	W32(r10 + 0x30u, r0); UPD(0x0C08B060u, 3);  /* 0C08B05E mov.l Rm,@(disp,Rn) */
	IF(0x0C08B060u); T = (s32)r3 >= 0;  /* 0C08B060 cmp/pz Rn */
	W32(r10 + 0x24u, r6); UPD(0x0C08B064u, 2);  /* 0C08B062 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = T; W32(r10 + 0x28u, r7); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C08B06Cu, 3); goto L_0C08B06C; } UPD(0x0C08B068u, 1); goto L_0C08B068; }  /* 0C08B064 bt/s */
L_0C08B068: BLKS(0x0C08B068u);
	{ r3 = 0u - r3; /* slot neg Rm,Rn */ UPD(0x0C08B170u, 3); goto L_0C08B170; }  /* 0C08B068 bra */
L_0C08B06C: BLKS(0x0C08B06Cu);
	r5 = 0xD00000u; UPD(0x0C08B06Eu, 1);  /* 0C08B06C mov.l @(disp,pc),Rn */
	T = (s32)r3 > (s32)r5;  /* 0C08B06E cmp/gt Rm,Rn */
	{ u32 c_ = T; r12 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C08B08Eu, 4); goto L_0C08B08E; } goto L_0C08B074; }  /* 0C08B070 bt/s */
L_0C08B074: BLKS(0x0C08B074u);
	r6 = 0xC3C4048u; UPD(0x0C08B076u, 2);  /* 0C08B074 mov.l @(disp,pc),Rn */
	r2 = r7;  /* 0C08B076 mov Rm,Rn */
	r4 = R32(r6); UPD(0x0C08B07Au, 2);  /* 0C08B078 mov.l @Rm,Rn */
	r0 = 0xFF880000u; UPD(0x0C08B07Cu, 1);  /* 0C08B07A mov.l @(disp,pc),Rn */
	r2 -= r4;  /* 0C08B07C sub Rm,Rn */
	r2 += r0;  /* 0C08B07E add Rm,Rn */
	IF(0x0C08B080u); T = (s32)r2 >= 0;  /* 0C08B080 cmp/pz Rn */
	if (T) { UPD(0x0C08B086u, 6); goto L_0C08B086; }  /* 0C08B082 bt */
L_0C08B084: BLKS(0x0C08B084u);
	r2 = 0u - r2;  /* 0C08B084 neg Rm,Rn */
	UPD(0x0C08B086u, 1);
L_0C08B086: BLKS(0x0C08B086u);
	r7 = 0xA80000u; UPD(0x0C08B088u, 1);  /* 0C08B086 mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r7;  /* 0C08B088 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r12 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C08B130u, 4); goto L_0C08B130; } UPD(0x0C08B08Eu, 1); goto L_0C08B08E; }  /* 0C08B08A bf/s */
L_0C08B08E: BLKS(0x0C08B08Eu);
	W32(r10, r12); UPD(0x0C08B090u, 1);  /* 0C08B08E mov.l Rm,@Rn */
	r1 = 0x1u;  /* 0C08B090 mov #imm,Rn */
	UPD(0x0C08B092u, 1);
L_0C08B092: BLKS(0x0C08B092u);
	r0 = (u32)(s32)(s16)r1;  /* 0C08B092 exts.w Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C08B094 tst Rm,Rn */
	if (T) { UPD(0x0C08B0B0u, 5); goto L_0C08B0B0; }  /* 0C08B096 bt */
L_0C08B098: BLKS(0x0C08B098u);
	r15 = r14;  /* 0C08B098 mov Rm,Rn */
	IF(0x0C08B09Au); PR = R32(r15); r15 += 4; UPD(0x0C08B09Cu, 2);  /* 0C08B09A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08B09Eu, 1);  /* 0C08B09C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08B0A0u, 1);  /* 0C08B09E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08B0A2u, 1);  /* 0C08B0A0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08B0A4u, 1);  /* 0C08B0A2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08B0A6u, 1);  /* 0C08B0A4 mov.l @Rm+,Rn */
	IF(0x0C08B0A6u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08B0A6 rts */
L_0C08B0B0: BLKS(0x0C08B0B0u);
	r9 = 0xC0BC1B0u; UPD(0x0C08B0B2u, 1);  /* 0C08B0B0 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C08B0B2 mov Rm,Rn */
	r5 = 0x5Au;  /* 0C08B0B4 mov #imm,Rn */
	IF(0x0C08B0B6u); { u32 t_ = r9; PR = 0x0C08B0BAu; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C08B0BAu); }  /* 0C08B0B6 jsr @Rn */
L_0C08B0BA: BLKS(0x0C08B0BAu);
	T = (r0 & r0) == 0;  /* 0C08B0BA tst Rm,Rn */
	if (T) { UPD(0x0C08B098u, 4); goto L_0C08B098; }  /* 0C08B0BC bt */
L_0C08B0BE: BLKS(0x0C08B0BEu);
	r2 = 0xB4u; UPD(0x0C08B0C0u, 1);  /* 0C08B0BE mov.w @(disp,pc),Rn */
	IF(0x0C08B0C0u); MACL = r11 * r2;  /* 0C08B0C0 mul.l Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C08B0C4u, 3);  /* 0C08B0C2 mov.l @(disp,pc),Rn */
	IF(0x0C08B0C4u); r12 = MACL;  /* 0C08B0C4 sts macl,Rn */
	r12 += r5;  /* 0C08B0C6 add Rm,Rn */
	r3 = 0xA9u; UPD(0x0C08B0CAu, 3);  /* 0C08B0C8 mov.w @(disp,pc),Rn */
	r0 = r12;  /* 0C08B0CA mov Rm,Rn */
	r8 = 0xC0BBF10u; UPD(0x0C08B0CEu, 2);  /* 0C08B0CC mov.l @(disp,pc),Rn */
	IF(0x0C08B0CEu); r7 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C08B0D0u, 1);  /* 0C08B0CE mov.b @(r0,Rm),Rn */
	r4 = R32(r12 + 0x24u); UPD(0x0C08B0D2u, 1);  /* 0C08B0D0 mov.l @(disp,Rm),Rn */
	r6 = r7 & 0xFF;  /* 0C08B0D2 extu.b Rm,Rn */
	IF(0x0C08B0D4u); { u32 t_ = r8; PR = 0x0C08B0D8u; r5 = R32(r12 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BBF10, 0x0C0BBF10u, 0x0C08B0D8u); }  /* 0C08B0D4 jsr @Rn */
L_0C08B0D8: BLKS(0x0C08B0D8u);
	T = (r0 & r0) == 0;  /* 0C08B0D8 tst Rm,Rn */
	if (T) { UPD(0x0C08B098u, 4); goto L_0C08B098; }  /* 0C08B0DA bt */
L_0C08B0DC: BLKS(0x0C08B0DCu);
	r0 = r12;  /* 0C08B0DC mov Rm,Rn */
	r7 = 0x86u; UPD(0x0C08B0E0u, 2);  /* 0C08B0DE mov.w @(disp,pc),Rn */
	r8 = 0xC069B20u; UPD(0x0C08B0E2u, 1);  /* 0C08B0E0 mov.l @(disp,pc),Rn */
	IF(0x0C08B0E2u); r9 = (u32)(s32)(s16)R16(r0 + r7); UPD(0x0C08B0E4u, 1);  /* 0C08B0E2 mov.w @(r0,Rm),Rn */
	r10 = 0x100000u; UPD(0x0C08B0E6u, 1);  /* 0C08B0E4 mov.l @(disp,pc),Rn */
	r4 = r9;  /* 0C08B0E6 mov Rm,Rn */
	IF(0x0C08B0E8u); { u32 t_ = r8; PR = 0x0C08B0ECu; r5 = r10; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C08B0ECu); }  /* 0C08B0E8 jsr @Rn */
L_0C08B0EC: BLKS(0x0C08B0ECu);
	r5 = r10;  /* 0C08B0EC mov Rm,Rn */
	r8 = R32(r12 + 0x24u); UPD(0x0C08B0F0u, 2);  /* 0C08B0EE mov.l @(disp,Rm),Rn */
	r4 = r9;  /* 0C08B0F0 mov Rm,Rn */
	r10 = 0xC069AF0u; UPD(0x0C08B0F4u, 2);  /* 0C08B0F2 mov.l @(disp,pc),Rn */
	r8 += r0;  /* 0C08B0F4 add Rm,Rn */
	r6 = 0xFFFC0000u; UPD(0x0C08B0F8u, 2);  /* 0C08B0F6 mov.l @(disp,pc),Rn */
	IF(0x0C08B0F8u); { u32 t_ = r10; PR = 0x0C08B0FCu; r8 += r6; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C08B0FCu); }  /* 0C08B0F8 jsr @Rn */
L_0C08B0FC: BLKS(0x0C08B0FCu);
	r6 = R32(r12 + 0x28u); UPD(0x0C08B0FEu, 1);  /* 0C08B0FC mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C08B0FE add #imm,Rn */
	r4 = 0x20000u; UPD(0x0C08B102u, 2);  /* 0C08B100 mov.l @(disp,pc),Rn */
	r6 += r0;  /* 0C08B102 add Rm,Rn */
	r12 = 0xC0BA480u; UPD(0x0C08B106u, 2);  /* 0C08B104 mov.l @(disp,pc),Rn */
	r5 = r8;  /* 0C08B106 mov Rm,Rn */
	W32(r15, r4); UPD(0x0C08B10Au, 2);  /* 0C08B108 mov.l Rm,@Rn */
	r7 = r9;  /* 0C08B10A mov Rm,Rn */
	IF(0x0C08B10Cu); { u32 t_ = r12; PR = 0x0C08B110u; r4 = 0x2u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C0BA480, 0x0C0BA480u, 0x0C08B110u); }  /* 0C08B10C jsr @Rn */
L_0C08B110: BLKS(0x0C08B110u);
	r1 = 0xC069B90u; UPD(0x0C08B112u, 1);  /* 0C08B110 mov.l @(disp,pc),Rn */
	r15 += 0x4u;  /* 0C08B112 add #imm,Rn */
	r4 = r11;  /* 0C08B114 mov Rm,Rn */
	UPD(0x0C08B116u, 2);
L_0C08B116: BLKS(0x0C08B116u);
	r15 = r14;  /* 0C08B116 mov Rm,Rn */
	IF(0x0C08B118u); PR = R32(r15); r15 += 4; UPD(0x0C08B11Au, 2);  /* 0C08B118 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08B11Cu, 1);  /* 0C08B11A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08B11Eu, 1);  /* 0C08B11C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08B120u, 1);  /* 0C08B11E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08B122u, 1);  /* 0C08B120 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08B124u, 1);  /* 0C08B122 mov.l @Rm+,Rn */
	IF(0x0C08B124u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C069B90u: TAIL(blk_f_0C069B90); case 0x0C0A8AE0u: TAIL(blk_f_0C0A8AE0); default: JUMPD(tv_); } }  /* 0C08B124 jmp @Rn */
L_0C08B130: BLKS(0x0C08B130u);
	r8 = 0xC069BF0u; UPD(0x0C08B132u, 1);  /* 0C08B130 mov.l @(disp,pc),Rn */
	r12 = 0xC068F00u; UPD(0x0C08B134u, 1);  /* 0C08B132 mov.l @(disp,pc),Rn */
	IF(0x0C08B134u); { u32 t_ = r8; PR = 0x0C08B138u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069BF0, 0x0C069BF0u, 0x0C08B138u); }  /* 0C08B134 jsr @Rn */
L_0C08B138: BLKS(0x0C08B138u);
	r5 = 0x4u;  /* 0C08B138 mov #imm,Rn */
	IF(0x0C08B13Au); { u32 t_ = r12; PR = 0x0C08B13Eu; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C068F00, 0x0C068F00u, 0x0C08B13Eu); }  /* 0C08B13A jsr @Rn */
L_0C08B13E: BLKS(0x0C08B13Eu);
	r2 = 0x86u; UPD(0x0C08B140u, 1);  /* 0C08B13E mov.w @(disp,pc),Rn */
	r0 = r10;  /* 0C08B140 mov Rm,Rn */
	IF(0x0C08B142u); r3 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C08B144u, 2);  /* 0C08B142 mov.w @(r0,Rm),Rn */
	r5 = 0x1Fu;  /* 0C08B144 mov #imm,Rn */
	r9 = 0x9Du; UPD(0x0C08B148u, 2);  /* 0C08B146 mov.w @(disp,pc),Rn */
	r3 += 0x8u;  /* 0C08B148 add #imm,Rn */
	IF(0x0C08B14Au); r3 >>= 2;  /* 0C08B14A shlr2 Rn */
	IF(0x0C08B14Cu); r8 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C08B14Eu, 3);  /* 0C08B14C mov.b @(r0,Rm),Rn */
	IF(0x0C08B14Eu); r3 >>= 2;  /* 0C08B14E shlr2 Rn */
	r3 &= r5;  /* 0C08B150 and Rm,Rn */
	r0 = r8;  /* 0C08B152 mov Rm,Rn */
	r0 &= 0x1u;  /* 0C08B154 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C08B156 tst Rm,Rn */
	{ u32 c_ = !T; W32(r10 + 0x8u, r3); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C08B166u, 8); goto L_0C08B166; } UPD(0x0C08B15Cu, 1); goto L_0C08B15C; }  /* 0C08B158 bf/s */
L_0C08B15C: BLKS(0x0C08B15Cu);
	r0 = R32(r10 + 0xCu); UPD(0x0C08B15Eu, 1);  /* 0C08B15C mov.l @(disp,Rm),Rn */
	r6 = 0xC19F7FCu; UPD(0x0C08B160u, 1);  /* 0C08B15E mov.l @(disp,pc),Rn */
	IF(0x0C08B160u); r0 <<= 2;  /* 0C08B160 shll2 Rn */
	IF(0x0C08B162u); r4 = R32(r0 + r6); UPD(0x0C08B164u, 2);  /* 0C08B162 mov.l @(r0,Rm),Rn */
	W32(r10 + 0xCu, r4); UPD(0x0C08B166u, 1);  /* 0C08B164 mov.l Rm,@(disp,Rn) */
L_0C08B166: BLKS(0x0C08B166u);
	r10 = 0xC0A8B10u; UPD(0x0C08B168u, 1);  /* 0C08B166 mov.l @(disp,pc),Rn */
	IF(0x0C08B168u); { u32 t_ = r10; PR = 0x0C08B16Cu; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B10, 0x0C0A8B10u, 0x0C08B16Cu); }  /* 0C08B168 jsr @Rn */
L_0C08B16C: BLKS(0x0C08B16Cu);
	{ r1 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C08B092u, 3); goto L_0C08B092; }  /* 0C08B16C bra */
L_0C08B170: BLKS(0x0C08B170u);
	{ IF(0x0C08B172u); ; /* slot nop */ UPD(0x0C08B06Cu, 3); goto L_0C08B06C; }  /* 0C08B170 bra */
L_0C08B180: BLKS(0x0C08B180u);
	r8 = 0x11FFFFFu; UPD(0x0C08B182u, 1);  /* 0C08B180 mov.l @(disp,pc),Rn */
	T = (s32)r9 > (s32)r8;  /* 0C08B182 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C08B188u, 4); goto L_0C08B188; }  /* 0C08B184 bt */
L_0C08B186: BLKS(0x0C08B186u);
	W8(r7, r6); UPD(0x0C08B188u, 1);  /* 0C08B186 mov.b Rm,@Rn */
L_0C08B188: BLKS(0x0C08B188u);
	{ IF(0x0C08B18Au); ; /* slot nop */ UPD(0x0C08B02Cu, 3); goto L_0C08B02C; }  /* 0C08B188 bra */
L_0C08B1F0: BLKS(0x0C08B1F0u);
	if (!T) { UPD(0x0C08B188u, 3); goto L_0C08B188; }  /* 0C08B1F0 bf */
L_0C08B1F2: BLKS(0x0C08B1F2u);
	r4 = 0x88u; UPD(0x0C08B1F4u, 1);  /* 0C08B1F2 mov.w @(disp,pc),Rn */
	r9 = 0x98u; UPD(0x0C08B1F6u, 1);  /* 0C08B1F4 mov.w @(disp,pc),Rn */
	r4 += r8;  /* 0C08B1F6 add Rm,Rn */
	r10 = r4;  /* 0C08B1F8 mov Rm,Rn */
	r10 += 0x2u;  /* 0C08B1FA add #imm,Rn */
	r9 += r8;  /* 0C08B1FC add Rm,Rn */
	r12 = (u32)(s32)(s16)R16(r10); UPD(0x0C08B200u, 5);  /* 0C08B1FE mov.w @Rm,Rn */
	r8 = (u32)(s32)(s8)R8(r9); UPD(0x0C08B202u, 1);  /* 0C08B200 mov.b @Rm,Rn */
	r1 = (u32)(s32)(s16)R16(r4); UPD(0x0C08B204u, 1);  /* 0C08B202 mov.w @Rm,Rn */
	r8 += 0x1u;  /* 0C08B204 add #imm,Rn */
	r12 += r1;  /* 0C08B206 add Rm,Rn */
	r0 = r8 & 0xFF;  /* 0C08B208 extu.b Rm,Rn */
	W16(r10, r12); UPD(0x0C08B20Cu, 4);  /* 0C08B20A mov.w Rm,@Rn */
	T = r0 == 0x3Cu;  /* 0C08B20C cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r9, r8); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C08B188u, 4); goto L_0C08B188; } UPD(0x0C08B212u, 1); goto L_0C08B212; }  /* 0C08B20E bf/s */
L_0C08B212: BLKS(0x0C08B212u);
	{ W8(r7, r6); /* slot mov.b Rm,@Rn */ UPD(0x0C08B188u, 3); goto L_0C08B188; }  /* 0C08B212 bra */
L_0C08B220: BLKS(0x0C08B220u);
	r9 = 0x99u; UPD(0x0C08B222u, 1);  /* 0C08B220 mov.w @(disp,pc),Rn */
	r9 += r8;  /* 0C08B222 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C08B226u, 2);  /* 0C08B224 mov.b @Rm,Rn */
	T = r0 == 0x10u;  /* 0C08B226 cmp/eq #imm,r0 */
	{ u32 c_ = T; r4 = 0xFu; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C08B260u, 4); goto L_0C08B260; } goto L_0C08B22C; }  /* 0C08B228 bt/s */
L_0C08B22C: BLKS(0x0C08B22Cu);
	r10 = 0xC062780u; UPD(0x0C08B22Eu, 2);  /* 0C08B22C mov.l @(disp,pc),Rn */
	r7 = 0x88u; UPD(0x0C08B230u, 1);  /* 0C08B22E mov.w @(disp,pc),Rn */
	IF(0x0C08B230u); { u32 t_ = r10; PR = 0x0C08B234u; r8 += r7; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C08B234u); }  /* 0C08B230 jsr @Rn */
L_0C08B234: BLKS(0x0C08B234u);
	r6 = (u32)(s32)(s8)R8(r9); UPD(0x0C08B236u, 1);  /* 0C08B234 mov.b @Rm,Rn */
	r0 += 0xFFFFFFF8u;  /* 0C08B236 add #imm,Rn */
	r6 += 0x1u;  /* 0C08B238 add #imm,Rn */
	W16(r8, r0); UPD(0x0C08B23Cu, 3);  /* 0C08B23A mov.w Rm,@Rn */
	W8(r9, r6); UPD(0x0C08B23Eu, 1);  /* 0C08B23C mov.b Rm,@Rn */
L_0C08B23E: BLKS(0x0C08B23Eu);
	r0 = 0xB4u; UPD(0x0C08B240u, 1);  /* 0C08B23E mov.w @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C08B240 mov #imm,Rn */
	IF(0x0C08B242u); MACL = r11 * r0;  /* 0C08B242 mul.l Rm,Rn */
	r5 = 0xC286578u; UPD(0x0C08B246u, 4);  /* 0C08B244 mov.l @(disp,pc),Rn */
	r2 = 0x2u;  /* 0C08B246 mov #imm,Rn */
	r4 = 0x98u; UPD(0x0C08B24Au, 2);  /* 0C08B248 mov.w @(disp,pc),Rn */
	IF(0x0C08B24Au); r0 = MACL;  /* 0C08B24A sts macl,Rn */
	r0 += r5;  /* 0C08B24C add Rm,Rn */
	IF(0x0C08B24Eu); W8(r0 + r4, r3); UPD(0x0C08B250u, 3);  /* 0C08B24E mov.b Rm,@(r0,Rn) */
	r4 += 0x7u;  /* 0C08B250 add #imm,Rn */
	{ IF(0x0C08B254u); W8(r0 + r4, r2); /* slot mov.b Rm,@(r0,Rn) */ UPD(0x0C08B02Cu, 4); goto L_0C08B02C; }  /* 0C08B252 bra */
L_0C08B260: BLKS(0x0C08B260u);
	r0 = 0x88u; UPD(0x0C08B262u, 1);  /* 0C08B260 mov.w @(disp,pc),Rn */
	r12 = 0x0u;  /* 0C08B262 mov #imm,Rn */
	{ IF(0x0C08B266u); W16(r0 + r8, r12); /* slot mov.w Rm,@(r0,Rn) */ UPD(0x0C08B23Eu, 4); goto L_0C08B23E; }  /* 0C08B264 bra */
L_0C08B270: BLKS(0x0C08B270u);
	r12 = 0xC0A8B50u; UPD(0x0C08B272u, 1);  /* 0C08B270 mov.l @(disp,pc),Rn */
	IF(0x0C08B272u); { u32 t_ = r12; PR = 0x0C08B276u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C08B276u); }  /* 0C08B272 jsr @Rn */
L_0C08B276: BLKS(0x0C08B276u);
	IF(0x0C08B276u); T = (s32)r0 >= 0;  /* 0C08B276 cmp/pz Rn */
	if (!T) { UPD(0x0C08B2A0u, 4); goto L_0C08B2A0; }  /* 0C08B278 bf */
L_0C08B27A: BLKS(0x0C08B27Au);
	IF(0x0C08B27Au); MACL = r0 * r9;  /* 0C08B27A mul.l Rm,Rn */
	r1 = 0x40000u; UPD(0x0C08B27Eu, 3);  /* 0C08B27C mov.l @(disp,pc),Rn */
	IF(0x0C08B27Eu); r4 = MACL;  /* 0C08B27E sts macl,Rn */
	r4 += r10;  /* 0C08B280 add Rm,Rn */
	r0 = R32(r8 + 0xCu); UPD(0x0C08B284u, 3);  /* 0C08B282 mov.l @(disp,Rm),Rn */
	r3 = R32(r4 + 0x24u); UPD(0x0C08B286u, 1);  /* 0C08B284 mov.l @(disp,Rm),Rn */
	r0 += 0x3u;  /* 0C08B286 add #imm,Rn */
	r2 = R32(r4 + 0x28u); UPD(0x0C08B28Au, 2);  /* 0C08B288 mov.l @(disp,Rm),Rn */
	r3 += r1;  /* 0C08B28A add Rm,Rn */
	r0 &= 0x7u;  /* 0C08B28C and #imm,r0 */
	W32(r8 + 0x24u, r3); UPD(0x0C08B290u, 3);  /* 0C08B28E mov.l Rm,@(disp,Rn) */
	r4 = r11;  /* 0C08B290 mov Rm,Rn */
	W32(r8 + 0x28u, r2); UPD(0x0C08B294u, 2);  /* 0C08B292 mov.l Rm,@(disp,Rn) */
	r1 = 0xC0A8AE0u; UPD(0x0C08B296u, 1);  /* 0C08B294 mov.l @(disp,pc),Rn */
	{ W32(r8 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C08B116u, 3); goto L_0C08B116; }  /* 0C08B296 bra */
L_0C08B2A0: BLKS(0x0C08B2A0u);
	r0 = 0x0u;  /* 0C08B2A0 mov #imm,Rn */
	{ W32(r8, r0); /* slot mov.l Rm,@Rn */ UPD(0x0C08B098u, 4); goto L_0C08B098; }  /* 0C08B2A2 bra */
}

void blk_f_0C08B2D0(sh3_t *c)
{
	LOCALS;
L_0C08B2D0: BLKS(0x0C08B2D0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C08B2D2u, 1);  /* 0C08B2D0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C08B2D4u, 1);  /* 0C08B2D2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C08B2D6u, 1);  /* 0C08B2D4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C08B2D8u, 1);  /* 0C08B2D6 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C08B2DAu, 1);  /* 0C08B2D8 mov.l Rm,@-Rn */
	r9 = 0xB4u; UPD(0x0C08B2DCu, 1);  /* 0C08B2DA mov.w @(disp,pc),Rn */
	r12 = (u32)(s32)(s16)r4;  /* 0C08B2DC exts.w Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C08B2E0u, 2);  /* 0C08B2DE mov.l Rm,@-Rn */
	IF(0x0C08B2E0u); MACL = r12 * r9;  /* 0C08B2E0 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C08B2E4u, 3);  /* 0C08B2E2 mov.l Rm,@-Rn */
	r10 = 0xC286578u; UPD(0x0C08B2E6u, 1);  /* 0C08B2E4 mov.l @(disp,pc),Rn */
	IF(0x0C08B2E6u); r8 = MACL;  /* 0C08B2E6 sts macl,Rn */
	IF(0x0C08B2E8u); r15 -= 4; W32(r15, PR); UPD(0x0C08B2EAu, 2);  /* 0C08B2E8 sts.l pr,@-Rn */
	r8 += r10;  /* 0C08B2EA add Rm,Rn */
	r0 = R32(r8 + 0x8u); UPD(0x0C08B2EEu, 2);  /* 0C08B2EC mov.l @(disp,Rm),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C08B2EE add #imm,Rn */
	T = r0 == 0x20u;  /* 0C08B2F0 cmp/eq #imm,r0 */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C08B2FAu, 5); goto L_0C08B2FA; } goto L_0C08B2F6; }  /* 0C08B2F2 bf/s */
L_0C08B2F6: BLKS(0x0C08B2F6u);
	{ IF(0x0C08B2F8u); ; /* slot nop */ UPD(0x0C08B590u, 4); goto L_0C08B590; }  /* 0C08B2F6 bra */
L_0C08B2FA: BLKS(0x0C08B2FAu);
	r7 = 0x9Fu; UPD(0x0C08B2FCu, 1);  /* 0C08B2FA mov.w @(disp,pc),Rn */
	r7 += r8;  /* 0C08B2FC add Rm,Rn */
	r5 = (u32)(s32)(s8)R8(r7); UPD(0x0C08B300u, 2);  /* 0C08B2FE mov.b @Rm,Rn */
	r0 = r5 & 0xFF;  /* 0C08B300 extu.b Rm,Rn */
	T = r0 == 0x1u;  /* 0C08B302 cmp/eq #imm,r0 */
	{ u32 c_ = !T; r6 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C08B30Cu, 5); goto L_0C08B30C; } goto L_0C08B308; }  /* 0C08B304 bf/s */
L_0C08B308: BLKS(0x0C08B308u);
	{ IF(0x0C08B30Au); ; /* slot nop */ UPD(0x0C08B540u, 4); goto L_0C08B540; }  /* 0C08B308 bra */
L_0C08B30C: BLKS(0x0C08B30Cu);
	T = (s32)r0 > (s32)r6;  /* 0C08B30C cmp/gt Rm,Rn */
	{ u32 c_ = !T; T = r0 == 0x2u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C08B316u, 4); goto L_0C08B316; } goto L_0C08B312; }  /* 0C08B30E bf/s */
L_0C08B312: BLKS(0x0C08B312u);
	{ IF(0x0C08B314u); ; /* slot nop */ UPD(0x0C08B510u, 4); goto L_0C08B510; }  /* 0C08B312 bra */
L_0C08B316: BLKS(0x0C08B316u);
	T = (r0 & r0) == 0;  /* 0C08B316 tst Rm,Rn */
	if (!T) { UPD(0x0C08B320u, 4); goto L_0C08B320; }  /* 0C08B318 bf */
L_0C08B31A: BLKS(0x0C08B31Au);
	r9 = R32(r8 + 0x24u); UPD(0x0C08B31Cu, 1);  /* 0C08B31A mov.l @(disp,Rm),Rn */
	{ IF(0x0C08B31Eu); ; /* slot nop */ UPD(0x0C08B500u, 3); goto L_0C08B500; }  /* 0C08B31C bra */
L_0C08B320: BLKS(0x0C08B320u);
	r2 = 0xB4u; UPD(0x0C08B322u, 1);  /* 0C08B320 mov.w @(disp,pc),Rn */
	IF(0x0C08B322u); MACL = r12 * r2;  /* 0C08B322 mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C08B326u, 3);  /* 0C08B324 mov.l @(disp,pc),Rn */
	IF(0x0C08B326u); r10 = MACL;  /* 0C08B326 sts macl,Rn */
	r13 = 0x8Au; UPD(0x0C08B32Au, 2);  /* 0C08B328 mov.w @(disp,pc),Rn */
	r10 += r7;  /* 0C08B32A add Rm,Rn */
	r11 = 0x8Cu; UPD(0x0C08B32Eu, 2);  /* 0C08B32C mov.w @(disp,pc),Rn */
	r13 += r10;  /* 0C08B32E add Rm,Rn */
	r8 = 0xC069B20u; UPD(0x0C08B332u, 2);  /* 0C08B330 mov.l @(disp,pc),Rn */
	r11 += r10;  /* 0C08B332 add Rm,Rn */
	r9 = 0xC069AF0u; UPD(0x0C08B336u, 2);  /* 0C08B334 mov.l @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)R16(r13); UPD(0x0C08B338u, 1);  /* 0C08B336 mov.w @Rm,Rn */
	IF(0x0C08B338u); { u32 t_ = r8; PR = 0x0C08B33Cu; r5 = R32(r11); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C08B33Cu); }  /* 0C08B338 jsr @Rn */
L_0C08B33C: BLKS(0x0C08B33Cu);
	W32(r10 + 0x2Cu, r0); UPD(0x0C08B33Eu, 1);  /* 0C08B33C mov.l Rm,@(disp,Rn) */
	r4 = (u32)(s32)(s16)R16(r13); UPD(0x0C08B340u, 1);  /* 0C08B33E mov.w @Rm,Rn */
	IF(0x0C08B340u); { u32 t_ = r9; PR = 0x0C08B344u; r5 = R32(r11); /* slot mov.l @Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C08B344u); }  /* 0C08B340 jsr @Rn */
L_0C08B344: BLKS(0x0C08B344u);
	r8 = R32(r10 + 0x24u); UPD(0x0C08B346u, 1);  /* 0C08B344 mov.l @(disp,Rm),Rn */
	r7 = R32(r10 + 0x28u); UPD(0x0C08B348u, 1);  /* 0C08B346 mov.l @(disp,Rm),Rn */
	r6 = R32(r10 + 0x2Cu); UPD(0x0C08B34Au, 1);  /* 0C08B348 mov.l @(disp,Rm),Rn */
	r7 += r0;  /* 0C08B34A add Rm,Rn */
	r3 = 0xFF600000u; UPD(0x0C08B34Eu, 2);  /* 0C08B34C mov.l @(disp,pc),Rn */
	r8 += r6;  /* 0C08B34E add Rm,Rn */
	r3 += r8;  /* 0C08B350 add Rm,Rn */
	W32(r10 + 0x30u, r0); UPD(0x0C08B354u, 3);  /* 0C08B352 mov.l Rm,@(disp,Rn) */
	IF(0x0C08B354u); T = (s32)r3 >= 0;  /* 0C08B354 cmp/pz Rn */
	W32(r10 + 0x24u, r8); UPD(0x0C08B358u, 2);  /* 0C08B356 mov.l Rm,@(disp,Rn) */
	{ u32 c_ = T; W32(r10 + 0x28u, r7); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C08B360u, 3); goto L_0C08B360; } UPD(0x0C08B35Cu, 1); goto L_0C08B35C; }  /* 0C08B358 bt/s */
L_0C08B35C: BLKS(0x0C08B35Cu);
	{ r3 = 0u - r3; /* slot neg Rm,Rn */ UPD(0x0C08B4F0u, 3); goto L_0C08B4F0; }  /* 0C08B35C bra */
L_0C08B360: BLKS(0x0C08B360u);
	r4 = 0xD00000u; UPD(0x0C08B362u, 1);  /* 0C08B360 mov.l @(disp,pc),Rn */
	T = (s32)r3 > (s32)r4;  /* 0C08B362 cmp/gt Rm,Rn */
	{ u32 c_ = T; r9 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C08B386u, 4); goto L_0C08B386; } goto L_0C08B368; }  /* 0C08B364 bt/s */
L_0C08B368: BLKS(0x0C08B368u);
	r5 = 0xC3C4048u; UPD(0x0C08B36Au, 2);  /* 0C08B368 mov.l @(disp,pc),Rn */
	r2 = r7;  /* 0C08B36A mov Rm,Rn */
	r0 = R32(r5); UPD(0x0C08B36Eu, 2);  /* 0C08B36C mov.l @Rm,Rn */
	r3 = 0xFF880000u; UPD(0x0C08B370u, 1);  /* 0C08B36E mov.l @(disp,pc),Rn */
	r2 -= r0;  /* 0C08B370 sub Rm,Rn */
	r2 += r3;  /* 0C08B372 add Rm,Rn */
	IF(0x0C08B374u); T = (s32)r2 >= 0;  /* 0C08B374 cmp/pz Rn */
	if (T) { UPD(0x0C08B37Au, 6); goto L_0C08B37A; }  /* 0C08B376 bt */
L_0C08B378: BLKS(0x0C08B378u);
	r2 = 0u - r2;  /* 0C08B378 neg Rm,Rn */
	UPD(0x0C08B37Au, 1);
L_0C08B37A: BLKS(0x0C08B37Au);
	r6 = 0xA80000u; UPD(0x0C08B37Cu, 1);  /* 0C08B37A mov.l @(disp,pc),Rn */
	T = (s32)r2 > (s32)r6;  /* 0C08B37C cmp/gt Rm,Rn */
	{ u32 c_ = T; r9 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C08B386u, 4); goto L_0C08B386; } goto L_0C08B382; }  /* 0C08B37E bt/s */
L_0C08B382: BLKS(0x0C08B382u);
	{ IF(0x0C08B384u); ; /* slot nop */ UPD(0x0C08B4B0u, 4); goto L_0C08B4B0; }  /* 0C08B382 bra */
L_0C08B386: BLKS(0x0C08B386u);
	W32(r10, r9); UPD(0x0C08B388u, 1);  /* 0C08B386 mov.l Rm,@Rn */
	r1 = 0x1u;  /* 0C08B388 mov #imm,Rn */
	UPD(0x0C08B38Au, 1);
L_0C08B38A: BLKS(0x0C08B38Au);
	r0 = (u32)(s32)(s16)r1;  /* 0C08B38A exts.w Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C08B38C tst Rm,Rn */
	if (T) { UPD(0x0C08B3B0u, 5); goto L_0C08B3B0; }  /* 0C08B38E bt */
L_0C08B390: BLKS(0x0C08B390u);
	r14 += 0x4u;  /* 0C08B390 add #imm,Rn */
	r15 = r14;  /* 0C08B392 mov Rm,Rn */
	IF(0x0C08B394u); PR = R32(r15); r15 += 4; UPD(0x0C08B396u, 3);  /* 0C08B394 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08B398u, 1);  /* 0C08B396 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08B39Au, 1);  /* 0C08B398 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08B39Cu, 1);  /* 0C08B39A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08B39Eu, 1);  /* 0C08B39C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08B3A0u, 1);  /* 0C08B39E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08B3A2u, 1);  /* 0C08B3A0 mov.l @Rm+,Rn */
	IF(0x0C08B3A2u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C08B3A2 rts */
L_0C08B3B0: BLKS(0x0C08B3B0u);
	r13 = 0xC0BC1B0u; UPD(0x0C08B3B2u, 1);  /* 0C08B3B0 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C08B3B2 mov Rm,Rn */
	r5 = 0x5Au;  /* 0C08B3B4 mov #imm,Rn */
	IF(0x0C08B3B6u); { u32 t_ = r13; PR = 0x0C08B3BAu; r6 = 0xAu; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0BC1B0, 0x0C0BC1B0u, 0x0C08B3BAu); }  /* 0C08B3B6 jsr @Rn */
L_0C08B3BA: BLKS(0x0C08B3BAu);
	T = (r0 & r0) == 0;  /* 0C08B3BA tst Rm,Rn */
	if (T) { UPD(0x0C08B390u, 4); goto L_0C08B390; }  /* 0C08B3BC bt */
L_0C08B3BE: BLKS(0x0C08B3BEu);
	r8 = 0xB4u; UPD(0x0C08B3C0u, 1);  /* 0C08B3BE mov.w @(disp,pc),Rn */
	IF(0x0C08B3C0u); MACL = r12 * r8;  /* 0C08B3C0 mul.l Rm,Rn */
	r7 = 0xC286578u; UPD(0x0C08B3C4u, 3);  /* 0C08B3C2 mov.l @(disp,pc),Rn */
	IF(0x0C08B3C4u); r8 = MACL;  /* 0C08B3C4 sts macl,Rn */
	r8 += r7;  /* 0C08B3C6 add Rm,Rn */
	r6 = 0xA9u; UPD(0x0C08B3CAu, 3);  /* 0C08B3C8 mov.w @(disp,pc),Rn */
	r0 = r8;  /* 0C08B3CA mov Rm,Rn */
	IF(0x0C08B3CCu); r5 = (u32)(s32)(s8)R8(r0 + r6); UPD(0x0C08B3CEu, 2);  /* 0C08B3CC mov.b @(r0,Rm),Rn */
	r9 = 0xC0BBF10u; UPD(0x0C08B3D0u, 1);  /* 0C08B3CE mov.l @(disp,pc),Rn */
	r6 = r5 & 0xFF;  /* 0C08B3D0 extu.b Rm,Rn */
	r4 = R32(r8 + 0x24u); UPD(0x0C08B3D4u, 2);  /* 0C08B3D2 mov.l @(disp,Rm),Rn */
	IF(0x0C08B3D4u); { u32 t_ = r9; PR = 0x0C08B3D8u; r5 = R32(r8 + 0x28u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0BBF10, 0x0C0BBF10u, 0x0C08B3D8u); }  /* 0C08B3D4 jsr @Rn */
L_0C08B3D8: BLKS(0x0C08B3D8u);
	T = (r0 & r0) == 0;  /* 0C08B3D8 tst Rm,Rn */
	if (T) { UPD(0x0C08B390u, 4); goto L_0C08B390; }  /* 0C08B3DA bt */
L_0C08B3DC: BLKS(0x0C08B3DCu);
	r0 = r8;  /* 0C08B3DC mov Rm,Rn */
	r2 = 0x86u; UPD(0x0C08B3E0u, 2);  /* 0C08B3DE mov.w @(disp,pc),Rn */
	IF(0x0C08B3E0u); r11 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C08B3E2u, 1);  /* 0C08B3E0 mov.w @(r0,Rm),Rn */
	r13 = 0x0u;  /* 0C08B3E2 mov #imm,Rn */
	W32(r14, r8); UPD(0x0C08B3E6u, 2);  /* 0C08B3E4 mov.l Rm,@Rn */
	IF(0x0C08B3E6u); ;  /* 0C08B3E6 nop */
	UPD(0x0C08B3E8u, 1);
L_0C08B3E8: BLKS(0x0C08B3E8u);
	r10 = 0xC069B20u; UPD(0x0C08B3EAu, 1);  /* 0C08B3E8 mov.l @(disp,pc),Rn */
	r5 = 0x120000u; UPD(0x0C08B3ECu, 1);  /* 0C08B3EA mov.l @(disp,pc),Rn */
	IF(0x0C08B3ECu); { u32 t_ = r10; PR = 0x0C08B3F0u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C08B3F0u); }  /* 0C08B3EC jsr @Rn */
L_0C08B3F0: BLKS(0x0C08B3F0u);
	r2 = 0xC19F810u; UPD(0x0C08B3F2u, 1);  /* 0C08B3F0 mov.l @(disp,pc),Rn */
	r9 = r13;  /* 0C08B3F2 mov Rm,Rn */
	r3 = 0xC069AF0u; UPD(0x0C08B3F6u, 2);  /* 0C08B3F4 mov.l @(disp,pc),Rn */
	IF(0x0C08B3F6u); r9 <<= 2;  /* 0C08B3F6 shll2 Rn */
	r9 += r2;  /* 0C08B3F8 add Rm,Rn */
	r5 = R32(r9); UPD(0x0C08B3FCu, 3);  /* 0C08B3FA mov.l @Rm,Rn */
	r10 = r0;  /* 0C08B3FC mov Rm,Rn */
	IF(0x0C08B3FEu); { u32 t_ = r3; PR = 0x0C08B402u; r4 = r11; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C08B402u); }  /* 0C08B3FE jsr @Rn */
L_0C08B402: BLKS(0x0C08B402u);
	r8 = R32(r14); UPD(0x0C08B404u, 1);  /* 0C08B402 mov.l @Rm,Rn */
	r10 -= r0;  /* 0C08B404 sub Rm,Rn */
	r6 = 0xC069AF0u; UPD(0x0C08B408u, 2);  /* 0C08B406 mov.l @(disp,pc),Rn */
	r4 = r11;  /* 0C08B408 mov Rm,Rn */
	r7 = R32(r8 + 0x24u); UPD(0x0C08B40Cu, 2);  /* 0C08B40A mov.l @(disp,Rm),Rn */
	r5 = 0x120000u; UPD(0x0C08B40Eu, 1);  /* 0C08B40C mov.l @(disp,pc),Rn */
	IF(0x0C08B40Eu); { u32 t_ = r6; PR = 0x0C08B412u; r10 += r7; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069AF0, 0x0C069AF0u, 0x0C08B412u); }  /* 0C08B40E jsr @Rn */
L_0C08B412: BLKS(0x0C08B412u);
	r5 = R32(r14); UPD(0x0C08B414u, 1);  /* 0C08B412 mov.l @Rm,Rn */
	r4 = r11;  /* 0C08B414 mov Rm,Rn */
	r8 = R32(r5 + 0x28u); UPD(0x0C08B418u, 2);  /* 0C08B416 mov.l @(disp,Rm),Rn */
	r5 = R32(r9); UPD(0x0C08B41Au, 1);  /* 0C08B418 mov.l @Rm,Rn */
	r9 = 0xC069B20u; UPD(0x0C08B41Cu, 1);  /* 0C08B41A mov.l @(disp,pc),Rn */
	IF(0x0C08B41Cu); { u32 t_ = r9; PR = 0x0C08B420u; r8 += r0; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069B20, 0x0C069B20u, 0x0C08B420u); }  /* 0C08B41C jsr @Rn */
L_0C08B420: BLKS(0x0C08B420u);
	r8 += r0;  /* 0C08B420 add Rm,Rn */
	r1 = 0xC0BA480u; UPD(0x0C08B424u, 2);  /* 0C08B422 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C08B424 add #imm,Rn */
	r0 = 0x20000u; UPD(0x0C08B428u, 2);  /* 0C08B426 mov.l @(disp,pc),Rn */
	r4 = 0x2u;  /* 0C08B428 mov #imm,Rn */
	W32(r15, r0); UPD(0x0C08B42Cu, 2);  /* 0C08B42A mov.l Rm,@Rn */
	r5 = r10;  /* 0C08B42C mov Rm,Rn */
	r6 = r8;  /* 0C08B42E mov Rm,Rn */
	IF(0x0C08B430u); { u32 t_ = r1; PR = 0x0C08B434u; r7 = r11; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, blk_f_0C0BA480, 0x0C0BA480u, 0x0C08B434u); }  /* 0C08B430 jsr @Rn */
L_0C08B434: BLKS(0x0C08B434u);
	r3 = r13;  /* 0C08B434 mov Rm,Rn */
	r3 += 0x1u;  /* 0C08B436 add #imm,Rn */
	r13 = (u32)(s32)(s16)r3;  /* 0C08B438 exts.w Rm,Rn */
	r4 = 0x1u;  /* 0C08B43A mov #imm,Rn */
	T = (s32)r13 > (s32)r4;  /* 0C08B43C cmp/gt Rm,Rn */
	{ u32 c_ = !T; r15 += 0x4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C08B3E8u, 8); goto L_0C08B3E8; } goto L_0C08B442; }  /* 0C08B43E bf/s */
L_0C08B442: BLKS(0x0C08B442u);
	r1 = 0xC069B90u; UPD(0x0C08B444u, 2);  /* 0C08B442 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C08B444 mov Rm,Rn */
	UPD(0x0C08B446u, 1);
L_0C08B446: BLKS(0x0C08B446u);
	r14 += 0x4u;  /* 0C08B446 add #imm,Rn */
	r15 = r14;  /* 0C08B448 mov Rm,Rn */
	IF(0x0C08B44Au); PR = R32(r15); r15 += 4; UPD(0x0C08B44Cu, 3);  /* 0C08B44A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C08B44Eu, 1);  /* 0C08B44C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C08B450u, 1);  /* 0C08B44E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C08B452u, 1);  /* 0C08B450 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C08B454u, 1);  /* 0C08B452 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C08B456u, 1);  /* 0C08B454 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C08B458u, 1);  /* 0C08B456 mov.l @Rm+,Rn */
	IF(0x0C08B458u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C069B90u: TAIL(blk_f_0C069B90); case 0x0C0A8AE0u: TAIL(blk_f_0C0A8AE0); default: JUMPD(tv_); } }  /* 0C08B458 jmp @Rn */
L_0C08B4B0: BLKS(0x0C08B4B0u);
	r11 = 0xC069BF0u; UPD(0x0C08B4B2u, 1);  /* 0C08B4B0 mov.l @(disp,pc),Rn */
	r9 = 0xC068F00u; UPD(0x0C08B4B4u, 1);  /* 0C08B4B2 mov.l @(disp,pc),Rn */
	IF(0x0C08B4B4u); { u32 t_ = r11; PR = 0x0C08B4B8u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C069BF0, 0x0C069BF0u, 0x0C08B4B8u); }  /* 0C08B4B4 jsr @Rn */
L_0C08B4B8: BLKS(0x0C08B4B8u);
	r4 = r12;  /* 0C08B4B8 mov Rm,Rn */
	IF(0x0C08B4BAu); { u32 t_ = r9; PR = 0x0C08B4BEu; r5 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, blk_f_0C068F00, 0x0C068F00u, 0x0C08B4BEu); }  /* 0C08B4BA jsr @Rn */
L_0C08B4BE: BLKS(0x0C08B4BEu);
	r2 = 0x86u; UPD(0x0C08B4C0u, 1);  /* 0C08B4BE mov.w @(disp,pc),Rn */
	r0 = r10;  /* 0C08B4C0 mov Rm,Rn */
	IF(0x0C08B4C2u); r8 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C08B4C4u, 2);  /* 0C08B4C2 mov.w @(r0,Rm),Rn */
	r7 = 0x1Fu;  /* 0C08B4C4 mov #imm,Rn */
	r13 = 0x9Du; UPD(0x0C08B4C8u, 2);  /* 0C08B4C6 mov.w @(disp,pc),Rn */
	r8 += 0x8u;  /* 0C08B4C8 add #imm,Rn */
	IF(0x0C08B4CAu); r8 >>= 2;  /* 0C08B4CA shlr2 Rn */
	IF(0x0C08B4CCu); r11 = (u32)(s32)(s8)R8(r0 + r13); UPD(0x0C08B4CEu, 3);  /* 0C08B4CC mov.b @(r0,Rm),Rn */
	IF(0x0C08B4CEu); r8 >>= 2;  /* 0C08B4CE shlr2 Rn */
	r8 &= r7;  /* 0C08B4D0 and Rm,Rn */
	r0 = r11;  /* 0C08B4D2 mov Rm,Rn */
	r0 &= 0x1u;  /* 0C08B4D4 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C08B4D6 tst Rm,Rn */
	{ u32 c_ = !T; W32(r10 + 0x8u, r8); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C08B4E6u, 8); goto L_0C08B4E6; } UPD(0x0C08B4DCu, 1); goto L_0C08B4DC; }  /* 0C08B4D8 bf/s */
L_0C08B4DC: BLKS(0x0C08B4DCu);
	r0 = R32(r10 + 0xCu); UPD(0x0C08B4DEu, 1);  /* 0C08B4DC mov.l @(disp,Rm),Rn */
	r3 = 0xC19F7FCu; UPD(0x0C08B4E0u, 1);  /* 0C08B4DE mov.l @(disp,pc),Rn */
	IF(0x0C08B4E0u); r0 <<= 2;  /* 0C08B4E0 shll2 Rn */
	IF(0x0C08B4E2u); r4 = R32(r0 + r3); UPD(0x0C08B4E4u, 2);  /* 0C08B4E2 mov.l @(r0,Rm),Rn */
	W32(r10 + 0xCu, r4); UPD(0x0C08B4E6u, 1);  /* 0C08B4E4 mov.l Rm,@(disp,Rn) */
L_0C08B4E6: BLKS(0x0C08B4E6u);
	r10 = 0xC0A8B10u; UPD(0x0C08B4E8u, 1);  /* 0C08B4E6 mov.l @(disp,pc),Rn */
	IF(0x0C08B4E8u); { u32 t_ = r10; PR = 0x0C08B4ECu; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B10, 0x0C0A8B10u, 0x0C08B4ECu); }  /* 0C08B4E8 jsr @Rn */
L_0C08B4EC: BLKS(0x0C08B4ECu);
	{ r1 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C08B38Au, 3); goto L_0C08B38A; }  /* 0C08B4EC bra */
L_0C08B4F0: BLKS(0x0C08B4F0u);
	{ IF(0x0C08B4F2u); ; /* slot nop */ UPD(0x0C08B360u, 3); goto L_0C08B360; }  /* 0C08B4F0 bra */
L_0C08B500: BLKS(0x0C08B500u);
	r8 = 0x11FFFFFu; UPD(0x0C08B502u, 1);  /* 0C08B500 mov.l @(disp,pc),Rn */
	T = (s32)r9 > (s32)r8;  /* 0C08B502 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C08B508u, 4); goto L_0C08B508; }  /* 0C08B504 bt */
L_0C08B506: BLKS(0x0C08B506u);
	W8(r7, r6); UPD(0x0C08B508u, 1);  /* 0C08B506 mov.b Rm,@Rn */
L_0C08B508: BLKS(0x0C08B508u);
	{ IF(0x0C08B50Au); ; /* slot nop */ UPD(0x0C08B320u, 3); goto L_0C08B320; }  /* 0C08B508 bra */
L_0C08B510: BLKS(0x0C08B510u);
	if (!T) { UPD(0x0C08B508u, 3); goto L_0C08B508; }  /* 0C08B510 bf */
L_0C08B512: BLKS(0x0C08B512u);
	r13 = 0x88u; UPD(0x0C08B514u, 1);  /* 0C08B512 mov.w @(disp,pc),Rn */
	r9 = 0x98u; UPD(0x0C08B516u, 1);  /* 0C08B514 mov.w @(disp,pc),Rn */
	r13 += r8;  /* 0C08B516 add Rm,Rn */
	r10 = r13;  /* 0C08B518 mov Rm,Rn */
	r10 += 0x2u;  /* 0C08B51A add #imm,Rn */
	r9 += r8;  /* 0C08B51C add Rm,Rn */
	r11 = (u32)(s32)(s16)R16(r10); UPD(0x0C08B520u, 5);  /* 0C08B51E mov.w @Rm,Rn */
	r5 = (u32)(s32)(s8)R8(r9); UPD(0x0C08B522u, 1);  /* 0C08B520 mov.b @Rm,Rn */
	r1 = (u32)(s32)(s16)R16(r13); UPD(0x0C08B524u, 1);  /* 0C08B522 mov.w @Rm,Rn */
	r5 += 0x1u;  /* 0C08B524 add #imm,Rn */
	r11 += r1;  /* 0C08B526 add Rm,Rn */
	r0 = r5 & 0xFF;  /* 0C08B528 extu.b Rm,Rn */
	W16(r10, r11); UPD(0x0C08B52Cu, 4);  /* 0C08B52A mov.w Rm,@Rn */
	T = r0 == 0x5Au;  /* 0C08B52C cmp/eq #imm,r0 */
	{ u32 c_ = !T; W8(r9, r5); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C08B508u, 4); goto L_0C08B508; } UPD(0x0C08B532u, 1); goto L_0C08B532; }  /* 0C08B52E bf/s */
L_0C08B532: BLKS(0x0C08B532u);
	{ W8(r7, r6); /* slot mov.b Rm,@Rn */ UPD(0x0C08B508u, 3); goto L_0C08B508; }  /* 0C08B532 bra */
L_0C08B540: BLKS(0x0C08B540u);
	r9 = 0x99u; UPD(0x0C08B542u, 1);  /* 0C08B540 mov.w @(disp,pc),Rn */
	r9 += r8;  /* 0C08B542 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r9); UPD(0x0C08B546u, 2);  /* 0C08B544 mov.b @Rm,Rn */
	T = r0 == 0x8u;  /* 0C08B546 cmp/eq #imm,r0 */
	{ u32 c_ = T; r4 = 0x7u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C08B580u, 4); goto L_0C08B580; } goto L_0C08B54C; }  /* 0C08B548 bt/s */
L_0C08B54C: BLKS(0x0C08B54Cu);
	r10 = 0xC062780u; UPD(0x0C08B54Eu, 2);  /* 0C08B54C mov.l @(disp,pc),Rn */
	r7 = 0x88u; UPD(0x0C08B550u, 1);  /* 0C08B54E mov.w @(disp,pc),Rn */
	IF(0x0C08B550u); { u32 t_ = r10; PR = 0x0C08B554u; r8 += r7; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C062780, 0x0C062780u, 0x0C08B554u); }  /* 0C08B550 jsr @Rn */
L_0C08B554: BLKS(0x0C08B554u);
	r6 = (u32)(s32)(s8)R8(r9); UPD(0x0C08B556u, 1);  /* 0C08B554 mov.b @Rm,Rn */
	r0 += 0xFFFFFFFCu;  /* 0C08B556 add #imm,Rn */
	r6 += 0x1u;  /* 0C08B558 add #imm,Rn */
	W16(r8, r0); UPD(0x0C08B55Cu, 3);  /* 0C08B55A mov.w Rm,@Rn */
	W8(r9, r6); UPD(0x0C08B55Eu, 1);  /* 0C08B55C mov.b Rm,@Rn */
L_0C08B55E: BLKS(0x0C08B55Eu);
	r0 = 0xB4u; UPD(0x0C08B560u, 1);  /* 0C08B55E mov.w @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C08B560 mov #imm,Rn */
	IF(0x0C08B562u); MACL = r12 * r0;  /* 0C08B562 mul.l Rm,Rn */
	r3 = 0xC286578u; UPD(0x0C08B566u, 4);  /* 0C08B564 mov.l @(disp,pc),Rn */
	r2 = 0x2u;  /* 0C08B566 mov #imm,Rn */
	r13 = 0x98u; UPD(0x0C08B56Au, 2);  /* 0C08B568 mov.w @(disp,pc),Rn */
	IF(0x0C08B56Au); r0 = MACL;  /* 0C08B56A sts macl,Rn */
	r0 += r3;  /* 0C08B56C add Rm,Rn */
	IF(0x0C08B56Eu); W8(r0 + r13, r4); UPD(0x0C08B570u, 3);  /* 0C08B56E mov.b Rm,@(r0,Rn) */
	r13 += 0x7u;  /* 0C08B570 add #imm,Rn */
	{ IF(0x0C08B574u); W8(r0 + r13, r2); /* slot mov.b Rm,@(r0,Rn) */ UPD(0x0C08B320u, 4); goto L_0C08B320; }  /* 0C08B572 bra */
L_0C08B580: BLKS(0x0C08B580u);
	r0 = 0x88u; UPD(0x0C08B582u, 1);  /* 0C08B580 mov.w @(disp,pc),Rn */
	r11 = 0x0u;  /* 0C08B582 mov #imm,Rn */
	{ IF(0x0C08B586u); W16(r0 + r8, r11); /* slot mov.w Rm,@(r0,Rn) */ UPD(0x0C08B55Eu, 4); goto L_0C08B55E; }  /* 0C08B584 bra */
L_0C08B590: BLKS(0x0C08B590u);
	r11 = 0xC0A8B50u; UPD(0x0C08B592u, 1);  /* 0C08B590 mov.l @(disp,pc),Rn */
	IF(0x0C08B592u); { u32 t_ = r11; PR = 0x0C08B596u; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, blk_f_0C0A8B50, 0x0C0A8B50u, 0x0C08B596u); }  /* 0C08B592 jsr @Rn */
L_0C08B596: BLKS(0x0C08B596u);
	IF(0x0C08B596u); T = (s32)r0 >= 0;  /* 0C08B596 cmp/pz Rn */
	if (!T) { UPD(0x0C08B5C0u, 4); goto L_0C08B5C0; }  /* 0C08B598 bf */
L_0C08B59A: BLKS(0x0C08B59Au);
	IF(0x0C08B59Au); MACL = r0 * r9;  /* 0C08B59A mul.l Rm,Rn */
	r1 = 0x80000u; UPD(0x0C08B59Eu, 3);  /* 0C08B59C mov.l @(disp,pc),Rn */
	IF(0x0C08B59Eu); r4 = MACL;  /* 0C08B59E sts macl,Rn */
	r4 += r10;  /* 0C08B5A0 add Rm,Rn */
	r0 = R32(r8 + 0xCu); UPD(0x0C08B5A4u, 3);  /* 0C08B5A2 mov.l @(disp,Rm),Rn */
	r3 = R32(r4 + 0x24u); UPD(0x0C08B5A6u, 1);  /* 0C08B5A4 mov.l @(disp,Rm),Rn */
	r0 += 0x3u;  /* 0C08B5A6 add #imm,Rn */
	r2 = R32(r4 + 0x28u); UPD(0x0C08B5AAu, 2);  /* 0C08B5A8 mov.l @(disp,Rm),Rn */
	r3 += r1;  /* 0C08B5AA add Rm,Rn */
	r0 &= 0x7u;  /* 0C08B5AC and #imm,r0 */
	W32(r8 + 0x24u, r3); UPD(0x0C08B5B0u, 3);  /* 0C08B5AE mov.l Rm,@(disp,Rn) */
	r4 = r12;  /* 0C08B5B0 mov Rm,Rn */
	W32(r8 + 0x28u, r2); UPD(0x0C08B5B4u, 2);  /* 0C08B5B2 mov.l Rm,@(disp,Rn) */
	r1 = 0xC0A8AE0u; UPD(0x0C08B5B6u, 1);  /* 0C08B5B4 mov.l @(disp,pc),Rn */
	{ W32(r8 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C08B446u, 3); goto L_0C08B446; }  /* 0C08B5B6 bra */
L_0C08B5C0: BLKS(0x0C08B5C0u);
	r0 = 0x0u;  /* 0C08B5C0 mov #imm,Rn */
	{ W32(r8, r0); /* slot mov.l Rm,@Rn */ UPD(0x0C08B390u, 4); goto L_0C08B390; }  /* 0C08B5C2 bra */
}


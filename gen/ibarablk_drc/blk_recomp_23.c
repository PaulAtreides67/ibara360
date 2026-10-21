#include "recomp.h"
#include "blk_recomp_funcs.h"

void blk_f_0C1942C6(sh3_t *c)
{
	LOCALS;
L_0C1942C6: BLKS(0x0C1942C6u);
	IF(0x0C1942C6u); { u32 t_ = PR; r8 = 0xAD828u; /* slot mov.l @(disp,pc),Rn */ UPD(t_, 3); RET(t_); }  /* 0C1942C6 rts */
}

void blk_f_0C194320(sh3_t *c)
{
	LOCALS;
L_0C194320: BLKS(0x0C194320u);
	IF(0x0C194320u); { u32 t_ = PR; r8 = 0x2F2F0000u; /* slot mov.l @(disp,pc),Rn */ UPD(t_, 3); RET(t_); }  /* 0C194320 rts */
}

void blk_f_0C19437A(sh3_t *c)
{
	LOCALS;
L_0C19437A: BLKS(0x0C19437Au);
	IF(0x0C19437Au); { u32 t_ = PR; r8 = 0x2F2F0000u; /* slot mov.l @(disp,pc),Rn */ UPD(t_, 3); RET(t_); }  /* 0C19437A rts */
}

void blk_f_0C1945F0(sh3_t *c)
{
	LOCALS;
L_0C1945F0: BLKS(0x0C1945F0u);
	IF(0x0C1945F0u); { u32 t_ = PR; T = r0 == 0x0u; /* slot cmp/eq #imm,r0 */ UPD(t_, 3); RET(t_); }  /* 0C1945F0 rts */
}

void blk_f_0C19464A(sh3_t *c)
{
	LOCALS;
L_0C19464A: BLKS(0x0C19464Au);
	IF(0x0C19464Au); { u32 t_ = PR; T = r0 == 0x28u; /* slot cmp/eq #imm,r0 */ UPD(t_, 3); RET(t_); }  /* 0C19464A rts */
}

void blk_f_0C1946A4(sh3_t *c)
{
	LOCALS;
L_0C1946A4: BLKS(0x0C1946A4u);
	IF(0x0C1946A4u); { u32 t_ = PR; T = r0 == 0x50u; /* slot cmp/eq #imm,r0 */ UPD(t_, 3); RET(t_); }  /* 0C1946A4 rts */
}

void blk_f_0C1946FE(sh3_t *c)
{
	LOCALS;
L_0C1946FE: BLKS(0x0C1946FEu);
	IF(0x0C1946FEu); { u32 t_ = PR; T = r0 == 0x78u; /* slot cmp/eq #imm,r0 */ UPD(t_, 3); RET(t_); }  /* 0C1946FE rts */
}

void blk_f_0C194758(sh3_t *c)
{
	LOCALS;
L_0C194758: BLKS(0x0C194758u);
	IF(0x0C194758u); { u32 t_ = PR; T = r0 == 0xFFFFFFA0u; /* slot cmp/eq #imm,r0 */ UPD(t_, 3); RET(t_); }  /* 0C194758 rts */
}

void blk_f_0C19C9B6(sh3_t *c)
{
	LOCALS;
L_0C19C9B6: BLKS(0x0C19C9B6u);
	IF(0x0C19C9B6u); { u32 t_ = PR; r8 = 0x6757u; /* slot mov.w @(disp,pc),Rn */ UPD(t_, 3); RET(t_); }  /* 0C19C9B6 rts */
}

void blk_f_0C19C9C0(sh3_t *c)
{
	LOCALS;
L_0C19C9C0: BLKS(0x0C19C9C0u);
	IF(0x0C19C9C0u); { u32 t_ = PR; r8 = 0x3058u; /* slot mov.w @(disp,pc),Rn */ UPD(t_, 3); RET(t_); }  /* 0C19C9C0 rts */
}

void blk_f_0C19C9CA(sh3_t *c)
{
	LOCALS;
L_0C19C9CA: BLKS(0x0C19C9CAu);
	IF(0x0C19C9CAu); { u32 t_ = PR; T = r0 == r0; /* slot cmp/eq Rm,Rn */ UPD(t_, 3); RET(t_); }  /* 0C19C9CA rts */
}

void blk_f_0C19C9D4(sh3_t *c)
{
	LOCALS;
L_0C19C9D4: BLKS(0x0C19C9D4u);
	IF(0x0C19C9D4u); { u32 t_ = PR; r0 -= r5; /* slot sub Rm,Rn */ UPD(t_, 3); RET(t_); }  /* 0C19C9D4 rts */
}

void blk_f_0C19CBDC(sh3_t *c)
{
	LOCALS;
L_0C19CBDC: BLKS(0x0C19CBDCu);
	IF(0x0C19CBDCu); { u32 t_ = PR; r0 = (u32)(s32)(s8)R8(r11); /* slot mov.b @Rm,Rn */ UPD(t_, 3); RET(t_); }  /* 0C19CBDC rts */
}

void blk_f_0C19CBE6(sh3_t *c)
{
	LOCALS;
L_0C19CBE6: BLKS(0x0C19CBE6u);
	IF(0x0C19CBE6u); { u32 t_ = PR; W32(r0 + 0x0u, r11); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); RET(t_); }  /* 0C19CBE6 rts */
}

void blk_f_0C1A716E(sh3_t *c)
{
	LOCALS;
L_0C1A716E: BLKS(0x0C1A716Eu);
	IF(0x0C1A716Eu); { u32 t_ = PR; W32(r0 + 0x0u, r11); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); RET(t_); }  /* 0C1A716E rts */
}

void blk_f_0C1A78EC(sh3_t *c)
{
	LOCALS;
L_0C1A78EC: BLKS(0x0C1A78ECu);
	IF(0x0C1A78ECu); { u32 t_ = PR; IF(0x0C1A78EEu); T = r0 >> 31; r0 <<= 1; /* slot shll Rn */ UPD(t_, 3); RET(t_); }  /* 0C1A78EC rts */
}

void blk_f_0C1A85E0(sh3_t *c)
{
	LOCALS;
L_0C1A85E0: BLKS(0x0C1A85E0u);
	IF(0x0C1A85E0u); { u32 t_ = PR; T = (r0 & 0x0u) == 0; /* slot tst #imm,r0 */ UPD(t_, 3); RET(t_); }  /* 0C1A85E0 rts */
}

void blk_f_0C1A85EA(sh3_t *c)
{
	LOCALS;
L_0C1A85EA: BLKS(0x0C1A85EAu);
	IF(0x0C1A85EAu); { u32 t_ = PR; T = (r0 & 0x30u) == 0; /* slot tst #imm,r0 */ UPD(t_, 3); RET(t_); }  /* 0C1A85EA rts */
}

void blk_f_0C1A85F4(sh3_t *c)
{
	LOCALS;
L_0C1A85F4: BLKS(0x0C1A85F4u);
	IF(0x0C1A85F4u); { u32 t_ = PR; T = (r0 & 0x60u) == 0; /* slot tst #imm,r0 */ UPD(t_, 3); RET(t_); }  /* 0C1A85F4 rts */
}

void blk_f_0C1A85FE(sh3_t *c)
{
	LOCALS;
L_0C1A85FE: BLKS(0x0C1A85FEu);
	IF(0x0C1A85FEu); { u32 t_ = PR; T = (r0 & 0x90u) == 0; /* slot tst #imm,r0 */ UPD(t_, 3); RET(t_); }  /* 0C1A85FE rts */
}

void blk_f_0C1A8608(sh3_t *c)
{
	LOCALS;
L_0C1A8608: BLKS(0x0C1A8608u);
	IF(0x0C1A8608u); { u32 t_ = PR; T = (r0 & 0xC0u) == 0; /* slot tst #imm,r0 */ UPD(t_, 3); RET(t_); }  /* 0C1A8608 rts */
}

void blk_f_0C1A8612(sh3_t *c)
{
	LOCALS;
L_0C1A8612: BLKS(0x0C1A8612u);
	IF(0x0C1A8612u); { u32 t_ = PR; r0 = 0x372Fu; /* slot mov.w @(disp,pc),Rn */ UPD(t_, 3); RET(t_); }  /* 0C1A8612 rts */
}

void blk_f_0C1A861C(sh3_t *c)
{
	LOCALS;
L_0C1A861C: BLKS(0x0C1A861Cu);
	IF(0x0C1A861Cu); { u32 t_ = PR; r0 = 0x2030u; /* slot mov.w @(disp,pc),Rn */ UPD(t_, 3); RET(t_); }  /* 0C1A861C rts */
}

void blk_f_0C1A8626(sh3_t *c)
{
	LOCALS;
L_0C1A8626: BLKS(0x0C1A8626u);
	IF(0x0C1A8626u); { u32 t_ = PR; r0 = 0x0u; /* slot mov.w @(disp,pc),Rn */ UPD(t_, 3); RET(t_); }  /* 0C1A8626 rts */
}

void blk_f_0C1A8630(sh3_t *c)
{
	LOCALS;
L_0C1A8630: BLKS(0x0C1A8630u);
	IF(0x0C1A8630u); { u32 t_ = PR; r0 = 0xFFFFE4E8u; /* slot mov.w @(disp,pc),Rn */ UPD(t_, 3); RET(t_); }  /* 0C1A8630 rts */
}

void blk_f_0C1A863A(sh3_t *c)
{
	LOCALS;
L_0C1A863A: BLKS(0x0C1A863Au);
	IF(0x0C1A863Au); { u32 t_ = PR; r0 = 0x13u; /* slot mov.w @(disp,pc),Rn */ UPD(t_, 3); RET(t_); }  /* 0C1A863A rts */
}

void blk_f_0C1A8644(sh3_t *c)
{
	LOCALS;
L_0C1A8644: BLKS(0x0C1A8644u);
	IF(0x0C1A8644u); { u32 t_ = PR; r8 = R32(r0 + 0x0u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); RET(t_); }  /* 0C1A8644 rts */
}

void blk_f_0C1A864E(sh3_t *c)
{
	LOCALS;
L_0C1A864E: BLKS(0x0C1A864Eu);
	IF(0x0C1A864Eu); { u32 t_ = PR; r8 = R32(r3 + 0x0u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); RET(t_); }  /* 0C1A864E rts */
}

void blk_f_0C1A8658(sh3_t *c)
{
	LOCALS;
L_0C1A8658: BLKS(0x0C1A8658u);
	IF(0x0C1A8658u); { u32 t_ = PR; r8 = R32(r6 + 0x0u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); RET(t_); }  /* 0C1A8658 rts */
}

void blk_f_0C1A8662(sh3_t *c)
{
	LOCALS;
L_0C1A8662: BLKS(0x0C1A8662u);
	IF(0x0C1A8662u); { u32 t_ = PR; r8 = R32(r9 + 0x0u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); RET(t_); }  /* 0C1A8662 rts */
}

void blk_f_0C1A866C(sh3_t *c)
{
	LOCALS;
L_0C1A866C: BLKS(0x0C1A866Cu);
	IF(0x0C1A866Cu); { u32 t_ = PR; r8 = R32(r12 + 0x0u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); RET(t_); }  /* 0C1A866C rts */
}

void blk_f_0C1A8676(sh3_t *c)
{
	LOCALS;
L_0C1A8676: BLKS(0x0C1A8676u);
	IF(0x0C1A8676u); { u32 t_ = PR; W8(r0, r0); /* slot mov.b Rm,@Rn */ UPD(t_, 3); RET(t_); }  /* 0C1A8676 rts */
}

void blk_f_0C1A868A(sh3_t *c)
{
	LOCALS;
L_0C1A868A: BLKS(0x0C1A868Au);
	IF(0x0C1A868Au); { u32 t_ = PR; W8(r0, r6); /* slot mov.b Rm,@Rn */ UPD(t_, 3); RET(t_); }  /* 0C1A868A rts */
}

void blk_f_0C1A8694(sh3_t *c)
{
	LOCALS;
L_0C1A8694: BLKS(0x0C1A8694u);
	IF(0x0C1A8694u); { u32 t_ = PR; W8(r0, r9); /* slot mov.b Rm,@Rn */ UPD(t_, 3); RET(t_); }  /* 0C1A8694 rts */
}

void blk_f_0C1A869E(sh3_t *c)
{
	LOCALS;
L_0C1A869E: BLKS(0x0C1A869Eu);
	IF(0x0C1A869Eu); { u32 t_ = PR; W8(r0, r12); /* slot mov.b Rm,@Rn */ UPD(t_, 3); RET(t_); }  /* 0C1A869E rts */
}

void blk_f_0C1AC14A(sh3_t *c)
{
	LOCALS;
L_0C1AC14A: BLKS(0x0C1AC14Au);
	IF(0x0C1AC14Au); { u32 tv_ = (r0 + 0x0C1AC14Eu); u32 t_ = PHYS(tv_); T = (r0 & 0x0u) == 0; /* slot tst #imm,r0 */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C1AC14A braf Rn */
}

void blk_f_0C1AC15C(sh3_t *c)
{
	LOCALS;
L_0C1AC15C: BLKS(0x0C1AC15Cu);
	IF(0x0C1AC15Cu); { u32 tv_ = (r0 + 0x0C1AC160u); u32 t_ = PHYS(tv_); T = (r0 & 0x30u) == 0; /* slot tst #imm,r0 */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C1AC15C braf Rn */
}

void blk_f_0C1AC16E(sh3_t *c)
{
	LOCALS;
L_0C1AC16E: BLKS(0x0C1AC16Eu);
	IF(0x0C1AC16Eu); { u32 tv_ = (r0 + 0x0C1AC172u); u32 t_ = PHYS(tv_); T = (r0 & 0x60u) == 0; /* slot tst #imm,r0 */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C1AC16E braf Rn */
}

void blk_f_0C1AC180(sh3_t *c)
{
	LOCALS;
L_0C1AC180: BLKS(0x0C1AC180u);
	IF(0x0C1AC180u); { u32 tv_ = (r0 + 0x0C1AC184u); u32 t_ = PHYS(tv_); T = (r0 & 0x90u) == 0; /* slot tst #imm,r0 */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C1AC180 braf Rn */
}

void blk_f_0C1AC192(sh3_t *c)
{
	LOCALS;
L_0C1AC192: BLKS(0x0C1AC192u);
	IF(0x0C1AC192u); { u32 tv_ = (r0 + 0x0C1AC196u); u32 t_ = PHYS(tv_); T = (r0 & 0xC0u) == 0; /* slot tst #imm,r0 */ JRGN(tv_); UPD(t_, 3); switch (t_) {  default: JUMPD(tv_); } }  /* 0C1AC192 braf Rn */
}


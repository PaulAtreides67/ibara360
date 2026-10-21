#include "recomp.h"
#include "recomp_funcs.h"

void f_0C060FF0(sh3_t *c)
{
	LOCALS;
L_0C060FF0: BLKS(0x0C060FF0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C060FF2u, 1);  /* 0C060FF0 mov.l Rm,@-Rn */
	r7 = 0xC393078u; UPD(0x0C060FF4u, 1);  /* 0C060FF2 mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s16)R16(r7); UPD(0x0C060FF6u, 1);  /* 0C060FF4 mov.w @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C060FF6 tst Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C061010u, 4); goto L_0C061010; } goto L_0C060FFC; }  /* 0C060FF8 bf/s */
L_0C060FFC: BLKS(0x0C060FFCu);
	r0 = 0xC2859A0u; UPD(0x0C060FFEu, 2);  /* 0C060FFC mov.l @(disp,pc),Rn */
	r1 = R32(r0); UPD(0x0C061000u, 1);  /* 0C060FFE mov.l @Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r1); r1 += 2; r2 = v_; } UPD(0x0C061002u, 1);  /* 0C061000 mov.w @Rm+,Rn */
	W16(r7, r2); UPD(0x0C061004u, 1);  /* 0C061002 mov.w Rm,@Rn */
	W32(r0, r1); UPD(0x0C061006u, 1);  /* 0C061004 mov.l Rm,@Rn */
L_0C061006: BLKS(0x0C061006u);
	r0 = 0x0u;  /* 0C061006 mov #imm,Rn */
	UPD(0x0C061008u, 1);
L_0C061008: BLKS(0x0C061008u);
	r15 = r14;  /* 0C061008 mov Rm,Rn */
	IF(0x0C06100Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C06100A rts */
L_0C061010: BLKS(0x0C061010u);
	r1 += 0xFFFFFFFFu;  /* 0C061010 add #imm,Rn */
	r0 = r1 & 0xFFFF;  /* 0C061012 extu.w Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C061014 tst Rm,Rn */
	{ u32 c_ = T; W16(r7, r1); /* slot mov.w Rm,@Rn */ if (c_) { UPD(0x0C06104Au, 6); goto L_0C06104A; } UPD(0x0C06101Au, 1); goto L_0C06101A; }  /* 0C061016 bt/s */
L_0C06101A: BLKS(0x0C06101Au);
	r5 = 0xBFu; UPD(0x0C06101Cu, 1);  /* 0C06101A mov.w @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C06101C mov #imm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C061020u, 2);  /* 0C06101E mov.l @(disp,pc),Rn */
	r4 = 0xFFFFFFE7u;  /* 0C061020 mov #imm,Rn */
	r6 = 0xB4u; UPD(0x0C061024u, 2);  /* 0C061022 mov.w @(disp,pc),Rn */
	r7 = 0xFFFFFFFFu;  /* 0C061024 mov #imm,Rn */
	IF(0x0C061026u); ;  /* 0C061026 nop */
	UPD(0x0C061028u, 2);
L_0C061028: BLKS(0x0C061028u);
	r0 = R32(r2); UPD(0x0C06102Au, 1);  /* 0C061028 mov.l @Rm,Rn */
	r2 += 0x3Cu;  /* 0C06102A add #imm,Rn */
	r1 = (u32)(s32)(s16)R16(r2); UPD(0x0C06102Eu, 2);  /* 0C06102C mov.w @Rm,Rn */
	IF(0x0C06102Eu); ARG0(0x404Cu); { s32 s_ = (s32)r4; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = (u32)((s32)r0 >> 31); else r0 = (u32)((s32)r0 >> ((~s_ & 31) + 1)); }  /* 0C06102E shad Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C061030 tst Rm,Rn */
	{ u32 t_ = 0u - r7, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r1 = r_; }  /* 0C061032 negc Rm,Rn */
	r0 &= 0x1u;  /* 0C061034 and #imm,r0 */
	r0 &= r1;  /* 0C061036 and Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C061038 tst Rm,Rn */
	{ u32 c_ = !T; r2 += 0xFFFFFFC4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C061006u, 9); goto L_0C061006; } goto L_0C06103E; }  /* 0C06103A bf/s */
L_0C06103E: BLKS(0x0C06103Eu);
	r0 = r3;  /* 0C06103E mov Rm,Rn */
	r0 += 0x1u;  /* 0C061040 add #imm,Rn */
	r3 = (u32)(s32)(s16)r0;  /* 0C061042 exts.w Rm,Rn */
	T = (s32)r3 > (s32)r5;  /* 0C061044 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r2 += r6; /* slot add Rm,Rn */ if (c_) { UPD(0x0C061028u, 8); goto L_0C061028; } UPD(0x0C06104Au, 1); goto L_0C06104A; }  /* 0C061046 bf/s */
L_0C06104A: BLKS(0x0C06104Au);
	r5 = 0xC2859A0u; UPD(0x0C06104Cu, 1);  /* 0C06104A mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C06104C mov #imm,Rn */
	r6 = R32(r5); UPD(0x0C061050u, 2);  /* 0C06104E mov.l @Rm,Rn */
	r0 = 0x1u;  /* 0C061050 mov #imm,Rn */
	r3 = 0xC393078u; UPD(0x0C061054u, 2);  /* 0C061052 mov.l @(disp,pc),Rn */
	r6 += 0x2u;  /* 0C061054 add #imm,Rn */
	W32(r5, r6); UPD(0x0C061058u, 2);  /* 0C061056 mov.l Rm,@Rn */
	{ W16(r3, r4); /* slot mov.w Rm,@Rn */ UPD(0x0C061008u, 3); goto L_0C061008; }  /* 0C061058 bra */
}

void f_0C061070(sh3_t *c)
{
	LOCALS;
L_0C061070: BLKS(0x0C061070u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C061072u, 1);  /* 0C061070 mov.l Rm,@-Rn */
	r7 = 0xC393078u; UPD(0x0C061074u, 1);  /* 0C061072 mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s16)R16(r7); UPD(0x0C061076u, 1);  /* 0C061074 mov.w @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C061076 tst Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C061090u, 4); goto L_0C061090; } goto L_0C06107C; }  /* 0C061078 bf/s */
L_0C06107C: BLKS(0x0C06107Cu);
	r0 = 0xC2859A0u; UPD(0x0C06107Eu, 2);  /* 0C06107C mov.l @(disp,pc),Rn */
	r1 = R32(r0); UPD(0x0C061080u, 1);  /* 0C06107E mov.l @Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r1); r1 += 2; r2 = v_; } UPD(0x0C061082u, 1);  /* 0C061080 mov.w @Rm+,Rn */
	W16(r7, r2); UPD(0x0C061084u, 1);  /* 0C061082 mov.w Rm,@Rn */
	W32(r0, r1); UPD(0x0C061086u, 1);  /* 0C061084 mov.l Rm,@Rn */
L_0C061086: BLKS(0x0C061086u);
	r0 = 0x0u;  /* 0C061086 mov #imm,Rn */
	UPD(0x0C061088u, 1);
L_0C061088: BLKS(0x0C061088u);
	r15 = r14;  /* 0C061088 mov Rm,Rn */
	IF(0x0C06108Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C06108A rts */
L_0C061090: BLKS(0x0C061090u);
	r1 += 0xFFFFFFFFu;  /* 0C061090 add #imm,Rn */
	r0 = r1 & 0xFFFF;  /* 0C061092 extu.w Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C061094 tst Rm,Rn */
	{ u32 c_ = T; W16(r7, r1); /* slot mov.w Rm,@Rn */ if (c_) { UPD(0x0C0610D0u, 6); goto L_0C0610D0; } UPD(0x0C06109Au, 1); goto L_0C06109A; }  /* 0C061096 bt/s */
L_0C06109A: BLKS(0x0C06109Au);
	r4 = 0xBFu; UPD(0x0C06109Cu, 1);  /* 0C06109A mov.w @(disp,pc),Rn */
	r6 = 0x0u;  /* 0C06109C mov #imm,Rn */
	r3 = 0xC26CD40u; UPD(0x0C0610A0u, 2);  /* 0C06109E mov.l @(disp,pc),Rn */
	r7 = 0xFFFFFFFFu;  /* 0C0610A0 mov #imm,Rn */
	r5 = 0xFFFFFFFCu;  /* 0C0610A2 mov #imm,Rn */
	UPD(0x0C0610A4u, 2);
L_0C0610A4: BLKS(0x0C0610A4u);
	r0 = R32(r3); UPD(0x0C0610A6u, 1);  /* 0C0610A4 mov.l @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0610A6 tst Rm,Rn */
	IF(0x0C0610A8u); ARG0(0x405Cu); { s32 s_ = (s32)r5; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = (u32)((s32)r0 >> 31); else r0 = (u32)((s32)r0 >> ((~s_ & 31) + 1)); }  /* 0C0610A8 shad Rm,Rn */
	r0 ^= 0x1u;  /* 0C0610AA xor #imm,r0 */
	{ u32 t_ = 0u - r7, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r2 = r_; }  /* 0C0610AC negc Rm,Rn */
	r0 &= 0x1u;  /* 0C0610AE and #imm,r0 */
	r2 &= r0;  /* 0C0610B0 and Rm,Rn */
	r3 += 0x3Cu;  /* 0C0610B2 add #imm,Rn */
	r0 = (u32)(s32)(s16)R16(r3); UPD(0x0C0610B6u, 8);  /* 0C0610B4 mov.w @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0610B6 tst Rm,Rn */
	{ u32 t_ = 0u - r7, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r0 = r_; }  /* 0C0610B8 negc Rm,Rn */
	r2 &= r0;  /* 0C0610BA and Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C0610BC tst Rm,Rn */
	{ u32 c_ = !T; r3 += 0xFFFFFFC4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C061086u, 7); goto L_0C061086; } goto L_0C0610C2; }  /* 0C0610BE bf/s */
L_0C0610C2: BLKS(0x0C0610C2u);
	r0 = r6;  /* 0C0610C2 mov Rm,Rn */
	r6 = 0xB4u; UPD(0x0C0610C6u, 3);  /* 0C0610C4 mov.w @(disp,pc),Rn */
	r0 += 0x1u;  /* 0C0610C6 add #imm,Rn */
	r3 += r6;  /* 0C0610C8 add Rm,Rn */
	r6 = (u32)(s32)(s16)r0;  /* 0C0610CA exts.w Rm,Rn */
	T = (s32)r6 > (s32)r4;  /* 0C0610CC cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0610A4u, 7); goto L_0C0610A4; }  /* 0C0610CE bf */
L_0C0610D0: BLKS(0x0C0610D0u);
	r5 = 0xC2859A0u; UPD(0x0C0610D2u, 1);  /* 0C0610D0 mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C0610D2 mov #imm,Rn */
	r7 = R32(r5); UPD(0x0C0610D6u, 2);  /* 0C0610D4 mov.l @Rm,Rn */
	r0 = 0x1u;  /* 0C0610D6 mov #imm,Rn */
	r3 = 0xC393078u; UPD(0x0C0610DAu, 2);  /* 0C0610D8 mov.l @(disp,pc),Rn */
	r7 += 0x2u;  /* 0C0610DA add #imm,Rn */
	W32(r5, r7); UPD(0x0C0610DEu, 2);  /* 0C0610DC mov.l Rm,@Rn */
	{ W16(r3, r4); /* slot mov.w Rm,@Rn */ UPD(0x0C061088u, 3); goto L_0C061088; }  /* 0C0610DE bra */
}

void f_0C061100(sh3_t *c)
{
	LOCALS;
L_0C061100: BLKS(0x0C061100u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C061102u, 1);  /* 0C061100 mov.l Rm,@-Rn */
	r7 = 0xC393078u; UPD(0x0C061104u, 1);  /* 0C061102 mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s16)R16(r7); UPD(0x0C061106u, 1);  /* 0C061104 mov.w @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C061106 tst Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C061120u, 4); goto L_0C061120; } goto L_0C06110C; }  /* 0C061108 bf/s */
L_0C06110C: BLKS(0x0C06110Cu);
	r0 = 0xC2859A0u; UPD(0x0C06110Eu, 2);  /* 0C06110C mov.l @(disp,pc),Rn */
	r1 = R32(r0); UPD(0x0C061110u, 1);  /* 0C06110E mov.l @Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r1); r1 += 2; r2 = v_; } UPD(0x0C061112u, 1);  /* 0C061110 mov.w @Rm+,Rn */
	W16(r7, r2); UPD(0x0C061114u, 1);  /* 0C061112 mov.w Rm,@Rn */
	W32(r0, r1); UPD(0x0C061116u, 1);  /* 0C061114 mov.l Rm,@Rn */
L_0C061116: BLKS(0x0C061116u);
	r0 = 0x0u;  /* 0C061116 mov #imm,Rn */
	UPD(0x0C061118u, 1);
L_0C061118: BLKS(0x0C061118u);
	r15 = r14;  /* 0C061118 mov Rm,Rn */
	IF(0x0C06111Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C06111A rts */
L_0C061120: BLKS(0x0C061120u);
	r1 += 0xFFFFFFFFu;  /* 0C061120 add #imm,Rn */
	r0 = r1 & 0xFFFF;  /* 0C061122 extu.w Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C061124 tst Rm,Rn */
	{ u32 c_ = T; W16(r7, r1); /* slot mov.w Rm,@Rn */ if (c_) { UPD(0x0C06115Au, 6); goto L_0C06115A; } UPD(0x0C06112Au, 1); goto L_0C06112A; }  /* 0C061126 bt/s */
L_0C06112A: BLKS(0x0C06112Au);
	r5 = 0xBFu; UPD(0x0C06112Cu, 1);  /* 0C06112A mov.w @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C06112C mov #imm,Rn */
	r2 = 0xC26CD40u; UPD(0x0C061130u, 2);  /* 0C06112E mov.l @(disp,pc),Rn */
	r4 = 0xFFFFFFFCu;  /* 0C061130 mov #imm,Rn */
	r6 = 0xB4u; UPD(0x0C061134u, 2);  /* 0C061132 mov.w @(disp,pc),Rn */
	r7 = 0xFFFFFFFFu;  /* 0C061134 mov #imm,Rn */
	IF(0x0C061136u); ;  /* 0C061136 nop */
	UPD(0x0C061138u, 2);
L_0C061138: BLKS(0x0C061138u);
	r0 = R32(r2); UPD(0x0C06113Au, 1);  /* 0C061138 mov.l @Rm,Rn */
	r2 += 0x3Cu;  /* 0C06113A add #imm,Rn */
	r1 = (u32)(s32)(s16)R16(r2); UPD(0x0C06113Eu, 2);  /* 0C06113C mov.w @Rm,Rn */
	IF(0x0C06113Eu); ARG0(0x404Cu); { s32 s_ = (s32)r4; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = (u32)((s32)r0 >> 31); else r0 = (u32)((s32)r0 >> ((~s_ & 31) + 1)); }  /* 0C06113E shad Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C061140 tst Rm,Rn */
	{ u32 t_ = 0u - r7, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r1 = r_; }  /* 0C061142 negc Rm,Rn */
	r0 &= 0x1u;  /* 0C061144 and #imm,r0 */
	r0 &= r1;  /* 0C061146 and Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C061148 tst Rm,Rn */
	{ u32 c_ = !T; r2 += 0xFFFFFFC4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C061116u, 9); goto L_0C061116; } goto L_0C06114E; }  /* 0C06114A bf/s */
L_0C06114E: BLKS(0x0C06114Eu);
	r0 = r3;  /* 0C06114E mov Rm,Rn */
	r0 += 0x1u;  /* 0C061150 add #imm,Rn */
	r3 = (u32)(s32)(s16)r0;  /* 0C061152 exts.w Rm,Rn */
	T = (s32)r3 > (s32)r5;  /* 0C061154 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r2 += r6; /* slot add Rm,Rn */ if (c_) { UPD(0x0C061138u, 8); goto L_0C061138; } UPD(0x0C06115Au, 1); goto L_0C06115A; }  /* 0C061156 bf/s */
L_0C06115A: BLKS(0x0C06115Au);
	r5 = 0xC2859A0u; UPD(0x0C06115Cu, 1);  /* 0C06115A mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C06115C mov #imm,Rn */
	r6 = R32(r5); UPD(0x0C061160u, 2);  /* 0C06115E mov.l @Rm,Rn */
	r0 = 0x1u;  /* 0C061160 mov #imm,Rn */
	r3 = 0xC393078u; UPD(0x0C061164u, 2);  /* 0C061162 mov.l @(disp,pc),Rn */
	r6 += 0x2u;  /* 0C061164 add #imm,Rn */
	W32(r5, r6); UPD(0x0C061168u, 2);  /* 0C061166 mov.l Rm,@Rn */
	{ W16(r3, r4); /* slot mov.w Rm,@Rn */ UPD(0x0C061118u, 3); goto L_0C061118; }  /* 0C061168 bra */
}

/* FUN_0c0612c0 */
void f_0C0612C0(sh3_t *c)
{
	LOCALS;
L_0C0612C0: BLKS(0x0C0612C0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0612C2u, 1);  /* 0C0612C0 mov.l Rm,@-Rn */
	r6 = 0x50u;  /* 0C0612C2 mov #imm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0612C6u, 2);  /* 0C0612C4 mov.l Rm,@-Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C0612C6 exts.w Rm,Rn */
	IF(0x0C0612C8u); r15 -= 4; W32(r15, PR); UPD(0x0C0612CAu, 2);  /* 0C0612C8 sts.l pr,@-Rn */
	r2 = 0x140u; UPD(0x0C0612CCu, 1);  /* 0C0612CA mov.w @(disp,pc),Rn */
	r7 = 0xC0B000Eu; UPD(0x0C0612CEu, 1);  /* 0C0612CC mov.l @(disp,pc),Rn */
	r15 -= r2;  /* 0C0612CE sub Rm,Rn */
	r14 = r15;  /* 0C0612D0 mov Rm,Rn */
	r5 = 0xC0B2A80u; UPD(0x0C0612D4u, 3);  /* 0C0612D2 mov.l @(disp,pc),Rn */
	IF(0x0C0612D4u); { u32 t_ = r7; PR = 0x0C0612D8u; r4 = r14; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0B000E, 0x0C0B000Eu, 0x0C0612D8u); }  /* 0C0612D4 jsr @Rn */
L_0C0612D8: BLKS(0x0C0612D8u);
	r5 = 0xB4u; UPD(0x0C0612DAu, 1);  /* 0C0612D8 mov.w @(disp,pc),Rn */
	IF(0x0C0612DAu); MACL = r8 * r5;  /* 0C0612DA mul.l Rm,Rn */
	r4 = 0xC26CD40u; UPD(0x0C0612DEu, 3);  /* 0C0612DC mov.l @(disp,pc),Rn */
	IF(0x0C0612DEu); r7 = MACL;  /* 0C0612DE sts macl,Rn */
	r0 = 0xB0u; UPD(0x0C0612E2u, 2);  /* 0C0612E0 mov.w @(disp,pc),Rn */
	r7 += r4;  /* 0C0612E2 add Rm,Rn */
	IF(0x0C0612E4u); r8 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C0612E6u, 2);  /* 0C0612E4 mov.b @(r0,Rm),Rn */
	r4 = 0xC286734u; UPD(0x0C0612E8u, 1);  /* 0C0612E6 mov.l @(disp,pc),Rn */
	r0 = 0x4Cu;  /* 0C0612E8 mov #imm,Rn */
	r2 = R32(r4); UPD(0x0C0612ECu, 2);  /* 0C0612EA mov.l @Rm,Rn */
	IF(0x0C0612ECu); MACL = r8 * r0;  /* 0C0612EC mul.l Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r2); r2 += 2; r5 = v_; } UPD(0x0C0612F0u, 3);  /* 0C0612EE mov.w @Rm+,Rn */
	r6 = 0xC22C874u; UPD(0x0C0612F2u, 1);  /* 0C0612F0 mov.l @(disp,pc),Rn */
	IF(0x0C0612F2u); r0 = MACL;  /* 0C0612F2 sts macl,Rn */
	r3 = 0xC26CAE0u; UPD(0x0C0612F6u, 2);  /* 0C0612F4 mov.l @(disp,pc),Rn */
	W16(r6, r5); UPD(0x0C0612F8u, 1);  /* 0C0612F6 mov.w Rm,@Rn */
	r0 += r3;  /* 0C0612F8 add Rm,Rn */
	r6 = R32(r7 + 0x24u); UPD(0x0C0612FCu, 2);  /* 0C0612FA mov.l @(disp,Rm),Rn */
	r1 = R32(r0 + 0x8u); UPD(0x0C0612FEu, 1);  /* 0C0612FC mov.l @(disp,Rm),Rn */
	r6 += r1;  /* 0C0612FE add Rm,Rn */
	r3 = (r6 >> 16) | (r6 << 16);  /* 0C061300 swap.w Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r2); r2 += 2; r6 = v_; } UPD(0x0C061304u, 3);  /* 0C061302 mov.w @Rm+,Rn */
	r1 = (u32)(s32)(s16)r3;  /* 0C061304 exts.w Rm,Rn */
	r1 += r6;  /* 0C061306 add Rm,Rn */
	r6 = 0xC21F5E2u; UPD(0x0C06130Au, 3);  /* 0C061308 mov.l @(disp,pc),Rn */
	W16(r6, r1); UPD(0x0C06130Cu, 1);  /* 0C06130A mov.w Rm,@Rn */
	r6 = R32(r7 + 0x28u); UPD(0x0C06130Eu, 1);  /* 0C06130C mov.l @(disp,Rm),Rn */
	r1 = r5 & 0xFFFF;  /* 0C06130E extu.w Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r2); r2 += 2; r7 = v_; } UPD(0x0C061312u, 2);  /* 0C061310 mov.w @Rm+,Rn */
	r3 = (r6 >> 16) | (r6 << 16);  /* 0C061312 swap.w Rm,Rn */
	r6 = (u32)(s32)(s16)r3;  /* 0C061314 exts.w Rm,Rn */
	r6 += r7;  /* 0C061316 add Rm,Rn */
	r7 = 0xC392D5Eu; UPD(0x0C06131Au, 4);  /* 0C061318 mov.l @(disp,pc),Rn */
	IF(0x0C06131Au); r1 <<= 2;  /* 0C06131A shll2 Rn */
	W16(r7, r6); UPD(0x0C06131Eu, 2);  /* 0C06131C mov.w Rm,@Rn */
	r3 = R32(r0 + 0x38u); UPD(0x0C061320u, 1);  /* 0C06131E mov.l @(disp,Rm),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r2); r2 += 2; r0 = v_; } UPD(0x0C061322u, 1);  /* 0C061320 mov.w @Rm+,Rn */
	IF(0x0C061322u); r0 <<= 2;  /* 0C061322 shll2 Rn */
	IF(0x0C061324u); r6 = R32(r0 + r3); UPD(0x0C061326u, 2);  /* 0C061324 mov.l @(r0,Rm),Rn */
	r0 = 0xC27DC20u; UPD(0x0C061328u, 1);  /* 0C061326 mov.l @(disp,pc),Rn */
	W32(r0, r6); UPD(0x0C06132Au, 1);  /* 0C061328 mov.l Rm,@Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r2); r2 += 2; r7 = v_; } UPD(0x0C06132Cu, 1);  /* 0C06132A mov.w @Rm+,Rn */
	r0 = 0xC286509u; UPD(0x0C06132Eu, 1);  /* 0C06132C mov.l @(disp,pc),Rn */
	W8(r0, r8); UPD(0x0C061330u, 1);  /* 0C06132E mov.b Rm,@Rn */
	W32(r4, r2); UPD(0x0C061332u, 1);  /* 0C061330 mov.l Rm,@Rn */
	r0 = r1;  /* 0C061332 mov Rm,Rn */
	IF(0x0C061334u); r2 = R32(r0 + r14); UPD(0x0C061336u, 2);  /* 0C061334 mov.l @(r0,Rm),Rn */
	r6 = 0xC28629Eu; UPD(0x0C061338u, 1);  /* 0C061336 mov.l @(disp,pc),Rn */
	IF(0x0C061338u); { u32 t_ = r2; PR = 0x0C06133Cu; W16(r6, r7); /* slot mov.w Rm,@Rn */ UPD(t_, 2); CALLD(t_, 0x0C06133Cu); }  /* 0C061338 jsr @Rn */
L_0C06133C: BLKS(0x0C06133Cu);
	r1 = 0x140u; UPD(0x0C06133Eu, 1);  /* 0C06133C mov.w @(disp,pc),Rn */
	r0 = 0x1u;  /* 0C06133E mov #imm,Rn */
	r14 += r1;  /* 0C061340 add Rm,Rn */
	r15 = r14;  /* 0C061342 mov Rm,Rn */
	IF(0x0C061344u); PR = R32(r15); r15 += 4; UPD(0x0C061346u, 4);  /* 0C061344 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C061348u, 1);  /* 0C061346 mov.l @Rm+,Rn */
	IF(0x0C061348u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C061348 rts */
}

/* FUN_0c061380 */
void f_0C061380(sh3_t *c)
{
	LOCALS;
L_0C061380: BLKS(0x0C061380u);
	r3 = 0xB4u; UPD(0x0C061382u, 1);  /* 0C061380 mov.w @(disp,pc),Rn */
	r1 = (u32)(s32)(s16)r4;  /* 0C061382 exts.w Rm,Rn */
	IF(0x0C061384u); MACL = r1 * r3;  /* 0C061384 mul.l Rm,Rn */
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C061388u, 4);  /* 0C061386 mov.l Rm,@-Rn */
	r0 = 0xC26CD40u; UPD(0x0C06138Au, 1);  /* 0C061388 mov.l @(disp,pc),Rn */
	IF(0x0C06138Au); r8 = MACL;  /* 0C06138A sts macl,Rn */
	r2 = 0xC21F5E2u; UPD(0x0C06138Eu, 2);  /* 0C06138C mov.l @(disp,pc),Rn */
	r8 += r0;  /* 0C06138E add Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C061392u, 2);  /* 0C061390 mov.l Rm,@-Rn */
	r0 = (u32)(s32)(s16)R16(r2); UPD(0x0C061394u, 1);  /* 0C061392 mov.w @Rm,Rn */
	IF(0x0C061394u); r15 -= 4; W32(r15, PR); UPD(0x0C061396u, 1);  /* 0C061394 sts.l pr,@-Rn */
	IF(0x0C061396u); r0 <<= 16;  /* 0C061396 shll16 Rn */
	W32(r8 + 0x28u, r0); UPD(0x0C06139Au, 2);  /* 0C061398 mov.l Rm,@(disp,Rn) */
	T = (r0 & r0) == 0;  /* 0C06139A tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0613B0u, 4); goto L_0C0613B0; } UPD(0x0C0613A0u, 1); goto L_0C0613A0; }  /* 0C06139C bt/s */
L_0C0613A0: BLKS(0x0C0613A0u);
	r15 = r14;  /* 0C0613A0 mov Rm,Rn */
	IF(0x0C0613A2u); PR = R32(r15); r15 += 4; UPD(0x0C0613A4u, 2);  /* 0C0613A2 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0613A6u, 1);  /* 0C0613A4 mov.l @Rm+,Rn */
	IF(0x0C0613A6u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0613A6 rts */
L_0C0613B0: BLKS(0x0C0613B0u);
	r0 = 0xC0AFE40u; UPD(0x0C0613B2u, 1);  /* 0C0613B0 mov.l @(disp,pc),Rn */
	IF(0x0C0613B2u); { u32 t_ = r0; PR = 0x0C0613B6u; IF(0x0C0613B4u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0AFE40, 0x0C0AFE40u, 0x0C0613B6u); }  /* 0C0613B2 jsr @Rn */
L_0C0613B6: BLKS(0x0C0613B6u);
	r4 = 0x1C0u; UPD(0x0C0613B8u, 1);  /* 0C0613B6 mov.w @(disp,pc),Rn */
	r0 &= 0x7Fu;  /* 0C0613B8 and #imm,r0 */
	r0 += r4;  /* 0C0613BA add Rm,Rn */
	IF(0x0C0613BCu); r0 <<= 16;  /* 0C0613BC shll16 Rn */
	{ W32(r8 + 0x28u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0613A0u, 6); goto L_0C0613A0; }  /* 0C0613BE bra */
}

/* FUN_0c0613e0 */
void f_0C0613E0(sh3_t *c)
{
	LOCALS;
L_0C0613E0: BLKS(0x0C0613E0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0613E2u, 1);  /* 0C0613E0 mov.l Rm,@-Rn */
	r2 = 0x0u;  /* 0C0613E2 mov #imm,Rn */
	r6 = 0xC392D10u; UPD(0x0C0613E6u, 2);  /* 0C0613E4 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0613E6 mov Rm,Rn */
	r7 = 0x0u;  /* 0C0613E8 mov #imm,Rn */
	r3 = 0xFu;  /* 0C0613EA mov #imm,Rn */
	r0 = r2;  /* 0C0613EC mov Rm,Rn */
	UPD(0x0C0613EEu, 4);
L_0C0613EE: BLKS(0x0C0613EEu);
	IF(0x0C0613EEu); r0 <<= 2;  /* 0C0613EE shll2 Rn */
	IF(0x0C0613F0u); W32(r0 + r6, r7); UPD(0x0C0613F2u, 2);  /* 0C0613F0 mov.l Rm,@(r0,Rn) */
	r0 = r2;  /* 0C0613F2 mov Rm,Rn */
	r0 += 0x1u;  /* 0C0613F4 add #imm,Rn */
	r2 = r0 & 0xFF;  /* 0C0613F6 extu.b Rm,Rn */
	T = r2 > r3;  /* 0C0613F8 cmp/hi Rm,Rn */
	{ u32 c_ = !T; r0 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0613EEu, 7); goto L_0C0613EE; } goto L_0C0613FE; }  /* 0C0613FA bf/s */
L_0C0613FE: BLKS(0x0C0613FEu);
	r6 = 0xC393078u; UPD(0x0C061400u, 2);  /* 0C0613FE mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C061400 mov #imm,Rn */
	r7 = 0xC21F5E8u; UPD(0x0C061404u, 2);  /* 0C061402 mov.l @(disp,pc),Rn */
	r3 = 0xC28530Cu; UPD(0x0C061406u, 1);  /* 0C061404 mov.l @(disp,pc),Rn */
	r2 = 0xC3929E0u; UPD(0x0C061408u, 1);  /* 0C061406 mov.l @(disp,pc),Rn */
	W16(r6, r4); UPD(0x0C06140Au, 1);  /* 0C061408 mov.w Rm,@Rn */
	r1 = 0x1880000u; UPD(0x0C06140Cu, 1);  /* 0C06140A mov.l @(disp,pc),Rn */
	r5 = 0xC220C4Cu; UPD(0x0C06140Eu, 1);  /* 0C06140C mov.l @(disp,pc),Rn */
	r6 = 0xC286288u; UPD(0x0C061410u, 1);  /* 0C06140E mov.l @(disp,pc),Rn */
	W16(r7, r4); UPD(0x0C061412u, 1);  /* 0C061410 mov.w Rm,@Rn */
	W8(r3, r4); UPD(0x0C061414u, 1);  /* 0C061412 mov.b Rm,@Rn */
	W32(r2, r1); UPD(0x0C061416u, 1);  /* 0C061414 mov.l Rm,@Rn */
	W16(r5, r4); UPD(0x0C061418u, 1);  /* 0C061416 mov.w Rm,@Rn */
	r7 = 0xC275DCAu; UPD(0x0C06141Au, 1);  /* 0C061418 mov.l @(disp,pc),Rn */
	r2 = 0xC283CB2u; UPD(0x0C06141Cu, 1);  /* 0C06141A mov.l @(disp,pc),Rn */
	r3 = 0xC392D5Cu; UPD(0x0C06141Eu, 1);  /* 0C06141C mov.l @(disp,pc),Rn */
	W8(r6, r4); UPD(0x0C061420u, 1);  /* 0C06141E mov.b Rm,@Rn */
	r0 = 0xC220C52u; UPD(0x0C061422u, 1);  /* 0C061420 mov.l @(disp,pc),Rn */
	r5 = 0xC392B09u; UPD(0x0C061424u, 1);  /* 0C061422 mov.l @(disp,pc),Rn */
	W8(r7, r4); UPD(0x0C061426u, 1);  /* 0C061424 mov.b Rm,@Rn */
	W8(r2, r4); UPD(0x0C061428u, 1);  /* 0C061426 mov.b Rm,@Rn */
	r7 = 0x0u;  /* 0C061428 mov #imm,Rn */
	W8(r3, r4); UPD(0x0C06142Cu, 2);  /* 0C06142A mov.b Rm,@Rn */
	r2 = 0x0u;  /* 0C06142C mov #imm,Rn */
	r6 = 0xC27DFFCu; UPD(0x0C061430u, 2);  /* 0C06142E mov.l @(disp,pc),Rn */
	r3 = 0xFu;  /* 0C061430 mov #imm,Rn */
	W8(r0, r4); UPD(0x0C061434u, 2);  /* 0C061432 mov.b Rm,@Rn */
	W8(r5, r4); UPD(0x0C061436u, 1);  /* 0C061434 mov.b Rm,@Rn */
	IF(0x0C061436u); ;  /* 0C061436 nop */
	UPD(0x0C061438u, 1);
L_0C061438: BLKS(0x0C061438u);
	r0 = r2;  /* 0C061438 mov Rm,Rn */
	r1 = 0x4u;  /* 0C06143A mov #imm,Rn */
	IF(0x0C06143Cu); ARG0(0x401Du); { s32 s_ = (s32)r1; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = 0; else r0 >>= ((~s_ & 31) + 1); }  /* 0C06143C shld Rm,Rn */
	r4 = r2;  /* 0C06143E mov Rm,Rn */
	r0 += r6;  /* 0C061440 add Rm,Rn */
	r4 += 0x1u;  /* 0C061442 add #imm,Rn */
	r2 = r4 & 0xFF;  /* 0C061444 extu.b Rm,Rn */
	T = r2 > r3;  /* 0C061446 cmp/hi Rm,Rn */
	{ u32 c_ = !T; W32(r0, r7); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C061438u, 11); goto L_0C061438; } UPD(0x0C06144Cu, 1); goto L_0C06144C; }  /* 0C061448 bf/s */
L_0C06144C: BLKS(0x0C06144Cu);
	r15 = r14;  /* 0C06144C mov Rm,Rn */
	IF(0x0C06144Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C06144E rts */
}

void f_0C0614D0(sh3_t *c)
{
	LOCALS;
L_0C0614D0: BLKS(0x0C0614D0u);
	r2 = 0xC21CA15u; UPD(0x0C0614D2u, 1);  /* 0C0614D0 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0614D4u, 1);  /* 0C0614D2 mov.l Rm,@-Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C0614D6u, 1);  /* 0C0614D4 mov.b @Rm,Rn */
	IF(0x0C0614D6u); r15 -= 4; W32(r15, PR); UPD(0x0C0614D8u, 1);  /* 0C0614D6 sts.l pr,@-Rn */
	T = (r0 & r0) == 0;  /* 0C0614D8 tst Rm,Rn */
	r14 = r15;  /* 0C0614DA mov Rm,Rn */
	{ u32 c_ = T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C0614F0u, 5); goto L_0C0614F0; } UPD(0x0C0614E0u, 1); goto L_0C0614E0; }  /* 0C0614DC bt/s */
L_0C0614E0: BLKS(0x0C0614E0u);
	r15 = r14;  /* 0C0614E0 mov Rm,Rn */
	IF(0x0C0614E2u); PR = R32(r15); r15 += 4; UPD(0x0C0614E4u, 2);  /* 0C0614E2 lds.l @Rn+,pr */
	IF(0x0C0614E4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0614E4 rts */
L_0C0614F0: BLKS(0x0C0614F0u);
	r0 = 0xC26C8BAu; UPD(0x0C0614F2u, 1);  /* 0C0614F0 mov.l @(disp,pc),Rn */
	r1 = 0x78u;  /* 0C0614F2 mov #imm,Rn */
	W8(r0, r1); UPD(0x0C0614F6u, 2);  /* 0C0614F4 mov.b Rm,@Rn */
	r0 = 0xC09F820u; UPD(0x0C0614F8u, 1);  /* 0C0614F6 mov.l @(disp,pc),Rn */
	IF(0x0C0614F8u); { u32 t_ = r0; PR = 0x0C0614FCu; IF(0x0C0614FAu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C09F820, 0x0C09F820u, 0x0C0614FCu); }  /* 0C0614F8 jsr @Rn */
L_0C0614FC: BLKS(0x0C0614FCu);
	T = (r0 & r0) == 0;  /* 0C0614FC tst Rm,Rn */
	IF(0x0C0614FEu); r0 = T;  /* 0C0614FE movt Rn */
	{ r0 ^= 0x1u; /* slot xor #imm,r0 */ UPD(0x0C0614E0u, 5); goto L_0C0614E0; }  /* 0C061500 bra */
}

void f_0C061510(sh3_t *c)
{
	LOCALS;
L_0C061510: BLKS(0x0C061510u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C061512u, 1);  /* 0C061510 mov.l Rm,@-Rn */
	r1 = 0x1u;  /* 0C061512 mov #imm,Rn */
	r0 = 0xC21CCECu; UPD(0x0C061516u, 2);  /* 0C061514 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C061516 mov Rm,Rn */
	W8(r0, r1); UPD(0x0C06151Au, 2);  /* 0C061518 mov.b Rm,@Rn */
	r0 = 0x1u;  /* 0C06151A mov #imm,Rn */
	r15 = r14;  /* 0C06151C mov Rm,Rn */
	IF(0x0C06151Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C06151E rts */
}

void f_0C061530(sh3_t *c)
{
	LOCALS;
L_0C061530: BLKS(0x0C061530u);
	r2 = 0xC26C8BAu; UPD(0x0C061532u, 1);  /* 0C061530 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C061534u, 1);  /* 0C061532 mov.b @Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C061536u, 1);  /* 0C061534 mov.l Rm,@-Rn */
	T = (r0 & r0) == 0;  /* 0C061536 tst Rm,Rn */
	IF(0x0C061538u); r0 = T;  /* 0C061538 movt Rn */
	r14 = r15;  /* 0C06153A mov Rm,Rn */
	r15 = r14;  /* 0C06153C mov Rm,Rn */
	IF(0x0C06153Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 7); RET(t_); }  /* 0C06153E rts */
}

void f_0C061550(sh3_t *c)
{
	LOCALS;
L_0C061550: BLKS(0x0C061550u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C061552u, 1);  /* 0C061550 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C061554u, 1);  /* 0C061552 mov.l Rm,@-Rn */
	r3 = 0xC2859A0u; UPD(0x0C061556u, 1);  /* 0C061554 mov.l @(disp,pc),Rn */
	IF(0x0C061556u); r15 -= 4; W32(r15, PR); UPD(0x0C061558u, 1);  /* 0C061556 sts.l pr,@-Rn */
	r4 = R32(r3); UPD(0x0C06155Au, 1);  /* 0C061558 mov.l @Rm,Rn */
	r14 = r15;  /* 0C06155A mov Rm,Rn */
	r4 += 0x1u;  /* 0C06155C add #imm,Rn */
	r7 = 0xC392B08u; UPD(0x0C061560u, 3);  /* 0C06155E mov.l @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r4); r4 += 1; r2 = v_; } UPD(0x0C061562u, 1);  /* 0C061560 mov.b @Rm+,Rn */
	r0 = (u32)(s32)(s8)R8(r7); UPD(0x0C061564u, 1);  /* 0C061562 mov.b @Rm,Rn */
	r5 = 0xC28530Cu; UPD(0x0C061566u, 1);  /* 0C061564 mov.l @(disp,pc),Rn */
	r0 += 0x1u;  /* 0C061566 add #imm,Rn */
	W32(r3, r4); UPD(0x0C06156Au, 2);  /* 0C061568 mov.l Rm,@Rn */
	r8 = 0xC22486Eu; UPD(0x0C06156Cu, 1);  /* 0C06156A mov.l @(disp,pc),Rn */
	r3 = (u32)(s32)(s8)R8(r5); UPD(0x0C06156Eu, 1);  /* 0C06156C mov.b @Rm,Rn */
	W8(r7, r0); UPD(0x0C061570u, 1);  /* 0C06156E mov.b Rm,@Rn */
	r6 = r3;  /* 0C061570 mov Rm,Rn */
	W8(r8, r2); UPD(0x0C061574u, 2);  /* 0C061572 mov.b Rm,@Rn */
	r0 = r3 & 0xFF;  /* 0C061574 extu.b Rm,Rn */
	r2 = 0xC392D10u; UPD(0x0C061578u, 2);  /* 0C061576 mov.l @(disp,pc),Rn */
	IF(0x0C061578u); r0 <<= 2;  /* 0C061578 shll2 Rn */
	IF(0x0C06157Au); W32(r0 + r2, r4); UPD(0x0C06157Cu, 2);  /* 0C06157A mov.l Rm,@(r0,Rn) */
	r6 += 0x1u;  /* 0C06157C add #imm,Rn */
	r0 = 0xC0AE410u; UPD(0x0C061580u, 2);  /* 0C06157E mov.l @(disp,pc),Rn */
	IF(0x0C061580u); { u32 t_ = r0; PR = 0x0C061584u; W8(r5, r6); /* slot mov.b Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C0AE410, 0x0C0AE410u, 0x0C061584u); }  /* 0C061580 jsr @Rn */
L_0C061584: BLKS(0x0C061584u);
	r0 = 0xC0AD0F0u; UPD(0x0C061586u, 1);  /* 0C061584 mov.l @(disp,pc),Rn */
	IF(0x0C061586u); { u32 t_ = r0; PR = 0x0C06158Au; IF(0x0C061588u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0AD0F0, 0x0C0AD0F0u, 0x0C06158Au); }  /* 0C061586 jsr @Rn */
L_0C06158A: BLKS(0x0C06158Au);
	r0 = 0xC0AED70u; UPD(0x0C06158Cu, 1);  /* 0C06158A mov.l @(disp,pc),Rn */
	IF(0x0C06158Cu); { u32 t_ = r0; PR = 0x0C061590u; IF(0x0C06158Eu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0AED70, 0x0C0AED70u, 0x0C061590u); }  /* 0C06158C jsr @Rn */
L_0C061590: BLKS(0x0C061590u);
	r0 = (u32)(s32)(s8)R8(r8); UPD(0x0C061592u, 1);  /* 0C061590 mov.b @Rm,Rn */
	r5 = 0x25u;  /* 0C061592 mov #imm,Rn */
	r8 = 0xC057250u; UPD(0x0C061596u, 2);  /* 0C061594 mov.l @(disp,pc),Rn */
	r4 = r0 & 0xFF;  /* 0C061596 extu.b Rm,Rn */
	IF(0x0C061598u); { u32 t_ = r8; PR = 0x0C06159Cu; r6 = 0xBu; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C057250, 0x0C057250u, 0x0C06159Cu); }  /* 0C061598 jsr @Rn */
L_0C06159C: BLKS(0x0C06159Cu);
	r0 = 0x1u;  /* 0C06159C mov #imm,Rn */
	r15 = r14;  /* 0C06159E mov Rm,Rn */
	IF(0x0C0615A0u); PR = R32(r15); r15 += 4; UPD(0x0C0615A2u, 3);  /* 0C0615A0 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0615A4u, 1);  /* 0C0615A2 mov.l @Rm+,Rn */
	IF(0x0C0615A4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0615A4 rts */
}

void f_0C0615D0(sh3_t *c)
{
	LOCALS;
L_0C0615D0: BLKS(0x0C0615D0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0615D2u, 1);  /* 0C0615D0 mov.l Rm,@-Rn */
	r3 = 0xC395088u; UPD(0x0C0615D4u, 1);  /* 0C0615D2 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0615D4 mov Rm,Rn */
	r4 = R32(r3); UPD(0x0C0615D8u, 2);  /* 0C0615D6 mov.l @Rm,Rn */
	r0 = r4;  /* 0C0615D8 mov Rm,Rn */
	r0 += r0;  /* 0C0615DA add Rm,Rn */
	r0 += r4;  /* 0C0615DC add Rm,Rn */
	r4 = 0xCCCCCCCDu; UPD(0x0C0615E0u, 4);  /* 0C0615DE mov.l @(disp,pc),Rn */
	{ u64 r_ = (u64)r0 * (u64)r4; MACH = (u32)(r_ >> 32); MACL = (u32)r_; }  /* 0C0615E0 dmulu.l Rm,Rn */
	r0 = 0xC27DFF8u; UPD(0x0C0615E4u, 3);  /* 0C0615E2 mov.l @(disp,pc),Rn */
	IF(0x0C0615E4u); r2 = MACH;  /* 0C0615E4 sts mach,Rn */
	r7 = R32(r0); UPD(0x0C0615E8u, 2);  /* 0C0615E6 mov.l @Rm,Rn */
	IF(0x0C0615E8u); r2 >>= 2;  /* 0C0615E8 shlr2 Rn */
	r6 = r7;  /* 0C0615EA mov Rm,Rn */
	r6 += r6;  /* 0C0615EC add Rm,Rn */
	r6 += r7;  /* 0C0615EE add Rm,Rn */
	{ u64 r_ = (u64)r6 * (u64)r4; MACH = (u32)(r_ >> 32); MACL = (u32)r_; }  /* 0C0615F0 dmulu.l Rm,Rn */
	W32(r3, r2); UPD(0x0C0615F4u, 7);  /* 0C0615F2 mov.l Rm,@Rn */
	IF(0x0C0615F4u); r5 = MACH;  /* 0C0615F4 sts mach,Rn */
	IF(0x0C0615F6u); r5 >>= 2;  /* 0C0615F6 shlr2 Rn */
	W32(r0, r5); UPD(0x0C0615FAu, 3);  /* 0C0615F8 mov.l Rm,@Rn */
	r0 = 0xC21F5E4u; UPD(0x0C0615FCu, 1);  /* 0C0615FA mov.l @(disp,pc),Rn */
	r1 = R32(r0); UPD(0x0C0615FEu, 1);  /* 0C0615FC mov.l @Rm,Rn */
	r3 = r1;  /* 0C0615FE mov Rm,Rn */
	r3 += r3;  /* 0C061600 add Rm,Rn */
	r3 += r1;  /* 0C061602 add Rm,Rn */
	{ u64 r_ = (u64)r3 * (u64)r4; MACH = (u32)(r_ >> 32); MACL = (u32)r_; }  /* 0C061604 dmulu.l Rm,Rn */
	IF(0x0C061606u); r2 = MACH;  /* 0C061606 sts mach,Rn */
	IF(0x0C061608u); r2 >>= 2;  /* 0C061608 shlr2 Rn */
	W32(r0, r2); UPD(0x0C06160Cu, 8);  /* 0C06160A mov.l Rm,@Rn */
	r0 = 0x1u;  /* 0C06160C mov #imm,Rn */
	r15 = r14;  /* 0C06160E mov Rm,Rn */
	IF(0x0C061610u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C061610 rts */
}

void f_0C061630(sh3_t *c)
{
	LOCALS;
L_0C061630: BLKS(0x0C061630u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C061632u, 1);  /* 0C061630 mov.l Rm,@-Rn */
	r1 = 0xC28530Cu; UPD(0x0C061634u, 1);  /* 0C061632 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r1); UPD(0x0C061636u, 1);  /* 0C061634 mov.b @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C061636 tst Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C061650u, 4); goto L_0C061650; } goto L_0C06163C; }  /* 0C061638 bf/s */
L_0C06163C: BLKS(0x0C06163Cu);
	r0 = 0xC21F7F0u; UPD(0x0C06163Eu, 2);  /* 0C06163C mov.l @(disp,pc),Rn */
	r1 = 0x1u;  /* 0C06163E mov #imm,Rn */
	W8(r0, r1); UPD(0x0C061642u, 2);  /* 0C061640 mov.b Rm,@Rn */
L_0C061642: BLKS(0x0C061642u);
	r15 = r14;  /* 0C061642 mov Rm,Rn */
	IF(0x0C061644u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C061644 rts */
L_0C061650: BLKS(0x0C061650u);
	r0 += 0xFFFFFFFFu;  /* 0C061650 add #imm,Rn */
	W8(r1, r0); UPD(0x0C061654u, 2);  /* 0C061652 mov.b Rm,@Rn */
	r2 = 0xC392D10u; UPD(0x0C061656u, 1);  /* 0C061654 mov.l @(disp,pc),Rn */
	r0 = r0 & 0xFF;  /* 0C061656 extu.b Rm,Rn */
	IF(0x0C061658u); r0 <<= 2;  /* 0C061658 shll2 Rn */
	IF(0x0C06165Au); r3 = R32(r0 + r2); UPD(0x0C06165Cu, 3);  /* 0C06165A mov.l @(r0,Rm),Rn */
	r0 = 0xC2859A0u; UPD(0x0C06165Eu, 1);  /* 0C06165C mov.l @(disp,pc),Rn */
	W32(r0, r3); UPD(0x0C061660u, 1);  /* 0C06165E mov.l Rm,@Rn */
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C061642u, 3); goto L_0C061642; }  /* 0C061660 bra */
}

void f_0C061680(sh3_t *c)
{
	LOCALS;
L_0C061680: BLKS(0x0C061680u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C061682u, 1);  /* 0C061680 mov.l Rm,@-Rn */
	r5 = 0xC2859A0u; UPD(0x0C061684u, 1);  /* 0C061682 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C061684 mov Rm,Rn */
	r0 = 0xC28530Cu; UPD(0x0C061688u, 2);  /* 0C061686 mov.l @(disp,pc),Rn */
	r4 = R32(r5); UPD(0x0C06168Au, 1);  /* 0C061688 mov.l @Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r0); UPD(0x0C06168Cu, 1);  /* 0C06168A mov.b @Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r4); r4 += 2; r1 = v_; } UPD(0x0C06168Eu, 1);  /* 0C06168C mov.w @Rm+,Rn */
	r3 = r2;  /* 0C06168E mov Rm,Rn */
	r3 += 0x1u;  /* 0C061690 add #imm,Rn */
	W8(r0, r3); UPD(0x0C061694u, 3);  /* 0C061692 mov.b Rm,@Rn */
	r0 = r2 & 0xFF;  /* 0C061694 extu.b Rm,Rn */
	r3 = 0xC392D10u; UPD(0x0C061698u, 2);  /* 0C061696 mov.l @(disp,pc),Rn */
	IF(0x0C061698u); r0 <<= 2;  /* 0C061698 shll2 Rn */
	r6 = 0xC220C4Cu; UPD(0x0C06169Cu, 2);  /* 0C06169A mov.l @(disp,pc),Rn */
	IF(0x0C06169Cu); W32(r0 + r3, r4); UPD(0x0C06169Eu, 1);  /* 0C06169C mov.l Rm,@(r0,Rn) */
	W16(r6, r1); UPD(0x0C0616A0u, 1);  /* 0C06169E mov.w Rm,@Rn */
	r0 = 0x1u;  /* 0C0616A0 mov #imm,Rn */
	W32(r5, r4); UPD(0x0C0616A4u, 2);  /* 0C0616A2 mov.l Rm,@Rn */
	r15 = r14;  /* 0C0616A4 mov Rm,Rn */
	IF(0x0C0616A6u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C0616A6 rts */
}

void f_0C0616C0(sh3_t *c)
{
	LOCALS;
L_0C0616C0: BLKS(0x0C0616C0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0616C2u, 1);  /* 0C0616C0 mov.l Rm,@-Rn */
	r0 = 0xC220C4Cu; UPD(0x0C0616C4u, 1);  /* 0C0616C2 mov.l @(disp,pc),Rn */
	r3 = (u32)(s32)(s16)R16(r0); UPD(0x0C0616C6u, 1);  /* 0C0616C4 mov.w @Rm,Rn */
	r3 += 0xFFFFFFFFu;  /* 0C0616C6 add #imm,Rn */
	W16(r0, r3); UPD(0x0C0616CAu, 2);  /* 0C0616C8 mov.w Rm,@Rn */
	r0 = r3 & 0xFFFF;  /* 0C0616CA extu.w Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0616CC tst Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0616F0u, 5); goto L_0C0616F0; } goto L_0C0616D2; }  /* 0C0616CE bf/s */
L_0C0616D2: BLKS(0x0C0616D2u);
	r4 = 0xC28530Cu; UPD(0x0C0616D4u, 2);  /* 0C0616D2 mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s8)R8(r4); UPD(0x0C0616D6u, 1);  /* 0C0616D4 mov.b @Rm,Rn */
	r2 += 0xFFFFFFFFu;  /* 0C0616D6 add #imm,Rn */
	W8(r4, r2); UPD(0x0C0616DAu, 2);  /* 0C0616D8 mov.b Rm,@Rn */
L_0C0616DA: BLKS(0x0C0616DAu);
	r0 = 0x1u;  /* 0C0616DA mov #imm,Rn */
	r15 = r14;  /* 0C0616DC mov Rm,Rn */
	IF(0x0C0616DEu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C0616DE rts */
L_0C0616F0: BLKS(0x0C0616F0u);
	r0 = 0xC28530Cu; UPD(0x0C0616F2u, 1);  /* 0C0616F0 mov.l @(disp,pc),Rn */
	r3 = (u32)(s32)(s8)R8(r0); UPD(0x0C0616F4u, 1);  /* 0C0616F2 mov.b @Rm,Rn */
	r7 = 0xC392D0Cu; UPD(0x0C0616F6u, 1);  /* 0C0616F4 mov.l @(disp,pc),Rn */
	r0 = r3 & 0xFF;  /* 0C0616F6 extu.b Rm,Rn */
	IF(0x0C0616F8u); r0 <<= 2;  /* 0C0616F8 shll2 Rn */
	IF(0x0C0616FAu); r6 = R32(r0 + r7); UPD(0x0C0616FCu, 3);  /* 0C0616FA mov.l @(r0,Rm),Rn */
	r5 = 0xC2859A0u; UPD(0x0C0616FEu, 1);  /* 0C0616FC mov.l @(disp,pc),Rn */
	{ W32(r5, r6); /* slot mov.l Rm,@Rn */ UPD(0x0C0616DAu, 3); goto L_0C0616DA; }  /* 0C0616FE bra */
}

void f_0C061720(sh3_t *c)
{
	LOCALS;
L_0C061720: BLKS(0x0C061720u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C061722u, 1);  /* 0C061720 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C061724u, 1);  /* 0C061722 mov.l Rm,@-Rn */
	r3 = 0xC2859A0u; UPD(0x0C061726u, 1);  /* 0C061724 mov.l @(disp,pc),Rn */
	IF(0x0C061726u); r15 -= 4; W32(r15, PR); UPD(0x0C061728u, 1);  /* 0C061726 sts.l pr,@-Rn */
	r0 = 0xC27DC50u; UPD(0x0C06172Au, 1);  /* 0C061728 mov.l @(disp,pc),Rn */
	r2 = R32(r3); UPD(0x0C06172Cu, 1);  /* 0C06172A mov.l @Rm,Rn */
	r4 = (u32)(s32)(s8)R8(r0); UPD(0x0C06172Eu, 1);  /* 0C06172C mov.b @Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r2); r2 += 2; r8 = v_; } UPD(0x0C061730u, 1);  /* 0C06172E mov.w @Rm+,Rn */
	r0 = r4 & 0xFF;  /* 0C061730 extu.b Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r2); r2 += 2; r6 = v_; } UPD(0x0C061734u, 2);  /* 0C061732 mov.w @Rm+,Rn */
	T = r0 == 0x1u;  /* 0C061734 cmp/eq #imm,r0 */
	r7 = 0xC392B08u; UPD(0x0C061738u, 2);  /* 0C061736 mov.l @(disp,pc),Rn */
	IF(0x0C061738u); r4 = T;  /* 0C061738 movt Rn */
	W32(r3, r2); UPD(0x0C06173Cu, 2);  /* 0C06173A mov.l Rm,@Rn */
	T = r0 == 0x2u;  /* 0C06173C cmp/eq #imm,r0 */
	r5 = (u32)(s32)(s8)R8(r7); UPD(0x0C061740u, 2);  /* 0C06173E mov.b @Rm,Rn */
	IF(0x0C061740u); r0 = T;  /* 0C061740 movt Rn */
	r3 = 0x6u;  /* 0C061742 mov #imm,Rn */
	T = r5 > r3;  /* 0C061744 cmp/hi Rm,Rn */
	IF(0x0C061746u); r2 = T;  /* 0C061746 movt Rn */
	r0 &= r2;  /* 0C061748 and Rm,Rn */
	r4 |= r0;  /* 0C06174A or Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C06174C tst Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C061754u, 10); goto L_0C061754; } goto L_0C061752; }  /* 0C06174E bt/s */
L_0C061752: BLKS(0x0C061752u);
	r8 = r6;  /* 0C061752 mov Rm,Rn */
	UPD(0x0C061754u, 2);
L_0C061754: BLKS(0x0C061754u);
	r3 = 0xC392D50u; UPD(0x0C061756u, 1);  /* 0C061754 mov.l @(disp,pc),Rn */
	r1 = 0xFFFFFFFFu;  /* 0C061756 mov #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r3); UPD(0x0C06175Au, 2);  /* 0C061758 mov.b @Rm,Rn */
	r4 = 0xC21CA15u; UPD(0x0C06175Cu, 1);  /* 0C06175A mov.l @(disp,pc),Rn */
	T = (r0 & r0) == 0;  /* 0C06175C tst Rm,Rn */
	r7 = (u32)(s32)(s8)R8(r4); UPD(0x0C061760u, 2);  /* 0C06175E mov.b @Rm,Rn */
	{ u32 t_ = 0u - r1, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r5 = r_; }  /* 0C061760 negc Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C061762 tst Rm,Rn */
	IF(0x0C061764u); r6 = T;  /* 0C061764 movt Rn */
	T = (r5 & r6) == 0;  /* 0C061766 tst Rm,Rn */
	if (!T) { UPD(0x0C061780u, 7); goto L_0C061780; }  /* 0C061768 bf */
L_0C06176A: BLKS(0x0C06176Au);
	r0 = 0x1u;  /* 0C06176A mov #imm,Rn */
	r15 = r14;  /* 0C06176C mov Rm,Rn */
	IF(0x0C06176Eu); PR = R32(r15); r15 += 4; UPD(0x0C061770u, 3);  /* 0C06176E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C061772u, 1);  /* 0C061770 mov.l @Rm+,Rn */
	IF(0x0C061772u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C061772 rts */
L_0C061780: BLKS(0x0C061780u);
	r0 = 0xC0AFCA0u; UPD(0x0C061782u, 1);  /* 0C061780 mov.l @(disp,pc),Rn */
	IF(0x0C061782u); { u32 t_ = r0; PR = 0x0C061786u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFCA0, 0x0C0AFCA0u, 0x0C061786u); }  /* 0C061782 jsr @Rn */
L_0C061786: BLKS(0x0C061786u);
	r4 = r8;  /* 0C061786 mov Rm,Rn */
	r8 = 0xC0AFDB0u; UPD(0x0C06178Au, 2);  /* 0C061788 mov.l @(disp,pc),Rn */
	r6 = 0x1u;  /* 0C06178A mov #imm,Rn */
	IF(0x0C06178Cu); { u32 t_ = r8; PR = 0x0C061790u; r5 = 0x4u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0AFDB0, 0x0C0AFDB0u, 0x0C061790u); }  /* 0C06178C jsr @Rn */
L_0C061790: BLKS(0x0C061790u);
	r8 = 0xC220C44u; UPD(0x0C061792u, 1);  /* 0C061790 mov.l @(disp,pc),Rn */
	r6 = 0xFFFFFFF0u;  /* 0C061792 mov #imm,Rn */
	{ W8(r8, r6); /* slot mov.b Rm,@Rn */ UPD(0x0C06176Au, 4); goto L_0C06176A; }  /* 0C061794 bra */
}

void f_0C0617C0(sh3_t *c)
{
	LOCALS;
L_0C0617C0: BLKS(0x0C0617C0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0617C2u, 1);  /* 0C0617C0 mov.l Rm,@-Rn */
	r1 = 0xFFFFFFFFu;  /* 0C0617C2 mov #imm,Rn */
	IF(0x0C0617C4u); r15 -= 4; W32(r15, PR); UPD(0x0C0617C6u, 2);  /* 0C0617C4 sts.l pr,@-Rn */
	r7 = 0xC2859A0u; UPD(0x0C0617C8u, 1);  /* 0C0617C6 mov.l @(disp,pc),Rn */
	r3 = R32(r7); UPD(0x0C0617CAu, 1);  /* 0C0617C8 mov.l @Rm,Rn */
	r6 = 0xC392E24u; UPD(0x0C0617CCu, 1);  /* 0C0617CA mov.l @(disp,pc),Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r3); r3 += 2; r4 = v_; } UPD(0x0C0617CEu, 1);  /* 0C0617CC mov.w @Rm+,Rn */
	r2 = (u32)(s32)(s8)R8(r6); UPD(0x0C0617D0u, 1);  /* 0C0617CE mov.b @Rm,Rn */
	r5 = 0xC21CA15u; UPD(0x0C0617D2u, 1);  /* 0C0617D0 mov.l @(disp,pc),Rn */
	T = (r2 & r2) == 0;  /* 0C0617D2 tst Rm,Rn */
	W32(r7, r3); UPD(0x0C0617D6u, 2);  /* 0C0617D4 mov.l Rm,@Rn */
	r0 = (u32)(s32)(s8)R8(r5); UPD(0x0C0617D8u, 1);  /* 0C0617D6 mov.b @Rm,Rn */
	{ u32 t_ = 0u - r1, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r3 = r_; }  /* 0C0617D8 negc Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0617DA tst Rm,Rn */
	IF(0x0C0617DCu); r0 = T;  /* 0C0617DC movt Rn */
	T = (r3 & r0) == 0;  /* 0C0617DE tst Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0617F0u, 7); goto L_0C0617F0; } goto L_0C0617E4; }  /* 0C0617E0 bf/s */
L_0C0617E4: BLKS(0x0C0617E4u);
	r0 = 0x1u;  /* 0C0617E4 mov #imm,Rn */
	UPD(0x0C0617E6u, 2);
L_0C0617E6: BLKS(0x0C0617E6u);
	r15 = r14;  /* 0C0617E6 mov Rm,Rn */
	IF(0x0C0617E8u); PR = R32(r15); r15 += 4; UPD(0x0C0617EAu, 2);  /* 0C0617E8 lds.l @Rn+,pr */
	IF(0x0C0617EAu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0617EA rts */
L_0C0617F0: BLKS(0x0C0617F0u);
	r0 = 0xC0AFC60u; UPD(0x0C0617F2u, 1);  /* 0C0617F0 mov.l @(disp,pc),Rn */
	IF(0x0C0617F2u); { u32 t_ = r0; PR = 0x0C0617F6u; IF(0x0C0617F4u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0AFC60, 0x0C0AFC60u, 0x0C0617F6u); }  /* 0C0617F2 jsr @Rn */
L_0C0617F6: BLKS(0x0C0617F6u);
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C0617E6u, 3); goto L_0C0617E6; }  /* 0C0617F6 bra */
}

void f_0C061810(sh3_t *c)
{
	LOCALS;
L_0C061810: BLKS(0x0C061810u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C061812u, 1);  /* 0C061810 mov.l Rm,@-Rn */
	r0 = 0xC09E480u; UPD(0x0C061814u, 1);  /* 0C061812 mov.l @(disp,pc),Rn */
	IF(0x0C061814u); r15 -= 4; W32(r15, PR); UPD(0x0C061816u, 1);  /* 0C061814 sts.l pr,@-Rn */
	IF(0x0C061816u); { u32 t_ = r0; PR = 0x0C06181Au; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C09E480, 0x0C09E480u, 0x0C06181Au); }  /* 0C061816 jsr @Rn */
L_0C06181A: BLKS(0x0C06181Au);
	T = (r0 & r0) == 0;  /* 0C06181A tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C061830u, 4); goto L_0C061830; } UPD(0x0C061820u, 1); goto L_0C061820; }  /* 0C06181C bf/s */
L_0C061820: BLKS(0x0C061820u);
	r15 = r14;  /* 0C061820 mov Rm,Rn */
	IF(0x0C061822u); PR = R32(r15); r15 += 4; UPD(0x0C061824u, 2);  /* 0C061822 lds.l @Rn+,pr */
	IF(0x0C061824u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C061824 rts */
L_0C061830: BLKS(0x0C061830u);
	r0 = 0xC04E7E8u; UPD(0x0C061832u, 1);  /* 0C061830 mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C061832 mov #imm,Rn */
	IF(0x0C061834u); { u32 t_ = r0; PR = 0x0C061838u; r5 = 0x10u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C04E7E8, 0x0C04E7E8u, 0x0C061838u); }  /* 0C061834 jsr @Rn */
L_0C061838: BLKS(0x0C061838u);
	r3 = 0xC392AFDu; UPD(0x0C06183Au, 1);  /* 0C061838 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r3); UPD(0x0C06183Cu, 1);  /* 0C06183A mov.b @Rm,Rn */
	r4 = 0xC163544u; UPD(0x0C06183Eu, 1);  /* 0C06183C mov.l @(disp,pc),Rn */
	r0 &= 0x1u;  /* 0C06183E and #imm,r0 */
	IF(0x0C061840u); r0 <<= 2;  /* 0C061840 shll2 Rn */
	IF(0x0C061842u); r3 = R32(r0 + r4); UPD(0x0C061844u, 3);  /* 0C061842 mov.l @(r0,Rm),Rn */
	r0 = 0xC22486Eu; UPD(0x0C061846u, 1);  /* 0C061844 mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s8)R8(r0); UPD(0x0C061848u, 1);  /* 0C061846 mov.b @Rm,Rn */
	r0 = r2 & 0xFF;  /* 0C061848 extu.b Rm,Rn */
	IF(0x0C06184Au); r4 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C06184Cu, 2);  /* 0C06184A mov.b @(r0,Rm),Rn */
	r0 = 0xC0AFC10u; UPD(0x0C06184Eu, 1);  /* 0C06184C mov.l @(disp,pc),Rn */
	IF(0x0C06184Eu); { u32 t_ = r0; PR = 0x0C061852u; IF(0x0C061850u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0AFC10, 0x0C0AFC10u, 0x0C061852u); }  /* 0C06184E jsr @Rn */
L_0C061852: BLKS(0x0C061852u);
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C061820u, 3); goto L_0C061820; }  /* 0C061852 bra */
}

void f_0C061870(sh3_t *c)
{
	LOCALS;
L_0C061870: BLKS(0x0C061870u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C061872u, 1);  /* 0C061870 mov.l Rm,@-Rn */
	r0 = 0xC09E5D0u; UPD(0x0C061874u, 1);  /* 0C061872 mov.l @(disp,pc),Rn */
	IF(0x0C061874u); r15 -= 4; W32(r15, PR); UPD(0x0C061876u, 1);  /* 0C061874 sts.l pr,@-Rn */
	IF(0x0C061876u); { u32 t_ = r0; PR = 0x0C06187Au; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C09E5D0, 0x0C09E5D0u, 0x0C06187Au); }  /* 0C061876 jsr @Rn */
L_0C06187A: BLKS(0x0C06187Au);
	T = (r0 & r0) == 0;  /* 0C06187A tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C061890u, 4); goto L_0C061890; } UPD(0x0C061880u, 1); goto L_0C061880; }  /* 0C06187C bf/s */
L_0C061880: BLKS(0x0C061880u);
	r15 = r14;  /* 0C061880 mov Rm,Rn */
	IF(0x0C061882u); PR = R32(r15); r15 += 4; UPD(0x0C061884u, 2);  /* 0C061882 lds.l @Rn+,pr */
	IF(0x0C061884u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C061884 rts */
L_0C061890: BLKS(0x0C061890u);
	r0 = 0xC04E7E8u; UPD(0x0C061892u, 1);  /* 0C061890 mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C061892 mov #imm,Rn */
	IF(0x0C061894u); { u32 t_ = r0; PR = 0x0C061898u; r5 = 0x10u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C04E7E8, 0x0C04E7E8u, 0x0C061898u); }  /* 0C061894 jsr @Rn */
L_0C061898: BLKS(0x0C061898u);
	r0 = 0xC22486Eu; UPD(0x0C06189Au, 1);  /* 0C061898 mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s8)R8(r0); UPD(0x0C06189Cu, 1);  /* 0C06189A mov.b @Rm,Rn */
	r3 = 0xC16354Cu; UPD(0x0C06189Eu, 1);  /* 0C06189C mov.l @(disp,pc),Rn */
	r0 = r2 & 0xFF;  /* 0C06189E extu.b Rm,Rn */
	IF(0x0C0618A0u); r2 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0618A2u, 2);  /* 0C0618A0 mov.b @(r0,Rm),Rn */
	r0 = 0xC0AFC10u; UPD(0x0C0618A4u, 1);  /* 0C0618A2 mov.l @(disp,pc),Rn */
	IF(0x0C0618A4u); { u32 t_ = r0; PR = 0x0C0618A8u; r4 = r2 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFC10, 0x0C0AFC10u, 0x0C0618A8u); }  /* 0C0618A4 jsr @Rn */
L_0C0618A8: BLKS(0x0C0618A8u);
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C061880u, 3); goto L_0C061880; }  /* 0C0618A8 bra */
}

void f_0C0618C0(sh3_t *c)
{
	LOCALS;
L_0C0618C0: BLKS(0x0C0618C0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0618C2u, 1);  /* 0C0618C0 mov.l Rm,@-Rn */
	r0 = 0xC09EF10u; UPD(0x0C0618C4u, 1);  /* 0C0618C2 mov.l @(disp,pc),Rn */
	IF(0x0C0618C4u); r15 -= 4; W32(r15, PR); UPD(0x0C0618C6u, 1);  /* 0C0618C4 sts.l pr,@-Rn */
	IF(0x0C0618C6u); { u32 t_ = r0; PR = 0x0C0618CAu; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C09EF10, 0x0C09EF10u, 0x0C0618CAu); }  /* 0C0618C6 jsr @Rn */
L_0C0618CA: BLKS(0x0C0618CAu);
	T = (r0 & r0) == 0;  /* 0C0618CA tst Rm,Rn */
	IF(0x0C0618CCu); r0 = T;  /* 0C0618CC movt Rn */
	T = (r0 & r0) == 0;  /* 0C0618CE tst Rm,Rn */
	IF(0x0C0618D0u); r0 = T;  /* 0C0618D0 movt Rn */
	r15 = r14;  /* 0C0618D2 mov Rm,Rn */
	IF(0x0C0618D4u); PR = R32(r15); r15 += 4; UPD(0x0C0618D6u, 6);  /* 0C0618D4 lds.l @Rn+,pr */
	IF(0x0C0618D6u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0618D6 rts */
}

void f_0C0618E0(sh3_t *c)
{
	LOCALS;
L_0C0618E0: BLKS(0x0C0618E0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0618E2u, 1);  /* 0C0618E0 mov.l Rm,@-Rn */
	r0 = 0xC0A65E0u; UPD(0x0C0618E4u, 1);  /* 0C0618E2 mov.l @(disp,pc),Rn */
	IF(0x0C0618E4u); r15 -= 4; W32(r15, PR); UPD(0x0C0618E6u, 1);  /* 0C0618E4 sts.l pr,@-Rn */
	IF(0x0C0618E6u); { u32 t_ = r0; PR = 0x0C0618EAu; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A65E0, 0x0C0A65E0u, 0x0C0618EAu); }  /* 0C0618E6 jsr @Rn */
L_0C0618EA: BLKS(0x0C0618EAu);
	T = (r0 & r0) == 0;  /* 0C0618EA tst Rm,Rn */
	IF(0x0C0618ECu); r0 = T;  /* 0C0618EC movt Rn */
	T = (r0 & r0) == 0;  /* 0C0618EE tst Rm,Rn */
	IF(0x0C0618F0u); r0 = T;  /* 0C0618F0 movt Rn */
	r15 = r14;  /* 0C0618F2 mov Rm,Rn */
	IF(0x0C0618F4u); PR = R32(r15); r15 += 4; UPD(0x0C0618F6u, 6);  /* 0C0618F4 lds.l @Rn+,pr */
	IF(0x0C0618F6u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0618F6 rts */
}

void f_0C061900(sh3_t *c)
{
	LOCALS;
L_0C061900: BLKS(0x0C061900u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C061902u, 1);  /* 0C061900 mov.l Rm,@-Rn */
	r0 = 0xC2859A0u; UPD(0x0C061904u, 1);  /* 0C061902 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C061904 mov Rm,Rn */
	r4 = R32(r0); UPD(0x0C061908u, 2);  /* 0C061906 mov.l @Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r4); r4 += 2; r2 = v_; } UPD(0x0C06190Au, 1);  /* 0C061908 mov.w @Rm+,Rn */
	r1 = 0xC21F5DCu; UPD(0x0C06190Cu, 1);  /* 0C06190A mov.l @(disp,pc),Rn */
	W32(r0, r4); UPD(0x0C06190Eu, 1);  /* 0C06190C mov.l Rm,@Rn */
	W32(r1, r2); UPD(0x0C061910u, 1);  /* 0C06190E mov.l Rm,@Rn */
	r0 = 0x1u;  /* 0C061910 mov #imm,Rn */
	r15 = r14;  /* 0C061912 mov Rm,Rn */
	IF(0x0C061914u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C061914 rts */
}

void f_0C061920(sh3_t *c)
{
	LOCALS;
L_0C061920: BLKS(0x0C061920u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C061922u, 1);  /* 0C061920 mov.l Rm,@-Rn */
	r0 = 0xC2859A0u; UPD(0x0C061924u, 1);  /* 0C061922 mov.l @(disp,pc),Rn */
	IF(0x0C061924u); r15 -= 4; W32(r15, PR); UPD(0x0C061926u, 1);  /* 0C061924 sts.l pr,@-Rn */
	r2 = R32(r0); UPD(0x0C061928u, 1);  /* 0C061926 mov.l @Rm,Rn */
	r14 = r15;  /* 0C061928 mov Rm,Rn */
	r2 += 0x1u;  /* 0C06192A add #imm,Rn */
	{ u32 v_ = (u32)(s32)(s8)R8(r2); r2 += 1; r4 = v_; } UPD(0x0C06192Eu, 3);  /* 0C06192C mov.b @Rm+,Rn */
	r6 = 0xC220C52u; UPD(0x0C061930u, 1);  /* 0C06192E mov.l @(disp,pc),Rn */
	r5 = 0xC275DCAu; UPD(0x0C061932u, 1);  /* 0C061930 mov.l @(disp,pc),Rn */
	r3 = 0xC286288u; UPD(0x0C061934u, 1);  /* 0C061932 mov.l @(disp,pc),Rn */
	W32(r0, r2); UPD(0x0C061936u, 1);  /* 0C061934 mov.l Rm,@Rn */
	W8(r6, r4); UPD(0x0C061938u, 1);  /* 0C061936 mov.b Rm,@Rn */
	r0 = r4 & 0xFF;  /* 0C061938 extu.b Rm,Rn */
	W8(r5, r4); UPD(0x0C06193Cu, 2);  /* 0C06193A mov.b Rm,@Rn */
	T = (r0 & r0) == 0;  /* 0C06193C tst Rm,Rn */
	{ u32 c_ = T; W8(r3, r4); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C061950u, 4); goto L_0C061950; } UPD(0x0C061942u, 1); goto L_0C061942; }  /* 0C06193E bt/s */
L_0C061942: BLKS(0x0C061942u);
	r0 = 0x1u;  /* 0C061942 mov #imm,Rn */
	UPD(0x0C061944u, 1);
L_0C061944: BLKS(0x0C061944u);
	r15 = r14;  /* 0C061944 mov Rm,Rn */
	IF(0x0C061946u); PR = R32(r15); r15 += 4; UPD(0x0C061948u, 2);  /* 0C061946 lds.l @Rn+,pr */
	IF(0x0C061948u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C061948 rts */
L_0C061950: BLKS(0x0C061950u);
	r0 = 0xC04E7E8u; UPD(0x0C061952u, 1);  /* 0C061950 mov.l @(disp,pc),Rn */
	r4 = 0x0u;  /* 0C061952 mov #imm,Rn */
	IF(0x0C061954u); { u32 t_ = r0; PR = 0x0C061958u; r5 = 0x10u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C04E7E8, 0x0C04E7E8u, 0x0C061958u); }  /* 0C061954 jsr @Rn */
L_0C061958: BLKS(0x0C061958u);
	r0 = 0xC0AFC60u; UPD(0x0C06195Au, 1);  /* 0C061958 mov.l @(disp,pc),Rn */
	IF(0x0C06195Au); { u32 t_ = r0; PR = 0x0C06195Eu; r4 = 0x5Au; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFC60, 0x0C0AFC60u, 0x0C06195Eu); }  /* 0C06195A jsr @Rn */
L_0C06195E: BLKS(0x0C06195Eu);
	{ r0 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C061944u, 3); goto L_0C061944; }  /* 0C06195E bra */
}

void f_0C061980(sh3_t *c)
{
	LOCALS;
L_0C061980: BLKS(0x0C061980u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C061982u, 1);  /* 0C061980 mov.l Rm,@-Rn */
	r4 = 0x0u;  /* 0C061982 mov #imm,Rn */
	r0 = 0xC04E7E8u; UPD(0x0C061986u, 2);  /* 0C061984 mov.l @(disp,pc),Rn */
	r5 = 0x10u;  /* 0C061986 mov #imm,Rn */
	IF(0x0C061988u); r15 -= 4; W32(r15, PR); UPD(0x0C06198Au, 2);  /* 0C061988 sts.l pr,@-Rn */
	IF(0x0C06198Au); { u32 t_ = r0; PR = 0x0C06198Eu; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C04E7E8, 0x0C04E7E8u, 0x0C06198Eu); }  /* 0C06198A jsr @Rn */
L_0C06198E: BLKS(0x0C06198Eu);
	r0 = 0x1u;  /* 0C06198E mov #imm,Rn */
	r15 = r14;  /* 0C061990 mov Rm,Rn */
	IF(0x0C061992u); PR = R32(r15); r15 += 4; UPD(0x0C061994u, 3);  /* 0C061992 lds.l @Rn+,pr */
	IF(0x0C061994u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C061994 rts */
}

void f_0C0619A0(sh3_t *c)
{
	LOCALS;
L_0C0619A0: BLKS(0x0C0619A0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0619A2u, 1);  /* 0C0619A0 mov.l Rm,@-Rn */
	r3 = 0xC392D5Cu; UPD(0x0C0619A4u, 1);  /* 0C0619A2 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C0619A4 mov Rm,Rn */
	r2 = 0xC286288u; UPD(0x0C0619A8u, 2);  /* 0C0619A6 mov.l @(disp,pc),Rn */
	r4 = (u32)(s32)(s8)R8(r3); UPD(0x0C0619AAu, 1);  /* 0C0619A8 mov.b @Rm,Rn */
	r5 = (u32)(s32)(s8)R8(r2); UPD(0x0C0619ACu, 1);  /* 0C0619AA mov.b @Rm,Rn */
	r0 = 0xC283CB2u; UPD(0x0C0619AEu, 1);  /* 0C0619AC mov.l @(disp,pc),Rn */
	T = r5 == r4;  /* 0C0619AE cmp/eq Rm,Rn */
	r7 = 0xC275DCAu; UPD(0x0C0619B2u, 2);  /* 0C0619B0 mov.l @(disp,pc),Rn */
	r4 = 0xFFFFFFFFu;  /* 0C0619B2 mov #imm,Rn */
	r3 = (u32)(s32)(s8)R8(r0); UPD(0x0C0619B6u, 2);  /* 0C0619B4 mov.b @Rm,Rn */
	{ u32 t_ = 0u - r4, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r5 = r_; }  /* 0C0619B6 negc Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C0619BAu, 2);  /* 0C0619B8 mov.b @Rm,Rn */
	r0 = 0xC392B09u; UPD(0x0C0619BCu, 1);  /* 0C0619BA mov.l @(disp,pc),Rn */
	T = r6 == r3;  /* 0C0619BC cmp/eq Rm,Rn */
	r7 = 0xC220C52u; UPD(0x0C0619C0u, 2);  /* 0C0619BE mov.l @(disp,pc),Rn */
	{ u32 t_ = 0u - r4, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r2 = r_; }  /* 0C0619C0 negc Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r0); UPD(0x0C0619C4u, 2);  /* 0C0619C2 mov.b @Rm,Rn */
	r5 |= r2;  /* 0C0619C4 or Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C0619C8u, 2);  /* 0C0619C6 mov.b @Rm,Rn */
	T = r6 == r3;  /* 0C0619C8 cmp/eq Rm,Rn */
	{ u32 t_ = 0u - r4, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r2 = r_; }  /* 0C0619CA negc Rm,Rn */
	r5 |= r2;  /* 0C0619CC or Rm,Rn */
	T = (r5 & r5) == 0;  /* 0C0619CE tst Rm,Rn */
	IF(0x0C0619D0u); r0 = T;  /* 0C0619D0 movt Rn */
	T = (r0 & r0) == 0;  /* 0C0619D2 tst Rm,Rn */
	{ u32 t_ = 0u - r4, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r0 = r_; }  /* 0C0619D4 negc Rm,Rn */
	r15 = r14;  /* 0C0619D6 mov Rm,Rn */
	IF(0x0C0619D8u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 11); RET(t_); }  /* 0C0619D8 rts */
}

void f_0C061A00(sh3_t *c)
{
	LOCALS;
L_0C061A00: BLKS(0x0C061A00u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C061A02u, 1);  /* 0C061A00 mov.l Rm,@-Rn */
	r5 = 0x1u;  /* 0C061A02 mov #imm,Rn */
	r3 = 0xC2755BCu; UPD(0x0C061A06u, 2);  /* 0C061A04 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C061A06 mov Rm,Rn */
	r7 = 0xC27DFFCu; UPD(0x0C061A0Au, 2);  /* 0C061A08 mov.l @(disp,pc),Rn */
	r6 = r3;  /* 0C061A0A mov Rm,Rn */
	r2 = 0x0u;  /* 0C061A0C mov #imm,Rn */
	r4 = 0xFu;  /* 0C061A0E mov #imm,Rn */
	UPD(0x0C061A10u, 3);
L_0C061A10: BLKS(0x0C061A10u);
	r0 = R32(r7); UPD(0x0C061A12u, 1);  /* 0C061A10 mov.l @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C061A12 tst Rm,Rn */
	{ u32 c_ = !T; r7 += 0x10u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C061A20u, 4); goto L_0C061A20; } goto L_0C061A18; }  /* 0C061A14 bf/s */
L_0C061A18: BLKS(0x0C061A18u);
	W16(r6, r2); UPD(0x0C061A1Au, 2);  /* 0C061A18 mov.w Rm,@Rn */
	IF(0x0C061A1Au); r5 -= 1; T = r5 == 0;  /* 0C061A1A dt Rn */
	{ u32 c_ = T; r6 += 0x2u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C061AA0u, 4); goto L_0C061AA0; } UPD(0x0C061A20u, 1); goto L_0C061A20; }  /* 0C061A1C bt/s */
L_0C061A20: BLKS(0x0C061A20u);
	r0 = r2;  /* 0C061A20 mov Rm,Rn */
	r0 += 0x1u;  /* 0C061A22 add #imm,Rn */
	r2 = (u32)(s32)(s16)r0;  /* 0C061A24 exts.w Rm,Rn */
	T = (s32)r2 > (s32)r4;  /* 0C061A26 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r1 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C061A10u, 7); goto L_0C061A10; } UPD(0x0C061A2Cu, 1); goto L_0C061A2C; }  /* 0C061A28 bf/s */
L_0C061A2C: BLKS(0x0C061A2Cu);
	T = (r1 & r1) == 0;  /* 0C061A2C tst Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C061A80u, 4); goto L_0C061A80; } goto L_0C061A32; }  /* 0C061A2E bt/s */
L_0C061A32: BLKS(0x0C061A32u);
	r6 = (u32)(s32)(s16)R16(r3); UPD(0x0C061A34u, 2);  /* 0C061A32 mov.w @Rm,Rn */
	r3 = 0x4u;  /* 0C061A34 mov #imm,Rn */
	IF(0x0C061A36u); ARG0(0x463Du); { s32 s_ = (s32)r3; if (s_ >= 0) r6 <<= (s_ & 31); else if ((s_ & 31) == 0) r6 = 0; else r6 >>= ((~s_ & 31) + 1); }  /* 0C061A36 shld Rm,Rn */
	r7 = 0xC27DFFCu; UPD(0x0C061A3Au, 3);  /* 0C061A38 mov.l @(disp,pc),Rn */
	r2 = 0x80000000u; UPD(0x0C061A3Cu, 1);  /* 0C061A3A mov.l @(disp,pc),Rn */
	r7 += r6;  /* 0C061A3C add Rm,Rn */
	r5 = 0xC2859A0u; UPD(0x0C061A40u, 2);  /* 0C061A3E mov.l @(disp,pc),Rn */
	W32(r7, r2); UPD(0x0C061A42u, 1);  /* 0C061A40 mov.l Rm,@Rn */
	r3 = R32(r5); UPD(0x0C061A44u, 1);  /* 0C061A42 mov.l @Rm,Rn */
	r2 = (u32)(s32)(s16)R16(r3); UPD(0x0C061A46u, 1);  /* 0C061A44 mov.w @Rm,Rn */
	IF(0x0C061A46u); T = (s32)r2 >= 0;  /* 0C061A46 cmp/pz Rn */
	if (T) { UPD(0x0C061A90u, 4); goto L_0C061A90; }  /* 0C061A48 bt */
L_0C061A4A: BLKS(0x0C061A4Au);
	r7 += 0x8u;  /* 0C061A4A add #imm,Rn */
	r0 = 0xC283CA4u; UPD(0x0C061A4Eu, 2);  /* 0C061A4C mov.l @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)R16(r0); UPD(0x0C061A50u, 1);  /* 0C061A4E mov.w @Rm,Rn */
	r0 = 0x7FFFu; UPD(0x0C061A52u, 1);  /* 0C061A50 mov.w @(disp,pc),Rn */
	r4 += r2;  /* 0C061A52 add Rm,Rn */
	r4 &= r0;  /* 0C061A54 and Rm,Rn */
	W16(r7, r4); UPD(0x0C061A58u, 3);  /* 0C061A56 mov.w Rm,@Rn */
L_0C061A58: BLKS(0x0C061A58u);
	r3 += 0x2u;  /* 0C061A58 add #imm,Rn */
	W32(r5, r3); UPD(0x0C061A5Cu, 2);  /* 0C061A5A mov.l Rm,@Rn */
	r3 = 0xC2859A0u; UPD(0x0C061A5Eu, 1);  /* 0C061A5C mov.l @(disp,pc),Rn */
	r5 = 0xC27DFFCu; UPD(0x0C061A60u, 1);  /* 0C061A5E mov.l @(disp,pc),Rn */
	r7 = R32(r3); UPD(0x0C061A62u, 1);  /* 0C061A60 mov.l @Rm,Rn */
	r5 += r6;  /* 0C061A62 add Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r7); r7 += 2; r0 = v_; } UPD(0x0C061A66u, 2);  /* 0C061A64 mov.w @Rm+,Rn */
	r5 += 0xAu;  /* 0C061A66 add #imm,Rn */
	W16(r5, r0); UPD(0x0C061A6Au, 2);  /* 0C061A68 mov.w Rm,@Rn */
	r6 = 0x0u;  /* 0C061A6A mov #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r7); r7 += 2; r4 = v_; } UPD(0x0C061A6Eu, 2);  /* 0C061A6C mov.w @Rm+,Rn */
	r5 += 0xFFFFFFFAu;  /* 0C061A6E add #imm,Rn */
	W16(r5, r4); UPD(0x0C061A72u, 2);  /* 0C061A70 mov.w Rm,@Rn */
	r0 = 0x1u;  /* 0C061A72 mov #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r7); r7 += 2; r1 = v_; } UPD(0x0C061A76u, 2);  /* 0C061A74 mov.w @Rm+,Rn */
	r5 += 0x2u;  /* 0C061A76 add #imm,Rn */
	W16(r5, r1); UPD(0x0C061A7Au, 2);  /* 0C061A78 mov.w Rm,@Rn */
	r5 += 0x6u;  /* 0C061A7A add #imm,Rn */
	W32(r3, r7); UPD(0x0C061A7Eu, 2);  /* 0C061A7C mov.l Rm,@Rn */
	W16(r5, r6); UPD(0x0C061A80u, 1);  /* 0C061A7E mov.w Rm,@Rn */
L_0C061A80: BLKS(0x0C061A80u);
	r15 = r14;  /* 0C061A80 mov Rm,Rn */
	IF(0x0C061A82u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C061A82 rts */
L_0C061A90: BLKS(0x0C061A90u);
	r7 += 0x8u;  /* 0C061A90 add #imm,Rn */
	{ W16(r7, r2); /* slot mov.w Rm,@Rn */ UPD(0x0C061A58u, 4); goto L_0C061A58; }  /* 0C061A92 bra */
L_0C061AA0: BLKS(0x0C061AA0u);
	{ r1 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C061A2Cu, 3); goto L_0C061A2C; }  /* 0C061AA0 bra */
}

void f_0C061AC0(sh3_t *c)
{
	LOCALS;
L_0C061AC0: BLKS(0x0C061AC0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C061AC2u, 1);  /* 0C061AC0 mov.l Rm,@-Rn */
	r1 = 0x0u;  /* 0C061AC2 mov #imm,Rn */
	r2 = 0xC27DFFCu; UPD(0x0C061AC6u, 2);  /* 0C061AC4 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C061AC6 mov Rm,Rn */
	r7 = 0x0u;  /* 0C061AC8 mov #imm,Rn */
	r3 = 0xFu;  /* 0C061ACA mov #imm,Rn */
	UPD(0x0C061ACCu, 3);
L_0C061ACC: BLKS(0x0C061ACCu);
	W32(r2, r7); UPD(0x0C061ACEu, 1);  /* 0C061ACC mov.l Rm,@Rn */
	r1 += 0x1u;  /* 0C061ACE add #imm,Rn */
	r1 = (u32)(s32)(s16)r1;  /* 0C061AD0 exts.w Rm,Rn */
	T = (s32)r1 > (s32)r3;  /* 0C061AD2 cmp/gt Rm,Rn */
	{ u32 c_ = !T; r2 += 0x10u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C061ACCu, 6); goto L_0C061ACC; } goto L_0C061AD8; }  /* 0C061AD4 bf/s */
L_0C061AD8: BLKS(0x0C061AD8u);
	r0 = 0x1u;  /* 0C061AD8 mov #imm,Rn */
	r15 = r14;  /* 0C061ADA mov Rm,Rn */
	IF(0x0C061ADCu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 6); RET(t_); }  /* 0C061ADC rts */
}

void f_0C061AF0(sh3_t *c)
{
	LOCALS;
L_0C061AF0: BLKS(0x0C061AF0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C061AF2u, 1);  /* 0C061AF0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C061AF4u, 1);  /* 0C061AF2 mov.l Rm,@-Rn */
	r8 = 0x0u;  /* 0C061AF4 mov #imm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C061AF8u, 2);  /* 0C061AF6 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C061AFAu, 1);  /* 0C061AF8 mov.l Rm,@-Rn */
	r9 = 0xC26CAE0u; UPD(0x0C061AFCu, 1);  /* 0C061AFA mov.l @(disp,pc),Rn */
	IF(0x0C061AFCu); r15 -= 4; W32(r15, PR); UPD(0x0C061AFEu, 1);  /* 0C061AFC sts.l pr,@-Rn */
	r10 = 0xC0587D0u; UPD(0x0C061B00u, 1);  /* 0C061AFE mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C061B00 mov Rm,Rn */
	IF(0x0C061B02u); ;  /* 0C061B02 nop */
	UPD(0x0C061B04u, 2);
L_0C061B04: BLKS(0x0C061B04u);
	r0 = 0x4Cu;  /* 0C061B04 mov #imm,Rn */
	IF(0x0C061B06u); MACL = r8 * r0;  /* 0C061B06 mul.l Rm,Rn */
	IF(0x0C061B08u); r2 = MACL;  /* 0C061B08 sts macl,Rn */
	r2 += r9;  /* 0C061B0A add Rm,Rn */
	r0 = R32(r2); UPD(0x0C061B0Eu, 6);  /* 0C061B0C mov.l @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C061B0E tst Rm,Rn */
	{ u32 c_ = !T; r4 = r8; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C061B30u, 4); goto L_0C061B30; } UPD(0x0C061B14u, 1); goto L_0C061B14; }  /* 0C061B10 bf/s */
L_0C061B14: BLKS(0x0C061B14u);
	r3 = r8;  /* 0C061B14 mov Rm,Rn */
	r3 += 0x1u;  /* 0C061B16 add #imm,Rn */
	r8 = r3 & 0xFF;  /* 0C061B18 extu.b Rm,Rn */
	r2 = 0x7u;  /* 0C061B1A mov #imm,Rn */
	T = r8 > r2;  /* 0C061B1C cmp/hi Rm,Rn */
	{ u32 c_ = !T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C061B04u, 8); goto L_0C061B04; } UPD(0x0C061B22u, 1); goto L_0C061B22; }  /* 0C061B1E bf/s */
L_0C061B22: BLKS(0x0C061B22u);
	r15 = r14;  /* 0C061B22 mov Rm,Rn */
	IF(0x0C061B24u); PR = R32(r15); r15 += 4; UPD(0x0C061B26u, 2);  /* 0C061B24 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C061B28u, 1);  /* 0C061B26 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C061B2Au, 1);  /* 0C061B28 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C061B2Cu, 1);  /* 0C061B2A mov.l @Rm+,Rn */
	IF(0x0C061B2Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C061B2C rts */
L_0C061B30: BLKS(0x0C061B30u);
	r4 += 0x8u;  /* 0C061B30 add #imm,Rn */
	IF(0x0C061B32u); { u32 t_ = r10; PR = 0x0C061B36u; r5 = R32(r2 + 0x30u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, f_0C0587D0, 0x0C0587D0u, 0x0C061B36u); }  /* 0C061B32 jsr @Rn */
L_0C061B36: BLKS(0x0C061B36u);
	T = (r0 & r0) == 0;  /* 0C061B36 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C061B14u, 4); goto L_0C061B14; } goto L_0C061B3C; }  /* 0C061B38 bf/s */
L_0C061B3C: BLKS(0x0C061B3Cu);
	{ IF(0x0C061B3Eu); ; /* slot nop */ UPD(0x0C061B22u, 4); goto L_0C061B22; }  /* 0C061B3C bra */
}

void f_0C061B50(sh3_t *c)
{
	LOCALS;
L_0C061B50: BLKS(0x0C061B50u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C061B52u, 1);  /* 0C061B50 mov.l Rm,@-Rn */
	r0 = 0xC2859A0u; UPD(0x0C061B54u, 1);  /* 0C061B52 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C061B54 mov Rm,Rn */
	r4 = R32(r0); UPD(0x0C061B58u, 2);  /* 0C061B56 mov.l @Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r4); r4 += 2; r3 = v_; } UPD(0x0C061B5Au, 1);  /* 0C061B58 mov.w @Rm+,Rn */
	r1 = 0xC220C2Cu; UPD(0x0C061B5Cu, 1);  /* 0C061B5A mov.l @(disp,pc),Rn */
	IF(0x0C061B5Cu); r3 <<= 8;  /* 0C061B5C shll8 Rn */
	W32(r0, r4); UPD(0x0C061B60u, 2);  /* 0C061B5E mov.l Rm,@Rn */
	W32(r1, r3); UPD(0x0C061B62u, 1);  /* 0C061B60 mov.l Rm,@Rn */
	r0 = 0x1u;  /* 0C061B62 mov #imm,Rn */
	r15 = r14;  /* 0C061B64 mov Rm,Rn */
	IF(0x0C061B66u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C061B66 rts */
}

/* FUN_0c061b80 */
void f_0C061B80(sh3_t *c)
{
	LOCALS;
L_0C061B80: BLKS(0x0C061B80u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C061B82u, 1);  /* 0C061B80 mov.l Rm,@-Rn */
	r2 = (u32)(s32)(s16)r4;  /* 0C061B82 exts.w Rm,Rn */
	r0 = 0xC21CC84u; UPD(0x0C061B86u, 2);  /* 0C061B84 mov.l @(disp,pc),Rn */
	IF(0x0C061B86u); r2 <<= 8;  /* 0C061B86 shll8 Rn */
	W32(r0, r2); UPD(0x0C061B8Au, 2);  /* 0C061B88 mov.l Rm,@Rn */
	r1 = (u32)(s32)(s16)r5;  /* 0C061B8A exts.w Rm,Rn */
	r0 = 0xC220C24u; UPD(0x0C061B8Eu, 2);  /* 0C061B8C mov.l @(disp,pc),Rn */
	IF(0x0C061B8Eu); r1 <<= 8;  /* 0C061B8E shll8 Rn */
	W32(r0, r1); UPD(0x0C061B92u, 2);  /* 0C061B90 mov.l Rm,@Rn */
	r14 = r15;  /* 0C061B92 mov Rm,Rn */
	r15 = r14;  /* 0C061B94 mov Rm,Rn */
	IF(0x0C061B96u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C061B96 rts */
}

void f_0C061BB0(sh3_t *c)
{
	LOCALS;
L_0C061BB0: BLKS(0x0C061BB0u);
	r2 = 0xC2859A0u; UPD(0x0C061BB2u, 1);  /* 0C061BB0 mov.l @(disp,pc),Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C061BB4u, 1);  /* 0C061BB2 mov.l Rm,@-Rn */
	r5 = R32(r2); UPD(0x0C061BB6u, 1);  /* 0C061BB4 mov.l @Rm,Rn */
	r14 = r15;  /* 0C061BB6 mov Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r3 = v_; } UPD(0x0C061BBAu, 2);  /* 0C061BB8 mov.w @Rm+,Rn */
	r0 = 0xC21CC84u; UPD(0x0C061BBCu, 1);  /* 0C061BBA mov.l @(disp,pc),Rn */
	IF(0x0C061BBCu); r3 <<= 8;  /* 0C061BBC shll8 Rn */
	W32(r0, r3); UPD(0x0C061BC0u, 2);  /* 0C061BBE mov.l Rm,@Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r5); r5 += 2; r4 = v_; } UPD(0x0C061BC2u, 1);  /* 0C061BC0 mov.w @Rm+,Rn */
	r0 = 0xC220C24u; UPD(0x0C061BC4u, 1);  /* 0C061BC2 mov.l @(disp,pc),Rn */
	IF(0x0C061BC4u); r4 <<= 8;  /* 0C061BC4 shll8 Rn */
	W32(r0, r4); UPD(0x0C061BC8u, 2);  /* 0C061BC6 mov.l Rm,@Rn */
	W32(r2, r5); UPD(0x0C061BCAu, 1);  /* 0C061BC8 mov.l Rm,@Rn */
	r0 = 0x1u;  /* 0C061BCA mov #imm,Rn */
	r15 = r14;  /* 0C061BCC mov Rm,Rn */
	IF(0x0C061BCEu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 5); RET(t_); }  /* 0C061BCE rts */
}

void f_0C061BE0(sh3_t *c)
{
	LOCALS;
L_0C061BE0: BLKS(0x0C061BE0u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C061BE2u, 1);  /* 0C061BE0 mov.l Rm,@-Rn */
	r0 = 0xC21CC84u; UPD(0x0C061BE4u, 1);  /* 0C061BE2 mov.l @(disp,pc),Rn */
	r14 = r15;  /* 0C061BE4 mov Rm,Rn */
	r3 = R32(r0); UPD(0x0C061BE8u, 2);  /* 0C061BE6 mov.l @Rm,Rn */
	r2 = 0xC220C2Cu; UPD(0x0C061BEAu, 1);  /* 0C061BE8 mov.l @(disp,pc),Rn */
	r0 = R32(r2); UPD(0x0C061BECu, 1);  /* 0C061BEA mov.l @Rm,Rn */
	T = r3 == r0;  /* 0C061BEC cmp/eq Rm,Rn */
	IF(0x0C061BEEu); r0 = T;  /* 0C061BEE movt Rn */
	r15 = r14;  /* 0C061BF0 mov Rm,Rn */
	IF(0x0C061BF2u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 6); RET(t_); }  /* 0C061BF2 rts */
}

void f_0C061C00(sh3_t *c)
{
	LOCALS;
L_0C061C00: BLKS(0x0C061C00u);
	r2 = 0xC392AFEu; UPD(0x0C061C02u, 1);  /* 0C061C00 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C061C04u, 1);  /* 0C061C02 mov.b @Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C061C06u, 1);  /* 0C061C04 mov.l Rm,@-Rn */
	T = (r0 & r0) == 0;  /* 0C061C06 tst Rm,Rn */
	r14 = r15;  /* 0C061C08 mov Rm,Rn */
	{ u32 c_ = T; r0 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C061C14u, 5); goto L_0C061C14; } goto L_0C061C0E; }  /* 0C061C0A bt/s */
L_0C061C0E: BLKS(0x0C061C0Eu);
	r0 = 0x0u;  /* 0C061C0E mov #imm,Rn */
	W8(r2, r0); UPD(0x0C061C12u, 3);  /* 0C061C10 mov.b Rm,@Rn */
	r0 = 0x1u;  /* 0C061C12 mov #imm,Rn */
	UPD(0x0C061C14u, 1);
L_0C061C14: BLKS(0x0C061C14u);
	r15 = r14;  /* 0C061C14 mov Rm,Rn */
	IF(0x0C061C16u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 4); RET(t_); }  /* 0C061C16 rts */
}

void f_0C061C20(sh3_t *c)
{
	LOCALS;
L_0C061C20: BLKS(0x0C061C20u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C061C22u, 1);  /* 0C061C20 mov.l Rm,@-Rn */
	r5 = 0x0u;  /* 0C061C22 mov #imm,Rn */
	IF(0x0C061C24u); r15 -= 4; W32(r15, PR); UPD(0x0C061C26u, 2);  /* 0C061C24 sts.l pr,@-Rn */
	r0 = 0xC2859A0u; UPD(0x0C061C28u, 1);  /* 0C061C26 mov.l @(disp,pc),Rn */
	r2 = R32(r0); UPD(0x0C061C2Au, 1);  /* 0C061C28 mov.l @Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r2); r2 += 2; r4 = v_; } UPD(0x0C061C2Cu, 1);  /* 0C061C2A mov.w @Rm+,Rn */
	W32(r0, r2); UPD(0x0C061C2Eu, 1);  /* 0C061C2C mov.l Rm,@Rn */
	r0 = 0xC058610u; UPD(0x0C061C30u, 1);  /* 0C061C2E mov.l @(disp,pc),Rn */
	IF(0x0C061C30u); { u32 t_ = r0; PR = 0x0C061C34u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058610, 0x0C058610u, 0x0C061C34u); }  /* 0C061C30 jsr @Rn */
L_0C061C34: BLKS(0x0C061C34u);
	r0 = (u32)(s32)(s16)r0;  /* 0C061C34 exts.w Rm,Rn */
	r15 = r14;  /* 0C061C36 mov Rm,Rn */
	IF(0x0C061C38u); PR = R32(r15); r15 += 4; UPD(0x0C061C3Au, 3);  /* 0C061C38 lds.l @Rn+,pr */
	IF(0x0C061C3Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C061C3A rts */
}

void f_0C061C50(sh3_t *c)
{
	LOCALS;
L_0C061C50: BLKS(0x0C061C50u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C061C52u, 1);  /* 0C061C50 mov.l Rm,@-Rn */
	r5 = 0x0u;  /* 0C061C52 mov #imm,Rn */
	IF(0x0C061C54u); r15 -= 4; W32(r15, PR); UPD(0x0C061C56u, 2);  /* 0C061C54 sts.l pr,@-Rn */
	r0 = 0xC2859A0u; UPD(0x0C061C58u, 1);  /* 0C061C56 mov.l @(disp,pc),Rn */
	r2 = R32(r0); UPD(0x0C061C5Au, 1);  /* 0C061C58 mov.l @Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r2); r2 += 2; r4 = v_; } UPD(0x0C061C5Cu, 1);  /* 0C061C5A mov.w @Rm+,Rn */
	W32(r0, r2); UPD(0x0C061C5Eu, 1);  /* 0C061C5C mov.l Rm,@Rn */
	r0 = 0xC058610u; UPD(0x0C061C60u, 1);  /* 0C061C5E mov.l @(disp,pc),Rn */
	IF(0x0C061C60u); { u32 t_ = r0; PR = 0x0C061C64u; r14 = r15; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058610, 0x0C058610u, 0x0C061C64u); }  /* 0C061C60 jsr @Rn */
L_0C061C64: BLKS(0x0C061C64u);
	r0 = (u32)(s32)(s16)r0;  /* 0C061C64 exts.w Rm,Rn */
	r15 = r14;  /* 0C061C66 mov Rm,Rn */
	IF(0x0C061C68u); PR = R32(r15); r15 += 4; UPD(0x0C061C6Au, 3);  /* 0C061C68 lds.l @Rn+,pr */
	IF(0x0C061C6Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C061C6A rts */
}

/* FUN_0c061d80 */
void f_0C061D80(sh3_t *c)
{
	LOCALS;
L_0C061D80: BLKS(0x0C061D80u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C061D82u, 1);  /* 0C061D80 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C061D84u, 1);  /* 0C061D82 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C061D86u, 1);  /* 0C061D84 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C061D88u, 1);  /* 0C061D86 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C061D8Au, 1);  /* 0C061D88 mov.l Rm,@-Rn */
	r11 = (u32)(s32)(s16)r7;  /* 0C061D8A exts.w Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C061D8Eu, 2);  /* 0C061D8C mov.l Rm,@-Rn */
	r12 = r4;  /* 0C061D8E mov Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C061D92u, 2);  /* 0C061D90 mov.l Rm,@-Rn */
	r13 = r5;  /* 0C061D92 mov Rm,Rn */
	IF(0x0C061D94u); r15 -= 4; W32(r15, PR); UPD(0x0C061D96u, 2);  /* 0C061D94 sts.l pr,@-Rn */
	r4 = 0x1u;  /* 0C061D96 mov #imm,Rn */
	r8 = 0xC0606C0u; UPD(0x0C061D9Au, 2);  /* 0C061D98 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFFCu;  /* 0C061D9A add #imm,Rn */
	r14 = r15;  /* 0C061D9C mov Rm,Rn */
	IF(0x0C061D9Eu); { u32 t_ = r8; PR = 0x0C061DA2u; W32(r14, r6); /* slot mov.l Rm,@Rn */ UPD(t_, 4); CALLP(t_, f_0C0606C0, 0x0C0606C0u, 0x0C061DA2u); }  /* 0C061D9E jsr @Rn */
L_0C061DA2: BLKS(0x0C061DA2u);
	T = (r0 & r0) == 0;  /* 0C061DA2 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C061DC0u, 4); goto L_0C061DC0; } UPD(0x0C061DA8u, 1); goto L_0C061DA8; }  /* 0C061DA4 bf/s */
L_0C061DA8: BLKS(0x0C061DA8u);
	r14 += 0x4u;  /* 0C061DA8 add #imm,Rn */
	r15 = r14;  /* 0C061DAA mov Rm,Rn */
	IF(0x0C061DACu); PR = R32(r15); r15 += 4; UPD(0x0C061DAEu, 3);  /* 0C061DAC lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C061DB0u, 1);  /* 0C061DAE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C061DB2u, 1);  /* 0C061DB0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C061DB4u, 1);  /* 0C061DB2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C061DB6u, 1);  /* 0C061DB4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C061DB8u, 1);  /* 0C061DB6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C061DBAu, 1);  /* 0C061DB8 mov.l @Rm+,Rn */
	IF(0x0C061DBAu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C061DBA rts */
L_0C061DC0: BLKS(0x0C061DC0u);
	r4 = 0xC2755BCu; UPD(0x0C061DC2u, 1);  /* 0C061DC0 mov.l @(disp,pc),Rn */
	r0 = 0x8u;  /* 0C061DC2 mov #imm,Rn */
	r10 = (u32)(s32)(s16)R16(r4); UPD(0x0C061DC6u, 2);  /* 0C061DC4 mov.w @Rm,Rn */
	r8 = 0xB4u; UPD(0x0C061DC8u, 1);  /* 0C061DC6 mov.w @(disp,pc),Rn */
	r4 = 0x4u;  /* 0C061DC8 mov #imm,Rn */
	IF(0x0C061DCAu); MACL = r10 * r8;  /* 0C061DCA mul.l Rm,Rn */
	r3 = 0xC26CD40u; UPD(0x0C061DCEu, 4);  /* 0C061DCC mov.l @(disp,pc),Rn */
	r9 = 0xC050D70u; UPD(0x0C061DD0u, 1);  /* 0C061DCE mov.l @(disp,pc),Rn */
	IF(0x0C061DD0u); r8 = MACL;  /* 0C061DD0 sts macl,Rn */
	r2 = 0xC0000000u; UPD(0x0C061DD4u, 2);  /* 0C061DD2 mov.l @(disp,pc),Rn */
	r8 += r3;  /* 0C061DD4 add Rm,Rn */
	W32(r8, r2); UPD(0x0C061DD8u, 2);  /* 0C061DD6 mov.l Rm,@Rn */
	IF(0x0C061DD8u); { u32 t_ = r9; PR = 0x0C061DDCu; W32(r8 + 0x4u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C061DDCu); }  /* 0C061DD8 jsr @Rn */
L_0C061DDC: BLKS(0x0C061DDCu);
	r0 += 0x18u;  /* 0C061DDC add #imm,Rn */
	W32(r8 + 0x8u, r0); UPD(0x0C061DE0u, 2);  /* 0C061DDE mov.l Rm,@(disp,Rn) */
	r9 = r11;  /* 0C061DE0 mov Rm,Rn */
	r9 += 0x8u;  /* 0C061DE2 add #imm,Rn */
	r0 = r9;  /* 0C061DE4 mov Rm,Rn */
	IF(0x0C061DE6u); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C061DE6 shar Rn */
	IF(0x0C061DE8u); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C061DE8 shar Rn */
	IF(0x0C061DEAu); T = r0 & 1; r0 = (u32)((s32)r0 >> 1);  /* 0C061DEA shar Rn */
	r0 &= 0x3Fu;  /* 0C061DEC and #imm,r0 */
	W32(r8 + 0xCu, r0); UPD(0x0C061DF0u, 8);  /* 0C061DEE mov.l Rm,@(disp,Rn) */
	r4 = r10;  /* 0C061DF0 mov Rm,Rn */
	r0 = 0xC0A02D0u; UPD(0x0C061DF4u, 2);  /* 0C061DF2 mov.l @(disp,pc),Rn */
	IF(0x0C061DF4u); r9 >>= 2;  /* 0C061DF4 shlr2 Rn */
	IF(0x0C061DF6u); { u32 t_ = r0; PR = 0x0C061DFAu; IF(0x0C061DF8u); r9 >>= 2; /* slot shlr2 Rn */ UPD(t_, 3); CALLP(t_, f_0C0A02D0, 0x0C0A02D0u, 0x0C061DFAu); }  /* 0C061DF6 jsr @Rn */
L_0C061DFA: BLKS(0x0C061DFAu);
	r4 = r10;  /* 0C061DFA mov Rm,Rn */
	r10 = 0xC0A1530u; UPD(0x0C061DFEu, 2);  /* 0C061DFC mov.l @(disp,pc),Rn */
	IF(0x0C061DFEu); { u32 t_ = r10; PR = 0x0C061E02u; IF(0x0C061E00u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0A1530, 0x0C0A1530u, 0x0C061E02u); }  /* 0C061DFE jsr @Rn */
L_0C061E02: BLKS(0x0C061E02u);
	r0 = r12;  /* 0C061E02 mov Rm,Rn */
	r0 &= 0x7u;  /* 0C061E04 and #imm,r0 */
	r5 = 0xA0u; UPD(0x0C061E08u, 3);  /* 0C061E06 mov.w @(disp,pc),Rn */
	r7 = r0;  /* 0C061E08 mov Rm,Rn */
	r5 += r8;  /* 0C061E0A add Rm,Rn */
	r7 += r7;  /* 0C061E0C add Rm,Rn */
	r7 += r0;  /* 0C061E0E add Rm,Rn */
	r5 += 0x1u;  /* 0C061E10 add #imm,Rn */
	W8(r5, r7); UPD(0x0C061E14u, 6);  /* 0C061E12 mov.b Rm,@Rn */
	r6 = 0x1Fu;  /* 0C061E14 mov #imm,Rn */
	r9 &= r6;  /* 0C061E16 and Rm,Rn */
	r5 += 0x1u;  /* 0C061E18 add #imm,Rn */
	W8(r5, r9); UPD(0x0C061E1Cu, 4);  /* 0C061E1A mov.b Rm,@Rn */
	r4 = R32(r14); UPD(0x0C061E1Eu, 1);  /* 0C061E1C mov.l @Rm,Rn */
	r10 = 0xC058060u; UPD(0x0C061E20u, 1);  /* 0C061E1E mov.l @(disp,pc),Rn */
	W32(r8 + 0x28u, r4); UPD(0x0C061E22u, 1);  /* 0C061E20 mov.l Rm,@(disp,Rn) */
	r0 = 0x86u; UPD(0x0C061E24u, 1);  /* 0C061E22 mov.w @(disp,pc),Rn */
	r4 = r11;  /* 0C061E24 mov Rm,Rn */
	r9 = 0xC058030u; UPD(0x0C061E28u, 2);  /* 0C061E26 mov.l @(disp,pc),Rn */
	r5 = R32(r14 + 0x24u); UPD(0x0C061E2Au, 1);  /* 0C061E28 mov.l @(disp,Rm),Rn */
	W32(r8 + 0x24u, r13); UPD(0x0C061E2Cu, 1);  /* 0C061E2A mov.l Rm,@(disp,Rn) */
	IF(0x0C061E2Cu); { u32 t_ = r10; PR = 0x0C061E30u; IF(0x0C061E2Eu); W16(r0 + r8, r11); /* slot mov.w Rm,@(r0,Rn) */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C061E30u); }  /* 0C061E2C jsr @Rn */
L_0C061E30: BLKS(0x0C061E30u);
	W32(r8 + 0x2Cu, r0); UPD(0x0C061E32u, 1);  /* 0C061E30 mov.l Rm,@(disp,Rn) */
	r4 = r11;  /* 0C061E32 mov Rm,Rn */
	IF(0x0C061E34u); { u32 t_ = r9; PR = 0x0C061E38u; r5 = R32(r14 + 0x24u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C061E38u); }  /* 0C061E34 jsr @Rn */
L_0C061E38: BLKS(0x0C061E38u);
	W32(r8 + 0x30u, r0); UPD(0x0C061E3Au, 1);  /* 0C061E38 mov.l Rm,@(disp,Rn) */
	r3 = 0x14u;  /* 0C061E3A mov #imm,Rn */
	r0 = 0xADu; UPD(0x0C061E3Eu, 2);  /* 0C061E3C mov.w @(disp,pc),Rn */
	IF(0x0C061E3Eu); W8(r0 + r8, r3); UPD(0x0C061E40u, 1);  /* 0C061E3E mov.b Rm,@(r0,Rn) */
	r0 += 0xFFFFFFFCu;  /* 0C061E40 add #imm,Rn */
	IF(0x0C061E42u); W8(r0 + r8, r3); UPD(0x0C061E44u, 2);  /* 0C061E42 mov.b Rm,@(r0,Rn) */
	r2 = 0x207C0C0u; UPD(0x0C061E46u, 1);  /* 0C061E44 mov.l @(disp,pc),Rn */
	r0 = 0x808080u; UPD(0x0C061E48u, 1);  /* 0C061E46 mov.l @(disp,pc),Rn */
	W32(r8 + 0x34u, r2); UPD(0x0C061E4Au, 1);  /* 0C061E48 mov.l Rm,@(disp,Rn) */
	W32(r8 + 0x38u, r0); UPD(0x0C061E4Cu, 1);  /* 0C061E4A mov.l Rm,@(disp,Rn) */
	r8 = 0xC0AFC10u; UPD(0x0C061E4Eu, 1);  /* 0C061E4C mov.l @(disp,pc),Rn */
	IF(0x0C061E4Eu); { u32 t_ = r8; PR = 0x0C061E52u; r4 = 0x66u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFC10, 0x0C0AFC10u, 0x0C061E52u); }  /* 0C061E4E jsr @Rn */
L_0C061E52: BLKS(0x0C061E52u);
	{ r0 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C061DA8u, 3); goto L_0C061DA8; }  /* 0C061E52 bra */
}

/* FUN_0c061f60 */
void f_0C061F60(sh3_t *c)
{
	LOCALS;
L_0C061F60: BLKS(0x0C061F60u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C061F62u, 1);  /* 0C061F60 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C061F64u, 1);  /* 0C061F62 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C061F66u, 1);  /* 0C061F64 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C061F68u, 1);  /* 0C061F66 mov.l Rm,@-Rn */
	r10 = (u32)(s32)(s16)r6;  /* 0C061F68 exts.w Rm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C061F6Cu, 2);  /* 0C061F6A mov.l Rm,@-Rn */
	r11 = r4;  /* 0C061F6C mov Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C061F70u, 2);  /* 0C061F6E mov.l Rm,@-Rn */
	r12 = r5;  /* 0C061F70 mov Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C061F74u, 2);  /* 0C061F72 mov.l Rm,@-Rn */
	r13 = r7;  /* 0C061F74 mov Rm,Rn */
	IF(0x0C061F76u); r15 -= 4; W32(r15, PR); UPD(0x0C061F78u, 2);  /* 0C061F76 sts.l pr,@-Rn */
	r4 = 0x1u;  /* 0C061F78 mov #imm,Rn */
	r15 += 0xFFFFFFFCu;  /* 0C061F7A add #imm,Rn */
	r14 = r15;  /* 0C061F7C mov Rm,Rn */
	r2 = R32(r14 + 0x24u); UPD(0x0C061F80u, 4);  /* 0C061F7E mov.l @(disp,Rm),Rn */
	r8 = 0xC0606C0u; UPD(0x0C061F82u, 1);  /* 0C061F80 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)r2;  /* 0C061F82 exts.b Rm,Rn */
	IF(0x0C061F84u); { u32 t_ = r8; PR = 0x0C061F88u; W32(r14, r0); /* slot mov.l Rm,@Rn */ UPD(t_, 3); CALLP(t_, f_0C0606C0, 0x0C0606C0u, 0x0C061F88u); }  /* 0C061F84 jsr @Rn */
L_0C061F88: BLKS(0x0C061F88u);
	T = (r0 & r0) == 0;  /* 0C061F88 tst Rm,Rn */
	{ u32 c_ = !T; r0 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C061FB0u, 4); goto L_0C061FB0; } UPD(0x0C061F8Eu, 1); goto L_0C061F8E; }  /* 0C061F8A bf/s */
L_0C061F8E: BLKS(0x0C061F8Eu);
	r14 += 0x4u;  /* 0C061F8E add #imm,Rn */
	r15 = r14;  /* 0C061F90 mov Rm,Rn */
	IF(0x0C061F92u); PR = R32(r15); r15 += 4; UPD(0x0C061F94u, 3);  /* 0C061F92 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C061F96u, 1);  /* 0C061F94 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C061F98u, 1);  /* 0C061F96 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C061F9Au, 1);  /* 0C061F98 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C061F9Cu, 1);  /* 0C061F9A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C061F9Eu, 1);  /* 0C061F9C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C061FA0u, 1);  /* 0C061F9E mov.l @Rm+,Rn */
	IF(0x0C061FA0u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C061FA0 rts */
L_0C061FB0: BLKS(0x0C061FB0u);
	r4 = 0xC2755BCu; UPD(0x0C061FB2u, 1);  /* 0C061FB0 mov.l @(disp,pc),Rn */
	r0 = 0x17u;  /* 0C061FB2 mov #imm,Rn */
	r9 = (u32)(s32)(s16)R16(r4); UPD(0x0C061FB6u, 2);  /* 0C061FB4 mov.w @Rm,Rn */
	r7 = 0x0u;  /* 0C061FB6 mov #imm,Rn */
	r8 = 0xB4u; UPD(0x0C061FBAu, 2);  /* 0C061FB8 mov.w @(disp,pc),Rn */
	r4 = r9;  /* 0C061FBA mov Rm,Rn */
	IF(0x0C061FBCu); MACL = r9 * r8;  /* 0C061FBC mul.l Rm,Rn */
	r3 = 0xC26CD40u; UPD(0x0C061FC0u, 4);  /* 0C061FBE mov.l @(disp,pc),Rn */
	IF(0x0C061FC0u); r8 = MACL;  /* 0C061FC0 sts macl,Rn */
	r8 += r3;  /* 0C061FC2 add Rm,Rn */
	W32(r8 + 0x4u, r0); UPD(0x0C061FC6u, 3);  /* 0C061FC4 mov.l Rm,@(disp,Rn) */
	r0 = 0xC0A02D0u; UPD(0x0C061FC8u, 1);  /* 0C061FC6 mov.l @(disp,pc),Rn */
	r2 = 0xD3000000u; UPD(0x0C061FCAu, 1);  /* 0C061FC8 mov.l @(disp,pc),Rn */
	W32(r8 + 0x8u, r7); UPD(0x0C061FCCu, 1);  /* 0C061FCA mov.l Rm,@(disp,Rn) */
	W32(r8, r2); UPD(0x0C061FCEu, 1);  /* 0C061FCC mov.l Rm,@Rn */
	IF(0x0C061FCEu); { u32 t_ = r0; PR = 0x0C061FD2u; W32(r8 + 0xCu, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C0A02D0, 0x0C0A02D0u, 0x0C061FD2u); }  /* 0C061FCE jsr @Rn */
L_0C061FD2: BLKS(0x0C061FD2u);
	r4 = r9;  /* 0C061FD2 mov Rm,Rn */
	r9 = 0xC0A1530u; UPD(0x0C061FD6u, 2);  /* 0C061FD4 mov.l @(disp,pc),Rn */
	IF(0x0C061FD6u); { u32 t_ = r9; PR = 0x0C061FDAu; IF(0x0C061FD8u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0A1530, 0x0C0A1530u, 0x0C061FDAu); }  /* 0C061FD6 jsr @Rn */
L_0C061FDA: BLKS(0x0C061FDAu);
	W32(r8 + 0x24u, r11); UPD(0x0C061FDCu, 1);  /* 0C061FDA mov.l Rm,@(disp,Rn) */
	r4 = r10;  /* 0C061FDC mov Rm,Rn */
	r11 = 0xC058060u; UPD(0x0C061FE0u, 2);  /* 0C061FDE mov.l @(disp,pc),Rn */
	r5 = r13;  /* 0C061FE0 mov Rm,Rn */
	r0 = 0x86u; UPD(0x0C061FE4u, 2);  /* 0C061FE2 mov.w @(disp,pc),Rn */
	r9 = 0xC058030u; UPD(0x0C061FE6u, 1);  /* 0C061FE4 mov.l @(disp,pc),Rn */
	W32(r8 + 0x28u, r12); UPD(0x0C061FE8u, 1);  /* 0C061FE6 mov.l Rm,@(disp,Rn) */
	IF(0x0C061FE8u); { u32 t_ = r11; PR = 0x0C061FECu; IF(0x0C061FEAu); W16(r0 + r8, r10); /* slot mov.w Rm,@(r0,Rn) */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C061FECu); }  /* 0C061FE8 jsr @Rn */
L_0C061FEC: BLKS(0x0C061FECu);
	W32(r8 + 0x2Cu, r0); UPD(0x0C061FEEu, 1);  /* 0C061FEC mov.l Rm,@(disp,Rn) */
	r4 = r10;  /* 0C061FEE mov Rm,Rn */
	IF(0x0C061FF0u); { u32 t_ = r9; PR = 0x0C061FF4u; r5 = r13; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C061FF4u); }  /* 0C061FF0 jsr @Rn */
L_0C061FF4: BLKS(0x0C061FF4u);
	W32(r8 + 0x30u, r0); UPD(0x0C061FF6u, 1);  /* 0C061FF4 mov.l Rm,@(disp,Rn) */
	r6 = 0x3u;  /* 0C061FF6 mov #imm,Rn */
	r6 += r14;  /* 0C061FF8 add Rm,Rn */
	r5 = (u32)(s32)(s8)R8(r6); UPD(0x0C061FFCu, 3);  /* 0C061FFA mov.b @Rm,Rn */
	r4 = 0x3u;  /* 0C061FFC mov #imm,Rn */
	r0 = 0xADu; UPD(0x0C062000u, 2);  /* 0C061FFE mov.w @(disp,pc),Rn */
	r4 += r14;  /* 0C062000 add Rm,Rn */
	IF(0x0C062002u); W8(r0 + r8, r5); UPD(0x0C062004u, 2);  /* 0C062002 mov.b Rm,@(r0,Rn) */
	r3 = (u32)(s32)(s8)R8(r4); UPD(0x0C062006u, 1);  /* 0C062004 mov.b @Rm,Rn */
	r0 += 0xFFFFFFFCu;  /* 0C062006 add #imm,Rn */
	IF(0x0C062008u); W8(r0 + r8, r3); UPD(0x0C06200Au, 2);  /* 0C062008 mov.b Rm,@(r0,Rn) */
	r8 = 0xC0AFC10u; UPD(0x0C06200Cu, 1);  /* 0C06200A mov.l @(disp,pc),Rn */
	IF(0x0C06200Cu); { u32 t_ = r8; PR = 0x0C062010u; r4 = 0x70u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFC10, 0x0C0AFC10u, 0x0C062010u); }  /* 0C06200C jsr @Rn */
L_0C062010: BLKS(0x0C062010u);
	{ r0 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C061F8Eu, 3); goto L_0C061F8E; }  /* 0C062010 bra */
}

/* FUN_0c0621d0 */
void f_0C0621D0(sh3_t *c)
{
	LOCALS;
	goto L_0C0621D0;
L_0C062040: BLKS(0x0C062040u);
	r6 = r5;  /* 0C062040 mov Rm,Rn */
	r5 = 0x280u; UPD(0x0C062044u, 2);  /* 0C062042 mov.w @(disp,pc),Rn */
	r0 = (u32)(s32)(s16)r4;  /* 0C062044 exts.w Rm,Rn */
	IF(0x0C062046u); MACL = r0 * r5;  /* 0C062046 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06204Au, 4);  /* 0C062048 mov.l Rm,@-Rn */
	r1 = 0x7u;  /* 0C06204A mov #imm,Rn */
	r4 = 0xC283794u; UPD(0x0C06204Eu, 2);  /* 0C06204C mov.l @(disp,pc),Rn */
	IF(0x0C06204Eu); r7 = MACL;  /* 0C06204E sts macl,Rn */
	IF(0x0C062050u); r15 -= 4; W32(r15, PR); UPD(0x0C062052u, 2);  /* 0C062050 sts.l pr,@-Rn */
	r7 += r4;  /* 0C062052 add Rm,Rn */
	r2 = R32(r7 + 0x14u); UPD(0x0C062056u, 2);  /* 0C062054 mov.l @(disp,Rm),Rn */
	r2 += r6;  /* 0C062056 add Rm,Rn */
	W32(r7 + 0x14u, r2); UPD(0x0C06205Au, 2);  /* 0C062058 mov.l Rm,@(disp,Rn) */
	r3 = R32(r7 + 0x8u); UPD(0x0C06205Cu, 1);  /* 0C06205A mov.l @(disp,Rm),Rn */
	r2 = r3;  /* 0C06205C mov Rm,Rn */
	r2 += 0xFFFFFFFFu;  /* 0C06205E add #imm,Rn */
	T = r2 > r1;  /* 0C062060 cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06206Au, 6); goto L_0C06206A; } goto L_0C062066; }  /* 0C062062 bt/s */
L_0C062066: BLKS(0x0C062066u);
	r3 += 0x1u;  /* 0C062066 add #imm,Rn */
	W32(r7 + 0x8u, r3); UPD(0x0C06206Au, 3);  /* 0C062068 mov.l Rm,@(disp,Rn) */
L_0C06206A: BLKS(0x0C06206Au);
	r2 = 0xC3929E0u; UPD(0x0C06206Cu, 1);  /* 0C06206A mov.l @(disp,pc),Rn */
	r3 = R32(r2); UPD(0x0C06206Eu, 1);  /* 0C06206C mov.l @Rm,Rn */
	r2 = 0xE00000u; UPD(0x0C062070u, 1);  /* 0C06206E mov.l @(disp,pc),Rn */
	r1 = R32(r7 + 0x14u); UPD(0x0C062072u, 1);  /* 0C062070 mov.l @(disp,Rm),Rn */
	r2 += r3;  /* 0C062072 add Rm,Rn */
	T = (s32)r1 > (s32)r2;  /* 0C062074 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C06207Au, 5); goto L_0C06207A; }  /* 0C062076 bf */
L_0C062078: BLKS(0x0C062078u);
	W32(r7 + 0x14u, r2); UPD(0x0C06207Au, 1);  /* 0C062078 mov.l Rm,@(disp,Rn) */
L_0C06207A: BLKS(0x0C06207Au);
	r1 = 0xC16BF48u; UPD(0x0C06207Cu, 1);  /* 0C06207A mov.l @(disp,pc),Rn */
	r0 += r0;  /* 0C06207C add Rm,Rn */
	IF(0x0C06207Eu); r2 = (u32)(s32)(s16)R16(r0 + r1); UPD(0x0C062080u, 2);  /* 0C06207E mov.w @(r0,Rm),Rn */
	IF(0x0C062080u); MACL = r2 * r5;  /* 0C062080 mul.l Rm,Rn */
	IF(0x0C062082u); r2 = MACL;  /* 0C062082 sts macl,Rn */
	r2 += r4;  /* 0C062084 add Rm,Rn */
	r0 = R32(r2); UPD(0x0C062088u, 5);  /* 0C062086 mov.l @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C062088 tst Rm,Rn */
	if (T) { UPD(0x0C062098u, 4); goto L_0C062098; }  /* 0C06208A bt */
L_0C06208C: BLKS(0x0C06208Cu);
	r4 = R32(r2 + 0x14u); UPD(0x0C06208Eu, 1);  /* 0C06208C mov.l @(disp,Rm),Rn */
	r1 = 0xFFF00000u; UPD(0x0C062090u, 1);  /* 0C06208E mov.l @(disp,pc),Rn */
	r4 -= r3;  /* 0C062090 sub Rm,Rn */
	r4 += r1;  /* 0C062092 add Rm,Rn */
	T = (s32)r4 >= (s32)r6;  /* 0C062094 cmp/ge Rm,Rn */
	if (!T) { UPD(0x0C0620CEu, 6); goto L_0C0620CE; }  /* 0C062096 bf */
L_0C062098: BLKS(0x0C062098u);
	r5 = R32(r7 + 0x14u); UPD(0x0C06209Au, 1);  /* 0C062098 mov.l @(disp,Rm),Rn */
	r7 = (r5 >> 16) | (r5 << 16);  /* 0C06209A swap.w Rm,Rn */
	r5 = (u32)(s32)(s16)r7;  /* 0C06209C exts.w Rm,Rn */
	r7 = 0x290u; UPD(0x0C0620A0u, 3);  /* 0C06209E mov.w @(disp,pc),Rn */
	T = r5 == r7;  /* 0C0620A0 cmp/eq Rm,Rn */
	{ u32 c_ = T; r0 = r6; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0620BEu, 4); goto L_0C0620BE; } goto L_0C0620A6; }  /* 0C0620A2 bt/s */
L_0C0620A6: BLKS(0x0C0620A6u);
	r2 = (r3 >> 16) | (r3 << 16);  /* 0C0620A6 swap.w Rm,Rn */
	r0 = 0xFFFFFE50u; UPD(0x0C0620AAu, 3);  /* 0C0620A8 mov.w @(disp,pc),Rn */
	r3 = (u32)(s32)(s16)r2;  /* 0C0620AA exts.w Rm,Rn */
	r3 += r0;  /* 0C0620AC add Rm,Rn */
	r5 -= r7;  /* 0C0620AE sub Rm,Rn */
	IF(0x0C0620B0u); MACL = r6 * r3;  /* 0C0620B0 mul.l Rm,Rn */
	r7 = 0xC0AFF74u; UPD(0x0C0620B4u, 6);  /* 0C0620B2 mov.l @(disp,pc),Rn */
	IF(0x0C0620B4u); { u32 t_ = r7; PR = 0x0C0620B8u; IF(0x0C0620B6u); r4 = MACL; /* slot sts macl,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFF74, 0x0C0AFF74u, 0x0C0620B8u); }  /* 0C0620B4 jsr @Rn */
L_0C0620B8: BLKS(0x0C0620B8u);
	T = (s32)r0 > (s32)r6;  /* 0C0620B8 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C0620BEu, 4); goto L_0C0620BE; }  /* 0C0620BA bf */
L_0C0620BC: BLKS(0x0C0620BCu);
	r0 = r6;  /* 0C0620BC mov Rm,Rn */
	UPD(0x0C0620BEu, 1);
L_0C0620BE: BLKS(0x0C0620BEu);
	r2 = 0xC3929E0u; UPD(0x0C0620C0u, 1);  /* 0C0620BE mov.l @(disp,pc),Rn */
	r6 = R32(r2); UPD(0x0C0620C2u, 1);  /* 0C0620C0 mov.l @Rm,Rn */
	r3 = 0x1B00000u; UPD(0x0C0620C4u, 1);  /* 0C0620C2 mov.l @(disp,pc),Rn */
	r6 += r0;  /* 0C0620C4 add Rm,Rn */
	T = (s32)r6 > (s32)r3;  /* 0C0620C6 cmp/gt Rm,Rn */
	{ u32 c_ = !T; W32(r2, r6); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C0620CEu, 5); goto L_0C0620CE; } UPD(0x0C0620CCu, 1); goto L_0C0620CC; }  /* 0C0620C8 bf/s */
L_0C0620CC: BLKS(0x0C0620CCu);
	W32(r2, r3); UPD(0x0C0620CEu, 1);  /* 0C0620CC mov.l Rm,@Rn */
L_0C0620CE: BLKS(0x0C0620CEu);
	r15 = r14;  /* 0C0620CE mov Rm,Rn */
	IF(0x0C0620D0u); PR = R32(r15); r15 += 4; UPD(0x0C0620D2u, 2);  /* 0C0620D0 lds.l @Rn+,pr */
	IF(0x0C0620D2u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0620D2 rts */
L_0C062100: BLKS(0x0C062100u);
	r6 = r5;  /* 0C062100 mov Rm,Rn */
	r5 = 0x280u; UPD(0x0C062104u, 2);  /* 0C062102 mov.w @(disp,pc),Rn */
	r0 = (u32)(s32)(s16)r4;  /* 0C062104 exts.w Rm,Rn */
	IF(0x0C062106u); MACL = r0 * r5;  /* 0C062106 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C06210Au, 4);  /* 0C062108 mov.l Rm,@-Rn */
	r4 = 0xC283794u; UPD(0x0C06210Cu, 1);  /* 0C06210A mov.l @(disp,pc),Rn */
	IF(0x0C06210Cu); r7 = MACL;  /* 0C06210C sts macl,Rn */
	IF(0x0C06210Eu); r15 -= 4; W32(r15, PR); UPD(0x0C062110u, 2);  /* 0C06210E sts.l pr,@-Rn */
	r7 += r4;  /* 0C062110 add Rm,Rn */
	r3 = R32(r7 + 0x14u); UPD(0x0C062114u, 2);  /* 0C062112 mov.l @(disp,Rm),Rn */
	r1 = R32(r7 + 0x1Cu); UPD(0x0C062116u, 1);  /* 0C062114 mov.l @(disp,Rm),Rn */
	r3 -= r1;  /* 0C062116 sub Rm,Rn */
	W32(r7 + 0x14u, r3); UPD(0x0C06211Au, 2);  /* 0C062118 mov.l Rm,@(disp,Rn) */
	r1 = 0x7u;  /* 0C06211A mov #imm,Rn */
	r3 = R32(r7 + 0x8u); UPD(0x0C06211Eu, 2);  /* 0C06211C mov.l @(disp,Rm),Rn */
	r2 = r3;  /* 0C06211E mov Rm,Rn */
	r2 += 0xFFFFFFFEu;  /* 0C062120 add #imm,Rn */
	T = r2 > r1;  /* 0C062122 cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06212Cu, 6); goto L_0C06212C; } goto L_0C062128; }  /* 0C062124 bt/s */
L_0C062128: BLKS(0x0C062128u);
	r3 += 0xFFFFFFFFu;  /* 0C062128 add #imm,Rn */
	W32(r7 + 0x8u, r3); UPD(0x0C06212Cu, 3);  /* 0C06212A mov.l Rm,@(disp,Rn) */
L_0C06212C: BLKS(0x0C06212Cu);
	r2 = 0xC3929E0u; UPD(0x0C06212Eu, 1);  /* 0C06212C mov.l @(disp,pc),Rn */
	r3 = R32(r2); UPD(0x0C062130u, 1);  /* 0C06212E mov.l @Rm,Rn */
	r2 = 0x100000u; UPD(0x0C062132u, 1);  /* 0C062130 mov.l @(disp,pc),Rn */
	r1 = R32(r7 + 0x14u); UPD(0x0C062134u, 1);  /* 0C062132 mov.l @(disp,Rm),Rn */
	r2 += r3;  /* 0C062134 add Rm,Rn */
	T = (s32)r1 >= (s32)r2;  /* 0C062136 cmp/ge Rm,Rn */
	if (T) { UPD(0x0C06213Cu, 5); goto L_0C06213C; }  /* 0C062138 bt */
L_0C06213A: BLKS(0x0C06213Au);
	W32(r7 + 0x14u, r2); UPD(0x0C06213Cu, 1);  /* 0C06213A mov.l Rm,@(disp,Rn) */
L_0C06213C: BLKS(0x0C06213Cu);
	r1 = 0xC16BF48u; UPD(0x0C06213Eu, 1);  /* 0C06213C mov.l @(disp,pc),Rn */
	r0 += r0;  /* 0C06213E add Rm,Rn */
	IF(0x0C062140u); r2 = (u32)(s32)(s16)R16(r0 + r1); UPD(0x0C062142u, 2);  /* 0C062140 mov.w @(r0,Rm),Rn */
	IF(0x0C062142u); MACL = r2 * r5;  /* 0C062142 mul.l Rm,Rn */
	IF(0x0C062144u); r2 = MACL;  /* 0C062144 sts macl,Rn */
	r2 += r4;  /* 0C062146 add Rm,Rn */
	r0 = R32(r2); UPD(0x0C06214Au, 5);  /* 0C062148 mov.l @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C06214A tst Rm,Rn */
	if (T) { UPD(0x0C06215Eu, 4); goto L_0C06215E; }  /* 0C06214C bt */
L_0C06214E: BLKS(0x0C06214Eu);
	r4 = R32(r2 + 0x14u); UPD(0x0C062150u, 1);  /* 0C06214E mov.l @(disp,Rm),Rn */
	r0 = r3;  /* 0C062150 mov Rm,Rn */
	r0 -= r4;  /* 0C062152 sub Rm,Rn */
	r5 = 0xE00000u; UPD(0x0C062156u, 3);  /* 0C062154 mov.l @(disp,pc),Rn */
	r4 = r0;  /* 0C062156 mov Rm,Rn */
	r4 += r5;  /* 0C062158 add Rm,Rn */
	T = (s32)r4 >= (s32)r6;  /* 0C06215A cmp/ge Rm,Rn */
	if (!T) { UPD(0x0C062196u, 6); goto L_0C062196; }  /* 0C06215C bf */
L_0C06215E: BLKS(0x0C06215Eu);
	r2 = R32(r7 + 0x14u); UPD(0x0C062160u, 1);  /* 0C06215E mov.l @(disp,Rm),Rn */
	r7 = (r2 >> 16) | (r2 << 16);  /* 0C062160 swap.w Rm,Rn */
	r5 = (u32)(s32)(s16)r7;  /* 0C062162 exts.w Rm,Rn */
	r7 = 0x170u; UPD(0x0C062166u, 3);  /* 0C062164 mov.w @(disp,pc),Rn */
	T = r5 == r7;  /* 0C062166 cmp/eq Rm,Rn */
	{ u32 c_ = T; r0 = r6; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C062184u, 4); goto L_0C062184; } goto L_0C06216C; }  /* 0C062168 bt/s */
L_0C06216C: BLKS(0x0C06216Cu);
	r4 = (r3 >> 16) | (r3 << 16);  /* 0C06216C swap.w Rm,Rn */
	r0 = 0xFFFFFEA0u; UPD(0x0C062170u, 3);  /* 0C06216E mov.w @(disp,pc),Rn */
	r3 = (u32)(s32)(s16)r4;  /* 0C062170 exts.w Rm,Rn */
	r3 += r0;  /* 0C062172 add Rm,Rn */
	r5 -= r7;  /* 0C062174 sub Rm,Rn */
	IF(0x0C062176u); MACL = r6 * r3;  /* 0C062176 mul.l Rm,Rn */
	r7 = 0xC0AFF74u; UPD(0x0C06217Au, 6);  /* 0C062178 mov.l @(disp,pc),Rn */
	IF(0x0C06217Au); { u32 t_ = r7; PR = 0x0C06217Eu; IF(0x0C06217Cu); r4 = MACL; /* slot sts macl,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFF74, 0x0C0AFF74u, 0x0C06217Eu); }  /* 0C06217A jsr @Rn */
L_0C06217E: BLKS(0x0C06217Eu);
	T = (s32)r0 > (s32)r6;  /* 0C06217E cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C062184u, 4); goto L_0C062184; }  /* 0C062180 bf */
L_0C062182: BLKS(0x0C062182u);
	r0 = r6;  /* 0C062182 mov Rm,Rn */
	UPD(0x0C062184u, 1);
L_0C062184: BLKS(0x0C062184u);
	r3 = 0xC3929E0u; UPD(0x0C062186u, 1);  /* 0C062184 mov.l @(disp,pc),Rn */
	r5 = R32(r3); UPD(0x0C062188u, 1);  /* 0C062186 mov.l @Rm,Rn */
	r6 = 0x15FFFFFu; UPD(0x0C06218Au, 1);  /* 0C062188 mov.l @(disp,pc),Rn */
	r5 -= r0;  /* 0C06218A sub Rm,Rn */
	T = (s32)r5 > (s32)r6;  /* 0C06218C cmp/gt Rm,Rn */
	{ u32 c_ = T; W32(r3, r5); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C062196u, 5); goto L_0C062196; } UPD(0x0C062192u, 1); goto L_0C062192; }  /* 0C06218E bt/s */
L_0C062192: BLKS(0x0C062192u);
	r7 = 0x1600000u; UPD(0x0C062194u, 1);  /* 0C062192 mov.l @(disp,pc),Rn */
	W32(r3, r7); UPD(0x0C062196u, 1);  /* 0C062194 mov.l Rm,@Rn */
L_0C062196: BLKS(0x0C062196u);
	r15 = r14;  /* 0C062196 mov Rm,Rn */
	IF(0x0C062198u); PR = R32(r15); r15 += 4; UPD(0x0C06219Au, 2);  /* 0C062198 lds.l @Rn+,pr */
	IF(0x0C06219Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r14 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C06219A rts */
L_0C0621D0: BLKS(0x0C0621D0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0621D2u, 1);  /* 0C0621D0 mov.l Rm,@-Rn */
	r2 = 0x280u; UPD(0x0C0621D4u, 1);  /* 0C0621D2 mov.w @(disp,pc),Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C0621D4 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0621D8u, 2);  /* 0C0621D6 mov.l Rm,@-Rn */
	IF(0x0C0621D8u); MACL = r8 * r2;  /* 0C0621D8 mul.l Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0621DCu, 3);  /* 0C0621DA mov.l Rm,@-Rn */
	r3 = 0xC283794u; UPD(0x0C0621DEu, 1);  /* 0C0621DC mov.l @(disp,pc),Rn */
	IF(0x0C0621DEu); r0 = MACL;  /* 0C0621DE sts macl,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0621E2u, 2);  /* 0C0621E0 mov.l Rm,@-Rn */
	r3 += r0;  /* 0C0621E2 add Rm,Rn */
	IF(0x0C0621E4u); r15 -= 4; W32(r15, PR); UPD(0x0C0621E6u, 2);  /* 0C0621E4 sts.l pr,@-Rn */
	r2 = 0xFu;  /* 0C0621E6 mov #imm,Rn */
	r0 = 0x24Cu; UPD(0x0C0621EAu, 2);  /* 0C0621E8 mov.w @(disp,pc),Rn */
	IF(0x0C0621EAu); r1 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C0621ECu, 1);  /* 0C0621EA mov.b @(r0,Rm),Rn */
	r2 &= r1;  /* 0C0621EC and Rm,Rn */
	r2 += 0xFFFFFFFFu;  /* 0C0621EE add #imm,Rn */
	r0 = 0x9u;  /* 0C0621F0 mov #imm,Rn */
	T = r2 > r0;  /* 0C0621F2 cmp/hi Rm,Rn */
	{ u32 c_ = !T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0621FCu, 7); goto L_0C0621FC; } goto L_0C0621F8; }  /* 0C0621F4 bf/s */
L_0C0621F8: BLKS(0x0C0621F8u);
	{ IF(0x0C0621FAu); ; /* slot nop */ UPD(0x0C062300u, 4); goto L_0C062300; }  /* 0C0621F8 bra */
L_0C0621FC: BLKS(0x0C0621FCu);
	r0 = 0xC062210u;  /* 0C0621FC mova @(disp,pc),r0 */
	r2 += r2;  /* 0C0621FE add Rm,Rn */
	IF(0x0C062200u); r4 = (u32)(s32)(s16)R16(r0 + r2); UPD(0x0C062202u, 3);  /* 0C062200 mov.w @(r0,Rm),Rn */
	IF(0x0C062202u); { u32 tv_ = (r4 + 0x0C062206u); u32 t_ = PHYS(tv_); IF(0x0C062204u); ; /* slot nop */ JRGN(tv_); UPD(t_, 3); switch (t_) { case 0x0C062230u: goto L_0C062230; case 0x0C062260u: goto L_0C062260; case 0x0C062280u: goto L_0C062280; case 0x0C0622A0u: goto L_0C0622A0; case 0x0C0622D0u: goto L_0C0622D0; case 0x0C062300u: goto L_0C062300; case 0x0C062330u: goto L_0C062330; case 0x0C062350u: goto L_0C062350; case 0x0C062380u: goto L_0C062380; default: JUMPD(tv_); } }  /* 0C062202 braf Rn */
L_0C062230: BLKS(0x0C062230u);
	r9 = 0x280u; UPD(0x0C062232u, 1);  /* 0C062230 mov.w @(disp,pc),Rn */
	IF(0x0C062232u); MACL = r8 * r9;  /* 0C062232 mul.l Rm,Rn */
	r7 = 0xC283794u; UPD(0x0C062236u, 3);  /* 0C062234 mov.l @(disp,pc),Rn */
	IF(0x0C062236u); r3 = MACL;  /* 0C062236 sts macl,Rn */
	r3 += r7;  /* 0C062238 add Rm,Rn */
	r5 = R32(r3 + 0x10u); UPD(0x0C06223Cu, 3);  /* 0C06223A mov.l @(disp,Rm),Rn */
	r6 = R32(r3 + 0x18u); UPD(0x0C06223Eu, 1);  /* 0C06223C mov.l @(disp,Rm),Rn */
	r2 = 0x1300000u; UPD(0x0C062240u, 1);  /* 0C06223E mov.l @(disp,pc),Rn */
	r5 += r6;  /* 0C062240 add Rm,Rn */
	T = (s32)r5 > (s32)r2;  /* 0C062242 cmp/gt Rm,Rn */
	{ u32 c_ = !T; W32(r3 + 0x10u, r5); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C06224Cu, 5); goto L_0C06224C; } UPD(0x0C062248u, 1); goto L_0C062248; }  /* 0C062244 bf/s */
L_0C062248: BLKS(0x0C062248u);
	W32(r3 + 0x10u, r2); UPD(0x0C06224Au, 1);  /* 0C062248 mov.l Rm,@(disp,Rn) */
	IF(0x0C06224Au); ;  /* 0C06224A nop */
	UPD(0x0C06224Cu, 1);
L_0C06224C: BLKS(0x0C06224Cu);
	r15 = r14;  /* 0C06224C mov Rm,Rn */
	IF(0x0C06224Eu); PR = R32(r15); r15 += 4; UPD(0x0C062250u, 2);  /* 0C06224E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C062252u, 1);  /* 0C062250 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C062254u, 1);  /* 0C062252 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C062256u, 1);  /* 0C062254 mov.l @Rm+,Rn */
	IF(0x0C062256u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C062256 rts */
L_0C062260: BLKS(0x0C062260u);
	r3 = 0x280u; UPD(0x0C062262u, 1);  /* 0C062260 mov.w @(disp,pc),Rn */
	IF(0x0C062262u); MACL = r8 * r3;  /* 0C062262 mul.l Rm,Rn */
	r0 = 0xC283794u; UPD(0x0C062266u, 3);  /* 0C062264 mov.l @(disp,pc),Rn */
	IF(0x0C062266u); r3 = MACL;  /* 0C062266 sts macl,Rn */
	r3 += r0;  /* 0C062268 add Rm,Rn */
	r10 = R32(r3 + 0x10u); UPD(0x0C06226Cu, 3);  /* 0C06226A mov.l @(disp,Rm),Rn */
	r1 = R32(r3 + 0x18u); UPD(0x0C06226Eu, 1);  /* 0C06226C mov.l @(disp,Rm),Rn */
	r8 = 0xFFFFFu; UPD(0x0C062270u, 1);  /* 0C06226E mov.l @(disp,pc),Rn */
	r10 -= r1;  /* 0C062270 sub Rm,Rn */
	T = (s32)r10 > (s32)r8;  /* 0C062272 cmp/gt Rm,Rn */
	{ u32 c_ = T; W32(r3 + 0x10u, r10); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C06224Cu, 5); goto L_0C06224C; } UPD(0x0C062278u, 1); goto L_0C062278; }  /* 0C062274 bt/s */
L_0C062278: BLKS(0x0C062278u);
	r2 = 0x100000u; UPD(0x0C06227Au, 1);  /* 0C062278 mov.l @(disp,pc),Rn */
	{ W32(r3 + 0x10u, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C06224Cu, 3); goto L_0C06224C; }  /* 0C06227A bra */
L_0C062280: BLKS(0x0C062280u);
	r5 = 0x280u; UPD(0x0C062282u, 1);  /* 0C062280 mov.w @(disp,pc),Rn */
	IF(0x0C062282u); MACL = r8 * r5;  /* 0C062282 mul.l Rm,Rn */
	r6 = 0xC283794u; UPD(0x0C062286u, 3);  /* 0C062284 mov.l @(disp,pc),Rn */
	IF(0x0C062286u); r4 = MACL;  /* 0C062286 sts macl,Rn */
	r6 += r4;  /* 0C062288 add Rm,Rn */
	r5 = R32(r6 + 0x1Cu); UPD(0x0C06228Cu, 3);  /* 0C06228A mov.l @(disp,Rm),Rn */
	r4 = r8;  /* 0C06228C mov Rm,Rn */
	UPD(0x0C06228Eu, 1);
L_0C06228E: BLKS(0x0C06228Eu);
	r1 = 0xC062100u; UPD(0x0C062290u, 1);  /* 0C06228E mov.l @(disp,pc),Rn */
L_0C062290: BLKS(0x0C062290u);
	r15 = r14;  /* 0C062290 mov Rm,Rn */
	IF(0x0C062292u); PR = R32(r15); r15 += 4; UPD(0x0C062294u, 2);  /* 0C062292 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C062296u, 1);  /* 0C062294 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C062298u, 1);  /* 0C062296 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C06229Au, 1);  /* 0C062298 mov.l @Rm+,Rn */
	IF(0x0C06229Au); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C062040u: goto L_0C062040; case 0x0C062100u: goto L_0C062100; default: JUMPD(tv_); } }  /* 0C06229A jmp @Rn */
L_0C0622A0: BLKS(0x0C0622A0u);
	r5 = 0x280u; UPD(0x0C0622A2u, 1);  /* 0C0622A0 mov.w @(disp,pc),Rn */
	IF(0x0C0622A2u); MACL = r8 * r5;  /* 0C0622A2 mul.l Rm,Rn */
	r4 = 0xC283794u; UPD(0x0C0622A6u, 3);  /* 0C0622A4 mov.l @(disp,pc),Rn */
	r10 = 0xC058060u; UPD(0x0C0622A8u, 1);  /* 0C0622A6 mov.l @(disp,pc),Rn */
	IF(0x0C0622A8u); r9 = MACL;  /* 0C0622A8 sts macl,Rn */
	r9 += r4;  /* 0C0622AA add Rm,Rn */
	r4 = 0x30u;  /* 0C0622AC mov #imm,Rn */
	IF(0x0C0622AEu); { u32 t_ = r10; PR = 0x0C0622B2u; r5 = R32(r9 + 0x18u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 5); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0622B2u); }  /* 0C0622AE jsr @Rn */
L_0C0622B2: BLKS(0x0C0622B2u);
	r6 = R32(r9 + 0x10u); UPD(0x0C0622B4u, 1);  /* 0C0622B2 mov.l @(disp,Rm),Rn */
	r2 = 0x1300000u; UPD(0x0C0622B6u, 1);  /* 0C0622B4 mov.l @(disp,pc),Rn */
	r6 += r0;  /* 0C0622B6 add Rm,Rn */
	T = (s32)r6 > (s32)r2;  /* 0C0622B8 cmp/gt Rm,Rn */
	{ u32 c_ = !T; W32(r9 + 0x10u, r6); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0622C0u, 5); goto L_0C0622C0; } UPD(0x0C0622BEu, 1); goto L_0C0622BE; }  /* 0C0622BA bf/s */
L_0C0622BE: BLKS(0x0C0622BEu);
	W32(r9 + 0x10u, r2); UPD(0x0C0622C0u, 1);  /* 0C0622BE mov.l Rm,@(disp,Rn) */
L_0C0622C0: BLKS(0x0C0622C0u);
	r5 = R32(r9 + 0x1Cu); UPD(0x0C0622C2u, 1);  /* 0C0622C0 mov.l @(disp,Rm),Rn */
	IF(0x0C0622C2u); { u32 t_ = r10; PR = 0x0C0622C6u; r4 = 0x30u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0622C6u); }  /* 0C0622C2 jsr @Rn */
L_0C0622C6: BLKS(0x0C0622C6u);
	r4 = r8;  /* 0C0622C6 mov Rm,Rn */
	{ r5 = r0; /* slot mov Rm,Rn */ UPD(0x0C06228Eu, 4); goto L_0C06228E; }  /* 0C0622C8 bra */
L_0C0622D0: BLKS(0x0C0622D0u);
	r5 = 0x280u; UPD(0x0C0622D2u, 1);  /* 0C0622D0 mov.w @(disp,pc),Rn */
	IF(0x0C0622D2u); MACL = r8 * r5;  /* 0C0622D2 mul.l Rm,Rn */
	r4 = 0xC283794u; UPD(0x0C0622D6u, 3);  /* 0C0622D4 mov.l @(disp,pc),Rn */
	r10 = 0xC058060u; UPD(0x0C0622D8u, 1);  /* 0C0622D6 mov.l @(disp,pc),Rn */
	IF(0x0C0622D8u); r9 = MACL;  /* 0C0622D8 sts macl,Rn */
	r9 += r4;  /* 0C0622DA add Rm,Rn */
	r4 = 0x30u;  /* 0C0622DC mov #imm,Rn */
	IF(0x0C0622DEu); { u32 t_ = r10; PR = 0x0C0622E2u; r5 = R32(r9 + 0x18u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 5); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0622E2u); }  /* 0C0622DE jsr @Rn */
L_0C0622E2: BLKS(0x0C0622E2u);
	r2 = R32(r9 + 0x10u); UPD(0x0C0622E4u, 1);  /* 0C0622E2 mov.l @(disp,Rm),Rn */
	r6 = 0xFFFFFu; UPD(0x0C0622E6u, 1);  /* 0C0622E4 mov.l @(disp,pc),Rn */
	r2 -= r0;  /* 0C0622E6 sub Rm,Rn */
	T = (s32)r2 > (s32)r6;  /* 0C0622E8 cmp/gt Rm,Rn */
	{ u32 c_ = T; W32(r9 + 0x10u, r2); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0622C0u, 5); goto L_0C0622C0; } UPD(0x0C0622EEu, 1); goto L_0C0622EE; }  /* 0C0622EA bt/s */
L_0C0622EE: BLKS(0x0C0622EEu);
	r7 = 0x100000u; UPD(0x0C0622F0u, 1);  /* 0C0622EE mov.l @(disp,pc),Rn */
	{ W32(r9 + 0x10u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C0622C0u, 3); goto L_0C0622C0; }  /* 0C0622F0 bra */
L_0C062300: BLKS(0x0C062300u);
	r3 = 0x280u; UPD(0x0C062302u, 1);  /* 0C062300 mov.w @(disp,pc),Rn */
	IF(0x0C062302u); MACL = r8 * r3;  /* 0C062302 mul.l Rm,Rn */
	r10 = 0xC283794u; UPD(0x0C062306u, 3);  /* 0C062304 mov.l @(disp,pc),Rn */
	IF(0x0C062306u); r3 = MACL;  /* 0C062306 sts macl,Rn */
	r3 += r10;  /* 0C062308 add Rm,Rn */
	r2 = R32(r3 + 0x8u); UPD(0x0C06230Cu, 3);  /* 0C06230A mov.l @(disp,Rm),Rn */
	r8 = 0x9u;  /* 0C06230C mov #imm,Rn */
	T = (s32)r2 > (s32)r8;  /* 0C06230E cmp/gt Rm,Rn */
	if (T) { UPD(0x0C06224Cu, 5); goto L_0C06224C; }  /* 0C062310 bt */
L_0C062312: BLKS(0x0C062312u);
	r9 = 0x4u;  /* 0C062312 mov #imm,Rn */
	T = (s32)r2 > (s32)r9;  /* 0C062314 cmp/gt Rm,Rn */
	if (T) { UPD(0x0C062320u, 5); goto L_0C062320; }  /* 0C062316 bt */
L_0C062318: BLKS(0x0C062318u);
	r2 += 0x1u;  /* 0C062318 add #imm,Rn */
	UPD(0x0C06231Au, 1);
L_0C06231A: BLKS(0x0C06231Au);
	{ W32(r3 + 0x8u, r2); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C06224Cu, 3); goto L_0C06224C; }  /* 0C06231A bra */
L_0C062320: BLKS(0x0C062320u);
	r0 = 0x5u;  /* 0C062320 mov #imm,Rn */
	T = (s32)r2 > (s32)r0;  /* 0C062322 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C06224Cu, 5); goto L_0C06224C; }  /* 0C062324 bf */
L_0C062326: BLKS(0x0C062326u);
	r2 += 0xFFFFFFFFu;  /* 0C062326 add #imm,Rn */
	{ IF(0x0C06232Au); ; /* slot nop */ UPD(0x0C06231Au, 4); goto L_0C06231A; }  /* 0C062328 bra */
L_0C062330: BLKS(0x0C062330u);
	r10 = 0x280u; UPD(0x0C062332u, 1);  /* 0C062330 mov.w @(disp,pc),Rn */
	r4 = r8;  /* 0C062332 mov Rm,Rn */
	IF(0x0C062334u); MACL = r8 * r10;  /* 0C062334 mul.l Rm,Rn */
	r7 = 0xC283794u; UPD(0x0C062338u, 4);  /* 0C062336 mov.l @(disp,pc),Rn */
	IF(0x0C062338u); r9 = MACL;  /* 0C062338 sts macl,Rn */
	r7 += r9;  /* 0C06233A add Rm,Rn */
	r5 = R32(r7 + 0x1Cu); UPD(0x0C06233Eu, 3);  /* 0C06233C mov.l @(disp,Rm),Rn */
L_0C06233E: BLKS(0x0C06233Eu);
	r1 = 0xC062040u; UPD(0x0C062340u, 1);  /* 0C06233E mov.l @(disp,pc),Rn */
	{ IF(0x0C062342u); ; /* slot nop */ UPD(0x0C062290u, 3); goto L_0C062290; }  /* 0C062340 bra */
L_0C062350: BLKS(0x0C062350u);
	r2 = 0x280u; UPD(0x0C062352u, 1);  /* 0C062350 mov.w @(disp,pc),Rn */
	r4 = 0x30u;  /* 0C062352 mov #imm,Rn */
	IF(0x0C062354u); MACL = r8 * r2;  /* 0C062354 mul.l Rm,Rn */
	r0 = 0xC283794u; UPD(0x0C062358u, 4);  /* 0C062356 mov.l @(disp,pc),Rn */
	r10 = 0xC058060u; UPD(0x0C06235Au, 1);  /* 0C062358 mov.l @(disp,pc),Rn */
	IF(0x0C06235Au); r9 = MACL;  /* 0C06235A sts macl,Rn */
	r9 += r0;  /* 0C06235C add Rm,Rn */
	IF(0x0C06235Eu); { u32 t_ = r10; PR = 0x0C062362u; r5 = R32(r9 + 0x18u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 4); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C062362u); }  /* 0C06235E jsr @Rn */
L_0C062362: BLKS(0x0C062362u);
	r3 = R32(r9 + 0x10u); UPD(0x0C062364u, 1);  /* 0C062362 mov.l @(disp,Rm),Rn */
	r2 = 0x1300000u; UPD(0x0C062366u, 1);  /* 0C062364 mov.l @(disp,pc),Rn */
	r3 += r0;  /* 0C062366 add Rm,Rn */
	T = (s32)r3 > (s32)r2;  /* 0C062368 cmp/gt Rm,Rn */
	{ u32 c_ = !T; W32(r9 + 0x10u, r3); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C062370u, 5); goto L_0C062370; } UPD(0x0C06236Eu, 1); goto L_0C06236E; }  /* 0C06236A bf/s */
L_0C06236E: BLKS(0x0C06236Eu);
	W32(r9 + 0x10u, r2); UPD(0x0C062370u, 1);  /* 0C06236E mov.l Rm,@(disp,Rn) */
L_0C062370: BLKS(0x0C062370u);
	r5 = R32(r9 + 0x1Cu); UPD(0x0C062372u, 1);  /* 0C062370 mov.l @(disp,Rm),Rn */
	IF(0x0C062372u); { u32 t_ = r10; PR = 0x0C062376u; r4 = 0x30u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C062376u); }  /* 0C062372 jsr @Rn */
L_0C062376: BLKS(0x0C062376u);
	r4 = r8;  /* 0C062376 mov Rm,Rn */
	{ r5 = r0; /* slot mov Rm,Rn */ UPD(0x0C06233Eu, 4); goto L_0C06233E; }  /* 0C062378 bra */
L_0C062380: BLKS(0x0C062380u);
	r9 = 0x280u; UPD(0x0C062382u, 1);  /* 0C062380 mov.w @(disp,pc),Rn */
	r4 = 0x30u;  /* 0C062382 mov #imm,Rn */
	IF(0x0C062384u); MACL = r8 * r9;  /* 0C062384 mul.l Rm,Rn */
	r10 = 0xC283794u; UPD(0x0C062388u, 4);  /* 0C062386 mov.l @(disp,pc),Rn */
	IF(0x0C062388u); r9 = MACL;  /* 0C062388 sts macl,Rn */
	r9 += r10;  /* 0C06238A add Rm,Rn */
	r10 = 0xC058060u; UPD(0x0C06238Eu, 3);  /* 0C06238C mov.l @(disp,pc),Rn */
	IF(0x0C06238Eu); { u32 t_ = r10; PR = 0x0C062392u; r5 = R32(r9 + 0x18u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C062392u); }  /* 0C06238E jsr @Rn */
L_0C062392: BLKS(0x0C062392u);
	r3 = R32(r9 + 0x10u); UPD(0x0C062394u, 1);  /* 0C062392 mov.l @(disp,Rm),Rn */
	r7 = 0xFFFFFu; UPD(0x0C062396u, 1);  /* 0C062394 mov.l @(disp,pc),Rn */
	r3 -= r0;  /* 0C062396 sub Rm,Rn */
	T = (s32)r3 > (s32)r7;  /* 0C062398 cmp/gt Rm,Rn */
	{ u32 c_ = T; W32(r9 + 0x10u, r3); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C062370u, 5); goto L_0C062370; } UPD(0x0C06239Eu, 1); goto L_0C06239E; }  /* 0C06239A bt/s */
L_0C06239E: BLKS(0x0C06239Eu);
	r0 = 0x100000u; UPD(0x0C0623A0u, 1);  /* 0C06239E mov.l @(disp,pc),Rn */
	{ W32(r9 + 0x10u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(0x0C062370u, 3); goto L_0C062370; }  /* 0C0623A0 bra */
}

/* FUN_0c0623d0 */
void f_0C0623D0(sh3_t *c)
{
	LOCALS;
L_0C0623D0: BLKS(0x0C0623D0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0623D2u, 1);  /* 0C0623D0 mov.l Rm,@-Rn */
	r3 = 0x0u;  /* 0C0623D2 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0623D6u, 2);  /* 0C0623D4 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0623D8u, 1);  /* 0C0623D6 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0623DAu, 1);  /* 0C0623D8 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0623DCu, 1);  /* 0C0623DA mov.l Rm,@-Rn */
	r7 = 0x280u; UPD(0x0C0623DEu, 1);  /* 0C0623DC mov.w @(disp,pc),Rn */
	r12 = (u32)(s32)(s16)r4;  /* 0C0623DE exts.w Rm,Rn */
	IF(0x0C0623E0u); MACL = r12 * r7;  /* 0C0623E0 mul.l Rm,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0623E4u, 4);  /* 0C0623E2 mov.l Rm,@-Rn */
	r6 = 0xC283794u; UPD(0x0C0623E6u, 1);  /* 0C0623E4 mov.l @(disp,pc),Rn */
	IF(0x0C0623E6u); r2 = MACL;  /* 0C0623E6 sts macl,Rn */
	r0 = 0x258u; UPD(0x0C0623EAu, 2);  /* 0C0623E8 mov.w @(disp,pc),Rn */
	r2 += r6;  /* 0C0623EA add Rm,Rn */
	IF(0x0C0623ECu); r15 -= 4; W32(r15, PR); UPD(0x0C0623EEu, 2);  /* 0C0623EC sts.l pr,@-Rn */
	r0 += r2;  /* 0C0623EE add Rm,Rn */
	W8(r0, r3); UPD(0x0C0623F2u, 2);  /* 0C0623F0 mov.b Rm,@Rn */
	r7 = 0x25Cu; UPD(0x0C0623F4u, 1);  /* 0C0623F2 mov.w @(disp,pc),Rn */
	r0 += 0x3u;  /* 0C0623F4 add #imm,Rn */
	r7 += r2;  /* 0C0623F6 add Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r7); UPD(0x0C0623FAu, 3);  /* 0C0623F8 mov.b @Rm,Rn */
	r5 = (u32)(s32)(s8)R8(r0); UPD(0x0C0623FCu, 1);  /* 0C0623FA mov.b @Rm,Rn */
	r4 = r3 & 0xFF;  /* 0C0623FC extu.b Rm,Rn */
	r0 = r5 & 0xFF;  /* 0C0623FE extu.b Rm,Rn */
	T = r4 >= r0;  /* 0C062400 cmp/hs Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C06240Cu, 6); goto L_0C06240C; } goto L_0C062406; }  /* 0C062402 bt/s */
L_0C062406: BLKS(0x0C062406u);
	r8 = r3;  /* 0C062406 mov Rm,Rn */
	r8 += 0x1u;  /* 0C062408 add #imm,Rn */
	W8(r7, r8); UPD(0x0C06240Cu, 4);  /* 0C06240A mov.b Rm,@Rn */
L_0C06240C: BLKS(0x0C06240Cu);
	r2 = r7;  /* 0C06240C mov Rm,Rn */
	r2 += 0x2u;  /* 0C06240E add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C062412u, 3);  /* 0C062410 mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C062412 tst Rm,Rn */
	{ u32 c_ = T; r1 += 0xFFFFFFFFu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C062424u, 4); goto L_0C062424; } goto L_0C062418; }  /* 0C062414 bt/s */
L_0C062418: BLKS(0x0C062418u);
	W8(r2, r1); UPD(0x0C06241Au, 2);  /* 0C062418 mov.b Rm,@Rn */
	r1 = r1 & 0xFF;  /* 0C06241A extu.b Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C06241C tst Rm,Rn */
	{ u32 c_ = !T; r7 += 0x1u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C062424u, 5); goto L_0C062424; } goto L_0C062422; }  /* 0C06241E bf/s */
L_0C062422: BLKS(0x0C062422u);
	W8(r7, r1); UPD(0x0C062424u, 2);  /* 0C062422 mov.b Rm,@Rn */
L_0C062424: BLKS(0x0C062424u);
	r9 = 0x280u; UPD(0x0C062426u, 1);  /* 0C062424 mov.w @(disp,pc),Rn */
	r11 = 0x10u;  /* 0C062426 mov #imm,Rn */
	IF(0x0C062428u); MACL = r12 * r9;  /* 0C062428 mul.l Rm,Rn */
	r10 = 0xC283794u; UPD(0x0C06242Cu, 4);  /* 0C06242A mov.l @(disp,pc),Rn */
	IF(0x0C06242Cu); r9 = MACL;  /* 0C06242C sts macl,Rn */
	r8 = 0x24Cu; UPD(0x0C062430u, 2);  /* 0C06242E mov.w @(disp,pc),Rn */
	r9 += r10;  /* 0C062430 add Rm,Rn */
	r8 += r9;  /* 0C062432 add Rm,Rn */
	r8 += 0x1u;  /* 0C062434 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r8); UPD(0x0C062438u, 4);  /* 0C062436 mov.b @Rm,Rn */
	r11 &= r1;  /* 0C062438 and Rm,Rn */
	T = (r11 & r11) == 0;  /* 0C06243A tst Rm,Rn */
	{ u32 c_ = !T; r8 += 0xFFFFFFFFu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C0624B0u, 5); goto L_0C0624B0; } goto L_0C062440; }  /* 0C06243C bf/s */
L_0C062440: BLKS(0x0C062440u);
	r3 = 0x258u; UPD(0x0C062442u, 2);  /* 0C062440 mov.w @(disp,pc),Rn */
	r4 = 0xFFFFFFFCu;  /* 0C062442 mov #imm,Rn */
	r3 += r9;  /* 0C062444 add Rm,Rn */
	r10 = r3;  /* 0C062446 mov Rm,Rn */
	r10 += 0x1u;  /* 0C062448 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r8); UPD(0x0C06244Cu, 5);  /* 0C06244A mov.b @Rm,Rn */
	r1 = 0xFFFFFFFFu;  /* 0C06244C mov #imm,Rn */
	r5 = (u32)(s32)(s8)R8(r10); UPD(0x0C062450u, 2);  /* 0C06244E mov.b @Rm,Rn */
	IF(0x0C062450u); ARG0(0x404Cu); { s32 s_ = (s32)r4; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = (u32)((s32)r0 >> 31); else r0 = (u32)((s32)r0 >> ((~s_ & 31) + 1)); }  /* 0C062450 shad Rm,Rn */
	T = (r5 & r5) == 0;  /* 0C062452 tst Rm,Rn */
	{ u32 t_ = 0u - r1, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r9 = r_; }  /* 0C062454 negc Rm,Rn */
	r0 &= 0x1u;  /* 0C062456 and #imm,r0 */
	r9 |= r0;  /* 0C062458 or Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C06245A tst Rm,Rn */
	if (T) { UPD(0x0C062476u, 9); goto L_0C062476; }  /* 0C06245C bt */
L_0C06245E: BLKS(0x0C06245Eu);
	r9 = r3;  /* 0C06245E mov Rm,Rn */
	r9 += 0x2u;  /* 0C062460 add #imm,Rn */
	r4 = (u32)(s32)(s8)R8(r9); UPD(0x0C062464u, 3);  /* 0C062462 mov.b @Rm,Rn */
	r3 += 0x3u;  /* 0C062464 add #imm,Rn */
	r7 = (u32)(s32)(s8)R8(r3); UPD(0x0C062468u, 2);  /* 0C062466 mov.b @Rm,Rn */
	r4 += 0x1u;  /* 0C062468 add #imm,Rn */
	r6 = r4 & 0xFF;  /* 0C06246A extu.b Rm,Rn */
	r0 = r7 & 0xFF;  /* 0C06246C extu.b Rm,Rn */
	W8(r9, r4); UPD(0x0C062470u, 4);  /* 0C06246E mov.b Rm,@Rn */
	T = r6 >= r0;  /* 0C062470 cmp/hs Rm,Rn */
	{ u32 c_ = T; r3 += 0xFFFFFFFDu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C062490u, 4); goto L_0C062490; } UPD(0x0C062476u, 1); goto L_0C062476; }  /* 0C062472 bt/s */
L_0C062476: BLKS(0x0C062476u);
	r15 = r14;  /* 0C062476 mov Rm,Rn */
	IF(0x0C062478u); PR = R32(r15); r15 += 4; UPD(0x0C06247Au, 2);  /* 0C062478 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C06247Cu, 1);  /* 0C06247A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06247Eu, 1);  /* 0C06247C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C062480u, 1);  /* 0C06247E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C062482u, 1);  /* 0C062480 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C062484u, 1);  /* 0C062482 mov.l @Rm+,Rn */
	IF(0x0C062484u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C062484 rts */
L_0C062490: BLKS(0x0C062490u);
	r2 = 0x1u;  /* 0C062490 mov #imm,Rn */
	W8(r3, r2); UPD(0x0C062494u, 2);  /* 0C062492 mov.b Rm,@Rn */
	r3 = 0xC0627D0u; UPD(0x0C062496u, 1);  /* 0C062494 mov.l @(disp,pc),Rn */
	IF(0x0C062496u); { u32 t_ = r3; PR = 0x0C06249Au; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0627D0, 0x0C0627D0u, 0x0C06249Au); }  /* 0C062496 jsr @Rn */
L_0C06249A: BLKS(0x0C06249Au);
	r0 = (u32)(s32)(s8)R8(r8); UPD(0x0C06249Cu, 1);  /* 0C06249A mov.b @Rm,Rn */
	r1 = 0x2u;  /* 0C06249C mov #imm,Rn */
	r0 &= 0x10u;  /* 0C06249E and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0624A0 tst Rm,Rn */
	{ u32 c_ = !T; W8(r9, r11); /* slot mov.b Rm,@Rn */ if (c_) { UPD(0x0C0624AAu, 6); goto L_0C0624AA; } UPD(0x0C0624A6u, 1); goto L_0C0624A6; }  /* 0C0624A2 bf/s */
L_0C0624A6: BLKS(0x0C0624A6u);
	r1 = (u32)(s32)(s8)R8(r10); UPD(0x0C0624A8u, 1);  /* 0C0624A6 mov.b @Rm,Rn */
	r1 += 0xFFFFFFFFu;  /* 0C0624A8 add #imm,Rn */
	UPD(0x0C0624AAu, 1);
L_0C0624AA: BLKS(0x0C0624AAu);
	{ W8(r10, r1); /* slot mov.b Rm,@Rn */ UPD(0x0C062476u, 3); goto L_0C062476; }  /* 0C0624AA bra */
L_0C0624B0: BLKS(0x0C0624B0u);
	r8 = 0x258u; UPD(0x0C0624B2u, 1);  /* 0C0624B0 mov.w @(disp,pc),Rn */
	r3 = 0x1u;  /* 0C0624B2 mov #imm,Rn */
	r8 += r9;  /* 0C0624B4 add Rm,Rn */
	r2 = 0xC0627D0u; UPD(0x0C0624B8u, 3);  /* 0C0624B6 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C0624B8 mov Rm,Rn */
	W8(r8, r3); UPD(0x0C0624BCu, 2);  /* 0C0624BA mov.b Rm,@Rn */
	IF(0x0C0624BCu); { u32 t_ = r2; PR = 0x0C0624C0u; r10 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0627D0, 0x0C0627D0u, 0x0C0624C0u); }  /* 0C0624BC jsr @Rn */
L_0C0624C0: BLKS(0x0C0624C0u);
	r8 += 0x2u;  /* 0C0624C0 add #imm,Rn */
	r11 = 0xC060350u; UPD(0x0C0624C4u, 2);  /* 0C0624C2 mov.l @(disp,pc),Rn */
	r0 = 0x2u;  /* 0C0624C4 mov #imm,Rn */
	W8(r8, r10); UPD(0x0C0624C8u, 2);  /* 0C0624C6 mov.b Rm,@Rn */
	r4 = 0x10u;  /* 0C0624C8 mov #imm,Rn */
	IF(0x0C0624CAu); { u32 t_ = r11; PR = 0x0C0624CEu; { u32 v_ = r0; r8 -= 1; W8(r8, v_); } /* slot mov.b Rm,@-Rn */ UPD(t_, 3); CALLP(t_, f_0C060350, 0x0C060350u, 0x0C0624CEu); }  /* 0C0624CA jsr @Rn */
L_0C0624CE: BLKS(0x0C0624CEu);
	r3 = 0x25Cu; UPD(0x0C0624D0u, 1);  /* 0C0624CE mov.w @(disp,pc),Rn */
	r8 += 0x2u;  /* 0C0624D0 add #imm,Rn */
	r3 += r9;  /* 0C0624D2 add Rm,Rn */
	r5 = (u32)(s32)(s8)R8(r3); UPD(0x0C0624D6u, 3);  /* 0C0624D4 mov.b @Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r8); UPD(0x0C0624D8u, 1);  /* 0C0624D6 mov.b @Rm,Rn */
	r4 = r5 & 0xFF;  /* 0C0624D8 extu.b Rm,Rn */
	r11 = r6 & 0xFF;  /* 0C0624DA extu.b Rm,Rn */
	T = r4 >= r11;  /* 0C0624DC cmp/hs Rm,Rn */
	if (T) { UPD(0x0C062510u, 6); goto L_0C062510; }  /* 0C0624DE bt */
L_0C0624E0: BLKS(0x0C0624E0u);
	r7 = r3;  /* 0C0624E0 mov Rm,Rn */
	r7 += 0x1u;  /* 0C0624E2 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r7); UPD(0x0C0624E6u, 3);  /* 0C0624E4 mov.b @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C0624E6 tst Rm,Rn */
	if (!T) { UPD(0x0C062530u, 4); goto L_0C062530; }  /* 0C0624E8 bf */
L_0C0624EA: BLKS(0x0C0624EAu);
	r3 += 0x2u;  /* 0C0624EA add #imm,Rn */
	r9 = 0x78u;  /* 0C0624EC mov #imm,Rn */
	W8(r3, r9); UPD(0x0C0624F0u, 3);  /* 0C0624EE mov.b Rm,@Rn */
L_0C0624F0: BLKS(0x0C0624F0u);
	r0 += 0x1u;  /* 0C0624F0 add #imm,Rn */
	W8(r7, r0); UPD(0x0C0624F4u, 2);  /* 0C0624F2 mov.b Rm,@Rn */
	r11 = 0xFFFFFFFFu;  /* 0C0624F4 mov #imm,Rn */
	r0 = r0 & 0xFF;  /* 0C0624F6 extu.b Rm,Rn */
	T = r0 == 0x2u;  /* 0C0624F8 cmp/eq #imm,r0 */
	r0 = (u32)(s32)(s8)R8(r3); UPD(0x0C0624FCu, 4);  /* 0C0624FA mov.b @Rm,Rn */
	IF(0x0C0624FCu); r5 = T;  /* 0C0624FC movt Rn */
	T = (r0 & r0) == 0;  /* 0C0624FE tst Rm,Rn */
	{ u32 t_ = 0u - r11, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r4 = r_; }  /* 0C062500 negc Rm,Rn */
	r4 &= r5;  /* 0C062502 and Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C062504 tst Rm,Rn */
	if (T) { UPD(0x0C062510u, 8); goto L_0C062510; }  /* 0C062506 bt */
L_0C062508: BLKS(0x0C062508u);
	r2 = r6;  /* 0C062508 mov Rm,Rn */
	r2 += 0xFFFFFFFFu;  /* 0C06250A add #imm,Rn */
	W8(r8, r2); UPD(0x0C06250Eu, 3);  /* 0C06250C mov.b Rm,@Rn */
	W8(r7, r10); UPD(0x0C062510u, 1);  /* 0C06250E mov.b Rm,@Rn */
L_0C062510: BLKS(0x0C062510u);
	r8 = 0x280u; UPD(0x0C062512u, 1);  /* 0C062510 mov.w @(disp,pc),Rn */
	IF(0x0C062512u); MACL = r12 * r8;  /* 0C062512 mul.l Rm,Rn */
	r6 = 0xC283794u; UPD(0x0C062516u, 3);  /* 0C062514 mov.l @(disp,pc),Rn */
	IF(0x0C062516u); r7 = MACL;  /* 0C062516 sts macl,Rn */
	r0 = 0x25Cu; UPD(0x0C06251Au, 2);  /* 0C062518 mov.w @(disp,pc),Rn */
	r6 += r7;  /* 0C06251A add Rm,Rn */
	r12 = 0x0u;  /* 0C06251C mov #imm,Rn */
	{ IF(0x0C062520u); W8(r0 + r6, r12); /* slot mov.b Rm,@(r0,Rn) */ UPD(0x0C062476u, 5); goto L_0C062476; }  /* 0C06251E bra */
L_0C062530: BLKS(0x0C062530u);
	{ r3 += 0x2u; /* slot add #imm,Rn */ UPD(0x0C0624F0u, 3); goto L_0C0624F0; }  /* 0C062530 bra */
}

/* FUN_0c062550 */
void f_0C062550(sh3_t *c)
{
	LOCALS;
L_0C062550: BLKS(0x0C062550u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C062552u, 1);  /* 0C062550 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C062554u, 1);  /* 0C062552 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C062556u, 1);  /* 0C062554 mov.l Rm,@-Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C062556 exts.w Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C06255Au, 2);  /* 0C062558 mov.l Rm,@-Rn */
	r2 = 0x280u; UPD(0x0C06255Cu, 1);  /* 0C06255A mov.w @(disp,pc),Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C06255Eu, 1);  /* 0C06255C mov.l Rm,@-Rn */
	IF(0x0C06255Eu); MACL = r9 * r2;  /* 0C06255E mul.l Rm,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C062562u, 3);  /* 0C062560 mov.l Rm,@-Rn */
	r0 = 0xC283794u; UPD(0x0C062564u, 1);  /* 0C062562 mov.l @(disp,pc),Rn */
	IF(0x0C062564u); r3 = MACL;  /* 0C062564 sts macl,Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C062568u, 2);  /* 0C062566 mov.l Rm,@-Rn */
	r3 += r0;  /* 0C062568 add Rm,Rn */
	r7 = 0x261u; UPD(0x0C06256Cu, 2);  /* 0C06256A mov.w @(disp,pc),Rn */
	r0 = 0xFu;  /* 0C06256C mov #imm,Rn */
	IF(0x0C06256Eu); r15 -= 4; W32(r15, PR); UPD(0x0C062570u, 2);  /* 0C06256E sts.l pr,@-Rn */
	r7 += r3;  /* 0C062570 add Rm,Rn */
	r6 = (u32)(s32)(s8)R8(r7); UPD(0x0C062574u, 2);  /* 0C062572 mov.b @Rm,Rn */
	T = r6 > r0;  /* 0C062574 cmp/hi Rm,Rn */
	{ u32 c_ = T; r14 = r15; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C0625D4u, 4); goto L_0C0625D4; } goto L_0C06257A; }  /* 0C062576 bt/s */
L_0C06257A: BLKS(0x0C06257Au);
	r10 = 0x254u; UPD(0x0C06257Cu, 2);  /* 0C06257A mov.w @(disp,pc),Rn */
	r10 += r3;  /* 0C06257C add Rm,Rn */
	r8 = r10;  /* 0C06257E mov Rm,Rn */
	r8 += 0x3u;  /* 0C062580 add #imm,Rn */
	r10 += 0x2u;  /* 0C062582 add #imm,Rn */
	r4 = (u32)(s32)(s8)R8(r10); UPD(0x0C062586u, 5);  /* 0C062584 mov.b @Rm,Rn */
	r5 = (u32)(s32)(s8)R8(r8); UPD(0x0C062588u, 1);  /* 0C062586 mov.b @Rm,Rn */
	r4 |= r5;  /* 0C062588 or Rm,Rn */
	T = (r4 & r4) == 0;  /* 0C06258A tst Rm,Rn */
	if (T) { UPD(0x0C0625D4u, 5); goto L_0C0625D4; }  /* 0C06258C bt */
L_0C06258E: BLKS(0x0C06258Eu);
	r0 = 0x24Cu; UPD(0x0C062590u, 1);  /* 0C06258E mov.w @(disp,pc),Rn */
	IF(0x0C062590u); r0 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C062592u, 1);  /* 0C062590 mov.b @(r0,Rm),Rn */
	r0 &= 0x20u;  /* 0C062592 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C062594 tst Rm,Rn */
	if (!T) { UPD(0x0C06259Eu, 5); goto L_0C06259E; }  /* 0C062596 bf */
L_0C062598: BLKS(0x0C062598u);
	W8(r7, r0); UPD(0x0C06259Au, 1);  /* 0C062598 mov.b Rm,@Rn */
	{ IF(0x0C06259Cu); ; /* slot nop */ UPD(0x0C0625A4u, 3); goto L_0C0625A4; }  /* 0C06259A bra */
L_0C06259E: BLKS(0x0C06259Eu);
	r3 = r6;  /* 0C06259E mov Rm,Rn */
	r3 += 0x1u;  /* 0C0625A0 add #imm,Rn */
	W8(r7, r3); UPD(0x0C0625A4u, 3);  /* 0C0625A2 mov.b Rm,@Rn */
L_0C0625A4: BLKS(0x0C0625A4u);
	r11 = 0x280u; UPD(0x0C0625A6u, 1);  /* 0C0625A4 mov.w @(disp,pc),Rn */
	r8 = 0x1u;  /* 0C0625A6 mov #imm,Rn */
	IF(0x0C0625A8u); MACL = r9 * r11;  /* 0C0625A8 mul.l Rm,Rn */
	r5 = 0xC283794u; UPD(0x0C0625ACu, 4);  /* 0C0625AA mov.l @(disp,pc),Rn */
	r13 = 0x1u;  /* 0C0625AC mov #imm,Rn */
	IF(0x0C0625AEu); r11 = MACL;  /* 0C0625AE sts macl,Rn */
	r11 += r5;  /* 0C0625B0 add Rm,Rn */
	r2 = 0x24Fu; UPD(0x0C0625B4u, 4);  /* 0C0625B2 mov.w @(disp,pc),Rn */
	r0 = r11;  /* 0C0625B4 mov Rm,Rn */
	r10 = 0x261u; UPD(0x0C0625B8u, 2);  /* 0C0625B6 mov.w @(disp,pc),Rn */
	IF(0x0C0625B8u); r4 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C0625BAu, 1);  /* 0C0625B8 mov.b @(r0,Rm),Rn */
	r10 += r11;  /* 0C0625BA add Rm,Rn */
	r12 = (u32)(s32)(s8)R8(r10); UPD(0x0C0625BEu, 2);  /* 0C0625BC mov.b @Rm,Rn */
	r0 = 0xFFFFFFFBu;  /* 0C0625BE mov #imm,Rn */
	r7 = r12 & 0xFF;  /* 0C0625C0 extu.b Rm,Rn */
	IF(0x0C0625C2u); ARG0(0x440Cu); { s32 s_ = (s32)r0; if (s_ >= 0) r4 <<= (s_ & 31); else if ((s_ & 31) == 0) r4 = (u32)((s32)r4 >> 31); else r4 = (u32)((s32)r4 >> ((~s_ & 31) + 1)); }  /* 0C0625C2 shad Rm,Rn */
	r12 = 0xFu;  /* 0C0625C4 mov #imm,Rn */
	T = r12 >= r7;  /* 0C0625C6 cmp/hs Rm,Rn */
	r8 ^= r4;  /* 0C0625C8 xor Rm,Rn */
	IF(0x0C0625CAu); r6 = T;  /* 0C0625CA movt Rn */
	r8 &= r13;  /* 0C0625CC and Rm,Rn */
	r8 &= r6;  /* 0C0625CE and Rm,Rn */
	T = (r8 & r8) == 0;  /* 0C0625D0 tst Rm,Rn */
	if (T) { UPD(0x0C0625F0u, 13); goto L_0C0625F0; }  /* 0C0625D2 bt */
L_0C0625D4: BLKS(0x0C0625D4u);
	r15 = r14;  /* 0C0625D4 mov Rm,Rn */
	IF(0x0C0625D6u); PR = R32(r15); r15 += 4; UPD(0x0C0625D8u, 2);  /* 0C0625D6 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0625DAu, 1);  /* 0C0625D8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0625DCu, 1);  /* 0C0625DA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0625DEu, 1);  /* 0C0625DC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0625E0u, 1);  /* 0C0625DE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0625E2u, 1);  /* 0C0625E0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0625E4u, 1);  /* 0C0625E2 mov.l @Rm+,Rn */
	IF(0x0C0625E4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C0625E4 rts */
L_0C0625F0: BLKS(0x0C0625F0u);
	r6 = 0xC060350u; UPD(0x0C0625F2u, 1);  /* 0C0625F0 mov.l @(disp,pc),Rn */
	r4 = 0x1000u; UPD(0x0C0625F4u, 1);  /* 0C0625F2 mov.w @(disp,pc),Rn */
	IF(0x0C0625F4u); { u32 t_ = r6; PR = 0x0C0625F8u; IF(0x0C0625F6u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C060350, 0x0C060350u, 0x0C0625F8u); }  /* 0C0625F4 jsr @Rn */
L_0C0625F8: BLKS(0x0C0625F8u);
	r3 = (u32)(s32)(s8)R8(r10); UPD(0x0C0625FAu, 1);  /* 0C0625F8 mov.b @Rm,Rn */
	r13 = 0x254u; UPD(0x0C0625FCu, 1);  /* 0C0625FA mov.w @(disp,pc),Rn */
	r10 = r3 & 0xFF;  /* 0C0625FC extu.b Rm,Rn */
	T = r12 >= r10;  /* 0C0625FE cmp/hs Rm,Rn */
	r13 += r11;  /* 0C062600 add Rm,Rn */
	r12 = r13;  /* 0C062602 mov Rm,Rn */
	r12 += 0x2u;  /* 0C062604 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r12); UPD(0x0C062608u, 6);  /* 0C062606 mov.b @Rm,Rn */
	IF(0x0C062608u); r10 = T;  /* 0C062608 movt Rn */
	r7 = r1 & 0xFF;  /* 0C06260A extu.b Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C06260C tst Rm,Rn */
	IF(0x0C06260Eu); r2 = T;  /* 0C06260E movt Rn */
	r10 |= r2;  /* 0C062610 or Rm,Rn */
	T = (r10 & r10) == 0;  /* 0C062612 tst Rm,Rn */
	{ u32 c_ = !T; IF(0x0C062616u); T = (s32)r2 > 0; /* slot cmp/pl Rn */ if (c_) { UPD(0x0C06261Cu, 9); goto L_0C06261C; } goto L_0C062618; }  /* 0C062614 bf/s */
L_0C062618: BLKS(0x0C062618u);
	{ IF(0x0C06261Au); ; /* slot nop */ UPD(0x0C062760u, 4); goto L_0C062760; }  /* 0C062618 bra */
L_0C06261C: BLKS(0x0C06261Cu);
	{ u32 c_ = !T; r3 = r13; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C062624u, 3); goto L_0C062624; } goto L_0C062620; }  /* 0C06261C bf/s */
L_0C062620: BLKS(0x0C062620u);
	{ r5 = r13; /* slot mov Rm,Rn */ UPD(0x0C062740u, 4); goto L_0C062740; }  /* 0C062620 bra */
L_0C062624: BLKS(0x0C062624u);
	r3 += 0x3u;  /* 0C062624 add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r3); UPD(0x0C062628u, 2);  /* 0C062626 mov.b @Rm,Rn */
	T = r0 == 0x28u;  /* 0C062628 cmp/eq #imm,r0 */
	{ u32 c_ = !T; r1 += 0xFFFFFFFFu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C062632u, 4); goto L_0C062632; } goto L_0C06262E; }  /* 0C06262A bf/s */
L_0C06262E: BLKS(0x0C06262Eu);
	{ W8(r3, r8); /* slot mov.b Rm,@Rn */ UPD(0x0C062730u, 4); goto L_0C062730; }  /* 0C06262E bra */
L_0C062632: BLKS(0x0C062632u);
	W8(r12, r1); UPD(0x0C062634u, 1);  /* 0C062632 mov.b Rm,@Rn */
L_0C062634: BLKS(0x0C062634u);
	r4 = 0x280u; UPD(0x0C062636u, 1);  /* 0C062634 mov.w @(disp,pc),Rn */
	r12 = 0x28u;  /* 0C062636 mov #imm,Rn */
	IF(0x0C062638u); MACL = r9 * r4;  /* 0C062638 mul.l Rm,Rn */
	r7 = 0xC283794u; UPD(0x0C06263Cu, 4);  /* 0C06263A mov.l @(disp,pc),Rn */
	IF(0x0C06263Cu); r13 = MACL;  /* 0C06263C sts macl,Rn */
	r0 = 0x25Fu; UPD(0x0C062640u, 2);  /* 0C06263E mov.w @(disp,pc),Rn */
	r7 += r13;  /* 0C062640 add Rm,Rn */
	r8 = 0xC060350u; UPD(0x0C062644u, 2);  /* 0C062642 mov.l @(disp,pc),Rn */
	r4 = 0x1000u; UPD(0x0C062646u, 1);  /* 0C062644 mov.w @(disp,pc),Rn */
	IF(0x0C062646u); { u32 t_ = r8; PR = 0x0C06264Au; IF(0x0C062648u); W8(r0 + r7, r12); /* slot mov.b Rm,@(r0,Rn) */ UPD(t_, 2); CALLP(t_, f_0C060350, 0x0C060350u, 0x0C06264Au); }  /* 0C062646 jsr @Rn */
L_0C06264A: BLKS(0x0C06264Au);
	r2 = 0x280u; UPD(0x0C06264Cu, 1);  /* 0C06264A mov.w @(disp,pc),Rn */
	r13 = 0x0u;  /* 0C06264C mov #imm,Rn */
	IF(0x0C06264Eu); MACL = r9 * r2;  /* 0C06264E mul.l Rm,Rn */
	r4 = 0xC283794u; UPD(0x0C062652u, 4);  /* 0C062650 mov.l @(disp,pc),Rn */
	IF(0x0C062652u); r11 = MACL;  /* 0C062652 sts macl,Rn */
	r12 = 0xC06A560u; UPD(0x0C062656u, 2);  /* 0C062654 mov.l @(disp,pc),Rn */
	r11 += r4;  /* 0C062656 add Rm,Rn */
	r7 = 0x261u; UPD(0x0C06265Au, 2);  /* 0C062658 mov.w @(disp,pc),Rn */
	r0 = r11;  /* 0C06265A mov Rm,Rn */
	IF(0x0C06265Cu); W8(r0 + r7, r13); UPD(0x0C06265Eu, 2);  /* 0C06265C mov.b Rm,@(r0,Rn) */
	IF(0x0C06265Eu); { u32 t_ = r12; PR = 0x0C062662u; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C06A560, 0x0C06A560u, 0x0C062662u); }  /* 0C06265E jsr @Rn */
L_0C062662: BLKS(0x0C062662u);
	r6 = 0xC16BF4Cu; UPD(0x0C062664u, 1);  /* 0C062662 mov.l @(disp,pc),Rn */
	r8 = 0xC0AFC10u; UPD(0x0C062666u, 1);  /* 0C062664 mov.l @(disp,pc),Rn */
	r0 = r6;  /* 0C062666 mov Rm,Rn */
	IF(0x0C062668u); r3 = (u32)(s32)(s8)R8(r0 + r9); UPD(0x0C06266Au, 2);  /* 0C062668 mov.b @(r0,Rm),Rn */
	IF(0x0C06266Au); { u32 t_ = r8; PR = 0x0C06266Eu; r4 = r3 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0AFC10, 0x0C0AFC10u, 0x0C06266Eu); }  /* 0C06266A jsr @Rn */
L_0C06266E: BLKS(0x0C06266Eu);
	r2 = R32(r11 + 0x4u); UPD(0x0C062670u, 1);  /* 0C06266E mov.l @(disp,Rm),Rn */
	r0 = 0x7u;  /* 0C062670 mov #imm,Rn */
	T = r2 > r0;  /* 0C062672 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C0625D4u, 5); goto L_0C0625D4; }  /* 0C062674 bt */
L_0C062676: BLKS(0x0C062676u);
	r0 = 0xC0626A4u;  /* 0C062676 mova @(disp,pc),r0 */
	IF(0x0C062678u); r5 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C06267Au, 2);  /* 0C062678 mov.b @(r0,Rm),Rn */
	r5 = r5 & 0xFF;  /* 0C06267A extu.b Rm,Rn */
	IF(0x0C06267Cu); { u32 tv_ = (r5 + 0x0C062680u); u32 t_ = PHYS(tv_); IF(0x0C06267Eu); ; /* slot nop */ JRGN(tv_); UPD(t_, 4); switch (t_) { case 0x0C0626B0u: goto L_0C0626B0; case 0x0C0626D0u: goto L_0C0626D0; case 0x0C0626E0u: goto L_0C0626E0; case 0x0C0626F0u: goto L_0C0626F0; case 0x0C062700u: goto L_0C062700; case 0x0C062710u: goto L_0C062710; case 0x0C062720u: goto L_0C062720; default: JUMPD(tv_); } }  /* 0C06267C braf Rn */
L_0C0626B0: BLKS(0x0C0626B0u);
	r1 = 0xC069710u; UPD(0x0C0626B2u, 1);  /* 0C0626B0 mov.l @(disp,pc),Rn */
	r4 = r9;  /* 0C0626B2 mov Rm,Rn */
	UPD(0x0C0626B4u, 1);
L_0C0626B4: BLKS(0x0C0626B4u);
	r15 = r14;  /* 0C0626B4 mov Rm,Rn */
	IF(0x0C0626B6u); PR = R32(r15); r15 += 4; UPD(0x0C0626B8u, 2);  /* 0C0626B6 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0626BAu, 1);  /* 0C0626B8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0626BCu, 1);  /* 0C0626BA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0626BEu, 1);  /* 0C0626BC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0626C0u, 1);  /* 0C0626BE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0626C2u, 1);  /* 0C0626C0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C0626C4u, 1);  /* 0C0626C2 mov.l @Rm+,Rn */
	IF(0x0C0626C4u); { u32 tv_ = r1; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C068570u: TAIL(f_0C068570); case 0x0C069060u: TAIL(f_0C069060); case 0x0C0691E0u: TAIL(f_0C0691E0); case 0x0C069370u: TAIL(f_0C069370); case 0x0C069710u: TAIL(f_0C069710); case 0x0C069880u: TAIL(f_0C069880); case 0x0C0699F0u: TAIL(f_0C0699F0); case 0x0C06A560u: TAIL(f_0C06A560); default: JUMPD(tv_); } }  /* 0C0626C4 jmp @Rn */
L_0C0626D0: BLKS(0x0C0626D0u);
	r1 = 0xC069880u; UPD(0x0C0626D2u, 1);  /* 0C0626D0 mov.l @(disp,pc),Rn */
	{ r4 = r9; /* slot mov Rm,Rn */ UPD(0x0C0626B4u, 3); goto L_0C0626B4; }  /* 0C0626D2 bra */
L_0C0626E0: BLKS(0x0C0626E0u);
	r1 = 0xC0699F0u; UPD(0x0C0626E2u, 1);  /* 0C0626E0 mov.l @(disp,pc),Rn */
	{ r4 = r9; /* slot mov Rm,Rn */ UPD(0x0C0626B4u, 3); goto L_0C0626B4; }  /* 0C0626E2 bra */
L_0C0626F0: BLKS(0x0C0626F0u);
	r1 = 0xC0691E0u; UPD(0x0C0626F2u, 1);  /* 0C0626F0 mov.l @(disp,pc),Rn */
	{ r4 = r9; /* slot mov Rm,Rn */ UPD(0x0C0626B4u, 3); goto L_0C0626B4; }  /* 0C0626F2 bra */
L_0C062700: BLKS(0x0C062700u);
	r1 = 0xC069370u; UPD(0x0C062702u, 1);  /* 0C062700 mov.l @(disp,pc),Rn */
	{ r4 = r9; /* slot mov Rm,Rn */ UPD(0x0C0626B4u, 3); goto L_0C0626B4; }  /* 0C062702 bra */
L_0C062710: BLKS(0x0C062710u);
	r1 = 0xC069060u; UPD(0x0C062712u, 1);  /* 0C062710 mov.l @(disp,pc),Rn */
	{ r4 = r9; /* slot mov Rm,Rn */ UPD(0x0C0626B4u, 3); goto L_0C0626B4; }  /* 0C062712 bra */
L_0C062720: BLKS(0x0C062720u);
	r1 = 0xC068570u; UPD(0x0C062722u, 1);  /* 0C062720 mov.l @(disp,pc),Rn */
	{ r4 = r9; /* slot mov Rm,Rn */ UPD(0x0C0626B4u, 3); goto L_0C0626B4; }  /* 0C062722 bra */
L_0C062730: BLKS(0x0C062730u);
	{ IF(0x0C062732u); ; /* slot nop */ UPD(0x0C062634u, 3); goto L_0C062634; }  /* 0C062730 bra */
L_0C062740: BLKS(0x0C062740u);
	r5 += 0x3u;  /* 0C062740 add #imm,Rn */
	r2 = 0xC060350u; UPD(0x0C062744u, 2);  /* 0C062742 mov.l @(disp,pc),Rn */
	r0 = r11;  /* 0C062744 mov Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r5); UPD(0x0C062748u, 2);  /* 0C062746 mov.b @Rm,Rn */
	r10 = 0x25Fu; UPD(0x0C06274Au, 1);  /* 0C062748 mov.w @(disp,pc),Rn */
	W8(r5, r7); UPD(0x0C06274Cu, 1);  /* 0C06274A mov.b Rm,@Rn */
	r4 = 0x4000u; UPD(0x0C06274Eu, 1);  /* 0C06274C mov.w @(disp,pc),Rn */
	IF(0x0C06274Eu); { u32 t_ = r2; PR = 0x0C062752u; IF(0x0C062750u); W8(r0 + r10, r1); /* slot mov.b Rm,@(r0,Rn) */ UPD(t_, 2); CALLP(t_, f_0C060350, 0x0C060350u, 0x0C062752u); }  /* 0C06274E jsr @Rn */
L_0C062752: BLKS(0x0C062752u);
	{ IF(0x0C062754u); ; /* slot nop */ UPD(0x0C06264Au, 3); goto L_0C06264A; }  /* 0C062752 bra */
L_0C062760: BLKS(0x0C062760u);
	r11 = 0xC060350u; UPD(0x0C062762u, 1);  /* 0C062760 mov.l @(disp,pc),Rn */
	r4 = 0x10000u; UPD(0x0C062764u, 1);  /* 0C062762 mov.l @(disp,pc),Rn */
	IF(0x0C062764u); { u32 t_ = r11; PR = 0x0C062768u; IF(0x0C062766u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C060350, 0x0C060350u, 0x0C062768u); }  /* 0C062764 jsr @Rn */
L_0C062768: BLKS(0x0C062768u);
	r3 = r13;  /* 0C062768 mov Rm,Rn */
	r3 += 0x3u;  /* 0C06276A add #imm,Rn */
	r0 = (u32)(s32)(s8)R8(r3); UPD(0x0C06276Eu, 3);  /* 0C06276C mov.b @Rm,Rn */
	T = r0 == 0x28u;  /* 0C06276E cmp/eq #imm,r0 */
	if (T) { UPD(0x0C062790u, 4); goto L_0C062790; }  /* 0C062770 bt */
L_0C062772: BLKS(0x0C062772u);
	r10 = (u32)(s32)(s8)R8(r12); UPD(0x0C062774u, 1);  /* 0C062772 mov.b @Rm,Rn */
	r10 += 0xFFFFFFFFu;  /* 0C062774 add #imm,Rn */
	W8(r12, r10); UPD(0x0C062778u, 2);  /* 0C062776 mov.b Rm,@Rn */
L_0C062778: BLKS(0x0C062778u);
	r8 = 0xC067DC0u; UPD(0x0C06277Au, 1);  /* 0C062778 mov.l @(disp,pc),Rn */
	IF(0x0C06277Au); { u32 t_ = r8; PR = 0x0C06277Eu; r4 = r9; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C067DC0, 0x0C067DC0u, 0x0C06277Eu); }  /* 0C06277A jsr @Rn */
L_0C06277E: BLKS(0x0C06277Eu);
	r1 = 0xC06A560u; UPD(0x0C062780u, 1);  /* 0C06277E mov.l @(disp,pc),Rn */
	{ r4 = r9; /* slot mov Rm,Rn */ UPD(0x0C0626B4u, 3); goto L_0C0626B4; }  /* 0C062780 bra */
L_0C062790: BLKS(0x0C062790u);
	{ W8(r3, r10); /* slot mov.b Rm,@Rn */ UPD(0x0C062778u, 3); goto L_0C062778; }  /* 0C062790 bra */
}

/* FUN_0c0627d0 */
void f_0C0627D0(sh3_t *c)
{
	LOCALS;
L_0C0627D0: BLKS(0x0C0627D0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C0627D2u, 1);  /* 0C0627D0 mov.l Rm,@-Rn */
	r2 = (u32)(s32)(s16)r4;  /* 0C0627D2 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C0627D6u, 2);  /* 0C0627D4 mov.l Rm,@-Rn */
	r3 = 0xFFFFFFFFu;  /* 0C0627D6 mov #imm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C0627DAu, 2);  /* 0C0627D8 mov.l Rm,@-Rn */
	r6 = 0xAu;  /* 0C0627DA mov #imm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C0627DEu, 2);  /* 0C0627DC mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C0627E0u, 1);  /* 0C0627DE mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C0627E2u, 1);  /* 0C0627E0 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0627E4u, 1);  /* 0C0627E2 mov.l Rm,@-Rn */
	r5 = 0xC283794u; UPD(0x0C0627E6u, 1);  /* 0C0627E4 mov.l @(disp,pc),Rn */
	IF(0x0C0627E6u); r15 -= 4; W32(r15, PR); UPD(0x0C0627E8u, 1);  /* 0C0627E6 sts.l pr,@-Rn */
	r0 = R32(r5); UPD(0x0C0627EAu, 1);  /* 0C0627E8 mov.l @Rm,Rn */
	r15 += 0xFFFFFFECu;  /* 0C0627EA add #imm,Rn */
	T = (r0 & r0) == 0;  /* 0C0627EC tst Rm,Rn */
	r0 = 0x280u; UPD(0x0C0627F0u, 3);  /* 0C0627EE mov.w @(disp,pc),Rn */
	{ u32 t_ = 0u - r3, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r4 = r_; }  /* 0C0627F0 negc Rm,Rn */
	IF(0x0C0627F2u); r1 = R32(r0 + r5); UPD(0x0C0627F4u, 2);  /* 0C0627F2 mov.l @(r0,Rm),Rn */
	r14 = r15;  /* 0C0627F4 mov Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C0627F6 tst Rm,Rn */
	{ u32 t_ = 0u - r3, r_ = t_ - T; T = (0u < t_) | (t_ < r_); r0 = r_; }  /* 0C0627F8 negc Rm,Rn */
	T = (r4 & r0) == 0;  /* 0C0627FA tst Rm,Rn */
	{ u32 c_ = !T; W32(r14, r2); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C062802u, 7); goto L_0C062802; } UPD(0x0C062800u, 1); goto L_0C062800; }  /* 0C0627FC bf/s */
L_0C062800: BLKS(0x0C062800u);
	r6 = 0x10u;  /* 0C062800 mov #imm,Rn */
	UPD(0x0C062802u, 1);
L_0C062802: BLKS(0x0C062802u);
	r4 = R32(r14); UPD(0x0C062804u, 1);  /* 0C062802 mov.l @Rm,Rn */
	r8 = 0x280u; UPD(0x0C062806u, 1);  /* 0C062804 mov.w @(disp,pc),Rn */
	IF(0x0C062806u); MACL = r4 * r8;  /* 0C062806 mul.l Rm,Rn */
	r13 = 0xC283794u; UPD(0x0C06280Au, 3);  /* 0C062808 mov.l @(disp,pc),Rn */
	IF(0x0C06280Au); r8 = MACL;  /* 0C06280A sts macl,Rn */
	r8 += r13;  /* 0C06280C add Rm,Rn */
	r0 = R32(r8 + 0x4u); UPD(0x0C062810u, 3);  /* 0C06280E mov.l @(disp,Rm),Rn */
	r12 = 0xC16D04Cu; UPD(0x0C062812u, 1);  /* 0C062810 mov.l @(disp,pc),Rn */
	IF(0x0C062812u); r0 <<= 2;  /* 0C062812 shll2 Rn */
	IF(0x0C062814u); r10 = R32(r0 + r12); UPD(0x0C062816u, 2);  /* 0C062814 mov.l @(r0,Rm),Rn */
	r0 = 0x254u; UPD(0x0C062818u, 1);  /* 0C062816 mov.w @(disp,pc),Rn */
	IF(0x0C062818u); r11 = (u32)(s32)(s8)R8(r0 + r8); UPD(0x0C06281Au, 1);  /* 0C062818 mov.b @(r0,Rm),Rn */
	r0 = r11 & 0xFF;  /* 0C06281A extu.b Rm,Rn */
	IF(0x0C06281Cu); r0 <<= 2;  /* 0C06281C shll2 Rn */
	IF(0x0C06281Eu); r11 = R32(r0 + r10); UPD(0x0C062820u, 3);  /* 0C06281E mov.l @(r0,Rm),Rn */
	r9 = 0xC0607D0u; UPD(0x0C062822u, 1);  /* 0C062820 mov.l @(disp,pc),Rn */
	r11 += 0x2u;  /* 0C062822 add #imm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r11); r11 += 2; r7 = v_; } UPD(0x0C062826u, 2);  /* 0C062824 mov.w @Rm+,Rn */
	r4 = R32(r14); UPD(0x0C062828u, 1);  /* 0C062826 mov.l @Rm,Rn */
	r5 = r7;  /* 0C062828 mov Rm,Rn */
	IF(0x0C06282Au); { u32 t_ = r9; PR = 0x0C06282Eu; W32(r14 + 0x4u, r7); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); CALLP(t_, f_0C0607D0, 0x0C0607D0u, 0x0C06282Eu); }  /* 0C06282A jsr @Rn */
L_0C06282E: BLKS(0x0C06282Eu);
	T = (r0 & r0) == 0;  /* 0C06282E tst Rm,Rn */
	{ u32 c_ = T; r1 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C062910u, 4); goto L_0C062910; } goto L_0C062834; }  /* 0C062830 bt/s */
L_0C062834: BLKS(0x0C062834u);
	r3 = 0xC2755BCu; UPD(0x0C062836u, 2);  /* 0C062834 mov.l @(disp,pc),Rn */
	r6 = R32(r14 + 0x4u); UPD(0x0C062838u, 1);  /* 0C062836 mov.l @(disp,Rm),Rn */
	W32(r14 + 0x8u, r3); UPD(0x0C06283Au, 1);  /* 0C062838 mov.l Rm,@(disp,Rn) */
	T = (s32)r1 >= (s32)r6;  /* 0C06283A cmp/ge Rm,Rn */
	{ u32 c_ = T; W32(r14 + 0xCu, r1); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C0628D4u, 4); goto L_0C0628D4; } UPD(0x0C062840u, 1); goto L_0C062840; }  /* 0C06283C bt/s */
L_0C062840: BLKS(0x0C062840u);
	W32(r14 + 0x10u, r8); UPD(0x0C062842u, 1);  /* 0C062840 mov.l Rm,@(disp,Rn) */
	IF(0x0C062842u); ;  /* 0C062842 nop */
	UPD(0x0C062844u, 1);
L_0C062844: BLKS(0x0C062844u);
	r2 = R32(r14); UPD(0x0C062846u, 1);  /* 0C062844 mov.l @Rm,Rn */
	r5 = 0x34u;  /* 0C062846 mov #imm,Rn */
	r13 = 0x340u; UPD(0x0C06284Au, 2);  /* 0C062848 mov.w @(disp,pc),Rn */
	r8 = R32(r14 + 0x8u); UPD(0x0C06284Cu, 1);  /* 0C06284A mov.l @(disp,Rm),Rn */
	IF(0x0C06284Cu); MACL = r2 * r13;  /* 0C06284C mul.l Rm,Rn */
	{ u32 v_ = (u32)(s32)(s16)R16(r8); r8 += 2; r7 = v_; } UPD(0x0C062850u, 3);  /* 0C06284E mov.w @Rm+,Rn */
	IF(0x0C062850u); r13 = MACL;  /* 0C062850 sts macl,Rn */
	IF(0x0C062852u); MACL = r7 * r5;  /* 0C062852 mul.l Rm,Rn */
	r1 = 0xC285318u; UPD(0x0C062856u, 4);  /* 0C062854 mov.l @(disp,pc),Rn */
	IF(0x0C062856u); r3 = MACL;  /* 0C062856 sts macl,Rn */
	{ u32 v_ = R32(r11); r11 += 4; r6 = v_; } UPD(0x0C06285Au, 2);  /* 0C062858 mov.l @Rm+,Rn */
	r13 += r3;  /* 0C06285A add Rm,Rn */
	r4 = R32(r14); UPD(0x0C06285Eu, 2);  /* 0C06285C mov.l @Rm,Rn */
	r13 += r1;  /* 0C06285E add Rm,Rn */
	W32(r13, r6); UPD(0x0C062862u, 2);  /* 0C062860 mov.l Rm,@Rn */
	W32(r13 + 0x4u, r4); UPD(0x0C062864u, 1);  /* 0C062862 mov.l Rm,@(disp,Rn) */
	{ u32 v_ = R32(r11); r11 += 4; r0 = v_; } UPD(0x0C062866u, 1);  /* 0C062864 mov.l @Rm+,Rn */
	r4 = 0x4u;  /* 0C062866 mov #imm,Rn */
	W32(r13 + 0x8u, r0); UPD(0x0C06286Au, 2);  /* 0C062868 mov.l Rm,@(disp,Rn) */
	r9 = 0xC050D70u; UPD(0x0C06286Cu, 1);  /* 0C06286A mov.l @(disp,pc),Rn */
	{ u32 v_ = R32(r11); r11 += 4; r10 = v_; } UPD(0x0C06286Eu, 1);  /* 0C06286C mov.l @Rm+,Rn */
	IF(0x0C06286Eu); { u32 t_ = r9; PR = 0x0C062872u; W32(r14 + 0x8u, r8); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C062872u); }  /* 0C06286E jsr @Rn */
L_0C062872: BLKS(0x0C062872u);
	r0 += r10;  /* 0C062872 add Rm,Rn */
	W32(r13 + 0xCu, r0); UPD(0x0C062876u, 2);  /* 0C062874 mov.l Rm,@(disp,Rn) */
	r12 = R32(r14 + 0x10u); UPD(0x0C062878u, 1);  /* 0C062876 mov.l @(disp,Rm),Rn */
	{ u32 v_ = R32(r11); r11 += 4; r8 = v_; } UPD(0x0C06287Au, 1);  /* 0C062878 mov.l @Rm+,Rn */
	r10 = R32(r12 + 0x10u); UPD(0x0C06287Cu, 1);  /* 0C06287A mov.l @(disp,Rm),Rn */
	r3 = 0x66666667u; UPD(0x0C06287Eu, 1);  /* 0C06287C mov.l @(disp,pc),Rn */
	r10 += r8;  /* 0C06287E add Rm,Rn */
	W32(r13 + 0x10u, r10); UPD(0x0C062882u, 2);  /* 0C062880 mov.l Rm,@(disp,Rn) */
	{ s64 r_ = (s64)(s32)r0 * (s64)(s32)r3; MACH = (u32)((u64)r_ >> 32); MACL = (u32)r_; }  /* 0C062882 dmuls.l Rm,Rn */
	r2 = R32(r14 + 0x10u); UPD(0x0C062886u, 3);  /* 0C062884 mov.l @(disp,Rm),Rn */
	{ u32 v_ = R32(r11); r11 += 4; r7 = v_; } UPD(0x0C062888u, 1);  /* 0C062886 mov.l @Rm+,Rn */
	IF(0x0C062888u); r6 = MACH;  /* 0C062888 sts mach,Rn */
	r5 = R32(r2 + 0x14u); UPD(0x0C06288Cu, 2);  /* 0C06288A mov.l @(disp,Rm),Rn */
	IF(0x0C06288Cu); T = r6 & 1; r6 = (u32)((s32)r6 >> 1);  /* 0C06288C shar Rn */
	r5 += r7;  /* 0C06288E add Rm,Rn */
	W32(r13 + 0x14u, r5); UPD(0x0C062892u, 3);  /* 0C062890 mov.l Rm,@(disp,Rn) */
	IF(0x0C062892u); T = r0 >> 31; r0 <<= 1;  /* 0C062892 shll Rn */
	{ u32 a_ = r0, t_ = a_ - r0, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r0 = r_; }  /* 0C062894 subc Rm,Rn */
	{ u32 v_ = R32(r11); r11 += 4; r8 = v_; } UPD(0x0C062898u, 3);  /* 0C062896 mov.l @Rm+,Rn */
	r6 -= r0;  /* 0C062898 sub Rm,Rn */
	r6 += r6;  /* 0C06289A add Rm,Rn */
	r4 = 0xC16BF52u; UPD(0x0C06289Eu, 3);  /* 0C06289C mov.l @(disp,pc),Rn */
	r0 = r6;  /* 0C06289E mov Rm,Rn */
	W32(r13 + 0x20u, r8); UPD(0x0C0628A2u, 2);  /* 0C0628A0 mov.l Rm,@(disp,Rn) */
	r5 = r8;  /* 0C0628A2 mov Rm,Rn */
	IF(0x0C0628A4u); r12 = (u32)(s32)(s16)R16(r0 + r4); UPD(0x0C0628A6u, 2);  /* 0C0628A4 mov.w @(r0,Rm),Rn */
	r13 += 0x2Cu;  /* 0C0628A6 add #imm,Rn */
	r9 = 0xC058060u; UPD(0x0C0628AAu, 2);  /* 0C0628A8 mov.l @(disp,pc),Rn */
	r4 = r12;  /* 0C0628AA mov Rm,Rn */
	IF(0x0C0628ACu); { u32 t_ = r9; PR = 0x0C0628B0u; W16(r13, r12); /* slot mov.w Rm,@Rn */ UPD(t_, 3); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C0628B0u); }  /* 0C0628AC jsr @Rn */
L_0C0628B0: BLKS(0x0C0628B0u);
	r10 = 0xC058030u; UPD(0x0C0628B2u, 1);  /* 0C0628B0 mov.l @(disp,pc),Rn */
	r13 += 0xFFFFFFD4u;  /* 0C0628B2 add #imm,Rn */
	r5 = r8;  /* 0C0628B4 mov Rm,Rn */
	W32(r13 + 0x18u, r0); UPD(0x0C0628B8u, 3);  /* 0C0628B6 mov.l Rm,@(disp,Rn) */
	IF(0x0C0628B8u); { u32 t_ = r10; PR = 0x0C0628BCu; r4 = r12; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C0628BCu); }  /* 0C0628B8 jsr @Rn */
L_0C0628BC: BLKS(0x0C0628BCu);
	r2 = R32(r14 + 0xCu); UPD(0x0C0628BEu, 1);  /* 0C0628BC mov.l @(disp,Rm),Rn */
	r7 = 0x0u;  /* 0C0628BE mov #imm,Rn */
	W32(r13 + 0x1Cu, r0); UPD(0x0C0628C2u, 2);  /* 0C0628C0 mov.l Rm,@(disp,Rn) */
	r2 += 0x1u;  /* 0C0628C2 add #imm,Rn */
	r9 = 0x808080u; UPD(0x0C0628C6u, 2);  /* 0C0628C4 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s16)r2;  /* 0C0628C6 exts.w Rm,Rn */
	r5 = R32(r14 + 0x4u); UPD(0x0C0628CAu, 2);  /* 0C0628C8 mov.l @(disp,Rm),Rn */
	W32(r13 + 0x24u, r7); UPD(0x0C0628CCu, 1);  /* 0C0628CA mov.l Rm,@(disp,Rn) */
	T = (s32)r0 >= (s32)r5;  /* 0C0628CC cmp/ge Rm,Rn */
	W32(r13 + 0x28u, r9); UPD(0x0C0628D0u, 2);  /* 0C0628CE mov.l Rm,@(disp,Rn) */
	{ u32 c_ = !T; W32(r14 + 0xCu, r0); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C062844u, 3); goto L_0C062844; } UPD(0x0C0628D4u, 1); goto L_0C0628D4; }  /* 0C0628D0 bf/s */
L_0C0628D4: BLKS(0x0C0628D4u);
	r0 = 0x6u;  /* 0C0628D4 mov #imm,Rn */
	IF(0x0C0628D6u); r4 = (u32)(s32)(s16)R16(r0 + r14); UPD(0x0C0628D8u, 2);  /* 0C0628D6 mov.w @(r0,Rm),Rn */
	r9 = 0xAu;  /* 0C0628D8 mov #imm,Rn */
	r10 = 0xC060350u; UPD(0x0C0628DCu, 2);  /* 0C0628DA mov.l @(disp,pc),Rn */
	MACL = (u32)((s32)(s16)r4 * (s32)(s16)r9);  /* 0C0628DC muls.w Rm,Rn */
	r12 = 0xC16BF50u; UPD(0x0C0628E0u, 3);  /* 0C0628DE mov.l @(disp,pc),Rn */
	IF(0x0C0628E0u); { u32 t_ = r10; PR = 0x0C0628E4u; IF(0x0C0628E2u); r4 = MACL; /* slot sts macl,Rn */ UPD(t_, 2); CALLP(t_, f_0C060350, 0x0C060350u, 0x0C0628E4u); }  /* 0C0628E0 jsr @Rn */
L_0C0628E4: BLKS(0x0C0628E4u);
	r0 = R32(r14); UPD(0x0C0628E6u, 1);  /* 0C0628E4 mov.l @Rm,Rn */
	IF(0x0C0628E6u); r11 = (u32)(s32)(s8)R8(r0 + r12); UPD(0x0C0628E8u, 1);  /* 0C0628E6 mov.b @(r0,Rm),Rn */
	r4 = r0;  /* 0C0628E8 mov Rm,Rn */
	r0 = 0xC0AFB20u; UPD(0x0C0628ECu, 2);  /* 0C0628EA mov.l @(disp,pc),Rn */
	r5 = r11 & 0xFF;  /* 0C0628EC extu.b Rm,Rn */
	r14 += 0x14u;  /* 0C0628EE add #imm,Rn */
	r15 = r14;  /* 0C0628F0 mov Rm,Rn */
	IF(0x0C0628F2u); PR = R32(r15); r15 += 4; UPD(0x0C0628F4u, 4);  /* 0C0628F2 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0628F6u, 1);  /* 0C0628F4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C0628F8u, 1);  /* 0C0628F6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C0628FAu, 1);  /* 0C0628F8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C0628FCu, 1);  /* 0C0628FA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C0628FEu, 1);  /* 0C0628FC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C062900u, 1);  /* 0C0628FE mov.l @Rm+,Rn */
	IF(0x0C062900u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0AFB20u: TAIL(f_0C0AFB20); default: JUMPD(tv_); } }  /* 0C062900 jmp @Rn */
L_0C062910: BLKS(0x0C062910u);
	r14 += 0x14u;  /* 0C062910 add #imm,Rn */
	r15 = r14;  /* 0C062912 mov Rm,Rn */
	IF(0x0C062914u); PR = R32(r15); r15 += 4; UPD(0x0C062916u, 3);  /* 0C062914 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C062918u, 1);  /* 0C062916 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C06291Au, 1);  /* 0C062918 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C06291Cu, 1);  /* 0C06291A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C06291Eu, 1);  /* 0C06291C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C062920u, 1);  /* 0C06291E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C062922u, 1);  /* 0C062920 mov.l @Rm+,Rn */
	IF(0x0C062922u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C062922 rts */
}


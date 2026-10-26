#include "recomp.h"
#include "recomp_funcs.h"

/* arr_upd_t41 */
void f_0C7C2038(sh3_t *c)
{
	LOCALS;
L_0C7C2038: BLKS(0x0C7C2038u);
	r1 = 0xC21CA15u; UPD(0x0C7C203Au, 1);  /* 0C7C2038 mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C203Cu, 1);  /* 0C7C203A mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C203C tst Rm,Rn */
	if (!T) { UPD(0x0C7C2060u, 4); goto L_0C7C2060; }  /* 0C7C203E bf */
L_0C7C2040: BLKS(0x0C7C2040u);
	r1 = 0xB4u; UPD(0x0C7C2042u, 1);  /* 0C7C2040 mov.w @(disp,pc),Rn */
	r2 = 0xC26CD48u; UPD(0x0C7C2044u, 1);  /* 0C7C2042 mov.l @(disp,pc),Rn */
	MACL = (u32)((s32)(s16)r4 * (s32)(s16)r1);  /* 0C7C2044 muls.w Rm,Rn */
	IF(0x0C7C2046u); r1 = MACL;  /* 0C7C2046 sts macl,Rn */
	r2 += r1;  /* 0C7C2048 add Rm,Rn */
	r2 = R32(r2); UPD(0x0C7C204Cu, 5);  /* 0C7C204A mov.l @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C7C204C tst Rm,Rn */
	if (!T) { UPD(0x0C7C2060u, 4); goto L_0C7C2060; }  /* 0C7C204E bf */
L_0C7C2050: BLKS(0x0C7C2050u);
	r2 = 0xC26CD7Cu; UPD(0x0C7C2052u, 1);  /* 0C7C2050 mov.l @(disp,pc),Rn */
	r1 += r2;  /* 0C7C2052 add Rm,Rn */
	r1 = (u32)(s32)(s16)R16(r1); UPD(0x0C7C2056u, 2);  /* 0C7C2054 mov.w @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C2056 tst Rm,Rn */
	{ u32 c_ = !T; r2 = 0x10u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C7C2060u, 4); goto L_0C7C2060; } goto L_0C7C205C; }  /* 0C7C2058 bf/s */
L_0C7C205C: BLKS(0x0C7C205Cu);
	r1 = 0xC7C4298u; UPD(0x0C7C205Eu, 2);  /* 0C7C205C mov.l @(disp,pc),Rn */
	W32(r1, r2); UPD(0x0C7C2060u, 1);  /* 0C7C205E mov.l Rm,@Rn */
L_0C7C2060: BLKS(0x0C7C2060u);
	r0 = 0xC0811A0u; UPD(0x0C7C2062u, 1);  /* 0C7C2060 mov.l @(disp,pc),Rn */
	IF(0x0C7C2062u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); IF(0x0C7C2064u); ; /* slot nop */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C7C2062 jmp @Rn */
}

/* arr_part_end_72800 */
void f_0C7C207C(sh3_t *c)
{
	LOCALS;
L_0C7C207C: BLKS(0x0C7C207Cu);
	r0 = 0xC0A0BA0u; UPD(0x0C7C207Eu, 1);  /* 0C7C207C mov.l @(disp,pc),Rn */
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C7C2080u, 1);  /* 0C7C207E mov.l Rm,@-Rn */
	IF(0x0C7C2080u); r15 -= 4; W32(r15, PR); UPD(0x0C7C2082u, 1);  /* 0C7C2080 sts.l pr,@-Rn */
	IF(0x0C7C2082u); { u32 t_ = r0; PR = 0x0C7C2086u; r8 = r4; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A0BA0, 0x0C0A0BA0u, 0x0C7C2086u); }  /* 0C7C2082 jsr @Rn */
L_0C7C2086: BLKS(0x0C7C2086u);
	r2 = 0xC21CA15u; UPD(0x0C7C2088u, 1);  /* 0C7C2086 mov.l @(disp,pc),Rn */
	r1 = r0;  /* 0C7C2088 mov Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r2); UPD(0x0C7C208Cu, 2);  /* 0C7C208A mov.b @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C7C208C tst Rm,Rn */
	{ u32 c_ = !T; r0 = r1; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C7C209Cu, 4); goto L_0C7C209C; } goto L_0C7C2092; }  /* 0C7C208E bf/s */
L_0C7C2092: BLKS(0x0C7C2092u);
	r2 = 0xC22486Eu; UPD(0x0C7C2094u, 2);  /* 0C7C2092 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s8)R8(r2); UPD(0x0C7C2096u, 1);  /* 0C7C2094 mov.b @Rm,Rn */
	T = r0 == 0x3u;  /* 0C7C2096 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C7C20A2u, 4); goto L_0C7C20A2; }  /* 0C7C2098 bt */
L_0C7C209A: BLKS(0x0C7C209Au);
	r0 = r1;  /* 0C7C209A mov Rm,Rn */
	UPD(0x0C7C209Cu, 1);
L_0C7C209C: BLKS(0x0C7C209Cu);
	IF(0x0C7C209Cu); PR = R32(r15); r15 += 4; UPD(0x0C7C209Eu, 1);  /* 0C7C209C lds.l @Rn+,pr */
	IF(0x0C7C209Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C7C209E rts */
L_0C7C20A2: BLKS(0x0C7C20A2u);
	r2 = 0xB4u; UPD(0x0C7C20A4u, 1);  /* 0C7C20A2 mov.w @(disp,pc),Rn */
	r3 = 0xC26CD48u; UPD(0x0C7C20A6u, 1);  /* 0C7C20A4 mov.l @(disp,pc),Rn */
	MACL = (u32)((s32)(s16)r8 * (s32)(s16)r2);  /* 0C7C20A6 muls.w Rm,Rn */
	IF(0x0C7C20A8u); r2 = MACL;  /* 0C7C20A8 sts macl,Rn */
	r2 += r3;  /* 0C7C20AA add Rm,Rn */
	r2 = R32(r2); UPD(0x0C7C20AEu, 5);  /* 0C7C20AC mov.l @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C7C20AE tst Rm,Rn */
	{ u32 c_ = !T; r3 = 0x10u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C7C209Au, 4); goto L_0C7C209A; } goto L_0C7C20B4; }  /* 0C7C20B0 bf/s */
L_0C7C20B4: BLKS(0x0C7C20B4u);
	r2 = 0xC7C4298u; UPD(0x0C7C20B6u, 2);  /* 0C7C20B4 mov.l @(disp,pc),Rn */
	{ W32(r2, r3); /* slot mov.l Rm,@Rn */ UPD(0x0C7C209Au, 3); goto L_0C7C209A; }  /* 0C7C20B6 bra */
}

/* arr_script_78a20 */
void f_0C7C20D0(sh3_t *c)
{
	LOCALS;
L_0C7C20D0: BLKS(0x0C7C20D0u);
	r0 = 0xC0A1700u; UPD(0x0C7C20D2u, 1);  /* 0C7C20D0 mov.l @(disp,pc),Rn */
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C7C20D4u, 1);  /* 0C7C20D2 mov.l Rm,@-Rn */
	IF(0x0C7C20D4u); r15 -= 4; W32(r15, PR); UPD(0x0C7C20D6u, 1);  /* 0C7C20D4 sts.l pr,@-Rn */
	IF(0x0C7C20D6u); { u32 t_ = r0; PR = 0x0C7C20DAu; r8 = r4; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A1700, 0x0C0A1700u, 0x0C7C20DAu); }  /* 0C7C20D6 jsr @Rn */
L_0C7C20DA: BLKS(0x0C7C20DAu);
	r1 = 0xC21CA15u; UPD(0x0C7C20DCu, 1);  /* 0C7C20DA mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C20DEu, 1);  /* 0C7C20DC mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C20DE tst Rm,Rn */
	if (!T) { UPD(0x0C7C20F6u, 4); goto L_0C7C20F6; }  /* 0C7C20E0 bf */
L_0C7C20E2: BLKS(0x0C7C20E2u);
	r1 = 0xB4u; UPD(0x0C7C20E4u, 1);  /* 0C7C20E2 mov.w @(disp,pc),Rn */
	r2 = 0xC26CD48u; UPD(0x0C7C20E6u, 1);  /* 0C7C20E4 mov.l @(disp,pc),Rn */
	MACL = (u32)((s32)(s16)r8 * (s32)(s16)r1);  /* 0C7C20E6 muls.w Rm,Rn */
	IF(0x0C7C20E8u); r1 = MACL;  /* 0C7C20E8 sts macl,Rn */
	r1 += r2;  /* 0C7C20EA add Rm,Rn */
	r2 = R32(r1); UPD(0x0C7C20EEu, 5);  /* 0C7C20EC mov.l @Rm,Rn */
	r1 = 0x1u;  /* 0C7C20EE mov #imm,Rn */
	T = r2 > r1;  /* 0C7C20F0 cmp/hi Rm,Rn */
	{ u32 c_ = !T; r2 = 0x10u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C7C20FCu, 5); goto L_0C7C20FC; } UPD(0x0C7C20F6u, 1); goto L_0C7C20F6; }  /* 0C7C20F2 bf/s */
L_0C7C20F6: BLKS(0x0C7C20F6u);
	IF(0x0C7C20F6u); PR = R32(r15); r15 += 4; UPD(0x0C7C20F8u, 1);  /* 0C7C20F6 lds.l @Rn+,pr */
	IF(0x0C7C20F8u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C7C20F8 rts */
L_0C7C20FC: BLKS(0x0C7C20FCu);
	r1 = 0xC7C4298u; UPD(0x0C7C20FEu, 1);  /* 0C7C20FC mov.l @(disp,pc),Rn */
	W32(r1, r2); UPD(0x0C7C2100u, 1);  /* 0C7C20FE mov.l Rm,@Rn */
	IF(0x0C7C2100u); PR = R32(r15); r15 += 4; UPD(0x0C7C2102u, 1);  /* 0C7C2100 lds.l @Rn+,pr */
	IF(0x0C7C2102u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C7C2102 rts */
}

/* arr_script_8ee30 */
void f_0C7C2118(sh3_t *c)
{
	LOCALS;
L_0C7C2118: BLKS(0x0C7C2118u);
	r1 = 0xC21CA15u; UPD(0x0C7C211Au, 1);  /* 0C7C2118 mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C211Cu, 1);  /* 0C7C211A mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C211C tst Rm,Rn */
	if (!T) { UPD(0x0C7C2136u, 4); goto L_0C7C2136; }  /* 0C7C211E bf */
L_0C7C2120: BLKS(0x0C7C2120u);
	r1 = 0xB4u; UPD(0x0C7C2122u, 1);  /* 0C7C2120 mov.w @(disp,pc),Rn */
	r2 = 0xC26CD7Cu; UPD(0x0C7C2124u, 1);  /* 0C7C2122 mov.l @(disp,pc),Rn */
	MACL = (u32)((s32)(s16)r4 * (s32)(s16)r1);  /* 0C7C2124 muls.w Rm,Rn */
	IF(0x0C7C2126u); r1 = MACL;  /* 0C7C2126 sts macl,Rn */
	r1 += r2;  /* 0C7C2128 add Rm,Rn */
	r1 = (u32)(s32)(s16)R16(r1); UPD(0x0C7C212Cu, 5);  /* 0C7C212A mov.w @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C212C tst Rm,Rn */
	{ u32 c_ = !T; r2 = 0x10u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C7C2136u, 4); goto L_0C7C2136; } goto L_0C7C2132; }  /* 0C7C212E bf/s */
L_0C7C2132: BLKS(0x0C7C2132u);
	r1 = 0xC7C4298u; UPD(0x0C7C2134u, 2);  /* 0C7C2132 mov.l @(disp,pc),Rn */
	W32(r1, r2); UPD(0x0C7C2136u, 1);  /* 0C7C2134 mov.l Rm,@Rn */
L_0C7C2136: BLKS(0x0C7C2136u);
	r0 = 0xC0A1700u; UPD(0x0C7C2138u, 1);  /* 0C7C2136 mov.l @(disp,pc),Rn */
	IF(0x0C7C2138u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); IF(0x0C7C213Au); ; /* slot nop */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C0A1700u: TAIL(f_0C0A1700); default: JUMPD(tv_); } }  /* 0C7C2138 jmp @Rn */
}

/* arr_boss5 */
void f_0C7C2150(sh3_t *c)
{
	LOCALS;
L_0C7C2150: BLKS(0x0C7C2150u);
	r1 = 0xC21CA15u; UPD(0x0C7C2152u, 1);  /* 0C7C2150 mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C2154u, 1);  /* 0C7C2152 mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C2154 tst Rm,Rn */
	if (T) { UPD(0x0C7C215Eu, 4); goto L_0C7C215E; }  /* 0C7C2156 bt */
L_0C7C2158: BLKS(0x0C7C2158u);
	r0 = 0xC088C40u; UPD(0x0C7C215Au, 1);  /* 0C7C2158 mov.l @(disp,pc),Rn */
	IF(0x0C7C215Au); { u32 tv_ = r0; u32 t_ = PHYS(tv_); IF(0x0C7C215Cu); ; /* slot nop */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C7C215A jmp @Rn */
L_0C7C215E: BLKS(0x0C7C215Eu);
	r1 = 0xB4u; UPD(0x0C7C2160u, 1);  /* 0C7C215E mov.w @(disp,pc),Rn */
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C7C2162u, 1);  /* 0C7C2160 mov.l Rm,@-Rn */
	MACL = (u32)((s32)(s16)r4 * (s32)(s16)r1);  /* 0C7C2162 muls.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C7C2166u, 3);  /* 0C7C2164 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C7C2168u, 1);  /* 0C7C2166 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C7C216Au, 1);  /* 0C7C2168 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C7C216Cu, 1);  /* 0C7C216A mov.l Rm,@-Rn */
	IF(0x0C7C216Cu); r1 = MACL;  /* 0C7C216C sts macl,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C7C2170u, 2);  /* 0C7C216E mov.l Rm,@-Rn */
	r11 = 0xC26CD40u; UPD(0x0C7C2172u, 1);  /* 0C7C2170 mov.l @(disp,pc),Rn */
	r2 = 0xC26CD48u; UPD(0x0C7C2174u, 1);  /* 0C7C2172 mov.l @(disp,pc),Rn */
	IF(0x0C7C2174u); r15 -= 4; W32(r15, PR); UPD(0x0C7C2176u, 1);  /* 0C7C2174 sts.l pr,@-Rn */
	r2 += r1;  /* 0C7C2176 add Rm,Rn */
	r3 = 0xC26CDE0u; UPD(0x0C7C217Au, 2);  /* 0C7C2178 mov.l @(disp,pc),Rn */
	r11 += r1;  /* 0C7C217A add Rm,Rn */
	r12 = 0xC26CDDFu; UPD(0x0C7C217Eu, 2);  /* 0C7C217C mov.l @(disp,pc),Rn */
	r10 = R32(r11); UPD(0x0C7C2180u, 1);  /* 0C7C217E mov.l @Rm,Rn */
	r13 = R32(r2); UPD(0x0C7C2182u, 1);  /* 0C7C2180 mov.l @Rm,Rn */
	r12 += r1;  /* 0C7C2182 add Rm,Rn */
	r2 = 0xC26CD7Cu; UPD(0x0C7C2186u, 2);  /* 0C7C2184 mov.l @(disp,pc),Rn */
	r0 = 0xC088C40u; UPD(0x0C7C2188u, 1);  /* 0C7C2186 mov.l @(disp,pc),Rn */
	r2 += r1;  /* 0C7C2188 add Rm,Rn */
	r1 += r3;  /* 0C7C218A add Rm,Rn */
	r9 = (u32)(s32)(s16)R16(r2); UPD(0x0C7C218Eu, 3);  /* 0C7C218C mov.w @Rm,Rn */
	r8 = (u32)(s32)(s8)R8(r12); UPD(0x0C7C2190u, 1);  /* 0C7C218E mov.b @Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C2192u, 1);  /* 0C7C2190 mov.b @Rm,Rn */
	r1 = 0xC392AFEu; UPD(0x0C7C2194u, 1);  /* 0C7C2192 mov.l @(disp,pc),Rn */
	r8 = r8 & 0xFF;  /* 0C7C2194 extu.b Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C2198u, 2);  /* 0C7C2196 mov.b @Rm,Rn */
	IF(0x0C7C2198u); { u32 t_ = r0; PR = 0x0C7C219Cu; IF(0x0C7C219Au); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C088C40, 0x0C088C40u, 0x0C7C219Cu); }  /* 0C7C2198 jsr @Rn */
L_0C7C219C: BLKS(0x0C7C219Cu);
	T = (r13 & r13) == 0;  /* 0C7C219C tst Rm,Rn */
	{ u32 c_ = !T; r1 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C7C21C6u, 4); goto L_0C7C21C6; } goto L_0C7C21A2; }  /* 0C7C219E bf/s */
L_0C7C21A2: BLKS(0x0C7C21A2u);
	r2 = 0xC7C4290u; UPD(0x0C7C21A4u, 2);  /* 0C7C21A2 mov.l @(disp,pc),Rn */
	r9 = (u32)(s32)(s16)r9;  /* 0C7C21A4 exts.w Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C7C21A6 tst Rm,Rn */
	{ u32 c_ = T; W32(r2, r9); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C7C21C6u, 5); goto L_0C7C21C6; } UPD(0x0C7C21ACu, 1); goto L_0C7C21AC; }  /* 0C7C21A8 bt/s */
L_0C7C21AC: BLKS(0x0C7C21ACu);
	T = (r10 & r10) == 0;  /* 0C7C21AC tst Rm,Rn */
	{ u32 c_ = T; r0 = r8; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C7C21C2u, 4); goto L_0C7C21C2; } goto L_0C7C21B2; }  /* 0C7C21AE bt/s */
L_0C7C21B2: BLKS(0x0C7C21B2u);
	r2 = R32(r11); UPD(0x0C7C21B4u, 2);  /* 0C7C21B2 mov.l @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C7C21B4 tst Rm,Rn */
	{ u32 c_ = !T; T = r0 == 0x1u; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C7C21C4u, 4); goto L_0C7C21C4; } goto L_0C7C21BA; }  /* 0C7C21B6 bf/s */
L_0C7C21BA: BLKS(0x0C7C21BAu);
	r2 = 0xC7C4294u; UPD(0x0C7C21BCu, 2);  /* 0C7C21BA mov.l @(disp,pc),Rn */
	r3 = 0x4u;  /* 0C7C21BC mov #imm,Rn */
	W32(r2, r3); UPD(0x0C7C21C0u, 2);  /* 0C7C21BE mov.l Rm,@Rn */
	r0 = r8;  /* 0C7C21C0 mov Rm,Rn */
	UPD(0x0C7C21C2u, 1);
L_0C7C21C2: BLKS(0x0C7C21C2u);
	T = r0 == 0x1u;  /* 0C7C21C2 cmp/eq #imm,r0 */
	UPD(0x0C7C21C4u, 1);
L_0C7C21C4: BLKS(0x0C7C21C4u);
	if (T) { UPD(0x0C7C21D8u, 3); goto L_0C7C21D8; }  /* 0C7C21C4 bt */
L_0C7C21C6: BLKS(0x0C7C21C6u);
	r0 = r1;  /* 0C7C21C6 mov Rm,Rn */
	IF(0x0C7C21C8u); PR = R32(r15); r15 += 4; UPD(0x0C7C21CAu, 2);  /* 0C7C21C8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C7C21CCu, 1);  /* 0C7C21CA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C7C21CEu, 1);  /* 0C7C21CC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C7C21D0u, 1);  /* 0C7C21CE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C7C21D2u, 1);  /* 0C7C21D0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C21D4u, 1);  /* 0C7C21D2 mov.l @Rm+,Rn */
	IF(0x0C7C21D4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C7C21D4 rts */
L_0C7C21D8: BLKS(0x0C7C21D8u);
	r0 = (u32)(s32)(s8)R8(r12); UPD(0x0C7C21DAu, 1);  /* 0C7C21D8 mov.b @Rm,Rn */
	T = r0 == 0x2u;  /* 0C7C21DA cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C7C21C6u, 4); goto L_0C7C21C6; }  /* 0C7C21DC bf */
L_0C7C21DE: BLKS(0x0C7C21DEu);
	r2 = 0xC7C4294u; UPD(0x0C7C21E0u, 1);  /* 0C7C21DE mov.l @(disp,pc),Rn */
	W32(r2, r8); UPD(0x0C7C21E2u, 1);  /* 0C7C21E0 mov.l Rm,@Rn */
	r2 = 0xC7C428Cu; UPD(0x0C7C21E4u, 1);  /* 0C7C21E2 mov.l @(disp,pc),Rn */
	{ W32(r2, r9); /* slot mov.l Rm,@Rn */ UPD(0x0C7C21C6u, 3); goto L_0C7C21C6; }  /* 0C7C21E4 bra */
}

/* arr_boss51 */
void f_0C7C2218(sh3_t *c)
{
	LOCALS;
L_0C7C2218: BLKS(0x0C7C2218u);
	r1 = 0xC21CA15u; UPD(0x0C7C221Au, 1);  /* 0C7C2218 mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C221Cu, 1);  /* 0C7C221A mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C221C tst Rm,Rn */
	if (T) { UPD(0x0C7C2226u, 4); goto L_0C7C2226; }  /* 0C7C221E bt */
L_0C7C2220: BLKS(0x0C7C2220u);
	r0 = 0xC093CE0u; UPD(0x0C7C2222u, 1);  /* 0C7C2220 mov.l @(disp,pc),Rn */
	IF(0x0C7C2222u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); IF(0x0C7C2224u); ; /* slot nop */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C7C2222 jmp @Rn */
L_0C7C2226: BLKS(0x0C7C2226u);
	r1 = 0xB4u; UPD(0x0C7C2228u, 1);  /* 0C7C2226 mov.w @(disp,pc),Rn */
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C7C222Au, 1);  /* 0C7C2228 mov.l Rm,@-Rn */
	MACL = (u32)((s32)(s16)r4 * (s32)(s16)r1);  /* 0C7C222A muls.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C7C222Eu, 3);  /* 0C7C222C mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C7C2230u, 1);  /* 0C7C222E mov.l Rm,@-Rn */
	IF(0x0C7C2230u); r1 = MACL;  /* 0C7C2230 sts macl,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C7C2234u, 2);  /* 0C7C2232 mov.l Rm,@-Rn */
	r2 = 0xC26CD48u; UPD(0x0C7C2236u, 1);  /* 0C7C2234 mov.l @(disp,pc),Rn */
	r11 = 0xC26CD40u; UPD(0x0C7C2238u, 1);  /* 0C7C2236 mov.l @(disp,pc),Rn */
	IF(0x0C7C2238u); r15 -= 4; W32(r15, PR); UPD(0x0C7C223Au, 1);  /* 0C7C2238 sts.l pr,@-Rn */
	r2 += r1;  /* 0C7C223A add Rm,Rn */
	r0 = 0xC26CDE0u; UPD(0x0C7C223Eu, 2);  /* 0C7C223C mov.l @(disp,pc),Rn */
	r11 += r1;  /* 0C7C223E add Rm,Rn */
	r8 = R32(r11); UPD(0x0C7C2242u, 2);  /* 0C7C2240 mov.l @Rm,Rn */
	r9 = R32(r2); UPD(0x0C7C2244u, 1);  /* 0C7C2242 mov.l @Rm,Rn */
	r2 = 0xC26CD7Cu; UPD(0x0C7C2246u, 1);  /* 0C7C2244 mov.l @(disp,pc),Rn */
	r2 += r1;  /* 0C7C2246 add Rm,Rn */
	r10 = (u32)(s32)(s16)R16(r2); UPD(0x0C7C224Au, 2);  /* 0C7C2248 mov.w @Rm,Rn */
	r2 = 0xC26CDDFu; UPD(0x0C7C224Cu, 1);  /* 0C7C224A mov.l @(disp,pc),Rn */
	r2 += r1;  /* 0C7C224C add Rm,Rn */
	r1 += r0;  /* 0C7C224E add Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r2); UPD(0x0C7C2252u, 3);  /* 0C7C2250 mov.b @Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C2254u, 1);  /* 0C7C2252 mov.b @Rm,Rn */
	r1 = 0xC392AFEu; UPD(0x0C7C2256u, 1);  /* 0C7C2254 mov.l @(disp,pc),Rn */
	r0 = 0xC093CE0u; UPD(0x0C7C2258u, 1);  /* 0C7C2256 mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C225Au, 1);  /* 0C7C2258 mov.b @Rm,Rn */
	IF(0x0C7C225Au); { u32 t_ = r0; PR = 0x0C7C225Eu; IF(0x0C7C225Cu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C093CE0, 0x0C093CE0u, 0x0C7C225Eu); }  /* 0C7C225A jsr @Rn */
L_0C7C225E: BLKS(0x0C7C225Eu);
	T = (r9 & r9) == 0;  /* 0C7C225E tst Rm,Rn */
	{ u32 c_ = !T; r1 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C7C228Cu, 4); goto L_0C7C228C; } goto L_0C7C2264; }  /* 0C7C2260 bf/s */
L_0C7C2264: BLKS(0x0C7C2264u);
	r2 = 0xC7C4290u; UPD(0x0C7C2266u, 2);  /* 0C7C2264 mov.l @(disp,pc),Rn */
	T = (r8 & r8) == 0;  /* 0C7C2266 tst Rm,Rn */
	{ u32 c_ = T; W32(r2, r10); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C7C227Eu, 4); goto L_0C7C227E; } UPD(0x0C7C226Cu, 1); goto L_0C7C226C; }  /* 0C7C2268 bt/s */
L_0C7C226C: BLKS(0x0C7C226Cu);
	T = (r10 & r10) == 0;  /* 0C7C226C tst Rm,Rn */
	{ u32 c_ = T; r0 = r1; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C7C2280u, 4); goto L_0C7C2280; } goto L_0C7C2272; }  /* 0C7C226E bt/s */
L_0C7C2272: BLKS(0x0C7C2272u);
	r2 = R32(r11); UPD(0x0C7C2274u, 2);  /* 0C7C2272 mov.l @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C7C2274 tst Rm,Rn */
	{ u32 c_ = !T; r3 = 0x4u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C7C2280u, 4); goto L_0C7C2280; } goto L_0C7C227A; }  /* 0C7C2276 bf/s */
L_0C7C227A: BLKS(0x0C7C227Au);
	r2 = 0xC7C4294u; UPD(0x0C7C227Cu, 2);  /* 0C7C227A mov.l @(disp,pc),Rn */
	W32(r2, r3); UPD(0x0C7C227Eu, 1);  /* 0C7C227C mov.l Rm,@Rn */
L_0C7C227E: BLKS(0x0C7C227Eu);
	r0 = r1;  /* 0C7C227E mov Rm,Rn */
	UPD(0x0C7C2280u, 1);
L_0C7C2280: BLKS(0x0C7C2280u);
	IF(0x0C7C2280u); PR = R32(r15); r15 += 4; UPD(0x0C7C2282u, 1);  /* 0C7C2280 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C7C2284u, 1);  /* 0C7C2282 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C7C2286u, 1);  /* 0C7C2284 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C2288u, 1);  /* 0C7C2286 mov.l @Rm+,Rn */
	IF(0x0C7C2288u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C7C2288 rts */
L_0C7C228C: BLKS(0x0C7C228Cu);
	r0 = r9;  /* 0C7C228C mov Rm,Rn */
	T = r0 == 0x2u;  /* 0C7C228E cmp/eq #imm,r0 */
	{ u32 c_ = !T; T = (r10 & r10) == 0; /* slot tst Rm,Rn */ if (c_) { UPD(0x0C7C227Eu, 5); goto L_0C7C227E; } goto L_0C7C2294; }  /* 0C7C2290 bf/s */
L_0C7C2294: BLKS(0x0C7C2294u);
	r3 = 0xC7C4290u; UPD(0x0C7C2296u, 2);  /* 0C7C2294 mov.l @(disp,pc),Rn */
	r2 = R32(r3); UPD(0x0C7C2298u, 1);  /* 0C7C2296 mov.l @Rm,Rn */
	r2 += r10;  /* 0C7C2298 add Rm,Rn */
	{ u32 c_ = T; W32(r3, r2); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C7C227Eu, 4); goto L_0C7C227E; } UPD(0x0C7C229Eu, 1); goto L_0C7C229E; }  /* 0C7C229A bt/s */
L_0C7C229E: BLKS(0x0C7C229Eu);
	r3 = 0xC7C4294u; UPD(0x0C7C22A0u, 1);  /* 0C7C229E mov.l @(disp,pc),Rn */
	r7 = R32(r3); UPD(0x0C7C22A2u, 1);  /* 0C7C22A0 mov.l @Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C7C22A2 tst Rm,Rn */
	{ u32 c_ = !T; r7 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C7C227Eu, 4); goto L_0C7C227E; } goto L_0C7C22A8; }  /* 0C7C22A4 bf/s */
L_0C7C22A8: BLKS(0x0C7C22A8u);
	W32(r3, r7); UPD(0x0C7C22AAu, 2);  /* 0C7C22A8 mov.l Rm,@Rn */
	r3 = 0xC7C428Cu; UPD(0x0C7C22ACu, 1);  /* 0C7C22AA mov.l @(disp,pc),Rn */
	{ W32(r3, r2); /* slot mov.l Rm,@Rn */ UPD(0x0C7C227Eu, 3); goto L_0C7C227E; }  /* 0C7C22AC bra */
}

/* arr_boss65 */
void f_0C7C22E0(sh3_t *c)
{
	LOCALS;
L_0C7C22E0: BLKS(0x0C7C22E0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C7C22E2u, 1);  /* 0C7C22E0 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C7C22E4u, 1);  /* 0C7C22E2 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C7C22E6u, 1);  /* 0C7C22E4 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C7C22E8u, 1);  /* 0C7C22E6 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C7C22EAu, 1);  /* 0C7C22E8 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C7C22ECu, 1);  /* 0C7C22EA mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C7C22EEu, 1);  /* 0C7C22EC mov.l Rm,@-Rn */
	IF(0x0C7C22EEu); r15 -= 4; W32(r15, PR); UPD(0x0C7C22F0u, 1);  /* 0C7C22EE sts.l pr,@-Rn */
	r1 = 0xC21CA15u; UPD(0x0C7C22F2u, 1);  /* 0C7C22F0 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFECu;  /* 0C7C22F2 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C22F6u, 2);  /* 0C7C22F4 mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C22F6 tst Rm,Rn */
	if (T) { UPD(0x0C7C2310u, 4); goto L_0C7C2310; }  /* 0C7C22F8 bt */
L_0C7C22FA: BLKS(0x0C7C22FAu);
	r0 = 0xC0972D0u; UPD(0x0C7C22FCu, 1);  /* 0C7C22FA mov.l @(disp,pc),Rn */
	r15 += 0x14u;  /* 0C7C22FC add #imm,Rn */
	IF(0x0C7C22FEu); PR = R32(r15); r15 += 4; UPD(0x0C7C2300u, 2);  /* 0C7C22FE lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C7C2302u, 1);  /* 0C7C2300 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C7C2304u, 1);  /* 0C7C2302 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C7C2306u, 1);  /* 0C7C2304 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C7C2308u, 1);  /* 0C7C2306 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C7C230Au, 1);  /* 0C7C2308 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C230Cu, 1);  /* 0C7C230A mov.l @Rm+,Rn */
	IF(0x0C7C230Cu); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C7C230C jmp @Rn */
L_0C7C2310: BLKS(0x0C7C2310u);
	r1 = 0xB4u; UPD(0x0C7C2312u, 1);  /* 0C7C2310 mov.w @(disp,pc),Rn */
	r14 = 0xC26CD40u; UPD(0x0C7C2314u, 1);  /* 0C7C2312 mov.l @(disp,pc),Rn */
	MACL = (u32)((s32)(s16)r4 * (s32)(s16)r1);  /* 0C7C2314 muls.w Rm,Rn */
	r2 = 0xC26CD48u; UPD(0x0C7C2318u, 3);  /* 0C7C2316 mov.l @(disp,pc),Rn */
	IF(0x0C7C2318u); r1 = MACL;  /* 0C7C2318 sts macl,Rn */
	r2 += r1;  /* 0C7C231A add Rm,Rn */
	r14 += r1;  /* 0C7C231C add Rm,Rn */
	r10 = R32(r14); UPD(0x0C7C2320u, 4);  /* 0C7C231E mov.l @Rm,Rn */
	r13 = R32(r2); UPD(0x0C7C2322u, 1);  /* 0C7C2320 mov.l @Rm,Rn */
	r2 = 0xC26CD7Cu; UPD(0x0C7C2324u, 1);  /* 0C7C2322 mov.l @(disp,pc),Rn */
	r2 += r1;  /* 0C7C2324 add Rm,Rn */
	r8 = (u32)(s32)(s16)R16(r2); UPD(0x0C7C2328u, 2);  /* 0C7C2326 mov.w @Rm,Rn */
	r2 = 0xC26CDDFu; UPD(0x0C7C232Au, 1);  /* 0C7C2328 mov.l @(disp,pc),Rn */
	r2 += r1;  /* 0C7C232A add Rm,Rn */
	r3 = (u32)(s32)(s8)R8(r2); UPD(0x0C7C232Eu, 2);  /* 0C7C232C mov.b @Rm,Rn */
	r2 = r15;  /* 0C7C232E mov Rm,Rn */
	r2 += 0x10u;  /* 0C7C2330 add #imm,Rn */
	W8(r2, r3); UPD(0x0C7C2334u, 3);  /* 0C7C2332 mov.b Rm,@Rn */
	r11 = r3 & 0xFF;  /* 0C7C2334 extu.b Rm,Rn */
	r3 = 0xC26CDE0u; UPD(0x0C7C2338u, 2);  /* 0C7C2336 mov.l @(disp,pc),Rn */
	r1 += r3;  /* 0C7C2338 add Rm,Rn */
	r0 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C233Cu, 2);  /* 0C7C233A mov.b @Rm,Rn */
	r1 = 0xC392AFEu; UPD(0x0C7C233Eu, 1);  /* 0C7C233C mov.l @(disp,pc),Rn */
	W8(r2 + 0x1u, r0); UPD(0x0C7C2340u, 1);  /* 0C7C233E mov.b r0,@(disp,Rn) */
	r0 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C2342u, 1);  /* 0C7C2340 mov.b @Rm,Rn */
	r1 = 0xC220C2Cu; UPD(0x0C7C2344u, 1);  /* 0C7C2342 mov.l @(disp,pc),Rn */
	W8(r2 + 0x2u, r0); UPD(0x0C7C2346u, 1);  /* 0C7C2344 mov.b r0,@(disp,Rn) */
	r12 = r0 & 0xFF;  /* 0C7C2346 extu.b Rm,Rn */
	r0 = 0xC0972D0u; UPD(0x0C7C234Au, 2);  /* 0C7C2348 mov.l @(disp,pc),Rn */
	r9 = R32(r1); UPD(0x0C7C234Cu, 1);  /* 0C7C234A mov.l @Rm,Rn */
	IF(0x0C7C234Cu); { u32 t_ = r0; PR = 0x0C7C2350u; IF(0x0C7C234Eu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0972D0, 0x0C0972D0u, 0x0C7C2350u); }  /* 0C7C234C jsr @Rn */
L_0C7C2350: BLKS(0x0C7C2350u);
	T = (r13 & r13) == 0;  /* 0C7C2350 tst Rm,Rn */
	{ u32 c_ = !T; r1 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C7C237Cu, 4); goto L_0C7C237C; } goto L_0C7C2356; }  /* 0C7C2352 bf/s */
L_0C7C2356: BLKS(0x0C7C2356u);
	r3 = 0xFFFF0000u; UPD(0x0C7C2358u, 2);  /* 0C7C2356 mov.l @(disp,pc),Rn */
	r2 = R32(r15 + 0x10u); UPD(0x0C7C235Au, 1);  /* 0C7C2358 mov.l @(disp,Rm),Rn */
	r2 &= r3;  /* 0C7C235A and Rm,Rn */
	r3 = 0x1000000u; UPD(0x0C7C235Eu, 2);  /* 0C7C235C mov.l @(disp,pc),Rn */
	T = r2 == r3;  /* 0C7C235E cmp/eq Rm,Rn */
	if (T) { UPD(0x0C7C23B0u, 4); goto L_0C7C23B0; }  /* 0C7C2360 bt */
L_0C7C2362: BLKS(0x0C7C2362u);
	r2 = 0xC7C4290u; UPD(0x0C7C2364u, 1);  /* 0C7C2362 mov.l @(disp,pc),Rn */
	W32(r2, r8); UPD(0x0C7C2366u, 1);  /* 0C7C2364 mov.l Rm,@Rn */
L_0C7C2366: BLKS(0x0C7C2366u);
	r0 = r1;  /* 0C7C2366 mov Rm,Rn */
	r15 += 0x14u;  /* 0C7C2368 add #imm,Rn */
	IF(0x0C7C236Au); PR = R32(r15); r15 += 4; UPD(0x0C7C236Cu, 3);  /* 0C7C236A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C7C236Eu, 1);  /* 0C7C236C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C7C2370u, 1);  /* 0C7C236E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C7C2372u, 1);  /* 0C7C2370 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C7C2374u, 1);  /* 0C7C2372 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C7C2376u, 1);  /* 0C7C2374 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C2378u, 1);  /* 0C7C2376 mov.l @Rm+,Rn */
	IF(0x0C7C2378u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C7C2378 rts */
L_0C7C237C: BLKS(0x0C7C237Cu);
	r0 = r13;  /* 0C7C237C mov Rm,Rn */
	T = r0 == 0x6u;  /* 0C7C237E cmp/eq #imm,r0 */
	{ u32 c_ = !T; T = (r8 & r8) == 0; /* slot tst Rm,Rn */ if (c_) { UPD(0x0C7C2366u, 5); goto L_0C7C2366; } goto L_0C7C2384; }  /* 0C7C2380 bf/s */
L_0C7C2384: BLKS(0x0C7C2384u);
	{ u32 c_ = T; r2 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C7C2362u, 4); goto L_0C7C2362; } goto L_0C7C2388; }  /* 0C7C2384 bt/s */
L_0C7C2388: BLKS(0x0C7C2388u);
	T = r11 > r2;  /* 0C7C2388 cmp/hi Rm,Rn */
	r2 = 0xC7C4290u; UPD(0x0C7C238Cu, 3);  /* 0C7C238A mov.l @(disp,pc),Rn */
	{ u32 c_ = T; T = (r10 & r10) == 0; /* slot tst Rm,Rn */ if (c_) { UPD(0x0C7C2394u, 3); goto L_0C7C2394; } goto L_0C7C2390; }  /* 0C7C238C bt/s */
L_0C7C2390: BLKS(0x0C7C2390u);
	r3 = R32(r2); UPD(0x0C7C2392u, 2);  /* 0C7C2390 mov.l @Rm,Rn */
	r8 += r3;  /* 0C7C2392 add Rm,Rn */
	UPD(0x0C7C2394u, 1);
L_0C7C2394: BLKS(0x0C7C2394u);
	{ u32 c_ = T; W32(r2, r8); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C7C23C0u, 3); goto L_0C7C23C0; } UPD(0x0C7C2398u, 1); goto L_0C7C2398; }  /* 0C7C2394 bt/s */
L_0C7C2398: BLKS(0x0C7C2398u);
	r2 = R32(r14); UPD(0x0C7C239Au, 1);  /* 0C7C2398 mov.l @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C7C239A tst Rm,Rn */
	if (!T) { UPD(0x0C7C23C0u, 4); goto L_0C7C23C0; }  /* 0C7C239C bf */
L_0C7C239E: BLKS(0x0C7C239Eu);
	r2 = 0xC392AFEu; UPD(0x0C7C23A0u, 1);  /* 0C7C239E mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s8)R8(r2); UPD(0x0C7C23A2u, 1);  /* 0C7C23A0 mov.b @Rm,Rn */
	r2 = r2 & 0xFF;  /* 0C7C23A2 extu.b Rm,Rn */
	T = r2 == r12;  /* 0C7C23A4 cmp/eq Rm,Rn */
	{ u32 c_ = T; r3 = 0x4u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C7C23C0u, 5); goto L_0C7C23C0; } goto L_0C7C23AA; }  /* 0C7C23A6 bt/s */
L_0C7C23AA: BLKS(0x0C7C23AAu);
	r2 = 0xC7C4294u; UPD(0x0C7C23ACu, 2);  /* 0C7C23AA mov.l @(disp,pc),Rn */
	{ W32(r2, r3); /* slot mov.l Rm,@Rn */ UPD(0x0C7C2366u, 3); goto L_0C7C2366; }  /* 0C7C23AC bra */
L_0C7C23B0: BLKS(0x0C7C23B0u);
	r2 = 0xC7C4294u; UPD(0x0C7C23B2u, 1);  /* 0C7C23B0 mov.l @(disp,pc),Rn */
	r3 = R32(r2); UPD(0x0C7C23B4u, 1);  /* 0C7C23B2 mov.l @Rm,Rn */
	r9 |= r3;  /* 0C7C23B4 or Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C7C23B6 tst Rm,Rn */
	{ u32 c_ = !T; r3 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C7C2362u, 5); goto L_0C7C2362; } goto L_0C7C23BC; }  /* 0C7C23B8 bf/s */
L_0C7C23BC: BLKS(0x0C7C23BCu);
	{ W32(r2, r3); /* slot mov.l Rm,@Rn */ UPD(0x0C7C2362u, 4); goto L_0C7C2362; }  /* 0C7C23BC bra */
L_0C7C23C0: BLKS(0x0C7C23C0u);
	r2 = 0xC7C4294u; UPD(0x0C7C23C2u, 1);  /* 0C7C23C0 mov.l @(disp,pc),Rn */
	r2 = R32(r2); UPD(0x0C7C23C4u, 1);  /* 0C7C23C2 mov.l @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C7C23C4 tst Rm,Rn */
	if (!T) { UPD(0x0C7C2366u, 4); goto L_0C7C2366; }  /* 0C7C23C6 bf */
L_0C7C23C8: BLKS(0x0C7C23C8u);
	r2 = 0xC7C428Cu; UPD(0x0C7C23CAu, 1);  /* 0C7C23C8 mov.l @(disp,pc),Rn */
	{ W32(r2, r8); /* slot mov.l Rm,@Rn */ UPD(0x0C7C2366u, 3); goto L_0C7C2366; }  /* 0C7C23CA bra */
}

/* arr_boss74 */
void f_0C7C2408(sh3_t *c)
{
	LOCALS;
L_0C7C2408: BLKS(0x0C7C2408u);
	r1 = 0xC21CA15u; UPD(0x0C7C240Au, 1);  /* 0C7C2408 mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C240Cu, 1);  /* 0C7C240A mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C240C tst Rm,Rn */
	if (T) { UPD(0x0C7C2416u, 4); goto L_0C7C2416; }  /* 0C7C240E bt */
L_0C7C2410: BLKS(0x0C7C2410u);
	r0 = 0xC09AC00u; UPD(0x0C7C2412u, 1);  /* 0C7C2410 mov.l @(disp,pc),Rn */
	IF(0x0C7C2412u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); IF(0x0C7C2414u); ; /* slot nop */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C7C2412 jmp @Rn */
L_0C7C2416: BLKS(0x0C7C2416u);
	r1 = 0xB4u; UPD(0x0C7C2418u, 1);  /* 0C7C2416 mov.w @(disp,pc),Rn */
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C7C241Au, 1);  /* 0C7C2418 mov.l Rm,@-Rn */
	MACL = (u32)((s32)(s16)r4 * (s32)(s16)r1);  /* 0C7C241A muls.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C7C241Eu, 3);  /* 0C7C241C mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C7C2420u, 1);  /* 0C7C241E mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C7C2422u, 1);  /* 0C7C2420 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C7C2424u, 1);  /* 0C7C2422 mov.l Rm,@-Rn */
	IF(0x0C7C2424u); r1 = MACL;  /* 0C7C2424 sts macl,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C7C2428u, 2);  /* 0C7C2426 mov.l Rm,@-Rn */
	r12 = 0xC26CD40u; UPD(0x0C7C242Au, 1);  /* 0C7C2428 mov.l @(disp,pc),Rn */
	r2 = 0xC26CD48u; UPD(0x0C7C242Cu, 1);  /* 0C7C242A mov.l @(disp,pc),Rn */
	IF(0x0C7C242Cu); r15 -= 4; W32(r15, PR); UPD(0x0C7C242Eu, 1);  /* 0C7C242C sts.l pr,@-Rn */
	r2 += r1;  /* 0C7C242E add Rm,Rn */
	r11 = 0xC26CDDFu; UPD(0x0C7C2432u, 2);  /* 0C7C2430 mov.l @(disp,pc),Rn */
	r12 += r1;  /* 0C7C2432 add Rm,Rn */
	r3 = 0xC26CDE0u; UPD(0x0C7C2436u, 2);  /* 0C7C2434 mov.l @(disp,pc),Rn */
	r13 = R32(r12); UPD(0x0C7C2438u, 1);  /* 0C7C2436 mov.l @Rm,Rn */
	r11 += r1;  /* 0C7C2438 add Rm,Rn */
	r10 = R32(r2); UPD(0x0C7C243Cu, 2);  /* 0C7C243A mov.l @Rm,Rn */
	r2 = 0xC26CD7Cu; UPD(0x0C7C243Eu, 1);  /* 0C7C243C mov.l @(disp,pc),Rn */
	r2 += r1;  /* 0C7C243E add Rm,Rn */
	r1 += r3;  /* 0C7C2440 add Rm,Rn */
	r9 = (u32)(s32)(s16)R16(r2); UPD(0x0C7C2444u, 3);  /* 0C7C2442 mov.w @Rm,Rn */
	r8 = (u32)(s32)(s8)R8(r11); UPD(0x0C7C2446u, 1);  /* 0C7C2444 mov.b @Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C2448u, 1);  /* 0C7C2446 mov.b @Rm,Rn */
	T = (r9 & r9) == 0;  /* 0C7C2448 tst Rm,Rn */
	r1 = 0xC392AFEu; UPD(0x0C7C244Cu, 2);  /* 0C7C244A mov.l @(disp,pc),Rn */
	r8 = r8 & 0xFF;  /* 0C7C244C extu.b Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C2450u, 2);  /* 0C7C244E mov.b @Rm,Rn */
	{ u32 c_ = !T; r1 = 0xFFFFFFFDu; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C7C24AAu, 3); goto L_0C7C24AA; } goto L_0C7C2454; }  /* 0C7C2450 bf/s */
L_0C7C2454: BLKS(0x0C7C2454u);
	r12 = r10;  /* 0C7C2454 mov Rm,Rn */
	T = (r10 & r1) == 0;  /* 0C7C2456 tst Rm,Rn */
	{ u32 c_ = !T; r12 &= r1; /* slot and Rm,Rn */ if (c_) { UPD(0x0C7C2498u, 6); goto L_0C7C2498; } goto L_0C7C245C; }  /* 0C7C2458 bf/s */
L_0C7C245C: BLKS(0x0C7C245Cu);
	r0 = 0xC09AC00u; UPD(0x0C7C245Eu, 2);  /* 0C7C245C mov.l @(disp,pc),Rn */
	r2 = 0x10u;  /* 0C7C245E mov #imm,Rn */
	r1 = 0xC7C4298u; UPD(0x0C7C2462u, 2);  /* 0C7C2460 mov.l @(disp,pc),Rn */
	IF(0x0C7C2462u); { u32 t_ = r0; PR = 0x0C7C2466u; W32(r1, r2); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C09AC00, 0x0C09AC00u, 0x0C7C2466u); }  /* 0C7C2462 jsr @Rn */
L_0C7C2466: BLKS(0x0C7C2466u);
	T = (r10 & r10) == 0;  /* 0C7C2466 tst Rm,Rn */
	r2 = 0xC7C4290u; UPD(0x0C7C246Au, 2);  /* 0C7C2468 mov.l @(disp,pc),Rn */
	{ u32 c_ = !T; r1 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C7C2516u, 3); goto L_0C7C2516; } goto L_0C7C246E; }  /* 0C7C246A bf/s */
L_0C7C246E: BLKS(0x0C7C246Eu);
	r3 = 0xC7C4294u; UPD(0x0C7C2470u, 2);  /* 0C7C246E mov.l @(disp,pc),Rn */
	W32(r2, r9); UPD(0x0C7C2472u, 1);  /* 0C7C2470 mov.l Rm,@Rn */
	r2 = R32(r3); UPD(0x0C7C2474u, 1);  /* 0C7C2472 mov.l @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C7C2474 tst Rm,Rn */
	if (T) { UPD(0x0C7C24C4u, 4); goto L_0C7C24C4; }  /* 0C7C2476 bt */
L_0C7C2478: BLKS(0x0C7C2478u);
	T = (r8 & r8) == 0;  /* 0C7C2478 tst Rm,Rn */
	UPD(0x0C7C247Au, 1);
L_0C7C247A: BLKS(0x0C7C247Au);
	{ u32 c_ = !T; r0 = r1; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C7C2488u, 3); goto L_0C7C2488; } goto L_0C7C247E; }  /* 0C7C247A bf/s */
L_0C7C247E: BLKS(0x0C7C247Eu);
	r0 = (u32)(s32)(s8)R8(r11); UPD(0x0C7C2480u, 2);  /* 0C7C247E mov.b @Rm,Rn */
	r0 = r0 & 0xFF;  /* 0C7C2480 extu.b Rm,Rn */
	T = r0 == 0x1u;  /* 0C7C2482 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C7C250Eu, 5); goto L_0C7C250E; }  /* 0C7C2484 bt */
L_0C7C2486: BLKS(0x0C7C2486u);
	r0 = r1;  /* 0C7C2486 mov Rm,Rn */
	UPD(0x0C7C2488u, 1);
L_0C7C2488: BLKS(0x0C7C2488u);
	IF(0x0C7C2488u); PR = R32(r15); r15 += 4; UPD(0x0C7C248Au, 1);  /* 0C7C2488 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C7C248Cu, 1);  /* 0C7C248A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C7C248Eu, 1);  /* 0C7C248C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C7C2490u, 1);  /* 0C7C248E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C7C2492u, 1);  /* 0C7C2490 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C2494u, 1);  /* 0C7C2492 mov.l @Rm+,Rn */
	IF(0x0C7C2494u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C7C2494 rts */
L_0C7C2498: BLKS(0x0C7C2498u);
	r0 = 0xC09AC00u; UPD(0x0C7C249Au, 1);  /* 0C7C2498 mov.l @(disp,pc),Rn */
	IF(0x0C7C249Au); PR = R32(r15); r15 += 4; UPD(0x0C7C249Cu, 1);  /* 0C7C249A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C7C249Eu, 1);  /* 0C7C249C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C7C24A0u, 1);  /* 0C7C249E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C7C24A2u, 1);  /* 0C7C24A0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C7C24A4u, 1);  /* 0C7C24A2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C24A6u, 1);  /* 0C7C24A4 mov.l @Rm+,Rn */
	IF(0x0C7C24A6u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C7C24A6 jmp @Rn */
L_0C7C24AA: BLKS(0x0C7C24AAu);
	r0 = 0xC09AC00u; UPD(0x0C7C24ACu, 1);  /* 0C7C24AA mov.l @(disp,pc),Rn */
	IF(0x0C7C24ACu); { u32 t_ = r0; PR = 0x0C7C24B0u; IF(0x0C7C24AEu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C09AC00, 0x0C09AC00u, 0x0C7C24B0u); }  /* 0C7C24AC jsr @Rn */
L_0C7C24B0: BLKS(0x0C7C24B0u);
	T = (r10 & r10) == 0;  /* 0C7C24B0 tst Rm,Rn */
	{ u32 c_ = !T; r1 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C7C24E2u, 4); goto L_0C7C24E2; } goto L_0C7C24B6; }  /* 0C7C24B2 bf/s */
L_0C7C24B6: BLKS(0x0C7C24B6u);
	r2 = 0xC7C4290u; UPD(0x0C7C24B8u, 2);  /* 0C7C24B6 mov.l @(disp,pc),Rn */
	r3 = 0xC7C4294u; UPD(0x0C7C24BAu, 1);  /* 0C7C24B8 mov.l @(disp,pc),Rn */
	W32(r2, r9); UPD(0x0C7C24BCu, 1);  /* 0C7C24BA mov.l Rm,@Rn */
	r2 = R32(r3); UPD(0x0C7C24BEu, 1);  /* 0C7C24BC mov.l @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C7C24BE tst Rm,Rn */
	{ u32 c_ = !T; r0 = r8; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C7C24CCu, 4); goto L_0C7C24CC; } UPD(0x0C7C24C4u, 1); goto L_0C7C24C4; }  /* 0C7C24C0 bf/s */
L_0C7C24C4: BLKS(0x0C7C24C4u);
	r2 = 0xC7C428Cu; UPD(0x0C7C24C6u, 1);  /* 0C7C24C4 mov.l @(disp,pc),Rn */
	W32(r2, r9); UPD(0x0C7C24C8u, 1);  /* 0C7C24C6 mov.l Rm,@Rn */
	r2 = 0x0u;  /* 0C7C24C8 mov #imm,Rn */
	r0 = r8;  /* 0C7C24CA mov Rm,Rn */
	UPD(0x0C7C24CCu, 2);
L_0C7C24CC: BLKS(0x0C7C24CCu);
	T = r0 == 0x1u;  /* 0C7C24CC cmp/eq #imm,r0 */
	{ u32 c_ = !T; T = (r9 & r9) == 0; /* slot tst Rm,Rn */ if (c_) { UPD(0x0C7C2478u, 4); goto L_0C7C2478; } goto L_0C7C24D2; }  /* 0C7C24CE bf/s */
L_0C7C24D2: BLKS(0x0C7C24D2u);
	{ u32 c_ = T; T = (r8 & r8) == 0; /* slot tst Rm,Rn */ if (c_) { UPD(0x0C7C247Au, 4); goto L_0C7C247A; } goto L_0C7C24D6; }  /* 0C7C24D2 bt/s */
L_0C7C24D6: BLKS(0x0C7C24D6u);
	r0 = (u32)(s32)(s8)R8(r11); UPD(0x0C7C24D8u, 2);  /* 0C7C24D6 mov.b @Rm,Rn */
	T = r0 == 0x2u;  /* 0C7C24D8 cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C7C2486u, 4); goto L_0C7C2486; }  /* 0C7C24DA bf */
L_0C7C24DC: BLKS(0x0C7C24DCu);
	r2 = 0x4u;  /* 0C7C24DC mov #imm,Rn */
	{ W32(r3, r2); /* slot mov.l Rm,@Rn */ UPD(0x0C7C2486u, 4); goto L_0C7C2486; }  /* 0C7C24DE bra */
L_0C7C24E2: BLKS(0x0C7C24E2u);
	r0 = r10;  /* 0C7C24E2 mov Rm,Rn */
	T = r0 == 0x2u;  /* 0C7C24E4 cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C7C2486u, 5); goto L_0C7C2486; }  /* 0C7C24E6 bf */
L_0C7C24E8: BLKS(0x0C7C24E8u);
	r2 = 0xC7C4290u; UPD(0x0C7C24EAu, 1);  /* 0C7C24E8 mov.l @(disp,pc),Rn */
	r3 = 0xC7C4294u; UPD(0x0C7C24ECu, 1);  /* 0C7C24EA mov.l @(disp,pc),Rn */
	W32(r2, r9); UPD(0x0C7C24EEu, 1);  /* 0C7C24EC mov.l Rm,@Rn */
	r2 = R32(r3); UPD(0x0C7C24F0u, 1);  /* 0C7C24EE mov.l @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C7C24F0 tst Rm,Rn */
	{ u32 c_ = !T; T = (r13 & r13) == 0; /* slot tst Rm,Rn */ if (c_) { UPD(0x0C7C24FEu, 4); goto L_0C7C24FE; } goto L_0C7C24F6; }  /* 0C7C24F2 bf/s */
L_0C7C24F6: BLKS(0x0C7C24F6u);
	r2 = 0x1u;  /* 0C7C24F6 mov #imm,Rn */
	W32(r3, r2); UPD(0x0C7C24FAu, 3);  /* 0C7C24F8 mov.l Rm,@Rn */
	r2 = 0xC7C428Cu; UPD(0x0C7C24FCu, 1);  /* 0C7C24FA mov.l @(disp,pc),Rn */
	W32(r2, r9); UPD(0x0C7C24FEu, 1);  /* 0C7C24FC mov.l Rm,@Rn */
L_0C7C24FE: BLKS(0x0C7C24FEu);
	{ u32 c_ = T; r0 = r1; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C7C2488u, 3); goto L_0C7C2488; } goto L_0C7C2502; }  /* 0C7C24FE bt/s */
L_0C7C2502: BLKS(0x0C7C2502u);
	r2 = R32(r12); UPD(0x0C7C2504u, 2);  /* 0C7C2502 mov.l @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C7C2504 tst Rm,Rn */
	if (!T) { UPD(0x0C7C2488u, 4); goto L_0C7C2488; }  /* 0C7C2506 bf */
L_0C7C2508: BLKS(0x0C7C2508u);
	r2 = 0x4u;  /* 0C7C2508 mov #imm,Rn */
	{ W32(r3, r2); /* slot mov.l Rm,@Rn */ UPD(0x0C7C2488u, 4); goto L_0C7C2488; }  /* 0C7C250A bra */
L_0C7C250E: BLKS(0x0C7C250Eu);
	T = (r2 & r2) == 0;  /* 0C7C250E tst Rm,Rn */
	if (!T) { UPD(0x0C7C2486u, 4); goto L_0C7C2486; }  /* 0C7C2510 bf */
L_0C7C2512: BLKS(0x0C7C2512u);
	{ W32(r3, r0); /* slot mov.l Rm,@Rn */ UPD(0x0C7C2486u, 3); goto L_0C7C2486; }  /* 0C7C2512 bra */
L_0C7C2516: BLKS(0x0C7C2516u);
	{ W32(r2, r12); /* slot mov.l Rm,@Rn */ UPD(0x0C7C2486u, 3); goto L_0C7C2486; }  /* 0C7C2516 bra */
}

/* arr_boss45 */
void f_0C7C254C(sh3_t *c)
{
	LOCALS;
L_0C7C254C: BLKS(0x0C7C254Cu);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C7C254Eu, 1);  /* 0C7C254C mov.l Rm,@-Rn */
	r8 = r4;  /* 0C7C254E mov Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C7C2552u, 2);  /* 0C7C2550 mov.l Rm,@-Rn */
	r9 = r5;  /* 0C7C2552 mov Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C7C2556u, 2);  /* 0C7C2554 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C7C2558u, 1);  /* 0C7C2556 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C7C255Au, 1);  /* 0C7C2558 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C7C255Cu, 1);  /* 0C7C255A mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C7C255Eu, 1);  /* 0C7C255C mov.l Rm,@-Rn */
	IF(0x0C7C255Eu); r15 -= 4; W32(r15, PR); UPD(0x0C7C2560u, 1);  /* 0C7C255E sts.l pr,@-Rn */
	r1 = 0xC21CA15u; UPD(0x0C7C2562u, 1);  /* 0C7C2560 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF4u;  /* 0C7C2562 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C2566u, 2);  /* 0C7C2564 mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C2566 tst Rm,Rn */
	if (T) { UPD(0x0C7C2580u, 4); goto L_0C7C2580; }  /* 0C7C2568 bt */
L_0C7C256A: BLKS(0x0C7C256Au);
	r0 = 0xC08EE30u; UPD(0x0C7C256Cu, 1);  /* 0C7C256A mov.l @(disp,pc),Rn */
	r15 += 0xCu;  /* 0C7C256C add #imm,Rn */
	IF(0x0C7C256Eu); PR = R32(r15); r15 += 4; UPD(0x0C7C2570u, 2);  /* 0C7C256E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C7C2572u, 1);  /* 0C7C2570 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C7C2574u, 1);  /* 0C7C2572 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C7C2576u, 1);  /* 0C7C2574 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C7C2578u, 1);  /* 0C7C2576 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C7C257Au, 1);  /* 0C7C2578 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C257Cu, 1);  /* 0C7C257A mov.l @Rm+,Rn */
	IF(0x0C7C257Cu); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C7C257C jmp @Rn */
L_0C7C2580: BLKS(0x0C7C2580u);
	r1 = 0xB4u; UPD(0x0C7C2582u, 1);  /* 0C7C2580 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C7C2582 exts.w Rm,Rn */
	r12 = 0xC26CD40u; UPD(0x0C7C2586u, 2);  /* 0C7C2584 mov.l @(disp,pc),Rn */
	MACL = (u32)((s32)(s16)r4 * (s32)(s16)r1);  /* 0C7C2586 muls.w Rm,Rn */
	r3 = 0xC26CD48u; UPD(0x0C7C258Au, 3);  /* 0C7C2588 mov.l @(disp,pc),Rn */
	r14 = 0xC26CDDFu; UPD(0x0C7C258Cu, 1);  /* 0C7C258A mov.l @(disp,pc),Rn */
	IF(0x0C7C258Cu); r2 = MACL;  /* 0C7C258C sts macl,Rn */
	r12 += r2;  /* 0C7C258E add Rm,Rn */
	r1 = R32(r12); UPD(0x0C7C2592u, 3);  /* 0C7C2590 mov.l @Rm,Rn */
	r3 += r2;  /* 0C7C2592 add Rm,Rn */
	r10 = R32(r3); UPD(0x0C7C2596u, 2);  /* 0C7C2594 mov.l @Rm,Rn */
	r14 += r2;  /* 0C7C2596 add Rm,Rn */
	W32(r15 + 0x8u, r1); UPD(0x0C7C259Au, 2);  /* 0C7C2598 mov.l Rm,@(disp,Rn) */
	r3 = 0xC26CD7Cu; UPD(0x0C7C259Cu, 1);  /* 0C7C259A mov.l @(disp,pc),Rn */
	r0 = r10;  /* 0C7C259C mov Rm,Rn */
	r1 = 0xC26CDE0u; UPD(0x0C7C25A0u, 2);  /* 0C7C259E mov.l @(disp,pc),Rn */
	T = r0 == 0x2Au;  /* 0C7C25A0 cmp/eq #imm,r0 */
	r3 += r2;  /* 0C7C25A2 add Rm,Rn */
	r2 += r1;  /* 0C7C25A4 add Rm,Rn */
	r11 = (u32)(s32)(s16)R16(r3); UPD(0x0C7C25A8u, 4);  /* 0C7C25A6 mov.w @Rm,Rn */
	r13 = (u32)(s32)(s8)R8(r14); UPD(0x0C7C25AAu, 1);  /* 0C7C25A8 mov.b @Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r2); UPD(0x0C7C25ACu, 1);  /* 0C7C25AA mov.b @Rm,Rn */
	r2 = 0xC392AFEu; UPD(0x0C7C25AEu, 1);  /* 0C7C25AC mov.l @(disp,pc),Rn */
	r13 = r13 & 0xFF;  /* 0C7C25AE extu.b Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r2); UPD(0x0C7C25B2u, 2);  /* 0C7C25B0 mov.b @Rm,Rn */
	{ u32 c_ = T; T = r0 == 0x3Cu; /* slot cmp/eq #imm,r0 */ if (c_) { UPD(0x0C7C260Au, 3); goto L_0C7C260A; } goto L_0C7C25B6; }  /* 0C7C25B2 bt/s */
L_0C7C25B6: BLKS(0x0C7C25B6u);
	if (T) { UPD(0x0C7C260Au, 4); goto L_0C7C260A; }  /* 0C7C25B6 bt */
L_0C7C25B8: BLKS(0x0C7C25B8u);
	r0 = 0xC08EE30u; UPD(0x0C7C25BAu, 1);  /* 0C7C25B8 mov.l @(disp,pc),Rn */
	IF(0x0C7C25BAu); { u32 t_ = r0; PR = 0x0C7C25BEu; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C08EE30, 0x0C08EE30u, 0x0C7C25BEu); }  /* 0C7C25BA jsr @Rn */
L_0C7C25BE: BLKS(0x0C7C25BEu);
	r2 = r0;  /* 0C7C25BE mov Rm,Rn */
	r0 = r10;  /* 0C7C25C0 mov Rm,Rn */
	T = r0 == 0x31u;  /* 0C7C25C2 cmp/eq #imm,r0 */
	{ u32 c_ = T; r3 = 0x31u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C7C25ECu, 6); goto L_0C7C25EC; } goto L_0C7C25C8; }  /* 0C7C25C4 bt/s */
L_0C7C25C8: BLKS(0x0C7C25C8u);
	T = r10 > r3;  /* 0C7C25C8 cmp/hi Rm,Rn */
	{ u32 c_ = T; T = (r10 & r10) == 0; /* slot tst Rm,Rn */ if (c_) { UPD(0x0C7C25E8u, 5); goto L_0C7C25E8; } goto L_0C7C25CE; }  /* 0C7C25CA bt/s */
L_0C7C25CE: BLKS(0x0C7C25CEu);
	{ u32 c_ = T; r1 = R32(r15 + 0x8u); /* slot mov.l @(disp,Rm),Rn */ if (c_) { UPD(0x0C7C264Eu, 4); goto L_0C7C264E; } UPD(0x0C7C25D2u, 1); goto L_0C7C25D2; }  /* 0C7C25CE bt/s */
L_0C7C25D2: BLKS(0x0C7C25D2u);
	r0 = r2;  /* 0C7C25D2 mov Rm,Rn */
	UPD(0x0C7C25D4u, 1);
L_0C7C25D4: BLKS(0x0C7C25D4u);
	r15 += 0xCu;  /* 0C7C25D4 add #imm,Rn */
	IF(0x0C7C25D6u); PR = R32(r15); r15 += 4; UPD(0x0C7C25D8u, 2);  /* 0C7C25D6 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C7C25DAu, 1);  /* 0C7C25D8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C7C25DCu, 1);  /* 0C7C25DA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C7C25DEu, 1);  /* 0C7C25DC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C7C25E0u, 1);  /* 0C7C25DE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C7C25E2u, 1);  /* 0C7C25E0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C25E4u, 1);  /* 0C7C25E2 mov.l @Rm+,Rn */
	IF(0x0C7C25E4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C7C25E4 rts */
L_0C7C25E8: BLKS(0x0C7C25E8u);
	T = r0 == 0x3Du;  /* 0C7C25E8 cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C7C25D2u, 4); goto L_0C7C25D2; }  /* 0C7C25EA bf */
L_0C7C25EC: BLKS(0x0C7C25ECu);
	r3 = 0xC7C4290u; UPD(0x0C7C25EEu, 1);  /* 0C7C25EC mov.l @(disp,pc),Rn */
	r0 = r2;  /* 0C7C25EE mov Rm,Rn */
	r1 = R32(r3); UPD(0x0C7C25F2u, 2);  /* 0C7C25F0 mov.l @Rm,Rn */
	r1 += r11;  /* 0C7C25F2 add Rm,Rn */
	W32(r3, r1); UPD(0x0C7C25F6u, 2);  /* 0C7C25F4 mov.l Rm,@Rn */
	r15 += 0xCu;  /* 0C7C25F6 add #imm,Rn */
	IF(0x0C7C25F8u); PR = R32(r15); r15 += 4; UPD(0x0C7C25FAu, 2);  /* 0C7C25F8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C7C25FCu, 1);  /* 0C7C25FA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C7C25FEu, 1);  /* 0C7C25FC mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C7C2600u, 1);  /* 0C7C25FE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C7C2602u, 1);  /* 0C7C2600 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C7C2604u, 1);  /* 0C7C2602 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C2606u, 1);  /* 0C7C2604 mov.l @Rm+,Rn */
	IF(0x0C7C2606u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C7C2606 rts */
L_0C7C260A: BLKS(0x0C7C260Au);
	r0 = 0xC7C115Cu; UPD(0x0C7C260Cu, 1);  /* 0C7C260A mov.l @(disp,pc),Rn */
	r5 = 0x0u;  /* 0C7C260C mov #imm,Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C7C2610u, 2);  /* 0C7C260E mov.l Rm,@(disp,Rn) */
	IF(0x0C7C2610u); { u32 t_ = r0; PR = 0x0C7C2614u; W32(r15, r7); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C7C115C, 0x0C7C115Cu, 0x0C7C2614u); }  /* 0C7C2610 jsr @Rn */
L_0C7C2614: BLKS(0x0C7C2614u);
	r12 = r0;  /* 0C7C2614 mov Rm,Rn */
	r0 = 0xC08EE30u; UPD(0x0C7C2618u, 2);  /* 0C7C2616 mov.l @(disp,pc),Rn */
	r7 = R32(r15); UPD(0x0C7C261Au, 1);  /* 0C7C2618 mov.l @Rm,Rn */
	r5 = r9;  /* 0C7C261A mov Rm,Rn */
	r6 = R32(r15 + 0x4u); UPD(0x0C7C261Eu, 2);  /* 0C7C261C mov.l @(disp,Rm),Rn */
	IF(0x0C7C261Eu); { u32 t_ = r0; PR = 0x0C7C2622u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C08EE30, 0x0C08EE30u, 0x0C7C2622u); }  /* 0C7C261E jsr @Rn */
L_0C7C2622: BLKS(0x0C7C2622u);
	r2 = r0;  /* 0C7C2622 mov Rm,Rn */
	r0 = r10;  /* 0C7C2624 mov Rm,Rn */
	T = r0 == 0x2Au;  /* 0C7C2626 cmp/eq #imm,r0 */
	{ u32 c_ = T; IF(0x0C7C262Au); T = (s32)r12 >= 0; /* slot cmp/pz Rn */ if (c_) { UPD(0x0C7C266Au, 6); goto L_0C7C266A; } goto L_0C7C262C; }  /* 0C7C2628 bt/s */
L_0C7C262C: BLKS(0x0C7C262Cu);
	{ u32 c_ = !T; r0 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C7C25D4u, 4); goto L_0C7C25D4; } goto L_0C7C2630; }  /* 0C7C262C bf/s */
L_0C7C2630: BLKS(0x0C7C2630u);
	r3 = 0xC7C4290u; UPD(0x0C7C2632u, 2);  /* 0C7C2630 mov.l @(disp,pc),Rn */
	T = (r13 & r13) == 0;  /* 0C7C2632 tst Rm,Rn */
	r1 = R32(r3); UPD(0x0C7C2636u, 2);  /* 0C7C2634 mov.l @Rm,Rn */
	r1 += r11;  /* 0C7C2636 add Rm,Rn */
	{ u32 c_ = !T; W32(r3, r1); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C7C25D4u, 4); goto L_0C7C25D4; } UPD(0x0C7C263Cu, 1); goto L_0C7C263C; }  /* 0C7C2638 bf/s */
L_0C7C263C: BLKS(0x0C7C263Cu);
	r0 = (u32)(s32)(s8)R8(r14); UPD(0x0C7C263Eu, 1);  /* 0C7C263C mov.b @Rm,Rn */
	r0 = r0 & 0xFF;  /* 0C7C263E extu.b Rm,Rn */
	T = r0 == 0x1u;  /* 0C7C2640 cmp/eq #imm,r0 */
	if (!T) { UPD(0x0C7C25D2u, 5); goto L_0C7C25D2; }  /* 0C7C2642 bf */
L_0C7C2644: BLKS(0x0C7C2644u);
	r3 = 0xC7C4294u; UPD(0x0C7C2646u, 1);  /* 0C7C2644 mov.l @(disp,pc),Rn */
	W32(r3, r0); UPD(0x0C7C2648u, 1);  /* 0C7C2646 mov.l Rm,@Rn */
	r3 = 0xC7C428Cu; UPD(0x0C7C264Au, 1);  /* 0C7C2648 mov.l @(disp,pc),Rn */
	{ W32(r3, r1); /* slot mov.l Rm,@Rn */ UPD(0x0C7C25D2u, 3); goto L_0C7C25D2; }  /* 0C7C264A bra */
L_0C7C264E: BLKS(0x0C7C264Eu);
	r3 = 0xC7C4290u; UPD(0x0C7C2650u, 1);  /* 0C7C264E mov.l @(disp,pc),Rn */
	T = (r1 & r1) == 0;  /* 0C7C2650 tst Rm,Rn */
	{ u32 c_ = T; W32(r3, r11); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C7C25D2u, 4); goto L_0C7C25D2; } UPD(0x0C7C2656u, 1); goto L_0C7C2656; }  /* 0C7C2652 bt/s */
L_0C7C2656: BLKS(0x0C7C2656u);
	T = (r11 & r11) == 0;  /* 0C7C2656 tst Rm,Rn */
	{ u32 c_ = T; r0 = r2; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C7C25D4u, 4); goto L_0C7C25D4; } goto L_0C7C265C; }  /* 0C7C2658 bt/s */
L_0C7C265C: BLKS(0x0C7C265Cu);
	r1 = R32(r12); UPD(0x0C7C265Eu, 2);  /* 0C7C265C mov.l @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C265E tst Rm,Rn */
	{ u32 c_ = !T; r3 = 0x4u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C7C25D4u, 4); goto L_0C7C25D4; } goto L_0C7C2664; }  /* 0C7C2660 bf/s */
L_0C7C2664: BLKS(0x0C7C2664u);
	r1 = 0xC7C4294u; UPD(0x0C7C2666u, 2);  /* 0C7C2664 mov.l @(disp,pc),Rn */
	{ W32(r1, r3); /* slot mov.l Rm,@Rn */ UPD(0x0C7C25D4u, 3); goto L_0C7C25D4; }  /* 0C7C2666 bra */
L_0C7C266A: BLKS(0x0C7C266Au);
	if (!T) { UPD(0x0C7C25D2u, 3); goto L_0C7C25D2; }  /* 0C7C266A bf */
L_0C7C266C: BLKS(0x0C7C266Cu);
	{ IF(0x0C7C266Eu); ; /* slot nop */ UPD(0x0C7C25ECu, 3); goto L_0C7C25EC; }  /* 0C7C266C bra */
}

/* arr_boss42 */
void f_0C7C26A4(sh3_t *c)
{
	LOCALS;
L_0C7C26A4: BLKS(0x0C7C26A4u);
	r1 = 0xC21CA15u; UPD(0x0C7C26A6u, 1);  /* 0C7C26A4 mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C26A8u, 1);  /* 0C7C26A6 mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C26A8 tst Rm,Rn */
	if (T) { UPD(0x0C7C26B2u, 4); goto L_0C7C26B2; }  /* 0C7C26AA bt */
L_0C7C26AC: BLKS(0x0C7C26ACu);
	r0 = 0xC08C0D0u; UPD(0x0C7C26AEu, 1);  /* 0C7C26AC mov.l @(disp,pc),Rn */
	IF(0x0C7C26AEu); { u32 tv_ = r0; u32 t_ = PHYS(tv_); IF(0x0C7C26B0u); ; /* slot nop */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C7C26AE jmp @Rn */
L_0C7C26B2: BLKS(0x0C7C26B2u);
	r1 = 0xB4u; UPD(0x0C7C26B4u, 1);  /* 0C7C26B2 mov.w @(disp,pc),Rn */
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C7C26B6u, 1);  /* 0C7C26B4 mov.l Rm,@-Rn */
	MACL = (u32)((s32)(s16)r4 * (s32)(s16)r1);  /* 0C7C26B6 muls.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C7C26BAu, 3);  /* 0C7C26B8 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C7C26BCu, 1);  /* 0C7C26BA mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C7C26BEu, 1);  /* 0C7C26BC mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C7C26C0u, 1);  /* 0C7C26BE mov.l Rm,@-Rn */
	IF(0x0C7C26C0u); r1 = MACL;  /* 0C7C26C0 sts macl,Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C7C26C4u, 2);  /* 0C7C26C2 mov.l Rm,@-Rn */
	r11 = 0xC26CD40u; UPD(0x0C7C26C6u, 1);  /* 0C7C26C4 mov.l @(disp,pc),Rn */
	r2 = 0xC26CD48u; UPD(0x0C7C26C8u, 1);  /* 0C7C26C6 mov.l @(disp,pc),Rn */
	IF(0x0C7C26C8u); r15 -= 4; W32(r15, PR); UPD(0x0C7C26CAu, 1);  /* 0C7C26C8 sts.l pr,@-Rn */
	r2 += r1;  /* 0C7C26CA add Rm,Rn */
	r0 = 0xC08C0D0u; UPD(0x0C7C26CEu, 2);  /* 0C7C26CC mov.l @(disp,pc),Rn */
	r11 += r1;  /* 0C7C26CE add Rm,Rn */
	r13 = 0xC392AFEu; UPD(0x0C7C26D2u, 2);  /* 0C7C26D0 mov.l @(disp,pc),Rn */
	r9 = R32(r11); UPD(0x0C7C26D4u, 1);  /* 0C7C26D2 mov.l @Rm,Rn */
	r12 = R32(r2); UPD(0x0C7C26D6u, 1);  /* 0C7C26D4 mov.l @Rm,Rn */
	r2 = 0xC26CD7Cu; UPD(0x0C7C26D8u, 1);  /* 0C7C26D6 mov.l @(disp,pc),Rn */
	r2 += r1;  /* 0C7C26D8 add Rm,Rn */
	r8 = (u32)(s32)(s16)R16(r2); UPD(0x0C7C26DCu, 2);  /* 0C7C26DA mov.w @Rm,Rn */
	r2 = 0xC26CDDFu; UPD(0x0C7C26DEu, 1);  /* 0C7C26DC mov.l @(disp,pc),Rn */
	r2 += r1;  /* 0C7C26DE add Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r2); UPD(0x0C7C26E2u, 2);  /* 0C7C26E0 mov.b @Rm,Rn */
	r2 = 0xC26CDE0u; UPD(0x0C7C26E4u, 1);  /* 0C7C26E2 mov.l @(disp,pc),Rn */
	r1 += r2;  /* 0C7C26E4 add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C26E8u, 2);  /* 0C7C26E6 mov.b @Rm,Rn */
	r10 = (u32)(s32)(s8)R8(r13); UPD(0x0C7C26EAu, 1);  /* 0C7C26E8 mov.b @Rm,Rn */
	IF(0x0C7C26EAu); { u32 t_ = r0; PR = 0x0C7C26EEu; r10 = r10 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C08C0D0, 0x0C08C0D0u, 0x0C7C26EEu); }  /* 0C7C26EA jsr @Rn */
L_0C7C26EE: BLKS(0x0C7C26EEu);
	T = (r12 & r12) == 0;  /* 0C7C26EE tst Rm,Rn */
	{ u32 c_ = !T; T = (r9 & r9) == 0; /* slot tst Rm,Rn */ if (c_) { UPD(0x0C7C2714u, 4); goto L_0C7C2714; } goto L_0C7C26F4; }  /* 0C7C26F0 bf/s */
L_0C7C26F4: BLKS(0x0C7C26F4u);
	r1 = 0xC7C4290u; UPD(0x0C7C26F6u, 2);  /* 0C7C26F4 mov.l @(disp,pc),Rn */
	r8 = (u32)(s32)(s16)r8;  /* 0C7C26F6 exts.w Rm,Rn */
	{ u32 c_ = T; W32(r1, r8); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C7C2714u, 4); goto L_0C7C2714; } UPD(0x0C7C26FCu, 1); goto L_0C7C26FC; }  /* 0C7C26F8 bt/s */
L_0C7C26FC: BLKS(0x0C7C26FCu);
	T = (r8 & r8) == 0;  /* 0C7C26FC tst Rm,Rn */
	if (T) { UPD(0x0C7C2714u, 4); goto L_0C7C2714; }  /* 0C7C26FE bt */
L_0C7C2700: BLKS(0x0C7C2700u);
	r1 = R32(r11); UPD(0x0C7C2702u, 1);  /* 0C7C2700 mov.l @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C2702 tst Rm,Rn */
	if (!T) { UPD(0x0C7C2714u, 4); goto L_0C7C2714; }  /* 0C7C2704 bf */
L_0C7C2706: BLKS(0x0C7C2706u);
	r1 = (u32)(s32)(s8)R8(r13); UPD(0x0C7C2708u, 1);  /* 0C7C2706 mov.b @Rm,Rn */
	r1 = r1 & 0xFF;  /* 0C7C2708 extu.b Rm,Rn */
	T = r1 == r10;  /* 0C7C270A cmp/eq Rm,Rn */
	{ u32 c_ = T; r2 = 0x4u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C7C2714u, 5); goto L_0C7C2714; } goto L_0C7C2710; }  /* 0C7C270C bt/s */
L_0C7C2710: BLKS(0x0C7C2710u);
	r1 = 0xC7C4294u; UPD(0x0C7C2712u, 2);  /* 0C7C2710 mov.l @(disp,pc),Rn */
	W32(r1, r2); UPD(0x0C7C2714u, 1);  /* 0C7C2712 mov.l Rm,@Rn */
L_0C7C2714: BLKS(0x0C7C2714u);
	IF(0x0C7C2714u); PR = R32(r15); r15 += 4; UPD(0x0C7C2716u, 1);  /* 0C7C2714 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C7C2718u, 1);  /* 0C7C2716 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C7C271Au, 1);  /* 0C7C2718 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C7C271Cu, 1);  /* 0C7C271A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C7C271Eu, 1);  /* 0C7C271C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C2720u, 1);  /* 0C7C271E mov.l @Rm+,Rn */
	IF(0x0C7C2720u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C7C2720 rts */
}

/* arr_spawn_t42 */
void f_0C7C2750(sh3_t *c)
{
	LOCALS;
L_0C7C2750: BLKS(0x0C7C2750u);
	r0 = 0xC08ABD0u; UPD(0x0C7C2752u, 1);  /* 0C7C2750 mov.l @(disp,pc),Rn */
	IF(0x0C7C2752u); r15 -= 4; W32(r15, PR); UPD(0x0C7C2754u, 1);  /* 0C7C2752 sts.l pr,@-Rn */
	IF(0x0C7C2754u); { u32 t_ = r0; PR = 0x0C7C2758u; IF(0x0C7C2756u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C08ABD0, 0x0C08ABD0u, 0x0C7C2758u); }  /* 0C7C2754 jsr @Rn */
L_0C7C2758: BLKS(0x0C7C2758u);
	r1 = 0xC21CA15u; UPD(0x0C7C275Au, 1);  /* 0C7C2758 mov.l @(disp,pc),Rn */
	T = (r0 & r0) == 0;  /* 0C7C275A tst Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C275Eu, 2);  /* 0C7C275C mov.b @Rm,Rn */
	{ u32 c_ = T; r1 = r1 & 0xFF; /* slot extu.b Rm,Rn */ if (c_) { UPD(0x0C7C2768u, 3); goto L_0C7C2768; } goto L_0C7C2762; }  /* 0C7C275E bt/s */
L_0C7C2762: BLKS(0x0C7C2762u);
	T = (r1 & r1) == 0;  /* 0C7C2762 tst Rm,Rn */
	{ u32 c_ = T; r2 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C7C276Eu, 5); goto L_0C7C276E; } UPD(0x0C7C2768u, 1); goto L_0C7C2768; }  /* 0C7C2764 bt/s */
L_0C7C2768: BLKS(0x0C7C2768u);
	IF(0x0C7C2768u); PR = R32(r15); r15 += 4; UPD(0x0C7C276Au, 1);  /* 0C7C2768 lds.l @Rn+,pr */
	IF(0x0C7C276Au); { u32 t_ = PR; IF(0x0C7C276Cu); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C7C276A rts */
L_0C7C276E: BLKS(0x0C7C276Eu);
	r1 = 0xC7C4294u; UPD(0x0C7C2770u, 1);  /* 0C7C276E mov.l @(disp,pc),Rn */
	W32(r1, r2); UPD(0x0C7C2772u, 1);  /* 0C7C2770 mov.l Rm,@Rn */
	r1 = 0xC2755BCu; UPD(0x0C7C2774u, 1);  /* 0C7C2772 mov.l @(disp,pc),Rn */
	r2 = (u32)(s32)(s16)R16(r1); UPD(0x0C7C2776u, 1);  /* 0C7C2774 mov.w @Rm,Rn */
	r1 = 0xB4u; UPD(0x0C7C2778u, 1);  /* 0C7C2776 mov.w @(disp,pc),Rn */
	MACL = (u32)((s32)(s16)r2 * (s32)(s16)r1);  /* 0C7C2778 muls.w Rm,Rn */
	r2 = 0xC26CD7Cu; UPD(0x0C7C277Cu, 3);  /* 0C7C277A mov.l @(disp,pc),Rn */
	IF(0x0C7C277Cu); r1 = MACL;  /* 0C7C277C sts macl,Rn */
	r1 += r2;  /* 0C7C277E add Rm,Rn */
	r2 = 0xC7C428Cu; UPD(0x0C7C2782u, 3);  /* 0C7C2780 mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s16)R16(r1); UPD(0x0C7C2784u, 1);  /* 0C7C2782 mov.w @Rm,Rn */
	W32(r2, r1); UPD(0x0C7C2786u, 1);  /* 0C7C2784 mov.l Rm,@Rn */
	r2 = 0xC7C4290u; UPD(0x0C7C2788u, 1);  /* 0C7C2786 mov.l @(disp,pc),Rn */
	W32(r2, r1); UPD(0x0C7C278Au, 1);  /* 0C7C2788 mov.l Rm,@Rn */
	IF(0x0C7C278Au); PR = R32(r15); r15 += 4; UPD(0x0C7C278Cu, 1);  /* 0C7C278A lds.l @Rn+,pr */
	IF(0x0C7C278Cu); { u32 t_ = PR; IF(0x0C7C278Eu); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C7C278C rts */
}

/* arr_part_item */
void f_0C7C27B0(sh3_t *c)
{
	LOCALS;
L_0C7C27B0: BLKS(0x0C7C27B0u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C7C27B2u, 1);  /* 0C7C27B0 mov.l Rm,@-Rn */
	IF(0x0C7C27B2u); r15 -= 4; W32(r15, PR); UPD(0x0C7C27B4u, 1);  /* 0C7C27B2 sts.l pr,@-Rn */
	r15 += 0xFFFFFFF8u;  /* 0C7C27B4 add #imm,Rn */
	r0 = 0xC06CC20u; UPD(0x0C7C27B8u, 2);  /* 0C7C27B6 mov.l @(disp,pc),Rn */
	r1 = R32(r15 + 0x14u); UPD(0x0C7C27BAu, 1);  /* 0C7C27B8 mov.l @(disp,Rm),Rn */
	W32(r15 + 0x4u, r1); UPD(0x0C7C27BCu, 1);  /* 0C7C27BA mov.l Rm,@(disp,Rn) */
	r1 = R32(r15 + 0x10u); UPD(0x0C7C27BEu, 1);  /* 0C7C27BC mov.l @(disp,Rm),Rn */
	IF(0x0C7C27BEu); { u32 t_ = r0; PR = 0x0C7C27C2u; W32(r15, r1); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C06CC20, 0x0C06CC20u, 0x0C7C27C2u); }  /* 0C7C27BE jsr @Rn */
L_0C7C27C2: BLKS(0x0C7C27C2u);
	r1 = 0xC21CA15u; UPD(0x0C7C27C4u, 1);  /* 0C7C27C2 mov.l @(disp,pc),Rn */
	r8 = r0;  /* 0C7C27C4 mov Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C27C8u, 2);  /* 0C7C27C6 mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C27C8 tst Rm,Rn */
	{ u32 c_ = !T; r0 = r8; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C7C27D8u, 4); goto L_0C7C27D8; } goto L_0C7C27CE; }  /* 0C7C27CA bf/s */
L_0C7C27CE: BLKS(0x0C7C27CEu);
	r1 = 0xC7C4294u; UPD(0x0C7C27D0u, 2);  /* 0C7C27CE mov.l @(disp,pc),Rn */
	r0 = R32(r1); UPD(0x0C7C27D2u, 1);  /* 0C7C27D0 mov.l @Rm,Rn */
	T = r0 == 0x3u;  /* 0C7C27D2 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C7C27E0u, 4); goto L_0C7C27E0; }  /* 0C7C27D4 bt */
L_0C7C27D6: BLKS(0x0C7C27D6u);
	r0 = r8;  /* 0C7C27D6 mov Rm,Rn */
	UPD(0x0C7C27D8u, 1);
L_0C7C27D8: BLKS(0x0C7C27D8u);
	r15 += 0x8u;  /* 0C7C27D8 add #imm,Rn */
	IF(0x0C7C27DAu); PR = R32(r15); r15 += 4; UPD(0x0C7C27DCu, 2);  /* 0C7C27DA lds.l @Rn+,pr */
	IF(0x0C7C27DCu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C7C27DC rts */
L_0C7C27E0: BLKS(0x0C7C27E0u);
	r1 = 0xC7C006Cu; UPD(0x0C7C27E2u, 1);  /* 0C7C27E0 mov.l @(disp,pc),Rn */
	r4 = 0x100000u; UPD(0x0C7C27E4u, 1);  /* 0C7C27E2 mov.l @(disp,pc),Rn */
	IF(0x0C7C27E4u); { u32 t_ = r1; PR = 0x0C7C27E8u; IF(0x0C7C27E6u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C7C006C, 0x0C7C006Cu, 0x0C7C27E8u); }  /* 0C7C27E4 jsr @Rn */
L_0C7C27E8: BLKS(0x0C7C27E8u);
	r0 = r8;  /* 0C7C27E8 mov Rm,Rn */
	r15 += 0x8u;  /* 0C7C27EA add #imm,Rn */
	IF(0x0C7C27ECu); PR = R32(r15); r15 += 4; UPD(0x0C7C27EEu, 3);  /* 0C7C27EC lds.l @Rn+,pr */
	IF(0x0C7C27EEu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C7C27EE rts */
}

/* arr_death_88580 */
void f_0C7C2808(sh3_t *c)
{
	LOCALS;
L_0C7C2808: BLKS(0x0C7C2808u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C7C280Au, 1);  /* 0C7C2808 mov.l Rm,@-Rn */
	r8 = r4;  /* 0C7C280A mov Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C7C280Eu, 2);  /* 0C7C280C mov.l Rm,@-Rn */
	r9 = r5;  /* 0C7C280E mov Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C7C2812u, 2);  /* 0C7C2810 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C7C2814u, 1);  /* 0C7C2812 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C7C2816u, 1);  /* 0C7C2814 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C7C2818u, 1);  /* 0C7C2816 mov.l Rm,@-Rn */
	IF(0x0C7C2818u); r15 -= 4; W32(r15, PR); UPD(0x0C7C281Au, 1);  /* 0C7C2818 sts.l pr,@-Rn */
	r1 = 0xC21CA15u; UPD(0x0C7C281Cu, 1);  /* 0C7C281A mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C7C281C add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C2820u, 2);  /* 0C7C281E mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C2820 tst Rm,Rn */
	if (!T) { UPD(0x0C7C2896u, 4); goto L_0C7C2896; }  /* 0C7C2822 bf */
L_0C7C2824: BLKS(0x0C7C2824u);
	r10 = 0xC7C4294u; UPD(0x0C7C2826u, 1);  /* 0C7C2824 mov.l @(disp,pc),Rn */
	r0 = R32(r10); UPD(0x0C7C2828u, 1);  /* 0C7C2826 mov.l @Rm,Rn */
	T = r0 == 0x3u;  /* 0C7C2828 cmp/eq #imm,r0 */
	{ u32 c_ = !T; r4 = (u32)(s32)(s16)r4; /* slot exts.w Rm,Rn */ if (c_) { UPD(0x0C7C2896u, 4); goto L_0C7C2896; } goto L_0C7C282E; }  /* 0C7C282A bf/s */
L_0C7C282E: BLKS(0x0C7C282Eu);
	r1 = 0xB4u; UPD(0x0C7C2830u, 2);  /* 0C7C282E mov.w @(disp,pc),Rn */
	MACL = (u32)((s32)(s16)r4 * (s32)(s16)r1);  /* 0C7C2830 muls.w Rm,Rn */
	r1 = 0xC26CD48u; UPD(0x0C7C2834u, 3);  /* 0C7C2832 mov.l @(disp,pc),Rn */
	IF(0x0C7C2834u); r11 = MACL;  /* 0C7C2834 sts macl,Rn */
	r1 += r11;  /* 0C7C2836 add Rm,Rn */
	r0 = R32(r1); UPD(0x0C7C283Au, 3);  /* 0C7C2838 mov.l @Rm,Rn */
	T = r0 == 0x4Au;  /* 0C7C283A cmp/eq #imm,r0 */
	{ u32 c_ = T; r1 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C7C28AEu, 4); goto L_0C7C28AE; } goto L_0C7C2840; }  /* 0C7C283C bt/s */
L_0C7C2840: BLKS(0x0C7C2840u);
	r2 = r0;  /* 0C7C2840 mov Rm,Rn */
	r2 += 0xFFFFFFB4u;  /* 0C7C2842 add #imm,Rn */
	T = r2 > r1;  /* 0C7C2844 cmp/hi Rm,Rn */
	{ u32 c_ = !T; r0 += 0xFFFFFFA4u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C7C2896u, 7); goto L_0C7C2896; } goto L_0C7C284A; }  /* 0C7C2846 bf/s */
L_0C7C284A: BLKS(0x0C7C284Au);
	T = r0 > r1;  /* 0C7C284A cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C7C28E2u, 5); goto L_0C7C28E2; }  /* 0C7C284C bf */
L_0C7C284E: BLKS(0x0C7C284Eu);
	r0 = 0xC088580u; UPD(0x0C7C2850u, 1);  /* 0C7C284E mov.l @(disp,pc),Rn */
	IF(0x0C7C2850u); { u32 t_ = r0; PR = 0x0C7C2854u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C088580, 0x0C088580u, 0x0C7C2854u); }  /* 0C7C2850 jsr @Rn */
L_0C7C2854: BLKS(0x0C7C2854u);
	r8 = r0;  /* 0C7C2854 mov Rm,Rn */
	UPD(0x0C7C2856u, 1);
L_0C7C2856: BLKS(0x0C7C2856u);
	r1 = 0xC26CD40u; UPD(0x0C7C2858u, 1);  /* 0C7C2856 mov.l @(disp,pc),Rn */
	r1 += r11;  /* 0C7C2858 add Rm,Rn */
	r1 = R32(r1); UPD(0x0C7C285Cu, 2);  /* 0C7C285A mov.l @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C285C tst Rm,Rn */
	{ u32 c_ = !T; r0 = r8; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C7C2884u, 4); goto L_0C7C2884; } goto L_0C7C2862; }  /* 0C7C285E bf/s */
L_0C7C2862: BLKS(0x0C7C2862u);
	r0 = R32(r10); UPD(0x0C7C2864u, 2);  /* 0C7C2862 mov.l @Rm,Rn */
	T = r0 == 0x3u;  /* 0C7C2864 cmp/eq #imm,r0 */
	{ u32 c_ = !T; r0 = r8; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C7C2884u, 4); goto L_0C7C2884; } goto L_0C7C286A; }  /* 0C7C2866 bf/s */
L_0C7C286A: BLKS(0x0C7C286Au);
	r1 = 0xC26CD80u; UPD(0x0C7C286Cu, 2);  /* 0C7C286A mov.l @(disp,pc),Rn */
	r2 = 0xC34Fu; UPD(0x0C7C286Eu, 1);  /* 0C7C286C mov.l @(disp,pc),Rn */
	r11 += r1;  /* 0C7C286E add Rm,Rn */
	r1 = R32(r11); UPD(0x0C7C2872u, 2);  /* 0C7C2870 mov.l @Rm,Rn */
	T = r1 > r2;  /* 0C7C2872 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C7C2884u, 4); goto L_0C7C2884; }  /* 0C7C2874 bt */
L_0C7C2876: BLKS(0x0C7C2876u);
	r4 = 0x4000u; UPD(0x0C7C2878u, 1);  /* 0C7C2876 mov.w @(disp,pc),Rn */
	r4 += r1;  /* 0C7C2878 add Rm,Rn */
	r1 = 0xC7C006Cu; UPD(0x0C7C287Cu, 2);  /* 0C7C287A mov.l @(disp,pc),Rn */
	IF(0x0C7C287Cu); r4 <<= 2;  /* 0C7C287C shll2 Rn */
	IF(0x0C7C287Eu); { u32 t_ = r1; PR = 0x0C7C2882u; IF(0x0C7C2880u); r4 <<= 2; /* slot shll2 Rn */ UPD(t_, 3); CALLP(t_, f_0C7C006C, 0x0C7C006Cu, 0x0C7C2882u); }  /* 0C7C287E jsr @Rn */
L_0C7C2882: BLKS(0x0C7C2882u);
	r0 = r8;  /* 0C7C2882 mov Rm,Rn */
	UPD(0x0C7C2884u, 1);
L_0C7C2884: BLKS(0x0C7C2884u);
	r15 += 0x8u;  /* 0C7C2884 add #imm,Rn */
	IF(0x0C7C2886u); PR = R32(r15); r15 += 4; UPD(0x0C7C2888u, 2);  /* 0C7C2886 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C7C288Au, 1);  /* 0C7C2888 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C7C288Cu, 1);  /* 0C7C288A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C7C288Eu, 1);  /* 0C7C288C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C7C2890u, 1);  /* 0C7C288E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C2892u, 1);  /* 0C7C2890 mov.l @Rm+,Rn */
	IF(0x0C7C2892u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C7C2892 rts */
L_0C7C2896: BLKS(0x0C7C2896u);
	r0 = 0xC088580u; UPD(0x0C7C2898u, 1);  /* 0C7C2896 mov.l @(disp,pc),Rn */
	r5 = r9;  /* 0C7C2898 mov Rm,Rn */
	r4 = r8;  /* 0C7C289A mov Rm,Rn */
	r15 += 0x8u;  /* 0C7C289C add #imm,Rn */
	IF(0x0C7C289Eu); PR = R32(r15); r15 += 4; UPD(0x0C7C28A0u, 4);  /* 0C7C289E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C7C28A2u, 1);  /* 0C7C28A0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C7C28A4u, 1);  /* 0C7C28A2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C7C28A6u, 1);  /* 0C7C28A4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C7C28A8u, 1);  /* 0C7C28A6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C28AAu, 1);  /* 0C7C28A8 mov.l @Rm+,Rn */
	IF(0x0C7C28AAu); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C088580u: TAIL(f_0C088580); default: JUMPD(tv_); } }  /* 0C7C28AA jmp @Rn */
L_0C7C28AE: BLKS(0x0C7C28AEu);
	r0 = 0xC7C115Cu; UPD(0x0C7C28B0u, 1);  /* 0C7C28AE mov.l @(disp,pc),Rn */
	r5 = 0x1u;  /* 0C7C28B0 mov #imm,Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C7C28B4u, 2);  /* 0C7C28B2 mov.l Rm,@(disp,Rn) */
	IF(0x0C7C28B4u); { u32 t_ = r0; PR = 0x0C7C28B8u; W32(r15, r7); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C7C115C, 0x0C7C115Cu, 0x0C7C28B8u); }  /* 0C7C28B4 jsr @Rn */
L_0C7C28B8: BLKS(0x0C7C28B8u);
	r6 = R32(r15 + 0x4u); UPD(0x0C7C28BAu, 1);  /* 0C7C28B8 mov.l @(disp,Rm),Rn */
	IF(0x0C7C28BAu); T = r0 >> 31; r0 <<= 1;  /* 0C7C28BA shll Rn */
	r7 = R32(r15); UPD(0x0C7C28BEu, 2);  /* 0C7C28BC mov.l @Rm,Rn */
	IF(0x0C7C28BEu); r12 = T;  /* 0C7C28BE movt Rn */
	UPD(0x0C7C28C0u, 1);
L_0C7C28C0: BLKS(0x0C7C28C0u);
	r0 = 0xC088580u; UPD(0x0C7C28C2u, 1);  /* 0C7C28C0 mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C7C28C2 mov Rm,Rn */
	IF(0x0C7C28C4u); { u32 t_ = r0; PR = 0x0C7C28C8u; r5 = r9; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C088580, 0x0C088580u, 0x0C7C28C8u); }  /* 0C7C28C4 jsr @Rn */
L_0C7C28C8: BLKS(0x0C7C28C8u);
	T = (r12 & r12) == 0;  /* 0C7C28C8 tst Rm,Rn */
	{ u32 c_ = T; r8 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C7C2856u, 4); goto L_0C7C2856; } goto L_0C7C28CE; }  /* 0C7C28CA bt/s */
L_0C7C28CE: BLKS(0x0C7C28CEu);
	r0 = r8;  /* 0C7C28CE mov Rm,Rn */
	r15 += 0x8u;  /* 0C7C28D0 add #imm,Rn */
	IF(0x0C7C28D2u); PR = R32(r15); r15 += 4; UPD(0x0C7C28D4u, 4);  /* 0C7C28D2 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C7C28D6u, 1);  /* 0C7C28D4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C7C28D8u, 1);  /* 0C7C28D6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C7C28DAu, 1);  /* 0C7C28D8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C7C28DCu, 1);  /* 0C7C28DA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C28DEu, 1);  /* 0C7C28DC mov.l @Rm+,Rn */
	IF(0x0C7C28DEu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C7C28DE rts */
L_0C7C28E2: BLKS(0x0C7C28E2u);
	r13 = 0xC7C11C8u; UPD(0x0C7C28E4u, 1);  /* 0C7C28E2 mov.l @(disp,pc),Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C7C28E6u, 1);  /* 0C7C28E4 mov.l Rm,@(disp,Rn) */
	IF(0x0C7C28E6u); { u32 t_ = r13; PR = 0x0C7C28EAu; W32(r15, r7); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C7C11C8, 0x0C7C11C8u, 0x0C7C28EAu); }  /* 0C7C28E6 jsr @Rn */
L_0C7C28EA: BLKS(0x0C7C28EAu);
	IF(0x0C7C28EAu); T = (s32)r0 >= 0;  /* 0C7C28EA cmp/pz Rn */
	r6 = R32(r15 + 0x4u); UPD(0x0C7C28EEu, 2);  /* 0C7C28EC mov.l @(disp,Rm),Rn */
	{ u32 c_ = T; r7 = R32(r15); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C7C28F8u, 3); goto L_0C7C28F8; } UPD(0x0C7C28F2u, 1); goto L_0C7C28F2; }  /* 0C7C28EE bt/s */
L_0C7C28F2: BLKS(0x0C7C28F2u);
	IF(0x0C7C28F2u); T = r0 >> 31; r0 <<= 1;  /* 0C7C28F2 shll Rn */
	{ IF(0x0C7C28F6u); r12 = T; /* slot movt Rn */ UPD(0x0C7C28C0u, 4); goto L_0C7C28C0; }  /* 0C7C28F4 bra */
L_0C7C28F8: BLKS(0x0C7C28F8u);
	IF(0x0C7C28F8u); { u32 t_ = r13; PR = 0x0C7C28FCu; r4 = r0; /* slot mov Rm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C7C28FCu); }  /* 0C7C28F8 jsr @Rn */
L_0C7C28FC: BLKS(0x0C7C28FCu);
	IF(0x0C7C28FCu); T = (s32)r0 >= 0;  /* 0C7C28FC cmp/pz Rn */
	r6 = R32(r15 + 0x4u); UPD(0x0C7C2900u, 2);  /* 0C7C28FE mov.l @(disp,Rm),Rn */
	{ u32 c_ = !T; r7 = R32(r15); /* slot mov.l @Rm,Rn */ if (c_) { UPD(0x0C7C28F2u, 3); goto L_0C7C28F2; } UPD(0x0C7C2904u, 1); goto L_0C7C2904; }  /* 0C7C2900 bf/s */
L_0C7C2904: BLKS(0x0C7C2904u);
	IF(0x0C7C2904u); { u32 t_ = r13; PR = 0x0C7C2908u; r4 = r0; /* slot mov Rm,Rn */ UPD(t_, 2); CALLD(t_, 0x0C7C2908u); }  /* 0C7C2904 jsr @Rn */
L_0C7C2908: BLKS(0x0C7C2908u);
	IF(0x0C7C2908u); T = r0 >> 31; r0 <<= 1;  /* 0C7C2908 shll Rn */
	r7 = R32(r15); UPD(0x0C7C290Cu, 2);  /* 0C7C290A mov.l @Rm,Rn */
	r6 = R32(r15 + 0x4u); UPD(0x0C7C290Eu, 1);  /* 0C7C290C mov.l @(disp,Rm),Rn */
	{ IF(0x0C7C2910u); r12 = T; /* slot movt Rn */ UPD(0x0C7C28C0u, 3); goto L_0C7C28C0; }  /* 0C7C290E bra */
}

/* arr_death_92a70 */
void f_0C7C2940(sh3_t *c)
{
	LOCALS;
L_0C7C2940: BLKS(0x0C7C2940u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C7C2942u, 1);  /* 0C7C2940 mov.l Rm,@-Rn */
	r8 = r4;  /* 0C7C2942 mov Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C7C2946u, 2);  /* 0C7C2944 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C7C2948u, 1);  /* 0C7C2946 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C7C294Au, 1);  /* 0C7C2948 mov.l Rm,@-Rn */
	IF(0x0C7C294Au); r15 -= 4; W32(r15, PR); UPD(0x0C7C294Cu, 1);  /* 0C7C294A sts.l pr,@-Rn */
	r1 = 0xC21CA15u; UPD(0x0C7C294Eu, 1);  /* 0C7C294C mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF4u;  /* 0C7C294E add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C2952u, 2);  /* 0C7C2950 mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C2952 tst Rm,Rn */
	if (!T) { UPD(0x0C7C29B0u, 4); goto L_0C7C29B0; }  /* 0C7C2954 bf */
L_0C7C2956: BLKS(0x0C7C2956u);
	r9 = 0xC7C4294u; UPD(0x0C7C2958u, 1);  /* 0C7C2956 mov.l @(disp,pc),Rn */
	r0 = R32(r9); UPD(0x0C7C295Au, 1);  /* 0C7C2958 mov.l @Rm,Rn */
	T = r0 == 0x3u;  /* 0C7C295A cmp/eq #imm,r0 */
	{ u32 c_ = !T; r4 = (u32)(s32)(s16)r4; /* slot exts.w Rm,Rn */ if (c_) { UPD(0x0C7C29B0u, 4); goto L_0C7C29B0; } goto L_0C7C2960; }  /* 0C7C295C bf/s */
L_0C7C2960: BLKS(0x0C7C2960u);
	r1 = 0xB4u; UPD(0x0C7C2962u, 2);  /* 0C7C2960 mov.w @(disp,pc),Rn */
	MACL = (u32)((s32)(s16)r4 * (s32)(s16)r1);  /* 0C7C2962 muls.w Rm,Rn */
	r1 = 0xC26CD48u; UPD(0x0C7C2966u, 3);  /* 0C7C2964 mov.l @(disp,pc),Rn */
	IF(0x0C7C2966u); r10 = MACL;  /* 0C7C2966 sts macl,Rn */
	r1 += r10;  /* 0C7C2968 add Rm,Rn */
	r0 = R32(r1); UPD(0x0C7C296Cu, 3);  /* 0C7C296A mov.l @Rm,Rn */
	T = r0 == 0x12u;  /* 0C7C296C cmp/eq #imm,r0 */
	{ u32 c_ = T; r0 += 0xFFFFFFE9u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C7C29B0u, 4); goto L_0C7C29B0; } goto L_0C7C2972; }  /* 0C7C296E bt/s */
L_0C7C2972: BLKS(0x0C7C2972u);
	r1 = 0x1u;  /* 0C7C2972 mov #imm,Rn */
	T = r0 > r1;  /* 0C7C2974 cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C7C29C2u, 6); goto L_0C7C29C2; }  /* 0C7C2976 bf */
L_0C7C2978: BLKS(0x0C7C2978u);
	r0 = 0xC092A70u; UPD(0x0C7C297Au, 1);  /* 0C7C2978 mov.l @(disp,pc),Rn */
	IF(0x0C7C297Au); { u32 t_ = r0; PR = 0x0C7C297Eu; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C092A70, 0x0C092A70u, 0x0C7C297Eu); }  /* 0C7C297A jsr @Rn */
L_0C7C297E: BLKS(0x0C7C297Eu);
	r8 = r0;  /* 0C7C297E mov Rm,Rn */
	UPD(0x0C7C2980u, 1);
L_0C7C2980: BLKS(0x0C7C2980u);
	r1 = 0xC26CD40u; UPD(0x0C7C2982u, 1);  /* 0C7C2980 mov.l @(disp,pc),Rn */
	r1 += r10;  /* 0C7C2982 add Rm,Rn */
	r1 = R32(r1); UPD(0x0C7C2986u, 2);  /* 0C7C2984 mov.l @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C2986 tst Rm,Rn */
	{ u32 c_ = !T; r0 = r8; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C7C29E2u, 4); goto L_0C7C29E2; } goto L_0C7C298C; }  /* 0C7C2988 bf/s */
L_0C7C298C: BLKS(0x0C7C298Cu);
	r0 = R32(r9); UPD(0x0C7C298Eu, 2);  /* 0C7C298C mov.l @Rm,Rn */
	T = r0 == 0x3u;  /* 0C7C298E cmp/eq #imm,r0 */
	{ u32 c_ = !T; r0 = r8; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C7C29E2u, 4); goto L_0C7C29E2; } goto L_0C7C2994; }  /* 0C7C2990 bf/s */
L_0C7C2994: BLKS(0x0C7C2994u);
	r1 = 0xC26CD80u; UPD(0x0C7C2996u, 2);  /* 0C7C2994 mov.l @(disp,pc),Rn */
	r2 = 0x1869Fu; UPD(0x0C7C2998u, 1);  /* 0C7C2996 mov.l @(disp,pc),Rn */
	r10 += r1;  /* 0C7C2998 add Rm,Rn */
	r1 = R32(r10); UPD(0x0C7C299Cu, 2);  /* 0C7C299A mov.l @Rm,Rn */
	T = r1 > r2;  /* 0C7C299C cmp/hi Rm,Rn */
	if (T) { UPD(0x0C7C29E2u, 4); goto L_0C7C29E2; }  /* 0C7C299E bt */
L_0C7C29A0: BLKS(0x0C7C29A0u);
	r4 = 0x4000u; UPD(0x0C7C29A2u, 1);  /* 0C7C29A0 mov.w @(disp,pc),Rn */
	r4 += r1;  /* 0C7C29A2 add Rm,Rn */
	r1 = 0xC7C006Cu; UPD(0x0C7C29A6u, 2);  /* 0C7C29A4 mov.l @(disp,pc),Rn */
	IF(0x0C7C29A6u); r4 <<= 2;  /* 0C7C29A6 shll2 Rn */
	IF(0x0C7C29A8u); { u32 t_ = r1; PR = 0x0C7C29ACu; IF(0x0C7C29AAu); r4 <<= 2; /* slot shll2 Rn */ UPD(t_, 3); CALLP(t_, f_0C7C006C, 0x0C7C006Cu, 0x0C7C29ACu); }  /* 0C7C29A8 jsr @Rn */
L_0C7C29AC: BLKS(0x0C7C29ACu);
	{ r0 = r8; /* slot mov Rm,Rn */ UPD(0x0C7C29E2u, 3); goto L_0C7C29E2; }  /* 0C7C29AC bra */
L_0C7C29B0: BLKS(0x0C7C29B0u);
	r0 = 0xC092A70u; UPD(0x0C7C29B2u, 1);  /* 0C7C29B0 mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C7C29B2 mov Rm,Rn */
	r15 += 0xCu;  /* 0C7C29B4 add #imm,Rn */
	IF(0x0C7C29B6u); PR = R32(r15); r15 += 4; UPD(0x0C7C29B8u, 3);  /* 0C7C29B6 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C7C29BAu, 1);  /* 0C7C29B8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C7C29BCu, 1);  /* 0C7C29BA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C29BEu, 1);  /* 0C7C29BC mov.l @Rm+,Rn */
	IF(0x0C7C29BEu); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C092A70u: TAIL(f_0C092A70); default: JUMPD(tv_); } }  /* 0C7C29BE jmp @Rn */
L_0C7C29C2: BLKS(0x0C7C29C2u);
	r0 = 0xC7C11C8u; UPD(0x0C7C29C4u, 1);  /* 0C7C29C2 mov.l @(disp,pc),Rn */
	W32(r15 + 0x8u, r5); UPD(0x0C7C29C6u, 1);  /* 0C7C29C4 mov.l Rm,@(disp,Rn) */
	W32(r15 + 0x4u, r6); UPD(0x0C7C29C8u, 1);  /* 0C7C29C6 mov.l Rm,@(disp,Rn) */
	IF(0x0C7C29C8u); { u32 t_ = r0; PR = 0x0C7C29CCu; W32(r15, r7); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C7C11C8, 0x0C7C11C8u, 0x0C7C29CCu); }  /* 0C7C29C8 jsr @Rn */
L_0C7C29CC: BLKS(0x0C7C29CCu);
	r11 = r0;  /* 0C7C29CC mov Rm,Rn */
	r0 = 0xC092A70u; UPD(0x0C7C29D0u, 2);  /* 0C7C29CE mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C7C29D0 mov Rm,Rn */
	r7 = R32(r15); UPD(0x0C7C29D4u, 2);  /* 0C7C29D2 mov.l @Rm,Rn */
	r6 = R32(r15 + 0x4u); UPD(0x0C7C29D6u, 1);  /* 0C7C29D4 mov.l @(disp,Rm),Rn */
	IF(0x0C7C29D6u); { u32 t_ = r0; PR = 0x0C7C29DAu; r5 = R32(r15 + 0x8u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C092A70, 0x0C092A70u, 0x0C7C29DAu); }  /* 0C7C29D6 jsr @Rn */
L_0C7C29DA: BLKS(0x0C7C29DAu);
	IF(0x0C7C29DAu); T = (s32)r11 >= 0;  /* 0C7C29DA cmp/pz Rn */
	{ u32 c_ = T; r8 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C7C2980u, 4); goto L_0C7C2980; } goto L_0C7C29E0; }  /* 0C7C29DC bt/s */
L_0C7C29E0: BLKS(0x0C7C29E0u);
	r0 = r8;  /* 0C7C29E0 mov Rm,Rn */
	UPD(0x0C7C29E2u, 2);
L_0C7C29E2: BLKS(0x0C7C29E2u);
	r15 += 0xCu;  /* 0C7C29E2 add #imm,Rn */
	IF(0x0C7C29E4u); PR = R32(r15); r15 += 4; UPD(0x0C7C29E6u, 2);  /* 0C7C29E4 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C7C29E8u, 1);  /* 0C7C29E6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C7C29EAu, 1);  /* 0C7C29E8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C29ECu, 1);  /* 0C7C29EA mov.l @Rm+,Rn */
	IF(0x0C7C29ECu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C7C29EC rts */
}

/* arr_death_96140 */
void f_0C7C2A18(sh3_t *c)
{
	LOCALS;
L_0C7C2A18: BLKS(0x0C7C2A18u);
	r1 = 0xC21CA15u; UPD(0x0C7C2A1Au, 1);  /* 0C7C2A18 mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C2A1Cu, 1);  /* 0C7C2A1A mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C2A1C tst Rm,Rn */
	if (!T) { UPD(0x0C7C2A8Eu, 4); goto L_0C7C2A8E; }  /* 0C7C2A1E bf */
L_0C7C2A20: BLKS(0x0C7C2A20u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C7C2A22u, 1);  /* 0C7C2A20 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C7C2A24u, 1);  /* 0C7C2A22 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C7C2A26u, 1);  /* 0C7C2A24 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C7C2A28u, 1);  /* 0C7C2A26 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C7C2A2Au, 1);  /* 0C7C2A28 mov.l Rm,@-Rn */
	r8 = 0xC7C4294u; UPD(0x0C7C2A2Cu, 1);  /* 0C7C2A2A mov.l @(disp,pc),Rn */
	IF(0x0C7C2A2Cu); r15 -= 4; W32(r15, PR); UPD(0x0C7C2A2Eu, 1);  /* 0C7C2A2C sts.l pr,@-Rn */
	r0 = R32(r8); UPD(0x0C7C2A30u, 1);  /* 0C7C2A2E mov.l @Rm,Rn */
	T = r0 == 0x3u;  /* 0C7C2A30 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C7C2A44u, 4); goto L_0C7C2A44; }  /* 0C7C2A32 bt */
L_0C7C2A34: BLKS(0x0C7C2A34u);
	r0 = 0xC096140u; UPD(0x0C7C2A36u, 1);  /* 0C7C2A34 mov.l @(disp,pc),Rn */
	IF(0x0C7C2A36u); PR = R32(r15); r15 += 4; UPD(0x0C7C2A38u, 1);  /* 0C7C2A36 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C7C2A3Au, 1);  /* 0C7C2A38 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C7C2A3Cu, 1);  /* 0C7C2A3A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C7C2A3Eu, 1);  /* 0C7C2A3C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C2A40u, 1);  /* 0C7C2A3E mov.l @Rm+,Rn */
	IF(0x0C7C2A40u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C7C2A40 jmp @Rn */
L_0C7C2A44: BLKS(0x0C7C2A44u);
	r1 = 0xB4u; UPD(0x0C7C2A46u, 1);  /* 0C7C2A44 mov.w @(disp,pc),Rn */
	r0 = 0xC096140u; UPD(0x0C7C2A48u, 1);  /* 0C7C2A46 mov.l @(disp,pc),Rn */
	MACL = (u32)((s32)(s16)r4 * (s32)(s16)r1);  /* 0C7C2A48 muls.w Rm,Rn */
	r1 = 0xC26CD48u; UPD(0x0C7C2A4Cu, 3);  /* 0C7C2A4A mov.l @(disp,pc),Rn */
	r12 = 0xC26CD40u; UPD(0x0C7C2A4Eu, 1);  /* 0C7C2A4C mov.l @(disp,pc),Rn */
	IF(0x0C7C2A4Eu); r10 = MACL;  /* 0C7C2A4E sts macl,Rn */
	r1 += r10;  /* 0C7C2A50 add Rm,Rn */
	r11 = R32(r1); UPD(0x0C7C2A54u, 3);  /* 0C7C2A52 mov.l @Rm,Rn */
	IF(0x0C7C2A54u); { u32 t_ = r0; PR = 0x0C7C2A58u; r12 += r10; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C096140, 0x0C096140u, 0x0C7C2A58u); }  /* 0C7C2A54 jsr @Rn */
L_0C7C2A58: BLKS(0x0C7C2A58u);
	r2 = 0x1u;  /* 0C7C2A58 mov #imm,Rn */
	r1 = r11;  /* 0C7C2A5A mov Rm,Rn */
	r1 += 0xFFFFFFF8u;  /* 0C7C2A5C add #imm,Rn */
	T = r1 > r2;  /* 0C7C2A5E cmp/hi Rm,Rn */
	{ u32 c_ = !T; r9 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C7C2A94u, 7); goto L_0C7C2A94; } UPD(0x0C7C2A64u, 1); goto L_0C7C2A64; }  /* 0C7C2A60 bf/s */
L_0C7C2A64: BLKS(0x0C7C2A64u);
	r1 = R32(r12); UPD(0x0C7C2A66u, 1);  /* 0C7C2A64 mov.l @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C2A66 tst Rm,Rn */
	{ u32 c_ = !T; r0 = r9; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C7C2A80u, 4); goto L_0C7C2A80; } goto L_0C7C2A6C; }  /* 0C7C2A68 bf/s */
L_0C7C2A6C: BLKS(0x0C7C2A6Cu);
	r0 = R32(r8); UPD(0x0C7C2A6Eu, 2);  /* 0C7C2A6C mov.l @Rm,Rn */
	T = r0 == 0x3u;  /* 0C7C2A6E cmp/eq #imm,r0 */
	{ u32 c_ = !T; r0 = r9; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C7C2A80u, 4); goto L_0C7C2A80; } goto L_0C7C2A74; }  /* 0C7C2A70 bf/s */
L_0C7C2A74: BLKS(0x0C7C2A74u);
	r1 = 0xC26CD80u; UPD(0x0C7C2A76u, 2);  /* 0C7C2A74 mov.l @(disp,pc),Rn */
	r1 += r10;  /* 0C7C2A76 add Rm,Rn */
	r4 = R32(r1); UPD(0x0C7C2A7Au, 2);  /* 0C7C2A78 mov.l @Rm,Rn */
	r1 = 0x1869Fu; UPD(0x0C7C2A7Cu, 1);  /* 0C7C2A7A mov.l @(disp,pc),Rn */
	T = r4 > r1;  /* 0C7C2A7C cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C7C2AACu, 4); goto L_0C7C2AAC; }  /* 0C7C2A7E bf */
L_0C7C2A80: BLKS(0x0C7C2A80u);
	IF(0x0C7C2A80u); PR = R32(r15); r15 += 4; UPD(0x0C7C2A82u, 1);  /* 0C7C2A80 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C7C2A84u, 1);  /* 0C7C2A82 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C7C2A86u, 1);  /* 0C7C2A84 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C7C2A88u, 1);  /* 0C7C2A86 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C2A8Au, 1);  /* 0C7C2A88 mov.l @Rm+,Rn */
	IF(0x0C7C2A8Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C7C2A8A rts */
L_0C7C2A8E: BLKS(0x0C7C2A8Eu);
	r0 = 0xC096140u; UPD(0x0C7C2A90u, 1);  /* 0C7C2A8E mov.l @(disp,pc),Rn */
	IF(0x0C7C2A90u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); IF(0x0C7C2A92u); ; /* slot nop */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C7C2A90 jmp @Rn */
L_0C7C2A94: BLKS(0x0C7C2A94u);
	r0 = R32(r8); UPD(0x0C7C2A96u, 1);  /* 0C7C2A94 mov.l @Rm,Rn */
	T = r0 == 0x3u;  /* 0C7C2A96 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C7C2ABCu, 4); goto L_0C7C2ABC; }  /* 0C7C2A98 bt */
L_0C7C2A9A: BLKS(0x0C7C2A9Au);
	r1 = R32(r12); UPD(0x0C7C2A9Cu, 1);  /* 0C7C2A9A mov.l @Rm,Rn */
	r0 = r9;  /* 0C7C2A9C mov Rm,Rn */
	IF(0x0C7C2A9Eu); PR = R32(r15); r15 += 4; UPD(0x0C7C2AA0u, 2);  /* 0C7C2A9E lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C7C2AA2u, 1);  /* 0C7C2AA0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C7C2AA4u, 1);  /* 0C7C2AA2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C7C2AA6u, 1);  /* 0C7C2AA4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C2AA8u, 1);  /* 0C7C2AA6 mov.l @Rm+,Rn */
	IF(0x0C7C2AA8u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C7C2AA8 rts */
L_0C7C2AAC: BLKS(0x0C7C2AACu);
	r1 = 0x4000u; UPD(0x0C7C2AAEu, 1);  /* 0C7C2AAC mov.w @(disp,pc),Rn */
	r4 += r1;  /* 0C7C2AAE add Rm,Rn */
	r1 = 0xC7C006Cu; UPD(0x0C7C2AB2u, 2);  /* 0C7C2AB0 mov.l @(disp,pc),Rn */
	IF(0x0C7C2AB2u); r4 <<= 2;  /* 0C7C2AB2 shll2 Rn */
	IF(0x0C7C2AB4u); { u32 t_ = r1; PR = 0x0C7C2AB8u; IF(0x0C7C2AB6u); r4 <<= 2; /* slot shll2 Rn */ UPD(t_, 3); CALLP(t_, f_0C7C006C, 0x0C7C006Cu, 0x0C7C2AB8u); }  /* 0C7C2AB4 jsr @Rn */
L_0C7C2AB8: BLKS(0x0C7C2AB8u);
	{ r0 = r9; /* slot mov Rm,Rn */ UPD(0x0C7C2A80u, 3); goto L_0C7C2A80; }  /* 0C7C2AB8 bra */
L_0C7C2ABC: BLKS(0x0C7C2ABCu);
	r1 = 0xC7C006Cu; UPD(0x0C7C2ABEu, 1);  /* 0C7C2ABC mov.l @(disp,pc),Rn */
	r4 = 0x100000u; UPD(0x0C7C2AC0u, 1);  /* 0C7C2ABE mov.l @(disp,pc),Rn */
	IF(0x0C7C2AC0u); { u32 t_ = r1; PR = 0x0C7C2AC4u; IF(0x0C7C2AC2u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C7C006C, 0x0C7C006Cu, 0x0C7C2AC4u); }  /* 0C7C2AC0 jsr @Rn */
L_0C7C2AC4: BLKS(0x0C7C2AC4u);
	{ IF(0x0C7C2AC6u); ; /* slot nop */ UPD(0x0C7C2A64u, 3); goto L_0C7C2A64; }  /* 0C7C2AC4 bra */
}

/* arr_death_999e0 */
void f_0C7C2AF0(sh3_t *c)
{
	LOCALS;
L_0C7C2AF0: BLKS(0x0C7C2AF0u);
	r0 = 0xC0999E0u; UPD(0x0C7C2AF2u, 1);  /* 0C7C2AF0 mov.l @(disp,pc),Rn */
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C7C2AF4u, 1);  /* 0C7C2AF2 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C7C2AF6u, 1);  /* 0C7C2AF4 mov.l Rm,@-Rn */
	IF(0x0C7C2AF6u); r15 -= 4; W32(r15, PR); UPD(0x0C7C2AF8u, 1);  /* 0C7C2AF6 sts.l pr,@-Rn */
	IF(0x0C7C2AF8u); { u32 t_ = r0; PR = 0x0C7C2AFCu; r8 = r4; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0999E0, 0x0C0999E0u, 0x0C7C2AFCu); }  /* 0C7C2AF8 jsr @Rn */
L_0C7C2AFC: BLKS(0x0C7C2AFCu);
	r1 = 0xC21CA15u; UPD(0x0C7C2AFEu, 1);  /* 0C7C2AFC mov.l @(disp,pc),Rn */
	r9 = r0;  /* 0C7C2AFE mov Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C2B02u, 2);  /* 0C7C2B00 mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C2B02 tst Rm,Rn */
	{ u32 c_ = T; r0 = r9; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C7C2B10u, 4); goto L_0C7C2B10; } UPD(0x0C7C2B08u, 1); goto L_0C7C2B08; }  /* 0C7C2B04 bt/s */
L_0C7C2B08: BLKS(0x0C7C2B08u);
	IF(0x0C7C2B08u); PR = R32(r15); r15 += 4; UPD(0x0C7C2B0Au, 1);  /* 0C7C2B08 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C2B0Cu, 1);  /* 0C7C2B0A mov.l @Rm+,Rn */
	IF(0x0C7C2B0Cu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C7C2B0C rts */
L_0C7C2B10: BLKS(0x0C7C2B10u);
	r1 = 0xB4u; UPD(0x0C7C2B12u, 1);  /* 0C7C2B10 mov.w @(disp,pc),Rn */
	r2 = 0xC26CD40u; UPD(0x0C7C2B14u, 1);  /* 0C7C2B12 mov.l @(disp,pc),Rn */
	MACL = (u32)((s32)(s16)r8 * (s32)(s16)r1);  /* 0C7C2B14 muls.w Rm,Rn */
	IF(0x0C7C2B16u); r1 = MACL;  /* 0C7C2B16 sts macl,Rn */
	r2 += r1;  /* 0C7C2B18 add Rm,Rn */
	r2 = R32(r2); UPD(0x0C7C2B1Cu, 5);  /* 0C7C2B1A mov.l @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C7C2B1C tst Rm,Rn */
	{ u32 c_ = !T; r0 = r9; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C7C2B08u, 4); goto L_0C7C2B08; } goto L_0C7C2B22; }  /* 0C7C2B1E bf/s */
L_0C7C2B22: BLKS(0x0C7C2B22u);
	r2 = 0xC7C4294u; UPD(0x0C7C2B24u, 2);  /* 0C7C2B22 mov.l @(disp,pc),Rn */
	r0 = R32(r2); UPD(0x0C7C2B26u, 1);  /* 0C7C2B24 mov.l @Rm,Rn */
	T = r0 == 0x3u;  /* 0C7C2B26 cmp/eq #imm,r0 */
	{ u32 c_ = !T; r0 = r9; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C7C2B08u, 4); goto L_0C7C2B08; } goto L_0C7C2B2C; }  /* 0C7C2B28 bf/s */
L_0C7C2B2C: BLKS(0x0C7C2B2Cu);
	r2 = 0xC26CD80u; UPD(0x0C7C2B2Eu, 2);  /* 0C7C2B2C mov.l @(disp,pc),Rn */
	r1 += r2;  /* 0C7C2B2E add Rm,Rn */
	r4 = R32(r1); UPD(0x0C7C2B32u, 2);  /* 0C7C2B30 mov.l @Rm,Rn */
	r1 = 0x1869Fu; UPD(0x0C7C2B34u, 1);  /* 0C7C2B32 mov.l @(disp,pc),Rn */
	T = r4 > r1;  /* 0C7C2B34 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C7C2B08u, 4); goto L_0C7C2B08; }  /* 0C7C2B36 bt */
L_0C7C2B38: BLKS(0x0C7C2B38u);
	r3 = 0x4000u; UPD(0x0C7C2B3Au, 1);  /* 0C7C2B38 mov.w @(disp,pc),Rn */
	r1 = 0xC7C006Cu; UPD(0x0C7C2B3Cu, 1);  /* 0C7C2B3A mov.l @(disp,pc),Rn */
	r4 += r3;  /* 0C7C2B3C add Rm,Rn */
	IF(0x0C7C2B3Eu); r4 <<= 2;  /* 0C7C2B3E shll2 Rn */
	IF(0x0C7C2B40u); { u32 t_ = r1; PR = 0x0C7C2B44u; IF(0x0C7C2B42u); r4 <<= 2; /* slot shll2 Rn */ UPD(t_, 4); CALLP(t_, f_0C7C006C, 0x0C7C006Cu, 0x0C7C2B44u); }  /* 0C7C2B40 jsr @Rn */
L_0C7C2B44: BLKS(0x0C7C2B44u);
	{ r0 = r9; /* slot mov Rm,Rn */ UPD(0x0C7C2B08u, 3); goto L_0C7C2B08; }  /* 0C7C2B44 bra */
}

/* arr_death_80300 */
void f_0C7C2B68(sh3_t *c)
{
	LOCALS;
L_0C7C2B68: BLKS(0x0C7C2B68u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C7C2B6Au, 1);  /* 0C7C2B68 mov.l Rm,@-Rn */
	r8 = r4;  /* 0C7C2B6A mov Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C7C2B6Eu, 2);  /* 0C7C2B6C mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C7C2B70u, 1);  /* 0C7C2B6E mov.l Rm,@-Rn */
	IF(0x0C7C2B70u); r15 -= 4; W32(r15, PR); UPD(0x0C7C2B72u, 1);  /* 0C7C2B70 sts.l pr,@-Rn */
	r1 = 0xC21CA15u; UPD(0x0C7C2B74u, 1);  /* 0C7C2B72 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF4u;  /* 0C7C2B74 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C2B78u, 2);  /* 0C7C2B76 mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C2B78 tst Rm,Rn */
	{ u32 c_ = !T; r3 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C7C2BFCu, 4); goto L_0C7C2BFC; } goto L_0C7C2B7E; }  /* 0C7C2B7A bf/s */
L_0C7C2B7E: BLKS(0x0C7C2B7Eu);
	r1 = 0xB4u; UPD(0x0C7C2B80u, 2);  /* 0C7C2B7E mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C7C2B80 exts.w Rm,Rn */
	MACL = (u32)((s32)(s16)r4 * (s32)(s16)r1);  /* 0C7C2B82 muls.w Rm,Rn */
	r1 = 0xC26CD48u; UPD(0x0C7C2B86u, 4);  /* 0C7C2B84 mov.l @(disp,pc),Rn */
	IF(0x0C7C2B86u); r9 = MACL;  /* 0C7C2B86 sts macl,Rn */
	r1 += r9;  /* 0C7C2B88 add Rm,Rn */
	r1 = R32(r1); UPD(0x0C7C2B8Cu, 3);  /* 0C7C2B8A mov.l @Rm,Rn */
	r2 = r1;  /* 0C7C2B8C mov Rm,Rn */
	r2 += 0xFFFFFFFFu;  /* 0C7C2B8E add #imm,Rn */
	T = r2 > r3;  /* 0C7C2B90 cmp/hi Rm,Rn */
	{ u32 c_ = !T; r0 = 0x5u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C7C2BD2u, 6); goto L_0C7C2BD2; } goto L_0C7C2B96; }  /* 0C7C2B92 bf/s */
L_0C7C2B96: BLKS(0x0C7C2B96u);
	r2 = r1;  /* 0C7C2B96 mov Rm,Rn */
	r2 += 0xFFFFFFEDu;  /* 0C7C2B98 add #imm,Rn */
	T = r2 > r0;  /* 0C7C2B9A cmp/hi Rm,Rn */
	{ u32 c_ = !T; r1 += 0xFFFFFFEFu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C7C2BD2u, 7); goto L_0C7C2BD2; } goto L_0C7C2BA0; }  /* 0C7C2B9C bf/s */
L_0C7C2BA0: BLKS(0x0C7C2BA0u);
	T = r1 > r3;  /* 0C7C2BA0 cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C7C2C0Au, 5); goto L_0C7C2C0A; }  /* 0C7C2BA2 bf */
L_0C7C2BA4: BLKS(0x0C7C2BA4u);
	r0 = 0xC080300u; UPD(0x0C7C2BA6u, 1);  /* 0C7C2BA4 mov.l @(disp,pc),Rn */
	IF(0x0C7C2BA6u); { u32 t_ = r0; PR = 0x0C7C2BAAu; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C080300, 0x0C080300u, 0x0C7C2BAAu); }  /* 0C7C2BA6 jsr @Rn */
L_0C7C2BAA: BLKS(0x0C7C2BAAu);
	r1 = 0xC26CD40u; UPD(0x0C7C2BACu, 1);  /* 0C7C2BAA mov.l @(disp,pc),Rn */
	r1 += r9;  /* 0C7C2BAC add Rm,Rn */
	r1 = R32(r1); UPD(0x0C7C2BB0u, 2);  /* 0C7C2BAE mov.l @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C2BB0 tst Rm,Rn */
	if (!T) { UPD(0x0C7C2BF0u, 4); goto L_0C7C2BF0; }  /* 0C7C2BB2 bf */
L_0C7C2BB4: BLKS(0x0C7C2BB4u);
	r1 = 0xC26CD80u; UPD(0x0C7C2BB6u, 1);  /* 0C7C2BB4 mov.l @(disp,pc),Rn */
	r9 += r1;  /* 0C7C2BB6 add Rm,Rn */
	r1 = 0xC34Fu; UPD(0x0C7C2BBAu, 2);  /* 0C7C2BB8 mov.l @(disp,pc),Rn */
	r4 = R32(r9); UPD(0x0C7C2BBCu, 1);  /* 0C7C2BBA mov.l @Rm,Rn */
	T = r4 > r1;  /* 0C7C2BBC cmp/hi Rm,Rn */
	if (T) { UPD(0x0C7C2BF0u, 4); goto L_0C7C2BF0; }  /* 0C7C2BBE bt */
L_0C7C2BC0: BLKS(0x0C7C2BC0u);
	r2 = 0x4000u; UPD(0x0C7C2BC2u, 1);  /* 0C7C2BC0 mov.w @(disp,pc),Rn */
	r1 = 0xC7C006Cu; UPD(0x0C7C2BC4u, 1);  /* 0C7C2BC2 mov.l @(disp,pc),Rn */
	r4 += r2;  /* 0C7C2BC4 add Rm,Rn */
	W32(r15 + 0x8u, r0); UPD(0x0C7C2BC8u, 2);  /* 0C7C2BC6 mov.l Rm,@(disp,Rn) */
	IF(0x0C7C2BC8u); r4 <<= 2;  /* 0C7C2BC8 shll2 Rn */
	IF(0x0C7C2BCAu); { u32 t_ = r1; PR = 0x0C7C2BCEu; IF(0x0C7C2BCCu); r4 <<= 2; /* slot shll2 Rn */ UPD(t_, 3); CALLP(t_, f_0C7C006C, 0x0C7C006Cu, 0x0C7C2BCEu); }  /* 0C7C2BCA jsr @Rn */
L_0C7C2BCE: BLKS(0x0C7C2BCEu);
	{ r0 = R32(r15 + 0x8u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C7C2BF0u, 3); goto L_0C7C2BF0; }  /* 0C7C2BCE bra */
L_0C7C2BD2: BLKS(0x0C7C2BD2u);
	r0 = 0xC7C11C8u; UPD(0x0C7C2BD4u, 1);  /* 0C7C2BD2 mov.l @(disp,pc),Rn */
	W32(r15 + 0x8u, r5); UPD(0x0C7C2BD6u, 1);  /* 0C7C2BD4 mov.l Rm,@(disp,Rn) */
	W32(r15 + 0x4u, r6); UPD(0x0C7C2BD8u, 1);  /* 0C7C2BD6 mov.l Rm,@(disp,Rn) */
	IF(0x0C7C2BD8u); { u32 t_ = r0; PR = 0x0C7C2BDCu; W32(r15, r7); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C7C11C8, 0x0C7C11C8u, 0x0C7C2BDCu); }  /* 0C7C2BD8 jsr @Rn */
L_0C7C2BDC: BLKS(0x0C7C2BDCu);
	r5 = R32(r15 + 0x8u); UPD(0x0C7C2BDEu, 1);  /* 0C7C2BDC mov.l @(disp,Rm),Rn */
	IF(0x0C7C2BDEu); T = r0 >> 31; r0 <<= 1;  /* 0C7C2BDE shll Rn */
	r6 = R32(r15 + 0x4u); UPD(0x0C7C2BE2u, 2);  /* 0C7C2BE0 mov.l @(disp,Rm),Rn */
	IF(0x0C7C2BE2u); r10 = T;  /* 0C7C2BE2 movt Rn */
	r7 = R32(r15); UPD(0x0C7C2BE6u, 2);  /* 0C7C2BE4 mov.l @Rm,Rn */
L_0C7C2BE6: BLKS(0x0C7C2BE6u);
	r0 = 0xC080300u; UPD(0x0C7C2BE8u, 1);  /* 0C7C2BE6 mov.l @(disp,pc),Rn */
	IF(0x0C7C2BE8u); { u32 t_ = r0; PR = 0x0C7C2BECu; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C080300, 0x0C080300u, 0x0C7C2BECu); }  /* 0C7C2BE8 jsr @Rn */
L_0C7C2BEC: BLKS(0x0C7C2BECu);
	T = (r10 & r10) == 0;  /* 0C7C2BEC tst Rm,Rn */
	if (T) { UPD(0x0C7C2BAAu, 4); goto L_0C7C2BAA; }  /* 0C7C2BEE bt */
L_0C7C2BF0: BLKS(0x0C7C2BF0u);
	r15 += 0xCu;  /* 0C7C2BF0 add #imm,Rn */
	IF(0x0C7C2BF2u); PR = R32(r15); r15 += 4; UPD(0x0C7C2BF4u, 2);  /* 0C7C2BF2 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C7C2BF6u, 1);  /* 0C7C2BF4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C2BF8u, 1);  /* 0C7C2BF6 mov.l @Rm+,Rn */
	IF(0x0C7C2BF8u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C7C2BF8 rts */
L_0C7C2BFC: BLKS(0x0C7C2BFCu);
	r0 = 0xC080300u; UPD(0x0C7C2BFEu, 1);  /* 0C7C2BFC mov.l @(disp,pc),Rn */
	r15 += 0xCu;  /* 0C7C2BFE add #imm,Rn */
	IF(0x0C7C2C00u); PR = R32(r15); r15 += 4; UPD(0x0C7C2C02u, 2);  /* 0C7C2C00 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C7C2C04u, 1);  /* 0C7C2C02 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C2C06u, 1);  /* 0C7C2C04 mov.l @Rm+,Rn */
	IF(0x0C7C2C06u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C7C2C06 jmp @Rn */
L_0C7C2C0A: BLKS(0x0C7C2C0Au);
	r1 = 0xC26CDDFu; UPD(0x0C7C2C0Cu, 1);  /* 0C7C2C0A mov.l @(disp,pc),Rn */
	r1 += r9;  /* 0C7C2C0C add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C2C10u, 2);  /* 0C7C2C0E mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C2C10 tst Rm,Rn */
	{ IF(0x0C7C2C14u); r10 = T; /* slot movt Rn */ UPD(0x0C7C2BE6u, 4); goto L_0C7C2BE6; }  /* 0C7C2C12 bra */
}

/* arr_death_82af0 */
void f_0C7C2C40(sh3_t *c)
{
	LOCALS;
L_0C7C2C40: BLKS(0x0C7C2C40u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C7C2C42u, 1);  /* 0C7C2C40 mov.l Rm,@-Rn */
	r8 = r4;  /* 0C7C2C42 mov Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C7C2C46u, 2);  /* 0C7C2C44 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C7C2C48u, 1);  /* 0C7C2C46 mov.l Rm,@-Rn */
	r10 = r5;  /* 0C7C2C48 mov Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C7C2C4Cu, 2);  /* 0C7C2C4A mov.l Rm,@-Rn */
	IF(0x0C7C2C4Cu); r15 -= 4; W32(r15, PR); UPD(0x0C7C2C4Eu, 1);  /* 0C7C2C4C sts.l pr,@-Rn */
	r1 = 0xC21CA15u; UPD(0x0C7C2C50u, 1);  /* 0C7C2C4E mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF8u;  /* 0C7C2C50 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C2C54u, 2);  /* 0C7C2C52 mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C2C54 tst Rm,Rn */
	{ u32 c_ = !T; r2 = 0x10u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C7C2CE2u, 4); goto L_0C7C2CE2; } goto L_0C7C2C5A; }  /* 0C7C2C56 bf/s */
L_0C7C2C5A: BLKS(0x0C7C2C5Au);
	r1 = 0xC7C4298u; UPD(0x0C7C2C5Cu, 2);  /* 0C7C2C5A mov.l @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C7C2C5C exts.w Rm,Rn */
	W32(r1, r2); UPD(0x0C7C2C60u, 2);  /* 0C7C2C5E mov.l Rm,@Rn */
	r1 = 0xB4u; UPD(0x0C7C2C62u, 1);  /* 0C7C2C60 mov.w @(disp,pc),Rn */
	MACL = (u32)((s32)(s16)r4 * (s32)(s16)r1);  /* 0C7C2C62 muls.w Rm,Rn */
	r1 = 0xC26CD48u; UPD(0x0C7C2C66u, 3);  /* 0C7C2C64 mov.l @(disp,pc),Rn */
	IF(0x0C7C2C66u); r9 = MACL;  /* 0C7C2C66 sts macl,Rn */
	r1 += r9;  /* 0C7C2C68 add Rm,Rn */
	r11 = R32(r1); UPD(0x0C7C2C6Cu, 3);  /* 0C7C2C6A mov.l @Rm,Rn */
	r1 = 0x8u;  /* 0C7C2C6C mov #imm,Rn */
	r2 = r11;  /* 0C7C2C6E mov Rm,Rn */
	r2 += 0xFFFFFFFDu;  /* 0C7C2C70 add #imm,Rn */
	T = r2 > r1;  /* 0C7C2C72 cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C7C2CB4u, 7); goto L_0C7C2CB4; }  /* 0C7C2C74 bf */
L_0C7C2C76: BLKS(0x0C7C2C76u);
	r0 = 0xC082AF0u; UPD(0x0C7C2C78u, 1);  /* 0C7C2C76 mov.l @(disp,pc),Rn */
	IF(0x0C7C2C78u); { u32 t_ = r0; PR = 0x0C7C2C7Cu; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C082AF0, 0x0C082AF0u, 0x0C7C2C7Cu); }  /* 0C7C2C78 jsr @Rn */
L_0C7C2C7C: BLKS(0x0C7C2C7Cu);
	r8 = r0;  /* 0C7C2C7C mov Rm,Rn */
	r0 = r11;  /* 0C7C2C7E mov Rm,Rn */
	T = r0 == 0x2u;  /* 0C7C2C80 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C7C2C8Cu, 6); goto L_0C7C2C8C; }  /* 0C7C2C82 bt */
L_0C7C2C84: BLKS(0x0C7C2C84u);
	r1 = 0xC7C4294u; UPD(0x0C7C2C86u, 1);  /* 0C7C2C84 mov.l @(disp,pc),Rn */
	r0 = R32(r1); UPD(0x0C7C2C88u, 1);  /* 0C7C2C86 mov.l @Rm,Rn */
	T = r0 == 0x3u;  /* 0C7C2C88 cmp/eq #imm,r0 */
	if (T) { UPD(0x0C7C2CF2u, 4); goto L_0C7C2CF2; }  /* 0C7C2C8A bt */
L_0C7C2C8C: BLKS(0x0C7C2C8Cu);
	r1 = 0xC26CD40u; UPD(0x0C7C2C8Eu, 1);  /* 0C7C2C8C mov.l @(disp,pc),Rn */
	r1 += r9;  /* 0C7C2C8E add Rm,Rn */
	r1 = R32(r1); UPD(0x0C7C2C92u, 2);  /* 0C7C2C90 mov.l @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C2C92 tst Rm,Rn */
	{ u32 c_ = !T; r0 = r8; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C7C2CD4u, 4); goto L_0C7C2CD4; } goto L_0C7C2C98; }  /* 0C7C2C94 bf/s */
L_0C7C2C98: BLKS(0x0C7C2C98u);
	r0 = 0xC26CD80u; UPD(0x0C7C2C9Au, 2);  /* 0C7C2C98 mov.l @(disp,pc),Rn */
	r1 = 0xC34Fu; UPD(0x0C7C2C9Cu, 1);  /* 0C7C2C9A mov.l @(disp,pc),Rn */
	r9 += r0;  /* 0C7C2C9C add Rm,Rn */
	r4 = R32(r9); UPD(0x0C7C2CA0u, 2);  /* 0C7C2C9E mov.l @Rm,Rn */
	T = r4 > r1;  /* 0C7C2CA0 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C7C2CD2u, 4); goto L_0C7C2CD2; }  /* 0C7C2CA2 bt */
L_0C7C2CA4: BLKS(0x0C7C2CA4u);
	r1 = 0x4000u; UPD(0x0C7C2CA6u, 1);  /* 0C7C2CA4 mov.w @(disp,pc),Rn */
	r4 += r1;  /* 0C7C2CA6 add Rm,Rn */
	r1 = 0xC7C006Cu; UPD(0x0C7C2CAAu, 2);  /* 0C7C2CA8 mov.l @(disp,pc),Rn */
	IF(0x0C7C2CAAu); r4 <<= 2;  /* 0C7C2CAA shll2 Rn */
	IF(0x0C7C2CACu); { u32 t_ = r1; PR = 0x0C7C2CB0u; IF(0x0C7C2CAEu); r4 <<= 2; /* slot shll2 Rn */ UPD(t_, 3); CALLP(t_, f_0C7C006C, 0x0C7C006Cu, 0x0C7C2CB0u); }  /* 0C7C2CAC jsr @Rn */
L_0C7C2CB0: BLKS(0x0C7C2CB0u);
	{ r0 = r8; /* slot mov Rm,Rn */ UPD(0x0C7C2CD4u, 3); goto L_0C7C2CD4; }  /* 0C7C2CB0 bra */
L_0C7C2CB4: BLKS(0x0C7C2CB4u);
	r0 = 0xC7C115Cu; UPD(0x0C7C2CB6u, 1);  /* 0C7C2CB4 mov.l @(disp,pc),Rn */
	r5 = 0x0u;  /* 0C7C2CB6 mov #imm,Rn */
	W32(r15 + 0x4u, r6); UPD(0x0C7C2CBAu, 2);  /* 0C7C2CB8 mov.l Rm,@(disp,Rn) */
	IF(0x0C7C2CBAu); { u32 t_ = r0; PR = 0x0C7C2CBEu; W32(r15, r7); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C7C115C, 0x0C7C115Cu, 0x0C7C2CBEu); }  /* 0C7C2CBA jsr @Rn */
L_0C7C2CBE: BLKS(0x0C7C2CBEu);
	r11 = r0;  /* 0C7C2CBE mov Rm,Rn */
	r0 = 0xC082AF0u; UPD(0x0C7C2CC2u, 2);  /* 0C7C2CC0 mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C7C2CC2 mov Rm,Rn */
	r7 = R32(r15); UPD(0x0C7C2CC6u, 2);  /* 0C7C2CC4 mov.l @Rm,Rn */
	r6 = R32(r15 + 0x4u); UPD(0x0C7C2CC8u, 1);  /* 0C7C2CC6 mov.l @(disp,Rm),Rn */
	IF(0x0C7C2CC8u); { u32 t_ = r0; PR = 0x0C7C2CCCu; r5 = r10; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C082AF0, 0x0C082AF0u, 0x0C7C2CCCu); }  /* 0C7C2CC8 jsr @Rn */
L_0C7C2CCC: BLKS(0x0C7C2CCCu);
	IF(0x0C7C2CCCu); T = (s32)r11 >= 0;  /* 0C7C2CCC cmp/pz Rn */
	{ u32 c_ = T; r8 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C7C2C84u, 4); goto L_0C7C2C84; } UPD(0x0C7C2CD2u, 1); goto L_0C7C2CD2; }  /* 0C7C2CCE bt/s */
L_0C7C2CD2: BLKS(0x0C7C2CD2u);
	r0 = r8;  /* 0C7C2CD2 mov Rm,Rn */
	UPD(0x0C7C2CD4u, 1);
L_0C7C2CD4: BLKS(0x0C7C2CD4u);
	r15 += 0x8u;  /* 0C7C2CD4 add #imm,Rn */
	IF(0x0C7C2CD6u); PR = R32(r15); r15 += 4; UPD(0x0C7C2CD8u, 2);  /* 0C7C2CD6 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C7C2CDAu, 1);  /* 0C7C2CD8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C7C2CDCu, 1);  /* 0C7C2CDA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C2CDEu, 1);  /* 0C7C2CDC mov.l @Rm+,Rn */
	IF(0x0C7C2CDEu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C7C2CDE rts */
L_0C7C2CE2: BLKS(0x0C7C2CE2u);
	r0 = 0xC082AF0u; UPD(0x0C7C2CE4u, 1);  /* 0C7C2CE2 mov.l @(disp,pc),Rn */
	r15 += 0x8u;  /* 0C7C2CE4 add #imm,Rn */
	IF(0x0C7C2CE6u); PR = R32(r15); r15 += 4; UPD(0x0C7C2CE8u, 2);  /* 0C7C2CE6 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C7C2CEAu, 1);  /* 0C7C2CE8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C7C2CECu, 1);  /* 0C7C2CEA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C2CEEu, 1);  /* 0C7C2CEC mov.l @Rm+,Rn */
	IF(0x0C7C2CEEu); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C7C2CEE jmp @Rn */
L_0C7C2CF2: BLKS(0x0C7C2CF2u);
	r1 = 0xC7C006Cu; UPD(0x0C7C2CF4u, 1);  /* 0C7C2CF2 mov.l @(disp,pc),Rn */
	r4 = 0x100000u; UPD(0x0C7C2CF6u, 1);  /* 0C7C2CF4 mov.l @(disp,pc),Rn */
	IF(0x0C7C2CF6u); { u32 t_ = r1; PR = 0x0C7C2CFAu; IF(0x0C7C2CF8u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C7C006C, 0x0C7C006Cu, 0x0C7C2CFAu); }  /* 0C7C2CF6 jsr @Rn */
L_0C7C2CFA: BLKS(0x0C7C2CFAu);
	{ IF(0x0C7C2CFCu); ; /* slot nop */ UPD(0x0C7C2C8Cu, 3); goto L_0C7C2C8C; }  /* 0C7C2CFA bra */
}

/* arr_death_86220 */
void f_0C7C2D30(sh3_t *c)
{
	LOCALS;
L_0C7C2D30: BLKS(0x0C7C2D30u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C7C2D32u, 1);  /* 0C7C2D30 mov.l Rm,@-Rn */
	r8 = r4;  /* 0C7C2D32 mov Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C7C2D36u, 2);  /* 0C7C2D34 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C7C2D38u, 1);  /* 0C7C2D36 mov.l Rm,@-Rn */
	IF(0x0C7C2D38u); r15 -= 4; W32(r15, PR); UPD(0x0C7C2D3Au, 1);  /* 0C7C2D38 sts.l pr,@-Rn */
	r1 = 0xC21CA15u; UPD(0x0C7C2D3Cu, 1);  /* 0C7C2D3A mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF4u;  /* 0C7C2D3C add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C2D40u, 2);  /* 0C7C2D3E mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C2D40 tst Rm,Rn */
	{ u32 c_ = !T; r2 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C7C2DB0u, 4); goto L_0C7C2DB0; } goto L_0C7C2D46; }  /* 0C7C2D42 bf/s */
L_0C7C2D46: BLKS(0x0C7C2D46u);
	r1 = 0xB4u; UPD(0x0C7C2D48u, 2);  /* 0C7C2D46 mov.w @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C7C2D48 exts.w Rm,Rn */
	MACL = (u32)((s32)(s16)r4 * (s32)(s16)r1);  /* 0C7C2D4A muls.w Rm,Rn */
	r1 = 0xC26CD48u; UPD(0x0C7C2D4Eu, 4);  /* 0C7C2D4C mov.l @(disp,pc),Rn */
	IF(0x0C7C2D4Eu); r9 = MACL;  /* 0C7C2D4E sts macl,Rn */
	r1 += r9;  /* 0C7C2D50 add Rm,Rn */
	r1 = R32(r1); UPD(0x0C7C2D54u, 3);  /* 0C7C2D52 mov.l @Rm,Rn */
	r1 += 0xFFFFFFFFu;  /* 0C7C2D54 add #imm,Rn */
	T = r1 > r2;  /* 0C7C2D56 cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C7C2D88u, 5); goto L_0C7C2D88; }  /* 0C7C2D58 bf */
L_0C7C2D5A: BLKS(0x0C7C2D5Au);
	r0 = 0xC086220u; UPD(0x0C7C2D5Cu, 1);  /* 0C7C2D5A mov.l @(disp,pc),Rn */
	IF(0x0C7C2D5Cu); { u32 t_ = r0; PR = 0x0C7C2D60u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C086220, 0x0C086220u, 0x0C7C2D60u); }  /* 0C7C2D5C jsr @Rn */
L_0C7C2D60: BLKS(0x0C7C2D60u);
	r1 = 0xC26CD40u; UPD(0x0C7C2D62u, 1);  /* 0C7C2D60 mov.l @(disp,pc),Rn */
	r1 += r9;  /* 0C7C2D62 add Rm,Rn */
	r1 = R32(r1); UPD(0x0C7C2D66u, 2);  /* 0C7C2D64 mov.l @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C2D66 tst Rm,Rn */
	if (!T) { UPD(0x0C7C2DA4u, 4); goto L_0C7C2DA4; }  /* 0C7C2D68 bf */
L_0C7C2D6A: BLKS(0x0C7C2D6Au);
	r1 = 0xC26CD80u; UPD(0x0C7C2D6Cu, 1);  /* 0C7C2D6A mov.l @(disp,pc),Rn */
	r9 += r1;  /* 0C7C2D6C add Rm,Rn */
	r1 = 0xC34Fu; UPD(0x0C7C2D70u, 2);  /* 0C7C2D6E mov.l @(disp,pc),Rn */
	r4 = R32(r9); UPD(0x0C7C2D72u, 1);  /* 0C7C2D70 mov.l @Rm,Rn */
	T = r4 > r1;  /* 0C7C2D72 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C7C2DA4u, 4); goto L_0C7C2DA4; }  /* 0C7C2D74 bt */
L_0C7C2D76: BLKS(0x0C7C2D76u);
	r2 = 0x4000u; UPD(0x0C7C2D78u, 1);  /* 0C7C2D76 mov.w @(disp,pc),Rn */
	r1 = 0xC7C006Cu; UPD(0x0C7C2D7Au, 1);  /* 0C7C2D78 mov.l @(disp,pc),Rn */
	r4 += r2;  /* 0C7C2D7A add Rm,Rn */
	W32(r15 + 0x8u, r0); UPD(0x0C7C2D7Eu, 2);  /* 0C7C2D7C mov.l Rm,@(disp,Rn) */
	IF(0x0C7C2D7Eu); r4 <<= 2;  /* 0C7C2D7E shll2 Rn */
	IF(0x0C7C2D80u); { u32 t_ = r1; PR = 0x0C7C2D84u; IF(0x0C7C2D82u); r4 <<= 2; /* slot shll2 Rn */ UPD(t_, 3); CALLP(t_, f_0C7C006C, 0x0C7C006Cu, 0x0C7C2D84u); }  /* 0C7C2D80 jsr @Rn */
L_0C7C2D84: BLKS(0x0C7C2D84u);
	{ r0 = R32(r15 + 0x8u); /* slot mov.l @(disp,Rm),Rn */ UPD(0x0C7C2DA4u, 3); goto L_0C7C2DA4; }  /* 0C7C2D84 bra */
L_0C7C2D88: BLKS(0x0C7C2D88u);
	r0 = 0xC7C11C8u; UPD(0x0C7C2D8Au, 1);  /* 0C7C2D88 mov.l @(disp,pc),Rn */
	W32(r15 + 0x8u, r5); UPD(0x0C7C2D8Cu, 1);  /* 0C7C2D8A mov.l Rm,@(disp,Rn) */
	W32(r15 + 0x4u, r6); UPD(0x0C7C2D8Eu, 1);  /* 0C7C2D8C mov.l Rm,@(disp,Rn) */
	IF(0x0C7C2D8Eu); { u32 t_ = r0; PR = 0x0C7C2D92u; W32(r15, r7); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C7C11C8, 0x0C7C11C8u, 0x0C7C2D92u); }  /* 0C7C2D8E jsr @Rn */
L_0C7C2D92: BLKS(0x0C7C2D92u);
	r10 = r0;  /* 0C7C2D92 mov Rm,Rn */
	r0 = 0xC086220u; UPD(0x0C7C2D96u, 2);  /* 0C7C2D94 mov.l @(disp,pc),Rn */
	r7 = R32(r15); UPD(0x0C7C2D98u, 1);  /* 0C7C2D96 mov.l @Rm,Rn */
	r4 = r8;  /* 0C7C2D98 mov Rm,Rn */
	r6 = R32(r15 + 0x4u); UPD(0x0C7C2D9Cu, 2);  /* 0C7C2D9A mov.l @(disp,Rm),Rn */
	IF(0x0C7C2D9Cu); { u32 t_ = r0; PR = 0x0C7C2DA0u; r5 = R32(r15 + 0x8u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C086220, 0x0C086220u, 0x0C7C2DA0u); }  /* 0C7C2D9C jsr @Rn */
L_0C7C2DA0: BLKS(0x0C7C2DA0u);
	IF(0x0C7C2DA0u); T = (s32)r10 >= 0;  /* 0C7C2DA0 cmp/pz Rn */
	if (T) { UPD(0x0C7C2D60u, 4); goto L_0C7C2D60; }  /* 0C7C2DA2 bt */
L_0C7C2DA4: BLKS(0x0C7C2DA4u);
	r15 += 0xCu;  /* 0C7C2DA4 add #imm,Rn */
	IF(0x0C7C2DA6u); PR = R32(r15); r15 += 4; UPD(0x0C7C2DA8u, 2);  /* 0C7C2DA6 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C7C2DAAu, 1);  /* 0C7C2DA8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C2DACu, 1);  /* 0C7C2DAA mov.l @Rm+,Rn */
	IF(0x0C7C2DACu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C7C2DAC rts */
L_0C7C2DB0: BLKS(0x0C7C2DB0u);
	r0 = 0xC086220u; UPD(0x0C7C2DB2u, 1);  /* 0C7C2DB0 mov.l @(disp,pc),Rn */
	r15 += 0xCu;  /* 0C7C2DB2 add #imm,Rn */
	IF(0x0C7C2DB4u); PR = R32(r15); r15 += 4; UPD(0x0C7C2DB6u, 2);  /* 0C7C2DB4 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C7C2DB8u, 1);  /* 0C7C2DB6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C2DBAu, 1);  /* 0C7C2DB8 mov.l @Rm+,Rn */
	IF(0x0C7C2DBAu); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C7C2DBA jmp @Rn */
}

/* arr_death_8e3a0 */
void f_0C7C2DE4(sh3_t *c)
{
	LOCALS;
L_0C7C2DE4: BLKS(0x0C7C2DE4u);
	r0 = 0xC08E3A0u; UPD(0x0C7C2DE6u, 1);  /* 0C7C2DE4 mov.l @(disp,pc),Rn */
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C7C2DE8u, 1);  /* 0C7C2DE6 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C7C2DEAu, 1);  /* 0C7C2DE8 mov.l Rm,@-Rn */
	IF(0x0C7C2DEAu); r15 -= 4; W32(r15, PR); UPD(0x0C7C2DECu, 1);  /* 0C7C2DEA sts.l pr,@-Rn */
	IF(0x0C7C2DECu); { u32 t_ = r0; PR = 0x0C7C2DF0u; r8 = r4; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C08E3A0, 0x0C08E3A0u, 0x0C7C2DF0u); }  /* 0C7C2DEC jsr @Rn */
L_0C7C2DF0: BLKS(0x0C7C2DF0u);
	r1 = 0xC21CA15u; UPD(0x0C7C2DF2u, 1);  /* 0C7C2DF0 mov.l @(disp,pc),Rn */
	r9 = r0;  /* 0C7C2DF2 mov Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C2DF6u, 2);  /* 0C7C2DF4 mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C2DF6 tst Rm,Rn */
	{ u32 c_ = T; r0 = r9; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C7C2E04u, 4); goto L_0C7C2E04; } UPD(0x0C7C2DFCu, 1); goto L_0C7C2DFC; }  /* 0C7C2DF8 bt/s */
L_0C7C2DFC: BLKS(0x0C7C2DFCu);
	IF(0x0C7C2DFCu); PR = R32(r15); r15 += 4; UPD(0x0C7C2DFEu, 1);  /* 0C7C2DFC lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C2E00u, 1);  /* 0C7C2DFE mov.l @Rm+,Rn */
	IF(0x0C7C2E00u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C7C2E00 rts */
L_0C7C2E04: BLKS(0x0C7C2E04u);
	r1 = 0xB4u; UPD(0x0C7C2E06u, 1);  /* 0C7C2E04 mov.w @(disp,pc),Rn */
	r2 = 0xC26CD40u; UPD(0x0C7C2E08u, 1);  /* 0C7C2E06 mov.l @(disp,pc),Rn */
	MACL = (u32)((s32)(s16)r8 * (s32)(s16)r1);  /* 0C7C2E08 muls.w Rm,Rn */
	IF(0x0C7C2E0Au); r1 = MACL;  /* 0C7C2E0A sts macl,Rn */
	r2 += r1;  /* 0C7C2E0C add Rm,Rn */
	r2 = R32(r2); UPD(0x0C7C2E10u, 5);  /* 0C7C2E0E mov.l @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C7C2E10 tst Rm,Rn */
	{ u32 c_ = !T; r0 = r9; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C7C2DFCu, 4); goto L_0C7C2DFC; } goto L_0C7C2E16; }  /* 0C7C2E12 bf/s */
L_0C7C2E16: BLKS(0x0C7C2E16u);
	r2 = 0xC7C4294u; UPD(0x0C7C2E18u, 2);  /* 0C7C2E16 mov.l @(disp,pc),Rn */
	r0 = R32(r2); UPD(0x0C7C2E1Au, 1);  /* 0C7C2E18 mov.l @Rm,Rn */
	T = r0 == 0x3u;  /* 0C7C2E1A cmp/eq #imm,r0 */
	{ u32 c_ = !T; r0 = r9; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C7C2DFCu, 4); goto L_0C7C2DFC; } goto L_0C7C2E20; }  /* 0C7C2E1C bf/s */
L_0C7C2E20: BLKS(0x0C7C2E20u);
	r2 = 0xC26CD80u; UPD(0x0C7C2E22u, 2);  /* 0C7C2E20 mov.l @(disp,pc),Rn */
	r1 += r2;  /* 0C7C2E22 add Rm,Rn */
	r4 = R32(r1); UPD(0x0C7C2E26u, 2);  /* 0C7C2E24 mov.l @Rm,Rn */
	r1 = 0x1869Fu; UPD(0x0C7C2E28u, 1);  /* 0C7C2E26 mov.l @(disp,pc),Rn */
	T = r4 > r1;  /* 0C7C2E28 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C7C2DFCu, 4); goto L_0C7C2DFC; }  /* 0C7C2E2A bt */
L_0C7C2E2C: BLKS(0x0C7C2E2Cu);
	r3 = 0x4000u; UPD(0x0C7C2E2Eu, 1);  /* 0C7C2E2C mov.w @(disp,pc),Rn */
	r1 = 0xC7C006Cu; UPD(0x0C7C2E30u, 1);  /* 0C7C2E2E mov.l @(disp,pc),Rn */
	r4 += r3;  /* 0C7C2E30 add Rm,Rn */
	IF(0x0C7C2E32u); r4 <<= 2;  /* 0C7C2E32 shll2 Rn */
	IF(0x0C7C2E34u); { u32 t_ = r1; PR = 0x0C7C2E38u; IF(0x0C7C2E36u); r4 <<= 2; /* slot shll2 Rn */ UPD(t_, 4); CALLP(t_, f_0C7C006C, 0x0C7C006Cu, 0x0C7C2E38u); }  /* 0C7C2E34 jsr @Rn */
L_0C7C2E38: BLKS(0x0C7C2E38u);
	{ r0 = r9; /* slot mov Rm,Rn */ UPD(0x0C7C2DFCu, 3); goto L_0C7C2DFC; }  /* 0C7C2E38 bra */
}

/* arr_death_8adc0 */
void f_0C7C2E5C(sh3_t *c)
{
	LOCALS;
L_0C7C2E5C: BLKS(0x0C7C2E5Cu);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C7C2E5Eu, 1);  /* 0C7C2E5C mov.l Rm,@-Rn */
	r8 = r4;  /* 0C7C2E5E mov Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C7C2E62u, 2);  /* 0C7C2E60 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C7C2E64u, 1);  /* 0C7C2E62 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C7C2E66u, 1);  /* 0C7C2E64 mov.l Rm,@-Rn */
	IF(0x0C7C2E66u); r15 -= 4; W32(r15, PR); UPD(0x0C7C2E68u, 1);  /* 0C7C2E66 sts.l pr,@-Rn */
	r1 = 0xC21CA15u; UPD(0x0C7C2E6Au, 1);  /* 0C7C2E68 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFF4u;  /* 0C7C2E6A add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C2E6Eu, 2);  /* 0C7C2E6C mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C2E6E tst Rm,Rn */
	if (!T) { UPD(0x0C7C2E7Cu, 4); goto L_0C7C2E7C; }  /* 0C7C2E70 bf */
L_0C7C2E72: BLKS(0x0C7C2E72u);
	r9 = 0xC7C4294u; UPD(0x0C7C2E74u, 1);  /* 0C7C2E72 mov.l @(disp,pc),Rn */
	r0 = R32(r9); UPD(0x0C7C2E76u, 1);  /* 0C7C2E74 mov.l @Rm,Rn */
	T = r0 == 0x3u;  /* 0C7C2E76 cmp/eq #imm,r0 */
	{ u32 c_ = T; r4 = (u32)(s32)(s16)r4; /* slot exts.w Rm,Rn */ if (c_) { UPD(0x0C7C2E8Eu, 4); goto L_0C7C2E8E; } UPD(0x0C7C2E7Cu, 1); goto L_0C7C2E7C; }  /* 0C7C2E78 bt/s */
L_0C7C2E7C: BLKS(0x0C7C2E7Cu);
	r0 = 0xC08ADC0u; UPD(0x0C7C2E7Eu, 1);  /* 0C7C2E7C mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C7C2E7E mov Rm,Rn */
	r15 += 0xCu;  /* 0C7C2E80 add #imm,Rn */
	IF(0x0C7C2E82u); PR = R32(r15); r15 += 4; UPD(0x0C7C2E84u, 3);  /* 0C7C2E82 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C7C2E86u, 1);  /* 0C7C2E84 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C7C2E88u, 1);  /* 0C7C2E86 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C2E8Au, 1);  /* 0C7C2E88 mov.l @Rm+,Rn */
	IF(0x0C7C2E8Au); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C08ADC0u: TAIL(f_0C08ADC0); default: JUMPD(tv_); } }  /* 0C7C2E8A jmp @Rn */
L_0C7C2E8E: BLKS(0x0C7C2E8Eu);
	r1 = 0xB4u; UPD(0x0C7C2E90u, 1);  /* 0C7C2E8E mov.w @(disp,pc),Rn */
	r2 = 0x7u;  /* 0C7C2E90 mov #imm,Rn */
	MACL = (u32)((s32)(s16)r4 * (s32)(s16)r1);  /* 0C7C2E92 muls.w Rm,Rn */
	r1 = 0xC26CD48u; UPD(0x0C7C2E96u, 4);  /* 0C7C2E94 mov.l @(disp,pc),Rn */
	IF(0x0C7C2E96u); r10 = MACL;  /* 0C7C2E96 sts macl,Rn */
	r1 += r10;  /* 0C7C2E98 add Rm,Rn */
	r1 = R32(r1); UPD(0x0C7C2E9Cu, 3);  /* 0C7C2E9A mov.l @Rm,Rn */
	r3 = r1;  /* 0C7C2E9C mov Rm,Rn */
	r3 += 0xFFFFFFFFu;  /* 0C7C2E9E add #imm,Rn */
	T = r3 > r2;  /* 0C7C2EA0 cmp/hi Rm,Rn */
	{ u32 c_ = !T; r3 = 0x2u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C7C2E7Cu, 6); goto L_0C7C2E7C; } goto L_0C7C2EA6; }  /* 0C7C2EA2 bf/s */
L_0C7C2EA6: BLKS(0x0C7C2EA6u);
	r2 = r1;  /* 0C7C2EA6 mov Rm,Rn */
	r2 += 0xFFFFFFEEu;  /* 0C7C2EA8 add #imm,Rn */
	T = r2 > r3;  /* 0C7C2EAA cmp/hi Rm,Rn */
	{ u32 c_ = !T; r1 += 0xFFFFFFDFu; /* slot add #imm,Rn */ if (c_) { UPD(0x0C7C2EFAu, 7); goto L_0C7C2EFA; } goto L_0C7C2EB0; }  /* 0C7C2EAC bf/s */
L_0C7C2EB0: BLKS(0x0C7C2EB0u);
	r2 = 0x6u;  /* 0C7C2EB0 mov #imm,Rn */
	T = r1 > r2;  /* 0C7C2EB2 cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C7C2EFAu, 6); goto L_0C7C2EFA; }  /* 0C7C2EB4 bf */
L_0C7C2EB6: BLKS(0x0C7C2EB6u);
	r0 = 0xC08ADC0u; UPD(0x0C7C2EB8u, 1);  /* 0C7C2EB6 mov.l @(disp,pc),Rn */
	IF(0x0C7C2EB8u); { u32 t_ = r0; PR = 0x0C7C2EBCu; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C08ADC0, 0x0C08ADC0u, 0x0C7C2EBCu); }  /* 0C7C2EB8 jsr @Rn */
L_0C7C2EBC: BLKS(0x0C7C2EBCu);
	r8 = r0;  /* 0C7C2EBC mov Rm,Rn */
	UPD(0x0C7C2EBEu, 1);
L_0C7C2EBE: BLKS(0x0C7C2EBEu);
	r1 = 0xC26CD40u; UPD(0x0C7C2EC0u, 1);  /* 0C7C2EBE mov.l @(disp,pc),Rn */
	r1 += r10;  /* 0C7C2EC0 add Rm,Rn */
	r1 = R32(r1); UPD(0x0C7C2EC4u, 2);  /* 0C7C2EC2 mov.l @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C2EC4 tst Rm,Rn */
	{ u32 c_ = !T; r0 = r8; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C7C2EECu, 4); goto L_0C7C2EEC; } goto L_0C7C2ECA; }  /* 0C7C2EC6 bf/s */
L_0C7C2ECA: BLKS(0x0C7C2ECAu);
	r0 = R32(r9); UPD(0x0C7C2ECCu, 2);  /* 0C7C2ECA mov.l @Rm,Rn */
	T = r0 == 0x3u;  /* 0C7C2ECC cmp/eq #imm,r0 */
	{ u32 c_ = !T; r0 = r8; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C7C2EECu, 4); goto L_0C7C2EEC; } goto L_0C7C2ED2; }  /* 0C7C2ECE bf/s */
L_0C7C2ED2: BLKS(0x0C7C2ED2u);
	r3 = 0xC26CD80u; UPD(0x0C7C2ED4u, 2);  /* 0C7C2ED2 mov.l @(disp,pc),Rn */
	r2 = 0x1869Fu; UPD(0x0C7C2ED6u, 1);  /* 0C7C2ED4 mov.l @(disp,pc),Rn */
	r10 += r3;  /* 0C7C2ED6 add Rm,Rn */
	r1 = R32(r10); UPD(0x0C7C2EDAu, 2);  /* 0C7C2ED8 mov.l @Rm,Rn */
	T = r1 > r2;  /* 0C7C2EDA cmp/hi Rm,Rn */
	if (T) { UPD(0x0C7C2EECu, 4); goto L_0C7C2EEC; }  /* 0C7C2EDC bt */
L_0C7C2EDE: BLKS(0x0C7C2EDEu);
	r4 = 0x4000u; UPD(0x0C7C2EE0u, 1);  /* 0C7C2EDE mov.w @(disp,pc),Rn */
	r4 += r1;  /* 0C7C2EE0 add Rm,Rn */
	r1 = 0xC7C006Cu; UPD(0x0C7C2EE4u, 2);  /* 0C7C2EE2 mov.l @(disp,pc),Rn */
	IF(0x0C7C2EE4u); r4 <<= 2;  /* 0C7C2EE4 shll2 Rn */
	IF(0x0C7C2EE6u); { u32 t_ = r1; PR = 0x0C7C2EEAu; IF(0x0C7C2EE8u); r4 <<= 2; /* slot shll2 Rn */ UPD(t_, 3); CALLP(t_, f_0C7C006C, 0x0C7C006Cu, 0x0C7C2EEAu); }  /* 0C7C2EE6 jsr @Rn */
L_0C7C2EEA: BLKS(0x0C7C2EEAu);
	r0 = r8;  /* 0C7C2EEA mov Rm,Rn */
	UPD(0x0C7C2EECu, 1);
L_0C7C2EEC: BLKS(0x0C7C2EECu);
	r15 += 0xCu;  /* 0C7C2EEC add #imm,Rn */
	IF(0x0C7C2EEEu); PR = R32(r15); r15 += 4; UPD(0x0C7C2EF0u, 2);  /* 0C7C2EEE lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C7C2EF2u, 1);  /* 0C7C2EF0 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C7C2EF4u, 1);  /* 0C7C2EF2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C2EF6u, 1);  /* 0C7C2EF4 mov.l @Rm+,Rn */
	IF(0x0C7C2EF6u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C7C2EF6 rts */
L_0C7C2EFA: BLKS(0x0C7C2EFAu);
	r0 = 0xC7C11C8u; UPD(0x0C7C2EFCu, 1);  /* 0C7C2EFA mov.l @(disp,pc),Rn */
	W32(r15 + 0x8u, r5); UPD(0x0C7C2EFEu, 1);  /* 0C7C2EFC mov.l Rm,@(disp,Rn) */
	W32(r15 + 0x4u, r6); UPD(0x0C7C2F00u, 1);  /* 0C7C2EFE mov.l Rm,@(disp,Rn) */
	IF(0x0C7C2F00u); { u32 t_ = r0; PR = 0x0C7C2F04u; W32(r15, r7); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C7C11C8, 0x0C7C11C8u, 0x0C7C2F04u); }  /* 0C7C2F00 jsr @Rn */
L_0C7C2F04: BLKS(0x0C7C2F04u);
	r11 = r0;  /* 0C7C2F04 mov Rm,Rn */
	r0 = 0xC08ADC0u; UPD(0x0C7C2F08u, 2);  /* 0C7C2F06 mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C7C2F08 mov Rm,Rn */
	r7 = R32(r15); UPD(0x0C7C2F0Cu, 2);  /* 0C7C2F0A mov.l @Rm,Rn */
	r6 = R32(r15 + 0x4u); UPD(0x0C7C2F0Eu, 1);  /* 0C7C2F0C mov.l @(disp,Rm),Rn */
	IF(0x0C7C2F0Eu); { u32 t_ = r0; PR = 0x0C7C2F12u; r5 = R32(r15 + 0x8u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 2); CALLP(t_, f_0C08ADC0, 0x0C08ADC0u, 0x0C7C2F12u); }  /* 0C7C2F0E jsr @Rn */
L_0C7C2F12: BLKS(0x0C7C2F12u);
	IF(0x0C7C2F12u); T = (s32)r11 >= 0;  /* 0C7C2F12 cmp/pz Rn */
	{ u32 c_ = !T; r8 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C7C2EEAu, 4); goto L_0C7C2EEA; } goto L_0C7C2F18; }  /* 0C7C2F14 bf/s */
L_0C7C2F18: BLKS(0x0C7C2F18u);
	{ IF(0x0C7C2F1Au); ; /* slot nop */ UPD(0x0C7C2EBEu, 4); goto L_0C7C2EBE; }  /* 0C7C2F18 bra */
}

/* drop1 */
void f_0C7C2F44(sh3_t *c)
{
	LOCALS;
L_0C7C2F44: BLKS(0x0C7C2F44u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C7C2F46u, 1);  /* 0C7C2F44 mov.l Rm,@-Rn */
	r7 = 0x0u;  /* 0C7C2F46 mov #imm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C7C2F4Au, 2);  /* 0C7C2F48 mov.l Rm,@-Rn */
	r9 = r4;  /* 0C7C2F4A mov Rm,Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C7C2F4Eu, 2);  /* 0C7C2F4C mov.l Rm,@-Rn */
	r10 = r5;  /* 0C7C2F4E mov Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C7C2F52u, 2);  /* 0C7C2F50 mov.l Rm,@-Rn */
	r5 = 0x0u;  /* 0C7C2F52 mov #imm,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C7C2F56u, 2);  /* 0C7C2F54 mov.l Rm,@-Rn */
	r11 = r6;  /* 0C7C2F56 mov Rm,Rn */
	r12 = 0xC050D70u; UPD(0x0C7C2F5Au, 2);  /* 0C7C2F58 mov.l @(disp,pc),Rn */
	r6 = 0x0u;  /* 0C7C2F5A mov #imm,Rn */
	IF(0x0C7C2F5Cu); r15 -= 4; W32(r15, PR); UPD(0x0C7C2F5Eu, 2);  /* 0C7C2F5C sts.l pr,@-Rn */
	r4 = 0x20000u; UPD(0x0C7C2F60u, 1);  /* 0C7C2F5E mov.l @(disp,pc),Rn */
	IF(0x0C7C2F60u); { u32 t_ = r12; PR = 0x0C7C2F64u; r15 += 0xFFFFFFF8u; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C050D70, 0x0C050D70u, 0x0C7C2F64u); }  /* 0C7C2F60 jsr @Rn */
L_0C7C2F64: BLKS(0x0C7C2F64u);
	r4 = 0x180u; UPD(0x0C7C2F66u, 1);  /* 0C7C2F64 mov.w @(disp,pc),Rn */
	r7 = 0x0u;  /* 0C7C2F66 mov #imm,Rn */
	r6 = 0x0u;  /* 0C7C2F68 mov #imm,Rn */
	r8 = r0;  /* 0C7C2F6A mov Rm,Rn */
	IF(0x0C7C2F6Cu); { u32 t_ = r12; PR = 0x0C7C2F70u; r5 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 5); CALLD(t_, 0x0C7C2F70u); }  /* 0C7C2F6C jsr @Rn */
L_0C7C2F70: BLKS(0x0C7C2F70u);
	r1 = 0xFFFFFF40u; UPD(0x0C7C2F72u, 1);  /* 0C7C2F70 mov.w @(disp,pc),Rn */
	r7 = 0x14u;  /* 0C7C2F72 mov #imm,Rn */
	r6 = r11;  /* 0C7C2F74 mov Rm,Rn */
	r5 = r10;  /* 0C7C2F76 mov Rm,Rn */
	r0 += r1;  /* 0C7C2F78 add Rm,Rn */
	r1 = 0x58000u; UPD(0x0C7C2F7Cu, 5);  /* 0C7C2F7A mov.l @(disp,pc),Rn */
	IF(0x0C7C2F7Cu); r0 <<= 8;  /* 0C7C2F7C shll8 Rn */
	r4 = r9;  /* 0C7C2F7E mov Rm,Rn */
	W32(r15 + 0x4u, r0); UPD(0x0C7C2F82u, 3);  /* 0C7C2F80 mov.l Rm,@(disp,Rn) */
	r8 += r1;  /* 0C7C2F82 add Rm,Rn */
	r0 = 0xC06CC20u; UPD(0x0C7C2F86u, 2);  /* 0C7C2F84 mov.l @(disp,pc),Rn */
	IF(0x0C7C2F86u); { u32 t_ = r0; PR = 0x0C7C2F8Au; W32(r15, r8); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C06CC20, 0x0C06CC20u, 0x0C7C2F8Au); }  /* 0C7C2F86 jsr @Rn */
L_0C7C2F8A: BLKS(0x0C7C2F8Au);
	r15 += 0x8u;  /* 0C7C2F8A add #imm,Rn */
	IF(0x0C7C2F8Cu); PR = R32(r15); r15 += 4; UPD(0x0C7C2F8Eu, 2);  /* 0C7C2F8C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C7C2F90u, 1);  /* 0C7C2F8E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C7C2F92u, 1);  /* 0C7C2F90 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C7C2F94u, 1);  /* 0C7C2F92 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C2F96u, 1);  /* 0C7C2F94 mov.l @Rm+,Rn */
	IF(0x0C7C2F96u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C7C2F96 rts */
}

/* arr_items_respawn */
void f_0C7C2FB0(sh3_t *c)
{
	LOCALS;
L_0C7C2FB0: BLKS(0x0C7C2FB0u);
	r0 = (u32)(s32)(s16)r4;  /* 0C7C2FB0 exts.w Rm,Rn */
	r1 = 0x1u;  /* 0C7C2FB2 mov #imm,Rn */
	T = r0 > r1;  /* 0C7C2FB4 cmp/hi Rm,Rn */
	{ u32 c_ = T; r1 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C7C2FF6u, 6); goto L_0C7C2FF6; } goto L_0C7C2FBA; }  /* 0C7C2FB6 bt/s */
L_0C7C2FBA: BLKS(0x0C7C2FBAu);
	IF(0x0C7C2FBAu); r1 <<= 2;  /* 0C7C2FBA shll2 Rn */
	r1 += r1;  /* 0C7C2FBC add Rm,Rn */
	r2 = r1;  /* 0C7C2FBE mov Rm,Rn */
	r1 = 0xC7C492Eu; UPD(0x0C7C2FC2u, 5);  /* 0C7C2FC0 mov.l @(disp,pc),Rn */
	r2 -= r0;  /* 0C7C2FC2 sub Rm,Rn */
	r1 += r2;  /* 0C7C2FC4 add Rm,Rn */
	r3 = r1;  /* 0C7C2FC6 mov Rm,Rn */
	r2 = 0x0u;  /* 0C7C2FC8 mov #imm,Rn */
	r3 += 0x1u;  /* 0C7C2FCA add #imm,Rn */
	W8(r1, r2); UPD(0x0C7C2FCEu, 6);  /* 0C7C2FCC mov.b Rm,@Rn */
	W8(r3, r2); UPD(0x0C7C2FD0u, 1);  /* 0C7C2FCE mov.b Rm,@Rn */
	r3 = r1;  /* 0C7C2FD0 mov Rm,Rn */
	r3 += 0x2u;  /* 0C7C2FD2 add #imm,Rn */
	W8(r3, r2); UPD(0x0C7C2FD6u, 3);  /* 0C7C2FD4 mov.b Rm,@Rn */
	r3 = r1;  /* 0C7C2FD6 mov Rm,Rn */
	r3 += 0x3u;  /* 0C7C2FD8 add #imm,Rn */
	W8(r3, r2); UPD(0x0C7C2FDCu, 3);  /* 0C7C2FDA mov.b Rm,@Rn */
	r3 = r1;  /* 0C7C2FDC mov Rm,Rn */
	r3 += 0x4u;  /* 0C7C2FDE add #imm,Rn */
	W8(r3, r2); UPD(0x0C7C2FE2u, 3);  /* 0C7C2FE0 mov.b Rm,@Rn */
	r3 = r1;  /* 0C7C2FE2 mov Rm,Rn */
	r1 += 0x6u;  /* 0C7C2FE4 add #imm,Rn */
	W8(r1, r2); UPD(0x0C7C2FE8u, 3);  /* 0C7C2FE6 mov.b Rm,@Rn */
	r3 += 0x5u;  /* 0C7C2FE8 add #imm,Rn */
	r1 = 0xC7C492Cu; UPD(0x0C7C2FECu, 2);  /* 0C7C2FEA mov.l @(disp,pc),Rn */
	W8(r3, r2); UPD(0x0C7C2FEEu, 1);  /* 0C7C2FEC mov.b Rm,@Rn */
	IF(0x0C7C2FEEu); W8(r0 + r1, r2); UPD(0x0C7C2FF0u, 1);  /* 0C7C2FEE mov.b Rm,@(r0,Rn) */
	r2 = 0xFFFFFFFFu;  /* 0C7C2FF0 mov #imm,Rn */
	r1 = 0xC7C4238u; UPD(0x0C7C2FF4u, 2);  /* 0C7C2FF2 mov.l @(disp,pc),Rn */
	IF(0x0C7C2FF4u); W8(r0 + r1, r2); UPD(0x0C7C2FF6u, 1);  /* 0C7C2FF4 mov.b Rm,@(r0,Rn) */
L_0C7C2FF6: BLKS(0x0C7C2FF6u);
	IF(0x0C7C2FF6u); { u32 t_ = PR; IF(0x0C7C2FF8u); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C7C2FF6 rts */
}

/* arr_items_new_game */
void f_0C7C3008(sh3_t *c)
{
	LOCALS;
L_0C7C3008: BLKS(0x0C7C3008u);
	r0 = (u32)(s32)(s16)r4;  /* 0C7C3008 exts.w Rm,Rn */
	r1 = 0x1u;  /* 0C7C300A mov #imm,Rn */
	T = r0 > r1;  /* 0C7C300C cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C7C3014u, 6); goto L_0C7C3014; }  /* 0C7C300E bf */
L_0C7C3010: BLKS(0x0C7C3010u);
	IF(0x0C7C3010u); { u32 t_ = PR; IF(0x0C7C3012u); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C7C3010 rts */
L_0C7C3014: BLKS(0x0C7C3014u);
	r1 = 0x280u; UPD(0x0C7C3016u, 1);  /* 0C7C3014 mov.w @(disp,pc),Rn */
	r2 = 0xC7C492Eu; UPD(0x0C7C3018u, 1);  /* 0C7C3016 mov.l @(disp,pc),Rn */
	MACL = (u32)((s32)(s16)r0 * (s32)(s16)r1);  /* 0C7C3018 muls.w Rm,Rn */
	r1 = 0xC7C4920u; UPD(0x0C7C301Cu, 3);  /* 0C7C301A mov.l @(disp,pc),Rn */
	W32(r1, r0); UPD(0x0C7C301Eu, 1);  /* 0C7C301C mov.l Rm,@Rn */
	r1 = r0;  /* 0C7C301E mov Rm,Rn */
	IF(0x0C7C3020u); r1 <<= 2;  /* 0C7C3020 shll2 Rn */
	r1 += r1;  /* 0C7C3022 add Rm,Rn */
	r1 -= r0;  /* 0C7C3024 sub Rm,Rn */
	r2 += r1;  /* 0C7C3026 add Rm,Rn */
	r7 = r2;  /* 0C7C3028 mov Rm,Rn */
	r1 = 0x0u;  /* 0C7C302A mov #imm,Rn */
	r7 += 0x1u;  /* 0C7C302C add #imm,Rn */
	W8(r2, r1); UPD(0x0C7C3030u, 9);  /* 0C7C302E mov.b Rm,@Rn */
	W8(r7, r1); UPD(0x0C7C3032u, 1);  /* 0C7C3030 mov.b Rm,@Rn */
	r7 = r2;  /* 0C7C3032 mov Rm,Rn */
	r7 += 0x2u;  /* 0C7C3034 add #imm,Rn */
	W8(r7, r1); UPD(0x0C7C3038u, 3);  /* 0C7C3036 mov.b Rm,@Rn */
	r7 = r2;  /* 0C7C3038 mov Rm,Rn */
	r7 += 0x3u;  /* 0C7C303A add #imm,Rn */
	W8(r7, r1); UPD(0x0C7C303Eu, 3);  /* 0C7C303C mov.b Rm,@Rn */
	r7 = r2;  /* 0C7C303E mov Rm,Rn */
	r7 += 0x4u;  /* 0C7C3040 add #imm,Rn */
	W8(r7, r1); UPD(0x0C7C3044u, 3);  /* 0C7C3042 mov.b Rm,@Rn */
	r7 = r2;  /* 0C7C3044 mov Rm,Rn */
	r2 += 0x6u;  /* 0C7C3046 add #imm,Rn */
	W8(r2, r1); UPD(0x0C7C304Au, 3);  /* 0C7C3048 mov.b Rm,@Rn */
	r7 += 0x5u;  /* 0C7C304A add #imm,Rn */
	r2 = 0xC7C492Cu; UPD(0x0C7C304Eu, 2);  /* 0C7C304C mov.l @(disp,pc),Rn */
	W8(r7, r1); UPD(0x0C7C3050u, 1);  /* 0C7C304E mov.b Rm,@Rn */
	r7 = 0xFFFFFFFFu;  /* 0C7C3050 mov #imm,Rn */
	IF(0x0C7C3052u); W8(r0 + r2, r1); UPD(0x0C7C3054u, 2);  /* 0C7C3052 mov.b Rm,@(r0,Rn) */
	r2 = 0xC7C4238u; UPD(0x0C7C3056u, 1);  /* 0C7C3054 mov.l @(disp,pc),Rn */
	IF(0x0C7C3056u); r3 = MACL;  /* 0C7C3056 sts macl,Rn */
	IF(0x0C7C3058u); W8(r0 + r2, r7); UPD(0x0C7C305Au, 2);  /* 0C7C3058 mov.b Rm,@(r0,Rn) */
	r2 = 0xC7C4928u; UPD(0x0C7C305Cu, 1);  /* 0C7C305A mov.l @(disp,pc),Rn */
	IF(0x0C7C305Cu); W8(r0 + r2, r1); UPD(0x0C7C305Eu, 1);  /* 0C7C305C mov.b Rm,@(r0,Rn) */
	r2 = 0xC2839F6u; UPD(0x0C7C3060u, 1);  /* 0C7C305E mov.l @(disp,pc),Rn */
	r2 += r3;  /* 0C7C3060 add Rm,Rn */
	W8(r2, r1); UPD(0x0C7C3064u, 2);  /* 0C7C3062 mov.b Rm,@Rn */
	r2 = 0xC2839F7u; UPD(0x0C7C3066u, 1);  /* 0C7C3064 mov.l @(disp,pc),Rn */
	r2 += r3;  /* 0C7C3066 add Rm,Rn */
	W8(r2, r1); UPD(0x0C7C306Au, 2);  /* 0C7C3068 mov.b Rm,@Rn */
	r2 = 0xC2839F8u; UPD(0x0C7C306Cu, 1);  /* 0C7C306A mov.l @(disp,pc),Rn */
	r2 += r3;  /* 0C7C306C add Rm,Rn */
	W8(r2, r1); UPD(0x0C7C3070u, 2);  /* 0C7C306E mov.b Rm,@Rn */
	IF(0x0C7C3070u); { u32 t_ = PR; IF(0x0C7C3072u); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C7C3070 rts */
}

/* arr_popup */
void f_0C7C3098(sh3_t *c)
{
	LOCALS;
L_0C7C3098: BLKS(0x0C7C3098u);
	r0 = 0xC06C2B0u; UPD(0x0C7C309Au, 1);  /* 0C7C3098 mov.l @(disp,pc),Rn */
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C7C309Cu, 1);  /* 0C7C309A mov.l Rm,@-Rn */
	IF(0x0C7C309Cu); r15 -= 4; W32(r15, PR); UPD(0x0C7C309Eu, 1);  /* 0C7C309C sts.l pr,@-Rn */
	IF(0x0C7C309Eu); { u32 t_ = r0; PR = 0x0C7C30A2u; r8 = r5; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C06C2B0, 0x0C06C2B0u, 0x0C7C30A2u); }  /* 0C7C309E jsr @Rn */
L_0C7C30A2: BLKS(0x0C7C30A2u);
	r1 = 0xC21CA15u; UPD(0x0C7C30A4u, 1);  /* 0C7C30A2 mov.l @(disp,pc),Rn */
	r4 = r0;  /* 0C7C30A4 mov Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C30A8u, 2);  /* 0C7C30A6 mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C30A8 tst Rm,Rn */
	{ u32 c_ = T; r1 = 0x54u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C7C30B6u, 4); goto L_0C7C30B6; } UPD(0x0C7C30AEu, 1); goto L_0C7C30AE; }  /* 0C7C30AA bt/s */
L_0C7C30AE: BLKS(0x0C7C30AEu);
	r0 = r4;  /* 0C7C30AE mov Rm,Rn */
	IF(0x0C7C30B0u); PR = R32(r15); r15 += 4; UPD(0x0C7C30B2u, 2);  /* 0C7C30B0 lds.l @Rn+,pr */
	IF(0x0C7C30B2u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C7C30B2 rts */
L_0C7C30B6: BLKS(0x0C7C30B6u);
	r2 = 0xC38C064u; UPD(0x0C7C30B8u, 1);  /* 0C7C30B6 mov.l @(disp,pc),Rn */
	MACL = (u32)((s32)(s16)r8 * (s32)(s16)r1);  /* 0C7C30B8 muls.w Rm,Rn */
	r7 = 0x140u; UPD(0x0C7C30BCu, 3);  /* 0C7C30BA mov.w @(disp,pc),Rn */
	r3 = 0x0u;  /* 0C7C30BC mov #imm,Rn */
	r6 = 0xFFu; UPD(0x0C7C30C0u, 2);  /* 0C7C30BE mov.w @(disp,pc),Rn */
	r1 = 0x0u;  /* 0C7C30C0 mov #imm,Rn */
	IF(0x0C7C30C2u); r8 = MACL;  /* 0C7C30C2 sts macl,Rn */
	UPD(0x0C7C30C4u, 2);
L_0C7C30C4: BLKS(0x0C7C30C4u);
	r0 = R32(r2); UPD(0x0C7C30C6u, 1);  /* 0C7C30C4 mov.l @Rm,Rn */
	T = (r0 & r0) == 0;  /* 0C7C30C6 tst Rm,Rn */
	if (T) { UPD(0x0C7C30DCu, 4); goto L_0C7C30DC; }  /* 0C7C30C8 bt */
L_0C7C30CA: BLKS(0x0C7C30CAu);
	T = r1 > r6;  /* 0C7C30CA cmp/hi Rm,Rn */
	{ u32 c_ = T; T = (r0 & 0x10u) == 0; /* slot tst #imm,r0 */ if (c_) { UPD(0x0C7C3104u, 4); goto L_0C7C3104; } goto L_0C7C30D0; }  /* 0C7C30CC bt/s */
L_0C7C30D0: BLKS(0x0C7C30D0u);
	r2 += 0x54u;  /* 0C7C30D0 add #imm,Rn */
	r0 = R32(r2); UPD(0x0C7C30D4u, 3);  /* 0C7C30D2 mov.l @Rm,Rn */
	r3 += 0x1u;  /* 0C7C30D4 add #imm,Rn */
	T = (r0 & r0) == 0;  /* 0C7C30D6 tst Rm,Rn */
	{ u32 c_ = !T; r1 += 0x1u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C7C30CAu, 5); goto L_0C7C30CA; } UPD(0x0C7C30DCu, 1); goto L_0C7C30DC; }  /* 0C7C30D8 bf/s */
L_0C7C30DC: BLKS(0x0C7C30DCu);
	r1 += 0x1u;  /* 0C7C30DC add #imm,Rn */
	T = r1 == r7;  /* 0C7C30DE cmp/eq Rm,Rn */
	{ u32 c_ = !T; r2 += 0x54u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C7C30C4u, 5); goto L_0C7C30C4; } goto L_0C7C30E4; }  /* 0C7C30E0 bf/s */
L_0C7C30E4: BLKS(0x0C7C30E4u);
	IF(0x0C7C30E4u); r3 >>= 2;  /* 0C7C30E4 shlr2 Rn */
	UPD(0x0C7C30E6u, 2);
L_0C7C30E6: BLKS(0x0C7C30E6u);
	r2 = 0xC38C0B3u; UPD(0x0C7C30E8u, 1);  /* 0C7C30E6 mov.l @(disp,pc),Rn */
	r1 = 0u - r3;  /* 0C7C30E8 neg Rm,Rn */
	r1 += 0x3Cu;  /* 0C7C30EA add #imm,Rn */
	r1 = r1 & 0xFF;  /* 0C7C30EC extu.b Rm,Rn */
	r2 += r8;  /* 0C7C30EE add Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C30F0 tst Rm,Rn */
	W8(r2, r1); UPD(0x0C7C30F4u, 6);  /* 0C7C30F2 mov.b Rm,@Rn */
	if (!T) { UPD(0x0C7C30AEu, 3); goto L_0C7C30AE; }  /* 0C7C30F4 bf */
L_0C7C30F6: BLKS(0x0C7C30F6u);
	r2 = 0xC38C064u; UPD(0x0C7C30F8u, 1);  /* 0C7C30F6 mov.l @(disp,pc),Rn */
	r0 = r4;  /* 0C7C30F8 mov Rm,Rn */
	r8 += r2;  /* 0C7C30FA add Rm,Rn */
	W32(r8, r1); UPD(0x0C7C30FEu, 3);  /* 0C7C30FC mov.l Rm,@Rn */
	IF(0x0C7C30FEu); PR = R32(r15); r15 += 4; UPD(0x0C7C3100u, 1);  /* 0C7C30FE lds.l @Rn+,pr */
	IF(0x0C7C3100u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C7C3100 rts */
L_0C7C3104: BLKS(0x0C7C3104u);
	r5 = 0xFFFFFFFFu;  /* 0C7C3104 mov #imm,Rn */
	{ u32 a_ = r3, t_ = a_ - r5, r_ = t_ - T; T = (a_ < t_) | (t_ < r_); r3 = r_; }  /* 0C7C3106 subc Rm,Rn */
	r1 += 0x1u;  /* 0C7C3108 add #imm,Rn */
	T = r1 == r7;  /* 0C7C310A cmp/eq Rm,Rn */
	{ u32 c_ = !T; r2 += 0x54u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C7C30C4u, 7); goto L_0C7C30C4; } goto L_0C7C3110; }  /* 0C7C310C bf/s */
L_0C7C3110: BLKS(0x0C7C3110u);
	{ IF(0x0C7C3112u); r3 >>= 2; /* slot shlr2 Rn */ UPD(0x0C7C30E6u, 4); goto L_0C7C30E6; }  /* 0C7C3110 bra */
}

/* arr_item0 */
void f_0C7C3128(sh3_t *c)
{
	LOCALS;
L_0C7C3128: BLKS(0x0C7C3128u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C7C312Au, 1);  /* 0C7C3128 mov.l Rm,@-Rn */
	r8 = r4;  /* 0C7C312A mov Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C7C312Eu, 2);  /* 0C7C312C mov.l Rm,@-Rn */
	r9 = r5;  /* 0C7C312E mov Rm,Rn */
	r0 = 0xC06B850u; UPD(0x0C7C3132u, 2);  /* 0C7C3130 mov.l @(disp,pc),Rn */
	IF(0x0C7C3132u); r15 -= 4; W32(r15, PR); UPD(0x0C7C3134u, 1);  /* 0C7C3132 sts.l pr,@-Rn */
	IF(0x0C7C3134u); { u32 t_ = r0; PR = 0x0C7C3138u; r15 += 0xFFFFFFFCu; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C06B850, 0x0C06B850u, 0x0C7C3138u); }  /* 0C7C3134 jsr @Rn */
L_0C7C3138: BLKS(0x0C7C3138u);
	r1 = 0xC21CA15u; UPD(0x0C7C313Au, 1);  /* 0C7C3138 mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C313Cu, 1);  /* 0C7C313A mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C313C tst Rm,Rn */
	{ u32 c_ = !T; r1 = 0x54u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C7C3154u, 4); goto L_0C7C3154; } goto L_0C7C3142; }  /* 0C7C313E bf/s */
L_0C7C3142: BLKS(0x0C7C3142u);
	r2 = 0xC38C068u; UPD(0x0C7C3144u, 2);  /* 0C7C3142 mov.l @(disp,pc),Rn */
	MACL = (u32)((s32)(s16)r9 * (s32)(s16)r1);  /* 0C7C3144 muls.w Rm,Rn */
	r8 = (u32)(s32)(s16)r8;  /* 0C7C3146 exts.w Rm,Rn */
	r8 += 0xBu;  /* 0C7C3148 add #imm,Rn */
	IF(0x0C7C314Au); r1 = MACL;  /* 0C7C314A sts macl,Rn */
	r1 += r2;  /* 0C7C314C add Rm,Rn */
	r1 = R32(r1); UPD(0x0C7C3150u, 7);  /* 0C7C314E mov.l @Rm,Rn */
	T = r1 == r8;  /* 0C7C3150 cmp/eq Rm,Rn */
	if (T) { UPD(0x0C7C315Eu, 4); goto L_0C7C315E; }  /* 0C7C3152 bt */
L_0C7C3154: BLKS(0x0C7C3154u);
	r15 += 0x4u;  /* 0C7C3154 add #imm,Rn */
	IF(0x0C7C3156u); PR = R32(r15); r15 += 4; UPD(0x0C7C3158u, 2);  /* 0C7C3156 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C315Au, 1);  /* 0C7C3158 mov.l @Rm+,Rn */
	IF(0x0C7C315Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C7C315A rts */
L_0C7C315E: BLKS(0x0C7C315Eu);
	r1 = 0xC7C006Cu; UPD(0x0C7C3160u, 1);  /* 0C7C315E mov.l @(disp,pc),Rn */
	r4 = 0x8000u; UPD(0x0C7C3162u, 1);  /* 0C7C3160 mov.l @(disp,pc),Rn */
	IF(0x0C7C3162u); { u32 t_ = r1; PR = 0x0C7C3166u; W32(r15, r0); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C7C006C, 0x0C7C006Cu, 0x0C7C3166u); }  /* 0C7C3162 jsr @Rn */
L_0C7C3166: BLKS(0x0C7C3166u);
	r0 = R32(r15); UPD(0x0C7C3168u, 1);  /* 0C7C3166 mov.l @Rm,Rn */
	r15 += 0x4u;  /* 0C7C3168 add #imm,Rn */
	IF(0x0C7C316Au); PR = R32(r15); r15 += 4; UPD(0x0C7C316Cu, 2);  /* 0C7C316A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C316Eu, 1);  /* 0C7C316C mov.l @Rm+,Rn */
	IF(0x0C7C316Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C7C316E rts */
}

/* arr_item2 */
void f_0C7C3188(sh3_t *c)
{
	LOCALS;
L_0C7C3188: BLKS(0x0C7C3188u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C7C318Au, 1);  /* 0C7C3188 mov.l Rm,@-Rn */
	r8 = r4;  /* 0C7C318A mov Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C7C318Eu, 2);  /* 0C7C318C mov.l Rm,@-Rn */
	r9 = r5;  /* 0C7C318E mov Rm,Rn */
	r0 = 0xC06D4C0u; UPD(0x0C7C3192u, 2);  /* 0C7C3190 mov.l @(disp,pc),Rn */
	IF(0x0C7C3192u); r15 -= 4; W32(r15, PR); UPD(0x0C7C3194u, 1);  /* 0C7C3192 sts.l pr,@-Rn */
	IF(0x0C7C3194u); { u32 t_ = r0; PR = 0x0C7C3198u; r15 += 0xFFFFFFFCu; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C06D4C0, 0x0C06D4C0u, 0x0C7C3198u); }  /* 0C7C3194 jsr @Rn */
L_0C7C3198: BLKS(0x0C7C3198u);
	r1 = 0xC21CA15u; UPD(0x0C7C319Au, 1);  /* 0C7C3198 mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C319Cu, 1);  /* 0C7C319A mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C319C tst Rm,Rn */
	{ u32 c_ = !T; r1 = 0x54u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C7C31BEu, 4); goto L_0C7C31BE; } goto L_0C7C31A2; }  /* 0C7C319E bf/s */
L_0C7C31A2: BLKS(0x0C7C31A2u);
	r2 = 0xC38C068u; UPD(0x0C7C31A4u, 2);  /* 0C7C31A2 mov.l @(disp,pc),Rn */
	MACL = (u32)((s32)(s16)r9 * (s32)(s16)r1);  /* 0C7C31A4 muls.w Rm,Rn */
	r8 = (u32)(s32)(s16)r8;  /* 0C7C31A6 exts.w Rm,Rn */
	r8 += 0xBu;  /* 0C7C31A8 add #imm,Rn */
	IF(0x0C7C31AAu); r1 = MACL;  /* 0C7C31AA sts macl,Rn */
	r2 += r1;  /* 0C7C31AC add Rm,Rn */
	r2 = R32(r2); UPD(0x0C7C31B0u, 7);  /* 0C7C31AE mov.l @Rm,Rn */
	T = r2 == r8;  /* 0C7C31B0 cmp/eq Rm,Rn */
	if (T) { UPD(0x0C7C31DCu, 4); goto L_0C7C31DC; }  /* 0C7C31B2 bt */
L_0C7C31B4: BLKS(0x0C7C31B4u);
	r2 = 0xC38C064u; UPD(0x0C7C31B6u, 1);  /* 0C7C31B4 mov.l @(disp,pc),Rn */
	r1 += r2;  /* 0C7C31B6 add Rm,Rn */
	r1 = R32(r1); UPD(0x0C7C31BAu, 2);  /* 0C7C31B8 mov.l @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C31BA tst Rm,Rn */
	if (T) { UPD(0x0C7C31C8u, 4); goto L_0C7C31C8; }  /* 0C7C31BC bt */
L_0C7C31BE: BLKS(0x0C7C31BEu);
	r15 += 0x4u;  /* 0C7C31BE add #imm,Rn */
	IF(0x0C7C31C0u); PR = R32(r15); r15 += 4; UPD(0x0C7C31C2u, 2);  /* 0C7C31C0 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C31C4u, 1);  /* 0C7C31C2 mov.l @Rm+,Rn */
	IF(0x0C7C31C4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C7C31C4 rts */
L_0C7C31C8: BLKS(0x0C7C31C8u);
	r1 = 0xC7C006Cu; UPD(0x0C7C31CAu, 1);  /* 0C7C31C8 mov.l @(disp,pc),Rn */
	r4 = 0x40000u; UPD(0x0C7C31CCu, 1);  /* 0C7C31CA mov.l @(disp,pc),Rn */
	IF(0x0C7C31CCu); { u32 t_ = r1; PR = 0x0C7C31D0u; W32(r15, r0); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C7C006C, 0x0C7C006Cu, 0x0C7C31D0u); }  /* 0C7C31CC jsr @Rn */
L_0C7C31D0: BLKS(0x0C7C31D0u);
	r0 = R32(r15); UPD(0x0C7C31D2u, 1);  /* 0C7C31D0 mov.l @Rm,Rn */
	r15 += 0x4u;  /* 0C7C31D2 add #imm,Rn */
	IF(0x0C7C31D4u); PR = R32(r15); r15 += 4; UPD(0x0C7C31D6u, 2);  /* 0C7C31D4 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C31D8u, 1);  /* 0C7C31D6 mov.l @Rm+,Rn */
	IF(0x0C7C31D8u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C7C31D8 rts */
L_0C7C31DC: BLKS(0x0C7C31DCu);
	r1 = 0xC7C006Cu; UPD(0x0C7C31DEu, 1);  /* 0C7C31DC mov.l @(disp,pc),Rn */
	r4 = 0x10000u; UPD(0x0C7C31E0u, 1);  /* 0C7C31DE mov.l @(disp,pc),Rn */
	IF(0x0C7C31E0u); { u32 t_ = r1; PR = 0x0C7C31E4u; W32(r15, r0); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C7C006C, 0x0C7C006Cu, 0x0C7C31E4u); }  /* 0C7C31E0 jsr @Rn */
L_0C7C31E4: BLKS(0x0C7C31E4u);
	r0 = R32(r15); UPD(0x0C7C31E6u, 1);  /* 0C7C31E4 mov.l @Rm,Rn */
	r15 += 0x4u;  /* 0C7C31E6 add #imm,Rn */
	IF(0x0C7C31E8u); PR = R32(r15); r15 += 4; UPD(0x0C7C31EAu, 2);  /* 0C7C31E8 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C31ECu, 1);  /* 0C7C31EA mov.l @Rm+,Rn */
	IF(0x0C7C31ECu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C7C31EC rts */
}

/* arr_item3 */
void f_0C7C320C(sh3_t *c)
{
	LOCALS;
L_0C7C320C: BLKS(0x0C7C320Cu);
	r1 = 0x54u;  /* 0C7C320C mov #imm,Rn */
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C7C3210u, 2);  /* 0C7C320E mov.l Rm,@-Rn */
	MACL = (u32)((s32)(s16)r5 * (s32)(s16)r1);  /* 0C7C3210 muls.w Rm,Rn */
	r2 = 0xC38C06Eu; UPD(0x0C7C3214u, 3);  /* 0C7C3212 mov.l @(disp,pc),Rn */
	r0 = 0xC06BA60u; UPD(0x0C7C3216u, 1);  /* 0C7C3214 mov.l @(disp,pc),Rn */
	IF(0x0C7C3216u); r1 = MACL;  /* 0C7C3216 sts macl,Rn */
	IF(0x0C7C3218u); r15 -= 4; W32(r15, PR); UPD(0x0C7C321Au, 2);  /* 0C7C3218 sts.l pr,@-Rn */
	r1 += r2;  /* 0C7C321A add Rm,Rn */
	r8 = (u32)(s32)(s16)R16(r1); UPD(0x0C7C321Eu, 2);  /* 0C7C321C mov.w @Rm,Rn */
	IF(0x0C7C321Eu); { u32 t_ = r0; PR = 0x0C7C3222u; r15 += 0xFFFFFFFCu; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C06BA60, 0x0C06BA60u, 0x0C7C3222u); }  /* 0C7C321E jsr @Rn */
L_0C7C3222: BLKS(0x0C7C3222u);
	r1 = 0xC21CA15u; UPD(0x0C7C3224u, 1);  /* 0C7C3222 mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C3226u, 1);  /* 0C7C3224 mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C3226 tst Rm,Rn */
	{ u32 c_ = T; r4 = r8; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C7C3234u, 4); goto L_0C7C3234; } goto L_0C7C322C; }  /* 0C7C3228 bt/s */
L_0C7C322C: BLKS(0x0C7C322Cu);
	r15 += 0x4u;  /* 0C7C322C add #imm,Rn */
	IF(0x0C7C322Eu); PR = R32(r15); r15 += 4; UPD(0x0C7C3230u, 3);  /* 0C7C322E lds.l @Rn+,pr */
	IF(0x0C7C3230u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C7C3230 rts */
L_0C7C3234: BLKS(0x0C7C3234u);
	r1 = 0xC7C006Cu; UPD(0x0C7C3236u, 1);  /* 0C7C3234 mov.l @(disp,pc),Rn */
	IF(0x0C7C3236u); r4 <<= 16;  /* 0C7C3236 shll16 Rn */
	W32(r15, r0); UPD(0x0C7C323Au, 2);  /* 0C7C3238 mov.l Rm,@Rn */
	IF(0x0C7C323Au); { u32 t_ = r1; PR = 0x0C7C323Eu; r4 += r4; /* slot add Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C7C006C, 0x0C7C006Cu, 0x0C7C323Eu); }  /* 0C7C323A jsr @Rn */
L_0C7C323E: BLKS(0x0C7C323Eu);
	r0 = R32(r15); UPD(0x0C7C3240u, 1);  /* 0C7C323E mov.l @Rm,Rn */
	r15 += 0x4u;  /* 0C7C3240 add #imm,Rn */
	IF(0x0C7C3242u); PR = R32(r15); r15 += 4; UPD(0x0C7C3244u, 2);  /* 0C7C3242 lds.l @Rn+,pr */
	IF(0x0C7C3244u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C7C3244 rts */
}

/* arr_item4 */
void f_0C7C3258(sh3_t *c)
{
	LOCALS;
L_0C7C3258: BLKS(0x0C7C3258u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C7C325Au, 1);  /* 0C7C3258 mov.l Rm,@-Rn */
	r8 = r4;  /* 0C7C325A mov Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C7C325Eu, 2);  /* 0C7C325C mov.l Rm,@-Rn */
	r9 = r5;  /* 0C7C325E mov Rm,Rn */
	r0 = 0xC06D1A0u; UPD(0x0C7C3262u, 2);  /* 0C7C3260 mov.l @(disp,pc),Rn */
	IF(0x0C7C3262u); r15 -= 4; W32(r15, PR); UPD(0x0C7C3264u, 1);  /* 0C7C3262 sts.l pr,@-Rn */
	IF(0x0C7C3264u); { u32 t_ = r0; PR = 0x0C7C3268u; r15 += 0xFFFFFFFCu; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C06D1A0, 0x0C06D1A0u, 0x0C7C3268u); }  /* 0C7C3264 jsr @Rn */
L_0C7C3268: BLKS(0x0C7C3268u);
	r1 = 0xC21CA15u; UPD(0x0C7C326Au, 1);  /* 0C7C3268 mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C326Cu, 1);  /* 0C7C326A mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C326C tst Rm,Rn */
	{ u32 c_ = !T; r1 = 0x54u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C7C3284u, 4); goto L_0C7C3284; } goto L_0C7C3272; }  /* 0C7C326E bf/s */
L_0C7C3272: BLKS(0x0C7C3272u);
	r2 = 0xC38C068u; UPD(0x0C7C3274u, 2);  /* 0C7C3272 mov.l @(disp,pc),Rn */
	MACL = (u32)((s32)(s16)r9 * (s32)(s16)r1);  /* 0C7C3274 muls.w Rm,Rn */
	r8 = (u32)(s32)(s16)r8;  /* 0C7C3276 exts.w Rm,Rn */
	r8 += 0xBu;  /* 0C7C3278 add #imm,Rn */
	IF(0x0C7C327Au); r1 = MACL;  /* 0C7C327A sts macl,Rn */
	r1 += r2;  /* 0C7C327C add Rm,Rn */
	r1 = R32(r1); UPD(0x0C7C3280u, 7);  /* 0C7C327E mov.l @Rm,Rn */
	T = r1 == r8;  /* 0C7C3280 cmp/eq Rm,Rn */
	if (T) { UPD(0x0C7C328Eu, 4); goto L_0C7C328E; }  /* 0C7C3282 bt */
L_0C7C3284: BLKS(0x0C7C3284u);
	r15 += 0x4u;  /* 0C7C3284 add #imm,Rn */
	IF(0x0C7C3286u); PR = R32(r15); r15 += 4; UPD(0x0C7C3288u, 2);  /* 0C7C3286 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C328Au, 1);  /* 0C7C3288 mov.l @Rm+,Rn */
	IF(0x0C7C328Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C7C328A rts */
L_0C7C328E: BLKS(0x0C7C328Eu);
	r1 = 0xC7C006Cu; UPD(0x0C7C3290u, 1);  /* 0C7C328E mov.l @(disp,pc),Rn */
	r4 = 0x80000u; UPD(0x0C7C3292u, 1);  /* 0C7C3290 mov.l @(disp,pc),Rn */
	IF(0x0C7C3292u); { u32 t_ = r1; PR = 0x0C7C3296u; W32(r15, r0); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C7C006C, 0x0C7C006Cu, 0x0C7C3296u); }  /* 0C7C3292 jsr @Rn */
L_0C7C3296: BLKS(0x0C7C3296u);
	r0 = R32(r15); UPD(0x0C7C3298u, 1);  /* 0C7C3296 mov.l @Rm,Rn */
	r15 += 0x4u;  /* 0C7C3298 add #imm,Rn */
	IF(0x0C7C329Au); PR = R32(r15); r15 += 4; UPD(0x0C7C329Cu, 2);  /* 0C7C329A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C329Eu, 1);  /* 0C7C329C mov.l @Rm+,Rn */
	IF(0x0C7C329Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C7C329E rts */
}

/* arr_item5 */
void f_0C7C32B8(sh3_t *c)
{
	LOCALS;
L_0C7C32B8: BLKS(0x0C7C32B8u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C7C32BAu, 1);  /* 0C7C32B8 mov.l Rm,@-Rn */
	r8 = r4;  /* 0C7C32BA mov Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C7C32BEu, 2);  /* 0C7C32BC mov.l Rm,@-Rn */
	r9 = r5;  /* 0C7C32BE mov Rm,Rn */
	r0 = 0xC06D3C0u; UPD(0x0C7C32C2u, 2);  /* 0C7C32C0 mov.l @(disp,pc),Rn */
	IF(0x0C7C32C2u); r15 -= 4; W32(r15, PR); UPD(0x0C7C32C4u, 1);  /* 0C7C32C2 sts.l pr,@-Rn */
	IF(0x0C7C32C4u); { u32 t_ = r0; PR = 0x0C7C32C8u; r15 += 0xFFFFFFFCu; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C06D3C0, 0x0C06D3C0u, 0x0C7C32C8u); }  /* 0C7C32C4 jsr @Rn */
L_0C7C32C8: BLKS(0x0C7C32C8u);
	r1 = 0xC21CA15u; UPD(0x0C7C32CAu, 1);  /* 0C7C32C8 mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C32CCu, 1);  /* 0C7C32CA mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C32CC tst Rm,Rn */
	{ u32 c_ = !T; r1 = 0x54u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C7C32EEu, 4); goto L_0C7C32EE; } goto L_0C7C32D2; }  /* 0C7C32CE bf/s */
L_0C7C32D2: BLKS(0x0C7C32D2u);
	r2 = 0xC38C068u; UPD(0x0C7C32D4u, 2);  /* 0C7C32D2 mov.l @(disp,pc),Rn */
	MACL = (u32)((s32)(s16)r9 * (s32)(s16)r1);  /* 0C7C32D4 muls.w Rm,Rn */
	r8 = (u32)(s32)(s16)r8;  /* 0C7C32D6 exts.w Rm,Rn */
	r8 += 0xBu;  /* 0C7C32D8 add #imm,Rn */
	IF(0x0C7C32DAu); r1 = MACL;  /* 0C7C32DA sts macl,Rn */
	r1 += r2;  /* 0C7C32DC add Rm,Rn */
	r1 = R32(r1); UPD(0x0C7C32E0u, 7);  /* 0C7C32DE mov.l @Rm,Rn */
	T = r1 == r8;  /* 0C7C32E0 cmp/eq Rm,Rn */
	if (T) { UPD(0x0C7C32F8u, 4); goto L_0C7C32F8; }  /* 0C7C32E2 bt */
L_0C7C32E4: BLKS(0x0C7C32E4u);
	r4 = 0x400000u; UPD(0x0C7C32E6u, 1);  /* 0C7C32E4 mov.l @(disp,pc),Rn */
L_0C7C32E6: BLKS(0x0C7C32E6u);
	r1 = 0xC7C006Cu; UPD(0x0C7C32E8u, 1);  /* 0C7C32E6 mov.l @(disp,pc),Rn */
	IF(0x0C7C32E8u); { u32 t_ = r1; PR = 0x0C7C32ECu; W32(r15, r0); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C7C006C, 0x0C7C006Cu, 0x0C7C32ECu); }  /* 0C7C32E8 jsr @Rn */
L_0C7C32EC: BLKS(0x0C7C32ECu);
	r0 = R32(r15); UPD(0x0C7C32EEu, 1);  /* 0C7C32EC mov.l @Rm,Rn */
L_0C7C32EE: BLKS(0x0C7C32EEu);
	r15 += 0x4u;  /* 0C7C32EE add #imm,Rn */
	IF(0x0C7C32F0u); PR = R32(r15); r15 += 4; UPD(0x0C7C32F2u, 2);  /* 0C7C32F0 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C32F4u, 1);  /* 0C7C32F2 mov.l @Rm+,Rn */
	IF(0x0C7C32F4u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C7C32F4 rts */
L_0C7C32F8: BLKS(0x0C7C32F8u);
	r4 = 0x100000u; UPD(0x0C7C32FAu, 1);  /* 0C7C32F8 mov.l @(disp,pc),Rn */
	{ IF(0x0C7C32FCu); ; /* slot nop */ UPD(0x0C7C32E6u, 3); goto L_0C7C32E6; }  /* 0C7C32FA bra */
}

/* arr_item6 */
void f_0C7C3318(sh3_t *c)
{
	LOCALS;
L_0C7C3318: BLKS(0x0C7C3318u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C7C331Au, 1);  /* 0C7C3318 mov.l Rm,@-Rn */
	r8 = r4;  /* 0C7C331A mov Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C7C331Eu, 2);  /* 0C7C331C mov.l Rm,@-Rn */
	r9 = r5;  /* 0C7C331E mov Rm,Rn */
	r0 = 0xC06D290u; UPD(0x0C7C3322u, 2);  /* 0C7C3320 mov.l @(disp,pc),Rn */
	IF(0x0C7C3322u); r15 -= 4; W32(r15, PR); UPD(0x0C7C3324u, 1);  /* 0C7C3322 sts.l pr,@-Rn */
	IF(0x0C7C3324u); { u32 t_ = r0; PR = 0x0C7C3328u; r15 += 0xFFFFFFFCu; /* slot add #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C06D290, 0x0C06D290u, 0x0C7C3328u); }  /* 0C7C3324 jsr @Rn */
L_0C7C3328: BLKS(0x0C7C3328u);
	r1 = 0xC21CA15u; UPD(0x0C7C332Au, 1);  /* 0C7C3328 mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C332Cu, 1);  /* 0C7C332A mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C332C tst Rm,Rn */
	{ u32 c_ = !T; r1 = 0x54u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C7C3344u, 4); goto L_0C7C3344; } goto L_0C7C3332; }  /* 0C7C332E bf/s */
L_0C7C3332: BLKS(0x0C7C3332u);
	r2 = 0xC38C068u; UPD(0x0C7C3334u, 2);  /* 0C7C3332 mov.l @(disp,pc),Rn */
	MACL = (u32)((s32)(s16)r9 * (s32)(s16)r1);  /* 0C7C3334 muls.w Rm,Rn */
	r8 = (u32)(s32)(s16)r8;  /* 0C7C3336 exts.w Rm,Rn */
	r8 += 0xBu;  /* 0C7C3338 add #imm,Rn */
	IF(0x0C7C333Au); r1 = MACL;  /* 0C7C333A sts macl,Rn */
	r1 += r2;  /* 0C7C333C add Rm,Rn */
	r1 = R32(r1); UPD(0x0C7C3340u, 7);  /* 0C7C333E mov.l @Rm,Rn */
	T = r1 == r8;  /* 0C7C3340 cmp/eq Rm,Rn */
	if (T) { UPD(0x0C7C334Eu, 4); goto L_0C7C334E; }  /* 0C7C3342 bt */
L_0C7C3344: BLKS(0x0C7C3344u);
	r15 += 0x4u;  /* 0C7C3344 add #imm,Rn */
	IF(0x0C7C3346u); PR = R32(r15); r15 += 4; UPD(0x0C7C3348u, 2);  /* 0C7C3346 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C334Au, 1);  /* 0C7C3348 mov.l @Rm+,Rn */
	IF(0x0C7C334Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C7C334A rts */
L_0C7C334E: BLKS(0x0C7C334Eu);
	r1 = 0xC7C006Cu; UPD(0x0C7C3350u, 1);  /* 0C7C334E mov.l @(disp,pc),Rn */
	r4 = 0x400000u; UPD(0x0C7C3352u, 1);  /* 0C7C3350 mov.l @(disp,pc),Rn */
	IF(0x0C7C3352u); { u32 t_ = r1; PR = 0x0C7C3356u; W32(r15, r0); /* slot mov.l Rm,@Rn */ UPD(t_, 2); CALLP(t_, f_0C7C006C, 0x0C7C006Cu, 0x0C7C3356u); }  /* 0C7C3352 jsr @Rn */
L_0C7C3356: BLKS(0x0C7C3356u);
	r0 = R32(r15); UPD(0x0C7C3358u, 1);  /* 0C7C3356 mov.l @Rm,Rn */
	r15 += 0x4u;  /* 0C7C3358 add #imm,Rn */
	IF(0x0C7C335Au); PR = R32(r15); r15 += 4; UPD(0x0C7C335Cu, 2);  /* 0C7C335A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C335Eu, 1);  /* 0C7C335C mov.l @Rm+,Rn */
	IF(0x0C7C335Eu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C7C335E rts */
}

/* arr_item1 */
void f_0C7C3378(sh3_t *c)
{
	LOCALS;
L_0C7C3378: BLKS(0x0C7C3378u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C7C337Au, 1);  /* 0C7C3378 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C7C337Cu, 1);  /* 0C7C337A mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C7C337Eu, 1);  /* 0C7C337C mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C7C3380u, 1);  /* 0C7C337E mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C7C3382u, 1);  /* 0C7C3380 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C7C3384u, 1);  /* 0C7C3382 mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C7C3386u, 1);  /* 0C7C3384 mov.l Rm,@-Rn */
	IF(0x0C7C3386u); r15 -= 4; W32(r15, PR); UPD(0x0C7C3388u, 1);  /* 0C7C3386 sts.l pr,@-Rn */
	r1 = 0xC21CA15u; UPD(0x0C7C338Au, 1);  /* 0C7C3388 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFE0u;  /* 0C7C338A add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C338Eu, 2);  /* 0C7C338C mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C338E tst Rm,Rn */
	if (T) { UPD(0x0C7C3396u, 4); goto L_0C7C3396; }  /* 0C7C3390 bt */
L_0C7C3392: BLKS(0x0C7C3392u);
	{ IF(0x0C7C3394u); ; /* slot nop */ UPD(0x0C7C349Cu, 3); goto L_0C7C349C; }  /* 0C7C3392 bra */
L_0C7C3396: BLKS(0x0C7C3396u);
	r1 = 0x280u; UPD(0x0C7C3398u, 1);  /* 0C7C3396 mov.w @(disp,pc),Rn */
	r8 = (u32)(s32)(s16)r4;  /* 0C7C3398 exts.w Rm,Rn */
	r4 = (u32)(s32)(s16)r5;  /* 0C7C339A exts.w Rm,Rn */
	r11 = 0xC38C06Cu; UPD(0x0C7C339Eu, 3);  /* 0C7C339C mov.l @(disp,pc),Rn */
	MACL = (u32)((s32)(s16)r8 * (s32)(s16)r1);  /* 0C7C339E muls.w Rm,Rn */
	r1 = 0x54u;  /* 0C7C33A0 mov #imm,Rn */
	r0 = 0x305DE33u; UPD(0x0C7C33A4u, 4);  /* 0C7C33A2 mov.l @(disp,pc),Rn */
	r5 = 0xC2839FEu; UPD(0x0C7C33A6u, 1);  /* 0C7C33A4 mov.l @(disp,pc),Rn */
	IF(0x0C7C33A6u); r10 = MACL;  /* 0C7C33A6 sts macl,Rn */
	MACL = (u32)((s32)(s16)r4 * (s32)(s16)r1);  /* 0C7C33A8 muls.w Rm,Rn */
	r5 += r10;  /* 0C7C33AA add Rm,Rn */
	IF(0x0C7C33ACu); r9 = MACL;  /* 0C7C33AC sts macl,Rn */
	r11 += r9;  /* 0C7C33AE add Rm,Rn */
	r7 = R32(r11); UPD(0x0C7C33B2u, 7);  /* 0C7C33B0 mov.l @Rm,Rn */
	r0 += r7;  /* 0C7C33B2 add Rm,Rn */
	r2 = r0;  /* 0C7C33B4 mov Rm,Rn */
	IF(0x0C7C33B6u); r2 <<= 2;  /* 0C7C33B6 shll2 Rn */
	r1 = (u32)(s32)(s16)R16(r2); UPD(0x0C7C33BAu, 4);  /* 0C7C33B8 mov.w @Rm,Rn */
	r0 = r1;  /* 0C7C33BA mov Rm,Rn */
	W16(r15 + 0x1Eu, r0); UPD(0x0C7C33BEu, 2);  /* 0C7C33BC mov.w r0,@(disp,Rn) */
	r0 = (u32)(s32)(s8)R8(r2 + 0x3u); UPD(0x0C7C33C0u, 1);  /* 0C7C33BE mov.b @(disp,Rm),r0 */
	r1 = (u32)(s32)(s8)R8(r5); UPD(0x0C7C33C2u, 1);  /* 0C7C33C0 mov.b @Rm,Rn */
	r0 = r0 & 0xFF;  /* 0C7C33C2 extu.b Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C33C4 tst Rm,Rn */
	{ u32 c_ = !T; W32(r15 + 0x18u, r0); /* slot mov.l Rm,@(disp,Rn) */ if (c_) { UPD(0x0C7C3454u, 5); goto L_0C7C3454; } UPD(0x0C7C33CAu, 1); goto L_0C7C33CA; }  /* 0C7C33C6 bf/s */
L_0C7C33CA: BLKS(0x0C7C33CAu);
	r1 = 0xC2837A8u; UPD(0x0C7C33CCu, 1);  /* 0C7C33CA mov.l @(disp,pc),Rn */
	r3 = r7;  /* 0C7C33CC mov Rm,Rn */
	r14 = 0xC2837A4u; UPD(0x0C7C33D0u, 2);  /* 0C7C33CE mov.l @(disp,pc),Rn */
	r3 += r3;  /* 0C7C33D0 add Rm,Rn */
	r1 += r10;  /* 0C7C33D2 add Rm,Rn */
	r0 = 0xC2839F9u; UPD(0x0C7C33D6u, 3);  /* 0C7C33D4 mov.l @(disp,pc),Rn */
	W32(r15 + 0xCu, r1); UPD(0x0C7C33D8u, 1);  /* 0C7C33D6 mov.l Rm,@(disp,Rn) */
	r14 += r10;  /* 0C7C33D8 add Rm,Rn */
	r1 = 0x90u; UPD(0x0C7C33DCu, 2);  /* 0C7C33DA mov.w @(disp,pc),Rn */
	r0 += r10;  /* 0C7C33DC add Rm,Rn */
	r3 += r8;  /* 0C7C33DE add Rm,Rn */
	W32(r15 + 0x8u, r14); UPD(0x0C7C33E2u, 3);  /* 0C7C33E0 mov.l Rm,@(disp,Rn) */
	MACL = (u32)((s32)(s16)r8 * (s32)(s16)r1);  /* 0C7C33E2 muls.w Rm,Rn */
	r14 = 0xC27DC84u; UPD(0x0C7C33E6u, 3);  /* 0C7C33E4 mov.l @(disp,pc),Rn */
	r2 = r3 & 0xFF;  /* 0C7C33E6 extu.b Rm,Rn */
	r13 = 0xC0000000u; UPD(0x0C7C33EAu, 2);  /* 0C7C33E8 mov.l @(disp,pc),Rn */
	r6 = 0x0u;  /* 0C7C33EA mov #imm,Rn */
	IF(0x0C7C33ECu); r1 = MACL;  /* 0C7C33EC sts macl,Rn */
	W32(r15 + 0x10u, r0); UPD(0x0C7C33F0u, 3);  /* 0C7C33EE mov.l Rm,@(disp,Rn) */
	r0 = 0x0u;  /* 0C7C33F0 mov #imm,Rn */
	W32(r15 + 0x14u, r2); UPD(0x0C7C33F4u, 2);  /* 0C7C33F2 mov.l Rm,@(disp,Rn) */
	r12 = 0x40u;  /* 0C7C33F4 mov #imm,Rn */
	r1 += r14;  /* 0C7C33F6 add Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C7C33FAu, 3);  /* 0C7C33F8 mov.l Rm,@(disp,Rn) */
	r2 = 0x0u;  /* 0C7C33FA mov #imm,Rn */
	W32(r15, r0); UPD(0x0C7C33FEu, 2);  /* 0C7C33FC mov.l Rm,@Rn */
L_0C7C33FE: BLKS(0x0C7C33FEu);
	W32(r1, r13); UPD(0x0C7C3400u, 1);  /* 0C7C33FE mov.l Rm,@Rn */
	W32(r1 + 0x10u, r3); UPD(0x0C7C3402u, 1);  /* 0C7C3400 mov.l Rm,@(disp,Rn) */
	W32(r1 + 0x4u, r3); UPD(0x0C7C3404u, 1);  /* 0C7C3402 mov.l Rm,@(disp,Rn) */
	W32(r1 + 0xCu, r2); UPD(0x0C7C3406u, 1);  /* 0C7C3404 mov.l Rm,@(disp,Rn) */
	r7 = R32(r15 + 0x8u); UPD(0x0C7C3408u, 1);  /* 0C7C3406 mov.l @(disp,Rm),Rn */
	W32(r1 + 0x8u, r2); UPD(0x0C7C340Au, 1);  /* 0C7C3408 mov.l Rm,@(disp,Rn) */
	r14 = R32(r7); UPD(0x0C7C340Cu, 1);  /* 0C7C340A mov.l @Rm,Rn */
	r7 = R32(r15 + 0xCu); UPD(0x0C7C340Eu, 1);  /* 0C7C340C mov.l @(disp,Rm),Rn */
	W32(r1 + 0x14u, r14); UPD(0x0C7C3410u, 1);  /* 0C7C340E mov.l Rm,@(disp,Rn) */
	r14 = R32(r7); UPD(0x0C7C3412u, 1);  /* 0C7C3410 mov.l @Rm,Rn */
	r0 = R32(r15 + 0x10u); UPD(0x0C7C3414u, 1);  /* 0C7C3412 mov.l @(disp,Rm),Rn */
	W32(r1 + 0x18u, r14); UPD(0x0C7C3416u, 1);  /* 0C7C3414 mov.l Rm,@(disp,Rn) */
	W32(r1 + 0x20u, r2); UPD(0x0C7C3418u, 1);  /* 0C7C3416 mov.l Rm,@(disp,Rn) */
	r14 = r1;  /* 0C7C3418 mov Rm,Rn */
	W32(r1 + 0x1Cu, r2); UPD(0x0C7C341Cu, 2);  /* 0C7C341A mov.l Rm,@(disp,Rn) */
	r14 += 0x2Bu;  /* 0C7C341C add #imm,Rn */
	W8(r14, r2); UPD(0x0C7C3420u, 2);  /* 0C7C341E mov.b Rm,@Rn */
	r14 += 0xFFFFFFFFu;  /* 0C7C3420 add #imm,Rn */
	W8(r14, r2); UPD(0x0C7C3424u, 2);  /* 0C7C3422 mov.b Rm,@Rn */
	r14 += 0xFFFFFFFCu;  /* 0C7C3424 add #imm,Rn */
	W16(r14, r2); UPD(0x0C7C3428u, 2);  /* 0C7C3426 mov.w Rm,@Rn */
	r14 += 0xFFFFFFFEu;  /* 0C7C3428 add #imm,Rn */
	W16(r14, r2); UPD(0x0C7C342Cu, 2);  /* 0C7C342A mov.w Rm,@Rn */
	r14 += 0xBu;  /* 0C7C342C add #imm,Rn */
	W8(r14, r6); UPD(0x0C7C3430u, 2);  /* 0C7C342E mov.b Rm,@Rn */
	r14 += 0xFFFFFFFFu;  /* 0C7C3430 add #imm,Rn */
	W8(r14, r12); UPD(0x0C7C3434u, 2);  /* 0C7C3432 mov.b Rm,@Rn */
	r14 += 0xFFFFFFFFu;  /* 0C7C3434 add #imm,Rn */
	r7 = R32(r15); UPD(0x0C7C3438u, 2);  /* 0C7C3436 mov.l @Rm,Rn */
	r1 += 0x30u;  /* 0C7C3438 add #imm,Rn */
	W8(r14, r6); UPD(0x0C7C343Cu, 2);  /* 0C7C343A mov.b Rm,@Rn */
	r14 = R32(r15 + 0x14u); UPD(0x0C7C343Eu, 1);  /* 0C7C343C mov.l @(disp,Rm),Rn */
	IF(0x0C7C343Eu); W8(r0 + r7, r14); UPD(0x0C7C3440u, 1);  /* 0C7C343E mov.b Rm,@(r0,Rn) */
	r7 += 0x1u;  /* 0C7C3440 add #imm,Rn */
	r0 = r7;  /* 0C7C3442 mov Rm,Rn */
	T = r0 == 0x3u;  /* 0C7C3444 cmp/eq #imm,r0 */
	{ u32 c_ = !T; W32(r15, r7); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C7C33FEu, 6); goto L_0C7C33FE; } UPD(0x0C7C344Au, 1); goto L_0C7C344A; }  /* 0C7C3446 bf/s */
L_0C7C344A: BLKS(0x0C7C344Au);
	r7 = R32(r15 + 0x4u); UPD(0x0C7C344Cu, 1);  /* 0C7C344A mov.l @(disp,Rm),Rn */
	r1 = 0xC7C4238u; UPD(0x0C7C344Eu, 1);  /* 0C7C344C mov.l @(disp,pc),Rn */
	W8(r5, r0); UPD(0x0C7C3450u, 1);  /* 0C7C344E mov.b Rm,@Rn */
	r0 = r8;  /* 0C7C3450 mov Rm,Rn */
	IF(0x0C7C3452u); W8(r0 + r1, r7); UPD(0x0C7C3454u, 2);  /* 0C7C3452 mov.b Rm,@(r0,Rn) */
L_0C7C3454: BLKS(0x0C7C3454u);
	r1 = 0x6u;  /* 0C7C3454 mov #imm,Rn */
	T = r7 > r1;  /* 0C7C3456 cmp/hi Rm,Rn */
	{ u32 c_ = T; r1 = r8; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C7C3472u, 5); goto L_0C7C3472; } goto L_0C7C345C; }  /* 0C7C3458 bt/s */
L_0C7C345C: BLKS(0x0C7C345Cu);
	IF(0x0C7C345Cu); r1 <<= 2;  /* 0C7C345C shll2 Rn */
	r2 = 0xC7C492Eu; UPD(0x0C7C3460u, 3);  /* 0C7C345E mov.l @(disp,pc),Rn */
	r1 += r1;  /* 0C7C3460 add Rm,Rn */
	r1 -= r8;  /* 0C7C3462 sub Rm,Rn */
	r1 += r2;  /* 0C7C3464 add Rm,Rn */
	r1 += r7;  /* 0C7C3466 add Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C346Au, 5);  /* 0C7C3468 mov.b @Rm,Rn */
	r2 = r2 & 0xFF;  /* 0C7C346A extu.b Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C7C346C tst Rm,Rn */
	{ u32 c_ = T; r3 = 0x1u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C7C34B2u, 5); goto L_0C7C34B2; } UPD(0x0C7C3472u, 1); goto L_0C7C3472; }  /* 0C7C346E bt/s */
L_0C7C3472: BLKS(0x0C7C3472u);
	r0 = 0xC7C3098u; UPD(0x0C7C3474u, 1);  /* 0C7C3472 mov.l @(disp,pc),Rn */
	r5 = r4;  /* 0C7C3474 mov Rm,Rn */
	r7 = 0x0u;  /* 0C7C3476 mov #imm,Rn */
	r4 = r8;  /* 0C7C3478 mov Rm,Rn */
	IF(0x0C7C347Au); { u32 t_ = r0; PR = 0x0C7C347Eu; r6 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 5); CALLP(t_, f_0C7C3098, 0x0C7C3098u, 0x0C7C347Eu); }  /* 0C7C347A jsr @Rn */
L_0C7C347E: BLKS(0x0C7C347Eu);
	r1 = 0xC7C006Cu; UPD(0x0C7C3480u, 1);  /* 0C7C347E mov.l @(disp,pc),Rn */
	r4 = 0x80000u; UPD(0x0C7C3482u, 1);  /* 0C7C3480 mov.l @(disp,pc),Rn */
	IF(0x0C7C3482u); { u32 t_ = r1; PR = 0x0C7C3486u; IF(0x0C7C3484u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C7C006C, 0x0C7C006Cu, 0x0C7C3486u); }  /* 0C7C3482 jsr @Rn */
L_0C7C3486: BLKS(0x0C7C3486u);
	r0 = 0x0u;  /* 0C7C3486 mov #imm,Rn */
	r15 += 0x20u;  /* 0C7C3488 add #imm,Rn */
	IF(0x0C7C348Au); PR = R32(r15); r15 += 4; UPD(0x0C7C348Cu, 3);  /* 0C7C348A lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C7C348Eu, 1);  /* 0C7C348C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C7C3490u, 1);  /* 0C7C348E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C7C3492u, 1);  /* 0C7C3490 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C7C3494u, 1);  /* 0C7C3492 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C7C3496u, 1);  /* 0C7C3494 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C3498u, 1);  /* 0C7C3496 mov.l @Rm+,Rn */
	IF(0x0C7C3498u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C7C3498 rts */
L_0C7C349C: BLKS(0x0C7C349Cu);
	r0 = 0xC06BB60u; UPD(0x0C7C349Eu, 1);  /* 0C7C349C mov.l @(disp,pc),Rn */
	r15 += 0x20u;  /* 0C7C349E add #imm,Rn */
	IF(0x0C7C34A0u); PR = R32(r15); r15 += 4; UPD(0x0C7C34A2u, 2);  /* 0C7C34A0 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C7C34A4u, 1);  /* 0C7C34A2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C7C34A6u, 1);  /* 0C7C34A4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C7C34A8u, 1);  /* 0C7C34A6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C7C34AAu, 1);  /* 0C7C34A8 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C7C34ACu, 1);  /* 0C7C34AA mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C34AEu, 1);  /* 0C7C34AC mov.l @Rm+,Rn */
	IF(0x0C7C34AEu); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C7C34AE jmp @Rn */
L_0C7C34B2: BLKS(0x0C7C34B2u);
	r0 = r8;  /* 0C7C34B2 mov Rm,Rn */
	W8(r1, r3); UPD(0x0C7C34B6u, 2);  /* 0C7C34B4 mov.b Rm,@Rn */
	r6 = 0x0u;  /* 0C7C34B6 mov #imm,Rn */
	r3 = 0xC7C492Cu; UPD(0x0C7C34BAu, 2);  /* 0C7C34B8 mov.l @(disp,pc),Rn */
	r5 = 0x0u;  /* 0C7C34BA mov #imm,Rn */
	r7 = 0xEFFFFFFBu; UPD(0x0C7C34BEu, 2);  /* 0C7C34BC mov.l @(disp,pc),Rn */
	IF(0x0C7C34BEu); r1 = (u32)(s32)(s8)R8(r0 + r3); UPD(0x0C7C34C0u, 1);  /* 0C7C34BE mov.b @(r0,Rm),Rn */
	r14 = 0x180000u; UPD(0x0C7C34C2u, 1);  /* 0C7C34C0 mov.l @(disp,pc),Rn */
	r1 += 0x1u;  /* 0C7C34C2 add #imm,Rn */
	IF(0x0C7C34C4u); W8(r0 + r3, r1); UPD(0x0C7C34C6u, 2);  /* 0C7C34C4 mov.b Rm,@(r0,Rn) */
	r3 = 0xC38C064u; UPD(0x0C7C34C8u, 1);  /* 0C7C34C6 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s16)R16(r15 + 0x1Eu); UPD(0x0C7C34CAu, 1);  /* 0C7C34C8 mov.w @(disp,Rm),r0 */
	r3 += r9;  /* 0C7C34CA add Rm,Rn */
	r1 = R32(r3); UPD(0x0C7C34CEu, 2);  /* 0C7C34CC mov.l @Rm,Rn */
	r1 &= r7;  /* 0C7C34CE and Rm,Rn */
	W32(r3, r1); UPD(0x0C7C34D2u, 2);  /* 0C7C34D0 mov.l Rm,@Rn */
	r3 = 0x8u;  /* 0C7C34D2 mov #imm,Rn */
	r1 = 0xC38C068u; UPD(0x0C7C34D6u, 2);  /* 0C7C34D4 mov.l @(disp,pc),Rn */
	r7 = 0x0u;  /* 0C7C34D6 mov #imm,Rn */
	r1 += r9;  /* 0C7C34D8 add Rm,Rn */
	W32(r1, r3); UPD(0x0C7C34DCu, 3);  /* 0C7C34DA mov.l Rm,@Rn */
	r1 = (u32)(s32)(s16)r0;  /* 0C7C34DC exts.w Rm,Rn */
	W32(r11, r1); UPD(0x0C7C34E0u, 2);  /* 0C7C34DE mov.l Rm,@Rn */
	r0 = 0xC06ACA0u; UPD(0x0C7C34E2u, 1);  /* 0C7C34E0 mov.l @(disp,pc),Rn */
	r1 = 0xC38C070u; UPD(0x0C7C34E4u, 1);  /* 0C7C34E2 mov.l @(disp,pc),Rn */
	r1 += r9;  /* 0C7C34E4 add Rm,Rn */
	W32(r1, r2); UPD(0x0C7C34E8u, 2);  /* 0C7C34E6 mov.l Rm,@Rn */
	IF(0x0C7C34E8u); { u32 t_ = r0; PR = 0x0C7C34ECu; IF(0x0C7C34EAu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C06ACA0, 0x0C06ACA0u, 0x0C7C34ECu); }  /* 0C7C34E8 jsr @Rn */
L_0C7C34EC: BLKS(0x0C7C34ECu);
	r1 = 0xC38C0B3u; UPD(0x0C7C34EEu, 1);  /* 0C7C34EC mov.l @(disp,pc),Rn */
	r2 = 0x3Cu;  /* 0C7C34EE mov #imm,Rn */
	r0 = 0xC2837A8u; UPD(0x0C7C34F2u, 2);  /* 0C7C34F0 mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C7C34F2 mov Rm,Rn */
	r1 += r9;  /* 0C7C34F4 add Rm,Rn */
	r3 = 0x100000u; UPD(0x0C7C34F8u, 3);  /* 0C7C34F6 mov.l @(disp,pc),Rn */
	W8(r1, r2); UPD(0x0C7C34FAu, 1);  /* 0C7C34F8 mov.b Rm,@Rn */
	r2 = 0x14u;  /* 0C7C34FA mov #imm,Rn */
	r1 = 0xC38C0A8u; UPD(0x0C7C34FEu, 2);  /* 0C7C34FC mov.l @(disp,pc),Rn */
	r7 = 0x0u;  /* 0C7C34FE mov #imm,Rn */
	r6 = 0x0u;  /* 0C7C3500 mov #imm,Rn */
	r1 += r9;  /* 0C7C3502 add Rm,Rn */
	W8(r1, r2); UPD(0x0C7C3506u, 4);  /* 0C7C3504 mov.b Rm,@Rn */
	r5 = 0x0u;  /* 0C7C3506 mov #imm,Rn */
	r1 = 0xC38C09Cu; UPD(0x0C7C350Au, 2);  /* 0C7C3508 mov.l @(disp,pc),Rn */
	r2 = 0x4FFFFu; UPD(0x0C7C350Cu, 1);  /* 0C7C350A mov.l @(disp,pc),Rn */
	r1 += r9;  /* 0C7C350C add Rm,Rn */
	W32(r1, r2); UPD(0x0C7C3510u, 2);  /* 0C7C350E mov.l Rm,@Rn */
	r1 = 0xC38C0A0u; UPD(0x0C7C3512u, 1);  /* 0C7C3510 mov.l @(disp,pc),Rn */
	r2 = 0x808080u; UPD(0x0C7C3514u, 1);  /* 0C7C3512 mov.l @(disp,pc),Rn */
	r1 += r9;  /* 0C7C3514 add Rm,Rn */
	W32(r1, r2); UPD(0x0C7C3518u, 2);  /* 0C7C3516 mov.l Rm,@Rn */
	r1 = 0xC2837A4u; UPD(0x0C7C351Au, 1);  /* 0C7C3518 mov.l @(disp,pc),Rn */
	r2 = 0xC38C08Cu; UPD(0x0C7C351Cu, 1);  /* 0C7C351A mov.l @(disp,pc),Rn */
	r1 += r10;  /* 0C7C351C add Rm,Rn */
	r1 = R32(r1); UPD(0x0C7C3520u, 2);  /* 0C7C351E mov.l @Rm,Rn */
	r2 += r9;  /* 0C7C3520 add Rm,Rn */
	r10 += r0;  /* 0C7C3522 add Rm,Rn */
	r0 = 0xC06A560u; UPD(0x0C7C3526u, 3);  /* 0C7C3524 mov.l @(disp,pc),Rn */
	r1 += r14;  /* 0C7C3526 add Rm,Rn */
	W32(r2, r1); UPD(0x0C7C352Au, 2);  /* 0C7C3528 mov.l Rm,@Rn */
	r1 = R32(r10); UPD(0x0C7C352Cu, 1);  /* 0C7C352A mov.l @Rm,Rn */
	r2 = 0xC38C090u; UPD(0x0C7C352Eu, 1);  /* 0C7C352C mov.l @(disp,pc),Rn */
	r1 += r3;  /* 0C7C352E add Rm,Rn */
	r9 += r2;  /* 0C7C3530 add Rm,Rn */
	W32(r9, r1); UPD(0x0C7C3534u, 3);  /* 0C7C3532 mov.l Rm,@Rn */
	IF(0x0C7C3534u); { u32 t_ = r0; PR = 0x0C7C3538u; IF(0x0C7C3536u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C06A560, 0x0C06A560u, 0x0C7C3538u); }  /* 0C7C3534 jsr @Rn */
L_0C7C3538: BLKS(0x0C7C3538u);
	r0 = 0xC0AFBA0u; UPD(0x0C7C353Au, 1);  /* 0C7C3538 mov.l @(disp,pc),Rn */
	r4 = r8;  /* 0C7C353A mov Rm,Rn */
	r7 = 0x0u;  /* 0C7C353C mov #imm,Rn */
	r6 = 0x0u;  /* 0C7C353E mov #imm,Rn */
	IF(0x0C7C3540u); { u32 t_ = r0; PR = 0x0C7C3544u; r5 = 0x5Fu; /* slot mov #imm,Rn */ UPD(t_, 5); CALLP(t_, f_0C0AFBA0, 0x0C0AFBA0u, 0x0C7C3544u); }  /* 0C7C3540 jsr @Rn */
L_0C7C3544: BLKS(0x0C7C3544u);
	r0 = 0xC0AFB20u; UPD(0x0C7C3546u, 1);  /* 0C7C3544 mov.l @(disp,pc),Rn */
	r7 = 0x0u;  /* 0C7C3546 mov #imm,Rn */
	r5 = R32(r15 + 0x18u); UPD(0x0C7C354Au, 2);  /* 0C7C3548 mov.l @(disp,Rm),Rn */
	r6 = 0x0u;  /* 0C7C354A mov #imm,Rn */
	IF(0x0C7C354Cu); { u32 t_ = r0; PR = 0x0C7C3550u; r4 = r8; /* slot mov Rm,Rn */ UPD(t_, 3); CALLP(t_, f_0C0AFB20, 0x0C0AFB20u, 0x0C7C3550u); }  /* 0C7C354C jsr @Rn */
L_0C7C3550: BLKS(0x0C7C3550u);
	r0 = 0x0u;  /* 0C7C3550 mov #imm,Rn */
	r15 += 0x20u;  /* 0C7C3552 add #imm,Rn */
	IF(0x0C7C3554u); PR = R32(r15); r15 += 4; UPD(0x0C7C3556u, 3);  /* 0C7C3554 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C7C3558u, 1);  /* 0C7C3556 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C7C355Au, 1);  /* 0C7C3558 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C7C355Cu, 1);  /* 0C7C355A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C7C355Eu, 1);  /* 0C7C355C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C7C3560u, 1);  /* 0C7C355E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C3562u, 1);  /* 0C7C3560 mov.l @Rm+,Rn */
	IF(0x0C7C3562u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C7C3562 rts */
}

/* arr_item7 */
void f_0C7C35F4(sh3_t *c)
{
	LOCALS;
L_0C7C35F4: BLKS(0x0C7C35F4u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C7C35F6u, 1);  /* 0C7C35F4 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C7C35F8u, 1);  /* 0C7C35F6 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C7C35FAu, 1);  /* 0C7C35F8 mov.l Rm,@-Rn */
	r10 = r4;  /* 0C7C35FA mov Rm,Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C7C35FEu, 2);  /* 0C7C35FC mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C7C3600u, 1);  /* 0C7C35FE mov.l Rm,@-Rn */
	r1 = 0xC21CA15u; UPD(0x0C7C3602u, 1);  /* 0C7C3600 mov.l @(disp,pc),Rn */
	IF(0x0C7C3602u); r15 -= 4; W32(r15, PR); UPD(0x0C7C3604u, 1);  /* 0C7C3602 sts.l pr,@-Rn */
	r8 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C3606u, 1);  /* 0C7C3604 mov.b @Rm,Rn */
	r8 = r8 & 0xFF;  /* 0C7C3606 extu.b Rm,Rn */
	T = (r8 & r8) == 0;  /* 0C7C3608 tst Rm,Rn */
	{ u32 c_ = !T; r9 = (u32)(s32)(s16)r5; /* slot exts.w Rm,Rn */ if (c_) { UPD(0x0C7C367Au, 5); goto L_0C7C367A; } goto L_0C7C360E; }  /* 0C7C360A bf/s */
L_0C7C360E: BLKS(0x0C7C360Eu);
	r0 = 0xC060D60u; UPD(0x0C7C3610u, 2);  /* 0C7C360E mov.l @(disp,pc),Rn */
	r1 = 0x54u;  /* 0C7C3610 mov #imm,Rn */
	MACL = (u32)((s32)(s16)r9 * (s32)(s16)r1);  /* 0C7C3612 muls.w Rm,Rn */
	r1 = 0xC38C06Cu; UPD(0x0C7C3616u, 4);  /* 0C7C3614 mov.l @(disp,pc),Rn */
	r7 = 0x0u;  /* 0C7C3616 mov #imm,Rn */
	r6 = 0x0u;  /* 0C7C3618 mov #imm,Rn */
	IF(0x0C7C361Au); r11 = MACL;  /* 0C7C361A sts macl,Rn */
	r5 = 0x0u;  /* 0C7C361C mov #imm,Rn */
	r1 += r11;  /* 0C7C361E add Rm,Rn */
	r12 = R32(r1); UPD(0x0C7C3622u, 6);  /* 0C7C3620 mov.l @Rm,Rn */
	r1 = 0x305DE3Fu; UPD(0x0C7C3624u, 1);  /* 0C7C3622 mov.l @(disp,pc),Rn */
	r1 += r12;  /* 0C7C3624 add Rm,Rn */
	IF(0x0C7C3626u); r1 <<= 2;  /* 0C7C3626 shll2 Rn */
	r4 = R32(r1); UPD(0x0C7C362Au, 3);  /* 0C7C3628 mov.l @Rm,Rn */
	IF(0x0C7C362Au); r4 <<= 8;  /* 0C7C362A shll8 Rn */
	IF(0x0C7C362Cu); { u32 t_ = r0; PR = 0x0C7C3630u; IF(0x0C7C362Eu); r4 <<= 2; /* slot shll2 Rn */ UPD(t_, 3); CALLP(t_, f_0C060D60, 0x0C060D60u, 0x0C7C3630u); }  /* 0C7C362C jsr @Rn */
L_0C7C3630: BLKS(0x0C7C3630u);
	r1 = 0xC38C064u; UPD(0x0C7C3632u, 1);  /* 0C7C3630 mov.l @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r10;  /* 0C7C3632 exts.w Rm,Rn */
	r7 = 0xC7C441Cu; UPD(0x0C7C3636u, 2);  /* 0C7C3634 mov.l @(disp,pc),Rn */
	r0 = r9;  /* 0C7C3636 mov Rm,Rn */
	r11 += r1;  /* 0C7C3638 add Rm,Rn */
	r1 = 0x280u; UPD(0x0C7C363Cu, 3);  /* 0C7C363A mov.w @(disp,pc),Rn */
	W32(r11, r8); UPD(0x0C7C363Eu, 1);  /* 0C7C363C mov.l Rm,@Rn */
	IF(0x0C7C363Eu); r0 <<= 2;  /* 0C7C363E shll2 Rn */
	MACL = (u32)((s32)(s16)r4 * (s32)(s16)r1);  /* 0C7C3640 muls.w Rm,Rn */
	r1 = 0xC283A04u; UPD(0x0C7C3644u, 4);  /* 0C7C3642 mov.l @(disp,pc),Rn */
	r6 = 0x0u;  /* 0C7C3644 mov #imm,Rn */
	IF(0x0C7C3646u); r7 = R32(r0 + r7); UPD(0x0C7C3648u, 2);  /* 0C7C3646 mov.l @(r0,Rm),Rn */
	r5 = 0x63u;  /* 0C7C3648 mov #imm,Rn */
	IF(0x0C7C364Au); r2 = MACL;  /* 0C7C364A sts macl,Rn */
	r0 = 0xC0AFBA0u; UPD(0x0C7C364Eu, 3);  /* 0C7C364C mov.l @(disp,pc),Rn */
	r2 += r1;  /* 0C7C364E add Rm,Rn */
	r1 = r12;  /* 0C7C3650 mov Rm,Rn */
	IF(0x0C7C3652u); r1 <<= 2;  /* 0C7C3652 shll2 Rn */
	r3 = R32(r2); UPD(0x0C7C3656u, 4);  /* 0C7C3654 mov.l @Rm,Rn */
	r1 += r12;  /* 0C7C3656 add Rm,Rn */
	r1 += r1;  /* 0C7C3658 add Rm,Rn */
	r1 += 0x1Eu;  /* 0C7C365A add #imm,Rn */
	IF(0x0C7C365Cu); MACL = r1 * r7;  /* 0C7C365C mul.l Rm,Rn */
	r7 = 0x0u;  /* 0C7C365E mov #imm,Rn */
	IF(0x0C7C3660u); r1 = MACL;  /* 0C7C3660 sts macl,Rn */
	r1 += r3;  /* 0C7C3662 add Rm,Rn */
	W32(r2, r1); UPD(0x0C7C3666u, 9);  /* 0C7C3664 mov.l Rm,@Rn */
	IF(0x0C7C3666u); { u32 t_ = r0; PR = 0x0C7C366Au; IF(0x0C7C3668u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C0AFBA0, 0x0C0AFBA0u, 0x0C7C366Au); }  /* 0C7C3666 jsr @Rn */
L_0C7C366A: BLKS(0x0C7C366Au);
	r0 = 0x0u;  /* 0C7C366A mov #imm,Rn */
	IF(0x0C7C366Cu); PR = R32(r15); r15 += 4; UPD(0x0C7C366Eu, 2);  /* 0C7C366C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C7C3670u, 1);  /* 0C7C366E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C7C3672u, 1);  /* 0C7C3670 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C7C3674u, 1);  /* 0C7C3672 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C3676u, 1);  /* 0C7C3674 mov.l @Rm+,Rn */
	IF(0x0C7C3676u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C7C3676 rts */
L_0C7C367A: BLKS(0x0C7C367Au);
	r0 = 0xC06D370u; UPD(0x0C7C367Cu, 1);  /* 0C7C367A mov.l @(disp,pc),Rn */
	IF(0x0C7C367Cu); PR = R32(r15); r15 += 4; UPD(0x0C7C367Eu, 1);  /* 0C7C367C lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C7C3680u, 1);  /* 0C7C367E mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C7C3682u, 1);  /* 0C7C3680 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C7C3684u, 1);  /* 0C7C3682 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C3686u, 1);  /* 0C7C3684 mov.l @Rm+,Rn */
	IF(0x0C7C3686u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C7C3686 jmp @Rn */
}

/* arr_item_setup */
void f_0C7C36B0(sh3_t *c)
{
	LOCALS;
L_0C7C36B0: BLKS(0x0C7C36B0u);
	r1 = 0xC21CA15u; UPD(0x0C7C36B2u, 1);  /* 0C7C36B0 mov.l @(disp,pc),Rn */
	r0 = r5;  /* 0C7C36B2 mov Rm,Rn */
	IF(0x0C7C36B4u); r15 -= 4; W32(r15, PR); UPD(0x0C7C36B6u, 2);  /* 0C7C36B4 sts.l pr,@-Rn */
	T = r0 == 0x1u;  /* 0C7C36B6 cmp/eq #imm,r0 */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C36BAu, 2);  /* 0C7C36B8 mov.b @Rm,Rn */
	{ u32 c_ = !T; r1 = r1 & 0xFF; /* slot extu.b Rm,Rn */ if (c_) { UPD(0x0C7C36C2u, 3); goto L_0C7C36C2; } goto L_0C7C36BE; }  /* 0C7C36BA bf/s */
L_0C7C36BE: BLKS(0x0C7C36BEu);
	T = (r1 & r1) == 0;  /* 0C7C36BE tst Rm,Rn */
	if (T) { UPD(0x0C7C36EAu, 5); goto L_0C7C36EA; }  /* 0C7C36C0 bt */
L_0C7C36C2: BLKS(0x0C7C36C2u);
	r0 = 0xC06B730u; UPD(0x0C7C36C4u, 1);  /* 0C7C36C2 mov.l @(disp,pc),Rn */
	IF(0x0C7C36C4u); { u32 t_ = r0; PR = 0x0C7C36C8u; IF(0x0C7C36C6u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C06B730, 0x0C06B730u, 0x0C7C36C8u); }  /* 0C7C36C4 jsr @Rn */
L_0C7C36C8: BLKS(0x0C7C36C8u);
	r1 = 0xC21CA15u; UPD(0x0C7C36CAu, 1);  /* 0C7C36C8 mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C36CCu, 1);  /* 0C7C36CA mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C36CC tst Rm,Rn */
	if (T) { UPD(0x0C7C36DEu, 4); goto L_0C7C36DE; }  /* 0C7C36CE bt */
L_0C7C36D0: BLKS(0x0C7C36D0u);
	r1 = 0xC27DFF8u; UPD(0x0C7C36D2u, 1);  /* 0C7C36D0 mov.l @(disp,pc),Rn */
	r2 = R32(r1); UPD(0x0C7C36D4u, 1);  /* 0C7C36D2 mov.l @Rm,Rn */
	r1 = 0xC7C491Cu; UPD(0x0C7C36D6u, 1);  /* 0C7C36D4 mov.l @(disp,pc),Rn */
	W32(r1, r2); UPD(0x0C7C36D8u, 1);  /* 0C7C36D6 mov.l Rm,@Rn */
	IF(0x0C7C36D8u); PR = R32(r15); r15 += 4; UPD(0x0C7C36DAu, 1);  /* 0C7C36D8 lds.l @Rn+,pr */
	IF(0x0C7C36DAu); { u32 t_ = PR; IF(0x0C7C36DCu); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C7C36DA rts */
L_0C7C36DE: BLKS(0x0C7C36DEu);
	r2 = 0xC00000u; UPD(0x0C7C36E0u, 1);  /* 0C7C36DE mov.l @(disp,pc),Rn */
	r1 = 0xC7C491Cu; UPD(0x0C7C36E2u, 1);  /* 0C7C36E0 mov.l @(disp,pc),Rn */
	W32(r1, r2); UPD(0x0C7C36E4u, 1);  /* 0C7C36E2 mov.l Rm,@Rn */
	IF(0x0C7C36E4u); PR = R32(r15); r15 += 4; UPD(0x0C7C36E6u, 1);  /* 0C7C36E4 lds.l @Rn+,pr */
	IF(0x0C7C36E6u); { u32 t_ = PR; IF(0x0C7C36E8u); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C7C36E6 rts */
L_0C7C36EA: BLKS(0x0C7C36EAu);
	r1 = 0xC7C4920u; UPD(0x0C7C36ECu, 1);  /* 0C7C36EA mov.l @(disp,pc),Rn */
	r2 = 0xC7C492Cu; UPD(0x0C7C36EEu, 1);  /* 0C7C36EC mov.l @(disp,pc),Rn */
	r0 = R32(r1); UPD(0x0C7C36F0u, 1);  /* 0C7C36EE mov.l @Rm,Rn */
	IF(0x0C7C36F0u); r0 = (u32)(s32)(s8)R8(r0 + r2); UPD(0x0C7C36F2u, 1);  /* 0C7C36F0 mov.b @(r0,Rm),Rn */
	T = r0 == 0x7u;  /* 0C7C36F2 cmp/eq #imm,r0 */
	{ u32 c_ = T; r2 = 0x54u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C7C36C2u, 4); goto L_0C7C36C2; } goto L_0C7C36F8; }  /* 0C7C36F4 bt/s */
L_0C7C36F8: BLKS(0x0C7C36F8u);
	r5 = 0xC38C06Cu; UPD(0x0C7C36FAu, 2);  /* 0C7C36F8 mov.l @(disp,pc),Rn */
	r4 = (u32)(s32)(s16)r4;  /* 0C7C36FA exts.w Rm,Rn */
	r7 = 0xC7C492Eu; UPD(0x0C7C36FEu, 2);  /* 0C7C36FC mov.l @(disp,pc),Rn */
	MACL = (u32)((s32)(s16)r4 * (s32)(s16)r2);  /* 0C7C36FE muls.w Rm,Rn */
	r2 = 0xC38C068u; UPD(0x0C7C3702u, 3);  /* 0C7C3700 mov.l @(disp,pc),Rn */
	r3 = 0x1u;  /* 0C7C3702 mov #imm,Rn */
	IF(0x0C7C3704u); r6 = MACL;  /* 0C7C3704 sts macl,Rn */
	r2 += r6;  /* 0C7C3706 add Rm,Rn */
	W32(r2, r3); UPD(0x0C7C370Au, 4);  /* 0C7C3708 mov.l Rm,@Rn */
	r5 += r6;  /* 0C7C370A add Rm,Rn */
	r2 = 0x0u;  /* 0C7C370C mov #imm,Rn */
	W32(r5, r2); UPD(0x0C7C3710u, 3);  /* 0C7C370E mov.l Rm,@Rn */
	r3 = R32(r1); UPD(0x0C7C3712u, 1);  /* 0C7C3710 mov.l @Rm,Rn */
	r2 = 0xC7C4224u; UPD(0x0C7C3714u, 1);  /* 0C7C3712 mov.l @(disp,pc),Rn */
	r1 = r3;  /* 0C7C3714 mov Rm,Rn */
	IF(0x0C7C3716u); r1 <<= 2;  /* 0C7C3716 shll2 Rn */
	r1 += r1;  /* 0C7C3718 add Rm,Rn */
	r1 -= r3;  /* 0C7C371A sub Rm,Rn */
	r7 += r1;  /* 0C7C371C add Rm,Rn */
	r1 = 0x7u;  /* 0C7C371E mov #imm,Rn */
	UPD(0x0C7C3720u, 6);
L_0C7C3720: BLKS(0x0C7C3720u);
	{ u32 v_ = (u32)(s32)(s8)R8(r2); r2 += 1; r0 = v_; } UPD(0x0C7C3722u, 1);  /* 0C7C3720 mov.b @Rm+,Rn */
	r0 = r0 & 0xFF;  /* 0C7C3722 extu.b Rm,Rn */
	IF(0x0C7C3724u); r3 = (u32)(s32)(s8)R8(r0 + r7); UPD(0x0C7C3726u, 2);  /* 0C7C3724 mov.b @(r0,Rm),Rn */
	T = (r3 & r3) == 0;  /* 0C7C3726 tst Rm,Rn */
	{ u32 c_ = T; IF(0x0C7C372Au); r1 -= 1; T = r1 == 0; /* slot dt Rn */ if (c_) { UPD(0x0C7C3744u, 4); goto L_0C7C3744; } goto L_0C7C372C; }  /* 0C7C3728 bt/s */
L_0C7C372C: BLKS(0x0C7C372Cu);
	if (!T) { UPD(0x0C7C3720u, 4); goto L_0C7C3720; }  /* 0C7C372C bf */
L_0C7C372E: BLKS(0x0C7C372Eu);
	r3 = 0xC38C070u; UPD(0x0C7C3730u, 1);  /* 0C7C372E mov.l @(disp,pc),Rn */
	r1 = 0x0u;  /* 0C7C3730 mov #imm,Rn */
	r0 = 0xC06ACA0u; UPD(0x0C7C3734u, 2);  /* 0C7C3732 mov.l @(disp,pc),Rn */
	r7 = 0x0u;  /* 0C7C3734 mov #imm,Rn */
	r6 += r3;  /* 0C7C3736 add Rm,Rn */
	W32(r6, r1); UPD(0x0C7C373Au, 3);  /* 0C7C3738 mov.l Rm,@Rn */
	r5 = 0x0u;  /* 0C7C373A mov #imm,Rn */
	IF(0x0C7C373Cu); { u32 t_ = r0; PR = 0x0C7C3740u; r6 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C06ACA0, 0x0C06ACA0u, 0x0C7C3740u); }  /* 0C7C373C jsr @Rn */
L_0C7C3740: BLKS(0x0C7C3740u);
	{ r0 = 0x0u; /* slot mov #imm,Rn */ UPD(0x0C7C36C8u, 3); goto L_0C7C36C8; }  /* 0C7C3740 bra */
L_0C7C3744: BLKS(0x0C7C3744u);
	W32(r5, r0); UPD(0x0C7C3746u, 1);  /* 0C7C3744 mov.l Rm,@Rn */
	{ IF(0x0C7C3748u); ; /* slot nop */ UPD(0x0C7C372Eu, 3); goto L_0C7C372E; }  /* 0C7C3746 bra */
}

/* arr_item_setup_spawn */
void f_0C7C3780(sh3_t *c)
{
	LOCALS;
L_0C7C3780: BLKS(0x0C7C3780u);
	r0 = 0xC7C36B0u; UPD(0x0C7C3782u, 1);  /* 0C7C3780 mov.l @(disp,pc),Rn */
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C7C3784u, 1);  /* 0C7C3782 mov.l Rm,@-Rn */
	r8 = r5;  /* 0C7C3784 mov Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C7C3788u, 2);  /* 0C7C3786 mov.l Rm,@-Rn */
	IF(0x0C7C3788u); r15 -= 4; W32(r15, PR); UPD(0x0C7C378Au, 1);  /* 0C7C3788 sts.l pr,@-Rn */
	IF(0x0C7C378Au); { u32 t_ = r0; PR = 0x0C7C378Eu; r9 = r4; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C7C36B0, 0x0C7C36B0u, 0x0C7C378Eu); }  /* 0C7C378A jsr @Rn */
L_0C7C378E: BLKS(0x0C7C378Eu);
	r2 = 0xC21CA15u; UPD(0x0C7C3790u, 1);  /* 0C7C378E mov.l @(disp,pc),Rn */
	r1 = r0;  /* 0C7C3790 mov Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r2); UPD(0x0C7C3794u, 2);  /* 0C7C3792 mov.b @Rm,Rn */
	T = (r2 & r2) == 0;  /* 0C7C3794 tst Rm,Rn */
	{ u32 c_ = !T; r0 = r1; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C7C37AAu, 4); goto L_0C7C37AA; } goto L_0C7C379A; }  /* 0C7C3796 bf/s */
L_0C7C379A: BLKS(0x0C7C379Au);
	r0 = r8;  /* 0C7C379A mov Rm,Rn */
	T = r0 == 0x7u;  /* 0C7C379C cmp/eq #imm,r0 */
	{ u32 c_ = !T; r2 = r9 & 0xFFFF; /* slot extu.w Rm,Rn */ if (c_) { UPD(0x0C7C37A8u, 6); goto L_0C7C37A8; } goto L_0C7C37A2; }  /* 0C7C379E bf/s */
L_0C7C37A2: BLKS(0x0C7C37A2u);
	r3 = 0x13Fu; UPD(0x0C7C37A4u, 2);  /* 0C7C37A2 mov.w @(disp,pc),Rn */
	T = r2 > r3;  /* 0C7C37A4 cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C7C37B2u, 4); goto L_0C7C37B2; }  /* 0C7C37A6 bf */
L_0C7C37A8: BLKS(0x0C7C37A8u);
	r0 = r1;  /* 0C7C37A8 mov Rm,Rn */
	UPD(0x0C7C37AAu, 1);
L_0C7C37AA: BLKS(0x0C7C37AAu);
	IF(0x0C7C37AAu); PR = R32(r15); r15 += 4; UPD(0x0C7C37ACu, 1);  /* 0C7C37AA lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C37AEu, 1);  /* 0C7C37AC mov.l @Rm+,Rn */
	IF(0x0C7C37AEu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C7C37AE rts */
L_0C7C37B2: BLKS(0x0C7C37B2u);
	r2 = 0xC27DFF8u; UPD(0x0C7C37B4u, 1);  /* 0C7C37B2 mov.l @(disp,pc),Rn */
	r3 = R32(r2); UPD(0x0C7C37B6u, 1);  /* 0C7C37B4 mov.l @Rm,Rn */
	r2 = 0x1000000u; UPD(0x0C7C37B8u, 1);  /* 0C7C37B6 mov.l @(disp,pc),Rn */
	r2 -= r3;  /* 0C7C37B8 sub Rm,Rn */
	IF(0x0C7C37BAu); r2 >>= 16;  /* 0C7C37BA shlr16 Rn */
	T = (r2 & r2) == 0;  /* 0C7C37BC tst Rm,Rn */
	if (T) { UPD(0x0C7C37DAu, 6); goto L_0C7C37DA; }  /* 0C7C37BE bt */
L_0C7C37C0: BLKS(0x0C7C37C0u);
	r3 = 0xFFu; UPD(0x0C7C37C2u, 1);  /* 0C7C37C0 mov.w @(disp,pc),Rn */
	T = r2 > r3;  /* 0C7C37C2 cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C7C37C8u, 4); goto L_0C7C37C8; }  /* 0C7C37C4 bf */
L_0C7C37C6: BLKS(0x0C7C37C6u);
	r2 = 0x12Cu; UPD(0x0C7C37C8u, 1);  /* 0C7C37C6 mov.w @(disp,pc),Rn */
L_0C7C37C8: BLKS(0x0C7C37C8u);
	r3 = 0xC7C441Cu; UPD(0x0C7C37CAu, 1);  /* 0C7C37C8 mov.l @(disp,pc),Rn */
	r0 = (u32)(s32)(s16)r9;  /* 0C7C37CA exts.w Rm,Rn */
	IF(0x0C7C37CCu); r0 <<= 2;  /* 0C7C37CC shll2 Rn */
	IF(0x0C7C37CEu); W32(r0 + r3, r2); UPD(0x0C7C37D0u, 3);  /* 0C7C37CE mov.l Rm,@(r0,Rn) */
	r0 = r1;  /* 0C7C37D0 mov Rm,Rn */
	IF(0x0C7C37D2u); PR = R32(r15); r15 += 4; UPD(0x0C7C37D4u, 2);  /* 0C7C37D2 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C37D6u, 1);  /* 0C7C37D4 mov.l @Rm+,Rn */
	IF(0x0C7C37D6u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C7C37D6 rts */
L_0C7C37DA: BLKS(0x0C7C37DAu);
	{ r2 = 0x1u; /* slot mov #imm,Rn */ UPD(0x0C7C37C8u, 3); goto L_0C7C37C8; }  /* 0C7C37DA bra */
}

/* arr_drop */
void f_0C7C37F8(sh3_t *c)
{
	LOCALS;
L_0C7C37F8: BLKS(0x0C7C37F8u);
	r1 = 0xC21CA15u; UPD(0x0C7C37FAu, 1);  /* 0C7C37F8 mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C37FCu, 1);  /* 0C7C37FA mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C37FC tst Rm,Rn */
	{ u32 c_ = !T; r2 = 0x6u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C7C3814u, 4); goto L_0C7C3814; } goto L_0C7C3802; }  /* 0C7C37FE bf/s */
L_0C7C3802: BLKS(0x0C7C3802u);
	r1 = 0xC7C4920u; UPD(0x0C7C3804u, 2);  /* 0C7C3802 mov.l @(disp,pc),Rn */
	r0 = R32(r1); UPD(0x0C7C3806u, 1);  /* 0C7C3804 mov.l @Rm,Rn */
	r1 = 0xC7C492Cu; UPD(0x0C7C3808u, 1);  /* 0C7C3806 mov.l @(disp,pc),Rn */
	IF(0x0C7C3808u); r1 = (u32)(s32)(s8)R8(r0 + r1); UPD(0x0C7C380Au, 1);  /* 0C7C3808 mov.b @(r0,Rm),Rn */
	r1 = r1 & 0xFF;  /* 0C7C380A extu.b Rm,Rn */
	T = r1 > r2;  /* 0C7C380C cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C7C3814u, 5); goto L_0C7C3814; }  /* 0C7C380E bf */
L_0C7C3810: BLKS(0x0C7C3810u);
	r1 = 0x4000000u; UPD(0x0C7C3812u, 1);  /* 0C7C3810 mov.l @(disp,pc),Rn */
	r4 |= r1;  /* 0C7C3812 or Rm,Rn */
	UPD(0x0C7C3814u, 1);
L_0C7C3814: BLKS(0x0C7C3814u);
	r0 = 0xC06CB10u; UPD(0x0C7C3816u, 1);  /* 0C7C3814 mov.l @(disp,pc),Rn */
	IF(0x0C7C3816u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); IF(0x0C7C3818u); ; /* slot nop */ JRGN(tv_); UPD(t_, 2); switch (t_) { case 0x0C06CB10u: TAIL(f_0C06CB10); default: JUMPD(tv_); } }  /* 0C7C3816 jmp @Rn */
}

/* arr_enemy_kill */
void f_0C7C3830(sh3_t *c)
{
	LOCALS;
L_0C7C3830: BLKS(0x0C7C3830u);
	r1 = 0xC21CA15u; UPD(0x0C7C3832u, 1);  /* 0C7C3830 mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C3834u, 1);  /* 0C7C3832 mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C3834 tst Rm,Rn */
	if (!T) { UPD(0x0C7C388Eu, 4); goto L_0C7C388E; }  /* 0C7C3836 bf */
L_0C7C3838: BLKS(0x0C7C3838u);
	r1 = 0xB4u; UPD(0x0C7C383Au, 1);  /* 0C7C3838 mov.w @(disp,pc),Rn */
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C7C383Cu, 1);  /* 0C7C383A mov.l Rm,@-Rn */
	MACL = (u32)((s32)(s16)r4 * (s32)(s16)r1);  /* 0C7C383C muls.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C7C3840u, 3);  /* 0C7C383E mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C7C3842u, 1);  /* 0C7C3840 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C7C3844u, 1);  /* 0C7C3842 mov.l Rm,@-Rn */
	IF(0x0C7C3844u); r1 = MACL;  /* 0C7C3844 sts macl,Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C7C3848u, 2);  /* 0C7C3846 mov.l Rm,@-Rn */
	r2 = 0xC26CD40u; UPD(0x0C7C384Au, 1);  /* 0C7C3848 mov.l @(disp,pc),Rn */
	IF(0x0C7C384Au); r15 -= 4; W32(r15, PR); UPD(0x0C7C384Cu, 1);  /* 0C7C384A sts.l pr,@-Rn */
	r2 += r1;  /* 0C7C384C add Rm,Rn */
	r0 = 0xC0A5220u; UPD(0x0C7C3850u, 2);  /* 0C7C384E mov.l @(disp,pc),Rn */
	r11 = R32(r2); UPD(0x0C7C3852u, 1);  /* 0C7C3850 mov.l @Rm,Rn */
	r2 = 0xC26CD64u; UPD(0x0C7C3854u, 1);  /* 0C7C3852 mov.l @(disp,pc),Rn */
	r2 += r1;  /* 0C7C3854 add Rm,Rn */
	r8 = R32(r2); UPD(0x0C7C3858u, 2);  /* 0C7C3856 mov.l @Rm,Rn */
	r2 = 0xC26CD68u; UPD(0x0C7C385Au, 1);  /* 0C7C3858 mov.l @(disp,pc),Rn */
	r2 += r1;  /* 0C7C385A add Rm,Rn */
	r9 = R32(r2); UPD(0x0C7C385Eu, 2);  /* 0C7C385C mov.l @Rm,Rn */
	r2 = 0xC26CDF0u; UPD(0x0C7C3860u, 1);  /* 0C7C385E mov.l @(disp,pc),Rn */
	r1 += r2;  /* 0C7C3860 add Rm,Rn */
	r10 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C3864u, 2);  /* 0C7C3862 mov.b @Rm,Rn */
	IF(0x0C7C3864u); { u32 t_ = r0; PR = 0x0C7C3868u; r10 = r10 & 0xFF; /* slot extu.b Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C0A5220, 0x0C0A5220u, 0x0C7C3868u); }  /* 0C7C3864 jsr @Rn */
L_0C7C3868: BLKS(0x0C7C3868u);
	r3 = 0x4000000u; UPD(0x0C7C386Au, 1);  /* 0C7C3868 mov.l @(disp,pc),Rn */
	T = (r11 & r3) == 0;  /* 0C7C386A tst Rm,Rn */
	{ u32 c_ = !T; r12 = r0; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C7C387Eu, 4); goto L_0C7C387E; } goto L_0C7C3870; }  /* 0C7C386C bf/s */
L_0C7C3870: BLKS(0x0C7C3870u);
	r1 = 0xC7C4920u; UPD(0x0C7C3872u, 2);  /* 0C7C3870 mov.l @(disp,pc),Rn */
	r0 = R32(r1); UPD(0x0C7C3874u, 1);  /* 0C7C3872 mov.l @Rm,Rn */
	r1 = 0xC7C492Cu; UPD(0x0C7C3876u, 1);  /* 0C7C3874 mov.l @(disp,pc),Rn */
	IF(0x0C7C3876u); r0 = (u32)(s32)(s8)R8(r0 + r1); UPD(0x0C7C3878u, 1);  /* 0C7C3876 mov.b @(r0,Rm),Rn */
	T = r0 == 0x7u;  /* 0C7C3878 cmp/eq #imm,r0 */
	{ u32 c_ = T; r4 = 0x2u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C7C3894u, 4); goto L_0C7C3894; } UPD(0x0C7C387Eu, 1); goto L_0C7C387E; }  /* 0C7C387A bt/s */
L_0C7C387E: BLKS(0x0C7C387Eu);
	r0 = r12;  /* 0C7C387E mov Rm,Rn */
	IF(0x0C7C3880u); PR = R32(r15); r15 += 4; UPD(0x0C7C3882u, 2);  /* 0C7C3880 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C7C3884u, 1);  /* 0C7C3882 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C7C3886u, 1);  /* 0C7C3884 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C7C3888u, 1);  /* 0C7C3886 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C388Au, 1);  /* 0C7C3888 mov.l @Rm+,Rn */
	IF(0x0C7C388Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C7C388A rts */
L_0C7C388E: BLKS(0x0C7C388Eu);
	r0 = 0xC0A5220u; UPD(0x0C7C3890u, 1);  /* 0C7C388E mov.l @(disp,pc),Rn */
	IF(0x0C7C3890u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); IF(0x0C7C3892u); ; /* slot nop */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C7C3890 jmp @Rn */
L_0C7C3894: BLKS(0x0C7C3894u);
	r0 = 0xC06CE70u; UPD(0x0C7C3896u, 1);  /* 0C7C3894 mov.l @(disp,pc),Rn */
	r7 = r10;  /* 0C7C3896 mov Rm,Rn */
	r6 = r9;  /* 0C7C3898 mov Rm,Rn */
	IF(0x0C7C389Au); { u32 t_ = r0; PR = 0x0C7C389Eu; r5 = r8; /* slot mov Rm,Rn */ UPD(t_, 4); CALLP(t_, f_0C06CE70, 0x0C06CE70u, 0x0C7C389Eu); }  /* 0C7C389A jsr @Rn */
L_0C7C389E: BLKS(0x0C7C389Eu);
	r0 = r12;  /* 0C7C389E mov Rm,Rn */
	IF(0x0C7C38A0u); PR = R32(r15); r15 += 4; UPD(0x0C7C38A2u, 2);  /* 0C7C38A0 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C7C38A4u, 1);  /* 0C7C38A2 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C7C38A6u, 1);  /* 0C7C38A4 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C7C38A8u, 1);  /* 0C7C38A6 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C38AAu, 1);  /* 0C7C38A8 mov.l @Rm+,Rn */
	IF(0x0C7C38AAu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C7C38AA rts */
}

/* arr_item_init */
void f_0C7C38D8(sh3_t *c)
{
	LOCALS;
L_0C7C38D8: BLKS(0x0C7C38D8u);
	r0 = 0xC06C5D0u; UPD(0x0C7C38DAu, 1);  /* 0C7C38D8 mov.l @(disp,pc),Rn */
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C7C38DCu, 1);  /* 0C7C38DA mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C7C38DEu, 1);  /* 0C7C38DC mov.l Rm,@-Rn */
	IF(0x0C7C38DEu); r15 -= 4; W32(r15, PR); UPD(0x0C7C38E0u, 1);  /* 0C7C38DE sts.l pr,@-Rn */
	IF(0x0C7C38E0u); { u32 t_ = r0; PR = 0x0C7C38E4u; IF(0x0C7C38E2u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C06C5D0, 0x0C06C5D0u, 0x0C7C38E4u); }  /* 0C7C38E0 jsr @Rn */
L_0C7C38E4: BLKS(0x0C7C38E4u);
	r1 = 0xC21CA15u; UPD(0x0C7C38E6u, 1);  /* 0C7C38E4 mov.l @(disp,pc),Rn */
	r9 = r0;  /* 0C7C38E6 mov Rm,Rn */
	r8 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C38EAu, 2);  /* 0C7C38E8 mov.b @Rm,Rn */
	r8 = r8 & 0xFF;  /* 0C7C38EA extu.b Rm,Rn */
	T = (r8 & r8) == 0;  /* 0C7C38EC tst Rm,Rn */
	{ u32 c_ = !T; r7 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C7C3900u, 5); goto L_0C7C3900; } goto L_0C7C38F2; }  /* 0C7C38EE bf/s */
L_0C7C38F2: BLKS(0x0C7C38F2u);
	r0 = 0xC06C630u; UPD(0x0C7C38F4u, 2);  /* 0C7C38F2 mov.l @(disp,pc),Rn */
	r6 = 0x0u;  /* 0C7C38F4 mov #imm,Rn */
	r5 = 0x0u;  /* 0C7C38F6 mov #imm,Rn */
	IF(0x0C7C38F8u); { u32 t_ = r0; PR = 0x0C7C38FCu; r4 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C06C630, 0x0C06C630u, 0x0C7C38FCu); }  /* 0C7C38F8 jsr @Rn */
L_0C7C38FC: BLKS(0x0C7C38FCu);
	r1 = 0xC7C4924u; UPD(0x0C7C38FEu, 1);  /* 0C7C38FC mov.l @(disp,pc),Rn */
	W32(r1, r8); UPD(0x0C7C3900u, 1);  /* 0C7C38FE mov.l Rm,@Rn */
L_0C7C3900: BLKS(0x0C7C3900u);
	r0 = r9;  /* 0C7C3900 mov Rm,Rn */
	IF(0x0C7C3902u); PR = R32(r15); r15 += 4; UPD(0x0C7C3904u, 2);  /* 0C7C3902 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C3906u, 1);  /* 0C7C3904 mov.l @Rm+,Rn */
	IF(0x0C7C3906u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C7C3906 rts */
}

/* arr_item_motion */
void f_0C7C391C(sh3_t *c)
{
	LOCALS;
L_0C7C391C: BLKS(0x0C7C391Cu);
	r1 = 0xC21CA15u; UPD(0x0C7C391Eu, 1);  /* 0C7C391C mov.l @(disp,pc),Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C3920u, 1);  /* 0C7C391E mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C3920 tst Rm,Rn */
	{ u32 c_ = !T; r1 = 0x54u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C7C39C4u, 4); goto L_0C7C39C4; } goto L_0C7C3926; }  /* 0C7C3922 bf/s */
L_0C7C3926: BLKS(0x0C7C3926u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C7C3928u, 2);  /* 0C7C3926 mov.l Rm,@-Rn */
	r0 = (u32)(s32)(s16)r4;  /* 0C7C3928 exts.w Rm,Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C7C392Cu, 2);  /* 0C7C392A mov.l Rm,@-Rn */
	MACL = (u32)((s32)(s16)r0 * (s32)(s16)r1);  /* 0C7C392C muls.w Rm,Rn */
	r2 = 0xC38C064u; UPD(0x0C7C3930u, 3);  /* 0C7C392E mov.l @(disp,pc),Rn */
	IF(0x0C7C3930u); r15 -= 4; W32(r15, PR); UPD(0x0C7C3932u, 1);  /* 0C7C3930 sts.l pr,@-Rn */
	IF(0x0C7C3932u); r1 = MACL;  /* 0C7C3932 sts macl,Rn */
	r3 = 0x4010u; UPD(0x0C7C3936u, 2);  /* 0C7C3934 mov.w @(disp,pc),Rn */
	r8 = 0x4010u; UPD(0x0C7C3938u, 1);  /* 0C7C3936 mov.w @(disp,pc),Rn */
	r2 += r1;  /* 0C7C3938 add Rm,Rn */
	r2 = R32(r2); UPD(0x0C7C393Cu, 2);  /* 0C7C393A mov.l @Rm,Rn */
	T = (r2 & r3) == 0;  /* 0C7C393C tst Rm,Rn */
	{ u32 c_ = !T; r8 &= r2; /* slot and Rm,Rn */ if (c_) { UPD(0x0C7C39BAu, 4); goto L_0C7C39BA; } goto L_0C7C3942; }  /* 0C7C393E bf/s */
L_0C7C3942: BLKS(0x0C7C3942u);
	r2 = 0xC38C094u; UPD(0x0C7C3944u, 2);  /* 0C7C3942 mov.l @(disp,pc),Rn */
	r3 = 0xC38C0A4u; UPD(0x0C7C3946u, 1);  /* 0C7C3944 mov.l @(disp,pc),Rn */
	r2 += r1;  /* 0C7C3946 add Rm,Rn */
	r3 += r1;  /* 0C7C3948 add Rm,Rn */
	r7 = R32(r2); UPD(0x0C7C394Cu, 3);  /* 0C7C394A mov.l @Rm,Rn */
	r3 = R32(r3); UPD(0x0C7C394Eu, 1);  /* 0C7C394C mov.l @Rm,Rn */
	T = (s32)r3 >= (s32)r7;  /* 0C7C394E cmp/ge Rm,Rn */
	if (T) { UPD(0x0C7C3958u, 4); goto L_0C7C3958; }  /* 0C7C3950 bt */
L_0C7C3952: BLKS(0x0C7C3952u);
	r3 = 0xFFFFF000u; UPD(0x0C7C3954u, 1);  /* 0C7C3952 mov.w @(disp,pc),Rn */
	r7 += r3;  /* 0C7C3954 add Rm,Rn */
	W32(r2, r7); UPD(0x0C7C3958u, 2);  /* 0C7C3956 mov.l Rm,@Rn */
L_0C7C3958: BLKS(0x0C7C3958u);
	r6 = 0xC38C08Cu; UPD(0x0C7C395Au, 1);  /* 0C7C3958 mov.l @(disp,pc),Rn */
	r4 = 0xC38C090u; UPD(0x0C7C395Cu, 1);  /* 0C7C395A mov.l @(disp,pc),Rn */
	r6 += r1;  /* 0C7C395C add Rm,Rn */
	r9 = 0xC38C098u; UPD(0x0C7C3960u, 2);  /* 0C7C395E mov.l @(disp,pc),Rn */
	r2 = R32(r6); UPD(0x0C7C3962u, 1);  /* 0C7C3960 mov.l @Rm,Rn */
	r4 += r1;  /* 0C7C3962 add Rm,Rn */
	r9 += r1;  /* 0C7C3964 add Rm,Rn */
	r3 = R32(r4); UPD(0x0C7C3968u, 3);  /* 0C7C3966 mov.l @Rm,Rn */
	r2 += r7;  /* 0C7C3968 add Rm,Rn */
	r5 = R32(r9); UPD(0x0C7C396Cu, 2);  /* 0C7C396A mov.l @Rm,Rn */
	W32(r6, r2); UPD(0x0C7C396Eu, 1);  /* 0C7C396C mov.l Rm,@Rn */
	r6 = 0xC0000u; UPD(0x0C7C3970u, 1);  /* 0C7C396E mov.l @(disp,pc),Rn */
	r3 += r5;  /* 0C7C3970 add Rm,Rn */
	r7 = 0x30C0000u; UPD(0x0C7C3974u, 2);  /* 0C7C3972 mov.l @(disp,pc),Rn */
	r2 += r6;  /* 0C7C3974 add Rm,Rn */
	W32(r4, r3); UPD(0x0C7C3978u, 2);  /* 0C7C3976 mov.l Rm,@Rn */
	T = r2 > r7;  /* 0C7C3978 cmp/hi Rm,Rn */
	{ u32 c_ = T; r7 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C7C39CAu, 4); goto L_0C7C39CA; } goto L_0C7C397E; }  /* 0C7C397A bt/s */
L_0C7C397E: BLKS(0x0C7C397Eu);
	r7 = 0xFE8C0000u; UPD(0x0C7C3980u, 2);  /* 0C7C397E mov.l @(disp,pc),Rn */
	r2 = 0x1180000u; UPD(0x0C7C3982u, 1);  /* 0C7C3980 mov.l @(disp,pc),Rn */
	r7 += r3;  /* 0C7C3982 add Rm,Rn */
	T = r7 > r2;  /* 0C7C3984 cmp/hi Rm,Rn */
	if (!T) { UPD(0x0C7C3992u, 5); goto L_0C7C3992; }  /* 0C7C3986 bf */
L_0C7C3988: BLKS(0x0C7C3988u);
	r2 = R32(r9); UPD(0x0C7C398Au, 1);  /* 0C7C3988 mov.l @Rm,Rn */
	r7 = 0u - r2;  /* 0C7C398A neg Rm,Rn */
	W32(r9, r7); UPD(0x0C7C398Eu, 2);  /* 0C7C398C mov.l Rm,@Rn */
	r3 -= r2;  /* 0C7C398E sub Rm,Rn */
	W32(r4, r3); UPD(0x0C7C3992u, 2);  /* 0C7C3990 mov.l Rm,@Rn */
L_0C7C3992: BLKS(0x0C7C3992u);
	r3 = 0xC38C0A8u; UPD(0x0C7C3994u, 1);  /* 0C7C3992 mov.l @(disp,pc),Rn */
	r1 += r3;  /* 0C7C3994 add Rm,Rn */
	r2 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C3998u, 2);  /* 0C7C3996 mov.b @Rm,Rn */
	r3 = 0x13u;  /* 0C7C3998 mov #imm,Rn */
	r2 = r2 & 0xFF;  /* 0C7C399A extu.b Rm,Rn */
	T = r2 > r3;  /* 0C7C399C cmp/hi Rm,Rn */
	{ u32 c_ = T; r0 = r8; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C7C39B2u, 6); goto L_0C7C39B2; } goto L_0C7C39A2; }  /* 0C7C399E bt/s */
L_0C7C39A2: BLKS(0x0C7C39A2u);
	r2 = 0xC286298u; UPD(0x0C7C39A4u, 2);  /* 0C7C39A2 mov.l @(disp,pc),Rn */
	r0 = R32(r2); UPD(0x0C7C39A6u, 1);  /* 0C7C39A4 mov.l @Rm,Rn */
	T = (r0 & 0x3u) == 0;  /* 0C7C39A6 tst #imm,r0 */
	if (!T) { UPD(0x0C7C39B0u, 4); goto L_0C7C39B0; }  /* 0C7C39A8 bf */
L_0C7C39AA: BLKS(0x0C7C39AAu);
	r2 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C39ACu, 1);  /* 0C7C39AA mov.b @Rm,Rn */
	r2 += 0x1u;  /* 0C7C39AC add #imm,Rn */
	W8(r1, r2); UPD(0x0C7C39B0u, 2);  /* 0C7C39AE mov.b Rm,@Rn */
L_0C7C39B0: BLKS(0x0C7C39B0u);
	r0 = r8;  /* 0C7C39B0 mov Rm,Rn */
	UPD(0x0C7C39B2u, 1);
L_0C7C39B2: BLKS(0x0C7C39B2u);
	IF(0x0C7C39B2u); PR = R32(r15); r15 += 4; UPD(0x0C7C39B4u, 1);  /* 0C7C39B2 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C39B6u, 1);  /* 0C7C39B4 mov.l @Rm+,Rn */
	IF(0x0C7C39B6u); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C7C39B6 rts */
L_0C7C39BA: BLKS(0x0C7C39BAu);
	r0 = 0xC06AE80u; UPD(0x0C7C39BCu, 1);  /* 0C7C39BA mov.l @(disp,pc),Rn */
	IF(0x0C7C39BCu); PR = R32(r15); r15 += 4; UPD(0x0C7C39BEu, 1);  /* 0C7C39BC lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C39C0u, 1);  /* 0C7C39BE mov.l @Rm+,Rn */
	IF(0x0C7C39C0u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C7C39C0 jmp @Rn */
L_0C7C39C4: BLKS(0x0C7C39C4u);
	r0 = 0xC06AE80u; UPD(0x0C7C39C6u, 1);  /* 0C7C39C4 mov.l @(disp,pc),Rn */
	IF(0x0C7C39C6u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); IF(0x0C7C39C8u); ; /* slot nop */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C7C39C6 jmp @Rn */
L_0C7C39CA: BLKS(0x0C7C39CAu);
	r4 = r0;  /* 0C7C39CA mov Rm,Rn */
	r0 = 0xC06B480u; UPD(0x0C7C39CEu, 2);  /* 0C7C39CC mov.l @(disp,pc),Rn */
	r6 = 0x0u;  /* 0C7C39CE mov #imm,Rn */
	IF(0x0C7C39D0u); { u32 t_ = r0; PR = 0x0C7C39D4u; r5 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 3); CALLP(t_, f_0C06B480, 0x0C06B480u, 0x0C7C39D4u); }  /* 0C7C39D0 jsr @Rn */
L_0C7C39D4: BLKS(0x0C7C39D4u);
	r0 = r8;  /* 0C7C39D4 mov Rm,Rn */
	IF(0x0C7C39D6u); PR = R32(r15); r15 += 4; UPD(0x0C7C39D8u, 2);  /* 0C7C39D6 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C39DAu, 1);  /* 0C7C39D8 mov.l @Rm+,Rn */
	IF(0x0C7C39DAu); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C7C39DA rts */
}

/* arr_rose_update */
void f_0C7C3A20(sh3_t *c)
{
	LOCALS;
L_0C7C3A20: BLKS(0x0C7C3A20u);
	{ u32 v_ = r8; r15 -= 4; W32(r15, v_); } UPD(0x0C7C3A22u, 1);  /* 0C7C3A20 mov.l Rm,@-Rn */
	{ u32 v_ = r9; r15 -= 4; W32(r15, v_); } UPD(0x0C7C3A24u, 1);  /* 0C7C3A22 mov.l Rm,@-Rn */
	{ u32 v_ = r10; r15 -= 4; W32(r15, v_); } UPD(0x0C7C3A26u, 1);  /* 0C7C3A24 mov.l Rm,@-Rn */
	{ u32 v_ = r11; r15 -= 4; W32(r15, v_); } UPD(0x0C7C3A28u, 1);  /* 0C7C3A26 mov.l Rm,@-Rn */
	{ u32 v_ = r12; r15 -= 4; W32(r15, v_); } UPD(0x0C7C3A2Au, 1);  /* 0C7C3A28 mov.l Rm,@-Rn */
	{ u32 v_ = r13; r15 -= 4; W32(r15, v_); } UPD(0x0C7C3A2Cu, 1);  /* 0C7C3A2A mov.l Rm,@-Rn */
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C7C3A2Eu, 1);  /* 0C7C3A2C mov.l Rm,@-Rn */
	IF(0x0C7C3A2Eu); r15 -= 4; W32(r15, PR); UPD(0x0C7C3A30u, 1);  /* 0C7C3A2E sts.l pr,@-Rn */
	r1 = 0xC21CA15u; UPD(0x0C7C3A32u, 1);  /* 0C7C3A30 mov.l @(disp,pc),Rn */
	r15 += 0xFFFFFFE8u;  /* 0C7C3A32 add #imm,Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C7C3A36u, 2);  /* 0C7C3A34 mov.b @Rm,Rn */
	T = (r1 & r1) == 0;  /* 0C7C3A36 tst Rm,Rn */
	if (!T) { UPD(0x0C7C3B0Eu, 4); goto L_0C7C3B0E; }  /* 0C7C3A38 bf */
L_0C7C3A3A: BLKS(0x0C7C3A3Au);
	r1 = 0x54u;  /* 0C7C3A3A mov #imm,Rn */
	r10 = 0xC38C06Cu; UPD(0x0C7C3A3Eu, 2);  /* 0C7C3A3C mov.l @(disp,pc),Rn */
	r9 = (u32)(s32)(s16)r4;  /* 0C7C3A3E exts.w Rm,Rn */
	MACL = (u32)((s32)(s16)r9 * (s32)(s16)r1);  /* 0C7C3A40 muls.w Rm,Rn */
	r1 = 0x3u;  /* 0C7C3A42 mov #imm,Rn */
	IF(0x0C7C3A44u); r8 = MACL;  /* 0C7C3A44 sts macl,Rn */
	r10 += r8;  /* 0C7C3A46 add Rm,Rn */
	r2 = R32(r10); UPD(0x0C7C3A4Au, 7);  /* 0C7C3A48 mov.l @Rm,Rn */
	T = (s32)r2 > (s32)r1;  /* 0C7C3A4A cmp/gt Rm,Rn */
	if (T) { UPD(0x0C7C3B0Eu, 4); goto L_0C7C3B0E; }  /* 0C7C3A4C bt */
L_0C7C3A4E: BLKS(0x0C7C3A4Eu);
	r1 = 0xC7C4920u; UPD(0x0C7C3A50u, 1);  /* 0C7C3A4E mov.l @(disp,pc),Rn */
	r7 = 0x10000000u; UPD(0x0C7C3A52u, 1);  /* 0C7C3A50 mov.l @(disp,pc),Rn */
	r2 = R32(r1); UPD(0x0C7C3A54u, 1);  /* 0C7C3A52 mov.l @Rm,Rn */
	r1 = 0x280u; UPD(0x0C7C3A56u, 1);  /* 0C7C3A54 mov.w @(disp,pc),Rn */
	r12 = 0xC38C0B2u; UPD(0x0C7C3A58u, 1);  /* 0C7C3A56 mov.l @(disp,pc),Rn */
	IF(0x0C7C3A58u); MACL = r2 * r1;  /* 0C7C3A58 mul.l Rm,Rn */
	r2 = 0xC283794u; UPD(0x0C7C3A5Cu, 3);  /* 0C7C3A5A mov.l @(disp,pc),Rn */
	r12 += r8;  /* 0C7C3A5C add Rm,Rn */
	r11 = 0xC38C08Cu; UPD(0x0C7C3A60u, 2);  /* 0C7C3A5E mov.l @(disp,pc),Rn */
	IF(0x0C7C3A60u); r1 = MACL;  /* 0C7C3A60 sts macl,Rn */
	r11 += r8;  /* 0C7C3A62 add Rm,Rn */
	r2 += r1;  /* 0C7C3A64 add Rm,Rn */
	r2 = R32(r2); UPD(0x0C7C3A68u, 4);  /* 0C7C3A66 mov.l @Rm,Rn */
	T = (r2 & r7) == 0;  /* 0C7C3A68 tst Rm,Rn */
	if (T) { UPD(0x0C7C3A72u, 4); goto L_0C7C3A72; }  /* 0C7C3A6A bt */
L_0C7C3A6C: BLKS(0x0C7C3A6Cu);
	r0 = (u32)(s32)(s8)R8(r12); UPD(0x0C7C3A6Eu, 1);  /* 0C7C3A6C mov.b @Rm,Rn */
	T = r0 == 0x20u;  /* 0C7C3A6E cmp/eq #imm,r0 */
	if (T) { UPD(0x0C7C3B2Eu, 4); goto L_0C7C3B2E; }  /* 0C7C3A70 bt */
L_0C7C3A72: BLKS(0x0C7C3A72u);
	r2 = 0xC38C094u; UPD(0x0C7C3A74u, 1);  /* 0C7C3A72 mov.l @(disp,pc),Rn */
	r3 = 0xC38C0A4u; UPD(0x0C7C3A76u, 1);  /* 0C7C3A74 mov.l @(disp,pc),Rn */
	r2 += r8;  /* 0C7C3A76 add Rm,Rn */
	r3 += r8;  /* 0C7C3A78 add Rm,Rn */
	r1 = R32(r2); UPD(0x0C7C3A7Cu, 3);  /* 0C7C3A7A mov.l @Rm,Rn */
	r3 = R32(r3); UPD(0x0C7C3A7Eu, 1);  /* 0C7C3A7C mov.l @Rm,Rn */
	T = (s32)r3 >= (s32)r1;  /* 0C7C3A7E cmp/ge Rm,Rn */
	if (!T) { UPD(0x0C7C3B24u, 4); goto L_0C7C3B24; }  /* 0C7C3A80 bf */
L_0C7C3A82: BLKS(0x0C7C3A82u);
	r2 = R32(r11); UPD(0x0C7C3A84u, 1);  /* 0C7C3A82 mov.l @Rm,Rn */
	r1 += r2;  /* 0C7C3A84 add Rm,Rn */
	W32(r11, r1); UPD(0x0C7C3A88u, 2);  /* 0C7C3A86 mov.l Rm,@Rn */
L_0C7C3A88: BLKS(0x0C7C3A88u);
	r2 = R32(r11); UPD(0x0C7C3A8Au, 1);  /* 0C7C3A88 mov.l @Rm,Rn */
	r1 = 0xFFF00000u; UPD(0x0C7C3A8Cu, 1);  /* 0C7C3A8A mov.l @(disp,pc),Rn */
	T = (s32)r2 >= (s32)r1;  /* 0C7C3A8C cmp/ge Rm,Rn */
	{ u32 c_ = T; r7 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C7C3A9Cu, 4); goto L_0C7C3A9C; } goto L_0C7C3A92; }  /* 0C7C3A8E bt/s */
L_0C7C3A92: BLKS(0x0C7C3A92u);
	r0 = 0xC06B480u; UPD(0x0C7C3A94u, 2);  /* 0C7C3A92 mov.l @(disp,pc),Rn */
	r6 = 0x0u;  /* 0C7C3A94 mov #imm,Rn */
	r4 = r9;  /* 0C7C3A96 mov Rm,Rn */
	IF(0x0C7C3A98u); { u32 t_ = r0; PR = 0x0C7C3A9Cu; r5 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 4); CALLP(t_, f_0C06B480, 0x0C06B480u, 0x0C7C3A9Cu); }  /* 0C7C3A98 jsr @Rn */
L_0C7C3A9C: BLKS(0x0C7C3A9Cu);
	r2 = 0xC38C0B4u; UPD(0x0C7C3A9Eu, 1);  /* 0C7C3A9C mov.l @(disp,pc),Rn */
	r3 = 0x3u;  /* 0C7C3A9E mov #imm,Rn */
	r2 += r8;  /* 0C7C3AA0 add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C7C3AA4u, 3);  /* 0C7C3AA2 mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C7C3AA4 add #imm,Rn */
	r1 = r1 & 0xFF;  /* 0C7C3AA6 extu.b Rm,Rn */
	W8(r2, r1); UPD(0x0C7C3AAAu, 3);  /* 0C7C3AA8 mov.b Rm,@Rn */
	T = r1 > r3;  /* 0C7C3AAA cmp/hi Rm,Rn */
	{ u32 c_ = !T; r1 = 0x0u; /* slot mov #imm,Rn */ if (c_) { UPD(0x0C7C3ACCu, 4); goto L_0C7C3ACC; } goto L_0C7C3AB0; }  /* 0C7C3AAC bf/s */
L_0C7C3AB0: BLKS(0x0C7C3AB0u);
	r4 = r9;  /* 0C7C3AB0 mov Rm,Rn */
	W8(r2, r1); UPD(0x0C7C3AB4u, 3);  /* 0C7C3AB2 mov.b Rm,@Rn */
	r7 = 0x0u;  /* 0C7C3AB4 mov #imm,Rn */
	r1 = 0xC38C070u; UPD(0x0C7C3AB8u, 2);  /* 0C7C3AB6 mov.l @(disp,pc),Rn */
	r6 = 0x0u;  /* 0C7C3AB8 mov #imm,Rn */
	r5 = 0x0u;  /* 0C7C3ABA mov #imm,Rn */
	r1 += r8;  /* 0C7C3ABC add Rm,Rn */
	r0 = R32(r1); UPD(0x0C7C3AC0u, 4);  /* 0C7C3ABE mov.l @Rm,Rn */
	r0 += 0x1u;  /* 0C7C3AC0 add #imm,Rn */
	r0 &= 0xFu;  /* 0C7C3AC2 and #imm,r0 */
	W32(r1, r0); UPD(0x0C7C3AC6u, 3);  /* 0C7C3AC4 mov.l Rm,@Rn */
	r0 = 0xC06AD00u; UPD(0x0C7C3AC8u, 1);  /* 0C7C3AC6 mov.l @(disp,pc),Rn */
	IF(0x0C7C3AC8u); { u32 t_ = r0; PR = 0x0C7C3ACCu; IF(0x0C7C3ACAu); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C06AD00, 0x0C06AD00u, 0x0C7C3ACCu); }  /* 0C7C3AC8 jsr @Rn */
L_0C7C3ACC: BLKS(0x0C7C3ACCu);
	r2 = 0xC38C0A8u; UPD(0x0C7C3ACEu, 1);  /* 0C7C3ACC mov.l @(disp,pc),Rn */
	r3 = 0x13u;  /* 0C7C3ACE mov #imm,Rn */
	r2 += r8;  /* 0C7C3AD0 add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C7C3AD4u, 3);  /* 0C7C3AD2 mov.b @Rm,Rn */
	r1 = r1 & 0xFF;  /* 0C7C3AD4 extu.b Rm,Rn */
	T = r1 > r3;  /* 0C7C3AD6 cmp/hi Rm,Rn */
	if (T) { UPD(0x0C7C3AE0u, 5); goto L_0C7C3AE0; }  /* 0C7C3AD8 bt */
L_0C7C3ADA: BLKS(0x0C7C3ADAu);
	r1 = (u32)(s32)(s8)R8(r2); UPD(0x0C7C3ADCu, 1);  /* 0C7C3ADA mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C7C3ADC add #imm,Rn */
	W8(r2, r1); UPD(0x0C7C3AE0u, 2);  /* 0C7C3ADE mov.b Rm,@Rn */
L_0C7C3AE0: BLKS(0x0C7C3AE0u);
	r2 = R32(r10); UPD(0x0C7C3AE2u, 1);  /* 0C7C3AE0 mov.l @Rm,Rn */
	r1 = 0x2u;  /* 0C7C3AE2 mov #imm,Rn */
	T = (s32)r2 > (s32)r1;  /* 0C7C3AE4 cmp/gt Rm,Rn */
	if (!T) { UPD(0x0C7C3B72u, 5); goto L_0C7C3B72; }  /* 0C7C3AE6 bf */
L_0C7C3AE8: BLKS(0x0C7C3AE8u);
	r1 = (u32)(s32)(s8)R8(r12); UPD(0x0C7C3AEAu, 1);  /* 0C7C3AE8 mov.b @Rm,Rn */
	r2 = 0x1Fu;  /* 0C7C3AEA mov #imm,Rn */
	r1 = r1 & 0xFF;  /* 0C7C3AEC extu.b Rm,Rn */
	T = r1 > r2;  /* 0C7C3AEE cmp/hi Rm,Rn */
	if (T) { UPD(0x0C7C3AF8u, 6); goto L_0C7C3AF8; }  /* 0C7C3AF0 bt */
L_0C7C3AF2: BLKS(0x0C7C3AF2u);
	r1 = (u32)(s32)(s8)R8(r12); UPD(0x0C7C3AF4u, 1);  /* 0C7C3AF2 mov.b @Rm,Rn */
	r1 += 0x1u;  /* 0C7C3AF4 add #imm,Rn */
	W8(r12, r1); UPD(0x0C7C3AF8u, 2);  /* 0C7C3AF6 mov.b Rm,@Rn */
L_0C7C3AF8: BLKS(0x0C7C3AF8u);
	r0 = 0x0u;  /* 0C7C3AF8 mov #imm,Rn */
	r15 += 0x18u;  /* 0C7C3AFA add #imm,Rn */
	IF(0x0C7C3AFCu); PR = R32(r15); r15 += 4; UPD(0x0C7C3AFEu, 3);  /* 0C7C3AFC lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C7C3B00u, 1);  /* 0C7C3AFE mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C7C3B02u, 1);  /* 0C7C3B00 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C7C3B04u, 1);  /* 0C7C3B02 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C7C3B06u, 1);  /* 0C7C3B04 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C7C3B08u, 1);  /* 0C7C3B06 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C3B0Au, 1);  /* 0C7C3B08 mov.l @Rm+,Rn */
	IF(0x0C7C3B0Au); { u32 t_ = PR; { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ UPD(t_, 3); RET(t_); }  /* 0C7C3B0A rts */
L_0C7C3B0E: BLKS(0x0C7C3B0Eu);
	r0 = 0xC06A990u; UPD(0x0C7C3B10u, 1);  /* 0C7C3B0E mov.l @(disp,pc),Rn */
	r15 += 0x18u;  /* 0C7C3B10 add #imm,Rn */
	IF(0x0C7C3B12u); PR = R32(r15); r15 += 4; UPD(0x0C7C3B14u, 2);  /* 0C7C3B12 lds.l @Rn+,pr */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C7C3B16u, 1);  /* 0C7C3B14 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r13 = v_; } UPD(0x0C7C3B18u, 1);  /* 0C7C3B16 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r12 = v_; } UPD(0x0C7C3B1Au, 1);  /* 0C7C3B18 mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r11 = v_; } UPD(0x0C7C3B1Cu, 1);  /* 0C7C3B1A mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r10 = v_; } UPD(0x0C7C3B1Eu, 1);  /* 0C7C3B1C mov.l @Rm+,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r9 = v_; } UPD(0x0C7C3B20u, 1);  /* 0C7C3B1E mov.l @Rm+,Rn */
	IF(0x0C7C3B20u); { u32 tv_ = r0; u32 t_ = PHYS(tv_); { u32 v_ = R32(r15); r15 += 4; r8 = v_; } /* slot mov.l @Rm+,Rn */ JRGN(tv_); UPD(t_, 2); switch (t_) {  default: JUMPD(tv_); } }  /* 0C7C3B20 jmp @Rn */
L_0C7C3B24: BLKS(0x0C7C3B24u);
	r6 = 0xFFFFF400u; UPD(0x0C7C3B26u, 1);  /* 0C7C3B24 mov.w @(disp,pc),Rn */
	r1 += r6;  /* 0C7C3B26 add Rm,Rn */
	W32(r2, r1); UPD(0x0C7C3B2Au, 2);  /* 0C7C3B28 mov.l Rm,@Rn */
	{ IF(0x0C7C3B2Cu); ; /* slot nop */ UPD(0x0C7C3A82u, 3); goto L_0C7C3A82; }  /* 0C7C3B2A bra */
L_0C7C3B2E: BLKS(0x0C7C3B2Eu);
	r13 = 0xC38C090u; UPD(0x0C7C3B30u, 1);  /* 0C7C3B2E mov.l @(disp,pc),Rn */
	r2 = 0xC2837A4u; UPD(0x0C7C3B32u, 1);  /* 0C7C3B30 mov.l @(disp,pc),Rn */
	r13 += r8;  /* 0C7C3B32 add Rm,Rn */
	r4 = R32(r11); UPD(0x0C7C3B36u, 2);  /* 0C7C3B34 mov.l @Rm,Rn */
	r2 += r1;  /* 0C7C3B36 add Rm,Rn */
	r5 = R32(r13); UPD(0x0C7C3B3Au, 2);  /* 0C7C3B38 mov.l @Rm,Rn */
	r0 = 0xC057390u; UPD(0x0C7C3B3Cu, 1);  /* 0C7C3B3A mov.l @(disp,pc),Rn */
	r6 = R32(r2); UPD(0x0C7C3B3Eu, 1);  /* 0C7C3B3C mov.l @Rm,Rn */
	r2 = 0xC2837A8u; UPD(0x0C7C3B40u, 1);  /* 0C7C3B3E mov.l @(disp,pc),Rn */
	r1 += r2;  /* 0C7C3B40 add Rm,Rn */
	r7 = R32(r1); UPD(0x0C7C3B44u, 2);  /* 0C7C3B42 mov.l @Rm,Rn */
	IF(0x0C7C3B44u); { u32 t_ = r0; PR = 0x0C7C3B48u; IF(0x0C7C3B46u); ; /* slot nop */ UPD(t_, 2); CALLP(t_, f_0C057390, 0x0C057390u, 0x0C7C3B48u); }  /* 0C7C3B44 jsr @Rn */
L_0C7C3B48: BLKS(0x0C7C3B48u);
	r4 = r0;  /* 0C7C3B48 mov Rm,Rn */
	r14 = r0;  /* 0C7C3B4A mov Rm,Rn */
	r0 = 0xC058060u; UPD(0x0C7C3B4Eu, 3);  /* 0C7C3B4C mov.l @(disp,pc),Rn */
	r7 = 0x0u;  /* 0C7C3B4E mov #imm,Rn */
	r5 = 0x50000u; UPD(0x0C7C3B52u, 2);  /* 0C7C3B50 mov.l @(disp,pc),Rn */
	IF(0x0C7C3B52u); { u32 t_ = r0; PR = 0x0C7C3B56u; r6 = 0x0u; /* slot mov #imm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058060, 0x0C058060u, 0x0C7C3B56u); }  /* 0C7C3B52 jsr @Rn */
L_0C7C3B56: BLKS(0x0C7C3B56u);
	r1 = R32(r11); UPD(0x0C7C3B58u, 1);  /* 0C7C3B56 mov.l @Rm,Rn */
	r7 = 0x0u;  /* 0C7C3B58 mov #imm,Rn */
	r5 = 0x50000u; UPD(0x0C7C3B5Cu, 2);  /* 0C7C3B5A mov.l @(disp,pc),Rn */
	r6 = 0x0u;  /* 0C7C3B5C mov #imm,Rn */
	r1 += r0;  /* 0C7C3B5E add Rm,Rn */
	r0 = 0xC058030u; UPD(0x0C7C3B62u, 3);  /* 0C7C3B60 mov.l @(disp,pc),Rn */
	W32(r11, r1); UPD(0x0C7C3B64u, 1);  /* 0C7C3B62 mov.l Rm,@Rn */
	IF(0x0C7C3B64u); { u32 t_ = r0; PR = 0x0C7C3B68u; r4 = r14; /* slot mov Rm,Rn */ UPD(t_, 2); CALLP(t_, f_0C058030, 0x0C058030u, 0x0C7C3B68u); }  /* 0C7C3B64 jsr @Rn */
L_0C7C3B68: BLKS(0x0C7C3B68u);
	r1 = R32(r13); UPD(0x0C7C3B6Au, 1);  /* 0C7C3B68 mov.l @Rm,Rn */
	r1 += r0;  /* 0C7C3B6A add Rm,Rn */
	W32(r13, r1); UPD(0x0C7C3B6Eu, 2);  /* 0C7C3B6C mov.l Rm,@Rn */
	{ IF(0x0C7C3B70u); ; /* slot nop */ UPD(0x0C7C3A88u, 3); goto L_0C7C3A88; }  /* 0C7C3B6E bra */
L_0C7C3B72: BLKS(0x0C7C3B72u);
	r7 = 0xC38C080u; UPD(0x0C7C3B74u, 1);  /* 0C7C3B72 mov.l @(disp,pc),Rn */
	r2 = 0xFFFFFFFu; UPD(0x0C7C3B76u, 1);  /* 0C7C3B74 mov.l @(disp,pc),Rn */
	r7 += r8;  /* 0C7C3B76 add Rm,Rn */
	r3 = R32(r7); UPD(0x0C7C3B7Au, 2);  /* 0C7C3B78 mov.l @Rm,Rn */
	W32(r15 + 0x4u, r7); UPD(0x0C7C3B7Cu, 1);  /* 0C7C3B7A mov.l Rm,@(disp,Rn) */
	r1 = R32(r3); UPD(0x0C7C3B7Eu, 1);  /* 0C7C3B7C mov.l @Rm,Rn */
	r2 &= r1;  /* 0C7C3B7E and Rm,Rn */
	W32(r15, r2); UPD(0x0C7C3B82u, 2);  /* 0C7C3B80 mov.l Rm,@Rn */
	r2 = 0xFFFFFFFu; UPD(0x0C7C3B84u, 1);  /* 0C7C3B82 mov.l @(disp,pc),Rn */
	T = (r1 & r2) == 0;  /* 0C7C3B84 tst Rm,Rn */
	if (T) { UPD(0x0C7C3AE8u, 4); goto L_0C7C3AE8; }  /* 0C7C3B86 bt */
L_0C7C3B88: BLKS(0x0C7C3B88u);
	r4 = 0xC38C090u; UPD(0x0C7C3B8Au, 1);  /* 0C7C3B88 mov.l @(disp,pc),Rn */
	r13 = 0xC38C068u; UPD(0x0C7C3B8Cu, 1);  /* 0C7C3B8A mov.l @(disp,pc),Rn */
	r4 += r8;  /* 0C7C3B8C add Rm,Rn */
	W32(r15 + 0x14u, r11); UPD(0x0C7C3B90u, 2);  /* 0C7C3B8E mov.l Rm,@(disp,Rn) */
	W32(r15 + 0x10u, r4); UPD(0x0C7C3B92u, 1);  /* 0C7C3B90 mov.l Rm,@(disp,Rn) */
	r13 += r8;  /* 0C7C3B92 add Rm,Rn */
	r11 = r3;  /* 0C7C3B94 mov Rm,Rn */
	UPD(0x0C7C3B96u, 2);
L_0C7C3B96: BLKS(0x0C7C3B96u);
	r1 = R32(r15 + 0x14u); UPD(0x0C7C3B98u, 1);  /* 0C7C3B96 mov.l @(disp,Rm),Rn */
	r14 = R32(r11 + 0x4u); UPD(0x0C7C3B9Au, 1);  /* 0C7C3B98 mov.l @(disp,Rm),Rn */
	r3 = R32(r15 + 0x10u); UPD(0x0C7C3B9Cu, 1);  /* 0C7C3B9A mov.l @(disp,Rm),Rn */
	r4 = R32(r1); UPD(0x0C7C3B9Eu, 1);  /* 0C7C3B9C mov.l @Rm,Rn */
	r1 = R32(r11 + 0x8u); UPD(0x0C7C3BA0u, 1);  /* 0C7C3B9E mov.l @(disp,Rm),Rn */
	r2 = R32(r3); UPD(0x0C7C3BA2u, 1);  /* 0C7C3BA0 mov.l @Rm,Rn */
	r4 += r1;  /* 0C7C3BA2 add Rm,Rn */
	r1 = R32(r11 + 0xCu); UPD(0x0C7C3BA6u, 2);  /* 0C7C3BA4 mov.l @(disp,Rm),Rn */
	r3 = 0x100u; UPD(0x0C7C3BA8u, 1);  /* 0C7C3BA6 mov.w @(disp,pc),Rn */
	r2 += r1;  /* 0C7C3BA8 add Rm,Rn */
	r1 = 0xC38C064u; UPD(0x0C7C3BACu, 2);  /* 0C7C3BAA mov.l @(disp,pc),Rn */
	W32(r15 + 0xCu, r2); UPD(0x0C7C3BAEu, 1);  /* 0C7C3BAC mov.l Rm,@(disp,Rn) */
	r2 = 0x0u;  /* 0C7C3BAE mov #imm,Rn */
	W32(r15 + 0x8u, r14); UPD(0x0C7C3BB2u, 2);  /* 0C7C3BB0 mov.l Rm,@(disp,Rn) */
	IF(0x0C7C3BB2u); ;  /* 0C7C3BB2 nop */
	UPD(0x0C7C3BB4u, 1);
L_0C7C3BB4: BLKS(0x0C7C3BB4u);
	T = r9 == r2;  /* 0C7C3BB4 cmp/eq Rm,Rn */
	if (T) { UPD(0x0C7C3BCEu, 4); goto L_0C7C3BCE; }  /* 0C7C3BB6 bt */
L_0C7C3BB8: BLKS(0x0C7C3BB8u);
	r7 = R32(r1); UPD(0x0C7C3BBAu, 1);  /* 0C7C3BB8 mov.l @Rm,Rn */
	T = (r7 & r7) == 0;  /* 0C7C3BBA tst Rm,Rn */
	if (T) { UPD(0x0C7C3BCEu, 4); goto L_0C7C3BCE; }  /* 0C7C3BBC bt */
L_0C7C3BBE: BLKS(0x0C7C3BBEu);
	r6 = R32(r1 + 0x4u); UPD(0x0C7C3BC0u, 1);  /* 0C7C3BBE mov.l @(disp,Rm),Rn */
	r7 = R32(r13); UPD(0x0C7C3BC2u, 1);  /* 0C7C3BC0 mov.l @Rm,Rn */
	T = r6 == r7;  /* 0C7C3BC2 cmp/eq Rm,Rn */
	if (!T) { UPD(0x0C7C3BCEu, 4); goto L_0C7C3BCE; }  /* 0C7C3BC4 bf */
L_0C7C3BC6: BLKS(0x0C7C3BC6u);
	r6 = R32(r1 + 0x8u); UPD(0x0C7C3BC8u, 1);  /* 0C7C3BC6 mov.l @(disp,Rm),Rn */
	r7 = R32(r10); UPD(0x0C7C3BCAu, 1);  /* 0C7C3BC8 mov.l @Rm,Rn */
	T = r6 == r7;  /* 0C7C3BCA cmp/eq Rm,Rn */
	if (T) { UPD(0x0C7C3C5Cu, 4); goto L_0C7C3C5C; }  /* 0C7C3BCC bt */
L_0C7C3BCE: BLKS(0x0C7C3BCEu);
	IF(0x0C7C3BCEu); r3 -= 1; T = r3 == 0;  /* 0C7C3BCE dt Rn */
	UPD(0x0C7C3BD0u, 1);
L_0C7C3BD0: BLKS(0x0C7C3BD0u);
	r2 += 0x1u;  /* 0C7C3BD0 add #imm,Rn */
	{ u32 c_ = !T; r1 += 0x54u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C7C3BB4u, 4); goto L_0C7C3BB4; } goto L_0C7C3BD6; }  /* 0C7C3BD2 bf/s */
L_0C7C3BD6: BLKS(0x0C7C3BD6u);
	r1 = R32(r11 + 0x10u); UPD(0x0C7C3BD8u, 2);  /* 0C7C3BD6 mov.l @(disp,Rm),Rn */
	r11 += 0x10u;  /* 0C7C3BD8 add #imm,Rn */
	r2 = 0xFFFFFFFu; UPD(0x0C7C3BDCu, 2);  /* 0C7C3BDA mov.l @(disp,pc),Rn */
	r14 = 0xFFFFFFFu; UPD(0x0C7C3BDEu, 1);  /* 0C7C3BDC mov.l @(disp,pc),Rn */
	r2 &= r1;  /* 0C7C3BDE and Rm,Rn */
	T = (r1 & r14) == 0;  /* 0C7C3BE0 tst Rm,Rn */
	{ u32 c_ = !T; W32(r15, r2); /* slot mov.l Rm,@Rn */ if (c_) { UPD(0x0C7C3B96u, 5); goto L_0C7C3B96; } UPD(0x0C7C3BE6u, 1); goto L_0C7C3BE6; }  /* 0C7C3BE2 bf/s */
L_0C7C3BE6: BLKS(0x0C7C3BE6u);
	{ IF(0x0C7C3BE8u); ; /* slot nop */ UPD(0x0C7C3AE8u, 3); goto L_0C7C3AE8; }  /* 0C7C3BE6 bra */
L_0C7C3C5C: BLKS(0x0C7C3C5Cu);
	r7 = R32(r1 + 0x1Cu); UPD(0x0C7C3C5Eu, 1);  /* 0C7C3C5C mov.l @(disp,Rm),Rn */
	r6 = R32(r7); UPD(0x0C7C3C60u, 1);  /* 0C7C3C5E mov.l @Rm,Rn */
	T = (r6 & r6) == 0;  /* 0C7C3C60 tst Rm,Rn */
	{ u32 c_ = T; r0 = r1; /* slot mov Rm,Rn */ if (c_) { UPD(0x0C7C3BCEu, 4); goto L_0C7C3BCE; } goto L_0C7C3C66; }  /* 0C7C3C62 bt/s */
L_0C7C3C66: BLKS(0x0C7C3C66u);
	r0 += 0x28u;  /* 0C7C3C66 add #imm,Rn */
	UPD(0x0C7C3C68u, 2);
L_0C7C3C68: BLKS(0x0C7C3C68u);
	r6 = R32(r0); UPD(0x0C7C3C6Au, 1);  /* 0C7C3C68 mov.l @Rm,Rn */
	r14 = R32(r7 + 0x8u); UPD(0x0C7C3C6Cu, 1);  /* 0C7C3C6A mov.l @(disp,Rm),Rn */
	r5 = R32(r7); UPD(0x0C7C3C6Eu, 1);  /* 0C7C3C6C mov.l @Rm,Rn */
	r14 += r6;  /* 0C7C3C6E add Rm,Rn */
	r6 = r4;  /* 0C7C3C70 mov Rm,Rn */
	r6 -= r14;  /* 0C7C3C72 sub Rm,Rn */
	r14 = R32(r15); UPD(0x0C7C3C76u, 4);  /* 0C7C3C74 mov.l @Rm,Rn */
	IF(0x0C7C3C76u); T = (s32)r6 >= 0;  /* 0C7C3C76 cmp/pz Rn */
	if (T) { UPD(0x0C7C3C7Cu, 4); goto L_0C7C3C7C; }  /* 0C7C3C78 bt */
L_0C7C3C7A: BLKS(0x0C7C3C7Au);
	r6 = 0u - r6;  /* 0C7C3C7A neg Rm,Rn */
	UPD(0x0C7C3C7Cu, 1);
L_0C7C3C7C: BLKS(0x0C7C3C7Cu);
	r5 += r14;  /* 0C7C3C7C add Rm,Rn */
	T = (s32)r6 >= (s32)r5;  /* 0C7C3C7E cmp/ge Rm,Rn */
	if (T) { UPD(0x0C7C3CFAu, 5); goto L_0C7C3CFA; }  /* 0C7C3C80 bt */
L_0C7C3C82: BLKS(0x0C7C3C82u);
	r6 = R32(r1 + 0x2Cu); UPD(0x0C7C3C84u, 1);  /* 0C7C3C82 mov.l @(disp,Rm),Rn */
	r14 = R32(r7 + 0xCu); UPD(0x0C7C3C86u, 1);  /* 0C7C3C84 mov.l @(disp,Rm),Rn */
	r5 = R32(r7 + 0x4u); UPD(0x0C7C3C88u, 1);  /* 0C7C3C86 mov.l @(disp,Rm),Rn */
	r14 += r6;  /* 0C7C3C88 add Rm,Rn */
	r6 = R32(r15 + 0xCu); UPD(0x0C7C3C8Cu, 2);  /* 0C7C3C8A mov.l @(disp,Rm),Rn */
	r6 -= r14;  /* 0C7C3C8C sub Rm,Rn */
	r14 = R32(r15 + 0x8u); UPD(0x0C7C3C90u, 2);  /* 0C7C3C8E mov.l @(disp,Rm),Rn */
	IF(0x0C7C3C90u); T = (s32)r6 >= 0;  /* 0C7C3C90 cmp/pz Rn */
	if (T) { UPD(0x0C7C3C96u, 4); goto L_0C7C3C96; }  /* 0C7C3C92 bt */
L_0C7C3C94: BLKS(0x0C7C3C94u);
	r6 = 0u - r6;  /* 0C7C3C94 neg Rm,Rn */
	UPD(0x0C7C3C96u, 1);
L_0C7C3C96: BLKS(0x0C7C3C96u);
	r5 += r14;  /* 0C7C3C96 add Rm,Rn */
	T = (s32)r6 >= (s32)r5;  /* 0C7C3C98 cmp/ge Rm,Rn */
	if (T) { UPD(0x0C7C3CFAu, 5); goto L_0C7C3CFA; }  /* 0C7C3C9A bt */
L_0C7C3C9C: BLKS(0x0C7C3C9Cu);
	r3 = R32(r10); UPD(0x0C7C3C9Eu, 1);  /* 0C7C3C9C mov.l @Rm,Rn */
	IF(0x0C7C3C9Eu); r9 <<= 2;  /* 0C7C3C9E shll2 Rn */
	r6 = 0xC38C07Cu; UPD(0x0C7C3CA2u, 2);  /* 0C7C3CA0 mov.l @(disp,pc),Rn */
	r3 += 0x1u;  /* 0C7C3CA2 add #imm,Rn */
	W32(r10, r3); UPD(0x0C7C3CA6u, 2);  /* 0C7C3CA4 mov.l Rm,@Rn */
	r6 += r8;  /* 0C7C3CA6 add Rm,Rn */
	r3 = 0xC38C074u; UPD(0x0C7C3CAAu, 2);  /* 0C7C3CA8 mov.l @(disp,pc),Rn */
	r3 += r8;  /* 0C7C3CAA add Rm,Rn */
	r7 = R32(r3); UPD(0x0C7C3CAEu, 2);  /* 0C7C3CAC mov.l @Rm,Rn */
	r0 = R32(r10); UPD(0x0C7C3CB0u, 1);  /* 0C7C3CAE mov.l @Rm,Rn */
	r3 = 0xC38C078u; UPD(0x0C7C3CB2u, 1);  /* 0C7C3CB0 mov.l @(disp,pc),Rn */
	IF(0x0C7C3CB2u); r0 <<= 2;  /* 0C7C3CB2 shll2 Rn */
	IF(0x0C7C3CB4u); r0 <<= 2;  /* 0C7C3CB4 shll2 Rn */
	IF(0x0C7C3CB6u); r7 = R32(r0 + r7); UPD(0x0C7C3CB8u, 3);  /* 0C7C3CB6 mov.l @(r0,Rm),Rn */
	r3 += r8;  /* 0C7C3CB8 add Rm,Rn */
	W32(r3, r7); UPD(0x0C7C3CBCu, 2);  /* 0C7C3CBA mov.l Rm,@Rn */
	r7 = 0xC38C070u; UPD(0x0C7C3CBEu, 1);  /* 0C7C3CBC mov.l @(disp,pc),Rn */
	r5 = R32(r3); UPD(0x0C7C3CC0u, 1);  /* 0C7C3CBE mov.l @Rm,Rn */
	r7 += r8;  /* 0C7C3CC0 add Rm,Rn */
	r0 = R32(r7); UPD(0x0C7C3CC4u, 2);  /* 0C7C3CC2 mov.l @Rm,Rn */
	IF(0x0C7C3CC4u); r0 <<= 2;  /* 0C7C3CC4 shll2 Rn */
	r0 += r0;  /* 0C7C3CC6 add Rm,Rn */
	IF(0x0C7C3CC8u); r5 = R32(r0 + r5); UPD(0x0C7C3CCAu, 3);  /* 0C7C3CC8 mov.l @(r0,Rm),Rn */
	r0 = r2;  /* 0C7C3CCA mov Rm,Rn */
	IF(0x0C7C3CCCu); r0 <<= 2;  /* 0C7C3CCC shll2 Rn */
	W32(r6, r5); UPD(0x0C7C3CD0u, 3);  /* 0C7C3CCE mov.l Rm,@Rn */
	r6 = 0xC38C094u; UPD(0x0C7C3CD2u, 1);  /* 0C7C3CD0 mov.l @(disp,pc),Rn */
	r8 += r6;  /* 0C7C3CD2 add Rm,Rn */
	r6 = 0x20000u; UPD(0x0C7C3CD6u, 2);  /* 0C7C3CD4 mov.l @(disp,pc),Rn */
	W32(r8, r6); UPD(0x0C7C3CD8u, 1);  /* 0C7C3CD6 mov.l Rm,@Rn */
	r6 = R32(r3); UPD(0x0C7C3CDAu, 1);  /* 0C7C3CD8 mov.l @Rm,Rn */
	r3 = R32(r7); UPD(0x0C7C3CDCu, 1);  /* 0C7C3CDA mov.l @Rm,Rn */
	r7 = R32(r15 + 0x4u); UPD(0x0C7C3CDEu, 1);  /* 0C7C3CDC mov.l @(disp,Rm),Rn */
	IF(0x0C7C3CDEu); r3 <<= 2;  /* 0C7C3CDE shll2 Rn */
	r3 += r3;  /* 0C7C3CE0 add Rm,Rn */
	r3 += r6;  /* 0C7C3CE2 add Rm,Rn */
	r3 = R32(r3 + 0x4u); UPD(0x0C7C3CE6u, 4);  /* 0C7C3CE4 mov.l @(disp,Rm),Rn */
	W32(r7, r3); UPD(0x0C7C3CE8u, 1);  /* 0C7C3CE6 mov.l Rm,@Rn */
	r3 = 0x0u;  /* 0C7C3CE8 mov #imm,Rn */
	W32(r1, r3); UPD(0x0C7C3CECu, 2);  /* 0C7C3CEA mov.l Rm,@Rn */
	r3 = 0xC7C441Cu; UPD(0x0C7C3CEEu, 1);  /* 0C7C3CEC mov.l @(disp,pc),Rn */
	r9 += r3;  /* 0C7C3CEE add Rm,Rn */
	IF(0x0C7C3CF0u); r2 = R32(r0 + r3); UPD(0x0C7C3CF2u, 2);  /* 0C7C3CF0 mov.l @(r0,Rm),Rn */
	r1 = R32(r9); UPD(0x0C7C3CF4u, 1);  /* 0C7C3CF2 mov.l @Rm,Rn */
	r1 += r2;  /* 0C7C3CF4 add Rm,Rn */
	{ W32(r9, r1); /* slot mov.l Rm,@Rn */ UPD(0x0C7C3AE8u, 4); goto L_0C7C3AE8; }  /* 0C7C3CF6 bra */
L_0C7C3CFA: BLKS(0x0C7C3CFAu);
	r6 = R32(r7 + 0x10u); UPD(0x0C7C3CFCu, 1);  /* 0C7C3CFA mov.l @(disp,Rm),Rn */
	T = (r6 & r6) == 0;  /* 0C7C3CFC tst Rm,Rn */
	{ u32 c_ = !T; r7 += 0x10u; /* slot add #imm,Rn */ if (c_) { UPD(0x0C7C3C68u, 4); goto L_0C7C3C68; } goto L_0C7C3D02; }  /* 0C7C3CFE bf/s */
L_0C7C3D02: BLKS(0x0C7C3D02u);
	{ IF(0x0C7C3D04u); r3 -= 1; T = r3 == 0; /* slot dt Rn */ UPD(0x0C7C3BD0u, 4); goto L_0C7C3BD0; }  /* 0C7C3D02 bra */
}


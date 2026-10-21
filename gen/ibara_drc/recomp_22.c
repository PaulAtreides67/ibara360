#include "recomp.h"
#include "recomp_funcs.h"

/* FUN_0c0b1480 */
void f_0C0B1480(sh3_t *c)
{
	LOCALS;
L_0C0B1480: BLKS(0x0C0B1480u);
	{ u32 v_ = r14; r15 -= 4; W32(r15, v_); } UPD(0x0C0B1482u, 1);  /* 0C0B1480 mov.l Rm,@-Rn */
	r15 += 0xFFFFFFECu;  /* 0C0B1482 add #imm,Rn */
	r14 = r15;  /* 0C0B1484 mov Rm,Rn */
	W32(r14, r4); UPD(0x0C0B1488u, 3);  /* 0C0B1486 mov.l Rm,@Rn */
	r1 = R32(r14); UPD(0x0C0B148Au, 1);  /* 0C0B1488 mov.l @Rm,Rn */
	r1 = R32(r1); UPD(0x0C0B148Cu, 1);  /* 0C0B148A mov.l @Rm,Rn */
	W32(r14 + 0x4u, r1); UPD(0x0C0B148Eu, 1);  /* 0C0B148C mov.l Rm,@(disp,Rn) */
	r1 = R32(r14 + 0x4u); UPD(0x0C0B1490u, 1);  /* 0C0B148E mov.l @(disp,Rm),Rn */
	r1 += 0x1u;  /* 0C0B1490 add #imm,Rn */
	W32(r14 + 0x4u, r1); UPD(0x0C0B1494u, 2);  /* 0C0B1492 mov.l Rm,@(disp,Rn) */
L_0C0B1494: BLKS(0x0C0B1494u);
	r1 = 0xC21717Cu; UPD(0x0C0B1496u, 1);  /* 0C0B1494 mov.l @(disp,pc),Rn */
	r2 = R32(r14 + 0x4u); UPD(0x0C0B1498u, 1);  /* 0C0B1496 mov.l @(disp,Rm),Rn */
	r1 = R32(r1 + 0x4u); UPD(0x0C0B149Au, 1);  /* 0C0B1498 mov.l @(disp,Rm),Rn */
	T = (s32)r2 >= (s32)r1;  /* 0C0B149A cmp/ge Rm,Rn */
	if (!T) { UPD(0x0C0B14B0u, 4); goto L_0C0B14B0; }  /* 0C0B149C bf */
L_0C0B149E: BLKS(0x0C0B149Eu);
	{ IF(0x0C0B14A0u); ; /* slot nop */ UPD(0x0C0B1500u, 3); goto L_0C0B1500; }  /* 0C0B149E bra */
L_0C0B14B0: BLKS(0x0C0B14B0u);
	r1 = R32(r14 + 0x4u); UPD(0x0C0B14B2u, 1);  /* 0C0B14B0 mov.l @(disp,Rm),Rn */
	W32(r14 + 0x10u, r1); UPD(0x0C0B14B4u, 1);  /* 0C0B14B2 mov.l Rm,@(disp,Rn) */
	r1 = R32(r14 + 0x10u); UPD(0x0C0B14B6u, 1);  /* 0C0B14B4 mov.l @(disp,Rm),Rn */
	IF(0x0C0B14B6u); T = (s32)r1 >= 0;  /* 0C0B14B6 cmp/pz Rn */
	if (T) { UPD(0x0C0B14C0u, 4); goto L_0C0B14C0; }  /* 0C0B14B8 bt */
L_0C0B14BA: BLKS(0x0C0B14BAu);
	r1 = R32(r14 + 0x10u); UPD(0x0C0B14BCu, 1);  /* 0C0B14BA mov.l @(disp,Rm),Rn */
	r1 += 0x7u;  /* 0C0B14BC add #imm,Rn */
	W32(r14 + 0x10u, r1); UPD(0x0C0B14C0u, 2);  /* 0C0B14BE mov.l Rm,@(disp,Rn) */
L_0C0B14C0: BLKS(0x0C0B14C0u);
	r1 = R32(r14 + 0x10u); UPD(0x0C0B14C2u, 1);  /* 0C0B14C0 mov.l @(disp,Rm),Rn */
	IF(0x0C0B14C2u); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C0B14C2 shar Rn */
	IF(0x0C0B14C4u); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C0B14C4 shar Rn */
	IF(0x0C0B14C6u); T = r1 & 1; r1 = (u32)((s32)r1 >> 1);  /* 0C0B14C6 shar Rn */
	W32(r14 + 0x8u, r1); UPD(0x0C0B14CAu, 4);  /* 0C0B14C8 mov.l Rm,@(disp,Rn) */
	r0 = R32(r14 + 0x4u); UPD(0x0C0B14CCu, 1);  /* 0C0B14CA mov.l @(disp,Rm),Rn */
	r0 &= 0x7u;  /* 0C0B14CC and #imm,r0 */
	W32(r14 + 0xCu, r0); UPD(0x0C0B14D0u, 2);  /* 0C0B14CE mov.l Rm,@(disp,Rn) */
	r1 = 0xC1F60E4u; UPD(0x0C0B14D2u, 1);  /* 0C0B14D0 mov.l @(disp,pc),Rn */
	r2 = R32(r1); UPD(0x0C0B14D4u, 1);  /* 0C0B14D2 mov.l @Rm,Rn */
	r1 = R32(r14 + 0x8u); UPD(0x0C0B14D6u, 1);  /* 0C0B14D4 mov.l @(disp,Rm),Rn */
	r1 += r2;  /* 0C0B14D6 add Rm,Rn */
	r1 = (u32)(s32)(s8)R8(r1); UPD(0x0C0B14DAu, 2);  /* 0C0B14D8 mov.b @Rm,Rn */
	r2 = r1 & 0xFF;  /* 0C0B14DA extu.b Rm,Rn */
	r1 = R32(r14 + 0xCu); UPD(0x0C0B14DEu, 2);  /* 0C0B14DC mov.l @(disp,Rm),Rn */
	r1 = 0u - r1;  /* 0C0B14DE neg Rm,Rn */
	r0 = r2;  /* 0C0B14E0 mov Rm,Rn */
	IF(0x0C0B14E2u); ARG0(0x401Cu); { s32 s_ = (s32)r1; if (s_ >= 0) r0 <<= (s_ & 31); else if ((s_ & 31) == 0) r0 = (u32)((s32)r0 >> 31); else r0 = (u32)((s32)r0 >> ((~s_ & 31) + 1)); }  /* 0C0B14E2 shad Rm,Rn */
	r0 &= 0x1u;  /* 0C0B14E4 and #imm,r0 */
	T = (r0 & r0) == 0;  /* 0C0B14E6 tst Rm,Rn */
	if (T) { UPD(0x0C0B14F0u, 8); goto L_0C0B14F0; }  /* 0C0B14E8 bt */
L_0C0B14EA: BLKS(0x0C0B14EAu);
	{ IF(0x0C0B14ECu); ; /* slot nop */ UPD(0x0C0B1500u, 3); goto L_0C0B1500; }  /* 0C0B14EA bra */
L_0C0B14F0: BLKS(0x0C0B14F0u);
	r1 = R32(r14 + 0x4u); UPD(0x0C0B14F2u, 1);  /* 0C0B14F0 mov.l @(disp,Rm),Rn */
	r1 += 0x1u;  /* 0C0B14F2 add #imm,Rn */
	W32(r14 + 0x4u, r1); UPD(0x0C0B14F6u, 2);  /* 0C0B14F4 mov.l Rm,@(disp,Rn) */
	{ IF(0x0C0B14F8u); ; /* slot nop */ UPD(0x0C0B1494u, 3); goto L_0C0B1494; }  /* 0C0B14F6 bra */
L_0C0B1500: BLKS(0x0C0B1500u);
	r2 = R32(r14); UPD(0x0C0B1502u, 1);  /* 0C0B1500 mov.l @Rm,Rn */
	r1 = R32(r14 + 0x4u); UPD(0x0C0B1504u, 1);  /* 0C0B1502 mov.l @(disp,Rm),Rn */
	W32(r2, r1); UPD(0x0C0B1506u, 1);  /* 0C0B1504 mov.l Rm,@Rn */
	r1 = 0xC21717Cu; UPD(0x0C0B1508u, 1);  /* 0C0B1506 mov.l @(disp,pc),Rn */
	r2 = R32(r14 + 0x4u); UPD(0x0C0B150Au, 1);  /* 0C0B1508 mov.l @(disp,Rm),Rn */
	r1 = R32(r1 + 0x4u); UPD(0x0C0B150Cu, 1);  /* 0C0B150A mov.l @(disp,Rm),Rn */
	T = (s32)r1 > (s32)r2;  /* 0C0B150C cmp/gt Rm,Rn */
	IF(0x0C0B150Eu); r1 = T;  /* 0C0B150E movt Rn */
	r0 = r1;  /* 0C0B1510 mov Rm,Rn */
	r14 += 0x14u;  /* 0C0B1512 add #imm,Rn */
	r15 = r14;  /* 0C0B1514 mov Rm,Rn */
	{ u32 v_ = R32(r15); r15 += 4; r14 = v_; } UPD(0x0C0B1518u, 6);  /* 0C0B1516 mov.l @Rm+,Rn */
	IF(0x0C0B1518u); { u32 t_ = PR; IF(0x0C0B151Au); ; /* slot nop */ UPD(t_, 3); RET(t_); }  /* 0C0B1518 rts */
}

void f_0C181E24(sh3_t *c)
{
	LOCALS;
L_0C181E24: BLKS(0x0C181E24u);
	IF(0x0C181E24u); { u32 t_ = PR; r8 = 0xECEC2727u; /* slot mov.l @(disp,pc),Rn */ UPD(t_, 3); RET(t_); }  /* 0C181E24 rts */
}

void f_0C181E7E(sh3_t *c)
{
	LOCALS;
L_0C181E7E: BLKS(0x0C181E7Eu);
	IF(0x0C181E7Eu); { u32 t_ = PR; r8 = 0xECEC2727u; /* slot mov.l @(disp,pc),Rn */ UPD(t_, 3); RET(t_); }  /* 0C181E7E rts */
}

void f_0C181ED8(sh3_t *c)
{
	LOCALS;
L_0C181ED8: BLKS(0x0C181ED8u);
	IF(0x0C181ED8u); { u32 t_ = PR; r8 = 0x93850u; /* slot mov.l @(disp,pc),Rn */ UPD(t_, 3); RET(t_); }  /* 0C181ED8 rts */
}

void f_0C181F32(sh3_t *c)
{
	LOCALS;
L_0C181F32: BLKS(0x0C181F32u);
	IF(0x0C181F32u); { u32 t_ = PR; r8 = 0xAD828u; /* slot mov.l @(disp,pc),Rn */ UPD(t_, 3); RET(t_); }  /* 0C181F32 rts */
}

void f_0C181F8C(sh3_t *c)
{
	LOCALS;
L_0C181F8C: BLKS(0x0C181F8Cu);
	IF(0x0C181F8Cu); { u32 t_ = PR; r8 = 0x2F2F0000u; /* slot mov.l @(disp,pc),Rn */ UPD(t_, 3); RET(t_); }  /* 0C181F8C rts */
}

void f_0C181FE6(sh3_t *c)
{
	LOCALS;
L_0C181FE6: BLKS(0x0C181FE6u);
	IF(0x0C181FE6u); { u32 t_ = PR; r8 = 0x2F2F0000u; /* slot mov.l @(disp,pc),Rn */ UPD(t_, 3); RET(t_); }  /* 0C181FE6 rts */
}

void f_0C18225C(sh3_t *c)
{
	LOCALS;
L_0C18225C: BLKS(0x0C18225Cu);
	IF(0x0C18225Cu); { u32 t_ = PR; T = r0 == 0x0u; /* slot cmp/eq #imm,r0 */ UPD(t_, 3); RET(t_); }  /* 0C18225C rts */
}

void f_0C1822B6(sh3_t *c)
{
	LOCALS;
L_0C1822B6: BLKS(0x0C1822B6u);
	IF(0x0C1822B6u); { u32 t_ = PR; T = r0 == 0x28u; /* slot cmp/eq #imm,r0 */ UPD(t_, 3); RET(t_); }  /* 0C1822B6 rts */
}

void f_0C182310(sh3_t *c)
{
	LOCALS;
L_0C182310: BLKS(0x0C182310u);
	IF(0x0C182310u); { u32 t_ = PR; T = r0 == 0x50u; /* slot cmp/eq #imm,r0 */ UPD(t_, 3); RET(t_); }  /* 0C182310 rts */
}

void f_0C18236A(sh3_t *c)
{
	LOCALS;
L_0C18236A: BLKS(0x0C18236Au);
	IF(0x0C18236Au); { u32 t_ = PR; T = r0 == 0x78u; /* slot cmp/eq #imm,r0 */ UPD(t_, 3); RET(t_); }  /* 0C18236A rts */
}

void f_0C1823C4(sh3_t *c)
{
	LOCALS;
L_0C1823C4: BLKS(0x0C1823C4u);
	IF(0x0C1823C4u); { u32 t_ = PR; T = r0 == 0xFFFFFFA0u; /* slot cmp/eq #imm,r0 */ UPD(t_, 3); RET(t_); }  /* 0C1823C4 rts */
}

void f_0C18A622(sh3_t *c)
{
	LOCALS;
L_0C18A622: BLKS(0x0C18A622u);
	IF(0x0C18A622u); { u32 t_ = PR; r8 = 0x6757u; /* slot mov.w @(disp,pc),Rn */ UPD(t_, 3); RET(t_); }  /* 0C18A622 rts */
}

void f_0C18A62C(sh3_t *c)
{
	LOCALS;
L_0C18A62C: BLKS(0x0C18A62Cu);
	IF(0x0C18A62Cu); { u32 t_ = PR; r8 = 0x3058u; /* slot mov.w @(disp,pc),Rn */ UPD(t_, 3); RET(t_); }  /* 0C18A62C rts */
}

void f_0C18A636(sh3_t *c)
{
	LOCALS;
L_0C18A636: BLKS(0x0C18A636u);
	IF(0x0C18A636u); { u32 t_ = PR; T = r0 == r0; /* slot cmp/eq Rm,Rn */ UPD(t_, 3); RET(t_); }  /* 0C18A636 rts */
}

void f_0C18A640(sh3_t *c)
{
	LOCALS;
L_0C18A640: BLKS(0x0C18A640u);
	IF(0x0C18A640u); { u32 t_ = PR; r0 -= r5; /* slot sub Rm,Rn */ UPD(t_, 3); RET(t_); }  /* 0C18A640 rts */
}

void f_0C18A848(sh3_t *c)
{
	LOCALS;
L_0C18A848: BLKS(0x0C18A848u);
	IF(0x0C18A848u); { u32 t_ = PR; r0 = (u32)(s32)(s8)R8(r11); /* slot mov.b @Rm,Rn */ UPD(t_, 3); RET(t_); }  /* 0C18A848 rts */
}

void f_0C18A852(sh3_t *c)
{
	LOCALS;
L_0C18A852: BLKS(0x0C18A852u);
	IF(0x0C18A852u); { u32 t_ = PR; W32(r0 + 0x0u, r11); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); RET(t_); }  /* 0C18A852 rts */
}

void f_0C194DDA(sh3_t *c)
{
	LOCALS;
L_0C194DDA: BLKS(0x0C194DDAu);
	IF(0x0C194DDAu); { u32 t_ = PR; W32(r0 + 0x0u, r11); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); RET(t_); }  /* 0C194DDA rts */
}

void f_0C195558(sh3_t *c)
{
	LOCALS;
L_0C195558: BLKS(0x0C195558u);
	IF(0x0C195558u); { u32 t_ = PR; IF(0x0C19555Au); T = r0 >> 31; r0 <<= 1; /* slot shll Rn */ UPD(t_, 3); RET(t_); }  /* 0C195558 rts */
}

void f_0C19624C(sh3_t *c)
{
	LOCALS;
L_0C19624C: BLKS(0x0C19624Cu);
	IF(0x0C19624Cu); { u32 t_ = PR; T = (r0 & 0x0u) == 0; /* slot tst #imm,r0 */ UPD(t_, 3); RET(t_); }  /* 0C19624C rts */
}

void f_0C196256(sh3_t *c)
{
	LOCALS;
L_0C196256: BLKS(0x0C196256u);
	IF(0x0C196256u); { u32 t_ = PR; T = (r0 & 0x30u) == 0; /* slot tst #imm,r0 */ UPD(t_, 3); RET(t_); }  /* 0C196256 rts */
}

void f_0C196260(sh3_t *c)
{
	LOCALS;
L_0C196260: BLKS(0x0C196260u);
	IF(0x0C196260u); { u32 t_ = PR; T = (r0 & 0x60u) == 0; /* slot tst #imm,r0 */ UPD(t_, 3); RET(t_); }  /* 0C196260 rts */
}

void f_0C19626A(sh3_t *c)
{
	LOCALS;
L_0C19626A: BLKS(0x0C19626Au);
	IF(0x0C19626Au); { u32 t_ = PR; T = (r0 & 0x90u) == 0; /* slot tst #imm,r0 */ UPD(t_, 3); RET(t_); }  /* 0C19626A rts */
}

void f_0C196274(sh3_t *c)
{
	LOCALS;
L_0C196274: BLKS(0x0C196274u);
	IF(0x0C196274u); { u32 t_ = PR; T = (r0 & 0xC0u) == 0; /* slot tst #imm,r0 */ UPD(t_, 3); RET(t_); }  /* 0C196274 rts */
}

void f_0C19627E(sh3_t *c)
{
	LOCALS;
L_0C19627E: BLKS(0x0C19627Eu);
	IF(0x0C19627Eu); { u32 t_ = PR; r0 = 0x372Fu; /* slot mov.w @(disp,pc),Rn */ UPD(t_, 3); RET(t_); }  /* 0C19627E rts */
}

void f_0C196288(sh3_t *c)
{
	LOCALS;
L_0C196288: BLKS(0x0C196288u);
	IF(0x0C196288u); { u32 t_ = PR; r0 = 0x2030u; /* slot mov.w @(disp,pc),Rn */ UPD(t_, 3); RET(t_); }  /* 0C196288 rts */
}

void f_0C196292(sh3_t *c)
{
	LOCALS;
L_0C196292: BLKS(0x0C196292u);
	IF(0x0C196292u); { u32 t_ = PR; r0 = 0x0u; /* slot mov.w @(disp,pc),Rn */ UPD(t_, 3); RET(t_); }  /* 0C196292 rts */
}

void f_0C19629C(sh3_t *c)
{
	LOCALS;
L_0C19629C: BLKS(0x0C19629Cu);
	IF(0x0C19629Cu); { u32 t_ = PR; r0 = 0xFFFFE4E8u; /* slot mov.w @(disp,pc),Rn */ UPD(t_, 3); RET(t_); }  /* 0C19629C rts */
}

void f_0C1962A6(sh3_t *c)
{
	LOCALS;
L_0C1962A6: BLKS(0x0C1962A6u);
	IF(0x0C1962A6u); { u32 t_ = PR; r0 = 0x13u; /* slot mov.w @(disp,pc),Rn */ UPD(t_, 3); RET(t_); }  /* 0C1962A6 rts */
}

void f_0C1962B0(sh3_t *c)
{
	LOCALS;
L_0C1962B0: BLKS(0x0C1962B0u);
	IF(0x0C1962B0u); { u32 t_ = PR; r8 = R32(r0 + 0x0u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); RET(t_); }  /* 0C1962B0 rts */
}

void f_0C1962BA(sh3_t *c)
{
	LOCALS;
L_0C1962BA: BLKS(0x0C1962BAu);
	IF(0x0C1962BAu); { u32 t_ = PR; r8 = R32(r3 + 0x0u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); RET(t_); }  /* 0C1962BA rts */
}

void f_0C1962C4(sh3_t *c)
{
	LOCALS;
L_0C1962C4: BLKS(0x0C1962C4u);
	IF(0x0C1962C4u); { u32 t_ = PR; r8 = R32(r6 + 0x0u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); RET(t_); }  /* 0C1962C4 rts */
}

void f_0C1962CE(sh3_t *c)
{
	LOCALS;
L_0C1962CE: BLKS(0x0C1962CEu);
	IF(0x0C1962CEu); { u32 t_ = PR; r8 = R32(r9 + 0x0u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); RET(t_); }  /* 0C1962CE rts */
}

void f_0C1962D8(sh3_t *c)
{
	LOCALS;
L_0C1962D8: BLKS(0x0C1962D8u);
	IF(0x0C1962D8u); { u32 t_ = PR; r8 = R32(r12 + 0x0u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); RET(t_); }  /* 0C1962D8 rts */
}

void f_0C1962E2(sh3_t *c)
{
	LOCALS;
L_0C1962E2: BLKS(0x0C1962E2u);
	IF(0x0C1962E2u); { u32 t_ = PR; W8(r0, r0); /* slot mov.b Rm,@Rn */ UPD(t_, 3); RET(t_); }  /* 0C1962E2 rts */
}

void f_0C1962F6(sh3_t *c)
{
	LOCALS;
L_0C1962F6: BLKS(0x0C1962F6u);
	IF(0x0C1962F6u); { u32 t_ = PR; W8(r0, r6); /* slot mov.b Rm,@Rn */ UPD(t_, 3); RET(t_); }  /* 0C1962F6 rts */
}

void f_0C196300(sh3_t *c)
{
	LOCALS;
L_0C196300: BLKS(0x0C196300u);
	IF(0x0C196300u); { u32 t_ = PR; W8(r0, r9); /* slot mov.b Rm,@Rn */ UPD(t_, 3); RET(t_); }  /* 0C196300 rts */
}

void f_0C19630A(sh3_t *c)
{
	LOCALS;
L_0C19630A: BLKS(0x0C19630Au);
	IF(0x0C19630Au); { u32 t_ = PR; W8(r0, r12); /* slot mov.b Rm,@Rn */ UPD(t_, 3); RET(t_); }  /* 0C19630A rts */
}

void f_0C19970E(sh3_t *c)
{
	LOCALS;
L_0C19970E: BLKS(0x0C19970Eu);
	IF(0x0C19970Eu); { u32 t_ = PR; r0 = (u32)(s32)(s8)R8(r0); /* slot mov.b @Rm,Rn */ UPD(t_, 3); RET(t_); }  /* 0C19970E rts */
}


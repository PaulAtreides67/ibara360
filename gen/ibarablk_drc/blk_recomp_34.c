#include "recomp.h"
#include "blk_recomp_funcs.h"

void blk_f_0C1E3D04(sh3_t *c)
{
	LOCALS;
L_0C1E3D04: BLKS(0x0C1E3D04u);
	IF(0x0C1E3D04u); { u32 t_ = PR; W8(r6 + 0x0u, r0); /* slot mov.b r0,@(disp,Rn) */ UPD(t_, 3); RET(t_); }  /* 0C1E3D04 rts */
}

void blk_f_0C1E3D0E(sh3_t *c)
{
	LOCALS;
L_0C1E3D0E: BLKS(0x0C1E3D0Eu);
	IF(0x0C1E3D0Eu); { u32 t_ = PR; W8(r9 + 0x0u, r0); /* slot mov.b r0,@(disp,Rn) */ UPD(t_, 3); RET(t_); }  /* 0C1E3D0E rts */
}

void blk_f_0C1E3D18(sh3_t *c)
{
	LOCALS;
L_0C1E3D18: BLKS(0x0C1E3D18u);
	IF(0x0C1E3D18u); { u32 t_ = PR; r8 = R32(r0 + 0x0u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); RET(t_); }  /* 0C1E3D18 rts */
}

void blk_f_0C1E3D22(sh3_t *c)
{
	LOCALS;
L_0C1E3D22: BLKS(0x0C1E3D22u);
	IF(0x0C1E3D22u); { u32 t_ = PR; r8 = R32(r3 + 0x0u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); RET(t_); }  /* 0C1E3D22 rts */
}

void blk_f_0C1E3D2C(sh3_t *c)
{
	LOCALS;
L_0C1E3D2C: BLKS(0x0C1E3D2Cu);
	IF(0x0C1E3D2Cu); { u32 t_ = PR; r8 = R32(r6 + 0x0u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); RET(t_); }  /* 0C1E3D2C rts */
}

void blk_f_0C1E3D36(sh3_t *c)
{
	LOCALS;
L_0C1E3D36: BLKS(0x0C1E3D36u);
	IF(0x0C1E3D36u); { u32 t_ = PR; r8 = R32(r9 + 0x0u); /* slot mov.l @(disp,Rm),Rn */ UPD(t_, 3); RET(t_); }  /* 0C1E3D36 rts */
}

void blk_f_0C1E658C(sh3_t *c)
{
	LOCALS;
L_0C1E658C: BLKS(0x0C1E658Cu);
	IF(0x0C1E658Cu); { u32 t_ = PR; r0 = (u32)(s32)(s8)R8(r0); /* slot mov.b @Rm,Rn */ UPD(t_, 3); RET(t_); }  /* 0C1E658C rts */
}

void blk_f_0C1E6596(sh3_t *c)
{
	LOCALS;
L_0C1E6596: BLKS(0x0C1E6596u);
	IF(0x0C1E6596u); { u32 t_ = PR; r0 = (r6 & 0xFFFF0000u) | ((r6 & 0xFF) << 8) | ((r6 >> 8) & 0xFF); /* slot swap.b Rm,Rn */ UPD(t_, 3); RET(t_); }  /* 0C1E6596 rts */
}

void blk_f_0C1E65A0(sh3_t *c)
{
	LOCALS;
L_0C1E65A0: BLKS(0x0C1E65A0u);
	IF(0x0C1E65A0u); { u32 t_ = PR; W32(r0 + 0x0u, r0); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); RET(t_); }  /* 0C1E65A0 rts */
}

void blk_f_0C1E65AA(sh3_t *c)
{
	LOCALS;
L_0C1E65AA: BLKS(0x0C1E65AAu);
	IF(0x0C1E65AAu); { u32 t_ = PR; W32(r0 + 0x20u, r6); /* slot mov.l Rm,@(disp,Rn) */ UPD(t_, 3); RET(t_); }  /* 0C1E65AA rts */
}


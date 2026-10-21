/* One blitter draw routine, instantiated by blit_funcs.c with FUNCNAME, FLIPX, TINT,
 * TRANSPARENT, BLENDED, REALLY_SIMPLE, _SMODE, _DMODE set.
 * C port of MAME 0.289 cv1k_v_in.ipp (BSD-3-Clause, David Haywood); VRAM is 16-bit
 * ARGB1555 here instead of MAME's 32-bit expansion, which gives the same results. */

static void FUNCNAME(BLIT_PARAMS)
{
	int yf;
#if REALLY_SIMPLE == 0
	clr_t s_clr;
#endif
#if BLENDED == 1
	clr_t d_clr;
	clr_t clr0;
#endif
	u32 pen;
	u16 *bmp;

#if FLIPX == 1
	src_x += (dimx - 1);
#endif

	if (flipy) {
		yf = -1;
		src_y += (dimy - 1);
	} else {
		yf = +1;
	}

	int starty = 0;
	const int dst_y_end = dst_y_start + dimy;

	if (dst_y_start < clip->min_y)
		starty = clip->min_y - dst_y_start;

	if (dst_y_end > clip->max_y)
		dimy -= (dst_y_end - 1) - clip->max_y;

#if FLIPX == 1
	if ((src_x & 0x1fff) < ((src_x - (dimx - 1)) & 0x1fff))
		return;
#else
	if ((src_x & 0x1fff) > ((src_x + (dimx - 1)) & 0x1fff))
		return;
#endif

	int startx = 0;
	const int dst_x_end = dst_x_start + dimx;

	if (dst_x_start < clip->min_x)
		startx = clip->min_x - dst_x_start;

	if (dst_x_end > clip->max_x)
		dimx -= (dst_x_end - 1) - clip->max_x;

#if BLENDED == 1
#if _SMODE == 0
#if _DMODE == 0
	const u8 *salpha_table = colrtable[s_alpha];
	const u8 *dalpha_table = colrtable[d_alpha];
#endif
#if _DMODE == 5 || _DMODE == 1
	const u8 *salpha_table = colrtable[s_alpha];
#endif
#endif
#if _SMODE == 2
#if _DMODE == 0
	const u8 *dalpha_table = colrtable[d_alpha];
#endif
#endif
#endif

	/* band b of n draws only the destination rows with row % n == b */
	int y = starty;
	if (nbands > 1)
		y += (band - (int)((unsigned)(dst_y_start + y) % (unsigned)nbands) + nbands) % nbands;
	for (; y < dimy; y += nbands) {
		bmp = gfx + (s32)(dst_y_start + y) * CV1K_VRAM_STRIDE + dst_x_start + startx;
		const int ysrc_index = ((src_y + yf * y) & 0x0fff) * CV1K_VRAM_STRIDE;
		const u16 *gfx2 = gfx + ysrc_index;
#if FLIPX == 1
		gfx2 += (src_x - startx);
#else
		gfx2 += (src_x + startx);
#endif
		const u16 *end = bmp + (dimx - startx);
		while (bmp < end) {
#include "blit_pixel.inc"
		}
	}
	(void)pen;
}

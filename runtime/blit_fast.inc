/* One fast draw routine (blitter_fast >= 1), instantiated by blitter.c with FUNCNAME, FLIPX,
 * TRANSPARENT, KIND, BRANCHLESS, PREFETCH set. Same pixels as the MAME-style routines of
 * blit_in.inc; the clipping and band stepping are theirs, line for line.
 *   KIND 0: copy (not tinted, not blended)
 *   KIND 1: tinted, not blended: pen = t->f[0][r] | t->f[1][g] | t->f[2][b] (terms in pen position)
 *   KIND 2: blended, separable modes: per channel min(F(src) + G(dst), 31), the three channels
 *           in 6-bit lanes (b 0-5, g 6-11, r 12-17) of one word, saturated together
 * BRANCHLESS: transparent pixels write the destination back instead of skipping it (the mask
 *   is hidden from the optimizer, which otherwise turns the select back into a branch).
 * PREFETCH: touches the source and destination rows two band rows ahead. */

static void FUNCNAME(FAST_PARAMS)
{
	int yf;
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

	const int n = dimx - startx;
#if KIND == 1 || KIND == 2
	const u32 *const f0 = t->f[0], *const f1 = t->f[1], *const f2 = t->f[2];
#endif
#if KIND == 2
	const u32 *const g0 = t->g[0], *const g1 = t->g[1], *const g2 = t->g[2];
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
#if PREFETCH == 1
		if (y + 2 * nbands < dimy) {
			const char *pd = (const char *)(bmp + 2 * nbands * CV1K_VRAM_STRIDE);
			const char *ps = (const char *)(gfx + ((src_y + yf * (y + 2 * nbands)) & 0x0fff) * CV1K_VRAM_STRIDE);
#if FLIPX == 1
			ps += 2 * (src_x - startx - (n - 1));
#else
			ps += 2 * (src_x + startx);
#endif
			for (int o = 0; o < 2 * n + 127; o += 128) {
				__builtin_prefetch(ps + o, 0, 3);
				__builtin_prefetch(pd + o, 1, 3);
			}
		}
#endif
		const u16 *end = bmp + n;

#if KIND == 0 && FLIPX == 0 && TRANSPARENT == 0
		if (gfx2 >= end || bmp >= gfx2 + n) {    /* no overlap: same as the forward copy */
			memcpy(bmp, gfx2, (size_t)n * 2);
			continue;
		}
#endif
		while (bmp < end) {
			const u32 pen = *gfx2;
#if KIND == 0
#if TRANSPARENT == 1
#if BRANCHLESS == 1
			u32 m = 0u - (pen >> 15);
			BRANCHLESS_MASK(m);
			*bmp = (u16)((pen & m) | (*bmp & ~m));
#else
			if (pen & 0x8000)
				*bmp = (u16)pen;
#endif
#else
			*bmp = (u16)pen;
#endif

#elif KIND == 1
#if TRANSPARENT == 1 && BRANCHLESS == 0
			if (pen & 0x8000)
#endif
			{
				const u32 out = f0[(pen >> 10) & 31] | f1[(pen >> 5) & 31] | f2[pen & 31] | (pen & 0x8000);
#if TRANSPARENT == 1 && BRANCHLESS == 1
				u32 m = 0u - (pen >> 15);
				BRANCHLESS_MASK(m);
				*bmp = (u16)((out & m) | (*bmp & ~m));
#else
				*bmp = (u16)out;
#endif
			}

#else /* KIND 2 */
#if TRANSPARENT == 1 && BRANCHLESS == 0
			if (pen & 0x8000)
#endif
			{
				const u32 d = *bmp;
				u32 s = f0[(pen >> 10) & 31] + f1[(pen >> 5) & 31] + f2[pen & 31] +
					g0[(d >> 10) & 31] + g1[(d >> 5) & 31] + g2[d & 31];
				const u32 ov = s & 0x20820;
				s = (s | (ov - (ov >> 5))) & 0x1f7df;
				const u32 out = ((s >> 2) & 0x7c00) | ((s >> 1) & 0x3e0) | (s & 0x1f) | (pen & 0x8000);
#if TRANSPARENT == 1 && BRANCHLESS == 1
				u32 m = 0u - (pen >> 15);
				BRANCHLESS_MASK(m);
				*bmp = (u16)((out & m) | (d & ~m));
#else
				*bmp = (u16)out;
#endif
			}
#endif
			bmp++;
#if FLIPX == 1
			gfx2--;
#else
			gfx2++;
#endif
		}
	}
}

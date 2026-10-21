/* Inner per-pixel step. C port of MAME 0.289 cv1k_v_pixel.ipp (BSD-3-Clause).
 * Pixels are ARGB1555 with the transparency/opaque bit at 0x8000. */

#if REALLY_SIMPLE == 1

#if TRANSPARENT == 1
			pen = *gfx2;
			if (pen & 0x8000)
				*bmp = (u16)pen;
#else
			*bmp = *gfx2;
#endif

#else /* not REALLY_SIMPLE */

			pen = *gfx2;
#if TRANSPARENT == 1
			if (pen & 0x8000) {
#endif
			PEN_TO_CLR(pen, s_clr);
#if TINT == 1
			CLR_MUL(s_clr, tint_clr);
#endif

#if BLENDED == 1
			PEN_TO_CLR(*bmp, d_clr);
#if _SMODE == 0
#if _DMODE == 0
			s_clr.r = colrtable_add[salpha_table[s_clr.r]][dalpha_table[d_clr.r]];
			s_clr.g = colrtable_add[salpha_table[s_clr.g]][dalpha_table[d_clr.g]];
			s_clr.b = colrtable_add[salpha_table[s_clr.b]][dalpha_table[d_clr.b]];
#elif _DMODE == 1
			s_clr.r = colrtable_add[salpha_table[s_clr.r]][colrtable[s_clr.r][d_clr.r]];
			s_clr.g = colrtable_add[salpha_table[s_clr.g]][colrtable[s_clr.g][d_clr.g]];
			s_clr.b = colrtable_add[salpha_table[s_clr.b]][colrtable[s_clr.b][d_clr.b]];
#elif _DMODE == 2
			CLR_MUL_FIXED(clr0, s_alpha, s_clr);
			CLR_ADD_WITH_SQUARE(s_clr, clr0, d_clr);
#elif _DMODE == 3
			CLR_MUL_FIXED(clr0, s_alpha, s_clr);
			CLR_ADD(s_clr, clr0, d_clr);
#elif _DMODE == 4
			CLR_MUL_FIXED(clr0, s_alpha, s_clr);
			CLR_ADD_WITH_MUL_FIXED_REV(s_clr, clr0, d_alpha, d_clr);
#elif _DMODE == 5
			s_clr.r = colrtable_add[salpha_table[s_clr.r]][colrtable_rev[s_clr.r][d_clr.r]];
			s_clr.g = colrtable_add[salpha_table[s_clr.g]][colrtable_rev[s_clr.g][d_clr.g]];
			s_clr.b = colrtable_add[salpha_table[s_clr.b]][colrtable_rev[s_clr.b][d_clr.b]];
#elif _DMODE == 6
			CLR_MUL_FIXED(clr0, s_alpha, s_clr);
			CLR_ADD_WITH_MUL_REV_SQUARE(s_clr, clr0, d_clr);
#elif _DMODE == 7
			CLR_MUL_FIXED(clr0, s_alpha, s_clr);
			CLR_ADD(s_clr, clr0, d_clr);
#endif
#elif _SMODE == 1
			CLR_SQUARE(clr0, s_clr);
#elif _SMODE == 2
#if _DMODE == 0
			s_clr.r = colrtable_add[colrtable[d_clr.r][s_clr.r]][dalpha_table[d_clr.r]];
			s_clr.g = colrtable_add[colrtable[d_clr.g][s_clr.g]][dalpha_table[d_clr.g]];
			s_clr.b = colrtable_add[colrtable[d_clr.b][s_clr.b]][dalpha_table[d_clr.b]];
#elif _DMODE == 1
			CLR_MUL_3PARAM(clr0, s_clr, d_clr);
			CLR_ADD_WITH_MUL_3PARAM(s_clr, clr0, d_clr, s_clr);
#elif _DMODE == 2
			CLR_MUL_3PARAM(clr0, s_clr, d_clr);
			CLR_ADD_WITH_SQUARE(s_clr, clr0, d_clr);
#elif _DMODE == 3
			CLR_MUL_3PARAM(clr0, s_clr, d_clr);
			CLR_ADD(s_clr, clr0, d_clr);
#elif _DMODE == 4
			CLR_MUL_3PARAM(clr0, s_clr, d_clr);
			CLR_ADD_WITH_MUL_FIXED_REV(s_clr, clr0, d_alpha, d_clr);
#elif _DMODE == 5
			CLR_MUL_3PARAM(clr0, s_clr, d_clr);
			CLR_ADD_WITH_MUL_REV_3PARAM(s_clr, clr0, d_clr, s_clr);
#elif _DMODE == 6
			CLR_MUL_3PARAM(clr0, s_clr, d_clr);
			CLR_ADD_WITH_MUL_REV_SQUARE(s_clr, clr0, d_clr);
#elif _DMODE == 7
			CLR_MUL_3PARAM(clr0, s_clr, d_clr);
			CLR_ADD(s_clr, clr0, d_clr);
#endif
#elif _SMODE == 3
			clr0 = s_clr;
#elif _SMODE == 4
			CLR_MUL_FIXED_REV(clr0, s_alpha, s_clr);
#elif _SMODE == 5
			CLR_MUL_REV_SQUARE(clr0, s_clr);
#elif _SMODE == 6
			CLR_MUL_REV_3PARAM(clr0, s_clr, d_clr);
#elif _SMODE == 7
			clr0 = s_clr;
#endif

#if _SMODE != 2 && _SMODE != 0
#if _DMODE == 0
			CLR_ADD_WITH_MUL_FIXED(s_clr, clr0, d_alpha, d_clr);
#elif _DMODE == 1
			CLR_ADD_WITH_MUL_3PARAM(s_clr, clr0, d_clr, s_clr);
#elif _DMODE == 2
			CLR_ADD_WITH_SQUARE(s_clr, clr0, d_clr);
#elif _DMODE == 3
			CLR_ADD(s_clr, clr0, d_clr);
#elif _DMODE == 4
			CLR_ADD_WITH_MUL_FIXED_REV(s_clr, clr0, d_alpha, d_clr);
#elif _DMODE == 5
			CLR_ADD_WITH_MUL_REV_3PARAM(s_clr, clr0, d_clr, s_clr);
#elif _DMODE == 6
			CLR_ADD_WITH_MUL_REV_SQUARE(s_clr, clr0, d_clr);
#elif _DMODE == 7
			CLR_ADD(s_clr, clr0, d_clr);
#endif
#endif
#endif /* BLENDED */

			*bmp = (u16)(CLR_TO_PEN(s_clr) | (pen & 0x8000));
#if TRANSPARENT == 1
			}
#endif

#endif /* REALLY_SIMPLE */

			bmp++;
#if FLIPX == 1
			gfx2--;
#else
			gfx2++;
#endif

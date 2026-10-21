/* Test 17b: the goal 16 timing experiments' penalty scales as whole tenths (runtime/pcb.c; test
 * 27: hundredths, test 32: thousandths). Its own header, so the generated code (which includes
 * pcb.h) does not rebuild for it. */
#ifndef PCBX_H
#define PCBX_H

/* Test 26: the timing models (pcb_timing_fit(on) = FIT or MAME); also in recordings' "# timing"
 * lines as mame / fit / fitplus. Test 27: fitplus2 = FIT+ retuned to ~2.9% (user 2026-10-20:
 * "6.0% is too slow"); fitplus stays test 26's x1.9 so its recordings replay. Test 28: fitplus3
 * = FIT+ at ~3.0% (user 2026-10-20); fitplus2 stays x1.55 for test 27's recordings. Test 29:
 * fitplus4 = FIT+ at ~3.05% (x1.58); fitplus3 stays x1.57. Test 30: fitplus5 = FIT+ at ~3.17%
 * (x1.60); fitplus4 stays x1.58. Test 31: fitplus6 = FIT+ at ~3.97% (x1.73); fitplus5 stays
 * x1.60. Test 32: fitplus7 = FIT+ at ~3.75% (x1.694); fitplus6 stays x1.73 */
#define PCB_MODEL_MAME 0
#define PCB_MODEL_FIT 1
#define PCB_MODEL_FITPLUS 2
#define PCB_MODEL_FITPLUS2 3
#define PCB_MODEL_FITPLUS3 4
#define PCB_MODEL_FITPLUS4 5
#define PCB_MODEL_FITPLUS5 6
#define PCB_MODEL_FITPLUS6 7
#define PCB_MODEL_FITPLUS7 8
void pcb_timing_model(int m);

/* after changing pcbx_pen_scale, pcbx_fill_scale or pcbx_uw_scale (pcb_timing_fit calls it) */
void pcbx_prepare(void);

/* 1 = the double expressions for every scale (test 17's code, for an A/B of their cost on
 * the 360); 0 = the integer path wherever the scale is whole thousandths (and passes pcb.c's
 * check). Same results either way. */
extern int pcbx_dbl;

#endif

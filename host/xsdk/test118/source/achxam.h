/* achxam.h: test 105, the achievements to XAM (achxam.c). Game thread. */
#ifndef ACHXAM_H
#define ACHXAM_H

#include <stdint.h>

/* achievement id earned (achieve.h): written to the signed-in profile (queued until one is) */
void achx_earned(int id);

/* test 110: the XAM calls on a thread of their own on hardware_thread (0 = started; else they stay on the game
 * thread, as before test 110). Once, before the first achx_frame */
int achx_start(uint32_t hardware_thread);

/* every vblank: the profile looked for (its list read once, ach_have), the writes polled and started */
void achx_frame(void);

/* test 106: before a hand-off to another .xex: a write XAM is still doing finishes first (up to ms) */
void achx_finish(unsigned ms);

/* test 106: the Guide's toast position (ACHX_TOAST_N of them, 0 = BOTTOM LEFT, the default), its name, and a toast of
 * the title's own with text (the debug menu's ACHIEVEMENT TOAST row) */
#define ACHX_TOAST_N 9
void achx_toast_position(int pos);
const char *achx_toast_name(int pos);
void achx_toast_test(const char *text);

/* test 107: the TOAST row's RB: the kernel's display information logged, XAM's and the kernel's images dumped under
 * dev (romload_scan_device's root) for a local reading of where XAM sizes its toasts */
void achx_xam_probe(const char *dev);

/* test 109 (work/g109/xam/REPORT.md): XAM's cached display information logged (when = the log's tag), written for a
 * 1280x720 front buffer (step 1) and source rectangle (step 2; 1 = written), and put back (achx_finish does it too) */
void achx_xam_cache_log(const char *when);
int achx_xam_cache_fix(int step);
void achx_xam_cache_restore(void);
/* test 110 (work/g110/xam/REPORT.md): the cache fix is now route K, the kernel's display record's source rectangle
 * (achx_xam_cache_fix writes it, achx_xam_cache_restore puts it back); every vblank: written again once a second if
 * XAM changed it */
void achx_kdi_tick(void);

#endif

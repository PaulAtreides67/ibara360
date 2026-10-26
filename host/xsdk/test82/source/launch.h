/* Test 72 (user 2026-10-25: "split the two games into individual xex files and develop a new launcher"): one title
 * hands the console to another beside it with XAM's loader (xam_loader.S): the launcher ibara360.xex starts ibara.xex
 * or ibarablk.xex, a game's QUIT TO GAME SELECT starts the launcher again. The launch data says who launched and
 * which game, so the launcher comes back on that game's row without its title screen. */
#ifndef LAUNCH_H
#define LAUNCH_H

#include <stdint.h>

/* XAM, xam_loader.S (ordinals 0x1A4, 0x1A6-0x1A8; signatures as Xenia's xam_info.cc): LaunchTitle ends this title and
 * starts the image at the path; the launch data (up to a few KB) is kept for the title it starts. */
void XamLoaderLaunchTitle(const char *path, uint32_t flags);
uint32_t XamLoaderSetLaunchData(const void *data, uint32_t size);
uint32_t XamLoaderGetLaunchDataSize(uint32_t *size);
uint32_t XamLoaderGetLaunchData(void *data, uint32_t size);

/* Test 74: the path is "game:\name" (game: = the running .xex's folder), the one form test 73 proved on hardware both
 * ways (RetroArch 360's XLaunchNewImage("game:\core.xex")); test 72's "\Device\...\name" ended at the retail
 * dashboard. Test 73's other forms (the name only, XamLoaderLaunchTitleEx) were never tried and are gone. */
#define LAUNCH_DRIVE "game:\\"

#define LAUNCH_MAGIC 0x49423336u /* "IB36" */
#define LAUNCH_VERSION 3 /* test 73's 2 had the form */
enum { LAUNCH_BY_LAUNCHER = 1, LAUNCH_BY_GAME = 2 };
#define LAUNCHER_XEX "ibara360.xex"
#define LAUNCH_GAMES 3
#define LAUNCH_ARRANGE 2 /* test 77: ibaraarr.xex, the PS2 port's ARRANGE mode on ibara's set */
extern const char *const launch_xex[LAUNCH_GAMES]; /* "ibara.xex", "ibarablk.xex" (SET_IBARA, SET_IBARABLK), "ibaraarr.xex" */

struct launch_data {
	uint32_t magic, version;
	uint32_t by;     /* LAUNCH_BY_* */
	uint32_t game;   /* the game started (by the launcher) or left (by a game): SET_IBARA / SET_IBARABLK / LAUNCH_ARRANGE */
	uint32_t count;  /* launches in this chain (the log) */
	uint32_t pad[3];
};

/* the path of name beside this .xex (ExLoadedImageName's folder; a device path as the kernel gives it); 0 = made */
int launch_path(char *out, unsigned n, const char *name);

/* 1 when name is there beside this .xex */
int launch_exists(const char *name);

/* the launch data this title was started with: 0 = there, ours (magic and version), in d; -1 none or not ours (d
 * zeroed). Logs what it found. */
int launch_get(struct launch_data *d);

/* Ends this title for name beside it: the launch data set, flush(1) (the caller's log out to its file and the
 * network, ending in a hand-off), then the GPU, the display and the presenting given back to XAM (as xsdk's _exit),
 * then XamLoaderLaunchTitle(LAUNCH_DRIVE name, 0). The caller stops its sound and finishes its files first, and calls
 * this on the thread that presents, with nothing else drawing. Returns only if XAM's call returned (logged, flush(0):
 * the caller goes to the dashboard); the display is closed by then. */
void launch_go(const char *name, const struct launch_data *d, void (*flush)(int handoff));

#endif

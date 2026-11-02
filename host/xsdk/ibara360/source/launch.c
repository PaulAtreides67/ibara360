/* Test 72: one title starting another beside it (launch.h). Test 74: always "game:\name", test 73's form A. */
#include <stdio.h>
#include <string.h>

#include "xsdk/display.h"
#include "xsdk/gpu.h"
#include "xsdk/kernel.h"
#include "xsdk/log.h"
#include "xsdk/present.h"

#include "launch.h"

const char *const launch_xex[LAUNCH_GAMES] = {"ibara.xex", "ibarablk.xex", "ibaraarr.xex"}; /* test 77: ARRANGE */

int launch_path(char *out, unsigned n, const char *name)
{
	const char *img = ExLoadedImageName ? ExLoadedImageName : "";
	const char *cut = strrchr(img, '\\');
	unsigned dir;

	if (!cut)
		cut = strrchr(img, '/');
	if (!cut || !n)
		return -1;
	dir = (unsigned)(cut + 1 - img);
	if (dir + strlen(name) + 1 > n)
		return -1;
	memcpy(out, img, dir);
	strcpy(out + dir, name);
	return 0;
}

int launch_exists(const char *name)
{
	char p[260];
	FILE *f;
	char *c;

	if (launch_path(p, sizeof(p), name))
		return 0;
	for (c = p; *c; c++) /* romload.c's form for newlib's fopen: /Device/... */
		if (*c == '\\')
			*c = '/';
	f = fopen(p, "rb");
	if (!f)
		return 0;
	fclose(f);
	return 1;
}

int launch_get(struct launch_data *d)
{
	uint32_t size = 0, r;

	memset(d, 0, sizeof(*d));
	r = XamLoaderGetLaunchDataSize(&size);
	if (r != 0 || size == 0) {
		xsdk_log_write("LAUNCH: NO LAUNCH DATA (XAMLOADERGETLAUNCHDATASIZE %08X, SIZE %u)", (unsigned)r, (unsigned)size);
		return -1;
	}
	r = XamLoaderGetLaunchData(d, sizeof(*d));
	if (r != 0 || size < sizeof(*d) || d->magic != LAUNCH_MAGIC || d->version != LAUNCH_VERSION) {
		xsdk_log_write("LAUNCH: LAUNCH DATA NOT OURS (XAMLOADERGETLAUNCHDATA %08X, SIZE %u, MAGIC %08X VERSION %u)",
		               (unsigned)r, (unsigned)size, (unsigned)d->magic, (unsigned)d->version);
		memset(d, 0, sizeof(*d));
		return -1;
	}
	xsdk_log_write("LAUNCH: STARTED BY %s, GAME %u, LAUNCH %u OF THIS CHAIN; THIS XEX %s",
	               d->by == LAUNCH_BY_LAUNCHER ? "THE LAUNCHER" : d->by == LAUNCH_BY_GAME ? "A GAME" : "?",
	               (unsigned)d->game, (unsigned)d->count, ExLoadedImageName ? ExLoadedImageName : "(NONE)");
	return 0;
}

void launch_go(const char *name, const struct launch_data *d, void (*flush)(int handoff))
{
	char p[260];
	uint32_t r;

	snprintf(p, sizeof(p), LAUNCH_DRIVE "%s", name);
	r = XamLoaderSetLaunchData(d, sizeof(*d));
	xsdk_log_write("LAUNCH: LAUNCH DATA SET (%08X), BY %u GAME %u COUNT %u; NEXT XAMLOADERLAUNCHTITLE(\"%s\", 0)",
	               (unsigned)r, (unsigned)d->by, (unsigned)d->game, (unsigned)d->count, p);
	if (flush) /* the log's last lines out (the file, the network) while the title can still write them */
		flush(1);
	/* as xsdk's _exit (src/exit.c): the display and the GPU back to XAM before the title ends */
	xsdk_present_close();
	xsdk_display_close();
	(void)xsdk_gpu_close();
	XamLoaderLaunchTitle(p, 0);
	xsdk_log_write("LAUNCH: XAMLOADERLAUNCHTITLE RETURNED");
	if (flush)
		flush(0);
}

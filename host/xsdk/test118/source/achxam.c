/* achxam.c: test 105, achieve.c's achievements handed to XAM (test 104B's achprobe calls, proven on the console:
 * XUserWriteAchievements = XMsgStartIORequest(XGI 0xFB, 0x000B0008) overlapped; the profile's list from
 * XamUserCreateAchievementEnumerator + XamEnumerate). Game thread, once a vblank: one write at a time, the rest
 * queued; nobody signed in = they wait for a profile. The Guide shows its own toast for each (notifications on).
 * Test 110 (user: "small underrun when the bomba achievement unlocked"; ibara.log: XMsgStartIORequest returned 0x0
 * having done the profile write itself, the vblank 52.6 ms late, LOVES ME 74.3 ms): every XAM call (the profile
 * looked for, its list, the writes) on a thread of its own (achx_start); the game thread only queues the ids and
 * counts the vblanks (achx_frame), the worker acts on vblanks the game thread counted (achievements OFF = none) */
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>

#include "xsdk/kernel.h"
#include "xsdk/log.h"
#include "xsdk/thread.h"
#include "xsdk/xam.h"

#include "achieve.h"
#include "achxam.h"
#include "wgate.h"

/* imports/imports.txt (signatures: xenia-canary xam_msg.cc, xam_user.cc) */
uint32_t XMsgStartIORequest(uint32_t app, uint32_t message, XAM_OVERLAPPED *overlapped, void *buffer,
                            uint32_t buffer_bytes);
uint32_t XamUserCreateAchievementEnumerator(uint32_t title_id, uint32_t user_index, uint64_t xuid, uint32_t flags,
                                            uint32_t offset, uint32_t count, uint32_t *buffer_bytes, HANDLE *handle);
/* test 106 (xenia-canary xam_notify.cc; the XDK's XNOTIFYUI_POS_* bits, from memory: to be confirmed on the console):
 * where the Guide's toasts pop up, and a toast of the title's own (type 14, any user, priority 2, UTF-16 text; the
 * areas a 64-bit argument XAM reads from r5 whole, here a small constant) */
uint32_t XNotifyPositionUI(uint32_t position);
uint32_t XNotifyQueueUI(uint32_t type, uint32_t user_index, uint32_t areas, const uint16_t *text, void *context);

enum {
	XGI_APP = 0xFB,
	XGI_WRITE_ACHIEVEMENTS = 0x000B0008,
	DETAILS_STRINGS = 7,       /* XACHIEVEMENT_DETAILS_* 1 | 2 | 4 (achprobe's; its sizes below) */
	DETAIL_BYTES = 36,
	DETAIL_STRING_BYTES = 464,
	LIST_MAX = 48,              /* test 108: 33 achievements (was 32: the 33rd never read) */
	EARNED = 0x30000,          /* 0x20000 earned offline, 0x10000 online */
	USER_EVERY = 120,          /* vblanks between looks for a signed-in profile */
	QUEUE = 32,
	/* test 109 (test 108: a one-credit Harder clear wrote ARCADE COMPLETE, SILISTER SIMILIS, MARCH TO DEATH ROW and
	 * ARCADE 1CC on four vblanks in a row, every call 0x0 at once, and the profile got only the 2nd and the 4th): the
	 * console's XAM takes the request and reads it later, so the next write had already overwritten it. Each write
	 * now has its own buffers (a ring, a slot used again QUEUE writes later) and WRITE_GAP vblanks to itself */
	WRITE_GAP = 120,
};

typedef struct {
	uint32_t user_index;
	uint32_t achievement_id;
} UserAchievement;

typedef struct {
	uint32_t count;
	UserAchievement *achievements;
} WriteAchievements;

static uint32_t user = XSDK_XAM_USER_NONE;
static char gamertag[XSDK_XAM_GAMERTAG_BYTES];
static unsigned look;
/* XAM reads and writes these after the call that starts them returns (test 109: even when it returned 0x0 at once) */
static struct write_slot {
	XAM_OVERLAPPED overlapped;
	UserAchievement written;
	WriteAchievements request;
} slots[QUEUE];
static struct write_slot *cur = &slots[0];
static unsigned slot_n;
static int writing;
static unsigned write_look = -(unsigned)WRITE_GAP; /* look at the last write's start */
static int queue[QUEUE], queued;
/* test 110: game thread -> worker (achx_earned's ids) and worker -> game thread (the profile's earned ids, ach_have),
 * each a ring with one writer; lwsync between the data and the index */
static int in_ring[QUEUE];
static volatile unsigned in_head, in_tail;
static int have_ring[LIST_MAX];
static volatile unsigned have_n, have_taken;
static volatile unsigned vblanks; /* achx_frame's count, the worker's clock */
static volatile int worker_on, worker_quit;
static uint8_t list[LIST_MAX * (DETAIL_BYTES + DETAIL_STRING_BYTES)];

static uint32_t be32(const uint8_t *p)
{
	return (uint32_t)p[0] << 24 | (uint32_t)p[1] << 16 | (uint32_t)p[2] << 8 | p[3];
}

/* what the profile already has for ibara360: never written again (ach_have) */
static void read_profile(void)
{
	uint32_t bytes = 0, items = 0, have = 0;
	HANDLE handle = 0;
	uint32_t result = XamUserCreateAchievementEnumerator(0, user, 0, DETAILS_STRINGS, 0, LIST_MAX, &bytes, &handle);

	if (result != ERROR_SUCCESS) {
		xsdk_log_write("ACHIEVEMENTS: THE PROFILE'S LIST NOT READ (0x%08X)", (unsigned)result);
		return;
	}
	memset(list, 0, sizeof(list));
	result = bytes <= sizeof(list) ? XamEnumerate(handle, 0, list, bytes, &items, NULL) : 0x7Au;
	for (uint32_t i = 0; result == ERROR_SUCCESS && i < items && i < LIST_MAX; i++) {
		const uint8_t *d = list + i * DETAIL_BYTES;
		if (be32(d + 32) & EARNED) {
			if (have_n < LIST_MAX) { /* test 110: ach_have on the game thread (achx_frame) */
				have_ring[have_n] = (int)be32(d);
				__asm__ volatile("lwsync" ::: "memory");
				have_n = have_n + 1;
			}
			have++;
		}
	}
	NtClose(handle);
	xsdk_log_write("ACHIEVEMENTS: '%s' HAS %u OF %u (XamEnumerate 0x%08X, %u BYTES)", gamertag, (unsigned)have,
	               (unsigned)items, (unsigned)result, (unsigned)bytes);
}

static void find_user(void)
{
	const uint32_t was = user;

	(void)xsdk_xam_signed_in_user(&user, gamertag);
	if (user == was)
		return;
	if (user == XSDK_XAM_USER_NONE) {
		xsdk_log_write("ACHIEVEMENTS: NOBODY SIGNED IN (THEY WAIT FOR A PROFILE)");
		return;
	}
	xsdk_log_write("ACHIEVEMENTS: USER %u '%s' SIGNED IN", (unsigned)user, gamertag);
	read_profile();
}

static void poll_write(void)
{
	uint32_t result;

	if (!writing)
		return;
	result = xsdk_xam_wait(&cur->overlapped, 0, NULL);
	if (result == ERROR_IO_INCOMPLETE)
		return;
	writing = 0;
	xsdk_log_write("ACHIEVEMENTS: %s WRITTEN: 0x%08X (EXTENDED 0x%08X)", ach_name((int)cur->written.achievement_id),
	               (unsigned)result, (unsigned)cur->overlapped.extended_error);
}

static void start_write(void)
{
	uint32_t returned;
	const int id = queue[0];

	memmove(queue, queue + 1, (size_t)(queued - 1) * sizeof(queue[0]));
	queued--;
	cur = &slots[slot_n++ % QUEUE];
	write_look = look;
	cur->written = (UserAchievement){user, (uint32_t)id};
	cur->request = (WriteAchievements){1, &cur->written};
	xsdk_xam_prepare(&cur->overlapped);
	returned = xsdk_xam_returned(&cur->overlapped, XMsgStartIORequest(XGI_APP, XGI_WRITE_ACHIEVEMENTS,
	                             &cur->overlapped, &cur->request, sizeof(cur->request)));
	writing = returned == ERROR_IO_PENDING;
	if (!writing)
		xsdk_log_write("ACHIEVEMENTS: %s FOR USER %u: XMsgStartIORequest 0x%08X", ach_name(id), (unsigned)user,
		               (unsigned)returned);
}

/* test 106 (user: test 105's toast "is in a weird placement, move it somewhere else and make it bigger, but make
 * sure it doesn't obstruct the game"): the video shows it laid out for 640x480 in the front buffer's top left (at
 * 1080p: 250 x 65 pixels, centred at x 480 over the WEAPON gadget and the game's left edge). The debug menu's
 * ACHIEVEMENT TOAST row tries the positions and shows a test toast; the left column lands on the left gadgets */
enum { POS_TOP = 1, POS_BOTTOM = 2, POS_LEFT = 4, POS_RIGHT = 8 };
static const struct {
	uint32_t pos;
	const char *name;
} toast_pos[ACHX_TOAST_N] = {
	{POS_BOTTOM | POS_LEFT, "BOTTOM LEFT"}, {POS_LEFT, "LEFT"}, {POS_TOP | POS_LEFT, "TOP LEFT"},
	{POS_TOP, "TOP"}, {POS_TOP | POS_RIGHT, "TOP RIGHT"}, {POS_RIGHT, "RIGHT"}, {POS_BOTTOM | POS_RIGHT, "BOTTOM RIGHT"},
	{POS_BOTTOM, "BOTTOM"}, {0, "CENTRE"},
};

const char *achx_toast_name(int pos)
{
	return toast_pos[(unsigned)pos % ACHX_TOAST_N].name;
}

void achx_toast_position(int pos)
{
	const uint32_t r = XNotifyPositionUI(toast_pos[(unsigned)pos % ACHX_TOAST_N].pos);

	xsdk_log_write("ACHIEVEMENTS: TOAST AT %s (XNotifyPositionUI(%u) 0x%08X)", achx_toast_name(pos),
	               (unsigned)toast_pos[(unsigned)pos % ACHX_TOAST_N].pos, (unsigned)r);
}

void achx_toast_test(const char *text)
{
	static uint16_t w[64]; /* XAM may read it after the call returns */
	size_t i;
	uint32_t r;

	for (i = 0; text[i] && i < sizeof(w) / sizeof(w[0]) - 1; i++)
		w[i] = (uint8_t)text[i];
	w[i] = 0;
	r = XNotifyQueueUI(14, 0xFF, 2, w, NULL);
	xsdk_log_write("ACHIEVEMENTS: TEST TOAST '%s' (XNotifyQueueUI 0x%08X)", text, (unsigned)r);
}

void achx_earned(int id)
{
	if (in_head - in_tail >= QUEUE)
		return;
	in_ring[in_head % QUEUE] = id;
	__asm__ volatile("lwsync" ::: "memory");
	in_head = in_head + 1;
}

/* test 109 (work/g109/xam/REPORT.md) wrote XAM's .data copies of the display information; test 110's reading of the
 * plain dumps (work/g110/xam/REPORT.md, local only) shows the toast never reads them: every toast draw (XAM 816CB3D0)
 * asks VdGetCurrentDisplayInformation, i.e. the kernel's live record at 0x80171054, and lays the toast out in its scaler
 * source rectangle (+0x08 x1, +0x0C y1, +0x10 x2, +0x14 y2), still 0,0,640,480 under xsdk (which programs the scaler
 * itself), against the output +0x18/+0x1C and the display +0x48/+0x4A. Route K: the debug TOAST row's LB writes the
 * source rectangle 0,0,1280,720 (the front buffer's), only on kernel 2.0.17559 and only while the record equals what
 * VdGetCurrentDisplayInformation returns and says a 1280x720 front buffer; achx_kdi_tick writes it again if XAM's own
 * D3D (the Guide) rewrote it; achx_kdi_restore puts the saved words back before any hand-off, exit or fault (the
 * kernel sends this record to XAM at VdShutdownEngines). The kernel itself never reads these words. Whether a title's
 * store lands in the kernel's .data is unknown until the console runs it: the log says so first */
enum {
	XAM_STAMP_AT = 0x815F00F8u, XAM_STAMP = 0x5DAA92A1u, KRNL_STAMP = 0x5DAA916Bu,
	KDI_AT = 0x80171054u, DI_BYTES = 0x58, KDI_SRC = 2, KDI_SAVED = 6, /* words +0x08 .. +0x1C */
	XAM_A_AT = 0x81AA1870u,                                             /* XAM's event-3 copy, logged only */
	KDI_EVERY = 60,
};
static uint32_t kdi_saved[KDI_SAVED];
static int kdi_patched;
static unsigned kdi_ticks, kdi_reapplied;

static int module_stamp(const char *module, uint32_t want, const char *tag)
{
	HANDLE h = 0;
	const uint32_t r = XexGetModuleHandle(module, &h);
	const uint32_t stamp = r == 0 && h ? *(volatile const uint32_t *)((const uint8_t *)h + 0x50) : 0;

	xsdk_log_write("%s: LOADER ENTRY STAMP %08X (XexGetModuleHandle 0x%08X): %s", tag, (unsigned)stamp, (unsigned)r,
	               stamp == want ? "2.0.17559's, THE ADDRESSES APPLY" : "ANOTHER BUILD");
	return stamp == want;
}

/* test 110 (test 109's log: every LB said "ANOTHER XAM BUILD" from the header word at 0x815F00F8, while the probe
 * showed the loader entry's +0x50 = 0x5DAA92A1): the stamps from the modules' loader entries (xenia
 * X_LDR_DATA_TABLE_ENTRY time_date_stamp +0x50) */
static int xam_known(void)
{
	static int known = -1;

	if (known < 0) {
		known = module_stamp("xam.xex", XAM_STAMP, "XAM BUILD");
		xsdk_log_write("XAM BUILD: HEADER WORD %08X (TEST 109'S CHECK)", (unsigned)*(volatile const uint32_t *)XAM_STAMP_AT);
	}
	return known;
}

static int krnl_known(void)
{
	static int known = -1;

	if (known < 0)
		known = module_stamp("xboxkrnl.exe", KRNL_STAMP, "KERNEL BUILD");
	return known;
}

static void log_words(const char *when, const char *what, uint32_t at)
{
	const volatile uint32_t *w = (const volatile uint32_t *)at;

	for (unsigned i = 0; i < DI_BYTES / 4; i += 8)
		xsdk_log_write("%s %s +%02X: %08X %08X %08X %08X %08X %08X %08X %08X", what, when, i * 4, (unsigned)w[i],
		               (unsigned)w[i + 1], (unsigned)w[i + 2], (unsigned)w[i + 3],
		               (unsigned)(i + 4 < DI_BYTES / 4 ? w[i + 4] : 0), (unsigned)(i + 5 < DI_BYTES / 4 ? w[i + 5] : 0),
		               (unsigned)(i + 6 < DI_BYTES / 4 ? w[i + 6] : 0), (unsigned)(i + 7 < DI_BYTES / 4 ? w[i + 7] : 0));
}

void achx_xam_cache_log(const char *when)
{
	if (krnl_known())
		log_words(when, "KERNEL DISPLAY RECORD", KDI_AT);
	else
		xsdk_log_write("KERNEL DISPLAY RECORD %s: ANOTHER KERNEL BUILD, NOT READ", when);
	if (xam_known())
		log_words(when, "XAM COPY A", XAM_A_AT);
}

static int kdi_has_ours(void)
{
	const volatile uint32_t *k = (const volatile uint32_t *)KDI_AT;

	return k[KDI_SRC] == 0 && k[KDI_SRC + 1] == 0 && k[KDI_SRC + 2] == 0x500u && k[KDI_SRC + 3] == 0x2D0u;
}

static void kdi_write(void)
{
	volatile uint32_t *k = (volatile uint32_t *)KDI_AT;

	k[KDI_SRC] = 0;
	k[KDI_SRC + 1] = 0;
	k[KDI_SRC + 2] = 0x500u;
	k[KDI_SRC + 3] = 0x2D0u;
	__asm__ volatile("sync" ::: "memory");
}

/* the debug TOAST row's LB (step: the log's count only) */
int achx_xam_cache_fix(int step)
{
	DISPLAY_INFO d;

	if (!krnl_known()) {
		xsdk_log_write("KDI FIX: ANOTHER KERNEL BUILD, NOT WRITTEN");
		return 0;
	}
	if (kdi_patched) {
		xsdk_log_write("KDI FIX %d: ALREADY ON (%s), %u REWRITES SO FAR", step, kdi_has_ours() ? "IN PLACE" :
		               "XAM CHANGED IT: WRITTEN AGAIN", kdi_reapplied);
		if (!kdi_has_ours())
			kdi_write();
		return 1;
	}
	memset(&d, 0, sizeof(d));
	VdGetCurrentDisplayInformation(&d);
	if (sizeof(d) < DI_BYTES || memcmp(&d, (const void *)KDI_AT, DI_BYTES) != 0 || d.front_buffer_width != 1280 ||
	    d.front_buffer_height != 720) {
		xsdk_log_write("KDI FIX: THE RECORD AT %08X IS NOT THE DISPLAY INFORMATION OF A 1280X720 FRONT BUFFER (FRONT "
		               "%ux%u, SIZE %u), NOT WRITTEN", (unsigned)KDI_AT, (unsigned)d.front_buffer_width,
		               (unsigned)d.front_buffer_height, (unsigned)sizeof(d));
		return 0;
	}
	memcpy(kdi_saved, (const void *)(KDI_AT + KDI_SRC * 4), sizeof(kdi_saved));
	xsdk_log_write("KDI WRITING: SOURCE %u,%u,%u,%u -> 0,0,1280,720 (A FAULT HERE = THE KERNEL'S DATA TAKES NO WRITE)",
	               (unsigned)kdi_saved[0], (unsigned)kdi_saved[1], (unsigned)kdi_saved[2], (unsigned)kdi_saved[3]);
	kdi_write();
	kdi_patched = 1;
	kdi_ticks = 0;
	xsdk_log_write("KDI WRITTEN: %s", kdi_has_ours() ? "READ BACK AS WRITTEN" : "READ BACK DIFFERENT");
	return 1;
}

/* every vblank (main.c ach_step): once a second, our source rectangle written again if XAM's D3D changed it */
void achx_kdi_tick(void)
{
	if (!kdi_patched || ++kdi_ticks % KDI_EVERY)
		return;
	if (!kdi_has_ours()) {
		const volatile uint32_t *k = (const volatile uint32_t *)KDI_AT;
		kdi_reapplied++;
		xsdk_log_write("KDI: THE SOURCE RECTANGLE BECAME %u,%u,%u,%u, WRITTEN AGAIN (%u)", (unsigned)k[KDI_SRC],
		               (unsigned)k[KDI_SRC + 1], (unsigned)k[KDI_SRC + 2], (unsigned)k[KDI_SRC + 3], kdi_reapplied);
		kdi_write();
	}
}

void achx_xam_cache_restore(void)
{
	if (!kdi_patched)
		return;
	kdi_patched = 0;
	if (!kdi_has_ours()) { /* someone else's since: theirs stays */
		xsdk_log_write("KDI: NOT PUT BACK (THE RECORD HAS ANOTHER SOURCE RECTANGLE NOW)");
		return;
	}
	memcpy((void *)(KDI_AT + KDI_SRC * 4), kdi_saved, sizeof(kdi_saved));
	__asm__ volatile("sync" ::: "memory");
	xsdk_log_write("KDI: THE KERNEL'S SOURCE RECTANGLE PUT BACK (%u,%u,%u,%u)", (unsigned)kdi_saved[0],
	               (unsigned)kdi_saved[1], (unsigned)kdi_saved[2], (unsigned)kdi_saved[3]);
}

/* test 106 (test 105: Aurora stopped on an unhandled exception after ibara ended): before a hand-off the write XAM
 * may still be doing into this title's memory (write_overlapped, written) finishes first, up to ms */
void achx_finish(unsigned ms)
{
	unsigned waited = 0;

	achx_xam_cache_restore(); /* test 110: the kernel's record as it was, before any hand-off or exit */
	/* test 110: the worker ends first (a call it is in finishes), then this thread waits out the write as before */
	worker_quit = 1;
	while (worker_on && waited < ms) { /* it sleeps 4 ms between looks */
		xsdk_thread_sleep(1);
		waited++;
	}
	/* test 109: a write that returned at once may still be read for WRITE_GAP vblanks (about 17 ms each) */
	const unsigned since = look - write_look, gap_ms = since < WRITE_GAP ? (WRITE_GAP - since) * 50u / 3u : 0;

	while ((writing || waited < gap_ms) && waited < ms) {
		poll_write();
		xsdk_thread_sleep(1);
		waited++;
	}
	queued += (int)(in_head - in_tail); /* the log's count: earned, never handed to XAM */
	xsdk_log_write("ACHIEVEMENTS: %s BEFORE THE HAND-OFF (%u MS WAITED, %d QUEUED LEFT UNWRITTEN)",
	               writing ? "A WRITE STILL RUNNING" : "NO WRITE RUNNING", waited, queued);
}

/* test 110: the worker's vblank, test 109's achx_frame: the ids from the game thread queued, the profile looked for,
 * the writes polled and started */
static void worker_vblank(void)
{
	while (in_tail != in_head && queued < QUEUE) {
		__asm__ volatile("lwsync" ::: "memory");
		queue[queued++] = in_ring[in_tail % QUEUE];
		in_tail = in_tail + 1;
	}
	if (look++ % USER_EVERY == 0 || (queued && user == XSDK_XAM_USER_NONE && look % 30 == 0))
		find_user();
	poll_write();
	if (!writing && queued && user != XSDK_XAM_USER_NONE && look - write_look >= WRITE_GAP)
		start_write();
}

static uint32_t worker_task(void *u)
{
	unsigned seen = vblanks;

	(void)u;
	while (!worker_quit) {
		const unsigned now = vblanks;
		if (now != seen) { /* one step per vblank the game thread counted, however many went by */
			seen = now;
			worker_vblank();
		}
		xsdk_thread_sleep(4);
	}
	worker_on = 0;
	return 0;
}

int achx_start(uint32_t hardware_thread)
{
	HANDLE h;

	if (worker_on)
		return 0;
	worker_on = 1;
	if (!NT_SUCCESS(xsdk_thread_create_on(&h, 64 * 1024, worker_task, NULL, hardware_thread))) {
		worker_on = 0;
		xsdk_log_write("ACHIEVEMENTS: NO THREAD OF THEIR OWN, THE WRITES ON THE GAME THREAD");
		return -1;
	}
	NtClose(h);
	xsdk_log_write("ACHIEVEMENTS: XAM CALLS ON THEIR OWN THREAD (HARDWARE THREAD %u)", (unsigned)hardware_thread);
	return 0;
}

void achx_frame(void)
{
	while (have_taken != have_n) { /* the profile's list, read by the worker */
		__asm__ volatile("lwsync" ::: "memory");
		ach_have(have_ring[have_taken]);
		have_taken = have_taken + 1;
	}
	if (worker_on) {
		vblanks = vblanks + 1;
		return;
	}
	if (!worker_quit) /* no worker: test 109's way, on this thread */
		worker_vblank();
}

/* test 107 (test 106: the toast still small and at the left whatever the position; the video shows our own 1280x720
 * frame under it, crisp, the toast laid out for 640x480 in the front buffer's top left, the position bits working
 * inside that box; event 1's three descriptions changed nothing). Lead: the kernel's display information still says
 * a 640x480 front buffer (xsdk docs/HARDWARE.md: xsdk sets the scaler itself, D3D's VdInitializeScalerCommandBuffer is
 * never called). The debug menu's TOAST row, RB: the display information logged whole, then XAM's and the kernel's
 * loaded images written to <dev>/ibara360/xam_image.bin / krnl_image.bin, to find where XAM's notification code takes
 * its size (a local reading, as xsdk's author did; nothing published). Written 64 KB at a time with the progress
 * logged first, so a page that cannot be read (the title ends on the fault) still leaves what came before it. */
static void dump_module(const char *dev, const char *module, const char *file)
{
	HANDLE h = 0;
	const uint32_t r = XexGetModuleHandle(module, &h);
	const uint8_t *e = (const uint8_t *)h;
	char path[160];
	uint32_t base, size, done = 0;
	uint8_t *bounce;
	FILE *fp;

	if (r != 0 || !e) {
		xsdk_log_write("XAM PROBE: %s: XexGetModuleHandle 0x%08X", module, (unsigned)r);
		return;
	}
	/* the loader entry (xenia X_LDR_DATA_TABLE_ENTRY): dll_base +0x18, image_base +0x1C, image_size +0x20 */
	for (int i = 0; i < 0x60; i += 16) {
		const uint32_t *w = (const uint32_t *)(e + i);
		xsdk_log_write("XAM PROBE: %s ENTRY +%02X: %08X %08X %08X %08X", module, i, (unsigned)w[0], (unsigned)w[1],
		               (unsigned)w[2], (unsigned)w[3]);
	}
	base = *(const uint32_t *)(e + 0x1C);
	size = *(const uint32_t *)(e + 0x20);
	if (!base || !size || size > 0x4000000u) {
		xsdk_log_write("XAM PROBE: %s: IMAGE %08X SIZE %08X NOT DUMPED", module, (unsigned)base, (unsigned)size);
		return;
	}
	snprintf(path, sizeof(path), "%s/ibara360", dev);
	mkdir(path, 0777);
	snprintf(path, sizeof(path), "%s/ibara360/%s", dev, file);
	xsdk_log_write("XAM PROBE: %s IMAGE %08X SIZE %08X -> %s", module, (unsigned)base, (unsigned)size, path);
	wgate_io(1);
	/* test 109 (work/g109/xam: test 107's code pages came out as ciphertext): a 64 KB write goes to the disk by DMA
	 * from physical RAM, where the hypervisor keeps code encrypted; a CPU copy through the mapping is plain */
	bounce = malloc(0x10000u);
	fp = bounce ? fopen(path, "wb") : NULL;
	while (fp && done < size) {
		const uint32_t n = size - done < 0x10000u ? size - done : 0x10000u;
		if (done % 0x100000u == 0)
			xsdk_log_write("XAM PROBE: %s AT %08X", module, (unsigned)(base + done));
		memcpy(bounce, (const void *)(uintptr_t)(base + done), n);
		if (fwrite(bounce, 1, n, fp) != n)
			break;
		fflush(fp);
		done += n;
	}
	if (fp)
		fclose(fp);
	free(bounce);
	wgate_io(0);
	xsdk_log_write("XAM PROBE: %s: %08X OF %08X BYTES WRITTEN", module, (unsigned)done, (unsigned)size);
}

void achx_xam_probe(const char *dev)
{
	DISPLAY_INFO d;
	const uint32_t *w = (const uint32_t *)&d;

	memset(&d, 0, sizeof(d));
	VdGetCurrentDisplayInformation(&d);
	achx_xam_cache_log("PROBE");
	xsdk_log_write("XAM PROBE: DISPLAY INFO FRONT %ux%u FORMATS %u/%u DISPLAY %ux%u INTERLACED %u ACTUAL WIDTH %u",
	               (unsigned)d.front_buffer_width, (unsigned)d.front_buffer_height,
	               (unsigned)d.front_buffer_color_format, (unsigned)d.front_buffer_pixel_format,
	               (unsigned)d.display_width, (unsigned)d.display_height, (unsigned)d.display_interlaced,
	               (unsigned)d.actual_display_width);
	for (unsigned i = 0; i < sizeof(d) / 4; i += 8)
		xsdk_log_write("XAM PROBE: DISPLAY INFO +%02X: %08X %08X %08X %08X %08X %08X %08X %08X", i * 4,
		               (unsigned)w[i], (unsigned)w[i + 1], (unsigned)w[i + 2], (unsigned)w[i + 3],
		               (unsigned)(i + 4 < sizeof(d) / 4 ? w[i + 4] : 0), (unsigned)(i + 5 < sizeof(d) / 4 ? w[i + 5] : 0),
		               (unsigned)(i + 6 < sizeof(d) / 4 ? w[i + 6] : 0), (unsigned)(i + 7 < sizeof(d) / 4 ? w[i + 7] : 0));
	if (!dev) {
		xsdk_log_write("XAM PROBE: NO STORAGE DEVICE, NOTHING DUMPED");
		return;
	}
	dump_module(dev, "xam.xex", "xam_image.bin");
	dump_module(dev, "xboxkrnl.exe", "krnl_image.bin");
}

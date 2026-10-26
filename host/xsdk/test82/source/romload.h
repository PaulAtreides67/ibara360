/* Test 6: a set from FAT USB storage, loaded on its own hardware thread.
 * Test 38: two sets (ibara, ibarablk); the loader scans for both, then loads the one chosen.
 * xsdk port (test 39 .xex): the kernel's storage, looked for beside the .xex (romload.c). */
#ifndef ROMLOAD_H
#define ROMLOAD_H

#include <stdint.h>

#define ROMLOAD_ROWS 4  /* card rows romload_rows() fills */
#define LOADER_THREAD 2 /* core 1, thread 0: not the frame loop's core */

enum { R_U4, R_U2, R_U23, R_U24, NROLES };
enum { SET_IBARA, SET_IBARABLK, NSETS };

/* Start the loader on LOADER_THREAD; 0 = started. It looks for every set's zip, then waits for
 * romload_choose. */
int romload_start(void);

/* Test 38: 1 once the zips have been looked for. */
int romload_scanned(void);

/* Test 38: after romload_scanned, 1 when the set's zip was found. */
int romload_found(int set);

/* Test 38: "ibara", "ibarablk" (MAME's set names). */
const char *romload_set_name(int set);

/* xsdk port: after romload_scanned, the data root (the .xex's device root, e.g. /Device/Mass0,
 * else game:): <root>/ibara360 holds the ini, the saves and the recordings. */
const char *romload_scan_device(void);

/* Test 38: load this set (-1: none; the loader then finishes with nothing). */
void romload_choose(int set);

/* Test 38: the set being loaded, -1 before the choice. */
int romload_chosen(void);

/* 1 once the loader has finished, whatever the result. */
int romload_finished(void);

/* Test 14: the data root (as romload_scan_device), once the set is loaded and CRC-checked,
 * else NULL. */
const char *romload_device(void);

/* xsdk port: the .xex's path as the kernel gave it (ExLoadedImageName), for the log. */
const char *romload_image_name(void);

/* A member's data once finished and CRC-checked as MAME's dump, else NULL. */
const uint8_t *romload_member(int role, uint32_t *size);

/* The loader's card rows: ROMLOAD_ROWS lines of text with a colour each. */
void romload_rows(char text[ROMLOAD_ROWS][100], uint32_t color[ROMLOAD_ROWS]);

#endif

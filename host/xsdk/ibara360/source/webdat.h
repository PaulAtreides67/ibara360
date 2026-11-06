/* ibara360 test 121 (STORY in the launcher; the games' STAGE MAP later): ibaraweb.dat beside the .xex files, the
 * official site's pictures (tools/web/mkweb.py), read by webdat.c. The format, all big-endian:
 *
 *   "IBWB" | u32 version (1) | u32 count | count x 44-byte entries { char name[28] (NUL padded), u32 offset (from
 *   the file's start), u32 bytes, u16 w, u16 h, u32 kind } | the data, each entry 16-byte aligned
 *
 * kind: WEBDAT_KIND_JPEG (baseline RGB), WEBDAT_KIND_ZLIB (zlib of w x h ARGB32 bytes A R G B, big-endian pixels),
 * WEBDAT_KIND_RAW (bytes). The table is read once (webdat_open); the entries and their names are read-only after it,
 * so any thread may find and read them. Every read opens the file itself (as ps2data.c does), so the threads need no
 * lock. The module keeps only its own statics (webdat_*). It logs nothing: the caller reads webdat_why(). */
#ifndef WEBDAT_H
#define WEBDAT_H

#include <stdint.h>

#define WEBDAT_MAGIC "IBWB"
#define WEBDAT_VERSION 1
#define WEBDAT_ENTRY 44
enum { WEBDAT_KIND_JPEG = 1, WEBDAT_KIND_ZLIB = 2, WEBDAT_KIND_RAW = 3 };

struct webdat_entry {
	char name[29]; /* NUL-terminated */
	uint32_t offset, bytes;
	uint16_t w, h;
	uint32_t kind;
};

/* the file at path (a device path or a PC path: '\' is read as '/'), its table read; 0 = good. Once: later calls
 * return the first answer. On failure webdat_why() says why, in capitals ("NO IBARAWEB.DAT" when it is not there). */
int webdat_open(const char *path);
int webdat_ok(void);
const char *webdat_why(void);

/* the entry called name, or NULL */
const struct webdat_entry *webdat_find(const char *name);

/* the entry's bytes in a new malloc'd buffer (e->bytes long), NULL when it cannot be read */
void *webdat_read(const struct webdat_entry *e);

/* a JPEG (n bytes at jpg) decoded with stb_image into a new malloc'd ARGB32 buffer of *w x *h pixels (alpha 0xFF,
 * each uint32 0xAARRGGBB, rows top down); NULL when it does not decode */
uint32_t *webdat_jpeg_argb(const void *jpg, uint32_t n, int *w, int *h);

/* a kind 2 entry (zlib of its w x h ARGB32 bytes) as a new malloc'd buffer of w x h uint32 0xAARRGGBB; NULL = bad */
uint32_t *webdat_zlib_argb(const struct webdat_entry *e);

#endif

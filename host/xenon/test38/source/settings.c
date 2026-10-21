/* Test 33: the settings file and the EEPROM saves (see settings.h). Threads: settings_load,
 * eeprom_load and eeprom_boot on thread 0 before the USB thread starts (libfat is then used by
 * no other thread: the loader waits for the choice or has finished; test 38); eeprom_frame on
 * the game thread; eeprom_service on the USB
 * thread, which does every file operation from then on. The game thread hands a snapshot over
 * only when the USB thread has taken the last one (taken == seq), so one buffer is enough. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <sys/stat.h>
#include <unistd.h>

#include "card.h"
#include "romload.h"
#include "settings.h"
#include "wgate.h"

#define INI_MAX 4096
#define EEP_BYTES 512

struct settings cfg = {.card = 0, .picture = PIC_INTEGER, .save = 1, .record = 0, .framelog = 0,
                       .tate = TATE_OFF, .scanlines = 0, .scanline_strength = 50, .game = GAME_ASK};

static const char default_ini[] =
	"# ibara360 settings, read at power-on: 1 = on, 0 = off.\n"
	"# Delete this file to get the defaults back.\n"
	"\n"
	"# game: the game that starts: ask = choose with the pad at power-on,\n"
	"#       ibara = Ibara, ibarablk = Ibara Kuro Black Label\n"
	"game = ask\n"
	"\n"
	"# card: the status card once the game runs (RB on any pad shows or hides it)\n"
	"card = 0\n"
	"\n"
	"# picture: integer = the largest whole-number scale (sharp pixels),\n"
	"#          full = the full screen height (smoothed)\n"
	"picture = integer\n"
	"\n"
	"# tate: the TV turned on its side, the game filling the screen:\n"
	"#       0 = off (the TV stands normally, the game upright between black bars)\n"
	"#       left = the TV's top edge on the left (turned counterclockwise; 1 = left)\n"
	"#       right = the TV's top edge on the right (turned clockwise)\n"
	"tate = 0\n"
	"\n"
	"# scanlines: dark gaps between the game's lines, as on the arcade monitor (it lies on its\n"
	"#            side in the cabinet, so the lines run from the top of the picture to the bottom)\n"
	"scanlines = 0\n"
	"\n"
	"# scanline_strength: how dark the gaps are, 0 (not at all) to 100 (black), in percent\n"
	"scanline_strength = 50\n"
	"\n"
	"# save: keep the game's settings and high scores in ibara360/nvram/<game>/eeprom\n"
	"#       (MAME 0.289's nvram/ibara/eeprom or nvram/ibarablk/eeprom: the file can be\n"
	"#       copied either way)\n"
	"save = 1\n"
	"\n"
	"# record: input recording ibara360/recNNNN.txt (replays on the PC and in MAME)\n"
	"record = 0\n"
	"\n"
	"# framelog: frame timing log ibara360/perfNNNN.txt\n"
	"framelog = 0\n";

/* thread 0, then read-only */
static char dev_name[8];
static char ini_path[48], eep_dir[48], eep_path[64], eep_tmp[64];
static char ini_state[48];      /* READ / CREATED / ... for the card */
static unsigned ini_bad;        /* lines that were not a known key with a good value */
static uint16_t boot_words[256];
static int boot_blank = 1;      /* the game starts with all 0xFFFF */
static const char *boot_from = "";
static int save_on;             /* cfg.save with a device */

/* game thread */
static uint16_t seen[256], saved[256];
static volatile int pending;
static uint32_t changed_at;
static volatile unsigned changes;   /* frames whose EEPROM differed from the frame before */
static volatile uint32_t snap_frame; /* the frame of the snapshot in out[] */

/* game thread -> USB thread */
static uint8_t out[EEP_BYTES];
static volatile unsigned seq, taken;

/* USB thread */
static unsigned done_seq;
static struct wgate gate;
static int dirs_made;
static volatile unsigned saves, fails, save_us, save_us_max;
static volatile uint32_t saved_frame; /* the emulated frame of the snapshot last saved */
static char fail_why[48];

/* ---- the ini ------------------------------------------------------------------------- */

static char *trim(char *s)
{
	char *e;

	while (*s == ' ' || *s == '\t')
		s++;
	e = s + strlen(s);
	while (e > s && (e[-1] == ' ' || e[-1] == '\t' || e[-1] == '\r'))
		*--e = 0;
	return s;
}

/* 1 / 0 for on / off words, -1 for anything else */
static int boolean(const char *v)
{
	if (!strcmp(v, "1") || !strcasecmp(v, "on") || !strcasecmp(v, "yes") || !strcasecmp(v, "true"))
		return 1;
	if (!strcmp(v, "0") || !strcasecmp(v, "off") || !strcasecmp(v, "no") || !strcasecmp(v, "false"))
		return 0;
	return -1;
}

static const char *tate_name(void)
{
	return cfg.tate == TATE_LEFT ? "LEFT" : cfg.tate == TATE_RIGHT ? "RIGHT" : "OFF";
}

static void ini_line(char *line, unsigned n)
{
	static const struct { const char *key; int *val; } keys[] = {
		{"card", &cfg.card}, {"save", &cfg.save}, {"record", &cfg.record}, {"framelog", &cfg.framelog},
		{"scanlines", &cfg.scanlines},
	};
	char *hash = strchr(line, '#'), *eq, *k, *v, *end;
	unsigned i;
	long l;
	int b;

	if (hash)
		*hash = 0;
	line = trim(line);
	if (!*line)
		return;
	eq = strchr(line, '=');
	if (!eq) {
		ini_bad++;
		log_printf(C_YELLOW, "INI LINE %u: NO '=' (IGNORED)", n);
		return;
	}
	*eq = 0;
	k = trim(line);
	v = trim(eq + 1);
	if (!strcasecmp(k, "picture")) {
		if (!strcasecmp(v, "integer"))
			cfg.picture = PIC_INTEGER;
		else if (!strcasecmp(v, "full"))
			cfg.picture = PIC_FULL;
		else {
			ini_bad++;
			log_printf(C_YELLOW, "INI LINE %u: PICTURE = %.20s? (INTEGER OR FULL)", n, v);
		}
		return;
	}
	if (!strcasecmp(k, "game")) { /* test 38 */
		if (!strcasecmp(v, "ask"))
			cfg.game = GAME_ASK;
		else if (!strcasecmp(v, romload_set_name(SET_IBARA)))
			cfg.game = SET_IBARA;
		else if (!strcasecmp(v, romload_set_name(SET_IBARABLK)))
			cfg.game = SET_IBARABLK;
		else {
			ini_bad++;
			log_printf(C_YELLOW, "INI LINE %u: GAME = %.20s? (ASK, IBARA OR IBARABLK)", n, v);
		}
		return;
	}
	if (!strcasecmp(k, "tate")) {
		b = boolean(v);
		if (b == 0)
			cfg.tate = TATE_OFF;
		else if (b == 1 || !strcasecmp(v, "left"))
			cfg.tate = TATE_LEFT;
		else if (!strcasecmp(v, "right"))
			cfg.tate = TATE_RIGHT;
		else {
			ini_bad++;
			log_printf(C_YELLOW, "INI LINE %u: TATE = %.20s? (0, LEFT OR RIGHT)", n, v);
		}
		return;
	}
	if (!strcasecmp(k, "scanline_strength")) {
		l = strtol(v, &end, 10);
		if (end != v && *trim(end) == 0 && l >= 0 && l <= 100) {
			cfg.scanline_strength = (int)l;
		} else {
			ini_bad++;
			log_printf(C_YELLOW, "INI LINE %u: SCANLINE_STRENGTH = %.20s? (0 TO 100)", n, v);
		}
		return;
	}
	for (i = 0; i < sizeof(keys) / sizeof(keys[0]); i++)
		if (!strcasecmp(k, keys[i].key)) {
			b = boolean(v);
			if (b < 0) {
				ini_bad++;
				log_printf(C_YELLOW, "INI LINE %u: %.12s = %.20s? (1 OR 0)", n, k, v);
			} else {
				*keys[i].val = b;
			}
			return;
		}
	ini_bad++;
	log_printf(C_YELLOW, "INI LINE %u: UNKNOWN KEY %.20s (IGNORED)", n, k);
}

static void ini_read(FILE *f)
{
	static char buf[INI_MAX + 1];
	size_t len = fread(buf, 1, INI_MAX, f);
	char *p = buf, *nl;
	unsigned n = 1;

	buf[len] = 0;
	for (; p && *p; n++) {
		nl = strchr(p, '\n');
		if (nl)
			*nl = 0;
		ini_line(p, n);
		p = nl ? nl + 1 : NULL;
	}
}

/* ---- files --------------------------------------------------------------------------- */

static int make_dir(const char *d)
{
	struct stat st;

	mkdir(d, 0777); /* fails when it exists; the stat tells */
	return stat(d, &st) == 0 && S_ISDIR(st.st_mode) ? 0 : -1;
}

/* <dev>:/ibara360, its nvram and nvram/<set>; 0 when all are there */
static int make_dirs(void)
{
	char d[48];

	snprintf(d, sizeof(d), "%s:/ibara360", dev_name);
	if (make_dir(d))
		return -1;
	snprintf(d, sizeof(d), "%s:/ibara360/nvram", dev_name);
	if (make_dir(d))
		return -1;
	return make_dir(eep_dir);
}

/* a file's 512 bytes (little-endian words) into boot_words; 1 when read */
static int eep_read(const char *path)
{
	uint8_t b[EEP_BYTES + 1];
	FILE *f = fopen(path, "rb");
	size_t n;
	int i;

	if (!f)
		return 0;
	n = fread(b, 1, sizeof(b), f);
	fclose(f);
	if (n != EEP_BYTES) {
		log_printf(C_RED, "SAVE: %s HAS %u BYTES, NOT 512: IGNORED", path, (unsigned)n);
		return 0;
	}
	for (i = 0; i < 256; i++)
		boot_words[i] = (uint16_t)(b[i * 2] | b[i * 2 + 1] << 8);
	return 1;
}

static void ini_create(void)
{
	char d[48];
	FILE *f;
	int ok;

	snprintf(d, sizeof(d), "%s:/ibara360", dev_name);
	if (make_dir(d)) {
		snprintf(ini_state, sizeof(ini_state), "NO FOLDER, DEFAULTS");
		return;
	}
	f = fopen(ini_path, "wb");
	ok = f && fwrite(default_ini, 1, sizeof(default_ini) - 1, f) == sizeof(default_ini) - 1;
	if (f && fclose(f) != 0)
		ok = 0;
	snprintf(ini_state, sizeof(ini_state), ok ? "CREATED" : "NOT WRITTEN, DEFAULTS");
	log_printf(ok ? C_GREEN : C_RED, "INI: %s %s", ini_path, ini_state);
}

void settings_load(const char *dev)
{
	struct stat st;
	FILE *f;

	if (!dev) {
		snprintf(ini_state, sizeof(ini_state), "NO DEVICE, DEFAULTS");
		cfg.save = 0;
		return;
	}
	snprintf(dev_name, sizeof(dev_name), "%s", dev); /* ini_create's folder; eeprom_load sets it again */
	snprintf(ini_path, sizeof(ini_path), "%s:/ibara360/ibara360.ini", dev);

	f = fopen(ini_path, "rb");
	if (f) {
		ini_read(f);
		fclose(f);
		if (ini_bad)
			snprintf(ini_state, sizeof(ini_state), "READ, %u BAD LINE%s", ini_bad, ini_bad == 1 ? "" : "S");
		else
			snprintf(ini_state, sizeof(ini_state), "READ");
		log_printf(ini_bad ? C_YELLOW : C_GREEN, "INI: %s %s", ini_path, ini_state);
	} else if (stat(ini_path, &st) == 0) {
		snprintf(ini_state, sizeof(ini_state), "UNREADABLE, DEFAULTS");
		log_printf(C_RED, "INI: %s %s", ini_path, ini_state);
	} else {
		ini_create();
	}
	log_printf(C_GREEN, "INI: GAME %s CARD %d PICTURE %s TATE %s SCANLINES %d STRENGTH %d SAVE %d RECORD %d FRAMELOG %d",
	           cfg.game == GAME_ASK ? "ASK" : romload_set_name(cfg.game), cfg.card,
	           cfg.picture == PIC_FULL ? "FULL" : "INTEGER", tate_name(), cfg.scanlines,
	           cfg.scanline_strength, cfg.save, cfg.record, cfg.framelog);
}

void eeprom_load(const char *dev, const char *set)
{
	struct stat st;
	int i;

	for (i = 0; i < 256; i++)
		boot_words[i] = 0xFFFF;
	if (!dev) {
		cfg.save = 0;
		return;
	}
	snprintf(dev_name, sizeof(dev_name), "%s", dev);
	snprintf(eep_dir, sizeof(eep_dir), "%s:/ibara360/nvram/%s", dev, set);
	snprintf(eep_path, sizeof(eep_path), "%s/eeprom", eep_dir);
	snprintf(eep_tmp, sizeof(eep_tmp), "%s/eeprom.tmp", eep_dir);

	save_on = cfg.save;
	if (!save_on)
		return;
	if (eep_read(eep_path))
		boot_from = "FILE";
	else if (stat(eep_path, &st) != 0 && eep_read(eep_tmp)) /* a save cut off after its unlink */
		boot_from = "TMP FILE";
	if (*boot_from) {
		for (i = 0; i < 256; i++)
			if (boot_words[i] != 0xFFFF)
				boot_blank = 0;
		log_printf(C_GREEN, "SAVE: %s READ%s", *boot_from == 'T' ? eep_tmp : eep_path, boot_blank ? " (BLANK)" : "");
	} else if (stat(eep_path, &st) == 0) {
		log_printf(C_YELLOW, "SAVE: THE GAME STARTS BLANK, THE NEXT SAVE REPLACES THE FILE");
	} else {
		log_printf(C_YELLOW, "SAVE: NO %s, THE GAME STARTS BLANK", eep_path);
	}
}

int eeprom_boot(uint16_t words[256])
{
	memcpy(words, boot_words, sizeof(boot_words));
	memcpy(seen, boot_words, sizeof(boot_words));
	memcpy(saved, boot_words, sizeof(boot_words));
	return !boot_blank;
}

void eeprom_header_line(char *s, unsigned size)
{
	unsigned i, k;

	if (boot_blank || size < 10 + 256 * 4) {
		if (size)
			s[0] = 0;
		return;
	}
	k = (unsigned)snprintf(s, size, "# eeprom ");
	for (i = 0; i < 256; i++)
		k += (unsigned)snprintf(s + k, size - k, "%04X", (unsigned)boot_words[i]);
	snprintf(s + k, size - k, "\n");
}

/* ---- saving ---------------------------------------------------------------------------- */

void eeprom_frame(uint32_t frame, const uint16_t w[256])
{
	int i;

	if (!save_on)
		return;
	if (memcmp(w, seen, sizeof(seen))) {
		memcpy(seen, w, sizeof(seen));
		pending = 1;
		changed_at = frame;
		changes++;
	}
	if (!pending || frame - changed_at < EEP_SETTLE_FRAMES || taken != seq)
		return;
	pending = 0;
	if (!memcmp(seen, saved, sizeof(saved))) /* changed and changed back */
		return;
	memcpy(saved, seen, sizeof(saved));
	for (i = 0; i < 256; i++) {
		out[i * 2] = (uint8_t)saved[i];
		out[i * 2 + 1] = (uint8_t)(saved[i] >> 8);
	}
	snap_frame = frame;
	__sync_synchronize(); /* the snapshot before its number */
	seq = seq + 1;
}

/* eeprom.tmp, then eeprom removed and eeprom.tmp renamed to it (libfat's rename does not
 * replace a file); a save cut off between the two leaves eeprom.tmp, which the next power-on
 * reads */
static int eep_write(const uint8_t *b)
{
	FILE *f;
	int ok;

	if (!dirs_made) {
		if (make_dirs()) {
			snprintf(fail_why, sizeof(fail_why), "CANNOT CREATE THE FOLDER");
			return -1;
		}
		dirs_made = 1;
	}
	wgate_io(1);
	f = fopen(eep_tmp, "wb");
	ok = f && fwrite(b, 1, EEP_BYTES, f) == EEP_BYTES;
	if (f && fclose(f) != 0)
		ok = 0;
	if (!ok) {
		wgate_io(0);
		snprintf(fail_why, sizeof(fail_why), "CANNOT WRITE EEPROM.TMP");
		return -1;
	}
	unlink(eep_path); /* fails when there is none yet */
	ok = rename(eep_tmp, eep_path) == 0;
	wgate_io(0);
	if (!ok) {
		snprintf(fail_why, sizeof(fail_why), "RENAME FAILED (EEPROM.TMP KEPT)");
		return -1;
	}
	return 0;
}

int eeprom_service(void)
{
	static uint8_t b[EEP_BYTES];
	unsigned s = seq;
	uint32_t f;
	uint64_t t0;
	unsigned us;

	if (s == done_seq)
		return 0;
	if (!wgate_open(&gate))
		return 0;
	__sync_synchronize(); /* the number before the snapshot it covers */
	memcpy(b, out, sizeof(b));
	f = snap_frame;
	__sync_synchronize(); /* copied before the game thread may write out[] again */
	taken = s;
	done_seq = s;
	t0 = tb_read();
	if (eep_write(b)) {
		fails++;
		log_printf(C_RED, "SAVE: %s, TRIED AGAIN AT THE NEXT CHANGE", fail_why);
		return 1;
	}
	us = tb_us(t0, tb_read());
	save_us = us;
	if (us > save_us_max)
		save_us_max = us;
	saves++;
	saved_frame = f;
	log_printf(C_GREEN, "SAVE: EEPROM SAVED (%u), SNAPSHOT OF FRAME %u, %u.%u MS", saves, (unsigned)f, us / 1000,
	           us / 100 % 10);
	return 1;
}

/* ---- card ------------------------------------------------------------------------------ */

/* two rows of at most 65 characters (the card's width); test 37: TATE and SCAN in place of
 * REC and LOG (the recorder's and the frame log's rows say when they are off) */
void settings_rows(char t[SETTINGS_ROWS][100], uint32_t color[SETTINGS_ROWS])
{
	char scan[8] = "OFF";

	if (cfg.scanlines)
		snprintf(scan, sizeof(scan), "%d%%", cfg.scanline_strength);
	snprintf(t[0], 100, "INI %s: CARD %d PIC %s TATE %c SCAN %s SAVE %d", ini_state, cfg.card,
	         cfg.picture == PIC_FULL ? "FULL" : "INT", "-LR"[cfg.tate], scan, cfg.save);
	color[0] = ini_bad || strstr(ini_state, "DEFAULTS") ? C_YELLOW : C_GREEN;
	if (!save_on) {
		snprintf(t[1], 100, "SAVE OFF%s", dev_name[0] ? " (SAVE = 0 IN THE INI)" : " (NO STORAGE DEVICE)");
		color[1] = C_DIM;
		return;
	}
	if (fails)
		snprintf(t[1], 100, "SAVE: SAVED %u FAILED %u: %s", saves, fails, fail_why);
	else
		snprintf(t[1], 100, "SAVE: BOOT %s%s  CHG %u  SAVED %u @%u  %u.%u MS%s", *boot_from ? boot_from : "BLANK",
		         *boot_from && boot_blank ? " (BLANK)" : "", changes, saves, (unsigned)saved_frame, save_us / 1000,
		         save_us / 100 % 10, seq != done_seq || pending ? "  DUE" : "");
	color[1] = fails ? C_RED : saves ? C_GREEN : C_WHITE;
}

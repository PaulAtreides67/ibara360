/* rankinit.h (test 101, work/g101/rankinit/REPORT.md): the debug menu's INITIALIZE RANKINGS = what each game's own
 * TEST MODE "INITIALIZE RANKING" page does to the score tables, done by the host in the attract. */
#ifndef RANKINIT_H
#define RANKINIT_H

/* set = SET_IBARA or SET_IBARABLK (romload.h); arrange = 1 in ibaraarr.xex (ARR; with SET_IBARA only).
 * Call on the game thread from host_vblank, only while the game is idle in the attract (no run, not its service
 * menu: main.c's dip_idle()). Writes work RAM (the four tables, the "had a name entry" flags, the save request, the
 * game's EEPROM image) and EEPROM words 0x20-0xE9 (rtc9701_eeprom(); settings.c's eeprom_frame saves the file by
 * itself). Returns 0 done, -1 bad arguments (nothing written). */
int rank_init(int set, int arrange);

#endif

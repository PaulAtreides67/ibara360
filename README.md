# ibara360
I did not make this. Claude did everything for me.

**Version 0.82** (October 2026)

Cave's arcade shooters **Ibara** (2005) and **Ibara Kuro Black Label** (2006), plus the PlayStation 2 port's
**Arrange mode**, running natively on the Xbox 360. The arcade games' SH-3 programs are recompiled to C and run on a
re-implementation of Cave's CV1000 board (blitter, YMZ770 sound chip, EEPROM, clock). Slowdown follows a timing model
fitted to recordings of the real arcade board.

## What's in it

- Four .xex files that go in one folder:
  - `ibara360.xex`: the launcher, styled after the PS2 port's mode select, with the PS2 port's GALLERY
  - `ibara.xex`: Ibara
  - `ibarablk.xex`: Ibara Kuro Black Label
  - `ibaraarr.xex`: Ibara Arrange, the PS2 port's arrange mode patched into the arcade program, with its HUD, sub
    weapons, formations, continue, bullet designs, ending, 9-digit scores and its own score table
- Arcade slowdown and the arcade's sound at 48 kHz.
- One menu (START in the attract):
  - PLAY: player side, ship type, mode, DIP switches
  - GENERAL SCREEN: 16:9 or 4:3, TATE for a turned TV, scanlines, bullet design (Arrange)
  - M3 GADGETS: info panels beside the game (score, status, weapon, bullets, controls, stages, boss HP and timer,
    music, special formations), each one on or off
  - SOUND: volumes and a music test
  - CONTROLS: buttons per pad, AUTO SHOT
- A pause menu (BACK in a run): resume, restart the stage, full restart, quit.
- High scores and settings are saved to `<drive>:\ibara360` (`ibara360.ini`, and the EEPROM in MAME's format).

## New in 0.82

- PLAY page: each row shows one value between arrows, and TYPE comes before MODE.
- Arrange: BULLET DESIGN moved to GENERAL SCREEN. The Arrange PLAY page has no DIP SWITCHES row, the debug menu has no
  SPECIAL MODE, and stages start without their names, as on the PS2.
- Ibara's controls no longer offer RAPID SHOT or BUTTON 4, which do nothing in that game.
- GADGETS: the controls panel's NOW is now MANUAL, the highest shot rate reached since the last death (mashing or AUTO
  SHOT), back to 0 after a death. The run panels (STATUS, WEAPON, BULLETS) no longer light up in the attract demos.
- Menu texts reworded (DIP switch descriptions, MEDIUM, SCANLINES INTENSITY, the M3 GADGETS help lines).
- Fixed: changing DIP switches no longer re-saves the attract's state on every change, which made the menu stutter. It
  is saved once when you leave the page.
- The launcher is unchanged from 0.81.

## What you need

- An RGH/JTAG Xbox 360 with a dashboard that launches unsigned .xex files (for example Aurora).
- Your own MAME ROM sets `ibara.zip` and `ibarablk.zip` (not included). Arrange runs from `ibara.zip`.

Put the four .xex files in one folder on a USB drive or the hard disk. Put the zips in the same folder, in a `roms`
folder inside it, or in any folder above it up to the drive's root. For the launcher's GALLERY, copy `gallery.dat`
(the pictures) and `gallery.mp3` (its music) from `gen/launcher` into the same folder. Start `ibara360.xex`.

## Building

The .xex files are built with [xsdk](https://github.com/xenosworks/xsdk), an open-source SDK for retail-kernel
Xbox 360 titles, inside a Docker container (Debian 13 with xsdk and its GCC 15 toolchain). From Git Bash on Windows:

```
MSYS_NO_PATHCONV=1 docker run --rm --memory=5g -v xsdk-gcc:/opt/xsdk-gcc \
  -v "C:\New folder\ibara360:/p" -v "C:\New folder\xsdk-src\xsdk:/xsdk:ro" -v xsdk-t82:/b \
  xsdk-base:1 sh /p/host/xsdk/test82/build.sh ibara ibarablk ibaraarr ibara360
```

The .xex files land in `host/xsdk/test82/out`.

- `host/xsdk/test82`: the Xbox 360 side (video, sound, pads, menus, GADGETS, ROM loading, saves) and the launcher
- `runtime`: the CV1000 board (SH-3 runtime, blitter, YMZ770, EEPROM, clock, timing model)
- `gen`: generated sources: the recompiled programs (`ibara_drc`, `ibarablk_drc`, `ibaraarr_drc`), the Arrange
  patch, the GADGETS, Arrange and launcher art, and the GALLERY's two files

## Credits

- Ibara, Ibara Kuro Black Label and the PS2 port's Arrange mode, art and music (the GALLERY's pictures and its
  music, "Endress Train"): Cave
- GADGETS background: Baffo's MAME artwork for Ibara
- YMZ770 decoder: after MAME's (BSD-3-Clause; Olivier Galibert, R. Belmont, MetalliC)
- [xsdk](https://github.com/xenosworks/xsdk) (MIT), zlib, minimp3 (CC0)

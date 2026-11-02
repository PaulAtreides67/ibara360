# ibara360
I did not make this. Claude did everything for me.

**Version 1.00** (November 2026)

Cave's arcade shooters **Ibara** (2005) and **Ibara Kuro: Black Label** (2006), plus the PlayStation 2 port's
**Arrange mode**, running natively on the Xbox 360, with the arcade board's slowdown, a full menu system, save states,
replays, a training mode, info panels beside the game, the PS2 port's front end and soundtrack, and optional XBOX Live style achievements.

## The game

**Ibara** (鋳薔薇, "cast-iron rose") came out in Japanese arcades on July 15, 2005, on Cave's CV1000-B board,
published by AMI. It was directed and programmed by Shinobu Yagawa, the programmer behind *Recca* and Raizing's
*Battle Garegga*, and it was his first game for Cave after leaving Raizing. The music is by Shinji Hosoe and the world
and characters by Cave's lead designer Akira Wakabayashi.

It plays like a successor to *Battle Garegga*: biplanes and steam-powered machinery, a power-up system with option
formations, a medal chain that is the heart of the scoring, and a rank system that raises the difficulty in real time
as you collect items and deal damage. In the original, the only known way to lower the rank is to die. Yagawa has said
that rank was "one of my methods for increasing income for arcade operators", since arcade income follows the time
people spend playing. Two pilots, Bond and Dyne, fight the Rose Sisters and their mechanical army across a factory, a
mine, a valley, the sky, a fortified city and the Rose Garden where the robots are built.

**Ibara Kuro: Black Label** followed on February 10, 2006, in limited distribution. It was made to answer players'
complaints about the original and took several ideas from the PS2 port's Arrange mode: bombs that cancel bullets can
now bring the rank down, but the rank also climbs much faster.

The **PlayStation 2 port**, published by Taito in Japan on February 23, 2006, added the Arrange mode, with its own
rank rules that the player can partly steer by cancelling bullets with bombs and the Hadou cannon. The port itself is
generally considered weak: long loading between stages, a blurry interlaced picture in a game where bullets are hard
to see already, a shortened first stage, and almost none of the arcade's slowdown.

A sequel, *Pink Sweets: Ibara Sorekara*, reached arcades on April 21, 2006.

## Missing from the Xbox 360

The Xbox 360 became Cave's home console of choice: *Mushihimesama Futari*, *Deathsmiles*, *Espgaluda II*, *Guwange*,
*DoDonPachi Resurrection*, *Akai Katana*, *DoDonPachi SaiDaiOuJou* and more were all ported to it. Ibara's own
sequel came out on the 360 too, on the *Muchi Muchi Pork! & Pink Sweets* disc (February 24, 2011).

Ibara never did. Its only home version is the PS2 port, and Black Label never had a home release at all. ibara360
fills that gap: both arcade versions and the PS2 Arrange mode, on the console that got almost every other Cave shooter
of the era.

## How it works

The arcade games' SH-3 programs are recompiled to PowerPC C code (about 1,340 functions per game) and run on a
re-implementation of the CV1000 board: the blitter, the YMZ770 sound chip, the EEPROM, the real-time clock and the NAND
flash. Slowdown comes from a timing model fitted to recordings of the real arcade board, not from a fixed frame skip.
Arrange mode is the PS2 port's arrange code rebuilt as SH-3 patches on the arcade program, so it runs with the arcade's
graphics, sound and slowdown.

## Features

### Games
- **Ibara**: Normal, Harder and Extended (two loops), both pilots and all four ship types.
- **Ibara Kuro: Black Label**, as on its arcade board.
- **Ibara Arrange**, the PS2 port's arrange mode: its HUD, sub weapons, formation changes and aim lock, its continue,
  12 bullet designs, its ending, 9-digit scores, its own score table and the TAITO logo and title as on the PS2.
- One or two players (co-op), each pad with its own controls; a second player can join mid-run from a JOIN box
  (ship type, and in Black Label the bomb type).

### Picture
- 720p output (1080p consoles scale it), 16:9 or 4:3.
- Picture size, X / Y size and position, smoothing, scanlines with their strength, brightness in 5% steps.
- TATE for a TV turned on its side, either way round.

### M3 GADGETS
- Info panels beside the game, in 16:9 and 4:3 layouts, each one on or off: score, status, weapon and formation, bullets, medal chain, controls with the shot rate, stages, boss HP and timer, BOMB / BLAST,
  music, special formations.
- Drawn on Baffo's MAME artwork for Ibara and official Cave art of the pilots (the PS2 port's and the Insanity DVD
  booklet's).

### Menus
- One menu from the attract (START), in the arcade style or the PS2 port's style, in English or Japanese.
- **PLAY**: start a run; player side, ship type, mode, DIP switches.
- **TRAINING**: any stage, START AT BOSS straight to its fight, a starting rank that can be held, shot power, bomb
  fragments, lives, options, a hitbox view; its own pause; a cleared stage or game over returns to the TRAINING page.
- **LOAD STATE** and **REPLAY DATA**.
- **OPTIONS**: GENERAL SCREEN, M3 GADGETS, P1 / P2 CONTROLS (every button can be remapped, AUTO SHOT at 30 Hz),
  SOUND, DEBUG MENU, GAME SELECT (back to the launcher).
- **Pause** (BACK in a run): resume, save / load states, restart the stage, full restart, sound and screen options,
  quit to the attract.

### Save states and replays
- 10 save state slots per game on the hard disk, each with a picture.
- Replays: a finished run can be saved after its name entry and played back to the CAVE logo, with a pause menu and
  LB / RB to change the speed. The newest 30 are kept. Loading a save state zeroes the SCORE BREAKDOWN panel until
  the next run, and EX-DEBUG can turn replay saving off.

### Sound
- The arcade's YMZ770 sound at 48 kHz, or the PS2 port's soundtrack (16 streams).
- Music, effects, voice and attract volumes; mono or stereo; a music test and a sound test.

### Launcher
- The PS2 port's front end: its title, mode select and NOW LOADING screen, in 16:9, 4:3 and TATE (LB / RB on the
  title).
- The PS2 port's GALLERY: its 78 pictures and 5 sheets, with "Endress Train" playing.
- Each game is its own .xex; the launcher and the games hand over to each other directly.

### Achievements
- 34 achievements across the three games, a secret one among them, with their notifications placed for 720p.
- Off by default (DEBUG MENU, then hold LB + RB and press A for the EX-DEBUG page), so the games can be played on a
  profile that goes online without that risk.

### Saves and the rest
- High scores and settings are kept like the arcade's (the EEPROM in MAME's format) in `<drive>:\ibara360`, with the
  ini, save states, replays and a small loading index.
- The clock comes from the console.
- DEBUG MENU: the arcade's service menu, initialize rankings, staff roll protection; EX-DEBUG: invincibility,
  infinite lives and bombs, hitboxes, logs.
- Faster starts: the board's boot runs unpaced and the big graphics ROM is unpacked on four threads.

## What you need

- An RGH/JTAG Xbox 360 with a dashboard that launches unsigned .xex files (for example Aurora).
- Your own MAME ROM sets (not included). ibara360 checks each ROM by its CRC32, so the file names inside the zips
  don't matter, but the contents have to be these:

  `ibara.zip` (Ibara; Arrange runs from it too)

  | ROM | Size | CRC32 | MD5 |
  |---|---|---|---|
  | ibara_u4 | 2,097,152 | d5fb6657 | 3d7ab67965c9ec58e67fd5ddcd84821f |
  | u2 | 138,412,032 | 55840976 | 588dcbd31487722147fe7b17b4c4c2be |
  | u23 | 4,194,304 | ee5e585d | fd87a95f4b8b5b00674a8d62cd62f539 |
  | u24 | 4,194,304 | f0aa3cb6 | a361182bd49f72f9da2a76f42ad7b2fc |

  `ibarablk.zip` (Ibara Kuro: Black Label)

  | ROM | Size | CRC32 | MD5 |
  |---|---|---|---|
  | ibarablk_u4 | 2,097,152 | ee1f1f77 | 90d0f2fc7beb3c2545f6ff0ceddd2017 |
  | ibarablk_u2 | 138,412,032 | 5e46be44 | 30baa3c1ddbc32b6b2960f4ebae2cc7e |
  | u23 | 4,194,304 | a436bb22 | f86f993234651b3adf43b8074e44f30c |
  | u24 | 4,194,304 | d11ab6b6 | bc4386b37f38c5e61cea792e851872e9 |

- For Arrange, the PS2 menu style, the PS2 soundtrack and the launcher's pictures: an ISO of your own Japanese Ibara
  PS2 disc (SLPM-66301), for example made with ImgBurn's "Create image file from disc".
  `Ibara (Japan).iso`: 3,932,848,128 bytes, MD5 `6ba671b5d23155b8254b6f4cefc90ae2`.

## Installing

1. On a Windows PC, drag the ISO onto `ps2extract.exe`. It checks the disc's files (it stops on any other version of
   the disc) and writes `ps2data.bin` and `ps2music.bin` into a folder `ibara360 ps2data` beside the ISO.
2. Put the four .xex files (`ibara360.xex`, `ibara.xex`, `ibarablk.xex`, `ibaraarr.xex`), `ps2data.bin` and
   `ps2music.bin` in one folder on the Xbox 360's hard disk or a USB drive (for example `Hdd1:\apps\ibara360`).
3. Put `ibara.zip` and `ibarablk.zip` in the same folder, in a `roms` folder inside it, or in any folder above it up to
   the drive's root.
4. Start `ibara360.xex`. The first start of each game also writes its loading index, so later starts are a little
   faster.

## Building

The .xex files are built with [xsdk](https://github.com/xenosworks/xsdk), an open-source SDK for retail-kernel
Xbox 360 titles, inside a Docker container (Debian 13 with xsdk and its GCC 15 toolchain). From Git Bash on Windows:

```
MSYS_NO_PATHCONV=1 docker run --rm --memory=5g -v xsdk-gcc:/opt/xsdk-gcc \
  -v "C:\New folder\ibara360:/p" -v "C:\New folder\xsdk-src\xsdk:/xsdk:ro" -v xsdk-t118:/b \
  xsdk-base:1 sh /p/host/xsdk/test118/build.sh ibara ibarablk ibaraarr ibara360
```

The .xex files land in `host/xsdk/test118/out`.

- `host/xsdk/test118`: the Xbox 360 side (video, sound, pads, menus, GADGETS, ROM loading, saves, replays,
  achievements) and the launcher
- `runtime`: the CV1000 board (SH-3 runtime, blitter, YMZ770, EEPROM, clock, timing model)
- `gen`: generated sources: the recompiled programs (`ibara_drc`, `ibarablk_drc`, `ibaraarr_drc`), the Arrange
  patch, the GADGETS art and the launcher's music
- `tools/ps2extract`: the PS2 disc extractor (`build.sh` builds the .exe in Docker)

## Credits

- ibara360: written by [Claude](https://claude.ai) (Anthropic); tested on the Xbox 360 by PaulAtreides67
- Ibara, Ibara Kuro: Black Label, the PS2 port's Arrange mode, art and music: Cave (the PS2 port published by Taito)
- GADGETS background: Baffo's MAME artwork for Ibara
- YMZ770 decoder: after MAME's (BSD-3-Clause; Olivier Galibert, R. Belmont, MetalliC)
- [xsdk](https://github.com/xenosworks/xsdk) (MIT), zlib, minimp3 (CC0)

## Sources

- [Ibara (Wikipedia)](https://en.wikipedia.org/wiki/Ibara_(video_game)): dates, staff, rank, Black Label
- [Ibara (shmups.wiki)](https://shmups.wiki/library/Ibara): systems, Black Label, the PS2 port's issues
- [Ibara: 2006 developer interview (shmuplations)](https://shmuplations.com/ibara/): Akira Wakabayashi on the world,
  characters and stages, from the Ibara superplay DVD
- [Cave Shooting History interviews (shmuplations)](https://shmuplations.com/cavestghistory/): Shinobu Yagawa on rank
- [Muchi Muchi Pork! (Wikipedia)](https://en.wikipedia.org/wiki/Muchi_Muchi_Pork!): the Xbox 360 disc with Pink Sweets

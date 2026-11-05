# ibara360
**This project was AI-assisted by Claude Anthropic (Opus 5.5)**

**Every feature and test was done on a real Xbox 360 (Jasper model with RGH 1.2)**

**IF YOU'RE UNSURE HOW TO NAVIGATE THE MENUS:**

**Press Start during the demo screen to bring up the main menu.
Press Back during a run to pause the game.
If the continue screen appears, press start to resume your run**

**Version 1.02** (November 2026)

**Video preview:**
[![Watch the video](https://img.youtube.com/vi/lm_PT4kzotY/hqdefault.jpg)](https://www.youtube.com/embed/lm_PT4kzotY)

Cave's arcade shooters **Ibara** (2005) and **Ibara Kuro: Black Label** (2006), plus the PlayStation 2 port's
**Arrange mode**, running natively on the Xbox 360, with the arcade board's slowdown, a full menu system, save states,
replays, a training mode, info panels beside the game, the PS2 port's front end and soundtrack, and optional XBOX Live style achievements.

## The game

**Ibara** (鋳薔薇, "cast-iron rose") came out in Japanese arcades on July 15, 2005, on Cave's CV1000-B board,
published by AMI. It was directed and programmed by Shinobu Yagawa, the programmer behind *Recca* and Raizing's
*Battle Garegga*, and it was his first game for Cave after leaving Raizing. Music is by Shinji Hosoe, world
and characters by Cave's lead designer Akira Wakabayashi.

It plays like a successor to *Battle Garegga*: biplanes and steam-powered machinery, a power-up system with option
formations, a medal chain that is the heart of the scoring, and a rank system that raises the difficulty in real time
as you collect items and deal damage; and the only known way to lower said difficulty is to die. Yagawa has said
that rank was "one of my methods for increasing income for arcade operators", since arcade income follows the time
people spend playing.

Two negotiators, Bond and Dyne, are dispatched to fight Teresa Rose and her daughters, 
who are leading a mechanical army with the intent of conquering the world, across 6 stages, flying over the skies 
of Edelweiss, to eventually reach Teresa's Rose Garden, where her massive army of robots are built.

**Ibara Kuro: Black Label** followed on February 10, 2006, in limited distribution. It was made to answer players'
complaints about the original and took several ideas from the PS2 port's Arrange mode: bombs that cancel bullets can
now bring the rank down, but the rank also climb much faster.

The **PlayStation 2 port**, published by Taito in Japan on February 23, 2006, added the Arrange mode, with its own
rank rules that the player can partly steer by cancelling bullets with bombs and the Hadou cannon. The port itself is
generally considered weak: long loading between stages, a blurry interlaced picture in a game where bullets are hard
to see already, a shortened first stage, and almost none of the arcade's slowdown.

A sequel, *Pink Sweets: Ibara Sorekara*, reached arcades on April 21, 2006.

## Why Ibara? Why Xbox 360?

The Xbox 360 became Cave's home console of choice: *Mushihimesama Futari*, *Deathsmiles*, *Espgaluda II*, *Guwange*,
*DoDonPachi Resurrection*, *Akai Katana*, *DoDonPachi SaiDaiOuJou* and more were all ported to it. Ibara's own
sequel came out on the 360 too, on the *Muchi Muchi Pork! & Pink Sweets* disc, in 2011.

Ibara never did. Its only home version is the PS2 port, and Black Label never had a home release at all. ibara360
fills that gap: both arcade versions and the PS2 Arrange mode, on the console that got almost every other Cave shooter
of the era.

## How it works

The arcade games' SH-3 programs are recompiled to PowerPC C code (about 1,340 functions per game) and run on a
re-implementation of the CV1000 board: the blitter, the YMZ770 sound chip, the EEPROM, the real-time clock and the NAND
flash. Slowdown comes from a timing model fitted to recordings of the real arcade board.
The PS2 port's arrange code rebuilt as SH-3 patches on the arcade program, so it runs with the arcade's
graphics, sound and slowdown. one could technically even run it as it's own MAME rom if they so choose.

## Features

### Games
- **Ibara**, The original game. Normal, Harder and Extended modes.
- **Ibara Kuro: Black Label**, as on its arcade board.
- **Ibara Arrange**, the PS2 port's arrange mode: a prototype version of Black Label with it's own twists and turns.

### Picture
- 720p output (scaled to 1080p), 16:9 or 4:3. integer scaling, scanline support, TATE support, picture is fully customizable like a retail Cave port.

### M3 GADGETS
- Inspired by M2 ShotTriggers. Info panels beside the game, in 16:9 and 4:3 layouts, can be individually enabled or disabled
- Originally from Baf and Olifante's MAME artwork for Ibara and official Cave art of the pilots (taken from the PS2 port and the Insanity DVD
  booklet).

### Menus
- Playstation 2's port's UI, in English or Japanese.
- The PS2 menu is the only menu style; it requires `ps2data.bin` from `ps2extract`.
- **TRAINING MODE**: any stage, skip to boss function, starting rank, hitbox viewer.
- **SAVESTATE SUPPORT** and **INPUT PLAYBACK (Replays)** within the game itself.
- Every button can be remapped, AUTO SHOT at 10/12/15/20/30 Hz.
- Sound Test, Debug menu.
- **Pause screen (accessed by pressing Back during a run)** to access save/load states and options.

### Save states and replays
- 10 save state slots per game on the hard disk, each with a preview picture.
- Replays: a finished run can be saved after its name entry and played back to the CAVE logo, with a pause menu and
  LB / RB to change the speed. Up to 30 replays can be saved. Loading a save state nullifies any score.

### Sound
- The arcade's YMZ770 soundtrack at 48 kHz, or the PS2 port's high quality soundtrack (16 streams). Mono and Stereo support.
- Individual volume slides for music, sound effects, voice and attract.
- The attract volume controls title and demo sound; the start-of-run character call still follows the voice volume.

### Launcher
- Uses the PS2 port's front end: its title, mode select and NOW LOADING screen, in 16:9, 4:3 and TATE (LB / RB on the
  launcher screen).
- PS2 port's GALLERY mode (horizontal orientation only), fully restored: 78 pictures and 5 sheets, with "Endress Train" from "Ibara Remix Tracks" playing in the background.
- Each game is its own .xex; the launcher and the games hand over to each other directly.

### Achievements
- 34 achievements across the three games.
- Off by default (can be enabled in the Debug menu), so the games can be played on a
  profile that goes online without the ban risk from homebrew achievements **(temporary offline account recommended either way)**.

### Saves and the rest
- High scores and settings are handled just like MAME with EEPROM saves in `<drive>:\ibara360`, alongside the config 
  ini, save states, replays and a small loading index.
- The stage 6 clock support comes from the console's clock.
- DEBUG MENU: the arcade's service menu, initialize rankings, staff roll protection.

## What you need

- An RGH/JTAG or softmodded (BadUpdate, ABadAvatar, Peer Pressure) Xbox 360 with a dashboard that launches unsigned .xex files (for example Aurora).
- An ISO of Ibara for PS2 (not included in this repo)
- Your own MAME ROM sets **ibara.zip** and **ibarablk.zip** (not included in this repo). ibara360 checks each ROM by its CRC32, so the file names inside the zips
  don't matter, but the contents have to be these:

  `ibara.zip` (Ibara Arrange runs from it too)

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

- For Arrange, PS2 menus, the PS2 soundtrack and the launcher's gallery mode: an ISO of your own Japanese Ibara
  PS2 disc (SLPM-66301).
  `Ibara (Japan).iso`: 3,932,848,128 bytes, MD5 `6ba671b5d23155b8254b6f4cefc90ae2`.

## Installing

1. On a Windows PC, drag `Ibara (Japan).iso` onto `ps2extract.exe`. It checks the disc's files, and writes `ps2data.bin` and `ps2music.bin`
   into a folder `ibara360 ps2data` beside the ISO.
3. Put the four .xex files (`ibara360.xex`, `ibara.xex`, `ibarablk.xex`, `ibaraarr.xex`), `ps2data.bin` and
   `ps2music.bin` in one folder on the Xbox 360's hard disk or a USB drive (for example `Hdd1:\apps\ibara360`).
4. Put the arcade ROMs `ibara.zip` and `ibarablk.zip` in the same folder as the .xex files.
5. Start `ibara360.xex` in Aurora. The first start of each game also writes its loading index, so later starts are a little
   faster.

## Building

The .xex files are built with [xsdk](https://github.com/xenosworks/xsdk), an open-source SDK for retail-kernel
Xbox 360 titles, inside a Docker container (Debian 13 with xsdk and its GCC 15 toolchain). From Git Bash on Windows:

```
MSYS_NO_PATHCONV=1 docker run --rm --memory=5g -v xsdk-gcc:/opt/xsdk-gcc \
  -v "C:\New folder\ibara360:/p" -v "C:\New folder\xsdk-src\xsdk:/xsdk:ro" -v xsdk-ibara360:/b \
  xsdk-base:1 sh /p/host/xsdk/ibara360/build.sh ibara ibarablk ibaraarr ibara360
```

The .xex files land in `host/xsdk/ibara360/out`.

- `host/xsdk/ibara360`: the Xbox 360 side (video, sound, pads, menus, GADGETS, ROM loading, saves, replays,
  achievements) and the launcher
- `runtime`: the CV1000 board (SH-3 runtime, blitter, YMZ770, EEPROM, clock, timing model)
- `gen`: generated sources: the recompiled programs (`ibara_drc`, `ibarablk_drc`, `ibaraarr_drc`), the Arrange
  patch, the GADGETS art and the launcher's music
- `tools/ps2extract`: the PS2 disc extractor (`build.sh` builds the .exe in Docker)

## Credits

- ibara360: written by [Claude](https://claude.ai) (Anthropic); tested on the Xbox 360 by PaulAtreides67
- Ibara, Ibara Kuro: Black Label, the PS2 port's Arrange mode, art and music: Cave (the PS2 port published by Taito)
- GADGETS background: Baf and Olifante's MAME artwork for Ibara
- YMZ770 decoder: after MAME's (BSD-3-Clause; Olivier Galibert, R. Belmont, MetalliC)
- Buffi's CV1000 reseach for blitter and slowdown
- [xsdk](https://github.com/xenosworks/xsdk) (MIT), zlib, minimp3 (CC0)

## Sources

- [Ibara (Wikipedia)](https://en.wikipedia.org/wiki/Ibara_(video_game)): dates, staff, rank, Black Label
- [Ibara (shmups.wiki)](https://shmups.wiki/library/Ibara): systems, Black Label, the PS2 port's issues
- [Ibara: 2006 developer interview (shmuplations)](https://shmuplations.com/ibara/): Akira Wakabayashi on the world,
  characters and stages, from the Ibara superplay DVD
- [Cave Shooting History interviews (shmuplations)](https://shmuplations.com/cavestghistory/): Shinobu Yagawa on rank
- [Muchi Muchi Pork! (Wikipedia)](https://en.wikipedia.org/wiki/Muchi_Muchi_Pork!): the Xbox 360 disc with Pink Sweets

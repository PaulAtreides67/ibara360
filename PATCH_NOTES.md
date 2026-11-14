# ibara360 patch notes

## 1.04 (November 2026)

### New
- **LOW LATENCY** (OPTIONS page, above LANGUAGE; ON by default): each frame goes straight to the screen, up to one
  frame less input lag. The picture may tear.
- **FILTER** (GENERAL SCREEN, replaces SMOOTHING): NEAREST, BILINEAR, BICUBIC or LANCZOS scaling for the game
  picture. Menus and gadgets stay sharp.
- **SCREEN COLOR** (GENERAL SCREEN): STANDARD, FLAT, MONOTONE, SEPIA, OUTLINE or NEGATIVE for the game picture.
  OUTLINE draws white edges on black, one screen pixel thin at any picture size.
- **ROTATION UPSIDE DOWN**: the whole screen turned half round, next to OFF / LEFT / RIGHT.
- **Hold LT to hide any menu** and see the game picture under it.
- **STICK DEADZONE** for each player on the P1 / P2 CONTROLS pages, in 1% steps.
- **FPS COUNTER** on the DEBUG MENU: frames shown / emulated, top left.
- **AUTO SHOT 7.5 Hz** (Arcade): a press every 8 game frames, after 30 / 20 / 15 / 12 / 10 Hz
  (ini: `autofire = 7.5`).
- **STORY** (launcher): the slide window at the bottom left now shows "LB/RB TURN PAGE".

### Fixes
- Training's INVINCIBLE gadget no longer flickers between ON and "-".
- With the recording, frame log and network log turned on, the save states keep their full memory, so RESTART,
  QUIT TO ATTRACT and QUIT TO TRAINING MODE stay available and a training stage clear returns to the training page.
- Logging (record, frame log, network log) is turned off once when 1.04 first starts.

## 1.03 (November 2026)

### New
- **STORY** (launcher): a new MODE SELECT row above EXIT, on a PS2-style plate like GALLERY and EXIT. A slideshow of
  the story, system, stages and characters from Cave's official Ibara website, in English or Japanese (X switches),
  with music from the PS2 soundtrack. Needs `ibaraweb.dat` beside the .xex files.
- **STAGE MAP** gadget (16:9 only, on the M3 GADGETS page): the left panel shows the current stage's map from the
  official website with a red box for the part of the stage on screen; the box only moves forward and holds still
  during the boss fight. The right panel shows the stage's boss (Meidi, Midi, Kasumi, Shasta, Lace, Teresa, cut out
  from the PS2 port's gallery pictures) over rose petal art from the Insanity DVD booklet. The other gadgets are off
  while STAGE MAP is on. Needs `ibaraweb.dat` beside the .xex files.
- **ATTRACT DEMO** ON/OFF on the DEBUG MENU (Arcade and Black Label): turns the attract demos off, the way Arrange
  has none. Takes effect from the next power on.

### Fixes
- The "IKUZE" call at the start of a run: 1.02's fix also made it play during the attract demos with the attract
  volume at 0%. Now only a real start plays it at the voice volume; in the demos it follows the attract volume again.
- Quitting to the menu (from training, the pause menu or a replay's end) goes straight back to the menu, without
  the AMI logo flashing on screen.
- The achievements' game name on the Guide is now 鋳薔薇.

### Install
- Copy `ibaraweb.dat` from the zip into the folder with the .xex files. Without it, the launcher has no STORY row and
  STAGE MAP is unavailable; everything else works as in 1.02.

## 1.02 (November 2026)

- Rewritten the training mode's "skipping to the boss" text to be centered
- PS2 menus are now the single menu style
- Improved the replay menu to indicate playback controls
- Fixed stick gadgets for ibara/arrange that were touching the special formation gadget border when holding up
- Sound bug (a personal preference): attract volume at 0% would abruptly cut out the "IKUZE" line at the start of a
  run, now it plays at the configured voice volume even when attract volume is 0%.

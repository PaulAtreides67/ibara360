# ibara360 patch notes

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

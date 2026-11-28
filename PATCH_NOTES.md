# ibara360 patch notes

## 1.06 (November 2026)

### New
- **Black Label TRAINING XTC START**: set the XTC counter a training run starts with (0-9999, wrapping round).
  X = LOCK keeps it fixed for the whole run, grazes included. In a training run, Y freezes / unfreezes XTC: frozen
  it never drops, grazes still raise it.
- **Black Label XTC gadget** redrawn: thick gradient timer gauge with the frame count inside (horizontal in SMALL,
  vertical in FULL), the number clear of the red border. SMALL / FULL / OFF no longer move the other gadgets.
- **XTC DECAY** cheat (Black Label): slow or fast XTC drain.
- **FIXED RANK** in 1% steps from 0 to 100%, LB/RB for 10% steps.
- **SCORE POPUPS** (GENERAL SCREEN): SOLID or SEE-THROUGH (half visible) rose score popups in Arrange and
  Black Label. In Black Label a change applies from the next run, and replays keep the setting they were recorded with.

### Changes
- MEDAL PENALTY is DEFAULT / 5 DOWN / 3 DOWN (LOWEST removed).
- The HITBOX row left TRAINING in all games (it is on the CHEATS page).
- Renamed PLAYER HITBOX SIZE, MEDAL MAGNET and ITEM MAGNET. ITEM MAGNET RELEASE also enables MAGNET RANGE.
- TRAINING RANK % and XTC START have no DEFAULT entry; their values wrap round.
- Clearer help texts (rank, bombs, magnets, co-op, stage map, training); Japanese help for the new rows.
- 16:9 WEAPON gadget keeps its RAPID row, so CONTROLS changes no longer make the screen jump.
- TRAINING menu window no longer jumps on the XTC START row.
- The launcher follows the games' ROTATION setting (LEFT / RIGHT / OFF); LB / RB no longer turn it.

### Fixes
- ROTATION LEFT and RIGHT were swapped.
- Turning cheats on and off again outside a run no longer leaves the SCORE red.
- Black Label ground items follow the item magnet again.
- Black Label TRAINING START AT BOSS: the stage 2 boss always shoots.
- BOOK: rotated pages zoom without broken borders; the left stick no longer turns pages while zoomed.
- Logging (record, frame log, network log) is turned off once when 1.06 first starts.

## 1.05 (November 2026)

### New
- **BOOK** (OPTIONS page, all three games): the Insanity DVD booklet "The Lunatic Ibara Book" (94 pages, Japanese)
  readable in game. Two-page spreads at 16:9, single pages in TATE, LB/RB turn pages (wrapping round), A zooms into a
  page in halves, and a zoomed spread tells you which way the other page is. Needs `ibarabook.dat` beside the .xex
  files.
- **CHEATS** page: INF LIVES, INF BOMBS, INVINCIBLE, HITBOXES, BOMB INVINCIBILITY, AUTOBOMB, FIXED RANK, HITBOX SIZE,
  FEWER BULLETS, BULLET SPEED, ITEM FALL SPEED, ITEM MAGNETISM + MAGNET RANGE (ground items too), MEDAL SUCTION,
  MEDAL PENALTY, and ALL CHEATS OFF / ON / CUSTOM. A run with cheats saves no replay, score, initials or save
  states and earns no achievements.
- **BATTLE HISTORY**: totals of all your runs: runtime and play time, medals, items, shots and bombs, score, ships
  chosen, bosses, clears by ship and by mode, deaths. Quitting counts the run. INITIALIZE HISTORY in OTHER SETTINGS
  clears it.
- **BULLET COLORS** (GENERAL SCREEN): your own colors for the enemy bullets, per type (purple + blue in Arcade,
  purple + red in Harder / Extended / Arrange), from presets or R/G/B, with a preview of the bullet sprites.
  Black Label uses its own bullet art.
- **NO ITEM ZONES** gadget (M3 GADGETS): shows the screen zones where destroyed enemies drop no items (sides,
  bottom or both), with your own colors.
- **OTHER SETTINGS** page (replaces the DEBUG MENU): LOW LATENCY, CONTINUES, STAFF ROLL PROTECTION, ATTRACT DEMO,
  SPECIAL MODE, ACHIEVEMENTS, FPS COUNTER, LANGUAGE, SERVICE MENU, INITIALIZE RANKINGS, INITIALIZE HISTORY.
- **CONTINUES** ON / OFF.
- **TRACKLIST** ORIGINAL / ALTERNATIVE (SOUND page): Ibara swaps the Normal and Harder songs, Arrange uses Normal's
  stage songs, Black Label swaps in Ibara's songs (PS2 soundtrack only).
- **LOAD STATE**: X deletes a save state.
- Japanese help text for every option.

### Changes
- Menus re-spaced in the PS2 style, values in one column; the SOUND and BULLET COLORS windows no longer jump
  between rows.
- EX-DEBUG removed (HITBOXES moved to CHEATS; the other EX-DEBUG settings stay in the ini). Arrange's BULLET DESIGN
  row and the LB RAM-hash check removed.
- AUTOFIRE renamed AUTO FREQUENCY; many help texts shortened and clarified.
- No replay is saved for a run that used a continue.
- Logging (record, frame log, network log) is turned off once when 1.05 first starts.

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

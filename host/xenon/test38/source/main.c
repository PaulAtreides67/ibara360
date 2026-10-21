/* ibara360 360 test 38 (goal 19, Ibara Kuro Black Label; user 2026-10-20 after test 37
 * SUCCESS: "option B. it's finally time to tackle this beast", one ELF with a menu): test 37
 * with both games linked in, on the same runtime and FIT+ 3.75%:
 *
 *  - gen/ibara_drc (recomp_game) and gen/ibarablk_drc (sh3rec --prefix blk_: blk_recomp_game);
 *    runtime/sh3_rt.c runs rt_game, which game_start sets. The runtime now checks each compiled
 *    function against RAM at its first call (ibarablk's boot calls its LZ unpacker in RAM while
 *    the rest is still packed, so test 37's one check of the whole image never passed for it);
 *  - source/romload.c looks for ibara.zip and ibarablk.zip, then loads only the chosen set;
 *  - the game: ini key game = ask / ibara / ibarablk (default ask; an ini without it asks), the
 *    only zip found, else a menu on the card (D-pad / stick up and down, A or START);
 *  - per game (games[]): the logic-frame word (ibara 0C28674C, ibarablk 0C2B1A54), the attract
 *    checks (expect.h / snd_expect.h, expect_blk.h / snd_expect_blk.h: PC runs with FIT+ 3.75%
 *    from boot), the EEPROM file nvram/<set>/eeprom (MAME's), the recording's "# set" line;
 *  - card: the title row names the game.
 *
 * Test 37 (user 2026-10-20: "add options for TATE and scanlines in ibara.ini"):
 * test 36 with three more ini keys for the game alone (source/settings.c); the card's layout
 * and everything else are test 36's:
 *
 *  - tate = 0 / left / right: 0 = test 36 (the 240x320 portrait upright, ROT270); left = the
 *    320x240 raster as the blitter writes it, for a TV turned counterclockwise (its top edge on
 *    the left), right = the raster turned half a turn, for a TV turned clockwise. picture =
 *    integer / full as before (at 720p both are 3x = 960x720);
 *  - scanlines = 1, scanline_strength = 0..100: a dark gap after each of the raster's 240 lines,
 *    along the lines the arcade monitor draws (it lies on its side in the cabinet, so they run
 *    from the top of the picture to the bottom, on a standing or a turned TV). A second draw of
 *    grey quads multiplied into the picture (alone_layout / scan_build, built once when the
 *    ini is read); half a line wide, whole pixels at whole scales, shared out over the pixels
 *    at the full height's fractional scale;
 *  - card: the ini row shows TATE - / L / R and SCAN OFF / n% (in place of REC and LOG).
 *
 * Test 36 (the release build with test 35's pad polling; user 2026-10-20 after
 * test 35 SUCCESS: "option A"): test 33 plus test 35's usbfix/ohci_fix.c, nothing of the
 * debug builds 34-35 else (no "# pr" / "# pe" lines, the recording only when the ini asks,
 * LB = the check's RAM hash again):
 *
 *  - usbfix/ohci_fix.c: interrupt endpoints on the OHCI tree node visited every 4 ms
 *    (OHCI_INTR_NODE; stock libxenon's leaf = every 32 ms), their TDs hand the done queue
 *    back in the frame they complete in. Test 35: reports 4 ms apart, the pad's in-between
 *    D-pad states no longer skipped;
 *  - card: the USB row ends with the pads' polling period (ohci_intr_node_ms).
 *
 * Test 33 (goal 18, the release build; user 2026-10-20 after test 32 SUCCESS:
 * "option A"): test 32 (FIT+ 3.75%, now the shipping timing model) made to be played:
 *
 *  - the status card is hidden once the game runs (it still shows while loading, and after a
 *    fatal error); RB on any pad shows / hides it. Hidden: the game picture alone, centred on
 *    black, at the largest whole-number scale (picture = integer) or the full height with
 *    bilinear filtering (picture = full); shown: test 32's layout. A hidden card is not drawn
 *    (T5 only polls the pads and writes files);
 *  - <dev>:/ibara360/ibara360.ini (source/settings.c, written with the defaults when missing):
 *    card, picture, save, record, framelog;
 *  - the game's EEPROM (its settings and high scores) read from <dev>:/ibara360/nvram/ibara/
 *    eeprom at power-on and saved there by the USB thread after the game changes it (MAME
 *    0.289's nvram/ibara/eeprom format), unless save = 0;
 *  - the input recording and the frame log only when the ini turns them on (record, framelog);
 *    a recording's header carries a non-blank EEPROM ("# eeprom", tools/rec/rec.py nvram);
 *  - the attract checks against the PC run (expect.h, snd_expect.h) only from the PC run's
 *    start: no clock found and a blank EEPROM;
 *  - card: rows 27-28 = the ini and the saves, the title row has the video mode.
 *
 * Test 32 (user 2026-10-20 after test 31 was staged: "skip test 31, FIT+ at 3.75%"):
 * test 31 with FIT+ 3.75% (runtime/pcb.c PCB_MODEL_FITPLUS7: cached SDRAM penalties x1.694
 * instead of x1.73; no whole hundredth gives ~3.75%, so the scales' integer form is in
 * thousandths now, (p * k + 500) / 1000; PLAN.md "FIT+ 3.75%") from boot, still the only model:
 *
 *  - the recording writes "# timing 0 fitplus7" (recorder entry byte 9), host/pc replays it;
 *  - card: title "TEST 32  TIMING PCB FIT+ 3.75% (ONLY MODEL)", the same FIT+ row at ROW(26);
 *  - the attract check (expect.h, snd_expect.h) is a PC run with FIT+ 3.75% from boot.
 *
 * Test 31 (user 2026-10-20 after test 30 was staged: "closest FIT+ to 4.0%?", then
 * "skip test 30, build 31 with FIT+ at 3.97%"): test 30 with FIT+ 3.97% (runtime/pcb.c
 * PCB_MODEL_FITPLUS6: cached SDRAM penalties x1.73 instead of x1.60; PLAN.md "FIT+ 3.97%") from
 * boot, still the only model:
 *
 *  - the recording writes "# timing 0 fitplus6" (recorder entry byte 8), host/pc replays it;
 *  - card: title "TEST 31  TIMING PCB FIT+ 3.97% (ONLY MODEL)", the same FIT+ row at ROW(26);
 *  - the attract check (expect.h, snd_expect.h) is a PC run with FIT+ 3.97% from boot.
 *
 * Test 30 (user 2026-10-20 after test 29 was staged: "skip test 28, increase FIT+
 * by 3.17%" = test 29 skipped, FIT+ at 3.17%): test 29 with FIT+ 3.17% (runtime/pcb.c
 * PCB_MODEL_FITPLUS5: cached SDRAM penalties x1.60 instead of x1.58; PLAN.md "FIT+ 3.17%") from
 * boot, still the only model:
 *
 *  - the recording writes "# timing 0 fitplus5" (recorder entry byte 7), host/pc replays it;
 *  - card: title "TEST 30  TIMING PCB FIT+ 3.17% (ONLY MODEL)", the same FIT+ row at ROW(26);
 *  - the attract check (expect.h, snd_expect.h) is a PC run with FIT+ 3.17% from boot.
 *
 * Test 29 (user 2026-10-20 after test 28 was staged: "skip test 28, go for FIT+
 * 3.05% as suggested in the table"): test 28 with FIT+ 3.05% (runtime/pcb.c PCB_MODEL_FITPLUS4:
 * cached SDRAM penalties x1.58 instead of x1.57; PLAN.md "FIT+ 3.05%") from boot, still the only
 * model:
 *
 *  - the recording writes "# timing 0 fitplus4" (recorder entry byte 6), host/pc replays it;
 *  - card: title "TEST 29  TIMING PCB FIT+ 3.05% (ONLY MODEL)", the same FIT+ row at ROW(26);
 *  - the attract check (expect.h, snd_expect.h) is a PC run with FIT+ 3.05% from boot.
 *
 * Test 28 (user 2026-10-20 after test 27 was staged: "rebuild FIT+ once again at
 * 3.0%"): test 27 with FIT+ 3.0% (runtime/pcb.c PCB_MODEL_FITPLUS3: cached SDRAM penalties x1.57
 * instead of x1.55; PLAN.md "FIT+ 3.0%") from boot, still the only model:
 *
 *  - the recording writes "# timing 0 fitplus3" (recorder entry byte 5), host/pc replays it;
 *  - card: title "TEST 28  TIMING PCB FIT+ 3.0% (ONLY MODEL)", the same FIT+ row at ROW(26);
 *  - the attract check (expect.h, snd_expect.h) is a PC run with FIT+ 3.0% from boot.
 *
 * Test 27 (user 2026-10-20 after running test 26: "rebuild FIT+ at 2.9%, 6.0% is
 * too slow", "dont build mame or fit anymore"): test 26 with one timing model, FIT+ 2.9%
 * (runtime/pcb.c PCB_MODEL_FITPLUS2: the fit with cached SDRAM penalties x1.55 instead of
 * test 26's x1.9; PLAN.md "FIT+ 2.9%"), from boot:
 *
 *  - no RB switch (the pad's RB is unused), no FIT / MAME 0.289 rows; the recording writes
 *    "# timing 0 fitplus2" (recorder entry byte 4), host/pc replays it;
 *  - card: title "TEST 27  TIMING PCB FIT+ 2.9% (ONLY MODEL)", one FIT+ row at ROW(26)
 *    (frames, game drops and their share, CPU, late), rows 27-28 empty;
 *  - the attract check (expect.h, snd_expect.h) is a PC run with FIT+ 2.9% from boot;
 *  - runtime: the scales' integer form in hundredths ((p * k + 50) / 100), so x1.55 keeps it.
 *
 * Test 26 (after test 25 SUCCESS; user 2026-10-20: "implement FIT+ with 6.0%",
 * the PCB player Plasmo's share of dropped vblanks in play; the fit drops ~1.8% on the user's
 * test 18 run): test 25 plus a third timing model, FIT+ (runtime/pcb.c pcb_timing_model,
 * PLAN.md "FIT+"), from boot:
 *
 *  - RB on any pad cycles FIT+ -> FIT -> MAME 0.289 -> FIT+; the recording writes "# timing
 *    <frame> fitplus|fit|mame" (recorder entry byte 3 = fitplus), host/pc replays them;
 *  - card: title "TEST 26  TIMING PCB FIT+|PCB FIT|MAME 0.289", one row per model (FIT+,
 *    FIT, MAME: frames, game drops and their share, CPU, late) in place of test 18's header
 *    row and two model rows (late in load = the EMU row's LATE minus LATE AFTER LOAD);
 *  - the attract check (expect.h, snd_expect.h) is a PC run with FIT+ from boot.
 *
 * Test 25 (after test 24 SUCCESS: the ~17-22 ms pad-read gaps are the card
 * render, every 6 frames: draw 11.9 + copy 5.2 ms, because T5 at low priority runs ~21x
 * slower than at medium; the other 5 gaps over 4 ms were the frame log's text, 3-4 ms).
 * Test 24 plus the pads read inside that work, T5 kept at low priority (option A):
 *
 *  - t5_pad_tick(): if PAD_IO_US have passed since the last pad read, the OHCI buses'
 *    completed transfers and the pad words, as test 19's read inside a write (no hub scan,
 *    no probe). usb_task allows it (t5_ticks) only around card_render and prof_service, so
 *    it never runs on another thread (the game thread draws the card while loading) or
 *    inside a write. Called per row of fill() (not the 1-pixel fills of text()), after each
 *    text() string, per row of the raster -> texture copy, and per frame line of the frame
 *    log's text (source/prof.c perf_service; the samples dump never runs since test 17);
 *  - draw_card copies the LOG_SHOWN log lines under log_busy and draws them after: a pad
 *    read may log (attach/detach), and log_add takes the same lock;
 *  - usb_task: after a late loop (a card, a write) the next poll runs at once instead of a
 *    period later (test 24: every card gap ended with a full 1 ms wait);
 *  - test 24's calibration went (its section = these reads, "tpoll"); "# pg" lines from
 *    2 ms (PG_EVENT_US), their kind loop / io / card / log; card rows: NO-WRITE GAPS yellow
 *    from one over 4 ms, LONGEST yellow over 4 ms, the calibration row = "READS: CARD n
 *    (per card) MAX gap  LOG n MAX gap".
 *
 * Test 24 (debug build after test 23 SUCCESS: sound false zeros and the pad's
 * LED packet fixed). Tests 19-23 showed "PAD GAP ... ELSE 17-21 MS": the USB thread (T5)
 * sometimes reads the pads only ~21 ms after the last read with no file write in between,
 * so a press can reach the game a frame late. Nothing on the card says which part of
 * usb_task's loop takes that long (card_us was measured but never shown). Test 23 plus:
 *
 *  - every stretch of T5's time is one section (usb_do_poll, pads_update, the pad probe, the
 *    recorder, the frame log, the card's draw / copy / flush, the calibration, the wait,
 *    pad reads inside writes, the writes themselves); each pad read splits the time since
 *    the last read by section. Gaps from PG_EVENT_US on go to the frame log ("# pg" lines);
 *    the card shows gaps over 2/4/8/16 ms after loading, the longest with and without a
 *    write, the longest one without a write split into its 3 largest sections, each
 *    section's most time in one gap, and the card's own draw/copy/flush times;
 *  - once a second after loading T5 times CAL_N dependent adds at its low priority (split
 *    by whether band worker T4, the other thread on core 2, was drawing) and at medium:
 *    how fast T5 runs at low priority, i.e. whether the gaps are work or starved issue slots;
 *  - card: the test 23 sound rows merged into one ("DRV"), test 19's PAD GAP row and test
 *    20's CONV row replaced, LOG_SHOWN 4 -> 3.
 *
 * Test 23 (after test 22 SUCCESS: its one dropout after loading was the driver
 * read, not the sound thread). Test 22 plus two fixes:
 *
 *  - A, sound (source/sound.c): the driver read 0 with ~2100 B still queued, at the switch to
 *    its last valid descriptor, and the thread re-primed while the ring played on. The thread
 *    reads the driver's register itself, reads a 0 again (up to 10 x 5 us) before it counts as
 *    an underrun, and checks each read against the bytes expected from the last one. Card: the
 *    clock's 4 rows = T3 loop health, the last real underrun after loading (snapshot), "DRV
 *    ZERO" (false zeros, re-reads, underruns after loading, underruns whose ring read non-zero
 *    again) and the reads one descriptor off;
 *  - B, pads (usbfix/usbctrl_fix.c in place of libxenon's usbctrl.o): a wired pad's packets
 *    other than "00 14" input reports are skipped. Test 22 recorded down + left from frame 0
 *    to 966 (b[2] 06, as the LED-state packet 01 03 06), which stopped both attract checks at
 *    frame 1. The TO GAME row counts skipped packets and shows the last one's port and bytes.
 *
 * Test 22 (after test 21 SUCCESS: WAIT_MED_DB rejected, no T3 stall at low
 * priority in 16800 frames). Test 21 with the sound thread on WAIT_DELAY only (no more A/B,
 * whose MED windows made the Sky High stutter) and its logging kept, plus a 64-pass history:
 * a pass that finds the driver empty snapshots it (source/sound.c), the frame log gets it as
 * "# t3h" lines and the card's second T3 row shows the latest one after loading (longest gap,
 * driver frames the pass before found, FIFO frames, chunks submitted).
 *
 * Test 21 (after test 20 SUCCESS: conversion off the game thread, 0 late frames).
 * Test 20 plus the sound thread's timing. Tests 17b and 20 each had one 5.6-7.4 ms audio
 * dropout with no late frame, the music going on right after it: the sound thread (T3) had not
 * fed the driver for ~16-50 ms while the game made its sound on time. Lead: T3 waits between
 * its 1 ms polls at low SMT priority on core 1 beside blitter band T2 at medium.
 *
 *  - source/sound.c measures each pass (gap from the last, lateness of the wait, ymz_run,
 *    driver read, submits): events (gaps over 4 ms, empty driver) to a ring, the log (8 ms+
 *    or empty) and the frame log ("# t3" lines), the longest gap/lateness per frame to three
 *    new frame-log columns;
 *  - after loading the game thread switches T3's wait every WAIT_AB_FRAMES (600) between
 *    WAIT_DELAY (low priority + db16cyc, tests 10c-20) and WAIT_MED_DB (medium priority, 8 x
 *    db16cyc between timebase reads); card rows "T3 WAIT" per mode (T3 loops/s, gaps over 2
 *    and 4 ms, longest gap and lateness; band T2/T4 and game CPU means, late frames) and
 *    "T3 EVENTS" in the clock's 4 rows.
 *
 * Test 20 (after test 19 SUCCESS: ghost inputs gone). Test 19 plus the screen
 * conversion (VRAM -> game texture) off the game thread. Tests 17b-19 left one late frame per
 * attract loop (the Garden explosion) and test 18 four in 26 min of play: the game thread's
 * CPU 14.3-15.7 ms + the conversion 1.3-1.9 ms (+ present) passed the ~16.0 ms a frame has.
 *
 *  - each blitter job (draw list) now ends with its conversion on the two blitter workers:
 *    workers_start notes the scroll the job is kicked with (ibara writes the scroll, then
 *    kicks), and each worker, after drawing its rows of the job, converts the screen rows that
 *    lie on its own VRAM rows (row % 2 = band: nothing else writes them), flushes them and
 *    stores their row hashes. At the vblank the game thread only checks that no job ran since
 *    without a conversion and the scroll is the same, folds the 240 row hashes into the screen
 *    hash and hands the texture to the GPU; otherwise (boot before the workers, a one-band
 *    list, the scroll changed after the kick) it converts as before. No job since the last
 *    frame and the same scroll: the texture and hash are still right (only jobs write VRAM);
 *  - the conversion computes the colour with shifts instead of test 19's 128 KB table (same
 *    pixels and hash);
 *  - card row "CONV": frames shown from the workers' conversion, unchanged, converted on the
 *    game thread (after loading), and the workers' time per conversion; LOG_SHOWN 5 -> 4.
 *
 * Test 19 (after test 18: slowdown SUCCESS = goal 16 done, but "ghost inputs":
 * controls sometimes held longer than pressed). Test 18 plus the pads read during file writes.
 *
 * Test 18's recording and frame log showed the cause: the USB thread reads the pads only in
 * usb_task's loop (usb_do_poll, then pads_update), and the same loop does the recorder's and
 * the frame log's file writes, each one fopen..fclose with no pad read until it returns. 720
 * writes in 26 min; the 22 longest (0.33-0.47 s, a backlog after the write gate held for up
 * to 20 s) let no input change through where ~40 were due, and the releases came right
 * after them (the ship kept moving). Now:
 *
 *  - wgate_io() marks the thread doing a write (pad_io_mark); source/tdelay.c's wait loop,
 *    which tinyehci runs in 10 us steps for every transfer to the stick, calls pads_io_poll()
 *    every PAD_IO_US while that thread waits: usb_poll() on each OHCI bus (usbfix/ohci_poll.c:
 *    the done queue, so usbctrl's report callback stores the pad's new report, and root hub
 *    changes, which only set a scan flag) and pads_update without the rumble probe. Hub scans
 *    (usb_daemon: enumeration on plug/unplug) and the probe stay in usb_task's loop. The OHCI
 *    stack and tinyehci (the stick, EHCI) share no state, and it all runs on the one thread;
 *  - card row "PAD GAP": the longest time between two pad reads with a write in between
 *    (test 18: up to ~450 ms), how many such gaps passed 20 ms, the longest gap without a
 *    write (the card, hub scans) and the pad reads made inside writes.
 *
 * Test 18 (goal 16: play with the timing fitted to the user's PCB attract capture
 * and judge its slowdown; test 17b SUCCESS). Test 17b without its A/B:
 *
 *  - pcbx_adjust always runs the integer form (pcbx_dbl stays 0; test 17b: ~8% less game CPU
 *    than the double expressions, late frames 2 vs 50 on the same attract);
 *  - the RAM hash stays off unless LB switches it on (as test 17b);
 *  - the card's two FIT ADJUST rows are now one row per timing model, after loading, frames
 *    without the RAM hash: frames run, the game's own dropped vblanks (its slowdown, as a share
 *    of the vblanks), game-thread CPU mean/max and late frames; ">" marks the model running
 *    now. RB still switches the model at the next vblank, so the two can be compared in play.
 *
 * Test 17b (debug build after test 17 = goal 16 FAILURE #1: the PCB fit ran at
 * 80% at best when the console booted without Ethernet). Test 17's frame log showed two
 * causes, both isolated here:
 *
 *  - with no clock the attract check against the PC run is on, and its cv1k_ram_hash() (8 MB)
 *    took ~22.4 ms of the game thread every 4th frame, so every one of those frames missed its
 *    vblank (4 frames per 5 vblanks = 80%). Now the RAM hash is OFF unless LB switches it on
 *    (the screen and sound checks stay: they cost nothing); its time is on the CHECK row;
 *  - on the same attract content the fit cost the game thread ~21% more than MAME 0.289's
 *    timing (heavy stretch 10.65 vs 8.79 ms per frame, 54 late frames in 4637 vs 1 in 20086):
 *    runtime/pcb.c pcbx_adjust() scaled penalties as (u32)((double)p * scale + 0.5), and on
 *    the 360 the int <-> double conversions go through memory (load-hit-store) on every
 *    penalised access. pcb.c now has an integer form for the fit's scales (same values, PC:
 *    tools/xenon/tenths_check.c, the fit reference run's trace and test 17's recording equal
 *    on every frame); pcbx_dbl = 1 runs the old double expressions. The two alternate every
 *    ADJ_WINDOW emulated frames (the game runs identically either way), and the card shows
 *    each one's game-thread CPU time and late frames;
 *  - late frames are no longer hidden while the check runs: hash frames count as HASH in the
 *    late row, and the late frames without a hash are split by timing model (FIT / MAME);
 *  - frame log flags 64 (the RAM hash ran) and 128 (pcbx_adjust ran its double expressions).
 *
 * Test 17: test 16 with the timing fitted to the user's PCB attract capture (goal 16) from
 * boot, RB switching it to MAME 0.289's and back (runtime/pcb.c pcb_timing_fit).
 *
 * Test 16: the real date and time in the game's RTC9701 (user request
 * 2026-10-19: network time when the console clock is unset, shown as CET/CEST).
 *
 * Every test so far started the RTC9701 at 2026-01-01 12:00 because libxenon's
 * gettimeofday (SMC command 0x04) never gave a date in 2020-2099. Test 16 is test 15's
 * game (goal 15 runtime and gen/ibara_drc, pcb model, recorder, frame log, write gate)
 * without the compiled-in replay (pads drive the game from frame 0, as in test 14), plus
 * source/clock.c, source/timecalc.c, netfix/sntp.c and netfix/enet_quiet.c:
 *
 *  - at boot, before the other hardware threads run, thread 0 asks the SMC for its clock
 *    itself (stale messages drained, only a reply starting with 0x04 taken, 200 ms
 *    limit) and keeps the raw reply for the card;
 *  - while the ROMs load, thread 3 (the sound thread's, idle until the game starts) brings
 *    up Ethernet (libxenon's enet driver without its printf), gets an address by DHCP and
 *    asks time.cloudflare.com / time.google.com (fixed anycast addresses: libxenon's lwIP
 *    has no DNS) by SNTP, then releases the lease and stops the NIC. Nothing on the
 *    network after that;
 *  - at game start (after loading and the network task, whichever ends last): network
 *    time, else the console clock if it holds a 2020-2099 date, else 2026-01-01 12:00, in
 *    Central European time (CEST from the last Sunday of March to the last Sunday of
 *    October, 01:00 UTC); the PC check showed timecalc.c = glibc localtime with
 *    Europe/Rome on every transition 2020-2099 and SNTP answers from all four servers;
 *  - the recording's "# rtc" line carries the time the game got and its source, so
 *    stock MAME (-rtc) and host/pc (-time) replay it as before;
 *  - the attract check against the PC run and the sound check need the PC run's RTC, so
 *    they only run when no clock was found (2026-01-01); otherwise the card says OFF;
 *  - card rows: the network task (phase, server, round trip, stratum), link and DHCP, the
 *    SMC's raw reply and its date in UTC (and its offset from network time), and NOW (the
 *    chosen clock carried on the timebase) next to the game's own RTC9701 registers.
 *
 * Test 15: test 14d (goal 14 SUCCESS: no late frames, no audio gaps)
 * with the runtime and gen/ibara_drc of goal 15, which make the pcb model follow stock MAME
 * 0.289 more closely (PLAN.md "Goal 15"): every delay slot of a not-taken bt/s, bf/s charged
 * (413 were not), MAME's own cycles for RTE/TRAPA/LDC SR/MAC/STC.L bank and its uncharged
 * checkints updates, timer and vblank interrupts taken at the update point where the cycle
 * count runs out (UPD -> rt_upd_event; block starts no longer check), the idle read waking
 * exactly 1024 cycles later, vblank IRQ k at k frames from power-on. Host side unchanged
 * except: the replay of rec0001 is checked against the new model's PC replay (source/replay.h
 * from `rec.py header --expect work/g15/rec0001/pc/trace.txt`; the recording itself came from
 * the old model, which differs from frame 29 on) and the attract/sound check tables come from
 * the new model's PC run (work/g15/exp). What this build checks on hardware: the new event
 * path is correct on the PPE (replay 17534/17534 = PC) and costs no late frames.
 *
 * Test 14d: test 14c (SUCCESS: late frames after loading 295 -> 22, no
 * heavy CPU frames left) against the last 22. All of them were file writes on the USB thread
 * (thread 5: recording every 2 s, frame log every 4 s, 58 ms each), which shares core 2 with
 * blitter band 1 (thread 4): band 1 ran 1.8x slower for the 3-5 frames of each write, too
 * slow in the heavy part of stage 1 (band 0 6-9 ms there). Changes, nothing else:
 *
 *  - the USB thread runs at low priority all the time (its work too, not only its waits);
 *    source/tdelay.c replaces libxenon's udelay/mdelay/delay, which always ended at medium
 *    priority, with versions that put the thread back to its own priority
 *    (thread_prio_low[]);
 *  - a write gate (source/wgate.c): a write that falls due while the blitter is busy (band 0
 *    at 5 ms or more in the last 30 emulated frames) waits until it is not, at most 20 s;
 *    the text keeps piling up meanwhile (bigger buffers), nothing is lost;
 *  - card rows GATE (writes let through, held, the longest hold, forced at 20 s, udelay
 *    calls on thread 5 = the new udelay is the one linked) and IO (file operations, their
 *    time, frames with a write going on, band 1 / band 0 time in those frames and in the
 *    others, late frames with a write going on); the sampler's table shows 3 functions;
 *  - frame log flags 16 (a write ran during the frame) and 32 (the gate held a write).
 *
 * Test 14c: test 14b (SUCCESS: the replay matched 17534/17534) with the
 * pcb model's slow path rewritten for the in-order PPE (runtime/pcb.c). Test 14b found
 * access_penalty = 27.5% of thread 0 in heavy frames (6.1 ms), 186-268 cycles per call, the
 * samples on load-hit-store stalls in the u8 lru[]/dirty[] loops. Now: the four LRU ranks of
 * a set in one word, updated in registers; tags compared in registers; the BSC timings per
 * area precomputed at register writes; access_penalty inlined. Same penalties and cache state
 * as before on every access (PC check build -DPCB_AB over rec0001 and attract). Everything
 * else is test 14b: the same replay, checks, sampler and frame log, so the files compare
 * directly with 14b's (late frames after load in 14b: 295).
 *
 * Test 14b: debug build for test 14's FAILURE (sound lag and
 * choppiness while the game slows down). Test 14's video and recording: 234 emulated frames
 * after loading took two vblanks on the 360 (all in heavy stretches, none on a vblank where
 * the game itself dropped a logic frame), the late-frame log blames the game thread's CPU
 * time (15-16.4 ms for 1706K SH-3 cycles), and every audio gap sits in those stretches.
 * Test 14b measures where that time goes, on the same frames every run:
 *
 *  - the 360 replays the user's recording rec0001.txt by itself (source/replay.h from
 *    tools/rec/rec.py header: its RTC, its input ports from the same vblanks, pads ignored
 *    until frame REPLAY_FRAMES) and checks every frame's screen hash and logic word against
 *    the recording (PC: host/pc replays it equal on all 17534 frames);
 *  - a PC sampler on hardware thread 0 (the game thread) from frame 1200 to the end of the
 *    replay: decrementer every ~20 us with MSR[EE] = 1, SRR0 into a ring (excfix/except.S),
 *    drained per vblank into per-instruction and per-function histograms, all frames and
 *    heavy frames (CPU 13+ ms) apart; written to <dev>:/ibara360/profNNNN.txt at the end of
 *    the replay, the top functions on the card (source/prof.c);
 *  - a frame log for every vblank (times + the runtime's counters: SH-3 cycles, pcb
 *    penalties, slow accesses, misses, slow fetches, idle steps, events, I/O) to
 *    <dev>:/ibara360/perfNNNN.txt, for a fit of the 360's cost per event;
 *  - the recorder keeps running (the replay's own recording, then the user's play).
 *
 * Test 14: test 13 (goal 13 SUCCESS) plus a
 * recorder for replays on the PC host and in stock MAME 0.289 (source/recorder.c,
 * tools/rec/rec.py):
 *
 *  - every emulated vblank, after the pads are turned into the board's ports, an entry:
 *    the ports from that vblank on, the screen hash (always computed now, as the check
 *    and host/pc's trace compute it), ibara's logic counter word 0C28674C and the display
 *    vblanks the 360 took for the frame;
 *  - the USB thread appends them as text to <dev>:/ibara360/recNNNN.txt on the stick the
 *    set came from (a new file per power-on), at most ~2 s behind the game;
 *  - card rows REC (file, frames, input changes) and SAVED (last frame on the stick,
 *    writes and their time); the on-screen log is two lines shorter.
 *
 * Test 13: test 12 with the `pcb` cost mode, i.e.
 *
 *  - runtime built with -DCV1K_PCB: MAME 0.289's SH7709S cache and SDRAM timing
 *    (runtime/pcb.c, a port of sh7709s.cpp: 16 KB 4-way cache with LRU and dirty lines,
 *    SDRAM precharge/RCD/write-back costs from the BSC registers the game writes), with the
 *    quirks stock MAME has (stale fetch pc, groups 0/4 only, arg0) and its idle speedup;
 *  - gen/ibara_drc (sh3rec --drc): cycles charged as MAME's SH DRC charges them (not at
 *    a not-taken conditional branch). On the PC this drops 225 frames in the 18980 logic
 *    frames of the attract where stock MAME 0.289 drops 228 (3 frames differ), and the
 *    logic cycles are within 0.2% of MAME's debugger run;
 *  - the check against the PC run is back (as tests 6-8): screen hash every frame, RAM
 *    hash every RAM_CHECK_EVERY frames, until the first input or EXPECT_FRAMES; the sound
 *    check's table is the pcb PC run's;
 *  - card rows for the model (penalty cycles, accesses, misses per frame) and for the
 *    game's own slowdown (vblanks without a logic frame), in place of the blitter rows.
 *
 * Test 12 (goal 12 SUCCESS): test 11d with
 *
 *  - the blitter fixed at V0 (the MAME-style routines; with padded rows the fastest on
 *    the 360 in test 11d), no rotation;
 *  - gen/ibara recompiled with the 22 entry points the runtime used to interpret
 *    (work/missed12.txt; PC: screens equal on all frames of attract, play and coin runs,
 *    RAM differs only in stack leftovers, the attract's sound is bit-identical);
 *  - hardware thread 1 stopped (libxenon xenon_sleep_thread, as xenon_make_it_faster does
 *    at boot), so the game thread has core 0 to itself; USB moves to thread 5;
 *  - the card drawn on thread 5 between USB polls into the hidden one of two card
 *    textures; the game thread only hands it to the GPU (test 11d: 2.5 ms on the game
 *    thread every 6th frame);
 *  - every late emulated frame logged with its times (CPU and SH-3 cycles run, band
 *    wait, conversion, present) and counted by cause; a CPU time histogram and the
 *    game thread's ns per 1000 SH-3 cycles run.
 *
 * Test 11d: test 11 with VRAM
 * rows padded from 16384 to 16512 bytes (-DCV1K_VRAM_STRIDE=0x2040, runtime/cv1k.h) and
 * rows starting on a cache line. The PC census (runtime/blit_census.inc) found the cloud
 * stage drawn as tall narrow strips: with 16 KB rows a column's rows share 8 of the L2's
 * 1024 sets, so each strip evicts the lines the next one needs (model: 125k L2 misses per
 * frame on the clouds, 16-43k anywhere else; 13.8k with padded rows). The game's pixels
 * are the same (PC: screen, RAM and all of VRAM every 60 frames equal with both strides,
 * attract and play, V0-V3, 1 and 2 bands). Also: test 11c's TLB reload counters
 * (excfix/except.S, source/tlbstat.h): per variant the band threads' reloads per frame on
 * the clouds, and per hardware thread reloads per second and the longest run of reloads
 * within one 64 KB page (a livelock, as in test 11c, shows as a huge run).
 *
 * Test 11: test 10c with the
 * blitter's draw routines rotated every VAR_FRAMES emulated frames (runtime/blitter.c
 * blitter_fast): V0 = the MAME-style routines of tests 6-10c, V1 = per-op tables
 * (runtime/blit_fast.inc: tint and alpha folded into lookup tables, the three channels
 * added and saturated in one word), V2 = V1 without the per-pixel transparency branch,
 * V3 = V2 + a prefetch of the rows two band rows ahead. All four draw the same pixels
 * (checked on the PC: screen, RAM and cycles every frame, all of VRAM every 60 frames,
 * attract and play, 1 and 2 bands), so the game and the sound check are unchanged.
 * Test 10c's cloud stage (attract frames ~7400-9100) ran at 30 Hz with both bands at
 * 14-17 ms. The card has a row per variant: all frames, and the cloud stretch alone
 * (attract frames CLOUD_FIRST-CLOUD_LAST while the sound check runs, i.e. before any
 * input), with the band time per drawn pixel.
 *
 * Test 10c: test 10b with the sound thread's wait fixed
 * at D (low priority + db16cyc), the mode that held 60 Hz with clean sound in 10b
 * (N: 64% late, 683 underruns; L and D: 0% late, 1 and 4 underruns). No rotation: the
 * card's D row covers the whole run. Underrun log lines also give the display's
 * missed-vblank count, to tell whether each one followed a missed vblank.
 *
 * Test 10b: debug build for test 10's failure.
 *
 * Test 10 ran at 30 Hz: the blitter band on T2 took 18-22 ms (4.9 ms in test 9) while
 * the sound thread on T3, the other thread of the same core, waited between polls in
 * an mftb loop at normal priority (the USB thread and the band workers wait at low
 * priority). Test 10b is test 10 with the sound thread's wait rotated every
 * MODE_FRAMES emulated frames: N = test 10's loop, L = low priority (or 1,1,1),
 * D = low priority plus db16cyc (or 31,31,31) in the loop, as libxenon's udelay. The
 * card has a row per mode (frame, late, CPU, wait, bands, underruns, sound polls/s).
 *
 * Test 10: ibara with pads and sound.
 *
 * Test 9 (pads, no sound) passed on hardware. Test 10 adds the YMZ770: the game's
 * register writes are queued with their SH-3 cycle (runtime/ymz770.c), and the sound
 * thread on SOUND_THREAD (3) replays them through the chip model (bit-exact with
 * MAME 0.289 on the PC) and the 48 kHz converter into libxenon's sound driver
 * (source/sound.c). Until the first input, with the console clock unset (the PC run's
 * RTC), the chip samples are checked against the PC attract run every 60 frames.
 *
 * From test 9:
 *
 *  - USB on hardware thread USB_THREAD (1) from the end of loading: usb_do_poll every
 *    USB_PERIOD_US, pad reports turned into arcade bits, connection probed every
 *    PROBE_MS with a zero rumble (usbctrl_set_rumble fails once libxenon has detached
 *    the pad; libxenon keeps the last report after an unplug). Attach/detach work (up to
 *    2 s in tinyehci) no longer stops the frame loop;
 *  - pad 0 = player 1, pad 1 = player 2 (MAME's cv1k port layout): D-pad or left stick
 *    = joystick, A/B/X/Y = buttons 1-4, START = start, BACK = coin (a COIN_FRAMES pulse
 *    per press, as a coin mech gives), GUIDE = the board's S3 test button;
 *  - the RTC9701 starts from the console clock (SMC, through gettimeofday), as a PCB's
 *    battery-backed RTC would; it falls back to 2026-01-01 12:00 if the clock is unset;
 *  - no check against the PC run (inputs and the clock change the game), no
 *    configuration rotation; threads 3 and 5 stay free (sound, later).
 *
 * EEPROM: blank at every boot (factory settings, default high scores); nothing is
 * written to USB.
 *
 * Kept from tests 3c-8: usbfix/ohci_fix.c in place of libxenon's ohci.o, the on-screen
 * log of everything libxenon prints, tb_read(), loading on LOADER_THREAD (2), the
 * blitter bands on worker threads, xenon_make_it_faster(XENON_SPEED_FULL) at boot. */
#include <malloc.h>
#include <stdarg.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/time.h>
#include <time.h>

#include <console/console.h>
#include <input/input.h>
#include <ppc/cache.h>
#include <ppc/timebase.h>
#include <time/time.h>
#include <usb/usbmain.h>
#include <xenon_soc/xenon_power.h>
#include <xenon_sound/sound.h>
#include <xenos/edram.h>
#include <xenos/xe.h>
#include <xenos/xenos.h>

#include <xenon_nand/xenon_config.h>

#include "card.h"
#include "clock.h"
#include "cube_shaders.h"
#include "cv1k.h"
#include "expect.h"
#include "expect_blk.h"
#include "pcbx.h"
#include "prof.h"
#include "recorder.h"
#include "romload.h"
#include "settings.h"
#include "sound.h"
#include "tlbstat.h"
#include "usbtime.h"
#include "wgate.h"

/* drivers/newlib/newlib.c: every write to stdout goes here when set */
extern void (*stdout_hook)(const char *buf, int len);
/* runtime/sh3_rt.c */
void rt_init(void);

/* test 38: the two games in this ELF: gen/ibara_drc's recomp_game and gen/ibarablk_drc's
 * (sh3rec --prefix blk_) blk_recomp_game, both on the same runtime */
extern const recomp_game_t recomp_game, blk_recomp_game;
struct game_info {
	const char *title;            /* the menu's and the log's name */
	const char *tag;              /* the card's title row */
	const recomp_game_t *code;
	uint32_t logic_word;          /* the logic-frame counter (upper 16 bits), in each frame loop */
	const char *gen;              /* for the recording's header */
	const uint32_t (*expect)[2];  /* the attract check: the PC run's screen and RAM hash per frame */
	unsigned expect_frames;
};
static const struct game_info games[NSETS] = {
	[SET_IBARA] = {"IBARA", "IBARA", &recomp_game, 0x0C28674Cu, "gen/ibara_drc", expect, EXPECT_FRAMES},
	[SET_IBARABLK] = {"IBARA KURO BLACK LABEL", "IBARABLK", &blk_recomp_game, 0x0C2B1A54u, "gen/ibarablk_drc",
	                  expect_blk, EXPECT_BLK_FRAMES},
};
static int game_set = SET_IBARA;               /* the chosen game, from the menu on */
static const struct game_info *game = &games[SET_IBARA];
static int game_chosen;                        /* game / game_set are the choice */
static volatile int menu_on, menu_sel;         /* the pad menu is up; the highlighted set */
/* libxenon xenon_power.c (not in the installed header): CPU clock setting, 1 = full */
int xenon_get_speed(void);
/* drivers/usb/usbctrl.c; input.h's set_controller_rumble() drops the result:
 * 0 = the driver has a pad in that slot */
extern int usbctrl_set_rumble(int port, uint8_t l, uint8_t r);

#define GAME_W 320 /* CV1000 raster, as the blitter writes it; shown ROT270 */
#define GAME_H 240
#define CARD_W 400 /* status card, shown at 2x right of the game */
#define CARD_H 360

#define HZ_WINDOW 120
#define STAT_FRAMES 60 /* timing averages and maxima over this many emulated frames */
#define RTC_DEFAULT 2026, 1, 1, 5, 12, 0, 0 /* when no clock is found */
#define NET_WAIT_MS 40000 /* test 16: the longest wait for the network task after loading */
#define CARD_EVERY 6   /* the card is redrawn and uploaded every 6th displayed frame */

#define BANDS 2
static const int band_thread[BANDS] = {2, 4}; /* one per core 1 and core 2 (test 8) */

#define USB_THREAD 5        /* test 12: USB and the card on core 2's second thread */
#define STOP_THREAD 1       /* test 12: core 0's second thread is stopped */
#define CTRL_TE1 (1u << 22) /* CTRL (SPR 136): the core's second thread runs (libxenon prepare_sleep) */
#define USB_PERIOD_US 1000  /* usb_do_poll period */
#define PROBE_MS 250        /* connection probe period per pad */
#define NPADS 4
#define STICK_DEAD 16384    /* half travel: the user's sticks drift (test 3) */
#define COIN_FRAMES 6       /* coin line held low this many emulated frames per press */

u8 *cv1k_ram; /* the host owns work RAM (runtime/recomp.h) */

static uint32_t raster[CARD_H][CARD_W];
static unsigned long frame; /* displayed frames */
static int video_w, video_h; /* test 33: the framebuffer, for the card's title row */

/* test 33: the card once the game runs (game thread; RB toggles it, rt_fatal turns it on). It
 * is shown from the first card the USB thread hands over after it was turned on */
static int card_on = 1;
static unsigned card_on_at;
static unsigned card_handoffs; /* cards given to the GPU (test 12) */
static const char *chk_off_why = ""; /* test 33: why the attract checks are off */

static int speed_before, speed_after;

/* 5x7 font, bit 4 = leftmost column; ASCII 32..95, lower case folded to upper */
static const unsigned char font[64][7] = {
	{0x00,0x00,0x00,0x00,0x00,0x00,0x00}, {0x04,0x04,0x04,0x04,0x04,0x00,0x04}, /*   ! */
	{0x0A,0x0A,0x00,0x00,0x00,0x00,0x00}, {0x0A,0x1F,0x0A,0x0A,0x0A,0x1F,0x0A}, /* " # */
	{0x04,0x0F,0x14,0x0E,0x05,0x1E,0x04}, {0x19,0x19,0x02,0x04,0x08,0x13,0x13}, /* $ % */
	{0x0C,0x12,0x14,0x08,0x15,0x12,0x0D}, {0x04,0x04,0x00,0x00,0x00,0x00,0x00}, /* & ' */
	{0x02,0x04,0x08,0x08,0x08,0x04,0x02}, {0x08,0x04,0x02,0x02,0x02,0x04,0x08}, /* ( ) */
	{0x00,0x04,0x15,0x0E,0x15,0x04,0x00}, {0x00,0x04,0x04,0x1F,0x04,0x04,0x00}, /* * + */
	{0x00,0x00,0x00,0x00,0x0C,0x04,0x08}, {0x00,0x00,0x00,0x1F,0x00,0x00,0x00}, /* , - */
	{0x00,0x00,0x00,0x00,0x00,0x0C,0x0C}, {0x01,0x01,0x02,0x04,0x08,0x10,0x10}, /* . / */
	{0x0E,0x11,0x13,0x15,0x19,0x11,0x0E}, {0x04,0x0C,0x04,0x04,0x04,0x04,0x0E}, /* 0 1 */
	{0x0E,0x11,0x01,0x02,0x04,0x08,0x1F}, {0x1F,0x02,0x04,0x02,0x01,0x11,0x0E}, /* 2 3 */
	{0x02,0x06,0x0A,0x12,0x1F,0x02,0x02}, {0x1F,0x10,0x1E,0x01,0x01,0x11,0x0E}, /* 4 5 */
	{0x06,0x08,0x10,0x1E,0x11,0x11,0x0E}, {0x1F,0x01,0x02,0x04,0x08,0x08,0x08}, /* 6 7 */
	{0x0E,0x11,0x11,0x0E,0x11,0x11,0x0E}, {0x0E,0x11,0x11,0x0F,0x01,0x02,0x0C}, /* 8 9 */
	{0x00,0x0C,0x0C,0x00,0x0C,0x0C,0x00}, {0x00,0x0C,0x0C,0x00,0x0C,0x04,0x08}, /* : ; */
	{0x02,0x04,0x08,0x10,0x08,0x04,0x02}, {0x00,0x00,0x1F,0x00,0x1F,0x00,0x00}, /* < = */
	{0x08,0x04,0x02,0x01,0x02,0x04,0x08}, {0x0E,0x11,0x01,0x02,0x04,0x00,0x04}, /* > ? */
	{0x0E,0x11,0x17,0x15,0x17,0x10,0x0E}, {0x0E,0x11,0x11,0x11,0x1F,0x11,0x11}, /* @ A */
	{0x1E,0x11,0x11,0x1E,0x11,0x11,0x1E}, {0x0E,0x11,0x10,0x10,0x10,0x11,0x0E}, /* B C */
	{0x1C,0x12,0x11,0x11,0x11,0x12,0x1C}, {0x1F,0x10,0x10,0x1E,0x10,0x10,0x1F}, /* D E */
	{0x1F,0x10,0x10,0x1E,0x10,0x10,0x10}, {0x0E,0x11,0x10,0x17,0x11,0x11,0x0F}, /* F G */
	{0x11,0x11,0x11,0x1F,0x11,0x11,0x11}, {0x0E,0x04,0x04,0x04,0x04,0x04,0x0E}, /* H I */
	{0x07,0x02,0x02,0x02,0x02,0x12,0x0C}, {0x11,0x12,0x14,0x18,0x14,0x12,0x11}, /* J K */
	{0x10,0x10,0x10,0x10,0x10,0x10,0x1F}, {0x11,0x1B,0x15,0x15,0x11,0x11,0x11}, /* L M */
	{0x11,0x11,0x19,0x15,0x13,0x11,0x11}, {0x0E,0x11,0x11,0x11,0x11,0x11,0x0E}, /* N O */
	{0x1E,0x11,0x11,0x1E,0x10,0x10,0x10}, {0x0E,0x11,0x11,0x11,0x15,0x12,0x0D}, /* P Q */
	{0x1E,0x11,0x11,0x1E,0x14,0x12,0x11}, {0x0F,0x10,0x10,0x0E,0x01,0x01,0x1E}, /* R S */
	{0x1F,0x04,0x04,0x04,0x04,0x04,0x04}, {0x11,0x11,0x11,0x11,0x11,0x11,0x0E}, /* T U */
	{0x11,0x11,0x11,0x11,0x11,0x0A,0x04}, {0x11,0x11,0x11,0x15,0x15,0x15,0x0A}, /* V W */
	{0x11,0x11,0x0A,0x04,0x0A,0x11,0x11}, {0x11,0x11,0x11,0x0A,0x04,0x04,0x04}, /* X Y */
	{0x1F,0x01,0x02,0x04,0x08,0x10,0x1F}, {0x0E,0x08,0x08,0x08,0x08,0x08,0x0E}, /* Z [ */
	{0x10,0x10,0x08,0x04,0x02,0x01,0x01}, {0x0E,0x02,0x02,0x02,0x02,0x02,0x0E}, /* \ ] */
	{0x04,0x0A,0x11,0x00,0x00,0x00,0x00}, {0x00,0x00,0x00,0x00,0x00,0x00,0x1F}, /* ^ _ */
};

static const unsigned char *glyph(char c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	if (c < 32 || c > 95)
		c = '?';
	return font[c - 32];
}

/* test 25: a pad read on T5 between rows (not for text()'s 1-pixel fills: per string there) */
static void fill(int x, int y, int w, int h, uint32_t c)
{
	int i, j;
	for (j = y; j < y + h; j++) {
		if (w > 1)
			t5_pad_tick();
		for (i = x; i < x + w; i++)
			if ((unsigned)i < CARD_W && (unsigned)j < CARD_H)
				raster[j][i] = c;
	}
}

static void text(int x, int y, uint32_t c, const char *s)
{
	int row, col;
	for (; *s; s++, x += 6) {
		const unsigned char *g = glyph(*s);
		for (row = 0; row < 7; row++)
			for (col = 0; col < 5; col++)
				if (g[row] & (0x10 >> col))
					fill(x + col, y + row, 1, 1, c);
	}
	t5_pad_tick(); /* test 25 */
}

/* ---- on-screen log (any hardware thread) -------------------------------------- */

#define LOG_COLS 65      /* characters per screen line */
#define LOG_LINES 1024   /* ring of wrapped screen lines */
#define LOG_SHOWN 3      /* lines on screen (test 14: two rows to the recorder; 14b: ten to the replay and the sampler; 16: three back; 19: one to PAD GAP; 20: one to CONV; 24: one to the T5 calibration) */
#define LOG_STEP 4       /* frames per scrolled line when behind (15 lines/s) */

struct log_line {
	char s[LOG_COLS + 1];
	uint32_t color;
};

static struct log_line log_ring[LOG_LINES];
static unsigned long log_total;   /* screen lines ever added */
static unsigned long log_view;    /* screen lines scrolled into view */
static unsigned long log_lost;    /* lines overwritten before they were shown */
static unsigned long log_step_frame;
static volatile int log_busy, hook_busy;

static void spin_lock(volatile int *l)
{
	while (__sync_lock_test_and_set(l, 1))
		;
}

static void spin_unlock(volatile int *l)
{
	__sync_lock_release(l);
}

/* Add one logical line, wrapped, with the display frame number in front. */
static void log_add(uint32_t color, const char *s)
{
	char pre[16];
	int first = 1;
	size_t n = strlen(s);

	snprintf(pre, sizeof(pre), "%6lu ", frame % 1000000);
	spin_lock(&log_busy);
	do {
		struct log_line *l = &log_ring[log_total % LOG_LINES];
		size_t room = LOG_COLS - 7, take = n < room ? n : room;

		if (log_total - log_view >= LOG_LINES) { /* oldest unseen line gets overwritten */
			log_view++;
			log_lost++;
		}
		memcpy(l->s, first ? pre : "     + ", 7);
		memcpy(l->s + 7, s, take);
		l->s[7 + take] = 0;
		l->color = color;
		log_total++;
		s += take;
		n -= take;
		first = 0;
	} while (n);
	spin_unlock(&log_busy);
}

void log_printf(uint32_t color, const char *fmt, ...)
{
	char buf[256];
	va_list ap;

	va_start(ap, fmt);
	vsnprintf(buf, sizeof(buf), fmt, ap);
	va_end(ap);
	log_add(color, buf);
}

/* stdout capture: libxenon's printf output, split into lines. From the end of loading
 * libxenon prints on the USB thread; the lock covers the hand-overs. */
static void (*prev_hook)(const char *buf, int len);
static char hook_line[256];
static int hook_len;

static void log_hook(const char *buf, int len)
{
	int i;

	spin_lock(&hook_busy);
	if (prev_hook)
		prev_hook(buf, len); /* the console, while it is open */
	for (i = 0; i < len; i++) {
		char c = buf[i];
		if (c == '\n') {
			hook_line[hook_len] = 0;
			if (hook_len)
				log_add(C_WHITE, hook_line);
			hook_len = 0;
		} else if (c == '\r') {
			hook_len = 0; /* countdown lines rewrite themselves */
		} else if (hook_len < (int)sizeof(hook_line) - 1) {
			hook_line[hook_len++] = c == '\t' ? ' ' : c;
		}
	}
	spin_unlock(&hook_busy);
}

/* ---- the runtime's log and fatal errors ----------------------------------------- */

static int halted; /* rt_fatal ran: the game is stopped, the card keeps going */
static unsigned interp_entries;
static void halt_loop(void) __attribute__((noreturn));

void rt_log(const char *fmt, ...)
{
	char buf[256];
	va_list ap;
	size_t n;

	va_start(ap, fmt);
	vsnprintf(buf, sizeof(buf), fmt, ap);
	va_end(ap);
	n = strlen(buf);
	while (n && buf[n - 1] == '\n')
		buf[--n] = 0;
	if (!strncmp(buf, "rt: interpreting", 16))
		interp_entries++;
	log_add(C_CYAN, buf);
}

void rt_fatal(const char *fmt, ...)
{
	char buf[256];
	va_list ap;

	va_start(ap, fmt);
	vsnprintf(buf, sizeof(buf), fmt, ap);
	va_end(ap);
	log_printf(C_RED, "FATAL: %s", buf);
	log_printf(C_RED, "FATAL: PC %08X PR %08X SR %08X EMU FRAME %u", (unsigned)cpu.pc,
	           (unsigned)cpu.pr, (unsigned)(cpu.sr | cpu.t), (unsigned)frame_count);
	if (!card_on) { /* test 33: the fatal lines are on the card */
		card_on = 1;
		card_on_at = card_handoffs;
	}
	halted = 1;
	halt_loop();
}

/* ---- timebase ------------------------------------------------------------------ */

static unsigned tb_retries;

uint64_t tb_read(void)
{
	uint32_t u, l, u2;

	for (;;) {
		asm volatile ("mftbu %0" : "=r" (u));
		asm volatile ("mftbl %0" : "=r" (l));
		asm volatile ("mftbu %0" : "=r" (u2));
		if (u == u2)
			return ((uint64_t)u << 32) | l;
		tb_retries++;
	}
}

unsigned tb_us(uint64_t a, uint64_t b)
{
	return (unsigned)((b - a) * 1000000 / PPC_TIMEBASE_FREQ);
}

/* ---- statistics ------------------------------------------------------------------ */

/* sums and maxima in timebase ticks over the current STAT_FRAMES window; the card
 * shows the last finished window */
struct win {
	uint64_t frame, cpu, wait, conv, present, vwait;
	uint64_t band[BLIT_MAX_BANDS];
	uint64_t frame_max, cpu_max, host_max;
	uint64_t spin, cycles;
	unsigned n;
};

static struct win cur, shown;
static unsigned late;      /* emulated frames that took more than 1.5 vblanks */
static unsigned game_frames;

/* test 13: check against the PC run (expect.h) while there is no input */
#define RAM_CHECK_EVERY 4
static struct {
	unsigned matched, ram_checks, stopped_at;
	int failed, stopped, done;
	int off; /* test 16: the RTC is not the PC run's */
	char why[100];
} chk;

/* test 17b: the RAM hash (~22 ms of the game thread on the 360) only while LB has it on */
static int ram_hash_on, hash_this_frame;
static unsigned hash_switches, hash_frames;
static uint64_t hash_sum, hash_max;
static uint32_t prev_hash_any;
static int checking(void);

/* test 18: after loading, frames without the RAM hash, their late frames and game-thread CPU;
 * the game's logic frames and dropped vblanks (pcb_frame). Test 27: one timing model, one set */
static unsigned model_frames, model_late;
static uint64_t model_cpu, model_cpu_max;
static unsigned model_logic, model_drops;

/* test 21: per sound-thread wait mode ([0] WAIT_DELAY, [1] WAIT_MED_DB), after loading: frames,
 * band and game-thread times, late frames; the sound thread's events as the game thread
 * took them from the ring (gaps of T3_LOG_US+ and empty-driver passes also go to the log).
 * Test 22: only [0] fills (no more mode switch) */
#define T3_LOG_US 8000
static unsigned wm_frames[2], wm_late[2];
static uint64_t wm_band[2][2], wm_cpu[2];
static unsigned t3_gap_max_us, t3_gap_max_frame, t3_logged;
static struct t3_event t3_last;
static unsigned t3_empty_after_load; /* test 22: empty-driver events after BOOT_FRAMES */

/* test 13: pcb model and game slowdown, sums over the STAT_FRAMES window */
struct pcb_win {
	uint64_t pen, acc, miss, ifs, stall;
	unsigned n;
};
static struct pcb_win pcur, pshown;
static unsigned logic_frames, logic_drops, logic_drops_win, logic_drops_shown;

/* test 11d: TLB reloads (data + instruction) per second per hardware thread over the
 * last STAT_FRAMES window */
static unsigned tlb_rate[6];

static void tlb_window(void)
{
	static uint64_t seen[6], t_seen;
	uint64_t now = tb_read(), dt = now - t_seen;
	int t;

	for (t = 0; t < 6; t++) {
		uint64_t n = tlbstat[t][TLB_DSI] + tlbstat[t][TLB_ISI];
		if (t_seen && dt)
			tlb_rate[t] = (unsigned)((double)(n - seen[t]) * PPC_TIMEBASE_FREQ / (double)dt);
		seen[t] = n;
	}
	t_seen = now;
}

/* blitter sums (V0 only since test 12): [0] all frames, [1] the attract's cloud stretch */
#define CLOUD_FIRST 7400
#define CLOUD_LAST 9100
struct var_win {
	uint64_t frame, band0, band1, px, tlb; /* tlb: band threads' TLB reloads (data + instruction) */
	unsigned n, late;
};
static struct var_win vars[2];

/* test 12: late frames by cause, CPU time histogram, game thread speed */
enum { LC_CPU, LC_BAND, LC_HOST, LC_OTHER, LC_HASH, LC_N }; /* LC_HASH: test 17b, not logged */
static const char *const lc_name[LC_N] = {"CPU", "BAND", "HOST", "OTHER", "HASH"};
static unsigned late_cause[LC_N];
#define BOOT_FRAMES 1200   /* boot and NOW LOADING (ends ~1100): late frames only counted */
#define LOGIC_WORD (game->logic_word) /* the game's logic-frame counter (upper 16 bits; test 38) */
static unsigned late_boot;
#define CPU_BINS 6
static const unsigned cpu_bin_ms[CPU_BINS - 1] = {4, 8, 10, 12, 14}; /* upper edges */
static unsigned cpu_hist[CPU_BINS];
static uint64_t sum_cpu, sum_exec;         /* all frames: ticks, SH-3 cycles run */
static uint64_t sum_cpu_heavy, sum_exec_heavy; /* frames that ran 1M+ SH-3 cycles */
static uint64_t cpu_max_all, exec_max_all;
static unsigned card_skipped; /* card requests while the last one was still busy (test 33:
                                 card_handoffs moved up) */

struct disp {
	unsigned hz_milli;
	unsigned missed, vbl_timeouts; /* missed: extra vblanks between two frames */
	uint64_t period;               /* the last frame's vblank to vblank time */
	uint64_t present, vwait;       /* the last present(): before the vblank wait, in it */
};
static struct disp disp;

/* ns per pixel with two decimals from ticks and pixels */
static void ns2(char *b, size_t n, uint64_t ticks, uint64_t px)
{
	unsigned c = px ? (unsigned)((double)ticks * 1e11 / PPC_TIMEBASE_FREQ / (double)px) : 0;
	snprintf(b, n, "%u.%02u", c / 100, c % 100);
}

/* ms with two decimals from ticks */
static void ms2(char *b, size_t n, uint64_t ticks)
{
	unsigned us = (unsigned)(ticks * 1000000 / PPC_TIMEBASE_FREQ);
	snprintf(b, n, "%u.%02u", us / 1000, us / 10 % 100);
}

/* test 24: ms with one decimal from us; test 25: ms with two decimals from us */
static void ms1(char *b, size_t n, unsigned us)
{
	snprintf(b, n, "%u.%u", us / 1000, us % 1000 / 100);
}

static void ms2us(char *b, size_t n, unsigned us)
{
	snprintf(b, n, "%u.%02u", us / 1000, us / 10 % 100);
}

static int game_running;

/* ---- pads: USB on hardware thread USB_THREAD ------------------------------------- */

/* arcade-side bits of pad_word (1 = pressed) */
enum {
	A_UP = 0x01, A_DOWN = 0x02, A_LEFT = 0x04, A_RIGHT = 0x08,
	A_B1 = 0x10, A_B2 = 0x20, A_B3 = 0x40, A_B4 = 0x80,
	A_START = 0x100, A_COIN = 0x200, A_TEST = 0x400,
	A_CARD = 0x800,   /* test 33: RB shows / hides the card (tests 17-26: the timing model switch) */
	A_HASH = 0x1000,  /* test 17b: LB switches the check's RAM hash (not a board input) */
	A_ON = 0x80000000u /* a pad is attached in this slot */
};

/* written only by the USB thread, one aligned word per pad (read whole by the game) */
static volatile uint32_t pad_word[NPADS];
static volatile unsigned pad_attaches[NPADS], pad_detaches[NPADS], pad_reports[NPADS];
static volatile unsigned usb_loops, usb_poll_us, usb_poll_max_us, usb_late;
static volatile int usb_alive;

/* test 19: pads read during file writes (pads_io_poll from source/tdelay.c) */
#define PAD_IO_US 1000      /* pad read period inside a write */
#define PAD_GAP_LONG_US 20000
volatile unsigned pad_io_pir;            /* PIR + 1 of the thread inside a write, 0 = none */
const unsigned pad_io_ticks = (unsigned)((uint64_t)PPC_TIMEBASE_FREQ * PAD_IO_US / 1000000);
static volatile unsigned pad_io_starts;  /* writes begun */
static volatile unsigned pad_io_reads;   /* pads_io_poll runs */
static volatile unsigned pad_gap_io_max_us, pad_gap_io_long, pad_gap_else_max_us;
static uint64_t pad_last_read;           /* USB thread only */
static unsigned pad_io_seen;             /* USB thread only */
void ohci_poll_all(void);                /* usbfix/ohci_poll.c */
extern volatile unsigned usbctrl_skipped;      /* test 23: usbfix/usbctrl_fix.c */
extern volatile uint32_t usbctrl_skipped_last; /* port << 24 | the packet's first 3 bytes */
extern int ohci_intr_node_ms; /* test 36: usbfix/ohci_fix.c (test 35), the pads' polling period */
static int my_thread(void);

/* test 24 (source/usbtime.h): T5's time by section between pad reads. sec_to() charges the
 * time since the last change to the running section; pg_read() (each pad read) takes the
 * sections' sums as the gap since the last read and starts them again. USB thread only, the
 * card included (it is drawn on T5 too) */
struct pg_event pg_events[PG_EVENTS];
unsigned pg_event_n;
const char *const pg_sec_name[NSEC] = {"poll", "pads", "probe", "rec", "prof", "draw", "copy", "flush",
                                       "tpoll", "wait", "iopoll", "write"};
const char *const pg_where_name[NPR] = {"loop", "io", "card", "log"};
static uint64_t sec_acc[NSEC], sec_mark;
static int sec_cur = S_WAIT, sec_before_write = S_WAIT;
/* after loading (emulated frame >= BOOT_FRAMES): */
static unsigned pg_over[4];                  /* gaps over 2, 4, 8, 16 ms */
static unsigned pg_max_w_us, pg_max_else_us; /* the longest gap with / without a write in it */
static unsigned pg_load_max_us;              /* before: the longest gap while loading */
static struct pg_event pg_else_top;          /* the longest gap without a write, by section */
static uint32_t sec_max_tk[NSEC];            /* each section's most time in one gap (ticks) */
static unsigned pg_gaps;                     /* reads after loading */
static unsigned pg_where_n[NPR], pg_where_max_us[NPR]; /* test 25: reads by kind, longest gap to one */

static uint64_t sec_to(int s)
{
	const uint64_t t = tb_read();

	if (t > sec_mark)
		sec_acc[sec_cur] += t - sec_mark;
	sec_mark = t;
	sec_cur = s;
	return t;
}

/* the gap just ended, by section in us (the divisions only for gaps that are kept) */
static void pg_fill(struct pg_event *e, uint32_t f, unsigned us, int where, int wrote)
{
	unsigned k;

	e->frame = f;
	e->gap_us = us;
	e->where = (uint8_t)where;
	e->wrote = (uint8_t)wrote;
	for (k = 0; k < NSEC; k++)
		e->sec_us[k] = tb_us(0, sec_acc[k]);
}

static void pg_read(uint64_t now, int where, int wrote)
{
	const uint32_t f = (uint32_t)*(volatile uint64_t *)&frame_count;
	unsigned k;

	if (now > sec_mark) {
		sec_acc[sec_cur] += now - sec_mark;
		sec_mark = now;
	}
	if (pad_last_read) {
		const unsigned us = tb_us(pad_last_read, now);
		if (f >= BOOT_FRAMES) {
			pg_gaps++;
			pg_where_n[where]++;
			if (us > pg_where_max_us[where])
				pg_where_max_us[where] = us;
			for (k = 0; k < NSEC; k++)
				if (sec_acc[k] > sec_max_tk[k])
					sec_max_tk[k] = (uint32_t)sec_acc[k];
			if (wrote) {
				if (us > pg_max_w_us)
					pg_max_w_us = us;
			} else {
				for (k = 0; k < 4; k++)
					if (us > 2000u << k)
						pg_over[k]++;
				if (us > pg_max_else_us) {
					pg_max_else_us = us;
					pg_fill(&pg_else_top, f, us, where, wrote);
				}
			}
		} else if (us > pg_load_max_us) {
			pg_load_max_us = us;
		}
		if (us >= PG_EVENT_US)
			pg_fill(&pg_events[pg_event_n++ & (PG_EVENTS - 1)], f, us, where, wrote);
	}
	memset(sec_acc, 0, sizeof(sec_acc));
}

/* test 24: the card's own sections after loading (timebase ticks) */
static uint64_t card_sum[3];
static uint32_t card_max[3];
static unsigned card_n;

struct pad_info {
	struct controller_data_s c;
	int connected;
	uint64_t last_probe;
};
static struct pad_info pads[NPADS]; /* USB thread only */

static uint32_t map_pad(const struct controller_data_s *c)
{
	uint32_t w = 0;

	if (c->up || c->s1_y > STICK_DEAD)
		w |= A_UP;
	if (c->down || c->s1_y < -STICK_DEAD)
		w |= A_DOWN;
	if (c->left || c->s1_x < -STICK_DEAD)
		w |= A_LEFT;
	if (c->right || c->s1_x > STICK_DEAD)
		w |= A_RIGHT;
	if (c->a)
		w |= A_B1;
	if (c->b)
		w |= A_B2;
	if (c->x)
		w |= A_B3;
	if (c->y)
		w |= A_B4;
	if (c->start)
		w |= A_START;
	if (c->back)
		w |= A_COIN;
	if (c->logo)
		w |= A_TEST;
	if (c->lb)
		w |= A_HASH;
	if (c->rb)
		w |= A_CARD;
	return w;
}

/* test 3c's connection logic: a new report or a successful probe = attached, a
 * failed probe = detached (the last report is dropped). Test 19: no probe inside a file
 * write (the probe is a control transfer, left to usb_task's loop); the gap since the last
 * read goes to the card's PAD GAP row. Test 25: where = PR_* (the probe in PR_LOOP only) */
static void pads_update(uint64_t now, int where)
{
	const uint64_t probe = (uint64_t)PPC_TIMEBASE_FREQ * PROBE_MS / 1000;
	const int may_probe = where == PR_LOOP;
	unsigned starts = pad_io_starts;
	const int wrote = pad_io_pir || starts != pad_io_seen; /* a write ran in the gap */
	int p;

	pg_read(now, where, wrote); /* test 24 */
	if (pad_last_read) {
		unsigned us = tb_us(pad_last_read, now);

		if (wrote) {
			if (us > pad_gap_io_max_us)
				pad_gap_io_max_us = us;
			if (us > PAD_GAP_LONG_US)
				pad_gap_io_long++;
		} else if (us > pad_gap_else_max_us) {
			pad_gap_else_max_us = us;
		}
	}
	pad_last_read = now;
	pad_io_seen = starts;
	if (may_probe)
		sec_to(S_PADS); /* test 24: inside a write the read stays in S_IOPOLL (25: S_TPOLL) */

	for (p = 0; p < NPADS; p++) {
		struct pad_info *pi = &pads[p];
		struct controller_data_s c;

		if (get_controller_data(&c, p)) {
			pi->c = c;
			pad_reports[p]++;
			if (!pi->connected) {
				pi->connected = 1;
				pad_attaches[p]++;
				log_printf(C_YELLOW, "PAD %d ATTACHED (NEW REPORT)", p);
			}
		}
		if (may_probe && now - pi->last_probe >= probe) {
			int r;
			sec_to(S_PROBE);
			r = usbctrl_set_rumble(p, 0, 0);
			sec_to(S_PADS);
			pi->last_probe = now;
			if (r == 0 && !pi->connected) {
				pi->connected = 1;
				pad_attaches[p]++;
				log_printf(C_YELLOW, "PAD %d ATTACHED (PROBE OK)", p);
			} else if (r != 0 && pi->connected) {
				pi->connected = 0;
				pad_detaches[p]++;
				memset(&pi->c, 0, sizeof(pi->c));
				log_printf(C_YELLOW, "PAD %d DETACHED (PROBE FAILED)", p);
			}
		}
		pad_word[p] = pi->connected ? (map_pad(&pi->c) | A_ON) : 0;
	}
}

/* test 19: wgate_io() around every file write: while pad_io_pir names this thread,
 * source/tdelay.c's waits call pads_io_poll() */
void pad_io_mark(int on)
{
	const int usb = my_thread() == USB_THREAD; /* test 24: the sections are T5's */

	if (on) {
		pad_io_starts++;
		__sync_synchronize();
		pad_io_pir = (unsigned)my_thread() + 1;
		if (usb) {
			sec_before_write = sec_cur;
			sec_to(S_WRITE);
		}
	} else {
		pad_io_pir = 0;
		if (usb)
			sec_to(sec_before_write);
	}
}

/* test 19: called from the write's waits (every PAD_IO_US): the OHCI buses' completed
 * transfers (the pads' reports) and the pad words, without hub scans or the probe */
void pads_io_poll(void)
{
	static int busy;
	int was;

	if (busy)
		return;
	busy = 1;
	was = sec_cur; /* test 24: S_WRITE; back to it after the read */
	sec_to(S_IOPOLL);
	ohci_poll_all();
	pads_update(tb_read(), PR_IO);
	pad_io_reads++;
	sec_to(was);
	busy = 0;
}

/* test 25: PR_CARD / PR_LOG while usb_task runs the card render / prof_service, else 0 (also
 * inside the read itself). Written by the USB thread only */
static volatile int t5_ticks;

/* test 25: the read as pads_io_poll's, inside T5's long work; a pad read may log, so never
 * called with log_busy held (draw_card draws its log lines after unlocking). The thread
 * check: the game thread's last card while loading may overlap T5's first prof_service */
void t5_pad_tick(void)
{
	const int where = t5_ticks;
	int was;

	if (!where || tb_read() - pad_last_read < pad_io_ticks || my_thread() != USB_THREAD)
		return;
	t5_ticks = 0;
	was = sec_cur; /* S_DRAW / S_COPY / S_PROF; back to it after the read */
	sec_to(S_TPOLL);
	ohci_poll_all();
	pads_update(tb_read(), where);
	sec_to(was);
	t5_ticks = where;
}

static uint8_t usb_stack[64 * 1024] __attribute__((aligned(128)));

/* test 12: the card is drawn on USB_THREAD. The game thread asks for one every
 * CARD_EVERY frames (card_req); the USB thread draws it into the hidden texture
 * (card_target), flushes it and sets card_done; the game thread then hands that texture
 * to the GPU (Lock/Unlock: the GPU cache invalidation goes through the command ring,
 * which only the game thread writes) and shows it from then on. */
static volatile unsigned card_req, card_done, card_target;
static unsigned card_given;
static uint8_t *card_mem[2];      /* the two card textures' CPU addresses */
static struct XenosSurface *ctex2[2];
static int card_front;            /* the texture the GPU draws */
static volatile unsigned card_us, card_us_max;

static void draw_card(void);

static void card_render(void)
{
	uint64_t t0 = sec_to(S_DRAW), ts[4];
	unsigned t = card_target, us;
	uint8_t *p = card_mem[t];
	int y, k;

	ts[0] = t0;
	t5_ticks = PR_CARD; /* test 25: pad reads inside the draw and the copy */
	draw_card();
	ts[1] = sec_to(S_COPY);
	for (y = 0; y < CARD_H; y++) {
		t5_pad_tick();
		memcpy(p + y * ctex2[t]->wpitch, raster[y], CARD_W * 4);
	}
	t5_ticks = 0;
	ts[2] = sec_to(S_FLUSH);
	memdcbst(p, CARD_H * ctex2[t]->wpitch);
	ts[3] = tb_read();
	us = tb_us(t0, ts[3]);
	card_us = us;
	if (us > card_us_max)
		card_us_max = us;
	if (*(volatile uint64_t *)&frame_count >= BOOT_FRAMES) { /* test 24: draw, copy, flush */
		for (k = 0; k < 3; k++) {
			const uint32_t d = (uint32_t)(ts[k + 1] - ts[k]);
			card_sum[k] += d;
			if (d > card_max[k])
				card_max[k] = d;
		}
		card_n++;
	}
}

/* test 14d: 1 = the thread runs at low priority; source/tdelay.c's udelay returns it there */
volatile int thread_prio_low[6];

/* usb_do_poll every USB_PERIOD_US, a card when asked. Test 14d: all of it at low thread
 * priority (file writes, card, polls, waits), so that the band worker on the same core keeps
 * the issue slots while it draws. */
static void usb_task(void)
{
	const uint64_t period = (uint64_t)PPC_TIMEBASE_FREQ * USB_PERIOD_US / 1000000;
	uint64_t next = tb_read();
	unsigned card_seen = card_req;

	thread_prio_low[USB_THREAD] = 1;
	asm volatile ("or 1,1,1");
	sec_mark = tb_read(); /* test 24: T5's sections from here on */
	usb_alive = 1;
	for (;;) {
		uint64_t t0 = sec_to(S_POLL), now;
		unsigned us;
		int drew = 0;

		asm volatile ("or 1,1,1"); /* in case anything on the way set medium */

		usb_do_poll();
		now = tb_read();
		us = tb_us(t0, now);
		usb_poll_us = us;
		if (us > usb_poll_max_us)
			usb_poll_max_us = us;
		pads_update(now, PR_LOOP);
		usb_loops++;
		sec_to(S_REC);
		drew = rec_service(); /* test 14: the recording's file work (a write of a few ms every 2 s) */
		drew |= eeprom_service(); /* test 33: the EEPROM save (its time counts as REC) */
		sec_to(S_PROF);
		t5_ticks = PR_LOG; /* test 25: pad reads inside the frame log's text (source/prof.c) */
		drew |= prof_service(); /* test 14b: frame log, samples file, card table */
		t5_ticks = 0;
		now = tb_read();

		if (card_req != card_seen) {
			card_seen = card_req;
			__sync_synchronize();   /* card_target before the request */
			card_render();
			__sync_synchronize();   /* the texture before done */
			card_done = card_seen;
			now = tb_read();
			drew = 1;
		}

		sec_to(S_WAIT);
		next += period;
		if (next < now) { /* a long poll (enumeration) or a card: start again from now */
			if (!drew)
				usb_late++;
			next = now; /* test 25: poll at once (test 24: now + period, a 1 ms wait after every card) */
		}
		while (tb_read() < next) /* low priority, as all of this thread */
			;
	}
}

static int usb_thread_start(void)
{
	uint64_t t0 = tb_read();

	if (xenon_run_thread_task(USB_THREAD, usb_stack + sizeof(usb_stack) - 256, usb_task))
		return -1;
	while (!usb_alive)
		if (tb_us(t0, tb_read()) > 1000000)
			return -1;
	return 0;
}

/* test 12: thread 1 to sleep for good (prepare_sleep + cpusleep: it clears its own
 * thread-enable bit); 0 when CTRL shows it stopped */
static unsigned ctrl_after;
static int t1_stopped;

static unsigned ctrl_read(void)
{
	unsigned v;
	asm volatile ("mfspr %0, 136" : "=r" (v)); /* CTRL */
	return v;
}

static int stop_thread1(void)
{
	uint64_t t0 = tb_read();

	while (xenon_is_thread_task_running(STOP_THREAD))
		if (tb_us(t0, tb_read()) > 1000000)
			return -1;
	xenon_sleep_thread(STOP_THREAD);
	t0 = tb_read();
	while (ctrl_read() & CTRL_TE1)
		if (tb_us(t0, tb_read()) > 1000000)
			break;
	ctrl_after = ctrl_read();
	t1_stopped = !(ctrl_after & CTRL_TE1);
	return t1_stopped ? 0 : -1;
}

/* ---- pads to the board's inputs (game thread, once per emulated frame) ------------ */

static uint32_t prev_word[2];
static int coin_left[2];
static unsigned coins[2];

/* test 17: the timing model (runtime/pcb.c). Test 27 (user 2026-10-20: "don't build mame or
 * fit anymore"): FIT+ 2.9% from boot and nothing else, RB does nothing; the recording gets
 * "# timing 0 fitplus2". Test 28: FIT+ 3.0% instead, "# timing 0 fitplus3". Test 29: FIT+
 * 3.05%, "# timing 0 fitplus4". Test 30: FIT+ 3.17%, "# timing 0 fitplus5". Test 31: FIT+
 * 3.97%, "# timing 0 fitplus6". Test 32: FIT+ 3.75%, "# timing 0 fitplus7". */
static void timing_apply(void)
{
	pcb_timing_model(PCB_MODEL_FITPLUS7);
	rec_timing = 9; /* recorder.h */
}

/* MAME cv1k.cpp: PORT_C 01 service coin, 02 JAMMA test, 04 coin 1, 08 coin 2, 10 start 1,
 * 20 start 2; PORT_D player 1 and PORT_L player 2: 01 up 02 down 04 left 08 right,
 * 10-80 buttons 1-4; PORT_F 02 S3 test. All active low. */
static void inputs_update(void)
{
	static const u8 coin_bit[2] = {0x04, 0x08}, start_bit[2] = {0x10, 0x20};
	u8 c = 0xFF, f = 0xFF, joy[2] = {0xFF, 0xFF};
	int p;

	for (p = 0; p < 2; p++) {
		uint32_t w = pad_word[p];

		if ((w & A_COIN) && !(prev_word[p] & A_COIN)) {
			coin_left[p] = COIN_FRAMES;
			coins[p]++;
		}
		prev_word[p] = w;
		if (coin_left[p]) {
			coin_left[p]--;
			c &= (u8)~coin_bit[p];
		}
		if (w & A_START)
			c &= (u8)~start_bit[p];
		if (w & A_TEST)
			f &= (u8)~0x02;
		joy[p] = (u8)~(w & 0xFF);
	}
	if (pad_word[2] & A_TEST || pad_word[3] & A_TEST)
		f &= (u8)~0x02;
	{
		uint32_t any = (pad_word[0] | pad_word[1] | pad_word[2] | pad_word[3]) & A_HASH;
		if (any && !prev_hash_any) {
			ram_hash_on = !ram_hash_on;
			hash_switches++;
			log_printf(ram_hash_on ? C_YELLOW : C_GREEN, "CHECK: RAM HASH %s FROM FRAME %u (LB)%s",
			           ram_hash_on ? "ON" : "OFF", (unsigned)frame_count,
			           checking() ? "" : ", CHECK NOT RUNNING");
		}
		prev_hash_any = any;
	}
	{
		/* test 33: RB on any pad shows / hides the card */
		static uint32_t prev_card_any;
		uint32_t any = (pad_word[0] | pad_word[1] | pad_word[2] | pad_word[3]) & A_CARD;
		if (any && !prev_card_any) {
			card_on = !card_on;
			card_on_at = card_handoffs;
			log_printf(C_GREEN, "CARD: %s AT FRAME %u (RB)", card_on ? "SHOWN" : "HIDDEN", (unsigned)frame_count);
		}
		prev_card_any = any;
	}
	if ((c & f & joy[0] & joy[1]) != 0xFF && sound_first_input_frame == ~0u)
		sound_first_input_frame = (unsigned)frame_count; /* the sound check stops here */
	in_port_c = c;
	in_port_d = joy[0];
	in_port_l = joy[1];
	in_port_f = f;
}

/* ---- the real clock to the RTC9701 (test 16, source/clock.c) ------------------------ */

static char rtc_text[80];
static int net_started; /* netfix/sntp.c's task was handed to NET_THREAD */
static int rtc_default; /* no clock found: the PC run's RTC, the checks run */
static int eep_saved;   /* test 33: the game starts with a saved EEPROM (not all 0xFFFF) */
static int rtc_vals[7] = {RTC_DEFAULT}; /* test 14: what the RTC9701 got, for the recording */

static void rtc_from_clock(void)
{
	rtc_default = clock_pick(rtc_vals, rtc_text, sizeof(rtc_text));
	rtc9701_set_time(rtc_vals[0], rtc_vals[1], rtc_vals[2], rtc_vals[3], rtc_vals[4], rtc_vals[5], rtc_vals[6]);
	chk.off = !rtc_default;
}

/* ---- test 20: the screen conversion (VRAM -> game texture) ------------------------ */

/* The visible 320x240 of VRAM as opaque ARGB8888 (blitter_screen()'s colours: ARGB1555, bit
 * 15 ignored), one row at a time, and the screen hash the recording and the check use:
 * h = h * 31 + RGB over all pixels in row order. Each row's hash starts at 0, so the screen
 * hash is the rows' folded with h = h * 31^320 + row hash. Colours by shifts (test 19: a
 * 128 KB table, mostly L2 hits). */
static uint8_t *gtex_mem;            /* the game texture's CPU address (kept from a Lock at init) */
static unsigned gtex_pitch;
static uint32_t row_hash[GAME_H];
static uint32_t hash_row_mul;        /* 31^GAME_W mod 2^32 */

static uint32_t conv_row(int y, uint32_t sx, uint32_t sy)
{
	const uint16_t *row = cv1k_vram + (size_t)((y + sy) & 0xFFF) * CV1K_VRAM_STRIDE;
	uint32_t *dst = (uint32_t *)(gtex_mem + (size_t)y * gtex_pitch);
	uint32_t h = 0, p, c;
	int x;

	if (sx + GAME_W <= 0x2000) {
		const uint16_t *src = row + sx;
		for (x = 0; x < GAME_W; x++) {
			p = src[x];
			c = (p & 0x7C00) << 9 | (p & 0x3E0) << 6 | (p & 0x1F) << 3;
			dst[x] = 0xFF000000u | c;
			h = h * 31 + c;
		}
	} else {
		for (x = 0; x < GAME_W; x++) {
			p = row[(x + sx) & 0x1FFF];
			c = (p & 0x7C00) << 9 | (p & 0x3E0) << 6 | (p & 0x1F) << 3;
			dst[x] = 0xFF000000u | c;
			h = h * 31 + c;
		}
	}
	return h;
}

/* A job's conversion on the workers: workers_start (game thread, at the kick) notes the
 * scroll and the job's number (blitter_jobs, which counts every job, drawn here or not);
 * each worker, after drawing its rows, converts the screen rows on its own VRAM rows (a band
 * draws only the rows with row % BANDS == band) and flushes them. */
static volatile uint64_t conv_job;   /* blitter_jobs of the last job with a conversion */
static volatile uint32_t conv_sx, conv_sy;
static volatile uint64_t conv_ticks[BANDS];
static volatile unsigned conv_runs[BANDS];
static unsigned conv_frames[3];      /* game thread, after loading: 0 workers, 1 unchanged, 2 game thread */

static void conv_band(int b)
{
	const uint32_t sx = conv_sx, sy = conv_sy;
	uint64_t t0 = tb_read();
	int y;

	for (y = 0; y < GAME_H; y++)
		if (((y + sy) & 0xFFF) % BANDS == (uint32_t)b) {
			row_hash[y] = conv_row(y, sx, sy);
			memdcbst(gtex_mem + (size_t)y * gtex_pitch, GAME_W * 4);
		}
	conv_ticks[b] += tb_read() - t0;
	conv_runs[b]++;
}

/* ---- blitter workers: band_thread[] ----------------------------------------------- */

static uint8_t worker_stack[6][64 * 1024] __attribute__((aligned(128)));
static volatile int worker_band[6];  /* this job's band per thread */
static volatile unsigned job_gen, worker_done[6], worker_alive[6];
static uint64_t wait_ticks; /* the game thread's time in workers_wait */

static int my_thread(void)
{
	unsigned v;
	asm volatile ("mfspr %0, 1023" : "=r" (v)); /* PIR */
	return (int)v;
}

/* Polls at low thread priority, as libxenon's idle loop does; draws at normal. */
static void worker_task(void)
{
	int t = my_thread();
	unsigned seen = job_gen;

	worker_done[t] = seen;
	worker_alive[t] = 1;
	for (;;) {
		asm volatile ("or 1,1,1");
		while (job_gen == seen)
			;
		asm volatile ("or 2,2,2");
		seen = job_gen;
		__sync_synchronize(); /* the job (list copy) after its generation */
		if (worker_band[t] >= 0) {
			blitter_draw_band(worker_band[t]);
			if (conv_job == blitter_jobs) /* test 20: this job carries the conversion */
				conv_band(worker_band[t]);
		}
		__sync_synchronize(); /* VRAM (and the texture rows) before done */
		worker_done[t] = seen;
	}
}

/* blitter_bands is fixed, so every worker has the same band on every job. Test 20: a job
 * drawn in BANDS bands carries the screen conversion (one-band lists do not: there both
 * workers run the whole list, so no rows are a band's own) */
static void workers_start(int bands)
{
	uint32_t sx, sy;

	if (gtex_mem && bands == BANDS) {
		blitter_get_scroll(&sx, &sy);
		conv_sx = sx;
		conv_sy = sy;
		conv_job = blitter_jobs;  /* exec() counted this job before starting it */
	}
	__sync_synchronize();
	job_gen++;
}

static void workers_wait(void)
{
	uint64_t t0 = tb_read();
	int b;

	for (b = 0; b < BANDS; b++)
		while (worker_done[band_thread[b]] != job_gen)
			;
	__sync_synchronize();
	wait_ticks += tb_read() - t0;
}

/* 0 when all start */
static int workers_launch(void)
{
	uint64_t t0;
	int b;

	for (b = 0; b < BANDS; b++) {
		int t = band_thread[b];
		worker_band[t] = b;
		t0 = tb_read();
		while (xenon_is_thread_task_running(t)) /* thread 2 may still be ending the loader */
			if (tb_us(t0, tb_read()) > 2000000)
				return -1;
		if (xenon_run_thread_task(t, worker_stack[t] + sizeof(worker_stack[t]) - 256, worker_task))
			return -1;
	}
	t0 = tb_read();
	for (b = 0; b < BANDS; b++)
		while (!worker_alive[band_thread[b]])
			if (tb_us(t0, tb_read()) > 1000000)
				return -1;
	return 0;
}

/* ---- screen ------------------------------------------------------------------- */

#define ROW(n) (2 + (n) * 8)

/* labels lit when their bit is set */
static int labels(int x, int y, uint32_t w, int on)
{
	static const struct { uint32_t bit; const char *s; } lab[] = {
		{A_UP, "U"}, {A_DOWN, "D"}, {A_LEFT, "L"}, {A_RIGHT, "R"}, {A_B1, "1"}, {A_B2, "2"},
		{A_B3, "3"}, {A_B4, "4"}, {A_START, "ST"}, {A_COIN, "CN"}, {A_TEST, "TS"},
	};
	unsigned i;

	for (i = 0; i < sizeof(lab) / sizeof(lab[0]); i++) {
		text(x, y, !on ? C_OFF : (w & lab[i].bit) ? C_GREEN : C_DIM, lab[i].s);
		x += 6 * ((int)strlen(lab[i].s) + 1);
	}
	return x;
}

static int sound_ok; /* sound_start() handed the thread its task */

/* four rows: chip and thread, counts, driver queue, check */
static void draw_sound_rows(int y)
{
	const struct sound_stats *st = &sound_stats;
	const volatile struct sound_check *ck = &sound_check;
	char line[100], a[16], b[16];
	unsigned us_frame = (unsigned)((uint64_t)st->run_us * 1001 / 60000); /* per 59.94 Hz frame */

	if (!sound_ok || !st->alive) {
		text(4, y, C_DIM, sound_ok ? "SND STARTING" : "SND NOT RUNNING YET");
		return;
	}
	snprintf(a, sizeof(a), "%u.%02u", us_frame / 1000, us_frame / 10 % 100);
	snprintf(b, sizeof(b), "%u.%02u", st->run_max_us / 1000, st->run_max_us / 10 % 100);
	snprintf(line, sizeof(line), "SND T%d CHIP %u HZ  RUN %s MS/FRAME (MAX %s)  FP %u", SOUND_THREAD, ymz_rate(), a,
	         b, (st->msr >> 13) & 1);
	text(4, y, C_WHITE, line);
	snprintf(line, sizeof(line), " WRITES %u  BLOCKS %u  QFULL %u  OUT %u  CLIP %u", (unsigned)ymz770_writes,
	         (unsigned)ymz_blocks, (unsigned)ymz_queue_full, (unsigned)snd_out_frames, (unsigned)snd_out_clipped);
	text(4, y + 8, ymz_queue_full ? C_RED : C_WHITE, line);
	snprintf(line, sizeof(line), " AUD Q %u LOW %u FIFO %u UNDER %u TRIM %u OVF %u", st->queued / 4, st->low / 4,
	         st->fifo, st->underruns, st->trims, st->overflow);
	text(4, y + 16, st->underruns || st->overflow ? C_YELLOW : C_WHITE, line);
	switch (ck->state) {
	case SCHK_OFF:
		snprintf(line, sizeof(line), "SND CHECK OFF (%s)", chk_off_why); /* test 33: or the EEPROM */
		break;
	case SCHK_RUNNING:
		snprintf(line, sizeof(line), "SND CHECK %u/%u OK", ck->ok, sound_check_total);
		break;
	case SCHK_PASSED:
		snprintf(line, sizeof(line), "SND CHECK ALL %u OK", ck->ok);
		break;
	case SCHK_MISMATCH:
		snprintf(line, sizeof(line), "SND CHECK MISMATCH AT FRAME %u (%u OK) %08X!=%08X", ck->frame, ck->ok,
		         (unsigned)ck->got, (unsigned)ck->want);
		break;
	default:
		snprintf(line, sizeof(line), "SND CHECK STOPPED AT INPUT, FRAME %u (%u/%u OK)", ck->frame, ck->ok,
		         sound_check_total);
		break;
	}
	text(4, y + 24, ck->state == SCHK_MISMATCH ? C_RED :
	     ck->state == SCHK_PASSED || ck->state == SCHK_RUNNING ? C_GREEN : C_YELLOW, line);
}

static void draw_card(void)
{
	static const char *role[NPADS] = {"P1", "P2", "--", "--"};
	char line[100], a[16], b[16], c[16], d[16], e[16], f[16];
	char lt[ROMLOAD_ROWS][100];
	uint32_t lc[ROMLOAD_ROWS];
	int r;
	unsigned long first;

	fill(0, 0, CARD_W, CARD_H, C_BG);
	fill(0, 0, CARD_W, 1, C_WHITE);           /* 1-pixel border: all four sides visible */
	fill(0, CARD_H - 1, CARD_W, 1, C_WHITE);
	fill(0, 0, 1, CARD_H, C_WHITE);
	fill(CARD_W - 1, 0, 1, CARD_H, C_WHITE);
	fill(CARD_W - 10, 3, 6, 6, (frame / CARD_EVERY & 1) ? C_BLACK : C_WHITE); /* card refresh */

	snprintf(line, sizeof(line), "TEST 38 %s  PCB FIT+ 3.75%%  VIDEO %dX%d  CPU SPEED %d>%d",
	         game_chosen ? game->tag : "RELEASE", video_w, video_h, speed_before, speed_after);
	text(4, ROW(0), speed_after != XENON_SPEED_FULL ? C_RED : C_GREEN, line);
	if (disp.hz_milli)
		snprintf(line, sizeof(line), "DISPLAY FRAME %lu  HZ %u.%03u  MISS %u  VTO %u", frame,
		         disp.hz_milli / 1000, disp.hz_milli % 1000, disp.missed, disp.vbl_timeouts);
	else
		snprintf(line, sizeof(line), "DISPLAY FRAME %lu  HZ -  MISS %u  VTO %u", frame, disp.missed,
		         disp.vbl_timeouts);
	text(4, ROW(1), C_WHITE, line);

	if (menu_on) { /* test 38 */
		text(4, ROW(2), C_YELLOW, "CHOOSE THE GAME: D-PAD UP / DOWN, THEN A OR START");
		for (r = 0; r < NSETS; r++) {
			snprintf(line, sizeof(line), "%s %s", r == menu_sel ? ">" : " ", games[r].title);
			text(4, ROW(3 + r), r == menu_sel ? C_GREEN : C_WHITE, line);
		}
	} else if (!game_running) {
		text(4, ROW(2), C_DIM, game_chosen ? "EMU WAITING FOR THE ROMS" : "EMU WAITING FOR THE CHOICE OF GAME");
	} else if (shown.n) {
		unsigned n = shown.n;
		unsigned pct = (unsigned)((uint64_t)PPC_TIMEBASE_FREQ * 1001 / 60000 * 100 * n / (shown.frame ? shown.frame : 1));
		ms2(a, sizeof(a), shown.frame / n);
		ms2(b, sizeof(b), shown.frame_max);
		snprintf(line, sizeof(line), "EMU %u  FRAME %s MS (MAX %s)  %u%% OF 60HZ  LATE %u",
		         (unsigned)frame_count, a, b, pct > 999 ? 999 : pct, late);
		text(4, ROW(2), pct >= 99 ? C_GREEN : C_YELLOW, line);
		ms2(a, sizeof(a), shown.cpu / n);
		ms2(b, sizeof(b), shown.wait / n);
		ms2(c, sizeof(c), shown.conv / n);
		ms2(d, sizeof(d), shown.present / n);
		ms2(e, sizeof(e), shown.vwait / n);
		ms2(f, sizeof(f), shown.cpu_max);
		snprintf(line, sizeof(line), " CPU %s (MAX %s) WAIT %s CONV %s PRES %s VBL %s", a, f, b, c, d, e);
		text(4, ROW(3), C_WHITE, line);
		ms2(a, sizeof(a), shown.band[0] / n);
		ms2(b, sizeof(b), shown.band[1] / n);
		ms2(c, sizeof(c), shown.host_max);
		snprintf(line, sizeof(line), " BANDS T2 %s T4 %s  HOST MAX %s  SPIN SKIP %u%%", a, b, c,
		         (unsigned)(shown.cycles ? shown.spin * 100 / shown.cycles : 0));
		text(4, ROW(4), C_WHITE, line);
	} else {
		snprintf(line, sizeof(line), "EMU FRAME %u  (TIMING AFTER %u FRAMES)", (unsigned)frame_count,
		         STAT_FRAMES);
		text(4, ROW(2), C_WHITE, line);
	}

	text(4, ROW(5), game_running ? C_GREEN : C_DIM, game_running ? rtc_text : "RTC NOT SET YET");
	if (game_running) {
		snprintf(line, sizeof(line), "RESYNC %u  FW %c  INTERP ENTRIES %u  TB RETRY %u",
		         (unsigned)stat_resyncs, blitter_firmware < 0 ? '-' : 'A' + blitter_firmware, interp_entries,
		         tb_retries);
		text(4, ROW(6), halted ? C_RED : C_WHITE, halted ? "GAME HALTED: SEE THE FATAL LINES" : line);
	}

	romload_rows(lt, lc);
	for (r = 0; r < ROMLOAD_ROWS; r++)
		text(4, ROW(7 + r), lc[r], lt[r]);

	/* USB thread and pads */
	fill(2, ROW(11) + 1, CARD_W - 4, 1, C_GRID);
	if (usb_alive)
		/* test 36: single spaces, so the pads' polling period fits */
		snprintf(line, sizeof(line), "USB T%d LOOPS %u POLL %u US (MAX %u) LATE %u PADS %d MS", USB_THREAD,
		         usb_loops, usb_poll_us, usb_poll_max_us, usb_late, ohci_intr_node_ms);
	else
		snprintf(line, sizeof(line), "USB T%d NOT RUNNING YET", USB_THREAD);
	text(4, ROW(12) - 2, usb_alive ? C_WHITE : C_DIM, line);
	for (r = 0; r < NPADS; r++) {
		uint32_t w = pad_word[r];
		int on = (w & A_ON) != 0, x;
		snprintf(line, sizeof(line), "PAD%d %s %s A%u D%u", r, role[r], on ? "ON" : "--", pad_attaches[r],
		         pad_detaches[r]);
		text(4, ROW(13 + r) - 2, on ? C_WHITE : C_DIM, line);
		x = labels(4 + 6 * 21, ROW(13 + r) - 2, w, on);
		snprintf(line, sizeof(line), "RPT %u", pad_reports[r]);
		text(x + 6, ROW(13 + r) - 2, on ? C_WHITE : C_DIM, line);
	}
	/* test 23: + wired-pad packets skipped as not input reports, the last one (port:bytes) */
	{
		const unsigned ns = usbctrl_skipped;
		const uint32_t ls = usbctrl_skipped_last;
		if (ns)
			snprintf(line, sizeof(line), "TO GAME: C %02X D %02X L %02X F %02X  COINS %u %u  SKIP %u %d:%06X",
			         in_port_c, in_port_d, in_port_l, in_port_f, coins[0], coins[1], ns, (int)(int8_t)(ls >> 24),
			         (unsigned)ls & 0xFFFFFF);
		else
			snprintf(line, sizeof(line), "TO GAME: C %02X D %02X L %02X F %02X  COINS %u %u  SKIP 0", in_port_c,
			         in_port_d, in_port_l, in_port_f, coins[0], coins[1]);
	}
	text(4, ROW(17) - 2, C_WHITE, line);
	fill(2, ROW(18) - 3, CARD_W - 4, 1, C_GRID);

	/* sound thread */
	draw_sound_rows(ROW(18) - 1);
	fill(2, ROW(22) - 2, CARD_W - 4, 1, C_GRID);

	/* test 13: check against the PC run, the pcb model, the game's own slowdown */
	if (chk.failed)
		text(4, ROW(22), C_RED, chk.why);
	else if (chk.off)
		snprintf(line, sizeof(line), "CHECK OFF: %s", chk_off_why); /* test 33: or the EEPROM */
	else if (chk.stopped)
		snprintf(line, sizeof(line), "CHECK STOPPED AT INPUT, FRAME %u (%u = PC RUN, RAM %u)", chk.stopped_at,
		         chk.matched, chk.ram_checks);
	else {
		ms2(a, sizeof(a), hash_frames ? hash_sum / hash_frames : 0);
		snprintf(line, sizeof(line), "CHECK %s%u/%u = PC RUN  RAM HASH %s (LB) %u X %s MS", chk.done ? "ALL " : "",
		         chk.matched, game->expect_frames, ram_hash_on ? "ON" : "OFF", chk.ram_checks, a);
	}
	if (!chk.failed)
		text(4, ROW(22), chk.off ? C_DIM : chk.stopped ? C_YELLOW : C_GREEN, line);
	{
		unsigned n = pshown.n ? pshown.n : 1;
		snprintf(line, sizeof(line), "PCB PEN %uK CYC  MISS %u  LIST STALL %uK  ACC %uK PER FRAME",
		         (unsigned)(pshown.pen / n / 1000), (unsigned)(pshown.miss / n),
		         (unsigned)(pshown.stall / n / 1000), (unsigned)(pshown.acc / n / 1000));
		text(4, ROW(23), pshown.n ? C_WHITE : C_DIM, line);
		snprintf(line, sizeof(line), "GAME SLOWDOWN: %u DROPS IN %u LOGIC FRAMES  LAST %u: %u", logic_drops,
		         logic_frames, STAT_FRAMES, logic_drops_shown);
		text(4, ROW(24), C_WHITE, line);
	}

	/* test 12: late frames after loading by cause, CPU histogram, game thread speed */
	{
		/* test 17b: every late frame after loading (HASH = the RAM hash ran in it); test 18:
		 * then one row per timing model (frames without the hash), the fit first.
		 * (test 12's CPU histogram and NS/KCYC rows and the T1/CARD row made room.) */
		unsigned lt = late_cause[LC_CPU] + late_cause[LC_BAND] + late_cause[LC_HOST] + late_cause[LC_OTHER] +
		              late_cause[LC_HASH];
		snprintf(line, sizeof(line), "LATE AFTER LOAD %u: CPU %u BAND %u HOST %u OTHER %u HASH %u", lt,
		         late_cause[LC_CPU], late_cause[LC_BAND], late_cause[LC_HOST], late_cause[LC_OTHER],
		         late_cause[LC_HASH]);
		text(4, ROW(25), lt ? C_YELLOW : C_GREEN, line);
		/* test 27: the one model's row (test 26 had FIT+ / FIT / MAME at rows 26-28; late in
		 * load = the EMU row's LATE minus LATE AFTER LOAD) */
		{
			unsigned v = model_logic + model_drops;
			unsigned pm = v ? (unsigned)((uint64_t)model_drops * 1000 / v) : 0;
			ms2(a, sizeof(a), model_frames ? model_cpu / model_frames : 0);
			ms2(b, sizeof(b), model_cpu_max);
			snprintf(line, sizeof(line), "FIT+ %u FR  DROPS %u %u.%u%%  CPU %s MAX %s  LATE %u", model_frames,
			         model_drops, pm / 10, pm % 10, a, b, model_late);
			text(4, ROW(26), model_late ? C_YELLOW : C_GREEN, line);
		}
	}
	/* test 33: the ini and the EEPROM saves in rows 27-28 (empty since test 27) */
	{
		char st[SETTINGS_ROWS][100];
		uint32_t sc[SETTINGS_ROWS];
		settings_rows(st, sc);
		for (r = 0; r < SETTINGS_ROWS; r++)
			text(4, ROW(27 + r), sc[r], st[r]);
	}
	fill(2, ROW(29) - 1, CARD_W - 4, 1, C_GRID);

	/* test 14: the recorder */
	{
		char rt[REC_ROWS][100];
		uint32_t rc[REC_ROWS];
		rec_rows(rt, rc);
		for (r = 0; r < REC_ROWS; r++)
			text(4, ROW(29 + r), rc[r], rt[r]);
	}
	fill(2, ROW(31) - 1, CARD_W - 4, 1, C_GRID);

	/* test 21: the sound thread per wait mode, in the clock's 4 rows (the RTC row at the top
	 * still says where the clock came from); then the frame log's row of test 14b's table.
	 * Test 22: WAIT_DELAY only, the second row = the last empty-driver snapshot after loading.
	 * Test 23: the T3 table in one row (WAIT_DELAY), the snapshot row (real underruns only),
	 * then the driver reads: false zeros and reads one descriptor off */
	{
		char pt[PROF_ROWS][100];
		uint32_t pc[PROF_ROWS];
		{
			const volatile struct t3_mode_stats *m = &t3_mode[0];
			const uint64_t tk = m->ticks;
			const unsigned lps10 = tk ? (unsigned)((uint64_t)m->loops * PPC_TIMEBASE_FREQ * 10 / tk) : 0;
			snprintf(line, sizeof(line), "T3 LOOP/S %u.%u  >2MS %u  >4MS %u  MAX GAP %u.%02u  LATE %u.%02u MS",
			         lps10 / 10, lps10 % 10, m->gap2, m->gap4, m->gap_max_us / 1000, m->gap_max_us % 1000 / 10,
			         m->late_max_us / 1000, m->late_max_us % 1000 / 10);
			text(4, ROW(31), m->gap4 ? C_YELLOW : m->loops ? C_GREEN : C_DIM, line);
		}
		/* test 24: test 23's driver rows in one: false zeros, underruns after loading, ones whose
		 * ring read non-zero again before the restart (LIVE), reads one descriptor low / high or
		 * off by more, of all pairs (the snapshot row went: test 23 had none after loading) */
		{
			const unsigned nf = drv_stats.false0;
			const unsigned off = drv_stats.low1 + drv_stats.high1 + drv_stats.odd;
			snprintf(line, sizeof(line), "DRV: FALSE %u UNDER %u LIVE %u  -2K %u +2K %u ODD %u OF %u", nf,
			         t3_empty_after_load, drv_stats.under_live, drv_stats.low1, drv_stats.high1, drv_stats.odd,
			         drv_stats.pairs);
			text(4, ROW(32), t3_empty_after_load || drv_stats.under_live ? C_RED : nf || off ? C_YELLOW :
			     drv_stats.pairs ? C_GREEN : C_DIM, line);
		}
		/* test 24: pad-read gaps after loading with no write in them, over 2/4/8/16 ms, and the
		 * longest gap while loading; then the longest no-write gap after loading = its 3
		 * largest sections, and the longest gap with a write */
		{
			char m[3][24];
			int top[3] = {-1, -1, -1}, k, j;
			ms1(a, sizeof(a), pg_load_max_us);
			snprintf(line, sizeof(line), "NO-WRITE GAPS >2MS %u >4 %u >8 %u >16 %u  LOAD %s", pg_over[0], pg_over[1],
			         pg_over[2], pg_over[3], a);
			text(4, ROW(33), !pg_gaps ? C_DIM : pg_over[1] ? C_YELLOW : C_GREEN, line); /* test 25: from 4 ms */
			for (k = 0; k < NSEC; k++)
				for (j = 0; j < 3; j++)
					if (top[j] < 0 || pg_else_top.sec_us[k] > pg_else_top.sec_us[top[j]]) {
						memmove(&top[j + 1], &top[j], (size_t)(2 - j) * sizeof(top[0]));
						top[j] = k;
						break;
					}
			for (j = 0; j < 3; j++)
				snprintf(m[j], sizeof(m[j]), "%s %u.%u", pg_sec_name[top[j]], pg_else_top.sec_us[top[j]] / 1000,
				         pg_else_top.sec_us[top[j]] % 1000 / 100);
			ms1(a, sizeof(a), pg_max_else_us);
			ms1(b, sizeof(b), pg_max_w_us);
			snprintf(line, sizeof(line), "LONGEST %s MS @%u = %s %s %s  W %s", a, (unsigned)pg_else_top.frame, m[0],
			         m[1], m[2], b);
			text(4, ROW(34), !pg_gaps ? C_DIM : pg_max_else_us > 4000 ? C_YELLOW : C_GREEN, line);
		}
		prof_rows(pt, pc);
		text(4, ROW(31 + CLOCK_ROWS), pc[2], pt[2]);
	}
	fill(2, ROW(32 + CLOCK_ROWS) - 1, CARD_W - 4, 1, C_GRID);

	/* test 14d: the write gate and what the writes cost band 1 */
	{
		char wt[WGATE_ROWS][100];
		uint32_t wc[WGATE_ROWS];
		wgate_rows(wt, wc);
		for (r = 0; r < WGATE_ROWS; r++)
			text(4, ROW(32 + CLOCK_ROWS + r), wc[r], wt[r]);
	}
	/* test 24 (test 19's PAD GAP and test 20's CONV rows made room): each section's most time
	 * in one gap after loading (the writes' own two left out: their gaps read the pads every
	 * ms), the card's own draw / copy / flush (mean / max ms, test 25: its pad reads
	 * included). Test 25: the calibration row = the reads inside the card render (count, per
	 * card, the longest gap that one ended) and inside the frame log's text */
	{
		const unsigned n = card_n ? card_n : 1;
		ms1(a, sizeof(a), tb_us(0, sec_max_tk[S_POLL]));
		ms1(b, sizeof(b), tb_us(0, sec_max_tk[S_PADS]));
		ms1(c, sizeof(c), tb_us(0, sec_max_tk[S_PROBE]));
		ms1(d, sizeof(d), tb_us(0, sec_max_tk[S_REC]));
		ms1(e, sizeof(e), tb_us(0, sec_max_tk[S_PROF]));
		ms1(f, sizeof(f), tb_us(0, sec_max_tk[S_WAIT]));
		snprintf(line, sizeof(line), "MAX MS POLL %s PADS %s PROBE %s REC %s PROF %s WAIT %s", a, b, c, d, e, f);
		text(4, ROW(32 + CLOCK_ROWS + WGATE_ROWS), pg_gaps ? C_WHITE : C_DIM, line);
		ms2(a, sizeof(a), card_sum[0] / n);
		ms2(b, sizeof(b), card_max[0]);
		ms2(c, sizeof(c), card_sum[1] / n);
		ms2(d, sizeof(d), card_max[1]);
		ms2(e, sizeof(e), card_sum[2] / n);
		ms2(f, sizeof(f), card_max[2]);
		snprintf(line, sizeof(line), "CARD %u AVG/MAX DRAW %s/%s COPY %s/%s FL %s/%s", card_n, a, b, c, d, e, f);
		text(4, ROW(33 + CLOCK_ROWS + WGATE_ROWS), card_n ? C_WHITE : C_DIM, line);
		{
			const unsigned nc = pg_where_n[PR_CARD];
			ms2us(a, sizeof(a), pg_where_max_us[PR_CARD]);
			ms2us(b, sizeof(b), pg_where_max_us[PR_LOG]);
			snprintf(line, sizeof(line), "READS: CARD %u (%u.%u EACH) MAX %s  LOG %u MAX %s MS", nc,
			         nc / n, nc % n * 10 / n, a, pg_where_n[PR_LOG], b);
			text(4, ROW(34 + CLOCK_ROWS + WGATE_ROWS), !nc ? C_DIM : pg_where_max_us[PR_CARD] > 2000 ? C_YELLOW : C_GREEN,
			     line);
		}
	}
	fill(2, ROW(35 + CLOCK_ROWS + WGATE_ROWS) - 1, CARD_W - 4, 1, C_GRID);

	/* the LOG_SHOWN lines ending at log_view. Test 25: copied under the lock, drawn after it
	 * (text() may read the pads, and a pad read may log) */
	{
		struct log_line shown_lines[LOG_SHOWN];
		int nl;
		spin_lock(&log_busy);
		first = log_view > LOG_SHOWN ? log_view - LOG_SHOWN : 0;
		for (nl = 0; first + nl < log_view; nl++)
			shown_lines[nl] = log_ring[(first + nl) % LOG_LINES];
		spin_unlock(&log_busy);
		for (r = 0; r < nl; r++)
			text(4, ROW(35 + CLOCK_ROWS + WGATE_ROWS + r), shown_lines[r].color, shown_lines[r].s);
	}
}

static struct XenosDevice xe_dev;
static struct XenosDevice *xe;
static struct XenosSurface *fb, *gtex;
static struct XenosShader *ps, *vs;
static struct XenosVertexBuffer *vb_game, *vb_card;
static struct XenosVertexBuffer *vb_int, *vb_full; /* test 33: the game alone, centred */
static struct XenosVertexBuffer *vb_scan;          /* test 37: the scanlines over the game alone */
static struct XenosSurface *stex;                  /* test 37: 256 greys, column g = g / 255 */
static int scan_quads;
static uint64_t stamps[HZ_WINDOW], last_stamp;

/* both card textures cleared to the card background; their CPU addresses kept */
static void card_init(void)
{
	int t, y, x;

	for (t = 0; t < 2; t++) {
		uint8_t *p = Xe_Surface_LockRect(xe, ctex2[t], 0, 0, 0, 0, XE_LOCK_WRITE);
		for (y = 0; y < CARD_H; y++)
			for (x = 0; x < CARD_W; x++)
				((uint32_t *)(p + y * ctex2[t]->wpitch))[x] = C_BG;
		Xe_Surface_Unlock(xe, ctex2[t]);
		card_mem[t] = p;
	}
}

/* game thread, once per displayed frame: a finished card goes to the GPU, and every
 * CARD_EVERY frames the next one is asked for */
static void card_frame(void)
{
	if (card_done == card_req && card_given != card_req) {
		int t = (int)card_target;
		__sync_synchronize();
		Xe_Surface_LockRect(xe, ctex2[t], 0, 0, 0, 0, XE_LOCK_WRITE);
		Xe_Surface_Unlock(xe, ctex2[t]); /* dcbst (lines already clean) + GPU cache invalidation */
		card_front = t;
		card_given = card_req;
		card_handoffs++;
	}
	if (frame % CARD_EVERY == 0 && card_on) { /* test 33: a hidden card is not drawn */
		if (card_done == card_req && card_given == card_req && usb_alive) {
			card_target = (unsigned)(card_front ^ 1);
			__sync_synchronize();
			card_req++;
		} else if (usb_alive) {
			card_skipped++;
		}
	}
}

/* test 20: the game texture's CPU address for the workers (test 12's card textures: the same
 * pattern), and 31^320 for folding row hashes */
static void conv_init(void)
{
	int x;

	gtex_mem = Xe_Surface_LockRect(xe, gtex, 0, 0, 0, 0, XE_LOCK_WRITE);
	gtex_pitch = gtex->wpitch;
	Xe_Surface_Unlock(xe, gtex);
	hash_row_mul = 1;
	for (x = 0; x < GAME_W; x++)
		hash_row_mul *= 31;
}

/* game thread, at every emulated vblank: the texture shows the screen (VRAM at the scroll
 * after every job so far) and its hash is returned. Test 20: usually the last job's
 * conversion on the workers (they finish with blitter_sync); no job since the last frame and
 * the same scroll = nothing changed; otherwise the game thread converts, as test 19 did. */
static uint64_t conv_jobs_seen;      /* blitter_jobs at the last frame */
static int tex_ok;                   /* the texture holds VRAM at tex_sx, tex_sy after all jobs */
static uint32_t tex_sx, tex_sy, tex_hash;

static uint32_t fold_rows(void)
{
	uint32_t h = 0;
	int y;

	for (y = 0; y < GAME_H; y++)
		h = h * hash_row_mul + row_hash[y];
	return h;
}

static uint32_t screen_frame(void)
{
	uint32_t sx, sy;
	int how = 1, y;

	blitter_sync();                  /* the jobs and their conversions are done */
	if (blitter_jobs != conv_jobs_seen) {
		conv_jobs_seen = blitter_jobs;
		tex_ok = conv_job == blitter_jobs;
		if (tex_ok) {
			tex_sx = conv_sx;
			tex_sy = conv_sy;
			tex_hash = fold_rows();
			Xe_Surface_LockRect(xe, gtex, 0, 0, 0, 0, XE_LOCK_WRITE);
			Xe_Surface_Unlock(xe, gtex); /* dcbst (lines already clean) + GPU cache invalidation */
			how = 0;
		}
	}
	blitter_get_scroll(&sx, &sy);
	if (!tex_ok || sx != tex_sx || sy != tex_sy) {
		Xe_Surface_LockRect(xe, gtex, 0, 0, 0, 0, XE_LOCK_WRITE);
		for (y = 0; y < GAME_H; y++)
			row_hash[y] = conv_row(y, sx, sy);
		Xe_Surface_Unlock(xe, gtex);
		tex_sx = sx;
		tex_sy = sy;
		tex_hash = fold_rows();
		tex_ok = 1;
		how = 2;
	}
	if (frame_count >= BOOT_FRAMES)
		conv_frames[how]++;
	return tex_hash;
}

static void clear_game(void)
{
	uint8_t *p = Xe_Surface_LockRect(xe, gtex, 0, 0, 0, 0, XE_LOCK_WRITE);
	int y;

	for (y = 0; y < GAME_H; y++)
		memset(p + y * gtex->wpitch, 0, GAME_W * 4);
	Xe_Surface_Unlock(xe, gtex);
	tex_ok = 0; /* test 20: the next frame converts */
}

static int wait_vblank(void)
{
	uint64_t t0 = tb_read();

	while (Xe_IsVBlank(xe))
		if (tb_diff_msec(tb_read(), t0) > 100)
			return -1;
	while (!Xe_IsVBlank(xe))
		if (tb_diff_msec(tb_read(), t0) > 100)
			return -1;
	return 0;
}

/* Draw the card (every CARD_EVERY frames) and the game texture, resolve, wait for
 * the next vblank. */
static void present(void)
{
	static const float ident[16] = {1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1};
	static const float light[4] = {0, 0, -1, 0};
	const uint64_t period = (uint64_t)PPC_TIMEBASE_FREQ * 1001 / 60000;
	uint64_t t0 = tb_read(), tw, now;
	int n, vto, show;

	if (usb_alive) {
		card_frame();
	} else if (frame % CARD_EVERY == 0) { /* before the game starts: drawn here, as before */
		int y;
		uint8_t *p = Xe_Surface_LockRect(xe, ctex2[card_front], 0, 0, 0, 0, XE_LOCK_WRITE);
		draw_card();
		for (y = 0; y < CARD_H; y++)
			memcpy(p + y * ctex2[card_front]->wpitch, raster[y], CARD_W * 4);
		Xe_Surface_Unlock(xe, ctex2[card_front]);
	}

	Xe_InvalidateState(xe);
	Xe_SetZEnable(xe, 0);
	Xe_SetCullMode(xe, XE_CULL_NONE);
	Xe_SetVertexShaderConstantF(xe, 0, ident, 4);
	Xe_SetVertexShaderConstantF(xe, 4, ident, 4);
	Xe_SetPixelShaderConstantF(xe, 0, light, 1);
	Xe_SetShader(xe, SHADER_TYPE_PIXEL, ps, 0);
	Xe_SetShader(xe, SHADER_TYPE_VERTEX, vs, 0);
	/* test 33: the card while loading (the game thread draws it), else when it is on and the
	 * USB thread has handed one over since; otherwise the game alone, centred on black */
	show = !usb_alive || (card_on && card_handoffs != card_on_at);
	gtex->use_filtering = !show && cfg.picture == PIC_FULL; /* read by Xe_SetTexture */
	Xe_SetTexture(xe, 0, gtex);
	Xe_SetStreamSource(xe, 0, show ? vb_game : cfg.picture == PIC_FULL ? vb_full : vb_int, 0, 8);
	Xe_DrawPrimitive(xe, XE_PRIMTYPE_TRIANGLELIST, 0, 2);
	if (!show && scan_quads) { /* test 37: picture = picture * grey */
		Xe_SetSrcBlend(xe, XE_BLEND_ZERO);
		Xe_SetDestBlend(xe, XE_BLEND_SRCCOLOR);
		Xe_SetTexture(xe, 0, stex);
		Xe_SetStreamSource(xe, 0, vb_scan, 0, 8);
		Xe_DrawPrimitive(xe, XE_PRIMTYPE_TRIANGLELIST, 0, scan_quads * 2);
		Xe_SetSrcBlend(xe, XE_BLEND_ONE);
		Xe_SetDestBlend(xe, XE_BLEND_ZERO);
	}
	if (show) {
		Xe_SetTexture(xe, 0, ctex2[card_front]);
		Xe_SetStreamSource(xe, 0, vb_card, 0, 8);
		Xe_DrawPrimitive(xe, XE_PRIMTYPE_TRIANGLELIST, 0, 2);
	}
	Xe_SetClearColor(xe, show ? C_CLEAR : C_BLACK);
	Xe_Resolve(xe);

	tw = tb_read();
	vto = wait_vblank();
	if (vto)
		disp.vbl_timeouts++;
	now = tb_read();
	Xe_Sync(xe);
	disp.present = tw - t0;
	disp.vwait = now - tw;

	/* refresh rate over the last HZ_WINDOW frames; missed = extra vblank periods
	 * between two frames, from the time between them */
	n = (int)(frame % HZ_WINDOW);
	if (frame >= HZ_WINDOW)
		disp.hz_milli = (unsigned)((uint64_t)HZ_WINDOW * PPC_TIMEBASE_FREQ * 1000 / (now - stamps[n]));
	disp.period = frame > 0 ? now - last_stamp : period;
	if (frame > 0 && !vto) {
		uint64_t periods = (now - last_stamp + period / 2) / period;
		if (periods > 1)
			disp.missed += (unsigned)(periods - 1);
	}
	stamps[n] = now;
	last_stamp = now;
	frame++;

	/* scroll the log one line every LOG_STEP frames while lines are waiting */
	if (log_view < log_total && frame - log_step_frame >= LOG_STEP) {
		log_view++;
		log_step_frame = frame;
	}
}

static void halt_loop(void)
{
	for (;;)
		present();
}

/* ---- the game ------------------------------------------------------------------- */

static struct prof_frame pf; /* test 14b: this vblank's frame log entry */
static uint64_t t_resume;   /* when host_vblank last handed control back to the game */
static uint64_t wait_seen, band_seen[BLIT_MAX_BANDS], spin_seen, cyc_seen;
static uint64_t band_frame[BLIT_MAX_BANDS];

/* Blitter sums per frame (all frames, and the cloud stretch while the sound check runs:
 * no input yet, the PC run's RTC). */
static void var_frame(void)
{
	static uint64_t px_seen, tlb_seen;
	uint64_t px = blitter_pixels - px_seen, tlb_now = 0, tlb;
	int g;

	for (g = 0; g < BANDS; g++)
		tlb_now += tlbstat[band_thread[g]][TLB_DSI] + tlbstat[band_thread[g]][TLB_ISI];
	tlb = tlb_now - tlb_seen;
	tlb_seen = tlb_now;
	px_seen = blitter_pixels;
	for (g = 0; g < 2; g++) {
		struct var_win *m = &vars[g];
		if (g == 1 && !(sound_check.state == SCHK_RUNNING && frame_count >= CLOUD_FIRST &&
		                frame_count <= CLOUD_LAST))
			continue;
		m->frame += disp.period;
		m->band0 += band_frame[0];
		m->band1 += band_frame[1];
		m->px += px;
		m->tlb += tlb;
		if (disp.period * 2 > (uint64_t)PPC_TIMEBASE_FREQ * 1001 / 60000 * 3)
			m->late++;
		m->n++;
	}
}

/* Test 12: one log line per late emulated frame and its cause. The game thread's part of
 * a frame is CPU (game code, incl. the blitter's timing pass) + WAIT (for the bands) +
 * CONV + PRES; BAND when the wait is the biggest part, CPU when the game code is,
 * HOST when conversion + present are, OTHER when these add up to less than a vblank
 * period (the vblank was missed although the work was done in time). */
static void late_frame(uint64_t cpu, uint64_t w, uint64_t conv, uint64_t exec)
{
	const uint64_t vbl = (uint64_t)PPC_TIMEBASE_FREQ * 1001 / 60000;
	uint64_t host = conv + disp.present, busy = cpu + w + host;
	char a[16], b[16], c[16], d[16], e[16], f[16], g[16];
	int cause;

	if (busy + vbl / 32 < vbl)
		cause = LC_OTHER;
	else if (w >= cpu && w >= host)
		cause = LC_BAND;
	else if (cpu >= host)
		cause = LC_CPU;
	else
		cause = LC_HOST;
	late_cause[cause]++;
	ms2(a, sizeof(a), disp.period);
	ms2(b, sizeof(b), cpu);
	ms2(c, sizeof(c), w);
	ms2(d, sizeof(d), conv);
	ms2(e, sizeof(e), disp.present);
	ms2(f, sizeof(f), band_frame[0]);
	ms2(g, sizeof(g), band_frame[1]);
	log_printf(C_YELLOW, "LATE %s EMU %u %sMS CPU %s (%uK CYC) WAIT %s CONV %s PRES %s T2 %s T4 %s",
	           lc_name[cause], (unsigned)frame_count, a, b, (unsigned)(exec / 1000), c, d, e, f, g);
}

/* test 13: the screen every frame, RAM every RAM_CHECK_EVERY frames, against the PC run;
 * stops at the first input (inputs change the game) */
static int checking(void)
{
	return !chk.failed && !chk.stopped && !chk.done && !chk.off;
}

static void check_frame(unsigned n, uint32_t scr)
{
	if (!checking())
		return;
	if (sound_first_input_frame <= n) {
		chk.stopped = 1;
		chk.stopped_at = n;
		log_printf(C_YELLOW, "CHECK: STOPPED BY INPUT AT FRAME %u, %u FRAMES = PC RUN", n, chk.matched);
		return;
	}
	if (scr != game->expect[n][0]) {
		chk.failed = 1;
		snprintf(chk.why, sizeof(chk.why), "CHECK FAILED FRAME %u: SCREEN %08X, PC %08X", n, (unsigned)scr,
		         (unsigned)game->expect[n][0]);
	} else if (ram_hash_on && n % RAM_CHECK_EVERY == 0) { /* test 17b: only while LB has it on */
		const uint64_t h0 = tb_read();
		uint32_t rh = cv1k_ram_hash();
		const uint64_t dt = tb_read() - h0;
		hash_sum += dt;
		if (dt > hash_max)
			hash_max = dt;
		hash_frames++;
		hash_this_frame = 1;
		chk.ram_checks++;
		if (rh != game->expect[n][1]) {
			chk.failed = 1;
			snprintf(chk.why, sizeof(chk.why), "CHECK FAILED FRAME %u: RAM %08X, PC %08X", n, (unsigned)rh,
			         (unsigned)game->expect[n][1]);
		}
	}
	if (chk.failed) {
		log_printf(C_RED, "%s", chk.why);
		log_printf(C_RED, "CHECK: FIRST DIFFERENCE FROM THE PC RUN, CHECKING STOPS (GAME GOES ON)");
		return;
	}
	chk.matched = n + 1;
	if (chk.matched == game->expect_frames) {
		chk.done = 1;
		log_printf(C_GREEN, "CHECK: ALL %u FRAMES MATCH THE PC RUN", game->expect_frames);
	}
}

/* test 13: the model's counters and the game's logic frames per emulated vblank */
static void pcb_frame(void)
{
	static uint64_t pen0, acc0, miss0, ifs0, stall0;
	static int have;
	static unsigned prev;
	unsigned lc = BE32(RAMP(LOGIC_WORD)) >> 16;

	pcur.stall += pcbx_stall_paid - stall0; /* test 17 */
	stall0 = pcbx_stall_paid;
	pcur.pen += pcb.pen_total - pen0;
	pcur.acc += pcb.n_access - acc0;
	pcur.miss += pcb.n_miss - miss0;
	pcur.ifs += pcb.n_ifetch_slow - ifs0;
	pen0 = pcb.pen_total;
	acc0 = pcb.n_access;
	miss0 = pcb.n_miss;
	ifs0 = pcb.n_ifetch_slow;
	if (have && frame_count >= BOOT_FRAMES) {
		unsigned d = (lc - prev) & 0xFFFF;
		if (d == 0) {
			logic_drops++;
			logic_drops_win++;
			model_drops++;
		} else if (d <= 8) {
			logic_frames += d;
			model_logic += d;
		}
	}
	prev = lc;
	have = 1;
	if (++pcur.n == STAT_FRAMES) {
		pshown = pcur;
		memset(&pcur, 0, sizeof(pcur));
		logic_drops_shown = logic_drops_win;
		logic_drops_win = 0;
	}
}

static void cpu_stats(uint64_t cpu, uint64_t exec)
{
	unsigned ms = tb_us(0, cpu) / 1000;
	int k = 0;

	while (k < CPU_BINS - 1 && ms >= cpu_bin_ms[k])
		k++;
	cpu_hist[k]++;
	sum_cpu += cpu;
	sum_exec += exec;
	if (exec >= 1000000) {
		sum_cpu_heavy += cpu;
		sum_exec_heavy += exec;
	}
	if (cpu > cpu_max_all) {
		cpu_max_all = cpu;
		exec_max_all = exec;
	}
}

/* The runtime calls this at every emulated vblank (frame_count = vblanks before it).
 * One emulated frame per displayed frame: game (CPU, waiting for the bands), screen
 * conversion, present (card, Xe), vblank wait, then the pads for the next frame. */
void host_vblank(sh3_t *c)
{
	uint64_t t0 = tb_read(), emu = t0 - t_resume, w_emu = wait_ticks - wait_seen;
	uint64_t t1, conv, cpu, host, now_cyc, w, exec;
	uint32_t hsum;
	int b, late_after_load = 0;

	hsum = screen_frame(); /* waits for the bands; test 14: the hash goes into the recording */
	t1 = tb_read();
	if (checking())
		check_frame((unsigned)frame_count, hsum);
	w = wait_ticks - wait_seen;       /* all waits this frame */
	conv = (t1 - t0) - (w - w_emu);   /* not the check's RAM hash (after t1; test 17b times it) */
	cpu = emu - w_emu;
	pcb_frame();
	eeprom_frame((uint32_t)frame_count, rtc9701_eeprom()); /* test 33: a save once it settles */

	present();

	host = conv + disp.present;
	cur.frame += disp.period;
	cur.cpu += cpu;
	cur.wait += w;
	cur.conv += conv;
	cur.present += disp.present;
	cur.vwait += disp.vwait;
	for (b = 0; b < BLIT_MAX_BANDS; b++) {
		band_frame[b] = blitter_band_ticks[b] - band_seen[b];
		cur.band[b] += band_frame[b];
		band_seen[b] = blitter_band_ticks[b];
	}
	var_frame();
	now_cyc = rt_now(c);
	exec = (now_cyc - cyc_seen) - (stat_spin_cycles - spin_seen); /* SH-3 cycles actually run */
	cur.spin += stat_spin_cycles - spin_seen;
	cur.cycles += now_cyc - cyc_seen;
	pf.cyc = (uint32_t)(now_cyc - cyc_seen);
	pf.spin = (uint32_t)(stat_spin_cycles - spin_seen);
	spin_seen = stat_spin_cycles;
	cyc_seen = now_cyc;
	if (disp.period > cur.frame_max && game_frames > 0)
		cur.frame_max = disp.period;
	if (cpu > cur.cpu_max)
		cur.cpu_max = cpu;
	if (host > cur.host_max)
		cur.host_max = host;
	if (game_frames > 0)
		cpu_stats(cpu, exec);
	{
		/* test 17b: no late frame hidden any more (test 17 kept those of the check period
		 * apart); a frame with the RAM hash counts as HASH, the others by timing model and,
		 * with the fit on, by the pcbx_adjust form the frame ran with */
		const int is_late = disp.period * 2 > (uint64_t)PPC_TIMEBASE_FREQ * 1001 / 60000 * 3 && game_frames > 0;
		if (is_late) {
			late++;
			late_after_load = frame_count >= BOOT_FRAMES;
			if (frame_count < BOOT_FRAMES)
				late_boot++;
			else if (hash_this_frame)
				late_cause[LC_HASH]++;
			else
				late_frame(cpu, w, conv, exec);
		}
		if (frame_count >= BOOT_FRAMES && !hash_this_frame && game_frames > 0) {
			model_frames++;
			model_late += is_late;
			model_cpu += cpu;
			if (cpu > model_cpu_max)
				model_cpu_max = cpu;
		}
		/* test 21: the same by the sound thread's wait mode this frame ran with */
		if (frame_count >= BOOT_FRAMES && game_frames > 0) {
			const int m = sound_wait_mode == WAIT_MED_DB;
			wm_frames[m]++;
			wm_band[m][0] += band_frame[0];
			wm_band[m][1] += band_frame[1];
			wm_cpu[m] += cpu;
			wm_late[m] += is_late;
		}
	}
	/* test 22: the sound thread keeps WAIT_DELAY (test 21's switch to WAIT_MED_DB is gone) */
	if (++cur.n == STAT_FRAMES) {
		shown = cur;
		memset(&cur, 0, sizeof(cur));
		tlb_window();
	}
	game_frames++;
	wait_seen = wait_ticks;

	/* test 14b: the frame log (test 16: no replay, no sampler) */
	{
		static uint64_t pen0, acc0, miss0, ifs0, idle0, ev0, io0;

		pf.frame = (uint32_t)frame_count;
		pf.cpu = (uint32_t)cpu;
		pf.wait = (uint32_t)w;
		pf.conv = (uint32_t)conv;
		pf.pres = (uint32_t)disp.present;
		pf.vwait = (uint32_t)disp.vwait;
		pf.band0 = (uint32_t)band_frame[0];
		pf.band1 = (uint32_t)band_frame[1];
		pf.period = (uint32_t)disp.period;
		pf.pen = (uint32_t)(pcb.pen_total - pen0);
		pf.acc = (uint32_t)(pcb.n_access - acc0);
		pf.miss = (uint32_t)(pcb.n_miss - miss0);
		pf.ifs = (uint32_t)(pcb.n_ifetch_slow - ifs0);
		pf.idle = (uint32_t)(pcb.n_idle - idle0);
		pf.events = (uint32_t)(stat_events - ev0);
		pf.io = (uint32_t)(stat_io - io0);
		pen0 = pcb.pen_total;
		acc0 = pcb.n_access;
		miss0 = pcb.n_miss;
		ifs0 = pcb.n_ifetch_slow;
		idle0 = pcb.n_idle;
		ev0 = stat_events;
		io0 = stat_io;
		pf.flags = wgate_frame((uint32_t)frame_count, band_frame[0], band_frame[1], late_after_load);
		if (hash_this_frame)
			pf.flags |= 64;  /* test 17b: the RAM hash ran */
		if (pcbx_dbl)
			pf.flags |= 128; /* test 17b: pcbx_adjust ran its double expressions (test 18: never) */
		prof_frame(&pf);
	}
	hash_this_frame = 0;

	inputs_update();
	{
		/* test 14: this vblank's entry; the display vblanks this frame took, from the
		 * time between the last two presents */
		const uint64_t vbl = (uint64_t)PPC_TIMEBASE_FREQ * 1001 / 60000;
		rec_frame((uint32_t)frame_count, in_port_c, in_port_d, in_port_l, in_port_f, hsum,
		          BE32(RAMP(LOGIC_WORD)), (unsigned)((disp.period + vbl / 2) / vbl));
	}
	{
		static int ck_seen = SCHK_RUNNING;
		static unsigned under_seen;
		int st = sound_check.state;
		if (st != ck_seen && st != SCHK_OFF) {
			if (st == SCHK_PASSED)
				log_printf(C_GREEN, "SOUND CHECK: ALL %u CHECKPOINTS = PC RUN", sound_check.ok);
			else if (st == SCHK_MISMATCH)
				log_printf(C_RED, "SOUND CHECK: MISMATCH AT FRAME %u AFTER %u OK", sound_check.frame, sound_check.ok);
			else if (st == SCHK_STOPPED)
				log_printf(C_YELLOW, "SOUND CHECK: STOPPED BY INPUT AT FRAME %u, %u OK", sound_check.frame,
				           sound_check.ok);
			ck_seen = st;
		}
		if (sound_stats.underruns != under_seen) {
			under_seen = sound_stats.underruns;
			log_printf(C_YELLOW, "SOUND: UNDERRUN %u AT FRAME %u, MISS %u", under_seen, (unsigned)frame_count,
			           disp.missed);
		}
	}
	/* test 23: wired-pad packets that were not input reports (usbfix/usbctrl_fix.c) */
	{
		static unsigned skip_seen;
		const unsigned n = usbctrl_skipped;
		if (n != skip_seen) {
			const uint32_t l = usbctrl_skipped_last;
			skip_seen = n;
			log_printf(C_YELLOW, "PAD %d: PACKET %02X %02X %02X SKIPPED (NOT INPUT), %u SO FAR",
			           (int)(int8_t)(l >> 24), (unsigned)(l >> 16) & 0xFF, (unsigned)(l >> 8) & 0xFF,
			           (unsigned)l & 0xFF, n);
		}
	}
	/* test 21: sound-thread gaps of T3_LOG_US+ and passes that found the driver empty, at most
	 * two log lines a frame: "T3 GAP|EMPTY <gap ms>@<frame> LOW|MED L<late> Y<ymz_run>
	 * D<driver read> S<submits> Q<driver frames> F<FIFO frames>" (all in the frame log) */
	{
		static unsigned ev_seen;
		unsigned n = t3_event_n, shown = 0;
		if (n - ev_seen > T3_EVENTS)
			ev_seen = n - T3_EVENTS;
		for (; ev_seen != n; ev_seen++) {
			struct t3_event e;
			memcpy(&e, (const void *)&t3_events[ev_seen & (T3_EVENTS - 1)], sizeof(e));
			if (e.gap_us > t3_gap_max_us) {
				t3_gap_max_us = e.gap_us;
				t3_gap_max_frame = e.frame;
			}
			t3_last = e;
			t3_logged++;
			if (e.under && e.frame >= BOOT_FRAMES)
				t3_empty_after_load++;
			/* test 23: a false 0 gets its own line; reads a descriptor off only count (card) */
			if (e.kind == T3K_FALSE0 && shown < 2) {
				shown++;
				log_printf(C_YELLOW, "T3 FALSE 0 AT %u: %u REREADS, REG %08X>%08X Q%u", e.frame,
				           (unsigned)e.rereads, (unsigned)e.reg0, (unsigned)e.reg1, e.queued / 4);
				continue;
			}
			if ((e.gap_us < T3_LOG_US && !e.under) || shown == 2)
				continue;
			shown++;
			log_printf(e.under ? C_RED : C_YELLOW, "T3 %s %u.%u@%u %s L%u.%u Y%u.%u D%u.%u S%u.%u Q%u F%u",
			           e.under ? "EMPTY" : "GAP", e.gap_us / 1000, e.gap_us % 1000 / 100, e.frame,
			           e.mode == WAIT_MED_DB ? "MED" : "LOW", e.late_us / 1000, e.late_us % 1000 / 100,
			           e.ymz_us / 1000, e.ymz_us % 1000 / 100, e.drv_us / 1000, e.drv_us % 1000 / 100,
			           e.sub_us / 1000, e.sub_us % 1000 / 100, e.queued / 4, e.fifo);
		}
	}
	t_resume = tb_read();
}

/* U23+U24 as the YMZ770 sees them (MAME ROM_LOAD16_WORD_SWAP), then the sound thread */
static void sound_begin(void)
{
	const uint8_t *u23, *u24;
	uint32_t n23, n24, i;
	uint8_t *rom;

	u23 = romload_member(R_U23, &n23);
	u24 = romload_member(R_U24, &n24);
	if (!u23 || !u24 || n23 != 0x400000 || n24 != 0x400000) {
		log_printf(C_RED, "SOUND: U23/U24 MISSING OR NOT MAME'S DUMP, NO SOUND");
		return;
	}
	rom = memalign(128, 0x800000 + 16);
	if (!rom) {
		log_printf(C_RED, "SOUND: OUT OF MEMORY, NO SOUND");
		return;
	}
	for (i = 0; i < 0x400000; i += 2) {
		rom[i] = u23[i + 1];
		rom[i + 1] = u23[i];
		rom[0x400000 + i] = u24[i + 1];
		rom[0x400000 + i + 1] = u24[i];
	}
	memset(rom + 0x800000, 0, 16);
	if (sound_start(rom, 0x800000, !chk.off, game_set)) { /* test 33: the attract check's conditions */
		log_printf(C_RED, "SOUND: THREAD %d BUSY, NO SOUND", SOUND_THREAD);
		return;
	}
	sound_ok = 1;
	log_printf(C_YELLOW, "SOUND: YMZ770 ON THREAD %d, 48 KHZ, CHECK %s%s", SOUND_THREAD,
	           chk.off ? "OFF: " : "UNTIL THE FIRST INPUT", chk.off ? chk_off_why : "");
}

/* Test 38: the game to load: the ini's game key when its zip is there, else the only zip
 * found, else the pad menu on the card (D-pad / stick up and down, then A or START on any
 * pad). Thread 0, between romload_scanned and romload_choose: the loader leaves USB alone
 * then, so this polls it as main() does before the loader starts. get_controller_data
 * always copies a pad's latest report, so the presses are the edges of map_pad's word.
 * -1 when no zip is there. */
static int game_choose(void)
{
	uint32_t last[NPADS] = {0};
	int n = 0, s, p;

	for (s = 0; s < NSETS; s++)
		n += romload_found(s);
	if (!n) {
		log_printf(C_RED, "GAME: NO IBARA.ZIP OR IBARABLK.ZIP IN THE ROOT OR /ROMS OF A MOUNTED DEVICE");
		return -1;
	}
	if (cfg.game != GAME_ASK) {
		if (romload_found(cfg.game)) {
			log_printf(C_GREEN, "GAME: %s (THE INI'S GAME KEY)", games[cfg.game].title);
			return cfg.game;
		}
		log_printf(C_YELLOW, "GAME: THE INI SAYS %s, ITS ZIP IS NOT THERE", games[cfg.game].title);
	}
	if (n == 1) {
		s = romload_found(SET_IBARA) ? SET_IBARA : SET_IBARABLK;
		log_printf(C_GREEN, "GAME: %s (THE ONLY ZIP FOUND)", games[s].title);
		return s;
	}
	menu_sel = SET_IBARA;
	menu_on = 1;
	log_printf(C_WHITE, "GAME: CHOOSE WITH THE PAD (GAME = IBARA OR IBARABLK IN THE INI SKIPS THIS)");
	for (;;) {
		usb_do_poll();
		for (p = 0; p < NPADS; p++) {
			struct controller_data_s c;
			uint32_t w, press;

			get_controller_data(&c, p);
			w = map_pad(&c);
			press = w & ~last[p];
			last[p] = w;
			if ((press & A_UP) && menu_sel > 0)
				menu_sel--;
			if ((press & A_DOWN) && menu_sel < NSETS - 1)
				menu_sel++;
			if (press & (A_B1 | A_START)) {
				menu_on = 0;
				log_printf(C_GREEN, "GAME: %s (PAD %d)", games[menu_sel].title, p);
				return menu_sel;
			}
		}
		present();
	}
}

static void game_start(void)
{
	const uint8_t *u4, *u2;
	uint32_t n4, n2, i;

	u4 = romload_member(R_U4, &n4);
	u2 = romload_member(R_U2, &n2);
	if (!u4 || !u2 || (n4 != 0x200000 && n4 != 0x400000)) {
		log_printf(C_RED, "GAME: U4/U2 MISSING OR NOT MAME'S DUMP, NOT STARTING");
		for (;;)
			present();
	}
	cv1k_rom = malloc(0x400000);
	cv1k_ram = memalign(128, RAM_SIZE);
	if (!cv1k_rom || !cv1k_ram) {
		log_printf(C_RED, "GAME: OUT OF MEMORY");
		for (;;)
			present();
	}
	for (i = 0; i < 0x400000; i += 2) { /* MAME ROM_LOAD16_WORD_SWAP + ROM_RELOAD, as the PC host */
		cv1k_rom[i] = u4[(i + 1) % n4];
		cv1k_rom[i + 1] = u4[i % n4];
	}
	cv1k_rom_mask = 0x3FFFFF;
	cv1k_nand = (u8 *)u2;
	cv1k_nand_size = n2;
	memset(cv1k_ram, 0, RAM_SIZE);
	eep_saved = eeprom_boot(rtc9701_eeprom()); /* test 33: the saved EEPROM, else all 0xFFFF */

	if (workers_launch()) {
		log_printf(C_RED, "GAME: BLITTER WORKERS DID NOT START ON THREADS %d AND %d", band_thread[0],
		           band_thread[1]);
		for (;;)
			present();
	}
	log_printf(C_YELLOW, "TEST: BLITTER BANDS ON THREADS %d AND %d", band_thread[0], band_thread[1]);
	if (usb_thread_start())
		log_printf(C_RED, "TEST: USB THREAD %d DID NOT START, NO PADS, CARD FROZEN", USB_THREAD);
	else
		log_printf(C_YELLOW, "TEST: USB + CARD ON THREAD %d, POLL EVERY %u US", USB_THREAD, USB_PERIOD_US);
	if (stop_thread1())
		log_printf(C_RED, "TEST: THREAD %d DID NOT STOP (CTRL %08X)", STOP_THREAD, ctrl_after);
	else
		log_printf(C_YELLOW, "TEST: THREAD %d STOPPED (CTRL %08X), GAME HAS CORE 0", STOP_THREAD, ctrl_after);
	blitter_fast = 0;
	log_printf(C_YELLOW, "PADS: PAD0 = P1, PAD1 = P2. D-PAD/LEFT STICK, A B X Y = BUTTONS 1-4");
	log_printf(C_YELLOW, "PADS: START = START, BACK = COIN, GUIDE = TEST (S3), RB = THIS CARD");
	log_printf(C_GREEN, "TIMING: PCB FIT+ 3.75%%");

	rt_game = game->code; /* test 38 */
	rt_init();
	cv1k_reset(&cpu);
	timing_apply(); /* test 17; test 32: FIT+ 3.75% */
	rtc_from_clock();
	/* test 33: the attract checks need the PC run's start: its RTC and a blank EEPROM */
	if (!rtc_default && eep_saved)
		chk_off_why = "REAL CLOCK + SAVED EEPROM";
	else if (!rtc_default)
		chk_off_why = "REAL CLOCK (THE PC RUN HAS 2026-01-01)";
	else if (eep_saved)
		chk_off_why = "SAVED EEPROM (THE PC RUN STARTS BLANK)";
	chk.off = !rtc_default || eep_saved;
	if (prof_init())
		log_printf(C_RED, "PROF: OUT OF MEMORY, NO FRAME LOG");
	if (cfg.framelog) /* test 33: only when the ini asks */
		prof_begin(romload_device());
	else
		prof_off("OFF (FRAMELOG = 0 IN THE INI)");
	log_printf(rtc_default ? C_YELLOW : C_GREEN, "GAME: %s", rtc_text);
	if (chk.off)
		log_printf(C_YELLOW, "CHECK: OFF, %s", chk_off_why);
	if (!cfg.record) {
		rec_off("RECORD = 0 IN THE INI"); /* test 33 */
	} else {
		/* test 14: the recording's header (tools/rec/rec.py reads "# rtc"); test 16: local
		 * time (CET/CEST) and where it came from; test 29: 2048, it reached ~950 bytes;
		 * test 33: REC_HEADER_MAX, the EEPROM line is 1034 bytes */
		static char hdr[REC_HEADER_MAX], eep_line[1100];
		size_t k;
		eeprom_header_line(eep_line, sizeof(eep_line));
		k = (size_t)snprintf(hdr, sizeof(hdr),
		         "# ibara360 input recording v1 (host/xenon/test18, tools/rec/rec.py)\n"
		         "# build " __DATE__ " " __TIME__ "\n"
		         "# set %s, timing pcb (MAME 0.289 SH7709S model, %s), eeprom %s\n"
		         "# test 17: \"# timing <frame> fit|mame\" = timing model from that vblank on; fit = runtime/pcb.c\n"
		         "#   pcb_timing_fit(1), the fit to the PCB attract capture (goal 16); host/pc applies these lines\n"
		         "# test 26: also \"fitplus\" = pcb_timing_model(PCB_MODEL_FITPLUS), the heavier fit (FIT+)\n"
		         "# test 27: \"fitplus2\" = pcb_timing_model(PCB_MODEL_FITPLUS2), FIT+ at ~2.9%%\n"
		         "# test 28: \"fitplus3\" = pcb_timing_model(PCB_MODEL_FITPLUS3), FIT+ at ~3.0%%\n"
		         "# test 29: \"fitplus4\" = pcb_timing_model(PCB_MODEL_FITPLUS4), FIT+ at ~3.05%%\n"
		         "# test 30: \"fitplus5\" = pcb_timing_model(PCB_MODEL_FITPLUS5), FIT+ at ~3.17%%\n"
		         "# test 31: \"fitplus6\" = pcb_timing_model(PCB_MODEL_FITPLUS6), FIT+ at ~3.97%%\n"
		         "# test 32: \"fitplus7\" = pcb_timing_model(PCB_MODEL_FITPLUS7), FIT+ at ~3.75%% (only model)\n"
		         "# test 33: \"# eeprom <256 words, 4 hex digits each>\" = the EEPROM at power-on (no line: blank);\n"
		         "#   tools/rec/rec.py nvram writes it for host/pc -nvram and for MAME's nvram/<set>/eeprom\n"
		         "# rtc %d,%d,%d,%d,%d,%d,%d (%s%s)\n"
		         "# \"<frame> <C> <D> <L> <F>\": input ports (hex, active low) from emulated vblank <frame> on\n"
		         "# \"s <frame> <screen hash> <word %08X> <display vblanks>\": per emulated vblank\n",
		         romload_set_name(game_set), game->gen, eep_saved ? "saved (# eeprom)" : "blank",
		         rtc_vals[0], rtc_vals[1], rtc_vals[2], rtc_vals[3], rtc_vals[4], rtc_vals[5], rtc_vals[6],
		         clock_source(), rtc_default ? ", no clock found" : ", central european time",
		         (unsigned)LOGIC_WORD);
		if (k < sizeof(hdr))
			snprintf(hdr + k, sizeof(hdr) - k, "%s", eep_line);
		rec_begin(romload_device(), hdr);
	}
	sound_begin();
	blitter_clock = tb_read;
	blitter_start = workers_start;
	blitter_wait = workers_wait;
	blitter_bands = BANDS;
	rt_spin_enabled = 1;
	{
		struct mallinfo mi = mallinfo();
		log_printf(C_YELLOW, "GAME: STARTING %s, EEPROM %s, HEAP %u KB", game->title, eep_saved ? "SAVED" : "BLANK",
		           (unsigned)(mi.uordblks / 1024));
	}
	/* test 33: the card as the ini says from here on; card = 1 keeps the loading card up
	 * until the USB thread hands over its first one */
	card_on = cfg.card;
	card_on_at = card_handoffs - 1;
	game_running = 1;
	t_resume = tb_read();
	rt_run(&cpu); /* never returns: frames come through host_vblank() */
}

/* texture corners for the top left, top right, bottom left, bottom right of a quad: test 2's
 * ROT270 (the raster turned back to portrait), the raster as it is, test 37's half turn */
static const float uv_rot[4][2] = {{1, 0}, {1, 1}, {0, 0}, {0, 1}};
static const float uv_plain[4][2] = {{0, 0}, {1, 0}, {0, 1}, {1, 1}};
static const float uv_half[4][2] = {{1, 1}, {0, 1}, {1, 0}, {0, 0}};

/* x0, y0, x1, y1 in output pixels -> 6 vertices (2 triangles) at v; uv[4][2] for the
 * top left, top right, bottom left, bottom right corners */
static void quad_vertices(float v[6][8], float x0, float y0, float x1, float y1, const float uv[4][2])
{
	const float l = x0 / fb->width * 2 - 1, r = x1 / fb->width * 2 - 1;
	const float t = 1 - y0 / fb->height * 2, b = 1 - y1 / fb->height * 2;
	const float corner[4][2] = {{l, t}, {r, t}, {l, b}, {r, b}};
	static const int order[6] = {0, 1, 2, 2, 1, 3};
	int i;

	for (i = 0; i < 6; i++) {
		const int k = order[i];
		const float e[8] = {corner[k][0], corner[k][1], 0.5f, 0, 0, -1, uv[k][0], uv[k][1]};
		memcpy(v[i], e, sizeof(e));
	}
}

/* n quads of 6 vertices -> a vertex buffer */
static struct XenosVertexBuffer *make_vb(float (*q)[6][8], int n)
{
	const int size = n * (int)sizeof(q[0]);
	struct XenosVertexBuffer *vb = Xe_CreateVertexBuffer(xe, size);

	memcpy(Xe_VB_Lock(xe, vb, 0, size, XE_LOCK_WRITE), q, size);
	Xe_VB_Unlock(xe, vb);
	return vb;
}

static struct XenosVertexBuffer *make_quad(float x0, float y0, float x1, float y1, const float uv[4][2])
{
	float q[1][6][8];

	quad_vertices(q[0], x0, y0, x1, y1, uv);
	return make_vb(q, 1);
}

static int ifloor(float x)
{
	const int i = (int)x;
	return i - (x < i);
}

/* test 37: the scanlines over the game alone at x0, y0 .. x1, y1 (output pixels). The raster's
 * 240 lines lie side by side across x (tate = 0: they are the portrait's columns) or across y
 * (tate); a line is p output pixels, the last d of them its gap: p / 2 + 1 / 4 rounded down
 * (2x 1, 3x 1, 4x 2), half a line when that is under 1 or over half. Each output column (or
 * row) gets the grey 1 - strength * (the part of it the gaps cover) in 255ths; a run of equal
 * greys under 255 is one quad sampling its grey from stex, multiplied into the picture. */
#define SCAN_MAX 2048 /* quads: at most one per output column or row */
static void scan_build(float x0, float y0, float x1, float y1, int across_y)
{
	static float v[SCAN_MAX][6][8];
	const float a0 = across_y ? y0 : x0, a1 = across_y ? y1 : x1;
	const float p = (a1 - a0) / GAME_H, s = cfg.scanline_strength / 100.0f;
	const int i0 = ifloor(a0), i1 = -ifloor(-a1);
	float d = (float)ifloor(p / 2 + 0.25f), uv[4][2];
	int i, j, g, run = i0, grey = 255, n = 0;
	uint8_t *t;

	if (d < 1 || d > p / 2)
		d = p / 2;
	for (i = i0; i <= i1; i++) {
		g = 255; /* past the last column: ends the last run */
		if (i < i1) {
			const int jl = ifloor((i - a0) / p);
			float cov = 0;
			for (j = jl - 1; j <= jl + 1; j++) {
				const float e = a0 + (j + 1) * p; /* line j ends here: its gap is e - d .. e */
				const float lo = e - d > i ? e - d : i, hi = e < i + 1 ? e : i + 1;
				if (j >= 0 && j < GAME_H && hi > lo)
					cov += hi - lo;
			}
			g = (int)(255 * (1 - s * cov) + 0.5f);
		}
		if (g == grey)
			continue;
		if (grey < 255 && n < SCAN_MAX) {
			for (j = 0; j < 4; j++) {
				uv[j][0] = (grey + 0.5f) / 256; /* the middle of stex's column grey */
				uv[j][1] = 0.5f;
			}
			if (across_y)
				quad_vertices(v[n], x0, run, x1, i, (const float (*)[2])uv);
			else
				quad_vertices(v[n], run, y0, i, y1, (const float (*)[2])uv);
			n++;
		}
		run = i;
		grey = g;
	}
	if (!n)
		return;
	stex = Xe_CreateTexture(xe, 256, 32, 1, XE_FMT_8888 | XE_FMT_ARGB, 0);
	stex->use_filtering = 0;
	stex->u_addressing = stex->v_addressing = XE_TEXADDR_CLAMP;
	t = Xe_Surface_LockRect(xe, stex, 0, 0, 0, 0, XE_LOCK_WRITE);
	for (j = 0; j < 32; j++)
		for (i = 0; i < 256; i++)
			((uint32_t *)(t + j * stex->wpitch))[i] = 0xFF000000u | (uint32_t)i * 0x010101u;
	Xe_Surface_Unlock(xe, stex);
	vb_scan = make_vb(v, n);
	scan_quads = n;
}

/* test 37: the game alone, centred, as the ini says (thread 0, once the ini is read, before
 * the USB thread starts): tate = 0 the 240x320 portrait (ROT270), left the 320x240 raster as
 * it is, right the raster turned half a turn; picture = integer the largest whole-number scale
 * that fits, full the full height (or width) at the picture's 3:4 (4:3); then the scanlines */
static void centred(float r[4], float w, float h)
{
	r[0] = (fb->width - w) / 2;
	r[1] = (fb->height - h) / 2;
	r[2] = (fb->width + w) / 2;
	r[3] = (fb->height + h) / 2;
}

static void alone_layout(void)
{
	const float (*uv)[2] = cfg.tate == TATE_LEFT ? uv_plain : cfg.tate == TATE_RIGHT ? uv_half : uv_rot;
	const int pw = cfg.tate ? GAME_W : GAME_H, ph = cfg.tate ? GAME_H : GAME_W; /* the picture */
	int k = fb->height / ph < fb->width / pw ? fb->height / ph : fb->width / pw;
	float ri[4], rf[4], w, h;
	const float *r;

	if (k < 1)
		k = 1;
	centred(ri, (float)pw * k, (float)ph * k);
	h = fb->height;
	w = h * pw / ph;
	if (w > fb->width) {
		w = fb->width;
		h = w * ph / pw;
	}
	centred(rf, w, h);
	vb_int = make_quad(ri[0], ri[1], ri[2], ri[3], uv);
	vb_full = make_quad(rf[0], rf[1], rf[2], rf[3], uv);
	r = cfg.picture == PIC_FULL ? rf : ri;
	if (cfg.scanlines && cfg.scanline_strength > 0)
		scan_build(r[0], r[1], r[2], r[3], cfg.tate != TATE_OFF);
	log_printf(C_GREEN, "PICTURE: TATE %s, %s %dX%d AT %d,%d, SCANLINES %d%% (%d QUADS)",
	           cfg.tate == TATE_LEFT ? "LEFT" : cfg.tate == TATE_RIGHT ? "RIGHT" : "OFF",
	           cfg.picture == PIC_FULL ? "FULL" : "INTEGER", (int)(r[2] - r[0] + 0.5f), (int)(r[3] - r[1] + 0.5f),
	           (int)r[0], (int)r[1], cfg.scanlines ? cfg.scanline_strength : 0, scan_quads);
}

int main(void)
{
	static const struct XenosVBFFormat vbf = {
		3, {
			{XE_USAGE_POSITION, 0, XE_TYPE_FLOAT3},
			{XE_USAGE_NORMAL,   0, XE_TYPE_FLOAT3},
			{XE_USAGE_TEXCOORD, 0, XE_TYPE_FLOAT2},
		}
	};
	float s, gx, gy;
	int i, started;

	xenos_init(VIDEO_MODE_AUTO);
	console_init();

	/* from here on every printf also lands in the on-screen log */
	prev_hook = stdout_hook;
	stdout_hook = log_hook;

	printf("\n\n  ibara360 - Xbox 360 test build 38 (Ibara and Ibara Kuro Black Label: game in the ini or a pad menu)\n");
	printf("  built " __DATE__ " " __TIME__ " with libxenon\n\n");
	speed_before = xenon_get_speed();
	if (speed_before != XENON_SPEED_FULL) {
		printf("  raising the CPU to full speed (libxenon xenon_make_it_faster)...\n");
		xenon_make_it_faster(XENON_SPEED_FULL);
	}
	speed_after = xenon_get_speed();
	printf("  CPU speed setting %d -> %d (1 = full)\n", speed_before, speed_after);
	/* test 16: the console clock while nothing else uses the SMC; the NAND config (the MAC
	 * address for the network task) read here too, not on thread 3 later */
	clock_smc_read();
	xenon_config_init();
	usb_init();
	usb_do_poll();

	printf("  starting hardware threads...\n");
	xenon_thread_startup();
	xenon_sound_init();

	xe = &xe_dev;
	Xe_Init(xe);
	fb = Xe_GetFramebufferSurface(xe);
	Xe_SetRenderTarget(xe, fb);

	ps = Xe_LoadShaderFromMemory(xe, shader_3d_ps);
	Xe_InstantiateShader(xe, ps, 0);
	vs = Xe_LoadShaderFromMemory(xe, shader_3d_vs);
	Xe_InstantiateShader(xe, vs, 0);
	Xe_ShaderApplyVFetchPatches(xe, vs, 0, &vbf);

	gtex = Xe_CreateTexture(xe, GAME_W, GAME_H, 1, XE_FMT_8888 | XE_FMT_ARGB, 0);
	gtex->use_filtering = 0;
	gtex->u_addressing = gtex->v_addressing = XE_TEXADDR_CLAMP;
	for (i = 0; i < 2; i++) {
		ctex2[i] = Xe_CreateTexture(xe, CARD_W, CARD_H, 1, XE_FMT_8888 | XE_FMT_ARGB, 0);
		ctex2[i]->use_filtering = 0;
		ctex2[i]->u_addressing = ctex2[i]->v_addressing = XE_TEXADDR_CLAMP;
	}
	card_init();

	/* layout for 1280x720, scaled to the actual mode: the game portrait 240x320 at 2x
	 * (480x640) on the left, centred vertically; the card 400x360 at 2x on the right */
	s = fb->width / 1280.0f;
	if (fb->height / 720.0f < s)
		s = fb->height / 720.0f;
	gx = 0;
	gy = (fb->height - 640 * s) / 2;
	vb_game = make_quad(gx, gy, gx + 480 * s, gy + 640 * s, uv_rot);
	vb_card = make_quad(fb->width - 800 * s, (fb->height - 720 * s) / 2, fb->width,
	                    (fb->height + 720 * s) / 2, uv_plain);
	/* test 33's game alone (vb_int, vb_full): test 37 builds it once the ini is read */
	video_w = fb->width;
	video_h = fb->height;
	clear_game();
	conv_init();

	edram_init(xe);

	/* test 16: network time on thread 3 from now on, while USB settles and the ROMs load */
	net_started = net_start() == 0;
	printf("  network time task %s on thread %d\n", net_started ? "started" : "NOT STARTED (thread busy)",
	       NET_THREAD);

	printf("  video %dx%d, USB storage settles for 3 s\n\n", fb->width, fb->height);
	for (i = 3 * 60; i > 0; i--) {
		if (i % 60 == 0) {
			printf("\r  card starts in %d s ", i / 60);
			fflush(stdout);
		}
		usb_do_poll();
		mdelay(16);
	}
	printf("\n");
	console_close();          /* sets stdout_hook to 0 */
	prev_hook = 0;
	stdout_hook = log_hook;

	started = romload_start() == 0;
	log_printf(started ? C_YELLOW : C_RED, "TEST: CARD UP, LOADER %s ON THREAD %d",
	           started ? "STARTED" : "NOT STARTED (THREAD BUSY)", LOADER_THREAD);
	if (!started)
		for (;;)
			present();
	/* test 38: the zips looked for, the ini (its game key), the game (the ini's or the menu's),
	 * then only that set loaded, then its EEPROM */
	while (!romload_scanned())
		present();
	settings_load(romload_scan_device()); /* test 33: the ini, before any other file work */
	game_set = game_choose();
	if (game_set >= 0) {
		game = &games[game_set];
		game_chosen = 1;
	}
	romload_choose(game_set);
	while (!romload_finished())
		present();
	eeprom_load(romload_device(), romload_set_name(game_set)); /* test 33: the saved EEPROM */
	alone_layout();                  /* test 37: tate, picture, scanlines */
	/* test 16: the network task ends on its own within ~30 s (link 5 s, DHCP 12 s, SNTP
	 * 8 s); past NET_WAIT_MS something hangs on thread 3 and the game starts without it */
	if (net_started && !net.finished) {
		log_printf(C_YELLOW, "TEST: ROMS LOADED, WAITING FOR THE NETWORK TIME");
		while (!net.finished && tb_us(net.start ? net.start : tb_read(), tb_read()) < NET_WAIT_MS * 1000u)
			present();
	}
	__sync_synchronize();
	if (net.finished) { /* the task's last instructions: thread 3 free for the sound thread */
		const uint64_t t0 = tb_read();
		while (xenon_is_thread_task_running(NET_THREAD) && tb_us(t0, tb_read()) < 1000000)
			;
	}
	if (!net_started)
		log_printf(C_RED, "NET: TASK NOT STARTED, THREAD %d BUSY", NET_THREAD);
	else if (!net.finished)
		log_printf(C_RED, "NET: STILL RUNNING AFTER %u S, GAME STARTS WITHOUT IT", NET_WAIT_MS / 1000);
	else
		log_printf(net.ok ? C_GREEN : C_YELLOW, "NET: %s IN %u.%u S", net.why, net.total_ms / 1000,
		           net.total_ms / 100 % 10);
	game_start();
	return 0;
}

/* ibara360 360 test 71 .xex (user 2026-10-25, with test 70's SUCCESS: the next list): test 70 with the controls page's
 * DEFAULTS help "A = RESTORE DEFAULT" and no "FIXED" line, the sound tests' grey lines reworded, FULL RESTART's choice
 * without its "first stage" / "new credit" line, Kuro BL's start menu's side by UP / DOWN, CONTROLS' style changed in
 * the pause shown at once; P1 CONTROLS and P2 CONTROLS (each pad its own buttons and AUTO SHOT rate, the options' and
 * the pause's); GADGETS: CO-OP (M3 GADGETS: both players' gadgets while two play), the BOSS's 0% kept (no 100% from
 * another part as it dies), SPECIAL FORMATIONS empty outside a run, 4:3 reworked (two columns, every gadget, CONTROLS
 * as text; the artwork under it the run's pilot, Bond or Dyne, from official art); XEX_TEST "71".
 *
 * Test 70 .xex (user 2026-10-25, with test 69's SUCCESS: the next list): test 69 with a restart keeping a
 * Hadou charge (the slot's ports back with it, the held buttons straight to the game), RESTART STAGE red past stage 1
 * only, FULL RESTART never red and with a side / ship choice (SM_FULLSEL: the run's own = its first stage's slot, another
 * = the attract's slot and the start menu's command), Start at once after QUIT TO ATTRACT opening the menu (not the
 * game's title), the pause's helps in the user's words ("QUIT? A = YES, B = NO", B un-arms), the options' picture rows
 * on a GENERAL SCREEN page with the user's names and helps, DEBUG CARD on the debug menu, no "A = OPEN" (A = CONFIRM),
 * no START = PLAY on any options page (Kuro BL has a start menu now), the pause pages' lines inside their boxes; GADGETS:
 * SPECIAL FORMATIONS (every formation and its condition, the one being collected lit), SCORE BREAKDOWN (was STAGES),
 * WEAPON 4 rows when its RAPID row is on the CONTROLS text plate; XEX_TEST "70".
 *
 * Test 68 .xex (user 2026-10-25, with test 67's SUCCESS: the next list): test 67 with a SOUND page on
 * the options (MUSIC / SFX / VOICE volumes, ATTRACT = their share in the attract, MUTE, MUSIC TEST and VOICE TEST on a
 * chip of their own: runtime/ymz770.c, source/sound.c), Kuro BL's continue countdown beep at half, the M3 GADGETS
 * page's ALL row turning every gadget on or off with LEFT / RIGHT and its help texts renamed (user's words), the
 * continue type box narrower (no controls line) and at the top for both sides, 1P at the left, 2P at the right;
 * XEX_TEST "68".
 *
 * Test 67 .xex (user 2026-10-25, with test 66's SUCCESS: the next list): test 66 with GADGETS without
 * ITEMS COLLECTED (NEXT DROP, NEXT MEDAL moved up; BULLETS, the enemy bullets on screen, new), M3 GADGETS without the
 * HADOU, RAPID and ITEMS rows (always WEAPON's rows / gone), CONTROLS as the stick or as text on a slim plate, NEXT
 * DROP cut with its own tab outline (the black dashes over its place came from ITEMS' piece); the options' special
 * mode, EEPROM save, record, frame log, network log and game menu on a DEBUG MENU page, AUTOFIRE on the controls page;
 * the start menu's box written in rising addresses (test 66: ~1.5 ms of the game thread while open, one late frame);
 * XEX_TEST "67".
 *
 * Test 66 .xex (user 2026-10-25, test 65's report: the start menu opened inside a run begun from the
 * logos and its PLAY then pressed every button there; the options closed in the attract's third demo; "the artwork
 * below the music gadget when turned off seems to be a hallucinated approximation"): test 65 with sm_frame's idle =
 * no run (the game's byte 1 outside a demo, IB_DEMO / BLK_DEMO) instead of test 57's "the logos are always idle"
 * (a run keeps the scene it began from), the logos after a service menu still idle (sm_svc); gen/card without the
 * silhouettes' painted-out backing (BACK_SIL): the artwork's own bottom right under STAGES and MUSIC; XEX_TEST "66".
 *
 * Test 65 .xex (user 2026-10-25, test 64's report: "stages gadget doesn't turn off", "music gadget turns
 * off both music and stages", "turning off next drop gadget leaves some lines behind and a shadow", then the next
 * GADGETS list): test 64 with source/gadgets.c and gen/card (tools/card/mkcard.py) revised: STAGES on its own switch
 * (a define hid its id), the right panel painted out cleanly, STATUS (ship, type, mode, bombs, lives, EXT and a new
 * invincibility counter) above WEAPON, SECRET FORMATION, a continue's stage red in STAGES, tate on 16:9 with 2 x 2
 * plates per band (user's choice), 4:3 at 75% width, the boss's time with three decimals a little to the left; the M3
 * GADGETS page gets STATUS; XEX_TEST "65".
 *
 * Test 64 .xex (user 2026-10-25, after test 63's success, the GADGETS update list in PLAN.md "all in a
 * single test"): test 63 with source/gadgets.c and gen/card (tools/card/mkcard.py) revised: every plate its own sprite,
 * each gadget on or off from the options' M3 GADGETS page (gadget_<name> in the ini, source/settings.c), the plates
 * 2.5% smaller, WEAPON 8 rows on 16:9 (HADOU under BOMB, LIVES, RAPID at its bottom), ibara's full-power secret in the
 * SHOT row, Kuro BL's weapon box, STAGES (each stage's score) above MUSIC (user: "swap positions between music and
 * stages gadgets"), the boss's HP at the bar's left without "LEFT", the rank's 100%; XEX_TEST "64".
 *
 * Test 63 .xex (user 2026-10-25, after test 62's success: "compile the functions left that you found in
 * the latest logs and the late stretch in kuro BL"): test 62 with gen/ibara_drc 1335 (0C09D3E0, 0C09D1C0, 0C09A290
 * and 0C09B712, entered once they are, compiled: work/g63/missed_ibara5.txt) and a job that writes nothing in the shown window (runtime blitter_job_win)
 * converted before it is drawn, so a frame no longer waits for the bands to finish (screen_frame), XEX_TEST "63".
 *
 * Test 62 .xex (user 2026-10-24, test 61: "success, new gadgets work" + "failure - some boss timers count
 * upwards, instead of backwards"): test 61 with every boss's GADGETS time counting down to its withdrawal by timeout
 * (source/bossclock.c, each boss's rule from its code, work/g62; source/gadgets.c shows it from the start of the
 * fight), XEX_TEST "62".
 *
 * Test 61 .xex (user 2026-10-24, the gadgets revised: "(ibara only) special formation tracking gadget",
 * "current rapid fire frequency" (ibara only, the set rate and the measured one), "move music gadget below boss hp
 * bar", "make joystick/buttons gadget 5% smaller, and have it stay on the left side no matter if i'm playing P1 or P2
 * side; if a second player joins in for co-op, disable controller gadget", "bigger font for the score gadget"; the new
 * gadgets on 16:9 only; then "skip co-op check for now"): test 60 with source/gadgets.c and gen/card
 * (tools/card/mkcard.py) revised (the controls = the side last touched, no co-op test), XEX_TEST in the
 * log, the network log and the card (test 60's said "test 58" in two places).
 *
 * Test 60 .xex (user 2026-10-24: "compile the 2 new functions", "late frame after PLAY", "GADGETS in
 * more layouts": "16:9 tate gadgets with limited information where the black bars are at the top and bottom of the
 * screen (score, rank without the bar, just the percentages, boss health and timer without the bar, current medal, no
 * music or controller gadget)", "for kuro, same gadgets, without the L/R/B weapon system", "for both games, the ext
 * gadget should be counting down", "for 4:3 gadgets in horizontal (yoko) mode only, move the game to the left side of
 * the screen, and use the right for the gadgets"; all in one test): test 59 with
 *
 *  - gen/ibara_drc with 0C091D00 and 0C091D50 compiled (test 58's run interpreted them; work/g60);
 *  - GADGETS views (source/gadgets.c, gen/card from tools/card/mkcard.py): 16:9 tate off (test 58's), 4:3 tate off
 *    (the game at the left edge, a 420x720 panel at the right without the controls and the music, which do not fit),
 *    tate on a 16:9 display (score + rank above the game, boss + next medal below, no bars); Kuro BL with its own
 *    title logo and RAM, no L/R/B rows; EXT = the points left to the next extend; GADGETS on Kuro BL's options page.
 *
 * Test 59 .xex (user 2026-10-24: "rename "INFO CARD" into "GADGETS", and keep that name from now on"):
 * test 58 with its info card called GADGETS: the options row, the log lines, the ini key (gadgets = 1 / 0; test 58's
 * infocard key is still read), source/gadgets.c (gadgets_* and gd_* names); the log's first line says test 59.
 *
 * Test 58 .xex (user 2026-10-22: "develop a new card that looks exactly like" Baffo's MAME
 * artwork for ibara "(using official game artwork), displaying controls in real time and information such as boss
 * health, boss timer, item drop table, rank increase/decrease in real time (in percentage), current weapon setup,
 * score, current music track and composer", placed after M2's Battle Garegga Rev.2016 panels): test 57 with
 *
 *  - ibara's GADGETS (source/gadgets.c, gen/card from tools/card/mkcard.py): the artwork around the game picture
 *    and its plates filled from game RAM every emulated vblank: SCORE, WEAPON (ship, type, mode), MUSIC (the track
 *    the sound driver plays, its composer), RANK (bar, percent, its change over the last second or a fall), ITEMS
 *    COLLECTED, NEXT DROP, NEXT MEDAL (the artwork's script's), BOSS (the largest enemy part's hit points, the
 *    fight's time while the boss music plays), the sticks and buttons of both sides as the game reads them with the
 *    pad buttons set to shot and bomb and the AUTO SHOT lamp. Shown with the game alone upright on a 16:9 display
 *    (the debug card hidden); gadgets = 1 / 0 in the ini and a GADGETS row on ibara's options page;
 *  - the log's first line says test 58 (test 57's still said test 55).
 *
 * Test 57 .xex (user 2026-10-22: "one small inconsistency with kuro BL where start would
 * not bring up the options menu during the attract screen"; "inverse the left/right toggle for
 * autofire selection in ibara"): test 56 with
 *
 *  - the start menu gated by the game's scene byte (IB_SCENE / BLK_SCENE) instead of test 53's
 *    SM_BOOT 1800: the games take Start from their logos on (Kuro BL ~1510, ibara ~1480, and the
 *    boot is not always as long: test 53's Kuro BL showed its logo at 1112), so a Start there
 *    reached the game (the title, then a free-play run) instead of opening the box. Idle = the
 *    scene past the boot, not the service menu, and the game byte 0 or the logos (ibara's byte is
 *    0x0C on its logos, and both games' is still 1 on the logos after a service-menu exit); the
 *    logos count as idle at once;
 *  - ibara's AUTOFIRE row: RIGHT (and A) = the faster rate (10, 12, 15, 20, 30 Hz, round), LEFT =
 *    the slower (test 55: the other way round).
 *
 * Test 56 .xex (user 2026-10-22 after test 55: "controls menu can be opened with right on
 * the dpad, they should only open with the A button"; "pause menu should just say pause, and nothing
 * else"): test 55 with the options' CONTROLS row opened by the pad's own A only (sm_frame) and the
 * pause box holding the one word PAUSE (pause_draw, PB_W / PB_H).
 *
 * Test 55 .xex (user 2026-10-22, option B in one test: "a menu for remappable controls
 * (Kuro BL has one more button, the sub-weapon swap) and a pause button" for both games, an ibara
 * autofire option at 10, 12, 15, 20 or 30 Hz, Kuro BL's 1P / 2P side before a run; "back button
 * during a run is free" for the pause): test 54 with
 *
 *  - the controls page (CONTROLS on the options page, both games): A, B, X, Y, LB, RB, LT and RT
 *    each set to SHOT, BOMB, RAPID SHOT, BUTTON 4 (Kuro BL: WEAPON CHANGE), AUTO SHOT, STATUS
 *    CARD or OFF, per game, in the ini as <set>_<button> lines; the defaults are test 54's pads.
 *    The IO thread maps the buttons (map_pad, ctl_bits); the menus read the pad's own A and B
 *    (A_MA, A_MB), so they work whatever the buttons do. LB set to OFF still switches the check's
 *    RAM hash;
 *  - the pause: BACK during a run (the game's byte 1, not the service menu) holds the game before
 *    the next frame (pause_loop): the same picture with a PAUSED box every vblank, the sound driver
 *    fed silence with the queued sound kept for when the game goes on; BACK or START goes on.
 *    "PAUSE:" log lines, frame log flag 1024, card AUDIO DRV PAUSE; nothing in the recording (no
 *    emulated vblank passes). back_in_run = coin in the ini keeps BACK a coin there (continues
 *    without free play);
 *  - AUTOFIRE (ibara's options): AUTO SHOT at 30 (test 48's), 20, 15, 12 or 10 Hz = button 1 down
 *    for half of every 2nd .. 6th game logic frame (rounded down); Kuro BL's stays 30 Hz;
 *  - PLAYER (Kuro BL's options box): the side its Start plays (pad_swap, as ibara's start menu).
 * Each game has its own option rows now (ibara 15, Kuro BL 14); the box is as tall as they need.
 *
 * Test 54 .xex (user 2026-10-22: "option A first"): test 53 with gen/ibarablk_drc
 * 1369 -> 1370 functions. Test 53's Kuro BL run interpreted 0C0651F0, the DIP SWITCH SETTING
 * screen of its service menu (R3, four DOWNs, button 1), which no earlier recording had reached.
 *
 * Test 51 .xex (user 2026-10-22: free play set, so BACK is free; a menu after the
 * attract for 1P / 2P by BACK and for the harder and extended modes, without the hidden button
 * combinations; then the user chose a pop-up on Start and a ship type row): test 50 with ibara's
 * start menu (sm_frame, sm_draw). Ibara has no ship select: the 1P side plays Bond, the 2P side
 * Dyne, and the Start press that begins a credit reads the stick (up = harder, down = extended)
 * and buttons 1 / 2 (types B, C, both = D). In the attract (ibara's game byte 0 for SM_IDLE
 * vblanks, not the service menu) Start opens a box over the picture; START or A there gives the
 * pad the chosen side and sends that Start with the command on the side's port, as a player
 * would; "MENU:" log lines, including what the game took (its mode and ship bytes). Ibara Kuro
 * Black Label is unchanged.
 *
 * Test 50 .xex (user 2026-10-22: option C, the slow ROM load after the game menu):
 * test 49 with the hard disk kept awake while the game menu waits (romload.c). The disk starts
 * winding down after ~6 s without a command, and the loader's first read then waited 0.5-2.5 s
 * (14 hardware runs: menu <= 5.5 s = no wait, 6-12 s = 0.5-1.2 s, 26-55 s = 2.5 s). The loader
 * thread now reads 4 KB of each zip found, uncached, every 2 s until the choice; the card's
 * loader row and a "DISK:" log line count the reads, and the "SET" line gives the time from
 * the choice to the zip's directory read.
 *
 * Test 49 .xex (user 2026-10-22: "A first", the Guide visible on 480i): test 48 with
 * xsdk's present.c linked from source/xsdk_present.c in place of libxsdk.a's. On an interlaced
 * output xsdk keeps the kernel's 640x480 display mode with no scaling, and its present never
 * showed XAM's surface there ("present: XAM's 640x480 surface can't show on the kernel's display
 * mode", test 48 on the CRT: the user quit through a Guide they couldn't see). Now XAM's surface
 * shows in the front buffer's place when it has the front buffers' size and pitch (640x480 on
 * the 4:3 480i console), and XAM is told the output is the front buffer's size (event 1). The
 * card's PRESENT row GUIDE counts the frames XAM's surface stood in for. The 720p path is
 * unchanged.
 *
 * Test 48 .xex (user 2026-10-22: 480i for a CRT and 4:3 displays, a 30 Hz autofire
 * button, the service menu off the Guide, player 2): test 47 with
 *
 *  - the picture at the display's pixel aspect: VdQueryVideoMode says whether the console is set
 *    to widescreen (16:9) or normal (4:3), the ini's aspect = 4:3 / 16:9 overrides it. xsdk gives
 *    1280x720 scaled to a progressive output and the kernel's own front buffer (640x480) on an
 *    interlaced one (480i, 1080i), so one front-buffer pixel shows (4:3 or 16:9) x height / width
 *    as wide as it is tall (par): 1 at 1280x720 on 16:9 and at 640x480 on 4:3, 0.75 at 1280x720
 *    on 4:3, 1.33 at 640x480 on 16:9 (1080i, stretched before). Both layouts are made in square
 *    units and turned into front-buffer columns by par: the game alone (integer / full, tate) and
 *    the card layout (the game at the largest whole-number height on the left, the card as large
 *    as the width left allows on the right); at par 1 the quads are test 47's. "DISPLAY: OUTPUT"
 *    log line; a 50 Hz output (PAL without PAL 60) is logged red: the game is paced by vblanks
 *    and would run at 5/6 speed;
 *  - RT = 30 Hz autofire of button 1 (the shot): while RT is held, button 1 is down from that
 *    frame, then flipped each time the game's logic-frame counter moves, so the game sees on, off,
 *    on... in its own 30 Hz slowdown too (a flip every vblank would read as held or as never
 *    pressed there); after AF_STALL vblanks without the counter moving it flips anyway. In the
 *    ports, so the recording carries it. Card pad rows AF;
 *  - the board's S3 test button (the service menu) is on R3 now (user choice), not L3: the Guide
 *    is the console's;
 *  - player 2 as before: controller 2 (slot 1) = player 2's joystick, buttons, Start 2, Coin 2.
 *
 * Test 47 .xex (user 2026-10-22: "a and b please"): test 46 with
 *
 *  A: test 46 found the one IO loop over 12 ms in play (14.96 ms, Kuro BL EMU 75534): the card
 *    held the log ring's lock for its ~1 us copy, the kernel gave hardware thread 5 to the file
 *    thread waking from its sleep, and log_flush spun on the lock at full priority for ~10 ms
 *    until the time slice ended (card LOCK 1/10.98 MS). Now a contended log_lock spins at low SMT
 *    priority for LK_SPIN_US (LK_SPIN_OTHER_US when the holder is on another hardware thread),
 *    then hands its hardware thread to the kernel (NtYieldExecution) on every try, so a holder
 *    switched out on the same hardware thread runs again at once. A wait
 *    over LK_LONG_US is logged by the IO thread: "LOG LOCK: <site> ON Tn WAITED .. MS AT EMU ..
 *    FOR <site> ON Tm, YIELDED k TIMES" (with the IO: lines, at most IO_SLOW_LINES).
 *  B (sound.c): the sound is held until the game's first sound: the silent samples before it are
 *    not queued, so nothing plays (and nothing runs dry) while ibara's start-up frames take
 *    22.3 ms each (test 46: 3 underruns of silence at EMU 8-25). Playing starts AF_PRIME frames
 *    after the first sample that is not silence, as before. Log line "SOUND: FIRST SOUND AT FRAME
 *    n ..."; card AUDIO DRV row QUIET = driver calls before it (CALLS dropped: PLAYED + QUIET +
 *    SILENT), so SILENT is the priming plus any underrun.
 *
 * Test 46 .xex (user 2026-10-21: "B and C together"): test 45 with
 *
 *  B (diagnosis, nothing changed): test 44 had one IO loop of ~22 ms per run, both in the card
 *    render (normally ~5 ms), the cause unknown. The IO and file threads share hardware thread 5,
 *    and the log ring's lock is a pure spin (the card's log lines, the file thread's log_flush,
 *    log_printf from any thread): a thread that waits for it spins until the kernel switches
 *    threads. Now each IO loop's parts are timed (pads, card draw, card copy, network, stack
 *    check) and the sleep after it; the card render keeps its longest step between two text rows
 *    or copied rows (a thread switch shows as one long step) and where; a contended take of the
 *    lock keeps its wait, the waiting and holding sites and their hardware threads; the file
 *    thread keeps its pass's start and end. A loop or sleep over IO_SLOW_US writes one log line
 *    "IO: ..." with all of it (at most IO_SLOW_LINES). Card rows PADS (SLEPT = the longest
 *    sleep) and CARD (LOCK = contended takes / the longest wait, SLOW = the lines).
 *  C (sound.c): a larger sound cushion, kept between 26.7 and 53.3 ms at its low point; the
 *    sound row shows it (CUSHION now, LOW over the last second, MIN after frame 1200), log lines
 *    when the clock follower changes direction and when the cushion's lowest after load drops
 *    below 26.7 ms, the frame log's new last column.
 *
 * Test 42 .xex (test 41 report 2026-10-21: in a Kuro Black Label boss explosion six
 * frames took 16.3-16.6 ms of work, the GPU then missed the vblank, and each cost the game a whole
 * vblank and the sound an underrun): test 41 with the game paced by xsdk's vblank count instead of
 * its own frame's flip.
 *
 *  - frame k starts at its vblank (sched_vb) and is due on screen at the next one; the game thread
 *    queues it, then waits for that vblank, not for the flip. A frame the GPU finishes too late
 *    shows a vblank late and the next frame starts on time, so the game and the sound keep real
 *    time while the work fits in a vblank;
 *  - two front buffers: a frame is queued only once the one before has been shown. While the
 *    display is a vblank behind, a frame done close to its vblank is queued after that flip
 *    (smooth, one vblank later); one done early (over a quarter vblank) is not shown, which puts
 *    the display back in step; a frame done after its vblank with the one before still waiting is
 *    not shown either (catching up). More than LAG_RESYNC_VB vblanks behind, the schedule restarts
 *    from the current vblank (the game lost that time, as before);
 *  - two game textures: the frame's conversions write the one the last frame queued does not
 *    sample, and a card texture is only asked for once no queued frame samples it;
 *  - the display rate comes from xsdk's vblank count (test 41's came from the frames shown, so
 *    after late frames the late classifier's vblank grew to 17.5 ms and called CPU frames OTHER);
 *  - card row 1: frames not shown (SKIP catch-up + back in step), LAG (frames that started over a
 *    quarter vblank after their vblank, the largest), RS (schedule restarts); the PRESENT row's
 *    BEHIND = frames xsdk flipped after their vblank; log lines when frames start being shown late
 *    and when one is on time again; frame log flags 256 (queued after waiting for the one before
 *    to show) and 512 (not shown).
 *
 * Test 41 (test 40 report 2026-10-21: at emulated frame 20018 the pad froze with
 * button 1 held and the card jumped to 20176): test 40 with the file work off the pad thread.
 * Test 40's IO thread (T5) read the pads, drew the card, answered the network log and wrote the
 * files, one after the other; the log line "rt: interpreting 0C06EDB0" (the first log write in
 * 266 s, to the console's hard disk) took 2614 ms in NtWriteFile, so for 157 frames the pads were
 * not read (the game kept the last state: button 1) and the card was not redrawn. Now:
 *
 *  - the file thread (FILE_THREAD, also T5): the log file, the recording, the EEPROM save and the
 *    frame log, as test 40's loop did them; a write that blocks only blocks this thread;
 *  - the IO thread (T5): pads, the card, the network log, the stack check: no file work, so its
 *    LOOP MAX is the longest gap between two pad reads;
 *  - a file-thread pass over 100 ms is logged with how long it took, how long the files had been
 *    idle before it and how many times the pads were read meanwhile; card row FILE under LAG.
 *
 * Test 40 .xex (user 2026-10-21: "add UDP listening to the xbox360 so that ibara360
 * can send its logs directly to the PC"): test 39's .xex with the log file, the recording and the
 * frame log also over the LAN (source/netlog.c), for tools/netlog/ibaranet.py on the PC:
 *
 *  - the console listens on UDP port netlog_port (the ini: netlog = 1, netlog_port = 3600 by
 *    default) and only answers the PC's POLLs, so nothing goes out while no PC asks and the PC's
 *    firewall needs no rule; the PC asks again for whatever did not arrive, so its copies are the
 *    stick's files byte for byte (ibara360.log beside the .xex, recNNNN.txt, perfNNNN.txt);
 *  - every line of the log file goes, xsdk's own too: the link wraps xsdk_log_write (only the
 *    "log: ..." lines xsdk writes as it opens the file stay in the file alone);
 *  - the IO thread (T5) does it after the log file in each loop, at most NL_RATE datagrams a
 *    second; the frame log's flag 128 marks frames during which datagrams went out;
 *  - a CPU fault pushes the last lines to the PC that polled last, before the title ends;
 *  - card rows NET (the console's address, the PC's, its POLLs) and LAG (how far the PC is
 *    behind on each stream, datagrams sent, T5's time in it).
 *
 * Test 39 as a .xex (user 2026-10-21: "build test 39 with xsdk"): test 39 (both
 * games in one image, the 1325 Kuro Black Label functions compiled in, FIT+ 3.75%, the menu, the
 * ini, the EEPROM saves, tate and scanlines, the recorder) for the retail kernel and dashboard of
 * an RGH console, built with xsdk (github.com/xenosworks/xsdk, MIT, no Microsoft code) instead of
 * libxenon. The game, the runtime (runtime/, gen/ibara_drc, gen/ibarablk_drc) and the timing
 * model are test 39's, untouched; what the kernel owns now changes around them:
 *
 *  - video: xsdk's GPU layer (gpu.h, present.h): the 720p display (the kernel's mode on an
 *    interlaced output), two front buffers. The picture, the card and test 37's scanlines are the
 *    same textured quads, drawn by one GLSL shader pair (shaders/quad.vert, quad.frag) through
 *    xost; the scanlines multiply in with blend ZERO x SRC_COLOR as before. A frame goes out at
 *    the first vblank once the GPU has drawn it, and the game thread waits for that flip, as test
 *    39 waited for the vblank after its resolve (one emulated frame per displayed frame);
 *  - pads: the kernel's (XamInputGetState, controllers 1-4 = slots 0-3), read every ~2 ms on the
 *    IO thread (T5, test 12's USB thread). libxenon's OHCI fixes (tests 23, 35) are gone with
 *    libxenon: the kernel polls the pads itself. GUIDE opens the console's Guide, so the board's
 *    S3 test button is also on the left stick's click;
 *  - sound: the kernel's audio render driver (source/sound.c), fed from the same YMZ770 thread;
 *  - files: the kernel's (newlib through xsdk): the zips beside the .xex or in a folder above it,
 *    the ini, saves and recordings in <the .xex's device root>/ibara360 as before
 *    (source/romload.c);
 *  - the clock: the console's (KeQuerySystemTime, UTC, the dashboard's), shown as CET/CEST;
 *  - threads: kernel threads placed on the hardware threads of test 39 (game 0, bands 2 and 4,
 *    sound 3, IO 5, the loader on 2 while it runs). Hardware thread 1 is the kernel's (test 12
 *    stopped it; a title cannot). Busy waits yield to the kernel every ~1 ms
 *    (spin_yield_until). The game runs on a thread of its own with a GAME_STACK stack (painted
 *    at the start: the card shows the deepest use), as xsdk's GCC makes no tail calls;
 *  - no exception vectors of our own (tests 11c-39's TLB counters and PC sampler): a CPU fault
 *    goes to a vectored handler that writes the fault, the registers and the stack's return
 *    addresses to ibara360.log beside the .xex, then ends the title (the console goes back to
 *    the dashboard);
 *  - the on-screen log also goes to that log file (the IO thread writes it).
 *
 * The card keeps test 39's rows where they still mean something; the USB rows became the
 * kernel's pads, the T3 / driver rows the kernel's audio driver, the T5 gap rows the IO thread,
 * the display row xsdk's presenting. */
#include <malloc.h>
#include <stdarg.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "xsdk/gpu.h"
#include "xsdk/kernel.h"
#include "xsdk/log.h"
#include "xsdk/present.h"
#include "xsdk/shader.h"
#include "xsdk/texture.h"
#include "xsdk/thread.h"
#include "xsdk/xam.h" /* test 109: xsdk_system_ui_open */

#include "ibara360_shaders.h"

#include "card.h"
#include "card_layout.h"
#include "card_loading.h" /* test 88: gen/card's NOW LOADING */
#include "card_ticker.h"  /* test 93: the PS2 port's NOW LOADING ticker */
#include "ps2data.h"      /* test 97: the PS2 disc's pictures from the user's ps2data.bin (tools/ps2extract) */
#include "ps2menu.h"      /* test 98: MENU STYLE PS2, LANGUAGE JAPANESE */
#include "ps2music.h"     /* test 99: SOUNDTRACK PS2 */
#ifdef IB_ARRANGE
#include "arrgfx_data.h" /* test 97: arrgfx_z NULL = no ps2data.bin (BULLET DESIGN NORMAL only) */
#endif
#include "clock.h"
#include "cv1k.h"
#include "expect.h"
#include "expect_blk.h"
#include "gadgets.h"
#include "hddstate.h" /* test 84 */
#include "hitbox.h"   /* test 98: TRAINING's HITBOX PLAYER / ALL */
#include "arrhud.h" /* test 79: ARRANGE's HUD (ibaraarr.xex; empty in the others) */
#include "launch.h"
#include "netlog.h"
#include "pcbx.h"
#include "prof.h"
#include "recorder.h"
#include "romload.h"
#include "settings.h"
#include "rankinit.h" /* test 101 */
#include "achieve.h"  /* test 105 */
#include "achxam.h"
void xsdk_present_redescribe(int variant); /* test 106: xsdk_present.c's (the toast's size probe) */
#include "sound.h"
#include "state.h"
#include "wgate.h"
#include "xplat.h"

/* runtime/sh3_rt.c */
void rt_init(void);

/* test 69: the PC harness replays a recording's "# load" lines (harness.c, built with -DREPLAY_LOAD=harness_load: the
 * slot to load at this emulated vblank, or -1) */
#ifdef REPLAY_LOAD
int REPLAY_LOAD(unsigned frame);
#else
#define REPLAY_LOAD(frame) (-1)
#endif
/* test 81: and its "# host <frame> <what> <value>" lines (-DREPLAY_HOST=harness_host: 1 with *what, *value for each of
 * this emulated vblank's lines, one a call, then 0) */
#ifdef REPLAY_HOST
int REPLAY_HOST(unsigned frame, int *what, int *value);
#else
#define REPLAY_HOST(frame, what, value) 0
#endif
/* test 84: and its "# hddsave <frame> <slot>" / "# hddload <frame> <slot> <crc>" lines (-DREPLAY_HDD=harness_hdd: the
 * file slot saved (what 0) or loaded (what 1) at this emulated vblank, or -1); a REPLAY_LOAD of a FULL RESTART's load
 * ("# load <frame> <slot> full") is its slot + 16 */
#ifdef REPLAY_HDD
int REPLAY_HDD(unsigned frame, int what);
#else
#define REPLAY_HDD(frame, what) (-1)
#endif
/* test 86: and its replay lines (recorder.h's RP_REC_*; -DREPLAY_RP=harness_rp): "# rpsave <frame> <num>" (SAVE
 * REPLAY?'s A at that vblank: the harness writes its own replay of that number), "# rpplay <frame> <num> <crc>" (its
 * playback of that number starts there), "# rpend <frame> <num> <why>" (a playback stopped there): the number, -1 for
 * none at this vblank (SAVE REPLAY? = B), -2 when no recording is replayed (the pads answer, as on the console); test
 * 87: "# rpdel <frame> <num>" (RP_REC_DEL: a replay deleted there; the harness deletes its own) */
#ifdef REPLAY_RP
int REPLAY_RP(unsigned frame, int what);
#else
#define REPLAY_RP(frame, what) (-2)
#endif

/* test 38: the two games in this image: gen/ibara_drc's recomp_game and gen/ibarablk_drc's
 * (sh3rec --prefix blk_) blk_recomp_game, both on the same runtime. Test 72 (user: "split the two games into
 * individual xex files"): IB_GAME = the one game of this image (0 = SET_IBARA in ibara.xex, 1 = SET_IBARABLK in
 * ibarablk.xex, CMakeLists.txt; numbers in the #if lines, where the enum's names would read 0), the other's code,
 * attract check and GADGETS art left out; undefined (the PC harness) = both. Test 73: the hand-offs in the form the
 * launcher's button chose (launch.h, the launch data's form; "game:\" when not started by the launcher). Test 74:
 * always "game:\" (test 73's A, the one tried), the network log's ending says planned / hand-off / fault. */
/* Test 77: IB_ARRANGE (with IB_GAME 0) = ibaraarr.xex, the PS2 port's ARRANGE mode: ibara's set with the arcade
 * program patched (gen/ibaraarr/arrange_patch.c from tools/arrange/mkpatch.py, applied to U4 after its CRC check)
 * and recompiled as gen/ibaraarr_drc (its recomp_game); its own EEPROM (nvram/ibaraarr), no attract check (the
 * PC run's hashes are the arcade program's), NORMAL only, no special version */
#ifdef IB_ARRANGE
#define ARR 1
#include "arrange_patch.h"
#include "zlib.h"
#else
#define ARR 0
#endif
#if (!defined(IB_GAME) || IB_GAME == 0) && defined(IB_ARRANGE)
extern const recomp_game_t recomp_game;
#define IB_CODE (&recomp_game)
#define IB_EXPECT NULL
#define IB_EXPECT_N 0
#elif !defined(IB_GAME) || IB_GAME == 0
extern const recomp_game_t recomp_game;
#define IB_CODE (&recomp_game)
#define IB_EXPECT expect
#define IB_EXPECT_N EXPECT_FRAMES
#else
#define IB_CODE NULL
#define IB_EXPECT NULL
#define IB_EXPECT_N 0
#endif
#if !defined(IB_GAME) || IB_GAME == 1
extern const recomp_game_t blk_recomp_game;
#define BLK_CODE (&blk_recomp_game)
#define BLK_EXPECT expect_blk
#define BLK_EXPECT_N EXPECT_BLK_FRAMES
#else
#define BLK_CODE NULL
#define BLK_EXPECT NULL
#define BLK_EXPECT_N 0
#endif
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
	[SET_IBARA] = {ARR ? "IBARA ARRANGE" : "IBARA", "IBARA", IB_CODE, 0x0C28674Cu,
	               ARR ? "gen/ibaraarr_drc" : "gen/ibara_drc", IB_EXPECT, IB_EXPECT_N},
	[SET_IBARABLK] = {"IBARA KURO BLACK LABEL", "IBARABLK", BLK_CODE, 0x0C2B1A54u, "gen/ibarablk_drc", BLK_EXPECT,
	                  BLK_EXPECT_N},
};
static int game_set = SET_IBARA;               /* the chosen game, from the menu on */
/* test 78: the controls' set (settings.h): the game's, ARRANGE's own in ibaraarr.xex */
#define CTL_SET (ARR ? CTL_SET_ARR : game_set)
static const struct game_info *game = &games[SET_IBARA];
static int game_chosen;                        /* game / game_set are the choice */
static volatile int menu_on, menu_sel;         /* the pad menu is up; the highlighted set */

/* Test 80 (user 2026-10-26, test 79: "sound stutter is present during heavy slowdown in arrange (when the screen is
 * filled with x300) and the X and Y button don't seem to behave as intended"): ARRANGE's HUD drawn faster (arrhud.c;
 * its time in the log's HUD lines) and the pad buttons set to SUB WEAPON CHANGE / FORMATION CHANGE / AIM LOCK with what
 * the game did logged (arr_watch); only ibaraarr.xex ships (the other titles stay test 79's).
 * Test 81 (user 2026-10-26: "add all the extras you just mentioned, plus the new notes from the todo list"): one menu
 * (PLAY first: side, mode, type, ARRANGE's BULLET DESIGN, DIP SWITCHES; the DIP rows edit the service menu's game
 * options the game's way, only in the attract; any not default turns GADGETS' SCORE red), Start left to the game from
 * a run's end until the attract demos, ARRANGE's continue, its HUD off in the service menu, its pictures from the PS2
 * port (BULLET DESIGN, the ending's 944, the ranking's "Arrange Mode"), its own score table, GADGETS' WEAPON and NEXT
 * DROP for ARRANGE; "# host" lines in the recording (rec_host / REPLAY_HOST).
 * Test 82 (user 2026-10-26, todo list.txt 22:14 after test 81's SUCCESS; "one value with arrows", ARRANGE's DIP
 * SWITCHES removed, the DIP fix): the PLAY page's rows one line each, the value between arrows, TYPE before MODE
 * (ARRANGE: PLAYER and TYPE only); ARRANGE's BULLET DESIGN on GENERAL SCREEN, no SPECIAL MODE in its debug menu;
 * ibara's controls without RAPID SHOT / BUTTON 4 (ibara reads neither); the help lines the user wrote; the attract
 * state kept again once DIP SWITCHES is left (test 81 kept it at every change: a late frame each); GADGETS: no run
 * gadgets in the attract's demos, CONTROLS' MANUAL = the highest rate since the last death.
 * Test 85 (user 2026-10-27, todo list.txt 08:11 after test 84's SUCCESS; then "also, introduce a "service menu" option
 * in debug options, remove R3 as a quick way to access it"): a LOAD STATE gives the pad that loads the file's side
 * (pad_swap; test 84 kept the run's, so a 2P run loading a 1P file left P1 on the unplugged pad), RESTART STAGE and
 * LOAD STATE keep the A that confirmed them from the game until it is released (pad_a_only; test 70 let every held
 * button through, so the A reached the game as 3-6 frames of SHOT), the debug menu's SERVICE MENU row (A, then A again:
 * the board's S3 test switch for SVC_HOLD vblanks, svc_left) in all three games, R3 / the Guide no longer S3.
 * Test 86 (user 2026-10-27: score history / input playback, "ask at the run's end", every replay kept with a DELETE,
 * the asterisk when the SCORE went red; then "rename SCORE HISTORY to REPLAYS", "if a run used a stage restart, or load
 * state, simply ignore it", "make sure the replay save prompt shows up AFTER the initials entry screen"): a run's
 * replay = its credit's slot and its ports (hddstate.c's replay files), SAVE REPLAY? once the initials and the ranking
 * are over, the menu's REPLAYS page (A plays, X deletes), the playback (B / BACK stops it, a screen hash every
 * RP_EVERY vblanks checks it).
 * Test 87 (user 2026-10-27, todo list.txt 15:00 after test 86's SUCCESS, all three games; then "limit it to 30
 * replays", the playback's pause RESUME / RESTART REPLAY / QUIT REPLAY with B ignored): the menu's row REPLAY DATA
 * ("WATCH RECORDED REPLAYS"), a RESTART STAGE of stage 1 keeps the run's replay (the credit's slot, as FULL RESTART),
 * the page's lines "* = INVALID SCORE" and "UP/DOWN = SELECT, B/BACK = MENU" (no pages), a replay ends as the CAVE logo
 * comes after the initials entry (sm_logo: not after the logos), BACK in a playback = its pause menu (rp_pause_loop),
 * at most RP_KEEP replays (a full list: SAVE REPLAY?'s A chooses one to replace), SCORE BREAKDOWN zeroed once a run is
 * over (gadgets.c).
 * Test 88 (user 2026-10-27, todo list.txt 17:25 after test 87's SUCCESS, and the picture resize of the 08:11 list; the
 * user's answers: the main menu PLAY / LOAD STATE / REPLAY DATA / OPTIONS / GAME SELECT, the pause unchanged, the
 * launcher's NOW LOADING, XTC SMALL / FULL with "W X H PX" kept, LOAD POSITION's help on the pause only, a picture above
 * full height allowed): a replay ends as the attract comes back (sm_back: the Start that skips the ranking) without
 * STATE_RUN_GAP's wait; the OPTIONS page (OPT_PAGE_OPTIONS); the user's helps (pause, SLOTS, SERVICE MENU, SCORE
 * BREAKDOWN), no SAVE REPLAY? grey line, no "SAVED AS REPLAY" on REPLAY DATA, no helps in the playback's pause, an empty
 * line on REPLAY DATA with no replays; DEBUG CARD out of the controls (the debug menu's row only); NOW LOADING while the
 * ROMs load (the card after a red line); PICTURE SIZE CUSTOM and ADJUST PICTURE (SM_ADJ: per display shape, GADGETS off
 * while CUSTOM); M3 GADGETS' XTC SMALL / FULL / OFF; Kuro BL's countdown beep at ibara's level (sound.c); gadgets.c:
 * STATUS / XTC on the run's side from its start, ARRANGE in STATUS, XTC's hitbox and FULL. */
/* Test 89 (todo list.txt 2026-10-27 20:20 and the user's answers; the training mode the test 88 proposal's answers
 * chose): the OPTIONS row's value and help; ADJUST PICTURE's options on GENERAL SCREEN / the pause's SCREEN page (SIZE,
 * X SIZE, Y SIZE, X POSITION, Y POSITION: pic_input) and SMOOTHING; the gadgets empty while the game boots, MEDALS and
 * BOSS only in a run or a demo; tate's STATUS across its band, no SCORE BREAKDOWN there (gadgets.c draw_status_w); Kuro
 * BL's CONTROLS without STICK while XTC is FULL; SFX TEST; TRAINING (the training section before host_vblank: stage
 * select, START AT BOSS with its skip, LIVES, BOMBS, BOMB GAUGE, SHOT, MEDAL, RANK, INVINCIBLE, INFINITE BOMBS, GAME
 * SPEED, HITBOX, DIP SWITCHES), a playback's LB / RB speed; the log file new each run (launch.c's xsdk_log_open wrap) */
/* Test 90 = test 89 without launch.c's xsdk_log_open wrap (test 89 FAILURE: every .xex hung black at its start; the
 * wrap's unlink was the title's first malloc, whose sbrk line went to xsdk's log before xsdk_log_open had initialized its
 * lock, and RtlEnterCriticalSection on the zeroed lock waits forever). The log is overwritten in place again, as up to
 * test 88: its date in the console's file list stays the first run's. */
/* Test 91 (todo list.txt 2026-10-28 after test 90's SUCCESS): a replay ends where a Start on GAME OVER changed the scene
 * (sm_left_at, rp_cut); GENERAL SCREEN's picture rows never dim, the user's helps, BRIGHTNESS (cfg.brightness, present()'s
 * blend constants); the training pause (pm_rows_tr: RESTART, QUIT TO TRAINING MODE), START AT BOSS's credit slot taken
 * again at the boss; the TRAINING page's values without GAME, BOMB GAUGE / RANK LOCK by 1, the user's helps, A plays only;
 * Kuro BL's PLAYER TYPE / BOMB TYPE with its ship select skipped; RESTART STAGE's help in the stage 1 intro; GAME SELECT
 * opens the write gate (wgate_force: the ini, EEPROM and recording were held past its file passes); the ini's test 88
 * picture_custom lines read again (settings.c) */
/* Test 92 (todo list.txt 2026-10-28 after test 91's SUCCESS, video D:\obs\2026-10-28 03-57-16.mp4): the TRAINING page's
 * LB / RB quick steps (tr_quick: BOMB GAUGE, MEDAL, RANK %), RANK LOCK named RANK %, GAME SPEED's LEFT / RIGHT the other
 * way, START plays from any row ("A = CONFIRM, START = PLAY"); training runs without continues (CONTINUE PLAY held at 1)
 * and their GAME OVER back to the TRAINING page (the attract's slot); START AT BOSS's skip clears the stage's last waves
 * until the boss is there (turbo_clear) and ends at the boss's first bullet too (turbo_shot); HITBOX with ibara's /
 * ARRANGE's graze box in green; a Start in the attract's first SM_IDLE vblanks kept from the game, the menu after them
 * (sm_early) */
/* Test 93 (todo list.txt 2026-10-28 after test 92's SUCCESS): a held direction repeats in the menus (menu_repeat: 0.4 s,
 * then 7 a second); the TRAINING page's green "START = PLAY" on every row; one RANK row (test 92's RANK % named RANK,
 * DEFAULT below 0%; ibara's a start value, the game's rise after it: tr_rank_free; Kuro BL's and ARRANGE's held, as the
 * user chose); RESTART STAGE's STATE help "QUICK SAVESTATE RELOAD"; the SCREEN pages' new order (OPT_SCREEN_ROWS); M3
 * GADGETS' help "ORIGINAL WORK BY BAF AND OLIFANTE" */
/* Test 96 (todo list.txt 2026-10-28 after test 95's SUCCESS, video D:\obs\2026-10-28 14-46-09.mp4): START AT BOSS's
 * skip clears Kuro BL's stage objects too (turbo_clear); the TRAINING page's OPTIONS / FORMATION rows a NONE / EDIT
 * toggle (TR_ROW_NONE; test 100: EDIT only), A opens the box on EDIT, X in a box all on / off (FORMATION: the next formation for all three
 * slots, "QUICK SWAP"), a row with none set NONE (until test 100); every game's RANK a start value, the game's own rise and falls after it (tr_rank_vblank), X on RANK holds it all the run
 * (TRR_HELD, a "*") */
#define XEX_TEST "120"  /* test 120: release candidate; test 119: EX-DEBUG closed, ACHIEVEMENTS the debug menu's last row */
#define XEX_VERSION "1.02" /* test 120: PS2-only menus and the 1.02 presentation fixes */
/* test 72: the image's game in its name (the log's first lines, the network log's session) */
#if defined(IB_GAME) && IB_GAME == 1
#define XEX_GAME " KURO BL"
#elif defined(IB_GAME) && ARR
#define XEX_GAME " ARRANGE"
#elif defined(IB_GAME)
#define XEX_GAME " IBARA"
#else
#define XEX_GAME ""
#endif
#define GAME_W 320 /* CV1000 raster, as the blitter writes it; shown ROT270 */
#define GAME_H 240
#define CARD_W 400 /* status card, shown at 2x right of the game */
#define CARD_H 360

#define HZ_WINDOW 120
#define STAT_FRAMES 60 /* timing averages and maxima over this many emulated frames */
#define CARD_EVERY 6   /* the card is redrawn and uploaded every 6th displayed frame */

#define BANDS 2
static const int band_thread[BANDS] = {2, 4}; /* one per core 1 and core 2 (test 8) */

#define GAME_THREAD 0
#define IO_THREAD 5         /* test 12's USB thread: pads, the card, the network log (test 41: no files) */
#define IO_SLEEP_MS 1       /* between IO loops (a kernel sleep: ~2 ms) */
#define FILE_THREAD 5       /* test 41: the log file, the recording, the EEPROM, the frame log */
#define FILE_SLEEP_MS 1     /* between file passes */
#define FILE_SLOW_US 100000 /* a pass this long is logged */
#define NPADS 4
#define STICK_DEAD 16384    /* half travel: the user's sticks drift (test 3) */
#define COIN_FRAMES 6       /* coin line held low this many emulated frames per press */
/* xsdk's GCC makes no sibling calls, so TAIL() / JUMPD() chains nest; built that way for 32-bit
 * PowerPC (qemu), the deepest use was 27.5 KB in 30000 frames of test 38's ibarablk play and the
 * ibara attract. The kernel's 1 MB default would do; this keeps a wide margin */
#define GAME_STACK (4u << 20)
#define GAME_STACK_MIN (1u << 20) /* tried, halving, when the kernel refuses a bigger one */
#define STACK_PAINT 0x5AC3A55Cu
#define CLEAR_BORDER 0xFF102060u /* the card's dark blue surround, 0xAARRGGBB (card.h's C_CLEAR is libxenon's order) */
#define IO_SLOW_US 12000    /* test 46: an IO loop or sleep this long is logged (max seen before 9.24 ms) */
#define IO_SLOW_LINES 40    /* at most this many of those lines */
#define LK_LONG_US 1000     /* test 46: a wait for the log lock this long is counted as long */
#define LK_SPIN_US 20       /* test 47: a contended log lock spins this long, then yields on every try ... */
#define LK_SPIN_OTHER_US 1000 /* ... or this long when the holder is on another hardware thread */
#define YIELD_US 1000       /* busy waits hand the hardware thread to the kernel this often */
#define FLIP_TIMEOUT_US 100000
#define BEGIN_TIMEOUT_MS 100
#define LAG_RESYNC_VB 2     /* test 42: a frame starting this many vblanks after its own restarts the schedule */

u8 *cv1k_ram; /* the host owns work RAM (runtime/recomp.h) */

static uint32_t raster[CARD_H][CARD_W];
static unsigned long frame; /* displayed frames */
static int video_w, video_h; /* the front buffer, for the card's title row */
/* test 48: the console's output (VdQueryVideoMode), the display shape used (1 = 16:9, 0 = 4:3:
 * the console's widescreen setting or the ini's aspect) and how wide a front-buffer pixel shows
 * over how tall (1 = square) */
static VIDEO_MODE vmode;
static int aspect_wide = 1;
static float par = 1;

/* test 33: the card once the game runs (game thread; RB toggles it, rt_fatal turns it on). It
 * is shown from the first card the IO thread hands over after it was turned on */
static int card_on = 1;
static unsigned card_on_at;
static unsigned card_handoffs; /* cards given to the GPU (test 12) */
static const char *chk_off_why = ""; /* test 33: why the attract checks are off */

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

static void fill(int x, int y, int w, int h, uint32_t c)
{
	int i, j;
	for (j = y; j < y + h; j++)
		for (i = x; i < x + w; i++)
			if ((unsigned)i < CARD_W && (unsigned)j < CARD_H)
				raster[j][i] = c;
}

/* test 46: the card render's longest step between two ticks (each text row drawn, each row
 * copied) and the tick that ended it: CG_COPY + row in the copy, else the text's card row */
#define CG_COPY 1000
static uint64_t cg_last, cg_max;
static int cg_where;

static void card_tick(int where)
{
	const uint64_t now = tb_read();

	if (now - cg_last > cg_max) {
		cg_max = now - cg_last;
		cg_where = where;
	}
	cg_last = now;
}

static void text(int x, int y, uint32_t c, const char *s)
{
	int row, col;
	card_tick(y / 8);
	for (; *s; s++, x += 6) {
		const unsigned char *g = glyph(*s);
		for (row = 0; row < 7; row++)
			for (col = 0; col < 5; col++)
				if (g[row] & (0x10 >> col))
					fill(x + col, y + row, 1, 1, c);
	}
}

/* ---- the hardware threads ---------------------------------------------------------- */

int my_thread(void)
{
	return (int)xsdk_thread_hardware_thread();
}

/* ---- timebase ------------------------------------------------------------------ */

static unsigned tb_retries;

uint64_t tb_read(void)
{
	uint32_t u, l, u2;

	for (;;) {
		__asm__ volatile("mftbu %0" : "=r"(u));
		__asm__ volatile("mftbl %0" : "=r"(l));
		__asm__ volatile("mftbu %0" : "=r"(u2));
		if (u == u2)
			return ((uint64_t)u << 32) | l;
		tb_retries++;
	}
}

unsigned tb_us(uint64_t a, uint64_t b)
{
	return (unsigned)((b - a) * 1000000 / PPC_TIMEBASE_FREQ);
}

static const uint64_t yield_ticks = (uint64_t)PPC_TIMEBASE_FREQ * YIELD_US / 1000000;

/* xplat.h: spin at low SMT priority, NtYieldExecution every YIELD_US (a ready kernel thread on
 * this hardware thread runs then, whatever its priority) */
void spin_yield_until(int (*cond)(void *), void *arg, unsigned timeout_us)
{
	const uint64_t t0 = tb_read(), limit = (uint64_t)PPC_TIMEBASE_FREQ * timeout_us / 1000000;
	uint64_t last = t0;

	smt_low();
	while (!cond(arg)) {
		const uint64_t now = tb_read();
		if (timeout_us && now - t0 >= limit)
			break;
		if (now - last >= yield_ticks) {
			NtYieldExecution();
			smt_low();
			last = tb_read();
		}
	}
	smt_medium();
}

/* ---- on-screen log (any hardware thread) -------------------------------------- */

#define LOG_COLS 65      /* characters per screen line */
#define LOG_LINES 1024   /* ring of wrapped screen lines */
#define LOG_SHOWN 3      /* lines on screen */
#define LOG_STEP 4       /* frames per scrolled line when behind (15 lines/s) */

struct log_line {
	char s[LOG_COLS + 1];
	uint32_t color;
	uint8_t cont;        /* xsdk port: a wrapped line's continuation (the log file joins them) */
};

static struct log_line log_ring[LOG_LINES];
static unsigned long log_total;   /* screen lines ever added */
static unsigned long log_view;    /* screen lines scrolled into view */
static unsigned long log_lost;    /* lines overwritten before they were shown */
static unsigned long log_filed;   /* xsdk port: lines the IO thread wrote to the log file */
static unsigned long log_file_lost;
static unsigned long log_step_frame;
static volatile int log_busy;

/* test 46: who takes log_busy and how long the contended takes waited */
enum { LK_ADD, LK_FLUSH, LK_CARD, LK_SITES };
static const char *const lk_name[LK_SITES] = {"LOG LINE", "LOG FILE", "CARD"};
static volatile int lk_holder = -1;               /* the site holding it (-1 none) */
static volatile unsigned lk_holder_hw;            /* its hardware thread */
static volatile unsigned lk_waits, lk_long, lk_max_us; /* contended takes, those over LK_LONG_US, the longest */
static volatile unsigned lk_wait_us[LK_SITES];    /* each site's last contended wait */
static volatile int lk_wait_holder[LK_SITES];     /* the site that held it then */
static volatile unsigned lk_wait_holder_hw[LK_SITES];
static volatile unsigned lk_yields;               /* test 47: NtYieldExecution calls while waiting */
/* test 47: the last wait over LK_LONG_US (n = lk_long then), for the IO thread's "LOG LOCK:" line */
static volatile struct {
	unsigned n, us, yields, frame, hw, holder_hw;
	int site, holder;
} lk_last;

static const uint64_t lk_spin_ticks = (uint64_t)PPC_TIMEBASE_FREQ * LK_SPIN_US / 1000000;
static const uint64_t lk_spin_other_ticks = (uint64_t)PPC_TIMEBASE_FREQ * LK_SPIN_OTHER_US / 1000000;

/* Test 47: the holders only copy a few lines, so a wait past LK_SPIN_US means the holder was
 * switched out; one on this hardware thread only runs again when this one stops spinning (test
 * 46: the file thread spun ~10 ms, a whole time slice, on the card's hold). So the wait spins at
 * low SMT priority, then hands the hardware thread to the kernel on every try: after LK_SPIN_US
 * when the holder is on this hardware thread, after LK_SPIN_OTHER_US otherwise (the game thread
 * on T0 waiting for a T5 holder keeps T0 unless the wait is already long; the holder's hardware
 * thread is read on every try, as it is written just after the lock is taken). */
static void log_lock(int site)
{
	if (__sync_lock_test_and_set(&log_busy, 1)) {
		const int holder = lk_holder;
		const unsigned holder_hw = lk_holder_hw, me = (unsigned)my_thread();
		const uint64_t t0 = tb_read();
		unsigned us, yields = 0;

		smt_low();
		while (__sync_lock_test_and_set(&log_busy, 1)) {
			const uint64_t waited = tb_read() - t0;
			if (waited >= lk_spin_other_ticks || (waited >= lk_spin_ticks && lk_holder_hw == me)) {
				NtYieldExecution();
				smt_low();
				yields++;
			} else {
				smt_pause();
			}
		}
		smt_medium();
		us = tb_us(t0, tb_read());
		lk_waits++;
		lk_yields += yields;
		if (us >= LK_LONG_US) {
			lk_long++;
			lk_last.us = us;
			lk_last.yields = yields;
			lk_last.frame = (unsigned)frame_count;
			lk_last.hw = me;
			lk_last.holder_hw = holder_hw;
			lk_last.site = site;
			lk_last.holder = holder;
			__sync_synchronize(); /* the fields before the count that announces them */
			lk_last.n = lk_long;
		}
		if (us > lk_max_us)
			lk_max_us = us;
		lk_wait_holder[site] = holder;
		lk_wait_holder_hw[site] = holder_hw;
		lk_wait_us[site] = us;
	}
	lk_holder = site;
	lk_holder_hw = (unsigned)my_thread();
}

static void log_unlock(void)
{
	lk_holder = -1;
	__sync_lock_release(&log_busy);
}

/* Add one logical line, wrapped, with the display frame number in front. */
static volatile unsigned log_reds; /* test 88: red lines so far (a failure while loading shows the card) */

static void log_add(uint32_t color, const char *s)
{
	char pre[16];
	int first = 1;
	size_t n = strlen(s);

	if (color == C_RED)
		log_reds++;

	snprintf(pre, sizeof(pre), "%6lu ", frame % 1000000);
	log_lock(LK_ADD);
	do {
		struct log_line *l = &log_ring[log_total % LOG_LINES];
		size_t room = LOG_COLS - 7, take = n < room ? n : room;

		if (log_total - log_view >= LOG_LINES) { /* oldest unseen line gets overwritten */
			log_view++;
			log_lost++;
		}
		if (log_total - log_filed >= LOG_LINES) { /* the same for the log file */
			log_filed++;
			log_file_lost++;
		}
		memcpy(l->s, first ? pre : "     + ", 7);
		memcpy(l->s + 7, s, take);
		l->s[7 + take] = 0;
		l->color = color;
		l->cont = (uint8_t)!first;
		log_total++;
		s += take;
		n -= take;
		first = 0;
	} while (n);
	log_unlock();
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

/* ---- the log file, also over the network (test 40) ---------------------------------- */

/* Every line the log file gets, xsdk's own included, goes to the network log too: the link
 * wraps xsdk_log_write and xsdk_log_write_bytes (CMakeLists.txt, -Wl,--wrap), so every call from
 * any object but xsdk's log.c (its own "log: ..." lines as it opens the file) comes here first.
 * One critical section around the file's write and the network log's copy keeps the two in the
 * same order whichever threads log. Lines before the file is open (xsdk's start-up) reach
 * neither, unless the file never opens: from main() on they then go to the network alone. */
void __real_xsdk_log_write(const char *format, ...) __attribute__((format(printf, 1, 2)));
void __real_xsdk_log_write_bytes(const char *bytes, size_t length_bytes);
static RTL_CRITICAL_SECTION log_cs;
static volatile int log_cs_ready, log_named, main_started;

static int log_enter(void)
{
	if (!log_cs_ready) { /* the first line comes before the title's threads exist */
		RtlInitializeCriticalSection(&log_cs);
		log_cs_ready = 1;
	}
	RtlEnterCriticalSection(&log_cs);
	if (!log_named && (xsdk_log_path() || main_started)) {
		const char *p = xsdk_log_path(), *b = p;
		for (; p && *p; p++)
			if (*p == '\\' || *p == '/' || *p == ':')
				b = p + 1;
		netlog_name(NL_LOG, b && *b ? b : "ibara360.log");
		log_named = 1;
	}
	return log_named;
}

void __wrap_xsdk_log_write(const char *fmt, ...)
{
	char buf[512];
	va_list ap;
	size_t n;

	/* as xsdk_log_write: at most 510 characters, then the '\n' it adds */
	va_start(ap, fmt);
	vsnprintf(buf, sizeof(buf) - 1, fmt, ap);
	va_end(ap);
	n = strlen(buf);
	if (log_enter()) {
		buf[n] = '\n';
		netlog_put(NL_LOG, buf, (unsigned)n + 1);
		buf[n] = 0;
	}
	__real_xsdk_log_write("%s", buf);
	RtlLeaveCriticalSection(&log_cs);
}

void __wrap_xsdk_log_write_bytes(const char *bytes, size_t length_bytes)
{
	if (log_enter())
		netlog_put(NL_LOG, bytes, (unsigned)length_bytes);
	__real_xsdk_log_write_bytes(bytes, length_bytes);
	RtlLeaveCriticalSection(&log_cs);
}

/* xsdk port: the log's new lines to ibara360.log (xsdk_log_write, ~0.3 ms a line), on the IO
 * thread (test 41: the file thread); a wrapped line goes out whole. Returns the lines written */
static int log_flush(void)
{
	char line[512];
	size_t k = 0;
	int n = 0;

	for (;;) {
		struct log_line l;
		int more;
		log_lock(LK_FLUSH);
		more = log_filed < log_total;
		if (more)
			l = log_ring[log_filed++ % LOG_LINES];
		log_unlock();
		if (!more)
			break;
		if (l.cont && k) {
			size_t n = strlen(l.s + 7);
			if (k + n < sizeof(line)) {
				memcpy(line + k, l.s + 7, n + 1);
				k += n;
			}
			continue;
		}
		if (k) {
			xsdk_log_write("%s", line);
			n++;
		}
		snprintf(line, sizeof(line), "%s", l.s);
		k = strlen(line);
	}
	if (k) {
		xsdk_log_write("%s", line);
		n++;
	}
	return n;
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

/* ---- CPU faults (xsdk port) -------------------------------------------------------- */

/* RtlSetVectoredExceptionHandler, found by ordinal as xsdk's tests/probe_fault.c finds it: the
 * kernel calls the handler on the faulting thread with r3 = { exception record, context }
 * (record: code, flags, nested, address, parameter count, parameters; context: IAR at 0x08, LR
 * at 0x0C, r0-r31 as 64-bit words from 0x18, CR at 0x118: xsdk docs/HARDWARE.md, "How the kernel
 * hands a title its faults"). It logs the fault and ends the title. */
enum { ORDINAL_SET_HANDLER = 0x36D, PCR_STACK_BASE = 0x70, PCR_STACK_END = 0x74, FAULT_SEND_MS = 200 };
typedef uint32_t (*SetHandler)(uint32_t first, uint32_t handler);
static volatile uint32_t in_fault;
static const char *fault_reason;

static uint32_t pcr_word(unsigned off)
{
	uint32_t r13;
	__asm__ volatile("mr %0, 13" : "=r"(r13));
	return *(volatile uint32_t *)(uintptr_t)(r13 + off);
}

static int32_t fault_handler(uint32_t first, uint32_t second, uint32_t third, uint32_t fourth)
{
	const uint32_t *ptrs = (const uint32_t *)(uintptr_t)first;
	const uint32_t *rec, *ctx;
	uint32_t base = pcr_word(PCR_STACK_BASE), end = pcr_word(PCR_STACK_END), lo, hi, fp, k;

	(void)second;
	(void)third;
	(void)fourth;
	if (__atomic_exchange_n(&in_fault, 1, __ATOMIC_ACQUIRE))
		return 0; /* a fault inside the handler passes on */
	rec = (const uint32_t *)(uintptr_t)ptrs[0];
	ctx = (const uint32_t *)(uintptr_t)ptrs[1];
	xsdk_log_write("FAULT: code %08X at %08X, %u parameters %08X %08X, hardware thread %d", (unsigned)rec[0],
	               (unsigned)rec[3], (unsigned)rec[4], (unsigned)rec[5], (unsigned)rec[6], my_thread());
	xsdk_log_write("FAULT: IAR %08X LR %08X R1 %08X R3 %08X R4 %08X R5 %08X R31 %08X CR %08X", (unsigned)ctx[2],
	               (unsigned)ctx[3], (unsigned)ctx[6 + 2 * 1 + 1], (unsigned)ctx[6 + 2 * 3 + 1],
	               (unsigned)ctx[6 + 2 * 4 + 1], (unsigned)ctx[6 + 2 * 5 + 1], (unsigned)ctx[6 + 2 * 31 + 1],
	               (unsigned)ctx[0x118 / 4]);
	xsdk_log_write("FAULT: emulated frame %u, SH-3 PC %08X PR %08X, displayed frame %lu, %s", (unsigned)frame_count,
	               (unsigned)cpu.pc, (unsigned)cpu.pr, frame, fault_reason ? fault_reason : "");
	/* the stack's back chain: each caller's frame holds its return address 4 bytes in */
	lo = base < end ? base : end;
	hi = base < end ? end : base;
	fp = ctx[6 + 2 * 1 + 1];
	for (k = 0; k < 16 && fp >= lo && fp + 8 <= hi; k++) {
		const uint32_t next = *(const volatile uint32_t *)(uintptr_t)fp;
		if (next < lo || next + 8 > hi || next <= fp)
			break;
		xsdk_log_write("FAULT: frame %u at %08X returns to %08X", (unsigned)k, (unsigned)fp,
		               (unsigned)*(const volatile uint32_t *)(uintptr_t)(next + 4));
		fp = next;
	}
	achx_xam_cache_restore(); /* test 110: the kernel's record as it was (no-op unless LB patched it) */
	xsdk_log_write("FAULT: ending the title (the console goes back to the dashboard)");
	if (netlog_ending(NETLOG_END_FAULT)) /* test 40: the lines the PC has not had, then time for them to leave */
		xsdk_thread_sleep(FAULT_SEND_MS);
	XamLoaderTerminateTitle();
	return 0;
}

static void fault_init(void)
{
	HANDLE kernel = 0;
	SetHandler set = NULL;

	if (XexGetModuleHandle("xboxkrnl.exe", &kernel) != 0 ||
	    XexGetProcedureAddress(kernel, ORDINAL_SET_HANDLER, (void **)&set) < 0 || !set) {
		log_printf(C_YELLOW, "FAULTS: NO RTLSETVECTOREDEXCEPTIONHANDLER, A FAULT ENDS THE TITLE UNLOGGED");
		return;
	}
	set((uint32_t)(uintptr_t)fault_handler, (uint32_t)(uintptr_t)fault_handler);
	/* test 89: the log file's own name (test 88's line named the launcher's) */
	log_printf(C_WHITE, "FAULTS: HANDLER SET (A FAULT IS LOGGED IN %s, THEN THE TITLE ENDS)",
	           xsdk_log_path() ? xsdk_log_path() : "NO LOG FILE");
}

/* ---- the console's address (test 40) ------------------------------------------------ */

/* XNetGetTitleXnAddr, XAM's ordinal 0x49, found as xsdk's tests/probe_net.c finds it: XNADDR
 * (xenia xam_net.cc:51-58), the address first, as the network orders it. Status 0 = pending
 * (XNET_GET_XNADDR_PENDING); on the console it answered at once with the dashboard's lease. */
enum { ORDINAL_TITLE_ADDRESS = 0x49 };
struct title_xnaddr {
	uint32_t address, online_address;
	uint16_t online_port;
	uint8_t ethernet[6], online[20];
};

int console_address(uint8_t ip[4])
{
	static uint32_t (*title_address)(uint32_t caller, struct title_xnaddr *a);
	static int looked;
	struct title_xnaddr a;

	if (!looked) {
		HANDLE xam = 0;
		looked = 1;
		if (XexGetModuleHandle("xam.xex", &xam) != 0 ||
		    XexGetProcedureAddress(xam, ORDINAL_TITLE_ADDRESS, (void **)&title_address) < 0)
			title_address = NULL;
		if (!title_address)
			log_printf(C_YELLOW, "NET: NO XNETGETTITLEXNADDR, THE CONSOLE'S ADDRESS IS NOT SHOWN");
	}
	if (!title_address)
		return 0;
	memset(&a, 0, sizeof(a));
	if (title_address(XNCALLER_TITLE, &a) == 0 || !a.address)
		return 0;
	memcpy(ip, &a.address, 4);
	return 1;
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

/* test 17b: the RAM hash only while LB has it on */
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

/* test 13: pcb model and game slowdown, sums over the STAT_FRAMES window */
struct pcb_win {
	uint64_t pen, acc, miss, ifs, stall;
	unsigned n;
};
static struct pcb_win pcur, pshown;
static unsigned logic_frames, logic_drops, logic_drops_win, logic_drops_shown;

/* test 12: late frames by cause */
enum { LC_CPU, LC_BAND, LC_HOST, LC_OTHER, LC_HASH, LC_N };
static const char *const lc_name[LC_N] = {"CPU", "BAND", "HOST", "OTHER", "HASH"};
static unsigned late_cause[LC_N];
#define BOOT_FRAMES 1200   /* boot and NOW LOADING (ends ~1100): late frames only counted */
#define LOGIC_WORD (game->logic_word) /* the game's logic-frame counter (upper 16 bits; test 38) */
static unsigned late_boot;
static unsigned card_skipped; /* card requests while the last one was still busy */

struct disp {
	unsigned hz_milli;               /* the display's refresh, from xsdk's vblank count (test 42) */
	unsigned missed, vbl_timeouts;   /* missed: extra vblanks between two frame starts */
	unsigned begin_fails;            /* xsdk_present_begin timeouts (the GPU hung) */
	uint64_t period;                 /* the last frame's start to start time */
	uint64_t present, vwait;         /* the last present(): up to its vblank wait, in it */
	uint64_t vbl;                    /* the display's vblank period (ticks), measured */
	/* test 42 */
	unsigned skip_catch, skip_step;  /* frames not shown: catching up, getting back in step */
	unsigned shown_late;             /* after loading: frames xsdk flipped after their vblank */
	unsigned lag_frames, resyncs;    /* after loading: frames started over vbl / 4 late; schedule restarts */
	uint64_t lag, lag_max;           /* the next frame's start after its vblank; the largest after loading */
};
static struct disp disp;

/* ms with two decimals from ticks */
static void ms2(char *b, size_t n, uint64_t ticks)
{
	unsigned us = (unsigned)(ticks * 1000000 / PPC_TIMEBASE_FREQ);
	snprintf(b, n, "%u.%02u", us / 1000, us / 10 % 100);
}

static int game_running;

/* ---- pads: the kernel's, on the IO thread ------------------------------------------ */

/* arcade-side bits of pad_word (1 = pressed) */
enum {
	A_UP = 0x01, A_DOWN = 0x02, A_LEFT = 0x04, A_RIGHT = 0x08,
	A_B1 = 0x10, A_B2 = 0x20, A_B3 = 0x40, A_B4 = 0x80,
	A_START = 0x100, A_COIN = 0x200, A_TEST = 0x400, /* test 85: A_TEST unused (no pad button is S3, svc_left) */
	A_CARD = 0x800,   /* test 33: RB shows / hides the card */
	A_HASH = 0x1000,  /* test 17b: LB switches the check's RAM hash (not a board input) */
	A_AUTO = 0x2000,  /* test 48: RT = button 1 at 30 Hz (inputs_update) */
	A_MA = 0x4000, A_MB = 0x8000, /* test 55: the pad's own A and B, for the menus (whatever the controls) */
	A_LOCK = 0x10000, /* test 78: ARRANGE's aim lock = PCDR bit 6 (P1) / 7 (P2) low, bits the arcade game never reads */
	A_MX = 0x20000,   /* test 86: the pad's own X, for the menus (the REPLAYS page's DELETE) */
	A_MLT = 0x40000, A_MRT = 0x80000, /* test 88: the pad's own LT and RT, for the menus (ADJUST PICTURE's size) */
	A_MLB = 0x100000, A_MRB = 0x200000, /* test 89: the pad's own LB and RB (a playback's speed, speed_frame) */
	A_ON = 0x80000000u /* a pad is connected in this slot */
};
#define AF_TRIGGER 30 /* test 48: RT counts as held above this (XInput's trigger threshold) */
#define AF_STALL 6    /* test 48: vblanks without a logic frame before autofire flips anyway */

/* test 55: the bits each mapped pad button (CTL_*) gives, from the game's controls (controls_apply,
 * game thread; read by the IO thread); before that test 54's fixed ones. Test 71: per pad (P1 CONTROLS = pad 0, P2
 * CONTROLS = pad 1 and the others) */
static const uint32_t fn_bits[FN_N] = {0, A_B1, A_B2, A_B3, A_B4, A_AUTO, A_CARD, A_LOCK};
static volatile uint32_t ctl_bits[CTL_PADS][CTL_N] = {[0 ... CTL_PADS - 1] = {A_B1, A_B2, A_B3, A_B4, 0, A_CARD, 0, A_AUTO}};
static volatile int lb_hash[CTL_PADS] = {1, 1}; /* LB is OFF: it still switches the check's RAM hash (test 17b) */

/* written only by the IO thread, one aligned word per pad (read whole by the game) */
static volatile uint32_t pad_word[NPADS];
/* test 80: the pad's own buttons (INPUT_GAMEPAD_*, the triggers past AF_TRIGGER as RAW_LT / RAW_RT), for arr_watch */
#define RAW_LT 0x10000u
#define RAW_RT 0x20000u
static volatile uint32_t pad_raw[NPADS];
static volatile unsigned pad_attaches[NPADS], pad_detaches[NPADS], pad_reports[NPADS];
static volatile uint32_t pad_last_result[NPADS];
static volatile unsigned io_loops, io_late, io_max_us, io_writes_on;
static volatile int io_alive;
/* test 41: the file thread's (written by it, read by the card) */
static volatile unsigned file_writes;       /* recorder / EEPROM / frame log writes begun (wgate_io) */
static volatile unsigned file_max_us, file_slow, file_slow_us, file_slow_idle_s, file_slow_pads;
static volatile int file_alive;
static uint32_t pad_packet[NPADS]; /* IO thread only */
static int pad_connected[NPADS];

static uint32_t map_pad(int p, const INPUT_GAMEPAD *g)
{
	const unsigned b = g->buttons;
	const int c = p ? 1 : 0; /* test 71: the pad's controls */
	uint32_t w = 0;

	if ((b & INPUT_GAMEPAD_DPAD_UP) || g->thumb_ly > STICK_DEAD)
		w |= A_UP;
	if ((b & INPUT_GAMEPAD_DPAD_DOWN) || g->thumb_ly < -STICK_DEAD)
		w |= A_DOWN;
	if ((b & INPUT_GAMEPAD_DPAD_LEFT) || g->thumb_lx < -STICK_DEAD)
		w |= A_LEFT;
	if ((b & INPUT_GAMEPAD_DPAD_RIGHT) || g->thumb_lx > STICK_DEAD)
		w |= A_RIGHT;
	if (b & INPUT_GAMEPAD_A)
		w |= ctl_bits[c][CTL_A] | A_MA;
	if (b & INPUT_GAMEPAD_B)
		w |= ctl_bits[c][CTL_B] | A_MB;
	if (b & INPUT_GAMEPAD_X)
		w |= ctl_bits[c][CTL_X] | A_MX;
	if (b & INPUT_GAMEPAD_Y)
		w |= ctl_bits[c][CTL_Y];
	if (b & INPUT_GAMEPAD_START)
		w |= A_START;
	if (b & INPUT_GAMEPAD_BACK)
		w |= A_COIN;
	/* test 85 (user: "remove R3 as a quick way to access it"): no pad button is the S3 test switch (test 48's R3 and
	 * the Guide); the debug menu's SERVICE MENU row presses it (svc_left) */
	if (b & INPUT_GAMEPAD_LEFT_SHOULDER)
		w |= ctl_bits[c][CTL_LB] | (lb_hash[c] ? A_HASH : 0) | A_MLB;
	if (b & INPUT_GAMEPAD_RIGHT_SHOULDER)
		w |= ctl_bits[c][CTL_RB] | A_MRB;
	if (g->left_trigger > AF_TRIGGER)
		w |= ctl_bits[c][CTL_LT] | A_MLT;
	if (g->right_trigger > AF_TRIGGER)
		w |= ctl_bits[c][CTL_RT] | A_MRT;
	return w;
}

/* test 85: the bits pad p's A gives (its controls' and the menus' A_MA) that none of the other buttons it holds gives
 * (pad_raw through map_pad without the A and the stick): what a restart keeps from the game until A is released */
static uint32_t pad_a_only(int p)
{
	const uint32_t r = pad_raw[p];
	INPUT_GAMEPAD g;

	memset(&g, 0, sizeof(g));
	g.buttons = (uint16_t)(r & ~(uint32_t)INPUT_GAMEPAD_A);
	g.left_trigger = r & RAW_LT ? 255 : 0;
	g.right_trigger = r & RAW_RT ? 255 : 0;
	return (ctl_bits[p ? 1 : 0][CTL_A] | A_MA) & ~map_pad(p, &g);
}

/* XamInputGetState for the four slots: ERROR_SUCCESS = connected (the state is the latest the
 * kernel has), ERROR_DEVICE_NOT_CONNECTED = none */
static void pads_update(void)
{
	int p;

	for (p = 0; p < NPADS; p++) {
		INPUT_STATE s;
		uint32_t r;

		memset(&s, 0, sizeof(s));
		r = XamInputGetState((uint32_t)p, 0, &s);
		pad_last_result[p] = r;
		if (r == ERROR_SUCCESS) {
			if (!pad_connected[p]) {
				pad_connected[p] = 1;
				pad_attaches[p]++;
				log_printf(C_YELLOW, "PAD %d CONNECTED", p);
			}
			if (s.packet_number != pad_packet[p]) {
				pad_packet[p] = s.packet_number;
				pad_reports[p]++;
			}
			pad_word[p] = map_pad(p, &s.gamepad) | A_ON;
			pad_raw[p] = s.gamepad.buttons | (s.gamepad.left_trigger > AF_TRIGGER ? RAW_LT : 0) |
			             (s.gamepad.right_trigger > AF_TRIGGER ? RAW_RT : 0);
		} else {
			if (pad_connected[p]) {
				pad_connected[p] = 0;
				pad_detaches[p]++;
				log_printf(C_YELLOW, "PAD %d DISCONNECTED (%08X)", p, (unsigned)r);
			}
			pad_word[p] = 0;
			pad_raw[p] = 0;
		}
	}
}

/* wgate.c: around every file write (test 19's pad reads inside writes are the kernel's now) */
void pad_io_mark(int on)
{
	io_writes_on = (unsigned)on;
	if (on)
		file_writes++;
}

/* ---- the card, drawn on the IO thread (test 12) ------------------------------------ */

/* The game thread asks for one every CARD_EVERY frames (card_req); the IO thread draws it into
 * the hidden one of two card textures (card_target) and sets card_done; the game thread then
 * drops the GPU's cached copy (xsdk_gpu_invalidate, a drawing-thread call) and shows it. A card
 * texture is never written while a frame that samples it is queued: test 42 no longer waits for
 * each frame's flip, so a request waits until the frames that sampled its texture have been shown
 * (ctex_used, card_frame). */
static volatile unsigned card_req, card_done, card_target;
static unsigned card_given;
static XsdkTexture ctex[2];
/* test 88 (user's todo list: "do not show the debug card anymore when a rom is initially loading"; then "the now
 * loading from the launcher"): the launcher's NOW LOADING (gen/card/card_loading.h, tools/card/mkloading.py) at twice
 * its size on black while the ROMs load; the card again once a red line comes (a failure, its lines) */
static XsdkTexture ltex;
static int ltex_ok;
static int card_front;            /* the texture the GPU draws */
static uint32_t ctex_used[2];     /* test 42: frames_queued after the last frame that sampled it */
static int card_due;              /* test 42: a request is due (every CARD_EVERY frames) */
static volatile unsigned card_us, card_us_max;

static void draw_card(void);

/* the raster into a card texture's rows (write-combined memory: xsdk's memcpy keeps to word
 * stores) */
static void card_copy(XsdkTexture *t)
{
	int y;

	for (y = 0; y < CARD_H; y++) {
		memcpy((void *)(t->texels + (size_t)y * t->pitch), raster[y], CARD_W * 4);
		card_tick(CG_COPY + y);
	}
}

/* test 46: the last render's parts (us) */
static volatile unsigned card_draw_us, card_copy_us;

static void card_render(void)
{
	const uint64_t t0 = tb_read();
	uint64_t t1;
	unsigned us;

	cg_last = t0;
	cg_max = 0;
	cg_where = -1;
	draw_card();
	t1 = tb_read();
	card_copy(&ctex[card_target]);
	us = tb_us(t0, tb_read());
	card_draw_us = tb_us(t0, t1);
	card_copy_us = us - card_draw_us;
	card_us = us;
	if (us > card_us_max)
		card_us_max = us;
}

/* ---- the game's stack (xsdk port) -------------------------------------------------- */

static volatile uint32_t *stack_lo;   /* the painted part: [stack_lo, stack_top) */
static volatile uint32_t *stack_top;
static volatile unsigned stack_used_kb, stack_kb;
static unsigned game_stack_bytes;     /* what the game thread was created with */

/* the deepest painted word touched, from the bottom up (every 64th word: frames write their back
 * chain and saved registers, so a frame's 256 bytes always hold a written word) */
static void stack_check(void)
{
	volatile uint32_t *p = stack_lo;

	if (!p)
		return;
	while (p < stack_top && *p == STACK_PAINT)
		p += 64;
	stack_used_kb = (unsigned)(((uintptr_t)stack_top - (uintptr_t)p) / 1024 + 64);
}

/* ---- the IO thread ----------------------------------------------------------------- */

static int io_files; /* test 41: no file thread, so the IO thread does the file work as in test 40 */

/* test 46: the part of files_service running (FS_SLEEP between passes) and the file thread's
 * current or last pass, as the timebase's low words (they wrap after 86 s) */
enum { FS_SLEEP, FS_REC, FS_EEP, FS_PROF, FS_LOG, FS_N };
static const char *const fs_name[FS_N] = {"SLEEPING", "RECORDING", "EEPROM", "FRAME LOG", "LOG FILE"};
static volatile int file_state;
static volatile int file_in_pass;
static volatile unsigned file_passes; /* test 72: passes finished (game_select_quit waits for two) */
static volatile uint32_t file_pass_t0, file_pass_t1;

/* test 41: the recorder's, the EEPROM's and the frame log's file work, the log file (test 40's IO
 * loop's file calls, in its order) */
static int files_service(void)
{
	int lines;

	file_state = FS_REC;
	rec_service();          /* test 14: the recording's file work */
	file_state = FS_EEP;
	eeprom_service();       /* test 33: the EEPROM save */
	settings_service();     /* test 53: an ini save the options page asked for */
	file_state = FS_PROF;
	prof_service();         /* test 14b: the frame log */
	file_state = FS_LOG;
	lines = log_flush();
	file_state = FS_SLEEP;
	return lines;
}

static volatile unsigned io_slow_lines, io_sleep_max_us; /* test 46 */

/* ms with two decimals from us */
static void ms2us(char *b, size_t n, unsigned us)
{
	snprintf(b, n, "%u.%02u", us / 1000, us / 10 % 100);
}

/* test 46: the file thread's pass, as seen from the IO thread now */
static void file_pass_text(char *b, size_t n)
{
	const uint32_t now = (uint32_t)tb_read(), p0 = file_pass_t0, p1 = file_pass_t1;
	char x[16], y[16];

	if (!file_alive) {
		snprintf(b, n, "NO FILE THREAD");
	} else if (file_in_pass) {
		ms2(x, sizeof(x), (uint32_t)(now - p0));
		snprintf(b, n, "FILE PASS RUNNING %s MS (%s)", x, fs_name[file_state % FS_N]);
	} else {
		ms2(x, sizeof(x), (uint32_t)(p1 - p0));
		ms2(y, sizeof(y), (uint32_t)(now - p1));
		snprintf(b, n, "LAST FILE PASS %s MS, ENDED %s MS AGO", x, y);
	}
}

/* test 46: one line for an IO loop over IO_SLOW_US: its parts, the card render's longest step and
 * where it ended, the card's wait for the log lock and who held it, the file thread's pass */
static void io_slow_loop(uint64_t t0, uint64_t t1, uint64_t t2, uint64_t t3, uint64_t t4, int carded)
{
	char a[16], b[16], c[16], d[16], e[16], f[16], g[16], lk[64], fp[64], at[24];

	if (io_slow_lines++ >= IO_SLOW_LINES)
		return;
	ms2(a, sizeof(a), t4 - t0);
	ms2(b, sizeof(b), t1 - t0);
	ms2us(c, sizeof(c), carded ? card_draw_us : 0);
	ms2us(d, sizeof(d), carded ? card_copy_us : 0);
	ms2(e, sizeof(e), t3 - t2);
	ms2(f, sizeof(f), t4 - t3);
	ms2(g, sizeof(g), carded ? cg_max : 0);
	if (!carded)
		snprintf(at, sizeof(at), "(NO CARD)");
	else if (cg_where >= CG_COPY)
		snprintf(at, sizeof(at), "AT COPY ROW %d", cg_where - CG_COPY);
	else
		snprintf(at, sizeof(at), "AT CARD ROW %d", cg_where);
	if (lk_wait_us[LK_CARD]) {
		char w[16];
		const int h = lk_wait_holder[LK_CARD];
		ms2us(w, sizeof(w), lk_wait_us[LK_CARD]);
		snprintf(lk, sizeof(lk), "LOG LOCK WAIT %s MS, HELD BY %s ON T%u", w,
		         h >= 0 && h < LK_SITES ? lk_name[h] : "?", lk_wait_holder_hw[LK_CARD]);
	} else {
		snprintf(lk, sizeof(lk), "NO LOG LOCK WAIT");
	}
	file_pass_text(fp, sizeof(fp));
	log_printf(C_YELLOW, "IO: LOOP %s MS AT EMU %u: PADS %s DRAW %s COPY %s NET %s STACK %s; LONGEST STEP %s MS %s; %s; %s",
	           a, (unsigned)frame_count, b, c, d, e, f, g, at, lk, fp);
}

/* pads, the card when asked, the network log (test 40); then a kernel sleep (~2 ms), which also
 * leaves the hardware thread to the kernel. Test 41: no file work here (the file thread's).
 * Test 46: the loop's parts timed and the sleep after it, a slow one logged */
/* test 47: one line for a log-lock wait over LK_LONG_US (the waiter wrote lk_last) */
static void lk_long_line(void)
{
	char a[16];
	const int s = lk_last.site, h = lk_last.holder;

	if (io_slow_lines++ >= IO_SLOW_LINES)
		return;
	ms2us(a, sizeof(a), lk_last.us);
	log_printf(C_YELLOW, "LOG LOCK: %s ON T%u WAITED %s MS AT EMU %u FOR %s ON T%u, YIELDED %u TIMES",
	           s >= 0 && s < LK_SITES ? lk_name[s] : "?", lk_last.hw, a, lk_last.frame,
	           h >= 0 && h < LK_SITES ? lk_name[h] : "?", lk_last.holder_hw, lk_last.yields);
}

static uint32_t io_task(void *u)
{
	unsigned card_seen = card_req, lk_seen = 0;
	uint64_t last_stack = 0;

	(void)u;
	io_alive = 1;
	for (;;) {
		const uint64_t t0 = tb_read();
		uint64_t t1, t2, t3, t4, ts;
		unsigned us, slept;
		int carded = 0;

		lk_wait_us[LK_CARD] = 0;
		pads_update();
		io_loops++;
		t1 = tb_read();
		if (card_req != card_seen) {
			card_seen = card_req;
			__sync_synchronize();   /* card_target before the request */
			card_render();
			__sync_synchronize();   /* the texture before done */
			card_done = card_seen;
			carded = 1;
		}
		t2 = tb_read();
		if (io_files)
			files_service();
		netlog_service();       /* test 40: the PC's POLLs and their answers */
		t3 = tb_read();
		if (tb_us(last_stack, tb_read()) >= 1000000) {
			last_stack = tb_read();
			stack_check();
		}
		t4 = tb_read();
		us = tb_us(t0, t4);
		if (us > io_max_us)
			io_max_us = us;
		if (us > 16000)
			io_late++;
		if (us >= IO_SLOW_US)
			io_slow_loop(t0, t1, t2, t3, t4, carded);
		if (lk_last.n != lk_seen) {
			lk_seen = lk_last.n;
			__sync_synchronize(); /* the count before the fields it announces */
			lk_long_line();
		}
		ts = tb_read();
		xsdk_thread_sleep(IO_SLEEP_MS);
		slept = tb_us(ts, tb_read());
		if (slept > io_sleep_max_us)
			io_sleep_max_us = slept;
		if (slept >= IO_SLOW_US && io_slow_lines++ < IO_SLOW_LINES) {
			char a[16], fp[64];
			ms2us(a, sizeof(a), slept);
			file_pass_text(fp, sizeof(fp));
			log_printf(C_YELLOW, "IO: SLEPT %s MS AT EMU %u (ASKED %d MS); %s", a, (unsigned)frame_count,
			           IO_SLEEP_MS, fp);
		}
	}
	return 0;
}

static int io_thread_start(void)
{
	const uint64_t t0 = tb_read();
	HANDLE h;

	if (!NT_SUCCESS(xsdk_thread_create_on(&h, 256 * 1024, io_task, NULL, IO_THREAD)))
		return -1;
	NtClose(h);
	while (!io_alive)
		if (tb_us(t0, tb_read()) > 1000000)
			return -1;
	return 0;
}

/* ---- the file thread (test 41) ----------------------------------------------------- */

/* the file work, then a kernel sleep; a write that waits for the disk (test 40: 2614 ms after 266 s
 * without one) holds up only this thread. A pass over FILE_SLOW_US is logged with the time since
 * the last pass that wrote and the IO thread's loops (= pad reads) during it */
static uint32_t file_task(void *u)
{
	uint64_t last_write = tb_read();

	(void)u;
	file_alive = 1;
	for (;;) {
		const uint64_t t0 = tb_read();
		const unsigned writes0 = file_writes, loops0 = io_loops;
		unsigned us;
		int lines;

		file_pass_t0 = (uint32_t)t0;
		file_in_pass = 1;
		lines = files_service();
		file_pass_t1 = (uint32_t)tb_read();
		file_in_pass = 0;
		file_passes = file_passes + 1;
		us = tb_us(t0, tb_read());
		if (us > file_max_us)
			file_max_us = us;
		if (us > FILE_SLOW_US) {
			file_slow_idle_s = (unsigned)((t0 - last_write) / PPC_TIMEBASE_FREQ);
			file_slow_pads = io_loops - loops0;
			file_slow_us = us;
			file_slow++;
			log_printf(C_YELLOW, "FILES: A PASS TOOK %u MS, %u S AFTER THE LAST WRITE; PADS READ %u TIMES MEANWHILE",
			           us / 1000, file_slow_idle_s, file_slow_pads);
		}
		if (lines || file_writes != writes0)
			last_write = tb_read();
		xsdk_thread_sleep(FILE_SLEEP_MS);
	}
	return 0;
}

/* no waiting for it: once created it does the file work, whenever it starts (no second writer) */
static int file_thread_start(void)
{
	HANDLE h;

	if (!NT_SUCCESS(xsdk_thread_create_on(&h, 256 * 1024, file_task, NULL, FILE_THREAD)))
		return -1;
	NtClose(h);
	return 0;
}

/* ---- pads to the board's inputs (game thread, once per emulated frame) ------------ */

static uint32_t prev_word[2];
static int coin_left[2];
static unsigned coins[2];
static unsigned af_phase[2]; /* test 55: autofire's place in its cycle (0 = the first frame down) */
static unsigned af_wait[2];  /* test 48: vblanks since autofire last stepped */
static unsigned af_lc;       /* test 48: the logic-frame counter at the last vblank */

/* test 17: the timing model (runtime/pcb.c); test 32: FIT+ 3.75%, "# timing 0 fitplus7" */
static void timing_apply(void)
{
	pcb_timing_model(PCB_MODEL_FITPLUS7);
	rec_timing = 9; /* recorder.h */
}

/* ---- test 51: ibara's start menu; test 53: Kuro BL's box and the options page ------------ */

/* ibara's own state, found on the PC (host/pc work RAM dumps of crafted inputs, 2026-10-22) */
#define IB_GAME_ON 0x0C28530Cu    /* byte: 0 in the attract and on the title, 1 from a credit's start to the end of GAME
                                   * OVER (0 for one vblank at a stage start), 0x0C while booting */
#define IB_TEST 0x0C21CA28u       /* long: IB_TEST_ON while the service menu runs (its submenus too), else 0 */
#define IB_TEST_ON 0x12345678u
#define IB_MODE 0x0C286752u       /* byte: the credit's mode, 0 normal, 1 harder, 2 extended */
#define IB_SHIP 0x0C28379Bu       /* byte: player 1's ship, 0-3 = Bond types A-D; player 2's at +IB_SHIP_P2 is 4-7 = Dyne */
#define IB_SHIP_P2 0x280u
/* test 53: Kuro BL's (host/pc RAM dumps; its 0C07235E stores 0 to BLK_GAME_ON where ibara's 0C0613FE
 * stores 0 to IB_GAME_ON, the same code around it) */
#define BLK_GAME_ON 0x0C2A6D90u   /* byte: 0 in the attract, on the title and while booting, 1 from a credit's start
                                   * (the ship select) on */
#define BLK_TEST 0x0C22E048u      /* long: IB_TEST_ON while the service menu runs, else 0 */
/* test 57: the attract's scene, 0x2C before the game byte in both games (host/pc work RAM dumps at
 * vblanks where Start is ignored / taken, 2026-10-22): 0 while booting (the NAND loading check and
 * the warning), SCENE_LOGOS on the logos, 6 on the title, 1-3 in the demos; a run keeps the scene
 * it started from; never 0 again after the boot (a service-menu exit goes back to the logos). The
 * games take Start from the vblank it leaves 0. */
#define IB_SCENE 0x0C2852E0u      /* byte */
#define BLK_SCENE 0x0C2A6D64u     /* byte */
#define SCENE_LOGOS 5
/* test 66: the attract demo's flag (work/g61/re/REPORT.md A1; Kuro BL's at its own address, the same code): 1 while a
 * demo plays, 0 in every run. Ibara's third demo sets IB_GAME_ON 1 twice (test 65's rec0001 at EMU 11508-11623 and
 * 11773-11903: the open options closed there). A service menu entered in a run leaves the game's byte 1 through the
 * warning and the logos until the title (rec0001 2199-2813, Kuro BL rec b57 7700-8532) */
#define IB_DEMO 0x0C21CA15u       /* byte */
#define BLK_DEMO 0x0C22E015u      /* byte */
/* test 87: a word that follows the screen and its sound (the PC harness's work RAM dumps of rec0001 / rec0002 and of
 * runs with no initials, 2026-10-27): its high half is IB_SCREEN_LOGO / BLK_SCREEN_LOGO from the CAVE logo's first
 * vblank, at power-on and after a run's ranking (the initials' entry and its table: ibara 0D60, ARRANGE 0DA0, Kuro BL
 * 14B8 with the cursor's 0C60 blinking; then the AMI logo 0E50 / 0D50). ibara rec0001: 0D60 to 10813, 0E80 at 10814,
 * the logo's first picture at 10816; a run with no initials shows the ranking too (ibara 5548-5847, the logo at 5848) */
#define IB_SCREEN 0x0C21CA20u     /* 16 bits */
#define BLK_SCREEN 0x0C22E020u
#define IB_SCREEN_LOGO 0x0E80u    /* ibara and ARRANGE */
/* test 109 (work/g109/initials): the name entry's time left, u32: 0x708 from the ranking 0C059060's start when a score
 * ranks, 0 once the third initial is in or the time is out. A Start the ranking's 0C060C30 sees (held) latches u8
 * 0C21F589 = to the title (the ranking and both logos skipped); during the entry it acts the moment the entry ends
 * (rec0007: the Start that skipped the ending's staff roll, still held on the entry's first frame) */
#define IB_ENTRY 0x0C392E0Cu
/* test 109 (user: "make the staff roll start protection a toggle in the debug menu"): u8, 1 from the ending's start
 * (work/g105/state 5.) through the ranking and the logos (work/g109/initials runs: 0 -> 1 at 145827, still 1 on the
 * title); the protection runs from its rise to the entry (IB_ENTRY), the ranking (screen 0DE0) or the CAVE logo */
#define IB_ENDING 0x0C21F7F0u
#define IB_SCREEN_RANKING 0x0DE0u
static int sm_staff;               /* the ending runs: a Start is kept from the game (cfg.staff_keep) */
static u8 sm_end_last;
#define BLK_SCREEN_LOGO 0x0D80u
/* test 110 (user: "find the ram address for black label"; work/g110/blkend/REPORT.md, harness runs on k05): Kuro BL's
 * counterparts. BLK_ENDING u8 0 -> 1 at the ending's start (80114), 1 through the story pages, the staff roll, the entry,
 * the ranking, the logos and the title, 0 when the next game starts (89718). BLK_ENTRY u32 0x708 from the ranking's
 * first vblank when a score ranks (only a one-credit side's), down 1 a vblank, 0 once the entry ends (the continue
 * countdown in a run, as ibara's). Screens: 14A8 the ranking without an entry, 14B8 the entry and its ranking (0C60
 * blinking), 0D80 the CAVE logo. START: any press skips the rest of the ending and the staff roll; held (the ranking's
 * read, latch u8 0C234BA9) the ranking and both logos too; a press during the entry ends it at once (initials filled)
 * and goes to the title (ibara's waits for the entry's end) */
#define BLK_ENDING 0x0C238020u
#define BLK_ENTRY 0x0C3C8474u
#define BLK_SCREEN_RANKING 0x14A8u
#define BLK_SCREEN_ENTRY 0x14B8u
#define SM_IDLE 60   /* vblanks the game must have been idle before Start opens the menu */
#define SM_LEAD 4    /* the command: held this many vblanks before Start, */
#define SM_START 6   /* Start down this many with it (as a coin's press), */
#define SM_TAIL 4    /* then held this many more */
#define SM_GAP 40    /* no credit then: this many vblanks without input, and the command again (free play: */
#define SM_TRIES 4   /* a Start in the attract demo only brings the title up, the next one starts), at most this often
                      * (test 99: 4, a try's scene change can be the attract's own) */
#define SM_CHECK 60  /* vblanks after the command the log says what the game took */
#define SM_GAP_TITLE 4   /* test 97: the title up after a try: this many vblanks without input, then the next */
#define SM_SCENE_TITLE 6 /* the attract's scene byte on the title (test 57) */

/* test 70: SM_FULLSEL = FULL RESTART's side and ship (the pause menu) */
enum { SM_CLOSED, SM_OPEN, SM_OPTS, SM_SENDING, SM_CTRL, SM_GADG, SM_SOUND, SM_PAUSE, SM_FULLSEL, SM_GSEL, SM_DIP,
       SM_SLOTS, SM_HDD, SM_REPLAYS, SM_RPBOX, SM_RPPAUSE }; /* test 87: SM_RPPAUSE = a playback's pause menu */
static int pic_shape(void);
static void pic_box_at(int w, int h, int *bx, int *by);
/* test 84: SM_SLOTS = the SLOTS page (the pause's SAVE STATE / LOAD STATE, the menu's LOAD STATE), SM_HDD = the box
 * while a file is written or read */
static void sl_open(int save);
static int sl_input(uint32_t press, int *done);
static void sl_draw(volatile uint32_t *t);
static int sl_save, sl_sel, sl_armed = -1, sl_paused; /* the SLOTS page: SAVE (1) or LOAD, its row, the row asking */
static int sl_reopen = -1;          /* pause_loop opens the SLOTS page (SAVE 1, LOAD 0), -1 none */
static int pm_reopen = -1;          /* and the pause menu's row under it (else RESUME) */
static char hdd_msg[36];            /* the page's last result, in hdd_msg_c (35 letters: the box's width) */
static uint32_t hdd_msg_c;
static int hs_slot = -1;            /* the file slot SAVE STATE writes (-1 none) */
static int hs_phase;                /* 1 = its frame was asked for (SLOT_STATE), the file next */
static unsigned hs_snaps;           /* the chip's snaps into SLOT_STATE before that */
static unsigned hs_ps2_snaps;       /* test 99: the PS2 stream's records of it before that */
static int hs_replay;               /* the PC harness's "# hddsave" (no pause comes back) */
static int hl_slot = -1;            /* the file slot host_vblank loads (-1 none) */
static int hl_from;                 /* HL_MENU, HL_PAUSE or HL_REPLAY */
enum { HL_MENU, HL_PAUSE, HL_REPLAY };
static int hdd_box_save, hdd_box_k; /* SM_HDD's box: SAVING (1) or LOADING, the slot */
static unsigned hdd_saves, hdd_loads;
static int hdd_ok;                  /* the save state files can be used (hdd_init) */
static int pm_to_state;             /* the pause's RESTART STAGE: 0 = STAGE (its start), 1 = STATE (SLOT_STATE) */
/* test 86: SM_REPLAYS = the menu's REPLAYS page, SM_RPBOX = a replay's box (SAVE REPLAY?, SAVING, LOADING: rp_box) */
static void rl_open(void);
static void rl_input(uint32_t press);
static void rl_draw(volatile uint32_t *t);
static void rl_move(uint32_t press);
static int rp_delete(int i, const char *why);
static void rp_pause_draw(volatile uint32_t *t);
static void rp_capture_start(uint32_t base, const char *from);
static void rp_cancel(int why);
static void rp_join_note(int value); /* test 117 */
static int rp_label(volatile uint32_t *t);
enum { RPB_NONE, RPB_RESTART, RPB_LOAD, RPB_QUIT, RPB_LONG, RPB_GAP, RPB_EXDBG, RPB_N }; /* why a run has no replay; test 108: EXDBG */
#define RP_KEEP 30                  /* test 87 (user: "limit it to 30 replays"): a full list asks which one to replace */
static int rl_pick;                 /* test 87: the page chooses the replay SAVE REPLAY? replaces (rp_question's) */
static int rp_restart_req, rp_quit_req; /* test 87: the playback's pause menu chose RESTART REPLAY / QUIT REPLAY */
static int rp_again;                /* test 87: rp_start called by RESTART REPLAY (inside the playback's run) */
static const char *rp_why(int why);
static int rp_cap;                  /* a run's ports are being kept for its replay (SLOT_CREDIT is its start) */
/* test 105 (user: "make sure training or savestates don't unlock any of these achievements"): the run may earn
 * achievements. Set at the credit's state (state_taken) and FULL RESTART / RESTART STAGE of stage 1 (state_load_now,
 * as the replay's start) for a run that is not TRAINING nor a playback; cleared by every other load (RESTART STAGE
 * past stage 1, LOAD STATE, a replay's, the attract's). ach_step also wants DIP SWITCHES at their defaults */
static int ach_ok;
static void ach_start(const char *from);
static int rp_bad;                  /* why that run gets none (RPB_*; 0 = it can) */
static int rp_pending;              /* the run ended with one: SAVE REPLAY? waits for the initials to be over */
static int rp_ask;                  /* SAVE REPLAY? at the next vblank */
static int rp_selfload;             /* the credit's slot was just taken: loaded back at this vblank (rp_vblank) */
static uint32_t rp_base;            /* frame_count of the replay's first vblank (its index 0) */
static uint32_t rp_n;               /* vblanks kept (a playback: its file's) */
static uint32_t rp_cut;             /* test 91: SAVE REPLAY? keeps this many vblanks at most (0 = all) */
enum { RPX_ASK, RPX_SAVING, RPX_LOADING, RPX_WAIT, RPX_DONE }; /* rp_box */
static int rp_ok;                   /* replays can be saved and played (the files, the input buffer) */
static int rp_box;                  /* SM_RPBOX's (RPX_*) */
static int rp_play;                 /* a replay plays (its ports, not the pads') */
static int rp_req = -1;             /* the list entry host_vblank plays (-1 none) */
static int rp_req_num;              /* and its number */
static int rl_sel, rl_top;          /* the REPLAYS page: the highlighted entry, the first row shown */
static int rl_armed = -1;           /* the entry asking DELETE? */
static int rl_reopen;               /* a playback ended: the menu opens again on the REPLAYS page */
static char rl_msg[36];             /* the page's last result (35 letters), in rl_msg_c */
static uint32_t rl_msg_c;
/* test 53: SM_OPTS = the options page; test 55: SM_CTRL = the controls page; test 64: SM_GADG = the M3 GADGETS page;
 * test 68: SM_SOUND = the SOUND page; test 69: SM_PAUSE = the pause menu (its pages: the same states with menu_paused).
 * Test 81 (user's todo list: "the player side/mode/ship type should be put into a new "play" selection, so that every
 * single option is inside one menu as a whole"; the user chose "PLAY row first"): Start in the attract opens the menu
 * (SM_OPTS page 0, its first row PLAY); SM_OPEN = the PLAY page (the start menu's rows, then DIP SWITCHES; START or A
 * plays from it), SM_DIP = its DIP SWITCHES page (ARRANGE's BULLET DESIGN there: the user's "move BULLET DESIGN to dip
 * switches") */
enum { SM_ROW_PLAYER, SM_ROW_MODE, SM_ROW_TYPE, SM_ROW_DIP, SM_ROW_START, SM_ROWS };
/* test 89: the TRAINING page's own rows: SM_ROW_TR + TR_* (the training section below main's PLAY page) */
/* test 91: Kuro BL's PLAYER TYPE (STRAIGHT / SPREAD) and BOMB TYPE (A-D), its ship select skipped (TR_OLD_N: test 89's
 * rows, whose "# host" numbers stay as they were) */
/* test 94: the starting options (TR_OPT0: ibara's LEFT slot's weapon + 1, 0 none; Kuro BL's and ARRANGE's stored
 * weapons, bit w = weapon w; TR_OPT1 / TR_OPT2 ibara's RIGHT / BACK) and ibara's formation codes of the three slots
 * (TR_FRM0..2); the page shows OPTIONS (TR_OPT0) and FORMATION (TR_FRM0) rows, each a box (tr_box) */
enum { TR_STAGE, TR_BOSS, TR_LIVES, TR_BOMBS, TR_GAUGE, TR_SHOT, TR_MEDAL, TR_RANK, TR_RPCT, TR_INV, TR_INFB, TR_SPEED,
       TR_HITBOX, TR_OLD_N, TR_KSHIP = TR_OLD_N, TR_KBOMB, TR_OPT0, TR_OPT1, TR_OPT2, TR_FRM0, TR_FRM1, TR_FRM2, TR_N };
/* test 96 (user's todo list: "highlight rank, press the X button to lock rank in place, adding an * to the right of the
 * percentage"): TR_RANK's bit TRR_HELD = the rank held all the run (the "*"); its mode = TR_RANK & 3. Without it every
 * game's RANK is a start value, the game's own rise and falls after it (user: Kuro BL's and ARRANGE's lock was "not
 * supposed to behave that way"). HOST_N had no room for a row more (test 117 raised it), so a bit of the row's value */
#define TRR_HELD 4
#define TRR_MODE(v) ((v) & 3)
/* test 96 (user's todo list: OPTIONS / FORMATION "a toggle that displays both <none> and <edit> in the same row"): the
 * row's bit TR_ROW_NONE (on TR_OPT0 / TR_FRM0) = NONE (no options, ibara's formations DEFAULT), the box's values kept
 * under it; clear = EDIT, A opens the box. A recording from before it (no bit) = EDIT, as it played */
#define TR_ROW_NONE 0x80
#define SM_ROW_TR 16
/* test 94 (user's todo list: each game's TRAINING rows in a new order): the rows before OPTIONS, those after */
#define TR_ROWS_A SM_ROW_TR + TR_STAGE, SM_ROW_TR + TR_BOSS, SM_ROW_TR + TR_SHOT
#define TR_ROWS_B SM_ROW_TR + TR_LIVES, SM_ROW_TR + TR_BOMBS, SM_ROW_TR + TR_GAUGE, SM_ROW_TR + TR_MEDAL, \
	SM_ROW_TR + TR_RPCT, SM_ROW_TR + TR_INV, SM_ROW_TR + TR_INFB, SM_ROW_TR + TR_SPEED, SM_ROW_TR + TR_HITBOX
/* test 82 (user: "swap mode and type's positions with each other"; ARRANGE: "delete mode > arrange, it's redundant",
 * its DIP SWITCHES removed with BULLET DESIGN gone to GENERAL SCREEN, the user's choice). Test 83 (user's todo list:
 * ""play" menu should have a "start run" at the top, by pressing A, eliminate being able to press start, inside any
 * menu, to immediately start a run"): START RUN first, A there plays, START plays from no page */
static const unsigned char sm_rows_ib[] = {SM_ROW_START, SM_ROW_PLAYER, SM_ROW_TYPE, SM_ROW_MODE, SM_ROW_DIP, SM_ROWS};
static const unsigned char sm_rows_arr[] = {SM_ROW_START, SM_ROW_PLAYER, SM_ROW_TYPE, SM_ROWS};
static const unsigned char sm_rows_blk[] = {SM_ROW_START, SM_ROW_PLAYER, SM_ROW_DIP, SM_ROWS};
static const unsigned char sm_rows_ib_tr[] = {SM_ROW_START, SM_ROW_PLAYER, SM_ROW_TYPE, SM_ROW_MODE, TR_ROWS_A,
                                              SM_ROW_TR + TR_OPT0, SM_ROW_TR + TR_FRM0, TR_ROWS_B, SM_ROW_DIP,
                                              SM_ROWS}; /* test 89: the TRAINING page */
static const unsigned char sm_rows_arr_tr[] = {SM_ROW_START, SM_ROW_PLAYER, SM_ROW_TYPE, TR_ROWS_A, SM_ROW_TR + TR_OPT0,
                                               TR_ROWS_B, SM_ROWS};
static const unsigned char sm_rows_blk_tr[] = {SM_ROW_START, SM_ROW_PLAYER, SM_ROW_TR + TR_KSHIP, SM_ROW_TR + TR_KBOMB,
                                               TR_ROWS_A, SM_ROW_TR + TR_OPT0, TR_ROWS_B, SM_ROW_DIP,
                                               SM_ROWS}; /* test 91: PLAYER TYPE, BOMB TYPE */
static int tr_box;                 /* test 94: the TRAINING page's open box (TR_OPT0 OPTIONS, TR_FRM0 FORMATION; 0 none) */
static int tr_box_sel;             /* and its row */
static int sm_train;               /* test 89: the page is TRAINING's (play_open) */
static const char *const sm_modes[3] = {"NORMAL", "HARDER", "EXTENDED"};
static const char *const sm_ships[2] = {"BOND", "DYNE"};
static int sm_state;               /* game thread; read by the card */
static int sm_pad;                 /* the pad the menu belongs to (0 or 1) */
static int sm_side, sm_mode, sm_type; /* the choice, kept between games: 0 = 1P Bond, 1 = 2P Dyne; 0-2; 0-3 = A-D */
static int sm_row;                 /* test 53: the start menu's row; test 81: the PLAY page's, an index into its list */
static int pad_swap;               /* pad 0 plays the 2P side and pad 1 the 1P side */
static unsigned sm_idle;           /* vblanks the game has been idle (no credit, no service menu) */
static int sm_early;               /* test 92: pad + 1 whose Start came before sm_idle reached SM_IDLE (0 none) */
static int sm_svc;                 /* test 66: a service menu ran since the game's byte was last 0 (its 1 is stale) */
static unsigned sm_runhold;        /* test 66: vblanks a run still counts for the logos (ibara's byte is 0 for a vblank
                                    * at each stage start: Start was live there in a run begun from the logos) */
#define SM_RUN_HOLD 10
static unsigned sm_k, sm_try;      /* the command's vblank; its tries */
static int sm_cut_logged;          /* test 97: its buttons released for the credit (logged once a command) */
static int sm_volley_cut;          /* test 98: the demo's volley cleared at this command's credit */

/* test 98: both sides' volley flag and burst (player +0x258 / +0x259; Kuro BL +0x25F / +0x260) cleared at a credit:
 * the demo's otherwise (see sm_frame); the menu's command and a TRAINING run's start (tr_vblank) */
static void volley_clear(const char *who)
{
	const int ib = game_set == SET_IBARA;
	const uint32_t pl = ib ? 0x0C283794u + 0x258u : 0x0C29D1D8u + 0x25Fu, step = ib ? 0x280u : 0x2A0u;
	int s, was = 0;

	for (s = 0; s < 2; s++) {
		u8 *v = RAMP(pl + (uint32_t)s * step);
		was |= (v[0] != 0) << s;
		v[0] = v[1] = 0;
	}
	if (was)
		log_printf(C_WHITE, "%s: THE DEMO'S VOLLEY CLEARED AT THE CREDIT (EMU %u, SIDES %d)", who, (unsigned)frame_count,
		           was);
}
/* test 98: MENU STYLE PS2 in use (chosen, and ps2data.bin has its pieces); LANGUAGE JAPANESE in use (and PS2) */
static int menu_ps2(void)
{
	return ps2menu_ok();
}

static int menu_ja(void)
{
	return menu_ps2() && cfg.language == LANG_JAPANESE && ps2menu_jp_ok();
}
static uint32_t menu_sig(void);                                     /* test 98 */
static void menu_se(int st0, uint32_t sig0, uint32_t press, int closing); /* test 98 */
static unsigned menu_se_count;                                      /* test 98: the menu sounds asked for */
static uint32_t sm_prev[2], sm_hold[2]; /* pads 0-1 last vblank; buttons kept from the game until released */
/* Test 93 (user's todo list: "holding down a direction in any menu should make the cursor scroll a bit faster, but not
 * too fast"; the user's choice 0.4 s, then 7 a second): a direction held alone (the same ones) gives a press again
 * after MENU_REP_DELAY vblanks, then every MENU_REP_EVERY; the picture rows' LEFT / RIGHT keep their own (pic_input) */
#define MENU_REP_DELAY 24
#define MENU_REP_EVERY 9
struct menu_rep { uint32_t dirs; unsigned n; };
static uint32_t menu_repeat(struct menu_rep *r, uint32_t w)
{
	const uint32_t d = w & (A_UP | A_DOWN | A_LEFT | A_RIGHT);

	if (!d || d != r->dirs) {
		r->dirs = d;
		r->n = 0;
		return 0;
	}
	r->n++;
	return r->n >= MENU_REP_DELAY && (r->n - MENU_REP_DELAY) % MENU_REP_EVERY == 0 ? d : 0;
}
static struct menu_rep sm_rep[2];
static unsigned sm_check_at;       /* frame_count at which the log reads the game's mode and ship (0 = none) */
static unsigned sm_opens, sm_plays;
static int sm_run, sm_test;        /* test 69: sm_frame's run and service menu this vblank (the save states) */
static int sm_after;               /* test 81: a run ended in scene sm_after - 1 and the scene has not changed since (its
                                    * GAME OVER, initials and ranking: Start is the game's); 0 = none */
static int sm_logo;                /* test 87: in sm_after, the CAVE logo came (the initials' entry is over) */
static int snd_att = 1;            /* test 100: the sound's attract (snd_frame) */
static int sm_back;                /* test 88: the scene changed out of sm_after at this vblank (the attract again) */
static unsigned sm_run_scene;      /* test 88: the scene byte while the last run ran (the scene a run keeps) */
static unsigned sm_scene;          /* and the scene byte */
static uint32_t sm_left_at;        /* test 91: the vblank the scene left the last run's (0 = not yet), the replay's end */

/* ---- test 52: ibara's special version ------------------------------------------------- */

/* The PCB's special version (shmups.wiki Ibara, "Special Mode"; checked on host/pc with "# dsw"
 * input lines, 2026-10-22): game_main (0C04EBC0) reads the DIP switches (18000050, bit 1 = S2
 * switch 2) into IB_DSW_SEEN and, with that switch on and buttons 1 + 2 held on either side, sets
 * IB_SPECIAL, else clears it. It runs at power-on (~vblank 87), when the test switch resets the
 * game into the service menu (without A+B then the game leaves the special version, with them it
 * keeps it through the menu and back) and, test 53, when the switches change: the main loop
 * compares them with IB_DSW_SEEN and restarts the game through game_main (the warning screen,
 * ~9 s to the title). The title then says "Special ver." over the game's settings, the service
 * menu "TEST MODE Special ver.", and each stage start shows the rank. Kuro BL uses only switch 1
 * (the service menu): no special version there. */
#define IB_SPECIAL 0x0C21F7F9u    /* byte: 1 = the special version */
#define IB_DSW_SEEN 0x0C28626Cu   /* long: the switches game_main last read */
#define DSW_SPECIAL 0x02          /* in_dsw (18000053): S2 switch 2 */
#define SP_BOOT_HOLD 300          /* A+B held from power-on this many vblanks (game_main reads them at ~87) */
#define SP_TEST_HOLD 30           /* and from a test press until the service menu is up, at most this many */
#define SP_SWITCH_HOLD 600        /* test 53: and from a switch change until game_main has read it, at most this many */
static int special_on;            /* ibara with the special switch on (cfg.special at the start, then the options') */
static unsigned sp_test_left;     /* vblanks of A+B still due for a test press */
static int sp_test_prev;          /* the test line last vblank */
static unsigned sp_switch_left;   /* test 53: vblanks of A+B still due for a switch turned on */
static unsigned sp_seen = ~0u;    /* IB_SPECIAL last vblank (logged when it changes) */
static unsigned sp_test_holds, sp_switches;
/* test 85: the debug menu's SERVICE MENU row (A, then A again): the board's S3 test switch down for SVC_HOLD vblanks
 * (a hand's R3 held it 5-10 in rec0001-0006), in the ports, so the recording carries it as R3's did */
#define SVC_HOLD 8
static unsigned svc_left;         /* vblanks of S3 still due */
static int svc_armed;             /* the row asks "SERVICE MENU? A = YES, B = NO" */
/* test 101 (user: "include an "initialize rankings" option in the debug menu so that one doesn't need to open the
 * service menu for it. upon selecting it it must have a "confirm? yes/no" prompt"): A, then A again (B / BACK = no);
 * rankinit.c does what the game's TEST MODE INITIALIZE RANKING page does (work/g101/rankinit/REPORT.md) */
static int rk_armed;              /* the row asks "CONFIRM? A = YES, B = NO" */
static int rk_said;               /* 1 done, 2 not now (the help says so until the row is left) */
static int ac_armed;              /* test 106: ACHIEVEMENTS ON asks first (the user: a ban warning, then "confirm? yes/no") */

/* test 53: the options page's special row, applied on leaving the page: the switch to the
 * board, A+B for game_main when it goes on (inputs_update), the recording's "# dsw" line */
static void special_switch(void)
{
	special_on = cfg.special;
	hdd_special((uint32_t)special_on); /* test 84: the save state files made in the other mode are refused */
	in_dsw = special_on ? DSW_SPECIAL : 0;
	rec_dsw = in_dsw;
	sp_switch_left = special_on ? SP_SWITCH_HOLD : 0;
	sp_switches++;
	if (special_on && !chk.off) {
		chk.off = 1;
		chk_off_why = "SPECIAL VER. (THE PC RUN IS THE NORMAL ONE)";
	}
	log_printf(C_YELLOW, "SPECIAL: %s FROM THE OPTIONS AT EMU %u: DIP S2 SWITCH 2 %s, THE GAME RESTARTS", special_on ? "ON" : "OFF",
	           (unsigned)frame_count, special_on ? "ON + A+B" : "OFF");
}

/* ---- test 53: the options page in the start menu; test 55: the controls page ------------ */

/* Ibara: BACK in the start menu; Kuro BL: Start in the attract opens it. UP / DOWN choose a row,
 * LEFT / RIGHT (or A) change it; B or BACK go back (ibara: to the start menu, Kuro BL: closed),
 * START plays. The picture rows apply at once (layout_apply: the layouts are rebuilt in the
 * other of two places, so a queued frame keeps its quads), the card at once; special when the
 * page is left (the game restarts, so the box closes); save, record, frame log, network log and
 * the game at power-on from the next power-on. Leaving the page with changes asks the file thread
 * for the ini (settings_save_request). Drawn in the start menu's box (sm_draw).
 * Test 55: each game has its own rows (opt_rows): test 53's, then AUTOFIRE (ibara: RT's rate),
 * BACK IN A RUN (pause or coin) and CONTROLS (A opens the controls page; test 56: not RIGHT); Kuro BL has
 * PLAYER (the side its Start plays, as ibara's start menu) where ibara has its special version.
 * Test 67 (user: "in the options menu, move the following options into a further debug menu": special mode, the
 * EEPROM save, the log record, frame log, network log, game ask; "move the autofire setting frequency inside the
 * control rebind option menu"): DEBUG MENU (A opens it: page 1, its rows in opt_rows_*[1]; B / BACK back to the
 * options, START plays); AUTOFIRE on the controls page (ibara's).
 * Test 70 (user 2026-10-25): the picture rows on a GENERAL SCREEN page (page 3; "picture" = PICTURE SIZE, "tate" =
 * ROTATION, "aspect" = ASPECT RATIO), STATUS CARD on the debug menu as DEBUG CARD, no "A = OPEN" values ("A = CONFIRM"
 * among the green lines), the options box thinner (OPT0_W); START plays from none of the pages any more (user: "disable
 * Start to play inside Options, general screen, M3 gadgets, controls, sound and debug menu"): B / BACK go back a page,
 * the start menu plays (Kuro BL has one now, its PLAYER row moved there from the options). */
enum { OPT_SPECIAL, OPT_PICTURE, OPT_TATE, OPT_ASPECT, OPT_SCANLINES, OPT_STRENGTH, OPT_CARD, OPT_SAVE, OPT_RECORD,
       OPT_FRAMELOG, OPT_NETLOG, OPT_GAME, OPT_AUTOFIRE, OPT_BACK, OPT_CONTROLS, OPT_PLAYER, OPT_GADGETS, OPT_M3,
       OPT_DEBUG, OPT_SOUND, OPT_SCREEN, OPT_CONTROLS2, OPT_GSEL, OPT_PLAY, OPT_BULLETS, OPT_LOAD, OPT_SERVICE, OPT_REPLAYS,
       OPT_OPTIONS, OPT_PSIZE, OPT_PXSIZE, OPT_PYSIZE, OPT_PXPOS, OPT_PYPOS, OPT_SMOOTH, OPT_TRAIN, OPT_BRIGHT, OPT_STYLE, OPT_LANG, OPT_RANKS, OPT_ACH, OPT_TOAST,
       OPT_STAFF, OPT_EXINV, OPT_EXINFB, OPT_EXHIT, OPT_EXLIVES, OPT_EXREPLAY, OPT_N }; /* test 108: EX-DEBUG's; test 110:
                                                                                         * LIVES; test 118: REPLAY SAVE */
static const char *const opt_names[OPT_N] = { /* "*" = from the next power-on */
	"SPECIAL MODE", "PICTURE SIZE", "ROTATION", "ASPECT RATIO", "SCANLINES", "SCAN STRENGTH", "DEBUG CARD",
	"EEPROM SAVE *", "RECORD *", "FRAME LOG *", "NETWORK LOG *", "GAME MENU *", "AUTOFIRE", "BACK IN A RUN",
	"P1 CONTROLS", "PLAYER", "GADGETS", "M3 GADGETS", "DEBUG MENU", "SOUND", "GENERAL SCREEN",
	"P2 CONTROLS", /* test 71 (user: "add P2 controls in options ... follow same text as P1") */
	"GAME SELECT", /* test 72: back to the launcher (A, then A again) */
	"PLAY",        /* test 81: the PLAY page (A) */
	"BULLET DESIGN", /* test 82: ARRANGE's, on GENERAL SCREEN (user: "move "bullet design" to "general screen"") */
	"LOAD STATE",  /* test 84: the SLOTS page (user: LOAD STATE in the attract menu too) */
	"SERVICE MENU", /* test 85: the debug menu's (user: "introduce a "service menu" option in debug options") */
	"REPLAY DATA",  /* test 86: the REPLAYS page (user: "rename SCORE HISTORY to REPLAYS"); test 87: "rename replays to
	                 * "replay data"" */
	"OPTIONS",      /* test 88: the OPTIONS page (user: "move general screen, m3 gadgets, p1 controls, p2 controls, sound
	                 * and debug menu into an options menu") */
	/* test 89 (user's todo list 2026-10-27 20:20: ADJUST PICTURE's options inside GENERAL SCREEN, "adjusted by left/right
	 * toggle for size, X position, Y position, also add individual X and Y size adjustment toggles"; "add "smoothing"
	 * option in "general screen"") */
	"SIZE", "X SIZE", "Y SIZE", "X POSITION", "Y POSITION", "SMOOTHING",
	"TRAINING",     /* test 89: the TRAINING page (the PLAY page's rows and the training ones) */
	"BRIGHTNESS",   /* test 91 (user's todo list: "add a "brightness" setting in 5% increments") */
	/* test 98 (user 2026-10-28 ideas, approved for test 98: "menu style: arcade / ps2", "language: english /
	 * japanese"): GENERAL SCREEN's and the pause's SCREEN page's last rows (ps2menu.c) */
	"MENU STYLE", "LANGUAGE",
	"INITIALIZE RANKINGS", /* test 101: the debug menu's (user) */
	/* test 106 (user: "add "achievements on/off" in the debug menu (off by default), so that one could play the game on
	 * a profile they take online without the risk of getting banned"; and test 105's toast: "move it somewhere else and
	 * make it bigger"): the debug menu's last two rows */
	"ACHIEVEMENTS", "TOAST",
	"STAFF ROLL", /* test 109 (user: "make the staff roll start protection a toggle in the debug menu") */
	/* test 108 (user: "add EX-debug options for development purposes (accessed by holding RB and pressing A while
	 * highlighting debug in options"; "these options (invincibility, infinite bombs, hitbox viewer) will work on regular
	 * runs and still allow achievements"): the EX-DEBUG page's rows (ex_vblank), for this power-on only */
	"INVINCIBLE", "INFINITE BOMBS", "HITBOXES", /* test 110: the user's "hitboxes" */
	"INFINITE LIVES", /* test 110 (user: "add infinite lives to ex-debug") */
	"REPLAY SAVE",    /* test 118 (user: "new EX-debug option, replay save on/off, above debug card") */
};
static const char *const opt_helps[OPT_N] = { /* a line's 35 characters at most (the box); "\n" = a second line (test 70) */
	"IBARA'S SPECIAL VER. (PCB DIP S2-2)",
	"INTEGER = SHARP, FULL = FULL HEIGHT\nCUSTOM = MANUALLY ADJUST", /* test 88: CUSTOM (35 letters a line); test 91:
	                                                                  * the user's second line */
	"ROTATE THE GAME WINDOW",               /* test 70: the user's helps for ROTATION, ASPECT RATIO, SCANLINES, */
	"ADJUST ASPECT RATIO,\nAUTO = CONSOLE'S ASPECT RATIO",
	"RASTER SCANNING PATTERN",
	"SCANLINES INTENSITY",                  /* test 82: the user's */
	"REAL TIME STATUS",                     /* DEBUG CARD, CONTROLS */
	"KEEP SETTINGS AND HIGH SCORES",
	"INPUT RECORDING RECNNNN.TXT",
	"FRAME TIMING LOG PERFNNNN.TXT",
	"LOGS TO A PC OVER THE NETWORK",
	"ASK = CHOOSE THE GAME AT POWER-ON",
	"",                                     /* sm_draw: the rate's game frames */
	"PAUSE: BACK OR START GOES ON",
	"CUSTOMIZE CONTROLS",
	"THE SIDE START PLAYS: 1P OR 2P",
	"ARTWORK + GAME INFO AROUND THE GAME", /* test 58; test 60: every shape but 4:3 tate */
	"ORIGINAL WORK BY BAF AND OLIFANTE",    /* test 64 (user: "an M3 gadgets option"); test 69: the user's; test 93:
	                                         * "original work by baf and olifante" (user's todo list) */
	"",                                     /* sm_draw: the debug menu's rows (test 67) */
	"VOLUMES, MUTE, SOUND TEST",            /* test 68 */
	"CUSTOMIZE GAME SCREEN",                /* test 70 */
	"CUSTOMIZE CONTROLS",                   /* test 71: P2 CONTROLS, P1's text (user) */
	"QUIT TO MAIN MENU",                    /* test 72; test 76: the user's (the launcher is the main menu) */
	"",                                     /* sm_draw: the game's PLAY rows (test 81) */
	"CHANGE ENEMY BULLET DESIGN",           /* test 82; test 83: the user's (todo list 2026-10-27) */
	"CONTINUE FROM A SAVE STATE",           /* test 84 */
	"ARCADE ROM'S SERVICE MENU\nPRESS START ON \"GAME MODE\" TO EXIT", /* test 85; armed: "SERVICE MENU? A = YES, B = NO"
	                                                                   * (sm_draw); test 88: the user's */
	"WATCH RECORDED REPLAYS",               /* test 86; test 87: the user's */
	"SCREEN, GADGETS, CONTROLS,\nSOUND, DEBUG MENU", /* test 88; test 89: 28 letters a line (the menu's box: the user's
	                                                    * "options blue line is unfinished") */
	/* test 89; test 91: the user's (Y SIZE's "custom vertical placement" in the todo list read as the zoom rate, X
	 * SIZE's pair) */
	"CUSTOM SCREEN ZOOM RATE\nA = RESET",
	"CUSTOM HORIZONTAL ZOOM RATE\nA = RESET",
	"CUSTOM VERTICAL ZOOM RATE\nA = RESET",
	"CUSTOM HORIZONTAL PLACEMENT\nA = RESET",
	"CUSTOM VERTICAL PLACEMENT\nA = RESET",
	"SOFTEN THE GAME PICTURE'S PIXELS",
	"PRACTICE AND IMPROVE YOUR SCORE", /* test 89; test 91: the user's (31 letters: the menu's box takes 28, sm_help
	                                     * wraps it) */
	"CHANGE BRIGHTNESS",                    /* test 91: the user's */
	"ARCADE OR PS2 MENU LOOK",              /* test 98: the research's (work/g97/ps2menu/ja_help.tsv) */
	"HELP TEXT LANGUAGE\nJAPANESE WITH PS2 MENUS ONLY", /* test 98: JAPANESE draws the PS2's 16x16 font in the
	                                                        * PS2 look's description box only */
	"CLEAR EVERY HIGH SCORE TABLE",         /* test 101; armed: "CONFIRM? A = YES, B = NO" (sm_draw) */
	"OFF = NOTHING WRITTEN TO THE\nPROFILE (FOR AN ONLINE PROFILE)", /* test 106 */
	"WHERE THE TOASTS POP UP\nA = TEST TOAST",                      /* test 106; test 111: the probes gone (route K at the start) */
	"CAN'T SKIP STAFF ROLL AND INITIALS\nENTRY SCREEN WITH START",      /* test 109; test 110: the user's */
	"SHIPS CANNOT BE HIT\nACHIEVEMENTS STILL COUNT",                 /* test 108: EX-DEBUG */
	"FULL BOMB STOCK KEPT\nACHIEVEMENTS STILL COUNT",
	"PLAYER = THE SHIP'S HITBOX\nALL = ENEMIES, BULLETS, SHOTS TOO",
	"LIVES NEVER RUN OUT\nACHIEVEMENTS STILL COUNT",                 /* test 110 */
	"ENABLE/DISABLE REPLAY SAVING",                                  /* test 118: the user's */
};
/* test 67: [0] the options, [1] the debug menu; ending at OPT_N; test 68: SOUND after CONTROLS. Test 69 (user: "gadgets
 * on/off option is obsolete since the M3 gadgets options have an all/off toggle", "back in a run option is obsolete"):
 * no GADGETS or BACK IN A RUN rows; [2] = the pause menu's SCREEN page (user: "picture size, scanlines, scanline
 * strength, aspect ratio, tate, M3 gadgets"). Test 70: [3] = GENERAL SCREEN (user: "transfer the picture, tate, aspect,
 * scanlines, scan strength to a general screen menu"), the debug menu has DEBUG CARD */
#define OPT_PAGE_DEBUG 1
#define OPT_PAGE_SCREEN 2
#define OPT_PAGE_GENERAL 3
#define OPT_PAGE_OPTIONS 4 /* test 88: OPTIONS (the menu's settings pages) */
#define OPT_PAGE_PAUSE 5   /* test 100: the pause's OPTIONS (OPTIONS' rows but DEBUG MENU) */
#define OPT_PAGE_EXDBG 6  /* test 108: EX-DEBUG (RB held + A on DEBUG MENU); test 112: LB + RB held + A */
#define EXDBG_OPEN 0      /* test 119 (user: "disable access to ex-debug (but keep it in the game)"): 1 = LB + RB + A opens it */
#define OPT_PAGES 7
/* test 72: no GAME MENU row in a one-game image (the launcher chooses), GAME SELECT at the options' end instead */
#ifdef IB_GAME
#define OPT_GAME_ROW
#define OPT_GSEL_ROW OPT_GSEL,
#else
#define OPT_GAME_ROW OPT_GAME,
#define OPT_GSEL_ROW
#endif
/* test 84: LOAD STATE after PLAY (the SLOTS page); test 86: REPLAYS after it. Test 88: page 0 = PLAY, LOAD STATE,
 * REPLAY DATA, OPTIONS, GAME SELECT; the settings pages' rows on [4] = OPTIONS (user); ADJUST PICTURE after PICTURE SIZE
 * (the picture resize, user: "size can go above full height") */
/* test 89: ADJUST PICTURE's rows SIZE .. Y POSITION after PICTURE SIZE, SMOOTHING before SCANLINES; TRAINING after PLAY.
 * Test 91: BRIGHTNESS after SMOOTHING */
#define OPT_PIC_ROWS OPT_PICTURE, OPT_PSIZE, OPT_PXSIZE, OPT_PYSIZE, OPT_PXPOS, OPT_PYPOS
/* test 93 (user's todo list, "options screen menu (all games)": picture size .. y position, rotation, scanlines, scan
 * strength, brightness, smoothing, aspect ratio, m3 gadgets): the pause's SCREEN page and GENERAL SCREEN (the user's
 * choice: both; GENERAL SCREEN without M3 GADGETS, ARRANGE's BULLET DESIGN last) */
#define OPT_GENERAL_ROWS OPT_PIC_ROWS, OPT_TATE, OPT_SCANLINES, OPT_STRENGTH, OPT_BRIGHT, OPT_SMOOTH, OPT_ASPECT
/* test 98: MENU STYLE, LANGUAGE after ASPECT RATIO (the screen's look; the ini keeps them for all four .xex); test 102
 * (user: "language option should be at the bottom of the options page, below debug menu, instead of general screen"):
 * GENERAL SCREEN without LANGUAGE, OPTIONS' last row; the pause's SCREEN page keeps it (the pause has no other place).
 * Test 107 (user: "the pause menu still has the language selection inside general screen, for all games; move it to
 * the main pause menu at the bottom just like every other option screen"): the pause's SCREEN page without it, the
 * pause's OPTIONS page ends with it, as OPTIONS does */
#define OPT_SCREEN_ROWS OPT_GENERAL_ROWS
/* test 100 (user's list: "all three game's pause menu should have "options" selection with controls, screen, gadgets
 * and sound (in the same order as the main menu's options menu) instead of an extended pause menu") */
#define OPT_PAUSE_ROWS OPT_SCREEN, OPT_M3, OPT_CONTROLS, OPT_CONTROLS2, OPT_SOUND, OPT_LANG
static const unsigned char opt_rows_ib[OPT_PAGES][18] = { /* test 71: P2 CONTROLS after P1's; test 81: PLAY first */
	{OPT_PLAY, OPT_TRAIN, OPT_LOAD, OPT_REPLAYS, OPT_OPTIONS, OPT_GSEL_ROW OPT_N},
	/* test 106: ACHIEVEMENTS, ACHIEVEMENT TOAST; test 109: STAFF ROLL; test 110 (user: "move initialize rankings to the
	 * bottom, staff roll to the top after special mode"). Test 112 (user: "move service menu to the bottom of the debug
	 * menu, before initialize rankings", "move achivements and toast options in the ex-debug menu", "move EEPROM save,
	 * record, framelog and network log on the ex-debug menu"; DEBUG CARD is in their EX-DEBUG order too) */
	{OPT_SPECIAL, OPT_STAFF, OPT_GAME_ROW OPT_SERVICE, OPT_RANKS, OPT_ACH, OPT_N}, /* test 119 (user): ACHIEVEMENTS last */
	{OPT_SCREEN_ROWS, OPT_N}, /* test 100: M3 GADGETS on the pause's OPTIONS page */
	{OPT_GENERAL_ROWS, OPT_N},
	{OPT_SCREEN, OPT_M3, OPT_CONTROLS, OPT_CONTROLS2, OPT_SOUND, OPT_DEBUG, OPT_LANG, OPT_N}, /* test 102: LANGUAGE */
	{OPT_PAUSE_ROWS, OPT_N},
	/* test 112 (user: "final order of ex debug menu should be: infinite lives, infinite bombs, invincible, hitboxes,
	 * debug card, eeprom save, record, frame log, network log, achievements, toast") */
	{OPT_EXLIVES, OPT_EXINFB, OPT_EXINV, OPT_EXHIT, OPT_EXREPLAY, OPT_CARD, OPT_SAVE, OPT_RECORD, OPT_FRAMELOG, OPT_NETLOG,
	 OPT_TOAST, OPT_N}, /* test 119: ACHIEVEMENTS on the debug menu */
};
/* test 82 (user: "in "debug menu", delete "special mode"", "move "bullet design" to "general screen""): ARRANGE's */
static const unsigned char opt_rows_arr[OPT_PAGES][18] = {
	{OPT_PLAY, OPT_TRAIN, OPT_LOAD, OPT_REPLAYS, OPT_OPTIONS, OPT_GSEL_ROW OPT_N},
	/* test 102 (user: "ibara arrange shouldn't have the service menu accessible, since it didn't exist on PS2"):
	 * no SERVICE MENU row */
	{OPT_STAFF, OPT_GAME_ROW OPT_RANKS, OPT_ACH, OPT_N}, /* test 112: the rest on EX-DEBUG; test 119: ACHIEVEMENTS last */
	{OPT_SCREEN_ROWS, OPT_N},
	{OPT_GENERAL_ROWS, OPT_BULLETS, OPT_N},
	{OPT_SCREEN, OPT_M3, OPT_CONTROLS, OPT_CONTROLS2, OPT_SOUND, OPT_DEBUG, OPT_LANG, OPT_N}, /* test 102: LANGUAGE */
	{OPT_PAUSE_ROWS, OPT_N},
	/* test 112 (user: "final order of ex debug menu should be: infinite lives, infinite bombs, invincible, hitboxes,
	 * debug card, eeprom save, record, frame log, network log, achievements, toast") */
	{OPT_EXLIVES, OPT_EXINFB, OPT_EXINV, OPT_EXHIT, OPT_EXREPLAY, OPT_CARD, OPT_SAVE, OPT_RECORD, OPT_FRAMELOG, OPT_NETLOG,
	 OPT_TOAST, OPT_N}, /* test 119: ACHIEVEMENTS on the debug menu */
};
static const unsigned char opt_rows_blk[OPT_PAGES][18] = { /* test 60: GADGETS; 64: M3; 70: PLAYER in the start menu */
	{OPT_PLAY, OPT_TRAIN, OPT_LOAD, OPT_REPLAYS, OPT_OPTIONS, OPT_GSEL_ROW OPT_N},
	{OPT_STAFF, OPT_GAME_ROW OPT_SERVICE, OPT_RANKS, OPT_ACH, OPT_N}, /* test 119: ACHIEVEMENTS last; test 110: STAFF ROLL first (Kuro BL's addresses found),
	                                                         * INITIALIZE RANKINGS last; test 112: SERVICE MENU before it,
	                                                         * the rest on EX-DEBUG */
	{OPT_SCREEN_ROWS, OPT_N}, /* test 100: M3 GADGETS on the pause's OPTIONS page */
	{OPT_GENERAL_ROWS, OPT_N},
	{OPT_SCREEN, OPT_M3, OPT_CONTROLS, OPT_CONTROLS2, OPT_SOUND, OPT_DEBUG, OPT_LANG, OPT_N}, /* test 102: LANGUAGE */
	{OPT_PAUSE_ROWS, OPT_N},
	/* test 112 (user: "final order of ex debug menu should be: infinite lives, infinite bombs, invincible, hitboxes,
	 * debug card, eeprom save, record, frame log, network log, achievements, toast") */
	{OPT_EXLIVES, OPT_EXINFB, OPT_EXINV, OPT_EXHIT, OPT_EXREPLAY, OPT_CARD, OPT_SAVE, OPT_RECORD, OPT_FRAMELOG, OPT_NETLOG,
	 OPT_TOAST, OPT_N}, /* test 119: ACHIEVEMENTS on the debug menu */
};
static int lay_quiet; /* test 88: the picture's rows rebuild the layouts as they go: no PICTURE line each time */
static int opt_page;               /* test 67: 0 = the options, 1 = the debug menu; test 69: 2 = the pause's SCREEN;
                                    * test 70: 3 = GENERAL SCREEN; test 88: 4 = OPTIONS; test 100: 5 = the pause's
                                    * OPTIONS; test 108: 6 = EX-DEBUG */
/* test 108: EX-DEBUG's settings (this power-on only, never in the ini: a run is never cheated by surprise) */
static int ex_inv, ex_infb, ex_hit; /* INVINCIBLE, INFINITE BOMBS, HITBOX (OFF, PLAYER, ALL as TRAINING's) */
static int ex_lives;                /* test 110: INFINITE LIVES */
static int opt_sels[OPT_PAGES];    /* the highlighted row of each page (an index into the game's rows) */
static int menu_paused;            /* test 69: the pages are the pause menu's (sm_draw's lines, SOUND without tests) */
static int opt_changes;            /* changes since the page opened */
static int netlog_started;         /* this power-on's netlog (the ini's) */
static void layout_apply(const char *why);
/* test 72: GAME SELECT (the options' last row) and the pause's QUIT TO GAME SELECT, A then A again: back to the
 * launcher beside this .xex (launch.h). launcher_ok = it is there (at the start); gsel_armed = the row asks; gsel_req =
 * the options asked (sm_frame), the game thread goes after it (inputs_update) */
static int launcher_ok, gsel_armed, gsel_req;
static int game_booted; /* test 89: the game's scene byte has left 0 (its boot is over: gadgets' gd_input.booted) */
static int tr_run;      /* test 89: this run is a training run (the TRAINING page's START RUN; tr_* below) */
/* test 89: the TRAINING section's (before host_vblank), for the pages, the loads and the vblank */
static int tr_cfg[TR_N], tr_val[TR_N], tr_armed;
static int tr_boss_done; /* test 91: state_taken's (START AT BOSS's jump done) */
static int tr_rank_free; /* test 93: ibara's RANK start value written, the game's rise from it (tr_vblank); test 96 all */
static uint32_t tr_rank_hold; /* test 96: the rank then (TRR_HELD writes it every vblank) */
static int tr_reopen;    /* test 91: the attract was loaded by QUIT TO TRAINING MODE: sm_frame opens the TRAINING page */
static unsigned tr_go;   /* test 92: vblanks since the training run's GAME OVER */
static int tr_clear_stage = -1; /* test 95: the training run's stage (SLOT_CREDIT's, a load's slot's), -1 none yet */
static int tr_stage_prev = -2;  /* test 95: stage_now() at the last vblank (-2 unknown: after a load) */
static int tr_fin_prev = -1;    /* test 95: the game's ending flag at the last vblank (-1 unknown) */
static unsigned tr_zero;        /* test 100: vblanks of a training run with the game's byte at 0 */
#define TR_ZERO_GAP 3
static const char *const tr_names[TR_N];
static uint32_t tr_text(int k, char *s, size_t n);
static const char *tr_help(int k);
static void tr_box_input(uint32_t press);                       /* test 94 */
static void tr_box_draw(volatile uint32_t *t, int pbx, int pbw); /* test 94 */
static void tr_send(const int *v);
static void tr_end(const char *why);
static void tr_pages_game(void); /* test 91 */
static void tr_loaded(void);
static void tr_from_file(int on, const uint8_t *v);
static void tr_vblank(void);
static void tr_hitbox(void);
static void speed_frame(void);
static int rp_speed = 100;     /* test 89: a playback's speed (LB slower, RB faster), 100% at its start */
static int rp_speed_shown;     /* test 89: the playback's label says its speed (it changed) */
static uint32_t spd_latch[2];  /* test 89: presses in GAME SPEED's vblanks without a frame, for the next one */
static int tr_turbo;           /* test 89: START AT BOSS's skip: emulated frames since the jump, the boss not there yet */
static int boot_turbo = 1;     /* test 112: the board's boot runs unpaced (boot_check, host_vblank) */
static int boot_show;          /* test 112: this boot frame is presented (test 113: one a display vblank) */
static unsigned boot_steps;    /* test 113: the display's vblanks since the boot's last shown frame (the ticker's steps) */
static struct launch_data launch_in; /* how this title was started (launch_get at the start) */
static void game_select_quit(const char *from) __attribute__((noreturn));

/* test 55: the game's rows; test 67: the page's; test 82: ARRANGE's own */
static const unsigned char *opt_rowlist(void)
{
	return ARR ? opt_rows_arr[opt_page] : game_set == SET_IBARA ? opt_rows_ib[opt_page] : opt_rows_blk[opt_page];
}

static int opt_nrows(void)
{
	const unsigned char *r = opt_rowlist();
	int n = 0;

	while (r[n] != OPT_N)
		n++;
	return n;
}

static int opt_row(int k)
{
	return opt_rowlist()[k];
}

/* test 55: AUTO SHOT's rate (ibara's ini; Kuro BL's 30 Hz of test 48) and its cycle in game frames:
 * a press every 60 / hz logic frames, down for half of them (rounded down); test 71: pad's (0 = P1, 1 = P2) */
static int ctl_pad; /* test 71: the controls page's pad (P1 CONTROLS 0, P2 CONTROLS 1) */

static int af_hz(int pad)
{
	return game_set == SET_IBARA ? cfg.autofire_hz[pad ? 1 : 0] : 30;
}

static unsigned af_period(int pad)
{
	return (unsigned)(60 / af_hz(pad));
}

static const char *const bullet_names[3] = {"NORMAL", "COLOR", "COLORLESS"}; /* the PS2's ARRANGE CONFIG */
static void bullets_step(int d);

/* row i's value as the page shows it (14 characters at most) */
static void opt_value(int i, char *s, size_t n)
{
	switch (i) {
	case OPT_SPECIAL:
		snprintf(s, n, "%s", ARR ? "NOT IN ARRANGE" : game_set != SET_IBARA ? "IBARA ONLY" : cfg.special ? "ON" : "OFF");
		break;
	case OPT_PICTURE:
		snprintf(s, n, "%s", cfg.picture == PIC_FULL ? "FULL" : cfg.picture == PIC_CUSTOM ? "CUSTOM" : "INTEGER");
		break;
	case OPT_PSIZE: case OPT_PXSIZE: case OPT_PYSIZE: { /* test 89: the shape's CUSTOM size, width, height */
		const int sh = pic_shape(), k = i == OPT_PSIZE ? cfg.pic_size[sh] : i == OPT_PXSIZE ? cfg.pic_sx[sh] :
		                                cfg.pic_sy[sh];
		snprintf(s, n, "%d.%d%%", k / 10, k % 10);
		break;
	}
	case OPT_PXPOS: case OPT_PYPOS: /* test 89: its centre's place */
		snprintf(s, n, "%+d", i == OPT_PXPOS ? cfg.pic_x[pic_shape()] : cfg.pic_y[pic_shape()]);
		break;
	case OPT_SMOOTH: snprintf(s, n, "%s", cfg.smooth ? "ON" : "OFF"); break; /* test 89 */
	case OPT_BRIGHT: snprintf(s, n, "%d%%", cfg.brightness); break; /* test 91 */
	case OPT_TATE: snprintf(s, n, "%s", cfg.tate == TATE_LEFT ? "LEFT" : cfg.tate == TATE_RIGHT ? "RIGHT" : "OFF"); break;
	case OPT_ASPECT:
		snprintf(s, n, "%s", cfg.aspect == ASPECT_4_3 ? "4:3" : cfg.aspect == ASPECT_16_9 ? "16:9" :
		         vmode.is_widescreen ? "AUTO (16:9)" : "AUTO (4:3)");
		break;
	case OPT_SCANLINES: snprintf(s, n, "%s", cfg.scanlines ? "ON" : "OFF"); break;
	case OPT_STRENGTH: snprintf(s, n, "%d%%", cfg.scanline_strength); break;
	case OPT_CARD: snprintf(s, n, "%s", cfg.card ? "ON" : "OFF"); break;
	case OPT_SAVE: snprintf(s, n, "%s", cfg.save ? "ON" : "OFF"); break;
	case OPT_RECORD: snprintf(s, n, "%s", cfg.record ? "ON" : "OFF"); break;
	case OPT_FRAMELOG: snprintf(s, n, "%s", cfg.framelog ? "ON" : "OFF"); break;
	case OPT_NETLOG: snprintf(s, n, "%s (PORT %u)", cfg.netlog ? "ON" : "OFF", cfg.netlog_port); break;
	case OPT_AUTOFIRE: snprintf(s, n, "%d HZ", af_hz(ctl_pad)); break;
	case OPT_BACK: snprintf(s, n, "%s", cfg.back_pause ? "PAUSE" : "COIN"); break;
	case OPT_PLAYER: snprintf(s, n, "%dP SIDE", sm_side + 1); break;
	case OPT_GADGETS: snprintf(s, n, "%s", cfg.gadgets ? "ON" : "OFF"); break;
	case OPT_CONTROLS: case OPT_CONTROLS2: case OPT_M3: case OPT_DEBUG: case OPT_SOUND: case OPT_SCREEN: /* test 70: no
	                                                                                                   * "A = OPEN" */
	case OPT_GSEL: /* test 72 */
	case OPT_PLAY: /* test 81 */
	case OPT_LOAD: /* test 84 */
	case OPT_SERVICE: /* test 85 */
	case OPT_RANKS:   /* test 101 */
	case OPT_OPTIONS: /* test 89 (user's todo list: "remove green line "ask" next to options": test 88 left it to the
	                   * default case, GAME MENU's value) */
	case OPT_TRAIN:   /* test 89 */
		s[0] = 0;
		break;
	case OPT_REPLAYS: /* test 86: how many; test 87: of RP_KEEP */
		if (rp_ok)
			snprintf(s, n, "%d/%d", hdd_rp_count(), RP_KEEP);
		else
			s[0] = 0;
		break;
	case OPT_BULLETS: snprintf(s, n, "%s", bullet_names[cfg.arr_bullets % 3]); break; /* test 82 */
	case OPT_GAME: snprintf(s, n, "%s", cfg.game == GAME_ASK ? "ASK" : cfg.game == SET_IBARA ? "IBARA" : "KURO BL"); break;
	case OPT_STYLE: snprintf(s, n, "PS2"); break; /* test 120: retained index, fixed menu style */
	case OPT_LANG: snprintf(s, n, "%s", cfg.language == LANG_JAPANESE ? "JAPANESE" : "ENGLISH"); break;
	case OPT_ACH: snprintf(s, n, "%s", cfg.achievements ? "ON" : "OFF"); break; /* test 106 */
	case OPT_TOAST: snprintf(s, n, "%s", achx_toast_name(cfg.toast_pos)); break;
	case OPT_STAFF: snprintf(s, n, "%s", cfg.staff_keep ? "PROTECTED" : "SKIPPABLE"); break; /* test 109 */
	case OPT_EXINV: snprintf(s, n, "%s", ex_inv ? "ON" : "OFF"); break; /* test 108 */
	case OPT_EXINFB: snprintf(s, n, "%s", ex_infb ? "ON" : "OFF"); break;
	case OPT_EXLIVES: snprintf(s, n, "%s", ex_lives ? "ON" : "OFF"); break; /* test 110 */
	case OPT_EXHIT: snprintf(s, n, "%s", ex_hit == HITBOX_ALL ? "ALL" : ex_hit ? "PLAYER" : "OFF"); break;
	case OPT_EXREPLAY: snprintf(s, n, "%s", cfg.replay_save ? "ON" : "OFF"); break; /* test 118 */
	default: s[0] = 0; break; /* test 89: a row without a value shows none */
	}
}

/* row i one step on (d = 1) or back (d = -1): strength in tens, stopping at 0 and 100, the
 * others round; the picture rows and the card at once */
static void opt_step(int i, int d)
{
	char v[40];
	int k;

	switch (i) {
	case OPT_SPECIAL:
		if (game_set != SET_IBARA || ARR)
			return;
		cfg.special ^= 1;
		break;
	case OPT_PICTURE: cfg.picture = (cfg.picture + 3 + d) % 3; break; /* test 88: INTEGER, FULL, CUSTOM */
	case OPT_TATE: cfg.tate = (cfg.tate + 3 + d) % 3; break;
	case OPT_ASPECT: cfg.aspect = (cfg.aspect + 1 + 3 + d) % 3 - 1; break; /* auto (-1), 4:3 (0), 16:9 (1) */
	case OPT_SCANLINES: cfg.scanlines ^= 1; break;
	case OPT_STRENGTH: /* the next ten up or down (an ini's 55 goes to 60 or 50) */
		cfg.scanline_strength = d > 0 ? (cfg.scanline_strength / 10 + 1) * 10 : ((cfg.scanline_strength + 9) / 10 - 1) * 10;
		if (cfg.scanline_strength < 0)
			cfg.scanline_strength = 0;
		if (cfg.scanline_strength > 100)
			cfg.scanline_strength = 100;
		break;
	case OPT_CARD: cfg.card ^= 1; break;
	case OPT_SAVE: cfg.save ^= 1; break;
	case OPT_RECORD: cfg.record ^= 1; break;
	case OPT_FRAMELOG: cfg.framelog ^= 1; break;
	case OPT_NETLOG: cfg.netlog ^= 1; break;
	case OPT_AUTOFIRE: /* test 55: 30, 20, 15, 12, 10, round; test 57: RIGHT = faster (user) */
		for (k = 0; k < AUTOFIRE_RATES && autofire_rates[k] != cfg.autofire_hz[ctl_pad]; k++)
			;
		cfg.autofire_hz[ctl_pad] = autofire_rates[(k % AUTOFIRE_RATES + AUTOFIRE_RATES - d) % AUTOFIRE_RATES];
		break;
	case OPT_BACK: cfg.back_pause ^= 1; break;
	case OPT_CONTROLS: /* sm_frame opens the page */
	case OPT_CONTROLS2:
	case OPT_M3:
	case OPT_DEBUG:
	case OPT_SOUND:
	case OPT_SCREEN:
	case OPT_GSEL: /* test 72: sm_frame arms it, then asks for the launcher */
	case OPT_PLAY: /* test 81: sm_frame opens the PLAY page */
	case OPT_LOAD: /* test 84: and the SLOTS page */
	case OPT_SERVICE: /* test 85: sm_frame arms it, then presses S3 (svc_left) */
	case OPT_RANKS:   /* test 101: sm_frame arms it, then rank_init */
	case OPT_OPTIONS: case OPT_TRAIN: /* test 89: pages (sm_frame) */
	case OPT_PSIZE: case OPT_PXSIZE: case OPT_PYSIZE: case OPT_PXPOS: case OPT_PYPOS: /* test 89: pic_input */
		return;
	case OPT_SMOOTH: cfg.smooth ^= 1; break; /* test 89: present() reads it */
	case OPT_BRIGHT: /* test 91: 5% steps (an ini's 52 goes to 55 or 50), BRIGHT_MIN .. BRIGHT_MAX; present() reads it */
		cfg.brightness = d > 0 ? (cfg.brightness / 5 + 1) * 5 : ((cfg.brightness + 4) / 5 - 1) * 5;
		cfg.brightness = cfg.brightness < BRIGHT_MIN ? BRIGHT_MIN : cfg.brightness > BRIGHT_MAX ? BRIGHT_MAX : cfg.brightness;
		break;
	case OPT_BULLETS: /* test 82: host_set logs it and counts the change */
		bullets_step(d);
		return;
	case OPT_PLAYER: /* test 55: not an ini setting, kept between games as ibara's start menu's */
		sm_side ^= 1;
		log_printf(C_WHITE, "OPTIONS: PLAYER %dP SIDE (EMU %u)", sm_side + 1, (unsigned)frame_count);
		return;
	case OPT_GADGETS: cfg.gadgets ^= 1; break; /* test 58: at once (present) */
	case OPT_GAME: cfg.game = (cfg.game + 1 + 3 + d) % 3 - 1; break; /* ask (-1), ibara (0), ibarablk (1) */
	case OPT_STYLE: cfg.menu_style = MENU_PS2; break; /* test 120: fixed menu style */
	case OPT_LANG: cfg.language ^= 1; break;
	case OPT_ACH: cfg.achievements ^= 1; break; /* test 106: ach_step reads it (ON only after sm_frame's question) */
	case OPT_TOAST: cfg.toast_pos = (cfg.toast_pos + ACHX_TOAST_N + d) % ACHX_TOAST_N; break;
	case OPT_STAFF: cfg.staff_keep ^= 1; break; /* test 109: sm_frame reads it */
	case OPT_EXREPLAY: cfg.replay_save ^= 1; break; /* test 118: an ini setting (a run's end reads it) */
	case OPT_EXINV: case OPT_EXINFB: case OPT_EXHIT: case OPT_EXLIVES: /* test 108: not ini settings (no opt_changes,
	                                                                     * no save) */
		if (i == OPT_EXLIVES)
			ex_lives ^= 1;
		else if (i == OPT_EXINV)
			ex_inv ^= 1;
		else if (i == OPT_EXINFB)
			ex_infb ^= 1;
		else
			ex_hit = (ex_hit + 3 + d) % 3;
		opt_value(i, v, sizeof(v));
		log_printf(C_YELLOW, "EX-DEBUG: %s %s (EMU %u)", opt_names[i], v, (unsigned)frame_count);
		return;
	default: return; /* test 89: no row changes GAME MENU but its own */
	}
	opt_changes++;
	opt_value(i, v, sizeof(v));
	log_printf(C_WHITE, "%s%s %s %s (EMU %u)", sm_state == SM_CTRL ? "CONTROLS:" : menu_paused ? "PAUSE SCREEN:" : "OPTIONS:",
	           sm_state == SM_CTRL ? (ctl_pad ? " P2" : " P1") : "", opt_names[i], v,
	           (unsigned)frame_count); /* test 67: AUTOFIRE from the controls page */
	if ((i >= OPT_PICTURE && i <= OPT_STRENGTH) || i == OPT_GADGETS) /* test 60: GADGETS on 4:3 move the game */
		layout_apply("THE OPTIONS");
	if (i == OPT_TOAST) /* test 106: at once */
		achx_toast_position(cfg.toast_pos);
	if (i == OPT_CARD) { /* as RB */
		card_on = cfg.card;
		card_on_at = card_handoffs;
	}
	if (i == OPT_STYLE && cfg.menu_style == MENU_PS2 && !ps2menu_ok()) /* test 98: kept for a later ps2data.bin */
		log_printf(C_YELLOW, "OPTIONS: MENU STYLE PS2 KEPT, THE MENUS STAY ARCADE (%s)", ps2menu_why());
	if (i == OPT_LANG && cfg.language == LANG_JAPANESE && !menu_ja())
		log_printf(C_YELLOW, "OPTIONS: LANGUAGE JAPANESE KEPT, THE HELPS STAY ENGLISH (%s)", !menu_ps2() ?
		           "MENU STYLE IS ARCADE" : ps2menu_why());
}

/* Test 89 (user's todo list 2026-10-27 20:20: ""adjust picture" should be eliminated, put the options of it inside
 * "general screen"", "adjusted by left/right toggle for size, X position, Y position, also add individual X and Y size
 * adjustment toggles"): GENERAL SCREEN's (and the pause's SCREEN page's) rows SIZE, X SIZE, Y SIZE, X POSITION and Y
 * POSITION under PICTURE SIZE, kept per display shape (pic_shape) as test 88's ADJUST PICTURE kept them; X and Y as the
 * player sees the game (tate: turned with it, alone_layout). LEFT / RIGHT one step (held: one every vblank after
 * PIC_REPEAT vblanks, larger ones after PIC_FAST), A = the row's default; a change makes PICTURE SIZE CUSTOM (GADGETS
 * off while CUSTOM, test 88's rule); the layouts built again as it goes (quiet), its log lines once the button is up */
#define PIC_REPEAT 20
#define PIC_FAST 60
static int pic_held, pic_moved; /* vblanks LEFT / RIGHT held; the row changed (its id + 1) and not logged yet */

static int pic_row(int id)
{
	return id >= OPT_PSIZE && id <= OPT_PYPOS;
}

static int *pic_val(int id, int *lo, int *hi, int *step, int *fast, int *def)
{
	const int sh = pic_shape();

	*def = 1000;
	*step = 5; /* 0.5% */
	*fast = 20;
	*lo = PIC_STRETCH_MIN;
	*hi = PIC_STRETCH_MAX;
	switch (id) {
	case OPT_PSIZE:
		*lo = PIC_SIZE_MIN;
		*hi = PIC_SIZE_MAX;
		return &cfg.pic_size[sh];
	case OPT_PXSIZE: return &cfg.pic_sx[sh];
	case OPT_PYSIZE: return &cfg.pic_sy[sh];
	default: /* the positions: 720ths of the screen's height */
		*def = 0;
		*step = 1;
		*fast = 6;
		*lo = -PIC_POS_MAX;
		*hi = PIC_POS_MAX;
		return id == OPT_PXPOS ? &cfg.pic_x[sh] : &cfg.pic_y[sh];
	}
}

/* every vblank while picture row id is the menu pad's (held = its buttons now, press = those new); 1 = it changed */
static int pic_input(int id, uint32_t held, uint32_t press)
{
	int lo, hi, step, fast, def, d = 0;
	int *const v = pic_val(id, &lo, &hi, &step, &fast, &def);
	const int was = *v, lr = (held & (A_LEFT | A_RIGHT)) != 0;
	const char *page = menu_paused ? "PAUSE SCREEN:" : "GENERAL SCREEN:";

	pic_held = lr ? pic_held + 1 : 0;
	if (press & A_MA)
		*v = def;
	else if (press & (A_LEFT | A_RIGHT))
		d = press & A_RIGHT ? 1 : -1;
	else if (lr && pic_held > PIC_REPEAT)
		d = held & A_RIGHT ? 1 : -1;
	*v += d * (pic_held > PIC_FAST ? fast : step);
	*v = *v < lo ? lo : *v > hi ? hi : *v;
	if (*v != was) {
		if (cfg.picture != PIC_CUSTOM) {
			cfg.picture = PIC_CUSTOM;
			log_printf(C_WHITE, "%s PICTURE SIZE CUSTOM (EMU %u)", page, (unsigned)frame_count);
		}
		lay_quiet = 1;
		layout_apply("GENERAL SCREEN");
		lay_quiet = 0;
		opt_changes++;
		pic_moved = id + 1;
	}
	if (pic_moved && !lr) { /* the button up (or A): its line and the picture's */
		char t[24];
		opt_value(pic_moved - 1, t, sizeof(t));
		log_printf(C_WHITE, "%s %s %s (EMU %u)", page, opt_names[pic_moved - 1], t, (unsigned)frame_count);
		pic_moved = 0;
		layout_apply("GENERAL SCREEN");
	}
	return *v != was;
}

/* test 81: the menu (Start in the attract), its page 0 */
static void opt_open(void)
{
	sm_state = SM_OPTS;
	opt_page = 0;
	opt_changes = 0;
	gsel_armed = 0; /* test 72 */
	svc_armed = 0;  /* test 85 */
	rk_armed = rk_said = 0; /* test 101 */
	ac_armed = 0;           /* test 106 */
	if (opt_sels[0] >= opt_nrows())
		opt_sels[0] = 0;
}

/* test 55: the game's controls into the bits the IO thread gives each pad button (map_pad), and
 * one log line of them */
/* test 58: the pad buttons set to shot, bomb and AUTO SHOT ("A", "B LT"), for the GADGETS labels; test 71: per pad;
 * test 79: and ARRANGE's buttons 3 and 4 (SUB WEAPON CHANGE, FORMATION CHANGE) and AIM LOCK (gadgets.h GD_KEY_*) */
static char gd_keys[CTL_PADS][GD_KEYS][16];

static void controls_apply(void)
{
	static const int fns[GD_KEYS] = {FN_B1, FN_B2, FN_AUTO, FN_B3, FN_B4, FN_LOCK};
	int i, k, p;

	for (p = 0; p < CTL_PADS; p++) {
		const int *c = cfg.ctl[p][CTL_SET];
		for (i = 0; i < CTL_N; i++)
			ctl_bits[p][i] = fn_bits[c[i]];
		lb_hash[p] = c[CTL_LB] == FN_OFF;
		for (k = 0; k < GD_KEYS; k++) {
			size_t n = 0;
			gd_keys[p][k][0] = 0;
			for (i = 0; i < CTL_N; i++)
				if (c[i] == fns[k] && n + 4 < sizeof(gd_keys[p][k]))
					n += (size_t)snprintf(gd_keys[p][k] + n, sizeof(gd_keys[p][k]) - n, "%s%s", n ? " " : "",
					                      settings_ctl_name(i));
		}
	}
}

static void controls_log(const char *head)
{
	char s[200];
	int p;

	for (p = 0; p < CTL_PADS; p++) {
		settings_ctl_text(p, CTL_SET, s, sizeof(s));
		log_printf(C_YELLOW, "%s P%d %s; AUTO SHOT %d HZ", head, p + 1, s, af_hz(p));
	}
}

/* the first pad button set to the card (for the log and the options' help); test 71: P1's, else P2's */
static const char *card_button(void)
{
	int i, p;

	for (p = 0; p < CTL_PADS; p++)
		for (i = 0; i < CTL_N; i++)
			if (cfg.ctl[p][CTL_SET][i] == FN_CARD)
				return settings_ctl_name(i);
	return "NO BUTTON";
}

/* leaving the page: with changes the ini asked for and, when restart allows it, the special
 * switch (1 = the game restarts; without restart, a special change waits for the page's next
 * leaving and is in the ini meanwhile) */
static int opt_leave(int restart)
{
	if (opt_changes) {
		settings_log("OPTIONS:");
		controls_log("OPTIONS: CONTROLS");
		settings_save_request();
		opt_changes = 0;
		if (cfg.netlog != netlog_started)
			log_printf(C_YELLOW, "NET: %s FROM THE NEXT POWER-ON", cfg.netlog ? "ON" : "OFF");
	} else {
		log_printf(C_WHITE, "OPTIONS: LEFT, NO CHANGES");
	}
	if (menu_ps2()) { /* test 98: the PS2 look's sounds and Japanese helps while the menu was open */
		unsigned asked, missing;
		char last[48];
		ps2m_ja_census(&asked, &missing, last, sizeof(last));
		log_printf(C_WHITE, "PS2 MENUS: %u MENU SOUNDS", menu_se_count);
		if (menu_ja())
			log_printf(missing ? C_YELLOW : C_WHITE, "PS2 MENUS: JAPANESE HELPS DRAWN %u, %u IN ENGLISH (NO TRANSLATION%s%.40s)",
			           asked, missing, missing ? ", LAST: " : "", missing ? last : "");
		menu_se_count = 0;
	}
	if (game_set == SET_IBARA && !ARR && cfg.special != special_on) {
		if (restart) {
			special_switch();
			return 1;
		}
		log_printf(C_YELLOW, "SPECIAL: THE GAME IS NO LONGER IDLE, THE SWITCH WAITS");
	}
	return 0;
}

/* Test 55: the controls page (CONTROLS on the options page): a row per mapped pad button (CTL_*),
 * LEFT / RIGHT (or A) step what it does through FN_* (FN_B4 = BUTTON 4 for ibara, WEAPON CHANGE for
 * Kuro BL), then DEFAULTS (A or RIGHT = test 54's buttons back); B or BACK = back to the options,
 * START plays. A change applies at once (controls_apply: the menus read the pad's own A and B, so
 * they work whatever the buttons do) and goes into the ini when the options are left.
 * Test 67 (user: "move the autofire setting frequency inside the control rebind option menu"): ibara's AUTOFIRE (AUTO
 * SHOT's rate, test 55's options row) after the buttons, before DEFAULTS (which leaves it as it is). */
enum { CTL_ROW_AF = CTL_N, CTL_ROW_DEF }; /* test 67: the rows after the buttons, by id */
static int ctl_sel;

static int ctl_nrows(void)
{
	return CTL_N + 1 + (game_set == SET_IBARA);
}

/* row k's id: a button (CTL_*), CTL_ROW_AF or CTL_ROW_DEF */
static int ctl_rowid(int k)
{
	return k < CTL_N ? k : k == CTL_N && game_set == SET_IBARA ? CTL_ROW_AF : CTL_ROW_DEF;
}

static void ctl_open(int pad)
{
	sm_state = SM_CTRL;
	ctl_pad = pad; /* test 71: P1 CONTROLS or P2 CONTROLS */
	log_printf(C_WHITE, "CONTROLS: P%d OPEN (EMU %u)", pad + 1, (unsigned)frame_count);
}

static void ctl_step(int row, int d)
{
	int *f;

	if (row == CTL_ROW_AF) {
		opt_step(OPT_AUTOFIRE, d); /* counts the change and logs it */
		return;
	}
	if (row == CTL_ROW_DEF) {
		if (d < 0)
			return;
		settings_ctl_defaults(ctl_pad, CTL_SET);
		log_printf(C_WHITE, "CONTROLS: P%d DEFAULTS (EMU %u)", ctl_pad + 1, (unsigned)frame_count);
	} else {
		f = &cfg.ctl[ctl_pad][CTL_SET][row];
		do /* test 78: AIM LOCK is ARRANGE's; test 82 (user: "delete rapid shot and button 4 in the toggles, since
		    * they're unused"): ibara reads neither button 3 nor 4 (test 68's work/g68/btn4) */
			*f = (*f + FN_N + d) % FN_N;
		while (!settings_fn_offered(CTL_SET, *f));
		log_printf(C_WHITE, "CONTROLS: P%d %s = %s (EMU %u)", ctl_pad + 1, settings_ctl_name(row),
		           settings_fn_name(CTL_SET, *f), (unsigned)frame_count);
	}
	opt_changes++;
	controls_apply();
}

/* Test 64: the M3 GADGETS page (M3 GADGETS on the options page; user: "an M3 gadgets option inside the options menu
 * to individually toggle on/off each gadget"): a row per gadget of the game (gadgets.h GD_*: Kuro BL has no FORMATION;
 * test 67: no HADOU, RAPID or ITEMS rows, CONTROLS STICK / TEXT / OFF), then ALL ON; LEFT / RIGHT (or A) turn one on
 * or off, at once (present() hands gadgets_mask the settings' every frame); into the ini when the options are left. B
 * or BACK = back to the options, START plays. Test 68 (user: "the M3 gadgets "all on" option should have an "all off"
 * option as well, by pressing left/right instead of A"): the ALL row's LEFT / RIGHT turn every gadget of the game off
 * when all are on, else on (its value ON / OFF / MIXED); A does nothing there. */
static int gp_sel;
#define GP_COOP (GD_N + 1) /* test 71: the CO-OP row (user: "co-op gadgets, to be a separate toggle in the gadgets menu") */

static int gp_nrows(void)
{
	int g, n = 2; /* + CO-OP, ALL */

	for (g = 0; g < GD_N; g++)
		n += gadgets_in_game(g, game_set != SET_IBARA); /* test 76: XTC Kuro BL's */
	return n;
}

/* row k's gadget (GP_COOP, then GD_N = ALL) */
static int gp_row(int k)
{
	int g;

	for (g = 0; g < GD_N; g++)
		if (gadgets_in_game(g, game_set != SET_IBARA) && k-- == 0)
			return g;
	return k == 0 ? GP_COOP : GD_N;
}

/* test 88 (user: "when doing this, the stick controls gadget is automatically disabled"): Kuro BL's XTC FULL leaves no
 * room for CONTROLS' stick (its text goes on, under MUSIC when it does not fit; gadgets.c). Test 89 (user's todo list:
 * ""m3 gadgets" stick should not be selectable at all when XTC is full size"): while it is FULL, CONTROLS is TEXT or
 * OFF (gp_step), a STICK setting shown and drawn as TEXT; cfg.ctl_text is left as it was (the ini's one setting for the
 * three games: ibara and ARRANGE, and Kuro BL's XTC SMALL, keep the stick) */
static int ctl_stick_off(void)
{
	return game_set != SET_IBARA && cfg.gadget[GD_XTC] && cfg.xtc_full;
}

/* the CONTROLS style as shown: text (1) or the stick (0) */
static int ctl_text_now(void)
{
	return cfg.ctl_text || ctl_stick_off();
}

/* test 68: the game's gadgets all on (1), all off (0) or some of each (-1) */
static int gp_all(void)
{
	int g, on = 0, n = 0;

	for (g = 0; g < GD_N; g++)
		if (gadgets_in_game(g, game_set != SET_IBARA)) {
			n++;
			on += cfg.gadget[g] != 0;
		}
	return on == n ? 1 : on == 0 ? 0 : -1;
}

static void gp_open(void)
{
	sm_state = SM_GADG;
	if (gp_sel >= gp_nrows())
		gp_sel = 0;
	log_printf(C_WHITE, "M3 GADGETS: OPEN (EMU %u)", (unsigned)frame_count);
}

/* row k one step on (d = 1: RIGHT, A) or back (d = -1: LEFT): on / off; test 67: CONTROLS goes round STICK, TEXT,
 * OFF (user: "a new slimmer option toggle between classic joystick (the current one) and text inputs") */
static void gp_step(int k, int d)
{
	const int g = gp_row(k);
	int i;

	if (g == GP_COOP) { /* test 71: both players' gadgets while two play */
		cfg.coop ^= 1;
		log_printf(C_WHITE, "M3 GADGETS: CO-OP %s (EMU %u)", cfg.coop ? "ON" : "OFF", (unsigned)frame_count);
	} else if (g == GD_N) { /* test 68: every one of the game's off when all are on, else on */
		const int on = gp_all() != 1;
		for (i = 0; i < GD_N; i++)
			if (gadgets_in_game(i, game_set != SET_IBARA))
				cfg.gadget[i] = on;
		log_printf(C_WHITE, "M3 GADGETS: ALL %s (EMU %u)", on ? "ON" : "OFF", (unsigned)frame_count);
	} else if (g == GD_CONTROLS && ctl_stick_off()) { /* test 89: TEXT and OFF alone */
		const int v = cfg.gadget[g] ? 2 : 1;
		cfg.gadget[g] = v != 2;
		log_printf(C_WHITE, "M3 GADGETS: CONTROLS %s (EMU %u, XTC FULL: NO STICK)", v == 2 ? "OFF" : "TEXT",
		           (unsigned)frame_count);
	} else if (g == GD_CONTROLS) {
		const int v = ((cfg.gadget[g] ? cfg.ctl_text : 2) + 3 + d) % 3; /* 0 stick, 1 text, 2 off */
		cfg.gadget[g] = v != 2;
		if (v != 2)
			cfg.ctl_text = v;
		log_printf(C_WHITE, "M3 GADGETS: CONTROLS %s (EMU %u)", v == 2 ? "OFF" : v ? "TEXT" : "STICK",
		           (unsigned)frame_count);
	} else if (g == GD_XTC) { /* test 88 (user: "make a toggle to display the ship's full scale sprite, hitbox and
		                       * scratching area"): SMALL, FULL, OFF as CONTROLS' */
		const int v = ((cfg.gadget[g] ? cfg.xtc_full : 2) + 3 + d) % 3; /* 0 small, 1 full, 2 off */
		cfg.gadget[g] = v != 2;
		if (v != 2)
			cfg.xtc_full = v;
		log_printf(C_WHITE, "M3 GADGETS: XTC %s (EMU %u)", v == 2 ? "OFF" : v ? "FULL" : "SMALL", (unsigned)frame_count);
	} else {
		cfg.gadget[g] ^= 1;
		log_printf(C_WHITE, "M3 GADGETS: %s %s (EMU %u)", gadgets_name(g), cfg.gadget[g] ? "ON" : "OFF",
		           (unsigned)frame_count);
	}
	opt_changes++;
}

/* Test 68 (user 2026-10-25: "an update to the options screen: sound menu. music/sfx/voice/attract volume a mute
 * toggle, and sound test for each song/voice clip"): the SOUND page (SOUND on the options page, A opens it). MUSIC,
 * SFX and VOICE = their volumes, LEFT / RIGHT in tens from 0 to 100% (the phrases of the game's own sound list:
 * music 0-33, effects 34-127, voices 128-255; source/sound.c); ATTRACT = how much of them the attract gets (the game
 * idle SM_IDLE vblanks, as for the menu: the demos, the title, the ranking); MUTE = no sound at all. MUSIC TEST = each
 * track of the game's list (ibara's sound test order, 0C1F5CD4's names) and the ones it leaves out, as its driver
 * plays it: the intro, then the loop again and again (A plays, A again stops); VOICE TEST = each voice clip once (A).
 * The tests play on a chip of
 * their own (runtime/ymz770.c), the game's sound fading out meanwhile, at the page's volumes without the attract's
 * share; they stop when the page is left. The volumes act at once (snd_frame every vblank) and go into the ini when
 * the options are left. B or BACK = back to the options, START plays. */
/* test 89 (user's todo list: "SFX sound test?"): SFX TEST = each effect phrase (34-127: the game's list has no names
 * for them, so their numbers) once (A), as VOICE TEST's voices */
/* test 99 (the PS2 SOUNDTRACK toggle, the todo list's first item): SOUNDTRACK = ARCADE (the board's music, as before)
 * or PS2 (the PS2 port's soundtrack streams from ps2music.bin: source/ps2music.c), in the pause's page too (it acts
 * from the next track on); PS2 is dimmed with the reason in the grey line while ps2music.bin is not there or not the
 * right one (the game stays ARCADE). With PS2, MUSIC TEST plays a track's stream where it has one */
/* test 112 (user: "add mono/stereo audio toggles in sound options and pause sound options (all three games)"): AUDIO
 * after SOUNDTRACK (before the tests: the pause's page has it too), STEREO or MONO (sound.c's sound_mono, the last mix) */
enum { SR_MUSIC, SR_SFX, SR_VOICE, SR_ATTRACT, SR_MUTE, SR_TRACK, SR_AUDIO, SR_MTEST, SR_STEST, SR_VTEST, SR_N };
static const char *const sr_names[SR_N] = {"MUSIC", "SFX", "VOICE", "ATTRACT", "MUTE", "SOUNDTRACK", "AUDIO",
                                           "MUSIC TEST", "SFX TEST", "VOICE TEST"};
static const char *const sr_helps[SR_MTEST] = {
	"MUSIC VOLUME", "SOUND EFFECTS VOLUME", "VOICE VOLUME", "ATTRACT SCREEN VOLUME", "ALL SOUND OFF", /* test 70 */
	"ARCADE OR PS2 PORT SOUNDTRACK", /* test 99 */
	"STEREO OR MONO SOUND",          /* test 112 */
};
struct snd_track {
	const char *name;
	signed char intro, loop; /* sequences; loop = intro: that one again and again; -1: once */
};
/* work/g68/snd/seqdump.py: every sequence keys one phrase on channel 0; the pairs as the game plays them (test 18's
 * run, the sound test); 1 and 11-12 are in neither game's list (Kuro BL's 1 is empty), Kuro BL's 0 is its own track */
static const struct snd_track snd_tracks[] = {
	{"SHOW TIME", 15, 16}, {"SKY HIGH", 17, 18}, {"LIKE A ROLLING STONE", 19, 20}, {"ENDRESS TRAIN", 21, 22},
	{"ROBOT NO28", 23, 24}, {"ROSE GARDEN", 25, 26}, {"ENDING", 2, 3}, {"GUARDIAN ANGEL", 9, 10},
	{"ROSE OF ZEAL", 7, 8}, {"GAME OVER", 6, -1}, {"RANKING", 4, 5}, {"BONDS OF STEEL", 27, 28},
	{"THE FAMILY'S WORK", 29, 30}, {"AIR POLLUTION", 31, 32}, {"MOTHER TERESA", 33, 33}, {"NO NAME", 0, -1},
	{"UNLISTED (SEQ 11-12)", 11, 12}, {"UNLISTED (SEQ 1)", 1, -1},
};
#define SND_TRACKS_IB 18
#define SND_TRACKS_BLK 17 /* no sequence 1; its 0 loops (a 48 s track) */
/* phrases 128-193, ibara's names for them (0C1F5ED0; Kuro BL's are the same phrases) */
#define SND_VOICE0 128
static const char *const snd_voices[] = {
	"HAHAHA", "HAHAHA2", "ASOBO", "KOREIJOH", "IRASSYAI", "KAKATTE", "KASUMIHA", "KOITURA", "MADAMADA", "MAMA_GOMEN",
	"GOMEN", "MOUICHIDO", "MINNANOKATAKI", "MUNEN", "NIGERU", "NIGERUIGAINI", "KOKOHA", "KOITURATEGOWAI",
	"SEMETEWATASHIMO", "UCHIKIRENAI", "FUFUFUFU", "FUFUFUFUFU", "HEHE", "FUFUFU", "KIREINI", "YOKUMO", "BOMB",
	"EXTEND", "POWER UP", "SPECIAL POWER UP", "AAAAAA", "AAAAA", "ASOBO (OLD)", "GOMEN (OLD)", "KAKATTE (OLD)",
	"KOITURA (OLD)", "KOKOHA (OLD)", "KYA", "KYAAA", "ATOHAONEGAI (OLD)", "FAA", "YAAA", "1P BOMBER", "1P HADOUGUN",
	"1P IKUZE", "1P SYOUJUN", "1P UWAAAAA", "1P YOSHI", "2P BOMBER", "2P HADOUGUN", "2P IKUZE", "2P SYOUJUN",
	"2P WAAAA", "2P YOSHI", "THREEWAY", "FIVEWAY", "BURNAR", "GATLING", "HOMING", "MACHINEGUN", "NAPALM", "OPTION",
	"ROCKET", "COMPLETE", "GAMEOVER", "IBARA",
};
#define SND_VOICES ((int)(sizeof(snd_voices) / sizeof(snd_voices[0])))
#define SND_SFX0 34 /* test 89: the effects, phrases 34-127 */
#define SND_SFXS 94
static int snd_sel, snd_track, snd_voice, snd_sfx;
static int snd_music_on, snd_music_seen; /* a track asked for; the test chip has been seen playing it */
static unsigned snd_tests;
static u64 snd_se_quiet; /* test 101: frame_count + 1 of a music test press made while its music played */

static int snd_ntracks(void)
{
	return game_set == SET_IBARA ? SND_TRACKS_IB : SND_TRACKS_BLK;
}

static struct snd_track snd_track_of(int k)
{
	struct snd_track t = snd_tracks[k];

	if (game_set != SET_IBARA && t.intro == 0)
		t.loop = 0;
	return t;
}

/* channel 0's volume as the game's driver keeps it while a track plays (its sequences write 0x40; its 1 kHz timer
 * f_0C04E080 / blk_f_0C05F8F4 writes the level of the BGM list's entry every ms; work/g68/vol, bgmtab.py: ibara's
 * table 0C1F5520 -> lists 0C152AA0, Kuro BL's 0C206924 -> 0C164FD0 read from RAM, its ROM being compressed; the
 * register logs agree), by the track's intro sequence. Not in a game's list: ibara 0, 1 (an unused list: 0x46), 11
 * (0x46, its usual level); Kuro BL 15 (Show Time) and 17 (Sky High: its list has 0, silent in its own sound test) at
 * 0x6C, 11 (an unused list: 0x64) */
static int snd_track_vol(int seq)
{
	static const uint8_t ib[34] = {
		0x46, 0x46, 0x46, 0x46, 0x46, 0x46, 0x46, 0x46, 0x46, 0x46, 0x46, 0x46, 0x46, 0x46, 0x46, 0x46, 0x46,
		0x5A, 0x5A, 0x46, 0x46, 0x46, 0x46, 0x46, 0x46, 0x50, 0x50, 0x5A, 0x5A, 0x5A, 0x5A, 0x5A, 0x5A, 0x5A,
	};
	static const uint8_t blk[34] = {
		0x3D, 0x6C, 0x78, 0x78, 0x6E, 0x6E, 0x6E, 0x78, 0x78, 0x70, 0x70, 0x64, 0x64, 0x6C, 0x6C, 0x6C, 0x6C,
		0x6C, 0x6C, 0x6D, 0x6D, 0x6C, 0x6C, 0x64, 0x64, 0x7F, 0x7F, 0x77, 0x77, 0x7F, 0x7F, 0x76, 0x76, 0x7F,
	};

	if (seq < 0 || seq > 33)
		return 0;
	return game_set == SET_IBARA ? ib[seq] : blk[seq];
}

static void snd_open(void)
{
	sm_state = SM_SOUND;
	log_printf(C_WHITE, "SOUND: OPEN (EMU %u)", (unsigned)frame_count);
}

static void snd_music(int on)
{
	const struct snd_track t = snd_track_of(snd_track);

	snd_music_on = on;
	snd_music_seen = 0;
	if (!on) {
		ps2music_test(-1, 0); /* test 99 */
		sound_test_stop();
		log_printf(C_WHITE, "SOUND TEST: STOPPED (EMU %u)", (unsigned)frame_count);
		return;
	}
	/* test 99: with SOUNDTRACK PS2 the track's stream (the test chip still plays the track, hushed: its end, the game's
	 * fade); none for the tracks without one */
	ps2music_test(ps2music_active() && ps2music_has_seq(t.intro) ? t.intro : -1, snd_track_vol(t.intro));
	sound_test_music(t.intro, t.loop, snd_track_vol(t.intro));
	snd_tests++;
	if (t.loop < 0)
		log_printf(C_WHITE, "SOUND TEST: %02d %s, SEQUENCE %d ONCE (EMU %u)", snd_track + 1, t.name, t.intro,
		           (unsigned)frame_count);
	else if (t.loop == t.intro)
		log_printf(C_WHITE, "SOUND TEST: %02d %s, SEQUENCE %d AGAIN AND AGAIN (EMU %u)", snd_track + 1, t.name, t.intro,
		           (unsigned)frame_count);
	else
		log_printf(C_WHITE, "SOUND TEST: %02d %s, SEQUENCE %d, THEN %d AGAIN AND AGAIN (EMU %u)", snd_track + 1,
		           t.name, t.intro, t.loop, (unsigned)frame_count);
}

/* row k one step on (d = 1: RIGHT) or back (d = -1: LEFT); a = the pad's A */
static void snd_step(int k, int d, int a)
{
	static int *const vol[SR_MUTE] = {&cfg.vol_music, &cfg.vol_sfx, &cfg.vol_voice, &cfg.vol_attract};

	if (k < SR_MUTE) {
		int *v = vol[k];
		if (a)
			return;
		*v = d > 0 ? (*v / 10 + 1) * 10 : ((*v + 9) / 10 - 1) * 10; /* the next ten (an ini's 55: 60 or 50) */
		*v = *v < 0 ? 0 : *v > 100 ? 100 : *v;
		log_printf(C_WHITE, "SOUND: %s %d%% (EMU %u)", sr_names[k], *v, (unsigned)frame_count);
	} else if (k == SR_MUTE) {
		cfg.mute ^= 1;
		log_printf(C_WHITE, "SOUND: MUTE %s (EMU %u)", cfg.mute ? "ON" : "OFF", (unsigned)frame_count);
	} else if (k == SR_TRACK) { /* test 99 */
		cfg.soundtrack = cfg.soundtrack == TRACK_PS2 ? TRACK_ARCADE : TRACK_PS2;
		ps2music_enable(cfg.soundtrack == TRACK_PS2);
		log_printf(C_WHITE, "SOUND: SOUNDTRACK %s%s%s (EMU %u)", cfg.soundtrack == TRACK_PS2 ? "PS2" : "ARCADE",
		           cfg.soundtrack == TRACK_PS2 && ps2music_state() != PS2M_OK ? ": NOT AVAILABLE, " : "",
		           cfg.soundtrack == TRACK_PS2 ? ps2music_why() : "", (unsigned)frame_count);
		if (snd_music_on) /* a test playing: again in the other soundtrack */
			snd_music(1);
	} else if (k == SR_AUDIO) { /* test 112 */
		cfg.mono ^= 1;
		sound_mono = cfg.mono;
		log_printf(C_WHITE, "SOUND: AUDIO %s (EMU %u)", cfg.mono ? "MONO" : "STEREO", (unsigned)frame_count);
	} else if (k == SR_MTEST) {
		if (snd_music_on) /* test 101 (user): A / LEFT / RIGHT on the music test while its music plays: no menu sound */
			snd_se_quiet = frame_count + 1;
		if (a) {
			snd_music(!snd_music_on);
			return;
		}
		snd_track = (snd_track + snd_ntracks() + d) % snd_ntracks();
		if (snd_music_on) /* playing: the next one at once */
			snd_music(1);
		return;
	} else if (k == SR_STEST) { /* test 89 */
		if (a) {
			sound_test_voice(SND_SFX0 + snd_sfx);
			snd_tests++;
			log_printf(C_WHITE, "SOUND TEST: SFX %d (EMU %u)", SND_SFX0 + snd_sfx, (unsigned)frame_count);
		} else {
			snd_sfx = (snd_sfx + SND_SFXS + d) % SND_SFXS;
		}
		return;
	} else {
		if (a) {
			sound_test_voice(SND_VOICE0 + snd_voice);
			snd_tests++;
			log_printf(C_WHITE, "SOUND TEST: VOICE %d %s (EMU %u)", SND_VOICE0 + snd_voice, snd_voices[snd_voice],
			           (unsigned)frame_count);
		} else {
			snd_voice = (snd_voice + SND_VOICES + d) % SND_VOICES;
		}
		return;
	}
	opt_changes++;
}

/* Test 97 (user: "(all three games) after a training play is over and goes back to the training menu, mute the
 * attract screen's "IBARA" and "KAKATTE", but only the first one"): from a load that opens the TRAINING page (vh_start)
 * the voices' factors are 0, so the next IBARA and the next KAKATTE (or its old take) the chip starts are silent (a
 * channel takes the factor when the phrase starts: ymz_phrase_starts tells it has, and the factor goes back for the
 * later ones); a run starting first ends the hush. snd_hush: vblanks muted after any load back to the attract (the
 * chip writes of the run not yet played when the queue was cut) */
static const int vh_phrase[] = {SND_VOICE0 + 65 /* IBARA */, SND_VOICE0 + 5 /* KAKATTE */,
                                SND_VOICE0 + 34 /* KAKATTE (OLD) */};
static const int vh_group[] = {0, 1, 1}; /* the old take is the same line */
#define VH_N 3
static int vh_on[VH_N];
static uint32_t vh_seen[VH_N];
static u16 vh_k[VH_N];
static int snd_hush;
#define SND_HUSH 4
static unsigned vh_left; /* vblanks the hush may still last (an attract slot taken with a muted IBARA playing has no
                          * start of it to wait for) */
#define VH_MAX 900

static void vh_end(int g, const char *why)
{
	int k;

	for (k = 0; k < VH_N; k++)
		if (vh_on[k] && (g < 0 || vh_group[k] == g)) {
			ymz_phrase_k[vh_phrase[k]] = vh_k[k];
			vh_on[k] = 0;
			if (why)
				log_printf(C_WHITE, "SOUND: %s %s (EMU %u)", snd_voices[vh_phrase[k] - SND_VOICE0], why,
				           (unsigned)frame_count);
		}
}

static void vh_start(void)
{
	int k;

	vh_end(-1, NULL);
	for (k = 0; k < VH_N; k++) {
		vh_k[k] = ymz_phrase_k[vh_phrase[k]];
		vh_seen[k] = ymz_phrase_starts[vh_phrase[k]];
		ymz_phrase_k[vh_phrase[k]] = 0;
		vh_on[k] = 1;
	}
	vh_left = VH_MAX;
	log_printf(C_WHITE, "SOUND: THE ATTRACT'S FIRST IBARA AND KAKATTE MUTED (EMU %u)", (unsigned)frame_count);
}

static void vh_frame(void)
{
	int k;

	if (sm_idle < SM_IDLE || tr_run) {
		vh_end(-1, "UNMUTED: A RUN STARTED");
		return;
	}
	if (vh_left && !--vh_left) {
		vh_end(-1, "UNMUTED: NOT HEARD IN 15 S");
		return;
	}
	/* test 101: an IBARA / KAKATTE already playing in the loaded attract (the slot kept on the title) hushed too */
	if (vh_on[0] || vh_on[1] || vh_on[2])
		ymz_hush_keyed();
	for (k = 0; k < VH_N; k++)
		if (vh_on[k] && ymz_phrase_starts[vh_phrase[k]] != vh_seen[k]) {
			log_printf(C_WHITE, "SOUND: %s PLAYED MUTED, THE LATER ONES HEARD (EMU %u)",
			           snd_voices[vh_phrase[k] - SND_VOICE0], (unsigned)frame_count);
			vh_end(vh_group[k], NULL);
		}
}

/* every vblank (inputs_update): the volumes to the sound thread (the attract's share while the game is idle), the
 * test stopped once the page is not up, a track played once seen to its end */
static void snd_frame(void)
{
	const int busy = sound_test_busy();

	ps2music_enable(cfg.soundtrack == TRACK_PS2); /* test 99 */
	sound_mono = cfg.mono;                        /* test 112 */
	ps2music_vblank();
	if (sm_state != SM_SOUND && (snd_music_on || busy)) {
		snd_music_on = 0;
		ps2music_test(-1, 0); /* test 99 */
		sound_test_stop();
		log_printf(C_WHITE, "SOUND TEST: STOPPED, THE PAGE WAS LEFT (EMU %u)", (unsigned)frame_count);
	} else if (snd_music_on && busy) {
		snd_music_seen = 1;
	} else if (snd_music_on && snd_music_seen) {
		snd_music_on = 0;
		log_printf(C_WHITE, "SOUND TEST: THE TRACK ENDED (EMU %u)", (unsigned)frame_count);
	}
	/* the attract = idle for SM_IDLE vblanks, as the menu's Start (ibara's byte is 0 for a vblank at each stage start:
	 * sm_idle 1 there; the harness's va50 run dipped for it) */
	vh_frame(); /* test 97 */
	if (snd_hush > 0)
		snd_hush--;
	/* test 100 (user's list: with ATTRACT 0% "IBARA" bled in before a run and played out after the initials): the
	 * attract for the sound from the menu's idle, or once a run's initials are over (the CAVE logo: sm_logo), until a run
	 * or the service menu; the one-vblank dips of the game's byte (sm_idle back to 0 at a demo's stage start) keep it */
	if (sm_run || sm_test)
		snd_att = 0;
	else if (sm_idle >= SM_IDLE || (sm_after && sm_logo))
		snd_att = 1;
	sound_levels(cfg.vol_music, cfg.vol_sfx, cfg.vol_voice, cfg.vol_attract, snd_att,
	             cfg.mute || tr_turbo || boot_turbo || snd_hush, sm_state == SM_SENDING); /* IKUZE stays at 100%; test
	                                                                                      * 89: START AT BOSS's skip
	                                                                                      * is silent; test 112: the
	                                                                                      * boot's too */
}

/* the start menu's play: ibara's command on the chosen side's port, Kuro BL's Start on the pad's;
 * test 55: Kuro BL's on its PLAYER row's side too */
static void sm_play(void)
{
	sm_state = SM_SENDING;
	sm_k = sm_try = 0;
	sm_cut_logged = 0;
	sm_volley_cut = 0; /* test 98 */
	sm_plays++;
	sm_svc = 0; /* test 66: the run this starts is a run, on the logos too */
	pad_swap = sm_pad ^ sm_side;
	if (game_set == SET_IBARA)
		log_printf(C_GREEN, "MENU: PLAY %dP %s %s TYPE %c (PAD %d, EMU %u): PAD 0 = P%d, PAD 1 = P%d", sm_side + 1,
		           sm_ships[sm_side], sm_modes[sm_mode], 'A' + sm_type, sm_pad, (unsigned)frame_count, 1 + pad_swap,
		           2 - pad_swap);
	else
		log_printf(C_GREEN, "MENU: PLAY %dP %s (PAD %d, EMU %u): PAD 0 = P%d, PAD 1 = P%d", sm_side + 1,
		           sm_ships[sm_side], sm_pad, (unsigned)frame_count, 1 + pad_swap, 2 - pad_swap);
}

/* ---- test 81: the PLAY page, DIP SWITCHES, ARRANGE's BULLET DESIGN ------------------------------------------------ */

/* the PLAY page's rows (an SM_ROW_* list ending at SM_ROWS) */
static const unsigned char *sm_rowlist(void)
{
	if (sm_train) /* test 89 */
		return ARR ? sm_rows_arr_tr : game_set != SET_IBARA ? sm_rows_blk_tr : sm_rows_ib_tr;
	return ARR ? sm_rows_arr : game_set != SET_IBARA ? sm_rows_blk : sm_rows_ib;
}

static int sm_nrows(void)
{
	const unsigned char *r = sm_rowlist();
	int n = 0;

	while (r[n] != SM_ROWS)
		n++;
	return n;
}

static int sm_rowid(int k)
{
	return sm_rowlist()[k];
}

/* Host settings the game reads, set by a menu (and recorded: "# host <frame> <what> <value>", recorder.h) or by the PC
 * harness replaying such a line (REPLAY_HOST), so a replay sees them at the same vblank: HOST_DIP0 + i = DIP SWITCHES'
 * row i (the game's EEPROM word and its RAM copy, dip_write), HOST_BULLETS = ARRANGE's BULLET DESIGN (its byte in
 * ARRANGE's RAM, read by arrange/arrange.c). host_val keeps the last of each: a save state's load puts the game's RAM
 * back to its moment, so host_reapply writes them again after one */
/* test 89: HOST_TR0 + TR_* = a training run's settings, HOST_TR_GO 1 = the next credit is a training run (0 = not);
 * test 91: the rows from TR_OLD_N on after HOST_TR_GO (HOST_TR_MORE + k - TR_OLD_N), test 89's numbers unchanged */
enum { HOST_DIP0 = 0, HOST_BULLETS = 8, HOST_TR0 = 9, HOST_TR_GO = HOST_TR0 + TR_OLD_N, HOST_TR_MORE = HOST_TR_GO + 1,
       HOST_TR_END = HOST_TR_MORE + TR_N - TR_OLD_N, HOST_RANKS = HOST_TR_END, HOST_N = 40 }; /* test 117: 40 (was 32; only these arrays) */
/* test 101: HOST_RANKS = the debug menu's INITIALIZE RANKINGS (rank_init, once: host_reapply leaves it, the EEPROM and
 * the attract slot's check keep it), recorded so a replay across it clears the tables at the same vblank */
_Static_assert(HOST_RANKS < HOST_N, "HOST_N has no room for HOST_RANKS");
/* test 117: HOST_JOIN = Kuro BL's JOIN box: the ship byte (side x 8 + ship x 4 + bomb type) into that side's record
 * before the box's Start (ct_frame), so its join and respawn take it */
enum { HOST_JOIN = HOST_RANKS + 1 };
_Static_assert((int)HOST_JOIN < (int)HOST_N, "HOST_N has no room for HOST_JOIN");
static int host_val[HOST_N], host_seen[HOST_N];
static int rk_result = -1; /* test 101: rank_init's last return */
static void dip_write(int i, int v);
static void tr_host(int what, int value);

static void host_set(int what, int value, int menu)
{
	if (what < 0 || what >= HOST_N)
		return;
	host_val[what] = value;
	host_seen[what] = 1;
	rec_host((uint32_t)frame_count, what, value);
	if (what == HOST_BULLETS) {
#ifdef IB_ARRANGE
		if (!arrgfx_z) /* test 97: no ps2data.bin = no PS2 bullet pages, NORMAL only */
			value = 0;
#endif
		cfg.arr_bullets = value;
#ifdef ARRANGE_DESIGN
		*RAMP(ARRANGE_DESIGN) = (u8)value;
#endif
		log_printf(C_WHITE, "%s: BULLET DESIGN %s (EMU %u)", menu ? "GENERAL SCREEN" : "HOST", value >= 0 && value < 3 ?
		           bullet_names[value] : "?", (unsigned)frame_count);
	} else if (what < HOST_BULLETS) {
		dip_write(what - HOST_DIP0, value);
	} else if (what >= HOST_TR0 && what < HOST_TR_END) { /* test 89; test 91: Kuro BL's ship rows after HOST_TR_GO */
		tr_host(what, value);
	} else if (what == HOST_RANKS) { /* test 101 */
		rk_result = rank_init(game_set, ARR);
	} else if (what == HOST_JOIN && game_set != SET_IBARA) { /* test 117 */
		*RAMP(0x0C29D1D8u + (uint32_t)(value >> 3 & 1) * 0x2A0u + 7) = (u8)(value & 15);
		rp_join_note(value);
	}
}

/* after a save state's load (inputs_update's next call): the host's settings into the game's RAM again */
static int host_reapply_due;

static void host_reapply(void)
{
	int k;

	host_reapply_due = 0;
	(void)k;
#ifdef ARRANGE_DESIGN
	if (host_seen[HOST_BULLETS])
		*RAMP(ARRANGE_DESIGN) = (u8)host_val[HOST_BULLETS];
#endif
	/* not the DIP SWITCHES: they are in the EEPROM, which a load leaves as it is; an attract slot taken with another
	 * EEPROM is not loaded (attract_current) and is taken again at the logos / title (state_frame), and a run's slots
	 * have the run's own settings */
}

static void tr_step(int k, int d);
static void tr_quick(int k, int d); /* test 92 */
static int tr_quick_row(int k);     /* test 92 */

/* test 81: a step of the PLAY page's row id (d = 1: RIGHT, -1: LEFT) */
static void sm_step(int id, int d)
{
	if (id >= SM_ROW_TR) { /* test 89 */
		tr_step(id - SM_ROW_TR, d);
		return;
	}
	switch (id) {
	case SM_ROW_PLAYER:
		sm_side ^= 1;
		break;
	case SM_ROW_MODE:
		sm_mode = ARR ? 0 : (sm_mode + 3 + d) % 3; /* test 77: ARRANGE = NORMAL only */
		break;
	case SM_ROW_TYPE:
		sm_type = (sm_type + 4 + d) % 4;
		break;
	default:
		break;
	}
}

/* DIP SWITCHES (user's todo list: "include a new "dip switches" inside the new "play" menu, giving us access to the
 * service menu options without the need to press R3 every time ... difficulty1, difficulty2, extend, player counts,
 * default; altering any of the options, if not default turns the score gadget red"; then "make sure dip switches can't
 * be altered during a run, in any of the games"). The service menu's DIP SWITCH SETTING items (work/dip/REPORT.md, run
 * on the PC harness: the change below gives the RAM at the next credit and the EEPROM file the service menu's do): the
 * value in the EEPROM header's byte (word 4: difficulty 1 << 8 | 2, word 5: extend << 8 | player count; settings.c
 * saves the file), the game's live byte, its image and shadow copies, and for EXTEND its two derived words (every,
 * the initial next); the game re-reads none of them in the attract. Only while the game is idle in the attract (no run,
 * not its service menu): the menu is there only then, and dip_step checks it again. Kuro BL has no difficulty 2 (its
 * service menu has no such row; the byte is never read); ARRANGE keeps the PS2's rules (test 82: no DIP SWITCHES row
 * there, its BULLET DESIGN on GENERAL SCREEN, bullets_step). The values' names as the service menu shows them (its own
 * spellings; test 82: but MEDIUM, user: "rename difficulty 2's "midium" in "medium""), the helps the user's (test 82).
 * Defaults 3, 3, 1, 2 in both. Row ids: DIP_* the items, DIP_N DEFAULT */
enum { DIP_DIF1, DIP_DIF2, DIP_EXTEND, DIP_STOCK, DIP_N, DIP_ROWS_MAX };
struct dip_item {
	const char *name, *help;
	int byte;                 /* the EEPROM header's byte: word byte / 2, its high byte when even */
	uint32_t live, image, shadow;
	int n, def;               /* values 0 .. n - 1 (the service menu's range); the factory default */
	const char *const *names; /* NULL: EXTEND / PLAYER COUNTS, made by dip_text */
};
static const char *const dip_dif1[8] = {"SUPER EASY", "VERY EASY", "EASY", "NORMAL", "HARD", "VERY HARD", "SUPER HARD",
                                        "UNBELIEVABLE"};
static const char *const dip_dif2[8] = {"MINIMUM SLOW", "VERY SLOW", "SLOW", "MEDIUM", "FAST", "VERY FAST",
                                        "MAXIMUM FAST", "UNFORGETABLE"};
#define DIP_HELP_EXTEND "CHANGE REQUIRED SCORE FOR GETTING MORE LIVES"
#define DIP_HELP_STOCK "CHANGE STARTING LIVES"
static const struct dip_item dip_ib[DIP_N] = {
	{"DIFFICULTY 1", "RANK FLOOR/STARTING POINT", 8, 0x0C21F5E0u, 0x0C21CCA8u, 0x0C286524u, 8, 3, dip_dif1},
	{"DIFFICULTY 2", "RANK SPEED", 9, 0x0C22466Cu, 0x0C21CCA9u, 0x0C286525u, 8, 3, dip_dif2},
	{"EXTEND", DIP_HELP_EXTEND, 10, 0x0C21F588u, 0x0C21CCAAu, 0x0C286526u, 19, 1, NULL},
	{"PLAYER COUNTS", DIP_HELP_STOCK, 11, 0x0C220C53u, 0x0C21CCABu, 0x0C286527u, 8, 2, NULL},
};
static const struct dip_item dip_blk[DIP_N] = { /* no DIFFICULTY 2: n = 0 */
	{"DIFFICULTY", "ENEMY FIRE DENSITY", 8, 0x0C234C04u, 0x0C2322C8u, 0x0C2B182Cu, 8, 3, dip_dif1},
	{"DIFFICULTY 2", "", 9, 0x0C23DEA4u, 0x0C2322C9u, 0x0C2B182Du, 0, 3, dip_dif2},
	{"EXTEND", DIP_HELP_EXTEND, 10, 0x0C234BA8u, 0x0C2322CAu, 0x0C2B182Eu, 19, 1, NULL},
	{"PLAYER COUNTS", DIP_HELP_STOCK, 11, 0x0C239483u, 0x0C2322CBu, 0x0C2B182Fu, 8, 2, NULL},
};
/* EXTEND's derived words: every, the initial next (u32), and the step (ibara 1,000,000; Kuro BL 10,000,000) */
#define IB_EXT_EVERY 0x0C286514u
#define IB_EXT_NEXT 0x0C392AE8u
#define BLK_EXT_EVERY 0x0C2B181Cu
#define BLK_EXT_NEXT 0x0C3C4150u
static int dip_sel;          /* the DIP page's row (an index into dip_rows) */

/* the page's rows: the items the game has (DIP_*), then DEFAULT (DIP_N) */
static int dip_rows(int *r)
{
	const struct dip_item *t = game_set == SET_IBARA ? dip_ib : dip_blk;
	int i, n = 0;

	for (i = 0; i < DIP_N; i++)
		if (t[i].n)
			r[n++] = i;
	r[n++] = DIP_N;
	return n;
}

static const struct dip_item *dip_item_of(int i)
{
	const struct dip_item *d = (game_set == SET_IBARA ? dip_ib : dip_blk) + i;
	return i >= 0 && i < DIP_N && d->n ? d : NULL;
}

/* the page can change them (ibara and Kuro BL; ARRANGE: the PS2's rules) */
static int dip_have(void)
{
	return !ARR;
}

static int dip_get(int i)
{
	const struct dip_item *d = dip_item_of(i);
	return d ? *RAMP(d->live) : 0;
}

static void dip_text(int i, int v, char *s, size_t n)
{
	const struct dip_item *d = dip_item_of(i);
	const unsigned step = game_set == SET_IBARA ? 1 : 10; /* millions */

	if (!d || v < 0 || v >= d->n)
		snprintf(s, n, "?");
	else if (d->names)
		snprintf(s, n, "%s", d->names[v]);
	else if (i == DIP_EXTEND)
		snprintf(s, n, v == 0 ? "NO EXTRA" : "%u000000PTS.%s", (v < 10 ? (unsigned)v : (unsigned)v - 9) * step,
		         v < 10 ? "EACH" : "ONLY");
	else /* PLAYER COUNTS */
		snprintf(s, n, "%s", v == 6 ? "MULTIPLY" : v == 7 ? "INVINCIBLE" : (const char *[]){"1", "2", "3", "4", "5", "6"}[v]);
}

/* the value into the EEPROM, the game's bytes and EXTEND's words (host_set; the menu checked the game is idle) */
static void dip_write(int i, int v)
{
	const struct dip_item *d = dip_item_of(i);
	uint16_t *w = rtc9701_eeprom();
	char t[24];

	if (!d || v < 0 || v >= d->n || !dip_have()) /* never a value out of the range: the game would reset its EEPROM */
		return;
	w[d->byte / 2] = (uint16_t)(d->byte & 1 ? (w[d->byte / 2] & 0xFF00u) | (unsigned)v :
	                                          (w[d->byte / 2] & 0x00FFu) | (unsigned)v << 8);
	*RAMP(d->live) = (u8)v;
	*RAMP(d->image) = (u8)v;
	*RAMP(d->shadow) = (u8)v;
	if (i == DIP_EXTEND) { /* 0: never; 1-9: every v x step; 10-18: once at (v - 9) x step */
		const uint32_t step = game_set == SET_IBARA ? 1000000u : 10000000u;
		const uint32_t next = v == 0 ? 0xFFFFFFFFu : (uint32_t)(v < 10 ? v : v - 9) * step;
		const uint32_t every = v == 0 ? 0xFFFFFFFFu : v < 10 ? next : 1000000000u;
		u8 *pe = RAMP(game_set == SET_IBARA ? IB_EXT_EVERY : BLK_EXT_EVERY);
		u8 *pn = RAMP(game_set == SET_IBARA ? IB_EXT_NEXT : BLK_EXT_NEXT);
		pe[0] = (u8)(every >> 24), pe[1] = (u8)(every >> 16), pe[2] = (u8)(every >> 8), pe[3] = (u8)every;
		pn[0] = (u8)(next >> 24), pn[1] = (u8)(next >> 16), pn[2] = (u8)(next >> 8), pn[3] = (u8)next;
	}
	dip_text(i, v, t, sizeof(t));
	log_printf(v == d->def ? C_WHITE : C_YELLOW, "DIP SWITCHES: %s %s%s (EMU %u)", d->name, t,
	           v == d->def ? "" : ", NOT THE DEFAULT", (unsigned)frame_count);
}

/* test 81 (user: "make sure dip switches can't be altered during a run, in any of the games"): the game idle in the
 * attract (sm_frame's: no run, not its service menu, Start opening the menu) */
static int dip_idle(void)
{
	return !sm_run && !sm_test && sm_idle >= SM_IDLE && !sm_after;
}

static int dip_can_change(void)
{
	return dip_have() && dip_idle();
}

static void dip_step(int k, int d)
{
	int r[DIP_ROWS_MAX], i;
	const struct dip_item *it;

	dip_rows(r);
	i = r[k];
	it = dip_item_of(i);
	if (!it || !dip_can_change())
		return;
	host_set(HOST_DIP0 + i, (dip_get(i) + it->n + d) % it->n, 1);
}

/* test 82 (user: "move "bullet design" to "general screen""): ARRANGE's BULLET DESIGN, GENERAL SCREEN's row (the menu's,
 * so in the attract; the ini, which opt_leave saves; never the SCORE red), still only while the game is idle there */
static void bullets_step(int d)
{
	if (!ARR || !dip_idle())
		return;
	host_set(HOST_BULLETS, (cfg.arr_bullets + 3 + d) % 3, 1);
	opt_changes++;
}

static void dip_defaults(void)
{
	int i, any = 0;

	if (!dip_idle())
		return;
	for (i = 0; i < DIP_N && dip_have(); i++) {
		const struct dip_item *d = dip_item_of(i);
		if (d && dip_get(i) != d->def) {
			host_set(HOST_DIP0 + i, d->def, 1);
			any = 1;
		}
	}
	log_printf(C_WHITE, "DIP SWITCHES: DEFAULT%s (EMU %u)", any ? "" : ", ALREADY", (unsigned)frame_count);
}

/* any of them not its default: the GADGETS SCORE red. Once the game has read its EEPROM (its bytes are 0 before, FF
 * from a blank one until its reset: the scene byte is 0 until the warning screen is over); not in ARRANGE */
static int dip_changed(void)
{
	int i;

	if (!dip_have() || !*RAMP(game_set == SET_IBARA ? IB_SCENE : BLK_SCENE))
		return 0;
	for (i = 0; i < DIP_N; i++) {
		const struct dip_item *d = dip_item_of(i);
		if (d && dip_get(i) != d->def)
			return 1;
	}
	return 0;
}

static const char *dip_help(int k)
{
	int r[DIP_ROWS_MAX];
	const int n = dip_rows(r);
	const struct dip_item *d = k < n ? dip_item_of(r[k]) : NULL;

	if (k < n && r[k] == DIP_N) /* test 82: the user's "revert to initial settings", A the button that does it */
		return "A = REVERT TO INITIAL SETTINGS";
	if (!dip_have())
		return "THE PS2'S ARRANGE IGNORES THE\nARCADE'S GAME OPTIONS";
	return d ? d->help : "";
}

static void dip_open(void)
{
	sm_state = SM_DIP;
	dip_sel = 0;
	log_printf(C_WHITE, "DIP SWITCHES: OPEN (EMU %u)", (unsigned)frame_count);
}

static void play_open(int train)
{
	if (opt_leave(1)) { /* the options' special version changed: the game restarts */
		sm_state = SM_CLOSED;
		log_printf(C_YELLOW, "MENU: CLOSED, THE GAME RESTARTS (START AGAIN ON THE TITLE)");
		return;
	}
	sm_state = SM_OPEN;
	sm_train = train; /* test 89: the TRAINING page */
	sm_row = 0; /* test 83: on START RUN (the settings below stay as they were) */
	tr_box = 0; /* test 94 */
	log_printf(C_WHITE, "%s: OPEN (EMU %u)", train ? "TRAINING" : "PLAY", (unsigned)frame_count);
}

/* Pads 0 and 1 to the 1P / 2P side: pad p plays side p ^ pad_swap. With the game idle (no credit
 * running, not the service menu, for SM_IDLE vblanks, test 57: past the boot, the logos at once) Start opens the
 * box instead of reaching the game, and the pad's input goes to it. Ibara's start menu (test 53):
 * UP / DOWN = the row (player, mode, type), LEFT / RIGHT change it, START or A = play, B = close,
 * BACK = the options page; Kuro BL's: the options page. Play gives that pad the chosen side and
 * sends the game the hidden command on its side's port: the direction (harder up, extended down)
 * and buttons (type B = 1, C = 2, D = 1 + 2) from SM_LEAD vblanks before Start to SM_TAIL after
 * it, as a player would (Kuro BL: Start alone); with no credit started by then (free play: a Start
 * in the attract demo only brings the title up) again after SM_GAP vblanks, at most SM_TRIES
 * times. In the ports, so the recording carries it. Buttons held at a menu press reach the game
 * only once released. Test 55: the boxes read the pad's own A and B (A_MA, A_MB), not the
 * controls; the controls page (SM_CTRL) from the options' CONTROLS row.
 * w = pads 0 and 1 as given to the game. */
static void sm_frame(uint32_t w[2])
{
	const int ib = game_set == SET_IBARA;
	const uint32_t game_on = ib ? IB_GAME_ON : BLK_GAME_ON;
	const u8 scene = *RAMP(ib ? IB_SCENE : BLK_SCENE), g = *RAMP(game_on);
	const int test = BE32(RAMP(ib ? IB_TEST : BLK_TEST)) == IB_TEST_ON;
	const int was = sm_idle >= SM_IDLE;
	unsigned hold_before;
	int run, p;

	/* test 66: a run = the game's byte 1 or 2 (as gadgets.c's; 2 for a while within a run, e.g. Kuro BL rec b62
	 * 11275-11329; ibara's 0x0C while booting is none) outside a demo, but for the logos after a service menu (sm_svc:
	 * the byte the run left); test 57 took the logos as idle always, and a run keeps the scene it began from, so Start
	 * opened the start menu inside a run begun from the logos (test 65) */
	if (test)
		sm_svc = 1;
	else if (g == 0)
		sm_svc = 0;
	run = g != 0 && g < 3 && *RAMP(ib ? IB_DEMO : BLK_DEMO) != 1 && !(sm_svc && scene == SCENE_LOGOS);
	sm_run = run;
	sm_test = test;
	sm_scene = scene;
	hold_before = sm_runhold;
	if (run)
		sm_runhold = SM_RUN_HOLD;
	else if (sm_runhold)
		sm_runhold--;
	/* test 81 (user's todo list: "(for all three games) pressing start at the initials entry screen should not bring up
	 * the main menu, wait until after the cave logo reappears"; then, told the logos come back only ~3.7 minutes after
	 * a game over, the user chose "when the demos start"): from a run's end (SM_RUN_HOLD vblanks without one) Start is
	 * the game's through GAME OVER, the initials' entry and the ranking, which keep the scene byte the run began on
	 * (the PC harness: scene 6 for ~40 s with initials, ~9 s without), until it changes: the first attract demo
	 * (scene 1). Not after a service menu (its exit goes to the logos, where Start opens the menu at once, test 57),
	 * nor a load (state_load_now: sm_runhold 0) */
	/* test 88: the run's own scene (a Start that skips the ranking changes the scene at once: within SM_RUN_HOLD it
	 * would have become sm_after's) */
	if (run)
		sm_run_scene = scene;
	sm_back = 0;
	if (hold_before && !sm_runhold && !test && !sm_svc) {
		sm_after = 1 + sm_run_scene;
		sm_logo = 0;
		log_printf(C_WHITE, "MENU: THE RUN ENDED BY EMU %u (SCENE %u): START IS THE GAME'S UNTIL THE DEMOS",
		           (unsigned)frame_count, sm_run_scene);
	}
	if (sm_after && !sm_logo) { /* test 87: the replay's end (user: "make replays end immediately after initials entry") */
		const u8 *w = RAMP(ib ? IB_SCREEN : BLK_SCREEN);
		if ((unsigned)(w[0] << 8 | w[1]) == (ib ? IB_SCREEN_LOGO : BLK_SCREEN_LOGO)) {
			sm_logo = 1;
			log_printf(C_WHITE, "MENU: THE CAVE LOGO AT EMU %u: THE INITIALS' ENTRY IS OVER", (unsigned)frame_count);
		}
	}
	/* test 91 (user's todo list: "pressing start during the game over screen makes the title screen bleed into the
	 * replay"): a Start on GAME OVER changes the scene a vblank after the run ends (rec0007: the game byte 0 at 5534, the
	 * scene 2 at 5535, the picture the ranking at 5537 and the title from 5538), inside SM_RUN_HOLD, so sm_back came only
	 * at the hold's end (5543); the vblank it changed is kept here and the replay ends there (rp_question) */
	if (run)
		sm_left_at = 0;
	else if ((sm_runhold || sm_after) && !sm_left_at && scene && scene != sm_run_scene)
		sm_left_at = (uint32_t)frame_count;
	if (sm_after && scene && scene != sm_after - 1) {
		sm_after = 0;
		sm_logo = 0;
		sm_back = 1;
		log_printf(C_WHITE, "MENU: THE ATTRACT AGAIN AT EMU %u (SCENE %u, CHANGED AT EMU %u)", (unsigned)frame_count, scene,
		           (unsigned)sm_left_at);
	}
	if (scene != 0 && !test && !run && !sm_after) {
		if (scene == SCENE_LOGOS && !sm_runhold)
			sm_idle = SM_IDLE; /* test 57: Start opens it at once there */
		else if (sm_idle < SM_IDLE)
			sm_idle++;
	} else {
		sm_idle = 0;
	}
	if (was != (sm_idle >= SM_IDLE)) /* test 66 */
		log_printf(C_WHITE, was ? "MENU: START GOES TO THE GAME FROM EMU %u (SCENE %u, GAME %u%s)" :
		                          "MENU: START OPENS THE MENU FROM EMU %u (SCENE %u, GAME %u%s)",
		           (unsigned)frame_count, scene, g, test ? ", SERVICE MENU" : sm_svc ? ", AFTER THE SERVICE MENU" : "");
	if (rl_reopen && sm_state == SM_CLOSED && sm_idle >= SM_IDLE) { /* test 86: a playback ended (the attract loaded) */
		rl_reopen = 0;
		opt_open();
		rl_open();
		for (p = 0; p < 2; p++) /* the B / BACK that stopped it, still held, is no press on the page */
			sm_prev[p] = sm_hold[p] = w[p];
	}
	if (tr_reopen && sm_state == SM_CLOSED) { /* test 120: reopen immediately after restoring the training attract slot */
		tr_reopen = 0;
		opt_open();
		opt_sels[0] = 1; /* the menu's TRAINING row under it (B goes back there) */
		play_open(1);
		for (p = 0; p < 2; p++) /* the A that quit, still held, is no press on the page */
			sm_prev[p] = sm_hold[p] = w[p];
	}
	/* test 92 (user's todo list: after a training run's GAME OVER, "immediately pressing start afterwards does not bring
	 * up the main menu during the attract"; rec0008: Start in port C at 21847, 45 vblanks into the title that came at
	 * 21802): the attract's first SM_IDLE vblanks after a run (or the boot's) gave a Start to the game; one there is
	 * kept from it now (sm_hold) and opens the menu once the attract has been idle long enough */
	if (sm_idle < SM_IDLE || sm_state != SM_CLOSED) {
		if (sm_idle == 0 || sm_state != SM_CLOSED)
			sm_early = 0;
	} else if (sm_early) {
		p = sm_early - 1;
		sm_early = 0;
		sm_pad = p;
		sm_side = p ^ pad_swap;
		sm_opens++;
		log_printf(C_WHITE, "MENU: OPEN (PAD %d, EMU %u; ITS START CAME BEFORE THE ATTRACT WAS IDLE)", p, (unsigned)frame_count);
		opt_open();
	}
	{ /* test 109: the ending's window for STAFF ROLL (IB_ENDING); test 110: Kuro BL's too (BLK_ENDING) */
		const u8 end = *RAMP(ib ? IB_ENDING : BLK_ENDING), *sw = RAMP(ib ? IB_SCREEN : BLK_SCREEN);
		const unsigned scr = (unsigned)(sw[0] << 8 | sw[1]);
		if (end && !sm_end_last && !test)
			sm_staff = 1;
		if (!end || BE32(RAMP(ib ? IB_ENTRY : BLK_ENTRY)) != 0 ||
		    (ib ? scr == IB_SCREEN_RANKING || scr == IB_SCREEN_LOGO :
		          scr == BLK_SCREEN_RANKING || scr == BLK_SCREEN_ENTRY || scr == BLK_SCREEN_LOGO))
			sm_staff = 0;
		sm_end_last = end;
	}
	for (p = 0; p < 2; p++) {
		const uint32_t rep = menu_repeat(&sm_rep[p], w[p]); /* test 93 */
		const int had = sm_state != SM_CLOSED && p == sm_pad; /* B below closes it: still the menu's press */
		const uint32_t press = (w[p] & ~sm_prev[p]) | (had ? rep & ~(sm_state == SM_OPTS &&
		                       pic_row(opt_row(opt_sels[opt_page])) ? (uint32_t)(A_LEFT | A_RIGHT) : 0u) : 0u);

		sm_prev[p] = w[p];
		sm_hold[p] &= w[p];
		/* test 109 (user: after a 1CC's third initial "the game immediately returned to the title screen as if i pressed
		 * start"): no Start reaches the game during the initials' entry (nor one held into it), so the ranking and the
		 * logos follow the initials; a Start after the entry still skips them (the arcade's). ibara and ARRANGE only.
		 * STAFF ROLL PROTECTED (cfg.staff_keep): none from the ending's start either (sm_staff). Test 110: Kuro BL too
		 * (its addresses: work/g110/blkend); there a press during the entry would end it at once, and its staff roll
		 * runs as a run (sm_after only SM_RUN_HOLD vblanks after the entry began), so its entry is also covered while
		 * the ending's byte is up (it falls only at the next game's start, before any continue countdown) */
		/* test 111 (user: SAVE REPLAY? "should not cut suddenly back to the attract screen, it should smoothly go back to
		 * the logos, then the title screen"; test 110's rec0003: Kuro BL, the initials in, a Start at 21455 on the ranking
		 * skipped it and both logos, the scene changed at 21473 = the title, so the question came there, and B left the
		 * title running): from the run's end to the CAVE logo (sm_after, not sm_logo) no Start reaches the game either,
		 * all three games: the ranking plays out, SAVE REPLAY? comes at the CAVE logo, the logos and the title follow */
		const int rank_keep = sm_after && !sm_logo && !run;
		if ((w[p] & A_START) &&
		    (((sm_after || (!ib && *RAMP(BLK_ENDING))) && BE32(RAMP(ib ? IB_ENTRY : BLK_ENTRY)) != 0) ||
		     (sm_staff && cfg.staff_keep) || rank_keep)) {
			if (!(sm_hold[p] & A_START))
				log_printf(C_WHITE, "MENU: PAD %d'S START KEPT FROM THE GAME (EMU %u): %s", p, (unsigned)frame_count,
				           sm_staff ? "THE ENDING RUNS (STAFF ROLL PROTECTED)" :
				           BE32(RAMP(ib ? IB_ENTRY : BLK_ENTRY)) != 0 ? "THE INITIALS' ENTRY RUNS" :
				           "THE RANKING RUNS (UNTIL THE CAVE LOGO)");
			sm_hold[p] |= A_START;
		}
		const int se_st = sm_state; /* test 98: the page before the press (menu_se) */
		const uint32_t se_sig = press && had ? menu_sig() : 0;
		if (sm_state == SM_CLOSED && sm_idle >= SM_IDLE && (press & A_START)) {
			sm_pad = p;
			sm_side = p ^ pad_swap;
			sm_opens++;
			log_printf(C_WHITE, "MENU: OPEN (PAD %d, EMU %u)", p, (unsigned)frame_count);
			opt_open(); /* test 81: the one menu, PLAY its first row */
		} else if (sm_state == SM_CLOSED && sm_idle > 0 && sm_idle < SM_IDLE && !run && !sm_after && !sm_runhold && !test &&
		           scene != 0 && (press & A_START)) { /* test 92 */
			if (!sm_early) {
				sm_early = p + 1;
				log_printf(C_WHITE, "MENU: PAD %d'S START KEPT FROM THE GAME (EMU %u, THE ATTRACT IDLE %u OF %u VBLANKS)", p,
				           (unsigned)frame_count, sm_idle, SM_IDLE);
			}
			sm_hold[p] |= A_START;
		} else if (sm_state == SM_OPEN && p == sm_pad && tr_box && !(press & A_START)) { /* test 94: a box on TRAINING */
			tr_box_input(press);
		} else if (sm_state == SM_OPEN && p == sm_pad) { /* test 81: the PLAY page */
			const int n = sm_nrows(), id = sm_rowid(sm_row);
			tr_box = 0; /* test 94: START in a box plays as on the page */
			if (press & A_UP)
				sm_row = (sm_row + n - 1) % n;
			else if (press & A_DOWN)
				sm_row = (sm_row + 1) % n;
			if (press & (A_LEFT | A_RIGHT))
				sm_step(id, press & A_RIGHT ? 1 : -1);
			if (sm_train && id >= SM_ROW_TR && (press & (A_MLB | A_MRB))) /* test 92: the quick steps */
				tr_quick(id - SM_ROW_TR, press & A_MRB ? 1 : -1);
			/* test 83: A plays on START RUN, opens DIP SWITCHES, steps a value as RIGHT does (the other pages' A);
			 * START does nothing here (the menu keeps it from the game). Test 92 (user's todo list: "add start button as
			 * a quick way to start"): on the TRAINING page START plays from any row, as START RUN's A */
			if ((press & A_MA) && id == SM_ROW_DIP) {
				dip_open();
			} else if (((press & A_MA) && id == SM_ROW_START) || (sm_train && (press & A_START))) {
				if (opt_changes) /* ARRANGE's BULLET DESIGN: the ini */
					opt_leave(0);
				if (sm_train) { /* test 89: the run's settings as "# host" lines, then the credit's command */
					tr_send(tr_cfg);
				}
				else if (tr_armed)
					host_set(HOST_TR_GO, 0, 1);
				sm_play();
			} else if ((press & A_MX) && sm_train && id == SM_ROW_TR + TR_RPCT) { /* test 96: X = the rank held */
				tr_cfg[TR_RANK] ^= TRR_HELD;
			} else if ((press & A_MA) && sm_train && (id == SM_ROW_TR + TR_OPT0 || id == SM_ROW_TR + TR_FRM0) &&
			           !(tr_cfg[id - SM_ROW_TR] & TR_ROW_NONE)) { /* test 96: on EDIT only */
				tr_box = id - SM_ROW_TR; /* test 94: OPTIONS / FORMATION open their box over the page */
				tr_box_sel = 0;
				log_printf(C_WHITE, "TRAINING: %s OPEN (EMU %u)", tr_names[tr_box], (unsigned)frame_count);
			} else if ((press & A_MA) && !sm_train) { /* test 91 (user's todo list): TRAINING's A plays only */
				sm_step(id, 1);
			} else if (press & (A_MB | A_COIN)) {
				sm_state = SM_OPTS;
				opt_page = 0;
				log_printf(C_WHITE, "%s: BACK TO THE MENU", sm_train ? "TRAINING" : "PLAY");
			}
		} else if (sm_state == SM_DIP && p == sm_pad) { /* test 81: DIP SWITCHES (the game's rows, then DEFAULT) */
			int r[DIP_ROWS_MAX];
			const int n = dip_rows(r);
			if (press & A_UP)
				dip_sel = (dip_sel + n - 1) % n;
			if (press & A_DOWN)
				dip_sel = (dip_sel + 1) % n;
			if (press & (A_LEFT | A_RIGHT))
				dip_step(dip_sel, press & A_RIGHT ? 1 : -1);
			if ((press & A_MA) && r[dip_sel] == DIP_N)
				dip_defaults();
			if (press & (A_MB | A_COIN)) {
				sm_state = SM_OPEN;
				log_printf(C_WHITE, "DIP SWITCHES: BACK TO PLAY");
			}
		} else if (sm_state == SM_OPTS && p == sm_pad) {
			const int n = opt_nrows();
			int id, unarm = 0;
			if (press & A_UP)
				opt_sels[opt_page] = (opt_sels[opt_page] + n - 1) % n;
			if (press & A_DOWN)
				opt_sels[opt_page] = (opt_sels[opt_page] + 1) % n;
			if ((press & (A_UP | A_DOWN)) || ((gsel_armed || svc_armed || rk_armed || ac_armed) &&
			                                  (press & (A_MB | A_COIN)))) {
				/* test 72: B = no; test 101: INITIALIZE RANKINGS' too; test 106: ACHIEVEMENTS' */
				unarm = (gsel_armed || svc_armed || rk_armed || ac_armed) && !(press & (A_UP | A_DOWN));
				gsel_armed = svc_armed = rk_armed = ac_armed = 0;
				rk_said = 0;
			}
			id = opt_row(opt_sels[opt_page]);
			if (unarm) {
				/* B / BACK took the question back, the page stays */
			} else if (id == OPT_GSEL) { /* test 72: A, then A again */
				if ((press & A_MA) && launcher_ok && gsel_armed) {
					gsel_req = 1;
					log_printf(C_YELLOW, "OPTIONS: GAME SELECT (EMU %u)", (unsigned)frame_count);
				} else if ((press & A_MA) && launcher_ok) {
					gsel_armed = 1;
				}
			} else if (id == OPT_SERVICE) { /* test 85: A, then A again: the menu closes, S3 for SVC_HOLD vblanks (the A
			                                  * kept from the game by sm_hold until released: button 1 in there) */
				if ((press & A_MA) && svc_armed) {
					svc_armed = 0;
					sm_state = SM_CLOSED;
					opt_page = 0;
					log_printf(C_YELLOW, "OPTIONS: SERVICE MENU (PAD %d, EMU %u): THE TEST SWITCH (S3) FOR %u VBLANKS%s", p,
					           (unsigned)frame_count, SVC_HOLD, opt_leave(1) ? ", THE GAME RESTARTED FOR SPECIAL MODE" : "");
					svc_left = SVC_HOLD;
				} else if (press & A_MA) {
					svc_armed = 1;
				}
			} else if (id == OPT_RANKS) { /* test 101: A, then A again */
				if ((press & A_MA) && rk_armed) {
					rk_armed = 0;
					if (!dip_idle()) {
						rk_said = 2;
						log_printf(C_YELLOW, "OPTIONS: INITIALIZE RANKINGS NOT DONE: THE GAME IS NOT IDLE (EMU %u)",
						           (unsigned)frame_count);
					} else if (host_set(HOST_RANKS, 1, 1), rk_result == 0) {
						rk_said = 1;
						log_printf(C_YELLOW, "OPTIONS: RANKINGS INITIALIZED (%s, EMU %u): THE FOUR TABLES AS THE TEST "
						           "MODE'S INITIALIZE RANKING LEAVES THEM%s", ARR ? "ARRANGE" : game_set == SET_IBARA ?
						           "IBARA" : "KURO BL", (unsigned)frame_count, ARR ? ", TABLE 3 = THE PS2'S ARRANGE "
						           "DEFAULTS" : "");
					} else {
						rk_said = 2;
						log_printf(C_RED, "OPTIONS: INITIALIZE RANKINGS FAILED (RANK_INIT %d, SET %d, EMU %u)", rk_result,
						           game_set, (unsigned)frame_count);
					}
				} else if (press & A_MA) {
					rk_armed = 1;
					rk_said = 0;
				}
			} else if (id == OPT_ACH) { /* test 106: OFF at once; ON after the warning and A again (B = no) */
				if ((press & (A_LEFT | A_RIGHT | A_MA)) && cfg.achievements) {
					opt_step(id, 1);
				} else if ((press & A_MA) && ac_armed) {
					ac_armed = 0;
					opt_step(id, 1);
				} else if (press & (A_LEFT | A_RIGHT | A_MA)) {
					ac_armed = 1;
					log_printf(C_YELLOW, "OPTIONS: ACHIEVEMENTS ON ASKED: THE BAN WARNING SHOWN (EMU %u)",
					           (unsigned)frame_count);
				}
			} else if (id == OPT_TOAST) { /* test 106: LEFT / RIGHT the position (at once), A a test toast */
				if (press & A_LEFT)
					opt_step(id, -1);
				if (press & A_RIGHT)
					opt_step(id, 1);
				if (press & A_MA)
					achx_toast_test("IBARA360 TOAST TEST");
				/* test 111: X's size probe, RB's XAM probe and LB's fix gone (route K is on from the start) */
			} else if (id == OPT_PLAY || id == OPT_TRAIN) { /* test 81: the PLAY page (A); test 89: TRAINING's */
				if (press & A_MA)
					play_open(id == OPT_TRAIN);
			} else if (id == OPT_OPTIONS) { /* test 88: the OPTIONS page (A) */
				if (press & A_MA) {
					opt_page = OPT_PAGE_OPTIONS;
					if (opt_sels[opt_page] >= opt_nrows())
						opt_sels[opt_page] = 0;
					log_printf(C_WHITE, "OPTIONS: OPEN (EMU %u)", (unsigned)frame_count);
				}
			} else if (pic_row(id)) { /* test 89: every vblank (held LEFT / RIGHT goes on) */
				pic_input(id, w[p], press);
			} else if (id == OPT_REPLAYS) { /* test 86: the REPLAYS page (A) */
				if ((press & A_MA) && rp_ok)
					rl_open();
			} else if (id == OPT_LOAD) { /* test 84: the SLOTS page (A) */
				if ((press & A_MA) && hdd_ok) {
					hdd_msg[0] = 0;
					sl_open(0);
				}
			} else if (id == OPT_CONTROLS || id == OPT_CONTROLS2 || id == OPT_M3 || id == OPT_DEBUG || id == OPT_SOUND ||
			    id == OPT_SCREEN) {
				if ((press & A_MA) && (id == OPT_CONTROLS || id == OPT_CONTROLS2)) /* test 56: A only; test 71: P1 / P2 */
					ctl_open(id == OPT_CONTROLS2);
				else if ((press & A_MA) && id == OPT_M3) /* test 64 */
					gp_open();
				else if ((press & A_MA) && id == OPT_SOUND) /* test 68 */
					snd_open();
				else if (EXDBG_OPEN && (press & A_MA) && id == OPT_DEBUG && (w[p] & (A_MLB | A_MRB)) == (A_MLB | A_MRB)) {
					/* test 108: RB held = EX-DEBUG; test 112 (user: "modify ex-debug menu to be opened by holding LB+RB,
					 * then A") */
					opt_page = OPT_PAGE_EXDBG;
					if (opt_sels[opt_page] >= opt_nrows())
						opt_sels[opt_page] = 0;
					log_printf(C_YELLOW, "EX-DEBUG: OPEN (EMU %u)", (unsigned)frame_count);
				} else if (press & A_MA) { /* test 67: the debug menu; test 70: GENERAL SCREEN */
					opt_page = id == OPT_DEBUG ? OPT_PAGE_DEBUG : OPT_PAGE_GENERAL;
					if (opt_sels[opt_page] >= opt_nrows())
						opt_sels[opt_page] = 0;
					log_printf(C_WHITE, "%s: OPEN (EMU %u)", opt_names[id], (unsigned)frame_count);
				}
			} else {
				if (press & A_LEFT)
					opt_step(id, -1);
				if (press & (A_RIGHT | A_MA))
					opt_step(id, 1);
			}
			/* test 70: START plays from no page; B / BACK go back one (test 81: the menu's page 0 closes the menu) */
			if (unarm) {
				/* test 72: the B that said no */
			} else if (sm_state == SM_OPTS && opt_page == OPT_PAGE_OPTIONS && (press & (A_MB | A_COIN))) { /* test 88 */
				log_printf(C_WHITE, "OPTIONS: BACK TO THE MENU");
				opt_page = 0;
			} else if (sm_state == SM_OPTS && opt_page != 0 && (press & (A_MB | A_COIN))) { /* test 67; test 88: OPTIONS */
				log_printf(C_WHITE, "%s: BACK TO OPTIONS", opt_page == OPT_PAGE_EXDBG ? "EX-DEBUG" : /* test 108 */
				           opt_names[opt_page == OPT_PAGE_DEBUG ? OPT_DEBUG : OPT_SCREEN]);
				opt_page = OPT_PAGE_OPTIONS;
			} else if (sm_state == SM_OPTS && (press & (A_MB | A_COIN))) {
				sm_state = SM_CLOSED;
				if (opt_leave(1))
					log_printf(C_YELLOW, "MENU: CLOSED, THE GAME RESTARTS (START AGAIN ON THE TITLE)");
				else
					log_printf(C_WHITE, "MENU: CLOSED (B)");
			}
		} else if (sm_state == SM_GADG && p == sm_pad) { /* test 64 */
			const int n = gp_nrows();
			if (press & A_UP)
				gp_sel = (gp_sel + n - 1) % n;
			if (press & A_DOWN)
				gp_sel = (gp_sel + 1) % n;
			if (press & A_LEFT)
				gp_step(gp_sel, -1);
			if ((press & A_RIGHT) || ((press & A_MA) && gp_row(gp_sel) != GD_N)) /* test 68: ALL by LEFT / RIGHT */
				gp_step(gp_sel, 1);
			if (press & (A_MB | A_COIN)) {
				sm_state = SM_OPTS;
				log_printf(C_WHITE, "M3 GADGETS: BACK TO OPTIONS");
			}
		} else if (sm_state == SM_SOUND && p == sm_pad) { /* test 68 */
			if (press & A_UP)
				snd_sel = (snd_sel + SR_N - 1) % SR_N;
			if (press & A_DOWN)
				snd_sel = (snd_sel + 1) % SR_N;
			if (press & A_LEFT)
				snd_step(snd_sel, -1, 0);
			if (press & A_RIGHT)
				snd_step(snd_sel, 1, 0);
			if (press & A_MA)
				snd_step(snd_sel, 1, 1);
			if (press & (A_MB | A_COIN)) {
				sm_state = SM_OPTS;
				log_printf(C_WHITE, "SOUND: BACK TO OPTIONS");
			}
		} else if (sm_state == SM_REPLAYS && p == sm_pad) { /* test 86 */
			rl_input(press);
		} else if (sm_state == SM_SLOTS && p == sm_pad) { /* test 84: the menu's LOAD STATE */
			int done = 0;
			sl_input(press, &done);
		} else if (sm_state == SM_CTRL && p == sm_pad) { /* test 55 */
			const int n = ctl_nrows();
			if (press & A_UP)
				ctl_sel = (ctl_sel + n - 1) % n;
			if (press & A_DOWN)
				ctl_sel = (ctl_sel + 1) % n;
			if (press & A_LEFT)
				ctl_step(ctl_rowid(ctl_sel), -1);
			if (press & (A_RIGHT | A_MA))
				ctl_step(ctl_rowid(ctl_sel), 1);
			if (press & (A_MB | A_COIN)) {
				sm_state = SM_OPTS;
				log_printf(C_WHITE, "CONTROLS: BACK TO OPTIONS");
			}
		}
		if (had || (sm_state != SM_CLOSED && p == sm_pad)) {
			if (press && p == sm_pad) /* test 98 */
				menu_se(se_st, se_sig, press, 0);
			sm_hold[p] = w[p]; /* the menu's presses never reach the game */
		}
	}
	if ((sm_state == SM_OPEN || sm_state == SM_OPTS || sm_state == SM_CTRL || sm_state == SM_GADG ||
	     sm_state == SM_SOUND || sm_state == SM_DIP || sm_state == SM_SLOTS || sm_state == SM_REPLAYS) && !sm_idle) {
		opt_leave(0); /* test 81: the PLAY page's settings too */
		sm_state = SM_CLOSED; /* the other pad started a game, or the service menu came up */
		log_printf(C_WHITE, "MENU: CLOSED, THE GAME IS NO LONGER IDLE");
	}
	for (p = 0; p < 2; p++)
		w[p] &= ~sm_hold[p];
	if (sm_state == SM_SENDING) {
		const unsigned send = SM_LEAD + SM_START + SM_TAIL;
		const int on = *RAMP(game_on) == 1;
		uint32_t cmd = 0;
		static unsigned sent_scene = ~0u, try_scene;

		/* Let the attract's IBARA phrase finish before issuing the credit/start command. The
		 * game keys IKUZE as the run begins, and its start sequence otherwise cuts that voice off. */
		if (ymz_phrase_active(SND_VOICE0 + 65)) {
			w[sm_pad] = 0;
			return;
		}

		if (sm_k == 0)
			try_scene = scene;
		if (sm_k == 0 || scene != sent_scene) { /* test 99: where a try's Start lands (the first PLAY's TRY 2) */
			if (sm_k > 0)
				log_printf(C_WHITE, "MENU: SCENE %u -> %u AT EMU %u (TRY %u, %u VBLANKS IN)", sent_scene, scene,
				           (unsigned)frame_count, sm_try + 1, sm_k);
			sent_scene = scene;
		}
		if (sm_k < send) {
			if (ib)
				cmd = (sm_mode == 1 ? A_UP : sm_mode == 2 ? A_DOWN : 0) | (sm_type & 1 ? A_B1 : 0) |
				      (sm_type & 2 ? A_B2 : 0);
			if (sm_k >= SM_LEAD && sm_k < SM_LEAD + SM_START)
				cmd |= A_START;
		}
		/* test 97 (user 2026-10-29: in TRAINING "starting a run bleeds the A press into the game", HOMING fired by
		 * itself): the command's buttons (ibara's type: button 1 / 2) reached the run's first vblanks (Start's and the
		 * tail's after the credit came); none once the credit is on (the game took the type with the Start that started
		 * it). Not in a demo (ibara's third demo has the game byte 1) */
		if (on && !*RAMP(ib ? IB_DEMO : BLK_DEMO) && sm_k > SM_LEAD) {
			if (cmd && !sm_cut_logged) {
				sm_cut_logged = 1;
				log_printf(C_WHITE, "MENU: THE CREDIT STARTED AT EMU %u, THE COMMAND'S BUTTONS RELEASED", (unsigned)frame_count);
			}
			cmd = 0;
			/* test 98 (user after test 97: the options fired by themselves once after a TRAINING start; test 97's
			 * rec0001, the run at EMU 10592 on the PC harness): the ship's volley flag and burst (player +0x258 / +0x259,
			 * Kuro BL +0x25F / +0x260: work/blkarr/player_weapons.md section 10) are the demo's at the credit, and the
			 * run's init leaves them: a ship mid-volley in the demo volleys on with no shot held (HOMING options fire
			 * their missiles all the while). Both sides cleared at the credit's first vblank */
			if (!sm_volley_cut) {
				sm_volley_cut = 1;
				volley_clear("MENU");
			}
		}
		w[sm_pad] = cmd;
		sm_k++;
		if (sm_k >= send && (on || sm_try + 1 >= SM_TRIES)) {
			sm_state = SM_CLOSED;
			sm_check_at = (unsigned)frame_count + SM_CHECK;
		} else if (sm_k == send + SM_GAP ||
		           (sm_k >= send + SM_GAP_TITLE && (scene == SM_SCENE_TITLE || scene != try_scene) && sm_k > send)) {
			/* test 99: or any other scene than the try's (test 98's first PLAY: the attract's scene 4, Start brought
			 * scene 5, which takes a Start too; test 97 waited for the title's 6 there, the whole SM_GAP) */
			/* test 97 (todo: "first PLAY from a demo always needs TRY 2", ~0.9 s): a Start in the logos or a demo only
			 * brings the title up; once it is there (and SM_GAP_TITLE vblanks with nothing held) the command again at
			 * once, not after the whole SM_GAP */
			sm_k = 0;
			sm_try++;
			log_printf(C_WHITE, "MENU: NO CREDIT STARTED, THE COMMAND AGAIN (TRY %u, EMU %u)", sm_try + 1,
			           (unsigned)frame_count);
		}
	}
	if (sm_check_at && (unsigned)frame_count == sm_check_at) {
		const unsigned on = *RAMP(game_on), mode = *RAMP(IB_MODE);
		const unsigned ship = *RAMP(IB_SHIP + (sm_side ? IB_SHIP_P2 : 0u));
		const unsigned want = (unsigned)(sm_side * 4 + sm_type);

		sm_check_at = 0;
		if (on != 1)
			log_printf(C_YELLOW, "MENU: NO GAME STARTED (A CREDIT NEEDED? FREE PLAY IS IN THE SERVICE MENU)");
		else if (!ib)
			log_printf(C_GREEN, "MENU: KURO BL CREDIT STARTED (THE %dP SIDE'S START)", sm_side + 1);
		else
			log_printf(mode == (unsigned)sm_mode && ship == want ? C_GREEN : C_RED,
			           "MENU: THE GAME RUNS %s, %s TYPE %c%s", mode < 3 ? sm_modes[mode] : "MODE ?",
			           ship < 8 ? sm_ships[ship / 4] : "SHIP ?", 'A' + (int)(ship & 3),
			           mode == (unsigned)sm_mode && ship == want ? " = THE CHOICE" : ", NOT THE CHOICE");
	}
}

/* ---- test 67: ibara's continue type box ------------------------------------------------- */

/* A continue takes the type the player holds with Start (button 1 = B, 2 = C, 1 + 2 = D, none = A: the game re-reads
 * it, the credit's first choice is not kept); user 2026-10-25: "it should become a more accessible feature". Start on
 * a side in its continue countdown (ct_waiting, work/g67/cont/REPORT.md) opens a box on the game with the type that
 * side last played (its ship byte while alive) chosen (Start with buttons 1 / 2 held still goes to the game, the
 * game's own way); LEFT / RIGHT choose A-D, START or A sends it: Start and the type's buttons together for CT_START
 * vblanks, then the buttons CT_TAIL more, no direction (in the ports, so the recording has it), B closes the box (the
 * next Start opens it again). The game (0C05DE00 -> 0C05AFF0, work/g67/cont) takes the type from the side's port on
 * the poll that first sees its Start new, bits & 0x3C (0x10 B, 0x20 C, 0x30 D, a direction left / right = a random
 * one or A); buttons with Start need no lead (a button-1 lead would take a second off the countdown); the mode is the
 * credit's (never written at a continue). The command waits for the side to be out (its record's u32 0: Start must be
 * new on such a frame); the box closes by itself when the continue is no longer possible (GAME OVER at the countdown's
 * end). Both sides (2P: Dyne); Kuro BL: none (its continue keeps the ship; user: "black label seems to ignore this
 * rule"). A side that never played (a 2P join) is left to the game.
 * Test 117 (user: "if player 2 joins in mid-game for co-op, open a menu for them to select the bomb (ibara/arrange) and
 * the ship/bomb type (black label); same thing if a player 2 starts a run and player 1 joins in mid-game"; then
 * "arrange doesn't have co-op": its patches allow no join, so no box there): Start alone on a side that never played
 * while the other side's run is on opens a JOIN box too. ibara: the continue's TYPE row and command (the join is the
 * same poll, 0C05DE00, on that side's port). Kuro BL (work/g91/blkship/REPORT.md; work/blkarr/blk_decomp.c): a join
 * after the select (0C06D950 -> 0C06CFF0) has no select, the side keeps the credit's ship byte (player +7 = side x 8,
 * STRAIGHT A; only a demo writes it there) and the respawn it calls (0C06D170) takes the speed from that byte: TYPE
 * (STRAIGHT / SPREAD) and BOMB TYPE (A-D) rows (UP / DOWN between them), and the command writes the byte first
 * (host_set HOST_JOIN: recorded, and in a replay's record) and then sends Start alone. The box opens only when the
 * game would take the join: Kuro BL's starts cap, a credit for the side's slot (or free play), no GAME OVER (0C06D950's
 * own test). */
#define CJ_PLAYER 0x0C29D1D8u     /* test 117: Kuro BL's 1P record (+ CJ_P2 the 2P one), u32 as ibara's */
#define CJ_P2 0x2A0u
#define CJ_SHIP 7u                /* u8: side x 8 + ship x 4 + bomb type (player +4's low byte) */
#define CJ_SPEED 0x18u            /* u32: a speed the respawn copies from CJ_SPEEDS[ship byte & 7] (+0x1C the same) */
#define CJ_STARTS 0x28Au          /* u8: the side's starts in this credit */
#define CJ_SPEEDS 0x0C1740D0u     /* u32 x 8 */
#define CJ_SLOT 0x0C297488u       /* u8 per side: its coin slot */
#define CJ_CREDITS 0x0C2860B0u    /* u8 per slot */
#define CJ_COST 0x0C3C8690u       /* u8 per slot (0 = free play) */
#define CJ_CAP 0x0C3CA6F8u        /* u8: the starts a credit allows */
#define CJ_GAME_OVER 0x0C29D194u  /* u8 */
#define CJ_SELECT 0x0C3C86ACu     /* u32: 1 while the credit's ship select runs (a join then goes into it) */
#define IB_PLAYER 0x0C283794u     /* the 1P record (+ IB_SHIP_P2 the 2P one): u32 DC000000 alive, 0 out */
#define IB_P_SHIPS 0x253u         /* u8: ships in reserve */
#define IB_P_STARTS 0x26Bu        /* u8: the side's starts in this credit (1 = the first; 0 = never joined) */
#define IB_CONT_MAX 0x0C395086u   /* u8: the starts a credit allows (the continues + 1) */
#define IB_GAME_OVER 0x0C283750u  /* u8: not 0 from GAME OVER on */
#define IB_STAGE_LOOP 0x0C28599Cu /* u8: not 0 while the stage loop runs */
#define CT_START 6                /* the command: Start with the buttons this many vblanks, */
#define CT_TAIL 4                 /* then the buttons alone this many */
enum { CT_IDLE, CT_PICK, CT_SENDING };
static int ct_state[2], ct_type[2], ct_last[2] = {-1, -1}; /* per side; ct_last = the type last played (-1 none) */
static int ct_join[2], ct_ship[2], ct_row[2];   /* test 117: the box is a join's; Kuro BL's TYPE and row (0 = TYPE) */
static int ct_blk_last[2] = {-1, -1};           /* test 117: Kuro BL's ship byte & 7 last played (-1 none) */
static unsigned ct_k[2], ct_check_at[2];
static uint32_t ct_prev[2], ct_hold[2];
static unsigned ct_opens, ct_sends;

/* side s can continue now: the stage loop on, not a demo, no GAME OVER, the side played in this credit and has a
 * start left, and it is out or dying on its last ship (hit E0000000 or waiting A0000000 with no ship in reserve;
 * work/g67/cont/reader.py in_continue, checked on all 49 continues of test 63's run) */
static int ct_waiting(int s)
{
	const uint32_t pl = IB_PLAYER + (uint32_t)s * IB_SHIP_P2, st = BE32(RAMP(pl));
	const unsigned starts = *RAMP(pl + IB_P_STARTS);

	if (!*RAMP(IB_STAGE_LOOP) || *RAMP(IB_DEMO) || *RAMP(IB_GAME_OVER))
		return 0;
	if (!starts || starts > *RAMP(IB_CONT_MAX))
		return 0;
	return st == 0 || ((st == 0xE0000000u || st == 0xA0000000u) && *RAMP(pl + IB_P_SHIPS) == 0);
}

/* test 117: side s can join now: it never played in this credit (out, starts 0) while the other side has, the run on,
 * not a demo, no GAME OVER; Kuro BL also past its select, with a credit for the side's slot (or free play). ARRANGE
 * none (no join in its rules) */
static int ct_joinable(int s)
{
	if (ARR)
		return 0;
	if (game_set == SET_IBARA) {
		const uint32_t pl = IB_PLAYER + (uint32_t)s * IB_SHIP_P2, o = IB_PLAYER + (uint32_t)(s ^ 1) * IB_SHIP_P2;
		if (!*RAMP(IB_STAGE_LOOP) || *RAMP(IB_DEMO) || *RAMP(IB_GAME_OVER))
			return 0;
		return BE32(RAMP(pl)) == 0 && *RAMP(pl + IB_P_STARTS) == 0 && *RAMP(o + IB_P_STARTS) != 0;
	} else {
		const uint32_t pl = CJ_PLAYER + (uint32_t)s * CJ_P2, o = CJ_PLAYER + (uint32_t)(s ^ 1) * CJ_P2;
		const unsigned slot = *RAMP(CJ_SLOT + (uint32_t)s) & 1;
		if (!*RAMP(BLK_GAME_ON) || *RAMP(BLK_DEMO) || *RAMP(CJ_GAME_OVER) || BE32(RAMP(CJ_SELECT)) != 0)
			return 0;
		if (BE32(RAMP(pl)) != 0 || *RAMP(pl + CJ_STARTS) != 0 || *RAMP(o + CJ_STARTS) == 0)
			return 0;
		return *RAMP(CJ_COST + slot) <= *RAMP(CJ_CREDITS + slot);
	}
}

/* test 117: the Kuro BL box's choice as the ship byte */
static int ct_blk_byte(int s)
{
	return s * 8 + (ct_ship[s] & 1) * 4 + (ct_type[s] & 3);
}

/* after sm_frame, on the pads' words (w[pad]; side s is pad s ^ pad_swap) */
static void ct_frame(uint32_t w[2])
{
	int s;

	const int ib = game_set == SET_IBARA;

	for (s = 0; s < 2; s++) {
		const int p = s ^ pad_swap;
		const uint32_t press = w[p] & ~ct_prev[s];
		const uint32_t pl = ib ? IB_PLAYER + (uint32_t)s * IB_SHIP_P2 : CJ_PLAYER + (uint32_t)s * CJ_P2;
		const char *const what = ct_join[s] ? "JOIN" : "CONTINUE";
		/* test 117: a join's box too; Kuro BL only a join's (test 81: ARRANGE's continue is the arcade's, its join none) */
		const int waiting = ct_state[s] == CT_IDLE ? (ib && ct_waiting(s)) || ct_joinable(s) :
		                    ct_join[s] ? ct_joinable(s) : ct_waiting(s);

		ct_prev[s] = w[p];
		ct_hold[s] &= w[p];
		if ((BE32(RAMP(pl)) & 0xCC000000u) == 0xCC000000u) { /* alive or flying in (work/g65/inv) */
			if (ib)
				ct_last[s] = *RAMP(IB_SHIP + (uint32_t)s * IB_SHIP_P2) & 3;
			else
				ct_blk_last[s] = *RAMP(pl + CJ_SHIP) & 7;
		}
		if (ct_state[s] == CT_IDLE && waiting && (press & A_START) && !(w[p] & (A_B1 | A_B2))) {
			/* (Start with buttons 1 / 2 held reaches the game as before: its own re-select) */
			ct_state[s] = CT_PICK;
			ct_join[s] = ct_joinable(s); /* test 117 */
			ct_row[s] = 0;
			if (ib) {
				ct_type[s] = ct_last[s] >= 0 ? ct_last[s] : 0;
			} else { /* none played yet: the arcade's join's STRAIGHT A */
				ct_ship[s] = ct_blk_last[s] >= 0 ? ct_blk_last[s] >> 2 & 1 : 0;
				ct_type[s] = ct_blk_last[s] >= 0 ? ct_blk_last[s] & 3 : 0;
			}
			ct_opens++;
			if (ib)
				log_printf(C_WHITE, "%s: %dP TYPE BOX, TYPE %c FIRST (PAD %d, EMU %u)", ct_join[s] ? "JOIN" : "CONTINUE",
				           s + 1, 'A' + ct_type[s], p, (unsigned)frame_count);
			else
				log_printf(C_WHITE, "JOIN: %dP BOX, %s BOMB TYPE %c FIRST (PAD %d, EMU %u)", s + 1,
				           ct_ship[s] ? "SPREAD" : "STRAIGHT", 'A' + ct_type[s], p, (unsigned)frame_count);
		} else if (ct_state[s] == CT_PICK) {
			if (!waiting) {
				ct_state[s] = CT_IDLE;
				log_printf(C_YELLOW, "%s: %dP BOX CLOSED, NO %s NOW (EMU %u)", what, s + 1, what, (unsigned)frame_count);
			} else if (press & (A_START | A_MA)) {
				ct_state[s] = CT_SENDING;
				ct_k[s] = 0;
				ct_sends++;
				if (ib)
					log_printf(C_GREEN, "%s: %dP %s TYPE %c (EMU %u)", what, s + 1, sm_ships[s], 'A' + ct_type[s],
					           (unsigned)frame_count);
				else
					log_printf(C_GREEN, "JOIN: %dP %s %s BOMB TYPE %c (EMU %u)", s + 1, sm_ships[s],
					           ct_ship[s] ? "SPREAD" : "STRAIGHT", 'A' + ct_type[s], (unsigned)frame_count);
			} else if (press & A_MB) {
				ct_state[s] = CT_IDLE;
				log_printf(C_WHITE, "%s: %dP BOX CLOSED (B)", what, s + 1);
			} else if (!ib && (press & (A_UP | A_DOWN))) { /* test 117: Kuro BL's two rows */
				ct_row[s] ^= 1;
			} else if (!ib && ct_row[s] == 0) {
				if (press & (A_LEFT | A_RIGHT))
					ct_ship[s] ^= 1;
			} else {
				if (press & A_LEFT)
					ct_type[s] = (ct_type[s] + 3) % 4;
				if (press & A_RIGHT)
					ct_type[s] = (ct_type[s] + 1) % 4;
			}
		}
		if (ct_state[s] != CT_IDLE)
			ct_hold[s] = w[p]; /* the box's presses never reach the game */
		w[p] &= ~ct_hold[s];
		if (ct_state[s] == CT_SENDING) {
			/* test 117: Kuro BL's Start alone, its ship byte written first */
			uint32_t cmd = !ib ? 0 : (ct_type[s] & 1 ? A_B1 : 0) | (ct_type[s] & 2 ? A_B2 : 0);
			if (ct_k[s] == 0 && BE32(RAMP(pl)) != 0) /* not out yet: the command once it is */
				continue;
			if (ct_k[s] == 0 && !ib)
				host_set(HOST_JOIN, ct_blk_byte(s), 1);
			if (ct_k[s] < CT_START)
				cmd |= A_START;
			w[p] = cmd;
			if (++ct_k[s] >= CT_START + CT_TAIL) {
				ct_state[s] = CT_IDLE;
				ct_check_at[s] = (unsigned)frame_count + SM_CHECK;
			}
		}
		if (ct_check_at[s] && (unsigned)frame_count == ct_check_at[s]) {
			const int plays = (BE32(RAMP(pl)) & 0xCC000000u) == 0xCC000000u;
			ct_check_at[s] = 0;
			if (ib) {
				const unsigned ship = *RAMP(IB_SHIP + (uint32_t)s * IB_SHIP_P2);
				log_printf(plays && (ship & 3) == (unsigned)ct_type[s] ? C_GREEN : C_RED,
				           "%s: %dP %s, %s TYPE %c%s", what, s + 1, plays ? "PLAYS" : "NOT PLAYING",
				           ship < 8 ? sm_ships[ship / 4] : "SHIP ?", 'A' + (int)(ship & 3),
				           (ship & 3) == (unsigned)ct_type[s] ? " = THE CHOICE" : ", NOT THE CHOICE");
			} else { /* test 117: the byte and the speed its respawn took */
				const unsigned b = *RAMP(pl + CJ_SHIP);
				const uint32_t v = BE32(RAMP(pl + CJ_SPEED)), want = BE32(RAMP(CJ_SPEEDS + (b & 7) * 4u));
				const int ok = plays && b == (unsigned)ct_blk_byte(s) && v == want;
				log_printf(ok ? C_GREEN : C_RED, "JOIN: %dP %s, %s BOMB TYPE %c%s, SPEED %05X%s", s + 1,
				           plays ? "PLAYS" : "NOT PLAYING", b & 4 ? "SPREAD" : "STRAIGHT", 'A' + (int)(b & 3),
				           b == (unsigned)ct_blk_byte(s) ? " = THE CHOICE" : ", NOT THE CHOICE", (unsigned)v,
				           v == want ? " = THE TYPE'S" : ", NOT THE TYPE'S");
			}
		}
	}
}

/* ---- test 55: the pause (pause_loop after present()) ------------------------------------- */

/* A run = the game's byte 1 (ibara's IB_GAME_ON, Kuro BL's BLK_GAME_ON), or 1 within the last
 * RUN_HOLD vblanks (ibara's is 0 for a vblank at each stage start), and not the service menu.
 * With back_in_run = pause, BACK there is no coin: pause_frame pauses the game instead. */
#define RUN_HOLD 60
static unsigned run_left;          /* vblanks the run still counts after the game's byte left 1 */
static int in_run;                 /* this vblank */
static uint32_t pause_prev[2];     /* pads 0-1 at the last vblank, for BACK's press */
static uint32_t pause_hold[2];     /* the presses that ended a pause: kept from the game until released */
static unsigned pauses, pause_flag; /* pauses; PF_PAUSED for the frame log's next line */
/* test 109 (user: "opening the xbox guide menu should pause the game as well"): XAM's XN_SYS_UI (xsdk_system_ui_open,
 * 1 while the Guide or a system dialog is up) pauses a run as BACK does; the pause menus read no pad while it is up nor
 * for GUIDE_GRACE vblanks after, so the B that closed the Guide does not close the pause too */
#define GUIDE_GRACE 15
static unsigned guide_left;
static int guide_was;

static int guide_input_off(void)
{
	const int open = xsdk_system_ui_open();

	guide_left = open ? GUIDE_GRACE : guide_left ? guide_left - 1 : 0;
	return guide_left != 0;
}
static uint64_t pause_ticks;       /* all pauses */

static void run_track(void)
{
	const int ib = game_set == SET_IBARA;

	if (*RAMP(ib ? IB_GAME_ON : BLK_GAME_ON) == 1)
		run_left = RUN_HOLD;
	else if (run_left)
		run_left--;
	in_run = run_left && BE32(RAMP(ib ? IB_TEST : BLK_TEST)) != IB_TEST_ON;
}

/* MAME cv1k.cpp: PORT_C 01 service coin, 02 JAMMA test, 04 coin 1, 08 coin 2, 10 start 1,
 * 20 start 2; PORT_D player 1 and PORT_L player 2: 01 up 02 down 04 left 08 right,
 * 10-80 buttons 1-4; PORT_F 02 S3 test. All active low.
 * Test 48: RT (A_AUTO) holds button 1 down on every other game logic frame: down from the vblank
 * RT goes down, flipped at each vblank where the logic-frame counter has moved since the last
 * one (once per logic frame, so also in the game's 30 Hz slowdown, where it reads the ports
 * every other vblank), or after AF_STALL vblanks without it moving.
 * Test 51: side p is pad p ^ pad_swap, through ibara's start menu (sm_frame).
 * Test 55: AUTO SHOT (A_AUTO, any button the controls give it) at af_hz(): a cycle of af_period()
 * logic frames from the press, button 1 down for the first half (rounded down): 30 Hz = down 1, up
 * 1 (test 48's), 20 Hz = 1 / 2, 15 Hz = 2 / 2, 12 Hz = 2 / 3, 10 Hz = 3 / 3. BACK is no coin in a
 * run while it pauses (pause_frame); the presses that ended a pause wait for their release. */
static void inputs_update(void)
{
	static const u8 coin_bit[2] = {0x04, 0x08}, start_bit[2] = {0x10, 0x20};
	static const u8 lock_bit[2] = {0x40, 0x80}; /* test 78: ARRANGE's aim lock (arrange/items.c arr_game_input) */
	u8 c = 0xFF, f = 0xFF, joy[2] = {0xFF, 0xFF};
	const unsigned lc = BE32(RAMP(LOGIC_WORD)) >> 16;
	const int moved = lc != af_lc;
	uint32_t pw[2] = {pad_word[0] | spd_latch[0], pad_word[1] | spd_latch[1]}; /* test 89: spd_latch */
	int p;

	spd_latch[0] = spd_latch[1] = 0;
	if (tr_turbo) /* test 89: START AT BOSS's skip: the ships left alone */
		pw[0] = pw[1] = 0;
	for (p = 0; p < 2; p++) {
		pause_hold[p] &= pw[p];
		pw[p] &= ~pause_hold[p];
	}
	if (host_reapply_due) /* test 81: a save state was loaded: the host's settings again */
		host_reapply();
	sm_frame(pw);
	{ /* test 81: the PC harness's "# host" lines of this vblank (the menu's changes on the console) */
		int what = 0, value = 0;
		while (REPLAY_HOST((unsigned)frame_count, &what, &value))
			host_set(what, value, 0);
		(void)what;
		(void)value;
	}
	if (gsel_req) /* test 72: the options' GAME SELECT */
		game_select_quit("THE OPTIONS");
	ct_frame(pw); /* test 67 */
	snd_frame();  /* test 68 */
	af_lc = lc;
	for (p = 0; p < 2; p++) {
		uint32_t w = pw[p ^ pad_swap];
		const unsigned period = af_period(p ^ pad_swap), down = period / 2; /* test 71: the side's pad's rate */

		if (in_run && cfg.back_pause)
			w &= ~A_COIN;
		if (w & A_AUTO) {
			if (!(prev_word[p] & A_AUTO)) {
				af_phase[p] = 0;
				af_wait[p] = 0;
			} else if (moved || ++af_wait[p] >= AF_STALL) {
				af_phase[p] = (af_phase[p] + 1) % period;
				af_wait[p] = 0;
			}
			if (af_phase[p] < down)
				w |= A_B1;
		}
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
		if (w & A_LOCK)
			c &= (u8)~lock_bit[p];
		joy[p] = (u8)~(w & 0xFF);
	}
	if (svc_left) { /* test 85: the debug menu's SERVICE MENU (no pad button is S3 any more) */
		svc_left--;
		f &= (u8)~0x02;
	}
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
		/* test 33: RB on any pad shows / hides the card; test 55: the button the controls set to it */
		static uint32_t prev_card_any;
		uint32_t any = (pad_word[0] | pad_word[1] | pad_word[2] | pad_word[3]) & A_CARD;
		if (any && !prev_card_any) {
			card_on = !card_on;
			card_on_at = card_handoffs;
			log_printf(C_GREEN, "CARD: %s AT FRAME %u (%s)", card_on ? "SHOWN" : "HIDDEN", (unsigned)frame_count,
			           card_button());
		}
		prev_card_any = any;
	}
	if (special_on) {
		/* test 52: A+B on the 1P side while game_main may read them: from power-on, and from a test
		 * press outside the service menu until the menu is up (the press resets the game into it) */
		const int test = !(f & 0x02), in_test = BE32(RAMP(IB_TEST)) == IB_TEST_ON;
		int hold = frame_count < SP_BOOT_HOLD;
		if (test && !sp_test_prev && !in_test) {
			sp_test_left = SP_TEST_HOLD;
			sp_test_holds++;
		}
		sp_test_prev = test;
		if (sp_test_left) {
			if (in_test)
				sp_test_left = 0;
			else {
				sp_test_left--;
				hold = 1;
			}
		}
		if (sp_switch_left) { /* test 53: the switch turned on: until game_main has read it */
			if (BE32(RAMP(IB_DSW_SEEN)) == in_dsw) {
				sp_switch_left = 0;
			} else {
				sp_switch_left--;
				hold = 1;
				if (!sp_switch_left)
					log_printf(C_RED, "SPECIAL: THE GAME HAS NOT READ THE SWITCH IN %u VBLANKS", SP_SWITCH_HOLD);
			}
		}
		if (hold)
			joy[0] &= (u8)~0x30;
	}
	if (game_set == SET_IBARA && *RAMP(IB_SPECIAL) != sp_seen) {
		const unsigned s = *RAMP(IB_SPECIAL);
		if (sp_seen != ~0u)
			log_printf(s == (unsigned)special_on ? C_GREEN : C_RED, "SPECIAL: THE GAME'S FLAG %u AT EMU %u%s", s,
			           (unsigned)frame_count, s ? " = THE SPECIAL VER." : "");
		sp_seen = s;
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
static int rtc_default; /* no clock found: the PC run's RTC, the checks run */
static int eep_saved;   /* test 33: the game starts with a saved EEPROM (not all 0xFFFF) */
static int rtc_vals[7] = {2026, 1, 1, 5, 12, 0, 0}; /* test 14: what the RTC9701 got, for the recording */

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
 * hash is the rows' folded with h = h * 31^320 + row hash. xsdk port: the texture is
 * write-combined GPU memory, written through volatile 32-bit stores (xsdk docs/PITFALLS.md: a
 * merged 64-bit store can fault there); the GPU's cached copy is dropped once a frame
 * (screen_frame), so no flush per row. Test 42: two game textures. A queued frame may still be
 * waiting for the GPU while the next one is made, so each frame's conversions go into the
 * texture the last queued frame does not sample (tex_work, set as the frame starts), and the
 * frame shows the one that holds the screen (tex_cur). */
static XsdkTexture gtex[2];
static volatile uint32_t *gtex_mem;  /* tex_work's texels, where this frame's conversions go */
static unsigned gtex_pitch;          /* texels per row (both) */
static uint32_t row_hash[GAME_H];
static uint32_t hash_row_mul;        /* 31^GAME_W mod 2^32 */
static int gtex_dirty[2];            /* written since the last invalidate */
static int tex_cur, tex_work;        /* holds the screen (tex_ok); this frame's conversions */

/* Test 93 (user's todo list: "restore the now loading animation from the PS2 version" and "smooth it out between the
 * launcher and the rom loading"; work/g93/loading/REPORT.md): the PS2 port's NOW LOADING ticker (gen/card/card_ticker.h:
 * the rose band scrolling right, the text over it scrolling left, 2 pixels a frame, a 120-frame cycle, rows 135-166 of
 * the portrait frame) drawn into the game's texture, so the picture's own layout shows it (size, position, rotation)
 * where the game comes: while the ROMs load over black, its opacity +8 of 255 a vblank from 0 (255 at once after the
 * launcher's, which showed it there), then -8 a vblank over the game's first frames (the board's black boot), as the
 * PS2's gate. The launcher draws the same at the FULL picture's place */
#define TK_STEP 8
static int tk_on;          /* the ini read (the layouts), the ticker shown while loading */
static int tk_alpha;       /* 0-255 */
static unsigned tk_c;      /* the PS2's counter, (c + 1) % 120 before each frame */
static int tk_black;       /* the loading texture cleared to black */

static uint32_t tk_mix(uint32_t d, uint32_t s, int a)
{
	const uint32_t r = ((s >> 16 & 0xFF) * a + (d >> 16 & 0xFF) * (255 - a)) / 255;
	const uint32_t g = ((s >> 8 & 0xFF) * a + (d >> 8 & 0xFF) * (255 - a)) / 255;
	const uint32_t b = ((s & 0xFF) * a + (d & 0xFF) * (255 - a)) / 255;
	return 0xFF000000u | r << 16 | g << 8 | b;
}

/* the ticker at counter c and opacity a into texture t (sm_box's mapping: the portrait column px = the texture's row,
 * the portrait row py = its column GAME_W - 1 - py): the band's copies at X = 2c and 2c - 240, the text's at
 * X = 240 - 2c and -2c, both wrapping in the 240 columns */
static void ticker_draw(volatile uint32_t *t, unsigned c, int a)
{
	int px, j;

	if (a <= 0)
		return;
	if (a > 255)
		a = 255;
	for (px = 0; px < TICKER_W; px++) {
		volatile uint32_t *dst = t + (size_t)px * gtex_pitch;
		const unsigned bx = (unsigned)(px + 2 * TICKER_W - 2 * (int)c) % TICKER_W, tx = (unsigned)(px + 2 * c) % TICKER_W;
		for (j = 0; j < TICKER_BAND_H; j++) {
			const int x = GAME_W - 1 - (TICKER_BAND_Y + j), k = j - (TICKER_TEXT_Y - TICKER_BAND_Y);
			uint32_t v = ticker_band[j * TICKER_W + bx];
			if (k >= 0 && k < TICKER_TEXT_H && ticker_text[k * TICKER_W + tx] >> 24)
				v = ticker_text[k * TICKER_W + tx];
			dst[x] = a == 255 ? v | 0xFF000000u : tk_mix(dst[x], v, a);
		}
	}
}

/* the ticker at opacity a over black (the band's rows black again under it: a falling opacity) */
static void ticker_loading_at(int a)
{
	volatile uint32_t *t = gtex[tex_cur].texels;

	for (int y = 0; y < GAME_H; y++)
		for (int x = tk_black ? GAME_W - 1 - (TICKER_BAND_Y + TICKER_BAND_H - 1) : 0;
		     x < (tk_black ? GAME_W - TICKER_BAND_Y : GAME_W); x++)
			t[(size_t)y * gtex_pitch + x] = 0xFF000000u;
	tk_black = 1;
	ticker_draw(t, tk_c, a);
	gtex_dirty[tex_cur] = 1;
}

/* present's, while the ROMs load: the next frame's ticker over black */
static void ticker_loading(void)
{
	tk_c = (tk_c + 1) % 120;
	tk_alpha = tk_alpha + TK_STEP > 255 ? 255 : tk_alpha + TK_STEP;
	ticker_loading_at(tk_alpha);
}

static int tex_ok; /* (below) */

/* the game's frames (host_vblank, after screen_frame): the ticker fading out over the picture. The conversion keeps rows
 * it thinks unchanged (the board's boot is black), so tex_ok = 0 as the pause does: the next vblank converts the whole
 * picture again (the same rows, the same hash) and the ticker goes on it at its new opacity; the frame after the last
 * is the game's alone */
static void ticker_game(void)
{
	if (boot_turbo) { /* test 112: the boot unpaced: the shown frames black under the ticker at full opacity */
		volatile uint32_t *t = gtex[tex_cur].texels;
		if (!boot_show)
			return;
		for (int y = 0; y < GAME_H; y++)
			for (int x = 0; x < GAME_W; x++)
				t[(size_t)y * gtex_pitch + x] = 0xFF000000u;
		tk_c = (tk_c + boot_steps) % 120; /* test 113: as many steps as the display's vblanks since the last */
		tk_alpha = 255;
		ticker_draw(t, tk_c, 255);
		gtex_dirty[tex_cur] = 1;
		/* test 113: no whole conversion after it (boot_check reads the corners from VRAM): the texture is only shown
		 * painted like this, and the picture that ends the boot comes from a blitter job's conversion */
		return;
	}
	if (tk_alpha <= 0)
		return;
	tk_c = (tk_c + 1) % 120;
	tk_alpha -= TK_STEP;
	if (tk_alpha <= 0)
		log_printf(C_WHITE, "NOW LOADING: FADED OUT AT EMU %u", (unsigned)frame_count);
	ticker_draw(gtex[tex_cur].texels, tk_c, tk_alpha);
	gtex_dirty[tex_cur] = 1;
	tex_ok = 0;
}
static int tex_shown;                /* the last queued frame's */
static uint32_t gtex_used[2];        /* frames_queued after the last frame that sampled it */
static unsigned tex_waits;           /* frames that had to wait for tex_work to be free (should stay 0) */

static uint32_t conv_row(int y, uint32_t sx, uint32_t sy)
{
	const uint16_t *row = cv1k_vram + (size_t)((y + sy) & 0xFFF) * CV1K_VRAM_STRIDE;
	volatile uint32_t *dst = gtex_mem + (size_t)y * gtex_pitch;
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
 * draws only the rows with row % BANDS == band). */
static volatile uint64_t conv_job;   /* blitter_jobs of the last job with a conversion */
static volatile uint64_t conv_early_job; /* test 63: ... whose conversion comes before its drawing */
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
		if (((y + sy) & 0xFFF) % BANDS == (uint32_t)b)
			row_hash[y] = conv_row(y, sx, sy);
	conv_ticks[b] += tb_read() - t0;
	conv_runs[b]++;
}

/* ---- blitter workers: band_thread[] ----------------------------------------------- */

static volatile int worker_band[6];  /* this job's band per hardware thread */
static volatile unsigned job_gen, worker_done[6], worker_alive[6];
static volatile unsigned worker_conv[6]; /* test 63: the job whose early conversion this worker has done */
static uint64_t wait_ticks; /* the game thread's time in workers_wait (test 63: and convs_wait) */
static int workers_up;      /* test 69: they run (copy_parallel may use them) */

/* Test 69: a save state's 8 MB of RAM copied by the game thread and the band workers at once (runtime/state.c's
 * rt_copy; the blitter has nothing drawing then). Each part goes through 128-byte lines of 64-bit loads, then stores
 * (cv1k_ram and the slots' copies are 128-byte aligned) */
static volatile int worker_copy;
static volatile struct { uint8_t *dst; const uint8_t *src; size_t n; } wcopy[BANDS];
/* test 80: ARRANGE's HUD bands on the workers (hud_draw: band 0 the game thread's, band b + 1 worker b's) */
static volatile int worker_hud;
static volatile int worker_hdd; /* test 84: the save state files' chunks (hddstate.c's hdd_work) */

static void copy_lines(void *dst, const void *src, size_t n)
{
	uint64_t *d = dst;
	const uint64_t *s = src;
	size_t i, k;

	if (((uintptr_t)dst | (uintptr_t)src | n) & 127) {
		memcpy(dst, src, n);
		return;
	}
	for (i = 0; i < n / 8; i += 16) {
		uint64_t v[16];
		for (k = 0; k < 16; k++)
			v[k] = s[i + k];
		for (k = 0; k < 16; k++)
			d[i + k] = v[k];
	}
}

static int bands_done(void *u);

static void copy_parallel(void *dst, const void *src, size_t n)
{
	const size_t part = n / (BANDS + 1) & ~(size_t)127;
	int b;

	if (!workers_up || n < (1u << 20)) {
		copy_lines(dst, src, n);
		return;
	}
	for (b = 0; b < BANDS; b++) {
		wcopy[b].dst = (uint8_t *)dst + part * (size_t)b;
		wcopy[b].src = (const uint8_t *)src + part * (size_t)b;
		wcopy[b].n = part;
	}
	worker_copy = 1;
	__sync_synchronize(); /* the parts before the generation */
	job_gen++;
	copy_lines((uint8_t *)dst + part * BANDS, (const uint8_t *)src + part * BANDS, n - part * BANDS);
	if (!bands_done(NULL))
		spin_yield_until(bands_done, NULL, 0);
	__sync_synchronize();
	worker_copy = 0;
	/* the last job was drawn and converted before (blitter_sync): its early conversion counts as done for this
	 * generation too, or screen_frame's convs_wait would wait for one that never comes */
	for (b = 0; b < BANDS; b++)
		worker_conv[band_thread[b]] = job_gen;
}

/* Test 80: ARRANGE's HUD (arrhud.c) in its ARRHUD_BANDS row bands: with the workers idle (this frame's jobs drawn), the
 * game thread's band and theirs at once, as copy_parallel hands them a save state's copy; otherwise (a job still
 * drawing on after its early conversion) all on the game thread. 1 = texels written */
_Static_assert(ARRHUD_BANDS == BANDS + 1, "the game thread's band and one per worker");
static unsigned hud_split, hud_alone; /* frames of each way (the HUD lines) */

static int hud_draw(volatile uint32_t *tex, unsigned pitch, uint32_t sx, uint32_t sy, int fresh)
{
	int b;

	if (!arrhud_begin(tex, pitch, sx, sy, fresh))
		return 0;
	if (workers_up && bands_done(NULL)) {
		worker_hud = 1;
		__sync_synchronize(); /* the HUD's job (arrhud_begin) before the generation */
		job_gen++;
		arrhud_band(0);
		if (!bands_done(NULL))
			spin_yield_until(bands_done, NULL, 0);
		__sync_synchronize(); /* the workers' rows (fb, texels) before going on */
		worker_hud = 0;
		/* as copy_parallel: the last job's early conversion counts as done for this generation */
		for (b = 0; b < BANDS; b++)
			worker_conv[band_thread[b]] = job_gen;
		hud_split++;
	} else {
		for (b = 0; b < ARRHUD_BANDS; b++)
			arrhud_band(b);
		hud_alone++;
	}
	return 1;
}

static int job_came(void *seen)
{
	return job_gen != *(const unsigned *)seen;
}

/* Waits for a job at low SMT priority (yielding to the kernel now and then), draws at
 * medium. Test 63: a job that writes nothing in the shown window (blitter_job_win 0) is
 * converted first, so the frame can be shown while the job is still drawing. */
static uint32_t worker_task(void *u)
{
	const int t = (int)(intptr_t)u;
	unsigned seen = job_gen;

	worker_done[t] = seen;
	worker_conv[t] = seen;
	worker_alive[t] = 1;
	for (;;) {
		spin_yield_until(job_came, &seen, 0);
		seen = job_gen;
		__sync_synchronize(); /* the job (list copy) after its generation */
		if (worker_copy) { /* test 69: a part of a save state's copy (copy_parallel) */
			const int b = worker_band[t];
			copy_lines((void *)wcopy[b].dst, (const void *)wcopy[b].src, wcopy[b].n);
		} else if (worker_hdd) { /* test 84: a save state file's chunks until the file is done */
			hdd_work(worker_band[t]);
		} else if (worker_hud) { /* test 80: a band of ARRANGE's HUD (hud_draw) */
			arrhud_band(worker_band[t] + 1);
		} else if (worker_band[t] >= 0) {
			const int early = conv_early_job == blitter_jobs;
			if (early) {
				conv_band(worker_band[t]);
				__sync_synchronize(); /* the texture rows and row_hash before worker_conv */
				worker_conv[t] = seen;
			}
			blitter_draw_band(worker_band[t]);
			if (!early && conv_job == blitter_jobs) /* test 20: this job carries the conversion */
				conv_band(worker_band[t]);
		}
		__sync_synchronize(); /* VRAM (and the texture rows) before done */
		worker_done[t] = seen;
	}
	return 0;
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
		if (!blitter_job_win)     /* test 63: its timing pass found no write in the shown window */
			conv_early_job = blitter_jobs;
	}
	__sync_synchronize();
	job_gen++;
}

/* test 63: the job's early conversion is done on every band */
static int convs_done(void *u)
{
	int b;

	(void)u;
	for (b = 0; b < BANDS; b++)
		if (worker_conv[band_thread[b]] != job_gen)
			return 0;
	return 1;
}

static void convs_wait(void)
{
	uint64_t t0 = tb_read();

	if (!convs_done(NULL))
		spin_yield_until(convs_done, NULL, 0);
	__sync_synchronize();
	wait_ticks += tb_read() - t0;
}

static int bands_done(void *u)
{
	int b;

	(void)u;
	for (b = 0; b < BANDS; b++)
		if (worker_done[band_thread[b]] != job_gen)
			return 0;
	return 1;
}

static void workers_wait(void)
{
	uint64_t t0 = tb_read();

	if (!bands_done(NULL))
		spin_yield_until(bands_done, NULL, 0);
	__sync_synchronize();
	wait_ticks += tb_read() - t0;
}

/* 0 when all start */
static int workers_launch(void)
{
	uint64_t t0;
	int b;

	for (b = 0; b < BANDS; b++) {
		const int t = band_thread[b];
		HANDLE h;
		worker_band[t] = b;
		if (!NT_SUCCESS(xsdk_thread_create_on(&h, 256 * 1024, worker_task, (void *)(intptr_t)t, (uint32_t)t)))
			return -1;
		NtClose(h);
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
		{A_B3, "3"}, {A_B4, "4"}, {A_START, "ST"}, {A_COIN, "CN"}, {A_AUTO, "AF"},
	};
	unsigned i;

	for (i = 0; i < sizeof(lab) / sizeof(lab[0]); i++) {
		text(x, y, !on ? C_OFF : (w & lab[i].bit) ? C_GREEN : C_DIM, lab[i].s);
		x += 6 * ((int)strlen(lab[i].s) + 1);
	}
	return x;
}

static int sound_ok; /* sound_start() succeeded */

/* four rows: chip and thread, counts, driver frames, check */
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
	snprintf(line, sizeof(line), "SND T%d CHIP %u HZ  RUN %s MS/FRAME (MAX %s)  OUT %u.%02u/FR", SOUND_THREAD,
	         ymz_rate(), a, b, st->per_frame_x100 / 100, st->per_frame_x100 % 100);
	text(4, y, C_WHITE, line);
	snprintf(line, sizeof(line), " WRITES %u  BLOCKS %u  QFULL %u  OUT %u  CLIP %u", (unsigned)ymz770_writes,
	         (unsigned)ymz_blocks, (unsigned)ymz_queue_full, (unsigned)snd_out_frames, (unsigned)snd_out_clipped);
	text(4, y + 8, ymz_queue_full ? C_RED : C_WHITE, line);
	/* test 46: the cushion in ms (48 samples = 1 ms), one decimal */
	{
		char m[16];
		const unsigned mn = st->cushion_min;
		if (mn == ~0u)
			snprintf(m, sizeof(m), "--");
		else
			snprintf(m, sizeof(m), "%u.%u", mn * 10 / 48 / 10, mn * 10 / 48 % 10);
		snprintf(line, sizeof(line), " CUSHION %u.%u LOW %u.%u MIN %s MS UNDER %u TRIM %u DRIFT %c%u/%u",
		         st->cushion * 10 / 48 / 10, st->cushion * 10 / 48 % 10, st->cushion_low * 10 / 48 / 10,
		         st->cushion_low * 10 / 48 % 10, m, st->underruns, st->trims,
		         st->drift < 0 ? '-' : st->drift > 0 ? '+' : ' ', st->dropped, st->doubled);
		text(4, y + 16, st->underruns || st->trims || (mn != ~0u && mn < CUSHION_LOW) ? C_YELLOW : C_WHITE, line);
	}
	switch (ck->state) {
	case SCHK_OFF:
		snprintf(line, sizeof(line), "SND CHECK OFF (%s)", chk_off_why);
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

	snprintf(line, sizeof(line), XEX_VERSION " XEX %s  PCB FIT+ 3.75%%  VIDEO %dX%d%s %s  XSDK",
	         !game_chosen ? "RELEASE" : special_on ? "IBARA SP" : game->tag, video_w, video_h,
	         vmode.is_interlaced ? "I" : "", aspect_wide ? "16:9" : "4:3");
	text(4, ROW(0), C_GREEN, line);
	/* test 42: frames not shown (catching up + back in step), frames started over a quarter vblank
	 * late (LAG) and the latest start after loading, schedule restarts (RS) */
	if (disp.hz_milli)
		snprintf(a, sizeof(a), "%u.%03u", disp.hz_milli / 1000, disp.hz_milli % 1000);
	else
		snprintf(a, sizeof(a), "-");
	ms2(b, sizeof(b), disp.lag_max);
	if (disp.vbl_timeouts || disp.begin_fails)
		snprintf(line, sizeof(line), "DISPLAY %lu  HZ %s  VTO %u  BEGIN %u  SKIP %u+%u  RS %u", frame, a,
		         disp.vbl_timeouts, disp.begin_fails, disp.skip_catch, disp.skip_step, disp.resyncs);
	else
		snprintf(line, sizeof(line), "DISPLAY %lu  HZ %s  SKIP %u+%u  LAG %u MAX %s MS  RS %u", frame, a,
		         disp.skip_catch, disp.skip_step, disp.lag_frames, b, disp.resyncs);
	text(4, ROW(1), disp.vbl_timeouts || disp.begin_fails || disp.resyncs ? C_YELLOW : C_WHITE, line);

	if (menu_on) { /* test 38; test 53: the options are in the start menu (Start in the attract) */
		text(4, ROW(2), C_YELLOW, "CHOOSE THE GAME: D-PAD UP / DOWN, THEN A OR START");
		for (r = 0; r < NSETS; r++) {
			snprintf(line, sizeof(line), "%s %s%s", r == menu_sel ? ">" : " ", games[r].title,
			         r == SET_IBARA && cfg.special ? "  (SPECIAL VER.)" : "");
			text(4, ROW(3 + r), r == menu_sel ? C_GREEN : C_WHITE, line);
		}
	} else if (!game_running) {
		text(4, ROW(2), C_DIM, game_chosen ? "EMU WAITING FOR THE ROMS" : "EMU WAITING FOR THE CHOICE OF GAME");
	} else if (shown.n) {
		unsigned n = shown.n;
		unsigned pct = (unsigned)((uint64_t)disp.vbl * 100 * n / (shown.frame ? shown.frame : 1));
		ms2(a, sizeof(a), shown.frame / n);
		ms2(b, sizeof(b), shown.frame_max);
		snprintf(line, sizeof(line), "EMU %u  FRAME %s MS (MAX %s)  %u%% OF DISPLAY  LATE %u",
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
		snprintf(line, sizeof(line), "RESYNC %u  FW %c  INTERP ENTRIES %u  STACK %u KB OF %u",
		         (unsigned)stat_resyncs, blitter_firmware < 0 ? '-' : 'A' + blitter_firmware, interp_entries,
		         stack_used_kb, stack_kb);
		text(4, ROW(6), halted ? C_RED : stack_used_kb > stack_kb / 2 ? C_YELLOW : C_WHITE,
		     halted ? "GAME HALTED: SEE THE FATAL LINES" : line);
	}

	romload_rows(lt, lc);
	for (r = 0; r < ROMLOAD_ROWS; r++)
		text(4, ROW(7 + r), lc[r], lt[r]);

	/* the IO thread and the kernel's pads */
	fill(2, ROW(11) + 1, CARD_W - 4, 1, C_GRID);
	if (io_alive) {
		ms2(a, sizeof(a), (uint64_t)io_max_us * PPC_TIMEBASE_FREQ / 1000000);
		ms2us(b, sizeof(b), io_sleep_max_us);
		snprintf(line, sizeof(line), "PADS XAM ON T%d LOOPS %u MAX %s SLEPT %s MS OVER 16 MS %u", IO_THREAD, io_loops,
		         a, b, io_late);
	} else {
		snprintf(line, sizeof(line), "IO T%d NOT RUNNING YET", IO_THREAD);
	}
	text(4, ROW(12) - 2, io_alive ? C_WHITE : C_DIM, line);
	for (r = 0; r < NPADS; r++) {
		uint32_t w = pad_word[r];
		int on = (w & A_ON) != 0, x;
		snprintf(line, sizeof(line), "PAD%d %s %s A%u D%u", r, role[r < 2 ? r ^ pad_swap : r], on ? "ON" : "--",
		         pad_attaches[r], pad_detaches[r]); /* test 51: the menu's side */
		text(4, ROW(13 + r) - 2, on ? C_WHITE : C_DIM, line);
		x = labels(4 + 6 * 21, ROW(13 + r) - 2, w, on);
		snprintf(line, sizeof(line), "PKT %u", pad_reports[r]);
		text(x + 6, ROW(13 + r) - 2, on ? C_WHITE : C_DIM, line);
	}
	if (game_set == SET_IBARA && game_running) /* test 51: the start menu's choice */
		snprintf(line, sizeof(line), "TO GAME: C %02X D %02X L %02X F %02X  COINS %u %u  MENU %dP %s %c", in_port_c,
		         in_port_d, in_port_l, in_port_f, coins[0], coins[1], sm_side + 1, sm_modes[sm_mode], 'A' + sm_type);
	else if (game_running) /* test 55: Kuro BL's side and the pauses */
		snprintf(line, sizeof(line), "TO GAME: C %02X D %02X L %02X F %02X  COINS %u %u  %dP SIDE PAUSES %u", in_port_c,
		         in_port_d, in_port_l, in_port_f, coins[0], coins[1], sm_side + 1, pauses);
	else
		snprintf(line, sizeof(line), "TO GAME: C %02X D %02X L %02X F %02X  COINS %u %u", in_port_c, /* test 85: no R3 */
		         in_port_d, in_port_l, in_port_f, coins[0], coins[1]);
	text(4, ROW(17) - 2, sm_state != SM_CLOSED ? C_YELLOW : C_WHITE, line);
	fill(2, ROW(18) - 3, CARD_W - 4, 1, C_GRID);

	/* sound thread */
	draw_sound_rows(ROW(18) - 1);
	fill(2, ROW(22) - 2, CARD_W - 4, 1, C_GRID);

	/* test 13: check against the PC run, the pcb model, the game's own slowdown */
	if (chk.failed)
		text(4, ROW(22), C_RED, chk.why);
	else if (chk.off)
		snprintf(line, sizeof(line), "CHECK OFF: %s", chk_off_why);
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
	{
		unsigned lt = late_cause[LC_CPU] + late_cause[LC_BAND] + late_cause[LC_HOST] + late_cause[LC_OTHER] +
		              late_cause[LC_HASH];
		unsigned v = model_logic + model_drops;
		unsigned pm = v ? (unsigned)((uint64_t)model_drops * 1000 / v) : 0;
		snprintf(line, sizeof(line), "LATE AFTER LOAD %u: CPU %u BAND %u HOST %u OTHER %u HASH %u", lt,
		         late_cause[LC_CPU], late_cause[LC_BAND], late_cause[LC_HOST], late_cause[LC_OTHER],
		         late_cause[LC_HASH]);
		text(4, ROW(25), lt ? C_YELLOW : C_GREEN, line);
		ms2(a, sizeof(a), model_frames ? model_cpu / model_frames : 0);
		ms2(b, sizeof(b), model_cpu_max);
		snprintf(line, sizeof(line), "FIT+ %u FR  DROPS %u %u.%u%%  CPU %s MAX %s  LATE %u", model_frames,
		         model_drops, pm / 10, pm % 10, a, b, model_late);
		text(4, ROW(26), model_late ? C_YELLOW : C_GREEN, line);
	}
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

	/* xsdk port: the kernel's audio driver, the clock, xsdk's presenting, the frame log */
	{
		const volatile struct drv_counts *dc = &drv_counts;
		/* test 47: QUIET = calls before the game's first sound (CALLS = PLAYED + QUIET + SILENT);
		 * test 55: + PAUSED (silence while the game is paused) */
		snprintf(line, sizeof(line), "AUDIO DRV PLAY %u QUIET %u SIL %u PAUSE %u FAIL %u %u.%u/S", dc->played,
		         dc->quiet, dc->silent, dc->paused, dc->failed, dc->rate_x10 / 10, dc->rate_x10 % 10);
		text(4, ROW(31), dc->failed || dc->reg_result ? C_RED : dc->played ? C_GREEN : C_DIM, line);
	}
	{
		char ct[CLOCK_ROWS][100];
		uint32_t cc[CLOCK_ROWS];
		clock_rows(ct, cc);
		text(4, ROW(32), cc[0], ct[0]);
	}
	{
		XsdkPresentStats ps;
		xsdk_present_stats(&ps);
		/* test 42: BEHIND = frames shown after their vblank (after loading); test 41's WAIT MAX
		 * (xsdk_present_begin's) is 0 now, the game thread waits first */
		snprintf(line, sizeof(line), "PRESENT VBL %u FLIPS %u MISSED %u LATE %u BEHIND %u GUIDE %u",
		         (unsigned)ps.vblanks, (unsigned)ps.flips, (unsigned)ps.missed, (unsigned)ps.late,
		         disp.shown_late, (unsigned)ps.system_frames);
		text(4, ROW(33), ps.late ? C_YELLOW : C_WHITE, line);
	}
	{
		char pt[PROF_ROWS][100];
		uint32_t pc[PROF_ROWS];
		prof_rows(pt, pc);
		text(4, ROW(34), pc[0], pt[0]);
	}
	fill(2, ROW(35) - 1, CARD_W - 4, 1, C_GRID);

	/* test 14d: the write gate and what the writes cost band 1 */
	{
		char wt[WGATE_ROWS][100];
		uint32_t wc[WGATE_ROWS];
		wgate_rows(wt, wc);
		for (r = 0; r < WGATE_ROWS; r++)
			text(4, ROW(35 + r), wc[r], wt[r]);
	}
	{
		ms2(a, sizeof(a), (uint64_t)card_us * PPC_TIMEBASE_FREQ / 1000000);
		ms2(b, sizeof(b), (uint64_t)card_us_max * PPC_TIMEBASE_FREQ / 1000000);
		ms2us(c, sizeof(c), lk_max_us);
		snprintf(line, sizeof(line), "CARD %s (MAX %s) SKIP %u LOG %lu LOST %lu LOCK %u/%s MS SLOW %u", a, b,
		         card_skipped, log_filed, log_file_lost, lk_waits, c, io_slow_lines);
		text(4, ROW(37), log_file_lost || io_slow_lines || lk_long ? C_YELLOW : C_WHITE, line);
	}
	fill(2, ROW(38) - 1, CARD_W - 4, 1, C_GRID);

	/* test 40: the network log */
	{
		char nt[NETLOG_ROWS][100];
		uint32_t nc[NETLOG_ROWS];
		netlog_rows(nt, nc);
		for (r = 0; r < NETLOG_ROWS; r++)
			text(4, ROW(38 + r), nc[r], nt[r]);
	}
	fill(2, ROW(40) - 1, CARD_W - 4, 1, C_GRID);

	/* test 41: the file thread */
	if (file_alive) {
		ms2(a, sizeof(a), (uint64_t)file_max_us * PPC_TIMEBASE_FREQ / 1000000);
		snprintf(line, sizeof(line), "FILE T%d MAX %s MS  SLOW %u  LAST %u MS IDLE %u S PADS %u", FILE_THREAD, a,
		         file_slow, file_slow_us / 1000, file_slow_idle_s, file_slow_pads);
		text(4, ROW(40), file_slow ? C_YELLOW : C_WHITE, line);
	} else {
		text(4, ROW(40), io_files ? C_RED : C_DIM,
		     io_files ? "NO FILE THREAD: THE FILES ON THE IO THREAD (AS TEST 40)" : "FILE THREAD NOT RUNNING YET");
	}

	/* the LOG_SHOWN lines ending at log_view, copied under the lock, drawn after it */
	{
		struct log_line shown_lines[LOG_SHOWN];
		int nl;
		log_lock(LK_CARD);
		first = log_view > LOG_SHOWN ? log_view - LOG_SHOWN : 0;
		for (nl = 0; first + nl < log_view; nl++)
			shown_lines[nl] = log_ring[(first + nl) % LOG_LINES];
		log_unlock();
		for (r = 0; r < nl; r++)
			text(4, ROW(41 + r), shown_lines[r].color, shown_lines[r].s);
	}
}

/* ---- video: xsdk's GPU layer -------------------------------------------------------- */

/* vertices: float2 position (clip space, y up), float2 texture coordinates (v = 0 = the first
 * row); quad.vert's locations 0 and 2 */
#define VERT_FLOATS 4
#define VERT_BYTES (VERT_FLOATS * 4)
#define QUAD_VERTS 6
#define QUAD_BYTES (QUAD_VERTS * VERT_BYTES)
#define SCAN_MAX 2048          /* quads: at most one per output column or row */
#define LAYOUT_QUADS (6 + SCAN_MAX)       /* test 53: a layout: the card's 2 quads, the game's 2, the scanlines; test
                                          * 88: + NOW LOADING's, + CUSTOM's picture */
#define LAYOUT_ON 3                       /* test 88: the power-on card layout's quads (+ NOW LOADING) */
#define VB_QUADS (LAYOUT_ON + 2 * LAYOUT_QUADS) /* the power-on card layout, then two layouts used in turn (layout_apply) */
static const XsdkVertexElement vlayout[] = {
	{.usage = XSDK_USAGE_POSITION, .format = XSDK_VERTEX_FLOAT2, .offset_bytes = 0},
	{.usage = XSDK_USAGE_TEXCOORD, .format = XSDK_VERTEX_FLOAT2, .offset_bytes = 8},
};

static XsdkShader vs, ps;
static XsdkTexture stex;               /* test 37: 256 greys, column g = g / 255 */
static XsdkSamplerState samp_point, samp_linear;
static XsdkBlendState blend_mul, blend_none, blend_kmul, blend_kadd; /* test 91: kmul / kadd = BRIGHTNESS */
static volatile uint32_t *vmem;        /* every quad, one block of GPU memory */
static unsigned vquads;                /* quads written so far */
static int fb_w, fb_h;
struct vb { uint32_t address, bytes, verts; };
static struct vb vb_game, vb_card, vb_int, vb_full, vb_scan; /* test 33: the game alone, centred */
static struct vb vb_cust, vb_load; /* test 88: PICTURE SIZE CUSTOM's picture; NOW LOADING */
static int scan_quads;
static int lay_cur = -1;               /* test 53: the layout the frames draw with (-1: the power-on card layout) */
static uint32_t lay_used[2];           /* test 53: frames_queued after the last frame drawn with each layout */
static unsigned lay_waits, lay_builds;
static uint64_t stamps[HZ_WINDOW], last_stamp;
static uint32_t stamp_vb[HZ_WINDOW];   /* test 42: xsdk's vblank count at each stamp */
static uint32_t frames_queued;         /* xsdk_present_end calls */

/* test 42: the schedule. The frame being made started at (or after) vblank sched_vb and is due on
 * screen at sched_vb + 1, when the next one starts. vb_time() is when a vblank comes, from the last
 * one the game thread saw come (anchor) and the measured period. */
static uint32_t sched_vb, anchor_vb;
static uint64_t anchor_t;
static int sched_set;
static uint64_t frame_start;           /* when the frame being made started */
static uint32_t pres_flags;            /* this frame's PF_SHOWN_LATE / PF_NOT_SHOWN, for the frame log */
/* per queued frame (by frames_queued): its vblank, its emulated frame, its start to its queueing;
 * a flip after its vblank (xsdk's last_flip_vblank) = shown late */
#define QD 8
static uint32_t q_due[QD], q_emu[QD];
static uint64_t q_work[QD];
static uint32_t flips_seen;
static int behind_on;                  /* frames are being shown late (an episode, after loading) */
static unsigned ep_frame, ep_late, ep_skips;
static uint64_t ep_lag;

/* n quads of 6 vertices (q[k][6][VERT_FLOATS]) into GPU memory with 32-bit stores */
static struct vb make_vb(float (*q)[QUAD_VERTS][VERT_FLOATS], int n)
{
	struct vb v = {0, 0, 0};
	volatile uint32_t *dst;
	const uint32_t *src = (const uint32_t *)q;
	unsigned i, words = (unsigned)n * QUAD_BYTES / 4;

	if (!vmem || vquads + (unsigned)n > VB_QUADS || n <= 0)
		return v;
	dst = vmem + vquads * QUAD_BYTES / 4;
	for (i = 0; i < words; i++)
		dst[i] = src[i];
	v.address = xsdk_gpu_address(dst);
	v.bytes = words * 4;
	v.verts = (unsigned)n * QUAD_VERTS;
	xsdk_gpu_invalidate(v.address, v.bytes);
	vquads += (unsigned)n;
	return v;
}

/* texture corners for the top left, top right, bottom left, bottom right of a quad: test 2's
 * ROT270 (the raster turned back to portrait), the raster as it is, test 37's half turn */
static const float uv_rot[4][2] = {{1, 0}, {1, 1}, {0, 0}, {0, 1}};
static const float uv_plain[4][2] = {{0, 0}, {1, 0}, {0, 1}, {1, 1}};
static const float uv_half[4][2] = {{1, 1}, {0, 1}, {1, 0}, {0, 0}};

/* x0, y0, x1, y1 in output pixels -> 6 vertices (2 triangles) at v; uv[4][2] for the
 * top left, top right, bottom left, bottom right corners */
static void quad_vertices(float v[QUAD_VERTS][VERT_FLOATS], float x0, float y0, float x1, float y1,
                          const float uv[4][2])
{
	const float l = x0 / fb_w * 2 - 1, r = x1 / fb_w * 2 - 1;
	const float t = 1 - y0 / fb_h * 2, b = 1 - y1 / fb_h * 2;
	const float corner[4][2] = {{l, t}, {r, t}, {l, b}, {r, b}};
	static const int order[6] = {0, 1, 2, 2, 1, 3};
	int i;

	for (i = 0; i < 6; i++) {
		const int k = order[i];
		const float e[VERT_FLOATS] = {corner[k][0], corner[k][1], uv[k][0], uv[k][1]};
		memcpy(v[i], e, sizeof(e));
	}
}

static struct vb make_quad(float x0, float y0, float x1, float y1, const float uv[4][2])
{
	float q[1][QUAD_VERTS][VERT_FLOATS];

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
static void scan_build(float x0, float y0, float x1, float y1, int across_y)
{
	static float v[SCAN_MAX][QUAD_VERTS][VERT_FLOATS];
	const float a0 = across_y ? y0 : x0, a1 = across_y ? y1 : x1;
	const float p = (a1 - a0) / GAME_H, s = cfg.scanline_strength / 100.0f;
	const int lim = across_y ? fb_h : fb_w; /* test 88: a CUSTOM picture can pass the screen's edges */
	const int i0 = ifloor(a0) < 0 ? 0 : ifloor(a0), i1 = -ifloor(-a1) > lim ? lim : -ifloor(-a1);
	float d = (float)ifloor(p / 2 + 0.25f), uv[4][2];
	int i, j, g, run = i0, grey = 255, n = 0;
	static uint32_t greys[32][256];

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
	if (!stex.address) { /* test 53: once (the layouts are built again) */
		if (!NT_SUCCESS(xsdk_texture_create(&stex, XSDK_FORMAT_A8R8G8B8, 256, 32, 1, false))) {
			log_printf(C_RED, "PICTURE: NO GPU MEMORY FOR THE SCANLINES");
			return;
		}
		for (j = 0; j < 32; j++)
			for (i = 0; i < 256; i++)
				greys[j][i] = 0xFF000000u | (uint32_t)i * 0x010101u;
		xsdk_texture_upload(&stex, 0, greys, sizeof(greys[0]));
		xsdk_gpu_invalidate(stex.address, stex.size_bytes);
	}
	vb_scan = make_vb(v, n);
	scan_quads = vb_scan.verts ? n : 0;
}

/* test 37: the game alone, centred, as the ini says (once the ini is read): tate = 0 the
 * 240x320 portrait (ROT270), left the 320x240 raster as it is, right the raster turned half a
 * turn; picture = integer the largest whole-number scale that fits, full the full height (or
 * width) at the picture's 3:4 (4:3); then the scanlines. Test 48: sizes in square units (the
 * screen width is fb_w * par), widths turned into front-buffer columns by par */
static void centred(float r[4], float w, float h)
{
	r[0] = (fb_w - w) / 2;
	r[1] = (fb_h - h) / 2;
	r[2] = (fb_w + w) / 2;
	r[3] = (fb_h + h) / 2;
}

/* test 60: where GADGETS go: tate off = beside the game (16:9: test 58's artwork; 4:3: the panel at the right, the
 * game moved to the left edge), tate on a 16:9 display = the bars above and below it; tate on 4:3 leaves no room */
/* test 88: the display shape a PICTURE SIZE CUSTOM picture is kept for (settings.h PIC_SHAPES): 16:9, 4:3, tate on
 * 16:9, tate on 4:3 */
static int pic_shape(void)
{
	return (cfg.tate != TATE_OFF) * 2 + !aspect_wide;
}

static float pic_rc[4]; /* test 88: the CUSTOM picture's place (output pixels), for ADJUST PICTURE's box */

static int gadgets_view(void)
{
	if (cfg.tate == TATE_OFF)
		return aspect_wide ? GV_WIDE : GV_43;
	return !aspect_wide ? GV_NONE : cfg.tate == TATE_LEFT ? GV_TATE_L : GV_TATE_R;
}

static void alone_layout(void)
{
	const float (*uv)[2] = cfg.tate == TATE_LEFT ? uv_plain : cfg.tate == TATE_RIGHT ? uv_half : uv_rot;
	const int pw = cfg.tate ? GAME_W : GAME_H, ph = cfg.tate ? GAME_H : GAME_W; /* the picture */
	const float sw = fb_w * par;
	const int kw = (int)(sw / pw);
	int k = fb_h / ph < kw ? fb_h / ph : kw;
	float ri[4], rf[4], rc[4], w, h;
	const float *r;

	if (k < 1)
		k = 1;
	centred(ri, (float)pw * k / par, (float)ph * k);
	h = fb_h;
	w = h * pw / ph;
	if (w > sw) {
		w = sw;
		h = w * ph / pw;
	}
	centred(rf, w / par, h);
	{ /* test 88: PICTURE SIZE CUSTOM = FULL's picture at the shape's size, its centre moved (720ths of the height);
	   * test 89: X / Y SIZE and X / Y POSITION as the player sees the game (tate LEFT: the player's right is the
	   * screen's down and the player's down its left, uv_plain; RIGHT: up and right, uv_half) */
		const int sh = pic_shape(), rot = cfg.tate != TATE_OFF;
		const int px = cfg.pic_x[sh], py = cfg.pic_y[sh];
		const int dx = cfg.tate == TATE_LEFT ? -py : cfg.tate == TATE_RIGHT ? py : px;
		const int dy = cfg.tate == TATE_LEFT ? px : cfg.tate == TATE_RIGHT ? -px : py;
		const float k = cfg.pic_size[sh] / 1000.0f, u = fb_h / 720.0f;
		const float kx = k * (rot ? cfg.pic_sy[sh] : cfg.pic_sx[sh]) / 1000.0f;
		const float ky = k * (rot ? cfg.pic_sx[sh] : cfg.pic_sy[sh]) / 1000.0f;
		const float cx = fb_w / 2.0f + dx * u / par, cy = fb_h / 2.0f + dy * u;
		const float hw = (rf[2] - rf[0]) * kx / 2, hh = (rf[3] - rf[1]) * ky / 2;
		rc[0] = cx - hw;
		rc[1] = cy - hh;
		rc[2] = cx + hw;
		rc[3] = cy + hh;
	}
	if (cfg.gadgets && gadgets_view() == GV_43 && cfg.picture != PIC_CUSTOM) { /* test 60: the game at the left edge,
	                                                                          * GADGETS' panel at the right */
		ri[2] -= ri[0];
		ri[0] = 0;
		rf[2] -= rf[0];
		rf[0] = 0;
	}
	vb_int = make_quad(ri[0], ri[1], ri[2], ri[3], uv);
	vb_full = make_quad(rf[0], rf[1], rf[2], rf[3], uv);
	vb_cust = make_quad(rc[0], rc[1], rc[2], rc[3], uv); /* test 88 */
	memcpy(pic_rc, rc, sizeof(pic_rc));
	r = cfg.picture == PIC_FULL ? rf : cfg.picture == PIC_CUSTOM ? rc : ri;
	scan_quads = 0; /* test 53: none unless built again here */
	if (cfg.scanlines && cfg.scanline_strength > 0)
		scan_build(r[0], r[1], r[2], r[3], cfg.tate != TATE_OFF);
	if (!lay_quiet)
		log_printf(C_GREEN, "PICTURE: TATE %s, %s %dX%d AT %d,%d, SCANLINES %d%% (%d QUADS)",
		           cfg.tate == TATE_LEFT ? "LEFT" : cfg.tate == TATE_RIGHT ? "RIGHT" : "OFF",
		           cfg.picture == PIC_FULL ? "FULL" : cfg.picture == PIC_CUSTOM ? "CUSTOM" : "INTEGER",
		           (int)(r[2] - r[0] + 0.5f), (int)(r[3] - r[1] + 0.5f), (int)r[0], (int)r[1],
		           cfg.scanlines ? cfg.scanline_strength : 0, scan_quads);
}

/* both card textures cleared to the card background */
static void card_init(void)
{
	int t, y;

	for (y = 0; y < CARD_H; y++) {
		int x;
		for (x = 0; x < CARD_W; x++)
			raster[y][x] = C_BG;
	}
	for (t = 0; t < 2; t++) {
		card_copy(&ctex[t]);
		xsdk_gpu_invalidate(ctex[t].address, ctex[t].size_bytes);
	}
}

/* game thread, once per frame: a finished card goes to the GPU, and every CARD_EVERY frames the
 * next one is asked for. Test 42: only into a texture no queued frame samples any more (flips =
 * xsdk's count; the texture just taken off the front may still be waiting for the GPU), so a due
 * request may wait a frame or two */
static void card_frame(uint32_t flips)
{
	if (card_done == card_req && card_given != card_req) {
		const int t = (int)card_target;
		__sync_synchronize();
		xsdk_gpu_invalidate(ctex[t].address, ctex[t].size_bytes);
		card_front = t;
		card_given = card_req;
		card_handoffs++;
	}
	if (frame % CARD_EVERY == 0 && card_on) { /* test 33: a hidden card is not drawn */
		if (card_done == card_req && card_given == card_req && io_alive)
			card_due = 1;
		else if (io_alive)
			card_skipped++;
	}
	if (card_due && card_on && (int32_t)(flips - ctex_used[card_front ^ 1]) >= 0) {
		card_due = 0;
		card_target = (unsigned)(card_front ^ 1);
		__sync_synchronize();
		card_req++;
	}
}

/* test 20: the game texture's rows for the workers, and 31^320 for folding row hashes. Test 42:
 * nothing shown yet, so the first frame converts into texture 1 */
static void conv_init(void)
{
	int x;

	tex_cur = tex_shown = 0;
	tex_work = 1;
	gtex_mem = gtex[tex_work].texels;
	gtex_pitch = gtex[0].pitch;
	hash_row_mul = 1;
	for (x = 0; x < GAME_W; x++)
		hash_row_mul *= 31;
}

/* game thread, at every emulated vblank: the texture shows the screen (VRAM at the scroll
 * after every job so far) and its hash is returned. Test 20: usually the last job's
 * conversion on the workers (they finish with blitter_sync); no job since the last frame and
 * the same scroll = nothing changed; otherwise the game thread converts, as test 19 did.
 * Test 42: a conversion went into tex_work (every one is the whole screen), which then holds
 * the screen; nothing changed = tex_cur still does. Test 63: when the last job writes nothing
 * in the shown window and the scroll is still the one it was kicked with, its early
 * conversion is the screen: only that is waited for, and the job draws on (into the next
 * frame, until the next kick or VRAM read syncs). Nothing else reads VRAM outside the window
 * (sm_box reads inside it). */
static uint64_t conv_jobs_seen;      /* blitter_jobs at the last frame */
static uint32_t early_flag;          /* test 63: PF_EARLY for the frame log */
static int tex_ok;                   /* tex_cur holds VRAM at tex_sx, tex_sy after all jobs */
static uint32_t tex_sx, tex_sy, tex_hash;
static int tex_fresh;                /* test 80: this frame converted tex_cur whole (arrhud_draw's fresh) */

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

	blitter_get_scroll(&sx, &sy);
	early_flag = 0;
	if (blitter_jobs != conv_jobs_seen && conv_early_job == blitter_jobs && sx == conv_sx && sy == conv_sy) {
		convs_wait();                /* test 63: the last job's conversion is done (it draws on) */
		if (!bands_done(NULL))
			early_flag = PF_EARLY;
	} else if (blitter_jobs != conv_jobs_seen || !tex_ok || sx != tex_sx || sy != tex_sy)
		blitter_sync();              /* the jobs and their conversions are done */
	if (blitter_jobs != conv_jobs_seen) {
		conv_jobs_seen = blitter_jobs;
		tex_ok = conv_job == blitter_jobs;
		if (tex_ok) {
			tex_sx = conv_sx;
			tex_sy = conv_sy;
			tex_hash = fold_rows();
			tex_cur = tex_work;
			gtex_dirty[tex_work] = 1;
			how = 0;
		}
	}
	blitter_get_scroll(&sx, &sy);
	if (!tex_ok || sx != tex_sx || sy != tex_sy) {
		for (y = 0; y < GAME_H; y++)
			row_hash[y] = conv_row(y, sx, sy);
		tex_sx = sx;
		tex_sy = sy;
		tex_hash = fold_rows();
		tex_ok = 1;
		tex_cur = tex_work;
		gtex_dirty[tex_work] = 1;
		how = 2;
	}
	if (frame_count >= BOOT_FRAMES)
		conv_frames[how]++;
	tex_fresh = how != 1;
	return tex_hash;
}

static void clear_game(void)
{
	int y, x, t;

	for (t = 0; t < 2; t++) {
		for (y = 0; y < GAME_H; y++)
			for (x = 0; x < GAME_W; x++)
				gtex[t].texels[(size_t)y * gtex_pitch + x] = 0xFF000000u;
		gtex_dirty[t] = 1;
	}
	tex_ok = 0; /* test 20: the next frame converts */
}

/* ---- test 69: the save states (runtime/state.c) and the pause menu's rows ------------------------------------- */

/* User 2026-10-25: "pause menu should now open an actual menu" with RESTART STAGE, FULL RESTART ("turn the score red on
 * the score gadget and stages score gadget red as well"), the settings and QUIT TO ATTRACT MODE; "that was actually the
 * original intent, to implement save states"; "if it's possible without compromising the game's performance". Three
 * slots: SLOT_ATTRACT is taken on the logos outside a run (when there is none, or the EEPROM or the special switch has
 * changed since: a load must not bring back older high scores for the game to save again), SLOT_CREDIT when a run first
 * shows a stage, SLOT_STAGE at every later stage's start (the stage byte changing to another stage). RESTART STAGE loads
 * the stage's slot (the credit's on its first stage), FULL RESTART the credit's, QUIT TO ATTRACT the attract's; a load
 * drops the slots taken after it. The slots are asked for in host_vblank (state_frame), taken by the runtime at its
 * next safe point (state_taken), loaded from host_vblank (state_load_now, which never returns). The recording has a "#
 * save <frame> <slot>" line when one is taken and "# load <frame> <slot>" when one is loaded (no "s <frame>" line for
 * that vblank); the PC harness loads at those frames (REPLAY_LOAD). */
/* Test 84 (user: save states on the hard disk; "restart stage should have a left/right between stage restart and
 * savestate restart"): SLOT_STATE = the last save state saved or loaded in this run (its moment: RESTART STAGE's
 * STATE); a load keeps the other slots (runtime/state.c), so the host drops the ones a load ends: the run's three for
 * QUIT TO ATTRACT and the attract's FULL RESTART, the stage's and the state's for the credit's FULL RESTART, none for
 * RESTART STAGE (its STAGE and STATE in turns); a run's end or a new credit drops them as well */
enum { SLOT_ATTRACT, SLOT_CREDIT, SLOT_STAGE, SLOT_STATE };
#if RT_SLOTS != 4 || GD_STATE_SLOTS != 4
#error "the slots of runtime/state.h and gadgets.h are the host's four"
#endif
#define STATE_RUN_GAP 120      /* vblanks out of a run that end it (its slots dropped) */
#define IB_STAGE 0x0C392B08u   /* byte: 2-7 = stages 1-6, 8-13 the extended mode's second loop (gadgets.c's) */
#define BLK_STAGE 0x0C3C4170u  /* byte: 2-7 = stages 1-6 */
#define STATE_POOL_MAX 8192    /* VRAM blocks of 8 KB in the pool (all of VRAM's) */
#define STATE_POOL_MIN 1024
#define STATE_MARGIN_MB 16     /* free memory left after the slots (test 84: 16, was 20: the fourth slot) */
static int state_ok;           /* the runtime's slots are there */
static int state_load_slot = -1; /* the pause menu (or a replayed recording) asked for a load at this vblank */
static const char *state_load_why; /* the pause menu's row that asked (the log) */
static int stage_slot = -1;    /* the slot RESTART STAGE loads */
static int credit_on;          /* SLOT_CREDIT is this run's */
static int st_prev = -1;       /* the stage last seen in this run */
static unsigned st_out;        /* vblanks out of a run */
static int slot_stage[RT_SLOTS] = {-1, -1, -1, -1}; /* the stage each slot was taken at (-1: none, the attract) */
static uint16_t attract_eep[256]; /* the EEPROM when SLOT_ATTRACT was asked for */
static int attract_special;
static unsigned scene_seen;    /* the scene byte at the last vblank */
#define SCENE_TITLE 6
static unsigned state_saves, state_loads;
/* test 70 (user: "if i'm holding a hadou charge, while transitioning from one stage to the next, a stage restart releases
 * the hadou charge, even if i hold the bomb button"): the board's ports as the slot's moment had them (the rest of that
 * frame reads them after a load: test 69 left the ones from before the pause there), put back with it */
static uint8_t slot_ports[RT_SLOTS][4];
/* test 70: the credit's side, type and mode (SLOT_CREDIT's: FULL RESTART loads it for the same choice); a load that
 * makes the score red (the pause's; replays: a restart but of the first stage); FULL RESTART with another choice = the
 * attract's slot, then the start menu's command (state_load_play) */
static int cr_side, cr_type, cr_mode;
static int state_load_red, state_load_play;
static int state_load_full; /* test 84: the load is FULL RESTART's (the recording's "# load ... full") */
static int state_load_tr;   /* test 91: the training pause's QUIT TO TRAINING MODE: the TRAINING page after the load */

/* the stage being played (0-5, 6-11 the extended mode's second loop) or -1 */
static int stage_now(void)
{
	const int ib = game_set == SET_IBARA;
	const unsigned b = *RAMP(ib ? IB_STAGE : BLK_STAGE);

	/* test 89: Kuro BL's opening (its stage record id 0C23E0A6 is 0 there, a stage's 1-6): training's stage select writes
	 * the counter during it (tr_stage_blk), the stage is the selected one's only once its FF02 has run */
	if (!ib && *RAMP(0x0C23E0A6u) == 0)
		return -1;
	if (b >= 2 && b < 8)
		return (int)b - 2;
	if (ib && b >= 8 && b < 14 && *RAMP(IB_MODE) == 2)
		return (int)b - 2;
	return -1;
}

static void stage_name(char *t, size_t n, int stage)
{
	if (stage < 0)
		snprintf(t, n, "THE ATTRACT");
	else
		snprintf(t, n, "STAGE %d%s", stage % 6 + 1, stage >= 6 ? " (LOOP 2)" : "");
}

static int attract_current(void)
{
	return attract_special == special_on && !memcmp(attract_eep, rtc9701_eeprom(), sizeof(attract_eep));
}

static void state_ask(int s, int stage)
{
	slot_stage[s] = stage;
	gadgets_state_save(s);
	if (s == SLOT_ATTRACT) {
		memcpy(attract_eep, rtc9701_eeprom(), sizeof(attract_eep));
		attract_special = special_on;
	}
	rt_state_request(s);
}

/* the runtime took slot s (rt_state_taken), soon after host_vblank asked */
static void state_taken(int s)
{
	static const char *const slots[RT_SLOTS] = {"ATTRACT", "CREDIT", "STAGE", "STATE"};
	const unsigned us = (unsigned)(rt_state_stats.take_ticks[s] * 1000000 / PPC_TIMEBASE_FREQ);
	char t[24];

	state_saves++;
	slot_ports[s][0] = in_port_c; /* test 70: what the rest of the slot's frame reads after a load */
	slot_ports[s][1] = in_port_d;
	slot_ports[s][2] = in_port_l;
	slot_ports[s][3] = in_port_f;
	stage_name(t, sizeof(t), slot_stage[s]);
	rec_state((uint32_t)frame_count, 0, s);
	log_printf(C_WHITE, "STATE: %s KEPT (SLOT %s) AT EMU %u IN %u.%02u MS; VRAM POOL %u OF %u BLOCKS (PEAK %u)", t,
	           slots[s], (unsigned)frame_count, us / 1000, us / 10 % 100, rt_state_stats.pool_used,
	           rt_state_stats.pool_blocks, rt_state_stats.pool_peak);
	if (s == SLOT_CREDIT && tr_run) /* test 95: the stage whose end goes back to the TRAINING page (tr_vblank) */
		tr_clear_stage = slot_stage[s];
	if (s == SLOT_CREDIT && !(tr_run && tr_boss_done)) /* test 105 */
		ach_start("THE CREDIT'S STATE");
	if (s == SLOT_CREDIT && !(tr_run && tr_boss_done)) { /* test 86: the run's replay starts here, with its slot loaded
	                                                      * back (rp_vblank); test 91: not a training run's boss slot */
		rp_capture_start((uint32_t)frame_count, "THE CREDIT'S STATE");
		rp_selfload = rp_cap;
	}
}

/* host_vblank, after inputs_update: the slots asked for (sm_frame's run, scene and service menu of this vblank) */
static void state_frame(void)
{
	const int stage = stage_now();
	char t[24];

	if (!state_ok || rp_play) /* test 86: a playback takes no slot (its end loads the attract's) */
		return;
	if (sm_run)
		st_out = 0;
	else if (st_out < STATE_RUN_GAP)
		st_out++;
	/* test 88 (user's todo list: "skipping over the initials entry quickly by pressing start makes the replay bleed into
	 * the title screen"): a run also ends as the attract comes back (sm_back: the Start that skips the ranking changes
	 * the scene at once, rec0003 10678 / rec0004 5747, no CAVE logo) or the logo comes, without STATE_RUN_GAP's wait (65
	 * and 88 vblanks of the title were in test 87's replays) */
	if (credit_on && (st_out >= STATE_RUN_GAP || (st_out && (sm_back || sm_logo)))) {
		credit_on = 0;
		if (tr_run) { /* test 89 */
			/* test 92: ended by its GAME OVER before TR_GO_HOLD (a Start skips it): the TRAINING page as tr_vblank's */
			/* test 95: or by the last stage's end (ibara's game byte, the script depth, is 0 from its return on: the
			 * run ends before the ending flag rises; harness ic95: stage 6 ended 21923, flag 22350) */
			const int clr = !tr_go && tr_clear_stage >= 0;
			const int back = (tr_go || clr) && state_load_slot < 0 && rt_state_ready(SLOT_ATTRACT);
			stage_name(t, sizeof(t), tr_clear_stage);
			tr_end("THE RUN ENDED");
			if (back) {
				state_load_slot = SLOT_ATTRACT;
				state_load_why = clr ? "TRAINING: STAGE CLEARED" : "TRAINING: GAME OVER";
				state_load_tr = 1;
				if (clr)
					log_printf(C_YELLOW, "TRAINING: %s CLEARED, THE RUN ENDED AT EMU %u: BACK TO THE TRAINING PAGE", t,
					           (unsigned)frame_count);
				else
					log_printf(C_YELLOW, "TRAINING: GAME OVER, THE RUN ENDED AT EMU %u: BACK TO THE TRAINING PAGE",
					           (unsigned)frame_count);
			}
		}
		stage_slot = -1;
		st_prev = -1;
		rt_state_drop(SLOT_STAGE);
		rt_state_drop(SLOT_STATE); /* test 84 */
		if (rp_cap && !rp_bad && cfg.replay_save && rt_state_ready(SLOT_CREDIT)) { /* test 118: EX-DEBUG's REPLAY SAVE */
			/* test 86: the credit's slot kept for the replay, the ports still added (its GAME OVER, the initials and the
			 * ranking); SAVE REPLAY? once the scene changes (the attract's first demo) or a new run starts first; test
			 * 87: or the CAVE logo comes (sm_logo), the initials' entry over */
			rp_pending = 1;
			log_printf(C_WHITE, "STATE: THE RUN ENDED (EMU %u), ITS STATES DROPPED BUT THE CREDIT'S (THE REPLAY'S START); "
			           "POOL %u OF %u BLOCKS", (unsigned)frame_count, rt_state_stats.pool_used, rt_state_stats.pool_blocks);
		} else {
			rt_state_drop(SLOT_CREDIT);
			log_printf(C_WHITE, "STATE: THE RUN ENDED (EMU %u), ITS STATES DROPPED; POOL %u OF %u BLOCKS", (unsigned)frame_count,
			           rt_state_stats.pool_used, rt_state_stats.pool_blocks);
			if (rp_cap)
				log_printf(C_YELLOW, "REPLAY: NONE FOR THIS RUN (%s)", rp_bad ? rp_why(rp_bad) : !cfg.replay_save ?
				           "EX-DEBUG'S REPLAY SAVE OFF" : "ITS START STATE WAS DROPPED");
			rp_cap = 0;
		}
	}
	if (rp_pending && !rp_ask && (!sm_after || sm_run || sm_logo)) { /* test 86 (user: "AFTER the initials entry screen") */
		rp_ask = 1;
		/* test 91: the attract again: the replay's last vblank is the one the scene changed (sm_left_at) */
		rp_cut = sm_back && !sm_run && sm_left_at > rp_base ? sm_left_at + 1 - rp_base : 0;
		log_printf(C_WHITE, "REPLAY: SAVE REPLAY? AT THE NEXT VBLANK (EMU %u, %s)", (unsigned)frame_count,
		           sm_run ? "A NEW RUN STARTS" : sm_logo ? "THE CAVE LOGO: THE INITIALS' ENTRY IS OVER" :
		           sm_back ? "THE ATTRACT AGAIN: THE RANKING SKIPPED" : "THE INITIALS AND THE RANKING ARE OVER");
	}
	if (rp_pending) /* the slots wait for the answer */
		return;
	if (rt_state_stats.overflows) { /* a slot lost a block for want of room (it cannot be loaded) */
		static unsigned seen;
		if (rt_state_stats.overflows != seen) {
			seen = rt_state_stats.overflows;
			log_printf(C_RED, "STATE: THE VRAM POOL IS FULL (%u BLOCKS): SLOTS DROPPED, THE LEAST NEEDED FIRST (%u SO FAR); "
			           "LEFT: ATTRACT %d CREDIT %d STAGE %d STATE %d", rt_state_stats.pool_blocks, seen,
			           rt_state_ready(SLOT_ATTRACT), rt_state_ready(SLOT_CREDIT), rt_state_ready(SLOT_STAGE),
			           rt_state_ready(SLOT_STATE));
		}
	}
	if (sm_run && stage >= 0 && stage != st_prev) {
		st_prev = stage;
		stage_name(t, sizeof(t), stage);
		if (!credit_on) {
			credit_on = 1;
			rt_state_drop(SLOT_STAGE);
			rt_state_drop(SLOT_STATE); /* test 84: a new run's */
			pm_to_state = 0;
			stage_slot = SLOT_CREDIT;
			state_ask(SLOT_CREDIT, stage);
			if (game_set == SET_IBARA) { /* test 70: the side that started (its starts byte), its type, the mode */
				cr_side = *RAMP(IB_PLAYER + IB_P_STARTS) ? 0 : 1;
				cr_type = *RAMP(IB_SHIP + (cr_side ? IB_SHIP_P2 : 0u)) & 3;
				cr_mode = *RAMP(IB_MODE) % 3;
			} else { /* Kuro BL: the start menu's side (its ship comes from its own select screen) */
				cr_side = sm_side;
				cr_type = cr_mode = 0;
			}
		} else {
			stage_slot = SLOT_STAGE;
			state_ask(SLOT_STAGE, stage);
		}
	} else if (!sm_run && !credit_on && (sm_scene == SCENE_LOGOS || sm_scene == SCENE_TITLE) && !sm_test &&
	           frame_count >= BOOT_FRAMES && !rt_state_want &&
	           (sm_scene != scene_seen || !rt_state_ready(SLOT_ATTRACT) || (!attract_current() && sm_state != SM_DIP))) {
		/* each time the attract comes to the logos or the title: the slot then holds the VRAM written from there to a
		 * credit's start only (the attract's demos write much of it: test 69's t68 run, 2696 blocks). Test 82: a slot
		 * made stale by DIP SWITCHES is taken again once the page is left (test 81 took it at every change, 13-16 ms on
		 * the game thread: a late frame each, test 81's ibara log); the page plays nothing, so no run starts before */
		state_ask(SLOT_ATTRACT, -1);
	}
	scene_seen = sm_scene;
}

/* the pause menu's rows (test 69); the restarts and the quit ask for A twice */
/* test 72: QUIT TO GAME SELECT (the launcher), A then A again */
/* test 84: SAVE STATE and LOAD STATE after FULL RESTART (the SLOTS page); RESTART STAGE's value STAGE or STATE */
/* test 91 (user's todo list: "starting a run in training mode is treated as a full run, therefore, it uses the regular
 * game's pause menu; make a separate "training pause""): a training run's pause has its own rows (pm_rows_tr): RESUME,
 * RESTART (no STAGE / STATE value: the run's start, its credit's slot, which START AT BOSS takes again once its skip is
 * over, so a restart is at the boss), the controls, SCREEN, SOUND, QUIT TO TRAINING MODE (the attract's slot, then the
 * TRAINING page), QUIT TO ATTRACT (user, mid-work: "re-add quit to attract in training mode"), QUIT TO GAME SELECT.
 * pm_sel is the row's PM_* id */
/* test 100 (user's list): the controls, SCREEN and SOUND rows one OPTIONS row (OPT_PAGE_PAUSE: GENERAL SCREEN = the
 * pause's SCREEN page, M3 GADGETS, P1 / P2 CONTROLS, SOUND, the menu's OPTIONS order) */
enum { PM_RESUME, PM_STAGE, PM_FULL, PM_SAVE, PM_LOAD, PM_CONTROLS, PM_CONTROLS2, PM_SCREEN, PM_SOUND, PM_QUIT, PM_GSEL,
       PM_TRESTART, PM_TQUIT, PM_OPTIONS, PM_N };
static const char *const pm_names[PM_N] = {"RESUME", "RESTART STAGE", "FULL RESTART", "SAVE STATE", "LOAD STATE",
                                            "P1 CONTROLS", "P2 CONTROLS", "SCREEN", "SOUND", "QUIT TO ATTRACT",
                                            "QUIT TO GAME SELECT", /* test 71: P2 CONTROLS (user) */
                                            "RESTART", "QUIT TO TRAINING MODE", /* test 91 */
                                            "OPTIONS"}; /* test 100 */
static const char *const pm_helps[PM_N] = { /* 35 characters at most; test 70: the user's */
	/* test 88 (user's todo list): RESTART STAGE's (STAGE), SAVE STATE's and LOAD STATE's, two lines (sm_help) */
	"RESUME GAME", "DISCARD CURRENT GAME IN PROGRESS\n(INVALID SCORE IF NOT STAGE 1)", "FULL RESTART FROM STAGE 1",
	"SAVE POSITION WITHIN THE GAME\n(INVALIDATES SCORE)", "LOAD POSITION (INVALIDATES SCORE)", /* test 84 */
	"CUSTOMIZE CONTROLS", "CUSTOMIZE CONTROLS", "CUSTOMIZE GAME SCREEN", "CUSTOMIZE SOUND VOLUME", "RETURN TO TITLE",
	"QUIT TO MAIN MENU", /* test 76 (user's todo list: "change quit to game select help into 'quit to main menu'") */
	"RESTART FROM THE STAGE'S START", "RETURN TO TRAINING MODE", /* test 91 (pm_help: the boss's with START AT BOSS) */
	"SCREEN, GADGETS, CONTROLS,\nSOUND", /* test 100: the menu's OPTIONS help without DEBUG MENU */
};
static const unsigned char pm_rows_game[] = {PM_RESUME, PM_STAGE, PM_FULL, PM_SAVE, PM_LOAD, PM_OPTIONS, PM_QUIT,
                                             PM_GSEL};
static const unsigned char pm_rows_tr[] = {PM_RESUME, PM_TRESTART, PM_OPTIONS, PM_TQUIT, PM_QUIT,
                                           PM_GSEL}; /* user: "re-add quit to attract" */
static int pm_sel, pm_armed = -1, pm_pad;

/* the pause's rows now (a training run's or the game's), n of them */
static const unsigned char *pm_rows(int *n)
{
	*n = tr_run ? (int)sizeof(pm_rows_tr) : (int)sizeof(pm_rows_game);
	return tr_run ? pm_rows_tr : pm_rows_game;
}

/* row id r's place in them (-1: not among them) */
static int pm_index(int r)
{
	int n, i;
	const unsigned char *l = pm_rows(&n);

	for (i = 0; i < n && l[i] != r; i++)
		;
	return i < n ? i : -1;
}

/* the slot a row loads now, or -1 */
static int pm_slot(int row)
{
	if (!state_ok)
		return -1;
	switch (row) {
	case PM_STAGE: /* test 84: STAGE or STATE */
		if (pm_to_state)
			return rt_state_ready(SLOT_STATE) ? SLOT_STATE : -1;
		return stage_slot >= 0 && rt_state_ready(stage_slot) ? stage_slot : -1;
	case PM_FULL:
	case PM_TRESTART: /* test 91: the training run's start (or its boss) */
		return credit_on && rt_state_ready(SLOT_CREDIT) ? SLOT_CREDIT : -1;
	case PM_QUIT:
	case PM_TQUIT: /* test 91: then the TRAINING page */
		return rt_state_ready(SLOT_ATTRACT) && attract_current() ? SLOT_ATTRACT : -1;
	}
	return -1;
}

static int pm_loads(int row)
{
	return row == PM_STAGE || row == PM_FULL || row == PM_QUIT || row == PM_TRESTART || row == PM_TQUIT;
}

/* the help line of the highlighted row; test 70: the user's texts (the stage restart's no longer names its stage), an
 * armed row asks (B = no) */
static const char *pm_help(void)
{
	const int r = pm_sel, s = pm_slot(r);

	if (r == PM_GSEL) /* test 72 */
		return !launcher_ok ? "NO IBARA360.XEX BESIDE THIS XEX" : pm_armed == r ? "QUIT? A = YES, B = NO" : pm_helps[r];
	if (pm_loads(r) && !state_ok)
		return "NO MEMORY FOR SAVE STATES";
	if ((r == PM_QUIT || r == PM_TQUIT) && s < 0)
		return rt_state_ready(SLOT_ATTRACT) ? "HIGH SCORES CHANGED: NOT NOW" :
		       rt_state_stats.overflows ? "DROPPED: THE STATES' MEMORY FILLED" : "NO ATTRACT STATE YET";
	if ((r == PM_SAVE || r == PM_LOAD) && !hdd_ok) /* test 84 */
		return "NO HARD DISK SAVE STATES";
	/* test 91 (user's todo list: RESTART STAGE's STAGE and STATE "when not selectable (during stage 1 intro)"): the run
	 * has no stage yet (credit_on: state_frame's first stage); the training pause's RESTART the same */
	if ((r == PM_STAGE || r == PM_TRESTART) && s < 0 && sm_run && !credit_on)
		return "NOT AVAILABLE DURING INTRO";
	if (r == PM_TRESTART && s >= 0 && pm_armed != r) /* test 91 */
		return tr_val[TR_BOSS] ? "RESTART AT THE STAGE'S BOSS" : pm_helps[r];
	if (r == PM_STAGE && pm_to_state && s < 0)
		return "NO SAVE STATE IN THIS RUN";
	if (r == PM_FULL && s < 0 && pm_slot(PM_QUIT) >= 0) /* test 84: FULL RESTART from the title (a loaded run's) */
		return pm_armed == r ? "RESTART? A = YES, B = NO" : pm_helps[r];
	if (pm_loads(r) && s < 0)
		return "NO STATE KEPT FOR IT YET";
	if (pm_armed == r)
		return r == PM_QUIT || r == PM_TQUIT ? "QUIT? A = YES, B = NO" : "RESTART? A = YES, B = NO";
	if (r == PM_STAGE && pm_to_state) /* test 93: the user's (todo list: "restart stage" <state> blue line) */
		return "QUICK SAVESTATE RELOAD";
	return pm_helps[r];
}

/* Test 70: FULL RESTART's choice (user: "after the second A press, provide a selection of player side / ship style"):
 * ibara's side and type (the run's mode kept), Kuro BL's side and its ship (the same, or its select screen again). The
 * run's own choice loads SLOT_CREDIT (its first stage's start, as test 69); another one loads the attract's slot and
 * plays the start menu's command with it (a new credit from the title, as QUIT TO ATTRACT and the start menu would).
 * Neither makes the score red (user: "if a full restart is selected, don't invalidate the score"). */
enum { FS_PLAYER, FS_SHIP, FS_ROWS }; /* FS_SHIP: ibara's type, Kuro BL's ship */
static int fs_row, fs_side, fs_type, fs_again;

static int fs_same(void)
{
	return fs_side == cr_side && (game_set == SET_IBARA ? fs_type == cr_type : !fs_again);
}

/* the slot FULL RESTART's choice loads (-1: none possible now); test 84: a run without its credit's slot (loaded from a
 * save state) starts again from the title with the same choice */
static int fs_slot(void)
{
	return fs_same() && pm_slot(PM_FULL) >= 0 ? pm_slot(PM_FULL) : pm_slot(PM_QUIT);
}

static void fs_open(void)
{
	sm_state = SM_FULLSEL;
	fs_row = FS_PLAYER;
	fs_side = cr_side;
	fs_type = cr_type;
	fs_again = 0;
	log_printf(C_WHITE, "PAUSE: FULL RESTART'S CHOICE (EMU %u)", (unsigned)frame_count);
}

/* test 51: the start menu's box, drawn into the texture that shows this frame (after the frame's
 * conversion and hash, so the recording and the checks never see it), in the portrait's own
 * coordinates (240 x 320, as the player sees the game: raster x = 319 - py, y = px), so it turns
 * with the picture in every layout. Behind the text the game's picture at a quarter brightness
 * (from VRAM: the texture is write-combined and never read back). Nothing changes in the
 * screen's texture while the menu is closed. Test 53: the rows (UP / DOWN) with a cursor and
 * BACK = OPTIONS; the options page in a bigger box (ibara's and Kuro BL's). Test 55: the options
 * box as tall as the game's rows need (opt_h), the controls page in the same width, the pause's
 * box (pause_draw). */
#define SM_W 184
#define SM_H 150
#define SMK_H 90 /* test 70: Kuro BL's start menu (PLAYER alone) */
#define OPT_W 228
#define OPT0_W SM_W /* test 70: the options page thinner (user), as wide as the start menu it comes from */
#define OPT_HELP_Y(n) (16 + 10 * (n)) /* the help line under n rows */
#define HELP2 10 /* test 70: a page whose helps may take two lines has the second one this lower */
#define BOX_H(last) ((last) + 22) /* a box's height from its last line's offset under its title */
#define PB_W 60 /* test 56: the word PAUSE only (test 55: 150 x 40, two lines) */
#define PB_H 25

static void sm_text(volatile uint32_t *t, int px, int py, uint32_t c, const char *s)
{
	int row, col;

	if (ps2m_rec) { /* test 98: MENU STYLE PS2 records the page (sm_draw) */
		ps2m_text(px, py, c, s);
		return;
	}
	for (; *s; s++, px += 6) {
		const unsigned char *g = glyph(*s);
		for (row = 0; row < 7; row++)
			for (col = 0; col < 5; col++)
				if (g[row] & (0x10 >> col))
					t[(size_t)(px + col) * gtex_pitch + (GAME_W - 1 - (py + row))] = c;
	}
}

/* test 70: a help text in lines of at most w characters, 10 pixels apart: broken at its "\n" or else before the word
 * that would pass w (the user's helps run longer than the box's 35 characters); at most two lines */
static void sm_help(volatile uint32_t *t, int px, int py, uint32_t c, const char *s, int w)
{
	char line[40];
	int k;

	if (ps2m_rec) { /* test 98: the PS2 look's description box (ps2menu.c) */
		ps2m_help(px, py, c, s);
		return;
	}
	for (k = 0; k < 2 && *s; k++, py += HELP2) {
		int n = 0, cut = -1;
		while (s[n] && s[n] != '\n' && n < w && n < (int)sizeof(line) - 1) {
			if (s[n] == ' ')
				cut = n;
			n++;
		}
		if (s[n] && s[n] != '\n' && s[n] != ' ' && cut > 0)
			n = cut;
		memcpy(line, s, (size_t)n);
		line[n] = 0;
		sm_text(t, px, py, c, line);
		s += n;
		while (*s == ' ' || *s == '\n')
			s++;
	}
}

/* test 98: a page's help drawn as one line (sm_text) in ARCADE, the description box's in the PS2 look */
static void sm_help1(volatile uint32_t *t, int px, int py, uint32_t c, const char *s)
{
	if (ps2m_rec)
		ps2m_help(px, py, c, s);
	else
		sm_text(t, px, py, c, s);
}

/* the box at bx, by (portrait pixels), bw x bh: a white edge around the picture at a quarter. Test 67: each texture
 * row written upward in memory (py from the box's bottom: x = GAME_W - 1 - py rises), so the write-combined stores
 * gather; test 66 wrote them downward and the box cost the game thread ~1.5 ms a frame on the 360 (its frame log's
 * conv with the menu open: 1532 us against 12 us in a run), enough to make one heavy attract frame late (EMU 19444) */
static void sm_box(volatile uint32_t *t, int bx, int by, int bw, int bh)
{
	int px, py;

	if (ps2m_rec) { /* test 98 */
		ps2m_box(bx, by, bw, bh);
		return;
	}
	for (px = bx; px < bx + bw; px++) {
		const uint16_t *row = cv1k_vram + (size_t)((px + tex_sy) & 0xFFF) * CV1K_VRAM_STRIDE;
		volatile uint32_t *dst = t + (size_t)px * gtex_pitch;
		for (py = by + bh - 1; py >= by; py--) {
			const int x = GAME_W - 1 - py;
			uint32_t c;
			if (px == bx || px == bx + bw - 1 || py == by || py == by + bh - 1) {
				c = C_WHITE;
			} else {
				const uint32_t p = row[(x + tex_sx) & 0x1FFF];
				c = 0xFF000000u | ((p & 0x7C00) << 7 | (p & 0x3E0) << 4 | (p & 0x1F) << 1);
			}
			dst[x] = c;
		}
	}
}

/* test 67: a side's continue type box (ct_frame): 1P's at the game's bottom, under its CONTINUE? sign and counts
 * (portrait rows ~128-262), 2P's at its top (both open at once: both seen). Test 68 (user: "remove the green line of
 * controls to reduce the width, then move bond's continue menu at the same height as dyne's and move it to the left;
 * and move dyne's to the right"): two lines, 108 wide, both at row 30, 1P's at the left edge, 2P's at the right
 * (both open at once: side by side, 12 apart) */
#define CT_W 108
#define CT_H 31
/* test 117: Kuro BL's JOIN box: TYPE with its value between arrows (the PLAY page's way), BOMB TYPE's letters 2 apart */
#define CT_WB 132
#define CT_HB 41
static void ct_draw_blk(volatile uint32_t *t, int x0, int y0, int s)
{
	const char *const v = ct_ship[s] ? "SPREAD" : "STRAIGHT";
	int i;

	for (i = 0; i < 2; i++) {
		const int y = y0 + 10 * i, sel = i == ct_row[s];
		if (sel)
			sm_text(t, x0, y, C_YELLOW, ">");
		sm_text(t, x0 + 6, y, sel ? C_YELLOW : C_WHITE, i ? "BOMB TYPE" : "TYPE");
	}
	sm_text(t, x0 + 6 * 10, y0, ct_row[s] == 0 ? C_YELLOW : C_DIM, "<");
	sm_text(t, x0 + 6 * 11 + (48 - 6 * (int)strlen(v)) / 2, y0, C_YELLOW, v);
	sm_text(t, x0 + 6 * 19, y0, ct_row[s] == 0 ? C_YELLOW : C_DIM, ">");
	for (i = 0; i < 4; i++) {
		const char c[2] = {(char)('A' + i), 0};
		sm_text(t, x0 + 6 * (11 + 2 * i), y0 + 10, i == ct_type[s] ? C_YELLOW : C_DIM, c);
	}
}

static void ct_draw(volatile uint32_t *t, int s)
{
	const int ib = game_set == SET_IBARA, w = ib ? CT_W : CT_WB;
	const int bx = s ? GAME_H - w - 6 : 6, by = 30, x0 = bx + 6, y0 = by + 6;
	char h[24];
	int i;

	sm_box(t, bx, by, w, ib ? CT_H : CT_HB);
	snprintf(h, sizeof(h), "%s %dP %s", ct_join[s] ? "JOIN" : "CONTINUE", s + 1, sm_ships[s]); /* test 117: JOIN */
	sm_text(t, x0, y0, C_YELLOW, h);
	if (!ib) {
		ct_draw_blk(t, x0, y0 + 12, s);
		return;
	}
	sm_text(t, x0, y0 + 12, C_WHITE, "TYPE");
	for (i = 0; i < 4; i++) {
		const char c[2] = {(char)('A' + i), 0};
		sm_text(t, x0 + 6 * (6 + 3 * i), y0 + 12, i == ct_type[s] ? C_YELLOW : C_DIM, c);
	}
	sm_text(t, x0 + 6 * (5 + 3 * ct_type[s]), y0 + 12, C_YELLOW, ">");
}

/* test 89: a box of GENERAL SCREEN or the pause's SCREEN page at the screen's middle as a CUSTOM picture has it (the
 * menus are drawn into the game picture: at 195% its top is off the screen, test 88's u88 run; test 88's ADJUST
 * PICTURE box did this), kept inside the picture; tate: as the player sees it (alone_layout's turn) */
static void pic_box_at(int w, int h, int *bx, int *by)
{
	const float pw = pic_rc[2] - pic_rc[0], ph = pic_rc[3] - pic_rc[1];
	float fx = 0.5f, fy = 0.5f;

	if (cfg.picture == PIC_CUSTOM && pw > 0 && ph > 0) {
		if (cfg.tate == TATE_LEFT) { /* the player's right = the screen's down, down = left */
			fx = (fb_h / 2.0f - pic_rc[1]) / ph;
			fy = (pic_rc[2] - fb_w / 2.0f) / pw;
		} else if (cfg.tate == TATE_RIGHT) { /* right = up, down = right */
			fx = (pic_rc[3] - fb_h / 2.0f) / ph;
			fy = (fb_w / 2.0f - pic_rc[0]) / pw;
		} else {
			fx = (fb_w / 2.0f - pic_rc[0]) / pw;
			fy = (fb_h / 2.0f - pic_rc[1]) / ph;
		}
	}
	*bx = (int)(fx * GAME_H) - w / 2;
	*by = (int)(fy * GAME_W) - h / 2;
	*bx = *bx < 0 ? 0 : *bx > GAME_H - w ? GAME_H - w : *bx;
	*by = *by < 0 ? 0 : *by > GAME_W - h ? GAME_W - h : *by;
}

/* the page sm_state names into t; 0 = none. Test 98: sm_draw's (MENU STYLE PS2 runs it recording, ps2menu.c) */
static int sm_pages(volatile uint32_t *t)
{
	static const char *const label[SM_ROWS] = {"PLAYER", "MODE", "TYPE", "DIP SWITCHES", "START RUN"};
	const int ib = game_set == SET_IBARA;
	int i;

	if (sm_state == SM_OPEN) {
		/* test 81: the PLAY page = test 53's start menu, then DIP SWITCHES; Kuro BL's: PLAYER (its sides) and DIP
		 * SWITCHES. Test 82 (user: "make the play menu more intuitive to navigate (it's confusing that you scroll up/down
		 * and change vertically placed options with left/right)", then "one value with arrows"): each row one line, its
		 * value centred between arrows at fixed columns (10 and 21, the value's 8 columns between), yellow on the
		 * highlighted row; TYPE before MODE (sm_rows_*); the helps the user's */
		/* test 89: TRAINING the same page, wider (its rows' names), a help in two lines */
		const int n = sm_nrows(), id = sm_rowid(sm_row), hy = OPT_HELP_Y(n), h2 = sm_train ? HELP2 : 0;
		/* test 94: the value column two further right on TRAINING ("BOMB FRAGMENTS") */
		const int h = BOX_H(hy + h2 + (sm_train ? 42 : 32)), bw = sm_train ? OPT_W : SM_W, ca = sm_train ? 17 : 10;
		const int bx = (GAME_H - bw) / 2, by = (GAME_W - h) / 2, x0 = bx + 8, y0 = by + 6;
		uint32_t vc;
		char s[24];
		sm_box(t, bx, by, bw, h);
		sm_text(t, x0, y0, C_YELLOW, sm_train ? (!ib ? "BLACK LABEL  TRAINING" : ARR ? "IBARA ARRANGE  TRAINING" :
		                                         "IBARA  TRAINING") :
		                             !ib ? "BLACK LABEL  PLAY" : ARR ? "IBARA ARRANGE  PLAY" : "IBARA  PLAY");
		for (i = 0; i < n; i++) {
			const int r = sm_rowid(i), sel = i == sm_row, ly = y0 + 14 + 10 * i;
			sm_text(t, x0 + 6, ly, sel ? C_YELLOW : C_WHITE, r >= SM_ROW_TR ? tr_names[r - SM_ROW_TR] : label[r]);
			if (sel)
				sm_text(t, x0, ly, C_YELLOW, ">");
			if (r == SM_ROW_DIP) {
				if (dip_changed())
					sm_text(t, x0 + 6 * 16, ly, C_RED, "CHANGED");
				continue;
			}
			if (r == SM_ROW_START) /* test 83: no value */
				continue;
			vc = C_GREEN;
			if (r >= SM_ROW_TR)
				vc = tr_text(r - SM_ROW_TR, s, sizeof(s));
			else if (r == SM_ROW_PLAYER) /* test 94 (user's todo list): Kuro BL's "1P SIDE" / "2P SIDE" -> "1P BOND" / "2P
			                              * DYNE" as ibara's (its sides fly Bond / Dyne too) */
				snprintf(s, sizeof(s), "%dP %s", sm_side + 1, sm_ships[sm_side]);
			else if (r == SM_ROW_MODE)
				snprintf(s, sizeof(s), "%s", sm_modes[sm_mode % 3]);
			else
				snprintf(s, sizeof(s), "%c", 'A' + sm_type % 4);
			/* test 96: OPTIONS / FORMATION with arrows too (NONE / EDIT, test 94's box summary had none) */
			sm_text(t, x0 + 6 * ca, ly, sel ? C_YELLOW : C_DIM, "<");
			sm_text(t, x0 + 6 * (ca + 2) + (48 - 6 * (int)strlen(s)) / 2, ly, sel ? C_YELLOW : vc, s);
			sm_text(t, x0 + 6 * (ca + 11), ly, sel ? C_YELLOW : C_DIM, ">");
		}
		sm_help(t, x0, y0 + hy, C_CYAN, id >= SM_ROW_TR ? tr_help(id - SM_ROW_TR) : id == SM_ROW_START ?
		        (sm_train ? "PLAY WITH THE SETTINGS BELOW\nNO SCORES, INITIALS OR REPLAYS" : "PLAY WITH THE SETTINGS BELOW") :
		        id == SM_ROW_DIP ? "SERVICE MENU GAME OPTIONS" : id == SM_ROW_TYPE ? "SELECT SHIP TYPE" : id == SM_ROW_MODE ?
		        "SELECT GAME MODE" : "1P OR 2P SIDE", (bw - 16) / 6);
		/* test 101 (user): OPTIONS / FORMATION are EDIT only since test 100, LEFT / RIGHT do nothing there. Test 102
		 * (user: "keep it all in english like the other games"): the green lines English in JAPANESE too */
		ps2m_lines_en = 1;
		sm_text(t, x0, y0 + hy + h2 + 12, C_GREEN, sm_train && (id == SM_ROW_TR + TR_OPT0 || id == SM_ROW_TR + TR_FRM0) ?
		        "UP/DOWN ROW" : "UP/DOWN ROW, LEFT/RIGHT SET");
		if (sm_train) {
			/* test 92: LB/RB on the quick steps' rows (user); test 91 (user's todo list): no "A = NEXT VALUE". Test 93
			 * (user's todo list: "add "start = play" as a green line across all training selections") */
			const char *l[4];
			int m = 0, j;
			if (id >= SM_ROW_TR && tr_quick_row(id - SM_ROW_TR))
				l[m++] = "LB/RB = QUICK TOGGLE";
			else if (id == SM_ROW_START || id == SM_ROW_DIP || ((id == SM_ROW_TR + TR_OPT0 || id == SM_ROW_TR + TR_FRM0) &&
			                                                    !(tr_cfg[id - SM_ROW_TR] & TR_ROW_NONE))) /* test 96 */
				l[m++] = id == SM_ROW_START ? "A = CONFIRM" : id == SM_ROW_DIP ? "A = OPEN" :
				         "A = EDIT"; /* test 94: the boxes' rows (user: "rename to "edit"") */
			l[m++] = "START = PLAY";
			l[m++] = "B / BACK = MENU";
			/* test 103 (user: "flipping between three and four green lines, making the window move ... make it so
			 * that it doesn't move at all"): always three lines here, the missing one empty at the end (the PS2 look
			 * sizes and centres its panel from what it records: an empty text keeps the fourth line's room) */
			if (m < 3)
				l[m++] = "";
			for (j = 0; j < m; j++)
				sm_text(t, x0, y0 + hy + h2 + 22 + 10 * j, C_GREEN, l[j]);
			if (tr_box) /* test 94 */
				tr_box_draw(t, bx, bw);
		} else {
			/* test 83: no START = PLAY; START RUN's "A = CONFIRM" (user) */
			sm_text(t, x0, y0 + hy + h2 + 22, C_GREEN, id == SM_ROW_START ? "A = CONFIRM" : id == SM_ROW_DIP ? "A = OPEN" :
			        "A = NEXT VALUE");
			sm_text(t, x0, y0 + hy + h2 + 32, C_GREEN, "B / BACK = MENU");
		}
	} else if (sm_state == SM_DIP) { /* test 81 */
		int r[DIP_ROWS_MAX];
		const int nr = dip_rows(r), hy = OPT_HELP_Y(nr), h = BOX_H(hy + HELP2 + 32);
		const int bx = (GAME_H - OPT_W) / 2, by = (GAME_W - h) / 2, x0 = bx + 8, y0 = by + 6;
		char v[40];
		sm_box(t, bx, by, OPT_W, h);
		sm_text(t, x0, y0, C_YELLOW, !ib ? "BLACK LABEL  DIP SWITCHES" : ARR ? "IBARA ARRANGE  DIP SWITCHES" :
		                                    "IBARA  DIP SWITCHES");
		for (i = 0; i < nr; i++) {
			const int y = y0 + 14 + 10 * i, sel = i == dip_sel, id = r[i];
			const struct dip_item *d = dip_item_of(id);
			if (sel)
				sm_text(t, x0, y, C_YELLOW, ">");
			if (!d) {
				sm_text(t, x0 + 6, y, sel ? C_YELLOW : C_WHITE, "DEFAULT");
				continue;
			}
			sm_text(t, x0 + 6, y, sel ? C_YELLOW : C_WHITE, d->name);
			if (!dip_have()) {
				sm_text(t, x0 + 6 * 16, y, C_DIM, "NOT IN ARRANGE");
			} else {
				dip_text(id, dip_get(id), v, sizeof(v));
				sm_text(t, x0 + 6 * 16, y, sel ? C_YELLOW : dip_get(id) != d->def ? C_RED : C_GREEN, v);
			}
		}
		sm_help(t, x0, y0 + hy, C_CYAN, dip_help(dip_sel), 35);
		sm_text(t, x0, y0 + hy + HELP2 + 12, C_DIM, "INVALID SCORE IF NOT DEFAULT"); /* test 82: the user's */
		sm_text(t, x0, y0 + hy + HELP2 + 22, C_GREEN, "LEFT/RIGHT CHANGE");
		sm_text(t, x0, y0 + hy + HELP2 + 32, C_GREEN, "B / BACK = PLAY");
	} else if (sm_state == SM_OPTS) {
		/* test 67: page 1 = the debug menu (its rows are the ones that act from the next power-on, "*", and ibara's
		 * special mode); the options' page has no "*" line. Test 70: the options' page thinner (OPT0_W), its rows all
		 * open pages ("A = CONFIRM" among the green lines, user); page 3 = GENERAL SCREEN; a help in up to two lines */
		const int n = opt_nrows(), hy = OPT_HELP_Y(n), id = opt_row(opt_sels[opt_page]);
		const int w = opt_page && opt_page != OPT_PAGE_OPTIONS && opt_page != OPT_PAGE_PAUSE ? OPT_W : OPT0_W;
		const int gy = hy + HELP2 + 12; /* gy: the lines under the help */
#ifdef IB_GAME
		const int dbg_lines = 10; /* test 112: the debug menu without its "*" line */
#else
		const int dbg_lines = 22;
#endif
		const int h = BOX_H(gy + (opt_page == OPT_PAGE_EXDBG ? 22 : opt_page == OPT_PAGE_DEBUG ? dbg_lines :
		                          opt_page == OPT_PAGE_SCREEN || opt_page == OPT_PAGE_PAUSE ? 20 : 10)); /* test 100:
		                                                                       * the pause's OPTIONS 3 lines */
		int bx = (GAME_H - w) / 2, by = (GAME_W - h) / 2, x0, y0;
		const char *help = opt_helps[id];
		char v[40];
		if (opt_page == OPT_PAGE_GENERAL || opt_page == OPT_PAGE_SCREEN) /* test 89: in a CUSTOM picture's view */
			pic_box_at(w, h, &bx, &by);
		x0 = bx + 8;
		y0 = by + 6;
		sm_box(t, bx, by, w, h);
		sm_text(t, x0, y0, C_YELLOW, opt_page == OPT_PAGE_SCREEN ? "PAUSE  SCREEN" :
		                             opt_page == OPT_PAGE_PAUSE ? "PAUSE  OPTIONS" : /* test 100 */
		                             opt_page == OPT_PAGE_GENERAL ? (ib ? "IBARA  GENERAL SCREEN" :
		                                                                  "BLACK LABEL  GENERAL SCREEN") :
		                             opt_page == OPT_PAGE_OPTIONS ? (!ib ? "BLACK LABEL  OPTIONS" :
		                                                             ARR ? "IBARA ARRANGE  OPTIONS" : "IBARA  OPTIONS") :
		                             opt_page == OPT_PAGE_EXDBG ? (ib ? "IBARA  EX-DEBUG" : "BLACK LABEL  EX-DEBUG") :
		                             opt_page ? (ib ? "IBARA  DEBUG MENU" : "BLACK LABEL  DEBUG MENU") :
		                                        (!ib ? "BLACK LABEL  MENU" : ARR ? "IBARA ARRANGE  MENU" :
		                                               "IBARA  MENU")); /* test 81: the one menu */
		for (i = 0; i < n; i++) {
			const int y = y0 + 14 + 10 * i, sel = i == opt_sels[opt_page], r = opt_row(i);
			opt_value(r, v, sizeof(v));
			if (sel)
				sm_text(t, x0, y, C_YELLOW, ">");
			sm_text(t, x0 + 6, y, sel && ((gsel_armed && r == OPT_GSEL) || (svc_armed && r == OPT_SERVICE) ||
			                              (rk_armed && r == OPT_RANKS) || (ac_armed && r == OPT_ACH)) ? C_RED :
			                      sel ? C_YELLOW : (r == OPT_GSEL && !launcher_ok) || (r == OPT_STYLE && !ps2menu_ok()) ||
			                      (r == OPT_LANG && !menu_ps2()) ? C_DIM : C_WHITE, opt_names[r]); /* test 98: the two
			                                                                                          * rows grey when
			                                                                                          * they cannot act */
			/* test 91 (user's todo list: the picture rows "shouldn't be greyed out when full or integer are selected") */
			/* test 111 (user: "line up the off texts" on EX-DEBUG): there one column further, past INFINITE LIVES /
			 * BOMBS (14 letters), whose values the PS2 look pushed 4 px right of the others' */
			sm_text(t, x0 + 6 * (opt_page == OPT_PAGE_EXDBG ? 16 : 15), y, sel ? C_YELLOW : C_GREEN, v);
		}
		if (id == OPT_SPECIAL && cfg.special != special_on)
			help = "LEAVING THE MENU RESTARTS THE GAME";
#ifdef IB_GAME
		else if (id == OPT_DEBUG) /* test 72: no GAME MENU row; test 82: ARRANGE's without SPECIAL MODE; test 85: SERVICE
		                           * MENU */
			help = ib && !ARR ? "SPECIAL MODE, STAFF ROLL,\nSERVICE, RANKS, ACHIEVEMENTS" : ARR ? "STAFF ROLL, RANKINGS,\nACHIEVEMENTS" : /* test 102;
			       * test 112: the debug menu's rows now */
			       "STAFF ROLL, SERVICE MENU,\nRANKINGS, ACHIEVEMENTS"; /* test 119: ACHIEVEMENTS */
#else
		else if (id == OPT_DEBUG) /* test 67; test 70: DEBUG CARD there */
			help = ib ? "SPECIAL MODE, STAFF ROLL,\nGAME, RANKS, ACHIEVEMENTS" : "STAFF ROLL, GAME, SERVICE,\nRANKINGS, ACHIEVEMENTS";
#endif
		else if (id == OPT_GSEL) /* test 72 */
			help = !launcher_ok ? "NO IBARA360.XEX\nBESIDE THIS XEX" : gsel_armed ? "QUIT? A = YES, B = NO" : help;
		else if ((id == OPT_STYLE && !ps2menu_ok()) || (id == OPT_LANG && ps2menu_ok() && !ps2menu_jp_ok()))
			help = id == OPT_STYLE && !ps2data_ok() ? "NO PS2DATA.BIN BESIDE THE XEX\nMAKE IT WITH PS2EXTRACT" : /* test 98 */
			       id == OPT_STYLE ? "PS2DATA.BIN HAS NO PS2 MENU FILES\nMAKE IT AGAIN WITH PS2EXTRACT" :
			       "PS2DATA.BIN HAS NO JAPANESE FONT\nMAKE IT AGAIN WITH PS2EXTRACT";
		else if (id == OPT_SERVICE && svc_armed) /* test 85 */
			help = "SERVICE MENU? A = YES, B = NO";
		else if (id == OPT_ACH && ac_armed) /* test 106 (user: a warning about a possible profile ban) */
			help = "AN ONLINE PROFILE MAY GET BANNED\nCONFIRM? A = YES, B = NO";
		else if (id == OPT_RANKS && (rk_armed || rk_said)) /* test 101 */
			help = rk_armed ? "CONFIRM? A = YES, B = NO" : rk_said == 1 ? "RANKINGS INITIALIZED" :
			       "NOT NOW: TRY AGAIN IN THE ATTRACT";
		else if (id == OPT_PLAY) /* test 81; test 82: ARRANGE's the user's, ibara's in the rows' new order */
			help = !ib ? "PLAYER SIDE, DIP SWITCHES" : ARR ? "SELECT PLAYER AND SHIP TYPE" :
			             "PLAYER, TYPE, MODE,\nDIP SWITCHES";
		ps2m_help_en = opt_page == OPT_PAGE_EXDBG; /* test 112: EX-DEBUG's helps English in JAPANESE (user) */
		sm_help(t, x0, y0 + hy, (id == OPT_GSEL && gsel_armed) || (id == OPT_SERVICE && svc_armed) ||
		        (id == OPT_RANKS && rk_armed) || (id == OPT_ACH && ac_armed) ? C_RED : C_CYAN, help,
		        (w - 16) / 6);
		ps2m_help_en = 0;
		if (opt_page == OPT_PAGE_SCREEN) { /* test 69; test 70: A opens M3 GADGETS (no "A = OPEN" there either) */
			sm_text(t, x0, y0 + gy, C_GREEN, "LEFT/RIGHT CHANGE, A = CONFIRM");
			sm_text(t, x0, y0 + gy + 10, C_GREEN, "B / BACK = OPTIONS"); /* test 100: the pause's OPTIONS */
			sm_text(t, x0, y0 + gy + 20, C_GREEN, "START = RESUME");
		} else if (opt_page == OPT_PAGE_PAUSE) { /* test 100 */
			sm_text(t, x0, y0 + gy, C_GREEN, "A = CONFIRM");
			sm_text(t, x0, y0 + gy + 10, C_GREEN, "B / BACK = PAUSE MENU");
			sm_text(t, x0, y0 + gy + 20, C_GREEN, "START = RESUME");
		} else if (opt_page == OPT_PAGE_EXDBG) { /* test 108 */
			/* test 112: the ini's rows came here too: their "*" line on theirs; test 113 (user: "grey help text in
			 * ex-debug ... should also be converted to english even when language is japanese"): English always */
			ps2m_help_en = 1;
			sm_text(t, x0, y0 + gy, C_DIM, id == OPT_EXLIVES || id == OPT_EXINFB || id == OPT_EXINV || id == OPT_EXHIT ?
			        "UNTIL THE POWER-OFF, NO REPLAY" : id == OPT_EXREPLAY ? "AT ONCE, KEPT IN IBARA360.INI" : /* test 118 */
			        "* = FROM THE NEXT POWER-ON");
			ps2m_help_en = 0;
			sm_text(t, x0, y0 + gy + 12, C_GREEN, "LEFT/RIGHT CHANGE");
			sm_text(t, x0, y0 + gy + 22, C_GREEN, "B / BACK = OPTIONS");
		} else if (opt_page == OPT_PAGE_DEBUG) {
#ifdef IB_GAME /* test 112: no "*" row left (they went to EX-DEBUG) */
			sm_text(t, x0, y0 + gy, C_GREEN, "LEFT/RIGHT CHANGE");
			sm_text(t, x0, y0 + gy + 10, C_GREEN, "B / BACK = OPTIONS");
#else
			sm_text(t, x0, y0 + gy, C_DIM, "* = FROM THE NEXT POWER-ON");
			sm_text(t, x0, y0 + gy + 12, C_GREEN, "LEFT/RIGHT CHANGE");
			sm_text(t, x0, y0 + gy + 22, C_GREEN, "B / BACK = OPTIONS"); /* test 88 */
#endif
		} else if (opt_page == OPT_PAGE_GENERAL) {
			sm_text(t, x0, y0 + gy, C_GREEN, "LEFT/RIGHT CHANGE");
			sm_text(t, x0, y0 + gy + 10, C_GREEN, "B / BACK = OPTIONS");
		} else if (opt_page == OPT_PAGE_OPTIONS) { /* test 88 */
			sm_text(t, x0, y0 + gy, C_GREEN, "A = CONFIRM");
			sm_text(t, x0, y0 + gy + 10, C_GREEN, "B / BACK = MENU");
		} else { /* test 70 (user: "put it down below amongst the other green lines as "A = confirm""); test 81: the
		          * menu's page 0 closes it */
			sm_text(t, x0, y0 + gy, C_GREEN, "A = CONFIRM");
			sm_text(t, x0, y0 + gy + 10, C_GREEN, "B / BACK = CLOSE");
		}
	} else if (sm_state == SM_CTRL) { /* test 55; test 70: the user's help; the pause's lines inside the box */
		/* test 71: P1 / P2 CONTROLS (ctl_pad); no "D-PAD/STICK, START, BACK, R3: FIXED" line (user: "seems useless") */
		const int n = ctl_nrows(), hy = OPT_HELP_Y(n), id = ctl_rowid(ctl_sel);
		const int h = BOX_H(hy + 12 + (menu_paused ? 10 : 0));
		const int bx = (GAME_H - OPT_W) / 2, by = (GAME_W - h) / 2, x0 = bx + 8, y0 = by + 6;
		const int *c = cfg.ctl[ctl_pad][CTL_SET];
		const char *help = "LEFT/RIGHT: SELECT FUNCTION";
		char v[40];
		sm_box(t, bx, by, OPT_W, h);
		snprintf(v, sizeof(v), "%s  P%d CONTROLS", ib ? "IBARA" : "BLACK LABEL", ctl_pad + 1);
		sm_text(t, x0, y0, C_YELLOW, v);
		for (i = 0; i < n; i++) {
			const int y = y0 + 14 + 10 * i, sel = i == ctl_sel, r = ctl_rowid(i);
			if (sel)
				sm_text(t, x0, y, C_YELLOW, ">");
			sm_text(t, x0 + 6, y, sel ? C_YELLOW : C_WHITE,
			        r < CTL_N ? settings_ctl_name(r) : r == CTL_ROW_AF ? opt_names[OPT_AUTOFIRE] : "DEFAULTS");
			if (r < CTL_N) {
				sm_text(t, x0 + 6 * 10, y, sel ? C_YELLOW : c[r] == FN_OFF ? C_DIM : C_GREEN,
				        settings_fn_name(CTL_SET, c[r]));
			} else if (r == CTL_ROW_AF) { /* test 67 */
				opt_value(OPT_AUTOFIRE, v, sizeof(v));
				sm_text(t, x0 + 6 * 10, y, sel ? C_YELLOW : C_GREEN, v);
			}
		}
		if (id == CTL_ROW_DEF) {
			help = "A = RESTORE DEFAULT"; /* test 71: the user's */
		} else if (id == CTL_ROW_AF) { /* test 67: the options' AUTOFIRE help */
			snprintf(v, sizeof(v), "SHOT DOWN %u, UP %u GAME FRAMES", af_period(ctl_pad) / 2,
			         af_period(ctl_pad) - af_period(ctl_pad) / 2);
			help = v;
		} else if (c[ctl_sel] == FN_AUTO) {
			snprintf(v, sizeof(v), "AUTO SHOT = SHOT AT %d HZ", af_hz(ctl_pad));
			help = v;
		} else if (c[ctl_sel] == FN_CARD) {
			help = "SHOWS / HIDES THE DEBUG CARD";
		}
		sm_help1(t, x0, y0 + hy, C_CYAN, help); /* test 98 */
		if (menu_paused) { /* test 70: test 69's one line ran past the box's edge (user); test 100: the pause's OPTIONS */
			sm_text(t, x0, y0 + hy + 12, C_GREEN, "B / BACK = OPTIONS");
			sm_text(t, x0, y0 + hy + 22, C_GREEN, "START = RESUME");
		} else {
			sm_text(t, x0, y0 + hy + 12, C_GREEN, "B / BACK = OPTIONS"); /* test 88 */
		}
	} else if (sm_state == SM_GADG) { /* test 64; test 65: STATUS, SECRET FORMATION, the names' column wider */
		static const char *const helps[GD_N] = { /* test 67: HADOU, RAPID, ITEMS gone, BULLETS new; test 68: the
		                                          * user's names for SCORE, WEAPON, FORMATION, RANK, NEXT DROP, BOSS,
		                                          * MUSIC and the ALL row; test 70: the user's for WEAPON, CONTROLS,
		                                          * MEDALS, BULLETS and SCORE BREAKDOWN */
			"SCORE GADGET", "SHIP, BOMBS, LIVES, EXTEND,\nINVINCIBILITY FRAMES", /* test 72: EXTEND (user), two lines;
			                                                                     * test 82: the user's */
			"SHOT POWER, OPTIONS, HADOU CHARGE",
			"SPECIAL FORMATIONS INFO", "DISPLAY JOYSTICK, OR TEXT", "DETAILED RANK DISPLAY",
			"ITEM DROP TABLE", "CURRENT MEDAL'S VALUE", "ENEMY BULLET COUNT ON SCREEN",
			"BOSS HP AND TIMER", "INDIVIDUAL STAGE SCORES\nRED = INVALID" /* test 88: no comma (user) */,
			"CURRENT TRACK AND ARTIST",
			"XTREME TERROR COUNTER /\nGRAZE WINDOW SIZE, SMALL OR FULL", /* test 76 (user: XTC, Kuro BL's); test 77:
			                                                            * the user's text; test 88: SMALL / FULL */
		};
		const int all = gp_all();
		const int n = gp_nrows(), hy = OPT_HELP_Y(n), gy = hy + HELP2 + 12, h = BOX_H(gy + 12), g = gp_row(gp_sel);
		const int bx = (GAME_H - OPT_W) / 2, by = (GAME_W - h) / 2, x0 = bx + 8, y0 = by + 6;
		sm_box(t, bx, by, OPT_W, h);
		sm_text(t, x0, y0, C_YELLOW, ib ? "IBARA  M3 GADGETS" : "BLACK LABEL  M3 GADGETS");
		for (i = 0; i < n; i++) { /* test 70: the values a column further (SPECIAL FORMATIONS' 18 letters) */
			const int y = y0 + 14 + 10 * i, sel = i == gp_sel, r = gp_row(i);
			if (sel)
				sm_text(t, x0, y, C_YELLOW, ">");
			sm_text(t, x0 + 6, y, sel ? C_YELLOW : C_WHITE, r < GD_N ? gadgets_name(r) : r == GP_COOP ? "CO-OP" : "ALL");
			if (r < GD_N) /* test 67: CONTROLS STICK / TEXT / OFF; test 88: XTC SMALL / FULL / OFF, the stick dim under
			               * XTC FULL (not drawn) */
				sm_text(t, x0 + 6 * 20, y, sel ? C_YELLOW : cfg.gadget[r] ?
				        C_GREEN : C_DIM, !cfg.gadget[r] ? "OFF" : r == GD_XTC ? (cfg.xtc_full ? "FULL" : "SMALL") :
				        r != GD_CONTROLS ? "ON" : ctl_text_now() ? "TEXT" : "STICK");
			else if (r == GP_COOP) /* test 71 */
				sm_text(t, x0 + 6 * 20, y, sel ? C_YELLOW : cfg.coop ? C_GREEN : C_DIM, cfg.coop ? "ON" : "OFF");
			else /* test 68 */
				sm_text(t, x0 + 6 * 20, y, sel ? C_YELLOW : all ? C_GREEN : C_DIM,
				        all == 1 ? "ON" : all == 0 ? "OFF" : "MIXED");
		}
		sm_help(t, x0, y0 + hy, C_CYAN, ARR && g == GD_FORMATION ? "FORMATIONS INFO" /* test 83 */ :
		        g == GD_CONTROLS && ctl_stick_off() ? "TEXT OR OFF WHILE XTC IS FULL" /* test 88; test 89 */ :
		        g < GD_N ? helps[g] : g == GP_COOP ? "P1 AND P2 GADGETS WHILE CO-OP\n"
		        "PLAY IS ACTIVE" : "TOGGLE ALL GADGETS ON/OFF", 35); /* test 82: CO-OP's the user's */
		if (cfg.picture == PIC_CUSTOM) /* test 88: the picture resize turns them off */
			sm_text(t, x0, y0 + gy, C_RED, "OFF: PICTURE SIZE IS CUSTOM");
		else
			sm_text(t, x0, y0 + gy, C_DIM, "LEFT/RIGHT: TOGGLE ON/OFF"); /* test 69: no GADGETS row any more; test 82 */
		sm_text(t, x0, y0 + gy + 12, C_GREEN, menu_paused ? "B / BACK = OPTIONS, START = RESUME" : /* test 100 */
		        "B / BACK = OPTIONS");
	} else if (sm_state == SM_SOUND) { /* test 68; test 69: the pause's without the tests (user: "minus the sound test") */
		const int nr = menu_paused ? SR_MTEST : SR_N, hy = OPT_HELP_Y(nr), h = BOX_H(hy + 24 + (menu_paused ? 10 : 0));
		const int bx = (GAME_H - OPT_W) / 2, by = (GAME_W - h) / 2, x0 = bx + 8, y0 = by + 6;
		const struct snd_track tr = snd_track_of(snd_track);
		const char *help;
		char v[40], d[40];
		sm_box(t, bx, by, OPT_W, h);
		sm_text(t, x0, y0, C_YELLOW, menu_paused ? "PAUSE  SOUND" : ib ? "IBARA  SOUND" : "BLACK LABEL  SOUND");
		for (i = 0; i < nr; i++) {
			const int y = y0 + 14 + 10 * i, sel = i == snd_sel;
			const int vol = i == SR_MUSIC ? cfg.vol_music : i == SR_SFX ? cfg.vol_sfx : i == SR_VOICE ? cfg.vol_voice :
			                cfg.vol_attract;
			uint32_t c = C_GREEN;
			if (i < SR_MUTE) {
				snprintf(v, sizeof(v), "%d%%", vol);
				c = cfg.mute || !vol ? C_DIM : C_GREEN;
			} else if (i == SR_MUTE) {
				snprintf(v, sizeof(v), "%s", cfg.mute ? "ON" : "OFF");
				c = cfg.mute ? C_GREEN : C_DIM;
			} else if (i == SR_TRACK) { /* test 99: PS2 dimmed while ps2music.bin is not good */
				snprintf(v, sizeof(v), "%s", cfg.soundtrack == TRACK_PS2 ? "PS2" : "ARCADE");
				c = cfg.soundtrack == TRACK_PS2 && ps2music_state() != PS2M_OK ? C_DIM : C_GREEN;
			} else if (i == SR_AUDIO) { /* test 112 */
				snprintf(v, sizeof(v), "%s", cfg.mono ? "MONO" : "STEREO");
			} else if (i == SR_MTEST) {
				snprintf(v, sizeof(v), "%02d %s", snd_track + 1, tr.name);
				/* test 101 (user: "03 LIKE A ROLLING STONE goes outside the border"): the PS2 look's 8 px letters fit
				 * 21 at most in the value's room (squeezed to 6 px), so the two 20-letter names are said shorter */
				if (menu_ps2() && strlen(v) > 21)
					snprintf(v, sizeof(v), "%02d %s", snd_track + 1, !strcmp(tr.name, "LIKE A ROLLING STONE") ?
					         "ROLLING STONE" : !strcmp(tr.name, "UNLISTED (SEQ 11-12)") ? "UNLISTED 11-12" : tr.name);
				c = snd_music_on ? C_CYAN : C_GREEN;
			} else if (i == SR_STEST) { /* test 89 */
				snprintf(v, sizeof(v), "%d", SND_SFX0 + snd_sfx);
			} else {
				snprintf(v, sizeof(v), "%d %s", SND_VOICE0 + snd_voice, snd_voices[snd_voice]);
			}
			if (sel)
				sm_text(t, x0, y, C_YELLOW, ">");
			sm_text(t, x0 + 6, y, sel ? C_YELLOW : C_WHITE, sr_names[i]);
			ps2m_keep_x = i == SR_MTEST; /* test 102 (user: tracks 08, 12, 13, 17, 18 where the others start) */
			sm_text(t, x0 + 6 * 12, y, sel ? C_YELLOW : c, v);
			ps2m_keep_x = 0;
		}
		if (snd_sel == SR_TRACK) { /* test 99: the reason PS2 is not there, or what it plays */
			help = sr_helps[snd_sel];
			if (ps2music_state() != PS2M_OK)
				snprintf(d, sizeof(d), "%s", ps2music_state() == PS2M_MISSING ? "NO PS2MUSIC.BIN: ARCADE ONLY" :
				         ps2music_state() == PS2M_CHECKING ? "CHECKING PS2MUSIC.BIN" :
				         ps2music_state() == PS2M_NONE ? "NO PS2DATA.BIN: ARCADE ONLY" :
				         "BAD PS2MUSIC.BIN: ARCADE ONLY");
			else if (menu_paused)
				snprintf(d, sizeof(d), "FROM THE NEXT TRACK ON");
			else
				snprintf(d, sizeof(d), "%s", cfg.soundtrack == TRACK_PS2 ? "THE PS2 PORT'S STREAMS" :
				         "THE ARCADE BOARD'S MUSIC");
		} else if (snd_sel < SR_MTEST) {
			help = sr_helps[snd_sel];
			snprintf(d, sizeof(d), "LEFT/RIGHT CHANGE");
		} else if (snd_sel == SR_MTEST) {
			/* test 71 (user: "use better wording for the grey line for music test"): what the track does, not its
			 * sequence numbers (the log still has them); test 99: "PS2:" when it plays the PS2 stream */
			const int ps2 = ps2music_active() && ps2music_has_seq(tr.intro);
			help = snd_music_on ? "PLAYING: A = STOP" : "LEFT/RIGHT CHOOSE, A = PLAY";
			if (tr.loop < 0)
				snprintf(d, sizeof(d), "%s", ps2 ? "PS2 STREAM, PLAYS ONCE" : "PLAYS ONCE");
			else if (tr.loop == tr.intro)
				snprintf(d, sizeof(d), "%s", ps2 ? "PS2 STREAM, LOOPS UNTIL STOPPED" : "LOOPS UNTIL STOPPED");
			else
				snprintf(d, sizeof(d), "%s", ps2 ? "PS2 STREAM: INTRO, THEN LOOPS" : "INTRO, THEN LOOPS UNTIL STOPPED");
		} else {
			help = "LEFT/RIGHT CHOOSE, A = PLAY";
			snprintf(d, sizeof(d), "GAME AUDIO FADES OUT"); /* test 71: the user's */
		}
		sm_help1(t, x0, y0 + hy, C_CYAN, help); /* test 98 */
		sm_text(t, x0, y0 + hy + 12, C_DIM, menu_paused && snd_sel != SR_TRACK ? "HEARD ONCE THE GAME GOES ON" : d);
		if (menu_paused) { /* test 70: test 69's one line ran past the box's edge (user); test 100: the pause's OPTIONS */
			sm_text(t, x0, y0 + hy + 24, C_GREEN, "B / BACK = OPTIONS");
			sm_text(t, x0, y0 + hy + 34, C_GREEN, "START = RESUME");
		} else {
			sm_text(t, x0, y0 + hy + 24, C_GREEN, "B / BACK = OPTIONS"); /* test 88 */
		}
	} else if (sm_state == SM_PAUSE) { /* test 69: the pause menu */
		int nr;
		const unsigned char *rows = pm_rows(&nr); /* test 91: a training run's own rows */
		const int hy = OPT_HELP_Y(nr), h = hy + HELP2 + 34; /* test 88: helps in two lines */
		const int bx = (GAME_H - OPT_W) / 2, by = (GAME_W - h) / 2, x0 = bx + 8, y0 = by + 6;
		sm_box(t, bx, by, OPT_W, h);
		sm_text(t, x0, y0, C_YELLOW, tr_run ? (ib ? "IBARA  TRAINING PAUSE" : "BLACK LABEL  TRAINING PAUSE") :
		                             ib ? "IBARA  PAUSE" : "BLACK LABEL  PAUSE");
		for (int k = 0; k < nr; k++) {
			const int i = rows[k], y = y0 + 14 + 10 * k, sel = i == pm_sel;
			/* test 72; test 84: SAVE / LOAD with the files, FULL RESTART from the title too */
			const int can = i == PM_GSEL ? launcher_ok : i == PM_SAVE || i == PM_LOAD ? hdd_ok :
			                i == PM_FULL ? pm_slot(i) >= 0 || pm_slot(PM_QUIT) >= 0 : !pm_loads(i) || pm_slot(i) >= 0;
			const uint32_t c = sel && pm_armed == i ? C_RED : sel ? C_YELLOW : can ? C_WHITE : C_DIM;
			if (sel)
				sm_text(t, x0, y, c, ">");
			sm_text(t, x0 + 6, y, c, pm_names[i]);
			if (i == PM_STAGE) { /* test 84 (user: "a left/right between stage restart and savestate restart"): the
			                      * value between arrows as the PLAY page's */
				const char *v = pm_to_state ? "STATE" : "STAGE";
				sm_text(t, x0 + 6 * 18, y, sel ? C_YELLOW : C_DIM, "<");
				sm_text(t, x0 + 6 * 20 + (30 - 6 * (int)strlen(v)) / 2, y, sel ? C_YELLOW : C_GREEN, v);
				sm_text(t, x0 + 6 * 26, y, sel ? C_YELLOW : C_DIM, ">");
			}
		}
		sm_help(t, x0, y0 + hy, pm_armed == pm_sel ? C_RED : C_CYAN, pm_help(), (OPT_W - 16) / 6);
		sm_text(t, x0, y0 + hy + HELP2 + 12, C_GREEN, pm_armed == pm_sel ? "START = RESUME" : "B / BACK / START = RESUME");
	} else if (sm_state == SM_REPLAYS || sm_state == SM_RPBOX) { /* test 86 */
		rl_draw(t);
	} else if (sm_state == SM_RPPAUSE) { /* test 87 */
		rp_pause_draw(t);
	} else if (sm_state == SM_SLOTS || sm_state == SM_HDD) { /* test 84 */
		sl_draw(t);
	} else if (sm_state == SM_GSEL) { /* test 72: GAME SELECT, while the files are finished */
		const int h = BOX_H(14), bx = (GAME_H - OPT0_W) / 2, by = (GAME_W - h) / 2, x0 = bx + 8, y0 = by + 6;
		sm_box(t, bx, by, OPT0_W, h);
		sm_text(t, x0, y0, C_YELLOW, ib ? "IBARA  GAME SELECT" : "BLACK LABEL  GAME SELECT");
		sm_text(t, x0, y0 + 14, C_WHITE, "SAVING SYSTEM FILE..."); /* test 77 (user); test 82: the user's */
	} else if (sm_state == SM_FULLSEL) { /* test 70: FULL RESTART's side and ship */
		/* test 71 (user): no "A NEW CREDIT FROM THE TITLE" / "THE RUN'S FIRST STAGE, AT ONCE" line; only why A cannot
		 * restart, in red, when it cannot */
		const int ok = fs_slot() >= 0;
		const int iy = OPT_HELP_Y(FS_ROWS), hy = iy + (ok ? 0 : 12), h = BOX_H(hy + 32);
		const int bx = (GAME_H - OPT_W) / 2, by = (GAME_W - h) / 2, x0 = bx + 8, y0 = by + 6;
		char v[40];
		sm_box(t, bx, by, OPT_W, h);
		sm_text(t, x0, y0, C_YELLOW, ib ? "IBARA  FULL RESTART" : "BLACK LABEL  FULL RESTART");
		for (i = 0; i < FS_ROWS; i++) {
			const int y = y0 + 14 + 10 * i, sel = i == fs_row, nk = i == FS_SHIP && ib ? 4 : 2;
			int k;
			if (sel)
				sm_text(t, x0, y, C_YELLOW, ">");
			sm_text(t, x0 + 6, y, sel ? C_YELLOW : C_WHITE, i == FS_PLAYER ? "PLAYER" : ib ? "TYPE" : "SHIP");
			for (k = 0; k < nk; k++) { /* columns: 1P BOND 10, 2P DYNE 19; A-D 10, 13, 16, 19; SAME 10, SELECT AGAIN 16 */
				const int on = i == FS_PLAYER ? k == fs_side : ib ? k == fs_type : k == fs_again;
				const int col = i == FS_PLAYER ? 10 + 9 * k : ib ? 10 + 3 * k : 10 + 6 * k;
				if (i == FS_PLAYER) /* test 94: Kuro BL's sides by their ships too, as the PLAY page's */
					snprintf(v, sizeof(v), "%dP %s", k + 1, sm_ships[k]);
				else if (ib)
					snprintf(v, sizeof(v), "%c", 'A' + k);
				else
					snprintf(v, sizeof(v), "%s", k ? "SELECT AGAIN" : "SAME");
				if (on)
					sm_text(t, x0 + 6 * (col - 1), y, C_YELLOW, ">");
				sm_text(t, x0 + 6 * col, y, on ? C_YELLOW : C_DIM, v);
			}
		}
		if (ib) /* user: "change grey line in full restart "same mode is maintained"" */
			snprintf(v, sizeof(v), "SAME MODE IS MAINTAINED");
		else
			snprintf(v, sizeof(v), "%s", fs_again ? "SHIP IS CHOSEN ON SELECT SCREEN" : "SAME SHIP IS MAINTAINED");
		sm_text(t, x0, y0 + iy, C_DIM, v);
		if (!ok)
			sm_text(t, x0, y0 + iy + 12, C_RED, fs_same() ? "NO STATE KEPT FOR IT" :
			        rt_state_ready(SLOT_ATTRACT) ? "HIGH SCORES CHANGED: THE RUN'S ONLY" : "NO TITLE STATE: THE RUN'S ONLY");
		sm_text(t, x0, y0 + hy + 12, C_GREEN, "LEFT/RIGHT SET, A = RESTART");
		sm_text(t, x0, y0 + hy + 22, C_GREEN, "B / BACK = PAUSE MENU");
		sm_text(t, x0, y0 + hy + 32, C_GREEN, "START = RESUME");
	} else {
		return 0;
	}
	return 1;
}

/* Test 98 (user 2026-10-28 ideas, approved for test 98): MENU STYLE PS2 = the page recorded (sm_text, sm_box, sm_help
 * keep what they would draw), then drawn again in the PS2 port's look (ps2m_render: leaf windows, its fonts, the rose,
 * the description box; LANGUAGE JAPANESE: its 16x16 font); ARCADE = test 97's pictures */
static unsigned ps2m_clock; /* the rose's (a picture every 2 draws) */

/* test 106 (user: "the continue screen type selection doesn't use the PS2 layout"; test 98 had left these boxes
 * ARCADE): MENU STYLE PS2 records each open side's box as a page of its own for ps2m_render: CONTINUE as the title,
 * the side and ship, then one row with the rose, TYPE and the four letters 2 columns apart (ARCADE's 3 apart would
 * pass the leaf window's right edge). A box as narrow as ARCADE's comes out 138 wide in the PS2 look, so two no
 * longer fit side by side: with both open 2P's goes under 1P's.
 * Test 118 (user: "there's plenty of room to make the windows smaller (make an exception for the ibara arcade window
 * and make some of the fonts smaller in order to fit them on the same horizontal space), for black label, just make
 * the window smaller and fix it to whatever direction a player is joining in from"): the panels exactly as recorded
 * (ps2m_exact, the texts at their PS2 places). Ibara: 108 wide, the four letters 12 px apart (were 16), 1P's at the
 * left edge, 2P's at the right, both at row 30 again (side by side, 12 apart). Kuro BL: 144 wide (was the whole 240),
 * on the joining side's edge; TYPE's value between arrows, BOMB TYPE's letters 10 apart */
#define CT_PS2_H 54  /* the leaf window's height for these lines (lay_box: the last row at 36, + 8 + 10) */
#define CT_PS2_W 108 /* test 118: ibara's */
#define CT_PS2_WB 144 /* test 118: Kuro BL's */
static void ct_draw_ps2(volatile uint32_t *t)
{
	const struct ps2m_target tg = {t, gtex_pitch, cv1k_vram, CV1K_VRAM_STRIDE, tex_sx, tex_sy};
	const int ib = game_set == SET_IBARA, w = ib ? CT_PS2_W : CT_PS2_WB, hh = ib ? CT_PS2_H : CT_PS2_H + 10;
	int s, i;

	ps2m_begin();
	ps2m_rec = 1;
	ps2m_exact = 1; /* test 118 */
	for (s = 0; s < 2; s++) {
		const int bx = s ? GAME_H - w - 6 : 6, by = 30, x0 = bx + 8, y0 = by + 6;
		char h[12];
		if (ct_state[s] != CT_PICK)
			continue;
		sm_box(t, bx, by, w, hh);
		sm_text(t, x0, y0, C_YELLOW, ct_join[s] ? "JOIN" : "CONTINUE"); /* test 117: JOIN */
		snprintf(h, sizeof(h), "%dP %s", s + 1, sm_ships[s]);
		sm_text(t, x0 + 8, y0 + 12, C_WHITE, h);
		if (!ib) {
			const char *const v = ct_ship[s] ? "SPREAD" : "STRAIGHT";
			for (i = 0; i < 2; i++) {
				const int y = y0 + 22 + 10 * i, sel = i == ct_row[s];
				if (sel)
					sm_text(t, x0, y, C_YELLOW, ">");
				sm_text(t, x0 + 8, y, sel ? C_YELLOW : C_WHITE, i ? "BOMB TYPE" : "TYPE");
			}
			sm_text(t, bx + 56, y0 + 22, ct_row[s] == 0 ? C_YELLOW : C_DIM, "<");
			sm_text(t, bx + 64 + (64 - 8 * (int)strlen(v)) / 2, y0 + 22, C_YELLOW, v);
			sm_text(t, bx + 128, y0 + 22, ct_row[s] == 0 ? C_YELLOW : C_DIM, ">");
			for (i = 0; i < 4; i++) {
				const char c[2] = {(char)('A' + i), 0};
				sm_text(t, bx + 96 + 10 * i, y0 + 32, i == ct_type[s] ? C_YELLOW : C_DIM, c);
			}
			continue;
		}
		sm_text(t, x0, y0 + 22, C_YELLOW, ">");
		sm_text(t, x0 + 8, y0 + 22, C_YELLOW, "TYPE");
		for (i = 0; i < 4; i++) {
			const char c[2] = {(char)('A' + i), 0};
			sm_text(t, bx + 56 + 12 * i, y0 + 22, i == ct_type[s] ? C_YELLOW : C_DIM, c);
		}
	}
	ps2m_rec = 0;
	ps2m_render(&tg, ps2m_clock++, menu_ja());
}

static void sm_draw(void)
{
	int s;

	for (s = 0; s < 2; s++) /* test 67 */
		if (ct_state[s] == CT_PICK) {
			if (!menu_ps2())
				ct_draw(gtex[tex_cur].texels, s);
			gtex_dirty[tex_cur] = 1;
		}
	if (menu_ps2() && (ct_state[0] == CT_PICK || ct_state[1] == CT_PICK)) /* test 106 */
		ct_draw_ps2(gtex[tex_cur].texels);
	if (rp_play && rp_label(gtex[tex_cur].texels)) /* test 86: REPLAY, B / BACK = STOP */
		gtex_dirty[tex_cur] = 1;
	volatile uint32_t *t = gtex[tex_cur].texels;

	if (menu_ps2()) {
		int drawn;
		ps2m_begin();
		ps2m_rec = 1;
		drawn = sm_pages(t);
		ps2m_rec = 0;
		if (drawn) {
			const struct ps2m_target tg = {t, gtex_pitch, cv1k_vram, CV1K_VRAM_STRIDE, tex_sx, tex_sy};
			static uint64_t pm_sum, pm_max;
			static unsigned pm_n;
			const uint64_t r0 = tb_read();
			uint64_t d;
			ps2m_render(&tg, ps2m_clock++, menu_ja());
			gtex_dirty[tex_cur] = 1;
			d = tb_read() - r0; /* test 99: its cost on the game thread (test 98's frame log: 3.4-7.6 ms) */
			pm_sum += d;
			if (d > pm_max)
				pm_max = d;
			if (++pm_n == 600) {
				log_printf(C_WHITE, "PS2 MENUS: DRAWN IN %u US AT MOST, %u US ON AVERAGE (600 FRAMES, EMU %u)",
				           (unsigned)tb_us(0, pm_max), (unsigned)tb_us(0, pm_sum / pm_n), (unsigned)frame_count);
				pm_sum = pm_max = 0;
				pm_n = 0;
			}
		}
	} else if (sm_pages(t)) {
		gtex_dirty[tex_cur] = 1;
	}
}

/* the frame queued last has been shown */
static int flipped_all(void *u)
{
	XsdkPresentStats s;

	(void)u;
	xsdk_present_stats(&s);
	return (int32_t)(s.flips - frames_queued) >= 0;
}

/* test 42: xsdk's vblank count has reached *(uint32_t *)u */
static int vblank_reached(void *u)
{
	XsdkPresentStats s;

	xsdk_present_stats(&s);
	return (int32_t)(s.vblanks - *(const uint32_t *)u) >= 0;
}

/* test 42: the frames that sampled game texture *(int *)u have been shown */
static int tex_free(void *u)
{
	XsdkPresentStats s;

	xsdk_present_stats(&s);
	return (int32_t)(s.flips - gtex_used[*(const int *)u]) >= 0;
}

/* test 42: when vblank v comes (or came), from the last one the game thread saw come */
static uint64_t vb_time(uint32_t v)
{
	return (uint64_t)((int64_t)anchor_t + (int64_t)(int32_t)(v - anchor_vb) * (int64_t)disp.vbl);
}

/* test 42: the frame xsdk showed since the last look, on time (at its vblank) or late; only when
 * exactly one did (last_flip_vblank is the latest flip's). An episode = frames shown late until
 * one is shown on time, with a log line at each end */
static void flips_check(const XsdkPresentStats *s)
{
	const uint32_t slot = (s->flips - 1) % QD;
	const int one = s->flips - flips_seen == 1;
	char a[16];

	if (s->flips == flips_seen)
		return;
	flips_seen = s->flips;
	if (!one || !game_running || q_emu[slot] < BOOT_FRAMES || boot_turbo) /* test 113: nor the boot's unpaced frames */
		return;
	if ((int32_t)(s->last_flip_vblank - q_due[slot]) > 0) {
		disp.shown_late++;
		if (behind_on) {
			ep_late++;
		} else {
			behind_on = 1;
			ep_frame = q_emu[slot];
			ep_late = 1;
			ep_skips = 0;
			ep_lag = 0;
			ms2(a, sizeof(a), q_work[slot]);
			log_printf(C_YELLOW, "DISPLAY: EMU %u SHOWN %u VBLANK(S) LATE (QUEUED %s MS AFTER ITS START)", q_emu[slot],
			           (unsigned)(s->last_flip_vblank - q_due[slot]), a);
		}
	} else if (behind_on) {
		behind_on = 0;
		ms2(a, sizeof(a), ep_lag);
		log_printf(C_GREEN, "DISPLAY: IN STEP AT EMU %u (FROM %u): %u SHOWN LATE, %u NOT SHOWN, LAG MAX %s MS",
		           q_emu[slot], ep_frame, ep_late, ep_skips, a);
	}
}

/* Test 42: if the frame queued before has not been shown yet (it missed its vblank and shows at
 * the next one), this frame is not shown when it is done after its own vblank (catching up) or
 * over a quarter vblank before it (the display gets back in step); otherwise it is queued once
 * that flip is out (shown a vblank late, the display stays smooth). Then the card (every
 * CARD_EVERY frames) and the game texture are drawn, resolved into the next front buffer and
 * queued, and the game thread waits for this frame's vblank, not for its flip: the next frame
 * starts on time even when the GPU finishes this one late. */
static void present(void)
{
	const uint64_t period = disp.vbl;
	uint64_t t0 = tb_read(), tw, now;
	XsdkPresentStats s;
	uint32_t address, due;
	int n, vto = 0, show, view, pending, draw = 1, waited = 0;
	NTSTATUS st;

	xsdk_present_stats(&s);
	if (!sched_set) {
		sched_set = 1;
		sched_vb = anchor_vb = s.vblanks;
		anchor_t = frame_start = t0;
	}
	flips_check(&s);
	due = sched_vb + 1;
	pending = (int32_t)(s.flips - frames_queued) < 0;
	pres_flags = 0;
	if (pending) {
		const int after = (int32_t)(s.vblanks - due) >= 0;
		const int64_t left = (int64_t)(vb_time(due) - t0);
		if (after || left > (int64_t)(period / 4)) {
			draw = 0;
			pres_flags |= PF_NOT_SHOWN;
			if (after)
				disp.skip_catch++;
			else
				disp.skip_step++;
			if (behind_on)
				ep_skips++;
		} else {
			/* xsdk_present_begin would wait for it in 1 ms sleeps */
			spin_yield_until(flipped_all, NULL, FLIP_TIMEOUT_US);
			pres_flags |= PF_SHOWN_LATE;
		}
	}

	if (io_alive) {
		card_frame(s.flips);
	} else if (frame % CARD_EVERY == 0 && (int32_t)(s.flips - ctex_used[card_front]) >= 0) {
		/* no IO thread: drawn here, once no queued frame samples it */
		draw_card();
		card_copy(&ctex[card_front]);
		xsdk_gpu_invalidate(ctex[card_front].address, ctex[card_front].size_bytes);
	}
	if (tk_on && !game_running && !log_reds) /* test 93: NOW LOADING into the game's texture */
		ticker_loading();
	/* every write-combined store of this thread (texels, a card drawn here) out before the GPU's
	 * commands that read them; the workers and the IO thread sync before handing theirs over */
	__sync_synchronize();
	if (!draw) {
		st = STATUS_SUCCESS;
	} else {
		if (gtex_dirty[tex_cur]) {
			xsdk_gpu_invalidate(gtex[tex_cur].address, gtex[tex_cur].size_bytes);
			gtex_dirty[tex_cur] = 0;
		}
		st = xsdk_present_begin(&address, BEGIN_TIMEOUT_MS);
	}
	if (!NT_SUCCESS(st)) {
		disp.begin_fails++;
		if (disp.begin_fails <= 5)
			log_printf(C_RED, "PRESENT: XSDK_PRESENT_BEGIN FAILED %08X (THE GPU HUNG?)", (unsigned)st);
	} else if (draw) {
		/* test 33: the card while loading (no game yet), else when it is on and the IO thread has
		 * handed one over since; otherwise the game alone, centred on black. Test 88: while loading NOW LOADING
		 * instead (load_pic), the card once a red line came */
		/* test 93: black until the ini (the layouts) is read, then the game's picture with the ticker in it (load_tk) */
		const int load_pic = !game_running && !log_reds && !tk_on;
		const int load_tk = !game_running && tk_on && !log_reds;
		show = !load_pic && !load_tk && (!game_running || (card_on && card_handoffs != card_on_at));
		/* test 58: GADGETS: the artwork under the game alone; test 60: both games, 16:9 or tate on 16:9 or 4:3 */
		view = !show && !load_pic && cfg.gadgets && gd_stats.ready && cfg.picture != PIC_CUSTOM ? gadgets_view() : GV_NONE;
		gadgets_mask(settings_gadget_mask()); /* test 64: the M3 GADGETS page's */
		/* test 71: every frame (the pause's changes at once); test 88: XTC FULL and the picture's scale on the 720-line
		 * canvas (FULL 720 / 320, INTEGER its whole number) */
		gadgets_style(ctl_text_now(), cfg.coop, game_set != SET_IBARA && cfg.xtc_full,
		              cfg.picture == PIC_INTEGER ? (float)(fb_h / 320 > 0 ? fb_h / 320 : 1) * 720.0f / fb_h : 720.0f / 320);
		xsdk_gpu_set_target((uint32_t)fb_w, (uint32_t)fb_h);
		if (view != GV_NONE)
			gadgets_draw(0, view, frames_queued, s.flips);
		xsdk_gpu_set_shaders(&vs, &ps);
		xsdk_built_shader_set_literals(&quad_vert);
		xsdk_built_shader_set_literals(&quad_frag);
		if (load_pic) { /* test 88: NOW LOADING alone; test 93: black (the ticker comes with the ini) */
		} else {
			const struct vb *g = show ? &vb_game : cfg.picture == PIC_FULL ? &vb_full : cfg.picture == PIC_CUSTOM ?
			                     &vb_cust : &vb_int; /* test 88: CUSTOM */
			if (!g->verts)
				g = &vb_game;
			/* test 69 (user: "full picture is blurry. remove smoothing"): point sampling at every size; test 89
			 * (user's todo list: "add "smoothing" option in "general screen""): linear with SMOOTHING ON */
			const int br = show ? 100 : cfg.brightness; /* test 91: BRIGHTNESS (the game's picture, the menus in it) */
			xsdk_gpu_set_texture(QUAD_FRAG_SAMPLER_0_0, &gtex[tex_cur], cfg.smooth && !show ? &samp_linear : &samp_point);
			xsdk_gpu_set_vertices(0, g->address, g->bytes);
			if (br < 100) { /* the picture times br% */
				const float k = (float)br / 100, kc[4] = {k, k, k, 1};
				xsdk_gpu_set_blend_constants(kc);
				xsdk_gpu_set_blend(&blend_kmul);
			}
			xsdk_gpu_draw(XSDK_PRIMITIVE_TRIANGLE_LIST, g->verts);
			if (br > 100) { /* again, times (br - 100)%, added (the target saturates) */
				const float k = (float)(br - 100) / 100, kc[4] = {k, k, k, 0};
				xsdk_gpu_set_blend_constants(kc);
				xsdk_gpu_set_blend(&blend_kadd);
				xsdk_gpu_draw(XSDK_PRIMITIVE_TRIANGLE_LIST, g->verts);
			}
			if (br != 100)
				xsdk_gpu_set_blend(&blend_none);
		}
		if (!show && !load_pic && scan_quads) { /* test 37: picture = picture * grey */
			xsdk_gpu_set_blend(&blend_mul);
			xsdk_gpu_set_texture(QUAD_FRAG_SAMPLER_0_0, &stex, &samp_point);
			xsdk_gpu_set_vertices(0, vb_scan.address, vb_scan.bytes);
			xsdk_gpu_draw(XSDK_PRIMITIVE_TRIANGLE_LIST, vb_scan.verts);
			xsdk_gpu_set_blend(&blend_none);
		}
		if (view != GV_NONE) /* test 58: the values over the artwork */
			gadgets_draw(1, view, frames_queued, s.flips);
		if (show) {
			xsdk_gpu_set_texture(QUAD_FRAG_SAMPLER_0_0, &ctex[card_front], &samp_point);
			xsdk_gpu_set_vertices(0, vb_card.address, vb_card.bytes);
			xsdk_gpu_draw(XSDK_PRIMITIVE_TRIANGLE_LIST, vb_card.verts);
		}
		/* the next frame lands on this clear; test 94 (user's todo list: "is the blue background normal? can it be
		 * removed?" under NOW LOADING): black around the ticker's picture too, the card's blue only around the card */
		xsdk_gpu_resolve(address, (uint32_t)fb_w, (uint32_t)fb_h,
		                 (game_running && !card_on) || load_pic || load_tk ? C_BLACK : CLEAR_BORDER);
		xsdk_present_end();
		q_due[frames_queued % QD] = due;
		q_emu[frames_queued % QD] = (uint32_t)frame_count;
		q_work[frames_queued % QD] = tb_read() - frame_start;
		frames_queued++;
		gtex_used[tex_cur] = frames_queued;
		if (lay_cur >= 0) /* test 53 */
			lay_used[lay_cur] = frames_queued;
		tex_shown = tex_cur;
		if (show)
			ctex_used[card_front] = frames_queued;
	}

	/* the next frame starts at this one's vblank, or at once when that has passed */
	tw = tb_read();
	/* test 113: the boot's frames go on at once (boot_check paces them); test 114 (user, test 113's video: the ticker a
	 * flickering sliver while the ROMs loaded): only once the game runs. boot_turbo is set from the start, so test 113
	 * also let the ROM loading's present() loop run unpaced: ticker_loading repainted the texture the GPU was drawing
	 * from (black, then the band row by row) and stepped the ticker on every call */
	if (!(boot_turbo && game_running) && !vblank_reached(&due)) {
		spin_yield_until(vblank_reached, &due, FLIP_TIMEOUT_US);
		waited = 1;
	}
	now = tb_read();
	xsdk_present_stats(&s);
	flips_check(&s);
	if (waited) {
		if ((int32_t)(s.vblanks - due) < 0) {
			vto = 1;
			disp.vbl_timeouts++;
		} else if (s.vblanks == due) { /* seen as it came */
			anchor_vb = due;
			anchor_t = now;
		}
	}
	sched_vb = due;
	if ((int32_t)(s.vblanks - sched_vb) >= LAG_RESYNC_VB || vto) {
		/* too far behind to catch up: the game lost this time, as before test 42 */
		if (game_running && frame_count >= BOOT_FRAMES) {
			disp.resyncs++;
			log_printf(C_YELLOW, "DISPLAY: EMU %u STARTS %u VBLANKS AFTER ITS OWN, SCHEDULE RESTARTED",
			           (unsigned)frame_count + 1, (unsigned)(s.vblanks - sched_vb));
		}
		sched_vb = s.vblanks;
	}
	frame_start = now;
	disp.lag = now > vb_time(sched_vb) ? now - vb_time(sched_vb) : 0;
	if (game_running && frame_count >= BOOT_FRAMES) {
		if (disp.lag > disp.lag_max)
			disp.lag_max = disp.lag;
		if (disp.lag > period / 4)
			disp.lag_frames++;
		if (behind_on && disp.lag > ep_lag)
			ep_lag = disp.lag;
	}
	disp.present = tw - t0;
	disp.vwait = now - tw;

	/* the display's refresh from xsdk's vblank count over the last HZ_WINDOW frames (test 42:
	 * test 41 counted frames, so late ones lowered it); missed = extra vblank periods between
	 * two frame starts, from the time between them */
	n = (int)(frame % HZ_WINDOW);
	if (frame >= HZ_WINDOW && (int32_t)(s.vblanks - stamp_vb[n]) > 0) {
		disp.hz_milli = (unsigned)((uint64_t)(s.vblanks - stamp_vb[n]) * PPC_TIMEBASE_FREQ * 1000 / (now - stamps[n]));
		if (disp.hz_milli > 55000 && disp.hz_milli < 65000)
			disp.vbl = (uint64_t)PPC_TIMEBASE_FREQ * 1000 / disp.hz_milli;
	}
	disp.period = frame > 0 ? now - last_stamp : period;
	if (frame > 0 && !vto) {
		uint64_t periods = (now - last_stamp + period / 2) / period;
		if (periods > 1)
			disp.missed += (unsigned)(periods - 1);
	}
	stamps[n] = now;
	stamp_vb[n] = s.vblanks;
	last_stamp = now;

	/* test 42: the next frame's conversions go into the texture the last queued frame does not
	 * sample; the frames before it have been shown, so it is free (tex_waits stays 0) */
	tex_work = tex_shown ^ 1;
	if ((int32_t)(s.flips - gtex_used[tex_work]) < 0) {
		tex_waits++;
		spin_yield_until(tex_free, &tex_work, FLIP_TIMEOUT_US);
	}
	gtex_mem = gtex[tex_work].texels;
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

/* ---- test 55: the pause; test 69: the pause menu ------------------------------------------- */

/* BACK during a run (run_track), no box up: host_vblank stops before the next emulated frame's inputs and presents the
 * same picture every vblank (the card, the Guide, the pads, the network log and the files go on); the sound driver gets
 * silence and keeps the frames already queued (sound_paused). Test 69 (user: "pause menu should now open an actual
 * menu"): the PAUSE menu over the picture: RESUME, RESTART STAGE, FULL RESTART (A twice: the save states), CONTROLS
 * (the options' controls page), SCREEN (PICTURE, SCANLINES, SCAN STRENGTH, ASPECT, TATE and M3 GADGETS), SOUND (the
 * volumes and MUTE, no tests), QUIT TO ATTRACT (A twice). The menu is the pad's that paused: UP / DOWN, A, B / BACK
 * back a page (from the menu: resume); START on any pad resumes. The settings act at once and go into the ini when the
 * menu closes. The buttons held as it closes reach the game only once released (pause_hold), the next frame converts
 * the screen again and its frame log line has PF_PAUSED. No emulated vblank passes, so the recording and the PC replays
 * never see a pause (a load is a "# load" line). */

/* the frozen picture into the game texture no queued frame samples, which then shows (the menu's boxes differ in
 * size: each one is drawn over the whole picture again) */
static void pause_picture(void)
{
	volatile uint32_t *const keep = gtex_mem;
	uint32_t sx, sy;
	int t = tex_cur ^ 1, y;

	if (!tex_free(&t))
		spin_yield_until(tex_free, &t, FLIP_TIMEOUT_US);
	blitter_get_scroll(&sx, &sy);
	gtex_mem = gtex[t].texels;
	for (y = 0; y < GAME_H; y++)
		conv_row(y, sx, sy);
	gtex_mem = keep;
	tex_sx = sx;
	tex_sy = sy;
	tex_cur = t;
	gtex_dirty[t] = 1;
}

static void pause_redraw(void)
{
	pause_picture();
	arrhud_draw(gtex[tex_cur].texels, gtex_pitch, tex_sx, tex_sy, 1); /* test 79: ARRANGE's HUD on the frozen picture */
	sm_draw(); /* the page sm_state names, menu_paused */
}

/* test 100: back to the pause's OPTIONS page (from its pages) */
static void pause_options(void)
{
	sm_state = SM_OPTS;
	opt_page = OPT_PAGE_PAUSE;
}

/* a press on the menu's pad; 1 = the menu changed, *done: the pause ends (state_load_slot set for a load) */
static int pause_input(uint32_t press, int *done)
{
	const int back = (press & (A_MB | A_COIN)) != 0;

	if (sm_state == SM_PAUSE) {
		if (press & (A_UP | A_DOWN)) { /* test 91: through the rows the pause has (a training run's own) */
			int n;
			const unsigned char *l = pm_rows(&n);
			const int k = pm_index(pm_sel);
			pm_sel = l[((k < 0 ? 0 : k) + n + (press & A_UP ? -1 : 1)) % n];
			pm_armed = -1;
			return 1;
		}
		if ((press & (A_LEFT | A_RIGHT)) && pm_sel == PM_STAGE) { /* test 84: STAGE or STATE */
			pm_to_state ^= 1;
			pm_armed = -1;
			return 1;
		}
		if (back && pm_armed >= 0) { /* test 70: "quit? A = yes, B = no" (user) */
			pm_armed = -1;
			return 1;
		}
		if (back) {
			*done = 1;
			return 0;
		}
		if (!(press & A_MA))
			return 0;
		switch (pm_sel) {
		case PM_RESUME:
			*done = 1;
			return 0;
		case PM_OPTIONS: /* test 100 */
			sm_state = SM_OPTS;
			opt_page = OPT_PAGE_PAUSE;
			if (opt_sels[OPT_PAGE_PAUSE] >= opt_nrows())
				opt_sels[OPT_PAGE_PAUSE] = 0;
			log_printf(C_WHITE, "PAUSE: OPTIONS (EMU %u)", (unsigned)frame_count);
			return 1;
		case PM_SAVE: /* test 84: the SLOTS page */
		case PM_LOAD:
			if (hdd_ok) {
				hdd_msg[0] = 0;
				sl_open(pm_sel == PM_SAVE);
			}
			return hdd_ok;
		case PM_GSEL: /* test 72: A, then A again; pause_loop goes to the launcher */
			if (!launcher_ok)
				return 0;
			if (pm_armed != pm_sel) {
				pm_armed = pm_sel;
				return 1;
			}
			gsel_req = 1;
			*done = 1;
			return 0;
		default: /* the restarts and the quit: A, then A again */
			if (pm_slot(pm_sel) < 0 && (pm_sel != PM_FULL || pm_slot(PM_QUIT) < 0)) /* test 84: FULL from the title */
				return 0;
			if (pm_armed != pm_sel) {
				pm_armed = pm_sel;
				return 1;
			}
			if (pm_sel == PM_FULL) { /* test 70: then the side and the ship */
				fs_open();
				return 1;
			}
			state_load_slot = pm_slot(pm_sel);
			state_load_why = state_load_slot == SLOT_STATE ? "RESTART STAGE: STATE" : pm_names[pm_sel]; /* test 84 */
			/* test 70 (user: "if a stage restart is applied to stage 1, and only stage 1 (no loop 2 stage 1 in extended
			 * mode), don't invalidate the score"): red for a later stage only; test 84: back to the save state red */
			state_load_red = pm_sel == PM_STAGE && (slot_stage[state_load_slot] != 0 || state_load_slot == SLOT_STATE);
			state_load_tr = pm_sel == PM_TQUIT; /* test 91: the TRAINING page once the attract is loaded */
			log_printf(C_YELLOW, "PAUSE: %s (EMU %u)", state_load_why, (unsigned)frame_count);
			*done = 1;
			return 0;
		}
	}
	if (sm_state == SM_FULLSEL) { /* test 70 */
		const int nk = fs_row == FS_SHIP && game_set == SET_IBARA ? 4 : 2;
		int *v = fs_row == FS_PLAYER ? &fs_side : game_set == SET_IBARA ? &fs_type : &fs_again;
		if (press & (A_UP | A_DOWN))
			fs_row = (fs_row + 1) % FS_ROWS;
		if (press & (A_LEFT | A_RIGHT))
			*v = (*v + nk + (press & A_RIGHT ? 1 : -1)) % nk;
		if (back) {
			sm_state = SM_PAUSE;
			pm_armed = -1;
			log_printf(C_WHITE, "PAUSE: FULL RESTART'S CHOICE LEFT");
			return 1;
		}
		if ((press & A_MA) && fs_slot() >= 0) {
			state_load_slot = fs_slot();
			state_load_why = pm_names[PM_FULL];
			state_load_red = 0; /* user: "if a full restart is selected, don't invalidate the score" */
			state_load_play = state_load_slot == SLOT_ATTRACT; /* test 84: also the same choice without a credit's slot */
			state_load_full = 1;
			if (game_set == SET_IBARA)
				log_printf(C_YELLOW, "PAUSE: FULL RESTART %dP %s TYPE %c (EMU %u): %s", fs_side + 1, sm_ships[fs_side],
				           'A' + fs_type, (unsigned)frame_count, state_load_play ? "A NEW CREDIT FROM THE TITLE" :
				           "THE RUN'S FIRST STAGE");
			else
				log_printf(C_YELLOW, "PAUSE: FULL RESTART %dP SIDE, %s (EMU %u): %s", fs_side + 1,
				           fs_again ? "SHIP SELECT AGAIN" : "THE SAME SHIP", (unsigned)frame_count,
				           state_load_play ? "A NEW CREDIT FROM THE TITLE" : "THE RUN'S FIRST STAGE");
			*done = 1;
			return 0;
		}
		return press != 0;
	}
	if (sm_state == SM_SLOTS) /* test 84 */
		return sl_input(press, done);
	if (sm_state == SM_CTRL) {
		const int n = ctl_nrows();
		if (press & A_UP)
			ctl_sel = (ctl_sel + n - 1) % n;
		if (press & A_DOWN)
			ctl_sel = (ctl_sel + 1) % n;
		if (press & A_LEFT)
			ctl_step(ctl_rowid(ctl_sel), -1);
		if (press & (A_RIGHT | A_MA))
			ctl_step(ctl_rowid(ctl_sel), 1);
		if (back) {
			pause_options(); /* test 100 */
			log_printf(C_WHITE, "CONTROLS: BACK TO OPTIONS");
		}
		return press != 0;
	}
	if (sm_state == SM_OPTS && opt_page == OPT_PAGE_PAUSE) { /* test 100: the pause's OPTIONS page */
		const int n = opt_nrows();
		int id;
		if (press & A_UP)
			opt_sels[opt_page] = (opt_sels[opt_page] + n - 1) % n;
		if (press & A_DOWN)
			opt_sels[opt_page] = (opt_sels[opt_page] + 1) % n;
		id = opt_row(opt_sels[opt_page]);
		if (back) {
			sm_state = SM_PAUSE;
			log_printf(C_WHITE, "PAUSE: OPTIONS, BACK TO THE PAUSE MENU");
		} else if ((press & A_MA) && (id == OPT_CONTROLS || id == OPT_CONTROLS2)) {
			ctl_open(id == OPT_CONTROLS2);
		} else if ((press & A_MA) && id == OPT_M3) {
			gp_open();
		} else if ((press & A_MA) && id == OPT_SOUND) {
			snd_open();
			if (snd_sel >= SR_MTEST)
				snd_sel = 0;
		} else if ((press & A_MA) && id == OPT_SCREEN) {
			opt_page = OPT_PAGE_SCREEN;
			if (opt_sels[OPT_PAGE_SCREEN] >= opt_nrows())
				opt_sels[OPT_PAGE_SCREEN] = 0;
			log_printf(C_WHITE, "PAUSE: SCREEN (EMU %u)", (unsigned)frame_count);
		} else if (id == OPT_LANG) { /* test 107: LANGUAGE last on this page, as on OPTIONS (LEFT / RIGHT / A) */
			if (press & A_LEFT)
				opt_step(id, -1);
			if (press & (A_RIGHT | A_MA))
				opt_step(id, 1);
		}
		return press != 0;
	}
	if (sm_state == SM_OPTS) { /* the SCREEN page */
		const int n = opt_nrows();
		int id;
		if (press & A_UP)
			opt_sels[opt_page] = (opt_sels[opt_page] + n - 1) % n;
		if (press & A_DOWN)
			opt_sels[opt_page] = (opt_sels[opt_page] + 1) % n;
		id = opt_row(opt_sels[opt_page]);
		if (pic_row(id)) {
			/* test 89: pause_loop's pic_input */
		} else {
			if (press & A_LEFT)
				opt_step(id, -1);
			if (press & (A_RIGHT | A_MA))
				opt_step(id, 1);
		}
		if (back && sm_state == SM_OPTS) {
			pause_options(); /* test 100 */
			log_printf(C_WHITE, "PAUSE: SCREEN, BACK TO OPTIONS");
		}
		return press != 0;
	}
	if (sm_state == SM_GADG) {
		const int n = gp_nrows();
		if (press & A_UP)
			gp_sel = (gp_sel + n - 1) % n;
		if (press & A_DOWN)
			gp_sel = (gp_sel + 1) % n;
		if (press & A_LEFT)
			gp_step(gp_sel, -1);
		if ((press & A_RIGHT) || ((press & A_MA) && gp_row(gp_sel) != GD_N))
			gp_step(gp_sel, 1);
		if (back) {
			pause_options(); /* test 100 */
			log_printf(C_WHITE, "M3 GADGETS: BACK TO OPTIONS");
		}
		return press != 0;
	}
	if (sm_state == SM_SOUND) { /* the volumes and MUTE (SR_MUSIC .. SR_MUTE) */
		if (press & A_UP)
			snd_sel = (snd_sel + SR_MTEST - 1) % SR_MTEST;
		if (press & A_DOWN)
			snd_sel = (snd_sel + 1) % SR_MTEST;
		if (press & A_LEFT)
			snd_step(snd_sel, -1, 0);
		if (press & A_RIGHT)
			snd_step(snd_sel, 1, 0);
		if (press & A_MA)
			snd_step(snd_sel, 1, 1);
		if (back) {
			pause_options(); /* test 100 */
			log_printf(C_WHITE, "SOUND: BACK TO OPTIONS");
		}
		return press != 0;
	}
	return 0;
}

static void pause_loop(int pad)
{
	const uint64_t t0 = tb_read();
	const unsigned cush = sound_stats.cushion;
	uint32_t last[NPADS];
	struct menu_rep reps[NPADS] = {{0}}; /* test 93: held directions (menu_repeat) */
	unsigned vb = 0, ms;
	int p, by = -1, done = 0, dirty = 1, gi;
	const char *how = "";

	pauses++;
	sound_paused = 1;
	log_printf(C_YELLOW, "PAUSE: MENU AT EMU %u (PAD %d BACK), %u.%u MS OF SOUND KEPT QUEUED", (unsigned)frame_count, pad,
	           cush * 10 / 48 / 10, cush * 10 / 48 % 10);
	for (p = 0; p < NPADS; p++)
		last[p] = pad_word[p];
	menu_paused = 1;
	sm_state = SM_PAUSE;
	menu_se(SM_CLOSED, 0, 0, 0); /* test 98: DECIDE */
	pm_pad = pad;
	pm_sel = pm_reopen >= 0 ? pm_reopen : PM_RESUME; /* test 84: back on SAVE STATE after a save */
	if (pm_index(pm_sel) < 0) /* test 91: not a training pause's row */
		pm_sel = PM_RESUME;
	pm_reopen = -1;
	pm_armed = -1;
	opt_changes = 0;
	if (sl_reopen >= 0) { /* test 84: on the SLOTS page, its last result shown */
		sl_open(sl_reopen);
		sl_reopen = -1;
	}
	while (!done) {
		if (menu_ps2() && !(vb & 1)) /* test 98: the rose's next picture */
			dirty = 1;
		if (dirty) {
			pause_redraw();
			dirty = 0;
		}
		present();
		vb++;
		gi = guide_input_off(); /* test 109 */
		for (p = 0; p < NPADS && !done; p++) {
			const uint32_t w = pad_word[p], rep = menu_repeat(&reps[p], w); /* test 93 */
			const uint32_t press = (w & ~last[p]) | (rep & ~(sm_state == SM_OPTS && pic_row(opt_row(opt_sels[opt_page])) ?
			                                                 (uint32_t)(A_LEFT | A_RIGHT) : 0u));
			last[p] = w;
			if (gi)
				continue;
			if (press & A_START) {
				done = 1;
				by = p;
				how = "START";
				menu_se(sm_state, 0, press, 1); /* test 98 */
				continue;
			}
			if (p == pm_pad && sm_state == SM_OPTS && pic_row(opt_row(opt_sels[opt_page]))) /* test 89: every vblank */
				dirty |= pic_input(opt_row(opt_sels[opt_page]), w, press);
			if (p == pm_pad && press) {
				const int se_st = sm_state; /* test 98 */
				const uint32_t se_sig = menu_sig();
				dirty |= pause_input(press, &done);
				menu_se(se_st, se_sig, press, done);
				if (done) {
					by = p;
					how = state_load_slot >= 0 || gsel_req ? pm_names[pm_sel] : hs_slot >= 0 ? "SAVE STATE" : /* test 84 */
					      hl_slot >= 0 ? "LOAD STATE" : press & A_MA ? "RESUME" : "B / BACK";
				}
			}
		}
	}
	if (opt_changes) { /* the ini as the options page leaves it (no special switch here) */
		settings_log("PAUSE:");
		controls_log("PAUSE: CONTROLS");
		settings_save_request();
		opt_changes = 0;
	}
	sm_state = hs_slot >= 0 ? SM_HDD : SM_CLOSED; /* test 84: SAVE STATE's box through its frame */
	menu_paused = hs_slot >= 0;
	for (p = 0; p < 2; p++) {
		/* the menu's buttons, not the stick; test 70: none after a restart (the slot's moment may have the bomb held for
		 * a Hadou, the user holds it on: test 69 kept it from the game, which took that for its release). Test 85 (user:
		 * "loading a savestate makes the shot button go off for a moment"; rec0042: SHOT down 3-6 frames after each of
		 * the 14 RESTART STAGE): after a restart and the pause's LOAD STATE the A that confirmed it is kept, and only
		 * the bits no other held button gives (pad_a_only), so a held bomb still reaches the game.
		 * Test 109 (user: "resuming from pause menu by holding A doesn't register in the game as i'm still holding A"):
		 * a plain resume (RESUME, START, B / BACK) lets a held A through as held; B, BACK and START stay kept */
		const int restart = (state_load_slot >= 0 && state_load_slot != SLOT_ATTRACT) || hl_slot >= 0;
		const int resume = state_load_slot < 0 && hl_slot < 0 && hs_slot < 0 && !gsel_req;
		pause_hold[p] = last[p] & (restart ? pad_a_only(p) :
		                           ~(uint32_t)(A_UP | A_DOWN | A_LEFT | A_RIGHT) & ~(resume ? pad_a_only(p) : 0u));
		pause_prev[p] = last[p];
	}
	sound_paused = hs_slot >= 0; /* test 84: SAVE STATE: its frame plays no sound */
	tex_ok = 0; /* test 20's flag: the next frame converts the screen again */
	pause_flag = PF_PAUSED;
	pause_ticks += tb_read() - t0;
	ms = (unsigned)((tb_read() - t0) * 1000 / PPC_TIMEBASE_FREQ);
	log_printf(C_GREEN, "PAUSE: OFF AT EMU %u AFTER %u.%u S (%u VBLANKS; PAD %d %s)", (unsigned)frame_count, ms / 1000,
	           ms / 100 % 10, vb, by, how);
	if (gsel_req) /* test 72 */
		game_select_quit("THE PAUSE MENU");
}

/* ---- test 72: back to the launcher ---------------------------------------------------- */

/* the log's last lines out: a file pass or two (the log file), then every line the PC has not had (as the fault
 * handler; the PC's logger closes the session on it). handoff: launch_go's (1 before XAM's call, 0 after it returned);
 * test 74: the PC is told the ending is planned, and whether another title follows */
static void gsel_flush(int handoff)
{
	const unsigned p0 = file_passes;
	const uint64_t t0 = tb_read();

	while (file_alive && file_passes - p0 < 2 && tb_us(t0, tb_read()) < 1000000)
		xsdk_thread_sleep(5);
	if (netlog_ending(handoff ? NETLOG_END_HANDOFF : NETLOG_END_EXIT))
		xsdk_thread_sleep(FAULT_SEND_MS);
}

/* Game thread (the options' GAME SELECT from inputs_update, the pause's QUIT TO GAME SELECT from pause_loop): the
 * sound stopped, the ini, the EEPROM, the recording and the frame log written by the file thread (two passes after
 * asking, the box up meanwhile, at most GSEL_FILES_MS), then the launcher with the launch data (this game) */
#define GSEL_FILES_MS 6000
static void game_select_quit(const char *from)
{
	struct launch_data d;
	unsigned p0;
	uint64_t t0;

	log_printf(C_YELLOW, "GAME SELECT: FROM %s AT EMU %u: THE SOUND OFF, THE FILES, THEN %s", from,
	           (unsigned)frame_count, LAUNCHER_XEX);
	sound_paused = 1;
	sound_stop();
	if (opt_changes)
		settings_save_request();
	/* test 91: the write gate open from now on: with the game busy in its last 30 frames (an attract demo under the menu)
	 * it held the ini, the EEPROM and the recording up to 20 s, past the two passes below (test 90's Kuro BL log: the
	 * GENERAL SCREEN changes, then GAME SELECT, no "INI: ... SAVED") */
	wgate_force();
	rec_final = 1;
	prof_final = 1;
	sm_state = SM_GSEL;
	pause_picture();
	sm_draw();
	p0 = file_passes;
	t0 = tb_read();
	while (file_alive && file_passes - p0 < 2 && tb_us(t0, tb_read()) < GSEL_FILES_MS * 1000u)
		present();
	log_printf(file_passes - p0 >= 2 || !file_alive ? C_GREEN : C_RED, "GAME SELECT: FILES %s IN %u MS",
	           file_passes - p0 >= 2 ? "WRITTEN" : file_alive ? "NOT FINISHED" : "(NO FILE THREAD)",
	           tb_us(t0, tb_read()) / 1000);
	memset(&d, 0, sizeof(d));
	d.magic = LAUNCH_MAGIC;
	d.version = LAUNCH_VERSION;
	d.by = LAUNCH_BY_GAME;
	d.game = ARR ? LAUNCH_ARRANGE : (uint32_t)game_set; /* test 77: back on ARRANGE's row */
	d.count = launch_in.count + 1;
	achx_finish(1000); /* test 106 */
	launch_go(LAUNCHER_XEX, &d, gsel_flush);
	log_printf(C_RED, "GAME SELECT: XAM DID NOT START %s, BACK TO THE DASHBOARD", LAUNCHER_XEX);
	gsel_flush(0);
	XamLoaderTerminateTitle();
	for (;;)
		xsdk_thread_sleep(1000);
}

static uint64_t t_resume; /* (defined with the game's below) */

/* test 69: host_vblank, after the pause: the machine back to slot state_load_slot (the pause menu's choice or a replayed
 * recording's "# load" line); the host's own trackers with it. Never returns: the runtime goes on from the slot's moment
 * and the next host_vblank is frame_count + 1 */
static void state_load_now(void)
{
	const char *const why = state_load_why ? state_load_why : "A RECORDING'S LOAD";
	const int s = state_load_slot;
	/* test 70: red for the pause's RESTART STAGE past the first stage only (a replay's load: the same rule; the gadgets
	 * are not in the recording) */
	const int red = state_load_why ? state_load_red : s == SLOT_STATE || (s != SLOT_ATTRACT && s >= 0 && slot_stage[s] > 0);
	const int play = state_load_play && s == SLOT_ATTRACT;
	const int full = state_load_full;
	const int tr_keep = play && tr_run; /* test 89: FULL RESTART with another side or ship trains again */
	char t[24];
	int p;

	const int tr_page = state_load_tr && s == SLOT_ATTRACT; /* test 91: QUIT TO TRAINING MODE */

	state_load_slot = -1;
	state_load_red = state_load_play = state_load_full = state_load_tr = 0;
	if (!rt_state_ready(s)) {
		log_printf(C_RED, "STATE: SLOT %d IS NOT THERE, NOTHING LOADED (EMU %u)", s, (unsigned)frame_count);
		return;
	}
	state_loads++;
	stage_name(t, sizeof(t), slot_stage[s]);
	rec_state((uint32_t)frame_count, full ? 3 : 1, s); /* test 84: "full" for FULL RESTART's */
	/* test 86 (user: "if a run used a stage restart, or load state, simply ignore it"): FULL RESTART starts the replay
	 * again (the credit's slot, the ports from the next vblank), any other load ends it (a playback's own loads: rp_play).
	 * Test 87 (user: "a run restarted from stage 1 with "stage restart" is still eligible for replay saving"): a RESTART
	 * STAGE of stage 1 loads the credit's slot too (not red, test 70) and starts it again as FULL RESTART does */
	if (s == SLOT_CREDIT && (full || !red)) /* test 105: a new run from the credit's state, as the replay's start */
		ach_start(full ? "FULL RESTART" : "RESTART STAGE OF STAGE 1");
	else if (ach_ok) {
		ach_ok = 0;
		log_printf(C_YELLOW, "ACHIEVEMENTS: NONE FOR THE REST OF THIS RUN (%s, EMU %u)", why, (unsigned)frame_count);
	}
	if (!rp_play && (rp_cap || rp_pending)) {
		const int self = rp_cap && !rp_bad && !rp_n && rp_base == (uint32_t)frame_count; /* the take's own vblank */
		if (s == SLOT_CREDIT && (full || self || !red))
			rp_capture_start((uint32_t)frame_count + 1, full ? "FULL RESTART" : self ? "THE CREDIT'S STATE LOADED BACK" :
			                 "RESTART STAGE OF STAGE 1");
		else
			rp_cancel(s == SLOT_ATTRACT ? RPB_QUIT : RPB_RESTART);
	}
	/* test 84: the slots this load ends (the runtime keeps every other one): the run's for the attract's, the stage's
	 * and the state's for FULL RESTART's (a new run), none for RESTART STAGE (STAGE and STATE stay to choose from) */
	if (s == SLOT_ATTRACT) {
		rt_state_drop(SLOT_CREDIT);
		rt_state_drop(SLOT_STAGE);
		rt_state_drop(SLOT_STATE);
	} else if (s == SLOT_CREDIT && full) {
		rt_state_drop(SLOT_STAGE);
		rt_state_drop(SLOT_STATE);
	}
	log_printf(C_YELLOW, "STATE: %s AT EMU %u: %s AS AT EMU %u%s", why, (unsigned)frame_count, t,
	           (unsigned)rt_state_stats.taken_frame[s], red ? ", THE SCORE RED" : "");
	state_load_why = NULL;
	gadgets_state_load(s, red);
	/* test 118: a save state's load empties SCORE BREAKDOWN for the rest of the run; the credit's slot (FULL RESTART,
	 * RESTART STAGE of stage 1) and the attract's start clean; a later stage's RESTART STAGE keeps what the run had */
	if (s == SLOT_STATE)
		gadgets_breakdown_void(1);
	else if (s == SLOT_CREDIT || s == SLOT_ATTRACT)
		gadgets_breakdown_void(0);
	arrhud_reset(); /* test 79 */
	if (s == SLOT_ATTRACT) { /* the credit's, the stage's and the state's dropped above */
		credit_on = 0;
		stage_slot = -1;
		st_prev = -1;
		if (tr_run && !tr_keep) /* test 89 */
			tr_end("THE ATTRACT LOADED");
	} else {
		tr_loaded(); /* test 89: the sides' starts bytes again, the stage and boss checks */
		tr_clear_stage = tr_run ? slot_stage[s] : -1; /* test 95: the RAM is the slot's from rt_state_load on */
		tr_stage_prev = -2;
		tr_fin_prev = -1;
		tr_zero = 0; /* test 100 */
		st_prev = slot_stage[s];
		if (s == SLOT_CREDIT)
			stage_slot = SLOT_CREDIT; /* a stage's slot is a later stage's (FULL RESTART dropped it) */
		else if (s == SLOT_STATE && slot_stage[SLOT_STATE] != (stage_slot >= 0 ? slot_stage[stage_slot] : -2))
			stage_slot = -1; /* test 84: the state's stage has no start kept (a stage restart from a later one) */
	}
	st_out = 0;
	sm_state = SM_CLOSED;
	sm_check_at = 0;
	sm_runhold = 0;
	host_reapply_due = 1; /* test 81: the slot's RAM has the settings of its moment */
	sm_after = 0;
	sm_logo = 0;
	/* test 70 (user: "upon quitting to attract and pressing start again quickly, the game skipped the start menu and
	 * immediately started another run"): the attract's slot is idle by its making (the logos or the title outside a run),
	 * so Start opens the menu at once; test 69 counted SM_IDLE vblanks from the load and a Start meanwhile reached the
	 * title, which started a credit */
	sm_idle = s == SLOT_ATTRACT ? SM_IDLE : 0;
	sm_early = 0; /* test 92 */
	if (s == SLOT_ATTRACT)
		log_printf(C_WHITE, "MENU: START OPENS THE MENU FROM EMU %u (THE ATTRACT LOADED)", (unsigned)frame_count);
	tr_reopen = tr_page; /* test 91: sm_frame opens the TRAINING page */
	if (s == SLOT_ATTRACT) { /* test 97: no trail of the run (its queued sound) into the attract; the TRAINING page's
	                          * attract without its first IBARA and KAKATTE */
		sound_cut();
		snd_hush = SND_HUSH;
		if (tr_page)
			vh_start();
	}
	for (p = 0; p < 2; p++) {
		ct_state[p] = CT_IDLE;
		ct_check_at[p] = 0;
		coin_left[p] = 0;
		af_phase[p] = 0;
		af_wait[p] = 0;
	}
	/* test 70: the ports the rest of the slot's frame reads, as they were then (a Hadou charging there goes on) */
	in_port_c = slot_ports[s][0];
	in_port_d = slot_ports[s][1];
	in_port_l = slot_ports[s][2];
	in_port_f = slot_ports[s][3];
	if (play) { /* test 70: FULL RESTART with another side or ship: the start menu's command, from the attract's slot */
		sm_side = fs_side;
		sm_type = fs_type;
		sm_mode = cr_mode;
		sm_pad = pm_pad;
		if (tr_keep) { /* test 89: its settings again, as "# host" lines */
			int v[TR_N];
			memcpy(v, tr_val, sizeof(v));
			tr_run = 0;
			tr_send(v);
		}
		sm_play();
	}
	run_left = 0;
	tex_ok = 0;
	t_resume = tb_read();
	rt_state_load(s);
}

/* ---- test 84: save states on the hard disk (hddstate.c) ----------------------------------------------------------- */

/* User 2026-10-27: save states on the hard disk, 10 slots per game, "a picture of the game screen beside each slot",
 * LOAD STATE "in the attract menu too", RESTART STAGE "a left/right between stage restart and savestate restart". The
 * pause's SAVE STATE / LOAD STATE and the menu's LOAD STATE open the SLOTS page: ten rows (each slot's stage and score,
 * EMPTY, or UNUSABLE with why under the picture), the highlighted slot's picture and choice; A asks (OVERWRITE? or
 * LOAD?), A again saves or loads. A save: the pause ends for one emulated frame with the box up, the sound paused and
 * the ports as the pause found them (SLOT_STATE taken at its first safe point: hs_ask), then the next vblank writes the
 * file (hs_write) and the pause comes back on the SLOTS page. A load (hl_load, host_vblank): the run's slots dropped,
 * the file's machine in (hddstate.c: the attract's slot kept), the host's trackers from its record, then SLOT_STATE
 * loaded by state_load_now with the SCORE red. A recording has "# hddsave" / "# hddload" lines; the PC harness repeats
 * them (REPLAY_HDD), its own files for its own saves. */
#define HDD_GAD_MAX 512
#define HDD_STEP_US 10000 /* the file's work a vblank (the box redrawn and presented in the rest) */
struct hdd_host {                   /* main.c's part of a file: what state_load_now has of the two slots it fills */
	int32_t cr_side, cr_type, cr_mode;
	int32_t stage_m, stage_s;       /* slot_stage of the moment and of the stage's start */
	uint8_t ports_m[4], ports_s[4]; /* slot_ports */
	uint32_t gad_bytes;
	uint8_t gad_m[HDD_GAD_MAX], gad_s[HDD_GAD_MAX]; /* the gadgets' records of the two (STAGES) */
	/* test 89: a training run's (tests 84-88's files end before them: hddstate.c takes a shorter record, these 0) */
	int32_t tr_on;
	uint8_t tr_val[24];             /* test 94: 16 before (an older file's last 8 are 0: no options) */
	/* test 99: the PS2 soundtrack's records of the two slots (ps2music.h; an older file's are 0: no stream, the
	 * board's music until the next track) */
	uint8_t ps2m_m[PS2M_REC_BYTES], ps2m_s[PS2M_REC_BYTES];
};
static struct hdd_host hh;
/* (the page's and the flows' state: with the menu states, sl_open's declaration) */

static void sl_open(int save)
{
	sl_save = save;
	sl_paused = menu_paused;
	sl_armed = -1;
	if (sl_sel < 0 || sl_sel >= HDD_SLOTS)
		sl_sel = 0;
	sm_state = SM_SLOTS;
	log_printf(C_WHITE, "%s: OPEN (EMU %u)", save ? "SAVE STATE" : "LOAD STATE", (unsigned)frame_count);
}

static void hdd_say(uint32_t c, const char *fmt, ...) __attribute__((format(printf, 2, 3)));
static void hdd_say(uint32_t c, const char *fmt, ...)
{
	va_list ap;

	va_start(ap, fmt);
	vsnprintf(hdd_msg, sizeof(hdd_msg), fmt, ap);
	va_end(ap);
	hdd_msg_c = c;
}

/* a press on the SLOTS page (the pause's or the menu's); 1 = it changed, *done: the pause ends (a save or a load) */
static int sl_input(uint32_t press, int *done)
{
	const struct hdd_info *i = hdd_slot(sl_sel);

	if (press & (A_UP | A_DOWN)) {
		sl_sel = (sl_sel + HDD_SLOTS + (press & A_UP ? -1 : 1)) % HDD_SLOTS;
		sl_armed = -1;
		hdd_msg[0] = 0;
		return 1;
	}
	if (press & (A_MB | A_COIN)) {
		if (sl_armed >= 0) { /* the question taken back */
			sl_armed = -1;
			return 1;
		}
		sm_state = sl_paused ? SM_PAUSE : SM_OPTS;
		if (!sl_paused)
			opt_page = 0;
		hdd_msg[0] = 0;
		log_printf(C_WHITE, "%s: BACK TO THE %s", sl_save ? "SAVE STATE" : "LOAD STATE", sl_paused ? "PAUSE MENU" : "MENU");
		return 1;
	}
	if (!(press & A_MA) || (!sl_save && i->state != HDD_OK))
		return 0;
	if (sl_armed != sl_sel && !(sl_save && i->state == HDD_EMPTY)) { /* OVERWRITE? / LOAD? (an empty slot saves at once) */
		sl_armed = sl_sel;
		hdd_msg[0] = 0;
		return 1;
	}
	sl_armed = -1;
	if (sl_save) {
		hs_slot = sl_sel;
		hs_replay = 0;
		log_printf(C_YELLOW, "SAVE STATE: SLOT %02d (EMU %u)", sl_sel + 1, (unsigned)frame_count);
		*done = 1;
	} else {
		hl_slot = sl_sel;
		hl_from = sl_paused ? HL_PAUSE : HL_MENU;
		log_printf(C_YELLOW, "LOAD STATE: SLOT %02d (EMU %u)%s", sl_sel + 1, (unsigned)frame_count,
		           sl_paused ? "" : " FROM THE MENU");
		if (sl_paused) {
			*done = 1;
		} else { /* the menu's: host_vblank loads it, the box up meanwhile */
			sm_state = SM_HDD;
			hdd_box_save = 0;
			hdd_box_k = sl_sel;
		}
	}
	return 1;
}

static void stage_short(char *t, size_t n, int stage)
{
	if (stage < 0)
		snprintf(t, n, "  -  ");
	else if (stage < 6)
		snprintf(t, n, "ST %d ", stage + 1);
	else
		snprintf(t, n, "ST2-%d", stage % 6 + 1); /* the extended mode's second loop */
}

/* the SLOTS page and the box (sm_draw): rows 14-113 under the title, the picture beside them (columns 20-33), the
 * choice and date under both, the help, the green lines */
/* the slot's picture at tx, ty (portrait rows, written as the box: each texture row upward), or a grey frame; test 98:
 * a function (MENU STYLE PS2 draws it where its panel puts it) */
static void sl_thumb(volatile uint32_t *t, int tx, int ty, const void *arg)
{
	const struct hdd_info *si = arg;
	int i;

	for (i = 0; i < HDD_THUMB_W; i++) {
		volatile uint32_t *dst = t + (size_t)(tx + i) * gtex_pitch;
		if ((unsigned)(tx + i) >= GAME_H)
			continue;
		for (int j = HDD_THUMB_H - 1; j >= 0; j--) {
			uint32_t c;
			if (si->state == HDD_OK) {
				const uint16_t q = si->thumb[j * HDD_THUMB_W + i];
				c = 0xFF000000u | (q & 0x7C00u) << 9 | (q & 0x3E0u) << 6 | (q & 0x1Fu) << 3;
			} else if (i == 0 || i == HDD_THUMB_W - 1 || j == 0 || j == HDD_THUMB_H - 1) {
				c = C_DIM;
			} else {
				continue;
			}
			dst[GAME_W - 1 - (ty + j)] = c;
		}
	}
}

static void sl_draw(volatile uint32_t *t)
{
	const int ib = game_set == SET_IBARA;
	const char *const game = !ib ? "BLACK LABEL" : ARR ? "IBARA ARRANGE" : "IBARA";
	char v[48], st[8];
	int i;

	if (sm_state == SM_HDD) {
		const int h = BOX_H(14), bx = (GAME_H - OPT_W) / 2, by = (GAME_W - h) / 2, x0 = bx + 8, y0 = by + 6;
		sm_box(t, bx, by, OPT_W, h);
		snprintf(v, sizeof(v), "%s  %s", game, hdd_box_save ? "SAVE STATE" : "LOAD STATE");
		sm_text(t, x0, y0, C_YELLOW, v);
		snprintf(v, sizeof(v), "%s SLOT %02d... %d%%", hdd_box_save ? "SAVING TO" : "LOADING", hdd_box_k + 1,
		         hdd_progress());
		sm_text(t, x0, y0 + 14, C_WHITE, v);
		return;
	}
	{
		const struct hdd_info *si = hdd_slot(sl_sel);
		const int gy = 172, h = BOX_H(sl_paused ? gy + 20 : gy + 10);
		const int bx = (GAME_H - OPT_W) / 2, by = (GAME_W - h) / 2, x0 = bx + 8, y0 = by + 6;
		const int tx = x0 + 120, ty = y0 + 14;
		const char *help;
		uint32_t hc = C_CYAN;
		sm_box(t, bx, by, OPT_W, h);
		snprintf(v, sizeof(v), "%s  %s", game, sl_save ? "SAVE STATE" : "LOAD STATE");
		sm_text(t, x0, y0, C_YELLOW, v);
		for (i = 0; i < HDD_SLOTS; i++) {
			const struct hdd_info *s = hdd_slot(i);
			const int y = y0 + 14 + 10 * i, sel = i == sl_sel;
			const uint32_t c = sel && sl_armed == i ? C_RED : sel ? C_YELLOW : s->state == HDD_OK ? C_WHITE : C_DIM;
			if (sel)
				sm_text(t, x0, y, c, ">");
			if (s->state == HDD_OK) {
				stage_short(st, sizeof(st), s->stage);
				snprintf(v, sizeof(v), "%02d %s %9u", i + 1, st, (unsigned)s->score);
			} else {
				snprintf(v, sizeof(v), "%02d %s", i + 1, s->state == HDD_EMPTY ? "EMPTY" : "UNUSABLE");
			}
			sm_text(t, x0 + 6, y, c, v);
		}
		if (ps2m_rec) /* test 98: the PS2 look draws it at its new place */
			ps2m_custom(tx, ty, HDD_THUMB_W, HDD_THUMB_H, sl_thumb, si);
		else
			sl_thumb(t, tx, ty, si);
		if (si->state == HDD_OK) {
			if (ib && !ARR)
				snprintf(v, sizeof(v), "%dP %s TYPE %c %s%s", si->side + 1, sm_ships[si->side & 1], 'A' + (si->type & 3),
				         sm_modes[si->mode % 3], si->players > 1 ? " CO-OP" : "");
			else if (ib)
				snprintf(v, sizeof(v), "%dP %s TYPE %c%s", si->side + 1, sm_ships[si->side & 1], 'A' + (si->type & 3),
				         si->players > 1 ? " CO-OP" : "");
			else
				snprintf(v, sizeof(v), "%dP SIDE%s", si->side + 1, si->players > 1 ? " CO-OP" : "");
			sm_text(t, x0, y0 + 126, C_GREEN, v);
			if (si->y)
				snprintf(v, sizeof(v), "SAVED %04d-%02d-%02d %02d:%02d", si->y, si->mo, si->d, si->h, si->mi);
			else
				snprintf(v, sizeof(v), "SAVED (NO CLOCK)");
			sm_text(t, x0, y0 + 136, C_DIM, v);
		} else if (si->state == HDD_REFUSED) {
			sm_text(t, x0, y0 + 126, C_RED, si->why ? si->why : "UNUSABLE");
		} else {
			sm_text(t, x0, y0 + 126, C_DIM, "EMPTY SLOT");
		}
		if (hdd_msg[0]) {
			help = hdd_msg;
			hc = hdd_msg_c;
		} else if (sl_armed == sl_sel) { /* test 88 (user's todo list): both pages' "CONFIRM? A = YES, B = NO" */
			help = "CONFIRM? A = YES, B = NO";
			hc = C_RED;
		} else if (sl_save) { /* test 88 (user): "A = OVERWRITE" over a slot in use */
			help = si->state == HDD_EMPTY ? "A = SAVE" : "A = OVERWRITE";
		} else {
			help = si->state == HDD_OK ? "A = LOAD, INVALIDATES SCORE" : "NOTHING TO LOAD";
		}
		sm_help1(t, x0, y0 + 150, hc, help); /* test 98 */
		sm_text(t, x0, y0 + gy, C_GREEN, "UP/DOWN SLOT, A = CONFIRM");
		sm_text(t, x0, y0 + gy + 10, C_GREEN, sl_paused ? "B / BACK = PAUSE MENU" : "B / BACK = MENU");
		if (sl_paused)
			sm_text(t, x0, y0 + gy + 20, C_GREEN, "START = RESUME");
	}
}

/* the game's picture now (VRAM's shown screen), a third its size: each pixel the mean of three by three */
static void hdd_thumb(uint16_t *th)
{
	uint32_t sx, sy;
	int tx, ty, i, j;

	blitter_get_scroll(&sx, &sy);
	for (ty = 0; ty < HDD_THUMB_H; ty++)
		for (tx = 0; tx < HDD_THUMB_W; tx++) {
			unsigned r = 0, g = 0, b = 0;
			for (j = 0; j < 3; j++) {
				const int x = GAME_W - 1 - (ty * 3 + j); /* the portrait's row = the raster's column */
				for (i = 0; i < 3; i++) {
					const int y = tx * 3 + i;
					const uint16_t q = cv1k_vram[(size_t)((y + sy) & 0xFFF) * CV1K_VRAM_STRIDE + ((x + sx) & 0x1FFF)];
					r += q >> 10 & 31;
					g += q >> 5 & 31;
					b += q & 31;
				}
			}
			th[ty * HDD_THUMB_W + tx] = (uint16_t)((r / 9) << 10 | (g / 9) << 5 | b / 9);
		}
}

/* the box over the frozen picture, at most once a step of a percent */
static void hdd_show(int *pct)
{
	if (hdd_progress() != *pct || *pct < 0) {
		*pct = hdd_progress();
		pause_redraw();
	}
	present();
}

/* the blitter's workers into hddstate.c's chunks and out again (as copy_parallel's parts) */
static void hdd_workers_start(void)
{
	worker_hdd = 1;
	__sync_synchronize(); /* the job before the generation */
	job_gen++;
}

static void hdd_workers_stop(void)
{
	int b;

	if (!bands_done(NULL))
		spin_yield_until(bands_done, NULL, 0);
	__sync_synchronize();
	worker_hdd = 0;
	for (b = 0; b < BANDS; b++) /* as copy_parallel: no conversion is owed for this generation */
		worker_conv[band_thread[b]] = job_gen;
}

static void hdd_sleep(unsigned ms)
{
	xsdk_thread_sleep(ms);
}

/* host_vblank, the pause just ended on SAVE STATE (or the harness's "# hddsave"): SLOT_STATE asked for, so the runtime
 * takes it at the next frame's first safe point; the ports stay as they were (no inputs_update this vblank) */
static void hs_ask(void)
{
	hs_phase = 1;
	hs_snaps = ymz770_snaps(SLOT_STATE);
	hs_ps2_snaps = ps2music_snaps(SLOT_STATE); /* test 99 */
	rec_hdd((uint32_t)frame_count, 0, hs_slot, 0);
	state_ask(SLOT_STATE, stage_now());
	log_printf(C_WHITE, "SAVE STATE: ITS MOMENT ASKED FOR AT EMU %u (SLOT %02d)", (unsigned)frame_count, hs_slot + 1);
}

/* pause_frame, the vblank after hs_ask: the file from SLOT_STATE (and the stage's start), then the pause again on the
 * SLOTS page (the harness's save: the game goes on) */
static void hs_write(void)
{
	const int k = hs_slot;
	const uint64_t t0 = tb_read();
	struct hdd_info in;
	struct civil cv;
	size_t n;
	int ss = -1, r = -1, pct = -1;
	const char *why = NULL;

	hs_phase = 0;
	hs_slot = -1;
	if (!rt_state_ready(SLOT_STATE) || rt_state_stats.taken_frame[SLOT_STATE] + 2 < frame_count) {
		why = "THE MOMENT WAS NOT TAKEN";
	} else {
		/* the sound thread copies the chip when it reaches the slot's time (the frame just played) */
		while (ymz770_snaps(SLOT_STATE) == hs_snaps && tb_us(t0, tb_read()) < 1000000)
			xsdk_thread_sleep(1);
		if (ymz770_snaps(SLOT_STATE) == hs_snaps)
			why = "NO SOUND STATE";
		/* test 99: and the PS2 stream's place at that moment (the sound thread reaches its output frame a little later;
		 * without it the file's record says no stream) */
		while (!why && ps2music_snaps(SLOT_STATE) == hs_ps2_snaps && tb_us(t0, tb_read()) < 1000000)
			xsdk_thread_sleep(1);
		if (!why && ps2music_snaps(SLOT_STATE) == hs_ps2_snaps)
			log_printf(C_YELLOW, "SAVE STATE: THE PS2 STREAM'S PLACE WAS NOT KEPT IN TIME: THE FILE HAS NONE");
	}
	if (!why) {
		memset(&in, 0, sizeof(in));
		in.stage = slot_stage[SLOT_STATE];
		in.side = cr_side;
		in.ship = cr_side;
		in.type = cr_type;
		in.mode = cr_mode;
		in.players = gadgets_in(0) + gadgets_in(1);
		in.score = gadgets_score(cr_side);
		if (clock_now(&cv)) {
			in.y = cv.y;
			in.mo = cv.mo;
			in.d = cv.d;
			in.h = cv.h;
			in.mi = cv.mi;
		}
		hdd_thumb(in.thumb);
		/* the stage's start goes with it when it is this stage's (not after a restart to an earlier stage's state) */
		ss = stage_slot >= 0 && rt_state_ready(stage_slot) && slot_stage[stage_slot] == slot_stage[SLOT_STATE] ?
		     stage_slot : -1;
		memset(&hh, 0, sizeof(hh));
		hh.cr_side = cr_side;
		hh.cr_type = cr_type;
		hh.cr_mode = cr_mode;
		hh.stage_m = slot_stage[SLOT_STATE];
		hh.stage_s = ss >= 0 ? slot_stage[ss] : -1;
		memcpy(hh.ports_m, slot_ports[SLOT_STATE], 4);
		if (ss >= 0)
			memcpy(hh.ports_s, slot_ports[ss], 4);
		/* test 86: the blob's size set before it is read (test 85 passed n in the same call that sets it: C leaves
		 * the order open, the PC's gcc read it first, the harness's segfault in rec0044's second save) */
		{
			const void *gm = gadgets_state_blob(SLOT_STATE, &n);
			memcpy(hh.gad_m, gm, n);
		}
		if (ss >= 0) {
			const void *gs = gadgets_state_blob(ss, &n);
			memcpy(hh.gad_s, gs, n);
		}
		hh.gad_bytes = (uint32_t)n;
		hh.tr_on = tr_run; /* test 89 */
		for (n = 0; n < TR_N; n++)
			hh.tr_val[n] = (uint8_t)tr_val[n];
		if (ps2music_snaps(SLOT_STATE) != hs_ps2_snaps) /* test 99 */
			ps2music_slot_get(SLOT_STATE, hh.ps2m_m);
		if (ss >= 0)
			ps2music_slot_get(ss, hh.ps2m_s);
		hdd_box_save = 1;
		hdd_box_k = k;
		sm_state = SM_HDD;
		r = hdd_save_begin(k, &in, &hh, ss);
		while (r == 0) {
			r = hdd_step(HDD_STEP_US);
			if (r == 0 && !hs_replay)
				hdd_show(&pct);
		}
		why = r < 0 ? hdd_why() : NULL;
	}
	if (!why) {
		hdd_saves++;
		rec_hdd((uint32_t)frame_count, 2, k, hdd_slot(k)->crc); /* "# hddsaved": the file's CRC, for the reader */
		log_printf(C_GREEN, "SAVE STATE: SLOT %02d WRITTEN IN %u MS: %u CHUNKS, %u KB OF %u KB, %u KB WRITTEN IN %u MS, "
		           "STAGE START %s (%u BLOCKS), CRC %08X", k + 1, hdd_stats.ms, hdd_stats.chunks, hdd_stats.file_kb,
		           hdd_stats.raw_kb, hdd_stats.file_kb, hdd_stats.io_ms, ss >= 0 ? "IN" : "NOT IN", hdd_stats.sblocks,
		           (unsigned)hdd_slot(k)->crc);
		hdd_say(C_GREEN, "SAVED IN SLOT %02d", k + 1);
		pm_to_state = 1; /* RESTART STAGE now offers this moment first */
	} else {
		log_printf(C_RED, "SAVE STATE: SLOT %02d NOT SAVED: %s (EMU %u)", k + 1, why, (unsigned)frame_count);
		hdd_say(C_RED, "NOT SAVED: %s", why);
	}
	if (hs_replay) {
		hs_replay = 0;
		sm_state = SM_CLOSED;
		menu_paused = 0;
		sound_paused = 0;
		return;
	}
	sl_sel = k;
	sl_reopen = 1;
	pm_reopen = PM_SAVE;
	pause_loop(pm_pad);
}

/* host_vblank: a load of file slot hl_slot (the pause's, the menu's or the harness's); returns only when it failed
 * with the machine whole (back to where it was asked, the reason on the SLOTS page) */
static void hl_load(void)
{
	const int k = hl_slot, from = hl_from;
	const char *why = NULL;
	int ss = -1, r, pct = -1;
	size_t n;

	hl_slot = -1;
	hl_from = HL_REPLAY;
	memset(&hh, 0, sizeof(hh)); /* test 89: an older file's record is shorter (no training) */
	gadgets_state_blob(0, &n);
	if (hdd_load_check(k, &hh, &ss) != 0) {
		why = hdd_why();
	} else if (hh.gad_bytes != n) {
		hdd_load_cancel();
		why = "MADE BY ANOTHER VERSION";
	}
	if (why) {
		log_printf(C_RED, "LOAD STATE: SLOT %02d NOT LOADED: %s (EMU %u)", k + 1, why, (unsigned)frame_count);
		hdd_say(C_RED, "NOT LOADED: %s", why);
		goto back;
	}
	sound_paused = 1;
	hdd_box_save = 0;
	hdd_box_k = k;
	sm_state = SM_HDD;
	menu_paused = 1;
	/* the run's slots go (the file brings its own), the attract's stays: the blocks the file changes go to it first */
	rt_state_drop(SLOT_CREDIT);
	rt_state_drop(SLOT_STAGE);
	rt_state_drop(SLOT_STATE);
	rp_cancel(RPB_LOAD); /* test 86: a LOAD STATE's run has no replay */
	ach_ok = 0;          /* test 105: nor achievements */
	credit_on = 0;
	stage_slot = -1;
	hdd_load_begin();
	while ((r = hdd_step(HDD_STEP_US)) == 0)
		if (from != HL_REPLAY)
			hdd_show(&pct);
	if (r < 0) {
		log_printf(C_RED, "LOAD STATE: SLOT %02d FAILED: %s AFTER %u MS%s", k + 1, hdd_why(), hdd_stats.ms,
		           hdd_stats.vram_touched ? ", VRAM PARTLY PUT IN" : "");
		hdd_say(C_RED, "NOT LOADED: %s", hdd_why());
		sound_paused = 0;
		sm_state = SM_CLOSED;
		menu_paused = 0;
		if (hdd_stats.vram_touched) { /* the machine is not whole: the attract's state, else the launcher */
			if (rt_state_ready(SLOT_ATTRACT)) {
				state_load_slot = SLOT_ATTRACT;
				state_load_why = "A FAILED LOAD STATE";
				state_load_now();
			}
			game_select_quit("A FAILED LOAD STATE");
		}
		goto back;
	}
	hdd_loads++;
	cr_side = hh.cr_side;
	cr_type = hh.cr_type;
	cr_mode = hh.cr_mode;
	/* test 85 (user: "going from a P2 side run to loading a P1 side save state makes P1 unresponsive until a full
	 * restart/quit to attract"): the pad that loads plays the file's side, the other pad the other one, as PLAY and
	 * FULL RESTART give them (test 84 kept the last PLAY's pad_swap; rec0042: a 2P run's PAD 0 = P2 drove the empty
	 * side after a 1P file) */
	if (from != HL_REPLAY) {
		const int pad = from == HL_PAUSE ? pm_pad : sm_pad, was = pad_swap;
		pad_swap = pad ^ (cr_side & 1);
		log_printf(was == pad_swap ? C_WHITE : C_YELLOW, "LOAD STATE: %dP FILE, PAD %d LOADED IT: PAD 0 = P%d, PAD 1 = P%d%s",
		           cr_side + 1, pad, 1 + pad_swap, 2 - pad_swap, was == pad_swap ? "" : " (CHANGED)");
	}
	credit_on = 1;
	tr_from_file(hh.tr_on, hh.tr_val); /* test 89 */
	ps2music_slot_put(SLOT_STATE, hh.ps2m_m); /* test 99: the file's records (0 in an older file: none) */
	if (ss >= 0)
		ps2music_slot_put(ss, hh.ps2m_s);
	slot_stage[SLOT_STATE] = hh.stage_m;
	memcpy(slot_ports[SLOT_STATE], hh.ports_m, 4);
	memcpy(gadgets_state_blob(SLOT_STATE, &n), hh.gad_m, n);
	if (ss >= 0 && rt_state_ready(ss)) {
		slot_stage[ss] = hh.stage_s;
		memcpy(slot_ports[ss], hh.ports_s, 4);
		memcpy(gadgets_state_blob(ss, &n), hh.gad_s, n);
		stage_slot = ss;
	}
	rec_hdd((uint32_t)frame_count, 1, k, hdd_slot(k)->crc);
	log_printf(C_GREEN, "LOAD STATE: SLOT %02d READ IN %u MS: %u CHUNKS, %u KB FROM %u KB IN %u MS, %u VRAM BLOCKS CHANGED, "
	           "STAGE START %s (%u BLOCKS%s); POOL %u OF %u BLOCKS", k + 1, hdd_stats.ms, hdd_stats.chunks,
	           hdd_stats.raw_kb, hdd_stats.file_kb, hdd_stats.io_ms, hdd_stats.vram_changed,
	           ss < 0 ? "NOT IN THE FILE" : stage_slot == ss ? "LOADED" : "LEFT OUT", hdd_stats.sblocks,
	           hdd_stats.stage_lost ? ", NO POOL ROOM" : "", rt_state_stats.pool_used, rt_state_stats.pool_blocks);
	sm_state = SM_CLOSED;
	menu_paused = 0;
	sound_paused = 0;
	hdd_msg[0] = 0;
	pm_to_state = 1; /* RESTART STAGE offers the loaded moment first */
	state_load_slot = SLOT_STATE;
	state_load_why = "LOAD STATE";
	state_load_red = 1; /* as a restart: the score is not the run's own */
	state_load_play = state_load_full = 0;
	state_load_now();
	return; /* (state_load_now returns only without the slot) */
back:
	if (from == HL_MENU) {
		sm_state = SM_SLOTS;
	} else if (from == HL_PAUSE) {
		sl_reopen = 0;
		pm_reopen = PM_LOAD;
		pause_loop(pm_pad);
	}
}

/* ---- test 86: the replays (hddstate.c's replay files) ------------------------------------------------------------- */

/* User 2026-10-27 (todo list: "main menu update: score history/input playback using log record? (put an asterisk on
 * them if they don't use default options)"; then "ask at the run's end", every replay kept with a DELETE, the asterisk =
 * the SCORE went red, "rename SCORE HISTORY to REPLAYS", "if a run used a stage restart, or load state, simply ignore
 * it", "make sure the replay save prompt shows up AFTER the initials entry screen"). A run's replay = its credit's slot
 * (SLOT_CREDIT, taken when the run first shows a stage; FULL RESTART loads it and starts the replay again) and the
 * board's ports at every emulated vblank from that slot's own (rp_base), as the recording's lines have them, with the
 * screen hash every RP_EVERY vblanks, and what a load leaves as it is: the EEPROM, the RTC9701's registers, ARRANGE's
 * BULLET DESIGN. The run's end (STATE_RUN_GAP vblanks out of it) keeps SLOT_CREDIT and the ports go on through GAME
 * OVER, the initials and the ranking; SAVE REPLAY? comes once the scene changes (sm_after: the attract's first demo),
 * or at once when a new run starts first, the game paused (rp_question). A playback (the REPLAYS page's A) loads the
 * file into SLOT_CREDIT (the attract's slot taken again first when the EEPROM changed since it was: the playback's end
 * loads it), puts the run's EEPROM, clock and BULLET DESIGN in, and plays the ports in place of the pads (the menus see
 * none, no EEPROM save); its last vblank, B / BACK, or a hash that differs (a replay of another version's game) puts the
 * player's back, loads the attract's slot and opens the menu on the page again. */
#define RP_MAX_FRAMES 432000u  /* 2 hours at 60 Hz: 1.7 MB of ports (allocated before the save states' pool; 2.5 hours
                                * left ARRANGE's 115 MB free exactly the pool's 8192 blocks, 2 hours ~1 MB more) */
#define RP_EVERY 32            /* a screen hash every this many vblanks */
#define RP_CHK_MAX (RP_MAX_FRAMES / RP_EVERY + 1)
#define RP_BUF_BYTES (RP_MAX_FRAMES * 4u + RP_CHK_MAX * 4u)
#define RP_LABEL 180           /* vblanks the playback's label stays up (from its start and after a press) */
#define RP_ROWS 10             /* the REPLAYS page's rows; test 87 (user: "10 replays per page"): RP_KEEP = 3 pages */
#define RP_WAIT_MAX 60         /* vblanks a playback waits for the attract's slot to be taken again */
#define RP_DONE_VBL 90         /* vblanks SAVE REPLAY?'s result stays up */
struct rp_host {                /* main.c's part of a replay's file */
	int32_t cr_side, cr_type, cr_mode;
	int32_t stage;              /* slot_stage[SLOT_CREDIT] */
	uint8_t ports[4];           /* slot_ports[SLOT_CREDIT] */
	uint32_t gad_bytes;
	uint8_t gad[HDD_GAD_MAX];   /* the gadgets' record of the slot (STAGES) */
	uint16_t eep[256];          /* the EEPROM at the replay's start */
	uint8_t rtc[8];             /* the RTC9701's registers then (rtc9701_get) */
	int32_t bullets;            /* ARRANGE's BULLET DESIGN (host_val[HOST_BULLETS]) */
	uint32_t frames, every;     /* the input section: frames x 4 port bytes (C D L F), then a hash every 'every' */
	/* test 117 (a file from before: none, rp_host_bytes_min): each side's Kuro BL JOIN box write (HOST_JOIN), the
	 * vblank of the input section + 1 (0 = none) and the ship byte */
	uint32_t join_k[2];
	uint8_t join_b[2], join_pad[2];
};
static struct rp_host rh;
static uint8_t *rp_buf;          /* the input section: a run's (being kept) or a playback's (loaded) */
static uint32_t rp_chk_off;      /* where its hashes start in rp_buf */
static uint16_t rp_cr_eep[256];  /* the run's start: the EEPROM, the clock, BULLET DESIGN */
static uint8_t rp_cr_rtc[8];
static int rp_cr_bullets;
static uint32_t rp_join_k[2];    /* test 117: the run's HOST_JOIN writes (struct rp_host's join_k / join_b) */
static uint8_t rp_join_b[2];
static int rp_red, rp_stage, rp_players; /* the run: its SCORE went red, the last stage, the sides that played */
static uint32_t rp_score[2];
static uint16_t rp_keep_eep[256]; /* a playback: the player's EEPROM, clock and BULLET DESIGN, put back at its end */
static uint8_t rp_keep_rtc[8];
static int rp_keep_bullets, rp_keep_seen;
static int rp_num, rp_box_num;   /* the playback's number; the box's */
static unsigned rp_label_left;   /* vblanks the label stays */
static uint32_t rp_prev[NPADS];  /* the pads at the last vblank (a playback's B / BACK) */
static unsigned rp_wait;         /* vblanks a playback has waited for the attract's slot */
static unsigned rp_saves, rp_plays;

/* the PC harness replays a recording (its lines answer and start, its "# load" lines load) */
static int rp_harness(void)
{
	return REPLAY_RP((unsigned)frame_count, RP_REC_NO) != -2;
}

static const char *rp_why(int why)
{
	static const char *const w[RPB_N] = {"-", "A STAGE RESTART", "A LOAD STATE", "QUIT TO ATTRACT",
	                                     "LONGER THAN 2 HOURS", "A VBLANK NOT KEPT", "EX-DEBUG CHANGED THE GAME"};
	return why > 0 && why < RPB_N ? w[why] : "?";
}

/* "M:SS" or "H:MM:SS" of n vblanks at 60 */
static void rp_time(char *t, size_t sz, uint32_t n)
{
	const unsigned s = n / 60;

	if (s >= 3600)
		snprintf(t, sz, "%u:%02u:%02u", s / 3600, s / 60 % 60, s % 60);
	else
		snprintf(t, sz, "%u:%02u", s / 60, s % 60);
}

/* test 105: a run from the credit's state may earn achievements, unless it is TRAINING or a replay's playback */
static void ach_start(const char *from)
{
	ach_ok = !tr_run && !rp_play;
	ach_run_start();
	log_printf(ach_ok ? C_WHITE : C_YELLOW, "ACHIEVEMENTS: %s FROM EMU %u (%s)", ach_ok ? "ON FOR THIS RUN" :
	           tr_run ? "NONE FOR THIS RUN (TRAINING)" : "NONE FOR THIS RUN (A REPLAY)", (unsigned)frame_count, from);
}

/* host_vblank, every emulated vblank after the gadgets: achieve.c's rules on this frame's RAM, the earned ones to XAM */
static void ach_step(void)
{
	struct ach_input ai;
	int ids[ACH_COUNT], n;

	static int was_on = -1, toast_set;

	if (!toast_set) { /* test 106: the ini's toast position, once (XAM keeps it for the title) */
		toast_set = 1;
		achx_toast_position(cfg.toast_pos);
		(void)achx_start(FILE_THREAD); /* test 110: the XAM calls off the game thread */
		/* test 111 (test 110's LB put the toasts in place on the console): route K from the first vblank, any toast */
		(void)achx_xam_cache_fix(0);
	}
	achx_kdi_tick(); /* test 110: the toast fix (route K) kept while it is on */
	if (cfg.achievements != was_on) { /* test 106: the debug menu's ACHIEVEMENTS (the ini's 0 by default) */
		was_on = cfg.achievements;
		log_printf(cfg.achievements ? C_YELLOW : C_WHITE, "ACHIEVEMENTS: %s (EMU %u)", cfg.achievements ?
		           "ON: WRITTEN TO THE SIGNED-IN PROFILE" : "OFF: XAM IS NOT ASKED ABOUT THEM", (unsigned)frame_count);
	}
	ai.eligible = ach_ok && !tr_run && !rp_play && !dip_changed();
	n = ach_frame(&ai, ids, ACH_COUNT);
	for (int k = 0; k < n; k++) {
		log_printf(C_GREEN, "ACHIEVEMENT: %s (%s) AT EMU %u%s", ach_name(ids[k]), ach_note() ? ach_note() : "-",
		           (unsigned)frame_count, cfg.achievements ? "" : " (ACHIEVEMENTS OFF: NOT WRITTEN)");
		if (cfg.achievements)
			achx_earned(ids[k]);
	}
	if (cfg.achievements) /* OFF: no profile list read, no write (a write started before OFF finishes in XAM) */
		achx_frame();
}

/* state_taken (SLOT_CREDIT, base = this vblank) or state_load_now (FULL RESTART, base = the next vblank): a replay
 * from here, what a load leaves as it is kept as it is now */
static void rp_capture_start(uint32_t base, const char *from)
{
	if (!rp_ok || rp_play)
		return;
	if (tr_run) { /* test 89: a training run saves no replay */
		log_printf(C_WHITE, "REPLAY: NONE FOR THIS RUN (TRAINING, EMU %u)", (unsigned)frame_count);
		return;
	}
	rp_cap = 1;
	rp_bad = 0;
	rp_pending = rp_ask = 0;
	rp_base = base;
	rp_n = 0;
	rp_chk_off = RP_MAX_FRAMES * 4u;
	rp_red = 0;
	rp_stage = slot_stage[SLOT_CREDIT];
	rp_players = 0;
	rp_score[0] = rp_score[1] = 0;
	memcpy(rp_cr_eep, rtc9701_eeprom(), sizeof(rp_cr_eep));
	memset(rp_cr_rtc, 0, sizeof(rp_cr_rtc));
	rtc9701_get(rp_cr_rtc);
	rp_cr_bullets = host_val[HOST_BULLETS];
	rp_join_k[0] = rp_join_k[1] = 0; /* test 117 */
	log_printf(C_WHITE, "REPLAY: THE RUN'S PORTS KEPT FROM EMU %u (%s)", (unsigned)base, from);
}

/* test 117: host_set's HOST_JOIN (ct_frame's, before rp_capture keeps this vblank's ports: its k is rp_n's) */
static void rp_join_note(int value)
{
	const int s = value >> 3 & 1;

	if (!rp_cap || rp_play)
		return;
	rp_join_k[s] = (uint32_t)frame_count - rp_base + 1;
	rp_join_b[s] = (uint8_t)value;
}

/* the run gets no replay (why: RPB_*); a stage restart's run can still get one after a FULL RESTART */
static void rp_cancel(int why)
{
	if (rp_pending) { /* an ended run's: its slot goes (the loads drop it themselves) */
		rp_pending = rp_ask = rp_cap = 0;
		if (why == RPB_GAP || why == RPB_LONG)
			rt_state_drop(SLOT_CREDIT);
		log_printf(C_YELLOW, "REPLAY: THE ENDED RUN'S REPLAY DROPPED (%s)", rp_why(why));
		return;
	}
	if (!rp_cap)
		return;
	if (!rp_bad)
		log_printf(C_YELLOW, "REPLAY: NONE FOR THIS RUN FROM EMU %u (%s)", (unsigned)frame_count, rp_why(why));
	rp_bad = why;
	if (why == RPB_QUIT || why == RPB_LOAD)
		rp_cap = 0;
}

/* host_vblank, after state_frame: this vblank's ports (as rec_frame gets them), every RP_EVERY a screen hash, and the
 * run's summary (its sides' scores, the last stage, the SCORE red) */
static void rp_capture(uint32_t hsum)
{
	uint32_t k;

	if (!rp_cap || rp_bad || rp_play)
		return;
	k = (uint32_t)frame_count - rp_base;
	if (k != rp_n) {
		rp_cancel(RPB_GAP);
		return;
	}
	if (rp_n >= RP_MAX_FRAMES) {
		rp_cancel(RPB_LONG);
		return;
	}
	rp_buf[k * 4u] = in_port_c;
	rp_buf[k * 4u + 1] = in_port_d;
	rp_buf[k * 4u + 2] = in_port_l;
	rp_buf[k * 4u + 3] = in_port_f;
	if (k % RP_EVERY == 0)
		memcpy(rp_buf + rp_chk_off + k / RP_EVERY * 4u, &hsum, 4);
	rp_n++;
	if (sm_run) {
		const int st = stage_now();
		int s, in = 0;
		if (st > rp_stage)
			rp_stage = st;
		for (s = 0; s < 2; s++)
			if (gadgets_in(s)) {
				in++;
				rp_score[s] = gadgets_score(s);
				if (gadgets_red(s))
					rp_red = 1;
			}
		if (in > rp_players)
			rp_players = in;
	}
}

static void rl_say(uint32_t c, const char *fmt, ...) __attribute__((format(printf, 2, 3)));
static void rl_say(uint32_t c, const char *fmt, ...)
{
	va_list ap;

	va_start(ap, fmt);
	vsnprintf(rl_msg, sizeof(rl_msg), fmt, ap);
	va_end(ap);
	rl_msg_c = c;
}

/* SAVE REPLAY?'s A: the file from SLOT_CREDIT and the ports (num: the harness's recording's, else 0 = the next) */
static void rp_write(int num, int harness)
{
	const uint32_t nchk = (rp_n + RP_EVERY - 1) / RP_EVERY;
	const int sd = cr_side & 1;
	struct hdd_info in;
	struct civil cv;
	char tm[16];
	size_t n;
	int r, pct = -1;

	memset(&in, 0, sizeof(in));
	in.stage = rp_stage;
	in.side = cr_side;
	in.ship = cr_side;
	in.type = cr_type;
	in.mode = cr_mode;
	in.players = rp_players ? rp_players : 1;
	in.score = rp_score[sd];
	in.score2 = rp_score[sd ^ 1];
	in.frames = rp_n;
	in.flags = rp_red ? HDD_RP_RED : 0;
	if (clock_now(&cv)) {
		in.y = cv.y;
		in.mo = cv.mo;
		in.d = cv.d;
		in.h = cv.h;
		in.mi = cv.mi;
	}
	hdd_thumb(in.thumb); /* the run's last picture (not shown yet) */
	memset(&rh, 0, sizeof(rh));
	rh.cr_side = cr_side;
	rh.cr_type = cr_type;
	rh.cr_mode = cr_mode;
	rh.stage = slot_stage[SLOT_CREDIT];
	memcpy(rh.ports, slot_ports[SLOT_CREDIT], 4);
	{
		const void *g = gadgets_state_blob(SLOT_CREDIT, &n); /* test 85's lesson: the size set before it is read */
		memcpy(rh.gad, g, n);
		rh.gad_bytes = (uint32_t)n;
	}
	memcpy(rh.eep, rp_cr_eep, sizeof(rh.eep));
	memcpy(rh.rtc, rp_cr_rtc, sizeof(rh.rtc));
	rh.bullets = rp_cr_bullets;
	for (int s = 0; s < 2; s++) { /* test 117 */
		rh.join_k[s] = rp_join_k[s];
		rh.join_b[s] = rp_join_b[s];
	}
	rh.frames = rp_n;
	rh.every = RP_EVERY;
	memmove(rp_buf + rp_n * 4u, rp_buf + rp_chk_off, nchk * 4u); /* the hashes right after the ports */
	rp_chk_off = rp_n * 4u;
	sm_state = SM_RPBOX;
	rp_box = RPX_SAVING;
	rp_box_num = num;
	r = hdd_rp_save_begin(num, &in, &rh, rp_n * 4u + nchk * 4u);
	if (r > 0) {
		rp_box_num = r;
		rec_replay((uint32_t)frame_count, RP_REC_SAVE, (uint32_t)r, 0);
		while ((num = hdd_step(HDD_STEP_US)) == 0)
			if (!harness)
				hdd_show(&pct);
	}
	rp_time(tm, sizeof(tm), rp_n);
	if (r > 0 && num > 0) {
		const struct hdd_rpinfo *e = hdd_rp(0);
		rp_saves++;
		rl_say(C_GREEN, "SAVED AS REPLAY %04d", r);
		rec_replay((uint32_t)frame_count, RP_REC_SAVED, (uint32_t)r, e ? e->crc : 0);
		log_printf(C_GREEN, "REPLAY: %04d WRITTEN IN %u MS: %u VBLANKS (%s) FROM EMU %u, %u CHUNKS, %u KB OF %u KB, "
		           "SCORE %u%s, CRC %08X", r, hdd_stats.ms, (unsigned)rp_n, tm, (unsigned)rp_base, hdd_stats.chunks,
		           hdd_stats.file_kb, hdd_stats.raw_kb, (unsigned)in.score, rp_red ? " (RED)" : "", e ? (unsigned)e->crc : 0);
	} else {
		log_printf(C_RED, "REPLAY: NOT SAVED: %s (EMU %u)", hdd_why(), (unsigned)frame_count);
		rl_say(C_RED, "NOT SAVED: %s", hdd_why());
	}
	if (!harness) { /* the result for RP_DONE_VBL vblanks (any press ends it) */
		uint32_t last[NPADS];
		int p;
		rp_box = RPX_DONE;
		pause_redraw();
		for (p = 0; p < NPADS; p++)
			last[p] = pad_word[p];
		for (unsigned vb = 0; vb < RP_DONE_VBL; vb++) {
			int any = 0;
			present();
			for (p = 0; p < NPADS; p++) {
				any |= (pad_word[p] & ~last[p] & (A_MA | A_MB | A_COIN)) != 0;
				last[p] = pad_word[p];
			}
			if (any)
				break;
		}
	}
	/* test 88 (user's todo list: "in replay data, green line saved as replay xxxx is unnecessary"): the box said it;
	 * the REPLAY DATA page opens without it (a failure stays there) */
	if (rl_msg_c == C_GREEN)
		rl_msg[0] = 0;
}

/* host_vblank, the vblank after state_frame asked: SAVE REPLAY? with the game paused (A = yes, B / BACK = no; the PC
 * harness: the recording's "# rpsave" at this vblank = A, none = B); the answer's file, then the credit's slot goes */
static void rp_question(void)
{
	const int hr = REPLAY_RP((unsigned)frame_count, RP_REC_SAVE);
	const int hdel = REPLAY_RP((unsigned)frame_count, RP_REC_DEL); /* test 87: the replay the recording's save replaced */
	const uint64_t t0 = tb_read();
	uint32_t last[NPADS];
	struct menu_rep reps[NPADS] = {{0}}; /* test 93: held directions (menu_repeat) */
	char tm[16];
	int p, yes = hr >= 0 ? 1 : hr == -1 ? 0 : -1, by = -1, del = -1;
	unsigned vb = 0, ms;

	rp_ask = rp_pending = rp_cap = 0; /* the replay ends at the last vblank */
	if (rp_cut && rp_n > rp_cut) { /* test 91: or where the scene changed (a Start on GAME OVER) */
		log_printf(C_WHITE, "REPLAY: ENDS AT EMU %u, THE SCENE'S CHANGE (%u VBLANKS OF THE TITLE LEFT OUT)",
		           (unsigned)(rp_base + rp_cut - 1), (unsigned)(rp_n - rp_cut));
		rp_n = rp_cut;
	}
	rp_cut = 0;
	rp_time(tm, sizeof(tm), rp_n);
	log_printf(C_YELLOW, "REPLAY: SAVE REPLAY? AT EMU %u (%u VBLANKS, %s; SCORE %u%s)%s", (unsigned)frame_count,
	           (unsigned)rp_n, tm, (unsigned)rp_score[cr_side & 1], rp_red ? ", RED" : "",
	           yes >= 0 ? ", THE RECORDING ANSWERS" : "");
	sound_paused = 1;
	menu_paused = 1;
	if (yes < 0) {
		pauses++;
		sm_state = SM_RPBOX;
		rp_box = RPX_ASK;
		for (p = 0; p < NPADS; p++)
			last[p] = pad_word[p];
		rl_pick = 0;
		pause_redraw();
		while (yes < 0) {
			if (menu_ps2() && !(vb & 1)) /* test 98: the rose's next picture */
				pause_redraw();
			present();
			vb++;
			for (p = 0; p < NPADS && yes < 0; p++) {
				const uint32_t w = pad_word[p], press = (w & ~last[p]) | menu_repeat(&reps[p], w); /* test 93 */
				last[p] = w;
				if (!press)
					continue;
				const int se_st = sm_state; /* test 98 */
				const uint32_t se_sig = menu_sig();
				if (rl_pick) { /* test 87: the page with RP_KEEP replays, the one to replace (B: the question again) */
					if (press & (A_UP | A_DOWN | A_LEFT | A_RIGHT)) {
						rl_move(press);
					} else if (press & (A_MB | A_COIN)) {
						rl_pick = 0;
						sm_state = SM_RPBOX;
					} else if ((press & A_MA) && hdd_rp(rl_sel)) {
						del = rl_sel;
						yes = 1, by = p;
					}
					pause_redraw();
				} else if ((press & A_MA) && hdd_rp_count() >= RP_KEEP) { /* user: "limit it to 30 replays" */
					rl_pick = 1;
					rl_sel = hdd_rp_count() - 1; /* the oldest (the list is newest first) */
					rl_top = rl_sel - rl_sel % RP_ROWS;
					rl_armed = -1;
					rl_msg[0] = 0;
					sm_state = SM_REPLAYS;
					pause_redraw();
				} else if (press & A_MA) {
					yes = 1, by = p;
				} else if (press & (A_MB | A_COIN)) {
					yes = 0, by = p;
				}
				menu_se(se_st, se_sig, press, yes >= 0); /* test 98 */
			}
		}
		rl_pick = 0;
		for (p = 0; p < 2; p++) { /* the answer's buttons kept from the game until released */
			pause_hold[p] = last[p] & ~(uint32_t)(A_UP | A_DOWN | A_LEFT | A_RIGHT);
			pause_prev[p] = last[p];
		}
	}
	if (yes) {
		if (hr >= 0 && hdel >= 0) /* the PC harness: the recording's replaced replay, its own file of that number */
			for (p = 0; p < hdd_rp_count(); p++)
				if (hdd_rp(p)->num == hdel)
					del = p;
		if (del >= 0) /* test 87: the full list's choice goes first (kept on when it cannot be deleted) */
			rp_delete(del, ", REPLACED BY THE NEW ONE");
		rp_write(hr >= 0 ? hr : 0, hr >= 0);
	} else {
		rec_replay((uint32_t)frame_count, RP_REC_NO, 0, 0);
		log_printf(C_WHITE, "REPLAY: NOT SAVED (%s)", by >= 0 ? "B" : "THE RECORDING");
	}
	rt_state_drop(SLOT_CREDIT);
	sm_state = SM_CLOSED;
	menu_paused = 0;
	sound_paused = 0;
	tex_ok = 0;
	pause_flag = PF_PAUSED;
	pause_ticks += tb_read() - t0;
	ms = (unsigned)((tb_read() - t0) * 1000 / PPC_TIMEBASE_FREQ);
	log_printf(C_GREEN, "REPLAY: THE GAME GOES ON AT EMU %u AFTER %u.%u S (%u VBLANKS%s)", (unsigned)frame_count,
	           ms / 1000, ms / 100 % 10, vb, by >= 0 ? (yes ? ", A" : ", B / BACK") : "");
}

/* host_vblank (rp_req: the REPLAYS page's A, or the harness's "# rpplay"): the attract's slot taken again first when
 * the EEPROM changed since (the playback's end loads it), then the file into SLOT_CREDIT, the run's EEPROM, clock and
 * BULLET DESIGN in, and the slot loaded (state_load_now, which does not return); returns when it did not play */
static void rp_start(int harness)
{
	const int i = rp_req;
	const struct hdd_rpinfo *e = hdd_rp(i);
	const char *why = NULL;
	char tm[16];
	size_t n;
	int r, pct = -1;

	if (rp_wait == 0) /* the vblank it starts at (the harness's "# rpplay") */
		rec_replay((uint32_t)frame_count, RP_REC_PLAY, (uint32_t)rp_req_num, e ? e->crc : 0);
	if (!e || e->num != rp_req_num || e->state != HDD_OK) {
		why = "NO SUCH REPLAY";
	} else if (sm_run && !rp_again) { /* test 87: RESTART REPLAY starts it inside its own run */
		why = "A RUN STARTED";
	} else if (!rt_state_ready(SLOT_ATTRACT) || !attract_current()) {
		if (rp_again || rp_wait++ >= RP_WAIT_MAX) { /* test 87: never the attract's slot taken in a playback */
			why = "NO TITLE STATE";
		} else {
			if (!rt_state_want)
				state_ask(SLOT_ATTRACT, -1);
			return; /* taken during the next emulated frame */
		}
	}
	rp_req = -1;
	rp_wait = 0;
	gadgets_state_blob(0, &n);
	memset(&rh, 0, sizeof(rh)); /* test 117: an older file's record is shorter (no join_k) */
	if (!why && hdd_rp_load_check(i, &rh) != 0) {
		why = hdd_why();
	} else if (!why && (rh.gad_bytes != n || rh.every != RP_EVERY || !rh.frames || rh.frames > RP_MAX_FRAMES ||
	                    hdd_rp_input_bytes() != rh.frames * 4u + (rh.frames + RP_EVERY - 1) / RP_EVERY * 4u)) {
		hdd_load_cancel();
		why = "MADE BY ANOTHER VERSION";
	}
	if (why) {
		log_printf(C_RED, "REPLAY: %04d NOT PLAYED: %s (EMU %u)", rp_req_num, why, (unsigned)frame_count);
		rl_say(C_RED, "NOT PLAYED: %s", why);
		if (sm_state == SM_RPBOX)
			sm_state = SM_REPLAYS;
		return;
	}
	sound_paused = 1;
	menu_paused = 1;
	sm_state = SM_RPBOX;
	rp_box = RPX_LOADING;
	rp_box_num = e->num;
	/* as hl_load: the run's slots go (there is none: the attract), the attract's stays and gets the old pixels */
	rt_state_drop(SLOT_CREDIT);
	rt_state_drop(SLOT_STAGE);
	rt_state_drop(SLOT_STATE);
	rp_cancel(RPB_LOAD);
	ach_ok = 0; /* test 105 */
	credit_on = 0;
	stage_slot = -1;
	hdd_load_begin();
	while ((r = hdd_step(HDD_STEP_US)) == 0)
		if (!harness)
			hdd_show(&pct);
	if (r < 0) {
		log_printf(C_RED, "REPLAY: %04d FAILED: %s AFTER %u MS%s", e->num, hdd_why(), hdd_stats.ms,
		           hdd_stats.vram_touched ? ", VRAM PARTLY PUT IN" : "");
		rl_say(C_RED, "NOT PLAYED: %s", hdd_why());
		sound_paused = 0;
		menu_paused = 0;
		sm_state = SM_REPLAYS;
		if (hdd_stats.vram_touched) { /* the machine is not whole: the attract's state (there: checked above) */
			rl_reopen = 1;
			state_load_slot = SLOT_ATTRACT;
			state_load_why = "A FAILED REPLAY";
			state_load_now();
			game_select_quit("A FAILED REPLAY");
		}
		return;
	}
	/* the player's EEPROM, clock and BULLET DESIGN kept, the run's in */
	memcpy(rp_keep_eep, rtc9701_eeprom(), sizeof(rp_keep_eep));
	memset(rp_keep_rtc, 0, sizeof(rp_keep_rtc));
	rtc9701_get(rp_keep_rtc);
	rp_keep_bullets = host_val[HOST_BULLETS];
	rp_keep_seen = host_seen[HOST_BULLETS];
	memcpy(rtc9701_eeprom(), rh.eep, sizeof(rh.eep));
	rtc9701_put(rh.rtc);
	host_val[HOST_BULLETS] = rh.bullets;
	host_seen[HOST_BULLETS] = ARR; /* host_reapply writes it after the load */
	cr_side = rh.cr_side;
	cr_type = rh.cr_type;
	cr_mode = rh.cr_mode;
	slot_stage[SLOT_CREDIT] = rh.stage;
	ps2music_slot_put(SLOT_CREDIT, NULL); /* test 99: a replay's start has no stream record (no track plays there) */
	memcpy(slot_ports[SLOT_CREDIT], rh.ports, 4);
	memcpy(gadgets_state_blob(SLOT_CREDIT, &n), rh.gad, n);
	rp_n = rh.frames;
	rp_chk_off = rh.frames * 4u;
	rp_num = e->num;
	rp_base = (uint32_t)frame_count + 1; /* rt_state_load counts this vblank: the next host_vblank is the replay's 0 */
	rp_play = 1;
	rp_plays++;
	rp_label_left = RP_LABEL;
	for (int p = 0; p < NPADS; p++)
		rp_prev[p] = pad_word[p];
	credit_on = 1; /* the gadgets' pilot: the run's side */
	rp_time(tm, sizeof(tm), rp_n);
	log_printf(C_GREEN, "REPLAY: %04d PLAYS FROM EMU %u: %u VBLANKS (%s), READ IN %u MS (%u KB FROM %u KB), %dP SIDE",
	           rp_num, (unsigned)rp_base, (unsigned)rp_n, tm, hdd_stats.ms, hdd_stats.raw_kb, hdd_stats.file_kb,
	           cr_side + 1);
	sm_state = SM_CLOSED;
	menu_paused = 0;
	sound_paused = 0;
	state_load_slot = SLOT_CREDIT;
	state_load_why = "REPLAY";
	state_load_red = state_load_play = state_load_full = 0;
	state_load_now();
}

/* a playback ends (why 0 = its last vblank, 1 = B / BACK, 2 = a screen hash differs; test 87: 1 = its pause's QUIT
 * REPLAY): the player's EEPROM, clock and BULLET DESIGN back, the attract's slot loaded (state_load_now, which does not
 * return), the page again after it */
static void rp_end(int why)
{
	const uint32_t k = (uint32_t)frame_count - rp_base;
	static const char *const w[3] = {"ITS END", "STOPPED (QUIT REPLAY)", "OUT OF STEP: ANOTHER VERSION'S GAME?"};
	char tm[16];

	memcpy(rtc9701_eeprom(), rp_keep_eep, sizeof(rp_keep_eep));
	rtc9701_put(rp_keep_rtc);
	host_val[HOST_BULLETS] = rp_keep_bullets;
	host_seen[HOST_BULLETS] = rp_keep_seen;
	rp_play = 0;
	rp_time(tm, sizeof(tm), k);
	rec_replay((uint32_t)frame_count, RP_REC_END, (uint32_t)rp_num, (uint32_t)why);
	log_printf(why == 2 ? C_RED : C_GREEN, "REPLAY: %04d ENDED AT EMU %u, ITS VBLANK %u OF %u (%s): %s", rp_num,
	           (unsigned)frame_count, (unsigned)k, (unsigned)rp_n, tm, w[why]);
	if (why == 0)
		rl_say(C_GREEN, "REPLAY %04d ENDED", rp_num);
	else if (why == 1)
		rl_say(C_WHITE, "REPLAY %04d STOPPED AT %s", rp_num, tm);
	else
		rl_say(C_RED, "OUT OF STEP AT %s", tm);
	rl_reopen = 1;
	if (!rt_state_ready(SLOT_ATTRACT))
		game_select_quit("A REPLAY WITHOUT THE ATTRACT'S STATE");
	state_load_slot = SLOT_ATTRACT;
	state_load_why = "THE REPLAY'S END";
	state_load_red = state_load_play = state_load_full = 0;
	state_load_now();
}

/* test 87: the playback's RESTART REPLAY: the player's EEPROM, clock and BULLET DESIGN back (rp_start keeps them again),
 * "# rpend <frame> <num> 3", then the file read again and its start loaded as the REPLAY DATA page's A does (rp_start,
 * which does not return when it plays; the attract's slot is the one taken before the first playback). Not played (its
 * file went): the attract, as at a playback's end */
static void rp_restart(void)
{
	const uint32_t k = (uint32_t)frame_count - rp_base;
	const int num = rp_num;
	int i;

	memcpy(rtc9701_eeprom(), rp_keep_eep, sizeof(rp_keep_eep));
	rtc9701_put(rp_keep_rtc);
	host_val[HOST_BULLETS] = rp_keep_bullets;
	host_seen[HOST_BULLETS] = rp_keep_seen;
	rp_play = 0;
	rec_replay((uint32_t)frame_count, RP_REC_END, (uint32_t)num, 3);
	log_printf(C_YELLOW, "REPLAY: %04d RESTARTED AT EMU %u, ITS VBLANK %u OF %u", num, (unsigned)frame_count,
	           (unsigned)k, (unsigned)rp_n);
	for (i = 0; i < hdd_rp_count() && hdd_rp(i)->num != num; i++)
		;
	rp_req = i < hdd_rp_count() ? i : HDD_RP_MAX;
	rp_req_num = num;
	rp_wait = 0;
	rp_again = 1;
	rp_start(rp_harness());
	rp_again = 0;
	rp_req = -1;
	rp_end(1);
}

/* host_vblank, after pause_frame: SAVE REPLAY? (rp_ask), a playback's start (rp_req) or its checks and end */
static void rp_vblank(uint32_t hsum)
{
	/* the replay's start (the credit's slot taken during this frame): that slot loaded back at once, so the run goes on
	 * from it as each of its playbacks will. After a load the rest of each function running at the slot's moment is
	 * interpreted (sh3_rt.c rt_run), which charges the PCB model other cycles than the compiled code a run that went on
	 * did: test 86's harness run p41b played rec0041's run 2 back equal for 21740 vblanks (6:02), then one logic frame
	 * late (the frame logs' penalty cycles and misses differed from its first vblank). The PC harness replaying a
	 * recording loads where its "# load" lines say (REPLAY_LOAD) */
	if (rp_selfload) {
		rp_selfload = 0;
		if (!rp_harness() && state_load_slot < 0 && hs_slot < 0 && hl_slot < 0 && rt_state_ready(SLOT_CREDIT)) {
			state_load_slot = SLOT_CREDIT;
			state_load_why = "THE REPLAY'S START";
			state_load_red = state_load_play = state_load_full = 0;
		}
	}
	if (rp_ask)
		rp_question();
	if (rp_ok) { /* test 87: the PC harness: a recording's DELETE on the page (its own file of that number) */
		const int num = REPLAY_RP((unsigned)frame_count, RP_REC_DEL);
		for (int i = 0; num >= 0 && i < hdd_rp_count(); i++)
			if (hdd_rp(i)->num == num) {
				rp_delete(i, ", THE RECORDING'S");
				break;
			}
	}
	if (!rp_play && rp_req < 0 && rp_ok) { /* the PC harness: a recording's playback starts at this vblank */
		const int num = REPLAY_RP((unsigned)frame_count, RP_REC_PLAY);
		if (num >= 0) {
			int i;
			for (i = 0; i < hdd_rp_count() && hdd_rp(i)->num != num; i++)
				;
			rp_req = i < hdd_rp_count() ? i : HDD_RP_MAX;
			rp_req_num = num;
			rp_wait = 0;
		}
	}
	if (!rp_play && rp_req >= 0)
		rp_start(rp_harness());
	if (rp_play) {
		const uint32_t k = (uint32_t)frame_count - rp_base;
		uint32_t h;
		int why = -1, p;
		for (p = 0; p < NPADS; p++) { /* test 87: B no longer stops it (user), BACK is its pause menu (pause_frame) */
			const uint32_t press = pad_word[p] & ~rp_prev[p];
			rp_prev[p] = pad_word[p];
			if (press & ~(uint32_t)A_ON)
				rp_label_left = RP_LABEL;
		}
		if (rp_quit_req) /* test 87: its pause menu's choice at this vblank */
			why = 1;
		if (rp_restart_req)
			why = 3;
		rp_quit_req = rp_restart_req = 0;
		if (REPLAY_RP((unsigned)frame_count, RP_REC_END) >= 0) /* the PC harness: the recording's stop, or restart */
			why = REPLAY_RP((unsigned)frame_count, RP_REC_PLAY) >= 0 ? 3 : 1;
		if (why < 0 && k >= rp_n)
			why = 0;
		if (why < 0 && k % RP_EVERY == 0) {
			memcpy(&h, rp_buf + rp_chk_off + k / RP_EVERY * 4u, 4);
			if (h != hsum)
				why = 2;
		}
		if (why == 3)
			rp_restart();
		else if (why >= 0)
			rp_end(why);
		if (k == 0) /* the loaded start is not needed again: only the attract's slot gets old pixels from here */
			rt_state_drop(SLOT_CREDIT);
	}
}

/* in place of inputs_update while a replay plays: its ports, the menus' trackers with no pad */
static void rp_inputs(void)
{
	const uint8_t *q = rp_buf + (size_t)((uint32_t)frame_count - rp_base) * 4u;
	uint32_t none[2] = {0, 0};

	if (host_reapply_due)
		host_reapply();
	for (int s = 0; s < 2; s++) /* test 117: the run's Kuro BL JOIN box writes at their vblanks */
		if (rh.join_k[s] && rh.join_k[s] == (uint32_t)frame_count - rp_base + 1)
			host_set(HOST_JOIN, rh.join_b[s], 0);
	sm_frame(none);
	snd_frame();
	if (rp_label_left)
		rp_label_left--;
	in_port_c = q[0];
	in_port_d = q[1];
	in_port_l = q[2];
	in_port_f = q[3];
}

/* the playback's label at the game's bottom for RP_LABEL vblanks; 1 = drawn */
static int rp_label(volatile uint32_t *t)
{
	const int w = 216, h = 24, bx = (GAME_H - w) / 2, by = GAME_W - h - 3;
	char v[40];

	if (!rp_label_left && rp_speed >= 100) /* test 89: up while slowed */
		return 0;
	if (rp_speed < 100 || rp_speed_shown) /* test 89: LB / RB */
		snprintf(v, sizeof(v), "REPLAY %04d  SPEED %d%%", rp_num, rp_speed);
	else
		snprintf(v, sizeof(v), "REPLAY %04d", rp_num);
	if (menu_ps2()) {
		const struct ps2m_target tg = {t, gtex_pitch, cv1k_vram, CV1K_VRAM_STRIDE, tex_sx, tex_sy};
		ps2m_begin();
		ps2m_exact = 1;
		ps2m_bottom = 1;
		ps2m_rec = 1;
		sm_box(t, bx, by, w, h);
		sm_text(t, bx + 8, by + 6, C_YELLOW, v);
		sm_text(t, bx + 8 + 8 * 12, by + 6, C_CYAN, "BACK = PAUSE");
		sm_text(t, bx + 8, by + 14, C_GREEN, "LB / RB = PLAYBACK SPEED");
		ps2m_rec = 0;
		ps2m_render(&tg, ps2m_clock++, menu_ja());
	} else {
		sm_box(t, bx, by, w, h);
		sm_text(t, bx + 6, by + 5, C_YELLOW, v);
		sm_text(t, bx + 6 + 6 * 12, by + 5, C_CYAN, "BACK = PAUSE");
		sm_text(t, bx + 6, by + 13, C_GREEN, "LB / RB = PLAYBACK SPEED");
	}
	return 1;
}

/* ---- the REPLAYS page (the menu's) ---- */

static void rl_open(void)
{
	const int n = hdd_rp_count();

	sm_state = SM_REPLAYS;
	rl_armed = -1;
	if (rl_sel >= n)
		rl_sel = n ? n - 1 : 0;
	if (rl_sel < rl_top || rl_sel >= rl_top + RP_ROWS)
		rl_top = rl_sel - rl_sel % RP_ROWS;
	log_printf(C_WHITE, "REPLAYS: OPEN (EMU %u, %d REPLAYS)", (unsigned)frame_count, n);
}

/* UP / DOWN a row, LEFT / RIGHT a page (test 87, user: "since the replay limit is 30, left/right = change page should
 * still be an option"); the rows scroll with the highlight */
static void rl_move(uint32_t press)
{
	const int n = hdd_rp_count(), step = press & (A_LEFT | A_RIGHT) ? RP_ROWS : 1;

	if (!n)
		return;
	if (press & (A_UP | A_LEFT))
		rl_sel = rl_sel - step < 0 ? (step > 1 ? 0 : n - 1) : rl_sel - step;
	else
		rl_sel = rl_sel + step >= n ? (step > 1 ? n - 1 : 0) : rl_sel + step;
	if (rl_sel < rl_top)
		rl_top = rl_sel;
	if (rl_sel >= rl_top + RP_ROWS)
		rl_top = rl_sel - RP_ROWS + 1;
}

/* a replay's file deleted (the page's DELETE, or the one SAVE REPLAY? replaces): 0 = done, in the recording for the PC
 * harness ("# rpdel <frame> <num>", which deletes its own file of that number) */
static int rp_delete(int i, const char *why)
{
	const int num = hdd_rp(i)->num;

	if (hdd_rp_delete(i) != 0) {
		log_printf(C_RED, "REPLAYS: %04d NOT DELETED: %s", num, hdd_why());
		rl_say(C_RED, "NOT DELETED: %s", hdd_why());
		return -1;
	}
	rec_replay((uint32_t)frame_count, RP_REC_DEL, (uint32_t)num, 0);
	log_printf(C_YELLOW, "REPLAYS: %04d DELETED (EMU %u%s)", num, (unsigned)frame_count, why);
	return 0;
}

static void rl_input(uint32_t press)
{
	const struct hdd_rpinfo *e = hdd_rp(rl_sel);

	if (press & (A_UP | A_DOWN | A_LEFT | A_RIGHT)) {
		rl_move(press);
		rl_armed = -1;
		rl_msg[0] = 0;
		return;
	}
	if (press & (A_MB | A_COIN)) {
		if (rl_armed >= 0) { /* the question taken back */
			rl_armed = -1;
			return;
		}
		sm_state = SM_OPTS;
		opt_page = 0;
		rl_msg[0] = 0;
		log_printf(C_WHITE, "REPLAYS: BACK TO THE MENU");
		return;
	}
	if (!e)
		return;
	if (press & A_MX) { /* DELETE? */
		rl_armed = rl_sel;
		rl_msg[0] = 0;
		return;
	}
	if (!(press & A_MA))
		return;
	if (rl_armed == rl_sel) {
		const int num = e->num;
		rl_armed = -1;
		if (rp_delete(rl_sel, "") == 0) {
			rl_say(C_YELLOW, "REPLAY %04d DELETED", num);
			if (rl_sel >= hdd_rp_count() && rl_sel > 0)
				rl_sel--;
			if (rl_top > rl_sel)
				rl_top = rl_sel;
		}
		return;
	}
	if (e->state != HDD_OK) {
		rl_say(C_RED, "CANNOT PLAY: %s", e->why ? e->why : "UNUSABLE");
		return;
	}
	rp_req = rl_sel;
	rp_req_num = e->num;
	rp_wait = 0;
	rp_box = RPX_WAIT;
	rp_box_num = e->num;
	rl_msg[0] = 0;
	sm_state = SM_RPBOX;
	log_printf(C_YELLOW, "REPLAYS: %04d (PAD %d, EMU %u)", e->num, sm_pad, (unsigned)frame_count);
}

/* the page and the replays' boxes (sm_draw): the rows under the title, the highlighted one's details, the help */
static void rl_draw(volatile uint32_t *t)
{
	const int ib = game_set == SET_IBARA;
	const char *const game = !ib ? "BLACK LABEL" : ARR ? "IBARA ARRANGE" : "IBARA";
	const int n = hdd_rp_count();
	char v[48], st[8], tm[16];
	int i;

	if (sm_state == SM_RPBOX) {
		const int ask = rp_box == RPX_ASK, h = BOX_H(ask ? 46 : 14);
		const int bx = (GAME_H - OPT_W) / 2, by = (GAME_W - h) / 2, x0 = bx + 8, y0 = by + 6;
		sm_box(t, bx, by, OPT_W, h);
		snprintf(v, sizeof(v), "%s  REPLAY", game);
		sm_text(t, x0, y0, C_YELLOW, v);
		if (ask) {
			stage_short(st, sizeof(st), rp_stage);
			rp_time(tm, sizeof(tm), rp_n);
			sm_text(t, x0, y0 + 14, C_WHITE, "SAVE REPLAY?");
			snprintf(v, sizeof(v), "%s %9u%s  %s", st, (unsigned)rp_score[cr_side & 1], rp_red ? "*" : " ", tm);
			sm_text(t, x0, y0 + 24, rp_red ? C_RED : C_GREEN, v);
			sm_text(t, x0, y0 + 36, C_GREEN, "A = YES, B = NO");
			if (rp_red)
				sm_text(t, x0 + 6 * 17, y0 + 36, C_DIM, "* = INVALID SCORE");
			/* test 87: a full list: A chooses the one it replaces; test 88 (user: "save replay menu gray line is
			 * unnecessary"): no "FROM ITS START TO THE INITIALS" */
			if (n >= RP_KEEP)
				sm_text(t, x0, y0 + 46, C_YELLOW, "REPLAY DATA FULL: A = REPLACE ONE");
		} else if (rp_box == RPX_DONE) {
			sm_text(t, x0, y0 + 14, rl_msg_c, rl_msg);
		} else if (rp_box == RPX_WAIT) {
			snprintf(v, sizeof(v), "LOADING REPLAY %04d...", rp_box_num);
			sm_text(t, x0, y0 + 14, C_WHITE, v);
		} else {
			snprintf(v, sizeof(v), "%s REPLAY %04d... %d%%", rp_box == RPX_SAVING ? "SAVING" : "LOADING", rp_box_num,
			         hdd_progress());
			sm_text(t, x0, y0 + 14, C_WHITE, v);
		}
		return;
	}
	{
		const struct hdd_rpinfo *s = hdd_rp(rl_sel);
		const int ly = 14 + 10 * RP_ROWS + 4, gy = ly + 40, h = BOX_H(gy + 10);
		const int bx = (GAME_H - OPT_W) / 2, by = (GAME_W - h) / 2, x0 = bx + 8, y0 = by + 6;
		const char *help;
		uint32_t hc = C_CYAN;
		sm_box(t, bx, by, OPT_W, h);
		if (rl_pick) /* test 87: SAVE REPLAY?'s A with RP_KEEP replays */
			snprintf(v, sizeof(v), "REPLACE WHICH REPLAY?");
		else
			snprintf(v, sizeof(v), "%s  REPLAY DATA", game);
		sm_text(t, x0, y0, C_YELLOW, v);
		if (n > RP_ROWS) { /* test 87: "21-30/30" (the title and it in 35 letters) */
			snprintf(v, sizeof(v), "%d-%d/%d", rl_top + 1, rl_top + RP_ROWS < n ? rl_top + RP_ROWS : n, n);
			sm_text(t, x0 + OPT_W - 16 - 6 * (int)strlen(v), y0, C_DIM, v);
		}
		if (!n)
			sm_text(t, x0 + 6, y0 + 14, C_DIM, "NO REPLAYS YET");
		for (i = 0; i < RP_ROWS && rl_top + i < n; i++) {
			const int k = rl_top + i, y = y0 + 14 + 10 * i, sel = k == rl_sel;
			const struct hdd_rpinfo *e = hdd_rp(k);
			const int red = (e->flags & HDD_RP_RED) != 0;
			const uint32_t c = sel && rl_armed == k ? C_RED : sel ? C_YELLOW : e->state != HDD_OK ? C_DIM : red ? C_RED :
			                   C_WHITE;
			if (sel)
				sm_text(t, x0, y, c, ">");
			stage_short(st, sizeof(st), e->stage);
			if (e->y)
				snprintf(v, sizeof(v), "%04d %02d-%02d %02d:%02d %s %9u%s", e->num, e->mo, e->d, e->h, e->mi, st,
				         (unsigned)e->score, red ? "*" : "");
			else
				snprintf(v, sizeof(v), "%04d ----- ----- %s %9u%s", e->num, st, (unsigned)e->score, red ? "*" : "");
			sm_text(t, x0 + 6, y, c, v);
		}
		if (s) {
			if (ib && !ARR)
				snprintf(v, sizeof(v), "%dP %s TYPE %c %s%s", s->side + 1, sm_ships[s->side & 1], 'A' + (s->type & 3),
				         sm_modes[s->mode % 3], s->players > 1 ? " CO-OP" : "");
			else if (ib)
				snprintf(v, sizeof(v), "%dP %s TYPE %c%s", s->side + 1, sm_ships[s->side & 1], 'A' + (s->type & 3),
				         s->players > 1 ? " CO-OP" : "");
			else
				snprintf(v, sizeof(v), "%dP SIDE%s", s->side + 1, s->players > 1 ? " CO-OP" : "");
			sm_text(t, x0, y0 + ly, s->state == HDD_OK ? C_GREEN : C_DIM, v);
			rp_time(tm, sizeof(tm), s->frames);
			if (s->players > 1)
				snprintf(v, sizeof(v), "TIME %s  %dP %u", tm, 2 - (s->side & 1), (unsigned)s->score2);
			else
				snprintf(v, sizeof(v), "TIME %s", tm);
			sm_text(t, x0, y0 + ly + 10, C_DIM, v);
		}
		if (rl_pick) {
			help = s ? "A = REPLACE THIS REPLAY" : "NO REPLAYS";
			hc = C_YELLOW;
		} else if (rl_msg[0]) {
			help = rl_msg;
			hc = rl_msg_c;
		} else if (s && rl_armed == rl_sel) {
			help = "DELETE? A = YES, B = NO";
			hc = C_RED;
		} else if (s && s->state != HDD_OK) {
			help = s->why ? s->why : "UNUSABLE";
			hc = C_RED;
		} else { /* test 88 (user: "replace the "SAVE ONE AT A RUN'S END" line for replay data with nothing") */
			help = s ? "A = PLAY, X = DELETE" : "";
		}
		sm_help1(t, x0, y0 + ly + 22, hc, help); /* test 98 */
		/* test 87: the user's lines; LEFT/RIGHT kept (user: "since the replay limit is 30, left/right = change page
		 * should still be an option") */
		sm_text(t, x0, y0 + gy - 6, C_DIM, "* = INVALID SCORE");
		sm_text(t, x0, y0 + gy + 4, C_GREEN, "UP/DOWN = SELECT, LEFT/RIGHT = PAGE");
		sm_text(t, x0, y0 + gy + 14, C_GREEN, rl_pick ? "B/BACK = SAVE REPLAY?" : "B/BACK = MENU");
	}
}

/* Test 87 (user's todo list: "should be able to pause a replay during playback with the back button (basic pause menu
 * without options)"; then RESUME / RESTART REPLAY / QUIT REPLAY, B ignored in a playback): BACK in a playback. START,
 * B / BACK or RESUME go on; RESTART REPLAY and QUIT REPLAY are rp_vblank's at this vblank (rp_restart_req,
 * rp_quit_req). No vblank passes meanwhile, so the recording has none of it but its choice's lines */
enum { RPM_RESUME, RPM_RESTART, RPM_QUIT, RPM_N };
static const char *const rpm_names[RPM_N] = {"RESUME", "RESTART REPLAY", "QUIT REPLAY"};
/* test 88 (user's todo list: "in replay pause, resume / restart replay / quit replay blue line is unnecessary"): no
 * help line, the green one under the rows */
static int rpm_sel;

static void rp_pause_draw(volatile uint32_t *t)
{
	const int ib = game_set == SET_IBARA;
	const char *const game = !ib ? "BLACK LABEL" : ARR ? "IBARA ARRANGE" : "IBARA";
	const int hy = OPT_HELP_Y(RPM_N), h = hy + 22;
	const int bx = (GAME_H - OPT_W) / 2, by = (GAME_W - h) / 2, x0 = bx + 8, y0 = by + 6;
	char v[48], tm[16], tn[16];
	int i;

	sm_box(t, bx, by, OPT_W, h);
	snprintf(v, sizeof(v), "%s  REPLAY %04d", game, rp_num);
	sm_text(t, x0, y0, C_YELLOW, v);
	for (i = 0; i < RPM_N; i++) {
		const int y = y0 + 14 + 10 * i, sel = i == rpm_sel;
		if (sel)
			sm_text(t, x0, y, C_YELLOW, ">");
		sm_text(t, x0 + 6, y, sel ? C_YELLOW : C_WHITE, rpm_names[i]);
	}
	rp_time(tm, sizeof(tm), (uint32_t)frame_count - rp_base); /* where it is, of its length */
	rp_time(tn, sizeof(tn), rp_n);
	snprintf(v, sizeof(v), "%s / %s", tm, tn);
	sm_text(t, x0 + OPT_W - 16 - 6 * (int)strlen(v), y0 + 14, C_DIM, v);
	sm_text(t, x0, y0 + hy, C_GREEN, "B / BACK / START = RESUME");
	sm_text(t, x0, y0 + hy + 10, C_GREEN, "LB / RB = PLAYBACK SPEED"); /* test 120 */
}

/* test 98: what the menu pages show (their rows, values, boxes, the settings): a press that changes it sounds */
static uint32_t menu_sig(void)
{
	uint32_t h = 2166136261u;
	const unsigned char *c = (const unsigned char *)&cfg;
	size_t k;
	int i;
#define MS(v) (h = (h ^ (uint32_t)(v)) * 16777619u)
	MS(sm_state), MS(opt_page), MS(sm_row), MS(opt_sels[opt_page]), MS(dip_sel), MS(ctl_sel), MS(ctl_pad), MS(gp_sel);
	MS(snd_sel), MS(snd_track), MS(snd_voice), MS(snd_sfx), MS(snd_music_on), MS(rl_sel), MS(rl_top), MS(rl_armed);
	MS(rl_pick), MS(sl_sel), MS(sl_armed), MS(tr_box), MS(tr_box_sel), MS(opt_changes), MS(gsel_armed), MS(svc_armed), MS(rk_armed);
	MS(ac_armed); /* test 106 */
	MS(pm_sel), MS(pm_armed), MS(pm_to_state), MS(rpm_sel), MS(fs_row), MS(fs_side), MS(fs_type), MS(fs_again);
	MS(sm_side), MS(sm_mode), MS(sm_type), MS(rp_box);
	for (i = 0; i < TR_N; i++)
		MS(tr_cfg[i]);
	for (k = 0; k < sizeof(cfg); k++)
		MS(c[k]);
	if (sm_state == SM_DIP && dip_have()) {
		int r[DIP_ROWS_MAX];
		const int n = dip_rows(r);
		for (i = 0; i < n; i++)
			MS(dip_get(r[i]));
	}
#undef MS
	return h;
}

/* Test 98: the PS2 port's menu sounds (SE00 0x63 CURSOR, 0x5F DECIDE, 0x4C CANCEL; the launcher's levels) under MENU
 * STYLE PS2 (ARCADE has none, as before): a menu opened = DECIDE; left (closing, or the page gone) = CANCEL for B /
 * BACK, else DECIDE; a press that changed the page (menu_sig) = CANCEL for B / BACK, DECIDE for A / START / X, CURSOR
 * for the directions. st0 = sm_state before the press, sig0 = menu_sig() then. Muted with the sound page's MUTE */
static int menu_page(int st)
{
	return st != SM_CLOSED && st != SM_SENDING && st != SM_HDD && st != SM_GSEL;
}

static void menu_se(int st0, uint32_t sig0, uint32_t press, int closing)
{
	int id = -1;

	if (!menu_ps2() || cfg.mute)
		return;
	if (snd_se_quiet == frame_count + 1) { /* test 101 */
		snd_se_quiet = 0;
		return;
	}
	if (!menu_page(st0))
		id = menu_page(sm_state) ? PM_SE_DECIDE : -1;
	else if (closing || !menu_page(sm_state))
		id = press & (A_MB | A_COIN) ? PM_SE_CANCEL : PM_SE_DECIDE;
	else if (menu_sig() != sig0)
		id = press & (A_MB | A_COIN) ? PM_SE_CANCEL : press & (A_MA | A_START | A_MX) ? PM_SE_DECIDE : PM_SE_CURSOR;
	if (id >= 0) {
		sound_se_play(id);
		menu_se_count++;
	}
}

static void rp_pause_loop(int pad)
{
	const uint64_t t0 = tb_read();
	uint32_t last[NPADS];
	struct menu_rep reps[NPADS] = {{0}}; /* test 93: held directions (menu_repeat) */
	unsigned vb = 0, ms;
	int p, done = 0, dirty = 1, gi;
	const char *how = "B / BACK";

	pauses++;
	sound_paused = 1;
	menu_paused = 1;
	sm_state = SM_RPPAUSE;
	menu_se(SM_CLOSED, 0, 0, 0); /* test 98: DECIDE */
	rpm_sel = RPM_RESUME;
	log_printf(C_YELLOW, "REPLAY: %04d PAUSED AT EMU %u, ITS VBLANK %u (PAD %d BACK)", rp_num, (unsigned)frame_count,
	           (unsigned)((uint32_t)frame_count - rp_base), pad);
	for (p = 0; p < NPADS; p++)
		last[p] = pad_word[p];
	while (!done) {
		if (menu_ps2() && !(vb & 1)) /* test 98: the rose's next picture */
			dirty = 1;
		if (dirty) {
			pause_redraw();
			dirty = 0;
		}
		present();
		vb++;
		gi = guide_input_off(); /* test 109 */
		for (p = 0; p < NPADS && !done; p++) {
			const uint32_t w = pad_word[p], press = (w & ~last[p]) | menu_repeat(&reps[p], w); /* test 93 */
			const int se_st = sm_state; /* test 98 */
			const uint32_t se_sig = press ? menu_sig() : 0;
			last[p] = w;
			if (gi) {
				continue;
			} else if (press & A_START) {
				done = 1;
				how = "START";
			} else if (p != pad || !press) {
				continue;
			} else if (press & (A_UP | A_DOWN)) {
				rpm_sel = (rpm_sel + RPM_N + (press & A_UP ? -1 : 1)) % RPM_N;
				dirty = 1;
			} else if (press & (A_MB | A_COIN)) {
				done = 1;
			} else if (press & A_MA) {
				done = 1;
				how = rpm_names[rpm_sel];
				rp_restart_req = rpm_sel == RPM_RESTART;
				rp_quit_req = rpm_sel == RPM_QUIT;
			}
			if (press) /* test 98 */
				menu_se(se_st, se_sig, press, done);
		}
	}
	for (p = 0; p < 2; p++) { /* the menu's buttons kept from the game (after QUIT REPLAY: the attract's) */
		pause_hold[p] = last[p] & ~(uint32_t)(A_UP | A_DOWN | A_LEFT | A_RIGHT);
		pause_prev[p] = last[p];
	}
	for (p = 0; p < NPADS; p++) /* nor are they the label's */
		rp_prev[p] = last[p];
	sm_state = SM_CLOSED;
	menu_paused = 0;
	sound_paused = 0;
	tex_ok = 0; /* test 20's flag: the next frame converts the screen again */
	pause_flag = PF_PAUSED;
	pause_ticks += tb_read() - t0;
	ms = (unsigned)((tb_read() - t0) * 1000 / PPC_TIMEBASE_FREQ);
	log_printf(C_GREEN, "REPLAY: %04d PAUSE OFF AT EMU %u AFTER %u.%u S (%u VBLANKS; PAD %d %s)", rp_num,
	           (unsigned)frame_count, ms / 1000, ms / 100 % 10, vb, pad, how);
}

/* host_vblank, before the next frame's inputs: the run, and BACK's press on pad 0 or 1 */
static void pause_frame(void)
{
	int p, pad = -1;

	if (hs_phase) { /* test 84: SAVE STATE's frame was played: its file now, then the pause again */
		hs_write();
		return;
	}
	run_track();
	for (p = 0; p < 2; p++) {
		const uint32_t w = pad_word[p] | spd_latch[p]; /* test 89: a BACK within GAME SPEED's vblanks */
		if ((w & ~pause_prev[p] & A_COIN) && pad < 0)
			pad = p;
		pause_prev[p] = w;
	}
	{ /* test 109: the Guide opening pauses, whatever BACK does (the 1P side's pad has the menu) */
		const int guide = xsdk_system_ui_open();
		if (guide && !guide_was && pad < 0 && sm_state == SM_CLOSED && (rp_play || in_run)) {
			log_printf(C_YELLOW, "PAUSE: THE GUIDE OPENED AT EMU %u", (unsigned)frame_count);
			guide_was = guide;
			if (rp_play)
				rp_pause_loop(pad_swap);
			else
				pause_loop(pad_swap);
			return;
		}
		guide_was = guide;
	}
	if (pad >= 0 && rp_play && sm_state == SM_CLOSED) /* test 87: BACK pauses a playback (test 86's stopped it) */
		rp_pause_loop(pad);
	else if (pad >= 0 && in_run && cfg.back_pause && sm_state == SM_CLOSED && !rp_play)
		pause_loop(pad);
}

/* test 48: the display's shape (1 = 16:9, 0 = 4:3) and the pixel aspect it gives the front
 * buffer, as an exact ratio of integers (1 when the front buffer has the display's shape) */
static void aspect_set(int wide)
{
	aspect_wide = wide;
	par = (float)((wide ? 16 : 4) * fb_h) / (float)((wide ? 9 : 3) * fb_w);
}

static void par_text(char *s, unsigned size)
{
	const int m = (int)(par * 1000 + 0.5f);

	snprintf(s, size, "%d.%03d", m / 1000, m % 1000);
}

/* the layout with the card (loading, the game menu, RB): the game portrait 240x320 at the largest
 * whole-number height that fits (2x at 720 lines, 1x at 480) on the left, centred vertically; the
 * card 400x360 as large as the width left and the height allow, at the right edge, centred
 * vertically. Test 48: in square units, widths turned into front-buffer columns by par (at par 1
 * test 47's quads) */
static void card_layout(void)
{
	const float sw = fb_w * par;
	int k = fb_h / 320;
	float gy, c, cw, ch;

	if (k < 1)
		k = 1;
	gy = (fb_h - 320.0f * k) / 2;
	vb_game = make_quad(0, gy, 240.0f * k / par, gy + 320.0f * k, uv_rot);
	c = (sw - 240.0f * k) / CARD_W;
	if (fb_h / (float)CARD_H < c)
		c = fb_h / (float)CARD_H;
	cw = CARD_W * c;
	ch = CARD_H * c;
	vb_card = make_quad(fb_w - cw / par, (fb_h - ch) / 2, fb_w, (fb_h + ch) / 2, uv_plain);
	{ /* test 88: NOW LOADING, the launcher's 2x on its 720-line canvas */
		const float lk = fb_h / 720.0f * 2, lw = CARD_LOADING_W * lk / par, lh = CARD_LOADING_H * lk;
		vb_load = make_quad((fb_w - lw) / 2, (fb_h - lh) / 2, (fb_w + lw) / 2, (fb_h + lh) / 2, uv_plain);
	}
}

/* test 53: the layout another frame has not used for a while has been shown */
static int layout_free(void *u)
{
	XsdkPresentStats s;

	xsdk_present_stats(&s);
	return (int32_t)(s.flips - lay_used[*(const int *)u]) >= 0;
}

/* Test 48: the ini's aspect over the console's setting (after settings_load). Test 53: every
 * layout from the settings as they are (the ini's after settings_load, the options page's while
 * it is up: aspect, auto = the console's; picture, tate, scanlines): the card layout and the game
 * alone, built in the place no queued frame draws with (the other one of two, free once the
 * frames drawn with it have been shown: a wait only for a second change within two frames), then
 * the frames draw with it */
static void layout_apply(const char *from)
{
	const int wide = cfg.aspect == ASPECT_AUTO ? vmode.is_widescreen != 0 : cfg.aspect;
	int h = lay_cur == 0 ? 1 : 0;
	char a[16];

	if (!layout_free(&h)) {
		lay_waits++;
		spin_yield_until(layout_free, &h, FLIP_TIMEOUT_US);
	}
	vquads = LAYOUT_ON + (unsigned)h * LAYOUT_QUADS;
	if (wide != aspect_wide) {
		aspect_set(wide);
		par_text(a, sizeof(a));
		log_printf(C_YELLOW, "DISPLAY: %s FROM %s (ASPECT = %s), PIXEL ASPECT %s", aspect_wide ? "16:9" : "4:3", from,
		           cfg.aspect == ASPECT_AUTO ? "AUTO" : aspect_wide ? "16:9" : "4:3", a);
	}
	card_layout();
	alone_layout();
	lay_cur = h;
	lay_builds++;
}

/* the GPU, the shaders, the textures, the quads, the display; 0 when all is there */
static int video_init(void)
{
	static const XsdkSampler point = {.mag_filter = XSDK_FILTER_POINT, .min_filter = XSDK_FILTER_POINT,
	                                  .mip_filter = XSDK_FILTER_POINT, .address_u = XSDK_ADDRESS_CLAMP,
	                                  .address_v = XSDK_ADDRESS_CLAMP};
	static const XsdkSampler linear = {.mag_filter = XSDK_FILTER_LINEAR, .min_filter = XSDK_FILTER_LINEAR,
	                                   .mip_filter = XSDK_FILTER_POINT, .address_u = XSDK_ADDRESS_CLAMP,
	                                   .address_v = XSDK_ADDRESS_CLAMP};
	static const XsdkBlend mul = {.color_source = XSDK_BLEND_ZERO, .color_dest = XSDK_BLEND_SRC_COLOR,
	                              .color_op = XSDK_BLEND_OP_ADD, .alpha_source = XSDK_BLEND_ZERO,
	                              .alpha_dest = XSDK_BLEND_ONE, .alpha_op = XSDK_BLEND_OP_ADD,
	                              .write_mask = XSDK_WRITE_ALL};
	static const XsdkBlend none = {.color_source = XSDK_BLEND_ONE, .color_dest = XSDK_BLEND_ZERO,
	                               .color_op = XSDK_BLEND_OP_ADD, .alpha_source = XSDK_BLEND_ONE,
	                               .alpha_dest = XSDK_BLEND_ZERO, .alpha_op = XSDK_BLEND_OP_ADD,
	                               .write_mask = XSDK_WRITE_ALL};
	/* test 91: BRIGHTNESS: the picture times the constant (darker), or the picture plus the picture times it (brighter) */
	static const XsdkBlend kmul = {.color_source = XSDK_BLEND_CONSTANT_COLOR, .color_dest = XSDK_BLEND_ZERO,
	                               .color_op = XSDK_BLEND_OP_ADD, .alpha_source = XSDK_BLEND_ONE,
	                               .alpha_dest = XSDK_BLEND_ZERO, .alpha_op = XSDK_BLEND_OP_ADD,
	                               .write_mask = XSDK_WRITE_ALL};
	static const XsdkBlend kadd = {.color_source = XSDK_BLEND_CONSTANT_COLOR, .color_dest = XSDK_BLEND_ONE,
	                               .color_op = XSDK_BLEND_OP_ADD, .alpha_source = XSDK_BLEND_ZERO,
	                               .alpha_dest = XSDK_BLEND_ONE, .alpha_op = XSDK_BLEND_OP_ADD,
	                               .write_mask = XSDK_WRITE_ALL};
	uint32_t w = 0, h = 0;
	unsigned hz;
	char a[16];
	NTSTATUS st;
	int i;

	st = xsdk_gpu_open();
	if (!NT_SUCCESS(st)) {
		xsdk_log_write("video: xsdk_gpu_open failed: 0x%08X", (unsigned)st);
		return -1;
	}
	st = xsdk_shader_load(&vs, quad_vert.container, quad_vert.container_bytes);
	if (NT_SUCCESS(st))
		st = xsdk_shader_load(&ps, quad_frag.container, quad_frag.container_bytes);
	if (NT_SUCCESS(st))
		st = xsdk_shader_set_vertex_layout(&vs, vlayout, sizeof(vlayout) / sizeof(vlayout[0]),
		                                   (const uint32_t[]){VERT_BYTES});
	if (!NT_SUCCESS(st)) {
		xsdk_log_write("video: loading the shaders failed: 0x%08X", (unsigned)st);
		return -1;
	}
	xsdk_texture_sampler_state(&samp_point, &point);
	xsdk_texture_sampler_state(&samp_linear, &linear);
	xsdk_gpu_blend_state(&blend_mul, &mul);
	xsdk_gpu_blend_state(&blend_none, &none);
	xsdk_gpu_blend_state(&blend_kmul, &kmul); /* test 91 */
	xsdk_gpu_blend_state(&blend_kadd, &kadd);
	st = xsdk_texture_create(&gtex[0], XSDK_FORMAT_A8R8G8B8, GAME_W, GAME_H, 1, false);
	if (NT_SUCCESS(st)) /* test 42: two game textures */
		st = xsdk_texture_create(&gtex[1], XSDK_FORMAT_A8R8G8B8, GAME_W, GAME_H, 1, false);
	for (i = 0; i < 2 && NT_SUCCESS(st); i++)
		st = xsdk_texture_create(&ctex[i], XSDK_FORMAT_A8R8G8B8, CARD_W, CARD_H, 1, false);
	if (NT_SUCCESS(st) && NT_SUCCESS(xsdk_texture_create(&ltex, XSDK_FORMAT_A8R8G8B8, CARD_LOADING_W, CARD_LOADING_H, 1,
	                                                     false))) { /* test 88: NOW LOADING, over black (no blend) */
		for (int y = 0; y < CARD_LOADING_H; y++)
			for (int x = 0; x < CARD_LOADING_W; x++) {
				const uint32_t v = card_loading[y * CARD_LOADING_W + x], a = v >> 24;
				ltex.texels[(size_t)y * ltex.pitch + x] = 0xFF000000u | ((v >> 16 & 0xFF) * a / 255) << 16 |
				                                           ((v >> 8 & 0xFF) * a / 255) << 8 | (v & 0xFF) * a / 255;
			}
		xsdk_gpu_invalidate(ltex.address, ltex.size_bytes);
		ltex_ok = 1;
	}
	if (!NT_SUCCESS(st)) {
		xsdk_log_write("video: xsdk_texture_create failed: 0x%08X", (unsigned)st);
		return -1;
	}
	vmem = xsdk_gpu_alloc(VB_QUADS * QUAD_BYTES);
	if (!vmem) {
		xsdk_log_write("video: xsdk_gpu_alloc of the quads failed");
		return -1;
	}
	achx_xam_cache_log("START"); /* test 109: when XAM takes its display copies (work/g109/xam) */
	st = xsdk_present_open(XSDK_DISPLAY_720P, 2, 1, &w, &h);
	if (!NT_SUCCESS(st)) {
		xsdk_log_write("video: xsdk_present_open failed: 0x%08X", (unsigned)st);
		return -1;
	}
	achx_xam_cache_log("OPEN");
	fb_w = (int)w;
	fb_h = (int)h;
	video_w = fb_w;
	video_h = fb_h;

	/* test 48: the output and the console's widescreen setting; xsdk scales 1280x720 to a
	 * progressive output, an interlaced one keeps the kernel's front buffer (640x480) */
	memset(&vmode, 0, sizeof(vmode));
	VdQueryVideoMode(&vmode);
	aspect_set(vmode.is_widescreen != 0);
	card_layout();
	hz = (unsigned)(vmode.refresh_rate * 100 + 0.5f);
	par_text(a, sizeof(a));
	log_printf(C_GREEN, "DISPLAY: OUTPUT %uX%u%s %u.%02u HZ STANDARD %u, %s (CONSOLE), FRONT BUFFER %dX%d, PIXEL ASPECT %s",
	           (unsigned)vmode.display_width, (unsigned)vmode.display_height, vmode.is_interlaced ? "I" : "P",
	           hz / 100, hz % 100, (unsigned)vmode.video_standard, aspect_wide ? "16:9" : "4:3", fb_w, fb_h, a);
	if (hz && hz < 5500)
		log_printf(C_RED, "DISPLAY: A 50 HZ OUTPUT: THE GAME RUNS AT 5/6 SPEED. SET THE CONSOLE'S DISPLAY TO PAL 60");
	conv_init();
	clear_game();
	card_init();
	disp.vbl = (uint64_t)PPC_TIMEBASE_FREQ * 1000 / 60000; /* until measured: the kernel's 60 Hz */
	xsdk_log_write("video: %ux%u, game texture pitch %u, card pitch %u", (unsigned)w, (unsigned)h,
	               (unsigned)gtex[0].pitch, (unsigned)ctex[0].pitch);
	return 0;
}

/* ---- the game ------------------------------------------------------------------- */

static struct prof_frame pf; /* test 14b: this vblank's frame log entry */
static uint64_t t_resume;   /* when host_vblank last handed control back to the game */
static uint64_t wait_seen, band_seen[BLIT_MAX_BANDS], spin_seen, cyc_seen;
static uint64_t band_frame[BLIT_MAX_BANDS];

/* Test 12: one log line per late emulated frame and its cause. The game thread's part of
 * a frame is CPU (game code, incl. the blitter's timing pass) + WAIT (for the bands) +
 * CONV + PRES; BAND when the wait is the biggest part, CPU when the game code is,
 * HOST when conversion + present are, OTHER when these add up to less than a vblank
 * period (the vblank was missed although the work was done in time). */
static void late_frame(uint64_t cpu, uint64_t w, uint64_t conv, uint64_t exec)
{
	const uint64_t vbl = disp.vbl;
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

/* test 80: ARRANGE's HUD's time (test 79's late frames: CONV 10-14.7 ms with ~250 popups up): the longest of each 60
 * vblanks, logged when it reached 1 ms, with the popups up then */
static uint64_t hud_max, hud_most;
static int hud_max_pop;
static unsigned hud_win;

static void hud_time(uint64_t dt)
{
	char a[16], b[16];

	if (dt > hud_max) {
		hud_max = dt;
		hud_max_pop = arrhud_popups();
	}
	if (++hud_win < 60)
		return;
	if (hud_max > hud_most)
		hud_most = hud_max;
	if (hud_max >= PPC_TIMEBASE_FREQ / 1000) {
		ms2(a, sizeof(a), hud_max);
		ms2(b, sizeof(b), hud_most);
		log_printf(C_WHITE, "HUD: %s MS AT MOST IN 60 VBLANKS (%d POPUPS UP), %s MS THE MOST SO FAR; %u FRAMES ON 3 "
		           "THREADS, %u ON THE GAME THREAD", a, hud_max_pop, b, hud_split, hud_alone);
	}
	hud_max = 0;
	hud_win = 0;
}

#ifdef IB_ARRANGE
/* Test 80 (user, test 79: "i believe X activated both sub weapon and formation at the same time while Y did nothing";
 * the PC replay of test 79's rec0032, equal to the console's on all 24233 frames, had port D bit 6 change the sub weapon
 * whenever two were stored and bit 7 the formation at every press with options): in a run, each press of a pad button
 * set to SUB WEAPON CHANGE, FORMATION CHANGE or AIM LOCK with the port bit it gives the game, and every change of
 * ARRANGE's sub weapon, stored weapons, formation and aim lock (arrange/items.c arr_play, as the PS2's 0x139850: SUB
 * WEAPON CHANGE only with two or more stored, FORMATION CHANGE only with options) */
#define ARR_LOG_MAX 400 /* lines a session */
#define ARR_PL(s) (0x0C283794u + 0x280u * (uint32_t)(s))
static const char *const arr_wnames[7] = {"ROCKET", "BURNER", "GATLING", "HOMING", "NAPALM", "M.G.", "3WAY"};
static const char *const arr_fnames[5] = {"NORMAL", "BACK", "WIDE", "ROLLING", "SEARCH"};

static const char *arr_wname(unsigned w)
{
	return w < 7 ? arr_wnames[w] : "NONE";
}

static const char *arr_fname(unsigned f)
{
	return f < 5 ? arr_fnames[f] : "?";
}

static void arr_watch(void)
{
	static const uint32_t raw_bit[CTL_N] = {INPUT_GAMEPAD_A, INPUT_GAMEPAD_B, INPUT_GAMEPAD_X, INPUT_GAMEPAD_Y,
	                                        INPUT_GAMEPAD_LEFT_SHOULDER, INPUT_GAMEPAD_RIGHT_SHOULDER, RAW_LT, RAW_RT};
	static uint32_t raw_prev[2];
	static uint8_t sub_prev[2], form_prev[2], own_prev[2], lock_prev;
	static int seen;
	static unsigned lines;
	const uint8_t lock = (uint8_t)(BE32(RAMP(ARRANGE_AIMLOCK)) & 1);
	int q, i, s;

	if (lines >= ARR_LOG_MAX)
		return;
	for (q = 0; q < 2; q++) { /* pads 0 and 1: pad q plays side q ^ pad_swap (inputs_update) */
		const uint32_t raw = pad_raw[q], down = raw & ~raw_prev[q];
		const int sd = q ^ pad_swap, c = q ? 1 : 0;
		raw_prev[q] = raw;
		if (!in_run || !down)
			continue;
		for (i = 0; i < CTL_N; i++) {
			const int fn = cfg.ctl[c][CTL_SET][i];
			const uint32_t st = BE32(RAMP(ARR_PL(sd) + 8)); /* the player's state: 1-9 in play (arr_play), 0x20 dead */
			char note[64] = "";
			if (!(down & raw_bit[i]) || (fn != FN_B3 && fn != FN_B4 && fn != FN_LOCK))
				continue;
			if (st < 1 || st > 9)
				snprintf(note, sizeof(note), ": THE SHIP NOT IN PLAY (STATE %u), NO CHANGE", (unsigned)st);
			else if (fn == FN_B3 && *RAMP(ARRANGE_NOWNED + (uint32_t)sd) < 2)
				snprintf(note, sizeof(note), ": %u STORED, NOTHING TO CHANGE TO (2 NEEDED)",
				         (unsigned)*RAMP(ARRANGE_NOWNED + (uint32_t)sd));
			else if (fn == FN_B4 && !*RAMP(ARR_PL(sd) + 0x26A))
				snprintf(note, sizeof(note), ": NO OPTIONS, NO FORMATION TO CHANGE");
			log_printf(C_WHITE, "ARRANGE: EMU %u PAD %d %s = %s (PORT %c BIT %d)%s", (unsigned)frame_count, q,
			           settings_ctl_name(i), settings_fn_name(CTL_SET_ARR, fn), fn == FN_LOCK ? 'C' : sd ? 'L' : 'D',
			           fn == FN_LOCK ? 6 + sd : fn == FN_B3 ? 6 : 7, note);
			lines++;
		}
	}
	for (s = 0; s < 2; s++) {
		const uint8_t sub = *RAMP(ARRANGE_SUB + (uint32_t)s), form = *RAMP(ARRANGE_FORM + (uint32_t)s),
		              own = *RAMP(ARRANGE_NOWNED + (uint32_t)s);
		if (seen && own != own_prev[s]) {
			char t[80];
			size_t n = 0;
			t[0] = 0;
			for (i = 0; i < 7 && n + 10 < sizeof(t); i++)
				if (*RAMP(ARRANGE_OWNED + (uint32_t)s * 7 + (uint32_t)i))
					n += (size_t)snprintf(t + n, sizeof(t) - n, "%s%s", n ? " " : "", arr_wnames[i]);
			log_printf(C_WHITE, "ARRANGE: EMU %u P%d STORED %u: %s", (unsigned)frame_count, s + 1, own, n ? t : "NONE");
			lines++;
		}
		if (seen && sub != sub_prev[s]) {
			log_printf(C_WHITE, "ARRANGE: EMU %u P%d SUB WEAPON %s -> %s (%u STORED)", (unsigned)frame_count, s + 1,
			           arr_wname(sub_prev[s]), arr_wname(sub), own);
			lines++;
		}
		if (seen && form != form_prev[s]) {
			log_printf(C_WHITE, "ARRANGE: EMU %u P%d FORMATION %s -> %s", (unsigned)frame_count, s + 1,
			           arr_fname(form_prev[s]), arr_fname(form));
			lines++;
		}
		sub_prev[s] = sub;
		form_prev[s] = form;
		own_prev[s] = own;
	}
	if (seen && lock != lock_prev) {
		log_printf(C_WHITE, "ARRANGE: EMU %u AIM LOCK %s", (unsigned)frame_count, lock ? "ON" : "OFF");
		lines++;
	}
	lock_prev = lock;
	seen = 1;
	if (lines >= ARR_LOG_MAX)
		log_printf(C_YELLOW, "ARRANGE: %u PRESS / CHANGE LINES, NO MORE LOGGED", lines);
}
#else
static void arr_watch(void)
{
}
#endif

/* ---- test 89: TRAINING ------------------------------------------------------------------------------------------- */

/* Test 89 (user 2026-10-27, the test 88 proposal's answers: "training mode, ALL of: a true stage select by RAM writes
 * (any stage, the 2nd loop, + START AT THE BOSS), starting lives, bombs as full bombs + fragments, shot power, rank (game
 * / min / max / locked %), invincibility, infinite bombs, game speed 75 / 50%, a hitbox overlay"; "add the dip switches
 * menu inside it"; training runs save no scores, initials or replays and are SCORE red; user mid-work: the replays'
 * speed too, "LB/RB would be used to toggle the speed down and up"). The menu's TRAINING row opens the TRAINING page =
 * the PLAY page's rows (START RUN, PLAYER, TYPE, MODE), the TR_* rows, then DIP SWITCHES (ARRANGE: none). START RUN
 * plays as PLAY does after "# host" lines with the run's settings (HOST_TR0 + k, then HOST_TR_GO 1: tr_send), so the PC
 * harness replays a training run's writes at the same vblanks. The run's writes (tr_vblank, every vblank after
 * state_frame, never in a demo), from work/g89/ibara/REPORT.md and work/g89/blk/REPORT.md (each shown on the harness
 * by the research):
 *  - STAGE: ibara / ARRANGE point the mode script past the launch intro's return to the stage's FF02 (recipe A), the
 *    extended mode's second loop through its FF12 entry; Kuro BL the opening's return address and stage counter;
 *  - START AT BOSS: ibara / ARRANGE copy the scroll state a real run had at the boss's entry (gen/train/ib_boss.h, t63's
 *    RAM at the six entries) once the stage's banner is over, the enemy parts, bullets and items cleared; Kuro BL points
 *    the stage script and the layers' scripts at the boss section and scrolls fast up to it (trb_boss);
 *  - LIVES, BOMBS, BOMB GAUGE, SHOT: a side's record once it plays (the credit, a join, a continue: its starts byte
 *    moved), its starts byte then 2 (the ranking takes a side whose byte is 1 and no other: no initials, no table);
 *  - RANK: GAME = no write; MIN / MAX / LOCK = the rank word every vblank (ibara: its floor, 0, the percent; Kuro BL its
 *    ceiling with it, so a respawn keeps it);
 *  - INVINCIBLE: the hit counter kept at 2 while the ship is alive (no blink); INFINITE BOMBS: the full bombs at 4;
 *  - GAME SPEED (speed_frame) and HITBOX (tr_hitbox) do not touch the game.
 * A training run is SCORE red (gadgets), has no replay (rp_capture_start) and ends with its run (state_frame, the
 * attract's load); a save state of one carries it (struct hdd_host). */
#define TR_GAME 255 /* LIVES .. MEDAL: as the game has it (test 91: no longer on the page; a test 89 / 90 recording's) */
enum { TRR_GAME, TRR_MIN, TRR_MAX, TRR_LOCK }; /* test 91: TRR_GAME shown as DEFAULT (test 96: TRR_HELD, TR_ROW_NONE
                                                * with the TR_* rows) */
/* user mid-work: "in training mode, add player side, player type, mode, current medal level" (the first three are the
 * PLAY page's rows on it): MEDAL = the next medal's level, 100 .. 10,000. Test 91 (user's todo list: the "game" value of
 * lives, bombs, bomb gauge, shot, medal "is useless, remove it"): each a number, from the game's own start (ibara /
 * ARRANGE: 3 lives, no bomb, 20 fragments, Kuro BL: 3 lives, 1 bomb, no fragments, shot 0, the first medal: test 88's
 * recordings at their stage starts; tr_defaults); BOMB GAUGE by 1, RANK LOCK by 1% (a change makes RANK LOCK, as the
 * picture's rows make CUSTOM); Kuro BL's PLAYER TYPE / BOMB TYPE (TR_NONE in a recording from before them: the game's
 * select screen) */
#define TR_NONE 255
/* test 94 (user's todo list): "SHOT" -> "SHOT POWER", "BOMB GAUGE" -> "BOMB FRAGMENTS", Kuro BL's "PLAYER TYPE" ->
 * "TYPE"; OPTION 2 / 3 and FORMATION 2 / 3 only in the log */
static const char *const tr_names[TR_N] = {"STAGE", "START AT BOSS", "LIVES", "BOMBS", "BOMB FRAGMENTS", "SHOT POWER",
                                           "MEDAL", "RANK MODE", "RANK", "INVINCIBLE", "INFINITE BOMBS", "GAME SPEED", "HITBOX",
                                           "TYPE", "BOMB TYPE", "OPTIONS", "OPTION 2", "OPTION 3", "FORMATION",
                                           "FORMATION 2", "FORMATION 3"}; /* test 92: "RANK LOCK" -> "RANK %" (user);
                                                                       * test 93: no RANK row, RANK % named RANK
                                                                       * (user: "keep rank% and rename it rank"), the
                                                                       * old RANK's value only in the log */
static int tr_cfg[TR_N] = {0, 0, 2, 0, 20, 0, 0, TRR_GAME, 50, 0, 0, 0, 0, 0, 0}; /* the page's (tr_defaults); test 100:
                                                                                 * OPTIONS / FORMATION always EDIT */
/* test 94: the weapons in the boxes' order (Kuro BL's HUD and pickup order, the PS2 ARRANGE's offer order: gadgets.c's
 * draw_stock), their names (gadgets.c's opt_name; ARRANGE's the PS2's), ibara's formation codes per slot (the game's
 * own: work/g61/re/REPORT.md A2, WIDE and ROLLING leave the rear slot 0) */
static const unsigned char tr_word[7] = {5, 6, 2, 0, 1, 4, 3};
static const char *const tr_wnames[7] = {"ROCKET", "BURNER", "GATLING", "HOMING", "NAPALM", "M.GUN", "5WAY"};
static const char *const tr_slots[3] = {"LEFT", "RIGHT", "BACK"};
static const unsigned char tr_forms[3][5] = {{0, 1, 2, 3, 5}, {0, 1, 2, 4, 5}, {0, 1, 5}};
static const int tr_nforms[3] = {5, 5, 3};
/* test 96: the FORMATION box's X: each formation as the three slots' codes (DEFAULT, SEARCH, WIDE, ROLLING, BACK) */
static const unsigned char tr_group_frm[5][3] = {{0, 0, 0}, {1, 1, 1}, {2, 2, 0}, {3, 4, 0}, {5, 5, 5}};
/* ibara's slot value: weapon + 1 (0 never set = OFF), TR_SLOT_OFF set = OFF with that weapon kept (the box's A) */
#define TR_SLOT_OFF 8
static int tr_slot_on(int v)
{
	return v >= 1 && v <= 7;
}
static const unsigned short tr_medals[19] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 2000, 3000, 4000, 5000,
                                             6000, 7000, 8000, 9000, 10000}; /* gadgets.c's medal_value */
#define TRI_MEDAL 0x0C392D78u  /* u8: ibara's (and ARRANGE's) next medal, 0-18 */
#define TRB_MEDAL 0x0C3C53E0u  /* u8: Kuro BL's */
static int tr_val[TR_N] = {[TR_KSHIP] = TR_NONE, [TR_KBOMB] = TR_NONE}; /* the run's (host_set) */
static int tr_armed;           /* HOST_TR_GO: the next credit is a training run */
static int tr_stage_done;      /* the stage's redirect written (or not needed) */
static int tr_loop2;           /* ibara: the FF12 entry written, the second loop's stage next */
static int tr_boss_done;       /* START AT BOSS done */
static int tr_pend[2];         /* a side waits for its LIVES .. SHOT (its ship alive) */
static uint8_t tr_starts[2];   /* each side's starts byte as last seen or written */
static unsigned tr_out;        /* vblanks out of a run that never reached its first stage */
static const int spd_steps[3] = {100, 75, 50};
#define TRB_CONT_MAX 0x0C3CA6F8u  /* test 92: u8, Kuro BL's live CONTINUE PLAY (ibara's IB_CONT_MAX; work/dip/REPORT.md) */
#define TRB_GAME_OVER 0x0C29D194u /* test 92: u8, Kuro BL's GAME OVER (ibara's IB_GAME_OVER; work/g67/cont/reader.py) */
#define TR_GO_HOLD 180            /* test 92: vblanks of the game's GAME OVER before the TRAINING page */
static int tr_cont_was = -1;   /* test 92: CONTINUE PLAY before the run held it at 1 (-1 not held) */
static void turbo_clear(void);

/* the value list of TR_* row k (n values) */
static const int *tr_list(int k, int *n)
{
	static const int lives[] = {0, 1, 2, 3, 4, 5}, bombs[] = {0, 1, 2, 3, 4}, shot[] = {0, 1, 2, 3, 4, 5, 6};
	static const int two[] = {0, 1}, three[] = {0, 1, 2}, four[] = {0, 1, 2, 3};
	static int upto[101]; /* 0, 1, .. 100: BOMB GAUGE (0-40), MEDAL (0-18), RANK LOCK (0-100), STAGE (0-11) */

	if (!upto[100])
		for (int i = 0; i <= 100; i++)
			upto[i] = i;
	switch (k) {
	case TR_STAGE: *n = game_set == SET_IBARA && !ARR && sm_mode == 2 ? 12 : 6; return upto;
	case TR_LIVES: *n = 6; return lives;
	case TR_BOMBS: *n = 5; return bombs;
	case TR_GAUGE: *n = 41; return upto;
	case TR_SHOT: *n = 7; return shot;
	case TR_MEDAL: *n = 19; return upto;
	case TR_RANK: *n = 3; return three; /* DEFAULT, MIN, MAX (LOCK: a RANK LOCK change, tr_step) */
	case TR_RPCT: *n = 101; return upto;
	case TR_SPEED: *n = 3; return three;
	case TR_HITBOX: *n = 3; return three; /* test 98: OFF, PLAYER, ALL */
	case TR_KBOMB: *n = 4; return four;
	default: *n = 2; return two;
	}
}

static void tr_rank_step(int d); /* test 93 */

static void tr_step(int k, int d)
{
	int n, i;
	const int *l = tr_list(k, &n);

	for (i = 0; i < n && l[i] != tr_cfg[k]; i++)
		;
	if (k == TR_OPT0 || k == TR_FRM0) /* test 100 (user's list: "eliminate the "none" option ... just leave edit in"):
	                                    * no NONE / EDIT toggle, A opens the box */
		return;
	if (k >= TR_OPT0) /* test 94: OPTIONS / FORMATION are boxes (A opens) */
		return;
	if (k == TR_RANK) { /* the log's only (test 93); test 96: the held bit kept */
		for (i = 0; i < n && l[i] != TRR_MODE(tr_cfg[k]); i++)
			;
		if (i == n) /* LOCK: on to MAX / DEFAULT */
			i = d > 0 ? n - 1 : 0;
		tr_cfg[k] = l[(i + n + d) % n] | (tr_cfg[k] & TRR_HELD);
		return;
	}
	if (k == TR_RPCT) { /* test 91: by 1%, ends held (0 / 100), RANK becomes LOCK; test 93: DEFAULT below 0% */
		tr_rank_step(d);
		return;
	}
	if (k == TR_SPEED) /* test 92 (user's todo list: "invert game speed left/right toggle"): RIGHT 50 -> 75 -> 100% */
		d = -d;
	tr_cfg[k] = l[((i < n ? i : 0) + n + d) % n];
}

/* test 93: RANK (the RANK % row) by d percent: DEFAULT (RANK MODE TRR_GAME, the user's choice) one step below 0%, the
 * ends held; a percentage is RANK MODE LOCK (ibara: the start value, tr_vblank) */
static void tr_rank_step(int d)
{
	const int held = tr_cfg[TR_RANK] & TRR_HELD; /* test 96: X's lock stays through the steps */

	if (TRR_MODE(tr_cfg[TR_RANK]) != TRR_LOCK) { /* DEFAULT (or a test 91 / 92 MIN / MAX): RIGHT / RB to 0% */
		if (d > 0) {
			tr_cfg[TR_RANK] = TRR_LOCK | held;
			tr_cfg[TR_RPCT] = 0;
		}
		return;
	}
	if (d < 0 && tr_cfg[TR_RPCT] == 0) {
		tr_cfg[TR_RANK] = TRR_GAME | held;
		return;
	}
	tr_cfg[TR_RPCT] = tr_cfg[TR_RPCT] + d < 0 ? 0 : tr_cfg[TR_RPCT] + d > 100 ? 100 : tr_cfg[TR_RPCT] + d;
}

/* test 92 (user's todo list: "LB/RB to quickly increment by 10% various options like "bomb gauge", "medal" and "rank
 * lock""): the rows with a quick step, and LB (d = -1) / RB (+1) there: 10% of the row's range, the ends held (BOMB
 * GAUGE 4 of 0-40, MEDAL 2 of its 19 values, RANK % 10 of 0-100; RANK % a change makes RANK LOCK, as LEFT / RIGHT) */
static int tr_quick_row(int k)
{
	return k == TR_GAUGE || k == TR_MEDAL || k == TR_RPCT;
}

static void tr_quick(int k, int d)
{
	int n;

	tr_list(k, &n);
	if (!tr_quick_row(k))
		return;
	if (k == TR_RPCT) { /* test 93: DEFAULT, 0%, 10% .. (tr_rank_step) */
		tr_rank_step(TRR_MODE(tr_cfg[TR_RANK]) != TRR_LOCK || (d < 0 && tr_cfg[TR_RPCT] == 0) ? d : d * 10);
		return;
	}
	d *= k == TR_GAUGE ? 4 : 2;
	tr_cfg[k] = tr_cfg[k] + d < 0 ? 0 : tr_cfg[k] + d > n - 1 ? n - 1 : tr_cfg[k] + d;
}

/* the page's values from the game's own start (tr_cfg's initial ones are ibara's and ARRANGE's) */
static void tr_defaults(void)
{
	if (game_set != SET_IBARA) {
		tr_cfg[TR_BOMBS] = 1;
		tr_cfg[TR_GAUGE] = 0;
	}
}

static int tr_text_log; /* test 94: tr_text for the log (each slot) */

/* test 94: ibara's slots and formations (not ARRANGE's: its stored weapons, its FORMATION CHANGE) */
static int tr_slots_game(void)
{
	return game_set == SET_IBARA && !ARR;
}

/* a row of the game's TRAINING page or of its run (the log, the "# host" lines) */
static int tr_row_used(int k)
{
	if (k == TR_KSHIP || k == TR_KBOMB)
		return game_set != SET_IBARA;
	if (k > TR_OPT0)
		return tr_slots_game();
	return 1;
}

static const char *tr_wname(int w)
{
#ifdef IB_ARRANGE
	if (ARR)
		return arr_wnames[w % 7];
#endif
	return tr_wnames[w % 7];
}

static const char *tr_form_name(int code)
{
	switch (code) {
	case 1: return "SEARCH";
	case 2: return "WIDE";
	case 3: case 4: return "ROLLING";
	case 5: return "BACK";
	default: return "DEFAULT";
	}
}

/* row k's value as the page shows it, and its colour */
static uint32_t tr_text(int k, char *s, size_t n)
{
	static const char *const ranks[4] = {"DEFAULT", "MIN", "MAX", "LOCK"};
	int nv;
	const int v = tr_cfg[k];

	if (k >= TR_OPT0) { /* test 94: the boxes' rows; the log (tr_text_log) each slot's value */
		const int none = tr_cfg[k < TR_FRM0 ? TR_OPT0 : TR_FRM0] & TR_ROW_NONE; /* test 96: the row's toggle */
		int j, c = 0;
		if (!tr_text_log && (k == TR_OPT0 || k == TR_FRM0)) { /* test 96: NONE / EDIT as the toggle has it (test 95:
		                                                        * by the box's values) */
			snprintf(s, n, "%s", none ? "NONE" : "EDIT");
			return none ? C_DIM : C_GREEN;
		}
		if (k == TR_OPT0 && !tr_slots_game()) { /* the stored weapons */
			const int m7 = none ? 0 : v;
			int m;
			for (j = 0; j < 7; j++)
				c += (m7 >> tr_word[j]) & 1;
			m = snprintf(s, n, "%s", c ? "" : "NONE");
			for (j = 0; j < 7 && m >= 0 && (size_t)m < n; j++)
				if ((m7 >> tr_word[j]) & 1)
					m += snprintf(s + m, n - (size_t)m, "%s%s", m ? "+" : "", tr_wname(tr_word[j]));
			return c ? C_GREEN : C_DIM;
		}
		/* one slot's (ibara) */
		snprintf(s, n, "%s", none ? "NONE" : k < TR_FRM0 ? (tr_slot_on(v) ? tr_wname(v - 1) : "OFF") : tr_form_name(v));
		return C_GREEN;
	}

	if (k == TR_STAGE) {
		tr_list(k, &nv);
		if (v >= nv) /* the mode changed to one with fewer stages */
			tr_cfg[k] = v % 6;
		snprintf(s, n, tr_cfg[k] < 6 ? "%d" : "2-%d", tr_cfg[k] % 6 + 1);
		return C_GREEN;
	}
	if (v == TR_GAME && (k >= TR_LIVES && k <= TR_MEDAL)) { /* a test 89 / 90 recording's (the log's line) */
		snprintf(s, n, "GAME");
		return C_DIM;
	}
	if (v == TR_NONE && (k == TR_KSHIP || k == TR_KBOMB)) { /* a recording from before them (the log's line) */
		snprintf(s, n, "SELECT");
		return C_DIM;
	}
	switch (k) {
	case TR_LIVES: snprintf(s, n, "%d", v + 1); break; /* ships in reserve + the one playing, as PLAYER COUNTS */
	case TR_GAUGE: snprintf(s, n, "%d/40", v); break;
	case TR_MEDAL: snprintf(s, n, "%u", (unsigned)tr_medals[v % 19]); break;
	case TR_RANK: snprintf(s, n, "%s", ranks[v & 3]); return v ? C_GREEN : C_DIM;
	case TR_RPCT: /* test 91: never dim (a change makes RANK LOCK); test 93: DEFAULT unless RANK MODE is LOCK; test 96:
	               * a "*" after it when X holds it (TRR_HELD) */
		if (TRR_MODE(tr_cfg[TR_RANK]) != TRR_LOCK) {
			snprintf(s, n, "DEFAULT%s", tr_cfg[TR_RANK] & TRR_HELD ? "*" : "");
			return tr_cfg[TR_RANK] & TRR_HELD ? C_GREEN : C_DIM;
		}
		snprintf(s, n, "%d%%%s", v, tr_cfg[TR_RANK] & TRR_HELD ? "*" : "");
		break;
	case TR_SPEED: snprintf(s, n, "%d%%", spd_steps[v % 3]); return v ? C_GREEN : C_DIM;
	case TR_BOSS: case TR_INV: case TR_INFB:
		snprintf(s, n, "%s", v ? "ON" : "OFF");
		return v ? C_GREEN : C_DIM;
	case TR_HITBOX: /* test 98: OFF / PLAYER (test 97's ON) / ALL */
		snprintf(s, n, "%s", v == HITBOX_ALL ? "ALL" : v ? "PLAYER" : "OFF");
		return v ? C_GREEN : C_DIM;
	case TR_KSHIP: snprintf(s, n, "%s", v ? "SPREAD" : "STRAIGHT"); break;
	case TR_KBOMB: snprintf(s, n, "%c", 'A' + (v & 3)); break;
	default: snprintf(s, n, "%d", v); break;
	}
	return C_GREEN;
}

/* test 91: the user's helps (35 letters a line) */
static const char *tr_help(int k)
{
	switch (k) {
	case TR_STAGE:
		return game_set == SET_IBARA && !ARR && sm_mode == 2 ? "CHANGE STAGE\n2-1 TO 2-6 = THE SECOND LOOP" : "CHANGE STAGE";
	case TR_BOSS: return "SKIP TO STAGE'S BOSS\n(MAY TAKE A FEW SECONDS)";
	case TR_LIVES: return "STARTING LIVES";
	case TR_BOMBS: return "STARTING FULL BOMBS";
	case TR_GAUGE: return "STARTING BOMB FRAGMENTS";
	case TR_SHOT: return "STARTING SHOT POWER LEVEL";
	case TR_MEDAL: return "STARTING MEDAL VALUE";
	case TR_RANK: return "DEFAULT = NATURAL RANK INCREASE,\nMIN/MAX = LOCKED";
	case TR_RPCT: /* test 93: "delete the blue line "default = the game's own start"" (user). Test 96 (user's todo list):
	               * every game's a start value, "modify the cyan line to say "change starting rank"", X's lock a line */
		return "CHANGE STARTING RANK\nX = LOCK RANK IN PLACE";
	case TR_INV: return "TOGGLE INVINCIBILITY";
	case TR_INFB: return "TOGGLE INFINITE BOMBS\n(MAY OVERLOAD THE SPRITE LIMIT)";
	case TR_SPEED: return "TOGGLE GAME SPEED";
	case TR_KSHIP: return "CHANGE PLAYER TYPE";
	case TR_KBOMB: return "CHANGE BOMB TYPE";
	case TR_OPT0: return tr_slots_game() ? "STARTING OPTIONS\n(LEFT, RIGHT AND BACK)" : "STARTING OPTIONS"; /* test 94 */
	case TR_FRM0: return "STARTING FORMATION OF EACH OPTION";
	default: return "PLAYER = THE SHIP'S HITBOX\nALL = ENEMIES, BULLETS, SHOTS TOO"; /* test 98 */
	}
}

/* Test 94 (user's todo list): the TRAINING page's OPTIONS / FORMATION boxes, over the page. ibara: OPTIONS = the LEFT,
 * RIGHT and BACK slots' weapons (NONE, then the seven), FORMATION = each slot's formation code (the game writes all
 * three at a trigger, and an option filling a slot later gets code 0 there: work/g61/re/REPORT.md A4, so each is its
 * own), LEFT / RIGHT set; Kuro BL / ARRANGE: OPTIONS = the seven weapons, A switches one on / off (no sides there).
 * B / BACK closes, START plays (the page's) */
static void tr_box_input(uint32_t press)
{
	const int slots = tr_slots_game(), nr = slots ? 3 : 7, j = tr_box_sel;
	int i, j0;

	if (press & A_UP)
		tr_box_sel = (tr_box_sel + nr - 1) % nr;
	else if (press & A_DOWN)
		tr_box_sel = (tr_box_sel + 1) % nr;
	if (!slots && (press & A_MA)) {
		tr_cfg[TR_OPT0] ^= 1 << tr_word[j];
	} else if (slots && tr_box == TR_OPT0 && (press & A_MA)) {
		/* user mid-work: "make sure the left/right/back options can be individually toggled on/off": A = ON / OFF,
		 * the weapon kept while OFF (TR_SLOT_OFF); a slot never set comes ON with tr_word's first */
		const int v = tr_cfg[TR_OPT0 + j];
		tr_cfg[TR_OPT0 + j] = !v ? tr_word[0] + 1 : v ^ TR_SLOT_OFF;
	} else if (press & A_MX) {
		/* test 96 (user's todo list: "sub menu for options and formation should have a button to turn everything off and
		 * on (X button)"): every one ON, or all OFF once they are; ibara's FORMATION (user mid-work: "make it so X ...
		 * cycle to the next formation", "quick swap"): the three slots as one group to the next of DEFAULT, SEARCH,
		 * WIDE, ROLLING, BACK (each slot's code of it, tr_group_frm; the LEFT slot's says which one it is now) */
		if (!slots) {
			tr_cfg[TR_OPT0] = (tr_cfg[TR_OPT0] & 0x7F) == 0x7F ? 0 : 0x7F;
		} else if (tr_box == TR_OPT0) {
			for (i = 0, j0 = 1; i < 3; i++)
				j0 &= tr_slot_on(tr_cfg[TR_OPT0 + i]);
			for (i = 0; i < 3; i++) {
				const int v = tr_cfg[TR_OPT0 + i];
				tr_cfg[TR_OPT0 + i] = j0 ? (v ? v | TR_SLOT_OFF : 0) : v ? v & ~TR_SLOT_OFF : tr_word[0] + 1;
			}
		} else {
			for (j0 = 0; j0 < 5 && tr_group_frm[j0][0] != tr_cfg[TR_FRM0]; j0++)
				;
			j0 = j0 < 5 ? (j0 + 1) % 5 : 0;
			for (i = 0; i < 3; i++)
				tr_cfg[TR_FRM0 + i] = tr_group_frm[j0][i];
		}
		log_printf(C_WHITE, "TRAINING: %s X (EMU %u)", tr_names[tr_box], (unsigned)frame_count);
	} else if (slots && (press & (A_LEFT | A_RIGHT))) {
		const int d = press & A_RIGHT ? 1 : -1;
		if (tr_box == TR_OPT0) { /* the seven in tr_word's order (value weapon + 1), ON / OFF kept */
			const int v = tr_cfg[TR_OPT0 + j], w = v & 7, off = v & TR_SLOT_OFF;
			for (i = 0; i < 7 && w && tr_word[i] != w - 1; i++)
				;
			i = w && i < 7 ? (i + 7 + d) % 7 : d > 0 ? 0 : 6;
			tr_cfg[TR_OPT0 + j] = (tr_word[i] + 1) | (v ? off : 0); /* a slot never set comes ON */
		} else {
			const int n = tr_nforms[j];
			for (i = 0; i < n && tr_forms[j][i] != tr_cfg[TR_FRM0 + j]; i++)
				;
			tr_cfg[TR_FRM0 + j] = tr_forms[j][((i < n ? i : 0) + n + d) % n];
		}
	}
	if (press & (A_MB | A_COIN)) {
		char s[56];
		tr_text_log = 1;
		if (tr_box == TR_OPT0 && !slots) {
			tr_text(TR_OPT0, s, sizeof(s));
		} else {
			char a[3][12];
			for (i = 0; i < 3; i++)
				tr_text(tr_box + i, a[i], sizeof(a[i]));
			snprintf(s, sizeof(s), "%s, %s, %s", a[0], a[1], a[2]);
		}
		tr_text_log = 0;
		log_printf(C_WHITE, "TRAINING: %s CLOSED: %s", tr_names[tr_box], s);
		tr_box = 0;
	}
}

/* the open box, centred over the page (pbx, pbw: the page's box) */
static void tr_box_draw(volatile uint32_t *t, int pbx, int pbw)
{
	/* user mid-work: "remove "each option's weapon"" (ibara's OPTIONS box: no cyan line, the green ones up); ibara's
	 * OPTIONS: a green line more (A = ON/OFF) */
	/* user mid-work: "for kuro options menu, delete blue line", then "arrange too": only ibara's FORMATION has one */
	const int slots = tr_slots_game(), nr = slots ? 3 : 7, help = slots && tr_box != TR_OPT0;
	/* test 96: X (tr_box_input): the OPTIONS boxes a green line more, FORMATION's a second cyan line (user: "the cyan
	 * line should say "quick swap"") */
	const int hy = OPT_HELP_Y(nr) - (help ? 0 : 10), h2 = help ? HELP2 : 0, al = slots && tr_box == TR_OPT0 ? 10 : 0;
	const int xl = help ? 0 : 10, base = hy + h2;
	const int bw = SM_W, h = BOX_H(base + 32 + al + xl), bx = pbx + (pbw - bw) / 2, by = (GAME_W - h) / 2;
	const int x0 = bx + 8, y0 = by + 6;
	int i;

	sm_box(t, bx, by, bw, h);
	sm_text(t, x0, y0, C_YELLOW, tr_box == TR_FRM0 ? "FORMATION" : "OPTIONS");
	for (i = 0; i < nr; i++) {
		const int sel = i == tr_box_sel, ly = y0 + 14 + 10 * i;
		char s[12];
		uint32_t vc = C_GREEN;
		if (sel)
			sm_text(t, x0, ly, C_YELLOW, ">");
		if (!slots) { /* a weapon, ON / OFF */
			const int on = (tr_cfg[TR_OPT0] >> tr_word[i]) & 1;
			sm_text(t, x0 + 6, ly, sel ? C_YELLOW : C_WHITE, tr_wname(tr_word[i]));
			sm_text(t, x0 + 6 * 12, ly, sel ? C_YELLOW : on ? C_GREEN : C_DIM, on ? "ON" : "OFF");
			continue;
		}
		sm_text(t, x0 + 6, ly, sel ? C_YELLOW : C_WHITE, tr_slots[i]);
		if (tr_box == TR_OPT0) { /* the weapon (dim while OFF), then ON / OFF */
			const int v = tr_cfg[TR_OPT0 + i], on = tr_slot_on(v);
			snprintf(s, sizeof(s), "%s", v & 7 ? tr_wname((v & 7) - 1) : tr_wname(tr_word[0]));
			vc = on ? C_GREEN : C_DIM;
			sm_text(t, x0 + 6 * 20, ly, sel ? C_YELLOW : vc, on ? "ON" : "OFF");
		} else {
			snprintf(s, sizeof(s), "%s", tr_form_name(tr_cfg[TR_FRM0 + i]));
			vc = tr_cfg[TR_FRM0 + i] ? C_GREEN : C_DIM;
		}
		sm_text(t, x0 + 6 * 7, ly, sel ? C_YELLOW : C_DIM, "<");
		sm_text(t, x0 + 6 * 9 + (48 - 6 * (int)strlen(s)) / 2, ly, sel ? C_YELLOW : vc, s);
		sm_text(t, x0 + 6 * 18, ly, sel ? C_YELLOW : C_DIM, ">");
	}
	if (help)
		sm_help(t, x0, y0 + hy, C_CYAN, "EACH OPTION'S FORMATION\nX = QUICK SWAP", (bw - 16) / 6);
	sm_text(t, x0, y0 + base + 12, C_GREEN, slots ? "LEFT/RIGHT SET" : "A = ON/OFF");
	if (al)
		sm_text(t, x0, y0 + base + 22, C_GREEN, "A = ON/OFF");
	if (xl)
		sm_text(t, x0, y0 + base + 22 + al, C_GREEN, "X = ALL ON/OFF");
	sm_text(t, x0, y0 + base + 22 + al + xl, C_GREEN, "START = PLAY");
	sm_text(t, x0, y0 + base + 32 + al + xl, C_GREEN, "B / BACK = CLOSE");
}

/* test 91: TR_* row k's "# host" number (test 89's rows before HOST_TR_GO, the later ones after it) */
static int tr_host_id(int k)
{
	return k < TR_OLD_N ? HOST_TR0 + k : HOST_TR_MORE + k - TR_OLD_N;
}

/* the run's settings as "# host" lines (the menu's START RUN; FULL RESTART with another side or ship); test 91: Kuro
 * BL's ship rows on Kuro BL only (the others' runs as test 90's) */
static void tr_send(const int *v)
{
	int k;

	for (k = 0; k < TR_N; k++)
		if (tr_row_used(k)) /* test 94: ibara's slots on ibara only */
			host_set(tr_host_id(k), v[k], 1);
	host_set(HOST_TR_GO, 1, 1);
}

static void tr_settings_log(const char *head)
{
	char s[TR_N][56], t[640]; /* test 94: Kuro BL's / ARRANGE's OPTIONS name up to seven weapons */
	int k, n = 0, c[TR_N];

	memcpy(c, tr_cfg, sizeof(c)); /* tr_text shows the page's; test 93: all of them (RANK's text reads RANK MODE) */
	memcpy(tr_cfg, tr_val, sizeof(c));
	tr_text_log = 1;
	for (k = 0; k < TR_N; k++)
		tr_text(k, s[k], sizeof(s[k]));
	tr_text_log = 0;
	memcpy(tr_cfg, c, sizeof(c));
	for (k = 0; k < TR_OPT0 && n < (int)sizeof(t) - 80; k++)
		if (tr_row_used(k)) /* test 91: Kuro BL's ship rows its own */
			n += snprintf(t + n, sizeof(t) - (size_t)n, "%s%s %s", k ? ", " : "", tr_names[k], s[k]);
	log_printf(C_GREEN, "%s %s", head, t);
	/* test 94: the options on a line of their own (one line was cut off by the log's length); ibara's slots its own */
	for (n = 0; k < TR_N && n < (int)sizeof(t) - 80; k++)
		if (tr_row_used(k))
			n += snprintf(t + n, sizeof(t) - (size_t)n, "%s%s %s", n ? ", " : "", tr_names[k], s[k]);
	log_printf(C_GREEN, "TRAINING: %s", t);
}

static void tr_host(int what, int value)
{
	if (what < HOST_TR_GO) {
		tr_val[what - HOST_TR0] = value;
		return;
	}
	if (what >= HOST_TR_MORE) { /* test 91: Kuro BL's ship rows */
		tr_val[TR_OLD_N + what - HOST_TR_MORE] = value;
		return;
	}
	tr_armed = value;
	if (value)
		tr_settings_log("TRAINING: THE NEXT CREDIT TRAINS:");
	else
		log_printf(C_WHITE, "TRAINING: THE NEXT CREDIT IS NO TRAINING RUN (EMU %u)", (unsigned)frame_count);
}

static void tr_end(const char *why)
{
	log_printf(C_WHITE, "TRAINING: OFF AT EMU %u (%s)", (unsigned)frame_count, why);
	tr_pages_game(); /* test 91: the count byte back (a quit inside the skip) */
	if (tr_cont_was >= 0) { /* test 92: CONTINUE PLAY as the EEPROM header's RAM image has it (byte 6; work/dip/REPORT.md
	                         * section 2: ibara 0C21CCA0, Kuro BL 0C2322C0), else as it was; a load puts its slot's back
	                         * after this */
		const u8 e = *RAMP(game_set == SET_IBARA ? 0x0C21CCA6u : 0x0C2322C6u);
		*RAMP(game_set == SET_IBARA ? IB_CONT_MAX : TRB_CONT_MAX) = e <= 10 ? e : (u8)tr_cont_was;
	}
	tr_cont_was = -1;
	tr_go = 0;
	tr_clear_stage = -1; /* test 95 */
	tr_run = 0;
	tr_turbo = 0;
}

/* ibara / ARRANGE (work/g89/ibara/REPORT.md) */
#define TRI_LOOP 0x0C28599Cu   /* u8: the stage loop runs (0C05A6D0's set-up made it 1) */
#define TRI_DEPTH 0x0C28530Cu  /* u8: the stage script's call depth (IB_GAME_ON) */
#define TRI_PTR 0x0C2859A0u    /* u32: the mode / stage script's command pointer */
#define TRI_RANK 0x0C27DFF8u   /* u32: smaller = harder */
#define TRI_FLOOR 0x0C21F5E4u  /* u32: its ceiling (the easiest it gets, DIFFICULTY 1's) */
#define TRI_ENDING 0x0C21F7F0u /* test 95: u8, 1 = the master script ended (FF03 at depth 0): the ending next */
#define TRB_ENDING 0x0C238020u /* test 95: u8, Kuro BL's (work/g89/blk/REPORT.md) */
#define TRI_FF12 0x0C1EEF88u   /* the extended mode script's rank cut between its loops */
#define TRI_LOOP2 0x0C1EEF8Cu  /* and its second loop's first FF02 */
#define TRI_PARTS 0x0C26CD40u  /* 0xC0 enemy parts of 0xB4 */
#define TRI_BULLETS 0x0C27E0FCu /* 0x100 bullets of 0x54 */
#define TRI_ITEMS 0x0C38C064u  /* 0x140 items of 0x54 */
/* the mode scripts' FF02 of each stage (normal, harder, extended's first loop; extended's second) */
static const uint16_t tri_entry[4][6] = {
	{0xEECC, 0xEED2, 0xEED8, 0xEEDE, 0xEEE4, 0xEEEA},
	{0xEF1A, 0xEF20, 0xEF26, 0xEF2C, 0xEF32, 0xEF38},
	{0xEF64, 0xEF6A, 0xEF70, 0xEF76, 0xEF7C, 0xEF82},
	{0xEF8C, 0xEF92, 0xEF98, 0xEF9E, 0xEFA4, 0xEFAA},
};
#define TRI_ENTRY(m, k) (0x0C1E0000u | tri_entry[m][k])
#if !defined(IB_GAME) || IB_GAME == 0
#include "ib_boss.h"
#endif
/* Kuro BL (work/g89/blk/REPORT.md) */
#define TRB_PLAYER 0x0C29D1D8u /* the 1P record, 2P's TRB_P2 on */
#define TRB_P2 0x2A0u
#define TRB_RANK 0x0C297A3Cu   /* u32: smaller = harder */
#define TRB_CEIL 0x0C237C0Cu   /* u32: rank_down's limit and the respawn's value */
#define TRB_DEPTH 0x0C2A6D90u  /* u8: the script call depth (BLK_GAME_ON) */
#define TRB_SID 0x0C23E0A6u    /* u8: the stage record id being played */
#define TRB_CNT 0x0C3C4170u    /* u8: the stage counter (BLK_STAGE) */
#define TRB_RET 0x0C3C4378u    /* u32: the call stack's first return address */
#define TRB_PTR 0x0C2ABAA4u    /* u32: the stage script's pointer */
#define TRB_FF11 0x0C3C86E4u   /* u16: an FF11 wait pending */
#define TRB_LAYERS 0x0C286318u /* 8 layer slots of 0x4C, +0x34 their script */
#define TRB_SPAWN 0x0C297A40u  /* the timed spawners (256 bytes, FF1D clears them) */
#define TRB_SPEED 0x0C23945Cu  /* u32: the scroll speed, 16.16 pixels a frame */
#define TRB_TARGET 0x0C22E2A4u /* u32: what it eases to */
#define TRB_STEP 0x0C239454u   /* u32: by this */
#define TRB_WAIT 0x0C234C00u   /* u32: the stage script's FF04 wait */
/* each stage's boss jump at its intro's end (the script pointer there). Test 91 (work/g91/bossskip/REPORT.md, recipe
 * B): the scroll state copied (gen/train/blk_boss.h) in place of test 89's boss section pointer, layer scripts and
 * fast scroll (16 px a frame: stage 3's 9728 px took 595 frames, a faster one stripes its scale-2 layer) */
static const uint32_t trb_boss_end[6] = {0x0C200344u, 0x0C201234u, 0x0C201B88u, 0x0C200FB6u, 0x0C202166u, 0x0C203628u};
#define TRB_BOSS4 0x0C20117Au  /* stage 4 (no scroll to copy): its boss spawn E2A (CLRSPAWN / FF11 / FF16 / WAIT passed) */
#if !defined(IB_GAME) || IB_GAME == 1
#include "blk_boss.h"
#endif

/* Test 91: the page loader (work/g91/bossskip/REPORT.md; the same code in both programs). A spawn retries until its
 * texture group is in the page cache; the loader serves one page at a time, reading at most the count byte's NAND pages
 * of it a frame (the main game's 0x0B: ~8 vblanks a texture page). START AT BOSS: the count at TR_PAGES_FAST from the
 * credit (and the jump) to the skip's end (recipe A), the boss group's pages early in the preload queue after the
 * active layers' (recipe C, tr_queue_first), and the script held while a script-spawned boss's group is incomplete
 * (recipe D, stages 3, 4, 6: tr_hold) */
#define TR_PAGES_FAST 0x40
#define TR_PAGES_GAME 0x0B
#define TR_HOLD_MAX 1800
static void wr32(uint32_t a, uint32_t v);
static const struct {
	uint32_t count, groups, cache, q[4], layers, wait;
} tr_pg[2] = {
	/* ibara / ARRANGE */
	{0x0C286277u, 0x0C1D93E8u, 0x0C38BC64u, {0x0C286068u, 0x0C2175F4u, 0x0C223068u, 0x0C2173D8u}, 0x0C26CAE0u, 0x0C21F5DCu},
	/* Kuro BL */
	{0x0C2B037Bu, 0x0C1DD45Cu, 0x0C3BC3CCu, {0x0C2B016Cu, 0x0C2289F4u, 0x0C23C8A0u, 0x0C2287D8u}, 0x0C286318u, TRB_WAIT},
};
static const uint8_t tr_boss_group[6] = {0x05, 0x2D, 0x33, 0x2A, 0x41, 0x4A}; /* the bosses' spawn groups, stages 1-6 */
static int tr_pfast;      /* the count byte held at TR_PAGES_FAST */
static int tr_hold;       /* the boss group the script waits for + 1 (0 = none) */
static unsigned tr_hold_n; /* vblanks held */

/* a 0-terminated u16 page list in RAM (id & 0x3FFF) into the bitmap (16384 bits); 0 = not a RAM pointer */
static int tr_pages_mark(uint32_t list, uint32_t *bits)
{
	unsigned i;

	if (list < 0x0C000000u || list >= 0x0C800000u)
		return 0;
	for (i = 0; i < 1024 && list + 2 * i < 0x0C800000u; i++) {
		const unsigned id = BE16(RAMP(list + 2 * i)) & 0x3FFFu;
		if (!id)
			break;
		bits[id >> 5] |= 1u << (id & 31);
	}
	return 1;
}

/* group g's pages all in the page cache (an exact u16 match, as the game's own check: pending ones do not count) */
static int tr_group_ready(int g)
{
	const int k = game_set == SET_IBARA ? 0 : 1;
	const uint32_t list = BE32(RAMP(tr_pg[k].groups + 8u * (uint32_t)g));
	unsigned i, c;

	if (list < 0x0C000000u || list >= 0x0C800000u)
		return 1;
	for (i = 0; i < 1024; i++) {
		const unsigned id = BE16(RAMP(list + 2 * i)) & 0x3FFFu;
		if (!id)
			return 1;
		for (c = 0; c < 512 && BE16(RAMP(tr_pg[k].cache + 2 * c)) != id; c++)
			;
		if (c == 512)
			return 0;
	}
	return 1;
}

/* the preload queue's entries 1 .. n - 1 (n: the first empty one; entry 0 = the loader's current request) in a stable
 * order: the active layers' pages (slot +0x30's list), then group g's, then the rest (the four parallel arrays) */
static void tr_queue_first(int g)
{
	const int k = game_set == SET_IBARA ? 0 : 1;
	static uint32_t lay[512], boss[512];
	uint16_t a[4][256], o[4][256];
	int n, i, j, pass, m = 1, nl = 0, nb = 0;

	memset(lay, 0, sizeof(lay));
	memset(boss, 0, sizeof(boss));
	for (i = 0; i < 8; i++) {
		const uint32_t s = tr_pg[k].layers + 0x4Cu * (uint32_t)i;
		if (BE32(RAMP(s)))
			tr_pages_mark(BE32(RAMP(s + 0x30)), lay);
	}
	tr_pages_mark(BE32(RAMP(tr_pg[k].groups + 8u * (uint32_t)g)), boss);
	for (j = 0; j < 4; j++)
		for (i = 0; i < 256; i++)
			a[j][i] = (uint16_t)BE16(RAMP(tr_pg[k].q[j] + 2 * (uint32_t)i));
	for (n = 0; n < 256 && (a[0][n] & 0x3FFF) != 0x400; n++)
		;
	for (pass = 0; pass < 3; pass++)
		for (i = 1; i < n; i++) {
			const unsigned id = a[0][i] & 0x3FFFu;
			const int in_l = (lay[id >> 5] >> (id & 31)) & 1, in_b = (boss[id >> 5] >> (id & 31)) & 1;
			if ((pass == 0 && in_l) || (pass == 1 && !in_l && in_b) || (pass == 2 && !in_l && !in_b)) {
				for (j = 0; j < 4; j++)
					o[j][m] = a[j][i];
				m++;
				nl += pass == 0;
				nb += pass == 1;
			}
		}
	for (j = 0; j < 4; j++)
		for (i = 1; i < n; i++) {
			u8 *p = RAMP(tr_pg[k].q[j] + 2 * (uint32_t)i);
			p[0] = (u8)(o[j][i] >> 8);
			p[1] = (u8)o[j][i];
		}
	log_printf(C_WHITE, "TRAINING: THE PRELOAD QUEUE (%d) WITH %d LAYER PAGES, THEN %d OF GROUP %02X FIRST", n > 0 ? n - 1 : 0,
	           nl, nb, g);
}

/* the count byte back to the main game's (every end of the skip, a load, the run's end) */
static void tr_pages_game(void)
{
	if (tr_pfast)
		*RAMP(tr_pg[game_set == SET_IBARA ? 0 : 1].count) = TR_PAGES_GAME;
	tr_pfast = 0;
	tr_hold = 0;
}

/* at the jump (both games): the queue's order, the hold for a script-spawned boss (stages 3, 4, 6), the count fast */
static void tr_boss_pages(int k)
{
	tr_queue_first(tr_boss_group[k]);
	tr_hold = k == 2 || k == 3 || k == 5 ? tr_boss_group[k] + 1 : 0;
	tr_hold_n = 0;
	tr_pfast = 1;
}

/* every vblank of a training run: the count byte, the hold */
static void tr_pages_vblank(void)
{
	const int k = game_set == SET_IBARA ? 0 : 1;

	if (tr_pfast)
		*RAMP(tr_pg[k].count) = TR_PAGES_FAST;
	if (!tr_hold)
		return;
	if (tr_hold_n < TR_HOLD_MAX && !tr_group_ready(tr_hold - 1)) {
		if (BE32(RAMP(tr_pg[k].wait)) <= 1) /* an FF04 wait of its own runs on */
			wr32(tr_pg[k].wait, 1);
		tr_hold_n++;
		return;
	}
	log_printf(C_WHITE, "TRAINING: THE BOSS'S PAGES %s AFTER %u VBLANKS (EMU %u)", tr_hold_n < TR_HOLD_MAX ? "IN" :
	           "STILL OUT, THE SCRIPT GOES ON", tr_hold_n, (unsigned)frame_count);
	tr_hold = 0;
}

static void wr32(uint32_t a, uint32_t v)
{
	u8 *p = RAMP(a);

	p[0] = (u8)(v >> 24);
	p[1] = (u8)(v >> 16);
	p[2] = (u8)(v >> 8);
	p[3] = (u8)v;
}

/* a side's player record and its fields (ibara / ARRANGE, Kuro BL) */
struct tr_rec {
	uint32_t base;
	unsigned lives, shot, small, bombs, frags, inv, starts;
};

static struct tr_rec tr_rec_of(int s)
{
	struct tr_rec r;

	if (game_set == SET_IBARA)
		r = (struct tr_rec){IB_PLAYER + (uint32_t)s * IB_SHIP_P2, 0x253, 0x254, 0x255, 0x256, 0x257, 0x269, 0x26B};
	else
		r = (struct tr_rec){TRB_PLAYER + (uint32_t)s * TRB_P2, 0x25A, 0x25B, 0x25C, 0x25D, 0x25E, 0x288, 0x28A};
	return r;
}

/* after a load in a training run (RESTART STAGE, FULL RESTART, LOAD STATE): the sides as the slot has them (a starts
 * byte of 1 has had no values yet), the stage and boss checks as their conditions say */
static void tr_loaded(void)
{
	int s;

	if (!tr_run)
		return;
	for (s = 0; s < 2; s++) {
		const struct tr_rec r = tr_rec_of(s);
		const u8 st = *RAMP(r.base + r.starts);
		tr_starts[s] = st == 1 ? 0 : st;
		tr_pend[s] = 0;
	}
	tr_stage_done = tr_loop2 = tr_boss_done = tr_turbo = 0;
	tr_pfast = tr_hold = 0; /* test 91: the slot's count byte stands (a jump sets it again) */
	tr_go = 0;              /* test 92 */
	/* test 93: the slot's rank stands (ibara's RANK % rises from it); test 96: every game's, X's hold at the slot's */
	tr_rank_free = 1;
	tr_rank_hold = BE32(RAMP(game_set == SET_IBARA ? TRI_RANK : TRB_RANK));
	if (game_set != SET_IBARA && !(tr_val[TR_RANK] & TRR_HELD) && (TRR_MODE(tr_val[TR_RANK]) == TRR_LOCK ||
	    TRR_MODE(tr_val[TR_RANK]) == TRR_GAME)) /* a slot taken before the start value's release: the game's ceiling */
		wr32(TRB_CEIL, 0xFFFFFFu);
}

/* a save state's file read (hl_load): its training run, or none */
static void tr_from_file(int on, const uint8_t *v)
{
	int k;

	if (!on) {
		if (tr_run)
			tr_end("A SAVE STATE WITHOUT TRAINING");
		tr_armed = 0;
		return;
	}
	for (k = 0; k < TR_N; k++)
		tr_val[k] = v[k];
	tr_run = 1;
	tr_armed = 0;
	tr_out = 0;
	tr_settings_log("TRAINING: ON FROM THE SAVE STATE:");
	tr_loaded();
}

/* the stage's start (ibara / ARRANGE). Test 91 (user: "skip intro in training runs for all games"): recipe B of
 * work/g89/ibara/REPORT.md, at the stage loop's first vblank (0C05A6D0's: the loop on, its logic frame counter 0, the
 * mode script's pointer on its first word, the launch intro's FF02 0): the pointer to the stage's FF02 (stage 1's too),
 * the stage byte before it, so the intro never runs (the ship's fly-in plays under the stage's fade-in; the rank misses
 * the intro's small rise). HARDER's FF12 (after the intro in its script) by hand: the rank, its ceiling and 0C395088 x
 * 3 / 5 as 0C0615D0 does; the extended mode's second loop through its FF12 entry as test 89 (the cut, then the stage).
 * Test 89 (recipe A) wrote at the intro's return */
#define TRI_FRAMES 0x0C21F880u /* u32: the stage loop's logic frames (0 at its first vblank) */
#define TRI_FF12V 0x0C395088u  /* u32: FF12's third value (x 3 / 5 with the rank and its ceiling) */
static const uint16_t tri_first[3] = {0xEEC6, 0xEF10, 0xEF5E}; /* each mode script's first word (the intro's FF02 0) */

/* the stage loop's first vblank (recipe B's moment; the game byte, the script depth, is still 0 there) */
static int tri_loop_first(void)
{
	const int mode = ARR ? 0 : *RAMP(IB_MODE) % 3;

	return *RAMP(TRI_LOOP) && BE32(RAMP(TRI_FRAMES)) == 0 && BE32(RAMP(TRI_PTR)) == (0x0C1E0000u | tri_first[mode]);
}

static void tr_stage_ib(void)
{
	const int n = tr_val[TR_STAGE], mode = ARR ? 0 : *RAMP(IB_MODE) % 3;
	const uint32_t ptr = BE32(RAMP(TRI_PTR));

	if (tr_loop2 && ptr == TRI_LOOP2) { /* the cut applied: the second loop's stage */
		tr_loop2 = 0;
		if (n > 6) {
			wr32(TRI_PTR, TRI_ENTRY(3, n - 6));
			*RAMP(IB_STAGE) = (u8)(7 + n - 6);
		}
		log_printf(C_GREEN, "TRAINING: STAGE 2-%d (EMU %u)", n - 5, (unsigned)frame_count);
		return;
	}
	if (tr_stage_done || !tri_loop_first())
		return;
	tr_stage_done = 1;
	if (special_on) { /* the special version's own select is not the arcade's mode script (untested there) */
		log_printf(C_YELLOW, "TRAINING: NO STAGE SELECT IN SPECIAL MODE (EMU %u)", (unsigned)frame_count);
		return;
	}
	if (n >= 6 && mode == 2) { /* the second loop: its FF12 first (the rank cut), then the stage */
		wr32(TRI_PTR, TRI_FF12);
		*RAMP(IB_STAGE) = 7;
		tr_loop2 = 1;
		log_printf(C_GREEN, "TRAINING: THE INTRO SKIPPED (EMU %u), THE SECOND LOOP'S CUT FIRST", (unsigned)frame_count);
		return;
	}
	if (mode == 1) { /* HARDER: its FF12, which follows the intro */
		wr32(TRI_RANK, (uint32_t)((uint64_t)BE32(RAMP(TRI_RANK)) * 3 / 5));
		wr32(TRI_FLOOR, (uint32_t)((uint64_t)BE32(RAMP(TRI_FLOOR)) * 3 / 5));
		wr32(TRI_FF12V, (uint32_t)((uint64_t)BE32(RAMP(TRI_FF12V)) * 3 / 5));
	}
	wr32(TRI_PTR, TRI_ENTRY(mode, n % 6));
	*RAMP(IB_STAGE) = (u8)(n % 6 + 1);
	log_printf(C_GREEN, "TRAINING: STAGE %d, THE INTRO SKIPPED (EMU %u)", n % 6 + 1, (unsigned)frame_count);
}

/* START AT BOSS (ibara / ARRANGE): the boss entry's scroll state once the stage's banner is over */
static void tr_boss_ib(void)
{
#if !defined(IB_GAME) || IB_GAME == 0
	const int n = tr_val[TR_STAGE], k = n % 6;
	const u8 *d = ib_boss_data[k];
	uint32_t i;

	if (tr_boss_done || *RAMP(IB_STAGE) != (u8)(n + 2) || BE32(RAMP(TRI_PTR)) != ib_boss_trigger[k])
		return;
	tr_boss_done = 1;
	for (i = 0; i < IB_BOSS_REGS; i++) {
		memcpy(RAMP(ib_boss_regs[i].addr), d, ib_boss_regs[i].len);
		d += ib_boss_regs[i].len;
	}
	for (i = 0; i < 0xC0; i++)
		wr32(TRI_PARTS + i * 0xB4u, 0);
	for (i = 0; i < 0x100; i++)
		wr32(TRI_BULLETS + i * 0x54u, 0);
	for (i = 0; i < 0x140; i++)
		wr32(TRI_ITEMS + i * 0x54u, 0);
	tr_turbo = 1;
	log_printf(C_GREEN, "TRAINING: STAGE %s%d'S BOSS (EMU %u), SKIPPING TO IT", n >= 6 ? "2-" : "", k + 1,
	           (unsigned)frame_count);
	tr_boss_pages(k); /* test 91: the boss's pages first, the hold, the count fast */
#endif
}

/* the stage's start (Kuro BL: in the opening, the stage counter 1) */
static void tr_stage_blk(void)
{
	const int n = tr_val[TR_STAGE];

	if (tr_stage_done || *RAMP(TRB_DEPTH) != 1 || *RAMP(TRB_SID) != 0 || *RAMP(TRB_CNT) != 1)
		return;
	tr_stage_done = 1;
	if (n > 0 && n < 6) {
		wr32(TRB_RET, 0x0C200218u + 6u * (uint32_t)n);
		*RAMP(TRB_CNT) = (u8)(n + 1);
		log_printf(C_GREEN, "TRAINING: STAGE %d (EMU %u)", n + 1, (unsigned)frame_count);
	}
}

/* Test 91 (user's todo list: "training mode (kuro): skip the ship/type select when starting a run", PLAYER TYPE and BOMB
 * TYPE on the page; work/g91/blkship/REPORT.md): while the select's controller (enemy part 0, spawned by the opening's
 * first command at the credit + 2) is in its state 0 or 1, every vblank: each present side's ship byte (player +7 =
 * side x 8 + ship x 4 + type), the controller in state 1 with no side pending, both fades done and its alpha 0; its next
 * logic frame ends the select as a confirm would (the flag 0, the scroll, the HUD), nothing of it shown. The arcade's
 * own quirk kept: the type's speed comes at the first respawn, as after a real select. A recording from before the
 * rows (TR_NONE) keeps the select screen */
#define TRB_SELECT 0x0C3C86ACu  /* u32: 1 while the ship select runs */
#define TRB_SELCTL 0x0C286578u  /* enemy part 0: the select's controller (u32 +4 0x48, +8 0, u8 +0x9F its state) */
#define TRB_PENDING 0x0C239494u /* u32: a bit per side still choosing */
#define TRB_FADES 0x0C28EC78u   /* u32 x 2: each side's fade (0x80 = done) */
static int tr_ship_said;        /* the skip's log line written for this credit */

static void tr_ship_blk(void)
{
	const uint32_t c = TRB_SELCTL;
	int s;

	if (tr_val[TR_KSHIP] == TR_NONE || tr_val[TR_KBOMB] == TR_NONE || BE32(RAMP(TRB_SELECT)) != 1 || !BE32(RAMP(c)) ||
	    BE32(RAMP(c + 4)) != 0x48 || BE32(RAMP(c + 8)) != 0 || *RAMP(c + 0x9F) > 1)
		return;
	for (s = 0; s < 2; s++)
		if (BE32(RAMP(TRB_PLAYER + (uint32_t)s * TRB_P2)))
			*RAMP(TRB_PLAYER + (uint32_t)s * TRB_P2 + 7) = (u8)(s * 8 + (tr_val[TR_KSHIP] & 1) * 4 + (tr_val[TR_KBOMB] & 3));
	*RAMP(c + 0x9F) = 1;
	wr32(TRB_PENDING, 0);
	wr32(TRB_FADES, 0x80);
	wr32(TRB_FADES + 4, 0x80);
	RAMP(c + 0x36)[0] = RAMP(c + 0x36)[1] = 0;
	if (!tr_ship_said) {
		tr_ship_said = 1;
		log_printf(C_GREEN, "TRAINING: SHIP SELECT SKIPPED (EMU %u): %s TYPE %c", (unsigned)frame_count,
		           tr_val[TR_KSHIP] & 1 ? "SPREAD" : "STRAIGHT", 'A' + (tr_val[TR_KBOMB] & 3));
	}
}

/* Test 91 (user: "skip intro in training runs for all games"; work/g91/blkopen/REPORT.md): once the select is over and
 * the opening (record 0) waits anywhere before its FF03, its script pointer to that FF03, no FF04 wait, its fades at 0,
 * each playing side's fly-in at its end (x 0x400000, phase 0: the game's next update makes it controllable) and the
 * protection at 1 (the next update ends it as at a normal stage start). The trained stage's FF02 comes at the credit +
 * 5 (was + 321): its own BGM, texture wait and fade-in follow. With the ship rows only (a recording from before them
 * plays the opening) */
#define TRB_OPEN0 0x0C20498Eu  /* the opening's commands after its select spawn (FF08) */
#define TRB_OPENRET 0x0C2049C4u /* and its FF03 */
static int tr_open_said;

static void tr_open_blk(void)
{
	static const uint32_t zero8[6] = {0x0C239482u, 0x0C28F60Au, 0x0C2B038Cu, 0x0C3C4171u, 0x0C29D736u, 0x0C3C43C4u};
	const uint32_t ptr = BE32(RAMP(TRB_PTR));
	int s;

	if (tr_val[TR_KSHIP] == TR_NONE || BE32(RAMP(TRB_SELECT)) != 0 || *RAMP(TRB_DEPTH) != 1 || *RAMP(TRB_SID) != 0 ||
	    ptr < TRB_OPEN0 || ptr >= TRB_OPENRET)
		return;
	wr32(TRB_PTR, TRB_OPENRET);
	wr32(0x0C234C00u, 0); /* FF04's wait */
	for (s = 0; s < 6; s++)
		*RAMP(zero8[s]) = 0;
	for (s = 0; s < 2; s++) {
		const uint32_t p = TRB_PLAYER + (uint32_t)s * TRB_P2;
		if (BE32(RAMP(p)) != 0xDC000000u)
			continue;
		if (BE32(RAMP(p + 8)) == 0 && (int32_t)BE32(RAMP(p + 0x10)) < 0x00400000)
			wr32(p + 0x10, 0x00400000u);
		if (*RAMP(p + 0x288) > 1)
			*RAMP(p + 0x288) = 1;
	}
	if (!tr_open_said) {
		tr_open_said = 1;
		log_printf(C_GREEN, "TRAINING: THE OPENING SKIPPED (EMU %u)", (unsigned)frame_count);
	}
}

/* START AT BOSS (Kuro BL): at the stage intro's end. Test 91 (work/g91/bossskip/REPORT.md, recipe B): the scroll state a
 * test 90 run had just before the boss (the scroll, the script pointer, the layers, the tile rings, the spawners; stage
 * 4 none: its script at the boss's spawn, the spawners cleared), no wait or FF11 pending; then the pages (recipes C, D,
 * A) */
static void tr_boss_blk(void)
{
#if !defined(IB_GAME) || IB_GAME == 1
	const int k = tr_val[TR_STAGE] % 6;
	const u8 *d = blk_boss_data[k];
	unsigned i;

	if (tr_boss_done || *RAMP(TRB_CNT) != (u8)(k + 2) || *RAMP(TRB_DEPTH) != 1 || BE16(RAMP(TRB_FF11)) != 0 ||
	    BE32(RAMP(TRB_PTR)) != trb_boss_end[k])
		return;
	tr_boss_done = 1;
	if (k == 3) {
		wr32(TRB_PTR, TRB_BOSS4);
		memset(RAMP(TRB_SPAWN), 0, 256);
	} else {
		for (i = 0; i < BLK_BOSS_REGS; i++) {
			memcpy(RAMP(blk_boss_regs[i].addr), d, blk_boss_regs[i].len);
			d += blk_boss_regs[i].len;
		}
	}
	wr32(TRB_WAIT, 0);
	RAMP(TRB_FF11)[0] = RAMP(TRB_FF11)[1] = 0;
	tr_turbo = 1;
	log_printf(C_GREEN, "TRAINING: STAGE %d'S BOSS (EMU %u), SKIPPING TO IT", k + 1, (unsigned)frame_count);
	tr_boss_pages(k);
#endif
}

/* Test 94: an option pod flying weapon code w (weapon x 2 + side) from the ship, as the games' own pickups make one
 * (ibara 0C06BB60 / ARRANGE's arr_item1, Kuro BL 0C07D100: work/g89/blk/REPORT.md section 3, its run o1 flew them):
 * the fields those write, the others as they are */
static void tr_pod(uint32_t o, uint32_t w, uint32_t pl)
{
	wr32(o + 0x00, 0xC0000000u);
	wr32(o + 0x04, w);
	wr32(o + 0x10, w);
	wr32(o + 0x08, 0);
	wr32(o + 0x0C, 0);
	wr32(o + 0x14, BE32(RAMP(pl + 0x10))); /* the ship's x / y: the pods fly to their places from there */
	wr32(o + 0x18, BE32(RAMP(pl + 0x14)));
	wr32(o + 0x1C, 0);
	wr32(o + 0x20, 0);
	*RAMP(o + 0x24) = *RAMP(o + 0x25) = 0; /* u16 angle, target */
	*RAMP(o + 0x26) = *RAMP(o + 0x27) = 0;
	*RAMP(o + 0x2A) = *RAMP(o + 0x2B) = 0;
	*RAMP(o + 0x2D) = *RAMP(o + 0x2F) = 0;
	*RAMP(o + 0x2E) = 0x40;
}

/* Test 94 (user's todo list: OPTIONS, ibara's FORMATION): side s's starting options, with its other start values (the
 * player init cleared them: ibara 0C05B260 slots 0xFF, codes 0, count 0; Kuro BL's and ARRANGE's respawns their
 * stocks). ibara: each chosen slot's pod, slot byte (+0x265 + k) and count (+0x26A), and the three formation codes
 * (+0x262 + k; the game writes them for empty slots too). Kuro BL: the stock (u32 0C22E028 + w x 4, shared by the
 * sides; count u32 0C297498), the first chosen in tr_word's order current (+0x26F; the game's first pickup's), its
 * three pods (0C2974C8 + s x 0x90 + k x 0x30), weapon bytes (+0x26C + k) and formation bytes (+0x269 + k, table
 * 0C17F51B + w x 12 + k x 4), +0x289 = 3. ARRANGE (arrange/items.c arr_item1): the stored ones (arr_owned, arr_nowned),
 * the first current (arr_sub) with its three pods and weapon bytes, count 3; its formation as the game keeps it */
static void tr_give_options(int s, struct tr_rec r)
{
	const uint32_t pl = r.base, w0 = (uint32_t)s;
	/* test 96: a row's NONE (TR_ROW_NONE) = no options / every formation DEFAULT, its box's values not used */
	const int onone = tr_val[TR_OPT0] & TR_ROW_NONE, fnone = tr_val[TR_FRM0] & TR_ROW_NONE;
	const int mask = onone ? 0 : tr_val[TR_OPT0] & 0x7F; /* Kuro BL's / ARRANGE's stored weapons */
	int frm[3];
	char t[80];
	int k, n = 0, cur = -1;

	for (k = 0; k < 3; k++)
		frm[k] = fnone ? 0 : tr_val[TR_FRM0 + k];
	if (tr_slots_game()) {
		for (k = 0; k < 3; k++) {
			const int v = onone ? 0 : tr_val[TR_OPT0 + k];
			*RAMP(pl + 0x262 + (uint32_t)k) = (u8)frm[k];
			if (v < 1 || v > 7)
				continue;
			tr_pod(0x0C27DC84u + w0 * 0x90 + (uint32_t)k * 0x30, (uint32_t)(v - 1) * 2 + w0, pl);
			*RAMP(pl + 0x265 + (uint32_t)k) = (u8)((v - 1) * 2 + s);
			n++;
		}
		if (n)
			*RAMP(pl + 0x26A) = (u8)n;
		if (n || frm[0] || frm[1] || frm[2])
			log_printf(C_WHITE, "TRAINING: %dP'S OPTIONS %d, CODES %u %u %u", s + 1, n, (unsigned)frm[0], (unsigned)frm[1],
			           (unsigned)frm[2]);
		return;
	}
	for (k = 0; k < 7; k++)
		if ((mask >> tr_word[k]) & 1) {
			n++;
			if (cur < 0)
				cur = tr_word[k];
		}
	if (!n)
		return;
	if (game_set == SET_IBARA) { /* ARRANGE */
#ifdef ARRANGE_OWNED
		for (k = 0; k < 7; k++)
			*RAMP(ARRANGE_OWNED + w0 * 7 + (uint32_t)k) = (u8)((mask >> k) & 1);
		*RAMP(ARRANGE_NOWNED + w0) = (u8)n;
		*RAMP(ARRANGE_SUB + w0) = (u8)cur;
		for (k = 0; k < 3; k++) {
			tr_pod(0x0C27DC84u + w0 * 0x90 + (uint32_t)k * 0x30, (uint32_t)cur * 2 + w0, pl);
			*RAMP(pl + 0x265 + (uint32_t)k) = (u8)(cur * 2 + s);
		}
		*RAMP(pl + 0x26A) = 3;
#endif
	} else {
		for (k = 0; k < 7; k++)
			wr32(0x0C22E028u + (uint32_t)k * 4, (mask >> k) & 1);
		wr32(0x0C297498u, (uint32_t)n);
		for (k = 0; k < 3; k++) {
			tr_pod(0x0C2974C8u + w0 * 0x90 + (uint32_t)k * 0x30, (uint32_t)cur * 2 + w0, pl);
			*RAMP(pl + 0x26C + (uint32_t)k) = (u8)(cur * 2 + s);
			*RAMP(pl + 0x269 + (uint32_t)k) = *RAMP(0x0C17F51Bu + (uint32_t)cur * 12 + (uint32_t)k * 4);
		}
		*RAMP(pl + 0x26F) = (u8)cur;
		*RAMP(pl + 0x289) = 3;
	}
	t[0] = 0;
	for (k = 0, n = 0; k < 7; k++) /* the run's (tr_text shows the page's) */
		if ((mask >> tr_word[k]) & 1)
			n += snprintf(t + n, sizeof(t) - (size_t)n, "%s%s", n ? "+" : "", tr_wname(tr_word[k]));
	log_printf(C_WHITE, "TRAINING: %dP'S OPTIONS %s, %s IN USE", s + 1, t, tr_wname(cur));
}

static void tr_rank_vblank(int ib); /* test 96 */

/* every vblank after state_frame: the training run's start, its writes, its end before a first stage */
static void tr_vblank(void)
{
	const int ib = game_set == SET_IBARA;
	int s;

	/* the credit started; test 91: ibara's at its stage loop's first vblank (before its game byte), for the intro skip */
	if (tr_armed && (sm_run || (ib && *RAMP(IB_DEMO) != 1 && tri_loop_first()))) {
		tr_armed = 0;
		tr_run = 1;
		tr_out = 0;
		tr_starts[0] = tr_starts[1] = 0;
		tr_pend[0] = tr_pend[1] = 0;
		tr_stage_done = tr_loop2 = tr_boss_done = tr_rank_free = 0;
		tr_ship_said = tr_open_said = 0; /* test 91 */
		tr_pfast = tr_val[TR_BOSS] != 0; /* test 91: the stage's own page loads fast too (its intro's FF08) */
		tr_hold = 0;
		tr_go = 0; /* test 92 */
		volley_clear("TRAINING"); /* test 98 */
		tr_clear_stage = -1; /* test 95: SLOT_CREDIT's stage once it is kept */
		tr_stage_prev = -2;
		tr_fin_prev = -1;
		tr_zero = 0; /* test 100 */
		tr_settings_log("TRAINING: ON:");
	}
	if (!tr_run)
		return;
	if (*RAMP(ib ? IB_DEMO : BLK_DEMO) == 1)
		return;
	/* quit before its first stage; not sm_run alone: ibara's game byte is the script depth, 0 for the vblank the launch
	 * intro returns, the one the stage select needs */
	if (sm_run || credit_on) {
		tr_out = 0;
	} else if (++tr_out > STATE_RUN_GAP) {
		tr_end("NO RUN");
		return;
	}
	if (ib) {
		tr_stage_ib();
		if (tr_val[TR_BOSS])
			tr_boss_ib();
	} else {
		tr_ship_blk(); /* test 91 */
		tr_stage_blk();
		tr_open_blk(); /* test 91 */
		if (tr_val[TR_BOSS])
			tr_boss_blk();
	}
	tr_pages_vblank(); /* test 91 */
	turbo_clear();     /* test 92: START AT BOSS's skip without the stage's last waves */
	/* test 92 (user's todo list: "disable continues in training mode"): the live CONTINUE PLAY byte (work/dip/REPORT.md
	 * row 9; ibara 0C395086, Kuro BL 0C3CA6F8) at 1 while the run trains: a side continues while its starts byte is at
	 * most it (work/g67/cont/reader.py in_continue), and a training side's is 2 from its start values on (or 1 for the
	 * frames before them, its first start: no continue there either). The EEPROM keeps the setting; the attract's slot
	 * (QUIT TO TRAINING MODE, ATTRACT, the GAME OVER below) has the byte as it was, and tr_end puts it back otherwise */
	{
		u8 *mc = RAMP(ib ? IB_CONT_MAX : TRB_CONT_MAX);
		if (tr_cont_was < 0)
			tr_cont_was = *mc;
		if (*mc != 1)
			*mc = 1;
	}
	/* test 92 (user's todo list: "game over in training mode should return to the training mode screen, instead of the
	 * attract screen"): TR_GO_HOLD vblanks after the game's GAME OVER (ibara 0C283750, Kuro BL 0C29D194: not 0 from it
	 * on), the attract's slot as QUIT TO TRAINING MODE loads it: the menu on the TRAINING page */
	if (*RAMP(ib ? IB_GAME_OVER : TRB_GAME_OVER) && state_load_slot < 0 && ++tr_go == TR_GO_HOLD) {
		if (rt_state_ready(SLOT_ATTRACT)) {
			state_load_slot = SLOT_ATTRACT;
			state_load_why = "TRAINING: GAME OVER";
			state_load_tr = 1;
		}
		log_printf(C_YELLOW, "TRAINING: GAME OVER AT EMU %u: %s", (unsigned)frame_count,
		           state_load_slot >= 0 ? "BACK TO THE TRAINING PAGE" : "NO ATTRACT KEPT, THE GAME'S OWN WAY");
	}
	/* test 95 (user: "when a training mode stage ends by beating the boss, go back to the training menu, instead of the
	 * next stage"): the stage byte leaves the run's stage (the next stage's FF02: ibara 0C392B08, Kuro BL 0C3C4170; ibara's
	 * 8 after stage 6, the extended mode's loop 2 after its stage 6) or the ending flag rises (the master script's FF03 at
	 * depth 0: ibara / ARRANGE 0C21F7F0, Kuro BL 0C238020 after stage 6's waits; work/g89/ibara + work/g89/blk REPORT.md):
	 * the attract's slot as the GAME OVER's above. Edges only, from the vblank before: a load's slot lands in the RAM after
	 * its rt_state_load (tr_stage_prev -2 from the load's call) */
	{
		const int st = stage_now();
		const int fin = *RAMP(ib ? TRI_ENDING : TRB_ENDING);
		/* test 100 (user's list: "small sound click and logo screen after stage 6 boss defeated in practice mode"): the
		 * last stage's end is also the game's byte at 0 for TR_ZERO_GAP vblanks (ibara's goes 0 for one vblank at a stage
		 * start); test 95 waited for state_frame's run end, ~130 vblanks of the game's CAVE logo later */
		tr_zero = *RAMP(ib ? IB_GAME_ON : BLK_GAME_ON) ? 0 : tr_zero + 1;
		if (tr_clear_stage >= 0 && state_load_slot < 0 && !*RAMP(ib ? IB_GAME_OVER : TRB_GAME_OVER) &&
		    ((tr_stage_prev == tr_clear_stage && st != tr_clear_stage) || (tr_fin_prev == 0 && fin) ||
		     tr_zero == TR_ZERO_GAP)) {
			char t[24];
			stage_name(t, sizeof(t), tr_clear_stage);
			if (rt_state_ready(SLOT_ATTRACT)) {
				state_load_slot = SLOT_ATTRACT;
				state_load_why = "TRAINING: STAGE CLEARED";
				state_load_tr = 1;
			}
			log_printf(C_YELLOW, "TRAINING: %s CLEARED AT EMU %u (%s): %s", t, (unsigned)frame_count,
			           fin && tr_fin_prev == 0 ? "THE ENDING FLAG" : tr_zero == TR_ZERO_GAP ? "THE RUN'S END" :
			           "THE NEXT STAGE", state_load_slot >= 0 ?
			           "BACK TO THE TRAINING PAGE" : "NO ATTRACT KEPT, THE GAME'S OWN WAY");
			tr_clear_stage = -1;
		}
		tr_stage_prev = st;
		tr_fin_prev = fin;
	}
	for (s = 0; s < 2; s++) {
		const struct tr_rec r = tr_rec_of(s);
		const int alive = BE32(RAMP(r.base)) == 0xDC000000u;
		u8 *st = RAMP(r.base + r.starts);
		if (*st && *st != tr_starts[s]) /* the credit, a join, a continue: the game's own start values */
			tr_pend[s] = 1;
		if (tr_pend[s] && alive) {
			if (tr_val[TR_LIVES] != TR_GAME)
				*RAMP(r.base + r.lives) = (u8)tr_val[TR_LIVES];
			if (tr_val[TR_BOMBS] != TR_GAME)
				*RAMP(r.base + r.bombs) = (u8)tr_val[TR_BOMBS];
			if (tr_val[TR_GAUGE] != TR_GAME)
				*RAMP(r.base + r.frags) = (u8)tr_val[TR_GAUGE];
			if (tr_val[TR_SHOT] != TR_GAME) {
				*RAMP(r.base + r.shot) = (u8)tr_val[TR_SHOT];
				*RAMP(r.base + r.small) = 0;
			}
			if (tr_val[TR_MEDAL] != TR_GAME) /* the sides' one chain */
				*RAMP(ib ? TRI_MEDAL : TRB_MEDAL) = (u8)(tr_val[TR_MEDAL] % 19);
			tr_give_options(s, r); /* test 94 */
			if (*st == 1) /* out of the ranking */
				*st = 2;
			tr_starts[s] = *st;
			tr_pend[s] = 0;
			log_printf(C_WHITE, "TRAINING: %dP'S START VALUES (EMU %u, STARTS %u)", s + 1, (unsigned)frame_count, *st);
		}
		if (alive && (tr_val[TR_INV] || tr_turbo) && *RAMP(r.base + r.inv) < 2 && (ib || BE32(RAMP(r.base + 8)) < 0x10))
			*RAMP(r.base + r.inv) = 2;
		if (alive && tr_val[TR_INFB] && *RAMP(r.base + r.bombs) < 4)
			*RAMP(r.base + r.bombs) = 4;
	}
	tr_rank_vblank(ib);
}

/* test 93 (user's todo list: RANK "increases naturally independently on which percentage was chosen prior to a training
 * run, instead of locking it"): ibara's RANK % is the start value, held until the sides have their start values and
 * START AT BOSS's skip is over, then the game's own rise (rank_up every loop iteration). Test 96 (user's todo list:
 * Kuro BL's and ARRANGE's "rank stays locked in place in training no matter if a percentage is set or not in the menu,
 * and no matter if roses are collected, or the player dies; it's not supposed to behave that way"): every game's so.
 * Kuro BL (work/g89/blk/REPORT.md section 4: no per-frame rise, rank_up at kills / pickups, a death back to the ceiling)
 * gets its ceiling back to rank_init's 0xFFFFFF there, so its rank_down and respawns are the game's own again. X's hold
 * (TRR_HELD): the rank there, DEFAULT's = the game's own then, written every vblank from then on (Kuro BL the ceiling
 * too: test 89's lock) */
static void tr_rank_vblank(int ib)
{
	const int mode = TRR_MODE(tr_val[TR_RANK]), held = tr_val[TR_RANK] & TRR_HELD;
	const uint32_t ra = ib ? TRI_RANK : TRB_RANK;
	const unsigned p = (unsigned)tr_val[TR_RPCT];

	if (tr_rank_free) {
		if (held) {
			wr32(ra, tr_rank_hold);
			if (!ib)
				wr32(TRB_CEIL, tr_rank_hold);
		}
		return;
	}
	if (mode == TRR_GAME && !held)
		return;
	if (mode != TRR_GAME) {
		uint32_t v = mode == TRR_MAX ? 0 : mode == TRR_LOCK ? (uint32_t)(((uint64_t)(100 - p) << 24) / 100) :
		             ib ? BE32(RAMP(TRI_FLOOR)) : 0xFFFFFFu;
		v = v > 0xFFFFFFu ? 0xFFFFFFu : v;
		wr32(ra, v);
		if (!ib)
			wr32(TRB_CEIL, v);
	}
	/* a test 91 / 92 recording's MIN / MAX stay held, as they played */
	if ((mode == TRR_GAME || mode == TRR_LOCK || held) && !tr_turbo && (!tr_val[TR_BOSS] || tr_boss_done) &&
	    (tr_starts[0] || tr_starts[1]) && !tr_pend[0] && !tr_pend[1]) {
		char s[16];
		tr_rank_free = 1;
		tr_rank_hold = BE32(RAMP(ra));
		if (!ib && !held && mode != TRR_GAME)
			wr32(TRB_CEIL, 0xFFFFFFu);
		if (mode == TRR_LOCK)
			snprintf(s, sizeof(s), "%u%%", p);
		else
			snprintf(s, sizeof(s), "%s", mode == TRR_GAME ? "DEFAULT" : mode == TRR_MIN ? "MIN" : "MAX");
		log_printf(C_WHITE, "TRAINING: RANK %s SET AT EMU %u (%06X), %s", s, (unsigned)frame_count,
		           (unsigned)tr_rank_hold, held ? "HELD THERE (X)" : "THE GAME'S OWN RISE FROM HERE");
	}
}

/* HITBOX: each playing ship's own kill box into the converted picture (a frame the game drew; the texture keeps it
 * until the next): ibara / ARRANGE half 2 x 1 pixels, Kuro BL half 1 x 1 (work/g88/blkhit), 2 pixels up (Bond) or down
 * (Dyne) of the ship's position, in white with a black edge. The texture's row y, column x = the game's own pixel */
/* test 108: EX-DEBUG's INVINCIBLE and INFINITE BOMBS in any run that is not TRAINING (whose own rows do it) nor a
 * replay's playback, as TRAINING writes them (the hit counter kept at 2 while the ship is alive, the full bombs at 4).
 * Achievements stay on (the user's: to test the hard ones); a run they changed keeps no replay (its playback, without
 * the writes, would part from it). Test 110: INFINITE LIVES keeps the ships in reserve at EX_LIVES at least (a death
 * with none left would end the run; the game counts down from it, so the reserve never runs out) */
#define EX_LIVES 2
static void ex_vblank(void)
{
	const int ib = game_set == SET_IBARA;
	int wrote = 0;

	if ((!ex_inv && !ex_infb && !ex_lives) || tr_run || rp_play || *RAMP(ib ? IB_DEMO : BLK_DEMO) == 1)
		return;
	for (int s = 0; s < 2; s++) {
		const struct tr_rec r = tr_rec_of(s);
		if (BE32(RAMP(r.base)) != 0xDC000000u)
			continue;
		if (ex_inv && *RAMP(r.base + r.inv) < 2 && (ib || BE32(RAMP(r.base + 8)) < 0x10)) {
			*RAMP(r.base + r.inv) = 2;
			wrote = 1;
		}
		if (ex_infb && *RAMP(r.base + r.bombs) < 4) {
			*RAMP(r.base + r.bombs) = 4;
			wrote = 1;
		}
		if (ex_lives && *RAMP(r.base + r.lives) < EX_LIVES) {
			*RAMP(r.base + r.lives) = EX_LIVES;
			wrote = 1;
		}
	}
	if (wrote && rp_cap && !rp_pending)
		rp_cancel(RPB_EXDBG);
}

static void tr_hitbox(void)
{
	const int ib = game_set == SET_IBARA;

	const int mode = tr_run ? tr_val[TR_HITBOX] : ex_hit; /* test 108: EX-DEBUG's in any other run */

	if (!mode || !tex_fresh || *RAMP(ib ? IB_DEMO : BLK_DEMO) == 1)
		return;
	/* test 98 (user idea 2026-10-28, work/g98/hitbox/REPORT.md): PLAYER = test 92's ship kill box (white, black edge) and
	 * ibara's / ARRANGE's green graze box, now from the game's own box lists; ALL = also every enemy part, enemy bullet
	 * and player shot / bomb box. hitbox.c draws the previous vblank's RAM: the picture shows the objects one game frame
	 * behind RAM (test 97's PLAYER, from this vblank's, sat one frame of motion ahead of the ship) */
	if (hitbox_draw(gtex[tex_cur].texels, gtex_pitch, !ib, mode == HITBOX_ALL ? HITBOX_ALL : HITBOX_PLAYER))
		gtex_dirty[tex_cur] = 1;
}

/* START AT BOSS's skip (user: "try to use the boss HP gadget hook to determine when a boss starts"): after the jump the
 * boss comes once its stage has scrolled to it and its graphics pages are in (the jump's copy has the scroll, not the
 * pages: ibara's last boss takes ~1240 vblanks, its others 300-520, gen/train/ib_boss.h). Meanwhile the game runs
 * unpaced (host_vblank presents one frame in TURBO_SHOW, with a SKIPPING TO THE BOSS box), silent, the pads held off
 * and the ships invincible, until the BOSS gadget's boss_find has a boss part (gadgets_boss_part), at most TURBO_MAX
 * frames; the boss's own entrance then plays at its speed. Only the vblanks' pacing changes, so a recording of it
 * replays the same. 1 = this frame is one of the skip's */
#define TURBO_SHOW 10
#define TURBO_MAX 3600
static unsigned tr_turbo_n;
static unsigned tr_cleared_parts, tr_cleared_bullets; /* test 92: what the skip cleared */

/* Test 92 (user's todo list, video D:\obs\2026-10-28 03-57-16.mp4: "skipping to stage 1 boss has enemies kept alive and
 * shooting"): the jump's scroll state is ~400 frames before the boss (gen/train/ib_boss.h), and the stage's script
 * still sends its last waves meanwhile; with the ships invincible they lived, shot and were shot (the score 2200 ->
 * 17730 in the video). Every vblank of the skip, before its frame (ibara / ARRANGE): each enemy part alive (+0 &
 * 0x80000000) with hit points (+0x3C) whose spawn group (+4) is not the stage's boss's (tr_boss_group), and every enemy
 * bullet (+0 = 0, as the jump's own clear). The harness's RAM at the fight's start (test 91's binary, stages 1 / 2 / 5):
 * every piece of the boss (stage 1: 41 parts, values 1000-100000, most not of the boss class; stage 5's all active)
 * has its group (05 / 2D / 41), the stage's own enemies others (stage 1: 0E, 0F; the effects 37 have no hit points);
 * a first version that cleared by the boss class took the bosses' turrets and stage 5's second core. So a bullet a
 * frame leaves is the boss group's (turbo_shot) */
/* Test 96 (user's todo list, video D:\obs\2026-10-28 14-46-09.mp4: Kuro BL's stage 6 "skipping to boss, a tank spawns
 * on thin air in the upper right corner, and a statue on the top left"): test 92's clear was ibara's / ARRANGE's only
 * (the log: "0 PARTS, 0 BULLETS CLEARED"); Kuro BL's the same rule on its tables (work/card/blk/REPORT.md: the enemy
 * table 0C286578, ibara's layout; gadgets.c map_blk .bullets; the boss groups the same in both programs:
 * work/g91/bossskip/REPORT.md) */
#define TRB_PARTS 0x0C286578u  /* 0xC0 enemy parts of 0xB4 */
#define TRB_BULLETS 0x0C297B40u /* 0x100 bullets of 0x54 */
static void turbo_clear(void)
{
	const uint32_t group = tr_boss_group[tr_val[TR_STAGE] % 6];
	const uint32_t parts = game_set == SET_IBARA ? TRI_PARTS : TRB_PARTS;
	const uint32_t bullets = game_set == SET_IBARA ? TRI_BULLETS : TRB_BULLETS;
	uint32_t i;

	if (!tr_turbo)
		return;
	for (i = 0; i < 0xC0; i++) {
		const uint32_t a = parts + i * 0xB4u, fl = BE32(RAMP(a));
		if ((fl & 0x80000000u) && BE32(RAMP(a + 4)) != group && (RAMP(a + 0x3C)[0] | RAMP(a + 0x3C)[1])) {
			wr32(a, 0);
			tr_cleared_parts++;
		}
	}
	for (i = 0; i < 0x100; i++)
		if (BE32(RAMP(bullets + i * 0x54u))) {
			wr32(bullets + i * 0x54u, 0);
			tr_cleared_bullets++;
		}
}

/* test 92 (user's todo list: "skipping to stage 5 has the boss starting to shoot before the frame skipping is over";
 * the video: French Lace's bullets under SKIPPING TO THE BOSS, her fight not yet "active" for the gadget (stage 5's
 * never is) nor her music on): once the boss part is there, an enemy bullet that can hit (gadgets.c bullets_read's
 * rule, anywhere) ends the skip too */
static int turbo_shot(void)
{
	const uint32_t pool = game_set == SET_IBARA ? 0x0C27E0FCu : 0x0C297B40u; /* gadgets.c map_ib / map_blk .bullets */
	uint32_t i;

	if (!gadgets_boss_part())
		return 0;
	for (i = 0; i < 0x100; i++)
		if ((BE32(RAMP(pool + i * 0x54u)) & 0x10004000u) == 0x10000000u)
			return 1;
	return 0;
}

static int turbo_frame(void)
{
	if (!tr_turbo)
		return 0;
	/* test 91 (work/g91/bossskip/REPORT.md, "still waiting"): until the fight starts (the BOSS gadget's boss active, or
	 * its music), not the boss part's spawn: stages 1, 2 and 5's bosses then scrolled in at the natural speed, ~620
	 * frames. Test 92: or the boss's first bullet (turbo_shot) */
	if (!tr_run || gadgets_boss_fight() || turbo_shot() || tr_turbo > TURBO_MAX || sm_state != SM_CLOSED) {
		const int fight = tr_run && gadgets_boss_fight(), shot = tr_run && !fight && turbo_shot(), boss = fight || shot;
		log_printf(C_GREEN, "TRAINING: THE SKIP ENDED AT EMU %u AFTER %d FRAMES (%s; %u PARTS, %u BULLETS CLEARED)",
		           (unsigned)frame_count, tr_turbo - 1, !tr_run ? "NO RUN" : fight ? "THE BOSS FIGHTS" : shot ?
		           "THE BOSS SHOOTS" : tr_turbo > TURBO_MAX ? "TOO LONG" : "A MENU", tr_cleared_parts, tr_cleared_bullets);
		tr_cleared_parts = tr_cleared_bullets = 0;
		{ /* test 92: the boss class parts alive then (index, +0, its value +0x40, hit points +0x3C), for the log */
			const uint32_t base = game_set == SET_IBARA ? 0x0C26CD40u : 0x0C286578u; /* gadgets.c's .enemy */
			char t[160];
			int n = 0, k, m = 0;
			t[0] = 0;
			for (k = 0; k < 100 && m < 4; k++) {
				const uint32_t a = base + (uint32_t)k * 0xB4u, fl = BE32(RAMP(a));
				if ((fl & 0x8000C000u) != 0x80008000u || !(RAMP(a + 0x3C)[0] | RAMP(a + 0x3C)[1]))
					continue;
				n += snprintf(t + n, sizeof(t) - (size_t)n, "%s%d %08X %u HP %u", m ? ", " : "", k, (unsigned)fl,
				              (unsigned)BE32(RAMP(a + 0x40)), (unsigned)(RAMP(a + 0x3C)[0] << 8 | RAMP(a + 0x3C)[1]));
				m++;
			}
			log_printf(C_WHITE, "TRAINING: THE BOSS CLASS PARTS: %s", m ? t : "NONE");
		}
		tr_turbo = 0;
		tr_pages_game(); /* test 91: the count byte back before the boss's slot is taken */
		/* test 91: the run's start (its credit's slot) taken again here, so the training pause's RESTART comes back to the
		 * boss at once (user's todo list: stage 3's skip "a particularly long wait") */
		if (boss && credit_on && state_ok) {
			state_ask(SLOT_CREDIT, stage_now());
			log_printf(C_WHITE, "TRAINING: THE RUN'S START KEPT AT THE BOSS (EMU %u): RESTART COMES BACK HERE",
			           (unsigned)frame_count);
		}
		return 0;
	}
	tr_turbo++;
	return 1;
}

static void turbo_box(void)
{
	const char *label = "SKIPPING TO THE BOSS";
	const int tw = 6 * ((int)strlen(label) - 1) + 5, w = tw + 16, h = 19;
	const int pw = 8 * (int)strlen(label) + 16, ph = 26;
	volatile uint32_t *t = gtex[tex_cur].texels;

	if (!tr_turbo)
		return;
	if (menu_ps2()) {
		const int bx = (GAME_H - pw) / 2, by = (GAME_W - ph) / 2;
		const struct ps2m_target tg = {t, gtex_pitch, cv1k_vram, CV1K_VRAM_STRIDE, tex_sx, tex_sy};
		ps2m_begin();
		ps2m_exact = 1;
		ps2m_rec = 1;
		sm_box(t, bx, by, pw, ph);
		sm_text(t, bx + 8, by + (ph - 8) / 2, C_YELLOW, label);
		ps2m_rec = 0;
		ps2m_render(&tg, ps2m_clock++, menu_ja());
	} else {
		const int bx = (GAME_H - w) / 2, by = (GAME_W - h) / 2;
		sm_box(t, bx, by, w, h);
		sm_text(t, bx + (w - tw) / 2, by + (h - 7) / 2, C_YELLOW, label);
	}
	gtex_dirty[tex_cur] = 1;
}

/* GAME SPEED (a training run's) and a playback's LB / RB speed: after an emulated frame, vblanks without one (75%: one
 * after every third frame, 50%: one after each). The YMZ770 goes on at the display's rate meanwhile (the user: the
 * sound stays at 100%): its clock (the CPU's + rt_epoch) a frame further and a mark there, so the sound thread makes a
 * frame's samples with no register writes; the picture shown again (present). The game only writes the chip (onchip.c),
 * so nothing it reads changes. The pads' presses in those vblanks reach the next frame (spd_latch). */
#define SPD_FRAME_CYC 1705984u /* the CPU's cycles a vblank (sh3_rt.c FRAME_CYC_INT) */
static unsigned spd_acc, spd_idles;
static int spd_logged = 100; /* the pace speed_frame last logged */
static uint32_t spd_prev[NPADS];

static int speed_now(void)
{
	return rp_play ? rp_speed : tr_run ? spd_steps[tr_val[TR_SPEED] % 3] : 100;
}

static void speed_frame(void)
{
	int p, pct;

	if (rp_play && sm_state == SM_CLOSED) {
		for (p = 0; p < NPADS; p++) {
			const uint32_t press = pad_word[p] & ~spd_prev[p];
			int k;
			spd_prev[p] = pad_word[p];
			if (!(press & (A_MLB | A_MRB)))
				continue;
			for (k = 0; k < 3 && spd_steps[k] != rp_speed; k++)
				;
			k += press & A_MLB ? 1 : -1;
			k = k < 0 ? 0 : k > 2 ? 2 : k;
			if (spd_steps[k] != rp_speed) {
				rp_speed = spd_steps[k];
				rp_speed_shown = 1;
				rp_label_left = RP_LABEL;
				log_printf(C_WHITE, "REPLAY: %04d SPEED %d%% AT EMU %u (PAD %d %s)", rp_num, rp_speed,
				           (unsigned)frame_count, p, press & A_MLB ? "LB" : "RB");
			}
		}
	} else {
		for (p = 0; p < NPADS; p++)
			spd_prev[p] = pad_word[p];
	}
	pct = speed_now();
	if (pct != spd_logged) { /* the pace's changes, with the vblanks the last one added */
		log_printf(C_WHITE, "SPEED: %d%% FROM EMU %u (%s; %u VBLANKS WITHOUT A FRAME SO FAR)", pct, (unsigned)frame_count,
		           rp_play ? "A PLAYBACK" : tr_run ? "TRAINING" : "NORMAL", spd_idles);
		spd_logged = pct;
	}
	if (pct >= 100) {
		spd_acc = 0;
		return;
	}
	spd_acc += (unsigned)(100 - pct);
	while (spd_acc >= (unsigned)pct) {
		spd_acc -= (unsigned)pct;
		rt_epoch += SPD_FRAME_CYC;
		ymz770_mark(rt_now(&cpu) + rt_epoch);
		for (p = 0; p < 2; p++)
			spd_latch[p] |= pad_word[p];
		spd_idles++;
		present();
	}
}

/* Test 113 (user: "smooth out the now loading animation when a game is starting"): one frame shown at each display
 * vblank instead of one in BOOT_SHOW (~4 a second): a frame is shown when a vblank has come since the last one and its
 * flip is out, present() does not wait for the next vblank, the ticker steps by the vblanks between; the corners are
 * read from VRAM (the texture holds the ticker's black) */
/* Test 112 (user, with a photo of ARRANGE's blue NOW LOADING page: "would it be possible to skip this screen, or no?"):
 * the board's boot (in the harness, work/g112/boot: black until ~590, the blue page of the graphics' upload until
 * 1283, then the emblem picture, the CAVE logo at 1521 = the scene byte's 5) runs unpaced as START AT BOSS's skip:
 * host_vblank presents one frame in BOOT_SHOW, black under the NOW LOADING ticker (held at full opacity), silent. It
 * ends at the first frame whose four corners are neither black nor the blue page's 0x000080 (the emblem picture), when
 * the scene byte leaves 0, a menu is up, or after BOOT_MAX frames; the ticker then fades out over the game as before.
 * Every emulated frame still runs (the same RAM, the same recording): only the vblanks' pacing changes */
#define BOOT_MAX 2400u
static unsigned boot_n, boot_shown;
static uint64_t boot_t0;
static uint32_t boot_vb;

/* the screen's pixel x, y as the conversion makes it (conv_row) */
static uint32_t boot_px(int x, int y, uint32_t sx, uint32_t sy)
{
	const uint32_t p = cv1k_vram[(size_t)((y + sy) & 0xFFF) * CV1K_VRAM_STRIDE + ((x + sx) & 0x1FFF)];
	return (p & 0x7C00) << 9 | (p & 0x3E0) << 6 | (p & 0x1F) << 3;
}

static int boot_corner(uint32_t v)
{
	v &= 0xFFFFFFu;
	return v == 0 || v == 0x000080u;
}

/* after screen_frame: the boot goes on unpaced, or ends here (logged once) */
static void boot_check(void)
{
	const int scene = *RAMP(game_set == SET_IBARA ? IB_SCENE : BLK_SCENE) != 0;
	XsdkPresentStats ps;
	uint32_t sx, sy;
	int corners;

	boot_show = 0;
	if (!boot_turbo)
		return;
	blitter_get_scroll(&sx, &sy);
	corners = boot_corner(boot_px(0, 0, sx, sy)) && boot_corner(boot_px(GAME_W - 1, 0, sx, sy)) &&
	          boot_corner(boot_px(0, GAME_H - 1, sx, sy)) && boot_corner(boot_px(GAME_W - 1, GAME_H - 1, sx, sy));
	if (!boot_t0)
		boot_t0 = tb_read();
	if (frame_count < BOOT_MAX && !scene && corners && sm_state == SM_CLOSED) {
		boot_n++;
		xsdk_present_stats(&ps);
		if (ps.vblanks != boot_vb && (int32_t)(ps.flips - frames_queued) >= 0) {
			boot_steps = boot_vb && ps.vblanks - boot_vb < 4 ? ps.vblanks - boot_vb : 1;
			boot_vb = ps.vblanks;
			boot_show = 1;
			boot_shown++;
		}
		return;
	}
	tex_ok = 0; /* the picture converted again whole (the ticker's black may still be in the texture) */
	boot_turbo = 0;
	log_printf(C_WHITE, "BOOT: THE BOARD'S LOADING RAN UNPACED UNTIL EMU %u (%s), %u FRAMES SHOWN, IN %u MS",
	           (unsigned)frame_count, scene ? "THE SCENE BYTE LEFT 0" : !corners ? "ITS PICTURE CHANGED" :
	           sm_state != SM_CLOSED ? "A MENU" : "TOO LONG", boot_shown,
	           (unsigned)((tb_read() - boot_t0) * 1000 / PPC_TIMEBASE_FREQ));
}

/* The runtime calls this at every emulated vblank (frame_count = vblanks before it).
 * One emulated frame per displayed frame: game (CPU, waiting for the bands), screen
 * conversion, present (card, GPU, the flip), then the pads for the next frame. */
void host_vblank(sh3_t *c)
{
	uint64_t t0 = tb_read(), emu = t0 - t_resume, w_emu = wait_ticks - wait_seen;
	uint64_t t1, conv, cpu, host, now_cyc, w, exec;
	uint32_t hsum;
	int b, late_after_load = 0, turbo;

	hsum = screen_frame(); /* waits for the bands; test 14: the hash goes into the recording */
	boot_check();          /* test 112: the boot unpaced (its corners before the HUD and the ticker) */
	arrhud_frame(); /* test 79: ARRANGE's HUD: its own state a step a game frame, then over the picture, after the hash */
	if (ARR) {
		const uint64_t h0 = tb_read();
		if (hud_draw(gtex[tex_cur].texels, gtex_pitch, tex_sx, tex_sy, tex_fresh))
			gtex_dirty[tex_cur] = 1;
		hud_time(tb_read() - h0);
		arr_watch();
	}
	ticker_game();         /* test 93: NOW LOADING fading out over the board's boot */
	tr_hitbox();           /* test 89: a training run's HITBOX, under the menus */
	turbo_box();           /* test 89: START AT BOSS's skip */
	sm_draw();             /* test 51: over the picture, after the hash */
	t1 = tb_read();
	if (checking())
		check_frame((unsigned)frame_count, hsum);
	w = wait_ticks - wait_seen;       /* all waits this frame */
	conv = (t1 - t0) - (w - w_emu);   /* not the check's RAM hash (after t1; test 17b times it) */
	cpu = emu - w_emu;
	pcb_frame();
	if (!rp_play) /* test 86: a playback's EEPROM is its run's (put back at its end), never saved */
		eeprom_frame((uint32_t)frame_count, rtc9701_eeprom()); /* test 33: a save once it settles */
	if (gd_stats.ready) { /* test 58: the GADGETS values as the game left them this frame */
		struct gd_input in;
		in.port_d = in_port_d;
		in.port_l = in_port_l;
		in.port_c = in_port_c; /* test 79: ARRANGE's aim lock */
		in.pad[0] = rp_play ? 0 : pad_word[pad_swap]; /* test 86: a playback's pads play nothing */
		in.pad[1] = rp_play ? 0 : pad_word[pad_swap ^ 1];
		in.af_bit = A_AUTO;
		for (int sd = 0; sd < 2; sd++) { /* test 71: each side's pad's controls (side s = pad s ^ pad_swap) */
			in.af_hz[sd] = af_hz(sd ^ pad_swap);
			for (int k = 0; k < GD_KEYS; k++)
				in.keys[sd][k] = gd_keys[sd ^ pad_swap][k];
		}
		in.logic = BE32(RAMP(LOGIC_WORD)) >> 16;
		in.pilot = credit_on ? cr_side : sm_side; /* test 71: the run's pilot (the credit's side), else the menu's */
		in.dip_changed = dip_changed(); /* test 81: the SCORE red */
		in.booted = *RAMP(game_set == SET_IBARA ? IB_SCENE : BLK_SCENE) != 0 || game_booted; /* test 89 */
		game_booted = in.booted;
		in.training = tr_run; /* test 89 */
		gadgets_frame(&in);
	}
	ach_step(); /* test 105 */

	turbo = turbo_frame(); /* test 89: START AT BOSS's skip shows one frame in TURBO_SHOW */
	if (boot_turbo ? boot_show : !turbo || ++tr_turbo_n % TURBO_SHOW == 0) /* test 112: the boot's shown frames */
		present();
	turbo |= boot_turbo;

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
	now_cyc = rt_now(c);
	if (now_cyc < cyc_seen) /* test 69: a save state was loaded (the CPU's time went back with it) */
		cyc_seen = now_cyc > (uint64_t)pf.cyc ? now_cyc - pf.cyc : 0;
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
	{
		/* a frame with the RAM hash counts as HASH, the others by cause */
		const int is_late = disp.period * 2 > disp.vbl * 3 && game_frames > 0 && !turbo; /* test 89: unpaced */
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
	}
	if (++cur.n == STAT_FRAMES) {
		shown = cur;
		memset(&cur, 0, sizeof(cur));
	}
	game_frames++;
	wait_seen = wait_ticks;

	/* test 14b: the frame log */
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
		pf.flags |= pres_flags; /* test 42: shown a vblank late / not shown */
		pf.flags |= pause_flag; /* test 55: paused before this frame */
		pf.flags |= early_flag; /* test 63: shown while its job drew on */
		pause_flag = 0;
		{
			static unsigned nl_seen; /* test 40: datagrams went out during the frame */
			const unsigned s = netlog_sent();
			if (s != nl_seen) {
				nl_seen = s;
				pf.flags |= PF_NET;
			}
		}
		prof_frame(&pf);
	}
	hash_this_frame = 0;

	pause_frame(); /* test 55: BACK in a run pauses here, before the next frame's inputs; test 69: the pause menu */
	rp_vblank(hsum); /* test 86: SAVE REPLAY?, a playback's start, its checks and end */
	speed_frame();   /* test 89: GAME SPEED's vblanks without an emulated frame */
	if (hs_slot < 0 && hl_slot < 0 && state_load_slot < 0) { /* test 84: the PC harness's "# hddsave" / "# hddload" */
		const int ks = REPLAY_HDD((unsigned)frame_count, 0), kl = REPLAY_HDD((unsigned)frame_count, 1);
		if (ks >= 0) {
			hs_slot = ks;
			hs_replay = 1;
		}
		if (kl >= 0) {
			hl_slot = kl;
			hl_from = HL_REPLAY;
		}
	}
	if (hl_slot >= 0)
		hl_load(); /* test 84: returns only when the file was not loaded */
	if (state_load_slot < 0)
		state_load_slot = REPLAY_LOAD((unsigned)frame_count); /* test 69: the PC harness replays a recording's loads */
	if (state_load_slot >= 16) { /* test 84: a FULL RESTART's ("# load ... full") */
		state_load_slot -= 16;
		state_load_full = 1;
	}
	if (state_load_slot >= 0)
		state_load_now(); /* test 69: returns only when there was no such slot */
	if (hs_slot >= 0 && !hs_phase)
		hs_ask(); /* test 84: SAVE STATE's frame, its ports as the pause found them */
	else if (rp_play)
		rp_inputs(); /* test 86: the replay's ports */
	else
		inputs_update();
	state_frame(); /* test 69: the save states this vblank asks for */
	tr_vblank();   /* test 89: a training run's writes */
	ex_vblank();   /* test 108: EX-DEBUG's */
	rp_capture(hsum); /* test 86: and a run's replay its ports */
	{
		/* test 14: this vblank's entry; the display vblanks this frame took, from the
		 * time between the last two presents */
		const uint64_t vbl = disp.vbl;
		rec_frame((uint32_t)frame_count, in_port_c, in_port_d, in_port_l, in_port_f, hsum,
		          BE32(RAMP(LOGIC_WORD)), (unsigned)((disp.period + vbl / 2) / vbl));
	}
	{
		static int ck_seen = SCHK_RUNNING, heard_seen;
		static unsigned under_seen;
		int st = sound_check.state;
		if (sound_stats.heard && !heard_seen) { /* test 47 */
			heard_seen = 1;
			log_printf(C_WHITE, "SOUND: FIRST SOUND AT FRAME %u, THE %u SILENT SAMPLES BEFORE IT NOT QUEUED",
			           sound_stats.first_sound_frame, sound_stats.quiet);
		}
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
			char lg[16];
			ms2(lg, sizeof(lg), disp.lag); /* test 42: how late this frame started */
			log_printf(C_YELLOW, "SOUND: UNDERRUN %u AT FRAME %u, LAG %s MS, MISS %u, READY LOW %u FIFO %u", under_seen,
			           (unsigned)frame_count, lg, disp.missed, sound_stats.ready_low, sound_stats.fifo);
		}
	}
	/* test 46: the sound clock follower's changes of direction, and the cushion's lowest after
	 * load each time it goes another 1 ms down below CUSHION_LOW (at most 40 lines of each) */
	{
		static int drift_seen;
		static unsigned drift_lines, min_lines, min_logged = CUSHION_LOW + 48;
		const int dr = sound_stats.drift;
		const unsigned mn = sound_stats.cushion_min;

		if (dr != drift_seen) {
			const unsigned l = sound_stats.cushion_low * 10 / 48;
			drift_seen = dr;
			if (drift_lines++ < 40)
				log_printf(C_WHITE, "SOUND: CUSHION LOW %u.%u MS AT FRAME %u: %s", l / 10, l % 10,
				           (unsigned)frame_count, dr > 0 ? "PLAYING 1 SAMPLE IN 500 TWICE" :
				           dr < 0 ? "LEAVING 1 SAMPLE IN 500 OUT" : "IN RANGE");
		}
		if (mn != ~0u && mn + 48 <= min_logged) {
			const unsigned l = mn * 10 / 48;
			min_logged = mn;
			if (min_lines++ < 40)
				log_printf(C_YELLOW, "SOUND: CUSHION DOWN TO %u.%u MS AT FRAME %u", l / 10, l % 10,
				           sound_stats.cushion_min_frame);
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
	int r;

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
	r = sound_start(rom, 0x800000, !chk.off, game_set, disp.hz_milli);
	if (r) {
		log_printf(C_RED, "SOUND: %s (%d, %08X), NO SOUND",
		           r == -1 ? "NO PHYSICAL MEMORY FOR THE DRIVER FRAMES" : r == -2 ? "THE AUDIO DRIVER REFUSED" :
		           "THE SOUND THREAD DID NOT START", r, (unsigned)drv_counts.reg_result);
		return;
	}
	sound_ok = 1;
	log_printf(C_YELLOW, "SOUND: YMZ770 ON THREAD %d, 48 KHZ, %u.%02u FRAMES PER EMULATED FRAME, CHECK %s%s",
	           SOUND_THREAD, sound_stats.per_frame_x100 / 100, sound_stats.per_frame_x100 % 100,
	           chk.off ? "OFF: " : "UNTIL THE FIRST INPUT", chk.off ? chk_off_why : "");
}

/* Test 38: the game to load: the ini's game key when its zip is there, else the only zip
 * found, else the pad menu on the card (D-pad / stick up and down, then A or START on any
 * pad). The IO thread reads the pads all along (pad_word), so the presses are the edges of
 * its words. -1 when no zip is there. Test 52 (kept by test 53): BACK held on a pad brings the
 * menu up all the same; a game without its zip cannot be chosen. */
static int game_choose(void)
{
	uint32_t last[NPADS] = {0};
	int n = 0, s, p, held = 0;

#ifdef IB_GAME
	/* test 72: one game per image, the launcher (ibara360.xex) is the choice */
	(void)last;
	(void)s;
	(void)p;
	(void)held;
	(void)n;
	if (!romload_found(IB_GAME)) {
		log_printf(C_RED, "GAME: NO %s.ZIP BESIDE THE XEX, ABOVE IT OR IN A ROMS FOLDER", games[IB_GAME].tag);
		return -1;
	}
	log_printf(C_GREEN, "GAME: %s (THIS XEX'S GAME)%s", games[IB_GAME].title,
	           IB_GAME == SET_IBARA && !ARR && cfg.special ? ", SPECIAL VER." : "");
	return IB_GAME;
#endif
	for (s = 0; s < NSETS; s++)
		n += romload_found(s);
	if (!n) {
		log_printf(C_RED, "GAME: NO IBARA.ZIP OR IBARABLK.ZIP BESIDE THE XEX, ABOVE IT OR IN A ROMS FOLDER");
		return -1;
	}
	for (p = 0; p < NPADS; p++)
		held |= (pad_word[p] & A_COIN) != 0;
	if (held)
		log_printf(C_YELLOW, "GAME: BACK HELD AT POWER-ON, THE GAME MENU");
	if (cfg.game != GAME_ASK && !held) {
		if (romload_found(cfg.game)) {
			log_printf(C_GREEN, "GAME: %s (THE INI'S GAME KEY; BACK HELD AT POWER-ON = THE MENU)", games[cfg.game].title);
			return cfg.game;
		}
		log_printf(C_YELLOW, "GAME: THE INI SAYS %s, ITS ZIP IS NOT THERE", games[cfg.game].title);
	}
	if (n == 1 && !held) {
		s = romload_found(SET_IBARA) ? SET_IBARA : SET_IBARABLK;
		log_printf(C_GREEN, "GAME: %s (THE ONLY ZIP FOUND; BACK HELD AT POWER-ON = THE MENU)", games[s].title);
		return s;
	}
	menu_sel = romload_found(SET_IBARA) ? SET_IBARA : SET_IBARABLK;
	menu_on = 1;
	log_printf(C_WHITE, "GAME: CHOOSE WITH THE PAD (GAME = IBARA OR IBARABLK IN THE INI SKIPS THIS)");
	for (p = 0; p < NPADS; p++)
		last[p] = pad_word[p]; /* a button held from before the menu is no choice */
	for (;;) {
		for (p = 0; p < NPADS; p++) {
			const uint32_t w = pad_word[p], press = w & ~last[p];
			last[p] = w;
			if ((press & A_UP) && menu_sel > 0)
				menu_sel--;
			if ((press & A_DOWN) && menu_sel < NSETS - 1)
				menu_sel++;
			if ((press & (A_MA | A_START)) && !romload_found(menu_sel)) {
				log_printf(C_YELLOW, "GAME: NO %s ZIP, NOT STARTING IT", games[menu_sel].title);
			} else if (press & (A_MA | A_START)) {
				menu_on = 0;
				log_printf(C_GREEN, "GAME: %s%s (PAD %d)", games[menu_sel].title,
				           menu_sel == SET_IBARA && cfg.special ? ", SPECIAL VER." : "", p);
				return menu_sel;
			}
		}
		present();
	}
}

#ifdef IB_ARRANGE
/* test 77: ARRANGE's records (gen/ibaraarr/arrange_patch.c), before the CPU starts: the hooks onto U4 as the CPU
 * reads it (each 2 MB half of the 4 MB window, ROM_RELOAD; the boot copies it to work RAM), ARRANGE's code and state
 * into work RAM the game never changes (cleared just before). Each record's bytes checked first by their CRC32 (U4
 * itself was checked by romload: d5fb6657). 0 = applied. */
static int arrange_apply(uint32_t n4)
{
	unsigned k, half, rom_bytes = 0, ram_bytes = 0;

	for (k = 0; k < arrange_nrecs; k++) {
		const struct arrange_rec *r = &arrange_recs[k];
		const uint32_t o = r->addr - 0x0C000000u;
		uint8_t *at = r->ram ? cv1k_ram + o : cv1k_rom + o;
		if (o + r->len > (r->ram ? RAM_SIZE : n4) || crc32(0, at, r->len) != r->old_crc) {
			log_printf(C_RED, "ARRANGE: RECORD %u AT %08X: NOT THE BYTES EXPECTED", k, r->addr);
			return -1;
		}
		if (r->ram) {
			memcpy(at, arrange_bytes + r->at, r->len);
			ram_bytes += r->len;
			continue;
		}
		for (half = 0; half < 0x400000u; half += n4)
			memcpy(cv1k_rom + half + o, arrange_bytes + r->at, r->len);
		rom_bytes += r->len;
	}
	log_printf(C_GREEN, "ARRANGE: %u RECORDS, %u BYTES INTO U4, %u INTO WORK RAM (THE RAM IMAGE'S CRC %08X)",
	           arrange_nrecs, rom_bytes, ram_bytes, arrange_image_crc);
	return 0;
}

/* Test 81: ARRANGE's pictures from the PS2 port (gen/arrgfx by tools/arrange/mkgfx.py; work/arrgfx's REPORT.md files), all
 * before the CPU starts, so they cost the game no cycles: the ending's PDM 944 over U2's NAND file 882 (an unused end
 * screen; arrange.c arr_ending_pic shows it at the staff roll's end) and the ranking banner's "Arrange Mode" over
 * page 876's "Score Attack" (ARRANGE's table, anim 3), in this title's copy of U2 (its CRC checked by romload, these
 * bytes by theirs: the NAND keeps its 888 files, as a file more would move the heap the boot builds); BULLET DESIGN's
 * twelve pages (COLOR 920-925, COLORLESS 938-943) into VRAM slots the game never takes, their page-cache words into
 * arrange.c's arr_bullet_cache (each game's set-up points the bullet pages at them in ARRANGE with that design). The
 * slots: row 7, columns 17-28 (rows 0-7 are filled at boot and never again; row 7's columns 17-31 stayed free over test
 * 80's whole hardware run on the PC harness, its service menu included) */
#include "arrgfx_data.h"
#define ARR_BULLET_ROW 7
#define ARR_BULLET_COL 17
static uint8_t *arrgfx_raw;

static int arrgfx_unpack(void)
{
	z_stream z;
	int r;

	arrgfx_raw = malloc(ARRGFX_RAW_SIZE);
	if (!arrgfx_raw)
		return -1;
	memset(&z, 0, sizeof(z));
	z.next_in = (unsigned char *)arrgfx_z;
	z.avail_in = ARRGFX_Z_SIZE;
	z.next_out = arrgfx_raw;
	z.avail_out = ARRGFX_RAW_SIZE;
	if (inflateInit(&z) != Z_OK)
		return -1;
	r = inflate(&z, Z_FINISH);
	inflateEnd(&z);
	return r == Z_STREAM_END && z.total_out == ARRGFX_RAW_SIZE ? 0 : -1;
}

static int arrgfx_u2(uint8_t *u2, uint32_t n2)
{
	uint8_t *e = u2 + ARRGFX_U2_ENDING_AT, *b = u2 + ARRGFX_U2_BANNER_AT;
	uint32_t crc = 0, v;

	if (ARRGFX_U2_ENDING_AT + ARRGFX_PAGE > n2 || ARRGFX_U2_BANNER_AT + ARRGFX_PAGE > n2 ||
	    crc32(0, e, ARRGFX_PAGE) != ARRGFX_U2_ENDING_CRC)
		return -1;
	for (v = 0; v < 256; v++)
		crc = (uint32_t)crc32(crc, b + (v * 256 + ARRGFX_BANNER_U) * 2, ARRGFX_BANNER_W * 2);
	if (crc != ARRGFX_U2_BANNER_CRC)
		return -1;
	memcpy(e, arrgfx_raw + ARRGFX_ENDING, ARRGFX_PAGE);
	for (v = 0; v < 256; v++)
		memcpy(b + (v * 256 + ARRGFX_BANNER_U) * 2, arrgfx_raw + ARRGFX_BANNER + v * ARRGFX_BANNER_W * 2,
		       ARRGFX_BANNER_W * 2);
	return 0;
}

/* after cv1k_reset (blitter_reset makes VRAM zero) */
static void arrgfx_vram(void)
{
	unsigned k, x, y;

	if (!arrgfx_raw) /* test 97: no ps2data.bin */
		return;
	for (k = 0; k < 12; k++) {
		const uint8_t *p = arrgfx_raw + ARRGFX_PAGES + k * ARRGFX_PAGE;
		const uint32_t x0 = (ARR_BULLET_COL + k) * 256u, y0 = ARR_BULLET_ROW * 256u, w = x0 << 16 | y0;
		uint8_t *c = RAMP(ARRANGE_BULLET_CACHE + 4 * k); /* [COLOR 0-5, COLORLESS 0-5], big-endian */
		for (y = 0; y < 256; y++) {
			uint16_t *row = cv1k_vram + (size_t)(y0 + y) * CV1K_VRAM_STRIDE + x0;
			for (x = 0; x < 256; x++, p += 2)
				row[x] = (uint16_t)(p[0] << 8 | p[1]);
		}
		c[0] = (uint8_t)(w >> 24);
		c[1] = (uint8_t)(w >> 16);
		c[2] = (uint8_t)(w >> 8);
		c[3] = (uint8_t)w;
	}
	log_printf(C_GREEN, "ARRANGE: BULLET DESIGN'S 12 PAGES IN VRAM AT %u-%u, %u (SLOTS ROW %u, COLUMNS %u-%u)",
	           ARR_BULLET_COL * 256, (ARR_BULLET_COL + 12) * 256 - 1, ARR_BULLET_ROW * 256, ARR_BULLET_ROW,
	           ARR_BULLET_COL, ARR_BULLET_COL + 11);
	free(arrgfx_raw);
	arrgfx_raw = NULL;
}
#endif

#ifdef IB_ARRANGE
/* test 97: ARRANGE's TAITO logo (arrange/logo.c, user: "write a taito logo between the cave and ami logo in the sh-3
 * code"): tools/ps2extract's "taito_logo" blob (the PS2 port's PDM 901) into work RAM 0C7B0000 as 'TLGO', the blob's
 * size (big-endian), the blob; without it (no ps2data.bin, no blob, a bad size) nothing is written and the game skips
 * the TAITO screen (CAVE, then AMI, as the arcade). The SH-3 code checks the area itself */
#define ARR_LOGO_RAM 0x7B0000u   /* cv1k_ram offset of 0C7B0000 (free RAM below ARRANGE's block) */
#define ARR_LOGO_MAX 0x4000u     /* logo.c LOGO_AREA_MAX: the area with its 8-byte head */
static void arrange_taito_logo(void)
{
	uint32_t n = 0;
	uint8_t *b = ps2data_load("taito_logo", &n), *a = cv1k_ram + ARR_LOGO_RAM;

	if (!b || n < 16 || n > ARR_LOGO_MAX - 8) {
		log_printf(C_YELLOW, "ARRANGE: NO TAITO LOGO (%s): CAVE, THEN AMI", b ? "A BAD SIZE" : ps2data_why());
		free(b);
		return;
	}
	a[0] = 'T';
	a[1] = 'L';
	a[2] = 'G';
	a[3] = 'O';
	a[4] = (uint8_t)(n >> 24);
	a[5] = (uint8_t)(n >> 16);
	a[6] = (uint8_t)(n >> 8);
	a[7] = (uint8_t)n;
	memcpy(a + 8, b, n);
	free(b);
	log_printf(C_GREEN, "ARRANGE: THE TAITO LOGO (%u BYTES) AT 0C7B0000", (unsigned)n);
}
#endif

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
#ifdef IB_ARRANGE
	if (arrange_apply(n4)) {
		log_printf(C_RED, "ARRANGE: THIS U4 IS NOT THE ONE THE PATCH WAS MADE FOR, NOT STARTING");
		for (;;)
			present();
	}
	arrange_taito_logo(); /* test 97 */
	if (!arrgfx_z) { /* test 97: the PS2 pictures come from the user's ps2data.bin */
		log_printf(C_RED, "ARRANGE: NO PS2DATA.BIN: THE ARCADE'S ENDING AND BANNER, BULLET DESIGN NORMAL ONLY");
	} else if (arrgfx_unpack() || arrgfx_u2((uint8_t *)u2, n2)) { /* test 81 */
		log_printf(C_RED, "ARRANGE: THE PS2 PICTURES (PS2DATA.BIN'S ARR.GFX) DID NOT UNPACK OR THIS U2 IS NOT THEIRS, NOT STARTING");
		for (;;)
			present();
	} else {
		log_printf(C_GREEN, "ARRANGE: U2 FILE 882 = THE ENDING'S PDM 944, PAGE 876'S LABEL = ARRANGE MODE (THE PS2'S)");
	}
#endif
	eep_saved = eeprom_boot(rtc9701_eeprom()); /* test 33: the saved EEPROM, else all 0xFFFF */
	if (workers_launch()) {
		log_printf(C_RED, "GAME: BLITTER WORKERS DID NOT START ON THREADS %d AND %d", band_thread[0],
		           band_thread[1]);
		for (;;)
			present();
	}
	log_printf(C_YELLOW, "TEST: BLITTER BANDS ON THREADS %d AND %d", band_thread[0], band_thread[1]);
	workers_up = 1;
	blitter_fast = 0;
	controls_apply(); /* test 55: the game's controls from the ini */
	{ /* test 58; test 60: both games; test 113: unpacked while the ROMs loaded (game_task's gadgets_init_start) */
		unsigned un_ms, wait_ms;
		if (gadgets_init_finish(&un_ms, &wait_ms) == 0)
			log_printf(C_GREEN, "GADGETS: READY, UNPACKED IN %u MS WHILE THE ROMS LOADED, %u MS WAITED (%s, %s; THE "
			           "ARTWORK %dX%d, 4:3 PANEL %dX%d, TATE BANDS %dX%d, ATLAS %dX%d)", un_ms, wait_ms, game->tag,
			           cfg.gadgets ? "ON" : "OFF IN THE INI", CARD_BG_W, CARD_BG_H, CARD_P43_W, CARD_P43_H, CARD_TATE_W,
			           CARD_TATE_H, CARD_ATLAS_W, CARD_ATLAS_H);
	}
	ach_init(ARR ? ACH_ARRANGE : game_set == SET_IBARABLK ? ACH_BLK : ACH_IBARA); /* test 105 */
	if (ARR) { /* test 80: the HUD's tables and glyph runs now, not in a run's first frame */
		const uint64_t t = tb_read();
		const int runs = arrhud_init();
		log_printf(C_GREEN, "HUD: READY IN %u US (%d POPUP GLYPH RUNS%s)", tb_us(t, tb_read()), runs,
		           runs < 0 ? ": TOO MANY, THE POPUPS DRAWN PIXEL BY PIXEL" : "");
	}
	log_printf(C_YELLOW, "PADS: PAD0 = P1, PAD1 = P2 (EACH ITS OWN CONTROLS). D-PAD/LEFT STICK, START = START; TEST (S3) "
	           "= %s", ARR ? "NONE (ARRANGE: NO SERVICE MENU, AS ON THE PS2)" :
	           "THE DEBUG MENU'S SERVICE MENU, NO PAD BUTTON"); /* test 85; test 102: none in ARRANGE */
	controls_log("PADS:");
	log_printf(C_YELLOW, "PADS: BACK = COIN, IN A RUN = THE PAUSE MENU (START RESUMES)"); /* test 69 */
	/* test 51; test 53: rows, BACK = the options page; test 70: Kuro BL's start menu (PLAYER), no page but it plays;
	 * test 81: one menu, PLAY its first row; test 82: its rows' order; test 83: START RUN, START no longer plays */
	log_printf(C_YELLOW, "PADS: START IN THE ATTRACT = THE MENU (UP/DOWN ROW, A CONFIRMS, B/BACK GO BACK); ITS PLAY "
	           "PAGE: START RUN (A PLAYS), %s, LEFT/RIGHT SET; START PLAYS FROM NO PAGE", game_set != SET_IBARA ?
	           "PLAYER, DIP SWITCHES" : ARR ? "PLAYER, TYPE" : "PLAYER, TYPE, MODE, DIP SWITCHES");
	log_printf(C_GREEN, "TIMING: PCB FIT+ 3.75%%");
	/* test 52: the special version = S2 switch 2 on from power-on, A+B held (inputs_update);
	 * test 53: the recording's "# dsw" lines from rec_dsw */
	special_on = game_set == SET_IBARA && !ARR && cfg.special;
	in_dsw = special_on ? DSW_SPECIAL : 0;
	rec_dsw = in_dsw;
	if (special_on)
		log_printf(C_YELLOW, "SPECIAL: DIP S2 SWITCH 2 ON, A+B ON THE 1P SIDE FOR VBLANKS 0-%u AND AT EVERY TEST (S3)",
		           SP_BOOT_HOLD - 1);
	else if (game_set == SET_IBARA)
		log_printf(C_WHITE, "SPECIAL: OFF (THE OPTIONS PAGE: START IN THE ATTRACT, THEN BACK)");

	rt_game = game->code; /* test 38 */
	rt_init();
	cv1k_reset(&cpu);
#ifdef IB_ARRANGE
	arrgfx_vram(); /* test 81: BULLET DESIGN's pages (VRAM is zero from the reset on) */
#endif
	timing_apply(); /* test 17; test 32: FIT+ 3.75% */
	rtc_from_clock();
	/* test 33: the attract checks need the PC run's start: its RTC and a blank EEPROM; test 52:
	 * and the normal version */
	if (!rtc_default && eep_saved)
		chk_off_why = "REAL CLOCK + SAVED EEPROM";
	else if (!rtc_default)
		chk_off_why = "REAL CLOCK (THE PC RUN HAS 2026-01-01)";
	else if (eep_saved)
		chk_off_why = "SAVED EEPROM (THE PC RUN STARTS BLANK)";
	else if (special_on)
		chk_off_why = "SPECIAL VER. (THE PC RUN IS THE NORMAL ONE)";
	chk.off = !rtc_default || eep_saved || special_on;
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
		 * time (CET/CEST) and where it came from; test 33: the EEPROM line is 1034 bytes */
		static char hdr[REC_HEADER_MAX], eep_line[1100];
		size_t k;
		eeprom_header_line(eep_line, sizeof(eep_line));
		k = (size_t)snprintf(hdr, sizeof(hdr),
		         "# ibara360 input recording v1 (host/xsdk/test40, the .xex build; tools/rec/rec.py)\n"
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
		         "# test 48: RT autofire = button 1 down on every other game logic frame, in the ports below\n"
		         "# test 51: ibara's start menu sends its choice as the hidden commands, in the ports below\n"
		         "# test 53: \"# dsw <frame> <hex>\" = the DIP switch byte (18000053) from that vblank on (0 before the\n"
		         "#   first); ibara's special version = 02 + A+B (D 0x30) in the ports below at boot, at R3 and when\n"
		         "#   the options page turns it on (host/pc applies them)\n"
		         "# test 55: the controls and AUTO SHOT's rate act in the ports below; a pause (BACK in a run) is\n"
		         "#   not here: no emulated vblank passes while the game is paused\n"
		         "# test 69: \"# save <frame> <slot>\" = a save state taken (slots 0 attract, 1 credit, 2 stage);\n"
		         "#   \"# load <frame> <slot>\" = loaded at that vblank (it has no s line; the machine goes on from\n"
		         "#   the slot's moment, frame numbers go on; the PC harness replays them, host/pc cannot)\n"
		         "# test 81: \"# host <frame> <what> <value>\" = a host setting the game reads, set at that vblank\n"
		         "#   (what 0-3 = the DIP SWITCHES page's rows, 8 = ARRANGE's BULLET DESIGN; the PC harness replays them)\n"
		         "# test 84: slot 3 = a save state's moment; \"# load <frame> <slot> full\" = FULL RESTART's load;\n"
		         "#   \"# hddsave <frame> <file slot>\" = SAVE STATE asked its moment at that vblank (the next frame's\n"
		         "#   ports as this one's), \"# hddsaved <frame> <file slot> <crc>\" = the file written,\n"
		         "#   \"# hddload <frame> <file slot> <crc>\" = a file loaded at that vblank (then \"# load <frame> 3\");\n"
		         "#   the PC harness repeats them with its own files\n"
		         "# test 85: F 02 (S3, the service menu) is pressed only by the debug menu's SERVICE MENU row (R3 no longer)\n"
		         "# test 86: \"# rpsave <frame> <num>\" = SAVE REPLAY?'s A (the game paused at that vblank), \"# rpsaved\n"
		         "#   <frame> <num> <crc>\" = its file, \"# rpno <frame> 0\" = its B, \"# rpplay <frame> <num> <crc>\" = a\n"
		         "#   playback starts at that vblank, \"# rpend <frame> <num> <why>\" = it ends (0 its end, 1 B / BACK, 2 out\n"
		         "#   of step); the ports in between are the replay's; the PC harness repeats them with its own files\n"
		         "# test 87: \"# rpdel <frame> <num>\" = a replay deleted (the page's DELETE, or replaced by SAVE REPLAY?\n"
		         "#   with 30 kept); rpend's why 1 = the playback's QUIT REPLAY, 3 = RESTART REPLAY (its rpplay follows)\n"
		         "# rtc %d,%d,%d,%d,%d,%d,%d (%s%s)\n"
		         "# \"<frame> <C> <D> <L> <F>\": input ports (hex, active low) from emulated vblank <frame> on\n"
		         "# \"s <frame> <screen hash> <word %08X> <display vblanks>\": per emulated vblank\n",
		         ARR ? "ibaraarr" : romload_set_name(game_set), game->gen, eep_saved ? "saved (# eeprom)" : "blank",
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
	{ /* test 84: the save state files' buffers and zlib's streams (~3 MB), before the pool takes the free memory; the
	   * files in <dev>/ibara360/states/<set>, their headers read now (the SLOTS page) */
		struct hdd_game g;
		size_t gb;
		const char *dev = romload_device();
		memset(&g, 0, sizeof(g));
		snprintf(g.dir, sizeof(g.dir), "%s/ibara360/states/%s", dev ? dev : "", ARR ? "ibaraarr" : romload_set_name(game_set));
		g.set = ARR ? 2u : (uint32_t)game_set;
		g.image_crc = rt_game->image_crc;
#ifdef IB_ARRANGE
		g.patch_crc = arrange_image_crc;
#endif
		g.special = (uint32_t)special_on;
		g.host_bytes = sizeof(struct hdd_host);
		g.host_bytes_min = offsetof(struct hdd_host, tr_on); /* test 89: tests 84-88's files */
		g.moment_slot = SLOT_STATE;
		g.workers_start = hdd_workers_start;
		g.workers_stop = hdd_workers_stop;
		g.sleep_ms = hdd_sleep;
		/* test 86: the replays' folder and their input buffer (RP_BUF_BYTES, 1.7 MB: ARRANGE's 115 MB free still gives
		 * the pool its 8192 blocks, a playback's attract slot all of VRAM) */
		rp_buf = dev ? memalign(128, RP_BUF_BYTES) : NULL;
		if (rp_buf) {
			snprintf(g.rp_dir, sizeof(g.rp_dir), "%s/ibara360/replays/%s", dev, ARR ? "ibaraarr" : romload_set_name(game_set));
			g.rp_slot = SLOT_CREDIT;
			g.rp_host_bytes = sizeof(struct rp_host);
			g.rp_host_bytes_min = offsetof(struct rp_host, join_k); /* test 117: tests 86-116's replays */
			g.rp_input = rp_buf;
			g.rp_input_cap = RP_BUF_BYTES;
		}
		gadgets_state_blob(0, &gb);
		hdd_ok = dev && workers_up && gb <= HDD_GAD_MAX && hdd_init(&g) == 0;
		if (hdd_ok) {
			const unsigned ms = hdd_scan();
			int used = 0, refused = 0, k;
			for (k = 0; k < HDD_SLOTS; k++) {
				used += hdd_slot(k)->state == HDD_OK;
				refused += hdd_slot(k)->state == HDD_REFUSED;
			}
			log_printf(C_GREEN, "SAVE STATES: %s, %d OF %d SLOTS USED, %d UNUSABLE, READ IN %u MS", g.dir, used, HDD_SLOTS,
			           refused, ms);
			rp_ok = rp_buf != NULL; /* test 86 */
			if (rp_ok) {
				const unsigned rms = hdd_rp_scan();
				refused = 0;
				for (k = 0; k < hdd_rp_count(); k++)
					refused += hdd_rp(k)->state != HDD_OK;
				log_printf(C_GREEN, "REPLAYS: %s, %d REPLAYS (NEWEST %04d), %d UNUSABLE, READ IN %u MS; THE INPUTS' BUFFER "
				           "%u KB (%u VBLANKS)", g.rp_dir, hdd_rp_count(), hdd_rp_count() ? hdd_rp(0)->num : 0, refused, rms,
				           (unsigned)(RP_BUF_BYTES / 1024), RP_MAX_FRAMES);
			} else {
				log_printf(C_RED, "REPLAYS: NONE (NO MEMORY FOR THE INPUTS' BUFFER)");
			}
		} else {
			log_printf(C_RED, "SAVE STATES: NO HARD DISK FILES (%s)", !dev ? "NO STORAGE" : !workers_up ? "NO WORKERS" :
			           gb > HDD_GAD_MAX ? "GADGETS' RECORD TOO BIG" : "NO MEMORY");
		}
	}
	{ /* test 69: the save states (the pause menu's restarts and quit), after everything else has its memory: the VRAM
	   * pool as large as the free memory allows less STATE_MARGIN_MB, at most STATE_POOL_MAX blocks (test 63's whole
	   * run in extended mode needed more than 6144 with the attract's slot kept) */
		const uint64_t t = tb_read();
		MM_QUERY_STATISTICS_RESULT ms;
		unsigned avail_mb, n;
		memset(&ms, 0, sizeof(ms));
		ms.size = sizeof(ms);
		MmQueryStatistics(&ms);
		avail_mb = (unsigned)(ms.title.available_pages / 256);
		n = avail_mb > STATE_MARGIN_MB + 32 ? (avail_mb - STATE_MARGIN_MB - 32) * 128 : 0; /* 32 MB: the slots' RAM */
		if (n > STATE_POOL_MAX)
			n = STATE_POOL_MAX;
		rt_copy = copy_parallel;
		rt_state_taken = state_taken;
		for (; n >= STATE_POOL_MIN && !state_ok; n -= 512)
			state_ok = rt_state_init(n) == 0;
		if (!state_ok)
			hdd_ok = rp_ok = 0; /* test 84: the files need the slots; test 86: the replays too */
		if (state_ok)
			log_printf(C_GREEN, "STATE: 4 SLOTS (ATTRACT, CREDIT, STAGE, STATE) OF 8 MB RAM EACH, A VRAM POOL OF %u BLOCKS (%u MB; %u MB "
			           "WERE FREE), READY IN %u MS", rt_state_stats.pool_blocks, rt_state_stats.pool_blocks * 8 / 1024, avail_mb,
			           tb_us(t, tb_read()) / 1000);
		else
			log_printf(C_RED, "STATE: NO MEMORY FOR THE SAVE STATES (%u MB FREE): NO RESTARTS OR QUIT IN THE PAUSE MENU",
			           avail_mb);
	}
	if (ARR) /* test 81: BULLET DESIGN into ARRANGE's RAM (and the recording's first "# host" line) */
		host_set(HOST_BULLETS, cfg.arr_bullets, 0);
	{
		struct mallinfo mi = mallinfo();
		MM_QUERY_STATISTICS_RESULT ms;
		memset(&ms, 0, sizeof(ms));
		ms.size = sizeof(ms);
		MmQueryStatistics(&ms);
		log_printf(C_YELLOW, "GAME: STARTING %s, EEPROM %s, HEAP %u KB, %u MB FREE", game->title,
		           eep_saved ? "SAVED" : "BLANK", (unsigned)(mi.uordblks / 1024),
		           (unsigned)(ms.title.available_pages / 256));
	}
	/* test 33: the card as the ini says from here on; card = 1 keeps the loading card up
	 * until the IO thread hands over its first one */
	card_on = cfg.card;
	card_on_at = card_handoffs - 1;
	game_running = 1;
	t_resume = tb_read();
	rt_run(&cpu); /* never returns: frames come through host_vblank() */
}

/* the game thread: everything test 39's main() did, on a stack big enough for the runtime */
static uint32_t game_task(void *u)
{
	uint32_t r1;
	int started;

	(void)u;
	/* paint the stack below this frame, keeping 64 KB for what runs on it now and 64 KB above its
	 * low end; its ends are the kernel's (the processor control region's, as fault_handler reads
	 * them), so nothing outside it is touched */
	__asm__ volatile("mr %0, 1" : "=r"(r1));
	{
		const uint32_t a = pcr_word(PCR_STACK_BASE), b = pcr_word(PCR_STACK_END);
		const uint32_t lo = a < b ? a : b, hi = a < b ? b : a;
		stack_kb = (hi - lo) / 1024;
		if (r1 > lo + 256 * 1024 && r1 <= hi) {
			volatile uint32_t *p = (volatile uint32_t *)(uintptr_t)((lo + 64 * 1024) & ~127u);
			stack_top = (volatile uint32_t *)(uintptr_t)((r1 - 64 * 1024) & ~127u);
			stack_lo = p;
			while (p < stack_top)
				*p++ = STACK_PAINT;
		}
	}

	if (ps2data_games_init()) /* test 97: before the first NOW LOADING frame and the ARRANGE set-up */
		log_printf(C_RED, "PS2DATA: %s (NO PS2 PICTURES)", ps2data_why());
	ps2music_init(game_set, ARR); /* test 99: the soundtrack's table, ps2music.bin checked on its own thread (the ini's
	                               * SOUNDTRACK follows every vblank: snd_frame) */
	log_printf(C_WHITE, "TEST 99: SOUNDTRACK ARCADE / PS2 (THE PS2 PORT'S STREAMS FROM PS2MUSIC.BIN)");
	{ /* test 98: MENU STYLE PS2's fonts, frames and sounds (the launcher's levels: lsound.c's la_sounds vol x LS_GAIN) */
		static const int vol[PM_SE_N] = {28, 36, 40};
		unsigned n = 0, k, nse = 0;
		ps2menu_init();
		for (k = 0; k < PM_SE_N; k++) {
			const int16_t *pcm = ps2menu_se((int)k, &n);
			if (pcm) {
				sound_se_set((int)k, pcm, n, (float)vol[k] * (0.8f * 0.39f / 128.0f / 32768.0f)); /* test 100:
				                                                                                       * 20% lower (user) */
				nse++;
			}
		}
		if (ps2menu_ok())
			log_printf(C_GREEN, "PS2 MENUS: FONTS AND FRAMES READ, %s, %u OF %d MENU SOUNDS", ps2menu_jp_ok() ?
			           "THE JAPANESE GLYPHS TOO" : "NO JAPANESE GLYPHS (LANGUAGE STAYS ENGLISH)", nse, PM_SE_N);
		else
			log_printf(C_YELLOW, "PS2 MENUS: %s: MENU STYLE STAYS ARCADE", ps2menu_why());
	}
	log_printf(C_WHITE, "IBARA360 " XEX_VERSION XEX_GAME " XEX (TEST " XEX_TEST "; TEST 101 XEX; TEST 102: LANGUAGE ON OPTIONS, TRAINING GREEN LINES ENGLISH, "
	           "BLACK LABEL TITLES, MUSIC TEST NAMES AT ONE COLUMN, 4:3 GADGETS SPREAD + XTC FULL, ARRANGE: NO SERVICE "
	           "MENU, ARRANGE VER + TAITO ON THE TITLE; TEST 111: THE TOAST FIX AT THE START, EX-DEBUG VALUES IN ONE COLUMN, "
	           "START KEPT FROM THE RANKING UNTIL THE CAVE LOGO; TEST 112: AUDIO MONO/STEREO, EX-DEBUG BY LB+RB+A WITH THE INI'S "
	           "DEBUG ROWS, THE BOOT UNPACED; TEST 114: THE ROM LOADING'S TICKER PACED AGAIN; TEST 115: U2 INFLATED IN PIECES ON FOUR THREADS FROM A SAVED INDEX)");
	log_printf(C_WHITE, "BUILT " __DATE__ " " __TIME__ " WITH XSDK, GAME THREAD ON HARDWARE THREAD %d", my_thread());
	log_printf(stack_lo ? C_WHITE : C_YELLOW, "STACK: %u KB ASKED, THE KERNEL'S %u KB, %s", game_stack_bytes / 1024,
	           stack_kb, stack_lo ? "PAINTED" : "NOT PAINTED (ENDS NOT AS EXPECTED)");
	fault_init();
	clock_read();
	if (video_init()) {
		xsdk_log_write("ibara360: no video, ending");
		return 1;
	}
	/* test 41: the file thread first, so only one thread ever does the file work */
	if (file_thread_start()) {
		io_files = 1;
		log_printf(C_RED, "TEST: FILE THREAD DID NOT START, THE FILES ON THE IO THREAD (AS TEST 40)");
	}
	if (io_thread_start())
		log_printf(C_RED, "TEST: IO THREAD %d DID NOT START, NO PADS", IO_THREAD);
	else
		log_printf(C_YELLOW, "TEST: PADS + CARD + NET ON THREAD %d, %s", IO_THREAD,
		           io_files ? "FILES TOO" : "FILES ON THEIR OWN THREAD (ALSO T5)");

	started = romload_start() == 0;
	log_printf(started ? C_YELLOW : C_RED, "TEST: CARD UP, LOADER %s ON THREAD %d",
	           started ? "STARTED" : "NOT STARTED", LOADER_THREAD);
	if (!started)
		for (;;)
			present();
	/* test 38: the zips looked for, the ini (its game key), the game (the ini's or the menu's),
	 * then only that set loaded, then its EEPROM */
	while (!romload_scanned())
		present();
	settings_load(romload_scan_device()); /* test 33: the ini, before any other file work */
	if (cfg.menu_style == MENU_PS2 && !ps2menu_ok()) /* test 120 */
		log_printf(C_YELLOW, "PS2 MENU RESOURCES UNAVAILABLE (%s)", ps2menu_why());
	else if (cfg.menu_style == MENU_PS2 && cfg.language == LANG_JAPANESE && !ps2menu_jp_ok())
		log_printf(C_YELLOW, "LANGUAGE: JAPANESE IN THE INI, ENGLISH HELPS (%s)", ps2menu_why());
	layout_apply("THE INI");              /* test 48: the ini's aspect over the console's; test 53: all the layouts */
	netlog_start(cfg.netlog, cfg.netlog_port, "IBARA360 " XEX_VERSION XEX_GAME " XEX"); /* test 40: the IO thread listens */
	netlog_started = cfg.netlog;
	launch_get(&launch_in); /* test 72: how this title was started, and the launcher beside it */
	tk_alpha = launch_in.by == LAUNCH_BY_LAUNCHER ? 255 : 0; /* test 93: the launcher left the ticker up */
	tk_on = 1;
	launcher_ok = launch_exists(LAUNCHER_XEX);
	log_printf(launcher_ok ? C_WHITE : C_YELLOW, "LAUNCH: %s %s BESIDE THIS XEX%s", LAUNCHER_XEX,
	           launcher_ok ? "IS" : "IS NOT", launcher_ok ? " (GAME SELECT IN THE OPTIONS AND THE PAUSE)" : "");
#ifdef IB_ARRANGE
	if (ps2data_games_init()) { /* test 99 (user): ARRANGE's pictures and HUD frames are the PS2 disc's: no start without */
		uint32_t last[NPADS];
		int p;
		log_printf(C_RED, "ARRANGE: NOT STARTING: IT NEEDS PS2DATA.BIN (%s)", ps2data_why());
		log_printf(C_RED, "ARRANGE: MAKE IT WITH PS2EXTRACT.EXE FROM YOUR IBARA PS2 DISC, PUT IT BESIDE THE XEX");
		log_printf(C_RED, launcher_ok ? "ARRANGE: A, B OR BACK = BACK TO THE LAUNCHER" : "ARRANGE: NO LAUNCHER BESIDE "
		           "THIS XEX: TURN THE CONSOLE OFF OR GO TO THE DASHBOARD");
		for (p = 0; p < NPADS; p++)
			last[p] = pad_word[p]; /* a button held from the launcher is no choice */
		for (;;) {
			present();
			for (p = 0; p < NPADS; p++) {
				const uint32_t press = pad_word[p] & ~last[p];
				last[p] = pad_word[p];
				if (launcher_ok && (press & (A_MA | A_MB | A_COIN))) {
					struct launch_data d;
					memset(&d, 0, sizeof(d));
					d.magic = LAUNCH_MAGIC;
					d.version = LAUNCH_VERSION;
					d.by = LAUNCH_BY_GAME;
					d.game = LAUNCH_ARRANGE;
					d.count = launch_in.count + 1;
					log_printf(C_YELLOW, "ARRANGE: BACK TO %s (PAD %d)", LAUNCHER_XEX, p);
					achx_finish(1000); /* test 106 */
					launch_go(LAUNCHER_XEX, &d, gsel_flush);
					log_printf(C_RED, "ARRANGE: XAM DID NOT START %s", LAUNCHER_XEX);
				}
			}
		}
	}
#endif
	game_set = game_choose();
	if (game_set >= 0) {
		game = &games[game_set];
		game_chosen = 1;
		tr_defaults(); /* test 91: the TRAINING page's start values, the game's own */
	}
	romload_choose(game_set);
	if (game_set >= 0) { /* test 113: GADGETS' pictures unpacked on their own thread meanwhile */
		gadgets_target(fb_w, fb_h);
		gadgets_init_start(game_set == SET_IBARABLK);
	}
	while (!romload_finished())
		present();
	eeprom_load(romload_device(), ARR ? "ibaraarr" : romload_set_name(game_set)); /* test 33: the saved EEPROM; test 77: ARRANGE its own */
	if (ARR) {
		eeprom_seed(romload_set_name(SET_IBARA)); /* test 77: its first start from ibara's (settings: FREE PLAY) */
		eeprom_arrange_table();                   /* test 81: its own score table (table 3), once */
	}
	game_start();
	return 0;
}

int main(void)
{
	HANDLE h;
	NTSTATUS st;

	main_started = 1; /* test 40: the network log takes the log's lines from here on in any case */
	xsdk_log_write("ibara360: " XEX_VERSION " (test " XEX_TEST ")" XEX_GAME " xex, built " __DATE__ " " __TIME__);
	for (game_stack_bytes = GAME_STACK;; game_stack_bytes /= 2) {
		st = xsdk_thread_create_on(&h, game_stack_bytes, game_task, NULL, GAME_THREAD);
		if (NT_SUCCESS(st))
			break;
		xsdk_log_write("ibara360: no game thread with a %u KB stack: 0x%08X", game_stack_bytes / 1024, (unsigned)st);
		if (game_stack_bytes <= GAME_STACK_MIN)
			return 1;
	}
	NtWaitForSingleObjectEx(h, USER_MODE, 0, NULL);
	return 0;
}

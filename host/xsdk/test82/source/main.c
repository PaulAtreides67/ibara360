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

#include "ibara360_shaders.h"

#include "card.h"
#include "card_layout.h"
#include "clock.h"
#include "cv1k.h"
#include "expect.h"
#include "expect_blk.h"
#include "gadgets.h"
#include "arrhud.h" /* test 79: ARRANGE's HUD (ibaraarr.xex; empty in the others) */
#include "launch.h"
#include "netlog.h"
#include "pcbx.h"
#include "prof.h"
#include "recorder.h"
#include "romload.h"
#include "settings.h"
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
 * gadgets in the attract's demos, CONTROLS' MANUAL = the highest rate since the last death. */
#define XEX_TEST "82"  /* test 61: the build's test number, in the log's first lines, the network log and the card */
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
static void log_add(uint32_t color, const char *s)
{
	char pre[16];
	int first = 1;
	size_t n = strlen(s);

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
	log_printf(C_WHITE, "FAULTS: HANDLER SET (A FAULT IS LOGGED IN IBARA360.LOG, THEN THE TITLE ENDS)");
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
	A_START = 0x100, A_COIN = 0x200, A_TEST = 0x400,
	A_CARD = 0x800,   /* test 33: RB shows / hides the card */
	A_HASH = 0x1000,  /* test 17b: LB switches the check's RAM hash (not a board input) */
	A_AUTO = 0x2000,  /* test 48: RT = button 1 at 30 Hz (inputs_update) */
	A_MA = 0x4000, A_MB = 0x8000, /* test 55: the pad's own A and B, for the menus (whatever the controls) */
	A_LOCK = 0x10000, /* test 78: ARRANGE's aim lock = PCDR bit 6 (P1) / 7 (P2) low, bits the arcade game never reads */
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
		w |= ctl_bits[c][CTL_X];
	if (b & INPUT_GAMEPAD_Y)
		w |= ctl_bits[c][CTL_Y];
	if (b & INPUT_GAMEPAD_START)
		w |= A_START;
	if (b & INPUT_GAMEPAD_BACK)
		w |= A_COIN;
	if (b & (INPUT_GAMEPAD_GUIDE | INPUT_GAMEPAD_RIGHT_THUMB)) /* the Guide is the console's: R3 (test 48) */
		w |= A_TEST;
	if (b & INPUT_GAMEPAD_LEFT_SHOULDER)
		w |= ctl_bits[c][CTL_LB] | (lb_hash[c] ? A_HASH : 0);
	if (b & INPUT_GAMEPAD_RIGHT_SHOULDER)
		w |= ctl_bits[c][CTL_RB];
	if (g->left_trigger > AF_TRIGGER)
		w |= ctl_bits[c][CTL_LT];
	if (g->right_trigger > AF_TRIGGER)
		w |= ctl_bits[c][CTL_RT];
	return w;
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
#define SM_IDLE 60   /* vblanks the game must have been idle before Start opens the menu */
#define SM_LEAD 4    /* the command: held this many vblanks before Start, */
#define SM_START 6   /* Start down this many with it (as a coin's press), */
#define SM_TAIL 4    /* then held this many more */
#define SM_GAP 40    /* no credit then: this many vblanks without input, and the command again (free play: */
#define SM_TRIES 3   /* a Start in the attract demo only brings the title up, the next one starts), at most this often */
#define SM_CHECK 60  /* vblanks after the command the log says what the game took */

/* test 70: SM_FULLSEL = FULL RESTART's side and ship (the pause menu) */
enum { SM_CLOSED, SM_OPEN, SM_OPTS, SM_SENDING, SM_CTRL, SM_GADG, SM_SOUND, SM_PAUSE, SM_FULLSEL, SM_GSEL, SM_DIP };
/* test 53: SM_OPTS = the options page; test 55: SM_CTRL = the controls page; test 64: SM_GADG = the M3 GADGETS page;
 * test 68: SM_SOUND = the SOUND page; test 69: SM_PAUSE = the pause menu (its pages: the same states with menu_paused).
 * Test 81 (user's todo list: "the player side/mode/ship type should be put into a new "play" selection, so that every
 * single option is inside one menu as a whole"; the user chose "PLAY row first"): Start in the attract opens the menu
 * (SM_OPTS page 0, its first row PLAY); SM_OPEN = the PLAY page (the start menu's rows, then DIP SWITCHES; START or A
 * plays from it), SM_DIP = its DIP SWITCHES page (ARRANGE's BULLET DESIGN there: the user's "move BULLET DESIGN to dip
 * switches") */
enum { SM_ROW_PLAYER, SM_ROW_MODE, SM_ROW_TYPE, SM_ROW_DIP, SM_ROWS };
/* test 82 (user: "swap mode and type's positions with each other"; ARRANGE: "delete mode > arrange, it's redundant",
 * its DIP SWITCHES removed with BULLET DESIGN gone to GENERAL SCREEN, the user's choice) */
static const unsigned char sm_rows_ib[] = {SM_ROW_PLAYER, SM_ROW_TYPE, SM_ROW_MODE, SM_ROW_DIP, SM_ROWS};
static const unsigned char sm_rows_arr[] = {SM_ROW_PLAYER, SM_ROW_TYPE, SM_ROWS};
static const unsigned char sm_rows_blk[] = {SM_ROW_PLAYER, SM_ROW_DIP, SM_ROWS};
static const char *const sm_modes[3] = {"NORMAL", "HARDER", "EXTENDED"};
static const char *const sm_ships[2] = {"BOND", "DYNE"};
static int sm_state;               /* game thread; read by the card */
static int sm_pad;                 /* the pad the menu belongs to (0 or 1) */
static int sm_side, sm_mode, sm_type; /* the choice, kept between games: 0 = 1P Bond, 1 = 2P Dyne; 0-2; 0-3 = A-D */
static int sm_row;                 /* test 53: the start menu's row; test 81: the PLAY page's, an index into its list */
static int pad_swap;               /* pad 0 plays the 2P side and pad 1 the 1P side */
static unsigned sm_idle;           /* vblanks the game has been idle (no credit, no service menu) */
static int sm_svc;                 /* test 66: a service menu ran since the game's byte was last 0 (its 1 is stale) */
static unsigned sm_runhold;        /* test 66: vblanks a run still counts for the logos (ibara's byte is 0 for a vblank
                                    * at each stage start: Start was live there in a run begun from the logos) */
#define SM_RUN_HOLD 10
static unsigned sm_k, sm_try;      /* the command's vblank; its tries */
static uint32_t sm_prev[2], sm_hold[2]; /* pads 0-1 last vblank; buttons kept from the game until released */
static unsigned sm_check_at;       /* frame_count at which the log reads the game's mode and ship (0 = none) */
static unsigned sm_opens, sm_plays;
static int sm_run, sm_test;        /* test 69: sm_frame's run and service menu this vblank (the save states) */
static int sm_after;               /* test 81: a run ended in scene sm_after - 1 and the scene has not changed since (its
                                    * GAME OVER, initials and ranking: Start is the game's); 0 = none */
static unsigned sm_scene;          /* and the scene byte */

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

/* test 53: the options page's special row, applied on leaving the page: the switch to the
 * board, A+B for game_main when it goes on (inputs_update), the recording's "# dsw" line */
static void special_switch(void)
{
	special_on = cfg.special;
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
       OPT_DEBUG, OPT_SOUND, OPT_SCREEN, OPT_CONTROLS2, OPT_GSEL, OPT_PLAY, OPT_BULLETS, OPT_N };
static const char *const opt_names[OPT_N] = { /* "*" = from the next power-on */
	"SPECIAL MODE", "PICTURE SIZE", "ROTATION", "ASPECT RATIO", "SCANLINES", "SCAN STRENGTH", "DEBUG CARD",
	"EEPROM SAVE *", "RECORD *", "FRAME LOG *", "NETWORK LOG *", "GAME MENU *", "AUTOFIRE", "BACK IN A RUN",
	"P1 CONTROLS", "PLAYER", "GADGETS", "M3 GADGETS", "DEBUG MENU", "SOUND", "GENERAL SCREEN",
	"P2 CONTROLS", /* test 71 (user: "add P2 controls in options ... follow same text as P1") */
	"GAME SELECT", /* test 72: back to the launcher (A, then A again) */
	"PLAY",        /* test 81: the PLAY page (A) */
	"BULLET DESIGN", /* test 82: ARRANGE's, on GENERAL SCREEN (user: "move "bullet design" to "general screen"") */
};
static const char *const opt_helps[OPT_N] = { /* a line's 35 characters at most (the box); "\n" = a second line (test 70) */
	"IBARA'S SPECIAL VER. (PCB DIP S2-2)",
	"INTEGER = SHARP, FULL = FULL HEIGHT",
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
	"ORIGINAL WORK BY BAF",                 /* test 64 (user: "an M3 gadgets option"); test 69: the user's */
	"",                                     /* sm_draw: the debug menu's rows (test 67) */
	"VOLUMES, MUTE, SOUND TEST",            /* test 68 */
	"CUSTOMIZE GAME SCREEN",                /* test 70 */
	"CUSTOMIZE CONTROLS",                   /* test 71: P2 CONTROLS, P1's text (user) */
	"QUIT TO MAIN MENU",                    /* test 72; test 76: the user's (the launcher is the main menu) */
	"",                                     /* sm_draw: the game's PLAY rows (test 81) */
	"ENEMY BULLET COLORS\n(THE PS2 ARRANGE'S BULLET DESIGN)", /* test 82 */
};
/* test 67: [0] the options, [1] the debug menu; ending at OPT_N; test 68: SOUND after CONTROLS. Test 69 (user: "gadgets
 * on/off option is obsolete since the M3 gadgets options have an all/off toggle", "back in a run option is obsolete"):
 * no GADGETS or BACK IN A RUN rows; [2] = the pause menu's SCREEN page (user: "picture size, scanlines, scanline
 * strength, aspect ratio, tate, M3 gadgets"). Test 70: [3] = GENERAL SCREEN (user: "transfer the picture, tate, aspect,
 * scanlines, scan strength to a general screen menu"), the debug menu has DEBUG CARD */
#define OPT_PAGE_DEBUG 1
#define OPT_PAGE_SCREEN 2
#define OPT_PAGE_GENERAL 3
#define OPT_PAGES 4
/* test 72: no GAME MENU row in a one-game image (the launcher chooses), GAME SELECT at the options' end instead */
#ifdef IB_GAME
#define OPT_GAME_ROW
#define OPT_GSEL_ROW OPT_GSEL,
#else
#define OPT_GAME_ROW OPT_GAME,
#define OPT_GSEL_ROW
#endif
static const unsigned char opt_rows_ib[OPT_PAGES][12] = { /* test 71: P2 CONTROLS after P1's; test 81: PLAY first */
	{OPT_PLAY, OPT_SCREEN, OPT_M3, OPT_CONTROLS, OPT_CONTROLS2, OPT_SOUND, OPT_DEBUG, OPT_GSEL_ROW OPT_N},
	{OPT_SPECIAL, OPT_CARD, OPT_SAVE, OPT_RECORD, OPT_FRAMELOG, OPT_NETLOG, OPT_GAME_ROW OPT_N},
	{OPT_PICTURE, OPT_SCANLINES, OPT_STRENGTH, OPT_ASPECT, OPT_TATE, OPT_M3, OPT_N},
	{OPT_PICTURE, OPT_TATE, OPT_ASPECT, OPT_SCANLINES, OPT_STRENGTH, OPT_N},
};
/* test 82 (user: "in "debug menu", delete "special mode"", "move "bullet design" to "general screen""): ARRANGE's */
static const unsigned char opt_rows_arr[OPT_PAGES][12] = {
	{OPT_PLAY, OPT_SCREEN, OPT_M3, OPT_CONTROLS, OPT_CONTROLS2, OPT_SOUND, OPT_DEBUG, OPT_GSEL_ROW OPT_N},
	{OPT_CARD, OPT_SAVE, OPT_RECORD, OPT_FRAMELOG, OPT_NETLOG, OPT_GAME_ROW OPT_N},
	{OPT_PICTURE, OPT_SCANLINES, OPT_STRENGTH, OPT_ASPECT, OPT_TATE, OPT_M3, OPT_N},
	{OPT_PICTURE, OPT_TATE, OPT_ASPECT, OPT_SCANLINES, OPT_STRENGTH, OPT_BULLETS, OPT_N},
};
static const unsigned char opt_rows_blk[OPT_PAGES][12] = { /* test 60: GADGETS; 64: M3; 70: PLAYER in the start menu */
	{OPT_PLAY, OPT_SCREEN, OPT_M3, OPT_CONTROLS, OPT_CONTROLS2, OPT_SOUND, OPT_DEBUG, OPT_GSEL_ROW OPT_N},
	{OPT_CARD, OPT_SAVE, OPT_RECORD, OPT_FRAMELOG, OPT_NETLOG, OPT_GAME_ROW OPT_N},
	{OPT_PICTURE, OPT_SCANLINES, OPT_STRENGTH, OPT_ASPECT, OPT_TATE, OPT_M3, OPT_N},
	{OPT_PICTURE, OPT_TATE, OPT_ASPECT, OPT_SCANLINES, OPT_STRENGTH, OPT_N},
};
static int opt_page;               /* test 67: 0 = the options, 1 = the debug menu; test 69: 2 = the pause's SCREEN;
                                    * test 70: 3 = GENERAL SCREEN */
static int opt_sels[OPT_PAGES];    /* the highlighted row of each page (an index into the game's rows) */
static int menu_paused;            /* test 69: the pages are the pause menu's (sm_draw's lines, SOUND without tests) */
static int opt_changes;            /* changes since the page opened */
static int netlog_started;         /* this power-on's netlog (the ini's) */
static void layout_apply(const char *why);
/* test 72: GAME SELECT (the options' last row) and the pause's QUIT TO GAME SELECT, A then A again: back to the
 * launcher beside this .xex (launch.h). launcher_ok = it is there (at the start); gsel_armed = the row asks; gsel_req =
 * the options asked (sm_frame), the game thread goes after it (inputs_update) */
static int launcher_ok, gsel_armed, gsel_req;
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
	case OPT_PICTURE: snprintf(s, n, "%s", cfg.picture == PIC_FULL ? "FULL" : "INTEGER"); break;
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
		s[0] = 0;
		break;
	case OPT_BULLETS: snprintf(s, n, "%s", bullet_names[cfg.arr_bullets % 3]); break; /* test 82 */
	default: snprintf(s, n, "%s", cfg.game == GAME_ASK ? "ASK" : cfg.game == SET_IBARA ? "IBARA" : "KURO BL"); break;
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
	case OPT_PICTURE: cfg.picture = cfg.picture == PIC_FULL ? PIC_INTEGER : PIC_FULL; break;
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
	case OPT_PLAY: return; /* test 81: sm_frame opens the PLAY page */
	case OPT_BULLETS: /* test 82: host_set logs it and counts the change */
		bullets_step(d);
		return;
	case OPT_PLAYER: /* test 55: not an ini setting, kept between games as ibara's start menu's */
		sm_side ^= 1;
		log_printf(C_WHITE, "OPTIONS: PLAYER %dP SIDE (EMU %u)", sm_side + 1, (unsigned)frame_count);
		return;
	case OPT_GADGETS: cfg.gadgets ^= 1; break; /* test 58: at once (present) */
	default: cfg.game = (cfg.game + 1 + 3 + d) % 3 - 1; break; /* ask (-1), ibara (0), ibarablk (1) */
	}
	opt_changes++;
	opt_value(i, v, sizeof(v));
	log_printf(C_WHITE, "%s%s %s %s (EMU %u)", sm_state == SM_CTRL ? "CONTROLS:" : menu_paused ? "PAUSE SCREEN:" : "OPTIONS:",
	           sm_state == SM_CTRL ? (ctl_pad ? " P2" : " P1") : "", opt_names[i], v,
	           (unsigned)frame_count); /* test 67: AUTOFIRE from the controls page */
	if ((i >= OPT_PICTURE && i <= OPT_STRENGTH) || i == OPT_GADGETS) /* test 60: GADGETS on 4:3 move the game */
		layout_apply("THE OPTIONS");
	if (i == OPT_CARD) { /* as RB */
		card_on = cfg.card;
		card_on_at = card_handoffs;
	}
}

/* test 81: the menu (Start in the attract), its page 0 */
static void opt_open(void)
{
	sm_state = SM_OPTS;
	opt_page = 0;
	opt_changes = 0;
	gsel_armed = 0; /* test 72 */
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
	} else if (g == GD_CONTROLS) {
		const int v = ((cfg.gadget[g] ? cfg.ctl_text : 2) + 3 + d) % 3; /* 0 stick, 1 text, 2 off */
		cfg.gadget[g] = v != 2;
		if (v != 2)
			cfg.ctl_text = v;
		log_printf(C_WHITE, "M3 GADGETS: CONTROLS %s (EMU %u)", v == 2 ? "OFF" : v ? "TEXT" : "STICK",
		           (unsigned)frame_count);
	} else {
		cfg.gadget[g] ^= 1;
		log_printf(C_WHITE, "M3 GADGETS: %s %s (EMU %u)", gadgets_names[g], cfg.gadget[g] ? "ON" : "OFF",
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
enum { SR_MUSIC, SR_SFX, SR_VOICE, SR_ATTRACT, SR_MUTE, SR_MTEST, SR_VTEST, SR_N };
static const char *const sr_names[SR_N] = {"MUSIC", "SFX", "VOICE", "ATTRACT", "MUTE", "MUSIC TEST", "VOICE TEST"};
static const char *const sr_helps[SR_MTEST] = {
	"MUSIC VOLUME", "SOUND EFFECTS VOLUME", "VOICE VOLUME", "ATTRACT SCREEN VOLUME", "ALL SOUND OFF", /* test 70 */
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
static int snd_sel, snd_track, snd_voice;
static int snd_music_on, snd_music_seen; /* a track asked for; the test chip has been seen playing it */
static unsigned snd_tests;

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
		sound_test_stop();
		log_printf(C_WHITE, "SOUND TEST: STOPPED (EMU %u)", (unsigned)frame_count);
		return;
	}
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
	} else if (k == SR_MTEST) {
		if (a) {
			snd_music(!snd_music_on);
			return;
		}
		snd_track = (snd_track + snd_ntracks() + d) % snd_ntracks();
		if (snd_music_on) /* playing: the next one at once */
			snd_music(1);
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

/* every vblank (inputs_update): the volumes to the sound thread (the attract's share while the game is idle), the
 * test stopped once the page is not up, a track played once seen to its end */
static void snd_frame(void)
{
	const int busy = sound_test_busy();

	if (sm_state != SM_SOUND && (snd_music_on || busy)) {
		snd_music_on = 0;
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
	sound_levels(cfg.vol_music, cfg.vol_sfx, cfg.vol_voice, cfg.vol_attract, sm_idle >= SM_IDLE, cfg.mute);
}

/* the start menu's play: ibara's command on the chosen side's port, Kuro BL's Start on the pad's;
 * test 55: Kuro BL's on its PLAYER row's side too */
static void sm_play(void)
{
	sm_state = SM_SENDING;
	sm_k = sm_try = 0;
	sm_plays++;
	sm_svc = 0; /* test 66: the run this starts is a run, on the logos too */
	pad_swap = sm_pad ^ sm_side;
	if (game_set == SET_IBARA)
		log_printf(C_GREEN, "MENU: PLAY %dP %s %s TYPE %c (PAD %d, EMU %u): PAD 0 = P%d, PAD 1 = P%d", sm_side + 1,
		           sm_ships[sm_side], sm_modes[sm_mode], 'A' + sm_type, sm_pad, (unsigned)frame_count, 1 + pad_swap,
		           2 - pad_swap);
	else
		log_printf(C_GREEN, "MENU: PLAY %dP SIDE (PAD %d, EMU %u): PAD 0 = P%d, PAD 1 = P%d", sm_side + 1, sm_pad,
		           (unsigned)frame_count, 1 + pad_swap, 2 - pad_swap);
}

/* ---- test 81: the PLAY page, DIP SWITCHES, ARRANGE's BULLET DESIGN ------------------------------------------------ */

/* the PLAY page's rows (an SM_ROW_* list ending at SM_ROWS) */
static const unsigned char *sm_rowlist(void)
{
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
enum { HOST_DIP0 = 0, HOST_BULLETS = 8, HOST_N = 16 };
static int host_val[HOST_N], host_seen[HOST_N];
static void dip_write(int i, int v);

static void host_set(int what, int value, int menu)
{
	if (what < 0 || what >= HOST_N)
		return;
	host_val[what] = value;
	host_seen[what] = 1;
	rec_host((uint32_t)frame_count, what, value);
	if (what == HOST_BULLETS) {
		cfg.arr_bullets = value;
#ifdef ARRANGE_DESIGN
		*RAMP(ARRANGE_DESIGN) = (u8)value;
#endif
		log_printf(C_WHITE, "%s: BULLET DESIGN %s (EMU %u)", menu ? "GENERAL SCREEN" : "HOST", value >= 0 && value < 3 ?
		           bullet_names[value] : "?", (unsigned)frame_count);
	} else if (what < HOST_BULLETS) {
		dip_write(what - HOST_DIP0, value);
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

/* test 81: a step of the PLAY page's row id (d = 1: RIGHT, -1: LEFT) */
static void sm_step(int id, int d)
{
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

static void play_open(void)
{
	if (opt_leave(1)) { /* the options' special version changed: the game restarts */
		sm_state = SM_CLOSED;
		log_printf(C_YELLOW, "MENU: CLOSED, THE GAME RESTARTS (START AGAIN ON THE TITLE)");
		return;
	}
	sm_state = SM_OPEN;
	if (sm_row >= sm_nrows())
		sm_row = 0;
	log_printf(C_WHITE, "PLAY: OPEN (EMU %u)", (unsigned)frame_count);
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
	if (hold_before && !sm_runhold && !test && !sm_svc) {
		sm_after = 1 + scene;
		log_printf(C_WHITE, "MENU: THE RUN ENDED BY EMU %u (SCENE %u): START IS THE GAME'S UNTIL THE DEMOS",
		           (unsigned)frame_count, scene);
	}
	if (sm_after && scene && scene != sm_after - 1) {
		sm_after = 0;
		log_printf(C_WHITE, "MENU: THE ATTRACT AGAIN AT EMU %u (SCENE %u)", (unsigned)frame_count, scene);
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
	for (p = 0; p < 2; p++) {
		const uint32_t press = w[p] & ~sm_prev[p];
		const int had = sm_state != SM_CLOSED && p == sm_pad; /* B below closes it: still the menu's press */

		sm_prev[p] = w[p];
		sm_hold[p] &= w[p];
		if (sm_state == SM_CLOSED && sm_idle >= SM_IDLE && (press & A_START)) {
			sm_pad = p;
			sm_side = p ^ pad_swap;
			sm_opens++;
			log_printf(C_WHITE, "MENU: OPEN (PAD %d, EMU %u)", p, (unsigned)frame_count);
			opt_open(); /* test 81: the one menu, PLAY its first row */
		} else if (sm_state == SM_OPEN && p == sm_pad) { /* test 81: the PLAY page */
			const int n = sm_nrows(), id = sm_rowid(sm_row);
			if (press & A_UP)
				sm_row = (sm_row + n - 1) % n;
			else if (press & A_DOWN)
				sm_row = (sm_row + 1) % n;
			if (press & (A_LEFT | A_RIGHT))
				sm_step(id, press & A_RIGHT ? 1 : -1);
			if ((press & A_MA) && id == SM_ROW_DIP) {
				dip_open();
			} else if (press & (A_START | A_MA)) {
				if (opt_changes) /* ARRANGE's BULLET DESIGN: the ini */
					opt_leave(0);
				sm_play();
			} else if (press & (A_MB | A_COIN)) {
				sm_state = SM_OPTS;
				opt_page = 0;
				log_printf(C_WHITE, "PLAY: BACK TO THE MENU");
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
			if ((press & (A_UP | A_DOWN)) || (gsel_armed && (press & (A_MB | A_COIN)))) { /* test 72: B = no */
				unarm = gsel_armed && !(press & (A_UP | A_DOWN));
				gsel_armed = 0;
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
			} else if (id == OPT_PLAY) { /* test 81: the PLAY page (A) */
				if (press & A_MA)
					play_open();
			} else if (id == OPT_CONTROLS || id == OPT_CONTROLS2 || id == OPT_M3 || id == OPT_DEBUG || id == OPT_SOUND ||
			    id == OPT_SCREEN) {
				if ((press & A_MA) && (id == OPT_CONTROLS || id == OPT_CONTROLS2)) /* test 56: A only; test 71: P1 / P2 */
					ctl_open(id == OPT_CONTROLS2);
				else if ((press & A_MA) && id == OPT_M3) /* test 64 */
					gp_open();
				else if ((press & A_MA) && id == OPT_SOUND) /* test 68 */
					snd_open();
				else if (press & A_MA) { /* test 67: the debug menu; test 70: GENERAL SCREEN */
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
			} else if (sm_state == SM_OPTS && opt_page != 0 && (press & (A_MB | A_COIN))) { /* test 67 */
				log_printf(C_WHITE, "%s: BACK TO THE MENU", opt_names[opt_page == OPT_PAGE_DEBUG ? OPT_DEBUG : OPT_SCREEN]);
				opt_page = 0;
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
				log_printf(C_WHITE, "M3 GADGETS: BACK TO THE MENU");
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
				log_printf(C_WHITE, "SOUND: BACK TO THE MENU");
			}
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
				log_printf(C_WHITE, "CONTROLS: BACK TO THE MENU");
			}
		}
		if (had || (sm_state != SM_CLOSED && p == sm_pad))
			sm_hold[p] = w[p]; /* the menu's presses never reach the game */
	}
	if ((sm_state == SM_OPEN || sm_state == SM_OPTS || sm_state == SM_CTRL || sm_state == SM_GADG ||
	     sm_state == SM_SOUND || sm_state == SM_DIP) && !sm_idle) {
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

		if (sm_k < send) {
			if (ib)
				cmd = (sm_mode == 1 ? A_UP : sm_mode == 2 ? A_DOWN : 0) | (sm_type & 1 ? A_B1 : 0) |
				      (sm_type & 2 ? A_B2 : 0);
			if (sm_k >= SM_LEAD && sm_k < SM_LEAD + SM_START)
				cmd |= A_START;
		}
		w[sm_pad] = cmd;
		sm_k++;
		if (sm_k >= send && (on || sm_try + 1 >= SM_TRIES)) {
			sm_state = SM_CLOSED;
			sm_check_at = (unsigned)frame_count + SM_CHECK;
		} else if (sm_k == send + SM_GAP) {
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
 * rule"). A side that never played (a 2P join) is left to the game. */
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

/* after sm_frame, on the pads' words (w[pad]; side s is pad s ^ pad_swap) */
static void ct_frame(uint32_t w[2])
{
	int s;

	if (game_set != SET_IBARA) /* test 81: ARRANGE's too (its continue is the arcade's: arrange.c arr_player_hud) */
		return;
	for (s = 0; s < 2; s++) {
		const int p = s ^ pad_swap;
		const uint32_t press = w[p] & ~ct_prev[s], pl = IB_PLAYER + (uint32_t)s * IB_SHIP_P2;
		const int waiting = ct_waiting(s);

		ct_prev[s] = w[p];
		ct_hold[s] &= w[p];
		if ((BE32(RAMP(pl)) & 0xCC000000u) == 0xCC000000u) /* alive or flying in (work/g65/inv) */
			ct_last[s] = *RAMP(IB_SHIP + (uint32_t)s * IB_SHIP_P2) & 3;
		if (ct_state[s] == CT_IDLE && waiting && (press & A_START) && !(w[p] & (A_B1 | A_B2))) {
			/* (Start with buttons 1 / 2 held reaches the game as before: its own re-select) */
			ct_state[s] = CT_PICK;
			ct_type[s] = ct_last[s] >= 0 ? ct_last[s] : 0;
			ct_opens++;
			log_printf(C_WHITE, "CONTINUE: %dP TYPE BOX, TYPE %c FIRST (PAD %d, EMU %u)", s + 1, 'A' + ct_type[s], p,
			           (unsigned)frame_count);
		} else if (ct_state[s] == CT_PICK) {
			if (!waiting) {
				ct_state[s] = CT_IDLE;
				log_printf(C_YELLOW, "CONTINUE: %dP BOX CLOSED, NO CONTINUE NOW (EMU %u)", s + 1, (unsigned)frame_count);
			} else if (press & (A_START | A_MA)) {
				ct_state[s] = CT_SENDING;
				ct_k[s] = 0;
				ct_sends++;
				log_printf(C_GREEN, "CONTINUE: %dP %s TYPE %c (EMU %u)", s + 1, sm_ships[s], 'A' + ct_type[s],
				           (unsigned)frame_count);
			} else if (press & A_MB) {
				ct_state[s] = CT_IDLE;
				log_printf(C_WHITE, "CONTINUE: %dP BOX CLOSED (B)", s + 1);
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
			uint32_t cmd = (ct_type[s] & 1 ? A_B1 : 0) | (ct_type[s] & 2 ? A_B2 : 0);
			if (ct_k[s] == 0 && BE32(RAMP(pl)) != 0) /* not out yet: the command once it is */
				continue;
			if (ct_k[s] < CT_START)
				cmd |= A_START;
			w[p] = cmd;
			if (++ct_k[s] >= CT_START + CT_TAIL) {
				ct_state[s] = CT_IDLE;
				ct_check_at[s] = (unsigned)frame_count + SM_CHECK;
			}
		}
		if (ct_check_at[s] && (unsigned)frame_count == ct_check_at[s]) {
			const unsigned ship = *RAMP(IB_SHIP + (uint32_t)s * IB_SHIP_P2);
			const int plays = (BE32(RAMP(pl)) & 0xCC000000u) == 0xCC000000u;
			ct_check_at[s] = 0;
			log_printf(plays && (ship & 3) == (unsigned)ct_type[s] ? C_GREEN : C_RED,
			           "CONTINUE: %dP %s, %s TYPE %c%s", s + 1, plays ? "PLAYS" : "NOT PLAYING",
			           ship < 8 ? sm_ships[ship / 4] : "SHIP ?", 'A' + (int)(ship & 3),
			           (ship & 3) == (unsigned)ct_type[s] ? " = THE CHOICE" : ", NOT THE CHOICE");
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
	uint32_t pw[2] = {pad_word[0], pad_word[1]};
	int p;

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
		{A_B3, "3"}, {A_B4, "4"}, {A_START, "ST"}, {A_COIN, "CN"}, {A_TEST, "TS"}, {A_AUTO, "AF"},
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

	snprintf(line, sizeof(line), "TEST " XEX_TEST " XEX %s  PCB FIT+ 3.75%%  VIDEO %dX%d%s %s  XSDK",
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
	if (game_set == SET_IBARA && game_running) /* test 51: the start menu's choice (TEST = R3 is in the log) */
		snprintf(line, sizeof(line), "TO GAME: C %02X D %02X L %02X F %02X  COINS %u %u  MENU %dP %s %c", in_port_c,
		         in_port_d, in_port_l, in_port_f, coins[0], coins[1], sm_side + 1, sm_modes[sm_mode], 'A' + sm_type);
	else if (game_running) /* test 55: Kuro BL's side and the pauses */
		snprintf(line, sizeof(line), "TO GAME: C %02X D %02X L %02X F %02X  COINS %u %u  %dP SIDE PAUSES %u", in_port_c,
		         in_port_d, in_port_l, in_port_f, coins[0], coins[1], sm_side + 1, pauses);
	else
		snprintf(line, sizeof(line), "TO GAME: C %02X D %02X L %02X F %02X  COINS %u %u  TEST = R3", in_port_c,
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
#define LAYOUT_QUADS (4 + SCAN_MAX)       /* test 53: a layout: the card's 2 quads, the game's 2, the scanlines */
#define VB_QUADS (2 + 2 * LAYOUT_QUADS)   /* the power-on card layout, then two layouts used in turn (layout_apply) */
static const XsdkVertexElement vlayout[] = {
	{.usage = XSDK_USAGE_POSITION, .format = XSDK_VERTEX_FLOAT2, .offset_bytes = 0},
	{.usage = XSDK_USAGE_TEXCOORD, .format = XSDK_VERTEX_FLOAT2, .offset_bytes = 8},
};

static XsdkShader vs, ps;
static XsdkTexture stex;               /* test 37: 256 greys, column g = g / 255 */
static XsdkSamplerState samp_point, samp_linear;
static XsdkBlendState blend_mul, blend_none;
static volatile uint32_t *vmem;        /* every quad, one block of GPU memory */
static unsigned vquads;                /* quads written so far */
static int fb_w, fb_h;
struct vb { uint32_t address, bytes, verts; };
static struct vb vb_game, vb_card, vb_int, vb_full, vb_scan; /* test 33: the game alone, centred */
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
	const int i0 = ifloor(a0), i1 = -ifloor(-a1);
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
	float ri[4], rf[4], w, h;
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
	if (cfg.gadgets && gadgets_view() == GV_43) { /* test 60: the game at the left edge, GADGETS' panel at the right */
		ri[2] -= ri[0];
		ri[0] = 0;
		rf[2] -= rf[0];
		rf[0] = 0;
	}
	vb_int = make_quad(ri[0], ri[1], ri[2], ri[3], uv);
	vb_full = make_quad(rf[0], rf[1], rf[2], rf[3], uv);
	r = cfg.picture == PIC_FULL ? rf : ri;
	scan_quads = 0; /* test 53: none unless built again here */
	if (cfg.scanlines && cfg.scanline_strength > 0)
		scan_build(r[0], r[1], r[2], r[3], cfg.tate != TATE_OFF);
	log_printf(C_GREEN, "PICTURE: TATE %s, %s %dX%d AT %d,%d, SCANLINES %d%% (%d QUADS)",
	           cfg.tate == TATE_LEFT ? "LEFT" : cfg.tate == TATE_RIGHT ? "RIGHT" : "OFF",
	           cfg.picture == PIC_FULL ? "FULL" : "INTEGER", (int)(r[2] - r[0] + 0.5f), (int)(r[3] - r[1] + 0.5f),
	           (int)r[0], (int)r[1], cfg.scanlines ? cfg.scanline_strength : 0, scan_quads);
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
enum { SLOT_ATTRACT, SLOT_CREDIT, SLOT_STAGE };
#if RT_SLOTS != 3 || GD_STATE_SLOTS != 3
#error "the slots of runtime/state.h and gadgets.h are the host's three"
#endif
#define STATE_RUN_GAP 120      /* vblanks out of a run that end it (its slots dropped) */
#define IB_STAGE 0x0C392B08u   /* byte: 2-7 = stages 1-6, 8-13 the extended mode's second loop (gadgets.c's) */
#define BLK_STAGE 0x0C3C4170u  /* byte: 2-7 = stages 1-6 */
#define STATE_POOL_MAX 8192    /* VRAM blocks of 8 KB in the pool (all of VRAM's) */
#define STATE_POOL_MIN 1024
#define STATE_MARGIN_MB 20     /* free memory left after the slots */
static int state_ok;           /* the runtime's slots are there */
static int state_load_slot = -1; /* the pause menu (or a replayed recording) asked for a load at this vblank */
static const char *state_load_why; /* the pause menu's row that asked (the log) */
static int stage_slot = -1;    /* the slot RESTART STAGE loads */
static int credit_on;          /* SLOT_CREDIT is this run's */
static int st_prev = -1;       /* the stage last seen in this run */
static unsigned st_out;        /* vblanks out of a run */
static int slot_stage[RT_SLOTS] = {-1, -1, -1}; /* the stage each slot was taken at (-1: none, the attract) */
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

/* the stage being played (0-5, 6-11 the extended mode's second loop) or -1 */
static int stage_now(void)
{
	const int ib = game_set == SET_IBARA;
	const unsigned b = *RAMP(ib ? IB_STAGE : BLK_STAGE);

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
	static const char *const slots[RT_SLOTS] = {"ATTRACT", "CREDIT", "STAGE"};
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
}

/* host_vblank, after inputs_update: the slots asked for (sm_frame's run, scene and service menu of this vblank) */
static void state_frame(void)
{
	const int stage = stage_now();
	char t[24];

	if (!state_ok)
		return;
	if (sm_run)
		st_out = 0;
	else if (st_out < STATE_RUN_GAP)
		st_out++;
	if (credit_on && st_out >= STATE_RUN_GAP) {
		credit_on = 0;
		stage_slot = -1;
		st_prev = -1;
		rt_state_drop(SLOT_STAGE);
		rt_state_drop(SLOT_CREDIT);
		log_printf(C_WHITE, "STATE: THE RUN ENDED (EMU %u), ITS STATES DROPPED; POOL %u OF %u BLOCKS", (unsigned)frame_count,
		           rt_state_stats.pool_used, rt_state_stats.pool_blocks);
	}
	if (rt_state_stats.overflows) { /* a slot lost a block for want of room (it cannot be loaded) */
		static unsigned seen;
		if (rt_state_stats.overflows != seen) {
			seen = rt_state_stats.overflows;
			log_printf(C_RED, "STATE: THE VRAM POOL IS FULL (%u BLOCKS): SLOTS DROPPED, THE LEAST NEEDED FIRST (%u SO FAR); "
			           "LEFT: ATTRACT %d CREDIT %d STAGE %d", rt_state_stats.pool_blocks, seen, rt_state_ready(SLOT_ATTRACT),
			           rt_state_ready(SLOT_CREDIT), rt_state_ready(SLOT_STAGE));
		}
	}
	if (sm_run && stage >= 0 && stage != st_prev) {
		st_prev = stage;
		stage_name(t, sizeof(t), stage);
		if (!credit_on) {
			credit_on = 1;
			rt_state_drop(SLOT_STAGE);
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
enum { PM_RESUME, PM_STAGE, PM_FULL, PM_CONTROLS, PM_CONTROLS2, PM_SCREEN, PM_SOUND, PM_QUIT, PM_GSEL, PM_N };
static const char *const pm_names[PM_N] = {"RESUME", "RESTART STAGE", "FULL RESTART", "P1 CONTROLS", "P2 CONTROLS",
                                            "SCREEN", "SOUND", "QUIT TO ATTRACT", /* test 71: P2 CONTROLS (user) */
                                            "QUIT TO GAME SELECT"};
static const char *const pm_helps[PM_N] = { /* 35 characters at most; test 70: the user's */
	"RESUME GAME", "INVALIDATES SCORE IF NOT STAGE 1", "FULL RESTART FROM STAGE 1", "CUSTOMIZE CONTROLS",
	"CUSTOMIZE CONTROLS", "CUSTOMIZE GAME SCREEN", "CUSTOMIZE SOUND VOLUME", "RETURN TO TITLE",
	"QUIT TO MAIN MENU", /* test 76 (user's todo list: "change quit to game select help into 'quit to main menu'") */
};
static int pm_sel, pm_armed = -1, pm_pad;

/* the slot a row loads now, or -1 */
static int pm_slot(int row)
{
	if (!state_ok)
		return -1;
	switch (row) {
	case PM_STAGE: return stage_slot >= 0 && rt_state_ready(stage_slot) ? stage_slot : -1;
	case PM_FULL: return credit_on && rt_state_ready(SLOT_CREDIT) ? SLOT_CREDIT : -1;
	case PM_QUIT: return rt_state_ready(SLOT_ATTRACT) && attract_current() ? SLOT_ATTRACT : -1;
	}
	return -1;
}

static int pm_loads(int row)
{
	return row == PM_STAGE || row == PM_FULL || row == PM_QUIT;
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
	if (r == PM_QUIT && s < 0)
		return rt_state_ready(SLOT_ATTRACT) ? "HIGH SCORES CHANGED: NOT NOW" :
		       rt_state_stats.overflows ? "DROPPED: THE STATES' MEMORY FILLED" : "NO ATTRACT STATE YET";
	if (pm_loads(r) && s < 0)
		return "NO STATE KEPT FOR IT YET";
	if (pm_armed == r)
		return r == PM_QUIT ? "QUIT? A = YES, B = NO" : "RESTART? A = YES, B = NO";
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

/* the slot FULL RESTART's choice loads (-1: none possible now) */
static int fs_slot(void)
{
	return fs_same() ? pm_slot(PM_FULL) : pm_slot(PM_QUIT);
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

/* the box at bx, by (portrait pixels), bw x bh: a white edge around the picture at a quarter. Test 67: each texture
 * row written upward in memory (py from the box's bottom: x = GAME_W - 1 - py rises), so the write-combined stores
 * gather; test 66 wrote them downward and the box cost the game thread ~1.5 ms a frame on the 360 (its frame log's
 * conv with the menu open: 1532 us against 12 us in a run), enough to make one heavy attract frame late (EMU 19444) */
static void sm_box(volatile uint32_t *t, int bx, int by, int bw, int bh)
{
	int px, py;

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
static void ct_draw(volatile uint32_t *t, int s)
{
	const int bx = s ? GAME_H - CT_W - 6 : 6, by = 30, x0 = bx + 6, y0 = by + 6;
	char h[24];
	int i;

	sm_box(t, bx, by, CT_W, CT_H);
	snprintf(h, sizeof(h), "CONTINUE %dP %s", s + 1, sm_ships[s]);
	sm_text(t, x0, y0, C_YELLOW, h);
	sm_text(t, x0, y0 + 12, C_WHITE, "TYPE");
	for (i = 0; i < 4; i++) {
		const char c[2] = {(char)('A' + i), 0};
		sm_text(t, x0 + 6 * (6 + 3 * i), y0 + 12, i == ct_type[s] ? C_YELLOW : C_DIM, c);
	}
	sm_text(t, x0 + 6 * (5 + 3 * ct_type[s]), y0 + 12, C_YELLOW, ">");
}

static void sm_draw(void)
{
	static const char *const label[SM_ROWS] = {"PLAYER", "MODE", "TYPE", "DIP SWITCHES"};
	int s;

	for (s = 0; s < 2; s++) /* test 67 */
		if (ct_state[s] == CT_PICK) {
			ct_draw(gtex[tex_cur].texels, s);
			gtex_dirty[tex_cur] = 1;
		}
	volatile uint32_t *t = gtex[tex_cur].texels;
	const int ib = game_set == SET_IBARA;
	int i;

	if (sm_state == SM_OPEN) {
		/* test 81: the PLAY page = test 53's start menu, then DIP SWITCHES; Kuro BL's: PLAYER (its sides) and DIP
		 * SWITCHES. Test 82 (user: "make the play menu more intuitive to navigate (it's confusing that you scroll up/down
		 * and change vertically placed options with left/right)", then "one value with arrows"): each row one line, its
		 * value centred between arrows at fixed columns (10 and 21, the value's 8 columns between), yellow on the
		 * highlighted row; TYPE before MODE (sm_rows_*); the helps the user's */
		const int n = sm_nrows(), id = sm_rowid(sm_row), hy = OPT_HELP_Y(n), h = BOX_H(hy + 32);
		const int bx = (GAME_H - SM_W) / 2, by = (GAME_W - h) / 2, x0 = bx + 8, y0 = by + 6;
		char s[24];
		sm_box(t, bx, by, SM_W, h);
		sm_text(t, x0, y0, C_YELLOW, !ib ? "IBARA KURO BL  PLAY" : ARR ? "IBARA ARRANGE  PLAY" : "IBARA  PLAY");
		for (i = 0; i < n; i++) {
			const int r = sm_rowid(i), sel = i == sm_row, ly = y0 + 14 + 10 * i;
			sm_text(t, x0 + 6, ly, sel ? C_YELLOW : C_WHITE, label[r]);
			if (sel)
				sm_text(t, x0, ly, C_YELLOW, ">");
			if (r == SM_ROW_DIP) {
				if (dip_changed())
					sm_text(t, x0 + 6 * 16, ly, C_RED, "CHANGED");
				continue;
			}
			if (r == SM_ROW_PLAYER && ib)
				snprintf(s, sizeof(s), "%dP %s", sm_side + 1, sm_ships[sm_side]);
			else if (r == SM_ROW_PLAYER)
				snprintf(s, sizeof(s), "%dP SIDE", sm_side + 1);
			else if (r == SM_ROW_MODE)
				snprintf(s, sizeof(s), "%s", sm_modes[sm_mode % 3]);
			else
				snprintf(s, sizeof(s), "%c", 'A' + sm_type % 4);
			sm_text(t, x0 + 6 * 10, ly, sel ? C_YELLOW : C_DIM, "<");
			sm_text(t, x0 + 6 * 12 + (48 - 6 * (int)strlen(s)) / 2, ly, sel ? C_YELLOW : C_GREEN, s);
			sm_text(t, x0 + 6 * 21, ly, sel ? C_YELLOW : C_DIM, ">");
		}
		sm_help(t, x0, y0 + hy, C_CYAN, id == SM_ROW_DIP ? "SERVICE MENU GAME OPTIONS" : id == SM_ROW_TYPE ?
		        "SELECT SHIP TYPE" : id == SM_ROW_MODE ? "SELECT GAME MODE" : "1P OR 2P SIDE", (SM_W - 16) / 6);
		sm_text(t, x0, y0 + hy + 12, C_GREEN, "UP/DOWN ROW, LEFT/RIGHT SET");
		sm_text(t, x0, y0 + hy + 22, C_GREEN, id == SM_ROW_DIP ? "A = OPEN, START = PLAY" : "START / A = PLAY");
		sm_text(t, x0, y0 + hy + 32, C_GREEN, "B / BACK = MENU");
	} else if (sm_state == SM_DIP) { /* test 81 */
		int r[DIP_ROWS_MAX];
		const int nr = dip_rows(r), hy = OPT_HELP_Y(nr), h = BOX_H(hy + HELP2 + 32);
		const int bx = (GAME_H - OPT_W) / 2, by = (GAME_W - h) / 2, x0 = bx + 8, y0 = by + 6;
		char v[40];
		sm_box(t, bx, by, OPT_W, h);
		sm_text(t, x0, y0, C_YELLOW, !ib ? "IBARA KURO BL  DIP SWITCHES" : ARR ? "IBARA ARRANGE  DIP SWITCHES" :
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
		const int w = opt_page ? OPT_W : OPT0_W, gy = hy + HELP2 + 12; /* gy: the lines under the help */
		const int h = BOX_H(gy + (opt_page == OPT_PAGE_DEBUG ? 22 : opt_page == OPT_PAGE_SCREEN ? 20 : 10));
		const int bx = (GAME_H - w) / 2, by = (GAME_W - h) / 2, x0 = bx + 8, y0 = by + 6;
		const char *help = opt_helps[id];
		char v[40];
		sm_box(t, bx, by, w, h);
		sm_text(t, x0, y0, C_YELLOW, opt_page == OPT_PAGE_SCREEN ? "PAUSE  SCREEN" :
		                             opt_page == OPT_PAGE_GENERAL ? (ib ? "IBARA  GENERAL SCREEN" :
		                                                                  "IBARA KURO BL  GENERAL SCREEN") :
		                             opt_page ? (ib ? "IBARA  DEBUG MENU" : "IBARA KURO BL  DEBUG MENU") :
		                                        (!ib ? "IBARA KURO BL  MENU" : ARR ? "IBARA ARRANGE  MENU" :
		                                               "IBARA  MENU")); /* test 81: the one menu */
		for (i = 0; i < n; i++) {
			const int y = y0 + 14 + 10 * i, sel = i == opt_sels[opt_page], r = opt_row(i);
			opt_value(r, v, sizeof(v));
			if (sel)
				sm_text(t, x0, y, C_YELLOW, ">");
			sm_text(t, x0 + 6, y, sel && gsel_armed && r == OPT_GSEL ? C_RED : sel ? C_YELLOW :
			                      r == OPT_GSEL && !launcher_ok ? C_DIM : C_WHITE, opt_names[r]);
			sm_text(t, x0 + 6 * 15, y, sel ? C_YELLOW : C_GREEN, v);
		}
		if (id == OPT_SPECIAL && cfg.special != special_on)
			help = "LEAVING THE MENU RESTARTS THE GAME";
#ifdef IB_GAME
		else if (id == OPT_DEBUG) /* test 72: no GAME MENU row; test 82: ARRANGE's without SPECIAL MODE */
			help = ib && !ARR ? "SPECIAL MODE, DEBUG CARD,\nSAVE, LOGS" : "DEBUG CARD, SAVE, LOGS";
#else
		else if (id == OPT_DEBUG) /* test 67; test 70: DEBUG CARD there */
			help = ib ? "SPECIAL MODE, DEBUG CARD,\nSAVE, LOGS, GAME MENU" : "DEBUG CARD, SAVE, LOGS,\nGAME MENU";
#endif
		else if (id == OPT_GSEL) /* test 72 */
			help = !launcher_ok ? "NO IBARA360.XEX\nBESIDE THIS XEX" : gsel_armed ? "QUIT? A = YES, B = NO" : help;
		else if (id == OPT_PLAY) /* test 81; test 82: ARRANGE's the user's, ibara's in the rows' new order */
			help = !ib ? "PLAYER SIDE, DIP SWITCHES" : ARR ? "SELECT PLAYER AND SHIP TYPE" :
			             "PLAYER, TYPE, MODE,\nDIP SWITCHES";
		sm_help(t, x0, y0 + hy, id == OPT_GSEL && gsel_armed ? C_RED : C_CYAN, help, (w - 16) / 6);
		if (opt_page == OPT_PAGE_SCREEN) { /* test 69; test 70: A opens M3 GADGETS (no "A = OPEN" there either) */
			sm_text(t, x0, y0 + gy, C_GREEN, "LEFT/RIGHT CHANGE, A = CONFIRM");
			sm_text(t, x0, y0 + gy + 10, C_GREEN, "B / BACK = PAUSE MENU");
			sm_text(t, x0, y0 + gy + 20, C_GREEN, "START = RESUME");
		} else if (opt_page == OPT_PAGE_DEBUG) {
			sm_text(t, x0, y0 + gy, C_DIM, "* = FROM THE NEXT POWER-ON");
			sm_text(t, x0, y0 + gy + 12, C_GREEN, "LEFT/RIGHT CHANGE");
			sm_text(t, x0, y0 + gy + 22, C_GREEN, "B / BACK = MENU");
		} else if (opt_page == OPT_PAGE_GENERAL) {
			sm_text(t, x0, y0 + gy, C_GREEN, "LEFT/RIGHT CHANGE");
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
		snprintf(v, sizeof(v), "%s  P%d CONTROLS", ib ? "IBARA" : "IBARA KURO BL", ctl_pad + 1);
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
		sm_text(t, x0, y0 + hy, C_CYAN, help);
		if (menu_paused) { /* test 70: test 69's one line ran past the box's edge (user) */
			sm_text(t, x0, y0 + hy + 12, C_GREEN, "B / BACK = PAUSE MENU");
			sm_text(t, x0, y0 + hy + 22, C_GREEN, "START = RESUME");
		} else {
			sm_text(t, x0, y0 + hy + 12, C_GREEN, "B / BACK = MENU");
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
			"BOSS HP AND TIMER", "INDIVIDUAL STAGE SCORES,\nRED = INVALID", "CURRENT TRACK AND ARTIST",
			"XTREME TERROR COUNTER /\nGRAZE WINDOW SIZE", /* test 76 (user: XTC, Kuro BL's); test 77: the user's text */
		};
		const int all = gp_all();
		const int n = gp_nrows(), hy = OPT_HELP_Y(n), gy = hy + HELP2 + 12, h = BOX_H(gy + 12), g = gp_row(gp_sel);
		const int bx = (GAME_H - OPT_W) / 2, by = (GAME_W - h) / 2, x0 = bx + 8, y0 = by + 6;
		sm_box(t, bx, by, OPT_W, h);
		sm_text(t, x0, y0, C_YELLOW, ib ? "IBARA  M3 GADGETS" : "IBARA KURO BL  M3 GADGETS");
		for (i = 0; i < n; i++) { /* test 70: the values a column further (SPECIAL FORMATIONS' 18 letters) */
			const int y = y0 + 14 + 10 * i, sel = i == gp_sel, r = gp_row(i);
			if (sel)
				sm_text(t, x0, y, C_YELLOW, ">");
			sm_text(t, x0 + 6, y, sel ? C_YELLOW : C_WHITE, r < GD_N ? gadgets_names[r] : r == GP_COOP ? "CO-OP" : "ALL");
			if (r < GD_N) /* test 67: CONTROLS STICK / TEXT / OFF */
				sm_text(t, x0 + 6 * 20, y, sel ? C_YELLOW : cfg.gadget[r] ? C_GREEN : C_DIM,
				        !cfg.gadget[r] ? "OFF" : r != GD_CONTROLS ? "ON" : cfg.ctl_text ? "TEXT" : "STICK");
			else if (r == GP_COOP) /* test 71 */
				sm_text(t, x0 + 6 * 20, y, sel ? C_YELLOW : cfg.coop ? C_GREEN : C_DIM, cfg.coop ? "ON" : "OFF");
			else /* test 68 */
				sm_text(t, x0 + 6 * 20, y, sel ? C_YELLOW : all ? C_GREEN : C_DIM,
				        all == 1 ? "ON" : all == 0 ? "OFF" : "MIXED");
		}
		sm_help(t, x0, y0 + hy, C_CYAN, g < GD_N ? helps[g] : g == GP_COOP ? "P1 AND P2 GADGETS WHILE CO-OP\n"
		        "PLAY IS ACTIVE" : "TOGGLE ALL GADGETS ON/OFF", 35); /* test 82: CO-OP's the user's */
		sm_text(t, x0, y0 + gy, C_DIM, "LEFT/RIGHT: TOGGLE ON/OFF"); /* test 69: no GADGETS row any more; test 82 */
		sm_text(t, x0, y0 + gy + 12, C_GREEN, menu_paused ? "B / BACK = SCREEN, START = RESUME" : "B / BACK = MENU");
	} else if (sm_state == SM_SOUND) { /* test 68; test 69: the pause's without the tests (user: "minus the sound test") */
		const int nr = menu_paused ? SR_MTEST : SR_N, hy = OPT_HELP_Y(nr), h = BOX_H(hy + 24 + (menu_paused ? 10 : 0));
		const int bx = (GAME_H - OPT_W) / 2, by = (GAME_W - h) / 2, x0 = bx + 8, y0 = by + 6;
		const struct snd_track tr = snd_track_of(snd_track);
		const char *help;
		char v[40], d[40];
		sm_box(t, bx, by, OPT_W, h);
		sm_text(t, x0, y0, C_YELLOW, menu_paused ? "PAUSE  SOUND" : ib ? "IBARA  SOUND" : "IBARA KURO BL  SOUND");
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
			} else if (i == SR_MTEST) {
				snprintf(v, sizeof(v), "%02d %s", snd_track + 1, tr.name);
				c = snd_music_on ? C_CYAN : C_GREEN;
			} else {
				snprintf(v, sizeof(v), "%d %s", SND_VOICE0 + snd_voice, snd_voices[snd_voice]);
			}
			if (sel)
				sm_text(t, x0, y, C_YELLOW, ">");
			sm_text(t, x0 + 6, y, sel ? C_YELLOW : C_WHITE, sr_names[i]);
			sm_text(t, x0 + 6 * 12, y, sel ? C_YELLOW : c, v);
		}
		if (snd_sel < SR_MTEST) {
			help = sr_helps[snd_sel];
			snprintf(d, sizeof(d), "LEFT/RIGHT CHANGE");
		} else if (snd_sel == SR_MTEST) {
			/* test 71 (user: "use better wording for the grey line for music test"): what the track does, not its
			 * sequence numbers (the log still has them) */
			help = snd_music_on ? "PLAYING: A = STOP" : "LEFT/RIGHT CHOOSE, A = PLAY";
			if (tr.loop < 0)
				snprintf(d, sizeof(d), "PLAYS ONCE");
			else if (tr.loop == tr.intro)
				snprintf(d, sizeof(d), "LOOPS UNTIL STOPPED");
			else
				snprintf(d, sizeof(d), "INTRO, THEN LOOPS UNTIL STOPPED");
		} else {
			help = "LEFT/RIGHT CHOOSE, A = PLAY";
			snprintf(d, sizeof(d), "GAME AUDIO FADES OUT"); /* test 71: the user's */
		}
		sm_text(t, x0, y0 + hy, C_CYAN, help);
		sm_text(t, x0, y0 + hy + 12, C_DIM, menu_paused ? "HEARD ONCE THE GAME GOES ON" : d);
		if (menu_paused) { /* test 70: test 69's one line ran past the box's edge (user) */
			sm_text(t, x0, y0 + hy + 24, C_GREEN, "B / BACK = PAUSE MENU");
			sm_text(t, x0, y0 + hy + 34, C_GREEN, "START = RESUME");
		} else {
			sm_text(t, x0, y0 + hy + 24, C_GREEN, "B / BACK = MENU");
		}
	} else if (sm_state == SM_PAUSE) { /* test 69: the pause menu */
		const int hy = OPT_HELP_Y(PM_N), h = hy + 34;
		const int bx = (GAME_H - OPT_W) / 2, by = (GAME_W - h) / 2, x0 = bx + 8, y0 = by + 6;
		sm_box(t, bx, by, OPT_W, h);
		sm_text(t, x0, y0, C_YELLOW, ib ? "IBARA  PAUSE" : "IBARA KURO BL  PAUSE");
		for (i = 0; i < PM_N; i++) {
			const int y = y0 + 14 + 10 * i, sel = i == pm_sel;
			const int can = i == PM_GSEL ? launcher_ok : !pm_loads(i) || pm_slot(i) >= 0; /* test 72 */
			const uint32_t c = sel && pm_armed == i ? C_RED : sel ? C_YELLOW : can ? C_WHITE : C_DIM;
			if (sel)
				sm_text(t, x0, y, c, ">");
			sm_text(t, x0 + 6, y, c, pm_names[i]);
		}
		sm_text(t, x0, y0 + hy, pm_armed == pm_sel ? C_RED : C_CYAN, pm_help());
		sm_text(t, x0, y0 + hy + 12, C_GREEN, pm_armed == pm_sel ? "START = RESUME" : "B / BACK / START = RESUME");
	} else if (sm_state == SM_GSEL) { /* test 72: GAME SELECT, while the files are finished */
		const int h = BOX_H(14), bx = (GAME_H - OPT0_W) / 2, by = (GAME_W - h) / 2, x0 = bx + 8, y0 = by + 6;
		sm_box(t, bx, by, OPT0_W, h);
		sm_text(t, x0, y0, C_YELLOW, ib ? "IBARA  GAME SELECT" : "IBARA KURO BL  GAME SELECT");
		sm_text(t, x0, y0 + 14, C_WHITE, "SAVING SYSTEM FILE..."); /* test 77 (user); test 82: the user's */
	} else if (sm_state == SM_FULLSEL) { /* test 70: FULL RESTART's side and ship */
		/* test 71 (user): no "A NEW CREDIT FROM THE TITLE" / "THE RUN'S FIRST STAGE, AT ONCE" line; only why A cannot
		 * restart, in red, when it cannot */
		const int ok = fs_slot() >= 0;
		const int iy = OPT_HELP_Y(FS_ROWS), hy = iy + (ok ? 0 : 12), h = BOX_H(hy + 32);
		const int bx = (GAME_H - OPT_W) / 2, by = (GAME_W - h) / 2, x0 = bx + 8, y0 = by + 6;
		char v[40];
		sm_box(t, bx, by, OPT_W, h);
		sm_text(t, x0, y0, C_YELLOW, ib ? "IBARA  FULL RESTART" : "IBARA KURO BL  FULL RESTART");
		for (i = 0; i < FS_ROWS; i++) {
			const int y = y0 + 14 + 10 * i, sel = i == fs_row, nk = i == FS_SHIP && ib ? 4 : 2;
			int k;
			if (sel)
				sm_text(t, x0, y, C_YELLOW, ">");
			sm_text(t, x0 + 6, y, sel ? C_YELLOW : C_WHITE, i == FS_PLAYER ? "PLAYER" : ib ? "TYPE" : "SHIP");
			for (k = 0; k < nk; k++) { /* columns: 1P BOND 10, 2P DYNE 19; A-D 10, 13, 16, 19; SAME 10, SELECT AGAIN 16 */
				const int on = i == FS_PLAYER ? k == fs_side : ib ? k == fs_type : k == fs_again;
				const int col = i == FS_PLAYER ? 10 + 9 * k : ib ? 10 + 3 * k : 10 + 6 * k;
				if (i == FS_PLAYER && ib)
					snprintf(v, sizeof(v), "%dP %s", k + 1, sm_ships[k]);
				else if (i == FS_PLAYER)
					snprintf(v, sizeof(v), "%dP SIDE", k + 1);
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
		return;
	}
	gtex_dirty[tex_cur] = 1;
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
	if (!one || !game_running || q_emu[slot] < BOOT_FRAMES)
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
		 * handed one over since; otherwise the game alone, centred on black */
		show = !game_running || (card_on && card_handoffs != card_on_at);
		/* test 58: GADGETS: the artwork under the game alone; test 60: both games, 16:9 or tate on 16:9 or 4:3 */
		view = !show && cfg.gadgets && gd_stats.ready ? gadgets_view() : GV_NONE;
		gadgets_mask(settings_gadget_mask()); /* test 64: the M3 GADGETS page's */
		gadgets_style(cfg.ctl_text, cfg.coop); /* test 71: every frame (the pause's changes at once) */
		xsdk_gpu_set_target((uint32_t)fb_w, (uint32_t)fb_h);
		if (view != GV_NONE)
			gadgets_draw(0, view, frames_queued, s.flips);
		xsdk_gpu_set_shaders(&vs, &ps);
		xsdk_built_shader_set_literals(&quad_vert);
		xsdk_built_shader_set_literals(&quad_frag);
		{
			const struct vb *g = show ? &vb_game : cfg.picture == PIC_FULL ? &vb_full : &vb_int;
			if (!g->verts)
				g = &vb_game;
			/* test 69 (user: "full picture is blurry. remove smoothing"): point sampling at every size */
			xsdk_gpu_set_texture(QUAD_FRAG_SAMPLER_0_0, &gtex[tex_cur], &samp_point);
			xsdk_gpu_set_vertices(0, g->address, g->bytes);
			xsdk_gpu_draw(XSDK_PRIMITIVE_TRIANGLE_LIST, g->verts);
		}
		if (!show && scan_quads) { /* test 37: picture = picture * grey */
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
		/* the next frame lands on this clear */
		xsdk_gpu_resolve(address, (uint32_t)fb_w, (uint32_t)fb_h, game_running && !card_on ? C_BLACK : CLEAR_BORDER);
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
	if (!vblank_reached(&due)) {
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

/* a press on the menu's pad; 1 = the menu changed, *done: the pause ends (state_load_slot set for a load) */
static int pause_input(uint32_t press, int *done)
{
	const int back = (press & (A_MB | A_COIN)) != 0;

	if (sm_state == SM_PAUSE) {
		if (press & (A_UP | A_DOWN)) {
			pm_sel = (pm_sel + PM_N + (press & A_UP ? -1 : 1)) % PM_N;
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
		case PM_CONTROLS:
		case PM_CONTROLS2: /* test 71 */
			ctl_open(pm_sel == PM_CONTROLS2);
			return 1;
		case PM_SCREEN:
			sm_state = SM_OPTS;
			opt_page = OPT_PAGE_SCREEN;
			if (opt_sels[OPT_PAGE_SCREEN] >= opt_nrows())
				opt_sels[OPT_PAGE_SCREEN] = 0;
			log_printf(C_WHITE, "PAUSE: SCREEN (EMU %u)", (unsigned)frame_count);
			return 1;
		case PM_SOUND:
			snd_open();
			if (snd_sel >= SR_MTEST)
				snd_sel = 0;
			return 1;
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
			if (pm_slot(pm_sel) < 0)
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
			state_load_why = pm_names[pm_sel];
			/* test 70 (user: "if a stage restart is applied to stage 1, and only stage 1 (no loop 2 stage 1 in extended
			 * mode), don't invalidate the score"): red for a later stage only */
			state_load_red = pm_sel == PM_STAGE && slot_stage[state_load_slot] != 0;
			log_printf(C_YELLOW, "PAUSE: %s (EMU %u)", pm_names[pm_sel], (unsigned)frame_count);
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
			state_load_play = !fs_same();
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
			sm_state = SM_PAUSE;
			log_printf(C_WHITE, "CONTROLS: BACK TO THE PAUSE MENU");
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
		if (id == OPT_M3) {
			if (press & A_MA)
				gp_open();
		} else {
			if (press & A_LEFT)
				opt_step(id, -1);
			if (press & (A_RIGHT | A_MA))
				opt_step(id, 1);
		}
		if (back && sm_state == SM_OPTS) {
			sm_state = SM_PAUSE;
			log_printf(C_WHITE, "PAUSE: SCREEN, BACK TO THE PAUSE MENU");
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
			sm_state = SM_OPTS;
			log_printf(C_WHITE, "M3 GADGETS: BACK TO THE SCREEN PAGE");
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
			sm_state = SM_PAUSE;
			log_printf(C_WHITE, "SOUND: BACK TO THE PAUSE MENU");
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
	unsigned vb = 0, ms;
	int p, by = -1, done = 0, dirty = 1;
	const char *how = "";

	pauses++;
	sound_paused = 1;
	log_printf(C_YELLOW, "PAUSE: MENU AT EMU %u (PAD %d BACK), %u.%u MS OF SOUND KEPT QUEUED", (unsigned)frame_count, pad,
	           cush * 10 / 48 / 10, cush * 10 / 48 % 10);
	for (p = 0; p < NPADS; p++)
		last[p] = pad_word[p];
	menu_paused = 1;
	sm_state = SM_PAUSE;
	pm_pad = pad;
	pm_sel = PM_RESUME;
	pm_armed = -1;
	opt_changes = 0;
	while (!done) {
		if (dirty) {
			pause_redraw();
			dirty = 0;
		}
		present();
		vb++;
		for (p = 0; p < NPADS && !done; p++) {
			const uint32_t w = pad_word[p], press = w & ~last[p];
			last[p] = w;
			if (press & A_START) {
				done = 1;
				by = p;
				how = "START";
			} else if (p == pm_pad && press) {
				dirty |= pause_input(press, &done);
				if (done) {
					by = p;
					how = state_load_slot >= 0 || gsel_req ? pm_names[pm_sel] : press & A_MA ? "RESUME" : "B / BACK";
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
	sm_state = SM_CLOSED;
	menu_paused = 0;
	for (p = 0; p < 2; p++) {
		/* the menu's buttons, not the stick; test 70: none after a restart (the slot's moment may have the bomb held for
		 * a Hadou, the user holds it on: test 69 kept it from the game, which took that for its release) */
		pause_hold[p] = state_load_slot >= 0 && state_load_slot != SLOT_ATTRACT ? 0 :
		                last[p] & ~(uint32_t)(A_UP | A_DOWN | A_LEFT | A_RIGHT);
		pause_prev[p] = last[p];
	}
	sound_paused = 0;
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
	const int red = state_load_why ? state_load_red : s != SLOT_ATTRACT && s >= 0 && slot_stage[s] > 0;
	const int play = state_load_play && s == SLOT_ATTRACT;
	char t[24];
	int p;

	state_load_slot = -1;
	state_load_red = state_load_play = 0;
	if (!rt_state_ready(s)) {
		log_printf(C_RED, "STATE: SLOT %d IS NOT THERE, NOTHING LOADED (EMU %u)", s, (unsigned)frame_count);
		return;
	}
	state_loads++;
	stage_name(t, sizeof(t), slot_stage[s]);
	rec_state((uint32_t)frame_count, 1, s);
	log_printf(C_YELLOW, "STATE: %s AT EMU %u: %s AS AT EMU %u%s", why, (unsigned)frame_count, t,
	           (unsigned)rt_state_stats.taken_frame[s], red ? ", THE SCORE RED" : "");
	state_load_why = NULL;
	gadgets_state_load(s, red);
	arrhud_reset(); /* test 79 */
	if (s == SLOT_ATTRACT) { /* the runtime drops the credit's and the stage's */
		credit_on = 0;
		stage_slot = -1;
		st_prev = -1;
	} else {
		st_prev = slot_stage[s];
		if (s == SLOT_CREDIT)
			stage_slot = SLOT_CREDIT; /* the stage's slot was taken after it: dropped */
	}
	st_out = 0;
	sm_state = SM_CLOSED;
	sm_check_at = 0;
	sm_runhold = 0;
	host_reapply_due = 1; /* test 81: the slot's RAM has the settings of its moment */
	sm_after = 0;
	/* test 70 (user: "upon quitting to attract and pressing start again quickly, the game skipped the start menu and
	 * immediately started another run"): the attract's slot is idle by its making (the logos or the title outside a run),
	 * so Start opens the menu at once; test 69 counted SM_IDLE vblanks from the load and a Start meanwhile reached the
	 * title, which started a credit */
	sm_idle = s == SLOT_ATTRACT ? SM_IDLE : 0;
	if (s == SLOT_ATTRACT)
		log_printf(C_WHITE, "MENU: START OPENS THE MENU FROM EMU %u (THE ATTRACT LOADED)", (unsigned)frame_count);
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
		sm_play();
	}
	run_left = 0;
	tex_ok = 0;
	t_resume = tb_read();
	rt_state_load(s);
}

/* host_vblank, before the next frame's inputs: the run, and BACK's press on pad 0 or 1 */
static void pause_frame(void)
{
	int p, pad = -1;

	run_track();
	for (p = 0; p < 2; p++) {
		const uint32_t w = pad_word[p];
		if ((w & ~pause_prev[p] & A_COIN) && pad < 0)
			pad = p;
		pause_prev[p] = w;
	}
	if (pad >= 0 && in_run && cfg.back_pause && sm_state == SM_CLOSED)
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
	vquads = 2 + (unsigned)h * LAYOUT_QUADS;
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
	st = xsdk_texture_create(&gtex[0], XSDK_FORMAT_A8R8G8B8, GAME_W, GAME_H, 1, false);
	if (NT_SUCCESS(st)) /* test 42: two game textures */
		st = xsdk_texture_create(&gtex[1], XSDK_FORMAT_A8R8G8B8, GAME_W, GAME_H, 1, false);
	for (i = 0; i < 2 && NT_SUCCESS(st); i++)
		st = xsdk_texture_create(&ctex[i], XSDK_FORMAT_A8R8G8B8, CARD_W, CARD_H, 1, false);
	if (!NT_SUCCESS(st)) {
		xsdk_log_write("video: xsdk_texture_create failed: 0x%08X", (unsigned)st);
		return -1;
	}
	vmem = xsdk_gpu_alloc(VB_QUADS * QUAD_BYTES);
	if (!vmem) {
		xsdk_log_write("video: xsdk_gpu_alloc of the quads failed");
		return -1;
	}
	st = xsdk_present_open(XSDK_DISPLAY_720P, 2, 1, &w, &h);
	if (!NT_SUCCESS(st)) {
		xsdk_log_write("video: xsdk_present_open failed: 0x%08X", (unsigned)st);
		return -1;
	}
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

/* The runtime calls this at every emulated vblank (frame_count = vblanks before it).
 * One emulated frame per displayed frame: game (CPU, waiting for the bands), screen
 * conversion, present (card, GPU, the flip), then the pads for the next frame. */
void host_vblank(sh3_t *c)
{
	uint64_t t0 = tb_read(), emu = t0 - t_resume, w_emu = wait_ticks - wait_seen;
	uint64_t t1, conv, cpu, host, now_cyc, w, exec;
	uint32_t hsum;
	int b, late_after_load = 0;

	hsum = screen_frame(); /* waits for the bands; test 14: the hash goes into the recording */
	arrhud_frame(); /* test 79: ARRANGE's HUD: its own state a step a game frame, then over the picture, after the hash */
	if (ARR) {
		const uint64_t h0 = tb_read();
		if (hud_draw(gtex[tex_cur].texels, gtex_pitch, tex_sx, tex_sy, tex_fresh))
			gtex_dirty[tex_cur] = 1;
		hud_time(tb_read() - h0);
		arr_watch();
	}
	sm_draw();             /* test 51: over the picture, after the hash */
	t1 = tb_read();
	if (checking())
		check_frame((unsigned)frame_count, hsum);
	w = wait_ticks - wait_seen;       /* all waits this frame */
	conv = (t1 - t0) - (w - w_emu);   /* not the check's RAM hash (after t1; test 17b times it) */
	cpu = emu - w_emu;
	pcb_frame();
	eeprom_frame((uint32_t)frame_count, rtc9701_eeprom()); /* test 33: a save once it settles */
	if (gd_stats.ready) { /* test 58: the GADGETS values as the game left them this frame */
		struct gd_input in;
		in.port_d = in_port_d;
		in.port_l = in_port_l;
		in.port_c = in_port_c; /* test 79: ARRANGE's aim lock */
		in.pad[0] = pad_word[pad_swap];
		in.pad[1] = pad_word[pad_swap ^ 1];
		in.af_bit = A_AUTO;
		for (int sd = 0; sd < 2; sd++) { /* test 71: each side's pad's controls (side s = pad s ^ pad_swap) */
			in.af_hz[sd] = af_hz(sd ^ pad_swap);
			for (int k = 0; k < GD_KEYS; k++)
				in.keys[sd][k] = gd_keys[sd ^ pad_swap][k];
		}
		in.logic = BE32(RAMP(LOGIC_WORD)) >> 16;
		in.pilot = credit_on ? cr_side : sm_side; /* test 71: the run's pilot (the credit's side), else the menu's */
		in.dip_changed = dip_changed(); /* test 81: the SCORE red */
		gadgets_frame(&in);
	}

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
		const int is_late = disp.period * 2 > disp.vbl * 3 && game_frames > 0;
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
	if (state_load_slot < 0)
		state_load_slot = REPLAY_LOAD((unsigned)frame_count); /* test 69: the PC harness replays a recording's loads */
	if (state_load_slot >= 0)
		state_load_now(); /* test 69: returns only when there was no such slot */
	inputs_update();
	state_frame(); /* test 69: the save states this vblank asks for */
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
	if (arrgfx_unpack() || arrgfx_u2((uint8_t *)u2, n2)) { /* test 81 */
		log_printf(C_RED, "ARRANGE: THE PS2 PICTURES (GEN/ARRGFX) DID NOT UNPACK OR THIS U2 IS NOT THEIRS, NOT STARTING");
		for (;;)
			present();
	}
	log_printf(C_GREEN, "ARRANGE: U2 FILE 882 = THE ENDING'S PDM 944, PAGE 876'S LABEL = ARRANGE MODE (THE PS2'S)");
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
	{ /* test 58; test 60: both games */
		const uint64_t t = tb_read();
		gadgets_target(fb_w, fb_h);
		if (gadgets_init(game_set == SET_IBARABLK) == 0)
			log_printf(C_GREEN, "GADGETS: READY IN %u MS (%s, %s; THE ARTWORK %dX%d, 4:3 PANEL %dX%d, TATE BANDS %dX%d, "
			           "ATLAS %dX%d)", tb_us(t, tb_read()) / 1000, game->tag, cfg.gadgets ? "ON" : "OFF IN THE INI",
			           CARD_BG_W, CARD_BG_H, CARD_P43_W, CARD_P43_H, CARD_TATE_W, CARD_TATE_H, CARD_ATLAS_W,
			           CARD_ATLAS_H);
	}
	if (ARR) { /* test 80: the HUD's tables and glyph runs now, not in a run's first frame */
		const uint64_t t = tb_read();
		const int runs = arrhud_init();
		log_printf(C_GREEN, "HUD: READY IN %u US (%d POPUP GLYPH RUNS%s)", tb_us(t, tb_read()), runs,
		           runs < 0 ? ": TOO MANY, THE POPUPS DRAWN PIXEL BY PIXEL" : "");
	}
	log_printf(C_YELLOW, "PADS: PAD0 = P1, PAD1 = P2 (EACH ITS OWN CONTROLS). D-PAD/LEFT STICK, START = START, R3 = TEST "
	           "(S3)");
	controls_log("PADS:");
	log_printf(C_YELLOW, "PADS: BACK = COIN, IN A RUN = THE PAUSE MENU (START RESUMES)"); /* test 69 */
	/* test 51; test 53: rows, BACK = the options page; test 70: Kuro BL's start menu (PLAYER), no page but it plays;
	 * test 81: one menu, PLAY its first row; test 82: its rows' order */
	log_printf(C_YELLOW, "PADS: START IN THE ATTRACT = THE MENU (UP/DOWN ROW, A CONFIRMS, B/BACK GO BACK); ITS PLAY "
	           "PAGE: %s, LEFT/RIGHT SET, START/A PLAY", game_set != SET_IBARA ? "PLAYER, DIP SWITCHES" :
	           ARR ? "PLAYER, TYPE" : "PLAYER, TYPE, MODE, DIP SWITCHES");
	log_printf(C_GREEN, "TIMING: PCB FIT+ 3.75%%");
	/* test 52: the special version = S2 switch 2 on from power-on, A+B held (inputs_update);
	 * test 53: the recording's "# dsw" lines from rec_dsw */
	special_on = game_set == SET_IBARA && !ARR && cfg.special;
	in_dsw = special_on ? DSW_SPECIAL : 0;
	rec_dsw = in_dsw;
	if (special_on)
		log_printf(C_YELLOW, "SPECIAL: DIP S2 SWITCH 2 ON, A+B ON THE 1P SIDE FOR VBLANKS 0-%u AND AT EVERY R3 (TEST)",
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
		n = avail_mb > STATE_MARGIN_MB + 24 ? (avail_mb - STATE_MARGIN_MB - 24) * 128 : 0; /* 24 MB: the slots' RAM */
		if (n > STATE_POOL_MAX)
			n = STATE_POOL_MAX;
		rt_copy = copy_parallel;
		rt_state_taken = state_taken;
		for (; n >= STATE_POOL_MIN && !state_ok; n -= 512)
			state_ok = rt_state_init(n) == 0;
		if (state_ok)
			log_printf(C_GREEN, "STATE: 3 SLOTS (ATTRACT, CREDIT, STAGE) OF 8 MB RAM EACH, A VRAM POOL OF %u BLOCKS (%u MB; %u MB "
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

	log_printf(C_WHITE, "IBARA360 TEST " XEX_TEST XEX_GAME " XEX (TEST 81 XEX; TEST 82: THE TODO LIST'S TEXTS, PLAY ROWS WITH "
	           "ARROWS, NO RUN GADGETS IN THE DEMOS, MANUAL = THE HIGHEST RATE, DIP SWITCHES KEEP THE ATTRACT ONCE%s)",
	           ARR ? "; ARRANGE: BULLET DESIGN IN GENERAL SCREEN, NO STAGE NAMES" : "");
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
	layout_apply("THE INI");              /* test 48: the ini's aspect over the console's; test 53: all the layouts */
	netlog_start(cfg.netlog, cfg.netlog_port, "IBARA360 TEST " XEX_TEST XEX_GAME " XEX"); /* test 40: the IO thread listens */
	netlog_started = cfg.netlog;
	launch_get(&launch_in); /* test 72: how this title was started, and the launcher beside it */
	launcher_ok = launch_exists(LAUNCHER_XEX);
	log_printf(launcher_ok ? C_WHITE : C_YELLOW, "LAUNCH: %s %s BESIDE THIS XEX%s", LAUNCHER_XEX,
	           launcher_ok ? "IS" : "IS NOT", launcher_ok ? " (GAME SELECT IN THE OPTIONS AND THE PAUSE)" : "");
	game_set = game_choose();
	if (game_set >= 0) {
		game = &games[game_set];
		game_chosen = 1;
	}
	romload_choose(game_set);
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
	xsdk_log_write("ibara360: test " XEX_TEST XEX_GAME " xex, built " __DATE__ " " __TIME__);
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

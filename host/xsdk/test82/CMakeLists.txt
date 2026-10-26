# ibara360 test 82 (test 81 + the user's todo list of 2026-10-26 22:14: the menus' texts, the PLAY page's rows as one
# value between arrows (TYPE before MODE; ARRANGE: PLAYER and TYPE only), ARRANGE's BULLET DESIGN on GENERAL SCREEN and
# no SPECIAL MODE, ibara's controls without RAPID SHOT / BUTTON 4, CONTROLS' MANUAL (the highest rate since the last
# death), no run gadgets in the attract's demos, the attract state kept again once DIP SWITCHES is left: source/main.c,
# source/gadgets.c, source/settings.c; ARRANGE without the stage names: arrange/, gen/ibaraarr*; the launcher stays
# test 81's).
# ibara360 test 81 (test 80 + the user's todo list and ARRANGE's extras: one menu with PLAY / DIP SWITCHES, START left
# to the game from a run's end to the logos, ARRANGE's continue, BULLET DESIGN, its ending picture, its own score table,
# GADGETS' WEAPON / NEXT DROP for ARRANGE, the launcher's PS2 ARRANGE menu: source/main.c, source/gadgets.c,
# source/arrhud.c, source/settings.c, source/recorder.c, arrange/, gen/arrgfx, launcher/).
# ibara360 test 80 (test 79 + ARRANGE's HUD drawn faster: the popups as their glyphs' opaque runs, blended through
# per-alpha tables, only the touched 16-pixel blocks written (source/arrhud.c); the pad buttons and ARRANGE's X / Y /
# RB changes in the log (source/main.c); only ibaraarr.xex ships, the other three stay test 79's).
# ibara360 test 79 (test 78 + ARRANGE's HUD drawn by the 360 (source/arrhud.c, gen/arrhud), the kill fix, the 9-digit
# scores, ARRANGE's dates and copyright (arrange/, gen/ibaraarr*), GADGETS' CONTROLS and SPECIAL FORMATIONS for ARRANGE
# (source/gadgets.c, gen/card's *_A sprites), the launcher's ARRANGE date (launcher/launcher.c)).
# ibara360 test 77 (test 76 + the user's todo list: the games' GAME SELECT box "SAVING...", the XTC row's help, the
# launcher's sounds and music at 0.9; and the PS2 port's ARRANGE mode as ibaraarr.xex: arrange/ (SH-3 C) and
# tools/arrange/ -> gen/ibaraarr, gen/ibaraarr_drc; the launcher's ARRANGE MODE row, gen/launcher from mklaunch.py).
# ibara360 test 76 (test 75 + the user's todo list: the games' QUIT TO GAME SELECT help "QUIT TO MAIN MENU", the
# launcher's EXIT without "A = EXIT", its title's ©2005-2006-2026 CAVE Interactive CO.,LTD. line, its sound effects at
# half: source/main.c, launcher/launcher.c, launcher/lsound.c; Kuro BL's XTC gadget: source/gadgets.c, gen/card from
# tools/card/mkcard.py --blkships).
# ibara360 test 75 (test 74 + the launcher's GALLERY, the PS2 port's, with its music, and the games' Japanese names:
# launcher/launcher.c, launcher/lsound.c with minimp3.h (CC0); gen/launcher from tools/launcher/mklaunch.py and
# mkgallery.py; only ibara360.xex is new, the games are test 74's).
# ibara360 test 72 (test 71 + EXTEND in STATUS: source/gadgets.c, source/main.c; one .xex per game and a launcher,
# user 2026-10-25: "split the two games into individual xex files and develop a new launcher, using assets and sounds
# from the playstation 2 port"): three titles from this project, beside each other in one folder:
#   ibara.xex     the game ibara       (IB_GAME=0: gen/ibara_drc only, its GADGETS art, its attract check)
#   ibarablk.xex  the game Kuro BL     (IB_GAME=1: gen/ibarablk_drc only)
#   ibara360.xex  the launcher         (launcher/: the PS2 port's mode select look and sounds, gen/launcher from
#                                       tools/launcher/mklaunch.py), keeping the name the dashboard already knows
# They hand the console to each other with XAM's loader (source/xam_loader.S, source/launch.c).
# test 71 (test 70 + P1 / P2 CONTROLS (each pad its own buttons and AUTO SHOT rate), GADGETS' co-op, 4:3 as
# two columns over the run's pilot's panel, the BOSS's settle, the menu texts: source/main.c, source/gadgets.c,
# source/settings.c; gen/card from tools/card/mkcard.py --ps2 --booklet with tools/card/ps2art.py);
# test 70 (test 69 + restarts keeping a Hadou, FULL RESTART's choice, GENERAL SCREEN, SPECIAL FORMATIONS list);
# ibara360 test 69 (test 68 + the pause menu with save states: runtime/state.c, the CALL macro's safe point in
# runtime/recomp.h, source/main.c; no GADGETS or BACK IN A RUN options: source/settings.c; FULL unsmoothed; ibara's
# CONTROLS text with AUTO / NOW: source/gadgets.c; Bond's shadow under the right plates: gen/card from
# tools/card/mkcard.py --bond);
# test 66 (test 65 + the start menu only outside a run, the options kept through the demos: source/main.c;
# no backing under the plates over the silhouettes: source/gadgets.c, gen/card from tools/card/mkcard.py);
# test 65 (test 64 + GADGETS: STATUS, tate 2 x 2, 4:3 at 75%, STAGES switch fixed: source/gadgets.c, source/main.c, gen/card from tools/card/mkcard.py);
# test 64 (test 63 + GADGETS revised: every plate its own sprite, toggled one by one from the options'
# M3 GADGETS page, 2.5% smaller, WEAPON 8 rows with HADOU and RAPID, Kuro BL's weapon box, STAGES (the stage scores),
# rank 100%, the boss's HP at the left: source/gadgets.c, source/settings.c, source/main.c, gen/card from
# tools/card/mkcard.py --blklogo; XEX_TEST "64");
# test 63 (test 62 + gen/ibara_drc 1335 = work/g63/missed_ibara5.txt; runtime/blitter.c blitter_job_win and
# source/main.c's early conversion: a frame shown without waiting for a job that draws off screen; XEX_TEST "63");
# test 62 (test 61 + every boss's GADGETS time counting down: source/bossclock.c, source/gadgets.c;
# source/main.c XEX_TEST "62");
# test 61 (test 60 + GADGETS revised: large score, MUSIC under BOSS, ibara's FORMATION and RAPID, one side's
# controls 5% smaller: source/gadgets.c, gen/card from tools/card/mkcard.py --blklogo; source/main.c XEX_TEST "61");
# test 60 (test 59 + GADGETS for Kuro BL, 4:3 and tate, EXT counting down: source/gadgets.c, gen/card from
# tools/card/mkcard.py --blklogo; gen/ibara_drc 1331 = work/g60/missed_ibara4.txt; source/main.c "test 60");
# test 59 (test 58 with its info card called GADGETS: source/gadgets.c, the options row, the log, the ini key;
# source/main.c "test 59");
# test 58 (test 57 + ibara's info card: source/infocard.c, shaders/card.vert + card.frag, gen/card from
# tools/card/mkcard.py, source/main.c "test 58");
# test 57 (test 56 + the start menu gated by the game's scene byte, ibara's AUTOFIRE row LEFT / RIGHT swapped, source/main.c "test 57");
# test 55 (test 54 + the controls page, the pause on BACK in a run, ibara's autofire rate and Kuro BL's
# player side, source/main.c "test 55"); test 54 (test 53 + gen/ibarablk_drc 1370 = Kuro BL's service-menu DIP SWITCH SETTING screen 0C0651F0 compiled, work/g54,
# work/blk/missed_blk8.txt); test 53 (test 51 + the options in the start menu box: ibara's box gets rows (UP/DOWN) changed with
# LEFT/RIGHT and BACK = OPTIONS, Kuro BL's Start opens a box with the options; the ini's settings (the picture ones
# at once) and ibara's special version (DIP S2 switch 2 + A+B; a change restarts the game) saved to the ini by the
# file thread; BACK held at power-on brings the game menu up when the ini names the game; test 52, the same options
# on the card in the game menu, superseded unrun; source/main.c "test 53"; test 51 = test 50 + ibara's start menu: Start in the
# attract opens a box over the picture for the side
# (Bond / Dyne), the mode (normal / harder / extended) and the ship type A-D, given to the game as the hidden
# commands on its Start press; source/main.c "test 51"; test 50 = test 49 + the hard disk kept awake while the game
# menu waits: source/romload.c reads 4 KB of each zip, uncached, every 2 s until the choice; test 49 = test 48 + the Guide on 480i: source/xsdk_present.c, xsdk's present.c
# with the kernel's display mode showing XAM's surface; test 48 = test 47 + the picture at the display's pixel aspect for 480i and 4:3 outputs + RT
# autofire + R3 test; gen/ibara_drc 1329, gen/ibarablk_drc 1369, test 45's) as a .xex for the retail kernel (xsdk,
# github.com/xenosworks/xsdk). Built by build.sh in the xsdk-base:1 container (Debian 13 + xsdk's GCC 15 in the
# xsdk-gcc volume), the project at /p and xsdk at /xsdk:
#   cmake -S /p/host/xsdk/test49 -B <build> -G Ninja -DCMAKE_TOOLCHAIN_FILE=/xsdk/cmake/xsdk.cmake \
#     -DXSDK_TOOLCHAIN=/opt/xsdk-gcc
# The game and the runtime are test 39's sources (runtime/); gen/ibara_drc is test 44's (work/g44), gen/ibarablk_drc
# test 54's (work/g54, work/blk/missed_blk8.txt);
# source/ is the platform layer on xsdk; zlib/ is zlib 1.2.11 from GCC 15.3's tree (inflate and crc32 only).
cmake_minimum_required(VERSION 3.25)
project(ibara360 C ASM)

set(ROOT "${CMAKE_CURRENT_SOURCE_DIR}/../../..")
file(GLOB TITLE_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/source/*.c")
file(GLOB RUNTIME_SOURCES "${ROOT}/runtime/*.c")
file(GLOB IB_GEN_SOURCES "${ROOT}/gen/ibara_drc/*.c")
file(GLOB BLK_GEN_SOURCES "${ROOT}/gen/ibarablk_drc/*.c")
# Test 77: the PS2 port's ARRANGE mode = ibara's program patched (gen/ibaraarr: tools/arrange/mkpatch.py's records,
# applied by main.c) and recompiled (gen/ibaraarr_drc, the same names as gen/ibara_drc: one per image)
file(GLOB ARR_GEN_SOURCES "${ROOT}/gen/ibaraarr_drc/*.c")
# Test 58: the GADGETS artwork and atlas (local, from Baffo's MAME artwork and the game's font); test 60: + Kuro BL's
# background, the 4:3 panel, the tate bands; test 72: each game's pictures under IB_GAME (mkcard.py's guards)
set(CARD_SOURCES "${ROOT}/gen/card/card_art.c")
set(ZLIB_SOURCES zlib/adler32.c zlib/crc32.c zlib/inffast.c zlib/inflate.c zlib/inftrees.c zlib/zutil.c)
set_source_files_properties(${ZLIB_SOURCES} PROPERTIES COMPILE_OPTIONS "-Wno-implicit-function-declaration")
# Test 49: xsdk's present.c in place of libxsdk.a's present.o, with its private header (src/gpu_private.h) and its
# Makefile's -std=gnu17.
set_source_files_properties(source/xsdk_present.c PROPERTIES INCLUDE_DIRECTORIES "${XSDK_ROOT}/src"
	COMPILE_OPTIONS "-std=gnu17")

# ibara360_shaders.h (quad_vert, quad_frag; test 58: card_vert, card_frag) once for the three titles, as
# xsdk_add_shaders writes a target's
set(SHADER_DIR "${CMAKE_CURRENT_BINARY_DIR}/shaders")
set(SHADER_HEADER "${SHADER_DIR}/ibara360_shaders.h")
set(SHADERS "${CMAKE_CURRENT_SOURCE_DIR}/shaders/quad.vert" "${CMAKE_CURRENT_SOURCE_DIR}/shaders/quad.frag"
	"${CMAKE_CURRENT_SOURCE_DIR}/shaders/card.vert" "${CMAKE_CURRENT_SOURCE_DIR}/shaders/card.frag")
set(GLSLANG_OPT "")
if(EXISTS "${XSDK_GLSLANG}")
	set(GLSLANG_OPT --glslang "${XSDK_GLSLANG}")
endif()
add_custom_command(OUTPUT "${SHADER_HEADER}"
	COMMAND ${CMAKE_COMMAND} -E make_directory "${SHADER_DIR}"
	COMMAND python3 "${XSDK_ROOT}/tools/build_shaders.py" ${GLSLANG_OPT} --output "${SHADER_HEADER}" ${SHADERS}
	DEPENDS ${SHADERS} "${XSDK_ROOT}/tools/build_shaders.py" "${XSDK_ROOT}/build/host/libxsc.so"
	VERBATIM)
add_custom_target(ibara360_shaders DEPENDS "${SHADER_HEADER}")

# As test 39's Makefile: -fno-strict-aliasing (the RAM macros read u16/u32 through u8 buffers), -fwrapv,
# -fsigned-char and -ffp-contract=off (the PC host's arithmetic), the padded VRAM rows (test 11d) and the pcb cost mode
# (test 13). xsdk's GCC adds its own (-mpowerpc64, -fno-optimize-sibling-calls, -fno-gcse, CR2-CR7 fixed).
function(ibara_game target game gen)
	add_executable(${target} ${TITLE_SOURCES} source/xam_loader.S ${RUNTIME_SOURCES} ${gen} ${ZLIB_SOURCES}
		${CARD_SOURCES})
	set_target_properties(${target} PROPERTIES C_STANDARD 11 C_EXTENSIONS ON)
	target_include_directories(${target} PRIVATE source "${ROOT}/runtime" zlib "${ROOT}/gen/card" "${SHADER_DIR}")
	target_compile_options(${target} PRIVATE -O2 -g -Wall -Wno-unused-label -Wno-unused-variable
		-Wno-unused-but-set-variable -fno-strict-aliasing -fwrapv -fsigned-char -ffp-contract=off)
	target_compile_definitions(${target} PRIVATE CV1K_VRAM_STRIDE=0x2040 CV1K_PCB IB_GAME=${game})
	# Test 40: every line of the log file also to the network log (source/main.c, __wrap_xsdk_log_write).
	target_link_options(${target} PRIVATE -Wl,--wrap=xsdk_log_write -Wl,--wrap=xsdk_log_write_bytes)
	add_dependencies(${target} ibara360_shaders)
endfunction()
ibara_game(ibara 0 "${IB_GEN_SOURCES}")
ibara_game(ibarablk 1 "${BLK_GEN_SOURCES}")
# Test 79: ARRANGE's HUD art (gen/arrhud from tools/arrange/mkhud.py) for source/arrhud.c; test 81: its pictures from
# the PS2 port (gen/arrgfx from tools/arrange/mkgfx.py: the ending's 944, the ranking's "Arrange Mode", BULLET DESIGN)
ibara_game(ibaraarr 0 "${ARR_GEN_SOURCES};${ROOT}/gen/ibaraarr/arrange_patch.c;${ROOT}/gen/arrhud/arrhud_art.c;${ROOT}/gen/arrgfx/arrgfx_data.c")
target_compile_definitions(ibaraarr PRIVATE IB_ARRANGE)
target_include_directories(ibaraarr PRIVATE "${ROOT}/gen/ibaraarr" "${ROOT}/gen/arrhud" "${ROOT}/gen/arrgfx")
xsdk_add_xex(ibara TITLE_ID 0x49423336 NAME "Ibara (ibara360)")
xsdk_add_xex(ibarablk TITLE_ID 0x49423336 NAME "Ibara Kuro Black Label (ibara360)")
xsdk_add_xex(ibaraarr TITLE_ID 0x49423336 NAME "Ibara Arrange (ibara360)")

# The launcher (test 72): its own sources and art, the launch module and the network log of the games'
if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/launcher/launcher.c")
	file(GLOB LAUNCHER_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/launcher/*.c")
	add_executable(ibara360 ${LAUNCHER_SOURCES} source/launch.c source/netlog.c source/xam_loader.S source/xsdk_present.c
		"${ROOT}/gen/launcher/launch_art.c" ${ZLIB_SOURCES})
	set_target_properties(ibara360 PROPERTIES C_STANDARD 11 C_EXTENSIONS ON)
	target_include_directories(ibara360 PRIVATE launcher source zlib "${ROOT}/gen/launcher" "${SHADER_DIR}")
	target_compile_options(ibara360 PRIVATE -O2 -g -Wall -fno-strict-aliasing -fwrapv -fsigned-char)
	target_link_options(ibara360 PRIVATE -Wl,--wrap=xsdk_log_write -Wl,--wrap=xsdk_log_write_bytes)
	add_dependencies(ibara360 ibara360_shaders)
	xsdk_add_xex(ibara360 TITLE_ID 0x49423336 NAME "ibara360")
endif()

#!/bin/sh
# Test 97: a test ISO 9660 image from the extracted disc files (there is no ISO on the PC), for ps2extract's ISO reader:
#   MSYS_NO_PATHCONV=1 docker run --rm --memory=1g --label watchdog.max=600 -v "C:\New folder\ibara360:/p" \
#     -v "<out folder>:/o" ps2x-mingw:1 sh /p/tools/ps2extract/mkiso.sh
# A real disc's ISO (made from SLPM-66301 by the user) still needs its own check.
set -e
xorriso -as mkisofs -iso-level 1 -V IBARA -sysid PLAYSTATION -o /o/ibara_test.iso "/p/Ibara (PS2 port)"
ls -l /o/ibara_test.iso

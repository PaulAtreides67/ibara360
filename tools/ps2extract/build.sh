#!/bin/sh
# ps2extract.exe (test 97): one static Windows .exe, no Python, from ps2extract.c + recipe.h + zlib 1.2.11
# (host/xsdk/test97/zlib). From Git Bash on the PC (the image once: docker build -t ps2x-mingw:1 tools/ps2extract):
#   MSYS_NO_PATHCONV=1 docker run --rm --memory=1g --label watchdog.max=600 -v "C:\New folder\ibara360:/p" \
#     ps2x-mingw:1 sh /p/tools/ps2extract/build.sh
# recipe.h comes from mkrecipe.py (the PC, with the disc's files); the .exe lands in tools/ps2extract/bin.
set -e
cd /p/tools/ps2extract
Z=/p/host/xsdk/test97/zlib
mkdir -p bin
x86_64-w64-mingw32-gcc -O2 -s -static -std=c99 -Wall -Wextra -Wno-unused-parameter -Wno-sign-compare \
	-D_FILE_OFFSET_BITS=64 -D__USE_MINGW_ANSI_STDIO=1 -I. -I$Z -o bin/ps2extract.exe ps2extract.c \
	$Z/adler32.c $Z/crc32.c $Z/deflate.c $Z/trees.c $Z/zutil.c $Z/inflate.c $Z/inftrees.c $Z/inffast.c \
	-lcomdlg32 -lshell32
ls -l bin/ps2extract.exe

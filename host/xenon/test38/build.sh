#!/bin/sh
# Test 16 build (test 38), two link passes (inside free60/libxenon, ibara360 mounted at /p):
#   docker run --rm -v "C:\New folder\ibara360:/p" -w /p/host/xenon/test38 free60/libxenon sh build.sh
# Pass 1 links with whatever symbol table source/profsyms.c holds (empty at first, else the
# last build's); mksyms.awk turns xenon-nm's text symbols into this build's table and pass 2
# links again. Only .rodata changes (it comes after .text in app.lds), so every function
# keeps its address: checked below.
set -e
export DEVKITXENON=/usr/local/xenon
export PATH=$DEVKITXENON/bin:$PATH
ELF=ibara360_test38.elf
make -j4
xenon-nm -n --defined-only $ELF | awk '$2 == "T" || $2 == "t" || $2 == "W" || $2 == "w"' > build_syms1.txt
xenon-nm -n --defined-only $ELF | awk -v ENDSYM=elfldr_start -f mksyms.awk > source/profsyms.c
make -j4
xenon-nm -n --defined-only $ELF | awk '$2 == "T" || $2 == "t" || $2 == "W" || $2 == "w"' > build_syms2.txt
if cmp -s build_syms1.txt build_syms2.txt; then
	echo "pass 2: text symbols at the same addresses ($(wc -l < build_syms2.txt) symbols)"
else
	echo "pass 2: TEXT MOVED"
	diff build_syms1.txt build_syms2.txt | head -20
	exit 1
fi
xenon-objdump -h $ELF | awk '$2 == ".text" || $2 == ".rodata" || $2 == ".data"'

#!/bin/sh
# Test 82 .xex build (xsdk): ibara.xex, ibarablk.xex, ibaraarr.xex (ARRANGE) and the launcher ibara360.xex. From Git Bash on the PC:
#   MSYS_NO_PATHCONV=1 docker run --rm --memory=5g -v xsdk-gcc:/opt/xsdk-gcc \
#     -v "C:\New folder\ibara360:/p" -v "C:\New folder\xsdk-src\xsdk:/xsdk:ro" -v xsdk-t82:/b \
#     xsdk-base:1 sh /p/host/xsdk/test82/build.sh [target ...]
# The build folder is the volume xsdk-t82 (the gen files compile several times faster there than on /p); each .xex,
# its ELF and its symbol list land in host/xsdk/test82/out. No target: the three games (test 82 ships those; the
# launcher stays test 81's).
set -e
B=/b/build
O=/p/host/xsdk/test82/out
mkdir -p "$B" "$O"
[ -f "$B/build.ninja" ] || cmake -S /p/host/xsdk/test82 -B "$B" -G Ninja -DCMAKE_TOOLCHAIN_FILE=/xsdk/cmake/xsdk.cmake \
	-DXSDK_TOOLCHAIN=/opt/xsdk-gcc -DCMAKE_BUILD_TYPE=None
T="${*:-ibara ibarablk ibaraarr}"
cmake --build "$B" -j "${JOBS:-6}" --target $T
for t in $T; do
	cp "$B/$t.xex" "$O/"
	cp "$B/$t" "$O/$t.elf"
	echo "== $t"
	/opt/xsdk-gcc/bin/powerpc-xsdk-elf-objdump -h "$O/$t.elf" | awk '$2 ~ /^\.(text|rodata|rdata|data|bss)/'
	/opt/xsdk-gcc/bin/powerpc-xsdk-elf-nm -n --defined-only "$O/$t.elf" > "$O/$t.syms"
done
ls -l "$O"

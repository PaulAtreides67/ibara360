#!/bin/sh
# Test 118 .xex build (test 98 on) (xsdk; test 98: configure every run, so new source files are globbed in): ibara.xex, ibarablk.xex, ibaraarr.xex (ARRANGE) and the launcher ibara360.xex. From Git Bash on the PC:
#   MSYS_NO_PATHCONV=1 docker run --rm --memory=5g --label watchdog.max=10800 -v xsdk-gcc:/opt/xsdk-gcc \
#     -v "C:\New folder\ibara360:/p" -v "C:\New folder\xsdk-src\xsdk:/xsdk:ro" -v xsdk-t118:/b \
#     xsdk-base:1 sh /p/host/xsdk/test118/build.sh [target ...]
# The build folder is the volume xsdk-t97 (the gen files compile several times faster there than on /p); each .xex,
# its ELF and its symbol list land in host/xsdk/test97/out. No target: the three games (test 87 ships those; the
# launcher stays test 81's). Test 87: the label lets the docker watchdog (C:\Users\Van\.claude\docker-watchdog) end a
# build stuck past 3 hours (a fresh volume's whole build takes about 30 minutes).
set -e
B=/b/build
O=/p/host/xsdk/test118/out
mkdir -p "$B" "$O"
cmake -S /p/host/xsdk/test118 -B "$B" -G Ninja -DCMAKE_TOOLCHAIN_FILE=/xsdk/cmake/xsdk.cmake \
	-DXSDK_TOOLCHAIN=/opt/xsdk-gcc -DCMAKE_BUILD_TYPE=None
T="${*:-ibara ibarablk ibaraarr ibara360}"
cmake --build "$B" -j "${JOBS:-6}" --target $T
for t in $T; do
	cp "$B/$t.xex" "$O/"
	cp "$B/$t" "$O/$t.elf"
	echo "== $t"
	/opt/xsdk-gcc/bin/powerpc-xsdk-elf-objdump -h "$O/$t.elf" | awk '$2 ~ /^\.(text|rodata|rdata|data|bss)/'
	/opt/xsdk-gcc/bin/powerpc-xsdk-elf-nm -n --defined-only "$O/$t.elf" > "$O/$t.syms"
done
ls -l "$O"

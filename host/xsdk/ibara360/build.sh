#!/bin/sh
# ibara360 1.02 .xex build (xsdk): ibara.xex, ibarablk.xex, ibaraarr.xex (Arrange) and the launcher ibara360.xex.
# From Git Bash on the PC:
#   MSYS_NO_PATHCONV=1 docker run --rm --memory=5g --label watchdog.max=10800 -v xsdk-gcc:/opt/xsdk-gcc \
#     -v "C:\New folder\ibara360:/p" -v "C:\New folder\xsdk-src\xsdk:/xsdk:ro" -v xsdk-ibara360:/b \
#     xsdk-base:1 sh /p/host/xsdk/ibara360/build.sh [target ...]
# The build folder is the volume (the generated sources compile several times faster there than on /p); each .xex,
# its ELF and its symbol list land in host/xsdk/ibara360/out. No target: all four. A fresh volume's whole build takes
# about 30 minutes.
set -e
B=/b/build
O=/p/host/xsdk/ibara360/out
mkdir -p "$B" "$O"
cmake -S /p/host/xsdk/ibara360 -B "$B" -G Ninja -DCMAKE_TOOLCHAIN_FILE=/xsdk/cmake/xsdk.cmake \
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

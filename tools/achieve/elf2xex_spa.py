#!/usr/bin/env python3
"""xsdk's elf2xex.py with the title ID's resource pointed at an SPA the ELF carries (ibara360_spa in spa.h, tools/achieve/mkspa.py; achprobe_spa in test 104), instead
of the title-name XDBF elf2xex puts beside the PE headers (that one must fit in the first page; an SPA with images
does not). Usage: elf2xex_spa.py <xsdk root> <nm> <elf> <xex> <title id> <symbol>"""

import struct
import subprocess
import sys
from pathlib import Path


def main():
    xsdk, nm, elf, xex, title_id, symbol = sys.argv[1:7]
    sys.path.insert(0, str(Path(xsdk) / "tools"))
    import elf2xex

    address = size = None
    for line in subprocess.run([nm, "-S", elf], check=True, capture_output=True, text=True).stdout.splitlines():
        fields = line.split()
        if len(fields) == 4 and fields[3] == symbol:
            address, size = int(fields[0], 16), int(fields[1], 16)
    if address is None:
        sys.exit(f"elf2xex_spa: no symbol {symbol} in {elf}")
    title = int(title_id, 16)

    class Args:
        pass

    args = Args()
    args.title_id = title
    args.stack_size = 1024 * 1024
    entry, sections = elf2xex.read_elf(Path(elf).read_bytes())
    image, runs = elf2xex.build_image(sections)
    libraries = elf2xex.read_imports(sections, image)
    elf2xex.patch_import_records(image, libraries)
    elf2xex.pe_headers(image, runs, entry, args.stack_size)
    if not (elf2xex.IMAGE_BASE <= address and address + size <= elf2xex.IMAGE_BASE + len(image)):
        sys.exit(f"elf2xex_spa: {symbol} at {address:#x} is outside the image")
    # The resource info as add_title_name writes it: its size, then the name (the title ID in hex), address, size
    resources = struct.pack(">I8sII", 4 + 16, f"{title:08X}".encode(), address, size)
    Path(xex).write_bytes(elf2xex.build_xex(image, runs, entry, libraries, resources, args))
    print(f"elf2xex_spa: {xex}: resource {title:08X} = {symbol} at {address:#010x}, {size} bytes")


if __name__ == "__main__":
    main()

#!/usr/bin/env python3
"""Add or replace one entry (default bg.stage) of an existing ibaraweb.dat, without the Edge render (test 122).

Run:  python -I tools/web/addbg.py <ibaraweb.dat> <picture.jpg> [entry name]

Every other entry keeps its name, kind, w, h and bytes (checked after the write). The table and the data are laid out
the way mkweb.py's pack_dat lays them out, so the offsets move (the table grows by one entry) but no data changes.
Back up the dat first: this rewrites it in place.
"""
import hashlib
import struct
import sys
from pathlib import Path


def jpeg_size(data):
    i = 2
    while i + 9 < len(data):
        if data[i] != 0xFF:
            i += 1
            continue
        m = data[i + 1]
        if m in (0xC0, 0xC1, 0xC2):
            h, w = struct.unpack(">HH", data[i + 5:i + 9])
            return w, h
        i += 2 + struct.unpack(">H", data[i + 2:i + 4])[0]
    raise ValueError("no SOF marker: not a JPEG")


def read_dat(data):
    magic, ver, count = struct.unpack_from(">4sII", data, 0)
    assert magic == b"IBWB" and ver == 1, "not an IBWB v1 file"
    entries = []
    for i in range(count):
        nm, off, size, w, h, kind = struct.unpack_from(">28sIIHHI", data, 12 + 44 * i)
        entries.append((nm.rstrip(b"\0").decode("ascii"), kind, w, h, bytes(data[off:off + size])))
    return entries


def pack_dat(entries):
    count = len(entries)
    pos = 12 + 44 * count
    table = []
    for name, kind, w, h, data in entries:
        pos = (pos + 15) & ~15
        table.append((name, pos, len(data), w, h, kind))
        pos += len(data)
    out = bytearray(struct.pack(">4sII", b"IBWB", 1, count))
    for name, off, size, w, h, kind in table:
        nb = name.encode("ascii")
        assert len(nb) <= 28, name
        out += struct.pack(">28sIIHHI", nb.ljust(28, b"\0"), off, size, w, h, kind)
    for (name, kind, w, h, data), (_, off, _, _, _, _) in zip(entries, table):
        out += b"\0" * (off - len(out))
        out += data
    return bytes(out)


def main():
    dat_path = Path(sys.argv[1])
    jpg = Path(sys.argv[2])
    name = sys.argv[3] if len(sys.argv) > 3 else "bg.stage"
    old = dat_path.read_bytes()
    entries = read_dat(old)
    new = jpg.read_bytes()
    w, h = jpeg_size(new)
    out = []
    replaced = False
    for e in entries:
        if e[0] == name:
            out.append((name, 1, w, h, new))
            replaced = True
        else:
            out.append(e)
    if not replaced:
        out.append((name, 1, w, h, new))
    dat = pack_dat(out)

    # verify the bytes before writing: every other entry identical, the new one as given
    back = read_dat(dat)
    assert len(back) == len(out)
    before = {e[0]: e for e in entries}
    for e in back:
        if e[0] == name:
            assert e[4] == new and e[1:4] == (1, w, h)
        else:
            assert before[e[0]] == e, e[0]
    dat_path.write_bytes(dat)
    print("entries: %d (%s)" % (len(out), "replaced" if replaced else "added"))
    print("%-16s %-10s %s" % ("entry", "bytes", "md5 of data"))
    for e in back:
        if e[0] == name or e[0] in ("story.idx",) or e[0].startswith(("map.", "boss.")):
            print("%-16s %-10d %s" % (e[0], len(e[4]), hashlib.md5(e[4]).hexdigest()))
    print("%s: %d bytes, md5 %s" % (dat_path, len(dat), hashlib.md5(dat).hexdigest()))


if __name__ == "__main__":
    main()

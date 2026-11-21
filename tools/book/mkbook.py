#!/usr/bin/env python3
"""mkbook.py: Insanity DVD book (PDF, 94 pages) -> ibarabook.dat (IBWB, webdat.h format).

Run:  python tools/book/mkbook.py "<path to the book PDF>" <out.dat>
Pages T001..T094 and B001..B094, each the top/bottom half of the page's embedded image resized LANCZOS to 1280 x 1914
then cropped to 1280 x 957 (rows 0..956 / 957..1913), baseline RGB JPEG q85, 4:2:0.
Test 139 F3: then H001..H094, the same pages at 640 x 957 (the two-page spread's half pages).
Format: host/xsdk/ibara360/source/webdat.h (big-endian; entries 16-byte aligned; kind 1 = JPEG).
Needs pymupdf and Pillow.
"""
import io
import os
import struct
import sys

import pymupdf
from PIL import Image

PAGE_W, PAGE_H = 1280, 1914
HALF_W, HALF_H = 640, 957  # test 139 F3: the H entries (the spread's half pages)
JPEG_Q = 85
MAGIC = b"IBWB"
VERSION = 1
KIND_JPEG = 1


def page_image(doc, index):
    """the page's single embedded image as a PIL RGB image; falls back to rendering the page"""
    page = doc[index]
    imgs = page.get_images(full=True)
    if len(imgs) == 1:
        info = doc.extract_image(imgs[0][0])
        im = Image.open(io.BytesIO(info["image"]))
        return im.convert("RGB")
    print("P%03d: %d embedded images, rendering the page instead" % (index + 1, len(imgs)))
    pix = page.get_pixmap(alpha=False)
    return Image.frombytes("RGB", (pix.width, pix.height), pix.samples)


def encode_jpeg(im):
    buf = io.BytesIO()
    im.save(buf, format="JPEG", quality=JPEG_Q, subsampling=2, progressive=False, optimize=True)
    return buf.getvalue()


def encode_full_halves(doc, index):
    """the page resized LANCZOS to PAGE_W x PAGE_H, split into top and bottom 1280 x 957 JPEGs"""
    im = page_image(doc, index).resize((PAGE_W, PAGE_H), Image.LANCZOS)
    top = encode_jpeg(im.crop((0, 0, PAGE_W, HALF_H)))
    bot = encode_jpeg(im.crop((0, HALF_H, PAGE_W, PAGE_H)))
    return top, bot


def encode_page(doc, index, w=HALF_W, h=HALF_H):
    im = page_image(doc, index)
    im = im.resize((w, h), Image.LANCZOS)
    return encode_jpeg(im)


def pack_dat(entries):
    """entries = [(name, kind, w, h, data)] -> the IBWB file bytes (webdat.h layout)"""
    count = len(entries)
    pos = 12 + 44 * count
    table = []
    for name, kind, w, h, data in entries:
        pos = (pos + 15) & ~15
        table.append((name, pos, len(data), w, h, kind))
        pos += len(data)
    out = bytearray(struct.pack(">4sII", MAGIC, VERSION, count))
    for name, off, size, w, h, kind in table:
        nb = name.encode("ascii")
        assert len(nb) <= 28, name
        out += struct.pack(">28sIIHHI", nb.ljust(28, b"\0"), off, size, w, h, kind)
    for (name, kind, w, h, data), (_, off, _, _, _, _) in zip(entries, table):
        out += b"\0" * (off - len(out))
        out += data
    return bytes(out)


def main(argv):
    if len(argv) != 3:
        print("usage: mkbook.py <book.pdf> <out.dat>")
        return 2
    doc = pymupdf.open(argv[1])
    n = doc.page_count
    assert n == 94, "expected 94 pages, got %d" % n
    entries = []
    for i in range(n):
        top, bot = encode_full_halves(doc, i)
        entries.append(("T%03d" % (i + 1), KIND_JPEG, PAGE_W, HALF_H, top))
        entries.append(("B%03d" % (i + 1), KIND_JPEG, PAGE_W, HALF_H, bot))
        print("T%03d %d bytes, B%03d %d bytes" % (i + 1, len(top), i + 1, len(bot)), flush=True)
    # test 139 F3: half-size pages for the two-page spread (640 x 957, decodes ~4x faster), after the T/B entries
    for i in range(n):
        data = encode_page(doc, i, HALF_W, HALF_H)
        entries.append(("H%03d" % (i + 1), KIND_JPEG, HALF_W, HALF_H, data))
        print("H%03d %d bytes" % (i + 1, len(data)), flush=True)
    dat = pack_dat(entries)
    out_dir = os.path.dirname(os.path.abspath(argv[2]))
    os.makedirs(out_dir, exist_ok=True)
    with open(argv[2], "wb") as f:
        f.write(dat)
    print("wrote %s: %d pages, %d bytes" % (argv[2], n, len(dat)))
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))

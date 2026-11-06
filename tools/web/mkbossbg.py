#!/usr/bin/env python3
"""Test 123: the STAGE MAP's right panel background bg.boss (370 x 720 JPEG), from the Insanity DVD "The Lunatic"
booklet (INDV-0111): IDVDTLI_0003.jpg's left page (the contents page), its rose petal strip above the Contents text
(the scan's 0,0 .. 867,1687, the panel's 370:720 shape), scaled to 370 x 720 at full brightness (the game darkens it
to 65% as bg.stage). The user approved the preview work/g123/preview/3_*_full_screen.png (2026-11-06).

Run:  python tools/web/mkbossbg.py <booklet folder> <out.jpg>
then: python -I tools/web/addbg.py <ibaraweb.dat> <out.jpg> bg.boss
"""
import sys
from pathlib import Path

from PIL import Image

BOX = (0, 0, 867, 1687)


def main():
    page = Image.open(Path(sys.argv[1]) / "IDVDTLI_0003.jpg").convert("RGB")
    page.crop(BOX).resize((370, 720), Image.LANCZOS).save(sys.argv[2], quality=92, optimize=True)
    print("%s: 370 x 720" % sys.argv[2])


if __name__ == "__main__":
    main()

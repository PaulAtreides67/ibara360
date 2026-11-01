#!/usr/bin/env python3
"""ibara360's SPA (test 105, PLAN.md "Test 105"): the XDBF database every ibara360 .xex carries under the title ID
0x49423336, which XAM reads the achievements from. The layout is host/xsdk/achprobe/mkspa.py's, the one test 104B
proved on the console (retail block sizes: everything after the magic; XTHD's 0; the title's name first in XSTR; no
empty strings; flags 1 | 8 for a shown achievement, 1 for a secret one).

The list is the user's (cheevos.txt, 2026-11-01, after Battle Garegga Rev.2016's trophies, plus their secret *!@&%$ (test 106: *!@&#$,
user: no '%' in any string, Aurora's unhandled exception lead), EDELWEISS and BOMBA),
the points Claude's (1000 in all, the user's to change; test 106, user: x300, HADOU-GUN and KAMIKAZE BOMB
nerfed to 25 / 10 / 5, their 55 G to XTC +15, LETTER +10 and the three COMPLETEs +10 each; test 107, user: 1CC
worth 60, taken from the continue-OK clears: the three COMPLETEs -15 each, the two endings -5 each, EDELWEISS -5;
then user: EDELWEISS nerfed more, 35 -> 20, its 15 G back to the three COMPLETEs, +5 each;
then user: BLACK LABEL / ARRANGE COMPLETE 60 -> 50 to match ARCADE, their 20 G to MARCH TO DEATH ROW 135 -> 155;
test 108, user: 1CC renamed ARCADE 1CC (ibara only), BLACK LABEL 1CC and ARRANGE 1CC added at 60 each, their 120 G
(Claude's split) from the three COMPLETEs 50 -> 30 and MARCH TO DEATH ROW 155 -> 95;
test 109, user: ARCADE 1CC is the normal mode's (Harder / Extended = MARCH TO DEATH ROW), LOVES ME...LOVES ME NOT
added (secret, 20 G, Claude's split: DR. TERESA 40 -> 30, XTREME TERROR COUNTER 70 -> 60); test 110, user: ARCADE COMPLETE is the normal mode's too). Ids = source/achieve.h's. Icons: work/g105/icons/out/<id>.png
(64x64 PNG, official art only); a missing one falls back to the title image so a build never fails on art.

Usage: mkspa.py <out dir> [icon dir]  ->  <out dir>/spa.bin and spa.h (ibara360_spa[], elf2xex_spa.py's symbol)"""

import struct
import sys
from pathlib import Path

TITLE_ID = 0x49423336
TITLE_NAME = "ibara360"
ENGLISH = 1
TITLE_IMAGE = 0x8000
TITLE_STRING = 0x8000
TYPE_COMPLETION = 1
SHOW_UNACHIEVED = 0x8

# id, label, description, unachieved text, gamerscore, secret
ACHIEVEMENTS = [
    (1, "KAMIKAZE BOMB", "Destroyed an enemy with the shrapnel from your ship's explosion.",
     "Destroy an enemy with the shrapnel from when your ship is destroyed.", 5, False),
    (2, "ORANGE MEILLANDINA", "Defeated Meidi Rose, the Porttown stage boss.",
     "Defeat Meidi Rose, the Porttown stage boss.", 10, False),
    (3, "MILLIONAIRE WEAPONS", "Acquired the maximum stock of bombs (4 bombs, 40 bomb fragments).",
     "Acquire the maximum amount of stock for bombs (4 bombs, 40 bomb fragments).", 20, False),
    (4, "CRAWLER TRACK", "Stopped a tank in the Castle stage by destroying its tracks and let another tank run over it.",
     "Stop a tank in the Castle stage by destroying its tracks, and allow another tank to run over it.", 30, True),
    (5, "GLOIRE DE MIDI", "Defeated Midi Rose, the Canyon stage boss.",
     "Defeat Midi Rose, the Canyon stage boss.", 15, False),
    (6, "STRATEGIC WITHDRAWAL", "Allowed a boss to escape in a 1 credit run.",
     "Allow a boss to escape in a 1 credit run.", 20, True),
    (7, "SPECIAL POWER UP", "Reached level 6 shot power (Ibara only).",
     "Reach level 6 shot power (Ibara only).", 25, True),
    (8, "GOLD MEDALIST", "Acquired a medal worth 10000 points.",
     "Acquire a medal worth 10000 points.", 10, False),
    (9, "EXTEND", "Acquired an extra life by score.",
     "Reach 1,000,000 points (Ibara) or 10,000,000 points (Black Label/Arrange) to acquire an extra life.", 10, False),
    (10, "RESOURCE HOARDER", "Acquired 5 lives in the life stock.",
     "Acquire 5 lives in the life stock.", 20, False),
    (11, "HANA KASUMI", "Destroyed Kasumi Rose, the Valley stage boss.",
     "Destroy Kasumi Rose, the Valley stage boss.", 20, False),
    (12, "1UP", "Destroyed the wings of the big ship in stage 4 and collected the 1UP item.",
     "Destroy the wings of the big ship in stage 4 and collect the 1UP item.", 20, True),
    (13, "MOUNT SHASTA", "Defeated Shasta Rose, the Sky High stage boss.",
     "Defeat Shasta Rose, the Sky High stage boss.", 25, False),
    (14, "FRENCH LACE", "Defeated Lace Rose, the Castle stage boss.",
     "Defeat Lace Rose, the Castle stage boss.", 30, False),
    (15, "DR. TERESA", "Defeated Teresa Rose, the Garden stage boss.",
     "Defeat Teresa Rose, the Garden stage boss.", 30, False),
    (16, "ARCADE COMPLETE", "Cleared Ibara's normal mode.",
     "Clear Ibara's normal mode (continue OK).", 30, False),
    (17, "BLACK LABEL COMPLETE", "Cleared Ibara Kuro Black Label.",
     "Clear Ibara Kuro Black Label (continue OK).", 30, False),
    (18, "ARRANGE COMPLETE", "Cleared Ibara Arrange.",
     "Clear Ibara Arrange (continue OK).", 30, False),
    (19, "LETTER SCORE", "Reached 10,000,000 points in Ibara without continuing.",
     "Reach 10,000,000 points in Ibara. No continues allowed.", 100, False),
    (20, "FULL ARSENAL", "Collected every option in a single life.",
     "Collect every option in a single life (Black Label/Arrange).", 30, False),
    (21, "HADOU-GUN", "Landed the wave motion gun on a boss's main body.",
     "Fire the wave motion gun and land it on any boss's main body.", 10, False),
    (22, "SILISTER SIMILIS", "Saw the ending for Negotiator Agent 01, Bond.",
     "See the ending for Negotiator Agent 01, Bond (continue OK).", 25, False),
    (23, "DIO SPIROSSI", "Saw the ending for Negotiator Agent 02, Dyne.",
     "See the ending for Negotiator Agent 02, Dyne (continue OK).", 25, False),
    (24, "MARCH TO DEATH ROW", "Cleared Harder or Extended mode without continuing.",
     "Clear Harder or Extended mode. No continues allowed.", 95, False),
    (25, "x300", "Reached 100 percent rank and cashed it out with a bed of roses.",
     "Reach 100 percent rank and cash it out with a bed of roses (Black Label/Arrange).", 25, False),
    (26, "XTREME TERROR COUNTER", "Reached +9999 on the XTC counter in a 1 credit run.",
     "Reach +9999 on the XTC counter in a 1 credit run.", 60, False),
    (27, "SPECIAL FORMATION", "Acquired a special formation.",
     "Acquire any special formation (Ibara only).", 15, False),
    (28, "*!@&#$", "Entered censored initials in the name entry screen.",
     "Add censored initials in the name entry screen.", 5, True),
    (29, "EDELWEISS", "Cleared the game in two-player co-op.",
     "Clear the game in two-player co-op (continue OK).", 20, False),
    (30, "BOMBA", "Picked up a full bomb item.",
     "Pick up a full bomb item.", 10, False),
    (31, "ARCADE 1CC", "Cleared Ibara's normal mode without continuing.",
     "Clear Ibara's normal mode on one credit (co-op: both players).", 60, False),
    (32, "BLACK LABEL 1CC", "Cleared Ibara Kuro Black Label without continuing.",
     "Clear Ibara Kuro Black Label on one credit (co-op: both players).", 60, False),
    (33, "ARRANGE 1CC", "Cleared Ibara Arrange without continuing.",
     "Clear Ibara Arrange on one credit (co-op: both players).", 60, False),
    (34, "LOVES ME...LOVES ME NOT", "Dismantled the first phase of Teresa Rose completely before finishing it off.",
     "Completely dismantle the first phase of Teresa Rose before finishing it off.", 20, True),
]

SECTION_METADATA, SECTION_IMAGE, SECTION_STRINGS = 1, 2, 3


def fourcc(text):
    return struct.unpack(">I", text.encode())[0]


def block(magic, data, count=None, size=None):
    body = (struct.pack(">H", count) if count is not None else b"") + data
    return struct.pack(">4sII", magic.encode(), 1, len(body) + 8 if size is None else size) + body


def check():
    assert sum(a[4] for a in ACHIEVEMENTS) == 1000, sum(a[4] for a in ACHIEVEMENTS)
    assert [a[0] for a in ACHIEVEMENTS] == list(range(1, len(ACHIEVEMENTS) + 1))
    for ident, label, description, unachieved, gamerscore, secret in ACHIEVEMENTS:
        assert len(label) <= 32, label
        assert len(description) <= 100 and len(unachieved) <= 100, (label, len(description), len(unachieved))
        assert gamerscore % 5 == 0, label


def build(icons, fallback):
    check()
    strings = {TITLE_STRING: TITLE_NAME}
    xach = b""
    next_string = 1
    images = {}
    for ident, label, description, unachieved, gamerscore, secret in ACHIEVEMENTS:
        ids = []
        for text in (label, description, unachieved):
            strings[next_string] = text
            ids.append(next_string)
            next_string += 1
        flags = TYPE_COMPLETION | (0 if secret else SHOW_UNACHIEVED)
        xach += struct.pack(">HHHHIHHIIIII", ident, *ids, ident, gamerscore, 0, flags, 0, 0, 0, 0)
        icon = icons / f"{ident}.png"
        images[ident] = icon.read_bytes() if icon.is_file() else fallback
    title = icons / "8000.png"
    images[TITLE_IMAGE] = title.read_bytes() if title.is_file() else fallback
    xstr = b""
    for ident, text in sorted(strings.items(), key=lambda item: (item[0] != TITLE_STRING, item[0])):
        data = text.encode("utf-8")
        xstr += struct.pack(">HH", ident, len(data)) + data

    entries = [
        (SECTION_METADATA, fourcc("XACH"), block("XACH", xach, len(ACHIEVEMENTS))),
        (SECTION_METADATA, fourcc("XSTC"), block("XSTC", struct.pack(">I", ENGLISH))),
        (SECTION_METADATA, fourcc("XTHD"),
         block("XTHD", struct.pack(">IIHHHHIIII", TITLE_ID, 1, 1, 0, 0, 0, 0, 0, 0, 0), size=0)),
        (SECTION_STRINGS, ENGLISH, block("XSTR", xstr, len(strings))),
    ]
    for ident, data in images.items():
        entries.append((SECTION_IMAGE, ident, data))
    entries.sort(key=lambda entry: (entry[0], entry[1]))

    table = b""
    content = b""
    for section, ident, data in entries:
        table += struct.pack(">HQII", section, ident, len(content), len(data))
        content += data
    free = struct.pack(">II", len(content), 0xFFFFFFFF - len(content))
    header = struct.pack(">4sIIIII", b"XDBF", 0x10000, len(entries), len(entries), 1, 1)
    missing = [a[0] for a in ACHIEVEMENTS if not (icons / f"{a[0]}.png").is_file()]
    return header + table + free + content, missing


def main():
    root = Path(__file__).resolve().parents[2]
    out = Path(sys.argv[1])
    icons = Path(sys.argv[2]) if len(sys.argv) > 2 else root / "work/g105/icons/out"
    fallback = (root / "host/xsdk/achprobe/art/rose.png").read_bytes()
    spa, missing = build(icons, fallback)
    (out / "spa.bin").write_bytes(spa)
    lines = [
        "/* Generated by tools/achieve/mkspa.py: ibara360's SPA (title 0x%08X), %d bytes, %d achievements. "
        "elf2xex_spa.py points the title ID's resource at it. */" % (TITLE_ID, len(spa), len(ACHIEVEMENTS)),
        "#define IBARA360_TITLE_ID 0x%08Xu" % TITLE_ID,
        "__attribute__((used, aligned(16))) const unsigned char ibara360_spa[%d] = {" % len(spa),
    ]
    for i in range(0, len(spa), 16):
        lines.append("\t" + ", ".join("0x%02X" % b for b in spa[i:i + 16]) + ",")
    lines.append("};")
    (out / "spa.h").write_text("\n".join(lines) + "\n", newline="\n")
    print("spa.bin: %d bytes, %d achievements, %d G%s" % (len(spa), len(ACHIEVEMENTS),
          sum(a[4] for a in ACHIEVEMENTS), ", icons missing (title image used): %s" % missing if missing else ""))


if __name__ == "__main__":
    main()

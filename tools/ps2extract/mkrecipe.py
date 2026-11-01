"""mkrecipe.py: tools/ps2extract/recipe.h, the cut list ps2extract.exe follows to make the PS2-disc pictures of
ibara360's launcher (test 97; user 2026-10-31: the PS2 data from the user's own disc through an offline tool, not in
the .xex).

    python tools/ps2extract/mkrecipe.py      (from the ibara360 folder; reads the disc's files in "Ibara (PS2 port)")

It holds no pixels: only where tools/launcher/mklaunch.py cuts each picture (TIM2 offsets in IBARAR.PDM, rectangles,
where they go in the 640 x 448 backgrounds and the 512-wide atlas), its trims worked out here once (the pictures'
alpha bounding boxes, which need the disc), the SJIS glyph slots of the gallery's help lines and the SE00 bank's
entries of the six sounds. The atlas's rectangles are gen/launcher/launch_art.c's (la_sprites, la_glyphs), checked
against what the cuts give.

Ops: {tim, sx, sy, w, h, dx, dy, mode}: the TIM2 picture at tim, its rectangle sx, sy, w, h to dx, dy;
mode 0 = copy (PIL paste), 1 = alpha composite (PIL alpha_composite), 2 = clear w x h at dx, dy (no source)."""
import os
import re
import struct
import sys

import numpy as np
from PIL import Image

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.normpath(os.path.join(HERE, '..', '..'))
sys.path.insert(0, os.path.join(ROOT, 'tools', 'card'))
import ps2art  # noqa: E402

PS2 = os.path.join(ROOT, 'Ibara (PS2 port)')
PDM = os.path.join(PS2, 'IBARAR.PDM')
ART = open(os.path.join(ROOT, 'gen', 'launcher', 'launch_art.c'), encoding='utf-8').read()
if 'la_title_z' not in ART:  # test 97's launch_art.c has no pixels: its rectangles are the same
    pass
RECTS = {m.group(5): tuple(map(int, m.groups()[:4])) for m in
         re.finditer(r'\{(\d+), (\d+), (\d+), (\d+)\}, /\* (\w+) \*/', ART)}
GLYPH_RECTS = {int(m.group(1), 16): tuple(map(int, m.groups()[1:])) for m in
               re.finditer(r'\{0x([0-9A-F]{4}), (\d+), (\d+), (\d+), (\d+)\}', ART)}

_tims = {}


def tim(off):
    if off not in _tims:
        _tims[off] = ps2art.tim2_at(PDM, off).convert('RGBA')
    return _tims[off]


def bbox(im, box):
    """box's part of picture im trimmed to its alpha's bounding box (mklaunch.py's trim), as a box in im"""
    b = im.crop(box).getchannel('A').getbbox()
    return (box[0] + b[0], box[1] + b[1], box[0] + b[2], box[1] + b[3])


ops = {'title': [], 'mode': [], 'atlas': [], 'title_v': []}


def op(where, t, box, dx, dy, mode=0):
    ops[where].append((t, box[0], box[1], box[2] - box[0], box[3] - box[1], dx, dy, mode))


# the backgrounds (mklaunch.py: title from 0x45D4000 | 0x4636800, mode from six tiles)
op('title', 0x45D4000, (128, 0, 448, 448), 0, 0)
op('title', 0x4636800, (0, 0, 320, 448), 320, 0)
op('mode', 0x2D73000, (0, 0, 256, 256), 0, 0)
op('mode', 0x2D94000, (0, 0, 256, 256), 256, 0)
op('mode', 0x2DB5000, (0, 0, 128, 256), 512, 0)
op('mode', 0x2D83800, (0, 0, 256, 192), 0, 256)
op('mode', 0x2DA4800, (0, 0, 256, 192), 256, 256)
op('mode', 0x2DB5000, (128, 0, 256, 192), 512, 256)
# the TATE title (backlog 2e, 2026-10-31: the launcher turned for a vertical monitor, official art only): the GALLERY's
# picture 15 whole, IBARAR.TBL files 1016-1019 (four 448 tiles, 896 x 896), the arcade's flyer art the landscape title
# is the top of (the rose, the six silhouettes, the logo band, the giant, the two planes, "(C) 2005 CAVE"): its columns
# 128-767 (the title's), all 896 rows = 640 x 896
op('title_v', 0x45D4000, (128, 0, 448, 448), 0, 0)
op('title_v', 0x4636800, (0, 0, 320, 448), 320, 0)
op('title_v', 0x4699000, (128, 0, 448, 448), 0, 448)
op('title_v', 0x46FB800, (0, 0, 320, 448), 320, 448)
for off in (0x45D4000, 0x4636800, 0x4699000, 0x46FB800):
    assert tim(off).size == (448, 448), hex(off)
for off in (0x2D73000, 0x2D94000, 0x2D83800, 0x2DA4800):
    assert tim(off).size == (256, 256), hex(off)

# the sprites: name -> (tim, box before the trim, trim?)
H_T, P_T, L_T, M_T, B_T, N_T = 0x2D20800, 0x2D31000, 0x2A75800, 0x2B23800, 0x2D62800, 0x20800
SPR = {
    'EXIT': (P_T, (0, 96, 112, 144), False),
    'SIGN': (P_T, (0, 145, 224, 195), True),
    'BAR': (P_T, (0, 195, 224, 216), True),
    'LOGO_IB': (L_T, (0, 78, 256, 210), True),
    'LATTICE': (L_T, (0, 30, 20, 54), False),
    'FRAME': (M_T, (0, 0, 240, 88), False),
    'LOADING': (M_T, (0, 97, 256, 122), True),
    'ROSE': (M_T, (0, 176, 24, 196), True),
    'FONT': (M_T, (0, 208, 256, 256), False),
    'G_PLATE': (P_T, (0, 48, 112, 96), False),
    'G_DESC': (H_T, (144, 96, 256, 144), False),
    'G_HEAD': (B_T, (0, 0, 224, 64), False),
    'G_BOX': (B_T, (0, 64, 256, 256), False),
    'G_NUM': (N_T, (0, 0x50, 256, 0x90), False),
    'A_PLATE': (P_T, (112, 0, 224, 48), False),
    'A_DESC': (H_T, (144, 48, 256, 96), False),
}
for name, (t, box, tr) in SPR.items():
    b = bbox(tim(t), box) if tr else box
    x, y, w, h = RECTS[name]
    assert (b[2] - b[0], b[3] - b[1]) == (w, h), (name, b, RECTS[name])
    op('atlas', t, b, x, y)

# HEADER: (0, 0, 243, 63) with its corner (140, 47)-(243, 63) cleared, then trimmed
head = tim(H_T).crop((0, 0, 243, 63))
head.paste((0, 0, 0, 0), (140, 47, 243, 63))
hb = head.getchannel('A').getbbox()
x, y, w, h = RECTS['HEADER']
assert (hb[2] - hb[0], hb[3] - hb[1]) == (w, h)
op('atlas', H_T, hb, x, y)
cx0, cy0 = max(140, hb[0]), max(47, hb[1])
cx1, cy1 = min(243, hb[2]), min(63, hb[3])
if cx1 > cx0 and cy1 > cy0:
    ops['atlas'].append((0, 0, 0, cx1 - cx0, cy1 - cy0, x + cx0 - hb[0], y + cy0 - hb[1], 2))

# the gallery's lines in the game's 16 x 16 SJIS font (mklaunch.py's sjis_slot / sjis_line): pages 0x2B34000 + k * 0x8800
exec(compile(re.search(r'(def sjis_slot\(code\):.*?return s\n)', open(os.path.join(ROOT, 'tools', 'launcher',
                                                                                     'mklaunch.py'),
                                                                      encoding='utf-8').read(), re.S).group(1),
             'sjis_slot', 'exec'))
LINES = {
    'G_HELP1': [('方向キー，ＬＢボタン，ＲＢボタンで選択，', 0)],
    'G_HELP2': [('Ａボタンで閲覧，Ｂボタンで終了します。', 0)],
    'G_OV1': [('拡大，縮小', 0)], 'G_OV2': [('閉じる', 0)], 'G_OV3': [('ウィンドウ表示', 0)], 'G_OV4': [('画像送り', 0)],
    'G_KA': [('Ａ', 0)], 'G_KB': [('Ｂ', 0)], 'G_KY': [('Ｙ', 0)],
    'G_KLR': [('ＬＢ', 0), ('ＲＢ', 38)],
}
for name, parts in LINES.items():
    x, y, w, h = RECTS[name]
    for text, x0 in parts:
        for i, ch in enumerate(text):
            s = sjis_slot(int.from_bytes(ch.encode('cp932'), 'big'))  # noqa: F821
            assert s != 0xC00
            sx, sy = (s & 15) * 16, ((s >> 4) & 15) * 16
            op('atlas', 0x2B34000 + (s >> 8) * 0x8800, (sx, sy, sx + 16, sy + 16), x + x0 + 16 * i, y, 1)

# ALLIMAGE.DAT's glyphs: (code point, layer, cell, width) to their atlas rectangles
JP_CHARS = '鋳薔薇黒ブラックレーベル'
glyphs = [(c, 2, (90 - 48) * 94 + c - 0x21, 16) for c in range(0x21, 0x7F)]
for ch in JP_CHARS:
    e = ch.encode('euc_jp')
    ku, ten = e[0] - 0xA0, e[1] - 0xA0
    glyphs.append((ord(ch), 0, (ku - 1) * 94 + ten - 1, 26) if ku <= 47 else (ord(ch), 2, (ku - 48) * 94 + ten - 1, 26))
glyphs.sort()
assert len(glyphs) == len(GLYPH_RECTS)
for cp, layer, cell, w in glyphs:
    assert GLYPH_RECTS[cp][2] == w and GLYPH_RECTS[cp][3] == w, hex(cp)

# the sounds: the SE00 bank's entries (mklaunch.py's se_bank_index)
SOUNDS = [('CURSOR', 0x63), ('DECIDE', 0x5F), ('CANCEL', 0x4C), ('COIN', 0x5B), ('V_IBARA', 0xC1), ('V_KAKATTE', 0x85)]


def se_bank_index(code):
    i = code - 0x39
    if i >= 71:
        i -= 2
    if i >= 101:
        i -= 5
    if i >= 104:
        i -= 1
    return i


# the check: the cuts, done here, are the atlas of gen/launcher's launch_art.c (where it still has its pixels)
m = re.search(r'la_atlas_z\[(\d+)\] = \{(.*?)\};', ART, re.S)
if m:
    import zlib
    ref = np.frombuffer(zlib.decompress(bytes(int(v) for v in re.findall(r'\d+', m.group(2)))), np.uint8)
    atlas = Image.new('RGBA', (512, 1024))
    for t, sx, sy, w, h, dx, dy, mode in ops['atlas']:
        if mode == 2:
            atlas.paste((0, 0, 0, 0), (dx, dy, dx + w, dy + h))
        elif mode == 1:
            atlas.alpha_composite(tim(t).crop((sx, sy, sx + w, sy + h)), (dx, dy))
        else:
            atlas.paste(tim(t).crop((sx, sy, sx + w, sy + h)), (dx, dy))
    a = np.asarray(atlas)[:, :, [3, 0, 1, 2]].reshape(-1)
    ref = ref.reshape(1024, 512, 4)
    mine = a.reshape(1024, 512, 4).copy()
    for n in ('LOGO_BLK', 'WHITE'):
        x, y, w, h = RECTS[n]
        ref = ref.copy()
        ref[y:y + h, x:x + w] = 0
    for cp, (x, y, w, h) in GLYPH_RECTS.items():
        ref[y:y + 26, x:x + w] = 0
    print('recipe vs launch_art.c atlas (glyphs, LOGO_BLK, WHITE left out): %d bytes differ' % int((mine != ref).sum()))

with open(os.path.join(HERE, 'recipe.h'), 'w', newline='\n', encoding='utf-8') as f:
    f.write('/* generated by tools/ps2extract/mkrecipe.py: where ps2extract cuts the launcher\'s pictures from IBARAR.PDM\n'
            ' * (tools/launcher/mklaunch.py\'s cuts, its trims worked out once); no pixels */\n')
    f.write('struct rop {\n\tunsigned tim;\n\tshort sx, sy, w, h, dx, dy;\n\tunsigned char mode;\n};\n')
    for k in ('title', 'mode', 'atlas', 'title_v'):
        f.write('static const struct rop rop_%s[] = {\n' % k)
        for o in ops[k]:
            f.write('\t{0x%07X, %d, %d, %d, %d, %d, %d, %d},\n' % o)
        f.write('};\n')
    f.write('struct rglyph {\n\tunsigned cp;\n\tunsigned char layer, w;\n\tunsigned short cell;\n\tshort x, y;\n};\n')
    f.write('static const struct rglyph rglyphs[] = {\n')
    for cp, layer, cell, w in glyphs:
        x, y = GLYPH_RECTS[cp][:2]
        f.write('\t{0x%04X, %d, %d, %d, %d, %d},\n' % (cp, layer, w, cell, x, y))
    f.write('};\n')
    f.write('struct rsound {\n\tconst char *name;\n\tunsigned char code, entry;\n};\n')
    f.write('static const struct rsound rsounds[] = {\n')
    for n, c in SOUNDS:
        f.write('\t{"%s", 0x%02X, %d},\n' % (n, c, se_bank_index(c)))
    f.write('};\n')
    x, y, w, h = RECTS['LOADING']
    f.write('#define R_LOADING_X %d\n#define R_LOADING_Y %d\n#define R_LOADING_W %d\n#define R_LOADING_H %d\n' % (x, y, w, h))
print('recipe.h: %d + %d + %d + %d ops, %d glyphs, %d sounds' % (len(ops['title']), len(ops['mode']), len(ops['atlas']),
                                                                len(ops['title_v']), len(glyphs), len(SOUNDS)))

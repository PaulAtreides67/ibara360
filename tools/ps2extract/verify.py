"""verify.py <ps2data.bin> [ps2music.bin]: test 97's check of ps2extract's output against the data the .xex files had
compiled in up to test 96 (work/g97/ps2data/ref_gen: copies of gen/launcher/launch_art.c, gen/card/card_ticker.h,
card_loading.h, gen/arrgfx/arrgfx_data.c, gen/arrhud/arrhud_art.c and gen/launcher/gallery.dat as they were before the
move), blob by blob, after inflating (Python's zlib here is zlib-ng: its streams differ from zlib 1.2.11's, their
bytes do not). The ps2music.bin streams against IBARAR.PDM's ranges.

    python tools/ps2extract/verify.py "<out>/ps2data.bin" "<out>/ps2music.bin"      (from the ibara360 folder)

Test 99 (ps2extract 4): --p43ref=<dir> = tools/card/mkcard.py --p43ref's output (the 4:3 panels' PS2 layers as
tools/card/ps2art.py makes them): p43.ib.bond, p43.ib.dyne, p43.blk.bond, p43.blk.dyne compared byte for byte (their
boxes too). Without it the four are only checked to be there."""
import os
import re
import struct
import sys
import zlib

ROOT = os.path.normpath(os.path.join(os.path.dirname(os.path.abspath(__file__)), '..', '..'))
REF = os.path.join(ROOT, 'work', 'g97', 'ps2data', 'ref_gen')
PS2 = os.path.join(ROOT, 'Ibara (PS2 port)')


def blobs(path):
    d = open(path, 'rb').read()
    assert d[:8] == b'IB360PS2', 'not a ps2data file'
    ver, n, toff, doff, tool, tblcrc = struct.unpack_from('>6I', d, 8)
    out = {}
    for i in range(n):
        e = d[toff + 64 * i:toff + 64 * i + 64]
        name = e[:32].rstrip(b'\0').decode()
        off, stored, size, crc, flags, kind, w, h, extra = struct.unpack_from('>4I4HI', e, 32)
        raw = d[off:off + stored]
        out[name] = (raw, dict(stored=stored, size=size, crc=crc, flags=flags, kind=kind, w=w, h=h, extra=extra))
    return d, out


def unpacked(b):
    raw, e = b
    r = zlib.decompress(raw) if e['flags'] & 1 else raw
    assert len(r) == e['size'] and zlib.crc32(r) & 0xFFFFFFFF == e['crc'], 'size / CRC'
    return r


def c_array(text, name, pat=r'-?\d+|0x[0-9A-Fa-f]+'):
    m = re.search(re.escape(name) + r'\[[^\]]*\](?:\[[^\]]*\])? = \{(.*?)\n\};', text, re.S)
    return [int(v, 0) for v in re.findall(pat, m.group(1))]


def main():
    p43ref = next((a.split('=', 1)[1] for a in sys.argv[1:] if a.startswith('--p43ref=')), None)
    sys.argv = [a for a in sys.argv if not a.startswith('--p43ref=')]
    data, b = blobs(sys.argv[1])
    art = open(os.path.join(REF, 'launch_art.c'), encoding='utf-8').read()
    rects = {m.group(5): tuple(map(int, m.groups()[:4])) for m in
             re.finditer(r'\{(\d+), (\d+), (\d+), (\d+)\}, /\* (\w+) \*/', art)}
    res = []

    def check(name, want):
        got = unpacked(b[name])
        ok = got == want
        res.append(ok)
        print('%-16s %9d bytes  %s' % (name, len(want), 'IDENTICAL' if ok else 'DIFFERENT (%d bytes differ)' % (
            sum(1 for x, y in zip(got, want) if x != y) + abs(len(got) - len(want)))))

    for n in ('title', 'mode', 'atlas'):
        ref = bytearray(zlib.decompress(bytes(c_array(art, 'la_%s_z' % n))))
        if n == 'atlas':  # the arcade's LOGO_BLK and the WHITE square are put in by the launcher, not the file
            for s in ('LOGO_BLK', 'WHITE'):
                x, y, w, h = rects[s]
                for j in range(h):
                    ref[((y + j) * 512 + x) * 4:((y + j) * 512 + x + w) * 4] = bytes(w * 4)
        check('la.' + n, bytes(ref))
    # backlog 2e: the TATE title (new in ps2extract 2, no copy in ref_gen): the GALLERY's picture 15 from IBARAR.PDM's
    # four tiles (files 1016-1019) by tools/card/ps2art.py, its columns 128-767, as A R G B
    if 'la.title_v' in b:
        sys.path.insert(0, os.path.join(ROOT, 'tools', 'card'))
        import ps2art
        from PIL import Image
        pdm_path = os.path.join(PS2, 'IBARAR.PDM')
        whole = Image.new('RGBA', (896, 896))
        for k, off in enumerate((0x45D4000, 0x4636800, 0x4699000, 0x46FB800)):
            whole.paste(ps2art.tim2_at(pdm_path, off).convert('RGBA'), ((k & 1) * 448, (k >> 1) * 448))
        a = whole.crop((128, 0, 768, 896)).tobytes()
        check('la.title_v', bytes(v for i in range(0, len(a), 4) for v in (a[i + 3], a[i], a[i + 1], a[i + 2])))
    else:
        res.append(False)
        print('%-16s           MISSING (a ps2extract before version 2)' % 'la.title_v')
    for s in ('CURSOR', 'DECIDE', 'CANCEL', 'COIN', 'V_IBARA', 'V_KAKATTE'):
        pcm = c_array(art, 'la_pcm_%s' % s.lower(), r'-?\d+')
        check('la.snd.' + s, struct.pack('>%dh' % len(pcm), *pcm))
    tick = open(os.path.join(REF, 'card_ticker.h'), encoding='utf-8').read()
    for n in ('band', 'text'):
        w = c_array(tick, 'ticker_' + n, r'0x[0-9A-F]{8}')
        check('ticker.' + n, struct.pack('>%dI' % len(w), *w))
    w = c_array(open(os.path.join(REF, 'card_loading.h'), encoding='utf-8').read(), 'card_loading', r'0x[0-9A-F]{8}')
    check('loading', struct.pack('>%dI' % len(w), *w))
    g = open(os.path.join(REF, 'arrgfx_data.c'), encoding='utf-8').read()
    check('arr.gfx', zlib.decompress(bytes(c_array(g, 'arrgfx_z', r'0x[0-9A-F]{2}'))))
    h = open(os.path.join(REF, 'arrhud_art.c'), encoding='utf-8').read()
    w = c_array(h[h.index('arrhud_fbox'):], 'arrhud_fbox', r'0x[0-9A-F]{4}')
    check('arr.fbox', struct.pack('>%dH' % len(w), *w))

    # the gallery: the same header and table (but the zlib sizes and offsets), the same bytes in every entry
    ref = open(os.path.join(REF, 'gallery.dat'), 'rb').read()
    got = unpacked(b['gallery'])
    ok = ref[:16] == got[:16]
    nent = 5 + 78
    for i in range(nent):
        re_ = struct.unpack_from('>IIHHHHHHHH', ref, 16 + 24 * i)
        ge = struct.unpack_from('>IIHHHHHHHH', got, 16 + 24 * i)
        ok = ok and re_[2:] == ge[2:] and \
            zlib.decompress(ref[re_[0]:re_[0] + re_[1]]) == zlib.decompress(got[ge[0]:ge[0] + ge[1]])
    res.append(ok)
    print('%-16s %9d bytes  %s' % ('gallery', len(got), 'IDENTICAL (its 83 pictures inflated, its table)' if ok
                                   else 'DIFFERENT'))

    # the PS2 menus' fonts and frames: work/g97/ps2menu's PNGs (tools/ps2menu/ps2fonts.py), as A R G B
    from PIL import Image
    menu = os.path.join(ROOT, 'work', 'g97', 'ps2menu')
    for name, png in (('font.small', 'font8x8.png'), ('font.title', 'font8x16.png'), ('font.jp', 'sjis16.png'),
                      ('menu.window', 'frames/leaf_window_240x88.png'),
                      ('menu.rose16', 'frames/rose_cursor_small_8x16x16.png'),
                      ('menu.rose24', 'frames/rose_cursor_big_8x24x20.png'), ('menu.pad', 'frames/pad_icons_64x32.png'),
                      ('menu.back', 'frames/rose_backdrop_240x320.png')):
        a = Image.open(os.path.join(menu, png)).convert('RGBA').tobytes()
        check(name, bytes(v for i in range(0, len(a), 4) for v in (a[i + 3], a[i], a[i + 1], a[i + 2])))
    for name, png, box in (('menu.head', 'frames/head_modeselect_120x64.png', (0, 0)),
                           ('menu.plates', 'frames/plate_option_112x48.png', (112, 48))):
        got = unpacked(b[name])
        e = b[name][1]
        im = Image.open(os.path.join(menu, png)).convert('RGBA')
        ok = all(got[((box[1] + y) * e['w'] + box[0] + x) * 4:((box[1] + y) * e['w'] + box[0] + x) * 4 + 4] ==
                 bytes((p[3], p[0], p[1], p[2])) for y in range(im.height) for x in range(im.width)
                 for p in [im.getpixel((x, y))])
        res.append(ok)
        print('%-16s %9d bytes  %s' % (name, len(got), ('IDENTICAL where %s covers it' % png) if ok else 'DIFFERENT'))
    # the TAITO logo: tools/arrange/mklogo.py's header, its numbers and bytes
    import subprocess
    import tempfile
    th = os.path.join(tempfile.mkdtemp(), 'taito_logo.h')
    subprocess.run([sys.executable, '-I', os.path.join(ROOT, 'tools', 'arrange', 'mklogo.py'),
                    os.path.join(PS2, 'IBARAR.TBL'), os.path.join(PS2, 'IBARAR.PDM'), th], check=True,
                   stdout=subprocess.DEVNULL)
    t = open(th).read()
    d = {k: int(v) for k, v in re.findall(r'#define (LOGO_\w+) (-?\d+)', t)}
    pal = [int(v, 16) for v in re.findall(r'0x([0-9A-F]{4})', t[t.index('logo_pal'):t.index('logo_rle')])]
    rle = [int(v) for v in re.findall(r'\d+', t[t.index('= {', t.index('logo_rle')):])]
    want = struct.pack('>HHhhHHI', d['LOGO_W'], d['LOGO_H'], d['LOGO_DX'], d['LOGO_DY'], d['LOGO_NPAL'], 0,
                       d['LOGO_RLE_N']) + struct.pack('>%dH' % len(pal), *pal) + bytes(rle)
    check('taito_logo', want)

    # the soundtrack's table and streams
    tbl = open(os.path.join(PS2, 'IBARAR.TBL'), 'rb').read()
    offs = struct.unpack_from('<1130I', tbl, 0x350C)
    t = unpacked(b['bgm.table'])
    pdm = open(os.path.join(PS2, 'IBARAR.PDM'), 'rb')
    ok = len(t) == 16 * 80
    mus = open(sys.argv[2], 'rb').read() if len(sys.argv) > 2 else None
    mb = blobs(sys.argv[2])[1] if mus else None
    for i in range(16):
        f, off, size, mat = struct.unpack_from('>4I', t, 80 * i)
        pdm.seek(off)
        head = pdm.read(64)
        ok = ok and f == 1113 + i and off == offs[f] and size == struct.unpack_from('<I', tbl, 0x11BC + 8 * f + 4)[0] \
            and t[80 * i + 16:80 * i + 80] == head
        if mus:
            pdm.seek(off)
            ok = ok and mus[mat:mat + size] == pdm.read(size) and mb['bgm.%02d' % i][1]['size'] == size
    res.append(ok)
    print('%-16s %9d bytes  %s' % ('bgm.table', len(t), ('IDENTICAL to IBARAR.TBL / PDM' +
                                                         (', ps2music.bin = the PDM\'s 16 streams' if mus else ''))
                                   if ok else 'DIFFERENT'))
    # test 99 (ps2extract 4): the 4:3 GADGETS panels' PS2 layers, premultiplied A R G B, extra = x | y << 16
    import json
    boxes = json.load(open(os.path.join(p43ref, 'p43.json'))) if p43ref else {}
    for name in ('p43.ib.bond', 'p43.ib.dyne', 'p43.blk.bond', 'p43.blk.dyne'):
        if name not in b:
            res.append(False)
            print('%-16s           MISSING (a ps2extract before version 4)' % name)
            continue
        got = unpacked(b[name])
        e = b[name][1]
        if not p43ref:
            res.append(len(got) == e['w'] * e['h'] * 4)
            print('%-16s %9d bytes  %dx%d at (%d, %d) (no --p43ref: not compared)' % (
                name, len(got), e['w'], e['h'], e['extra'] & 0xFFFF, e['extra'] >> 16))
            continue
        a = Image.open(os.path.join(p43ref, name + '.png')).tobytes()
        want = bytes(v for i in range(0, len(a), 4) for v in (a[i + 3], a[i], a[i + 1], a[i + 2]))
        ok = [e['extra'] & 0xFFFF, e['extra'] >> 16, e['w'], e['h']] == boxes[name] and got == want
        res.append(ok)
        print('%-16s %9d bytes  %s' % (name, len(got), 'IDENTICAL to mkcard.py --p43ref (and its box)' if ok else
                                       'DIFFERENT'))
    print('\n%d of %d checks identical' % (sum(res), len(res)))
    sys.exit(0 if all(res) else 1)


if __name__ == '__main__':
    main()

#!/usr/bin/env python3
"""Build ibaraweb.dat (ibara360 1.03 STORY slides, stage map / boss gadget data).

Run:  python -I tools/web/mkweb.py "<path to mirror of https://www.cave.co.jp/gameonline/ibara/>"

The mirror is only read. Pages are copied to work/g121/web/build/, translated
(en.json) and rendered with headless Microsoft Edge at 1280x720 chunks.
Outputs: host/xsdk/ibara360/out/ibaraweb.dat and work/g121/web/preview/*.png.
Format: work/g121/SPEC.md (ibaraweb.dat section). Big-endian, offsets are
absolute from the start of the file.
"""
import io
import json
import math
import os
import re
import shutil
import struct
import subprocess
import sys
import tempfile
import time
import zlib
from pathlib import Path

from PIL import Image, ImageDraw, ImageFont

HERE = Path(__file__).resolve().parent
REPO = HERE.parents[1]                 # ...\ibara360
WEB = REPO / "work" / "g121" / "web"
BUILD = WEB / "build"
PREVIEW = WEB / "preview"
OUT_DAT = REPO / "host" / "xsdk" / "ibara360" / "out" / "ibaraweb.dat"
EDGE = r"C:\Program Files (x86)\Microsoft\Edge\Application\msedge.exe"
WIN_FONTS = Path(os.environ.get("WINDIR", r"C:\Windows")) / "Fonts"

CHUNK_W, CHUNK_H = 1280, 720
WIN_W, WIN_H = 800, 450                # CSS px; device scale 1.6 -> 1280x720
SCALE = 1.6
SERIF = '"Times New Roman",Georgia,serif'
SANS = '"MS PGothic","ＭＳ Ｐゴシック",sans-serif'

# (label, page, group) -- group 0 STORY 1 SYSTEM 2 STAGE 3 CHARACTER
SLIDES = [
    ("STORY 1", "story.html", 0),
    ("STORY 2", "story02.html", 0),
    ("STORY 3", "story03.html", 0),
    ("SYSTEM: CONTROLS", "operation.html", 1),
    ("SYSTEM: PLAYER", "player.html", 1),
    ("SYSTEM: SHOT & BOMB", "shot.html", 1),
    ("SYSTEM: OPTIONS", "option.html", 1),
    ("SYSTEM: ITEMS", "item.html", 1),
    ("STAGE 1", "stage1.html", 2),
    ("STAGE 2", "stage2.html", 2),
    ("STAGE 3", "stage3.html", 2),
    ("STAGE 4", "stage4.html", 2),
    ("STAGE 5", "stage5.html", 2),
    ("STAGE 6", "stage6.html", 2),
    ("CHARACTER: BOND", "character.html", 3),
    ("CHARACTER: DYNE", "character02.html", 3),
    ("CHARACTER: TERESA", "enemy.html", 3),
    ("CHARACTER: MEIDI", "enemy01.html", 3),
    ("CHARACTER: MIDI", "enemy02.html", 3),
    ("CHARACTER: KASUMI", "enemy03.html", 3),
    ("CHARACTER: SHASTA", "enemy04.html", 3),
    ("CHARACTER: LACE", "enemy05.html", 3),
]

# stage n -> boss character name, boss picture bg, enemy name gif, English plate
BOSSES = {
    1: dict(bg="enemy_bg01.jpg", gif="enemy_meidi.gif", pre="1st Guardian", en=("MEIDI ROSE", "ORANGE MEILLANDINA")),
    2: dict(bg="enemy_bg02.jpg", gif="enemy_midi.gif", pre="2nd Guardian", en=("MIDI ROSE", "GLOIRE DE MIDI")),
    3: dict(bg="enemy_bg03.jpg", gif="enemy_kasumi.gif", pre="3rd Guardian", en=("KASUMI ROSE", "HANA KASUMI")),
    4: dict(bg="enemy_bg04.jpg", gif="enemy_shasta.gif", pre="4th Guardian", en=("SHASTA ROSE", "MOUNT SHASTA")),
    5: dict(bg="enemy_bg05.jpg", gif="enemy_lace.gif", pre="5th Guardian", en=("LACE ROSE", "FRENCH LACE")),
    6: dict(bg="enemy_bg00.jpg", gif="enemy_teresa.gif", pre="Final Boss", en=("TERESA ROSE", "AMBRIDGE ROSE")),
}

LATIN = '"Tahoma","Verdana",sans-serif'


def css_for(lang):
    font = SANS if lang == "ja" else LATIN
    return ('<style id="mkweb-css">html{background:#000 !important}'
            'body,td,th,p,div,a,li{font-family:%s !important;font-size:12px !important}'
            '.f8{font-size:11px !important}</style>' % font.replace('"', "'"))


def log(*a):
    print(*a, flush=True)


# ---------------------------------------------------------------- HTML ----

TEXT_RE = re.compile(r">([^<]*)<")
IMG_RE = re.compile(r"<img\b[^>]*>", re.I)
JAP_RE = re.compile(r"[^\x00-\x7f]")


def inject_css(html, lang, extra=""):
    block = css_for(lang) + extra
    if re.search(r"</head>", html, re.I):
        return re.sub(r"</head>", lambda m: block + m.group(0), html, count=1, flags=re.I)
    return block + html


def translate_text(body, tr, warn):
    def rep(m):
        t = m.group(1)
        key = re.sub(r"\s+", " ", t).strip()
        if not key or not JAP_RE.search(key):
            return m.group(0)
        if key not in tr:
            warn.append(key)
            return m.group(0)
        val = tr[key]
        if val == "":
            return ">\x00<"
        lead = t[: len(t) - len(t.lstrip())]
        trail = t[len(t.rstrip()):]
        return ">" + lead + val + trail + "<"

    body = TEXT_RE.sub(rep, body)
    body = re.sub(r">\x00<(\s*<BR\s*/?>)?", "><", body, flags=re.I)
    return body


def attr(tag, name):
    m = re.search(r'\b%s="?([^"\s>]+)"?' % name, tag, re.I)
    return m.group(1) if m else None


def sample_bg(path):
    im = Image.open(path).convert("RGBA")
    r, g, b, a = im.getpixel((1, 1))
    if a < 128:
        return "transparent"
    return "#%02x%02x%02x" % (r, g, b)


def text_span(text, w, h, bg, fg, serif, on=False, nowrap=True):
    # no box: the text sits on the page's own art, like the gif it replaces
    if serif:
        fs = max(8, int(h * 0.62))
        ff = SERIF
        fw = "bold" if h >= 25 else "normal"
    else:
        fs = 11
        ff = LATIN
        fw = "bold"
    ff = ff.replace('"', "'")   # the inline style attribute is double-quoted
    if text.startswith("Stage "):
        fw = "normal"
        fg = "#dcdcdc"
    while fs > 6 and len(text) * fs * (0.55 if serif else 0.62) > w:
        fs -= 1
    bg = "transparent"
    shadow = "text-shadow:0 0 3px #000,0 0 2px #000;"
    return ('<span class="enimg" style="display:inline-block;box-sizing:border-box;width:%dpx;height:%dpx;'
            'line-height:%dpx;overflow:hidden;white-space:nowrap;text-align:center;vertical-align:top;'
            'background:%s;color:%s;font-family:%s;font-size:%dpx;font-weight:%s;%s">%s</span>'
            % (w, h, h, bg, fg, ff, fs, fw, shadow, text))


def replace_image(tag, src, val, site):
    path = Path(site) / src
    im = Image.open(path)
    w = int(attr(tag, "width") or im.size[0])
    h = int(attr(tag, "height") or im.size[1])
    if val.startswith("@crop:"):
        frac = float(val.split(":", 1)[1])
        cw = int(round(w * frac))
        return ('<span style="display:inline-block;width:%dpx;height:%dpx;overflow:hidden;vertical-align:top">'
                '<img src="%s" width="%d" height="%d" style="display:block" /></span>' % (cw, h, src, w, h))
    if val.startswith("@icon|"):
        label = val.split("|", 1)[1]
        iw = 28
        return ('<span style="display:inline-block;width:%dpx;height:%dpx;overflow:hidden;vertical-align:top">'
                '<img src="%s" width="%d" height="%d" style="display:block" /></span>'
                '<span style="display:inline-block;height:%dpx;line-height:%dpx;vertical-align:top;'
                'padding-left:3px;color:#fff;font-family:%s;font-size:11px;font-weight:bold;white-space:nowrap">%s</span>'
                % (iw, h, src, w, h, h, h, SANS.replace('"', "'"), label))
    if val.startswith("@banner|"):
        _, a, b, c = val.split("|")
        return ('<span style="display:inline-block;width:%dpx;height:%dpx;line-height:%dpx;white-space:nowrap;'
                'vertical-align:top;color:#fff;font-family:%s;text-shadow:0 0 3px #000,0 0 2px #000">'
                '<span style="font-size:14px">%s</span> <span style="font-size:%dpx;font-weight:bold">%s</span> '
                '<span style="font-size:13px">%s</span></span>' % (w, h, h, SERIF.replace('"', "'"), a, int(h * 0.6), b, c))
    if val.startswith("@sousa|"):
        _, l1, l2 = val.split("|")
        mask = "#1b0d13"
        return ('<span style="position:relative;display:inline-block;width:%dpx;height:%dpx;vertical-align:top">'
                '<img src="%s" width="%d" height="%d" style="display:block" />'
                '<span style="position:absolute;left:0px;top:0px;width:124px;height:29px;background:%s"></span>'
                '<span style="position:absolute;left:4px;top:4px;height:24px;line-height:24px;color:#fff;'
                'font-family:%s;font-size:13px;font-weight:bold;white-space:nowrap">%s</span>'
                '<span style="position:absolute;left:5px;top:130px;width:92px;height:20px;background:%s"></span>'
                '<span style="position:absolute;left:7px;top:130px;height:20px;line-height:20px;color:#fff;'
                'font-family:%s;font-size:12px;font-weight:bold;white-space:nowrap">%s</span>'
                '</span>' % (w, h, src, w, h, mask, SANS, l1, mask, SANS, l2))
    on = "_on." in src
    bg = sample_bg(path)
    fg = "#e58aa0" if on else "#ffffff"
    serif = h >= 25
    return text_span(val, w, h, bg, fg, serif, on)


ITEMS_FRAG = ""


def transform(html, lang, site, tr, imgs, page):
    """Return (html, untranslated_japanese_runs)."""
    warn = []
    if page == "item.html" and ITEMS_FRAG:
        # the ITEMS page is an iframe of items.html (not in the mirror): inline its table
        html = re.sub(r"<iframe\b[^>]*>.*?</iframe>", lambda m: ITEMS_FRAG, html, count=1, flags=re.S | re.I)
    html = re.sub(r"<iframe\b[^>]*>.*?</iframe>", "", html, flags=re.S | re.I)
    m = re.search(r"<body\b[^>]*>", html, re.I)
    head, body = (html[: m.end()], html[m.end():]) if m else ("", html)
    if lang == "en":
        body = translate_text(body, tr, warn)

        def img_rep(mm):
            tag = mm.group(0)
            s = attr(tag, "src")
            if s and s in imgs:
                return replace_image(tag, s, imgs[s], site)
            return tag

        body = IMG_RE.sub(img_rep, body)
    html = head + body
    return inject_css(html, lang), warn


PROBE = ('<div id="__bar" style="position:fixed;left:0;top:0;width:256px;height:16px;background:#fff;z-index:2147483647"></div>'
         '<script>(function(){var h=Math.max(document.documentElement.scrollHeight,document.body.scrollHeight);'
         'var b=document.getElementById("__bar");for(var i=0;i<16;i++){var d=document.createElement("div");'
         'd.style.cssText="position:absolute;left:"+(16*i)+"px;top:0;width:16px;height:16px;background:"+'
         '(((h>>(15-i))&1)?"#000":"#fff");b.appendChild(d);}})();</script>')


def edge_run(url, out):
    """One headless Edge screenshot. A fresh profile per call costs a long first-run
    start, so one profile is reused; callers retry when Edge writes nothing."""
    return subprocess.run(edge_args(url, out=out), capture_output=True, timeout=180)


def edge_args(url, out=None, dump=False, profile=None):
    args = [EDGE, "--headless=new", "--disable-gpu", "--hide-scrollbars", "--no-first-run",
            "--user-data-dir=" + str(profile or Path(tempfile.gettempdir()) / "mkweb_edge_profile"),
            "--force-device-scale-factor=%s" % SCALE, "--window-size=%d,%d" % (WIN_W, WIN_H)]
    if dump:
        args.append("--dump-dom")
    else:
        args.append("--screenshot=" + str(out))
    args.append(Path(url).as_uri() if not url.startswith("file:") else url)
    return args


def page_height(path):
    """Edge's --dump-dom gives no stdout here, so the probe paints the page's
    scrollHeight into a 16-cell black/white bar (top left) and this reads it back."""
    shot = Path(path).with_suffix(".probe.png")
    if shot.exists():
        shot.unlink()
    for attempt in range(6):
        edge_run(str(path), shot)
        if shot.exists() and shot.stat().st_size > 0:
            break
        time.sleep(2 + attempt)
    if not shot.exists():
        raise RuntimeError("height probe failed for %s" % path)
    im = Image.open(shot).convert("L")
    h = 0
    for i in range(16):
        x = int((16 * i + 8) * SCALE)
        y = int(8 * SCALE)
        bit = 1 if im.getpixel((x, y)) < 128 else 0
        h = (h << 1) | bit
    if h < WIN_H:
        h = WIN_H
    return h


def render_slide(lang, page_html, name, outdir):
    """Render a transformed page to a list of 1280x720 chunk images."""
    probe = outdir / ("_probe_%s.html" % name)
    if re.search(r"</body>", page_html, re.I):
        probe_html = re.sub(r"</body>", lambda m: PROBE + m.group(0), page_html, count=1, flags=re.I)
    else:
        probe_html = page_html + PROBE
    probe.write_text(probe_html, encoding="utf-8")
    H = page_height(probe)
    n = max(1, math.ceil(H / WIN_H))
    zoom = ""
    if WIN_H < H <= WIN_H + 80:
        # a few px over one screen (the character pages): shrink to one 1280x720 chunk
        # instead of a near-empty second chunk
        n = 1
        zoom = "html{zoom:%.4f !important}" % (WIN_H / H)
    chunks = []
    for k in range(n):
        extra = '<style>body{margin-top:-%dpx !important}%s</style>' % (WIN_H * k, zoom)
        if re.search(r"</head>", page_html, re.I):
            chunk_html = re.sub(r"</head>", lambda m: extra + m.group(0), page_html, count=1, flags=re.I)
        else:
            chunk_html = extra + page_html
        cf = outdir / ("_chunk_%s.html" % name)
        cf.write_text(chunk_html, encoding="utf-8")
        shot = outdir / ("_shot_%s.png" % name)
        if shot.exists():
            shot.unlink()
        for attempt in range(6):
            edge_run(str(cf), shot)
            if shot.exists() and shot.stat().st_size > 0:
                break
            time.sleep(2 + attempt)
        if not shot.exists():
            raise RuntimeError("screenshot failed: %s chunk %d" % (name, k))
        im = Image.open(shot).convert("RGB")
        if im.size != (CHUNK_W, CHUNK_H):
            canvas = Image.new("RGB", (CHUNK_W, CHUNK_H), (0, 0, 0))
            canvas.paste(im.crop((0, 0, min(im.width, CHUNK_W), min(im.height, CHUNK_H))), (0, 0))
            im = canvas
        chunks.append(im)
    return chunks, H


# ------------------------------------------------------------ images ----

def is_baseline_jpeg(data):
    i_base = data.find(b"\xff\xc0")
    i_prog = data.find(b"\xff\xc2")
    if i_prog >= 0 and (i_base < 0 or i_prog < i_base):
        return False
    return i_base >= 0


def jpeg_bytes(im, q):
    buf = io.BytesIO()
    im.convert("RGB").save(buf, "JPEG", quality=q, progressive=False)
    return buf.getvalue()


def map_entry(site, n):
    p = Path(site) / "imgs" / "stage" / ("stage_stage%d.jpg" % n)
    data = p.read_bytes()
    im = Image.open(io.BytesIO(data))
    if im.mode != "RGB" or not is_baseline_jpeg(data):
        log("  map.%d re-encoded (mode %s, baseline=%s)" % (n, im.mode, is_baseline_jpeg(data)))
        data = jpeg_bytes(im, 92)
    return data, im.size[0], im.size[1]


def boss_bbox(im):
    w, h = im.size
    px = im.load()
    minx, miny, maxx, maxy = w, h, 0, 0
    for y in range(0, h, 3):
        for x in range(0, w, 3):
            r, g, b = px[x, y]
            mx = max(r, g, b)
            if mx > 110 and mx - min(r, g, b) > 35:
                minx, maxx = min(minx, x), max(maxx, x)
                miny, maxy = min(miny, y), max(maxy, y)
    return minx, miny, maxx, maxy


# x extent of the Latin name word in each boss background (measured by eye on the name band)
WORD_X = {1: (33, 300), 2: (33, 245), 3: (33, 390), 4: (33, 350), 5: (33, 255), 6: (33, 300)}


def boss_entry(site, n):
    im = Image.open(Path(site) / "imgs" / BOSSES[n]["bg"]).convert("RGB")
    w, h = im.size
    x0, y0, x1, y1 = boss_bbox(im)
    bx0, bx1 = max(0, x0 - 24), min(w, x1 + 24)
    wx0, wx1 = WORD_X[n]
    if bx0 < wx1 + 4 and bx1 > wx0 - 4:
        # the picture overlaps the name word: keep the whole word (never half a letter)
        bx0 = min(bx0, wx0 - 6)
    box = (bx0, 0, bx1, min(h, y1 + 24))
    c = im.crop(box)
    s = min(370 / c.width, 720 / c.height)
    c = c.resize((max(1, round(c.width * s)), max(1, round(c.height * s))), Image.LANCZOS)
    return jpeg_bytes(c, 92), c.width, c.height, box


def argb_be(im):
    rgba = im.convert("RGBA").tobytes()
    out = bytearray(len(rgba))
    out[0::4] = rgba[3::4]
    out[1::4] = rgba[0::4]
    out[2::4] = rgba[1::4]
    out[3::4] = rgba[2::4]
    return bytes(out)


def fit_width(im, max_w):
    if im.width <= max_w:
        return im
    s = max_w / im.width
    return im.resize((max_w, max(1, round(im.height * s))), Image.LANCZOS)


def font(name, size):
    try:
        return ImageFont.truetype(str(WIN_FONTS / name), size)
    except Exception:
        return ImageFont.load_default()


def render_plate(lines, max_w, big, small, outline=2):
    """lines: [(text, is_big)] -> RGBA plate, shrunk to max_w."""
    scale = 1.0
    for _ in range(12):
        fb = font("timesbd.ttf", max(6, int(big * scale)))
        fs = font("times.ttf", max(6, int(small * scale)))
        tmp = Image.new("RGBA", (10, 10))
        d = ImageDraw.Draw(tmp)
        boxes = []
        for text, is_big in lines:
            f = fb if is_big else fs
            boxes.append((text, f, d.textbbox((0, 0), text, font=f, stroke_width=outline)))
        width = max(b[2][2] - b[2][0] for b in boxes)
        if width <= max_w:
            break
        scale *= max_w / width * 0.98
    gap = max(2, int(big * 0.1))
    height = sum(b[2][3] - b[2][1] for b in boxes) + gap * (len(boxes) - 1)
    canvas = Image.new("RGBA", (width + 8, height + 8), (0, 0, 0, 0))
    d = ImageDraw.Draw(canvas)
    y = 4
    for text, f, bb in boxes:
        x = 4 + (width - (bb[2] - bb[0])) // 2 - bb[0]
        d.text((x, y - bb[1]), text, font=f, fill=(255, 255, 255, 255),
               stroke_width=outline, stroke_fill=(0, 0, 0, 255))
        y += bb[3] - bb[1] + gap
    return canvas


def stitle_en(sub, stage_no):
    im = render_plate([("STAGE %d" % stage_no, True), (sub, False)], 360, 30, 19)
    return fit_width(im, 360)


def build_gadgets(site, en_titles, log_fn=log):
    entries = []
    for n in range(1, 7):
        data, w, h = map_entry(site, n)
        entries.append(("map.%d" % n, 1, w, h, data))
    boss_box = {}
    for n in range(1, 7):
        data, w, h, box = boss_entry(site, n)
        boss_box[n] = box
        entries.append(("boss.%d" % n, 1, w, h, data))
    for n in range(1, 7):
        # JA plate: site's enemy gif, 2x (fit 360 wide)
        g = Image.open(Path(site) / "imgs" / BOSSES[n]["gif"]).convert("RGBA")
        g = g.resize((g.width * 2, g.height * 2), Image.NEAREST)
        g = fit_width(g, 360)
        entries.append(("bname.%d.ja" % n, 2, g.width, g.height, zlib.compress(argb_be(g), 9)))
        # EN plate: rendered, two lines
        a, b = BOSSES[n]["en"]
        pre = BOSSES[n]["pre"]
        p = render_plate([(pre, False), (a, True), (b, False)], 360, 34, 18)
        entries.append(("bname.%d.en" % n, 2, p.width, p.height, zlib.compress(argb_be(p), 9)))
    for n in range(1, 7):
        st = Path(site) / "imgs" / "stage" / ("stage_st%dttl_b.gif" % n)
        g = Image.open(st).convert("RGBA")
        g = fit_width(g, 360)
        entries.append(("stitle.%d.ja" % n, 2, g.width, g.height, zlib.compress(argb_be(g), 9)))
        sub = en_titles.get(n, "")
        p = stitle_en(sub, n)
        entries.append(("stitle.%d.en" % n, 2, p.width, p.height, zlib.compress(argb_be(p), 9)))
    return entries, boss_box


def pack_dat(entries):
    count = len(entries)
    header_len = 12 + 44 * count
    pos = header_len
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


# ------------------------------------------------------------- main ----

def main():
    args = [a for a in sys.argv[1:] if not a.startswith("--")]
    redo = None
    only_lang = None
    for a in sys.argv[1:]:
        if a.startswith("--redo="):
            redo = {int(x) for x in a.split("=", 1)[1].split(",") if x}
        if a.startswith("--lang="):
            only_lang = a.split("=", 1)[1]
    if not args:
        print(__doc__)
        sys.exit(2)
    site = Path(args[0]).resolve()
    if not (site / "story.html").exists():
        sys.exit("not a site mirror: %s" % site)
    tr_all = json.loads((HERE / "en.json").read_text(encoding="utf-8"))
    tr = {k: v for k, v in tr_all.items() if not k.startswith("img:")}
    imgs = {k[4:]: v for k, v in tr_all.items() if k.startswith("img:")}

    if BUILD.exists():
        shutil.rmtree(BUILD)
    BUILD.mkdir(parents=True)
    PREVIEW.mkdir(parents=True, exist_ok=True)
    if redo is None:
        for f in PREVIEW.glob("*.png"):
            f.unlink()
    global ITEMS_FRAG
    frag = WEB / "extra" / "items_body.html"
    ITEMS_FRAG = frag.read_text(encoding="utf-8") if frag.exists() else ""
    langdirs = {}
    for lang in ("ja", "en"):
        d = BUILD / lang
        shutil.copytree(site, d)
        if (WEB / "extra" / "imgs").exists():
            shutil.copytree(WEB / "extra" / "imgs", d / "imgs", dirs_exist_ok=True)
        langdirs[lang] = d

    slides = []   # (index, label, group, lang->list of chunk images)
    en_titles = {}
    summary = []
    for idx, (label, page, group) in enumerate(SLIDES):
        per_lang = {}
        for lang in ("ja", "en"):
            if redo is not None and (idx not in redo or (only_lang and lang != only_lang)):
                # reuse the previews rendered by an earlier run
                files = sorted(PREVIEW.glob("%s_%02d_*.png" % (lang, idx)))
                per_lang[lang] = [Image.open(f).convert("RGB") for f in files]
                log("%-20s %s reused previews (%d)" % (label, lang, len(per_lang[lang])))
                continue
            src_html = (site / page).read_text(encoding="utf-8")
            html, warn = transform(src_html, lang, str(site), tr, imgs, page)
            if warn:
                log("  UNTRANSLATED %s %s: %s" % (lang, page, warn))
            # the transformed page lives in the language copy so relative images resolve
            page_path = langdirs[lang] / page
            page_path.write_text(html, encoding="utf-8")
            chunks, H = render_slide(lang, html, "%s_%02d" % (lang, idx), langdirs[lang])
            for k, im in enumerate(chunks):
                im.save(PREVIEW / ("%s_%02d_%02d.png" % (lang, idx, k)))
            per_lang[lang] = chunks
            log("%-20s %s  H=%d  chunks=%d" % (label, lang, H, len(chunks)))
        slides.append((idx, label, group, per_lang))
        summary.append((label, len(per_lang["ja"]), len(per_lang["en"])))

    # stage titles: EN subtitle text (after the "Stage N: " prefix)
    for n in range(1, 7):
        v = tr_all.get("img:imgs/stage/stage_st%dttl_b.gif" % n, "")
        en_titles[n] = v.split(": ", 1)[1] if ": " in v else v

    entries = []
    for idx, label, group, per_lang in slides:
        for lang in ("ja", "en"):
            for k, im in enumerate(per_lang[lang]):
                data = jpeg_bytes(im, 90)
                entries.append(("st.%s.%02d.%02d" % (lang, idx, k), 1, CHUNK_W, CHUNK_H, data))
    idx_payload = bytearray(struct.pack(">H", len(slides)))
    for idx, label, group, per_lang in slides:
        idx_payload += struct.pack(">BB", group, len(per_lang["en"]))
        idx_payload += label.encode("ascii").ljust(30, b" ")[:30]
    entries.insert(0, ("story.idx", 3, 0, 0, bytes(idx_payload)))

    gad, boss_box = build_gadgets(str(site), en_titles)
    entries += gad
    # test 122: the stage map's background, the site's stage_bg.jpg unchanged (kind 1 = JPEG); addbg.py adds it to an
    # existing dat without the Edge render
    bg = site / "imgs" / "stage" / "stage_bg.jpg"
    entries.append(("bg.stage", 1, 540, 800, bg.read_bytes()))
    for n, box in boss_box.items():
        log("boss.%d crop box %s" % (n, box))

    dat = pack_dat(entries)
    OUT_DAT.parent.mkdir(parents=True, exist_ok=True)
    OUT_DAT.write_bytes(dat)

    log("")
    log("entries: %d" % len(entries))
    for label, cj, ce in summary:
        log("  %-20s chunks ja=%d en=%d" % (label, cj, ce))
    log("ibaraweb.dat: %s  %d bytes (%.2f MB)" % (OUT_DAT, len(dat), len(dat) / 1048576.0))


if __name__ == "__main__":
    main()

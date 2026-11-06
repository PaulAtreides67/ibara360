# tools/web: ibaraweb.dat (STORY slides + stage/boss gadget data)

`mkweb.py` builds `host/xsdk/ibara360/out/ibaraweb.dat` (format: work/g121/SPEC.md) and the
preview PNGs in `work/g121/web/preview/`.

## Run

    python -I tools/web/mkweb.py "C:\New folder\ibara website\site"

- Needs Python 3 with Pillow. The PC in use has Pillow only in a user site that `-I` hides, so
  it runs from a venv: `work\g121\web\venv` (`python -m venv`, `pip install pillow`), then
  `work\g121\web\venv\Scripts\python.exe -I tools\web\mkweb.py <site>`.
- Needs headless Microsoft Edge at `C:\Program Files (x86)\Microsoft\Edge\Application\msedge.exe`.
- Needs the Windows fonts `times.ttf`, `timesbd.ttf`, `arial.ttf` (for the English plates).
- The site mirror is only read. Pages are copied to `work\g121\web\build\` and translated there.
- `--redo=3,4,5` re-renders only those slide indexes (SLIDES order in mkweb.py) and reuses the
  previews of the others from the last full run. Without it, everything is rendered (about 40 min).

## Inputs

- `tools/web/en.json`: every English string, one reviewable file.
  - Keys without `img:` are the Japanese text runs of the pages (exact text between tags, whitespace
    collapsed). An empty value deletes that run and the `<BR>` after it (used to merge a paragraph into
    its first line).
  - Keys with `img:` are the Japanese-bearing images. Values: plain text (the image is replaced by
    HTML text at the same size, background sampled from the gif), `@crop:F` (keep the left F of the
    image: the Latin word of a title), `@icon|LABEL` (keep the icon, add a label), `@sousa|A|B`
    (the control picture with two label boxes).

## Output

- Slides: 22 (3 STORY, 5 SYSTEM, 6 STAGE, 8 CHARACTER), each JA and EN, 1280x720 chunks
  (`st.<lang>.SS.CC`). Pages are rendered 800x450 CSS px at 1.6x, one 450-px band per chunk.
- Gadgets: `map.N`, `boss.N`, `bname.N.ja/en`, `stitle.N.ja/en`.
- Offsets in the dat are absolute from the start of the file.

## Known limits

- `item.html` only holds an iframe (`items.html`, not in the mirror): the ITEMS slide is empty.
- Story titles "Story" and "ストーリー" are one baked background image: the katakana stays.
- The 鋳薔薇 logo (com_sholder.gif) is replaced by the text "IBARA".
- `stitle` / `bname` JA plates are fitted to 360 px wide (not the 1.5x / 2x in the spec when wider).

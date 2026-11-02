/* Test 97 (user 2026-10-31: "integrate gallery.mp3 into ibara360.xex (compress it without sacrificing audio
 * quality)"): the gallery's music inside the launcher, gen/launcher/gallery_mp3.z = 05.Endress_Train.mp3's MPEG frames
 * byte for byte (its ID3 tags off), zlib'd by tools/launcher/mkmp3.py (gallery_mp3.h: the sizes and the CRC);
 * launcher.c inflates it on its load thread. The assembler finds the file by CMakeLists.txt's -Wa,-I. */
	.section .rodata
	.balign 16
	.globl gallery_mp3_z
	.type gallery_mp3_z, @object
gallery_mp3_z:
	.incbin "gallery_mp3.z"
	.size gallery_mp3_z, . - gallery_mp3_z

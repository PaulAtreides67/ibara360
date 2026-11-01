// Test 72: the XAM loader exports xsdk does not import yet (xsdk-src 49307c7's imports/imports.txt has only
// XamLoaderTerminateTitle), in the form xsdk's tools/gen_imports.py writes: a slot and a thunk per function, and the
// record elf2xex.py reads from .xsdk.imports to build the import libraries header. Ordinals from Xenia's
// src/xenia/kernel/xam/xam_table.inc (checked 2026-10-25): 0x1A4 XamLoaderLaunchTitle, 0x1A6 XamLoaderSetLaunchData,
// 0x1A7 XamLoaderGetLaunchDataSize, 0x1A8 XamLoaderGetLaunchData (0x1A9 XamLoaderTerminateTitle, xsdk's, between).
// Called by the console's convention, as every xsdk import (xsdk/kernel.h's declarations; here launch.h's).

	.section .rodata.xsdk_imp_XamLoaderLaunchTitle, "a"
	.balign 4
	.globl	xsdk_imp_XamLoaderLaunchTitle
xsdk_imp_XamLoaderLaunchTitle:
	.long	0x000001a4

	.section .text.xsdk_thunk_XamLoaderLaunchTitle, "ax"
	.balign 16
// The loader rewrites the first two words to load the export's address into r11.
	.globl	XamLoaderLaunchTitle
	.type	XamLoaderLaunchTitle, @function
XamLoaderLaunchTitle:
	.long	0x010001a4
	.long	0x020001a4
	mtctr	r11
	bctr
	.size	XamLoaderLaunchTitle, . - XamLoaderLaunchTitle

	.section .xsdk.imports, ""
	.long	xsdk_imp_XamLoaderLaunchTitle
	.long	XamLoaderLaunchTitle
	.long	0x1a4
	.long	0
	.ascii	"xam.xex\0\0\0\0\0\0\0\0\0"

	.section .rodata.xsdk_imp_XamLoaderSetLaunchData, "a"
	.balign 4
	.globl	xsdk_imp_XamLoaderSetLaunchData
xsdk_imp_XamLoaderSetLaunchData:
	.long	0x000001a6

	.section .text.xsdk_thunk_XamLoaderSetLaunchData, "ax"
	.balign 16
	.globl	XamLoaderSetLaunchData
	.type	XamLoaderSetLaunchData, @function
XamLoaderSetLaunchData:
	.long	0x010001a6
	.long	0x020001a6
	mtctr	r11
	bctr
	.size	XamLoaderSetLaunchData, . - XamLoaderSetLaunchData

	.section .xsdk.imports, ""
	.long	xsdk_imp_XamLoaderSetLaunchData
	.long	XamLoaderSetLaunchData
	.long	0x1a6
	.long	0
	.ascii	"xam.xex\0\0\0\0\0\0\0\0\0"

	.section .rodata.xsdk_imp_XamLoaderGetLaunchDataSize, "a"
	.balign 4
	.globl	xsdk_imp_XamLoaderGetLaunchDataSize
xsdk_imp_XamLoaderGetLaunchDataSize:
	.long	0x000001a7

	.section .text.xsdk_thunk_XamLoaderGetLaunchDataSize, "ax"
	.balign 16
	.globl	XamLoaderGetLaunchDataSize
	.type	XamLoaderGetLaunchDataSize, @function
XamLoaderGetLaunchDataSize:
	.long	0x010001a7
	.long	0x020001a7
	mtctr	r11
	bctr
	.size	XamLoaderGetLaunchDataSize, . - XamLoaderGetLaunchDataSize

	.section .xsdk.imports, ""
	.long	xsdk_imp_XamLoaderGetLaunchDataSize
	.long	XamLoaderGetLaunchDataSize
	.long	0x1a7
	.long	0
	.ascii	"xam.xex\0\0\0\0\0\0\0\0\0"

	.section .rodata.xsdk_imp_XamLoaderGetLaunchData, "a"
	.balign 4
	.globl	xsdk_imp_XamLoaderGetLaunchData
xsdk_imp_XamLoaderGetLaunchData:
	.long	0x000001a8

	.section .text.xsdk_thunk_XamLoaderGetLaunchData, "ax"
	.balign 16
	.globl	XamLoaderGetLaunchData
	.type	XamLoaderGetLaunchData, @function
XamLoaderGetLaunchData:
	.long	0x010001a8
	.long	0x020001a8
	mtctr	r11
	bctr
	.size	XamLoaderGetLaunchData, . - XamLoaderGetLaunchData

	.section .xsdk.imports, ""
	.long	xsdk_imp_XamLoaderGetLaunchData
	.long	XamLoaderGetLaunchData
	.long	0x1a8
	.long	0
	.ascii	"xam.xex\0\0\0\0\0\0\0\0\0"

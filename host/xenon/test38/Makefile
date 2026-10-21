#---------------------------------------------------------------------------------
# Clear the implicit built in rules
#---------------------------------------------------------------------------------
.SUFFIXES:
#---------------------------------------------------------------------------------
ifeq ($(strip $(DEVKITXENON)),)
$(error "Please set DEVKITXENON in your environment. export DEVKITXENON=<path to>devkitPPC")
endif

include $(DEVKITXENON)/rules

#---------------------------------------------------------------------------------
# TARGET is the name of the output
# BUILD is the directory where object files & intermediate files will be placed
# SOURCES is a list of directories containing source code
# INCLUDES is a list of directories containing extra header files
#---------------------------------------------------------------------------------
TARGET		:=	ibara360_test38
BUILD		:=	build
# the recompiled games: the shared runtime and sh3rec's output, as the PC host builds them;
# test 38: both games (gen/ibarablk_drc's names and files carry sh3rec's --prefix blk_)
GAMES		:=	ibara_drc ibarablk_drc
SOURCES		:=	source usbfix excfix netfix ../../../runtime $(addprefix ../../../gen/,$(GAMES))
DATA		:=	data
INCLUDES	:=	../../../runtime

#---------------------------------------------------------------------------------
# options for code generation
#---------------------------------------------------------------------------------

# -fno-strict-aliasing: the RAM macros read u16/u32 through u8 buffers; -fwrapv,
# -fsigned-char and -ffp-contract=off: the same arithmetic as the PC host (x86 chars
# are signed; no fused multiply-add in the vblank schedule's doubles)
# -DCV1K_VRAM_STRIDE=0x2040 (test 11d): VRAM rows padded by 128 bytes, see runtime/cv1k.h
# -DCV1K_PCB (test 13): MAME 0.289's SH7709S cache/SDRAM timing (runtime/pcb.c), with
# gen/ibara_drc (sh3rec --drc: cycles charged as MAME's SH DRC charges them)
CFLAGS	= -g -O2 -Wall -Wno-unused-label -Wno-unused-variable -Wno-unused-but-set-variable 	-fno-strict-aliasing -fwrapv -fsigned-char -ffp-contract=off $(MACHDEP) $(INCLUDE) -DCV1K_VRAM_STRIDE=0x2040 -DCV1K_PCB
CXXFLAGS	=	$(CFLAGS)

# excfix/except.S (libxenon's exception vectors + test 11c's TLB reload counters):
# libxenon's own AFLAGS are -m32 plus include paths
ASFLAGS	=	-m32 $(INCLUDE)

LDFLAGS	=	-g $(MACHDEP) -Wl,--gc-sections -Wl,-Map,$(notdir $@).map

#---------------------------------------------------------------------------------
# any extra libraries we wish to link with the project
#---------------------------------------------------------------------------------
LIBS	:=	-lfat -lz -lxenon -lm

#---------------------------------------------------------------------------------
# list of directories containing libraries, this must be the top level containing
# include and lib
#---------------------------------------------------------------------------------
LIBDIRS	:=

#---------------------------------------------------------------------------------
# no real need to edit anything past this point unless you need to add additional
# rules for different file extensions
#---------------------------------------------------------------------------------
ifneq ($(BUILD),$(notdir $(CURDIR)))
#---------------------------------------------------------------------------------

export OUTPUT	:=	$(CURDIR)/$(TARGET)

export VPATH	:=	$(foreach dir,$(SOURCES),$(CURDIR)/$(dir)) \
					$(foreach dir,$(DATA),$(CURDIR)/$(dir))

export DEPSDIR	:=	$(CURDIR)/$(BUILD)

#---------------------------------------------------------------------------------
# automatically build a list of object files for our project
#---------------------------------------------------------------------------------
CFILES		:=	$(foreach dir,$(SOURCES),$(notdir $(wildcard $(dir)/*.c)))
CPPFILES	:=	$(foreach dir,$(SOURCES),$(notdir $(wildcard $(dir)/*.cpp)))
sFILES		:=	$(foreach dir,$(SOURCES),$(notdir $(wildcard $(dir)/*.s)))
SFILES		:=	$(foreach dir,$(SOURCES),$(notdir $(wildcard $(dir)/*.S)))
BINFILES	:=	$(foreach dir,$(DATA),$(notdir $(wildcard $(dir)/*.*)))

#---------------------------------------------------------------------------------
# use CXX for linking C++ projects, CC for standard C
#---------------------------------------------------------------------------------
ifeq ($(strip $(CPPFILES)),)
	export LD	:=	$(CC)
else
	export LD	:=	$(CXX)
endif

export OFILES	:=	$(addsuffix .o,$(BINFILES)) \
					$(CPPFILES:.cpp=.o) $(CFILES:.c=.o) \
					$(sFILES:.s=.o) $(SFILES:.S=.o)

#---------------------------------------------------------------------------------
# build a list of include paths
#---------------------------------------------------------------------------------
export INCLUDE	:=	$(foreach dir,$(INCLUDES),-I$(CURDIR)/$(dir)) \
					$(foreach dir,$(LIBDIRS),-I$(dir)/include) \
					-I$(CURDIR)/$(BUILD) \
					-I$(LIBXENON_INC)

#---------------------------------------------------------------------------------
# build a list of library paths
#---------------------------------------------------------------------------------
export LIBPATHS	:=	$(foreach dir,$(LIBDIRS),-L$(dir)/lib) \
					-L$(LIBXENON_LIB)

export OUTPUT	:=	$(CURDIR)/$(TARGET)
.PHONY: $(BUILD) clean

#---------------------------------------------------------------------------------
$(BUILD):
	@[ -d $@ ] || mkdir -p $@
	@make --no-print-directory -C $(BUILD) -f $(CURDIR)/Makefile

#---------------------------------------------------------------------------------
clean:
	@echo clean ...
	@rm -fr $(BUILD) $(OUTPUT).elf $(OUTPUT).elf32

#---------------------------------------------------------------------------------
else

DEPENDS	:=	$(OFILES:.o=.d)

# usbfix/ohci_fix.c replaces libxenon's ohci.o (it defines ohci_driver and ohcidebug,
# so the archive member is never pulled in). Built with libxenon's own flags
# (ports/xenon/Makefile) so that, apart from the fix, the code is the same.
# Test 19: usbfix/ohci_poll.c (usb_poll on each bus, for pad reads inside file writes)
# sees the same headers with the same flags.
# Test 23: usbfix/usbctrl_fix.c replaces libxenon's usbctrl.o the same way (wired pads:
# only "00 14" packets are input reports); unchanged, it builds to libxenon.a's member.
ohci_fix.o ohci_poll.o usbctrl_fix.o: CFLAGS =-g -mcpu=cell -mtune=cell -Os -maltivec \
	-ffunction-sections -fdata-sections -fwrapv \
	-Wall -Wno-format -Wno-attributes -DBYTE_ORDER=BIG_ENDIAN \
	-Wno-error=int-conversion -Wno-error=implicit-function-declaration -Wno-error=incompatible-pointer-types \
	-m32 -fno-pic -mpowerpc64 -D_CFE_=1 -DENDIAN_BIG=1 \
	-I$(DEPSDIR)/../usbfix -I$(LIBXENON_INC)

# test 16: netfix/enet_quiet.c replaces libxenon's enet.o (it defines enet_init, enet_poll
# and enet_quiesce), netfix/sntp.c drives lwIP. Both see lwIP's headers as libxenon's own
# objects do: libxenon's flags, BYTE_ORDER=BIG_ENDIAN above all (lwIP's byte order).
LWIPFLAGS = -g -mcpu=cell -mtune=cell -Os -maltivec \
	-ffunction-sections -fdata-sections -fwrapv \
	-Wall -Wno-format -Wno-attributes -DBYTE_ORDER=BIG_ENDIAN \
	-m32 -fno-pic -mpowerpc64 -D_CFE_=1 -DENDIAN_BIG=1 \
	-I$(DEPSDIR)/../source -I$(LIBXENON_INC)
enet_quiet.o: CFLAGS = $(LWIPFLAGS)
sntp.o: CFLAGS = $(LWIPFLAGS)

#---------------------------------------------------------------------------------
# main targets
#---------------------------------------------------------------------------------
$(OUTPUT).elf32: $(OUTPUT).elf
$(OUTPUT).elf: $(OFILES)

-include $(DEPENDS)

#---------------------------------------------------------------------------------
endif
#---------------------------------------------------------------------------------


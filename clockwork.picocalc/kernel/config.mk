QEMU_FLAGS = -M raspi2b -m 1024M -serial mon:stdio

ARCH_CFLAGS = -march=armv7ve

ARCH_VER=v7
BSP=rk3506

#----enable DPI display---
#DPI=yes
#----multi core(SMP)------
SMP=yes
#DEBUG=yes

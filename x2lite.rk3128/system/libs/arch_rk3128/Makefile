SYS_DIR=../../../../../system
include $(SYS_DIR)/platform/$(ARCH)/make.rule

BUILD_DIR = $(SYS_DIR)/build/$(HW)
TARGET_DIR = $(BUILD_DIR)

LDFLAGS = -L$(TARGET_DIR)/lib

CFLAGS += -I$(SYS_DIR)/basic/libc/libewoksys/ewoksys/include -Iinclude -I $(TARGET_DIR)/include

LIB_ARCH_RK3128_OBJS = src/framebuffer.o \
	src/dwmmc.o \
	src/sd.o 

ARCH_RK3128 = $(TARGET_DIR)/lib/libarch_rk3128.a

$(ARCH_RK3128): $(LIB_ARCH_RK3128_OBJS)
	$(AR) rcs $(ARCH_RK3128) $(LIB_ARCH_RK3128_OBJS)
	cp -r include/* $(TARGET_DIR)/include

clean:
	rm -f $(LIB_ARCH_RK3128_OBJS)
	rm -f $(ARCH_RK3128)



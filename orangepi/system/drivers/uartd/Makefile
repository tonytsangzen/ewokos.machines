SYS_DIR=../../../../../system
include $(SYS_DIR)/platform/$(ARCH)/make.rule

BUILD_DIR = $(SYS_DIR)/build/$(HW)
TARGET_DIR = $(BUILD_DIR)/rootfs

LDFLAGS = -L$(BUILD_DIR)/lib

CFLAGS += -I $(BUILD_DIR)/include

MS_UARTD_OBJS = uartd.o

MS_UARTD = $(TARGET_DIR)/drivers/orangepi/uartd

$(MS_UARTD): $(MS_UARTD_OBJS) \
		$(EWOK_LIBC_A) 
	$(LD) -Ttext=100 $(MS_UARTD_OBJS) -o $(MS_UARTD) $(LDFLAGS) $(EWOK_LIBC)

clean:
	rm -f $(MS_UARTD_OBJS) $(MS_UARTD)

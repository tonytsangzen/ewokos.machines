#include <bsp/bsp_sd.h>
#include <stdint.h>
#include <sysinfo.h>
#include <string.h>
#include <ewoksys/syscall.h>
#include <sd/sd.h>
#include <arch/rk3506/sd.h>

int bsp_sd_init(void) {
  sys_info_t sysinfo;
  syscall1(SYS_GET_SYS_INFO, (int32_t)&sysinfo);
  int res = sd_init(rk3506_sd_init, rk3506_sd_read_sector, rk3506_sd_write_sector);
	return res;
}


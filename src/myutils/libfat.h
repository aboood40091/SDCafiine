#ifndef __LIBFAT_MOUNT_H_
#define __LIBFAT_MOUNT_H_

#ifdef __cplusplus
extern "C" {
#endif

int32_t mount_libfatAll();
void unmount_libfat(const char * path);

#ifdef __cplusplus
}
#endif

#endif

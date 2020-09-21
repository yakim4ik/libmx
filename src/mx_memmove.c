#include "libmx.h"

void *mx_memmove(void *dst, const void *src, size_t len) {
    unsigned char *dst_temp = (unsigned char *)dst;
    unsigned char *src_temp = (unsigned char *)src;
    for (size_t i = 0; i < len && src_temp; i++)
        dst_temp[i] = src_temp[i];
    return dst_temp;
}

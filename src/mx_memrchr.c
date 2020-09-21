#include "libmx.h"

void *mx_memrchr(const void *s, int c, size_t n) {
    if (s)
        for(size_t i = (mx_strlen_best(s) - 1); i > mx_strlen_best(s) - n; i--)
            if (((const unsigned char *)s)[i] == (unsigned char)c)
                return &(((unsigned char *)s)[i]);
    return NULL;
}

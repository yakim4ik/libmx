#include "libmx.h"

void *mx_realloc(void *ptr, size_t size) {
    size_t size_prt = malloc_size(ptr);
    unsigned char *new_ptr = (unsigned char *)ptr;
    
    if (size == 0) {
        free(new_ptr);
        // errno = ENOENT;
        return NULL;
    } else if (new_ptr == NULL)
        return malloc(size);
    if (size_prt < size)
        new_ptr = malloc(size);
    new_ptr = mx_memcpy(new_ptr, ptr, size);
    free(ptr);
    return new_ptr;
}

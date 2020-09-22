#include "libmx.h"

char *mx_strndup(const char *s1, size_t n) {
    char *result = NULL;
    size_t size = (unsigned int) mx_strlen_best(s1);

    if (s1 == NULL && n == 0) {
        return mx_strnew(0);
    }
    if (size < n)
        result = mx_strdup(s1);
    else {
        result = mx_strnew(n);
        result = mx_strncpy(result, s1, n);
    }
    return result;
}

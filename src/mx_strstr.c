#include "libmx.h"

char *mx_strstr(const char *s1, const char *s2) {
    const char *result = s1;

    if (mx_strlen(s2) == 0)
        return (char *) result;
    for ( ; (result = mx_strchr(result, *s2)) != 0; result++)
        if (mx_strncmp(result, s2, mx_strlen(s2)) == 0)
            return (char *) result;
    return 0;
}


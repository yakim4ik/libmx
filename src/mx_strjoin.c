#include "libmx.h"

char *mx_strjoin(const char *s1, const char *s2) {
    char *result = NULL;

    if (s1 == NULL && s2 == NULL)
        return NULL;
    if (s1 == NULL)
        return mx_strdup(s2);
    if (s2 == NULL)
        return mx_strdup(s1);
    result = mx_strnew(mx_strlen_best(s1) + mx_strlen_best(s2));
    result = mx_strcat(mx_strcpy(result, s1), s2);
    return result;
}

#include "libmx.h"

char *mx_strtrim(const char *str) {
    char *cleared = NULL;
    int length;

    if (str == NULL)
        return NULL;
    while(mx_isspace(*str))
        str++;
    length = mx_strlen(str);
    for (int i = length - 1; mx_isspace(str[i]); i--)
        length--;
    if (length < 0) {
        cleared = mx_strnew(0); 
        return cleared;
    }
    cleared = mx_strnew(length);
    cleared = mx_strncpy(cleared, str, length);
    return cleared;
}

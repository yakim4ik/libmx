#include "libmx.h"

char *mx_replace_substr(const char *str, const char *sub, const char *replace) {
    char *res = NULL;

    if (str && sub && replace) {
        res = mx_strnew(mx_strlen(str) + (mx_strlen(replace) - mx_strlen(sub) 
                        * mx_count_substr(str, sub)));
        for(int i = 0; *str != '\0';)
            if (!mx_strncmp(str, sub, mx_strlen(sub))) {
                mx_strcat(res, replace);
                i += mx_strlen(replace);
                str += mx_strlen(sub);
            } else 
                res[i++] = *str++;
    }
    return res;
}

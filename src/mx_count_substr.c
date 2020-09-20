#include "libmx.h"

int mx_count_substr(const char *str, const char *sub) {
    const char *temp = str;
    int i;

    if (str == NULL || sub == NULL)
        return -1;
    if (mx_strlen_best(sub) == 0 || mx_strlen_best(str) == 0)
        return 0;
    for(i = 0; (temp = mx_strstr(temp, sub)) != 0; i++)
        temp++;
    return i;
}

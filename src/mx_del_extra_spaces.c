#include "libmx.h"

char *mx_del_extra_spaces(const char *str) {
    char *result = NULL;
    char *temp = NULL;
    int j = 0;

    if (NULL == str)
        return NULL;
    temp = mx_strnew(mx_strlen(str));
    for (int i = 0; str[i] != '\0'; i++) {
        if (mx_isspace(str[i]) == 0) {
            temp[j] = str[i];
            j++;
        }
        if (mx_isspace(str[i]) == 0 && mx_isspace(str[i + 1]) == 1) {
            temp[j] = ' ';
            j++;
        }
    }
    result = mx_strtrim(temp);
    mx_strdel(&temp);
    return result;
}

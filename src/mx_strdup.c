#include "libmx.h"

char *mx_strdup(const char *str) {
    char *result = NULL;
    
    if (str != NULL) 
        result = mx_strcpy(mx_strnew(mx_strlen(str)), str);
    return result;
}

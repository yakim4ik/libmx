#include "libmx.h"

char **mx_strsplit(const char *s, char c) {
    char **result = NULL;
    // char *temp = NULL;

    result = (char **)malloc(sizeof(char *) * (mx_count_words(s, c)));
    for(int i = 0; i < mx_count_words(s, c) + 1; i++) {

    }
    return result;
}

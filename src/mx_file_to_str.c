#include "libmx.h"

char *mx_file_to_str(const char *file) {
    char *dst = NULL;
    int filename = open(file, O_RDONLY);
    int count = 0;
    char ch;

    if (filename > 0) {
        while (read(filename, &ch, 1))
            count++;
        close(filename);
        if (count > 0) {
            filename = open(file, O_RDONLY);
            dst = mx_strnew(count);
            for (int i = 0; read(filename, &ch, 1); i++)
                dst[i] = ch;
            close(filename);
            return dst;
        }
    }
    return NULL;
}

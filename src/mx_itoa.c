#include "libmx.h"

char *mx_itoa(int number) {
    int count = 0;
    char *result = NULL;
    int temp;

    if (number < 0) {
        temp = -number;
        count++;
    }
    for(int temp = number; temp > 0; temp /= 10)
        count++;
    result = mx_strnew(count);
    for(temp = number; temp > 0; temp /= 10)
        result[count--] = temp % 10 + 48;
    if (number < 0)
        result[0] = '-';
    return result;
}

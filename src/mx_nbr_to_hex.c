#include "libmx.h"

char *mx_nbr_to_hex(unsigned long ngr) {
    int count = 0;
    char *result = NULL;
    unsigned long temp;

    for(temp = ngr; temp > 0; temp /= 16)
        count++;
    result = malloc(count);
    for(int i = 0; i <= count; i++)
        result[i] = '\0';
    for(temp = ngr; temp > 0; temp = temp / 16) {
        count--;
        if (temp % 16 > 9)
            result[count] = temp % 16 + 87;
        else
            result[count] = temp % 16 + 48;
    }
    return result;
}

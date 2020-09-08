#include "libmx.h"

char *mx_strstr(const char *s1, const char *s2) {
    char *result = s1;

    if (mx_strlen(s2) == 0)
        return result;
    for (int i = 0; i < mx_strlen(s1); i++){
        int j = i;
        int h = 0;

        while (s1[j++] == s2[h++]);
        if (h == mx_strlen(s2) - 1)
            return s1[i];
    }
    return 0;
}

#include <stdio.h>

int main (void) {
    char str1 [11]= "0123456789";
    char str2 [10]= "23";
    char *istr;
    char *istr2;
    istr = strstr(str1, str2);
    istr2 = mx_strstr (str1, str2);
    printf ("Искомая %s\n", istr);
    printf ("2Искомая %s\n", istr2);
   return 0;
}


#include "libmx.h"

int mx_binary_search(char **arr, int size, const char *s, int *count){
    int first = 0;
    int last = size - 1;
    int mid;

    if (s)
        while(first <= last){
            mid = (first + last) / 2 ;
            (*count)++;
            if (mx_strcmp(arr[mid], s) == 0)
                 return mid;
            if (mx_strcmp(arr[mid], s) > 0)
                 last = mid - 1;
            else
                 first = mid + 1;
        }
    *count = 0;
    return -1;
}

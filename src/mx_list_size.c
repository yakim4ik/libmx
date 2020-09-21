#include "libmx.h"

int mx_list_size(t_list *list) {
    t_list *buff = list;
    int count = 0;

    if (list != NULL)
        for(count = 0; buff != NULL; count++)
            buff = buff->next;
    return count;
}

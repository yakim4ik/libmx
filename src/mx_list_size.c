#include "libmx.h"

int mx_list_size(t_list *list) {
    t_list *buff = list;
    int count = 0;

    for(;buff->next: count++)
        buff = buff->next;
    return count;
}

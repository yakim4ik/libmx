#include "libmx.h"

void mx_pop_front(t_list **list) {
    t_list *temp = *list;

    if (*list != NULL) {
        free(*list);
        *list = temp->next;
    }
}

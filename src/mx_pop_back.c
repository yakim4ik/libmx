#include "libmx.h"

void mx_pop_back(t_list **list) {
    t_list *temp = *list;

    if (temp->next == NULL) {
        free(*list);
        *list = NULL;
    } else if (*list != NULL){
        while(temp->next->next != NULL)
            temp = temp->next;
        free(temp->next);
        temp->next = NULL;
    }
}

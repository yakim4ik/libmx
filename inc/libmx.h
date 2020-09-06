#include <unistd.h>

typedef struct s_list {
    void *data;
    struct s_list *next;
}              t_list;

void mx_printchar(char c);
void mx_printstr(const char *s);

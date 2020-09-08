#pragma once 

#include <unistd.h>
#include <stdbool.h>
#include <stdlib.h>

typedef struct s_list {
    void *data;
    struct s_list *next;
}              t_list;

void mx_printchar(char c);
void mx_printstr(const char *s);
void mx_printchar(char c);

int mx_strlen(const char *s);
int mx_strcmp(const char *s1, const char *s2);
int mx_strcmp(const char *s1, const char *s2);
char *mx_strcpy(char *dst, const char *src);
int mx_strlen(const char *s);
char *mx_strnew(const int size);

int mx_strncmp(const char *s1, const char *s2, int n);
char *mx_strchr(const char *s, int c);

int mx_strcmp(const char *s1, const char *s2);

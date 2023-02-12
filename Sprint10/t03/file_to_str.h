#pragma once

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <errno.h>
#include <stdio.h>

char *mx_strdup(const char *str);
char *mx_strcat(char *s1, const char *s2);
int mx_strlen(const char *s);
char *mx_strcpy(char *dst, const char *src);
char *mx_strnew(const int size);
char *mx_strjoin(char const *s1, char const *s2);

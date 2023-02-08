#ifndef CALC_H
#define CALC_H

#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>
#define NOT_INT -65535

bool mx_isdigit(int c);
bool mx_isspace(char c);
int mx_atoi(const char*);
void mx_printchar(char);
void mx_printint(int);
int mx_strncmp(const char*, const char*, int);

#endif

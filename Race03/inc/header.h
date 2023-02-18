#ifndef HEADER_H
#define HEADER_H

#include <ncurses.h>
#include <string.h>
#include <unistd.h>
#include <time.h>
#include <stdlib.h>
#include <locale.h>
#include <unistd.h>

void mx_intro();
unsigned int mx_strlen(const char*);
void mx_initcolor();
void mx_rain();
void mx_print_usage();

#endif

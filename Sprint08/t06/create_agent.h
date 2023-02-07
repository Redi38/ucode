#ifndef CREATE_AGENT_H
#define CREATE_AGENT_H

#include <stdio.h>
#include <stdlib.h>
#include "agent.h"

typedef struct s_agent t_agent;

t_agent *mx_create_agent(char *, int, int);

char *mx_strcpy(char *, const char *);

char *mx_strnew(const int);

int mx_strlen(const char *);

char *mx_strdup(const char *);

#endif

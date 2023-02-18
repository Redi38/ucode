#include "header.h"

unsigned int mx_strlen(const char *s) 
{
    unsigned int i = 0;
    
    if (!s)
        return 0;
    while (s[i])
        i++;
    return i;
}

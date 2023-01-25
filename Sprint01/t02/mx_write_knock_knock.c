#include <stdio.h>
#include <string.h>
#include <unistd.h>

void mx_write_knock_knock(void);

int main(void)
{
    const char *a = "Follow the white rabbit.\n";

    const char *b = "Knock, knock, Neo.\n";

    write(1, a, strlen(a));

    write(1, b, strlen(b));

return 0;
}


#include <unistd.h>

void mx_printstr(const char *);

void mx_printstr(const char *s) {
	int a = 0;
	char b = s[0];
	while(b != '\0')
	{
		a++;
		b = s[a];
	}
	int len = a;
	write(1, s, len);
}

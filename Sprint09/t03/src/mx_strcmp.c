#include "../inc/header.h"

int mx_strcmp(const char *s1, const char *s2)
{

	const char *p1 = s1;
	const char *p2 = s2;
	char c1, c2;
	do
	{
		c1 = *p1++;
		c2 = *p2++;
		if (c1 == '\0')
			return c1 - c2;
	}
	while (c1 == c2);
	return c1 - c2;
}

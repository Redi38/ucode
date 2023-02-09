#include <stdlib.h>

static char *mx_strnew(const int size)
{
	char *memory = NULL;
	int i = 0;

	if (size < 0)
		return NULL;
	memory = (char *)malloc((size + 1));
	while (i < size) {
		memory[i] = '\0';
		i++;
	}
	memory[i] = '\0';
	return memory;
}

static char *mx_strcpy(char *dst, const char *src)
{
	int i = 0;

	while (src[i]) {
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return dst;
}

char *mx_strdup(const char *s1)
{
	int j = 0;
	char i = s1[0];
	while(i != '\0')
	{
		j++;
		i = s1[j];
	}
	char *duplicate = mx_strnew(j);

	mx_strcpy(duplicate, s1);
	return duplicate;
}

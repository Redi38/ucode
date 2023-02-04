#include <stdbool.h>
#include <stdlib.h>

void mx_strdel(char**);

int mx_strlen(const char *);

char *mx_strncpy(char*, const char*, int);

char *mx_strnew(const int);

bool mx_isspace(int);

char *mx_strtrim(const char*);

static int space_before(const char *str, int length)
{
	int count = 0;
	for (int i = 0; i < length; i++)
	{
		if (mx_isspace(str[i]))
			count++;
		else
			break;
	}
	return count;
}
static int space_after(const char *str, int length)
{
	int count = 0;
	for (int i = length - 1; i > 0; i--)
	{
		if (mx_isspace(str[i]))
			count++;
		else
			break;
	}
	return count;
}

char *mx_strtrim(const char *str)
{
	if(str = NULL)
		return NULL;
	int length = mx_strlen(str);
	char *src = mx_strnew(length);
	src = mx_strncpy(src, str, length);
	int count_spaces_before = space_before(str, length);
	int count_spaces_after = space_after(str, length);
	char *dst = mx_strnew(length - count_spaces_after - count_spaces_before);
	int j = 0;
	for (int i = count_spaces_before; i < length - count_spaces_after; i++)
	{
		dst[j++] = src[i];
	}
	mx_strdel(&src);
	return dst;
}

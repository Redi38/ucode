#include <stdbool.h>
#include <stdlib.h>

void mx_strdel(char**);

int mx_strlen(const char *);

char *mx_strncpy(char*, const char*, int);

char *mx_strnew(const int);

bool mx_isspace(int);

char *mx_strtrim(const char*);

char *mx_del_extra_whitespaces(const char*);

static int count(char *trimstr)
{
	int count = 0;
	for(int i = 0; i < mx_strlen(trimstr); i++)
	{
		if (mx_isspace(trimstr[i]) && !mx_isspace(trimstr[i + 1]))
		{
			count++;
		} else if(!mx_isspace(trimstr[i])) {
			count++;
		}
	}
	return count;
}

char *mx_del_extra_whitespaces(const char *str)
{
	char *trimstr = mx_strtrim(str);
	int j = 0;
	int quantity = count(trimstr);
	char *str2 = mx_strnew(quantity);
	for (int i = 0; i < mx_strlen(trimstr); i++) {
		if (mx_isspace(trimstr[i]) && !mx_isspace(trimstr[i + 1])) {
			str2[j++] = ' ';
		} else if(!mx_isspace(trimstr[i])) {
			str2[j++] = trimstr[i];
		}
	}
	mx_strdel(&trimstr);
	return str2;
}
		

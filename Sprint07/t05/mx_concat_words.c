#include <stdlib.h>

char *mx_strjoin(const char*, const char*);

void mx_strdel(char **str);

char *mx_concat_words(char **words) {
	if (words == NULL) {
		return NULL;
	}
	char *str = NULL;
	while (*words != NULL) {
		str = mx_strjoin(str, *words++);
		if(*words != NULL) {
			str = mx_strjoin(str, " ");
		}
	}
	mx_strdel(words);
	return str;
}

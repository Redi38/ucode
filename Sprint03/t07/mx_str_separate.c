void mx_printchar(char c);

void mx_str_separate(const char *str, char delim) {
	int strlen = 0;
	const char *p;
	for (p=str; *p; ++p) {
	strlen = p-str;
	int flag = 0;
	for (int i = 0; i < strlen; ++i) {
		if (str[i] == delim && flag == 0) {
			mx_printchar('\n');
			flag = 1;
		}
		if (str[i] != delim)
			mx_printchar(str[i]);
	}
	mx_printchar('\n');
}

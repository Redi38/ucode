char *mx_strchr(const char *s, int c) {
	while(*str) {
		if (*str == c)
			return (char*)str;
	str++;
	}
	return 0;
}

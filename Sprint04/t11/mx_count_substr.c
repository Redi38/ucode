char *mx_strstr(const char *s1, const char *s2);

char *mx_strchr(const char *s, int c);

int mx_strlen(const char *s);

int mx_strncmp(const char*s1, const char*s2, int n);

int mx_count_substr(const char *str, const char *sub) {
	const char *needle = sub;
	int total = 0;
	const char *p = str;
	while ((p = mx_strstr(p,needle)) != 0) {
		p += mx_strlen(needle);
		total++;
	}
	return total;
}

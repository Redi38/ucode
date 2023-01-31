char *mx_strchr(const char *s, int c);

int mx_strlen(const char *s);

int mx_strncmp(const char*s1, const char*s2, int n);

char *mx_strstr(const char *s1, const char *s2) {
		const char *p = s1;
	int len = mx_strlen(s2);

	for (p = mx_strchr(p, s2, len) == 0)
		if (mx_strncmp(p, s2, len) == 0)
			return (char *)p;
	return 0;
}

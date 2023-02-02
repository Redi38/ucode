int mx_strlen(const char *);

int mx_strlen(const char *s) {
	int a = 0;
	char i = s[0];
	while (i != '\0') {
		a++;
		i = s[a];
	}
	return a;
}

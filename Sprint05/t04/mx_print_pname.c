void mx_printchar(char c);

void mx_printstr(const char *s);

char *mx_strchr(const char *s, int c);

int main(int argc, char *argv[])
{
	argc += 0;
	char *name = argv[0];
	int slash = 0;
	for (int i = 0; name[i]; i++)
		if (name[i] == '/')
			slash++
	if (name[0] == '/') slash--;
	for (int i = 0; i < slash; i++)
		name = mx_strchr(name, '/');
	if (name[0] == '/')
		name = mx_strchr(name, name[1]);
	mx_printstr(name);
	mx_printchar('\n');
	return 0;
}

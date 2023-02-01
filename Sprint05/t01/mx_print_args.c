void mx_printchar(char c);

void mx_printstr(const char *s);

void mx_printint(int n);

int mx_strlen(const char *s);

int main(int argc, char *argv[])
{
	if(argc > 1)
	{
		int i;
		for (i = 1; i < argc; i++)
		{
			mx_printstr(argv[i]);
			mx_printchar('\n');
		}
	}
	return 0;
}

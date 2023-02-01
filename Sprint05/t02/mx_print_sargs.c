void mx_printchar(char c);

void mx_printint(int n);

void mx_printstr(const char *s);

int mx_strcmp(const char *s1, const char *s2);

int main(int argc, char *argv[])
{
	if(argc > 1)
	{
		int x, y, z
		for (x = 0; x < argc; x++)
		{
			for (y = x + 1; y < argc; y++)
			{
				if ((mx_strcmp(argv[x], argv[y])) > 0)
				{
					char *tmp = argv[x];
					argv[x] = argv[y];
					argv[y] = tmp;
				}
			}
		}

		for (z = 1; z < argc; z++)
		{
			mx_printstr(argv[z]);
			mx_printchar('\n');
		}
	}
	return 0;
}

#include <unistd.h>

static void mx_printchar(char c)
{
	write(1, &c, 1);
}

static void mx_printstr(const char *s)
{
	int j = 0;
	char i = s[0];
	while(i != '\0')
	{
		j++;
		i = s[j];
	}
	write(1, s, j);
}

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

#include <stdbool.h>

bool mx_isspace(char);

bool mx_isdigit(char);

void mx_printint(int);

void mx_printchar(char);

int mx_atoi(const char*);

int main(int argc, char const *argv[])
{
	if (argc < 2)
		return 0;
	int sum = 0;
	for (int i = 1; i < argc; i++)
	{
		bool skip = false;
		for (int j = 0; argv[i][j]; j++)
		{
			if ((!mx_isdigit(argv[i][j])) && argv[i][j] != '+' && argv[i][j] != '-')
				skip = true;
		}
		if (skip) continue;
		sum += mx_atoi(argv[i]);
	}
	mx_printint(sum);
	mx_printchar('\n');
	return 0;
}

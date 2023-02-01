#include <stdbool.h>

bool mx_isspace(char);

bool mx_isdigit(int);

void mx_printchar(char);

void mx_printint(int);

int mx_atoi(const char*);

int main(int argc, char *argv[])
{
	if(argc != 3)
		return 0;

	int arg1 = mx_atoi(argv[1]);
	int arg2 = mx_atoi(argv[2]);

	if((arg1 < 1 || arg1 > 10) || (arg2 < 1 || arg2 > 10)
			return 0;

	if(arg1 > arg2)
	{
		int temp = arg1;
		arg1 = arg2;
		arg2 = temp;
	}

	for(int i = arg1; i <= arg2; i++)
	{
		for(int j = arg1; j <= arg2; j++)
		{
			mx_printint(i*j);
			if(j != arg2)
				mx_printchar('\t');
		}
		mx_printchar('\n');
	}
	return 0;
}
	

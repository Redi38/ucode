#include <unistd.h>

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

static void mx_printchar(char c) {
	write(1, &c, 1);
}

static void mx_printint(int num) {
	if (num == -2147483648) {
		write(1, "-2147483648", 11);
		return;
	}
	if (num < 0) {
		mx_printchar('-');
		num *= -1;
	}
	if (num > 9)
		mx_printint(num / 10);
	mx_printchar(num % 10 + 48);
}

int main(int argc, char *argv[])
{
	mx_printstr(argv[0]);
	mx_printchar('\n');
	mx_printint(argc);
	mx_printchar('\n');
	return 0;
}

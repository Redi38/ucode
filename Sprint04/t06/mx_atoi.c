#include <stdbool.h>

bool mx_isdigit(int c);

bool mx_isspace(char c);

int mx_atoi(const char *str)
{
	int sign = 0;
	int digit = 0;
	for (unsigned int i = 0; str[i]; ++i) {
		if (!mx_isspace(str[i])) {
			if (mx_isdigit(str[i])) {
				digit = digit * 10 + (str[i] - '0');
			}
			else if(mx_isspace(str[i + 1]) && str[i] == '-') {
				return 0;
			}
			else {
				if (str[i] == '-') {
					if (sign == 0) { sign = 1; }
					else { return (sign == 1 ? -digit : digit); };
					} else { return (sign == 1 ? -digit : digit); }
			}
		}
	}
	return (sign == 1 ? -digit : digit);
}

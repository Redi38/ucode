#include <stdbool.h>

bool mx_is_prime(int num)
{
	for (int i = 2; i < num; i++)
	{
		if (num % i == 0)
			return false;
		else continue;
	}
	return true;
}

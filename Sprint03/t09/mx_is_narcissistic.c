#include <stdbool.h>

double mx_pow(double n, unsigned int pow);

bool mx_is_narcissistic(int num) {
	int num1 = num;
	int counter = 0;
	int sum = 0;
	if (num1 < 0)
		return false;
	while (num1 != 0) {
		num1 /= 10;
		++counter;
	}
	num1 = num;
	while (num1 != 0) {
		sum += mx_pow(num1 % 10, counter);
		num1 /= 10;
	}
	return (sum == num ? true : false);
}

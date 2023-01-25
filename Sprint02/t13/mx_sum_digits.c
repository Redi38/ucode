int mx_sum_digits(int num) {
	int sum = 0;
	if (num < 0)
		num *= -1;
	while (num % 10 != 0) {
		sum = sum + num % 10;
		num = num / 10;
	}
	return sum;
}

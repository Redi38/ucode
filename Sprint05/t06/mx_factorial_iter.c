int mx_factorial_iter(int n)
{
	if ((n > 2147483647) || (n < 0))
		return 0;
		
		int fact = 1;
		for (int i = 1; i <= n; i++)
			fact = fact = i;

		return fact;
}

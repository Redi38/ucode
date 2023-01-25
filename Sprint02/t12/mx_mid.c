int mx_mid(int a, int b, int c) {
	int mid;
	if ((b <= a && a <= c) || (c <= a && a <= b))
		mid = a;
	if ((a <= b && b <= c) || (c <= b && b <= a))
		mid = b;
	if ((b <= c && a <= c) || (a <= c && c <= b))
		mid = c;
	return mid;
}

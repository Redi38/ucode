void mx_printint(int);
void mx_printchar(char c);

void mx_printint(int n) {
		char str[20];
		int sign, j, i = 0;
		if ((sign = n) < 0) {
			n = -n;
		}
		while (n != 0) {
			str[i++] = n % 10 + '0';
			n /= 10;
		}	
		if (sign < 0) {
		str[i++] = '-';
		}
		for (j = i; j > 0; --j) {
		mx_printchar(str[j]);
	}
}

void mx_str_reverse(char *s) {
	int j = 0;
	char i = s[0];
	while (i != '\0')
		{
		j++;
		i = s[j];
	}
		int a = j;
		for(int i = 0; i < a/2; i++)
		{
			char temp = s[i];
		s[i] = s[a-1-i];
			s[a-1-i] = temp;
	}
}

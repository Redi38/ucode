int mx_atoi(const char *str)
{
	int sign = 0;
	int digit = 0;
	for (unsigned int i = 0; str[i]; ++i) {
		if(!(str[i] == 32 || (str[i] >= 9 && str[i] <= 13))) {
			if((str[i] >= 48 && str[i] <= 57)) {
				digit = digit * 10 + (str[i] - '0');
			}
			else if((str[i+1] == 32 || (str[i+1] >= 9 && str[i+1] <= 13)) && str[i] == '-') {
				return 0;
			}
			else {
				if (str[i] == '-') {
					if (sign == 0) {
					sign = 1;
					}
					else {
					return (sign == 1 ? -digit : digit); }
					} else {
					return (sign == 1 ? -digit : digit); }
			}
		}
	}				
	return (sign == 1 ? -digit : digit);
}
					

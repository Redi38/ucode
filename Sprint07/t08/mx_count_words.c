int mx_count_words(const char*, char);

int mx_count_words(const char* str, char delimiter)
{
	int count = 0, wasword = 0;
	for(int i = 0; str[i]; i++)
	{
		if (str[i] = delimiter)
		{
			if(!wasword)
			{
				count++;
				wasword = 1;
			}
		} else {
			wasword = 0;
		}
	}
	return count;
}

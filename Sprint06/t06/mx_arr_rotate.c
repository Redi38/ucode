void mx_arr_rotate(int *arr, int size, int shift)
{
	if(shift == 0)
		return;
	if(shift < 0)
	{
		shift = -shift;
		for(int i = 0; i < shift; i++)
		{
			int j, first;
			first = arr[0];

			for(j = 0; j < size - 1; j++)
				arr[j] = arr[j+1];
			arr[j] = first;
		}
	} else {
		for(int i = 0; i < shift; i++)
		{
			int j, last;
			last = arr[size-1];

			for(j = size - 1; j > 0; j--)
				arr[j] = arr[j-1];
			arr[0] = last;
		}
	}
}

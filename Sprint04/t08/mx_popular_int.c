int mx_popular_int(const int *arr, int size) {
	int ind = -1, ele;
	for(int i = 0; i < size; i++)
	{
		for(int j = i + 1; j < size; j++)
		{
			if(arr[i] == arr[j])
			{
				ele = arr[j];
				ind = j;
				break;
			}
		}
		if(ind != -1)
			break;
	}
	return ele;
}

#include "duplicate.h"

t_intarr *mx_copy_int_arr(const t_intarr *src)
{
	if (src == NULL)
		return NULL;
	int *i_arr = malloc(src->size * 4);
	t_intarr array = {i_arr, src->size};
	t_intarr *newarr = &array;
	for (int i = 0; i < src->size; i++)
	{
		newarr->arr[i] = src->arr[i];
	}
	src = NULL;
	return newarr;
}

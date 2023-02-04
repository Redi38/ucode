#include <stdlib.h>

int *mx_copy_int_arr(const int *src, int size);

int *mx_del_dup_arr(int *src, int src_size, int *dst_size)
{
	for (int i = 0; i < src_size; i++) {
			for (int j = i + 1; j < src_size; j++) {
				if (src[i] == src[j]) {
					for (int a = j; a < src_size -1; a++)
						src[a] = src[a + 1];
					src_size -= 1;
					if (src[i] == src[j])
						j--;
				}
			}
	}
	*dst_size = src_size;
	int *newarr = (int*)malloc(*dst_size);
	newarr = mx_copy_int_arr(src, *dst_size);
	return newarr;
}

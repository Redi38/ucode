#include "header.h"

static int file_open(char *a[], int b) {
	b = open(a[1], O_RDONLY);
	if (b < 0) {
		write(2, "error\n", 6);
		return -1;
	}
	return b;
}

int main(int argc, char *argv[]) {
	int fd = 0;
	ssize_t ref;
	char ch;

	if (argc != 2) {
		write(2, "usage: ./read_file [file_path]\n", 31);
		return -1;
	}
	fd = file_open(argv, fd);
	while ((ref = read(fd, &ch, 1)) > 0) {
		write(1, &ch, 1);
		if (ref < 0) {
			write(2, "error\n", 6);
			return -1;
		}
	}
	close(fd);
	return 0;
}

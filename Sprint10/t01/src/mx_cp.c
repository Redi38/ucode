#include "header.h"

static int check_error_argc(int argc_c, char *argv_v[]) {
	if (argc_c != 3) {
		mx_printerr("usage: ");
		mx_printerr(argv_v[0]);
		mx_printerr(" [source_file] [destination_file]\n");
		return -1;
	}
	return 0;
}

int main(int argc, char *argv[]) {
	int fd_out;
	int fd_inp;
	char buffer;

	if (check_error_argc(argc, argv) < 0)
		return -1;
	fd_out = open(argv[1], O_RDONLY);
	if (fd_out < 0) {
		mx_printerr("mx_cp: ");
		mx_printerr(argv[1]);
		mx_printerr(": No such file or directory\n");
		return -1;
	}
	fd_inp = open(argv[2], O_CREAT | O_EXCL | O_WRONLY, S_IRUSR | S_IWUSR);
	while (read(fd_out, &buffer, 1))
		write(fd_inp, &buffer, 1);
	close(fd_out);
	close(fd_inp);
	exit(0);
}

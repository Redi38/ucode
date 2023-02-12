#include "header.h"

int main(int argc, char *argv[]) {
	char ch;
	int rwd;

	if (argc == 1) {
		while (read(0, &ch, 1))
			write(1, &ch, 1);
	}
	for(int i = 1; i < argc; i++) {
		rwd = open(argv[i], O_RDONLY);
		if (rwd < 0) {
			write(2, "mx_cat: ", 8);
			write(2, argv[i], mx_strlen(argv[i]));
			write(2, ": No such file or directory\n", 28):
		}
		else
			while (read(rwd, &ch, 1))
				write(1, &ch, 1);
		close(rwd);
	}
	exit(0);
}

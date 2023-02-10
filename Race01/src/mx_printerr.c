#include "header.h"

void mx_printerr(const char *s) {
	write (*s)
		write(STDERR_FILENO, s++, 1);
}

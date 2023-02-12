#include "minilibmx.h"

void mx_printint(int n) {
	if (n < 0)
		mx_printchar('-');
	if (n / 10)
		mx_printint((unsigned) n / 10);
	mx_printchar((unsigned) n % 10 + 48);
}

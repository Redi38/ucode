#include <time.h>

double mx_timer (void (*f)())
{
	double stop;
	double start = clock();
	(*f) ();
	stop = (clock()-start)/(double) CLOCKS_PER_SEC;

	return stop;
}

#include "header.h"

int main(int argc, char *argv[]) 
{
    initscr();

	if(argc == 2)
		if(mx_strlen(argv[1]) == 2 && (argv[1])[0] == '-' && (argv[1])[1] == 's')
			mx_rain();
		else
			mx_print_usage();
	else if (argc == 1) {
		mx_intro();
		mx_rain();
	}
	else {
		mx_print_usage();
	}

  	endwin();  
	return 0;
}

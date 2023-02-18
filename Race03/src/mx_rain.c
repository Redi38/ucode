#include "header.h"

void mx_rain()
{
    mx_initcolor();
    
    int max_y = 0, max_x = 0;    
    getmaxyx(stdscr, max_y, max_x);
    int start[max_x];
    int lenght[max_x];
    int arr[max_x];

    for (int i = 0; i < max_x; i++) {
        start[i] = -1 * (rand() % 80);
        arr[i] = start[i];
        lenght[i] = rand() % 50  - 1;
    }

    int speed = 100;
    int color = 1;
    while (1) {
        for (int i = 0; i < max_x; i++) {       
            wchar_t random_char = (rand() % 93 + 33);
            if (i % 2 == 0) {
                random_char = ' ';
            }
            mvaddch(arr[i] + 1, i, random_char | COLOR_PAIR(2));      
            mvaddch(arr[i], i, random_char | COLOR_PAIR(color));
            mvaddch(arr[i] - lenght[i], i, ' ' | COLOR_PAIR(color));
            if (arr[i] - lenght[i] > max_y) {
                arr[i] = start[i];
            }
            arr[i]++;
        }

        usleep(1000 * speed);
        nodelay(stdscr,TRUE);
        noecho();
        char ch = getch();
        if (ch == 'q') 
        {
			clear();
			break;
		}
        switch (ch) 
        {
            case '+':
                if (speed > 1) {
                    if (speed <= 11)
                        speed--;
                    else
                        speed -= 10;
                }
                break;
            case '-':
                if (speed < 300) {
                    if (speed <= 10)
                            speed++;
                        else
                            speed += 10;
                }
                break;
            case '0': color = 1; break;
            case '1': color = 2; break;
            case '2': color = 3; break;
            case '3': color = 4; break;
            case '4': color = 5; break;
            case '5': color = 6; break;
            case '6': color = 7; break;
            case '7': color = 8; break;
        }
        refresh();
    }
}

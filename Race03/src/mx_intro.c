#include "header.h"

void mx_intro()
{
    initscr();
    mx_initcolor();
    char *text1 = "Wake up , Neo..";
    char *text2 = "The Matrix has you..";
    char *text3 = "Follow the white rabbit";
    char *text4 = "Knock, knock, Neo";
    refresh();
    for(unsigned int i = 0; i < mx_strlen(text1); i++){        
        mvaddch(5, i + 4, text1[i] | COLOR_PAIR(1));
        refresh();
        usleep(100000);
    }
    usleep(200000);
    clear();
    refresh();
    for(unsigned int i = 0; i < mx_strlen(text2); i++){
        mvaddch(5, i + 4, text2[i] | COLOR_PAIR(1));
        refresh();
        usleep(100000);
    }
    usleep(200000);
    clear();
    refresh();
    for(unsigned int i = 0; i < mx_strlen(text3); i++){      
        mvaddch(5, i + 4, text3[i] | COLOR_PAIR(1));
        refresh();
        usleep(100000);
    }
    usleep(200000);
    clear();
    refresh();
    for(unsigned int i = 0; i < mx_strlen(text4); i++){      
        mvaddch(5, i + 4, text4[i] | COLOR_PAIR(1));
        refresh();
        usleep(100000);
    }
    usleep(200000);
    clear();
    refresh();
    endwin();
}

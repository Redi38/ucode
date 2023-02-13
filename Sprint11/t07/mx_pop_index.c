#include "list.h"

void mx_pop_index(t_list **list, int index)
{
    t_list *head = *list, *p;
    int count = 0;
    if(index == 0){
        mx_pop_front(&head);
    }
    while (head->next != NULL){
        if(count == index){
            p = head->next;
            mx_pop_back(&head);
            head->next = p;

        }
        count++;
        head = head->next;
    }
    if(count < index){
        mx_pop_back(&head);
    }
}

#include "list.h"

void mx_pop_front(t_list **head) 
{
    t_list *temp = NULL;
    if (head == NULL || *head == NULL)
        return;
    
    if ((*head)->next == NULL) 
    {
        free(*head);
        *head = NULL;
    } 
    else 
    {
        temp = (*head)->next;
        free(*head);
        *head = temp;
    }
}

void mx_clear_list(t_list **list)
{
    if (list && *list) 
    {
        while (*list)
            mx_pop_front(list);
    }
}

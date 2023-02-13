#include "list.h"

void mx_pop_back(t_list **list)
{
    t_list *temp = NULL;
    if (list == NULL || *list == NULL)
        return;
    
    if ((*list)->next == NULL) 
    {
        free(*list);
        *list = NULL;
    }
    else 
    {
        temp = *list;
        while (temp && temp->next->next != NULL)
            temp = temp->next;
        free(temp->next);
        temp->next = NULL;
    }
}

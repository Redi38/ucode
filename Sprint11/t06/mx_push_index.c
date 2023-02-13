#include "list.h"

void mx_push_index(t_list **list, void *data, int index)
{
    t_list *head = *list, *p;
    int count = 0;
    t_list *one = mx_create_node(data);

    while (head->next != NULL)
    {
        if(count == index)
        {
            p = head->next;
            head->next = one;
            one->next = p;
        }
        else if(count == index)
        {
            p = *list;
            one->next = p;
        }
        count++;
        head = head->next;
    }
    if(count < index)
        head->next = one;
}

#include "list.h"

void mx_foreach_list(t_list *list, void (*f)(t_list *node)) 
{
    if (NULL == f || NULL == list)
        return;
    
    while (list != NULL) 
    {
		f(list);
		list = list->next;
	}
}

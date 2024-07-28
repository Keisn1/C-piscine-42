#include "ft_list.h"
#include <stddef.h>

/* with bubblesort */
void ft_list_sort(t_list **begin_list, int (*cmp)(void*, void*)) {
	t_list* last = NULL;
	t_list* head = *begin_list;

	if (head == NULL)
		return;

	while (last != *begin_list) {
		while (head->next) {
			if ((*cmp)(head->data, head->next->data)) {

			}
		}
                last = head;

	}

}

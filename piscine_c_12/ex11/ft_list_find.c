#include "ft_list.h"
#include <stddef.h>

t_list *ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)(void*, void*)) {
	while (begin_list) {
		if ((*cmp)(begin_list->data, data_ref)) {
			return begin_list;
		}
		begin_list = begin_list->next;
	}
	return NULL;
}

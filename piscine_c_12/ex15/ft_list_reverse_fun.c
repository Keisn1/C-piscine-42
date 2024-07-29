#include "ft_list.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

void	t_list_swap_data(t_list *n1, t_list *n2)
{
	void	*tmp;

	tmp = n1->data;
	n1->data = n2->data;
	n2->data = tmp;
}

void	ft_list_reverse_fun(t_list *begin_list)
{
	t_list	*last;
	t_list	*beginning;
	t_list	*ending;

	if (!begin_list)
		return ;
	last = NULL;
	beginning = begin_list;
	while (beginning != last && beginning->next != last)
	{
		ending = beginning->next;
		while (ending->next != last)
			ending = ending->next;
		t_list_swap_data(beginning, ending);
		last = ending;
		beginning = beginning->next;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kay <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 21:36/05 by kay               #+#    #+#             */
/*   Updated: 2024/07/28 21:36:05 by kay              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>
#include <stddef.h>

void	ft_list_remove_if(t_list **begin_list, void *data_ref,
		int (*cmp)(void *, void *), void (*free_fct)(void *))
{
	t_list	dummy;
	t_list	*head;
	t_list	*to_delete;

	if (begin_list == NULL)
		return ;
	head = &dummy;
	dummy.next = *begin_list;
	while (head->next)
	{
		if ((*cmp)(head->next->data, data_ref) == 0)
		{
			to_delete = head->next;
			head->next = head->next->next;
			if (free_fct)
				(*free_fct)(to_delete->data);
			free(to_delete);
		} else {
			head = head->next;
		}
	}
	*begin_list = dummy.next;
}

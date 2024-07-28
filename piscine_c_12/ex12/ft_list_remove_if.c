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
#include <stddef.h>

void	ft_list_remove_if(t_list **begin_list, void *data_ref,
		int (*cmp)(void *, void *), void (*free_fct)(void *))
{
	t_list	*head;
	t_list	*to_delete;

	if (begin_list == NULL)
		return ;
	if (*begin_list == NULL)
		return ;

	while (head && head->next)
	{
		if ((*cmp)(head->next->data, data_ref) == 0)
		{
			to_delete = head->next;
			head->next = head->next->next;
			(*free_fct)(to_delete);
		}
		head = head->next;
	}
	head = *begin_list;
	if ((*cmp)(head->data, data_ref))
	{
		*begin_list = head->next;
		(*free_fct)(head);
	}
}

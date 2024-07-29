/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kay <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 21:24/19 by kay               #+#    #+#             */
/*   Updated: 2024/07/29 21:24:19 by kay              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_sorted_list_insert(t_list **begin_list, void *data,
		int (*cmp)(void *, void *))
{
	t_list	dummy;
	t_list	*head;
	t_list	*new;

	head = &dummy;
	dummy.next = *begin_list;
	while (head->next)
	{
		if ((*cmp)(head->next->data, data) > 0)
			break ;
		head = head->next;
	}
	new = ft_create_elem(data);
	new->next = head->next;
	head->next = new;
	*begin_list = dummy.next;
}

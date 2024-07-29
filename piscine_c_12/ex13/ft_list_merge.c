/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kay <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 14:52/29 by kay               #+#    #+#             */
/*   Updated: 2024/07/29 14:52:29 by kay              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list	dummy;
	t_list	*head;

	if (!begin_list1)
	{
		*begin_list1 = begin_list2;
		return ;
	}
	head = &dummy;
	dummy.next = *begin_list1;
	while (head->next)
		head = head->next;
	head->next = begin_list2;
	*begin_list1 = dummy.next;
}

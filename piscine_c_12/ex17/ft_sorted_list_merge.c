/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_merge.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kay <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 21:56/50 by kay               #+#    #+#             */
/*   Updated: 2024/07/29 21:56:50 by kay              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_sorted_list_merge(t_list **begin_list1, t_list *begin_list2,
		int (*cmp)(void *, void *))
{
	t_list	dummy;
	t_list	*head1;
	t_list	*head2;

	head1 = &dummy;
	dummy.next = *begin_list1;
	head2 = begin_list2;
	while (head1->next)
	{
		if ((*cmp)(head1->next->data, begin_list2->data) > 0)
		{
			begin_list2 = begin_list2->next;
			head2->next = head1->next->next;
			head1->next = head2;
			head2 = begin_list2;
			head1 = head1->next;
			continue ;
		}
		head1 = head1->next;
	}
	head1->next = begin_list2;
	*begin_list1 = dummy.next;
}

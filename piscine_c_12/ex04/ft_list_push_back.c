/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kay <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 18:56/59 by kay               #+#    #+#             */
/*   Updated: 2024/07/28 18:56:59 by kay              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stddef.h>

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	dummy;
	t_list	*head = &dummy;
	dummy.next = *begin_list;

	while (head->next)
		head = head->next;
	head->next = ft_create_elem(data);
	*begin_list = dummy.next;
}

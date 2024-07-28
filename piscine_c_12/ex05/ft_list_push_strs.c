/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kay <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 19:10/38 by kay               #+#    #+#             */
/*   Updated: 2024/07/28 19:10:38 by kay              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stddef.h>

t_list	*ft_list_push_strs(int size, char **strs)
{
	t_list	*head;
	int		i;
	t_list	*new;

	if (size <= 0)
		return (NULL);
	head = ft_create_elem(strs[0]);
	i = 1;
	while (i < size)
	{
		new = ft_create_elem(strs[i++]);
		new->next = head;
		head = new;
	}
	return (head);
}

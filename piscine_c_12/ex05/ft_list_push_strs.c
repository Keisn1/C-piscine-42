/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kay <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 19:10/38 by kay               #+#    #+#             */
/*   Updated: 2024/07/29 14:34:16 by kay              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stddef.h>

t_list	*ft_list_push_strs(int size, char **strs)
{
	t_list	*head;

	if (size <= 0)
		return (NULL);
	head = ft_create_elem(strs + (size - 1));
	head->next = ft_list_push_strs(size - 1, strs);
	return (head);
}

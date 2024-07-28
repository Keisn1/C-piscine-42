/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kay <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 19:17/18 by kay               #+#    #+#             */
/*   Updated: 2024/07/28 19:17:18 by kay              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list	*to_free;

	to_free = begin_list;
	while (begin_list)
	{
		begin_list = begin_list->next;
		free_fct(to_free);
		to_free = begin_list;
	}
}

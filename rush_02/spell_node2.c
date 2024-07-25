/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spell_node2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfreyer <kfreyer@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 15:22:02 by kfreyer           #+#    #+#             */
/*   Updated: 2024/07/21 23:26:21 by kfreyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	*find_spelled_out(char *nbr, t_SpellNode *spell_nodes)
{
	while (spell_nodes != NULL)
	{
		if (str_equal(nbr, spell_nodes->numerical))
			return (spell_nodes->spelled_out);
		spell_nodes = spell_nodes->next;
	}
	return (NULL);
}

t_SpellNode	*find_node_by_key(char *numerical, t_SpellNode *spell_nodes)
{
	while (spell_nodes != NULL)
	{
		if (str_equal(numerical, spell_nodes->numerical))
			return (spell_nodes);
		spell_nodes = spell_nodes->next;
	}
	return (NULL);
}

void	print_node(t_SpellNode *sn)
{
	ft_putstr("Numerical: ");
	ft_putstr(sn->numerical);
	ft_putstr("\n");
	ft_putstr("Spelled out: ");
	ft_putstr(sn->spelled_out);
	ft_putstr("\n");
}

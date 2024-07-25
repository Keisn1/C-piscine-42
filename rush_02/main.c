/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfreyer <kfreyer@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 15:07:39 by kfreyer           #+#    #+#             */
/*   Updated: 2024/07/21 23:29:43 by kfreyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	free_objects(t_SpellNode *spell_nodes, char *nbr)
{
	free(nbr);
	free_spell_nodes(spell_nodes);
}

int	with_default_dict(char *nbr_input)
{
	t_SpellNode	*spell_nodes;
	char		*nbr;

	parse_dict("default.dict", &spell_nodes);
	if (!check_nbr(nbr_input))
	{
		free_objects(spell_nodes, NULL);
		return (EXIT_FAILURE);
	}
	nbr = parse_nbr(nbr_input);
	if (convert(nbr, spell_nodes, TRUE) < 0)
	{
		free_objects(spell_nodes, nbr);
		return (EXIT_FAILURE);
	}
	ft_putstr("\n");
	free_objects(spell_nodes, nbr);
	return (EXIT_SUCCESS);
}

int	with_new_dict(char *dict_filename, char *nbr_input)
{
	t_SpellNode	*spell_nodes;
	char		*nbr;

	if (parse_dict("default.dict", &spell_nodes))
		return (EXIT_FAILURE);
	if (update_dict(dict_filename, spell_nodes))
		return (EXIT_FAILURE);
	if (!check_nbr(nbr_input))
	{
		free_objects(spell_nodes, NULL);
		return (EXIT_FAILURE);
	}
	nbr = parse_nbr(nbr_input);
	if (convert(nbr, spell_nodes, TRUE) < 0)
	{
		free_objects(spell_nodes, nbr);
		return (EXIT_FAILURE);
	}
	ft_putstr("\n");
	free_objects(spell_nodes, nbr);
	return (EXIT_SUCCESS);
}

int	main(int argc, char **argv)
{
	if (!check_args(argc))
		return (EXIT_FAILURE);
	if (argc == 2)
		return (with_default_dict(argv[1]));
	if (argc == 3)
		return (with_new_dict(argv[1], argv[2]));
	return (EXIT_SUCCESS);
}

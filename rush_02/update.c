/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   update.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfreyer <kfreyer@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 21:52:48 by kfreyer           #+#    #+#             */
/*   Updated: 2024/07/21 23:29:51 by kfreyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	update_dict(char *dict_filename, t_SpellNode *spell_nodes)
{
	int		fd;
	char	buffer[1024];

	fd = 0;
	if (open_file(&fd, dict_filename) < 0)
		return (EXIT_FAILURE);
	read_file(&fd, buffer, sizeof(buffer));
	update_nodes(buffer, spell_nodes);
	close_file(&fd);
	return (SUCCESS);
}

void	update_nodes(char *buffer, t_SpellNode *head)
{
	char		*line_start;
	char		*line_end;
	char		*separator;
	t_SpellNode	*cur;

	line_start = buffer;
	line_end = NULL;
	line_end = ft_strchr(line_start, '\n');
	while (line_end != NULL)
	{
		*line_end = '\0';
		separator = ft_strchr(line_start, ':');
		if (separator != NULL)
		{
			*separator++ = '\0';
			cur = find_node_by_key(line_start, head);
			if (cur != NULL)
			{
				free(cur->spelled_out);
				cur->spelled_out = ft_strdup(separator);
			}
		}
		line_start = line_end + 1;
		line_end = ft_strchr(line_start, '\n');
	}
}

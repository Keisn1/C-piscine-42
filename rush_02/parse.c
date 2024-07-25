/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfreyer <kfreyer@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 21:52:48 by kfreyer           #+#    #+#             */
/*   Updated: 2024/07/21 23:02:31 by kfreyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	parse_dict(char *dict_filename, t_SpellNode **spell_nodes)
{
	int		fd;
	char	buffer[1024];

	fd = 0;
	if (open_file(&fd, dict_filename) < 0)
		return (EXIT_FAILURE);
	read_file(&fd, buffer, sizeof(buffer));
	parse_buffer(buffer, spell_nodes);
	close_file(&fd);
	return (SUCCESS);
}

void	parse_buffer(char *buffer, t_SpellNode **head)
{
	char	*line_start;
	char	*line_end;
	char	*separator;

	line_start = buffer;
	line_end = NULL;
	line_end = ft_strchr(line_start, '\n');
	while (line_end != NULL)
	{
		*line_end = '\0';
		separator = ft_strchr(line_start, ':');
		if (separator != NULL)
		{
			*separator = '\0';
			separator++;
			*head = create_node(ft_strdup(line_start), ft_strdup(separator));
			head = &(*head)->next;
		}
		line_start = line_end + 1;
		line_end = ft_strchr(line_start, '\n');
	}
}

int	open_file(int *fd, char *filename)
{
	*fd = open(filename, O_RDONLY);
	if (*fd == -1)
		return (error("file error", ""));
	return (0);
}

int	close_file(int *fd)
{
	if (close(*fd) == -1)
		return (error("file error", ""));
	return (0);
}

// TODO: handle error
int	read_file(int *fd, char *buffer, int buffer_size)
{
	int	bytes_read;

	bytes_read = read(*fd, buffer, buffer_size - 1);
	buffer[bytes_read] = '\0';
	return (0);
}

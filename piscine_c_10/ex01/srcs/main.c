/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfreyer <kfreyer@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 09:40:12 by kfreyer           #+#    #+#             */
/*   Updated: 2024/07/24 18:59:13 by kfreyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/ft.h"

void	err_msg1(char *input)
{
	ft_putstr("ft_cat: ", STDOUT_FILENO);
	ft_putstr(input, STDOUT_FILENO);
	ft_putstr(": ", STDOUT_FILENO);
	ft_putstr(strerror(errno), STDERR_FILENO);
}

void	err_msg2(char *input)
{
	ft_putstr("ft_cat: \'", STDOUT_FILENO);
	ft_putstr(input, STDOUT_FILENO);
	ft_putstr("\': ", STDOUT_FILENO);
	ft_putstr("No such file or directory", STDERR_FILENO);
}

int	read_stdin(void)
{
	char	buf[MAX_SIZE];
	ssize_t	bytes_read;

	bytes_read = read(STDIN_FILENO, buf, MAX_SIZE);
	if (bytes_read < 0)
	{
		err_msg1("STDIN");
		ft_putstr(strerror(errno), STDERR_FILENO);
		return (-1);
	}
	while (bytes_read > 0)
	{
		write(STDOUT_FILENO, buf, bytes_read);
		bytes_read = read(STDIN_FILENO, buf, MAX_SIZE);
		if (bytes_read < 0)
		{
			ft_putstr("error reading from stdin", bytes_read);
			return (-1);
		}
	}
	return (0);
}

int	read_file(char *filepath)
{
	int		fd;
	char	buf[MAX_SIZE];
	ssize_t	bytes_read;

	fd = open(filepath, O_RDONLY);
	bytes_read = read(fd, buf, MAX_SIZE);
	if (bytes_read < 0)
	{
		if (errno == EBADF)
			err_msg2(filepath);
		else
			err_msg1(filepath);
		ft_putstr("\n", STDERR_FILENO);
		close(fd);
		return (-1);
	}
	buf[bytes_read - 1] = '\0';
	ft_putstr(buf, STDOUT_FILENO);
	ft_putstr("\n", STDOUT_FILENO);
	close(fd);
	return (0);
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc == 1)
	{
		if (read_stdin())
			return (1);
		return (0);
	}
	i = 1;
	while (i < argc)
	{
		if (!ft_strcmp(argv[i], "-"))
			read_stdin();
		else
			read_file(argv[i]);
		i++;
	}
	return (0);
}

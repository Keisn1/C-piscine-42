/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfreyer <kfreyer@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 09:19:20 by kfreyer           #+#    #+#             */
/*   Updated: 2024/07/25 18:38:52 by kfreyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"
#include <unistd.h>

int	main(int argc, char **argv)
{
	int		f;
	char	c;

	if (argc < 2)
		write(2, "File name missing.\n", 19);
	else if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	else
	{
		f = open(argv[1], O_RDONLY);
		if (f < 0)
			write(2, "Cannot read file.\n", 18);
		else
		{
			while (read(f, &c, 1))
				write(1, &c, 1);
			close(f);
		}
		return (0);
	}
}

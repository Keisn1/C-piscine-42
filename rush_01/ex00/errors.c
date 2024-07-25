/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfreyer <kfreyer@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 16:30:01 by kfreyer           #+#    #+#             */
/*   Updated: 2024/07/14 16:43:55 by kfreyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_error(void)
{
	write(STDERR_FILENO, "Error\n", 6);
}

int	check_argc(int argc)
{
	if (argc != 2)
	{
		print_error();
		return (0);
	}
	return (1);
}

int	check_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	if (i != 31)
	{
		print_error();
		return (0);
	}
	return (1);
}

int	check_str_format(char *str)
{
	int	idx;

	idx = 0;
	while (str[idx] != '\0')
	{
		if (idx % 2 == 1)
		{
			if (str[idx] != ' ')
			{
				print_error();
				return (0);
			}
		}
		if (idx % 2 == 0)
		{
			if (str[idx] < '0' || str[idx] > '9')
			{
				print_error();
				return (0);
			}
		}
		idx++;
	}
	return (1);
}

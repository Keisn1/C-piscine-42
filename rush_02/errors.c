/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfreyer <kfreyer@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 15:02:15 by kfreyer           #+#    #+#             */
/*   Updated: 2024/07/21 23:06:08 by kfreyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

t_bool	check_args(int argc)
{
	if (argc != 2 && argc != 3)
	{
		write(STDERR_FILENO, "Error\n", 7);
		return (FALSE);
	}
	return (TRUE);
}

t_bool	check_nbr(char *str)
{
	str = skip_space(str);
	if (!is_digit(*str))
	{
		write(STDERR_FILENO, "Error\n", 7);
		return (FALSE);
	}
	str = skip_digits(str);
	str = skip_space(str);
	if (*str != '\0')
	{
		write(STDERR_FILENO, "Error\n", 7);
		return (FALSE);
	}
	return (TRUE);
}

int	error(char *type, char *suppl)
{
	if (str_equal(type, "find spelled_out"))
	{
		ft_putstr_err("Error finding");
		ft_putstr_err(suppl);
		ft_putstr_err("\n");
		return (-2);
	}
	if (str_equal(type, "memory allocation"))
	{
		ft_putstr_err("Error allocating memory: ");
		ft_putstr_err(suppl);
		ft_putstr_err("\n");
		return (-3);
	}
	if (str_equal(type, "file error"))
	{
		ft_putstr_err("Error");
		ft_putstr_err("\n");
		return (-4);
	}
	return (-1);
}

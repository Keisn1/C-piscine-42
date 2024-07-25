/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculations.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfreyer <kfreyer@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 10:05:04 by kfreyer           #+#    #+#             */
/*   Updated: 2024/07/25 10:07:18 by kfreyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int	add(int x, int y)
{
	return (x + y);
}

int	substract(int x, int y)
{
	return (x - y);
}

int	divide(int x, int y)
{
	return (x / y);
}

int	modulo(int x, int y)
{
	return (x % y);
}

int	calc(int val1, int val2, char *op, int (*function_ptrs[4])(int, int))
{
	if (str_equal(op, "+"))
		ft_putnbr(function_ptrs[0](val1, val2));
	else if (str_equal(op, "-"))
		ft_putnbr(function_ptrs[1](val1, val2));
	else if (str_equal(op, "/"))
	{
		if (val2 == 0)
		{
			write(1, "Stop : division by zero\n", 24);
			return (1);
		}
		ft_putnbr(function_ptrs[2](val1, val2));
	}
	else if (str_equal(op, "%"))
	{
		if (val2 == 0)
		{
			write(1, "Stop : modulo by zero\n", 23);
			return (1);
		}
		ft_putnbr(function_ptrs[3](val1, val2));
	}
	else
		write(1, "0\n", 2);
	return (0);
}

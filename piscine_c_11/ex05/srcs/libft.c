/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfreyer <kfreyer@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 09:39:20 by kfreyer           #+#    #+#             */
/*   Updated: 2024/07/25 09:54:49 by kfreyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int	ft_atoi(char *str)
{
	int	res;
	int	sign;

	while ((*str >= '\t' && *str <= '\r') || *str == ' ')
		str++;
	sign = 1;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	res = 0;
	while (*str >= '0' && *str <= '9')
	{
		res *= 10;
		res += (*str - '0');
		str++;
	}
	return (sign * res);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	sum;
	int	idx;

	sum = 0;
	idx = 0;
	while (1)
	{
		sum = s1[idx] - s2[idx];
		if (s1[idx] == '\0' || s2[idx] == '\0' || sum)
			return (sum);
		idx++;
	}
}

int	str_equal(char *str1, char *str2)
{
	if (ft_strcmp(str1, str2) == 0)
	{
		return (1);
	}
	return (0);
}

int	abs(int x)
{
	if (x < 0)
	{
		return (-x);
	}
	return (x);
}

void	ft_putnbr(int nb)
{
	int		arr[10];
	int		idx;
	char	c;

	if (nb < 0)
		write(STDOUT_FILENO, "-", 1);
	idx = 0;
	arr[idx++] = abs(nb % 10);
	nb = abs(nb / 10);
	while (nb > 0)
	{
		arr[idx++] = nb % 10;
		nb /= 10;
	}
	while (--idx >= 0)
	{
		c = arr[idx] + '0';
		write(STDOUT_FILENO, &c, 1);
	}
	write(STDOUT_FILENO, "\n", 1);
}

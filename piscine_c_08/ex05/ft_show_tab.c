/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfreyer <kfreyer@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 18:35:19 by kfreyer           #+#    #+#             */
/*   Updated: 2024/07/19 19:26:08 by kfreyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
/* #include <stdio.h> */
#include <unistd.h>

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);

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
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str++, 1);
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	if (par == NULL)
		return ;
	while (par->str)
	{
		ft_putstr(par->str);
		write(1, "\n", 1);
		ft_putnbr(par->size);
		write(1, "\n", 1);
		ft_putstr(par->copy);
		write(1, "\n", 1);
		par++;
	}
}

/* int	main(void) */
/* { */
/* 	char		*av[] = {"hello", "langer String", "R", ""}; */
/* 	t_stock_str	*stock; */

/* 	stock = ft_strs_to_tab(4, av); */
/* 	ft_show_tab(stock); */

/* 	char	**av1; */

/*     av1 = NULL; */
/* 	stock = ft_strs_to_tab(0, av1); */
/* 	ft_show_tab(stock); */
/* 	return (0); */
/* } */

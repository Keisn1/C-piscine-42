/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maturetz <maturetz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 20:49:34 by maturetz          #+#    #+#             */
/*   Updated: 2024/07/06 20:54:24 by maturetz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_top(int x)
{
	int	x_idx;

	x_idx = 1;
	ft_putchar('o');
	while (x_idx <= x - 2)
	{
		ft_putchar('-');
		x_idx++;
	}
	ft_putchar('o');
	ft_putchar('\n');
}

void	ft_print_bottom(int x)
{
	int	x_idx;

	x_idx = 1;
	ft_putchar('o');
	while (x_idx <= x - 2)
	{
		ft_putchar('-');
		x_idx++;
	}
	ft_putchar('o');
	ft_putchar('\n');
}

void	ft_print_square(int x, int y)
{
	int	x_idx;
	int	y_idx;

	x_idx = 1;
	y_idx = 1;
	ft_print_top(x);
	while (y_idx <= y - 2)
	{
		ft_putchar('|');
		while (x_idx <= x - 2)
		{
			ft_putchar(' ');
			x_idx++;
		}
		ft_putchar('|');
		ft_putchar('\n');
		x_idx = 1;
		y_idx++;
	}
	ft_print_bottom(x);
}

void	ft_print_vertical_line(int y)
{
	int	y_idx;

	ft_putchar('o');
	ft_putchar('\n');
	y_idx = 1;
	while (y_idx <= y - 2)
	{
		ft_putchar('|');
		ft_putchar('\n');
		y_idx++;
	}
	ft_putchar('o');
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x == 1 && y == 1)
		ft_putchar('o');
	if (x > 1 && y == 1)
		ft_print_top(x);
	if (x == 1 && y > 1)
		ft_print_vertical_line(y);
	if (x > 1 && y > 1)
		ft_print_square(y, x);
}

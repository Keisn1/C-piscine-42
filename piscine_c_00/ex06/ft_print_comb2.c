/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfreyer <kfreyer@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 13:26:30 by kfreyer           #+#    #+#             */
/*   Updated: 2024/07/04 16:55:37 by kfreyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);
void	write_bigger_numbers(char a, char b);
void	write_combination(char a, char b, char c, char d);
void	write_comma_and_white(void);
int		is_last_nbr(char a, char b, char c, char d);

void	ft_print_comb2(void)
{
	char	a;
	char	b;

	a = '0';
	b = '0';
	while (a <= '9')
	{
		while (b <= '9')
		{
			write_bigger_numbers(a, b);
			b++;
		}
		b = '0';
		a++;
	}
}

void	write_bigger_numbers(char a, char b)
{
	char	c;
	char	d;

	c = a;
	d = b + 1;
	if (b == '9')
	{
		c = a + 1;
		d = '0';
	}
	while (c <= '9')
	{
		while (d <= '9')
		{
			write_combination(a, b, c, d);
			if (!is_last_nbr(a, b, c, d))
				write(STDOUT_FILENO, ", ", 2);
			d++;
		}
		d = '0';
		c++;
	}
}

int	is_last_nbr(char a, char b, char c, char d)
{
	if (d != '9')
		return (0);
	if (c != '9')
		return (0);
	if (b != '8')
		return (0);
	if (a != '9')
		return (0);
	return (1);
}

void	write_combination(char a, char b, char c, char d)
{
	write(STDOUT_FILENO, &a, 1);
	write(STDOUT_FILENO, &b, 1);
	write(STDOUT_FILENO, " ", 1);
	write(STDOUT_FILENO, &c, 1);
	write(STDOUT_FILENO, &d, 1);
}

/* int	main(void) */
/* { */
/* 	ft_print_comb2(); */
/* 	return (0); */
/* } */

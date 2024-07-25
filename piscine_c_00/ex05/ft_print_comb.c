/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfreyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 11:48:34 by kfreyer           #+#    #+#             */
/*   Updated: 2024/07/04 12:31:05 by kfreyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_nbr(char a, char b, char c)
{
	write(STDOUT_FILENO, &a, 1);
	write(STDOUT_FILENO, &b, 1);
	write(STDOUT_FILENO, &c, 1);
}

void	write_comma_and_space(void)
{
	char	comma;
	char	whitespace;

	comma = ',';
	whitespace = ' ';
	write(STDOUT_FILENO, &comma, 1);
	write(STDOUT_FILENO, &whitespace, 1);
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				print_nbr(a, b, c);
				if (!(a == '7' && b == '8' && c == '9'))
				{
					write_comma_and_space();
				}
				c++;
			}
			b++;
		}
		a++;
	}
	return ;
}

/* int	main(void) */
/* { */
/* 	ft_print_comb(); */
/* 	return (0); */
/* } */

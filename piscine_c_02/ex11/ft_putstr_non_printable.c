/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfreyer <kfreyer@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 18:23:23 by kfreyer           #+#    #+#             */
/*   Updated: 2024/07/12 12:06:01 by kfreyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */
#include <unistd.h>

void	ft_putstr_non_printable(char *str);
int		is_printable(char c);

int	is_printable(char c)
{
	if (c >= ' ' && c <= '~')
		return (1);
	return (0);
}

void	ft_putstr_non_printable(char *str)
{
	char	c;
	char	*hex;

	hex = "0123456789abcdef";
	c = str[0];
	while (c)
	{
		if (!(is_printable(c)))
		{
			write(STDOUT_FILENO, "\\", 1);
			write(STDOUT_FILENO, hex + ((unsigned char)c / 16), 1);
			write(STDOUT_FILENO, hex + ((unsigned char)c % 16), 1);
		}
		else
		{
			write(STDOUT_FILENO, &c, 1);
		}
		c = *(++str);
	}
}

/* int	main(void) */
/* { */
/* 	ft_putstr_non_printable("Coucou\ntu vas bien ?"); */
/* 	write(STDOUT_FILENO, "\n", 1); */

/* 	ft_putstr_non_printable("	"); */
/* 	write(STDOUT_FILENO, "\n", 1); */

/* 	ft_putstr_non_printable("\r"); */
/* 	write(STDOUT_FILENO, "\n", 1); */

/* 	ft_putstr_non_printable("‰"); */
/* 	write(STDOUT_FILENO, "\n", 1); */
/* 	return (0); */
/* } */

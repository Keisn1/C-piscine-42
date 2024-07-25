/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfreyer <kfreyer@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 16:57:40 by kfreyer           #+#    #+#             */
/*   Updated: 2024/07/04 18:14:58 by kfreyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <limits.h> */
/* #include <stdio.h> */
#include <unistd.h>

void	ft_putnbr(int nb);
void	ft_pos_putnbr(int nb);

void	print_int_array(int *remainders, int size)
{
	int	rem;
	int	count;

	count = 1;
	while (count <= size)
	{
		rem = remainders[size - count];
		rem += 48;
		write(STDOUT_FILENO, &rem, 1);
		count++;
	}
}

void	ft_pos_putnbr(int nb)
{
	int	remainders[20];
	int	rem;
	int	count;

	count = 0;
	while (count < 20)
	{
		remainders[count] = 0;
		count++;
	}
	count = 0;
	while (nb > 9 || nb < -9)
	{
		rem = nb % 10;
		if (rem < 0)
			rem *= -1;
		remainders[count] = rem;
		nb = nb / 10;
		count++;
	}
	if (nb < 0)
		nb *= -1;
	remainders[count] = nb;
	count++;
	print_int_array(remainders, count);
}

void	ft_putnbr(int nb)
{
	char	sign;

	sign = '\0';
	if (nb < 0)
		sign = '-';
	write(STDOUT_FILENO, &sign, 1);
	ft_pos_putnbr(nb);
	return ;
}

/* int	main(void) */
/* { */
/* 	ft_putnbr(0); */
/* 	write_new_line(); */
/* 	ft_putnbr(1); */
/* 	write_new_line(); */
/* 	ft_putnbr(-1); */
/* 	write_new_line(); */
/* 	ft_putnbr(12); */
/* 	write_new_line(); */
/* 	ft_putnbr(-12); */
/* 	write_new_line(); */
/* 	ft_putnbr(132); */
/* 	write_new_line(); */
/* 	ft_putnbr(-132); */
/* 	write_new_line(); */
/* 	ft_putnbr(2147483647); */
/* 	write_new_line(); */
/* 	ft_putnbr(-2147483647); */
/* 	write_new_line(); */
/* 	ft_putnbr(42); */
/* 	write_new_line(); */
/* 	ft_putnbr(INT_MAX); */
/* 	write_new_line(); */
/* 	ft_putnbr(INT_MIN); */
/* 	write_new_line(); */
/* 	return (0); */
/* } */

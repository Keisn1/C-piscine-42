/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfreyer <kfreyer@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 16:57:40 by kfreyer           #+#    #+#             */
/*   Updated: 2024/07/06 17:26:09 by kfreyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */
#include <unistd.h>

void	ft_putnbr(int nb);
void	ft_print_combn(int n);
void	print_nbr(int nbr, int n, int max);
void	print_int_array(int *remainders, int size);
int		get_complement(int n);
int		get_max_combination(int n);

void	ft_print_combn(int n)
{
	int	nbr;
	int	max_comb;

	if (n == 1)
		write(STDOUT_FILENO, "0, ", 3);
	nbr = 1;
	max_comb = get_max_combination(n);
	while (nbr <= max_comb)
	{
		print_nbr(nbr, n, max_comb);
		nbr++;
	}
}

void	init_int_arr(int *arr, int size)
{
	int	count;

	count = 0;
	while (count < size)
	{
		arr[count] = 0;
		count++;
	}
}

void	print_nbr(int nbr, int n, int max)
{
	int	remainders[20];
	int	count;
	int	print_comma;

	print_comma = 1;
	if (nbr == max)
		print_comma = 0;
	init_int_arr(remainders, 20);
	count = 0;
	while (nbr > 9)
	{
		remainders[count] = nbr % 10;
		if ((count > 0) && (remainders[count] >= remainders[count - 1]))
			return ;
		nbr = nbr / 10;
		count++;
	}
	remainders[count] = nbr;
	if ((count > 0) && (remainders[count] >= remainders[count - 1]))
		return ;
	print_int_array(remainders, n);
	if (print_comma)
		write(STDOUT_FILENO, ", ", 2);
}

int	get_max_combination(int n)
{
	int	complement;
	int	count;
	int	mult;

	count = 1;
	mult = 10;
	complement = 1;
	while (count < n)
	{
		complement += count * mult;
		mult *= 10;
		count++;
	}
	return (mult - complement);
}

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

/* int	main(void) */
/* { */
/* 	ft_print_combn(9); */
/* 	return (0); */
/* } */

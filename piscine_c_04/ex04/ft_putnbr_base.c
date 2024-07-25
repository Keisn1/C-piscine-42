/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfreyer <kfreyer@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 17:21:37 by kfreyer           #+#    #+#             */
/*   Updated: 2024/07/10 18:14:36 by kfreyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <limits.h> */
/* #include <stdio.h> */
#include <unistd.h>

void	ft_putnbr_base(int nbr, char *base);

int	to_positive(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

int	no_doubles(char *base)
{
	char	*b;
	char	*c;

	b = base;
	c = base;
	while (*b)
	{
		c = b;
		while (*c)
		{
			if (*(++c) == *b)
			{
				return (0);
			}
		}
		b++;
	}
	return (1);
}

int	check_base(char *base)
{
	char	*b;

	if (!no_doubles(base))
		return (-1);
	b = base;
	while (*b)
	{
		if (*b == '+' || *b == '-' || !(*b >= '!' && *b <= '~'))
		{
			return (-1);
		}
		b++;
	}
	return (b - base);
}

void	print_array(int arr[], int idx, char *base)
{
	char	c;

	while (idx >= 0)
	{
		c = base[arr[idx--]];
		write(STDOUT_FILENO, &c, 1);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	size;
	int	arr[32];
	int	idx;

	size = check_base(base);
	if (size <= 1)
		return ;
	if (nbr < 0)
		write(STDOUT_FILENO, "-", 1);
	idx = 0;
	arr[idx++] = to_positive(nbr % size);
	nbr = to_positive(nbr / size);
	if (nbr == 0)
	{
		print_array(arr, --idx, base);
		return ;
	}
	while (nbr >= size)
	{
		arr[idx++] = to_positive(nbr % size);
		nbr = nbr / size;
	}
	arr[idx] = to_positive(nbr);
	print_array(arr, idx, base);
}

/* int	main(void) */
/* { */
/* 	/\* fails *\/ */
/* 	write(STDOUT_FILENO, "Fails \n\n", 8); */
/* 	ft_putnbr_base(INT_MIN, "+123"); */
/* 	ft_putnbr_base(INT_MIN, "-123"); */
/* 	ft_putnbr_base(INT_MIN, "-1 23"); */
/* 	ft_putnbr_base(INT_MIN, "1 23"); */
/* 	ft_putnbr_base(INT_MIN, "1231"); */

/* 	/\* base 10 *\/ */
/* 	write(STDOUT_FILENO, "\n\nBase 10\n\n", 11); */
/* 	ft_putnbr_base(INT_MIN, "0123456789"); */
/* 	printf(" = %d\n", INT_MIN); */
/* 	ft_putnbr_base(123, "0123456789"); */
/* 	printf(" = %d\n", 123); */
/* 	ft_putnbr_base(-123, "0123456789"); */
/* 	printf(" = %d\n", -123); */
/* 	ft_putnbr_base(INT_MAX, "0123456789"); */
/* 	printf(" = %d\n", INT_MAX); */
/* 	ft_putnbr_base(0, "0123456789"); */
/* 	printf(" = %d\n", 0); */
/* 	/\*     /\\* base 2 *\\/ *\/ */
/* 	/\*     write(STDOUT_FILENO, "Base 2\n", 7); *\/ */
/* 	/\*     ft_putnbr_base(0, "01"); *\/ */
/* 	/\*     printf(" = 0\n"); *\/ */
/* 	/\*     ft_putnbr_base(1, "01"); *\/ */
/* 	/\*     printf(" = 1\n"); *\/ */
/* 	/\* base 8 with 01234567 *\/ */
/* 	write(STDOUT_FILENO, "\nBase 8\n\n", 10); */
/* 	ft_putnbr_base(0, "01234567"); */
/* 	write(STDOUT_FILENO, "\n", 1); */
/* 	ft_putnbr_base(1, "01234567"); */
/* 	write(STDOUT_FILENO, "\n", 1); */
/* 	ft_putnbr_base(8, "01234567"); */
/* 	write(STDOUT_FILENO, "\n", 1); */
/* 	ft_putnbr_base(17, "01234567"); */
/* 	write(STDOUT_FILENO, "\n", 1); */
/* 	ft_putnbr_base(-10, "01234567"); */
/* 	write(STDOUT_FILENO, "\n", 1); */
/* 	ft_putnbr_base(-80000000, "01234567"); */
/* 	write(STDOUT_FILENO, "\n", 1); */
/* 	ft_putnbr_base(INT_MIN + 1, "01234567"); */
/* 	write(STDOUT_FILENO, "\n", 1); */
/* 	ft_putnbr_base(INT_MIN, "01234567"); */
/* 	write(STDOUT_FILENO, "\n", 1); */
/* 	ft_putnbr_base(-3, "01234567"); */
/* 	write(STDOUT_FILENO, "\n", 1); */
/* 	/\* base8 with  poneyvif *\/ */
/* 	write(STDOUT_FILENO, "\nBase poneyvif\n\n", 16); */
/* 	ft_putnbr_base(0, "poneyvif"); */
/* 	write(STDOUT_FILENO, "\n", 1); */
/* 	ft_putnbr_base(1, "poneyvif"); */
/* 	write(STDOUT_FILENO, "\n", 1); */
/* 	ft_putnbr_base(8, "poneyvif"); */
/* 	write(STDOUT_FILENO, "\n", 1); */
/* 	ft_putnbr_base(17, "poneyvif"); */
/* 	write(STDOUT_FILENO, "\n", 1); */
/* 	ft_putnbr_base(-10, "poneyvif"); */
/* 	write(STDOUT_FILENO, "\n", 1); */
/* 	ft_putnbr_base(-80000000, "poneyvif"); */
/* 	write(STDOUT_FILENO, "\n", 1); */
/* 	ft_putnbr_base(INT_MIN + 1, "poneyvif"); */
/* 	write(STDOUT_FILENO, "\n", 1); */
/* 	ft_putnbr_base(INT_MIN, "poneyvif"); */
/* 	write(STDOUT_FILENO, "\n", 1); */
/* 	ft_putnbr_base(-3, "poneyvif"); */
/* 	write(STDOUT_FILENO, "\n", 1); */
/* 	return (0); */
/* } */

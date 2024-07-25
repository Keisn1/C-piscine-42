/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfreyer <kfreyer@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 18:15:06 by kfreyer           #+#    #+#             */
/*   Updated: 2024/07/11 18:08:30 by kfreyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */
#include <unistd.h>

int	ft_atoi_base(char *str, char *base);
int	idx_of_char(char c, char *base);

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
			return (-1);
		b++;
	}
	return (b - base);
}

int	ft_atoi_base(char *str, char *base)
{
	int	sign;
	int	res;
	int	coeff;
	int	size;

	size = check_base(base);
	if (size <= 1)
		return (0);
	while ((*str >= '\t' && *str <= '\r') || *str == ' ')
		str++;
	sign = 1;
	while (*str == '-' || *str == '+')
		if (*str++ == '-')
			sign *= -1;
	res = 0;
	coeff = idx_of_char(*str, base);
	while (coeff >= 0)
	{
		res *= size;
		res += coeff;
		coeff = idx_of_char(*(++str), base);
	}
	return (sign * res);
}

int	idx_of_char(char c, char *base)
{
	int	idx;

	idx = 0;
	while (base[idx])
	{
		if (c == base[idx])
			return (idx);
		idx++;
	}
	return (-1);
}

/* int	main(void) */
/* { */
/* 	printf("%d = %d\n", 1, ft_atoi_base("  \n  --++--1", "0123456789")); */
/* 	printf("%d = %d\n", -1, ft_atoi_base("  \n  --++-1", "0123456789")); */
/* 	printf("%d = %d\n", 123, ft_atoi_base("bcd", "abcdefghij")); */
/* 	printf("%d = %d\n", 11, ft_atoi_base("23", "0123")); */
/* 	printf("%d = %d\n", -11, ft_atoi_base(" \n ---%^", "#$%^")); */
/* 	/\* printf("%d = %d\n", 123, ft_atoi_base("%^", "!%^&")); *\/ */
/* 	/\* printf("%d = %d\n", 0, ft_atoi_base("", "abcdefghij")); *\/ */
/* 	/\* printf("%d = %d\n", 0, ft_atoi_base("-", "a")); *\/ */
/* 	/\* printf("%d = %d\n", -1, ft_atoi_base("-b", "ab")); *\/ */
/* 	return (0); */
/* } */

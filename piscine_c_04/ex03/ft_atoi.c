/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfreyer <kfreyer@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 18:14:18 by kfreyer           #+#    #+#             */
/*   Updated: 2024/07/11 18:09:15 by kfreyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/* #include <limits.h> */

int	ft_atoi(char *str);

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

/* int main() { */
/* printf("%d = %d\n", 1, ft_atoi("1")); */
/* printf("%d = %d\n", 12, ft_atoi("12")); */
/* printf("%d = %d\n", 12, ft_atoi("012")); */

/* printf("%d = %d\n", 9012, ft_atoi("9012")); */
/* printf("%d = %d\n", INT_MAX, ft_atoi("2147483647")); */
/* printf("%d = %d\n", -1, ft_atoi("-1")); */
/* printf("%d = %d\n", INT_MIN, ft_atoi("-2147483648")); */
/* printf("%d = %d\n", INT_MIN, ft_atoi("---2147483648")); */
/* printf("%d = %d\n", 2, ft_atoi("--2")); */
/* printf("%d = %d\n", -1234, ft_atoi("---+--+1234ab567")); */
/* printf("%d = %d\n", 0, ft_atoi("a;sldfj")); */
/*     printf("%d = %d\n", -123, ft_atoi("  ---++--123")); */

/*     return (0); */
/* } */

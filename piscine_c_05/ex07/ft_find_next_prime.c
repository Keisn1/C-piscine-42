/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfreyer <kfreyer@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 14:33:21 by kfreyer           #+#    #+#             */
/*   Updated: 2024/07/20 15:56:18 by kfreyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

int	ft_is_prime(int nb)
{
	int	x;

	if (nb == 2 || nb == 3)
		return (1);
	if (nb < 2 || !(nb % 2) || !(nb % 3))
		return (0);
	x = 5;
	while (x * x <= nb)
	{
		if (x * x < 0)
			return (1);
		if (!(nb % x))
			return (0);
		x += 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	p;

	if (nb <= 2)
	{
		return (2);
	}
	p = nb;
	if (p % 2 == 0)
		p++;
	while (p <= 2147483647)
	{
		if (ft_is_prime(p))
			return (p);
		p += 2;
	}
	return (0);
}

/* int	main(void) */
/* { */
/* 	printf("%d\n", ft_find_next_prime(-1231)); */
/* 	printf("%d\n", ft_find_next_prime(-1)); */
/* 	printf("%d\n", ft_find_next_prime(0)); */
/* 	printf("%d\n", ft_find_next_prime(1)); */
/* 	printf("%d\n", ft_find_next_prime(2)); */
/* 	printf("%d\n", ft_find_next_prime(3)); */
/* 	printf("%d\n", ft_find_next_prime(6)); */
/* 	printf("%d\n", ft_find_next_prime(11)); */
/* 	printf("%d\n", ft_find_next_prime(100)); */
/* 	printf("%d\n", ft_find_next_prime(1000)); */
/* 	printf("%d\n", ft_find_next_prime(30000)); */
/* 	printf("%d\n", ft_find_next_prime(600000)); */
/* 	printf("%d\n", ft_find_next_prime(7000000)); */
/* 	printf("%d\n", ft_find_next_prime(20000000)); */
/* 	printf("%d\n", ft_find_next_prime(800000000)); */
/* 	printf("%d\n", ft_find_next_prime(1000000000)); */
/* 	printf("%d\n", ft_find_next_prime(1000050000)); */
/* 	printf("%d\n", ft_find_next_prime(2000000012)); */
/* 	printf("%d\n", ft_find_next_prime(2000000034)); */
/* 	return (0); */
/* } */

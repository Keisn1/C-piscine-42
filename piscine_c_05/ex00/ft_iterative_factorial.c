/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfreyer <kfreyer@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 14:29:31 by kfreyer           #+#    #+#             */
/*   Updated: 2024/07/11 14:29:33 by kfreyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

int	ft_iterative_factorial(int nb);

int	ft_iterative_factorial(int nb)
{
	int	res;
	int	factor;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	res = 1;
	factor = 1;
	while (factor <= nb)
	{
		res *= factor++;
	}
	return (res);
}

/* int	main(void) */
/* { */
/* 	printf("%d\n", ft_iterative_factorial(-1)); */
/* 	printf("%d\n", ft_iterative_factorial(0)); */
/* 	printf("%d\n", ft_iterative_factorial(1)); */
/* 	printf("%d\n", ft_iterative_factorial(2)); */
/* 	printf("%d\n", ft_iterative_factorial(3)); */
/* 	printf("%d\n", ft_iterative_factorial(4)); */
/* 	printf("%d\n", ft_iterative_factorial(5)); */
/* 	printf("%d\n", ft_iterative_factorial(6)); */
/* 	return (0); */
/* } */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfreyer <kfreyer@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 14:29:40 by kfreyer           #+#    #+#             */
/*   Updated: 2024/07/11 14:29:43 by kfreyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

int	ft_recursive_factorial(int nb);

int	ft_recursive_factorial(int nb)
{
	int	res;

	if (nb > 1)
	{
		res = nb * ft_recursive_factorial(nb - 1);
		return (res);
	}
	if (nb == 1)
	{
		return (1);
	}
	if (nb == 0)
	{
		return (1);
	}
	return (0);
}

/* int	main(void) */
/* { */
/* 	printf("%d\n", ft_recursive_factorial(-1)); */
/* 	printf("%d\n", ft_recursive_factorial(0)); */
/* 	printf("%d\n", ft_recursive_factorial(1)); */
/* 	printf("%d\n", ft_recursive_factorial(2)); */
/* 	printf("%d\n", ft_recursive_factorial(3)); */
/* 	printf("%d\n", ft_recursive_factorial(4)); */
/* 	printf("%d\n", ft_recursive_factorial(5)); */
/* 	printf("%d\n", ft_recursive_factorial(6)); */
/* 	return (0); */
/* } */

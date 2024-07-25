/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfreyer <kfreyer@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 14:30:26 by kfreyer           #+#    #+#             */
/*   Updated: 2024/07/11 14:30:28 by kfreyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

int	ft_iterative_power(int nb, int power);

int	ft_iterative_power(int nb, int power)
{
	int	res;

	if (power == 0)
	{
		return (1);
	}
	if (power < 0)
	{
		return (0);
	}
	res = nb;
	while (power-- > 1)
	{
		res *= nb;
	}
	return (res);
}

/* int	main(void) */
/* { */
/* 	printf("%d\n", ft_iterative_power(2, 2)); */
/* 	printf("%d\n", ft_iterative_power(2, 5)); */
/* 	printf("%d\n", ft_iterative_power(0, 0)); */
/* 	printf("%d\n", ft_iterative_power(2, 0)); */
/* 	printf("%d\n", ft_iterative_power(2, -1)); */
/* 	printf("%d\n", ft_iterative_power(0, -1)); */
/* 	printf("%d\n", ft_iterative_power(1, -1)); */
/* 	return (0); */
/* } */

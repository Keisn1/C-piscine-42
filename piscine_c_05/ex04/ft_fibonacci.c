/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfreyer <kfreyer@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 14:31:19 by kfreyer           #+#    #+#             */
/*   Updated: 2024/07/11 14:31:21 by kfreyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

int	ft_fibonacci(int index);

int	ft_fibonacci(int index)
{
	if (index >= 3)
		return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
	if (index >= 1)
		return (1);
	if (index < 0)
		return (-1);
	return (0);
}

/* int	main(void) */
/* { */
/* 	printf("%d\n", ft_fibonacci(0)); */
/* 	printf("%d\n", ft_fibonacci(1)); */
/* 	printf("%d\n", ft_fibonacci(2)); */
/* 	printf("%d\n", ft_fibonacci(3)); */
/* 	printf("%d\n", ft_fibonacci(4)); */
/* 	printf("%d\n", ft_fibonacci(5)); */
/* 	printf("%d\n", ft_fibonacci(6)); */
/* 	printf("%d\n", ft_fibonacci(7)); */
/* 	return (0); */
/* } */

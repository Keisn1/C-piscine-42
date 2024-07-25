/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfreyer <kfreyer@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 21:56:34 by kfreyer           #+#    #+#             */
/*   Updated: 2024/07/24 21:56:35 by kfreyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/* #include <unistd.h> */

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*ret;
	int	i;

	ret = (int *)malloc(length * sizeof(int));
	i = 0;
	while (i < length)
	{
		ret[i] = f(tab[i]);
		i++;
	}
	return (ret);
}

/* int	add(int x) */
/* { */
/* 	return (x + 2); */
/* } */

/* void	print_arr(int *arr, int length) */
/* { */
/* 	int		i; */
/* 	char	c; */

/* 	i = 0; */
/* 	while (i < length) */
/* 	{ */
/* 		c = arr[i++] + '0'; */
/* 		write(1, &c, 1); */
/* 	} */
/* } */

/* int	main(void) */
/* { */
/* 	int	arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0}; */
/* 	int	*res; */
/* 	int	arr1[0] = {}; */

/* 	res = ft_map(arr, 10, add); */
/* 	print_arr(res, 10); */
/* 	free(res); */
/* 	write(1, "\n", 1); */
/* 	res = ft_map(arr1, 0, add); */
/* 	print_arr(res, 0); */
/* 	free(res); */
/* 	return (0); */
/* } */

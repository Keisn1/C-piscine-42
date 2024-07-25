/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfreyer <kfreyer@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 14:47:26 by kfreyer           #+#    #+#             */
/*   Updated: 2024/07/18 16:27:19 by kfreyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <limits.h> */
/* #include <stdio.h> */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*res;
	int	size;

	size = max - min;
	if (size <= 0)
	{
		*range = (void *)0;
		return (0);
	}
	res = (int *)malloc(size * sizeof(int));
	if (res == NULL)
	{
		*range = (void *)0;
		return (-1);
	}
	*range = res;
	i = 0;
	while (min < max)
	{
		res[i] = min++;
		i++;
	}
	return (size);
}

/* int	main(void) */
/* { */
/* 	int	*range; */
/* 	int	ret; */

/* 	ft_ultimate_range(&range, 1, 0); */
/* 	if (range != NULL) */
/* 		printf("Not a null pointer: %p\n", (void *)range); */
/* 	free(range); */
/* 	ft_ultimate_range(&range, 0, 15); */
/* 	if (range == NULL) */
/* 		printf("shouldn't be a null pointer: %p\n", (void *)range); */
/* 	free(range); */
/* 	ft_ultimate_range(&range, 0, 15); */
/* 	for (int i = 0; i < 15; i++) */
/* 		printf("%d ", range[i]); */
/* 	free(range); */
/* 	printf("\n"); */
/* 	ret = ft_ultimate_range(&range, INT_MIN, INT_MAX); */
/* 	printf("%d\n", ret); */
/* 	/\* for (int i = INT_MIN; i < INT_MAX; i++) *\/ */
/* 	/\* 	printf("%d ", range[i]); *\/ */
/* 	free(range); */

/* 	int min = -1; */
/* 	int max = 19; */
/* 	int res = ft_ultimate_range(&range, min, max); */
/* 	for (int i = 0; i < (max - min); i++) */
/* 		printf("%d ", range[i]); */
/* 	free(range); */
/* 	printf("\n"); */
/* 	printf("%d\n", res); */

/* 	min = 0; */
/* 	max = 166; */
/* 	res = ft_ultimate_range(&range, min, max); */
/* 	for (int i = 0; i < (max - min); i++) */
/* 		printf("%d ", range[i]); */
/* 	free(range); */
/* 	printf("\n"); */
/* 	printf("%d\n", res); */
/* 	return (0); */
/* } */

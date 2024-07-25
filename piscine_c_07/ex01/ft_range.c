/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfreyer <kfreyer@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 13:47:17 by kfreyer           #+#    #+#             */
/*   Updated: 2024/07/17 12:02:33 by kfreyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */
#include <stdlib.h>

/* #include <limits.h> */

/* void print_array(int* arr, int size) { */
/*     int idx = 0; */
/*     while (idx < size) { */
/*         printf("%d ", arr[idx++]); */
/*     } */
/*     printf("\n"); */
/* } */

int	*ft_range(int min, int max)
{
	int	*arr;
	int	idx;
	int	nbr;

	if (min >= max)
		return ((void *)0);
	arr = malloc((max - min) * sizeof(int));
	if (arr == (void *)0)
		return (arr);
	nbr = min;
	idx = 0;
	while (nbr < max)
		arr[idx++] = nbr++;
	return (arr);
}

/* int main() { */
/* 	int* arr; */

/*     arr = ft_range(1, 0); */
/*     if (arr != (void*)0) printf("Failure: not a null pointer"); */
/*     free(arr); */

/* 	arr =  ft_range(0, 10); */
/*     print_array(arr , 10); */
/* 	free(arr); */

/* 	arr = ft_range(INT_MIN,   INT_MIN + 10); */
/*     print_array(arr, 10); */
/* 	free(arr); */
/*     return (0); */
/* } */

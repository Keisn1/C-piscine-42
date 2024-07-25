/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfreyer <kfreyer@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 08:35:33 by kfreyer           #+#    #+#             */
/*   Updated: 2024/07/25 15:04:17 by kfreyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* #include <stdio.h> */
#include <stdlib.h>

int	sign_of(int x)
{
	if (x < 0)
	{
		return (-1);
	}
	if (x > 0)
	{
		return (1);
	}
	return (0);
}

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	comp;
	int	sign;

	if (length <= 1)
		return (1);
	sign = 0;
	i = 0;
	while (i < length - 1)
	{
		comp = f(tab[i], tab[i + 1]);
		if (comp != 0 && sign == 0)
		{
			sign = sign_of(comp);
			i++;
			continue ;
		}
		if (comp != 0 && sign != sign_of(comp))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/* int	cmp(int i, int j) */
/* { */
/* 	if (i < j) */
/* 	{ */
/* 		return (-1); */
/* 	} */
/* 	if (i == j) */
/* 	{ */
/* 		return (0); */
/* 	} */
/* 	return (1); */
/* } */

/* int	main(int argc, char **argv) */
/* { */
/* 	int	*tab; */
/* 	int	i; */

/* 	tab = (int *)malloc((argc - 1) * sizeof(int)); */
/* 	i = 1; */
/* 	while (i < argc) */
/* 	{ */
/* 		tab[i - 1] = atoi(argv[i]); */
/* 		i++; */
/* 	} */
/* 	printf("%d\n", ft_is_sort(tab, argc - 1, cmp)); */
/* 	free(tab); */
/* } */

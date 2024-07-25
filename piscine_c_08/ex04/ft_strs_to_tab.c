/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfreyer <kfreyer@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 12:10:11 by kfreyer           #+#    #+#             */
/*   Updated: 2024/07/19 19:26:16 by kfreyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
/* #include <stdio.h> */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*result;
	int			idx;

	result = (t_stock_str *)malloc((ac + 1) * sizeof(t_stock_str));
	idx = 0;
	while (idx < ac)
	{
		result[idx].size = ft_strlen(av[idx]);
		result[idx].str = av[idx];
		result[idx].copy = (char *)malloc(result[idx].size + 1);
		if (result[idx].copy == NULL)
		{
			exit(1);
		}
		result[idx].copy = ft_strcpy(result[idx].copy, result[idx].str);
		idx++;
	}
	result[idx].size = 0;
	result[idx].str = NULL;
	result[idx].copy = NULL;
	return (result);
}

/* int	main(void) */
/* { */
/* 	char		*av[] = {"hello", "worldworld"}; */
/* 	t_stock_str	*result; */

/* 	result = ft_strs_to_tab(2, av); */
/*     printf("%d\n", result[0].size); */
/*     printf("%s\n", result[0].str); */
/*     printf("%s\n", result[0].copy); */

/*     printf("%d\n", result[1].size); */
/*     printf("%s\n", result[1].str); */
/*     printf("%s\n", result[1].copy); */

/*     free(result[0].copy); */
/*     free(result[1].copy); */
/*     free(result); */
/* 	return (0); */
/* } */

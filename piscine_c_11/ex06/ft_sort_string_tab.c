/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfreyer <kfreyer@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 10:37:03 by kfreyer           #+#    #+#             */
/*   Updated: 2024/07/25 10:37:04 by kfreyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/* void	ft_putstr(char *str) */
/* { */
/* 	while (*str) */
/* 	{ */
/* 		write(1, str, 1); */
/* 		str++; */
/* 	} */
/* } */

void	ft_swap(char **ptr1, char **ptr2)
{
	char	*temp;

	temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	sum;
	int	idx;

	sum = 0;
	idx = 0;
	while (1)
	{
		sum = s1[idx] - s2[idx];
		if (s1[idx] == '\0' || s2[idx] == '\0' || sum)
			return (sum);
		idx++;
	}
}

void	ft_sort_string_tab(char **tab)
{
	int	cur_pos;
	int	pos;
	int	size;

	size = 0;
	while (tab[size] != NULL)
	{
		size++;
	}
	if (size < 2)
		return ;
	cur_pos = 1;
	while (cur_pos < size)
	{
		pos = cur_pos;
		while (pos > 0)
		{
			if (ft_strcmp(tab[pos], tab[pos - 1]) < 0)
				ft_swap(tab + pos, tab + pos - 1);
			pos--;
		}
		cur_pos++;
	}
}

/* int	main(void) */
/* { */
/* 	int	idx; */
/*     char* tab[5] = {"test1", "test2", "TestA", "TestB", NULL}; */

/* 	ft_sort_string_tab(tab); */
/* 	idx = 0; */
/* 	while (idx < 4) */
/* 	{ */
/* 		ft_putstr(tab[idx]); */
/* 		write(1, "\n", 1); */
/* 		idx++; */
/* 	} */
/* 	return (0); */
/* } */

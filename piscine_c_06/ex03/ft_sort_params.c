/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfreyer <kfreyer@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 09:21:22 by kfreyer           #+#    #+#             */
/*   Updated: 2024/07/12 09:23:10 by kfreyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

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

void	ft_sort_str_tab(char **tab, int size)
{
	int	cur_pos;
	int	pos;

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

int	main(int argc, char *argv[])
{
	int	idx;

	ft_sort_str_tab(argv + 1, argc - 1);
	idx = 1;
	while (idx < argc)
	{
		ft_putstr(argv[idx]);
		write(1, "\n", 1);
		idx++;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfreyer <kfreyer@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 14:34:19 by kfreyer           #+#    #+#             */
/*   Updated: 2024/07/11 14:34:21 by kfreyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */
#include <unistd.h>

int		ft_ten_queens_puzzle(void);

int	abs(int x)
{
	if (x < 0)
		return (-x);
	return (x);
}

int	is_allowed(int idx, int *placement)
{
	int	val;
	int	cur_val;
	int	idx_o;

	cur_val = placement[idx];
	idx_o = idx;
	while (--idx >= 0)
	{
		val = placement[idx];
		if (val == cur_val)
			return (0);
		if (abs(cur_val - val) == (idx_o - idx))
			return (0);
	}
	return (1);
}

void	print_array(int *placement)
{
	int		i;
	char	c;

	i = 0;
	while (i < 10)
	{
		c = placement[i++] + '0';
		write(1, &c, 1);
	}
	write(1, "\n", 1);
}

int	find_placements(int idx, int *placement)
{
	int	count;
	int	i;

	if (idx == 10)
	{
		return (1);
	}
	i = 0;
	count = 0;
	while (i < 10)
	{
		placement[idx] = i;
		if (is_allowed(idx, placement))
		{
			count += find_placements(idx + 1, placement);
			if (idx == 9)
			{
				print_array(placement);
			}
		}
		i++;
	}
	return (count);
}

int	ft_ten_queens_puzzle(void)
{
	int	placement[10];

	return (find_placements(0, placement));
}

/* int main() { */
/*     printf("%d\n", ft_ten_queens_puzzle()); */
/*     return (0); */
/* } */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfreyer <kfreyer@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 19:18:57 by kfreyer           #+#    #+#             */
/*   Updated: 2024/07/14 16:53:41 by kfreyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_array(int arr[4][4])
{
	char	c;
	int		i;
	int		j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			c = arr[i][j] + '0';
			write(1, &c, 1);
			if (j != 3)
			{
				write(1, " ", 1);
			}
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

void	init_arr(int arr[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			arr[i][j] = 0;
			j++;
		}
		i++;
	}
}

void	set_row_and_col_from_idx(int idx, int *row, int *col)
{
	*row = idx / 4;
	*col = idx % 4;
}

void	init_views(int views[4][4], char *str)
{
	int	idx;
	int row;
	int col;

	idx = 0;
	while (idx < 16)
	{
		set_row_and_col_from_idx(idx, &row, &col);
		views[row][col] = str[2 * idx] - '0';
		idx++;
	}
}

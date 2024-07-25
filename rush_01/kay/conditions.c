/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conditions.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfreyer <kfreyer@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 19:26:34 by kfreyer           #+#    #+#             */
/*   Updated: 2024/07/14 12:01:05 by kfreyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sides.h"
#include "directions.h"

int		nbrs_of_towers_visible(int from, int idx, int arr[4][4]);

/* views[4][4] =
{
	{	col1up,	col2up,	col3up,	col4up		},
	{	col1down,	col2down,	col3down,	col4down	},
	{	row1left,	row2left,	row3left,	row4left	},
	{	row1right,	row2right,	row3right,	row4right	},
}
*/

int	get_constraint(int side, int nbr, int views[4][4])
{
	return (views[side][nbr]);
}

int	check_row_condition(int row, int views[4][4], int arr[4][4])
{
	if (get_constraint(LEFT, row, views) != nbrs_of_towers_visible(LEFT, row,
			arr))
		return (0);
	if (get_constraint(RIGHT, row, views) != nbrs_of_towers_visible(RIGHT, row,
			arr))
		return (0);
	return (1);
}

int	check_col_condition(int col, int views[4][4], int arr[4][4])
{
	if (get_constraint(UP, col, views) != nbrs_of_towers_visible(UP, col, arr))
		return (0);
	if (get_constraint(DOWN, col, views) != nbrs_of_towers_visible(DOWN, col,
			arr))
		return (0);
	return (1);
}

int	duplicate_in(int dir, int row, int col, int arr[4][4])
{
	int	idx;
	int	val;

	val = arr[row][col];
	idx = 0;
	while (idx < 4)
	{
		if (dir == HORIZONTAL)
		{
			if (idx != col)
				if (arr[row][idx] == val)
					return (1);
			idx++;
			continue ;
		}
		if (dir == VERTICAL)
		{
			if (idx != row)
				if (arr[idx][col] == val)
					return (1);
			idx++;
			continue ;
		}
	}
	return (0);
}

int	no_duplicate(int row, int col, int arr[4][4])
{
	if (duplicate_in(HORIZONTAL, row, col, arr))
		return (0);
	if (duplicate_in(VERTICAL, row, col, arr))
		return (0);
	return (1);
}

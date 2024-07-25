/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_solutions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfreyer <kfreyer@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 19:18:47 by kfreyer           #+#    #+#             */
/*   Updated: 2024/07/14 12:04:11 by kfreyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sides.h"
#include <unistd.h>

/* void	print_array(int arr[4][4]); */
int		no_duplicate(int row, int col, int arr[4][4]);
int		get_constraint(int side, int idx, int views[4][4]);
int		check_row_condition(int row, int views[4][4], int arr[4][4]);
int		check_col_condition(int col, int views[4][4], int arr[4][4]);
void	set_row_and_col_from_idx(int idx, int *row, int *col);

int	is_valid_val(int row, int col, int views[4][4], int arr[4][4])
{
	int	valid_val;

	valid_val = no_duplicate(row, col, arr);
	if (row == 3)
		if (!check_col_condition(col, views, arr))
			valid_val = 0;
	if (col == 3)
		if (!check_row_condition(row, views, arr))
			valid_val = 0;
	return (valid_val);
}

int	find_solution(int idx, int views[4][4], int arr[4][4])
{
	int	row;
	int	col;
	int	val;

	if (idx == 16)
		return (1);
	set_row_and_col_from_idx(idx, &row, &col);
	val = 1;
	while (val <= 4)
	{
		arr[row][col] = val;
		if (is_valid_val(row, col, views, arr))
			if (find_solution(idx + 1, views, arr))
				return (1);
		val++;
	}
	arr[row][col] = 0;
	return (0);
}

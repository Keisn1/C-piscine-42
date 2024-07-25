/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tower_visibility.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfreyer <kfreyer@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 19:19:06 by kfreyer           #+#    #+#             */
/*   Updated: 2024/07/14 11:06:02 by kfreyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sides.h"
#include <unistd.h>

int	get_val(int idx, int from, int nbr, int arr[4][4])
{
	if (from == UP)
		return (arr[idx][nbr]);
	else if (from == DOWN)
		return (arr[4 - 1 - idx][nbr]);
	else if (from == LEFT)
		return (arr[nbr][idx]);
	else if (from == RIGHT)
		return (arr[nbr][4 - 1 - idx]);
	return (0);
}

int	nbrs_of_towers_visible(int from, int nbr, int arr[4][4])
{
	int	max;
	int	res;
	int	idx;
	int	val;

	max = -1;
	res = 0;
	idx = 0;
	while (idx < 4)
	{
		val = get_val(idx, from, nbr, arr);
		if (max < val)
		{
			max = val;
			res++;
		}
		idx++;
	}
	return (res);
}

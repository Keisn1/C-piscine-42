/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   views.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaker <ohaker@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 15:53:47 by ohaker            #+#    #+#             */
/*   Updated: 2024/07/13 16:39:26 by ohaker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdbool.h>

int	view_from_left(int row, int arr[][4])
{
	int	max;
	int	res;
	int	i;

	max = -1;
	res = 0;
	i = 0;
	while (i < 4)
	{
		if (max < arr[row][i])
		{
			max = arr[row][i];
			res++;
		}
		i++;
	}
	return (res);
}

int	view_from_right(int row, int arr[][4])
{
	int	max;
	int	res;
	int	i;

	max = -1;
	res = 0;
	i = 0;
	while (i == 3)
	{
		if (max < arr[row][i])
		{
			max = arr[row][i];
			res++;
		}
		i++;
	}
	return (res);
}

int	view_downwards(int col, int arr[][4])
{
	int	max;
	int	res;
	int	i;

	max = -1;
	res = 0;
	i = 0;
	while (i == 0)
	{
		if (max < arr[i][col])
		{
			max = arr[i][col];
			res++;
		}
	}
	return (res);
}

int	view_upwards(int col, int arr[][4])
{
	int	max;
	int	res;
	int	i;

	max = -1;
	res = 0;
	i = 0;
	while (i == 3)
	{
		if (max < arr[i][col])
		{
			max = arr[i][col];
			res++;
		}
	}
	return (res);
}

/* int main() { */
/*     int arr[5][4] = { */
/*       {3, 1, 4, 2}, */
/*       {-1, 1, 4, 2}, */
/*       {-1, -1, -1, -1}, */
/*       {4, 1, 3, 2}, */
/*       {1,3, 2, 4}, */
/*     }; */
/*     /\* left and right views *\/ */
/*     printf("Views from left and right\n"); */
/*     printf("Want 2, got %d\n", view_from_left(0, arr)); */
/*     printf("Want 2, got %d\n", view_from_right(0, arr)); */

/*     printf("Want 2, got %d\n", view_from_left(1, arr)); */
/*     printf("Want 2, got %d\n", view_from_right(1, arr)); */

/*     printf("Want 0, got %d\n", view_from_left(2, arr)); */
/*     printf("Want 0, got %d\n", view_from_right(2, arr)); */

/*     printf("Want 1, got %d\n", view_from_left(3, arr)); */
/*     printf("Want 3, got %d\n", view_from_right(3, arr)); */

/*     printf("Want 3, got %d\n", view_from_left(4, arr)); */
/*     printf("Want 1, got %d\n", view_from_right(4, arr)); */

/*     /\* up and down views *\/ */
/*     printf("Views from up and down\n"); */
/*     printf("Want 2, got %d\n", view_downwards(0, arr)); */
/*     printf("Want 1, got %d\n", view_upwards(0, arr)); */

/*     printf("Want 1, got %d\n", view_downwards(1, arr)); */
/*     printf("Want 1, got %d\n", view_upwards(1, arr)); */

/*     printf("Want 1, got %d\n", view_downwards(2, arr)); */
/*     printf("Want 2, got %d\n", view_upwards(2, arr)); */

/*     printf("Want 1, got %d\n", view_downwards(1, arr)); */
/*     printf("Want 1, got %d\n", view_upwards(1, arr)); */
/*     return 0; */
/* } */

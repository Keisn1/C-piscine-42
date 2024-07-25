/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   double_conditions.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaker <ohaker@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 16:34:27 by ohaker            #+#    #+#             */
/*   Updated: 2024/07/13 21:11:12 by ohaker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	val_in_row(int val, int row, int arr[][4])
{
	int	col;

	col = 0;
	while (col < 4)
	{
		if (arr[row][col++] == val)
			return (1);
	}
}

int	val_in_col(int val, int col, int arr[][4])
{
	int	row;

	row = 0;
	while (row < 4)
	{
		if (arr[row++][col] == val)
			return (1);
	}
}

// int main() {
//     int arr1[4][4];
//     for (int i = 0; i < 4; i++) {
//         arr1[0][i] = -1;
//     }

//     int arr2[4][4];
//     for (int i = 0; i < 4; i++) {
//         arr2[i][0] = -1;
//     }

//     arr1[0][1] = 1;
//     arr1[0][2] = 2;
//     arr1[0][3] = 4;
//     printf("%d\n", val_in_row(3, 0, arr1));
//     printf("%d\n", val_in_row(4, 0, arr1));
//     printf("%d\n", val_in_row(2, 0, arr1));
//     printf("%d\n", val_in_row(1, 0, arr1));
//     printf("%d\n", val_in_row(0, 0, arr1));

//     printf("\ncut\n\n");
//     arr2[1][0] = 1;
//     arr2[2][0] = 2;
//     arr2[3][0] = 4;
//     printf("%d\n", val_in_col(3, 0, arr2));
//     printf("%d\n", val_in_col(4, 0, arr2));
//     printf("%d\n", val_in_col(2, 0, arr2));
//     printf("%d\n", val_in_col(1, 0, arr2));
//     printf("%d\n", val_in_col(0, 0, arr2));
//     return 0;
// }

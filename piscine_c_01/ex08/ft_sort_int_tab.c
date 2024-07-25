/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfreyer <kfreyer@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 11:38:46 by kfreyer           #+#    #+#             */
/*   Updated: 2024/07/05 12:23:43 by kfreyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

void	sort_backwards(int *tab, int size);
void	ft_sort_int_tab(int *tab, int size);
void	ft_swap(int *a, int *b);

void	sort_backwards(int *tab, int pos)
{
	while (pos > 0)
	{
		if (tab[pos] < tab[pos - 1])
			ft_swap(tab + pos, tab + pos - 1);
		pos--;
	}
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	cur_pos;

	if (size < 2)
		return ;
	cur_pos = 1;
	while (cur_pos < size)
	{
		sort_backwards(tab, cur_pos);
		cur_pos++;
	}
}

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/* int	main(void) */
/* { */
/* 	int ints[2] = {2, 1}; */

/* 	ft_sort_int_tab(ints, 2); */
/* 	for (int i = 0; i < 2; i++) { */
/* 		printf("%d", ints[i]); */
/* 	} */
/* 	printf("\n"); */

/* 	int ints1[2] = {1}; */

/* 	ft_sort_int_tab(ints1, 1); */
/* 	for (int i = 0; i < 1; i++) { */
/* 		printf("%d", ints1[i]); */
/* 	} */
/* 	printf("\n"); */

/* 	int ints2[5] = {5, 4, 3, 2, 1}; */

/* 	ft_sort_int_tab(ints2, 5); */
/* 	for (int i = 0; i < 5; i++) { */
/* 		printf("%d", ints2[i]); */
/* 	} */
/* 	printf("\n"); */

/* 	int ints3[5] = {3, 1, 5, 4, 2}; */

/* 	ft_sort_int_tab(ints3, 5); */
/* 	for (int i = 0; i < 5; i++) { */
/* 		printf("%d", ints3[i]); */
/* 	} */
/* 	printf("\n"); */

/* 	int ints4[6] = {3, 1, 5, 6, 4, 2}; */

/* 	ft_sort_int_tab(ints4, 6); */
/* 	for (int i = 0; i < 6; i++) { */
/* 		printf("%d", ints4[i]); */
/* 	} */
/* 	printf("\n"); */

/* 	int ints0[0] = {}; */

/* 	ft_sort_int_tab(ints0, 0); */
/* 	for (int i = 0; i < 0; i++) { */
/* 		printf("%d", ints4[i]); */
/* 	} */
/* 	printf("\n"); */
/* } */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfreyer <kfreyer@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 11:14:04 by kfreyer           #+#    #+#             */
/*   Updated: 2024/07/05 12:24:22 by kfreyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

void	ft_rev_int_tab(int *tab, int size);

void	ft_swap(int *a, int *b);

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	count;

	if (size <= 0)
		return ;
	count = 0;
	while (count < size / 2)
	{
		ft_swap(tab + count, tab +(size - 1) - count);
		count++;
	}
}

/* int	main(void) */
/* { */
/* 	int	ints[6] = {1, 2, 3, 4, 5, 6}; */

/* 	ft_rev_int_tab(ints, 6); */
/* 	for (int i = 0; i < 6; i++) { */
/* 		printf("%d", ints[i]); */
/* 	} */
/* } */

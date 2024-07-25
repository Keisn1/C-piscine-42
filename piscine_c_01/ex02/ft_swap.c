/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfreyer <kfreyer@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 09:07:26 by kfreyer           #+#    #+#             */
/*   Updated: 2024/07/05 09:19:30 by kfreyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_swap(int *a, int *b);

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

//int	main(void)
//{
//	int nbr1;
//	int nbr2;
//
//	nbr1 = 21;
//	nbr2 = 42;
//	printf("%d %d", nbr1, nbr2);
//
//	ft_swap(&nbr1, &nbr2);
//	printf("%d %d", nbr1, nbr2);
//}

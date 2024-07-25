/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfreyer <kfreyer@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 09:25:46 by kfreyer           #+#    #+#             */
/*   Updated: 2024/07/05 09:31:15 by kfreyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	mod = *a % *b;
	div = *a / *b;
	*a = div;
	*b = mod;
}

//int	main(void)
//{
//	int	a;
//	int	b;
//
//	a = 11;
//	b = 4;
//	printf("a:%d, b:%d\n", a, b);
//	ft_ultimate_div_mod(&a, &b);
//	printf("div:%d, mod:%d\n", a, b);
//}

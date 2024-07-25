/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfreyer <kfreyer@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 09:12:54 by kfreyer           #+#    #+#             */
/*   Updated: 2024/07/05 09:24:59 by kfreyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*mod = a % b;
	*div = a / b;
}

//int	main(void)
//{
//	int	div;
//	int	mod;
//
//	ft_div_mod(11, 4, &div, &mod);
//	printf("div: %d, mod: %d", div, mod);
//}

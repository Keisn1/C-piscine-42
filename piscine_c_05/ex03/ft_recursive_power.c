/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfreyer <kfreyer@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 14:30:55 by kfreyer           #+#    #+#             */
/*   Updated: 2024/07/11 14:30:57 by kfreyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

int	ft_recursive_power(int nb, int power);

int	ft_recursive_power(int nb, int power)
{
	if (power > 1)
		return (nb * ft_recursive_power(nb, power - 1));
	if (power == 1)
		return (nb);
	if (power == 0)
		return (1);
	return (0);
}

/* int main() { */
/*     printf("%d\n", ft_recursive_power(2, 2)); */
/*     printf("%d\n", ft_recursive_power(2, 5)); */
/*     printf("%d\n", ft_recursive_power(0, 0)); */
/*     printf("%d\n", ft_recursive_power(2, 0)); */
/*     printf("%d\n", ft_recursive_power(2, -1)); */
/*     printf("%d\n", ft_recursive_power(0, -1)); */
/*     return (0); */
/* } */

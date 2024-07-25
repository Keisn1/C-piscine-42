/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfreyer <kfreyer@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 18:10:22 by kfreyer           #+#    #+#             */
/*   Updated: 2024/07/10 18:13:19 by kfreyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <limits.h> */
#include <unistd.h>

void	ft_putnbr(int nb);

void	print_array(int arr[], int idx)
{
	char	c;

	while (idx >= 0)
	{
		c = arr[idx--] + '0';
		write(STDOUT_FILENO, &c, 1);
	}
}

void	ft_putnbr(int nb)
{
	int	arr[10];
	int	idx;

	if (nb == -2147483648)
	{
		write(STDOUT_FILENO, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(STDOUT_FILENO, "-", 1);
		nb = -nb;
	}
	idx = 0;
	while (nb > 9)
	{
		arr[idx++] = nb % 10;
		nb /= 10;
	}
	arr[idx] = nb;
	print_array(arr, idx);
}

/* int main() { */
/*    ft_putnbr(INT_MIN + 10); */
/*    return (0); */
/* } */

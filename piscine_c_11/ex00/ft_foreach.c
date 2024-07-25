/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfreyer <kfreyer@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 08:20:06 by kfreyer           #+#    #+#             */
/*   Updated: 2024/07/25 10:08:41 by kfreyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <unistd.h> */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i++]);
	}
}

/* int	abs(int x) */
/* { */
/* 	if (x < 0) */
/* 	{ */
/* 		return (-x); */
/* 	} */
/* 	return (x); */
/* } */

/* void	ft_putnbr(int nb) */
/* { */
/* 	int		arr[10]; */
/* 	int		idx; */
/* 	char	c; */

/* 	if (nb < 0) */
/* 		write(STDOUT_FILENO, "-", 1); */
/* 	idx = 0; */
/* 	arr[idx++] = abs(nb % 10); */
/* 	nb = abs(nb / 10); */
/* 	while (nb > 0) */
/* 	{ */
/* 		arr[idx++] = nb % 10; */
/* 		nb /= 10; */
/* 	} */
/* 	while (--idx >= 0) */
/* 	{ */
/* 		c = arr[idx] + '0'; */
/* 		write(STDOUT_FILENO, &c, 1); */
/* 	} */
/* 	write(STDOUT_FILENO, "\n", 1); */
/* } */

/* int main() { */
/*     int arr[10] = {1, 234, 45, 123 , 764, 46523, 354, 36 , -1, -123}; */
/*     ft_foreach(arr, 10, ft_putnbr); */
/*     return (0); */
/* } */

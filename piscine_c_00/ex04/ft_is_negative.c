/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfreyer <kfreyer@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 09:30:38 by kfreyer           #+#    #+#             */
/*   Updated: 2024/07/04 09:34:34 by kfreyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	sign;

	sign = 'P';
	if (n < 0)
	{
		sign = 'N';
	}
	write(1, &sign, 1);
	return ;
}

// int	main(void)
// {
// 	ft_is_negative(4);
// 	return (0);
// }

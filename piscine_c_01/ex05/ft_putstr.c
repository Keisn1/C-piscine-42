/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfreyer <kfreyer@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 09:32:02 by kfreyer           #+#    #+#             */
/*   Updated: 2024/07/05 09:39:48 by kfreyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str);

void	ft_putstr(char *str)
{
	char	c;
	int		count;

	count = 0;
	c = str[0];
	while (c != '\0')
	{
		write(1, &c, 1);
		c = str[++count];
	}
}

//int	main(void)
//{
//	char	*str = "hello";
//
//	ft_putstr(str);
//	write(1, "\n", 1);
//
//	str = "What about your";
//	ft_putstr(str);
//	write(1, "\n", 1);
//
//	str = "";
//	ft_putstr(str);
//	write(1, "\n", 1);
//
//	str = "\n";
//	ft_putstr(str);
//}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfreyer <kfreyer@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 21:57:45 by kfreyer           #+#    #+#             */
/*   Updated: 2024/07/25 10:08:50 by kfreyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/* #include <stdio.h> */

int	ft_any(char **tab, int (*f)(char *))
{
	while (*tab != NULL)
	{
		if (f(*tab))
		{
			return (1);
		}
		tab++;
	}
	return (0);
}

/* int longer_than_5(char *str) { */
/*     int count; */

/*     count = 0; */
/*     while (str[count]) { */
/*         count++; */
/*     } */
/*     if (count > 5) { */
/*         return (1); */
/*     } */
/*     return (0); */
/* } */

/* int main() { */
/*     char* strs[] = {"hello", "what", "123", "123564", NULL}; */
/*     if (ft_any(strs, longer_than_5)) { */
/*         printf("One Longer than 5"); */
/*         return (0); */
/*     } */
/*     printf("Nothing Longer than 5"); */
/*     return (0); */
/* } */

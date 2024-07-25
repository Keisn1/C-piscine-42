/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfreyer <kfreyer@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 21:57:45 by kfreyer           #+#    #+#             */
/*   Updated: 2024/07/25 10:08:28 by kfreyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/* #include <stdio.h> */

int	ft_count_if(char **tab, int length, int (*f)(char *))
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (i < length)
	{
		if (f(tab[i]))
		{
			count++;
		}
		i++;
	}
	return (count);
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
/*     char* strs[] = {"helloasdf", "what", "123", "123564",  "another"}; */
/*     printf("%d\n", ft_count_if(strs, 5, longer_than_5)); */
/*     return (0); */
/* } */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfreyer <kfreyer@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 09:28:18 by kfreyer           #+#    #+#             */
/*   Updated: 2024/07/10 09:56:41 by kfreyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */
/* #include <string.h> */

char	*ft_strstr(char *str, char *to_find)
{
	char	*c_to_find;
	char	*start;

	if (!*to_find)
		return (str);
	c_to_find = to_find;
	start = str;
	while (*str && *c_to_find)
	{
		if (*str == *c_to_find)
		{
			str++;
			c_to_find++;
			if (*c_to_find == '\0')
				return (start);
			continue ;
		}
		c_to_find = to_find;
		start = str;
		if (*str != *c_to_find)
			start = ++str;
	}
	return ((void *)0);
}

/* int main() { */
/*     printf("%s\n", ft_strstr("kay Freyer", "Frey")); */
/*     printf("%s\n", strstr("kay Freyer", "Frey")); */
/*     printf("%s\n", ft_strstr("kay ", "Frey")); */
/*     printf("%s\n", strstr("kay ", "Frey")); */
/*     printf("%s\n", ft_strstr("", "Frey")); */
/*     printf("%s\n", strstr("", "Frey")); */
/*     printf("%s\n", ft_strstr("asdf", "")); */
/*     printf("%s\n", strstr("asdf", "")); */
/*     printf("%s\n", ft_strstr("kay karre kasten", "kasten")); */
/*     printf("%s\n", strstr("kay karre kasten", "kasten")); */
/*     printf("%s\n", ft_strstr("kakasten", "kasten")); */
/*     printf("%s\n", strstr("kakasten", "kasten")); */
/*     printf("%s\n", ft_strstr("kafasten", "kasten")); */
/*     printf("%s\n", strstr("kafasten", "kasten")); */
/*     printf("%s\n", ft_strstr("kakfsten", "kasten")); */
/*     printf("%s\n", strstr("kakfsten", "kasten")); */
/*     printf("%s\n", ft_strstr("kakfsten", "k")); */
/*     printf("%s\n", strstr("kakfsten", "k")); */
/*     return (0); */
/* } */

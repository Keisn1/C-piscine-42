/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfreyer <kfreyer@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 10:35:32 by kfreyer           #+#    #+#             */
/*   Updated: 2024/07/07 12:11:46 by kfreyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */
/* #include <string.h> */

char	*ft_strlowcase(char *str);
void	to_lower(char *c);

void	to_lower(char *c)
{
	*c += 'a' - 'A';
}

char	*ft_strlowcase(char *str)
{
	int	i;
	int	c;

	i = 0;
	c = str[i];
	while (c != '\0')
	{
		if ((c >= 'A' && c <= 'Z'))
		{
			to_lower(&str[i]);
		}
		c = str[++i];
	}
	return (str);
}

/* int	main(void) */
/* { */
/* 	char	test1[] = ""; */
/* 	char	test2[] = "ABC DEF"; */
/* 	char	test3[] = "%^&* d Ef"; */

/* 	ft_strlowcase(test1); */
/* 	if (strcmp(test1, "")) */
/* 		printf("Failure"); */
/* 	ft_strlowcase(test2); */
/* 	if (strcmp(test2, "abc def")) */
/* 		printf("Failure: %s", test2); */
/* 	ft_strlowcase(test3); */
/* 	if (strcmp(test3, "%^&* d ef")) */
/* 		printf("Failure: %s", test3); */
/* } */

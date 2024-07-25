/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfreyer <kfreyer@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 10:35:32 by kfreyer           #+#    #+#             */
/*   Updated: 2024/07/07 12:28:04 by kfreyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */
/* #include <string.h> */

char	*ft_strupcase(char *str);
void	to_upper(char *c);

void	to_upper(char *c)
{
	*c += 'A' - 'a';
}

char	*ft_strupcase(char *str)
{
	int	i;
	int	c;

	i = 0;
	c = str[i];
	while (c != '\0')
	{
		if ((c >= 'a' && c <= 'z'))
		{
			to_upper(&str[i]);
		}
		c = str[++i];
	}
	return (str);
}

/* int	main(void) */
/* { */
/* 	char	test1[] = ""; */
/* 	char	test2[] = "abc def"; */
/* 	char	test3[] = "%^&* d Ef"; */

/* 	ft_strupcase(test1); */
/* 	if (strcmp(test1, "")) */
/* 		printf("Failure"); */
/* 	ft_strupcase(test2); */
/* 	if (strcmp(test2, "ABC DEF")) */
/* 		printf("Failure: %s", test2); */
/* 	ft_strupcase(test3); */
/* 	if (strcmp(test3, "%^&* D EF")) */
/* 		printf("Failure: %s", test3); */
/* } */

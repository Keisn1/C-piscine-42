/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfreyer <kfreyer@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 18:48:56 by kfreyer           #+#    #+#             */
/*   Updated: 2024/07/10 09:53:55 by kfreyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */
/* #include <string.h> */

char	*ft_strncat(char *dest, char *src, unsigned int nb);

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*d;
	char			*s;
	unsigned int	n;

	d = dest;
	while (*d)
		d++;
	s = src;
	n = nb;
	while (*s && n-- != 0)
	{
		*d++ = *s++;
	}
	*d = '\0';
	return (dest);
}

/* int	main(void) */
/* { */
/* 	char	dest1[30] = ""; */
/* 	char	dest2[30] = ""; */
/* 	char	*src; */
/* 	char	dest3[30] = "hell yeah"; */
/* 	char	dest4[30] = "hell yeah"; */
/* 	char	*src1; */
/* 	char	dest5[] = ""; */
/* 	char	dest6[] = ""; */
/* 	char	*src2; */
/* 	unsigned int size; */

/* 	src = "to be concatenated"; */
/* 	size = 5; */
/* 	ft_strncat(dest1, src, size); */
/* 	strncat(dest2, src, size); */
/* 	if (strcmp(dest1, dest2)) */
/* 		printf("Failure: ft: %s --- strncat: %s \n", dest1, dest2); */

/* 	size = 40; */
/* 	src1 = "to be concatenated"; */
/* 	ft_strncat(dest3, src1, size); */
/* 	strncat(dest4, src1, size); */
/* 	if (strcmp(dest3, dest4)) */
/* 		printf("Failure: ft: %s --- strncat: %s \n", dest3, dest4); */

/* 	src2 = ""; */
/* 	size = 0; */
/* 	ft_strncat(dest5, src2, size); */
/* 	strncat(dest6, src2, size); */
/* 	if (strcmp(dest5, dest6)) */
/* 		printf("Failure: ft: %s --- strncat: %s \n", dest5, dest6); */
/* 	return (0); */
/* } */

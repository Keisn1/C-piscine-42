/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfreyer <kfreyer@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 12:20:52 by kfreyer           #+#    #+#             */
/*   Updated: 2024/07/10 09:50:05 by kfreyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */
/* #include <string.h> */

char	*ft_strcat(char *dest, char *src);

char	*ft_strcat(char *dest, char *src)
{
	char	*d;
	char	*s;

	d = dest;
	while (*d)
		d++;
	s = src;
	while (*s)
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

/* 	src = "to be concatenated"; */
/* 	ft_strcat(dest1, src); */
/* 	strcat(dest2, src); */
/* 	if (strcmp(dest1, dest2)) */
/* 		printf("Failure: ft: %s --- strcat: %s \n", dest1, dest2); */

/* 	src1 = "to be concatenated"; */
/* 	ft_strcat(dest3, src1); */
/* 	strcat(dest4, src1); */
/* 	if (strcmp(dest3, dest4)) */
/* 		printf("Failure: ft: %s --- strcat: %s \n", dest3, dest4); */

/* 	src2 = ""; */
/* 	ft_strcat(dest5, src2); */
/* 	strcat(dest6, src2); */
/* 	if (strcmp(dest5, dest6)) */
/* 		printf("Failure: ft: %s --- strcat: %s \n", dest5, dest6); */
/* 	return (0); */
/* } */

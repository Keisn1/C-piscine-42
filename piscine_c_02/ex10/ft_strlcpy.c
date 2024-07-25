/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfreyer <kfreyer@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 14:19:16 by kfreyer           #+#    #+#             */
/*   Updated: 2024/07/20 19:19:59 by kfreyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stddef.h> */

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
	{
		count++;
	}
	return (count);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	count;

	if (size == 0)
		return (ft_strlen(src));
	count = 0;
	while (src[count] != '\0' && (count < size - 1))
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return (ft_strlen(src));
}

/* int	main(void) */
/* { */
/* 	char	src[] = "This is a long string that exceeds the buffer size"; */
/* 	char	dest_ft_strlcpy[10]; */
/* 	char	dest_strlcpy[10]; */
/* 	int		ret1; */
/* 	int		ret2; */

/* 	ret1 = strlcpy(dest_strlcpy, src, 0); */
/* 	ret2 = ft_strlcpy(dest_ft_strlcpy, src, 0); */
/* 	if (ret1 != ret2) */
/* 	{ */
/* 		printf("Failure: ft_strlcpy: %s; strlcpy: %s, ret2: %d, ret1: %d\n", */
/* 			dest_ft_strlcpy, dest_strlcpy, ret2, ret1); */
/* 	} */
/*     if (strcmp(dest_ft_strlcpy, dest_strlcpy)) { */
/*         printf( */
/*                "Failure: ft_strlcpy: %s; strlcpy: %s, cmp: %d\n", */
/*                dest_ft_strlcpy, */
/*                dest_strlcpy, */
/*                strcmp(dest_ft_strlcpy, dest_strlcpy) */
/*         ); */
/*     } */
/*     char src1[] = "short string"; */
/*     char dest_ft_strlcpy1[4]; */
/*     char dest_strlcpy1[4]; */
/* 	ret1 = strlcpy(dest_strlcpy1, src1, 4); */
/* 	ret2 = ft_strlcpy(dest_ft_strlcpy1, src1, 4); */
/* 	if (ret1 != ret2) { */
/*         printf( */
/*                "Failure: ft_strlcpy: %s; strlcpy: %s, ret2: %d, ret1:
	%d\n",
	*/
/*                dest_ft_strlcpy1, dest_strlcpy1, ret2, ret1 */
/* 				); */
/* 	} */
/*     if (strcmp(dest_ft_strlcpy1, dest_strlcpy1)) { */
/*         printf( */
/*                "Failure: ft_strlcpy: %s; strlcpy: %s, cmp: %d\n", */
/*                dest_ft_strlcpy1, */
/*                dest_strlcpy1, */
/*                strcmp(dest_ft_strlcpy1, dest_strlcpy1) */
/*         ); */
/*     } */
/*     char src2[] = ""; */
/*     char dest_ft_strlcpy2[4]; */
/*     char dest_strlcpy2[4]; */
/* 	ret1 = strlcpy(dest_strlcpy2, src2, 4); */
/* 	ret2 = ft_strlcpy(dest_ft_strlcpy2, src2, 4); */
/* 	if (ret1 != ret2) { */
/*         printf( */
/*                "Failure: ft_strlcpy: %s; strlcpy: %s, ret2: %d, ret2:
	%d\n",
	*/
/*                dest_ft_strlcpy2, dest_strlcpy2, ret2, ret2 */
/* 				); */
/* 	} */
/*     if (strcmp(dest_ft_strlcpy2, dest_strlcpy2)) { */
/*         printf( */
/*                "Failure: ft_strlcpy: %s; strlcpy: %s, cmp: %d\n", */
/*                dest_ft_strlcpy2, */
/*                dest_strlcpy2, */
/*                strcmp(dest_ft_strlcpy2, dest_strlcpy2) */
/*         ); */
/*     } */
/*     /\* char src2[] = "short"; *\/ */
/*     /\* char dest_strlcpy2[4]; *\/ */
/*     /\* strlcpy(dest_strlcpy2, src2, sizeof(dest_strlcpy2)); *\/ */
/*     /\* char dest_ft_strlcpy2[4]; *\/ */
/*     /\* ft_strlcpy(dest_ft_strlcpy2, src2,
	sizeof(dest_ft_strlcpy2)); *\/ */
/*     /\* if (strcmp(dest_ft_strlcpy2, dest_strlcpy2)) { *\/ */
/*     /\*     printf( *\/ */
/*     /\*            "Failure: ft_strlcpy: %s; strlcpy: %s, cmp: %d\n",
 *\/ */
/*     /\*            dest_ft_strlcpy, *\/ */
/*     /\*            dest_strlcpy, *\/ */
/*     /\*            strcmp(dest_ft_strlcpy, dest_strlcpy) *\/ */
/*     /\*     ); *\/ */
/*     /\* } *\/ */
/*     char src8[] = "asdf"; */
/*     char dest_ft_strlcpy8[0] ; */
/*     char dest_strlcpy8[0] ; */
/* 	ret1 = strlcpy(dest_strlcpy8, src8, 0); */
/* 	ret2 = ft_strlcpy(dest_ft_strlcpy8, src8, 0); */
/* 	if (ret1 != ret2) { */
/*         printf( */
/*                "Failure: ft_strlcpy: %s; strlcpy: %s, ret2: %d, ret1:
	%d\n",
	*/
/*                dest_ft_strlcpy8, dest_strlcpy8, ret2, ret1 */
/* 				); */
/* 	} */
/* 	return (0); */
/* } */

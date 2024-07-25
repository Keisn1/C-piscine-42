/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfreyer <kfreyer@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 18:19:52 by kfreyer           #+#    #+#             */
/*   Updated: 2024/07/07 10:36:49 by kfreyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */
/* #include <string.h> */

char	*ft_strncpy(char *dest, char *src, unsigned int n);

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/* void test_ft_strncpy(char* dest1, char* dest2, char* src,
	unsigned int n) { */
/*     ft_strncpy(dest1, src, n); */
/*     strncpy(dest2, src, n); */
/*     if (strcmp(dest1, dest2)) { */
/*         printf("Failure: ft_strncpy: %s; strncpy: %s; diff: %d\n", dest1,
	dest2, strcmp(dest1, dest2)); */
/*     } */
/* } */

/* int main(void) { */
/*     char dest1[] = "Hello hello"; */
/*     char dest2[] = "Hello hello"; */
/*     char* src1= "salut"; */
/*     unsigned int n = strlen(src1) + 1; */
/*     test_ft_strncpy(dest1, dest2, src1, n); */

/*     char dest3[] = "Hello hello"; */
/*     char dest4[] = "Hello hello"; */
/*     char* src2= "salut"; */
/*     n = 10; */
/*     test_ft_strncpy(dest3, dest4, src2, n); */

/*     char dest5[] = "Hello"; */
/*     char dest6[] = "Hello"; */
/*     char* src3= "salut"; */
/*     n = strlen(src3) + 1; */
/*     test_ft_strncpy(dest5, dest6, src3, n); */

/*     return (0); */
/* } */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfreyer <kfreyer@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 17:38:07 by kfreyer           #+#    #+#             */
/*   Updated: 2024/07/07 10:36:30 by kfreyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */
/* #include <string.h> */

char	*ft_strcpy(char *dest, char *src);

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/* int main(void) { */
/*     char dest1[] = "Hello hello"; */
/*     char dest2[] = "Hello hello"; */
/*     char* src1= "salut"; */
/*     ft_strcpy(dest1, src1); */
/*     strcpy(dest2, src1); */
/*     if (strcmp(dest1, dest2)) */
/*         printf("Failure: ft_strcpy: %s; strcpy: %s; diff: %d\n", dest1,
	dest2, strcmp(dest1, dest2)); */

/*     char dest3[] = "Hello"; */
/*     char dest4[] = "Hello"; */
/*     char* src2= "salut"; */
/*     ft_strcpy(dest3, src2); */
/*     strcpy(dest4, src2); */
/*     if (strcmp(dest3, dest4)) */
/*         printf("Failure: ft_strcpy: %s; strcpy: %s; diff: %d\n", dest3,
	dest4, strcmp(dest3, dest4)); */

/*     char dest5[] = "string"; */
/*     char dest6[] = "string"; */
/*     char* src3= ""; */
/*     ft_strcpy(dest5, src3); */
/*     strcpy(dest6, src3); */
/*     if (strcmp(dest5, dest6)) */
/*         printf("Failure: ft_strcpy: %s; strcpy: %s; diff: %d\n", dest5,
	dest6, strcmp(dest5, dest6)); */

/*     return (0); */
/* } */

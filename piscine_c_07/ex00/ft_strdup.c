/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfreyer <kfreyer@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 13:47:26 by kfreyer           #+#    #+#             */
/*   Updated: 2024/07/17 12:02:58 by kfreyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <string.h> */
#include <stdlib.h>

/* #include <stdio.h> */

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

char	*ft_strdup(char *src)
{
	char	*res_o;
	char	*res;
	int		len;

	len = ft_strlen(src);
	res = malloc((len + 1) * sizeof(char));
	if (res == (void *)0)
	{
		return (res);
	}
	res_o = res;
	while (*src)
		*res++ = *src++;
	*res = '\0';
	return (res_o);
}

/* int main() { */
/*     char* src = "hello"; */
/*     char* got = ft_strdup("hello"); */
/*     char* want = strdup("hello"); */
/*     if (got == src) printf("d1 shall not be src"); */
/*     if (strcmp(got, want)) printf("Failure: want: %s --- got: %s\n", want,
	got); */
/*     free(got); */
/*     free(want); */

/*     src = ""; */
/*     got = ft_strdup(src); */
/*     want = strdup(src); */
/*     if (got == src) printf("d1 shall not be src"); */
/*     if (strcmp(got, want)) printf("Failure: want: %s --- got: %s\n", want,
	got); */
/*     free(got); */
/*     free(want); */

/*     src = "1"; */
/*     got = ft_strdup(src); */
/*     want = strdup(src); */
/*     if (got == src) printf("d1 shall not be src"); */
/*     if (strcmp(got, want)) printf("Failure: want: %s --- got: %s\n", want,
	got); */
/*     free(got); */
/*     free(want); */
/*     return (0); */
/* } */

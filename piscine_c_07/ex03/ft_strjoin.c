/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfreyer <kfreyer@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 20:22:11 by kfreyer           #+#    #+#             */
/*   Updated: 2024/07/18 08:39:15 by kfreyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */
/* #include <string.h> */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

char	*get_empty_str(void)
{
	char	*res;

	res = (char *)malloc(1 * sizeof(char));
	res[0] = '\0';
	return (res);
}

int	get_total_len(int size, char **strs, char *sep)
{
	int	total_len;
	int	sep_len;
	int	count;

	count = 0;
	total_len = 0;
	sep_len = ft_strlen(sep);
	while (count < size)
	{
		total_len += (ft_strlen(strs[count]) + 1);
		count++;
	}
	total_len += (size - 1) * sep_len;
	return (total_len);
}

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

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		count;

	if (size == 0)
		return (get_empty_str());
	str = (char *)malloc(get_total_len(size, strs, sep) * sizeof(char));
	if (str == NULL)
		return (NULL);
	str[0] = '\0';
	count = 0;
	while (count < size)
	{
		ft_strcat(str, strs[count]);
		count++;
		if (count < size)
			ft_strcat(str, sep);
	}
	return (str);
}

/* int	main(void) */
/* { */
/* 	char	*strs[] = {"hello", "world"}; */
/* 	char	*sep; */
/* 	char	*res; */

/* 	/\* size = 0 *\/ */
/* 	sep = ","; */
/* 	res = ft_strjoin(0, strs, sep); */
/* 	if (strcmp("", res)) */
/* 		printf("failure\n"); */
/* 	free(res); */

/* 	/\* size = 2 *\/ */
/* 	sep = ","; */
/* 	res = ft_strjoin(2, strs, sep); */
/* 	printf("%s\n", res); */
/* 	free(res); */

/* 	/\* size = 3 and other seperator *\/ */
/* 	sep = " "; */
/* 	char* strs2[] = {"hello", "world", "really"}; */
/* 	res = ft_strjoin(3, strs2, sep); */
/* 	printf("%s\n", res); */
/* 	free(res); */

/* 	/\* no input strings *\/ */
/* 	sep = " "; */
/* 	char* strs3[] = {}; */
/* 	res = ft_strjoin(0, strs3, sep); */
/* 	printf("%s\n", res); */
/* 	free(res); */

/* 	sep = "--ein extrem langer seperator string
 	kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk
 	kk kkkkkkkkkkkkkkkkkkkkkkk--"; */
/* 	/\* you need to reserve memory also for seperator *\/ */
/* 	char* strs4[] = {"wort1", "wort2", "wort3", "wort4", "wort5", "wort6", */
/* 		"wort7", "wort8"}; */
/* 	res = ft_strjoin(8, strs4, sep); */
/* 	printf("%s\n", res); */
/* 	free(res); */

/* 	return (0); */
/* } */

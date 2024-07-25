/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfreyer <kfreyer@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 21:06:13 by kfreyer           #+#    #+#             */
/*   Updated: 2024/07/08 12:18:13 by kfreyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */
/* #include <string.h> */

int	ft_strncmp(char *s1, char *s2, unsigned int n);
int	sign(int x);

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int				sum;
	unsigned int	idx;

	sum = 0;
	idx = 0;
	while (1)
	{
		if (idx >= n)
			return (sum);
		sum = s1[idx] - s2[idx];
		if (s1[idx] == '\0' || s2[idx] == '\0' || sum)
			return (sum);
		idx++;
	}
}

/* int	main(void) */
/* { */
/* 	char			*str1; */
/* 	char			*str2; */
/* 	unsigned int	n; */
/* 	int				res1; */
/* 	int				res2; */

/* 	str1 = "hello"; */
/* 	str2 = "hello"; */
/* 	n = 5; */
/* 	res1 = sign(ft_strncmp(str1, str2, n)); */
/* 	res2 = sign(strncmp(str1, str2, n)); */
/* 	if (res1 != res2) */
/* 		printf("Fail: ft: %d --- strncmp: %d", res1, res2); */
/* 	str1 = ""; */
/* 	str2 = "hello"; */
/* 	n = 3; */
/* 	res1 = sign(ft_strncmp(str1, str2, n)); */
/* 	res2 = sign(strncmp(str1, str2, n)); */
/* 	if (res1 != res2) */
/* 		printf("Fail: ft: %d --- strncmp: %d", res1, res2); */
/* 	str1 = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"; */
/* 	str2 = "bbbbbbbbbbbbbbbbbbbb"; */
/* 	n = 20; */
/* 	res1 = sign(ft_strncmp(str1, str2, n)); */
/* 	res2 = sign(strncmp(str1, str2, n)); */
/* 	if (res1 != res2) */
/* 		printf("Fail: ft: %d --- strncmp: %d", res1, res2); */
/* 	str1 = "0p2kasdfh"; */
/* 	str2 = "al;sdkjfo w8uasdl;fj asufasudfjl3ljjljfas9u3j"; */
/* 	n = 100; */
/* 	res1 = sign(ft_strncmp(str1, str2, n)); */
/* 	res2 = sign(strncmp(str1, str2, n)); */
/* 	if (res1 != res2) */
/* 		printf("Fail: ft: %d --- strncmp: %d", res1, res2); */
/* 	str1 = "hello"; */
/* 	str2 = "hellowasanderes"; */
/* 	n = 5; */
/* 	res1 = sign(ft_strncmp(str1, str2, n)); */
/* 	res2 = sign(strncmp(str1, str2, n)); */
/* 	if (res1 != res2) */
/* 		printf("Fail: ft: %d --- strncmp: %d", res1, res2); */
/* 	/\* str1 = "ABAa"; *\/ */
/* 	/\* str2 = "ABCa"; *\/ */
/* 	/\* res1 = sign(ft_strncmp(str1, str2)); *\/ */
/* 	/\* res2 = sign(strncmp(str1, str2)); *\/ */
/* 	/\* if (res1 != res2) printf("Fail: ft: %d --- strncmp: %d", res1,
		res2); *\/ */
/* 	/\* str1 = "ABC"; *\/ */
/* 	/\* str2 = "ABC"; *\/ */
/* 	/\* res1 = sign(ft_strncmp(str1, str2)); *\/ */
/* 	/\* res2 = sign(strncmp(str1, str2)); *\/ */
/* 	/\* if (res1 != res2) printf("Fail: ft: %d --- strncmp: %d", res1,
		res2); *\/ */
/* 	/\* str1 = "ABC"; *\/ */
/* 	/\* str2 = "AB"; *\/ */
/* 	/\* res1 = sign(ft_strncmp(str1, str2)); *\/ */
/* 	/\* res2 = sign(strncmp(str1, str2)); *\/ */
/* 	/\* if (res1 != res2) printf("Fail: ft: %d --- strncmp: %d", res1,
		res2); *\/ */
/* 	/\* str1 = "ABA"; *\/ */
/* 	/\* str2 = "ABZ"; *\/ */
/* 	/\* res1 = sign(ft_strncmp(str1, str2)); *\/ */
/* 	/\* res2 = sign(strncmp(str1, str2)); *\/ */
/* 	/\* if (res1 != res2) printf("Fail: ft: %d --- strncmp: %d", res1,
		res2); *\/ */
/* 	str1 = "ABJ"; */
/* 	str2 = "ABC"; */
/* 	n = 10; */
/* 	res1 = sign(ft_strncmp(str1, str2, n)); */
/* 	res2 = sign(strncmp(str1, str2, n)); */
/* 	if (res1 != res2) */
/* 		printf("Fail: ft: %d --- strncmp: %d", res1, res2); */
/* 	return (0); */
/* } */

/* int	sign(int x) */
/* { */
/* 	if (x > 0) */
/* 		return (1); */
/* 	if (x < 0) */
/* 		return (-1); */
/* 	return (0); */
/* } */

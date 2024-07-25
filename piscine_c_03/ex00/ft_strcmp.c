/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfreyer <kfreyer@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 21:06:13 by kfreyer           #+#    #+#             */
/*   Updated: 2024/07/08 09:12:38 by kfreyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */
/* #include <string.h> */

int	ft_strcmp(char *s1, char *s2);

int	ft_strcmp(char *s1, char *s2)
{
	int	sum;
	int	idx;

	sum = 0;
	idx = 0;
	while (1)
	{
		sum = s1[idx] - s2[idx];
		if (s1[idx] == '\0' || s2[idx] == '\0' || sum)
			return (sum);
		idx++;
	}
}

/* int	sign(int x) */
/* { */
/* 	if (x > 0) */
/* 		return (1); */
/* 	if (x < 0) */
/* 		return (-1); */
/* 	return (0); */
/* } */

/* int	main(void) */
/* { */
/*     char* str1 = "hello"; */
/*     char* str2 = "hello"; */
/*     int res1 = sign(ft_strcmp(str1, str2)); */
/*     int res2 = sign(strcmp(str1, str2)); */
/*     if (res1 != res2) printf("Fail: ft: %d --- strcmp: %d", res1, res2); */

/*     str1 = ""; */
/*     str2 = "hello"; */
/*     res1 = sign(ft_strcmp(str1, str2)); */
/*     res2 = sign(strcmp(str1, str2)); */
/*     if (res1 != res2) printf("Fail: ft: %d --- strcmp: %d", res1, res2); */

/*     str1 = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"; */
/*     str2 = "bbbbbbbbbbbbbbbbbbbb"; */
/*     res1 = sign(ft_strcmp(str1, str2)); */
/*     res2 = sign(strcmp(str1, str2)); */
/*     if (res1 != res2) printf("Fail: ft: %d --- strcmp: %d", res1, res2); */

/*     str1 = "0p2kasdfh"; */
/*     str2 = "al;sdkjfo w8uasdl;fj asufasudfjl3ljjljfas9u3j"; */
/*     res1 = sign(ft_strcmp(str1, str2)); */
/*     res2 = sign(strcmp(str1, str2)); */
/*     if (res1 != res2) printf("Fail: ft: %d --- strcmp: %d", res1, res2); */

/*     str1 = "ABAa"; */
/*     str2 = "ABCa"; */
/*     res1 = sign(ft_strcmp(str1, str2)); */
/*     res2 = sign(strcmp(str1, str2)); */
/*     if (res1 != res2) printf("Fail: ft: %d --- strcmp: %d", res1, res2); */

/*     str1 = "ABC"; */
/*     str2 = "ABC"; */
/*     res1 = sign(ft_strcmp(str1, str2)); */
/*     res2 = sign(strcmp(str1, str2)); */
/*     if (res1 != res2) printf("Fail: ft: %d --- strcmp: %d", res1, res2); */

/*     str1 = "ABC"; */
/*     str2 = "AB"; */
/*     res1 = sign(ft_strcmp(str1, str2)); */
/*     res2 = sign(strcmp(str1, str2)); */
/*     if (res1 != res2) printf("Fail: ft: %d --- strcmp: %d", res1, res2); */

/*     str1 = "ABA"; */
/*     str2 = "ABZ"; */
/*     res1 = sign(ft_strcmp(str1, str2)); */
/*     res2 = sign(strcmp(str1, str2)); */
/*     if (res1 != res2) printf("Fail: ft: %d --- strcmp: %d", res1, res2); */

/*     str1 = "ABJ"; */
/*     str2 = "ABC"; */
/*     res1 = sign(ft_strcmp(str1, str2)); */
/*     res2 = sign(strcmp(str1, str2)); */
/*     if (res1 != res2) printf("Fail: ft: %d --- strcmp: %d", res1, res2); */
/* 	return (0); */
/* } */

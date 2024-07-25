/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfreyer <kfreyer@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 12:26:00 by kfreyer           #+#    #+#             */
/*   Updated: 2024/07/10 09:43:14 by kfreyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <bsd/string.h> */
/* #include <limits.h> */
/* #include <stdio.h> */
/* #include <string.h> */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count++])
		;
	return (--count);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	char			*d;
	char			*s;
	unsigned int	dlen;
	unsigned int	n;

	n = size;
	d = dest;
	while (*d && n-- != 0)
		d++;
	dlen = d - dest;
	n = size - dlen;
	if (n == 0)
		return (ft_strlen(src) + dlen);
	s = src;
	while (*s)
	{
		if (n != 1)
		{
			*d++ = *s;
			n--;
		}
		s++;
	}
	*d = '\0';
	return (dlen + (s - src));
}

/* int	main(void) */
/* { */
/* 	char			dest1[] = ""; */
/* 	char			dest2[] = ""; */
/* 	char			*src; */
/* 	unsigned int	size; */
/* 	unsigned int	ret1; */
/* 	unsigned int	ret2; */
/* 	char			dest3[] = "Prefix"; */
/* 	char			dest4[] = "Prefix"; */
/* 	char			*src2; */
/* 	char			dest5[] = "Prefix"; */
/* 	char			dest6[] = "Prefix"; */
/* 	char			*src3; */
/* 	char			dest7[] = "Prefix"; */
/* 	char			dest8[] = "Prefix"; */
/* 	char			*src4; */
/* 	char			dest9[] = "Prefix"; */
/* 	char			dest10[] = "Prefix"; */
/* 	char			*src5; */
/* 	char			dest11[20] = "Prefix"; */
/* 	char			dest12[20] = "Prefix"; */
/* 	char			*src6; */
/* 	char			dest13[20] = "Prefix"; */
/* 	char			dest14[20] = "Prefix"; */
/* 	char			*src7; */
/* 	char			dest15[20] = "Prefix"; */
/* 	char			dest16[20] = "Prefix"; */
/* 	char			*src8; */
/* 	char			dest17[20] = "Prefix"; */
/* 	char			dest18[20] = "Prefix"; */
/* 	char			*src9; */
/* 	char			dest19[100] = "asdl;fjao8uula;ksdjf"; */
/* 	char			dest20[100] = "asdl;fjao8uula;ksdjf"; */
/* 	char			*src10; */
/* 	char			dest21[100] = "12345"; */
/* 	char			dest22[100] = "12345"; */
/* 	char			*src11; */
/* 	char			dest23[100] = "12345asdf"; */
/* 	char			dest24[100] = "12345asdf"; */
/* 	char			*src12; */

/* 	/\* 0 size; dest1, dest2 zero strings, src zero string *\/ */
/* 	src = ""; */
/* 	size = 0; */
/* 	ret1 = ft_strlcat(dest1, src, size); */
/* 	ret2 = strlcat(dest2, src, size); */
/* 	if (strcmp(dest1, dest2)) */
/* 		printf("Failure: ft: %s --- strcat: %s \n", dest1, dest2); */
/* 	if (ret1 != ret2) */
/* 		printf("Failure: 1 ft: %s --- strcat: %s \n", dest1, dest2); */
/* 	/\* size = 0; dest1 > src,  src = 0 *\/ */
/* 	src2 = ""; */
/* 	size = 0; */
/* 	ret1 = ft_strlcat(dest3, src2, size); */
/* 	ret2 = strlcat(dest4, src2, size); /\* expect 0 *\/ */
/* 	if (strcmp(dest3, dest4)) */
/* 		printf("Failure StrCmp: ft: %s --- strlcat: %s \n", dest3, dest4); */
/* 	if (ret1 != ret2) */
/* 		printf("Failure: 3 ReturnValue: ft:
 		%d --- strlcat: %d \n", ret1, ret2); */
/* 	/\* dest > size  > 0; dest  > src,  src = 0 *\/ */
/* 	src3 = ""; */
/* 	size = 3; */
/* 	ret1 = ft_strlcat(dest5, src3, size); */
/* 	ret2 = strlcat(dest6, src3, size); /\* expect 3 *\/ */
/* 	if (strcmp(dest5, dest6)) */
/* 		printf("Failure StrCmp: ft: %s --- strlcat: %s \n", dest5, dest6); */
/* 	if (ret1 != ret2) */
/* 		printf("Failure 5 ReturnValue: ft:
 		%d --- strlcat: %d \n", ret1, ret2); */
/* 	/\* len_dest = size (with NUL-BYTE)  > 0; src = 0 *\/ */
/* 	src4 = ""; */
/* 	size = 7; */
/* 	ret1 = ft_strlcat(dest7, src4, size); */
/* 	ret2 = strlcat(dest8, src4, size); /\* expect 6 *\/ */
/* 	if (strcmp(dest7, dest8)) */
/* 		printf("Failure StrCmp: ft:
 		%s --- strlcat: %s \n", dest7, dest8); */
/* 	if (ret1 != ret2) */
/* 		printf("Failure, 7 ReturnValue: ft:
 		%d --- strlcat: %d \n", ret1, ret2); */
/* 	/\* size (with NUL-BYTE) > len_dest (with NUL-BYTE)  > 0; src = 0 *\/ */
/* 	src5 = ""; */
/* 	size = 10; */
/* 	ret1 = ft_strlcat(dest9, src5, size); */
/* 	ret2 = strlcat(dest10, src5, size); /\* expect 6 *\/ */
/* 	if (strcmp(dest9, dest10)) */
/* 		printf("Failure StrCmp: ft:
 		%s --- strlcat: %s \n", dest9, dest10); */
/* 	if (ret1 != ret2) */
/* 		printf("Failure, 9 ReturnValue: ft:
 		%d --- strlcat: %d \n", ret1, ret2); */
/* 	/\* size (with NUL-BYTE) > len_dest + len_src + 1; len_src != 0 *\/ */
/* 	/\* dest11 buffer must be big enough to hold the result, */
/* 		otherwise it will overwrite dest12 *\/ */
/* 	src6 = "Suf"; */
/* 	size = 12; */
/* 	ret1 = ft_strlcat(dest11, src6, size); */
/* 	ret2 = strlcat(dest12, src6, size); /\* expect 9 *\/ */
/* 	if (strcmp(dest11, dest12)) */
/* 		printf("Failure StrCmp: ft: %s --- strlcat: %s \n", dest11, dest12); */
/* 	if (ret1 != ret2) */
/* 		printf("Failure, 11 ReturnValue: ft: %d --- strlcat: %d \n", ret1, */
/* 			ret2); */
/* 	/\* size (with NUL-BYTE) >= len_dest + len_src + 1; len_src != 0 *\/ */
/* 	src7 = "Suf"; */
/* 	size = 10; */
/* 	ret1 = ft_strlcat(dest13, src7, size); */
/* 	ret2 = strlcat(dest14, src7, size); /\* expect 9 *\/ */
/* 	if (strcmp(dest13, dest14)) */
/* 		printf("Failure StrCmp: ft: %s --- strlcat: %s \n", dest13, dest14); */
/* 	if (ret1 != ret2) */
/* 		printf("Failure, 13, ReturnValue: ft: %d --- strlcat: %d \n", ret1, */
/* 			ret2); */
/* 	/\* size (with NUL-BYTE) < len_dest + len_src + 1; len_src != 0 *\/ */
/* 	src8 = "Suf"; */
/* 	size = 9; */
/* 	ret1 = ft_strlcat(dest15, src8, size); */
/* 	ret2 = strlcat(dest16, src8, size); /\* expect 9 *\/ */
/* 	if (strcmp(dest15, dest16)) */
/* 		printf("Failure StrCmp: ft: %s --- strlcat: %s \n", dest15, dest16); */
/* 	if (ret1 != ret2) */
/* 		printf("Failure, 15,  ReturnValue: ft: %d --- strlcat: %d \n", ret1, */
/* 			ret2); */
/* 	/\* size (with NUL-BYTE) < len_dest + len_src + 1; len_src != 0 *\/ */
/* 	src9 = "Suf"; */
/* 	size = 8; */
/* 	ret1 = ft_strlcat(dest17, src9, size); */
/* 	ret2 = strlcat(dest18, src9, size); */
/* 	if (strcmp(dest17, dest18)) */
/* 		printf("Failure StrCmp: ft: %s --- strlcat: %s \n", dest17, dest18); */
/* 	if (ret1 != ret2) */
/* 		printf("Failure, 17,  ReturnValue: ft: %d --- strlcat: %d \n", ret1, */
/* 			ret2); */
/* 	/\* size (with NUL-BYTE) < len_dest + len_src + 1; len_src != 0 *\/ */
/* 	src10 = "0q29urakjsnf9 8q4uruasdf8"; */
/* 	size = 90; */
/* 	ret1 = ft_strlcat(dest19, src10, size); */
/* 	ret2 = strlcat(dest20, src10, size); */
/* 	if (strcmp(dest19, dest20)) */
/* 		printf("Failure StrCmp: ft: %s --- strlcat: %s \n", dest19, dest20); */
/* 	if (ret1 != ret2) */
/* 		printf("Failure, 19,  ReturnValue: ft: %d --- strlcat: %d \n", ret1, */
/* 			ret2); */
/* 	/\* size (with NUL-BYTE) < len_dest + len_src + 1; len_src != 0 *\/ */
/* 	src11 = "12345678"; */
/* 	size = 0; */
/* 	ret1 = ft_strlcat(dest21, src11, size); */
/* 	ret2 = strlcat(dest22, src11, size); */
/* 	if (strcmp(dest21, dest22)) */
/* 		printf("Failure StrCmp: ft: %s --- strlcat: %s \n", dest21, dest22); */
/* 	if (ret1 != ret2) */
/* 		printf("Failure, 21,  ReturnValue: ft: %d --- strlcat: %d \n", ret1, */
/* 			ret2); */
/* 	src12 = "1"; */
/* 	size = 0; */
/* 	ret1 = ft_strlcat(dest23, src12, size); */
/* 	ret2 = strlcat(dest24, src12, size); */
/* 	if (strcmp(dest23, dest24)) */
/* 		printf("Failure StrCmp: ft: %s --- strlcat: %s \n", dest23, dest24); */
/* 	if (ret1 != ret2) */
/* 		printf("Failure, 23,  ReturnValue: ft: %d --- strlcat: %d \n", ret1, */
/* 			ret2); */
/* 	return (0); */
/* } */

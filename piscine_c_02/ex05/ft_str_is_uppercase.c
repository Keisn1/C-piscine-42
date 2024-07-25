/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfreyer <kfreyer@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 10:35:32 by kfreyer           #+#    #+#             */
/*   Updated: 2024/07/07 10:52:10 by kfreyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

int	ft_str_is_uppercase(char *str);

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	c;

	i = 0;
	c = str[i];
	while (c != '\0')
	{
		if (!(c >= 'A' && c <= 'Z'))
			return (0);
		c = str[++i];
	}
	return (1);
}

/* int main() { */
/*     char* test1 = ""; */
/*     int res = ft_str_is_lowercase(test1); */
/*     if (res != 1) printf("Failure: %s returned %d\n", test1, res); */

/*     test1 = "asdf"; */
/*     res = ft_str_is_lowercase(test1); */
/*     if (res != 1) printf("Failure: %s returned %d\n", test1, res); */

/*     test1 = "Aasdf"; */
/*     res = ft_str_is_lowercase(test1); */
/*     if (res != 0) printf("Failure: %s returned %d\n", test1, res); */

/*     test1 = "asdf asdf"; */
/*     res = ft_str_is_lowercase(test1); */
/*     if (res != 0) printf("Failure: %s returned %d\n", test1, res); */
/* } */

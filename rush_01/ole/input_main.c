/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_main.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaker <ohaker@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 18:35:35 by ohaker            #+#    #+#             */
/*   Updated: 2024/07/14 14:54:16 by ohaker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	if (i != 31)
		write(1, "Error, string is not apropiate length.\n", 39);
	return (0);
}

int	main(int argc, char *argv[])
{
	char	*str;
	int		idx;
	int		views[4][4];

	idx = 0;
	str = argv[1];
	if (argc != 2)
	{
		write(1, "Error, not correct argument amount.\n", 36);
		return (0);
	}
	if (!check_strlen(str))
		return (1);
	while (str[idx] != '\0')
	{
		if (str[idx] == ' ')
			idx++;
		if (str[idx] < '0' || str[idx] > '9')
		{
			write(1, "Error, string is not only numeric.\n", 35);
			return (0);
		}
		views[idx / 4][idx % 4] = str[idx] - '0';	//calc row and col
		idx++;
	}
}

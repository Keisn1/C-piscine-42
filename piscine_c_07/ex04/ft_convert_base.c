/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfreyer <kfreyer@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 08:29:53 by kfreyer           #+#    #+#             */
/*   Updated: 2024/07/17 11:58:55 by kfreyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */
#include <stdlib.h>

/* example (321)_{0123} into (57)_{10} or (dcb)_{abcd}
   into (fh)_{abcdefghij}  */
/* INT_MIN <= nbr <= INT_MAX */
char	*ft_convert_base(char *nbr, char *base_from, char *base_to);
int		check_base(char *base);
void	ft_swap(char *a, char *b);
void	ft_rev_char_tab(char *tab, int size);
int		abs(int n);

/* gets the index of character c inside base base */
int	get_base_index_of_char(char c, char *base)
{
	int	idx;

	idx = 0;
	while (base[idx])
	{
		if (c == base[idx])
			return (idx);
		idx++;
	}
	return (-1);
}

/* checks need to be performed outside this function */
int	atoi_base(char *nbr, char *base_from, int size_from)
{
	int	res;
	int	coeff;
	int	sign;

	while ((*nbr >= '\t' && *nbr <= '\r') || *nbr == ' ')
		nbr++;
	sign = 1;
	while (*nbr == '-' || *nbr == '+')
	{
		if (*nbr == '-')
			sign *= -1;
		nbr++;
	}
	res = 0;
	coeff = get_base_index_of_char(*nbr, base_from);
	while (coeff >= 0)
	{
		res *= size_from;
		res += coeff;
		coeff = get_base_index_of_char(*(++nbr), base_from);
	}
	return (sign * res);
}

int	fill_remainders(char *remainders, int nbr, char *base_to, int size_to)
{
	int	idx;

	idx = 0;
	remainders[idx++] = base_to[abs(nbr % size_to)];
	nbr = abs(nbr / size_to);
	if (nbr == 0)
	{
		return (idx);
	}
	while (nbr >= size_to)
	{
		remainders[idx++] = base_to[nbr % size_to];
		nbr = nbr / size_to;
	}
	remainders[idx++] = base_to[nbr];
	return (idx);
}

/* writes nbr into base base_to with size size_to */
char	*itoa_base(int nbr, char *base_to, int size_to)
{
	char	*remainders_o;
	char	*remainders;
	int		idx;

	remainders_o = (char *)malloc(34 * sizeof(char));
	if (remainders_o == (void *)0)
		return (remainders_o);
	*remainders_o = '\0';
	remainders = remainders_o;
	if (nbr < 0)
	{
		remainders_o[0] = '-';
		remainders = remainders_o + 1;
	}
	idx = fill_remainders(remainders, nbr, base_to, size_to);
	ft_rev_char_tab(remainders, idx);
	remainders[idx] = '\0';
	return (remainders_o);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	size_from;
	int	size_to;
	int	temp;

	size_from = check_base(base_from);
	size_to = check_base(base_to);
	if (!size_from || !size_to)
		return ((void *)0);
	temp = atoi_base(nbr, base_from, size_from);
	return (itoa_base(temp, base_to, size_to));
}

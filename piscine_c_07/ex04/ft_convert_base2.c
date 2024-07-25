/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfreyer <kfreyer@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 08:17:38 by kfreyer           #+#    #+#             */
/*   Updated: 2024/07/17 11:05:12 by kfreyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	no_doubles(char *base)
{
	char	*b;
	char	*c;

	b = base;
	c = base;
	while (*b)
	{
		c = b;
		while (*c)
		{
			if (*(++c) == *b)
			{
				return (0);
			}
		}
		b++;
	}
	return (1);
}

/* return 0 on error or base too small and size of base on success */
int	check_base(char *base)
{
	char	*b;

	if (!no_doubles(base))
		return (0);
	b = base;
	while (*b)
	{
		if (*b == '+' || *b == '-' || !(*b >= '!' && *b <= '~'))
			return (-1);
		b++;
	}
	if ((b - base) <= 1)
		return (0);
	return (b - base);
}

void	ft_swap(char *a, char *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_rev_char_tab(char *tab, int size)
{
	int	count;

	if (size <= 0)
		return ;
	count = 0;
	while (count < size / 2)
	{
		ft_swap(tab + count, tab + (size - 1) - count);
		count++;
	}
}

int	abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

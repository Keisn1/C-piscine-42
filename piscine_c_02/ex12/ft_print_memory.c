/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfreyer <kfreyer@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 11:45:47 by kfreyer           #+#    #+#             */
/*   Updated: 2024/07/24 21:38:35 by kfreyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */
#include <unistd.h>

void	print_enough_whitespaces(int remaining)
{
	int	count;

	if (remaining == 0)
		return ;
	count = 0;
	while (count < remaining / 2)
	{
		write(1, "     ", 5);
		count++;
	}
}

void	ft_putnstr_max16(char *str)
{
	char			*s;
	unsigned int	count;

	s = str;
	count = 0;
	while (*str && count < 16)
	{
		if (*s >= ' ' && *s <= '~')
		{
			write(1, s, 1);
			s++;
			count++;
			continue ;
		}
		s++;
		count++;
	}
}

void	ft_putnhex_max16(char *str)
{
	char			*s;
	char			*hex;
	unsigned int	count;

	hex = "0123456789abcdef";
	s = str;
	count = 0;
	while (*s && count < 16)
	{
		write(STDOUT_FILENO, hex + ((unsigned char)*s / 16), 1);
		write(STDOUT_FILENO, hex + ((unsigned char)*s % 16), 1);
		if ((s - str) % 2)
			write(1, " ", 1);
		s++;
		count++;
	}
	print_enough_whitespaces(16 - count);
}

void	ft_put_address(char *addr)
{
	char	*hex;
	long	nbr;
	int		idx;
	char	arr[16];

	hex = "0123456789abcdef";
	idx = 0;
	while (idx < 16)
	{
		arr[idx++] = '0';
	}
	idx = 15;
	nbr = (long)addr;
	while (nbr > 16)
	{
		arr[idx--] = hex[nbr % 16];
		nbr = nbr / 16;
	}
	ft_putnstr_max16(arr);
	write(1, ": ", 2);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	int		remaining;
	void	*addr_o;

	addr_o = addr;
	remaining = size;
	while (remaining > 0)
	{
		ft_put_address(addr);
		ft_putnhex_max16(addr);
		ft_putnstr_max16(addr);
		write(1, "\n", 1);
		addr += 16;
		remaining -= 16;
	}
	return (addr_o);
}

/* int	main(void) */
/* { */
/* 	char	*text; */

/* 	text = "Kendrick Lamsasas Eltern zogen vor seiner Geburt nach Compton,
		da sein Vater Kenny Duckworth in Chicago seiner Vergangenheit bei
		der berüchtigten Streetgang Gangster
		Disciples entfliehen wollte. Seine Mutter fand zwar
		einen Job bei McDonala asdlkfjd"; */
/* 	ft_print_memory(text, ft_strlen(text)); */
/* 	return (0); */
/* } */

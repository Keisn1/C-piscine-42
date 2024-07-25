/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfreyer <kfreyer@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 08:55:56 by kfreyer           #+#    #+#             */
/*   Updated: 2024/07/25 10:04:38 by kfreyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int	main(int argc, char *argv[])
{
	int		val1;
	char	*op;
	int		val2;
	int		(*function_ptrs[4])(int, int);

	function_ptrs[0] = add;
	function_ptrs[1] = substract;
	function_ptrs[2] = divide;
	function_ptrs[3] = modulo;
	if (argc != 4)
		return (0);
	val1 = ft_atoi(argv[1]);
	op = argv[2];
	val2 = ft_atoi(argv[3]);
	return (calc(val1, val2, op, function_ptrs));
}

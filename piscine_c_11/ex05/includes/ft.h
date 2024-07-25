/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfreyer <kfreyer@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 09:54:33 by kfreyer           #+#    #+#             */
/*   Updated: 2024/07/25 10:07:55 by kfreyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>

int		ft_atoi(char *str);
int		ft_strcmp(char *s1, char *s2);
int		str_equal(char *str1, char *str2);
void	ft_putnbr(int nb);
int		calc(int val1, int val2, char *op, int (*function_ptrs[4])(int, int));
void	init_function_ptrs(int (*function_ptrs[4])(int, int));
int		add(int x, int y);
int		substract(int x, int y);
int		divide(int x, int y);
int		modulo(int x, int y);

#endif // FT_H

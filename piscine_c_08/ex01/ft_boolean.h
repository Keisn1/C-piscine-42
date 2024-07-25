/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfreyer <kfreyer@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 09:50:34 by kfreyer           #+#    #+#             */
/*   Updated: 2024/07/18 13:44:48 by kfreyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an odd number of arguments.\n"
# define EVEN(x) ((x % 2) == 0)

typedef int	t_bool;
# define TRUE 1
# define FALSE 0
# define SUCCESS 0

void		ft_putstr(char *str);
t_bool		ft_is_even(int nbr);

#endif // FT_BOOLEAN

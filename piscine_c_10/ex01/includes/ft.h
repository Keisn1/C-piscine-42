/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfreyer <kfreyer@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 09:25:41 by kfreyer           #+#    #+#             */
/*   Updated: 2024/07/24 18:59:23 by kfreyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <errno.h>
# include <fcntl.h>
# include <string.h>
# include <unistd.h>

# define MAX_SIZE 15360 // 30 KB is 30 * 1024 bytes

void	ft_putstr(char *str, int fd);
int		ft_strcmp(char *s1, char *s2);

#endif // FT_H

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaker <ohaker@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 18:35:35 by ohaker            #+#    #+#             */
/*   Updated: 2024/07/14 16:53:29 by kfreyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		find_solution(int idx, int views[4][4], int arr[4][4]);
int		check_argc(int argc);
int		check_strlen(char *str);
int		check_str_format(char *str);
void	init_views(int views[4][4], char *str);
void	init_arr(int arr[4][4]);
void	print_error(void);
void	print_array(int arr[4][4]);

int	main(int argc, char *argv[])
{
	char	*str;
	int		views[4][4];
	int		arr[4][4];

	if (!check_argc(argc))
		return (1);
	str = argv[1];
	if (!check_strlen(str))
		return (1);
	if (!check_str_format(str))
		return (1);
	init_views(views, str);
	init_arr(arr);
	if (find_solution(0, views, arr))
		print_array(arr);
	else
		print_error();
}

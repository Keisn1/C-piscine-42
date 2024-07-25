/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfreyer <kfreyer@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 14:44:44 by kfreyer           #+#    #+#             */
/*   Updated: 2024/07/19 22:41:23 by kfreyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ABS_H
# define FT_ABS_H

/* # define ABS(Value)                                 \ */
/* 	({                                             \ */
/* 		typeof(Value) _Value = (Value);            \ */
/* 		if (_Value < 0)                            \ */
/* 		{                                          \ */
/* 			_Value = (~((unsigned int)_Value) + 1); \ */
/* 		}                                          \ */
/* 		_Value;                                    \ */
/* 	}) */

/* # define ABS(Value) (Value >> (8 * sizeof(int) - 1) & 1) */
/* Value ^ (Value >> 8) - ( Value >> 8 )  */
/* # define ABS(Value) (((Value) ^ ((Value) >>
   (sizeof(int) * 8 -1))) - ((Value) >> (sizeof(int) * 8 -1))) */
# define ABS(Value) (((Value) ^ ((Value) >> 31)) - ((Value) >> 31))
#endif // FT_ABS_H

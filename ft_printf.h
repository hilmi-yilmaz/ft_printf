/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: hyilmaz <hyilmaz@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/18 14:14:29 by hyilmaz       #+#    #+#                 */
/*   Updated: 2020/12/18 14:39:56 by hyilmaz       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

typedef struct		s_info
{
	int				dash;
	int				zero;
	int				star;
	int				prec;
	int				width;

}					t_info;

#endif

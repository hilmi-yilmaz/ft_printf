/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: hyilmaz <hyilmaz@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/18 14:14:29 by hyilmaz       #+#    #+#                 */
/*   Updated: 2020/12/19 19:05:55 by hyilmaz       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "libft/libft.h"

typedef struct		s_info
{
	int				dash;
	int				zero;
	int				star;
	int				prec;
	int				width;
	char			spec;

}					t_info;

int					ft_printf(const char *fmt, ...);
int					set_info(const char *str_conv, t_info *info);
int					set_flags(const char *str_conv, t_info *info);
int					set_width(const char *str_conv, t_info *info);
int					set_prec(const char *str_conv, t_info *info);
int					set_spec(const char *str_conv, t_info *info);
void				exceptions(t_info *info);

#endif

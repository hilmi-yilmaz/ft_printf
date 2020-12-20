/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: hyilmaz <hyilmaz@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/18 14:14:29 by hyilmaz       #+#    #+#                 */
/*   Updated: 2020/12/20 18:31:46 by hyilmaz       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "libft/libft.h"
# include <stdarg.h>

typedef struct		s_info
{
	int				dash;
	int				zero;
	int				prec;
	int				width;
	int				err;
	char			spec;

}					t_info;

int					ft_printf(const char *fmt, ...);
int					set_info(const char *str_conv, t_info *info, va_list ap);
int					set_flags(const char *str_conv, t_info *info);
int					set_width(const char *str_conv, t_info *info, va_list ap);
int					set_prec(const char *str_conv, t_info *info, va_list ap);
int					set_spec(const char *str_conv, t_info *info);
void				exceptions(t_info *info);

#endif

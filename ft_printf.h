/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: hyilmaz <hyilmaz@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/18 14:14:29 by hyilmaz       #+#    #+#                 */
/*   Updated: 2020/12/24 22:13:30 by hyilmaz       ########   odam.nl         */
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

//conversions
void				conversion(va_list ap, t_info *info);
void				u_convert(va_list ap, t_info *info);
void				d_convert(va_list ap, t_info *info);

//d conversion
char				*create_array(int nb, t_info *info, int len_nb);
void				fill_zeros(char *str, t_info *info, int nb);
void				fill_nb(char *str, char *str_nb, t_info *info, int nb);

//c conversion
void				c_convert(va_list ap, t_info *info);


// utils
int					ft_nblen(int nb);
int					max_number(int a, int b);
int					ft_abs(int a);
int					ft_strchr1(char *s, int c);
int					ft_cntchr(char *str, int c);
#endif

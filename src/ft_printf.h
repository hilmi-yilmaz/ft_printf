/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: hyilmaz <hyilmaz@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/18 14:14:29 by hyilmaz       #+#    #+#                 */
/*   Updated: 2021/01/06 15:07:36 by hyilmaz       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "../libft/libft.h"
# include <stdarg.h>

/*
** This struct holds information about the conversion given as input.
*/

typedef struct		s_info
{
	int				dash;
	int				zero;
	int				prec;
	int				width;
	int				err;
	int				return_val;
	char			spec;

}					t_info;

/*
** The ft_printf function itself.
*/

int					ft_printf(const char *fmt, ...);

/*
** These functions parse the information in the specifier and saves it in the
** above struct. The function names itself are explanatory.
** The set_excep function handles some exceptions.
*/

int					set_info(const char *str_conv, t_info *info, va_list ap);
int					set_flags(const char *str_conv, t_info *info);
int					set_width(const char *str_conv, t_info *info, va_list ap);
int					set_prec(const char *str_conv, t_info *info, va_list ap);
int					set_spec(const char *str_conv, t_info *info);
void				set_excep(t_info *info);

/*
** The convert function calls convert_{d,u,x,s,c,p} to print the values.
*/

void				convert(va_list ap, t_info *info);
void				convert_d(va_list ap, t_info *info);
void				convert_u(va_list ap, t_info *info);
void				convert_x(va_list ap, t_info *info);
void				convert_c(va_list ap, t_info *info);
void				convert_s(va_list ap, t_info *info);
void				convert_p(va_list ap, t_info *info);

/*
** These functions are utils which are used by the {d,u,x}_convert functions.
*/

char				*fill_spaces(long nb, t_info *info, int len_nb);
void				fill_zeros(char *str, t_info *info, long nb, int base);
void				fill_number(char *str, char *str_nb, t_info *info, long nb);
void				fill_minus(char *str, t_info *info, long nb);

#endif

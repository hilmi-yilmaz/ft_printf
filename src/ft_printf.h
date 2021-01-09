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
** The ft_printf function itself and its subfunctions.
*/

int					ft_printf(const char *fmt, ...);

/*
** These functions parse the information in the specifier and saves it in a
** struct.
** The exceptions function handles some exceptions.
*/

int					set_info(const char *str_conv, t_info *info, va_list ap);
int					set_flags(const char *str_conv, t_info *info);
int					set_width(const char *str_conv, t_info *info, va_list ap);
int					set_prec(const char *str_conv, t_info *info, va_list ap);
int					set_spec(const char *str_conv, t_info *info);
void				set_excep(t_info *info);

/*
** The conversion function calls {d,i,u,x,X,s,c,p}_convert to print the values.
*/

void				conversion(va_list ap, t_info *info);

/*
** These functions handle the {d, i}-conversion.
*/

void				d_convert(va_list ap, t_info *info);
char				*create_array(long nb, t_info *info, int len_nb);
void				fill_zeros(char *str, t_info *info, long nb, int base);
void				fill_nb(char *str, char *str_nb, t_info *info, long nb);
void				put_minus(char *str, t_info *info, long nb);

/*
** These functions handle the u conversion.
*/

void				u_convert(va_list ap, t_info *info);

/*
** These functions handle the x-conversion.
*/

void				x_convert(va_list ap, t_info *info);
//void				put_x(char *str_result, char *str_nb);

/*
** These functions handle the c-conversion.
*/

void				c_convert(va_list ap, t_info *info);
//char				*create_array_c(t_info *info);
//void				exception_zero(unsigned char c, t_info *info);

/*
** These functions handle the s-conversion
*/

void				s_convert(va_list ap, t_info *info);
//char				*create_array_s(const char *str, t_info *info);
//void				fill_str(char *str_malloc, const char *str, t_info *info);

/*
** These functions handle the p-conversion.
*/

void				p_convert(va_list ap, t_info *info);
//char				*create_array_p(char *str_nb, t_info *info);
//void				fill_addr(char *str, char *str_nb, t_info *info);

#endif
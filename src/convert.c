/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   conversion.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: hyilmaz <hyilmaz@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/22 09:31:17 by hyilmaz       #+#    #+#                 */
/*   Updated: 2020/12/27 13:20:53 by hyilmaz       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
** The conversion function chooses which conversion to perform.
** Arguments:
**		(va_list)	ap: the argument list which contains the unnamed arguments.
**		(t_info *)	info: pointer to struct which contains the conversion
**					information.
**
** Returns:
**		(void)		None.
*/

void	convert(va_list ap, t_info *info)
{
	if (info->spec == 'd' || info->spec == 'i')
		convert_d(ap, info);
	else if (info->spec == 'u')
		convert_u(ap, info);
	else if (info->spec == 'x' || info->spec == 'X')
		convert_x(ap, info);
	else if (info->spec == 'c' || info->spec == '%')
		convert_c(ap, info);
	else if (info->spec == 's')
		convert_s(ap, info);
	else if (info->spec == 'p')
		convert_p(ap, info);
	else if (info->spec == '\0')
		return ;
	else
		info->err = 1;
}

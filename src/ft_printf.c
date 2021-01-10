/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: hyilmaz <hyilmaz@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/18 14:35:20 by hyilmaz       #+#    #+#                 */
/*   Updated: 2020/12/27 15:42:04 by hyilmaz       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_printf.h"

/*
** The ft_iterate function is a helper function for ft_printf.
** It loops the string 'fmt' and handles the conversion and prints the values.
**
** Arguments:
**		(const char *)	fmt: the string with the conversion.
**		(va_list)		ap: the argument list which contains the unnamed
**						arguments.
**		(t_info *)		info: pointer to struct which contains the conversion
**						information.
**
** Returns:
**		(int)			count: 	amount of printed characters.
**								-1 in case of error.
*/

static int		ft_iterate(const char *fmt, va_list ap, t_info *info)
{
	int		i;
	int		step;
	int		count;

	i = 0;
	count = 0;
	while (*(fmt + i) != '\0')
	{
		if (*(fmt + i) == '%')
		{
			step = set_info(fmt + i + 1, info, ap);
			if (step == -1)
				return (-1);
			i += (step + 1);
			convert(ap, info);
			if (info->err == 1)
				return (-1);
			count += info->return_val;
			continue ;
		}
		write(1, fmt + i, 1);
		count++;
		i++;
	}
	return (count);
}

/*
** The ft_printf function mimics the C printf function.
** It can handle the '0' and '-' flags.
** It also handles field width and precision.
** The above two can also be given as argument using '*'.
** The following specifiers are implemented: d, i, u, x, X, s, c, p.
**
** Arguments:
**		(const char *)	fmt: the string with the conversion.
**		(any type)		unnamed parameters: variadic arguments.
**
** Returns:
**		(int)			return_val: amount of printed characters.
**									-1 in case of error.
*/

int				ft_printf(const char *fmt, ...)
{
	va_list		ap;
	t_info		info;
	int			return_val;

	if (fmt == NULL)
		return (-1);
	va_start(ap, fmt);
	return_val = ft_iterate(fmt, ap, &info);
	va_end(ap);
	return (return_val);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: hyilmaz <hyilmaz@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/18 14:35:20 by hyilmaz       #+#    #+#                 */
/*   Updated: 2020/12/26 22:39:07 by hyilmaz       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_printf.h"

int		ft_printf(const char *fmt, ...)
{
	va_list	ap;
	int		i;
	int		return_val;
	t_info	info;

	va_start(ap, fmt);
	i = 0;
	while (*(fmt + i) != '\0')
	{
		if (*(fmt + i) == '%')
		{
			i += set_info(fmt + i + 1, &info, ap);
			conversion(ap, &info);
			if (info.err == 1)
				return (-1);
		}
		else
		{
			return_val = write(1, fmt + i, 1);
			if (return_val == -1)
				return (-1);
		}
		i++;
	}
	va_end(ap);
	return (0);
}

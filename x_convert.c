/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   x_convert.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: hyilmaz <hyilmaz@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/25 20:08:17 by hyilmaz       #+#    #+#                 */
/*   Updated: 2020/12/25 20:33:51 by hyilmaz       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>
#include <stdio.h>

void	x_convert(va_list ap, t_info *info)
{
	unsigned int	nb;
	char			*str;

	nb = va_arg(ap, unsigned int);
	str = ft_itoa_hex(nb);
	if (str == NULL)
	{
		info->err = 1;
		return ;
	}
	
	ft_putstr_fd(str, 1);
	free(str);
}

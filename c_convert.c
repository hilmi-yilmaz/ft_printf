/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   c_convert.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: hyilmaz <hyilmaz@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/24 18:36:16 by hyilmaz       #+#    #+#                 */
/*   Updated: 2020/12/24 21:26:52 by hyilmaz       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>

void	c_convert(va_list ap, t_info *info)
{	
	unsigned char	c;
	int				len_str;
	char			*str;
	int				i;

	i = 0;
	c = va_arg(ap, int);
	if (info->width == 0)
		len_str = 1;
	else
		len_str = info->width;
	str = (char *)malloc(sizeof(char) * len_str + 1);
	*(str + len_str) = '\0';
	while (*(str + i) != '\0')
	{
		*(str + i) = ' ';
		i++;
	}
	if (info->dash == 0)
		*(str + len_str - 1) = c;
	else	
		*(str + 0) = c;
	ft_putstr_fd(str, 1);
	free(str);
}

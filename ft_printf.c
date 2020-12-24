/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: hyilmaz <hyilmaz@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/18 14:35:20 by hyilmaz       #+#    #+#                 */
/*   Updated: 2020/12/24 22:13:40 by hyilmaz       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "ft_printf.h"

int		ft_printf(const char *fmt, ...)
{
	/* Declare ap (argument pointer) which will refer to each argument in turn */
	va_list	ap;
	int		i;
	int		return_val;
	t_info	info;

	/* Make ap point to the first argument */
	va_start(ap, fmt);
	i = 0;
	while (*(fmt + i) != '\0')
	{
		//printf("i in loop = %d\n", i);
		if (*(fmt + i) == '%')
		{
			i += set_info(fmt + i + 1, &info, ap);
			conversion(ap, &info);
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
/*
	printf("dash = %d | ", info.dash);
	printf("zero = %d | ", info.zero);
	printf("prec = %d | ", info.prec);
	printf("width = %d | ", info.width);
	printf("spec = %c | ", info.spec);
	printf("err = %d\n", info.err);*/
	return (0);
}

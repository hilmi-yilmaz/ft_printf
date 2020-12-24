/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   set_info.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: hyilmaz <hyilmaz@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/19 10:32:28 by hyilmaz       #+#    #+#                 */
/*   Updated: 2020/12/21 23:11:35 by hyilmaz       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <stdlib.h>

/* This function sets the information for the conversions.
** It start by giving default values. 
** prec = -1 means no precision givin. 

** Returns: (int) the step taken
*/

int		set_info(const char *str_conv, t_info *info, va_list ap)
{
	int	step;

	step = 0;
	info->dash = 0;
	info->zero = 0;
	info->prec = -1;
	info->width = 0;
	info->err = 0;
	info->spec = '\0';
	step += set_flags(str_conv, info);
	step += set_width(str_conv + step, info, ap);
	if (info->err == 1)
		return (-1);
	step += set_prec(str_conv + step, info, ap);
	if (info->err == 1)
		return (-1);
	step += set_spec(str_conv + step, info);
	
	/* Handle exceptions */
	if (info->dash == 1)
		info->zero = 0; 
	if (info->prec != -1)
		info->zero = 0;
	if (info->prec < 0)
		info->prec = 0;
	if (info->width < 0)
	{
		info->width = info->width * -1;
		info->dash = 1;
	}
	return (step);
}

/* 
** This function sets the '-' and '0' flags 
** Returns: (int) the steps taken
*/

int		set_flags(const char *str_conv, t_info *info)
{
	int i;

	i = 0;
	while (*(str_conv + i) == '-' || *(str_conv + i) == '0')
	{
		if (*(str_conv + i) == '-')
			info->dash = 1;
		if (*(str_conv + i) == '0')
			info->zero = 1;
		i++;
	}
	return (i);
}

/* The function sets the field width.
** It allocates memory and creates a string which contains the string
** representation of an integer. After, ft_atoi is used to convert to integer.
**
** Returns: (int) the steps taken.
*/

int		set_width(const char *str_conv, t_info *info, va_list ap)
{
	int i;
	char *width;
	
	i = 0;
	if (*(str_conv + i) == '*')
	{
		info->width = va_arg(ap, int);
		return (1);
	}
	while (ft_isdigit(*(str_conv + i)) > 0)
		i++;
	width = ft_substr(str_conv, 0, i);
	if (width == NULL)
		info->err = 1;
	info->width = ft_atoi(width);
	free(width);
	return (i);
}

/*
** This function sets the precision. 
** If the precision is gives only as a dot, the precision is zero.
**
** Returns: (int) the steps taken.
*/

int		set_prec(const char *str_conv, t_info *info, va_list ap)
{
	int i;
	int	j;
	char *prec;

	i = 0;
	j = 0;
	if (*(str_conv + j) == '.')
		j++;
	else
		return (0);
	if (*(str_conv + i + j) == '*')
	{
		info->prec = va_arg(ap, int);
		return (2);
	}
	while (ft_isdigit(*(str_conv + j + i)) > 0)
		i++;
	prec = ft_substr(str_conv + j, 0, i);
	if (prec == NULL)
		info->err = 1;
	info->prec = ft_atoi(prec);
	free(prec);
	return (i + j);
}

/* This function sets the conversion specifier.
**
** Returns: (int) 1, because it expects only 1 specifier.
*/

int		set_spec(const char *str_conv, t_info *info)
{
	info->spec = *(str_conv + 0);
	return (1);
}

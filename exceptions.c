/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   exceptions.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: hyilmaz <hyilmaz@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/25 11:19:08 by hyilmaz       #+#    #+#                 */
/*   Updated: 2020/12/26 22:09:47 by hyilmaz       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	exceptions(t_info *info)
{
	if (info->dash == 1)
		info->zero = 0; 
	if (info->prec != -1)
		info->zero = 0;
	//The below conditional can maybe be removed
	if (info->width < 0)
	{
		info->width = info->width * -1;
		info->dash = 1;
	}
}

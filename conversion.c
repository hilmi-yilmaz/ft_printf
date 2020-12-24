/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   conversion.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: hyilmaz <hyilmaz@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/22 09:31:17 by hyilmaz       #+#    #+#                 */
/*   Updated: 2020/12/24 22:13:32 by hyilmaz       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>
#include <stdio.h>

void	conversion(va_list ap, t_info *info)
{
	//printf("Entered conversion function\n");
	if (info->spec == 'd' || info->spec == 'i' || info->spec == 'u')
		d_convert(ap, info);
	
	//else if (info.spec == 'x' || info.spec == 'X')
	//	//Go to x_convert function
	else if (info->spec == 'c')
		c_convert(ap, info);
	/*else if (info.spec == 's')
		//Go to s_convert function
	else if (info.spec == 'p')
		//Go to p_convert function*/
	else
		info->err = 1;
	
	if (info->err == 1)
		return ;
}

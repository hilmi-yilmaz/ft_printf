/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   d_convert.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: hyilmaz <hyilmaz@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/22 20:20:31 by hyilmaz       #+#    #+#                 */
/*   Updated: 2021/01/06 20:11:43 by hyilmaz       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>

/*
** The convert_d function prints the {d, i}-conversion.
** It uses ft_strlen, ft_itoa and ft_putstr_fd from libft.
** It also uses the following functions from the utils directory:
** - fill_spaces()
** - fill_zeros()
** - fill_number()
** - fill_minus()
**
** Arguments:
**		(va_list)	ap: the argument list which contains the unnamed arguments.
**		(t_info *)	info: pointer to struct which contains the conversion
**					information.
**
** Returns:
** 		(void) 		None.
*/

void	convert_d(va_list ap, t_info *info)
{
	int		nb;
	int		len_nb;
	char	*str_nb;
	char	*str;

	nb = va_arg(ap, int);
	str_nb = ft_itoa(nb);
	if (str_nb == NULL)
	{
		info->err = 1;
		return ;
	}
	len_nb = ft_strlen(str_nb);
	str = fill_spaces(nb, info, len_nb);
	if (info->err == 1)
		return ;
	info->return_val = ft_strlen(str);
	fill_zeros(str, info, nb, 10);
	fill_number(str, str_nb, info, nb);
	fill_minus(str, info, nb);
	if (nb == 0 && info->prec == 0)
		ft_memset(str, ' ', ft_strlen(str));
	ft_putstr_fd(str, 1);
	free(str);
	free(str_nb);
}

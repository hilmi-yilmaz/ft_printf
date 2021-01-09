/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   x_convert.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: hyilmaz <hyilmaz@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/25 20:08:17 by hyilmaz       #+#    #+#                 */
/*   Updated: 2020/12/27 17:38:21 by hyilmaz       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>

/*
** The put_x function prints argument "str_result".
** It frees both str_result and str_nb.
**
** Arguments:
**		(char *)	str_result: the string to print and free.
**		(char *)	str_nb: the string to free.
**
** Returns:
**		(void)		None.
*/

static void	put_x(char *str_result, char *str_nb)
{
	ft_putstr_fd(str_result, 1);
	free(str_nb);
	free(str_result);
}

/*
** The x_convert function prints the x-conversion.
** It uses ft_strlen, ft_ultoa_hex, ft_putstr and ft_toupper_str from libft.
** It also uses the following functions from the utils directory:
** - fill_spaces()
** - fill_zeros()
** - fill_number()
**
** Arguments:
**		(va_list)	ap: The argument list which contains the unnamed arguments.
**		(t_info *)	info: pointer to struct which contains the conversion
**					information.
**
** Returns:
** 		(void)		None.
*/

void		convert_x(va_list ap, t_info *info)
{
	unsigned int	nb;
	int				len_nb;
	char			*str_nb;
	char			*str_result;

	nb = va_arg(ap, unsigned int);
	str_nb = ft_ultoa_hex(nb);
	if (str_nb == NULL)
	{
		info->err = 1;
		return ;
	}
	len_nb = (int)ft_strlen(str_nb);
	str_result = fill_spaces(nb, info, len_nb);
	if (info->err == 1)
		return ;
	info->return_val = ft_strlen(str_result);
	fill_zeros(str_result, info, nb, 16);
	fill_number(str_result, str_nb, info, nb);
	if (nb == 0 && info->prec == 0)
		ft_memset(str_result, ' ', ft_strlen(str_result));
	if (info->spec == 'X')
		ft_toupper_str(str_result);
	put_x(str_result, str_nb);
}

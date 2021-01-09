/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   fill_spaces.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: hyilmaz <hyilmaz@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/09 18:20:38 by hyilmaz       #+#    #+#                 */
/*   Updated: 2021/01/09 18:20:39 by hyilmaz       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include <stdlib.h>

/*
** The fill_spaces function allocates exactly enough memory for the string
** to be printed.
** It also fills it with spaces using the ft_memset function from libft.
**
** Arguments:
**		(long)		nb: the number to print.
**		(t_info *)	info: pointer to struct which contains the conversion
**					information.
**		(int)		len_nb: the length of the number including '-' sign.
**
** Returns:
**		(char *) 	str: string which is filled with spaces.
*/

char	*fill_spaces(long nb, t_info *info, int len_nb)
{
	int		len_str;
	char	*str;

	if (len_nb >= info->prec)
		len_str = len_nb;
	else
		len_str = info->prec;
	if (len_str < info->width)
		len_str = info->width;
	if (nb == 0 && info->prec == 0)
		len_str = info->width;
	if (nb < 0 && info->prec >= len_nb && info->prec >= info->width)
		len_str++;
	str = (char *)malloc(sizeof(char) * len_str + 1);
	if (str == NULL)
	{
		info->err = 1;
		return (NULL);
	}
	if (info->zero == 0)
		ft_memset(str, ' ', (size_t)len_str);
	else
		ft_memset(str, '0', (size_t)len_str);
	*(str + len_str) = '\0';
	return (str);
}

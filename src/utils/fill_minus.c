/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   fill_minus.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: hyilmaz <hyilmaz@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/09 18:20:25 by hyilmaz       #+#    #+#                 */
/*   Updated: 2021/01/09 18:20:27 by hyilmaz       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

/*
** The fill_minus function adds a minus if the number was negative
** for {d,i}-conversion.
**
** Arguments:
**		(char *)	str: the string number without the '-' sign.
**		(t_info *)	info: pointer to struct which contains the conversion
**					information.
**		(long)		nb: the number to print.
**
** Returns:
**		(void)		None.
*/

void	fill_minus(char *str, t_info *info, long nb)
{
	int i;

	i = 0;
	while (ft_isdigit(*(str + i)) == 0 && nb < 0 && info->dash == 0)
		i++;
	i--;
	if (i < 0)
		i = 0;
	if (nb < 0 && info->dash == 0)
		*(str + i) = '-';
}

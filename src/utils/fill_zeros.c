/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   fill_zeros.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: hyilmaz <hyilmaz@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/09 18:20:46 by hyilmaz       #+#    #+#                 */
/*   Updated: 2021/01/09 18:20:48 by hyilmaz       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

/*
** The fill_zeros function fills the string "str" with zeros.
** It fills a maximum of info->prec zeros or length of the number
** (including '-' sign).
** It takes into account the left or right adjustment parameter info->dash.
**
** Arguments:
**		(char *) 	str: the string to be filled with zeros.
**		(t_info *)	info: pointer to struct which contains the conversion
**					information.
**		(long)		nb: the number to print.
**		(int)		base: the base number to do the calculations
**					with (base^power).
**
** Returns:
**		(void) 		None.
*/

void	fill_zeros(char *str, t_info *info, long nb, int base)
{
	int i;
	int j;
	int	prec;

	prec = info->prec;
	if (info->prec == -1)
		prec = 0;
	if (info->dash == 0)
		i = ft_strlen(str) - prec;
	else
	{
		if (nb < 0)
			i = 1;
		else
			i = 0;
	}
	j = 0;
	while (*(str + i) != '\0' && (j < prec || j < ft_nblen(nb, base)))
	{
		*(str + i) = '0';
		i++;
		j++;
	}
}

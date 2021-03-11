/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   fill_number.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: hyilmaz <hyilmaz@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/09 18:20:32 by hyilmaz       #+#    #+#                 */
/*   Updated: 2021/03/11 09:20:00 by hyilmaz       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

/*
** The fill_number function fills the string with the number.
**
** Arguments:
**		(char *)	str: the string to be filled.
**		(char *)	str_nb: the number in a string (result of ft_itoa).
**		(t_info *)	info: pointer to struct which contains the conversion
**					information.
**		(long)		nb: the number to print.
**
** Returns:
**		(void) 		None.
*/

void	fill_number(char *str, char *str_nb, t_info *info, long nb)
{
	int	i;
	int	j;

	if (nb < 0 && info->dash == 1)
		*(str + 0) = '-';
	i = ft_strlen(str) - 1;
	j = ft_strlen(str_nb) - 1;
	if (i < 0)
		i = 0;
	while (i >= 0 && *(str + i) == ' ' && info->dash == 1)
		i--;
	while (j >= 0 && *(str_nb + j) != '-')
	{
		if (*str == '\0' || (info->prec == 0 && nb == 0))
			break ;
		*(str + i) = *(str_nb + j);
		i--;
		j--;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   convert_c.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: hyilmaz <hyilmaz@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/24 18:36:16 by hyilmaz       #+#    #+#                 */
/*   Updated: 2021/03/11 09:17:08 by hyilmaz       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>

/*
** The fill_spaces_c function allocates exactly enough memory for the string
** to be printed.
** It also fills the array with spaces or zeros depending on the given flags.
**
** Arguments:
**		(t_info *)	info: pointer to struct which contains the conversion
**					information.
**
** Returns:
**		(char *) 	str: the allocated memory which is null terminated.
*/

static char	*fill_spaces_c(t_info *info)
{
	int		len_str;
	char	*str;

	if (info->width == 0)
		len_str = 1;
	else
		len_str = info->width;
	str = (char *)malloc(sizeof(char) * len_str + 1);
	if (str == NULL)
		return (NULL);
	*(str + len_str) = '\0';
	info->return_val = len_str;
	ft_memset(str, ' ', (size_t)len_str);
	if (info->zero == 1)
		ft_memset(str, '0', (size_t)len_str);
	return (str);
}

/*
** The exception_zero function handles the case if c = 0.
**
** Arguments:
**		(unsigned char)	c: the character to print (in this case 0).
**		(t_info *)		info: pointer to struct which contains the conversion
**						information.
**
** Returns:
**		(void)			None.
*/

static void	exception_zero(unsigned char c, t_info *info)
{
	int		i;
	int		spaces;

	i = 0;
	if (info->width == 0 || info->width == 1)
		spaces = 0;
	else
		spaces = info->width - 1;
	if (info->dash == 1)
		ft_putchar_fd(c, 1);
	while (i < spaces)
	{
		ft_putchar_fd(' ', 1);
		i++;
	}
	if (info->dash == 0)
		ft_putchar_fd(c, 1);
	info->return_val = spaces + 1;
}

/*
** The convert_c function prints the c-conversion.
** It uses ft_putstr_fd and ft_putchar from libft.
** It also uses the above two function.
**
** Arguments:
**		(va_list)	ap: the argument list which contains the unnamed arguments.
**		(t_info *)	info: pointer to struct which contains the conversion
**					information.
**
** Returns:
** 		(void) 		None.
*/

void	convert_c(va_list ap, t_info *info)
{
	unsigned char	c;
	char			*str;

	c = '%';
	if (info->spec != '%')
		c = va_arg(ap, int);
	if (c == 0)
	{
		exception_zero(c, info);
		return ;
	}
	str = fill_spaces_c(info);
	if (str == NULL)
	{
		info->err = 1;
		return ;
	}
	if (info->dash == 0)
		*(str + ft_strlen(str) - 1) = c;
	else
		*(str + 0) = c;
	ft_putstr_fd(str, 1);
	free(str);
}

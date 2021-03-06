/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   convert_s.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: hyilmaz <hyilmaz@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/24 21:27:22 by hyilmaz       #+#    #+#                 */
/*   Updated: 2021/03/11 09:17:55 by hyilmaz       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>

/*
** The fill_spaces_s function allocates exactly enough memory for the string.
** It also fills it with spaces using the ft_memset function from libft.
**
** Arguments:
**		(const char *)	str: the input string from the arguments list.
**		(t_info *)		info: pointer to struct which contains the conversion
**						information.
**
** Returns:
**		(char *) 		str_malloc: string which is filled with spaces.
*/

static char	*fill_spaces_s(const char *str, t_info *info)
{
	int		len_str;
	int		len_malloc;
	char	*str_malloc;

	len_str = (int)ft_strlen(str);
	if (info->prec >= len_str && info->prec != -1)
		len_malloc = len_str;
	else if (info->prec < len_str && info->prec != -1)
		len_malloc = info->prec;
	else
		len_malloc = len_str;
	if (len_malloc < info->width)
		len_malloc = info->width;
	str_malloc = (char *)malloc(sizeof(char) * len_malloc + 1);
	if (str_malloc == NULL)
		return (NULL);
	*(str_malloc + len_malloc) = '\0';
	ft_memset(str_malloc, ' ', (size_t)len_malloc);
	return (str_malloc);
}

/*
** The fill_str function fills the string with the input string from the
** arguments list.
**
** Arguments:
**		(char *)		str_malloc: the string to be filled.
**		(const char *)	str: the input string.
**		(t_info *)		info: pointer to struct which contains the conversion
**						information.
**
** Returns:
**		(void) 			None.
*/

static void	fill_str(char *str_malloc, const char *str, t_info *info)
{
	int	i;
	int	len_str;

	i = 0;
	len_str = ft_strlen(str);
	if (info->prec < len_str && info->prec != -1)
		len_str = info->prec;
	if (info->dash == 0)
		i = info->width - len_str;
	if (i < 0)
		i = 0;
	if (info->prec == -1)
		ft_memmove(str_malloc + i, str, ft_strlen(str));
	else
		ft_memmove(str_malloc + i, str, len_str);
}

/*
** The convert_s function prints the s-conversion.
** It uses ft_strlen, ft_putstr_fd from libft.
** It also uses the above two functions.
**
** Arguments:
**		(va_list)	ap: the argument list which contains the unnamed arguments.
**		(t_info *)	info: pointer to struct which contains the conversion
**					information.
**
** Returns:
** 		(void) 		None.
*/

void	convert_s(va_list ap, t_info *info)
{
	const char	*str;
	char		*str_malloc;

	str = va_arg(ap, const char *);
	if (str == NULL)
		str = "(null)";
	str_malloc = fill_spaces_s(str, info);
	if (str_malloc == NULL)
	{
		info->err = 1;
		return ;
	}
	info->return_val = ft_strlen(str_malloc);
	fill_str(str_malloc, str, info);
	ft_putstr_fd(str_malloc, 1);
	free(str_malloc);
}

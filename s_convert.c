/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   s_convert.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: hyilmaz <hyilmaz@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/24 21:27:22 by hyilmaz       #+#    #+#                 */
/*   Updated: 2020/12/25 15:46:27 by hyilmaz       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <stdlib.h>

void	s_convert(va_list ap, t_info *info)
{
	const char	*str;
	char		*str_malloc;

	str = va_arg(ap, const char *);
	str_malloc = create_array_s(str, info);
	if (str_malloc == NULL)
	{
		info->err = 1;
		return ;
	}
	fill_str(str_malloc, str, info);
	ft_putstr_fd((char *)str_malloc, 1);
	free(str_malloc);
}

char	*create_array_s(const char *str, t_info *info)
{
	int		i;
	int		len_str;
	int		len_malloc;
	char	*str_malloc;

	i = 0;
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
	while (*(str_malloc + i) != '\0')
	{
		*(str_malloc + i) = ' ';
		i++;
	}
	return (str_malloc);
}

void	fill_str(char *str_malloc, const char *str, t_info *info)
{
	int i;
	int j;
	int	len_str;

	i = 0;
	j = 0;
	len_str = (int)ft_strlen(str);
	if (info->prec < len_str && info->prec != -1)
		len_str = info->prec;
	if (info->dash == 0)
		i = info->width - len_str;
	if (i < 0)
		i = 0;
	while (*(str + j) != '\0' && info->prec == -1)
	{
		*(str_malloc + i) = *(str + j);
		i++;
		j++;
	}
	while (*(str + j) != '\0' && j < info->prec && info->prec != -1)
	{
		*(str_malloc + i) = *(str + j);
		i++;
		j++;
	}
}

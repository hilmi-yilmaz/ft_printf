/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   d_convert.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: hyilmaz <hyilmaz@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/22 13:09:44 by hyilmaz       #+#    #+#                 */
/*   Updated: 2020/12/22 21:43:44 by hyilmaz       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <stdlib.h>

void	u_convert(va_list ap, t_info *info)
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
	str = create_array(len_nb, info);
	if (str == NULL)
	{
		info->err = 1;
		return ;
	}
	fill_zeros(str, info);
	fill_nb(str, str_nb, info);
	ft_putstr_fd(str, 1);

	free(str_nb);
	free(str);
}

/*
** This function allocates memory to create the array to print
*/

char	*create_array(int len_nb, t_info *info)
{
	int 	i;
	int		len_str;
	char	*str;
	
//	printf("Entered create_array()\n");

	if (len_nb >= info->prec && len_nb >= info->width)
		len_str = len_nb;
	else if (len_nb < info->prec && len_nb >= info->width)
		len_str = info->prec;
	else if (len_nb >= info->prec && len_nb < info->width)
		len_str = info->width;
	else
		len_str = max_number(info->width, info->prec);
//	printf("len_str = %d\n", len_str);
	str = (char *)malloc(sizeof(char) * len_str + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < len_str)
	{
		*(str + i) = ' ';
		i++;
	}
	*(str + i) = '\0';
	//printf("%s-\n", str);
	return (str);
}

void	fill_zeros(char *str, t_info *info)
{
	int i;
	int	len_str;

	len_str = ft_strlen(str);
	if (info->dash == 0)
	{
		i = len_str - 1;
		while (i >= len_str - info->prec)
		{
			*(str + i) = '0';
			//printf("*(str + %d) = '0'\n", i);
			i--;
		}
		return ;
	}
	i = 0;
	while (i < info->prec)
	{
		*(str + i) = '0';
		i++;
	}
}

void	fill_nb(char *str, char *str_nb, t_info *info)
{
	int i;
	int	j;
	int len_str;
	int len_nb;
	
	j = 0;
	len_str = ft_strlen(str);
	len_nb = ft_strlen(str_nb);
//	printf("len_str = %d\n", len_str);
//	printf("len_nb = %d\n", len_nb);
//	printf("str=%s-\n", str);
	if (info->dash == 0)
	{
		i = len_str - 1;
		//printf("Range of loop: %d - %d\n", len_str - len_nb, i);
		while (i >= len_str - len_nb)
		{
			//printf("i = %d\n", i);
			*(str + i) = *(str_nb + len_nb - 1 - j);
			i--;
			j++;
		}
		return ;
	}
	i = info->prec - len_nb;
	if (i < 0)
		i = 0;
	//printf("i = %d\n", i);
	while (*(str_nb + j) != '\0')
	{
		*(str + i) = *(str_nb + j);
		//printf("*(str + %d) = %c\n", i, *(str_nb + j));
		i++;
		j++;
	}
}

int		max_number(int a, int b)
{	
	if (a > b)
		return (a);
	else
		return (b);
}

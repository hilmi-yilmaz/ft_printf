/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   set_info.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: hyilmaz <hyilmaz@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/19 10:32:28 by hyilmaz       #+#    #+#                 */
/*   Updated: 2020/12/19 19:06:00 by hyilmaz       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <stdlib.h>

int		set_info(const char *str_conv, t_info *info)
{
	int	step;

	step = 0;
	info->dash = 0;
	info->zero = 0;
	info->star = 0;
	info->prec = -1;
	info->width = 0;
	info->spec = '\0';
	

	step += set_flags(str_conv, info);
	//printf("step after set_flags() = %d\n", step);
	step += set_width(str_conv + step, info);
	//printf("step after set_width() = %d\n", step);
	step += set_prec(str_conv + step, info);
	//printf("step after set_prec() = %d\n", step);
	step += set_spec(str_conv + step, info);
	//printf("step after set_prec() = %d\n", step);
	
	/* Handle exceptions */
	if (info->dash == 1)
		info->zero = 0; 
	if (info->prec != -1)
		info->zero = 0;	
	return (step);
}

/* This function sets the '-' and '0' flags */
int		set_flags(const char *str_conv, t_info *info)
{
	int i;

	//printf("\nEntered set_flags\n");
	i = 0;
	//printf("str_conv= %s\n", str_conv);
	while (*(str_conv + i) == '-' || *(str_conv + i) == '0')
	{
		if (*(str_conv + i) == '-')
			info->dash = 1;
		if (*(str_conv + i) == '0')
			info->zero = 1;
		i++;
	}/*
	printf("dash = %d\n", info->dash);
	printf("zero = %d\n", info->zero);
	printf("star = %d\n", info->star);
	printf("prec = %d\n", info->prec);
	printf("width = %d\n", info->width);
	printf("spec = %c\n", info->spec);*/
	return (i);
}

int		set_width(const char *str_conv, t_info *info)
{
	int i;
	char *width;

	//printf("\nEntered set_width\n");
	i = 0;
//	printf("str_conv= %s\n", str_conv);
	while (*(str_conv + i) != '\0')
	{
		if (ft_isdigit(*(str_conv + i)) == 0)
			break ;
		i++;
	}
	width = ft_substr(str_conv, 0, i);
	if (width == NULL)
		return (-1);
	info->width = ft_atoi(width);
	free(width);
	/*
	printf("dash = %d\n", info->dash);
	printf("zero = %d\n", info->zero);
	printf("star = %d\n", info->star);
	printf("prec = %d\n", info->prec);
	printf("width = %d\n", info->width);
	printf("spec = %c\n", info->spec);*/
	return (i);
}

int		set_prec(const char *str_conv, t_info *info)
{
	int i;
	int	j;
	char *prec;

	//printf("\nEntered set_prec\n");
	//printf("str_conv= %s\n", str_conv);
	i = 0;
	j = 0;
	if (*(str_conv + j) == '.')
		j++;
	else
		return (0);
	while (ft_isdigit(*(str_conv + j + i)) > 0)
		i++;
	prec = ft_substr(str_conv + j, 0, i);
	if (prec == NULL)
		return (-1);
	info->prec = ft_atoi(prec);
	free(prec);
	/*
	printf("dash = %d\n", info->dash);
	printf("zero = %d\n", info->zero);
	printf("star = %d\n", info->star);
	printf("prec = %d\n", info->prec);
	printf("width = %d\n", info->width);
	printf("spec = %c\n", info->spec);*/
	return (i + j);
}

int		set_spec(const char *str_conv, t_info *info)
{
	info->spec = *(str_conv + 0);
	/*
	printf("dash = %d\n", info->dash);
	printf("zero = %d\n", info->zero);
	printf("star = %d\n", info->star);
	printf("prec = %d\n", info->prec);
	printf("width = %d\n", info->width);
	printf("spec = %c\n", info->spec);*/
	return (1);
}

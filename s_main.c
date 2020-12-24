/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   s_main.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: hyilmaz <hyilmaz@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/24 21:25:38 by hyilmaz       #+#    #+#                 */
/*   Updated: 2020/12/24 22:13:36 by hyilmaz       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int		main(void)
{
	printf("%-s|\n", "hilmi");
	printf("%10s|\n", "hilmi");
	printf("%-10s|\n", "hilmi");
	printf("%.3s|\n", "hilmi");
	printf("%-.3s|\n", "hilmi");
	printf("%10.3s|\n", "hilmi");
	printf("%-10.3s|\n", "hilmi");
	printf("%3.10s|\n", "hilmi");
	printf("%-3.10s|\n", "hilmi");
	return (0);
}

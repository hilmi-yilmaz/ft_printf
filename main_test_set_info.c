/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: hyilmaz <hyilmaz@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/19 10:04:06 by hyilmaz       #+#    #+#                 */
/*   Updated: 2020/12/20 18:31:42 by hyilmaz       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int		main(void)
{
	ft_printf("%i", 10);
	ft_printf("%.i", 10);
	ft_printf("%.20i", 10);
	ft_printf("%0.20i", 10);
	ft_printf("%0i", 10);
	ft_printf("%-.20s", 10);
	ft_printf("%-10.20p", 10);
	ft_printf("%010.20x", 10);
	ft_printf("%1.d", 10);
	ft_printf("%*.d", 1, 10);
	ft_printf("%*.*d", 11, 22, 10);
	ft_printf("%0*.*d", 11, 22, 10);
	ft_printf("%-*.*d", 11, 22, 10);
	ft_printf("%0*d", 11, 10);

	//printf("ik ben hilmi %.*i yilmaz\n", 20, 10);
	printf("ik ben hilmi %10i yilmaz\n", 10);
	return (0);
}

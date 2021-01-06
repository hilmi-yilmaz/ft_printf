/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   p_main.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: hyilmaz <hyilmaz@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/26 14:21:06 by hyilmaz       #+#    #+#                 */
/*   Updated: 2020/12/26 20:14:13 by hyilmaz       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int		main(void)
{
	char	c;
	int		i;
	c = 'p';
	i = 10;

	printf("Printing addresses (dash = 0)\n");
	printf("%p|\n", &c);
	ft_printf("%p|\n\n", &c);

	printf("%p|\n", &i);
	ft_printf("%p|\n\n", &i);
	
	printf("%17p|\n", &c);
	ft_printf("%17p|\n\n", &c);

	printf("%17p|\n", &i);
	ft_printf("%17p|\n\n", &i);
	
	printf("%2p|\n", &c);
	ft_printf("%2p|\n\n", &c);

	printf("%2p|\n", &i);
	ft_printf("%2p|\n\n", &i);
	
	
	printf("Printing addresses (dash = 1)\n");
	printf("%-p|\n", &c);
	ft_printf("%-p|\n\n", &c);
	
	printf("%-p|\n", &i);
	ft_printf("%-p|\n\n", &i);

	printf("%-17p|\n", &c);
	ft_printf("%-17p|\n\n", &c);

	printf("%-17p|\n", &i);
	ft_printf("%-17p|\n\n", &i);
	
	printf("%-2p|\n", &c);
	ft_printf("%-2p|\n\n", &c);

	printf("%-2p|\n", &i);
	ft_printf("%-2p|\n\n", &i);
	
	return (0);
}

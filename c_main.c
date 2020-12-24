/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   c_main.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: hyilmaz <hyilmaz@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/24 19:07:12 by hyilmaz       #+#    #+#                 */
/*   Updated: 2020/12/24 21:27:05 by hyilmaz       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int		main(void)
{
	printf("%c|\n", 'p');
	ft_printf("%c|\n\n", 'p');

	printf("%3c|\n", 'p');
	ft_printf("%3c|\n\n", 'p');
	
	printf("%-3c|\n", 'p');
	ft_printf("%-3c|\n\n", 'p');
	
	printf("%5c|\n", 'p');
	ft_printf("%5c|\n\n", 'p');
	
	printf("%-5c|\n", 'p');
	ft_printf("%-5c|\n\n", 'p');

	printf("%*c|\n", 4, 'p');
	ft_printf("%*c|\n\n", 4, 'p');

	printf("%-*c|\n", 4, 'p');
	ft_printf("%-*c|\n\n", 4, 'p');

	return (0);
}

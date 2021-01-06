/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   c_main.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: hyilmaz <hyilmaz@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/24 19:07:12 by hyilmaz       #+#    #+#                 */
/*   Updated: 2021/01/05 18:24:35 by hyilmaz       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int		main(void)
{
	/*printf("%c|\n", 'p');
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
	ft_printf("%-*c|\n\n", 4, 'p');*/

	ft_printf("ft: |%5c|\n", 0);
	printf("C : |%5c|\n\n", 0);

	ft_printf("ft: |%1c|\n", 0);
	printf("C : |%1c|\n\n", 0);
	
	ft_printf("ft: |%2c|\n", 0);
	printf("C : |%2c|\n\n", 0);
	
	//ft_printf("ft: |%5c|\n", 0);
	//printf("C : |%5c|\n\n", 0);

	//ft_printf("ft: |%10c|\n", 1);
//	printf("C : |%10c|\n\n", 1);
	return (0);
}

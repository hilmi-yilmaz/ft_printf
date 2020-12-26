/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   x_main.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: hyilmaz <hyilmaz@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/25 15:19:30 by hyilmaz       #+#    #+#                 */
/*   Updated: 2020/12/25 20:33:47 by hyilmaz       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int		main(void)
{
	/*printf("%x|\n", 123);
	
	printf("%x|\n", -123);

	printf("%5x|\n", 123);
	
	printf("%1x|\n", 123);
	
	printf("%.5x|\n", 123);
	
	printf("%.1x|\n", 123);*/
	
	printf("%x|\n", 101);
	ft_printf("%x|\n\n", 101);
	return (0);
}

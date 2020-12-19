/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: hyilmaz <hyilmaz@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/19 10:04:06 by hyilmaz       #+#    #+#                 */
/*   Updated: 2020/12/19 19:05:58 by hyilmaz       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int		main(void)
{
	ft_printf("ik ben hilmi %.-20i yilmaz\n", 10);

	printf("ik ben hilmi %.*i yilmaz\n", -20, 10);
	return (0);
}

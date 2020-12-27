/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   return_val_main.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: hyilmaz <hyilmaz@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/27 13:37:52 by hyilmaz       #+#    #+#                 */
/*   Updated: 2020/12/27 13:57:09 by hyilmaz       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int		main(void)
{
	int r;

	r = ft_printf("ik ben %10s en ben %7.5d jaar oud, %p, %X, %10c", "hilmi", 22, &r, 1000, 'o');
	printf("| %d\n", r);
	r = printf("ik ben %10s en ben %7.5d jaar oud, %p, %X, %10c", "hilmi", 22, &r, 1000, 'o');
	printf("| %d\n", r);

	return (0);
}

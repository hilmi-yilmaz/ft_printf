/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   variadic_args_testing.c                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: hyilmaz <hyilmaz@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/18 10:37:58 by hyilmaz       #+#    #+#                 */
/*   Updated: 2020/12/18 11:22:09 by hyilmaz       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>

int		add_em_up(int count, ...)
{
	va_list	args;
	int		i;
	int		sum;

	va_start(args, count); /* Initialize the argument list */

	i = 0;
	sum = 0;
	while (i < count)
	{
		sum = sum + va_arg(args, int);
		i++;
	}
	va_end(args);
	return (sum);
}

int		main(void)
{
	/* This call prints 16 */
	printf("%d\n", add_em_up(3, 5, 5, 6));

	return (0);
}

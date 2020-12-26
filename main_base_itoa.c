/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_base_itoa.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: hyilmaz <hyilmaz@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/25 19:17:55 by hyilmaz       #+#    #+#                 */
/*   Updated: 2020/12/25 20:01:16 by hyilmaz       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_itoa_hex(int n);

int		main(void)
{
	char *result;

	result = ft_itoa_hex(-2147483648);
	printf("%s\n", result);
	free(result);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   s_main.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: hyilmaz <hyilmaz@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/24 21:25:38 by hyilmaz       #+#    #+#                 */
/*   Updated: 2020/12/25 15:54:20 by hyilmaz       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int		main(void)
{
	printf("Printing with single flags\n");
	printf("%-s|\n", "hilmi");
	ft_printf("%-s|\n\n", "hilmi");
	
	printf("%s|\n", "hilmi");
	ft_printf("%s|\n\n", "hilmi");
	
	printf("%10s|\n", "hilmi");
	ft_printf("%10s|\n\n", "hilmi");
	
	printf("%-10s|\n", "hilmi");
	ft_printf("%-10s|\n\n", "hilmi");
	
	printf("%3s|\n", "hilmi");
	ft_printf("%3s|\n", "hilmi");
	
	printf("%-3s|\n", "hilmi");
	ft_printf("%-3s|\n\n", "hilmi");
	
	printf("%5s|\n", "hilmi");
	ft_printf("%5s|\n", "hilmi");
	
	printf("%-5s|\n", "hilmi");
	ft_printf("%-5s|\n\n", "hilmi");
	
	printf("%.3s|\n", "hilmi");
	ft_printf("%.3s|\n", "hilmi");
	
	printf("%-.3s|\n", "hilmi");
	ft_printf("%-.3s|\n\n", "hilmi");
	
	printf("%.7s|\n", "hilmi");
	ft_printf("%.7s|\n", "hilmi");
	
	printf("%-.7s|\n", "hilmi");
	ft_printf("%-.7s|\n\n", "hilmi");
	
	printf("%.5s|\n", "hilmi");
	ft_printf("%.5s|\n", "hilmi");
	
	printf("%-.5s|\n", "hilmi");
	ft_printf("%-.5s|\n\n", "hilmi");
	
	//len_str is longest
	printf("Printing with string as longest\n");
	printf("%2.4s|\n", "hilmi");
	ft_printf("%2.4s|\n\n", "hilmi");
	
	printf("%-2.4s|\n", "hilmi");
	ft_printf("%-2.4s|\n\n", "hilmi");
	
	printf("%4.2s|\n", "hilmi");
	ft_printf("%4.2s|\n\n", "hilmi");
	
	printf("%-4.2s|\n", "hilmi");
	ft_printf("%-4.2s|\n\n", "hilmi");
	
	//len_str is middle
	printf("Printing with string as middle length\n");
	printf("%2.5s|\n", "hil");
	ft_printf("%2.5s|\n\n", "hil");
	
	printf("%-2.5s|\n", "hil");
	ft_printf("%-2.5s|\n\n", "hil");
	
	printf("%5.2s|\n", "hil");
	ft_printf("%5.2s|\n\n", "hil");
	
	printf("%-5.2s|\n", "hil");
	ft_printf("%-5.2s|\n\n", "hil");

	//len_str is smallest
	printf("Printing with string as smallest\n");
	printf("%4.5s|\n", "hil");
	ft_printf("%4.5s|\n\n", "hil");
	
	printf("%-4.5s|\n", "hil");
	ft_printf("%-4.5s|\n\n", "hil");
	
	printf("%5.4s|\n", "hil");
	ft_printf("%5.4s|\n\n", "hil");
	
	printf("%-5.4s|\n", "hil");
	ft_printf("%-5.4s|\n\n", "hil");

	//equal parameters
	printf("Printing with equal lengths\n");
	printf("%4.4s|\n", "hilmi");
	ft_printf("%4.4s|\n\n", "hilmi");
	
	printf("%-4.4s|\n", "hilmi");
	ft_printf("%-4.4s|\n\n", "hilmi");
	
	printf("%6.6s|\n", "hilmi");
	ft_printf("%6.6s|\n\n", "hilmi");
	
	printf("%-6.6s|\n", "hilmi");
	ft_printf("%-6.6s|\n\n", "hilmi");
	
	printf("%2.5s|\n", "hilmi");
	ft_printf("%2.5s|\n\n", "hilmi");
	
	printf("%-2.5s|\n", "hilmi");
	ft_printf("%-2.5s|\n\n", "hilmi");
	
	printf("%6.5s|\n", "hilmi");
	ft_printf("%6.5s|\n\n", "hilmi");
	
	printf("%-6.5s|\n", "hilmi");
	ft_printf("%-6.5s|\n\n", "hilmi");
	
	printf("%5.2s|\n", "hilmi");
	ft_printf("%5.2s|\n\n", "hilmi");
	
	printf("%-5.2s|\n", "hilmi");
	ft_printf("%-5.2s|\n\n", "hilmi");

	printf("%5.6s|\n", "hilmi");
	ft_printf("%5.6s|\n\n", "hilmi");
	
	printf("%-5.6s|\n", "hilmi");
	ft_printf("%-5.6s|\n\n", "hilmi");

	//Zero string input
	printf("Printing with zero string length\n");
	printf("%-s|\n", "");
	ft_printf("%-s|\n\n", "");
	
	printf("%s|\n", "");
	ft_printf("%s|\n\n", "");
	
	printf("%10s|\n", "");
	ft_printf("%10s|\n\n", "");
	
	printf("%-10s|\n", "");
	ft_printf("%-10s|\n\n", "");
	
	printf("%3s|\n", "");
	ft_printf("%3s|\n", "");
	
	printf("%-3s|\n", "");
	ft_printf("%-3s|\n\n", "");
	
	printf("%5s|\n", "");
	ft_printf("%5s|\n", "");
	
	printf("%-5s|\n", "");
	ft_printf("%-5s|\n\n", "");
	
	printf("%.3s|\n", "");
	ft_printf("%.3s|\n", "");
	
	printf("%-.3s|\n", "");
	ft_printf("%-.3s|\n\n", "");
	
	printf("%.7s|\n", "");
	ft_printf("%.7s|\n", "");
	
	printf("%-.7s|\n", "");
	ft_printf("%-.7s|\n\n", "");
	
	printf("%.5s|\n", "");
	ft_printf("%.5s|\n", "");
	
	printf("%-.5s|\n", "");
	ft_printf("%-.5s|\n\n", "");

	printf("%2.5s|\n", "");
	ft_printf("%2.5s|\n", "");
	
	printf("%-2.5s|\n", "");
	ft_printf("%-2.5s|\n\n", "");

	printf("%5.2s|\n", "");
	ft_printf("%5.2s|\n", "");
	
	printf("%-5.2s|\n", "");
	ft_printf("%-5.2s|\n\n", "");

	printf("%5.s|\n", "");
	ft_printf("%5.s|\n", "");
	
	printf("%-5.s|\n", "");
	ft_printf("%-5.s|\n\n", "");

	printf("%.s|\n", "");
	ft_printf("%.s|\n\n", "");

	printf("%-.s|\n", "");
	ft_printf("%-.s|\n\n", "");
	return (0);
}

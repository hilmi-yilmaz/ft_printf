/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   x_main.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: hyilmaz <hyilmaz@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/25 15:19:30 by hyilmaz       #+#    #+#                 */
/*   Updated: 2020/12/26 14:07:22 by hyilmaz       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int		main(void)
{
	/*printf("%07x|\n", 123);
	
	printf("%x|\n", -123);

	printf("%5x|\n", 123);
	
	printf("%1x|\n", 123);
	
	printf("%.5x|\n", 123);
	
	printf("%.1x|\n", 123);*/

	//Testing with single parameters
	printf("Testing with single parameters (dash = 0)\n");	
	ft_printf("%7x|\n", 0x8BA);
	printf("%7x|\n\n", 0x8BA);

	ft_printf("%1x|\n", 0x8BA);
	printf("%1x|\n\n", 0x8BA);

	ft_printf("%3x|\n", 0x8BA);
	printf("%3x|\n\n", 0x8BA);

	ft_printf("%.6x|\n", 0x400);
	printf("%.6x|\n\n", 0x400);

	ft_printf("%.2x|\n", 0x400);
	printf("%.2x|\n\n", 0x400);

	ft_printf("%.3x|\n", 0x400);
	printf("%.3x|\n\n", 0x400);

	ft_printf("%.x|\n", 0x0);
	printf("%.x|\n\n", 0x0);

	ft_printf("%x|\n", 0x0);
	printf("%x|\n\n", 0x0);
	
	printf("Testing with single parameters (dash = 1)\n");	
	ft_printf("%-7x|\n", 0x8BA);
	printf("%-7x|\n\n", 0x8BA);

	ft_printf("%-1x|\n", 0x8BA);
	printf("%-1x|\n\n", 0x8BA);

	ft_printf("%-3x|\n", 0x8BA);
	printf("%-3x|\n\n", 0x8BA);

	ft_printf("%-.6x|\n", 0x400);
	printf("%-.6x|\n\n", 0x400);

	ft_printf("%-.2x|\n", 0x400);
	printf("%-.2x|\n\n", 0x400);

	ft_printf("%-.3x|\n", 0x400);
	printf("%-.3x|\n\n", 0x400);

	ft_printf("%-.x|\n", 0x0);
	printf("%-.x|\n\n", 0x0);

	ft_printf("%-x|\n", 0x0);
	printf("%-x|\n\n", 0x0);
	

	//Positive numbers
	printf("Printing positive numbers (dash = 0)\n");
	ft_printf("%7.5x|\n", 0x123);
	printf("%7.5x|\n\n", 0x123);

	ft_printf("%7.2x|\n", 0x123);
	printf("%7.2x|\n\n", 0x123);

	ft_printf("%4.3x|\n", 0x12345);
	printf("%4.3x|\n\n", 0x12345);

	ft_printf("%3.4x|\n", 0x12345);
	printf("%3.4x|\n\n", 0x12345);

	ft_printf("%2.3x|\n", 0x12345);
	printf("%2.3x|\n\n", 0x12345);

	ft_printf("%2.7x|\n", 0x12345);
	printf("%2.7x|\n\n", 0x12345);

	ft_printf("%2.7x|\n", 0x0);
	printf("%2.7x|\n\n", 0x0);

	ft_printf("%7.2x|\n", 0x0);
	printf("%7.2x|\n\n", 0x0);

	ft_printf("%3.3x|\n", 0x0);
	printf("%3.3x|\n\n", 0x0);


	//Equal parameters positive
	printf("Printing positive numbers (dash = 0) with equal parameters\n");
	ft_printf("%7.7x|\n", 0x123);
	printf("%7.7x|\n\n", 0x123);

	ft_printf("%2.2x|\n", 0x123);
	printf("%2.2x|\n\n", 0x123);

	ft_printf("%4.3x|\n", 0x1234);
	printf("%4.3x|\n\n", 0x1234);

	ft_printf("%3.4x|\n", 0x1234);
	printf("%3.4x|\n\n", 0x1234);

	ft_printf("%2.2x|\n", 0x12);
	printf("%2.2x|\n\n", 0x12);


	//Positive numbers
	printf("Printing positive numbers (dash = 1)\n");
	ft_printf("%-7.5x|\n", 0x123);
	printf("%-7.5x|\n\n", 0x123);

	ft_printf("%-7.2x|\n", 0x123);
	printf("%-7.2x|\n\n", 0x123);

	ft_printf("%-4.3x|\n", 0x12345);
	printf("%-4.3x|\n\n", 0x12345);

	ft_printf("%-3.4x|\n", 0x12345);
	printf("%-3.4x|\n\n", 0x12345);

	ft_printf("%-2.3x|\n", 0x12345);
	printf("%-2.3x|\n\n", 0x12345);

	ft_printf("%-2.7x|\n", 0x12345);
	printf("%-2.7x|\n\n", 0x12345);

	ft_printf("%-2.7x|\n", 0x0);
	printf("%-2.7x|\n\n", 0x0);

	ft_printf("%-7.2x|\n", 0x0);
	printf("%-7.2x|\n\n", 0x0);

	ft_printf("%-3.3x|\n", 0x0);
	printf("%-3.3x|\n\n", 0x0);


	//Equal parameters positive
	printf("Printing positive numbers (dash = 1) with equal parameters\n");
	ft_printf("%-7.7x|\n", 0x123);
	printf("%-7.7x|\n\n", 0x123);

	ft_printf("%-2.2x|\n", 0x123);
	printf("%-2.2x|\n\n", 0x123);

	ft_printf("%-4.3x|\n", 0x1234);
	printf("%-4.3x|\n\n", 0x1234);

	ft_printf("%-3.4x|\n", 0x1234);
	printf("%-3.4x|\n\n", 0x1234);

	ft_printf("%-2.2x|\n", 0x12);
	printf("%-2.2x|\n\n", 0x12);


	//Random testing

	ft_printf("%-10.12x|\n", 0x12345);
	printf("%-10.12x|\n\n", 0x12345);

	ft_printf("%-10.12x|\n", 2147483647);
	printf("%-10.12x|\n\n", 2147483647);

	ft_printf("%x|\n", 0xFAFA);
	printf("%x|\n\n", 0xFAFA);

	ft_printf("%x|\n", 0xAEB);
	printf("%x|\n\n", 0xAEB);

	ft_printf("%x|\n", 0xE9C);
	printf("%x|\n\n", 0xE9C);

	//Random testing with X

	ft_printf("%-10.12X|\n", 0x12345);
	printf("%-10.12X|\n\n", 0x12345);

	ft_printf("%-10.12X|\n", 2147483647);
	printf("%-10.12X|\n\n", 2147483647);

	ft_printf("%X|\n", 0xFAFA);
	printf("%X|\n\n", 0xFAFA);

	ft_printf("%X|\n", 0xAEB);
	printf("%X|\n\n", 0xAEB);

	ft_printf("%X|\n", 0xE9C);
	printf("%X|\n\n", 0xE9C);

	return (0);
}

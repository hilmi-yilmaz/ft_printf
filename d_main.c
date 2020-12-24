/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: hyilmaz <hyilmaz@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/19 10:04:06 by hyilmaz       #+#    #+#                 */
/*   Updated: 2020/12/24 18:37:57 by hyilmaz       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int		main(void)
{
	/*ft_printf("%i", 10);
	ft_printf("%.i", 10);
	ft_printf("%.20i", 10);
	ft_printf("%0.20i", 10);
	ft_printf("%0i", 10);
	ft_printf("%-.20s", 10);
	ft_printf("%-10.20p", 10);
	ft_printf("%010.20x", 10);
	ft_printf("%1.d", 10);
	ft_printf("%*.d", 1, 10);
	ft_printf("%*.*d", 11, 22, 10);
	ft_printf("%0*.*d", 11, 22, 10);
	ft_printf("%-*.*d", -11, -22, 10);
	ft_printf("%0*d", 11, 10);
*/
	//printf("ik ben hilmi %.*i yilmaz\n", 20, 10);
	//printf("ik ben hilmi %10i yilmaz\n", 10);

	/* Effect of precision and field width on different specifiers 
	printf("For i,d\n");
	printf("%d-\n", 123);
	printf("%4.4d-\n", 123);
	printf("%4.3d-\n", 123);
	printf("%3.6d-\n", 123);
	printf("%3.2d-\n", 123);

	printf("\nFor u\n");
	printf("%u-\n", 123);
	printf("%4.4u-\n", 123);
	printf("%4.3u-\n", 123);
	printf("%3.4u-\n", 123);

	printf("\nFor x, X\n");
	printf("%x-\n", 123);
	printf("%4.4x-\n", 123);
	printf("%4.3x-\n", 123);
	printf("%3.4x-\n", 123);

	printf("\nFor c\n");
	printf("%c-\n", 'p');
	printf("%4c-\n", 'p');
	printf("%4c-\n", 'p');
	printf("%3c-\n", 'p');

	printf("\nFor s\n");
	printf("%s-\n", "123");
	printf("%2s-\n", "123");
	printf("%.2s-\n", "123");
	printf("%4.4s-\n", "123");
	printf("%4.3s-\n", "123");
	printf("%3.4s-\n", "123");
	printf("%-4.2s-\n", "123");

	printf("\nFor p\n");
	printf("%p-\n", "123");
	printf("%16p-\n", "123");
	printf("%p-\n", "123");
	printf("%15p-\n", "123");*/

	//Positive numbers
	printf("Printing positive numbers (dash = 0)\n");
	ft_printf("%7.5d|\n", 123);
	printf("%7.5d|\n\n", 123);

	ft_printf("%7.2d|\n", 123);
	printf("%7.2d|\n\n", 123);

	ft_printf("%4.3d|\n", 12345);
	printf("%4.3d|\n\n", 12345);

	ft_printf("%3.4d|\n", 12345);
	printf("%3.4d|\n\n", 12345);

	ft_printf("%2.3d|\n", 12345);
	printf("%2.3d|\n\n", 12345);

	ft_printf("%2.7d|\n", 12345);
	printf("%2.7d|\n\n", 12345);

	//Negative numbers
	printf("Printing negative numbers (dash = 0)\n");
	ft_printf("%7.5d|\n", -123);
	printf("%7.5d|\n\n", -123);

	ft_printf("%7.1d|\n", -123);
	printf("%7.1d|\n\n", -123);

	ft_printf("%4.3d|\n", -12345);
	printf("%4.3d|\n\n", -12345);

	ft_printf("%3.4d|\n", -12345);
	printf("%3.4d|\n\n", -12345);

	ft_printf("%2.3d|\n", -12345);
	printf("%2.3d|\n\n", -12345);

	ft_printf("%2.7d|\n", -12345);
	printf("%2.7d|\n\n", -12345);

	ft_printf("%2.7d|\n", 0);
	printf("%2.7d|\n\n", 0);

	ft_printf("%7.2d|\n", 0);
	printf("%7.2d|\n\n", 0);

	ft_printf("%.0d|\n", 0);
	printf("%.0d|\n\n", 0);

	//Equal parameters positive
	printf("Printing positive numbers (dash = 0) with equal parameters\n");
	ft_printf("%7.7d|\n", 123);
	printf("%7.7d|\n\n", 123);

	ft_printf("%2.2d|\n", 123);
	printf("%2.2d|\n\n", 123);

	ft_printf("%4.3d|\n", 1234);
	printf("%4.3d|\n\n", 1234);

	ft_printf("%3.4d|\n", 1234);
	printf("%3.4d|\n\n", 1234);

	ft_printf("%2.2d|\n", 12);
	printf("%2.2d|\n\n", 12);

	//Equal parameters negative
	printf("Printing negative numbers (dash = 0) with equal parameters\n");
	ft_printf("%7.7d|\n", -123);
	printf("%7.7d|\n\n", -123);

	ft_printf("%2.2d|\n", -123);
	printf("%2.2d|\n\n", -123);

	ft_printf("%4.3d|\n", -123);
	printf("%4.3d|\n\n", -123);

	ft_printf("%3.4d|\n", -123);
	printf("%3.4d|\n\n", -123);

	ft_printf("%2.2d|\n", -1);
	printf("%2.2d|\n\n", -1);

	//Positive numbers
	printf("Printing positive numbers (dash = 1)\n");
	ft_printf("%-7.5d|\n", 123);
	printf("%-7.5d|\n\n", 123);

	ft_printf("%-7.2d|\n", 123);
	printf("%-7.2d|\n\n", 123);

	ft_printf("%-4.3d|\n", 12345);
	printf("%-4.3d|\n\n", 12345);

	ft_printf("%-3.4d|\n", 12345);
	printf("%-3.4d|\n\n", 12345);

	ft_printf("%-2.3d|\n", 12345);
	printf("%-2.3d|\n\n", 12345);

	ft_printf("%-2.7d|\n", 12345);
	printf("%-2.7d|\n\n", 12345);

	//Negative numbers
	printf("Printing negative numbers (dash = 1)\n");
	ft_printf("%-7.5d|\n", -123);
	printf("%-7.5d|\n\n", -123);

	ft_printf("%-7.1d|\n", -123);
	printf("%-7.1d|\n\n", -123);

	ft_printf("%-4.3d|\n", -12345);
	printf("%-4.3d|\n\n", -12345);

	ft_printf("%-3.4d|\n", -12345);
	printf("%-3.4d|\n\n", -12345);

	ft_printf("%-2.3d|\n", -12345);
	printf("%-2.3d|\n\n", -12345);

	ft_printf("%-2.7d|\n", -12345);
	printf("%-2.7d|\n\n", -12345);

	ft_printf("%-2.7d|\n", 0);
	printf("%-2.7d|\n\n", 0);

	ft_printf("%-7.2d|\n", 0);
	printf("%-7.2d|\n\n", 0);

	ft_printf("%-.0d|\n", 0);
	printf("%-.0d|\n\n", 0);

	//Equal parameters positive
	printf("Printing positive numbers (dash = 1) with equal parameters\n");
	ft_printf("%-7.7d|\n", 123);
	printf("%-7.7d|\n\n", 123);

	ft_printf("%-2.2d|\n", 123);
	printf("%-2.2d|\n\n", 123);

	ft_printf("%-4.3d|\n", 1234);
	printf("%-4.3d|\n\n", 1234);

	ft_printf("%-3.4d|\n", 1234);
	printf("%-3.4d|\n\n", 1234);

	ft_printf("%-2.2d|\n", 12);
	printf("%-2.2d|\n\n", 12);

	//Equal parameters negative
	printf("Printing negative numbers (dash = 1) with equal parameters\n");
	ft_printf("%-7.7d|\n", -123);
	printf("%-7.7d|\n\n", -123);

	ft_printf("%-2.2d|\n", -123);
	printf("%-2.2d|\n\n", -123);

	ft_printf("%-4.3d|\n", -123);
	printf("%-4.3d|\n\n", -123);

	ft_printf("%-3.4d|\n", -123);
	printf("%-3.4d|\n\n", -123);

	ft_printf("%-2.2d|\n", -1);
	printf("%-2.2d|\n\n", -1);

	ft_printf("%05d|\n", 20);
	printf("%05d|\n\n", 20);

	ft_printf("%-10.12u|\n", -12345);
	printf("%-10.12u|\n\n", -12345);

	ft_printf("%-10.12d|\n", -2147483647);
	printf("%-10.12d|\n\n", -2147483647);
	return (0);
}

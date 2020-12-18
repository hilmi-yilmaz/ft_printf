/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   testing_printf.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: hyilmaz <hyilmaz@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/16 11:29:59 by hyilmaz       #+#    #+#                 */
/*   Updated: 2020/12/18 10:37:30 by hyilmaz       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		main(void)
{

	//Testing with different conversion specifiers
	printf("c: %c\n", 'c');
	printf("d: %d\n", 26);
	printf("i: %i\n", 26);
	printf("o: %o\n", 26);
	printf("u: %u\n", 26);
	printf("x: %x\n", 26);
	printf("X: %X\n", 26);
	printf("e: %e\n", 26.1); // Without precision, 6 decimals
	printf("E: %E\n", 26.1); // Without precision, 6 decimals
	printf("f: %f\n", 26.1); // Without precision, 6 decimals
	printf("F: %F\n", 26.1); // Without precision, 6 decimals
	printf("g: %g\n", 26.1); // Without precision, 6 decimals
	printf("G: %G\n", 26.1); // Without precision, 6 decimals
	printf("a: %a\n", 26.1); // Without precision, 6 decimals
	printf("A: %A\n", 26.1); // Without precision, 6 decimals
	printf("s: %s\n", "hilmiyilmaz");
	printf("p: %p\n", "hilmiyilmaz");
	printf("%%: %%\n");

	int i;
	printf("hilmi%nyilmaz\n", &i);
	printf("i = %d\n", i);

	//Testing with flag characters
	printf("\n");
	printf("c: %c\n", 'c');
	printf("d (+): %+d\n", 26);
	printf("d (0): %0d\n", 26);
	printf("i: % i\n", 26);
	printf("i ('): %'i\n", 260000);
	printf("o: %o\n", 26);
	printf("u: %u\n", 26);
	printf("x: %x\n", 26);
	printf("X: %X\n", 26);
	printf("e: %#.0e\n", 26.1); // Without precision, 6 decimals
	printf("E: %#E\n", 26.1); // Without precision, 6 decimals
	printf("f: %#f\n", 26.1); // Without precision, 6 decimals
	printf("F: %#F\n", 26.1); // Without precision, 6 decimals
	printf("g: %g\n", 26.1); // Without precision, 6 decimals

	//Testing with Field Width
	printf("\n");
	printf("d: %17d\n", 26);
	printf("d: %017d\n", 26);
	printf("d: %-17d\n", 26);
	printf("d: %2d\n", 2600);
	printf("s: %7s\n", "hilmi"); 
	printf("s: %3s\n", "hilmi");

	//Testing with Precision
	printf("\n");
	printf("d: %.1d\n", 26);
	printf("d: %.5d\n", 26);
	printf("f: %.2f\n", 26.123456789);
	printf("f: %17.2f\n", 26.123456789);
	printf("f: %.20f\n", 26.123456789);
	printf("f: %2f\n", 2600.123456789);
	
	printf("A: %.4A\n", 266.66);
	printf("E: %.4E\n", 266.66);

	//Testing with the star
	printf("\n");
	printf("%s\n", "abc");
	printf("%8s\n", "abc");
	printf("%-8s\n", "abc");
	printf("%-*s\n", 8, "abc");
	printf("%1$d %2$s\n", 8, "abc");
	printf("%-*.10s\n", 8, "1234567890123");

	return (0);
}

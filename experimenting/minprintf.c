/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   minprintf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: hyilmaz <hyilmaz@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/18 11:22:17 by hyilmaz       #+#    #+#                 */
/*   Updated: 2020/12/18 14:08:15 by hyilmaz       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

void	minprintf(const char *format, ...)
{
	/* Declare ap (argument pointer) which will refer to each argument in turn */
	va_list ap;

	/* Declare some other values */
	const char	*p;
	char		*sval;
	int			ival;
	double		dval;
	int			i;
	int			j;

	/* Initialize the values */
	p = format;
	sval = NULL;
	i = 0;
	j = 0;

	/* Make ap point to the first unnamed argument
	** The second argument of va_start is the last named argument.
	** In this case: format. 
	*/
	va_start(ap, format);

	while (*(p + i) != '\0')
	{
		if (*(p + i) != '%')
			putchar(*(p + i));
		else
		{
			if (*(p + i + 1) == 'd')
			{
				ival = va_arg(ap, int);
				printf("%d", ival);
			}
			else if (*(p + i + 1) == 's')
			{
				sval = va_arg(ap, char *);
				while (*(sval + j) != '\0')
				{
					putchar(*(sval + j));
					j++;
				}
			}
			else if (*(p + i + 1) == 'f')
			{
				dval = va_arg(ap, double);
				printf("%f", dval);
			}
			i++;
		}
		i++;
	}
	va_end(ap);

}

int		main(void)
{
	minprintf("Mijn naam is %s en ik ben %d jaar oud. Ik ben %f meter lang.\n", "Hilmi", 22, 1.78);
	return (0);

}

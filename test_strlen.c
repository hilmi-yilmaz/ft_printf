#include <stdio.h>
#include "libft/libft.h"

int	main(void)
{
	char *str = "hil\nmi";
	int len;

	printf("%s\n", str);
	len = ft_strlen(str);
	printf("len = %d\n", len);
	return (0);
}

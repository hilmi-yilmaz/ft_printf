#!/bin/bash
#gcc -Wall -Wextra -Werror -fsanitize=address -g ft_printf.c set_info.c utils.c d_convert.c c_convert.c s_main.c conversion.c libft/libft.a
#valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes --verbose ./a.out
#./a.out

gcc -Wall -Wextra -Werror s_main.c && ./a.out

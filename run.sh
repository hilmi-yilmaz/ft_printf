#!/bin/bash

# Run d_convert
#gcc -Wall -Wextra -Werror -fsanitize=address -g ft_printf.c set_info.c utils.c d_convert.c c_convert.c s_convert.c d_main.c conversion.c exceptions.c libft/libft.a

# Run c_convert
#gcc -Wall -Wextra -Werror -fsanitize=address -g ft_printf.c set_info.c utils.c d_convert.c c_convert.c s_convert.c c_main.c conversion.c exceptions.c libft/libft.a

# Run s_convert
#gcc -Wall -Wextra -Werror -fsanitize=address -g ft_printf.c set_info.c utils.c d_convert.c c_convert.c s_convert.c s_main.c conversion.c exceptions.c libft/libft.a

# Run x_convert
gcc -Wall -Wextra -Werror -fsanitize=address -g ft_printf.c set_info.c utils.c x_convert.c d_convert.c c_convert.c s_convert.c x_main.c conversion.c exceptions.c libft/libft.a

# Run the program (with or without valgrind).
#valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes --verbose ./a.out
./a.out

#gcc -Wall -Wextra -Werror x_main.c && ./a.out

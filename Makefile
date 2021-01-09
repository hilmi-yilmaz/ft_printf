# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: hyilmaz <hyilmaz@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2020/12/19 10:51:42 by hyilmaz       #+#    #+#                  #
#    Updated: 2021/01/09 15:03:16 by hyilmaz       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -Wall -Wextra -Werror

NAME=libftprintf.a

LIBFT=libft/libft.a

SRC_PATH = src/

SRC =	ft_printf.c \
		set_info.c \
		exceptions.c \
		conversion.c \
		d_convert.c \
		u_convert.c \
		x_convert.c \
		c_convert.c \
		s_convert.c \
		p_convert.c

OBJ := $(SRC:%.c=$(SRC_PATH)%.o)

HEADER_FILE = $(SRC_PATH)ft_printf.h

all: $(NAME)

$(NAME): $(LIBFT) $(OBJ)
	cp $< $@
	ar cr $@ $(OBJ)

%.o: %.c $(HEADER_FILE)
	$(CC) $(CFLAGS) -c $< -o $@

$(LIBFT):
	make bonus -C libft

clean:
	make clean -C libft
	rm -f $(OBJ)

fclean: clean
	rm -f $(LIBFT)
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

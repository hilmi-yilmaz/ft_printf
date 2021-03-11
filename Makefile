# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: hyilmaz <hyilmaz@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2020/12/19 10:51:42 by hyilmaz       #+#    #+#                  #
#    Updated: 2021/03/11 21:55:51 by hyilmaz       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

CC			= 	gcc

CFLAGS 		= 	-Wall -Wextra -Werror

NAME		= 	libftprintf.a

LIBFT		= 	libft/libft.a

SRC_PATH 	= 	src/

UTILS_PATH 	= 	src/utils/

HEADER_FILE	= 	$(SRC_PATH)ft_printf.h

SRC 		=	ft_printf.c \
			  	set_info.c \
		      	set_excep.c \
				convert.c \
				convert_d.c \
				convert_u.c \
				convert_x.c \
				convert_s.c \
				convert_c.c \
				convert_p.c

UTILS 		= 	fill_minus.c \
				fill_number.c \
				fill_spaces.c \
				fill_zeros.c

SRC_OBJ 	:= 	$(SRC:%.c=$(SRC_PATH)%.o)

UTILS_OBJ 	:= 	$(UTILS:%.c=$(UTILS_PATH)%.o)

all: $(NAME)

$(NAME): $(LIBFT) $(SRC_OBJ) $(UTILS_OBJ)
	cp $< $@
	ar cr $@ $(SRC_OBJ) $(UTILS_OBJ)

%.o: %.c $(HEADER_FILE)
	$(CC) $(CFLAGS) -c $< -o $@

$(LIBFT):
	make -C libft

clean:
	make fclean -C libft
	rm -f $(SRC_OBJ) $(UTILS_OBJ)

fclean: clean
	rm -f $(LIBFT)
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: hyilmaz <hyilmaz@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2020/12/16 11:32:34 by hyilmaz       #+#    #+#                  #
#    Updated: 2020/12/18 10:10:10 by hyilmaz       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME=output

$(NAME): testing_printf.o
	gcc -Wall -Wextra -Werror $< -o $(NAME)

testing_printf.o: testing_printf.c
	gcc -Wall -Wextra -Werror -c $<

clean:
	rm *.o

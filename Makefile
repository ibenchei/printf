# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iben-che <iben-che@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/28 15:57:39 by iben-che          #+#    #+#              #
#    Updated: 2023/10/28 15:57:44 by iben-che         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a

LIBFT	=	libft.a

CC		=	gcc

CFLAGS	=	-Wall -Wextra -Werror

SRCS	=	ft_printf.c			\
	manage_functions_1.c	\
	manage_functions_2.c	\
	print_functions_1.c		\
	print_functions_2.c		\

OBJS	=	$(SRCS:.c=.o)

all:	$(NAME)

$(NAME):
	make -C ./libft
	cp libft/$(LIBFT) $(NAME)
	$(CC) $(CFLAGS) -c $(SRCS)
	ar rcs $(NAME) $(OBJS)

clean:
	make clean -C ./libft
	rm -f $(OBJS)

fclean:	clean
	make fclean -C ./libft
	rm -f $(NAME)

re:	fclean all

.PHONY:	all clean fclean re

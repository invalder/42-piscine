# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nnakarac <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/16 02:28:08 by nnakarac          #+#    #+#              #
#    Updated: 2021/12/16 19:12:15 by nnakarac         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC	=	ft_is_number.c \
		ft_is_printable.c \
		ft_linelen.c \
		ft_my_atoi.c \
		ft_putstr.c \
		ft_putstr_err.c \
		ft_putchar.c \
		ft_putnbr.c \
		ft_strlen.c \
		ft_strncpy.c

NAME	=	libutil.a

OBJ	=	$(SRC:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)
	rm -f *~

fclean:	clean
	rm -f $(NAME)

re:	fclean all

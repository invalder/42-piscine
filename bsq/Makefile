# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nnakarac <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/16 02:15:12 by nnakarac          #+#    #+#              #
#    Updated: 2021/12/17 20:30:08 by pjerddee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC	=	src/ck_sqr_size.c \
		src/find_biggest_square.c \
		src/ft_file_read.c \
		src/ft_format_map.c \
		src/ft_get_map_info.c \
		src/ft_is_valid_map.c \
		src/ft_occupy.c \
		src/ft_print_map.c \
		src/error.c \
		src/notify.c \
		src/ft_stdin_map.c \
		main.c

OBJ	=	$(SRC:.c=.o)

NAME	=	bsq

CC	=	gcc

LDFLAGS	=	-lutil -L ./lib/util/

CFLAGS	=	-W -Wall -Wextra -Werror

CPPFLAGS	=	-I ./include

all:	$(NAME)

$(NAME):	$(OBJ)
	make -C lib/util/
	$(CC) -o $(NAME) $(OBJ) $(LDFLAGS)

clean:
	make -C lib/util/ clean
	rm -f $(OBJ)
	rm -f *~

fclean:	clean
	make -C lib/util/ fclean
	rm -f $(NAME)

re:	fclean	all

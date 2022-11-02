# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alejandg <alejandg@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/26 15:48:01 by alejandg          #+#    #+#              #
#    Updated: 2022/11/02 10:18:42 by alejandg         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = ft_printf.c ft_putchar.c ft_putstr.c ft_putnbr.c ft_puthex.c ft_putunsigned.c

OBJS = ${SRCS:.c=.o}

CC = gcc

CFLAGS = -Wall -Werror -Wextra

RM = rm -f

all: ${NAME}

${NAME}: ${OBJS}
			${CC} -c ${CFLAGS} ${SRCS}
			ar crs ${NAME} ${OBJS}

clean:
				${RM} ${OBJS} ${BOBJS}



fclean:	clean
				${RM} ${NAME}

re:			fclean all

.PHONY: all, clean, fclean, re
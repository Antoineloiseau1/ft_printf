# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: antoine <antoine@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/03 15:16:13 by anloisea          #+#    #+#              #
#    Updated: 2022/04/06 12:06:11 by antoine          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a

SRCS	= ft_printf.c ft_check_spec.c ft_cases.c ./libft/ft_putchar_len.c main.c ./libft/ft_putstrlen.c \
		  ./libft/ft_strlen.c ./libft/ft_putnbr.c ./libft/ft_putunbr.c ./libft/ft_putchar.c ./libft/ft_putnbr_len.c \
		  ./libft/ft_putunbrlen.c ./libft/ft_putnbr_hexax_len.c

OBJS	= ${SRCS:.c=.o}

HDRS	= libftprintf.h ./libft/libft.h

CC		= gcc

CFLAGS	= -Wall -Wextra -Werror

.c.o:
	${CC} -c $< -o ${<:.c=.o}

all:		${NAME}
		${CC} ${CFLAGS} ${OBJS} -o prog

${NAME}: 	${OBJS}
	ar rc ${NAME} ${OBJS}


clean:
	rm -f ${OBJS} prog

fclean: clean
	rm -f ${NAME} prog

re: fclean all

.PHONY: all clean fclean re

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anloisea <anloisea@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/08 13:31:33 by anloisea          #+#    #+#              #
#    Updated: 2022/04/08 13:36:48 by anloisea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    = libft.a

SRCS    = 	ft_putchar_len.c \
			ft_putstr_len.c \
		  	ft_strlen.c \
			ft_putunbr.c \
			ft_putnbr_len.c \
		  	ft_putunbr_len.c \
		  	ft_puthexa_len.c \
			ft_putmem_len.c

OBJS    = ${SRCS:.c=.o}

HDR     = libft.h

CC      = gcc

CFLAGS  = -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all:            ${NAME}

${NAME}:        ${OBJS}
	ar rc ${NAME} ${OBJS} ${HDR}

clean :
	rm -f ${OBJS}

fclean:         clean
	rm -f ${NAME}

re:     		clean all

.PHONY: 		re all clean fclean
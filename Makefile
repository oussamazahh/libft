# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ozahidi <ozahidi@student.1337.ma>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/09 11:41:38 by ozahidi           #+#    #+#              #
#    Updated: 2023/12/10 14:19:57 by ozahidi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

AR = ar rc

SRCS = ft_isalnum.c ft_isascii.c ft_isdigit.c ft_isprint.c \
	ft_memmove.c ft_strchr.c ft_strlen.c ft_strrchr.c \
	ft_tolower.c ft_toupper.c ft_atoi.c ft_memset.c ft_bzero.c \
	ft_memcpy.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_memmove.c \
	ft_strnstr.c ft_strlcpy.c ft_isalpha.c ft_calloc.c ft_strdup.c \
	ft_strlcat.c

OBJS = ${SRCS:.c=.o}

# %.o : %.c
#  	${CC} -o ${OBJS} -c ${CFLAGS} $<

${NAME}: ${OBJS}
	${AR} ${NAME} ${OBJS}

.PHONY: all clean fclean re

all : ${NAME}

clean :
	rm -f ${OBJS}

fclean : clean
	rm -rf ${NAME}
re : fclean all
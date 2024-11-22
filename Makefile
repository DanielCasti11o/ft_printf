# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dacastil <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/22 20:38:40 by dacastil          #+#    #+#              #
#    Updated: 2024/11/22 20:39:06 by dacastil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror -g
AR = ar rcs
RM = rm -f
NAME = libftprintf.a

SRCS = ft_putchar.c  ft_putstr.c ft_putnbr.c ft_printf.c ft_puthex.c  ft_putpointer.c ft_putunbr.c

OBJS = $(SRCS:.c=.o)

all= $(NAME)

$(NAME): $(OBJS)
		$(AR) $(NAME) $(OBJS)

%.o: %.c
		$(CC) $(CFLAGS) -c $< -o $@
clean:
		$(RM) $(OBJS)
fclean:
		$(RM) $(OBJS) $(NAME)
re: fclean all

.PHONY: all clean fclean re

CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f
NAME = ft_printf.a
SRCRS = ft_printf_utils.c ft_printf.c ft_puthex.c ft_putnbr.c ft_putunbr ft_putpointer.c
OBJS = $(SRCS: .C=.O)

all= $(NAME)

$(NAME): $(OBJS)
		$(AR) $(NAME) $(OBJS)

%.c: %.o
		$(CC) $(CFLAGS) -c &< -o $@
clean:
		$(RM) $(OBJS)
fclean:
		$(RM) $(NAME)
re: fclean all

.PHONY: all clean fclean re

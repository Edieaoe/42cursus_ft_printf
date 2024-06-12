NAME	= libftprintf.a
SRCS	= ft_format.c ft_printf.c ft_putchar.c ft_puthex.c ft_putnbr.c\
		ft_putptr.c ft_putstr.c ft_putunbr.c
OBJS	= $(SRCS:.c=.o)
cc		= cc
CFLAG	= -Wall -Wextra -Werror

$(NAME): $(OBJS)
		ar rc $(NAME) $(OBJS)

all: $(NAME)

clean:
		rm -f $(OBJS)

fclean:
		rm -f $(NAME)

re: fclean all

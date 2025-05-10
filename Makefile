NAME = libftprintf.a
CC = cc
CFLAGS = -Wextra -Werror -Wall
SRC = \
      ft_putchar.c ft_putstr.c ft_putnbr.c ft_puthex.c ft_putptr.c ft_printf.c \
	  ft_putuint.c
OBJ = $(SRC:.c=.o)
HEADER = ft_printf.h

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) -rc $@ $?

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

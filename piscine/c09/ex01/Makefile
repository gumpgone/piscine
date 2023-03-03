GCC = gcc
CFLAGS = -Wall -Wextra -Werror -Iincludes
LIBNAME = libft.a
SRCS = srcs/ft_putchar.c \
  srcs/ft_strlen.c \
  srcs/ft_swap.c \
  srcs/ft_putstr.c \
  srcs/ft_strcmp.c
INCLUDE = includes/ft.h

OBJECTS = $(SRCS:.c=.o)

all: $(LIBNAME)

$(LIBNAME): $(OBJECTS) $(INCLUDE)
	ar -rc $@ $<

clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -rf $(LIBNAME)

re: fclean all

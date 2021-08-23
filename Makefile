NAME = libftprintf.a
CC = gcc
FLAGS = -Wall -Wextra -Werror
HEADERS = includes/ft_printf.h libft/libft.h
OPTIONS = -I $(HEADERS)

SRCS = srcs/ft_itoa_base.c srcs/ft_parse_value.c srcs/ft_parse.c srcs/ft_write_char.c \
		srcs/ft_write_hex.c srcs/ft_write_num.c srcs/ft_write_ptr.c srcs/ft_write_str.c \
		srcs/ft_write_ui.c ft_printf.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME):
	make re -C libft
	$(CC) -c $(FLAGS) $(OPTIONS) $(SRCS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re 
NAME = libftprintf.a
CC = gcc
FLAGS = -Wall -Wextra -Werror
INCLUDES = includes
LIBFT = libft

OPTIONS = -I $(INCLUDES)

FILES = ft_parse_value.c ft_parse.c ft_write_char.c ft_write_pct.c\
		ft_write_hex.c ft_write_num.c ft_write_ptr.c ft_write_str.c \
		ft_write_ui.c ft_printf.c

SRCS = $(addprefix srcs/, $(FILES))

OBJS = $(FILES:.c=.o)

all: $(NAME)

bonus : $(NAME)

$(NAME):
	make re -C $(LIBFT)
	$(CC) -c $(FLAGS) $(OPTIONS) $(SRCS)
	ar rcs $(NAME) $(OBJS) $(LIBFT)/*.o

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus

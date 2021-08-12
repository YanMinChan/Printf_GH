NAME = libftprintf.a
CC = gcc
FLAGS = -Wall -Wextra -Werror
HEADERS =
OPTIONS = -I $(HEADERS)

SRCS = 

OBJS = $(SRCS:.c=.o)

BONUS_SRCS = 

BONUS_OBJS = $(BONUS_SRCS:.c=.o)

all: $(NAME)

$(NAME):
	$(CC) -c $(FLAGS) $(OPTIONS) $(SRCS)
	ar rcs $(NAME) $(OBJS)

bonus: 
	$(CC) -c $(FLAGS) $(OPTIONS) $(SRCS) $(BONUS_SRCS)
	ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

clean:
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
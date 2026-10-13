NAME	= ft_cat

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror

SRCS	= main.c ft_cat.c
OBJS	= $(SRCS:.c=.o)
HEADER	= ft_cat.h

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

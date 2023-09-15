NAME = libft.a
CC = gcc
CFLAGS = -Werror -Wall -Wextra
RM = rm -f

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isprint.c ft_isascii.c ft_toupper.c ft_tolower.c ft_strlen.c ft_strchr.c ft_strrchr.c
	ft_bzero.c ft_memchr.c ft_memset.c ft_strncmp

OBJS := $(SRCS: .c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)

%.o:
	@S(CC) $(CFLAGS) -c $(SRCS)

clean:
	@S(RM) $(OBJS)

fclean: clean
	@S(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

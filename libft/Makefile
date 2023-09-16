NAME = libft.a
CC = gcc
CCFLAGS = -Werror -Wall -Wextra
RM = rm -f
INCLUDE = libft.h
LIB = ar rcs

SRC =   ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isprint.c \
		ft_isascii.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_strlen.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_bzero.c \
		ft_memchr.c \
		ft_memset.c \
		ft_strncmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memcmp.c \
		ft_strlcpy.c \
		ft_strnstr.c \
		ft_strlcat.c 


OBJ := $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) $(INCLUDE)
	$(LIB) $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CCFLAGS) -c -o $@ $<

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

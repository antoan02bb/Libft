NAME = libft.a

SRCS =	ft_isalpha.c ft_isalnum.c ft_isprint.c ft_isascii.c ft_isdigit.c ft_tolower.c \
		ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_strlcpy.c ft_toupper.c 

OBJ = $(SRCS:.c=.o)

CC = cc 
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
NAME = libft.a

SRC = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c

all: $(NAME)

$(NAME):
		gcc -c -Wall -Werror -Wextra $(SRC)
		ar rc $(NAME) ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swop.o
		ramlib &(NAME)

clean: 
	  /srcs/rm -f ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swop.o

fclean: clean 
	   /srcs/rm -f $(NAME)

re: fclean all


NAME = push_swap

SRC = main.c ft_atoi.c a_operations.c b_operations.c sort_three.c ft_error.c ft_is_digit.c ft_strcmp.c

FLAG = gcc -Wall -Wextra -Werror -fsanitize=address

all: $(NAME)

$(NAME):
		$(FLAG) $(SRC) -o $(NAME)
clean:
		rm -f $(NAME)
fclean: clean

re: fclean all
NAME = push_swap

SRC = main.c alloc.c is_sorted.c push_in_b.c push_in_a.c ft_atoi.c a_operations.c b_operations.c sort_three.c ft_error.c ft_strlen.c ft_is_digit.c ft_strcmp.c

FLAG = gcc -Wall -Wextra -Werror 

all: $(NAME)

$(NAME):
		$(FLAG) $(SRC) -o $(NAME)
clean:
		rm -f $(NAME)
fclean: clean

re: fclean all
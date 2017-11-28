make -C libft/ fclean && make -C libft/
gcc  -Wall -Wextra -Werror -o get_next_line.o -c get_next_line.c -I libft/includes
gcc  -Wall -Wextra -Werror -o main.o -c main.c -I libft/includes
gcc  -Wall -Wextra -Werror -o test_gnl main.o get_next_line.o -I libft/includes -L libft/ -lft

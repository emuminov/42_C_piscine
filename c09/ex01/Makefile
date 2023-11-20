FLAGS = -Wall -Werror -Wextra

SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c

OBJ = ${SRC:.c=.o}

INCLUDES = includes

NAME = libft.a

%o: %.c
	gcc ${FLAGS} -c $< -o ${<:.c=.o} -I ${INCLUDES}

${NAME}: ${OBJ}
	ar -rc ${NAME} ${OBJ}

all: ${NAME}

clean: 
	rm -f ${OBJ}

fclean: clean
	rm -f ${NAME}

re: fclean all

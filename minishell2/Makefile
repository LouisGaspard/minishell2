##
## EPITECH PROJECT, 2017
## makefile
## File description:
## makefile
##

NAME		=	mysh

CC		=	gcc

RM		=	rm -f

SRC_DIR		=	$(realpath ./src)

UTILS_DIR	=	$(realpath ./src/utils)

BUILTINS_DIR	=	$(realpath ./src/builtins)

SRCS		=	$(SRC_DIR)/main.c			\
			$(SRC_DIR)/init_struct.c		\
			$(SRC_DIR)/init_built_function.c	\
			$(SRC_DIR)/init_built_tab.c		\
			$(SRC_DIR)/my_pwd.c			\
			$(SRC_DIR)/my_realloc.c			\
			$(SRC_DIR)/check_builtins.c		\
			$(SRC_DIR)/my_shell.c			\
			$(BUILTINS_DIR)/my_cd.c			\
			$(BUILTINS_DIR)/my_setenv.c		\
			$(BUILTINS_DIR)/my_unsetenv.c		\
			$(BUILTINS_DIR)/my_env.c		\
			$(BUILTINS_DIR)/my_exit.c		\
			$(UTILS_DIR)/get_next_line.c		\
			$(UTILS_DIR)/count_tab_line.c		\
			$(UTILS_DIR)/my_copy_tab.c		\

OBJS		=	$(SRCS:.c=.o)

CFLAGS 		=	-I ./include/

CFLAGS 		+=	-W -Wall -Wextra

LIB		=	-L ./lib/ -lmy

all: $(NAME)

$(NAME): $(OBJS)
	make -C ./lib/my/
	$(CC) $(OBJS) -o $(NAME) $(CFLAGS) $(LIB)

tests_run:
	make -C ./tests/
	./tests/units
	cp ./tests/*.gc* .

clean:
	make clean -C ./lib/my/
	make clean -C ./tests/
	$(RM) $(OBJS)

fclean: clean
	$(RM) ./lib/libmy.a
	$(RM) ./tests/units
	$(RM) $(NAME)
	$(RM) *.gc*

re: fclean all

.PHONY: all clean fclean re

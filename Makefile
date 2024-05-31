NAME = push_swap
CC = gcc
RM = rm -f
FLAGS = -Wall -Wextra -Werror
LIBFT = libft
OBJECT = obj
SOURCES = sources

SOURCES = sources/main/main.c \
	sources/parsing/check_duplicates_and_sorted.c \
	sources/sorting/sort_large.c \
	sources/sorting/sort_small.c \
	sources/stack_operations/stack_new_add_back.c \
	sources/stack_operations/list_helpers.c \
	sources/stack_operations/list_utilities.c \
	sources/stack_operations/operations_primary.c \
	sources/stack_operations/operations_secondary.c \
	sources/stack_operations/operations_tertiary.c \
	sources/stack_operations/apply_rotations.c \
	sources/stack_operations/rotation_combinations.c \
	sources/utilities/calculate_rotations_ab.c \
	sources/utilities/calculate_rotations_ba.c \

OBJECT = ${SOURCES:.c=.o}

INCLUDE = -L ./libft -lft

NO_COLOR = \033[0;39m
GREEN = \033[1;32m
MAGENTA = \033[0;96m

.c.o:
	${CC} -c $< -o ${<:.c=.o}
	

${NAME}: ${OBJECT}
	${MAKE} -C $(LIBFT)
	${CC} ${FLAGS} ${OBJECT} -o ${NAME} ${INCLUDE}
	@echo "$(GREEN)push_swap compiled$(DEF_COLOR)"

all: ${NAME}

clean:
	${RM} ${OBJECT}
	@cd $(LIBFT) && ${MAKE} clean
	@echo "$(MAGENTA)push_swap object files cleaned$(NO_COLOR)"

fclean: clean
	${RM} ${NAME}
	@cd $(LIBFT) && ${MAKE} fclean
	@echo "$(MAGENTA)push_swap.a cleaned$(NO_COLOR)"

re: clean all

.PHONY: all clean fclean re bonus
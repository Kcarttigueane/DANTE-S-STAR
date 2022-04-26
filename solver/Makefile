##
## EPITECH PROJECT, 2021
## DANTE_STAR
## File description:
## Makefile
##

RM	= rm -f

NAME	= solver

SRC	=	$(wildcard *.c)	\
		$(wildcard lib/*.c) \
		$(wildcard sources/*.c) \
		$(wildcard sources/error_handling/*.c) \
		$(wildcard sources/queue_functions/*.c) \

OBJ	= $(SRC:.c=.o)

CFLAGS	= -Wall -Wextra -O3 -I include -g3

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)
	$(RM) $(wildcard lib/*.gcno)
	$(RM) $(wildcard lib/*.gcda)
	$(RM) $(wildcard tests/*.gcno)
	$(RM) $(wildcard tests/*.gcda)
	$(RM) $(wildcard vgcore*)

re:	fclean all

tests_run:
	make -C tests all

.PHONY: all clean fclean re tests_run

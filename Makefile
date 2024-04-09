##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile
##

SRC	=	src/prop_law.c	\
		src/printer.c	\
		src/main.c		\
		src/check_error.c\

NAME	=	202unsold

all:	$(NAME)

$(NAME):
	gcc  -o $(NAME) $(SRC) -lm

tests_run:
	gcc -o test src/prop_law.c bonus/tests/*.c --coverage -lcriterion -lm
	./test

clean:
	rm -f *.c~

fclean:	clean
	rm -f $(NAME)
	@rm -f test
	@find . -name "*.gcno" -type f -delete
	@find . -name "*.gcda" -type f -delete

re: fclean all

auteur:
	echo $(USER) > auteur
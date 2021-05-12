##
## EPITECH PROJECT, 2021
## matchstick
## File description:
## Makefile
##

SRC		=	src/main.c				\
			src/init_map.c			\
			src/game.c				\
			src/utils.c				\
			src/ai.c				\
			src/check_line.c

OBJ		=	$(SRC:.c=.o)

NAME	=	matchstick

CFLAGS 	= 	-Wextra -g

all:	$(OBJ)
	make -sC ./lib/my
	gcc -o $(NAME) $(OBJ) -Llib/my -lmy -Iinclude

clean:
	make -sC ./lib/my clean
	rm -f $(OBJ)
	find . \( -name \*# -o -name \#* -o -name \*~ \) -exec rm {} +

fclean:	clean
	make -sC ./lib/my fclean
	rm -f $(NAME)

re:	fclean all

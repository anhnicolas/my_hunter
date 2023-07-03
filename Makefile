##
## EPITECH PROJECT, 2022
## B-CPE-100-LIL-1-1-cpoolday10-nicolas1.nguyen
## File description:
## Makefile
##

SRC =		./my_hunter.c		\
			./main_loop.c		\
			./animation.c 		\
			./set_animation.c 	\
			./click.c 			\
			./tools.c

OBJ = $(SRC:.c=.o)

CFLAGS += -Werror -Wextra -I./include

CSFML = -lcsfml-graphics -lcsfml-audio -lcsfml-window -lcsfml-system

NAME = my_hunter

$(NAME): $(OBJ)
	make -C lib/my/
	gcc -o $(NAME) $(OBJ) -L./lib/my -lmy $(CSFML)

all:     $(NAME)

clean:
	rm -f $(OBJ)
	make clean -C lib/my/

fclean: clean
	rm -f $(NAME)
	make fclean -C lib/my/

re:	fclean all

.PHONY: all clean fclean re

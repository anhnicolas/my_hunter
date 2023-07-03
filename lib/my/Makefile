##
## EPITECH PROJECT, 2022
## Makefile day10
## File description:
## Makefile
##

SRC	=	my_putchar.c			\
		my_put_nbr.c			\
		my_getnbr.c 			\
		my_putstr.c				\
		my_putfloat.c			\
		my_put_uint.c			\
		my_strlen.c				\
		my_evil_str.c 			\
		my_strcpy.c				\
		my_compute_power_it.c	\
		my_convert_octal.c		\
		my_convert_binary.c		\
		my_put_lhexa.c			\
		my_put_uhexa.c			\
		my_put_pointer.c		\
		my_put_ocstr.c			\
		count_digit.c			\
		count_float_digits.c	\
		count_uint_digits.c		\
		count_octal.c			\
		count_binary.c			\
		count_lhexa.c			\
		count_uhexa.c			\
		count_pointer.c			\
		count_ocstr.c			\
		format.c				\
		type_1.c				\
		type_2.c				\
		type_3.c				\
		my_printf.c

OBJ = $(SRC:.c=.o)

CFLAGS += -Wall -Wextra -I../../include

NAME =	libmy.a

all:	$(NAME)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

re:	fclean all

.PHONY: all clean fclean re

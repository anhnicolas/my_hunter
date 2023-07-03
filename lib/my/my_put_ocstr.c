/*
** EPITECH PROJECT, 2022
** my_put_ocstr
** File description:
** my_put_ocstr
*/

#include <my_utils.h>

void special(char const *str, int i)
{
    int nb_zero = 3 - count_digit(my_convert_octal(str[i]));
    my_putchar(92);
    for (; nb_zero != 0; --nb_zero)
        my_putchar('0');
    my_put_nbr(my_convert_octal(str[i]));
}

int my_put_ocstr(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < 32 || str[i] == 127)
            special(str, i);
        my_putchar(str[i]);
    }
    return 0;
}

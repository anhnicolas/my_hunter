/*
** EPITECH PROJECT, 2022
** B-CPE-100-LIL-1-1-cpoolday04-nicolas1.nguyen
** File description:
** my_putstr
*/

#include <my_utils.h>

int my_putstr(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        my_putchar(str[i]);
    }
    return 0;
}

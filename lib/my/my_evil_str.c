/*
** EPITECH PROJECT, 2022
** B-CPE-100-LIL-1-1-cpoolday04-nicolas1.nguyen
** File description:
** my_evil_str
*/

#include <my_utils.h>

char *my_evil_str(char *str)
{
    int i;
    int length = my_strlen(str) - 1;
    char temp;

    for (i = 0; i < length / 2; i++) {
        temp = str[length - i];
        str[length - i] = str[i];
        str[i] = temp;
    }
    return (str);
}

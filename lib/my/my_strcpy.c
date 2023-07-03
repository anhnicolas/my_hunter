/*
** EPITECH PROJECT, 2022
** B-CPE-100-LIL-1-1-cpoolday06-nicolas1.nguyen
** File description:
** my_strcpy
*/

#include <my_utils.h>

char *my_strcpy(char *dest, char const *src)
{
    for (int i = 0; i <= my_strlen(src); i++) {
        if (i == my_strlen(src))
            dest[i] = '\0';
        else
            dest[i] = src[i];
    }
    return (dest);
}

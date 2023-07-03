/*
** EPITECH PROJECT, 2022
** my_put_point.c
** File description:
** my_put_point
*/

#include <my_utils.h>

int my_put_pointer(long long p)
{
    char result[100];
    long long tmp = 0;
    long long dif = 0;
    int count = 0;
    my_putstr("0x");
    while (p != 0) {
        tmp = p % 16;
        if (tmp > 9) {
            dif = tmp - 9;
            tmp = dif + 96;
            result[count] = tmp;
        } else
            result[count] = tmp + 48;
        p = p / 16;
        count++;
    }
    result[count] = '\0';
    for (; count != -1; count--)
        my_putchar(result[count]);
    return 0;
}

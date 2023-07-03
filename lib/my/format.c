/*
** EPITECH PROJECT, 2022
** B-CPE-101-LIL-1-1-myprintf-elliot.alladaye
** File description:
** flags
*/

#include <my_printf.h>
#include <my_utils.h>

void print_padding(int padding, int len)
{
    int sum = padding - len;

    if (sum > 0) {
        for (int j = 0; j < sum; j++)
            my_putchar(' ');
    }
}

int check_padding(char const *format, int i)
{
    int padding;

    if (my_isdigit(format[i]) == 0) {
        padding = my_getnbr(format + i);
        return padding;
    }
    return 0;
}

int check_format(char const *format, va_list ap, int i)
{
    int padding = 0;
    int j = i;

    for (; my_isdigit(format[i]) != 1; i++)
    padding = check_padding(format, j);
    check_type(format, ap, i, padding);
    return i;
}

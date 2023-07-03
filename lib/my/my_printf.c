/*
** EPITECH PROJECT, 2022
** mini_printf
** File description:
** comme printf
*/

#include <my_utils.h>
#include <my_printf.h>
#include <my_array.h>

int check_type(char const *format, va_list ap, int i, int padding)
{
    int j = 0;

    while (j < my_strlen(array)) {
        if (format[i] == array[j]) {
            count += (*type[j])(ap, padding, 6, count);
            return count;
        } else
            j++;
    }
    j = 0;
    return 0;
}

int my_printf(const char *format, ...)
{
    count = 0;
    va_list ap;
    va_start(ap, format);

    for (int i = 0; format[i] != '\0'; i++) {
        if (format[i] == '%') {
            i++;
            i = check_format(format, ap, i);
        } else {
            my_putchar(format[i]);
            count++;
        }
    }
    va_end(ap);
    return count;
}

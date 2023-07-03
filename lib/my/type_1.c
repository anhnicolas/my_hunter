/*
** EPITECH PROJECT, 2022
** B-CPE-101-LIL-1-1-myprintf-elliot.alladaye
** File description:
** type_1
*/

#include <my_printf.h>
#include <my_utils.h>

int type_d(va_list ap, int padding)
{
    int nb = va_arg(ap, int);
    int len = count_digit(nb);

    print_padding(padding, len);
    my_put_nbr(nb);
    return padding - len > 0 ? len + (padding - len) : len;
}

int type_i(va_list ap, int padding)
{
    int nb = va_arg(ap, int);
    int len = count_digit(nb);

    print_padding(padding, len);
    my_put_nbr(nb);
    return padding - len > 0 ? len + (padding - len) : len;
}

int type_s(va_list ap, int padding)
{
    char *s = va_arg(ap, char *);
    int len = my_strlen(s);

    print_padding(padding, len);
    my_putstr(s);
    return padding - len > 0 ? len + (padding - len) : len;
}

int type_c(va_list ap, int padding)
{
    char c = (char) va_arg(ap, int);
    int len = 1;

    print_padding(padding, len);
    my_putchar(c);
    return padding - len > 0 ? len + (padding - len) : len;
}

int type_percent(void)
{
    my_putchar('%');
    return 1;
}

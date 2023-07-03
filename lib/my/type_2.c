/*
** EPITECH PROJECT, 2022
** B-CPE-101-LIL-1-1-myprintf-elliot.alladaye
** File description:
** type_2
*/

#include <my_printf.h>
#include <my_utils.h>

int type_f(va_list ap, int padding, int p)
{
    float f = (float)va_arg(ap, double);
    int len = count_float_digits(f, p);

    print_padding(padding, len);
    my_putfloat(f, p);
    return padding - len > 0 ? len + (padding - len) : len;
}

int type_n(va_list ap, int padding, int p, int c)
{
    p = p;
    padding = padding;
    int *pointer = va_arg(ap, int*);
    *pointer = c;
    return 0;
}

int type_u(va_list ap, int padding)
{
    long nb = va_arg(ap, long);
    int len = count_uint_digits(nb);

    print_padding(padding, len);
    my_put_uint(nb);
    return padding - len > 0 ? len + (padding - len) : len;
}

int type_o(va_list ap, int padding)
{
    int nb = va_arg(ap, int);
    int len;

    nb = my_convert_octal(nb);
    len = count_digit(nb);
    print_padding(padding, len);
    my_put_nbr(nb);
    return padding - len > 0 ? len + (padding - len) : len;
}

int type_b(va_list ap, int padding)
{
    int nb = va_arg(ap, int);
    int len;

    nb = my_convert_binary(nb);
    len = count_digit(nb);
    print_padding(padding, len);
    my_put_nbr(nb);
    return padding - len > 0 ? len + (padding - len) : len;
}

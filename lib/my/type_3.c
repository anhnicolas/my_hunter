/*
** EPITECH PROJECT, 2022
** B-CPE-101-LIL-1-1-myprintf-elliot.alladaye
** File description:
** type_2
*/

#include <my_printf.h>
#include <my_utils.h>

int type_x(va_list ap, int padding)
{
    int nb = va_arg(ap, int);
    int len = my_count_lhexa(nb);

    print_padding(padding, len);
    my_put_lhexa(nb);
    return padding - len > 0 ? len + (padding - len) : len;
}

int type_x_up(va_list ap, int padding)
{
    int nb = va_arg(ap, int);
    int len = my_count_uhexa(nb);

    print_padding(padding, len);
    my_put_uhexa(nb);
    return padding - len > 0 ? len + (padding - len) : len;
}

int type_p(va_list ap, int padding)
{
    long long nb = va_arg(ap, long long);
    int len = my_count_pointer(nb);

    print_padding(padding, len);
    my_put_pointer(nb);
    return padding - len > 0 ? len + (padding - len) : len;
}

int type_s_up(va_list ap, int padding)
{
    char *str = va_arg(ap, char*);
    int len = count_ocstr(str);
    print_padding(padding, len);

    my_put_ocstr(str);
    return padding - len > 0 ? len + (padding - len) : len;
}

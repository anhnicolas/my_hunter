/*
** EPITECH PROJECT, 2022
** B-CPE-101-LIL-1-1-myprintf-elliot.alladaye
** File description:
** my_putfloat
*/

#include <my_utils.h>

void my_putfloat(float nb, int precision)
{
    int intpart = (int) nb;
    int pow = my_compute_power_it(10, precision);

    my_put_nbr(intpart);
    my_putchar('.');
    nb *= pow;
    if ((int) nb % pow <= 9)
        for (int i = 0; i < precision - 1; i++)
            my_putchar('0');
    my_put_nbr((int) nb % pow);
}

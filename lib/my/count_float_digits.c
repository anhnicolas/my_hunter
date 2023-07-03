/*
** EPITECH PROJECT, 2022
** B-CPE-101-LIL-1-1-myprintf-elliot.alladaye
** File description:
** count_float_digits
*/

#include <my_utils.h>

int count_float_digits(double nb, int precision)
{
    int intpart = (int) nb;
    int pow = my_compute_power_it(10, precision);
    int count = 0;

    count += count_digit(intpart);
    count++;
    nb *= pow;
    if ((int) nb % pow <= 9)
        for (int i = 0; i < precision - 1; i++)
            count++;
    count += count_digit((int) nb % pow);
    return count;
}

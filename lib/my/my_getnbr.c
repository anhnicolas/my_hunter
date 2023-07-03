/*
** EPITECH PROJECT, 2022
** B-CPE-101-LIL-1-1-myprintf-elliot.alladaye
** File description:
** my_getnbr
*/

#include <my_utils.h>

int my_isdigit(char str)
{
    if (str >= '0' && str <= '9')
        return (0);
    else
        return (1);
}

int my_getnbr(char const *str)
{
    int neg = 0;
    long temp = 0;
    int length = my_strlen(str) - 1;

    for (int i = 0; i <= length; i++) {
        if (length != i && str[i] == '-' && my_isdigit(str[i + 1]) == 0)
            neg = 1;
        if (my_isdigit(str[i]) == 0)
            temp = temp * 10 + str[i] - '0';
        if (length != i && my_isdigit(str[i]) == 0 &&
            my_isdigit(str[i + 1]) == 1)
            return (neg ? -temp : temp);
        if (temp > 2147483647 || temp <= -2147483648)
            return (0);
    }
    return (neg ? -temp : temp);
}

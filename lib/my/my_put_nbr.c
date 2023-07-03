/*
** EPITECH PROJECT, 2022
** my_put_nbr
** File description:
** Displays a number
*/

#include <my_utils.h>

int isneg(long number)
{
    if (number < 0) {
        return 1;
    } else {
        return 0;
    }
}

int expo(int a, int b)
{
    int count = 1;
    for (int i = 0; i < b; i++) {
        count *= a;
    }
    return count;
}

int display(long n)
{
    int digits = 0;

    while ((n / (expo(10, digits))) > 9){
        digits += 1;
    }
    for (int i = digits; i >= 0; i--){
        my_putchar((n / expo(10,i)) + 48);
        n -= ((n / expo(10, i))) * expo(10, i);
    }
    return 0;
}

int my_put_nbr(int n)
{
    long tmp = (long)n;

    if (isneg(tmp)){
        my_putchar('-');
        tmp *= -1;
    }
    display(tmp);
    return 0;
}

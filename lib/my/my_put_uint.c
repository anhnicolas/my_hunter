/*
** EPITECH PROJECT, 2022
** my_put_nbr
** File description:
** write a number
*/

#include <my_utils.h>

static int my_expo(int a, int b)
{
    int sum = 1;
    for (int i = 0; i < b; i++) {
        sum *= a;
    }
    return sum;
}

static int print_nbr(long n)
{
    int numOfNumber = 0;

    while ((n / (my_expo(10,numOfNumber))) > 9){
        numOfNumber += 1;
    }
    for (int i = numOfNumber; i >= 0; i--){
        my_putchar((n / my_expo(10,i)) + 48);
        n -= ((n / my_expo(10, i))) * my_expo(10, i);
    }
    return 0;
}

int my_put_uint(unsigned int n)
{
    long tmp = (long)n;

    print_nbr(tmp);
    return 0;
}

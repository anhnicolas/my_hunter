/*
** EPITECH PROJECT, 2022
** my_put_nbr
** File description:
** write a number
*/

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
        n -= ((n / my_expo(10, i))) * my_expo(10, i);
    }
    return numOfNumber + 1;
}

int count_uint_digits(unsigned int n)
{
    int count = 0;
    long tmp = (long)n;

    count = print_nbr(tmp);
    return count;
}

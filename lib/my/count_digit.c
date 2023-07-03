/*
** EPITECH PROJECT, 2022
** B-CPE-101-LIL-1-1-miniprintf-nicolas1.nguyen
** File description:
** count_digit
*/

int count_digit(int nb)
{
    int count = 0;

    if (nb < 0) {
        nb = nb * -1;
        count++;
    }
    while (nb > 0) {
        nb = nb / 10;
        count++;
    }
    return count;
}

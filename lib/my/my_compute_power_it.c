/*
** EPITECH PROJECT, 2022
** B-CPE-100-LIL-1-1-cpoolday05-nicolas1.nguyen
** File description:
** my_compute_power_it
*/

int my_compute_power_it(int nb, int p)
{
    int res = 1;
    int i = 0;

    if (p == 0)
        res = 1;
    if (p < 0)
        res = 0;
    while (i < p) {
        res = res * nb;
        i++;
    }
    return (res);
}

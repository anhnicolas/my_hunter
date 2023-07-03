/*
** EPITECH PROJECT, 2022
** my_put_octal
** File description:
** diplays an octal
*/

int my_convert_octal(int nbr)
{
    int result = 0;
    int tmp = 0;
    int multi = 1;

    while (nbr != 0) {
        tmp = nbr % 8;
        nbr = nbr / 8;
        result += tmp * multi;
        multi *= 10;
    }
    return (result);
}

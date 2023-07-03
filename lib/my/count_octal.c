/*
** EPITECH PROJECT, 2022
** B-CPE-101-LIL-1-1-myprintf-elliot.alladaye
** File description:
** my_count_octal
*/

int my_count_octal(int nbr)
{
    int result = 0;
    int tmp = 0;
    int multi = 1;
    int count = 0;

    while (nbr != 0) {
        tmp = nbr % 8;
        nbr = nbr / 8;
        result += tmp * multi;
        multi *= 10;
        count++;
    }
    if (result == 0)
        return 1;
    return count;
}

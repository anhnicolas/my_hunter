/*
** EPITECH PROJECT, 2022
** B-CPE-101-LIL-1-1-myprintf-elliot.alladaye
** File description:
** my_count_uhexa
*/

int my_count_uhexa(int nbr)
{
    int tmp = 0;
    int dif = 0;
    int count = 0;

    while (nbr != 0) {
        tmp = nbr % 16;
        if (tmp > 9){
            dif = tmp - 9;
            tmp = dif + 64;
        }
        nbr = nbr / 16;
        count++;
    }
    return count;
}

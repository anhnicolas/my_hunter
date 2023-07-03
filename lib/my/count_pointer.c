/*
** EPITECH PROJECT, 2022
** B-CPE-101-LIL-1-1-myprintf-elliot.alladaye
** File description:
** my_count_pointer
*/

int my_count_pointer(long long p)
{
    long long tmp = 0;
    long long dif = 0;
    int count = 0;

    while (p != 0) {
        tmp = p % 16;
        if (tmp > 9) {
            dif = tmp - 9;
            tmp = dif + 96;
        }
        p = p / 16;
        count++;
    }
    return count + 2;
}

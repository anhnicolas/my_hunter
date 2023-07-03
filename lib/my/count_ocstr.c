/*
** EPITECH PROJECT, 2022
** count_ocstr
** File description:
** count_ocstr
*/

int count_ocstr(char const *str)
{
    int sum = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < 32 || str[i] == 127) {
            sum += 4;
        } else
            sum++;
    }
    return sum;
}

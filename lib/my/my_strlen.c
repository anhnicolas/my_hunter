/*
** EPITECH PROJECT, 2022
** B-CPE-100-LIL-1-1-cpoolday04-nicolas1.nguyen
** File description:
** my_strlen
*/

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    return (i);
}

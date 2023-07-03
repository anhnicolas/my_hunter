/*
** EPITECH PROJECT, 2022
** my.h
** File description:
** contains all the prototypes
*/

#include <unistd.h>

#ifndef MY_UTILS_H
    #define MY_UTILS_H
    #define ABS(N) ((N < 0) ? (-N) : (N))

void my_putchar(char c);
int my_strlen(char const *str);
int my_putstr(char const *str);
void my_putfloat(float nb, int precision);
int my_put_nbr(int nb);
int my_getnbr(char const *str);
char *my_evil_str(char *str);
int my_compute_power_it(int nb, int p);
int my_isdigit(char str);
int my_put_uint(unsigned int n);
void my_put_snotation(double nb, int precision);
int my_convert_binary(int nbr);
int my_convert_octal(int nbr);
int my_put_pointer(long long p);
int my_count_pointer(long long p);
int count_digit(int);
int count_uint_digits(unsigned int nb);
int count_float_digits(double nb, int precision);
int my_put_uhexa(int);
int my_put_lhexa(int);
int my_count_uhexa(int);
int my_count_lhexa(int);
int count_ocstr(char const *str);
int my_put_ocstr(char const *);
char *my_strcpy(char *dest, char const *src);

#endif /* MY_UTILS_H */

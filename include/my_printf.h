/*
** EPITECH PROJECT, 2022
** B-CPE-101-LIL-1-1-myprintf-elliot.alladaye
** File description:
** my_printf
*/

#include <stdarg.h>

#ifndef MY_PRINTF_H_
    #define MY_PRINTF_H_

int my_printf(const char *format, ...);
int check_padding(char const *format, int);
void print_padding(int, int);
int check_format(char const *, va_list, int);
int check_type(char const *format, va_list ap, int i, int);
int type_d(va_list ap, int);
int type_i(va_list ap, int);
int type_s(va_list ap, int);
int type_c(va_list ap, int);
int type_f(va_list ap, int, int p);
int type_n(va_list ap, int, int, int);
int type_u(va_list ap, int);
int type_o(va_list ap, int);
int type_b(va_list ap, int);
int type_x(va_list ap, int);
int type_x_up(va_list ap, int);
int type_p(va_list ap, int);
int type_percent(void);
int type_s_up(va_list ap, int);

#endif /* !MY_PRINTF_H_ */

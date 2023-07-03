/*
** EPITECH PROJECT, 2022
** B-CPE-101-LIL-1-1-myprintf-elliot.alladaye
** File description:
** my_tab
*/

#include <my_printf.h>

#pragma once

static int (*type[])() = {type_d, type_i, type_s, type_c,
type_percent, type_f, type_f, type_n, type_u,
type_o, type_b, type_x, type_x_up, type_p, type_s_up};

static char const array[] = {'d', 'i', 's', 'c', '%', 'f', 'F',
'n', 'u', 'o', 'b', 'x', 'X', 'p', 'S'};

static int count = 0;

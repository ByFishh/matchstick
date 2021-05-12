/*
** EPITECH PROJECT, 2020
** get_flag.c
** File description:
** /
*/
#include <stdarg.h>
#include "./my.h"

void get_flag(char c, va_list list)
{
    flag_t flags[7] = {
        {'i', &my_printf_d},
        {'d', &my_printf_d},
        {'c', &my_printf_c},
        {'s', &my_printf_s},
        {'b', &my_printf_b},
        {'S', &my_printf_ss},
        {'%', &my_printf_pers}
    };

    for (int i = 0; i != 7; i++) {
        if (c == flags[i].c) {
            flags[i].func(list);
        }
    }

}
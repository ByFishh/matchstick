/*
** EPITECH PROJECT, 2020
** my_printf_b.c
** File description:
** /
*/
#include "./my.h"
#include <stdarg.h>

void my_printf_b(va_list list)
{
    int tmp[32];
    int i;
    int nbr = va_arg(list, int);

    for (i = 0; nbr > 0; i++) {
        tmp[i] = nbr % 2;
        nbr = nbr / 2;
    }
    for (int j = i - 1; j >= 0; j--) {
        my_put_nbr(tmp[j]);
    }
}
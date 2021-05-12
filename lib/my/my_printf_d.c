/*
** EPITECH PROJECT, 2020
** my_printf_d.c
** File description:
** /
*/
#include "./my.h"
#include <stdarg.h>

void my_printf_d(va_list list)
{
    my_put_nbr(va_arg(list, int));
}
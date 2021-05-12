/*
** EPITECH PROJECT, 2020
** my_printf_d.c
** File description:
** /
*/
#include "./my.h"
#include <stdarg.h>

void my_printf_s(va_list list)
{
    my_putstr(va_arg(list, char *));
}
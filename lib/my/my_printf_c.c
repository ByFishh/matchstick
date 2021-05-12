/*
** EPITECH PROJECT, 2020
** my_printf_c.c
** File description:
** /
*/
#include "./my.h"
#include <stdarg.h>

void my_printf_c(va_list list)
{
    my_putchar(va_arg(list, int));
}
/*
** EPITECH PROJECT, 2020
** my_printf.c
** File description:
** /
*/
#include <stdarg.h>
#include "./my.h"

void my_printf(char *s, ...)
{
    va_list list;
    va_start(list, s);

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == '%') {
            i++;
            get_flag(s[i], list);
        } else {
            my_putchar(s[i]);
        }
    }
    va_end(list);
}
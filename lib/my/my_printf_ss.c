/*
** EPITECH PROJECT, 2020
** my_printf_ss.c
** File description:
** /
*/

#include "./my.h"
#include <stdarg.h>
#include <stdio.h>

void my_put_octal(char c)
{
    int tmp[32];
    int result = c;
    int i = 0;
    for (; result != 0; i++) {
        tmp[i] = result % 8;
        result /= 8;
    }
    for (int j = i - 1; j >= 0; j--) {
        my_put_nbr(tmp[j]);
    }
}

void my_printf_ss(va_list list)
{
    char *str = va_arg(list, char *);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < 32 || str[i] >= 127) {
            my_putchar('\\');
            my_put_octal(str[i]);
        } else {
            my_putchar(str[i]);
        }
    }
}
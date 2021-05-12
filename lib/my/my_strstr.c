/*
** EPITECH PROJECT, 2020
** my_strstr
** File description:
** find path
*/
#include <stdio.h>

char *my_strstr(char *str, char const *to_find)
{
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == to_find[count]) {
            count++;
        } else {
            count = 0;
        }
        if (to_find[count] == '\0' && count > 0)
            return &str[i - count + 1];
    }
    if (to_find[0] == '\0')
        return str;
    else
        return NULL;
}

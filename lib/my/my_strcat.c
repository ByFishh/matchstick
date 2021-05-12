/*
** EPITECH PROJECT, 2020
** my_strcat.c
** File description:
** /
*/

#include <stdlib.h>

int my_strlen(char const *str);

char *my_strcat(char *dest, char *src)
{
    char *end = malloc(sizeof(char) * (my_strlen(dest) + my_strlen(src) + 1));
    end[my_strlen(dest) + my_strlen(src)] = '\0';

    if (dest == 0) {
        return src;
    }
    if (src == 0) {
        return dest;
    }
    if (dest == 0 && src == 0) {
        return dest;
    }
    int destl = my_strlen(dest);
    for (int i = 0; dest[i] != '\0'; i++) {
        end[i] = dest[i];
    }
    for (int i = 0; src[i] != '\0'; i++) {
        end[i + destl] = src[i];
    }
    return end;
}

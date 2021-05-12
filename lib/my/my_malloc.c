/*
** EPITECH PROJECT, 2020
** B-MUL-100-NCY-1-1-myradar-theo.maringer
** File description:
** my_malloc
*/

#include <stdlib.h>

char *my_malloc(int size, char c)
{
    char *ptr = malloc(sizeof(char) * (size + 1));

    for (int i = 0; i != size; i++) {
        ptr[i] = c;
    }

    ptr[size] = '\0';
    return ptr;
}
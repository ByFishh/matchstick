/*
** EPITECH PROJECT, 2020
** my_swap.c
** File description:
** swap 2 char
*/

int my_swap(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}

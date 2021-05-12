/*
** EPITECH PROJECT, 2020
** my_islowerupper.c
** File description:
** /
*/

int my_islowerupper(char c)
{
    if (c >= 'a' && c <= 'z') {
        return 1;
    } else if (c >= 'A' && c <= 'Z') {
        return 2;
    }
    return 0;
}

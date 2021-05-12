/*
** EPITECH PROJECT, 2020
** my_strlen.c
** File description:
** count char
*/

int my_strlen(char const *str)
{
    int size = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        size++;
    }
    return (size);
}

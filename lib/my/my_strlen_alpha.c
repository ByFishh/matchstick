/*
** EPITECH PROJECT, 2020
** my_strlen_alpha.c
** File description:
** /
*/

int my_islowerupper(char c);

int my_strlen_alpha(char *str)
{
    int size = 0;

    for (int i = 0; str[i] != '\0';i++) {
        if (my_islowerupper(str[i]) == 1 || my_islowerupper(str[i]) == 2) {
            size++;
        }
    }
    return size;
}

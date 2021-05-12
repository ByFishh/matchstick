/*
** EPITECH PROJECT, 2020
** my_revstr.c
** File description:
** reverse a string
*/

int my_strlen(char const *str);

char *my_revstr(char *str)
{
    int size = my_strlen(str);

    for (int i = 0; i < (size / 2); i++) {

        char c = str[i];

        str[i] = str[size-i-1];
        str[size-i-1] = c;
    }
    return (str);
}

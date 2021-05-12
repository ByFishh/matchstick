/*
** EPITECH PROJECT, 2020
** my_str_isnum.c
** File description:
** /
*/

int my_strlen(char const *str);

int my_str_isnum(char const *str)
{
    for (int i = 0; str[i] != '\n'; i++)
        if (!(str[i] >= '0' && str[i] <= '9'))
            return 0;
    return 1;
}

/*
** EPITECH PROJECT, 2020
** my_str_islower.c
** File description:
** /
*/

int my_strlen(char const *str);

int my_str_isupper(char const *str)
{
    int len = my_strlen(str);
    if (len == 0)
        return 1;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            len--;
    }
    if (len == 0)
        return 1;
    return 0;
}

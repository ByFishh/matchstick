/*
** EPITECH PROJECT, 2020
** my_getnbr.c
** File description:
** /
*/

int is_nb(char c)
{
    if (c >= '0' && c <= '9') {
        return 1;
    }
    return 0;
}

int my_getnbr(char const *str)
{
    int result = 0;
    int i = 0;
    int signe = 1;

    for (; is_nb(str[i]) == 0; i++);
    for (; str[i] == '-'; i++) {
        signe *= -1;
    }
    for (; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            result *= 10;
            result += str[i] - '0';
        } else {
            return (result * signe);
        }
    }
    return (result * signe);
}

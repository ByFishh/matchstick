/*
** EPITECH PROJECT, 2020
** B-MUL-100-NCY-1-1-myradar-theo.maringer
** File description:
** my_strtol
*/

int is_nb(char c)
{
    if (c >= '0' && c <= '9') {
        return 1;
    }
    return 0;
}

int my_strtol(char *str, char **endptr)
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
            (*endptr) = (*endptr + i);
            return (result * signe);
        }
    }
    (*endptr) = (*endptr + i);
    return (result * signe);
}
/*
** EPITECH PROJECT, 2020
** my_strcpy
** File description:
** copy from src
*/

int my_strlen(char const *str);

char *my_strcpy(char *dest, char const *src)
{
    int ldest = my_strlen(dest);
    int lsrc = my_strlen(src);

    if (ldest > lsrc) {
        for (int i = lsrc; i != ldest; i++) {
            dest[i] = 0;
        }
    }
    if (lsrc == 0) {
        dest = '\0';
        return dest;
    }

    for (int i = 0; src[i] != '\0'; i++) {
        dest[i] = src[i];
    }
    return dest;
}

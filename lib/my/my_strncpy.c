/*
** EPITECH PROJECT, 2020
** my_strncpy.c
** File description:
** copy to src with n size
*/

char *my_strncpy(char *dest, char *src, int n)
{
    for (int j = 0; dest[j] != '\0'; j++) {
        dest[j] = '\0';
    }
    for (int i = 0; src[i] != '\0' && i < n; i++) {
        dest[i] = src[i];
        if (i == n) {
            dest[i] = '\0';
        }
    }
    return dest;
}

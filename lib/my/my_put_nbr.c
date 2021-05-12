/*
** EPITECH PROJECT, 2020
** my_put_nbr.c
** File description:
** /
*/

void my_putchar(char c);

int my_put_nbr(int nbr)
{
    if (nbr < 0) {
        my_putchar('-');
        my_put_nbr(-nbr);
    } else if (nbr >= 10) {
        my_put_nbr(nbr / 10);
        my_put_nbr(nbr % 10);
    } else {
        my_putchar('0' + nbr);
    }
}

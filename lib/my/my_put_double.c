/*
** EPITECH PROJECT, 2020
** my_put_double.c
** File description:
** /
*/

void my_putchar(char);

int my_put_nbr(int);

double modulo(double x, double y)
{
    if (x < 0) {
        x *= -1;
    } else if (y < 0) {
        y *= -1;
    }
    while (x >= y) {
        x -= y;
    }
    if (x < 0) {
        return -x;
    }
    return x;
}

void my_put_double(double nbd)
{
    int nbi;

    my_put_nbr((int)nbd);
    my_putchar('.');
    nbi = (int)((modulo(nbd, 1)) * 100);
    if (nbi < 10) {
        my_putchar('0');
    }
    my_put_nbr(nbi);
}

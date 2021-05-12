/*
** EPITECH PROJECT, 2020
** my_compute_square_root.c
** File description:
** take square
*/

int my_compute_square_root(int nb)
{
    int x = 0;

    if (nb <= 0) {
        return 0;
    }

    while (x <= nb) {
        if ((x*x) == nb) {
            return x;
        }
        x++;
    }
    return 0;
}

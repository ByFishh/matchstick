/*
** EPITECH PROJECT, 2020
** my_compute_power_rec.c
** File description:
** power rec
*/

int my_compute_power_rec(int nb, int p)
{
    int val = 0;

    if (p == 0) {
        return 1;
    } else  if (p < 0) {
        return 0;
    }
    if (p > 1) {
        val = nb * my_compute_power_rec(nb, p - 1);
        return val;
    }
}

/*
** EPITECH PROJECT, 2020
** my_is_prime.c
** File description:
** check if number is prime
*/

int my_is_prime(int nb)
{
    if (nb < 2) {
        return 0;
    }
    for (int i = 2; i < nb; i++) {
        if (nb % i == 0) {
            return 0;
        }
    }
    return 1;
}

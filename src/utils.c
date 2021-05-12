/*
** EPITECH PROJECT, 2021
** matchstick
** File description:
** utils
*/

#include "../include/matchstick.h"

void display_map(t_data *data)
{
    for (int i = 0; i != data->row + 2; i++)
        my_printf("*");
    my_printf("\n");
    for (int i = 0; i != data->line; i++) {
        my_printf("*");
        for (int j = 0; j != data->row; j++)
            if (data->map[i][j] > 0)
                my_printf("|");
            else
                my_printf(" ");
        my_printf("*\n");
    }
    for (int i = 0; i != data->row + 2; i++)
        my_printf("*");
    my_printf("\n");
    if (is_win(data) == 0)
        my_printf("\n");
}

int get_nb_stick(t_data *data, int line)
{
    int stick = 0;

    line--;
    for (int i = 0; i != data->row; i++)
        if (data->map[line][i] != 0)
            stick++;
    return stick;
}

int is_win(t_data *data)
{
    for (int i = 0; i != data->line; i++)
        for (int j = 0; j != data->row; j++)
            if (data->map[i][j] > 0)
                return 0;
    return 1;
}

void remove_stick(t_data *data, int line, int nb)
{
    int i = data->row - 1;

    line--;
    while (i != 0 && data->map[line][i] == 0)
        i--;
    for (int j = 0; j != nb; j++)
        data->map[line][i - j] = 0;
}